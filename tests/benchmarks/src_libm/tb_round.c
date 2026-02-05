/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_round.c --function round --headers math.h,ml_support_lib.h \
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
     0.0, 0x1.ed8fc5f490fdp-334, 0x1.2de39115b9c3ap-303, 0x1.613c362af36f9p-252, 0.0,
     0x1.b751727d0222ep-347, 0x1.98244f4964509p-438, 0.0, 0.0, 0x1.cc6f166528a2dp-904,
     0x1.5f9f89e310848p-79, 0x1.97f26ece00e2ap-571, 0x1.3e19b8d81804p-764,
     0x1.afd011f2993b9p-257, 0.0, 0.0, 0.0, 0x1.e40fda6c54d68p-342,
     0x1.e9c9e4c0e7b7fp-353, 0x1.878a05132efeep-796, 0x1.e2c1dd669605ep-725, 0.0,
     0x1.1ae2cc5585fcbp-104, 0x1.32e578778c5f1p-823, 0x1.107ff1e53c016p-142,
     0x1.0718e0fa5ff04p-562, 0x1.c9a66ae915859p-315, 0x1.91057115d5539p-198, 0.0,
     0x1.9a1463e46a3dp-713, 0.0, 0x1.11c2cc21aaad4p-364, 0.0, 0.0, 0.0,
     0x1.8b196d0021c8bp-739, 0.0, 0x1.a1fd50b1b8583p-452, 0x1.aeb26e4f0b46cp-892, 0.0,
     0.0, 0x1.713f457b69b14p-968, 0.0, 0.0, 0x1.52a15dba33fdcp-663,
     0x1.1e622a6b04f2p-660, 0x1.76d00fbc29799p-376, 0x1.881844d8f08e5p-107, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ee7ff656af232p-139, 0.0, 0.0, 0x1.c3ee677a17a8fp-219, 0.0,
     0.0, 0x1.a5622bb691d9p-842, 0x1.10f4ba162b85cp-916, 0.0, 0.0,
     0x1.72051732ca55p-602, 0x1.70e6181be8416p-806, 0.0, 0x1.2d6166573b3ffp-40,
     0x1.46edccc54e765p-153, 0x1.e5615bc4bb803p-490, 0.0, 0x1.986b26ad0902p-402, 0.0,
     0.0, 0.0, 0x1.9b629623e5f23p-83, 0x1.e4bc4448149cap-728, 0x1.e5069a67e3868p-568,
     0x1.d1131e37b86cap-679, 0x1.f5ca727423fe2p-450, 0x1.7fc132efb139cp-350, 0.0,
     0x1.e88522849db9fp-176, 0x1.539b1574ab811p-50, 0x1.b9f26df0bd37dp-992, 0.0, 0.0,
     0x1.7d6849e981189p-428, 0.0, 0.0, 0x1.067d757951b98p-22, 0x1.893b6f89baffdp-650,
     0x1.cbc4ab5db229ap-18, 0.0, 0.0, 0x1.97af817f063ddp-664, 0.0, 0.0,
     0x1.9583b12909cb4p-31, 0x1.35e4519cf7f6dp-798, 0x1.41496fa056eccp-580,
     0x1.2100cf5a0e9e8p-435, 0x1.e8b9b28c00f0ep-416, 0x1.7d855afe8a925p-111,
     0x1.44d214279aaf7p-124, 0.0, 0.0, 0x1.4ccce3d31272cp-359, 0x1.633019510d3bbp-72,
     0x1.a31df0d93c778p-330, 0.0, 0.0, 0x1.cd7a369ebf87ap-280, 0.0,
     0x1.bd68e9d3e0366p-481, 0.0, 0.0, 0x1.6e562dd423499p-729, 0x1.f1436dba042f9p-750,
     0.0, 0.0, 0x1.e0eaaf8087696p-836, 0.0, 0.0, 0x1.f12f2e70ed735p-10, 0.0,
     0x1.9937c8c16dbb8p-775, 0.0, 0x1.922adb910dd0cp-473, 0.0,
     0x1.1e73f76fca343p-1003, 0.0, 0.0, 0x1.97947ae72c09ap-708,
     0x1.fa6cf88ee74a8p-952, 0x1.37d88a23fe80bp-88, 0.0, 0.0, 0.0,
     0x1.3b65c85a90958p-617, 0.0, 0x1.79c844319cfcp-678, 0x1.718f80456199p-760, 0.0,
     0x1.3457e9dc6f107p-331, 0x1.94e1f4ea5ed65p-965, 0x1.5a35a750b788cp-122,
     0x1.d6d6542248901p-710, 0.0, 0x1.38a88ad689211p-319, 0.0, 0.0,
     0x1.e3d226cff89ap-224, 0.0, 0x1.e82d576551d3dp-271, 0x1.d176d72576ad1p-778, 0.0,
     0.0, 0x1.d7f3ec2bbe29cp-85, 0.0, 0x1.9de196966fb62p-156, 0x1.5e6313bb66fbep-215,
     0.0, 0x1.3e8cc677f929fp-85, 0x1.2697e84ed4797p-71, 0.0, 0x1.ec0ae41f1a19p-255,
     0.0, 0.0, 0.0, 0x1.163ad46099f37p-551, 0x1.494966182b91bp-681, 0.0, 0.0, 0.0,
     0x1.033552c5f8efbp-747, 0x1.26bd9eef94a3ep-362, 0.0, 0x1.6fe5aaab3b49cp-1002,
     0x1.be9f9c1df1ef2p-641, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7db27e31c334bp-175, 0.0,
     0.0, 0.0, 0x1.c20b84bc97c4ap-827, 0.0, 0x1.768ca7a542e87p-1001,
     0x1.60ac398745573p-208, 0x1.5fdb1b96e910bp-309, 0x1.ddde3d70eec1fp-873, 0.0, 0.0,
     0.0, 0x1.ff5b9b1946605p-166, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7576acea91218p-362,
     0x1.96990f8ea7e83p-598, 0.0, 0.0, 0.0, 0x1.4c86916901902p-208,
     0x1.f81fc0d2cb4ddp-192, 0.0, 0.0, 0.0, 0x1.f1c700b43697cp-30, 0.0,
     0x1.791db63a14ed8p-430, 0.0, 0x1.29a74c7dec33cp-303, 0x1.14e8be7851f98p-295, 0.0,
     0.0, 0.0, 0x1.fcd21cdac1a8p-442, 0.0, 0x1.23812e775bc45p-650,
     0x1.7f5d892c2017bp-311, 0x1.4cfc7ba2b4ca1p-299, 0x1.fbce97405d4a1p-173,
     0x1.524829f0ea778p-925, 0.0, 0.0, 0x1.79ca936bf09cp-463, 0.0, 0.0,
     0x1.07c4d90290e7bp-609, 0x1.c737adadb1b91p-489, 0x1.4e1ec809487c6p-781,
     0x1.dc5c77b302277p-564, 0x1.4ea33dcd2533cp-338, 0.0, 0x1.10c58567d1f9fp-389, 0.0,
     0x1.35bd3a8682445p-593, 0x1.6436783fd82cbp-326, 0x1.eefc09d832aa6p-543, 0.0,
     0x1.6c0fd84a6ed28p-312, 0x1.88e1958aad94dp-132, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a70eba3c89b2dp-101, 0x1.5a476ff5c1c17p-754, 0x1.e829d0ccf5c86p-211,
     0x1.e860fa3c0feebp-214, 0.0, 0x1.f7086e6236a56p-242, 0x1.324627c8c1a13p-270, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.110ec75e88d6ep-6, 0.0, 0.0, 0x1.9615069bce524p-391, 0.0,
     0.0, 0.0, 0.0, 0x1.cd2a319540de4p-76, 0x1.c6726961c8d37p-563, 0.0, 0.0,
     0x1.3604096fa906cp-740, 0.0, 0x1.43b4ef66df3ap-99, 0x1.ec1c564b11f32p-410,
     0x1.edf5bcb55e3ccp-162, 0x1.0f091472aefe6p-949, 0x1.6dcccd92774fep-1014,
     0x1.e176114a83c5dp-994, 0.0, 0x1.9fd4242b07037p-651, 0.0, 0x1.cfc814a8b2198p-596,
     0x1.81105b11e23eap-644, 0x1.b67508531114ap-288, 0.0, 0x1.52b73f5d0fa02p-505, 0.0,
     0.0, 0x1.7207e26a3f071p-620, 0x1.caa7d3e572745p-421, 0x1.46f1039d8f2d8p-739,
     0x1.b4dd4427b8685p-541, 0.0, 0x1.bae13bf7ca1b6p-720, 0x1.36193ac2a8682p-416,
     0x1.97873390274cep-714, 0x1.d8c164578d57ap-420, 0x1.c0bbd98a020bcp-757, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.963fc5656dfe4p-220, 0x1.c2bac172a2f16p-455, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4ab66d3e64628p-551, 0x1.3ef03acd5e482p-1001,
     0x1.8ef93bb7c4cd5p-69, 0.0, 0x1.8fc7e3ca15e3fp-776, 0.0, 0x1.5ed47c3bafec5p-511,
     0.0, 0.0, 0.0, 0x1.589089ee4fcd9p-918, 0x1.e6e4d741cc64p-490,
     0x1.acd0c9b2917e6p-768, 0x1.b4f3339ec1521p-526, 0.0, 0x1.d1c95d5dad088p-794, 0.0,
     0x1.40fc4b0f639dbp-912, 0.0, 0x1.db5fcda7e871ap-125, 0.0, 0x1.052992bc816dp-1022,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02ffa174b4bffp-188, 0x1.1926c888adcdap-958, 0.0,
     0x1.ca96f08eabfb9p-328, 0x1.550deace3d56fp-952, 0x1.1eb8010e9e7d8p-719, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3eb18323525f7p-999, 0x1.bedd380cfca2cp-200,
     0x1.cc66dd4082de8p-589, 0x1.ec53f04aa99dfp-554, 0x1.7bc875ae47092p-79,
     0x1.82ff941bc5331p-72, 0x1.e0bfcbcf7143p-436, 0.0, 0.0, 0.0,
     0x1.8458def358685p-508, 0x1.16d71468c9097p-377, 0x1.c889ea314a7ecp-180, 0.0, 0.0,
     0x1.be0af0b5547ccp-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dba35e4a83d4p-364, 0.0,
     0.0, 0x1.b23a913a46c02p-592, 0x1.b4cd0af029a2ap-140, 0.0, 0x1.8b8f8cb482adp-704,
     0x1.0fcb9c2fe5c5dp-950, 0.0, 0x1.19eb778073736p-944, 0x1.bdf955a837379p-749,
     0x1.abd930790fe64p-275, 0.0, 0x1.37c1694b9cfd8p-138, 0.0, 0x1.d73ae35ed677ap-745,
     0.0, 0.0, 0x1.5e54d8ea0ad1fp-202, 0.0, 0.0, 0x1.893890a94973p-906, 0.0, 0.0, 0.0,
     0x1.9efd91e3c77ap-384, 0x1.a0d13f1dbbd5ep-905, 0.0, 0x1.71bb1879683e6p-112,
     0x1.bdd4fa89b6d11p-89, 0.0, 0x1.3358d686c7afcp-394, 0.0, 0.0,
     0x1.46053ce588323p-690, 0.0, 0x1.5f2b494abbe97p-730, 0.0, 0x1.749383a2a9a26p-695,
     0x1.a3bf27519f67ap-564, 0x1.1bd3da271ddbap-810, 0x1.af7510a16d46cp-107, 0.0, 0.0,
     0x1.8b3e889460e29p-313, 0.0, 0x1.6982750f875cp-188, 0.0, 0.0, 0.0,
     0x1.d936c5a8eacb7p-856, 0x1.533cc43d529bfp-492, 0x1.495443c438a2bp-525,
     0x1.6f7484861afecp-493, 0x1.52733f71374acp-127, 0x1.79e10bc8dcd4p-916,
     0x1.a06bcb739d859p-362, 0.0, 0x1.efea729d02a43p-602, 0x1.1f9514eb4d1d6p-839, 0.0,
     0x1.885c22ba36224p-1001, 0.0, 0.0, 0x1.5336e9daeb3fbp-547,
     0x1.94b33d3fd53bap-244, 0.0, 0x1.1fd027798ee93p-995, 0.0, 0x1.37036ee95e9bp-938,
     0x1.0d0f6f55876d4p-262, 0x1.f01293025dab6p-155, 0.0, 0.0, 0x1.3f24be28f4518p-364,
     0x1.c2d61549f73a4p-983, 0x1.866c5421b5b9cp-973, 0x1.76b411ec8173bp-548,
     0x1.8854395887a5p-769, 0x1.41333a5ef243cp-985, 0.0, 0x1.fd0d86cadb5d8p-192,
     0x1.9c6f39db18b63p-418, 0x1.c86e45c44b5c1p-550, 0x1.650d712621f5ep-708, 0.0,
     0x1.8352a072d5926p-972, 0.0, 0.0, 0x1.6659e9d888f73p-53, 0x1.9616ffb5ebca5p-865,
     0x1.ddbf12a041255p-428, 0.0, 0x1.3eb452b52ff71p-1018, 0.0,
     0x1.1569a13afde29p-887, 0x1.0a800be29009fp-159, 0x1.de1f2d6af3915p-442, 0.0,
     0x1.0d32856e1041fp-693, 0x1.b71cd8fe9d759p-682, 0x1.6f5bf2e51c508p-843, 0.0, 0.0,
     0x1.45d3998b422f8p-231, 0x1.e993f9dd48f55p-327, 0.0, 0x1.e5d70f2a5340fp-330, 0.0,
     0.0, 0x1.2c3a0f01b8ea4p-896, 0x1.42de2f9378263p-542, 0x1.e526f3a0cb2ebp-863, 0.0,
     0x1.1e1e928b63981p-787, 0x1.9060191c33bf5p-550, 0x1.f9ec260c08da6p-187, 0.0,
     0x1.d8e080bcd35c2p-452, 0.0, 0.0, 0x1.35bff295415p-300, 0x1.74b40c60c9fa6p-211,
     0x1.ea0e221dbca42p-863, 0x1.8393d50425fb6p-948, 0.0, 0x1.647e37711ebafp-312,
     0x1.fd6b8761ff1ap-762, 0x1.8a1192e35c53ap-982, 0x1.b96e69504d79dp-440, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8e4bebc588474p-375, 0.0, 0.0, 0.0, 0.0,
     0x1.b0303b2e9a68bp-147, 0x1.ca7ddd12069dp-431, 0.0, 0.0, 0x1.62dbf651eb4b3p-127,
     0.0, 0.0, 0.0, 0x1.a7bcdfa68522ep-1020, 0x1.f4dcf4e66705p-1008,
     0x1.6a2db6a2de4c1p-913, 0x1.98a307d7aa096p-353, 0.0, 0x1.5140ab170d40ep-964, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6aaf9af200dp-321, 0.0,
     0x1.d2e48e1a59f3cp-268, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1e75d992ac5fp-412,
     0x1.63a0a44a9fb04p-73, 0x1.27c2939e20903p-46, 0x1.f523f399907c7p-62,
     0x1.2005173d446fbp-592, 0x1.eac5870156e2ap-487, 0x1.646674855c0b6p-1013, 0.0,
     0x1.0189fd605d5c5p-422, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df68b948d3abdp-470, 0.0,
     0x1.419b8e720e4c2p-775, 0.0, 0x1.95b09202e683fp-683, 0x1.3202e09625019p-621, 0.0,
     0.0, 0.0, 0x1.f1bd65fd4bb0cp-484, 0x1.a003effae6bbfp-390, 0.0, 0.0, 0.0,
     0x1.b125ee5ad62fcp-145, 0.0, 0.0, 0x1.860870c20b306p-499,
     0x1.b7f0c7e17e7cep-1006, 0x1.9f3dff340ce5ap-748, 0x1.11dd9521f6f5fp-218, 0.0,
     0x1.e00326038eb97p-428, 0x1.23b99ea1abef3p-372, 0.0, 0x1.b34f782a5cc04p-400,
     0x1.5920951a344c2p-347, 0x1.8aa23c74ba166p-657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.908d2cd71762bp-80, 0.0, 0x1.7a1e4683c832dp-209, 0x1.486d1db08e897p-63,
     0.0, 0x1.3e006738895ap-176, 0.0, 0.0, 0x1.86a42e916eb5fp-237,
     0x1.10496ecc01a7dp-57, 0x1.51fb92fa8664ap-35, 0.0, 0x1.527e83e2a4702p-861, 0.0,
     0x1.f33172981cc2dp-40, 0.0, 0.0, 0.0, 0x1.b9c0783ad7153p-314,
     0x1.c86a163b15c5cp-370, 0.0, 0.0, 0.0, 0x1.fd73562f6bb5ep-275, 0.0, 0.0, 0.0,
     0.0, 0x1.6d5d9b56cc9bcp-76, 0x1.d215a1298de4cp-135, 0x1.1286f2ecd5ab5p-920,
     0x1.debd821ddc648p-866, 0x1.b9282b50ac05cp-192, 0.0, 0.0, 0.0,
     0x1.1a6328bdca4c4p-992, 0.0, 0.0, 0x1.8f236b11dd57dp-39, 0x1.e974c19f8182ap-62,
     0.0, 0.0, 0x1.7296c0019086cp-487, 0.0, 0x1.60a1db95080f7p-809, 0.0,
     0x1.f5f8a26db8b27p-964, 0x1.2455212fe731p-752, 0.0, 0.0, 0x1.05a5320bbb618p-951,
     0x1.ee6d141744407p-21, 0.0, 0x1.4e477fc15657bp-470, 0.0, 0x1.f53386671926dp-255,
     0x1.4ff837406ed2ep-289, 0.0, 0.0, 0x1.2fe672bfab8acp-589, 0.0, 0.0, 0.0, 0.0,
     0x1.153468eb8741ep-581, 0x1.5dff0a38c7d3bp-500, 0x1.74ec66cc0b3ep-115, 0.0,
     0x1.28c8ce247b759p-189, 0x1.f2817963441d8p-846, 0.0, 0x1.f675acf83243dp-364, 0.0,
     0x1.e7fea52ffbe85p-301, 0x1.448cf137ef523p-480, 0x1.7ef8e6e34ebeep-655,
     0x1.ab19d4c70966bp-969, 0.0, 0x1.041cca2940c0fp-116, 0.0, 0x1.da5010bd3032p-748,
     0.0, 0x1.e8e70768e83e9p-535, 0x1.98f95baee5c3dp-766, 0.0, 0.0, 0.0,
     0x1.19c064a4f5362p-66, 0.0, 0.0, 0.0, 0.0, 0x1.0a0b48ddad04bp-473,
     0x1.51763b846ed61p-872, 0.0, 0.0, 0x1.cae21080998f5p-815, 0x1.5664b6142a4f5p-779,
     0x1.b3330b423e20ap-159, 0.0, 0.0, 0x1.68e856d435057p-345, 0x1.efce84b4159bfp-805,
     0x1.5714e6c39f4e5p-167, 0x1.6a52c8c1a25dep-1001, 0.0, 0x1.8501d1b87a5ffp-909,
     0x1.8487ad56e5035p-844, 0.0, 0.0, 0.0, 0x1.e2a138a6c0fc4p-209,
     0x1.1c09a9279a22cp-893, 0.0, 0.0, 0x1.2c8c669656e53p-327, 0x1.d687a7ff1df8bp-551,
     0x1.6d7af67dce726p-454, 0x1.6b42bf0b70357p-459, 0.0, 0.0, 0x1.eee9958a4f42dp-394,
     0x1.b85aa10c9da6p-935, 0.0, 0x1.57facffcb9c4ep-699, 0x1.99acf97bc5b6cp-906,
     0x1.0082bb852e266p-42, 0x1.dd2f0785bf456p-603, 0.0, 0.0, 0.0, 0.0,
     0x1.40199311e8cc7p-27, 0.0, 0x1.923f39028f9d4p-378, 0.0, 0x1.a5a74a6ebefa5p-60,
     0x1.7725d7a87537fp-265, 0x1.6e52fb3d5252ep-120, 0.0, 0.0, 0x1.e5fa61fa0b0aep-725,
     0x1.d9a0307c81816p-859, 0x1.6bc2cef860886p-978, 0.0, 0.0, 0.0,
     0x1.083706ead8da8p-830, 0x1.46cbde73eee78p-956, 0.0, 0x1.e8758d15085d7p-776, 0.0,
     0x1.b9c70120e98adp-134, 0x1.9acfabf741a6fp-443, 0x1.135669e71e57ap-157, 0.0,
     0x1.d2a1381e58eefp-784, 0.0, 0.0, 0.0, 0x1.44ac2770361d9p-2, 0.0,
     0x1.cce399eeea3a4p-448, 0x1.387a515315d46p-148, 0.0, 0.0, 0x1.d3d0493ddac28p-29,
     0x1.0577f680d0d01p-451, 0x1.0bc4fbef1ccccp-113, 0.0, 0x1.89c2b32fb81ccp-843, 0.0,
     0.0, 0.0, 0x1.d57fa9b8b4708p-327, 0x1.4ec76fb8d380fp-623, 0x1.a8e2871e94048p-634,
     0x1.37b01993c44b8p-601, 0x1.bcafdbbfeaeffp-861, 0.0, 0x1.d333a7a3b289fp-617, 0.0,
     0.0, 0.0, 0x1.035c11f147d9bp-460, 0.0, 0x1.d2459d9fdf10dp-999,
     0x1.544bdeef7e46p-703, 0.0, 0x1.8f939cc953045p-775, 0x1.8b528469b4e68p-544, 0.0,
     0.0, 0x1.85fa05f9a93bfp-1006, 0.0, 0.0, 0.0, 0x1.a10bd6a47343cp-699, 0.0, 0.0,
     0.0, 0x1.e685860667f75p-720, 0x1.5a905b2c5d4c2p-346, 0x1.fcee9ba4ac8f6p-131,
     0x1.0fa88b01edb7fp-452, 0x1.834760b3eec1fp-768, 0x1.014b915ec554bp-831, 0.0,
     0x1.9267dd6a6c275p-615, 0.0, 0x1.1da6ee76fc4dap-664, 0.0, 0x1.249215594b1d8p-90,
     0x1.c94c09653e795p-442, 0.0, 0.0, 0x1.1740927c9586cp-1022,
     0x1.a6c375090a3d7p-931, 0.0, 0.0, 0x1.15acaaf27821cp-379, 0x1.9a62176181a71p-365,
     0x1.f9f077cbebf2ap-903, 0x1.720c7a694a0efp-859, 0.0, 0x1.d0a49e87b0fe8p-564, 0.0,
     0x1.07f37b9025b9dp-440, 0x1.855505adc20f1p-532, 0x1.ab812e2f7a0fap-124,
     0x1.5024fbac5a18dp-231, 0.0, 0.0, 0.0, 0.0, 0x1.2008fcf473921p-231, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b70b7134e35e1p-470, 0x1.39c5e4ce78ac1p-356, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7944f8b787d85p-170, 0x1.9635f695439dbp-851, 0x1.67e7d44dc8731p-116,
     0.0, 0.0, 0x1.aa288fc7a7346p-948, 0x1.e1f5969f4c8cep-75, 0x1.68db8342079e2p-567,
     0.0, 0x1.455dafcd048acp-153, 0.0, 0.0, 0x1.de9a9b465bc65p-592,
     0x1.9ca17d47a2798p-96, 0.0, 0.0, 0x1.121e046f2dfb5p-432, 0x1.3d7edab66f33ap-266,
     0x1.51537b6305842p-790, 0x1.c5a47d705e2e1p-193, 0x1.ff8662796cd61p-359, 0.0, 0.0,
     0x1.e1a73bda85266p-577, 0.0, 0x1.73310c5f07ed2p-132, 0x1.c3293f2194962p-321, 0.0,
     0x1.7c7bed63bc337p-853, 0x1.c29420f9d609cp-870, 0.0, 0.0, 0x1.7697d0788225p-937,
     0.0, 0.0, 0.0, 0x1.574e21dc4b2bap-472, 0x1.95bc35a669fd7p-96, 0.0, 0.0, 0.0, 0.0,
     0x1.7d0af1f6eaeb3p-302, 0x1.c98e9ed0e4eabp-192, 0.0, 0x1.0c0bd8959927dp-611, 0.0,
     0.0, 0.0, 0.0, 0x1.040dfee455751p-800, 0x1.552c5ee5a43abp-314,
     0x1.3d484b473f2b8p-167, 0.0, 0x1.8723aa962f96fp-861, 0.0, 0.0,
     0x1.cdb2ba800e1a9p-337, 0x1.7d92dfe793742p-827, 0x1.b6793e89bfa99p-844,
     0x1.987cc1d9bf365p-804, 0x1.042db747dd1ap-314, 0.0, 0x1.e105c39e78757p-917,
     0x1.9f53b204cdecbp-757, 0x1.8ed760445dfedp-155, 0.0, 0x1.f8b1d936162c8p-95,
     0x1p0, 0x1.ff040cbc76cc2p-355, 0x1.0ebd081209166p-171, 0x1.1f6cc18bf16f2p-382,
     0x1.9b36ac0ad7bfap-948, 0.0, 0.0, 0x1.29800b73d1b6dp-643, 0x1.cb9a42ac70c27p-376,
     0.0, 0x1.435cf983f70e9p-560, 0x1.1bf5f7e8d2d4p-1007, 0x1.35ef014e94757p-657,
     0x1.b6c9f312e6095p-311, 0x1.71a48170cdb9bp-746, 0x1.245e815b279eep-757,
     0x1.dbb08a382a0cep-952, 0x1.bd061dcad5072p-36, 0x1.7f3fb52db2256p-229, 0.0,
     0x1.db78ca21b43d3p-983, 0x1.8618680926238p-842, 0x1.ba84b016804ecp-558,
     0x1.3cc95c0e17d79p-581, 0.0, 0.0, 0x1.dfeb3dd087915p-421, 0.0,
     0x1.8e0330307f726p-740, 0x1.f3aae84efe04cp-164, 0x1.adc8c86867f53p-925, 0.0,
     0x1.8162652f4039p-882, 0x1.0598ec3194a54p-510, 0x1.dba6d69939176p-311, 0.0,
     0x1.3bc8fd7aa853cp-146, 0.0, 0x1.ac1da1d93ed5p-967, 0x1.9751e462ba13ep-423,
     0x1.40ea431a44ac9p-277, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9cc43d66d80ap-799,
     0.0, 0.0, 0.0, 0x1.ee2deb706acb7p-206, 0x1.d4ad94a2abd2ep-292,
     0x1.0114503753cc5p-346, 0.0, 0x1.88e91eb18b7d8p-175, 0x1.416edd0f451c7p-954, 0.0,
     0.0, 0.0, 0x1.94ed4f271b53fp-980, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff2b126f67b0fp-384, 0x1.9ac50f615040bp-243, 0x1.ae4d9734bb19dp-489,
     0x1.9f061d1fadf81p-159, 0.0, 0x1.ec6608bb9ecacp-241, 0.0, 0x1.57388aa9e2bd8p-866,
     0x1.ce68765379439p-2, 0.0, 0.0, 0.0, 0x1.76f52f4ac6a47p-1009,
     0x1.ba80677246939p-18, 0x1.755f862564dfep-186, 0.0, 0.0
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
            tmp1 = round(tmp0);
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
    printf("round %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("round bench acc %la\n", global_bench_acc);
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
