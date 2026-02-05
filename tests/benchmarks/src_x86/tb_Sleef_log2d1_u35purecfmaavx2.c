/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d1_u35purecfma.c --function \
 *     Sleef_log2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7692ba2b7e396p-967, 0.0, 0x1.f9e278d2ea52p-243, 0x1.3b81449774779p-77, 0.0,
     0x1.cf5d4ac26c0afp-353, 0.0, 0x1.af4f02f1e14dep-399, 0x1.708c3b53f394dp-365, 0.0,
     0x1.5fc0f1d6de28fp-655, 0x1.e2a232db7b9cdp-931, 0.0, 0.0, 0.0, 0.0,
     0x1.d7dcb70bf468p-875, 0x1.057a81ea3d39dp-582, 0x1.2efba42b595bfp-208, 0.0,
     0x1.4c60833c03c32p-952, 0.0, 0x1.5f438be5de969p-616, 0.0, 0.0,
     0x1.f14e58c98214cp-358, 0x1.b241fe2c04ce4p-456, 0x1.9a10ab7081a33p-839, 0.0, 0.0,
     0.0, 0.0, 0x1.1afc61d2f2a31p-441, 0x1.b3bc38c5014dbp-732, 0x1.8c5d71905bfb5p-530,
     0.0, 0x1.45dab6b9712e8p-131, 0.0, 0.0, 0.0, 0x1.291131da7ed0dp-956,
     0x1.ef7f5f3f0b41bp-53, 0x1.48c44c06d14b7p-322, 0.0, 0.0, 0x1.e9af4a923f39ep-204,
     0.0, 0.0, 0x1.b05e93a5035b4p-849, 0x1.c8dae604b9ccfp-760, 0x1.8edd6a62594bcp-160,
     0x1.76a3219288064p-596, 0x1.3d12097f21ad6p-949, 0.0, 0x1.24cf734f05d04p-515, 0.0,
     0x1.f9dd8715dad3cp-808, 0x1.77710aa983a5p-1004, 0x1.cdef8e07015c7p-309, 0.0, 0.0,
     0x1.e2abd9e18e1a9p-294, 0.0, 0.0, 0.0, 0x1.52f896ec1041bp-976,
     0x1.ad176588d049ep-385, 0.0, 0x1.42be158c64e16p-742, 0.0, 0x1.7223d83674945p-292,
     0.0, 0.0, 0.0, 0.0, 0x1.3c515f183f3bdp-697, 0x1.3f1354d51b838p-699,
     0x1.41b3cdd4c278dp-435, 0.0, 0.0, 0.0, 0x1.eec96873e3b6cp-906,
     0x1.61da1b8607c68p-955, 0x1.f9dfe387a0dbfp-441, 0.0, 0x1.32990353d82d7p-846, 0.0,
     0x1.19d9d8aa10be1p-352, 0x1.fb5546d9168c8p-10, 0x1.ffa08253b731cp-571, 0.0,
     0x1.9c7cc0355443dp-285, 0.0, 0x1.e2b0e54d9dde5p-927, 0.0, 0.0,
     0x1.ff6ff33469327p-431, 0x1.e8bc8c8df80b7p-527, 0.0, 0.0, 0x1.ddca899d8022cp-434,
     0.0, 0x1.9638c21a39eecp-917, 0x1.5840ca6a7ff97p-839, 0x1.304b0388c8e61p-137, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a78f72ad8a438p-652, 0x1.864cbc8873289p-701,
     0x1.46bd3cc6388f5p-354, 0x1.310360663b733p-53, 0.0, 0x1.cb2f2ac42d658p-538,
     0x1.eab36c96e59e8p-29, 0x1.93130267eb1aap-672, 0x1.37f35f5bbec7fp-697,
     0x1.6decafe96fcc6p-461, 0x1.b1c36b4ab3547p-580, 0.0, 0.0, 0.0,
     0x1.85a3c519aa864p-321, 0.0, 0x1.f5341c837a4c6p-53, 0.0, 0.0, 0.0,
     0x1.6b685a2399cbbp-384, 0.0, 0x1.0fffde4cd0ddep-953, 0.0, 0x1.f6835ceffffccp-799,
     0x1.ddf4e0de50d98p-804, 0.0, 0x1.9ad620c4e90ap-380, 0.0, 0.0,
     0x1.ac47d0081502ap-206, 0x1.28c51ff7dfe7bp-633, 0.0, 0x1.894d57330d4cp-123,
     0x1.954586624ee47p-677, 0.0, 0.0, 0x1.a011ba04904f4p-1006,
     0x1.2eee6fe05a1e8p-431, 0x1.e15af11989929p-533, 0.0, 0x1.a5a7700a89db2p-899, 0.0,
     0.0, 0x1.d181d1cecf68cp-45, 0x1.c218eb8a3ac2ap-223, 0x1.0da8186a54b4ep-655,
     0x1.a48c553a3392dp-731, 0x1.7262eb546b73ap-723, 0x1.df9ae81ec18cfp-861,
     0x1.dc1e0ddb30122p-457, 0.0, 0.0, 0x1.0c0c4ae7d111ap-735, 0.0,
     0x1.e41ad72963a33p-339, 0x1.fc0de7f6bd92cp-226, 0x1.4b1047fabdaep-473, 0.0, 0.0,
     0x1.a90408ab54198p-1011, 0x1.a3706c739500ep-803, 0.0, 0x1.c76c7ab33e566p-1008,
     0.0, 0.0, 0x1.a151c4b3c6399p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.932f33ff702d7p-59, 0.0, 0x1.0345403bf9d21p-509, 0x1.17b9660f74971p-860, 0.0,
     0x1.e9bb5eb172811p-934, 0.0, 0.0, 0.0, 0x1.39052fd5ee777p-870, 0.0,
     0x1.782d1cf269575p-609, 0.0, 0.0, 0x1.f13aa7bd1691cp-579, 0x1.cd1d5ffc9a643p-323,
     0.0, 0x1.709a35ca685dep-317, 0x1.318440abd8b13p-506, 0x1.6342bb6fe1d06p-29,
     0x1.7a72978423b5ep-929, 0x1.f3ad4b48d8398p-681, 0.0, 0.0, 0.0,
     0x1.d71f212d7ea34p-26, 0x1.6cf94e67ad4b8p-317, 0x1.29bc85bb0f1ep-640, 0.0,
     0x1.d2dd1fc2a6449p-838, 0.0, 0.0, 0x1.1379537cd7011p-659, 0x1.8a34cf18b4034p-267,
     0x1.ca9555fde338bp-781, 0x1.b0185cff44abfp-840, 0x1.b143501267a6ap-222, 0.0,
     0x1.70afebcbd3b84p-756, 0.0, 0x1.807ed82d07c31p-223, 0x1.7f478c7f14a71p-53,
     0x1.cb9970b2b7cd4p-126, 0x1.21d091eadc875p-268, 0x1.388895bafef6ap-646,
     0x1.5887b2ae77dc8p-877, 0x1.abdb3e5ff9bc8p-427, 0x1.fd33af41a34f9p-54, 0.0,
     0x1.66fed28e62c98p-849, 0.0, 0x1.a13c636a3f53ap-744, 0.0, 0x1.a59efa56355ap-645,
     0.0, 0x1.7ef8a43fdc913p-830, 0.0, 0.0, 0x1.99ffe7e528c28p-580, 0.0, 0.0, 0.0,
     0.0, 0x1.3984d703f43d1p-914, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7529d2702b6bp-449,
     0x1.a12df681d854bp-645, 0.0, 0.0, 0.0, 0x1.7ebe3d025ed6ap-486, 0.0,
     0x1.424534e7e3ac8p-33, 0x1.f5d82f5b9b09p-183, 0.0, 0x1.7d6a02dfe673fp-924, 0.0,
     0.0, 0x1.aec54bedc3408p-1005, 0.0, 0x1.d203fe3e9c581p-238, 0.0, 0.0,
     0x1.1e727eafbf3a2p-128, 0.0, 0.0, 0.0, 0x1.f39b28049ee44p-844,
     0x1.e1a0b5442b75dp-666, 0x1.3c8fbd956840ep-635, 0x1.78e93164ba7fp-205, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2efe83faca2fep-838, 0.0, 0x1.202bd44153496p-67, 0.0, 0.0, 0.0,
     0.0, 0x1.8fa9775e42f59p-870, 0.0, 0.0, 0x1.50a4289bf14b5p-915,
     0x1.dec9a3c824b47p-35, 0.0, 0x1.85dbdbbf1321fp-15, 0.0, 0.0, 0.0,
     0x1.c7332bdc22f13p-980, 0x1.73842def1f528p-808, 0x1.c4fa03492e26ep-417,
     0x1.ba2d36d363dfep-325, 0x1.54264d1f7ef9ep-364, 0x1.414b110bbe974p-630,
     0x1.81117391866f6p-604, 0.0, 0.0, 0.0, 0x1.f29a9dd59799fp-49,
     0x1.c24d5c9cbdf7bp-280, 0x1.fffca1edaad97p-597, 0x1.8ed02ce78545ep-173, 0.0,
     0x1.7acce69c32a75p-355, 0.0, 0.0, 0x1.e58fea0094886p-493, 0x1.a89f28182a5aep-73,
     0.0, 0x1.13eb3152119e8p-16, 0x1.2abe24639c45ap-54, 0x1.3d04827f51548p-129,
     0x1.08ad5886f447bp-184, 0.0, 0x1.67b0be447d585p-772, 0x1.de88384bd63cfp-621, 0.0,
     0x1.827d71c6d111p-417, 0x1.47a64c29e55e9p-851, 0.0, 0.0, 0x1.be8e32ded04a7p-943,
     0x1.a9db369a306dcp-120, 0x1.1ff0557280eb1p-727, 0x1.30d5edb6bc089p-986, 0.0, 0.0,
     0x1.5628f4a1bea39p-703, 0.0, 0x1.bab7ff0117b98p-641, 0x1.aee0e8a1dce3cp-907, 0.0,
     0x1.aeb4510129ad6p-440, 0.0, 0.0, 0.0, 0x1.2b8cd58966116p-564, 0.0,
     0x1.29a0cd90c7821p-838, 0x1.b49850591eaffp-921, 0x1.5f9aae34fb0b5p-517,
     0x1.33dadaf95304fp-322, 0.0, 0x1.7d9d6451692a5p-877, 0.0, 0.0,
     0x1.273b09339d93ap-83, 0x1.e1eb8132d614dp-166, 0.0, 0.0, 0x1.5f238597785dfp-637,
     0.0, 0x1.89ff776542ee3p-271, 0.0, 0x1.5b674c596cc05p-849, 0.0,
     0x1.3387c1c95fbb8p-972, 0x1.d3c7e4b1a799ep-384, 0.0, 0.0, 0.0,
     0x1.8c81f7ea634edp-629, 0.0, 0x1.be8f18d06e0fp-926, 0x1.68b27815df185p-309, 0.0,
     0.0, 0x1.f0e8829b55b2fp-720, 0.0, 0x1.4c0809f0cb9aap-335, 0.0,
     0x1.4c5841c3af667p-999, 0x1.2873d50d87566p-657, 0x1.4aff632e9c3c2p-202,
     0x1.a5d631d8c25aap-229, 0x1.949c30057f513p-638, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.499bb88b8bbb9p-278, 0.0, 0x1.e1daf4bc79623p-258, 0.0, 0.0, 0.0,
     0x1.35170a5d14d36p-760, 0.0, 0x1.acc7cefcac612p-225, 0x1.308e1d5b8522ap-260,
     0x1.fefa562e3d3c9p-712, 0x1.09640467c7ca5p-422, 0.0, 0x1.d88d648ae77bep-698,
     0x1.d3fa17ca8aaccp-875, 0.0, 0.0, 0.0, 0x1.013805fff53c6p-19,
     0x1.cb23d3d630bb4p-443, 0x1.999e8851f6646p-823, 0x1.211cadb288689p-893,
     0x1.2c130e175e5cdp-732, 0.0, 0.0, 0.0, 0x1.5751372210878p-118, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4fa981ae4d8d1p-404, 0x1.f75f1be61340ep-441, 0.0, 0.0, 0.0,
     0x1.db784544bbeap-61, 0x1.e4c6717f488f9p-959, 0x1.d922515d6f0cep-503,
     0x1.ab47ff37243e2p-160, 0.0, 0x1.c1f48f2c1dadfp-22, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b540f5a79c1bp-157, 0x1.d743cbfd7e61bp-114, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b52e3f51eda65p-991, 0x1.cce132b628d4p-906, 0.0, 0.0, 0x1.b2566c457356ep-693,
     0x1.cfe37c978e40cp-697, 0.0, 0x1.435d08708e6e4p-138, 0x1.ca04fc3b5f088p-418,
     0x1.ee4f99bdcd66fp-506, 0x1.d7dd27677edc2p-205, 0.0, 0.0, 0x1.8f62360b62e95p-105,
     0.0, 0.0, 0.0, 0.0, 0x1.469885478c422p-9, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6c2ac5389824p-186, 0.0, 0x1.e9aedd2c24dc2p-458, 0x1.8414df566d2bdp-292,
     0x1.0346b670a7d56p-142, 0.0, 0x1.4ab044e46ae7bp-235, 0x1.74991c5e249a7p-595,
     0x1.c7c21c300dee3p-306, 0x1.ec2b1226c2d73p-634, 0.0, 0.0, 0.0,
     0x1.58a3f9a4dfb58p-744, 0.0, 0.0, 0x1.3cf5f1de16abep-40, 0x1.a73ba829623cep-944,
     0.0, 0.0, 0.0, 0.0, 0x1.2801f4e350213p-489, 0.0, 0x1.709acc74d7396p-214,
     0x1.38d41dad815eap-384, 0x1.34caa2ca49e48p-550, 0.0, 0x1.d0d3afefd9382p-232,
     0x1.d94060b493fc7p-469, 0.0, 0x1.45fdcadb3bd87p-643, 0x1.530121b68894dp-919,
     0x1.b4edcd6c865c7p-454, 0x1.b60a012b12d88p-568, 0.0, 0x1.309bfeaa13843p-593, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1676a3d095adp-715, 0.0, 0x1.052b9fa9f886ap-590, 0.0,
     0x1.cd512bf65d2eep-5, 0x1.0d1438e7e0448p-312, 0x1.b6d471acf1ffp-898, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8487d236cb301p-203, 0x1.4700ec30ed353p-92,
     0.0, 0x1.4cb58d088f5e1p-948, 0x1.bf4c17fe0977dp-34, 0x1.729810a933377p-118, 0.0,
     0.0, 0x1.b1ba33717902p-355, 0.0, 0x1.9ac1a1c9eed69p-827, 0x1.fcf56a2cb4c8fp-609,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc01ec1622e48p-386, 0.0,
     0x1.3446f58c9b85dp-112, 0.0, 0x1.7824c97cc520cp-575, 0.0, 0x1.57e55a035115fp-773,
     0.0, 0.0, 0.0, 0x1.d17e56e0f6131p-352, 0.0, 0x1.1eee8ebd22203p-221, 0.0, 0.0,
     0x1.cf54412bfe952p-97, 0.0, 0.0, 0x1.95d3269db1f9fp-25, 0.0,
     0x1.8c5ad17b89891p-729, 0x1.3866338b364a1p-637, 0.0, 0x1.6e3b911427df1p-150, 0.0,
     0x1.d85eae8906b69p-681, 0x1.3941e0c2076fbp-213, 0.0, 0.0, 0.0,
     0x1.b92b540553cc1p-605, 0x1.7a7cb0789e3ddp-423, 0x1.f91810b45c1c6p-696, 0.0, 0.0,
     0.0, 0.0, 0x1.c581539fffa2cp-652, 0.0, 0x1.fe7bee3271edep-880, 0.0, 0.0, 0.0,
     0x1.404f307a4111p-879, 0.0, 0.0, 0x1.0491d7656b516p-216, 0.0,
     0x1.62699b6d4ff1bp-276, 0x1.1f65e532a4a64p-401, 0.0, 0.0, 0.0,
     0x1.8954d81c513dbp-67, 0.0, 0x1.ff9240195d27bp-488, 0x1.7bbd1698ccb97p-435,
     0x1.9140b4eafc80fp-260, 0x1.d66168f03be73p-923, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba7661524924ap-477, 0.0, 0x1.f4847cae9b575p-522, 0x1.8156b0dcaf568p-663,
     0x1.6feb171251586p-769, 0.0, 0x1.3de6626dc7443p-355, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.44c4c297e5465p-245, 0.0, 0.0, 0.0, 0x1.37d421e0ba27ep-991, 0.0,
     0.0, 0x1.35a4c8f475ebep-190, 0x1.82e6c0c5b2647p-716, 0x1.8e51639a05a94p-981,
     0x1.d3b69d898987p-262, 0x1.a4c74283cb664p-578, 0.0, 0.0, 0x1.8cc8a786e0034p-977,
     0.0, 0x1.ea7db0b765d9fp-917, 0.0, 0x1.6a95a16124bf3p-517, 0x1.8e9009ce813e6p-743,
     0.0, 0.0, 0x1.b410f152800f9p-809, 0x1.85e925d26ded2p-951, 0x1.ac6610f066085p-652,
     0x1.c1d43180755fdp-267, 0x1.9cad8b85daf71p-396, 0.0, 0.0, 0x1.70bd1e836529fp-813,
     0.0, 0x1.6a622553e94f9p-643, 0x1.91cc82401ad34p-867, 0x1.99e865fa08c5ep-1,
     0x1.bc88174773315p-843, 0x1.07d9efe6bf48cp-474, 0x1.e480e4a58f878p-819,
     0x1.ed1684872987p-546, 0x1.55eca78705956p-237, 0.0, 0.0, 0x1.3e014f6fc7eeap-891,
     0x1.5893c96d7d77ap-862, 0.0, 0.0, 0x1.944903b2c7757p-76, 0.0, 0.0,
     0x1.6966b181e70bdp-28, 0.0, 0x1.5945467fdbbadp-813, 0x1.854ffa623ca96p-540, 0.0,
     0.0, 0x1.56b6b1cd804bp-131, 0.0, 0x1.3b6d75d8d10fep-173, 0.0,
     0x1.e3a47ec2c4c5p-616, 0x1.e2ab98a4970f8p-274, 0x1.15996856100a8p-579,
     0x1.7f7c7d95aa9cp-755, 0x1.8db7259dbd98cp-668, 0x1.4cf10a71326e8p-1012,
     0x1.9ed0e76353e2ap-215, 0x1.d0df16265769bp-545, 0.0, 0.0, 0.0, 0.0,
     0x1.73ae0afed2eeep-379, 0.0, 0.0, 0.0, 0x1.9bd06e658192fp-551,
     0x1.a98331f747eaep-1004, 0.0, 0.0, 0x1.18d09f1009379p-1022,
     0x1.5b3f5613ba926p-530, 0.0, 0x1.b37b89b964777p-987, 0.0, 0x1.22c6038c9ae1cp-64,
     0x1.eee57d203680bp-291, 0x1.18a1fdc9dc5a3p-517, 0.0, 0.0, 0x1.7fd7a6fb9675dp-356,
     0.0, 0.0, 0x1.7eb4326ddc5d9p-804, 0x1.748c066e76ae8p-751, 0.0, 0.0,
     0x1.5a5f4c569f6cfp-606, 0.0, 0x1.13c0531e8097fp-66, 0x1.d6222f7a1236cp-955, 0.0,
     0x1.fd6c26fd2c68fp-787, 0.0, 0.0, 0x1.d2d3bebbd8a7cp-175, 0x1.72111a76f7ecep-956,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8eb7fd4542043p-790, 0x1.6b1c5b7ac128ap-851, 0.0,
     0.0, 0.0, 0x1.4d91261e3ce25p-141, 0x1.21b40c90d5ec5p-156, 0x1.35cb7a773c2d8p-100,
     0.0, 0x1.6a4ccaadff642p-349, 0.0, 0.0, 0x1.80f6a54139235p-6, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e53deebe8084cp-960, 0.0, 0.0, 0.0, 0.0, 0x1.ad747fdad449fp-219,
     0x1.f85aa3436f1e9p-97, 0x1.baa7190c00c0bp-424, 0.0, 0.0, 0x1.a18e7ebf91ce1p-304,
     0x1.9632c87aac5cfp-514, 0x1.b95e42351ff03p-616, 0x1.035d68c718cddp-959,
     0x1.05b8b8e7014eap-717, 0.0, 0x1.053cc20939b6fp-816, 0.0, 0x1.cb54845eb8e07p-79,
     0x1.8a22ed14f0019p-701, 0x1.e92b32fb29452p-938, 0.0, 0.0, 0.0,
     0x1.7af280d73e5e3p-925, 0x1.2837efb3fe3f6p-118, 0x1.35f79d40edf2bp-957, 0.0, 0.0,
     0.0, 0x1.59126a863f80cp-537, 0x1.83837967ccfcbp-800, 0x1.86cd350287ad8p-470,
     0x1.837e2dc42c19cp-268, 0x1.67874ce7ca136p-766, 0x1.d00fedfda90abp-156, 0.0,
     0x1.5e038975dcc5fp-339, 0x1.5dfa2edb65eccp-246, 0.0, 0.0, 0.0, 0.0,
     0x1.bb5468eed0603p-877, 0.0, 0x1.175bd3f7d0b33p-884, 0.0, 0x1.6eca4c90d7303p-400,
     0x1.bb9fe9923432bp-647, 0.0, 0.0, 0x1.0dccdae6d7f7cp-605, 0.0, 0.0, 0.0,
     0x1.8c6b88cabca4ep-835, 0x1.3ce605261720ep-345, 0x1.2e8a6d364e8d6p-650,
     0x1.15b739fac9b19p-576, 0.0, 0.0, 0.0, 0x1.a812e1c350b2p-996, 0.0, 0.0, 0.0,
     0x1.63490c21c2348p-579, 0.0, 0x1.fb2449e1e0ef4p-233, 0x1.b7c5656b38803p-499,
     0x1.99ea078576c39p-622, 0x1.b1f5244c5ecdap-362, 0.0, 0.0, 0.0,
     0x1.0b9f6a76383a4p-857, 0.0, 0.0, 0.0, 0x1.ae4af9d7e905p-494, 0.0, 0.0, 0.0,
     0x1.8ce6c3b53d35fp-50, 0.0, 0x1.29e39251ac13cp-391, 0.0, 0x1.a9f7a16c691edp-783,
     0x1.c2c15469cdfa1p-713, 0x1.047371f98543p-49, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.531eb48b6caf7p-728, 0.0, 0.0, 0x1.4dc647f6dcc1fp-409,
     0.0, 0x1.fa58c9fbc23f4p-844, 0x1.78694fcc1dc2p-16, 0.0, 0.0,
     0x1.490d46e8dfdc6p-437, 0x1.69b44b3903671p-924, 0x1.4091c10a956ap-653, 0.0,
     0x1.26a45ead4ad9cp-493, 0.0, 0x1.f04114fcdc206p-921, 0.0, 0.0,
     0x1.dd68791600709p-946, 0.0, 0.0, 0x1.3817386219c3bp-956, 0x1.3fb122a50f6b3p-534,
     0x1.80c2366a47f3ep-1009, 0x1.8bab8db4c6032p-814, 0x1.13b4e544c9682p-860,
     0x1.edca06abfd229p-627, 0.0, 0.0, 0.0, 0x1.656f113c99f25p-503, 0.0,
     0x1.bdd62fe606a19p-36, 0.0, 0.0, 0.0, 0x1.48254a8bd28f2p-115, 0.0,
     0x1.ae6ac2bc30494p-739, 0.0, 0x1.52809d1713557p-857, 0x1.98896e9773e07p-958, 0.0,
     0.0, 0.0, 0x1.f2f2c96ff3fa9p-881, 0x1.60ba9f9a1b9c5p-312, 0.0,
     0x1.a2af732f0bd0fp-757, 0.0, 0x1.e6a49dbfd839ap-72, 0x1.bb4cb96c14e39p-460, 0.0,
     0.0, 0.0, 0x1.e4c8840f8e71bp-332, 0.0, 0x1.7a122170297bp-305,
     0x1.2671dc183920dp-232, 0x1.91384529589e6p-548, 0x1.55c1ce79463b6p-376, 0.0, 0.0,
     0.0, 0x1.431fdc6aac44ep-144, 0x1.9851eae63b079p-585, 0.0, 0x1.0c1e271bfa536p-95,
     0.0, 0x1.41aa54daeeffep-792, 0x1.81611ffd1f255p-375, 0x1.87ce16b498e06p-51,
     0x1.d7edc32fc0a1cp-877, 0x1.109147b1919a6p-851, 0x1.622ffc23246f6p-511,
     0x1.7dc74115dfaa5p-965, 0x1.50120d64a4781p-311, 0.0, 0.0, 0x1.1251bb96d4358p-411,
     0x1.8a01baa696defp-862, 0.0, 0x1.3fc71b422aa4ap-296, 0.0, 0.0,
     0x1.a7b70db8dfa13p-663, 0x1.3333600d5f0d5p-611, 0.0, 0x1.5380117ccab0dp-121,
     0x1.2ad2b7723c7dap-306, 0x1.add7b3e3047a4p-513, 0x1.4b68297393813p-260, 0.0,
     0x1.ffcf8840a8f8p-728, 0x1.36756dd710ca6p-516, 0x1.ce40979cbec31p-697, 0.0, 0.0,
     0x1.b2de7d69f6925p-826, 0x1.469b1f78604c4p-160, 0x1.81f52ac2cc31bp-665,
     0x1.c68c9ea19f14ep-357, 0x1.7b8cb6df4583ep-251, 0.0, 0x1.ef7003f138b1ep-918,
     0x1.daf4c89d5dad7p-109, 0x1.b59102ebd3fc6p-146, 0.0, 0x1.ea67f156eaa2fp-755,
     0x1.5f358188b649p-989, 0.0, 0.0, 0x1.9baba76a9e489p-234, 0.0, 0.0,
     0x1.3e8d29eaf5476p-170, 0.0, 0.0, 0.0, 0.0, 0x1.aa75c494d11a2p-96, 0.0, 0.0,
     0x1.025eebb37d52ep-52, 0.0, 0x1.0772339bbafe4p-757, 0x1.9e6f80e27114dp-99,
     0x1.0fc734f10379ap-911, 0x1.a724aabd1425cp-225, 0.0, 0x1.cd374bcec2714p-164, 0.0,
     0x1.6ae58034d8528p-513, 0.0, 0x1.f7f3a92da716bp-1022, 0.0,
     0x1.acd707e8aa904p-322, 0.0, 0.0, 0x1.4de3b3f8c69cfp-265, 0x1.c1525de0966c6p-118,
     0.0, 0.0, 0x1.086a1555003f8p-937
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
    
    global_bench_acc = 0.0;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_log2d1_u35purecfma(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_log2d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
