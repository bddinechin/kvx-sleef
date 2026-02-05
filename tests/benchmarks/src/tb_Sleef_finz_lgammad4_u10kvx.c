/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammad4_u10kvx.c --function \
 *     Sleef_finz_lgammad4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.ff6138ace2269p-215, 0.0, 0.0, 0x1.31974b8448b26p-569,
     0x1.429ccea92fcbfp-861, 0.0, 0x1.f6aec82ec4709p-419, 0x1.3c35e3a234ecep-408,
     0x1.4f069192b175bp-487, 0x1.0a388eda32d4bp-782, 0.0, 0.0, 0.0, 0.0,
     0x1.3db89e9d4f4e8p-461, 0.0, 0.0, 0.0, 0x1.22dac83791e06p-67, 0.0, 0.0,
     0x1.5edcc779ede31p-723, 0x1.c6c1a391ec10dp-400, 0x1.2718fd8fc6403p-184, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.66869a0df2abdp-940, 0.0, 0x1.643d5d2bf19e6p-625,
     0x1.50c11cb06d8dap-953, 0.0, 0.0, 0x1.de525eb2de44ep-140, 0x1.9c01c2832b3bcp-110,
     0.0, 0.0, 0.0, 0x1.49217ea15dd52p-23, 0x1.c54118f2225c1p-769,
     0x1.7fb268355bbeep-596, 0.0, 0x1.5a22419a79eb2p-874, 0x1.3ae7b45986b03p-84,
     0x1.5e852275ed55p-375, 0x1.d261c412142ap-317, 0x1.10ac70f968f56p-365, 0.0, 0.0,
     0.0, 0.0, 0x1.4089090b934d7p-1000, 0x1.d905c960a0724p-265, 0.0, 0.0, 0.0,
     0x1.38edcc4aef385p-481, 0.0, 0.0, 0x1.bd5fae54e2fbcp-918, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9b7765119ffd6p-529, 0.0, 0.0, 0x1.8f0168dba8ecp-735,
     0x1.1ee7b6c1da2d8p-792, 0.0, 0x1.18ad5e5679e23p-641, 0.0, 0.0,
     0x1.e349f60e035eap-924, 0x1.90a8ef8907564p-966, 0x1.b2d3c81f22c2ap-951, 0.0, 0.0,
     0x1.8c15ec442f216p-843, 0.0, 0x1.ba22766811743p-312, 0x1.a55514c8293cfp-402,
     0x1.1a667e7b3d20ap-235, 0.0, 0x1.4e41473a8c9cbp-482, 0x1.eb4acfbbcf492p-886,
     0x1.c1222a4e6fa34p-204, 0.0, 0.0, 0.0, 0x1.2903cef4c427bp-838,
     0x1.e984f74cb433cp-826, 0.0, 0.0, 0x1.7407d693c5d13p-466, 0x1.a67c3f1f0b217p-539,
     0x1.38d53730cdee1p-1008, 0x1.2e0a165427521p-256, 0.0, 0x1.16fafa23021dbp-583,
     0.0, 0.0, 0x1.7d6b29310865p-457, 0.0, 0.0, 0x1.8d72ea3521c24p-364,
     0x1.57edf6b1d661fp-701, 0x1.e1396ad940874p-515, 0.0, 0.0, 0.0,
     0x1.e47674551789ap-1005, 0.0, 0x1.483bb937cc7dp-308, 0.0, 0.0,
     0x1.74e6874812c0cp-466, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2302bf5e1e2edp-350,
     0x1.1f8a28e51a8bp-705, 0.0, 0x1.5026aacaa1c6ep-1000, 0x1.40c28dfdb7ccbp-314,
     0x1.fa9df7dcafbccp-466, 0x1.a3e1cdaa4c2c5p-793, 0.0, 0.0, 0x1.09472d9b6d617p-87,
     0x1.4996c48129dc3p-943, 0x1.08fac708593bep-362, 0.0, 0.0, 0.0,
     0x1.2aeef6bb4a396p-436, 0x1.130afbdaddfbdp-688, 0.0, 0.0, 0x1.97204505fbe6ap-831,
     0x1.2a9117a9613bcp-867, 0.0, 0.0, 0.0, 0x1.3f3f7daee2148p-573, 0.0, 0.0,
     0x1.278929a6e64ccp-526, 0x1.7ed67a9d7ae44p-959, 0x1.32ca42b046cedp-372,
     0x1.df924dc473665p-633, 0x1.56fb73e29a81ap-319, 0x1.74f09071bda91p-315,
     0x1.d9b7a905d6193p-117, 0x1.7d210f2fad20cp-628, 0.0, 0.0, 0x1.0a6e1a3bb8b5fp-257,
     0x1.8dc687add1d18p-85, 0x1.62a78b56fb261p-325, 0.0, 0x1.327c41c6ddeebp-590, 0.0,
     0x1.20b97fc7cd57p-618, 0x1.b2076b065bccap-241, 0x1.903de7754b1a4p-255, 0.0,
     0x1.7120467e20057p-622, 0x1.8cc3f9ac0ae0ep-918, 0.0, 0.0, 0x1.be90c7f94fcb6p-572,
     0x1.e0301228b9267p-739, 0x1.26489fd9dbf07p-1013, 0x1.27865dc7095b4p-671,
     0x1.73d0cd28a080bp-132, 0x1.e4c6cf6ba92ep-516, 0.0, 0.0, 0x1.712b2b80468b7p-839,
     0x1.0e7e03e9fe5e7p-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55cdb2b997f22p-235, 0.0,
     0x1.dec832cca26d5p-631, 0.0, 0x1.938bd6343073bp-314, 0x1.5db072b74cd18p-9,
     0x1.16661871a95dep-499, 0x1.ba3288b287cf2p-922, 0.0, 0x1.96763be600049p-1014,
     0.0, 0.0, 0x1.3ac119ccb28c1p-98, 0x1.8ed5cbbbbd6a8p-232, 0.0, 0.0,
     0x1.961c8444067c6p-650, 0x1.34bc0e7f507bcp-265, 0x1.726f5f18c1a9ap-157,
     0x1.2641d9ce483e4p-698, 0.0, 0x1.014bfa64c44fbp-245, 0x1.a58c744a0325cp-289,
     0x1.fb6bb9bdf5e38p-414, 0.0, 0x1.11db2a063a059p-886, 0x1.f5fb2a6005c44p-799, 0.0,
     0x1.73c8880028067p-842, 0x1.013184621ea55p-873, 0.0, 0x1.934a34d89b5cep-322, 0.0,
     0.0, 0.0, 0.0, 0x1.8ddc189c945b8p-995, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.15de52b88a19bp-832, 0x1.01ea2db9e66ep-533, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b5c8fc2a24fb7p-413, 0.0, 0.0, 0x1.78dee5792266bp-599, 0x1.60ef63bcae3adp-608,
     0.0, 0x1.b92e4157ca3ecp-337, 0x1.7df5e449213c2p-423, 0.0, 0.0,
     0x1.6dfb13244a1dcp-220, 0x1.c4467e0217573p-516, 0.0, 0.0, 0.0,
     0x1.c52129e9d3988p-220, 0x1.e8dbcb3685364p-15, 0.0, 0x1.c4fba114bbc31p-250,
     0x1.3b90431da314ep-564, 0x1.159466e17f533p-763, 0.0, 0x1.8861cfed88446p-879,
     0x1.838ab6c75983bp-531, 0x1.1c4808171b096p-106, 0.0, 0.0, 0x1.ab241fc29297bp-601,
     0x1.7d1c6698bfd9p-13, 0x1.cd252d40b6b42p-643, 0.0, 0x1.288a81a540944p-124, 0.0,
     0x1.9782eee63413p-487, 0.0, 0.0, 0.0, 0x1.530bb8cdd635bp-425, 0.0,
     0x1.3505bc84814fep-44, 0x1.d4b5e6d9c8f1cp-772, 0x1.c187a50991a2cp-913, 0.0, 0.0,
     0.0, 0x1.88f5ddcb129d6p-228, 0.0, 0x1.a0fc4c87d2dbdp-897, 0.0,
     0x1.935525b38a5d3p-716, 0x1.b70950552660dp-765, 0.0, 0.0, 0.0,
     0x1.b30807b497d83p-422, 0.0, 0.0, 0.0, 0x1.371ed43f2ab98p-138,
     0x1.253e8028223cbp-180, 0.0, 0.0, 0x1.c22edf7a55935p-653, 0x1.4b65426ef151cp-165,
     0x1.feeddc4d628a5p-560, 0x1.a30ebf22003d1p-301, 0.0, 0x1.043e475974266p-506, 0.0,
     0x1.f95f8be82a8eap-276, 0.0, 0x1.512629f430f93p-542, 0x1.7b9e268b033a6p-583,
     0x1.73c882ead1d43p-804, 0x1.0b967cd6332d6p-151, 0x1.1464d6462a89cp-863, 0.0, 0.0,
     0x1.e005551f53522p-265, 0.0, 0.0, 0x1.75d81f6e81682p-384, 0.0,
     0x1.41f9306c6ec4ep-353, 0x1.8d43e69df6887p-999, 0x1.b6fc8c0231ebep-676,
     0x1.90d8263168a06p-543, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ade70ecc3c03p-474,
     0.0, 0.0, 0.0, 0x1.a282e71cc24c7p-536, 0x1.9787e52f70cc5p-138, 0.0, 0.0, 0.0,
     0x1.b1591ca968161p-775, 0.0, 0.0, 0.0, 0.0, 0x1.1c43b7764cadcp-747, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4c3e64d0f722dp-319, 0x1.a3ed31d8f68cap-862,
     0x1.6d6ae97a8ae11p-156, 0.0, 0.0, 0x1.82fce7ab5dc4bp-717, 0.0,
     0x1.02b00ba0fc2c5p-997, 0x1.43cda7fa94cb1p-735, 0x1.c797681e331eap-769,
     0x1.1ffceff82cfa8p-560, 0.0, 0.0, 0.0, 0x1.356ff543ef376p-785,
     0x1.4f6daf12bb019p-157, 0x1.3974735068747p-603, 0.0, 0.0, 0x1.b6ec6231fd959p-755,
     0x1.7a27303e8744bp-847, 0.0, 0.0, 0x1.8bf7d631d532cp-265, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.edd0fa1e0deedp-295, 0.0, 0x1.776b9a4eda949p-803, 0.0,
     0x1.a6fc24956a5b7p-616, 0x1.96200382014c5p-535, 0x1.f7f5186487414p-992, 0.0,
     0x1.d1ce1510591c5p-751, 0.0, 0x1.9f74fea189e57p-260, 0.0, 0x1.6d464873d9612p-844,
     0.0, 0.0, 0.0, 0x1.b01b8961023c6p-676, 0.0, 0.0, 0x1.ff157bbdf42b6p-248,
     0x1.629f28448befbp-150, 0.0, 0.0, 0x1.4ed012715a36cp-896, 0.0, 0.0, 0.0, 0.0,
     0x1.46de083c4b4bfp-465, 0.0, 0x1.eaa589311de2ep-561, 0x1.6ed390877b0c9p-932,
     0x1.a82871ab45fdap-5, 0x1.e4376de371947p-167, 0.0, 0.0, 0x1.1684d037b0f57p-1018,
     0.0, 0x1.c28e8f92e7742p-886, 0.0, 0.0, 0x1.2dbcd96bcfa5ep-176,
     0x1.126c640cf0f0ap-1007, 0x1.86ad9faa2862fp-396, 0.0, 0x1.6c40fb07e84bep-927,
     0.0, 0x1.694f461ccce9dp-902, 0.0, 0x1.9f3cfd616435bp-152, 0.0,
     0x1.88d705424d32cp-187, 0.0, 0x1.73118a54e9162p-131, 0.0, 0x1.a8c0cb47529afp-804,
     0.0, 0x1.0902229eef25dp-356, 0.0, 0x1.6ddc0940d6539p-904, 0x1.de5b4a2d9225bp-502,
     0.0, 0.0, 0x1.44402ffc8b987p-965, 0x1.ac93d6de04966p-1017, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b4aff32fb06dap-486, 0x1.f941a5767a932p-699,
     0x1.ad7d7176d2286p-970, 0.0, 0x1.4269e602d4004p-209, 0x1.b6c3fcd5784dcp-723,
     0x1.721f262c3f8bp-630, 0x1.47ba3e0564417p-169, 0.0, 0.0, 0.0, 0.0,
     0x1.aaaf7050566fdp-780, 0x1.8932b9b31bd84p-207, 0.0, 0.0, 0x1.1e47df86abb6p-672,
     0.0, 0x1.8285a03348f1bp-838, 0.0, 0x1.f31e7012db1c9p-225, 0x1.95617efa1af57p-579,
     0x1.b223c6045954p-520, 0.0, 0.0, 0x1.db4bfd3dd89c4p-2, 0.0, 0.0, 0.0,
     0x1.810b089bb2086p-641, 0.0, 0.0, 0.0, 0.0, 0x1.37dcd68e97de4p-47,
     0x1.5aa3debb1748ep-350, 0x1.c09f36649ea0ep-74, 0.0, 0x1.c2be411f20913p-653, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.01f369a64944dp-258, 0.0, 0x1.883377f9f384fp-58,
     0x1.a3afd9685c924p-857, 0x1.1c604858c9f89p-860, 0x1.23ddcf5bdeeb9p-98,
     0x1.fb6cb4b3a89dap-12, 0x1.e68eea0ff9315p-623, 0x1.810c33ecceaddp-86,
     0x1.2669fc7e13433p-252, 0.0, 0.0, 0x1.2cfe131d74cdep-527, 0.0, 0.0, 0.0,
     0x1.5470170afc3a8p-429, 0.0, 0x1.f3f526a0ed645p-522, 0x1.2b0a7f90734e7p-578, 0.0,
     0x1.cacb9829eaf15p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48a99bee1dba5p-687,
     0x1.bbf0fec878232p-455, 0.0, 0.0, 0x1.47493726b5a77p-393, 0.0,
     0x1.6178de707e7cep-54, 0x1.42fac6ae37fc4p-400, 0.0, 0x1.9dbf2253791a5p-225, 0.0,
     0.0, 0.0, 0x1.8a8768b7e9a4dp-600, 0x1.84381b21600dfp-38, 0.0, 0.0,
     0x1.4215b785dd516p-426, 0.0, 0.0, 0x1.6306e38580192p-680, 0x1.7726c034f60edp-441,
     0x1.16991669bf744p-910, 0.0, 0.0, 0x1.19fc7d9d7ed6dp-797, 0x1.27a46b37c68cep-317,
     0.0, 0.0, 0.0, 0.0, 0x1.c03b81f91c9edp-346, 0.0, 0x1.ff31afdb57de9p-576, 0.0,
     0.0, 0x1.93aa01f0c7d18p-66, 0x1.1bacca7e3fa27p-987, 0x1.2e6876916122dp-68, 0.0,
     0x1.6a481fd36f43cp-613, 0x1.126ccba1c28b1p-135, 0.0, 0x1.720dafa41ee65p-756,
     0x1.f6752d2e0d25dp-460, 0.0, 0x1.6a73132f06017p-798, 0.0, 0x1.81881daf24ed4p-806,
     0x1.d180aca78d56ap-941, 0.0, 0x1.5d542dfc76cfbp-282, 0x1.bcd34ec161acap-620, 0.0,
     0x1.a2e4830b1c392p-426, 0.0, 0x1.6e1f22e5cd852p-747, 0x1.1e7c7e81e51f5p-191,
     0x1.f8be47c068e2bp-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab44e3a855145p-999, 0.0,
     0.0, 0x1.4c107b1c41565p-233, 0x1.6694f3de0e83ap-114, 0x1.10f53c6cde29ep-23,
     0x1.953a0a2aa25a4p-79, 0.0, 0.0, 0x1.aa8183383ddf1p-42, 0x1.23860c099e2ep-572,
     0.0, 0.0, 0.0, 0.0, 0x1.81c6ef1fc9414p-353, 0x1.9aa5b476a1782p-921, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ea5d0e7c4fa8bp-506, 0x1.e4245569f0916p-120, 0.0, 0.0,
     0x1.8438839683f05p-329, 0x1.3dc7dbec8a689p-48, 0x1.7cadb82067c34p-405, 0.0, 0.0,
     0x1.b5c75bad63218p-75, 0.0, 0.0, 0x1.59926afdef899p-536, 0x1.84bf47114ae26p-722,
     0x1.d9528586255b9p-137, 0x1.1da250cc75a04p-893, 0x1.78cdded3d8003p-297, 0.0,
     0x1.24d7ef3937902p-918, 0x1.5bebb0e592cc9p-168, 0x1.a2f4c410cee6ap-487, 0.0,
     0x1.4273895c5a693p-180, 0x1.9f42d85d77643p-21, 0x1.f3ba86f13ed78p-822,
     0x1.afc4f3762bac6p-86, 0x1.4f540e06be4p-670, 0x1.e83d02ec33cabp-421,
     0x1.2d56d65d82074p-928, 0x1.52ab32711ecf6p-70, 0x1.cc077741b94fep-95, 0.0, 0.0,
     0.0, 0x1.c2cc8221260c9p-278, 0x1.c46bd82bab6bfp-665, 0.0, 0.0,
     0x1.75fc7c6284422p-434, 0x1.1161240e7d5f2p-452, 0.0, 0.0, 0x1.ccc707a4f639ap-676,
     0x1.05ce5627dfe61p-685, 0.0, 0.0, 0.0, 0.0, 0x1.5ba3242d1de9ep-394, 0.0,
     0x1.11c1b39c2a30cp-681, 0x1.d85b0d23c001ap-895, 0x1.56fc26bfe33a1p-355,
     0x1.26d57df9ecdaep-992, 0.0, 0x1.074307fc496fap-997, 0.0, 0x1.fb884cb08208fp-864,
     0x1.a51ab02970d7bp-316, 0.0, 0.0, 0x1.fa20196630e7ep-298, 0x1.cc123bd944485p-159,
     0.0, 0x1.13e189ae878cbp-599, 0x1.4deaa56e13b78p-630, 0x1.e7ccbd888006cp-855,
     0x1.7013dfe778012p-710, 0x1.a4741953ef915p-141, 0.0, 0x1.52f605820e4c6p-269,
     0x1.483b115756df6p-1005, 0x1.a08ea0f1b71d7p-506, 0.0, 0x1.d90e2a34fd668p-440,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5814897044c96p-206, 0x1.48f7de6e72ca2p-404, 0.0, 0.0, 0x1.f4b7dc479d7bdp-919,
     0x1.671277540466ap-745, 0.0, 0x1.bd750e1cca11bp-965, 0x1.6dea27c076287p-133, 0.0,
     0x1.087b6eeb53b6bp-57, 0x1.bebbee5ede487p-646, 0.0, 0x1.533f173e89082p-314, 0.0,
     0x1.b607586a0b578p-846, 0.0, 0.0, 0x1.2079880e7fe93p-320, 0x1.0dd3a1ca0143ap-649,
     0.0, 0.0, 0x1.a811eb994353ep-76, 0.0, 0.0, 0.0, 0x1.2df93dc5999a2p-239,
     0x1.6c5b94cddc9bcp-164, 0x1.1d2ece6b8dae7p-6, 0x1.4673b0c8308ebp-231,
     0x1.254649224269dp-661, 0x1.7a739c3e8b32bp-328, 0x1.d3264686ce73bp-151,
     0x1.c70e1ce80b53p-740, 0x1.1be6e8b577769p-941, 0x1.0c123196cb0adp-283,
     0x1.40fe915f59c81p-288, 0.0, 0.0, 0x1.5a148f7e611dcp-881, 0x1.87a5bf72f190bp-155,
     0x1.3ce7b3939df0fp-87, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94f449b1f57c6p-105,
     0x1.c12d00e43caa2p-547, 0x1.83394b837b506p-593, 0.0, 0x1.5f42ac3ee2afdp-940,
     0x1.2a15b9386104bp-718, 0x1.64529f9c3ea5ap-395, 0.0, 0x1.ca15945cfff35p-376, 0.0,
     0x1.af34b23ce0405p-404, 0.0, 0x1.690eada69815ap-650, 0x1.1fbfd1e9fe17dp-407,
     0x1.70cbaabe26666p-76, 0.0, 0x1.eca9bb4340d3dp-506, 0x1.7595939c1c082p-35,
     0x1.ee83873aebbfap-153, 0.0, 0.0, 0x1.fb83d8bd2b04dp-760, 0.0, 0.0,
     0x1.7049897599a9ep-65, 0.0, 0x1.7d3197aeb1bc6p-206, 0x1.355fd9906bc5fp-39, 0.0,
     0.0, 0x1.80307b2087ab4p-262, 0.0, 0x1.e6d9e1a48e331p-499, 0x1.02f5845c331d9p-686,
     0x1.070e42d4d46c9p-767, 0x1.f62346b87f173p-542, 0x1.f5e3d7dfae96p-962,
     0x1.d2accb3147d55p-247, 0.0, 0x1.1ef523cbc984fp-393, 0.0, 0.0,
     0x1.be9c2d2cbc4bfp-398, 0x1.adabe4c2dd5e2p-840, 0.0, 0x1.94e0d6ca41896p-625,
     0x1.bf65746df57d8p-118, 0.0, 0x1.89a516bd6f8p-207, 0.0, 0x1.679d4281a77e3p-252,
     0x1.06e55a72745efp-220, 0x1.9a39807af140fp-818, 0x1.2a4e596c115ebp-34,
     0x1.65c97abc2346ap-468, 0x1.93e8c350bbd5bp-238, 0x1.277d143f0c999p-379, 0.0, 0.0,
     0.0, 0.0, 0x1.0341f6bc313afp-84, 0.0, 0x1.0dcb2ab064b88p-739, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.200e529128bcfp-2, 0x1.f7eecb94de438p-144,
     0x1.3f238c8f1994ep-85, 0.0, 0x1.bd7155b8b92f3p-768, 0x1.5768d51f7ff76p-267,
     0x1.a45a62f791ab1p-764, 0.0, 0x1.58d35edc39b6dp-535, 0x1.b79e81779d7c6p-559,
     0x1.bbc297bf32088p-530, 0x1.f3894c29c6acbp-296, 0.0, 0.0, 0x1.f0788cb8483f1p-362,
     0x1.661339fd2e8f2p-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.371427d70c05dp-818,
     0x1.bec69c21091dcp-933, 0.0, 0x1.ac8824c9b66e4p-63, 0.0, 0.0,
     0x1.8ce4abef112f8p-710, 0.0, 0x1.7d9e659e5869ap-47, 0.0, 0.0, 0.0, 0.0,
     0x1.5f942d490e5e8p-279, 0.0, 0.0, 0x1.9acf8c6f3b5bcp-745, 0.0,
     0x1.dfebc94faaadbp-856, 0x1.5253a17effd4dp-655, 0x1.36024d73c7ce5p-694, 0.0, 0.0,
     0.0, 0.0, 0x1.5ba4f0d75039p-321, 0x1.a2a064ce44899p-362, 0.0,
     0x1.21b03c6e4a65p-474, 0x1.2c964688efdd4p-344, 0.0, 0x1.29973475a4529p-50, 0.0,
     0.0, 0x1.16f159457b984p-300, 0x1.e2f037ef1ba74p-813, 0x1.d174c55ea1244p-110,
     0x1.51874b67efb51p-624, 0x1.2b410529d0f45p-519, 0x1.d9238ac50d1e7p-663,
     0x1.4aa7ad96921aep-945, 0x1.f05afdd8c7f5fp-178, 0.0, 0.0, 0.0,
     0x1.6780030396ebp-302, 0.0, 0x1.488a5899d8246p-526, 0.0, 0x1.d27571354863ep-323,
     0x1.b7837275990d7p-327, 0x1.871975fdbcf1dp-753, 0x1.d940d4286e8f5p-307,
     0x1.da9022d1bbcd8p-403, 0.0, 0.0, 0x1.cdfdfeae6a5a7p-607, 0.0,
     0x1.8aa4026c4ac35p-623, 0x1.aa6e283a99724p-159, 0.0, 0.0, 0x1.ca273937ddfb4p-770,
     0.0, 0.0, 0.0, 0x1.4ab26d58e774p-156, 0.0, 0x1.2f03ec68079f7p-514,
     0x1.ad25fc5e7fad3p-529, 0x1.afb7cea8d36b2p-279, 0.0, 0.0, 0x1.d4c21f5d42dfdp-430,
     0x1.b1e3dfaa6cedcp-192, 0.0, 0x1.9ddd32a09ff9ap-48, 0x1.3c1fe69b82a8ep-547,
     0x1.b7da26cfeba42p-76, 0x1.649a3b45dd54ep-285, 0.0, 0.0, 0x1.453a6c40e4878p-109,
     0x1.61574b369bf46p-674, 0.0, 0x1.e32e8b4541a94p-53, 0x1.3ae220f44d44cp-957, 0.0,
     0x1.9fadebcbb273fp-300, 0x1.367beee8eff83p-433, 0.0, 0x1.04c8737556d0fp-432,
     0x1.654f5b1721452p-760, 0x1.e3e942bb014d5p-461, 0.0, 0x1.47e578a9f2c1bp-191,
     0x1.f0baf61966a7bp-72, 0x1.3adfd2891b4ccp-705, 0.0, 0x1.80a595e324e08p-559,
     0x1.dd0f9bd78adf6p-139, 0.0, 0x1.e1db08ec0fe74p-289, 0.0, 0.0,
     0x1.f468c654c6aa9p-732, 0x1.cd78922037234p-616, 0x1.68a35cb2ff25cp-447,
     0x1.3537427c3bae7p-768, 0.0, 0x1.2b590ca6d072ep-119, 0.0, 0.0, 0.0, 0.0,
     0x1.717403a3224d6p-432, 0.0, 0x1.98b45a176ed91p-212, 0.0, 0.0, 0.0, 0.0,
     0x1.ffa4a424e75e4p-261, 0x1.d4904fda4fb46p-462, 0x1.fd1d643280edep-570,
     0x1.8f47547952213p-121, 0x1.c0bd0d9f6e601p-318, 0x1.af2fec531c957p-67,
     0x1.23433e0a79711p-392, 0x1.26eb7a0192d45p-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e069b78129668p-451, 0.0, 0x1.26a990f637b3ap-330, 0x1.d341cf3951404p-627,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40964f83ab308p-35, 0x1.8ae77f6688474p-630,
     0x1.4ce5c223b0d6bp-875, 0x1.5d05aab5d07eap-286, 0.0, 0x1.7e74adfbfc6a1p-198, 0.0,
     0.0, 0x1.f3f0c508b7cbp-498, 0x1.77107780a962ep-980, 0.0, 0.0
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
            tmp1 = Sleef_finz_lgammad4_u10kvx(tmp0);
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
    printf("Sleef_finz_lgammad4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_lgammad4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
