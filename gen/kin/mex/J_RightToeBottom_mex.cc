/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:04 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1207;
  double t1757;
  double t1651;
  double t1698;
  double t1875;
  double t255;
  double t260;
  double t665;
  double t817;
  double t1476;
  double t1735;
  double t1886;
  double t1933;
  double t2093;
  double t2223;
  double t2285;
  double t2429;
  double t247;
  double t2657;
  double t2671;
  double t2679;
  double t2768;
  double t2816;
  double t2838;
  double t2879;
  double t2972;
  double t2994;
  double t2995;
  double t3394;
  double t3435;
  double t3499;
  double t3521;
  double t3541;
  double t3551;
  double t3573;
  double t3655;
  double t3683;
  double t3738;
  double t3927;
  double t3964;
  double t3972;
  double t4030;
  double t4038;
  double t4114;
  double t4135;
  double t4180;
  double t4220;
  double t4243;
  double t4267;
  double t4284;
  double t4329;
  double t4368;
  double t4384;
  double t4457;
  double t4476;
  double t4654;
  double t4658;
  double t4661;
  double t4681;
  double t4684;
  double t4693;
  double t4698;
  double t4699;
  double t4701;
  double t4715;
  double t4726;
  double t4730;
  double t4731;
  double t4743;
  double t4750;
  double t4752;
  double t685;
  double t1044;
  double t1087;
  double t1487;
  double t1561;
  double t2102;
  double t2103;
  double t2151;
  double t2167;
  double t2531;
  double t2540;
  double t2572;
  double t4812;
  double t4816;
  double t4823;
  double t4831;
  double t4841;
  double t4843;
  double t2847;
  double t2943;
  double t2968;
  double t4858;
  double t4874;
  double t4878;
  double t3269;
  double t3366;
  double t3381;
  double t3559;
  double t3575;
  double t3622;
  double t4900;
  double t4913;
  double t4917;
  double t4984;
  double t4999;
  double t5010;
  double t3845;
  double t3875;
  double t3910;
  double t4121;
  double t4146;
  double t4167;
  double t5037;
  double t5047;
  double t5071;
  double t5105;
  double t5110;
  double t5115;
  double t4253;
  double t4254;
  double t4265;
  double t4468;
  double t4589;
  double t4624;
  double t5124;
  double t5125;
  double t5131;
  double t5134;
  double t5163;
  double t5165;
  double t4665;
  double t4674;
  double t4677;
  double t4706;
  double t4718;
  double t4724;
  double t5177;
  double t5180;
  double t5181;
  double t5198;
  double t5201;
  double t5213;
  double t4734;
  double t4741;
  double t4742;
  double t5217;
  double t5222;
  double t5224;
  double t5238;
  double t5240;
  double t5241;
  double t5335;
  double t5344;
  double t5351;
  double t5357;
  double t5360;
  double t5362;
  double t5376;
  double t5377;
  double t5378;
  double t5388;
  double t5390;
  double t5391;
  double t5393;
  double t5397;
  double t5399;
  double t5401;
  double t5403;
  double t5407;
  double t5417;
  double t5424;
  double t5425;
  double t5431;
  double t5435;
  double t5436;
  double t5442;
  double t5447;
  double t5448;
  double t5457;
  double t5459;
  double t5464;
  double t5466;
  double t5467;
  double t5468;
  double t5507;
  double t5508;
  double t5509;
  double t5514;
  double t5515;
  double t5520;
  double t5541;
  double t5542;
  double t5546;
  double t5549;
  double t5550;
  double t5555;
  double t5559;
  double t5560;
  double t5563;
  double t5569;
  double t5573;
  double t5575;
  double t5579;
  double t5580;
  double t5584;
  double t5589;
  double t5597;
  double t5599;
  double t5603;
  double t5606;
  double t5613;
  double t5621;
  double t5623;
  double t5626;
  double t5637;
  double t5643;
  double t5657;
  double t5698;
  double t5704;
  double t5705;
  double t5709;
  double t5711;
  double t5718;
  double t5735;
  double t5737;
  double t5739;
  double t5742;
  double t5746;
  double t5748;
  double t5756;
  double t5758;
  double t5759;
  double t5764;
  double t5765;
  double t5768;
  double t5777;
  double t5780;
  double t5781;
  double t5784;
  double t5785;
  double t5786;
  double t5790;
  double t5792;
  double t5793;
  double t5808;
  double t5813;
  double t5817;
  double t5820;
  double t5822;
  double t5823;
  double t5862;
  double t5864;
  double t5865;
  double t5880;
  double t5881;
  double t5871;
  double t5875;
  double t5877;
  double t5887;
  double t5890;
  double t5891;
  double t5893;
  double t5896;
  double t5898;
  double t5900;
  double t5907;
  double t5908;
  double t5912;
  double t5915;
  double t5916;
  double t5918;
  double t5926;
  double t5927;
  double t5933;
  double t5934;
  double t5937;
  double t5941;
  double t5943;
  double t5946;
  double t5967;
  double t5969;
  double t5973;
  double t6044;
  double t6045;
  double t6050;
  double t6065;
  double t6066;
  double t6070;
  double t6058;
  double t6061;
  double t6083;
  double t6088;
  double t6094;
  double t6101;
  double t6108;
  double t6148;
  double t6158;
  double t6194;
  double t6201;
  double t6208;
  double t6211;
  double t6217;
  double t6221;
  double t6243;
  double t6251;
  double t6262;
  double t6268;
  double t6270;
  double t6276;
  double t6279;
  double t6299;
  double t6305;
  double t6311;
  double t6319;
  double t6429;
  double t6430;
  double t6435;
  double t6399;
  double t6401;
  double t6423;
  double t6451;
  double t6455;
  double t6459;
  double t6482;
  double t6497;
  double t6501;
  double t6507;
  double t6508;
  double t6510;
  double t6516;
  double t6526;
  double t6533;
  double t6544;
  double t6546;
  double t6551;
  double t6582;
  double t6589;
  double t6601;
  double t6607;
  double t6619;
  double t6627;
  double t6631;
  double t6638;
  double t6640;
  double t6684;
  double t6686;
  double t6714;
  double t6720;
  double t6723;
  double t6729;
  double t6732;
  double t6737;
  double t6744;
  double t6768;
  double t6772;
  double t6786;
  double t6788;
  double t6791;
  double t6802;
  double t6817;
  double t6822;
  double t6832;
  double t6838;
  double t6843;
  double t6848;
  double t6873;
  double t6881;
  double t6894;
  double t6899;
  double t6902;
  double t7023;
  double t7037;
  double t7038;
  double t7068;
  double t7069;
  double t7051;
  double t7057;
  double t7075;
  double t7079;
  double t7085;
  double t7090;
  double t7094;
  double t7096;
  double t7113;
  double t7114;
  double t7116;
  double t7126;
  double t7130;
  double t7136;
  double t7164;
  double t7165;
  double t7176;
  double t7184;
  double t7186;
  double t7202;
  double t7210;
  double t7211;
  double t7213;
  double t7218;
  double t7220;
  double t7227;
  double t6424;
  double t6438;
  double t6443;
  double t6446;
  double t6460;
  double t6504;
  double t6511;
  double t6534;
  double t6564;
  double t6603;
  double t6629;
  double t6643;
  double t6645;
  double t6649;
  double t6653;
  double t6654;
  double t6660;
  double t6663;
  double t6665;
  double t6666;
  double t4936;
  double t4945;
  double t4951;
  double t7529;
  double t7535;
  double t7550;
  double t7568;
  double t7569;
  double t7581;
  double t7586;
  double t7589;
  double t7594;
  double t7600;
  double t7605;
  double t7609;
  double t7613;
  double t7614;
  double t7617;
  double t7620;
  double t7621;
  double t7622;
  double t7315;
  double t7320;
  double t7349;
  double t7395;
  double t7401;
  double t7646;
  double t7647;
  double t7648;
  double t7650;
  double t7658;
  double t7663;
  double t7709;
  double t7711;
  double t7718;
  double t7725;
  double t7743;
  double t7755;
  double t7780;
  double t7783;
  double t7788;
  double t7794;
  double t7796;
  double t7818;
  double t7850;
  double t7854;
  double t7861;
  double t7871;
  double t7872;
  double t7878;
  double t7987;
  double t7994;
  double t8014;
  double t8034;
  double t8078;
  double t8108;
  double t8253;
  double t8270;
  double t8276;
  double t8300;
  double t8303;
  double t8307;
  double t8326;
  double t8330;
  double t8362;
  double t8406;
  double t8437;
  double t8449;
  double t8491;
  double t8497;
  double t8519;
  double t8534;
  double t8570;
  double t8576;
  double t8805;
  double t8809;
  double t8846;
  double t8876;
  double t8885;
  double t8905;
  double t8906;
  double t8930;
  double t8965;
  double t8998;
  double t9031;
  double t9101;
  double t9107;
  double t9116;
  double t9181;
  double t9190;
  double t9192;
  double t9200;
  double t9209;
  double t9219;
  double t8747;
  double t8758;
  double t8762;
  double t8781;
  double t8799;
  double t9386;
  double t9430;
  double t9467;
  double t9556;
  double t9597;
  double t9602;
  double t9663;
  double t9709;
  double t9725;
  double t9737;
  double t9757;
  double t9771;
  double t9820;
  double t9826;
  double t9840;
  double t9875;
  double t9881;
  double t9882;
  double t9898;
  double t9912;
  double t9918;
  double t9970;
  double t9977;
  double t9979;
  double t10009;
  double t10018;
  double t10021;
  double t10110;
  double t10114;
  double t10117;
  double t10125;
  double t10135;
  double t10146;
  double t10149;
  double t10168;
  double t10177;
  double t10188;
  double t10195;
  double t10197;
  double t10200;
  double t10207;
  double t10210;
  double t10219;
  double t10222;
  double t10228;
  double t10236;
  double t10248;
  double t10253;
  double t10256;
  double t10260;
  double t10261;
  double t10269;
  double t10284;
  double t10286;
  double t10379;
  double t10387;
  double t10390;
  double t10396;
  double t10397;
  double t10420;
  double t10425;
  double t10448;
  double t10455;
  double t10479;
  double t10486;
  double t10487;
  double t10495;
  double t10340;
  double t10347;
  double t10351;
  double t10360;
  double t10366;
  double t10554;
  double t10560;
  double t10573;
  double t10585;
  double t10597;
  double t10604;
  double t10610;
  double t10613;
  double t10616;
  double t10619;
  double t10623;
  double t10627;
  double t10630;
  double t10645;
  double t10646;
  double t10659;
  double t10661;
  double t10666;
  double t10669;
  double t10735;
  double t10740;
  double t10741;
  double t10756;
  double t10762;
  double t10770;
  double t10771;
  double t10775;
  double t10776;
  double t10777;
  double t10789;
  double t10790;
  double t10793;
  double t10797;
  double t10798;
  double t10813;
  double t10823;
  double t10835;
  double t10838;
  double t10914;
  double t10920;
  double t10936;
  double t10937;
  double t10942;
  double t10946;
  double t10948;
  double t10877;
  double t10878;
  double t10894;
  double t10902;
  double t10908;
  double t11005;
  double t11008;
  double t11012;
  double t11017;
  double t11019;
  double t11025;
  double t11026;
  double t11031;
  double t11035;
  double t11040;
  double t11050;
  double t11051;
  double t11054;
  double t11088;
  double t11091;
  double t11096;
  double t11098;
  double t11101;
  double t11109;
  double t11110;
  double t11116;
  double t11118;
  double t11119;
  double t11127;
  double t11128;
  double t11129;
  double t11170;
  double t11172;
  double t5279;
  double t11156;
  double t11158;
  double t11160;
  double t11162;
  double t11164;
  double t11191;
  double t11192;
  double t11200;
  double t11206;
  double t11207;
  double t11210;
  double t11211;
  double t11239;
  double t11240;
  double t11241;
  double t11246;
  double t11247;
  double t11252;
  double t11253;
  double t11177;
  double t5294;
  double t5303;
  double t11275;
  double t11277;
  double t11281;
  double t11283;
  double t11287;
  double t11214;
  double t11304;
  double t11305;
  double t11306;
  double t11226;
  double t11262;
  double t11333;
  double t11334;
  double t11335;
  double t11267;
  t1207 = Sin(var1[3]);
  t1757 = Cos(var1[3]);
  t1651 = Cos(var1[5]);
  t1698 = Sin(var1[4]);
  t1875 = Sin(var1[5]);
  t255 = Cos(var1[14]);
  t260 = -1.*t255;
  t665 = 1. + t260;
  t817 = Sin(var1[14]);
  t1476 = Sin(var1[13]);
  t1735 = -1.*t1651*t1207*t1698;
  t1886 = t1757*t1875;
  t1933 = t1735 + t1886;
  t2093 = Cos(var1[13]);
  t2223 = -1.*t1757*t1651;
  t2285 = -1.*t1207*t1698*t1875;
  t2429 = t2223 + t2285;
  t247 = Cos(var1[4]);
  t2657 = t1476*t1933;
  t2671 = t2093*t2429;
  t2679 = t2657 + t2671;
  t2768 = Cos(var1[15]);
  t2816 = -1.*t2768;
  t2838 = 1. + t2816;
  t2879 = Sin(var1[15]);
  t2972 = t2093*t1933;
  t2994 = -1.*t1476*t2429;
  t2995 = t2972 + t2994;
  t3394 = -1.*t255*t247*t1207;
  t3435 = t817*t2679;
  t3499 = t3394 + t3435;
  t3521 = Cos(var1[16]);
  t3541 = -1.*t3521;
  t3551 = 1. + t3541;
  t3573 = Sin(var1[16]);
  t3655 = t2879*t2995;
  t3683 = t2768*t3499;
  t3738 = t3655 + t3683;
  t3927 = t2768*t2995;
  t3964 = -1.*t2879*t3499;
  t3972 = t3927 + t3964;
  t4030 = Cos(var1[17]);
  t4038 = -1.*t4030;
  t4114 = 1. + t4038;
  t4135 = Sin(var1[17]);
  t4180 = -1.*t3573*t3738;
  t4220 = t3521*t3972;
  t4243 = t4180 + t4220;
  t4267 = t3521*t3738;
  t4284 = t3573*t3972;
  t4329 = t4267 + t4284;
  t4368 = Cos(var1[18]);
  t4384 = -1.*t4368;
  t4457 = 1. + t4384;
  t4476 = Sin(var1[18]);
  t4654 = t4135*t4243;
  t4658 = t4030*t4329;
  t4661 = t4654 + t4658;
  t4681 = t4030*t4243;
  t4684 = -1.*t4135*t4329;
  t4693 = t4681 + t4684;
  t4698 = Cos(var1[19]);
  t4699 = -1.*t4698;
  t4701 = 1. + t4699;
  t4715 = Sin(var1[19]);
  t4726 = -1.*t4476*t4661;
  t4730 = t4368*t4693;
  t4731 = t4726 + t4730;
  t4743 = t4368*t4661;
  t4750 = t4476*t4693;
  t4752 = t4743 + t4750;
  t685 = -0.049*t665;
  t1044 = -0.135*t817;
  t1087 = 0. + t685 + t1044;
  t1487 = 0.135*t1476;
  t1561 = 0. + t1487;
  t2102 = -1.*t2093;
  t2103 = 1. + t2102;
  t2151 = -0.135*t2103;
  t2167 = 0. + t2151;
  t2531 = -0.135*t665;
  t2540 = 0.049*t817;
  t2572 = 0. + t2531 + t2540;
  t4812 = t1757*t1651*t1698;
  t4816 = t1207*t1875;
  t4823 = t4812 + t4816;
  t4831 = -1.*t1651*t1207;
  t4841 = t1757*t1698*t1875;
  t4843 = t4831 + t4841;
  t2847 = -0.09*t2838;
  t2943 = 0.049*t2879;
  t2968 = 0. + t2847 + t2943;
  t4858 = t1476*t4823;
  t4874 = t2093*t4843;
  t4878 = t4858 + t4874;
  t3269 = -0.049*t2838;
  t3366 = -0.09*t2879;
  t3381 = 0. + t3269 + t3366;
  t3559 = -0.049*t3551;
  t3575 = -0.21*t3573;
  t3622 = 0. + t3559 + t3575;
  t4900 = t2093*t4823;
  t4913 = -1.*t1476*t4843;
  t4917 = t4900 + t4913;
  t4984 = t255*t1757*t247;
  t4999 = t817*t4878;
  t5010 = t4984 + t4999;
  t3845 = -0.21*t3551;
  t3875 = 0.049*t3573;
  t3910 = 0. + t3845 + t3875;
  t4121 = -0.2707*t4114;
  t4146 = 0.0016*t4135;
  t4167 = 0. + t4121 + t4146;
  t5037 = t2879*t4917;
  t5047 = t2768*t5010;
  t5071 = t5037 + t5047;
  t5105 = t2768*t4917;
  t5110 = -1.*t2879*t5010;
  t5115 = t5105 + t5110;
  t4253 = -0.0016*t4114;
  t4254 = -0.2707*t4135;
  t4265 = 0. + t4253 + t4254;
  t4468 = 0.0184*t4457;
  t4589 = -0.7055*t4476;
  t4624 = 0. + t4468 + t4589;
  t5124 = -1.*t3573*t5071;
  t5125 = t3521*t5115;
  t5131 = t5124 + t5125;
  t5134 = t3521*t5071;
  t5163 = t3573*t5115;
  t5165 = t5134 + t5163;
  t4665 = -0.7055*t4457;
  t4674 = -0.0184*t4476;
  t4677 = 0. + t4665 + t4674;
  t4706 = -1.1135*t4701;
  t4718 = 0.0216*t4715;
  t4724 = 0. + t4706 + t4718;
  t5177 = t4135*t5131;
  t5180 = t4030*t5165;
  t5181 = t5177 + t5180;
  t5198 = t4030*t5131;
  t5201 = -1.*t4135*t5165;
  t5213 = t5198 + t5201;
  t4734 = -0.0216*t4701;
  t4741 = -1.1135*t4715;
  t4742 = 0. + t4734 + t4741;
  t5217 = -1.*t4476*t5181;
  t5222 = t4368*t5213;
  t5224 = t5217 + t5222;
  t5238 = t4368*t5181;
  t5240 = t4476*t5213;
  t5241 = t5238 + t5240;
  t5335 = t1757*t247*t1651*t1476;
  t5344 = t2093*t1757*t247*t1875;
  t5351 = t5335 + t5344;
  t5357 = t2093*t1757*t247*t1651;
  t5360 = -1.*t1757*t247*t1476*t1875;
  t5362 = t5357 + t5360;
  t5376 = -1.*t255*t1757*t1698;
  t5377 = t817*t5351;
  t5378 = t5376 + t5377;
  t5388 = t2879*t5362;
  t5390 = t2768*t5378;
  t5391 = t5388 + t5390;
  t5393 = t2768*t5362;
  t5397 = -1.*t2879*t5378;
  t5399 = t5393 + t5397;
  t5401 = -1.*t3573*t5391;
  t5403 = t3521*t5399;
  t5407 = t5401 + t5403;
  t5417 = t3521*t5391;
  t5424 = t3573*t5399;
  t5425 = t5417 + t5424;
  t5431 = t4135*t5407;
  t5435 = t4030*t5425;
  t5436 = t5431 + t5435;
  t5442 = t4030*t5407;
  t5447 = -1.*t4135*t5425;
  t5448 = t5442 + t5447;
  t5457 = -1.*t4476*t5436;
  t5459 = t4368*t5448;
  t5464 = t5457 + t5459;
  t5466 = t4368*t5436;
  t5467 = t4476*t5448;
  t5468 = t5466 + t5467;
  t5507 = t247*t1651*t1476*t1207;
  t5508 = t2093*t247*t1207*t1875;
  t5509 = t5507 + t5508;
  t5514 = t2093*t247*t1651*t1207;
  t5515 = -1.*t247*t1476*t1207*t1875;
  t5520 = t5514 + t5515;
  t5541 = -1.*t255*t1207*t1698;
  t5542 = t817*t5509;
  t5546 = t5541 + t5542;
  t5549 = t2879*t5520;
  t5550 = t2768*t5546;
  t5555 = t5549 + t5550;
  t5559 = t2768*t5520;
  t5560 = -1.*t2879*t5546;
  t5563 = t5559 + t5560;
  t5569 = -1.*t3573*t5555;
  t5573 = t3521*t5563;
  t5575 = t5569 + t5573;
  t5579 = t3521*t5555;
  t5580 = t3573*t5563;
  t5584 = t5579 + t5580;
  t5589 = t4135*t5575;
  t5597 = t4030*t5584;
  t5599 = t5589 + t5597;
  t5603 = t4030*t5575;
  t5606 = -1.*t4135*t5584;
  t5613 = t5603 + t5606;
  t5621 = -1.*t4476*t5599;
  t5623 = t4368*t5613;
  t5626 = t5621 + t5623;
  t5637 = t4368*t5599;
  t5643 = t4476*t5613;
  t5657 = t5637 + t5643;
  t5698 = -1.*t1651*t1476*t1698;
  t5704 = -1.*t2093*t1698*t1875;
  t5705 = t5698 + t5704;
  t5709 = -1.*t2093*t1651*t1698;
  t5711 = t1476*t1698*t1875;
  t5718 = t5709 + t5711;
  t5735 = -1.*t255*t247;
  t5737 = t817*t5705;
  t5739 = t5735 + t5737;
  t5742 = t2879*t5718;
  t5746 = t2768*t5739;
  t5748 = t5742 + t5746;
  t5756 = t2768*t5718;
  t5758 = -1.*t2879*t5739;
  t5759 = t5756 + t5758;
  t5764 = -1.*t3573*t5748;
  t5765 = t3521*t5759;
  t5768 = t5764 + t5765;
  t5777 = t3521*t5748;
  t5780 = t3573*t5759;
  t5781 = t5777 + t5780;
  t5784 = t4135*t5768;
  t5785 = t4030*t5781;
  t5786 = t5784 + t5785;
  t5790 = t4030*t5768;
  t5792 = -1.*t4135*t5781;
  t5793 = t5790 + t5792;
  t5808 = -1.*t4476*t5786;
  t5813 = t4368*t5793;
  t5817 = t5808 + t5813;
  t5820 = t4368*t5786;
  t5822 = t4476*t5793;
  t5823 = t5820 + t5822;
  t5862 = t1651*t1207;
  t5864 = -1.*t1757*t1698*t1875;
  t5865 = t5862 + t5864;
  t5880 = t1476*t5865;
  t5881 = t4900 + t5880;
  t5871 = -1.*t1476*t4823;
  t5875 = t2093*t5865;
  t5877 = t5871 + t5875;
  t5887 = t2879*t5877;
  t5890 = t2768*t817*t5881;
  t5891 = t5887 + t5890;
  t5893 = t2768*t5877;
  t5896 = -1.*t817*t2879*t5881;
  t5898 = t5893 + t5896;
  t5900 = -1.*t3573*t5891;
  t5907 = t3521*t5898;
  t5908 = t5900 + t5907;
  t5912 = t3521*t5891;
  t5915 = t3573*t5898;
  t5916 = t5912 + t5915;
  t5918 = t4135*t5908;
  t5926 = t4030*t5916;
  t5927 = t5918 + t5926;
  t5933 = t4030*t5908;
  t5934 = -1.*t4135*t5916;
  t5937 = t5933 + t5934;
  t5941 = -1.*t4476*t5927;
  t5943 = t4368*t5937;
  t5946 = t5941 + t5943;
  t5967 = t4368*t5927;
  t5969 = t4476*t5937;
  t5973 = t5967 + t5969;
  t6044 = t1651*t1207*t1698;
  t6045 = -1.*t1757*t1875;
  t6050 = t6044 + t6045;
  t6065 = t2093*t6050;
  t6066 = t1476*t2429;
  t6070 = t6065 + t6066;
  t6058 = -1.*t1476*t6050;
  t6061 = t6058 + t2671;
  t6083 = t2879*t6061;
  t6088 = t2768*t817*t6070;
  t6094 = t6083 + t6088;
  t6101 = t2768*t6061;
  t6108 = -1.*t817*t2879*t6070;
  t6148 = t6101 + t6108;
  t6158 = -1.*t3573*t6094;
  t6194 = t3521*t6148;
  t6201 = t6158 + t6194;
  t6208 = t3521*t6094;
  t6211 = t3573*t6148;
  t6217 = t6208 + t6211;
  t6221 = t4135*t6201;
  t6243 = t4030*t6217;
  t6251 = t6221 + t6243;
  t6262 = t4030*t6201;
  t6268 = -1.*t4135*t6217;
  t6270 = t6262 + t6268;
  t6276 = -1.*t4476*t6251;
  t6279 = t4368*t6270;
  t6299 = t6276 + t6279;
  t6305 = t4368*t6251;
  t6311 = t4476*t6270;
  t6319 = t6305 + t6311;
  t6429 = t2093*t247*t1651;
  t6430 = -1.*t247*t1476*t1875;
  t6435 = t6429 + t6430;
  t6399 = -1.*t247*t1651*t1476;
  t6401 = -1.*t2093*t247*t1875;
  t6423 = t6399 + t6401;
  t6451 = t2879*t6423;
  t6455 = t2768*t817*t6435;
  t6459 = t6451 + t6455;
  t6482 = t2768*t6423;
  t6497 = -1.*t817*t2879*t6435;
  t6501 = t6482 + t6497;
  t6507 = -1.*t3573*t6459;
  t6508 = t3521*t6501;
  t6510 = t6507 + t6508;
  t6516 = t3521*t6459;
  t6526 = t3573*t6501;
  t6533 = t6516 + t6526;
  t6544 = t4135*t6510;
  t6546 = t4030*t6533;
  t6551 = t6544 + t6546;
  t6582 = t4030*t6510;
  t6589 = -1.*t4135*t6533;
  t6601 = t6582 + t6589;
  t6607 = -1.*t4476*t6551;
  t6619 = t4368*t6601;
  t6627 = t6607 + t6619;
  t6631 = t4368*t6551;
  t6638 = t4476*t6601;
  t6640 = t6631 + t6638;
  t6684 = -1.*t2093*t4843;
  t6686 = t5871 + t6684;
  t6714 = t2879*t6686;
  t6720 = t2768*t817*t4917;
  t6723 = t6714 + t6720;
  t6729 = t2768*t6686;
  t6732 = -1.*t817*t2879*t4917;
  t6737 = t6729 + t6732;
  t6744 = -1.*t3573*t6723;
  t6768 = t3521*t6737;
  t6772 = t6744 + t6768;
  t6786 = t3521*t6723;
  t6788 = t3573*t6737;
  t6791 = t6786 + t6788;
  t6802 = t4135*t6772;
  t6817 = t4030*t6791;
  t6822 = t6802 + t6817;
  t6832 = t4030*t6772;
  t6838 = -1.*t4135*t6791;
  t6843 = t6832 + t6838;
  t6848 = -1.*t4476*t6822;
  t6873 = t4368*t6843;
  t6881 = t6848 + t6873;
  t6894 = t4368*t6822;
  t6899 = t4476*t6843;
  t6902 = t6894 + t6899;
  t7023 = t1757*t1651;
  t7037 = t1207*t1698*t1875;
  t7038 = t7023 + t7037;
  t7068 = -1.*t1476*t7038;
  t7069 = t6065 + t7068;
  t7051 = -1.*t2093*t7038;
  t7057 = t6058 + t7051;
  t7075 = t2879*t7057;
  t7079 = t2768*t817*t7069;
  t7085 = t7075 + t7079;
  t7090 = t2768*t7057;
  t7094 = -1.*t817*t2879*t7069;
  t7096 = t7090 + t7094;
  t7113 = -1.*t3573*t7085;
  t7114 = t3521*t7096;
  t7116 = t7113 + t7114;
  t7126 = t3521*t7085;
  t7130 = t3573*t7096;
  t7136 = t7126 + t7130;
  t7164 = t4135*t7116;
  t7165 = t4030*t7136;
  t7176 = t7164 + t7165;
  t7184 = t4030*t7116;
  t7186 = -1.*t4135*t7136;
  t7202 = t7184 + t7186;
  t7210 = -1.*t4476*t7176;
  t7211 = t4368*t7202;
  t7213 = t7210 + t7211;
  t7218 = t4368*t7176;
  t7220 = t4476*t7202;
  t7227 = t7218 + t7220;
  t6424 = t2968*t6423;
  t6438 = -0.1305*t255*t6435;
  t6443 = t2572*t6435;
  t6446 = t817*t3381*t6435;
  t6460 = t3622*t6459;
  t6504 = t3910*t6501;
  t6511 = t4167*t6510;
  t6534 = t4265*t6533;
  t6564 = t4624*t6551;
  t6603 = t4677*t6601;
  t6629 = t4724*t6627;
  t6643 = t4742*t6640;
  t6645 = t4715*t6627;
  t6649 = t4698*t6640;
  t6653 = t6645 + t6649;
  t6654 = 0.0306*t6653;
  t6660 = t4698*t6627;
  t6663 = -1.*t4715*t6640;
  t6665 = t6660 + t6663;
  t6666 = -1.1312*t6665;
  t4936 = -1.*t1757*t247*t817;
  t4945 = t255*t4878;
  t4951 = t4936 + t4945;
  t7529 = -1.*t3521*t2879*t4951;
  t7535 = -1.*t2768*t3573*t4951;
  t7550 = t7529 + t7535;
  t7568 = t2768*t3521*t4951;
  t7569 = -1.*t2879*t3573*t4951;
  t7581 = t7568 + t7569;
  t7586 = t4135*t7550;
  t7589 = t4030*t7581;
  t7594 = t7586 + t7589;
  t7600 = t4030*t7550;
  t7605 = -1.*t4135*t7581;
  t7609 = t7600 + t7605;
  t7613 = -1.*t4476*t7594;
  t7614 = t4368*t7609;
  t7617 = t7613 + t7614;
  t7620 = t4368*t7594;
  t7621 = t4476*t7609;
  t7622 = t7620 + t7621;
  t7315 = -0.135*t255;
  t7320 = -0.049*t817;
  t7349 = t7315 + t7320;
  t7395 = 0.049*t255;
  t7401 = t7395 + t1044;
  t7646 = t1476*t6050;
  t7647 = t2093*t7038;
  t7648 = t7646 + t7647;
  t7650 = -1.*t247*t817*t1207;
  t7658 = t255*t7648;
  t7663 = t7650 + t7658;
  t7709 = -1.*t3521*t2879*t7663;
  t7711 = -1.*t2768*t3573*t7663;
  t7718 = t7709 + t7711;
  t7725 = t2768*t3521*t7663;
  t7743 = -1.*t2879*t3573*t7663;
  t7755 = t7725 + t7743;
  t7780 = t4135*t7718;
  t7783 = t4030*t7755;
  t7788 = t7780 + t7783;
  t7794 = t4030*t7718;
  t7796 = -1.*t4135*t7755;
  t7818 = t7794 + t7796;
  t7850 = -1.*t4476*t7788;
  t7854 = t4368*t7818;
  t7861 = t7850 + t7854;
  t7871 = t4368*t7788;
  t7872 = t4476*t7818;
  t7878 = t7871 + t7872;
  t7987 = t247*t1651*t1476;
  t7994 = t2093*t247*t1875;
  t8014 = t7987 + t7994;
  t8034 = t817*t1698;
  t8078 = t255*t8014;
  t8108 = t8034 + t8078;
  t8253 = -1.*t3521*t2879*t8108;
  t8270 = -1.*t2768*t3573*t8108;
  t8276 = t8253 + t8270;
  t8300 = t2768*t3521*t8108;
  t8303 = -1.*t2879*t3573*t8108;
  t8307 = t8300 + t8303;
  t8326 = t4135*t8276;
  t8330 = t4030*t8307;
  t8362 = t8326 + t8330;
  t8406 = t4030*t8276;
  t8437 = -1.*t4135*t8307;
  t8449 = t8406 + t8437;
  t8491 = -1.*t4476*t8362;
  t8497 = t4368*t8449;
  t8519 = t8491 + t8497;
  t8534 = t4368*t8362;
  t8570 = t4476*t8449;
  t8576 = t8534 + t8570;
  t8805 = -1.*t2879*t4917;
  t8809 = -1.*t2768*t5010;
  t8846 = t8805 + t8809;
  t8876 = t3573*t8846;
  t8885 = t8876 + t5125;
  t8905 = t3521*t8846;
  t8906 = -1.*t3573*t5115;
  t8930 = t8905 + t8906;
  t8965 = -1.*t4135*t8885;
  t8998 = t4030*t8930;
  t9031 = t8965 + t8998;
  t9101 = t4030*t8885;
  t9107 = t4135*t8930;
  t9116 = t9101 + t9107;
  t9181 = t4476*t9031;
  t9190 = t4368*t9116;
  t9192 = t9181 + t9190;
  t9200 = t4368*t9031;
  t9209 = -1.*t4476*t9116;
  t9219 = t9200 + t9209;
  t8747 = 0.049*t2768;
  t8758 = t8747 + t3366;
  t8762 = -0.09*t2768;
  t8781 = -0.049*t2879;
  t8799 = t8762 + t8781;
  t9386 = t255*t247*t1207;
  t9430 = t817*t7648;
  t9467 = t9386 + t9430;
  t9556 = -1.*t2879*t7069;
  t9597 = -1.*t2768*t9467;
  t9602 = t9556 + t9597;
  t9663 = t2768*t7069;
  t9709 = -1.*t2879*t9467;
  t9725 = t9663 + t9709;
  t9737 = t3573*t9602;
  t9757 = t3521*t9725;
  t9771 = t9737 + t9757;
  t9820 = t3521*t9602;
  t9826 = -1.*t3573*t9725;
  t9840 = t9820 + t9826;
  t9875 = -1.*t4135*t9771;
  t9881 = t4030*t9840;
  t9882 = t9875 + t9881;
  t9898 = t4030*t9771;
  t9912 = t4135*t9840;
  t9918 = t9898 + t9912;
  t9970 = t4476*t9882;
  t9977 = t4368*t9918;
  t9979 = t9970 + t9977;
  t10009 = t4368*t9882;
  t10018 = -1.*t4476*t9918;
  t10021 = t10009 + t10018;
  t10110 = -1.*t255*t1698;
  t10114 = t817*t8014;
  t10117 = t10110 + t10114;
  t10125 = -1.*t2879*t6435;
  t10135 = -1.*t2768*t10117;
  t10146 = t10125 + t10135;
  t10149 = t2768*t6435;
  t10168 = -1.*t2879*t10117;
  t10177 = t10149 + t10168;
  t10188 = t3573*t10146;
  t10195 = t3521*t10177;
  t10197 = t10188 + t10195;
  t10200 = t3521*t10146;
  t10207 = -1.*t3573*t10177;
  t10210 = t10200 + t10207;
  t10219 = -1.*t4135*t10197;
  t10222 = t4030*t10210;
  t10228 = t10219 + t10222;
  t10236 = t4030*t10197;
  t10248 = t4135*t10210;
  t10253 = t10236 + t10248;
  t10256 = t4476*t10228;
  t10260 = t4368*t10253;
  t10261 = t10256 + t10260;
  t10269 = t4368*t10228;
  t10284 = -1.*t4476*t10253;
  t10286 = t10269 + t10284;
  t10379 = -1.*t3521*t5071;
  t10387 = t10379 + t8906;
  t10390 = -1.*t4135*t5131;
  t10396 = t4030*t10387;
  t10397 = t10390 + t10396;
  t10420 = t4135*t10387;
  t10425 = t5198 + t10420;
  t10448 = t4476*t10397;
  t10455 = t4368*t10425;
  t10479 = t10448 + t10455;
  t10486 = t4368*t10397;
  t10487 = -1.*t4476*t10425;
  t10495 = t10486 + t10487;
  t10340 = -0.21*t3521;
  t10347 = -0.049*t3573;
  t10351 = t10340 + t10347;
  t10360 = 0.049*t3521;
  t10366 = t10360 + t3575;
  t10554 = t2879*t7069;
  t10560 = t2768*t9467;
  t10573 = t10554 + t10560;
  t10585 = -1.*t3573*t10573;
  t10597 = t10585 + t9757;
  t10604 = -1.*t3521*t10573;
  t10610 = t10604 + t9826;
  t10613 = -1.*t4135*t10597;
  t10616 = t4030*t10610;
  t10619 = t10613 + t10616;
  t10623 = t4030*t10597;
  t10627 = t4135*t10610;
  t10630 = t10623 + t10627;
  t10645 = t4476*t10619;
  t10646 = t4368*t10630;
  t10659 = t10645 + t10646;
  t10661 = t4368*t10619;
  t10666 = -1.*t4476*t10630;
  t10669 = t10661 + t10666;
  t10735 = t2879*t6435;
  t10740 = t2768*t10117;
  t10741 = t10735 + t10740;
  t10756 = -1.*t3573*t10741;
  t10762 = t10756 + t10195;
  t10770 = -1.*t3521*t10741;
  t10771 = t10770 + t10207;
  t10775 = -1.*t4135*t10762;
  t10776 = t4030*t10771;
  t10777 = t10775 + t10776;
  t10789 = t4030*t10762;
  t10790 = t4135*t10771;
  t10793 = t10789 + t10790;
  t10797 = t4476*t10777;
  t10798 = t4368*t10793;
  t10813 = t10797 + t10798;
  t10823 = t4368*t10777;
  t10835 = -1.*t4476*t10793;
  t10838 = t10823 + t10835;
  t10914 = -1.*t4030*t5165;
  t10920 = t10390 + t10914;
  t10936 = t4476*t10920;
  t10937 = t10936 + t5222;
  t10942 = t4368*t10920;
  t10946 = -1.*t4476*t5213;
  t10948 = t10942 + t10946;
  t10877 = 0.0016*t4030;
  t10878 = t10877 + t4254;
  t10894 = -0.2707*t4030;
  t10902 = -0.0016*t4135;
  t10908 = t10894 + t10902;
  t11005 = t3521*t10573;
  t11008 = t3573*t9725;
  t11012 = t11005 + t11008;
  t11017 = -1.*t4030*t11012;
  t11019 = t10613 + t11017;
  t11025 = -1.*t4135*t11012;
  t11026 = t10623 + t11025;
  t11031 = t4476*t11019;
  t11035 = t4368*t11026;
  t11040 = t11031 + t11035;
  t11050 = t4368*t11019;
  t11051 = -1.*t4476*t11026;
  t11054 = t11050 + t11051;
  t11088 = t3521*t10741;
  t11091 = t3573*t10177;
  t11096 = t11088 + t11091;
  t11098 = -1.*t4030*t11096;
  t11101 = t10775 + t11098;
  t11109 = -1.*t4135*t11096;
  t11110 = t10789 + t11109;
  t11116 = t4476*t11101;
  t11118 = t4368*t11110;
  t11119 = t11116 + t11118;
  t11127 = t4368*t11101;
  t11128 = -1.*t4476*t11110;
  t11129 = t11127 + t11128;
  t11170 = -1.*t4368*t5181;
  t11172 = t11170 + t10946;
  t5279 = t4698*t5224;
  t11156 = -0.7055*t4368;
  t11158 = 0.0184*t4476;
  t11160 = t11156 + t11158;
  t11162 = -0.0184*t4368;
  t11164 = t11162 + t4589;
  t11191 = t4135*t10597;
  t11192 = t4030*t11012;
  t11200 = t11191 + t11192;
  t11206 = -1.*t4476*t11200;
  t11207 = t11206 + t11035;
  t11210 = -1.*t4368*t11200;
  t11211 = t11210 + t11051;
  t11239 = t4135*t10762;
  t11240 = t4030*t11096;
  t11241 = t11239 + t11240;
  t11246 = -1.*t4476*t11241;
  t11247 = t11246 + t11118;
  t11252 = -1.*t4368*t11241;
  t11253 = t11252 + t11128;
  t11177 = -1.*t4715*t5224;
  t5294 = -1.*t4715*t5241;
  t5303 = t5279 + t5294;
  t11275 = 0.0216*t4698;
  t11277 = t11275 + t4741;
  t11281 = -1.1135*t4698;
  t11283 = -0.0216*t4715;
  t11287 = t11281 + t11283;
  t11214 = -1.*t4715*t11207;
  t11304 = t4368*t11200;
  t11305 = t4476*t11026;
  t11306 = t11304 + t11305;
  t11226 = t4698*t11207;
  t11262 = -1.*t4715*t11247;
  t11333 = t4368*t11241;
  t11334 = t4476*t11110;
  t11335 = t11333 + t11334;
  t11267 = t4698*t11247;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1561*t1933 + t2167*t2429 - 1.*t1087*t1207*t247 + t2572*t2679 + t2968*t2995 + t3381*t3499 + t3622*t3738 + t3910*t3972 + t4167*t4243 + t4265*t4329 + t4624*t4661 + t4677*t4693 + t4724*t4731 + t4742*t4752 + 0.0306*(t4715*t4731 + t4698*t4752) - 1.1312*(t4698*t4731 - 1.*t4715*t4752) - 0.1305*(t255*t2679 + t1207*t247*t817);
  p_output1[10]=t1087*t1757*t247 + t1561*t4823 + t2167*t4843 + t2572*t4878 + t2968*t4917 - 0.1305*t4951 + t3381*t5010 + t3622*t5071 + t3910*t5115 + t4167*t5131 + t4265*t5165 + t4624*t5181 + t4677*t5213 + t4724*t5224 + t4742*t5241 + 0.0306*(t4715*t5224 + t4698*t5241) - 1.1312*t5303;
  p_output1[11]=0;
  p_output1[12]=-1.*t1087*t1698*t1757 + t1561*t1651*t1757*t247 + t1757*t1875*t2167*t247 + t2572*t5351 + t2968*t5362 + t3381*t5378 + t3622*t5391 + t3910*t5399 + t4167*t5407 + t4265*t5425 + t4624*t5436 + t4677*t5448 + t4724*t5464 + t4742*t5468 + 0.0306*(t4715*t5464 + t4698*t5468) - 1.1312*(t4698*t5464 - 1.*t4715*t5468) - 0.1305*(t255*t5351 + t1698*t1757*t817);
  p_output1[13]=-1.*t1087*t1207*t1698 + t1207*t1561*t1651*t247 + t1207*t1875*t2167*t247 + t2572*t5509 + t2968*t5520 + t3381*t5546 + t3622*t5555 + t3910*t5563 + t4167*t5575 + t4265*t5584 + t4624*t5599 + t4677*t5613 + t4724*t5626 + t4742*t5657 + 0.0306*(t4715*t5626 + t4698*t5657) - 1.1312*(t4698*t5626 - 1.*t4715*t5657) - 0.1305*(t255*t5509 + t1207*t1698*t817);
  p_output1[14]=-1.*t1561*t1651*t1698 - 1.*t1698*t1875*t2167 - 1.*t1087*t247 + t2572*t5705 + t2968*t5718 + t3381*t5739 + t3622*t5748 + t3910*t5759 + t4167*t5768 + t4265*t5781 + t4624*t5786 + t4677*t5793 + t4724*t5817 + t4742*t5823 + 0.0306*(t4715*t5817 + t4698*t5823) - 1.1312*(t4698*t5817 - 1.*t4715*t5823) - 0.1305*(t255*t5705 + t247*t817);
  p_output1[15]=t2167*t4823 + t1561*t5865 + t2968*t5877 - 0.1305*t255*t5881 + t2572*t5881 + t3622*t5891 + t3910*t5898 + t4167*t5908 + t4265*t5916 + t4624*t5927 + t4677*t5937 + t4724*t5946 + t4742*t5973 + 0.0306*(t4715*t5946 + t4698*t5973) - 1.1312*(t4698*t5946 - 1.*t4715*t5973) + t3381*t5881*t817;
  p_output1[16]=t1561*t2429 + t2167*t6050 + t2968*t6061 - 0.1305*t255*t6070 + t2572*t6070 + t3622*t6094 + t3910*t6148 + t4167*t6201 + t4265*t6217 + t4624*t6251 + t4677*t6270 + t4724*t6299 + t4742*t6319 + 0.0306*(t4715*t6299 + t4698*t6319) - 1.1312*(t4698*t6299 - 1.*t4715*t6319) + t3381*t6070*t817;
  p_output1[17]=-1.*t1561*t1875*t247 + t1651*t2167*t247 + t6424 + t6438 + t6443 + t6446 + t6460 + t6504 + t6511 + t6534 + t6564 + t6603 + t6629 + t6643 + t6654 + t6666;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t2093*t4823 - 0.135*t1476*t4843 - 0.1305*t255*t4917 + t2572*t4917 + t2968*t6686 + t3622*t6723 + t3910*t6737 + t4167*t6772 + t4265*t6791 + t4624*t6822 + t4677*t6843 + t4724*t6881 + t4742*t6902 + 0.0306*(t4715*t6881 + t4698*t6902) - 1.1312*(t4698*t6881 - 1.*t4715*t6902) + t3381*t4917*t817;
  p_output1[40]=0.135*t2093*t6050 - 0.135*t1476*t7038 + t2968*t7057 - 0.1305*t255*t7069 + t2572*t7069 + t3622*t7085 + t3910*t7096 + t4167*t7116 + t4265*t7136 + t4624*t7176 + t4677*t7202 + t4724*t7213 + t4742*t7227 + 0.0306*(t4715*t7213 + t4698*t7227) - 1.1312*(t4698*t7213 - 1.*t4715*t7227) + t3381*t7069*t817;
  p_output1[41]=-0.135*t1476*t1875*t247 + 0.135*t1651*t2093*t247 + t6424 + t6438 + t6443 + t6446 + t6460 + t6504 + t6511 + t6534 + t6564 + t6603 + t6629 + t6643 + t6654 + t6666;
  p_output1[42]=t3381*t4951 + t2768*t3622*t4951 - 1.*t2879*t3910*t4951 + t1757*t247*t7349 + t4878*t7401 + t4167*t7550 + t4265*t7581 + t4624*t7594 + t4677*t7609 + t4724*t7617 + t4742*t7622 + 0.0306*(t4715*t7617 + t4698*t7622) - 1.1312*(t4698*t7617 - 1.*t4715*t7622) - 0.1305*(-1.*t1757*t247*t255 - 1.*t4878*t817);
  p_output1[43]=t1207*t247*t7349 + t7401*t7648 + t3381*t7663 + t2768*t3622*t7663 - 1.*t2879*t3910*t7663 + t4167*t7718 + t4265*t7755 + t4624*t7788 + t4677*t7818 + t4724*t7861 + t4742*t7878 + 0.0306*(t4715*t7861 + t4698*t7878) - 1.1312*(t4698*t7861 - 1.*t4715*t7878) - 0.1305*(t3394 - 1.*t7648*t817);
  p_output1[44]=-1.*t1698*t7349 + t7401*t8014 + t3381*t8108 + t2768*t3622*t8108 - 1.*t2879*t3910*t8108 - 0.1305*(t1698*t255 - 1.*t8014*t817) + t4167*t8276 + t4265*t8307 + t4624*t8362 + t4677*t8449 + t4724*t8519 + t4742*t8576 + 0.0306*(t4715*t8519 + t4698*t8576) - 1.1312*(t4698*t8519 - 1.*t4715*t8576);
  p_output1[45]=t3622*t5115 + t4917*t8758 + t5010*t8799 + t3910*t8846 + t4265*t8885 + t4167*t8930 + t4677*t9031 + t4624*t9116 + t4742*t9192 + t4724*t9219 - 1.1312*(-1.*t4715*t9192 + t4698*t9219) + 0.0306*(t4698*t9192 + t4715*t9219);
  p_output1[46]=t10021*t4724 + t7069*t8758 + t8799*t9467 + t3910*t9602 + t3622*t9725 + t4265*t9771 + t4167*t9840 + t4677*t9882 + t4624*t9918 + t4742*t9979 + 0.0306*(t10021*t4715 + t4698*t9979) - 1.1312*(t10021*t4698 - 1.*t4715*t9979);
  p_output1[47]=t10177*t3622 + t10146*t3910 + t10210*t4167 + t10197*t4265 + t10253*t4624 + t10228*t4677 - 1.1312*(t10286*t4698 - 1.*t10261*t4715) + 0.0306*(t10261*t4698 + t10286*t4715) + t10286*t4724 + t10261*t4742 + t6435*t8758 + t10117*t8799;
  p_output1[48]=t10387*t4167 + t10425*t4624 + t10397*t4677 - 1.1312*(t10495*t4698 - 1.*t10479*t4715) + 0.0306*(t10479*t4698 + t10495*t4715) + t10495*t4724 + t10479*t4742 + t10351*t5071 + t10366*t5115 + t4265*t5131;
  p_output1[49]=t10351*t10573 + t10610*t4167 + t10597*t4265 + t10630*t4624 + t10619*t4677 - 1.1312*(t10669*t4698 - 1.*t10659*t4715) + 0.0306*(t10659*t4698 + t10669*t4715) + t10669*t4724 + t10659*t4742 + t10366*t9725;
  p_output1[50]=t10177*t10366 + t10351*t10741 + t10771*t4167 + t10762*t4265 + t10793*t4624 + t10777*t4677 - 1.1312*(t10838*t4698 - 1.*t10813*t4715) + 0.0306*(t10813*t4698 + t10838*t4715) + t10838*t4724 + t10813*t4742;
  p_output1[51]=t10920*t4677 - 1.1312*(t10948*t4698 - 1.*t10937*t4715) + 0.0306*(t10937*t4698 + t10948*t4715) + t10948*t4724 + t10937*t4742 + t10878*t5131 + t10908*t5165 + t4624*t5213;
  p_output1[52]=t10597*t10878 + t10908*t11012 + t11026*t4624 + t11019*t4677 - 1.1312*(t11054*t4698 - 1.*t11040*t4715) + 0.0306*(t11040*t4698 + t11054*t4715) + t11054*t4724 + t11040*t4742;
  p_output1[53]=t10762*t10878 + t10908*t11096 + t11110*t4624 + t11101*t4677 - 1.1312*(t11129*t4698 - 1.*t11119*t4715) + 0.0306*(t11119*t4698 + t11129*t4715) + t11129*t4724 + t11119*t4742;
  p_output1[54]=-1.1312*(t11177 + t11172*t4698) + t11172*t4724 + t11160*t5181 + t11164*t5213 + t4742*t5224 + 0.0306*(t11172*t4715 + t5279);
  p_output1[55]=t11026*t11164 + t11160*t11200 - 1.1312*(t11214 + t11211*t4698) + 0.0306*(t11226 + t11211*t4715) + t11211*t4724 + t11207*t4742;
  p_output1[56]=t11110*t11164 + t11160*t11241 - 1.1312*(t11262 + t11253*t4698) + 0.0306*(t11267 + t11253*t4715) + t11253*t4724 + t11247*t4742;
  p_output1[57]=t11277*t5224 + t11287*t5241 - 1.1312*(t11177 - 1.*t4698*t5241) + 0.0306*t5303;
  p_output1[58]=t11207*t11277 + t11287*t11306 - 1.1312*(t11214 - 1.*t11306*t4698) + 0.0306*(t11226 - 1.*t11306*t4715);
  p_output1[59]=t11247*t11277 + t11287*t11335 - 1.1312*(t11262 - 1.*t11335*t4698) + 0.0306*(t11267 - 1.*t11335*t4715);
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE