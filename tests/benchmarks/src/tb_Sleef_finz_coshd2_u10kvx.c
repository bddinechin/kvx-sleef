/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd2_u10kvx.c --function \
 *     Sleef_finz_coshd2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.a6dfea3d1d7bep-104, 0x1.e2a651bdafb07p-311, 0x1.da02608a42661p-801, 0.0,
     0x1.2994a2b4b9615p-513, 0.0, 0.0, 0.0, 0.0, 0x1.acb1e64406ad3p-291, 0.0, 0.0,
     0x1.98c2c3da66b9ap-27, 0.0, 0x1.127c4c50bae9ep-714, 0x1.87a84c3fe8922p-273, 0.0,
     0.0, 0x1.590b4dc0cd3cap-550, 0.0, 0.0, 0x1.d568ce3ca8ad4p-931,
     0x1.8bb40a938602fp-625, 0x1.b5c5204d57c2fp-527, 0x1.ca04bc346d416p-1016,
     0x1.9824fd4d04763p-154, 0.0, 0.0, 0.0, 0x1.eda261690cd7bp-412, 0.0, 0.0,
     0x1.eb5117a004f31p-403, 0x1.2165573e0a0c2p-695, 0x1.c75dec9a32078p-727, 0.0,
     0x1.f844bd2b0a19cp-543, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e38e2abd4cc3ep-862,
     0x1.5b67dc7161d07p-1021, 0x1.358895fb81c93p-964, 0x1.a3554eb507838p-13,
     0x1.e31c995978151p-801, 0.0, 0.0, 0.0, 0x1.7b2574d328599p-662, 0.0, 0.0,
     0x1.b1e5ba2bf251cp-67, 0x1.c5098bf1bc4dfp-681, 0x1.71ed18ccb9169p-994, 0.0,
     0x1.1c886b2a7d60dp-528, 0x1.5fb53b3b12953p-818, 0x1.347eccc276f2ep-909,
     0x1.8fd6a86a0f389p-358, 0x1.34111adaa4be7p-401, 0x1.5bdc9378a1c81p-263,
     0x1.af7b3c70266edp-348, 0.0, 0.0, 0x1.e8c5dbd2bf1bdp-899, 0x1.1599cc6c56557p-267,
     0.0, 0.0, 0.0, 0x1.03fdaa9d2e57cp-23, 0.0, 0x1.e4572f85e1612p-978, 0.0,
     0x1.a6678f25fc4e8p-604, 0.0, 0.0, 0.0, 0x1.e8d7b7a7dac7dp-566, 0.0,
     0x1.272163212fd9ap-705, 0.0, 0x1.cbd0128f46c65p-1004, 0x1.f48a98fe661bap-910,
     0.0, 0.0, 0.0, 0x1.ab58ec81bd373p-850, 0x1.4b3cc44b7a6c4p-584, 0.0, 0.0,
     0x1.dce28af9b332cp-682, 0.0, 0.0, 0x1.f34bc7c2d37e4p-713, 0x1.4d87830b35a5cp-321,
     0x1.abdac141592b1p-962, 0.0, 0x1.9be53508486acp-885, 0.0, 0.0,
     0x1.126862973635fp-203, 0.0, 0.0, 0.0, 0x1.7cc923ed2326p-287,
     0x1.11d0f69891bf6p-529, 0x1.b7ae16298fad6p-655, 0.0, 0.0, 0x1.e55b3b7cf9e45p-3,
     0.0, 0x1.ff4b1d9381b65p-787, 0.0, 0x1.102a1f8d08eeep-439, 0.0, 0.0,
     0x1.3a11c3ed7642ap-902, 0x1.732a6c447461bp-265, 0x1.9efcdef650764p-482,
     0x1.ed21bff58a794p-804, 0x1.172a28a3bc983p-639, 0x1.05778c4db8a41p-552,
     0x1.f5cbf5590eb1p-124, 0.0, 0.0, 0x1.790d0d63aa55p-799, 0x1.e61183355921ap-999,
     0.0, 0.0, 0.0, 0x1.80ce369c75705p-434, 0.0, 0.0, 0.0, 0x1.7acde88a9a074p-183,
     0.0, 0x1.688716c75f7efp-384, 0.0, 0.0, 0.0, 0x1.51007934ad7d6p-77,
     0x1.26b2db345e2eap-913, 0x1.87d93356d882fp-456, 0x1.d5e5a6c8e2e3p-86,
     0x1.ea5942a00a33cp-456, 0.0, 0.0, 0x1.dcf31df29d7dap-1013,
     0x1.56e5e223f9695p-493, 0.0, 0.0, 0.0, 0x1.2ecfee69078d2p-278, 0.0, 0.0, 0.0,
     0x1.5f72550ac0b77p-548, 0x1.eadda9b479572p-286, 0.0, 0x1.6b3fcb55077dbp-696, 0.0,
     0x1.50cffcded3b34p-301, 0x1.ce0d4af89b8c4p-436, 0x1.68d05785d3249p-977,
     0x1.fff85cb143bdap-473, 0x1.ddf07efed0bcfp-63, 0x1.cd028e8a9433dp-856,
     0x1.c62ef0ee94af5p-1013, 0x1.e0bba0a8b7acep-202, 0.0, 0.0,
     0x1.739aaeff82d9fp-107, 0.0, 0x1.ae3cf704cd916p-40, 0x1.3e0f265bc15c6p-211, 0.0,
     0.0, 0.0, 0x1.60807f50cdf9dp-488, 0x1.ca5b3664e3127p-814, 0x1.d84f725b42b66p-842,
     0.0, 0x1.b9be8a14254cep-456, 0.0, 0x1.3679401f1acffp-242, 0x1.0e6cc0d76669ap-365,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ce3aa5fde28p-107, 0x1.89942c9aedca1p-231, 0.0,
     0x1.c202f072e3eabp-574, 0.0, 0x1.8b511f852e25bp-113, 0.0, 0x1.93a061f9bdd35p-416,
     0.0, 0x1.0a212972c2352p-967, 0x1.2f8fc2ce515eep-707, 0.0, 0x1.4fd8811937e8ep-568,
     0x1.dc0da15b1dc9fp-651, 0.0, 0.0, 0.0, 0.0, 0x1.b2993ca0d8c79p-88,
     0x1.9db6a0a7cb156p-416, 0x1.1b0250d828814p-619, 0x1.e1b78415c0099p-721,
     0x1.920fa9f4c16a5p-73, 0.0, 0.0, 0x1.944ff096d09ap-455, 0x1.b041bcb9ddf15p-572,
     0.0, 0.0, 0x1.807f1b3c02c29p-394, 0x1.42935a0826655p-745, 0.0,
     0x1.f881d0682dabfp-630, 0x1.27843ca1b5eb7p-412, 0x1.f07469ea7f1ffp-404, 0.0, 0.0,
     0x1.4d3c27dc6f14dp-821, 0x1.8a31689e0149fp-623, 0x1.afa23b442aeep-594,
     0x1.783135cb4d9f1p-52, 0x1.003aff6c7b401p-1009, 0x1.8f863190d9fb6p-308,
     0x1.dc3f05baf76cfp-406, 0x1.e869bbc14a167p-898, 0x1.1e64a63fc613dp-462,
     0x1.ac7dc2c5eb157p-95, 0x1.f0546edab5ad6p-582, 0x1.d951d26844e8p-402,
     0x1.5fa148a94a59cp-706, 0x1.04574d1e3feabp-916, 0.0, 0.0, 0.0,
     0x1.fde02a97bfdep-622, 0.0, 0x1.b7283d375ebe4p-11, 0x1.e84c7390cf4ccp-766, 0.0,
     0x1.0f56a5b980321p-216, 0x1.02e34f0f5bb71p-744, 0x1.74a4270a72c68p-950, 0.0,
     0x1.5a083c9f7daefp-860, 0x1.9524019c78dfbp-499, 0x1.dca7d5f7f3282p-452,
     0x1.bdd1f973b59a2p-112, 0x1.8188235dc7edep-266, 0x1.f9ffb6a43972p-512,
     0x1.eef2c349c85fap-639, 0.0, 0x1.f0dec1d6cb0d3p-482, 0x1.a55a3949aef83p-143, 0.0,
     0x1.c1257d35ab6eep-325, 0.0, 0.0, 0.0, 0.0, 0x1.2a6432fe70302p-44,
     0x1.4cf9a8b7b7c99p-300, 0x1.52f7bdd6b13bdp-34, 0x1.7cc3a991bf4eep-59,
     0x1.e9c2b31f9137cp-411, 0.0, 0x1.274b51407fa5ap-429, 0.0, 0x1.20e061b78bf6bp-982,
     0x1.b8665eb0aeea8p-672, 0x1.0a339d890f26ep-526, 0x1.721dae38d622bp-936, 0.0, 0.0,
     0x1.377575b7687d8p-704, 0x1.caf14a6bf4c48p-835, 0x1.c2d3cee0fcf14p-585, 0.0,
     0x1.d1a00d047a5aap-14, 0.0, 0x1.5f30bbf2bb2a6p-92, 0x1.b1b90d2d89cfbp-942, 0.0,
     0.0, 0x1.9c139688c4eb9p-32, 0.0, 0.0, 0.0, 0x1.a9ff70acbd5dep-719,
     0x1.c498da1868a8ep-823, 0x1.54972bf12e83fp-898, 0x1.31912c4dc32d4p-854,
     0x1.794ef7da22138p-767, 0.0, 0.0, 0x1.8123ab456913bp-862, 0x1.1568e43dd48eep-841,
     0.0, 0x1.ed57185b988fp-510, 0x1.de3195182c41cp-808, 0x1.a73665123eedp-252,
     0x1.f982a0dc55f6fp-586, 0x1.9fd14b13b62a4p-692, 0.0, 0x1.6ab333e06e2p-870, 0.0,
     0.0, 0.0, 0x1.227f74bc5b189p-417, 0x1.61c75683a46c3p-279, 0.0,
     0x1.cf84c3d04b7cfp-122, 0x1.f832beda6e64dp-566, 0x1.20f85ff6f4561p-603,
     0x1.bf0ec54f83215p-681, 0.0, 0.0, 0.0, 0x1.4501a4f800d56p-899, 0.0,
     0x1.b53b9c22e33a8p-281, 0.0, 0.0, 0.0, 0x1.0349f7d30e313p-511,
     0x1.0ef9cd0527151p-874, 0x1.fd65c742e8a8p-35, 0x1.bd8bff29c5e2cp-1020, 0.0, 0.0,
     0x1.87752adbd7485p-163, 0.0, 0.0, 0.0, 0x1.3ce4918514dbcp-596, 0.0,
     0x1.223f0d14f25p-352, 0x1.778fb76283d9fp-60, 0x1.fc8fad7ffdf42p-1010, 0.0,
     0x1.62b9b61975027p-96, 0.0, 0x1.cf3b01fbb743cp-253, 0.0, 0x1.530646112c103p-80,
     0.0, 0x1.2c65e1e5ca20bp-276, 0.0, 0x1.e9fce987a37e5p-588, 0x1.71e5d416afa01p-491,
     0.0, 0x1.936c28faf6b49p-147, 0x1.b6dcef201c842p-524, 0x1.7d96c8888f357p-746,
     0x1.2c729a1686259p-792, 0x1.cf15b4784cd5ap-307, 0.0, 0.0, 0.0, 0.0,
     0x1.6c98fe3407cfcp-74, 0.0, 0x1.a3c0eeec6b8cfp-494, 0x1.3702e27afadf7p-607,
     0x1.7884132af979fp-12, 0.0, 0.0, 0x1.177b9ab968a23p-451, 0.0, 0.0, 0.0,
     0x1.924e54af6d6a2p-919, 0.0, 0.0, 0.0, 0x1.180248380696ap-38,
     0x1.cbab4d18eef06p-365, 0x1.15c942476e713p-475, 0.0, 0.0, 0x1.731ae08fb9bb9p-182,
     0.0, 0x1.d29f90bc31be1p-930, 0x1.9436f2726d5d4p-670, 0x1.5180d2afd23eap-370, 0.0,
     0.0, 0x1.ac7287511d43fp-202, 0x1.0b2c461e9573dp-757, 0x1.1fbc571bd0d5dp-41,
     0x1.cfb4e637dadc2p-19, 0.0, 0x1.e859aec799e99p-810, 0.0, 0.0,
     0x1.c9294a22d3deep-173, 0.0, 0.0, 0x1.b679762200287p-179, 0x1.4686fade20b3cp-967,
     0x1.2050e49653142p-916, 0x1.7d27d47930c67p-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d820bf573b648p-142, 0.0, 0x1.c90e1ce506022p-619, 0x1.10c3edfeced5bp-520,
     0x1.b784b137b7842p-882, 0.0, 0x1.0a68bfa28fa76p-111, 0x1.748db07d49de7p-421, 0.0,
     0.0, 0.0, 0.0, 0x1.a137006b36c43p-554, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1e8b4eca0d9ap-349, 0x1.b4e73e440ff66p-139, 0x1.9754f9db0364fp-80,
     0x1.f5c4c613d8c1bp-254, 0x1.4c39ef09552f8p-384, 0x1.c8116f97bad28p-1001,
     0x1.90d4baa710ee8p-743, 0.0, 0.0, 0.0, 0x1.bd74c8b00ddaap-498,
     0x1.59071e2c1f9acp-754, 0.0, 0x1.9cff648ef1165p-753, 0x1.c201495c00f36p-611, 0.0,
     0.0, 0.0, 0.0, 0x1.4fd5a1856c17p-840, 0.0, 0.0, 0x1.e3d70cb60569bp-802,
     0x1.88705453c46ddp-94, 0.0, 0x1.5c402cb0c7cb1p-296, 0.0, 0x1.76b4766473a31p-949,
     0.0, 0x1.c8b010e1f8299p-959, 0x1.378be45c67071p-1011, 0.0,
     0x1.fbd7b939d7c3ep-330, 0.0, 0.0, 0.0, 0x1.101f9d6bc7beep-41,
     0x1.3477ac0b3da9ep-862, 0x1.44e62468c3473p-659, 0x1.2400288c9d9cap-855, 0.0, 0.0,
     0x1.70666d6e80b59p-867, 0.0, 0.0, 0x1.d35a73b26de3ep-905, 0x1.9b92ca91ab1c1p-75,
     0.0, 0.0, 0.0, 0x1.15e2bbef5bb8bp-699, 0x1.9f8f769443589p-217,
     0x1.8038559df8b8fp-891, 0.0, 0x1.416c0a7cc4685p-54, 0.0, 0.0,
     0x1.73c511a050f9p-931, 0x1.96b4087a5607fp-85, 0x1.6a9def807e0dbp-437, 0.0,
     0x1.bda6d59feb7d4p-662, 0.0, 0x1.152cbedeace2bp-604, 0.0, 0x1.9248e78ffc3d4p-24,
     0.0, 0.0, 0.0, 0x1.a4fd581bc6cb2p-368, 0x1.4d80adaea8493p-521,
     0x1.a993c163c5221p-430, 0x1.d68ec6e5fb95fp-296, 0x1.1fc534054f54cp-87,
     0x1.09992d8bdd002p-304, 0x1.80a296de5a491p-333, 0x1.2d1f1186f1e4ap-696, 0.0,
     0x1.cdebe85f02026p-655, 0x1.3cf2d144e7d3cp-73, 0x1.8a457ed5b395fp-977,
     0x1.e5b27e42bfd2ep-543, 0x1.bb229824eda75p-950, 0.0, 0.0, 0.0, 0.0,
     0x1.193c6ab84feadp-72, 0x1.639ae248ca946p-237, 0.0, 0x1.c4e612d13305dp-129, 0.0,
     0.0, 0.0, 0x1.0efce691c54a7p-906, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.794ae4fb89cap-565,
     0x1.adcdf727ddf48p-215, 0x1.d5581578a55bfp-134, 0.0, 0x1.ff53a345aeb0ep-63, 0.0,
     0x1.f0423b4f099bbp-105, 0.0, 0.0, 0x1.21822c6ac3748p-545, 0x1.460412f8b3151p-27,
     0x1.944e14832ddfdp-646, 0x1.20eaaac824d3fp-363, 0.0, 0.0, 0x1.f7641059bd5c6p-502,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd8094cb16b9dp-978, 0.0, 0x1.e205efd6fbfa8p-215,
     0x1.37cda3c3fd3e2p-1003, 0x1.b2cc17a17c553p-446, 0x1.c47e1b6b722ep-13,
     0x1.83dce3b3c2ba2p-952, 0.0, 0x1.28a3f05a571a2p-547, 0x1.67b208bb23fabp-938,
     0x1.77b9ba821e6dp-246, 0x1.ed7b3aa7bec8ep-963, 0.0, 0x1.6b87dd5736cc2p-640,
     0x1.94589a4fc6828p-558, 0x1.f77607fa21ef8p-161, 0.0, 0.0, 0x1.d5bb1b3379c8fp-847,
     0x1.9ec2134cab194p-992, 0.0, 0x1.373715b1011b8p-142, 0.0, 0x1.b61f5881a7d44p-119,
     0x1.35468d3171875p-144, 0x1.5b5a9f841674ep-265, 0.0, 0x1.2f0eb6f49b3f8p-964, 0.0,
     0.0, 0x1.26aee044218f9p-1016, 0x1.d93bd869aa07cp-64, 0x1.9d86faaf2035fp-303,
     0x1.dcdea2577e04fp-424, 0x1.208cc5b607a8dp-764, 0.0, 0x1.4f1943d34af47p-372,
     0x1.621c1d108443fp-756, 0.0, 0x1.7cc2b0f63d3eap-899, 0x1.366fb8e4911f4p-667,
     0x1.3cf311ed9347bp-563, 0.0, 0.0, 0.0, 0x1.5fd7fc51b1385p-816,
     0x1.579ca246d07e1p-892, 0x1.37cb613f0eb23p-521, 0.0, 0x1.0e05ec69a3caap-928, 0.0,
     0.0, 0x1.2ae8d9cf9cdfep-6, 0x1.94d8cd28c0c8cp-341, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51a2da7d1ba11p-252, 0x1.f3df254977bf5p-138, 0x1.bc3c1631cf76cp-637,
     0x1.47854ab352f83p-7, 0x1.391e678c2957ep-42, 0.0, 0.0, 0.0,
     0x1.f887ad9a580f4p-115, 0x1.25f97513e1405p-167, 0.0, 0x1.81de70b257cc1p-562,
     0x1.fc2b6bdb78c3ap-600, 0.0, 0x1.c2dc67942ccc7p-582, 0x1.aad7b941840b6p-115,
     0x1.c5d0499c825d9p-961, 0x1.147513b7e1e37p-850, 0.0, 0x1.3ead866184b2fp-982, 0.0,
     0.0, 0.0, 0x1.6d158fbf7a67fp-704, 0.0, 0.0, 0x1.e08adcc16be78p-238, 0.0,
     0x1.d2c9205ecc40bp-731, 0.0, 0.0, 0x1.7f2253486a2f8p-46, 0x1.75d627113e02ep-807,
     0x1.11829e97bef2ep-308, 0.0, 0.0, 0x1.315d3f925c5fcp-139, 0.0, 0.0, 0.0,
     0x1.62ee038640c03p-532, 0x1.e99a2a749b8f2p-293, 0x1.cb52059a91212p-230, 0.0,
     0x1.b0be186937e1cp-471, 0x1.93ee8e2f7c0e9p-936, 0x1.ae26026a13728p-865,
     0x1.7df634404b5bcp-812, 0x1.740db0db76636p-207, 0x1.2ff86d6142277p-567, 0.0,
     0x1.8fa8df318595p-394, 0x1.00b13ede86bd5p-738, 0.0, 0x1.a5b9109695927p-605, 0.0,
     0x1.b7b8ebb51de77p-163, 0x1.4ff5df1b727e2p-767, 0x1.23999373684e3p-763,
     0x1.518ffda7af391p-469, 0x1.3ab486edfb9cfp-82, 0x1.57bfae809b7c1p-805,
     0x1.63c613874b775p-760, 0x1.1d6ed5b877606p-739, 0x1.b196715104179p-525,
     0x1.b2ac83a2fa5dep-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a1c3f6e18ffcp-799, 0.0,
     0x1.976f14f7bb704p-441, 0.0, 0x1.887896f285b22p-566, 0x1.2091b1da22c0ap-846,
     0x1.f73a3a0cca5cbp-828, 0x1.1b5e0fcad691bp-128, 0x1.5cf718db091b6p-1019,
     0x1.44ec41de98d21p-295, 0x1.7eeab680e3e47p-925, 0.0, 0x1.299a3a274789ep-958,
     0x1.8c01ae845f60ep-731, 0.0, 0x1.eb49c26b158fep-582, 0x1.485d2e188021bp-291, 0.0,
     0x1.090e17746938fp-975, 0.0, 0.0, 0x1.3d05fd9502f5ep-398, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a5bcee3c14d84p-695, 0x1.548955b419674p-331,
     0x1.8214e9190a969p-623, 0x1.05f29f9cd85f5p-477, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab9c10693c66ap-745, 0x1.e0bca3036b508p-327, 0x1.cb343d0e95a03p-352, 0.0,
     0x1.b4c5e22b2192cp-460, 0.0, 0.0, 0x1.b72ac64760af9p-65, 0.0, 0.0,
     0x1.d8bbfa321fc36p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b990665bd14ap-977,
     0x1.3b85adffc3593p-11, 0x1.306bdc75b2e0fp-779, 0x1.fcaf0d192dde7p-634, 0.0,
     0x1.632cd96006fa1p-549, 0.0, 0x1.0fea5849b893cp-189, 0x1.501ff5e1e9079p-260, 0.0,
     0x1.fec211eed52e4p-509, 0x1.d121cbc0367fcp-631, 0.0, 0.0, 0x1.a16bb313b291fp-600,
     0.0, 0x1.e8de11c1f7d66p-154, 0.0, 0x1.03ffcc61c5e21p-441, 0.0, 0.0,
     0x1.d9399e34928dap-975, 0x1.172039331da44p-161, 0x1.a5831f3773081p-907, 0.0,
     0x1.c8d67d1bdde36p-932, 0.0, 0.0, 0.0, 0x1.db2efb7e010cep-56,
     0x1.f5f3c6abb8d93p-860, 0x1.a2a5de247b225p-280, 0x1.81243fe21134cp-53,
     0x1.b7e63912a9a5ep-510, 0.0, 0x1.d5f5665ef49a2p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.1cf031b0a8c5bp-260, 0.0, 0x1.dd81dad1792a6p-625, 0.0, 0x1.0b5e5ef2e3959p-866,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f24d6a5c5c6dbp-122, 0x1.a61f47af2b5ccp-82,
     0x1.2c1f6b2827394p-391, 0.0, 0.0, 0x1.eee60c01a7806p-271, 0.0,
     0x1.d1102452ee1ebp-637, 0.0, 0x1.babf0089f4719p-242, 0x1.93ae5e432539fp-348,
     0x1.11a5bc0a09072p-800, 0.0, 0.0, 0.0, 0x1.db3c1d20b0e3ap-132,
     0x1.9495112d45209p-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd257a67dc408p-889,
     0x1.b473b58ea70d5p-44, 0x1.9eb2263765fd9p-385, 0x1.5fb876e29306bp-896,
     0x1.5014a5f0d7291p-549, 0.0, 0.0, 0.0, 0x1.d3b4c712c4adfp-661,
     0x1.698f428b28679p-400, 0.0, 0x1.8d24a8bc1e232p-396, 0x1.189b8afd85877p-246, 0.0,
     0.0, 0.0, 0.0, 0x1.2f1ccb3b1af53p-86, 0.0, 0.0, 0x1.532f4b8964fd5p-710, 0.0,
     0x1.46330390b29b6p-17, 0x1.2e5671cb34113p-583, 0.0, 0.0, 0x1.f156dbb478e9ap-277,
     0.0, 0x1.5c01d9a764abcp-541, 0.0, 0x1.7e3b15cd16c4dp-56, 0x1.050c3ae7567fdp-171,
     0x1.710bc2ca8a3ebp-1014, 0x1.33652611cfe79p-248, 0.0, 0x1.8e103802f6bc2p-1008,
     0.0, 0x1.0193e60f04463p-190, 0.0, 0.0, 0x1.0a600a88ec0bcp-376, 0.0, 0.0, 0.0,
     0x1.d6da7b607178ep-968, 0x1.297e9fdc69b72p-583, 0x1.df68af7c643fbp-833, 0.0, 0.0,
     0x1.0ca77936986fp-424, 0x1.40de1b1b44ecap-972, 0x1.99e7ac7c49a3fp-970,
     0x1.06a6a1f93cc7cp-38, 0.0, 0.0, 0x1.f4efe822fccc6p-1022, 0.0, 0.0, 0.0, 0.0,
     0x1.85bfd02390717p-41, 0x1.5b27d801c2725p-554, 0x1.a9fdfcfaf6738p-968,
     0x1.6fa8bf9c4d804p-717, 0x1.4590e93edba02p-594, 0x1.ee57c37908e61p-481, 0.0, 0.0,
     0.0, 0x1.f7f2caaa1e676p-22, 0x1.eaf82fbd6c17dp-92, 0x1.ebd678d8bf446p-147, 0.0,
     0x1.e259553d21d66p-837, 0x1.281420d02cbfcp-997, 0x1.6f77a024aa5fp-235,
     0x1.c2eda6211adafp-190, 0x1.62cde496e4734p-819, 0.0, 0.0, 0.0,
     0x1.c8f172b72d023p-686, 0x1.8d7bc53345c2p-451, 0.0, 0.0, 0x1.f89e20778a025p-763,
     0x1.70d1d583ade66p-997, 0x1.1cc4dd5d1d5b5p-617, 0x1.72d662fdbc56bp-554,
     0x1.7d995d991cb16p-508, 0x1.b2bfbf0ec6497p-846, 0.0, 0x1.827aa6303dc93p-182,
     0x1.a248ef0d2e90dp-468, 0x1.f74333880a0dbp-414, 0.0, 0x1.ea80f2d2a52bap-508,
     0x1.84a6260a9910fp-664, 0x1.f42f8d69d1278p-715, 0x1.7212482fe50c9p-794,
     0x1.c34f7ba750df4p-222, 0x1.7cd27923c8b3cp-761, 0.0, 0.0, 0.0,
     0x1.4a0de088622d3p-411, 0x1.fe6b41c312683p-393, 0x1.9672ba51a0636p-881, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33ecb711618cbp-242, 0x1.bce0bd7986fb1p-72,
     0x1.d2ffb0556c56ep-443, 0.0, 0x1.dddb4f6bd3832p-681, 0.0, 0x1.c216646af758p-239,
     0x1.54afefda4e4adp-387, 0.0, 0.0, 0.0, 0x1.5de2efb684cb9p-348, 0.0,
     0x1.7010f6a6a061dp-158, 0x1.e9f58f7cb2e9p-412, 0x1.8e632e5a7249fp-664, 0.0, 0.0,
     0x1.825ae421cfef5p-723, 0x1.372160adf050cp-528, 0.0, 0x1.bfa16d1448c04p-817,
     0x1.20c76a9e95a46p-111, 0x1.74760674c151cp-17, 0x1.91458b7f5ffaap-175, 0.0,
     0x1.1889656ab047bp-571, 0.0, 0.0, 0.0, 0.0, 0x1.65460a846b741p-503,
     0x1.ccc2ecaeaca41p-452, 0x1.7475d3f248389p-450, 0.0, 0x1.9561074321f95p-790,
     0x1.d1fdc8c147c63p-705, 0.0, 0x1.da378a1b02134p-874, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e59cda46bd1fp-1020, 0.0, 0x1.fd67333ed397dp-191, 0.0, 0.0,
     0x1.0793c14f0a2cbp-458, 0.0, 0x1.47c5fdc48a73bp-955, 0x1.29ada19392d45p-921,
     0x1.cd7199b9ec358p-671, 0x1.bdb360ed5df94p-809, 0.0, 0.0, 0x1.cb4ac5ca25d9ep-439,
     0x1.c49097ed6c4aap-646, 0.0, 0.0, 0x1.a073d9e73f8cap-144, 0.0,
     0x1.b4088236dfa85p-1007, 0x1.317f0d924db6ap-231, 0x1.bd71894da2eecp-3
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
            tmp1 = Sleef_finz_coshd2_u10kvx(tmp0);
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
    printf("Sleef_finz_coshd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_coshd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
