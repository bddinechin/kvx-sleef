/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_u35purecfma.c --function \
 *     Sleef_sqrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.3b81ea2638a08p-853, 0x1.186025bc21a1bp-120,
     0x1.70e1a9ba921fbp-165, 0.0, 0x1.5a1501ad8f848p-595, 0x1.0890558956766p-122,
     0x1.e8a4cda414aabp-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d5ec7293c4dap-107,
     0x1.ba80dc7e7cc01p-393, 0.0, 0x1.8bc0595a81a22p-545, 0x1.d5008361de818p-199,
     0x1.ba5f3c451abedp-64, 0x1.07dda9dbe0917p-272, 0.0, 0.0, 0x1.d137020bfb009p-370,
     0.0, 0.0, 0x1.b31763a06f04ep-181, 0x1.25ad4559287e1p-482, 0x1.d5aeba6e216c5p-174,
     0x1.ab8d78b859e91p-22, 0x1.56c5bef06df2ap-1002, 0.0, 0.0, 0.0,
     0x1.f96e45c1e09d6p-691, 0x1.203662dc94c2fp-502, 0.0, 0.0, 0x1.c94bd6d3fea92p-505,
     0.0, 0x1.b1ef23c10f718p-476, 0x1.51e127e564955p-136, 0x1.0f97ce83002a2p-214,
     0x1.7759937c06316p-142, 0x1.91ee82f5cd18cp-459, 0.0, 0x1.f07da75261368p-436,
     0x1.1e3b50078fab7p-171, 0x1.3afe6b5c9f07ap-574, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d5549bb3bc16dp-926, 0x1.7d2970703c76dp-201, 0.0, 0x1.56a980025fc35p-720,
     0x1.b17be8288d7a9p-620, 0.0, 0.0, 0.0, 0x1.0aa70eabe1b08p-838,
     0x1.c637575973841p-957, 0x1.4b041d4fe1a26p-798, 0.0, 0x1.af9673921e75p-661,
     0x1.d09466efae255p-110, 0x1.ff7fbc7c0b79ep-935, 0x1.f68074c4693fap-571, 0.0,
     0x1.9ebc662bbeb36p-494, 0.0, 0x1.18f7292241fcap-582, 0.0, 0x1.18c8b2b8e3b02p-176,
     0x1.e2722b765f07fp-131, 0x1.cb61ba98a71b2p-282, 0.0, 0.0, 0x1.8ce9ae5b9fcbbp-257,
     0x1.d863885207e44p-50, 0x1.4067822d06a9cp-768, 0x1.3125d4465f146p-305,
     0x1.fb86ee516379cp-306, 0x1.f572c7714c2a8p-683, 0.0, 0x1.6435e24aa71cap-791, 0.0,
     0x1.3a18f564693e5p-502, 0.0, 0x1.023918c39f252p-910, 0.0, 0x1.e146214e7e62ep-960,
     0.0, 0.0, 0.0, 0.0, 0x1.90da6219e33bdp-689, 0.0, 0x1.877f323dedfe2p-701, 0.0,
     0.0, 0.0, 0x1.60a366b333009p-546, 0.0, 0x1.a7291f449a22ap-70,
     0x1.c83a76090d979p-168, 0.0, 0.0, 0x1.1c2f2741f91fap-86, 0.0,
     0x1.1e4d8809ae07bp-458, 0.0, 0x1.20ff895dbf5d8p-428, 0x1.431acefd292d6p-331, 0.0,
     0.0, 0x1.47c28feaabe4p-769, 0x1.9ed8ba79b54p-619, 0.0, 0x1.fc38c5c5db8b2p-693,
     0x1.d980b7e6543d4p-604, 0.0, 0x1.d4df72ae60582p-17, 0x1.0a1d104855f28p-136, 0.0,
     0.0, 0x1.173b88dc02e1dp-84, 0x1.3854d4424eb1cp-786, 0x1.3135521b9326fp-11,
     0x1.fb5c885e9e322p-88, 0x1.89c2d0c335043p-767, 0.0, 0.0, 0x1.b336c05196264p-189,
     0x1.10c439224e5c9p-212, 0x1.5f2cc5443d733p-740, 0x1.06cbd87d77a2cp-180, 0.0,
     0x1.634d33123c4e1p-289, 0x1.c5738ee917b1bp-903, 0x1.8775d2e63bbffp-277, 0.0,
     0x1.c60c602a2c7e8p-343, 0.0, 0x1.74034248f21ebp-149, 0.0, 0.0,
     0x1.e377ace0e8995p-217, 0x1.5d551a390f429p-1006, 0.0, 0x1.b09f85f739382p-410,
     0x1.37440d7e568ap-458, 0.0, 0x1.c6ca14fa1e01cp-155, 0.0, 0x1.f8c523a4cda3cp-166,
     0x1.9af3ec8f9b6dfp-346, 0.0, 0x1.0f618948b7da7p-166, 0x1.804b51283f71cp-550, 0.0,
     0.0, 0.0, 0x1.8efd34d42fb5dp-321, 0x1.ac84e8f17ee19p-264, 0.0,
     0x1.78a018040eb9p-858, 0.0, 0.0, 0.0, 0x1.07fc6ea769767p-205,
     0x1.6b8a4a8692fe8p-924, 0.0, 0x1.cbac2ded5d0f1p-420, 0x1.bb9e48bdf2b86p-290, 0.0,
     0x1.c776b6ce97742p-694, 0.0, 0.0, 0.0, 0x1.a803d4213a65dp-1020,
     0x1.32f349c7b592ap-752, 0x1.e49fac38231p-588, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a629137565a45p-662, 0x1.9266850fa815p-359, 0x1.7ba6cc168a39ap-162,
     0x1.6e6cb25d915c8p-955, 0x1.ebc252c05ea64p-498, 0x1.da016e1dc30e8p-659,
     0x1.b2c7e5cea63a7p-721, 0.0, 0.0, 0.0, 0x1.12f369cbb7cb7p-584, 0.0,
     0x1.294c951c05bedp-994, 0x1.c7f9b1028147ep-774, 0.0, 0x1.c46b0f691c7adp-136, 0.0,
     0.0, 0x1.2eed7115acb56p-1, 0.0, 0x1.17e3936900136p-273, 0.0, 0.0, 0.0,
     0x1.02feb1cdb6a69p-259, 0.0, 0x1.1f6e02d949d95p-892, 0x1.2a9e23a571bbfp-13, 0.0,
     0.0, 0.0, 0x1.fd4ecd37932fp-923, 0.0, 0.0, 0.0, 0x1.a8558191bfbeap-863, 0.0,
     0x1.9c347388bdef3p-974, 0.0, 0.0, 0.0, 0x1.09bb79193b7eep-136,
     0x1.2f2f6c5ea61b4p-471, 0x1.9ec0ecf1291ecp-118, 0x1.ff1b4bcd8b7c1p-48, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.eddee0ca303efp-866, 0x1.531b9c0f03129p-608,
     0x1.c6b9441ea89p-726, 0x1.d6a2b73d327e3p-233, 0.0, 0x1.327632275c69fp-264,
     0x1.1c8e8cf491a0ap-807, 0x1.abc850a6b09f7p-320, 0.0, 0.0, 0.0,
     0x1.f7bc26b2d940ep-283, 0.0, 0.0, 0x1.a2da1cbe9e1e3p-980, 0.0,
     0x1.f85d10ec618a1p-508, 0.0, 0.0, 0.0, 0x1.fa244c19b6699p-3, 0.0, 0.0, 0.0, 0.0,
     0x1.2e27b96ac7d99p-611, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4f149fe03185p-545, 0.0,
     0x1.78e0911ee3393p-238, 0.0, 0.0, 0x1.d9bc7cfd3abdfp-5, 0x1.85f68de609c08p-639,
     0.0, 0x1.62634fb068d59p-369, 0.0, 0.0, 0.0, 0x1.477b7d12c8f5ep-664,
     0x1.92750dfba4429p-891, 0x1.79ab99626a257p-793, 0.0, 0.0, 0x1.396094b930744p-690,
     0x1.769b1b57f5d49p-56, 0x1.6a07f1222497bp-631, 0.0, 0x1.00905b551b756p-506, 0.0,
     0.0, 0x1.bcdab9485f65ep-624, 0.0, 0x1.a230a93b9b1c5p-862, 0.0, 0.0, 0.0, 0.0,
     0x1.5553671d72f33p-758, 0x1.fc8219a6236cap-842, 0x1.9accade2de17cp-875, 0.0, 0.0,
     0.0, 0x1.37a7d92914731p-950, 0.0, 0.0, 0.0, 0x1.9271a666e8f86p-751,
     0x1.f85b9cce3e448p-872, 0.0, 0.0, 0x1.df2931aead5fp-55, 0x1.486346ec1a5a4p-95,
     0x1.489685660d761p-778, 0x1.b01b9c93d01f8p-272, 0.0, 0x1.3c776321db8f5p-582,
     0x1.4f0470d8b594ap-404, 0x1.55c15342e8656p-420, 0.0, 0x1.7046c089c39b8p-665, 0.0,
     0x1.fc7f9f7f5834cp-79, 0x1.1276035e889ep-435, 0.0, 0x1.1b73efe4e4d0fp-381, 0.0,
     0.0, 0.0, 0x1.ee95bafd4b5bfp-379, 0.0, 0x1.496c69370302cp-133, 0.0, 0.0,
     0x1.5ab4aec42818dp-992, 0.0, 0x1.83790ae7866a9p-354, 0.0, 0x1.1c5dc4bc6565ap-691,
     0.0, 0x1.682937f7e2529p-935, 0.0, 0x1.2d385901466d5p-719, 0x1.7dbf86cde3e9ap-880,
     0x1.fdc71f6fed06dp-117, 0x1.4c9abd30f6d52p-881, 0x1.a692e4809239fp-703, 0.0,
     0x1.bcfecee859d96p-12, 0.0, 0x1.36c9f4a6b420cp-74, 0.0, 0.0,
     0x1.a346c344a3321p-120, 0.0, 0x1.4da35a1dcc53fp-118, 0x1.3df76d554b4fcp-1005,
     0x1.85fddc6327a0fp-400, 0x1.1329ecb1548ffp-362, 0x1.275ad8e8a3a68p-1014, 0.0,
     0x1.b57e2be74e265p-228, 0.0, 0x1.400ba88a6da25p-994, 0.0, 0.0, 0.0,
     0x1.e7fc4c75d6c69p-714, 0.0, 0x1.28ad1e72b4099p-310, 0.0, 0x1.31fd020d5e95ap-437,
     0x1.faf407a959f2cp-838, 0x1.0b51bf5e1706fp-733, 0.0, 0.0, 0.0,
     0x1.a46c65ee6938fp-58, 0x1.a59949725dadep-596, 0.0, 0.0, 0.0, 0.0,
     0x1.d49ff3fae6005p-685, 0.0, 0.0, 0x1.a4ab1443c6f2ap-595, 0x1.6d015e45b33cp-81,
     0x1.1ce2938d6d348p-908, 0.0, 0.0, 0.0, 0x1.e7fa463204e85p-387, 0.0,
     0x1.dba16c6514906p-344, 0.0, 0x1.b9316e1b09d17p-571, 0.0, 0.0,
     0x1.41ab46d84d66cp-460, 0.0, 0.0, 0x1.08e944c3bb1cep-682, 0.0,
     0x1.5d19719f781ap-903, 0.0, 0x1.b13cdf7cbf4b4p-616, 0x1.f490b0ec2c32ap-770,
     0x1.e1f30a4e790ebp-715, 0x1.437d171dbbb2dp-155, 0x1.3d6efa36b9f2fp-22,
     0x1.e41815db06c8cp-61, 0x1.e5e2fa260db5p-1002, 0x1.0697992fda89bp-670, 0.0, 0.0,
     0.0, 0x1.e3a134e8cad57p-896, 0.0, 0.0, 0.0, 0.0, 0x1.c23a10f849d9dp-267,
     0x1.d2f427cc00fa1p-312, 0x1.f0b0482f22622p-670, 0x1.25f5f356c1952p-927, 0.0,
     0x1.04c1eb3c3cb2bp-720, 0x1.883fc8073b5fcp-192, 0.0, 0x1.8f75762955f95p-655, 0.0,
     0.0, 0x1.e5c2e065ae60ap-761, 0.0, 0x1.da3078755b52ap-281, 0.0,
     0x1.ba26c9bb53aadp-620, 0x1.a4f494ffc235p-325, 0.0, 0.0, 0x1.a2c3a9b7a8326p-378,
     0x1.0be6fa8b88ddep-192, 0x1.4fd532b84bc13p-440, 0x1.051b66a71c7cdp-167, 0.0, 0.0,
     0x1.8e14c49eaca3fp-390, 0.0, 0.0, 0.0, 0.0, 0x1.623aff88ecc62p-466, 0.0, 0.0,
     0x1.61f4d141e7b04p-545, 0x1.35943cd1b0642p-659, 0x1.0abc6b116fa17p-686,
     0x1.dcefc212a1af3p-545, 0.0, 0.0, 0.0, 0.0, 0x1.2e7dc8103c714p-588, 0.0,
     0x1.692086cca758cp-400, 0x1.1a76bed19a8b5p-220, 0x1.460f9468fdd2p-929,
     0x1.fdf69abbda355p-467, 0x1.f93b2af787f58p-603, 0.0, 0.0, 0x1.26e1e5713c6dep-523,
     0x1.6b12e3fd4ed3bp-635, 0.0, 0.0, 0.0, 0x1.e9a4e589a2a62p-246,
     0x1.8580cfaa25ee5p-615, 0.0, 0.0, 0x1.0fc11aa84182cp-423, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1282b5e0ab3ecp-674, 0x1.e5d2d7b3cdfdap-63, 0.0, 0.0,
     0x1.8807f9277c58cp-519, 0x1.3998fb81dbb32p-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a368c5ad57863p-972, 0x1.bd53bea55111cp-638, 0x1.fb233031a1542p-16, 0.0,
     0x1.b84dbf228c4fap-745, 0x1.ab75dcbaf4f25p-242, 0x1.37dec6cbe2874p-775, 0.0, 0.0,
     0x1.a8bea7a3856c8p-284, 0.0, 0x1.56cbbad3c815fp-843, 0x1.8c6370ec6c936p-306, 0.0,
     0.0, 0x1.9b5644f7155c7p-28, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a6c6c88517eap-434, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6dd77fd1c905p-554, 0x1.b34e8d8caefeap-268, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44972cb9cfe6fp-724, 0x1.6f7a5e2186c29p-142,
     0x1.bbf94a1430157p-783, 0x1.61310f292646bp-454, 0x1.c2e7972f48f16p-117,
     0x1.49c8147958fcap-831, 0x1.7f4d2ac58d9e6p-98, 0.0, 0x1.532656593b164p-979, 0.0,
     0.0, 0x1.11c6e19e42993p-497, 0.0, 0.0, 0x1.f7f707c6465cdp-475, 0.0,
     0x1.e3e6191b0ee84p-619, 0x1.44d7c33ce9dc4p-268, 0.0, 0x1.fa2d3c17694cp-70,
     0x1.d5ddb7bc00858p-414, 0.0, 0x1.cd1a5f1d508b4p-424, 0x1.142bf03130de2p-232,
     0x1.31d51c85439f1p-214, 0x1.053f91169048p-43, 0x1.aec3ea03801d7p-637, 0.0, 0.0,
     0.0, 0.0, 0x1.3b871f0a3b35ep-837, 0x1.beb5fcc1a12f9p-43, 0x1.15ce1cbd83c05p-968,
     0.0, 0.0, 0x1.5d92393944db7p-560, 0x1.13b3a95011972p-71, 0.0,
     0x1.253a78114fff4p-352, 0.0, 0x1.7ef3c2d3643e3p-388, 0.0, 0x1.b1579bc54c82ep-446,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.682475a50b546p-113, 0.0,
     0x1.e4dc728d959a1p-94, 0x1.986ddd0a8addp-693, 0x1.944d28055852dp-41, 0.0, 0.0,
     0x1.371a7190b765ap-524, 0.0, 0x1.d7cbcf6b2f0c9p-145, 0.0, 0.0,
     0x1.0882208de278ep-317, 0x1.5c31e723685b3p-80, 0x1.0e19ea549eac2p-672,
     0x1.26840cb0310c3p-429, 0.0, 0x1.50636005c4626p-706, 0x1.c14a4674adf8p-99,
     0x1.1da9408d254dfp-685, 0x1.36b69c6a0bf2p-881, 0x1.ab5771ea24ea5p-1013,
     0x1.ad2a9317e6bf1p-1021, 0x1.32d7d93b9802ap-910, 0x1.95053e3bd82a6p-892,
     0x1.86b4f9c61b82ep-295, 0.0, 0.0, 0x1.d7e17d21f99f2p-542, 0.0, 0.0,
     0x1.6ca08cf9f2781p-639, 0x1.392ebdb31e80ep-877, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ca26d0424e34fp-883, 0.0, 0.0, 0x1.392e8b2708186p-805, 0.0, 0.0,
     0x1.11c6ff442c68bp-21, 0x1.c4aa25d9a1bcfp-417, 0x1.4a2eb28821dd1p-638,
     0x1.a19e09c8e78fep-346, 0x1.236f16759a1ep-896, 0.0, 0.0, 0x1.5e1f57a2c2b9p-837,
     0.0, 0x1.49500d09866e2p-769, 0x1.67003b019652fp-771, 0x1.42b778207b8aep-80, 0.0,
     0x1.28bf1aca6c90bp-380, 0x1.3035f6d619263p-134, 0x1.1661a279d3e1ap-529,
     0x1.94df199dd0533p-374, 0x1.e02bad4cdf90ep-838, 0x1.b7d087d8a12b6p-189,
     0x1.5fbbb55b4cddfp-845, 0.0, 0.0, 0.0, 0.0, 0x1.e2dea59e37f44p-582, 0.0, 0.0,
     0.0, 0x1.244d42d98e78cp-102, 0.0, 0x1.3f14d9f63972ep-234, 0x1.b561c827e491ep-26,
     0x1.3bf5066f99a3cp-49, 0x1.2177276d7310bp-738, 0x1.4bf10d77f4b0ep-250,
     0x1.a3dce9bed7498p-105, 0.0, 0.0, 0x1.f54ec6f04f359p-781, 0.0, 0.0,
     0x1.cba82ae4c585ep-397, 0x1.1015c005f763cp-156, 0x1.9d9c705f938cdp-949, 0.0,
     0x1.58cf4a8604959p-85, 0x1.4f1de461e59cp-767, 0x1.b340b635743ddp-449, 0.0, 0.0,
     0.0, 0.0, 0x1.b7d616786007ap-538, 0.0, 0.0, 0.0, 0x1.2327b369c7b4ap-596,
     0x1.902b15012b331p-1005, 0x1.8e95fe8ac5fa6p-533, 0x1.46f7c9df16c19p-945, 0.0,
     0x1.d9b249b5c2ee5p-68, 0.0, 0x1.450b88c60dee8p-502, 0.0, 0x1.c9c53b816d7ffp-532,
     0.0, 0.0, 0x1.fd2256d8785a2p-443, 0.0, 0.0, 0.0, 0.0, 0x1.ece816678ba5ap-822,
     0x1.acf5f682f6431p-859, 0x1.d1105b241a902p-40, 0.0, 0x1.6f54f7968a131p-759, 0.0,
     0.0, 0.0, 0.0, 0x1.d171b332cb5e7p-849, 0x1.ff060fd81114p-536, 0.0,
     0x1.e3fc0a5b815f6p-626, 0.0, 0.0, 0.0, 0.0, 0x1.f631c2067674fp-356,
     0x1.71ceedcf8839ap-843, 0x1.a454aeda9771ap-326, 0x1.e9a9001765a83p-202,
     0x1.010e376fab85ep-899, 0x1.9844949aeb2d4p-280, 0x1.a449f78103701p-283, 0.0,
     0x1.1c7d0bb0434fbp-318, 0.0, 0x1.08b0c0cd71a32p-828, 0.0, 0x1.018ac3a6f2e4p-26,
     0.0, 0x1.1d9cae586c809p-459, 0.0, 0.0, 0.0, 0x1.8ae9f2f165ed9p-916,
     0x1.b376e057a1dbbp-60, 0.0, 0.0, 0.0, 0x1.988e6a7654d2ep-127,
     0x1.492f358eb6dabp-80, 0.0, 0.0, 0.0, 0.0, 0x1.73eb8e6460262p-390,
     0x1.4583cda08f828p-590, 0x1.601e90b042c6dp-421, 0.0, 0.0, 0.0,
     0x1.c93613045ad4fp-189, 0x1.11472d2b063fep-856, 0x1.d88970c0e422ep-645, 0.0,
     0x1.ccf813633a6c4p-626, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de62da5b0e96dp-649,
     0x1.03da9e530313ap-917, 0.0, 0.0, 0x1.24a33b8f42413p-614, 0x1.7d8fd03842bfep-345,
     0x1.c0ae1c3f9ea45p-484, 0.0, 0.0, 0.0, 0x1.2744e68561f86p-802, 0.0, 0.0,
     0x1.bd5f1e4140a02p-818, 0.0, 0x1.dab1c7838ad19p-212, 0.0, 0.0,
     0x1.271dc6978149dp-649, 0.0, 0.0, 0.0, 0.0, 0x1.73086950dd05p-620,
     0x1.f94519307e5a1p-967, 0x1.3ff1cd691f99dp-648, 0.0, 0.0, 0x1.27fbd6701bd1ap-474,
     0x1.08f0f942fa23cp-813, 0x1.ac197e711f882p-536, 0x1.c5dfc17d8def5p-807,
     0x1.834728718a4a3p-982, 0x1.84bac0e7770b3p-137, 0x1.142f4dbe2e2edp-560,
     0x1.3d32a110b1d61p-903, 0x1.df057cbfda944p-928, 0x1.1d673c33ca195p-305,
     0x1.946f43b59d3bp-611, 0.0, 0x1.b1f5ea2e8e3d1p-131, 0.0, 0.0, 0.0,
     0x1.cedb1f0e203ap-120, 0x1.c744e5e037fecp-933, 0x1.15c7d59e09b2fp-760, 0.0, 0.0,
     0x1.fed74c3758dcfp-140, 0x1.c8865db1510ap-397, 0x1.a49e4f7506f2ap-474,
     0x1.8418f86b87664p-143, 0x1.fed156710fcaep-738, 0.0, 0x1.0e6e29399e423p-605,
     0x1.7a9f57898cb34p-109, 0x1.2348285fb5d11p-279, 0.0, 0.0, 0x1.c3dd9569340f2p-175,
     0.0, 0x1.c72b82897295cp-48, 0.0, 0x1.97791845b1062p-251, 0.0, 0.0, 0.0,
     0x1.2723f3ec03b77p-569, 0.0, 0.0, 0x1.ffc2dd9de09dp-113, 0.0, 0.0,
     0x1.b374d47c313c5p-540, 0x1.1c6ed84653f1dp-451, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c69314246f86p-449, 0.0, 0.0, 0.0, 0x1.0e02fa3e99361p-75, 0.0,
     0x1.76cda4eaa60f7p-469, 0.0, 0x1.fc786c3f86b74p-736, 0.0, 0x1.502281cdc969cp-438,
     0.0, 0x1.2df19d1ecc423p-464, 0.0, 0.0, 0.0, 0x1.a498a2c040219p-27, 0.0, 0.0,
     0x1.cf55d86a439e7p-386, 0x1.a62b070616e76p-935, 0x1.632796372eeabp-407, 0.0, 0.0,
     0x1.d0f7bcb70a621p-944, 0x1.3a49c1cac99c3p-238, 0.0, 0.0, 0x1.e0fd1e085b801p-616,
     0.0, 0x1.bb9e648be326cp-810, 0.0, 0x1.03ea2c0ea22cbp-122, 0.0, 0.0,
     0x1.cee5c098e8595p-408, 0.0, 0.0, 0x1.cffcf78eedea2p-97, 0.0, 0.0,
     0x1.297af75c3c432p-70, 0.0, 0x1.38c975346703cp-370, 0.0, 0.0,
     0x1.64358b1c8bc7fp-696, 0.0, 0x1.362b0af181d3fp-829, 0.0, 0x1.d707a4398ce0cp-288,
     0x1.5b576de0252f2p-1013, 0.0, 0.0, 0.0, 0x1.f47a1e6f77d4ep-584,
     0x1.8968bfb30d166p-803, 0x1.0ab4b23c1fe34p-202, 0x1.9c7df3b4f161ep-584,
     0x1.52894bce96385p-466, 0.0, 0.0, 0x1.f4c6f87b2fb7bp-877, 0.0,
     0x1.8cad6164e6215p-107, 0x1.05710c65b8efbp-320, 0.0, 0.0, 0.0, 0.0,
     0x1.1ea2bf563e80dp-133, 0x1.e069bb81e952p-961, 0x1.01a6aea426914p-536, 0.0,
     0x1.24d26b0644a14p-133, 0x1.f1f00516ea569p-905, 0x1.1291742d1f5e1p-890, 0.0, 0.0,
     0.0, 0x1.a66f5472939e6p-502, 0x1.abffa7afe961ep-968, 0.0, 0.0,
     0x1.dd51daddbe7cp-61, 0.0, 0x1.dd8db2f9cd82p-158, 0x1.35fbf8c8703d5p-202,
     0x1.e9809a424823bp-608, 0x1.1f370eb4f0cf9p-107, 0x1.2759cca325bfap-690,
     0x1.ee77b38b6cddp-479, 0.0, 0x1.eefc5e9592ff6p-199, 0x1.a3499b39d084p-675, 0.0,
     0x1.05be0b559038cp-725, 0.0, 0x1.906b5bfe818bp-29, 0.0, 0.0, 0.0,
     0x1.4b075a2d66853p-141, 0.0, 0.0, 0.0, 0x1.a4e57e4e3895fp-674, 0.0, 0.0,
     0x1.e286c54ff2bc2p-178, 0.0, 0.0, 0.0, 0x1.0b8ae3505d771p-946, 0.0,
     0x1.47d2133e412a4p-724, 0x1.5038447c91152p-254, 0x1.795d033aff8b3p-474,
     0x1.d9c70eb333816p-1011, 0.0, 0.0, 0.0, 0x1.0fd5b91cdbecap-409, 0.0, 0.0,
     0x1.959dc2cf1e1b4p-316, 0x1.e309bbe142fcbp-1021, 0.0, 0.0, 0.0,
     0x1.46f9aee30c63fp-735, 0.0, 0.0, 0.0, 0x1.06ae6543dbdd9p-930, 0.0, 0.0, 0.0,
     0.0, 0x1.4338ac928e769p-392, 0.0
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
    printf("Sleef_sqrtd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
