/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsd1_purecfma.c --function Sleef_fabsd1_purecfma \
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
     0x1.dfc7e1ed11d47p-80, 0.0, 0.0, 0.0, 0x1.0e9b7039edafdp-626,
     0x1.a69a5fa83c52dp-414, 0x1.fa543086b14dap-774, 0.0, 0x1.fc7bbfe3a159ep-726, 0.0,
     0x1.ca9192a2fd5f6p-233, 0x1.ce9872fbbe50fp-378, 0x1.03e890193cd8p-665,
     0x1.56fd47bcdf418p-450, 0x1.83b32281eca38p-922, 0.0, 0x1.3337d22223d3bp-863,
     0x1.eb7c193e73105p-436, 0.0, 0.0, 0x1.0187b7d79e7d2p-888, 0x1.90a02d1f8cc68p-41,
     0x1.0939f49cdea26p-439, 0x1.1efc3bb70d4fdp-586, 0x1.02e3a8cd08c63p-332,
     0x1.9034163f81b01p-978, 0.0, 0x1.90509dcbbe69ap-951, 0.0, 0x1.cdd9a56b44ba2p-536,
     0.0, 0.0, 0x1.56568128f4b7dp-354, 0x1.f2453c5da8258p-90, 0.0,
     0x1.c067f62a9bddfp-295, 0x1.973625dd8d8bdp-120, 0x1.0406b25927b4fp-677, 0.0,
     0x1.e04cb226caf58p-200, 0x1.581c9213c6e5cp-914, 0x1.ea8dc98cdef93p-424,
     0x1.f28fcddeab275p-15, 0.0, 0.0, 0.0, 0x1.917b8cec71294p-111, 0.0,
     0x1.53b4b9ae1f18p-881, 0.0, 0x1.d9f120203e2f4p-32, 0.0, 0.0,
     0x1.4c82cd2b6bed1p-45, 0x1.25ab587ee5af3p-535, 0.0, 0.0, 0.0,
     0x1.f21eaf77d47a7p-1000, 0.0, 0.0, 0x1.9fa1c68abec14p-437, 0.0,
     0x1.7604e86f4bb51p-736, 0.0, 0.0, 0x1.0c91e8e4882p-100, 0x1.31964e2cd2bc8p-362,
     0x1.95723e5e9847ep-419, 0.0, 0.0, 0.0, 0.0, 0x1.aac0c90c1beaep-681, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3a87807a03a51p-268, 0.0, 0.0, 0.0, 0x1.8d282344884a1p-958,
     0.0, 0.0, 0x1.2b1df54cd44bcp-266, 0.0, 0x1.7929382c09e2p-381,
     0x1.be40415ea9c99p-870, 0x1.ff233aa976977p-832, 0x1.81d674b799348p-58,
     0x1.fb13770557886p-826, 0.0, 0x1.07d6428bb56b4p-935, 0x1.09401b9b3a69ap-656, 0.0,
     0x1.4f0d16f7607e5p-184, 0x1.eae9cadf47995p-160, 0.0, 0x1.ee012feea30e6p-587, 0.0,
     0.0, 0x1.89b191eecdc4ap-319, 0x1.470cbdb29d4e4p-216, 0x1.a14c0cfe3e46fp-270,
     0x1.e51353982aa01p-124, 0x1.0844104d6c236p-396, 0.0, 0x1.df67d206f7519p-998, 0.0,
     0x1.7bbf65cf41a6p-167, 0x1.40031a63d0a29p-1, 0x1.d437dcc23f772p-603,
     0x1.748252a97bc65p-749, 0.0, 0x1.4f0445b84ddap-479, 0.0, 0.0, 0.0,
     0x1.148e13df93059p-691, 0.0, 0x1.48f628c671d9dp-962, 0.0, 0x1.99117307090e1p-789,
     0.0, 0.0, 0.0, 0x1.f16b29401f746p-240, 0.0, 0x1.4754e14a646dap-459, 0.0,
     0x1.10de33e22176dp-752, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6b5b004554fcp-932,
     0x1.2c996e9896af8p-130, 0.0, 0.0, 0.0, 0.0, 0x1.9a04a9feaffa9p-877, 0.0, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0x1.f2460cf03985cp-175, 0x1.194d0bf0eb04fp-214, 0.0, 0.0,
     0.0, 0.0, 0x1.116fe3941fd14p-507, 0x1.2f90a95b36034p-259, 0.0,
     0x1.f29cf299bbfccp-212, 0.0, 0x1.b0233f27feb1bp-673, 0x1.a72c41a9444d3p-1018,
     0x1.cb8e4bc682dc2p-83, 0x1.6eb9f89101b32p-723, 0x1.33244b0afefe1p-687,
     0x1.f59a0c924e856p-452, 0x1.018ad1bc8d229p-847, 0x1.92266cbfa9072p-90, 0.0, 0.0,
     0x1.29ef11c45a5ep-380, 0.0, 0x1.5f4bdaf6b2e39p-324, 0.0, 0.0,
     0x1.14c04e54f5f5cp-456, 0x1.b058e7846a654p-430, 0x1.524d0f4ecb505p-728,
     0x1.737e673b456cbp-850, 0.0, 0x1.0e84e0adc023bp-215, 0.0, 0.0, 0.0, 0.0,
     0x1.0bf93df91c7e2p-641, 0x1.21d86f33b1cd6p-288, 0.0, 0.0, 0x1.1753d61b81013p-805,
     0x1.e2f94460d226bp-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b2a8b994366cp-345,
     0x1.a7765038d5c2cp-264, 0.0, 0x1.9955d3ce7254dp-475, 0.0, 0.0,
     0x1.57c859e18ea8fp-116, 0.0, 0.0, 0x1.2e9296ff39d33p-720, 0.0, 0.0,
     0x1.e2a8f6e1c792fp-245, 0x1.a15926196e6ddp-144, 0.0, 0.0, 0x1.cdc4a99b35078p-365,
     0.0, 0.0, 0x1.0f468417079b6p-695, 0.0, 0.0, 0x1.b80e7a8d42081p-991,
     0x1.b0aafefc6ca4ap-594, 0.0, 0x1.c9c3ca8cfb1dep-64, 0x1.93435156b5ff6p-428, 0.0,
     0x1.f381b2281f2f3p-129, 0x1.79e90cb726516p-110, 0x1.f165d170a8d5p-437,
     0x1.d16b089b416d5p-733, 0.0, 0.0, 0x1.193c8b7368266p-361, 0.0,
     0x1.d3a09beb14b44p-712, 0.0, 0x1.85f3905656035p-777, 0.0, 0.0,
     0x1.513d13ddb768dp-488, 0x1.0dde291038121p-26, 0.0, 0x1.ee3525dcd40b6p-194,
     0x1.c2b27f59b3643p-97, 0x1.49d398544e40bp-145, 0x1.6cbbda1a678e6p-728,
     0x1.c7ac93862d3a3p-575, 0x1.bf259c94ba5f5p-916, 0x1.5403298987f4ap-122,
     0x1.e044eeadb3424p-378, 0.0, 0x1.0e701d21efc7ap-148, 0x1.edb749ae610b8p-36,
     0x1.077f6b660f2bep-242, 0.0, 0.0, 0x1.b9eb34db89e1p-402, 0x1.e4aa38d1ccd49p-672,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ad9c394d2839p-996, 0.0, 0.0,
     0x1.0bbdc9a539a29p-549, 0.0, 0.0, 0x1.1c6f61757868cp-53, 0.0, 0.0,
     0x1.d46ce33241be6p-990, 0.0, 0x1.9256cd9c6f7c4p-721, 0x1.abab107d7a355p-795, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b0ff90259dcap-593, 0.0, 0.0,
     0x1.943c0f6eeaf1ap-530, 0.0, 0x1.d485d18982781p-219, 0.0, 0.0, 0.0,
     0x1.7ad1262fcddacp-534, 0x1.75bfae2ec2c9cp-878, 0.0, 0x1.11109f3c1ab16p-530, 0.0,
     0.0, 0x1.e3a96a82c7c81p-723, 0.0, 0x1.54c4545899341p-958, 0.0,
     0x1.b38bdcc180689p-753, 0.0, 0.0, 0x1.39b4c559cfb14p-402, 0x1.ead975301b99bp-601,
     0.0, 0x1.4dd47f243962cp-731, 0x1.a3afe1a9daf9cp-1016, 0x1.5ef61c0adba6ap-131,
     0x1.abc28d00b52b5p-927, 0.0, 0x1.4abeb71921a63p-31, 0.0, 0x1.aae9b711401f2p-966,
     0x1.c5ec57458967bp-177, 0.0, 0x1.db7f290445c43p-142, 0x1.44f9b76c7859dp-650,
     0x1.47a3ee18f1f63p-203, 0.0, 0x1.ac1382eed3951p-886, 0.0, 0x1.116c9d1abe552p-915,
     0.0, 0.0, 0x1.cd6a64b98fb94p-581, 0x1.ec4b7882cbbacp-77, 0.0, 0.0, 0.0,
     0x1.de3606e32db8p-151, 0x1.8b7e54fb5cab2p-287, 0x1.b3608b0ab7284p-758,
     0x1.b456b310a7cadp-923, 0x1.cb1d0663fac9fp-490, 0.0, 0x1.34821ddfeb0fbp-685, 0.0,
     0x1.5add7af361318p-438, 0.0, 0.0, 0.0, 0.0, 0x1.d865e54b700a1p-463,
     0x1.65d95c9e1e8e4p-29, 0.0, 0.0, 0x1.304e38bceb34bp-382, 0.0,
     0x1.3785397aef57ap-792, 0.0, 0x1.6dbf131d29b4ap-67, 0x1.338728048c7e6p-987, 0.0,
     0.0, 0x1.c84dd6b9a3b11p-350, 0x1.c771b5f4e4388p-367, 0.0, 0x1.a7da652befac2p-592,
     0x1.a3a7e764925c7p-249, 0x1.de7e060129443p-610, 0x1.87a9beaf58e2p-680, 0.0,
     0x1.f79773dd0a62dp-225, 0.0, 0.0, 0x1.b76dbb1f27564p-402, 0x1.f011e5a857d5ep-504,
     0x1.465e68bdf12bep-720, 0x1.c7f063d65f128p-621, 0.0, 0.0, 0x1.2cb11edb97b2dp-213,
     0.0, 0.0, 0.0, 0x1.4317004a7c5d5p-211, 0x1.b40495768454dp-1008,
     0x1.9c6aa7220043p-908, 0.0, 0.0, 0x1.5a0053b523cc3p-171, 0x1.430799495c1eep-988,
     0.0, 0.0, 0x1.d29ebfbeadcefp-480, 0.0, 0.0, 0x1.f796b66b49eadp-508,
     0x1.3c70789bfb98ap-633, 0x1.0183e5d5ebfe1p-70, 0.0, 0x1.38526b31b2088p-935,
     0x1.e6620c7dd7b4p-122, 0.0, 0x1.567aafe7a5ef3p-789, 0x1.4e1adc271f01bp-611, 0.0,
     0.0, 0x1.7840a7690777ap-633, 0.0, 0x1.f9a40b3c76613p-336, 0x1.4d427c76fbdaap-170,
     0x1.2ac8134818ea3p-252, 0x1.a9ab9676b0afbp-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.16577d581ac55p-980, 0x1.282edf518bfb3p-910, 0.0,
     0x1.4fe4a49e9a89bp-42, 0x1.19138bebec756p-542, 0x1.21b18e054e1afp-207,
     0x1.8b4e3b2074a0bp-750, 0.0, 0.0, 0.0, 0.0, 0x1.227437f59b1fbp-336,
     0x1.957d1ee584754p-161, 0.0, 0x1.f667dce877becp-198, 0x1.a4038e2442a9ap-88, 0.0,
     0.0, 0.0, 0.0, 0x1.735cd25ed4926p-521, 0.0, 0x1.0a43bf792310fp-74,
     0x1.22828b6e2e594p-496, 0x1.a781535d3c0d6p-178, 0.0, 0.0, 0x1.fd87bdc5d9772p-192,
     0.0, 0x1.0edac5eacc762p-787, 0.0, 0.0, 0x1.4256bcc948b25p-743, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.14e7370a0fb89p-846, 0x1.5b945dfbc6166p-448, 0x1.6c4fb8e2d9cb1p-840,
     0x1.c635beaed9382p-404, 0.0, 0x1.8bf6aabeef54ep-113, 0x1.3b721b0c7858bp-244, 0.0,
     0x1.a6c441d57c6c7p-977, 0x1.54bc9d403264dp-21, 0.0, 0.0, 0.0, 0.0,
     0x1.5ebafa4dbec1p-358, 0x1.06e4b62cb37d5p-163, 0.0, 0.0, 0.0,
     0x1.b99e18cbb26f3p-106, 0x1.6ac4f2e4d1f16p-476, 0x1.a0aa782f507b9p-322,
     0x1.1a1ec0402613ap-165, 0.0, 0x1.24b19130b1799p-862, 0.0, 0x1.1ca649fdfb452p-522,
     0x1.df8346265cap-464, 0x1.1e778c2ba46a2p-847, 0x1.24696de640d7ap-689, 0.0,
     0x1.163b0aba64bc8p-339, 0.0, 0.0, 0x1.756476dd0c1ap-459, 0x1.6fba8aeb9e7e3p-873,
     0x1.22955e272d11ap-447, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bfdbb7a6b4b52p-594, 0x1.4e6af7acd40c7p-799, 0x1.9e547be284c99p-987,
     0x1.a0897561fe166p-775, 0x1.5d5726ea63b7ap-588, 0x1.9c196d249ccfp-665, 0.0, 0.0,
     0x1.c0c6a57329184p-703, 0x1.d526ca8b91e03p-332, 0.0, 0.0, 0x1.9da9596048163p-913,
     0.0, 0x1.e495fda8ef079p-154, 0x1.cc8431332349bp-590, 0x1.64bb67ecd9c4p-920, 0.0,
     0x1.d6054ac7ff054p-377, 0.0, 0x1.fbb39de4f41a1p-408, 0.0, 0.0,
     0x1.f074c34aa9eb9p-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4122a2c85942ep-640, 0x1.9923f38cc128dp-88, 0x1.21faada38c96ep-161, 0.0, 0.0,
     0x1.5b7c6b7fc43edp-308, 0x1.f96433af479a3p-336, 0.0, 0x1.9ad1a3b30153fp-833,
     0x1.a9d7448588633p-835, 0.0, 0x1.67506e064087ep-494, 0x1.34976d6f67cd2p-36,
     0x1.a70a27756bdc4p-369, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bada1d2177ep-172, 0.0, 0.0,
     0.0, 0x1.0d3da9fe92a55p-733, 0x1.910ff24f007c6p-952, 0x1.255f53c61e3c1p-853,
     0x1.2594ea960d7aap-642, 0x1.037266d3d914dp-623, 0x1.fc3f6726350edp-902, 0.0,
     0x1.7c3a210c7f8b3p-17, 0.0, 0x1.15ab50ec6dee4p-114, 0x1.4842a7739ca73p-432, 0.0,
     0.0, 0.0, 0x1.4bb458fb9afc8p-876, 0.0, 0x1.5de4cd6198eafp-340,
     0x1.c5eee6ed4922fp-765, 0.0, 0.0, 0x1.a4813a29990ep-618, 0x1.01864234d9eaep-471,
     0x1.009e404c3889dp-666, 0.0, 0x1.0d542dbee0d49p-846, 0.0, 0x1.78df3442b61d7p-669,
     0.0, 0.0, 0x1.0818dd1e2bb77p-784, 0x1.17f17ae0cb98ap-520, 0x1.7c3f3ff07ce74p-951,
     0.0, 0.0, 0x1.e4966ae82ab9ap-741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d18f84d9f92dp-1, 0.0, 0x1.c39522c3075c3p-330, 0.0, 0x1.78a8b28a2dc82p-634,
     0.0, 0.0, 0x1.aab9440cbd0ccp-208, 0.0, 0.0, 0.0, 0x1.bc061815c5a4ep-496,
     0x1.8611cd6a3d582p-490, 0x1.aa1a00874ab84p-847, 0x1.521b53912d2a9p-428,
     0x1.8cb47415b4f8fp-562, 0.0, 0x1.f9d8a437ea60fp-696, 0.0, 0x1.0cd59a882cea1p-699,
     0.0, 0x1.87e94a6607088p-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35e20f2f4711cp-294, 0x1.7edb922bbc164p-334, 0x1.4dcf6f9645295p-1015,
     0x1.47f6c933b8415p-755, 0.0, 0.0, 0.0, 0x1.b392417fabadep-441,
     0x1.1340bd03af79dp-46, 0.0, 0.0, 0x1.36f35e1c1f89ap-148, 0.0,
     0x1.f7989140facf1p-247, 0x1.deb8067fafdf1p-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c6942b408b72p-859, 0x1.cf2472fc1f666p-710, 0.0, 0x1.f084dab5ac2f5p-919,
     0x1.1d493295bca9ap-544, 0x1.8b85a004ff163p-259, 0x1.9046c94733f61p-464,
     0x1.b3c2a1bc68b4cp-138, 0.0, 0.0, 0.0, 0.0, 0x1.332c670d7ece3p-316,
     0x1.18e67ab1af97ap-385, 0.0, 0.0, 0.0, 0x1.82866f447ded5p-1006, 0.0, 0.0,
     0x1.3b80e72cfbc52p-223, 0.0, 0x1.5b65a42f43d88p-378, 0.0, 0x1.ed9d5dcbbca69p-583,
     0.0, 0x1.a281c98f906c5p-409, 0.0, 0.0, 0.0, 0x1.d058a6fc1dd1ep-882, 0.0, 0.0,
     0.0, 0x1.40a66c0810647p-594, 0.0, 0.0, 0.0, 0.0, 0x1.31d889a47f04p-190,
     0x1.a5acf901068bap-844, 0.0, 0x1.26197c823be22p-217, 0.0, 0.0, 0.0,
     0x1.b0826348d976fp-747, 0x1.fc0e7744e173dp-459, 0x1.57a99a08c7335p-618, 0.0,
     0x1.0b5fe0853715dp-853, 0x1.1f06ff196e8eap-170, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88f6407530819p-607, 0.0, 0x1.96e78938ef4b2p-835, 0.0, 0x1.1e6e2428ae5bdp-753,
     0.0, 0.0, 0x1.a2ef75b7e1949p-788, 0.0, 0.0, 0x1.b275f19618d19p-175,
     0x1.a180f8f0b41c6p-442, 0.0, 0.0, 0.0, 0x1.37acf861d3b6bp-800,
     0x1.d7d5fa9946452p-949, 0.0, 0x1.4c26d18b209d5p-503, 0x1.5d82d334f57ep-690, 0.0,
     0x1.377a02e3ec688p-340, 0x1.32bea96f0cf87p-128, 0x1.cdb61907acc2p-232, 0.0, 0.0,
     0x1.3f7c48aa67223p-733, 0.0, 0x1.34fb808f87121p-715, 0x1.92fb3ebd9a1acp-136,
     0x1.bbb7a3de056b8p-505, 0.0, 0.0, 0.0, 0.0, 0x1.b24ca5145eb9p-238,
     0x1.2500582fb21c6p-63, 0x1.4c86c7f718714p-324, 0x1.6904b88718973p-996, 0.0,
     0x1.18a068889cb1ap-271, 0x1.fde70a42768e1p-607, 0.0, 0.0, 0x1.00e94c6a5f5adp-750,
     0x1.74f45fc3974e1p-641, 0x1.1f98b1bc952ddp-150, 0.0, 0.0, 0x1.ea50e36ee46acp-639,
     0.0, 0.0, 0.0, 0x1.8e875d3162921p-975, 0.0, 0.0, 0x1.ccb54110bc23bp-298,
     0x1.63b5f536f6bdfp-1017, 0x1.9d77557bf49bdp-907, 0.0, 0.0, 0.0,
     0x1.85310397b65c9p-198, 0.0, 0x1.1c4002f036e3dp-771, 0x1.9be6f428c587p-305, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5703622b8b7c7p-952, 0x1.c6b18f8cbef07p-288, 0.0,
     0x1.e795044b899c9p-862, 0x1.2414da6b54926p-110, 0.0, 0.0, 0x1.e2ef7cdd75e51p-68,
     0x1.221c4758f1487p-418, 0x1.8faf6cd7e89fbp-292, 0.0, 0.0, 0.0,
     0x1.8421f349a726cp-593, 0.0, 0x1.612dd215064e8p-73, 0x1.0f426d33741aap-865, 0.0,
     0x1.ca541692a17dp-456, 0x1.6410701906d15p-329, 0x1.1cf60982465c9p-146, 0.0,
     0x1.0b6cc8490956ep-346, 0x1.9dd03dd47122ep-164, 0x1.6669f85658b4bp-134,
     0x1.ec0a64b2b249ap-218, 0.0, 0x1.9e93e2e58e5bbp-422, 0.0, 0x1.91140bcb50bc1p-254,
     0x1.8a66a51da9281p-902, 0.0, 0.0, 0x1.da55c69089aa5p-209, 0x1.218c7909f7f35p-393,
     0x1.01c6267b8d688p-392, 0x1.f0f4d84ea76afp-511, 0.0, 0x1.4a451e2cb11efp-951, 0.0,
     0.0, 0x1.72dc7d0e34836p-685, 0x1.3d791dd59313ap-685, 0x1.7c2ab33f36362p-376,
     0x1.cbdc66315c789p-420, 0x1.085e2e5ea48cdp-820, 0.0, 0x1.d8f25793a4cffp-298, 0.0,
     0x1.4fbad20ede149p-439, 0.0, 0x1.ca3c4e51280afp-412, 0.0, 0.0,
     0x1.4039f49d5fc23p-17, 0x1.1df95dfa75346p-451, 0.0, 0x1.c82fc352c946bp-950, 0.0,
     0x1.15624ecb4436cp-2, 0x1.aa99db9979123p-64, 0x1.c2c09df5bdf9p-958,
     0x1.472ba807ab1d4p-822, 0.0, 0x1.5af2670f7020cp-831, 0x1.2e23958493c7ep-859, 0.0,
     0x1.59da270fa2a05p-629, 0.0, 0x1.299eb762b0f63p-65, 0x1.9a7646477d052p-705, 0.0,
     0.0, 0.0, 0x1.7292eef48675ap-1019, 0.0, 0x1.170e94c5641bap-668, 0.0, 0.0,
     0x1.dcc90daf97fa5p-13, 0x1.0f9bcc6054d1p-868, 0.0, 0x1.0b46d9896cccfp-242, 0.0,
     0.0, 0.0, 0.0, 0x1.12d4833c3480fp-136, 0x1.0917e5519cdb3p-567, 0.0, 0.0,
     0x1.b253e5ac72482p-60, 0x1.03df1a499898bp-407, 0x1.a8ef85f9da33cp-38, 0.0, 0.0,
     0.0, 0x1.34a19d0b77ebep-53, 0.0, 0x1.38a400b5c3074p-341, 0x1.cfc9753af9823p-761,
     0.0, 0x1.5df09accdc39ep-224, 0x1.9e8d93e2a8dbp-506, 0x1.5b1cc4bc144d4p-108, 0.0,
     0x1.3f376c237cc26p-421, 0x1.20962df30836cp-463, 0x1.4fd73439622d5p-138, 0.0,
     0x1.4cd520dfb3ee8p-447, 0.0, 0.0, 0x1.8e903625d299bp-255, 0.0, 0.0, 0.0,
     0x1.cfb830bbb0d25p-674, 0.0, 0.0, 0.0, 0x1.dac8525023fb1p-124, 0.0,
     0x1.76acf0ded7f32p-54, 0x1.12c3340a8f94ap-1008, 0x1.342f563c9290fp-767, 0.0,
     0x1.44ba721a7f67ep-653, 0.0, 0.0, 0x1.e810bab909988p-487,
     0x1.d8e0312bde019p-1005, 0x1.91a79f3dc4ca5p-769, 0.0, 0.0,
     0x1.227a1ecf5e26cp-650, 0.0, 0x1.64340c625b771p-297, 0.0, 0.0,
     0x1.ca9b52fe08967p-666, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1dbc476a9f35p-403, 0.0, 0.0,
     0.0, 0x1.d2da748e7d325p-240, 0.0, 0.0, 0x1.a8d10901ee2ep-259, 0.0,
     0x1.3ce4748321868p-469, 0.0, 0.0, 0x1.cb279ce1f1156p-737, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4e8b6631d30efp-422, 0.0, 0.0, 0x1.d77fc7c7ad993p-723, 0.0, 0.0,
     0x1.fbb21c7d780cep-55, 0x1.e29c4bc3a1e0cp-493, 0.0, 0x1.07c2f7d736e39p-991,
     0x1.bcfa862d49e12p-832, 0.0, 0.0, 0x1.d79aa5a888731p-529, 0.0, 0.0, 0.0,
     0x1.5ed71817bdf4ap-74, 0x1.9d558a7171f15p-541, 0.0, 0x1.4564a7570b5cbp-232,
     0x1.11cc60d8419ddp-399, 0x1.144143de942ecp-117, 0x1.d2d8d2206f7d7p-445, 0.0, 0.0,
     0x1.b5bde40763de6p-786, 0.0, 0x1.6f366072f95f4p-715, 0x1.a3a172eb84c1ap-650,
     0x1.700c474af2bep-762, 0.0, 0.0, 0x1.5efffa414d1e5p-960, 0x1.6e9940ff0d998p-99,
     0x1.25dbabc9cb0fdp-887, 0.0, 0x1.a1bda29c0ea81p-995, 0.0, 0.0,
     0x1.be84e19d78ab4p-871, 0x1.868adbbc373b6p-811, 0.0, 0.0, 0x1.62c3bb1ab3851p-401,
     0x1.532a76ea3521cp-50, 0.0, 0.0, 0.0, 0.0, 0x1.bb12b939fce7fp-990, 0.0, 0.0,
     0x1.54aa94cf5db53p-1006, 0.0, 0x1.ef3354ac7602dp-491, 0.0,
     0x1.05a3a96363a4cp-516, 0.0, 0x1.b489a0ed4b2fdp-838, 0.0, 0x1.16d993bbcac0fp-354,
     0x1.9351946fea2c9p-536, 0.0, 0.0
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
            tmp1 = Sleef_fabsd1_purecfma(tmp0);
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
    printf("Sleef_fabsd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_fabsd1_purecfma bench acc %la\n", global_bench_acc);
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
