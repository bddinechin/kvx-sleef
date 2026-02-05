/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log.c --function log --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.d0b6d634f0643p-715, 0.0, 0.0, 0.0, 0.0, 0x1.bc7fb8884a148p-180,
     0x1.859dae4c04926p-923, 0x1.86280c8e1a6a6p-78, 0.0, 0.0, 0x1.bad0dd2d19c62p-557,
     0x1.90febd32ae67ap-790, 0x1.e97508c26797bp-18, 0x1.d25cb47b49312p-375,
     0x1.bce70f7a31573p-459, 0.0, 0.0, 0.0, 0x1.89665659a86afp-977,
     0x1.6be5445742561p-619, 0.0, 0x1.bfdb83a6e4c11p-757, 0x1.9aa2891a8037cp-101, 0.0,
     0x1.40230aee6f438p-719, 0x1.a106a0380da49p-377, 0x1.d8f45ea3e464ap-901,
     0x1.efaf676536ba9p-756, 0x1.306bbd8936adfp-869, 0.0, 0x1.cd471c15f9402p-320,
     0x1.f2fe8b0539929p-239, 0x1.e7dc9569f11c1p-944, 0x1.b67a9b32048f7p-457, 0.0,
     0x1.7102d35ae451cp-366, 0.0, 0.0, 0x1.1b71e0881035p-721, 0x1.88d009bc29c91p-138,
     0x1.8b8183f339bf3p-594, 0x1.b1ac997fc2bd7p-929, 0x1.b0ab0c60e246dp-338,
     0x1.8765163e7dbb5p-145, 0x1.643e242fcddf9p-23, 0x1.92d3616582deep-666, 0.0,
     0x1.ba27bd3fd2ffcp-174, 0.0, 0.0, 0x1.171529c5dc296p-31, 0.0,
     0x1.9727dcc82eb63p-655, 0.0, 0.0, 0x1.eaed0b7e3768bp-514, 0.0,
     0x1.1da927a5ff8cdp-275, 0x1.06ecd357b43f4p-18, 0x1.1445237f9ceedp-318, 0.0, 0.0,
     0x1.32292195cd13dp-415, 0x1.efd2a410293f1p-103, 0x1.21f3278bf1ae9p-280, 0.0,
     0x1.77d934208b963p-129, 0.0, 0x1.be02ef53ce8b8p-96, 0x1.173a02c677d3dp-881, 0.0,
     0.0, 0.0, 0x1.226e254deb0abp-1001, 0x1.c7fef1d734e8ap-140,
     0x1.ee97992502f43p-613, 0x1.76c803b0726b6p-838, 0x1.a41cf022441c9p-609,
     0x1.6d649868b869p-983, 0.0, 0.0, 0x1.45b5c94cc9931p-657, 0x1.8c9e77b02e151p-32,
     0x1.a6c3a79d4c76ap-531, 0x1.7119f454780f5p-691, 0x1.944aa905d23cap-323,
     0x1.72293008299bbp-420, 0.0, 0.0, 0.0, 0x1.2c1a6a14bb94ep-900,
     0x1.48331c766d8dap-163, 0x1.d26c1501bc41p-282, 0x1.774b266b526c9p-352,
     0x1.35d7587d35594p-820, 0x1.6d1a2eb46ffdep-731, 0.0, 0x1.1c85ad792b369p-407, 0.0,
     0.0, 0.0, 0.0, 0x1.17913df7984b8p-387, 0.0, 0x1.e8208bfcd25a6p-465,
     0x1.6de54354c547ep-766, 0.0, 0x1.5557ce2f805c9p-81, 0.0, 0x1.969569df0f512p-855,
     0.0, 0x1.e4b338ff144ddp-754, 0x1.e127c9295a757p-234, 0.0, 0.0,
     0x1.4e9582c35b912p-642, 0.0, 0.0, 0x1.6629e60672938p-504, 0.0, 0.0,
     0x1.4cd9d104ee166p-215, 0x1.e1e5ee8384dbap-327, 0x1.fda453594a413p-94, 0.0, 0.0,
     0x1.30d8d6ec2ccc3p-358, 0.0, 0.0, 0x1.66b6841bc6a9fp-531, 0x1.1f84e6ce4cac1p-649,
     0.0, 0x1.5d024815e9a9dp-44, 0x1.4f8000c746d95p-1006, 0x1.723336de4268p-10,
     0x1.701e52f34029cp-372, 0x1.0e442c11b0949p-515, 0x1.70ccc27397469p-981, 0.0,
     0x1.44c3676f0281fp-320, 0.0, 0x1.d506b580e7a25p-89, 0.0, 0.0,
     0x1.a62408f2a1162p-109, 0.0, 0x1.02cc3a9557983p-457, 0x1.1e146fd164fdfp-276,
     0x1.bddc398848c91p-732, 0.0, 0.0, 0.0, 0x1.b22651c0d97d2p-391,
     0x1.4e3b258e77119p-239, 0.0, 0x1.ac1c30cb3b7c7p-352, 0.0, 0x1.51d42eb63554cp-264,
     0x1.717fd8720eb4dp-951, 0.0, 0.0, 0.0, 0x1.f204504238174p-750,
     0x1.04bf5cc7e173dp-733, 0x1.73e75f8cd2332p-935, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0bd1714e3bdep-563, 0.0, 0.0, 0.0, 0x1.e7d0ed20f17c8p-8,
     0x1.86d6448ce7944p-746, 0.0, 0.0, 0.0, 0.0, 0x1.3a873a175f9f6p-46,
     0x1.75f552c658b0cp-908, 0x1.4adafdfe75ec4p-837, 0.0, 0.0, 0x1.06b42bdba6c3ep-812,
     0x1.0b7c569b83418p-814, 0x1.6c6aba2b7b84bp-936, 0.0, 0.0, 0x1.32b7ef3cdd34dp-323,
     0x1.850e07be62bbfp-11, 0.0, 0x1.3d6fec323f54dp-182, 0x1.fc9094346a4d4p-782,
     0x1.0b789074f5e13p-676, 0x1.ce60325e444a8p-115, 0.0, 0x1.3ace2307958d6p-679,
     0x1.387cca61eb4e6p-768, 0x1.582dd2222cd69p-814, 0.0, 0x1.d32e7d3518d21p-258,
     0x1.200a94aea726cp-949, 0.0, 0x1.16877387c280cp-713, 0x1.4b825f2189fc1p-237,
     0x1.c641e3cbbcbe2p-494, 0x1.230f35a1b3017p-104, 0.0, 0.0, 0x1.7f1caa41c3693p-96,
     0.0, 0x1.768ba8f2abe1ep-264, 0x1.8d430e2e64ce1p-788, 0x1.e81ee6ca01cdbp-966,
     0x1.621250b4c43c3p-749, 0x1.eeebd1174422ep-79, 0x1.4a6f951c662bap-256,
     0x1.cdf86801a57fdp-143, 0.0, 0x1.cf84ad48abebfp-936, 0.0, 0x1.6ce9c72b71999p-305,
     0x1.c522b72c1ca13p-909, 0x1.4919a0c3cf89fp-683, 0x1.21975e0d73cbp-801,
     0x1.461c309f48288p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70bc23d41b685p-521, 0.0,
     0x1.ce17a8fca10c1p-474, 0.0, 0x1.4099202a97bccp-508, 0.0, 0x1.439cdfa07658fp-515,
     0.0, 0.0, 0x1.923f9a4c84826p-664, 0x1.af2ac290f92edp-87, 0.0,
     0x1.be40c4f16f696p-831, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.912a991532089p-48,
     0x1.f6270b23b33bbp-253, 0x1.bb56bd17024f5p-244, 0x1.f2404a642f78bp-608, 0.0, 0.0,
     0x1.02efed3c92511p-843, 0.0, 0x1.eb86288621b22p-713, 0.0, 0.0,
     0x1.53ad5898749f6p-619, 0x1.53366f2843987p-508, 0x1.b43127c8e8d04p-37, 0.0,
     0x1.cb91a87f938dp-419, 0x1.0191cc2d6046cp-388, 0x1.8fc654a4ad34ep-362,
     0x1.fb370d184a234p-995, 0.0, 0.0, 0x1.46eb8e0beccefp-502, 0x1.e820294f16239p-77,
     0x1.761618cb08415p-417, 0.0, 0.0, 0.0, 0.0, 0x1.79252ddd7c803p-849, 0.0, 0.0,
     0x1.26b6ea6ae4c6bp-403, 0.0, 0x1.20c79157b69b2p-701, 0x1.84ace46e48f75p-861,
     0x1.c2b640263b1f2p-57, 0.0, 0.0, 0.0, 0x1.c723bfe5a5ab5p-160,
     0x1.bc5bcc3f12129p-434, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.64465a7bb65ecp-305, 0x1.17f2e4802d5e9p-997, 0.0, 0.0, 0x1.2bcb2d29162bcp-79,
     0.0, 0x1.376bd5b006261p-434, 0x1.7dfa792f6235p-971, 0.0, 0.0, 0.0,
     0x1.86dec586e1fb3p-466, 0x1.b2f4beced8282p-747, 0.0, 0.0, 0x1.9ac534970a5f7p-604,
     0x1.a6c274ac6f112p-874, 0x1.1df426ea97edbp-516, 0x1.39cf7afa88055p-5,
     0x1.18b0935dc215p-188, 0.0, 0.0, 0x1.178859706474ep-167, 0.0, 0.0,
     0x1.29c89da46cfap-72, 0x1.f8a7074cbfa48p-267, 0x1.c863a5803c17ep-285, 0.0, 0.0,
     0x1.f6b5650126c04p-538, 0x1.663c7cf4a5539p-602, 0.0, 0x1.94cd70988ebf1p-495, 0.0,
     0x1.670daa00a4ae3p-260, 0.0, 0.0, 0x1.a85cb60f52274p-176, 0.0, 0.0,
     0x1.8251387f7e2e1p-286, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a6e47b1048c9p-709, 0x1.a97a7fed9b854p-180, 0x1.7bf77fd8bcfdep-35, 0.0,
     0x1.53972fd2886bp-177, 0.0, 0x1.76d24835fc041p-877, 0x1.9bc5e5f1fac96p-833,
     0x1.196a4f70fdcefp-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0b6c5a8676e9p-793,
     0x1.277b9017e34b3p-750, 0x1.e23ceb90f0887p-613, 0.0, 0x1.caaa213f823b7p-326,
     0x1.ce7f0db0de7f9p-195, 0x1.4bf558097ed77p-318, 0.0, 0x1.441df5d3c3ebbp-795, 0.0,
     0.0, 0.0, 0.0, 0x1.3c907bef57db8p-635, 0x1.eb51a50ec4651p-951, 0.0,
     0x1.806008a5c96bcp-284, 0.0, 0.0, 0.0, 0.0, 0x1.289e7d7c6911cp-771,
     0x1.4875c5047f6b5p-208, 0.0, 0x1.e710a7aab0ecep-812, 0.0, 0.0,
     0x1.34c156ab04f66p-225, 0x1.4cee05a03df99p-203, 0.0, 0x1.854474a1d083dp-392,
     0x1.0d7dcc56fd739p-708, 0.0, 0x1.cd153f90173cp-283, 0x1.ff2eff03d88fbp-291,
     0x1.c8639a6b0dc92p-687, 0.0, 0.0, 0x1.628347ec3b8c3p-614, 0.0,
     0x1.4fce0201fafdcp-795, 0.0, 0.0, 0.0, 0x1.91cde1cf8bc3p-304,
     0x1.6012ac72d0b39p-10, 0.0, 0x1.8dfccef802c23p-866, 0.0, 0x1.3bc26513d9f5ap-874,
     0.0, 0x1.9972a08bda36ap-475, 0.0, 0.0, 0x1.de332c7f4270ep-493,
     0x1.0669b35bb723ap-996, 0.0, 0x1.095c8cfc62fc7p-896, 0x1.d3a11606bd7b4p-278,
     0x1.b657301f78a1dp-492, 0.0, 0.0, 0.0, 0x1.1ef4691ce8af8p-171, 0.0,
     0x1.e1aa6adafbd7fp-503, 0x1.c764d56471881p-433, 0x1.0d616b7e9e86dp-79,
     0x1.758c8337df749p-650, 0.0, 0x1.cfce09a614669p-478, 0.0, 0.0,
     0x1.b014bf86006c9p-814, 0.0, 0.0, 0x1.1ae930140740ap-521, 0x1.2f4523546d4a3p-538,
     0.0, 0x1.f5ba6ce58c6aap-966, 0x1.fb11d85444351p-412, 0x1.9f9f339870099p-711,
     0x1.eda45e093e322p-746, 0.0, 0.0, 0x1.17ae7ad511e3dp-156, 0x1.3c79c774305acp-505,
     0.0, 0x1.9f0cdf64328b4p-258, 0.0, 0.0, 0.0, 0x1.d5aadb28d2515p-609, 0.0, 0.0,
     0x1.0408bbce9681ep-707, 0.0, 0x1.99b054d8507bfp-298, 0x1.5b7e69c2137d4p-401, 0.0,
     0.0, 0.0, 0.0, 0x1.b7f5ba809b49cp-612, 0.0, 0x1.1f1e84fb2f3a8p-131, 0.0,
     0x1.ba6bc8d336ddfp-253, 0x1.20ac3c002a4bbp-177, 0.0, 0x1.7088f797272dp-483, 0.0,
     0.0, 0x1.279d3779cd3d1p-504, 0x1.b5af982bfeacp-512, 0.0, 0.0, 0.0,
     0x1.6995bad982f47p-440, 0.0, 0.0, 0x1.ec9c18fe10edep-350, 0x1.17e2c7889af18p-824,
     0.0, 0.0, 0.0, 0.0, 0x1.32dc0a531af6dp-629, 0.0, 0.0, 0x1.57c6d98c4966bp-744,
     0.0, 0x1.3ff94e4e80d66p-202, 0x1.9ceafe065d54ep-76, 0x1p0, 0.0,
     0x1.0afda130314d9p-506, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bd690a4daebcp-703,
     0.0, 0.0, 0x1.33578850084ep-478, 0x1.ad9d9d27bc215p-295, 0x1.bc97ca74401e1p-954,
     0x1.7613369645f84p-746, 0.0, 0.0, 0.0, 0x1.9054df371b79bp-42,
     0x1.18f07d3a7e703p-310, 0.0, 0x1.91c7e8bb031fp-501, 0.0, 0x1.e031e5fa3b6b8p-984,
     0.0, 0.0, 0x1.0626e9547a79dp-979, 0.0, 0x1.da5dec0922d1cp-478, 0.0,
     0x1.617497c2a938bp-727, 0x1.ea2f9b06caeb2p-37, 0x1.839854d3d12cp-496, 0.0,
     0x1.56cd5b1a6405cp-131, 0.0, 0x1.2e972356b218ap-220, 0x1.f3a054ca0c628p-945, 0.0,
     0.0, 0x1.5a9d1a86997e5p-660, 0x1.90716bf86c716p-356, 0.0, 0x1.00cd4db2ca5c6p-318,
     0x1.da0420f314f87p-290, 0.0, 0x1.2a93d4cbf5e7cp-894, 0.0, 0.0, 0.0, 0.0,
     0x1.c5e399492cf2ap-540, 0.0, 0.0, 0x1.d7c541e6ac37cp-297, 0.0,
     0x1.2c547ce3ef80ep-833, 0x1.60e688dc43e7fp-275, 0x1.6873ab833a969p-591, 0.0, 0.0,
     0x1.2bc640d82a396p-486, 0.0, 0x1.a7de374c5b814p-253, 0.0, 0x1.c1b484d09959bp-734,
     0.0, 0.0, 0x1.e25fc6e54543ep-700, 0.0, 0.0, 0x1.cfda30c653b3ep-966, 0.0,
     0x1.f4b72b674a5aap-212, 0.0, 0x1.e43da79d7fcabp-326, 0.0, 0x1.f04c1b9269b1cp-749,
     0.0, 0x1.fb7d284e263ap-946, 0x1.076443767809ep-359, 0.0, 0.0,
     0x1.ec9580deae506p-260, 0.0, 0x1.f607b10c08415p-833, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2ded28e658d6p-345, 0.0, 0.0, 0x1.b1232cd9cfa9bp-1007,
     0x1.a455a0f1f7b88p-306, 0x1.50e322ac22e4ep-172, 0.0, 0x1.5b829a0c077cep-214, 0.0,
     0.0, 0.0, 0x1.fc4231526f6f8p-507, 0.0, 0.0, 0.0, 0x1.67b1dfec761e6p-500,
     0x1.ea4ac730cf619p-878, 0x1.a03416f0519e7p-231, 0.0, 0x1.230ef97beb7a4p-698,
     0x1.a6c3dc4028d09p-350, 0.0, 0.0, 0x1.fa26075408bf5p-135, 0x1.fd77689f7c25bp-258,
     0.0, 0.0, 0x1.4a7bb34f222ffp-459, 0x1.d3360ada4c205p-735, 0x1.4acc62bb15507p-567,
     0x1.f52d98ccc42aep-714, 0.0, 0.0, 0x1.5adc2290bd8b9p-98, 0.0,
     0x1.69f2e042f14d1p-987, 0.0, 0.0, 0.0, 0.0, 0x1.c3f0376b150fcp-880,
     0x1.14bf1c16022dfp-169, 0.0, 0.0, 0x1.51d6df88412c8p-798, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ebfe62b7f713p-956, 0x1.4414746388112p-138, 0x1.cede1503e1819p-436, 0.0,
     0.0, 0.0, 0x1.0ff958262045bp-682, 0.0, 0.0, 0.0, 0.0, 0x1.708fb86f148e2p-789,
     0.0, 0x1.b904272adaddbp-764, 0.0, 0x1.d14f20f18c711p-196, 0x1.7416ab617e1a5p-72,
     0.0, 0.0, 0x1.3eb33252520e7p-298, 0.0, 0.0, 0.0, 0x1.962543d246dc5p-851, 0.0,
     0.0, 0.0, 0x1.c9dacc65941a7p-511, 0x1.fb9ee115525fcp-691, 0x1.2882a0b80f0d4p-530,
     0x1.aebd634f6b2a7p-868, 0x1.2d5761e1384bcp-660, 0x1.c7edab9a73269p-144,
     0x1.51969861f2827p-851, 0x1.3ed2521cd1344p-169, 0x1.630df03ce06cp-133, 0.0,
     0x1.5c2f2b4b5c238p-826, 0.0, 0.0, 0x1.ed835fd49b3e2p-546, 0x1.e55d213c2fd46p-766,
     0.0, 0.0, 0.0, 0x1.8bb4b922756d3p-417, 0.0, 0.0, 0.0, 0x1.8cf146d691231p-666,
     0.0, 0.0, 0.0, 0x1.7e23c7803785ap-557, 0x1.5c824e4d424ep-803,
     0x1.c91166820c6f9p-376, 0x1.43f005bfaa5abp-447, 0x1.fdea44d616f65p-877, 0.0, 0.0,
     0.0, 0x1.a82ccceeb540cp-482, 0.0, 0x1.967df9244c9d1p-450, 0.0,
     0x1.8627d51ee9cd3p-808, 0.0, 0.0, 0.0, 0x1.58342ceda4d97p-239,
     0x1.c015ba7ca2178p-194, 0.0, 0x1.70ba30b5b6dabp-126, 0x1.6e5793c37b54dp-506,
     0x1.1c5e5a238fb52p-501, 0x1.a3cc9ead25469p-389, 0x1.17266377a09c4p-764,
     0x1.6e2bc86af5f83p-588, 0.0, 0x1.1492f21641d7dp-885, 0.0, 0x1.f71a12fe98239p-330,
     0x1.2a423a4d9325ap-593, 0x1.c16febed215d6p-907, 0x1.6479ead66cac3p-166,
     0x1.acabe39b7fcbfp-80, 0x1.74f7e334f9c67p-263, 0x1.eead5fe629254p-666,
     0x1.02ea1190aef24p-338, 0.0, 0.0, 0x1.bb64fad47803fp-926, 0.0,
     0x1.7409a8ffc07abp-408, 0.0, 0x1.b32b2a35ed5fap-218, 0.0, 0.0,
     0x1.ada15d70ef0b6p-510, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbef935543491p-404, 0x1.0b0b0d993d16ep-298, 0x1.7df3342dc7d3p-66, 0.0, 0.0,
     0x1.13d114744fb64p-270, 0x1.2909b985106f4p-29, 0x1.922417867e83fp-531,
     0x1.09b48fe6b6a0ap-19, 0x1.54da4bfcdc8aep-935, 0x1.cd9e8ed3345acp-663, 0.0, 0.0,
     0x1.8171efc5037cap-912, 0.0, 0.0, 0.0, 0x1.d00585b663b1dp-427,
     0x1.225592153c518p-1005, 0x1.8a3e1982554c8p-116, 0x1.ece8dafc4ccbp-520,
     0x1.1eb61fb5a11a2p-16, 0.0, 0x1.918a0bffada67p-581, 0x1.57f6c016228e4p-724, 0.0,
     0x1.ec673ca97a44dp-290, 0x1.35a7026ba39cep-419, 0x1.e683ef481882cp-447,
     0x1.2bc746e451505p-367, 0x1.622c237f7ba94p-335, 0x1.b6561cc06e583p-575, 0.0,
     0x1.3331f79ae31ecp-439, 0.0, 0x1.7951ded6f479ap-518, 0.0, 0x1.4b9e81618a89fp-439,
     0x1.ab2327d198385p-586, 0.0, 0.0, 0.0, 0x1.8b291b357c2f7p-44,
     0x1.c0f8a0b4c1449p-1000, 0.0, 0x1.0045d77fd7f8ep-327, 0x1.7026006bdbc7dp-863,
     0.0, 0.0, 0x1.57b695620cf5fp-329, 0.0, 0x1.9b43c295c21b9p-556, 0.0,
     0x1.867b294d2855fp-185, 0x1.c6a93101056f3p-257, 0.0, 0x1.a7eded54e1c82p-629,
     0x1.3fd4b033beb22p-316, 0.0, 0x1.1f7fa10055198p-73, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e7022a1a282afp-960, 0.0, 0.0, 0x1.95f9c2b8df2c1p-278, 0.0, 0.0, 0.0,
     0x1.acffffc225871p-996, 0.0, 0x1.0d24e6fa67c5ep-597, 0.0, 0x1.a5fad7e5a8d0dp-180,
     0x1.08b25fcb5b66dp-808, 0x1.1bfbf41bbe72bp-929, 0.0, 0x1.2ac2d18d5baf6p-682,
     0x1.027e12460833dp-135, 0x1.e0e158bbe1eaap-935, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f31c403eab846p-374, 0x1.de469e2951a08p-146, 0x1.dc4f373d243a1p-455,
     0x1.da206e32c301ep-103, 0x1.1fbc9a7cb5f7p-152, 0.0, 0x1.998fe23b10dbep-256,
     0x1.50dcee976bec7p-424, 0.0, 0x1.5e4599440abefp-897, 0x1.23af8654775ecp-892,
     0x1.8541dc7b74f6fp-772, 0.0, 0.0, 0.0, 0x1.3b7711948a5efp-220,
     0x1.2aefc2159753bp-663, 0.0, 0x1.74f42eb161b64p-571, 0x1.456b9d63363c4p-979, 0.0,
     0.0, 0x1.b0cd51681d9d5p-831, 0.0, 0x1.26322fe9079f3p-776, 0x1.c1d222015c01bp-33,
     0.0, 0.0, 0x1.f21c30b9627d8p-501, 0x1.1f8e30fc663c1p-982, 0x1.c161fa05c717cp-919,
     0.0, 0.0, 0.0, 0x1.9d0672d15745ep-647, 0x1.efa9e8ae80d63p-315, 0.0,
     0x1.95403df63625fp-970, 0x1.f2da004e6989ap-144, 0x1.fa14b928fe587p-101, 0.0,
     0x1.c8176efc24d74p-57, 0.0, 0.0, 0x1.bc429058ac4b2p-538, 0.0, 0.0,
     0x1.fcb94fe1f9964p-30, 0x1.40e1cfe1acd26p-230, 0.0, 0.0, 0x1.1713bbb011588p-978,
     0x1.c427771a6f721p-350, 0.0, 0x1.efd4dcefed901p-737, 0x1.d3dc13f3f9988p-305, 0.0,
     0.0, 0x1.5a69dae36de99p-992, 0x1.b4b6f542c225cp-622, 0.0, 0.0, 0.0, 0.0,
     0x1.6daccfaa2113dp-494, 0.0, 0x1.30722d0529434p-569, 0.0, 0x1.d1a9887f91427p-141,
     0.0, 0x1.b9e6f38cd67fap-96, 0.0, 0x1.5c4fa7e8116e5p-52, 0.0,
     0x1.8854336820693p-326, 0.0, 0x1.3626e5245b61fp-1020, 0.0,
     0x1.15b6fca32a5a2p-173, 0.0, 0.0, 0.0, 0.0, 0x1.2ed314d9ac9b7p-110,
     0x1.6bad3c5856109p-305, 0.0, 0x1.921ee0aa2dda3p-294, 0.0, 0.0, 0.0, 0.0,
     0x1.04b41f3e5ebacp-641, 0.0, 0x1.dc33d4b638d63p-987, 0x1.850a4615d6b5ap-236, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8816196995fc8p-141, 0.0, 0x1.2a1049ca164c3p-1010,
     0x1.c3e009bc8625bp-866, 0.0, 0x1.95543a2f61df5p-389, 0.0, 0x1.98559851b65dep-417,
     0.0, 0x1.32a7762bbe795p-121, 0x1.edcfe0fa3710fp-329, 0x1.cef06372125a9p-662, 0.0,
     0.0, 0x1.b6d533f1f223p-109, 0.0, 0x1.34821da4b0b5bp-891, 0.0, 0.0, 0.0,
     0x1.1861debe3a4f6p-635, 0.0, 0x1.02878ccc07df7p-210, 0x1.0eb9da5200d05p-307, 0.0,
     0.0, 0.0, 0x1.fb74185251249p-559, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.198ab2fbb94a9p-136, 0.0, 0.0, 0.0, 0x1.f5aeacf0de34p-687,
     0x1.f406788536b35p-744, 0.0, 0x1.2aab0b22392d8p-790, 0x1.d29b8cf98ad53p-462, 0.0,
     0.0, 0.0, 0x1.e7c7e7446e96bp-383, 0.0, 0x1.447c7c9eccd66p-402, 0.0,
     0x1.e01592cae9df5p-590, 0x1.df4b21cbedd6cp-570, 0.0, 0.0, 0x1.4eb4864c24527p-424,
     0.0, 0x1.a0cc30957cb09p-221, 0.0, 0.0, 0x1.d4a0054ebaf32p-38,
     0x1.690f73fb4033ep-101, 0.0, 0.0, 0.0
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
            tmp1 = log(tmp0);
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
    printf("log %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log bench acc %la\n", global_bench_acc);
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
