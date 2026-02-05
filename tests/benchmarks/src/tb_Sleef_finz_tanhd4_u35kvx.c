/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd4_u35kvx.c --function \
 *     Sleef_finz_tanhd4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.50477646791b2p-63, 0x1.6ff85fbd68a9cp-456, 0x1.828988972c0a2p-69, 0.0, 0.0,
     0.0, 0.0, 0x1.0039ead71f73fp-78, 0.0, 0x1.17b590ef18045p-186, 0.0,
     0x1.ef0f75abff339p-164, 0x1.bc00f34697cep-343, 0x1.342caeb7b2955p-241, 0.0,
     0x1.6f4da4400c787p-273, 0.0, 0x1.b35fc9f76f092p-271, 0x1.93bf9fb5ea17p-164, 0.0,
     0.0, 0.0, 0x1.92512fb75f45cp-963, 0x1.c2f7b0f486e8p-129, 0x1.e56c5de86aa42p-719,
     0.0, 0.0, 0x1.987379f0907b1p-738, 0x1.2833921483f0fp-408, 0x1.8cfda341f5c4ap-11,
     0x1.bb3e575d878bbp-815, 0x1.5d074902eb78ap-769, 0.0, 0.0, 0x1.ad6afd8a5dc98p-906,
     0x1.9f65a7ef92f16p-135, 0x1.ec5fa7165b671p-436, 0x1.2af8603363b21p-72,
     0x1.e6194619f43bap-270, 0x1.4b5427f516c58p-434, 0x1.9e2af0e2d6441p-873,
     0x1.472795dac0bcdp-149, 0.0, 0.0, 0.0, 0.0, 0x1.35d4fd82d94dap-713,
     0x1.e10c081107616p-313, 0x1.36f316140cbc2p-749, 0.0, 0x1.c7a9c6a7eafc3p-553, 0.0,
     0.0, 0.0, 0x1.6d2e90a3f8a19p-660, 0x1.2ecb9f51f6215p-1013, 0.0, 0.0,
     0x1.ce01df63cc605p-496, 0x1.026a54f772cdbp-36, 0x1.ba227cf310441p-384,
     0x1.226d522b528fap-33, 0x1.5d20af978e4bdp-242, 0.0, 0.0, 0.0,
     0x1.8dc4430dea046p-10, 0.0, 0.0, 0x1.bfde4477af551p-685, 0x1.f1291b3a55da7p-29,
     0.0, 0.0, 0x1.466a309aa3959p-162, 0.0, 0x1.4f17fc0908522p-204, 0.0, 0.0, 0.0,
     0x1.f2e9a0721c03fp-692, 0x1.8d540f2a504dp-739, 0x1.524b0550cd258p-89, 0.0, 0.0,
     0.0, 0x1.311998115e25p-856, 0x1.1541fe4194a37p-523, 0.0, 0x1.8793e3fada6fcp-593,
     0x1.44bcc15615d32p-930, 0.0, 0x1.6730c2dcf41eap-206, 0.0, 0.0, 0.0, 0.0,
     0x1.74cb35db18cf8p-325, 0.0, 0x1.7ac1c66ec8a83p-572, 0x1.94d72ec47db3fp-501,
     0x1.e882ed759875p-66, 0.0, 0.0, 0.0, 0.0, 0x1.c9626668b5b2fp-519, 0.0, 0.0,
     0x1.eebbb6d7bb009p-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0508eab33b3e9p-63,
     0x1.464737f305b2cp-906, 0x1.0cba618a0c1f3p-1017, 0.0, 0.0, 0.0,
     0x1.5ea1ee4e09da2p-554, 0x1.45a6c0b352b7fp-621, 0.0, 0.0, 0.0, 0.0,
     0x1.3b9bed31ae158p-775, 0x1.5bcc8d6da6ab6p-710, 0.0, 0.0, 0x1.2f393faed1426p-932,
     0x1.c6fb4619658aep-560, 0x1.5131bc4a88c56p-818, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d295dcd6aa97fp-372, 0x1.0bcd56d1498a8p-499, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbc982ad6e60fp-681, 0x1.c959074260f43p-156, 0x1.54b05fea321fdp-526, 0.0, 0.0,
     0.0, 0.0, 0x1.c1fdec76278bfp-170, 0.0, 0x1.5d06cae7f60fp-495,
     0x1.46f3723e69f4p-702, 0x1.b9a5e379a07f8p-717, 0x1.bfc94d0781589p-852, 0.0,
     0x1.7e44437d9833dp-395, 0x1.5bb328ca04a01p-660, 0x1.224a9e89ae8a4p-17,
     0x1.5817c931fe647p-143, 0.0, 0x1.537800da75fe5p-852, 0.0, 0x1.fa534d32fd50dp-769,
     0.0, 0x1.f0fddafffacb3p-687, 0x1.f8355890d958ap-122, 0.0, 0.0, 0.0,
     0x1.0fc48092ea14bp-290, 0x1.44aae95ec0d07p-576, 0x1.774efd4e97084p-154,
     0x1.c152ee4c38ea9p-551, 0.0, 0x1.fc222e39ef1e8p-918, 0x1.7a11a7a33698ap-401, 0.0,
     0.0, 0.0, 0.0, 0x1.cf871dea0d8edp-655, 0x1.d5f4315e0c82ap-266, 0.0, 0.0, 0.0,
     0x1.a5ab24e853a4cp-253, 0.0, 0.0, 0.0, 0.0, 0x1.2155720c9b6cp-785,
     0x1.f73d88f465eb9p-595, 0x1.b35556ae1dee4p-917, 0x1.f08fc8cecd5d2p-519, 0.0,
     0x1.32c017cd438b5p-153, 0x1.29bc0102d4c93p-937, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.30bdd52fbb893p-729, 0x1.dc6947131857fp-185, 0.0, 0x1.e0c3f6fac5394p-586,
     0x1.f5a4260cf455fp-753, 0.0, 0x1.ac3708bf07516p-217, 0x1.49859afc5a8edp-936,
     0x1.9bdbb4420d9c5p-378, 0.0, 0x1.d459703e1466bp-771, 0.0, 0.0,
     0x1.02458b43644a7p-176, 0.0, 0x1.cc4f3f2f20be7p-128, 0.0, 0.0, 0.0, 0.0,
     0x1.790778ef04363p-696, 0.0, 0x1.83648eaa7fb76p-561, 0x1.c0095a68eda32p-220,
     0x1.25af5878e0194p-428, 0.0, 0x1.b949a615081bap-67, 0x1.5883a2df68809p-546,
     0x1.ff9d47e060b0cp-713, 0.0, 0.0, 0x1.1655632fe78a2p-530, 0x1.51efddf65f3acp-631,
     0x1.3c8f613098716p-567, 0.0, 0.0, 0x1.0ac24751ca765p-655, 0x1.21acf2dbd1p-85,
     0.0, 0x1.595f9a720c2eep-262, 0x1.67cae4410d726p-274, 0x1.16c970b62deeep-847,
     0x1.95dae7f2e5955p-985, 0.0, 0x1.05c47602daafp-61, 0x1.36855ea377bbcp-62, 0.0,
     0.0, 0.0, 0.0, 0x1.add95c862194ap-268, 0x1.5d4145d76a8d8p-913, 0.0,
     0x1.cf70adaadf1d7p-430, 0x1.192426153b151p-502, 0x1.f6646c23e890dp-402, 0.0, 0.0,
     0x1.0c73a626a79ap-27, 0.0, 0x1.fb04f35c5ace5p-458, 0x1.4a7cf40f702dep-520, 0.0,
     0x1.96e0edb2e68b3p-361, 0.0, 0x1.4c2ac0063fb24p-480, 0.0, 0.0,
     0x1.ccd237f845aabp-690, 0x1.1a53a02149bbfp-72, 0.0, 0x1.3f6c1caa30e55p-707, 0.0,
     0x1.62c50f3fefa8cp-760, 0.0, 0.0, 0x1.4946873b10c5ap-136, 0.0,
     0x1.13a221a293482p-739, 0x1.8e1dbf4bf26d5p-398, 0x1.9da8c9c9e674dp-147, 0.0, 0.0,
     0x1.d05aa557a3318p-927, 0x1.11f15a7d3d80cp-493, 0x1.32270e9aea32cp-89,
     0x1.ffc3190c7a922p-601, 0.0, 0x1.11325fe2d77ccp-419, 0x1.b4d477492ba6p-304, 0.0,
     0x1.6845a71412fffp-531, 0.0, 0x1.f2be2e624d9b9p-849, 0.0, 0.0,
     0x1.1e659243b92d9p-511, 0x1.44d2c31b3e5ebp-951, 0.0, 0x1.af3b8a8f01669p-809,
     0x1.5487ff75e51cp-859, 0.0, 0x1.6d10c4312a6fdp-786, 0.0, 0x1.0b91d5a399196p-98,
     0.0, 0.0, 0x1.3552c565b9721p-690, 0x1.ce6d771b3ccd2p-189, 0.0,
     0x1.46e3208747fd6p-90, 0x1.7620e52b69942p-509, 0.0, 0x1.090633ec7283p-622,
     0x1.a5254f57aad4bp-543, 0.0, 0x1.9455a8add7e5dp-403, 0.0, 0.0, 0.0,
     0x1.597a1cc59fcc7p-841, 0.0, 0x1.a36f9dcd49239p-742, 0x1.ab5974b306488p-313, 0.0,
     0x1.cfd81dce24288p-748, 0.0, 0.0, 0x1.e620cb0a1e2c6p-953, 0x1.e0e6dc606f81p-21,
     0.0, 0.0, 0.0, 0.0, 0x1.64be227309ef8p-531, 0x1.e47112ebd78fep-941, 0.0,
     0x1.766683a2ddb7ap-110, 0x1.8568141964132p-963, 0.0, 0x1.6a68200128ea5p-290, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b52471981d796p-379, 0x1.42129f6a61c2ep-63, 0.0, 0.0, 0.0,
     0x1.c1492718fbe33p-291, 0x1.99cb93cb420b9p-92, 0x1.9a1a246d375d6p-561,
     0x1.4d89c3e46ea77p-431, 0x1.172174be1625ep-428, 0x1.b814a649a5404p-772,
     0x1.ef02b1a0e4283p-249, 0x1.739ce7952e318p-171, 0.0, 0x1.0f1515e3ef69p-399,
     0x1.7aecc577b52bap-301, 0x1.2350249e8dbe1p-851, 0.0, 0.0, 0x1.bbb7c257a830bp-958,
     0x1.c839af9877b28p-970, 0.0, 0x1.8affa5295ec42p-524, 0.0, 0.0, 0.0,
     0x1.c01f9cf9db796p-627, 0x1.703e1840ef3b6p-310, 0.0, 0x1.20bc9c92263b6p-726, 0.0,
     0.0, 0.0, 0x1.889dd6863c6bap-330, 0x1.1f8b1a197094fp-320, 0.0, 0.0,
     0x1.c4780a8daca6p-341, 0.0, 0.0, 0.0, 0.0, 0x1.321b6398c0abfp-938,
     0x1.62fd42f65497p-947, 0x1.523b4e809d8ecp-773, 0x1.7e5893d1b992bp-358,
     0x1.f397e6bbb68f4p-580, 0.0, 0.0, 0x1.486ac0690364dp-397, 0x1.3466c816f070fp-964,
     0x1.45ac399654cc7p-92, 0.0, 0.0, 0x1.e4c3ba48ff748p-204, 0x1.932f0cb480a6ap-995,
     0.0, 0x1.be8c49c4bd84cp-186, 0x1.36486fe591f43p-767, 0x1.ff330daf78931p-972, 0.0,
     0x1.4e53b90a23aa5p-149, 0x1.b03a81296fd03p-26, 0.0, 0.0, 0.0,
     0x1.34a603bf1bbe9p-744, 0x1.7389705a1ebc2p-364, 0x1.535c5fe3783f8p-694,
     0x1.394c0602fc65fp-816, 0.0, 0.0, 0x1.05b51b3423243p-441, 0x1.4f8bb88b305d1p-124,
     0x1.0490c5b7f0d27p-515, 0.0, 0x1.7728c4259c271p-726, 0.0, 0.0, 0.0,
     0x1.ee0334b40e32ep-911, 0x1.c648cd4f1623dp-642, 0.0, 0x1.46993a7fdcfcbp-342,
     0x1.659ceeff0227ap-658, 0x1.b22b364eed93p-338, 0x1.af21de8639079p-247, 0.0, 0.0,
     0.0, 0x1.b9cde2dc937fbp-728, 0.0, 0.0, 0x1.1f2ac3b3538fp-557,
     0x1.3204c91f9d85dp-678, 0x1.c169e3dc7d8fep-377, 0.0, 0.0, 0x1.98b1ba84d2047p-941,
     0x1.6e04714ca36a5p-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6bf2aea55a195p-990, 0.0,
     0x1.eb9a2542f9aefp-870, 0.0, 0.0, 0x1.90e4c6fb6fe64p-168, 0x1.240e94d25526p-455,
     0.0, 0.0, 0.0, 0x1.b081df5851853p-463, 0.0, 0.0, 0x1.ad52ac6dc1605p-627,
     0x1.b204e422c9b5fp-806, 0.0, 0x1.133048298596p-973, 0.0, 0.0, 0.0,
     0x1.81214753691eap-103, 0x1.c18cc14dc5111p-438, 0x1.fce9d20c9b3c9p-938,
     0x1.d9b2a078fb7fap-772, 0x1.0adc1ba56b921p-44, 0x1.6e6c50e18d0acp-221, 0.0, 0.0,
     0x1.8778281649a57p-706, 0.0, 0.0, 0x1.a0f45c7ca55cap-389, 0.0,
     0x1.8bde9d382fed6p-72, 0x1.af22674ff4e65p-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1b4ddf52b0fbp-298, 0x1.80ba181e6663bp-588, 0x1.bdc6bfb0edd3p-836, 0.0, 0.0,
     0.0, 0x1.da7de9891f306p-34, 0.0, 0x1.e2ca606fe65e9p-443, 0.0, 0.0,
     0x1.474b775503a62p-624, 0x1.e5f4958299beep-880, 0x1.d6b5efce4620ep-51, 0.0, 0.0,
     0x1.cb6aee59a2b5ap-406, 0.0, 0.0, 0x1.1ef84bfaacb51p-26, 0x1.edb79a6b9eb13p-842,
     0.0, 0x1.04daea9ca8f4fp-110, 0.0, 0.0, 0x1.50b9d6a2fd5d4p-27,
     0x1.5cebcdce6fe31p-792, 0x1.99de80cbaa3b4p-24, 0x1.4ea04752e4137p-368, 0.0, 0.0,
     0x1.becd2531e650cp-853, 0.0, 0.0, 0x1.4e7050b2d8c55p-1015, 0.0, 0.0, 0.0,
     0x1.44d5b2326a40fp-632, 0x1.ac91f6d622664p-821, 0x1.286cff9a4770dp-4,
     0x1.afb9d23a58a66p-676, 0x1.b65844422e412p-263, 0.0, 0x1.82b0c9256646dp-40, 0.0,
     0x1.e5771bdbf3683p-924, 0.0, 0.0, 0x1.0a339cf0f59d4p-215, 0x1.7dcd3817bdd87p-431,
     0.0, 0x1.8858b8ab1e8c6p-184, 0x1.475cbd0bfc519p-729, 0.0, 0x1.f5d2e21cad89p-64,
     0.0, 0.0, 0x1.8824983690651p-3, 0.0, 0x1.d25a08b75389cp-835, 0.0, 0.0,
     0x1.ee9fcba5e47bfp-668, 0x1.5fa26c372fc6fp-147, 0x1.fe69cab990377p-596,
     0x1.44a0fd6abe5cap-1010, 0.0, 0.0, 0x1.17ec21c8342ebp-44, 0x1.5ae1318eb8d6ap-90,
     0x1.b01ad1a37a917p-42, 0.0, 0x1.756273f59559ap-522, 0x1.eeb587cf218b5p-488, 0.0,
     0x1.6016716d714d6p-27, 0.0, 0.0, 0x1.57d28b8cccf4fp-428, 0.0, 0.0,
     0x1.79ec56b66c619p-50, 0x1.31f8dfa206981p-673, 0x1.a55cfaf763ae1p-199, 0.0,
     0x1.cd0fa6e8a7e8ep-149, 0.0, 0x1.7c80ba81195a7p-57, 0.0, 0.0, 0.0,
     0x1.ed02bd4b8c8afp-524, 0x1.707b1003d1263p-953, 0x1.04596944a623ap-452,
     0x1.ec0832a183214p-765, 0.0, 0x1.fa319a7371c12p-480, 0.0, 0x1.711056cd19177p-837,
     0.0, 0.0, 0x1.8a39b21babf45p-429, 0.0, 0x1.0e297a0c2fc11p-247,
     0x1.65005f8d08fe7p-515, 0x1.b11e3e60545fep-457, 0x1.5a1fecc632ap-896, 0.0,
     0x1.487f5ba8f8637p-914, 0x1.62f7f102fc7e5p-844, 0x1.f7f7488d891eap-407, 0.0, 0.0,
     0.0, 0.0, 0x1.6f9664794e54ep-968, 0x1.b28447bbbafd8p-168, 0.0,
     0x1.a4a355ced40ebp-622, 0x1.9fccd4a14672bp-735, 0x1.e25421b23ed66p-649, 0.0,
     0x1.a3e6bd8e6ffadp-544, 0x1.6595a60a2d8cp-393, 0.0, 0.0, 0x1.bf5c7f2171136p-912,
     0.0, 0.0, 0x1.42f6bcbeadde9p-547, 0x1.4904eec058751p-437, 0x1.3ed975ed9a457p-677,
     0.0, 0x1.bb5b71f8da74dp-336, 0.0, 0.0, 0x1.c22661100dde6p-307,
     0x1.7f2ea39028342p-207, 0x1.53e1fd611a111p-125, 0.0, 0.0, 0x1.b63377da4b956p-404,
     0.0, 0.0, 0x1.ddf366172e2bp-637, 0.0, 0x1.27fda5ef66d7ap-525,
     0x1.f6aef747b2e04p-697, 0.0, 0x1.93cc71fd8ad4p-706, 0x1.2f51b870fcb03p-91, 0.0,
     0.0, 0x1.e064e589895f8p-615, 0x1.829ae46839965p-929, 0.0, 0.0,
     0x1.942af291e2348p-155, 0.0, 0x1.34317d7dfe083p-807, 0.0, 0.0,
     0x1.8a9776a0234a3p-214, 0.0, 0x1.b31282e584a7fp-277, 0x1.11c0a59840c09p-498,
     0x1.b1086b81d0b06p-550, 0.0, 0.0, 0x1.f4362c49b284p-144, 0x1.91bd9ff9aca1dp-174,
     0.0, 0.0, 0x1.745429295652dp-571, 0x1.0f8a4b2fabd8ap-45, 0.0,
     0x1.2b29e79b3746ap-551, 0x1.f675175838b31p-887, 0.0, 0x1.efc7ba73b6befp-998,
     0x1.d05a626dff80bp-97, 0.0, 0x1.7b58a5a5a83f7p-514, 0x1.b8b11233d475fp-847, 0.0,
     0x1.8340778210b2ap-39, 0x1.e232082c4dadep-717, 0.0, 0.0, 0.0,
     0x1.957fa55826263p-926, 0.0, 0.0, 0x1.6e69586928263p-606, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.449b10dd71f84p-1009, 0.0, 0x1.44195552e9ed1p-547,
     0x1.dcd9998e2b23ap-376, 0.0, 0.0, 0x1.b5fcf1b6066dbp-533, 0x1.c1b91b228b416p-964,
     0.0, 0x1.5a1182ef34ff9p-784, 0.0, 0.0, 0x1.e5db2da2a83e1p-258, 0.0, 0.0,
     0x1.11651101cd3c3p-50, 0x1.267269991f849p-802, 0.0, 0.0, 0.0,
     0x1.21342b046b32ap-565, 0x1.1a9c7f528fbc1p-668, 0x1.c750dcef2169bp-236, 0.0,
     0x1.aaa22f928f42fp-355, 0x1.3a966078a9054p-565, 0.0, 0x1.32d6b47166f5bp-899,
     0x1.178c42e4a86dfp-727, 0.0, 0.0, 0.0, 0.0, 0x1.fdb6fdea35fc6p-753, 0.0,
     0x1.180b8ddcc309p-916, 0x1.d450024345eaap-527, 0.0, 0x1.374e5591d901ap-247, 0.0,
     0.0, 0x1.8427d9c569ad5p-510, 0.0, 0x1.25609be553227p-987, 0x1.d175f3c1c4a39p-458,
     0x1.109527f2b0c8cp-539, 0.0, 0.0, 0x1.2efe24d1d56dp-292, 0x1.7b20768fbee2fp-805,
     0.0, 0.0, 0x1.30e5d43c7f098p-747, 0.0, 0x1.eebd780f5628ep-876,
     0x1.28d4079fc2c6fp-791, 0.0, 0.0, 0.0, 0x1.9389bcd1c787dp-495,
     0x1.4562722af6a5p-340, 0.0, 0x1.e32376ee3cb2p-975, 0.0, 0.0,
     0x1.e67556d61ab2ap-596, 0x1.a3414d1293659p-558, 0x1.aa89b920da1d7p-43,
     0x1.9641094436148p-584, 0.0, 0x1.192f4bdb99b7fp-513, 0x1.4cdd9add9b6ecp-369,
     0x1.60ec57f5e43dep-484, 0.0, 0x1.3a187ca8ab49ap-993, 0x1p0,
     0x1.81c46d55f4a5ep-531, 0.0, 0x1.9739c4728e453p-711, 0x1.c2792261557d3p-560,
     0x1.bf9d488de581bp-392, 0.0, 0.0, 0x1.016d5ac3bea31p-171, 0x1.bd9a8df5115cap-380,
     0.0, 0x1.c37692932bf26p-25, 0.0, 0x1.8b5e0c3214b13p-802, 0x1.c48a469de5d39p-507,
     0x1.2d24b61f3b494p-76, 0x1.313722b2ddea3p-354, 0.0, 0x1.5f19e889edf38p-698,
     0x1.423e2f5f54955p-233, 0.0, 0x1.4432732f208bdp-50, 0.0, 0.0,
     0x1.3c3355b3d6c71p-643, 0x1.2391a4b5f0007p-445, 0x1.96ac58d08b86cp-20, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a92e505b4cd5fp-888, 0.0, 0x1.f0476190cb47p-606, 0.0,
     0x1.ac21e1d0e1acbp-964, 0.0, 0.0, 0x1.bd7db66ac98dbp-314, 0x1.0f846a32ac964p-828,
     0x1.6e6c52a5606f5p-647, 0x1.2d30b4b771129p-584, 0x1.33922bbd78b8fp-876, 0.0,
     0x1.e1896b36d8e25p-1006, 0.0, 0.0, 0.0, 0x1.bb9d71da08ebdp-62,
     0x1.4652ce854f331p-339, 0x1.076486811bbap-188, 0x1.b084db051f202p-823,
     0x1.ae1e5b3f4be43p-85, 0x1.640be4726db66p-363, 0x1.f24ba062b0139p-785, 0.0, 0.0,
     0.0, 0x1.09a54393dd773p-594, 0.0, 0.0, 0x1.5e76895d5a3c6p-907, 0.0,
     0x1.f1eb5943ba27ap-184, 0.0, 0x1.6d97b6fec4d2dp-225, 0x1.7677c9e228a08p-523, 0.0,
     0.0, 0x1.7bd69c82d8945p-946, 0x1.30d333d4d95c4p-260, 0.0, 0x1.9908e1eb7a595p-602,
     0.0, 0.0, 0x1.bbbd3ed0954d2p-371, 0x1.eccf97cdf7f6cp-378, 0x1.f3516ae9570d2p-601,
     0x1.64e2f6c62dae7p-868, 0x1.f98551837627dp-604, 0.0, 0x1.5ddfad036a303p-630,
     0x1.77967f025103ap-784, 0.0, 0.0, 0x1.f68b9f3dbe6e6p-379, 0.0, 0.0, 0.0,
     0x1.ad5b2fb54c42bp-940, 0.0, 0.0, 0x1.cd00cb60af68ep-309, 0.0,
     0x1.b66dd13b676a7p-637, 0x1.22b9373acbfebp-299, 0.0, 0.0, 0.0,
     0x1.63345afc2c688p-713, 0.0, 0.0, 0.0, 0x1.e93e883b5c6eep-758,
     0x1.25e19b248cdc1p-1004, 0x1.6d99934c07ae1p-331, 0.0, 0.0,
     0x1.016b3fef39dddp-820, 0x1.f7aa75691cff9p-637, 0.0, 0x1.6709b7bf8f539p-123,
     0x1.9ea06921de2a8p-717, 0x1.558dde9b7bfa8p-679, 0.0, 0.0, 0.0,
     0x1.6fcbfaa1ee9d3p-277, 0x1.ddc27c488b4ffp-412, 0x1.25de5ce7548e6p-995, 0.0,
     0x1.e8f4be5571f21p-160, 0x1.88ba0e7799014p-328, 0x1.fa02b02165afap-514,
     0x1.0133f79aeacc1p-588, 0x1.eac884b66bc8cp-895, 0.0, 0.0, 0x1.e07b7475c8ba6p-940,
     0.0, 0x1.a4bf529823499p-505, 0x1.0613b4e004adp-796, 0x1.906982c3303adp-440, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a96631871c78ap-864, 0x1.6075640877a0bp-990,
     0x1.a8b95ad2b56a3p-406, 0x1.3874c7dad79fep-131, 0.0, 0.0, 0x1.2df8f3f64e239p-674,
     0.0, 0x1.afb8c40ce4a87p-71, 0x1.143f93b3f35b3p-410, 0x1.87e77f4907511p-305,
     0x1.60fad419786aep-628, 0x1.a851623cfef8ep-942, 0x1.eea74c0d6ee75p-150, 0.0, 0.0,
     0x1.598866331e08bp-712, 0.0, 0x1.e02eea033c772p-597, 0.0, 0x1.1162c8cc82b11p-533,
     0.0, 0x1.646c7eb7bd91p-516, 0.0, 0x1.6aadc3c3d249p-171, 0x1.0e2b3d6711382p-78,
     0.0, 0x1.750735c5486c7p-687, 0.0, 0x1.46f5734575a2ep-799, 0.0,
     0x1.409e2f7c6626bp-899, 0x1.5e59166c21232p-463, 0x1.26a6e3884f9d3p-283,
     0x1.eeffcae75d1acp-664, 0x1.0d3901c98cb23p-394, 0x1.b6b1862d7ec01p-402,
     0x1.87b8a0f4a9c09p-998, 0.0, 0x1.e856f3c517abap-273, 0x1.a090432b79d1p-138, 0.0,
     0x1.0609ba67e93dfp-871, 0.0, 0.0, 0.0, 0x1.8e8879ae52505p-738,
     0x1.529f6957d0b6bp-868, 0.0, 0.0, 0.0, 0x1.c3ee634f514cep-753, 0.0, 0.0,
     0x1.41da5f8a93113p-342, 0x1.aec9f8e484675p-943, 0.0, 0.0, 0x1.39bb6f1a9988fp-873,
     0.0, 0.0, 0x1.44723993cf2aep-608, 0.0, 0x1.6d334f80b9798p-388, 0.0, 0.0,
     0x1.85f70f82e0934p-490, 0.0, 0x1.c122c04465f9cp-20, 0x1.7a2dea35a75f8p-1017, 0.0,
     0.0, 0.0, 0x1.3bf31325a2f97p-535, 0.0, 0.0, 0.0, 0.0, 0x1.642393adbf659p-874,
     0.0, 0x1.f478ccf898798p-681, 0x1.9660c0ab33adcp-887, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_tanhd4_u35kvx(tmp0);
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
    printf("Sleef_finz_tanhd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tanhd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
