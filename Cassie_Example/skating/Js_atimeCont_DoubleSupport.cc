/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:53 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=2;
  p_output1[3]=2;
  p_output1[4]=3;
  p_output1[5]=3;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=5;
  p_output1[9]=5;
  p_output1[10]=6;
  p_output1[11]=6;
  p_output1[12]=7;
  p_output1[13]=7;
  p_output1[14]=8;
  p_output1[15]=8;
  p_output1[16]=9;
  p_output1[17]=9;
  p_output1[18]=10;
  p_output1[19]=10;
  p_output1[20]=11;
  p_output1[21]=11;
  p_output1[22]=12;
  p_output1[23]=12;
  p_output1[24]=13;
  p_output1[25]=13;
  p_output1[26]=14;
  p_output1[27]=14;
  p_output1[28]=15;
  p_output1[29]=15;
  p_output1[30]=16;
  p_output1[31]=16;
  p_output1[32]=17;
  p_output1[33]=17;
  p_output1[34]=18;
  p_output1[35]=18;
  p_output1[36]=19;
  p_output1[37]=19;
  p_output1[38]=20;
  p_output1[39]=20;
  p_output1[40]=21;
  p_output1[41]=21;
  p_output1[42]=22;
  p_output1[43]=22;
  p_output1[44]=23;
  p_output1[45]=23;
  p_output1[46]=24;
  p_output1[47]=24;
  p_output1[48]=25;
  p_output1[49]=25;
  p_output1[50]=26;
  p_output1[51]=26;
  p_output1[52]=27;
  p_output1[53]=27;
  p_output1[54]=28;
  p_output1[55]=28;
  p_output1[56]=29;
  p_output1[57]=29;
  p_output1[58]=30;
  p_output1[59]=30;
  p_output1[60]=31;
  p_output1[61]=31;
  p_output1[62]=32;
  p_output1[63]=32;
  p_output1[64]=33;
  p_output1[65]=33;
  p_output1[66]=34;
  p_output1[67]=34;
  p_output1[68]=35;
  p_output1[69]=35;
  p_output1[70]=36;
  p_output1[71]=36;
  p_output1[72]=37;
  p_output1[73]=37;
  p_output1[74]=38;
  p_output1[75]=38;
  p_output1[76]=39;
  p_output1[77]=39;
  p_output1[78]=40;
  p_output1[79]=40;
  p_output1[80]=41;
  p_output1[81]=41;
  p_output1[82]=42;
  p_output1[83]=42;
  p_output1[84]=43;
  p_output1[85]=43;
  p_output1[86]=44;
  p_output1[87]=44;
  p_output1[88]=45;
  p_output1[89]=45;
  p_output1[90]=46;
  p_output1[91]=46;
  p_output1[92]=47;
  p_output1[93]=47;
  p_output1[94]=48;
  p_output1[95]=48;
  p_output1[96]=49;
  p_output1[97]=49;
  p_output1[98]=50;
  p_output1[99]=50;
  p_output1[100]=51;
  p_output1[101]=51;
  p_output1[102]=52;
  p_output1[103]=52;
  p_output1[104]=53;
  p_output1[105]=53;
  p_output1[106]=54;
  p_output1[107]=54;
  p_output1[108]=55;
  p_output1[109]=55;
  p_output1[110]=56;
  p_output1[111]=56;
  p_output1[112]=57;
  p_output1[113]=57;
  p_output1[114]=58;
  p_output1[115]=58;
  p_output1[116]=59;
  p_output1[117]=59;
  p_output1[118]=60;
  p_output1[119]=60;
  p_output1[120]=1;
  p_output1[121]=61;
  p_output1[122]=2;
  p_output1[123]=62;
  p_output1[124]=3;
  p_output1[125]=63;
  p_output1[126]=4;
  p_output1[127]=64;
  p_output1[128]=5;
  p_output1[129]=65;
  p_output1[130]=6;
  p_output1[131]=66;
  p_output1[132]=7;
  p_output1[133]=67;
  p_output1[134]=8;
  p_output1[135]=68;
  p_output1[136]=9;
  p_output1[137]=69;
  p_output1[138]=10;
  p_output1[139]=70;
  p_output1[140]=11;
  p_output1[141]=71;
  p_output1[142]=12;
  p_output1[143]=72;
  p_output1[144]=13;
  p_output1[145]=73;
  p_output1[146]=14;
  p_output1[147]=74;
  p_output1[148]=15;
  p_output1[149]=75;
  p_output1[150]=16;
  p_output1[151]=76;
  p_output1[152]=17;
  p_output1[153]=77;
  p_output1[154]=18;
  p_output1[155]=78;
  p_output1[156]=19;
  p_output1[157]=79;
  p_output1[158]=20;
  p_output1[159]=80;
  p_output1[160]=21;
  p_output1[161]=81;
  p_output1[162]=22;
  p_output1[163]=82;
  p_output1[164]=23;
  p_output1[165]=83;
  p_output1[166]=24;
  p_output1[167]=84;
  p_output1[168]=25;
  p_output1[169]=85;
  p_output1[170]=26;
  p_output1[171]=86;
  p_output1[172]=27;
  p_output1[173]=87;
  p_output1[174]=28;
  p_output1[175]=88;
  p_output1[176]=29;
  p_output1[177]=89;
  p_output1[178]=30;
  p_output1[179]=90;
  p_output1[180]=31;
  p_output1[181]=91;
  p_output1[182]=32;
  p_output1[183]=92;
  p_output1[184]=33;
  p_output1[185]=93;
  p_output1[186]=34;
  p_output1[187]=94;
  p_output1[188]=35;
  p_output1[189]=95;
  p_output1[190]=36;
  p_output1[191]=96;
  p_output1[192]=37;
  p_output1[193]=97;
  p_output1[194]=38;
  p_output1[195]=98;
  p_output1[196]=39;
  p_output1[197]=99;
  p_output1[198]=40;
  p_output1[199]=100;
  p_output1[200]=41;
  p_output1[201]=101;
  p_output1[202]=42;
  p_output1[203]=102;
  p_output1[204]=43;
  p_output1[205]=103;
  p_output1[206]=44;
  p_output1[207]=104;
  p_output1[208]=45;
  p_output1[209]=105;
  p_output1[210]=46;
  p_output1[211]=106;
  p_output1[212]=47;
  p_output1[213]=107;
  p_output1[214]=48;
  p_output1[215]=108;
  p_output1[216]=49;
  p_output1[217]=109;
  p_output1[218]=50;
  p_output1[219]=110;
  p_output1[220]=51;
  p_output1[221]=111;
  p_output1[222]=52;
  p_output1[223]=112;
  p_output1[224]=53;
  p_output1[225]=113;
  p_output1[226]=54;
  p_output1[227]=114;
  p_output1[228]=55;
  p_output1[229]=115;
  p_output1[230]=56;
  p_output1[231]=116;
  p_output1[232]=57;
  p_output1[233]=117;
  p_output1[234]=58;
  p_output1[235]=118;
  p_output1[236]=59;
  p_output1[237]=119;
  p_output1[238]=60;
  p_output1[239]=120;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 120, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_atimeCont_DoubleSupport.hh"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

void Js_atimeCont_DoubleSupport_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
