// Copyright (c) 2018 Intel Corporation
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/*
//
//  Purpose:
//    Color conversions tables for forward transform
//
*/

#include "precomp.h"

#ifndef __OWNJ_H__
#include "ownj.h"
#endif
#ifndef __PJENCCCTBL_H__
#include "pjenccctbl.h"
#endif


#if ((_IPP == _IPP_PX) && (_IPP32E == _IPP32E_PX) && (_IPP64 == _IPP64_PX) && \
     (_IPPLP32 == _IPPLP32_PX) && (_IPPLP64 == _IPPLP64_PX) && defined(_MERGED_BLD)) || !defined(_MERGED_BLD)

const int mfxcc_table[] =
{
      -1,    19594,    39189,    58784,    78379,    97974,   117569,   137164,
  156759,   176354,   195949,   215544,   235139,   254734,   274329,   293924,
  313519,   333114,   352709,   372304,   391899,   411494,   431089,   450684,
  470279,   489874,   509469,   529064,   548659,   568254,   587849,   607444,
  627039,   646634,   666229,   685824,   705419,   725014,   744609,   764204,
  783799,   803394,   822989,   842584,   862179,   881774,   901369,   920964,
  940559,   960154,   979749,   999344,  1018939,  1038534,  1058129,  1077724,
 1097319,  1116914,  1136509,  1156104,  1175699,  1195294,  1214889,  1234484,
 1254079,  1273674,  1293269,  1312864,  1332459,  1352054,  1371649,  1391244,
 1410839,  1430434,  1450029,  1469624,  1489219,  1508814,  1528409,  1548004,
 1567599,  1587194,  1606789,  1626384,  1645979,  1665574,  1685169,  1704764,
 1724359,  1743954,  1763549,  1783144,  1802739,  1822334,  1841929,  1861524,
 1881119,  1900714,  1920309,  1939904,  1959499,  1979094,  1998689,  2018284,
 2037879,  2057474,  2077069,  2096664,  2116259,  2135854,  2155449,  2175044,
 2194639,  2214234,  2233829,  2253424,  2273019,  2292614,  2312209,  2331804,
 2351399,  2370994,  2390589,  2410184,  2429779,  2449374,  2468969,  2488564,
 2508159,  2527754,  2547349,  2566944,  2586539,  2606134,  2625729,  2645324,
 2664919,  2684514,  2704109,  2723704,  2743299,  2762894,  2782489,  2802084,
 2821679,  2841274,  2860869,  2880464,  2900059,  2919654,  2939249,  2958844,
 2978439,  2998034,  3017629,  3037224,  3056819,  3076414,  3096009,  3115604,
 3135199,  3154794,  3174389,  3193984,  3213579,  3233174,  3252769,  3272364,
 3291959,  3311554,  3331149,  3350744,  3370339,  3389934,  3409529,  3429124,
 3448719,  3468314,  3487909,  3507504,  3527099,  3546694,  3566289,  3585884,
 3605479,  3625074,  3644669,  3664264,  3683859,  3703454,  3723049,  3742644,
 3762239,  3781834,  3801429,  3821024,  3840619,  3860214,  3879809,  3899404,
 3918999,  3938594,  3958189,  3977784,  3997379,  4016974,  4036569,  4056164,
 4075759,  4095354,  4114949,  4134544,  4154139,  4173734,  4193329,  4212924,
 4232519,  4252114,  4271709,  4291304,  4310899,  4330494,  4350089,  4369684,
 4389279,  4408874,  4428469,  4448064,  4467659,  4487254,  4506849,  4526444,
 4546039,  4565634,  4585229,  4604824,  4624419,  4644014,  4663609,  4683204,
 4702799,  4722394,  4741989,  4761584,  4781179,  4800774,  4820369,  4839964,
 4859559,  4879154,  4898749,  4918344,  4937939,  4957534,  4977129,  4996724,
      -1,    38469,    76939,   115409,   153879,   192349,   230819,   269289,
  307759,   346229,   384699,   423169,   461639,   500109,   538579,   577049,
  615519,   653989,   692459,   730929,   769399,   807869,   846339,   884809,
  923279,   961749,  1000219,  1038689,  1077159,  1115629,  1154099,  1192569,
 1231039,  1269509,  1307979,  1346449,  1384919,  1423389,  1461859,  1500329,
 1538799,  1577269,  1615739,  1654209,  1692679,  1731149,  1769619,  1808089,
 1846559,  1885029,  1923499,  1961969,  2000439,  2038909,  2077379,  2115849,
 2154319,  2192789,  2231259,  2269729,  2308199,  2346669,  2385139,  2423609,
 2462079,  2500549,  2539019,  2577489,  2615959,  2654429,  2692899,  2731369,
 2769839,  2808309,  2846779,  2885249,  2923719,  2962189,  3000659,  3039129,
 3077599,  3116069,  3154539,  3193009,  3231479,  3269949,  3308419,  3346889,
 3385359,  3423829,  3462299,  3500769,  3539239,  3577709,  3616179,  3654649,
 3693119,  3731589,  3770059,  3808529,  3846999,  3885469,  3923939,  3962409,
 4000879,  4039349,  4077819,  4116289,  4154759,  4193229,  4231699,  4270169,
 4308639,  4347109,  4385579,  4424049,  4462519,  4500989,  4539459,  4577929,
 4616399,  4654869,  4693339,  4731809,  4770279,  4808749,  4847219,  4885689,
 4924159,  4962629,  5001099,  5039569,  5078039,  5116509,  5154979,  5193449,
 5231919,  5270389,  5308859,  5347329,  5385799,  5424269,  5462739,  5501209,
 5539679,  5578149,  5616619,  5655089,  5693559,  5732029,  5770499,  5808969,
 5847439,  5885909,  5924379,  5962849,  6001319,  6039789,  6078259,  6116729,
 6155199,  6193669,  6232139,  6270609,  6309079,  6347549,  6386019,  6424489,
 6462959,  6501429,  6539899,  6578369,  6616839,  6655309,  6693779,  6732249,
 6770719,  6809189,  6847659,  6886129,  6924599,  6963069,  7001539,  7040009,
 7078479,  7116949,  7155419,  7193889,  7232359,  7270829,  7309299,  7347769,
 7386239,  7424709,  7463179,  7501649,  7540119,  7578589,  7617059,  7655529,
 7693999,  7732469,  7770939,  7809409,  7847879,  7886349,  7924819,  7963289,
 8001759,  8040229,  8078699,  8117169,  8155639,  8194109,  8232579,  8271049,
 8309519,  8347989,  8386459,  8424929,  8463399,  8501869,  8540339,  8578809,
 8617279,  8655749,  8694219,  8732689,  8771159,  8809629,  8848099,  8886569,
 8925039,  8963509,  9001979,  9040449,  9078919,  9117389,  9155859,  9194329,
 9232799,  9271269,  9309739,  9348209,  9386679,  9425149,  9463619,  9502089,
 9540559,  9579029,  9617499,  9655969,  9694439,  9732909,  9771379,  9809849,
   32767,    40238,    47709,    55180,    62651,    70122,    77593,    85064,
   92535,   100006,   107477,   114948,   122419,   129890,   137361,   144832,
  152303,   159774,   167245,   174716,   182187,   189658,   197129,   204600,
  212071,   219542,   227013,   234484,   241955,   249426,   256897,   264368,
  271839,   279310,   286781,   294252,   301723,   309194,   316665,   324136,
  331607,   339078,   346549,   354020,   361491,   368962,   376433,   383904,
  391375,   398846,   406317,   413788,   421259,   428730,   436201,   443672,
  451143,   458614,   466085,   473556,   481027,   488498,   495969,   503440,
  510911,   518382,   525853,   533324,   540795,   548266,   555737,   563208,
  570679,   578150,   585621,   593092,   600563,   608034,   615505,   622976,
  630447,   637918,   645389,   652860,   660331,   667802,   675273,   682744,
  690215,   697686,   705157,   712628,   720099,   727570,   735041,   742512,
  749983,   757454,   764925,   772396,   779867,   787338,   794809,   802280,
  809751,   817222,   824693,   832164,   839635,   847106,   854577,   862048,
  869519,   876990,   884461,   891932,   899403,   906874,   914345,   921816,
  929287,   936758,   944229,   951700,   959171,   966642,   974113,   981584,
  989055,   996526,  1003997,  1011468,  1018939,  1026410,  1033881,  1041352,
 1048823,  1056294,  1063765,  1071236,  1078707,  1086178,  1093649,  1101120,
 1108591,  1116062,  1123533,  1131004,  1138475,  1145946,  1153417,  1160888,
 1168359,  1175830,  1183301,  1190772,  1198243,  1205714,  1213185,  1220656,
 1228127,  1235598,  1243069,  1250540,  1258011,  1265482,  1272953,  1280424,
 1287895,  1295366,  1302837,  1310308,  1317779,  1325250,  1332721,  1340192,
 1347663,  1355134,  1362605,  1370076,  1377547,  1385018,  1392489,  1399960,
 1407431,  1414902,  1422373,  1429844,  1437315,  1444786,  1452257,  1459728,
 1467199,  1474670,  1482141,  1489612,  1497083,  1504554,  1512025,  1519496,
 1526967,  1534438,  1541909,  1549380,  1556851,  1564322,  1571793,  1579264,
 1586735,  1594206,  1601677,  1609148,  1616619,  1624090,  1631561,  1639032,
 1646503,  1653974,  1661445,  1668916,  1676387,  1683858,  1691329,  1698800,
 1706271,  1713742,  1721213,  1728684,  1736155,  1743626,  1751097,  1758568,
 1766039,  1773510,  1780981,  1788452,  1795923,  1803394,  1810865,  1818336,
 1825807,  1833278,  1840749,  1848220,  1855691,  1863162,  1870633,  1878104,
 1885575,  1893046,  1900517,  1907988,  1915459,  1922930,  1930401,  1937872,
      -1,   -11060,   -22119,   -33178,   -44237,   -55296,   -66355,   -77414,
  -88473,   -99532,  -110591,  -121650,  -132709,  -143768,  -154827,  -165886,
 -176945,  -188004,  -199063,  -210122,  -221181,  -232240,  -243299,  -254358,
 -265417,  -276476,  -287535,  -298594,  -309653,  -320712,  -331771,  -342830,
 -353889,  -364948,  -376007,  -387066,  -398125,  -409184,  -420243,  -431302,
 -442361,  -453420,  -464479,  -475538,  -486597,  -497656,  -508715,  -519774,
 -530833,  -541892,  -552951,  -564010,  -575069,  -586128,  -597187,  -608246,
 -619305,  -630364,  -641423,  -652482,  -663541,  -674600,  -685659,  -696718,
 -707777,  -718836,  -729895,  -740954,  -752013,  -763072,  -774131,  -785190,
 -796249,  -807308,  -818367,  -829426,  -840485,  -851544,  -862603,  -873662,
 -884721,  -895780,  -906839,  -917898,  -928957,  -940016,  -951075,  -962134,
 -973193,  -984252,  -995311, -1006370, -1017429, -1028488, -1039547, -1050606,
-1061665, -1072724, -1083783, -1094842, -1105901, -1116960, -1128019, -1139078,
-1150137, -1161196, -1172255, -1183314, -1194373, -1205432, -1216491, -1227550,
-1238609, -1249668, -1260727, -1271786, -1282845, -1293904, -1304963, -1316022,
-1327081, -1338140, -1349199, -1360258, -1371317, -1382376, -1393435, -1404494,
-1415553, -1426612, -1437671, -1448730, -1459789, -1470848, -1481907, -1492966,
-1504025, -1515084, -1526143, -1537202, -1548261, -1559320, -1570379, -1581438,
-1592497, -1603556, -1614615, -1625674, -1636733, -1647792, -1658851, -1669910,
-1680969, -1692028, -1703087, -1714146, -1725205, -1736264, -1747323, -1758382,
-1769441, -1780500, -1791559, -1802618, -1813677, -1824736, -1835795, -1846854,
-1857913, -1868972, -1880031, -1891090, -1902149, -1913208, -1924267, -1935326,
-1946385, -1957444, -1968503, -1979562, -1990621, -2001680, -2012739, -2023798,
-2034857, -2045916, -2056975, -2068034, -2079093, -2090152, -2101211, -2112270,
-2123329, -2134388, -2145447, -2156506, -2167565, -2178624, -2189683, -2200742,
-2211801, -2222860, -2233919, -2244978, -2256037, -2267096, -2278155, -2289214,
-2300273, -2311332, -2322391, -2333450, -2344509, -2355568, -2366627, -2377686,
-2388745, -2399804, -2410863, -2421922, -2432981, -2444040, -2455099, -2466158,
-2477217, -2488276, -2499335, -2510394, -2521453, -2532512, -2543571, -2554630,
-2565689, -2576748, -2587807, -2598866, -2609925, -2620984, -2632043, -2643102,
-2654161, -2665220, -2676279, -2687338, -2698397, -2709456, -2720515, -2731574,
-2742633, -2753692, -2764751, -2775810, -2786869, -2797928, -2808987, -2820046,
      -1,   -21710,   -43419,   -65128,   -86837,  -108546,  -130255,  -151964,
 -173673,  -195382,  -217091,  -238800,  -260509,  -282218,  -303927,  -325636,
 -347345,  -369054,  -390763,  -412472,  -434181,  -455890,  -477599,  -499308,
 -521017,  -542726,  -564435,  -586144,  -607853,  -629562,  -651271,  -672980,
 -694689,  -716398,  -738107,  -759816,  -781525,  -803234,  -824943,  -846652,
 -868361,  -890070,  -911779,  -933488,  -955197,  -976906,  -998615, -1020324,
-1042033, -1063742, -1085451, -1107160, -1128869, -1150578, -1172287, -1193996,
-1215705, -1237414, -1259123, -1280832, -1302541, -1324250, -1345959, -1367668,
-1389377, -1411086, -1432795, -1454504, -1476213, -1497922, -1519631, -1541340,
-1563049, -1584758, -1606467, -1628176, -1649885, -1671594, -1693303, -1715012,
-1736721, -1758430, -1780139, -1801848, -1823557, -1845266, -1866975, -1888684,
-1910393, -1932102, -1953811, -1975520, -1997229, -2018938, -2040647, -2062356,
-2084065, -2105774, -2127483, -2149192, -2170901, -2192610, -2214319, -2236028,
-2257737, -2279446, -2301155, -2322864, -2344573, -2366282, -2387991, -2409700,
-2431409, -2453118, -2474827, -2496536, -2518245, -2539954, -2561663, -2583372,
-2605081, -2626790, -2648499, -2670208, -2691917, -2713626, -2735335, -2757044,
-2778753, -2800462, -2822171, -2843880, -2865589, -2887298, -2909007, -2930716,
-2952425, -2974134, -2995843, -3017552, -3039261, -3060970, -3082679, -3104388,
-3126097, -3147806, -3169515, -3191224, -3212933, -3234642, -3256351, -3278060,
-3299769, -3321478, -3343187, -3364896, -3386605, -3408314, -3430023, -3451732,
-3473441, -3495150, -3516859, -3538568, -3560277, -3581986, -3603695, -3625404,
-3647113, -3668822, -3690531, -3712240, -3733949, -3755658, -3777367, -3799076,
-3820785, -3842494, -3864203, -3885912, -3907621, -3929330, -3951039, -3972748,
-3994457, -4016166, -4037875, -4059584, -4081293, -4103002, -4124711, -4146420,
-4168129, -4189838, -4211547, -4233256, -4254965, -4276674, -4298383, -4320092,
-4341801, -4363510, -4385219, -4406928, -4428637, -4450346, -4472055, -4493764,
-4515473, -4537182, -4558891, -4580600, -4602309, -4624018, -4645727, -4667436,
-4689145, -4710854, -4732563, -4754272, -4775981, -4797690, -4819399, -4841108,
-4862817, -4884526, -4906235, -4927944, -4949653, -4971362, -4993071, -5014780,
-5036489, -5058198, -5079907, -5101616, -5123325, -5145034, -5166743, -5188452,
-5210161, -5231870, -5253579, -5275288, -5296997, -5318706, -5340415, -5362124,
-5383833, -5405542, -5427251, -5448960, -5470669, -5492378, -5514087, -5535796,
 8421374,  8454142,  8486910,  8519678,  8552446,  8585214,  8617982,  8650750,
 8683518,  8716286,  8749054,  8781822,  8814590,  8847358,  8880126,  8912894,
 8945662,  8978430,  9011198,  9043966,  9076734,  9109502,  9142270,  9175038,
 9207806,  9240574,  9273342,  9306110,  9338878,  9371646,  9404414,  9437182,
 9469950,  9502718,  9535486,  9568254,  9601022,  9633790,  9666558,  9699326,
 9732094,  9764862,  9797630,  9830398,  9863166,  9895934,  9928702,  9961470,
 9994238, 10027006, 10059774, 10092542, 10125310, 10158078, 10190846, 10223614,
10256382, 10289150, 10321918, 10354686, 10387454, 10420222, 10452990, 10485758,
10518526, 10551294, 10584062, 10616830, 10649598, 10682366, 10715134, 10747902,
10780670, 10813438, 10846206, 10878974, 10911742, 10944510, 10977278, 11010046,
11042814, 11075582, 11108350, 11141118, 11173886, 11206654, 11239422, 11272190,
11304958, 11337726, 11370494, 11403262, 11436030, 11468798, 11501566, 11534334,
11567102, 11599870, 11632638, 11665406, 11698174, 11730942, 11763710, 11796478,
11829246, 11862014, 11894782, 11927550, 11960318, 11993086, 12025854, 12058622,
12091390, 12124158, 12156926, 12189694, 12222462, 12255230, 12287998, 12320766,
12353534, 12386302, 12419070, 12451838, 12484606, 12517374, 12550142, 12582910,
12615678, 12648446, 12681214, 12713982, 12746750, 12779518, 12812286, 12845054,
12877822, 12910590, 12943358, 12976126, 13008894, 13041662, 13074430, 13107198,
13139966, 13172734, 13205502, 13238270, 13271038, 13303806, 13336574, 13369342,
13402110, 13434878, 13467646, 13500414, 13533182, 13565950, 13598718, 13631486,
13664254, 13697022, 13729790, 13762558, 13795326, 13828094, 13860862, 13893630,
13926398, 13959166, 13991934, 14024702, 14057470, 14090238, 14123006, 14155774,
14188542, 14221310, 14254078, 14286846, 14319614, 14352382, 14385150, 14417918,
14450686, 14483454, 14516222, 14548990, 14581758, 14614526, 14647294, 14680062,
14712830, 14745598, 14778366, 14811134, 14843902, 14876670, 14909438, 14942206,
14974974, 15007742, 15040510, 15073278, 15106046, 15138814, 15171582, 15204350,
15237118, 15269886, 15302654, 15335422, 15368190, 15400958, 15433726, 15466494,
15499262, 15532030, 15564798, 15597566, 15630334, 15663102, 15695870, 15728638,
15761406, 15794174, 15826942, 15859710, 15892478, 15925246, 15958014, 15990782,
16023550, 16056318, 16089086, 16121854, 16154622, 16187390, 16220158, 16252926,
16285694, 16318462, 16351230, 16383998, 16416766, 16449534, 16482302, 16515070,
16547838, 16580606, 16613374, 16646142, 16678910, 16711678, 16744446, 16777214,
      -1,   -27440,   -54879,   -82318,  -109757,  -137196,  -164635,  -192074,
 -219513,  -246952,  -274391,  -301830,  -329269,  -356708,  -384147,  -411586,
 -439025,  -466464,  -493903,  -521342,  -548781,  -576220,  -603659,  -631098,
 -658537,  -685976,  -713415,  -740854,  -768293,  -795732,  -823171,  -850610,
 -878049,  -905488,  -932927,  -960366,  -987805, -1015244, -1042683, -1070122,
-1097561, -1125000, -1152439, -1179878, -1207317, -1234756, -1262195, -1289634,
-1317073, -1344512, -1371951, -1399390, -1426829, -1454268, -1481707, -1509146,
-1536585, -1564024, -1591463, -1618902, -1646341, -1673780, -1701219, -1728658,
-1756097, -1783536, -1810975, -1838414, -1865853, -1893292, -1920731, -1948170,
-1975609, -2003048, -2030487, -2057926, -2085365, -2112804, -2140243, -2167682,
-2195121, -2222560, -2249999, -2277438, -2304877, -2332316, -2359755, -2387194,
-2414633, -2442072, -2469511, -2496950, -2524389, -2551828, -2579267, -2606706,
-2634145, -2661584, -2689023, -2716462, -2743901, -2771340, -2798779, -2826218,
-2853657, -2881096, -2908535, -2935974, -2963413, -2990852, -3018291, -3045730,
-3073169, -3100608, -3128047, -3155486, -3182925, -3210364, -3237803, -3265242,
-3292681, -3320120, -3347559, -3374998, -3402437, -3429876, -3457315, -3484754,
-3512193, -3539632, -3567071, -3594510, -3621949, -3649388, -3676827, -3704266,
-3731705, -3759144, -3786583, -3814022, -3841461, -3868900, -3896339, -3923778,
-3951217, -3978656, -4006095, -4033534, -4060973, -4088412, -4115851, -4143290,
-4170729, -4198168, -4225607, -4253046, -4280485, -4307924, -4335363, -4362802,
-4390241, -4417680, -4445119, -4472558, -4499997, -4527436, -4554875, -4582314,
-4609753, -4637192, -4664631, -4692070, -4719509, -4746948, -4774387, -4801826,
-4829265, -4856704, -4884143, -4911582, -4939021, -4966460, -4993899, -5021338,
-5048777, -5076216, -5103655, -5131094, -5158533, -5185972, -5213411, -5240850,
-5268289, -5295728, -5323167, -5350606, -5378045, -5405484, -5432923, -5460362,
-5487801, -5515240, -5542679, -5570118, -5597557, -5624996, -5652435, -5679874,
-5707313, -5734752, -5762191, -5789630, -5817069, -5844508, -5871947, -5899386,
-5926825, -5954264, -5981703, -6009142, -6036581, -6064020, -6091459, -6118898,
-6146337, -6173776, -6201215, -6228654, -6256093, -6283532, -6310971, -6338410,
-6365849, -6393288, -6420727, -6448166, -6475605, -6503044, -6530483, -6557922,
-6585361, -6612800, -6640239, -6667678, -6695117, -6722556, -6749995, -6777434,
-6804873, -6832312, -6859751, -6887190, -6914629, -6942068, -6969507, -6996946,
      -1,    -5330,   -10659,   -15988,   -21317,   -26646,   -31975,   -37304,
  -42633,   -47962,   -53291,   -58620,   -63949,   -69278,   -74607,   -79936,
  -85265,   -90594,   -95923,  -101252,  -106581,  -111910,  -117239,  -122568,
 -127897,  -133226,  -138555,  -143884,  -149213,  -154542,  -159871,  -165200,
 -170529,  -175858,  -181187,  -186516,  -191845,  -197174,  -202503,  -207832,
 -213161,  -218490,  -223819,  -229148,  -234477,  -239806,  -245135,  -250464,
 -255793,  -261122,  -266451,  -271780,  -277109,  -282438,  -287767,  -293096,
 -298425,  -303754,  -309083,  -314412,  -319741,  -325070,  -330399,  -335728,
 -341057,  -346386,  -351715,  -357044,  -362373,  -367702,  -373031,  -378360,
 -383689,  -389018,  -394347,  -399676,  -405005,  -410334,  -415663,  -420992,
 -426321,  -431650,  -436979,  -442308,  -447637,  -452966,  -458295,  -463624,
 -468953,  -474282,  -479611,  -484940,  -490269,  -495598,  -500927,  -506256,
 -511585,  -516914,  -522243,  -527572,  -532901,  -538230,  -543559,  -548888,
 -554217,  -559546,  -564875,  -570204,  -575533,  -580862,  -586191,  -591520,
 -596849,  -602178,  -607507,  -612836,  -618165,  -623494,  -628823,  -634152,
 -639481,  -644810,  -650139,  -655468,  -660797,  -666126,  -671455,  -676784,
 -682113,  -687442,  -692771,  -698100,  -703429,  -708758,  -714087,  -719416,
 -724745,  -730074,  -735403,  -740732,  -746061,  -751390,  -756719,  -762048,
 -767377,  -772706,  -778035,  -783364,  -788693,  -794022,  -799351,  -804680,
 -810009,  -815338,  -820667,  -825996,  -831325,  -836654,  -841983,  -847312,
 -852641,  -857970,  -863299,  -868628,  -873957,  -879286,  -884615,  -889944,
 -895273,  -900602,  -905931,  -911260,  -916589,  -921918,  -927247,  -932576,
 -937905,  -943234,  -948563,  -953892,  -959221,  -964550,  -969879,  -975208,
 -980537,  -985866,  -991195,  -996524, -1001853, -1007182, -1012511, -1017840,
-1023169, -1028498, -1033827, -1039156, -1044485, -1049814, -1055143, -1060472,
-1065801, -1071130, -1076459, -1081788, -1087117, -1092446, -1097775, -1103104,
-1108433, -1113762, -1119091, -1124420, -1129749, -1135078, -1140407, -1145736,
-1151065, -1156394, -1161723, -1167052, -1172381, -1177710, -1183039, -1188368,
-1193697, -1199026, -1204355, -1209684, -1215013, -1220342, -1225671, -1231000,
-1236329, -1241658, -1246987, -1252316, -1257645, -1262974, -1268303, -1273632,
-1278961, -1284290, -1289619, -1294948, -1300277, -1305606, -1310935, -1316264,
-1321593, -1326922, -1332251, -1337580, -1342909, -1348238, -1353567, -1358896,
};

#endif /* _MERGED_BLD */
