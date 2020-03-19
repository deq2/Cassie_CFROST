/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:51 GMT-07:00
 */

#ifndef JS_PRIGHTTOEBOTTOMCONT_DOUBLESUPPORT_HH
#define JS_PRIGHTTOEBOTTOMCONT_DOUBLESUPPORT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

  void Js_pRightToeBottomCont_DoubleSupport_raw(double *p_output1, const double *var1);

  inline void Js_pRightToeBottomCont_DoubleSupport(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 10, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_pRightToeBottomCont_DoubleSupport_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_PRIGHTTOEBOTTOMCONT_DOUBLESUPPORT_HH
