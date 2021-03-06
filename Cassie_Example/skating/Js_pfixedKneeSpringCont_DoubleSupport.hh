/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:48 GMT-07:00
 */

#ifndef JS_PFIXEDKNEESPRINGCONT_DOUBLESUPPORT_HH
#define JS_PFIXEDKNEESPRINGCONT_DOUBLESUPPORT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

  void Js_pfixedKneeSpringCont_DoubleSupport_raw(double *p_output1, const double *var1);

  inline void Js_pfixedKneeSpringCont_DoubleSupport(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_pfixedKneeSpringCont_DoubleSupport_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_PFIXEDKNEESPRINGCONT_DOUBLESUPPORT_HH
