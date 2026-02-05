/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd2_u35kvx.c --function \
 *     Sleef_finz_tanhd2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0x1.1205c5f7d2a46p-487, 0x1.f4a3cb707eaaap-296, 0x1.2b6a08f3e0ab8p-952, 0.0,
     0x1.6f559cd5fa1c6p-373, 0x1.1e3a2e1b9573bp-129, 0.0, 0.0, 0x1.09d1efd845d2dp-179,
     0.0, 0.0, 0.0, 0x1.f0cb1a0c653f4p-652, 0x1.a073e60e5c4e5p-175,
     0x1.3509fbd2c338cp-583, 0x1.2dde4423f7794p-552, 0x1.73e93c6703f33p-548, 0.0, 0.0,
     0x1.6113445545304p-892, 0x1.08ab129ed482p-130, 0x1.0f5b21185f51ep-583, 0.0, 0.0,
     0.0, 0x1.bfaa4ad8b80dp-292, 0.0, 0.0, 0x1.259214b012c4fp-875, 0.0,
     0x1.89704451913ecp-795, 0x1.967dc235a5dbcp-646, 0.0, 0.0, 0.0,
     0x1.668b44a6c0c94p-981, 0x1.118aa8942da66p-442, 0.0, 0.0, 0.0,
     0x1.9611e471125f4p-635, 0.0, 0.0, 0x1.c244fc9e1dc72p-154, 0x1.7f052537ef57fp-410,
     0.0, 0.0, 0.0, 0.0, 0x1.0a82e330b99fbp-735, 0x1.c72f70cc24b31p-942,
     0x1.485a70c677cd2p-54, 0.0, 0.0, 0.0, 0x1.ea5da81d429fap-489,
     0x1.69f0085f6b041p-776, 0.0, 0x1.dc03889388a95p-1005, 0x1.573a4ff45d713p-884,
     0x1.696a4f20751cdp-343, 0x1.57bcaa510249ap-679, 0x1.32515c65862cdp-349, 0.0, 0.0,
     0x1.1ec28477a094p-988, 0x1.119132692fa2bp-714, 0x1.534a24431006ap-229,
     0x1.07b99c5ba5bdap-665, 0x1.fac783b169008p-396, 0x1.e5fc1203f4c56p-436,
     0x1.3b67c251b6f02p-745, 0.0, 0x1.65406f3c1570ep-981, 0x1.c7c7cf03c87abp-382,
     0x1.1f958fc6a00e3p-478, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4de05d3bea48p-237,
     0.0, 0x1.07ecafee6b635p-886, 0x1.9a76e9c1a1047p-693, 0x1.01bdde250faep-15,
     0x1.767defa4bf9e3p-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a4a6e4005e4bp-146,
     0x1.1d20260dce09bp-1022, 0x1.69ae41cac0383p-605, 0.0, 0.0,
     0x1.9c5fc58ca7985p-518, 0x1p0, 0x1.a5733d787a05ep-571, 0x1.a133b65f5169fp-561,
     0.0, 0.0, 0x1.dcb8c595bca82p-470, 0.0, 0x1.ec41b584a68ffp-718,
     0x1.154d0f5fb86b8p-1006, 0x1.241f1bbe9acd4p-905, 0x1.652f9a01ea5p-10, 0.0,
     0x1.6d4e7df891d6p-90, 0.0, 0x1.4285073a2ea5fp-811, 0.0, 0x1.42dd55bd740edp-537,
     0x1.168bdcf5fef9dp-142, 0.0, 0.0, 0x1.bef75ba8aa2f8p-887, 0x1.a818da0aa1dbep-708,
     0x1.df45e125e8058p-180, 0.0, 0.0, 0x1.8713c3ed4cc79p-356, 0.0,
     0x1.61b9b581f0d23p-312, 0.0, 0.0, 0x1.5919c4e9b9047p-69, 0.0, 0.0, 0.0,
     0x1.7f14c2b1b4ec7p-294, 0x1.867d16c02e814p-549, 0.0, 0.0, 0x1.ed644988c443p-940,
     0.0, 0x1.109e994e4f98fp-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c67809a106a5fp-808,
     0x1.013809f6c9bcap-628, 0x1.e63e22847daf9p-608, 0.0, 0.0, 0x1.a0c337899ef84p-662,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60319bf729705p-209, 0x1.e205ac8534958p-944,
     0.0, 0x1.b725a7ac948ebp-268, 0x1.192b054b61e1bp-592, 0x1.eb295e8da4d14p-583,
     0x1.d4eff8fbbap-946, 0.0, 0.0, 0x1.a11e581934b91p-878, 0x1.9225925893877p-492,
     0.0, 0x1.3b1c26314e774p-452, 0.0, 0x1.20c6b67f514bdp-740, 0x1.e892fbe974b87p-718,
     0x1.7c111206014fdp-586, 0x1.6767bfd73a975p-508, 0x1.7c6cc544dc94ep-214,
     0x1.c5c0ed8212647p-234, 0x1.dd59ba68062dcp-301, 0.0, 0.0, 0.0, 0.0,
     0x1.ce47776016095p-302, 0x1.8566bfd3d7962p-223, 0x1.c293dc5f1f81cp-388, 0.0, 0.0,
     0.0, 0.0, 0x1.6bcd8d13d2fc1p-478, 0x1.a357b5997d894p-170, 0.0,
     0x1.2efeadc8f105bp-402, 0x1.77b0f9fc43356p-725, 0x1.dde84eecd49a8p-676,
     0x1.e3f68c4ae49d5p-57, 0x1.09ad51ca099cp-439, 0x1.8cbed3ac2d2bfp-742, 0.0, 0.0,
     0x1.3784e711d2afcp-280, 0.0, 0.0, 0.0, 0x1.a7b78059b8addp-150, 0.0,
     0x1.cc762e04d1b09p-556, 0x1.1618ab6937234p-522, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e7963effc9babp-804, 0x1.7c04f107a21c2p-521, 0x1.966d1a5894979p-250,
     0x1.cdc4025484eeap-430, 0.0, 0.0, 0x1.4c1f0ba421778p-39, 0x1.85bef19d449f4p-502,
     0x1.6cc134b9ba7b6p-311, 0.0, 0x1.6a4b4126eebe3p-321, 0x1.2c5f4a66a204fp-270, 0.0,
     0.0, 0x1.9fb99c73dffe2p-173, 0x1.975bc0889b65fp-16, 0x1.d30f48095ffd8p-576, 0.0,
     0.0, 0x1.fd212dfe8db86p-725, 0.0, 0.0, 0x1.8875269b79a4bp-850, 0.0,
     0x1.7c8153afecd49p-369, 0.0, 0.0, 0x1.e12dc7ab7d08ap-124, 0.0,
     0x1.8ac0eabfa919ap-876, 0.0, 0x1.b9dd238a57da3p-618, 0x1.e7a3c0d9dd458p-640, 0.0,
     0x1.3a5eb0c96e391p-129, 0.0, 0x1.4b4fba429349ap-743, 0x1.536e083a82be8p-676, 0.0,
     0.0, 0.0, 0x1.0b1edf964a8cp-727, 0.0, 0.0, 0x1.c50d4a492c703p-945,
     0x1.4091be8d2167ep-168, 0x1.36a3e5d7c5721p-727, 0.0, 0x1.dc5f3baad8915p-935,
     0x1.9974ce6168705p-628, 0x1.55103ae64d6f2p-518, 0x1.8b8db818e2982p-154,
     0x1.21bee87e96ea7p-414, 0.0, 0.0, 0.0, 0x1.ccc2639478ec8p-217,
     0x1.0af16b0a72b29p-641, 0x1.e7b28a0989dacp-669, 0.0, 0.0, 0x1.8860dac61ce7cp-323,
     0x1.e97770a40f40ep-272, 0.0, 0x1.da1401ee25334p-947, 0.0, 0x1.7713c307f3013p-669,
     0.0, 0.0, 0x1.a1df60cf12c64p-797, 0x1.ce8645a962f86p-65, 0.0,
     0x1.90f928910e9f1p-381, 0x1.375151d7ce2aep-164, 0x1.c0d66a3b9e2a1p-127,
     0x1.7e61c5f1763fap-377, 0x1.ac3accd01001ep-907, 0x1.8d34a2eee403dp-148,
     0x1.a4be181af8035p-682, 0x1.54a7a6e01fdcfp-794, 0x1.95fd44cbf2cb6p-862, 0.0, 0.0,
     0x1.d742cf9bf7481p-187, 0x1.8a2435dbebf9p-311, 0.0, 0x1.f0075ca35a429p-450,
     0x1.fd00d81f8cdcap-486, 0x1.d526dc71a223dp-116, 0x1.557f79057701ap-29, 0.0,
     0x1.280ec801c683fp-815, 0x1.89cea766dd4ecp-996, 0x1.f9007ce9a314cp-658, 0.0,
     0x1.73d487e6c5faep-292, 0x1.c3a57b639f70dp-417, 0.0, 0.0, 0x1.09556d6616bfp-1014,
     0x1.b9d5b368a89fap-802, 0x1.7123cfab973fdp-937, 0.0, 0x1.858766ec3b66bp-221, 0.0,
     0.0, 0x1.e4f147c3210d8p-396, 0.0, 0.0, 0.0, 0x1.9f05dd8acd2b6p-762, 0.0, 0.0,
     0x1.2eaa2273a8d82p-106, 0.0, 0x1.d6d5e22e48605p-133, 0.0, 0x1.3676ec81780bbp-731,
     0x1.ccf92f7da8012p-752, 0x1.7c1c8cea3b1edp-331, 0.0, 0.0, 0x1.1175458909aa8p-985,
     0x1.7961fba155e13p-91, 0x1.0987c3086b01ep-678, 0x1.e0ef585f00e4ep-313,
     0x1.0e6b5a64c0556p-168, 0.0, 0.0, 0x1.fb144d47ea387p-671, 0x1.a6886c3834bccp-989,
     0.0, 0x1.5a4ad953da9aep-186, 0.0, 0.0, 0.0, 0x1.d70eeae79bc11p-1012,
     0x1.6d9f7f13143abp-369, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f06942c5efc2p-47,
     0x1.016b6a719aef2p-468, 0x1.28dd10e75f4c7p-596, 0x1.57984eca14d4dp-847, 0.0, 0.0,
     0.0, 0.0, 0x1.fd02302299f39p-428, 0.0, 0.0, 0.0, 0x1.f7429eb8f92aap-515, 0.0,
     0.0, 0x1.f8a2b77cdac0ap-36, 0x1.a1abf5a874ab4p-610, 0x1.ee3cd2b9cd94bp-129, 0.0,
     0.0, 0x1.5c364b8b36962p-203, 0.0, 0x1.4170427f83cb5p-426, 0x1.4e841b3dc5abap-714,
     0x1.c7465d2294e1ep-232, 0x1.55dd714a8ce9bp-488, 0x1.3188dbcc84371p-669, 0.0,
     0x1.e88529b60499fp-964, 0x1.54e5caeeb649p-585, 0.0, 0.0, 0x1.15c036766e3d4p-432,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fccb04243dc1p-212, 0.0, 0.0,
     0x1.9829f8e5dbe73p-373, 0x1.e84d49e42c13ep-675, 0x1.1830cb2d6c61cp-276, 0.0,
     0x1.0804bb516fa98p-527, 0.0, 0.0, 0x1.f573eb9a3ea1ap-640, 0.0,
     0x1.9186f75f15e1bp-974, 0.0, 0x1.a2b230b8472f7p-752, 0.0, 0.0, 0.0, 0.0,
     0x1.6e871a50dab88p-1012, 0x1.267b7a95b3fc9p-35, 0.0, 0.0, 0.0,
     0x1.be7f67c737684p-482, 0x1.102036a095496p-754, 0x1.8d2487ea7709cp-140,
     0x1.4cd26ba3724dp-339, 0.0, 0x1.9e117345de5fap-389, 0x1.efac989718572p-407,
     0x1.63bef938ea34ap-750, 0.0, 0x1.bc16a83b74dc2p-44, 0.0, 0.0,
     0x1.d52948e7866b9p-639, 0x1.bad6f6c23de01p-475, 0.0, 0.0, 0.0,
     0x1.9eb105b0f3d22p-464, 0.0, 0x1.16176e6baa989p-637, 0x1.4589cc119dc73p-773,
     0x1.ac6fbb8fb0597p-316, 0x1.20264ad19e97bp-837, 0x1.df134d5e39b64p-785,
     0x1.2bcb761ab0c1ep-415, 0x1.73a9a5b4b1c88p-863, 0.0, 0.0, 0.0,
     0x1.02f6ec9ace1ecp-277, 0.0, 0.0, 0.0, 0x1.50ee9b334efeap-211,
     0x1.6a684b544511fp-387, 0x1.429931d4ce77cp-269, 0.0, 0x1.471ee687e16bcp-800, 0.0,
     0.0, 0.0, 0x1.5ab3e8fecded9p-750, 0.0, 0.0, 0.0, 0x1.f711a09e0e223p-347, 0.0,
     0.0, 0x1.6656f4a8b0aeep-127, 0x1.1646464102e64p-654, 0x1.1dcc222c351a2p-913,
     0x1.4017126495aabp-152, 0.0, 0x1.0e9b9cb8ea44p-803, 0.0, 0.0,
     0x1.61ed29afae129p-174, 0x1.b2acf6134f91bp-702, 0.0, 0.0, 0.0, 0.0,
     0x1.1c619fe890475p-335, 0.0, 0.0, 0x1.a4d42c5630e38p-103,
     0x1.5642f3c48e659p-1003, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.090029542b0edp-534,
     0x1.54658d72d7575p-203, 0.0, 0x1.127e40dc02decp-639, 0.0, 0x1.d0a938d59c979p-498,
     0.0, 0x1.26aad31c759e4p-60, 0x1.982d0faa4ee84p-139, 0.0, 0.0, 0.0,
     0x1.30d0fda15c5cep-102, 0x1.b159294742269p-48, 0x1.9251310fec8cp-1016,
     0x1.e2af9e275268ep-256, 0x1.6a369c8c0d29ap-595, 0x1.c3e29273feaafp-286,
     0x1.90b2af6ca0538p-377, 0x1.9be8c5a2f3237p-60, 0x1.4b0e20173c1c8p-117, 0.0, 0.0,
     0.0, 0.0, 0x1.78d866a76aa97p-605, 0.0, 0.0, 0.0, 0x1.650cc0a58d79ep-573, 0.0,
     0x1.46e718fda4d1ap-315, 0.0, 0.0, 0x1.83c47e38f606fp-975, 0.0, 0.0, 0.0,
     0x1.fe59af4fcb665p-600, 0.0, 0.0, 0x1.9f88c7caea771p-995, 0.0,
     0x1.9378d168ff5fbp-594, 0.0, 0x1.e120c063f3de2p-422, 0x1.fb3c03e80c378p-1009,
     0.0, 0x1.6bd26eb9f97fp-77, 0.0, 0.0, 0.0, 0x1.ff1c6e55c9417p-3, 0.0,
     0x1.56bbd48b812dcp-663, 0.0, 0.0, 0.0, 0.0, 0x1.2730cc3f36b89p-736, 0.0,
     0x1.38cf7631edba5p-204, 0x1.5321445c8dc71p-287, 0x1.dbf99a3ec49ap-231,
     0x1.c2a59d282b17bp-822, 0x1.42a73f04d11bcp-520, 0.0, 0.0, 0.0,
     0x1.d1cc807b2c554p-473, 0.0, 0x1.d4c28dc7bf17ap-221, 0.0, 0x1.1225d64c87a87p-198,
     0x1.91ba9e946fedfp-876, 0x1.81a423cdedb73p-832, 0.0, 0x1.862b4b76daecfp-213, 0.0,
     0x1.d34274e0381b8p-737, 0.0, 0.0, 0.0, 0.0, 0x1.15f0c9e32094dp-910,
     0x1.699224296f752p-790, 0x1.7c935306a9daep-1015, 0x1.538da28094177p-1007,
     0x1.d215dc2fd4778p-567, 0.0, 0x1.8ffb2e7fe75d2p-75, 0.0, 0.0,
     0x1.885ded2d21b7ap-791, 0.0, 0x1.265b947aedb13p-143, 0x1.ba663a96ff253p-418,
     0x1.adc11707486f5p-462, 0.0, 0x1.3a36557a93e9ep-453, 0x1.65d081ae1ac96p-760,
     0x1.b50a486e05906p-250, 0.0, 0.0, 0x1.2e986888759bfp-297, 0x1.8947934fc36ep-849,
     0.0, 0x1.c619c564724fep-59, 0.0, 0x1.7cabe55ddfa94p-143, 0x1.952983d764b8fp-669,
     0.0, 0x1.1b79a30172495p-394, 0x1.edf6b62b5270fp-265, 0x1.20d1178e3c088p-639, 0.0,
     0x1.e931e9c2043a7p-428, 0x1.8c588d49c1ac1p-473, 0x1.e402956d936e8p-34, 0.0, 0.0,
     0.0, 0.0, 0x1.c0c5864016927p-861, 0.0, 0x1.fe0974ab513cep-973,
     0x1.768bf23702de3p-341, 0.0, 0.0, 0.0, 0.0, 0x1.35d49d5367ed3p-362, 0.0,
     0x1.52a6d739094f9p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2606e46c9dae7p-379,
     0.0, 0x1.3529b89ba8d8ap-820, 0.0, 0x1.58e91cb0f941ep-818, 0x1.7ec3502859832p-825,
     0.0, 0.0, 0.0, 0x1.6eb0093e3c5f3p-679, 0.0, 0x1.b499668f4fb7bp-240,
     0x1.ba705772cec9ap-993, 0.0, 0x1.facaade92910ep-495, 0x1.4aaa62b6e8beap-310, 0.0,
     0.0, 0x1.f6e9502b055p-775, 0x1.05918c9b085e5p-719, 0.0, 0x1.95dc289e515cfp-148,
     0x1.c4027578c2432p-22, 0.0, 0.0, 0.0, 0.0, 0x1.7fcf20428bb1cp-225, 0.0,
     0x1.9185d57ac4001p-522, 0.0, 0x1.38d49bcf6da92p-949, 0x1.501cb3eabfe2cp-970, 0.0,
     0.0, 0x1.08020b6edf4dp-777, 0x1.b3becaab93011p-1017, 0.0, 0.0, 0.0, 0.0,
     0x1.81d9f0de338fcp-338, 0x1.92b000d2826a2p-201, 0.0, 0.0, 0.0,
     0x1.ef928902873d9p-7, 0.0, 0x1.e291840d86a07p-784, 0x1.5552c6bb6d083p-592, 0.0,
     0.0, 0x1.7e385fffb0641p-452, 0.0, 0x1.7b253cea65e53p-235, 0.0,
     0x1.bb1c7aa3b7226p-807, 0.0, 0.0, 0x1.e0e9d36a6fdp-234, 0x1.84cb978d6665cp-500,
     0.0, 0.0, 0.0, 0x1.b8c0755f6dc84p-56, 0x1.4df1b1672e154p-546, 0.0,
     0x1.edd52c4d540dfp-166, 0x1.d20ba9693c435p-903, 0x1.4f4a6167d8ab7p-661,
     0x1.2369fd570cf7dp-799, 0.0, 0x1.bc77feb96acp-511, 0.0, 0.0, 0.0,
     0x1.c3316647edfddp-613, 0x1p0, 0.0, 0x1.a8900ccd6bfb4p-253,
     0x1.4382874461a12p-74, 0x1.770a1fce7cb52p-984, 0x1.89b11b80f57c5p-758, 0.0,
     0x1.c385999f86f35p-371, 0.0, 0x1.81387fe1284c2p-390, 0x1.bf6d2e91bc1ebp-42,
     0x1.748582038b731p-40, 0.0, 0.0, 0x1.b4c6f6d7c4f75p-749, 0.0,
     0x1.5533273d16a68p-312, 0.0, 0x1.acd712cdd01d9p-179, 0.0, 0.0, 0.0,
     0x1.3bde1fe5f0044p-450, 0.0, 0x1.7e03c24f69613p-532, 0.0, 0.0,
     0x1.65db1e687fe84p-880, 0.0, 0.0, 0x1.9d9342abf1d88p-826, 0.0,
     0x1.fccb56ec21cbdp-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db608e97c8bfdp-743, 0x1.8e1648efc4d3p-748, 0x1.7d8778a4c317dp-587,
     0x1.f9ba1ba7c7ca3p-39, 0.0, 0x1.6d2d4519d1095p-824, 0.0, 0x1.8bc339588f7f9p-944,
     0.0, 0x1.7748155f2d2abp-687, 0x1.aac9ef832db75p-386, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b260a6955afc3p-689, 0.0, 0.0, 0.0, 0.0, 0x1.5e3d0701377dcp-230,
     0x1.f4391e580f9cp-360, 0.0, 0.0, 0x1.b5b5079153418p-268, 0x1.2b8ca45385663p-636,
     0.0, 0x1.54d8d77de3a99p-594, 0x1.257ed4e550c29p-719, 0x1.407e44166eb16p-189,
     0x1.2038321d35f0ep-90, 0x1.82561732c74c4p-478, 0x1.0b6dcb562ed5ap-849, 0.0,
     0x1.a63ab1c913b89p-639, 0.0, 0.0, 0x1.a41158749362bp-710, 0x1.546f50c509511p-291,
     0x1.5a894be22f8d5p-229, 0x1.f8d5945f328b8p-608, 0.0, 0.0, 0x1.0f5e53dfd0963p-898,
     0x1.1078460125649p-515, 0x1.e65697447dfdfp-756, 0x1.15c918928e9c1p-920, 0.0, 0.0,
     0x1.154cdd39a837cp-787, 0x1.3a68221180dccp-292, 0.0, 0.0, 0.0,
     0x1.01cddee4a4248p-617, 0x1.8b0eb6fba79e8p-926, 0.0, 0.0, 0x1.eead4c8ead72ap-414,
     0x1.0d1b3dd1dda26p-232, 0.0, 0.0, 0x1.04da08b1dd30ep-276, 0x1.386db69ca37a2p-772,
     0x1.3404d7057cb91p-601, 0x1.ddf24d6349356p-862, 0.0, 0.0, 0x1.a6fa0be12b29fp-203,
     0x1.5e3948715b513p-694, 0x1.0230e211fef54p-668, 0x1.3cf724568c66dp-147,
     0x1.640bb3bcb6c3fp-107, 0.0, 0.0, 0.0, 0.0, 0x1.c0f24b37279bdp-267,
     0x1.eb7132b19ceddp-877, 0x1.8492b265af579p-122, 0.0, 0x1.e811894260463p-737, 0.0,
     0.0, 0x1.3a52ab1ac6f43p-820, 0.0, 0x1.791f100bb6e0cp-26, 0x1.d3d501f00683ap-665,
     0.0, 0.0, 0x1.c25cb40b515e7p-602, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f632970868d9p-626,
     0x1.f6d9614067245p-92, 0.0, 0x1.21330dc572ac9p-276, 0.0, 0x1.d2644eb5ee17p-872,
     0x1.a7923bb7f607ap-841, 0.0, 0.0, 0x1.772b018ab6558p-39, 0x1.bb48886696ap-3,
     0x1.4406716bcee83p-415, 0x1.b9d74f7c2d778p-992, 0x1.0ff58ada9a63bp-175,
     0x1.99d61b84cae43p-757, 0x1.1b8b5dd8c4601p-564, 0.0, 0.0, 0x1.245f520f4809bp-762,
     0x1.c084f5f176d15p-1009, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86ccb1cfa8b92p-775, 0.0,
     0x1.27794df843893p-360, 0x1.74893154667c8p-456, 0x1.03d2f4bbbae39p-17,
     0x1.3b74e9c0ffa2p-791, 0.0, 0.0, 0x1.756fce33cd4c3p-747, 0x1.298fc3318187dp-772,
     0x1.6e68498c28626p-216, 0.0, 0.0, 0x1.2bd5b6009feaep-110, 0x1.b0933613b3fefp-219,
     0.0, 0.0, 0x1.018e3068027fcp-317, 0x1.02510292a3126p-852, 0x1.41e4adfbd7806p-20,
     0x1.4c193db90d5d7p-691, 0x1.69062c35859dbp-1, 0.0, 0x1.1f2cf3428ae36p-870, 0.0,
     0.0, 0x1.4bada00ec3d77p-620, 0.0, 0.0, 0.0, 0.0, 0x1.1152c62272f56p-569,
     0x1.472fd1d9ab09ap-165, 0x1.8288469b73991p-913, 0.0, 0.0, 0x1.f91e6f1918a24p-742,
     0.0, 0.0, 0.0, 0x1.b0eed73d27e04p-1000, 0.0, 0x1.5c0a23eda2f9ap-592,
     0x1.8cbdfc8ea1c53p-748, 0.0, 0.0, 0x1.3da197044a536p-686, 0.0, 0.0,
     0x1.7db3fc3f403fp-1008, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac0804cd7419fp-494,
     0x1.a5228e75f4e17p-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.46b37fa1dc64p-824,
     0x1.9a32a0f92c5bbp-678, 0x1.923e07b392eb1p-484, 0x1.21005de80a3ccp-327, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d61682782911dp-516, 0x1.fe75c4c82194p-448, 0.0, 0.0,
     0x1.c5ce4eebb8b41p-116, 0.0, 0.0, 0.0, 0.0, 0x1.cc9b53aeaf825p-666,
     0x1.0d9c5127dc953p-382, 0.0, 0x1.90d1f71b0c8eep-84, 0x1.b68cfc362f7b7p-279, 0.0,
     0x1.89bc73de50d25p-920, 0.0, 0.0, 0x1.9242bc3dc7bbbp-133, 0.0,
     0x1.ab8799edac1bbp-974, 0.0, 0.0, 0x1.b245323cb8142p-897, 0x1.fe01a30b2227bp-808,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.67da2c52cf70cp-239, 0.0, 0.0,
     0x1.38c6812d95acep-10, 0x1.dda91ce18165cp-954, 0x1.cdbf3362693fap-410,
     0x1.68c2dc90295d3p-106, 0x1.3255106293bcap-676, 0x1.f69ebce3ec3ccp-954,
     0x1.a548c0511d7bp-527, 0x1.7053c553d1f6dp-904, 0.0, 0x1.4d54e69903abp-604,
     0x1.8c9771be57f21p-449, 0x1.9ba74b33cd439p-962, 0.0, 0.0, 0x1.7fd3c7aa7fa4bp-658,
     0.0, 0.0, 0.0, 0.0, 0x1.7ec2e48d8643bp-618
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
            tmp1 = Sleef_finz_tanhd2_u35kvx(tmp0);
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
    printf("Sleef_finz_tanhd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tanhd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
