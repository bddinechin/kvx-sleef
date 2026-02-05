/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pd1_u10purecfma.c --function \
 *     Sleef_log1pd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.09376c7cc0aa6p-565, 0x1.b2004556c7e67p-338,
     0x1.d732c9aeb93d2p-590, 0x1.03b532c681169p-91, 0x1.634125b45a2d4p-460, 0.0,
     0x1.ecfbf463db46bp-323, 0.0, 0x1.b4a302c56a188p-944, 0.0, 0.0,
     0x1.6cb065a477bep-382, 0x1p0, 0.0, 0.0, 0.0, 0x1.9d72b32361e4bp-911, 0.0, 0.0,
     0x1.8b4002b4fb878p-561, 0.0, 0.0, 0x1.e0838eadf1f64p-844, 0x1.a91bdb37442dcp-203,
     0x1.61536c8794229p-774, 0x1.65b01bce6fadbp-840, 0x1.0f924f944100dp-378, 0.0,
     0x1.4f6c5f1ae7462p-1, 0.0, 0.0, 0.0, 0x1.ad3c9a2a99766p-847, 0.0, 0.0, 0.0,
     0x1.a9d20f72b7b91p-377, 0.0, 0.0, 0x1.7e2b967de28e2p-726, 0x1.64762f979bad4p-126,
     0x1.bbf366d9b73b7p-838, 0.0, 0.0, 0x1.4efe22f4105cap-143, 0x1.c7070bd7a1052p-731,
     0.0, 0.0, 0x1.44a0e1b519974p-761, 0x1.d453d1053afe6p-783, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c08cb06c1fc7fp-220, 0x1.9418063543a77p-316, 0.0, 0.0,
     0x1.2758b41ad288ep-593, 0x1.2f25a1e9312a1p-385, 0.0, 0.0, 0.0, 0.0,
     0x1.702fe55b501ep-962, 0x1.af828a26439c4p-887, 0x1.f8591961cce05p-870, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ebf5f50fd54fp-361, 0.0, 0x1.7b9babee392ebp-540,
     0.0, 0x1.58719f8f195c7p-742, 0.0, 0x1.9e440ce6093c3p-175, 0.0, 0.0, 0.0,
     0x1.2efdbba088605p-897, 0x1.03b8a08ab2b2cp-510, 0x1.efedf48d5ca3cp-532, 0.0,
     0x1.d9dcc2beed29p-483, 0x1.ccc2f4c885b81p-870, 0x1.93348ef35afe4p-60,
     0x1.43f4039c0f45bp-459, 0.0, 0.0, 0x1.40d36295334c8p-644, 0.0, 0.0,
     0x1.8d888d26963a3p-952, 0x1.f94dbbca8ab26p-479, 0.0, 0x1.69a2963639f17p-761,
     0x1.8060399afbcacp-687, 0.0, 0x1.f4ff39e1f225bp-569, 0.0, 0.0,
     0x1.ce09e9aa8f817p-24, 0.0, 0.0, 0x1.d47a5bdc9950ap-705, 0x1.13431ce901868p-867,
     0x1.3c34a85e68b15p-567, 0x1.0a38107cce955p-841, 0.0, 0x1.2a71ad2c65afp-58, 0.0,
     0.0, 0x1.281d7ff81c5e4p-64, 0.0, 0x1.6ca207466c894p-283, 0.0,
     0x1.e3c92a0ab20bep-672, 0x1.4006d724e9323p-148, 0.0, 0x1.1694297151b8p-102, 0.0,
     0x1.5927ed803df3ap-712, 0x1.1368135a7a48ep-526, 0x1.15c07301bc28bp-940, 0.0, 0.0,
     0x1.80161392b4efp-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4913b1b25594p-176,
     0x1.994ac2e32a33ap-864, 0x1.cbd5c8c7b0775p-655, 0x1.51f380093cbfep-503,
     0x1.b320b3a6b15bfp-190, 0x1.f073f1d11eabbp-995, 0.0, 0x1.8b81a59f2c7ecp-466, 0.0,
     0.0, 0x1.cba400f3801afp-884, 0.0, 0.0, 0.0, 0x1.37f8aed8c1514p-415, 0.0,
     0x1.fc92d58883a6cp-784, 0.0, 0x1.82bb21cbfbae6p-121, 0.0, 0.0,
     0x1.2823586e7ed67p-340, 0x1.124c9ed1c0738p-454, 0.0, 0x1.d0daf3baa4311p-613,
     0x1.250c47950db23p-946, 0.0, 0x1.14156708f73f6p-639, 0.0, 0.0,
     0x1.7d180ecc78711p-762, 0.0, 0x1.a997524435ffdp-693, 0.0, 0x1.71caaa84cf608p-954,
     0.0, 0x1.f2b8bb7893998p-153, 0.0, 0.0, 0x1.fb0aa600f41ffp-479,
     0x1.90a72c15cb965p-815, 0x1.14f41fc9da302p-930, 0x1.24fcd477cec2dp-347, 0.0, 0.0,
     0.0, 0x1.651efa4f57137p-423, 0.0, 0.0, 0.0, 0x1.1d25dde2d7ea7p-270, 0.0,
     0x1.3d14ad364a9ebp-138, 0x1.f2a0844512d0ap-96, 0.0, 0.0, 0x1.8fc9c8bf8fd66p-214,
     0.0, 0x1.c5f93a5d3326ap-438, 0x1.1e80f1078525bp-84, 0.0, 0.0, 0.0, 0.0,
     0x1.c6a291462afa2p-566, 0x1.0127c9a0c4dd5p-394, 0x1.37ab615550685p-722,
     0x1.ddbbb31386f8p-273, 0x1.df9e4e0b19e29p-453, 0.0, 0x1.efb7a936ce903p-874,
     0x1.330a94fbe730fp-855, 0.0, 0.0, 0x1.e44a6b52ddc1bp-631, 0x1.9a50c65ddeab2p-192,
     0x1.4ab04fbb64ef5p-77, 0x1.83dbcb0a2ea4dp-39, 0.0, 0.0, 0x1.69941fa902a64p-453,
     0x1.566d8d01417c5p-724, 0.0, 0.0, 0x1.fcb0642d7d0ap-120, 0.0,
     0x1.9b24b2fe41ac7p-508, 0.0, 0x1.3992b51630c47p-306, 0x1.dc0d1a530d7b5p-504,
     0x1.a5e3c4cccfcdcp-578, 0.0, 0.0, 0.0, 0x1.4dadefa0ebaf5p-344,
     0x1.29bb4eb18988ap-1008, 0.0, 0x1.0233d1dee9014p-322, 0.0, 0.0, 0.0,
     0x1.bdc100ad20933p-110, 0x1.6ed8c65ce715cp-856, 0.0, 0.0, 0x1.bceb8bca2bb0fp-23,
     0.0, 0x1.0cbb13fac8543p-505, 0.0, 0x1.cb8a7d419da92p-702, 0x1.fbceae09f1cfep-636,
     0x1.4393590d7d5bp-72, 0x1.124013f7f0ad3p-552, 0x1.85789c38935fap-156,
     0x1.1369a8f591d21p-521, 0.0, 0x1.1533f9bf1f907p-254, 0.0, 0x1.9c93880ce8969p-244,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab828698c4b13p-484,
     0x1.11c16b029322cp-788, 0.0, 0x1.b0ad748a91ffp-786, 0x1.ac571ba685939p-219, 0.0,
     0.0, 0x1.2f47ab5f4ba2ep-590, 0.0, 0.0, 0x1.53a113df53ce5p-394,
     0x1.3e75129699533p-660, 0.0, 0.0, 0.0, 0x1.6538923774e6ep-333,
     0x1.f515ce5499ee1p-402, 0x1.1f98440bd219ap-690, 0x1.c0563c2e2c196p-79, 0.0, 0.0,
     0x1.d78c257b235afp-326, 0.0, 0.0, 0.0, 0x1.12a3ed9f8137p-213, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.17e5a1cbb3871p-573, 0x1.122977f059e3ap-89, 0x1.1b7aa2167814ep-273, 0.0,
     0.0, 0x1.c01ac38c80aaep-534, 0x1.8a5b75236bf85p-342, 0x1.3bc4713eb339ap-945,
     0x1.3e602492f1c5bp-248, 0x1.cebd293562ce1p-393, 0.0, 0.0, 0x1.cbc940c427374p-668,
     0x1.f065eafa44ad8p-766, 0.0, 0.0, 0x1.e47d29ef49f2ap-998, 0.0,
     0x1.b5c3fb5eeb153p-756, 0x1.cb2b858e8844p-684, 0.0, 0x1.05d7dbf9c003fp-974, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c24ee0cb2c733p-873, 0.0, 0.0, 0.0,
     0x1.ab259803ec31cp-74, 0.0, 0x1.13fff977e446dp-458, 0.0, 0x1.8d8cb88ed75ep-648,
     0x1.f8e9f8efcd79ap-970, 0.0, 0.0, 0x1.a03c77e6f9808p-457,
     0x1.f754c04d3ef0ep-1021, 0.0, 0x1.21ec226be953p-255, 0x1.333eb96013bdep-427, 0.0,
     0.0, 0.0, 0x1.f7b44373e8698p-830, 0.0, 0x1.2460214f12baep-682, 0.0,
     0x1.ec313713e5a2fp-465, 0.0, 0.0, 0x1.9b1fcb2975b0ep-971, 0x1.c512086439235p-783,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.233684a737197p-1012, 0.0, 0.0, 0.0,
     0x1.90256be3481aap-113, 0x1.447d31a68daa5p-828, 0x1.1d2e79f623db7p-568,
     0x1.7dceb0d9e2b91p-636, 0.0, 0.0, 0.0, 0x1.9f39074935f93p-715,
     0x1.f967ff2f026c1p-1012, 0x1.26f3fd9f35cfdp-741, 0x1.6d719f509d882p-133, 0.0,
     0.0, 0.0, 0x1.a32c729265facp-723, 0x1.a547355dedec8p-20, 0x1.732ed1e747c68p-383,
     0.0, 0x1.b9f9d22449112p-919, 0x1.413b78ecfa58ap-118, 0.0, 0.0, 0.0,
     0x1.fb0a976c4342bp-239, 0.0, 0x1.a37a2f304f44ap-540, 0.0, 0.0, 0.0, 0.0,
     0x1.480f46536dc53p-609, 0.0, 0.0, 0.0, 0x1.25a8310eb44e1p-619,
     0x1.acc0ac51759d9p-867, 0x1.ef5d5b9a3a451p-450, 0x1.0b7140ae1d77ep-551, 0.0,
     0x1.fb1972d0b0477p-397, 0.0, 0.0, 0x1.b89495041ec79p-217, 0x1.6c9a7f8d0ef86p-115,
     0x1.78b4babcea0a7p-344, 0x1.b93346ebd14bep-543, 0x1.d067d97405cdap-693, 0.0,
     0x1.569b7834e5f48p-1000, 0.0, 0.0, 0x1.4a648ab4a4637p-391,
     0x1.4f8425ce4699bp-359, 0x1.8f5f2f157a52fp-609, 0.0, 0x1.d7fee55c35681p-1016,
     0x1.760b0eb399311p-832, 0.0, 0.0, 0x1.6e2ad90003bf2p-179, 0.0, 0.0,
     0x1.1c2760f95d498p-1003, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39f51f0ce3953p-110, 0.0,
     0x1.b4bfee49df19dp-467, 0.0, 0x1.57e598cf8b87bp-110, 0.0, 0.0,
     0x1.d86db0c1a0c1ep-16, 0x1.3fd6ece7de517p-73, 0.0, 0x1.b3040008d1d16p-573, 0.0,
     0.0, 0x1.52d1653a23d68p-653, 0x1.0e03b392c1caap-926, 0x1.35a4a279964d6p-486, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e0e28cec6b34p-197, 0x1.742a8f74b9a1p-751,
     0x1.bb1bb3d0313c5p-318, 0.0, 0.0, 0.0, 0.0, 0x1.f669ed3253dcbp-85, 0.0,
     0x1.a48ab14661f74p-741, 0.0, 0x1.62359bdec3f77p-765, 0.0, 0.0,
     0x1.a0f671c0ab56fp-780, 0.0, 0.0, 0x1.6cda0baba3313p-735, 0.0, 0.0,
     0x1.5ddc6978e9eep-77, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ab956dc0d101p-326,
     0.0, 0x1.5d07c7d31dbc4p-145, 0x1.3a19625b3400bp-998, 0x1.73cc041fef7ap-529, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c4211b2d47fb1p-572, 0.0, 0x1.5dcd1b0f9e233p-37,
     0.0, 0.0, 0.0, 0x1.8202e65b6fbfcp-83, 0.0, 0x1.cb718fb5cfa94p-342, 0.0,
     0x1.fcd2527096786p-81, 0x1.5208c94a47d82p-324, 0x1.a57015c3d4aacp-1016,
     0x1.ef4a0bb6aa5f6p-511, 0.0, 0.0, 0x1.1bfa6785cbc56p-217, 0x1.613475db5f14fp-581,
     0x1.a74706bd1077cp-958, 0.0, 0x1.6778b6e476b1p-429, 0.0, 0.0,
     0x1.1ef78fdd402bcp-98, 0.0, 0.0, 0.0, 0.0, 0x1.0991eb6ecaf07p-572, 0.0,
     0x1.699369abef971p-825, 0x1.8e1d376152a12p-661, 0x1.cdc1b79354632p-391, 0.0,
     0x1.88c0d6f2146c6p-634, 0.0, 0x1.d6b0d0b6adc0dp-871, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0a1ee02d945fcp-889, 0.0, 0x1.f40f80684d652p-5, 0.0,
     0x1.750e0cd2c44fbp-812, 0x1.3542c9152bafp-493, 0x1.f7ff604f09866p-185,
     0x1.7f8fd28293434p-838, 0x1.186f102fe5306p-44, 0x1.2fa6e53ab5896p-363, 0.0, 0.0,
     0x1.5ba1b011d650fp-871, 0x1.75f3e09c04ed6p-47, 0.0, 0x1.a80a039bfb86p-846, 0.0,
     0x1.159401c33389ap-244, 0x1.9a6bae4704e67p-128, 0.0, 0x1.aa5deaee9df29p-780, 0.0,
     0.0, 0x1.f33bcf298716cp-603, 0.0, 0x1.509e5bc88b896p-119, 0.0,
     0x1.8535fe6388d6ap-620, 0.0, 0x1.67932aeaf5c22p-321, 0.0, 0.0, 0.0,
     0x1.fb35fcb5131d1p-598, 0.0, 0x1.0c5bc07f8b882p-900, 0.0, 0.0, 0.0, 0.0,
     0x1.ee50c2da9e2cp-860, 0.0, 0x1.d72216ec7756p-333, 0.0, 0.0,
     0x1.a854a5ea89d54p-252, 0.0, 0.0, 0x1.22743c23c3f8cp-572, 0x1.6b1f8657ec852p-210,
     0x1.ad764c791a9b1p-486, 0.0, 0x1.8e3bc6ada31c5p-191, 0.0, 0x1.c4cc2978ce0cdp-805,
     0.0, 0x1.b8fe97027ec93p-32, 0.0, 0.0, 0.0, 0x1.40f2d833cdb5fp-589, 0.0, 0.0, 0.0,
     0x1.a978439a0984fp-866, 0.0, 0.0, 0x1.b26507cbe5f75p-890, 0x1.4b5206a29905ep-421,
     0.0, 0x1.ee8a380d0f956p-62, 0.0, 0x1.9683a6f2c1f79p-932, 0.0,
     0x1.aba701479ff15p-908, 0x1.295ef9d71aeaep-486, 0x1.4b1e0ecfe467ap-235, 0.0, 0.0,
     0.0, 0x1.d7521b084efc8p-957, 0.0, 0x1.1dee3df84af79p-14, 0x1.a3e55eff43f9ap-708,
     0x1.e9eacc6640dc2p-548, 0.0, 0x1.ec5223a167a27p-864, 0x1.63781c18abba8p-524, 0.0,
     0.0, 0.0, 0x1.4bfd6862ed85dp-398, 0x1.f7d1a9d8c5ba6p-366, 0x1.025e2e5a0cd99p-755,
     0.0, 0.0, 0x1.27da4826f2404p-777, 0x1.07da0894abac1p-885, 0x1.5cabdb8398972p-2,
     0.0, 0.0, 0x1.8794caa78723ap-739, 0.0, 0x1.9e84d4fc89773p-789, 0.0, 0.0,
     0x1.227510f3c4432p-593, 0.0, 0.0, 0.0, 0.0, 0x1.5c842ee90c742p-296,
     0x1.f622fab0f6296p-839, 0.0, 0.0, 0.0, 0x1.a63655be90b89p-187,
     0x1.72d8831748a34p-825, 0.0, 0x1.39fc9c7e66a72p-251, 0.0, 0x1.8e5f310a60477p-987,
     0x1.d69ff47c03a91p-918, 0.0, 0.0, 0x1.6534a1a0bf63bp-398, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.822a4d2fe3a1bp-42, 0x1.a74a765aba587p-75, 0.0, 0.0, 0.0,
     0x1.92f68ec4ce0e1p-248, 0x1.d3a2c1f55bc0ap-69, 0x1.25e9f09ad6e9p-152, 0.0, 0.0,
     0x1.6b0b7c9d6be54p-888, 0x1.c89373ba54415p-981, 0.0, 0x1.1b51afdf0cd74p-56,
     0x1.61a18ac25756bp-602, 0x1.53cc1e5b5887ep-927, 0.0, 0x1.03bb91a16f1bap-38, 0.0,
     0x1.bfd76a394f373p-465, 0x1.61635773f07bbp-186, 0x1.4c1ddd026fbfbp-518,
     0x1.351e7665ede65p-454, 0x1.1aaf2adecdcbfp-584, 0.0, 0x1.40f6a3d6f24d5p-774,
     0x1.159b9316ec22fp-20, 0.0, 0x1.0a4fcdce26efdp-324, 0.0, 0x1.8669c35d78457p-402,
     0x1.8e07889d5316dp-760, 0.0, 0.0, 0x1.a717a3faeaeadp-225, 0x1.0c7a6158023e9p-525,
     0x1.1196add5b7f06p-917, 0x1.87ce4371a8079p-397, 0x1.b40642017d6b5p-26,
     0x1.b0e67f68025b4p-211, 0x1.30a3162d7faaap-95, 0x1.f2a84e72f93c9p-539,
     0x1.d2241f6855749p-904, 0x1.e8f18e496dc6fp-449, 0x1.a30d31e1fab06p-131, 0.0, 0.0,
     0.0, 0x1.44273c1e9047fp-528, 0x1.8bf648b3a50bcp-951, 0x1.c21c48e500728p-608, 0.0,
     0x1.8e16af22b93cap-507, 0x1.dd21fbbd713c7p-1013, 0.0, 0x1.5d779c52f69b2p-985,
     0.0, 0x1.a9cc58002999dp-33, 0.0, 0x1.aa6af1644d681p-878, 0x1.7a70e46c4d813p-903,
     0x1.b3a2752320924p-937, 0x1.6fb25075fdf61p-172, 0.0, 0.0, 0x1.89fa2c526d30ep-489,
     0x1.b2c4822918ccep-610, 0.0, 0x1.3c6bf4ec3b5fbp-138, 0x1.b1a2dc5b99b5fp-936,
     0x1.37dbfa571faa1p-15, 0x1.e6516290b4812p-131, 0.0, 0.0, 0x1.8756502bf7e5ap-148,
     0.0, 0.0, 0x1.8e07d1bf5fb91p-66, 0.0, 0.0, 0x1.36b0a94d4f6f5p-717,
     0x1.11d43bf5c3ecdp-773, 0.0, 0x1.468942f96ee8ep-632, 0.0, 0x1.6981253f9e431p-676,
     0x1.843c3b9af7ae2p-580, 0.0, 0.0, 0x1.63eb38fb6b5cfp-89, 0x1.59f12ad0477fp-604,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11be1a22b8edbp-280, 0.0, 0.0,
     0x1.6716d8e6048fcp-281, 0x1.23e91b0a5c626p-214, 0x1.72d66bbf30a9p-895,
     0x1.ed01b98cba6d8p-748, 0x1.7b4e326883134p-652, 0x1.eae1152db5ba2p-860, 0.0,
     0x1.2111e181fcae2p-375, 0.0, 0.0, 0.0, 0x1.820e6e898ad2fp-659, 0.0, 0.0,
     0x1.27eebbc42c409p-465, 0x1.9ad4efd6757bap-561, 0x1.344bce42fbbdfp-709, 0.0,
     0x1.cc778a3e9c1afp-865, 0x1.1c8c94de8b6b6p-218, 0x1.a564c4cc73b4bp-160, 0.0, 0.0,
     0x1.efaebdfbb7045p-294, 0.0, 0x1.2ddfee597d5d1p-399, 0x1.0d985a4d4c06cp-616,
     0x1.1d6d15e655c3ap-804, 0x1.343dbc9fd5a01p-384, 0.0, 0x1.4a4bb067d7449p-42, 0.0,
     0x1.131fed801b77fp-208, 0x1.53f268baff8d4p-874, 0x1.e062963955c76p-957,
     0x1.ceb130ec14175p-963, 0x1.53f9d8d41703ap-486, 0.0, 0.0, 0x1.db3f61cec7694p-713,
     0.0, 0x1.70a324f59cbdcp-516, 0.0, 0x1.a61f577d1ad5dp-761, 0.0, 0.0, 0.0,
     0x1.2d1f15f11613cp-968, 0.0, 0.0, 0.0, 0x1.959021ed4c6ddp-479, 0.0, 0.0,
     0x1.fe75a3f81b9dep-777, 0.0, 0x1.a7e3636caba91p-541, 0x1.3465cb3c9ad6p-479,
     0x1.b08bd03bb1701p-8, 0.0, 0x1.a8680365722d6p-867, 0x1.7f3472d49b463p-686, 0.0,
     0.0, 0x1.76b09c118fc5p-540, 0.0, 0.0, 0x1.f94d381284aabp-271,
     0x1.4c4545fec14fdp-439, 0x1.6c85fb37839d8p-550, 0x1.eaf9bb9b4dabp-454,
     0x1.c54699292a268p-62, 0.0, 0.0, 0x1.3a10381ffd9acp-317, 0.0, 0.0, 0.0,
     0x1.db53e128f8681p-649, 0.0, 0.0, 0.0, 0.0, 0x1.0fde6785236f6p-439, 0.0,
     0x1.c8c7cb53dad0ap-229, 0.0, 0.0, 0x1.85072f2c7fd64p-279, 0.0, 0.0, 0.0,
     0x1.5e6155906453ap-900, 0.0, 0.0, 0.0, 0x1.3b97e01a5233cp-942, 0.0, 0.0, 0.0,
     0x1.acc3b930b1d0cp-86, 0x1.101c59435866cp-201, 0.0, 0.0, 0.0, 0.0,
     0x1.cc865b13718b9p-874, 0.0, 0x1.2000af0d2666cp-24, 0.0, 0x1.277b6b693e24cp-899,
     0.0, 0x1.4543d7870c63ap-179, 0.0, 0x1.baff4d5ac97c4p-174, 0x1.3349c625dc39bp-704,
     0x1.a3f03a9b27fc6p-982, 0x1.66f5ad1d0dd5p-756, 0.0, 0.0, 0x1.1f3070fa80fd6p-966,
     0.0, 0x1.1a385a0e56bacp-1010, 0.0, 0x1.8931c57695dfp-776, 0.0,
     0x1.dafe7ed915afdp-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d40023b5c437p-249,
     0x1.cbaf75df7abe4p-527, 0x1.1c2bebfe7a01dp-13, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1d177af7027ap-322, 0x1.05931cb0fa7c7p-995, 0.0, 0.0, 0x1.645e914003475p-307,
     0x1.6a87ed66b27fbp-717, 0x1.49d801270e4fap-198, 0x1.0bac4d87feaa6p-619,
     0x1.9350d2d4d40e8p-330, 0.0, 0.0, 0x1.59ebf65688a39p-558, 0.0, 0.0, 0.0,
     0x1.62ac6d8a1642dp-422, 0x1.d6cffa02efbcep-931, 0.0, 0x1.bfaebf86e69d7p-509, 0.0,
     0.0, 0x1.5d4f7b97468ffp-166, 0.0, 0.0, 0x1.5e3192d7afcc8p-649,
     0x1.a450cb0349292p-243, 0x1.95a669a0cfb9bp-355, 0x1.74dca4ccda392p-907,
     0x1.b8c9405980ebfp-385, 0x1.95caa47ddfdcdp-22, 0x1.93af8e7270848p-690,
     0x1.944398fb4fbaep-136, 0x1.16daa0631182ep-57, 0x1.1342e8e8c67bfp-948, 0.0, 0.0,
     0.0, 0.0, 0x1.baea0e3bc9c0cp-779, 0x1.162a223552003p-571, 0.0, 0.0, 0.0,
     0x1.46e8d5d47863p-122, 0x1.622ade873c156p-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbe3413c236aep-824, 0x1.4074b049b50b8p-418, 0.0, 0.0, 0.0, 0.0,
     0x1.dfce5f52f950dp-232, 0.0, 0x1.c9668444adcbdp-424, 0.0, 0.0, 0.0,
     0x1.52a01d6b9ab34p-937, 0.0, 0.0, 0.0, 0x1.f1836702f995ap-281,
     0x1.c6d834d9ce816p-443, 0x1.c592cd7bfba1dp-799, 0x1.065177ffd22d4p-23, 0.0, 0.0,
     0.0, 0x1.c9c9198b4c732p-12, 0.0, 0x1.f76b33489b172p-455, 0x1.f19cbded2c6edp-176,
     0x1.bab23c16e7954p-601, 0.0, 0x1.4eab3a1985f86p-515, 0.0, 0.0,
     0x1.f467d274dd307p-576, 0.0, 0.0, 0x1.852b9dc406b85p-759,
     0x1.28c22f506a08cp-1013, 0.0, 0x1.ab723cdfe254p-722
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
            tmp1 = Sleef_log1pd1_u10purecfma(tmp0);
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
    printf("Sleef_log1pd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log1pd1_u10purecfma bench acc %la\n", global_bench_acc);
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
