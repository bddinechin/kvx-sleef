/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind1_u35purecfma.c --function Sleef_sind1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.00190cc6930a8p-359, 0.0, 0x1.dd2df20f1bdf9p-722, 0x1.3d19ebe85ac0bp-768,
     0x1.e0879759b0ec5p-140, 0.0, 0.0, 0x1.90c93b9a5fdd6p-177, 0.0,
     0x1.4e8fb419d89abp-252, 0x1.f52a6c5479f3bp-971, 0.0, 0x1.b76e43547336ap-320, 0.0,
     0x1.12103954dc01fp-1016, 0x1.ebaefa8cd4997p-1000, 0.0, 0x1.7842bbd9a32a9p-674,
     0.0, 0x1.004dc0cd0b9c6p-237, 0.0, 0x1.c5275dc5d8995p-95, 0.0, 0.0, 0.0,
     0x1.dd78304a3ed44p-438, 0.0, 0.0, 0x1.944ecd6f30997p-446, 0.0,
     0x1.6ea2dce5ad303p-901, 0.0, 0.0, 0.0, 0.0, 0x1.10fef89cdab49p-757, 0.0, 0.0,
     0.0, 0x1.875edc8b4afcfp-1012, 0.0, 0x1.7026a107af1c3p-597, 0x1.9dfa247c62c4p-926,
     0x1.46713626a385ep-71, 0.0, 0x1.327b5e7ffaaaap-535, 0x1.13ea94a38059p-356,
     0x1.0212f06f1df2p-483, 0.0, 0x1.af09c0b84b609p-169, 0.0, 0x1.d9e0dade8511fp-685,
     0x1.cbbe52743734dp-354, 0.0, 0.0, 0x1.2ae7adef3199fp-243, 0.0, 0.0,
     0x1.daae2a623034bp-520, 0.0, 0.0, 0.0, 0.0, 0x1.457516a031851p-664,
     0x1.9859795495a22p-839, 0x1.e7d46287f00d1p-881, 0x1.ba1be782c6b48p-467, 0.0,
     0x1.cd2c436c79498p-273, 0.0, 0x1.78e434d7b08c5p-274, 0x1.e4a972440b0dfp-407, 0.0,
     0x1.874d8bbe5bb98p-826, 0.0, 0.0, 0x1.d3b1a09c092c9p-940, 0.0,
     0x1.712d65623f472p-936, 0x1.9bbbdd365306bp-222, 0.0, 0x1.90c2f18c418adp-425,
     0x1.2f927759e195bp-269, 0.0, 0.0, 0.0, 0x1.cadcaa102faf6p-716, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.376597dd97ac5p-703,
     0x1.dde739e9fc42ap-435, 0.0, 0.0, 0x1.1ae6c011ca889p-633, 0.0,
     0x1.191bb3d1f26dcp-158, 0x1.f989e2a591a67p-603, 0.0, 0.0, 0x1.6621714e45e1bp-539,
     0.0, 0x1.8c3d3eaec072p-371, 0.0, 0x1.3f9561fa2d914p-571, 0.0,
     0x1.b6a11edf21dd2p-910, 0.0, 0x1.a78b379e3c95ap-575, 0.0, 0.0,
     0x1.158a37601a4bep-870, 0x1.167d97870beacp-766, 0.0, 0x1.d57ac7259c5d5p-26,
     0x1.c4fb83f5f7fdep-696, 0.0, 0x1.7c3160c3d1ae2p-955, 0x1.e7ecc4df88124p-5, 0.0,
     0x1.376edc752d4b4p-875, 0.0, 0x1.9bb46a36a2169p-120, 0.0, 0x1.b29891592406ap-774,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d9f0905d61eap-56, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7e9a8c755e8fap-950, 0.0, 0x1.6d0dedc84317p-7, 0.0, 0.0,
     0x1.05fb3aa825013p-66, 0x1.76a46757d2d6ap-219, 0.0, 0x1.13f75cf4e0e21p-126,
     0x1.ae3b364cb73dbp-925, 0x1.4ed35a5c27166p-934, 0.0, 0.0, 0x1.d6293a3a233bap-772,
     0x1.8d5dcee511366p-1021, 0x1.0776e6b434d97p-790, 0x1.2f3805c0d4b5bp-307,
     0x1.b7db1f4fefd12p-395, 0.0, 0x1.0ff40e1b5af54p-966, 0.0, 0x1.ac6d54d038246p-438,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.868d89291a699p-197, 0x1.07c4a47788947p-728,
     0x1.79be077b00f96p-380, 0x1.8223fb7481f83p-937, 0.0, 0.0, 0x1.62a74b62d7ff4p-638,
     0.0, 0x1.36db3457575adp-436, 0.0, 0.0, 0x1.1733bc820aefdp-100, 0.0,
     0x1.6ba5062a3f3fdp-241, 0x1.092d744de1642p-630, 0.0, 0.0, 0.0,
     0x1.6fd8dfd37f636p-938, 0.0, 0x1.21205824ea794p-665, 0.0, 0.0,
     0x1.e5a5c3d8c9d0cp-882, 0x1.290b0664f2f27p-416, 0x1.8d926c4c7e346p-526, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ba49443ef312ap-86, 0.0, 0x1.957bfdc409bf2p-84, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6adc80960031ap-277,
     0x1.00df2b4b8e7ep-118, 0x1.3ca3bcdf95deap-401, 0x1.e1a09543b112ep-521,
     0x1.e872382d4dfbbp-688, 0x1.5ee516931b80ap-867, 0.0, 0.0, 0.0, 0.0,
     0x1.33a4961fd30c6p-380, 0.0, 0.0, 0x1.b72ccbb6daa09p-844, 0x1.fb7e05a4af5fdp-131,
     0.0, 0x1.771b8e2b1867cp-791, 0x1.c7ceb7a92fc3fp-5, 0.0, 0x1.2015bdd04f49ap-889,
     0x1.5722613bf8331p-337, 0x1.d3a0cada6c57cp-392, 0.0, 0.0, 0x1.c1e0916cf4daep-729,
     0x1.60da8a2cbb0f3p-647, 0x1.6ec8f123eee8dp-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0561fbea026a2p-611, 0.0, 0x1.d282c24e67b8fp-163, 0.0, 0.0,
     0x1.d34b9aa6d4838p-158, 0x1.4e5438a8f826cp-282, 0x1.977a3ee25d2b1p-463, 0.0, 0.0,
     0x1.a10eccdfb6b84p-883, 0x1.d88ff81794931p-252, 0.0, 0x1.122df45295c0ap-259,
     0x1.b3a7449e0c1c7p-121, 0.0, 0x1.8f0964ed0e5fcp-596, 0x1.c91268ed1dbd8p-931,
     0x1.ccac5a14f5c7ep-508, 0x1.4f7fadfc5ef6p-164, 0.0, 0.0, 0.0,
     0x1.cc5093ce5c754p-627, 0x1.70ef20c529896p-39, 0.0, 0x1.804eccdbeeedap-107,
     0x1.d6918deb738e5p-190, 0x1.b343692e43c9ap-972, 0x1.e88421aee4546p-303,
     0x1.498e6e28ee6c5p-1004, 0.0, 0.0, 0x1.79fa766b9353cp-990,
     0x1.fcb155f06d283p-193, 0x1.cc57fcc3dcbc8p-94, 0.0, 0x1.66597ba04460ep-230, 0.0,
     0.0, 0x1.fedbaa1a21ed7p-637, 0x1.07c37ee050ef2p-28, 0x1.63ad4004923f1p-82, 0.0,
     0x1.47dce1f8c87p-192, 0x1.323d0d08994ep-299, 0.0, 0x1.248c59cbcd93p-683,
     0x1.971caa62964cep-227, 0.0, 0x1.016aa3a1054a5p-20, 0x1.930477edd8298p-909,
     0x1.7ae7bab5ee03p-117, 0x1.eaad0e8c7d3fbp-669, 0.0, 0x1.ee03f4e206cbap-722,
     0x1.4696153b77247p-233, 0x1.150c5a972929ep-414, 0x1.aa76442b86f97p-647,
     0x1.6de4b3c99258cp-914, 0x1.c11c780573097p-548, 0x1.441a1d602b0f4p-899, 0.0,
     0x1.02ae626b8f624p-381, 0.0, 0x1.4f3af16b45383p-205, 0x1.a61635a98e794p-1000,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1511fcfa7158dp-1013, 0.0, 0.0, 0.0,
     0x1.6587adb4914f7p-488, 0x1.a35a5fcf37161p-492, 0.0, 0.0, 0.0,
     0x1.5a9c7f2ddfb71p-961, 0x1.dd2ecf127e445p-401, 0x1.8c5cf95d65001p-23,
     0x1.70fbfafc95fe2p-926, 0x1.0d2b0c88277c7p-598, 0x1.31c20944f1befp-158,
     0x1.be775552acc9ep-586, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25c7bc090a0dfp-920,
     0.0, 0.0, 0.0, 0x1.cbc7a3b89773bp-462, 0x1.c767a2bb0fb01p-80,
     0x1.97684e5ab98acp-793, 0.0, 0x1.230bf52c92c6p-93, 0.0, 0x1.cc3184d04750ap-752,
     0x1.43ffbe350516ep-229, 0.0, 0x1.7d87c0f86c401p-400, 0x1.4646d913f16fdp-659, 0.0,
     0x1.d6802ba4eb21fp-428, 0x1.e62444b8ee914p-938, 0x1.5680a5e5be1fdp-239,
     0x1.e35f8ecbca05dp-714, 0x1.601fd6368780dp-540, 0.0, 0x1.960868e0e06a6p-581,
     0x1.17cc79992f27bp-448, 0.0, 0.0, 0.0, 0x1.60e903693be66p-684, 0.0,
     0x1.0d7f7daf02575p-918, 0.0, 0.0, 0.0, 0x1.dd4989dc656fep-601, 0.0, 0.0,
     0x1.dbf728680196bp-794, 0.0, 0.0, 0x1.29a9bbc48932p-576, 0.0, 0.0, 0.0, 0.0,
     0x1.27d3c0fcf8eccp-606, 0.0, 0x1.67235d28f2c63p-215, 0x1.00efbfc0451bfp-269,
     0x1.b9938ba573a52p-170, 0.0, 0.0, 0x1.52dbf370f0391p-759, 0.0, 0.0, 0.0, 0.0,
     0x1.eb955187a97aap-419, 0.0, 0x1.9bc5704976795p-725, 0.0, 0x1.c6f9c76f8dabfp-32,
     0.0, 0.0, 0x1.e81597ddc1345p-968, 0.0, 0.0, 0x1.c12b9f7c840ecp-330, 0.0,
     0x1.3b23301c0f07fp-740, 0x1.abf2b87681164p-47, 0x1.9d191b1944a32p-644, 0.0, 0.0,
     0.0, 0x1.ae21991c578abp-177, 0.0, 0x1.ee4779ebb830ap-98, 0x1.9be6c114a3056p-648,
     0.0, 0.0, 0.0, 0x1.12e7b28c0197ep-103, 0x1.b74e92ec07e72p-143, 0.0, 0.0,
     0x1.02df14dc99f57p-6, 0x1.e45125a0186bcp-725, 0.0, 0x1.67ef343b28b91p-817, 0.0,
     0.0, 0x1.3bd91eb645b2ep-662, 0x1.90f868ce83623p-781, 0.0, 0x1.2312dcb23b182p-963,
     0x1.86461a70ab828p-378, 0.0, 0x1.0bb16f2a8655bp-651, 0.0, 0x1.35af9a75665f4p-372,
     0.0, 0x1.747c90564bfcbp-568, 0x1.3bf0fe89a0413p-319, 0x1.65e81ea2a6b3fp-493, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c59d607fb6339p-599, 0x1.2cab25cf308bfp-80,
     0x1.11dcbd2c4e7dep-355, 0x1.21e1a9fc66019p-1015, 0.0, 0x1.275ba8167fa12p-153,
     0.0, 0.0, 0.0, 0.0, 0x1.ce5659494d6eap-947, 0.0, 0x1.84ab1bcead8eap-755,
     0x1.344cbbe3aea8dp-151, 0x1.b2ff3f507c2e1p-895, 0x1.191e5c4023f69p-534,
     0x1.d1a6fc6af08b9p-360, 0x1.3ac38f3deb276p-315, 0.0, 0.0, 0.0, 0.0,
     0x1.411b50c062939p-279, 0.0, 0x1.3427fff287318p-996, 0.0, 0x1.87259100535cp-915,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25ee2a4fc8e3fp-206, 0.0, 0.0,
     0x1.dc16924a06376p-293, 0.0, 0x1.2266af4024a14p-251, 0x1.8ce5df08ec3b1p-819, 0.0,
     0.0, 0x1.29eb875726f2ep-451, 0x1.85b1bdb2776afp-6, 0x1.b760b54465986p-259,
     0x1.1a37f24b44f16p-77, 0x1.bbff53334706dp-503, 0x1.70c22abac1ce7p-673, 0.0, 0.0,
     0.0, 0x1.964f58af55872p-248, 0.0, 0x1.db2db0d9e2e4fp-476, 0.0, 0.0, 0.0,
     0x1.9a2809c995428p-639, 0x1.0d6b47811955p-566, 0x1.f2ec09ca1347dp-824,
     0x1.78276fe65fa8dp-704, 0x1.a2430fe03df0dp-374, 0.0, 0x1.c7a8b635712a9p-804,
     0x1.0f606c737488bp-531, 0x1.f32f71acaf57dp-279, 0.0, 0x1.2f3831f47157fp-623,
     0x1.f4195cb7612bp-358, 0.0, 0.0, 0.0, 0x1.c7aedad977d36p-574,
     0x1.1d3d4d65df3a5p-804, 0x1.767955b244adp-878, 0x1.53c3df3ff5bbfp-699, 0.0, 0.0,
     0x1.bdaf25148b446p-786, 0.0, 0.0, 0.0, 0x1.0b662e53e85e1p-173,
     0x1.2e3a4b36e77f8p-332, 0.0, 0.0, 0x1.79327c866686fp-366, 0x1.3d8d53cc93685p-280,
     0.0, 0.0, 0x1.f39fc07772944p-153, 0x1.1a7e4161a87e2p-165, 0.0,
     0x1.ae9dc39a81c9fp-55, 0x1.ca82718605dcbp-242, 0.0, 0x1.64b2ae6100f91p-214, 0.0,
     0.0, 0x1.8fbb36f13ee6ap-69, 0x1.be45ae50ed529p-477, 0x1.248e0dba49ac9p-649, 0.0,
     0.0, 0.0, 0.0, 0x1.397e36636d128p-121, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbfe1ae2c35f4p-135, 0.0, 0x1.dcecd2b9087bep-828, 0x1.ca7cb02a51997p-17, 0.0,
     0x1.60c05ac2cf56bp-774, 0.0, 0x1.c30104e9c0202p-196, 0.0, 0x1.7a79fc074989fp-611,
     0.0, 0.0, 0x1.1cc17221a9e3ep-609, 0x1.da441f985a948p-1000, 0.0,
     0x1.d1c6486b7ff28p-633, 0x1.499929e38cf3cp-204, 0x1.42e1414eca64p-1002, 0.0, 0.0,
     0x1.16889b9548121p-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eacd88a10f11dp-231, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f365d514b625dp-537, 0.0, 0x1.5fd57f78ecee8p-934, 0.0,
     0x1.9684fc31b2825p-524, 0x1.08090cb7ecc7ap-690, 0x1.8c309ab95beb3p-708,
     0x1.f584939f08f87p-156, 0x1.7b429d01d733bp-718, 0x1.1cd2777db7b2p-968, 0.0,
     0x1.da28fa80fceb3p-930, 0x1.568c0e1098114p-381, 0.0, 0.0, 0x1.7b9f40e80a5edp-926,
     0.0, 0x1.45ee5b171b2dbp-910, 0x1.4deeb5d2c98f2p-562, 0.0, 0x1.69c9d6ed64447p-107,
     0x1.2ab3c1fb5e7ebp-788, 0x1.8d736aee9e9ep-748, 0x1.c76adf5bdb235p-771,
     0x1.55d708ba996f3p-141, 0.0, 0x1.35ac1b99506aep-265, 0x1.7b664c0ba32d8p-178,
     0x1.f721ecba257d5p-360, 0.0, 0x1.4847ff8b54111p-50, 0x1.f2a17904f662p-582, 0.0,
     0x1.229c45ff2558ap-496, 0x1.b69b659b4c0ccp-399, 0x1.28ed40ae2d16cp-90,
     0x1.955ce26a29154p-876, 0x1.ebd00115b1f66p-112, 0.0, 0x1.8fddecd480862p-260, 0.0,
     0.0, 0x1.a174ea5115a03p-431, 0x1.a8cf532164abfp-348, 0x1.b4672c6c06244p-602,
     0x1.b25333d1fbbf9p-968, 0x1.10c4ea64b7091p-840, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9eddd196e8bdp-404, 0.0, 0.0, 0.0, 0x1.859f70c3e95b9p-915,
     0x1.d99ebb7a6ca88p-695, 0.0, 0x1.ba2cdbe8b26dp-999, 0.0, 0x1.d46431fcbeaf8p-155,
     0.0, 0x1.032e9faea272fp-101, 0.0, 0.0, 0x1.18fff13659b79p-10, 0.0,
     0x1.6ae5a32b5ef09p-232, 0x1.8d05638ded1efp-399, 0x1.779ef905ae116p-904,
     0x1.6faf93eab3787p-463, 0.0, 0x1.daa46915da91cp-270, 0x1.b52d227dcd9ap-793, 0.0,
     0.0, 0x1.37d95fcd80613p-440, 0x1.dabf7d8029d14p-47, 0x1.693080d8ca6edp-393, 0.0,
     0x1.b8e7ded59395ap-793, 0x1.78e9441926ee9p-326, 0.0, 0x1.b2f967db2050fp-707,
     0x1.59f86a29e47cfp-832, 0.0, 0.0, 0x1.38fcf5b7e6b9cp-758, 0x1.ac1094927c668p-44,
     0.0, 0.0, 0x1.dd3507431ddf8p-601, 0x1.931216a6d325fp-68, 0.0, 0.0,
     0x1.92f880ab01e88p-351, 0x1.e7fb6505e37e5p-465, 0x1.d93d75851f5ap-837,
     0x1.69c0d6e1d6f94p-863, 0.0, 0x1.b84a040e2c316p-920, 0.0, 0x1.bb645935c81bcp-105,
     0.0, 0x1.83c8f23d7ff57p-649, 0.0, 0x1.fb8a0650215d4p-942, 0.0,
     0x1.6d53cdddddd2cp-214, 0x1.f42e81fe86205p-81, 0.0, 0.0, 0x1.39e368ebf51c1p-100,
     0.0, 0x1.31e392f24606ap-987, 0x1.c3048c565e0dp-639, 0x1.fab26f2c13068p-46,
     0x1.4d9f417899452p-362, 0x1.c1395b5444eb8p-603, 0x1.5557efd53cad6p-437,
     0x1.1340fe11c0269p-1013, 0.0, 0.0, 0.0, 0x1.1add7b7d98136p-772, 0.0,
     0x1.2b3af72ac4277p-416, 0.0, 0x1.ba0fbb3a98772p-395, 0.0, 0.0,
     0x1.f0a2e8f70a1b7p-863, 0x1.5fdb939d8a6efp-82, 0x1.e99252d1b5b41p-320,
     0x1.e84f74ca38a6fp-888, 0x1.31641453440eep-190, 0x1.d13262b8c87dcp-417, 0.0, 0.0,
     0.0, 0x1.a5d29e78d7749p-1013, 0x1.1df19b9a98327p-690, 0x1.69be3f11227b8p-654,
     0.0, 0.0, 0x1.3247ad8bc41a7p-115, 0x1.30a728086f96bp-820, 0.0,
     0x1.b9a0e1b622c85p-728, 0.0, 0x1.be18459a608dep-552, 0.0, 0.0,
     0x1.a81434438924fp-377, 0x1.4967d1da0af57p-301, 0x1.ddd3e63bc052dp-669,
     0x1.bff1d8e8c41dbp-392, 0.0, 0x1.ddfa067f1d5acp-393, 0x1.f889a57d085cap-753,
     0x1.eaaba9153e6dp-537, 0.0, 0x1.ffb31133b098fp-88, 0x1.3a391c0f4e768p-5, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2b2f771b4c035p-766, 0x1.94efa6dd9e71dp-309, 0.0,
     0x1.e460a0c0068edp-394, 0x1.a7a62eba0687ep-104, 0x1.0e40d3d9dde33p-33, 0.0, 0.0,
     0x1.c6b9283bf65c3p-713, 0.0, 0x1.3dbbe2992aafp-692, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d3e89bbe8816p-755, 0.0, 0x1.d3795d1641f37p-282, 0x1.3ff41f50b010bp-622, 0.0,
     0.0, 0.0, 0.0, 0x1.9b4f9649fdebdp-745, 0.0, 0.0, 0.0, 0x1.26faa27c1aca4p-674,
     0x1.7954213993b2bp-565, 0.0, 0.0, 0.0, 0.0, 0x1.37244032211b5p-943, 0.0,
     0x1.06110fb04730fp-230, 0x1.fd2371edd4815p-742, 0x1.32304f9eb7ab5p-497,
     0x1.63243a1bc1cdbp-518, 0.0, 0x1.b8024b9aacb2bp-435, 0.0, 0.0,
     0x1.5280be763bd74p-29, 0.0, 0.0, 0x1.38ea65100f008p-199, 0.0,
     0x1.067a96efec76ap-3, 0x1.c390ee5a6d8bap-734, 0.0, 0.0, 0x1.1f30200a4ef3fp-393,
     0x1.f1efbb35db69ep-940, 0.0, 0x1.e3c58c36b36f8p-936, 0.0, 0.0,
     0x1.1fe23041a8cffp-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.879e8564ac82bp-609, 0.0, 0.0,
     0.0, 0.0, 0x1.8143d7b11d1abp-556, 0.0, 0x1.6d49164a710e6p-263, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.28fff7206ef43p-37, 0.0, 0.0, 0.0, 0x1.75ec816ed3939p-1005,
     0x1.1bcfbc15bfa7fp-905, 0x1.093fa6bca4846p-636, 0x1.32f2891492488p-66, 0.0,
     0x1.0726c6bff5cd8p-871, 0.0, 0.0, 0x1.7745a1ed797b1p-485, 0x1.566d2ccb9b5aep-830,
     0x1.0c4319ad7932p-428, 0x1.07f2d960df80cp-488, 0.0, 0.0, 0.0,
     0x1.c92196f03abp-82, 0.0, 0.0, 0x1.d33f078586671p-602, 0.0, 0.0,
     0x1.d018d5a599b13p-980, 0x1.eee150319d274p-632, 0x1.f4905c00749bcp-777, 0.0, 0.0,
     0x1.fe2e7a94fb6adp-225, 0x1.717989b6f2b55p-253, 0.0, 0x1.5a5788e075201p-348, 0.0,
     0x1.e46aa5197c3d2p-902, 0x1.2c97a9faf85cbp-592, 0x1.70dd7509c4195p-104, 0.0,
     0x1.f49839a7180a3p-946, 0.0, 0x1.db2cc4431a121p-801, 0.0, 0x1.9a689874edbe4p-199,
     0x1.55af2a3ebb318p-720, 0.0, 0x1.c4d627c87a764p-942, 0.0, 0x1.74c861865a1b6p-476,
     0x1.3de1f886563fep-631, 0.0, 0x1.aad869c47243fp-984, 0.0, 0.0, 0.0, 0.0,
     0x1.c0914ce67ce6fp-561, 0.0, 0x1.e3995e52d2e95p-94, 0x1.8d95836e8e177p-984,
     0x1.6baa41e65f466p-168, 0x1.6a3e849119e5cp-487, 0.0, 0x1.0f786c79eab22p-484,
     0x1.8812dae5e94acp-677, 0x1.70c095c10a318p-759, 0.0, 0.0, 0x1.e825f22c7ff12p-636,
     0.0, 0x1.acbd0eda0f4c9p-289, 0x1.d5d289ce37e9dp-282, 0x1.8f5b90bc3b2bep-431,
     0x1.a026f9fb6d59fp-701, 0x1.e83eb850f4267p-955, 0x1.d1642fc658771p-539, 0.0,
     0x1.65af95fb030ebp-752, 0x1.6a40e17a19ce4p-651, 0x1.f9495c25ddc27p-713, 0.0, 0.0,
     0x1.f94767c9cbaf9p-67, 0.0, 0.0, 0x1.a571ffa20312fp-385, 0.0, 0.0, 0.0,
     0x1.28d3a2ec53db9p-79, 0x1.f60d94405b114p-117, 0.0, 0x1.e498e05e95d9bp-232,
     0x1.1777c826d2951p-273, 0.0, 0x1.f0ed4046f1143p-389, 0x1.3282d5424b5ep-79, 0.0,
     0.0, 0.0, 0x1.1c08f00fe8864p-969, 0x1.ff855a688fc7ep-490, 0.0,
     0x1.ca0475bea3e83p-674, 0x1.0829453c253bp-960, 0x1.d5c81eadffdaap-975, 0.0,
     0x1.fcbaa29f1bdf9p-469, 0x1.0f9febc8df736p-202, 0x1.e19b99ceb8ab6p-487, 0.0,
     0x1.d931be5455fcep-266, 0x1.60787578d12efp-857, 0x1.fb099f7288b35p-313,
     0x1.916bb0e7ad13bp-361, 0x1.9b9643e3f33a4p-787, 0.0, 0.0, 0x1.0577329feecb1p-273,
     0.0, 0.0, 0.0, 0x1.c7a8e2c540219p-823, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7c7e23dd33b41p-434, 0.0, 0.0, 0.0, 0x1.73a9e9426eeaep-438, 0.0,
     0x1.2a751514f057bp-730, 0x1.6c446e75015fap-765, 0x1.269423b2396eap-748,
     0x1.a154f42315aa2p-249, 0.0, 0x1.5d1e6c8708d07p-863, 0.0, 0x1.388abd54d7b57p-454,
     0.0, 0.0, 0x1.0e53aa548a6d9p-695, 0.0, 0.0, 0x1.9d5cd06c8b6b5p-94, 0.0, 0.0,
     0x1.402e28987a851p-226, 0x1.e90ebad8cd80fp-453, 0.0
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
            tmp1 = Sleef_sind1_u35purecfma(tmp0);
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
    printf("Sleef_sind1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sind1_u35purecfma bench acc %la\n", global_bench_acc);
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
