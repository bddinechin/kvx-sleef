/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log10.c --function log10 --headers math.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.b11611c829f26p-21, 0x1.3558e4a02d11bp-452, 0.0, 0.0,
     0x1.6bd27fcec1ddap-352, 0x1.99906d06fa2a1p-436, 0x1.9b2fa48da5abap-9,
     0x1.af3eaadbdc19p-727, 0.0, 0x1.450c439fffe0fp-751, 0.0, 0.0,
     0x1.3f9a291e84a22p-301, 0.0, 0x1.959f566cfb194p-796, 0.0, 0x1.beba011dc0149p-125,
     0.0, 0x1.6df4c52f3b5a6p-156, 0x1.403492947aa22p-803, 0.0, 0x1.0661e3917934cp-801,
     0.0, 0.0, 0x1.5378df641f809p-207, 0.0, 0x1.93b0457cb65d1p-630, 0.0, 0.0,
     0x1.1039f13fff595p-935, 0x1.9e8aec51ef0f9p-629, 0x1.d2df43556ae25p-563, 0.0,
     0x1.5b2b7b18f6b7bp-669, 0.0, 0x1.7a71e3ae223cbp-656, 0x1.560f60c82b3e8p-448,
     0x1.87b5601026bd9p-74, 0x1.d494a356867a5p-949, 0.0, 0.0, 0.0,
     0x1.7c339f0b96069p-977, 0x1.a9eee97aea628p-58, 0x1.053866be5c2e6p-307, 0.0,
     0x1.0261e9390775p-673, 0x1.ea12539277858p-360, 0x1.91f88b160243bp-56,
     0x1.a4e156952696p-26, 0.0, 0.0, 0x1.db09df94efb5ep-835, 0x1.873f3dfd3a294p-549,
     0.0, 0x1.b79d9b6d77776p-889, 0.0, 0x1.852375d3f5fcap-953, 0x1.7bb53c1b0c7e9p-408,
     0x1.5967fba07a1d8p-793, 0x1.1324ad461e02dp-597, 0x1.6ca485d28ad08p-545,
     0x1.636cb6e2f6d2cp-239, 0x1.70d7691a1cfb9p-171, 0.0, 0.0, 0x1.206194718d30ep-197,
     0.0, 0.0, 0.0, 0.0, 0x1.7bcbe89eb2d4cp-814, 0.0, 0.0, 0x1.0b09ff86ed584p-726,
     0.0, 0.0, 0x1.09ada807958b7p-189, 0.0, 0.0, 0.0, 0.0, 0x1.6869b4a7e276bp-795,
     0x1.9535a097a9cbp-374, 0x1.8d51a014b35cbp-693, 0x1.b9561636e3c3ep-315, 0.0,
     0x1.f1ce7ca3647c4p-108, 0x1.52854096d6252p-998, 0.0, 0.0, 0x1.b9b8a2b78589p-218,
     0x1.803dd751c14cp-418, 0x1.1b7cd904a1791p-889, 0.0, 0.0, 0.0,
     0x1.a86cf6b92a028p-169, 0x1.6ee4eeb57f49p-113, 0.0, 0x1.a023a0dda17b4p-577, 0.0,
     0x1.01e1c1b4d0258p-563, 0x1.ce8b3189f79a9p-340, 0x1.296e6cd769132p-1022, 0.0,
     0x1.108acb20c7c57p-198, 0.0, 0.0, 0x1.e264b970f32e3p-473, 0x1.b7fae8252bbd3p-16,
     0.0, 0.0, 0.0, 0.0, 0x1.7a3551dbebc51p-1020, 0.0, 0.0, 0x1.c80b24d510a4cp-156,
     0x1.efb0aab0ee0a2p-205, 0x1.0837d369b6912p-303, 0.0, 0x1.914e72ff2d9c1p-454,
     0x1.9fff27e892a17p-844, 0.0, 0.0, 0.0, 0.0, 0x1.fc11e9a1082fap-492, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a3612ec4b87bcp-1018, 0.0, 0x1.17c6512e7b54ap-263, 0.0,
     0x1.3f411617fb5ddp-234, 0.0, 0.0, 0x1.db4464846dd46p-388, 0.0, 0.0, 0.0,
     0x1.10ff707415e7p-113, 0.0, 0.0, 0.0, 0.0, 0x1.e7612e330dd25p-726, 0.0, 0.0, 0.0,
     0.0, 0x1.53b3a5d55c334p-922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b36ca9a46125p-991, 0.0, 0x1.43360a2cdf1e9p-368, 0.0, 0x1.65a1708e03b2cp-296,
     0.0, 0x1.cdd187a3a614fp-1003, 0x1.c0f1c13596e29p-620, 0x1.e5044184d0526p-466,
     0x1.e41d29f8de013p-162, 0x1.d939ffbb98ee7p-943, 0x1.e6dbdc2b3aba4p-529,
     0x1.3d5326baed9b9p-532, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e1c232269acefp-475,
     0x1.ddaae4364172bp-738, 0.0, 0.0, 0x1.3f5b7775052b3p-886, 0.0, 0.0,
     0x1.180699d84cd82p-58, 0.0, 0x1.607872453ad6cp-349, 0x1.7c489841ad58ap-642, 0.0,
     0.0, 0x1.dae9a2553fd4cp-865, 0x1.1269ce9577f78p-506, 0.0, 0x1.32fbbf9a80f45p-869,
     0x1.b0b81b4ba05dcp-11, 0.0, 0x1.e61c69de36a1bp-564, 0.0, 0x1.f86a934de7148p-892,
     0.0, 0x1.d14fb56a3066ap-512, 0x1.411fd07be3243p-23, 0.0, 0.0,
     0x1.003d2f5ceb593p-600, 0x1.9a5360bca7757p-687, 0.0, 0.0, 0.0,
     0x1.6ae9438b9ae5fp-210, 0.0, 0x1.3a912237eae44p-579, 0x1.ddb2f5eca468dp-165,
     0x1.9f209ce9370ap-878, 0.0, 0x1.043f7913ca613p-844, 0.0, 0.0, 0.0,
     0x1.9a6893a22dea7p-65, 0.0, 0.0, 0x1.c1c8c4cdbcf32p-342, 0.0, 0.0, 0.0,
     0x1.176d9d2c03894p-301, 0.0, 0x1.43a6a239704ddp-213, 0x1.2b8926e04361dp-600, 0.0,
     0.0, 0x1.d5055bc2412adp-68, 0.0, 0.0, 0x1.47cdc419198f1p-196,
     0x1.fe6e1cfc17a7ep-379, 0.0, 0x1.23977eb2eb1aap-739, 0x1.c197272d7006fp-194,
     0x1.c36b2a17c548p-282, 0.0, 0.0, 0.0, 0x1.52da0bc1a32edp-980, 0.0,
     0x1.6b6c413375c97p-1004, 0x1.08e8a0ecd40dep-994, 0.0, 0.0,
     0x1.f592ba9c919a9p-371, 0x1.e8a0e47af3b63p-586, 0.0, 0x1.00bfdd71b4181p-275,
     0x1.4a6bb53990f15p-180, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf4e3920de143p-823, 0.0, 0x1.a30205ad21d2ep-956, 0.0, 0.0,
     0x1.ecb373c0fd6d4p-41, 0x1.2cd222047cf43p-375, 0x1.84852fcffaa8fp-857, 0.0,
     0x1.df68927d21326p-535, 0.0, 0x1.0da85843f1f22p-502, 0.0, 0x1.f01bebc883b0ep-133,
     0.0, 0.0, 0x1.dfeef9a5f088cp-885, 0.0, 0x1.1157fc6066de9p-245, 0.0, 0.0, 0.0,
     0x1.26c839e690b33p-727, 0x1.8dad8818b90fcp-266, 0.0, 0x1.7481d3ad2ab16p-957,
     0x1.dad2f745a1239p-958, 0x1.e3796a1b18918p-633, 0.0, 0.0, 0.0,
     0x1.369638a108b6ap-174, 0.0, 0x1.27202ee45e32ap-735, 0.0, 0x1.d4f865502e59p-311,
     0x1.39b6d716e4919p-807, 0x1.cdeb3d80d36b9p-78, 0.0, 0.0, 0.0,
     0x1.2ce3d0adb0f28p-137, 0x1.dac635420dc56p-87, 0.0, 0x1.9063abc34cf6cp-52,
     0x1.ef541d5b35cd1p-771, 0x1.2d74fa7a27ccfp-251, 0.0, 0x1.b80d7c5bac398p-490,
     0x1.7d85ef5c47513p-398, 0.0, 0.0, 0x1.5ef0361c3ac37p-574, 0.0, 0.0,
     0x1.d537e5f6de0a8p-469, 0x1.27a304918b395p-927, 0x1.e9078b41a6be9p-217, 0.0,
     0x1.5b91c3ba9bbb4p-969, 0.0, 0x1.5123e569d3fa3p-951, 0.0, 0x1.c96d88a622f6ap-978,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58350f8d8c3dep-697, 0x1.4cf02c0e415cp-971,
     0x1.0286899177232p-628, 0.0, 0x1.82ddb1baf694dp-656, 0x1.27e5810d4709cp-465, 0.0,
     0x1.3e11051e7861dp-490, 0x1.994c79b4e6a7bp-269, 0x1.3dd0ae03bfccep-42, 0.0, 0.0,
     0x1.7131e0ade1711p-980, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5586dddb8ca25p-368, 0x1.72bc36839374ap-862, 0x1.8e8462111e5p-406,
     0x1.966d4bf19bbb7p-832, 0x1.8b73d0a6c2778p-477, 0.0, 0.0, 0x1.2d62e0dc2acdep-111,
     0.0, 0.0, 0x1.1187a1ff312e5p-1007, 0.0, 0x1.8c628b927dabap-880, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cd29ac0f49d57p-629, 0.0, 0.0, 0.0, 0x1.c2e0d3107491ep-440, 0.0,
     0.0, 0.0, 0.0, 0x1.52095484e2a33p-515, 0.0, 0.0, 0.0, 0x1.d1341e9cd127ep-982,
     0.0, 0x1.ff712af70c286p-45, 0.0, 0x1.db7473604f89fp-312, 0x1.4bac7bf99b289p-433,
     0.0, 0.0, 0x1.a01f7eda25105p-290, 0x1.b356998982983p-588, 0x1.d3cdc9da21071p-519,
     0.0, 0.0, 0.0, 0.0, 0x1.559ce0940969ep-324, 0.0, 0x1.24ff38be889e3p-49, 0.0, 0.0,
     0x1.f9dcfcef114bbp-854, 0x1.1b4652596dd77p-945, 0x1.4224adcb4a72ap-12, 0.0,
     0x1.4bad9c3d010dcp-680, 0.0, 0x1.214e2e48e4316p-427, 0x1.23d0752c106c8p-166, 0.0,
     0x1.b6503bed94bb7p-412, 0.0, 0x1.d57275fe58822p-487, 0x1.061e0240bd4d7p-43,
     0x1.16315c43af087p-457, 0x1.49adf18c14998p-968, 0x1.51c49280c411ap-404, 0.0,
     0x1.91c24a4421d91p-36, 0.0, 0.0, 0.0, 0x1.805eb5c5e7cbfp-520, 0.0, 0.0, 0.0,
     0x1.1d54a3505963dp-357, 0x1.69df1cae85596p-498, 0.0, 0x1.03ea51853d58bp-721, 0.0,
     0x1.1880f63772b79p-439, 0x1.81080a4658dc7p-225, 0x1.971624afef8d9p-665,
     0x1.30dd861f6a8ecp-392, 0.0, 0x1.5b82c4066e637p-623, 0.0, 0.0, 0.0, 0.0,
     0x1.25cb4b43f314fp-234, 0.0, 0x1.c5f195bf16ee2p-899, 0x1.4ee81b3cbde7fp-198,
     0x1.13ca38c533f4dp-4, 0x1.3480b81d4b596p-242, 0.0, 0.0, 0x1.34a6fa88528cbp-545,
     0x1.601a6c4cb8a63p-361, 0.0, 0.0, 0x1.b3d69f7158a04p-817, 0x1.58d7bdcb13994p-873,
     0x1.860f432b7a101p-610, 0.0, 0x1.69d897fd2fc7fp-22, 0.0, 0x1.d4379f0565fc7p-111,
     0.0, 0.0, 0x1.24a51008583b1p-330, 0x1.b69a6c71be11bp-951,
     0x1.3a9c819381ce5p-1008, 0.0, 0x1.bbb7875800f92p-813, 0.0,
     0x1.abdc14aa4bbf3p-948, 0.0, 0.0, 0.0, 0x1.e6874ec3b07ccp-255, 0.0, 0.0, 0.0,
     0x1.7c73c2c299173p-1, 0x1.799b849198fc9p-947, 0.0, 0x1.0ffebb72b3663p-761,
     0x1.82e0a703b47ccp-675, 0.0, 0x1.6f2f5c33cdca7p-886, 0x1.91999366299a1p-232,
     0x1.7fcc3b725a19dp-247, 0.0, 0x1.e41984b0a06b3p-96, 0.0, 0x1.6bda02813e827p-661,
     0x1.32df9f602184bp-974, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73d6ae02f3c44p-362,
     0x1.096d966427a39p-912, 0.0, 0.0, 0.0, 0x1.d3f63e1d13b29p-618, 0.0,
     0x1.d764d715f52cbp-720, 0x1.7d62e96dd0915p-579, 0.0, 0.0, 0x1.cff9045ce68fdp-862,
     0.0, 0x1.b011b9ace6e7cp-774, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81e75307d705dp-564, 0.0, 0x1.01eb5ed37b572p-569, 0.0, 0x1.3fae0c55371d1p-297,
     0x1.73a288719c6bp-144, 0.0, 0.0, 0x1.1947814f2a839p-599, 0.0, 0.0, 0.0,
     0x1.bb46a4af0bfc3p-556, 0.0, 0x1.0223e2a76031dp-896, 0.0, 0.0, 0.0,
     0x1.e500248ee62c5p-697, 0x1.3a36a37a6533cp-406, 0x1.06ac03e362524p-149, 0.0,
     0x1.34561d6977137p-407, 0.0, 0x1.898be1348a43ep-844, 0.0, 0x1.2cd3c9164dc0cp-347,
     0x1.50efc0e37dca6p-788, 0.0, 0.0, 0.0, 0x1.f43ce724962adp-767, 0.0, 0.0,
     0x1.3851c52e6416bp-268, 0.0, 0.0, 0.0, 0x1.e5e818c311301p-279, 0.0,
     0x1.485ecc7496a37p-383, 0.0, 0.0, 0x1.310689e5ddc53p-62, 0.0, 0.0,
     0x1.7e988ba7b3674p-88, 0x1.521825716e09dp-649, 0.0, 0x1.a00702edece96p-965,
     0x1.95c96c8d5f8f3p-1001, 0x1.3fb6b1ae00b75p-547, 0.0, 0x1.6abc41c0dd0dfp-535,
     0.0, 0x1.3cb6adefb2116p-943, 0x1.dca936a812504p-320, 0x1.0e376100ee5f1p-617,
     0x1.cb9b9030657b8p-47, 0x1.f459c9326d7p-607, 0x1.7fc0ad58c6fbp-786, 0.0, 0.0,
     0x1.949782ea31a95p-765, 0.0, 0x1.3658929aab269p-830, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8f53d9cc19c7p-916, 0x1.e584cf0048b7dp-166, 0x1.71893dd571b8bp-76,
     0x1.ee7cfe9585fc6p-863, 0.0, 0x1.c5893089a5cb5p-86, 0x1.9554ad1495c84p-899, 0.0,
     0x1.4205be2680168p-421, 0.0, 0x1.074c82d08aea4p-143, 0.0, 0x1.5b9444d07782bp-311,
     0.0, 0x1.2a7db2ae4623p-909, 0x1.ebf94471f867cp-201, 0.0, 0.0, 0.0,
     0x1.afe5b7cfdda07p-485, 0x1.28604b3c11345p-949, 0.0, 0x1.6299de2555ec5p-54, 0.0,
     0.0, 0.0, 0.0, 0x1.74d8577799fb7p-876, 0.0, 0.0, 0x1.90b209757fc6bp-279, 0.0,
     0x1.357e13ee8ac9cp-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.176545333660cp-387, 0.0,
     0x1.a4a2977d38dcap-447, 0.0, 0.0, 0.0, 0x1.8610f7b24f6a1p-408, 0.0, 0.0, 0.0,
     0.0, 0x1.252704a5f2b5cp-108, 0.0, 0x1.18f261193a544p-908, 0.0,
     0x1.727880eb99dbep-939, 0.0, 0.0, 0x1.ba422e696c5afp-53, 0.0,
     0x1.eb75e6cf54bcap-745, 0.0, 0.0, 0x1.a0c3fc3dfbf7fp-162, 0x1.e269c59702a1ap-234,
     0x1.a05551a27b843p-707, 0x1.c2d2c4f05ac7p-988, 0.0, 0.0, 0x1.ba4e7a5e3a4f6p-269,
     0.0, 0x1.4c323be9396b3p-928, 0x1.befc40573ec6cp-520, 0x1.97f562c090e3bp-806,
     0x1.613ad0c6263b1p-831, 0.0, 0x1.f6e18adb91265p-666, 0.0, 0x1.29176943d5e0bp-814,
     0x1.d08573f78e9ffp-220, 0x1.2340e65a92f3ap-470, 0.0, 0.0, 0.0,
     0x1.ddd3833832f2bp-332, 0x1.c7e436fdf3b19p-590, 0x1.89233ab256555p-380, 0.0, 0.0,
     0.0, 0.0, 0x1.e8c7c68264fa5p-764, 0x1.a8b7b04f4f6f1p-1018,
     0x1.837d994d53549p-276, 0x1.b58afa6fa1f31p-590, 0x1.54d2b7e402673p-661, 0.0,
     0x1.b0aa2f6b309bbp-886, 0.0, 0x1.ec4985347f77fp-494, 0x1.5a3757ba95dd2p-252,
     0x1.149733a8fa82cp-335, 0x1.a269f7ab91fa5p-764, 0x1.79188006b7c54p-835,
     0x1.43e2094a3c64ep-671, 0.0, 0x1.52b5198f40bc1p-631, 0.0, 0x1.d8caca5339de9p-255,
     0x1.0e68f5d4f4e12p-882, 0.0, 0.0, 0x1.fd54d1e262197p-797, 0x1.a17b0b53b1043p-287,
     0x1.af86007da802cp-846, 0.0, 0x1.68763ecb3e27dp-151, 0x1.0d465d46d7bf2p-317,
     0x1.5e9d76a1dcf84p-954, 0x1.2b133329327c7p-933, 0x1.8273cf1c6fb9bp-31, 0.0, 0.0,
     0x1.794653ff504d2p-800, 0.0, 0x1.d6b5d8ca36a08p-232, 0.0, 0x1.cd8c82ddf0c6bp-887,
     0.0, 0.0, 0x1.62caa4404cafcp-794, 0.0, 0.0, 0x1.d8bd4eee50cecp-348,
     0x1.18dcf53c5a422p-319, 0.0, 0x1.1f664a014abdcp-818, 0.0, 0.0,
     0x1.de8c5f6c4e8fep-9, 0.0, 0x1.f1d4fba29e295p-63, 0.0, 0x1.ea74261d6c331p-729,
     0.0, 0x1.3435203e6b1fdp-416, 0.0, 0x1.0ff2d6124e53p-400, 0.0, 0.0, 0.0,
     0x1.727da14fd2153p-106, 0.0, 0.0, 0x1.715b8d525ba86p-261, 0x1.d3cc6cf195682p-738,
     0.0, 0.0, 0.0, 0x1.69e92675ef2bbp-870, 0.0, 0x1.7522a5ce34ef4p-187,
     0x1.80d7fbae3269ep-1011, 0x1.9193ae6105d3cp-988, 0x1.c1f5a923f644p-794,
     0x1.b442728a738cdp-591, 0.0, 0x1.cec5e9b9ac5bap-77, 0x1.0e99d29647ce9p-657,
     0x1.967943cd6679ep-632, 0.0, 0.0, 0x1.cce78c0515e11p-630, 0x1.7a54ec77f0a6ap-779,
     0x1.8d6f50343c627p-524, 0x1.1a5ecb4f939cp-547, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.76bd5f8355a16p-1014, 0.0, 0x1.daf04e9f4ae64p-153, 0x1.b9721ebe7dc01p-272,
     0.0, 0x1.81191c7ef638ap-666, 0.0, 0x1.dc3692815dedep-775, 0.0,
     0x1.79271bf02f15dp-981, 0x1.b212e4bea1dc1p-554, 0x1.dd26c10a26951p-687,
     0x1.aa6babedee83fp-765, 0x1.ef2ae1ef12b58p-461, 0x1.952f401813209p-728, 0.0, 0.0,
     0x1.5bf12b9260006p-85, 0.0, 0x1.e8a57af2f6a07p-449, 0.0, 0.0,
     0x1.1516c70ef7dc3p-659, 0.0, 0.0, 0.0, 0.0, 0x1.2bad5a69626c5p-885,
     0x1.d71f09d754ac8p-396, 0.0, 0x1.a531948824e5p-136, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d24980a91e64p-131, 0x1.aa56cd8c176eep-256, 0.0, 0x1.0c454d4b4df7ep-197, 0.0,
     0x1.d99e2caaa2f6ep-247, 0x1.f1d1937a2ebedp-704, 0.0, 0x1.215c7fe97f7c8p-711,
     0x1.3262ee799161bp-969, 0x1.e5c4b0f5c7bd7p-159, 0x1.ebd944148ccd6p-776,
     0x1.a50f0606c6e08p-50, 0.0, 0x1.e744475b70995p-447, 0.0, 0x1.7b92c79939bdep-65,
     0.0, 0.0, 0x1.369e8948a3049p-425, 0.0, 0x1.ec9efb40ca07ep-864, 0.0, 0.0, 0.0,
     0.0, 0x1.d3dd6254115fcp-299, 0.0, 0.0, 0x1.34c9c85a804acp-112,
     0x1.9aa6d090217fdp-134, 0.0, 0.0, 0.0, 0x1.1b77415dfe3cfp-780, 0.0,
     0x1.9b0b3a4083ep-996, 0.0, 0x1.b5e7c2b806a58p-679, 0.0, 0x1.efeb511775cbap-879,
     0x1.346bab24d6d9bp-555, 0.0, 0x1.c0235385086cp-68, 0.0, 0.0,
     0x1.2ceeeed0475e4p-475, 0x1.05b8163fa8798p-225, 0x1.aa56c0273e1f5p-160,
     0x1.a4fd4c8a524c8p-23, 0.0, 0x1.d92f62b8661e4p-992, 0x1.1eb161fb52848p-249, 0.0,
     0x1.dddaf7faebd57p-285, 0.0, 0x1.643460427182fp-479, 0x1.a9984b6dd8b37p-1008,
     0.0, 0x1.e6aec4e0f6b9bp-135, 0.0, 0x1.2a14f8aed5a6dp-713, 0x1.9298075c25799p-95,
     0x1.9e5f4ea7aea0ep-620, 0.0, 0x1.4aea289d2d53bp-198, 0x1.fc2b75814651p-586, 0.0,
     0x1.8595f32903392p-191, 0.0, 0.0, 0x1.317f3d52bbc96p-875, 0.0, 0.0,
     0x1.8f57cd45b38acp-130, 0x1.6e3639c6e26bep-858, 0.0, 0x1.66e22ef6e7b16p-436, 0.0,
     0x1.4f45a1a21a965p-222, 0.0, 0x1.27c844b2a8e65p-526, 0.0, 0.0,
     0x1.4d362f82e6092p-928, 0x1.4bf5498aeaa2fp-664, 0.0, 0x1.a78b17468724cp-764, 0.0,
     0.0, 0x1.f477208bb72f7p-922, 0x1.2b8d50e1961b3p-425, 0x1.6254cdf69ca51p-839, 0.0,
     0x1.8f8d98e19500fp-629, 0.0, 0x1.2845dab3a925dp-164, 0x1.75d369fd28fe6p-579, 0.0,
     0.0, 0.0, 0.0, 0x1.e446b5d2e0c8dp-706, 0x1.adf81838a834bp-947,
     0x1.ce01abd89bfd6p-203, 0x1.dc7d146ac0d17p-835, 0x1.b0b2b4236664ep-270, 0.0, 0.0,
     0.0, 0x1.06c246c6d00a7p-846, 0.0, 0.0, 0.0, 0.0, 0x1.78db1a4d6a498p-236, 0.0,
     0.0, 0.0, 0x1.9f36bcdca3c34p-69, 0.0, 0.0, 0x1.9f1ef3981f0bbp-976,
     0x1.65c51ad30acfep-757, 0x1.f6630a7488334p-739, 0.0, 0.0, 0x1.c73b7b968d2fep-998,
     0.0, 0.0, 0x1.f7d5515885f67p-457, 0x1.90dcca5092bfcp-108, 0.0,
     0x1.b5a8ac9bf40fcp-32, 0.0, 0x1.82ddf84f643cp-650, 0.0, 0.0, 0.0,
     0x1.62156ff8546a9p-117, 0.0, 0x1.4d35e423ebfb9p-873, 0.0, 0.0,
     0x1.5d2cf8f81f882p-724, 0x1.0ce902e3da20ep-70, 0x1.da1ebc931fb8p-564,
     0x1.87ec3c891ac08p-416, 0x1.4f44ba07d8eacp-23, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01d1e9bea9f17p-240, 0.0, 0.0, 0x1.68f979da7e01ap-277, 0.0, 0.0,
     0x1.6e0bd719ae186p-283, 0.0, 0x1.78a841c22030ep-909, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20b519ca7a2d6p-714, 0x1.147e0d3f460ebp-734, 0x1.df9b7ec381a9cp-648, 0.0, 0.0,
     0.0, 0x1.aa5955b6f75cap-232, 0x1.3217647b86bfap-107, 0x1.a77ec544f3f7cp-862,
     0x1.80793e62b0a34p-320, 0x1.fdf7f13bfd9d1p-924, 0.0, 0x1.1f4d03776ed6bp-662,
     0x1.873b7dcba6a95p-921, 0x1.9f0b30bf72e49p-907, 0.0, 0.0, 0.0,
     0x1.7f497856d8a9ep-597, 0x1.ba07ddf42350cp-985, 0x1.782537363763ep-1022, 0.0,
     0.0, 0.0
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
            tmp1 = log10(tmp0);
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
    printf("log10 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log10 bench acc %la\n", global_bench_acc);
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
