/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 16:30:56 GMT-07:00
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
  double t992;
  double t1550;
  double t1794;
  double t1846;
  double t2014;
  double t2017;
  double t2056;
  double t2313;
  double t2757;
  double t2163;
  double t3191;
  double t3238;
  double t3456;
  double t3527;
  double t3858;
  double t3874;
  double t3962;
  double t4016;
  double t4323;
  double t4324;
  double t4680;
  double t4819;
  double t5308;
  double t5340;
  double t6065;
  double t6172;
  double t6490;
  double t6543;
  double t6992;
  double t7004;
  double t7237;
  double t7239;
  double t7551;
  double t7600;
  double t7699;
  double t7708;
  double t7750;
  double t7755;
  double t7891;
  double t7898;
  double t7978;
  double t7989;
  double t8020;
  double t8028;
  double t8066;
  double t8106;
  double t8123;
  double t8124;
  double t8159;
  double t8167;
  double t8147;
  double t8154;
  double t8248;
  double t8290;
  double t8344;
  double t8349;
  double t8365;
  double t8389;
  double t8427;
  double t8457;
  double t8497;
  double t8507;
  double t8580;
  double t8596;
  double t8722;
  double t8748;
  double t8816;
  double t8861;
  double t8887;
  double t8892;
  double t8942;
  double t8943;
  double t8962;
  double t8965;
  double t8977;
  double t8999;
  double t9057;
  double t9059;
  double t9066;
  double t9096;
  double t9112;
  double t9132;
  double t9170;
  double t9178;
  double t9200;
  double t9209;
  double t9227;
  double t9243;
  t992 = 4.*var5[0];
  t1550 = var3[0] + t992 + var7[0];
  t1794 = -1. + var8[0];
  t1846 = 1/t1794;
  t2014 = -1.*var1[0];
  t2017 = t2014 + var1[1];
  t2056 = -0.333333333333333*t1846*t2017;
  t2313 = 4.*var5[1];
  t2757 = var3[1] + t2313 + var7[1];
  t2163 = -1.33333333333333*t1846*t2017;
  t3191 = 4.*var5[2];
  t3238 = var3[2] + t3191 + var7[2];
  t3456 = 4.*var5[3];
  t3527 = var3[3] + t3456 + var7[3];
  t3858 = 4.*var5[4];
  t3874 = var3[4] + t3858 + var7[4];
  t3962 = 4.*var5[5];
  t4016 = var3[5] + t3962 + var7[5];
  t4323 = 4.*var5[6];
  t4324 = var3[6] + t4323 + var7[6];
  t4680 = 4.*var5[7];
  t4819 = var3[7] + t4680 + var7[7];
  t5308 = 4.*var5[8];
  t5340 = var3[8] + t5308 + var7[8];
  t6065 = 4.*var5[9];
  t6172 = var3[9] + t6065 + var7[9];
  t6490 = 4.*var5[10];
  t6543 = var3[10] + t6490 + var7[10];
  t6992 = 4.*var5[11];
  t7004 = var3[11] + t6992 + var7[11];
  t7237 = 4.*var5[12];
  t7239 = var3[12] + t7237 + var7[12];
  t7551 = 4.*var5[13];
  t7600 = var3[13] + t7551 + var7[13];
  t7699 = 4.*var5[14];
  t7708 = var3[14] + t7699 + var7[14];
  t7750 = 4.*var5[15];
  t7755 = var3[15] + t7750 + var7[15];
  t7891 = 4.*var5[16];
  t7898 = var3[16] + t7891 + var7[16];
  t7978 = 4.*var5[17];
  t7989 = var3[17] + t7978 + var7[17];
  t8020 = 4.*var5[18];
  t8028 = var3[18] + t8020 + var7[18];
  t8066 = 4.*var5[19];
  t8106 = var3[19] + t8066 + var7[19];
  t8123 = -1.*var7[0];
  t8124 = var3[0] + t8123;
  t8159 = -1.*var7[1];
  t8167 = var3[1] + t8159;
  t8147 = -0.25*t1846*t2017;
  t8154 = 0.25*t1846*t2017;
  t8248 = -1.*var7[2];
  t8290 = var3[2] + t8248;
  t8344 = -1.*var7[3];
  t8349 = var3[3] + t8344;
  t8365 = -1.*var7[4];
  t8389 = var3[4] + t8365;
  t8427 = -1.*var7[5];
  t8457 = var3[5] + t8427;
  t8497 = -1.*var7[6];
  t8507 = var3[6] + t8497;
  t8580 = -1.*var7[7];
  t8596 = var3[7] + t8580;
  t8722 = -1.*var7[8];
  t8748 = var3[8] + t8722;
  t8816 = -1.*var7[9];
  t8861 = var3[9] + t8816;
  t8887 = -1.*var7[10];
  t8892 = var3[10] + t8887;
  t8942 = -1.*var7[11];
  t8943 = var3[11] + t8942;
  t8962 = -1.*var7[12];
  t8965 = var3[12] + t8962;
  t8977 = -1.*var7[13];
  t8999 = var3[13] + t8977;
  t9057 = -1.*var7[14];
  t9059 = var3[14] + t9057;
  t9066 = -1.*var7[15];
  t9096 = var3[15] + t9066;
  t9112 = -1.*var7[16];
  t9132 = var3[16] + t9112;
  t9170 = -1.*var7[17];
  t9178 = var3[17] + t9170;
  t9200 = -1.*var7[18];
  t9209 = var3[18] + t9200;
  t9227 = -1.*var7[19];
  t9243 = var3[19] + t9227;
  p_output1[0]=0.333333333333333*t1550*t1846;
  p_output1[1]=-0.333333333333333*t1550*t1846;
  p_output1[2]=-1.;
  p_output1[3]=t2056;
  p_output1[4]=t2163;
  p_output1[5]=1.;
  p_output1[6]=t2056;
  p_output1[7]=0.333333333333333*t1846*t2757;
  p_output1[8]=-0.333333333333333*t1846*t2757;
  p_output1[9]=-1.;
  p_output1[10]=t2056;
  p_output1[11]=t2163;
  p_output1[12]=1.;
  p_output1[13]=t2056;
  p_output1[14]=0.333333333333333*t1846*t3238;
  p_output1[15]=-0.333333333333333*t1846*t3238;
  p_output1[16]=-1.;
  p_output1[17]=t2056;
  p_output1[18]=t2163;
  p_output1[19]=1.;
  p_output1[20]=t2056;
  p_output1[21]=0.333333333333333*t1846*t3527;
  p_output1[22]=-0.333333333333333*t1846*t3527;
  p_output1[23]=-1.;
  p_output1[24]=t2056;
  p_output1[25]=t2163;
  p_output1[26]=1.;
  p_output1[27]=t2056;
  p_output1[28]=0.333333333333333*t1846*t3874;
  p_output1[29]=-0.333333333333333*t1846*t3874;
  p_output1[30]=-1.;
  p_output1[31]=t2056;
  p_output1[32]=t2163;
  p_output1[33]=1.;
  p_output1[34]=t2056;
  p_output1[35]=0.333333333333333*t1846*t4016;
  p_output1[36]=-0.333333333333333*t1846*t4016;
  p_output1[37]=-1.;
  p_output1[38]=t2056;
  p_output1[39]=t2163;
  p_output1[40]=1.;
  p_output1[41]=t2056;
  p_output1[42]=0.333333333333333*t1846*t4324;
  p_output1[43]=-0.333333333333333*t1846*t4324;
  p_output1[44]=-1.;
  p_output1[45]=t2056;
  p_output1[46]=t2163;
  p_output1[47]=1.;
  p_output1[48]=t2056;
  p_output1[49]=0.333333333333333*t1846*t4819;
  p_output1[50]=-0.333333333333333*t1846*t4819;
  p_output1[51]=-1.;
  p_output1[52]=t2056;
  p_output1[53]=t2163;
  p_output1[54]=1.;
  p_output1[55]=t2056;
  p_output1[56]=0.333333333333333*t1846*t5340;
  p_output1[57]=-0.333333333333333*t1846*t5340;
  p_output1[58]=-1.;
  p_output1[59]=t2056;
  p_output1[60]=t2163;
  p_output1[61]=1.;
  p_output1[62]=t2056;
  p_output1[63]=0.333333333333333*t1846*t6172;
  p_output1[64]=-0.333333333333333*t1846*t6172;
  p_output1[65]=-1.;
  p_output1[66]=t2056;
  p_output1[67]=t2163;
  p_output1[68]=1.;
  p_output1[69]=t2056;
  p_output1[70]=0.333333333333333*t1846*t6543;
  p_output1[71]=-0.333333333333333*t1846*t6543;
  p_output1[72]=-1.;
  p_output1[73]=t2056;
  p_output1[74]=t2163;
  p_output1[75]=1.;
  p_output1[76]=t2056;
  p_output1[77]=0.333333333333333*t1846*t7004;
  p_output1[78]=-0.333333333333333*t1846*t7004;
  p_output1[79]=-1.;
  p_output1[80]=t2056;
  p_output1[81]=t2163;
  p_output1[82]=1.;
  p_output1[83]=t2056;
  p_output1[84]=0.333333333333333*t1846*t7239;
  p_output1[85]=-0.333333333333333*t1846*t7239;
  p_output1[86]=-1.;
  p_output1[87]=t2056;
  p_output1[88]=t2163;
  p_output1[89]=1.;
  p_output1[90]=t2056;
  p_output1[91]=0.333333333333333*t1846*t7600;
  p_output1[92]=-0.333333333333333*t1846*t7600;
  p_output1[93]=-1.;
  p_output1[94]=t2056;
  p_output1[95]=t2163;
  p_output1[96]=1.;
  p_output1[97]=t2056;
  p_output1[98]=0.333333333333333*t1846*t7708;
  p_output1[99]=-0.333333333333333*t1846*t7708;
  p_output1[100]=-1.;
  p_output1[101]=t2056;
  p_output1[102]=t2163;
  p_output1[103]=1.;
  p_output1[104]=t2056;
  p_output1[105]=0.333333333333333*t1846*t7755;
  p_output1[106]=-0.333333333333333*t1846*t7755;
  p_output1[107]=-1.;
  p_output1[108]=t2056;
  p_output1[109]=t2163;
  p_output1[110]=1.;
  p_output1[111]=t2056;
  p_output1[112]=0.333333333333333*t1846*t7898;
  p_output1[113]=-0.333333333333333*t1846*t7898;
  p_output1[114]=-1.;
  p_output1[115]=t2056;
  p_output1[116]=t2163;
  p_output1[117]=1.;
  p_output1[118]=t2056;
  p_output1[119]=0.333333333333333*t1846*t7989;
  p_output1[120]=-0.333333333333333*t1846*t7989;
  p_output1[121]=-1.;
  p_output1[122]=t2056;
  p_output1[123]=t2163;
  p_output1[124]=1.;
  p_output1[125]=t2056;
  p_output1[126]=0.333333333333333*t1846*t8028;
  p_output1[127]=-0.333333333333333*t1846*t8028;
  p_output1[128]=-1.;
  p_output1[129]=t2056;
  p_output1[130]=t2163;
  p_output1[131]=1.;
  p_output1[132]=t2056;
  p_output1[133]=0.333333333333333*t1846*t8106;
  p_output1[134]=-0.333333333333333*t1846*t8106;
  p_output1[135]=-1.;
  p_output1[136]=t2056;
  p_output1[137]=t2163;
  p_output1[138]=1.;
  p_output1[139]=t2056;
  p_output1[140]=0.25*t1846*t8124;
  p_output1[141]=-0.25*t1846*t8124;
  p_output1[142]=-0.5;
  p_output1[143]=t8147;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t8154;
  p_output1[147]=0.25*t1846*t8167;
  p_output1[148]=-0.25*t1846*t8167;
  p_output1[149]=-0.5;
  p_output1[150]=t8147;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t8154;
  p_output1[154]=0.25*t1846*t8290;
  p_output1[155]=-0.25*t1846*t8290;
  p_output1[156]=-0.5;
  p_output1[157]=t8147;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t8154;
  p_output1[161]=0.25*t1846*t8349;
  p_output1[162]=-0.25*t1846*t8349;
  p_output1[163]=-0.5;
  p_output1[164]=t8147;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t8154;
  p_output1[168]=0.25*t1846*t8389;
  p_output1[169]=-0.25*t1846*t8389;
  p_output1[170]=-0.5;
  p_output1[171]=t8147;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t8154;
  p_output1[175]=0.25*t1846*t8457;
  p_output1[176]=-0.25*t1846*t8457;
  p_output1[177]=-0.5;
  p_output1[178]=t8147;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t8154;
  p_output1[182]=0.25*t1846*t8507;
  p_output1[183]=-0.25*t1846*t8507;
  p_output1[184]=-0.5;
  p_output1[185]=t8147;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t8154;
  p_output1[189]=0.25*t1846*t8596;
  p_output1[190]=-0.25*t1846*t8596;
  p_output1[191]=-0.5;
  p_output1[192]=t8147;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t8154;
  p_output1[196]=0.25*t1846*t8748;
  p_output1[197]=-0.25*t1846*t8748;
  p_output1[198]=-0.5;
  p_output1[199]=t8147;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t8154;
  p_output1[203]=0.25*t1846*t8861;
  p_output1[204]=-0.25*t1846*t8861;
  p_output1[205]=-0.5;
  p_output1[206]=t8147;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t8154;
  p_output1[210]=0.25*t1846*t8892;
  p_output1[211]=-0.25*t1846*t8892;
  p_output1[212]=-0.5;
  p_output1[213]=t8147;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t8154;
  p_output1[217]=0.25*t1846*t8943;
  p_output1[218]=-0.25*t1846*t8943;
  p_output1[219]=-0.5;
  p_output1[220]=t8147;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t8154;
  p_output1[224]=0.25*t1846*t8965;
  p_output1[225]=-0.25*t1846*t8965;
  p_output1[226]=-0.5;
  p_output1[227]=t8147;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t8154;
  p_output1[231]=0.25*t1846*t8999;
  p_output1[232]=-0.25*t1846*t8999;
  p_output1[233]=-0.5;
  p_output1[234]=t8147;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t8154;
  p_output1[238]=0.25*t1846*t9059;
  p_output1[239]=-0.25*t1846*t9059;
  p_output1[240]=-0.5;
  p_output1[241]=t8147;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t8154;
  p_output1[245]=0.25*t1846*t9096;
  p_output1[246]=-0.25*t1846*t9096;
  p_output1[247]=-0.5;
  p_output1[248]=t8147;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t8154;
  p_output1[252]=0.25*t1846*t9132;
  p_output1[253]=-0.25*t1846*t9132;
  p_output1[254]=-0.5;
  p_output1[255]=t8147;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t8154;
  p_output1[259]=0.25*t1846*t9178;
  p_output1[260]=-0.25*t1846*t9178;
  p_output1[261]=-0.5;
  p_output1[262]=t8147;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t8154;
  p_output1[266]=0.25*t1846*t9209;
  p_output1[267]=-0.25*t1846*t9209;
  p_output1[268]=-0.5;
  p_output1[269]=t8147;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t8154;
  p_output1[273]=0.25*t1846*t9243;
  p_output1[274]=-0.25*t1846*t9243;
  p_output1[275]=-0.5;
  p_output1[276]=t8147;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t8154;
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

#include "J_hs_int_dx.hh"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
