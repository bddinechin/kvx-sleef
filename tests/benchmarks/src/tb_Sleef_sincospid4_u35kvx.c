/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid4_u35kvx.c --function Sleef_sincospid4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.cf04dc628d328p-494, 0x1.98f513df697f1p-357,
     0x1.d64f6669b6441p-1002, 0.0, 0.0, 0.0, 0x1.df4faee98f959p-338,
     0x1.395a97500bafbp-128, 0.0, 0.0, 0.0, 0x1.4aded36c5bad2p-948,
     0x1.e50e3652cf656p-978, 0.0, 0x1.4b9fa18451952p-429, 0x1.011da0d70d9abp-1018,
     0x1.ba40405a80e3ap-604, 0.0, 0x1.3516df9f6f316p-216, 0.0, 0x1.c719754c1ce51p-115,
     0x1.50ba5e48846b7p-291, 0x1.a401c7caef07ep-685, 0x1.798ed181dde02p-782,
     0x1.bcd284831991p-121, 0x1.574ccdc62dec9p-860, 0x1.d0441119f3b21p-256, 0.0, 0.0,
     0.0, 0.0, 0x1.06c9ba21795d7p-358, 0x1.5a2223ae6a069p-851, 0.0, 0.0,
     0x1.283da6625b04cp-943, 0.0, 0x1.649b841641038p-622, 0x1.448fd5f74cbbfp-617, 0.0,
     0x1.86fbe21e6659bp-178, 0.0, 0x1.2adbd4b2a5ab7p-831, 0.0, 0x1.56b5fe16a2007p-456,
     0x1.94cbf1d155edbp-486, 0.0, 0.0, 0x1.24158ac92d811p-999, 0.0, 0.0,
     0x1.86f7e7f59470dp-818, 0.0, 0x1.2d9bd190a3161p-856, 0x1.4502d84c4f0adp-1001,
     0x1.fe2cde9ff012ap-926, 0x1.4b57d53626463p-474, 0x1.57f62771823a7p-264, 0.0, 0.0,
     0.0, 0.0, 0x1.fd1850d35be8bp-657, 0.0, 0.0, 0.0, 0x1.94f1672ccdf4fp-647,
     0x1.17c8ec7eb3c29p-844, 0.0, 0.0, 0.0, 0x1.c93972420f386p-816,
     0x1.e4cfe7c68d668p-253, 0x1.3a47b6d76a8cbp-718, 0.0, 0.0, 0x1.1081e7415cf7bp-467,
     0x1.6681455d17249p-84, 0x1.c518677b9d98ap-475, 0x1.46f3f95edf2b1p-310, 0.0, 0.0,
     0x1.25710b3a5d29bp-997, 0x1.5bd21cd1d3ccp-15, 0x1.906aa31887015p-105,
     0x1.c910c03884148p-296, 0x1.9d695c3665471p-406, 0x1.a7f3fc7caffbep-73, 0.0,
     0x1.6e4916972c3ddp-89, 0.0, 0.0, 0x1.dec44d003644cp-522, 0x1.5a996616beb12p-310,
     0x1.67c9291ff969fp-554, 0.0, 0x1.1038f1be5d586p-748, 0x1.166965a7cc347p-13, 0.0,
     0.0, 0.0, 0.0, 0x1.d4ac6a28de8ep-245, 0.0, 0x1.770071d1b88fdp-110, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9e11c141ffcebp-731, 0.0, 0x1.7ceec3360030cp-4, 0.0, 0.0, 0.0,
     0x1.f586c80cce5a5p-732, 0.0, 0.0, 0.0, 0x1.141af72d262e6p-566, 0.0,
     0x1.a1042ad2369e9p-471, 0.0, 0x1.838964d3c0057p-843, 0x1.646dca6df755p-523,
     0x1.e6c291851763p-414, 0x1.3553b4e440e71p-709, 0.0, 0.0, 0.0,
     0x1.94056b670461fp-830, 0x1.2a32d88a46c9cp-237, 0.0, 0x1.71d8605140b9cp-110,
     0x1.c60184a4cedb8p-59, 0x1.3bfb266fcb3f8p-466, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2bb7d3c2cacebp-751, 0.0, 0x1.8986c26a3af5ap-657, 0x1.7da6a12372c84p-812, 0.0,
     0x1.49eab17efe47ep-261, 0.0, 0.0, 0.0, 0x1.35c1cab8b9987p-474,
     0x1.c08c929206c0dp-313, 0x1.0844cb0127dd2p-474, 0.0, 0.0, 0x1.6070cb30f2f53p-624,
     0.0, 0x1.aa5e7bc1c680fp-421, 0.0, 0.0, 0x1.7e89e4605d52cp-720,
     0x1.535924c6d786bp-694, 0.0, 0x1.675a4204db1cbp-167, 0x1.9792b7976e191p-616, 0.0,
     0.0, 0x1.d6d8bd706004bp-247, 0.0, 0.0, 0.0, 0x1.aac7bece3c2fbp-857,
     0x1.c135e7c263497p-776, 0x1.f94f2c29e13f8p-998, 0x1.d9c9b1c32468ep-729, 0.0, 0.0,
     0.0, 0x1.beec725eff611p-540, 0x1.7c5ba189eaf11p-85, 0x1.9b02ba5ef1e44p-377,
     0x1.9120f30d0d2b8p-67, 0.0, 0.0, 0.0, 0x1.e0196c8b9d00dp-527,
     0x1.b060a1c1e398ap-764, 0x1.ae5f868a26db5p-894, 0.0, 0.0, 0x1.19f6b3e7f8835p-20,
     0x1.538d868bfcedbp-931, 0.0, 0.0, 0x1.c45e9aea9ce7ep-365, 0x1.4ba98e1a7e0ccp-834,
     0x1.eead3ca479559p-335, 0x1.6a579e236826ep-34, 0.0, 0x1.9123f6a11752ap-459, 0.0,
     0.0, 0x1.310cf97a9b7bbp-677, 0.0, 0x1.b801259d8e9afp-181, 0x1.979e681c23bffp-46,
     0.0, 0.0, 0x1.d036e20cb807dp-887, 0.0, 0x1.644d216e14f0dp-290, 0.0, 0.0,
     0x1.210757bd84d39p-438, 0x1.2c07e89d82101p-419, 0x1.95b2ebc8aff6bp-135,
     0x1.a373173842793p-170, 0.0, 0x1.86850801ba017p-188, 0.0,
     0x1.b34ffb33a4002p-1000, 0.0, 0.0, 0.0, 0x1.47ad30eb31e21p-260,
     0x1.cbaa956b1c174p-726, 0.0, 0.0, 0x1.3cc3ca00c340ap-988, 0.0, 0.0,
     0x1.a7e49a0aaf8ffp-230, 0x1.f2ccbda2fa982p-692, 0x1.34c370a9740cfp-203,
     0x1.0e7c4ae6f465ap-903, 0x1.fd706de16b285p-878, 0.0, 0.0, 0x1.816e7a4cd1bb2p-614,
     0x1.2c13da4e3deebp-261, 0.0, 0x1.000911089a744p-240, 0x1.1816f6d53ca74p-269, 0.0,
     0x1.c63b15cccbee6p-122, 0.0, 0x1.cf6c768a97fa5p-718, 0.0, 0.0,
     0x1.209ca3db6402ap-223, 0.0, 0.0, 0x1.0bab5d6857a8bp-949, 0x1.95be024307d7p-131,
     0x1.b25d29385508fp-993, 0.0, 0.0, 0x1.4deaac607d5e1p-934, 0x1.e9be1c6633001p-57,
     0.0, 0.0, 0x1.fbe5b4c5b83f3p-434, 0x1.8d2d37f69c8fep-292, 0x1.1e62b74699582p-168,
     0.0, 0.0, 0x1.6458e8730f562p-246, 0x1.3c4404f939712p-194, 0.0,
     0x1.e7cb751b7da14p-740, 0x1.a16754b83076fp-134, 0.0, 0x1.bf763bf93fdaap-507, 0.0,
     0.0, 0.0, 0.0, 0x1.7a94a15fd1735p-26, 0.0, 0.0, 0x1.9456c9901926fp-509,
     0x1.f3901bd904501p-423, 0.0, 0x1.51ff0d3f56576p-549, 0.0, 0.0,
     0x1.e45396b33a59ep-750, 0x1.8af6e6057a0fdp-651, 0.0, 0x1.eb739547948p-996,
     0x1.c992b89d659afp-130, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.976b4f6b240e3p-362,
     0x1.8a8335509ffebp-245, 0.0, 0x1.05ec3c3a6da17p-792, 0x1.40f40f68fa5b5p-725, 0.0,
     0x1.fe8476536e6d6p-689, 0x1.1c2fb5490390dp-771, 0.0, 0x1.3505344e486edp-449, 0.0,
     0x1.4ccc11018fcbbp-529, 0x1.cb54022b61924p-929, 0x1.71f97cefc0effp-559, 0.0,
     0x1.c8e638ec8680cp-615, 0.0, 0x1.25776815987ap-81, 0.0, 0x1.34dfec4c4c596p-679,
     0x1.39c8295fc3a2fp-717, 0.0, 0x1.38f0f9d38845p-843, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cd194bd514654p-918, 0.0, 0x1.d28f2fa3901b6p-880,
     0x1.88928e00b49fap-624, 0.0, 0x1.d2dbe832740aap-612, 0.0, 0.0,
     0x1.f8943a685d44bp-394, 0.0, 0.0, 0x1.e4bd9974eb78ep-338, 0.0, 0.0,
     0x1.009d591f965b1p-956, 0.0, 0.0, 0x1.0cd0f794f733fp-436, 0x1.3ab3b4090e06ep-276,
     0x1.b14c8d26bb4fbp-709, 0.0, 0x1.a41eedec0e7c4p-50, 0x1.d91dd29e62ac4p-845, 0.0,
     0.0, 0x1.ca5939459f3d6p-416, 0x1.d0ba2488e052ep-394, 0x1.ff65e66aab28p-861, 0.0,
     0.0, 0.0, 0.0, 0x1.21dc2877d816dp-359, 0.0, 0.0, 0.0, 0x1.0ef35a915d39ap-118,
     0.0, 0x1.f4a004ba5e41bp-46, 0x1.fefa511f4b53cp-903, 0.0, 0.0,
     0x1.96ddaff57e049p-976, 0x1.0d15e565a66f8p-25, 0.0, 0.0, 0x1.a53560412184dp-522,
     0.0, 0x1.18105293dab07p-267, 0.0, 0.0, 0x1.bcff97d181116p-13, 0.0,
     0x1.ceab2f392adcbp-961, 0x1.5b1e3590fc6b9p-259, 0x1.b060aa6da786ap-816,
     0x1.0931960b98fdcp-932, 0x1.e8e6ff37fe24cp-418, 0.0, 0.0, 0.0,
     0x1.358f5fadcf27bp-333, 0x1.9530157ee520fp-319, 0.0, 0.0, 0.0,
     0x1.872dc937f8574p-877, 0.0, 0x1.eb5fe4f28ce2p-654, 0x1.15b39bdb02216p-588,
     0x1.9f589adbe7f0dp-343, 0.0, 0x1.b259e6f18d19ap-905, 0.0, 0.0, 0.0,
     0x1.94661bdfa2253p-576, 0.0, 0x1.7d81a6e9397edp-324, 0x1.0323013dc14f7p-254, 0.0,
     0.0, 0x1.b8d22682212d8p-152, 0.0, 0x1.41c825083880bp-880, 0.0,
     0x1.fda141dc888a4p-865, 0.0, 0.0, 0.0, 0x1.d2899800b25c5p-891,
     0x1.9a93dbe9b3899p-641, 0x1.2d7ba36eaf808p-510, 0.0, 0.0, 0.0, 0.0,
     0x1.395fe182382a4p-324, 0x1.e3028d919f345p-502, 0x1.f101a41f61d23p-577, 0.0,
     0x1.47d90f6ecba3bp-878, 0x1.bd4abfde114f7p-402, 0.0, 0x1.85e207b35b9adp-399,
     0x1.0554faa04b3c1p-198, 0.0, 0.0, 0.0, 0.0, 0x1.ecd571a96cdfbp-515, 0.0, 0.0,
     0x1.0dcda02a139e6p-333, 0.0, 0.0, 0.0, 0.0, 0x1.b1b099b877099p-479, 0.0, 0.0,
     0.0, 0.0, 0x1.f16791d3fc3f9p-612, 0.0, 0x1.7f645e32bbc2cp-159,
     0x1.e3c24457801bcp-105, 0.0, 0x1.32ed1b7bc9c41p-678, 0.0, 0x1.b2dc70b8fbc91p-785,
     0x1.3a12a1e5127a2p-117, 0.0, 0.0, 0x1.56de95016050fp-25, 0x1.2f72dd1bb6a3ep-601,
     0x1.ddafa76fccd72p-834, 0x1.8b1931cedeb5fp-944, 0.0, 0.0, 0.0,
     0x1.df87215949fcbp-807, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4df8ac29de9ep-819,
     0x1.aeb5e5992b32dp-506, 0x1.ffb9023ceb444p-766, 0x1.11d3bdda42658p-937, 0.0,
     0x1.e2bbab5e9cae2p-146, 0.0, 0.0, 0x1.a571649818292p-1017,
     0x1.e54606606ef36p-928, 0.0, 0x1.627c22a467f26p-455, 0x1.b7c2df5f844d7p-305, 0.0,
     0.0, 0x1.f9be8d03b2b28p-719, 0.0, 0x1.841ea63c8ff8bp-852, 0.0,
     0x1.40f3e286a7affp-8, 0x1.6bbed318d51b4p-951, 0x1.52c91c2d451b4p-375, 0.0, 0.0,
     0x1.189d6c0aa3f8dp-499, 0.0, 0.0, 0x1.8ae590b1fb363p-704, 0.0,
     0x1.4aaa0a38a4664p-346, 0x1.86e35edffb08cp-130, 0.0, 0x1.315161c5da787p-700, 0.0,
     0x1.e63796412f673p-626, 0x1.9ab5920a84e77p-990, 0x1.d257893af4ee8p-264,
     0x1.649b2330211a3p-732, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.792445c801394p-756,
     0x1.520317963047ap-58, 0x1.61eb9ace2056cp-249, 0x1.52846993518cp-900, 0.0, 0.0,
     0x1.06761861ad1bep-641, 0x1.5bbd0eea513b2p-132, 0.0, 0.0,
     0x1.f85a15f61acf4p-1009, 0x1.89c1c74ab8023p-999, 0.0, 0x1.7d86e4e3763c1p-23, 0.0,
     0.0, 0x1.19b9ca62f6a77p-410, 0x1.e3cc5207e1e1bp-243, 0x1.36356ecca5e1cp-361,
     0x1.cb5de61d75bd8p-544, 0.0, 0x1.6a7e0073b30ebp-364, 0x1.b6772e3d3352ap-851, 0.0,
     0.0, 0.0, 0.0, 0x1.9bc7c7bc0b44cp-737, 0x1.0443e10c2114ap-566, 0.0,
     0x1.cfe8d34c74203p-538, 0.0, 0x1.28766222c4b0bp-956, 0.0, 0.0,
     0x1.a472165210305p-49, 0x1.aa3a52d2cc8ffp-1001, 0x1.6dfa1269a823cp-919, 0.0,
     0x1.5b45367efaccfp-129, 0.0, 0x1.de18aa9aecac5p-365, 0x1.abfb17ecd35cap-430, 0.0,
     0x1.9dd562e84f126p-642, 0.0, 0x1.011b7a2d86324p-478, 0x1.bc043016b9315p-567, 0.0,
     0.0, 0x1.3ac565e6086a7p-669, 0.0, 0x1.0d40d4e7a5598p-860, 0.0, 0.0,
     0x1.f5d18c9d5134p-980, 0x1.1381115b1db68p-725, 0x1.e73624f28f32dp-810, 0.0, 0.0,
     0x1.84adb5280bdf9p-349, 0.0, 0x1.3f06684e31b79p-639, 0.0, 0.0,
     0x1.7b663981c77b8p-83, 0x1.aceadb563d4e2p-281, 0.0, 0.0, 0x1.ba153aa741356p-385,
     0x1.bb769737bd768p-467, 0.0, 0.0, 0x1.118bd878a6acep-240, 0x1.c509def58b5c9p-626,
     0.0, 0x1.85c68d0f23f92p-896, 0x1.5c1a89b9a043bp-642, 0x1.80de241928b13p-3,
     0x1.d2c00b53e35ccp-960, 0.0, 0x1.4077f62b27d86p-528, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a7f11668d768bp-732, 0.0, 0x1.07dd9e4b4959bp-1007,
     0x1.4d901f602b98dp-440, 0x1.347b4b7c1ab96p-252, 0.0, 0x1.b290d479ab945p-347,
     0x1.241e17db29f15p-350, 0x1.d6000bea1d3b5p-607, 0x1.6feb21105a21cp-596, 0.0,
     0x1.2d8e4cc91b42ap-600, 0x1.c14f0ed805282p-115, 0.0, 0x1.50b347052c80cp-494,
     0x1.e7cb9b67d44a1p-526, 0x1.2991b717b4301p-351, 0.0, 0.0, 0.0,
     0x1.28897adb9d305p-910, 0x1.dce62b3007dd5p-305, 0.0, 0x1.099229519d2f4p-803, 0.0,
     0x1.71c549095624fp-583, 0x1.3a5031a64de78p-919, 0x1.28a5a86850913p-6, 0.0, 0.0,
     0x1.49b34d4d09b4fp-769, 0.0, 0x1.fac60153a036bp-786, 0x1.5c9b56298aeb9p-1007,
     0.0, 0x1.b2b2d1a5b7461p-202, 0x1.805cb5695fc6cp-659, 0x1.978b5402c2eep-140, 0.0,
     0x1.2182fca37c0cdp-261, 0.0, 0.0, 0.0, 0x1.8ebd38cf04406p-296,
     0x1.0acbb002aa649p-712, 0x1.cd43975338a72p-461, 0.0, 0.0, 0x1.63684c1a03c8p-718,
     0x1.d48228bc67bb6p-871, 0.0, 0.0, 0x1.8131ea68952b7p-608, 0.0, 0.0,
     0x1.2be107521319cp-915, 0x1.378da50e4c865p-544, 0.0, 0.0, 0.0,
     0x1.e2363031c32f5p-971, 0.0, 0x1.cb499249f27abp-299, 0.0, 0x1.9f93bbb8c56cdp-930,
     0x1.e47cbd6ace639p-522, 0x1.0c5750e5ba693p-406, 0x1.94e8c7ac6bb42p-582,
     0x1.1fcd1cdf60e35p-831, 0.0, 0x1.067bb5d21e8d1p-726, 0.0, 0.0,
     0x1.25215abd2b4b3p-163, 0.0, 0x1.eedd0eca08ea4p-805, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bfdd71b6db80bp-385, 0x1.da07db1c0490cp-789, 0x1.67b83b933cc44p-792,
     0.0, 0.0, 0.0, 0.0, 0x1.2134fb23129dp-569, 0x1.3714238b6638ep-607,
     0x1.adbec5509b0aap-297, 0.0, 0x1.3fc604cad2756p-125, 0.0, 0.0, 0.0,
     0x1.d1df3b78bcba2p-592, 0x1.6d399c84fa245p-32, 0x1.e72578b64e6b9p-854,
     0x1.2374049ae02a8p-552, 0.0, 0x1.5f9dfa73295dbp-969, 0x1.38b66550e52bfp-836, 0.0,
     0x1.e7cef528da573p-645, 0.0, 0.0, 0x1.56f12a67a8bfp-619, 0.0,
     0x1.dfb5d0e7463c3p-1000, 0x1.a2865d025af03p-213, 0.0, 0x1.9939c9dfd5083p-963,
     0x1.d02554da71adcp-817, 0.0, 0.0, 0x1.a85ece0d6e03ap-779, 0x1.68289e5fa4cdp-950,
     0x1.d0521d7d01f68p-959, 0.0, 0.0, 0x1.efd08f15290ddp-812, 0x1.88d12fcb6bd87p-730,
     0x1.a375362947403p-640, 0x1.28b1ce96beeddp-398, 0x1.bbd364aba4d2bp-306, 0.0, 0.0,
     0.0, 0.0, 0x1.1997e7afc0d8ap-811, 0.0, 0.0, 0.0, 0.0, 0x1.e3fa3e11b8e2bp-918,
     0x1.b9169f71fccb5p-477, 0.0, 0x1.4dbcc3905eac5p-378, 0x1.88676c1e671a8p-923,
     0x1.4e9b0d875ac59p-650, 0.0, 0x1.4430f3fd7c542p-707, 0x1.e4204d7f4de3ep-664,
     0x1.0b3ab7b89f278p-975, 0x1.ca288b7b2cc11p-398, 0.0, 0x1.ead614232ed7ep-369, 0.0,
     0x1.b8ce92ce2fea9p-275, 0.0, 0x1.020e8274ec5eap-857, 0.0, 0.0, 0.0,
     0x1.aee785744974fp-379, 0.0, 0x1.079eb5ff97622p-107, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7a47c5354fbb9p-675, 0x1.1bf357617f2b6p-507, 0.0,
     0x1.a6a407877bd15p-987, 0x1.06b2f24b1d6f7p-249, 0.0, 0x1.203d4e2ae63fp-508,
     0x1.4c603f0fdbc5p-996, 0.0, 0.0, 0x1.eeb003c8f9a7cp-855, 0x1.83eeb4b078704p-131,
     0.0, 0x1.803a81852e27p-491, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.695cd148c8db9p-450,
     0x1.35a27818c709bp-616, 0x1.540c1abe4697bp-861, 0x1.7718309eb3573p-779,
     0x1.555fc0bac8b66p-795, 0x1.79fc163159af1p-844, 0.0, 0x1.5d1c6d7f6c2d9p-810,
     0x1.ed51c5bb84af1p-83, 0x1.77c191bd8d834p-428, 0.0, 0.0, 0.0, 0.0,
     0x1.2cd1127dd7a33p-313, 0x1.a2a837124be29p-342, 0x1.d5ed0519ddf86p-699, 0.0, 0.0,
     0.0, 0x1.bfd28518c8928p-565, 0.0, 0.0, 0x1.6a247cba223e8p-884, 0.0,
     0x1.e28b363b3fe5ap-447, 0x1.bbad5992d464p-828, 0.0, 0x1.f2aea46d2e1eep-662, 0.0,
     0x1.b5df9215be323p-818, 0x1.e7fd369133ce5p-891, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.41dde8bcab7b4p-467, 0x1.257a4961c09c4p-107, 0x1.57fad1fe5c1a7p-168,
     0x1.cf796bb773e47p-214, 0x1.361f7af3a2352p-294, 0x1.d078fa99f0552p-365,
     0x1.951499acf7ed7p-201, 0.0, 0.0, 0x1.ae05daafb04dfp-725, 0.0,
     0x1.9ba205d0765d1p-405, 0x1.d9564626a4687p-990, 0x1.f0027615421fp-250,
     0x1.82df3b579e65cp-457, 0x1.fe41714d94cbp-711, 0x1.4b3b9988649cfp-810,
     0x1.0e1dbcb86653ap-517, 0x1.d141706511da9p-781, 0.0, 0x1.090d58975566cp-555, 0.0,
     0.0, 0x1.bb1ba7a66781bp-162, 0.0, 0.0, 0x1.d7d33af504586p-678, 0.0,
     0x1.196d7a155e86ep-99, 0.0, 0.0, 0.0, 0x1.3ab26c1f68e9dp-905,
     0x1.b0ccc3cae9565p-364, 0x1.cb7f700904626p-116, 0.0, 0.0, 0x1.078a11804f103p-679,
     0x1.4bef3a8e51805p-771, 0.0, 0.0, 0.0, 0x1.649f6e929c04bp-147,
     0x1.183990a676edbp-212, 0.0, 0.0, 0x1.89bfdc2794c7fp-734, 0.0, 0.0,
     0x1.f1216d6a2b548p-390, 0.0, 0.0, 0x1.82775b0e6755ep-776, 0.0,
     0x1.cf4d63b372382p-387, 0x1.5903206ccbc14p-582, 0x1.89c4f7aad7f7fp-248,
     0x1.d4c0c48973ed5p-992, 0x1.eb7af73fea94dp-173, 0x1.ee67ce3d31ccap-84, 0.0,
     0x1.95f1a5d089e82p-303, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33bd40ca19b9p-431,
     0x1.1ff38057911f8p-562, 0x1.2dc6a40a1be07p-252, 0.0, 0.0, 0x1.069cb3b8fa273p-775,
     0x1.205cac1e4f507p-132, 0.0, 0x1.9b203fac4cd88p-543, 0.0, 0x1.c4a4a50380614p-740,
     0.0, 0x1.4f76d9f691a6fp-332, 0.0, 0x1.6164d312cb48bp-647, 0x1.4725fe037c82dp-326,
     0.0, 0.0, 0x1.498f20ca89258p-106, 0x1.4a6a21c6ed648p-205, 0x1.956293b5bf267p-874,
     0.0, 0x1.4dd3925926494p-907, 0x1.76100ad8e2b65p-21, 0.0, 0.0, 0.0,
     0x1.99ea5b58e7784p-923, 0.0, 0.0, 0x1.5182942e0ae18p-991, 0x1.27644cd86eb44p-655,
     0x1.3364f19b7fd66p-457, 0x1.9f2277f9dbd68p-483, 0.0, 0.0, 0.0,
     0x1.cbbf157ce575ap-886, 0x1.6885d74b43099p-214, 0.0, 0.0, 0.0,
     0x1.573e165fbf2f7p-872, 0.0, 0x1.d0ad5580a03e2p-775, 0.0,
     0x1.97e5be23bf869p-1009, 0x1.beb320117a80dp-240, 0.0, 0.0,
     0x1.2b2bf3d462e09p-989, 0.0, 0x1.a66d5abfc691cp-317, 0.0, 0.0, 0.0,
     0x1.32b8fcf5074ep-207, 0.0, 0.0, 0.0, 0x1.b5149e9df1448p-190, 0.0, 0.0, 0.0,
     0x1.665d4baee1d89p-312, 0x1.c74b385b8a21p-685, 0.0, 0x1.abacc1becbe35p-748, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8f1e9515ba006p-33, 0x1.c21bc5ae4198ap-855,
     0x1.68a832be625d6p-41, 0x1.ff41c52e70746p-500, 0.0, 0.0, 0x1.eb549271613ep-571,
     0x1.5473f50736358p-306, 0x1.f0c33f90dd12dp-241, 0.0, 0x1.0ebb1e8a3438ep-897, 0.0,
     0x1.98e8c804b2894p-987, 0.0, 0x1.e18fd0730eacp-855, 0x1.3433fd68a747cp-57, 0.0,
     0.0, 0x1.21ca9e87bccf5p-588, 0.0, 0x1.272235e9f464p-211, 0.0,
     0x1.45571de3b6f1ap-64, 0x1.a450bb319d551p-140, 0x1.53d0ec25f3117p-671,
     0x1.bc75aaae1f0adp-766, 0x1.c78aca17f12b8p-811, 0.0, 0x1.4ac40eb5985fbp-902
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincospid4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincospid4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid4_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
