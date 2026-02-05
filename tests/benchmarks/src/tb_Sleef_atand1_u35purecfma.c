/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand1_u35purecfma.c --function \
 *     Sleef_atand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.7ff7dda253b5ap-35, 0.0, 0x1.db8157b39f016p-847, 0.0, 0.0,
     0x1.cde283b8efe7ap-864, 0x1.f2a794a52c711p-777, 0.0, 0x1.0054eab249544p-639, 0.0,
     0.0, 0x1.7b35ebb65c3abp-676, 0x1.55122e3c0931ep-734, 0x1.bca112a8f87a5p-178,
     0x1.a9e1870313736p-43, 0x1.69629c5d0e7ebp-203, 0.0, 0.0, 0x1.33530cc678125p-878,
     0x1.e8814d16de0ddp-465, 0.0, 0x1.75f560be28417p-495, 0.0, 0x1.55fee8134d5c7p-559,
     0x1.401eb42c86807p-557, 0.0, 0.0, 0x1.bd9ea5477c5a2p-740, 0x1.0b69bb5a9c49ep-627,
     0x1.75ea55753380fp-964, 0.0, 0x1.9dda336f1ec05p-420, 0.0, 0x1.34382641e08e4p-632,
     0x1.c5f4275964daep-371, 0x1.0be1eb824c09fp-56, 0.0, 0.0, 0x1.b1a6118c35fbcp-407,
     0.0, 0x1.351af54916813p-904, 0.0, 0.0, 0x1.af54d926dcef1p-314, 0.0, 0.0,
     0x1.7ebc44e0162a4p-343, 0.0, 0x1.15aafff8389ddp-748, 0.0, 0.0,
     0x1.c0266a5ae2e04p-823, 0x1.95e103ebf43a2p-396, 0x1.a50c8ea9e68ap-47, 0.0, 0.0,
     0.0, 0x1.4d0f10c4e15c2p-175, 0x1.f17cf40fdb10fp-902, 0.0, 0.0, 0.0,
     0x1.23b00be87da08p-77, 0.0, 0x1.a42416926c722p-789, 0.0, 0x1.d10398aed1aa7p-150,
     0.0, 0x1p0, 0.0, 0.0, 0x1.140f8659c2102p-603, 0.0, 0x1.82ba59a31d7efp-213,
     0x1.31801a96523fep-265, 0.0, 0.0, 0.0, 0x1.b99b1823fda09p-234, 0.0,
     0x1.349ef8d0a3335p-527, 0x1.32c20afb78ad8p-64, 0x1.69cd13783777cp-459,
     0x1.a4ff6d411607ep-812, 0.0, 0x1.4a7a673550408p-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e075f21c166a6p-648, 0.0, 0x1.ea4db702a4559p-366, 0x1.eb8277418f4edp-260,
     0.0, 0.0, 0x1.46cfc87e4c4abp-848, 0.0, 0x1.eee0edc1ba6bap-26,
     0x1.1c020ec1da81ep-710, 0x1.b2fbed37a92eep-98, 0x1.fd2a8abba438bp-726, 0.0, 0.0,
     0x1.8040d00a7bcffp-349, 0.0, 0x1.0d4681d24d9cbp-316, 0.0, 0.0, 0.0, 0.0,
     0x1.b1f237ccbd95bp-231, 0.0, 0x1.c88a35f3e2effp-465, 0.0, 0.0,
     0x1.5366dce1613f7p-35, 0.0, 0.0, 0x1.f99d415334397p-505, 0.0, 0.0,
     0x1.8698b4d7a1d31p-442, 0.0, 0.0, 0x1.9c700f3268daep-451, 0x1.cfdeabc4efd21p-291,
     0x1.d39ab799760efp-412, 0.0, 0x1.ecbc6da9403a8p-498, 0x1.fb2b6a298c56p-437,
     0x1.5485eba9a2481p-821, 0.0, 0.0, 0.0, 0x1.2a2c8147600f2p-329, 0.0,
     0x1.771397cde6ba7p-822, 0x1.01c52453d107cp-736, 0x1.d114801e5cea3p-312, 0.0,
     0x1.0352e61d5a932p-645, 0x1.9147ab07ec4c1p-881, 0x1.4c405ed6d1883p-585, 0.0, 0.0,
     0x1.b9acd48a6260bp-956, 0x1.238231f9c6b55p-261, 0x1.78ae72cb96ep-215, 0.0,
     0x1.8c69fa53e41ap-994, 0.0, 0x1.51c7f8f97bep-885, 0x1.3a5c3056071efp-922,
     0x1.d11ee41851d6cp-107, 0.0, 0x1.9c3b064c5f604p-126, 0.0, 0x1.211b0dfce01dbp-964,
     0.0, 0x1.b47a016009974p-478, 0x1.87a53585a8d8cp-316, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8979ce26028cp-232, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3a5a4740d806p-136, 0.0, 0.0, 0x1.7f26707b1a264p-787, 0x1.9703f0a66b186p-784,
     0x1.dd4eb0943f151p-576, 0.0, 0x1.04afc01d07b88p-449, 0x1.badceb6a412d1p-738, 0.0,
     0.0, 0.0, 0x1.181d2c0dab74bp-811, 0x1.aba0ce5148741p-551, 0.0,
     0x1.0fad65b04b32p-943, 0.0, 0.0, 0x1.275f9781ea916p-143, 0x1.751fc410f7151p-286,
     0.0, 0x1.5402bc9a12711p-522, 0x1.aac3138d76506p-471, 0.0, 0.0,
     0x1.4577d5f6439a2p-481, 0.0, 0x1.544e5717e2936p-668, 0x1.2ed45b838369ap-474, 0.0,
     0.0, 0.0, 0.0, 0x1.0e9aded997d6ep-275, 0.0, 0.0, 0x1.72a99ae95ded9p-886, 0.0,
     0x1.dfce6e0e4ae9fp-751, 0x1.016b7b8c66f32p-316, 0x1.75cca0dc71d4cp-164,
     0x1.a6ac66091a98bp-866, 0x1.ec78d0a3ef708p-521, 0.0, 0.0, 0.0,
     0x1.d9f8520a543a3p-909, 0x1.d5cd566f2be13p-819, 0.0, 0.0, 0x1.1f07353a5e5e1p-760,
     0x1.93efda1e0039bp-433, 0.0, 0.0, 0x1.cd881c04aefefp-309, 0.0, 0.0,
     0x1.a052503034044p-196, 0.0, 0x1.f8bbf34b217b7p-434, 0.0, 0.0,
     0x1.6beacea98fa2cp-464, 0.0, 0x1.79054d76a0928p-564, 0.0, 0x1.9fb822385657cp-95,
     0x1.4b1bba1350723p-292, 0x1.1548d8505d6c8p-960, 0x1.855918198ed5dp-699,
     0x1.051cb5c50514p-1003, 0x1.7fe50ebd05edap-919, 0.0, 0.0, 0x1.25fc4e039f304p-439,
     0.0, 0.0, 0.0, 0x1.10c4a4b0954bep-814, 0x1.1955b325a8f3p-609, 0.0, 0.0, 0.0, 0.0,
     0x1.39369e8a8a769p-527, 0x1.adccefdbcd91fp-372, 0x1.a6b51ecd1cffbp-776,
     0x1.ae37d5a5704ccp-550, 0.0, 0.0, 0x1.0d37acd47a116p-874, 0x1.080d6affa927fp-865,
     0x1.66acbf0c06309p-802, 0.0, 0.0, 0.0, 0x1.c3612258c4b31p-461,
     0x1.aef8de44768fep-200, 0.0, 0.0, 0x1.06fe5af18784fp-759, 0x1.8211c46773468p-6,
     0x1.e10309fe5dc29p-489, 0.0, 0x1.4c2713e3239eap-330, 0x1.10d4088e94d78p-769, 0.0,
     0.0, 0x1.19bcb6126ca6cp-249, 0.0, 0.0, 0.0, 0x1.888cd64dcc272p-158, 0.0,
     0x1.0d6f79e372755p-441, 0x1.25df5cb8a02c4p-129, 0.0, 0.0, 0x1.74964e56ecbafp-783,
     0x1.7f94783d2222cp-941, 0x1.a9d1a15f28112p-744, 0x1.8ae0a2959ecfdp-149,
     0x1.351248fa5ca9bp-710, 0.0, 0x1.9168fa0fdfa6cp-197, 0x1.539f3eb3e8d7cp-720,
     0x1.af541fa5e438fp-643, 0.0, 0x1.8ab72f05c98d6p-134, 0.0, 0.0,
     0x1.ea4c56b6bb41cp-528, 0x1.adf4f2adc6755p-949, 0.0, 0x1.585c74780ab55p-59,
     0x1.d0aa444139c84p-653, 0x1.46914f4de7ad3p-750, 0x1.06e9842cbd20dp-848, 0.0, 0.0,
     0x1.a2aec896927a3p-953, 0x1.a8ab0b295a0c5p-405, 0x1.eccb7aa50e5b3p-123, 0.0,
     0x1.9a2ab0307e60ap-691, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7ab9aeaef0bep-141,
     0x1.194007142d76cp-520, 0.0, 0x1.c0a58cd2d7404p-83, 0.0, 0x1.f7feaf79048c2p-318,
     0x1.96bec1ca7133p-326, 0.0, 0.0, 0x1.05296f82a41c3p-597, 0x1.f832a052c7ebdp-1016,
     0x1.2466e3d54b42ep-211, 0x1.a28d38ebbd4a3p-725, 0x1.cdaeb71eec493p-477, 0.0,
     0x1.3d5605d8a62e8p-662, 0.0, 0.0, 0x1.2788910b44323p-742, 0x1.f552703ab015fp-344,
     0.0, 0.0, 0.0, 0.0, 0x1.169a7932c414dp-35, 0x1.bd66a9da48ae6p-478, 0.0, 0.0, 0.0,
     0x1.3cad5650eaab2p-632, 0x1.51369b97df909p-635, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fee0de779e8e7p-578, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16f11ef1e07aep-938, 0x1.03e09f338483ep-563, 0x1.93e02bfd27cd3p-464,
     0x1.be0b72f5be84cp-67, 0.0, 0x1.a0127fdd55253p-387, 0x1.a87a4640b2a72p-778,
     0x1.af5b602f9fc9cp-956, 0x1.895d62da258e4p-359, 0x1.3ddd92cbb1c05p-824,
     0x1.3daae36b8ea57p-1000, 0.0, 0x1.da8348076f83bp-361, 0x1.f421e429679fep-867,
     0x1.1f2dcd62ff6bdp-6, 0.0, 0.0, 0.0, 0x1.f0504862b351p-958, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.02b75b064dd15p-963, 0x1.a6cf220ff2c02p-933, 0x1.4c413c8aaf9ffp-1013,
     0x1.5cd952c39bf8cp-436, 0x1.e6955d01a0af6p-983, 0.0, 0x1.36154fb7dc8d6p-111,
     0x1.707bf04778678p-543, 0.0, 0x1.5df28d404394dp-600, 0x1.c667b75e868fbp-527,
     0x1.de54e96dc971dp-607, 0x1.e66033234984dp-350, 0x1.0fcc73146b3a6p-263,
     0x1.82fa0113e8a0bp-183, 0.0, 0x1.a5c32a355a56cp-317, 0.0, 0x1.b2226702c11d1p-919,
     0x1.499b3f257f55ep-744, 0x1.b618cd462ac13p-206, 0.0, 0.0, 0.0,
     0x1.a35cc74405b83p-105, 0x1.09e9d43a1ac2ep-653, 0x1.bf0979a90c725p-617,
     0x1.c0d0b1397b7e3p-1019, 0x1.a61def38da796p-743, 0.0, 0.0,
     0x1.14a7d78886f99p-371, 0x1.c51b71c3b3b1ep-404, 0.0, 0.0, 0x1.7f92052aeb15fp-648,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75c511d3def9bp-325, 0.0, 0x1.312df40588c85p-777,
     0x1.76fd2ebde3594p-505, 0x1.238fd9b9c7e09p-956, 0x1.dc35df3f7ad15p-104,
     0x1.68b4b826867cep-703, 0x1.bee1663cc356ap-11, 0.0, 0.0, 0.0, 0.0,
     0x1.7d7385c568336p-178, 0x1.4ada283f4b1acp-624, 0.0, 0.0, 0x1.4ec1db0d2c6c2p-184,
     0.0, 0x1.616101a949125p-166, 0x1.af99cdcfb6d46p-559, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.86c29731bc13fp-116, 0.0, 0x1.078ee9ffebc6dp-112, 0.0, 0.0,
     0x1.9074816ce342dp-741, 0.0, 0x1.29a1319dcf8adp-277, 0x1.928ed72b0d67fp-951,
     0x1.43451e45f4d95p-314, 0x1.00ea9800ce19p-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01864cf5b291fp-112, 0x1.3ec4bfefed38ep-382, 0.0, 0.0, 0x1.f819ac7d85f0dp-408,
     0.0, 0.0, 0.0, 0x1.193690900a3c1p-378, 0x1.408d2a5a4bd6dp-586, 0.0, 0.0,
     0x1.03739bf81528cp-1022, 0x1.94e32c3ee8eafp-95, 0x1.9cb633b7377fp-114,
     0x1.225da27d2d4d8p-299, 0x1.7f96aaa723eb5p-410, 0x1.3c3446b1d13cbp-53, 0.0,
     0x1.bf32e77c8fa44p-668, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e333176e3478p-359, 0.0, 0.0, 0.0, 0x1.aedfe6c33bd6bp-106, 0.0,
     0x1.7a342ff4aa5c1p-671, 0.0, 0x1.c6ce3d11acb18p-870, 0x1.2d033f7f0f654p-557, 0.0,
     0.0, 0.0, 0.0, 0x1.25ee04d46eaa7p-413, 0x1.4a47534655a8p-201, 0.0,
     0x1.7bb3d808a0c2p-480, 0.0, 0.0, 0.0, 0x1.0efb4b6b8d1a8p-716, 0.0,
     0x1.25316e76ecdd1p-915, 0x1.4599600860996p-665, 0.0, 0x1.519dd844a78cp-549,
     0x1.a9af8c77a26f7p-707, 0x1.6fe3368efecc6p-732, 0.0, 0.0, 0.0,
     0x1.8a9a8e457996dp-134, 0.0, 0x1.2dca14658888ep-1013, 0x1.118425deb7be3p-358,
     0.0, 0x1.f28986a6d3d1p-356, 0.0, 0.0, 0.0, 0x1.8ec99357e1194p-530,
     0x1.f268a42378c4cp-8, 0x1.aed1737eb1d69p-6, 0x1.006f57af228b7p-692,
     0x1.949237ebc783cp-762, 0.0, 0x1.f6c9c143ffe68p-577, 0.0, 0x1.9e9e32f14828dp-207,
     0.0, 0.0, 0x1.54794967b6aedp-876, 0x1.f3a90656dd501p-979, 0x1.5e33cdd53f1c3p-328,
     0.0, 0.0, 0x1.a64b819290219p-705, 0x1.f7cbaa63c8431p-385, 0x1.bfce5bed7aba4p-204,
     0x1.71caea3478014p-262, 0.0, 0.0, 0.0, 0.0, 0x1.984bff5c0e847p-622, 0.0, 0.0,
     0x1.d7522d875727ap-69, 0x1.e42b000ba353fp-342, 0x1.2bbc29139292fp-535,
     0x1.c5ef7d69314bep-113, 0x1.76d307cb1cbe6p-117, 0x1.7a2e9ed9e0ea1p-43, 0.0, 0.0,
     0.0, 0x1.6f13894d90becp-293, 0.0, 0x1.ad5931a963f18p-857, 0x1.d1283ba920ae6p-167,
     0.0, 0x1.dcbd96aa9d6a9p-984, 0.0, 0.0, 0.0, 0.0, 0x1.d7b975fef7e34p-929, 0.0,
     0.0, 0x1.9939a9ffee15cp-31, 0.0, 0.0, 0.0, 0x1.2a315d3275a82p-701, 0.0, 0.0, 0.0,
     0x1.9313971c2173fp-585, 0x1.716cc4c1e3453p-237, 0x1.90d6f970d8d3ep-906,
     0x1.d16dcd31cf1f7p-735, 0x1.004233ff4680ep-618, 0.0, 0x1.db7a6143a0eb5p-51,
     0x1.b7e71c9e38a67p-547, 0x1.ade5e4fdaa993p-697, 0.0, 0.0, 0.0,
     0x1.5e00039cf9df1p-947, 0.0, 0.0, 0x1.e0cd32a70ae85p-214, 0.0, 0.0,
     0x1.b2b1d5195134bp-995, 0.0, 0x1.5e0f985ecec7ep-589, 0.0, 0.0,
     0x1.3af4b773bebc5p-995, 0x1.2d57475db3304p-168, 0.0, 0x1.1e9e54f3d4c0dp-743, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8c482d25f6079p-936, 0x1.c38e9357b85ecp-681, 0.0,
     0x1.5ba437e105a5bp-805, 0.0, 0x1.b1a4ccd0fb27dp-215, 0.0, 0x1.919501997e196p-685,
     0x1.6683d89b22113p-759, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6cfcfde2258f6p-957,
     0x1.852909c3c1bd6p-685, 0.0, 0x1.40d8d441a52abp-853, 0x1.d8779e8fd04efp-846,
     0x1.561a4957d6e11p-191, 0x1.889316e2e01b9p-174, 0.0, 0x1.90edacdc8804ep-27,
     0x1.83d037cc419p-111, 0x1.08c14bdc824d2p-79, 0x1.d00be8a40631fp-297, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24eab1e38e9bfp-132, 0.0, 0.0,
     0x1.db6999dfc30bcp-442, 0x1.f8d6f5ffb531ep-441, 0x1.ee90b9c5c9becp-441, 0.0, 0.0,
     0.0, 0.0, 0x1.d5c1b47329ea5p-221, 0.0, 0x1.0a657e02346dcp-83,
     0x1.e520cfbf690a4p-99, 0.0, 0.0, 0x1.9188c67a3ab96p-569, 0.0,
     0x1.28cb4ce61d105p-212, 0.0, 0x1.edc9b77ae0206p-902, 0x1.92f5821b522e4p-500, 0.0,
     0x1.f6ba68b8eeaccp-181, 0x1.8ce7c0c8fb5b3p-548, 0x1.98de1f6425eb1p-168, 0.0,
     0x1.5e64285eb2b1dp-737, 0.0, 0x1.52fc11de98391p-250, 0.0, 0.0, 0.0,
     0x1.db27939f290bep-394, 0x1.0acc2ec366959p-689, 0x1.ec9a64625fbd2p-745, 0.0,
     0x1.ce51134800ed2p-756, 0.0, 0.0, 0x1.52d4f4cfecc78p-805, 0.0, 0.0, 0.0,
     0x1.c13efbb56177dp-394, 0x1.867086ceed046p-668, 0x1.065b509d0ab5p-127, 0.0, 0.0,
     0x1.ffb1b8015261fp-450, 0.0, 0x1.25bf4338cbd7p-225, 0.0, 0x1.0d5d4a68e77e6p-810,
     0.0, 0x1.a3442b2f5db04p-83, 0.0, 0.0, 0x1.9170c0a47aea1p-691,
     0x1.5bde6d3dba856p-230, 0.0, 0.0, 0.0, 0x1.4639173657396p-964,
     0x1.06a9dde47c59cp-510, 0.0, 0x1.c187d5ce82234p-765, 0x1.50735dda5a9bdp-364, 0.0,
     0x1.95f426acdd7b4p-708, 0x1.cd002730bca34p-991, 0x1.c46e4b6d41917p-168,
     0x1.deb5ac3f90323p-989, 0.0, 0.0, 0.0, 0.0, 0x1.e0aa4d37ea16dp-23,
     0x1.9f90cb17d6486p-679, 0.0, 0.0, 0.0, 0x1.1acb8674e320dp-522,
     0x1.9bffe9fe426bfp-155, 0.0, 0x1.7756c14d82e7ep-159, 0x1.2584baeada3bp-213,
     0x1.a266eb090a9b4p-647, 0.0, 0.0, 0x1.c6bdf3ff17076p-55, 0.0, 0.0, 0.0, 0.0,
     0x1.9b5ea690de062p-14, 0.0, 0.0, 0.0, 0x1.5b8812ecbd7b7p-424, 0.0,
     0x1.7e9aab219afbep-619, 0.0, 0.0, 0x1.4bdec7a89ce3fp-386, 0x1.5d64570699bdp-77,
     0x1.f4979d7eae87cp-78, 0.0, 0x1.8d90e281e062cp-932, 0x1.f492349c8a5e1p-790, 0.0,
     0x1.e897664fbcd3fp-432, 0x1.cd9514b9b9793p-601, 0x1.863f60f291369p-554,
     0x1.8b704b294e68cp-422, 0x1.20944da888c25p-29, 0.0, 0.0, 0.0,
     0x1.fdc392fe01d35p-197, 0.0, 0x1.87d4002573e2dp-609, 0x1.7308e864fa7aep-623, 0.0,
     0x1.240c8792bcb6fp-598, 0.0, 0.0, 0x1.886fba1b4518cp-754, 0x1.5957bc18cba5ep-171,
     0x1.00f7aefe4d518p-818, 0.0, 0.0, 0x1.20d8aae9dbca3p-462, 0.0,
     0x1.58edbaad30ba7p-188, 0x1.8596cc7d01c9bp-955, 0x1.69f58fc539cc7p-852, 0.0, 0.0,
     0x1.1b7340b802a22p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35deca29ec367p-65,
     0x1.dcbfcb593853dp-625, 0.0, 0.0, 0x1.4330f32a4e5d9p-958, 0x1.3a95ab4377a6cp-297,
     0.0, 0x1.9cb88f070ea22p-386, 0x1.ce5bd0a7f2bc4p-61, 0x1.2dd0a496a6fd6p-573, 0.0,
     0x1.cfee6fa4a76b9p-313, 0x1.450f7935efa04p-191, 0x1.b10f4fd13ee14p-976,
     0x1.e0f0883bf1b78p-677, 0x1.99bd7736243e4p-804, 0.0, 0.0, 0x1.adf656e95f353p-944,
     0x1.bb6ef6cb83a08p-174, 0x1.5027896657c01p-374, 0.0, 0.0, 0x1.eecc9012bca9ep-629,
     0.0, 0.0, 0x1.021ee79be7252p-869, 0.0, 0.0, 0x1.98d8fc9ad1c57p-967,
     0x1.b40e0e46a0931p-808, 0x1.bcc54fcb470d3p-232, 0.0, 0.0, 0x1.32591638f3542p-562,
     0.0, 0.0, 0x1.10861d7a1a139p-25, 0x1.993afa2ce73cdp-245, 0x1.690497f1d0cc8p-498,
     0x1.e7364658ce7f1p-292, 0.0, 0x1.ca5d4efad174dp-673, 0.0, 0x1.5df9418c77ab3p-159,
     0.0, 0.0, 0x1.d31543418b815p-360, 0x1.f3cbe891d0b22p-402, 0x1.774c6565140a9p-441,
     0x1.5081b4b3a217ap-483, 0x1.47f3956f7a6d6p-48, 0.0, 0.0, 0x1.1431aec4c1e2dp-490,
     0x1.3c58483352672p-356, 0x1.0777e9e3a13a1p-970, 0x1.8bf71581648a9p-1003,
     0x1.65565b37a2ebbp-937, 0x1.5e7b11896d063p-291, 0x1.eb3efd8abf16cp-491, 0.0, 0.0,
     0x1.dfd1e7d8ade52p-383, 0.0, 0.0, 0.0, 0x1.71db664a78606p-922, 0.0, 0.0,
     0x1.d8fb0f0c1b793p-545, 0.0, 0x1.3aa6f662b5593p-30, 0.0, 0x1.36ded5ae9fa4cp-365,
     0.0, 0.0, 0.0, 0x1.2c9599d73c0edp-152, 0.0, 0.0, 0x1.8a4a8e6344febp-255,
     0x1.f333df02c28ebp-392, 0x1.c92a208fc68d9p-393, 0x1.3baddb6cd7ca3p-130, 0.0, 0.0,
     0x1.c2ef882b4e1f3p-799, 0.0, 0x1.e670a4d82bac6p-463, 0.0, 0.0, 0.0,
     0x1.c5ef1eeace35dp-445, 0x1.c5c50f6280b7dp-217, 0x1.4a58221156c52p-755,
     0x1.c82073ae98eefp-423, 0x1.8614534e5cdb6p-226, 0x1.6577c750ce067p-683,
     0x1.f97c18b1ee2c7p-195, 0x1.97ad1e2d912a8p-401, 0x1.f036c61e20a54p-479, 0.0, 0.0,
     0x1.60d22480edd83p-308, 0x1.02799eab512a1p-752, 0.0, 0x1.a6fd537c4e35ep-296,
     0x1.bd8803da4c8f9p-704, 0.0, 0x1.e73bf07906d72p-935, 0.0, 0.0,
     0x1.a43de0e822817p-622, 0.0, 0.0, 0.0, 0.0, 0x1.574b00ae29631p-828, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2f05a04371d49p-221, 0.0, 0.0, 0x1.32bb020080fc7p-994, 0.0,
     0x1.9f5e828c8c3b6p-316, 0x1.5db6d915ecd86p-81, 0.0, 0x1.ed523da6ee16p-673, 0.0,
     0.0, 0.0, 0x1.985b05578d4fp-896, 0.0, 0.0, 0x1.d1d75a605fbccp-807,
     0x1.02f1f7598d82fp-161, 0x1.eb1af1e2709f9p-179, 0.0, 0.0, 0x1.e4f367e7cc0f9p-670,
     0.0, 0.0, 0x1.173e57593ef0dp-934, 0x1.b53c6cfbb6c7fp-801, 0x1.6ca83ef1cd928p-864,
     0.0, 0.0, 0x1.0589dc9a53478p-521, 0x1.8d71446da7424p-219, 0.0, 0.0,
     0x1.2a8c94021def2p-891, 0x1.d04ff4591ef06p-358, 0x1.f09801c75747fp-955,
     0x1.96e13a6295288p-820, 0.0, 0x1.78ec1016b8515p-487, 0.0, 0x1.5bbaf4f413f6bp-237,
     0.0, 0.0, 0x1.cc89ba30ceaep-376, 0.0, 0x1.d5f04879703ccp-512, 0.0,
     0x1.f8f4fa1fbbc9bp-105, 0.0, 0x1.d6dbc25848674p-51, 0.0, 0x1.7e81b86095a4bp-826,
     0.0, 0x1.8b80d582c9bfdp-817
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
            tmp1 = Sleef_atand1_u35purecfma(tmp0);
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
    printf("Sleef_atand1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atand1_u35purecfma bench acc %la\n", global_bench_acc);
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
