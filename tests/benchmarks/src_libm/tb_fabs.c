/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_fabs.c --function fabs --headers math.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.5ed23c877497bp-364, 0x1.8f0d4416e08d6p-125,
     0x1.02dac46c8583ap-629, 0x1.24a3a72163c51p-243, 0x1.f5f2a2e57b701p-419, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c3a7a344ff5ep-565, 0.0, 0x1.a3b3f2befd0cap-6,
     0x1.1ffbbc3a8f808p-488, 0.0, 0x1.810132bb5397cp-11, 0.0, 0x1.d445554de5355p-161,
     0x1.d9df623610852p-202, 0.0, 0.0, 0x1.e6f193afe7fb9p-540, 0.0, 0.0,
     0x1.a3853f163a2dcp-141, 0x1.1b020cf7c0b9cp-522, 0x1.a9b73e8e178cp-820, 0.0,
     0x1.f9182163fe86cp-94, 0x1.ce1585e8f7f04p-654, 0x1.42497a4c53cd2p-831,
     0x1.ccb4d75d2e65cp-333, 0x1.15fc9d0c4895dp-283, 0.0, 0.0, 0.0,
     0x1.ba0ca3758e298p-296, 0.0, 0.0, 0.0, 0.0, 0x1.5dc5b0cc46df3p-69,
     0x1.396011d297e14p-183, 0.0, 0.0, 0x1.0004e92298345p-896, 0x1.19029e8b8be1bp-639,
     0.0, 0x1.c125dafb6a903p-326, 0x1.0feb44df1a342p-525, 0.0, 0.0, 0.0, 0.0,
     0x1.d2ea3e1b055bdp-253, 0x1.5a69d819e86f5p-420, 0x1.721549d433b84p-701,
     0x1.f7f71b6d12f49p-590, 0x1.c4a21495ce6f7p-211, 0.0, 0.0, 0x1.f18313cb6ecbbp-372,
     0.0, 0.0, 0.0, 0.0, 0x1.e50050a0b85adp-132, 0x1.c40552f7db16p-105, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53b73aa3f468bp-203, 0x1.4a044063da6a7p-67, 0.0, 0.0,
     0x1.6a0bf876f29e2p-126, 0x1.885e781e998f5p-951, 0x1.afdf899721c36p-266, 0.0, 0.0,
     0.0, 0.0, 0x1.a92950aca2beap-99, 0x1.f9b00b6ec0f3dp-57, 0.0,
     0x1.cf927f9728a51p-612, 0x1.f00c9b3ca235bp-654, 0x1.483b15e3c97c6p-917,
     0x1.91ed3fb45fdc8p-902, 0x1.bc8ea3e054d55p-753, 0x1.d70c67d8972dp-920,
     0x1.bddd265485cbep-15, 0x1.361a1c5115746p-675, 0x1.13a4e45ae907ep-422,
     0x1.10f1a22ea78a3p-404, 0x1.4c13d7446ed2bp-748, 0.0, 0x1.6c80677de8ac8p-46,
     0x1.26ad23a7d063cp-557, 0x1.2033d9771c633p-270, 0.0, 0x1.5a052974df178p-987, 0.0,
     0.0, 0x1.fc50e3dbade0ap-860, 0.0, 0x1.da6470d7571b7p-520, 0.0,
     0x1.d8be42aff93a3p-250, 0x1.38de7f7bdce2dp-554, 0x1.786cd80393864p-205,
     0x1.f566be548c438p-431, 0.0, 0.0, 0x1.55962422301aep-284, 0.0, 0.0,
     0x1.27ac6aeeae77ep-900, 0.0, 0x1.b220b4e930623p-970, 0x1.6d1e20f75d485p-294, 0.0,
     0x1.b02bf5e3539c3p-583, 0.0, 0x1.e3b1eeb18a82bp-42, 0.0, 0x1.32ec99d26679dp-39,
     0x1.0dd11330b7fb6p-358, 0x1.69c47f0565a76p-102, 0.0, 0x1.d0e222080a365p-460,
     0x1.925c6db702368p-629, 0x1.7914e88f46d41p-588, 0x1.9886c9fcd2089p-729,
     0x1.e2e5599f3f6abp-106, 0.0, 0.0, 0x1.931ccb66ae9c2p-268, 0x1.6a1123f6eff02p-875,
     0.0, 0x1.4b144cc24a046p-453, 0.0, 0.0, 0x1.a0eed18c9aed3p-430,
     0x1.fd0a5addac2bdp-898, 0.0, 0.0, 0x1.0cbcc61cbf35p-476, 0.0, 0.0,
     0x1.2eae2d56fa9c1p-644, 0x1.838feb0e0b459p-903, 0.0, 0.0, 0x1.a4542d719aac1p-585,
     0x1.87da4f2524bccp-981, 0x1.0386cb2a53b69p-340, 0x1.931f389ab36f7p-46,
     0x1.e61c9bf28d1aep-464, 0x1.7b4e616e755e1p-965, 0.0, 0x1.6c480f34454bfp-381, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9c0ab60768ff4p-401, 0x1.9d3270c9dfc4bp-429,
     0x1.28b6a175cecc3p-248, 0.0, 0.0, 0.0, 0.0, 0x1.0d282b343e3ecp-41,
     0x1.c330013434f74p-613, 0x1.c5f2dffca92p-133, 0.0, 0x1.9843d62e03647p-399,
     0x1.663a05d5c45e4p-907, 0x1.cf02f244947fcp-417, 0x1.f1dddb79b0e1dp-313,
     0x1.1f6f70bcc67ddp-46, 0.0, 0x1.2b63f90bc26dcp-827, 0x1.690e83a26e6a2p-37,
     0x1.f65db5683db58p-88, 0.0, 0.0, 0x1.28922c3eaa2d7p-6, 0.0,
     0x1.117a9e67f1e43p-658, 0.0, 0.0, 0.0, 0.0, 0x1.535e666788116p-20, 0.0,
     0x1.fc8f2bf250511p-461, 0x1.c444572ce8032p-606, 0.0, 0.0, 0x1.41bfea13d17bp-491,
     0.0, 0.0, 0x1.7860ca57f6493p-235, 0x1p0, 0x1.3389dcf229228p-908, 0.0, 0.0,
     0x1.756aa9cf94e8cp-284, 0.0, 0x1.da402975c46c2p-431, 0x1.a387889f8e18fp-922, 0.0,
     0.0, 0x1.0548fb79c3c2cp-228, 0x1.6d9ad43f77bd1p-964, 0.0, 0.0, 0.0,
     0x1.fa70052cf9cd3p-238, 0x1.dc4ea481d2629p-516, 0.0, 0x1.7965e91bc23p-573,
     0x1.b019913bcda3cp-699, 0.0, 0.0, 0x1.4fc2588f08545p-747, 0x1.9b5f99abb8af2p-754,
     0.0, 0.0, 0x1.9d651fd9a8567p-386, 0.0, 0x1.e377387c7202cp-639, 0.0, 0.0, 0.0,
     0.0, 0x1.ede8b80e8eadbp-593, 0.0, 0.0, 0x1.798e1ff88eab5p-907,
     0x1.e73539df2b23fp-265, 0.0, 0.0, 0x1.15210d4645464p-449, 0x1.e9752eec33becp-928,
     0.0, 0x1.b6b1d10c45dfdp-938, 0.0, 0x1.4df647d07db9cp-950, 0x1.fbdefd5013d5ep-977,
     0x1.d149700a54657p-675, 0.0, 0x1.badf258a4c04cp-299, 0.0, 0.0,
     0x1.27f4abd9cbd0dp-814, 0x1.c833ea051867p-230, 0.0, 0x1.145596f90b3a5p-59, 0.0,
     0.0, 0x1.6929e18ca235p-395, 0.0, 0x1.c9d13bd88154ep-206, 0.0,
     0x1.0e303892a662dp-466, 0.0, 0.0, 0x1.9ff20743358d2p-785, 0x1.1ea2ee9b708ddp-724,
     0x1.34e4ba01783b9p-90, 0x1.ccb4423c9abebp-525, 0x1.2d432bd9dbb56p-246,
     0x1.7770443af1a1dp-152, 0.0, 0x1.a060c2337a135p-145, 0x1.14517c19c6759p-918, 0.0,
     0.0, 0.0, 0x1.74910a478bf9ep-555, 0.0, 0.0, 0x1.e654689dac51ap-965,
     0x1.c755bed656f99p-330, 0.0, 0x1.d10471b3b2472p-838, 0.0, 0x1.d7a0e7f271a3p-416,
     0.0, 0x1.dfd8036137d5dp-378, 0x1.a728ee09662b8p-832, 0.0, 0x1.9b0f96ca6f372p-41,
     0x1.6c71f0bd0a38p-899, 0.0, 0.0, 0x1.9b1ac2c510de6p-680, 0.0,
     0x1.9653f51ebe5e3p-188, 0.0, 0.0, 0x1.5283f3ac90c7bp-905, 0x1.d0c3399dfa402p-344,
     0x1.910c8f161fbdep-697, 0.0, 0.0, 0x1.07f8747f9c1b2p-62, 0x1.6a5f83602f48ap-560,
     0.0, 0x1.0f69f3b861ab1p-417, 0x1.4bada01fa3537p-397, 0.0, 0.0, 0.0,
     0x1.17aa311fd81e5p-292, 0x1.b2b4d0b9e702dp-876, 0x1.2ae3efcd5c8fep-614,
     0x1.7b688530b04b5p-865, 0x1.eddc8b5d9c96ep-871, 0x1.dc7d82cd916ebp-210,
     0x1.8478a9c57c56bp-90, 0x1.a525e6da5ad4ap-162, 0.0, 0.0, 0x1.aec1083f39a3fp-412,
     0x1.5e64cf9105fd3p-396, 0.0, 0.0, 0.0, 0.0, 0x1.00fc8cf5cfa3ep-621, 0.0,
     0x1.da7621ac1aae6p-566, 0.0, 0.0, 0.0, 0x1.0d092fbd8e703p-329, 0.0,
     0x1.c089c3c3acccep-277, 0.0, 0x1.2baf780540207p-97, 0x1.12888934f0d67p-759,
     0x1.e639bd442b50cp-897, 0x1.d49399d3e77c9p-801, 0.0, 0.0, 0.0,
     0x1.7dc5d324ea48dp-400, 0.0, 0x1.4e8cbfca6b384p-789, 0x1.4269fcb4208b2p-216,
     0x1.ea79a0502a90dp-52, 0.0, 0x1.0956a417176dp-266, 0.0, 0x1.4c929e8a8f331p-734,
     0.0, 0x1.72ddce35bbf69p-172, 0x1.595f56290e656p-361, 0.0, 0.0, 0.0,
     0x1.83edf880f0a17p-368, 0x1.4cd659ff6a8fap-641, 0x1.de3ba5248a156p-761,
     0x1.e3abb326e6862p-787, 0.0, 0.0, 0x1.ef545dac82dbbp-324, 0x1.f488c564a0654p-88,
     0x1.d0eb90dcdd19ep-598, 0.0, 0.0, 0.0, 0x1.0fad63e7d4083p-33,
     0x1.b3a7f7ea81b88p-402, 0x1.44ec92eebeebcp-767, 0x1.a5c6376e38534p-189,
     0x1.e539080947d7dp-527, 0x1.a9b94197bf7a2p-1013, 0.0, 0x1.b4ddbd545b8d2p-547,
     0.0, 0.0, 0x1.fd1648f1f855ep-775, 0x1.84c9259de2811p-138, 0x1.c1d9cd5fae3cp-970,
     0x1.73a4834dc320ep-365, 0x1.5e9b49ecb9cf6p-709, 0.0, 0.0, 0x1.fc8069fcee882p-253,
     0.0, 0x1.ed84525024341p-217, 0.0, 0x1.b168b89223964p-507, 0x1.e2c3e6732eedap-641,
     0x1.82e939ae35affp-951, 0.0, 0x1.6d6c4c8f33a34p-422, 0.0, 0x1.58eb1c4fc590cp-628,
     0.0, 0x1.835c9c272b4dbp-565, 0.0, 0x1.7460b0d5ab87ep-179, 0.0,
     0x1.3aaafd7d0279p-61, 0x1.90a543ae629ep-135, 0x1.abdeb3cd04f1ep-980, 0.0, 0.0,
     0x1.848d4192e466fp-575, 0.0, 0.0, 0.0, 0x1.6a48e5612729bp-599,
     0x1.a919813b77f34p-558, 0.0, 0x1.04c4bba2b1782p-584, 0x1.a44a31ab1f449p-698, 0.0,
     0x1.861df59def012p-739, 0x1.3c8195e77ce1bp-977, 0.0, 0x1.957b76040b14fp-533, 0.0,
     0x1.a223e7ae8be82p-301, 0.0, 0x1.86204b5c6f166p-239, 0x1.c56f937833ce8p-546, 0.0,
     0x1.dc72d8133a5eap-47, 0x1.117fb17256c44p-795, 0x1.c3402c520115cp-10, 0.0, 0.0,
     0x1.e8d1a1b4c1b96p-345, 0x1.b36b4df324213p-494, 0.0, 0x1.8c899fd655c83p-246, 0.0,
     0x1.edc09e816b23p-708, 0.0, 0x1.d6c0fb8bf6675p-599, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d31083893760bp-747, 0x1.32fe60653ba9fp-915, 0.0, 0.0, 0.0,
     0x1.8242492739c8bp-15, 0x1.814e24c775aecp-761, 0.0, 0x1.9852b4b80e737p-888, 0.0,
     0.0, 0.0, 0x1.10871632f0aa6p-45, 0x1.fb96e90c8f9c2p-88, 0.0,
     0x1.57199ca887117p-744, 0x1.3b3d972219783p-229, 0.0, 0x1.39fd4781c3ccp-400,
     0x1.6088e3c2364a6p-680, 0x1.f301a03c05744p-979, 0.0, 0.0, 0x1.78a9e6f58cae3p-166,
     0.0, 0x1.ec177aa082905p-779, 0.0, 0.0, 0.0, 0.0, 0x1.9c97fe634fee1p-578, 0.0,
     0.0, 0x1.5849d9001369dp-541, 0.0, 0x1.c156ed42265b1p-872, 0x1.5ab4c519042aep-413,
     0x1.6df1f691ebff9p-738, 0.0, 0x1.72a05927e8b57p-779, 0x1.88cfa09a2419bp-467,
     0x1.bafa10dbcaaf5p-849, 0.0, 0x1.9e3a084a9990ap-292, 0x1.e7fc14c9753cbp-611,
     0x1.edeface2f4748p-400, 0.0, 0x1.b839f4367159fp-268, 0.0, 0.0, 0.0,
     0x1.7c4614a85b1cfp-656, 0.0, 0x1.e1ffd155a3cd8p-85, 0.0, 0.0, 0.0,
     0x1.206c1cce46cbfp-652, 0.0, 0x1.ea65041dab5ap-805, 0x1.857f7bdc519cfp-669, 0.0,
     0x1.ae5c28870599cp-261, 0.0, 0x1.43af01df56d53p-814, 0x1.73ed4bdd525b9p-967, 0.0,
     0x1.985d9a220262fp-9, 0x1.3487394483d23p-58, 0x1.152a137629dc7p-178,
     0x1.af34e9cc15153p-858, 0.0, 0x1.e545b892d84a7p-212, 0x1.a9dcd610749ep-147, 0.0,
     0.0, 0x1.89252e72db4aap-839, 0.0, 0x1.8b1121acf6f23p-430, 0.0,
     0x1.1dc258eacabe5p-790, 0.0, 0x1.dcc496903f86cp-290, 0x1.b4594e45611bbp-582,
     0x1.5df7cee67eb08p-591, 0.0, 0x1.681bc60830011p-90, 0.0, 0.0,
     0x1.987ee20ef1b57p-798, 0x1.30cabaa67a65p-149, 0.0, 0x1.3abd96993a6fcp-227,
     0x1.c408eeaf39b11p-572, 0x1.0b05bf0120f26p-874, 0x1.ec1bf75cde1e6p-290, 0.0,
     0x1.1678c760541e9p-701, 0x1.1a40c4c4ff375p-551, 0.0, 0.0, 0.0, 0.0,
     0x1.73da899144d24p-898, 0.0, 0.0, 0x1.5d5decf3645cbp-62, 0x1.b11b97704b653p-529,
     0x1.09bb80b3c9b3ep-346, 0x1.d260c117bab16p-98, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b07c1fe8f66ap-114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6775744f61a88p-267,
     0.0, 0.0, 0x1.150208177a0acp-977, 0x1.4cee72d4ff6f1p-924, 0.0, 0.0,
     0x1.757422fa4d242p-496, 0x1.ef9b0f80bc692p-194, 0x1.9b4954575ce73p-572,
     0x1.3128177401793p-254, 0.0, 0x1.f44c9ace16c4bp-259, 0.0, 0x1.2c110378cab0ep-825,
     0.0, 0.0, 0.0, 0x1.e1c243283e39fp-290, 0x1.f1e088dc4c0ddp-217,
     0x1.fcc42447b7cc4p-946, 0x1.af95b54296a19p-396, 0.0, 0x1.aca572eae0354p-886,
     0x1.a78be5ccd77c9p-413, 0.0, 0.0, 0x1.7936250987eeap-549, 0.0, 0.0,
     0x1.0797a59dc4222p-628, 0.0, 0x1.d3022b7f1840cp-320, 0x1.bb8cf8d978918p-835,
     0x1.50097588b552fp-4, 0x1.bc2baec70199p-478, 0.0, 0.0, 0.0, 0.0,
     0x1.b2de7e6f4f814p-1015, 0x1.22149945fa69fp-409, 0.0, 0x1.ff9469d2c5952p-390,
     0.0, 0x1.5a6b76b068809p-419, 0x1.d67e6bdd6ec4p-596, 0.0, 0x1.828905bb9186fp-480,
     0.0, 0.0, 0.0, 0x1.6023278126debp-430, 0.0, 0.0, 0.0, 0.0,
     0x1.a8ad75c98eb91p-607, 0.0, 0.0, 0x1.c8b3b2c503f9dp-968, 0.0, 0.0, 0.0,
     0x1.37ede4d90a07fp-946, 0x1.fe0741171d9f5p-823, 0x1.9be921382457cp-190,
     0x1.6f81469f648edp-752, 0.0, 0.0, 0x1.0b04a05f23a9cp-65, 0.0,
     0x1.b01c8df0df8a9p-353, 0.0, 0.0, 0x1.6efe0dd0735fdp-846, 0x1.522ecd49c4964p-759,
     0x1.f12bd8d66020fp-19, 0x1.c2b6c9fad4d91p-16, 0x1.8ab0c4dfee3e1p-418,
     0x1.7918c828506f6p-816, 0.0, 0x1.a01f4fc3d259p-324, 0.0, 0.0, 0.0,
     0x1.de01f313974f4p-156, 0x1.956f831a11f1p-954, 0.0, 0.0, 0x1.2891ee5c1b0dbp-818,
     0.0, 0.0, 0x1.a82f854ee547ap-59, 0x1.373b0ef58521ap-465, 0.0,
     0x1.f34cf9cbb4728p-801, 0x1.57be962b8ff66p-878, 0.0, 0.0, 0.0,
     0x1.e6a58addc894p-844, 0.0, 0.0, 0x1.555315e610361p-176, 0.0, 0.0,
     0x1.a25d4c81a46bfp-59, 0.0, 0x1.2c4977f4018e6p-68, 0x1.fe1d60a208eaap-133, 0.0,
     0x1.8035f26773a34p-742, 0x1.52a26b27a8823p-270, 0x1.d08344416a051p-863,
     0x1.13ef96cbbedc8p-61, 0x1.c97d604c4a0bdp-911, 0.0, 0.0, 0x1.da5b0494587cap-646,
     0x1.36d922213c39dp-133, 0x1.ee48d36f98d38p-570, 0x1.d9c8309fd117fp-847,
     0x1.a0704175c4abdp-928, 0x1.ba4136b2a7ac5p-214, 0x1.120f92c2c1499p-540, 0.0, 0.0,
     0.0, 0x1.70409f5c9c8b3p-253, 0.0, 0.0, 0x1.9ed3a3177c30cp-593, 0.0,
     0x1.723b7d9f738cdp-411, 0x1.8335edca88c9ap-319, 0x1.e2cba4fc92e53p-689,
     0x1.384b3be931786p-671, 0x1.4670350ec4e4cp-557, 0.0, 0x1.e957e9bf0a2fep-168,
     0x1.1551e3c93bb27p-993, 0.0, 0x1.f438f9050151ap-646, 0x1.770a8f8e28dd9p-811, 0.0,
     0.0, 0x1.75dea2b0d6c2cp-413, 0.0, 0x1.476cae3214dcbp-457, 0.0, 0.0, 0.0,
     0x1.342c367f13823p-186, 0x1.e09c0517a4d19p-959, 0.0, 0x1.e31f496df92c8p-606, 0.0,
     0.0, 0x1.31ee46db32d83p-339, 0x1.3f27c3f22a3cap-339, 0.0, 0x1.4bc2e553f19e4p-559,
     0x1.7266625d3ad88p-64, 0x1.cc8bd12375f93p-841, 0x1.4fb405cf0ec0dp-32, 0.0, 0.0,
     0.0, 0x1.08a9da3b25ed7p-559, 0.0, 0.0, 0x1.4128545f77f83p-373,
     0x1.92821d5fbb2e8p-980, 0x1.2169120a8db7p-32, 0.0, 0.0, 0x1.4cd420fb7f26ap-619,
     0.0, 0x1.299e6731c7bb3p-311, 0.0, 0.0, 0.0, 0x1.75ef1de596bfap-759, 0.0,
     0x1.6691846c80aa3p-823, 0x1.b0be7c815b945p-582, 0.0, 0.0, 0.0,
     0x1.7a95efcd12d85p-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2248872f2d304p-978,
     0.0, 0.0, 0x1.0a81f87c980c3p-228, 0.0, 0.0, 0x1.7ae6a670651abp-863,
     0x1.65d549e2ff236p-1009, 0.0, 0.0, 0x1.5a716953ab681p-985, 0.0,
     0x1.8e9081ac3efbdp-841, 0.0, 0x1.571d9fb960544p-839, 0x1.8aedcdcce68aep-48,
     0x1.a5b12976a61d2p-452, 0.0, 0x1.325e18108d90ap-204, 0.0, 0x1.6c4a1e1f0bb2cp-762,
     0.0, 0x1.81ad956487cdp-539, 0.0, 0.0, 0x1.e6ee1cf8feac4p-160,
     0x1.dd2c3afaf49d9p-396, 0x1.d1ae64f61b778p-552, 0x1.e2536984fd069p-586, 0.0,
     0x1.ad5213637e3cp-819, 0x1.a2a1d63efd756p-1010, 0.0, 0x1.81980295fd34dp-441,
     0x1.4406ef6931253p-915, 0x1.dd59ebff62ae2p-365, 0.0, 0x1.1ed3c59ab891cp-842,
     0x1.473cd91636cdfp-707, 0.0, 0.0, 0.0, 0.0, 0x1.f2fc70be95793p-685,
     0x1.1cc58fb2b97f8p-399, 0.0, 0x1.27db449e1ab79p-687, 0.0, 0.0,
     0x1.b81bb12023c15p-151, 0x1.d268ed3abebbbp-986, 0x1.5a45b000d3c7cp-930, 0.0, 0.0,
     0x1.0ec77176d425dp-374, 0.0, 0x1.8764e51531b6dp-337, 0.0, 0.0,
     0x1.5a3c3239ad556p-203, 0x1.a5a4c83e33539p-813, 0.0, 0.0, 0x1.ed808764f5ab7p-88,
     0.0, 0.0, 0x1.2d1ac0b97b5d7p-890, 0x1.665015fe3701dp-675, 0x1.6aadb16d45cd8p-133,
     0x1.b3aa2d7d354ffp-916, 0x1.3d16290d2a439p-224, 0x1.4226996469851p-276, 0.0,
     0x1.b023ae6144ee3p-775, 0.0, 0x1.0d4ec7d355cfcp-659, 0.0, 0x1.189380a92d662p-320,
     0x1.f0bef724faf89p-566, 0.0, 0x1.a745937b8d219p-680, 0.0, 0.0,
     0x1.21b86a0381912p-675, 0x1.e0a10b038d518p-402, 0.0, 0.0, 0x1.7cf6d67e7108bp-379,
     0x1.23cae4208447bp-1003, 0.0, 0x1.a069c9f7eec45p-430, 0.0,
     0x1.8f1bec07a7139p-992, 0x1.20e776626869bp-647, 0x1.792ad6bd73838p-756,
     0x1.85dedb186cd16p-567, 0.0, 0.0, 0x1.648be3af1451fp-524, 0x1.28815eae1296p-639,
     0x1.b1c3a7fc5825ap-803, 0.0, 0.0, 0.0, 0x1.619e694030c19p-901, 0.0, 0.0, 0.0,
     0x1.4b51234013261p-127, 0x1.3975c264ec691p-532, 0.0, 0x1.f5858fb6b12b4p-194,
     0x1.92acac540d9adp-657, 0x1.9bbd433696168p-276, 0x1.d947f2aa0ad5cp-548,
     0x1.c2b8f47ac56d8p-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fdbdecaeb0c18p-762, 0.0,
     0.0, 0x1.465a704041d03p-928, 0.0, 0x1.fdb0f959d123dp-89, 0x1.290ce7cb7249bp-1014,
     0.0, 0x1.896124e00a23ep-223, 0x1.5cb144be2b6d9p-278, 0.0, 0.0,
     0x1.38814f1df56f7p-945, 0.0, 0.0, 0x1.d6745d13b918fp-829, 0.0,
     0x1.9201afaf8c04dp-442, 0.0, 0.0, 0x1.5b41ee773bc19p-556, 0x1.df72c8fc14186p-54,
     0x1.99a9a432408adp-693, 0x1.96d8946108c0dp-28, 0x1.1831f3100dacdp-582,
     0x1.1c49bc59b4bc5p-1001, 0x1.94928c5843ad3p-217, 0x1.a9dfdb10f4429p-652,
     0x1.d9860b58f751p-412, 0x1.8f67b43536ce7p-52, 0x1.1bf485b5fdb9dp-381, 0.0, 0.0,
     0.0, 0.0, 0x1.a72dd4d5fdcd1p-927, 0x1.3f52e1a739ce6p-92, 0x1.7deab03a55133p-631,
     0.0, 0.0, 0.0, 0x1.4e11a2dee8b0cp-233, 0.0, 0.0, 0x1.f9c3bbe8f4a0cp-484, 0.0,
     0.0, 0.0, 0x1.a4fd39789b4f6p-145, 0.0, 0x1.7401e84a8504ep-57, 0.0, 0.0,
     0x1.1a47e047bc6c7p-769, 0x1.a96b8dc0cac1fp-702, 0x1.c72c6cbb1e0c2p-375,
     0x1.77f075d5ad902p-108, 0.0, 0x1.64240af2be882p-796, 0x1.f94e08e8fb6bbp-831,
     0x1.14f58c0067dc2p-891, 0.0, 0x1.efcc1e2c9d5b1p-403, 0.0, 0.0,
     0x1.0a064c21f17f6p-905, 0.0, 0x1.9e466db4d43f5p-356, 0.0, 0.0, 0.0,
     0x1.f220c8964f8b5p-718, 0x1.7d64dbda1e43ep-801, 0x1.ff92732aef6dep-584,
     0x1.61464fba0b8edp-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.350cb2fb199fep-598, 0x1.05bbd398bb105p-883, 0.0, 0.0, 0x1.cc4d9dad96e85p-255,
     0x1.92b840b6de2d6p-655, 0.0, 0x1.8bcbf3951b131p-652, 0x1.87c2bf945464fp-814, 0.0,
     0x1.54f67ce85fc3dp-513, 0.0, 0x1.f2e9ee350e4d7p-974, 0x1.2bdbe46a25348p-644,
     0x1.08fde6f9faa5cp-574
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
            tmp1 = fabs(tmp0);
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
    printf("fabs %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("fabs bench acc %la\n", global_bench_acc);
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
