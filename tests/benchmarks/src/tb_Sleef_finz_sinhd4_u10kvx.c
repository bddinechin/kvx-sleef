/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd4_u10kvx.c --function \
 *     Sleef_finz_sinhd4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0x1.8b19579d991d7p-36, 0x1.25c846452eba9p-324, 0.0,
     0x1.3aa94cb55aa58p-26, 0x1.fcbe51a5fe305p-226, 0.0, 0.0, 0.0, 0.0,
     0x1.8d9dac5594786p-907, 0.0, 0.0, 0x1.f2e11b80db9bcp-84, 0.0, 0.0,
     0x1.7050be3cb2a51p-412, 0x1.7472d119a039p-771, 0.0, 0.0, 0x1.ae5549c2c0b7ep-262,
     0x1.03349be696b01p-383, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c60b4236eef09p-61,
     0x1.e305724b01a5cp-975, 0x1.9c9b27807012cp-921, 0.0, 0x1.80696bc13462ep-930, 0.0,
     0.0, 0x1.fd8a6a93a2343p-991, 0x1.02c03aa1df5f6p-437, 0.0, 0.0, 0.0, 0.0,
     0x1.65c13af93ca03p-87, 0x1.43b95493055aap-525, 0.0, 0.0, 0x1.f61e9041f95bep-544,
     0x1.cbd82a73bece5p-574, 0.0, 0.0, 0.0, 0x1.0a95f99232c0cp-436, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7cacfdc35d138p-724, 0x1.bb6f8821aacf7p-600, 0x1.5bf393e87c5c3p-882,
     0.0, 0x1.87f0d3f721afdp-760, 0.0, 0x1.1f9e396ae0968p-426, 0x1.4e90a912d7914p-279,
     0.0, 0.0, 0.0, 0x1.96d6c909d2a71p-232, 0x1.6ed406a07d653p-606,
     0x1.dfbad269236edp-294, 0x1.621f26d4ed04cp-968, 0x1.e5ac8b966a727p-850, 0.0, 0.0,
     0x1.f96d307464339p-559, 0x1.58badc2b0ad57p-443, 0.0, 0x1.3075e2a27410dp-745,
     0x1.ebd8c9de1a0aep-511, 0x1.25e2cd0c19e62p-979, 0.0, 0x1.abca865127b3dp-1018,
     0.0, 0.0, 0x1.c9808b57a0085p-965, 0x1.ff66592a80087p-1, 0.0, 0.0, 0.0,
     0x1.ef7ab0e287ebep-578, 0.0, 0x1.f695cf33c9a12p-693, 0x1.1fd6ec741b45p-829, 0.0,
     0.0, 0.0, 0x1.baf4e3dca6c28p-565, 0.0, 0x1.5a196690666dep-432, 0.0,
     0x1.7e06d203c4904p-866, 0x1.6f52109d1cae3p-94, 0x1.5b8e2306b6ec2p-671,
     0x1.00bec5c42c5bep-987, 0x1.ab148cd7dffe8p-123, 0.0, 0.0,
     0x1.39b140e2c35c4p-1004, 0x1.a0fed8d7ed388p-767, 0.0, 0x1.e5c31105463bdp-675,
     0x1.8168f0d9100e3p-349, 0.0, 0x1.846522cbee16dp-127, 0.0, 0.0,
     0x1.461ea34ee162dp-394, 0x1.f6e461df73e35p-582, 0.0, 0x1.89b739518b6dap-540, 0.0,
     0.0, 0.0, 0x1.e8bf5c5c969c7p-270, 0x1.7d2ab4cf6fd1dp-715, 0.0, 0.0,
     0x1.8c900425ccf1ep-649, 0x1.9d4a01406290fp-445, 0x1.3168306f79c78p-513,
     0x1.63831951aea8ep-593, 0.0, 0.0, 0.0, 0.0, 0x1.07ecc5edcee64p-691,
     0x1.eb50ee7076735p-923, 0x1.bec56301210c5p-759, 0x1.e9a09f1cb53a1p-989,
     0x1.2bd950d590934p-232, 0x1.a530ac6ec6ef9p-820, 0x1.af91857ae0572p-199,
     0x1.f924707e0a106p-67, 0.0, 0x1.fb14329a1a7afp-553, 0x1.8d81cfdef88a1p-90,
     0x1.578826c014d39p-509, 0.0, 0.0, 0x1.aacac2d14f9d3p-60, 0x1.72a700b2eb646p-74,
     0x1.75b928ed191bep-338, 0.0, 0.0, 0.0, 0x1.24cde5b2c7749p-334, 0.0, 0.0,
     0x1.bc2e9c56db4b9p-79, 0x1.8e039fdc4fd4ep-942, 0.0, 0.0, 0x1.cd9adba605716p-558,
     0.0, 0x1.80d3b05d1b2b3p-176, 0x1.efc018a3d2095p-100, 0x1.8bcba63826f07p-115,
     0x1.c28dab76d001ep-674, 0x1.6c1a03184ef17p-505, 0.0, 0.0, 0.0,
     0x1.9ed3addb0822ep-247, 0.0, 0.0, 0x1.940135487bdf2p-34, 0.0,
     0x1.d094483309c84p-839, 0x1.232e5be313f1cp-781, 0x1.d9d594058624bp-960, 0.0,
     0x1.c3b356bcdef05p-759, 0x1.bf399128e97f9p-524, 0.0, 0.0, 0.0,
     0x1.702a6953f41d3p-474, 0x1.0c10334085614p-458, 0x1.98572fbcf137ep-466, 0.0,
     0x1.9e7236ee409aep-1017, 0x1.d727894f2d16ap-830, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7e6d1c598cb6dp-882, 0x1.bff97b296980cp-141, 0x1.6ea25ac5a4051p-737,
     0x1.d672c971bf37ep-454, 0x1.35053e494663cp-747, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01cd6e097b4bep-269, 0.0, 0.0, 0.0, 0x1.7b5ab52712146p-30,
     0x1.4471da7a6d2b8p-214, 0.0, 0.0, 0x1.91798fec0fc49p-952, 0x1.b51e754e9c3ep-105,
     0.0, 0x1.2715db2abe86ap-288, 0.0, 0.0, 0x1.a9de1adc6ebb8p-147, 0.0, 0.0, 0.0,
     0.0, 0x1.887f825eca29ap-607, 0.0, 0.0, 0.0, 0.0, 0x1.3e19e7741293p-857, 0.0, 0.0,
     0x1.2eb6f8a584bdbp-905, 0.0, 0x1.c8c493f2d0567p-906, 0.0, 0.0, 0.0, 0.0,
     0x1.9f3ab0023b71ap-818, 0.0, 0x1.289208c45dfd1p-950, 0.0, 0x1.d82e1853fe415p-529,
     0x1.dfeb8aad566c2p-213, 0.0, 0.0, 0.0, 0.0, 0x1.45274f86b6abdp-332,
     0x1.574caf35c190ep-214, 0x1.fc5f0e916fa9dp-837, 0.0, 0x1.b5451dd27bab8p-652,
     0x1.0cbe688b98939p-430, 0.0, 0.0, 0.0, 0x1.61d656e11100dp-983, 0.0, 0.0,
     0x1.2b4faf59324e3p-153, 0.0, 0x1.6e4e8c7bbb4fcp-736, 0x1.15dbefea4d1b8p-998, 0.0,
     0x1.199485cf63b74p-12, 0x1.691e3240097ebp-35, 0x1.7bb097bc987d4p-393, 0.0,
     0x1.f66fc27c36e6ep-895, 0.0, 0x1.35cf9f9e46df9p-388, 0.0, 0x1.991958b08dep-945,
     0x1.cc12e7fd3ea8dp-486, 0x1.cb0052a065a45p-796, 0x1.9715835b07144p-467,
     0x1.98fdbbae40a45p-875, 0.0, 0x1.d13b96b1e3ff9p-497, 0.0, 0x1.57757b07fcd69p-812,
     0x1.2774836bf2058p-344, 0x1.aaa19d32ec8ap-600, 0.0, 0x1.ec44d868371f5p-854, 0.0,
     0.0, 0x1.bffc1c039baf3p-108, 0.0, 0x1.b7393cc7a11cfp-212, 0x1.24a780122eeb3p-900,
     0.0, 0x1.0e56cca201cbcp-65, 0.0, 0x1.3662f09c3f49ap-793, 0x1.a8b0ba04e309cp-274,
     0x1.27118baefb564p-982, 0x1.e94b9c1721548p-857, 0x1.88868994d57a8p-58,
     0x1.19b2c6b1d217ap-891, 0x1.b6d53b33f21c3p-79, 0.0, 0x1.61c8361155043p-125,
     0x1.29b418814dc72p-777, 0.0, 0x1.991513471bb3cp-912, 0.0, 0.0, 0.0, 0.0,
     0x1.3c4f1aa581fe1p-261, 0x1.e83bbc9e11176p-411, 0.0, 0.0, 0.0,
     0x1.7efc035e82c92p-509, 0.0, 0x1.c7577efae9b3bp-255, 0.0, 0x1.e88b3f443c686p-890,
     0x1.de13018eeed8dp-355, 0.0, 0x1.4be1733a0df89p-879, 0.0, 0.0,
     0x1.83ddb8d0ab4dp-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.32810e1a411dcp-96, 0.0,
     0x1.b84a2a8c613c2p-836, 0x1.a30af9d77f321p-954, 0.0, 0x1.defa87a3a76a6p-1019,
     0.0, 0.0, 0.0, 0x1.8611bd89570eep-855, 0x1.eb3b4338e08dcp-301,
     0x1.501d720cdb302p-920, 0.0, 0x1.05e84710711b7p-937, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c4063c09199fp-519, 0.0, 0x1.9223cb6cafe4bp-822, 0.0,
     0x1.ab24ed0146e66p-108, 0x1.fa93eb88fd034p-396, 0.0, 0x1.09b511e16780fp-794,
     0x1.0d2aea16fcb2ep-178, 0.0, 0x1.852db259b4b32p-650, 0x1.17988abf81919p-809,
     0x1.9a0b04e2fb7dfp-687, 0x1.839304ef32c1ep-502, 0x1.db78e7bc8039fp-602, 0.0,
     0x1.3ad8d3a7729eap-446, 0x1.fc3d03757dd38p-243, 0x1.1ca93d5fb09d8p-774,
     0x1.1782455ff8f4cp-532, 0x1.ae0290ec922d5p-360, 0.0, 0.0, 0.0,
     0x1.d5eaacc9bc492p-761, 0.0, 0x1.7409ae78604edp-423, 0x1.db316de2c583dp-852, 0.0,
     0x1.a195bda89b891p-104, 0.0, 0.0, 0x1.5ad4ecee83591p-1013,
     0x1.c45b6f8942d71p-689, 0x1.f38a24d039848p-7, 0.0, 0x1.4eb38f2d7e112p-876,
     0x1.b14d8f5ee4c62p-999, 0.0, 0.0, 0x1.822591c10c4f1p-112, 0x1.9f44d9153dcd1p-747,
     0x1.e96c112989abep-432, 0x1.d396bedb80dcdp-91, 0x1.25bae5529a18ap-474, 0.0, 0.0,
     0.0, 0.0, 0x1.7c887d732716cp-515, 0.0, 0.0, 0x1.d4ff84b3eb028p-713, 0.0,
     0x1.d77c7210c6dc2p-279, 0.0, 0.0, 0x1.e588d99685a2cp-430, 0.0,
     0x1.e2d6f9edad111p-963, 0.0, 0.0, 0x1.1b2b8f693a431p-28, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.79ccd95bcd6cbp-598, 0.0, 0x1.266b4ebbab5c9p-848, 0x1.09cb3e786f4b6p-916,
     0.0, 0.0, 0x1.e5cc7bfe1e7bap-752, 0.0, 0x1.69adfd01a65d8p-868, 0.0,
     0x1.cc078591cdb3p-138, 0.0, 0x1.a40c36107d0efp-72, 0.0, 0.0,
     0x1.703c6d30be8e8p-555, 0.0, 0.0, 0.0, 0x1.d1a0306d9328cp-778, 0.0,
     0x1.9506d2c05a7e2p-633, 0x1.50ac122743ec9p-316, 0.0, 0x1.cdac9c15e3b73p-154, 0.0,
     0x1.93b22da4dfe2fp-882, 0.0, 0x1.be9bcbec5cccap-649, 0x1.5805f9111f16fp-635, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dbb5d0569c3cap-194, 0x1.25f1e4e20d4edp-682,
     0x1.6897f064e86d7p-779, 0x1.1ba00e49d77cep-989, 0.0, 0.0, 0x1.8166d867eccf5p-238,
     0.0, 0.0, 0x1.a735974c7e4afp-177, 0x1.e24282a875713p-125, 0x1.d0ee35db75385p-733,
     0.0, 0x1.c3f6bc0eaf529p-245, 0x1.a72728b4e8c7p-834, 0.0, 0.0,
     0x1.03a6b3b0e4893p-984, 0.0, 0.0, 0x1.5d6d7e25a7bcap-925, 0x1.e09c140fd6514p-777,
     0.0, 0.0, 0x1.90754ad174a45p-224, 0.0, 0.0, 0x1.d8aab915b47e1p-577,
     0x1.e8ddb46c9be78p-219, 0x1.348e0ae7e565dp-472, 0.0, 0.0, 0x1.abdb1dd4554edp-727,
     0x1.6eabf7af77bf6p-752, 0.0, 0x1.c99dffecc39bfp-456, 0.0,
     0x1.17a40b9f46b6bp-1001, 0.0, 0.0, 0.0, 0x1.ffaa772795593p-822,
     0x1.67f8eca3bb6b4p-731, 0.0, 0.0, 0.0, 0x1.aa1c2ad13c651p-497, 0.0,
     0x1.a0a42ffdf6bc1p-698, 0x1.d1c246a645bc3p-849, 0x1.75e7799849855p-111, 0.0, 0.0,
     0.0, 0.0, 0x1.1173bb58cee76p-886, 0x1.4032171edd29p-299, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d2c1052078698p-635, 0.0, 0x1.1873809fe3a8fp-720, 0.0,
     0x1.2a30e57f739acp-141, 0x1.3a8851312bdep-853, 0.0, 0x1.cf3e8d3021f7ep-87,
     0x1.136e93a84c403p-847, 0.0, 0x1.e508a711aec4fp-376, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fecbb8a1de807p-247, 0x1.ac9fb21d42b0bp-63, 0x1.ac5f6fea48086p-412,
     0x1.196331811d48bp-497, 0x1.38bfdd5564377p-694, 0.0, 0.0, 0x1.5e6ac415d49bdp-798,
     0.0, 0.0, 0x1.04f2437d6a821p-961, 0x1.8221da380494fp-603, 0x1.a4b6b2cc29b21p-914,
     0x1.c43303711cfd8p-356, 0.0, 0.0, 0x1.ed6274d2d95d9p-1013,
     0x1.1ad133d944baep-382, 0.0, 0x1.a9d7572eb34c6p-205, 0x1.c3b35da4b2215p-537,
     0x1.0411bad8e1847p-526, 0x1.c04219979ef53p-756, 0.0, 0x1.10c3b8836f253p-595, 0.0,
     0.0, 0.0, 0x1.8bd7d89c0b2f8p-25, 0.0, 0.0, 0.0, 0x1.80c6c03c1cc1cp-377,
     0x1.178398f93e2abp-295, 0.0, 0.0, 0x1.b1e1829a80706p-307, 0.0, 0.0, 0.0,
     0x1.da82c0dcf21dap-483, 0x1.b8b42be22a2c5p-682, 0.0, 0.0, 0.0,
     0x1.aca67db3bd6b4p-674, 0.0, 0.0, 0x1.f0bdd778b7e6dp-726, 0x1.0532e146bebep-218,
     0x1.1bffa47228fe5p-684, 0.0, 0x1.400ba9f17a4d3p-455, 0.0, 0.0,
     0x1.981eae1934356p-468, 0x1.541dcc550093ep-322, 0.0, 0.0, 0.0, 0.0,
     0x1.e3e89771af451p-748, 0x1.156f136cdcabfp-888, 0x1.8403379df13eep-656, 0.0,
     0x1.fb9b289760557p-355, 0x1.75753ddd3549ep-634, 0.0, 0x1.08e43fea55e46p-499, 0.0,
     0x1.d702db7242fbp-227, 0x1.f8e64339c1c79p-916, 0.0, 0.0, 0.0,
     0x1.67f1470ba7455p-842, 0x1.9170d6cfa5358p-750, 0x1.90782d2a4972ep-635, 0.0,
     0x1.a32921a1d390fp-255, 0x1.4f5b205250094p-689, 0x1.788fae1a389ecp-498, 0.0,
     0x1.76ae163464468p-983, 0x1.ce236242c8797p-324, 0x1.1f7bfbb727efcp-885,
     0x1.7811b9ebe607bp-482, 0x1.ac97ad7db8d4dp-222, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b832b6fc27557p-607, 0x1.2405c0a356f52p-118, 0.0, 0x1.67064ef1bd555p-521,
     0x1.f23aef12f1f8dp-247, 0x1.3ed05c7ce3d22p-971, 0x1.11a98a20d9694p-511, 0.0, 0.0,
     0.0, 0x1.58cee01eeb702p-680, 0.0, 0.0, 0x1.8afcfb38de935p-512,
     0x1.40d7fc2ccd863p-1008, 0.0, 0.0, 0.0, 0x1.756a5ba4bd0a7p-644,
     0x1.c0810e4561731p-33, 0x1.5c86fe5f23f99p-121, 0.0, 0.0, 0.0, 0.0,
     0x1.d379773566aa7p-979, 0.0, 0.0, 0.0, 0x1.2a6404dd93de3p-305,
     0x1.53e3fca6c32bcp-517, 0x1.f973772e34a17p-183, 0x1.aa9d71b57e6a8p-142, 0.0, 0.0,
     0.0, 0x1.0ed1987fccf35p-307, 0.0, 0.0, 0.0, 0.0, 0x1.e6a4a008c1b75p-853,
     0x1.ff51cfbf3503ap-114, 0x1.78cf8fec06191p-8, 0x1.c20c92e97ee34p-902, 0.0,
     0x1.441dc4ff88c7fp-825, 0x1.a61f9796b6d71p-636, 0x1.d4d96db514f7bp-525, 0.0, 0.0,
     0.0, 0x1.763a46de02c5ep-372, 0.0, 0.0, 0x1.a6ddda3676606p-539,
     0x1.96dfd35e41915p-21, 0x1.9cadf213ce663p-564, 0x1.b659fe8fe0bcdp-1,
     0x1.72f1190ab76bcp-733, 0.0, 0x1.cbad80566edd4p-43, 0.0, 0.0, 0.0,
     0x1.8da748cd0d987p-527, 0x1.6b580a6fa5d54p-1004, 0.0, 0x1.ce519a545ace1p-312,
     0.0, 0.0, 0.0, 0x1.fc2afa24eba5fp-193, 0.0, 0x1.325baccd400cep-30,
     0x1.47dc1833cfd55p-952, 0.0, 0.0, 0x1.d90e70bdce166p-522, 0.0,
     0x1.e180847d167e9p-967, 0.0, 0.0, 0.0, 0.0, 0x1.5f1780eb7edd8p-825, 0.0, 0.0,
     0x1.187b1886efedcp-693, 0x1.7754329a003eap-787, 0x1.302a4603cec0ep-886, 0.0,
     0x1.f459705943dd2p-188, 0x1.c0f343083b844p-816, 0x1.23fe1f12aa90ap-414, 0.0,
     0x1.4ec6abc14469fp-933, 0x1.76d4ffb141567p-920, 0x1.6ec32f94b16ebp-488,
     0x1.bdf03485abcfap-738, 0x1.0b184ac0dd898p-626, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.679f427b68b9cp-803, 0x1.5280a23c965e7p-576, 0x1.821a224de854bp-65,
     0x1.4ce8344880138p-101, 0.0, 0.0, 0x1.5b6bfbe541ae7p-856, 0x1.0ba5d01eba3c8p-836,
     0x1.9065f08468356p-617, 0x1.7dace3fd101b9p-824, 0x1.b995e432b60e3p-554,
     0x1.df91c076063fdp-410, 0.0, 0x1.be9817cd2b249p-841, 0.0, 0.0,
     0x1.9fe0b83571e17p-21, 0.0, 0x1.714ad967249a9p-568, 0.0, 0.0,
     0x1.144e8194ae06cp-596, 0.0, 0.0, 0x1.dc06bad810c4cp-386, 0x1.06bdb70c8dc6ap-530,
     0x1.271ab8aa5ab3fp-692, 0.0, 0.0, 0.0, 0.0, 0x1.415ebaea6707ep-77,
     0x1.75cbc89e08cf4p-775, 0x1.f6029ce2664b6p-501, 0x1.2398bc1737cabp-236, 0.0, 0.0,
     0x1.bd31c461d85dcp-593, 0.0, 0.0, 0x1.ab0cac6e306bbp-967, 0x1.a890ae753b11cp-327,
     0.0, 0.0, 0.0, 0x1.156fa7cdb84d5p-306, 0.0, 0x1.36f94b1f0ae8ep-935,
     0x1.a1cc97993309ep-892, 0.0, 0x1.32ea5251a1ad2p-136, 0x1.c7a8d46a04b49p-977, 0.0,
     0.0, 0.0, 0.0, 0x1.b63f4d34758ffp-758, 0.0, 0x1.9143b48d1ecc2p-686, 0.0,
     0x1.071491f52b0a5p-940, 0x1.8583780b39fbep-457, 0x1.bd53762ac905ep-880,
     0x1.545ce6bc6ee18p-634, 0.0, 0x1.900e84cf16dfcp-416, 0x1.e68d415bd2768p-956, 0.0,
     0x1.baec96d312b0ep-381, 0x1.96579dae5435fp-545, 0.0, 0x1.4a3af0cd85576p-937,
     0x1.93b0ebd221c28p-262, 0.0, 0x1.be2799c48f711p-549, 0.0, 0.0,
     0x1.991a20e53303cp-343, 0.0, 0.0, 0x1.6786145bfe731p-516, 0x1.b56ac98d36d3bp-379,
     0x1.4f7cbe4922057p-703, 0x1.1f79feb690449p-404, 0.0, 0x1.8a07a021dbe26p-773, 0.0,
     0x1.a81ef8e97818fp-190, 0x1.2ef22f45cf26bp-247, 0x1.104d5c49971ecp-929, 0.0,
     0x1.2aa8c0d5f2ab5p-181, 0x1.a7062a096606fp-486, 0x1.ef55e5117ec55p-931, 0.0,
     0x1.a4c37dc1ac245p-893, 0x1.68ffd06198186p-441, 0x1p0, 0x1.0870b817d3d93p-728,
     0.0, 0.0, 0.0, 0x1.cb355159c217dp-363, 0x1.6d6e8355d923cp-559,
     0x1.1b95ef2950232p-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3d2ae28efb9cp-262, 0x1.6b49be0ae035p-131, 0.0, 0.0, 0.0, 0.0,
     0x1.5b6d2e21eb31p-830, 0x1.ffb349302779bp-669, 0x1.fb79c5bc0e291p-63,
     0x1.3ae4f7fe60cc9p-232, 0.0, 0.0, 0.0, 0x1.962dcac6cf9c3p-655, 0.0, 0.0, 0.0,
     0x1.bf089b242919fp-700, 0x1.b5da67b32e563p-715, 0.0, 0x1.dc3be43392a11p-385,
     0x1.9c79a504420ffp-171, 0x1.2a1144bfed1cdp-798, 0x1.231f875fcf99p-46, 0.0,
     0x1.cde7e1da7c9cp-614, 0x1.c9a0af87e9b84p-580, 0.0, 0.0, 0.0,
     0x1.2160d94fcd6e3p-749, 0.0, 0.0, 0.0, 0.0, 0x1.4e1f3465a289fp-495,
     0x1.f9826864873b5p-265, 0.0, 0x1.8c887af08e826p-696, 0.0, 0x1.f4d9816ba6bebp-755,
     0.0, 0.0, 0x1.9289acfd4ffd1p-298, 0x1.32e186c1e9c17p-74, 0x1.78ddb98280a52p-297,
     0.0, 0x1.20d39e9c1b694p-686, 0x1.183582a72b35fp-631, 0.0, 0.0,
     0x1.69bf69bab96dp-522, 0.0, 0x1.5a56ce69c683ap-275, 0x1.4217b811ac44ep-661, 0.0,
     0x1.5d91f0a86b7bfp-922, 0.0, 0.0, 0.0, 0x1.7e7f70971db5ep-309, 0.0, 0.0,
     0x1.67e1f909e7878p-290, 0.0, 0x1.b821ea6e8a712p-699, 0.0, 0.0,
     0x1.fd31bdd85f6d9p-791, 0.0, 0.0, 0.0, 0x1.87b4f2e8b3848p-420,
     0x1.af89ea5ede413p-539, 0x1.a90d4f5f7a9bp-880, 0x1.24014fb99f8f4p-630,
     0x1.ade2d959c0ab4p-152, 0x1.dd27867fd1e2ap-855, 0.0, 0.0, 0.0, 0.0,
     0x1.1331a2d28d5f3p-789, 0x1.72b8d0387fcb6p-333, 0x1.7eece0c14e41bp-511, 0.0, 0.0,
     0.0, 0x1.1e700567c428ap-347, 0x1.6cd39053822e8p-9, 0x1.ad229c8360f55p-217, 0.0,
     0x1.8274e07c8c997p-703, 0.0, 0x1.cc30db2dde74dp-942, 0x1.86902d0f4344ep-833,
     0x1.9b348d4b4c019p-235, 0x1.9911d80941cf8p-102, 0.0, 0x1.51f05a2b0edd3p-51,
     0x1.32680f1cce17bp-880, 0x1.c16737f25290ap-850, 0.0, 0x1.0d596000493f7p-198, 0.0,
     0.0, 0.0, 0x1.2a8da7a1277cp-477, 0x1.ed8b6d8e84a5cp-630, 0.0, 0.0, 0.0,
     0x1.6825065e56462p-865, 0.0, 0x1.ecc4c3134080bp-518, 0x1.08fa8f5824ac7p-903,
     0x1.2dd3381b39402p-451, 0.0, 0x1.d16b96a3e900bp-372, 0.0, 0x1.0d9c215bdf757p-799,
     0x1.3807a0bc2ecd1p-513, 0x1.2d7081654bbe2p-598, 0.0, 0x1.087b1c1a86261p-385,
     0x1.3f590f985891ap-19, 0.0, 0x1.059584a120effp-403, 0.0, 0x1.6946a2814730fp-313,
     0x1.2115ce6f8d0dap-112, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c85ad1c8de839p-962, 0x1.be1e306acfe07p-479, 0.0, 0.0
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
            tmp1 = Sleef_finz_sinhd4_u10kvx(tmp0);
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
    printf("Sleef_finz_sinhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sinhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
