/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:31:01 GMT-07:00
 */

#ifndef FRIGHTTOEBOTTOM_VEC_CASSIE_HH
#define FRIGHTTOEBOTTOM_VEC_CASSIE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

  void fRightToeBottom_vec_cassie_raw(double *p_output1, const double *var1,const double *var2);

  inline void fRightToeBottom_vec_cassie(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);
    assert_size_matrix(var2, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRightToeBottom_vec_cassie_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRIGHTTOEBOTTOM_VEC_CASSIE_HH
