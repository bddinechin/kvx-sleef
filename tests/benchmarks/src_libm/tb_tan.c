/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_tan.c --function tan --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.eeace8ed61d4bp-295, 0x1.05800e14fb376p-120, 0x1.5f3f2cfda0e86p-715, 0.0,
     0x1.67694efca47fdp-433, 0.0, 0.0, 0x1.9ae5c4bacdd39p-345, 0x1.e85116708fdd1p-318,
     0.0, 0x1.d0f5eac030267p-38, 0x1.0d4b848206dd6p-146, 0x1.4176ff455511ap-679, 0.0,
     0x1.4350302073a66p-453, 0x1.d845dffd5d17ep-844, 0.0, 0x1.4251962d815e4p-575,
     0x1.4dc32f3fb65e8p-978, 0x1.839b51f93dc97p-673, 0x1.c6d6c61bff4afp-763, 0.0,
     0x1.c9ce1d10225d8p-632, 0x1.a574b8287b8c3p-784, 0x1.009735b03120ep-9, 0.0, 0.0,
     0x1.20f8e4c7bc3ffp-630, 0.0, 0x1.6c5bede46dc97p-5, 0.0, 0.0,
     0x1.97ddd4a1bd6c7p-278, 0x1.2c4781e0daad4p-26, 0x1.3d17ca75f3439p-246,
     0x1.5670320346669p-973, 0.0, 0x1.7e117e21729bap-204, 0x1.fb0bf1c5aa99bp-565,
     0x1.9587101985dadp-802, 0x1.378f4443b1cacp-313, 0x1.7102f3775140bp-434, 0.0,
     0x1.5f1a5cacd82d4p-625, 0.0, 0.0, 0.0, 0x1.b3e254fb14d17p-260,
     0x1.26d14a851475p-203, 0.0, 0.0, 0.0, 0x1.2e9edcc1b26eep-841,
     0x1.dab8e28ac65f9p-855, 0.0, 0.0, 0x1.4163d8a39c1fep-914, 0.0, 0.0,
     0x1.e99cf80940d6dp-12, 0x1.4e0c29a33fc46p-128, 0.0, 0.0, 0.0, 0.0,
     0x1.41c3910d776fdp-426, 0x1.7e7cac16d2d9ep-186, 0x1.2c70b1179a0acp-112, 0.0,
     0x1.728b252f491efp-425, 0x1.b05d3e738ec9bp-600, 0x1.014f082dedd8bp-584,
     0x1.93393c417477ap-379, 0.0, 0x1.854a396da3ad9p-818, 0.0, 0.0, 0.0, 0.0,
     0x1.0c4863491d2afp-509, 0.0, 0.0, 0x1.c1d6744916f92p-871, 0.0,
     0x1.688c707badedap-612, 0x1.3ee289189b01dp-411, 0.0, 0.0, 0x1.a15cce704ce73p-184,
     0x1.37ae4815fdc3dp-1012, 0.0, 0x1.5dcf1e94bfff3p-619, 0.0,
     0x1.a6d57844ce4b3p-490, 0.0, 0.0, 0x1.20d2695c1b8d5p-252, 0x1.3d9049ffabb5ep-603,
     0x1.fb0b1274f3bd1p-882, 0.0, 0x1.c82b494954f8fp-611, 0.0, 0.0,
     0x1.ec30ab9f3365p-523, 0.0, 0.0, 0.0, 0x1.6c390be9c38f7p-445,
     0x1.03016701392eep-402, 0.0, 0x1.7a3b946e9e5adp-611, 0x1.deb92c43f19bfp-22, 0.0,
     0x1.5e5d7ddc71cefp-956, 0.0, 0x1.701a3d0b5f61dp-43, 0x1.9fc4fa3333cefp-965,
     0x1.fa9c1a70dc897p-551, 0.0, 0.0, 0x1.d0e57329ca1fbp-418, 0x1.49c832ba7b512p-28,
     0.0, 0x1.3c4c0563d4e4fp-377, 0.0, 0x1.27298f7fc7c79p-901, 0.0, 0.0,
     0x1.20b0f024ec35cp-435, 0.0, 0.0, 0x1.3ea876bc7ad9dp-990, 0x1.410fd73e62a7ep-700,
     0.0, 0.0, 0x1.8c9476b60e78p-257, 0.0, 0.0, 0x1.dc36df11237fdp-253,
     0x1.6715c73ec43p-953, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48b6daa7e5c81p-267,
     0x1.dc0b25fb1a639p-980, 0x1.d670371907eaap-54, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.658ef898c4867p-586, 0x1.e2871484329e2p-208, 0x1.530412832cc63p-481, 0.0,
     0x1.8d55707937172p-791, 0x1.a68db130ed414p-829, 0.0, 0.0, 0x1.731cfb45d2bcdp-842,
     0.0, 0x1.40a0c304f01a4p-256, 0x1.6deed1afb7da5p-585, 0.0, 0x1.3a20eb30600b1p-655,
     0x1.6c34d22ea765fp-721, 0x1.9047d094ba3e6p-991, 0x1.28f000d37a10cp-683,
     0x1.ba26434a0d5d7p-737, 0x1.f15cd074fb079p-804, 0x1.f0885cf01d5fap-602, 0.0,
     0x1.6172717a0433fp-260, 0x1.ecee024ebe119p-400, 0.0, 0.0, 0x1.0e1b58e658986p-894,
     0.0, 0x1.aefea5cf71d92p-826, 0x1.93ffc884b0d55p-303, 0x1.967f29bb593c5p-871,
     0x1.a59dad1fd301ep-852, 0.0, 0x1.83f621cc77574p-40, 0x1.0ce2bf154c3f2p-852,
     0x1.f62847f85e091p-785, 0x1.bd1fc5d990b48p-675, 0.0, 0x1.d0a3e77f2e388p-370, 0.0,
     0.0, 0x1.164f2cb2e0b08p-710, 0x1.d9e228b091344p-274, 0x1.8400d858ed537p-108,
     0x1.90039e8087c2bp-884, 0x1.a556b42e6cb89p-473, 0.0, 0x1.d407cb0d69dabp-677, 0.0,
     0.0, 0x1.19bb3603961bap-158, 0x1.5feb72a0fb162p-643, 0.0, 0.0, 0.0,
     0x1.663e6b68f3f18p-235, 0.0, 0x1.b9d1f9000cb23p-482, 0.0, 0x1.b7697f5c1553bp-693,
     0.0, 0x1.4ff215631cd84p-85, 0x1.601a8c376d30fp-409, 0.0, 0x1.a3093a1357f08p-661,
     0.0, 0.0, 0.0, 0x1.5c5f063664096p-778, 0.0, 0.0, 0.0, 0x1.6389f4ed629edp-896,
     0x1.9577f53c6a7e9p-209, 0.0, 0x1.c5419abfda89ap-507, 0.0, 0.0,
     0x1.fefd8871c4a09p-932, 0.0, 0.0, 0x1.8b75be11352bp-437, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed546f44a5d4ep-921, 0x1.dc48eff517799p-738, 0x1.596cfb16bfabbp-32, 0.0, 0.0,
     0.0, 0.0, 0x1.c818dcd12cbd7p-471, 0x1.b3cf8b447bfb3p-956, 0.0,
     0x1.98726d3ef559ep-670, 0x1.4377487b7d832p-981, 0.0, 0x1.372d05e36e363p-206, 0.0,
     0.0, 0.0, 0.0, 0x1.2b475a5fb4cb4p-854, 0.0, 0.0, 0x1.9a993731a28bep-59,
     0x1.6c218cdeeb9fdp-435, 0.0, 0x1.98397a6a59081p-844, 0x1.4e389f67b4898p-931,
     0x1.3f6e2d39e29c2p-282, 0.0, 0x1.d777ad666a79fp-383, 0.0, 0x1.1a6e464450308p-700,
     0x1.02fa6a583dfafp-383, 0.0, 0x1.3f25c516c06acp-38, 0x1.0fe7e21eb4a91p-765, 0.0,
     0.0, 0x1.c3f855638eb6dp-410, 0x1.573aeb017da5fp-510, 0.0, 0x1.2855c40a8c521p-835,
     0.0, 0.0, 0.0, 0x1.42c6972f3a4bdp-658, 0x1.36d1b0b172cc5p-725, 0.0, 0.0,
     0x1.56529cf1f2cb2p-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b120d6d8ffc47p-310,
     0.0, 0x1.fe6417b4e3a52p-61, 0.0, 0.0, 0x1.1e64eeeac245ap-7, 0.0, 0.0,
     0x1.dd0561807118p-980, 0x1.e2bf490abb561p-356, 0x1.df935a57104d7p-13,
     0x1.90a33becd0f7ep-536, 0.0, 0.0, 0.0, 0x1.b337eeaab6a9cp-367,
     0x1.0a92d26252453p-876, 0x1.d57d7018dba5ep-996, 0x1.2446111700677p-224, 0.0,
     0x1.fb30cc9536b5ep-99, 0x1.3c2e541d0baeep-890, 0.0, 0.0, 0x1.458918f1da5a9p-916,
     0.0, 0x1.041edecc5ffb6p-621, 0x1.db35018038208p-474, 0.0, 0.0,
     0x1.48ccc79b5cc14p-687, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5eab1800bb2f2p-760,
     0x1.d181d1136a337p-385, 0.0, 0x1.08ddf70a91cdp-61, 0.0, 0x1.b216a008c2aaep-336,
     0.0, 0.0, 0.0, 0x1.a02523da3db76p-317, 0.0, 0x1.e8c73048dde99p-537,
     0x1.6e99eb782ef2bp-905, 0.0, 0x1.21900649bc8eap-621, 0x1.a48758baf2d61p-324, 0.0,
     0x1.909cde90bea6bp-772, 0x1.2b8ae0114556bp-59, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1ae15700ea8b5p-944, 0x1.df757d13fe0b6p-52, 0x1.61ca7c75a1552p-704,
     0x1.8f1c82a07d6e2p-49, 0x1.872c042b3ef7ep-869, 0x1.8d0ac0f31a3ap-958,
     0x1.f09778c447c6dp-891, 0x1.23198293b0627p-896, 0x1.fb31b18db584ap-162,
     0x1.36f257109ba48p-232, 0x1.86d834c20c4c3p-632, 0x1.6e28e4eb631eap-349, 0.0, 0.0,
     0.0, 0.0, 0x1.4851c2907f494p-988, 0x1.831cdfc99fdf7p-140, 0.0,
     0x1.e33407a959f3cp-91, 0x1.a426e9789d6fap-845, 0.0, 0x1.8da5c97a62b2dp-294,
     0x1.40d953477b01bp-416, 0x1.269780a9dbc0fp-526, 0x1.d04e026d6c26ep-124, 0.0, 0.0,
     0x1.474027dfff0cap-964, 0.0, 0x1.5a5008e610b62p-281, 0.0, 0x1.c0cb120019123p-10,
     0x1.4189e37858dedp-560, 0x1.1a5a229012158p-791, 0x1.8ce2beaaa1473p-322,
     0x1.9e6aee7871fap-923, 0x1.fb6018a35cd78p-98, 0x1.02935b77afb22p-569,
     0x1.8a389906a348fp-10, 0x1.7805450a37d94p-905, 0.0, 0.0, 0x1.7923ebff1ef5ep-266,
     0x1.fee62c73bc7d4p-407, 0.0, 0.0, 0x1.7f9f2041ec03fp-305, 0.0,
     0x1.bd1b53500eadp-623, 0.0, 0.0, 0x1.91936f05f6bb3p-804, 0.0, 0.0,
     0x1.2988299280e01p-313, 0x1.a487837d07385p-611, 0.0, 0.0, 0.0,
     0x1.41561c329174dp-817, 0x1.f7137d1d9394ap-776, 0.0, 0.0, 0.0,
     0x1.dd907dfab66a2p-607, 0x1.aed14b4661df6p-210, 0.0, 0x1.6ee75b13a0fa6p-624, 0.0,
     0.0, 0x1.93f78a48c603p-119, 0.0, 0.0, 0.0, 0.0, 0x1.cb3171ec5aed4p-638,
     0x1.967d5d33a9a1dp-914, 0x1.c2a11964a5eb2p-209, 0.0, 0x1.fc0e8faef6e76p-876,
     0x1.b09b0f7141c99p-392, 0.0, 0.0, 0x1.57e86da855f7ap-557, 0x1.f0f9251bb26cep-683,
     0.0, 0x1.a3878617d418cp-71, 0.0, 0x1.db7f98c21dad8p-283, 0.0, 0.0, 0.0, 0.0,
     0x1.2ac4e1db61153p-783, 0.0, 0x1.d5c312090db18p-117, 0.0, 0.0,
     0x1.96e022110a5bbp-738, 0x1.720390875b6dfp-941, 0.0, 0x1.70490dad53b17p-758,
     0x1.d820f83acc876p-223, 0x1.f795d69557996p-934, 0.0, 0.0, 0x1.dd31f5a31f4c6p-120,
     0x1.2179e62c63909p-111, 0x1.2662a7e2de682p-1006, 0x1.a561335a88577p-117, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fea5c17f4c0e3p-145, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.68d727ba7346bp-139, 0x1.f8d71940fe60dp-344,
     0x1.3c23983478c5ep-934, 0x1.c1ccfe38c21dp-37, 0x1.db4c7af839ac7p-463, 0.0,
     0x1.8df1e9d1b9cf3p-725, 0.0, 0x1.185297e345bfp-668, 0.0, 0x1.cf4e1bde7e3b7p-557,
     0x1.b6eb178844669p-721, 0.0, 0x1.2ce91a7772b4ap-34, 0.0, 0x1.1ef4ba2331b44p-978,
     0x1.0ac12ed6ba35bp-380, 0x1.bdddd1a9f7e16p-731, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97b9bea8d219cp-357, 0x1.5141268fddd02p-1009, 0.0, 0x1.1381513cd4bfap-489,
     0.0, 0x1.c857dd88f0412p-78, 0.0, 0x1.58453a69902bbp-248, 0.0,
     0x1.1ceb06910066ap-715, 0x1.0efbda33e162bp-204, 0x1.1995bb6a56f86p-920,
     0x1.646ea057b1e2cp-308, 0.0, 0.0, 0.0, 0x1.5269e4701d222p-520, 0.0, 0.0,
     0x1.ccc8e5db95fdfp-509, 0.0, 0.0, 0.0, 0x1.83b8ba2a23291p-374, 0.0,
     0x1.30c8023b121e3p-162, 0x1.25a1e69703d6ap-444, 0.0, 0x1.1bbf8f2b23b07p-662,
     0x1.fae27da56c98p-670, 0.0, 0x1.0dd0409227021p-154, 0.0, 0x1.f56523287c7a8p-602,
     0x1.bb51d7e7cad31p-706, 0.0, 0.0, 0x1.9a5cb8100b268p-743, 0x1.1dd11de188234p-706,
     0.0, 0.0, 0x1.d552d924c33bcp-512, 0.0, 0.0, 0.0, 0x1.dd187b5de045cp-372, 0.0,
     0x1.6d491e8a710aep-638, 0x1.a4e058ba2f49p-835, 0x1.1eda74262cf77p-38, 0.0, 0.0,
     0.0, 0x1.3449041187012p-460, 0x1.3d52a34297029p-459, 0x1.88271c3ebcd3p-986,
     0x1.0130b90533c69p-643, 0x1.6bd11b6cbba77p-259, 0x1.0af1baaf337b6p-178,
     0x1.98b7d88ad5d7ep-415, 0x1.a513f67dad10dp-914, 0.0, 0.0, 0.0, 0.0,
     0x1.87be5647d5f0dp-16, 0.0, 0x1.6324c6f658e95p-684, 0x1.e3ff0b1332e17p-775,
     0x1.c14eac51cf47fp-137, 0x1.c19b9295d0fefp-885, 0.0, 0.0, 0x1.62a55908ccb8p-920,
     0.0, 0x1.5098608823098p-90, 0.0, 0.0, 0x1.c267154270cc8p-765,
     0x1.c195d72ef1a2p-999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f6848a018ffp-1021, 0.0,
     0x1.6da3e20ddcb0cp-671, 0.0, 0x1.206a4ddb7fd28p-592, 0x1.10cf0cc20c4f2p-41, 0.0,
     0.0, 0x1.0ac6b42b812a6p-54, 0.0, 0x1.b8ba69466c06fp-655, 0x1.2cd4bab0cfc74p-94,
     0x1.d871526752418p-493, 0.0, 0.0, 0x1.080a29a21287p-308, 0x1.4e19d3d3885b2p-148,
     0.0, 0x1.598cd9a6eb46dp-997, 0x1.eb396c65a7ac7p-463, 0x1.5951453fb9482p-290,
     0x1.fde3be3c1c7a3p-496, 0.0, 0.0, 0x1.7fda56cc9c50dp-426, 0.0,
     0x1.201d15cc369bcp-1018, 0.0, 0.0, 0x1.ccf6c4d9f9c4p-580, 0x1.2fe858f9d711fp-746,
     0x1.78a08714306bdp-854, 0x1.7877b6a0f82afp-533, 0.0, 0x1.0cba7d26cadd9p-413,
     0x1.ed1d4bf7386d1p-260, 0.0, 0.0, 0.0, 0.0, 0x1.fd886fb6a2de9p-117, 0.0, 0.0,
     0x1.a686e6a6d1d9p-652, 0.0, 0.0, 0.0, 0x1.f2818c4a11398p-490,
     0x1.0f1d823ad8eb2p-1001, 0.0, 0.0, 0.0, 0.0, 0x1.8c7e3ba06b259p-251,
     0x1.bb347a2396f1dp-179, 0x1.4cdcd193338cap-41, 0.0, 0x1.a6529058ce6f8p-799,
     0x1.91ce87dbf245fp-603, 0x1.104243cc78118p-576, 0.0, 0x1.5c43a77c00a9ep-672, 0.0,
     0x1.79363b46103a1p-249, 0x1.5ffefbeb15501p-305, 0x1.4b2fd4951fc3p-993, 0.0,
     0x1.6d4270763b321p-327, 0x1.36b25a6accc8ap-547, 0.0, 0.0, 0.0, 0.0,
     0x1.bc8d67a702ff6p-14, 0.0, 0x1.0e2fc6badd843p-571, 0x1.f41eec5882c4dp-964,
     0x1.82da4790f5cdep-846, 0x1.5a443aea85576p-685, 0x1.970f6a97faf87p-433,
     0x1.460b7b9114c3p-235, 0.0, 0x1.6b210245284f9p-876, 0.0, 0.0,
     0x1.ae2b2b8a2e183p-932, 0.0, 0x1.44023241284f9p-801, 0.0, 0x1.e1f3adfcbc7f4p-406,
     0x1.c86d897573f38p-652, 0.0, 0x1.ae82d6bd30035p-993, 0x1.f6f8996be3ba3p-765, 0.0,
     0x1.980219110bb1cp-551, 0x1.caa9e496e0cep-1019, 0x1.f808b2ed9c872p-598, 0.0,
     0x1.b8bdf6589c57ap-501, 0x1.96568fa8bb0ffp-965, 0x1.e5316e98e8345p-252,
     0x1.36b1a57548029p-601, 0.0, 0.0, 0.0, 0.0, 0x1.9d5dd058ed0d3p-238,
     0x1.c25a0364af45ap-569, 0.0, 0.0, 0x1.d862a7e9ba9ep-917, 0.0,
     0x1.ef8107602f693p-658, 0x1.b0026d9ecbc0cp-845, 0.0, 0x1.00d38e3b09fbfp-151,
     0x1.9ce1e78aeff51p-322, 0.0, 0x1.8cf5d8927a5ddp-919, 0.0, 0.0,
     0x1.263bf7e17361ap-81, 0.0, 0x1.adc5ab689d11fp-273, 0x1.9d57f8815817ap-194,
     0x1.81ce9661e3957p-921, 0.0, 0.0, 0.0, 0x1.d8680bca3f091p-519,
     0x1.3eeba52b815adp-840, 0.0, 0.0, 0.0, 0.0, 0x1.b592917692e21p-221, 0.0,
     0x1.1975aa3d04968p-811, 0.0, 0x1.d480a27a0bb54p-992, 0.0, 0.0,
     0x1.6f8eb6f81f748p-507, 0.0, 0.0, 0.0, 0x1.85e705ded8724p-68,
     0x1.a9ae03a82aa76p-247, 0.0, 0x1.9a275edd5db67p-899, 0.0, 0x1.a751d8adbc301p-596,
     0.0, 0x1.db5b8de8c6686p-388, 0x1.399d4a4171a81p-405, 0.0, 0x1.d56cd1ab12861p-115,
     0x1.199838dacb976p-532, 0x1.da6ed307000a9p-833, 0.0, 0x1.84d894bf33f12p-697,
     0x1.8f71a737d310dp-36, 0x1.f5f57b733927ap-826, 0x1.9c331fe3393a8p-622,
     0x1.2fc14734f8c21p-243, 0x1.31496402a27e1p-118, 0x1.d05b1aa240514p-845, 0.0, 0.0,
     0x1.6ae01c88dfa2ap-204, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5b28e1457a7p-141,
     0x1.56ce7f4907cfcp-985, 0.0, 0x1.ccac408da6d7cp-879, 0.0, 0x1.598f802aff46ap-361,
     0x1.e3bdd74d8a29cp-330, 0x1.49c1b268c5e5dp-476, 0.0, 0x1.f79241efebaf6p-340, 0.0,
     0x1.ce1c769b31c2dp-191, 0.0, 0x1.b073f39dcbb86p-126, 0.0, 0.0, 0.0,
     0x1.e75907880b1a1p-699, 0.0, 0x1.160e020f21c6bp-771, 0.0, 0x1.954c48ecaa4a4p-712,
     0.0, 0x1.75d64e3da2377p-378, 0x1.efcb39d9b0678p-768, 0x1.10b82d2d31108p-79, 0.0,
     0x1.87f596fddd9c3p-783, 0x1.48ef51540d9cbp-97, 0x1.5d69e758c9de6p-698, 0.0,
     0x1.204a7d30371b9p-416, 0x1.468ad61a468c9p-974, 0.0, 0.0, 0x1.b7e810627112ep-331,
     0x1.e2f551586d519p-342, 0.0, 0.0, 0.0, 0x1.acba7f5dd7436p-948,
     0x1.dea2a5d66e46ep-449, 0x1.0dd4e834cea46p-721, 0.0, 0.0, 0.0, 0.0,
     0x1.d13689e364182p-155, 0x1.7a965cf119d9dp-916, 0x1.0f5fdb7959e8p-822,
     0x1.c29023d4c3417p-930, 0.0, 0x1.a93142c53f6e5p-906, 0x1.f8b88672a2108p-417,
     0x1.1437eba424781p-535, 0.0, 0x1.b461210cd70dcp-767, 0.0, 0.0, 0.0,
     0x1.5b2a4a77d5725p-488, 0x1.4c23cad4dd211p-505, 0x1.7eb6d408368ecp-597,
     0x1.94ec0fb21c95ep-1021, 0x1.38e5733692e8bp-991, 0x1.7350e2881be87p-556, 0.0,
     0x1.1d5b105b8686p-456, 0x1.b0b9d7e4e8dffp-415, 0.0, 0x1.c29d49e631137p-359, 0.0,
     0x1.52fe1b0318f1ep-47, 0.0, 0x1.6dd45dc726a63p-102, 0x1.c01a3b5589ed9p-35,
     0x1.eb00a71abc3b2p-901, 0.0, 0x1.9bd6f20ef5398p-98, 0x1.b4160b16489c8p-356,
     0x1.2ee54f1a22623p-394, 0x1.6ec9a78291e44p-463, 0x1.faf6eae9d0afdp-89,
     0x1.55e975207ec2fp-241, 0.0, 0x1.4f3c5bb115de4p-116, 0.0, 0x1.bd2573b6cafd8p-287,
     0.0, 0.0, 0.0, 0.0, 0x1.061c9bf4f656ep-680, 0.0, 0.0, 0x1.e7fbf688be937p-211,
     0x1.6347653829042p-193, 0.0, 0x1.56fb7fa7ddeb8p-350, 0x1.5142bfc983129p-141, 0.0,
     0.0, 0.0, 0x1.c4ef5a0d35c49p-322, 0.0, 0.0, 0.0, 0.0, 0x1.7588b7f722026p-648,
     0x1.36d7f26a3756ep-693, 0x1.6484c7667a5bp-111, 0x1.4f16848cb887dp-984,
     0x1.2f997405d712p-971, 0.0, 0.0, 0x1.b0ecb96be317ap-378, 0.0,
     0x1.64858bbdcac6bp-249, 0.0, 0.0, 0.0, 0x1.61c5209e5a85cp-956,
     0x1.fb6173bdcc0f9p-49, 0x1.e59aca58fba71p-966, 0.0, 0x1.677741cc762aep-312,
     0x1.a2173fabd1077p-320, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2ccc6790a1e27p-761,
     0x1.7499f77b84744p-931, 0.0, 0x1.07423d72704e2p-755, 0x1.841c342c90b4cp-811, 0.0,
     0x1.f756f93214bb2p-773, 0x1.61a511cbfd439p-335, 0x1.de5276f4ec8dep-366, 0.0,
     0x1.b3be061979829p-743, 0.0, 0x1.4124bbe712a64p-1, 0x1.04074bc5e6283p-199, 0.0,
     0x1.c8a2209fa5fbap-29, 0.0, 0.0, 0x1.9a610ea391454p-913, 0.0, 0.0, 0.0, 0.0,
     0x1.8c7be23ec254bp-878, 0.0, 0x1.166684f6b2839p-918, 0x1.661c00cb3b65ep-81, 0.0,
     0x1.22513963e063dp-740, 0.0, 0.0, 0x1.35ff156253575p-704, 0x1.71b50e228edb9p-12,
     0.0, 0x1.98de507938981p-392, 0x1.09c419a73fbd4p-935, 0.0, 0.0, 0.0,
     0x1.d80feb6b7a681p-127, 0x1.6076b0afa344fp-940, 0.0, 0x1.1fa79c125da7cp-335,
     0x1.dc88d63a5210cp-38, 0x1.f32d5c8aad832p-584, 0.0, 0x1.42ed836815825p-245, 0.0,
     0x1.48625537fc9fp-761, 0x1.a335a2098ba5p-735, 0x1.be1389be5aa13p-212, 0.0, 0.0,
     0.0, 0x1.f0a6657272f2p-15, 0.0, 0.0, 0.0, 0.0, 0x1.e136fc9b9cdc2p-72,
     0x1.c91e6b73cc95cp-107, 0x1.32b9df1c03efbp-884, 0x1.502b72bc1af8dp-189, 0.0, 0.0,
     0.0, 0x1.fa1f6ecfa6645p-541, 0x1.afac0cc75f905p-829, 0x1.6a78c2d0354dp-545, 0.0,
     0.0, 0.0, 0.0, 0x1.14ec904fd6a4cp-709, 0.0, 0.0, 0x1.c45715bb620f9p-997,
     0x1.7ec456e7f850ap-263, 0.0, 0x1.b26734d89f4a8p-463, 0.0, 0.0,
     0x1.3bbf6e16c206ap-173, 0x1.02d1fef48fbdcp-726, 0.0, 0.0, 0x1.2caa69a42d5dfp-713,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee1d6ce7422ep-731, 0.0, 0x1.2d617b7393334p-8,
     0x1.760813cc5d6cfp-619, 0x1.a6abd95c502fcp-424, 0.0, 0x1.ecc468f089382p-117,
     0x1.924dbb110b16cp-458
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
            tmp1 = tan(tmp0);
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
    printf("tan %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("tan bench acc %la\n", global_bench_acc);
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
