/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pd2_u10kvx.c --function Sleef_log1pd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.c1bcc9a43bb49p-965, 0.0, 0x1.fa667bdc9ea61p-525, 0.0,
     0x1.0510fc261113fp-199, 0x1.423834e489e34p-391, 0.0, 0.0, 0x1.6ef26aa57761bp-737,
     0x1.074ef470e3f9p-128, 0x1.6543e027facf3p-803, 0.0, 0.0, 0.0, 0.0,
     0x1.a204d8a73a5c9p-11, 0.0, 0.0, 0x1.b48f1af8ddc6ep-396, 0.0,
     0x1.55fcf5ffbe46ep-297, 0.0, 0x1.0eb748c4159c3p-409, 0x1.a61b5508afa8ep-897, 0.0,
     0.0, 0.0, 0x1.5180bb6157562p-327, 0.0, 0.0, 0x1.cbfca557ac2c7p-915,
     0x1.04cf7ae11bfc7p-909, 0x1.4042f3e351118p-507, 0.0, 0.0, 0x1.9b6dde1461c1bp-730,
     0.0, 0x1.16b8594158dffp-23, 0.0, 0x1.4acebd3f1ddd2p-829, 0x1.c28d4b077b3f6p-404,
     0.0, 0x1.ddc15c2cb795ap-955, 0x1.d75c90f3bdbbap-889, 0.0, 0x1.add6b9ba580ddp-947,
     0.0, 0.0, 0.0, 0x1.202accf25204ap-672, 0x1.98b8c008c9909p-373, 0.0, 0.0,
     0x1.de14f26548469p-670, 0x1.1ab4c8ef24593p-404, 0x1.92c13b5059628p-784, 0.0,
     0x1.55a550a3d78b7p-619, 0x1.7cb7787a40ef3p-649, 0.0, 0.0, 0x1.5202e2aa3fa1ep-224,
     0.0, 0x1.3c64d3f6f0a9fp-583, 0x1.3bffc7dd2defcp-440, 0.0, 0.0, 0.0,
     0x1.ebc5c3009bfd6p-197, 0x1.43ea4726d85dp-75, 0x1.ecb172cdcf5c3p-164, 0.0, 0.0,
     0.0, 0x1.4e1b194131c5bp-368, 0x1.1212960ce21d8p-756, 0x1.381bfd639596ep-616, 0.0,
     0.0, 0x1.cfe8339faa2f9p-537, 0.0, 0.0, 0x1.36f3f72c0ec5cp-168, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d0602687cb672p-597, 0x1.5aa32c7a96cc5p-775,
     0x1.df72bc7063034p-174, 0.0, 0.0, 0.0, 0x1.56f120924faf3p-534, 0.0,
     0x1.60bc70d956352p-737, 0.0, 0.0, 0x1.72a3a057fd70fp-468, 0.0,
     0x1.7024879aba1b2p-358, 0.0, 0.0, 0.0, 0x1.5e0b7581f3779p-277,
     0x1.7e3fde303581dp-559, 0.0, 0x1.d9908e6f5a33fp-413, 0.0, 0.0,
     0x1.a17cce06fb62ap-806, 0x1.fb76938a01b7fp-138, 0x1.051a18400cacp-870, 0.0,
     0x1.cceb2fc675c13p-491, 0.0, 0.0, 0x1.12ddc97d3ed81p-14, 0.0, 0.0,
     0x1.3f2a7ab88ff0cp-459, 0.0, 0x1.294281ec066aap-1021, 0.0, 0.0,
     0x1.193ebb1b9e18ap-386, 0x1.79787545fa315p-427, 0.0, 0.0, 0x1.6ad579380294fp-308,
     0x1.645572791cc7p-387, 0.0, 0.0, 0x1.a188e87aa0526p-149, 0x1.3f55b334db64ep-501,
     0x1.87816e13daaddp-615, 0.0, 0x1.0bb1eb8b808e6p-998, 0x1.2889d21b1443ap-507, 0.0,
     0x1.ba55124aac7c4p-644, 0.0, 0.0, 0.0, 0.0, 0x1.fe02dec2ab966p-540, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3643ff2082e8ep-687,
     0x1.a43d839ee90b5p-776, 0.0, 0x1.a0e9001364764p-88, 0.0, 0x1.7972633ea769fp-203,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78444f4edac82p-139, 0x1.6dc9c33f4d518p-972,
     0.0, 0.0, 0.0, 0x1.e8c3b2bfd5a97p-37, 0.0, 0x1.7a75e37b45f63p-863, 0.0, 0.0,
     0x1.537b0be633953p-487, 0.0, 0.0, 0.0, 0x1.ed5e9dc0000b3p-601, 0.0, 0.0, 0.0,
     0.0, 0x1.a0f5efd5ce3e7p-13, 0.0, 0.0, 0.0, 0x1.62375238bdaa1p-548,
     0x1.71a1d426bcdcep-387, 0.0, 0.0, 0x1.04d330fba918ap-670, 0.0, 0.0, 0.0, 0.0,
     0x1.1925494de82bbp-847, 0.0, 0.0, 0x1.072d41c4e1834p-288, 0.0, 0.0, 0.0,
     0x1.b265047d64e6ap-102, 0x1.e65439fe9f241p-657, 0x1.80745a218af75p-749,
     0x1.1cc28e6e22e45p-193, 0x1.1d06442fa0504p-296, 0x1.7f3f3b041de83p-1015,
     0x1.b8fb09a0dca33p-827, 0.0, 0.0, 0.0, 0.0, 0x1.c8d7a0cbb73c7p-319,
     0x1.5361ddf87c311p-906, 0.0, 0x1.d9eee90f8db4cp-130, 0x1.852eef3f75771p-713,
     0x1.55363f7d1a4cfp-979, 0x1.7bbfd8a36382dp-232, 0x1.fafeecc993c91p-230,
     0x1.11d2d24c7e95fp-639, 0x1.628bd4a216e49p-653, 0x1.084f5bbc600fap-774,
     0x1.58fb19b303cfdp-307, 0.0, 0.0, 0x1.941702323851ap-215, 0.0,
     0x1.e412dcddfe4c3p-301, 0.0, 0x1.bb7b66d0ad582p-503, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2234af9ad5ad9p-615, 0.0, 0.0, 0.0, 0x1.417fc5e30dcc9p-702,
     0x1.322dfcee6e1b1p-693, 0x1.09c80cb0da381p-360, 0.0, 0.0, 0.0,
     0x1.8ba02cf193b5fp-36, 0.0, 0.0, 0x1.b162fb0ad4ae6p-532, 0x1.e8cbc934b159bp-357,
     0.0, 0x1.fc307ecfc105fp-570, 0x1.75fb64191bae1p-956, 0x1.a810c2c621905p-1020,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8adf2ac49f46cp-531, 0.0, 0.0, 0.0, 0.0,
     0x1.37abf0d3da2b8p-235, 0x1.75503932a4p-607, 0.0, 0x1.01fcecb638b83p-83, 0.0,
     0.0, 0.0, 0x1.4f462c3327fe7p-571, 0.0, 0x1.40652d0258c45p-480, 0.0, 0.0, 0.0,
     0x1.759a217bc20c5p-69, 0.0, 0.0, 0.0, 0x1.12909e33ddce9p-178,
     0x1.81ba9bd80050cp-703, 0x1.cb963ff062a7dp-70, 0x1.4565838c1e355p-93,
     0x1.f670b2126e60cp-979, 0x1.35b258a8b82bcp-300, 0.0, 0.0, 0.0,
     0x1.b14e7ae694da2p-221, 0x1.e3624d36f33c4p-94, 0.0, 0.0, 0.0,
     0x1.90b34224eb3a5p-233, 0.0, 0x1.136107efb3781p-803, 0.0, 0x1.ed0b3154e2435p-64,
     0.0, 0x1.845dfa516afc6p-306, 0x1.b541da8d5eaebp-528, 0.0, 0x1.59284b0c36c1ap-154,
     0x1.ebd53850e2052p-478, 0x1p0, 0.0, 0.0, 0x1.08d3746d2a01fp-187,
     0x1.bc0daf15e46dfp-940, 0.0, 0.0, 0x1.8542e271fc97fp-376, 0x1.9ce6b9bcea3e3p-471,
     0x1.0aa154039d32dp-334, 0.0, 0x1.f2ba15f419b4fp-82, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14c084622e887p-725, 0x1.3548b3690ba9ep-817, 0x1.8e8ce47b1cef3p-878, 0.0,
     0x1.994cf7ccb1de4p-648, 0.0, 0.0, 0x1.8d574a50955acp-91, 0.0,
     0x1.e4652b22d07b1p-76, 0x1.7c5eb9f20af63p-883, 0.0, 0x1.47d51dd7dd572p-805, 0.0,
     0.0, 0.0, 0x1.6f5b2be64b57bp-12, 0.0, 0x1.9b6617bd90482p-798, 0.0,
     0x1.e577bcce184e2p-1011, 0.0, 0.0, 0x1.e7325c7a1f17ap-137, 0x1.79ad633da704cp-99,
     0x1.86c2d8687d35cp-892, 0x1.6cf9450201e12p-330, 0x1.ade4b70380b46p-761,
     0x1.c2c5f76518ffdp-1, 0.0, 0x1.0035969aa454ap-489, 0.0, 0x1.775dad1f4f339p-301,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08e4db77ec8d7p-194, 0.0,
     0x1.057400fb9bb0ep-450, 0.0, 0x1.9751afa165727p-723, 0x1.ef0ecc41ecfe3p-848,
     0x1.08ba3c7130992p-444, 0x1.d94ef6e891549p-131, 0.0, 0x1.70d894c7e7723p-802,
     0x1.f3203fcd5095p-828, 0.0, 0.0, 0x1.1e22cdc371c18p-297, 0x1.d43ed0d5a2ac5p-591,
     0.0, 0x1.04f6c4f6e5679p-248, 0.0, 0x1.1348cb33f820bp-546, 0.0, 0.0, 0.0, 0.0,
     0x1.57e71e22dd962p-940, 0.0, 0x1.370f10db50983p-218, 0.0, 0x1.edbf25c422beep-111,
     0x1.05f236c7a0862p-853, 0.0, 0x1.af0f2432ea0e5p-632, 0x1.de5ac8dd5e307p-221, 0.0,
     0x1.a816d0716d1d6p-335, 0.0, 0.0, 0.0, 0x1.535ad66a57592p-456, 0.0, 0.0, 0.0,
     0x1.f64134b2eba5p-590, 0.0, 0.0, 0.0, 0x1.32989142affccp-653, 0.0, 0.0,
     0x1.ed3b222af40d1p-584, 0.0, 0x1.3548698bc3cc3p-951, 0x1.5c4b40e8071fdp-626,
     0x1.329c0de8ea731p-795, 0x1.8f189c58f9cap-248, 0.0, 0x1.e757831e2fc34p-361, 0.0,
     0x1.04ccecfc10f91p-31, 0x1.7a5c2ca1fe5d4p-422, 0x1.85561170302c7p-628, 0.0, 0.0,
     0.0, 0x1.c28136dda36f9p-374, 0.0, 0.0, 0x1.3e41606314a85p-490, 0.0, 0.0,
     0x1.e87bf619d41b4p-676, 0.0, 0x1.453f894587c27p-665, 0.0, 0x1.1bc8c87702b0bp-193,
     0x1.12618836c6fc6p-360, 0x1.0412ed9af8cfdp-233, 0x1.9b460b462fa77p-168,
     0x1.dac55df0ac139p-131, 0.0, 0.0, 0x1.5bba1f090489bp-836, 0.0,
     0x1.c5f17b0d97d14p-43, 0.0, 0x1.2e38f0612dfb5p-729, 0x1.05bfbc9017e7cp-445, 0.0,
     0.0, 0x1.4c6c973af0a34p-129, 0.0, 0.0, 0x1.cfbc90c73686ep-99, 0.0, 0.0,
     0x1.4563e17c200f6p-192, 0.0, 0x1.2493ed061149bp-748, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7882017ba157p-818, 0.0, 0.0, 0.0, 0.0, 0x1.c537299c377ddp-330, 0.0, 0.0,
     0x1.83c0336dde836p-912, 0.0, 0.0, 0.0, 0x1.546b662a3fb4dp-186,
     0x1.99d8b76d3ecdcp-877, 0.0, 0x1.a0c8312cf510ep-310, 0x1.9f26b8d6d4321p-528, 0.0,
     0.0, 0.0, 0x1.fb5faaab2c6bep-640, 0.0, 0x1.8cfbf211b7f7cp-216,
     0x1.dec1cf4490c42p-606, 0.0, 0.0, 0.0, 0x1.56c4a04b011eep-585, 0.0,
     0x1.9cc1c203e4ae5p-500, 0x1.a853eec07178ep-153, 0.0, 0x1.31667aa158a96p-860, 0.0,
     0x1.5be43fb5fff88p-204, 0x1.ea0b4c486d802p-321, 0x1.b45bd3bae5b34p-554, 0.0, 0.0,
     0.0, 0.0, 0x1.d7f317ae840f3p-1001, 0x1.e943bb4dc2bb5p-954, 0.0,
     0x1.b2346d57afe96p-129, 0x1.ca2dd5e62ee09p-741, 0.0, 0x1.d85ba38f616dfp-200,
     0x1.cfe8d425c0c4p-711, 0x1.0f313d7af6d1ep-530, 0.0, 0.0, 0.0, 0.0,
     0x1.c8f482bb4607bp-925, 0.0, 0x1.00de6bd867b83p-463, 0x1.e6a6a43ec9a6cp-471, 0.0,
     0x1.f7d2c61897b4p-90, 0x1.a260c03f15eaap-383, 0x1.c947e920ef02fp-718, 0.0,
     0x1.d851e6d8fbdbcp-305, 0x1.52b2f8d2705adp-381, 0x1.ee02139c8363p-199, 0.0,
     0x1.0ce52ae78bc95p-784, 0x1.d38200555ff89p-352, 0x1.b0767dddf35c8p-619,
     0x1.fe8b3b46b4b11p-386, 0.0, 0.0, 0.0, 0x1.256ebd97f2de4p-660, 0.0,
     0x1.25d238ca09dd2p-564, 0x1.d890f6526a33ep-692, 0x1.0c2cb014e1215p-601, 0.0,
     0x1.ff5c042cc2b49p-534, 0.0, 0x1.4813092e3108fp-966, 0x1.605709e64faa3p-418, 0.0,
     0.0, 0.0, 0x1.aa59b6dc5af3fp-223, 0.0, 0x1.7c4b643e4338dp-709,
     0x1.587d00029edd2p-34, 0x1.850bf79cc6f85p-4, 0.0, 0x1.7513f2951cbc8p-866,
     0x1.02158889b6213p-618, 0x1.3b754e8d3bd9ap-992, 0.0, 0.0, 0.0, 0.0,
     0x1.0f811c4c7e8c4p-984, 0x1.eb167ef608994p-463, 0.0, 0.0, 0x1.78ce1198b34ddp-313,
     0x1.a02e5234466d9p-245, 0x1.5cea7c250e44dp-289, 0.0, 0x1.1f2ed13ad1cdbp-101, 0.0,
     0x1.303380f8d0b16p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.954be7fdb9908p-599, 0x1.53ab1aa1eae23p-37, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1ff3d57ff6be3p-423, 0.0, 0.0, 0x1.55d523e8a30d4p-635,
     0x1.3c7feac3c20dcp-977, 0x1.b3ac90001ebd9p-442, 0x1.633c0f9714b35p-414,
     0x1.b4decbb753423p-615, 0x1.22028e6c897c6p-33, 0.0, 0x1.b8905cddd4d9dp-730, 0.0,
     0.0, 0.0, 0x1.9f76fbaed1874p-329, 0x1.af81c6289845ap-775, 0x1.4f2d37866700cp-57,
     0.0, 0x1.6cd8821017268p-478, 0x1.c38d567136d09p-723, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14cd8127150fbp-697, 0x1.2a7b67809ade7p-786,
     0x1.6c1bc7b6df485p-189, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a3d9b6605718p-325, 0.0,
     0x1.25a4bba0babb5p-423, 0.0, 0x1.50c6e79676e18p-269, 0x1.6f041a759706bp-615,
     0x1.3070defc55d7p-988, 0x1.4031c3eba5467p-892, 0.0, 0.0, 0.0,
     0x1.c86cb804a91c7p-464, 0x1.f340e16ca0d49p-990, 0x1.c938908c2dc7ep-964,
     0x1.9d0c387cf35a6p-106, 0x1.17d41d88e3341p-976, 0.0, 0x1.b321177ea2156p-287,
     0x1.cba9c4a1995fep-725, 0.0, 0x1.20e9de3bc819cp-920, 0.0, 0x1.e5188e098785ep-374,
     0.0, 0x1.d7cd71883ff89p-181, 0x1.459111f5a50edp-583, 0x1.1fdf7e48547adp-326,
     0x1.72a1766d9e26ep-306, 0x1.81fd318019deep-473, 0.0, 0x1.5723586d88d5fp-187, 0.0,
     0x1.8fa883e8d3094p-293, 0.0, 0x1.d3da23e256446p-382, 0x1.94d37fea9086ep-275,
     0x1.88786f1d3e49dp-483, 0.0, 0.0, 0x1.95364812199bep-290, 0x1.abc6cc20df717p-513,
     0x1.c37762fb58101p-46, 0x1.f8b5952bba394p-915, 0.0, 0.0, 0.0, 0.0,
     0x1.a93aa20990f96p-92, 0.0, 0.0, 0.0, 0x1.ed91b5551f43bp-341,
     0x1.981d87d40a6c5p-20, 0x1.72bf257272979p-219, 0.0, 0x1.d1684f6ff1e6dp-283,
     0x1.cca7df8f11332p-877, 0.0, 0x1.e3ad36d8d2e93p-426, 0.0, 0.0, 0.0,
     0x1.88b07fe88d3e1p-250, 0.0, 0.0, 0x1.7c5d384be35cp-948, 0x1.bf9409dc12fddp-610,
     0.0, 0x1.5dadb6bd1147cp-357, 0.0, 0.0, 0.0, 0x1.4433d250c3ed7p-825, 0.0,
     0x1.be393cf0a68f8p-1009, 0x1.18f27daddee16p-855, 0.0, 0x1.77d890a55f88p-123, 0.0,
     0.0, 0x1.ab8af8adc35fap-652, 0x1.3b396e96ac70ep-662, 0x1.624c999133abbp-150,
     0x1.bcff7c50e0ab7p-863, 0.0, 0.0, 0x1.2ac3ffed7095ap-489, 0x1.eaf3e63b07e41p-902,
     0x1.a90c1fa93f994p-992, 0x1.9188cbf90736bp-860, 0.0, 0x1.74c6e897e964p-891, 0.0,
     0x1.34f80a941af33p-608, 0.0, 0x1.97bff10334c0fp-640, 0x1.646361635ea63p-934,
     0x1.029a7abd487efp-450, 0x1.24f8b74e03fc1p-171, 0x1.598f7a13bd88p-580,
     0x1.35b7ba06a97a2p-977, 0x1.78311caabf9d1p-627, 0.0, 0x1.cd0a52d2092e9p-7, 0.0,
     0.0, 0.0, 0.0, 0x1.80f3d06c4caeap-980, 0.0, 0x1.64ddda05c6907p-479,
     0x1.0ec15b13c88c5p-655, 0x1.6f3b2140ad902p-778, 0x1.b7b39be5b8a64p-971, 0.0, 0.0,
     0x1.7698c66da29fdp-579, 0.0, 0x1.a254b26a6853fp-918, 0.0, 0.0,
     0x1.656ea232f4d12p-891, 0x1.6039994040f8dp-816, 0x1.929ce89405969p-952,
     0x1.ecf360a5d6f23p-1021, 0x1.0f269c01d438ep-609, 0.0, 0x1.a9849666f2cb2p-988,
     0x1.8645c57796dc2p-638, 0x1.0729b3bcb17ddp-830, 0.0, 0.0, 0.0, 0.0,
     0x1.08b4854808024p-701, 0.0, 0x1.9a42d9281eb17p-534, 0x1.1d93884cf6bb7p-1012,
     0.0, 0.0, 0x1.b26f4d45bef3bp-543, 0x1.eb78f819819d1p-324, 0x1.f7e04a2239879p-170,
     0x1.a6ed5408e49afp-456, 0.0, 0x1.af6a4551999e4p-896, 0.0, 0.0,
     0x1.5bf84dd646c97p-884, 0x1.bf10e88e25719p-660, 0x1.d13c79b8aeebap-902, 0.0,
     0x1.8c43c69c0442ap-275, 0.0, 0x1.470ea4ecff999p-323, 0.0, 0.0,
     0x1.5f6fb87f26b92p-890, 0.0, 0x1.5cab0520853dcp-61, 0x1.73969f6f7d5a2p-79,
     0x1.4aff859a63a1ep-284, 0.0, 0x1.eb724287316cdp-709, 0.0, 0x1.df44c781975f3p-384,
     0x1.709c3df912c92p-849, 0x1.9f3953d40f155p-888, 0.0, 0x1.83e17e89eff77p-693,
     0x1.58d2d1d815dfp-874, 0x1.cc55d84fd24d4p-756, 0.0, 0.0, 0x1.ce9bdb526c5f6p-813,
     0x1.51332808f14c8p-1001, 0.0, 0.0, 0.0, 0x1.011be3f7b0ad9p-873,
     0x1.f00a8a27e0095p-126, 0.0, 0x1.309c508882556p-743, 0x1.7c66949f036c5p-415,
     0x1.86341ab5948p-119, 0x1.d90b0a2a255f6p-264, 0.0, 0x1.eefaf91dfe8d8p-672, 0.0,
     0.0, 0x1.c072b3e1cda44p-716, 0x1.4e2299abc132cp-39, 0.0, 0x1.6893524e241e8p-706,
     0x1.a222742edcab1p-996, 0x1.af80d1abce058p-466, 0x1.fe3a7a318a946p-412, 0.0,
     0x1.40a1e272f8dbdp-788, 0x1.8df50c73bebbfp-601, 0x1.d65d6d2bf0ff6p-408, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0x1.f8d6409a8399fp-510, 0.0, 0.0, 0.0,
     0x1.e6b5ac7f8eb9bp-743, 0x1.e42b85c752193p-733, 0.0, 0x1.d713c50dedc1ap-418, 0.0,
     0x1.2b4d50727797p-533, 0.0, 0.0, 0x1.74ab3b9fece39p-988, 0.0, 0.0,
     0x1.ef173c543055bp-387, 0x1.e1b441d25f0a8p-732, 0x1.6b3efd0b16338p-543,
     0x1.2f1954cd73366p-122, 0x1.4b548686e1fd4p-807, 0.0, 0x1.c84f424f74762p-225, 0.0,
     0x1.c12bfb2345fa5p-156, 0x1.a6fab18febf09p-806, 0.0, 0x1.bee4575f885ebp-991, 0.0,
     0x1.6a4239a51f5e9p-529, 0.0, 0x1.5c4ab731648dbp-995, 0x1.45a8dd2125bd3p-469, 0.0,
     0.0, 0x1.757403c40fa37p-113, 0x1.b95250d688149p-972, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70b3ffe68c8ddp-563, 0.0, 0x1.f066f640faff9p-378, 0x1.b5a6040dd2a77p-326,
     0x1.603a671fbeb4cp-1019, 0.0, 0x1.96d23a00ce1c9p-183, 0.0, 0.0, 0.0, 0.0,
     0x1.fa6ceae872b12p-330, 0x1.3e7687acac03ep-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3735c4cd2648fp-101, 0x1.6c819d12c8ee7p-590, 0.0, 0x1.7d7023ebc6aacp-801,
     0x1.fac66f04cc043p-314, 0x1.360b2767e1481p-484, 0x1.c331aaedaa61bp-859,
     0x1.72eb10b6b673cp-698, 0x1.a95b0b9cbeb1p-979, 0x1.67179cc5f773dp-258,
     0x1.2b0844852285ep-729, 0x1.09baec5868ea5p-610, 0.0, 0x1.89d7c599043a6p-108, 0.0,
     0x1.4e1badc051361p-58, 0x1.bd7ce5ca83446p-633, 0.0, 0.0, 0.0,
     0x1.edc4905be000cp-356, 0x1.6f16900f63be6p-139, 0x1.18a8399627811p-43,
     0x1.4ca2b1f16641fp-669, 0.0, 0.0, 0x1.35b8f00bbbb4dp-977, 0.0, 0.0, 0.0, 0.0,
     0x1.86d6c55d2bd21p-576, 0x1.0c62b407a5316p-1018, 0.0, 0x1.5387027c04c5p-862, 0.0,
     0x1.e4ddc0fa0fe9bp-522, 0.0, 0.0, 0.0, 0x1.0963a3f5bccaap-36, 0.0,
     0x1.8a54a6c8a081ep-1014, 0x1.89356ce91ea69p-1020, 0.0, 0x1.824c7edef3ca2p-839,
     0x1.b93510e3263bbp-635, 0.0, 0x1.a012e2cf5ffcdp-34, 0.0, 0x1.599acd8ca4849p-964,
     0.0, 0.0, 0.0, 0x1.ec87f5ef1b469p-295, 0.0, 0.0, 0.0, 0.0, 0x1.979ecd362435cp-77,
     0x1.cde69ee4e2386p-840, 0x1.dc921d8c531c2p-822, 0.0, 0x1.f02811b87a75p-681,
     0x1.da1b7fa9bb57cp-500, 0x1.bba8cd5f27f06p-691, 0.0, 0x1.65839fe0b5d38p-568, 0.0,
     0.0, 0.0, 0x1.7a73d5741da47p-864, 0.0, 0x1.d9c1811534513p-581, 0.0,
     0x1.ff26fcd7eb75cp-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6338fa744d512p-570,
     0x1.bbd73e3c2bdcfp-173, 0.0, 0x1.2d4c6961aa35p-290, 0x1.b8ccca17cef0cp-397, 0.0,
     0.0, 0.0, 0x1.80355b70ca8dp-1000, 0.0, 0x1.70e5eaeb23698p-81, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_log1pd2_u10kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_log1pd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log1pd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
