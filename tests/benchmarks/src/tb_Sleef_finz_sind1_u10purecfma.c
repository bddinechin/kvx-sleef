/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind1_u10purecfma.c --function \
 *     Sleef_finz_sind1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.517259731c956p-498, 0.0, 0x1.106bb4c41d4e1p-727, 0.0, 0.0, 0.0,
     0x1.4b2ceb4967b3fp-554, 0x1.1bef204cd6529p-303, 0.0, 0.0, 0.0,
     0x1.9b963a90abf73p-726, 0.0, 0x1.30c1f73d55d6dp-308, 0x1.125b1f086f81ep-870,
     0x1.1cd56a30f9c75p-466, 0.0, 0.0, 0x1.ce6196119ee96p-839, 0x1.478bd9fc8ad63p-421,
     0x1.c205653292215p-580, 0.0, 0x1.dc83aa4a00053p-163, 0x1.cb22164a6cbeap-398,
     0x1.9b88af65581cp-854, 0x1.aa80c09eb5d4fp-912, 0x1.65fc8201f318bp-137, 0.0,
     0x1.311cf8df1bee8p-417, 0.0, 0x1.c1b7b8058ceb5p-614, 0.0, 0x1.673eed4bd5922p-728,
     0.0, 0.0, 0x1.8f42814119d0fp-138, 0.0, 0.0, 0.0, 0x1.0694ad3728affp-256,
     0x1.c61e2b490e21fp-297, 0x1.65e96c8fdf5d4p-285, 0.0, 0.0, 0x1.2bfa601a4a03fp-165,
     0.0, 0.0, 0x1.a196ae5a59ebep-929, 0.0, 0.0, 0x1.f5362751606ap-852, 0.0, 0.0, 0.0,
     0x1.b7059df2cdbacp-310, 0x1.e1420153c078ep-70, 0x1.17938a99d2c1p-706, 0.0,
     0x1.52885c6ad2ffap-521, 0.0, 0.0, 0.0, 0x1.c3245f22db337p-570, 0.0,
     0x1.54293c4a755ccp-204, 0.0, 0x1.c70ebe2f5ca44p-789, 0x1.e7830dccb1b21p-463, 0.0,
     0x1.ecef7f2b82beep-794, 0x1.6b679de76e239p-805, 0x1.534c17bbc9bdp-203,
     0x1.b37963d0dfefep-413, 0.0, 0x1.4a461cae5bef3p-944, 0.0, 0.0,
     0x1.01fb71839278cp-821, 0.0, 0x1.18319cfd81182p-954, 0x1.86160ce464ec4p-705, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.186dc649f78bcp-382, 0x1.7380e2f478e74p-1020,
     0x1.493bd3350f672p-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf47a725e69c2p-968,
     0x1.cf2e113d29293p-10, 0.0, 0.0, 0.0, 0x1.2610647a888e1p-814,
     0x1.9a294ff7be531p-110, 0x1.8469e00dd1904p-438, 0.0, 0.0, 0x1.255366ae9fa4dp-883,
     0x1.e2758e1ee84abp-611, 0x1.bd31c38a49bbcp-512, 0.0, 0x1.68b520b5722e8p-297,
     0x1.812b2ccc22ae4p-675, 0x1.c5b82ab56c61ap-938, 0.0, 0x1.be4f72bda5d5p-390,
     0x1.266f777ba4decp-181, 0.0, 0.0, 0x1.53500666160bbp-101, 0x1.90099d26ead36p-732,
     0.0, 0.0, 0.0, 0x1.ecc3c68686141p-190, 0.0, 0x1.5a9df1d020773p-89, 0.0,
     0x1.e96e12ae98825p-558, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a33c09c63e33fp-556,
     0x1.48355434d78afp-399, 0.0, 0.0, 0.0, 0x1.e963cc3cba497p-629, 0.0,
     0x1.2c1f78536d9cp-435, 0.0, 0x1.4f16fc2383038p-397, 0x1.f279775077eefp-604, 0.0,
     0x1.f34290ee14faap-324, 0.0, 0.0, 0x1.fd58a758cc871p-385, 0x1.284ca14fc6b93p-386,
     0.0, 0x1.fa5ca316df20ap-879, 0.0, 0.0, 0x1.30d9b0c1d77adp-979, 0.0, 0.0,
     0x1.bc832238fdea7p-412, 0.0, 0x1.4d3fc5d6a9819p-198, 0.0, 0x1.f0c6bf7d8b2eap-48,
     0.0, 0x1.023b70e18aa2dp-22, 0.0, 0.0, 0x1.3afa51057f582p-434,
     0x1.e236dc7150049p-468, 0.0, 0.0, 0x1.254cc495b8214p-351, 0.0, 0.0, 0.0,
     0x1.2c972aa1c68a4p-376, 0.0, 0x1.bd60d143aae78p-701, 0x1.e8bd8c2ff49a7p-105,
     0x1.a53e4c5a8fbbap-684, 0.0, 0.0, 0x1.c523bea1e4914p-898, 0.0,
     0x1.901326880674dp-830, 0.0, 0x1.54def3e482544p-262, 0x1.9b81c1d2a42a5p-501,
     0x1.71cf3cebde747p-546, 0x1.d3fba224c61bcp-657, 0x1.6f650f30408e1p-569,
     0x1.c41dd89757099p-772, 0.0, 0.0, 0.0, 0x1.498eded77f3d1p-730,
     0x1.bc819feb9b8f7p-625, 0.0, 0x1.37df15844a18p-504, 0x1.7e9b428bdc16ep-298, 0.0,
     0x1.8cdf1f88c0de4p-941, 0x1.5558cc885a9e8p-156, 0x1.08a709a853656p-161, 0.0,
     0x1.0cb785f27e067p-252, 0x1.cc26c16a0d166p-223, 0x1.c46b5181cf1c4p-1015,
     0x1.7f3294abefaafp-463, 0x1.b7d88ea2f3ddap-860, 0.0, 0x1.fa44c9bb45889p-441,
     0x1.d93d0ed6e186fp-120, 0x1.6aa2a79c3f707p-810, 0x1.b081b6584cecap-57, 0.0,
     0x1.3f87b6a9078d2p-265, 0.0, 0x1.2ca055f1fceabp-883, 0x1.e6e2d74d1cdb4p-1017,
     0.0, 0.0, 0.0, 0.0, 0x1.906bbaea5403ap-611, 0x1.0a5c06375a352p-951, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.44aed23c2b9e7p-467, 0.0, 0.0, 0.0,
     0x1.137820a789006p-253, 0x1.22664c935ba13p-768, 0.0, 0.0, 0.0,
     0x1.6876154667c41p-498, 0x1.423e323a4a813p-914, 0.0, 0.0, 0x1.7e0a49e16d0ecp-235,
     0.0, 0.0, 0.0, 0.0, 0x1.1ad7822de9b3ep-713, 0x1.e2e3d355ac07ep-337, 0.0, 0.0,
     0.0, 0.0, 0x1.409bbc0e1c6e6p-200, 0.0, 0x1.8a2c616505ca7p-12, 0.0, 0.0, 0.0,
     0x1.a9aee60569618p-265, 0x1.7d9e6e33d75a3p-225, 0x1.bb1c0d0cddbdcp-700, 0.0,
     0x1.d387b06805a2p-612, 0.0, 0.0, 0.0, 0x1.748acd4341558p-516,
     0x1.48271ee905a5fp-161, 0x1.2b32d6585ea41p-236, 0x1.de265b912d72p-22, 0.0,
     0x1.90eab24930919p-161, 0.0, 0x1.d41f0946340a6p-622, 0.0, 0.0,
     0x1.158d36da3ebbp-196, 0x1.7a352fde08d3cp-656, 0.0, 0.0, 0.0, 0.0,
     0x1.2b6d1b47037abp-747, 0.0, 0x1.07c93501518ddp-116, 0.0, 0.0, 0.0,
     0x1.cd2d7f54f96b9p-721, 0x1.3d8e5d967045dp-366, 0x1.47367b11bd1adp-393,
     0x1.9aee15511fdb6p-782, 0.0, 0.0, 0x1.80eed8859028fp-583, 0.0,
     0x1.a4ebc52f2274ep-250, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2aa821358dc5ep-449,
     0x1.42c8f6c0626afp-293, 0x1.d92e2a0572272p-382, 0x1.e47484c65fdf6p-685, 0.0, 0.0,
     0x1.e36823d6da023p-889, 0.0, 0.0, 0x1.c070f40e62b27p-758, 0x1.e0fa6abcbf801p-380,
     0.0, 0x1.61d9df1b7293dp-923, 0x1.8e466975534f5p-52, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7bfafd9b5c7dp-222, 0x1.c065702770bc2p-972, 0.0, 0.0, 0.0,
     0x1.abce1624b74d3p-912, 0.0, 0x1.4cbe31856ab71p-535, 0.0, 0.0,
     0x1.9186338e4ecfap-577, 0.0, 0x1.ba09d2872f8cap-656, 0.0, 0.0, 0.0, 0.0,
     0x1.fc622fed36a5dp-9, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1959b7f50262p-288, 0.0,
     0x1.e0c5b6ae8ab34p-339, 0.0, 0x1.556b626d69c31p-692, 0.0, 0.0, 0.0, 0.0,
     0x1.08a1f909027bep-67, 0.0, 0.0, 0x1.153943cf5a7f4p-934, 0x1.9dbb6a391d4f7p-963,
     0x1.09685a2edcb2ap-950, 0x1.d83f60459bf05p-281, 0x1.3a0144a2e70cdp-686, 0.0, 0.0,
     0.0, 0.0, 0x1.c113404db29b2p-1015, 0.0, 0x1.75d9a28e18a51p-602, 0.0,
     0x1.898645ce1841ep-703, 0x1.8fd992ed042aap-939, 0.0, 0x1.01248a73ca006p-441,
     0x1.3544884f72919p-599, 0x1.ef50201dd946dp-272, 0x1.379ae3de9fac3p-751, 0.0,
     0x1.de5b4642e46d8p-451, 0.0, 0x1.e3f116549e994p-880, 0.0, 0.0, 0.0,
     0x1.2e8588545822p-133, 0.0, 0x1.a35079701b881p-540, 0x1.bf069b9f8692ap-684, 0.0,
     0.0, 0x1.68f2c323bfcf9p-197, 0.0, 0x1.ec8c821a06b7ap-944, 0x1.d68e8255a6c58p-496,
     0.0, 0x1.92e2888805ce2p-126, 0.0, 0.0, 0.0, 0x1.db1bc57d23719p-255, 0.0, 0.0,
     0.0, 0x1.0be25cbaabf56p-150, 0.0, 0x1.95f0ffc0279ddp-265, 0x1.b0dc4c92b33e2p-869,
     0x1.93ea1c0da76dp-843, 0x1.c1e6b12522381p-937, 0.0, 0x1.c4d95d08ca22cp-788, 0.0,
     0x1.e647f943168b4p-737, 0.0, 0x1.98b18daf13d46p-110, 0x1.a746e284268fp-999,
     0x1.a40f5246b193bp-121, 0x1.3afe913d450cbp-419, 0x1.07b9c6bc935ap-498,
     0x1.3f4b193f95686p-444, 0.0, 0.0, 0x1.27b9aa53703a7p-214, 0.0,
     0x1.4be4e4c5eb2e9p-646, 0.0, 0.0, 0x1.76deba5231af6p-992, 0.0, 0.0, 0.0,
     0x1.1c2fca06af4eap-942, 0.0, 0x1.b5a07527f5fd6p-128, 0x1.172e0fbad4103p-936, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e58cf0164ca06p-596, 0.0, 0.0, 0.0,
     0x1.01bfe02818a4fp-824, 0x1.ce3ab25d63ecfp-525, 0x1.04f1aeb4dd1cep-333,
     0x1.750d94dfd42a8p-428, 0.0, 0x1.c2c0af48a7b9cp-781, 0.0, 0.0,
     0x1.595d95b281ed6p-609, 0.0, 0x1.ef74fbc7d2961p-796, 0x1.178d91eda7c93p-371, 0.0,
     0.0, 0x1.821ce29b7313p-945, 0x1.c0222bcb0e33dp-213, 0.0, 0x1.751727358fe6fp-1001,
     0x1.5230cb817461bp-187, 0x1.cf88466fbac94p-898, 0.0, 0x1.08172733dab74p-586,
     0x1.b97541a8502fdp-749, 0x1.5d1a152fe30bbp-204, 0x1.f1a494599b4a3p-292,
     0x1.8193d7c168c2p-120, 0x1.3aade75d0a3f3p-435, 0.0, 0.0, 0x1.c706c619c739ap-25,
     0.0, 0.0, 0.0, 0x1.d854462822f36p-934, 0.0, 0.0, 0x1.5b93b67621189p-685,
     0x1.275e105c745d9p-162, 0x1.53e61d11935cap-212, 0x1.1efac8615554bp-336, 0.0, 0.0,
     0.0, 0x1.4128e087deb43p-421, 0x1.1965b9a038cefp-882, 0.0, 0x1.fde51a8ffac49p-699,
     0x1.2604df8243779p-557, 0x1.1997f3028712fp-527, 0.0, 0x1.24804d600db6bp-794, 0.0,
     0.0, 0x1.ef82a3074a0b5p-989, 0x1.288a59d85b2e9p-921, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a847d3c6560bfp-497, 0.0, 0x1.e687b80856c16p-393, 0x1.1919c198eed5fp-434,
     0x1.1078f486298dp-477, 0x1.534baa389c5f5p-192, 0.0, 0x1.3b2cff3c15432p-207, 0.0,
     0.0, 0x1.899843947aaeap-153, 0x1.7d764a4d50278p-360, 0x1.2d22d24bbfbeap-270,
     0x1.d19598691529cp-252, 0.0, 0x1.0df01ae427a63p-14, 0x1.3b37aff149334p-298,
     0x1.3a89f8811b745p-35, 0.0, 0.0, 0x1.4d2a6b3ae4d83p-186, 0.0,
     0x1.367762e94991bp-440, 0.0, 0x1.be443466fffa1p-574, 0.0, 0x1.0158966aaa218p-877,
     0.0, 0.0, 0.0, 0x1.ba8cf03d03131p-644, 0x1.f528c0ebc86c9p-921, 0.0, 0.0, 0.0,
     0.0, 0x1.78e168c3fdc6cp-397, 0.0, 0x1.f20ca06029cacp-99, 0.0,
     0x1.3a1a0dd9f1927p-443, 0x1.1c6d049d7eb99p-503, 0x1.51a82ea24c903p-282, 0.0, 0.0,
     0.0, 0.0, 0x1.ede88f175c04cp-685, 0.0, 0x1.2915b253cf77ep-465, 0.0,
     0x1.f960e4ec9c75ap-1007, 0.0, 0.0, 0x1.0c1cd839682f9p-517,
     0x1.7cdc389413352p-989, 0x1.e38f08fb9b6dp-825, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c5d74476095a8p-57, 0x1.8a56cd4152b53p-889, 0x1.b9173664b01f8p-850,
     0x1.7a84e4b4e88bcp-608, 0x1.00deb97ad4ab6p-732, 0.0, 0x1.c23feb9879cd6p-973,
     0x1.c0d7a00d99411p-250, 0.0, 0x1.1ed6a934b6257p-251, 0.0, 0x1.b13729b1bd341p-839,
     0x1.8a4f82bee077ep-439, 0x1.b9d6a9b2548bap-852, 0x1.5987cbce3645p-953, 0.0,
     0x1.775da32962c8bp-878, 0x1.27e56eeeb086p-240, 0.0, 0x1.fe7f0e9f2f372p-78,
     0x1.225c2a92c76f2p-487, 0.0, 0x1.5df271f6a1f1bp-363, 0.0, 0x1.7fc891762d731p-27,
     0x1.aa7170fb39addp-693, 0x1.a2214c137c1cfp-280, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.38036b5074211p-388, 0x1.3795cb8f893d5p-671, 0x1.45a8ef8dcb87p-274, 0.0,
     0x1.8034121363365p-465, 0x1.58838e04afe7cp-580, 0.0, 0.0, 0.0, 0.0,
     0x1.4f2c2b11580d9p-674, 0.0, 0x1.d694fefeb6921p-102, 0.0, 0.0,
     0x1.d65e1eb321d4cp-994, 0x1.86bec8fad24a4p-544, 0x1.75cd93b3e5ceep-484,
     0x1.4f72c59c93bbp-779, 0.0, 0.0, 0x1.758305c8ce5f9p-954, 0x1.d2d1281bb8642p-750,
     0.0, 0x1.abee3a86dc9a7p-950, 0.0, 0x1.45683e13d35cfp-943, 0.0,
     0x1.e5338b327debdp-16, 0.0, 0x1.4d6b9a48ec2c1p-609, 0x1.1a7ad92909b8dp-729,
     0x1.ffba7275e93bp-36, 0.0, 0x1.21bae0e6accfcp-864, 0.0, 0x1.6eb95f22a4ca4p-1013,
     0.0, 0x1.163ff6ecf3351p-101, 0x1.fd96e0ea26ea9p-553, 0.0, 0x1.98b75c569bf8bp-885,
     0x1.3ed0d4b60f7dcp-464, 0x1.53412bdf898c1p-709, 0.0, 0.0, 0.0,
     0x1.70fb06bf2eddp-15, 0x1.e954755ac2fbfp-145, 0.0, 0.0, 0.0, 0.0,
     0x1.b67837ba8a705p-478, 0x1p0, 0x1.a0af31c7aec51p-122, 0x1.c70436b64b78bp-530,
     0.0, 0x1.7cb0ba41716b6p-213, 0.0, 0x1.480bf9865d0e5p-41, 0x1.4f0d932dfabap-37,
     0x1.2227c24eb307dp-164, 0.0, 0.0, 0x1.1881cce2fe008p-966, 0.0, 0.0, 0.0,
     0x1.fe671b84938eap-630, 0x1.ac4d6dd6a1f9fp-508, 0x1.9eb855e13a823p-490,
     0x1.ff17d286e1ec6p-942, 0x1.a61686c11997bp-93, 0.0, 0.0, 0x1.ab54c092ed762p-804,
     0x1.c355f504d1723p-822, 0x1.3c4b2fcbed4ecp-724, 0x1.c86c9fbd38d2fp-115,
     0x1.7b8ef835bd03fp-312, 0x1.d61e282f4e0a2p-231, 0x1.a6869adf0c0cfp-671, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.aca2b8918975ep-621, 0x1.ae1dd3d6a638bp-525, 0.0,
     0x1.274978a440504p-110, 0x1.7e16c9d2e6786p-143, 0x1.17b7ddda94a12p-819, 0.0,
     0x1.0d3db323cf3b1p-983, 0.0, 0x1.7190b7fd8b8b5p-256, 0x1.6110dfd8efe7ap-264,
     0x1.9d8ca2225d296p-573, 0.0, 0.0, 0x1.4f6ec243fd84ap-960, 0x1.ca7abab062876p-114,
     0x1.9b1ff85fa0e69p-508, 0x1.aa84d19ad6892p-548, 0x1.c4d81a024ed4ap-496,
     0x1.f542d5b49c06dp-765, 0x1.2c4f715be3a9fp-666, 0.0, 0x1.06822ec1f06d8p-247,
     0x1.dbd2ac178e33p-798, 0.0, 0x1.e9cc13ee15e9ep-865, 0.0, 0x1.67cd084021f4ap-717,
     0x1.efee3fca7685ep-242, 0.0, 0x1.3edc662b8fa4fp-95, 0x1.df00c2a4b923bp-147,
     0x1.1d73362d4b856p-748, 0.0, 0.0, 0x1.c8d8deff3a2cp-664, 0x1.06038bef07f6bp-445,
     0x1.ae5b019337958p-90, 0.0, 0.0, 0.0, 0.0, 0x1.1aae1c97dd652p-47,
     0x1.085b6e46ab5c3p-463, 0x1.69d0b3702a4e3p-377, 0.0, 0.0, 0x1.0553e176ceaep-916,
     0.0, 0.0, 0x1.61475b92b49cfp-955, 0.0, 0x1.bdbc26f8b2c2bp-773,
     0x1.1d4d346cc2deep-680, 0x1.c1b3ae30da288p-672, 0.0, 0.0, 0x1.1777e625d975dp-657,
     0x1.3cd758a4269bdp-489, 0x1.2f3af9340457ap-305, 0x1.3a14b5896749cp-121, 0.0,
     0x1.ba6ffb351a327p-285, 0x1.8dfd5408bba14p-209, 0x1.0f5c4bc2754cdp-666,
     0x1.3b2d236216055p-556, 0x1.c45e4ec775a0bp-17, 0x1.4c5c64edbf453p-132,
     0x1.0387eda88c90bp-660, 0.0, 0x1.942b727ce875cp-253, 0x1.5f125926b05f7p-345,
     0x1.1d284cff5acb8p-683, 0.0, 0x1.54888577b869cp-116, 0x1.8755979184ef6p-1006,
     0.0, 0x1.7537788b827ffp-724, 0x1.3c678678a39b8p-633, 0x1.f01249960c59cp-954,
     0x1.d687972fc46c6p-656, 0.0, 0.0, 0.0, 0.0, 0x1.c82ac0a648c53p-611, 0.0,
     0x1.886aa343232fp-588, 0.0, 0x1.1a9ff5de98f86p-666, 0.0, 0.0, 0.0, 0.0,
     0x1.8dc839f7519c2p-505, 0x1.16c6eebea2a4p-222, 0.0, 0.0, 0x1.1348319cc26fap-252,
     0x1.78ea02ea1bd5p-726, 0x1.d95d3f7b02147p-141, 0.0, 0.0, 0x1.36175c46e5b6fp-128,
     0x1.0e24cc088454fp-189, 0.0, 0x1.80f96560e472p-70, 0.0, 0x1.60274764d3c95p-497,
     0.0, 0.0, 0.0, 0.0, 0x1.c7e852f817571p-227, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e1eb0169deccp-80, 0.0, 0.0, 0.0, 0x1.f848632ee088dp-972,
     0x1.18d2f9d250b21p-602, 0x1.eaf80a6883352p-539, 0x1.6698376f6aa0fp-16, 0.0,
     0x1.35f05ef848e47p-761, 0x1.0c1ee5782ea52p-1000, 0.0, 0x1.1df659ade378cp-266,
     0.0, 0x1.2e3a593d666bdp-369, 0x1.44b762b841da2p-139, 0x1.838fc7a17ba3fp-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58669eb736944p-78, 0x1.6a030489e4f03p-443, 0.0,
     0x1.e78d2dd058236p-501, 0.0, 0.0, 0.0, 0x1.1c93f3e093528p-216, 0.0, 0.0, 0.0,
     0.0, 0x1.06df482080a31p-32, 0.0, 0x1.7eb676b352b34p-289, 0.0,
     0x1.26d2d804d8ad7p-909, 0x1.76f1bc036ee7cp-962, 0x1.aa0cb5470c0d8p-235, 0.0,
     0x1.104fdbef390ebp-652, 0.0, 0x1.982cd9014e54ap-534, 0x1.1731fcc667206p-271,
     0x1.35cfa0eba7a3p-139, 0.0, 0.0, 0.0, 0x1.d957c19d8b55ep-904, 0.0, 0.0, 0.0,
     0x1.f852ca15cebdep-876, 0x1.2a1172083dac5p-973, 0x1.363ae2e1258d6p-853,
     0x1.29ef3618f9216p-96, 0x1.f255bd3ca48fbp-74, 0.0, 0x1.a487c062ea043p-643,
     0x1.ccb18e2b7a657p-917, 0x1.dd3b9a919fcf9p-97, 0.0, 0x1.ef3128631ba44p-107,
     0x1.7274257b17e3bp-497, 0x1.63561e203158dp-756, 0.0, 0.0, 0x1.7d776198bc0bp-720,
     0x1.c3346a6f34f8cp-440, 0.0, 0x1.e622e192feebep-60, 0x1.cfe80e95f6894p-375, 0.0,
     0x1.6caeeb0d641dcp-811, 0x1.6a4ae6defd011p-697, 0.0, 0x1.49239759de599p-674,
     0x1.ee6efbc4a9fbcp-207, 0x1.6598f746d7fbbp-491, 0x1.382f6695501adp-229,
     0x1.203f5953b5f74p-530, 0x1.dca5628ee8657p-17, 0.0, 0.0, 0x1.98937037fbec7p-125,
     0x1.d8aa8322e9a7fp-617, 0.0, 0x1.0039f4d192f3ap-295, 0x1.59213390bb614p-357, 0.0,
     0.0, 0.0, 0x1.2cdbc75a277b3p-551, 0x1.4ddfe42666001p-390, 0.0, 0.0,
     0x1.4a40a21941c01p-479, 0.0, 0.0, 0x1.a41b2a2df540ep-230, 0x1.d4aa1cb890991p-289,
     0.0, 0x1.9a7dba0ed801bp-485, 0.0, 0x1.0ad6c32927c6ap-61, 0x1.cda6a4c9ffd56p-148,
     0x1.71e804c904725p-714, 0.0, 0x1.779b6c3882089p-692, 0.0, 0.0, 0.0,
     0x1.2ca56f481ce12p-683, 0.0, 0x1.87213343963b7p-329, 0.0, 0.0,
     0x1.4f7184efad612p-933, 0.0, 0.0, 0.0, 0x1.1de8053405a8cp-176, 0.0,
     0x1.b4343ea18b497p-813, 0x1.e97105da79bbbp-424, 0x1.ca37277ab72ap-791,
     0x1.8e67ac43e15d1p-614, 0x1.4ec3691b17714p-293, 0.0, 0.0, 0x1.88d0443f2f0e8p-359,
     0.0, 0.0, 0.0, 0x1.1da28e2a6dc25p-337, 0x1.06ac186b5bce5p-655,
     0x1.a5155e8cc884ap-692, 0x1.ecac3774c85bep-103, 0x1.3238c2ed618d6p-782,
     0x1.71f3017483d01p-988, 0x1.fafefb9c0cfcep-353, 0.0, 0x1.8283ca9c4256ep-304,
     0x1.2ab255f6cb035p-462, 0.0, 0.0, 0x1.0a2feb458e153p-207, 0x1.12512368325f6p-831,
     0x1.baf283d4019bp-427, 0.0, 0x1.2541f6324da5ap-330, 0.0, 0.0,
     0x1.5a8a0b43cf349p-532, 0x1.ca03fed47e34p-422, 0x1.a085a7ab28787p-327, 0.0,
     0x1.1a0fc31dd49b6p-333, 0.0, 0x1.b7fb1d5b16a23p-170, 0.0, 0.0,
     0x1.d6ebe285d16a3p-176, 0x1.ef569df2bcd9cp-1009, 0x1.81d9cb51be857p-544, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.924fdba6eb4e1p-560, 0.0, 0x1.a2658077fe835p-115, 0.0,
     0x1.2ecc961324e11p-84, 0x1.d6fd6e9d2d79dp-353, 0x1.cbf5178be3815p-255,
     0x1.3a1583a822798p-855, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1e2559b395d8cp-369, 0.0, 0x1.b3ab85d4a937fp-26
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
            tmp1 = Sleef_finz_sind1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sind1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sind1_u10purecfma bench acc %la\n", global_bench_acc);
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
