/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand4_u35kvx.c --function Sleef_finz_tand4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
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
     0.0, 0.0, 0.0, 0x1.ba91327cff9f3p-7, 0.0, 0.0, 0.0, 0x1.96185fc0a2907p-912, 0.0,
     0x1.fa71935fc22bbp-51, 0.0, 0.0, 0.0, 0x1.f8ac60f43d4d7p-666,
     0x1.13f7cc77bd3e5p-373, 0x1.3378f1dc97dccp-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.48d18acdb5e89p-809, 0.0, 0.0, 0x1.711bc506954b8p-116, 0.0, 0.0,
     0x1.64da76ec2b94ap-612, 0.0, 0.0, 0.0, 0x1.cc1d5214a8772p-824,
     0x1.800e62797253ap-981, 0x1.fd7b647c12e5ep-610, 0x1.232fa9ed1c5acp-895,
     0x1.2cdb7bd9a1977p-186, 0.0, 0x1.1906d73477c4ap-575, 0.0, 0x1.eee7f57ec550ep-559,
     0.0, 0.0, 0.0, 0x1.82fe1fb9e9587p-185, 0.0, 0x1.561768afc6413p-689, 0.0,
     0x1.a5cf30b0d8b0bp-182, 0.0, 0x1.919467fda0c4ep-1012, 0x1.d62d8b0485398p-463,
     0.0, 0.0, 0.0, 0x1.4dabe5b21116dp-302, 0.0, 0x1.fdde4592eb0dcp-729,
     0x1.a96d7f04cdb41p-337, 0x1.b754cafb96f32p-301, 0x1.53852d9b89b8ap-560,
     0x1.1ab7806e46662p-1, 0x1.810bbe7892776p-77, 0x1.14e7abf252acbp-28, 0.0,
     0x1.388daa8351837p-121, 0.0, 0x1.9c8c85738730fp-373, 0x1.ad8271931f58cp-229,
     0x1.028031b3ff543p-739, 0.0, 0x1.4783aef8c73d4p-229, 0.0, 0.0, 0.0,
     0x1.97cd9cbfa580cp-297, 0x1.4b32bc4637a73p-302, 0.0, 0x1.809a5fa4918a6p-769,
     0x1.1da8074920f68p-149, 0x1.f9d53dba61a7dp-510, 0.0, 0.0, 0.0,
     0x1.4561eda827e77p-908, 0x1.855df9a73fc25p-504, 0x1.cd9ff6cc8ed78p-24, 0.0,
     0x1.66862a8ccfdb6p-74, 0x1.9dbfcc4ab2a92p-1022, 0x1.0b157c455dd7ap-886, 0.0,
     0x1.35545e212afddp-718, 0x1.32eb7f815e0aap-97, 0x1.5df2781fbbd5dp-581, 0.0,
     0x1.6e20d92eee048p-808, 0.0, 0.0, 0x1.9c093e30f6962p-732, 0.0, 0.0,
     0x1.67b23b4ad05bep-134, 0x1.5bbbd1706fefcp-532, 0.0, 0.0, 0x1.b9630699f644cp-949,
     0.0, 0x1.c9d7a9dbfd44bp-870, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9878b39bd533cp-341,
     0x1.4456137801616p-716, 0x1.c954897c80643p-798, 0.0, 0x1.0b70c2a42b721p-198, 0.0,
     0x1.4d906ef0fbb31p-89, 0x1.4a299eda7971bp-840, 0.0, 0x1.65d5c5b458652p-269,
     0x1.62da8056a4268p-178, 0x1.1fc5896a174c9p-155, 0.0, 0x1.5104f12285d36p-5, 0.0,
     0x1.139f046731748p-201, 0.0, 0.0, 0x1.ddc919b69ae1ap-79, 0.0,
     0x1.7004a813b792ap-886, 0.0, 0x1.2fe2f9658979ap-457, 0x1.26913812c8119p-850, 0.0,
     0.0, 0x1.0ab878a856395p-900, 0x1.6559e51ee3203p-538, 0.0, 0.0,
     0x1.d88a64dc3ce89p-940, 0.0, 0.0, 0.0, 0x1.50ce29a7a6f62p-131, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cece2793ac93p-933, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de7a916e9d081p-954, 0x1.21efb54479fcep-645, 0.0, 0.0, 0.0,
     0x1.387bdf329f871p-458, 0x1.0ca86325ffbaep-160, 0x1.92dae5d778c08p-567,
     0x1.6d09fd9e222dp-808, 0x1.9e8fcfff92219p-724, 0x1.053df4391e1b7p-402,
     0x1.8f41b19b81d4p-698, 0.0, 0.0, 0x1.2b6a8900ebaa8p-153, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3dfb309241cd3p-922, 0x1.8442a5b11e446p-772, 0x1.51c5bc7b65ff8p-700, 0.0,
     0x1.a189d329f5803p-772, 0.0, 0x1.a11316045d9e7p-561, 0x1.1526fcfb13985p-268,
     0x1.8969e27322b7fp-351, 0.0, 0x1.d0a863e8d5515p-648, 0.0, 0x1.e8998b851ac05p-70,
     0.0, 0x1.05c135f9a2ac8p-21, 0.0, 0x1.5e22772e8f0a6p-194, 0x1.d297a38f04587p-529,
     0.0, 0.0, 0x1.21d738e40ab9ep-757, 0.0, 0.0, 0x1.36ae5b1c131eep-313, 0.0, 0.0,
     0.0, 0.0, 0x1.a2ecbfb4b87a2p-398, 0x1.0b579226040bcp-9, 0x1.12c0eda1bb127p-704,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2679ba4c606cap-888, 0.0, 0.0, 0x1.7004b566fad0cp-87,
     0.0, 0.0, 0x1.63d6fdba14043p-990, 0.0, 0x1.e969a39faa31p-618, 0.0, 0.0,
     0x1.b1fe3384a83cp-523, 0x1.12dc63934bd5dp-43, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12da5818d3125p-889, 0x1.4b511cfd2cdccp-541, 0.0, 0.0, 0.0,
     0x1.21ff1ae343f74p-582, 0x1.2b9726cf0858ap-90, 0x1.9711b8c8ac2aap-690,
     0x1.0e61486b2cadcp-644, 0x1.4788872b209cep-193, 0.0, 0.0, 0.0, 0.0,
     0x1.5b089742c284bp-324, 0x1.dee7586a01c12p-865, 0x1.26c2149cc9ee4p-911, 0.0,
     0x1.62455f6fe4881p-827, 0x1.6d231b9df67eap-105, 0.0, 0x1.6280151514ff8p-869, 0.0,
     0.0, 0x1.df27fa69e64f3p-985, 0.0, 0x1.f9b9f36c815ffp-387, 0.0,
     0x1.f3cabbd24aa76p-102, 0x1.311b4d88bdf95p-202, 0x1.9af8b42be252ap-323, 0.0,
     0x1.b0e1abc4799adp-651, 0.0, 0x1.5a09efcd82cf6p-676, 0x1.161d5e98e368ap-388, 0.0,
     0.0, 0x1.331cf34b1e3f1p-352, 0.0, 0x1.2f2abd519adefp-896, 0.0, 0.0, 0.0,
     0x1.1bd586fdc6c95p-347, 0.0, 0.0, 0x1.946cc1dc489ecp-777, 0x1.db51d4ee1c698p-178,
     0.0, 0x1.dfd3dd97642eap-342, 0x1.c9af872d86c6ap-797, 0.0, 0.0, 0.0, 0.0,
     0x1.2ac2912045e42p-87, 0x1.0d31d0b3fa078p-12, 0.0, 0.0, 0.0,
     0x1.bfbbdbd4956a8p-695, 0x1.21bd2f1208bfdp-885, 0.0, 0.0, 0x1.551192638836dp-901,
     0x1.1dcb3884fefc8p-262, 0.0, 0.0, 0x1.3942e777bce13p-489, 0x1.0de723bbb358ap-200,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38c3edfc46c0dp-344, 0x1.9e23e6928a978p-249,
     0x1.16268e1b2d366p-599, 0x1.6ab53965cfb68p-760, 0x1.3a5be3d86e87cp-176, 0.0,
     0x1.a4d6d0e867b47p-702, 0.0, 0x1.89b28ce707a9ep-771, 0.0, 0.0, 0.0, 0.0,
     0x1.d3f7e74cf7716p-139, 0x1.30afb67b56707p-434, 0x1.ce3e87401fb26p-491,
     0x1.635a9cb3b42b1p-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f72c422ab38c1p-137,
     0.0, 0x1.84907a6d42766p-408, 0.0, 0.0, 0x1.0feed37b50e12p-71,
     0x1.1585638aaccbp-152, 0x1.260c4669d2784p-345, 0x1.b3fe362272a4p-185, 0.0,
     0x1.d58c5ffcee031p-673, 0x1.ab8dacea2cf29p-609, 0x1.df098ab1e1a7fp-181,
     0x1.c697e139466e7p-924, 0x1.8fcdd10f1fc4fp-256, 0.0, 0x1.ff06e32f312d9p-950,
     0x1.49e771ec18ebep-977, 0.0, 0.0, 0.0, 0x1.6c7c7b7d2cb8cp-469,
     0x1.ce4d3f82141d7p-457, 0x1.fb6d80d1b3c1cp-287, 0x1.f91754e6bdf78p-190, 0.0, 0.0,
     0.0, 0.0, 0x1.6a81c9e1b8e43p-139, 0x1.598795061db5fp-93, 0x1.1de3c5a97fffdp-220,
     0.0, 0.0, 0.0, 0x1.3ce4a27e040f4p-915, 0x1.5aa9142d6c7d9p-87,
     0x1.7f9fb10a69ccdp-12, 0x1.122ced308517ap-420, 0x1.5dc86993a501fp-622,
     0x1.acb59357012fap-880, 0x1.78cdcb9276f68p-591, 0.0, 0x1.304f2bfae2e3p-626, 0.0,
     0x1.2d88e77876a36p-824, 0x1.64b76cc2ef9f4p-66, 0x1.c0698709f24bbp-303,
     0x1.e580ddb7f5bc6p-748, 0x1.25dfc3338e3eap-670, 0x1.d2f3bf1b8760ap-815,
     0x1.511adbd5e8864p-388, 0.0, 0x1.46f18ff36a384p-120, 0x1.0cfef9d382843p-540,
     0x1.34aac3cb35178p-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22a19b2a2769bp-401,
     0x1.4dd353bcd3c4fp-26, 0.0, 0x1.efa52d11cb9a3p-199, 0.0, 0x1.dca61d082f451p-822,
     0x1.b41a96edd16d5p-871, 0.0, 0.0, 0x1.3338f68e33436p-51, 0x1.c7fccd13dd5b1p-164,
     0.0, 0x1.1e58012f1937ap-377, 0x1.b5201e3ada2b8p-135, 0.0, 0x1.60ee88d51bb24p-955,
     0x1.81b920c10eb4ep-211, 0.0, 0x1.15e7f723ffe43p-802, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5159b2cbed888p-180, 0.0, 0.0, 0x1.359efdb4841fp-727, 0x1.b86da9ed5d9edp-21,
     0.0, 0.0, 0x1.afb8d746f90cdp-68, 0x1.b9aa95dcce43fp-213, 0x1.61e234c49bafp-572,
     0.0, 0.0, 0x1.f8abc83a59c33p-804, 0.0, 0.0, 0.0, 0x1.1d7d4acfaa84ap-688, 0.0,
     0x1.ed7b585c4b937p-115, 0.0, 0x1.785d0753cef6dp-33, 0.0, 0x1.bebb278067d2cp-741,
     0x1.294f4a9a7af62p-165, 0x1.0557b8b10d991p-551, 0.0, 0x1.b139f034db3a6p-240,
     0x1.2b9cdf361417dp-311, 0.0, 0x1.ad96191c5d863p-148, 0.0, 0x1.ba5c8b17bb114p-571,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff4a724c97e21p-598, 0.0, 0.0, 0.0, 0.0,
     0x1.856d10f14f406p-515, 0.0, 0.0, 0x1.974a3011335d6p-599, 0x1.43925336aa501p-130,
     0x1.55e80f8d8e26bp-932, 0x1.71f5369eb2f03p-572, 0.0, 0x1.4c84a9c8ce06bp-507, 0.0,
     0.0, 0x1.75c122a9d486p-832, 0.0, 0.0, 0x1.87e6fb4b1d46ap-117,
     0x1.06b119269d244p-374, 0.0, 0x1.01542c2a03c2p-323, 0x1.96cc4380b124ap-897,
     0x1.70b13334dc19dp-780, 0.0, 0.0, 0x1.e3b79f49c4ba8p-128, 0x1.609830eb9401fp-134,
     0x1.234977c9a33bdp-559, 0.0, 0.0, 0.0, 0x1.1facaacd76fdbp-874,
     0x1.1dda314e49a5p-38, 0.0, 0x1.300b2f5c6f7a8p-694, 0x1.a50f04c17881ep-339, 0.0,
     0.0, 0x1.a165f11a0c066p-535, 0.0, 0.0, 0x1.198794152ffbp-647,
     0x1.f29dd6a11d02ap-855, 0.0, 0.0, 0.0, 0x1.16a026dd0916p-673,
     0x1.72635296fcad8p-221, 0.0, 0.0, 0x1.7f9f48fc403b5p-168, 0.0, 0.0,
     0x1.8c4a5dd2e88d9p-787, 0.0, 0.0, 0.0, 0.0, 0x1.1f9f8c6ab8f33p-302,
     0x1.74ec80c8c371cp-140, 0.0, 0x1.59bfe804b49cbp-917, 0.0, 0x1.edc9b71db41f6p-840,
     0x1.e2d4fcbb3c667p-675, 0.0, 0x1.50d4f7abc5808p-706, 0.0, 0.0,
     0x1.6b55996c9d546p-284, 0.0, 0x1.d3f814266039ep-553, 0x1.33e49ef8a65dcp-209,
     0x1.b92adb9e6a7a6p-888, 0.0, 0x1.f4696edd2140bp-870, 0.0, 0x1.74464e615d2bap-346,
     0.0, 0x1.43ca6c7319f11p-233, 0x1.5c17f7edd40e6p-905, 0.0, 0.0, 0.0, 0.0,
     0x1.3a96527366b0ap-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.91ba7b1abc371p-55, 0.0, 0x1.825a9dedb9b8bp-200, 0.0, 0.0, 0.0,
     0x1.2312b9924d6abp-467, 0.0, 0.0, 0.0, 0x1.4ffc3562fa61ep-707, 0.0,
     0x1.8fa913727d0f7p-217, 0.0, 0x1.665ba6a44dba4p-958, 0x1.d66b01c9d8adbp-914,
     0x1.6aff616ce2cffp-821, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2c37fde386adp-169,
     0x1.526f4d5dce173p-963, 0x1.e831d971dcb57p-245, 0.0, 0.0, 0.0,
     0x1.59cd5cedd0641p-815, 0x1.680a8d76a49e2p-436, 0x1.9e14c3f467dd9p-277, 0.0, 0.0,
     0.0, 0x1.60cb01291515dp-857, 0x1.ba8c240f70502p-562, 0x1.4d7ec81f7f4b5p-919, 0.0,
     0x1.3d4a128cd71f2p-796, 0.0, 0.0, 0x1.abcbbc22831afp-354, 0x1.ee4e5b7e765c2p-360,
     0.0, 0.0, 0.0, 0x1.92a8ebbf1c447p-389, 0x1.6326e865b0452p-7,
     0x1.26b1b8e894af8p-39, 0x1.cbdaf37b8bb49p-745, 0x1.0545554975764p-929,
     0x1.84c1af44e9047p-641, 0.0, 0.0, 0.0, 0.0, 0x1.0fedad700c3bep-314,
     0x1.b6b37f43c56d1p-448, 0x1.1349f01281966p-108, 0x1.48e933331c838p-897,
     0x1.1702b01c030fep-903, 0x1.0b1b1261f3653p-862, 0x1.4a3592a6a47f4p-567, 0.0,
     0x1.f8d3ede0ebb86p-621, 0.0, 0.0, 0x1.d995d95c0ce1p-763, 0.0, 0.0, 0.0,
     0x1.e4704c49ad1ap-471, 0x1.5df0a8b4df286p-671, 0x1.03cec14846a85p-850,
     0x1.c0a0d5909d4a8p-601, 0x1.5410aff2e0b5fp-635, 0x1.7b6396fe3fff7p-57,
     0x1.9ecc4b74b8ad9p-771, 0x1.a3cdcca25fcbp-840, 0.0, 0.0, 0.0,
     0x1.e3d54144f1125p-686, 0.0, 0x1.1e4a19b45005ap-799, 0.0, 0x1.6598502a40516p-419,
     0x1.54c460a55f3f3p-135, 0.0, 0.0, 0x1.2b346bfb95913p-330, 0.0, 0.0, 0.0,
     0x1.421a3df0c8391p-775, 0.0, 0.0, 0.0, 0.0, 0x1.580feeeb3dcf8p-271,
     0x1.08492410d26b8p-814, 0.0, 0.0, 0.0, 0.0, 0x1.4cd05e4647371p-475,
     0x1.a14637704ffc4p-666, 0x1.513811a9ad8aep-1022, 0.0, 0x1.18b3eed564e4ap-596,
     0x1.14b966d3a0e81p-283, 0.0, 0x1.4adcdb1c10796p-881, 0.0, 0.0, 0.0, 0.0,
     0x1.eb375d2b76d1ep-533, 0x1.8b3c9ea5eef61p-786, 0x1.60b7525c7796bp-969, 0.0, 0.0,
     0x1.fe90109e1062cp-116, 0.0, 0.0, 0x1.ac4606dc2d54cp-520, 0.0, 0.0,
     0x1.7b86a87815814p-657, 0x1.5bbb517e2c58cp-222, 0.0, 0.0, 0.0,
     0x1.12047b62c58cap-27, 0.0, 0.0, 0x1.96779226149e7p-158, 0x1.c02148bd8ea7dp-140,
     0.0, 0x1.270ada3f32f6bp-834, 0x1.91ad40ecb8b59p-750, 0.0, 0x1.790a8217753fp-703,
     0.0, 0x1.05278509f5fc3p-460, 0x1.796b497f0f43ep-952, 0x1.0abd61e10c909p-838,
     0x1.9e151e19897cdp-264, 0.0, 0.0, 0x1.f8931874caddep-312, 0.0,
     0x1.1eb807494c569p-442, 0x1.fd7b409b01adap-949, 0x1.e9ec3c0f63c6ap-460,
     0x1.49697e43c087dp-484, 0.0, 0x1.e546859b629dap-698, 0.0, 0x1.c75a5d8afe762p-674,
     0.0, 0x1.27d7fab2f4a38p-109, 0.0, 0x1.5245e394e3e21p-473, 0.0,
     0x1.b090a897c148dp-469, 0.0, 0.0, 0x1.afa2c6f2b7b2cp-214, 0x1.06f7b2f5945ccp-12,
     0x1.e9b4e7cd343e6p-1005, 0.0, 0.0, 0.0, 0x1.0becf1dc99606p-93, 0.0,
     0x1.5fb466fb63ec4p-94, 0x1.265caa2f5a71p-319, 0x1.3aaf7e3e33a47p-695, 0.0, 0.0,
     0x1.b2e3a7192adap-282, 0.0, 0x1.e0c28049a36cp-414, 0x1.e97db791e7621p-418,
     0x1.bae017303fa52p-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0e1c2a989946p-929, 0.0, 0.0, 0.0, 0x1.2f27c904489b6p-531,
     0x1.6fe4c2510dc5bp-704, 0x1.1d7f746ad707fp-1000, 0x1.e5bc9e4243249p-622,
     0x1.b0eac9047d431p-958, 0x1.3ef6ccc7a71dp-22, 0x1.f1f4fd1a0407p-721, 0.0,
     0x1.06cdeca0fe625p-517, 0.0, 0x1.e596b1bf4777cp-378, 0.0, 0.0, 0.0,
     0x1.6009594dc6d31p-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.be98526e3c626p-175, 0x1.f3b6f0dd39b25p-68, 0.0, 0x1.1a91d078d205ep-823, 0.0,
     0.0, 0.0, 0x1.ca54648b9b285p-892, 0x1.eac193be89fd9p-490, 0.0,
     0x1.b81996e2c82d7p-908, 0.0, 0.0, 0x1.a1dd0ad536a11p-446, 0x1.f62cc91f76b5cp-469,
     0x1.83b0a066d7d24p-224, 0.0, 0x1.76812b468ad9fp-672, 0x1.75a6163fcdb12p-155,
     0x1.c944e339d3691p-89, 0.0, 0.0, 0.0, 0x1.be501a5c06bc6p-893, 0.0, 0.0, 0.0,
     0x1.0ab739644dcecp-319, 0.0, 0x1.63d6a02d36057p-193, 0.0, 0.0, 0.0,
     0x1.45630dd348b83p-912, 0.0, 0.0, 0x1.236660b8e2803p-350, 0x1.c13778466e618p-978,
     0x1.235667d52f01bp-569, 0x1.8d44a6f98ca8ep-539, 0.0, 0x1.330879ce6840fp-351,
     0x1.1b8cb4fcf6655p-229, 0x1.3cac5e74e1b5cp-693, 0x1.5e58fdb4c6a06p-771,
     0x1.669c3193139f8p-77, 0.0, 0x1.84d51ac4f222dp-49, 0.0, 0x1.1204913099151p-627,
     0x1.c5220c36402fp-654, 0x1.0c29dc4da8ad9p-2, 0.0, 0.0, 0.0,
     0x1.d9e07f027a3a8p-636, 0.0, 0.0, 0x1.efe63f7cce082p-839, 0x1.4a7ca83e87991p-105,
     0x1.153bb5c7debcbp-106, 0x1.6bfbe62dd6219p-870, 0.0, 0x1.c28bcf59f1121p-262,
     0x1.cbb2fd8da315dp-919, 0.0, 0x1.95dd6736d61f8p-304, 0x1.778a69e75fa6ap-78, 0.0,
     0.0, 0.0, 0.0, 0x1.f7116a3b6206ap-461, 0.0, 0.0, 0.0, 0x1.ed3545ac2cc93p-973,
     0.0, 0x1.e56da202ba3e7p-455, 0.0, 0x1.016e0dd685c54p-776, 0x1.6ea7d7b7c744cp-261,
     0x1.d0f4f35b13ce1p-950, 0.0, 0x1.9f408dcf7954dp-277, 0.0,
     0x1.2531b77855abap-1012, 0.0, 0x1.de8a165e98fa9p-617, 0.0,
     0x1.3f5aaa5037c2ap-152, 0.0, 0.0, 0x1.cba98e0bd75eep-618, 0x1.ec6c6ca45cac2p-476,
     0x1.82310f88b8aeap-410, 0x1.732747974c437p-918, 0.0, 0.0, 0x1.c34bb64624ec1p-472,
     0x1.8df81f306d30ap-862, 0.0, 0.0, 0.0, 0.0, 0x1.93055c1939766p-616, 0.0, 0.0,
     0x1.ee1726a8b67e2p-276, 0x1.c0e0ad11df9dep-411, 0.0, 0.0, 0x1.2aa5b3fc03842p-283,
     0.0, 0.0, 0x1.666c87ab6e545p-25, 0x1.2d6688bab34a3p-832, 0.0, 0.0, 0.0,
     0x1.fb576eb07af37p-235, 0x1.ed250a18de064p-651, 0x1.966a8c6f5bc57p-141,
     0x1.ea9eae889579ep-872, 0x1.f22fa78f2c9f4p-816, 0x1.016708438e155p-313, 0.0,
     0x1.d0b499ce70c64p-303, 0x1.a4624fbd41fffp-275, 0x1.25c780c6c38b4p-819,
     0x1.6d0ed05489de6p-882, 0.0, 0x1.8b88c6f25b316p-1013, 0x1.2c86080cbe098p-650,
     0x1.b14966c91d30bp-404, 0x1.0316ddc0809d9p-698, 0x1.6cf9e95c1000bp-643,
     0x1.ecf4fde028064p-1019, 0.0, 0x1.7f563e9079fa7p-622, 0x1.d0321a0921c6ap-224,
     0x1.c03171ef5f3cbp-475, 0.0, 0x1.5d7ef94cfdd8dp-747, 0.0, 0.0,
     0x1.e9882bcd50f53p-730, 0x1.705e18344529dp-256, 0x1.3cb89053284b1p-661, 0.0, 0.0,
     0x1.ca247f1524247p-955, 0x1.87f703da1f53ep-643, 0x1.6c453d4de8d41p-1021, 0.0,
     0x1.fb14513684084p-725, 0.0, 0.0, 0.0, 0x1.bf1d438aac874p-377,
     0x1.26647c3c094f3p-392, 0.0, 0x1.b94f2c470655bp-660, 0.0, 0x1.bacdf9dde3fabp-85,
     0.0, 0.0, 0x1.95381bf086eb3p-946, 0x1.a13b66cfa14c9p-166, 0.0, 0.0,
     0x1.7db90fc39606p-773, 0.0, 0x1.e620d896f49fdp-330, 0x1.81eddb01434edp-839, 0.0,
     0x1.9dc4ecc9a70ep-61, 0x1.33d9922ed6877p-713, 0x1.310b336bd7c1bp-352,
     0x1.b532c7eb89078p-962, 0x1.91200d40ee27p-540, 0.0, 0.0, 0.0,
     0x1.ddaf7fc8fc003p-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c9c760b92291ep-521,
     0x1.4379643ed8797p-855, 0x1.c196401e476f3p-203, 0x1.1ecbb4d88253ep-1001, 0.0,
     0x1.a4a62aa0b9d48p-192, 0x1.f6b10c6b911afp-20, 0.0, 0.0, 0.0, 0.0,
     0x1.6f3e09ba5b5a1p-761, 0.0, 0x1.538c0b9e6565p-554, 0x1.ee425f72cc54cp-761, 0.0,
     0x1.39d899dbbe83bp-89, 0.0, 0.0, 0.0, 0x1.09108fa22f2ddp-311, 0.0, 0.0, 0.0,
     0x1.fa9eb3c3a664ap-569, 0x1.88c751233675p-771, 0x1.ceee639a117c8p-409, 0.0,
     0x1.2968839146c4cp-977, 0.0, 0.0, 0.0, 0x1.a55a7ade880b2p-29, 0.0,
     0x1.69cdaf9a37a62p-847, 0x1.8a715e918cadp-487
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
            tmp1 = Sleef_finz_tand4_u35kvx(tmp0);
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
    printf("Sleef_finz_tand4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tand4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
