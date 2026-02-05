/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd2_u35avx2128.c --function Sleef_tanhd2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.b8fa21ccc2e67p-468, 0x1.cf83a39b94474p-860, 0x1.322315915ec66p-654, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ca356aed585c7p-886, 0.0, 0.0, 0x1.08616077b9056p-338,
     0x1.bad7c1edb257bp-495, 0x1.51e05fd7f6e6fp-382, 0.0, 0.0, 0.0, 0.0,
     0x1.eac0522ae4f34p-175, 0x1.9dbcca6e7cad4p-444, 0x1.74e5a76e11d0fp-504, 0.0, 0.0,
     0.0, 0.0, 0x1.44e459272fc34p-564, 0x1.6a787d5dffa21p-134, 0.0, 0.0,
     0x1.3e20ed0f5ea86p-71, 0x1.a2a9770deb677p-307, 0x1.b98b4afe509c3p-830,
     0x1.ab55546791eb4p-457, 0.0, 0x1.a2cfb79aeda38p-202, 0.0, 0x1.83b7ab5ec140ap-480,
     0x1.12adf27ec2137p-796, 0x1.77b936e0e986fp-208, 0.0, 0x1.e1684a6c668c4p-447,
     0x1.73b273dbd2e74p-724, 0x1.c07617af6bf71p-926, 0x1.e2b39800c2e37p-539,
     0x1.dea115dd2cb1ep-969, 0x1.7a3bbf6d54716p-273, 0x1.175e4fd36c882p-750, 0.0,
     0x1.f50ff027ab57bp-888, 0x1.7a68ce66b12e9p-290, 0.0, 0x1.5d3bb0d2f5438p-447,
     0x1.c9e9ed3509b9ap-506, 0.0, 0.0, 0.0, 0.0, 0x1.7bf0300a83b32p-46, 0.0, 0.0,
     0x1.0b535c3be2b86p-266, 0.0, 0x1.8bfbe7b07f12ap-347, 0x1.dc5f9cfedb8b6p-278, 0.0,
     0x1.29a5b22a5e189p-998, 0x1.e250e8a00cfedp-413, 0.0, 0x1.99bbbaadeff7ap-126,
     0x1.b7b22059cf5afp-464, 0.0, 0x1.645b13d41fcdp-566, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cea597f25ed38p-639, 0.0, 0x1.2de0b78af00b2p-976, 0.0, 0x1.28bc7c91c4ff2p-758,
     0.0, 0x1.33fce7087282p-854, 0.0, 0x1.8ffe2ed07d42ep-50, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e135fc88e8f1fp-351, 0.0, 0x1.f20f3b7449f69p-887,
     0x1.0233ea9bd538fp-50, 0x1.e49d3f3cc0529p-161, 0.0, 0.0, 0x1.8d876df2fbb7p-404,
     0x1.87259ca49051cp-502, 0x1.b1c8b26be6fd4p-328, 0x1.8f12943740303p-280,
     0x1.5a22f7163dfc6p-807, 0x1.d1811d384d733p-702, 0.0, 0x1.5c25115ff3a9ap-171,
     0x1.26dba4a969dcdp-161, 0.0, 0.0, 0.0, 0x1.c357885e921e1p-827,
     0x1.48c9a3ac978d5p-144, 0.0, 0x1.b79da5a18234dp-217, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d1924a8814c9fp-800, 0.0, 0.0, 0x1.7efef23769256p-12,
     0x1.671a0a1bfd573p-136, 0x1.4c0ffd6f6317bp-639, 0x1.0a2e48d129ceap-297, 0.0, 0.0,
     0.0, 0x1.066b4f6199955p-96, 0x1.96d63b2aaf582p-878, 0.0, 0.0,
     0x1.8d2f2cf2ba9b8p-29, 0x1.d9d222e11fae1p-566, 0x1.a952cc23fb98cp-564,
     0x1.b8c83164ecc7dp-952, 0x1.ddc590c16534cp-764, 0.0, 0x1.7a8de513027a2p-988, 0.0,
     0.0, 0x1.46c27aedc3922p-732, 0x1.b120e7fffd43cp-583, 0x1.7148795ac231ep-372,
     0x1.a3499c467d257p-929, 0x1.9b1325600b6c1p-515, 0x1.35119c6334e49p-485, 0.0, 0.0,
     0x1.407f97ecbb9dfp-403, 0.0, 0.0, 0x1.545e5e549da64p-132, 0x1.4bff24c322b7p-9,
     0x1.a5942c490f49p-523, 0x1.3bebe203ad4bep-632, 0x1.8607378eab602p-37, 0.0, 0.0,
     0x1.06d39f5ef265ep-27, 0.0, 0.0, 0x1.dd1de0fec6108p-465, 0.0,
     0x1.3ad9f7dc4c61cp-411, 0.0, 0x1.fae2cb3bb1b57p-202, 0.0, 0x1.8f4c288449e3dp-115,
     0x1.13151ee32dd82p-452, 0x1.e7b6c7d051e3ep-577, 0x1.16fde066de85cp-159, 0.0, 0.0,
     0x1.dd903efdea257p-340, 0.0, 0x1.e821fd230422fp-3, 0.0, 0.0,
     0x1.032374b4164d1p-892, 0x1.2553efeec5537p-644, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f381fe032d624p-800, 0x1.aeeaa53b5528ep-466, 0.0, 0x1.e0c0456eb17d9p-1,
     0x1.e23f0f13882efp-432, 0.0, 0.0, 0x1.c4456401c2f9cp-122, 0x1.53bb000ea68d2p-506,
     0x1.9dd3800b3e792p-468, 0x1.ecdf1afe6a423p-606, 0x1.a9323323032dp-843,
     0x1.d837abf7b8efp-286, 0.0, 0.0, 0x1.234f396266ee4p-735, 0.0, 0.0, 0.0, 0.0,
     0x1.bd4bf105678e7p-204, 0.0, 0x1.5c673ec971728p-368, 0.0, 0x1.802e2e88e033ep-812,
     0.0, 0x1.9352011055208p-474, 0x1.17d60dfc1be6cp-165, 0x1.94e8f85b1b03p-717,
     0x1.048a9a9f64403p-474, 0x1.0d5d8ebbc622cp-884, 0.0, 0.0, 0.0,
     0x1.afa111c3ac451p-580, 0.0, 0x1.531d0dc0f6ecdp-632, 0.0, 0x1.da5427d5cd3b8p-117,
     0.0, 0x1.50b4003a5904ap-668, 0.0, 0.0, 0.0, 0x1.610460d085372p-1, 0.0,
     0x1.c41a8709ce87cp-285, 0.0, 0.0, 0.0, 0.0, 0x1.6144d0d609e36p-632, 0.0, 0.0,
     0x1.72669572b5624p-866, 0x1.096940e6a09aep-125, 0x1.19e1e49583462p-466,
     0x1.28ba5103be8dfp-862, 0.0, 0.0, 0.0, 0x1.3a4ddc32f1da2p-903, 0.0,
     0x1.c8d9dea4b2fcep-982, 0.0, 0.0, 0x1.12abf59d0d2c7p-374, 0.0,
     0x1.07b046d4e445cp-359, 0x1.650929d8e096cp-84, 0.0, 0x1.c6de72f500758p-281, 0.0,
     0.0, 0.0, 0.0, 0x1.c8f9f22c33e44p-123, 0.0, 0.0, 0x1.c5853ecaf2f16p-242, 0.0,
     0x1.e23ef4e9eeeccp-975, 0.0, 0x1.87f3bba67c84bp-904, 0.0, 0.0, 0.0,
     0x1.7e68d65cfcdap-468, 0.0, 0x1.2db86a781ecb9p-352, 0x1.47e6e64d1bea7p-58,
     0x1.ed030e82e4769p-497, 0.0, 0x1.926717523a7bp-435, 0x1.34b1fcc81a8adp-205,
     0x1.8ecd17e116f16p-21, 0.0, 0x1.80f9f2056d4f4p-556, 0x1.378853f02a18ap-576, 0.0,
     0.0, 0.0, 0x1.1218292b4da3cp-989, 0x1.dbe5a51ba0f6fp-607, 0.0,
     0x1.4c8ace3aed344p-1001, 0x1.00fff710562c8p-92, 0.0, 0x1.18951ec3a0d1p-6, 0.0,
     0.0, 0.0, 0x1.7c30c78c8b12dp-696, 0.0, 0x1.eb10b5769479dp-776,
     0x1.94fb1545f0811p-56, 0.0, 0.0, 0.0, 0.0, 0x1.b5a26375effe4p-922,
     0x1.c5b632438d07ap-104, 0x1.1416396710759p-821, 0x1.76c5b14349f08p-816,
     0x1.1d46f2f770e01p-345, 0.0, 0x1.573806de60e09p-777, 0x1.d49daa0cd845dp-871, 0.0,
     0x1.0c3f2e9012bf1p-872, 0x1.d359bf03c5655p-181, 0.0, 0x1.2274b2e9875bbp-235, 0.0,
     0.0, 0.0, 0.0, 0x1.55e4d2f1f9533p-32, 0x1.3f3605e90e517p-111,
     0x1.60b106d6ed75p-571, 0.0, 0.0, 0x1.0677d73941ab2p-839, 0.0, 0.0, 0.0,
     0x1.2abd5a3f9951ap-674, 0.0, 0x1.fb9fafca4e835p-268, 0x1.370e374fd0af9p-332, 0.0,
     0.0, 0.0, 0x1.f35f05a8196eep-802, 0x1.36d7d4d7f6784p-288, 0.0,
     0x1.01e0241720305p-851, 0x1.f8b3f322b343p-866, 0.0, 0.0, 0x1.00a1418d8fae9p-206,
     0.0, 0.0, 0.0, 0x1.db7a1f2935d34p-890, 0.0, 0.0, 0.0, 0x1.6bb84df39c6c2p-289,
     0x1.3b51cd2b929p-201, 0.0, 0.0, 0.0, 0x1.e5552e07ea299p-911, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b738c5551571ep-220, 0x1.37ea15672af01p-777, 0x1.033e2bd268587p-916,
     0x1.419493d60ffccp-55, 0x1.6a5a7620df194p-475, 0.0, 0.0, 0x1.d774762737906p-43,
     0x1.1cf9c71170dep-785, 0x1.f330b5d2004adp-326, 0x1.03821a8c7bc7ep-799, 0.0,
     0x1.7c6dfcaa29c42p-936, 0.0, 0x1.f2a94eaeeaa61p-155, 0x1.4ab32f1fc92e9p-716,
     0x1.af75e6349edb4p-394, 0x1.377aa92304f6ep-770, 0x1.f88ffc10b18f9p-522,
     0x1.4cfaa4be2ad3ap-406, 0.0, 0.0, 0x1.750a85358ef96p-280, 0.0, 0.0, 0.0, 0.0,
     0x1.b589d3bbf279p-20, 0.0, 0x1.839b27388357cp-476, 0x1.0ef08b943c7aep-849,
     0x1.447ebf10bfc22p-693, 0.0, 0.0, 0.0, 0x1.4e8ab82791d75p-522, 0.0,
     0x1.cae3258a7b77ap-246, 0.0, 0.0, 0.0, 0.0, 0x1.4e4b8fb2086ffp-310, 0.0, 0.0,
     0.0, 0.0, 0x1.c0de1188c3136p-238, 0.0, 0.0, 0x1.3a403bece7abp-664,
     0x1.680e1a0873f43p-396, 0x1.e4c72db718588p-269, 0.0, 0x1.e9695a9221cddp-553, 0.0,
     0x1.83551421d3029p-47, 0.0, 0x1.4410a79c2d255p-676, 0.0, 0.0,
     0x1.5633388838f55p-922, 0x1.7534ae7f6cc56p-765, 0x1.55e0d4058da4bp-492,
     0x1.de43ea195cac5p-494, 0.0, 0x1.2299a07558046p-768, 0x1.b64656b609fdap-100, 0.0,
     0.0, 0x1.4a9f03bf1197dp-31, 0x1.fbc4220525b7cp-418, 0.0, 0x1.4e8b907f4663dp-537,
     0.0, 0.0, 0x1.121d611d4f674p-980, 0x1.371e6e76db818p-732, 0x1.570be8130031ep-118,
     0x1.e575777d0f0d6p-734, 0x1.2e5bcf59e723cp-373, 0x1.89f73c81a1609p-587,
     0x1.f74da61094998p-911, 0x1.b6d052c2f7683p-612, 0x1.6c2c1991df4ccp-631, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.359b88b94ccddp-509, 0.0, 0x1.24a58bb045662p-1002,
     0.0, 0x1.e9e38f355ac16p-523, 0.0, 0x1.5b37021f08ce8p-164, 0.0,
     0x1.b7f6ef617fda4p-967, 0.0, 0x1.da1bbfe72119fp-390, 0x1.3fa5c6057380bp-507, 0.0,
     0x1.354e3803b67f8p-354, 0.0, 0x1.2a2fbf546e9d2p-375, 0.0, 0x1.985fe57174cffp-369,
     0.0, 0.0, 0.0, 0x1.719e1ec3d683p-279, 0.0, 0x1.6c8681f8aa2f9p-242, 0.0,
     0x1.7b483868f8f31p-588, 0.0, 0x1.1f135ef41e05bp-464, 0x1.537a12c9642edp-841, 0.0,
     0.0, 0.0, 0x1.49a28e7fc4d38p-245, 0x1.192aff6dd5644p-717, 0x1.5999600ad7f7bp-566,
     0x1.0d239f893b781p-437, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57dde75651315p-702,
     0.0, 0.0, 0.0, 0.0, 0x1.40e83b0b456e6p-293, 0.0, 0.0, 0x1.527d309c958c7p-47, 0.0,
     0x1.a420baff23c02p-120, 0.0, 0x1.91d218e2ccf29p-260, 0.0, 0.0,
     0x1.b44c9836a6362p-99, 0x1.44a62ef3e8d87p-920, 0.0, 0x1.b0bad9b0420dap-1016,
     0x1.752073a0163d3p-429, 0x1.5016d108f5f0dp-820, 0x1.ddd1ceb39d5eap-347, 0.0,
     0x1.686feef1ec37ap-221, 0x1.48cfec1b23244p-97, 0x1.6b4ac9495715ep-792, 0.0, 0.0,
     0x1.6a126ce8eff3p-196, 0x1.42d236300485ap-679, 0.0, 0x1.5120c79bb227dp-494,
     0x1.96c9adbdf5cc4p-378, 0.0, 0.0, 0.0, 0x1.ea8064fc6994ep-892, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.44f0035624a81p-492, 0.0, 0.0, 0.0, 0x1.819648c5ccbf9p-893,
     0x1.6adf22146f621p-3, 0x1.ef9e8b4d02cfbp-788, 0x1.301428a8d14b1p-33, 0.0,
     0x1.6201694b044edp-57, 0.0, 0x1.a680e96b5e876p-227, 0.0, 0x1.45b47f7f5dea4p-638,
     0.0, 0.0, 0.0, 0x1.37d1e1e5233cep-745, 0x1.cee445129382ap-325, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a31df4c7aa6cp-581, 0x1.2fddeecd6d5a1p-824, 0.0, 0.0,
     0x1.a740ebb9f0118p-887, 0.0, 0x1.a65f4d0a9bc55p-542, 0.0, 0.0, 0.0,
     0x1.ee79e95d3cf36p-61, 0x1.fee593f4c645p-708, 0x1.7ec26747bfabp-253, 0.0,
     0x1.1875657b3ab9fp-385, 0x1.91314a16afb0ap-1017, 0.0, 0x1.cbf2d5ee973ffp-686,
     0x1.7c4b5f9b4d69cp-576, 0x1.8b722fa1e3c9bp-297, 0x1.57102d0ce162bp-185, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4fb0764291a8ap-928, 0.0, 0.0, 0x1.c981ebfa04d63p-747, 0.0,
     0x1.4c2fff9f3ee5fp-330, 0x1.5813aca0c776fp-970, 0x1.c026440f34185p-788,
     0x1.44a74dc27faefp-161, 0x1.853c69748713cp-285, 0x1.3d7ee858e8425p-272, 0.0,
     0x1.ce7cb47a70ffep-401, 0.0, 0.0, 0x1.ee12512192d94p-390, 0.0, 0.0,
     0x1.bf53b15dcf17p-280, 0x1.91759d67d0725p-1007, 0x1.833140b0cc89p-505,
     0x1.ea63b01b97e25p-975, 0x1.d12a5c1b7395dp-592, 0x1.67da2b9cb7ab5p-228,
     0x1.7333b5ac0bbeap-62, 0x1.a29e10707332bp-999, 0.0, 0.0, 0x1.3f3f471cfb3d6p-412,
     0x1.c6463c4df347dp-1005, 0.0, 0.0, 0x1.e1c17848e47b9p-186,
     0x1.734725b708e7ep-782, 0.0, 0x1.ff78754470719p-586, 0x1.2ba1aa3ce01f1p-815,
     0x1.2738ff20df578p-160, 0x1.7ab3f4d305dd8p-380, 0x1.4998924aede2p-158, 0.0, 0.0,
     0x1.d0b2505aac7dcp-659, 0.0, 0.0, 0.0, 0x1.594bdf6e6c7dap-327, 0.0, 0.0, 0.0,
     0x1.2b05603bf4a3p-636, 0x1.1b914085334e2p-602, 0x1.7cbae53544f47p-203,
     0x1.9983684b51bfp-923, 0.0, 0x1.0c48960d7a604p-198, 0.0, 0x1.ff8e8ce00a789p-445,
     0.0, 0x1.c98e2b13d7547p-910, 0x1.25a19eeb75827p-479, 0.0, 0x1.4fbb90eac3833p-752,
     0x1.fd61b5c6f2a8cp-775, 0x1.d4ba071c56565p-468, 0.0, 0x1.b50ac971a410cp-272, 0.0,
     0x1.4d00565d27565p-652, 0x1.2ae6f11f2ab32p-296, 0.0, 0x1.9a2f8c2344d71p-338, 0.0,
     0x1.5dc9603f86b8dp-486, 0x1.26be68562e06fp-465, 0.0, 0x1.23ecd5e7103cp-474, 0.0,
     0.0, 0.0, 0.0, 0x1.29f88a35095efp-793, 0.0, 0x1.a6c8b958000c1p-411,
     0x1.9b9bb4260f021p-885, 0x1.916a57ed2ee8ap-638, 0x1.6460a329f147dp-407,
     0x1.89420f27b0c9fp-19, 0x1.ae8c034462084p-330, 0x1.f018ef4638787p-81, 0.0, 0.0,
     0x1.1049941aad587p-442, 0x1.f32f48bac3d3bp-9, 0.0, 0x1.5c39182f2f74fp-283, 0.0,
     0x1.77069863d8edbp-703, 0x1.9c097b9a8f48bp-226, 0.0, 0.0, 0.0,
     0x1.755c6ebc83d1cp-268, 0x1.e1344fe79249ap-835, 0x1.aa53a519a3f3cp-908, 0.0, 0.0,
     0x1.c1568fdd20addp-533, 0x1.1c860ff0eae18p-675, 0.0, 0x1.0c31dd993659dp-567,
     0x1.5d8ac1d92e932p-407, 0.0, 0.0, 0.0, 0x1.dd9223e2e0096p-512,
     0x1.dfb313efb6b92p-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29f30b062fdeap-786,
     0x1.cbb8662bdaeebp-841, 0x1.fde33159fd849p-151, 0.0, 0.0, 0x1.5ed3d1ad465b9p-500,
     0x1.e422ba1dc5228p-827, 0.0, 0x1.b6136b3ea52f4p-667, 0x1.99ee9919de4dfp-861,
     0x1.343966ad26adfp-1003, 0.0, 0x1.93ed3079a61d1p-725, 0.0,
     0x1.72b2afd73f878p-235, 0.0, 0x1.6338f2c608f5bp-619, 0x1.c8cfa03d7c8aap-857,
     0x1.6fb44cf47e727p-722, 0x1.12715b853828ep-381, 0.0, 0.0, 0x1.8f0974e97b94cp-946,
     0.0, 0.0, 0x1.f2729bc7f7945p-241, 0x1.07e3df0da5d8dp-553, 0x1.86c5cb0e7f629p-76,
     0.0, 0x1.ac1575fc4a366p-568, 0x1.5effee93662d8p-344, 0.0, 0x1.93709c520313cp-355,
     0x1.e4fa9dca0428bp-249, 0x1.d4b9706654cb4p-484, 0.0, 0.0, 0x1.1ed2ab2bded4dp-284,
     0.0, 0.0, 0x1.5061fdefda753p-218, 0x1.2bbe87c12aac2p-133, 0x1.ebf022100b185p-384,
     0.0, 0.0, 0.0, 0.0, 0x1.1d7bcb797e62ap-510, 0.0, 0.0, 0.0, 0x1.e88808c96dc05p-6,
     0.0, 0.0, 0.0, 0x1.3617f3736525dp-1007, 0.0, 0.0, 0x1.d56611badedb9p-244,
     0x1.1370ca4a92e2fp-473, 0x1.c5e6b06c95939p-244, 0.0, 0.0, 0x1.a4c8e69f935ccp-280,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb390a54b1ed4p-914, 0x1.a9767a0de2d28p-837,
     0x1.e3c53b75a1f63p-627, 0.0, 0x1.2ed8ea99eafe9p-420, 0x1.1ea33e119ee5ep-379,
     0x1.ce50f883367f2p-150, 0.0, 0x1.a5447c71efb9ap-191, 0x1.9c89d79f149e1p-451,
     0x1.05c574331832dp-913, 0x1.14ce5b183127dp-681, 0.0, 0x1.9249903bc411bp-526,
     0x1.9ed0a75fa9a72p-50, 0x1.32dfee3adf9cep-698, 0.0, 0x1.a696ece9639dp-214, 0.0,
     0x1.b49e9cec50836p-454, 0x1.d40290560b036p-568, 0.0, 0x1.8191c98a09e43p-107,
     0x1.9e8df86de48abp-384, 0.0, 0x1.d93c431d77d68p-172, 0.0, 0.0,
     0x1.ff956b103afb8p-877, 0.0, 0x1.db0795fd4d594p-631, 0.0, 0.0, 0.0,
     0x1.302df1e7f9fb7p-441, 0x1.b4168907b42e5p-444, 0.0, 0x1.974ac52802a81p-893,
     0x1.8156eebb0feb6p-674, 0.0, 0.0, 0x1.b46ce79d5d7ep-332, 0.0, 0.0,
     0x1.52b1959b96851p-189, 0x1.505aefadfe98dp-571, 0x1.363115ef5ee26p-265, 0.0,
     0x1.09f9812da94b1p-469, 0x1.a4beec59a57fp-352, 0.0, 0x1.8d8c07c34fb39p-826,
     0x1.d56c4f9a53552p-407, 0.0, 0.0, 0x1.6cb6dbbd51dbep-956, 0x1.ff7439a17d464p-360,
     0.0, 0x1.76535a1b464b9p-208, 0x1.9a0634ec7389dp-665, 0.0, 0x1.08fa78486a598p-606,
     0.0, 0x1.b8028527fb04p-712, 0x1.b1f943bb87df2p-315, 0x1.0818051145cafp-821,
     0x1.df762868416b2p-764, 0.0, 0x1.2fac9d7807edap-143, 0x1.50b7e72bbd78fp-531, 0.0,
     0x1.b086f38f7f107p-613, 0.0, 0x1.0a615202d6697p-451, 0.0, 0x1.0a176ec848adfp-143,
     0.0, 0.0, 0x1.1980594c0bab8p-237, 0.0, 0.0, 0x1.dc9ae1331ac06p-56, 0.0, 0.0,
     0x1.45354837f8274p-459, 0.0, 0x1.6b25f42df2b2cp-464, 0.0, 0x1.e39ea2421265cp-662,
     0.0, 0.0, 0x1.d932457760b6ep-210, 0.0, 0.0, 0x1.ceccb999baf61p-327, 0.0, 0.0,
     0x1.27464c75a170bp-94, 0.0, 0.0, 0x1.049813f356d3fp-501, 0.0, 0.0,
     0x1.1116b9e920804p-627, 0.0, 0.0, 0.0, 0.0, 0x1.d5db91f5e954bp-823,
     0x1.334177ed84f33p-324, 0.0, 0.0, 0.0, 0.0, 0x1.b39d8ecb79c5bp-121, 0.0, 0.0,
     0.0, 0x1.2efa2015c716p-763, 0.0, 0.0, 0x1.987c9444446a1p-126, 0.0,
     0x1.944ec5dc9a347p-995, 0.0, 0x1.0426589e5ef9ap-217, 0x1.2f1879ae9fa5fp-52,
     0x1.e23301ac43a26p-532, 0.0, 0x1.0dfcaeff04bccp-695, 0x1.d1b52e9e96f17p-855, 0.0,
     0.0, 0x1.d09b21080be64p-453, 0.0, 0x1.32df46008fc4ep-1018,
     0x1.d7255c8561d9ep-121, 0.0, 0x1.558fa0f4ac257p-755, 0.0, 0x1.cf5c45cbe91c1p-705,
     0x1.1d2be01dc2e93p-38, 0x1.c95e0d7886506p-627, 0x1.fda422ebf4143p-123,
     0x1.7f38443bf09e8p-681, 0.0, 0.0, 0x1.4f90a6f59ff5ap-945, 0.0, 0.0, 0.0, 0.0,
     0x1.e49971e8cc393p-225, 0x1.ce60dd9cf953cp-879, 0.0, 0.0, 0x1.2c7d1d15a0497p-135,
     0.0, 0x1.3f717c2f427ap-760, 0x1.56fca378dace4p-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3fea28a8513ddp-21, 0.0, 0x1.2f77ade3114cep-869, 0.0, 0.0,
     0x1.224116373a97ap-506, 0x1.10c165454ba7p-449, 0x1.7c1fd8f997394p-835, 0.0, 0.0,
     0x1.f4e1aca0e0b1cp-851, 0.0, 0.0, 0x1.fc6460a67f87dp-601, 0x1.ea14099d3fa08p-548,
     0x1.96933973cabe2p-1011, 0x1.5cc44f595c877p-137, 0x1.b19eccc2bb3a4p-275, 0.0,
     0x1.ce5a2f41bcfb1p-963, 0x1.b895fb1feea9cp-815, 0x1.5d19cf7183a6fp-538,
     0x1.56c050b1632abp-888, 0.0, 0x1.dd39dffde233ap-101, 0.0, 0.0, 0.0, 0.0,
     0x1.e7cc1ded768c1p-788, 0x1.dbb8b49c70ca5p-905, 0.0, 0x1.3e9bd0d7d541fp-407,
     0x1.e03709712970cp-372, 0.0, 0.0, 0x1.ea93fee1a1858p-207, 0.0, 0.0,
     0x1.cee6c4267e397p-652, 0x1.0d0567952bfd9p-464, 0.0, 0x1.ab4ff3df37a84p-998
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_tanhd2_u35avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_tanhd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tanhd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
