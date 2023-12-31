/* Produced by CVXGEN, 2022-06-01 01:00:29 -0400.  */
/* CVXGEN is Copyright (C) 2006-2017 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2017 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: testsolver.c. */
/* Description: Basic test harness for solver.c. */
#include "solver.h"
Vars vars;
Params params;
Workspace work;
Settings settings;
#define NUMTESTS 0
int main(int argc, char **argv) {
  int num_iters;
#if (NUMTESTS > 0)
  int i;
  double time;
  double time_per;
#endif
  set_defaults();
  setup_indexing();
  load_default_data();
  /* Solve problem instance for the record. */
  settings.verbose = 1;
  num_iters = solve();
#ifndef ZERO_LIBRARY_MODE
#if (NUMTESTS > 0)
  /* Now solve multiple problem instances for timing purposes. */
  settings.verbose = 0;
  tic();
  for (i = 0; i < NUMTESTS; i++) {
    solve();
  }
  time = tocq();
  printf("Timed %d solves over %.3f seconds.\n", NUMTESTS, time);
  time_per = time / NUMTESTS;
  if (time_per > 1) {
    printf("Actual time taken per solve: %.3g s.\n", time_per);
  } else if (time_per > 1e-3) {
    printf("Actual time taken per solve: %.3g ms.\n", 1e3*time_per);
  } else {
    printf("Actual time taken per solve: %.3g us.\n", 1e6*time_per);
  }
#endif
#endif
  return 0;
}
void load_default_data(void) {
  /* Make this a diagonal PSD matrix, even though it's not diagonal. */
  params.H[0] = 1.5507979025745755;
  params.H[34] = 0;
  params.H[68] = 0;
  params.H[102] = 0;
  params.H[136] = 0;
  params.H[170] = 0;
  params.H[204] = 0;
  params.H[238] = 0;
  params.H[272] = 0;
  params.H[306] = 0;
  params.H[340] = 0;
  params.H[374] = 0;
  params.H[408] = 0;
  params.H[442] = 0;
  params.H[476] = 0;
  params.H[510] = 0;
  params.H[544] = 0;
  params.H[578] = 0;
  params.H[612] = 0;
  params.H[646] = 0;
  params.H[680] = 0;
  params.H[714] = 0;
  params.H[748] = 0;
  params.H[782] = 0;
  params.H[816] = 0;
  params.H[850] = 0;
  params.H[884] = 0;
  params.H[918] = 0;
  params.H[952] = 0;
  params.H[986] = 0;
  params.H[1020] = 0;
  params.H[1054] = 0;
  params.H[1088] = 0;
  params.H[1122] = 0;
  params.H[1] = 0;
  params.H[35] = 1.7081478226181048;
  params.H[69] = 0;
  params.H[103] = 0;
  params.H[137] = 0;
  params.H[171] = 0;
  params.H[205] = 0;
  params.H[239] = 0;
  params.H[273] = 0;
  params.H[307] = 0;
  params.H[341] = 0;
  params.H[375] = 0;
  params.H[409] = 0;
  params.H[443] = 0;
  params.H[477] = 0;
  params.H[511] = 0;
  params.H[545] = 0;
  params.H[579] = 0;
  params.H[613] = 0;
  params.H[647] = 0;
  params.H[681] = 0;
  params.H[715] = 0;
  params.H[749] = 0;
  params.H[783] = 0;
  params.H[817] = 0;
  params.H[851] = 0;
  params.H[885] = 0;
  params.H[919] = 0;
  params.H[953] = 0;
  params.H[987] = 0;
  params.H[1021] = 0;
  params.H[1055] = 0;
  params.H[1089] = 0;
  params.H[1123] = 0;
  params.H[2] = 0;
  params.H[36] = 0;
  params.H[70] = 1.2909047389129444;
  params.H[104] = 0;
  params.H[138] = 0;
  params.H[172] = 0;
  params.H[206] = 0;
  params.H[240] = 0;
  params.H[274] = 0;
  params.H[308] = 0;
  params.H[342] = 0;
  params.H[376] = 0;
  params.H[410] = 0;
  params.H[444] = 0;
  params.H[478] = 0;
  params.H[512] = 0;
  params.H[546] = 0;
  params.H[580] = 0;
  params.H[614] = 0;
  params.H[648] = 0;
  params.H[682] = 0;
  params.H[716] = 0;
  params.H[750] = 0;
  params.H[784] = 0;
  params.H[818] = 0;
  params.H[852] = 0;
  params.H[886] = 0;
  params.H[920] = 0;
  params.H[954] = 0;
  params.H[988] = 0;
  params.H[1022] = 0;
  params.H[1056] = 0;
  params.H[1090] = 0;
  params.H[1124] = 0;
  params.H[3] = 0;
  params.H[37] = 0;
  params.H[71] = 0;
  params.H[105] = 1.510827605197663;
  params.H[139] = 0;
  params.H[173] = 0;
  params.H[207] = 0;
  params.H[241] = 0;
  params.H[275] = 0;
  params.H[309] = 0;
  params.H[343] = 0;
  params.H[377] = 0;
  params.H[411] = 0;
  params.H[445] = 0;
  params.H[479] = 0;
  params.H[513] = 0;
  params.H[547] = 0;
  params.H[581] = 0;
  params.H[615] = 0;
  params.H[649] = 0;
  params.H[683] = 0;
  params.H[717] = 0;
  params.H[751] = 0;
  params.H[785] = 0;
  params.H[819] = 0;
  params.H[853] = 0;
  params.H[887] = 0;
  params.H[921] = 0;
  params.H[955] = 0;
  params.H[989] = 0;
  params.H[1023] = 0;
  params.H[1057] = 0;
  params.H[1091] = 0;
  params.H[1125] = 0;
  params.H[4] = 0;
  params.H[38] = 0;
  params.H[72] = 0;
  params.H[106] = 0;
  params.H[140] = 1.8929469543476547;
  params.H[174] = 0;
  params.H[208] = 0;
  params.H[242] = 0;
  params.H[276] = 0;
  params.H[310] = 0;
  params.H[344] = 0;
  params.H[378] = 0;
  params.H[412] = 0;
  params.H[446] = 0;
  params.H[480] = 0;
  params.H[514] = 0;
  params.H[548] = 0;
  params.H[582] = 0;
  params.H[616] = 0;
  params.H[650] = 0;
  params.H[684] = 0;
  params.H[718] = 0;
  params.H[752] = 0;
  params.H[786] = 0;
  params.H[820] = 0;
  params.H[854] = 0;
  params.H[888] = 0;
  params.H[922] = 0;
  params.H[956] = 0;
  params.H[990] = 0;
  params.H[1024] = 0;
  params.H[1058] = 0;
  params.H[1092] = 0;
  params.H[1126] = 0;
  params.H[5] = 0;
  params.H[39] = 0;
  params.H[73] = 0;
  params.H[107] = 0;
  params.H[141] = 0;
  params.H[175] = 1.896293088933438;
  params.H[209] = 0;
  params.H[243] = 0;
  params.H[277] = 0;
  params.H[311] = 0;
  params.H[345] = 0;
  params.H[379] = 0;
  params.H[413] = 0;
  params.H[447] = 0;
  params.H[481] = 0;
  params.H[515] = 0;
  params.H[549] = 0;
  params.H[583] = 0;
  params.H[617] = 0;
  params.H[651] = 0;
  params.H[685] = 0;
  params.H[719] = 0;
  params.H[753] = 0;
  params.H[787] = 0;
  params.H[821] = 0;
  params.H[855] = 0;
  params.H[889] = 0;
  params.H[923] = 0;
  params.H[957] = 0;
  params.H[991] = 0;
  params.H[1025] = 0;
  params.H[1059] = 0;
  params.H[1093] = 0;
  params.H[1127] = 0;
  params.H[6] = 0;
  params.H[40] = 0;
  params.H[74] = 0;
  params.H[108] = 0;
  params.H[142] = 0;
  params.H[176] = 0;
  params.H[210] = 1.1255853104638363;
  params.H[244] = 0;
  params.H[278] = 0;
  params.H[312] = 0;
  params.H[346] = 0;
  params.H[380] = 0;
  params.H[414] = 0;
  params.H[448] = 0;
  params.H[482] = 0;
  params.H[516] = 0;
  params.H[550] = 0;
  params.H[584] = 0;
  params.H[618] = 0;
  params.H[652] = 0;
  params.H[686] = 0;
  params.H[720] = 0;
  params.H[754] = 0;
  params.H[788] = 0;
  params.H[822] = 0;
  params.H[856] = 0;
  params.H[890] = 0;
  params.H[924] = 0;
  params.H[958] = 0;
  params.H[992] = 0;
  params.H[1026] = 0;
  params.H[1060] = 0;
  params.H[1094] = 0;
  params.H[1128] = 0;
  params.H[7] = 0;
  params.H[41] = 0;
  params.H[75] = 0;
  params.H[109] = 0;
  params.H[143] = 0;
  params.H[177] = 0;
  params.H[211] = 0;
  params.H[245] = 1.2072428781381868;
  params.H[279] = 0;
  params.H[313] = 0;
  params.H[347] = 0;
  params.H[381] = 0;
  params.H[415] = 0;
  params.H[449] = 0;
  params.H[483] = 0;
  params.H[517] = 0;
  params.H[551] = 0;
  params.H[585] = 0;
  params.H[619] = 0;
  params.H[653] = 0;
  params.H[687] = 0;
  params.H[721] = 0;
  params.H[755] = 0;
  params.H[789] = 0;
  params.H[823] = 0;
  params.H[857] = 0;
  params.H[891] = 0;
  params.H[925] = 0;
  params.H[959] = 0;
  params.H[993] = 0;
  params.H[1027] = 0;
  params.H[1061] = 0;
  params.H[1095] = 0;
  params.H[1129] = 0;
  params.H[8] = 0;
  params.H[42] = 0;
  params.H[76] = 0;
  params.H[110] = 0;
  params.H[144] = 0;
  params.H[178] = 0;
  params.H[212] = 0;
  params.H[246] = 0;
  params.H[280] = 1.0514672033008299;
  params.H[314] = 0;
  params.H[348] = 0;
  params.H[382] = 0;
  params.H[416] = 0;
  params.H[450] = 0;
  params.H[484] = 0;
  params.H[518] = 0;
  params.H[552] = 0;
  params.H[586] = 0;
  params.H[620] = 0;
  params.H[654] = 0;
  params.H[688] = 0;
  params.H[722] = 0;
  params.H[756] = 0;
  params.H[790] = 0;
  params.H[824] = 0;
  params.H[858] = 0;
  params.H[892] = 0;
  params.H[926] = 0;
  params.H[960] = 0;
  params.H[994] = 0;
  params.H[1028] = 0;
  params.H[1062] = 0;
  params.H[1096] = 0;
  params.H[1130] = 0;
  params.H[9] = 0;
  params.H[43] = 0;
  params.H[77] = 0;
  params.H[111] = 0;
  params.H[145] = 0;
  params.H[179] = 0;
  params.H[213] = 0;
  params.H[247] = 0;
  params.H[281] = 0;
  params.H[315] = 1.4408098436506365;
  params.H[349] = 0;
  params.H[383] = 0;
  params.H[417] = 0;
  params.H[451] = 0;
  params.H[485] = 0;
  params.H[519] = 0;
  params.H[553] = 0;
  params.H[587] = 0;
  params.H[621] = 0;
  params.H[655] = 0;
  params.H[689] = 0;
  params.H[723] = 0;
  params.H[757] = 0;
  params.H[791] = 0;
  params.H[825] = 0;
  params.H[859] = 0;
  params.H[893] = 0;
  params.H[927] = 0;
  params.H[961] = 0;
  params.H[995] = 0;
  params.H[1029] = 0;
  params.H[1063] = 0;
  params.H[1097] = 0;
  params.H[1131] = 0;
  params.H[10] = 0;
  params.H[44] = 0;
  params.H[78] = 0;
  params.H[112] = 0;
  params.H[146] = 0;
  params.H[180] = 0;
  params.H[214] = 0;
  params.H[248] = 0;
  params.H[282] = 0;
  params.H[316] = 0;
  params.H[350] = 1.0298762108785668;
  params.H[384] = 0;
  params.H[418] = 0;
  params.H[452] = 0;
  params.H[486] = 0;
  params.H[520] = 0;
  params.H[554] = 0;
  params.H[588] = 0;
  params.H[622] = 0;
  params.H[656] = 0;
  params.H[690] = 0;
  params.H[724] = 0;
  params.H[758] = 0;
  params.H[792] = 0;
  params.H[826] = 0;
  params.H[860] = 0;
  params.H[894] = 0;
  params.H[928] = 0;
  params.H[962] = 0;
  params.H[996] = 0;
  params.H[1030] = 0;
  params.H[1064] = 0;
  params.H[1098] = 0;
  params.H[1132] = 0;
  params.H[11] = 0;
  params.H[45] = 0;
  params.H[79] = 0;
  params.H[113] = 0;
  params.H[147] = 0;
  params.H[181] = 0;
  params.H[215] = 0;
  params.H[249] = 0;
  params.H[283] = 0;
  params.H[317] = 0;
  params.H[351] = 0;
  params.H[385] = 1.456833224394711;
  params.H[419] = 0;
  params.H[453] = 0;
  params.H[487] = 0;
  params.H[521] = 0;
  params.H[555] = 0;
  params.H[589] = 0;
  params.H[623] = 0;
  params.H[657] = 0;
  params.H[691] = 0;
  params.H[725] = 0;
  params.H[759] = 0;
  params.H[793] = 0;
  params.H[827] = 0;
  params.H[861] = 0;
  params.H[895] = 0;
  params.H[929] = 0;
  params.H[963] = 0;
  params.H[997] = 0;
  params.H[1031] = 0;
  params.H[1065] = 0;
  params.H[1099] = 0;
  params.H[1133] = 0;
  params.H[12] = 0;
  params.H[46] = 0;
  params.H[80] = 0;
  params.H[114] = 0;
  params.H[148] = 0;
  params.H[182] = 0;
  params.H[216] = 0;
  params.H[250] = 0;
  params.H[284] = 0;
  params.H[318] = 0;
  params.H[352] = 0;
  params.H[386] = 0;
  params.H[420] = 1.6491440476147607;
  params.H[454] = 0;
  params.H[488] = 0;
  params.H[522] = 0;
  params.H[556] = 0;
  params.H[590] = 0;
  params.H[624] = 0;
  params.H[658] = 0;
  params.H[692] = 0;
  params.H[726] = 0;
  params.H[760] = 0;
  params.H[794] = 0;
  params.H[828] = 0;
  params.H[862] = 0;
  params.H[896] = 0;
  params.H[930] = 0;
  params.H[964] = 0;
  params.H[998] = 0;
  params.H[1032] = 0;
  params.H[1066] = 0;
  params.H[1100] = 0;
  params.H[1134] = 0;
  params.H[13] = 0;
  params.H[47] = 0;
  params.H[81] = 0;
  params.H[115] = 0;
  params.H[149] = 0;
  params.H[183] = 0;
  params.H[217] = 0;
  params.H[251] = 0;
  params.H[285] = 0;
  params.H[319] = 0;
  params.H[353] = 0;
  params.H[387] = 0;
  params.H[421] = 0;
  params.H[455] = 1.2784872826479754;
  params.H[489] = 0;
  params.H[523] = 0;
  params.H[557] = 0;
  params.H[591] = 0;
  params.H[625] = 0;
  params.H[659] = 0;
  params.H[693] = 0;
  params.H[727] = 0;
  params.H[761] = 0;
  params.H[795] = 0;
  params.H[829] = 0;
  params.H[863] = 0;
  params.H[897] = 0;
  params.H[931] = 0;
  params.H[965] = 0;
  params.H[999] = 0;
  params.H[1033] = 0;
  params.H[1067] = 0;
  params.H[1101] = 0;
  params.H[1135] = 0;
  params.H[14] = 0;
  params.H[48] = 0;
  params.H[82] = 0;
  params.H[116] = 0;
  params.H[150] = 0;
  params.H[184] = 0;
  params.H[218] = 0;
  params.H[252] = 0;
  params.H[286] = 0;
  params.H[320] = 0;
  params.H[354] = 0;
  params.H[388] = 0;
  params.H[422] = 0;
  params.H[456] = 0;
  params.H[490] = 1.6762549019801312;
  params.H[524] = 0;
  params.H[558] = 0;
  params.H[592] = 0;
  params.H[626] = 0;
  params.H[660] = 0;
  params.H[694] = 0;
  params.H[728] = 0;
  params.H[762] = 0;
  params.H[796] = 0;
  params.H[830] = 0;
  params.H[864] = 0;
  params.H[898] = 0;
  params.H[932] = 0;
  params.H[966] = 0;
  params.H[1000] = 0;
  params.H[1034] = 0;
  params.H[1068] = 0;
  params.H[1102] = 0;
  params.H[1136] = 0;
  params.H[15] = 0;
  params.H[49] = 0;
  params.H[83] = 0;
  params.H[117] = 0;
  params.H[151] = 0;
  params.H[185] = 0;
  params.H[219] = 0;
  params.H[253] = 0;
  params.H[287] = 0;
  params.H[321] = 0;
  params.H[355] = 0;
  params.H[389] = 0;
  params.H[423] = 0;
  params.H[457] = 0;
  params.H[491] = 0;
  params.H[525] = 1.5908628174163508;
  params.H[559] = 0;
  params.H[593] = 0;
  params.H[627] = 0;
  params.H[661] = 0;
  params.H[695] = 0;
  params.H[729] = 0;
  params.H[763] = 0;
  params.H[797] = 0;
  params.H[831] = 0;
  params.H[865] = 0;
  params.H[899] = 0;
  params.H[933] = 0;
  params.H[967] = 0;
  params.H[1001] = 0;
  params.H[1035] = 0;
  params.H[1069] = 0;
  params.H[1103] = 0;
  params.H[1137] = 0;
  params.H[16] = 0;
  params.H[50] = 0;
  params.H[84] = 0;
  params.H[118] = 0;
  params.H[152] = 0;
  params.H[186] = 0;
  params.H[220] = 0;
  params.H[254] = 0;
  params.H[288] = 0;
  params.H[322] = 0;
  params.H[356] = 0;
  params.H[390] = 0;
  params.H[424] = 0;
  params.H[458] = 0;
  params.H[492] = 0;
  params.H[526] = 0;
  params.H[560] = 1.0239818823771654;
  params.H[594] = 0;
  params.H[628] = 0;
  params.H[662] = 0;
  params.H[696] = 0;
  params.H[730] = 0;
  params.H[764] = 0;
  params.H[798] = 0;
  params.H[832] = 0;
  params.H[866] = 0;
  params.H[900] = 0;
  params.H[934] = 0;
  params.H[968] = 0;
  params.H[1002] = 0;
  params.H[1036] = 0;
  params.H[1070] = 0;
  params.H[1104] = 0;
  params.H[1138] = 0;
  params.H[17] = 0;
  params.H[51] = 0;
  params.H[85] = 0;
  params.H[119] = 0;
  params.H[153] = 0;
  params.H[187] = 0;
  params.H[221] = 0;
  params.H[255] = 0;
  params.H[289] = 0;
  params.H[323] = 0;
  params.H[357] = 0;
  params.H[391] = 0;
  params.H[425] = 0;
  params.H[459] = 0;
  params.H[493] = 0;
  params.H[527] = 0;
  params.H[561] = 0;
  params.H[595] = 1.5588540879908819;
  params.H[629] = 0;
  params.H[663] = 0;
  params.H[697] = 0;
  params.H[731] = 0;
  params.H[765] = 0;
  params.H[799] = 0;
  params.H[833] = 0;
  params.H[867] = 0;
  params.H[901] = 0;
  params.H[935] = 0;
  params.H[969] = 0;
  params.H[1003] = 0;
  params.H[1037] = 0;
  params.H[1071] = 0;
  params.H[1105] = 0;
  params.H[1139] = 0;
  params.H[18] = 0;
  params.H[52] = 0;
  params.H[86] = 0;
  params.H[120] = 0;
  params.H[154] = 0;
  params.H[188] = 0;
  params.H[222] = 0;
  params.H[256] = 0;
  params.H[290] = 0;
  params.H[324] = 0;
  params.H[358] = 0;
  params.H[392] = 0;
  params.H[426] = 0;
  params.H[460] = 0;
  params.H[494] = 0;
  params.H[528] = 0;
  params.H[562] = 0;
  params.H[596] = 0;
  params.H[630] = 1.2592524469074653;
  params.H[664] = 0;
  params.H[698] = 0;
  params.H[732] = 0;
  params.H[766] = 0;
  params.H[800] = 0;
  params.H[834] = 0;
  params.H[868] = 0;
  params.H[902] = 0;
  params.H[936] = 0;
  params.H[970] = 0;
  params.H[1004] = 0;
  params.H[1038] = 0;
  params.H[1072] = 0;
  params.H[1106] = 0;
  params.H[1140] = 0;
  params.H[19] = 0;
  params.H[53] = 0;
  params.H[87] = 0;
  params.H[121] = 0;
  params.H[155] = 0;
  params.H[189] = 0;
  params.H[223] = 0;
  params.H[257] = 0;
  params.H[291] = 0;
  params.H[325] = 0;
  params.H[359] = 0;
  params.H[393] = 0;
  params.H[427] = 0;
  params.H[461] = 0;
  params.H[495] = 0;
  params.H[529] = 0;
  params.H[563] = 0;
  params.H[597] = 0;
  params.H[631] = 0;
  params.H[665] = 1.4151011970100695;
  params.H[699] = 0;
  params.H[733] = 0;
  params.H[767] = 0;
  params.H[801] = 0;
  params.H[835] = 0;
  params.H[869] = 0;
  params.H[903] = 0;
  params.H[937] = 0;
  params.H[971] = 0;
  params.H[1005] = 0;
  params.H[1039] = 0;
  params.H[1073] = 0;
  params.H[1107] = 0;
  params.H[1141] = 0;
  params.H[20] = 0;
  params.H[54] = 0;
  params.H[88] = 0;
  params.H[122] = 0;
  params.H[156] = 0;
  params.H[190] = 0;
  params.H[224] = 0;
  params.H[258] = 0;
  params.H[292] = 0;
  params.H[326] = 0;
  params.H[360] = 0;
  params.H[394] = 0;
  params.H[428] = 0;
  params.H[462] = 0;
  params.H[496] = 0;
  params.H[530] = 0;
  params.H[564] = 0;
  params.H[598] = 0;
  params.H[632] = 0;
  params.H[666] = 0;
  params.H[700] = 1.2835250817713186;
  params.H[734] = 0;
  params.H[768] = 0;
  params.H[802] = 0;
  params.H[836] = 0;
  params.H[870] = 0;
  params.H[904] = 0;
  params.H[938] = 0;
  params.H[972] = 0;
  params.H[1006] = 0;
  params.H[1040] = 0;
  params.H[1074] = 0;
  params.H[1108] = 0;
  params.H[1142] = 0;
  params.H[21] = 0;
  params.H[55] = 0;
  params.H[89] = 0;
  params.H[123] = 0;
  params.H[157] = 0;
  params.H[191] = 0;
  params.H[225] = 0;
  params.H[259] = 0;
  params.H[293] = 0;
  params.H[327] = 0;
  params.H[361] = 0;
  params.H[395] = 0;
  params.H[429] = 0;
  params.H[463] = 0;
  params.H[497] = 0;
  params.H[531] = 0;
  params.H[565] = 0;
  params.H[599] = 0;
  params.H[633] = 0;
  params.H[667] = 0;
  params.H[701] = 0;
  params.H[735] = 1.6931379183129964;
  params.H[769] = 0;
  params.H[803] = 0;
  params.H[837] = 0;
  params.H[871] = 0;
  params.H[905] = 0;
  params.H[939] = 0;
  params.H[973] = 0;
  params.H[1007] = 0;
  params.H[1041] = 0;
  params.H[1075] = 0;
  params.H[1109] = 0;
  params.H[1143] = 0;
  params.H[22] = 0;
  params.H[56] = 0;
  params.H[90] = 0;
  params.H[124] = 0;
  params.H[158] = 0;
  params.H[192] = 0;
  params.H[226] = 0;
  params.H[260] = 0;
  params.H[294] = 0;
  params.H[328] = 0;
  params.H[362] = 0;
  params.H[396] = 0;
  params.H[430] = 0;
  params.H[464] = 0;
  params.H[498] = 0;
  params.H[532] = 0;
  params.H[566] = 0;
  params.H[600] = 0;
  params.H[634] = 0;
  params.H[668] = 0;
  params.H[702] = 0;
  params.H[736] = 0;
  params.H[770] = 1.4404537176707395;
  params.H[804] = 0;
  params.H[838] = 0;
  params.H[872] = 0;
  params.H[906] = 0;
  params.H[940] = 0;
  params.H[974] = 0;
  params.H[1008] = 0;
  params.H[1042] = 0;
  params.H[1076] = 0;
  params.H[1110] = 0;
  params.H[1144] = 0;
  params.H[23] = 0;
  params.H[57] = 0;
  params.H[91] = 0;
  params.H[125] = 0;
  params.H[159] = 0;
  params.H[193] = 0;
  params.H[227] = 0;
  params.H[261] = 0;
  params.H[295] = 0;
  params.H[329] = 0;
  params.H[363] = 0;
  params.H[397] = 0;
  params.H[431] = 0;
  params.H[465] = 0;
  params.H[499] = 0;
  params.H[533] = 0;
  params.H[567] = 0;
  params.H[601] = 0;
  params.H[635] = 0;
  params.H[669] = 0;
  params.H[703] = 0;
  params.H[737] = 0;
  params.H[771] = 0;
  params.H[805] = 1.1568677384749633;
  params.H[839] = 0;
  params.H[873] = 0;
  params.H[907] = 0;
  params.H[941] = 0;
  params.H[975] = 0;
  params.H[1009] = 0;
  params.H[1043] = 0;
  params.H[1077] = 0;
  params.H[1111] = 0;
  params.H[1145] = 0;
  params.H[24] = 0;
  params.H[58] = 0;
  params.H[92] = 0;
  params.H[126] = 0;
  params.H[160] = 0;
  params.H[194] = 0;
  params.H[228] = 0;
  params.H[262] = 0;
  params.H[296] = 0;
  params.H[330] = 0;
  params.H[364] = 0;
  params.H[398] = 0;
  params.H[432] = 0;
  params.H[466] = 0;
  params.H[500] = 0;
  params.H[534] = 0;
  params.H[568] = 0;
  params.H[602] = 0;
  params.H[636] = 0;
  params.H[670] = 0;
  params.H[704] = 0;
  params.H[738] = 0;
  params.H[772] = 0;
  params.H[806] = 0;
  params.H[840] = 1.5446490180318446;
  params.H[874] = 0;
  params.H[908] = 0;
  params.H[942] = 0;
  params.H[976] = 0;
  params.H[1010] = 0;
  params.H[1044] = 0;
  params.H[1078] = 0;
  params.H[1112] = 0;
  params.H[1146] = 0;
  params.H[25] = 0;
  params.H[59] = 0;
  params.H[93] = 0;
  params.H[127] = 0;
  params.H[161] = 0;
  params.H[195] = 0;
  params.H[229] = 0;
  params.H[263] = 0;
  params.H[297] = 0;
  params.H[331] = 0;
  params.H[365] = 0;
  params.H[399] = 0;
  params.H[433] = 0;
  params.H[467] = 0;
  params.H[501] = 0;
  params.H[535] = 0;
  params.H[569] = 0;
  params.H[603] = 0;
  params.H[637] = 0;
  params.H[671] = 0;
  params.H[705] = 0;
  params.H[739] = 0;
  params.H[773] = 0;
  params.H[807] = 0;
  params.H[841] = 0;
  params.H[875] = 1.780314764511367;
  params.H[909] = 0;
  params.H[943] = 0;
  params.H[977] = 0;
  params.H[1011] = 0;
  params.H[1045] = 0;
  params.H[1079] = 0;
  params.H[1113] = 0;
  params.H[1147] = 0;
  params.H[26] = 0;
  params.H[60] = 0;
  params.H[94] = 0;
  params.H[128] = 0;
  params.H[162] = 0;
  params.H[196] = 0;
  params.H[230] = 0;
  params.H[264] = 0;
  params.H[298] = 0;
  params.H[332] = 0;
  params.H[366] = 0;
  params.H[400] = 0;
  params.H[434] = 0;
  params.H[468] = 0;
  params.H[502] = 0;
  params.H[536] = 0;
  params.H[570] = 0;
  params.H[604] = 0;
  params.H[638] = 0;
  params.H[672] = 0;
  params.H[706] = 0;
  params.H[740] = 0;
  params.H[774] = 0;
  params.H[808] = 0;
  params.H[842] = 0;
  params.H[876] = 0;
  params.H[910] = 1.3063635323761797;
  params.H[944] = 0;
  params.H[978] = 0;
  params.H[1012] = 0;
  params.H[1046] = 0;
  params.H[1080] = 0;
  params.H[1114] = 0;
  params.H[1148] = 0;
  params.H[27] = 0;
  params.H[61] = 0;
  params.H[95] = 0;
  params.H[129] = 0;
  params.H[163] = 0;
  params.H[197] = 0;
  params.H[231] = 0;
  params.H[265] = 0;
  params.H[299] = 0;
  params.H[333] = 0;
  params.H[367] = 0;
  params.H[401] = 0;
  params.H[435] = 0;
  params.H[469] = 0;
  params.H[503] = 0;
  params.H[537] = 0;
  params.H[571] = 0;
  params.H[605] = 0;
  params.H[639] = 0;
  params.H[673] = 0;
  params.H[707] = 0;
  params.H[741] = 0;
  params.H[775] = 0;
  params.H[809] = 0;
  params.H[843] = 0;
  params.H[877] = 0;
  params.H[911] = 0;
  params.H[945] = 1.2219578839321814;
  params.H[979] = 0;
  params.H[1013] = 0;
  params.H[1047] = 0;
  params.H[1081] = 0;
  params.H[1115] = 0;
  params.H[1149] = 0;
  params.H[28] = 0;
  params.H[62] = 0;
  params.H[96] = 0;
  params.H[130] = 0;
  params.H[164] = 0;
  params.H[198] = 0;
  params.H[232] = 0;
  params.H[266] = 0;
  params.H[300] = 0;
  params.H[334] = 0;
  params.H[368] = 0;
  params.H[402] = 0;
  params.H[436] = 0;
  params.H[470] = 0;
  params.H[504] = 0;
  params.H[538] = 0;
  params.H[572] = 0;
  params.H[606] = 0;
  params.H[640] = 0;
  params.H[674] = 0;
  params.H[708] = 0;
  params.H[742] = 0;
  params.H[776] = 0;
  params.H[810] = 0;
  params.H[844] = 0;
  params.H[878] = 0;
  params.H[912] = 0;
  params.H[946] = 0;
  params.H[980] = 1.3879712575556487;
  params.H[1014] = 0;
  params.H[1048] = 0;
  params.H[1082] = 0;
  params.H[1116] = 0;
  params.H[1150] = 0;
  params.H[29] = 0;
  params.H[63] = 0;
  params.H[97] = 0;
  params.H[131] = 0;
  params.H[165] = 0;
  params.H[199] = 0;
  params.H[233] = 0;
  params.H[267] = 0;
  params.H[301] = 0;
  params.H[335] = 0;
  params.H[369] = 0;
  params.H[403] = 0;
  params.H[437] = 0;
  params.H[471] = 0;
  params.H[505] = 0;
  params.H[539] = 0;
  params.H[573] = 0;
  params.H[607] = 0;
  params.H[641] = 0;
  params.H[675] = 0;
  params.H[709] = 0;
  params.H[743] = 0;
  params.H[777] = 0;
  params.H[811] = 0;
  params.H[845] = 0;
  params.H[879] = 0;
  params.H[913] = 0;
  params.H[947] = 0;
  params.H[981] = 0;
  params.H[1015] = 1.9363836498604305;
  params.H[1049] = 0;
  params.H[1083] = 0;
  params.H[1117] = 0;
  params.H[1151] = 0;
  params.H[30] = 0;
  params.H[64] = 0;
  params.H[98] = 0;
  params.H[132] = 0;
  params.H[166] = 0;
  params.H[200] = 0;
  params.H[234] = 0;
  params.H[268] = 0;
  params.H[302] = 0;
  params.H[336] = 0;
  params.H[370] = 0;
  params.H[404] = 0;
  params.H[438] = 0;
  params.H[472] = 0;
  params.H[506] = 0;
  params.H[540] = 0;
  params.H[574] = 0;
  params.H[608] = 0;
  params.H[642] = 0;
  params.H[676] = 0;
  params.H[710] = 0;
  params.H[744] = 0;
  params.H[778] = 0;
  params.H[812] = 0;
  params.H[846] = 0;
  params.H[880] = 0;
  params.H[914] = 0;
  params.H[948] = 0;
  params.H[982] = 0;
  params.H[1016] = 0;
  params.H[1050] = 1.9759954224729337;
  params.H[1084] = 0;
  params.H[1118] = 0;
  params.H[1152] = 0;
  params.H[31] = 0;
  params.H[65] = 0;
  params.H[99] = 0;
  params.H[133] = 0;
  params.H[167] = 0;
  params.H[201] = 0;
  params.H[235] = 0;
  params.H[269] = 0;
  params.H[303] = 0;
  params.H[337] = 0;
  params.H[371] = 0;
  params.H[405] = 0;
  params.H[439] = 0;
  params.H[473] = 0;
  params.H[507] = 0;
  params.H[541] = 0;
  params.H[575] = 0;
  params.H[609] = 0;
  params.H[643] = 0;
  params.H[677] = 0;
  params.H[711] = 0;
  params.H[745] = 0;
  params.H[779] = 0;
  params.H[813] = 0;
  params.H[847] = 0;
  params.H[881] = 0;
  params.H[915] = 0;
  params.H[949] = 0;
  params.H[983] = 0;
  params.H[1017] = 0;
  params.H[1051] = 0;
  params.H[1085] = 1.6723836759128137;
  params.H[1119] = 0;
  params.H[1153] = 0;
  params.H[32] = 0;
  params.H[66] = 0;
  params.H[100] = 0;
  params.H[134] = 0;
  params.H[168] = 0;
  params.H[202] = 0;
  params.H[236] = 0;
  params.H[270] = 0;
  params.H[304] = 0;
  params.H[338] = 0;
  params.H[372] = 0;
  params.H[406] = 0;
  params.H[440] = 0;
  params.H[474] = 0;
  params.H[508] = 0;
  params.H[542] = 0;
  params.H[576] = 0;
  params.H[610] = 0;
  params.H[644] = 0;
  params.H[678] = 0;
  params.H[712] = 0;
  params.H[746] = 0;
  params.H[780] = 0;
  params.H[814] = 0;
  params.H[848] = 0;
  params.H[882] = 0;
  params.H[916] = 0;
  params.H[950] = 0;
  params.H[984] = 0;
  params.H[1018] = 0;
  params.H[1052] = 0;
  params.H[1086] = 0;
  params.H[1120] = 1.9028341085383982;
  params.H[1154] = 0;
  params.H[33] = 0;
  params.H[67] = 0;
  params.H[101] = 0;
  params.H[135] = 0;
  params.H[169] = 0;
  params.H[203] = 0;
  params.H[237] = 0;
  params.H[271] = 0;
  params.H[305] = 0;
  params.H[339] = 0;
  params.H[373] = 0;
  params.H[407] = 0;
  params.H[441] = 0;
  params.H[475] = 0;
  params.H[509] = 0;
  params.H[543] = 0;
  params.H[577] = 0;
  params.H[611] = 0;
  params.H[645] = 0;
  params.H[679] = 0;
  params.H[713] = 0;
  params.H[747] = 0;
  params.H[781] = 0;
  params.H[815] = 0;
  params.H[849] = 0;
  params.H[883] = 0;
  params.H[917] = 0;
  params.H[951] = 0;
  params.H[985] = 0;
  params.H[1019] = 0;
  params.H[1053] = 0;
  params.H[1087] = 0;
  params.H[1121] = 0;
  params.H[1155] = 1.8457508712931792;
  params.f[0] = -0.48802383468444344;
  params.f[1] = -1.631131964513103;
  params.f[2] = 0.6136436100941447;
  params.f[3] = 0.2313630495538037;
  params.f[4] = -0.5537409477496875;
  params.f[5] = -1.0997819806406723;
  params.f[6] = -0.3739203344950055;
  params.f[7] = -0.12423900520332376;
  params.f[8] = -0.923057686995755;
  params.f[9] = -0.8328289030982696;
  params.f[10] = -0.16925440270808823;
  params.f[11] = 1.442135651787706;
  params.f[12] = 0.34501161787128565;
  params.f[13] = -0.8660485502711608;
  params.f[14] = -0.8880899735055947;
  params.f[15] = -0.1815116979122129;
  params.f[16] = -1.17835862158005;
  params.f[17] = -1.1944851558277074;
  params.f[18] = 0.05614023926976763;
  params.f[19] = -1.6510825248767813;
  params.f[20] = -0.06565787059365391;
  params.f[21] = -0.5512951504486665;
  params.f[22] = 0.8307464872626844;
  params.f[23] = 0.9869848924080182;
  params.f[24] = 0.7643716874230573;
  params.f[25] = 0.7567216550196565;
  params.f[26] = -0.5055995034042868;
  params.f[27] = 0.6725392189410702;
  params.f[28] = -0.6406053441727284;
  params.f[29] = 0.29117547947550015;
  params.f[30] = -0.6967713677405021;
  params.f[31] = -0.21941980294587182;
  params.f[32] = -1.753884276680243;
  params.f[33] = -1.0292983112626475;
  params.ub[0] = 1.8864104246942706;
  params.ub[1] = -1.077663182579704;
  params.ub[2] = 0.7659100437893209;
  params.ub[3] = 0.6019074328549583;
  params.ub[4] = 0.8957565577499285;
  params.ub[5] = -0.09964555746227477;
  params.ub[6] = 0.38665509840745127;
  params.ub[7] = -1.7321223042686946;
  params.ub[8] = -1.7097514487110663;
  params.ub[9] = -1.2040958948116867;
  params.ub[10] = -1.3925560119658358;
  params.ub[11] = -1.5995826216742213;
  params.ub[12] = -1.4828245415645833;
  params.ub[13] = 0.21311092723061398;
  params.ub[14] = -1.248740700304487;
  params.ub[15] = 1.808404972124833;
  params.ub[16] = 0.7264471152297065;
  params.ub[17] = 0.16407869343908477;
  params.ub[18] = 0.8287224032315907;
  params.ub[19] = -0.9444533161899464;
  params.ub[20] = 1.7069027370149112;
  params.ub[21] = 1.3567722311998827;
  params.ub[22] = 0.9052779937121489;
  params.ub[23] = -0.07904017565835986;
  params.ub[24] = 1.3684127435065871;
  params.ub[25] = 0.979009293697437;
  params.ub[26] = 0.6413036255984501;
  params.ub[27] = 1.6559010680237511;
  params.ub[28] = 0.5346622551502991;
  params.ub[29] = -0.5362376605895625;
  params.ub[30] = 0.2113782926017822;
  params.ub[31] = -1.2144776931994525;
  params.ub[32] = -1.2317108144255875;
  params.ub[33] = 0.9026784957312834;
  params.lb[0] = 1.1397468137245244;
  params.lb[1] = 1.8883934547350631;
  params.lb[2] = 1.4038856681660068;
  params.lb[3] = 0.17437730638329096;
  params.lb[4] = -1.6408365219077408;
  params.lb[5] = -0.04450702153554875;
  params.lb[6] = 1.7117453902485025;
  params.lb[7] = 1.1504727980139053;
  params.lb[8] = -0.05962309578364744;
  params.lb[9] = -0.1788825540764547;
  params.lb[10] = -1.1280569263625857;
  params.lb[11] = -1.2911464767927057;
  params.lb[12] = -1.7055053231225696;
  params.lb[13] = 1.56957275034837;
  params.lb[14] = 0.5607064675962357;
  params.lb[15] = -1.4266707301147146;
  params.lb[16] = -0.3434923211351708;
  params.lb[17] = -1.8035643024085055;
  params.lb[18] = -1.1625066019105454;
  params.lb[19] = 0.9228324965161532;
  params.lb[20] = 0.6044910817663975;
  params.lb[21] = -0.0840868104920891;
  params.lb[22] = -0.900877978017443;
  params.lb[23] = 0.608892500264739;
  params.lb[24] = 1.8257980452695217;
  params.lb[25] = -0.25791777529922877;
  params.lb[26] = -1.7194699796493191;
  params.lb[27] = -1.7690740487081298;
  params.lb[28] = -1.6685159248097703;
  params.lb[29] = 1.8388287490128845;
  params.lb[30] = 0.16304334474597537;
  params.lb[31] = 1.3498497306788897;
  params.lb[32] = -1.3198658230514613;
  params.lb[33] = -0.9586197090843394;
}
