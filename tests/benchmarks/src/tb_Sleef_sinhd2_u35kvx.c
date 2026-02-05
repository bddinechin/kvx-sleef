/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd2_u35kvx.c --function Sleef_sinhd2_u35kvx \
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
     0.0, 0.0, 0x1.090a51caae6fdp-174, 0x1.c9703e98d672ap-261, 0.0, 0.0,
     0x1.61ea7f9f4e59cp-94, 0x1.740217a980f68p-389, 0.0, 0x1.7112829ea85aap-147, 0.0,
     0x1.892394f7d5b51p-378, 0x1.d86d2144eb567p-143, 0.0, 0x1.318599cecebc8p-316,
     0x1.fa183dea00eacp-646, 0.0, 0x1.66b6631ef26eap-808, 0.0, 0x1.75e06f124cd8p-169,
     0.0, 0x1.2364da6ae29ddp-641, 0x1.dcae936765d6ep-15, 0.0, 0x1.976ae76f2793p-984,
     0.0, 0x1.cd8c30a27e86ep-111, 0.0, 0x1.0546fad1ee7bcp-533, 0x1.30ab3a57e4c38p-708,
     0.0, 0x1.5028cc7bcc159p-355, 0x1.f9ed594e413c1p-362, 0.0, 0x1.86536e89cc0b5p-194,
     0x1.e4977b88caae6p-842, 0x1.79df222c20e4bp-631, 0.0, 0.0, 0x1.6364fe9927cbep-527,
     0.0, 0x1.d2dd064ba65a4p-365, 0x1.d2ac527217ddcp-445, 0x1.8813cf21b415ap-42,
     0x1.5b5bcf6fb0b18p-566, 0.0, 0x1.c270f59704bbcp-495, 0x1.d7546291e9e7dp-54, 0.0,
     0.0, 0x1.303b1fad43cc5p-706, 0x1.e084d5a70f304p-91, 0x1.d359ef915dbddp-424,
     0x1.60c81852c8b46p-82, 0.0, 0x1.2d8daeb35c15cp-107, 0.0, 0x1.6fb7d63349fd2p-1022,
     0x1.9f0212da3f5ap-648, 0x1.2fb4f9087d131p-333, 0.0, 0.0, 0x1.baac2dd714ca3p-32,
     0x1.6e337fe543e06p-500, 0x1.0def46bfe0becp-953, 0.0, 0.0, 0x1.39f02da8ae6c8p-158,
     0.0, 0.0, 0x1.afbb1692c2403p-915, 0x1.8b6fd1b684a03p-994, 0.0, 0.0,
     0x1.0771008c64548p-469, 0x1.8faf7fa68119ep-220, 0.0, 0.0, 0.0,
     0x1.5d67ddc9cf7a6p-234, 0x1.41322257d589bp-519, 0.0, 0.0, 0x1.4ac99f3f563c9p-759,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5f63294e5726p-331, 0.0, 0x1.4c780cfcd6cabp-588,
     0.0, 0x1.8d894b76c2173p-987, 0.0, 0x1.53807af4257d2p-184, 0x1.d8caf4753efd4p-787,
     0.0, 0x1.90ebc79437402p-168, 0.0, 0.0, 0.0, 0.0, 0x1.ee8ba7a0a8317p-50, 0.0, 0.0,
     0x1.08ff4661589b2p-595, 0.0, 0x1.561826ac42374p-749, 0.0, 0.0, 0.0,
     0x1.f997f2464218cp-658, 0x1.995d4a5b67c17p-811, 0x1.ce277f73f8a2bp-102, 0.0, 0.0,
     0x1.6571ceb409697p-455, 0x1.5f023abaf3becp-342, 0x1.556776136ec71p-525, 0.0, 0.0,
     0x1.e911ab3b2d536p-618, 0x1.2105fffd22e5fp-216, 0.0, 0x1.9da19f8a77f58p-475,
     0x1.25dc36cedef91p-622, 0.0, 0x1.41ae5cd0f2aafp-1016, 0x1.f425f14a060b4p-162,
     0x1.59113f4ca6359p-215, 0.0, 0x1.eec5f6af905fdp-142, 0x1.7c365cfeb7282p-395, 0.0,
     0x1.bf30258c03134p-3, 0.0, 0x1.5b2de46abdfa1p-802, 0.0, 0.0, 0.0, 0.0,
     0x1.354a488c08e22p-1017, 0.0, 0x1.ca7b8a66bc90cp-254, 0x1.55f8bb7a7b50fp-215,
     0x1.af1cee52a63f4p-1, 0x1.0bc5cf1a1954cp-706, 0.0, 0.0, 0.0,
     0x1.562cc74919cdfp-26, 0x1.7dc9e335a05ddp-709, 0x1.e32a4c01698d9p-603,
     0x1.ad28d4f47c538p-165, 0x1.c78bc1806021ap-799, 0x1.bdac705809ebfp-729, 0.0,
     0x1.5d2d9c1b70afep-395, 0.0, 0x1.7e664d46beebbp-384, 0x1.9e299c7df7ce2p-367, 0.0,
     0.0, 0x1.6c852b6db311dp-722, 0x1.71a249349f33ep-967, 0x1.53faa84fa4773p-1006,
     0x1.3f1a5944001b7p-280, 0.0, 0x1.fde10d13dd33ap-855, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.59102e025d3f8p-992, 0.0, 0.0, 0.0, 0x1.6b62f2745fea7p-197, 0.0,
     0x1.0eb73abc98272p-838, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e143adfbccf9ep-504, 0.0,
     0x1.c1c533b9dbf54p-236, 0x1.166923b117df6p-963, 0.0, 0.0, 0.0,
     0x1.8696c630cb8bbp-75, 0x1.355b5b145dc0cp-592, 0x1.bd7d191c64164p-697, 0.0,
     0x1.f84c21750cb6dp-763, 0x1.6f98fbc0adb91p-547, 0x1.02e524e68f3a5p-659,
     0x1.e38b36b314a15p-404, 0x1.d01fed832357ep-930, 0.0, 0x1.07a10168087b6p-930,
     0x1.d594a386809fp-890, 0.0, 0x1.f7e81bd1ac86ap-251, 0x1.0052327bca3c9p-694, 0.0,
     0.0, 0.0, 0x1.a92cc2e517aecp-440, 0x1.ed704c0ef392p-423, 0.0,
     0x1.fd515477b8cc6p-58, 0.0, 0.0, 0x1.849f7b7fd68cdp-96, 0x1.ff0c62edcb5b4p-1018,
     0.0, 0.0, 0x1.8fafb0fd30c5fp-373, 0x1.eec53c22aaf45p-602, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.92decf2f245p-970, 0x1.eec784a40ad5dp-978, 0.0, 0.0, 0.0, 0.0,
     0x1.b82e3ccdbbe4ap-285, 0x1.d442bc69a2cfdp-929, 0x1.135e709c7765ap-201,
     0x1.15e0dc144baafp-321, 0x1.4fb5ad0697b53p-320, 0x1.fa52b8aa94cc7p-48,
     0x1.6d8c661c98dd6p-222, 0.0, 0x1.9637f968f9be5p-816, 0.0, 0.0,
     0x1.6a2e96bfc92c4p-16, 0x1.657ad7750dd1ep-547, 0.0, 0x1.14f10e55afbc6p-604,
     0x1.209ea0d048b8ep-551, 0.0, 0x1.e55c0c2265bdap-16, 0.0, 0.0,
     0x1.ff4eb49be9184p-46, 0x1.c52f8c17b3894p-16, 0x1.3459c2ce191c3p-641,
     0x1.866dd6c7acf37p-809, 0.0, 0x1.845a514ece058p-189, 0.0, 0x1.a0a6c1593a0a8p-817,
     0.0, 0x1.2b819100fd153p-917, 0.0, 0.0, 0.0, 0x1.904f983fc5e81p-384,
     0x1.1f067b95182e6p-901, 0.0, 0.0, 0.0, 0x1.290389e94894bp-56,
     0x1.2fc1ef58c2858p-85, 0.0, 0x1.a5ce9ac262a1cp-184, 0x1.b15740b5664cap-151,
     0x1.4299f166ee79dp-110, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d1c432f4bc28p-461,
     0x1.c75a0be3d1188p-145, 0.0, 0x1.17266971b0e86p-461, 0x1.78b4b36aa7e24p-476,
     0x1.96dad159dc653p-38, 0.0, 0x1.8b33ae04e1362p-138, 0x1.d2337387be8f5p-658,
     0x1.1d2fc36892541p-13, 0x1.8e52963db7808p-495, 0x1.beb44726db4aep-840, 0.0,
     0x1.fced40ca9f5a3p-345, 0.0, 0.0, 0x1.95be9decec26bp-799, 0x1.b37d4eb33d846p-457,
     0x1.a8e93a17e19cap-125, 0.0, 0.0, 0x1.64e80994dabebp-44, 0.0,
     0x1.cb5444544e96bp-154, 0.0, 0x1.41b6bc058ad8cp-942, 0x1.75445fc1d5ad4p-922, 0.0,
     0.0, 0x1.47144bcc50f82p-834, 0.0, 0.0, 0x1.b73436ce27a54p-293,
     0x1.7068a1ed9a237p-748, 0.0, 0.0, 0.0, 0.0, 0x1.675732e09efd4p-253,
     0x1.ba80f28598a2bp-728, 0x1.47b53f8138f3cp-850, 0x1.cd5a464e7cae5p-729,
     0x1.b5e4cb0318b57p-323, 0.0, 0.0, 0.0, 0x1.32b6109099879p-417, 0.0,
     0x1.12e413b887022p-280, 0x1.0802718f031efp-1013, 0.0, 0x1.da9450a504bacp-336,
     0x1.c123ec637219fp-347, 0.0, 0.0, 0x1.05e2b0d3e30eep-188, 0x1.7f4578e2b9f5p-607,
     0x1.6ff3758dec272p-597, 0.0, 0x1.534ec4a1cdff1p-588, 0x1.7ebc73e12de56p-149,
     0x1.5963e3d0ecadep-390, 0x1.f409499812593p-311, 0.0, 0.0, 0.0, 0.0,
     0x1.2b097225bf43dp-933, 0x1.7d63838223107p-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.82b0c4cd84842p-453, 0x1.d529372c95716p-885, 0.0,
     0x1.d8631545a90fep-1000, 0.0, 0x1.0d8941232d795p-557, 0x1.8c38e60906f4dp-883,
     0.0, 0x1.9d78eb9b7d825p-987, 0x1.24963ba519659p-526, 0.0, 0x1.ed77ca19852e4p-157,
     0.0, 0.0, 0.0, 0.0, 0x1.f42a3fc10bfbp-994, 0.0, 0x1.db0226ac8b67cp-889, 0.0,
     0x1.aaec49b3bd904p-1020, 0x1.11bd99e095266p-886, 0x1.46ee15cd90238p-845,
     0x1.1d91ec34cae0bp-876, 0x1.1491f7960ce26p-479, 0x1.f754665fb5164p-572, 0.0,
     0x1.b83899263b1cap-43, 0x1.295b30277bc1ep-142, 0x1.03fbc5262b14ap-304,
     0x1.102eb963bd5d7p-269, 0.0, 0x1.b3ffeaa13fbb5p-172, 0x1.dd159151e89eep-585, 0.0,
     0.0, 0.0, 0.0, 0x1.9bf3bb691054ep-201, 0.0, 0.0, 0.0, 0.0, 0x1.827d892a3749cp-51,
     0x1.2ad56c662ce54p-470, 0.0, 0.0, 0x1.f6a0109197a57p-922, 0x1.fbeb8f178896bp-653,
     0x1.89fa5a257e88p-104, 0.0, 0.0, 0.0, 0.0, 0x1.c1c4a1291a6f3p-281,
     0x1.383b2e12d3ec1p-58, 0x1.8dce3f6aab89ap-246, 0x1.039e3fe0dad4ap-775, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9e9c667ae089dp-121, 0.0, 0x1.776402a844f17p-397, 0.0,
     0x1.e0e9a7cb9bd7p-296, 0.0, 0.0, 0x1.dfe375a1a5d17p-997, 0.0,
     0x1.f777e53c62b4dp-336, 0x1.76de95a45cbdbp-913, 0x1.70fec26f7c5p-573, 0.0,
     0x1.1030d5402fcbbp-837, 0.0, 0x1.cf6fa528fb60ep-992, 0.0, 0.0, 0.0, 0.0,
     0x1.bfb6544d99b81p-985, 0.0, 0.0, 0.0, 0.0, 0x1.2647bba43c22fp-754,
     0x1.4b5353eb15817p-625, 0x1.8c730472497cp-307, 0x1.0a1116e59c355p-913, 0.0, 0.0,
     0.0, 0.0, 0x1.2ddb75f68d5acp-460, 0.0, 0.0, 0.0, 0x1.357cf97639d13p-426, 0.0,
     0.0, 0x1.106c6e4550d9dp-417, 0x1.f08a17dc018bp-411, 0.0, 0x1.07858500ef742p-318,
     0.0, 0.0, 0x1.4054f4288a90fp-396, 0x1.f1258ad92760dp-541, 0.0,
     0x1.989dc7741dbccp-518, 0x1.a3a73c45a3a95p-878, 0.0, 0x1.8ede3775123b2p-408, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6380859c60bdp-852, 0.0, 0.0, 0.0,
     0x1.3d9db018d583bp-457, 0x1.7c44f87a2f0aep-806, 0x1.ecba2cfbf40e1p-968, 0.0,
     0x1.0769ad13fb144p-270, 0.0, 0.0, 0.0, 0.0, 0x1.4dd8bbe80c84dp-447,
     0x1.71d603ea36539p-474, 0.0, 0x1.8b75f87b58af5p-183, 0x1.71a321044656fp-244, 0.0,
     0x1.59bde2a628a59p-36, 0x1.7bee182e7761bp-505, 0x1.d8e89288c0aa4p-283, 0.0,
     0x1.8c34f8c0df8c9p-665, 0.0, 0x1.fae24fce83aa8p-523, 0x1.b9d04570e7809p-32, 0.0,
     0.0, 0.0, 0x1.f90cd5bc0b2a2p-12, 0.0, 0x1.a2fc093ef69e8p-563, 0.0,
     0x1.55d4576b063e1p-347, 0.0, 0.0, 0.0, 0.0, 0x1.e94e1885017ffp-444,
     0x1.648ac2cd2e0dep-775, 0x1.81bc3838d6fd2p-556, 0.0, 0x1.70ca2b3e2868ap-472,
     0x1.6fb32224d984cp-565, 0.0, 0x1.a63a3e51b9899p-860, 0x1.1fb5f077e3404p-50,
     0x1.82474fb48d1dbp-353, 0.0, 0.0, 0x1.0465587e6476dp-522,
     0x1.9394bda7d0f9dp-1016, 0.0, 0x1.941374cd7e86dp-822, 0x1.8f82d5e21b001p-766,
     0x1p0, 0x1.5f216b6c964dap-22, 0x1.efca7bbeb6efbp-962, 0x1.aa8f621746003p-738,
     0.0, 0.0, 0.0, 0.0, 0x1.0e6b8a575598dp-364, 0x1.fcffad67dc15dp-266,
     0x1.6b94f2b4cac6bp-388, 0.0, 0x1.6c18a8757089ap-692, 0.0, 0.0,
     0x1.9a2df8219f12dp-224, 0x1.eba72a7458f9ap-63, 0.0, 0x1.493d42039a97fp-358,
     0x1.3b9a70c7c9428p-902, 0x1.2685f209d69c1p-423, 0x1.825c8aea54379p-566, 0.0,
     0x1.8a93c38bc0543p-574, 0x1.2fd582ca0ff88p-368, 0x1.012902aaad107p-505, 0.0, 0.0,
     0x1.ae8d110b263f8p-768, 0x1.6c7d25e944d1ap-767, 0.0, 0.0, 0.0,
     0x1.1883f1a7e6a12p-627, 0.0, 0.0, 0x1.c44f9bf76275bp-668, 0x1.9742176c9f82cp-587,
     0.0, 0x1.95cea09e7f45cp-590, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6be431c7591dp-133,
     0x1.5c90c8c9a43e4p-536, 0x1.756da5bb39cdcp-614, 0x1.2bc14eadc89e6p-411, 0.0,
     0x1.2fcb1af39790bp-467, 0.0, 0x1.554d76702e60bp-657, 0.0, 0x1.b502b09dc5303p-880,
     0.0, 0x1.23357629d4f6ap-794, 0x1.b931047f89a66p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.a114fd8bc966ep-604, 0x1.8e452fbe6c49bp-343, 0.0, 0.0, 0.0, 0.0,
     0x1.85402efa05727p-564, 0x1.86d3ba912e04ep-289, 0.0, 0x1.d9a4364c8741fp-272,
     0x1.be58d3d420c42p-138, 0.0, 0.0, 0x1.947cc6e480ba1p-722, 0x1.01ef4292f3fbp-500,
     0.0, 0x1.ce00766707406p-956, 0x1.c65a5245e986fp-248, 0x1.cd0d1552978ddp-424, 0.0,
     0x1.4847218382976p-618, 0.0, 0.0, 0x1.993a3c89ec744p-190, 0.0, 0.0,
     0x1.24d57aac24462p-528, 0.0, 0x1.83cfe927136e9p-388, 0x1.f3d63c3284777p-700,
     0x1.43a58a67ecebcp-111, 0x1.807df4e50de8cp-180, 0x1.f622aadb0e83ap-90, 0.0,
     0x1.b3da91366e0f9p-95, 0x1.8d2932be9e46ep-482, 0x1.0f9d99d479442p-419, 0.0,
     0x1.f0036a5ee72b2p-224, 0x1.e1a84c1adc00cp-214, 0.0, 0x1.01b523269b438p-49, 0.0,
     0x1.4ef9b84418633p-106, 0x1.6282734f6902p-118, 0x1.9632b4bc159d8p-566, 0.0,
     0x1.9419bf916d26dp-469, 0x1.44cbdf63dc9a2p-571, 0x1.e781b3850798p-952,
     0x1.80f8b4fff3f7fp-32, 0x1.e4eb5e602b874p-414, 0x1.8fb82bd474bcfp-14,
     0x1.eaefd40911ep-622, 0x1.77c68bfdb05bp-419, 0.0, 0x1.2fbd947cdfc56p-321, 0.0,
     0x1.a2f2d1edf87dp-782, 0.0, 0x1.59d661d629fb3p-952, 0x1.7184dd14bb509p-620,
     0x1.c4269d6ca6529p-171, 0.0, 0x1.a46d21ff97a73p-26, 0x1.b06d46995f3b9p-114, 0.0,
     0x1.3142ba8df2d0ap-376, 0.0, 0.0, 0.0, 0x1.edf52b9fd6154p-951,
     0x1.6f9cc4512293dp-46, 0.0, 0.0, 0.0, 0x1.3d32f864d3dap-532, 0.0, 0.0,
     0x1.d062f1552830ap-850, 0x1.806b598a2a1fp-930, 0.0, 0x1.ec918ba83af53p-925,
     0x1.84bf10c82c556p-172, 0.0, 0x1.ae87b8d3f89cfp-505, 0.0, 0x1.38c19d5303c8fp-837,
     0.0, 0x1.8b0cb13512b68p-484, 0x1.167309cce92b7p-141, 0.0, 0x1.8edb0d1589fbp-647,
     0.0, 0x1.703bf8f32acbep-786, 0.0, 0.0, 0x1.ac1fa3d228b6bp-168, 0.0,
     0x1.b8ef30ff1262bp-524, 0.0, 0x1.3ca17edd790a2p-763, 0.0, 0x1.96cc45bc9fc62p-633,
     0.0, 0x1.b8223c8d26d99p-77, 0.0, 0x1.d427a6de83ea9p-270, 0.0, 0.0, 0.0,
     0x1.df635c92d8ea7p-365, 0.0, 0x1.3e3e45f76c15cp-177, 0.0, 0.0,
     0x1.5597c45746e6ep-865, 0x1.e10383bc5d76fp-512, 0.0, 0.0, 0.0,
     0x1.30e7ecda89e7ap-845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a62c4c770cedep-145,
     0x1.4b332c13e2209p-639, 0x1.007648305fddbp-527, 0x1.fe3becd2b6382p-455, 0.0,
     0x1.5d5f2f31a0a79p-835, 0.0, 0x1.084a9cac1a578p-11, 0x1.42a24ff0a6eebp-599,
     0x1.503861b8b52fap-986, 0x1.51a4874040a6dp-590, 0x1.198a73ea2b29ap-893,
     0x1.479e2ba2fe604p-983, 0.0, 0.0, 0.0, 0.0, 0x1.cef8faab67116p-197, 0.0,
     0x1.16cb898671066p-479, 0.0, 0x1.169991a86da68p-885, 0.0, 0x1.a6354a02254d6p-712,
     0x1.8b873b459b97ep-523, 0.0, 0.0, 0x1.98db708758de3p-152,
     0x1.57e99d01679ddp-1012, 0x1.35d6b7528b5d4p-944, 0x1.fe00e13c45615p-702,
     0x1.0221ef53fc6eap-1010, 0.0, 0x1.fa1915e6b7c36p-168, 0x1.fc0e6b4a82d04p-63,
     0x1.8e526fd8ec80ep-867, 0.0, 0x1.204634d201b47p-154, 0.0, 0x1.4a99864e36fe4p-379,
     0.0, 0x1.e661072a360b6p-388, 0.0, 0.0, 0x1.96bf4594ec90fp-452, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.a57e378cea2d5p-84,
     0x1.f718acfc42d8fp-578, 0x1.17b5b35b0f6e8p-667, 0.0, 0x1.c9c8b204ed4bp-582, 0.0,
     0x1.ebfd6ab5024f2p-652, 0.0, 0x1.0be78ff591d33p-390, 0.0, 0x1.b2d767ae2e9c4p-420,
     0.0, 0x1.7e97fe07ae78cp-220, 0.0, 0.0, 0.0, 0.0, 0x1.c4510adc71ecfp-157,
     0x1.a817e536526fap-423, 0x1.001b5a277e0a2p-748, 0.0, 0x1.c5e2535d2656ep-57, 0.0,
     0.0, 0x1.4f7dd4e127f87p-962, 0x1.48464b614e06dp-620, 0.0, 0x1.0d25ac853634bp-539,
     0.0, 0x1.d110d43a80369p-183, 0.0, 0x1.ceaf58c23d818p-390, 0x1.f772c276598cfp-556,
     0.0, 0x1.295cd0f2f851p-200, 0.0, 0x1.9499def7a0b15p-467, 0.0, 0.0, 0.0,
     0x1.1d64c1dd2d09cp-615, 0.0, 0.0, 0.0, 0.0, 0x1.d04adf32ea3b8p-310, 0.0, 0.0,
     0x1.0becc47018906p-129, 0x1.9db9f2350b9d2p-64, 0x1.2b6fe83ea2cfep-177, 0.0,
     0x1.ee9d7411f52f3p-522, 0.0, 0x1.727f337d4165fp-700, 0x1.589f337cb27aap-51, 0.0,
     0x1.bb9cbf136a63ep-478, 0x1.99fd035486362p-857, 0x1.20834d9bba0c3p-197,
     0x1.904809f88f1ffp-398, 0x1.f9386bdc03c15p-232, 0x1.b35fc32c00d1p-2, 0.0,
     0x1.ba334a3db6541p-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aec3a0087dbbp-260,
     0x1.7aa2a1f85099ep-143, 0x1.424e89de5204bp-922, 0x1.7dc575ba7a07bp-593,
     0x1.aacc8ebb18f41p-648, 0.0, 0.0, 0.0, 0x1.85db05af6d9c7p-198, 0.0,
     0x1.7a41a112acdcdp-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36dd6f12f41c4p-246,
     0.0, 0.0, 0x1.2dfb560e976aap-296, 0.0, 0x1.f4f37f19aea9fp-586, 0.0,
     0x1.907b05bec5af2p-326, 0x1.35a976e3093a8p-1, 0.0, 0x1.b58c0d9aa56f7p-309,
     0x1.77fe0e4a11669p-786, 0.0, 0x1.30d8f82acae05p-379, 0.0, 0.0,
     0x1.8ad1207679bfap-906, 0.0, 0.0, 0x1.0feeb38f3d065p-530, 0.0,
     0x1.989848e63f8b9p-464, 0.0, 0.0, 0x1.ebb1b1463e4dbp-189, 0x1.4c9aa0fc6b0eap-989,
     0.0, 0x1.ad22eef79d893p-717, 0x1.57ea0b68507a7p-580, 0x1.a7d04fe0dc541p-106,
     0x1.a9bbe4cda216bp-175, 0.0, 0.0, 0.0, 0.0, 0x1.c8fe0409992d6p-928,
     0x1.449e1aa645f95p-170, 0x1.8463a8dbaea94p-177, 0x1.15cbd71451585p-232, 0.0, 0.0,
     0.0, 0.0, 0x1.0588b21cca0eap-137, 0.0, 0.0, 0x1.a4efc7f3fd7d5p-302,
     0x1.4d978ea81b3d1p-367, 0x1.71d444a31b01ep-975, 0x1.735ea6c3216d5p-904, 0.0,
     0x1.b8347f7444b5cp-859, 0.0, 0.0, 0.0, 0.0, 0x1.04cd89be4a987p-323, 0.0,
     0x1.c1a6f1a82da82p-679, 0x1.7496212f5ab89p-724, 0x1.426c43daf5ff1p-568,
     0x1.ad2cff6c6a968p-210, 0x1.a2f42c5918baap-662, 0.0, 0x1.9428ba2dab16ep-872, 0.0,
     0x1.f3cfd67552d93p-631, 0.0, 0.0, 0x1.21e95623939b4p-362, 0.0,
     0x1.394d24d3ce2dp-559, 0x1.386938170adb4p-57, 0.0, 0.0, 0.0,
     0x1.9428dd97fee4dp-620, 0x1.1bdfe9ffcfb08p-74, 0x1.29ad63d651faap-807, 0.0,
     0x1.234ff751f1bd7p-403, 0.0, 0x1.49671148dda14p-200, 0x1.83413ebcd6ff6p-617, 0.0,
     0x1.87224e7e93bbap-1004, 0x1.fd3083b5067a3p-640, 0x1.034e91116bf88p-255, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.087531baf07c5p-454, 0x1.2fe7098ddca31p-554,
     0x1.a1b0adb97111fp-829, 0.0, 0.0, 0.0, 0x1.b11f8356c1dddp-22,
     0x1.03dfcc5ee6553p-649, 0.0, 0.0, 0x1.e7a94c669e584p-28, 0.0,
     0x1.6ce38fb37e9e1p-481, 0x1.a81b03c2e72a4p-587, 0.0, 0x1.a64592e27468fp-827, 0.0,
     0x1.16fdb3c1dd785p-195, 0x1.e101a5860ebc3p-461, 0x1.f3198e2e6dd17p-934,
     0x1.3f6425b628904p-697, 0.0, 0.0, 0.0, 0x1.c3f2bded99e09p-750, 0.0,
     0x1.1b9a400446067p-212, 0.0, 0x1.57da1d8202c69p-735, 0.0, 0x1.199c396179015p-462,
     0.0, 0.0, 0x1.f5aa61cb8f2fbp-854, 0x1.032a6b6fe9a99p-23, 0x1.b948da4255db9p-580,
     0x1.5f71af797ad32p-943
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
            tmp1 = Sleef_sinhd2_u35kvx(tmp0);
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
    printf("Sleef_sinhd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinhd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
