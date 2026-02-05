/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_tgamma.c --function tgamma --headers math.h,ml_support_lib.h \
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
     0.0, 0x1.c00ee8757ed6ap-225, 0x1.747ae462ca598p-409, 0x1.72b6d798810b9p-258,
     0.0, 0x1.712369f32c30fp-429, 0.0, 0.0, 0.0, 0.0, 0x1.cf4bcaebf3899p-101, 0.0,
     0.0, 0.0, 0x1.7ecda6cc233d3p-465, 0x1.701f46cc96591p-458, 0.0, 0.0,
     0x1.b033b4ed09088p-471, 0.0, 0.0, 0.0, 0.0, 0x1.0ea4201ed3f69p-782,
     0x1.dcb91a04ad661p-206, 0x1.d21912f604fp-411, 0.0, 0.0, 0.0,
     0x1.8658e91b4b293p-874, 0x1.533c125c88ec1p-412, 0.0, 0x1.517be22a2ea99p-10, 0.0,
     0.0, 0.0, 0x1.c3e735cbdbfe9p-773, 0x1.f33abae7476bdp-328, 0x1.0bbfbc6ccf8eap-776,
     0x1.efc6356a3828p-45, 0x1.f0e1a33cbd3e9p-281, 0x1.981097c60a80dp-586,
     0x1.dbda90a7f7239p-947, 0.0, 0x1.c65cba98ee5e3p-846, 0x1.da60057aa2fcfp-691, 0.0,
     0.0, 0x1.102cb4a2497cbp-66, 0x1.752628cffbd31p-943, 0.0, 0.0,
     0x1.091cebe3ce521p-742, 0.0, 0x1.95c708a491ee8p-648, 0x1.1f0181adfd84ep-900, 0.0,
     0.0, 0.0, 0x1.3e9916788cd4fp-906, 0.0, 0x1.13d67332c199fp-707,
     0x1.fa7789f65f136p-71, 0x1.f9c6f52760f08p-194, 0x1.5d2e56374ccaep-1019, 0.0,
     0x1.909db52644ab7p-552, 0.0, 0x1.e7cb3cca3b13ap-509, 0.0, 0x1.9c0367365c9f5p-720,
     0.0, 0x1.f4ecd4e04094ap-603, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97eb8c1e96f56p-687, 0x1.18d07d3b672dbp-324, 0.0, 0.0, 0x1.e4c93b6d4b906p-528,
     0x1.1b32576e57cf7p-524, 0x1.f299cac53085p-721, 0.0, 0.0, 0.0,
     0x1.5e1c7dd1dbedcp-508, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02293390ccccap-33, 0.0, 0.0,
     0x1.133ae7ed5a25ap-414, 0.0, 0.0, 0.0, 0x1.f670ed073a31p-746, 0.0,
     0x1.d7cd14b58beabp-95, 0.0, 0x1.5106269c5b007p-948, 0x1.d99a467a20f9dp-998,
     0x1.1d3fa7fbf8badp-147, 0.0, 0x1.f12d13b42b668p-430, 0x1.71950ce0b69a8p-64,
     0x1.53c7c2aaf7c25p-40, 0x1.057c5b71e11a1p-310, 0x1.e9894e122acdbp-983, 0.0,
     0x1.54a3d0549de93p-471, 0.0, 0.0, 0.0, 0x1.303dd4d30701dp-984, 0.0,
     0x1.42b3cf0a131b4p-978, 0.0, 0.0, 0x1.70925fad313e9p-409, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b8e75a7216a8fp-2, 0.0, 0x1.f633053ca7be1p-827, 0.0, 0.0,
     0x1.a57500b5043c9p-16, 0.0, 0x1.98ffc4ef1f58p-268, 0x1.ca8292199c067p-86, 0.0,
     0.0, 0.0, 0.0, 0x1.7ed9effcff022p-60, 0x1.93d171929996fp-223,
     0x1.6b02b42878e83p-351, 0x1.55ecbb431432ap-810, 0.0, 0.0, 0x1.7f218bae11a5cp-909,
     0x1.a9bfd295e49aap-929, 0.0, 0x1.6d50bb15e132ep-309, 0.0, 0x1.a9c1367aa1195p-99,
     0.0, 0x1.441db2e171a59p-753, 0.0, 0.0, 0x1.6c89b4b79fe82p-823, 0.0, 0.0, 0.0,
     0.0, 0x1.f031adbce9d76p-765, 0x1.a0ed6095ddabdp-974, 0x1.4a9da79289163p-165, 0.0,
     0x1.31c6c646ec1dbp-754, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9bebf26529977p-135, 0x1.41268863def99p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d2168476ac96fp-9, 0x1.9bc87738711d4p-864, 0x1.a2797804a8596p-514, 0.0,
     0x1.b97355b8a8e76p-532, 0.0, 0x1.4a7524b455812p-82, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f7a1a1fd2eacep-894, 0.0, 0x1.6965deb8cf0aap-92, 0.0, 0.0,
     0x1.77c4047566e82p-422, 0x1.b352e8297488ep-168, 0x1.14982c4546d59p-619,
     0x1.94f7343b855bfp-531, 0x1.6abc28779ace4p-21, 0.0, 0.0, 0x1.15903899d7e56p-521,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec189bd998d14p-583, 0x1.f3a2853aa2241p-785, 0.0,
     0x1.433a793bfe47fp-927, 0.0, 0x1.b7c4183f78a6cp-463, 0x1.652c278b49865p-506,
     0x1.f5c75eb8ab0a7p-289, 0x1.5d50bffd2aedfp-98, 0.0, 0.0, 0x1.2d0a398bb6b22p-904,
     0.0, 0.0, 0.0, 0.0, 0x1.1b46eb77351a5p-286, 0x1.e44cee1e70f5fp-235, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5f1b4da4bed3p-547, 0.0, 0.0, 0x1.c2ffe95ca7769p-634,
     0x1.53cb21b085b16p-569, 0.0, 0x1.270476a76a67p-68, 0x1.68373efb45944p-194,
     0x1.e89ef2e792b4cp-313, 0x1.68d20ea7b014cp-557, 0.0, 0x1.2bd70a55a7c98p-841,
     0x1.2723acbb9268fp-57, 0x1.f8aa54ad226c1p-9, 0.0, 0x1.34280e177fe9dp-856,
     0x1.cf7820ffb2063p-996, 0x1.770d7aa876103p-934, 0x1.3af51f255520fp-41,
     0x1.16b60a4e0afafp-914, 0.0, 0.0, 0.0, 0.0, 0x1.50f23eeba6ba6p-157, 0.0, 0.0,
     0x1.18b1e5142dc9p-466, 0.0, 0x1.1d7bdac8fa481p-426, 0x1.ec90d819b4b51p-258, 0.0,
     0.0, 0.0, 0x1.7ee71fc4e9a65p-45, 0x1.bd1aaf45e43b7p-994, 0.0, 0.0, 0.0,
     0x1.a1b2c263482fbp-33, 0x1.cb380329c9963p-36, 0.0, 0x1.9f45d4be02bacp-445, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b276f188cd04p-761, 0x1.05b7dc2505c5ap-946,
     0x1.6a6feebaf78c6p-345, 0x1.c50c5030ac844p-827, 0x1.4326b9deeb171p-917,
     0x1.dd0810ac4cf58p-76, 0.0, 0.0, 0.0, 0x1.74db7622bc2f5p-451,
     0x1.8a3fcedb21054p-297, 0x1.4c2bfc83a018bp-70, 0x1.46e5fe194f388p-481,
     0x1.fe3d64c8225a1p-79, 0x1.01861ae39b557p-776, 0.0, 0.0, 0.0,
     0x1.7ca2075d773d5p-521, 0.0, 0.0, 0x1.882c2a3b0234cp-517, 0x1.5b7147c847d8p-981,
     0.0, 0.0, 0.0, 0x1.0c84a6e87f3efp-870, 0.0, 0x1.c91407dd4eea8p-232,
     0x1.d8ff98cafe583p-629, 0.0, 0.0, 0x1.6d8e17587094ap-266, 0.0, 0.0,
     0x1.fb2c97f22211cp-786, 0x1.e1114f65f44e9p-764, 0.0, 0x1.c8fc817be2c44p-576, 0.0,
     0.0, 0x1.3d33e06eb5449p-136, 0x1.edfa68cc33001p-75, 0x1.d0411af77e43bp-409, 0.0,
     0x1.572267ad5a123p-47, 0.0, 0x1.e06e0f69e2d9dp-276, 0.0, 0.0,
     0x1.c1593be406eb1p-3, 0.0, 0x1.e18330d99dbbdp-650, 0x1.be5ee87776d93p-789,
     0x1.948260f5b1b41p-956, 0x1.53d5f1c3adc3ap-196, 0x1.d3d8ab84803f6p-889,
     0x1.f37a7fc5615f4p-95, 0.0, 0x1.afccc94538f5dp-633, 0.0, 0.0, 0.0, 0.0,
     0x1.d99e63856ad71p-959, 0.0, 0x1.fd0c6d8bdf49cp-858, 0.0, 0x1.de00dec19c9cep-526,
     0.0, 0.0, 0x1.840d56d64fcf1p-586, 0x1.fc1a844444824p-854, 0.0, 0.0,
     0x1.b580e2a95b3b4p-673, 0x1.2f32fb0111826p-104, 0x1.ef052790163d6p-542, 0.0,
     0x1.c3fee114716b2p-563, 0.0, 0.0, 0.0, 0x1.b9e67469b38f8p-531,
     0x1.b5d17938c5d5fp-1013, 0x1.0f8b9485f28c6p-365, 0x1.a48f242e3569p-87,
     0x1.2caa180248478p-420, 0.0, 0x1.7e48d8dde96acp-450, 0.0, 0.0,
     0x1.b50f850b4241bp-463, 0.0, 0.0, 0.0, 0x1.c69506135f3e4p-410, 0.0,
     0x1.4193fe2da6f6p-253, 0.0, 0x1.af07a1af22091p-245, 0x1.c96fb4e9b0361p-975, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d0cce86412ed4p-475, 0.0, 0.0, 0.0,
     0x1.a9a9466cc979ap-883, 0x1.d1f8b38e5f24p-387, 0.0, 0.0, 0x1.f6b1d096a1eafp-860,
     0.0, 0x1.83ef8e5f0611ap-883, 0x1.d849741b03c51p-349, 0.0, 0.0, 0.0, 0.0,
     0x1.5875da4728dacp-591, 0.0, 0.0, 0.0, 0.0, 0x1.5266ecb312d1bp-309,
     0x1.7aeece94c29acp-59, 0x1.17ba142b46a58p-660, 0x1.cdcd4928e0486p-213, 0.0,
     0x1.45520b63c5338p-253, 0.0, 0x1.20828efadfa35p-635, 0.0, 0.0, 0.0,
     0x1.10e3cc39a02c6p-945, 0.0, 0x1.b43e34c81bb14p-489, 0.0, 0.0,
     0x1.4950f2070cd7bp-213, 0.0, 0.0, 0.0, 0x1.24550d2c90514p-220, 0.0, 0.0,
     0x1.ceb775a4e3dfdp-678, 0x1.760095fd8004ep-525, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.38e829dc3e52ep-512, 0.0, 0x1.93d589be20002p-135, 0x1.c1841423edc0cp-376,
     0x1.c4751c0855e13p-1009, 0x1.6ea945ab5e11dp-852, 0x1.13c76b1f8c8fp-910, 0.0,
     0x1.3f611dbd59104p-538, 0.0, 0x1.5f5ae3c2c03dbp-596, 0.0, 0x1.01622adc2e40dp-636,
     0x1.cbc4e1c1269e1p-587, 0.0, 0.0, 0x1.392c611dd0157p-958, 0.0, 0.0,
     0x1.3dda525c2e26dp-659, 0.0, 0x1.6d4951d49a29fp-256, 0x1.edfdc8631c858p-302,
     0x1.53fb3e3839baap-671, 0x1.a37838030a7b7p-401, 0x1.0dafc56502c59p-774,
     0x1.69a56ee1e9e22p-149, 0x1.75195080be529p-251, 0x1.d990dfdf1c3d6p-685, 0.0,
     0x1.6e99e31842383p-18, 0.0, 0x1.0ae7bf819efedp-889, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e694a176c4d3p-328, 0x1.acf5683ab1735p-119, 0.0, 0.0, 0.0, 0.0,
     0x1.48097fe334958p-989, 0.0, 0.0, 0x1.96f7c99575386p-622, 0.0, 0.0, 0.0,
     0x1.ff9f90694d47ap-704, 0.0, 0.0, 0.0, 0x1.7c4038bf6da58p-424, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.755661eeca83p-280, 0.0, 0x1.37d3b17bcd428p-830, 0.0,
     0x1.e26b218f05b84p-209, 0.0, 0.0, 0x1.ca803f841c048p-744, 0.0,
     0x1.09952884f1168p-332, 0x1.ec7c87a21bfb1p-662, 0.0, 0.0, 0.0,
     0x1.69011f4b0b408p-302, 0.0, 0.0, 0.0, 0.0, 0x1.2496e5ebea73ep-419, 0.0, 0.0,
     0x1.9f69a4e0afa0ap-585, 0x1.237b878f5caa1p-1020, 0.0, 0.0, 0.0,
     0x1.93b4e40585e5cp-569, 0.0, 0.0, 0x1.715165b9e9748p-480, 0.0,
     0x1.4677f80d676c8p-459, 0x1.25e86d537d747p-239, 0.0, 0x1.4732a489e0127p-368,
     0x1.eac0a95c26655p-148, 0x1.21a2b228c9a2ap-586, 0x1.848ddf38a6137p-114, 0.0, 0.0,
     0x1.dfda3afe09c3fp-676, 0.0, 0.0, 0.0, 0x1.0a62cd33112e1p-417, 0.0,
     0x1.be21b63732852p-959, 0x1.b3de2de1842c3p-802, 0x1.4833f44203bbap-913,
     0x1.f8865a6d6ec0fp-490, 0.0, 0.0, 0x1.aeda638275243p-716, 0x1.ea27b4caeac7dp-550,
     0.0, 0.0, 0.0, 0x1.12abb6a5cbd65p-135, 0x1.a6ecde056ee98p-329, 0.0, 0.0, 0.0,
     0x1.39c94d2a4b733p-934, 0x1.4191072e31ad9p-562, 0x1.4b179c32a6bcep-746, 0.0, 0.0,
     0x1.f72ee9964c61ap-270, 0.0, 0.0, 0.0, 0x1.b4972af2384e9p-401, 0.0,
     0x1.971c2b2e23356p-393, 0.0, 0x1.d3de335b8a04fp-658, 0x1.39bafe3e36e4fp-637, 0.0,
     0.0, 0x1.3a682ab1ea929p-853, 0x1.cc9556731c07ep-113, 0x1.0653b8c5c04dbp-883,
     0x1.f9b6a7a5eb0a8p-885, 0.0, 0.0, 0.0, 0.0, 0x1.a81d6f7c27449p-597,
     0x1.9c196028ed714p-688, 0x1.595b0fc3ca173p-397, 0x1.f0fda9049da0fp-150,
     0x1.b7e60fe31d13ep-44, 0.0, 0.0, 0.0, 0x1.14f4b91bd83cbp-866, 0.0,
     0x1.b23abbf7b1967p-648, 0.0, 0x1.bc26b5d9045c9p-429, 0x1.73ae1655b20ccp-807, 0.0,
     0.0, 0.0, 0x1.eef2f83ed2ee8p-990, 0.0, 0.0, 0x1.ab1c83427bc53p-293,
     0x1.3c8c904fba0eep-419, 0.0, 0x1.31c6718e5e0dfp-325, 0.0, 0.0, 0.0,
     0x1.d1466d31d6ceap-563, 0.0, 0.0, 0x1.2d694b8b12753p-865, 0x1.1f7cd8939783ap-840,
     0.0, 0.0, 0x1.b9dfd066722dcp-324, 0.0, 0.0, 0x1.c468208c00d23p-484, 0.0,
     0x1.82bde30dcf5fap-72, 0.0, 0.0, 0.0, 0x1.56d740b8967cbp-885, 0.0, 0.0, 0.0,
     0x1.067056798ce7fp-979, 0.0, 0x1.80b814c9e2c86p-550, 0.0, 0.0,
     0x1.63b4314018195p-525, 0x1.b60e3e437b37fp-481, 0x1.5fdbe16faf4ap-211,
     0x1.6832a63575ccbp-692, 0.0, 0.0, 0.0, 0x1.ad2cb3977b138p-587, 0.0, 0.0,
     0x1.d2a2b43b8c298p-132, 0.0, 0.0, 0.0, 0x1.d7db7b82c595p-310, 0.0,
     0x1.ed983c1cd9dp-360, 0.0, 0.0, 0.0, 0x1.ce870b8f8f97ap-936, 0.0,
     0x1.24caa46e48448p-494, 0.0, 0.0, 0x1.f5b55a9c775aep-201, 0.0,
     0x1.1db2fc46ae7fap-73, 0.0, 0x1.43984632c7ba5p-208, 0x1.5dc58dad7f8eap-731, 0.0,
     0.0, 0x1.2043fc85a9945p-481, 0.0, 0.0, 0.0, 0x1.aa83332868cdp-944,
     0x1.8b22daff06d22p-37, 0x1.5a5eaf35d1197p-94, 0x1.5f474a6dea0dcp-40,
     0x1.e22d84c596053p-534, 0x1.db17136c1d98p-389, 0.0, 0x1.e44cd5ab370aap-370, 0.0,
     0x1.46bd2b9b7dcf2p-427, 0.0, 0x1.b95a99a9fc8d6p-906, 0.0, 0x1.809ab9b965a1cp-950,
     0.0, 0x1.382e1476bca07p-656, 0.0, 0.0, 0.0, 0x1.68e08e8524972p-485,
     0x1.f1c1a0f1a7797p-594, 0.0, 0x1.5ebd021b960aap-717, 0x1.3dcc18205c864p-70, 0.0,
     0x1.dab992cfcda5ap-988, 0.0, 0x1.1e6d3228189a5p-1008, 0.0, 0.0,
     0x1.24eaee1824b1ep-984, 0.0, 0x1.3edd8ecdf1c28p-825, 0x1.ee3a6ac4c9171p-486,
     0x1.2cf3ba39c232p-545, 0.0, 0.0, 0x1.9262ebe58145cp-674, 0x1.b46b8336f69aep-731,
     0.0, 0.0, 0x1.0b195eb7d871ep-127, 0x1.e8f35ab926da3p-623, 0.0, 0.0,
     0x1.4a06379fc1cfdp-178, 0.0, 0x1.a056956df8e95p-149, 0.0, 0x1.aff9c67a3d29bp-407,
     0x1.5863aad5c344fp-287, 0x1.214d24d3f5cbfp-856, 0.0, 0.0, 0.0,
     0x1.bf442f02a4701p-825, 0.0, 0x1.34ef9048af3a9p-553, 0x1.d56fa2e8633eap-190,
     0x1.b9add30e36062p-604, 0.0, 0.0, 0x1.3d0fd6e405f43p-1010, 0.0,
     0x1.2daae9bf504afp-679, 0x1.be9411c7370b8p-425, 0.0, 0x1.91d8635f329bdp-348,
     0x1.edefe2594db85p-245, 0x1.9e8f18d82a3e8p-447, 0.0, 0.0, 0x1.dce6f77ed52dfp-654,
     0x1.f57e807cc3911p-431, 0.0, 0.0, 0.0, 0x1.bdb5455f1cbe2p-283, 0.0,
     0x1.e4f7a7f689c1p-648, 0x1.226105e6f97d7p-139, 0x1.f53b65e45a2ddp-534, 0.0,
     0x1.c6db7cb9d548fp-110, 0.0, 0x1.7fbb235cd581p-555, 0.0, 0.0,
     0x1.bbffb4bd58155p-601, 0x1.76781afdea05cp-946, 0.0, 0.0, 0.0,
     0x1.bcce76b7e4b09p-24, 0.0, 0x1.a6173f70e471ep-535, 0x1.89c172a226d78p-427, 0.0,
     0x1.d096fbe2c5604p-937, 0.0, 0x1.6eff33fa95e9dp-779, 0x1.dd7cf5461c37cp-569,
     0x1.6e791cd0d14d7p-946, 0x1.289a75f2a9b4cp-823, 0.0, 0x1.8d84f12899edep-44, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eeda0b2fca714p-165, 0.0, 0.0, 0x1.6302bd4175ec7p-254,
     0x1.a7ec186cb731cp-37, 0x1.bddbed519dd95p-200, 0x1.c8c0056187fedp-857,
     0x1.a8f9d26e17764p-753, 0.0, 0.0, 0.0, 0x1.14a79326e5259p-512, 0.0, 0.0,
     0x1.e762480e38fd8p-119, 0.0, 0x1.62bdae10aaadfp-435, 0.0, 0x1.9a53cdd707f6p-661,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b105ea141fdfp-10,
     0x1.5691e5786d78cp-76, 0x1.4105bee02c6b7p-817, 0x1.4074100485cedp-151, 0.0,
     0x1.51d6cd55d5d77p-701, 0.0, 0.0, 0.0, 0x1.59d8eadaf3fep-192,
     0x1.a98524f9e54cdp-595, 0.0, 0.0, 0.0, 0x1.b3c2481ba5f0bp-254,
     0x1.4478c0bfa667cp-245, 0.0, 0x1.5376290e958f8p-895, 0x1.9064adf88c44p-537,
     0x1.0ad13fa58af6p-261, 0.0, 0.0, 0x1.adde255029a03p-502, 0.0, 0.0, 0.0,
     0x1.54b41b4c70a84p-348, 0x1.c20a0aaa0474dp-103, 0x1.9990d61e2f565p-788, 0.0,
     0x1.cd2f6369f4d3ep-695, 0x1.58a76a72bd64fp-797, 0.0, 0x1.204ac6fb3ce21p-194, 0.0,
     0x1.2a9abfc83167ep-619, 0.0, 0x1.99979f7d0e095p-556, 0.0, 0.0,
     0x1.39add4e244c81p-840, 0.0, 0.0, 0x1.fa441c5f25f97p-618, 0.0,
     0x1.af78fc7e8d4b6p-748, 0.0, 0.0, 0.0, 0.0, 0x1.8acad29c04001p-312,
     0x1.0a03673aa76cap-527, 0.0, 0x1.3a519db9dc565p-648, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.510d87b2f747p-1000, 0x1.c53cc50b47da8p-613, 0.0, 0x1.0330911dbd45fp-828,
     0.0, 0x1.2ed526167a80bp-67, 0.0, 0x1.1b41ba625f32ap-381, 0x1.06042b2e3934cp-301,
     0x1.1b8934b62fc4fp-879, 0.0, 0.0, 0.0, 0x1.d1da022479e01p-531, 0.0, 0.0,
     0x1.4296dbd67580cp-224, 0.0, 0x1.653884196608dp-190, 0x1.76b421edee2f6p-984, 0.0,
     0.0, 0.0, 0.0, 0x1.7021cc5061021p-234, 0.0, 0x1.df120c1d83d9fp-648, 0.0,
     0x1.424f0c1552fc1p-551, 0x1.a4447d075b731p-803, 0x1.15f14cc1c116ap-673, 0.0, 0.0,
     0.0, 0.0, 0x1.4b5316ab9b027p-656, 0.0, 0.0, 0.0, 0x1.2dc422c80fd44p-1001,
     0x1.49a16a49d3fe9p-412, 0.0, 0.0, 0.0, 0.0, 0x1.df90e4f617011p-366, 0.0, 0.0,
     0.0, 0.0, 0x1.d1ee177ec4f4cp-490, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd89afc6a8e66p-651, 0.0, 0x1.63f29401b81dp-876, 0.0, 0x1.3e475ec69eb9bp-271,
     0.0, 0x1.05640b44a488ap-272, 0.0, 0x1.a66de4192639dp-497, 0x1.66c8d87195bb5p-404,
     0x1.9485f0c4982eap-937, 0x1.78b22851e0292p-252, 0.0, 0x1.99e78bebeb3ffp-486,
     0x1.3faa81256acf4p-757, 0.0, 0x1.b52e15747aee1p-20, 0.0, 0.0,
     0x1.22cc9140b34f4p-76, 0.0, 0.0, 0x1.8c08ed2b9d0fbp-952, 0x1.644ca3ffefe8p-572,
     0.0, 0.0, 0x1p0, 0.0, 0.0, 0x1.c2cde433117aep-618, 0x1.fd7b8ac3c6d52p-793,
     0x1.ee992f0663796p-589, 0.0, 0x1.bfb3bc01cd85ep-794, 0.0, 0x1.94e8cd4859874p-289,
     0.0, 0.0, 0x1.37037356d4164p-253, 0.0, 0.0, 0.0, 0.0, 0x1.34eab78595486p-43, 0.0,
     0.0, 0x1.913ce2028a9dap-595, 0.0, 0.0, 0x1.c648260d5fe5fp-944, 0.0, 0.0, 0.0,
     0x1.4689d9bc6d20ap-274, 0x1.aa3fdd903194ap-118, 0x1.ca078cdb2da49p-17
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
            tmp1 = tgamma(tmp0);
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
    printf("tgamma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("tgamma bench acc %la\n", global_bench_acc);
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
