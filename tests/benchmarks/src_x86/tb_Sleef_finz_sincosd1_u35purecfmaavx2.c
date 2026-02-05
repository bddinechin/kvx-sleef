/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd1_u35purecfma.c --function \
 *     Sleef_finz_sincosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.e5f4ba25beffdp-872, 0.0, 0.0, 0x1.210fa8c4f534bp-679,
     0x1.3c2f0f9bc1b72p-1003, 0x1.a3ae77e6abe71p-101, 0x1.449cdf418afcbp-787,
     0x1.fcab03a914102p-265, 0x1.04f3a96c7e3e7p-365, 0x1.3fa22ecabb692p-955, 0.0,
     0x1.f04693d4ff1c1p-842, 0.0, 0.0, 0.0, 0.0, 0x1.979fef5f6ab7ap-512,
     0x1.6fa20ff5e1f1p-578, 0x1.0c15cb9da77c2p-757, 0x1.4ec83b10a7534p-531, 0.0, 0.0,
     0x1.9d7ed43e18e52p-204, 0.0, 0.0, 0x1.96555cf64db42p-154, 0.0,
     0x1.c139187e12deap-69, 0.0, 0x1.7f2ad709afafep-910, 0.0, 0.0,
     0x1.e64482aaf547dp-444, 0.0, 0x1.a9a37a2495fb9p-618, 0x1.ee78a1b724a19p-77, 0.0,
     0x1.8bedc75539ee3p-722, 0.0, 0x1.3a12113294e8dp-58, 0x1.32e2118d8d90dp-422, 0.0,
     0.0, 0.0, 0x1.316d34727ae06p-807, 0x1.319cdb5c4a028p-969, 0x1.c2f3cd7732275p-113,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da17035f9bf28p-451, 0x1.2e148eb331b78p-709,
     0x1.04cdaae2588ap-853, 0.0, 0x1.f12f4254ca46ap-285, 0.0, 0x1.4ab3a713a479p-52,
     0.0, 0x1.b0df6664bb9a5p-33, 0x1.80b66447b2f2ep-732, 0.0, 0x1.8f85e1eb7e24bp-629,
     0.0, 0x1.2c24584860fbep-712, 0x1.324146a2f22fbp-1019, 0x1.7885e4fc04f0fp-319,
     0x1.eaf2e2b00ce57p-186, 0x1.c3b726e1844f8p-769, 0x1.440ab6beb947p-947, 0.0,
     0x1.e23321ea55fb8p-864, 0x1.da8c3bfe44761p-707, 0.0, 0.0, 0.0,
     0x1.ae3d1ce270d79p-404, 0x1.bc1ff45c58abcp-216, 0.0, 0x1.7bea5af31c846p-447,
     0x1.a4f8b6b4785eap-755, 0.0, 0.0, 0.0, 0x1.584b6817f11adp-561, 0.0, 0.0, 0.0,
     0x1.9c2a1040dce8bp-100, 0.0, 0.0, 0x1.fa654ca17a415p-187, 0.0,
     0x1.f7a638cb227aep-617, 0x1.b30bfa3161996p-1008, 0.0, 0x1.ffe993f4a8a8fp-1020,
     0x1.3a17a4ecb463cp-298, 0x1.741d8cd627744p-181, 0.0, 0.0, 0x1.6b7bb1d8deef7p-611,
     0x1.1ca6b49165bc6p-787, 0.0, 0x1.f1f753e67060bp-571, 0x1.c7f7b6f3be375p-248,
     0x1.9b11b0b08ccd5p-885, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42879e3ad0e5cp-238,
     0x1.f367ca7e936b4p-103, 0x1.94a254ffe8c13p-895, 0.0, 0x1.7b97a1e8d4ec9p-251,
     0x1.e91abf18d0db7p-243, 0x1.010a9775f63e7p-826, 0.0, 0.0, 0.0, 0.0,
     0x1.eadb421f179bbp-754, 0x1.03e81fed95339p-340, 0x1.ee061d2acf8f7p-640,
     0x1.bdaab8eaba665p-534, 0.0, 0.0, 0.0, 0.0, 0x1.fe4653f62c8bdp-941,
     0x1.f30e3c2b43c8cp-263, 0x1.3fd24626b7af5p-906, 0.0, 0.0, 0x1.257f4e2d2d5c1p-269,
     0.0, 0x1.a6cf2b7adf215p-165, 0.0, 0x1.eeb83240bca2dp-436, 0x1.a38d28fffd211p-930,
     0x1.362a1c7b85f34p-597, 0.0, 0x1.48505d7398323p-738, 0x1.ff93e6262b8ccp-539,
     0x1.9a8f2fee73f92p-400, 0.0, 0x1.6393cf10b27acp-551, 0x1.432c4ac3ce1aap-1004,
     0.0, 0x1.ac91d0b3a6e1fp-671, 0x1.32dee8770ebc9p-744, 0.0, 0x1.d9e6a3f459a15p-9,
     0.0, 0x1.a9b7dc250a72ep-168, 0.0, 0x1.352b1509b9535p-999, 0.0, 0.0, 0.0,
     0x1.0d03257fcfa05p-228, 0x1.15f252e0274ddp-443, 0x1.037367b176469p-77, 0.0, 0.0,
     0.0, 0x1.359d2a29e2a49p-531, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7936419df24d6p-759,
     0x1.5d8e4ff709f4p-451, 0x1.481c44dabe497p-842, 0x1.f10f9aab5d2bap-43, 0.0, 0.0,
     0x1.9901aeab96bebp-962, 0x1.4e6a904f57fe3p-543, 0.0, 0.0, 0.0, 0.0,
     0x1.31d58465bb609p-310, 0x1.3977bed3e9fb7p-511, 0x1.35920de00f572p-112,
     0x1.3c6917b4c5e26p-656, 0.0, 0x1.1f830f7a1efeep-280, 0.0, 0x1.d7e9ebf29c66bp-24,
     0x1.8ab974f61524ap-895, 0.0, 0x1.838af73ea7cd6p-453, 0.0, 0x1.5ec141c1bb984p-299,
     0.0, 0.0, 0.0, 0x1.d1c6a9774114dp-137, 0x1.e97c178d3861cp-578,
     0x1.bdb8a6f8f6e2p-566, 0x1.4d4eb16f92b87p-904, 0.0, 0x1.371f61f05b1b1p-479, 0.0,
     0.0, 0.0, 0x1.9b47013960225p-760, 0x1.f7f2bfcef9af4p-769, 0.0, 0.0,
     0x1.1c5061957547ap-97, 0x1.f45e54d606ab2p-87, 0.0, 0.0, 0.0,
     0x1.6f256deadc168p-422, 0x1.6bf362db328cfp-138, 0.0, 0x1.bc3f0d6122c8ep-715, 0.0,
     0x1.8b5d9f17b13aep-625, 0.0, 0x1.b504e982d525dp-11, 0x1.de5c07a18105cp-943, 0.0,
     0.0, 0x1.58fcf7b8ec2ap-91, 0x1.f6b367a46bfc1p-636, 0x1.7205fbe086643p-683, 0.0,
     0.0, 0.0, 0x1.c375c2b6553b6p-214, 0.0, 0x1.34041c63bccf1p-565,
     0x1.9da447f8e1ea5p-149, 0.0, 0.0, 0.0, 0x1.bc65946ff579ep-615,
     0x1.f615a708a4985p-32, 0x1.9dc5c9e672a95p-810, 0.0, 0.0, 0x1.6735734f93b44p-57,
     0.0, 0x1.918d9e987d254p-641, 0.0, 0x1.26663981183ebp-24, 0.0,
     0x1.70a3c9f1b6fa3p-610, 0.0, 0x1.4c095dd59fffp-133, 0.0, 0.0,
     0x1.f58c435fae68ap-1, 0x1.3a09a19fec40cp-130, 0x1.70a97e41783ap-881,
     0x1.226c4a7df424cp-391, 0x1.1617d9e21d5bap-762, 0.0, 0x1.8c44e09f720bp-287,
     0x1.d50329f718eb7p-72, 0x1.59a8e7846f182p-234, 0.0, 0x1.520f9f8a07f98p-769,
     0x1.9dc4d15de3979p-254, 0x1.6e034d46d5c3p-514, 0x1.6486b451fc89dp-390,
     0x1.6fb8a26219502p-492, 0x1.2a4c0df06d501p-487, 0x1.48b7164b0b6ddp-312,
     0x1.e4c2f5802b9f1p-456, 0x1.88fc9540b3f83p-732, 0x1.c5527bd323147p-17,
     0x1.6d28b73389eb2p-967, 0.0, 0x1.4b28da834cdep-149, 0x1.00cb817e7c439p-490,
     0x1.4cb2951389aa6p-664, 0.0, 0x1.8fda643597789p-286, 0x1.4d89e3ca1d4d7p-225, 0.0,
     0.0, 0x1.974906ef1ee21p-276, 0.0, 0.0, 0x1.e4571f253d933p-671, 0.0,
     0x1.b2899933631f7p-727, 0x1.27530ec5021c3p-209, 0.0, 0.0, 0x1.2953062059148p-485,
     0x1.3aa20709b7945p-215, 0.0, 0x1.e9c6e577773afp-498, 0.0, 0.0, 0.0,
     0x1.3437b208cc1aep-945, 0x1.e5937f6c5cb84p-785, 0.0, 0.0, 0.0,
     0x1.2e7e7f43034fp-889, 0x1.ac4b5f2c45ff6p-973, 0x1.c5b0e8098975cp-128,
     0x1.fd7313f9a9c45p-244, 0.0, 0x1.48706a8feda08p-990, 0.0, 0.0, 0.0,
     0x1.270c8d2819f67p-858, 0.0, 0.0, 0x1.c2af71aff0363p-800, 0.0, 0.0, 0.0,
     0x1.76fcb92f7eb6p-992, 0.0, 0x1.e377422db535bp-436, 0.0, 0x1.caaa45f3b8c04p-705,
     0x1.93a732e508cafp-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.410707a0c8c0cp-241, 0.0, 0.0, 0x1.634b131a5a7fp-620, 0.0, 0.0, 0.0,
     0x1.cb353be5c9c94p-724, 0.0, 0x1.5d456e7e0ed0cp-669, 0.0, 0.0, 0.0,
     0x1.f4c0fae8d37bap-752, 0.0, 0.0, 0x1.37c20a549be5dp-253, 0.0, 0.0,
     0x1.50bd2bb769eb2p-510, 0.0, 0x1.ca2eb3845795p-728, 0x1.fa86226ce368ap-918,
     0x1.fb3bbe91a8bb6p-152, 0x1.189257f7718fbp-474, 0x1.6541a6cb4ac56p-750,
     0x1.231fc07c7200dp-549, 0x1.0d243cce3b369p-153, 0.0, 0x1.775c6c29b9af9p-813, 0.0,
     0x1.279f3cf9de179p-115, 0.0, 0x1.d32e99bc588afp-38, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.26d6699ce45d8p-270, 0.0, 0.0, 0.0, 0x1.ab67242eb4c75p-396,
     0x1.6d489272857a1p-236, 0.0, 0.0, 0x1.7371fa0eae75dp-359, 0.0,
     0x1.4971b29134903p-386, 0x1.db4f27d4baacfp-160, 0.0, 0.0, 0x1.bba0df63d113dp-109,
     0x1.16d215c56a96fp-314, 0x1.9ed1e5f29e4aap-645, 0.0, 0.0, 0x1.ddefc5063e4b1p-523,
     0x1.bfe8a8d708ca4p-997, 0x1.1fbe68dbb7d51p-590, 0x1.94af80d5b67eep-865,
     0x1.af63025b21521p-836, 0x1.0d6bd63125e97p-357, 0x1.3430f22a23a23p-217, 0.0, 0.0,
     0.0, 0x1.7a6b59df6f741p-414, 0.0, 0.0, 0x1.d04e6e1273be4p-786, 0.0,
     0x1.9d7e544c3a97ep-850, 0.0, 0.0, 0x1.a51eea36ccd26p-521, 0.0, 0.0, 0.0,
     0x1.663715a40870ap-1000, 0.0, 0.0, 0.0, 0.0, 0x1.3cf4ad3d105c1p-106,
     0x1.9f8642e489746p-379, 0x1.5c22f7d4cda19p-936, 0.0, 0x1.c85445c64e5cbp-620, 0.0,
     0x1.067f2dcbf4b16p-570, 0.0, 0.0, 0x1.4b5c0e7781853p-707, 0.0,
     0x1.2ab1f50ba2fa1p-913, 0x1.d830848c17548p-221, 0x1.6b337510068a8p-710, 0.0,
     0x1.e7d043c2a7f6fp-296, 0x1.12f937f85acb2p-317, 0x1.0af36ecd9004dp-859,
     0x1.86edc9fd271bep-410, 0.0, 0x1.256622ad03851p-174, 0x1.1094638fb9faap-935, 0.0,
     0.0, 0.0, 0x1.58a08c8830db5p-507, 0.0, 0x1.f8120ede7679fp-709,
     0x1.9aa95e7dd28c9p-788, 0x1.d6bd192ce51f4p-492, 0x1.1231bd85fd93ep-557, 0.0,
     0x1.13396f2a478acp-487, 0x1.0026ca14abb4cp-778, 0.0, 0x1.66814987c6d38p-532,
     0x1.66bcc26227cf2p-572, 0x1.ced1cb60b45fdp-473, 0x1.35112fc0dc144p-992, 0.0, 0.0,
     0.0, 0.0, 0x1.90ec8904d781bp-515, 0x1.8ee87c5b96611p-796, 0.0,
     0x1.ff6ec6e36bf0ep-814, 0.0, 0.0, 0.0, 0x1.cbd43e1e3f53ap-719, 0.0,
     0x1.7f81fe487c84cp-572, 0x1.e0cc447b42fdcp-65, 0.0, 0.0, 0.0,
     0x1.77f3379d2b711p-308, 0x1.20a795842eea9p-663, 0.0, 0.0, 0x1.94ff4611759fep-5,
     0.0, 0x1.ed8d67c2422dbp-234, 0.0, 0.0, 0x1.d4f34a33924bep-290, 0.0, 0.0,
     0x1.5e9eac57a0addp-456, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cc34c3b575e92p-594,
     0x1.6bbe451a1ffbcp-943, 0.0, 0x1.b3f278562cb72p-834, 0x1.cf6d3cb013f4p-541,
     0x1.04632a957218dp-143, 0.0, 0.0, 0x1.6024b361db99ap-198, 0.0, 0.0, 0.0,
     0x1.3a62607c99a85p-588, 0.0, 0.0, 0x1.0564535a4e97cp-528, 0x1.e9f3a7e8ed6p-501,
     0.0, 0.0, 0x1.db57187312927p-640, 0.0, 0x1.c9264ed6f2d91p-265,
     0x1.e6c6443c661e4p-801, 0x1.c6b652dcbf48cp-599, 0x1.985eedd37d548p-94,
     0x1.c137d1eb2ec88p-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8388e1479dc4dp-540,
     0x1.6c3910e9c380fp-730, 0x1.a4cb36248b95bp-903, 0.0, 0x1.8ab7117d1b9c5p-649,
     0x1.94775bbd7a8cap-347, 0x1.164d997d1616fp-16, 0.0, 0.0, 0.0,
     0x1.66253c31a6a99p-449, 0.0, 0x1.93c561edca55p-488, 0.0, 0.0, 0.0,
     0x1.04d1f171078f7p-981, 0.0, 0x1.dea3ff7e171b3p-612, 0x1.afad8070cffdp-622, 0.0,
     0x1.9303051a1ed1p-66, 0x1.a795b8c2fe76fp-268, 0.0, 0.0, 0x1.84b4cecc22ddfp-963,
     0.0, 0x1.c9b6a66aab084p-978, 0.0, 0x1.f812335f46929p-520, 0.0, 0.0, 0.0,
     0x1.d14ec79a5a48fp-242, 0x1.3d48bd3b9fbd3p-781, 0x1.aa8a2accf69d3p-196,
     0x1.0f5bdf4a51ab1p-440, 0.0, 0x1.202e469180e23p-1009, 0.0,
     0x1.b93cb83dc22c7p-449, 0.0, 0x1.077049f370e4ap-52, 0.0, 0.0,
     0x1.7904cf4a51e79p-536, 0x1.af7cfe3296c46p-344, 0.0, 0.0, 0.0, 0.0,
     0x1.899d7567f2394p-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.708b3097631efp-238,
     0x1.c062a852c4d78p-700, 0.0, 0.0, 0x1.4ac43f4424a16p-899, 0x1.c05cbfe3d5fc6p-779,
     0x1.0c954c37c41cdp-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd78bbb6ac7b6p-863, 0.0, 0.0, 0.0, 0.0, 0x1.cf9e403f564ffp-272, 0.0,
     0x1.37f1a2b468ap-863, 0x1.23721f09263f9p-1007, 0x1.6ad6c0f5db9b8p-841, 0.0,
     0x1.4ab0ba49cdfa4p-743, 0x1.556831cc42504p-861, 0x1.148ca6f29bdbcp-222, 0.0, 0.0,
     0x1.b50bb57481d73p-131, 0x1.5048a71f7dcdep-462, 0x1.929388346614ep-589,
     0x1.394d26a9e9e2dp-817, 0.0, 0x1.b85d6bc8944f5p-483, 0x1.0a04edc1f6c8cp-738,
     0x1.c2fd3f6555259p-618, 0x1.29d29d0fb01c2p-84, 0.0, 0.0, 0x1.cdb5c23dbebd1p-223,
     0.0, 0.0, 0x1.59e7df0b7086bp-55, 0.0, 0x1.bef0b1711c466p-624, 0.0, 0.0,
     0x1.ace0b81e75c2bp-19, 0x1.eb7cecb9ca472p-180, 0.0, 0x1.d42647b437a3dp-327,
     0x1.fcd5b07f8b8fep-683, 0.0, 0x1.c95c7292c0a7cp-783, 0.0, 0x1.feb1958fc96dcp-200,
     0.0, 0x1.2b28ff9df179ap-259, 0x1.172eb7ecde91dp-576, 0x1.96d19301e26a4p-774, 0.0,
     0x1.7a2c77cd01117p-117, 0x1.b692ec81dc18dp-542, 0.0, 0x1.8068d5f080618p-593, 0.0,
     0x1.c9917089510a8p-632, 0x1.42ae1951004c9p-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.634e1a678b9ebp-940, 0x1.a17cf986415adp-489,
     0x1.46b64d049fb7fp-976, 0.0, 0x1.866e74e2843d8p-377, 0.0, 0x1.0e571bc212207p-629,
     0x1.6e4ec29110a19p-712, 0.0, 0x1.44faa7d76242p-916, 0x1.2dbac7fbb6531p-92,
     0x1.5f0af0e03494fp-962, 0.0, 0.0, 0.0, 0x1.1153a5b90d3c5p-702, 0.0,
     0x1.09236811b9fdfp-640, 0.0, 0.0, 0x1.cd996d6b4e43bp-578, 0.0, 0.0,
     0x1.ba0087f3d7f31p-710, 0x1.9fc4498e56a3dp-501, 0x1.fb683f39e0e34p-820, 0.0,
     0x1.5df5d08a134b8p-582, 0x1p0, 0x1.34b1acafa1ccp-46, 0x1.7e48db14ba42fp-654, 0.0,
     0x1.c500cb624b478p-477, 0.0, 0x1.78ab11c9cd496p-551, 0x1.b651b47d1b42p-532,
     0x1.82bceed748862p-47, 0.0, 0.0, 0x1.4a6004577ea59p-547, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06686053e46e5p-498, 0.0, 0x1.a5e6ba741632cp-709, 0.0, 0x1.dd5a5d92938f6p-959,
     0x1.47965bc271fb2p-901, 0.0, 0x1.dc79b46e46368p-591, 0.0, 0x1.f36d0c8d1b5c7p-572,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b789a234bc8fp-690, 0.0, 0x1.252efc73bc32cp-628,
     0x1.37c0cc27fdab6p-786, 0x1.ccf668a045061p-541, 0.0, 0x1.2f07567c6aef3p-240,
     0x1.6852bcfc62d21p-17, 0.0, 0x1.c99af78f87265p-368, 0x1.f3daa23e3c689p-193, 0.0,
     0.0, 0x1.e6786f15831a5p-192, 0.0, 0x1.87c68e020a506p-289, 0.0, 0.0,
     0x1.168d04a620a78p-93, 0x1.c40320fcfb1bcp-642, 0x1.87eeb06b73dacp-938, 0.0, 0.0,
     0.0, 0x1.a6a31575a276fp-569, 0.0, 0x1.3b4c8af2546aep-394, 0x1.4e85d42546f3ap-790,
     0x1.c13d1fc684154p-358, 0x1.c495f697a104ep-192, 0.0, 0.0, 0x1.a75dc919188dbp-169,
     0.0, 0.0, 0x1.76d6a813d00dbp-655, 0.0, 0x1.85e548b954791p-500,
     0x1.0ca467a78de38p-391, 0.0, 0x1.0947acd4be9acp-745, 0.0, 0.0,
     0x1.810ec91c537e5p-358, 0.0, 0x1.6d1d23fb2bde8p-397, 0x1.2b278892f5e55p-482, 0.0,
     0.0, 0.0, 0.0, 0x1.f2b8ca3f039eep-121, 0.0, 0.0, 0.0, 0x1.439f96aa05a5bp-945,
     0x1.c216f62d3650ap-106, 0x1.6538bf19843a9p-98, 0x1.6bea1a76899cbp-233, 0.0, 0.0,
     0.0, 0x1.6fc61abe544d1p-823, 0.0, 0x1.9c3fe3c54dbfep-143, 0x1.e5fc52528b7cbp-855,
     0.0, 0.0, 0x1.239bdb44f695ep-55, 0x1.04f23708e5059p-617, 0x1.4f6d0b2ffc407p-513,
     0.0, 0x1.280c921075f3cp-195, 0.0, 0x1.04febd723d6a9p-198, 0.0,
     0x1.9d87f36afa5f7p-563, 0.0, 0x1.6b1f20185840ep-530, 0.0, 0x1.5aea20f261a71p-485,
     0x1.fae1667d9241dp-241, 0x1.e5557f1f477d5p-395, 0.0, 0x1.ae3ec43393cep-558, 0.0,
     0.0, 0.0, 0.0, 0x1.5e70506217484p-882, 0.0, 0.0, 0x1.8a0aedfd54672p-1006,
     0x1.069f9499327d4p-104, 0.0, 0.0, 0x1.f081c177b3decp-867, 0x1.7e67aacc1b29cp-736,
     0.0, 0x1.89d4d6eddb1d9p-910, 0x1.b9fdf544bb68bp-711, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.14a69b57d01bep-205, 0.0, 0x1.0334f09746204p-836, 0x1.bdf5eac7e7d4cp-635,
     0.0, 0x1.d1001a84852bfp-20, 0x1.7e91d09923087p-984, 0.0, 0.0, 0.0, 0.0,
     0x1.c3b2a5c9b97ccp-698, 0.0, 0.0, 0.0, 0.0, 0x1.0e79dc83455a3p-583, 0.0,
     0x1.1a457affa070dp-487, 0x1.03552926e3179p-130, 0x1.99b1019fca07ap-890,
     0x1.e43bc7236588fp-819, 0.0, 0x1.f69bfd05fcf58p-796, 0.0, 0.0, 0.0, 0.0,
     0x1.9652f0e01ccd4p-803, 0.0, 0x1.b5f49ecdc2391p-431, 0.0, 0x1.76c128d37f779p-212,
     0x1.7e565d2ec1009p-999, 0.0, 0.0, 0x1.73879ead6627dp-726, 0.0, 0.0, 0.0,
     0x1.864608abaed3dp-180, 0.0, 0x1.6e235433a33e6p-422, 0x1.2d36139ae801p-503,
     0x1.555962fac08f4p-142, 0x1.4c43dbfb728p-1022, 0.0, 0x1.86806843aa003p-474, 0.0,
     0x1.0299d9b5b0b3p-896, 0x1.58c2405917c4dp-836, 0.0, 0x1.d4bfb66cec8dap-231, 0.0,
     0x1.f7c51e1f37ca3p-578, 0x1.e1473aced26dep-648, 0.0, 0x1.4a64929d4066bp-151,
     0x1.9815698b702edp-51, 0x1.31b63a0f3751p-100, 0x1.b6c043ed197d8p-385,
     0x1.d28f8e20247f1p-470, 0x1.36e7eb8a6cfe3p-692, 0x1.37d1b8d1a4f0fp-770,
     0x1.c16351db92103p-721, 0x1.659b2449cae2dp-64, 0x1.dd86dd3eed908p-973,
     0x1.6b99120e4c322p-766, 0.0, 0.0, 0x1.ba626f359f25bp-465, 0x1.8c12c084accdap-498,
     0x1.161fcbcd6d5a1p-577, 0.0, 0.0, 0.0, 0x1.48c4fd9fa61f4p-537,
     0x1.414d4eeac0fe2p-157, 0x1.97bb4a252dfaep-313, 0x1.699efdd25e3fp-753,
     0x1.42ce804c06755p-61, 0x1.f623225a3f2aap-252, 0x1.04fd1bf03f0e9p-630, 0.0, 0.0,
     0x1.2307a48c34dfap-902, 0x1.ecdc4e482b64ap-148, 0x1.08c50878969bap-388, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.353ef4ce45957p-560, 0.0, 0.0, 0.0,
     0x1.1ba2e53518d4ap-951, 0x1.90d539c89f085p-744, 0x1.e78ab02432ba9p-288, 0.0, 0.0,
     0x1.4389a0079aa96p-757, 0x1.474a4e690b6cap-128, 0.0, 0x1.eedeab021169ep-604,
     0x1.b05c8ac4b0f28p-143, 0x1.1391bd3b65acap-770, 0x1.ea14bc318de26p-822,
     0x1.cd4fa8a52c251p-808, 0.0, 0x1.fdbcbdb5f8b13p-657, 0x1.60f302aeef9cp-731, 0.0,
     0.0, 0x1.3188da5010f09p-984, 0x1.02f6a71896daep-948, 0.0, 0.0,
     0x1.2d38edc018fe3p-141, 0.0, 0x1.a52e2cc075f89p-560, 0.0, 0.0, 0.0,
     0x1.8ad08a5c8cbcbp-79, 0.0, 0x1.166451719249bp-352, 0x1.cf44078fd9e84p-270, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.756607bec8963p-668, 0x1.76f628328cdf4p-837,
     0x1.415c3fce24126p-603, 0x1.31201a6d3f24ep-694, 0x1.d14bfa2d6bc7cp-732, 0.0, 0.0,
     0.0, 0x1.e0b528931ac86p-884, 0.0, 0x1.0e13ceae0f6cep-318, 0.0,
     0x1.c1b2f7d875368p-498, 0.0, 0x1.b7f93ecd1febbp-779, 0.0, 0x1.349c2d3c85788p-910,
     0.0, 0x1.af05c6f2f379ep-848, 0.0, 0.0, 0x1.a36fd497f2b9ap-416,
     0x1.7e7ba9392cd94p-689, 0.0, 0x1.c39cbbfc6cc55p-853, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosd1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
