/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhd4_u10kvx.c --function \
 *     Sleef_finz_asinhd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.f37a39f2c8349p-568, 0x1.6ea557330c5c1p-626, 0.0, 0x1.173a0490ff1f7p-896,
     0.0, 0.0, 0.0, 0x1.49c8bd216e717p-602, 0.0, 0.0, 0.0, 0.0, 0x1.37b0bdb63dedp-736,
     0.0, 0.0, 0x1.f38bd3a560d26p-342, 0x1.5a79664b9430fp-294, 0x1.b942be8dca58dp-845,
     0x1.961ef6608bdcep-373, 0x1.354bba334e809p-284, 0.0, 0x1.e6d95539e7fafp-312,
     0x1.e850cae95ab51p-371, 0.0, 0x1.e598ed77eb143p-445, 0.0, 0x1.23d2db0b77b45p-216,
     0x1.ea67b8555267ap-421, 0x1.bbb97b70c6166p-850, 0x1.4a79d7136763p-418, 0.0,
     0x1.bd1582aad82cdp-880, 0x1.d79f5e20cf2acp-525, 0.0, 0x1.4441401c5b56cp-1017,
     0.0, 0x1.75df9697bd054p-629, 0.0, 0.0, 0x1.08c01c6f6d708p-636,
     0x1.22fe4433ad713p-341, 0.0, 0.0, 0x1.1c7e0186dcb9bp-159, 0x1.16c13e7b4231fp-861,
     0.0, 0x1.56c3b1c7dedacp-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9fc5c359b8186p-464,
     0x1.909c26effe3c6p-310, 0.0, 0x1.f9253fed3a62p-247, 0x1.c48f020804aafp-341,
     0x1.64767ffc7c812p-843, 0x1.763a786a22ddep-165, 0.0, 0x1.3fe17682a0a66p-277,
     0x1.1b2f5a4bd1141p-88, 0x1.a141bba1bc49dp-323, 0x1.b15db62e4683ep-1014,
     0x1.3db64b5f33d3cp-152, 0x1.575e3f0357938p-904, 0x1.7a843eb315a89p-595,
     0x1.e5616a8763f13p-569, 0x1.b8e080b2db1d1p-375, 0.0, 0x1.143f4584d4328p-434, 0.0,
     0x1.06adade5e955bp-660, 0x1.40d979e650249p-227, 0x1.6fa13457c579ep-56,
     0x1.85ab1e7f7c152p-700, 0x1.1af2e729dd0fep-522, 0x1.6f46191431e99p-910,
     0x1.d38cf07ce5bbcp-724, 0x1.e4d5b3990ed49p-433, 0x1.8a90b45cc7b6bp-290,
     0x1.fc4885592915fp-714, 0x1.5103db259de44p-175, 0x1.9589012b03473p-899, 0.0, 0.0,
     0.0, 0.0, 0x1.b67ff98a2c1fcp-913, 0.0, 0x1.e97699d554002p-612,
     0x1.7f1b63b7cdeb1p-529, 0x1.25a3f0a7ba975p-354, 0x1.d96644e9b08aap-923, 0.0,
     0x1.1ae4733286441p-504, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2de7f9aa24413p-812, 0.0, 0x1.e352c4f6dd16ap-87, 0.0, 0.0,
     0x1.d9c333114f297p-470, 0x1.883cf66723c49p-368, 0x1.e0bc04cca374cp-993, 0.0, 0.0,
     0x1.3dee57fd05598p-212, 0.0, 0x1.de3e54d210e28p-226, 0x1.91898ed3eef43p-687, 0.0,
     0.0, 0.0, 0.0, 0x1.9e349931b31c1p-236, 0x1.b178b1aed59afp-580, 0.0,
     0x1.ae02bf19b34d2p-184, 0x1.2082838ae8712p-200, 0.0, 0.0, 0x1.490466c030d86p-232,
     0x1.722b30ebb57p-743, 0x1.5901200a3260cp-254, 0.0, 0x1.df3481615f76cp-789,
     0x1.63e036fb3a838p-127, 0x1.0aa0840a2131dp-258, 0x1.8adb6dcdd444bp-690, 0.0,
     0x1.323d8f1ab0201p-291, 0.0, 0x1.c4b40ef90f5cdp-480, 0x1.c53aab812533ap-274, 0.0,
     0x1.ecb730d026092p-873, 0x1.f17686470bbd6p-927, 0x1.43384f8d414b9p-151,
     0x1.c679e59be032bp-967, 0x1.7bdc406ae7349p-392, 0x1.d28b131153e6ap-731, 0.0,
     0x1.e22a01be29bfcp-922, 0.0, 0x1.e4028b40b368bp-667, 0.0, 0x1.50d57765c06c5p-313,
     0.0, 0.0, 0x1.bc9b359cc7621p-890, 0.0, 0x1.479f9620f11c2p-701, 0.0, 0.0,
     0x1.f765c31e0c666p-607, 0x1.2fe4edcf8a038p-909, 0x1.bbec2a969d7cp-562, 0.0, 0.0,
     0x1.fa1e092c1e747p-688, 0.0, 0x1.4c9b73241af8p-771, 0x1.bf552fa742691p-975,
     0x1.36b27cec657fbp-116, 0.0, 0x1.0ac5811d44a9bp-790, 0.0, 0.0,
     0x1.7dbfeba230d3ap-717, 0x1.e43c689f45911p-350, 0x1.febf57be4d1c3p-66,
     0x1.128a715af1b02p-820, 0x1.201e2e9afef8bp-319, 0.0, 0.0, 0.0,
     0x1.2fb0a61af4df6p-948, 0.0, 0x1.42dc1765f9a2ep-323, 0x1.96ffb7ad6e2b5p-647,
     0x1.21b9c2c3aac5dp-996, 0.0, 0.0, 0.0, 0.0, 0x1.1b37b1d3bc2bep-354, 0.0,
     0x1.f705cb90e254dp-833, 0x1.0dc35422c18cfp-519, 0x1.788dcf2056a74p-436,
     0x1.31437bf5f5535p-666, 0x1.c8bd2db9b3646p-67, 0.0, 0x1.18f3ca1a57ec3p-162, 0.0,
     0x1.96794d8eaeaa1p-871, 0x1.8a09fd514a182p-926, 0x1.f665254e333acp-625,
     0x1.881372332e877p-734, 0.0, 0x1.e18e5a1a7b7bap-151, 0.0, 0.0,
     0x1.f5b8c91958f66p-190, 0x1.664fef246f7fap-744, 0.0, 0.0, 0x1.f4dc460916beap-881,
     0.0, 0x1.cb67ebd4f0edfp-26, 0.0, 0x1.e700886a5ef2p-424, 0x1.a6c7f0e5be37p-262,
     0.0, 0.0, 0x1.8b25dbad39027p-287, 0x1.9cae998f6825fp-523, 0.0, 0.0,
     0x1.84bd915b52846p-816, 0.0, 0x1.d9cbba37efcc7p-776, 0.0, 0.0, 0.0, 0.0,
     0x1.dd39c50361f85p-551, 0.0, 0x1.24f9543a591cep-830, 0.0, 0.0,
     0x1.004c585cfd7f1p-288, 0.0, 0x1.29cf0509dd9c9p-691, 0x1.03a6eeb9fb54ep-218,
     0x1.83acf6af960e7p-232, 0x1.f1a3f09864ee2p-670, 0.0, 0x1.83c7cdedde91ep-725, 0.0,
     0x1.6eaa2244d1f5ep-604, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bad9e6057744bp-479,
     0.0, 0.0, 0.0, 0x1.1776fa05d9b2ap-164, 0x1.dd3aba3d5e963p-162, 0.0,
     0x1.84b5f0e25c717p-426, 0.0, 0x1.a11150473093cp-106, 0x1.72da4f5411a5p-600, 0.0,
     0.0, 0.0, 0x1.df18225d08bf6p-108, 0.0, 0.0, 0.0, 0x1.f3ec9effadfbep-364, 0.0,
     0.0, 0.0, 0.0, 0x1.daef10628cc02p-102, 0x1.9195c443265a5p-273, 0.0,
     0x1.3c05fa68ed9abp-617, 0x1.c05afcc9ce28cp-171, 0.0, 0.0, 0.0,
     0x1.ccdc31f6d6772p-546, 0.0, 0x1.d915537c24b53p-967, 0.0, 0.0, 0.0, 0.0,
     0x1.0fed816e06a23p-580, 0.0, 0.0, 0.0, 0.0, 0x1.21851bf96ae78p-709,
     0x1.c0cc2c9e9e22p-554, 0x1.b9e43d7c36221p-145, 0x1.2c423303917cep-982,
     0x1.4b0772f60d6e8p-620, 0x1.7137bb9ad6d5p-255, 0.0, 0x1.ce35c20293939p-302,
     0x1.fb1bc3549550fp-701, 0.0, 0x1.e6115a31d3761p-659, 0.0, 0.0, 0.0, 0.0,
     0x1.d7a5367a7bac4p-790, 0.0, 0x1.989decf00b2f6p-432, 0x1.5408ea4fb4a79p-736, 0.0,
     0.0, 0x1.0308e458457b5p-984, 0x1.18dbcb2f1cba9p-417, 0.0, 0.0, 0.0, 0.0,
     0x1.854725ee0237bp-346, 0.0, 0x1.1f4f4354a70d2p-350, 0x1.5289973e94ef7p-287, 0.0,
     0.0, 0.0, 0.0, 0x1.87dab6430da39p-291, 0x1.dfaed5541aa05p-84, 0.0,
     0x1.b8b1514c4d20ap-101, 0x1.5793067e54ed2p-312, 0.0, 0.0, 0x1.147b0f73d06b7p-58,
     0.0, 0.0, 0.0, 0x1.d903945a1b6adp-620, 0.0, 0.0, 0.0, 0x1.a400096ab0d25p-986,
     0.0, 0x1.f1e6afcea325bp-418, 0x1.4f8c249615b74p-260, 0.0, 0x1.49c9d3b3732e5p-522,
     0.0, 0x1.c513f0e2a59f7p-841, 0x1.a2d047f43a314p-294, 0x1.c0227fc4307fap-875, 0.0,
     0x1.5fefab69ba743p-164, 0.0, 0.0, 0.0, 0x1.9d90465c14c36p-152,
     0x1.66d88cba61acfp-947, 0x1.0499766563e02p-395, 0x1.ed6e40bba4693p-93,
     0x1.4a47d59653bccp-772, 0x1.30525c5f2a51bp-380, 0x1.e86b82aa80b2ap-499,
     0x1.71e734c9313f6p-961, 0.0, 0.0, 0x1.8b34f43dfbefep-307, 0.0,
     0x1.0b043587d7145p-686, 0x1.4f638dae8eec9p-262, 0x1.ef1492d44b57ep-10,
     0x1.f2fc8c660def3p-1012, 0.0, 0.0, 0x1.4e477faed9402p-508,
     0x1.4c5ab7a41d776p-427, 0.0, 0x1.23c76bdced848p-210, 0.0, 0x1.26815eabb60fap-26,
     0x1.47e4b4711659p-774, 0x1.45565160c9beap-681, 0x1.fddb6c54bd35dp-766, 0.0,
     0x1.4574b85a00d85p-670, 0.0, 0x1.e7809cde787f9p-979, 0.0, 0.0,
     0x1.f50c4f428f4adp-917, 0.0, 0x1.5f114507ff928p-852, 0x1.e589e119cc4cap-880, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93853218923ecp-556, 0x1.8df974921f43ap-723, 0.0,
     0.0, 0x1.d30bd21ae782bp-454, 0.0, 0x1.4e81a446d7f84p-958, 0x1.bb019d327459cp-543,
     0.0, 0x1.fbd357c7a3e8p-837, 0.0, 0.0, 0x1.fa9c399f6d5f6p-149,
     0x1.4881ae6a67e2cp-687, 0.0, 0x1.e191a7cfbcd1ap-570, 0.0, 0.0,
     0x1.60e94b40b2e5dp-462, 0x1.7c39964a84cf9p-474, 0.0, 0.0, 0x1.f95d86fcb6633p-585,
     0x1.de845a45c4d5fp-219, 0x1.17ded07dc7cedp-932, 0.0, 0x1.de880a32dafc8p-935, 0.0,
     0.0, 0.0, 0.0, 0x1.1a36d3f454fb8p-183, 0x1.c6a28604e8669p-791, 0.0,
     0x1.a45d6f8bfb831p-716, 0.0, 0.0, 0x1.593b3f11133f8p-121, 0x1.9978f90f997dp-697,
     0x1.3a788044622d6p-260, 0.0, 0x1.94e9e3b42af75p-202, 0.0, 0.0, 0.0, 0.0,
     0x1.aa22105d6d035p-54, 0.0, 0x1.90ba8969c2654p-834, 0.0, 0x1.e30f3d3536beep-144,
     0.0, 0x1.42b3b17a34746p-931, 0x1.a7ac740114d26p-442, 0x1.17fc60ef0c73p-92,
     0x1.7372d32499f4fp-323, 0.0, 0x1.411f9df1f2139p-460, 0.0, 0.0,
     0x1.137e6ccbc495ep-155, 0.0, 0x1.ec037b3043b3cp-541, 0x1.b1d5f5cd7be74p-104, 0.0,
     0.0, 0x1.f1cb13b4c2e0cp-73, 0.0, 0x1.c0360d1a740bdp-59, 0x1.27ce19900925fp-59,
     0x1.bc45c389f9f72p-924, 0x1.ad177947c1ae3p-632, 0.0, 0.0, 0.0,
     0x1.41fa1a07ed61ep-26, 0x1.d326db81de2d8p-540, 0x1.6d68b6e441eb1p-393, 0.0,
     0x1.84d40753fc94bp-149, 0.0, 0.0, 0x1.99ed8fdae3887p-55, 0.0,
     0x1.f55b04162362cp-229, 0.0, 0.0, 0x1.6c958f07c491fp-628, 0.0, 0.0,
     0x1.7f2aa85f4ec4ap-869, 0x1.b3577bd62216cp-806, 0.0, 0x1.b059dc018e2c6p-276, 0.0,
     0.0, 0x1.6a49bf0750328p-362, 0x1.966c6ce0208b1p-531, 0.0, 0.0,
     0x1.434c422efb475p-611, 0x1.8e3415fad83ffp-94, 0.0, 0.0, 0.0,
     0x1.09147a72c2478p-626, 0.0, 0x1.95b76c779ee4p-97, 0.0, 0x1.fe3ea81f716d1p-445,
     0x1.b76f070a8e4c5p-286, 0.0, 0x1.fac04352ec578p-949, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a2926c6f72fbfp-555, 0.0, 0x1.b4669dfd8728fp-76, 0x1.61de371194aep-558,
     0x1.b3c0e107eb992p-999, 0x1.f570fa11e1592p-488, 0x1.fdf8e0bd5a605p-837,
     0x1.95e8d5a2277bcp-623, 0.0, 0x1.518294920f83p-166, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f91b17c5d0396p-589, 0x1.8cfec3313c132p-269, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e2e73f92d189p-748, 0x1.864440b326c52p-499, 0.0, 0x1.4653169cecfcp-582,
     0x1.61436b512452ep-13, 0x1.afb1ea0f953bep-89, 0x1.4b0f780d7e93bp-187, 0.0,
     0x1.e19a5f4146e96p-504, 0x1.9ebe1946e7baep-219, 0.0, 0x1.720615e89310ep-656,
     0x1.ebfea19be3b86p-675, 0.0, 0.0, 0.0, 0x1.7cc0984575d8p-792, 0.0, 0.0, 0.0,
     0x1.c54c8a8d9b4a8p-864, 0.0, 0.0, 0.0, 0x1.197cc6815869p-380,
     0x1.9995d92609a7fp-882, 0.0, 0x1.871595d8bea81p-293, 0x1.0f9dad8b3cd8cp-1020,
     0.0, 0x1.7c8257f0a839ap-691, 0x1.66b9ad2ea1251p-659, 0.0, 0x1.1c7ffd9cec4c1p-822,
     0.0, 0x1.47a77aef69fffp-273, 0.0, 0x1.3ae9be082627cp-817, 0x1.1b2e472991c75p-321,
     0.0, 0x1.0ee2d8b0b5feep-213, 0.0, 0x1.e33788197a628p-846, 0.0,
     0x1.5a509ccbc12f6p-940, 0.0, 0x1.88706958cfcbbp-501, 0.0, 0.0,
     0x1.7faaf9c1911c6p-668, 0x1.6e14b655d41e1p-553, 0x1.2db9a58997ebfp-259, 0.0, 0.0,
     0.0, 0x1.32b775efce10fp-359, 0x1.ae6b9f19c98f4p-732, 0x1.1d12b51881d73p-21,
     0x1.041f5f3c24297p-454, 0x1.f6c8760a6e4cp-1003, 0.0, 0x1.096d9bc06ff2dp-617, 0.0,
     0.0, 0x1.4826c0938e3eep-514, 0x1.5e93bbcd5bde4p-293, 0.0, 0.0,
     0x1.64e403f282b9bp-270, 0.0, 0x1.1cecdb6fdfc9bp-460, 0.0, 0x1.9c030d0fb019cp-899,
     0x1.d9251c7f5372dp-44, 0x1.412d3eeea42fbp-117, 0.0, 0x1.ecee99421b722p-1022,
     0x1.9cafc241072a6p-696, 0x1.80be238790d93p-722, 0.0, 0.0, 0x1.b2c4db0d8119cp-804,
     0x1.3d39003c26a0bp-967, 0.0, 0x1.6124b19d89aedp-798, 0.0, 0x1.7ebc048a2e3c3p-810,
     0.0, 0x1.a6d71bc175cfbp-31, 0x1.e629d12a3fa7ap-88, 0.0, 0x1.c8ccb48938024p-942,
     0x1.8d9d723192c08p-849, 0x1.fb595843def0ap-75, 0.0, 0x1.c0888db8d3f53p-130, 0.0,
     0x1.5bc87fd2ff12bp-79, 0x1.d16c5748b9e9dp-493, 0x1.54c91b8828cbbp-601, 0.0, 0.0,
     0x1.64be018773409p-539, 0.0, 0x1.f15860f9e5f95p-266, 0.0, 0x1.dcc65e1365188p-718,
     0x1.317d0d5dc9955p-598, 0.0, 0x1.e2beaa9c0d329p-485, 0.0, 0.0,
     0x1.cd254b0b98a2bp-651, 0.0, 0x1.644f365616effp-844, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.119fb111ce22ap-752, 0x1.279220564fe89p-470, 0.0, 0.0, 0.0,
     0x1.e1b194408d7bep-904, 0.0, 0x1.cce3c9a219681p-260, 0.0, 0x1.a54a0a1ec40d3p-403,
     0.0, 0.0, 0.0, 0x1.7c67c8a3dce91p-527, 0x1.f6e01dba3c0bdp-759, 0.0, 0.0,
     0x1.35b5d74815766p-686, 0x1.fdff1201fcfedp-945, 0x1.d9b95380e83c4p-580,
     0x1.f45f83baa6fd6p-713, 0.0, 0x1.897c6844554bdp-478, 0x1.9b41fab16d508p-189, 0.0,
     0x1.928bbbb9704d3p-854, 0.0, 0x1.17976c4e19674p-664, 0.0, 0.0, 0.0,
     0x1.0866c51828934p-910, 0x1.8efd17aae555bp-423, 0x1.c8016024e4eddp-790,
     0x1.ee1f8387a8c24p-914, 0x1.80fe0bf08a838p-328, 0x1.1113e1ffeac09p-556,
     0x1.2747c5f8d9857p-131, 0.0, 0.0, 0.0, 0x1.c801a398b6d4p-706, 0.0, 0.0,
     0x1.1a319f611706fp-245, 0.0, 0x1.5b1616cd94e72p-787, 0x1.00e796c1a74fap-455, 0.0,
     0.0, 0x1.23fc4012f2733p-284, 0x1.0acdfd6398c95p-891, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.372257dd1999cp-415, 0.0, 0.0, 0.0, 0x1.04fc311787921p-617, 0.0,
     0x1.00fc480d7965bp-900, 0.0, 0x1.34a8832c8dca2p-688, 0x1.ea00db7a5bf3fp-861,
     0x1.4771596634c45p-399, 0.0, 0x1.4672998174385p-477, 0x1.0b1bb1e48ae65p-306,
     0x1.d5c4486ed29p-564, 0.0, 0.0, 0x1.1501127b2ab1ep-1020, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.026c37bd003f2p-104, 0.0, 0.0, 0x1.9395f4713cf5ep-302, 0x1.6302dc8bf7ffdp-615,
     0.0, 0x1.0ec9687488a89p-796, 0x1.e0389b5e6ecacp-788, 0.0, 0.0, 0.0,
     0x1.bd219b1f90644p-638, 0x1.219c91e33081dp-975, 0.0, 0x1.d0883b352c64fp-109, 0.0,
     0.0, 0x1.7be645571baecp-326, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2281996cece7p-156,
     0.0, 0.0, 0x1.d2cc5eb22123bp-858, 0.0, 0x1.e4c5fa4178651p-372, 0.0,
     0x1.1ab98408ee125p-521, 0.0, 0.0, 0x1.bceed0dad9f3p-711, 0x1.d09b2affea0edp-743,
     0x1.1b0ebb2c6f30fp-21, 0x1.db422a56470a4p-63, 0.0, 0x1.e824ac3e33746p-599, 0.0,
     0.0, 0x1.f1c6bd22b24b8p-68, 0x1.f52e4227e4538p-713, 0.0, 0x1.1a37faef57b4p-189,
     0x1.6c6a2c6807a8fp-620, 0.0, 0.0, 0x1.f38c452126a45p-408, 0x1.2331a5eba77f5p-283,
     0.0, 0.0, 0x1.2b7f8a2c4e542p-9, 0x1.4662bcb61f913p-923, 0.0,
     0x1.d504c1b5b7ab8p-257, 0x1.0d92c1c056b2bp-878, 0x1.b41f2f73d37f9p-883,
     0x1.c0b7d9e41cd5ap-849, 0x1.155361a6e603dp-376, 0x1.06c6f44d6b5b5p-710,
     0x1.6392653f54fep-779, 0x1.a1c7da5ce742p-439, 0.0, 0.0, 0.0,
     0x1.383231d3ebb6ep-449, 0x1.3b10d86da0f0ap-273, 0x1.b09e1aedfbeabp-957,
     0x1.357ab94ad4bfbp-1019, 0x1.dc2dd86299808p-219, 0.0, 0.0,
     0x1.9a16f16d5c3a1p-709, 0.0, 0x1.9bd34ebdc9352p-754, 0.0, 0x1.67c768a80fe3fp-978,
     0x1.9ad29b30423f3p-812, 0x1.98978700bbf5dp-499, 0.0, 0x1.de64629d3cf52p-716, 0.0,
     0x1.1033a77f0dad1p-492, 0x1.7142ca22d29c4p-1015, 0x1.5ae021df63abap-507, 0.0,
     0x1.8601bb713f875p-949, 0x1.22199cb37f9cp-474, 0.0, 0x1.a3dab4d0971a9p-968, 0.0,
     0x1.91d5874bd03efp-115, 0.0, 0x1.f2e262e33abe3p-608, 0.0, 0.0,
     0x1.e2b5b44fba379p-245, 0x1.a8484e830655cp-940, 0x1.806d4535abbf6p-735,
     0x1.bf22a51cca0f7p-124, 0x1.7fcbcff1be07p-62, 0x1.6f1009e25a848p-785, 0.0,
     0x1.b9266f916e125p-906, 0.0, 0x1.97c0d5f083781p-858, 0.0, 0.0,
     0x1.ec1e313e6433cp-280, 0.0, 0.0, 0x1.bcbe8e2f30dap-858, 0.0, 0.0, 0.0,
     0x1.ca046f5f498cp-490, 0.0, 0x1.ac7db495ce543p-1017, 0.0, 0.0,
     0x1.1a53030779b71p-61, 0.0, 0x1.fd4fd00d77c4cp-781, 0.0, 0x1.92b11dfb56bbbp-715,
     0.0, 0.0, 0x1.d034421e16eedp-613, 0.0, 0.0, 0x1.3fbbe35cad8a6p-703, 0.0, 0.0,
     0x1.5ebf0e582614bp-42, 0.0, 0x1.f2e0f63d8d452p-734, 0x1.6f835f94d4e81p-284,
     0x1.282a3fa330f66p-186, 0.0, 0.0, 0x1.0982ed507ff27p-229, 0x1.2f0d4f7acac94p-380,
     0.0, 0.0, 0.0, 0.0, 0x1.98a30d4f3181ap-438, 0x1.4b0b916bcc489p-37,
     0x1.36c0a5a39798cp-232, 0x1.afff0582573bap-436, 0x1.71b3db49003fcp-664,
     0x1.6e94f03868fefp-37, 0x1.783561ec9d154p-679, 0.0, 0.0, 0.0,
     0x1.d585a2e8b4c2cp-307, 0.0, 0x1.0228635ff0d05p-577, 0x1.2410843961cdep-235,
     0x1.d2d97f544e89fp-674, 0x1.1e8b301a02c66p-167, 0.0, 0x1.ee7f6548a183ap-240,
     0x1.eae8e57c3f2c4p-391, 0x1.fec24c2ed6875p-239, 0x1.87edac3fbd87dp-734,
     0x1.9eda91b1c7138p-662, 0.0, 0x1.28b02271d0fe9p-638, 0x1.d30d2b924c4bp-79, 0.0,
     0x1.b06be305a5cc4p-180, 0.0, 0.0, 0.0, 0.0, 0x1.b6f27b2750c85p-960,
     0x1.31f05404e90bap-463, 0x1.93fd1f2a33ea6p-675, 0.0, 0x1.f0f1f52b541a6p-242, 0.0,
     0.0, 0x1.15fcccf6f90fdp-110, 0x1.978a7cc87d2dap-955, 0.0, 0x1.52de61fc376c4p-33,
     0.0, 0x1.ea917437e9b1bp-865, 0.0, 0x1.135722f7b7ccep-301, 0.0, 0.0,
     0x1.a2bf1f792cd1p-671, 0x1.24a1ed8aeb164p-935, 0x1.cf6e499d4cad7p-180, 0.0,
     0x1.d1d8706308dfcp-623, 0x1.402476303d225p-128, 0x1.494b6dc23019fp-858,
     0x1.227014b38afa1p-423, 0.0, 0x1.30e0a3c522bd6p-231, 0x1.5f6801337e4b6p-528,
     0x1.e814f8242e5d2p-138, 0x1.a9057fe484ab3p-577, 0x1.b49e3647502d4p-790, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.170b87a23ffd1p-502, 0.0, 0.0, 0x1.f19aa95ded52ap-176,
     0x1.4f185854c6e1ep-607, 0.0, 0x1.6e463a4180549p-56, 0.0, 0x1.430e998698247p-882,
     0x1.a1b162677133ep-147, 0x1.7207a1774a6d5p-254, 0.0, 0.0, 0.0,
     0x1.a1208ca645132p-891, 0.0, 0x1.3cbab32dac41p-862, 0.0, 0.0,
     0x1.17ac84b1955f7p-90, 0.0, 0x1.f6f35fae4840fp-65, 0x1.b702507a41486p-500,
     0x1.2a32fc58ec50bp-981, 0x1.89bc67b246c68p-159, 0.0, 0x1.ab6e150c2485p-213, 0.0,
     0.0, 0.0, 0x1.602a6edb63bb1p-805, 0.0, 0x1.26c13d8a0ee3ep-240, 0.0,
     0x1.e76f5b7c0ac7ep-680, 0x1.ddebcaaac8b19p-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_asinhd4_u10kvx(tmp0);
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
    printf("Sleef_finz_asinhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asinhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
