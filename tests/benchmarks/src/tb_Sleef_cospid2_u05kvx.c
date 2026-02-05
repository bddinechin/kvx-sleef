/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospid2_u05kvx.c --function Sleef_cospid2_u05kvx \
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
     0x1.5f44fa25f9164p-658, 0.0, 0x1.5a27054fc6c1fp-533, 0.0, 0.0,
     0x1.74c8550ab6254p-750, 0x1.2e8b02ba52e2cp-849, 0.0, 0.0, 0x1.bd2e1e9547e02p-375,
     0x1.8d08be1024176p-155, 0.0, 0x1.752969d30a6d7p-354, 0x1.d37d14f1504d5p-941, 0.0,
     0x1.8b1b588942044p-800, 0.0, 0x1.d7769610c49d1p-318, 0.0, 0x1.cc3d566bd126ap-873,
     0x1.82fab4d4a3622p-373, 0x1.72ace7eef155p-749, 0.0, 0.0, 0x1.6a35adad277d2p-757,
     0.0, 0x1.00fd9a10ef50dp-450, 0.0, 0x1.ad2f194652065p-400, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e1dfc580139c3p-339, 0x1.dca42c851856p-209, 0.0, 0x1.769eabb89abe3p-396,
     0x1.317bad28b64cap-898, 0.0, 0x1.db2f5a7be243bp-213, 0x1.03cdaefeb80cp-198, 0.0,
     0.0, 0.0, 0x1.d1e15e784eca9p-703, 0x1.9c9d5b8f83b0cp-870, 0x1.b455c3ca4eac1p-113,
     0.0, 0.0, 0x1.7b099e5c735eep-823, 0x1.c4d11f3846111p-37, 0.0,
     0x1.6b05e9ea3b939p-553, 0.0, 0.0, 0.0, 0.0, 0x1.4f751a8f4e628p-80, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8c7dc41dcc505p-327, 0x1.febe9fc773abdp-122, 0x1.4206bebed5d2ep-811,
     0.0, 0.0, 0.0, 0.0, 0x1.c2393627a98eap-141, 0.0, 0.0, 0.0,
     0x1.3cd9d15b5ba8dp-837, 0.0, 0x1.d2c7df88f3724p-500, 0x1.76b412fc4fb1ep-612,
     0x1.8d6dbde4c557bp-280, 0.0, 0x1.08123c8f616b6p-919, 0.0,
     0x1.b1fefa1b0643dp-1013, 0.0, 0x1.4d15b59213e86p-864, 0x1.e974ad48a2578p-922,
     0x1.77576ab24bc41p-655, 0.0, 0x1.d6339531dbf1fp-392, 0.0, 0x1.6fb6237b2e2b8p-38,
     0.0, 0.0, 0x1.641372e2a2273p-693, 0.0, 0.0, 0x1.504eb4a6362bbp-224,
     0x1.d8bfcb6d65acfp-427, 0.0, 0x1.53f9b51e38e9bp-327, 0x1.5efa9d505df63p-557,
     0x1.964ae93f443a8p-759, 0.0, 0.0, 0.0, 0x1.9c9f71b15abc1p-370,
     0x1.0b1ada8b755eap-773, 0x1.7c93c5fbe584cp-796, 0x1.aa82978b7c90ap-55,
     0x1.28bff7fd6d7f3p-323, 0.0, 0.0, 0.0, 0x1.ddfe18cb28ddfp-56,
     0x1.c30efd692feadp-148, 0x1.75c1ebae33915p-637, 0x1.124c9ee0133dp-350, 0.0,
     0x1.9b91b2a5531b7p-429, 0.0, 0x1.3cee4fdb85c8bp-446, 0.0, 0.0, 0.0,
     0x1.ac35dc45b6efp-794, 0.0, 0.0, 0x1.5ba7a48d09928p-943, 0.0,
     0x1.0ec8eaf306724p-785, 0x1.f8182f5ed8278p-612, 0x1.8f8e1f3db28bep-489,
     0x1.842ae73e79501p-653, 0.0, 0.0, 0x1.c1e609a3a477ap-792, 0.0,
     0x1.53c49c741aa59p-417, 0x1.fee5c289146c9p-739, 0x1.dccdee7aba079p-291,
     0x1.a9d30d7329b51p-364, 0x1.cf13985f8316ep-968, 0x1.b654cd6a50161p-546,
     0x1.f0fee47dba3f9p-887, 0x1.590b55cb80c87p-533, 0x1.2299b05b74058p-306,
     0x1.9a90ff5df0e24p-927, 0.0, 0.0, 0x1.82ffe2227b026p-380, 0.0,
     0x1.ca4d696e957cap-590, 0x1.3a11bb0d41a9cp-933, 0.0, 0.0, 0x1.eb61869f838b2p-7,
     0.0, 0.0, 0.0, 0x1.2c48e1f09573dp-270, 0.0, 0x1.1c8efb66d5d76p-110,
     0x1.c350f590977ebp-990, 0x1.d777075ec2eb6p-1019, 0.0, 0.0, 0.0,
     0x1.9fd049068e424p-919, 0.0, 0x1.797d63bb64313p-521, 0x1.3392bdf84b612p-149,
     0x1.d75c706947c83p-915, 0x1.4dc3c7b4613d2p-955, 0x1.bd61342151f44p-276, 0.0, 0.0,
     0x1.73107529a04b2p-377, 0.0, 0.0, 0.0, 0x1.0a8fe506cb589p-847, 0.0,
     0x1.d113221c38333p-328, 0x1.f5f7b42bdd59dp-126, 0x1.df763db8e3086p-679, 0.0,
     0x1.33245a51bf8e2p-241, 0x1.669056c9c663dp-529, 0x1.f6a8aa257ecf7p-643,
     0x1.566fa7e6679cp-445, 0x1.37568075b649ep-50, 0.0, 0.0, 0x1.d877e6d35565cp-902,
     0x1.d8c42485a5961p-179, 0.0, 0x1.f3c614e76aab8p-504, 0x1.a861e48844507p-1006,
     0.0, 0x1.78c2318ab2c67p-655, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a9f13f33e532p-6,
     0x1.496569e49d226p-302, 0x1.93055e63c490ep-370, 0x1.0a350eed19c47p-198,
     0x1.a661eb5380a75p-662, 0x1.df52c0ae386a4p-702, 0.0, 0.0, 0x1.3bb2b11659d2dp-760,
     0.0, 0x1.5b28b96507ef4p-928, 0.0, 0.0, 0.0, 0.0, 0x1.2a0f86d00f7d8p-10,
     0x1.360c9fc4a1a81p-29, 0.0, 0x1.8e850a0d6e766p-914, 0x1.536059f5aba7dp-660, 0.0,
     0x1.6aa95c0e78396p-675, 0x1.52dc1e981f31ap-874, 0x1.498f01fc6512ep-669, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fa5abdeb0347p-263, 0x1.3730cc9284321p-757, 0.0, 0.0,
     0x1.a6e8265eb92abp-58, 0.0, 0x1.76593d0afe289p-14, 0.0, 0.0,
     0x1.017d36c1e3e18p-540, 0x1.e02f40d9544b3p-550, 0.0, 0x1.6f8c87dfb087cp-43,
     0x1.42d03c750575ap-419, 0.0, 0.0, 0.0, 0x1.ee4aa6bde987fp-731,
     0x1.1e6d58d1735b2p-382, 0.0, 0x1.e579074d85c5dp-614, 0.0, 0.0,
     0x1.4a42d2f8e0342p-799, 0x1.52d018847de72p-185, 0.0, 0.0, 0x1.d545dea0c16f8p-82,
     0x1.c67d28547b764p-1017, 0.0, 0x1.46dd16612fffap-126, 0x1.b5bbefee21676p-216,
     0.0, 0x1.181add6b460c6p-936, 0x1.48de0a751891cp-623, 0x1.97d0115035c18p-928,
     0x1.424d18f5a4581p-68, 0.0, 0.0, 0.0, 0x1.876224d73babep-1004, 0.0,
     0x1.df312a4d46bf3p-120, 0x1.7ee36d65f05e2p-32, 0x1.2f3e8261c6e75p-788, 0.0,
     0x1.3e80d8b411e8cp-794, 0.0, 0x1.ebd60019831f3p-684, 0.0, 0.0, 0.0,
     0x1.36c597eb7bdabp-437, 0x1.b0d62e5faeb47p-32, 0.0, 0.0, 0x1.3b0c2c7863ef4p-14,
     0.0, 0x1.a5577fdf2b302p-850, 0x1.92c93f290d598p-343, 0x1.310084afde14cp-348,
     0x1.42ff3d9e1919bp-450, 0.0, 0x1.12bcd6d96bd71p-754, 0.0, 0.0, 0.0, 0.0,
     0x1.6309ea4398634p-728, 0x1.4276a175bff4p-727, 0x1.d6679f6aa1665p-54, 0.0,
     0x1.a641133074fc8p-155, 0.0, 0.0, 0.0, 0.0, 0x1.cc47fdf131f21p-879, 0.0,
     0x1.9dd2626a8045ep-55, 0x1.4627d599ae8p-199, 0.0, 0x1.873d3798a3a48p-132,
     0x1.43a8778860788p-300, 0x1.0f61d24405fcdp-562, 0x1.bfc6e1d288af6p-149,
     0x1.353a403008966p-44, 0x1.f550ee03d4b8bp-130, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd4a42c5857bp-922, 0x1.02f4c04ce92c8p-548, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.704a2d5d6dc58p-153, 0x1.fbc3756f4c88bp-725, 0.0, 0x1.95575632048fep-342,
     0x1.5a1aeaccf0071p-405, 0.0, 0x1.4d2939c2453d8p-724, 0.0, 0x1.3c4c2abdc013fp-147,
     0.0, 0x1.e1d3b4e460a3ep-104, 0.0, 0.0, 0x1.3a8924395811fp-403, 0.0,
     0x1.225a11babc753p-271, 0x1.1f312b73ed091p-260, 0.0, 0.0, 0x1.16b96aeea713cp-856,
     0.0, 0.0, 0.0, 0x1.9a8a54695052bp-399, 0.0, 0.0, 0x1.46f2099825a0fp-308, 0.0,
     0.0, 0.0, 0x1.7aa8a11a97922p-796, 0.0, 0.0, 0x1.13540db0ef26fp-502, 0.0, 0.0,
     0.0, 0x1.dd7aa482c24a3p-30, 0.0, 0x1.317cb72e9e053p-732, 0.0, 0.0,
     0x1.2bc72d72f473fp-851, 0x1.e869d7f3abd76p-370, 0.0, 0x1.cbef281c2058bp-10,
     0x1.f4b516ecc6ff2p-595, 0.0, 0.0, 0.0, 0.0, 0x1.73ffdf17598fcp-289, 0.0, 0.0,
     0x1.57b26a40a7231p-4, 0x1.2dbd5e87cab5ep-58, 0x1.9ef7bba1f4f6cp-237, 0.0, 0.0,
     0x1.369e5a88ff44ap-665, 0x1.79e3bf29e5edp-889, 0x1.ebadea6d87682p-848,
     0x1.8e46f673e2334p-184, 0.0, 0.0, 0x1.34d473dea2af2p-880, 0x1.96489da7694dap-722,
     0.0, 0x1.2548a4d4b4011p-855, 0.0, 0.0, 0x1.df5a0dc280071p-162,
     0x1.631780dfe8e1fp-457, 0x1.31f3c7e6fdc28p-646, 0x1.9afdbf59c4ddcp-918,
     0x1.ef592eca822dp-1005, 0x1.3368721988898p-77, 0x1.3742c08e8aacp-307,
     0x1.a71b42afd5942p-372, 0x1.148ee20f7f382p-875, 0.0, 0.0, 0.0,
     0x1.b5449efaaa31fp-324, 0.0, 0x1.25d443a1bb83fp-832, 0x1.0e50594b5bf2fp-953, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66cd322c07763p-770, 0x1.438d63430032ap-610, 0.0,
     0.0, 0x1.7b54b5d6f4759p-420, 0x1.45e60ba03a1f5p-347, 0.0, 0.0,
     0x1.b10176d8f98eap-843, 0.0, 0.0, 0.0, 0x1.6c2e03919d53cp-309,
     0x1.b9108303b30b6p-907, 0.0, 0.0, 0.0, 0.0, 0x1.ea163798cd94fp-849, 0.0, 0.0,
     0x1.f2119f68c4496p-608, 0.0, 0x1.f2a5db0ff3d73p-178, 0x1.7ce0ba9bd1c63p-460,
     0x1.b0c9d614e42e8p-826, 0.0, 0x1.b76328fa82152p-485, 0x1.8553ce4767293p-881,
     0x1.cb38c9bb71336p-749, 0.0, 0x1.c95b849da1ac8p-130, 0x1.bbacc794e6989p-453, 0.0,
     0x1.6aab7a2616bcdp-817, 0.0, 0.0, 0x1.73f5a5d53f728p-624, 0.0, 0.0, 0.0, 0.0,
     0x1.089ce9483ccacp-285, 0.0, 0x1.4ad5980da6a91p-60, 0x1.597fe3996205ep-737,
     0x1.dc93cb1c8b66ap-13, 0x1.59b7c1903ed12p-997, 0.0, 0x1.edef5306c645ap-194, 0.0,
     0x1.fdddb411c3778p-648, 0x1.26c2ce268c249p-629, 0.0, 0x1.f6da28a8c5959p-942, 0.0,
     0x1.6b089c2c51db2p-838, 0x1.b67e47bfd6aecp-120, 0.0, 0x1.6e2edaee9b27ap-260,
     0x1.0031e4ad2eb77p-342, 0.0, 0.0, 0.0, 0x1.17bf8cba71d3fp-397, 0.0, 0.0, 0.0,
     0x1.a7a7def3395dfp-432, 0x1.5dca3586a0a81p-377, 0.0, 0.0, 0.0,
     0x1.dc6562588f608p-234, 0x1.61df9552c6275p-764, 0.0, 0.0, 0.0, 0.0,
     0x1.c8679ad0c8adap-439, 0x1.540e77379d1eap-541, 0x1.b73a33f3f9dd5p-329,
     0x1.a86a9352135fap-767, 0.0, 0x1.3e4b6e3059a7p-230, 0x1.989ecf8522513p-857, 0.0,
     0x1.cd26af0805dbbp-221, 0x1.0f24ba13cb32fp-481, 0x1.5879c223f2c5ap-515,
     0x1.13176046641ffp-691, 0x1.331fd2c49dc16p-212, 0x1.35c8332076b19p-398, 0.0, 0.0,
     0.0, 0.0, 0x1.a684225f39bccp-779, 0.0, 0.0, 0.0, 0x1.fa589213b961fp-342, 0.0,
     0x1.e9d8b9107e551p-658, 0.0, 0x1.a185721fc9318p-221, 0.0, 0.0,
     0x1.ccff99fb03401p-399, 0x1.0b4e73ac2d39fp-169, 0x1.ac24386ebb91fp-150, 0.0,
     0x1.fe42861c26855p-836, 0.0, 0.0, 0.0, 0.0, 0x1.046db43b0f9a8p-698, 0.0, 0.0,
     0.0, 0x1.d388eb9c776a1p-444, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b136a8c73b4fp-875,
     0x1.71f40734600dap-766, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d10c8ddb9c26p-595, 0.0,
     0x1.beafa1f1ea7e4p-831, 0x1.1e837d6873dp-815, 0.0, 0x1.1f5bc0481f4aep-678, 0.0,
     0x1.136516d9a5f6ep-985, 0.0, 0x1.31e24a928d376p-532, 0.0, 0.0, 0.0,
     0x1.94d946eb3da87p-915, 0x1.cc168043e0929p-483, 0.0, 0.0, 0x1.d30a24fd34448p-418,
     0.0, 0.0, 0.0, 0x1.4242c44df8152p-843, 0.0, 0x1.551b6c6e06849p-964, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af83a2b85dde3p-150, 0.0, 0x1.c2922fdff9e2fp-358,
     0.0, 0.0, 0x1.620cbd299368cp-212, 0x1.e7dff83303bebp-606, 0.0,
     0x1.c2560740757b9p-620, 0x1.0bdebb42d679bp-102, 0.0, 0x1.a9c691f54c265p-281,
     0x1.b0e68165a31a1p-524, 0.0, 0x1.3f51b2a78474cp-518, 0x1.fb9c1b8b51955p-237, 0.0,
     0.0, 0x1.6ed9ee702e795p-483, 0x1.77faea1667f1dp-402, 0x1.2ec769a0b239bp-558, 0.0,
     0x1.b23163a5f775ap-920, 0x1.d3529afff0195p-472, 0x1.60fcefa4a5ef7p-552,
     0x1.34e64cc6e2978p-26, 0x1.d70b84c93002p-633, 0x1.d8e1ecef045afp-119, 0.0, 0.0,
     0.0, 0.0, 0x1.6fa6313fd29ebp-981, 0x1.f6d703ee15453p-839, 0x1.0a34952ee55f8p-710,
     0.0, 0x1.837f07c8cb2d7p-762, 0x1.58026a83c75edp-892, 0.0, 0x1.1f08f6f3c3cfcp-4,
     0.0, 0x1.dd050feec71fcp-65, 0.0, 0x1.a2f674746f041p-433, 0x1.f3e43efcccb85p-265,
     0x1.a403586ab3c19p-192, 0x1.7f0b96bad4932p-406, 0x1.470bf02f7fdbap-199, 0.0,
     0x1.4871820157859p-258, 0.0, 0x1.85c52cb956a38p-262, 0x1.44bc70227fabbp-465, 0.0,
     0x1.d70f8ffd8a61fp-131, 0x1.89eccea9e81c2p-623, 0x1.ae0af41ff0525p-246, 0.0,
     0x1.179b0b552c261p-657, 0.0, 0x1.5f4031750bf8dp-1002, 0x1.4ed3fad83169ap-227,
     0.0, 0.0, 0x1.a98d8dac6f03dp-12, 0x1.79764ce6e2e1ep-735, 0x1.6e676d97ee7a2p-989,
     0x1.014ec087cd794p-937, 0x1.6eb0f3bb50228p-663, 0x1.f66f3d3e84c97p-540,
     0x1.116f2e6e0a9ecp-259, 0.0, 0x1.f0339c0d1340ep-445, 0x1.55b0cba738b27p-996, 0.0,
     0x1.807f69ad7f6c8p-806, 0.0, 0x1.b7525b5c5c567p-135, 0x1.532eb179b91efp-1015,
     0x1.bc8b46783c2a4p-95, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee388046e0d82p-697, 0.0,
     0x1.3110760869d8fp-757, 0x1.e47323f15a5b4p-425, 0x1.6a58c8aa4073fp-586,
     0x1.1e3bc82e094e1p-251, 0.0, 0.0, 0x1.9076eae5172cap-316, 0.0,
     0x1.ac3ffa4d7221ep-374, 0.0, 0x1.1172759a71a4p-1017, 0.0, 0.0,
     0x1.361942982a258p-158, 0.0, 0x1.3a758fd03cfc8p-965, 0.0, 0.0, 0.0, 0.0,
     0x1.abd135183b967p-324, 0x1.32b1401ee630cp-174, 0x1.0db286cdcd99p-605, 0.0, 0.0,
     0.0, 0x1.0548ec157ba6cp-603, 0x1.43c1c7cee9375p-465, 0.0, 0x1.285ac6d6739c1p-469,
     0x1.fead05de06a6ep-215, 0x1.b3407a0797dccp-279, 0x1.6cd2af0cf38dfp-221,
     0x1.2e9cd8789af9ap-388, 0.0, 0.0, 0x1.2023fb31b423cp-886, 0.0,
     0x1.473d5ab51adaap-512, 0x1.99daf1161ff2fp-786, 0.0, 0x1.b9296cd7d826cp-504,
     0x1.1c82bf2ee80b1p-549, 0x1.cdabe59dc734ap-340, 0.0, 0x1.f1f05ebc5dbf5p-994, 0.0,
     0x1.5fd41dce2e3ddp-604, 0x1.9469e518823p-389, 0.0, 0x1.c063fbfd84a2fp-738,
     0x1.0229b630cf8dep-280, 0.0, 0.0, 0x1.84ac401a3684cp-514, 0x1.a231decc1b8cbp-456,
     0x1.f76092b08649bp-1019, 0.0, 0.0, 0.0, 0x1.8db725e97a687p-435,
     0x1.ffde230d774dp-505, 0x1.97279389eb1a7p-456, 0.0, 0.0, 0.0,
     0x1.e3bdb99bb06fep-377, 0.0, 0x1.f9c22cf62a49ep-853, 0.0, 0x1.626d2fe3a3501p-484,
     0.0, 0.0, 0.0, 0x1.203d8131d390fp-251, 0x1.94c33674a66bdp-579,
     0x1.a60b285a06d17p-62, 0.0, 0.0, 0x1.df91b84ad255p-664, 0.0, 0.0,
     0x1.881304d5322cdp-999, 0x1.d20812b0e0addp-366, 0.0, 0.0, 0.0, 0.0,
     0x1.f23e06caeeefcp-969, 0x1.e278f3a9dced8p-667, 0x1.549f6e292ee13p-104, 0.0, 0.0,
     0x1.a1cb9e884822ep-807, 0.0, 0x1.b98fc1be276cep-265, 0.0, 0x1.31b0f4aea27fap-245,
     0x1.af4a48dd3341dp-914, 0x1.d66fcfcba2cc3p-676, 0x1.c8db81bf4f2e4p-635, 0.0,
     0x1.4d601de581568p-906, 0.0, 0x1.f932a078a4142p-173, 0x1.b70fefa408fa2p-531,
     0x1.b01aabd677971p-571, 0.0, 0.0, 0.0, 0x1.3dfa10bd70cfbp-83,
     0x1.165ed51b30447p-542, 0.0, 0.0, 0x1.90c9d7f1574f3p-246, 0x1.228efc54dd39fp-855,
     0.0, 0x1.98760f7f7aeeep-359, 0.0, 0x1.0f42d870bc2fcp-71, 0.0, 0.0,
     0x1.2b9978172c68ep-168, 0x1.0b3ab5e428b87p-639, 0x1.97c409fa9f87cp-499, 0.0,
     0x1.9eaeca75b0abfp-894, 0.0, 0.0, 0x1.3a95264a3bdb2p-890, 0x1.22349dc8085b4p-443,
     0.0, 0x1.675172b2226c5p-654, 0x1.034d304c79b8fp-142, 0.0, 0x1.99754f1dc592dp-310,
     0x1.70d0d7d256643p-243, 0.0, 0x1.fa6165d6b175bp-827, 0.0, 0x1.efd0c9be5a69p-898,
     0x1.6237e9e294274p-358, 0x1.b2f149683371cp-313, 0.0, 0.0, 0.0,
     0x1.4a758bc54de85p-71, 0x1.d89bf71f5911bp-833, 0.0, 0x1.6fb1395a4f42cp-106,
     0x1.c7feffc1d254p-695, 0.0, 0.0, 0x1.153fc43a1ffe6p-789, 0.0, 0.0,
     0x1.fb9da54fbcfb6p-526, 0.0, 0.0, 0.0, 0.0, 0x1.d9e7b0bbfe91cp-427, 0.0, 0.0,
     0x1.197824a4efe3bp-873, 0.0, 0.0, 0x1.e029479f0e5b2p-545, 0x1.03dc8ff63e734p-558,
     0x1.a009963b5a76cp-580, 0.0, 0.0, 0.0, 0.0, 0x1.96f8391a34a67p-551, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb710df7fec02p-104,
     0x1.76cf2fafa019bp-561, 0x1.45ef12b6262bap-14, 0.0, 0.0, 0x1.98679e9f62197p-847,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25c1f25e4e75ep-368, 0.0, 0x1.8e874a045fe2dp-640,
     0.0, 0x1.dcc1e9ca363dcp-296, 0.0, 0.0, 0.0, 0.0, 0x1.b1de7f6a17f89p-828, 0.0,
     0x1.309edc5a312b6p-905, 0.0, 0x1.2e41a593a868ep-671, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac9caf229935fp-34, 0x1.32dadb8c31e25p-429, 0.0, 0.0, 0.0, 0.0,
     0x1.b53952f75923p-52, 0x1.cd97f7729ad75p-529, 0x1.e1c4cb2d1c6c4p-161, 0.0, 0.0,
     0.0, 0.0, 0x1.c37246eecca2dp-712, 0x1.7c2e59d70e5ddp-505, 0.0,
     0x1.b383079144f1cp-604, 0.0, 0.0, 0.0, 0x1.15057783d51d5p-444,
     0x1.94bf4511eefe3p-601, 0x1.7609bc174f71p-671, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e397e25fd34f1p-493, 0x1.707351545048bp-531, 0.0, 0x1.07bc1dc48169cp-427,
     0x1.0ac4ed92895a6p-204, 0.0, 0.0, 0x1.9cb71d2fd2594p-131, 0x1.518448fcb2a28p-423,
     0.0, 0.0, 0.0, 0x1.ad3153a7e088dp-743, 0.0, 0x1.ba4bc388bd9d6p-999, 0.0, 0.0,
     0.0, 0x1.9cc97ae75cb2dp-971, 0x1.f4de98bc542bap-926, 0x1.72895db29a9f9p-265,
     0x1.f961ea66c4f44p-107, 0.0, 0.0, 0x1.6c2f90b9df731p-617, 0x1.c92c409a0a5e3p-960,
     0.0, 0.0, 0.0, 0x1.8224cfec6217fp-299, 0.0, 0x1.84bf3d27bda6ap-798, 0.0,
     0x1.f9746010babb7p-642, 0.0, 0x1.b5955eb9fa65bp-233, 0.0, 0x1.d6fe49bdb4316p-586,
     0.0, 0.0, 0x1.35722388246d5p-262, 0.0, 0x1.8f24051f6ac1cp-102,
     0x1.b4092dc0eec6bp-785, 0.0, 0x1.911932ef1d189p-278, 0x1.b97656e6913fcp-185, 0.0,
     0x1.8b25918326626p-504, 0x1.cdbfafb6b4777p-555, 0.0, 0x1.4b62d4dd3845ap-949, 0.0,
     0x1.d02c8fc4f6d28p-13, 0.0, 0.0, 0x1.ec59c6a07fc1cp-8, 0x1.ca5a765fa3755p-910,
     0x1.31fef3786b266p-159, 0.0, 0.0, 0x1.62031fedf7099p-358, 0.0,
     0x1.452eed8858554p-322, 0x1.23f5de4b6abe5p-464, 0x1.f32418b25894bp-887,
     0x1.4317fbc85ecd4p-368, 0x1.fa037d55f94fdp-47, 0.0, 0.0, 0.0,
     0x1.f3afe6dc74babp-230, 0.0, 0.0
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
            tmp1 = Sleef_cospid2_u05kvx(tmp0);
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
    printf("Sleef_cospid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cospid2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
