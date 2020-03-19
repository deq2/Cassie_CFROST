/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:55 GMT-07:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t541;
  double t649;
  double t881;
  double t898;
  double t1059;
  double t1241;
  double t1279;
  double t1368;
  double t1533;
  double t1346;
  double t1564;
  double t1613;
  double t1744;
  double t1771;
  double t1799;
  double t1844;
  double t1864;
  double t1881;
  double t1960;
  double t2006;
  double t2029;
  double t2031;
  double t2077;
  double t2146;
  double t2366;
  double t2512;
  double t2849;
  double t2946;
  double t3085;
  double t3140;
  double t3247;
  double t3281;
  double t3429;
  double t3448;
  double t3486;
  double t3513;
  double t3644;
  double t3692;
  double t3745;
  double t3837;
  double t3890;
  double t3916;
  double t3931;
  double t3950;
  double t4010;
  double t4012;
  double t4070;
  double t4088;
  double t4314;
  double t4316;
  double t4248;
  double t4255;
  double t4383;
  double t4411;
  double t4570;
  double t4587;
  double t4721;
  double t4731;
  double t4863;
  double t4915;
  double t5233;
  double t5247;
  double t5367;
  double t5388;
  double t5960;
  double t5986;
  double t6075;
  double t6143;
  double t6188;
  double t6242;
  double t6376;
  double t6425;
  double t6593;
  double t6639;
  double t6923;
  double t6940;
  double t6997;
  double t7000;
  double t7066;
  double t7093;
  double t7188;
  double t7236;
  double t7240;
  double t7336;
  double t7467;
  double t7492;
  double t7559;
  double t7589;
  t541 = 4.*var5[0];
  t649 = t541 + var7[0] + var3[0];
  t881 = -1. + var8[0];
  t898 = 1/t881;
  t1059 = -1.*var1[0];
  t1241 = t1059 + var1[1];
  t1279 = -0.333333333333333*t898*t1241;
  t1368 = 4.*var5[1];
  t1533 = t1368 + var7[1] + var3[1];
  t1346 = -1.33333333333333*t898*t1241;
  t1564 = 4.*var5[2];
  t1613 = t1564 + var7[2] + var3[2];
  t1744 = 4.*var5[3];
  t1771 = t1744 + var7[3] + var3[3];
  t1799 = 4.*var5[4];
  t1844 = t1799 + var7[4] + var3[4];
  t1864 = 4.*var5[5];
  t1881 = t1864 + var7[5] + var3[5];
  t1960 = 4.*var5[6];
  t2006 = t1960 + var7[6] + var3[6];
  t2029 = 4.*var5[7];
  t2031 = t2029 + var7[7] + var3[7];
  t2077 = 4.*var5[8];
  t2146 = t2077 + var7[8] + var3[8];
  t2366 = 4.*var5[9];
  t2512 = t2366 + var7[9] + var3[9];
  t2849 = 4.*var5[10];
  t2946 = t2849 + var7[10] + var3[10];
  t3085 = 4.*var5[11];
  t3140 = t3085 + var7[11] + var3[11];
  t3247 = 4.*var5[12];
  t3281 = t3247 + var7[12] + var3[12];
  t3429 = 4.*var5[13];
  t3448 = t3429 + var7[13] + var3[13];
  t3486 = 4.*var5[14];
  t3513 = t3486 + var7[14] + var3[14];
  t3644 = 4.*var5[15];
  t3692 = t3644 + var7[15] + var3[15];
  t3745 = 4.*var5[16];
  t3837 = t3745 + var7[16] + var3[16];
  t3890 = 4.*var5[17];
  t3916 = t3890 + var7[17] + var3[17];
  t3931 = 4.*var5[18];
  t3950 = t3931 + var7[18] + var3[18];
  t4010 = 4.*var5[19];
  t4012 = t4010 + var7[19] + var3[19];
  t4070 = -1.*var7[0];
  t4088 = t4070 + var3[0];
  t4314 = -1.*var7[1];
  t4316 = t4314 + var3[1];
  t4248 = -0.25*t898*t1241;
  t4255 = 0.25*t898*t1241;
  t4383 = -1.*var7[2];
  t4411 = t4383 + var3[2];
  t4570 = -1.*var7[3];
  t4587 = t4570 + var3[3];
  t4721 = -1.*var7[4];
  t4731 = t4721 + var3[4];
  t4863 = -1.*var7[5];
  t4915 = t4863 + var3[5];
  t5233 = -1.*var7[6];
  t5247 = t5233 + var3[6];
  t5367 = -1.*var7[7];
  t5388 = t5367 + var3[7];
  t5960 = -1.*var7[8];
  t5986 = t5960 + var3[8];
  t6075 = -1.*var7[9];
  t6143 = t6075 + var3[9];
  t6188 = -1.*var7[10];
  t6242 = t6188 + var3[10];
  t6376 = -1.*var7[11];
  t6425 = t6376 + var3[11];
  t6593 = -1.*var7[12];
  t6639 = t6593 + var3[12];
  t6923 = -1.*var7[13];
  t6940 = t6923 + var3[13];
  t6997 = -1.*var7[14];
  t7000 = t6997 + var3[14];
  t7066 = -1.*var7[15];
  t7093 = t7066 + var3[15];
  t7188 = -1.*var7[16];
  t7236 = t7188 + var3[16];
  t7240 = -1.*var7[17];
  t7336 = t7240 + var3[17];
  t7467 = -1.*var7[18];
  t7492 = t7467 + var3[18];
  t7559 = -1.*var7[19];
  t7589 = t7559 + var3[19];
  p_output1[0]=0.333333333333333*t649*t898;
  p_output1[1]=-0.333333333333333*t649*t898;
  p_output1[2]=-1.;
  p_output1[3]=t1279;
  p_output1[4]=t1346;
  p_output1[5]=1.;
  p_output1[6]=t1279;
  p_output1[7]=0.333333333333333*t1533*t898;
  p_output1[8]=-0.333333333333333*t1533*t898;
  p_output1[9]=-1.;
  p_output1[10]=t1279;
  p_output1[11]=t1346;
  p_output1[12]=1.;
  p_output1[13]=t1279;
  p_output1[14]=0.333333333333333*t1613*t898;
  p_output1[15]=-0.333333333333333*t1613*t898;
  p_output1[16]=-1.;
  p_output1[17]=t1279;
  p_output1[18]=t1346;
  p_output1[19]=1.;
  p_output1[20]=t1279;
  p_output1[21]=0.333333333333333*t1771*t898;
  p_output1[22]=-0.333333333333333*t1771*t898;
  p_output1[23]=-1.;
  p_output1[24]=t1279;
  p_output1[25]=t1346;
  p_output1[26]=1.;
  p_output1[27]=t1279;
  p_output1[28]=0.333333333333333*t1844*t898;
  p_output1[29]=-0.333333333333333*t1844*t898;
  p_output1[30]=-1.;
  p_output1[31]=t1279;
  p_output1[32]=t1346;
  p_output1[33]=1.;
  p_output1[34]=t1279;
  p_output1[35]=0.333333333333333*t1881*t898;
  p_output1[36]=-0.333333333333333*t1881*t898;
  p_output1[37]=-1.;
  p_output1[38]=t1279;
  p_output1[39]=t1346;
  p_output1[40]=1.;
  p_output1[41]=t1279;
  p_output1[42]=0.333333333333333*t2006*t898;
  p_output1[43]=-0.333333333333333*t2006*t898;
  p_output1[44]=-1.;
  p_output1[45]=t1279;
  p_output1[46]=t1346;
  p_output1[47]=1.;
  p_output1[48]=t1279;
  p_output1[49]=0.333333333333333*t2031*t898;
  p_output1[50]=-0.333333333333333*t2031*t898;
  p_output1[51]=-1.;
  p_output1[52]=t1279;
  p_output1[53]=t1346;
  p_output1[54]=1.;
  p_output1[55]=t1279;
  p_output1[56]=0.333333333333333*t2146*t898;
  p_output1[57]=-0.333333333333333*t2146*t898;
  p_output1[58]=-1.;
  p_output1[59]=t1279;
  p_output1[60]=t1346;
  p_output1[61]=1.;
  p_output1[62]=t1279;
  p_output1[63]=0.333333333333333*t2512*t898;
  p_output1[64]=-0.333333333333333*t2512*t898;
  p_output1[65]=-1.;
  p_output1[66]=t1279;
  p_output1[67]=t1346;
  p_output1[68]=1.;
  p_output1[69]=t1279;
  p_output1[70]=0.333333333333333*t2946*t898;
  p_output1[71]=-0.333333333333333*t2946*t898;
  p_output1[72]=-1.;
  p_output1[73]=t1279;
  p_output1[74]=t1346;
  p_output1[75]=1.;
  p_output1[76]=t1279;
  p_output1[77]=0.333333333333333*t3140*t898;
  p_output1[78]=-0.333333333333333*t3140*t898;
  p_output1[79]=-1.;
  p_output1[80]=t1279;
  p_output1[81]=t1346;
  p_output1[82]=1.;
  p_output1[83]=t1279;
  p_output1[84]=0.333333333333333*t3281*t898;
  p_output1[85]=-0.333333333333333*t3281*t898;
  p_output1[86]=-1.;
  p_output1[87]=t1279;
  p_output1[88]=t1346;
  p_output1[89]=1.;
  p_output1[90]=t1279;
  p_output1[91]=0.333333333333333*t3448*t898;
  p_output1[92]=-0.333333333333333*t3448*t898;
  p_output1[93]=-1.;
  p_output1[94]=t1279;
  p_output1[95]=t1346;
  p_output1[96]=1.;
  p_output1[97]=t1279;
  p_output1[98]=0.333333333333333*t3513*t898;
  p_output1[99]=-0.333333333333333*t3513*t898;
  p_output1[100]=-1.;
  p_output1[101]=t1279;
  p_output1[102]=t1346;
  p_output1[103]=1.;
  p_output1[104]=t1279;
  p_output1[105]=0.333333333333333*t3692*t898;
  p_output1[106]=-0.333333333333333*t3692*t898;
  p_output1[107]=-1.;
  p_output1[108]=t1279;
  p_output1[109]=t1346;
  p_output1[110]=1.;
  p_output1[111]=t1279;
  p_output1[112]=0.333333333333333*t3837*t898;
  p_output1[113]=-0.333333333333333*t3837*t898;
  p_output1[114]=-1.;
  p_output1[115]=t1279;
  p_output1[116]=t1346;
  p_output1[117]=1.;
  p_output1[118]=t1279;
  p_output1[119]=0.333333333333333*t3916*t898;
  p_output1[120]=-0.333333333333333*t3916*t898;
  p_output1[121]=-1.;
  p_output1[122]=t1279;
  p_output1[123]=t1346;
  p_output1[124]=1.;
  p_output1[125]=t1279;
  p_output1[126]=0.333333333333333*t3950*t898;
  p_output1[127]=-0.333333333333333*t3950*t898;
  p_output1[128]=-1.;
  p_output1[129]=t1279;
  p_output1[130]=t1346;
  p_output1[131]=1.;
  p_output1[132]=t1279;
  p_output1[133]=0.333333333333333*t4012*t898;
  p_output1[134]=-0.333333333333333*t4012*t898;
  p_output1[135]=-1.;
  p_output1[136]=t1279;
  p_output1[137]=t1346;
  p_output1[138]=1.;
  p_output1[139]=t1279;
  p_output1[140]=0.25*t4088*t898;
  p_output1[141]=-0.25*t4088*t898;
  p_output1[142]=-0.5;
  p_output1[143]=t4248;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t4255;
  p_output1[147]=0.25*t4316*t898;
  p_output1[148]=-0.25*t4316*t898;
  p_output1[149]=-0.5;
  p_output1[150]=t4248;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t4255;
  p_output1[154]=0.25*t4411*t898;
  p_output1[155]=-0.25*t4411*t898;
  p_output1[156]=-0.5;
  p_output1[157]=t4248;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t4255;
  p_output1[161]=0.25*t4587*t898;
  p_output1[162]=-0.25*t4587*t898;
  p_output1[163]=-0.5;
  p_output1[164]=t4248;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t4255;
  p_output1[168]=0.25*t4731*t898;
  p_output1[169]=-0.25*t4731*t898;
  p_output1[170]=-0.5;
  p_output1[171]=t4248;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t4255;
  p_output1[175]=0.25*t4915*t898;
  p_output1[176]=-0.25*t4915*t898;
  p_output1[177]=-0.5;
  p_output1[178]=t4248;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t4255;
  p_output1[182]=0.25*t5247*t898;
  p_output1[183]=-0.25*t5247*t898;
  p_output1[184]=-0.5;
  p_output1[185]=t4248;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t4255;
  p_output1[189]=0.25*t5388*t898;
  p_output1[190]=-0.25*t5388*t898;
  p_output1[191]=-0.5;
  p_output1[192]=t4248;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t4255;
  p_output1[196]=0.25*t5986*t898;
  p_output1[197]=-0.25*t5986*t898;
  p_output1[198]=-0.5;
  p_output1[199]=t4248;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t4255;
  p_output1[203]=0.25*t6143*t898;
  p_output1[204]=-0.25*t6143*t898;
  p_output1[205]=-0.5;
  p_output1[206]=t4248;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t4255;
  p_output1[210]=0.25*t6242*t898;
  p_output1[211]=-0.25*t6242*t898;
  p_output1[212]=-0.5;
  p_output1[213]=t4248;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t4255;
  p_output1[217]=0.25*t6425*t898;
  p_output1[218]=-0.25*t6425*t898;
  p_output1[219]=-0.5;
  p_output1[220]=t4248;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t4255;
  p_output1[224]=0.25*t6639*t898;
  p_output1[225]=-0.25*t6639*t898;
  p_output1[226]=-0.5;
  p_output1[227]=t4248;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t4255;
  p_output1[231]=0.25*t6940*t898;
  p_output1[232]=-0.25*t6940*t898;
  p_output1[233]=-0.5;
  p_output1[234]=t4248;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t4255;
  p_output1[238]=0.25*t7000*t898;
  p_output1[239]=-0.25*t7000*t898;
  p_output1[240]=-0.5;
  p_output1[241]=t4248;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t4255;
  p_output1[245]=0.25*t7093*t898;
  p_output1[246]=-0.25*t7093*t898;
  p_output1[247]=-0.5;
  p_output1[248]=t4248;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t4255;
  p_output1[252]=0.25*t7236*t898;
  p_output1[253]=-0.25*t7236*t898;
  p_output1[254]=-0.5;
  p_output1[255]=t4248;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t4255;
  p_output1[259]=0.25*t7336*t898;
  p_output1[260]=-0.25*t7336*t898;
  p_output1[261]=-0.5;
  p_output1[262]=t4248;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t4255;
  p_output1[266]=0.25*t7492*t898;
  p_output1[267]=-0.25*t7492*t898;
  p_output1[268]=-0.5;
  p_output1[269]=t4248;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t4255;
  p_output1[273]=0.25*t7589*t898;
  p_output1[274]=-0.25*t7589*t898;
  p_output1[275]=-0.5;
  p_output1[276]=t4248;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t4255;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 280, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
