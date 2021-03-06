%% Setup
clear; clc; if(exist('startup.m', 'file')); startup; end
root = get_root_path();
addpath(fullfile(root, 'Cassie_Example'));
addpath(fullfile(root, 'submodules','Cassie_Model'));
addpath(fullfile(root, 'submodules','frost-dev'));
addpath(fullfile(root, 'submodules','C-Frost','Matlab'));
frost_addpath;

% Settings
OMIT_CORIOLIS = true;

type = 'standing';
% Load hybrid system
robot = Cassie(fullfile(root, 'submodules','Cassie_Model','urdf','cassie.urdf'));
robot.configureDynamics('DelayCoriolisSet',OMIT_CORIOLIS,'OmitCoriolisSet',OMIT_CORIOLIS);
[sys, domains, guards] = cassie.load_behavior(robot, '', type);

%% Create optimization problem
% num_grid.RightStance = 10;
% num_grid.LeftStance = 10;
num_grid = 40;
% nlp = HybridTrajectoryOptimization('Cassie_TwoStep_SS',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp = TrajectoryOptimization('Cassie_DoubleSupport',sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
bounds = skate.utils.getBounds_skating(robot);
nlp.configure(bounds);
addRunningCost(nlp, cassie.costs.torque(nlp), 'u');
nlp.update;

%% Create Dynamics Constraints
if ~exist('mex','dir')
    mkdir('mex');
end
compileConstraint(nlp, 1, 'dynamics_equation', 'mex');
compileConstraint(nlp, 3, 'dynamics_equation', 'mex');
frost_c.createConstraints(nlp, 1, 'dynamics_equation', 'src/', 'include/',[])
frost_c.createConstraints(nlp, 3, 'dynamics_equation', 'src/', 'include/',[])

%%
disp('Functions are exported successfully. Ready to compile!');