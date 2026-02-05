/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d2_u10kvx.c --function Sleef_exp2d2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.8369d2d17b0f3p-930, 0x1.13410c2a12619p-713, 0x1.1268783c242c9p-41, 0.0,
     0x1.888da3d498d14p-403, 0.0, 0x1.49ab6082e6946p-356, 0.0, 0.0,
     0x1.fa0a3e9bde6efp-395, 0.0, 0.0, 0x1.ed81d93418557p-344, 0x1.14cb860be6d2p-317,
     0.0, 0.0, 0x1.1bd31d332d443p-91, 0.0, 0x1.c3e68ec3478a2p-881,
     0x1.49feefa32ff4dp-792, 0x1.c96f58dcb30e8p-916, 0x1.9bbd558763ba8p-178,
     0x1.96b50bb0a2b73p-126, 0.0, 0x1.1cfb6728df86ep-353, 0x1.b994273999b3dp-289,
     0x1.b7c2ce6944044p-499, 0x1.e2136362b8c0ap-573, 0.0, 0x1.65f687280e68bp-525,
     0x1.88404d49f59c2p-552, 0.0, 0.0, 0x1.062a5f0c8a1eep-699, 0.0,
     0x1.0c4e215ae7248p-666, 0x1.9c4aa8204e624p-1022, 0x1.4a1eb738c38fap-288, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f8fe3b63b4f48p-685, 0.0, 0x1.fa5e926b8f187p-47,
     0x1.78e6c5e6027cep-961, 0.0, 0x1.9bfe6b2d2d2c6p-698, 0x1.63c6fa38aaf3ap-436,
     0x1.6f916e82e0dccp-460, 0.0, 0x1.817b66b9bedeep-612, 0.0, 0.0,
     0x1.d35727c71a5a3p-995, 0.0, 0x1.58be7e8e305dap-466, 0x1.d0cf9b685b2efp-500, 0.0,
     0.0, 0x1.77d999d745bb4p-822, 0x1.8b05680270767p-376, 0.0, 0x1.32d5de9d2a176p-408,
     0.0, 0.0, 0.0, 0x1.aea0447f2e3e2p-401, 0x1.21865c9a054cfp-701,
     0x1.7b7b74bdab9bdp-556, 0.0, 0.0, 0x1.574f2ca1c1f8fp-22, 0.0, 0.0, 0.0, 0.0,
     0x1.26f2f25f808a2p-210, 0.0, 0x1.47817095ecb73p-909, 0x1.1ecca7e77a725p-915,
     0x1.f1cdfd5c0288ep-109, 0x1.ab306e3ae2dfp-93, 0.0, 0.0, 0x1.f56c3a19765c9p-970,
     0x1.2b09127933bf7p-50, 0.0, 0.0, 0.0, 0x1.2719bef949052p-36,
     0x1.8b747981b04f7p-296, 0x1.35742dba217d2p-240, 0.0, 0.0, 0.0,
     0x1.edf1b70935236p-81, 0.0, 0.0, 0x1.659953cb6ec5bp-403, 0.0, 0.0, 0.0, 0.0,
     0x1.4366dc3d65ae4p-40, 0.0, 0x1.7f346db3bd03dp-498, 0x1.7004d37fcda98p-922, 0.0,
     0.0, 0x1.9784a8bee2a82p-766, 0x1.4990780958a54p-252, 0.0, 0.0, 0.0,
     0x1.332ddfd0b6987p-426, 0x1.2012b1415f131p-72, 0.0, 0.0, 0x1.9909db420f8d2p-831,
     0x1.b625d9289829cp-17, 0.0, 0x1.7a5644b0ed169p-179, 0x1.409ec6df23616p-788, 0.0,
     0x1.73b03f1834792p-489, 0.0, 0.0, 0x1.2cd43d895e9e6p-905, 0x1.990fb0c6ed068p-336,
     0x1.240b88c11ddcdp-834, 0x1.5300b04f7844ap-550, 0.0, 0.0, 0x1.bf2203614f498p-213,
     0x1.38421716e841cp-554, 0.0, 0.0, 0x1.a9a91c6ec5d8dp-635, 0x1.d326bdd28edf7p-294,
     0.0, 0.0, 0x1.9ded702d5690fp-870, 0x1.5840871a7d859p-983, 0x1.226984a0b6f94p-409,
     0.0, 0x1.910ca4e7d9e68p-552, 0.0, 0.0, 0.0, 0.0, 0x1.5b73a4d193cb8p-717, 0.0,
     0x1.57f02dcf6da38p-801, 0x1.1d9f0b51c5d5cp-862, 0x1.0b538f8beba6p-513,
     0x1.da3d9bb3da952p-112, 0x1.a99632ab17182p-162, 0x1.981ee4c4894dep-550, 0.0, 0.0,
     0x1.7543e76095579p-170, 0.0, 0.0, 0x1.bd211cc96decbp-900, 0.0, 0.0,
     0x1.f2d5350bf731p-99, 0x1.ca4b4c7d6f714p-231, 0.0, 0x1.c50a672340987p-659,
     0x1.726524f305e2p-458, 0x1.7f0dfeb1d17cfp-70, 0.0, 0x1.3d6f7703fd295p-813, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e249bd1aaeb8p-192, 0.0,
     0x1.0b8ce50fee3acp-298, 0.0, 0x1.134d1d2827a62p-918, 0.0, 0x1.da55b15ebcbbp-930,
     0x1.5465faea9a2a8p-74, 0.0, 0x1.7046592252cf9p-219, 0x1.02d1c646be965p-416,
     0x1.eae53a6401a1ap-847, 0x1.ada0eade48d2p-667, 0x1.29b2d9d18c7c8p-298, 0.0, 0.0,
     0.0, 0x1.e23c6a012bc04p-396, 0.0, 0x1.7ee9acb46f223p-194, 0x1.55fdeac55d971p-298,
     0.0, 0x1.33a3ac877f0d5p-602, 0.0, 0x1.55b7f3d6b49cfp-647, 0.0, 0.0, 0.0,
     0x1.5c7dca63eca82p-834, 0x1.c09a532b938d4p-563, 0.0, 0x1.f6a42e466e711p-398,
     0x1.da204532f34a4p-392, 0.0, 0.0, 0x1.530f3ddf87e71p-181, 0.0,
     0x1.cfc68382cbbe1p-21, 0.0, 0x1.0be6107ca9ae7p-533, 0x1.e4c2295a683f4p-200,
     0x1.3c1d6bf952a47p-588, 0.0, 0x1.70f21c18ed464p-28, 0x1.b2f7becfc372ap-108, 0.0,
     0.0, 0.0, 0x1.4274b3022f3b5p-457, 0x1.94f45144113d9p-813, 0.0,
     0x1.cec91165da586p-373, 0.0, 0.0, 0x1.2df256d83ae8fp-998, 0.0, 0.0, 0.0,
     0x1.451b80377ffd8p-951, 0.0, 0.0, 0.0, 0x1.4ce19cabd4824p-198, 0.0,
     0x1.419c47d45ef9bp-117, 0x1.74bd0dccabec6p-623, 0x1.faca83b1944p-79,
     0x1.c4265056f127cp-22, 0x1.72d50785b178ep-64, 0.0, 0.0, 0.0,
     0x1.9de650d3791f2p-177, 0x1.dd829acba115fp-54, 0.0, 0x1.22eb16588a51dp-809,
     0x1.8c20edd0394d1p-372, 0.0, 0.0, 0x1.342f1f19b923ap-480, 0.0, 0.0,
     0x1.349a274011d8dp-710, 0.0, 0x1.4a4250ca4bcacp-947, 0x1.bb7a6686c9c29p-346,
     0x1.471cb3f3a4d1dp-999, 0.0, 0.0, 0x1.b17c8acc4aacap-767, 0x1.eb30e3971c657p-216,
     0x1.b33507a5aa593p-690, 0x1.e850f09b56767p-970, 0x1.6e9ff72a8c5f4p-953,
     0x1.d5c3f1ff4b4acp-15, 0.0, 0x1.df793de76918p-605, 0x1.324d82593cfd5p-28,
     0x1.4ddb49f456192p-129, 0.0, 0.0, 0x1.50b3c4c0f392p-248, 0x1.ecd1e86a96ac3p-854,
     0x1.75987f3508a1bp-116, 0.0, 0x1.7ea92c0e66a39p-805, 0x1.100f312c58db4p-157,
     0x1.16abe06b88dd9p-12, 0.0, 0.0, 0x1.e5ec692d077dp-389, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.570827d082f8cp-492, 0x1.cf91d25caa2bbp-974, 0x1.f1a94a80e71b8p-619, 0.0, 0.0,
     0.0, 0x1.40d96948c5d6fp-448, 0x1.9794492939e39p-813, 0x1.0629af722a643p-687, 0.0,
     0x1.1e4b109c0df7bp-329, 0.0, 0.0, 0x1.05ad14e2ba298p-403, 0.0,
     0x1.a28e8a0a37bf9p-588, 0x1.02ad09656c83bp-812, 0x1.ff513c9baae66p-687, 0.0,
     0x1.e1df7870cede7p-785, 0x1.5c43af9546ab3p-54, 0.0, 0x1.9a9aa70a4a032p-886,
     0x1.ed84a0cb81cf2p-948, 0.0, 0x1.350bc788db523p-860, 0x1.a263aafa5c6fcp-583, 0.0,
     0.0, 0x1.36d7b0d3a3ac1p-465, 0x1.f12a51b3ddb11p-687, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c018bccf30dcfp-255, 0x1.d2c7e77b6e91ep-979, 0x1.74690b560663bp-132,
     0x1.0ca9c6cc06465p-544, 0.0, 0x1.2c260d26aedcp-810, 0x1.56cf9d48fcbe6p-167, 0.0,
     0x1.02b8eb80744a3p-158, 0.0, 0x1.f12133e957691p-800, 0.0, 0.0,
     0x1.880727e948fddp-554, 0.0, 0.0, 0.0, 0x1.9dfc333512268p-793,
     0x1.5727b27d083d3p-407, 0x1.93d3a544f1d03p-14, 0x1.cbee8880bc6ffp-729,
     0x1.b7d16aced114ep-856, 0x1.9228563b4bfap-309, 0.0, 0x1.cebf5cae15d23p-40, 0.0,
     0.0, 0x1.dfc80237fe55cp-740, 0x1.bf032a92714fcp-749, 0x1.c1d3396647d3ep-47,
     0x1.e114aec51295ap-123, 0.0, 0.0, 0x1.edfb1048bbe9p-309, 0.0, 0.0,
     0x1.95772994bc103p-761, 0.0, 0x1.87455c37ba94p-478, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da80d82569955p-905, 0x1.42225527aa7b1p-227, 0x1.7584ddfc242bcp-180,
     0x1.b89c05b6f2a63p-354, 0x1.a6889e8d6353cp-20, 0.0, 0.0, 0x1.f9e0f75c6eb4ep-1018,
     0x1.f45b59551a042p-108, 0x1.2cf750811613bp-434, 0x1.969039fc29bc1p-911,
     0x1.1c1f7aa2bf594p-254, 0x1.e754018860073p-742, 0.0, 0x1.ed1dac9d6c5dp-18,
     0x1.a601fea8dc40cp-861, 0x1.654c4e6891c52p-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7e22ffb8f2843p-726, 0.0, 0x1.93a4500941cdbp-14, 0.0, 0x1.fb2b3f4ce605dp-214,
     0x1.52e11ceb6acdp-446, 0.0, 0x1.2aa922e8d1c13p-775, 0.0, 0.0, 0.0,
     0x1.5c01c092323a8p-660, 0.0, 0.0, 0.0, 0x1.78c1a2271a1d3p-231, 0.0, 0.0,
     0x1.17fe49613785dp-813, 0.0, 0x1.c2d7c6352c809p-507, 0x1.50f519b822cdbp-606, 0.0,
     0x1.e6f54162c4434p-553, 0x1.68361956cd02cp-366, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.143db1de85603p-977, 0.0, 0.0, 0x1.c6c75c0ea3a83p-884, 0.0, 0.0,
     0x1.105cbea856834p-837, 0x1.d081af446f822p-678, 0.0, 0x1.0be08774964b5p-322, 0.0,
     0x1.fad4b0532d02dp-257, 0.0, 0x1.248ff9246234bp-575, 0.0, 0.0, 0.0,
     0x1.3f440e53780bp-840, 0x1.315765ce5e05dp-185, 0.0, 0.0, 0.0,
     0x1.17ac4a1201627p-436, 0.0, 0.0, 0x1.015da10aa2cefp-562, 0x1.c80d94b733c03p-256,
     0.0, 0.0, 0x1.1118d502580dp-694, 0.0, 0x1.f7dc13200585p-383, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.09a27081f2b47p-263, 0x1.f62008f1daf18p-878, 0x1.711e5500f3409p-794, 0.0,
     0.0, 0.0, 0.0, 0x1.be478b136cfbdp-826, 0x1.56442778279b3p-592, 0.0,
     0x1.3cff78bcd38e1p-618, 0x1.b50472b9307bbp-826, 0x1.41db4503a6387p-830, 0.0, 0.0,
     0x1.7ee624855c8cep-87, 0x1.3b65332023008p-535, 0.0, 0x1.ad5ac0bc9ade1p-985, 0.0,
     0x1.7926baa302402p-162, 0.0, 0x1.43cd0d92bf444p-776, 0x1.31e7ca016893ep-241,
     0x1.579f574103e3bp-324, 0x1.b3f35dd56b8ffp-242, 0x1.cca8e355834c8p-549, 0.0,
     0x1.016a3e586fa21p-218, 0.0, 0.0, 0x1.684e584457c38p-912, 0x1.d8b9b681491a3p-316,
     0x1.0031a115ea91dp-25, 0x1.5a9d5dcfb6bdep-446, 0.0, 0.0, 0x1.1d55d2ea51e6ap-226,
     0.0, 0.0, 0x1.ede5b5a889baap-367, 0.0, 0.0, 0x1.9a38fac9f345dp-648, 0.0,
     0x1.eab01ecaff041p-109, 0x1.e3d76db8f0d1dp-885, 0x1.0602b62c80b46p-740,
     0x1.b06015d44f2ep-14, 0.0, 0.0, 0.0, 0x1.1ee43841d82cep-558,
     0x1.ec63d53d1039dp-332, 0x1.f9e711d265449p-576, 0.0, 0.0, 0x1.61bfef540d09ap-989,
     0.0, 0x1.b68aa678b767bp-846, 0x1.05b6fe5404a36p-429, 0.0, 0x1.f6e45fc4286e8p-916,
     0.0, 0.0, 0x1.3f13eba1f8a7p-397, 0x1.e6eaa94db1872p-432, 0x1.261a97af415a6p-411,
     0x1.561333d2d4bfdp-605, 0x1.e5e0c81fc6708p-98, 0x1.f55f10bd39d25p-471,
     0x1.e82a448d6c9f7p-629, 0.0, 0x1.e2e929f765aaap-309, 0x1.1a82ba5b07ep-322, 0.0,
     0.0, 0x1.4a7fb67ec3492p-737, 0.0, 0.0, 0.0, 0x1.7799545cd93aap-124,
     0x1.c6fdac2a8f92fp-720, 0.0, 0.0, 0x1.96de2637fadbcp-37, 0.0, 0x1p0,
     0x1.99e476ba942f8p-135, 0.0, 0.0, 0x1.ed5924729a1a6p-827, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b8ef94dfd3b07p-967, 0x1.1b53cc137c83fp-335, 0.0,
     0x1.c75033327fc43p-771, 0x1.f3fd5086b8934p-397, 0x1.d21ed5ffdf7afp-943,
     0x1.12207ab48f6b5p-469, 0x1.fbcded8dacd5ap-370, 0x1.b3fbc186c13ebp-364,
     0x1.27a547ae4cd5bp-128, 0x1.6c5bc344182a4p-666, 0x1.cd6c8b5e96a2ep-971,
     0x1.372adad2a90f6p-741, 0x1.905a905faebafp-257, 0x1.d69f4a1f984f2p-798, 0.0, 0.0,
     0x1.9b7dafc4d7c15p-500, 0.0, 0x1.0988db446943dp-300, 0.0, 0.0,
     0x1.f3bf7afabdfa7p-426, 0x1.0f50e00867d07p-893, 0x1.d144755e9dea4p-881, 0.0, 0.0,
     0x1.439116ad492a9p-619, 0x1.8e2053be64fc5p-246, 0x1.a36d2c0572511p-431,
     0x1.481df971e629ep-384, 0.0, 0x1.a2b7810be42b5p-902, 0x1.89bb7394b9e2p-412, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8e29db7f46aeap-282, 0.0, 0x1.e45f4bbe0d0fep-804, 0.0,
     0x1.1fdfa74259999p-531, 0.0, 0.0, 0x1.b1f12a454808p-506, 0.0, 0.0,
     0x1.ace6810c2593ap-416, 0x1.334b8a2dfd2e2p-290, 0x1.c2ae09a515d2fp-627,
     0x1.e156d3de3cf86p-723, 0.0, 0.0, 0x1.6a0785f81951cp-1015, 0.0, 0.0,
     0x1.10a6f944bf43p-480, 0.0, 0x1.12c23100f9e5dp-382, 0x1.dbafceb9920aap-752, 0.0,
     0.0, 0x1.cb2022dffcf53p-982, 0.0, 0.0, 0x1.efd64df1fd6f9p-998, 0.0,
     0x1.921519f347b59p-921, 0x1.c0f6164a36d8cp-160, 0x1.8a174c898a451p-433,
     0x1.ba99c42f78eacp-200, 0x1.f105539fd275ep-516, 0.0, 0x1.98049d686ff3p-862,
     0x1.bacbfa67dcc6dp-487, 0x1.2464281f42a49p-833, 0.0, 0x1.74017e5d8f553p-156, 0.0,
     0x1.89e0368dafd38p-157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f3ea8d7395ddcp-940, 0x1.071ab0b8f5c6ap-417, 0.0, 0.0, 0x1.1e88789e40251p-471,
     0x1.01db9c34f6fc4p-595, 0x1.2c96b4b40d69ep-5, 0.0, 0x1.5ce1739125f39p-247, 0.0,
     0.0, 0x1.2a15d9590125cp-339, 0x1.2ae297ac535ecp-587, 0.0, 0x1.6ec66575baccp-490,
     0x1.5cf4a5c987c68p-985, 0.0, 0x1.6b736723f5314p-212, 0.0, 0.0, 0.0,
     0x1.8763e5ff5f6b7p-645, 0x1.b2136e9f8d4afp-944, 0x1.2518c14c0662bp-598,
     0x1.365cf37bea953p-506, 0x1.47f9a93abf8eep-275, 0x1.e290a54be56dep-331, 0.0, 0.0,
     0.0, 0.0, 0x1.9e6e966eb2631p-353, 0.0, 0x1.03977b2c1896bp-6,
     0x1.8e71fbe443408p-1015, 0.0, 0.0, 0x1.c97e0f4e0fdbbp-918,
     0x1.8ddcfb2b37565p-647, 0x1.af7f79bbb7c55p-347, 0x1.d61ed63c16256p-942,
     0x1.ffb2ac19be5ebp-261, 0x1.b646ddec7d812p-914, 0x1.32c10248aef02p-363, 0.0,
     0x1.e352afde363adp-694, 0.0, 0x1.055be3fbe5ee3p-473, 0x1.a54281fc0d431p-116,
     0x1.4518f66a92c2ap-242, 0.0, 0x1.69771231f2031p-1021, 0.0,
     0x1.303447f124d66p-281, 0.0, 0.0, 0.0, 0.0, 0x1.ff3cb64c2a07p-150,
     0x1.5d5aed16a330ep-57, 0.0, 0x1.7e4f61cc4554ep-818, 0.0, 0.0,
     0x1.ff18e8a8be201p-850, 0x1.50fa116cce5dp-235, 0.0, 0x1.4cf597377a075p-630,
     0x1.86dbd6c68825p-767, 0.0, 0x1.1b6b94b23178fp-48, 0.0, 0x1.d24eaabb52f76p-606,
     0.0, 0x1.d1400a153d7d4p-995, 0.0, 0.0, 0.0, 0.0, 0x1.75c3069106527p-855,
     0x1.54b0953f92d1dp-334, 0x1.63f451cd2dfaep-5, 0.0, 0x1.5096e729ddce8p-882,
     0x1.fa5dd7178d4a8p-380, 0.0, 0x1.6f033c9cc4c51p-771, 0x1.9c804278760c8p-849, 0.0,
     0x1.d977abd14ed2ap-428, 0x1.473c3e5bef965p-766, 0x1.94a8133440534p-824,
     0x1.21c780ba33814p-569, 0.0, 0.0, 0.0, 0x1.9af3bf7c1d8fep-532,
     0x1.2cf1e1cfb65b2p-778, 0x1.a7f0c61007e58p-740, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8722be26b8e2fp-196, 0x1.c02a2af916203p-595, 0.0, 0x1.44419e167e27p-227, 0.0,
     0x1.59674e65d1019p-378, 0x1.d0fa858e10d2dp-140, 0x1.c34dd4247be0fp-637,
     0x1.9ab59e38fac4p-1015, 0.0, 0x1.0fda0fb02b39dp-766, 0.0, 0x1.9fb70e4bbec84p-550,
     0.0, 0x1.100de6e8dd2bcp-1017, 0.0, 0x1.0c21f69b6c251p-523, 0.0, 0.0, 0.0, 0.0,
     0x1.cedaadbcc0b4fp-715, 0x1.4f2507b0838d9p-965, 0.0, 0.0, 0x1.fb7cf1ba68164p-347,
     0.0, 0.0, 0.0, 0.0, 0x1.dbf59cdb6c02fp-614, 0.0, 0x1.d402f4e7ee401p-461, 0.0,
     0x1.6fe2b52ee9f32p-283, 0.0, 0.0, 0.0, 0x1.c8e8accc8f158p-84, 0.0,
     0x1.c7b507baaa52ap-401, 0x1.0dc94d6ed2218p-510, 0x1.f9164a2d0fc22p-946, 0.0,
     0x1.fe581e354fd79p-717, 0.0, 0x1.9cbee0e7636d4p-690, 0x1.566cf8a13305p-89, 0.0,
     0.0, 0.0, 0.0, 0x1.d16923c623931p-512, 0.0, 0x1.91bed6c36e9e4p-891, 0.0,
     0x1.afa5c90eec225p-627, 0x1.a4150c81cca9ap-629, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.07f43a0d5839p-289, 0.0, 0.0, 0.0, 0x1.4ea5f6f5d348ap-159,
     0x1.51632803d1c35p-846, 0.0, 0.0, 0x1.4c68d44f0477dp-791, 0.0,
     0x1.38409edbcceaap-1008, 0x1.41835b70f50d7p-339, 0.0, 0.0, 0.0,
     0x1.6a1c7ab710949p-483, 0x1.7c1d4aaad2c22p-136, 0x1.1afc77d61d80ap-954,
     0x1.1f0d7a1d075eap-899, 0x1.f3ad366a5d052p-174, 0x1.1977635e375abp-699, 0.0,
     0x1.85769f420845p-70, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b3edb3e96cf65p-606, 0.0,
     0x1.08a4fde4faceep-996, 0.0, 0x1.85ff4b6a41f6ap-665, 0.0, 0.0,
     0x1.f9d1feefef5e4p-290, 0x1.4609a311a82fap-308, 0x1.8c4d0d5bfb77p-835, 0.0, 0.0,
     0x1.604d13c5f85b6p-340, 0.0, 0x1.67f1a0e92efd7p-225, 0x1.e10cdde7450ebp-64,
     0x1.97505fa9f8c7cp-737, 0x1.e257f2ec01c5p-319, 0x1.369ee9b7355abp-879, 0.0, 0.0,
     0.0, 0.0, 0x1.b8976d21e233dp-235, 0.0, 0x1.ccbb6b4e902c1p-850, 0.0, 0.0,
     0x1.b4e36611ae38cp-1012, 0.0, 0.0, 0x1.e3102c0d9a251p-365, 0.0,
     0x1.699f8fd1154bfp-182, 0.0, 0x1.623ec0da788c6p-292, 0x1.656327113b62fp-346,
     0x1.df73efcad4b7fp-684, 0.0, 0.0, 0.0, 0.0, 0x1.9b272ceee5528p-818,
     0x1.45ab95a19546bp-423, 0x1.b06afd15cafe7p-671, 0.0, 0x1.5ca6ea1b2cddp-931, 0.0,
     0x1.f627a88693fd6p-556, 0x1.55e7f6b5d16a9p-827, 0x1.0a45b8df819d6p-490, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.76cea9ae539eep-149, 0x1.06aa83bb0944cp-297, 0.0,
     0x1.a95c8dcb1cf2fp-943, 0.0, 0.0, 0x1.2c55e7e907da9p-322, 0x1.6755a7cd80681p-826,
     0x1.5a3fb75c8d615p-139, 0.0, 0x1.d3b85f2b48b45p-124, 0x1.0d2742ad790a3p-382,
     0x1.af16dcd0da084p-963, 0.0, 0.0, 0.0, 0x1.f6f0272678a3bp-417,
     0x1.0f20d0d509877p-42, 0x1.f75ffe417b163p-201, 0.0, 0.0, 0x1.99a100bd704b9p-898,
     0.0, 0.0, 0x1.e5adee7a8aaf4p-384, 0.0, 0x1.260107d780835p-502,
     0x1.2a7fe06ac257fp-184, 0x1.cbbee4f0eb42cp-182, 0.0, 0x1.f965a40bb590cp-185,
     0x1.4078332dcb39ap-88, 0.0, 0.0, 0.0, 0x1.beba39ebc28b3p-617,
     0x1.3cce523eba475p-891, 0.0, 0x1.6042d5f04bd6ep-575, 0x1.48ed186b99b6cp-876,
     0x1.db1ca4d64447ap-682, 0x1.708b47022c932p-933, 0x1.2ac42a81be7a7p-957,
     0x1.c582fd42a7aaep-812, 0x1.d2b58a1d51042p-223, 0x1.6fa33128a933bp-699, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.54ec410f5549dp-656, 0.0, 0.0, 0.0, 0.0,
     0x1.8da27a2a697cap-478, 0.0, 0.0, 0x1.35aa3950dba5cp-271, 0.0,
     0x1.ad927d83f682fp-305, 0x1.fbcee934bc2dep-404, 0x1.c250c5fa67acbp-1004,
     0x1.5bb85841b121ap-443, 0x1.3436d8c9d589cp-751, 0.0, 0x1.2e7b6d8b10d0bp-950,
     0x1.54dc6c4c378fep-705, 0x1.e40c76c0fbe23p-565, 0.0, 0x1.54d9f659b915dp-402,
     0x1.369044ef343b9p-762, 0x1.c1e76d827396cp-890, 0x1.ad5dd607c4c4cp-833, 0.0, 0.0,
     0x1.7c930a80475b1p-615, 0x1.480ad7420ebd5p-146, 0x1.b5fd01c0dc9b9p-287, 0.0, 0.0,
     0x1.dd13573bf609cp-439, 0x1.8776f7cbf59c3p-635, 0.0, 0x1.bb7bd14c0438dp-119, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_exp2d2_u10kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_exp2d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp2d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
