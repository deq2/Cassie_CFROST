/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:52 GMT-07:00
 */

#ifndef ATIMECONT_DOUBLESUPPORT_HH
#define ATIMECONT_DOUBLESUPPORT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

  void atimeCont_DoubleSupport_raw(double *p_output1, const double *var1,const double *var2);

  inline void atimeCont_DoubleSupport(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 60);
    assert_size_matrix(var2, 1, 60);

	
    // - Outputs
    assert_size_matrix(p_output1, 60, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    atimeCont_DoubleSupport_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ATIMECONT_DOUBLESUPPORT_HH
