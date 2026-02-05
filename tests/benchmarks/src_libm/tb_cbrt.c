/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_cbrt.c --function cbrt --headers math.h,ml_support_lib.h \
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
     0.0, 0x1.cd42c17e98317p-171, 0.0, 0.0, 0x1.2b7b03c9da9bep-989, 0.0,
     0x1.aa73c8125580ap-430, 0x1.64292151ab2bap-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a829bb2fe3aap-672, 0x1.8f6c9f79618f8p-938, 0.0, 0.0, 0.0,
     0x1.a3e998aa2fd83p-775, 0.0, 0x1.eda8c1660ac05p-792, 0.0, 0x1.b6f045c771fb5p-925,
     0x1.15465b1331b4bp-561, 0.0, 0.0, 0.0, 0x1.4fa3d9841161bp-171, 0.0, 0.0,
     0x1.63f3d4a119567p-743, 0.0, 0x1.f82577449fa69p-826, 0x1.561a13e9f74c3p-288, 0.0,
     0x1.bce9b5a6ec1c9p-839, 0x1.8e0bedec4332ep-26, 0x1.d0704840e22ep-282,
     0x1.f0d9b50dd857cp-126, 0x1.0b8e05b2454c6p-7, 0.0, 0x1.fcc3f6384e993p-529,
     0x1.e8191fdece25cp-171, 0x1.fc7edff655903p-774, 0.0, 0x1.a594bdee9a81ap-533,
     0x1.f82e539ca98b9p-183, 0x1.e7384101e6a61p-151, 0.0, 0x1.80f8b8a84b693p-13, 0.0,
     0x1.c1c8051a3a3f4p-943, 0x1.192e21051a96fp-223, 0x1.3bd32c127da7fp-910,
     0x1.a37edbb7f7fa1p-19, 0x1.4f96c2f027496p-299, 0x1.8162e398705c9p-246, 0.0,
     0x1.74d63fb024ba2p-104, 0x1.5c4eaca4c82fcp-736, 0x1.1a2b5a416a052p-7, 0.0,
     0x1.247e0f07deff8p-850, 0x1.569cd0355a65ep-307, 0.0, 0x1.e5781a69aba72p-583, 0.0,
     0x1.bd521b90f0952p-186, 0.0, 0.0, 0.0, 0x1.d495093041485p-429, 0.0, 0.0,
     0x1.39e268062fbe5p-968, 0.0, 0.0, 0x1.d7c0194b8f4eap-944, 0x1.685a13a689998p-620,
     0.0, 0x1.4c163dcdeb04ep-176, 0x1.46b2207f72845p-76, 0.0, 0.0,
     0x1.821e54674e1b8p-244, 0.0, 0x1.b8969c35b2b1ap-905, 0x1.b79338591ad12p-708,
     0x1.0c59a222a995ap-558, 0x1.e9d26499864f4p-478, 0x1.ceae0574ccbb6p-145, 0.0,
     0x1.6cf4e834174abp-740, 0.0, 0x1.5a9dc58b38998p-445, 0.0, 0.0,
     0x1.dd306c1e348a6p-865, 0.0, 0.0, 0x1.58c990b4ea67dp-417, 0.0,
     0x1.5b672f20c02d4p-284, 0x1.0bdfafc551b9ap-18, 0.0, 0x1.8f9d4654d4cap-946, 0.0,
     0x1.00f049e81bc7p-4, 0x1.151a4265c41fbp-730, 0x1.62faa8cb45421p-585, 0.0,
     0x1.4ad4839c61224p-615, 0.0, 0x1.d37a08ce1e95fp-748, 0.0, 0.0,
     0x1.c97fe9fbe0a89p-997, 0.0, 0.0, 0x1.2076c9e2a7f9cp-990, 0x1.0e4f930eee5f7p-272,
     0.0, 0.0, 0x1.9d2ebac61da06p-877, 0x1.fc6cb2be830bep-551, 0x1.151faf2148913p-393,
     0x1.b843933ea5fecp-608, 0x1.9467363825e66p-270, 0x1.ed15b40d1f689p-261, 0.0,
     0x1.1f9db1919774bp-1005, 0.0, 0.0, 0.0, 0x1.53bc0df0a8245p-391,
     0x1.9a5b9d6d6a923p-810, 0.0, 0.0, 0.0, 0x1.2c7da59bf9485p-575,
     0x1.9b27e14d7eea5p-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ef436504d148p-612, 0.0,
     0x1.4690c0bc00f37p-717, 0x1.92d36eaa8564ap-596, 0x1.675ae8a35ff07p-683,
     0x1.c68e9cef8d4bbp-301, 0x1.3c038568f9ea6p-76, 0x1.95e6964f3e552p-881, 0.0, 0.0,
     0.0, 0x1.baf9e4921aae7p-412, 0.0, 0.0, 0x1.54a0e94e932b4p-419,
     0x1.bb35090c7d378p-742, 0x1.29bdb778b60a4p-289, 0.0, 0.0, 0x1.1a450c22752c5p-972,
     0x1.96b07ebdec4e4p-978, 0x1.794341933acfep-646, 0x1.abfa807c5adc3p-283,
     0x1.5238e64225135p-240, 0.0, 0.0, 0.0, 0.0, 0x1.3852faca2f1b5p-352,
     0x1.7933d8102847ep-314, 0.0, 0.0, 0.0, 0.0, 0x1.f3ec0a3706db2p-344,
     0x1.18633eddae06dp-308, 0.0, 0x1.8dec92f0c9d09p-537, 0x1.ad09be2ad68efp-541,
     0x1.a84fb5863997fp-810, 0x1.0553d57af5808p-241, 0x1.3498cf7cd0cc4p-675, 0.0,
     0x1.51458d1dab36ap-297, 0.0, 0.0, 0x1.5b5bada5b3be2p-736, 0.0,
     0x1.292c696911696p-292, 0.0, 0.0, 0x1.f65fe5c848383p-583, 0x1.13709a5f38bd1p-973,
     0x1.45142d13bccbbp-490, 0x1.62cbaea8d4f8bp-556, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0a68658c549dp-161, 0.0, 0x1.c5a86d0ab7152p-347, 0x1.e1eda841f642fp-731,
     0x1.7bd40545e700bp-1010, 0x1.e67183d844c6dp-717, 0x1.7f487c41bfe75p-591,
     0x1.a09ded5df45abp-336, 0x1.c9f25e09dbe16p-494, 0.0, 0x1.264f45ad45fc7p-536,
     0x1.d409ef39d6c14p-47, 0x1.53f284f95c1abp-192, 0.0, 0.0, 0.0,
     0x1.822822e1c3f52p-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f717ac93718f6p-919, 0.0,
     0x1.6c2c71d1d3e5ap-795, 0.0, 0x1.15944f4065367p-437, 0.0, 0x1.7ab1f275eb361p-904,
     0.0, 0.0, 0x1.431cc6406d889p-638, 0.0, 0x1.73c1090acf717p-488, 0.0, 0.0,
     0x1.cf4ee782285bbp-678, 0.0, 0x1.d3f484c12aa3fp-136, 0x1.5e93c5c3cb703p-987, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b88c9a179937dp-101, 0.0,
     0x1.bf26f26ba4e94p-210, 0x1.46e8806cf9fe5p-17, 0.0, 0x1.39c9856202dc1p-987,
     0x1.0c46ff31d0c08p-343, 0.0, 0.0, 0.0, 0.0, 0x1.8d70e7b389d0ep-255, 0.0,
     0x1.d205ba3580c11p-660, 0x1.3dc3fdd66919cp-778, 0.0, 0x1.013eb19d843d4p-917, 0.0,
     0.0, 0.0, 0x1.bfb7569b369cap-898, 0x1.1836a72b8995dp-801,
     0x1.afea6ad5fd8dep-1012, 0.0, 0x1.5828b164fea99p-920, 0.0, 0.0,
     0x1.92f4a2b2f9044p-981, 0x1.0c5759924525fp-819, 0x1.069dc7a895fa8p-814,
     0x1.494c88b52fee3p-10, 0.0, 0x1.b310d63dae20ep-508, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3be949d4db745p-24, 0.0, 0x1.b050172b8011ap-128, 0.0, 0.0, 0.0,
     0x1.5ce41eada6f46p-861, 0x1.2fc06c79eab39p-962, 0x1.211148c79f0c7p-696, 0.0, 0.0,
     0x1.38272826f3bbdp-990, 0.0, 0x1.4ddffefe18342p-556, 0.0, 0.0, 0.0, 0.0,
     0x1.c59ba6ee2563p-477, 0x1.6cc3ac9c7e82ep-888, 0x1.562781ecb3e47p-685, 0.0, 0.0,
     0x1.917b1e3c7e1bap-79, 0x1.8a2c3c2ff6c83p-997, 0.0, 0x1.389935548261ap-641, 0.0,
     0.0, 0.0, 0x1.f91cc938b81acp-106, 0x1.a65b3d1eb3926p-584, 0x1.3a292065f5de3p-189,
     0.0, 0x1.acb9b8aac1964p-574, 0.0, 0.0, 0x1.ce678b3133338p-625,
     0x1.c25f67f3de60ap-453, 0x1.5dc6e68a597b3p-170, 0.0, 0.0, 0.0,
     0x1.db823bbb0c7a3p-907, 0.0, 0x1.cd3a1c1b60f44p-187, 0.0, 0x1.ee9c2be6ffff4p-772,
     0.0, 0x1.9554c3fb24f51p-379, 0.0, 0.0, 0x1.f8b9b5706b70ep-288, 0.0,
     0x1.53b32f37f68f2p-453, 0x1.85e6e5c2ce079p-134, 0x1.d8eb7250e0b7bp-861,
     0x1.54b65da7fed87p-400, 0.0, 0.0, 0.0, 0x1.734b54ef06753p-223,
     0x1.b3da4d798758p-715, 0.0, 0.0, 0x1.a63e2e47c24e5p-409, 0.0, 0.0,
     0x1.9f8def58ee2bfp-678, 0.0, 0x1.904ed7018a568p-905, 0.0, 0.0, 0.0,
     0x1.548bb5d230cd1p-918, 0.0, 0.0, 0x1.15686f407e767p-107, 0.0, 0.0,
     0x1.2430cb244fd73p-151, 0.0, 0x1.4bae01856a34cp-139, 0x1.c3dfe1f6a2797p-847,
     0x1.64ee1965f3803p-537, 0x1.9085c89cfd855p-809, 0.0, 0.0, 0.0,
     0x1.f7478ef25c392p-373, 0x1.418ae326ff85p-747, 0.0, 0x1.0e9da787a93ddp-2,
     0x1.edc4fb39bcf0bp-520, 0x1.57d982d08ecf8p-668, 0x1.6d1c3b64a725p-632,
     0x1.23d8a53a4bdd9p-299, 0.0, 0x1.597a6bf270113p-655, 0.0, 0x1.cc7eeda68370ap-377,
     0.0, 0x1.62a67f1ffa348p-781, 0x1.4ad019eca0333p-394, 0.0, 0x1.a195273f2f8e1p-602,
     0x1.73e02f318e6e4p-777, 0.0, 0.0, 0.0, 0x1.e47cfa540dcfbp-217,
     0x1.8f5c67958a0afp-309, 0.0, 0x1.a9eb9e4347c46p-594, 0.0, 0x1.f5ea7470df82fp-428,
     0.0, 0x1.55f2516039f61p-611, 0.0, 0.0, 0x1.37ea2047a1967p-966, 0.0,
     0x1.6b0039fcc7052p-706, 0x1.4f178604b6de9p-1014, 0.0, 0x1.d2d68c0edd0b7p-683,
     0.0, 0x1.ff984ad99bb5ap-841, 0.0, 0.0, 0x1.5baad2236e817p-634, 0.0,
     0x1.8e86bc8aee2e9p-392, 0.0, 0.0, 0.0, 0x1.ca0b943f832c4p-429, 0.0,
     0x1.a9a970b69e5cp-276, 0x1.4cf9cfc008a8ep-284, 0.0, 0x1.84fa0da391e98p-354, 0.0,
     0x1.e9781eb9e7112p-199, 0.0, 0x1.1fd1001eab6e1p-679, 0.0, 0.0,
     0x1.645c2cdfa62d3p-324, 0.0, 0.0, 0.0, 0x1.ce91a5a40cd0fp-266,
     0x1.9a7664e787f72p-807, 0x1.54ea0ef5afa78p-123, 0x1.a70b7985694d2p-367,
     0x1.eff43d13e232dp-387, 0x1.cc2831851e67ap-936, 0x1.7db3801bfbb64p-1002, 0.0,
     0x1.87eb79562c0dep-492, 0x1.7e870e4da0c73p-996, 0x1.1cfcdb5fa82e8p-556,
     0x1.afd617599e0c1p-449, 0x1.4e476a3c8e5b6p-337, 0.0, 0.0, 0.0, 0.0,
     0x1.1d28918202436p-291, 0.0, 0.0, 0x1.49b22900fdba7p-710, 0x1.b53402bcf559fp-70,
     0.0, 0x1.5b5ae319f6066p-726, 0.0, 0.0, 0x1.d3a92582b239bp-151,
     0x1.999a4fa9175c2p-681, 0.0, 0x1.b092eacc094e1p-1020, 0x1.488dc81946a6ep-817,
     0x1.f22c3615f7189p-745, 0x1.cd77fd176b006p-558, 0.0, 0x1.ec2f0e9d9d27dp-664, 0.0,
     0x1.0007b6bb19b8p-234, 0x1.f3ab3a784d167p-274, 0.0, 0x1.a69db39df0bf7p-112, 0.0,
     0.0, 0x1.fdd19adc3af09p-981, 0x1.701507e08f67fp-898, 0x1.325650d8ed2f3p-123,
     0x1.0e82a2d5dc96bp-590, 0x1.be099d0ba1869p-618, 0.0, 0.0, 0x1.3416fc1ab33a6p-548,
     0.0, 0x1.f2a70eb24effbp-961, 0.0, 0x1.799db9d60d1d4p-598, 0x1.934853f35e45ap-675,
     0x1.e690ea8f78259p-434, 0x1.339e8fad0eda4p-275, 0x1.bb4aedf0de0a7p-95,
     0x1.1397951980cf2p-771, 0x1.0bf9047d29871p-969, 0x1.93baa72f5ead8p-810, 0.0,
     0x1.036402a724246p-556, 0.0, 0.0, 0.0, 0x1.1311d464eeb7bp-824, 0.0,
     0x1.10ce5cbeb9909p-86, 0x1.71d34c78cc202p-96, 0x1.f0adf03632e13p-264, 0.0,
     0x1.0e816bf80ea66p-836, 0.0, 0x1.c72f4ca6f2a82p-902, 0x1.63c075b8530d6p-830,
     0x1.2d489feb0648p-456, 0.0, 0x1.03decc4e4acp-444, 0.0, 0.0, 0.0,
     0x1.93bae87710192p-465, 0.0, 0.0, 0.0, 0.0, 0x1.4854c9045b74ep-478,
     0x1.3b1d5165fffecp-46, 0.0, 0x1.2a06b34285ad1p-221, 0.0, 0.0, 0.0,
     0x1.1c664f1432355p-591, 0.0, 0x1.76b5073daf386p-1008, 0x1.481577a3a58cep-799,
     0x1.669aeaa5d4123p-183, 0.0, 0.0, 0.0, 0.0, 0x1.f52179952f3c6p-782,
     0x1.0cefdcc29fd4ap-364, 0x1.e74a01854ef08p-878, 0.0, 0.0, 0x1.12f97f2032905p-148,
     0x1.0fb9accc24251p-200, 0.0, 0.0, 0x1.76d9b2cba0a44p-699, 0x1.f75c4a8b0817ep-710,
     0.0, 0x1.8b0024f52e70ap-228, 0.0, 0x1.08cdba7fcb3f2p-283, 0.0, 0.0, 0.0,
     0x1.e143b5843ea3ep-796, 0.0, 0x1.96102f3c0a667p-539, 0x1.737944400aa7fp-977, 0.0,
     0x1.f5e4d6106f89p-540, 0x1.fe4da3bb6dbe4p-926, 0.0, 0.0, 0x1.8c304ea791da2p-344,
     0.0, 0.0, 0x1.6a758eb08df11p-143, 0x1.6c7d6b4a5ec77p-842, 0x1.8aa3afaa916a9p-387,
     0x1.ea0c99aaecebcp-980, 0x1.57267ac50255ep-154, 0x1.d40a9732af1fap-90, 0.0, 0.0,
     0.0, 0.0, 0x1.67ffdfa5a2613p-620, 0.0, 0x1.55f749943284ep-401,
     0x1.60dd152a7362dp-42, 0.0, 0x1.cc2d37fddcff2p-313, 0x1.0afe6d88012bfp-351, 0.0,
     0x1.a1f2481d917afp-394, 0.0, 0x1.bc1917b2873b4p-713, 0.0, 0.0, 0.0, 0.0,
     0x1.ae615c73c465ep-1001, 0x1.9571a0286d2d7p-403, 0x1.c5926b10eacbp-821, 0.0,
     0x1.8a8debd0ade3ap-529, 0x1.365b87e2e2e8dp-15, 0x1.bce07a1146815p-192, 0.0, 0.0,
     0x1.40b2c804d6c19p-914, 0x1.74068186d9f1cp-283, 0x1.d5ffeac214398p-695, 0.0, 0.0,
     0x1.50c8b59f2f61fp-981, 0.0, 0.0, 0x1.0f879daabb1e6p-673, 0x1.6b081d89676c3p-865,
     0.0, 0x1.1a554013c97cfp-876, 0.0, 0x1.e8be4f39354b9p-786, 0.0, 0.0,
     0x1.59a6f0b2f125ep-673, 0.0, 0x1.ab8294aa19e7ap-689, 0x1.7d4d8724f6038p-320,
     0x1.1a271652ac86ep-338, 0x1.a4ae7bfa3396cp-167, 0x1.848f6bd45e3afp-805, 0.0, 0.0,
     0.0, 0.0, 0x1.077db0634b0f3p-322, 0x1.4d576727776c4p-569, 0.0,
     0x1.ee8da9ed864bep-132, 0.0, 0.0, 0x1.161f79bf2cc13p-4, 0.0, 0.0,
     0x1.21eb49784a064p-494, 0x1.633c893cad7f1p-692, 0.0, 0x1.62e3bbe5b465p-354,
     0x1.6c3fa6655f0e1p-211, 0.0, 0.0, 0.0, 0.0, 0x1.add0eaa3ee242p-76, 0.0, 0.0, 0.0,
     0x1.019d8917824c4p-75, 0.0, 0x1.345d7dad20362p-770, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.531d43195b31dp-51, 0.0, 0x1.f743af85fa8bp-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.da9771b4a9a22p-960, 0x1.14c30647c5715p-168, 0x1.9567d8a77f847p-915,
     0.0, 0.0, 0.0, 0.0, 0x1.88321f8a8b08bp-764, 0.0, 0.0, 0x1.980a78006ca34p-548,
     0x1.92ef01ede292cp-353, 0x1.1223c55f0423ap-100, 0.0, 0.0, 0x1.3b07282d042b4p-90,
     0.0, 0.0, 0.0, 0x1.47468c535e35bp-518, 0x1.608c47e70993ap-488, 0.0, 0.0, 0.0,
     0.0, 0x1.3eccd80154bb3p-900, 0x1.24c93719adcfcp-346, 0.0, 0x1.b5e08f5aaa0d4p-52,
     0.0, 0x1.b94ab93040ff8p-570, 0x1.7306307421cd4p-709, 0x1.5fe82ae44fe5ap-713, 0.0,
     0x1.57bacf768a946p-302, 0x1.6d1fb7859dbaep-237, 0x1.7d6d75aa562d1p-104, 0.0,
     0x1.27854a0280f87p-76, 0x1.1d99ac5d8eb58p-920, 0x1.ea2d714ebaa45p-860,
     0x1.eb77f23418526p-343, 0x1.af3c5a5926bd4p-454, 0.0, 0x1.fb06cf8a3c222p-923,
     0x1.2e1933a7c23c4p-678, 0x1.36e1c5c1df481p-440, 0.0, 0.0, 0.0, 0.0,
     0x1.9f7f129618d5fp-223, 0.0, 0x1.257e09a5da099p-902, 0x1.ce1c0daee8db4p-974, 0.0,
     0.0, 0x1.7167f1bda5705p-348, 0.0, 0.0, 0x1.0412ad6fd391cp-379, 0.0,
     0x1.cc2877a4a3918p-444, 0.0, 0.0, 0x1.60936d993565bp-52, 0.0, 0.0,
     0x1.66a79cef78ad4p-102, 0x1.4fdf3d7a18f05p-990, 0.0, 0.0, 0.0,
     0x1.50fba7a4d0981p-23, 0x1.ac0bf246c5cabp-173, 0.0, 0.0, 0.0,
     0x1.a1c309391fd1ap-241, 0.0, 0.0, 0x1.1529d0bc410d6p-719, 0.0, 0.0, 0.0,
     0x1.ac88f9f295f93p-507, 0x1.b84e65fb60a75p-764, 0x1.ae6bd5d5d0c31p-782,
     0x1.104eae110b48ep-96, 0.0, 0.0, 0.0, 0x1.a697f3fdd922ap-374,
     0x1.a2e0222e472ep-691, 0x1.570da28012b7p-757, 0x1.1678775b79b66p-304, 0.0, 0.0,
     0x1.56b3e09ec22eep-55, 0.0, 0.0, 0x1.f4e0f0598b80dp-740, 0x1.f204816c20273p-85,
     0x1.7b4c0a5dbf5fcp-561, 0.0, 0x1.1028189695062p-833, 0.0, 0.0,
     0x1.592d2a7715757p-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab0131a498b39p-822,
     0x1.d060ec527f86cp-668, 0x1.f5159d0a5cd7dp-243, 0.0, 0x1.ce98da40aeb13p-212,
     0x1.30312abe32c44p-222, 0x1.5b6c1ab7e8b59p-864, 0.0, 0.0, 0x1.3c85bd2730d48p-923,
     0x1.b4cf28e856543p-207, 0x1.3c3fd649a64f8p-149, 0x1.a4fca0bc8b295p-574,
     0x1.c0fba665f56d6p-986, 0x1.fdc73a1f64f03p-754, 0x1.506db4dd51305p-395,
     0x1.9ccdb82194e0ep-218, 0x1.2b2d36cbc47d7p-682, 0.0, 0.0, 0x1.3f1fcd5c10b7cp-670,
     0x1.98039aa1569a5p-769, 0x1.c031ef240f69p-801, 0.0, 0x1.a0823f318eff9p-793, 0.0,
     0.0, 0x1.e0a46900fb678p-884, 0.0, 0.0, 0.0, 0.0, 0x1.f31b22bd6b836p-800,
     0x1.cfc3c02cbf3f7p-508, 0x1.2cde49290569cp-596, 0.0, 0.0, 0x1.d8d63bc1fcc31p-358,
     0x1.a5e7cdd35a8a4p-539, 0.0, 0x1.15a1ed9b2dc9ap-816, 0x1.513afd9f2339ap-71, 0.0,
     0x1.ce2de56e3b11fp-147, 0x1.68954f8091dc1p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c53f30a5f0ffep-693, 0.0, 0x1.9ee20f5a123a1p-39, 0x1.82ed36629a972p-21,
     0x1.9b4ac445b7675p-279, 0.0, 0x1.821bb191463d3p-651, 0.0, 0x1.20b2dc06e6b53p-583,
     0x1.1f9734194d605p-790, 0.0, 0.0, 0.0, 0x1.7b1d617b6b7aep-24,
     0x1.35b32d032257fp-4, 0.0, 0.0, 0.0, 0x1.1a6f3f650cfe5p-672,
     0x1.abdb8be8352ddp-730, 0x1.547f4abe2af69p-969, 0.0, 0.0, 0x1.fd22e0a2d9de9p-415,
     0x1.ec741493627c3p-820, 0x1.b8392614009c7p-41, 0x1.cc1b36ea527bp-364, 0.0,
     0x1.0df6a1279064cp-190, 0x1.b74bb8c552465p-681, 0.0, 0.0, 0x1.771bc6bc72276p-819,
     0.0, 0.0, 0.0, 0x1.9a597618c72e8p-694, 0x1.8f5a778c3cf0ap-275, 0.0, 0.0,
     0x1.25855243733cfp-97, 0.0, 0.0, 0.0, 0x1.a74bfe8e5b251p-833, 0.0, 0.0,
     0x1.3c4d36745cafp-766, 0x1.544df8a66e70bp-639, 0x1.2604a3e4ac1f2p-21,
     0x1.dc5ddc6b65f81p-993, 0.0, 0.0, 0x1.c7a78178c21f8p-810, 0x1.55c38ea93efaep-651,
     0x1.4c71417d3e391p-891, 0.0, 0x1.2e8045652d837p-437, 0x1.3a7f74b1b2395p-943,
     0x1.289ad9fb08a52p-67, 0x1.ccdc5f10105b3p-752, 0.0, 0.0, 0x1.6be8aa7abc676p-351,
     0x1.aca2d616ba3a4p-319, 0x1.9dcf145eca6d3p-879, 0x1.19743cd4b2ab3p-21,
     0x1.ccc74d1f2bdacp-858, 0x1.9ea06752c2764p-594, 0x1.c68e38046c91ap-854, 0.0,
     0x1.35b4e1123412fp-888, 0.0, 0.0, 0.0, 0.0, 0x1.01e7b9c48317ap-246,
     0x1.0ceafff9d8b75p-412, 0.0, 0.0, 0x1.1bda8517e9ee5p-112, 0.0,
     0x1.3473ddabdfc8cp-674, 0x1.6b6f24a37eadp-854, 0x1.6d60c9873295dp-661, 0.0,
     0x1.6f440efdb287ep-1006, 0.0, 0x1.262564350a269p-775, 0.0,
     0x1.aa89361f81775p-429, 0x1.20962572ca8f1p-340, 0.0, 0.0, 0x1.9a0cfda8c7362p-551,
     0x1.ce67fb5a7f76dp-404, 0x1.61afe0bd0d53dp-829, 0x1.baad4848b20a1p-309,
     0x1.f3d3795a84ca5p-621, 0x1.3134f4a7d9691p-162, 0.0, 0.0, 0x1.38c30a8a37d9dp-217,
     0x1.f5cdd34641827p-21, 0.0, 0x1.06023f457d098p-1000, 0x1.81df69411b57fp-261, 0.0,
     0x1.37a525bb5b12dp-931, 0x1.d0df3c2cd71ecp-931, 0.0, 0x1.749b23bac686cp-1016,
     0.0, 0x1.6b7798c6ffb3bp-298, 0.0, 0x1.ee0424813ccc9p-401, 0x1.ac1cb98a63fep-272,
     0.0, 0.0, 0x1.068165b639d3cp-886, 0.0, 0.0, 0x1.9cd91684ff929p-102,
     0x1.4238b1e5992fdp-800, 0.0, 0x1.00a706b6eeda9p-693, 0x1.f02a3effd604fp-778, 0.0,
     0x1.f2d0711487757p-221, 0.0, 0x1.71debdf1fa6fap-214, 0x1.d65c1f79fd101p-635,
     0x1.6500ae20765fep-328, 0.0, 0.0, 0x1.2c13ba8eb28ddp-151, 0x1.edd9d0f2744ecp-901,
     0.0, 0.0, 0x1.43d3d267dd462p-716, 0x1.b855a38a0e0d9p-642, 0x1.0cf7b5c99657ep-143,
     0x1.ced357286c5f3p-91, 0x1.15db04285b51cp-31, 0.0, 0.0, 0x1.f2bed30037d85p-402,
     0x1.cb90c9c13491ap-121, 0x1.d20d656bbde2bp-494, 0.0, 0x1.4e43f618aebf1p-810, 0.0,
     0.0, 0.0, 0.0, 0x1.497aea8941f7p-470, 0x1.0663e868d2e2cp-650
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
            tmp1 = cbrt(tmp0);
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
    printf("cbrt %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("cbrt bench acc %la\n", global_bench_acc);
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
