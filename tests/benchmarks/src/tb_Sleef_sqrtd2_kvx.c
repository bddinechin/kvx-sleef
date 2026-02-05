/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_kvx.c --function Sleef_sqrtd2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.f3473754dce92p-58, 0.0, 0.0, 0.0, 0x1.1cda705bd68abp-998, 0.0, 0.0,
     0x1.0691f18fcfeaap-817, 0x1.140040a3079a7p-407, 0.0, 0x1.a6b51469e04d6p-718, 0.0,
     0x1.c6a2acf1f5bbdp-375, 0.0, 0x1.3fad73ed5d3b3p-35, 0x1.02f03bf05437ep-187, 0.0,
     0x1.a44c4285f3a65p-995, 0x1.c8cf33c57287ap-762, 0x1.6f8d945d57053p-837,
     0x1.9b2337a2c813fp-247, 0.0, 0.0, 0.0, 0x1.5cd27d54da7fap-269, 0.0, 0.0,
     0x1.da85edab0f244p-389, 0.0, 0x1.4f5db195592ccp-46, 0.0, 0.0,
     0x1.a63c2a17ade9p-862, 0.0, 0.0, 0.0, 0x1.0692d946410eep-143,
     0x1.22667beb1d43p-563, 0x1.5c6f0a39d0841p-878, 0x1.f39d6929ed38p-807, 0.0, 0.0,
     0.0, 0x1.0bd2cd498f04cp-540, 0.0, 0x1.8086c690ac2b6p-638, 0x1.ba3f351f86476p-521,
     0.0, 0x1.4e9af4e90fe3bp-753, 0x1.00b7ccc98c928p-356, 0.0, 0.0,
     0x1.ebe4cb89bb74ap-939, 0.0, 0.0, 0x1.96ae1daabf64p-385, 0.0,
     0x1.4de9f26d8a624p-106, 0x1.e597f727cae83p-925, 0x1.5180566c96f48p-317,
     0x1.7be63c41357a9p-995, 0x1.c229fd9a76868p-85, 0x1.adfabb1d1a9f4p-538, 0.0, 0.0,
     0.0, 0x1.5b1eed426ca4cp-975, 0x1.e398f9cd94c01p-840, 0.0, 0.0, 0.0, 0.0,
     0x1.9fc77824dd981p-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8452eb080b95dp-1016,
     0x1.6f6fea6a8ad8ap-233, 0.0, 0x1.97814ef5f9025p-312, 0.0, 0.0,
     0x1.bc9e1b19a10ccp-795, 0.0, 0.0, 0x1.004d3151727d4p-916, 0x1.58acbb2fa6832p-192,
     0x1.876479e625ed5p-825, 0.0, 0.0, 0x1.07d0dcde19126p-256, 0x1.ea75b40ed6c2ap-270,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0690fc1a3e23p-44, 0.0, 0x1.7a1530d85761bp-357,
     0x1.6b4fcab00f77ap-917, 0x1.960cb4a33373ap-1011, 0x1.70b892e01a32bp-515,
     0x1.7f04b9f905dafp-328, 0x1.e73df84db4f24p-46, 0x1.cdcc18ac52ecp-440,
     0x1.6060a6bd50e26p-203, 0.0, 0.0, 0x1.a70b987d1e4fap-982, 0x1.cd4d52cdf5ea8p-469,
     0.0, 0x1.82008f8d4a361p-48, 0x1.7d6e2c67185cap-328, 0x1.0796fa030bbafp-68,
     0x1.5374fe56174c8p-194, 0.0, 0x1.f029213464bp-490, 0.0, 0x1.2fb54b9146e1p-124,
     0x1.01fa0fa8921fep-127, 0.0, 0x1.d805826cdb895p-823, 0.0, 0.0,
     0x1.5b5a0bad276afp-306, 0.0, 0.0, 0x1.e09e9e2fcbd83p-467, 0.0,
     0x1.e1a817700bb24p-126, 0x1.51e9919e6a94ap-271, 0.0, 0x1.7656f664d561bp-506,
     0x1.2d70a6c7a3ad9p-297, 0.0, 0x1.615b74b4c865bp-788, 0x1.af12b67ba4166p-681,
     0x1.9f261477859cdp-305, 0.0, 0x1.1ec7c62c83e8dp-853, 0x1.c2c3262572e6bp-306, 0.0,
     0x1.4b7085927c7a3p-741, 0x1.ddfaf74e5f04fp-601, 0.0, 0x1.e5bf13389998bp-929,
     0x1.2cc59ba5cf36fp-770, 0x1.a1aff888f4624p-306, 0.0, 0x1.907dd766a0f82p-123, 0.0,
     0.0, 0.0, 0x1.aab00cbd99dd9p-604, 0x1.b4aa47c75ed6ep-925, 0x1.2ea4cffddb93fp-534,
     0x1.e1f8751201eddp-535, 0x1.eb3ff28c52a77p-314, 0.0, 0x1.56fce353a2d63p-337, 0.0,
     0x1.5148808936ca1p-750, 0x1.d25b3a4594cb3p-203, 0.0, 0x1.f8bd38b1d02c9p-881,
     0x1.c9c06ddd028c7p-462, 0x1.ee9634723fee3p-387, 0x1.800a54595f70cp-263,
     0x1.9313fcec873e9p-977, 0x1.768bee6c2f54fp-916, 0.0, 0x1.3b0a0d5d84b2fp-679,
     0x1.27f6ffdeb2d67p-618, 0x1.a43c63a38bc6ep-379, 0.0, 0x1.b1b2830ce7caap-764,
     0x1.8d8ad75a7081ap-350, 0x1.2384e99d9c4bep-323, 0.0, 0.0, 0.0,
     0x1.b5b4b620371cdp-115, 0x1.09ea7170ae46bp-367, 0.0, 0.0, 0x1.7462fcb27ca9ap-71,
     0.0, 0x1.62655e6b5669fp-359, 0x1.51fbc0a04e1f7p-858, 0.0, 0x1.064129c77e124p-334,
     0x1.62bc3003e83d9p-580, 0.0, 0x1.345720cc84a94p-943, 0.0, 0.0, 0.0,
     0x1.63e6ee0a62448p-596, 0.0, 0x1.82069fd37e511p-448, 0.0, 0x1.65725b7bc4ed9p-473,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fd3b1259cd8ap-816, 0.0, 0x1.bf0e74bdbee11p-285,
     0x1.b5f734f85c0a9p-563, 0.0, 0.0, 0x1.9ebea57e88234p-186, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f2176ff724ca7p-701, 0.0, 0x1.bd774196a0af4p-934, 0.0,
     0.0, 0.0, 0x1.e3f19ab2abdb9p-199, 0x1.1ee43172f6e9cp-525, 0x1.9af80820a8adep-613,
     0x1.9a822549d15dfp-705, 0x1.7538ead0b570dp-795, 0x1.d5f00ebcd9e35p-398,
     0x1.458cde9ffd59ep-88, 0x1.ad676c4930047p-656, 0.0, 0x1.c8e125e945848p-563,
     0x1.757e49ebce782p-913, 0.0, 0.0, 0x1.fd99318925683p-735, 0.0,
     0x1.2733020cd51ecp-656, 0x1.5deb81c7e2a0bp-790, 0.0, 0x1.63229b95d85c7p-258,
     0x1.cb203d2a26c29p-351, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f623e659fec15p-296,
     0.0, 0x1.fa624db0b2e3p-773, 0x1.046de8258d541p-995, 0x1.05a8833aa5d3cp-798,
     0x1.329e52cdc1c61p-553, 0.0, 0x1.6b3c39e3d5951p-218, 0.0, 0.0,
     0x1.cbc5b1883895fp-305, 0.0, 0x1.31237165e0092p-612, 0.0, 0x1.3a991d61880e5p-738,
     0x1.abcf07c34d7bdp-2, 0.0, 0x1.b97f9d5ad3b76p-699, 0.0, 0.0, 0.0, 0.0,
     0x1.a2bee50d5245dp-979, 0x1.417a132e038a3p-237, 0x1.c1fb9d657a64fp-3, 0.0,
     0x1.bbaebaa98d984p-819, 0x1.808d03cd35335p-853, 0.0, 0.0, 0.0,
     0x1.0cacfca5c8f59p-334, 0x1.edc18d830a393p-523, 0.0, 0.0, 0.0,
     0x1.a70659285c946p-160, 0.0, 0.0, 0x1.a1872d60929p-187, 0x1.96084718cb86p-599,
     0x1.a367f4ba703efp-991, 0.0, 0.0, 0.0, 0x1.135206360c41dp-563, 0.0,
     0x1.b46d5f985f942p-351, 0.0, 0.0, 0x1.83c7002b41e71p-432, 0x1.30ec12388d08dp-971,
     0x1.789e699087413p-585, 0.0, 0.0, 0.0, 0x1.f7114c2c95d56p-543,
     0x1.5338b7896cf99p-1002, 0x1.f97c15cd09b26p-941, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a79d5598809aep-1009, 0x1.f50a8349d2117p-705, 0.0, 0.0, 0.0, 0.0,
     0x1.121214f8addc3p-441, 0.0, 0.0, 0x1.dc9855bdb2fa9p-102, 0.0,
     0x1.12b5b27d24ad2p-386, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d04a5e793053p-912, 0.0, 0.0, 0x1.b6630c37fb2bep-177, 0x1.90f361649fa82p-43,
     0x1.0d14c68b72443p-862, 0x1.d095e709ea0d9p-293, 0x1.5ad629ae53d57p-398,
     0x1.f97670696640ep-381, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.000cde2edaaf2p-605, 0.0, 0x1.b9cddcf01942ap-307, 0.0, 0x1.219b1d1ffc7b2p-859,
     0x1.28a4862ca4513p-273, 0x1.8da133ce559e4p-352, 0x1.ccdd94284577p-620,
     0x1.bb25c66f51656p-618, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29d7dcb822a63p-331,
     0x1.a16f3481c696ep-373, 0.0, 0.0, 0x1.7af5f730adfddp-907, 0x1.cac8f86ceafecp-301,
     0.0, 0.0, 0.0, 0.0, 0x1.14f7bdc926892p-190, 0.0, 0.0, 0x1.2492fc6094009p-530,
     0x1.dfe2d5f53e295p-799, 0.0, 0.0, 0.0, 0.0, 0x1.1638e774804c9p-482, 0.0,
     0x1.614e9e19bfef2p-581, 0.0, 0x1.75b0dc066ba25p-1020, 0x1.e20f873c3d6c4p-171,
     0x1.4580a89727db9p-776, 0.0, 0x1.85640fe50b5a4p-1018, 0.0, 0.0, 0.0,
     0x1.cadcf8b8901c5p-826, 0x1.309f63d0e8235p-218, 0x1.79c44f2a54bc5p-64, 0.0,
     0x1.593bccd1daf09p-907, 0.0, 0.0, 0x1.5738c98d40b5dp-845, 0.0, 0.0,
     0x1.b4c524d6e51c9p-289, 0.0, 0.0, 0x1.4b3d26770fc5p-702, 0x1.5a2cdf96b85f7p-595,
     0.0, 0x1.7b947e1b1d12p-195, 0.0, 0x1.1a62834932c7fp-939, 0.0,
     0x1.d3bf109ddd0aep-424, 0x1.af2ccd17f4deep-699, 0.0, 0x1.073cdb4a2da3ep-453,
     0x1.91a95ec57d8c4p-351, 0.0, 0x1.31d91f7d1f05bp-605, 0.0, 0.0,
     0x1.df046bfead67p-46, 0x1.f66b7ef235972p-390, 0x1.1f5771da81b61p-175, 0.0,
     0x1.995ef8fe6518p-995, 0x1.77f66874b807ap-699, 0x1.5e2ab115f2694p-78, 0.0,
     0x1.b138bf538738cp-430, 0x1.855172f5e1104p-781, 0.0, 0x1.65cc3bf086cc3p-892, 0.0,
     0.0, 0x1.2c6781ba2f6a7p-364, 0.0, 0x1.69fcd9ea04a5fp-921, 0x1.fd4b04f6add18p-678,
     0.0, 0.0, 0x1.5d485c820c50ap-483, 0.0, 0.0, 0x1.0c257c27ed166p-820, 0.0,
     0x1.5aa696aa5d21cp-20, 0x1.2fc62eafb6b72p-795, 0.0, 0x1.689c5213ffcfap-631, 0.0,
     0.0, 0x1.58c752af658c8p-366, 0x1.c27495cb924a3p-72, 0.0, 0x1.eb67cfa0fba8ep-240,
     0.0, 0.0, 0x1.1e0970ea1dc7dp-513, 0x1.91e3e6be7346p-181, 0x1.465d30f8da535p-357,
     0.0, 0.0, 0.0, 0.0, 0x1.be0f31d643eb2p-556, 0x1.f652116266348p-590,
     0x1.b18d094d7fdddp-566, 0.0, 0x1.b50407db8e7a3p-667, 0x1.4cb1599313b4p-152, 0.0,
     0x1.d75940f94fcf2p-132, 0x1.f2eb8305d45c2p-570, 0x1.730b21a15610cp-337, 0.0, 0.0,
     0.0, 0x1.77e56b3d854cbp-808, 0.0, 0x1.51ba599fcbef9p-806, 0.0, 0.0,
     0x1.5f4693ec07701p-140, 0.0, 0.0, 0x1.266a6cf3d7156p-707, 0.0, 0.0, 0.0,
     0x1.1032699d2bbap-712, 0.0, 0.0, 0.0, 0x1.80bf8bc33766dp-10, 0.0, 0.0,
     0x1.ccd5fea017feap-570, 0x1.ba4d1c8d84003p-597, 0.0, 0.0, 0.0, 0.0,
     0x1.373eb32b58ae3p-286, 0x1.6be3c4af0bbp-920, 0.0, 0.0, 0x1.e7540ace28ae7p-856,
     0x1.87246d9bd178bp-460, 0.0, 0.0, 0x1.7ee961cd729c1p-132, 0.0, 0.0, 0.0,
     0x1.445ec600e6857p-497, 0.0, 0x1.8da2c4035dd7p-958, 0x1.af6f5698c3addp-722, 0.0,
     0.0, 0x1.c14ab5b6116ecp-554, 0x1.990c4dd4b6f72p-687, 0x1.fec3b278a77a4p-373,
     0x1.50dba4582d7e2p-104, 0.0, 0.0, 0.0, 0.0, 0x1.f678e014b881ap-633, 0.0,
     0x1.fc5e21f355aeep-520, 0x1.3336af2504ea1p-558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9ae25bef63cfp-619, 0x1.d12204c8f741p-798, 0x1.a098f6537b696p-102, 0.0, 0.0,
     0x1.6eb4fc8dd6788p-386, 0.0, 0.0, 0x1.7faa081af8054p-655, 0.0, 0.0, 0.0,
     0x1.89d3c997c8fb9p-61, 0.0, 0x1.4da89c5687adap-667, 0.0, 0.0,
     0x1.d2a37558d6529p-590, 0x1.e677896509a61p-450, 0x1.b347c27920e18p-771,
     0x1.c7229a34d8a36p-67, 0x1.a3c2e0f60a81ap-18, 0.0, 0.0, 0.0,
     0x1.0320a09ec41a3p-516, 0.0, 0.0, 0.0, 0x1.f3a152a77caap-807, 0.0,
     0x1.767ee7608e605p-578, 0.0, 0.0, 0.0, 0x1.df1eef356ae2bp-952, 0.0,
     0x1.1fa12cddde65cp-532, 0x1.18e3c9e5a30fbp-906, 0.0, 0.0, 0.0, 0.0,
     0x1.13564597a0557p-198, 0.0, 0.0, 0.0, 0.0, 0x1.e7ed236a778a2p-945,
     0x1.dc3db653db902p-667, 0x1.38b8725963cc2p-344, 0.0, 0.0, 0.0,
     0x1.cf1e7e01d2721p-353, 0x1.3c21748a6b4d2p-877, 0.0, 0x1.c2c1a701a5a11p-400,
     0x1.cd8b7736aa616p-782, 0x1.7c806da7fd31cp-634, 0.0, 0x1.8f98a0ebfd035p-463,
     0x1.1b80a435d1555p-704, 0.0, 0x1.2eed2593f9c67p-92, 0x1.7f70c5d0cf6fdp-419, 0.0,
     0.0, 0.0, 0x1.c95ec9ef8ec5ep-275, 0.0, 0x1.80e73cd81ee6ap-915, 0.0,
     0x1.24303ef5af3d3p-151, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb02f77fb6d4fp-119, 0.0, 0.0, 0x1.97a08b7b82b5cp-246, 0.0, 0.0,
     0x1.ff18e258841f5p-282, 0x1.e354a0f5e35fbp-352, 0.0, 0x1.60fb2ec27c895p-186, 0.0,
     0x1.cec1cdbc2f191p-806, 0.0, 0x1.2bbca5e5eb11p-201, 0.0, 0x1.2c8a64894640dp-595,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89ccb13a4f929p-1014,
     0x1.b360513254438p-1021, 0.0, 0x1.3a8993d906319p-31, 0x1.b6cc933e26bfap-85, 0.0,
     0.0, 0x1.08f0deba6a247p-907, 0.0, 0.0, 0x1.705564a97e48dp-284,
     0x1.aa35d6393e859p-972, 0.0, 0.0, 0.0, 0x1.7583e5743e802p-444, 0.0, 0.0,
     0x1.a14f80d8fe359p-1003, 0.0, 0x1.8f53c23f3e5bap-223, 0x1.f0bef5a1d38e9p-123,
     0x1.600c25ce1a857p-306, 0x1.ad494d470e92cp-513, 0.0, 0x1.934dec767821cp-631, 0.0,
     0x1.5cc9439183ecep-816, 0x1.70b85f8de0eacp-797, 0x1.01add550ee927p-800,
     0x1.adb1b8557c5f1p-445, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25da52b73ada6p-837, 0.0,
     0.0, 0x1.d0176cba6bdb1p-85, 0x1.9f0fb4e513d4ap-473, 0.0, 0x1.307d2b636cdaap-771,
     0.0, 0.0, 0.0, 0x1.b351fe836533ep-994, 0x1.c12e923bbcff6p-927,
     0x1.09dc4f5d9c651p-282, 0x1.5289f407fc753p-147, 0.0, 0x1.46953a0ab35aep-452, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59aeda3839b23p-35, 0x1.a5662b1f15328p-283, 0.0,
     0x1.2a5d7d566089ep-348, 0.0, 0.0, 0x1.f376c579951e8p-710, 0.0,
     0x1.9bd24760e769p-481, 0.0, 0x1.e68a3c531511ep-227, 0.0, 0.0, 0.0,
     0x1.e6d0e76afed9p-993, 0x1.cef51a1d636c3p-514, 0.0, 0.0, 0x1.ae563c0a7dc0ap-703,
     0.0, 0.0, 0x1.4751fae37077bp-836, 0x1.92c3335a16cb2p-576, 0x1.ac80c2f99c0ebp-795,
     0.0, 0.0, 0.0, 0x1.74f8596b91ad4p-4, 0x1.6e07ec062c7edp-857, 0.0, 0.0, 0.0,
     0x1.8243597d953dbp-515, 0x1.c734202b1a7dcp-326, 0.0, 0x1.acdeba12dd337p-303, 0.0,
     0x1.62ae37683ce95p-331, 0x1.994cdc85f7f1bp-566, 0.0, 0.0, 0x1.b6a7e552bf4f5p-443,
     0x1.f0e6599c48b51p-723, 0.0, 0.0, 0x1.fb199aa732538p-623, 0x1.9114308f94cbfp-402,
     0x1.9463de2f437dfp-963, 0.0, 0x1.b048d29fb380fp-911, 0x1.7fdd77f9c9a76p-732,
     0x1.77bfd54790461p-50, 0.0, 0x1.25b545c9f7e4ap-537, 0x1.e8f9c19693442p-162,
     0x1.6789491b17d58p-351, 0x1.2e2fc74a1ff43p-775, 0.0, 0x1.9207ac5fb7fe5p-252,
     0x1.1553087f7d2e1p-615, 0x1.2ad0fb7c7fba8p-45, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a630f6ef85163p-835, 0.0, 0x1.356a053031dep-29, 0.0, 0x1.5e8cd352c2e3p-730,
     0.0, 0.0, 0x1.72dfcf43d66c3p-619, 0x1.7d2ad5c11474ap-510, 0x1.a41cb41d0b431p-454,
     0.0, 0x1.f373bd49604a7p-426, 0.0, 0.0, 0x1.b6f1fc91c1d5p-406,
     0x1.58c4585b840ffp-131, 0x1.fd51701214f19p-72, 0.0, 0x1.188de2e86b56cp-523,
     0x1.4643f67bb4613p-580, 0x1.e623f71f18ee5p-443, 0x1.83da102dfd5bcp-881,
     0x1.514d8e34dfff6p-384, 0x1.1dc5ab053c33dp-424, 0x1.f6f5591501e03p-104,
     0x1.fe61c0d24910ep-274, 0x1.3f4b537f05312p-6, 0x1.a1bc1506e2321p-804,
     0x1.fa8f343fa53aap-218, 0.0, 0x1.be12c5ef71e7fp-86, 0.0, 0x1.5c2450d73d288p-613,
     0.0, 0x1.0d1a6c9493dbdp-721, 0.0, 0x1.8ebebc1456a17p-977, 0x1.e5fd96831388cp-368,
     0.0, 0.0, 0.0, 0.0, 0x1.4f3d53fb92d7ep-902, 0x1.1d4e51b68e6fep-969, 0.0,
     0x1.aa169bdfe2968p-115, 0.0, 0x1.0c8007c224b4p-502, 0x1.4b911b4f3a6fap-858,
     0x1.23240d81b0ec5p-385, 0x1.cc4f007f35076p-884, 0.0, 0.0, 0.0, 0.0,
     0x1.4aa48bef953c3p-476, 0x1.6f85962e3f535p-371, 0.0, 0x1.5f3a9e4df8cafp-609, 0.0,
     0x1.3015f34f6bf36p-650, 0.0, 0.0, 0.0, 0x1.841299ecc6671p-723,
     0x1.a4f1fb2934332p-524, 0.0, 0.0, 0.0, 0x1.bb647d7e98825p-49, 0.0,
     0x1.2dd2cd5d8382cp-756, 0x1.6242b17038d84p-26, 0x1.50b8a0f912d98p-169,
     0x1.fec05d813616bp-486, 0x1.69e37a75c2174p-431, 0.0, 0x1.b26d4cb82fp-869,
     0x1.c5b264db4286cp-779, 0x1.f92dcde22714dp-991, 0.0, 0x1.3aa7977e67a3dp-524,
     0x1.4ece14e625d28p-985, 0.0, 0.0, 0x1.feb5c972e7209p-311, 0.0, 0.0,
     0x1.67302cd0427eap-449, 0x1.4a1b5efcedef1p-950, 0x1.685f4335994eap-842,
     0x1.698df800f8408p-215, 0.0, 0x1.e190675e9253dp-403, 0.0, 0.0,
     0x1.2573e846d5c18p-687, 0.0, 0x1.82a5c4c5ef8f7p-429, 0.0, 0x1.b39804755715dp-769,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.603e834be6bap-685, 0.0, 0x1.37ef3c8ff7b57p-122,
     0x1.fd7b162fb7f08p-694, 0x1.64762666894f8p-541, 0x1.27dcbe5e8f28ap-827,
     0x1.3fbea665fa558p-526, 0.0, 0.0, 0x1.4635bbfa4ec39p-296, 0x1.bec36c0664753p-536,
     0.0, 0x1.a6f69c5dc08b4p-825, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d2cf6cc77e81p-664,
     0.0, 0x1.1115a07d13ce3p-955, 0.0, 0.0, 0.0, 0x1.0d2a4672d9398p-9,
     0x1.3c4956f288dadp-213, 0.0, 0.0, 0.0, 0x1.b8a7033aa9a2ep-588,
     0x1.b004bbd5fea2cp-655, 0.0, 0x1.a1b8fbfcb7dc8p-437, 0x1.b8f50d6695cc1p-220,
     0x1.d9d6c6c39eb1cp-915, 0.0, 0.0, 0x1.1831e9d332435p-482, 0.0, 0.0, 0.0, 0.0,
     0x1.562edd268cc8dp-406, 0.0, 0x1.12e79aa242175p-191, 0.0, 0x1.666b22e92e0cdp-968,
     0.0, 0x1.2d0f2c195f8d1p-385, 0x1.aee8f25fe0a85p-415, 0x1.b1fd9a236eb7ap-835, 0.0,
     0x1.a49fd62f843f3p-752, 0x1.db58094001ep-102, 0.0, 0.0, 0.0, 0.0,
     0x1.01a9a582bbdaep-801, 0.0, 0x1.6773060fbea8cp-994, 0.0, 0.0,
     0x1.8b0aa97c458c7p-14, 0.0, 0.0, 0.0, 0x1.0b63cf9058874p-640, 0.0, 0.0,
     0x1.7120944ce0e36p-829, 0.0, 0x1.23416b8edf679p-862, 0x1.a90e0e6656486p-848,
     0x1.df8ecb143b01ep-681, 0x1.0c89314b06a3cp-977, 0.0, 0.0, 0.0,
     0x1.781f19300198cp-397, 0.0, 0x1.fed84b350ed4dp-284, 0.0, 0.0, 0.0,
     0x1.618b0e12bc04cp-640, 0x1.ee5b2779c84cfp-702, 0x1.ef628991b08d6p-231,
     0x1.a234bd2fdfb93p-14, 0.0, 0x1.7b4e391ceb4eep-595, 0x1.ae3d4866a14e5p-575,
     0x1.761eb68a478fep-796, 0x1.71476d071c05p-1012, 0x1.e28a9b41cef5fp-359,
     0x1.eee58df050e3p-66, 0x1.70eb34036528cp-80, 0.0, 0x1.cac0e3a819316p-857,
     0x1.21c1fc7db51bcp-399, 0.0, 0x1.9ec250588b377p-7, 0x1.770ecfb21d38ep-767,
     0x1.9614c76f73fb7p-724, 0.0, 0.0, 0x1.78bbe01fd00dcp-975, 0.0, 0.0,
     0x1.bcc9e1df04e2cp-638
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
            tmp1 = Sleef_sqrtd2_kvx(tmp0);
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
    printf("Sleef_sqrtd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
