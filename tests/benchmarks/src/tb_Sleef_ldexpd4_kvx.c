/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ldexpd4_kvx.c --function Sleef_ldexpd4_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64,int32 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.62fc3fa4d71c3p-365, 0x1.597e229019b13p-16, 0x1.25ebc0c1cc1c7p-523, 0.0,
     0x1.60bad534380bcp-790, 0x1.41c1fdebf9f19p-269, 0.0, 0.0, 0x1.1849635643a18p-522,
     0x1.4d79d871cbc28p-924, 0x1.792940dac7166p-863, 0.0, 0x1.4a08841d4ada2p-768,
     0x1.46a7546d94aaep-527, 0.0, 0x1.a6a69b7b6d441p-17, 0x1.69200696da16cp-404,
     0x1.0558cbc5485aep-670, 0.0, 0x1.9548fc582f84ep-285, 0.0, 0x1.cf3d6d1475cd6p-861,
     0x1.f899b9d10a21bp-338, 0x1.71975eb2a4545p-773, 0.0, 0x1.ab2622d4d72dp-535, 0.0,
     0.0, 0x1.5687f401925bbp-989, 0x1.c203f93fd78e2p-377, 0.0, 0x1.26c1c312a0f2fp-582,
     0.0, 0.0, 0x1.b496a93c1e476p-941, 0x1.11f054afb4436p-171, 0x1.c07051556c136p-375,
     0x1.3e7f4d1fc4e93p-380, 0.0, 0x1.420229c903f99p-844, 0x1.e8cecc5d10f8dp-283,
     0x1.67f5268cce8a1p-695, 0x1.9b1f7199afb2ap-321, 0.0, 0x1.3f1e5d247cc1bp-654, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8aee19c479d3dp-377, 0.0, 0.0, 0.0,
     0x1.6a9fb0a188f1ap-727, 0x1.2ec4cb108c96p-136, 0.0, 0.0, 0x1.c7af89eaf4cc8p-831,
     0x1.67ac53fd39b89p-14, 0.0, 0x1.02b48561f2215p-830, 0.0, 0x1.39b5225d49fddp-734,
     0.0, 0x1.7bff8b045ef5ep-740, 0.0, 0.0, 0x1.e9ac619f3b23fp-757, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b5454e27dd93ep-446, 0.0, 0x1.beff5b8f59f16p-297, 0.0, 0.0,
     0x1.6b7879e8d9fb3p-781, 0.0, 0x1.d0eceb589d716p-858, 0.0, 0x1.fcc3fd43fc3a1p-657,
     0.0, 0.0, 0x1.1fa1d2b0d3cf6p-593, 0x1.9cce93ca6883ap-429, 0.0,
     0x1.6012888070a46p-957, 0x1.98fc26cb2bbcap-339, 0.0, 0.0, 0x1.1883dcf36e4acp-363,
     0x1.f904660fc6a56p-600, 0.0, 0x1.6cbe473c7a282p-27, 0x1.5589c27df5485p-518,
     0x1.4b9241cac0b59p-179, 0x1.fd5f926aa3c63p-732, 0x1.9e4f31598d4c5p-40,
     0x1.7339110fe6aaap-132, 0x1.379125d3825a1p-117, 0.0, 0x1.1130a07c5f823p-592,
     0x1.c5cc8639b78dcp-25, 0x1.3164cef894a35p-378, 0x1.62047b4eebad6p-708,
     0x1.da05814553b44p-38, 0.0, 0x1.81d4ecba936c3p-462, 0x1.2799912b2770ep-249,
     0x1.b653b9b8447bbp-219, 0x1.ea435f4921437p-1004, 0.0, 0x1.7c88ab1a2de6ep-486,
     0.0, 0x1.594b94383177cp-485, 0x1.15d2305f872c8p-826, 0x1.8e462bcba767ap-626, 0.0,
     0x1.2bd0aefee6bcbp-196, 0.0, 0.0, 0.0, 0x1.cb672fdefe3ep-271, 0.0,
     0x1.54e9c1a26bf8p-474, 0x1.e4b9003a0eaedp-665, 0x1.61f137d7eeeb6p-341, 0.0, 0.0,
     0x1.49207b96e4722p-255, 0x1.d4c70672545e2p-168, 0x1.b4cbbe7d4ef51p-543,
     0x1.f17ed6466263cp-275, 0.0, 0.0, 0x1.0e9d96078b565p-222, 0x1.1b03f27809ac6p-444,
     0.0, 0x1.445da0b1cb749p-104, 0.0, 0x1.43e597843ddf1p-795, 0x1.d7b3bd7b36581p-814,
     0x1.5ed9e0e26e68ap-145, 0.0, 0x1.0d012b152f005p-397, 0x1.fa446156068b1p-1019,
     0x1.5142266d6b62fp-394, 0.0, 0x1.067f01e8c9569p-122, 0x1.dd513b9db23fcp-742, 0.0,
     0x1.449d2d525ee9cp-990, 0.0, 0x1.b5addffac4e24p-704, 0.0, 0.0,
     0x1.18737171ba423p-819, 0x1.0b9c6b2a2b59cp-811, 0x1.556ad60a2a1eep-112,
     0x1.8db5127b4989dp-856, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3dff578719b1p-898, 0x1.2ff8b8a499c0fp-307, 0.0, 0.0, 0.0,
     0x1.c7aeab3eb5381p-571, 0.0, 0.0, 0x1.636c9c7c87b3bp-880, 0x1.8305ba2c52b1ep-520,
     0x1.ed343b61e1ed7p-896, 0x1.bd8974bcd4db9p-765, 0x1.7c414e2d720a2p-181, 0.0, 0.0,
     0.0, 0.0, 0x1.2f05b8408624dp-18, 0.0, 0.0, 0x1.02ab26e8c5123p-343, 0.0,
     0x1.82ed46137de48p-1001, 0x1.d9e3d5a4b0321p-124, 0.0, 0x1.76c6dc1e7d51bp-828,
     0x1.89c98e006c047p-523, 0x1.06f2c2fe7bcbap-816, 0.0, 0x1.92a24391e4f7p-129, 0.0,
     0x1.af1574ca710a3p-380, 0x1.cc0af4124cfbbp-648, 0x1.d2d71eba1a13cp-426,
     0x1.02e9f7dc2f935p-274, 0.0, 0.0, 0x1.04f7c1d4c14fbp-973, 0x1.87b1dc25062f1p-524,
     0x1.9ae3c246bb7ccp-138, 0x1.64ba2872a6e8cp-586, 0.0, 0.0, 0x1.40ee609d47bc8p-199,
     0x1.3c7f0666c36bap-311, 0x1.9c4270bbf204fp-466, 0x1.40c66333d0ce1p-555, 0.0, 0.0,
     0x1.3f8b4403efb87p-111, 0.0, 0.0, 0x1.7bca25677469fp-512, 0.0,
     0x1.4658d29b6d2f7p-395, 0x1.50645eafb5d39p-885, 0x1.4e2fa9c60f387p-144,
     0x1.60974eb03e5f8p-338, 0x1.58e5c731c4c4bp-342, 0.0, 0.0, 0.0,
     0x1.732ad8c853a3cp-797, 0.0, 0.0, 0.0, 0.0, 0x1.5841c4bfc6846p-386,
     0x1.9db113365fbd1p-350, 0x1.e2f466dd6d4a1p-618, 0.0, 0.0, 0x1.fd8cd8bf99556p-1,
     0.0, 0.0, 0.0, 0x1.7f0be3e13e002p-92, 0.0, 0x1.f38a79f20d8c4p-257,
     0x1.7396e5d6c704ap-916, 0.0, 0x1.a0c5384e02baep-894, 0x1.845104ebdaa3ep-512,
     0x1.109638cd59ae9p-137, 0.0, 0.0, 0x1.721c1bb67eb63p-852, 0.0, 0.0,
     0x1.50238df137f14p-970, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f609f7e0e9cep-906,
     0x1.7b1f37a4225cdp-810, 0x1.88ba6b0363588p-955, 0.0, 0.0, 0x1.4a20ee5833ecdp-477,
     0x1.3f9c52131a8cp-936, 0x1.352d118311b6dp-536, 0x1.aab2a73b88a36p-571, 0.0, 0.0,
     0x1.a351cc12a4ee3p-796, 0.0, 0.0, 0.0, 0x1.2ed84ee1f4955p-716, 0.0, 0.0,
     0x1.02b1ab429673ep-860, 0x1.d634d89a53f6p-852, 0.0, 0.0, 0x1.7e8036a4d5b6fp-511,
     0.0, 0x1.4e7007fa61a42p-617, 0x1.eed827dc85e91p-269, 0.0, 0.0,
     0x1.75b296f0d437p-196, 0x1.fd8e60143adecp-744, 0x1.27b6beb99565p-119, 0.0, 0.0,
     0.0, 0x1.3e6c13358bd27p-700, 0x1.17316945f167cp-842, 0x1.f1642a8cb1c97p-271, 0.0,
     0.0, 0x1.e5d3720aab318p-556, 0.0, 0x1.83620e38223ebp-741, 0x1.ded4781845f3ap-550,
     0.0, 0x1.052abfac407c2p-862, 0.0, 0.0, 0x1.0e2ef4179a777p-659, 0.0,
     0x1.315851b6ffb2dp-214, 0.0, 0x1.cb7ebfc621208p-2, 0x1.b7bcf09c48b5dp-726, 0.0,
     0x1.d19f8b2540a93p-7, 0x1.6d2605ea1e7bfp-327, 0x1.39da6a314d6b5p-47,
     0x1.5bb425330240dp-16, 0x1.3c6ddac99f838p-703, 0.0, 0.0, 0x1.ede1b41474661p-548,
     0.0, 0x1.422098c61d227p-306, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a3609d90de93p-68,
     0x1.0df0c0ae76585p-199, 0.0, 0x1.71ef1348614a3p-392, 0.0, 0.0,
     0x1.853ed5d86b8dap-459, 0x1.acc989a311d1cp-669, 0.0, 0.0, 0.0,
     0x1.fb0adf9199344p-515, 0.0, 0x1.7ce3d15fb8956p-616, 0.0, 0.0,
     0x1.7a8ae248615d3p-664, 0x1.ac366bdd4a036p-91, 0x1.e72638d019be7p-753,
     0x1.8b9bfdddef79ap-526, 0.0, 0.0, 0.0, 0.0, 0x1.2356df1236883p-922, 0.0, 0.0,
     0.0, 0.0, 0x1.3717595eb55eap-752, 0x1.cb10c9d6fabc8p-801, 0.0,
     0x1.3bd04eddeaaf4p-216, 0x1.fbb19f14a9534p-627, 0x1.e9b20fd11a91cp-132,
     0x1.520c8678ff72dp-988, 0x1.3bb1cddbdb691p-432, 0.0, 0x1.f8754668f8dd1p-935,
     0x1.bd3a93292117p-198, 0x1.b3894312742e3p-944, 0.0, 0x1.80232e72dba3ap-719,
     0x1.bc8c20410e6bcp-921, 0x1.3892bebebbfeep-26, 0x1.aa620d8971cc2p-879,
     0x1.5a62d18f392dcp-593, 0x1.10566a0eb29c9p-216, 0x1.0a24dd5c4db6ap-129, 0.0,
     0x1.e209d0162d2fdp-621, 0x1.4925eba21e5a5p-469, 0x1.15fd9a50425aap-523, 0.0, 0.0,
     0x1.b22fafdcb5756p-373, 0x1.a66fea67e0c74p-52, 0x1.4ce738d0cf4adp-7, 0.0,
     0x1.925f18c465b3cp-985, 0x1.1f9c1b369cd5ep-425, 0x1.badc7b4e0acbdp-154,
     0x1.6b8436f2374b6p-67, 0x1.2d56756fe7135p-943, 0x1.05ba2b1f20fc5p-733, 0.0, 0.0,
     0.0, 0x1.6e51f8710775dp-614, 0.0, 0x1.b937be879901p-703, 0.0, 0.0, 0.0,
     0x1.f9d2fcd37f84ap-457, 0x1.40b05875368dcp-307, 0.0, 0x1.e3c1cfa404e68p-623,
     0x1.80c15829943a7p-157, 0.0, 0x1.64cb7bb2794eep-133, 0.0, 0.0, 0.0,
     0x1.a1d2a765f8a61p-154, 0.0, 0x1.a07247832324dp-788, 0x1.bff3a35750389p-930, 0.0,
     0x1.d58e307335ec4p-850, 0x1.7f8326210c0bdp-119, 0x1.7a2961255aaa7p-625,
     0x1.88ec38e06183fp-1006, 0.0, 0.0, 0.0, 0x1.b6dd3d6c6f161p-744,
     0x1.9736e0edf70f8p-949, 0.0, 0x1.148c69ed0b474p-110, 0x1.ed217e57e2268p-44, 0.0,
     0x1.f2634db6a2b28p-551, 0.0, 0.0, 0.0, 0x1.dab7deaa2f9ddp-545, 0.0,
     0x1.b2f7eee9ad1e4p-62, 0.0, 0.0, 0x1.50485b92c85a7p-220, 0.0,
     0x1.ea5b8d0f92173p-228, 0.0, 0.0, 0x1.786f52cd9e606p-369, 0.0, 0.0,
     0x1.1c61971b114fbp-639, 0x1.467571a6c71bfp-90, 0.0, 0x1.8b8b4b7c95b4dp-423, 0.0,
     0.0, 0x1.4f83ac1c4f32cp-143, 0x1.0f9558bcc3029p-650, 0x1.68e74e96b5123p-290, 0.0,
     0x1.56b33388f158dp-799, 0.0, 0x1.f0e787f88a57bp-937, 0.0, 0.0,
     0x1.2b547c349e3ep-433, 0x1.b3ceefb2052c9p-723, 0x1.ff3bd139e087ep-573, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.84d3a1835db9ap-54, 0.0, 0x1.28c49bce880bap-160, 0.0,
     0x1.32e6b6a5f7c19p-770, 0.0, 0.0, 0.0, 0.0, 0x1.58e845c3290ap-36, 0.0, 0.0, 0.0,
     0x1.31afea2e1769dp-412, 0.0, 0x1.5950e6d8f18bep-519, 0.0, 0.0,
     0x1.d5d32421ae66ep-46, 0.0, 0.0, 0.0, 0x1.3884ffe045865p-737, 0.0, 0.0,
     0x1.a885e52dd57b8p-129, 0x1.5a1445621fec4p-249, 0x1.dd80767b8adf7p-795, 0.0,
     0x1.1f2c392566f4bp-270, 0x1.9b5f3155c87dfp-352, 0.0, 0x1.09249e4698ca6p-220, 0.0,
     0x1.bd23a93d4c6cfp-1005, 0x1.6c9a23adab85ap-693, 0x1.459f9c4fe9b98p-576,
     0x1.ae1025a0ba222p-889, 0.0, 0.0, 0.0, 0x1.8bbb820c31e5ap-330, 0.0,
     0x1.a46554a9f4d66p-588, 0x1.511c5e85f7a8p-418, 0x1.175acc835673ep-93, 0.0, 0.0,
     0x1.ea76149c2161cp-120, 0x1.caffda918bc91p-509, 0x1.a2fd6a3983e21p-750,
     0x1.4e4220e4fe7adp-531, 0.0, 0x1.4c6302336920bp-471, 0x1.4acb7ccaee865p-494, 0.0,
     0x1.daa0b1ea34654p-591, 0.0, 0.0, 0.0, 0x1.b8795ae994016p-562, 0.0,
     0x1.16343658bfa3ep-999, 0.0, 0.0, 0x1.2abbe00bab57cp-97, 0x1.029f012220394p-524,
     0x1.d2752d462fdb7p-814, 0.0, 0.0, 0.0, 0x1.8434fcf22e7bfp-283, 0.0,
     0x1.69eeacc5c6ab6p-544, 0x1.6c79e4f9a8cd7p-560, 0.0, 0.0, 0x1.9ef5ec29fe09fp-277,
     0.0, 0x1.7332c5902e4bcp-812, 0x1.64ae09bcbd15ap-213, 0x1.7d10b4737ded8p-1009,
     0x1.a80e9cc62325bp-861, 0.0, 0x1.a6702aca78b5ap-121, 0x1.7af0baf9542efp-699,
     0x1.d8ffebecc0a0dp-303, 0.0, 0.0, 0.0, 0x1.2502d30ca8e73p-791,
     0x1.9d1d4656420fap-252, 0x1.196eef3d337f9p-789, 0.0, 0.0, 0.0,
     0x1.8167364708207p-90, 0x1.9a4d2e763e4ap-702, 0x1.137cebc442656p-39, 0.0, 0.0,
     0.0, 0x1.d2b25442369bdp-764, 0.0, 0x1.fbfd1427d404fp-224, 0.0,
     0x1.4b438787b631ap-877, 0.0, 0.0, 0x1.f948c410076dcp-37, 0x1.6734232ffe649p-1013,
     0.0, 0.0, 0x1.f2824e2ccc8ecp-717, 0.0, 0.0, 0.0, 0x1.d9b07efc646cap-120, 0.0,
     0.0, 0x1.34516e69a474ep-799, 0x1.2d8fb676b94a3p-613, 0x1.cbd6ca113b88p-689, 0.0,
     0x1.d65ead0ecf72p-278, 0x1.25889730b55adp-889, 0x1.fab554d5d2888p-728,
     0x1.d7c9c7dde44d3p-869, 0x1.ff62121215b94p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.00f46c3a564a6p-383, 0x1.36c13e5ce8b7p-403, 0.0, 0x1.1501633ce353dp-285, 0.0,
     0x1.f16d272f26031p-856, 0x1.92dcefe156884p-637, 0.0, 0.0, 0.0, 0.0,
     0x1.3ab092b6406e7p-544, 0x1.b47d6e1d02b2dp-641, 0x1.c65e1fd826004p-266,
     0x1.ac9850e6c1532p-314, 0x1.863055bee9bcep-37, 0.0, 0x1.60e53bfee822fp-762,
     0x1.e117d1ba61f29p-292, 0.0, 0x1.c5bdb67c153eap-509, 0x1.3c598f57cbf6ap-895, 0.0,
     0x1.6673b6c2fab48p-149, 0.0, 0x1.d94b9b0413575p-1004, 0x1.cc70b6e0787c6p-90,
     0x1.1b5481613553ap-446, 0.0, 0.0, 0x1.d0da85270f842p-678, 0x1.e1552b13de36ep-995,
     0x1.e135de33e9507p-417, 0.0, 0.0, 0.0, 0x1.0106e611ef7d1p-182, 0.0,
     0x1.801aad4af57c1p-265, 0.0, 0.0, 0.0, 0x1.f4b44088eedcp-594,
     0x1.d9661ba18c41ep-701, 0.0, 0.0, 0.0, 0x1.52a56a63113b3p-912,
     0x1.3743b9546d7bbp-580, 0x1.570bed4258e5p-1004, 0x1.66df7a3236e3dp-984,
     0x1.fa7782d58d91p-497, 0x1.b024a17631704p-565, 0x1.40ccd0e1b632ap-898,
     0x1.5ed3a0f70159dp-741, 0x1.cf0fe665822c9p-573, 0.0, 0.0, 0x1.3b5debbe7cf61p-860,
     0x1.133d6bb525356p-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2b60ba769a27p-981, 0.0,
     0.0, 0x1.345eb0cc5c3bp-759, 0x1.578bc00fdc60dp-12, 0x1.a600c9543165ap-872,
     0x1.679b8a0685e44p-27, 0x1.d7208809aa168p-810, 0x1.3c42a40ec4a3dp-415, 0.0,
     0x1.f8f653e23afe1p-144, 0x1.17e95e0f1293bp-960, 0x1.6f094db05b833p-539, 0.0, 0.0,
     0.0, 0x1.b539e36894c52p-899, 0x1.330dcc3cb4fc1p-287, 0.0, 0.0,
     0x1.e88bae599d3c8p-570, 0x1.5303172f14p-773, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.138f59201e23fp-539, 0.0, 0x1.3751e171524cfp-116, 0.0, 0.0,
     0x1.6f16f856caf1fp-951, 0x1.485babbb7d50cp-145, 0.0, 0.0, 0.0, 0.0,
     0x1.2c4759b89c1c6p-835, 0x1.6c6458b387592p-121, 0x1.7626886c5a2d9p-252, 0.0,
     0x1.dc9a403263927p-249, 0x1.bd93056f7e0f6p-11, 0x1.5792ca23974ddp-205, 0.0,
     0x1.2acef6131154ap-771, 0.0, 0x1.6bb573a8f4377p-254, 0.0, 0x1.1ec1d4de6de2bp-588,
     0.0, 0.0, 0x1.9414da147cd6fp-143, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c3c0be9013d3p-1014, 0.0, 0x1.40360fd31ca13p-130, 0x1.6e747f8829c0fp-774,
     0.0, 0.0, 0x1.ffffba1844b1fp-90, 0.0, 0x1.3bca83d562d64p-185, 0.0,
     0x1.392ff88d41a7ap-751, 0.0, 0.0, 0x1.b7a2a4fbc9ec9p-996, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.633d05a878774p-529, 0x1.5fc5ee8aee695p-672, 0.0,
     0x1.063cf50582e85p-108, 0x1.0b8479750baa1p-766, 0.0, 0x1.66b1f9d773101p-640,
     0x1.7cec2a6b18f3p-413, 0x1.65d81c49fb46ap-51, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6ae5f56cd0fdp-99, 0x1.4d577906fc03dp-789, 0x1.34ffe043aaap-991, 0.0, 0.0,
     0.0, 0.0, 0x1.431433bf25c17p-802, 0.0, 0.0, 0.0, 0x1.9d3bb3cf197d5p-98,
     0x1.4c9403ced8d25p-641, 0.0, 0x1.0df964f9c34e1p-466, 0x1.5d7e5e7f1b1d3p-389, 0.0,
     0.0, 0x1.d07671cf71c87p-451, 0x1.5a58a4aed1305p-310, 0.0, 0x1.37ddab91fec38p-594,
     0.0, 0.0, 0x1.b21f2088f57e8p-984, 0.0, 0.0, 0.0, 0x1.19d4b99777c66p-141, 0.0,
     0.0, 0.0, 0x1.6955d6a0963c6p-537, 0x1.64d7dfa57ce86p-819, 0.0, 0.0,
     0x1.d0823c171fcf2p-687, 0.0, 0x1.45f3cc8a7afd4p-560, 0x1.e2f1be93d7752p-676, 0.0,
     0.0, 0.0, 0x1.60aa6d71aeecdp-405, 0x1.7371402c8f97bp-608, 0x1.6581791be07e5p-590,
     0x1.256ebf7825b8ep-146, 0x1.6b72c09c81848p-874, 0.0, 0.0, 0x1.aaf1df38103ebp-899,
     0x1.d6eccb47d0823p-656, 0.0, 0.0, 0.0, 0.0, 0x1.1eb3c6a8c7e88p-707,
     0x1.f21181eaf379fp-59, 0x1.cf05c9f27c0a4p-514, 0.0, 0.0, 0.0,
     0x1.6204428ba4643p-451, 0.0, 0x1.b6d0a77c2804cp-209, 0x1.a4713ee13c75dp-259,
     0x1.fe99197df11e4p-934, 0x1.f2b1920d6ac43p-113, 0x1.459917bb09c0ep-833,
     0x1.821718953fdaep-621, 0.0, 0x1.53e756ba5b99bp-22, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3fa1fbda86eep-58, 0x1.420d552fb52c7p-409, 0x1.15b64a990c1efp-673, 0.0, 0.0,
     0.0, 0x1.73651035c8707p-677, 0.0, 0x1.acbaafb16c043p-624, 0.0, 0.0,
     0x1.d2bb3df3e321cp-915, 0x1.4114396e3dea3p-900, 0.0, 0.0, 0x1.f714c72467c32p-702,
     0.0, 0x1.9b6692ebfd4e5p-882, 0.0, 0.0, 0.0, 0x1.2e4ed6e75f7d8p-1017,
     0x1.192e17299f20dp-754, 0.0, 0.0, 0.0, 0.0, 0x1.0cdb4e153a463p-608,
     0x1.f73253200afadp-694, 0x1.124962de60a3cp-292, 0.0, 0.0, 0.0,
     0x1.8ce667e86cc17p-828, 0.0, 0.0, 0x1.73348562710cdp-785, 0x1.71ea76205341bp-210,
     0x1.e99ae62defd2dp-54, 0x1.8ce8f6c700906p-297, 0.0, 0x1.bec1a1a2956dap-33, 0.0,
     0x1.f18a99a47167ap-745, 0x1.f5d2f20de0d07p-139, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9e1d10aab8e3p-755, 0x1.f5f813d9d585ep-101, 0.0, 0x1.0066367b509bp-190, 0.0,
     0.0, 0.0, 0x1.007857fde6684p-626, 0.0, 0.0, 0.0, 0.0, 0x1.20c0f7dedce02p-1001,
     0.0, 0x1.ed7291d7ba416p-611, 0x1.cafb96d00891dp-404, 0.0, 0.0,
     0x1.f73a5b16c28bp-457, 0.0, 0.0, 0.0, 0x1.17ed1a7a8827bp-478, 0.0,
     0x1.3729361650edp-258, 0.0, 0x1.41fe1e8a43391p-758, 0.0, 0.0, 0.0,
     0x1.6b25806177773p-887, 0.0, 0x1.7cb8d8c7747aap-678, 0.0, 0.0, 0.0, 0.0,
     0x1.094cacc41d10fp-218, 0.0, 0x1.3b183bc7f6b4ep-721, 0.0, 0x1.79fa72be0931bp-485,
     0.0, 0.0, 0x1.0c9a43b6f887ap-664, 0x1.9abc01c8664bap-418, 0x1.e2e49e6bad7b4p-527,
     0x1.8ca6ddbb0c2b9p-41, 0x1.59658b744f514p-453, 0x1.77a3f61534a8ep-265,
     0x1.2596e5ed1aaf4p-75, 0.0, 0x1.208b166e00233p-139, 0.0, 0.0,
     0x1.243d1edabe63bp-981, 0x1.750f54fa2a36bp-676, 0x1.6f462e056ac4p-842, 0.0,
     0x1.79fbd7c2088aep-387, 0x1.59a6d4e89cda1p-642, 0x1.e1c8d98650c3p-456,
     0x1.4fcb5ed5f208cp-359, 0.0, 0x1.991466cab7de8p-31, 0.0, 0.0,
     0x1.6ad8259529dcbp-384, 0x1.18ab143eb1451p-689, 0x1.7b331b05dcc3ap-66, 0.0,
     0x1.db50c8e5c06dap-339, 0.0, 0x1.4199caadc2fb2p-222, 0x1.ad8caad3e41aep-194, 0.0,
     0x1.3daa8a0c35143p-792, 0.0, 0x1.846f6e727871p-176, 0x1.6c17a60c99acep-429, 0.0,
     0.0, 0.0, 0x1.55fa20ba978ecp-340, 0.0, 0.0, 0.0, 0x1.cbd24d3dad259p-431,
     0x1.d1a7493db1367p-852, 0.0, 0x1.b4744d464c605p-115, 0x1.09c7f8a7670eap-309,
     0x1.aef147baa6b1ep-947, 0x1.abc47a544db96p-294, 0x1.13e69ed8bdb53p-895,
     0x1.a80661d405bffp-15, 0.0, 0x1.e95ccd424965p-849, 0x1.3cee4545a342dp-851, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1004]  = {
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0)
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
            ml_int4_t tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_int4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_ldexpd4_kvx(tmp0, tmp1);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_ldexpd4_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_ldexpd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
