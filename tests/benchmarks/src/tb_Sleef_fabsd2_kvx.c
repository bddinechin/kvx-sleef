/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsd2_kvx.c --function Sleef_fabsd2_kvx --headers \
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
     0x1.b1dc9b67f11e5p-415, 0.0, 0x1.8e0815ef58dd9p-839, 0x1.feab85374ad03p-753,
     0.0, 0x1.c8646de3f0eb8p-849, 0x1.544a4892dd1c2p-747, 0x1.7c326e3450dfdp-563, 0.0,
     0x1.28042a001064cp-580, 0x1.6458de7348132p-392, 0x1.8238674da15a7p-166,
     0x1.3b42a920e15a6p-452, 0.0, 0x1.80c2f221bd359p-440, 0.0, 0x1.4183d87d2a02ep-168,
     0.0, 0x1.bd34ae2bf2572p-544, 0x1.8a51f0e0dafaep-820, 0x1.89b367aa4e23cp-228,
     0x1.f948e5cf5663bp-797, 0x1.c304d5c626511p-567, 0x1.e15294586fdccp-685,
     0x1.d39e657f7caa1p-572, 0x1.7c3e298439a5bp-245, 0x1.26d52ac4109bfp-769,
     0x1.a91dabe0ecd06p-534, 0.0, 0x1.900048a6fe129p-512, 0x1.4647c009fc27p-744, 0.0,
     0.0, 0x1.48cfc90c42484p-375, 0.0, 0.0, 0x1.d710f48ddae6cp-893, 0.0,
     0x1.d07a47e1dc2b4p-187, 0.0, 0x1.1b7e9d3716aa8p-480, 0x1.020069470ff48p-246, 0.0,
     0x1.184232f4d9005p-490, 0.0, 0.0, 0.0, 0x1.82f9ea7b150fep-914,
     0x1.777bac65c6037p-555, 0.0, 0x1.fcbe8885d8458p-675, 0.0, 0x1.87c249bad6c52p-408,
     0.0, 0.0, 0.0, 0x1.9512cc0290e9cp-873, 0x1.e8f40f3ef2304p-292,
     0x1.658228d6b8a19p-294, 0x1.e841804cfb64fp-44, 0.0, 0x1.a93dd5b4d372fp-444,
     0x1.60f8aed612149p-706, 0.0, 0.0, 0.0, 0.0, 0x1.c3b7190c32b2ap-942,
     0x1.10066e57cec2p-283, 0x1.aec1dba607227p-855, 0x1.885888c63ecbap-524,
     0x1.d31643f3103cbp-900, 0x1.f14e54873b7b2p-309, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2ee738509125cp-340, 0x1.396f313a28e6bp-441, 0x1.98d94a5909cd8p-421,
     0x1.cf5ef262a87c9p-656, 0x1.58dd3959a9b05p-254, 0x1.1d6e5e13cf0d5p-828,
     0x1.5a854307891c1p-58, 0x1.f7f8fd845a7dep-238, 0.0, 0.0, 0.0,
     0x1.2ade8c3256a4ep-476, 0.0, 0x1.9262ea5faf1b9p-861, 0.0, 0x1.04a36a82c7c3ep-904,
     0x1.ddde200983835p-437, 0.0, 0.0, 0x1.238e49766ccfap-293, 0x1.9f07eea378a47p-113,
     0x1.c4e9e36aa552cp-920, 0.0, 0.0, 0.0, 0.0, 0x1.dcefbb52a596ep-623,
     0x1.402c83386d47bp-289, 0.0, 0x1.851dc97fa919ep-133, 0.0, 0.0,
     0x1.758765a80d7f9p-65, 0x1.a651a12b45accp-502, 0x1.497da44e1ca45p-874,
     0x1.2d4427c64b45cp-641, 0.0, 0x1.8314d77159eb3p-264, 0.0, 0.0,
     0x1.b0c826199a11ep-500, 0x1.5d36c2c3c456dp-883, 0.0, 0.0, 0.0,
     0x1.918ce995f8229p-538, 0.0, 0x1.b221cfbfcaa73p-718, 0.0, 0.0, 0.0, 0.0,
     0x1.a7ee886391cb8p-956, 0x1.b551deb41ab61p-959, 0x1.1c0b84b4aec24p-61,
     0x1.f18275b2785c1p-751, 0.0, 0x1.cb4de2cb00236p-1008, 0x1.3b7a599fe8166p-127,
     0x1.f387091a8967fp-972, 0x1.c1390b95ed897p-402, 0.0, 0.0, 0.0,
     0x1.0ded69b25ceddp-757, 0x1.c4fb813234509p-200, 0x1.c46c56664d17dp-910,
     0x1.e321410a993b4p-904, 0x1.410506500c7cdp-602, 0x1.a7630a53c0864p-295,
     0x1.93197cb049f4ap-815, 0x1.c6f901d050b8fp-208, 0.0, 0.0, 0x1.7bcbe5fdf9741p-740,
     0.0, 0.0, 0x1.67028333c9efdp-775, 0.0, 0x1.9b378a68db96fp-810,
     0x1.ba00f02f517f4p-111, 0.0, 0x1.6962e373ccd42p-931, 0x1.76d59d289d40bp-145,
     0x1.c9e657ed9d0ddp-576, 0.0, 0.0, 0.0, 0x1.59b991ac1ad59p-293, 0.0, 0.0,
     0x1.98a623cac34e7p-595, 0.0, 0.0, 0x1.1960413023578p-298, 0.0, 0.0,
     0x1.e92b0a85c9f6ep-707, 0.0, 0x1.d620832f3d9bfp-331, 0.0, 0x1.60e91458a98cdp-196,
     0x1.50843c79115b2p-60, 0x1.7235cff306ecp-682, 0x1.18915c9b50d12p-50,
     0x1.6f2749660a5ep-881, 0x1.696b3112ab548p-563, 0x1.46b0cca575237p-1012, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.23da79b7172f1p-84, 0x1.2aaf4537ce2c2p-472,
     0x1.847d1f548bee7p-196, 0x1.7a029079c5764p-618, 0x1.4c7def8b82339p-156, 0.0,
     0x1.c027578869936p-863, 0x1.d16f904d1c342p-416, 0.0, 0.0, 0x1.c9873f3a392e1p-708,
     0x1.7010dcb5b93bap-728, 0.0, 0x1.d560fcc775c34p-900, 0.0, 0x1.12c941a2a00d7p-777,
     0x1.c21f16be07c9cp-554, 0x1.c56c494098841p-1013, 0x1.272586e26378p-844, 0.0,
     0x1.0a2cad7e80d29p-247, 0.0, 0x1.0e3abbf2cbf2p-570, 0x1.18075d7f6a205p-381,
     0x1.ec64d45ba9d77p-111, 0.0, 0.0, 0.0, 0.0, 0x1.c8d702c11d1f8p-981,
     0x1.cc6b4d53b9c39p-144, 0.0, 0x1.e92f1780e50bap-330, 0.0, 0x1.05461cb3f0203p-720,
     0x1.97d70668b743dp-929, 0.0, 0x1.cbdd7262b296bp-329, 0x1.79b5b432acd53p-957,
     0x1.113c21f12875ap-228, 0.0, 0x1.c29e27c7bd0bdp-647, 0x1.fdd1bf8413c13p-565, 0.0,
     0.0, 0.0, 0.0, 0x1.7b9fa2dca033ep-95, 0x1.96dbdcf2de85ep-558, 0.0,
     0x1.dd488ba04ab44p-374, 0.0, 0x1.6d1ea8bb05a37p-739, 0x1.2eeef690bdb17p-422,
     0x1.2009ee90b3ecep-635, 0x1.e7fdcc8f1755p-121, 0x1.5939ff5d968d3p-540, 0.0,
     0x1.ff771a2772e81p-835, 0.0, 0x1.61d706e62560bp-281, 0.0, 0x1.1b8debafd4e3dp-508,
     0x1.a7fef4110ff3bp-130, 0x1.e12085167ce7p-927, 0x1.2245e5940d25ep-605,
     0x1.679a66ba94e06p-875, 0.0, 0.0, 0.0, 0.0, 0x1.8ebd0812b8cbep-307,
     0x1.08c5afb3332e9p-831, 0.0, 0x1.562bafc2b32a2p-211, 0.0, 0.0, 0.0,
     0x1.191c7f303a0abp-972, 0.0, 0x1.18ad88167577cp-824, 0x1.a4eda2729711ap-806, 0.0,
     0x1.000ed1b58e89ep-101, 0x1.e7cd868046728p-356, 0.0, 0.0, 0x1.a80009ef647b1p-576,
     0.0, 0x1.69b82c0e7bad6p-89, 0.0, 0.0, 0.0, 0x1.18789dadf39c6p-48, 0.0,
     0x1.5e15a020b9242p-831, 0.0, 0x1.e52ea2bbe9666p-259, 0x1.a2589728acae7p-521, 0.0,
     0x1.484b6317b575dp-293, 0.0, 0x1.7ad0d579ca715p-123, 0x1.cdc5e291c5547p-973,
     0x1.019a993c142a4p-153, 0.0, 0x1.4d11ec3a76cf1p-617, 0.0, 0x1.9dbf9e1226852p-625,
     0x1.8eb0343e47657p-887, 0.0, 0x1.86cc56dac0a5p-696, 0.0, 0x1.9e73088a5d7aap-583,
     0x1.134aa3f7cc65fp-41, 0x1.9dc4355733b16p-558, 0x1.ed772f1a8c46dp-583,
     0x1.d94e8967f57a1p-244, 0x1.643982594f7e1p-55, 0.0, 0x1.c6e967af346cfp-1, 0.0,
     0x1.ce707f9466eeap-82, 0x1.86c10da5ab72fp-420, 0.0, 0.0, 0x1.9472c3564fb1cp-39,
     0.0, 0.0, 0x1.745cf7f74c3fbp-811, 0.0, 0.0, 0.0, 0.0, 0x1.eb5b77b66a6ep-707, 0.0,
     0.0, 0x1.0726eecf20b39p-201, 0.0, 0.0, 0x1.09c1144fc3a08p-802,
     0x1.0040feb777c73p-389, 0.0, 0.0, 0x1.0072de4fdfae6p-755, 0x1.36e9eaae57dc6p-80,
     0x1.e5de0aeef4114p-684, 0.0, 0.0, 0x1.ec0e99fb71db4p-827, 0x1.3981a1c728f2dp-58,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7019c2802becp-611, 0x1.84e75bfc293b1p-610,
     0x1.f329400ec2e07p-81, 0x1.c8d3b764c260dp-70, 0x1.489368b7a2276p-135,
     0x1.e8a5150bd230dp-591, 0.0, 0.0, 0.0, 0x1.57f7b27466f88p-1010,
     0x1.95331900c485ap-244, 0.0, 0x1.be9059e8e70f2p-575, 0.0, 0.0,
     0x1.c24f0535eb5adp-959, 0x1.cbe6677b11fcbp-380, 0.0, 0.0, 0x1.d3229a6995389p-461,
     0x1.b2eedb577a057p-631, 0.0, 0.0, 0x1.22671f8222538p-571, 0x1.a0460167f2e45p-234,
     0.0, 0x1.4fcff6d337c3ap-182, 0x1.42e58d7da586cp-235, 0.0, 0x1.5bfef8a519a91p-788,
     0.0, 0.0, 0x1.ee33aedd99904p-275, 0.0, 0x1.e927dedc2b701p-508, 0.0, 0.0,
     0x1.aa2b5be9fff14p-658, 0.0, 0.0, 0x1.b28be69fd11dbp-411, 0.0, 0.0, 0.0, 0.0,
     0x1.99e18e4ad4edp-921, 0x1.f7d988425d04p-340, 0x1.b30b12c965812p-553, 0.0, 0.0,
     0.0, 0x1.435502128f242p-740, 0x1.a1aab94c7ecb8p-482, 0.0, 0.0,
     0x1.074718f78d889p-145, 0.0, 0x1.9093d6cfbc523p-915, 0.0, 0x1.af427b9ad217bp-42,
     0.0, 0x1.eb13040f0451dp-16, 0.0, 0.0, 0x1.b867566beb171p-735,
     0x1.29c43b90b9f9cp-952, 0.0, 0.0, 0x1.f8aa09648fd09p-923, 0x1.d16ed2dd524a9p-332,
     0.0, 0.0, 0x1.8add8451347c3p-720, 0x1.a8a86df2b6478p-685, 0x1.7ce314864adf4p-95,
     0x1.7d03592ba2cc6p-557, 0.0, 0x1.bf0e820326b39p-619, 0.0, 0.0,
     0x1.1f01f5210c6c6p-784, 0x1.92c75dc4bc76fp-62, 0x1.f481d58f1b2adp-656, 0.0, 0.0,
     0x1.53cc06dd24cacp-136, 0.0, 0.0, 0x1.e0dd803784833p-351, 0x1.62e5c89c5943bp-269,
     0x1.acc22d8b79accp-253, 0x1.dd33cde0a7e7bp-937, 0x1.777aa9dee0d1ap-958,
     0x1.aa43c9a03d8abp-497, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f01250ad0874p-761, 0.0,
     0.0, 0x1.9b5daa0abceb4p-574, 0x1.408ace512b4c3p-74, 0.0, 0.0, 0.0,
     0x1.24846d8f8b6e6p-547, 0.0, 0.0, 0x1.bc02a32af27afp-210, 0x1.f97368549086cp-99,
     0.0, 0x1.385ff0f6b4a67p-460, 0x1.4b538a6d8650ep-25, 0.0, 0x1.01db8c58a1513p-541,
     0.0, 0.0, 0x1.60652210ab0b6p-775, 0.0, 0.0, 0x1.29701bdc864d7p-189,
     0x1.4df5345f899a6p-499, 0x1.5d1383c345317p-229, 0x1.38cef4848773dp-1008,
     0x1.b021d7063f866p-489, 0.0, 0x1.b7aa008551c0ep-813, 0x1.0707b0ab40602p-967,
     0x1.add3e8772f73fp-619, 0x1.4bf38f9ac660ap-246, 0x1.17a0bfb699076p-663, 0.0,
     0x1.8a1c028c9b306p-50, 0x1.c36d98116a0eep-353, 0.0, 0.0, 0x1.72a288ff65b41p-442,
     0.0, 0.0, 0.0, 0x1.ef666f35bfe09p-256, 0x1.d3f5f2782aa37p-361,
     0x1.d7db16a1dadf8p-17, 0x1.74342cd843093p-361, 0x1.afe8296b9c91ap-899, 0.0,
     0x1.bdef9a05543e2p-864, 0x1.bf38482034898p-396, 0.0, 0.0, 0.0, 0.0,
     0x1.54eb695f020afp-397, 0.0, 0x1.e67b59a843454p-943, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49832581aa88p-455, 0x1.27b3e460100a6p-233, 0.0, 0x1.93da5d25de543p-711,
     0x1.5a700614ea5f3p-543, 0x1.08ded9d282165p-573, 0.0, 0x1.272905cef2a6dp-305, 0.0,
     0.0, 0.0, 0.0, 0x1.b23b5d020bcc2p-300, 0.0, 0x1.601bb8169434cp-325,
     0x1.a37f5d689a354p-868, 0x1.98baecba3e73cp-352, 0.0, 0.0, 0x1.fbde62c52c7cbp-112,
     0x1.5e5ae6cbb7f94p-170, 0x1.f78aa7a453edp-593, 0.0, 0.0, 0.0,
     0x1.a33f6caaded0cp-167, 0x1.ed9c4adf2c05cp-772, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c76943d8d0cap-236, 0x1.d1828d560d1a2p-932, 0x1.2eaeb6bf06061p-27, 0.0,
     0x1.98fedf93fd3a8p-15, 0.0, 0.0, 0x1.93aed1287f949p-675, 0x1.fc8418351f01fp-303,
     0.0, 0.0, 0.0, 0.0, 0x1.e287a432eb3bep-305, 0.0, 0x1.b42c7aae57667p-768,
     0x1.ba4487420852ap-983, 0x1.e8ad7249adf4fp-645, 0x1.eb1c830fb03d1p-733, 0.0,
     0x1.244c474bf08eep-332, 0.0, 0x1.fae0cf770393p-380, 0x1.5d5497679b20ep-817,
     0x1.3d59daf83abfap-959, 0x1.039501d126eeep-428, 0x1.8503c41ad78cbp-962, 0.0, 0.0,
     0x1.aeab8cc8fe2f8p-879, 0x1.ad52bc5bd8be6p-277, 0x1.9dc43835ffad9p-512,
     0x1.772539ff90cd1p-595, 0x1.7ed0eb1a1f78ep-379, 0x1.d9c51612ab07fp-939, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7940454f1e7b2p-245, 0.0, 0.0, 0.0,
     0x1.06dabe34a8ebap-964, 0.0, 0x1.a645b2d6f2af6p-121, 0x1.70a0432232e73p-146,
     0x1.2f58cd33a4d78p-405, 0x1.f9f0f7f230eb4p-839, 0x1.4ff46504aa451p-888, 0.0,
     0x1.54449c142c817p-932, 0x1.2c0964a3e6041p-396, 0x1.7052e104540b7p-49,
     0x1.0c54cd9dc65dcp-241, 0.0, 0x1.5791130eb9e1fp-815, 0x1.b971989aae414p-235, 0.0,
     0.0, 0x1.1ab37af25eb0ap-179, 0.0, 0x1.34acba9ba7dc9p-542, 0.0,
     0x1.bdaed35d9a3f8p-968, 0x1.04c112a104528p-192, 0.0, 0.0, 0x1.0585f64fcead6p-759,
     0x1.55f81720cf2e5p-720, 0x1.f83f663a602b2p-898, 0.0, 0x1.43a01fb7a69b3p-395, 0.0,
     0x1.40a7ab116f53cp-361, 0.0, 0x1.22896cbf51ec3p-574, 0.0, 0x1.faed003e72253p-704,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c633e301ccbdp-776, 0.0,
     0x1.27ffcc0702173p-251, 0.0, 0x1.534dbfdd6bd7p-774, 0.0, 0.0,
     0x1.bf5e9f9a93bdcp-277, 0x1.7bee844bb8dd1p-611, 0x1.44f294eb88599p-951,
     0x1.d8c3de96f2247p-286, 0x1.f066f3cde3ca4p-651, 0x1.e77b0f0b154acp-186,
     0x1.4a702abc296e3p-971, 0.0, 0x1.7aabbfd1bc203p-172, 0x1.5ce7d5c986375p-295,
     0x1.3efd68ba2a782p-531, 0x1.fa8970d158957p-662, 0x1.3afcb39a5e4fap-98, 0.0, 0.0,
     0x1.5faab4aaa0e3ap-851, 0.0, 0.0, 0.0, 0x1.31f7de5ec4cc8p-494, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1d4711967d896p-20, 0x1.e91bd2e467ec4p-194,
     0x1.fecccc014e56fp-597, 0.0, 0.0, 0.0, 0x1.5575fe043b4dap-702,
     0x1.fb540f96c5b9ep-867, 0x1.70260cc433807p-332, 0.0, 0.0, 0x1.d3523f309a1p-1005,
     0.0, 0x1.75b642f8b7b7cp-737, 0.0, 0x1.3d1749c9857e1p-878, 0x1.a3f301e50a68ep-590,
     0x1.d257559aa557cp-708, 0.0, 0.0, 0x1.ec85bbbc013dcp-1003, 0.0, 0.0,
     0x1.63ac9e64c00aap-176, 0x1.20c5685e8ba1bp-385, 0x1.287aa16523919p-500, 0.0,
     0x1.e20f1e607ddf1p-35, 0.0, 0.0, 0x1.350274cdda7e7p-206, 0x1.ba4d15ad5c7fcp-121,
     0.0, 0x1.c1454deed7635p-332, 0x1.3909775be4995p-187, 0x1.0e74d1fbea677p-404,
     0x1.0a1d828128c46p-162, 0.0, 0.0, 0x1.0feaa1f6d0ce6p-704, 0.0, 0.0,
     0x1.de94b91c564a8p-604, 0x1.cc3a862efba8dp-615, 0x1.bb72433602a31p-414,
     0x1.95a70d58570c1p-21, 0.0, 0.0, 0x1.b896a1764f523p-556, 0.0, 0.0, 0.0,
     0x1.d79e91c2f53fep-847, 0x1.745f91d583591p-553, 0x1.d47edadc0bdd7p-309,
     0x1.4e58402f3b488p-227, 0x1.8595cfccc2cecp-923, 0x1.6f88da36b5087p-589,
     0x1.70412bb456de5p-486, 0x1.79b176d97d018p-274, 0x1.a3e7af55dbdafp-912,
     0x1.b6b72bd1f357fp-740, 0.0, 0x1.b137edbed43cep-283, 0x1.f58784c04b5e9p-564, 0.0,
     0.0, 0x1.a0ea3326b853ap-834, 0x1.f9a2675dd3e3cp-988, 0x1.1fc8b0d98b2d7p-531, 0.0,
     0.0, 0x1.f333aef0a40f8p-392, 0.0, 0.0, 0.0, 0x1.6e765ef5379adp-506,
     0x1.15092d1ba5c6ep-1014, 0x1.52f813691478fp-513, 0.0, 0x1.edbb98ab0a0c7p-571,
     0.0, 0x1.b37614d71c3acp-112, 0x1.9bfd435a2979ep-639, 0x1.05229d084aeeep-253,
     0x1.74d1e84cf561fp-201, 0.0, 0.0, 0.0, 0x1.3e72a1ded36b3p-15, 0.0, 0.0,
     0x1.7ab682421abf5p-453, 0.0, 0x1.b43ae8de37b64p-419, 0.0, 0x1.cc8d999a35a6ep-923,
     0x1.f26000f4bc712p-508, 0x1.49b0389e72d05p-681, 0.0, 0.0, 0x1.2e242d5338bf9p-868,
     0x1.e9dcbbdf3df16p-623, 0.0, 0.0, 0x1.092bd5f32837dp-55, 0x1.a83503a150aa5p-720,
     0.0, 0x1.7333fa98b0a2dp-698, 0x1.16089fd1eac84p-357, 0.0, 0x1.f80022307deb9p-686,
     0.0, 0.0, 0x1.e05ed1aa1a927p-13, 0x1.3ba688057f096p-280, 0.0,
     0x1.0594de5e6f8ap-577, 0.0, 0x1.78d4f4ef08805p-463, 0x1.b225a72ae02e3p-695,
     0x1.2f2ef267ffbbdp-234, 0x1.34039d0e0c39cp-387, 0.0, 0.0, 0x1.4c16ec1e0ffa5p-204,
     0x1.4c8719599dbabp-710, 0x1.f45c195dbb665p-444, 0x1.7da5ea645c78dp-777, 0.0,
     0x1.b1cfcdf8e38d9p-970, 0x1.cfe24ffda4595p-290, 0.0, 0x1.bf9d4b2afa674p-868,
     0x1.b39e7afe87e99p-55, 0x1.d5cba8431d073p-775, 0.0, 0x1.36d7eb0e0965ep-217,
     0x1.f24943d0b7a13p-809, 0x1.27fc622d8dd42p-191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7446f5056319cp-625, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3212dccdeb1dp-990, 0.0,
     0x1.0a78016999961p-38, 0x1.902563bbc9dcep-984, 0x1.af2457de11c3bp-302, 0.0, 0.0,
     0x1.54869e1e2d758p-129, 0x1.74c0b6d84772ep-562, 0.0, 0.0, 0x1.9ba87fa1e2f17p-607,
     0.0, 0.0, 0.0, 0x1.074330764296bp-339, 0x1.2bd30d5a70233p-911, 0.0,
     0x1.4104e72ffb31dp-823, 0.0, 0.0, 0.0, 0x1.ea65260032c2fp-666,
     0x1.e83f5c6f7133ep-849, 0x1.fe7a16c181482p-177, 0x1.61db91fd466eep-282,
     0x1.37056b8e26197p-629, 0x1.761774a11a043p-56, 0x1.534c31a311727p-574,
     0x1.62c4c52767effp-779, 0x1.ffdccd22fe3d2p-544, 0.0, 0x1.e6940fc24d503p-956,
     0x1.aac536e709501p-483, 0.0, 0x1.2588c54f25d24p-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.78dea4fe238bbp-141, 0x1.1df2de9f81706p-479, 0x1.f8dfe409c5093p-476, 0.0,
     0x1.5b2ec8e4142acp-110, 0x1.7aa2ffed2f8a5p-438, 0.0, 0.0, 0x1.243bd0bcb532p-470,
     0.0, 0x1.8a1cc9bdc3214p-605, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5ced242440bbp-852, 0x1.49af26b6a9f22p-356, 0x1.7f0d982d3de29p-565,
     0x1.32de2a4fbaad6p-804, 0x1.ca27052855f9ep-362, 0x1.a769a4e12a672p-421, 0.0, 0.0,
     0x1.c789af3136b35p-340, 0x1.8f0d092508b27p-57, 0.0, 0x1.258d1715dfcc1p-401,
     0x1.64cf7a8169537p-625, 0x1.6105de08064bfp-368, 0x1.62dbbed45bb1ap-220, 0.0, 0.0,
     0x1.69ce3a64ad1adp-539, 0x1.6a950c6792eb2p-457, 0x1.2155052e42766p-496, 0.0, 0.0,
     0.0, 0x1.92a9602a2a288p-868, 0x1.063a3c974dcecp-998, 0.0, 0x1.3e27d1991b2f5p-161,
     0x1.d50c8de0a8b61p-295, 0x1.9532a95897f4dp-117, 0.0, 0.0, 0.0,
     0x1.ad395a870ffcbp-710, 0.0, 0.0, 0x1.4eb808d2b4a27p-227, 0x1.d9c5504c9f1e9p-513,
     0.0, 0x1.735a8247b911bp-731, 0.0, 0x1.fd0c89171d3e1p-180, 0x1.b00544bf3866ap-828,
     0x1.db854925c85e8p-844, 0.0, 0x1.e7f351bab62cap-939, 0.0, 0.0,
     0x1.02bcb225035c9p-337, 0x1.ab7247bb704p-407, 0x1.f46d576142709p-426, 0.0,
     0x1.a410ee4f9a7f4p-713, 0.0, 0.0, 0.0, 0.0, 0x1.2edaeb3ac0975p-27, 0.0, 0.0,
     0x1.9112e294608b5p-289, 0.0, 0x1.5e090f8b66a88p-189, 0.0, 0.0,
     0x1.f6ef791d411b5p-933, 0x1.061418030f10cp-130, 0.0, 0x1.70a57738fb73p-956,
     0x1.cda063883bb49p-863, 0.0, 0.0, 0x1.3b0f5e32500cdp-71, 0.0,
     0x1.409dd98c435b7p-1, 0x1.a5d52989130e3p-850, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7554d7e912877p-198, 0x1.a26c4756b291ep-549, 0x1.7c00b76ab5484p-628, 0.0,
     0x1.cac6499aee579p-391, 0.0, 0.0, 0x1.d6882b23aef4dp-1012,
     0x1.25ccb16a7a344p-211, 0x1.16b44e4af4869p-642, 0x1.be2656761e656p-256, 0.0, 0.0,
     0x1.dd7e2b5330e4ep-981, 0x1.edf81a68a7bf6p-17, 0x1.e1565de953188p-744,
     0x1.6d574f9bf6b7fp-342, 0.0, 0.0, 0.0, 0x1.9d9aac9b6a8dcp-947,
     0x1.fafe88feb5091p-928, 0x1.5e2180d3dcdb9p-770, 0.0, 0.0, 0x1.9b10192378ea5p-131,
     0.0, 0x1.5768ec50125fdp-410, 0.0, 0x1.d9d8bfd490388p-743, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.83d53ce29367ep-250, 0.0, 0x1.f9cb39bb22856p-445, 0.0, 0.0,
     0x1.2e953d50991fap-829, 0x1.72a574e6704a7p-339, 0x1.273c39393294fp-988, 0.0, 0.0
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
            tmp1 = Sleef_fabsd2_kvx(tmp0);
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
    printf("Sleef_fabsd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_fabsd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
