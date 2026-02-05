/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd4_u10kvx.c --function Sleef_finz_cosd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.e7b37cfc7913fp-280, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6585cd7b90664p-227, 0x1.57edbe3716f37p-801, 0.0, 0.0, 0x1.6ee4c6e841e72p-113,
     0x1.06054ee80c363p-365, 0x1.98c505de130cfp-814, 0x1.84fea07b9d502p-634, 0.0,
     0x1.0c82f8f647aa5p-509, 0x1.61d70d90fa042p-714, 0x1.44cc7e09a756dp-49, 0.0, 0.0,
     0.0, 0x1.240736bf0c33ap-261, 0x1.a52a81fe7b2dfp-155, 0x1.be97e3db568b9p-162,
     0x1.edef8b9c92a97p-449, 0x1.c0528aac77117p-926, 0x1.18fa0470cde4ep-1013, 0.0,
     0.0, 0x1.2913efd2e75f3p-5, 0x1.6f61b5267e063p-114, 0.0, 0x1.31ffc393a3c06p-986,
     0.0, 0.0, 0x1.ad44e46fdbabcp-311, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.29205bc80c679p-572, 0.0, 0.0, 0x1.3fc4a55bde6cfp-445, 0.0,
     0x1.b88e6528d191fp-895, 0.0, 0.0, 0x1.434b87258fe9ap-190, 0x1.3305b801ca446p-354,
     0.0, 0x1.12367a54d7effp-686, 0.0, 0x1.105ea3fb3d12cp-425, 0.0,
     0x1.fcc93ef61ad0bp-585, 0.0, 0x1.b82a749cf662cp-607, 0x1.6d7c8c6d40a54p-445,
     0x1.2e1421087347ap-566, 0.0, 0x1.fb6207c382539p-659, 0x1.703e9e6b9aec3p-551,
     0x1.782d397ad7a0cp-482, 0.0, 0.0, 0x1.ae5d2ffaed975p-436, 0x1.7f8c6b0f71354p-173,
     0.0, 0.0, 0x1.346d9f910aa93p-12, 0.0, 0.0, 0x1.4aaf3cdc02031p-922, 0.0, 0.0, 0.0,
     0x1.bd55f91d4e037p-965, 0.0, 0.0, 0.0, 0x1.1eec700ec335ap-395, 0.0, 0.0,
     0x1.a2b53233cf3f9p-728, 0.0, 0x1.b406d932bb66ap-231, 0x1.f8573f8c45d3fp-683, 0.0,
     0x1.6c7a16978c31ep-217, 0.0, 0x1.3143270d6d367p-217, 0.0, 0.0,
     0x1.cba77095c902dp-243, 0.0, 0x1.dba435a47ab1dp-42, 0x1.cbaecc03d7e35p-889,
     0x1.e89a477b22fdbp-632, 0x1.c478983432fc6p-819, 0.0, 0x1.f650119ae2038p-934,
     0x1.97feb5c62c10cp-885, 0x1.83c6f8a492955p-983, 0x1.eb4f9a177030fp-275,
     0x1.c049a38f94c0ap-444, 0.0, 0x1.fb34628de7f8dp-545, 0.0, 0.0,
     0x1.bcb4b93d05724p-393, 0x1.7cc3c441c29b6p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.17fe9737ca8c7p-237, 0x1.182fdb0256627p-66, 0.0, 0x1.9ccb06a592cf9p-624,
     0x1.1c8e4caf128aep-322, 0.0, 0.0, 0x1.7e39460bf3fddp-764, 0.0, 0.0,
     0x1.110fa50408024p-655, 0x1.91cf1168a2b08p-857, 0x1.05b345d037027p-892, 0.0, 0.0,
     0x1.86a1463b0c898p-951, 0.0, 0x1.b0ba0c33f3568p-200, 0x1.87519cd43b952p-292,
     0x1.c8ae69232a80bp-457, 0.0, 0x1.257b8ffb66e1bp-298, 0.0, 0.0,
     0x1.fe0b539fd0bdfp-554, 0x1.3ebb48145c95ep-484, 0x1.8c3f3bc842288p-884, 0.0, 0.0,
     0.0, 0x1.66e7fa860a327p-31, 0x1.49b2291c18a17p-847, 0.0, 0.0,
     0x1.a40b41c465ec3p-494, 0x1.99e3a75807bbep-749, 0x1.3dd5cb7fbf865p-280, 0.0,
     0x1.76114f27f32c3p-141, 0x1.64f0d04299857p-536, 0.0, 0.0, 0.0,
     0x1.e5a6261f0fe6ap-340, 0x1.49e6953a74e0cp-31, 0.0, 0.0, 0.0,
     0x1.418bcf90544p-114, 0x1.ac7d72162d4ffp-531, 0x1.9721a7286e99fp-335,
     0x1.f2dc26d989df3p-301, 0x1.4e37a616a3ed7p-681, 0.0, 0.0, 0x1.c679ce1dec678p-444,
     0.0, 0x1.4ac99aaca5269p-258, 0x1.11bfd1be41416p-49, 0x1.a8cd3b0456724p-677, 0.0,
     0.0, 0.0, 0.0, 0x1.fe2cee2c42dfep-772, 0x1.30ce59592f217p-759, 0.0,
     0x1.1194e64c0f898p-795, 0x1.e05f7c2faa827p-117, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.972334a3211a9p-622, 0x1.9106ccd803a32p-651, 0x1.96e9c2c5e8207p-451,
     0x1.eb17e4a354111p-977, 0x1.b5395c52fced5p-180, 0x1.0281744b84dc8p-812, 0.0,
     0x1.7a3a3f86f3635p-134, 0x1.788a0d516933bp-858, 0.0, 0.0, 0.0, 0.0,
     0x1.e874d638e8bdap-379, 0.0, 0x1.de7c2c7436e17p-766, 0x1.ecf24842dbe38p-139,
     0x1.80a44365a05aep-877, 0.0, 0.0, 0.0, 0x1.f8781a86646f5p-559, 0.0,
     0x1.f51d1948cd74fp-595, 0.0, 0x1.b103868d87731p-581, 0.0, 0x1.751c23ac0fdep-486,
     0.0, 0x1.deb94c5b2aee9p-822, 0x1.c8a5f1f2de97p-297, 0.0, 0x1.b3ef7d692c91dp-28,
     0.0, 0x1.35ff2f531a6b2p-180, 0.0, 0.0, 0x1.ef7a11c4d762dp-590, 0.0,
     0x1.4e2afeae86257p-868, 0x1.d2fcfd1c5b99dp-71, 0x1.05f84b309874ap-383, 0.0, 0.0,
     0x1.6c1d962dcbc96p-675, 0.0, 0.0, 0.0, 0x1.953820a38273bp-871,
     0x1.f1c4e06de30a6p-652, 0.0, 0.0, 0x1.24f0081a109f8p-620, 0x1.21a8543dee20bp-427,
     0.0, 0.0, 0.0, 0x1.e7509ee0e60afp-658, 0.0, 0.0, 0x1.6f41402b850bcp-774,
     0x1.d4aa2d436d861p-216, 0.0, 0.0, 0.0, 0x1.e03ba7275bdfap-152, 0.0, 0.0, 0.0,
     0x1.37a1c2a5a356fp-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80e07404444dbp-906,
     0x1.957b804682bffp-338, 0x1.25211998f4727p-248, 0x1.90202f7db81c6p-567,
     0x1.586fd8d88acf3p-895, 0.0, 0.0, 0.0, 0x1.7d7db6552437dp-214, 0.0,
     0x1.8cfcad8e9d55cp-277, 0x1.dcf32b715f301p-829, 0.0, 0x1.1d8806663314ep-555, 0.0,
     0x1.b7f07d8cc8f08p-831, 0.0, 0x1.8d55fe5cc1cbdp-103, 0x1.8f5a660fb1131p-736,
     0x1.22b1e4ec684d1p-986, 0x1.fadc0165e2f39p-118, 0x1.3604a9b3ddd2p-884, 0.0,
     0x1.4ce0d9b8d5f38p-149, 0x1.11ca68f963e47p-530, 0.0, 0.0, 0.0,
     0x1.5c89f5a87ac1ep-824, 0x1.cbd95635abbp-367, 0x1.9545d413c30f7p-225, 0.0,
     0x1.1139474b5a1f5p-516, 0x1.c8bbf4f95e241p-645, 0x1.e44efef5cc45fp-240, 0.0,
     0x1.b5e78ee7c2082p-510, 0.0, 0x1.eb0b35e691b58p-999, 0x1.a55d52d415d3fp-713, 0.0,
     0x1.f97169217bea8p-424, 0.0, 0x1.9a1c226aa59e2p-942, 0x1.2cdeccda6f049p-36,
     0x1.bb8d89e24041ap-726, 0x1.ee51340c2c52ap-870, 0x1.07cdbc8f8075dp-223,
     0x1.da21708855773p-227, 0.0, 0x1.d89dbe230cedp-858, 0x1.86d87b46bfae3p-66, 0.0,
     0x1.409a31dd37cfap-498, 0x1.89e3c53625673p-1021, 0x1.d3af4acc3ac4ap-474,
     0x1.172a09124267p-459, 0.0, 0.0, 0x1.28841397f8c28p-852, 0.0,
     0x1.fe3b5bd57a15p-535, 0x1.0918ac24019p-572, 0x1.38c50d668380dp-170,
     0x1.ac72373036506p-625, 0.0, 0x1.7641686bea56fp-464, 0x1.1230ed1469f4ep-430,
     0x1.b0c05e94141dfp-738, 0x1.f3dbef32f54a6p-619, 0x1.65f20ee36e3aep-319,
     0x1.6374d60d77c44p-713, 0.0, 0.0, 0x1.d26067d34bed4p-889, 0x1.b767992e5ccbbp-720,
     0x1.fcddb14c81935p-435, 0x1.b7139cb5ae32bp-891, 0.0, 0x1.12b334d579c87p-285,
     0x1.a4a00e728aef9p-360, 0.0, 0x1.bd0dfd6ad16b1p-1021, 0.0,
     0x1.b82d5151ae1c4p-490, 0.0, 0.0, 0.0, 0.0, 0x1.d17d3939a75f4p-766, 0.0, 0.0,
     0x1.afe98e949236p-745, 0.0, 0.0, 0x1.cc19dac1f32a8p-366, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.46df65e60aa1dp-871, 0.0, 0x1.d0b051c0ec2dcp-522, 0.0, 0.0, 0.0,
     0x1.1ad5c9c38d1cdp-235, 0.0, 0x1.6550815b49c82p-841, 0.0, 0x1.6ececce9aa0d1p-711,
     0.0, 0x1.e902f515e9a88p-153, 0x1.f7ad341519c75p-805, 0x1.73a1a6b0a2df8p-789,
     0x1.6b4baf6e6497bp-37, 0x1.de660e260e558p-515, 0.0, 0x1.38f40f34044fp-925,
     0x1.a11154595b947p-590, 0.0, 0x1.f40c4c8fff1fbp-197, 0x1.e45c0cb104714p-442,
     0x1.abce0d5767145p-986, 0.0, 0x1.43beb711492b7p-321, 0x1.ba312bd0ace63p-95, 0.0,
     0x1.42f94c5b4e9abp-970, 0.0, 0.0, 0.0, 0x1.f990876749cd9p-236,
     0x1.051c2ed2d0d89p-220, 0x1.cc3195ed5816ap-276, 0x1.0892d9f5543a1p-696, 0.0,
     0x1.5ee74ededb996p-9, 0x1.60e801f8decf6p-506, 0x1.da8ed67d6649ap-293,
     0x1.70e074f2db7fcp-692, 0.0, 0.0, 0.0, 0.0, 0x1.df2939b0f394dp-19,
     0x1.3dcde1b34f4ddp-105, 0.0, 0.0, 0.0, 0x1.c409328394adfp-483, 0.0,
     0x1.5d5dc85048a93p-597, 0.0, 0x1.bb60d4042178cp-478, 0.0, 0.0,
     0x1.a7d1586b13adcp-900, 0.0, 0.0, 0x1.dccb6b938f143p-470, 0x1.bf993ab397838p-397,
     0.0, 0x1.a0e79b88d2a7bp-182, 0x1.8df899160639ap-94, 0x1.512feb8baa1e7p-92, 0.0,
     0.0, 0x1.52832916b1df5p-452, 0x1.37fac5361a68dp-833, 0.0, 0.0, 0.0,
     0x1.ad6b671935687p-534, 0x1.2da58079c2d5ep-716, 0x1.0b27ce190b21ep-346, 0.0,
     0x1.79d32f3da4fc7p-291, 0.0, 0.0, 0x1.8fde1f79b327fp-559, 0x1.f8728fbd033cfp-896,
     0.0, 0.0, 0.0, 0x1.1c47e4ed2e832p-884, 0x1.2c6649168a15fp-756, 0.0,
     0x1.ab77bfaec9fa4p-960, 0x1.df2fb1a821a69p-20, 0.0, 0x1.68ff29b2ad951p-873,
     0x1.523fbc3fb2157p-10, 0x1.7c8b522d5853dp-835, 0x1.9d3560b7d54a3p-287, 0.0, 0.0,
     0x1.de56666fa07adp-734, 0.0, 0x1.25b27bbfe18d6p-615, 0.0, 0.0,
     0x1.3d01842dc758dp-695, 0x1.208e61f301bd3p-656, 0.0, 0.0, 0.0,
     0x1.4aae022011077p-84, 0x1.7147ce5e9763p-745, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dbcd1deabb3a3p-560, 0.0, 0x1.7db20e7f51191p-463, 0.0,
     0x1.1b1a9cb95cdcbp-118, 0.0, 0x1.cef3ff80a18bcp-594, 0x1.6e3655c355902p-479, 0.0,
     0.0, 0x1.e41dd938bbfd4p-741, 0.0, 0x1.324005d27a18fp-738, 0.0, 0.0,
     0x1.d2397c61888ffp-137, 0.0, 0.0, 0.0, 0x1.761bc974c7429p-287, 0.0,
     0x1.a4005ade1da9p-124, 0.0, 0x1.698f093cb21b7p-267, 0x1.d11a677aa79b7p-473, 0.0,
     0.0, 0.0, 0x1.8022d1f9a1736p-721, 0x1.c052328488765p-71, 0x1.6abab556165p-313,
     0.0, 0.0, 0x1.ee8c1787a4185p-150, 0x1.ca4c03ca0fb4ap-536, 0.0, 0.0,
     0x1.aed21f9bbd816p-10, 0.0, 0.0, 0.0, 0x1.473f416c50812p-353, 0.0,
     0x1.20f844edd7a58p-363, 0.0, 0.0, 0.0, 0.0, 0x1.ba6d67bc49052p-475, 0.0,
     0x1.bc02dbbbcfe2p-759, 0.0, 0.0, 0.0, 0x1.2ba907b6a00d2p-793, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.48d3a79c564d2p-407, 0.0, 0x1.099d94de785edp-739, 0.0, 0.0,
     0x1.91c2110880f16p-90, 0.0, 0x1.b30193ae7bcedp-775, 0x1.39539dbe28c62p-147, 0.0,
     0x1.35f9518e90e8cp-932, 0x1.f86900991ab54p-505, 0.0, 0.0, 0x1.0ec469b92d6b1p-397,
     0.0, 0x1.aa01736ada7a4p-893, 0.0, 0.0, 0x1.5464b79337108p-478,
     0x1.0accabbae09e1p-230, 0x1.d46547a1c87f3p-667, 0x1.5bae8e0bfecfap-271,
     0x1.aaf913356cd66p-586, 0x1.d629cfda80c95p-553, 0x1.0415c2424425p-451,
     0x1.031d4528eb478p-169, 0.0, 0.0, 0x1.661b17461101fp-295, 0x1.2313936eb8a52p-88,
     0.0, 0x1.617ce3e721d01p-870, 0x1.46c19846788eep-315, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.93adbe9f8a649p-250, 0.0, 0x1.13767d722eb2ep-35, 0.0, 0.0, 0.0, 0.0,
     0x1.56e8c22481594p-667, 0.0, 0x1.d57cd61ffffb5p-631, 0.0, 0x1.c4e9cfafd001ap-587,
     0.0, 0.0, 0x1.58c1e08ca2e6cp-915, 0x1.8a3920f674a87p-320, 0x1.8fe048843c418p-667,
     0x1.f4f92dfc7f99p-160, 0.0, 0x1.ed2daa6fea059p-678, 0x1.3a57add7f310ap-933, 0.0,
     0x1.77bca933194eep-779, 0.0, 0x1.72d7913a4cfe9p-958, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11389cdcdc7c2p-865, 0x1.cc7082fd025edp-136, 0.0, 0.0, 0.0, 0.0,
     0x1.7211ac8a03094p-4, 0x1.0f1e4616e66e5p-168, 0x1.3a4379fe1796dp-449, 0.0, 0.0,
     0.0, 0.0, 0x1.b820aa1c21daep-764, 0x1.4f7f7b3e9545cp-794, 0.0,
     0x1.bfc7526216b61p-620, 0.0, 0x1.237286a9c5096p-230, 0x1.799afbbeb0a0ep-1007,
     0x1.0d4b931092fdp-533, 0x1.71de31030c65dp-979, 0.0, 0x1.aca22fdf10e44p-137, 0.0,
     0.0, 0x1.95a3c177d659ap-963, 0.0, 0.0, 0x1.4022795921f8p-372,
     0x1.3ce66cf848fa5p-762, 0.0, 0.0, 0x1.8e8273f1b823ap-396, 0.0, 0.0,
     0x1.7ab6abb523314p-382, 0x1.7ed2908589f16p-1007, 0x1.1a388263be4ccp-501, 0.0,
     0x1.2fd10622fa252p-783, 0.0, 0.0, 0x1.6a374b3afcab8p-927, 0.0,
     0x1.5ca2228e7bb83p-873, 0.0, 0x1.2335503f0e7bcp-598, 0.0, 0.0,
     0x1.195cc56fd3c1cp-665, 0x1.b942c393ab627p-454, 0x1.72c9767c96cbcp-657, 0.0,
     0x1.8ac265bfe891ap-346, 0x1.de3f5cf78d54bp-756, 0.0, 0.0, 0.0,
     0x1.d10af119590fcp-139, 0x1.3294f3dea7498p-930, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2f692bfc7adcp-954, 0.0, 0x1.85f208a261fd3p-343, 0x1.c569d63ab152ap-385, 0.0,
     0x1.9fd26aa382714p-660, 0.0, 0x1.525958696c727p-963, 0x1.805fba4cc8d0ap-733, 0.0,
     0x1.4a78251727c01p-207, 0x1.85363f164903ep-708, 0x1.e02f530f0144fp-794, 0.0,
     0x1.8d9b121f815a3p-905, 0x1.bd176996df732p-497, 0.0, 0x1.53ebc7b576ab9p-120,
     0x1.55765f229cd25p-439, 0.0, 0.0, 0x1.cd24831510dd9p-359, 0.0, 0.0, 0.0,
     0x1.c0adf90e831ebp-63, 0.0, 0x1.bf976699d40f6p-158, 0x1.9f28b61f584f4p-349, 0.0,
     0x1.3078fb9f6c2a1p-110, 0.0, 0x1.59705f6f4a3ecp-344, 0x1.3cf51c1afb406p-524, 0.0,
     0x1.630076500b482p-706, 0.0, 0x1.fa4231bc22262p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.6193a37f20471p-99, 0x1.a72ecf638e88fp-755, 0.0, 0x1.eab437df74af2p-1018,
     0x1.9a708529b30ap-563, 0.0, 0x1.ecf736df9f926p-532, 0x1.5f4fde080cbf8p-364, 0.0,
     0x1.3a929146527f9p-834, 0.0, 0x1.163806b61c7d6p-640, 0x1.b6b8244dc4c7cp-155, 0.0,
     0.0, 0.0, 0x1.fef0d23c9078p-336, 0x1.1479d5f5088e2p-601, 0x1.a57a9cfb3ce8bp-536,
     0x1.f8be668370363p-755, 0.0, 0.0, 0x1.43d5aaf4e50c4p-578, 0x1.1bd6d5040b231p-768,
     0.0, 0.0, 0.0, 0x1.ff5257fe34b37p-934, 0.0, 0x1.e8c228e00d8fcp-719, 0.0, 0.0,
     0x1.9ae8126966e2bp-684, 0x1.91f6f5b8d2115p-858, 0x1.a4ab5d411c0ffp-954, 0.0, 0.0,
     0.0, 0x1.27edb9c3fb9b6p-543, 0.0, 0x1.e8b2208260c33p-919, 0x1.27a9b533bee71p-456,
     0.0, 0x1.924e4192aad4cp-242, 0.0, 0x1.0ba85dbb3cdddp-675, 0.0,
     0x1.1c77e6b77fea5p-446, 0.0, 0.0, 0x1.b9590a944bc5fp-144, 0x1.b6f010e30fde1p-285,
     0x1.a26e81da40c53p-548, 0.0, 0x1.79eb8e1899a3cp-558, 0.0, 0x1.9501c19fa06c3p-567,
     0.0, 0.0, 0x1.b11d95b96da5fp-900, 0.0, 0x1.bb5610e5399efp-983,
     0x1.79af2a15e0aadp-297, 0.0, 0x1.185c965b5ac96p-767, 0x1.cd2ac3883bc58p-968,
     0x1.b558f8981aff1p-217, 0x1.0408594b076fbp-293, 0.0, 0.0, 0x1.1aa59e800bbabp-738,
     0x1.19f6e7148f18fp-494, 0x1.69abf88f16d6ap-352, 0.0, 0.0, 0.0,
     0x1.c80b196a1acb1p-969, 0x1.5b54a14c3283cp-697, 0.0, 0x1.ecfe19b3040fap-924,
     0x1.307be32f9f941p-397, 0x1.0339ff5b0b4d5p-491, 0.0, 0x1.a98e20e1d4235p-826, 0.0,
     0x1.12a7c54a0b93dp-503, 0x1.1beaa26f9a2c7p-534, 0.0, 0x1.147d08edbf68p-693,
     0x1.b3dd596982603p-107, 0x1.56ad9782ce161p-17, 0x1.23ab6d76b4ac4p-737,
     0x1.6659ba846db8ep-544, 0.0, 0.0, 0x1.5272090ea55fp-545, 0x1.b7b9feabbdac2p-815,
     0x1.4558af4466a47p-835, 0x1.bb5cd7ce208d4p-494, 0x1.f6c92cb993d9dp-1002, 0.0,
     0x1.41a752932dc01p-198, 0.0, 0.0, 0x1.a8e12fefc4b72p-1020, 0.0,
     0x1.fea6d373e3047p-847, 0.0, 0x1.dd4d54585a148p-444, 0x1.d10406fe17371p-470,
     0x1.23dfee23b19c9p-82, 0x1.2864ab652294dp-677, 0.0, 0.0, 0x1.18ea72f93c3e2p-517,
     0.0, 0.0, 0.0, 0.0, 0x1.185dbe46cae0fp-648, 0.0, 0.0, 0x1.74f3bf74c52edp-70,
     0x1.8902ef54db7d7p-122, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.232bacb54a34ep-668,
     0x1.24b2cef10e589p-189, 0.0, 0x1.d3aa83769e506p-649, 0.0, 0x1.d0e612c0833fcp-305,
     0.0, 0.0, 0x1.884608473d6e1p-1008, 0.0, 0x1.f1604eb34639cp-531, 0.0,
     0x1.f7b947810fbf3p-847, 0x1.de49389f75b6ep-573, 0.0, 0.0, 0x1.0bb44bb9effdep-314,
     0x1.b3cc061a7e199p-693, 0x1.2889ed0d0f2b1p-325, 0.0, 0x1.e60c7fcacedfap-754, 0.0,
     0.0, 0x1.3323fdfa5cd42p-741, 0.0, 0.0, 0.0, 0.0, 0x1.499b25fa2695cp-400,
     0x1.96d6f64fda173p-851, 0x1.f72da29286c15p-258, 0.0, 0.0, 0x1.a8ff046190f5cp-556,
     0.0, 0.0, 0x1.5a0d9cc2be1afp-770, 0x1.0401e473b0b9ap-310, 0x1.60f330be25651p-586,
     0.0, 0x1.00862518aa88p-516, 0.0, 0.0, 0x1.b1a7437797f56p-687,
     0x1.48b28898b9afap-183, 0x1.e39b2799336d7p-950, 0.0, 0x1.58d7533ef6806p-620,
     0x1.5009aa0455115p-745, 0.0, 0x1.dd72921391a69p-753, 0x1.104dd1be17546p-141, 0.0,
     0x1.532d70838498bp-900, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd18e12d1c68ep-293, 0.0, 0.0, 0x1.d4eaf76c2f1aap-444, 0x1.f1a0932aa67ecp-679,
     0.0, 0x1.b70cf463e2b6fp-412, 0.0, 0.0, 0x1.18ba233c9d126p-109, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.090b1017f27cbp-477, 0x1.ff531bb50fd6p-295,
     0x1.2422d23be8ad3p-228, 0.0, 0x1.7881cf553a9e2p-831, 0.0, 0.0,
     0x1.669d114821d09p-570, 0x1.756ae024cc92bp-807, 0.0, 0.0, 0x1.b9b72a3cf1ba2p-690,
     0.0, 0x1.0ddba9ece408fp-823, 0x1.014336a054e89p-698, 0.0, 0x1.9cc6765e60f3bp-370,
     0.0, 0x1.048a4805fb60cp-600, 0.0, 0x1.5b56848789bc2p-290, 0x1.b5cd6ce97b7e1p-751,
     0.0, 0.0, 0x1.de1436a4ae95p-731, 0.0, 0.0, 0x1.f12d8ca20d166p-297,
     0x1.89722c3e874bdp-329, 0x1.95e60b48e212p-494, 0x1.cb82064396227p-910, 0.0, 0.0,
     0x1.ddf50ce5c68fdp-167, 0.0, 0.0, 0x1.dab7b5dbc2652p-206, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.45a1028ee210ap-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a6dbd51fa05fp-65, 0.0, 0x1.060b679ae2142p-118, 0x1.b671bdaec5b07p-309,
     0x1.33e55af5dabb8p-883, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a27daa45f00fp-782,
     0.0, 0.0, 0x1.8205c66febba5p-804, 0x1.67c8fb550d585p-205, 0x1.b9b26fe80d5b2p-321,
     0x1.ca3c89565754cp-724, 0x1.703db82099814p-290, 0x1.56b8935583b9p-467
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
            tmp1 = Sleef_finz_cosd4_u10kvx(tmp0);
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
    printf("Sleef_finz_cosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
