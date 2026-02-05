/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand1_u10purecfma.c --function \
 *     Sleef_finz_atand1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7eb59fa760045p-61, 0.0, 0x1.43aa2d2c6b656p-267, 0x1.07fd891900c77p-569, 0.0,
     0.0, 0x1.731e766cbb7ep-23, 0.0, 0x1.7dd8c2361bf91p-529, 0.0, 0.0, 0.0,
     0x1.120293bce6e3dp-160, 0x1.0e1bb43a2bbf2p-451, 0x1.d29b16a4fc54fp-804, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c66780c38bbffp-20, 0x1.0373a0022c28bp-88, 0.0, 0.0,
     0x1.b65ac42eec452p-333, 0x1.8ea8f85fa2b8ep-668, 0.0, 0.0, 0.0, 0.0,
     0x1.21b845ae8dc94p-817, 0.0, 0x1.a4360e11f053dp-26, 0x1.6492793ea94ecp-889, 0.0,
     0x1.34562a25644f3p-592, 0x1.fcace4dca17b9p-459, 0x1.57e82d146c162p-962, 0.0,
     0x1.f64b0744901bcp-701, 0x1.12c27f165c127p-812, 0x1.78f058314782ap-18,
     0x1.258a747da8c07p-81, 0.0, 0.0, 0x1.8405b82563bb5p-562, 0x1.0b721136c57a3p-632,
     0.0, 0.0, 0x1.3baba08bbdaf9p-1003, 0x1.a9d07c5bffd25p-120, 0.0, 0.0, 0.0, 0.0,
     0x1.8886f00526a8p-964, 0.0, 0x1.5f1287589f0f1p-195, 0x1.515426c01aac7p-682,
     0x1.7dede1db02e58p-800, 0.0, 0.0, 0.0, 0x1.0a0f48ef59a76p-582, 0.0, 0.0, 0.0,
     0x1.c46a61d4277ccp-390, 0.0, 0.0, 0x1.9d23a24884b3p-24, 0.0, 0.0, 0.0,
     0x1.9ca25dfddef4fp-663, 0.0, 0.0, 0x1.1283e6b645b7ep-679, 0x1.0cd15c536a1b8p-743,
     0x1.30d0decd14ce3p-181, 0x1.cf9067594686bp-442, 0x1.46643013523cfp-84, 0.0, 0.0,
     0.0, 0.0, 0x1.322ee484abcb5p-778, 0x1.9776fe68f5a68p-735, 0.0, 0.0, 0.0, 0.0,
     0x1.2d05177f850bp-862, 0.0, 0x1.efa1815dabdafp-888, 0.0, 0.0,
     0x1.57ed97b657ae6p-717, 0x1.118643e07af8cp-637, 0.0, 0x1.7274865517ddep-992, 0.0,
     0x1.ddc13e13cd2a6p-795, 0.0, 0.0, 0x1.8a51270e69b13p-423, 0x1.82e313305165dp-486,
     0.0, 0x1.bab740c83e45ep-946, 0x1.72125fa3af156p-680, 0.0, 0x1.a2720978556f9p-903,
     0.0, 0.0, 0x1.1b4f546205402p-920, 0.0, 0x1.1044628f35bfbp-409, 0.0, 0.0,
     0x1.498f9e637c224p-333, 0x1.45b441bd73de4p-740, 0.0, 0x1.420a0ebaa2b29p-810,
     0x1.09b270a985afcp-660, 0x1.05c8677c02a4fp-718, 0x1.e2b2533a65caep-857, 0.0,
     0x1.65133c54ed81ap-805, 0x1.2f11982642b62p-336, 0x1.1de90a345830dp-541, 0.0, 0.0,
     0x1.2d57abc27c369p-770, 0.0, 0x1.812c9ab9d9297p-321, 0.0, 0.0,
     0x1.fda07a6397718p-979, 0x1.040d05c5057adp-61, 0x1.691e23a6f7045p-985, 0.0, 0.0,
     0x1.2db1353a4c79dp-180, 0.0, 0x1.f04276aaa3ab6p-558, 0x1.5883aec32cc1ap-622, 0.0,
     0.0, 0.0, 0x1.affbf0586ba52p-41, 0x1.06dc5952b967ep-370, 0x1.2109b63aa287ap-939,
     0.0, 0.0, 0.0, 0.0, 0x1.077a462ba9cc2p-718, 0x1.0465e865d0c8p-918,
     0x1.fcbf363505a8ep-464, 0x1.77b8cc3eef9b1p-246, 0x1.e935f03984ecap-983, 0.0,
     0x1.aafadc7f16b25p-34, 0.0, 0x1.35658a2e3317ep-475, 0.0, 0.0, 0.0,
     0x1.8d6371bcc0cb8p-368, 0.0, 0.0, 0x1.ed5b212b0c251p-257, 0.0, 0.0, 0.0,
     0x1.ee8124463b97fp-526, 0x1.7ca9b68dfed1fp-439, 0x1.b4eae091bda2ep-658,
     0x1.967036af7942ep-862, 0.0, 0x1.babf1db66c8fap-782, 0x1.43573f74753e1p-883, 0.0,
     0.0, 0x1.52bdca96c9f62p-101, 0.0, 0.0, 0x1.08bdcf216f298p-777, 0.0,
     0x1.30950e6526482p-447, 0.0, 0x1.81607f2c8f585p-743, 0x1.97c0c7305efb5p-460, 0.0,
     0x1.b23646e9e2c91p-747, 0.0, 0x1.c77095c00d4bp-771, 0.0, 0.0, 0.0,
     0x1.0a1e2eb98aa14p-741, 0x1.22b17201f7e1p-581, 0.0, 0.0, 0x1.ccbba600edb5p-265,
     0.0, 0.0, 0.0, 0x1.aa4a36a82631ap-623, 0x1.4cdb863cc56afp-1022,
     0x1.750d133f11d2fp-530, 0.0, 0.0, 0.0, 0.0, 0x1.7e2ddae6be1d5p-381, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.171c2c7553445p-928, 0.0, 0.0, 0.0, 0x1.bf4c97166037fp-316,
     0x1.a55049aefecc8p-130, 0x1.390fa70533b46p-115, 0x1.65c3c68ea053ep-334, 0.0,
     0x1.51a064c0fec34p-732, 0x1.554553b92c838p-887, 0.0, 0.0,
     0x1.6bd356a5507e5p-1022, 0x1.556d1afb970dfp-1021, 0.0, 0x1.11144c48a32p-931, 0.0,
     0.0, 0x1.a9d2b977e202bp-743, 0.0, 0x1.55ee75292057ep-986, 0x1.1c43ea48288c8p-330,
     0.0, 0x1.083a837afccb3p-494, 0.0, 0x1.c62bafdac90d2p-384, 0x1.caaad8ddab49ep-939,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.649440439e235p-682, 0.0, 0x1.14da88ceed02fp-459,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b92177b2a7f5p-327, 0x1.ea3fb71fa9e69p-11,
     0x1.7aa6da496695ap-465, 0x1.9e90a3fe7ef77p-442, 0.0, 0x1.5e664dc7884fdp-1017,
     0x1.7790f5ca9b2d3p-814, 0x1.059129b4c5882p-646, 0x1.2e35cc40ff9ap-280,
     0x1.4409f2cfe617ap-856, 0x1.9579c4ea6a45cp-80, 0.0, 0x1.6105bbaeaeea4p-755, 0.0,
     0.0, 0x1.938ae6d006ec5p-972, 0.0, 0.0, 0x1.2cbeb5fa93716p-873,
     0x1.0760a2ad604e6p-207, 0x1.e127c1c5cd51cp-874, 0x1.3abf360e16ea4p-449,
     0x1.2993ad7abd86cp-305, 0x1.4678246ec6316p-777, 0x1.32da6895c9f0dp-716, 0.0, 0.0,
     0x1.a713f4835349ep-1007, 0.0, 0x1.f7d4811355053p-11, 0x1.36b2e7a55a341p-333,
     0x1.57e64ea3f2482p-617, 0.0, 0x1.1594ceb2026edp-574, 0x1.0abc3dc760298p-697, 0.0,
     0x1.50a39eb927652p-386, 0.0, 0.0, 0x1.232ab6058e9bfp-189, 0.0, 0.0,
     0x1.ff562a63aa9f6p-7, 0.0, 0.0, 0x1.ab940415b8dbdp-464, 0x1.00e606e660825p-675,
     0.0, 0x1.5809e1cd7e02ep-530, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79f27e59e4c2bp-1020, 0x1.7090dd3e81f4p-370, 0x1.aa9040bdf49bbp-81, 0.0, 0.0,
     0.0, 0.0, 0x1.1005307f07efep-410, 0.0, 0.0, 0x1.8334750f983b5p-496,
     0x1.3a179d8987c25p-356, 0.0, 0.0, 0x1.c33c42ba8aa96p-943, 0.0, 0.0,
     0x1.7259321af2c01p-813, 0.0, 0x1.9927d7b5bce6dp-10, 0x1.3a6056dca9ac1p-563, 0.0,
     0x1.86f9ebddcdb29p-521, 0.0, 0x1.f21c74b4eecdcp-196, 0x1.bdac7daeec6e8p-705,
     0x1.5c2d884d05cb1p-486, 0.0, 0x1.d41e4d14ca25bp-910, 0.0, 0x1.01fe0538967ddp-108,
     0.0, 0x1.b34d2b9a8e078p-561, 0.0, 0.0, 0x1.9cdea7ca4affbp-664,
     0x1.f85994ce8df49p-845, 0x1.9043ad5adb4bep-347, 0x1.ee22b8dff42a1p-826,
     0x1.2052e09d5cb6bp-437, 0.0, 0x1.e9c67c5d42d7ep-181, 0.0, 0.0,
     0x1.22c146911851cp-595, 0x1.e42fe1e17203ap-143, 0x1.22725289be757p-830, 0.0,
     0x1.12989913ec4edp-392, 0x1.a4435fe5a8d3bp-861, 0x1.4d59e71b213c3p-95,
     0x1.5cd273284a857p-460, 0.0, 0.0, 0x1.f38b23af8c12dp-268, 0x1.c086c5b764796p-553,
     0.0, 0x1.0cbe37704abadp-42, 0x1.58e969742b33dp-391, 0x1.317e7da031d66p-461,
     0x1.3f09ffa0c0201p-93, 0.0, 0.0, 0.0, 0x1.94435a6670834p-57, 0.0,
     0x1.5135fcddbbadfp-182, 0x1.4d7c18fb131a3p-4, 0.0, 0.0, 0.0, 0.0,
     0x1.252adc786f647p-699, 0x1.c4bcb9eb26b71p-1014, 0.0, 0.0, 0.0, 0.0,
     0x1.de8c349afd103p-523, 0.0, 0x1.79989fcca836fp-954, 0x1.ace430dcb921p-714,
     0x1.18b4c6951ad1dp-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.996d3c3eb49f3p-479,
     0x1.1d8618c53f764p-203, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4eb0843abd9ep-28,
     0x1.0fc1766d32875p-119, 0.0, 0x1.d49036535af0fp-734, 0x1.a1a3e80208f34p-79,
     0x1.89b1825c05659p-16, 0.0, 0x1.8f5bb67eeab74p-149, 0.0, 0.0, 0.0,
     0x1.7e4836151b3aep-855, 0x1.f4a60536ada79p-406, 0.0, 0x1.25a2abaaee4acp-852, 0.0,
     0.0, 0.0, 0x1.abcd3e1acaa94p-134, 0x1.8a7650bcb627ep-936, 0.0,
     0x1.4d19851cc3615p-891, 0.0, 0.0, 0x1.bda7d6807861dp-901, 0.0, 0.0,
     0x1.d557072a550e7p-956, 0x1.2d62f5986cad3p-415, 0x1.8c266a835369ep-880, 0.0, 0.0,
     0x1.fd234a6de4031p-60, 0x1.71507145e52cdp-599, 0x1.8befc715f205fp-41, 0.0,
     0x1.aa09fce980ea5p-285, 0.0, 0x1.be6eddd5717bap-835, 0x1.797ec2ba29972p-541,
     0x1.4f8a2a33ae189p-840, 0x1.0c4f5c38bebd1p-400, 0.0, 0x1.56343e0c9475p-753,
     0x1.2dfdb5c02a313p-825, 0.0, 0.0, 0.0, 0x1.03f637c7416b7p-460, 0.0,
     0x1.659594d1004a2p-56, 0x1.5c9843c5ca692p-746, 0x1.f2c440f312e48p-1016, 0.0, 0.0,
     0x1.a920503541e92p-174, 0x1.f375f33df840ap-989, 0.0, 0x1.846d157d61768p-977, 0.0,
     0x1.0241f2ba1b02bp-940, 0.0, 0x1.8e05887e3b294p-288, 0.0, 0.0, 0.0,
     0x1.6ad0dcb482c9p-426, 0.0, 0x1.1b876869c1b6ep-2, 0.0, 0x1.de919257b638dp-819,
     0x1.fb0797811b27cp-439, 0.0, 0x1.1123830fa0cd8p-134, 0x1.b76c35e5d9bbcp-973,
     0x1.f5e0e7f4f7c1cp-111, 0x1.de7c159e5c40bp-126, 0.0, 0x1.ee1ee0e53b343p-401,
     0x1.be56799ce7b5cp-894, 0.0, 0x1.1b2de9f2830bep-489, 0x1.40ee76e96a172p-901,
     0x1.579d02d831561p-208, 0.0, 0.0, 0x1.dc934b531c22ep-261, 0.0, 0.0,
     0x1.f3420bd0c284p-737, 0.0, 0.0, 0x1.90c97518328b2p-786, 0x1.8ac6fe6c83366p-3,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a94014e134dbp-896, 0x1.d39e46a65f643p-984, 0.0,
     0.0, 0x1.3563464bcdc9ep-288, 0x1.ff93b834578aep-268, 0x1.ca5b22d9b57ep-33,
     0x1.8130b7fb4c6a1p-861, 0x1.6c204bce02827p-876, 0x1.404e58188ae8dp-123,
     0x1.60478b612864bp-509, 0x1.b290eb6c2f6e1p-620, 0x1.64c5952aff814p-341,
     0x1.71e45fbb7f5c2p-917, 0x1.747e430d63db8p-16, 0x1.2e4a99f504a14p-581, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2d218abe3f848p-304, 0x1.dfae465b60d9fp-75, 0.0, 0.0,
     0x1.0b15556d2a43p-589, 0.0, 0.0, 0x1.5261df228a482p-884, 0x1.8f6bd9642f7dep-154,
     0x1.6ab0066c4bb25p-238, 0x1.20737d3f35209p-179, 0x1.a252d88c9ad79p-3,
     0x1.7d82962473c9dp-448, 0x1.523286c7ea0c8p-190, 0x1.09881b8bc8066p-281,
     0x1.67f745650ffe9p-611, 0x1.69a6b7e4b7858p-752, 0x1.32ebcc3877b4dp-670, 0.0, 0.0,
     0x1.17601edf11ecap-165, 0x1.d8c8ea5c9bd71p-352, 0x1.f0da42880e09ep-388, 0.0,
     0x1.c201c37d22a8p-512, 0x1.20cb14747a1f6p-24, 0x1.36d149b9fd798p-21, 0.0, 0.0,
     0x1.70480f7ae31abp-932, 0x1.4c108d14d87d4p-28, 0x1.38a491369ef4dp-327,
     0x1.1df70047b1421p-568, 0.0, 0x1.c278048de9383p-923, 0x1.616b0f85f964ap-707, 0.0,
     0x1.c2937c49538e6p-1012, 0x1.7f144ccee5568p-65, 0x1.68655ecd4ea56p-561,
     0x1.7243a155d1c74p-566, 0.0, 0.0, 0.0, 0x1p0, 0x1.a9f560de2246p-490, 0.0,
     0x1.2963d090d4e9ap-60, 0.0, 0x1.75143102ce79ep-448, 0.0, 0.0, 0.0,
     0x1.6fc2724497af8p-942, 0.0, 0.0, 0x1.5a08a0373d882p-874, 0.0, 0.0, 0.0,
     0x1.54fb5df71cf09p-993, 0.0, 0.0, 0.0, 0.0, 0x1.a23aff2443302p-833, 0.0,
     0x1.b5547e36b0f11p-116, 0x1.fb825d04acc01p-388, 0x1.69606f97388efp-638,
     0x1.58724ef360127p-97, 0x1.e1926a8583475p-511, 0x1.6e6b4220416c9p-941,
     0x1.c914207ceb4d9p-610, 0.0, 0.0, 0x1.55c904134e9cp-763, 0.0, 0.0, 0.0,
     0x1.2396e6121cbbbp-601, 0.0, 0x1.a5162b8a28cdep-126, 0x1.0e99dbaa950a9p-9, 0.0,
     0x1.fd7d919045f8ep-748, 0.0, 0.0, 0x1.79c9a246dd03ap-982, 0x1.5544c84692521p-108,
     0.0, 0.0, 0x1.2390e63b4ccbap-860, 0x1.0074ed065e29ep-144, 0.0, 0.0, 0.0,
     0x1.f75ccdb38aed9p-616, 0x1.dd27daa9ad7cp-899, 0.0, 0x1.fbbe9985ebd46p-371,
     0x1.177eceba62e87p-603, 0.0, 0.0, 0x1.5b6115eb62767p-840, 0.0,
     0x1.05e1e38ec2f62p-302, 0x1.67a8c322c254cp-870, 0x1.243b08ffe57f9p-109,
     0x1.b43cdc0a9a15ep-223, 0x1.ee09dc69a90a4p-923, 0x1.e5105420e593dp-88,
     0x1.505db475a4c4cp-241, 0x1.678c09521df6fp-251, 0x1.2f2c2aa3b1ad4p-194,
     0x1.f88ad036841e5p-299, 0x1.38a239b7b0d0ep-361, 0.0, 0x1.ff6bb1f10aac2p-309, 0.0,
     0.0, 0.0, 0x1.48a3b3fbd9925p-929, 0x1.1dc3c2bc8668fp-776, 0x1.ef4820c1bc6c5p-99,
     0.0, 0x1.48903a86c189dp-230, 0x1.8a4cb60716e75p-883, 0x1.0c409426375f1p-517,
     0x1.f3760cd4ad1d3p-795, 0.0, 0.0, 0.0, 0x1.d6146e7a25ce7p-923,
     0x1.812bc574af4c5p-457, 0.0, 0x1.b7ff384148bc9p-445, 0.0, 0.0,
     0x1.9cc2fdc6e7096p-320, 0.0, 0x1.76490509342d2p-799, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0859f27d87563p-800, 0.0, 0.0, 0.0, 0.0, 0x1.d4f09e9a0e596p-733, 0.0,
     0.0, 0x1.5a6b1288e8512p-915, 0x1.d2612d9220c08p-268, 0x1.e53f9b50e9adep-838,
     0x1.de9c0246fe478p-494, 0x1.4b5747c4f7794p-287, 0x1.76be5c5101953p-429, 0.0, 0.0,
     0x1.0905b88cfac3fp-343, 0.0, 0x1.3995f004279d1p-560, 0.0, 0x1.f12abfde346a5p-607,
     0x1.d4757f724913bp-635, 0x1.1ede635404c86p-680, 0x1.4f29b0f3263fcp-649,
     0x1.cce7d485cfb33p-916, 0x1.d45ba702bf183p-295, 0.0, 0x1.187e6a55335aap-822,
     0x1.782fc23164ab4p-866, 0x1.1980c36d0618bp-261, 0x1.3524f8e2f1f05p-187,
     0x1.1d985f00a85c3p-629, 0x1.57bcbad814afbp-819, 0.0, 0x1.ee355fd65124ep-42,
     0x1.59f8e3cbd52fcp-147, 0.0, 0x1.d37f7ebd3b3a5p-773, 0.0, 0x1.09e9d64166ed5p-546,
     0.0, 0x1.74b54882824e6p-887, 0.0, 0.0, 0x1.0f3983e23d66ap-842, 0.0, 0.0,
     0x1.de85a0106adbbp-992, 0x1.a083e86d60f66p-799, 0.0, 0x1.4f1cbee77d33p-529,
     0x1.a8cda0ccbcdbap-962, 0.0, 0.0, 0x1.bf0326b795346p-914, 0x1.0770a5733dedcp-438,
     0.0, 0.0, 0x1.09819c467954bp-336, 0.0, 0x1.be64f4ede60fdp-693, 0.0, 0.0, 0.0,
     0.0, 0x1.38b3d93a61613p-609, 0x1.63c0c8c3cbfc6p-404, 0x1.0a9570f5c1d5fp-647, 0.0,
     0x1.45386e9cdc64cp-45, 0x1.6e4c684dfa667p-103, 0.0, 0.0, 0.0,
     0x1.b44889f9b01c6p-433, 0.0, 0.0, 0x1.07eb896836f4bp-732, 0.0,
     0x1.39dc5af515b04p-361, 0x1.9eff9d71287aap-1008, 0.0, 0x1.c22f74bcc26e4p-305,
     0.0, 0x1.5b4eb12b7e43fp-398, 0x1.6f0ca2ca8ddfp-454, 0.0, 0.0, 0.0,
     0x1.11b023aa8342cp-811, 0x1.5601a39246cafp-778, 0.0, 0.0, 0.0, 0.0,
     0x1.4563dc5773368p-145, 0x1.6677bdb21d365p-554, 0.0, 0x1.79d8464e1bb48p-217,
     0x1.00a4a7c0628d7p-862, 0x1.3ba4ff805f2dep-356, 0x1.8112f703a6a0fp-737,
     0x1.f490b06dd8d4cp-47, 0x1.acca7dc1ed41fp-666, 0x1.3372daac47ef4p-981,
     0x1.9bdff05e1e957p-775, 0x1.65f4d7a98405ap-448, 0.0, 0.0, 0x1.f3b9fb4cda708p-751,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00ffd9aae4df5p-619, 0x1.49d07c60bba73p-81, 0.0,
     0x1.2d9d76c228cf2p-170, 0.0, 0.0, 0x1.b15932fbfbfa1p-37, 0.0,
     0x1.a755fd630f07fp-527, 0.0, 0.0, 0x1.36f8f175778d7p-492, 0x1.e1347675d627cp-505,
     0.0, 0.0, 0.0, 0x1.18988bcee1559p-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.694f3c2c627e3p-982, 0.0, 0.0, 0x1.e22e61456a63p-926, 0.0,
     0x1.cf133484e0178p-933, 0.0, 0.0, 0.0, 0x1.ac01b0c978244p-468, 0.0,
     0x1.8a6b71fda0ab1p-980, 0.0, 0.0, 0x1.a1a6dfef71fdfp-24, 0x1.d327c17c04be1p-649,
     0.0, 0.0, 0.0, 0.0, 0x1.30a1863c607dep-216, 0.0, 0.0, 0x1.46fe68836f13cp-887,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56dda36e0e20ap-985, 0.0, 0.0,
     0x1.baaaa2e5b01f6p-563, 0.0, 0.0, 0x1.3dd5c8f5c75ccp-711, 0.0,
     0x1.8a6354afbd9bep-982, 0.0, 0x1.0d1590467dc84p-378, 0.0, 0x1.ddb58997703a6p-677,
     0x1.fd8c4863dd583p-732, 0x1.b47882d66c3d7p-614, 0.0, 0x1.a26e05a337208p-755, 0.0,
     0.0, 0.0, 0x1.a039f082df721p-315, 0x1.cd2d61cdd01f1p-696, 0.0, 0.0, 0.0, 0.0,
     0x1.70298aa8a0521p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.201916373e4fbp-744, 0.0,
     0.0, 0x1.530b81d14c01cp-268, 0.0, 0.0, 0x1.edddef1366e33p-886, 0.0, 0.0,
     0x1.7c61562dcd268p-405, 0x1.d6d443fd7f8b9p-368, 0x1.4c3710bcf6326p-993, 0.0,
     0x1.b54bcd15e7badp-645, 0.0, 0.0, 0x1.3cf04a21791d4p-150, 0x1.bc85a8c3817a6p-563,
     0.0, 0x1.aca639092b0adp-70, 0.0, 0x1.84fcf063a839ep-868, 0.0,
     0x1.ee2b3ba3cf177p-529, 0.0, 0.0, 0x1.0f6473ddd429ap-271, 0.0,
     0x1.8ace672cf924ap-747, 0x1.a714356eef57p-712, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2fc1086c4a0b5p-619, 0x1.31227c7f97bc9p-502, 0x1.2a694018ef8e1p-84,
     0x1.f82f6255050cfp-115, 0x1.5ef0a2c765b58p-814, 0x1.29589a2365acep-111,
     0x1.eaafe8aa83d95p-181, 0.0, 0.0, 0.0, 0x1.86ff6271d53c4p-155, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1a85975116509p-294, 0x1.423a38b6b3f8fp-800, 0.0, 0.0,
     0x1.e07337c06ef1cp-809, 0.0, 0.0, 0.0, 0.0, 0x1.3ed9dbbaa479dp-902,
     0x1.e74a1ea65741dp-580, 0x1.ec551b7a54c72p-786, 0x1.54071f5ba8517p-90,
     0x1.352b7fc533c14p-578, 0.0, 0x1.64d77dd0d2221p-289, 0x1.bbeba0de55b86p-415,
     0x1.874563ff095dfp-1007, 0x1.62f1a6ae5f5e8p-692, 0.0, 0x1.882433437a0bp-235, 0.0,
     0.0, 0.0, 0.0, 0x1.fd8e5ca240c65p-55, 0x1.89905b63d02f7p-727,
     0x1.e0530a5dd17e7p-721, 0.0, 0.0, 0.0, 0x1.549c31e4afd56p-424,
     0x1.b8041f03d91bbp-413, 0.0, 0.0, 0x1.74fdba84051a9p-240, 0.0, 0.0,
     0x1.e5e6f8674f8b1p-247, 0x1.49b44ca326bddp-260, 0x1.8ce43f729b97bp-437,
     0x1.11fe64bdebb9bp-517, 0x1.2ee7adcd33f7bp-394, 0.0, 0x1.c2ef54aacc377p-614,
     0x1.e578f072bdb27p-745, 0x1.11164d3f02b57p-625, 0x1.6a91baf9c198ep-922, 0.0, 0.0,
     0.0, 0.0, 0x1.993c61b4a1421p-802, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d5811fb78ff1ep-290, 0.0, 0x1.05e6a09e1bd15p-600, 0.0, 0x1.2a862147ba5f2p-730,
     0x1.e655c15223e54p-496, 0x1.0735e66bdd8a4p-891, 0x1.2576ec5f05732p-975
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_atand1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_atand1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atand1_u10purecfma bench acc %la\n", global_bench_acc);
    return cpe_measure;
}
int32_t main(){
    double tmp;
    int tmp1;
    
    tmp = bench_wrapper();
    tmp1 = tmp < 0.0;

    if (tmp1) {

        return INT32_C(1);
    }
    return INT32_C(0);
}
