/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundd4_kvx.c --function Sleef_roundd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.a06a04289bd29p-528, 0x1.48b54ca2c5313p-545, 0.0, 0.0,
     0x1.44b99050ac14ep-285, 0x1.001bfe0a371eep-806, 0x1.20ebd97c81377p-242, 0.0, 0.0,
     0.0, 0x1.0d02d688e70ebp-906, 0.0, 0x1.f13d9c3a09394p-527, 0.0,
     0x1.9a443b8451469p-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e77db1abdef24p-572,
     0x1.789a2ff05018fp-687, 0.0, 0x1.a354d620a82cap-599, 0x1.d844eaec43231p-1006,
     0x1.63a847bc0d853p-495, 0.0, 0.0, 0x1.cec1922ced81p-733, 0.0,
     0x1.2cfc7155f88e3p-840, 0.0, 0.0, 0x1.7a6adf8f234dp-707, 0.0, 0.0, 0.0,
     0x1.0f0b2bad61dap-20, 0x1.98dcaa9eaff7cp-783, 0.0, 0.0, 0x1.643d695dcb905p-167,
     0.0, 0.0, 0.0, 0x1.0dccd6fe6b13fp-251, 0.0, 0.0, 0.0, 0x1.64306a4c94e2ap-595,
     0.0, 0x1.38148048344fcp-116, 0x1.0ce381bdaad07p-504, 0x1.190cb0a92c80bp-912, 0.0,
     0.0, 0x1.16cabb8956c47p-554, 0x1.ee128c661ea99p-736, 0.0, 0x1.3eea33cc4389fp-767,
     0x1.3b991153faeep-460, 0x1.325cda6469c63p-311, 0x1.bf3c0b83d2ba8p-916, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5ae107de7f6c1p-20, 0x1.da8e7b567e5a6p-681,
     0x1.7aabaa54b79ep-346, 0x1.70efc5343b694p-766, 0.0, 0x1.ff7da5bc2d311p-378,
     0x1.3af257fd5e763p-905, 0x1.5a5d03d207bd4p-655, 0.0, 0x1.18ba04fbb2039p-156,
     0x1.a93793ba56d93p-143, 0.0, 0x1.af849424e7b97p-251, 0.0, 0x1.ae0502db05209p-805,
     0x1.73ee5a5276364p-912, 0x1.0928c3f029919p-992, 0.0, 0.0, 0x1.ed10736e3085bp-207,
     0x1.81a270ca6aa5ap-589, 0.0, 0.0, 0x1.28f91ac73851ap-490, 0.0, 0.0,
     0x1.4f71bcc144b72p-816, 0.0, 0.0, 0x1.1f94dee26ab3bp-158, 0x1.22251a48d9f02p-958,
     0x1.bda46edbf22f1p-260, 0.0, 0x1.0005ad2f2abe8p-714, 0.0, 0.0,
     0x1.0201e81a49149p-597, 0x1.dfd3f2a9fe0f6p-362, 0x1.59dfa2b6a0ed7p-810,
     0x1.a01791361c73p-647, 0.0, 0x1.0e1edce605d1ep-1015, 0x1.2971d825053fap-677, 0.0,
     0.0, 0.0, 0x1.70902303eee66p-11, 0x1.c9c3816ffdbebp-68, 0.0, 0.0,
     0x1.103a73688b3ecp-389, 0.0, 0x1.7ae432369f09ap-536, 0.0, 0x1.7167f71a4a131p-562,
     0.0, 0.0, 0x1.1437ab5cb96a1p-526, 0x1.2a6ecdbb4bf9ap-111, 0x1.7f9f4f2e4b319p-942,
     0.0, 0x1.f9253e39eac78p-650, 0.0, 0.0, 0x1.9b8d075ca291cp-408, 0.0, 0.0, 0.0,
     0.0, 0x1.f01d98a5c89c2p-56, 0.0, 0.0, 0x1.2cdbc5672890fp-853, 0.0, 0x1p0,
     0x1.53faa8e4d765bp-343, 0x1.797d82bc38ecap-504, 0.0, 0.0, 0.0, 0.0,
     0x1.0fd580c0ed81ap-945, 0x1.e71f7a6bf5528p-99, 0x1.3ca3b0f4a7046p-311,
     0x1.c98f2fd1bbd3fp-764, 0x1.b2008afdcce12p-687, 0.0, 0.0, 0x1.c6ead13c846cfp-315,
     0x1.053de57d01921p-878, 0.0, 0.0, 0x1.c7d5c8d702052p-28, 0x1.bcf1bb20ad6dcp-731,
     0x1.0da463ebb4387p-480, 0.0, 0.0, 0.0, 0x1.ca76244006d56p-580,
     0x1.a1413e28c3ef7p-693, 0x1.83dc9b39cb4ffp-38, 0x1.6cb9b3ef1a427p-340,
     0x1.328910f13c76fp-199, 0.0, 0x1.795a5d2c28e73p-74, 0x1.86cd2e0e060b5p-450,
     0x1.052e896bbe6f6p-478, 0.0, 0x1.32380a6684b34p-579, 0.0, 0x1.ff2edb409983cp-553,
     0.0, 0.0, 0.0, 0x1.4c665b16aa155p-678, 0x1.4213fc65ac3f7p-72, 0.0,
     0x1.709c3c877c40bp-172, 0.0, 0x1.43f8c8ea0b2e9p-696, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c5dc1b78a5193p-326, 0.0, 0.0, 0x1.c3d8f11782214p-903, 0.0,
     0.0, 0.0, 0.0, 0x1.8de744c4a969ap-100, 0.0, 0x1.b7b99c45f1975p-332, 0.0, 0.0,
     0.0, 0x1.9431a8af213f5p-249, 0x1.3ae45f39f14d2p-582, 0x1.dce703d9f0565p-824,
     0x1.9716533f1a98p-495, 0x1.1e2197888ed15p-199, 0.0, 0.0, 0.0, 0.0,
     0x1.ca0b0ca18479fp-52, 0x1.cb33bb56b471cp-44, 0x1.1f4632c302dc5p-188, 0.0, 0.0,
     0x1.fec61c294147cp-633, 0x1.48da080b809c8p-317, 0.0, 0x1.f4bc2fc59254dp-347,
     0x1.32796d93b73bcp-399, 0x1.44d10450448cbp-911, 0.0, 0x1.81cbcc1a4d101p-836, 0.0,
     0.0, 0x1.bd5d7ad8e052dp-337, 0x1.1903b2027675cp-537, 0.0, 0.0, 0.0,
     0x1.9d0371279e0dep-959, 0.0, 0x1.1ee622f60b787p-712, 0.0, 0.0, 0.0,
     0x1.158d90c173513p-648, 0.0, 0.0, 0.0, 0x1.b8a659152d33dp-852, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a6c376fde7097p-110, 0.0, 0.0, 0x1.2b62bc1f2aecep-789, 0.0,
     0.0, 0x1.3f3e6ced5b703p-229, 0.0, 0.0, 0x1.153f93a5eff17p-906,
     0x1.fbf7b38611839p-434, 0.0, 0.0, 0.0, 0x1.97d0121724383p-109, 0.0,
     0x1.f9fd36f8562cep-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9c71d1998f87p-308, 0x1.3fa21e4a89a12p-791, 0.0, 0x1.12c96a588f75ep-673, 0.0,
     0x1.423e3abc1cdb2p-698, 0x1.40d62aa5db882p-474, 0.0, 0x1.32ee64cab2dcp-997,
     0x1.d20c12008fadp-579, 0x1.42894ea51148ap-453, 0.0, 0.0, 0x1.8a7bfc3ee558dp-953,
     0x1.60c8b44e51d7ap-253, 0x1.ec1146c371672p-632, 0x1.c15c4031a7957p-711,
     0x1.79f83f9289d9dp-228, 0.0, 0.0, 0x1.01cf13102babcp-99, 0x1.91b32f9f68dc6p-1016,
     0.0, 0.0, 0x1.6912674f4648dp-924, 0.0, 0x1.d4fff4225c992p-440, 0.0, 0.0,
     0x1.4a39a4cb6b9c7p-466, 0.0, 0.0, 0.0, 0x1.79292ff4a7a94p-278,
     0x1.f7f8eac647bfap-532, 0.0, 0.0, 0.0, 0.0, 0x1.7b2f088fd39eap-321,
     0x1.c457e9673b722p-1011, 0x1.c42319de2f71bp-357, 0x1.83b1e43117e05p-421, 0.0,
     0x1.771de22bb2ae5p-146, 0x1.db4307e82d5e5p-214, 0x1.dde4edfc08747p-380,
     0x1.ba05329b74d56p-780, 0x1.43198daa39e11p-396, 0.0, 0.0, 0.0, 0.0,
     0x1.9807a66e37755p-189, 0.0, 0x1.e13068bbfa2dp-660, 0x1.73b54547b2ac7p-545, 0.0,
     0x1.b9a030fb4b657p-209, 0x1.3994392c969a2p-886, 0x1.d5d35937f455ep-531, 0.0,
     0x1.ad85167720c5p-439, 0.0, 0.0, 0x1.881c62ad2fd5bp-907, 0x1.317176089ea81p-921,
     0.0, 0.0, 0x1.6eba21bf4fbbdp-10, 0.0, 0.0, 0x1.186bc83c5e535p-550,
     0x1.aee42e0e7dacep-657, 0x1.03ca5d43fee9dp-646, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de11dbf0479bfp-616, 0x1.7754ef01e103fp-604, 0x1.08166321b35a5p-645,
     0x1.f44feb41dc5adp-716, 0x1.f80c703ec3263p-978, 0x1.eb5cdac82ccabp-893, 0.0,
     0x1.4ccfc4a3b0067p-570, 0x1.5532808288186p-440, 0x1.cdeb28af9bf8ap-271,
     0x1.f55044699029ap-110, 0x1.9842f33e2f8eep-513, 0.0, 0x1.6ca511b7ad0e6p-276,
     0x1.01a3ca7c49977p-698, 0x1.38360fbff5d09p-74, 0x1.efa38fb5a309ep-928,
     0x1.e501399107372p-771, 0.0, 0.0, 0x1.7a14704b5840bp-988, 0.0, 0.0,
     0x1.fe0da87241b8cp-423, 0x1.1deec12a5c35fp-258, 0.0, 0x1.f168fd0063544p-106, 0.0,
     0x1.6cd3069313c26p-770, 0.0, 0.0, 0x1.33c29bfecbc36p-466, 0.0,
     0x1.7cc12d6bd2a3cp-721, 0.0, 0.0, 0.0, 0x1.05066eb429fe6p-921,
     0x1.8158d8e56155fp-467, 0.0, 0.0, 0x1.a4f98631a39fp-210, 0x1.cd57f3bcf37fdp-75,
     0x1.e452d0bb53c36p-300, 0x1.eadb7dd4a878fp-499, 0x1.9a6254f2d2f21p-2,
     0x1.0d4627a6566c9p-378, 0x1.79cb7617a9366p-883, 0.0, 0x1.c75419eed20a9p-182,
     0x1.a380e4251fbabp-300, 0x1.6f02abb6beffap-515, 0x1.e71cfe901798bp-480,
     0x1.3dab7b33ddd2bp-695, 0x1.01fa31e6a10edp-438, 0x1.b21337adf2355p-916, 0.0,
     0x1.4dc062d428365p-657, 0x1.f9c49bb330e74p-337, 0.0, 0.0, 0.0,
     0x1.1b99062394fap-89, 0x1.f2b5d29bcbda3p-994, 0x1.01d5f1294aef7p-916,
     0x1.70423e71d909ap-336, 0x1.19540f817aae6p-57, 0x1.742e8c6c31549p-819, 0.0,
     0x1.752d21097c151p-982, 0x1.586f926d1e519p-481, 0x1.2d09c70a26ba1p-447,
     0x1.7eb31b32dc419p-607, 0.0, 0x1.cfebd90caa1e7p-176, 0.0, 0.0, 0.0,
     0x1.562e321f45f92p-50, 0.0, 0.0, 0x1.7201da3bc9e3ap-685, 0x1.7c1be22ce127cp-549,
     0.0, 0x1.ea0212e6d3253p-1013, 0x1.fc0625328b846p-812, 0.0, 0.0, 0.0, 0.0,
     0x1.5074890fc777dp-704, 0x1.0c16c2cdbe9cp-860, 0x1.08d87af7ac679p-1015, 0.0, 0.0,
     0x1.c178dcf272601p-812, 0.0, 0x1.4691c5a8d3b26p-495, 0x1.9818e937f171ap-532,
     0x1.6e6c91278e9a2p-531, 0x1.5aec495acf6cap-320, 0.0, 0.0, 0.0,
     0x1.8b83b55e0a445p-231, 0.0, 0x1.40a16962934e8p-64, 0.0, 0.0, 0.0, 0.0,
     0x1.bddcf8d5a301bp-805, 0.0, 0.0, 0.0, 0x1.111af1b39908ep-425,
     0x1.6ec7c90ce38bcp-586, 0.0, 0x1.06df82c8e42f7p-612, 0x1.01e1e02e61d0bp-500,
     0x1.c81f086c32889p-767, 0.0, 0x1.ac8ac002f62ffp-729, 0.0, 0x1.52dad7e40e319p-665,
     0.0, 0.0, 0x1.c18ba5cc04d72p-789, 0.0, 0.0, 0x1.b6eaaba0069bdp-656, 0.0, 0.0,
     0x1.ca08ee549f812p-486, 0x1.43ac939c057b3p-772, 0.0, 0.0, 0x1.fb736ee60381cp-76,
     0x1.03944185d7d4dp-345, 0x1.c3c70eca50353p-479, 0.0, 0.0, 0.0, 0.0,
     0x1.ff25fe68bd0ddp-972, 0x1.69de39fed0dcdp-613, 0x1.53ab421c84167p-964, 0.0,
     0x1.0e7f55873ece5p-673, 0x1.8f1b32972b3fdp-243, 0.0, 0x1.a8e8181ca2313p-938, 0.0,
     0x1.9f8b86cc833f4p-77, 0x1.b7ac8623da817p-719, 0.0, 0x1.48b38a84ae15bp-267, 0.0,
     0x1.c7fe391823931p-208, 0x1.6f957f9d8c204p-400, 0.0, 0.0, 0x1.4d2fa8f845cebp-563,
     0x1.56afd8c34ced1p-901, 0x1.cbbf765a11c2ap-7, 0.0, 0.0, 0.0,
     0x1.cd6eb295a3882p-512, 0x1.e573dc0bb8133p-891, 0x1.92d7b56da277p-380, 0.0, 0.0,
     0x1.f4fab1961be6dp-833, 0.0, 0.0, 0.0, 0x1.d554e13901c1dp-214,
     0x1.ccbf87f1ac40ep-816, 0.0, 0.0, 0.0, 0x1.5c68a92a65e7ep-567, 0.0, 0.0, 0.0,
     0x1.071d7367853acp-180, 0x1.ff224e9a2c65ap-598, 0.0, 0x1.80fc0876af213p-672,
     0x1.ca03a7d2b8d42p-251, 0x1.0d474763f806ap-521, 0.0, 0x1.e686932bd2abap-459, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f78e3ce8e372bp-777, 0.0, 0x1.df1a3be53901cp-983,
     0x1.4e61fd911b1e7p-952, 0x1.09b11309447a4p-794, 0.0, 0x1.1afa00135deep-329, 0.0,
     0.0, 0x1.4dc01b6fd83abp-841, 0.0, 0.0, 0.0, 0x1.f93f73c81bf3p-403, 0.0,
     0x1.98a7cf80f2f91p-694, 0.0, 0x1.792e4e7758a95p-154, 0.0, 0x1.52290bc1c4ec2p-114,
     0.0, 0.0, 0.0, 0.0, 0x1.054737345ef89p-626, 0.0, 0x1.6c095c3fd777fp-368, 0.0,
     0x1.ecefbba1879b8p-311, 0.0, 0x1.e517e968f88d3p-357, 0.0, 0.0,
     0x1.9d5c066d8f20ap-340, 0.0, 0.0, 0x1.6eb34e0d61eb9p-596, 0x1.3cab627d38196p-464,
     0x1.45e8de38c8288p-98, 0x1.8f3efede88ae8p-610, 0x1.930f9a28293a2p-874,
     0x1.bacba51623e7dp-759, 0.0, 0.0, 0x1.14cd6883b07dcp-860, 0x1.6e2a16587f658p-135,
     0x1.06f14029be58dp-581, 0x1.61f418ecadc2dp-984, 0.0, 0x1.3bb6c8ad22991p-152,
     0x1.2f2a357615503p-724, 0x1.1245b66432a91p-356, 0.0, 0.0, 0x1.fc044a878f79fp-893,
     0.0, 0.0, 0x1.29abb5aa6a4aap-584, 0x1.85ba67ae33c1cp-483, 0.0,
     0x1.8686cff87adc2p-137, 0x1.524a8ddbb032dp-907, 0.0, 0.0, 0.0, 0.0,
     0x1.937ab2c063dd2p-890, 0.0, 0x1.dfece234f3878p-634, 0.0, 0.0,
     0x1.23e1a40a07b8dp-993, 0.0, 0x1.6718084bdbcd5p-296, 0.0, 0.0,
     0x1.f1c4a0ed953c2p-111, 0.0, 0x1.f4354a4e20e87p-733, 0x1.ef6bb3b859d82p-492, 0.0,
     0.0, 0x1.f7230239c5ca5p-365, 0x1.0d8c44f989ff2p-295, 0x1.7d5e13fc4cfe1p-866,
     0x1.c89e1fe742fa5p-661, 0x1.26f7140ded047p-858, 0.0, 0.0, 0x1.4a4d20668fc01p-95,
     0x1.0a313aede2ec5p-993, 0.0, 0.0, 0x1.8728620abc534p-292, 0x1.b222afec4f9c4p-383,
     0x1.702fa0d88ca7bp-229, 0.0, 0x1.6af85c513e5b4p-540, 0.0, 0x1.34bf8b5710d01p-470,
     0x1.3a124dd206002p-824, 0.0, 0.0, 0.0, 0.0, 0x1.33284411c88f3p-361, 0.0, 0.0,
     0x1.0abf96c5f5357p-622, 0x1.120643639078ap-612, 0.0, 0.0, 0x1.026bc57f0a69p-747,
     0x1.d35ac4355e02ap-742, 0x1.c05069dd7aec4p-385, 0.0, 0x1.6b7de7b0198c4p-797,
     0x1.22e2964fe0d77p-463, 0.0, 0.0, 0x1.494bde869e693p-551, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2f099c0d5cec6p-351, 0.0, 0.0, 0x1.d380b5937a365p-567,
     0x1.6cd42cd362f5bp-281, 0x1.fcf75205fc479p-231, 0x1.a4e5f4f323586p-467, 0.0,
     0x1.d396d62f5724bp-447, 0.0, 0.0, 0.0, 0.0, 0x1.bd80c7755ae98p-16, 0.0, 0.0,
     0x1.0bad8a8362d81p-315, 0x1.27c30fa2c2b0fp-294, 0.0, 0.0, 0.0, 0.0,
     0x1.260b2996a9447p-421, 0x1.47148ef9723c2p-422, 0x1.a4c57d062b40fp-367,
     0x1.48b784c29bff9p-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ab534e1f7b49p-71,
     0x1.a5bb1e33b51d8p-620, 0x1.b6a5bd4ba01a2p-729, 0.0, 0x1.69e9747bc2f47p-503, 0.0,
     0x1.81f7dba6a108ap-435, 0x1.0e287118a44cfp-161, 0x1.73eba0e76cb22p-267,
     0x1.e6f1e1aa9a0bep-743, 0.0, 0x1.ad9dc84010905p-361, 0.0, 0x1.f97afdc657fe5p-11,
     0x1.2e6e7c46437bp-271, 0.0, 0x1.d7307bdf46583p-733, 0.0, 0.0,
     0x1.721dd27a95b44p-738, 0.0, 0.0, 0.0, 0x1.aee21ac4d28d5p-117,
     0x1.1c7151692a769p-533, 0.0, 0x1.26c6eca0f57a3p-901, 0x1.306e3b595bcbap-663,
     0x1.5f0ca877f6345p-931, 0x1.626e250a9bb36p-704, 0x1.4fd164dbdf926p-324, 0.0, 0.0,
     0.0, 0x1.2d6f210cefd8bp-763, 0x1.8f183e98f9fccp-50, 0.0, 0x1.2bd4cc546eab1p-737,
     0.0, 0.0, 0.0, 0x1.1d13f767eddd5p-287, 0.0, 0.0, 0x1.7fd8429003b23p-14, 0.0, 0.0,
     0x1.7ec38d8d6f827p-170, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0976c6aba5fabp-792,
     0x1.c2174804de07p-913, 0x1.2740b0f68a82ep-517, 0x1.7ee2ad9ae941cp-612, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8a47f21e8bf1bp-223, 0.0, 0.0, 0x1.cd8146f252037p-959, 0.0,
     0x1.857d3b28209e6p-16, 0.0, 0.0, 0x1.05227e40557fdp-703, 0.0, 0.0, 0.0, 0.0,
     0x1.c5ad943391a3cp-502, 0x1.8854202f6a56ep-986, 0x1.54fe7e8d66ce8p-934, 0.0, 0.0,
     0.0, 0x1.e11b56f7a80c4p-691, 0.0, 0.0, 0.0, 0x1.bc84e68b649b6p-938,
     0x1.d70f706921647p-112, 0x1.bfe18858bbc58p-746, 0x1.6ce71771a30d7p-82, 0.0,
     0x1.157b885e85c4dp-871, 0.0, 0.0, 0.0, 0.0, 0x1.6903fe5829038p-24, 0.0,
     0x1.02271b95cc4c7p-879, 0x1.970016bfe2354p-722, 0.0, 0.0, 0.0,
     0x1.d464d70b4ef0dp-923, 0.0, 0.0, 0.0, 0x1.e432571610defp-783, 0.0,
     0x1.49bb42849934fp-671, 0x1.d1a7a32cac72p-57, 0.0, 0x1.662f3cf5c1fdfp-255,
     0x1.e261e7ece50a4p-200, 0x1.d4787bfbfc14p-526, 0x1.ae30585f6e40bp-494, 0.0,
     0x1.6283754cce5f4p-386, 0x1.3b2f7fe2e977p-887, 0.0, 0x1.a4ccedb84876p-33,
     0x1.a0fd05c79ab82p-425, 0x1.83adfb3639e69p-322, 0x1.f4c808c40a815p-666,
     0x1.aee43dce69cc7p-844, 0.0, 0x1.5651253c7106p-772, 0x1.9a71aab5d3bf7p-561,
     0x1.ef4bddbfe8a59p-712, 0x1.85745c40e2a2bp-605, 0.0, 0.0, 0x1.a8dfd8ecb2648p-470,
     0x1.ac166e78a1b86p-141, 0x1.ec9d9f3967915p-897, 0.0, 0.0, 0.0, 0.0,
     0x1.4b8d84c14a1fbp-815, 0.0, 0x1.9eb3c635bcd0ep-667, 0x1.34fc3d4c7f3cp-310,
     0x1.5c639de58a51fp-86, 0x1.c71865defbd22p-448, 0x1.571146ef33a7p-407,
     0x1.587772eff86ddp-107, 0.0, 0.0, 0x1.97468b1eb690bp-771, 0.0, 0.0,
     0x1.a19690bcf7f62p-626, 0x1.5b92684432fd3p-630, 0.0, 0x1.e870e7967877bp-846,
     0x1.70af463174f3cp-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39c98cfe0fa1dp-357, 0.0,
     0x1.a9f1a90023329p-510, 0x1.87119ee6f9fap-482, 0.0, 0.0, 0.0,
     0x1.45d179717d3ddp-979, 0x1.03b23d505b22bp-782, 0x1.bca23899e6d93p-864, 0.0, 0.0,
     0.0, 0.0, 0x1.53af23a61dc6bp-150, 0x1.b81fdbb2e54c8p-469, 0.0, 0.0, 0.0, 0.0,
     0x1.dcec6f03c3b2cp-997, 0.0, 0x1.1b279e5415722p-781, 0.0, 0x1.bb0db671f4dafp-118,
     0.0, 0.0, 0.0, 0.0, 0x1.802e5eda7af0ap-1002, 0x1.643e241b2e977p-584, 0.0, 0.0,
     0.0, 0x1.91f690b80e7cap-540, 0x1.8eb5878a6bf0fp-650, 0x1.e06afccf75d17p-866,
     0x1.1432ef6312e5ep-670, 0.0, 0.0, 0x1.bdb85eefdeedfp-43, 0.0,
     0x1.cadf00e018352p-3, 0x1.54cc3ae5e1416p-568, 0x1.44a2ed92f97dfp-136,
     0x1.72b74e089d27ap-17, 0x1.888e37e39d348p-577, 0.0, 0x1.150b79122914cp-775, 0.0,
     0x1.16057f80babc9p-366, 0x1.6df1fd4d66418p-262, 0x1.71b0d8e089cf6p-1005,
     0x1.fd72458bb3bf9p-994, 0.0, 0.0, 0x1.bf6926d931fb8p-780, 0x1.39d2927305e7ap-651,
     0x1.6b34327891669p-786, 0x1.cfdf1600afc98p-505, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97eb7255b5323p-414, 0x1.28f6c5bdd8239p-691, 0.0, 0x1.79977539a0cb2p-260, 0.0,
     0x1.031186c82798fp-82, 0x1.8f9d32d045fa6p-253, 0.0, 0x1.f73a5a295457fp-16, 0.0,
     0x1.2f89d8169ff95p-982, 0.0, 0.0, 0x1.4398b315e240bp-47, 0x1.7e878ea9c0477p-730,
     0x1.7699980a9b76bp-831, 0x1.aa4631d98956p-127, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88ac9f23a93c2p-468, 0.0, 0.0, 0.0, 0x1.60875478bd723p-454, 0.0, 0.0, 0.0,
     0x1.37568475b1bcbp-674, 0x1.7a51edd09a1d5p-636, 0x1.1010abb1c10f4p-545,
     0x1.d7e76ab52b8dfp-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42d1815d9f443p-46, 0.0,
     0x1.8e21e6d3d9356p-591, 0x1.76cf0d5a7888cp-325, 0x1.2933fbf0bb8f7p-66,
     0x1.22dceac23fb2dp-814, 0x1.9132e112575f1p-474, 0x1.a8feca50ab1abp-691, 0.0,
     0x1.c7263c812487ap-331, 0x1.d026f0e2dc01ep-500, 0x1.e637e09a9f78ap-552,
     0x1.431d613f3315dp-621, 0x1.ceb794a5a240bp-272, 0.0, 0x1.f0d0034da1badp-824,
     0x1.1a55fb23ca0c3p-448
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
            tmp1 = Sleef_roundd4_kvx(tmp0);
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
    printf("Sleef_roundd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_roundd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
