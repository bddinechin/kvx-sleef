/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind1_u35purecfma.c --function \
 *     Sleef_asind1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.2737990c14e6ap-134, 0.0, 0x1.59c609ea39a7dp-293, 0.0, 0.0,
     0x1.2a66942a4fabfp-742, 0x1.4e7af61c24e96p-119, 0x1.95d669e6495dfp-639, 0.0, 0.0,
     0.0, 0.0, 0x1.a670e7bc6ccfep-1017, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff3d74dc85f7p-894, 0.0, 0x1.24118f0ce5013p-96, 0.0, 0x1.20de2920b4919p-540,
     0.0, 0.0, 0.0, 0.0, 0x1.8927a9de7ebdep-88, 0x1.aae4d74d768cfp-762,
     0x1.22df4c2ec904dp-467, 0.0, 0.0, 0.0, 0x1.ce4f86b71bdcbp-687, 0.0,
     0x1.4430842805a82p-230, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4cbe82db6a3bp-912, 0.0,
     0.0, 0x1.0c12cec88f064p-262, 0.0, 0.0, 0x1.59fff6f62300bp-289,
     0x1.14b9f94a7c732p-251, 0x1.e4f44a16ea464p-339, 0x1.c97f3a28cc7e9p-225, 0.0, 0.0,
     0.0, 0.0, 0x1.01312739fb2a9p-468, 0x1.69d9c7ba7fda7p-283, 0.0,
     0x1.8fd75f33ae9c8p-179, 0x1.4f25a50616af4p-829, 0x1.827f9544577f7p-338,
     0x1.da95abd27f9ccp-202, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17317f06dc839p-300,
     0x1.4f4bdb9389ed7p-101, 0x1.521bc784c28adp-1006, 0x1.75ea41659e096p-418,
     0x1.66a58e650dc1p-734, 0x1.491576715f323p-797, 0x1.c9231ffd807cp-2, 0.0,
     0x1.4722fec8e3bb6p-485, 0x1.2a864d15d08b2p-49, 0.0, 0x1.7969da17c0d3dp-865, 0.0,
     0x1.9365a4e62988ap-722, 0.0, 0.0, 0x1.25ce340d5ac96p-164, 0.0,
     0x1.db70eccf4ddd1p-547, 0x1.06ed1875f5339p-271, 0.0, 0x1.3f756290985bep-557,
     0x1.4fc0368ad6f52p-831, 0x1.6c7f522e8ad5bp-382, 0x1.1b71ad1268c48p-543,
     0x1.85b5e0e15b19cp-429, 0.0, 0.0, 0.0, 0x1.62c4c55824fffp-261,
     0x1.49a7e56fd646p-429, 0x1.66dfbe8bd9664p-355, 0.0, 0.0, 0.0,
     0x1.6f6b177984d53p-612, 0x1.eb82a84ca95d3p-125, 0.0, 0.0, 0.0, 0.0,
     0x1.c764fd2e8c42fp-607, 0x1.2356217a80e91p-210, 0.0, 0x1.b9c98a8203855p-729,
     0x1.15af213c8966fp-480, 0.0, 0x1.9d7af7cf1933fp-127, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0b70696d973bp-174, 0.0, 0.0, 0x1.aa8a0d98ff647p-490, 0.0, 0.0, 0.0, 0.0,
     0x1.6bb8e1860664ap-655, 0.0, 0x1.8ad1d319c675p-262, 0x1.85ad9ef7696d2p-107, 0.0,
     0x1.a37964f82f7cep-738, 0.0, 0.0, 0x1.6435d3381e808p-592, 0.0,
     0x1.13438cec554f2p-141, 0.0, 0x1.4ee32c5b7c3b1p-201, 0x1.5d47399ba61f8p-330, 0.0,
     0.0, 0.0, 0x1.90e156e2a9163p-451, 0x1.366427310939p-526, 0.0,
     0x1.541958aba149cp-272, 0x1.b98c4e520b8f5p-459, 0x1.14f257d8aa08bp-953, 0.0,
     0x1.324d9bb33de5ep-400, 0x1.2b6a72e9b5e56p-76, 0x1.b79f90a837f9bp-660, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1b22e5a28b6f8p-677, 0x1.27a3876b94e5ep-321, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c68e156ff1cc4p-2, 0x1.bee0c4308f9bp-450,
     0x1.a509b74688fp-830, 0x1.cc05bdd52e263p-78, 0.0, 0x1.ce577f10aeae5p-9, 0.0,
     0x1.bf6b62f6b0e2ap-826, 0x1.4957418211c3ap-465, 0.0, 0.0, 0x1.f83ae32e41401p-906,
     0x1.7be889979cbbcp-734, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd50a65c2ff13p-21, 0.0, 0.0,
     0.0, 0.0, 0x1.e0dc8d7f8483p-188, 0x1.8564ead11117p-597, 0x1.4db0bdd779604p-1005,
     0.0, 0.0, 0.0, 0x1.d9d8246c9cecp-283, 0x1.43d193b67fd7fp-935, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bf749fd913566p-395, 0x1.71e46d13d732ap-392, 0x1.eb5c527673bd7p-685,
     0x1.f4b0e7670d1fap-800, 0.0, 0.0, 0x1.5bd6a1c0b6095p-965, 0.0,
     0x1.52e9d40b3fbcp-779, 0.0, 0.0, 0x1.52d1815353a24p-161, 0.0, 0.0,
     0x1.8f423fcd7c94cp-44, 0x1.b43477ee100adp-546, 0x1.6092492aadaa4p-359, 0.0,
     0x1.e762666f87279p-481, 0.0, 0x1.cf66a70449ad9p-622, 0.0, 0x1.da2d57ba95bb2p-827,
     0.0, 0.0, 0x1.2d8e93b068649p-344, 0x1.6a13f47ebe108p-21, 0x1.7c1c37fc3990cp-946,
     0.0, 0x1.af087c45c05ffp-909, 0x1.fbe6c7ea20dbfp-796, 0x1.ef2660c4edb95p-601,
     0x1.580c4399faf1p-549, 0.0, 0x1.65770017b7af4p-488, 0x1.8b0eba93643b1p-670, 0.0,
     0x1.d4f3ce83cfb9ep-111, 0.0, 0x1.aeb357c35c29ap-82, 0x1.d437a713ebe5cp-248, 0.0,
     0.0, 0.0, 0x1.dc8f93544568fp-198, 0x1.5dca99f642e6bp-668, 0.0, 0.0,
     0x1.8ec200cb0248p-413, 0x1.cf1ad5eda3032p-548, 0x1.fed5902f65bc3p-993, 0.0,
     0x1.f474364345ce7p-494, 0.0, 0.0, 0x1.0f2d091e1b2f4p-57, 0.0,
     0x1.3fd5d6b8d8d7dp-824, 0.0, 0x1.1cdb450d15addp-771, 0x1.1eb89108bca24p-75, 0.0,
     0.0, 0.0, 0x1.14241365f1c6cp-648, 0x1.6c5063a59b211p-415, 0x1.bf4e10349748bp-989,
     0.0, 0x1.196d514f1459p-679, 0.0, 0.0, 0x1.c0a2105374392p-706,
     0x1.59aeae6468fbcp-948, 0x1.ec1ff6b374be1p-970, 0x1.ffaa570aa51b8p-697, 0.0, 0.0,
     0.0, 0.0, 0x1.e197870c23bbep-827, 0x1.a610951f7ad11p-967, 0.0,
     0x1.13cea0c4951ap-251, 0x1.87280af566713p-109, 0x1.8d4b12cd910d7p-765, 0.0, 0.0,
     0.0, 0.0, 0x1.dd118480727ecp-117, 0x1.7f472b9dd31a6p-647, 0x1.42cff426137ccp-10,
     0x1.495179972d01cp-777, 0x1.c21c158d5a61fp-669, 0.0, 0.0, 0x1.72b13f8bc903fp-971,
     0x1.fba5aa74ee2c3p-184, 0x1.ff1aefc0ecb6bp-251, 0.0, 0.0, 0x1.c23fb8cb533fdp-354,
     0x1.3a9281069b48p-796, 0x1.b038811cc3027p-260, 0.0, 0x1.1a7596669fda9p-365,
     0x1.a9f035c388325p-655, 0.0, 0.0, 0.0, 0x1.bd2386aa9480ep-19,
     0x1.2d0aaaaf3275p-48, 0.0, 0.0, 0.0, 0x1.c2be37e93bb98p-39,
     0x1.fcffed96ec54ap-559, 0x1.e15fc158b091ep-398, 0.0, 0.0, 0.0,
     0x1.825f336bbf6e3p-391, 0x1.a58831e1d801fp-898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5daa949148d5ep-993, 0x1.fac56d197e9acp-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6b3955bbadb12p-126, 0.0, 0.0, 0.0, 0x1.f5ee750d28c38p-514,
     0x1.46a0eb38c20eap-217, 0x1.7bce6786b3b6p-7, 0.0, 0x1.176791daaffeap-949, 0.0,
     0x1.82fbaba38dc41p-48, 0x1.3a90942e29c5fp-221, 0.0, 0x1.b4207181b449cp-947, 0.0,
     0x1.9d23bfa810851p-144, 0.0, 0.0, 0x1.9264b48fb782ep-827, 0x1.e4e0e7c02ff9ep-457,
     0.0, 0x1.3fc2d3d4d3694p-970, 0x1.662963105eea8p-358, 0x1.2ee3b9e7e4ea9p-1003,
     0.0, 0x1.669e0f32e8917p-179, 0x1.45ac5d1926bdep-501, 0x1.50ae0fac179d8p-728, 0.0,
     0x1.7c774374ea9eap-718, 0x1.76ae17be92831p-407, 0x1.851136feb0011p-215,
     0x1.d9ae64542ecddp-820, 0.0, 0x1.468006dd2bd58p-1012, 0x1.b85fd3ea3529ep-921,
     0.0, 0x1.8a6713b8aa1b7p-667, 0.0, 0.0, 0.0, 0x1.12f76376ef578p-100, 0.0, 0.0,
     0x1.6fea8c28d63f7p-950, 0x1.2ff6580e8c19cp-414, 0x1.d064c9a0da8f8p-394,
     0x1.68407e5e3668fp-55, 0.0, 0x1.d892b3d679d83p-9, 0.0, 0x1.91f9fe405eff1p-190,
     0.0, 0.0, 0.0, 0x1.1e2cd9441e352p-270, 0x1.fd070ee61727ep-581,
     0x1.60b02e7aa708ep-344, 0.0, 0.0, 0x1.479108def7348p-800, 0x1.bcc0652c5da0ap-396,
     0.0, 0.0, 0x1.dfac69af16b12p-129, 0x1.625b303bd84b7p-691, 0x1.101624819ebf9p-115,
     0x1.e454d4b62dd19p-432, 0x1.922da1a47df8ap-476, 0x1.4dc92fda1f1dep-954, 0.0,
     0x1.d5c719f15b4f4p-127, 0x1.ca5edb8e1e96p-335, 0x1.9537e06c3798bp-226,
     0x1.b5a7f69a1da4bp-495, 0x1.71cf3e21be2b7p-492, 0x1.acfd348e9a02fp-893, 0.0,
     0x1.8921581b1caebp-319, 0.0, 0.0, 0.0, 0x1.07d2ffdddbc5fp-455,
     0x1.11cb2a3d01f8ap-433, 0x1.e3d2701dcf1dcp-262, 0.0, 0.0, 0x1.357e31508524cp-863,
     0.0, 0x1.3df259353ed17p-851, 0.0, 0x1.096bf32854ebdp-687, 0x1.63954c24fabe9p-226,
     0.0, 0x1.95e3bb8a85851p-265, 0.0, 0x1.6dccf93cbed48p-722, 0.0, 0.0,
     0x1.343218574dbf5p-38, 0.0, 0.0, 0x1.6b22088279153p-137, 0.0, 0.0, 0.0,
     0x1.12595fe3bc0f9p-566, 0x1.c7745e948d61ap-1002, 0x1.8c13451182636p-244,
     0x1.5416d0573b308p-56, 0x1.1de1f889d5289p-824, 0.0, 0.0, 0x1.abe1ad647e66p-916,
     0.0, 0x1.b62ee83499c85p-611, 0x1.be33fa63c1996p-686, 0x1.af900bdfb8ff3p-412,
     0x1.47c9d29832714p-964, 0.0, 0.0, 0.0, 0.0, 0x1.66d1561a2fc09p-952,
     0x1.bdf74912bcc12p-298, 0.0, 0x1.2cca26c5ec626p-36, 0x1.e62643a7ac9dfp-864, 0.0,
     0.0, 0.0, 0.0, 0x1.cf759ec2c2b1ep-172, 0.0, 0.0, 0x1.e7c5cab7a3a63p-78, 0.0,
     0x1.f1c6c59648f11p-712, 0x1.36867bdbbadeap-204, 0.0, 0x1.9f3ce7079e801p-340,
     0x1.cca85d168f89cp-247, 0x1.a5853cfd7ab3p-678, 0.0, 0.0, 0x1.336a865e1717ap-988,
     0.0, 0x1.be9313d317658p-215, 0x1.e446f328feea1p-780, 0.0, 0.0,
     0x1.43738f374547bp-183, 0.0, 0.0, 0.0, 0x1.2edd843ce91cdp-142, 0.0, 0.0,
     0x1.26a4d45c3c0afp-356, 0x1.9005d3d494803p-341, 0x1.fe2c17143b4e4p-254, 0.0, 0.0,
     0x1.5ef56227aa19cp-749, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9f8026a88c56p-1, 0.0,
     0x1.ba24f28af0edap-912, 0.0, 0.0, 0.0, 0.0, 0x1.5b5a44d9604a5p-830, 0.0, 0.0,
     0x1.bb15b8121da33p-17, 0.0, 0x1.9557d9c2a8408p-137, 0.0, 0.0, 0.0,
     0x1.f832c1cad8a5dp-1, 0x1.be13268159a0ep-997, 0.0, 0x1.2070dd32b83f3p-328, 0.0,
     0x1.0a14ff6c0304cp-340, 0.0, 0.0, 0x1.749eef3bf2cf8p-872, 0.0,
     0x1.75223a1fe92f5p-952, 0.0, 0.0, 0.0, 0x1.869c227f957dcp-676,
     0x1.aa0419cd3590ap-390, 0.0, 0x1.8ed53d1916085p-910, 0x1.d1a3f49688a15p-822, 0.0,
     0.0, 0.0, 0x1.4888d5cac777ep-741, 0x1.1fd4254ef0b9ep-544, 0x1.5618878961974p-78,
     0.0, 0.0, 0.0, 0x1.640e1723eaca5p-922, 0x1.19a9eba1b83bap-320,
     0x1.066c86040e9aap-663, 0x1.3e2ba0f195effp-387, 0.0, 0x1.eaffa6d0a93f5p-362,
     0x1.357e5e0336b4cp-835, 0.0, 0.0, 0.0, 0x1.bcb5d8fe8466p-706, 0.0,
     0x1.afe2799eef562p-417, 0x1.3ab5949800d78p-817, 0.0, 0x1.be06565cf2a8dp-797,
     0x1.e49e3578c8f76p-865, 0x1.c7e3a1ffba232p-462, 0x1.e7043a3215a75p-331, 0.0,
     0x1.05dae9b8a3219p-394, 0.0, 0.0, 0x1.28db29e165d87p-666, 0x1.5c18d9469fbf9p-580,
     0x1.73348d56fca78p-808, 0.0, 0x1.df960c25868ebp-514, 0x1.b8ca5211b1c18p-214,
     0x1.2b6e2e7144533p-544, 0x1.58a1a146e6c4p-273, 0.0, 0x1.868aa526305c3p-30, 0.0,
     0.0, 0x1.aefa0ef2cd7bcp-985, 0.0, 0.0, 0x1.754cce47c8524p-134,
     0x1.7bc86806714b3p-106, 0x1.1b36434e3fb4ep-451, 0x1.10207f96736e8p-293,
     0x1.3501cca9ca4f1p-840, 0.0, 0x1.3a3ad4d813197p-742, 0x1.fdf36c000c10bp-652, 0.0,
     0x1.5d98bebd81077p-96, 0.0, 0.0, 0.0, 0.0, 0x1.60e6d4798794fp-664, 0.0,
     0x1.a0a82ccb52628p-565, 0x1.2ce79221db385p-14, 0x1.87aa091ffe88cp-122, 0.0,
     0x1.ec83a6d71802dp-489, 0x1.db86ce966dfbcp-675, 0x1.281c5b47f717fp-448, 0.0,
     0x1.c57d9c5623043p-84, 0.0, 0.0, 0x1.392b336020f5ep-252, 0x1.ec71abed714c8p-6,
     0x1.4b457ce5f7858p-426, 0x1.51d93992c39d5p-60, 0x1.3b5dd23c840e5p-706,
     0x1.4d6a1ff139153p-58, 0.0, 0x1.a1697fa4542eap-204, 0.0, 0.0, 0.0,
     0x1.4e9650f7a93ffp-598, 0.0, 0.0, 0x1.e532b615938dp-848, 0x1.7f56a63f5ca5bp-843,
     0x1.39f91e9d63c72p-291, 0x1.6a8b7c3c5df4p-915, 0.0, 0.0, 0x1.ced0d993e8965p-441,
     0.0, 0.0, 0x1.7f8e4f883e50bp-71, 0.0, 0.0, 0.0, 0.0, 0x1.e9722861438efp-678, 0.0,
     0x1.09ac7fb0a8c0ap-611, 0x1.c426a03983744p-409, 0.0, 0x1.05d2d562ad351p-77,
     0x1.5d053b171cb8fp-535, 0.0, 0.0, 0.0, 0x1.3b13b7e3aaf2p-1018,
     0x1.ba3e3e1ebcd73p-314, 0.0, 0x1.b76a1a7bcaebap-993, 0x1.81c1e298a105cp-645, 0.0,
     0x1.de27ae05ab17cp-759, 0.0, 0x1.bbb6597f184cep-254, 0.0, 0x1.6886c4bd42334p-319,
     0x1.6e4ac19df5296p-550, 0.0, 0x1.12c5f6f7b6db3p-1015, 0.0, 0.0, 0.0,
     0x1.a6bbcf0fb3405p-739, 0.0, 0.0, 0x1.825b9f5ae60fap-335, 0x1.496bedc62ee9ap-521,
     0.0, 0.0, 0x1.4113d8d6ed238p-684, 0.0, 0x1.8f946ad9d8672p-86, 0.0,
     0x1.00de5cfc3e5fdp-820, 0.0, 0x1.08652c45d2682p-570, 0.0, 0x1.2139bda73fbeep-597,
     0x1.30bd307bfc9ecp-805, 0.0, 0.0, 0.0, 0x1.7878dc74dd42p-675, 0.0,
     0x1.eb5cf627c85b2p-513, 0x1.170df48f27b54p-9, 0x1.442dc76204617p-922, 0.0, 0.0,
     0x1.7a60ed0ae4e37p-215, 0x1.d1f1290619af5p-818, 0.0, 0.0, 0x1.56d7dd36795fbp-792,
     0.0, 0.0, 0.0, 0x1.4332524b309bdp-636, 0.0, 0x1.77ce5904fd4e9p-265,
     0x1.79dcec459f3d5p-743, 0.0, 0x1.2e08fb76e9dcfp-360, 0.0, 0x1.048b81b75abb3p-526,
     0.0, 0.0, 0x1.4b5db04fd2943p-365, 0x1.ac22eb1885239p-235, 0x1.75fbc0b69311dp-735,
     0x1.3bbd80b3810cp-621, 0x1.56d75c5894a24p-260, 0.0, 0x1.19413789a8f9dp-1001,
     0x1.ebeaf025cde65p-714, 0.0, 0x1.693f10765a8bep-786, 0x1.a591bb579273dp-578, 0.0,
     0x1.1a6e017d883d6p-538, 0x1.43f7566d9c482p-495, 0x1.1258a0b262ff9p-640, 0.0, 0.0,
     0x1.c526bb476be19p-226, 0.0, 0x1.0283dce813c4dp-930, 0x1.36a634f883d65p-97,
     0x1.f1c47b728b469p-347, 0.0, 0x1.b3cbbda95850ap-5, 0x1.ec3eb228a582ep-430, 0.0,
     0x1.e6a2d624d2563p-563, 0x1.358ae6e56b7cap-166, 0x1.2a6d7b169ecb1p-86, 0.0, 0.0,
     0x1.73954e615737ap-1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b8afa0bce1f3p-424,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92b776f414232p-333, 0x1.946437b107c3fp-861, 0.0,
     0x1.14c1f5aa5fd46p-710, 0x1.84241f3e29d84p-202, 0.0, 0x1.974d3831ca62ap-309, 0.0,
     0.0, 0.0, 0.0, 0x1.43d62828a4b65p-765, 0.0, 0x1.3fff1848a3c46p-764, 0.0,
     0x1.18c674a9c0527p-1011, 0x1.888d3d278b606p-694, 0x1.a307772a510c4p-308, 0.0,
     0.0, 0.0, 0x1.a8afd5d8d90b4p-16, 0x1.db467918e5a37p-933, 0.0,
     0x1.f995691b223c5p-761, 0.0, 0.0, 0.0, 0x1.1964c11e7c552p-515,
     0x1.135ea45b8d57p-731, 0.0, 0x1.71b1547c8f0ddp-408, 0x1.0949cb02e16ep-840, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e87d41da7964ep-894, 0.0, 0.0, 0x1.2317325ad0d5cp-491,
     0.0, 0x1.0672f3a5b4cdbp-287, 0x1.18ca2bf5ca19ep-46, 0.0, 0.0, 0.0,
     0x1.6d46f40a48c67p-628, 0x1p0, 0.0, 0x1.c2578afb89a78p-488, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7051329ef1d44p-475, 0x1.1191b9dc6ea9bp-56, 0.0, 0.0, 0.0,
     0x1.183456f1129cdp-681, 0.0, 0x1.f93289f647d6ap-731, 0.0, 0.0,
     0x1.4dae00735dfbdp-460, 0.0, 0x1.eceb24cb56359p-643, 0x1.75e40d0ec49cp-975, 0.0,
     0x1.29aec8edcbc34p-338, 0.0, 0.0, 0x1.d29cf86e4ccap-598, 0x1.63b3df7d62e2fp-268,
     0x1.52d395c60c5dp-625, 0x1.a03b482cd5d51p-546, 0.0, 0.0, 0x1.a73f917a2ed33p-238,
     0.0, 0.0, 0x1.3bda0dcf207ecp-592, 0x1.1d6db04c7f968p-668, 0x1.8c8e134e1056dp-416,
     0.0, 0x1.8db570d79a025p-1011, 0.0, 0x1.954f57e18f51ep-878, 0.0,
     0x1.1b724e8510f03p-667, 0.0, 0.0, 0.0, 0x1.c14dbc9acc12ep-49, 0.0, 0.0, 0.0,
     0x1.801dd5c8c9b81p-320, 0.0, 0.0, 0x1.d8fbc43153bap-314, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8011edaa117efp-843, 0x1.71e8490703bcfp-852, 0x1.615efe359c611p-752, 0.0,
     0x1.24bef02aa30cap-304, 0.0, 0x1.d511663fa528fp-302, 0x1.50be3785c8462p-377,
     0x1.3dabe3307db75p-518, 0.0, 0x1.6e55d39593022p-518, 0x1.08e1964962a6bp-525, 0.0,
     0.0, 0x1.23bb3ffac1124p-585, 0.0, 0x1.719d34869ae5p-90, 0x1.5f561fe29208dp-858,
     0x1.6f8af5f6ed6f2p-41, 0x1.53e108aae7908p-98, 0.0, 0x1.c456ae6abec52p-761, 0.0,
     0x1.aa59ca65e2f25p-106, 0x1.124b5dd3b5a72p-715, 0x1.2506ce12b7204p-641, 0.0, 0.0,
     0x1.a96bb165624c6p-169, 0.0, 0.0, 0x1.e9e2dabc68915p-750, 0.0, 0.0,
     0x1.e76a23036d126p-530, 0x1.f297871fa001ep-887, 0x1.5e3d3438de2bp-78, 0.0, 0.0,
     0.0, 0x1.c83c3dc024004p-486, 0.0, 0x1.9b59d1da28f95p-872, 0.0, 0.0, 0.0, 0.0,
     0x1.ee7bd7c4a2797p-915, 0x1.09847eec9c9b5p-745, 0.0, 0.0, 0.0,
     0x1.bd856dcb870f8p-964, 0x1.d5c691cf50829p-618, 0x1.f05d9cb47efdp-658,
     0x1.2e75859e55601p-23, 0x1.4b98a8e7f30ddp-1008, 0x1.11272b0e8cd9p-304, 0.0, 0.0,
     0x1.45d02086ac272p-22, 0.0, 0.0, 0x1.019ba55b91782p-234, 0.0,
     0x1.7721c1ea2b4p-883, 0x1.22e0f903d17a9p-358, 0x1.c9368b781e071p-685,
     0x1.4d15f6c25dc2ep-127, 0.0, 0x1.a3c9c78e56ff8p-36, 0.0, 0.0,
     0x1.38e5525be7d9p-1004, 0.0, 0.0, 0x1.16f75bd95d76bp-453, 0x1.1e314fe860621p-63,
     0x1.97b9029b7f87ap-280, 0.0, 0x1.165726aafa953p-89, 0x1.f72588f2d99eap-701,
     0x1.9f8bcbdc2f303p-360, 0.0, 0.0, 0x1.61608af16b9bdp-799, 0x1.3807450ee1ebp-461,
     0x1.47f58673e38a1p-5, 0.0, 0x1.98f6e8bdece2p-211, 0x1.1bc3130d5a28p-92, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.69aa5d19d66aap-570, 0.0, 0x1.543a0a25525e9p-336, 0.0,
     0x1.f6c9cf214535cp-678, 0x1.4d1b73a0ce849p-376, 0x1.65fc03c4ae517p-811,
     0x1.1fe42b29f5c3dp-33, 0x1.3184ef3dc08b3p-948, 0x1.ffbcbd877275cp-642, 0.0,
     0x1.197487b5a1dc9p-42, 0x1.4d16da8a286d6p-756, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.074cb346a918bp-35, 0x1.b91d2f26fe59p-430, 0.0, 0x1.0592eb6283921p-522
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
            tmp1 = Sleef_asind1_u35purecfma(tmp0);
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
    printf("Sleef_asind1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asind1_u35purecfma bench acc %la\n", global_bench_acc);
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
