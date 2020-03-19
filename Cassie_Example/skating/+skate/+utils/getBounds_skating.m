function bounds = getBounds(robot, time)

% Get Bounds
model_bounds = robot.getLimits();
bounds = struct();
% [1 2 3 4 5 6 ... 20] = [x y z yaw pitch roll abductionR rotationR thighR kneeR toeR xxxL]
model_bounds.states.x.lb(1:3) = [-10,-10,-10]; 
model_bounds.states.x.ub(1:3) = [10,10,10];

model_bounds.states.x.lb(4:6) = deg2rad(-5);
model_bounds.states.x.ub(4:6) = deg2rad(5);

model_bounds.states.x.lb([7,8,14,15]) = deg2rad(-5);
model_bounds.states.x.ub([7,8,14,15]) = deg2rad(5);

model_bounds.inputs.Control.u.lb([5,10]) = -0.01;
model_bounds.inputs.Control.u.ub([5,10]) = 0.01;

model_bounds.average_velocity.lb = 0.2;
model_bounds.average_velocity.ub = 0.2;

model_bounds.toe_to_toe_width.lb = -0.5; ub =-0.1;

bounds.average_pitch.lb = deg2rad(0);
bounds.average_pitch.ub = deg2rad(0);

bounds.average_yaw.lb = deg2rad(0);
bounds.average_yaw.ub = deg2rad(0);

bounds.average_hip_abduction.lb = deg2rad(0);
bounds.average_hip_abduction.ub = deg2rad(0);

bounds.average_hip_rotation.lb = deg2rad(0);
bounds.average_hip_rotation.ub = deg2rad(0);
% 
% model_bounds.step_length.lb = 0.4;
% model_bounds.step_length.ub = 0.4;
% 
% model_bounds.foot_clearance.lb = 0.15;
% model_bounds.foot_clearance.ub = 0.2;
% 
model_bounds.distance_pelvis_to_stance_toe.lb = 0.5;
model_bounds.distance_pelvis_to_stance_toe.ub = 1.0;
% 
% model_bounds.toe_to_toe_width.lb = -0.40; % 0.27 nominal width
% model_bounds.toe_to_toe_width.ub = -0.10;

%% Right Stance
% bounds.RightStance = model_bounds;

bounds.time.t0.lb = 0;
bounds.time.t0.ub = 0;
bounds.time.t0.x0 = 0;

bounds.time.tf.lb = time;
bounds.time.tf.ub = 0.4;
bounds.time.tf.x0 = 0.4;

bounds.time.duration.lb = time;
bounds.time.duration.ub = 0.4;
bounds.time.duration.x0 = 0.4;

bounds.average_velocity.lb = .2;
bounds.average_velocity.ub = .2;

bounds.toe_to_toe_width.ub = -0.1;
bounds.toe_to_toe_width.lb = -0.5;

bounds.distance_pelvis_to_stance_toe.lb = 0.5;
bounds.distance_pelvis_to_stance_toe.ub = 1.0;

bounds.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.params.pfourBar.lb = -0*ones(2,1);
bounds.params.pfourBar.ub = 0*ones(2,1);
bounds.params.pfourBar.x0 = zeros(2,1);

bounds.params.pRightToeBottom.lb = [-10;-10;0;0;-pi/2]; % x y z 
bounds.params.pRightToeBottom.ub = [10;10;0;0;-pi/2];
bounds.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.params.pLeftToeBottom.lb = [-10;-10;-10;0;-pi/2];
bounds.params.pLeftToeBottom.ub = [10;10;10;0;-pi/2];
bounds.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.params.atime.lb = -10*ones(6*10,1);
bounds.params.atime.ub = 10*ones(6*10,1);
bounds.params.atime.x0 = zeros(6*10,1);

bounds.params.ptime.lb = [bounds.time.tf.lb, bounds.time.t0.lb];
bounds.params.ptime.ub = [bounds.time.tf.ub, bounds.time.t0.ub];
bounds.params.ptime.x0 = [bounds.time.t0.x0, bounds.time.tf.x0];

bounds.time.kp = 100;
bounds.time.kd = 20;



%% Left Stance
% bounds.LeftStance = model_bounds;
% 
% bounds.LeftStance.time.t0.lb = 0;
% bounds.LeftStance.time.t0.ub = 0;
% bounds.LeftStance.time.t0.x0 = 0;
% 
% bounds.LeftStance.time.tf.lb = 0.4;
% bounds.LeftStance.time.tf.ub = 0.4;
% bounds.LeftStance.time.tf.x0 = 0.4;
% 
% bounds.LeftStance.time.duration.lb = 0.4;
% bounds.LeftStance.time.duration.ub = 0.4;
% bounds.LeftStance.time.duration.x0 = 0.4;
% 
% bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
% bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
% bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;
% 
% bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
% bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
% bounds.LeftStance.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;
% 
% bounds.LeftStance.inputs.ConstraintWrench.ffourBar.lb = -10000;
% bounds.LeftStance.inputs.ConstraintWrench.ffourBar.ub = 10000;
% bounds.LeftStance.inputs.ConstraintWrench.ffourBar.x0 = 100;
% 
% bounds.LeftStance.params.pfixedKneeSpring.lb = -0*ones(2,1);
% bounds.LeftStance.params.pfixedKneeSpring.ub = 0*ones(2,1);
% bounds.LeftStance.params.pfixedKneeSpring.x0 = zeros(2,1);
% 
% bounds.LeftStance.params.pfourBar.lb = -0*ones(2,1);
% bounds.LeftStance.params.pfourBar.ub = 0*ones(2,1);
% bounds.LeftStance.params.pfourBar.x0 = zeros(2,1);
% 
% bounds.LeftStance.params.pLeftToeBottom.lb = [-10;-10;-10;0;-pi/2];
% bounds.LeftStance.params.pLeftToeBottom.ub = [10;10;10;0;-pi/2];
% bounds.LeftStance.params.pLeftToeBottom.x0 = [0;0;0;0;-pi/2];
% 
% bounds.LeftStance.params.atime.lb = -10*ones(6*10,1);
% bounds.LeftStance.params.atime.ub = 10*ones(6*10,1);
% bounds.LeftStance.params.atime.x0 = zeros(6*10,1);
% 
% bounds.LeftStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
% bounds.LeftStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
% bounds.LeftStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];
% 
% bounds.LeftStance.time.kp = 100;
% bounds.LeftStance.time.kd = 20;
% 
% bounds.LeftStance.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
% bounds.LeftStance.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

% %% Impacts
% 
% % Right Impact
% bounds.RightImpact = model_bounds;
% % Left Impact
% bounds.LeftImpact = model_bounds;

end
