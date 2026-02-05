/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand1_u10purecfma.c --function \
 *     Sleef_finz_tand1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.00265b7e2ae5ep-937, 0.0, 0.0, 0x1.22c82bbeced35p-7, 0x1.5de1d8601cb5bp-684,
     0.0, 0x1.4341e7dab0095p-778, 0.0, 0.0, 0.0, 0x1.7a579f813f995p-106,
     0x1.be8496f171aa3p-371, 0.0, 0x1.3c035c8b2d3b1p-846, 0.0, 0.0,
     0x1.f03e5393fd8a7p-419, 0.0, 0.0, 0.0, 0x1.6d56947326b77p-227, 0.0,
     0x1.c2522b4aed365p-786, 0x1.9e7c2f25eed4ap-612, 0.0, 0.0, 0x1.16d2704fc719fp-630,
     0.0, 0x1.10f3488d91a76p-1009, 0.0, 0x1.7f5245623e123p-860,
     0x1.78a329b83384bp-930, 0x1.cbdc29e93b53ep-483, 0.0, 0x1.3c3189aec0777p-314, 0.0,
     0x1.063c02575db11p-1005, 0x1.7953db62e1d4fp-827, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b751b9148745p-318, 0x1.88683a81ed1bep-731, 0x1.7e73131286c57p-386, 0.0,
     0x1.db48b2e192565p-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1fccab567ed5p-480, 0.0,
     0.0, 0x1.23525b2142daep-915, 0x1.c20fc15f9e14fp-312, 0.0, 0.0,
     0x1.d5b4095303656p-741, 0x1.65550e56e6537p-736, 0x1.4b20373fc93a1p-698, 0.0, 0.0,
     0.0, 0x1.82e102ce2b9eap-293, 0x1.e48ba2d23f424p-182, 0.0, 0.0, 0.0,
     0x1.1283b30daa378p-808, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a28c80a5b160ep-117,
     0x1.7c87eb232fe47p-83, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6501baa2cdc3cp-201,
     0x1.b86230a4e0edcp-953, 0.0, 0x1.20f867aecee42p-158, 0x1.29d9c2bb65f2ep-93,
     0x1.aaf8c7c378818p-794, 0x1.f4781d2c2bf91p-118, 0.0, 0x1.01de2debc97dap-651,
     0x1.9c1a16b0d3dd5p-109, 0.0, 0x1.10a5b4378380dp-463, 0x1.9cf7d73ee1b5fp-243,
     0x1.d037916128227p-979, 0x1.b5b710e1c8083p-369, 0x1.0794ca67af97ep-670,
     0x1.c9d56dc8838c8p-431, 0.0, 0x1.9be86acb20a23p-290, 0x1.873c48f9f148ap-976, 0.0,
     0x1.bd42e2b3cefcdp-624, 0x1.805871ce3dd9ap-885, 0x1.cabf8f292e80bp-187,
     0x1.26a973f240b77p-921, 0.0, 0x1.a79869f7396d5p-68, 0x1.5287f9fbb5205p-838,
     0x1.92892b9dd375fp-794, 0x1.94a343983b74ap-258, 0.0, 0.0, 0x1.a57214af2c76fp-454,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a57bb8d9896f3p-693, 0x1.d617457510d9dp-64,
     0x1.57216b14f25aap-911, 0.0, 0.0, 0.0, 0x1.69d472683ddcp-700,
     0x1.b6eef4a3928fep-756, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.412d71ca15751p-533,
     0.0, 0.0, 0x1.b93590ce4165ep-477, 0x1.20409cf642e86p-525, 0.0,
     0x1.7ecd21839888cp-988, 0.0, 0x1.0a1dc3a9b5148p-421, 0.0, 0x1.ba1d645155156p-630,
     0x1.107493b5bd194p-352, 0.0, 0x1.972b1987624f6p-520, 0.0, 0x1.55e5a9f0023b2p-391,
     0x1.eaf3a133126c3p-109, 0x1.ea2c0957e6172p-962, 0.0, 0x1.785e7d70ea946p-172, 0.0,
     0.0, 0x1.be8c8914e592fp-393, 0.0, 0.0, 0.0, 0.0, 0x1.cb9309a023024p-242,
     0x1.b4175591ecf8bp-967, 0.0, 0.0, 0.0, 0.0, 0x1.bdcc827fd471p-451,
     0x1.2a6e17f3f969ap-247, 0.0, 0x1.f03cc9448cdeep-653, 0.0, 0.0,
     0x1.b7939282d3566p-496, 0x1.be766d1625503p-240, 0.0, 0.0, 0x1.58c93812c9737p-488,
     0x1.db791d5952278p-222, 0x1.433215a45a7e4p-462, 0x1.14b9f637f62c5p-686, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bd53016f5008ep-768, 0.0, 0x1.b8e5ae5d59006p-133,
     0x1.ed72ab91cbbd9p-18, 0x1.4857f9ed0cp-782, 0.0, 0.0, 0.0, 0.0,
     0x1.0193a4d9c9339p-273, 0x1.ca1770e9538e5p-354, 0x1.006fa34175257p-139,
     0x1.44622e36e953p-205, 0.0, 0x1.d2c06bbbedf69p-715, 0x1.9823c038759a3p-342, 0.0,
     0x1.8e323b4ff04fdp-306, 0.0, 0x1.df360fa81b87dp-894, 0x1.bc05c365a299fp-1008,
     0x1.c4ab04501a425p-799, 0.0, 0x1.66bbb29e25768p-967, 0.0, 0x1.36dbf26abdc6ep-114,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c92cd9bb13f0dp-553, 0.0, 0x1.bc729a8322ee3p-7, 0.0, 0.0, 0.0,
     0x1.b0de5aa52daf8p-354, 0.0, 0.0, 0x1.506483bf70f69p-917, 0.0,
     0x1.475d24b91af9dp-747, 0x1.c29502fb1dadap-696, 0.0, 0.0, 0.0,
     0x1.9948addacc0dbp-966, 0.0, 0x1.1732558f954d6p-608, 0x1.e9062455e796bp-909, 0.0,
     0.0, 0x1.83e142d6f85e9p-583, 0.0, 0.0, 0.0, 0x1.17455df53a821p-264,
     0x1.d6c35ca21bb7ap-463, 0.0, 0.0, 0.0, 0x1.400714b8882c7p-208, 0.0, 0.0,
     0x1.e40ed2490b4fep-234, 0x1.469cf18d9d1aep-801, 0.0, 0x1.03fa957f3b895p-597,
     0x1.1965a21ea0fd6p-184, 0x1.f64523eda30a3p-498, 0x1.8291a29815ba5p-958, 0.0, 0.0,
     0x1.81fb8a844066p-319, 0x1.95b2f03e3415bp-233, 0x1.96a02a1b657eep-837, 0.0, 0.0,
     0.0, 0x1.4e2533d0c9bd5p-284, 0x1.c40052c214115p-661, 0x1.8d41d1a032075p-1011,
     0.0, 0.0, 0x1.83a0acce33931p-513, 0.0, 0.0, 0.0, 0.0, 0x1.d372c07d1a19p-779,
     0x1.30b863efe5da8p-411, 0.0, 0.0, 0x1.37214c90d77c8p-152, 0.0,
     0x1.3195f9c366a0ep-884, 0.0, 0x1.f3eab447ab662p-752, 0x1.5e72e9ee4c1b2p-622, 0.0,
     0.0, 0.0, 0.0, 0x1.d5d623b4d0f84p-958, 0.0, 0.0, 0x1.65733f7135a7ep-670,
     0x1.e9886ada4e778p-728, 0x1.6644fcb78e8ecp-459, 0.0, 0x1.d55cf2d496b06p-381, 0.0,
     0x1.f3a55c1e0be56p-876, 0.0, 0.0, 0.0, 0x1.ac7fa959ff811p-698, 0.0, 0.0, 0.0,
     0x1.62766c98361acp-387, 0.0, 0x1.0c4c0896f9ae5p-734, 0x1.556f29882d021p-395, 0.0,
     0.0, 0.0, 0.0, 0x1.6239d6f521ee2p-953, 0x1.57a9f2b2b81a6p-608,
     0x1.fc8469e1e925bp-855, 0x1.144c5902997e5p-991, 0x1.2f6af86e8baa5p-41,
     0x1.22ee28a25ccf6p-203, 0x1.12f87bfdd923ap-205, 0x1.3eed2abbef236p-488, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2ea4a44662b93p-603, 0x1.5fee433bd364ap-134, 0.0,
     0x1.e44b036a10e76p-1007, 0.0, 0x1.c6cfa7ec52ccdp-994, 0x1.b16fccb2746a9p-942,
     0x1.1c1130dec1feep-270, 0.0, 0x1.4e54c5f90effcp-303, 0x1.51fc894117eccp-961,
     0x1.6f53133f4401ap-294, 0x1.a73ed9e137694p-894, 0x1.c4e6bcf2909c9p-574,
     0x1.c48db0df051bdp-584, 0.0, 0x1.17a42bc6724d3p-255, 0x1.671486aa9caf1p-658,
     0x1.185a798fe9ee4p-427, 0x1.c0edf65304e03p-16, 0x1.f9514bbd28777p-787,
     0x1.399e64a050fdep-439, 0x1.925186269e8a5p-351, 0.0, 0.0, 0.0,
     0x1.7a5b6905cf877p-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c9ca6a8c5c73p-668,
     0x1.45e89ef423388p-402, 0.0, 0.0, 0x1.bd735d0c26a85p-1017, 0.0,
     0x1.d163b831c16fap-453, 0x1.d7d2976f956cbp-756, 0x1.c7e323e00fdf2p-361,
     0x1.a4e57e039a387p-790, 0.0, 0x1.c42140e7ac0f7p-178, 0x1.f51890fa0d7d5p-900,
     0x1.7ce5643a36abp-347, 0.0, 0.0, 0x1.a4b1e06112758p-677, 0x1.2be5e850faf63p-220,
     0.0, 0x1.e03a58cf684e6p-314, 0.0, 0.0, 0x1.ee69ea01298fap-290,
     0x1.01490ec58d28bp-499, 0.0, 0.0, 0x1.f76d90d2b7c1p-206, 0x1.11cb1a1293a37p-650,
     0x1.266f46d516e53p-427, 0.0, 0.0, 0.0, 0.0, 0x1.ed680d7be022ep-965, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.954843ee5e9adp-585, 0.0, 0x1.78c25601da1eep-786, 0.0,
     0x1.d45dc9b11ddf4p-541, 0x1.bd8251e476f5fp-872, 0x1.0293e6104ff5bp-47, 0.0,
     0x1.f345a9538116p-519, 0x1.dfeb66785afafp-18, 0.0, 0.0, 0.0,
     0x1.6653f87bb3334p-529, 0.0, 0x1.f2cd142b0c8b4p-166, 0.0, 0.0, 0.0, 0.0,
     0x1.c1eb5c573acf7p-402, 0x1.0ce2843f81dd3p-376, 0.0, 0x1.0c1b5b074e035p-472,
     0x1.39d1aad3af857p-209, 0.0, 0.0, 0.0, 0.0, 0x1.c9af1c86a648ep-647,
     0x1.7bb4e4fa2b3c3p-177, 0.0, 0.0, 0x1.62280d7213cbcp-370, 0x1.04adf964b2787p-88,
     0.0, 0x1.4134024cf8d7cp-553, 0.0, 0x1.99128315e7ea2p-985, 0x1.9449e1a417d96p-739,
     0.0, 0x1.5347ab6c8f4f8p-472, 0x1.afcae273fee4bp-160, 0.0, 0.0, 0.0,
     0x1.4a34eeb6a34c9p-407, 0.0, 0.0, 0x1.6e8e59e1df9fcp-104, 0.0,
     0x1.3033424ad9683p-610, 0.0, 0.0, 0.0, 0x1.4447e10b867a3p-122, 0.0, 0.0, 0.0,
     0x1.f69a9a64c3556p-637, 0.0, 0x1.187a8da052532p-885, 0.0, 0.0,
     0x1.93f8fed1c783ap-949, 0.0, 0.0, 0x1.6ee22988bcf15p-497, 0.0, 0.0, 0.0,
     0x1.bae9d822c0578p-269, 0x1.336e43852512dp-669, 0.0, 0.0, 0.0,
     0x1.e862aaf0163cep-357, 0.0, 0x1.f71c2681d033cp-40, 0x1.40f49b89078b4p-793, 0.0,
     0x1.202f741934b3bp-561, 0.0, 0.0, 0.0, 0.0, 0x1.f0f8eabd0b9c2p-290,
     0x1.4fc4965703c33p-715, 0x1.682d8beaeb3p-484, 0x1.ecb75419d370bp-233,
     0x1.6c155a08b36fbp-337, 0x1.f60104c3ba4c6p-430, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a0bd42ce0d8b1p-728, 0.0, 0x1.68d5f0529ceefp-210,
     0x1.a77841bea029ep-514, 0.0, 0x1.5521f2ae536d2p-945, 0.0, 0.0,
     0x1.7786c17b800ep-206, 0.0, 0x1.a494b7b4ad25ep-941, 0x1.f3ae17b06ed8ep-975, 0.0,
     0x1.c67654b15c37dp-587, 0.0, 0x1.d2fa4cd690cb4p-895, 0.0, 0.0, 0.0,
     0x1.ff2c9b2aee2dfp-777, 0x1.991444584cb44p-362, 0.0, 0x1.35bd18c4a054cp-675,
     0x1.79f3d1f1b9a47p-286, 0.0, 0x1.108492780e38cp-61, 0x1.5e886605c8c7bp-544, 0.0,
     0.0, 0.0, 0.0, 0x1.1a62528d402c7p-946, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8fcfdba6411cp-480, 0.0, 0.0, 0.0, 0x1.d76e480eb4552p-682,
     0x1.ca943022ba9a7p-188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2298152d2e7bcp-764, 0.0, 0x1.c138237985cf4p-439, 0.0, 0x1.065cff7b48832p-283,
     0.0, 0x1.e57040f375c7bp-944, 0.0, 0x1.3e59782405fecp-53, 0x1.033e613c543cfp-434,
     0x1.c12b3e4558947p-572, 0.0, 0x1.5cf88aed58221p-738, 0x1.12d886fbb899ap-152, 0.0,
     0.0, 0x1.421b916087baap-297, 0x1.24239fe31b9dep-488, 0x1.d00504d480968p-151,
     0x1.295b7b6fce0c6p-260, 0x1.79569963e6ae8p-966, 0.0, 0x1.9cde0d9e7c906p-785, 0.0,
     0x1.f56ca21b5d022p-275, 0x1.b2b2139aea187p-617, 0x1.b64c4aef0bd1bp-992, 0.0, 0.0,
     0x1.f3597a8921b2fp-711, 0.0, 0x1.bfa34a0fbd8c7p-50, 0x1.46d65e67cc7f5p-605, 0.0,
     0x1.4b93d60459b25p-155, 0x1.721b4ee4dfbffp-755, 0.0, 0x1.af3c9ac15af1cp-733, 0.0,
     0.0, 0.0, 0x1.59e9314bbcecap-260, 0.0, 0x1.883d7e8a3757fp-78, 0.0, 0.0, 0.0, 0.0,
     0x1.ec94277bf8f41p-328, 0x1.6f570b393f18fp-94, 0x1.80d17cc95d961p-724,
     0x1.00d6596dfa967p-639, 0x1.6723ee78633aap-788, 0.0, 0x1.b687ee3c8972fp-679,
     0x1.7f73a6701546cp-3, 0.0, 0x1.7df8eabfb4fd3p-232, 0.0, 0x1.1432fd53c31dap-554,
     0.0, 0.0, 0.0, 0x1.ad5676193d24dp-85, 0.0, 0.0, 0x1.c9bd3e9b3e14p-959,
     0x1.acd91548daf12p-992, 0x1.cfb15dbd9b609p-890, 0x1.c14e80e54a9cdp-780,
     0x1.6ce969fb12c24p-176, 0x1.28b29992215a1p-116, 0x1.d4551f1b3a387p-900,
     0x1.a5451efa54d63p-686, 0x1.9eb4b58db0c41p-64, 0x1.51096d09cedc4p-809, 0.0, 0.0,
     0.0, 0.0, 0x1.ec8eed3ac54b3p-425, 0x1.9c147d6a77434p-362, 0.0, 0.0,
     0x1.e19c9d2074f96p-104, 0.0, 0x1.1867e31d5281fp-357, 0x1.642bb43084f77p-326, 0.0,
     0x1.43aae7b18f6a6p-637, 0x1.a6ca5fad4be59p-251, 0x1.2dc331738d88ep-462,
     0x1.561a9f0b9db0ep-877, 0x1.df07bb9f8dc51p-427, 0x1.43c5f91ccc538p-357,
     0x1.40eb3ab56a835p-640, 0x1.0ad345ab1b007p-955, 0.0, 0.0, 0.0,
     0x1.41cb07155082cp-442, 0x1.3981b237eafbcp-766, 0x1.7f0c1a5c9dd6fp-159,
     0x1.98cab6f37ee4fp-913, 0x1.6ba8b1663d48cp-153, 0.0, 0x1.003a4ca5da6ep-946,
     0x1.c12e03eee93bcp-200, 0x1.f6589ae9f2ea9p-907, 0x1.e507785b4d55bp-959,
     0x1.454e8bab0c649p-633, 0.0, 0x1.02b2aee4cc1b1p-426, 0x1.41cad9ee8dd95p-29, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4deabe87906ep-441, 0.0, 0.0,
     0x1.d8458067273fap-285, 0.0, 0.0, 0.0, 0.0, 0x1.cb3264cc37e3ap-300,
     0x1.825bf9e9aa9cdp-313, 0x1.6facdf450f0bcp-419, 0x1.65dad9bd48696p-905,
     0x1.a31783014abe8p-844, 0x1.cb002efad8677p-289, 0.0, 0x1.31e6b163be04dp-363,
     0x1.120cedde9888p-227, 0.0, 0.0, 0x1.f54852c5bf40cp-871, 0.0, 0.0, 0.0,
     0x1.2c2cf6311501ap-927, 0x1.73c84e05af06fp-323, 0.0, 0x1.60db146c5cd75p-726,
     0x1.6db1c0055acefp-553, 0.0, 0x1.bf99b352adaecp-904, 0.0, 0.0,
     0x1.b12a6843de3abp-635, 0x1.07c342c91e113p-102, 0x1.ad0cdbfad226cp-887,
     0x1.8ed0b9b575d96p-50, 0x1.245b0da0fdf2fp-730, 0x1.5c2914283816ap-587, 0.0,
     0x1.af570cf115682p-743, 0.0, 0x1.771339d777414p-203, 0x1.e2aef5533cf0bp-1019,
     0x1.3287abc9b8b6bp-764, 0.0, 0.0, 0.0, 0x1.ce9db81e820f5p-457,
     0x1.5964b7d97075ep-581, 0.0, 0.0, 0x1.f651b9b46e852p-213, 0x1.5e482d6ea71c8p-500,
     0.0, 0x1.28c5a47fad7e4p-61, 0.0, 0x1.28f81dc16f6c1p-729, 0.0,
     0x1.b6ddc618d5036p-182, 0x1.67b42c42e8c95p-828, 0.0, 0x1.cc062c0c364a6p-571,
     0x1.be70b2ee08939p-270, 0x1.609c95f80722fp-363, 0.0, 0.0, 0x1.2c7bcd94e4e41p-606,
     0x1.0d6b22d8290d4p-835, 0x1.3e307aa83c1b8p-916, 0.0, 0x1.dcf4fc876903cp-312, 0.0,
     0.0, 0x1.2823d3a28d79p-650, 0.0, 0.0, 0.0, 0x1.8ae724808055p-604,
     0x1.ed3d0ea950d45p-962, 0.0, 0.0, 0.0, 0x1.74a7ccf09d8ddp-390,
     0x1.6427421dfc944p-840, 0x1.464f2b59c74fp-915, 0.0, 0.0, 0x1.806fab55a7c7cp-435,
     0.0, 0x1.31ec2748b158ap-210, 0x1.05c3fe56bbfcap-924, 0x1.5398772860806p-369, 0.0,
     0.0, 0x1.8c687d7a4d128p-317, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.57230a2f22548p-850, 0.0, 0.0, 0x1.38b2042c4b001p-491, 0.0,
     0x1.0b4f45ea78ec1p-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5a93c600bb81p-226, 0.0, 0.0,
     0.0, 0.0, 0x1.1545ea7442af6p-399, 0.0, 0.0, 0x1.133b748f1d09fp-613,
     0x1.de00aeed9f828p-781, 0.0, 0x1.33ba9e08a671bp-356, 0x1.36add9f03bf1cp-211,
     0x1.0178f192527a9p-62, 0.0, 0x1.16297d73401aap-421, 0x1.12c4f1dbf251ap-628, 0.0,
     0x1.53f78a2406d93p-66, 0.0, 0.0, 0x1.5f3aad96cf167p-53, 0x1.ca44f557f722fp-847,
     0.0, 0x1.c922a4ba89db7p-42, 0.0, 0.0, 0.0, 0x1.ddddd5bb1b367p-455,
     0x1.4c4eee9a0f919p-279, 0x1.35f9c83274034p-966, 0.0, 0.0, 0x1.14aa6a8da242fp-833,
     0x1.18f81d5c5313cp-863, 0.0, 0x1.76c031fe1dfcbp-624, 0x1.29db56cfe57cbp-139,
     0x1.977d7a24cfbd6p-891, 0x1.e34adb74bb87cp-411, 0.0, 0.0, 0.0,
     0x1.96cc50769d594p-641, 0x1.54a0c44a85a9dp-374, 0.0, 0x1.e28d144e442f9p-883, 0.0,
     0x1.31329c53092c1p-835, 0.0, 0x1.fedff02d7d36ep-736, 0.0, 0x1.16611bda2fbdfp-299,
     0x1.4e9d311e36496p-537, 0.0, 0.0, 0.0, 0x1.e48517ecb73c3p-172, 0.0, 0.0,
     0x1.0fe633b244f3p-498, 0.0, 0.0, 0x1.60fc706e6d2f5p-245, 0x1.ffbb1faa36151p-224,
     0.0, 0x1.071719e87ac7ep-642, 0x1.bd9200ae9881ep-711, 0.0, 0x1.4831430075959p-841,
     0.0, 0.0, 0x1.91422cd81183cp-914, 0x1.353da9f772951p-98, 0x1.eeddd186d438ep-369,
     0x1.3497f9fb328efp-522, 0.0, 0x1.2f49a077f229cp-225, 0.0, 0x1.ee345164265a7p-283,
     0.0, 0.0, 0x1.443ed490554p-64, 0.0, 0.0, 0x1.43ee872a6749ep-977, 0.0, 0.0, 0.0,
     0.0, 0x1.4573a8b59151fp-767, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b894e8d7ac09p-417, 0x1.40b5cc74c88bcp-696, 0x1.1d14fd846d2b1p-65,
     0x1.32736e042b7d6p-869, 0x1.f770af72595f8p-597, 0x1.8f1949882bea6p-311, 0.0,
     0x1.47062729c24bfp-58, 0x1.e1d1758b3576ep-768, 0x1.ce8d13bd0b8c8p-554,
     0x1.392db7a0b0482p-288, 0.0, 0x1.16daec11bbd19p-7, 0x1.e9974f70013edp-575, 0.0,
     0.0, 0.0, 0x1.f7d73b120bb89p-646, 0x1.500c0984ef6ffp-537, 0x1.d8174c0054e82p-420,
     0.0, 0x1.c51496eaeaa94p-832, 0x1.d86c9ad66311ap-760, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.98bf42540f1d9p-263, 0x1.3060b69e9a26dp-807, 0.0, 0.0, 0.0,
     0.0, 0x1.73202b6ad4341p-903, 0x1.1391dd70d286ep-761, 0.0, 0x1.b71bde8898d35p-49,
     0x1.ac9d695f8a56dp-939, 0.0, 0x1.bcf1bda02eb3p-844, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8ebb667d1813p-333, 0.0, 0.0, 0x1.9e408bd40df42p-96, 0x1.66e4bc18fbf8ep-934,
     0.0, 0.0, 0x1.f33c73d75d0abp-56, 0x1.12518a1ab16dp-807, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cf859f4c75c78p-840, 0.0, 0x1.974735e2f7c6ep-459, 0x1.c30812fb69115p-229, 0.0,
     0.0, 0.0, 0x1.9c909bda7c89bp-245, 0x1.5b55dcdbd909cp-366, 0.0,
     0x1.42782f98c06dcp-441, 0x1.64454228345e6p-1013, 0x1.5e344c5456295p-354,
     0x1.b24b2d095dbdap-34, 0x1.d9e2aa5b41862p-507, 0.0, 0.0, 0x1.74f3317bd4693p-183,
     0.0, 0.0, 0.0, 0x1.d01e0030ba03dp-1011, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d18c20fb3307p-984, 0x1.098e079559ab8p-404, 0x1.60cdee8be77dap-955,
     0x1.ab9e6765e56a5p-674, 0.0, 0.0, 0.0, 0.0, 0x1.051adb19f7a72p-138, 0.0, 0.0,
     0.0, 0x1.900c74ea6be33p-552, 0x1.49115a08dc45bp-851, 0.0, 0x1.7a95942acfffap-698
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
            tmp1 = Sleef_finz_tand1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tand1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tand1_u10purecfma bench acc %la\n", global_bench_acc);
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
