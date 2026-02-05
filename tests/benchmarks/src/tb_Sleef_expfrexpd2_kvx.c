/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expfrexpd2_kvx.c --function Sleef_expfrexpd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 2 --function-input-vector-size 2 --precision int32 \
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


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.c035f9e8c7026p-328, 0x1.22d29be177ea6p-307, 0.0, 0.0, 0.0,
     0x1.862852f976215p-889, 0.0, 0.0, 0x1.d759f8945fd78p-457, 0x1.ae78ddfbbb7bbp-719,
     0x1.45ed85e5f323ap-225, 0.0, 0x1.8262c7c39e0b1p-20, 0x1.d4a8ded2abcc5p-455, 0.0,
     0x1.d7657b43fee17p-246, 0x1.dc1dacb953d5cp-822, 0x1.93b7bc059a7ccp-213, 0.0,
     0x1.d2f0c05fdcc0fp-90, 0.0, 0x1.774a02083dbaep-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2008a7711c0ap-407, 0.0, 0x1.216e2f8a70fp-678, 0x1.6626b41008789p-533, 0.0,
     0.0, 0.0, 0x1.5c11307d492e1p-790, 0.0, 0.0, 0.0, 0x1.08fdacb8585d4p-430,
     0x1.8de728536b7d8p-866, 0x1.4f0120537a7f9p-961, 0.0, 0x1.5d1c78ba59515p-411, 0.0,
     0.0, 0.0, 0x1.1992e09523906p-978, 0x1.150fd993c352cp-371, 0.0,
     0x1.4047ed2712758p-173, 0x1.8342da1b75c1bp-583, 0x1.fcc97afbfa16ap-740, 0.0, 0.0,
     0.0, 0.0, 0x1.32df30e591499p-438, 0.0, 0.0, 0.0, 0.0, 0x1.80e757971521dp-839,
     0.0, 0x1.c77846d36ee3ep-559, 0.0, 0x1.5cb27b752b2bbp-579, 0.0, 0.0,
     0x1.98cd1487835a6p-967, 0.0, 0x1.ee0dec3f37459p-874, 0.0, 0.0, 0.0,
     0x1.5e87eccaa4143p-932, 0x1.e281444b08121p-535, 0x1.40255f7b54fbfp-795, 0.0,
     0x1.2891f27d2f34dp-700, 0.0, 0.0, 0x1.2dc2c08257bdbp-611, 0x1.574036666d4f3p-153,
     0.0, 0x1.436481d031dc7p-178, 0.0, 0x1.0d1760646f34ep-419, 0.0, 0.0,
     0x1.41a5d70f05834p-624, 0x1.522a8dfad7491p-373, 0x1.45784b7e9074dp-109,
     0x1.d76b59ef3304ap-215, 0.0, 0x1.68b75d013383cp-859, 0x1.8326a8beb0e8cp-169, 0.0,
     0x1.ad98229361713p-359, 0.0, 0.0, 0.0, 0x1.a083a949baaa6p-59,
     0x1.3e9c1f7ac3c36p-182, 0x1.5eee9e8035c2fp-230, 0.0, 0.0, 0.0,
     0x1.95f288c5d1fcp-987, 0x1.a2422a91ceb75p-378, 0.0, 0x1.47da078763ab4p-951,
     0x1.e08766cc8e16fp-689, 0.0, 0x1.e41cad501fb02p-833, 0x1.5ccf4519d4b13p-630, 0.0,
     0x1.764c800ff9529p-599, 0x1.dfd2677e3a15ep-252, 0.0, 0x1.607a3782fcf5dp-1, 0.0,
     0x1.945bb2aecaf13p-925, 0.0, 0x1.eb7da8145888dp-705, 0x1.615ba0e1bf1fcp-763,
     0x1.216076794087bp-898, 0x1.38db26fd29e9bp-808, 0x1.afffc854362c9p-592, 0.0,
     0x1.7c172a2d6b9b2p-587, 0.0, 0.0, 0x1.5f6dad829ac44p-49, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2faceeff39281p-900, 0x1.fb7f2bd95dd7p-835, 0.0, 0.0, 0.0, 0.0,
     0x1.25a24abf1847ep-181, 0.0, 0.0, 0.0, 0.0, 0x1.ef16a95aadfb2p-792,
     0x1.02fbf3dd98d5fp-782, 0x1.ea7cf38f66fbap-708, 0x1.606a7227f9632p-852,
     0x1.9df58382c3611p-319, 0x1.0e2b3a375253bp-384, 0x1.886b4528022b7p-936, 0.0, 0.0,
     0x1.265862162474bp-40, 0x1.12971e0765a6cp-388, 0x1.4d9c725bd92bp-602, 0.0, 0.0,
     0.0, 0x1.73517b67f35f2p-519, 0.0, 0x1.be8f88e896999p-672, 0.0,
     0x1.0e2ac4c93548ep-82, 0x1.506760d92f9ap-971, 0.0, 0.0, 0x1.f186d52e03736p-444,
     0x1.a9552cde7c0afp-264, 0x1.3ac9bc1937935p-499, 0.0, 0.0, 0.0,
     0x1.76c528c90b4dfp-620, 0.0, 0.0, 0x1.9de928ed5f77dp-739, 0x1.8658aeee2b821p-836,
     0.0, 0x1.6ce78142bd8fcp-76, 0.0, 0x1.b37425d088023p-640, 0.0,
     0x1.6a4171721d8e3p-362, 0.0, 0x1.0ad18834c186fp-712, 0.0, 0.0,
     0x1.913960891f37bp-798, 0x1.cfec675d748c2p-151, 0x1.f57db88640958p-381, 0.0, 0.0,
     0x1.cb11b345c748cp-670, 0.0, 0.0, 0x1.f324d6c583ff6p-435, 0x1.8cc5b2adf375dp-530,
     0.0, 0x1.35e9333a83b27p-858, 0x1.37ca5bfa8ef0bp-721, 0.0, 0.0,
     0x1.cb9d598082516p-907, 0.0, 0.0, 0.0, 0.0, 0x1.04e8e3230f356p-456, 0.0, 0.0,
     0x1.58b2cac984e95p-61, 0x1.a88e0ca85b157p-1002, 0x1.363191463afdcp-215, 0.0,
     0x1.d592dff573fe6p-4, 0.0, 0.0, 0x1.9765ec1e272acp-60, 0.0, 0.0, 0.0,
     0x1.5a185d6d9b2e2p-271, 0.0, 0x1.c288f15884c26p-917, 0x1.ffeeb1728e8e7p-709,
     0x1.6b6dbe9e9fbadp-812, 0x1.411b58e19089p-382, 0x1.a5463dcbd26b5p-146,
     0x1.9b88d25e7ca76p-823, 0.0, 0x1.def146e9da854p-656, 0x1.55d93709c45f4p-905,
     0x1.99ccef58373eap-552, 0.0, 0.0, 0.0, 0.0, 0x1.53a9b0a3a2ee5p-548,
     0x1.671b670c54dc2p-582, 0.0, 0.0, 0x1.32c1a13280a8ap-657, 0.0, 0.0,
     0x1.bd0730a2834e5p-624, 0x1.443800505e0b7p-73, 0x1.5b8e96039add5p-770,
     0x1.271bc99ca82b6p-246, 0.0, 0.0, 0.0, 0.0, 0x1.bd5c3bed3fa11p-976,
     0x1.f51a2ea7ef6e2p-582, 0x1.26cb24105a6ap-111, 0.0, 0x1.4b49d688d5905p-728, 0.0,
     0x1.996e865ea6fc7p-1002, 0.0, 0.0, 0.0, 0.0, 0x1.3b3965e70186ap-681,
     0x1.9f053a7595b0bp-745, 0x1.862d456b1ff17p-342, 0.0, 0x1.c4620a4d65591p-41,
     0x1.9fc0a5d392cb3p-596, 0.0, 0x1.8307e25586b6ep-863, 0.0, 0x1.9555f944ac419p-215,
     0.0, 0x1.10b0c87c47329p-576, 0.0, 0x1.7e61b1689e811p-612, 0.0,
     0x1.748c23a3f9bcep-936, 0x1.69241eb55d6a3p-190, 0x1.85e2b463b0a89p-670, 0.0, 0.0,
     0x1.fd2d097fe014p-107, 0x1.8870416466347p-538, 0x1.79c3135522364p-455,
     0x1.c82355870f09dp-101, 0.0, 0x1.4c4340a09f648p-124, 0x1.0c84d8abb153fp-389,
     0x1.de26d92b4c6b2p-998, 0.0, 0x1.1cc1129ad571cp-104, 0.0, 0.0,
     0x1.a8d67248cc3b9p-271, 0x1.60877653e1573p-203, 0.0, 0x1.08d3fbffb76dbp-481, 0.0,
     0x1.bfa3ff1d32babp-53, 0.0, 0.0, 0.0, 0x1.f4108383d1668p-911, 0.0,
     0x1.c474301ad376fp-878, 0.0, 0x1.f8ec0ec85c13dp-570, 0.0, 0.0,
     0x1.9d9e223a858f1p-336, 0x1.5deb95f952c36p-713, 0x1.62eb268f4b379p-126,
     0x1.bcfdb151aac87p-1012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c8e478afa348p-489, 0x1.f3b9fa8b8de98p-635, 0x1.623fd4c999969p-929,
     0x1.aa086d3c5a36bp-791, 0.0, 0.0, 0.0, 0x1.872f295b181a6p-423, 0.0, 0.0,
     0x1.c978e8d195053p-789, 0.0, 0.0, 0.0, 0x1.12809ab4c5168p-124, 0.0, 0.0, 0.0,
     0x1.5e9178025a73dp-138, 0x1.d372ff807342bp-640, 0.0, 0x1.8602c733c9c9dp-856,
     0x1.bd38b850c6d7fp-784, 0x1.9b81fc4a1e0ffp-557, 0.0, 0.0, 0x1.26589345ad85ep-236,
     0.0, 0.0, 0.0, 0x1.da016ddc68314p-185, 0x1.c2cbf843ec37ep-897, 0.0,
     0x1.115cfc3e97df4p-658, 0x1.0c492fc03c899p-815, 0.0, 0.0, 0.0,
     0x1.4526930caa0f3p-35, 0x1.00354f2306642p-224, 0x1.35419b83ef951p-100,
     0x1.54c90f6b35c5p-407, 0x1.2ab824018c8b9p-326, 0x1.304d6d23e41bbp-55, 0.0, 0.0,
     0x1.850d922ef6cffp-183, 0x1.b2cead0739322p-972, 0.0, 0x1.ebb84a037cda5p-522,
     0x1.b605810cc5bcdp-651, 0.0, 0x1.27ad54c36b9fap-2, 0x1.65600e4de62ep-548,
     0x1.83650092481d5p-542, 0x1.182e08ab34eaap-691, 0.0, 0.0, 0.0,
     0x1.a66e4efb93d4ap-261, 0.0, 0.0, 0.0, 0x1.2107c1bb94de7p-780, 0.0,
     0x1.353532dcd63a9p-175, 0x1.c52f8ee63e429p-61, 0.0, 0x1.4d553c5b424c4p-539, 0.0,
     0.0, 0x1.dbea9d3aacc7cp-947, 0x1.025854800034fp-597, 0.0, 0x1.e3e93f5314122p-262,
     0x1.a83880b610dc2p-916, 0.0, 0.0, 0.0, 0x1.824e6d7fe387bp-30,
     0x1.d2658a70c45f1p-635, 0.0, 0.0, 0x1.180a4caaa320bp-818, 0x1.751ed718b810bp-367,
     0.0, 0x1.e51ad146fa801p-249, 0x1.7430f1a5b9a8cp-432, 0x1.78d8cb0ef7bc7p-799, 0.0,
     0x1.dc5402de6ca31p-916, 0x1.077ab6e31955fp-726, 0.0, 0x1.add7b08dd6e2dp-181,
     0x1.428c9f6107993p-524, 0x1.33b1cd5d2372ap-762, 0.0, 0x1.5aad4c02ab1c5p-957, 0.0,
     0.0, 0.0, 0x1.3b98bdb5c570ap-325, 0.0, 0x1.12caffb465a3ep-422, 0.0,
     0x1.aa4a842b80077p-185, 0x1.f2371d7f43f33p-711, 0.0, 0x1.a3d1220941067p-323, 0.0,
     0x1.c751e06cae677p-615, 0.0, 0.0, 0x1.e6de6a7bf6f39p-175, 0.0, 0.0,
     0x1.6f348d1b8d05p-307, 0.0, 0.0, 0x1.a7e25d9d1765fp-558, 0.0, 0.0, 0.0,
     0x1.b718b23ada98dp-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2284fd88971ep-672,
     0x1.5d45275d4d85ap-599, 0x1.a4384916b8cf9p-798, 0x1.a22bc55b9d641p-905,
     0x1.a4fc29bf290aap-263, 0.0, 0x1.c9a619bf870b3p-827, 0x1.f5f3e8905c159p-514,
     0x1.ceda76439501dp-307, 0.0, 0x1.8d546ef6df216p-299, 0x1.63c5da9557dd3p-353,
     0x1.ff1b26d0cd011p-389, 0x1.248ba5db301e3p-195, 0.0, 0x1.a24fdcac14ccbp-170, 0.0,
     0x1.68719630aa79bp-892, 0x1.0d315407154dap-769, 0x1.1808fd20f212ep-403,
     0x1.00ef60bb3a0d5p-722, 0x1.4e68b3388e70bp-383, 0x1.fe4c32ad19b8dp-567,
     0x1.27320ffe32637p-304, 0x1.e6e15fe526c95p-791, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50a266a36bdbp-626, 0x1.feea14f7d802ap-993, 0x1.ee89745f72988p-918,
     0x1.778b53f2b11cap-471, 0x1.624abdf933841p-591, 0.0, 0x1.264df17ee7dcap-468,
     0x1.6eed92e0cb8afp-753, 0x1.d464d52604fd7p-759, 0x1.f8b72f81ca07cp-919, 0.0, 0.0,
     0.0, 0.0, 0x1.2110dba909ba1p-809, 0.0, 0x1.5802d22448273p-600,
     0x1.77db5f825cc4fp-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2c4558304efdp-552, 0.0,
     0.0, 0x1.395f59bcaa1eep-590, 0x1.864041629e13dp-584, 0.0, 0.0,
     0x1.2023fc86f0102p-761, 0x1.e8dc8152cfa68p-631, 0x1.0a51d3da1abbp-852, 0.0, 0.0,
     0.0, 0.0, 0x1.86e3c2cba44c1p-399, 0x1.0be3d3b52c33p-315, 0.0,
     0x1.a0c7daedffd54p-297, 0.0, 0x1.a44f36279900dp-865, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a658922112a4p-912, 0.0, 0x1.d840b894612ep-71, 0.0, 0x1.f98329dd589d9p-644,
     0x1.8f2e6d1e648c5p-14, 0.0, 0.0, 0x1.c64df3defab6fp-15, 0.0, 0.0,
     0x1.b711484819fb8p-72, 0.0, 0x1.951bd814f9b4ep-10, 0.0, 0.0,
     0x1.14a2311495c73p-859, 0x1.7122d9c816eb5p-583, 0x1.c2d4a70e97751p-79, 0.0,
     0x1.6eedeb27e54abp-368, 0x1.bba00c13c7997p-68, 0x1.ab16f811cf1c2p-922, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.28ebe36d6ad88p-902, 0x1.ea7d2e4fdfebp-992, 0.0,
     0x1.9b03d7fbf1b9fp-42, 0x1.072a638eba367p-763, 0.0, 0.0, 0x1.a861f287282dcp-197,
     0x1.96770a7f4c6d7p-458, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2232d657da0f8p-118, 0.0,
     0x1.4bcd5f8041a32p-490, 0.0, 0x1.8bc7a4cb87c86p-468, 0.0, 0.0,
     0x1.2c607cb4c83cdp-280, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21b14a6dd2652p-833, 0.0,
     0x1.30d6808b657e7p-915, 0x1.a60d2411949fp-913, 0.0, 0x1.908daed41262ap-404,
     0x1.dc70cb943dfe3p-54, 0x1.87172bb2001a5p-175, 0x1.ab6f604ec2e8ap-702, 0.0, 0.0,
     0x1.d50a7d3db6ae4p-106, 0x1.4f41256c61e64p-204, 0.0, 0x1.2c2288ba1f0dep-649, 0.0,
     0x1.8ef31abbcac2ep-679, 0.0, 0x1.92b82a1be97c1p-913, 0x1.af9fa116cfba3p-920, 0.0,
     0.0, 0.0, 0x1.91c45a9780ff1p-172, 0.0, 0.0, 0x1.fdd78017d5ba9p-667,
     0x1.147ebf0ef5aaap-302, 0.0, 0.0, 0x1.da80371723729p-996, 0x1.1bfcfc8fd4319p-270,
     0x1.83842df4ba1a4p-329, 0x1.40dab59bbce3dp-88, 0.0, 0.0, 0.0,
     0x1.c1126fe7f217p-875, 0.0, 0.0, 0.0, 0x1.7292c03af1de4p-917, 0.0, 0.0, 0.0,
     0x1.c19961766a6b3p-150, 0x1.3aaa0b791ae3dp-138, 0.0, 0.0, 0.0, 0.0,
     0x1.a4dab87babd82p-825, 0.0, 0x1.9984475dc661cp-490, 0x1.505311eff1ba7p-351,
     0x1.db476f9f914c1p-849, 0.0, 0x1.baf1a420b648fp-774, 0.0, 0.0, 0.0,
     0x1.6e9c6d17902ebp-781, 0x1.60ef23b97f886p-660, 0.0, 0.0, 0x1.775647cae1fap-991,
     0.0, 0x1.e3904784fd022p-68, 0.0, 0x1.98608b8a540c5p-227, 0.0,
     0x1.7e19d6185db89p-389, 0x1.71f7f29e1289bp-84, 0x1.9318324a3e83ep-973,
     0x1.ed50a5508bbb5p-360, 0.0, 0.0, 0x1.c1a35aeff7f7bp-574, 0.0, 0.0, 0.0, 0.0,
     0x1.d672ab990adf9p-569, 0x1.774444e81c97cp-588, 0.0, 0.0, 0.0,
     0x1.db7be80c5cf44p-621, 0x1.b0960ef047b24p-793, 0x1.ef9216fb4bf59p-446, 0.0,
     0x1.8971d1115a279p-258, 0.0, 0.0, 0x1.57319473fbd33p-985, 0.0,
     0x1.579a9c577ce17p-168, 0x1.99fb76a6c442ep-138, 0x1.1addc631eca7bp-141,
     0x1.653b9e2c472f6p-729, 0x1.ed8bd4e5f60dfp-407, 0x1.fee9f0f86c489p-124, 0.0, 0.0,
     0x1.e97cf1c58adbdp-409, 0.0, 0x1.2d67a9d05d3c1p-506, 0x1.95c528f29bf55p-104,
     0x1.4cce5a1f6fb72p-896, 0.0, 0.0, 0.0, 0.0, 0x1.887e138cf778p-519, 0.0,
     0x1.90dd11d9f2c4dp-428, 0.0, 0x1.bf825f6ce6c37p-480, 0.0, 0.0, 0.0,
     0x1.09c8fb695f91cp-879, 0.0, 0x1.c00a4722cf7e7p-883, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.500b74dddcf85p-164, 0x1.8d927d5cee15ap-746, 0.0, 0.0, 0x1.0449fedebb67bp-108,
     0.0, 0.0, 0x1.721ab5db99839p-372, 0x1.3712331f55f3dp-717, 0x1.8949d0f3019d1p-642,
     0x1.b4198bc3b6b62p-392, 0x1.618fb34c031a6p-135, 0x1.86dbef1437fd9p-322, 0.0, 0.0,
     0.0, 0x1.f2ba887c12136p-541, 0.0, 0x1.d0c6f0b299aecp-1017, 0.0, 0.0,
     0x1.1418a8371521ep-624, 0.0, 0.0, 0.0, 0x1.de4f714005f7ap-891, 0.0,
     0x1.22c31c6ea3eep-685, 0x1.2582baf76f6f7p-751, 0.0, 0x1.360e67851dd7ap-918, 0.0,
     0.0, 0x1.60b3fe304c7b3p-154, 0.0, 0.0, 0.0, 0x1.31b27bf6fce1ap-310, 0.0,
     0x1.b5ed04d97aad3p-192, 0x1.c3c8520eb50b3p-682, 0x1.1228eb04692dcp-122, 0.0,
     0x1.0869692f991dp-15, 0.0, 0x1.26fcdaa27b25bp-519, 0.0, 0x1.49d0133cd9e24p-725,
     0.0, 0x1.b8611cab8a796p-703, 0x1.687e6b75fa914p-860, 0x1.d86bf1376bb9dp-403, 0.0,
     0.0, 0x1.c56df45d2dc1p-620, 0.0, 0x1.c3ef871d559dfp-360, 0x1.d2b9821e548bap-350,
     0.0, 0.0, 0x1.91f0ab41000cap-986, 0x1.53340671fa1bfp-690, 0.0,
     0x1.5f2273b22114ep-85, 0x1.824eb6ef49355p-840, 0x1.2367a83cae358p-275, 0.0,
     0x1.9e093b3a4c6bfp-963, 0.0, 0.0, 0x1.337ccd7c24bf4p-449, 0.0,
     0x1.18df2411afb0fp-812, 0x1.0db80bfe19f43p-391, 0.0, 0.0, 0x1.e13b856d1ad43p-256,
     0x1.06462647b8bdap-882, 0x1.b4d2355ec2fffp-629, 0.0, 0.0, 0.0,
     0x1.20f99d7f3efa7p-492, 0x1.8bf822b4cc794p-660, 0x1.0b91c8f635d7ap-550, 0.0, 0.0,
     0x1.d72fff1fe9cd7p-526, 0.0, 0x1.35454ea5c1fa6p-854, 0.0, 0x1.3fa25e4ef1fcp-629,
     0x1.d640c9f908413p-113, 0x1.3e8d2df4cfcfp-988, 0.0, 0x1.4df4a5c9fbff8p-592, 0.0,
     0x1.dc89da8a727b1p-533, 0x1.f8e7085fd95e4p-188, 0.0, 0.0, 0.0, 0.0,
     0x1.7eca3a34a387ap-248, 0x1.78de5ab2a2743p-553, 0.0, 0x1.3e6e6472a6d3p-958,
     0x1.0d1a294550968p-392, 0x1.a5588e7dea7b8p-237, 0x1.71d50e2eca312p-226, 0.0,
     0x1.68cd7f0a31b2ep-326, 0x1.0a6d7c8fc60b6p-771, 0x1.3abd03c709bc8p-735,
     0x1.f48549537b5c1p-350, 0x1.75d984d0a544cp-525, 0.0, 0x1.2a83724305b3dp-510, 0.0,
     0x1.8b9d2f4445a1dp-859, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0eb2d7fe1d2ap-660, 0.0,
     0x1.19fbb5baa10a7p-286, 0.0, 0.0, 0x1.7a80023f59a96p-935, 0.0,
     0x1.22ee923ea5c15p-588, 0x1.de064ce1287f4p-260, 0.0, 0x1.2b752959d8889p-2,
     0x1.ce92f0b047e41p-737, 0.0, 0.0, 0.0, 0x1.6370cc0ea1f75p-324, 0.0,
     0x1.28bd133f9a393p-23, 0.0, 0x1.f8e3d97ac6a37p-8, 0x1.aedebd3706c8cp-769, 0.0,
     0x1.3e22e0422cf06p-936, 0.0, 0.0, 0.0, 0.0, 0x1.e5ecd008326dap-200,
     0x1.305fde5b22314p-344, 0.0, 0.0, 0.0, 0.0, 0x1.ea3be5805d9c2p-321,
     0x1.70b490474263dp-713, 0x1.4956398fb6e03p-385, 0.0, 0x1.7c12cfd6389e2p-796,
     0x1.68b26010cc947p-541, 0x1.3a22584ef76e7p-926, 0.0, 0.0, 0x1.e1eaf9796159fp-818,
     0x1.efcfbc8013629p-823, 0.0, 0.0, 0x1.a573cb3295fc1p-263, 0x1.6824d5b10bd48p-468,
     0.0, 0.0, 0x1.e248683e5f518p-223, 0x1.99ee75ef89e4cp-125, 0x1.d1c2cb246e439p-577,
     0x1.c3e793922c3b8p-446, 0.0, 0x1.50add5b5713eap-890, 0.0, 0.0, 0.0,
     0x1.9adb1b6590e3cp-252, 0.0, 0x1.909a07902be65p-630, 0.0, 0x1.d6cca2cc09b16p-880,
     0x1.e8ab71b71e43p-457, 0x1.52c43500b9cdfp-338, 0x1.7a86fd43a8e11p-266, 0.0, 0.0,
     0x1.a53823495fff8p-125, 0x1.05bd43132a982p-985, 0.0, 0.0, 0.0, 0.0,
     0x1.fb7dd933f50e8p-731, 0x1.1a8ac60b10e9ap-923, 0x1.24b7987f2f56ap-995,
     0x1.987cbb929ab85p-827, 0.0, 0x1.8e06cb1adc4ep-130, 0x1.d1e11e3cf7f0ep-225,
     0x1.eca253b95c25ep-941, 0x1.9de57cfa99641p-157, 0.0, 0.0, 0x1.1ca0305be71d7p-148,
     0.0, 0.0, 0x1.af69247c2c1ccp-102, 0x1.d0105111e81afp-991, 0.0, 0.0,
     0x1.13c3a80da7082p-518, 0x1.af90188295becp-588, 0x1.7bdd096a11cafp-95, 0.0,
     0x1.5a0f14d37a611p-352, 0.0, 0x1.add5299bddc88p-767, 0.0, 0x1.e78583c928da9p-30,
     0.0, 0.0, 0x1.dc5c7ccfe53p-936, 0.0, 0.0, 0x1.a1f3cbf421d4bp-133,
     0x1.6895b8a8bc8d8p-905, 0x1.3ebc62f3da849p-835, 0.0, 0x1.d2add6b50760ap-346,
     0x1.fda0a919de983p-435, 0.0, 0.0, 0.0, 0.0, 0x1.8adb7528f869fp-255, 0.0, 0.0,
     0.0, 0x1.7af9de73c6c7ep-972, 0x1.3a91a54431d81p-73, 0.0, 0.0, 0.0,
     0x1.1ef17add10494p-600, 0x1.f4e90e684e08fp-879, 0.0, 0.0, 0x1.322349da08913p-519,
     0x1.0f6eac0da8e89p-846, 0.0, 0x1.d789c49ee50d7p-94, 0x1.0f767cd28d75ap-997, 0.0,
     0.0, 0x1.537d32b996b97p-723, 0.0, 0x1.22fad6c77a048p-826, 0x1.987401daaeacap-267,
     0x1.912efd150a747p-853, 0.0, 0.0, 0.0, 0x1.4f08e47b9f4a4p-453, 0.0, 0.0,
     0x1.338bf8d904f52p-444, 0.0, 0x1.11f942a09385bp-766, 0x1.d4368a178410ap-515,
     0x1.c720abd2db019p-157, 0x1.8474f720206acp-969
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_expfrexpd2_kvx(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_expfrexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expfrexpd2_kvx bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
