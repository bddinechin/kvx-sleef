/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d1_u10purecfma.c --function \
 *     Sleef_log2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.3021c3fb5fb9ap-920, 0.0, 0.0, 0x1.bdda21244b5dep-91, 0.0, 0.0,
     0x1.d1bcff482441cp-827, 0.0, 0x1.9bc8caaf62c61p-230, 0x1.baae0a50cc494p-518, 0.0,
     0x1.6f74cedcb1c41p-780, 0.0, 0.0, 0x1.99597c89f3844p-156, 0x1.f2d39d1da566ap-938,
     0.0, 0.0, 0x1.f2dd8bffe8e45p-974, 0.0, 0.0, 0x1.8254cb81141dbp-91, 0.0,
     0x1.586ebb8cd3945p-647, 0x1.aa12fc3d01f47p-22, 0x1.ce5abe99ee4bp-649, 0.0,
     0x1.6f57f1e819548p-185, 0.0, 0x1.5e078829d133p-39, 0.0, 0x1.7967b9e8a1e6ep-665,
     0.0, 0.0, 0x1.db1490cc6e6f1p-707, 0.0, 0x1.d7ea15ccc3f27p-566, 0.0,
     0x1.014b0f94bababp-133, 0x1.27971518cf771p-566, 0.0, 0x1.33cf2024f9917p-165, 0.0,
     0x1.e93ff4976d5f2p-30, 0.0, 0x1.0d76db3946946p-1000, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40e00979e248fp-190, 0x1.a0b8df20e19c3p-54, 0x1.9d112a5c72d5p-518,
     0x1.4032cd5bd1eebp-93, 0x1.1f86af97f8336p-812, 0x1.effd8c3422fa2p-441, 0.0,
     0x1.faf0e79c28b7bp-809, 0.0, 0x1.77f596e6eed3fp-39, 0.0, 0.0,
     0x1.c11f3b89f4a29p-597, 0.0, 0x1.54717732e8a9bp-334, 0.0, 0x1.75c1ae724737fp-97,
     0.0, 0.0, 0x1.f7f9fedd1727fp-547, 0.0, 0.0, 0x1.34ad7065c7b1ep-393,
     0x1.d157f278adabdp-392, 0.0, 0.0, 0x1.bc6e4ceea3801p-435, 0x1.3fa0555d737a2p-796,
     0.0, 0x1.129a707134845p-74, 0x1.e322e5e88b56dp-764, 0.0, 0.0, 0.0,
     0x1.29a972988ec57p-218, 0.0, 0.0, 0x1.52feba16481a1p-21, 0x1.5f7801eab96aap-852,
     0x1.a1c25199cf2dbp-650, 0x1.e2989a9342086p-477, 0x1.9d0303d03264cp-64, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8e92d18c30353p-610, 0.0, 0.0, 0x1.5bd2984816edp-992, 0.0,
     0x1.6cc906e624c9ap-281, 0x1.e2d9bb9d2a687p-627, 0.0, 0.0, 0.0, 0.0,
     0x1.c36d973bd731fp-20, 0x1.965498c1e43a1p-359, 0x1.f08ac65f2c6bcp-200, 0.0,
     0x1.94af7fc2e7c16p-582, 0.0, 0.0, 0x1.c1dffc464e66bp-208, 0.0,
     0x1.f42609f836ae3p-331, 0.0, 0.0, 0.0, 0.0, 0x1.18a7509309941p-361, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.14b7e3970642fp-637, 0x1.231d4787dffe3p-606,
     0x1.8a9d6d84b9308p-161, 0x1.7b96db63bf422p-245, 0.0, 0.0, 0x1.1f2475b2cc77dp-9,
     0.0, 0.0, 0x1.60118a0fb111cp-565, 0.0, 0x1.7c5d57ca9b141p-675,
     0x1.a6dd82a6b0eb6p-55, 0.0, 0x1.b9297a6f60adp-302, 0x1.455919f100f49p-1020,
     0x1.1b3eb2b7062d3p-645, 0.0, 0x1.80de32ee2ba8ep-798, 0x1.c56f2a3b9a753p-924, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.551aad0b60dfcp-155, 0.0, 0.0,
     0x1.e3a6f9d56a0bep-947, 0.0, 0x1.3a1bbb3802926p-346, 0.0, 0.0,
     0x1.58804b4c8d011p-722, 0.0, 0x1.c4cde6a0935ffp-496, 0x1.9039d43e8273dp-607, 0.0,
     0x1.bd3b7636d343fp-602, 0.0, 0x1.24421a28a3739p-259, 0x1.fa5c78120378cp-160,
     0x1.e1ac475400c88p-44, 0.0, 0x1.8ac7eb22efe5cp-519, 0x1.8feb7f95f16a1p-487, 0.0,
     0x1.d5a7c78d5c33cp-401, 0.0, 0.0, 0.0, 0.0, 0x1.afc4d98fdbb12p-591, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9731f8dfb1dep-1017, 0.0, 0.0, 0x1.d0bd21d562718p-724, 0.0,
     0.0, 0x1.6eb5414f9dd74p-348, 0.0, 0x1.436b7b954e2c5p-303, 0.0, 0.0, 0.0,
     0x1.b86f5823b8456p-765, 0.0, 0x1.8d6605ca41a19p-670, 0x1.3c96278372dd7p-497,
     0x1.cf33e51e269a8p-492, 0x1.104581d7b68c7p-570, 0x1.79ef9ac19727p-167, 0.0,
     0x1.3ef2b4b5fe34dp-852, 0.0, 0x1.d651bc2f52482p-257, 0.0, 0x1.2e39dd35a9bb5p-139,
     0.0, 0.0, 0x1.46d88a9545605p-670, 0.0, 0.0, 0.0, 0x1.f55e95736f436p-990,
     0x1.cb76d7a1d6a0fp-407, 0x1.02c98573911a3p-763, 0x1.241f5fd7014c6p-637, 0.0, 0.0,
     0x1.ff31fa74aa85cp-527, 0.0, 0x1.5319a30407a6p-674, 0x1.f7b923878c30ep-28, 0.0,
     0.0, 0x1.f66f64e35dd8fp-773, 0.0, 0x1.8d3f34b97f637p-434, 0x1.7c996f50061c2p-205,
     0.0, 0x1.f99f60bfd2622p-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b22ebd2b80418p-812, 0.0, 0.0, 0x1.2769e0af005bap-541, 0x1.4fe3c20d8ee0dp-106,
     0.0, 0.0, 0x1.1fc9f2cc202ddp-584, 0x1.a25a512f595cep-798, 0x1.a2fb045e32ab3p-165,
     0x1.ed0fd908a3f1cp-873, 0.0, 0.0, 0x1.37066ef2e2a64p-863, 0.0,
     0x1.f5847c5f0f507p-804, 0x1.90857cef6c07p-656, 0x1.50005d523c48ep-16,
     0x1.4a67bff8cc3b6p-813, 0x1.5431dc3710826p-786, 0x1.ef2e4221c1f98p-593, 0.0,
     0x1.a84897aa2e88dp-697, 0x1.bf1ab6947cd76p-130, 0.0, 0x1.f252d46632ec5p-118,
     0x1.70b51ff92178ap-776, 0x1.9bd16d95f8e45p-386, 0x1.16dca4066925fp-825,
     0x1.8ce8699a06904p-256, 0x1.03be3666aa00fp-801, 0.0, 0.0, 0.0,
     0x1.5a1dabb5f073dp-928, 0x1.0bdea1092af6p-298, 0x1.29421927c5d16p-882, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0fc60e4b8cecp-961, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.31e2e01fc79b1p-470, 0x1.4dc1bfa407b5bp-653, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.407e67a5fc7c7p-383, 0.0, 0x1.d16abd8d3030ep-538, 0.0, 0.0,
     0x1.d1f46fb2d70c9p-107, 0.0, 0x1.52f3b3be7de71p-658, 0.0, 0x1.4ff6e09c2a73cp-441,
     0x1.b0270aa37bebp-698, 0.0, 0x1.6e42a09be2373p-188, 0x1.299eae7c6341bp-463,
     0x1.3d8f4e0d3d1efp-625, 0x1.dc72086206b3p-835, 0.0, 0x1.7b051e8fde83fp-767,
     0x1.263c54d2c5997p-867, 0x1.49e1f8a516ce3p-111, 0x1.30bae3a66f21cp-457,
     0x1.b48f235f685d7p-982, 0x1.e62c7234ce69ep-174, 0x1.ce4ca33173ed7p-870, 0.0,
     0x1.f086bb5ee38c7p-631, 0x1.793d4552c3f43p-903, 0x1.0903fdbaf289bp-190,
     0x1.d42e32a0e6b83p-220, 0.0, 0.0, 0x1.5396f3cc1af4bp-699, 0x1.2408f3c2ed7ebp-71,
     0x1.0505c826f15ebp-822, 0x1.6ae3ddea517bcp-36, 0x1.86d6fc74aba0dp-838,
     0x1.6209e0a42d1a1p-656, 0.0, 0.0, 0x1.716b8ce78bc8bp-842, 0x1.fd555a4322b8dp-601,
     0x1.ae8cae3704cf7p-11, 0x1.24bc4a8d59bc4p-619, 0x1.e17857c863c6dp-902,
     0x1.0768e6a999dfbp-264, 0.0, 0.0, 0x1.1fd52985ab96p-85, 0.0,
     0x1.23357a28371e1p-749, 0.0, 0x1.a6ee743fd4454p-15, 0.0, 0.0,
     0x1.180e1da36ef51p-925, 0x1.91b94df183bbbp-366, 0x1.25886e8d58a0fp-238, 0.0,
     0x1.3c1ed446818cfp-456, 0x1.5ace70d840d82p-392, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.259a7bd2c4c5p-746, 0x1.170046bcbf8fbp-252, 0.0, 0.0, 0x1.cef108d2ea8c1p-541,
     0x1.23dadf6512b1fp-82, 0.0, 0.0, 0x1.d340f14c6ffacp-238, 0x1.96cb3c36bf817p-91,
     0x1.58d8ad11accefp-215, 0x1.4b738a4e172aap-28, 0x1.8f2a0a64af552p-55, 0.0, 0.0,
     0.0, 0x1.6dd0ef621627bp-194, 0x1.4d09f5f67955cp-813, 0.0, 0.0, 0.0,
     0x1.6c99dbfcb0272p-34, 0x1.aa6ea4d9542e1p-409, 0.0, 0x1.b5f84d692b8e3p-223, 0.0,
     0.0, 0.0, 0.0, 0x1.e2b95855d0ae4p-978, 0x1.7c11675f31c72p-731,
     0x1.a263144eff019p-183, 0.0, 0x1.9be31c63426cep-118, 0x1.ba0b31220da6bp-96,
     0x1.4e0d7d63e8c13p-476, 0.0, 0.0, 0x1.3912e6c9a4a59p-674, 0x1.0df6cf8a8c8e4p-732,
     0.0, 0.0, 0x1.3875cbc849613p-92, 0.0, 0x1.0705218dcdd75p-107, 0.0,
     0x1.80245ceb7fabbp-676, 0x1.880d3ae55e321p-740, 0.0, 0x1.d832114a5d13ep-280,
     0x1.5eaf8de097b64p-167, 0.0, 0.0, 0.0, 0.0, 0x1.f94bfb03c3ea8p-379,
     0x1.4f283ad45fedfp-363, 0.0, 0x1.d90256fe1dbebp-1022, 0.0, 0.0,
     0x1.49c18016dd311p-260, 0x1.70ffbe5bf17fap-226, 0x1.4859bc9fe40f8p-8,
     0x1.d3bcbba3d0e6dp-453, 0.0, 0.0, 0.0, 0x1.497c72789f3bcp-625, 0.0,
     0x1.fa80534ad6dabp-828, 0.0, 0.0, 0.0, 0x1.6455e37ee5f39p-469, 0.0, 0.0,
     0x1.7cf081e629acbp-881, 0x1.1aeee3ae0dddfp-996, 0.0, 0.0, 0x1.dc3dc7f1ff9d4p-216,
     0x1.98194a8647794p-524, 0.0, 0.0, 0x1.114b9ee2045e1p-948, 0x1.fa4ea52795d34p-297,
     0x1.2e95ea8fd6486p-94, 0.0, 0.0, 0x1.06d3d66ed772dp-1019, 0x1.f4533e1563dbdp-726,
     0.0, 0x1.efef25f3ddf53p-626, 0.0, 0x1.1811d6a48b501p-219, 0x1.5bb00c3d6c3dap-112,
     0x1.c1f9b47edc42bp-328, 0.0, 0.0, 0.0, 0x1.4617e3d2ad82bp-983, 0.0, 0.0, 0.0,
     0x1.1d3945bb62ba6p-521, 0.0, 0.0, 0.0, 0x1.5efe35f6c8cd7p-986,
     0x1.3be58ffb95733p-894, 0x1.d4e2b87b46116p-809, 0.0, 0x1.7122b40a50196p-372, 0.0,
     0x1.698b8ad4b77fap-710, 0x1.2a2860523401ap-78, 0x1.2d668ffb09bb1p-472,
     0x1.4cfbcec87dc31p-130, 0x1.dd1827d19a536p-17, 0x1.5eace2bbc9698p-980,
     0x1.4cdc2b4f749c5p-219, 0.0, 0.0, 0.0, 0x1.80b428978abd3p-853, 0.0, 0.0, 0.0,
     0x1.197b70d622dfap-229, 0.0, 0x1.e5fde69f7ffcp-821, 0x1.a5cd27b1507a7p-113, 0.0,
     0.0, 0x1.13f1637795265p-876, 0.0, 0x1.f8d17b79f994dp-42, 0.0, 0.0,
     0x1.cf89ab195eb37p-181, 0.0, 0.0, 0x1.0d20bda939e92p-710, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.35ceece026ab1p-99, 0.0, 0.0, 0x1.ef0c096bec34fp-144,
     0x1.8b656d675675fp-358, 0.0, 0x1.6f69020b0f662p-879, 0.0, 0.0, 0.0,
     0x1.ffd3a814e0eb9p-980, 0x1.5d0b8a9f9b7bbp-283, 0x1.3f5a867884aeep-288, 0.0,
     0x1.c8e66d591d3ddp-500, 0.0, 0.0, 0x1.00a0cba32455ep-466, 0.0,
     0x1.bab7b13de73c2p-285, 0.0, 0x1.1ecd8d71c6d08p-636, 0x1.3d9182d0d2ec3p-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f17f6e34dd30ep-813, 0.0, 0x1.34fad1100cc9bp-80,
     0.0, 0x1.89cb987f2d062p-584, 0.0, 0.0, 0x1.d6f83d969d676p-360,
     0x1.87c807e59f2dp-745, 0.0, 0.0, 0x1.dad6181349014p-559, 0x1.9ae4b34c33e1ep-858,
     0.0, 0.0, 0.0, 0.0, 0x1.d8bd743fdd2fdp-456, 0.0, 0x1.8f8eb30ea57f6p-510, 0.0,
     0x1.65048c592754bp-216, 0.0, 0x1.fd296aa86a224p-560, 0.0, 0x1.44bf4f53006dap-204,
     0x1.ed4c9bf99b1bap-677, 0x1.d1af8aaa63f2fp-46, 0x1.f2f841c256af4p-461, 0.0, 0.0,
     0x1.072b0b011ee8fp-583, 0.0, 0x1.e373f7376d059p-767, 0.0, 0.0,
     0x1.9397892717c53p-96, 0x1.54923c54fa3e3p-591, 0x1.f22f528aed2d6p-415, 0.0,
     0x1.14d2dc725687bp-975, 0.0, 0.0, 0.0, 0x1.f85f86fbbd5cp-115,
     0x1.48d4a03c41a98p-218, 0x1.fa24db42e15d9p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.a68c21c1447f2p-983, 0x1.29223545b18f3p-308, 0x1.bd3d5a1acf664p-764, 0.0, 0.0,
     0.0, 0x1.5c52c0ef886cp-590, 0x1.ae19f83eb1429p-750, 0x1.e22869f650341p-1001,
     0x1.a0cb1c8635da2p-58, 0.0, 0.0, 0x1.4844c1e4477d8p-133, 0x1.cf72f82843d99p-176,
     0.0, 0x1.e1c0949f10ce2p-647, 0x1.b77317b248b29p-574, 0x1.ae578189427f4p-454, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4fdf4cdc1c8cep-234, 0.0, 0x1.cdbc51ec81ad7p-929,
     0.0, 0x1.5b589e1964b7fp-188, 0.0, 0.0, 0.0, 0x1.6c9dd412c6196p-208,
     0x1.2cd7e39757925p-500, 0x1.ce44d7f6aba55p-203, 0.0, 0x1.2e2d952d4204bp-948,
     0x1.d5ac626ff9e2dp-367, 0x1.0b7125b4f8b61p-276, 0x1.3222dc7990ce2p-830,
     0x1.9e5eb76a21991p-699, 0.0, 0.0, 0.0, 0x1.6a781c2e516e6p-846,
     0x1.3d75ba7a9a168p-424, 0.0, 0.0, 0x1.98c7e07660dbcp-820, 0x1.45b0205b449e2p-698,
     0x1.96a8fc4b2cdb8p-15, 0x1.8c5a8285b232cp-683, 0.0, 0.0, 0.0,
     0x1.80ea68d22a8bfp-914, 0.0, 0x1.210cafedc6d7fp-194, 0.0, 0.0,
     0x1.fb084dafbc88fp-361, 0x1.ff8a459b70aa1p-247, 0.0, 0x1.b73649ab9a945p-610,
     0x1.f55f88172a183p-508, 0x1.31495c7a41bfap-916, 0.0, 0.0, 0x1.910ab0f655c3cp-389,
     0x1.61b680f479d67p-35, 0x1.59dc37ee01083p-248, 0x1.7e8fb6b283419p-774,
     0x1.157ac1ce057e5p-603, 0x1.de82397cd548bp-1003, 0.0, 0.0,
     0x1.492c2f78dc988p-571, 0.0, 0.0, 0.0, 0x1.3cac700841363p-67,
     0x1.67da20b56ed12p-727, 0x1.f4269eccdb001p-633, 0x1.84a0a72942d8cp-599,
     0x1.f68bb158a18d4p-354, 0x1.8d860d52c3b31p-987, 0x1.fddfb84717133p-890,
     0x1.c340cba3ca897p-880, 0.0, 0x1.a62421d878746p-96, 0x1.6ec98d9a1818ap-67,
     0x1.555a933396b7fp-821, 0.0, 0x1.b29c74d1e004p-720, 0x1.e539c1a30685p-60, 0.0,
     0.0, 0x1.afeeefa19416ap-692, 0x1.f462916a3a95p-739, 0x1.63f214ce4a99dp-786,
     0x1.595582f02acccp-792, 0x1.f502dcdb9a43dp-454, 0.0, 0.0, 0x1.edc11b7afb8d1p-821,
     0x1.88350c699f742p-657, 0.0, 0x1.fbdb88de03b87p-628, 0x1.39de4030cf071p-102, 0.0,
     0x1.90034c8442a2fp-445, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.61d1ddeb15161p-180, 0x1.4f8ddeca7be57p-196, 0x1.1cbdb6e1f37fep-810, 0.0,
     0x1.3ad10f3d1cf5dp-269, 0.0, 0x1.4cc549e4e5f99p-817, 0x1.a46209992508cp-147, 0.0,
     0.0, 0x1.9705798aff6fbp-803, 0x1.90e02bd5392dp-441, 0.0, 0x1.60b9208bdef1ap-134,
     0.0, 0.0, 0.0, 0x1.4d3d3cf3d3936p-596, 0.0, 0x1.0edbd8e804824p-956, 0.0, 0.0,
     0.0, 0x1.1d224a55d867dp-1019, 0.0, 0x1.d4c8df6a7f164p-729, 0.0, 0.0,
     0x1.ba5a75d9e27a1p-214, 0x1.03ded15cc8a4bp-896, 0x1.c3464dceea2b7p-914,
     0x1.cc55d9b125582p-202, 0.0, 0x1.51fbf101b3a24p-74, 0x1.0930977b8466ep-834, 0.0,
     0x1.b07d1f5bc07e1p-1002, 0x1.2d89383ae9389p-585, 0.0, 0x1.0ef750fbba2bcp-135,
     0x1.8706d43c38ad7p-869, 0.0, 0.0, 0x1.a4ef4e30f99a7p-659, 0.0, 0.0,
     0x1.680b2ea20f4e8p-768, 0.0, 0x1.71195d15ef86dp-812, 0x1.c1c1830b3251fp-744,
     0x1.ede71ef1db75p-858, 0x1.f24cc97e94586p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb29bf66090fp-430, 0.0, 0x1.84b281424fd2ep-661, 0x1.7ac982491d8dbp-752, 0.0,
     0x1.3bef3aa079d9ep-509, 0x1.05e0e41c12f93p-866, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d9e10d54cb5c9p-209, 0.0, 0x1.5f4054dca53fbp-847, 0.0, 0.0, 0.0, 0.0,
     0x1.09015b815852cp-143, 0.0, 0x1.1ed59138517d5p-418, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3665183b2867p-933, 0x1.46cb011da52afp-299,
     0x1.fd494abbe4456p-855, 0x1.259b97702b789p-731, 0.0, 0.0, 0x1.a9e982bfcbe4ap-238,
     0x1.58c3287e6277ep-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a121e525b3d5ap-814, 0.0, 0x1.cc828ec0b3affp-482, 0.0, 0.0, 0.0,
     0x1.0532d4659c01fp-668, 0.0, 0.0, 0.0, 0x1.23a7e075307d8p-109,
     0x1.3dcfb6b584e3fp-93, 0x1.d75984bf4c0abp-865, 0.0, 0x1.936bf96e1249dp-855, 0.0,
     0.0, 0x1.fccf1a5845b03p-791, 0x1.9e6d8a61b28ddp-547, 0x1.158baa7727863p-122, 0.0,
     0x1.e381d10ea8eb8p-902, 0.0, 0x1.4efd5f7f727d2p-602, 0x1.8977c5ae7b45p-741, 0.0,
     0x1.f5b76dc6832dcp-195, 0.0, 0.0, 0x1.29e620fc6fc9p-947, 0.0, 0.0, 0.0,
     0x1.0cb9aeec7510ap-722, 0x1.2a22aa9fbf138p-861, 0.0, 0x1.20eefe778ecb9p-848, 0.0,
     0x1.e61251d854d1dp-760, 0.0, 0x1.8ef4013cb315ep-321, 0.0, 0.0,
     0x1.49e77f9fa1226p-891, 0.0, 0x1.84f05b6633093p-759, 0.0, 0x1.b94efb8c8c605p-398,
     0x1.123db0dba0123p-558, 0.0, 0x1.91e50b55c2cd2p-501, 0x1.1665fcc067097p-709, 0.0,
     0.0, 0x1.0ccbc9d4b4d1fp-132, 0.0, 0x1.82f3f8609930dp-909, 0x1.86fccd0156492p-711,
     0.0, 0.0, 0.0, 0x1.a2690b214390dp-749, 0x1.3431d5d6ceeeep-148,
     0x1.e23955ede922dp-527, 0.0, 0x1.e940cdc3354acp-854, 0.0, 0x1.b46b2bde8dadfp-818,
     0.0, 0x1.3de4fe9bbbca8p-196, 0x1.064e94a1d65edp-482, 0x1.078f18a9ea87p-881,
     0x1.e3d77b94c64b1p-364, 0.0, 0x1.202b6964e4583p-1000, 0x1.f92d061e2037ep-9, 0.0,
     0.0, 0x1.395549c1e73c5p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d4e6a72681be7p-735,
     0x1.2b3a4cf9d647cp-145, 0.0, 0x1.d87c4df8e0f5fp-61, 0.0, 0.0,
     0x1.1b932e271e961p-390, 0x1.4e20e18328725p-849, 0x1.5d5deee8c6e8dp-576, 0.0,
     0x1.6da7e73e282cp-325, 0.0, 0x1.c68ef2a40382fp-440, 0.0, 0.0,
     0x1.b90affe3008bap-496, 0.0, 0.0, 0.0, 0x1.2a7f2a64b2f83p-804, 0.0, 0.0,
     0x1.78454f0a5d17cp-854, 0.0, 0x1.08e1d7add1099p-238, 0.0, 0.0,
     0x1.578248b6901eep-145, 0x1.8b4c07eddf8a6p-575, 0x1.2c7e30e6bf2a2p-447,
     0x1.6242a0e2658c9p-189, 0.0, 0.0, 0x1.2c4cdd5fdeecdp-65, 0x1.55a8120e55be8p-851,
     0x1.81cd37cc6fda3p-918, 0x1.2239c938f7793p-996, 0x1.1f720d2be880dp-213, 0.0,
     0x1.cc846ea4726b8p-933, 0x1.8f0d53c981814p-192, 0x1.2e25af8474879p-767,
     0x1.dd5c7f4d6cca6p-857, 0.0, 0.0, 0x1.4f7a322dc53fcp-317, 0x1.48f2f8872091ep-747,
     0x1.853194e5af8e5p-988, 0.0, 0.0, 0x1.a500bcf652ae2p-530, 0.0, 0.0,
     0x1.251c252eff1cdp-189, 0.0, 0x1.79f77e940324cp-542, 0x1.688c824f14397p-346, 0.0,
     0x1.bad0655160c33p-601, 0.0, 0x1.db3922df0cc41p-886, 0x1.e62def2afa3f3p-622, 0.0,
     0.0, 0x1.d408a8ee40ed4p-310, 0.0, 0.0, 0.0, 0x1.5f81f7abb7e93p-824,
     0x1.4340a4112e5e1p-246, 0.0, 0x1.b17a8fbf6220cp-378, 0x1.a4249ada99f5bp-256,
     0x1.502c63c33129ap-768, 0.0, 0.0, 0.0, 0x1.fe605df00cb56p-905, 0.0,
     0x1.23e83d4815f02p-358, 0.0, 0x1.68b9fd6167463p-133, 0x1.55d0cc58b47a2p-937,
     0x1.3e3755774114dp-197, 0.0, 0x1.6b57cc3c471cbp-302, 0x1.6d3390b2ff971p-222,
     0x1.18f29d120cd98p-503, 0x1.94c6a068e4ecap-762, 0x1.b160211f99f5ep-350,
     0x1.757b75c1ef4cep-742, 0.0, 0.0, 0x1.5e095f5449facp-42, 0.0
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
            tmp1 = Sleef_log2d1_u10purecfma(tmp0);
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
    printf("Sleef_log2d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
