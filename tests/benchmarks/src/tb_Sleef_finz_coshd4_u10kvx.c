/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd4_u10kvx.c --function \
 *     Sleef_finz_coshd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.e74162a9d335dp-366, 0.0, 0.0, 0.0, 0x1.f02ff74fdbee4p-874, 0.0, 0.0,
     0x1.1388d0098ccb6p-587, 0.0, 0x1.abac30858a218p-892, 0.0, 0.0,
     0x1.269446d7b80fap-756, 0.0, 0.0, 0.0, 0.0, 0x1.727ddf750edd8p-490,
     0x1.9653be8ab44f2p-800, 0x1.6917e90cc3c8ep-850, 0.0, 0x1.8fa35b8e79766p-745,
     0x1.b088e50243d86p-377, 0.0, 0x1.ff8fdc866fa4ep-127, 0.0, 0.0,
     0x1.3b188b769ea9p-343, 0.0, 0.0, 0x1.c3ffcec829533p-138, 0x1.0fd7d5250f56ep-512,
     0x1.2fc0748c2fde1p-259, 0.0, 0x1.ccbfa2ca7883p-638, 0x1.38729bf806944p-794, 0.0,
     0.0, 0x1.338a5e42badf7p-125, 0.0, 0x1.48fcdd000b093p-792, 0x1.eac4ec6d4de8cp-128,
     0.0, 0x1.a384bf30c578ep-796, 0x1.912c47b90e994p-384, 0.0, 0x1.482170606811bp-437,
     0x1.27bd890447618p-452, 0x1.d003011107adp-551, 0x1.47af2d33be63p-389,
     0x1.77b721cc58b06p-152, 0.0, 0x1.fc09b1d57ee7dp-479, 0x1.b856c3c22f208p-573, 0.0,
     0x1.89e0130d14168p-976, 0.0, 0.0, 0.0, 0x1.bff8054954ffcp-1001,
     0x1.e3a20575574c1p-523, 0.0, 0x1.f9785186feb4ep-899, 0x1.0ba48b879407fp-398,
     0x1.3e2087c27c01p-964, 0.0, 0.0, 0x1.1da652fbd7d6bp-307, 0.0,
     0x1.37c0ab8f43bebp-315, 0x1.251583ce05a3dp-650, 0x1.52c3d861ccd6ep-205,
     0x1.114465b90f0fap-160, 0x1.20b1d46a52432p-352, 0x1.6c6df07311d26p-779, 0.0, 0.0,
     0x1.1f1fad1da1252p-500, 0x1.0dbb7e13886b3p-32, 0x1.f4078cb959e3ap-864, 0.0, 0.0,
     0x1.a9a743ef10f37p-414, 0x1.95c59f0b94bdcp-1015, 0x1.ae1b24610823dp-667,
     0x1.3c6a966da757ap-486, 0.0, 0x1.e7ba9d39fdac8p-890, 0.0, 0x1.996aa799ed609p-835,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7881c6c842526p-682, 0x1.721c461cbf9c6p-688,
     0x1.aa2b2eeb27824p-841, 0x1.563623c46bbb3p-688, 0.0, 0.0, 0.0, 0.0,
     0x1.e6487f850da42p-260, 0.0, 0x1.fdb7d2e9284f3p-941, 0x1.03fa0c43013b5p-940, 0.0,
     0x1.db5e53c5ba731p-705, 0.0, 0.0, 0.0, 0.0, 0x1.09fd6b94632dp-506,
     0x1.da32b06d05128p-763, 0x1.54163e482bac9p-115, 0x1.3100e8573f67ap-151, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.44603cb0233f7p-874, 0x1.8bf49a4499e6ap-321,
     0x1.8d2875124defep-717, 0.0, 0x1.fb349c756b77dp-618, 0.0, 0x1.8e4448e2c53a5p-166,
     0x1p0, 0x1.9f57f1a6914cbp-301, 0x1.5b58dab34efcbp-804, 0x1.2e008947a5299p-191,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.577bf660a314p-976, 0x1.7d73eb7273a86p-433,
     0x1.60e0afef4aefp-140, 0.0, 0x1.9ee0a3b6a7089p-103, 0.0, 0x1.111807513f632p-296,
     0.0, 0x1.9ec4f2ab64baep-750, 0x1.c0ad2adf663c4p-390, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4d618ca39b072p-857, 0x1.5947732e1a35p-503, 0x1.37e68b5721b0dp-200,
     0x1.bcd5116dc78a9p-171, 0x1.bfb17d7073d35p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8405053487d0dp-583, 0x1.567f97b4dd3eep-602, 0x1.30563ec591131p-563, 0.0, 0.0,
     0x1.0c600c504356dp-577, 0.0, 0.0, 0x1.06c529133f307p-951, 0x1.903c816baf8dfp-78,
     0x1.253c27c53ae58p-172, 0.0, 0x1.dca4243c75b71p-61, 0.0, 0x1.194b7f19d974ep-990,
     0.0, 0.0, 0.0, 0x1.b58c4416eaff1p-1020, 0.0, 0x1.c0cf8f35fa38ep-935, 0.0, 0.0,
     0.0, 0x1.9114c016fce1fp-299, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39f443f2df741p-322,
     0x1.30e5c04fbb0b8p-761, 0x1.7616312b4119ap-709, 0.0, 0x1.3cc80158d09b8p-493,
     0x1.ff1c0ab99e8ddp-422, 0x1.b744767e4e9a4p-165, 0.0, 0x1.e8b2fcf1a9fbfp-905, 0.0,
     0x1.8f55cc8f94b0ap-782, 0.0, 0x1.355020f05f4a5p-689, 0x1.0742fe0891898p-306,
     0x1.8961e3d7cdabcp-884, 0.0, 0x1.a10131525ecbfp-251, 0.0, 0.0,
     0x1.e8fb605c6ef8p-431, 0x1.3f8a517cd2fc7p-432, 0x1.f5b69548cc14p-948, 0.0, 0.0,
     0.0, 0x1.37b540ccf2ce7p-797, 0x1.0fdc32493cf82p-860, 0.0, 0.0, 0.0,
     0x1.dda6c1c34ad6bp-303, 0x1.fe38efdefd193p-521, 0x1.146349fbf4582p-971,
     0x1.13f109bfc06p-407, 0.0, 0.0, 0x1.a1a59e0bd4d82p-780, 0x1.dbca18ed3a12cp-759,
     0x1.0ae7d2b1df82ep-400, 0x1.8ac93a57db5fcp-199, 0.0, 0x1.627663f830f83p-412,
     0x1.53898177c3ed3p-898, 0x1.db2e088c8dc15p-658, 0x1.7e7e77d53db31p-716, 0.0,
     0x1.9cc993c42b96bp-350, 0x1.9ee181c5253fdp-637, 0.0, 0.0, 0.0,
     0x1.1acec381a2aebp-95, 0x1.b8034208e2aa5p-256, 0.0, 0x1.cc46a282927d3p-317, 0.0,
     0x1.92c08e9cb41aap-212, 0.0, 0x1.51b1ca2057c29p-963, 0x1.6420f6e87ed47p-98,
     0x1.3aa5b84e4e51bp-807, 0x1.55ed090fe0d2fp-197, 0.0, 0x1.f36bc7e44f985p-763, 0.0,
     0.0, 0x1.cd233c54f10f6p-468, 0.0, 0x1.cac8524bf7f01p-695, 0.0,
     0x1.cf4650b144395p-601, 0x1.3881244117dcp-344, 0x1.5043ebe2341cfp-188, 0.0,
     0x1.143899b300d9fp-230, 0x1.f1d2782248263p-288, 0x1.f40658b352968p-870, 0.0,
     0x1.c29f93e32bfcp-906, 0.0, 0.0, 0.0, 0x1.b7d2d6f9883b1p-613,
     0x1.40290c6fa9544p-281, 0x1.2f86fc70cec65p-82, 0.0, 0x1.b155751713382p-220, 0.0,
     0.0, 0x1.adf17b85f82fcp-570, 0x1.189148b55ffd4p-173, 0.0, 0.0, 0.0, 0.0,
     0x1.0440c6f181fe5p-582, 0x1.1ca7f2cfa9069p-1016, 0x1.5fe9e5bca1ae5p-637, 0.0,
     0x1.4107cb57afd54p-525, 0.0, 0x1.356ba532145c2p-618, 0x1.30d4f11c8e18bp-952,
     0x1.155d44f8dd81bp-482, 0.0, 0.0, 0x1.4165f4fcbaf11p-712, 0.0,
     0x1.a7ca307e78bd2p-664, 0.0, 0x1.93cb57d539979p-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.7af89ffc9e81fp-995, 0x1.2ffea6b2b7a05p-701, 0x1.57070558f1563p-141,
     0x1.0d5cf63dab2d5p-656, 0.0, 0x1.7e8620d6da869p-437, 0x1.a8208c6f9e0d6p-178, 0.0,
     0.0, 0.0, 0x1.1b830cdf3a6c9p-163, 0.0, 0.0, 0.0, 0x1.792969037b7ffp-801,
     0x1.f6c03e3535e5bp-887, 0x1.f8b5af11e32ep-616, 0.0, 0x1.ae6f3b40018cap-41, 0.0,
     0.0, 0.0, 0.0, 0x1.16ed0f28dbabdp-868, 0x1.8632d8bd2d4e2p-574,
     0x1.d59efc191ed03p-224, 0x1.d0992a7a7f3fdp-809, 0x1.6054a9ef766d1p-920,
     0x1.fb3964a54e098p-711, 0.0, 0.0, 0.0, 0x1.d006a40be8715p-252, 0.0, 0.0, 0.0,
     0.0, 0x1.1f174a3f8d7ebp-373, 0x1.7bd06e79b46dap-574, 0.0, 0.0,
     0x1.573f5f1b729edp-651, 0x1.cac92f761f57fp-802, 0.0, 0x1.9d18298db69dep-908,
     0x1.c748b6cc96468p-423, 0x1.8ad14bda30047p-939, 0x1.9d16724d7465ap-601,
     0x1.862370df30d24p-253, 0x1.3d54f3b61556bp-294, 0x1.d3edb0563bff3p-96,
     0x1.e071492930b67p-366, 0.0, 0.0, 0x1.2fac555a1abb3p-68, 0x1.9f2ba4ad40c36p-13,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f250bbc11171p-744, 0.0,
     0x1.a3e6058f1ca2ep-1015, 0x1.d29133e362421p-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ef80fc12a6bb7p-909, 0x1.14d4194de32ap-369, 0.0, 0x1.c263763c5f57bp-567,
     0.0, 0.0, 0x1.c14ab4c865fcfp-606, 0x1.6f4c231ca3ddfp-583, 0x1.ed2d0740ac5d4p-584,
     0x1.7112181d09c8ap-900, 0x1.c0c26cbdb172p-143, 0.0, 0.0, 0.0,
     0x1.e0c0193627ec9p-926, 0.0, 0x1.132461721fb55p-226, 0.0, 0x1.b84828949871dp-741,
     0.0, 0x1.1749c8db42c95p-561, 0.0, 0.0, 0.0, 0x1.79d5d779ea09dp-820, 0.0,
     0x1.ebc9eac7fbb8dp-488, 0.0, 0x1.9b31c280fdc92p-380, 0x1.17665f9680c98p-577, 0.0,
     0.0, 0x1.8109eb4bd53b6p-895, 0x1.d88f6ea0203b2p-358, 0x1.4a62b8cba2c15p-813,
     0x1.39cd51356c881p-303, 0.0, 0x1.cff4898610e54p-1013, 0x1.73d05bab02d54p-8,
     0x1.1ea8451bfaa85p-168, 0x1.8cebd3cbeb5d4p-924, 0x1.dc1552ec13a16p-808,
     0x1.3b730be6c6ee2p-233, 0x1.9ff83a288a0dfp-285, 0.0, 0.0, 0x1.4f851d97546c6p-543,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.966148150d148p-937, 0.0, 0.0, 0x1.0910006b2216p-859,
     0x1.2ebe50245de24p-720, 0.0, 0x1.625c7d62a83bp-994, 0x1.c6f15012cd1f2p-447,
     0x1.550e82381e12dp-347, 0.0, 0x1.2f1b43e87f948p-402, 0.0, 0.0, 0.0,
     0x1.d91b8529a90c5p-177, 0x1.aa3d64a67ec92p-996, 0.0, 0.0, 0x1.3f9d7a0f07bc3p-400,
     0x1.81ea9d8b151aep-655, 0x1.25d49fd97f9afp-632, 0.0, 0x1.fbe453eca28f9p-634,
     0x1.95b8818f41b6ep-362, 0x1.68ce16d1a2e81p-695, 0.0, 0x1.3bfac3f475785p-943,
     0x1.45b21528fe379p-780, 0x1.04c021edc2dbp-809, 0x1.23738bc89c64fp-704,
     0x1.e23b312c645d3p-17, 0.0, 0x1.39e2f9397c40ap-899, 0.0, 0.0,
     0x1.505b0dab5e8c1p-543, 0x1.dc95cb520da3ap-381, 0x1.294a3c53dc6bbp-2,
     0x1.0537d7ee8b5dcp-917, 0x1.2c648f3b7e5edp-611, 0x1.f09804b2ae4eep-882,
     0x1.b24142bad5787p-324, 0.0, 0x1.e4a23e62e9a0ap-752, 0.0, 0.0,
     0x1.40bef42136454p-917, 0x1.9a2aa2e84a0d2p-630, 0x1.3c4564d0a15adp-914, 0.0, 0.0,
     0x1.afde6768c6d0ap-688, 0.0, 0x1.6e1eebeb2c6cap-804, 0x1.85d89c1902194p-545, 0.0,
     0x1.3db0095aceac1p-37, 0x1.eae2587d8a3a8p-493, 0.0, 0.0, 0.0,
     0x1.cfe423c8b2505p-622, 0x1.a32387741ab8dp-670, 0x1.16d6f4a36da1bp-783,
     0x1.8c048d6a6eb4dp-569, 0.0, 0.0, 0x1.d7e2ec6ff01d2p-399, 0.0, 0.0,
     0x1.cf7cdb96d1bep-166, 0.0, 0x1.3d42c95f1a8f2p-440, 0x1.7ea6f3d4652ddp-595,
     0x1.7c6792f778f2ap-781, 0x1.1e245c21ad1a5p-403, 0x1.48c3fb51c38a5p-452, 0.0,
     0x1.589fab7c74153p-828, 0x1.f2bdbe4c711b5p-728, 0x1.d974d760232cp-795,
     0x1.b497ca7972004p-117, 0x1.03486d324b35ap-1010, 0.0, 0.0, 0.0,
     0x1.30dcc209bd302p-844, 0x1.028035ee851ddp-387, 0.0, 0.0, 0x1.9c38673a657aep-44,
     0x1.aa56b63150ccfp-703, 0x1.3f2669bdeead4p-12, 0.0, 0x1.40d876ce8b701p-249, 0.0,
     0x1.3a943018bb124p-334, 0.0, 0x1.e8e0d91c6c27ap-754, 0.0, 0x1.56b6efc24de1p-689,
     0x1.c379ede162801p-647, 0x1.19c2bb6de0911p-710, 0x1.f5fb944fb380fp-360,
     0x1.4b7572a4f90cp-35, 0x1.7ca55f02a911ep-971, 0x1.f6f8794c60dd6p-884, 0.0, 0.0,
     0.0, 0x1.0af5d277b6f26p-796, 0x1.14474ad903133p-420, 0x1.c365c555673cdp-119, 0.0,
     0.0, 0x1.bcc17c951d039p-779, 0.0, 0x1.a56ca24c55a87p-559, 0.0,
     0x1.e56b59a2f9de1p-359, 0x1.f60ce9f454fdbp-701, 0.0, 0x1.4706c8cc5039cp-407,
     0x1.1a4b24a8f1146p-993, 0.0, 0x1.e364350465dcdp-901, 0x1.e3a87a181ce1cp-960, 0.0,
     0.0, 0x1.18433b4e7ffaep-851, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b6c824585a6fp-382,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ced3b89e3748p-580, 0x1.d612ee5ba31aep-110,
     0.0, 0.0, 0x1.cf49d3b436daap-653, 0.0, 0x1.676e0e7cbe2ep-357,
     0x1.ad6b45da0103p-551, 0.0, 0.0, 0x1.b467ce54fe73ep-238, 0x1.19dd2cb6e882ep-264,
     0x1.5063d04001f68p-548, 0.0, 0.0, 0.0, 0x1.77bd9a329ae08p-495,
     0x1.2252d6f62f68p-225, 0.0, 0.0, 0x1.56c9f3fc66b5cp-236, 0.0,
     0x1.05ab13ada1245p-411, 0x1.e4d3e45ddb7b8p-357, 0x1.c8c5bd9bf43aap-606,
     0x1.24d7f1d2c9df2p-53, 0x1.c510c3baa71e3p-381, 0.0, 0.0, 0x1.e05b480ea71ddp-449,
     0x1.430a2b9a70576p-692, 0x1.b5777119aa165p-496, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.048d8258c921ep-741, 0.0, 0x1.4f18f8c9382b6p-347, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65a100113b591p-726, 0.0, 0x1.52801c97865f1p-364,
     0x1.716b7c393648bp-371, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eac8c963e7597p-1015,
     0x1.d26c919dc77f7p-537, 0x1.98929c3c34975p-155, 0.0, 0x1.66dbdd7e4e0fap-405,
     0x1.386c2ba316b1ap-830, 0x1.0a1d240658b9fp-765, 0.0, 0x1.1655f8732ec99p-645, 0.0,
     0.0, 0.0, 0.0, 0x1.357d7c6b844fdp-928, 0x1.11b3e3ec3238ep-607, 0.0,
     0x1.681c6e363c052p-897, 0x1.7f16942a11644p-758, 0.0, 0x1.02c1470d074cbp-945, 0.0,
     0.0, 0x1.cd461713fd7b3p-257, 0x1.03f6d4f157d7p-945, 0x1.d6fe9ade8dbd3p-233,
     0x1.8ca91cf7b2d4p-79, 0x1.734cc11cbbdedp-156, 0x1.050343fa91b45p-955, 0.0,
     0x1.dc2216d1a56afp-915, 0.0, 0.0, 0x1.c7bdc78e75ae8p-789, 0.0, 0.0,
     0x1.a13d76b565e43p-628, 0x1.362c900db3658p-650, 0x1.a2ec1f2dfa3b8p-729, 0.0,
     0x1.9e595ca9ffdb5p-939, 0x1.e5e8c773ee14ep-473, 0x1.56527bab36713p-255,
     0x1.ef0d0e2113b9ep-481, 0x1.c28f6f3488fb2p-823, 0x1.0c4e1e221f14fp-621,
     0x1.59e83728ffb5p-478, 0x1.6097a35af148fp-809, 0x1.7eb56e4cc5448p-78, 0.0, 0.0,
     0x1.107c9cc022268p-310, 0x1.1de3b037e2f67p-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.311414ec58ed9p-863, 0x1.f53b877dfeff9p-417, 0x1.5bc0e98cf2bedp-64, 0.0, 0.0,
     0x1.1cffece2233ddp-911, 0.0, 0.0, 0.0, 0x1.341d7def949cp-185, 0.0,
     0x1.c0727d22f37c7p-34, 0.0, 0.0, 0.0, 0x1.cd5c1177c196p-535,
     0x1.95e2702366d34p-839, 0.0, 0x1.370704f475996p-703, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07e3ec4ff2fcbp-742, 0.0, 0.0, 0.0,
     0x1.6d060b28e980cp-38, 0x1.21e9b9d197ef8p-351, 0x1.88c69c414afadp-807,
     0x1.8d9bbc64eeee4p-73, 0x1.5c359dfc206b8p-259, 0x1.1d6df116ae8eap-498,
     0x1.6ff09be4e0222p-645, 0x1.fbd2932fc5dp-1009, 0.0, 0x1.aac3a5c79671p-18, 0.0,
     0x1.f60d2822cca9cp-665, 0.0, 0x1.0a2cf28caa7c5p-620, 0x1.55e6e8237e286p-294, 0.0,
     0.0, 0x1.8cf90a6754f17p-861, 0.0, 0x1.fe6fd4edd9699p-289, 0x1.67548e6541aap-990,
     0x1.1fb1fcb9b1aadp-65, 0.0, 0.0, 0x1.b9049c725a714p-525, 0x1.eca70cc660a47p-134,
     0x1.8b62e7e987e6ep-746, 0.0, 0x1.39ee5709a1cfap-252, 0x1.2f178df2cf3e3p-103,
     0x1.7f8f28b0a87e7p-644, 0x1.203ac13123162p-416, 0.0, 0x1.fb69c3520ced5p-514,
     0x1.0fb16276ba906p-462, 0x1.5ceca1e3a696p-962, 0.0, 0x1.dee016f93cedep-480, 0.0,
     0x1.d531a0399afd2p-143, 0.0, 0x1.0abbdaf0959b5p-56, 0x1.b957128164a74p-479,
     0x1.7ec42e7fc3d86p-648, 0.0, 0x1.3b75630bb4fd3p-441, 0x1.18004ebf8b4e7p-335, 0.0,
     0x1.d44115dd8c31bp-377, 0x1.c4d395e56fa87p-1005, 0x1.41130b4ca162fp-260, 0.0,
     0x1.70dc79fa73d19p-645, 0x1.07f1510f16533p-1009, 0x1.a6b8a30f1db5dp-507, 0.0,
     0x1.b4624d0e70234p-166, 0.0, 0x1.a5fc9a439917fp-944, 0.0, 0x1.2843f11c23986p-728,
     0.0, 0.0, 0x1.b217876003315p-333, 0.0, 0.0, 0x1.8b61f53498bfp-414, 0.0, 0.0,
     0x1.9ba9744e908bep-321, 0.0, 0x1.2ecbf80ff1959p-272, 0x1.91523b3093262p-984,
     0x1.060a3fe22a67cp-660, 0.0, 0x1.0e03bafac4565p-312, 0x1.f74e090222e2ep-492, 0.0,
     0.0, 0x1.cca1843b05573p-878, 0.0, 0.0, 0x1.455ab2a8e6568p-581,
     0x1.efb731987b321p-830, 0x1.fc9ab04888ab5p-143, 0x1.b75659842994bp-38,
     0x1.95a37bf2af06fp-234, 0.0, 0x1.7980896a17df1p-79, 0x1.9f3ba35f3aac3p-45, 0.0,
     0.0, 0x1.8aa72a46873f6p-130, 0x1.8f7bbd64bf432p-767, 0x1.4e5d428155f13p-819,
     0x1.a1f358b4f4748p-499, 0x1.f75e0d78ea22bp-675, 0.0, 0.0, 0x1.de6a0ac2ea8ecp-407,
     0x1.a47f041fe084ep-90, 0x1.8533129801decp-589, 0x1.8469341562b51p-522,
     0x1.6b65ac8ed4ba6p-579, 0.0, 0.0, 0.0, 0.0, 0x1.31508d29d4cbp-182, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c0cc10f1f9b0fp-913, 0x1.95b4c4c989b95p-124, 0.0, 0.0, 0.0,
     0x1.d52b1939536d7p-776, 0x1.a609bc99b8b1dp-587, 0x1.f20706548a4e3p-173, 0.0,
     0x1.b3f2f2a247b8p-197, 0x1.9bfc6763a661ep-958, 0.0, 0x1.123166d41d9bfp-296, 0.0,
     0.0, 0x1.5f60d1ffa6f85p-836, 0x1.79294ef43e82bp-6, 0.0, 0.0, 0.0,
     0x1.edddfdf8ada7dp-674, 0.0, 0x1.63e665b14a56bp-882, 0.0, 0.0, 0.0, 0.0,
     0x1.4b99d80fa8b08p-815, 0.0, 0.0, 0x1.bbc0d392549fbp-784, 0.0,
     0x1.f6270b167eb4p-551, 0x1.08e07d632db08p-282, 0x1.8c8141df69067p-953, 0.0, 0.0,
     0x1.09abf3278a69p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4335387f14402p-488, 0.0,
     0x1.6e09b9c9e1eaep-32, 0x1.25839490a9038p-237, 0x1.f519856b095b3p-193, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.24a6f23b7e802p-922, 0.0, 0x1.bfde456fb4a3fp-173,
     0x1.1081f27105b38p-467, 0.0, 0.0, 0.0, 0.0, 0x1.e8380bf043453p-996, 0.0, 0.0,
     0.0, 0.0, 0x1.927fead7c4a65p-880, 0x1.381e741583d21p-37, 0.0,
     0x1.4eca09fff33fep-838, 0.0, 0.0, 0.0, 0.0, 0x1.6ccff679b0312p-1013,
     0x1.315ae5e6b952fp-127, 0.0, 0.0, 0.0, 0x1.bff355ffe59b3p-181, 0.0,
     0x1.9102446efc8c6p-249, 0.0, 0x1.9371618745eb5p-687, 0x1.f61022f91d5d1p-155,
     0x1.b6bf456eabe91p-837, 0x1.a8c878e4e5feep-107, 0x1.e80cb40721e3ep-268, 0.0, 0.0,
     0.0, 0.0, 0x1.3565c80ceefb2p-104, 0.0, 0x1.fca110fbfa93ep-343,
     0x1.c0791df0b1ed7p-558, 0.0, 0x1.cbe38f48927eap-210, 0x1.b39d5d8247741p-73,
     0x1.4c7acd61e14fep-511, 0.0, 0.0, 0.0, 0x1.c3b4488ddc9b8p-578,
     0x1.a50b525d8bdap-368, 0x1.042f47d631c0fp-444, 0.0, 0.0, 0x1.ca023c08cdd13p-436,
     0.0, 0x1.33eec001acbep-747, 0x1.b5299184cc6f9p-424, 0.0, 0x1.7302e22522647p-808,
     0.0, 0x1.ca63c0226eb51p-584, 0.0, 0x1.14839e2390f5cp-770, 0.0, 0.0,
     0x1.ceaddef197fbcp-227, 0.0, 0.0, 0x1.42091e7556d9ap-294, 0.0,
     0x1.9842e127c3ccep-410, 0.0, 0x1.5c3c95a971666p-659, 0.0, 0.0, 0.0,
     0x1.47e99258367dfp-957, 0.0, 0x1.7642ed8c61d9fp-235, 0.0, 0x1.5c9b0c7924aa3p-322,
     0x1.0ea16bbf0246cp-63, 0x1.e64c5b7af5101p-795, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.069cf8cb66d58p-9, 0.0, 0x1.04b9f6b2e2457p-380, 0.0, 0.0, 0.0,
     0x1.7ab5ca8e594cap-370, 0.0, 0x1.37734b6b555a4p-972, 0x1.c87e99efc6d6ap-679, 0.0,
     0x1.745b948314243p-498, 0x1.e0901001821eep-421, 0x1.a4de16525d346p-247, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_coshd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_coshd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_coshd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
