/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_u35purecfma.c --function \
 *     Sleef_sqrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7c7d45057510cp-408, 0.0, 0x1.3e0950e7b5accp-679, 0.0, 0.0, 0.0, 0.0,
     0x1.8a5cded28cea7p-738, 0x1.b0a72982e3242p-438, 0x1.24ea7f37e42f4p-29,
     0x1.d7c22ef377aa9p-100, 0x1.d6b57fa221b06p-486, 0.0, 0x1.8d39b503821c3p-406, 0.0,
     0.0, 0.0, 0.0, 0x1.850e0cbac1bdap-66, 0x1.5c2518cbcf78p-717,
     0x1.4ab0e1a4f6c5dp-124, 0x1.5b73596af7e72p-997, 0x1.5d0db790434b9p-557,
     0x1.37662e99140b4p-472, 0.0, 0x1.f7624657af126p-831, 0.0, 0.0, 0.0,
     0x1.3cadbc0be250dp-238, 0x1.c777e72320c8ep-77, 0.0, 0x1.f0c2edfbd6179p-231,
     0x1.0429c9ca4c7adp-837, 0x1.417430be25654p-144, 0x1.df1fedd09e9ddp-925, 0.0, 0.0,
     0x1.2bbc048e80886p-174, 0.0, 0x1.56401a035b118p-770, 0x1.cb010faf93eap-480, 0.0,
     0.0, 0.0, 0x1.6e7984ed19c47p-658, 0x1.10519bf08e42cp-223, 0.0, 0.0,
     0x1.f97a6b9b36ff4p-274, 0x1.446cfed589e38p-136, 0.0, 0x1.7eaff59bf6d1fp-941, 0.0,
     0.0, 0x1.239810897537p-864, 0x1.feeea020b6be1p-722, 0x1.1c2caadea3b5bp-370,
     0x1.29d40c12dcc11p-207, 0.0, 0x1.bfa888e51a686p-693, 0x1.31ea18c0c4bd8p-846,
     0x1.435fff3bf2b09p-67, 0.0, 0x1.86a0e795bc4b9p-266, 0.0, 0x1.c3ca640c1d7a7p-202,
     0.0, 0.0, 0x1.b3ba0270047cep-290, 0x1.1e5d7487e3d98p-752, 0.0,
     0x1.7476a9f8de70bp-448, 0.0, 0.0, 0.0, 0x1.34d3a212c5fdbp-707, 0.0,
     0x1.00c579413c9a1p-151, 0.0, 0x1.b6f0a193955f8p-248, 0.0, 0.0,
     0x1.5e950113f9881p-502, 0.0, 0x1.02b851999820bp-533, 0.0, 0.0, 0.0,
     0x1.95bc730b2bebap-521, 0x1.932387b7fdec3p-943, 0.0, 0x1.14c4869907829p-225, 0.0,
     0x1.4963d2962f7ebp-154, 0.0, 0x1.a82e1988a1bfp-985, 0x1.6ad2a6e94c5e8p-851,
     0x1.e9e81f5de65b7p-865, 0.0, 0.0, 0x1.6bad92476df34p-14, 0x1.10f18f76450dep-807,
     0.0, 0x1.efb9c1ec515aep-168, 0.0, 0x1.70148238c1454p-728, 0x1.c914a88a33df2p-324,
     0.0, 0x1.1da860bb29827p-163, 0x1.db39621593fa4p-175, 0.0, 0.0, 0.0,
     0x1.0278a0759a0adp-427, 0.0, 0.0, 0x1.4ebfcb982ec4dp-959, 0.0,
     0x1.aebf2d81ad21ap-444, 0.0, 0.0, 0.0, 0.0, 0x1.578ca514d9ce3p-435,
     0x1.f6da9a2e79949p-885, 0.0, 0x1.c756313426a4fp-718, 0x1.cc05581c93a01p-706, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a192f38e279a5p-338, 0.0, 0.0, 0x1.7c126dfdd007dp-232,
     0x1.94ba5e68d4cbdp-975, 0x1.8e643ca229e7cp-356, 0x1.17a3a5c614ab5p-448,
     0x1.8fd2d3587a971p-172, 0.0, 0.0, 0.0, 0.0, 0x1.fd87aed2b7261p-595, 0.0, 0.0,
     0x1.b2d1281915c6bp-216, 0x1.93b17d1f314d1p-808, 0x1.d5b6356fd37ap-30,
     0x1.91dcf90ac0ab4p-521, 0x1.f6ce16b998a9cp-711, 0x1.911b61e0017aep-548, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8979f3cebda4ap-549, 0x1.7e91aa818d69ep-605, 0.0,
     0x1.1e0ac8664bap-449, 0x1.def2bbc38101bp-186, 0.0, 0x1.9da8487d9ac41p-791,
     0x1.f3832833ec947p-390, 0x1.374f8dc52ffd9p-86, 0.0, 0.0, 0x1.be0185c51408ap-893,
     0.0, 0x1.0f2f0e39ac2d9p-596, 0x1.16dfb62d2a383p-542, 0.0, 0.0, 0.0,
     0x1.1e26d839b6bfep-89, 0x1.3633c437ebbf1p-843, 0x1.9d980d6c468edp-500, 0.0,
     0x1.dfad55ddab6e5p-444, 0x1.c91a03db8f5c7p-347, 0x1.233db5c7b063dp-720, 0.0,
     0x1.8ad2ee8fede8cp-20, 0x1.c9612bd6f3894p-756, 0.0, 0x1.f57f3f9a9eb47p-564,
     0x1.c7c29d0c6f58bp-3, 0.0, 0.0, 0x1.d854415342b49p-893, 0.0, 0.0, 0.0, 0.0,
     0x1.4b3d156c04f0ep-743, 0x1.b164c19d9f3cbp-500, 0x1.7a2aa42eb6d56p-459,
     0x1.7682a1d0f0294p-730, 0x1.b346f700ae4b3p-272, 0x1.5b0c66f13d1e6p-26, 0.0,
     0x1.b41ad652a6e8p-855, 0.0, 0x1.9e3ff68c0d4b5p-773, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.997698ac8af4cp-665, 0.0, 0x1.7e76b4e0167c3p-4, 0.0, 0.0,
     0x1.92dd3e5c76597p-86, 0.0, 0x1.4ace6f049cfc7p-696, 0x1.e4831384098cbp-682,
     0x1.4fffdefa6cdeap-800, 0x1.537ad27e8a137p-502, 0.0, 0.0, 0.0, 0.0,
     0x1.9f8b79bac199cp-408, 0.0, 0.0, 0x1.f60a40b406b81p-784, 0.0,
     0x1.2f36c1df2b2fbp-356, 0x1.2d21ac1934f62p-405, 0.0, 0x1.85029354b85dep-171,
     0x1.66d2a685a298dp-174, 0.0, 0.0, 0.0, 0.0, 0x1.2b5112228859p-892,
     0x1.a8b350ae0d883p-531, 0.0, 0x1.cdb9d90af93d9p-653, 0x1.b39e73a2afef6p-462, 0.0,
     0.0, 0.0, 0x1.2d7ae9d80435bp-529, 0.0, 0.0, 0.0, 0.0, 0x1.a39805dfaf713p-945,
     0x1.7a5e5ad8d72f6p-339, 0.0, 0x1.0bd4d9e6c3252p-484, 0.0, 0.0,
     0x1.d93792f021ef1p-303, 0.0, 0x1.7eb17e24213b4p-462, 0.0, 0.0,
     0x1.ee25b845dbd71p-781, 0x1.5825e09d822a8p-933, 0.0, 0.0, 0x1.6f017211408f5p-270,
     0.0, 0x1.c11ed755c3657p-952, 0.0, 0x1.f8fb55a85e6a3p-165, 0.0,
     0x1.57ea8529235fp-631, 0x1.749edf85233d9p-843, 0.0, 0x1.24f40cb8e2053p-554, 0.0,
     0.0, 0.0, 0x1.0453463ec4911p-345, 0.0, 0x1.9de0ce64193e1p-394,
     0x1.99ce80131e474p-860, 0x1.f87c3a3971377p-96, 0x1.ae4a1aa0c2214p-786,
     0x1.c1bcb115fe475p-140, 0.0, 0.0, 0x1.18cb7d2d1eb8ap-317, 0x1.73762f9f5a2cep-402,
     0.0, 0x1.0fea23aec1c8ap-187, 0x1.c671a69c4e396p-678, 0.0, 0.0,
     0x1.614ec675176b4p-774, 0.0, 0.0, 0.0, 0x1.7cbd114fb29c5p-886,
     0x1.ff40a12089487p-323, 0.0, 0x1.951132bdb3fd2p-87, 0.0, 0.0,
     0x1.0ebc42285035ep-207, 0.0, 0x1.5230bd7840e12p-649, 0.0, 0x1.303fe34d729cfp-699,
     0.0, 0x1.072d76163fab4p-998, 0x1.c968466bda5a2p-849, 0x1.292b9d7ba78p-950,
     0x1.b3f00f06838bep-545, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e38d549a9177p-155, 0.0,
     0.0, 0.0, 0x1.57627fe863af5p-348, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77c1f4d28b4a3p-430, 0.0, 0.0, 0x1.072183c013fcep-4, 0x1.3dc56397421ccp-673,
     0x1.2eb7b175c7947p-186, 0x1.7a49a45a8f9d9p-394, 0.0, 0.0, 0x1.3a3de1243bcfep-361,
     0.0, 0.0, 0.0, 0x1.7c8a7414880dcp-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4832d06695197p-718, 0.0, 0.0, 0x1.aac805477faa2p-860, 0x1.bad1fedfacefp-94,
     0.0, 0.0, 0.0, 0x1.cebc58524bdd3p-536, 0x1.5b3eaeede8cd7p-506,
     0x1.1dbe45a71421ap-313, 0x1.3c9cd75fbee9p-188, 0.0, 0.0, 0x1.019dfb1219392p-808,
     0x1.24b56f957889ap-969, 0x1.64ca2cc3d051ap-515, 0x1.6892405b2e576p-608,
     0x1.fc1c72130ac1fp-341, 0x1.e11ba6d28c057p-521, 0x1.906def33cf0d3p-944,
     0x1.6b6ed1c76d415p-650, 0x1.7f9d165e39291p-444, 0.0, 0.0, 0.0, 0.0,
     0x1.5f8be3cc0acaap-982, 0x1.533d2c351299ep-278, 0.0, 0x1.4b4bb0232529cp-355,
     0x1.d36ff68e5b226p-867, 0.0, 0.0, 0x1.7947554aca80bp-283, 0x1.b8a3befcb9b9bp-465,
     0x1.c7a73c800b634p-349, 0x1.eaeb7024dad03p-647, 0x1.88c2500811afdp-765,
     0x1.ee4334d5b78fp-85, 0x1.8292d4459cef1p-426, 0.0, 0x1.ffcc5f920fe8dp-752, 0.0,
     0x1.25880e311fdd2p-433, 0.0, 0.0, 0.0, 0x1.7945a5f8fa2cp-644, 0.0, 0.0, 0.0, 0.0,
     0x1.2c433d6a45d61p-647, 0x1.9c26f986e403ap-381, 0x1.adc6f2ce97928p-323,
     0x1.9670b2781b678p-632, 0.0, 0.0, 0.0, 0x1.23bb20463170ap-811, 0.0,
     0x1.662dcc5784bf2p-387, 0x1.825d95c8ebc7fp-234, 0.0, 0x1.aaf1020f650c1p-380, 0.0,
     0x1.eacb1fd7f3faap-900, 0x1.534efcb04928cp-49, 0.0, 0x1.c0795033e431ap-139, 0.0,
     0x1.85e9a3366bc9bp-836, 0.0, 0x1.b949307c4235fp-217, 0.0, 0.0, 0.0, 0.0,
     0x1.e0b69df7cad87p-70, 0x1.95b9db5845207p-198, 0x1.9628d43b3a55p-393, 0.0, 0.0,
     0.0, 0x1.9c20b7492ebecp-823, 0x1.9de50a6b79085p-873, 0.0, 0.0,
     0x1.b5f3f683283ccp-878, 0x1.acb0e4e1e1e43p-560, 0.0, 0x1.79f55c6535f56p-333, 0.0,
     0x1.55293c0643536p-466, 0x1.da6a87eec7f8fp-15, 0.0, 0x1.ca0eab509b722p-517,
     0x1.ee13edd8c92acp-427, 0x1.92ca29a292076p-972, 0.0, 0x1.e1e5ee3838fc4p-438,
     0x1.5b95a9562d608p-707, 0.0, 0x1.67aaa243e2d24p-346, 0.0, 0.0, 0.0,
     0x1.fc6390474b886p-515, 0.0, 0x1.79b75094394c5p-402, 0x1.51fa29f06b19p-57,
     0x1.7decdbf1c0624p-162, 0x1.96d22fba467f2p-794, 0x1.a2a6515aa08eep-536,
     0x1.0c874ae31bdfbp-803, 0.0, 0x1.b89d81683c135p-122, 0x1.3d1131ae04569p-650, 0.0,
     0x1.33c4eb45d8bb5p-807, 0.0, 0x1.18d7bf369f443p-846, 0x1.b48533006d32ap-200,
     0x1.aa5e39307fefdp-759, 0.0, 0.0, 0x1.ed05c8ef2075cp-540, 0.0,
     0x1.bd212d3ffb51cp-343, 0x1.5b95db23af662p-906, 0.0, 0x1.a4877780c1ab2p-407, 0.0,
     0x1.4cf6ba1be8e18p-446, 0x1.2b6de7f6c3472p-385, 0.0, 0.0, 0x1.c6c3fa0719901p-473,
     0.0, 0x1.777bf1dd78b32p-459, 0x1.83c1084b13ad7p-178, 0x1.6db7440223276p-861,
     0x1.6d72e973c6736p-303, 0x1.acb574e5c19dep-170, 0.0, 0x1.c2540333b1739p-807,
     0x1.fa71084b6215cp-867, 0x1.d0e56bd60ea5p-362, 0.0, 0x1.239ea9fe417f6p-738, 0.0,
     0x1.9c349bc3da22dp-191, 0x1.82bd5467e4038p-994, 0.0, 0x1.7d9658199ec87p-112,
     0x1.7c72916d6b447p-951, 0.0, 0x1.f44be9b32122ap-429, 0x1.4cd4eeba05e17p-301, 0.0,
     0.0, 0x1.cb4463ac8596dp-961, 0.0, 0.0, 0x1.45165a10e1267p-41,
     0x1.46e587116deb1p-120, 0x1.1656201b8dbbbp-932, 0x1.1127be4da487cp-562,
     0x1.6c2dff284b554p-960, 0.0, 0x1.88ef9f1266b84p-734, 0x1.a7727ef4ed49p-212, 0.0,
     0.0, 0x1.80708c7a28c01p-875, 0x1.48ab66cf092e4p-943, 0x1.2971a0450c018p-328,
     0x1.f3865a0f0af28p-180, 0.0, 0.0, 0.0, 0x1.4889b0327e393p-314,
     0x1.c301a20fe8d8cp-971, 0.0, 0x1.b2356a23a5f76p-558, 0.0, 0x1.fb2f514be2064p-167,
     0x1.d1780d955771p-141, 0x1.5519fd9568561p-83, 0.0, 0.0, 0.0, 0.0,
     0x1.4d52f4fe73be8p-810, 0.0, 0.0, 0x1.1a48b2c8e10fdp-373, 0x1.a22036cfbb42fp-982,
     0x1.244f855e09e2p-485, 0x1.fcbeedfda3eb1p-778, 0.0, 0x1.43ab2a8ea8da9p-729,
     0x1.d508d5faa2177p-88, 0x1.7731eccb7dfecp-352, 0.0, 0.0, 0x1.1ae4c3fd6b189p-136,
     0.0, 0.0, 0x1.e4db31e1eba4p-294, 0.0, 0.0, 0.0, 0x1.11091b63ad555p-386, 0.0,
     0x1.52b496aa9de1ep-579, 0x1.38dab27fcf0f1p-829, 0.0, 0.0, 0x1.717d5feabe05p-842,
     0.0, 0x1.708175019d7ccp-55, 0.0, 0.0, 0x1.451391a8322edp-969, 0.0, 0.0,
     0x1.a4dac40620f28p-503, 0x1.b51e1c429d717p-95, 0.0, 0x1.bfe0898ab4999p-695,
     0x1.662c7ed4335abp-523, 0x1.a83b7ef26e994p-787, 0x1.af07eaed07b98p-544,
     0x1.e3e53ccebb9e2p-472, 0x1.9677f938838fbp-268, 0x1.4e109e9f561ap-905, 0.0,
     0x1.9cbe500e96625p-301, 0x1.059be9a6584c4p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.9a76d878cf4d5p-806, 0x1.9057646e960bfp-628, 0x1.618c2c0c56b03p-1018, 0.0,
     0x1.517fd2cd522e7p-218, 0x1.bec4168263347p-529, 0.0, 0x1.4131c89309e41p-104, 0.0,
     0x1.7a54548a75dd6p-792, 0x1.43a869561f131p-268, 0.0, 0.0, 0.0,
     0x1.a2584698e3786p-975, 0.0, 0.0, 0x1.61733d0584437p-731, 0.0,
     0x1.0357441bd5faap-174, 0x1.3523f3bfd62a1p-471, 0.0, 0.0, 0x1.7b3f9e066b8b6p-141,
     0x1.f1aef99eef8fep-687, 0.0, 0.0, 0x1.94ad2249dfa33p-687, 0x1.f36484b38c7edp-757,
     0x1.2d5124f00a9e8p-250, 0x1.8b95e3e6e2dd5p-782, 0.0, 0.0, 0x1.94c2554ded3d7p-703,
     0.0, 0x1.e7efe7360f03p-911, 0x1.50bad7f33ecabp-38, 0.0, 0x1.d9325a8f87d3bp-275,
     0x1.bc558ee4c46a7p-324, 0x1.c242b42fc958p-806, 0.0, 0x1.f17e86dff3366p-545,
     0x1.8c12aa4e4591p-83, 0x1.953902a710b2fp-178, 0x1.0eead7ab5f56bp-342,
     0x1.3d6dcd02c1a9p-120, 0x1.83d5371913c87p-416, 0.0, 0.0, 0x1.3eb8ab64afda4p-326,
     0.0, 0.0, 0.0, 0x1.c75d5a096e5fp-826, 0.0, 0x1.70716a0955891p-640,
     0x1.f18e5d941d815p-668, 0.0, 0x1.c8f55c9d2810ap-113, 0.0, 0x1.b07325daa4a7p-56,
     0x1.64605971eb129p-744, 0x1.abdd15afaecddp-991, 0x1.cce20416ebf7ep-837, 0.0, 0.0,
     0.0, 0.0, 0x1.25fc7809f3fd4p-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.228721ea77c6bp-966, 0.0, 0x1.1b75980b2689fp-500, 0x1.1b0303f3332dap-438, 0.0,
     0.0, 0x1.dc4383a900ce2p-347, 0.0, 0x1.3cb8c48096f89p-452, 0x1.64396a50c1146p-647,
     0x1.35a50e13886cdp-439, 0.0, 0.0, 0x1.8fa7eb2197c73p-693, 0.0, 0.0, 0.0,
     0x1.cc3b13dc8ef73p-931, 0.0, 0.0, 0x1.db8e1b7aa1dc1p-981, 0.0, 0.0, 0.0,
     0x1.1894054deb363p-266, 0x1.ed79463b98a4dp-917, 0x1.eb93f807431aap-647,
     0x1.c2ea42ebb9988p-226, 0x1.b1fde71ac1f1cp-777, 0x1.ebe6508204441p-959, 0.0, 0.0,
     0x1.2d34e23e63cdcp-715, 0x1.568dc5add5881p-394, 0x1.2d62017bb7915p-859,
     0x1.965a277a308a1p-60, 0x1.6c180ec58b2ddp-300, 0.0, 0.0, 0x1.7f105f72ed294p-380,
     0.0, 0.0, 0x1.685f82856f0c1p-858, 0.0, 0.0, 0x1.8e96233f947fdp-853,
     0x1.8c8c2ea0e611bp-596, 0.0, 0x1.703828530b379p-816, 0.0, 0x1.f0a97adbb8dbcp-286,
     0.0, 0x1.720e2aed94014p-75, 0x1.ec379262501ffp-912, 0.0, 0.0,
     0x1.391b87da87d57p-202, 0x1.7b0af7f936663p-763, 0x1.f5775d82f6f54p-417, 0.0, 0.0,
     0.0, 0x1.0c06de3f073fp-766, 0x1.d6d1344b7b2acp-209, 0x1.1f3f879bc49d9p-520, 0.0,
     0.0, 0.0, 0x1.ec73edfd71271p-733, 0x1.733f541399617p-300, 0.0, 0.0,
     0x1.192ad81ec1cacp-464, 0x1.761cb4a295a09p-727, 0.0, 0x1.618ade8c8634cp-993,
     0x1.1ec5613e062e4p-900, 0.0, 0.0, 0.0, 0x1.b5faca25f783fp-328, 0.0,
     0x1.cb1beb90a15e2p-289, 0x1.219a81110bf3fp-663, 0.0, 0x1.ef64a4036b93fp-824,
     0x1.f8d875da587dp-626, 0.0, 0.0, 0x1.e2c69c3d37aaap-562, 0.0, 0.0,
     0x1.3df1fdb79a3efp-759, 0.0, 0x1.1394c70d701c7p-821, 0.0, 0.0,
     0x1.0b8a0a7dc8de1p-716, 0x1.57315d365309p-574, 0x1.733a7c3ab566fp-270, 0.0, 0.0,
     0x1.4537b43b6958cp-428, 0.0, 0x1.90c08079fc825p-122, 0x1.398301987a505p-219,
     0x1.2594e834d8049p-780, 0.0, 0x1.067978d8a5dbdp-927, 0x1.a491cf797e7eep-716, 0.0,
     0x1.50e861fc2bfdap-66, 0x1.20fbd8cfeb521p-748, 0.0, 0.0, 0x1.dffee96cbbf9cp-982,
     0x1.ff11c23a5d75bp-303, 0.0, 0x1.e9acd7b907d99p-486, 0.0, 0.0, 0.0, 0.0,
     0x1.7893fb0463eecp-779, 0.0, 0.0, 0.0, 0x1.47fe5b48a53c5p-980,
     0x1.1d6de736ebbf5p-348, 0x1.bfd6ec9d2aba3p-341, 0.0, 0.0, 0x1.12e63a528f019p-232,
     0x1.28dfffbc6ce11p-688, 0.0, 0.0, 0.0, 0.0, 0x1.82b29e6773751p-377, 0.0,
     0x1.c2799c29e464p-466, 0.0, 0.0, 0x1.ae4d8da5668cdp-591, 0.0,
     0x1.55c5ec7e44709p-773, 0.0, 0x1.f8466d50a7da8p-329, 0.0, 0.0,
     0x1.b3bc480cbe64cp-110, 0x1.943dd044cebd9p-686, 0.0, 0.0, 0.0,
     0x1.88b6f5993bd9ap-102, 0.0, 0x1.a0ad614e3265dp-609, 0x1.be5e206192f56p-104, 0.0,
     0.0, 0x1.e560994dc6994p-675, 0x1.6d4ff5f9196fap-831, 0x1.96054d9eda965p-159,
     0x1.dd0309a9e466fp-817, 0.0, 0x1.c66770b190d2ap-925, 0x1.10badf81443ep-865,
     0x1.7fb44b3cc87f4p-1001, 0x1.9c56310ebfa4bp-245, 0x1.07f360d4b076ep-368, 0.0,
     0.0, 0x1.4460fbf9de6c5p-690, 0x1.8d92d9192e3c8p-417, 0x1.e27599ae73cb1p-460,
     0x1.cbed7bd19e587p-319, 0.0, 0x1.cda12191ce6ddp-398, 0x1.5a3cbc38dc747p-850,
     0x1.1cd95e1ae706dp-58, 0.0, 0x1.1802b4d6cf77ap-558, 0.0, 0x1.dfbea0c03b5d2p-250,
     0x1.358346fbbf54cp-555, 0.0, 0x1.3697ec1b21f78p-460, 0.0, 0.0, 0.0,
     0x1.15d54c5aa6232p-268, 0x1.e7f5845e57744p-771, 0x1.2e590e84d0613p-857, 0.0, 0.0,
     0x1.f198582954c3dp-130, 0.0, 0x1.ac2aa8ee2927p-18, 0x1.533084fd010a4p-971, 0.0,
     0x1.29df27c8b967dp-860, 0.0, 0x1.06a7f38323937p-990, 0x1.bf0d45af0d6f2p-91,
     0x1p0, 0x1.81f351b058659p-521, 0.0, 0x1.08fb2388661fbp-620, 0.0,
     0x1.d4a33c9672c85p-375, 0x1.8e69b77bd05bap-160, 0.0, 0.0, 0.0,
     0x1.c67c321f38996p-582, 0x1.f32d300e2751dp-816, 0x1.1463814e480dfp-77, 0.0,
     0x1.9ce51bd516ca6p-143, 0x1.c881a7bf722dbp-584, 0.0, 0x1.340c6f5e87727p-1004,
     0.0, 0x1.29a884806094bp-41, 0x1.47ca451906983p-1005, 0.0, 0.0, 0.0,
     0x1.df2948f8ee465p-877, 0.0, 0.0, 0x1.71aeabdf1ac34p-538, 0.0, 0.0, 0.0, 0.0,
     0x1.91557ebe8827ep-405, 0x1.698351918d596p-639, 0.0, 0x1.9c6d278533c84p-838, 0.0,
     0x1.6fb28a3e4b592p-298, 0x1.09f1e0546857fp-826, 0.0, 0x1.5e6fd83584065p-968,
     0x1.7014a82d9f8c5p-352, 0x1.fcb57171ce095p-169, 0x1.281338c7ca946p-892,
     0x1.e10a8a4db5ce6p-851, 0.0, 0.0, 0.0, 0x1.77db179db9bf7p-212,
     0x1.0dcdc4176ce55p-735, 0.0, 0.0, 0.0, 0.0, 0x1.6030215eab7dep-302,
     0x1.d51d92c4c274bp-962, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a3a3f5e22d42p-812,
     0x1.7c5e95fd596e8p-432, 0x1.6eeedde4c3b01p-992, 0x1.a19577e02f461p-537, 0.0, 0.0,
     0.0, 0.0, 0x1.f0ad44b214bcp-595, 0.0, 0x1.9a7cec8b335e5p-986, 0.0, 0.0,
     0x1.da4033b1eb836p-257, 0.0, 0x1.bd039d7794671p-836, 0.0, 0x1.b75e1b73c8175p-336,
     0.0, 0.0, 0x1.048943cfef988p-942, 0x1.4bdfc552e6f29p-879, 0.0,
     0x1.51be63e83134cp-1000, 0x1.c5a872e03c3d1p-446, 0x1.7e9ae91b93b44p-886, 0.0,
     0x1.fff3a3c036c45p-194, 0x1.cfa781a9572f5p-542, 0.0, 0x1.bddbca0131ea8p-416, 0.0,
     0x1.3ac675dc6bfeep-830, 0x1.0fc8aafbe7ca1p-90, 0.0, 0.0, 0x1.7c28ce75cafa1p-771,
     0.0, 0.0, 0.0, 0.0, 0x1.78c627774c179p-673, 0x1.2d196e0d0ffa7p-281, 0.0, 0.0,
     0.0, 0x1.99c5a9f37900ep-1011, 0.0, 0.0, 0x1.9a09711ed8c57p-701,
     0x1.8b8d2c3667b77p-639, 0.0, 0x1.1be3cad6f7cc9p-486, 0.0, 0.0,
     0x1.5e381703837ccp-129, 0x1.c6a746bda3b38p-1015, 0x1.0197d3750dadbp-540, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_sqrtd1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sqrtd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
