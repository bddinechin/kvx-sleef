/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd1_u10purecfma.c --function \
 *     Sleef_sincosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.19c9c1f200064p-519, 0x1.385d5bde3aacbp-122, 0.0, 0.0,
     0x1.d52f91b6210c7p-168, 0.0, 0x1.bdeb6ed79eb03p-997, 0.0, 0x1.6c9e0dbd4bcd6p-782,
     0x1.5c21f49a858fp-237, 0x1.0cec5d52dee14p-830, 0x1.e39dcfb70959bp-746, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b47e558beed9dp-546, 0x1.3f135c76677a7p-881,
     0x1.3f92b9571cf78p-195, 0x1.7ffe2ffdc9af8p-963, 0x1.45e72488b619p-611,
     0x1.00f9276e5962p-223, 0.0, 0.0, 0x1.193f9d840a3fcp-355, 0x1.90b2024731a0dp-629,
     0.0, 0.0, 0.0, 0x1.ab294a26aacbcp-382, 0x1.c7f173fbbe544p-249, 0.0,
     0x1.c9148c1418eefp-387, 0x1.25aaa809f551ep-203, 0x1.6a5a060435c09p-593, 0.0,
     0x1.cafa6b26f306p-577, 0x1.2def9adcb7319p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.1b16bd5913ca1p-1, 0x1.60708075955cap-22, 0.0, 0.0, 0.0, 0.0,
     0x1.ca80fd941f688p-250, 0.0, 0.0, 0x1.98eaf6bf53d98p-6, 0.0,
     0x1.678092a47bbfp-638, 0.0, 0.0, 0.0, 0x1.8d5f1b4d1d1afp-389, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2e740555d88e4p-1001, 0.0, 0.0, 0x1.6a2a41a4926d2p-315, 0.0,
     0x1.5c4ef7d3c3056p-786, 0.0, 0x1.ed998f8fddf64p-977, 0x1.028a2e535cef3p-256,
     0x1.22c8bf861aa0bp-926, 0.0, 0x1.7786eabe913aap-771, 0x1.8f2a8eaafc136p-462,
     0x1.3d9a63ce3148dp-736, 0x1.e0f212b35a6a4p-581, 0.0, 0x1.4b0f3ca9dcabfp-720,
     0x1.7ff5226278006p-472, 0x1.02b17619595b2p-772, 0x1.465f364b71c9ep-402, 0.0,
     0x1.cf1a81535d1e8p-332, 0x1.10d8d239f1fd2p-434, 0.0, 0x1.f09b12edd430fp-860, 0.0,
     0.0, 0x1.c3a0d36d890fep-84, 0x1.f555335f80125p-312, 0.0, 0.0,
     0x1.13d1eb5015d6p-661, 0.0, 0.0, 0x1.f7b6ed32b63fep-432, 0.0,
     0x1.cfb9b93b4f2f2p-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.967ae3ab5e9a8p-18, 0x1.331a3c862e058p-740, 0x1.220b4728411fap-900,
     0x1.73dc061591b42p-448, 0x1.e8a7b533d5e66p-442, 0x1.dbb716779aa2ep-685,
     0x1.bd1dffec06795p-573, 0x1.c11a1d58437fap-548, 0x1.6faf1c3ec20e4p-739,
     0x1.95bd6486740d2p-560, 0.0, 0x1.21139e3734dafp-855, 0.0, 0x1.02a857775407dp-566,
     0.0, 0x1.d4f14417c32ap-243, 0x1.dbcebcf2a1125p-221, 0.0, 0.0, 0.0, 0.0,
     0x1.20f15181be1ccp-279, 0.0, 0x1.3b33bf2c59005p-281, 0x1.ac1c0327a85d7p-322,
     0x1.5c68830fc7c9cp-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df5d65e5c868p-1016,
     0x1.84366d18e2d17p-776, 0x1.0faf757ada18ap-485, 0x1.b4d79502ddfafp-516,
     0x1.3e751b1bc1db9p-601, 0x1.f84f120646555p-373, 0x1.138d7ade398d4p-378,
     0x1.d62e6a918b088p-929, 0.0, 0.0, 0x1.ae9fd61e152b4p-421, 0x1.11e592c9f394bp-94,
     0.0, 0x1.8b32934b1c94ep-707, 0x1.d79fc63174e6fp-71, 0.0, 0x1.834c1d8d0b4c2p-647,
     0x1.a6f1b8987c3c6p-148, 0.0, 0x1.900cfc94116eap-869, 0.0, 0x1.8b306693db6f1p-88,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07d7859917496p-38, 0x1.7d29178b49082p-720, 0.0,
     0.0, 0x1.c46c2fbe4f8afp-224, 0.0, 0x1.71e7daddb4f01p-80, 0.0, 0.0, 0.0,
     0x1.c3bb2138e1ddp-467, 0.0, 0.0, 0.0, 0.0, 0x1.628a12d34a42p-864, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e297ee2a6e10fp-341, 0x1.b77556046fc2cp-250, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.61fe11a2bc1dbp-272, 0x1.a5b88851213fep-678, 0.0,
     0x1.df2110c04ebadp-515, 0.0, 0.0, 0x1.cf3f5be5fbcf9p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.b06e1ef890ab7p-234, 0.0, 0.0, 0x1.2dfb671df3cfep-551, 0.0,
     0x1.ac744d5c40fc1p-959, 0x1.168e45af0a5bcp-6, 0.0, 0.0, 0.0,
     0x1.8039bd3e741c7p-746, 0x1.b2e2e81dc09c7p-280, 0x1.8927d8341a114p-374, 0.0,
     0x1.b31787db035bap-879, 0x1.ca82098232aeap-710, 0x1.44f910fc4b953p-716,
     0x1.f87ed8001638cp-128, 0.0, 0.0, 0.0, 0x1.2a7ea3ce5705ep-160, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bb44ea3bcba9ep-792, 0x1.79b3724f584b5p-826, 0.0, 0.0,
     0x1.ea437cbb3526dp-309, 0x1.8378db44213a2p-187, 0x1.f20c3b3a62625p-332, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.42f3a638f4e33p-880, 0x1.a1f2bce555df5p-223, 0.0, 0.0, 0.0,
     0x1.e5552972889bfp-793, 0.0, 0.0, 0.0, 0x1.8dc63bfc4b0acp-479, 0.0, 0.0,
     0x1.80389525114f9p-475, 0.0, 0x1.25ab54a19bbd6p-202, 0.0, 0x1.2a6e7c1a46fcdp-992,
     0x1.8446e17b0ade9p-850, 0.0, 0.0, 0x1.3310c50ef66f7p-608, 0.0,
     0x1.4b2fc77c58b74p-233, 0.0, 0.0, 0x1.b6e80f4c675dp-541, 0x1.b3664a3a2409bp-288,
     0x1.d12c4327aa7a9p-326, 0.0, 0.0, 0x1.db539bffe271dp-279, 0.0, 0.0,
     0x1.0275eb1429e75p-666, 0x1.f9eee934612c8p-422, 0x1.6fea796b46b6dp-356, 0.0,
     0x1.ee82c740a117cp-593, 0.0, 0.0, 0.0, 0x1.28b35bc047beap-584, 0.0, 0.0, 0.0,
     0x1.faadb7e753d13p-768, 0x1.a1fb95acbdaf7p-478, 0.0, 0x1.85bf4f06cba51p-123,
     0x1.27e8aaaac20e7p-364, 0.0, 0x1.b3149bb416418p-1017, 0.0,
     0x1.822df8ce4694ap-1015, 0x1.f03d257791d19p-377, 0x1.10054101015b2p-547, 0.0,
     0.0, 0x1.c11cd4be7ac97p-595, 0x1.ba045db4b0b9fp-750, 0x1.cf9e8de5d30a3p-132, 0.0,
     0x1.a14da41edf183p-647, 0.0, 0x1.3e7b44db40dbep-617, 0.0, 0.0, 0.0,
     0x1.d1aafe1dec589p-175, 0x1.67c0d9294491ep-500, 0.0, 0.0, 0x1.687e26a2a76b9p-410,
     0.0, 0.0, 0.0, 0x1.c373969a17235p-677, 0x1.6f248d5d86245p-184, 0.0, 0.0, 0.0,
     0.0, 0x1.07a062aeb0c55p-428, 0.0, 0x1.f03f0b6d85fcbp-893, 0.0,
     0x1.3de008e3ced3cp-680, 0.0, 0.0, 0x1.3d63352f4f3d8p-978, 0x1.0374b257e7536p-142,
     0x1.6049b8079a1cep-248, 0.0, 0.0, 0.0, 0.0, 0x1.d3a9506b4343cp-771, 0.0, 0.0,
     0.0, 0x1.0730f6bd1f9f3p-537, 0x1.40f011c2dde0bp-365, 0x1.ecb926a5a6bdep-342,
     0x1.6e257029cf72dp-832, 0.0, 0.0, 0x1.896e47f6399bbp-359, 0.0, 0.0,
     0x1.825347992d071p-863, 0.0, 0.0, 0x1.d777fae169c27p-990, 0x1.a771052fb1f4dp-647,
     0x1.ac0bb34992d9dp-213, 0.0, 0x1.b17756f15e3e6p-950, 0x1.6b86293cf131bp-730,
     0x1.8372d28179bbfp-339, 0x1.9fb621ee04538p-697, 0x1.1093a091bc594p-410,
     0x1.ac58148c6cde6p-367, 0.0, 0.0, 0.0, 0x1.5c3c71e45954cp-439, 0.0, 0.0,
     0x1.4bfffb81a3b49p-668, 0x1.4f2bb54cfc4bbp-60, 0x1.b610f94e05976p-17,
     0x1.4ef6722b548e8p-13, 0.0, 0.0, 0.0, 0x1.070d75b45c634p-188,
     0x1.1c89b7a8704a2p-694, 0x1.6c0a236813ef8p-870, 0.0, 0.0, 0x1.18e6b8351024fp-233,
     0x1.b3063f4a09a72p-241, 0.0, 0.0, 0.0, 0.0, 0x1.d9cafb13314bdp-494, 0.0,
     0x1.4b8ec99e919e4p-156, 0x1.4f33b961ab8b6p-1019, 0x1.fcb9509b69e61p-486, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd98905ea983p-220, 0.0, 0.0,
     0x1.f481604d75e4bp-104, 0.0, 0.0, 0.0, 0.0, 0x1.d3397b04601ffp-474, 0.0,
     0x1.0f2d478a5262ap-961, 0x1.d9e61725be698p-761, 0.0, 0x1.937f55b8b0755p-174, 0.0,
     0.0, 0x1.34b9daa21dad5p-847, 0.0, 0x1.446096649027dp-979, 0.0,
     0x1.2afb286b7e004p-250, 0x1.46c6ac5f0d5bbp-396, 0.0, 0x1.d5316d2794a21p-871, 0.0,
     0x1.49fcd3031b519p-240, 0x1.24527f933c19fp-642, 0x1.4d3c00a98da18p-92, 0.0,
     0x1.5184e1291f003p-234, 0x1.b13701e7680b9p-989, 0.0, 0.0, 0x1.20568dca5ae8cp-439,
     0x1.9129b200c5c8cp-818, 0.0, 0.0, 0.0, 0x1.4546924e22ccap-711, 0.0,
     0x1.833780b639039p-14, 0x1.08fb698397261p-512, 0x1.585528dba924dp-72, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b99bca9fae4dfp-181, 0.0, 0.0, 0.0,
     0x1.6f012ba3c90d3p-78, 0x1.4fdc23bb2352ep-881, 0x1.5a490c7eb413cp-746, 0.0,
     0x1.805c9b77852efp-24, 0.0, 0x1.47c11562c8b66p-567, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50de580d008a1p-24, 0.0, 0x1.d825f4b237384p-930, 0x1.796035777895ep-794,
     0x1.6c47f7ae1df79p-430, 0.0, 0.0, 0x1.234c19f679027p-267, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.26b1a4417295bp-424, 0x1.7e0f41409d85cp-596, 0.0,
     0x1.bf07d4b3bd958p-828, 0x1.5d4231fc770d5p-417, 0x1.f0cdf22998268p-256, 0.0,
     0x1.d59df19b287c6p-575, 0.0, 0.0, 0.0, 0x1.bfbf07ef947e9p-95, 0.0, 0.0,
     0x1.0294ceb5691d6p-113, 0x1.0dcb8a76d7767p-474, 0x1.cdee678351178p-988,
     0x1.627629703ed0fp-256, 0.0, 0x1.f922e96aaec4fp-751, 0x1.8c609bbdc8354p-13, 0.0,
     0x1.76b48d9e2fcecp-963, 0x1.67fa8c5a3479fp-298, 0x1.99502107164fep-197,
     0x1.b78d236e66b28p-323, 0.0, 0x1.ceb34b19c4959p-759, 0x1.2cef6e478052ap-725, 0.0,
     0.0, 0.0, 0.0, 0x1.9feeafc938283p-54, 0x1.6272b68f9e856p-221, 0.0, 0.0,
     0x1.339f6fbdab0f4p-242, 0.0, 0.0, 0x1.5efaa70c6f9dfp-654, 0.0,
     0x1.dc57eec39414p-479, 0x1.e52e339207acbp-700, 0x1.495004aa471c9p-244, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.326996b61ca6ap-759, 0x1.34e017e873d06p-260, 0.0,
     0x1.f6f6acdb4603dp-191, 0.0, 0x1.a23cff9a123bap-573, 0x1.b31fca29a5142p-900,
     0x1.ba1bddd3d19cap-840, 0.0, 0x1.de1abcc9b6b2ep-12, 0x1.7b7e0af4dd974p-583,
     0x1.c93de19224d74p-562, 0.0, 0x1.f06cfe9ec980bp-500, 0.0, 0.0,
     0x1.171bac5ba83f8p-416, 0.0, 0.0, 0x1.785413eff4e15p-935, 0.0,
     0x1.1730d3470da25p-902, 0x1.3393d3f3882bdp-74, 0x1.796b3d6a4b952p-137, 0.0, 0.0,
     0x1.8575de64e7416p-890, 0x1.8ae644efb4d3dp-308, 0x1.c6ba5839634ddp-584,
     0x1.e0c94c99ac626p-506, 0.0, 0.0, 0x1.df53e34b8ce8p-444, 0.0,
     0x1.09f6a9de92d4bp-5, 0.0, 0x1.9e85973ebfbefp-511, 0x1.9ba799e1d8653p-161,
     0x1.944aa3941e93cp-352, 0.0, 0.0, 0x1.4d073eb454d39p-453, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e5dbe6910dfa2p-187, 0.0, 0.0, 0.0, 0x1.e83f0362e291ap-221,
     0x1.9ba0b74d38de4p-711, 0x1.2595ae37e9748p-640, 0x1.db57ab9846994p-1022,
     0x1.bb501cef430ccp-866, 0.0, 0.0, 0x1.86dfb15eea22cp-369, 0.0,
     0x1.538b5edd2c161p-745, 0.0, 0.0, 0.0, 0x1.1387ae9789b5ep-919, 0.0, 0.0,
     0x1.d59e6cbbe86e9p-694, 0.0, 0.0, 0.0, 0.0, 0x1.51da4e63c6051p-522, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2051bab919965p-806, 0.0, 0.0, 0.0, 0.0,
     0x1.66e739033f8eap-284, 0.0, 0.0, 0x1.644c92c79bdaep-667, 0.0, 0.0, 0.0,
     0x1.c815f27efc0ep-564, 0x1.c1362946b110ep-190, 0x1.ebeb64480ba25p-581,
     0x1.33bc84149359dp-366, 0x1.5e19ee7e6dd3ep-603, 0.0, 0x1.676f202cd7745p-712,
     0x1.40607d78d2a7ap-406, 0.0, 0.0, 0.0, 0.0, 0x1.4f29904349ebbp-632, 0.0,
     0x1.eb6fcbfe76492p-248, 0.0, 0.0, 0.0, 0x1.1b32d60cd8f56p-654,
     0x1.5a0aff0ff1882p-132, 0x1.a03bc46a60aabp-904, 0x1.44b9c7a43161ap-339,
     0x1.2cc3ef8a96ba2p-194, 0x1.0df83b581637ap-809, 0x1.de2e6ba3cea07p-106, 0.0, 0.0,
     0.0, 0.0, 0x1.a3a1f340e8dbcp-601, 0.0, 0.0, 0.0, 0x1.27781ceb5fabdp-97, 0.0, 0.0,
     0x1.12d51ca34bf34p-449, 0x1.f558f1517acf8p-265, 0x1.fc7646d9fbe66p-465, 0.0, 0.0,
     0.0, 0x1.8def35dadf43ap-1011, 0x1.1253db3e93e62p-632, 0.0,
     0x1.28c4f27bbe472p-396, 0x1.50b18b0cee7e7p-749, 0x1.e7095089a119ap-641,
     0x1.c839a3fb04d0bp-974, 0.0, 0x1.1226f2df8971ep-426, 0x1.69c9b807e42cep-748,
     0x1.40195098f9c4fp-437, 0x1.0d5b935913cfbp-631, 0x1.51f8b0fcf251cp-879, 0.0, 0.0,
     0.0, 0x1.20bb3eeb4757p-456, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01c96c91a805p-386, 0.0, 0.0, 0.0, 0x1.eb7e3e995d497p-362, 0.0,
     0x1.d4e9ceb7de945p-105, 0.0, 0.0, 0x1.ede24d74c09a4p-60, 0x1.8ba80ea9fc9a2p-142,
     0x1.65b6fcc0212d8p-921, 0.0, 0.0, 0x1.3aeb97739e342p-455, 0.0, 0.0,
     0x1.d03b23b3b9d5bp-1017, 0.0, 0.0, 0.0, 0x1.39f0666021c04p-774,
     0x1.53761297eb759p-377, 0.0, 0x1.5bb794b1fedfbp-9, 0x1.63ab62bf8e457p-739, 0.0,
     0x1.61436e017c7c1p-666, 0.0, 0x1.ef5dc15a7ad3ap-815, 0.0, 0x1.e834ae0f21e55p-286,
     0x1.24708f3eca88cp-942, 0x1.063152e85ffc2p-527, 0x1.6b4cac5936cebp-400,
     0x1.fed2f0009fa5fp-998, 0.0, 0.0, 0x1.23adbdf29892dp-513, 0.0, 0.0,
     0x1.d7739e399e4efp-101, 0.0, 0x1.cf2e32ca2c0a9p-627, 0x1.027ec6c719b6dp-415, 0.0,
     0x1.be870135466a1p-245, 0x1.528914b356b1bp-163, 0.0, 0.0, 0.0, 0.0,
     0x1.07ce4aa64a91p-524, 0x1.a9faed82a515ap-154, 0x1.60f62b0d4582bp-225, 0.0,
     0x1.38fdc4135efa7p-1017, 0x1.76036d5e3ba22p-964, 0.0, 0.0, 0x1.39aacd21cf44p-136,
     0x1.46830423fd7cfp-564, 0x1.569dc97fcce38p-75, 0x1.1d945b3361202p-84,
     0x1.80b3ec04299e8p-716, 0x1.ce3b1a2ef7808p-518, 0x1.9fce9c16ef662p-637, 0.0,
     0x1.e888fdc86ac8dp-729, 0.0, 0.0, 0x1.9268013029eaep-397, 0x1.836318c00bf47p-210,
     0.0, 0.0, 0x1.f41e69d801f3dp-580, 0.0, 0.0, 0.0, 0x1.c9e603e0e0968p-253, 0.0,
     0x1.7804a618fb04fp-539, 0.0, 0.0, 0.0, 0x1.668616a5e7637p-931, 0.0,
     0x1.1a1fcf84246ddp-69, 0x1.1adc724def4fap-225, 0x1.7361a572c3ab4p-263,
     0x1.a635508ba94d4p-321, 0x1.aec3977de6d57p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e91c17620ae09p-822, 0.0, 0.0, 0x1.cf322d6c9c14ep-839, 0.0,
     0x1.5770b09f7011bp-605, 0.0, 0.0, 0.0, 0x1.36a1373e50643p-882, 0.0,
     0x1.d5db397671cbfp-979, 0x1.2ddff33ecbf6fp-796, 0x1.d2220067ad8c5p-554,
     0x1.11ca524f9e41ep-927, 0.0, 0.0, 0x1.bb92d8345bf78p-947, 0.0,
     0x1.76cb89f01a445p-39, 0x1.72c48d10d7225p-482, 0.0, 0x1.e6d1014a9f098p-38, 0.0,
     0.0, 0.0, 0.0, 0x1.61677ed4b236p-484, 0x1.d93bb5687cdbp-105, 0.0,
     0x1.8c428003d34e2p-437, 0x1.cdf412b063eb3p-953, 0x1.168f93012fc92p-62,
     0x1.f6a953747b99bp-990, 0x1.5b7428ca516e5p-987, 0x1.a0cbc488ffeecp-1012, 0.0,
     0.0, 0.0, 0x1.73b91f37f7125p-158, 0x1.c5686bed3bp-781, 0x1.18fa30a795a57p-864,
     0x1.855719193d395p-272, 0.0, 0x1.a5dc3316b764cp-837, 0.0, 0x1.1e069028b6ec2p-145,
     0x1.146fdad625ba5p-330, 0.0, 0.0, 0x1.9fcd849462b83p-761, 0.0,
     0x1.01a55c6bdc27fp-542, 0.0, 0.0, 0x1.6cd9ee852b2cdp-157, 0x1.a0bd93a67758cp-595,
     0.0, 0.0, 0.0, 0x1.6c382bf1420dp-60, 0x1.7c96de19cbe9dp-461, 0.0, 0.0,
     0x1.dc925d168c743p-939, 0.0, 0.0, 0x1.4dce0bea288e4p-676, 0x1.c92fc7d4ab17dp-345,
     0.0, 0x1.81f223c669e02p-326, 0x1.1de62aec14fe2p-609, 0x1.593d3268a027p-450,
     0x1.d4eaaae66d48bp-63, 0.0, 0x1.3f032c65685adp-980, 0.0, 0.0, 0.0, 0.0,
     0x1.b591ff3ed3635p-77, 0.0, 0.0, 0x1.1adb219f2a0edp-550, 0x1.0d70d578d2371p-438,
     0x1.358c54d851e53p-865, 0x1.2a80fe6665172p-1016, 0x1.fb2b6940d14f8p-1013,
     0x1.3e8be4a24390dp-440, 0x1.97e58782fb1acp-596, 0.0, 0.0, 0x1.059b0f1c24065p-676,
     0x1.3237f5c6e961ap-267, 0x1.e1cf12c8f9d3ap-529, 0x1.2330925402704p-559,
     0x1.00849ea5ab70fp-697, 0x1.19bf28e3c35a6p-436, 0x1.37de007aff1fp-59,
     0x1.c017d7a0483f5p-993, 0x1.ee1b898fb0ef6p-246, 0.0, 0.0, 0x1.db8d1579f95a7p-993,
     0.0, 0x1.b9a0fb4e8935dp-28, 0.0, 0.0, 0.0, 0x1.d1e9a2bbd94c8p-923,
     0x1.fd84566193b94p-150, 0.0, 0.0, 0x1.033692c8d4639p-815, 0.0, 0.0, 0.0,
     0x1.6226d6378811bp-398, 0x1.4654b9c0058eap-116, 0x1.6edb3d734b60bp-174,
     0x1.3baae5a59bd09p-2, 0x1.e4f7d5c1dccfcp-198, 0x1.9e39c455a6647p-814, 0.0, 0.0,
     0x1.a2106c2ac6fffp-98, 0x1.85c4d1d373ea8p-504, 0.0, 0.0, 0x1.f9aee9918fb59p-479,
     0.0, 0x1.2812e999765a4p-577, 0x1.25b4ed8327bbcp-245, 0x1.4f0cafb5eb529p-137,
     0x1.e34c08f4f476ep-97, 0x1.97348948fef4dp-203, 0x1.c2987607e3459p-611, 0.0,
     0x1.990e6c85c55f6p-314, 0x1.5b6cec91940ffp-641, 0x1.09168f6648dbbp-892, 0.0, 0.0,
     0x1.5ab5d6afae8eap-461, 0x1.75cba1e73555cp-606, 0x1.964e348345f69p-597,
     0x1.d62cf3dd971a9p-613, 0.0, 0.0, 0x1.8c033691bedbcp-1010,
     0x1.33ea86465077fp-555, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47038fb0ebc35p-833, 0.0,
     0x1.a4f3aa65952c7p-923, 0x1.738d017c72dd5p-190, 0.0, 0.0, 0x1.2007df6ae5f3cp-325,
     0.0, 0.0, 0x1.0834fe2c15de6p-10, 0.0, 0.0, 0.0, 0.0, 0x1.d2aa956a903e3p-148, 0.0,
     0.0, 0x1.d53addd54338cp-588, 0x1.b7e418285edb9p-365, 0x1.c5a624fcd74eap-101, 0.0,
     0.0, 0.0, 0.0, 0x1.550f291f8baa9p-551, 0.0, 0x1.f49ad3655b6ecp-161,
     0x1.dd4c461bfeac8p-147, 0.0, 0x1.4459cb4f642a3p-792, 0.0, 0x1.ff7525ae0e38cp-293,
     0.0, 0x1.caace918d938p-358, 0x1.15b6226881794p-962, 0.0, 0.0,
     0x1.a174f1a7719e7p-467, 0x1.7d2513983673dp-433, 0.0, 0x1.960f36cec5e45p-693,
     0x1.810a0cfa3d275p-796, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_sincosd1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_sincosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosd1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
