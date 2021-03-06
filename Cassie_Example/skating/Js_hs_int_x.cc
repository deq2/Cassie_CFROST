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
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=3;
  p_output1[15]=3;
  p_output1[16]=3;
  p_output1[17]=3;
  p_output1[18]=3;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=4;
  p_output1[22]=4;
  p_output1[23]=4;
  p_output1[24]=4;
  p_output1[25]=4;
  p_output1[26]=4;
  p_output1[27]=4;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=6;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=7;
  p_output1[43]=7;
  p_output1[44]=7;
  p_output1[45]=7;
  p_output1[46]=7;
  p_output1[47]=7;
  p_output1[48]=7;
  p_output1[49]=8;
  p_output1[50]=8;
  p_output1[51]=8;
  p_output1[52]=8;
  p_output1[53]=8;
  p_output1[54]=8;
  p_output1[55]=8;
  p_output1[56]=9;
  p_output1[57]=9;
  p_output1[58]=9;
  p_output1[59]=9;
  p_output1[60]=9;
  p_output1[61]=9;
  p_output1[62]=9;
  p_output1[63]=10;
  p_output1[64]=10;
  p_output1[65]=10;
  p_output1[66]=10;
  p_output1[67]=10;
  p_output1[68]=10;
  p_output1[69]=10;
  p_output1[70]=11;
  p_output1[71]=11;
  p_output1[72]=11;
  p_output1[73]=11;
  p_output1[74]=11;
  p_output1[75]=11;
  p_output1[76]=11;
  p_output1[77]=12;
  p_output1[78]=12;
  p_output1[79]=12;
  p_output1[80]=12;
  p_output1[81]=12;
  p_output1[82]=12;
  p_output1[83]=12;
  p_output1[84]=13;
  p_output1[85]=13;
  p_output1[86]=13;
  p_output1[87]=13;
  p_output1[88]=13;
  p_output1[89]=13;
  p_output1[90]=13;
  p_output1[91]=14;
  p_output1[92]=14;
  p_output1[93]=14;
  p_output1[94]=14;
  p_output1[95]=14;
  p_output1[96]=14;
  p_output1[97]=14;
  p_output1[98]=15;
  p_output1[99]=15;
  p_output1[100]=15;
  p_output1[101]=15;
  p_output1[102]=15;
  p_output1[103]=15;
  p_output1[104]=15;
  p_output1[105]=16;
  p_output1[106]=16;
  p_output1[107]=16;
  p_output1[108]=16;
  p_output1[109]=16;
  p_output1[110]=16;
  p_output1[111]=16;
  p_output1[112]=17;
  p_output1[113]=17;
  p_output1[114]=17;
  p_output1[115]=17;
  p_output1[116]=17;
  p_output1[117]=17;
  p_output1[118]=17;
  p_output1[119]=18;
  p_output1[120]=18;
  p_output1[121]=18;
  p_output1[122]=18;
  p_output1[123]=18;
  p_output1[124]=18;
  p_output1[125]=18;
  p_output1[126]=19;
  p_output1[127]=19;
  p_output1[128]=19;
  p_output1[129]=19;
  p_output1[130]=19;
  p_output1[131]=19;
  p_output1[132]=19;
  p_output1[133]=20;
  p_output1[134]=20;
  p_output1[135]=20;
  p_output1[136]=20;
  p_output1[137]=20;
  p_output1[138]=20;
  p_output1[139]=20;
  p_output1[140]=21;
  p_output1[141]=21;
  p_output1[142]=21;
  p_output1[143]=21;
  p_output1[144]=21;
  p_output1[145]=21;
  p_output1[146]=21;
  p_output1[147]=22;
  p_output1[148]=22;
  p_output1[149]=22;
  p_output1[150]=22;
  p_output1[151]=22;
  p_output1[152]=22;
  p_output1[153]=22;
  p_output1[154]=23;
  p_output1[155]=23;
  p_output1[156]=23;
  p_output1[157]=23;
  p_output1[158]=23;
  p_output1[159]=23;
  p_output1[160]=23;
  p_output1[161]=24;
  p_output1[162]=24;
  p_output1[163]=24;
  p_output1[164]=24;
  p_output1[165]=24;
  p_output1[166]=24;
  p_output1[167]=24;
  p_output1[168]=25;
  p_output1[169]=25;
  p_output1[170]=25;
  p_output1[171]=25;
  p_output1[172]=25;
  p_output1[173]=25;
  p_output1[174]=25;
  p_output1[175]=26;
  p_output1[176]=26;
  p_output1[177]=26;
  p_output1[178]=26;
  p_output1[179]=26;
  p_output1[180]=26;
  p_output1[181]=26;
  p_output1[182]=27;
  p_output1[183]=27;
  p_output1[184]=27;
  p_output1[185]=27;
  p_output1[186]=27;
  p_output1[187]=27;
  p_output1[188]=27;
  p_output1[189]=28;
  p_output1[190]=28;
  p_output1[191]=28;
  p_output1[192]=28;
  p_output1[193]=28;
  p_output1[194]=28;
  p_output1[195]=28;
  p_output1[196]=29;
  p_output1[197]=29;
  p_output1[198]=29;
  p_output1[199]=29;
  p_output1[200]=29;
  p_output1[201]=29;
  p_output1[202]=29;
  p_output1[203]=30;
  p_output1[204]=30;
  p_output1[205]=30;
  p_output1[206]=30;
  p_output1[207]=30;
  p_output1[208]=30;
  p_output1[209]=30;
  p_output1[210]=31;
  p_output1[211]=31;
  p_output1[212]=31;
  p_output1[213]=31;
  p_output1[214]=31;
  p_output1[215]=31;
  p_output1[216]=31;
  p_output1[217]=32;
  p_output1[218]=32;
  p_output1[219]=32;
  p_output1[220]=32;
  p_output1[221]=32;
  p_output1[222]=32;
  p_output1[223]=32;
  p_output1[224]=33;
  p_output1[225]=33;
  p_output1[226]=33;
  p_output1[227]=33;
  p_output1[228]=33;
  p_output1[229]=33;
  p_output1[230]=33;
  p_output1[231]=34;
  p_output1[232]=34;
  p_output1[233]=34;
  p_output1[234]=34;
  p_output1[235]=34;
  p_output1[236]=34;
  p_output1[237]=34;
  p_output1[238]=35;
  p_output1[239]=35;
  p_output1[240]=35;
  p_output1[241]=35;
  p_output1[242]=35;
  p_output1[243]=35;
  p_output1[244]=35;
  p_output1[245]=36;
  p_output1[246]=36;
  p_output1[247]=36;
  p_output1[248]=36;
  p_output1[249]=36;
  p_output1[250]=36;
  p_output1[251]=36;
  p_output1[252]=37;
  p_output1[253]=37;
  p_output1[254]=37;
  p_output1[255]=37;
  p_output1[256]=37;
  p_output1[257]=37;
  p_output1[258]=37;
  p_output1[259]=38;
  p_output1[260]=38;
  p_output1[261]=38;
  p_output1[262]=38;
  p_output1[263]=38;
  p_output1[264]=38;
  p_output1[265]=38;
  p_output1[266]=39;
  p_output1[267]=39;
  p_output1[268]=39;
  p_output1[269]=39;
  p_output1[270]=39;
  p_output1[271]=39;
  p_output1[272]=39;
  p_output1[273]=40;
  p_output1[274]=40;
  p_output1[275]=40;
  p_output1[276]=40;
  p_output1[277]=40;
  p_output1[278]=40;
  p_output1[279]=40;
  p_output1[280]=1;
  p_output1[281]=2;
  p_output1[282]=3;
  p_output1[283]=23;
  p_output1[284]=63;
  p_output1[285]=83;
  p_output1[286]=103;
  p_output1[287]=1;
  p_output1[288]=2;
  p_output1[289]=4;
  p_output1[290]=24;
  p_output1[291]=64;
  p_output1[292]=84;
  p_output1[293]=104;
  p_output1[294]=1;
  p_output1[295]=2;
  p_output1[296]=5;
  p_output1[297]=25;
  p_output1[298]=65;
  p_output1[299]=85;
  p_output1[300]=105;
  p_output1[301]=1;
  p_output1[302]=2;
  p_output1[303]=6;
  p_output1[304]=26;
  p_output1[305]=66;
  p_output1[306]=86;
  p_output1[307]=106;
  p_output1[308]=1;
  p_output1[309]=2;
  p_output1[310]=7;
  p_output1[311]=27;
  p_output1[312]=67;
  p_output1[313]=87;
  p_output1[314]=107;
  p_output1[315]=1;
  p_output1[316]=2;
  p_output1[317]=8;
  p_output1[318]=28;
  p_output1[319]=68;
  p_output1[320]=88;
  p_output1[321]=108;
  p_output1[322]=1;
  p_output1[323]=2;
  p_output1[324]=9;
  p_output1[325]=29;
  p_output1[326]=69;
  p_output1[327]=89;
  p_output1[328]=109;
  p_output1[329]=1;
  p_output1[330]=2;
  p_output1[331]=10;
  p_output1[332]=30;
  p_output1[333]=70;
  p_output1[334]=90;
  p_output1[335]=110;
  p_output1[336]=1;
  p_output1[337]=2;
  p_output1[338]=11;
  p_output1[339]=31;
  p_output1[340]=71;
  p_output1[341]=91;
  p_output1[342]=111;
  p_output1[343]=1;
  p_output1[344]=2;
  p_output1[345]=12;
  p_output1[346]=32;
  p_output1[347]=72;
  p_output1[348]=92;
  p_output1[349]=112;
  p_output1[350]=1;
  p_output1[351]=2;
  p_output1[352]=13;
  p_output1[353]=33;
  p_output1[354]=73;
  p_output1[355]=93;
  p_output1[356]=113;
  p_output1[357]=1;
  p_output1[358]=2;
  p_output1[359]=14;
  p_output1[360]=34;
  p_output1[361]=74;
  p_output1[362]=94;
  p_output1[363]=114;
  p_output1[364]=1;
  p_output1[365]=2;
  p_output1[366]=15;
  p_output1[367]=35;
  p_output1[368]=75;
  p_output1[369]=95;
  p_output1[370]=115;
  p_output1[371]=1;
  p_output1[372]=2;
  p_output1[373]=16;
  p_output1[374]=36;
  p_output1[375]=76;
  p_output1[376]=96;
  p_output1[377]=116;
  p_output1[378]=1;
  p_output1[379]=2;
  p_output1[380]=17;
  p_output1[381]=37;
  p_output1[382]=77;
  p_output1[383]=97;
  p_output1[384]=117;
  p_output1[385]=1;
  p_output1[386]=2;
  p_output1[387]=18;
  p_output1[388]=38;
  p_output1[389]=78;
  p_output1[390]=98;
  p_output1[391]=118;
  p_output1[392]=1;
  p_output1[393]=2;
  p_output1[394]=19;
  p_output1[395]=39;
  p_output1[396]=79;
  p_output1[397]=99;
  p_output1[398]=119;
  p_output1[399]=1;
  p_output1[400]=2;
  p_output1[401]=20;
  p_output1[402]=40;
  p_output1[403]=80;
  p_output1[404]=100;
  p_output1[405]=120;
  p_output1[406]=1;
  p_output1[407]=2;
  p_output1[408]=21;
  p_output1[409]=41;
  p_output1[410]=81;
  p_output1[411]=101;
  p_output1[412]=121;
  p_output1[413]=1;
  p_output1[414]=2;
  p_output1[415]=22;
  p_output1[416]=42;
  p_output1[417]=82;
  p_output1[418]=102;
  p_output1[419]=122;
  p_output1[420]=1;
  p_output1[421]=2;
  p_output1[422]=3;
  p_output1[423]=23;
  p_output1[424]=43;
  p_output1[425]=83;
  p_output1[426]=103;
  p_output1[427]=1;
  p_output1[428]=2;
  p_output1[429]=4;
  p_output1[430]=24;
  p_output1[431]=44;
  p_output1[432]=84;
  p_output1[433]=104;
  p_output1[434]=1;
  p_output1[435]=2;
  p_output1[436]=5;
  p_output1[437]=25;
  p_output1[438]=45;
  p_output1[439]=85;
  p_output1[440]=105;
  p_output1[441]=1;
  p_output1[442]=2;
  p_output1[443]=6;
  p_output1[444]=26;
  p_output1[445]=46;
  p_output1[446]=86;
  p_output1[447]=106;
  p_output1[448]=1;
  p_output1[449]=2;
  p_output1[450]=7;
  p_output1[451]=27;
  p_output1[452]=47;
  p_output1[453]=87;
  p_output1[454]=107;
  p_output1[455]=1;
  p_output1[456]=2;
  p_output1[457]=8;
  p_output1[458]=28;
  p_output1[459]=48;
  p_output1[460]=88;
  p_output1[461]=108;
  p_output1[462]=1;
  p_output1[463]=2;
  p_output1[464]=9;
  p_output1[465]=29;
  p_output1[466]=49;
  p_output1[467]=89;
  p_output1[468]=109;
  p_output1[469]=1;
  p_output1[470]=2;
  p_output1[471]=10;
  p_output1[472]=30;
  p_output1[473]=50;
  p_output1[474]=90;
  p_output1[475]=110;
  p_output1[476]=1;
  p_output1[477]=2;
  p_output1[478]=11;
  p_output1[479]=31;
  p_output1[480]=51;
  p_output1[481]=91;
  p_output1[482]=111;
  p_output1[483]=1;
  p_output1[484]=2;
  p_output1[485]=12;
  p_output1[486]=32;
  p_output1[487]=52;
  p_output1[488]=92;
  p_output1[489]=112;
  p_output1[490]=1;
  p_output1[491]=2;
  p_output1[492]=13;
  p_output1[493]=33;
  p_output1[494]=53;
  p_output1[495]=93;
  p_output1[496]=113;
  p_output1[497]=1;
  p_output1[498]=2;
  p_output1[499]=14;
  p_output1[500]=34;
  p_output1[501]=54;
  p_output1[502]=94;
  p_output1[503]=114;
  p_output1[504]=1;
  p_output1[505]=2;
  p_output1[506]=15;
  p_output1[507]=35;
  p_output1[508]=55;
  p_output1[509]=95;
  p_output1[510]=115;
  p_output1[511]=1;
  p_output1[512]=2;
  p_output1[513]=16;
  p_output1[514]=36;
  p_output1[515]=56;
  p_output1[516]=96;
  p_output1[517]=116;
  p_output1[518]=1;
  p_output1[519]=2;
  p_output1[520]=17;
  p_output1[521]=37;
  p_output1[522]=57;
  p_output1[523]=97;
  p_output1[524]=117;
  p_output1[525]=1;
  p_output1[526]=2;
  p_output1[527]=18;
  p_output1[528]=38;
  p_output1[529]=58;
  p_output1[530]=98;
  p_output1[531]=118;
  p_output1[532]=1;
  p_output1[533]=2;
  p_output1[534]=19;
  p_output1[535]=39;
  p_output1[536]=59;
  p_output1[537]=99;
  p_output1[538]=119;
  p_output1[539]=1;
  p_output1[540]=2;
  p_output1[541]=20;
  p_output1[542]=40;
  p_output1[543]=60;
  p_output1[544]=100;
  p_output1[545]=120;
  p_output1[546]=1;
  p_output1[547]=2;
  p_output1[548]=21;
  p_output1[549]=41;
  p_output1[550]=61;
  p_output1[551]=101;
  p_output1[552]=121;
  p_output1[553]=1;
  p_output1[554]=2;
  p_output1[555]=22;
  p_output1[556]=42;
  p_output1[557]=62;
  p_output1[558]=102;
  p_output1[559]=122;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 280, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_hs_int_x.hh"

namespace Pattern[Cassie, Blank[DoubleSupport]]
{

void Js_hs_int_x_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
