/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd2_u35kvx.c --function \
 *     Sleef_finz_sincosd2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.5ecc0287bdc0dp-610, 0x1.8f8b1e8819428p-856, 0.0, 0.0,
     0x1.f9110f66756bfp-557, 0.0, 0.0, 0x1.3b765b21f6272p-122, 0.0, 0.0,
     0x1.1da9ecc5e9448p-659, 0x1.90d147f45c557p-267, 0x1.0a0ea988d78bdp-994,
     0x1.bf3d86aab3e2ap-950, 0x1.e85602139fca9p-685, 0x1.95c443cbc6586p-1015,
     0x1.3e6303a9db7bdp-257, 0x1.e59f96152bcf5p-470, 0.0, 0x1.14c306a44c973p-788,
     0x1.bba96b9eed1a6p-35, 0.0, 0.0, 0x1.d3106c5b4c02bp-300, 0x1.a1a3fa6f9764fp-296,
     0.0, 0.0, 0x1.73216812e3ff9p-502, 0.0, 0x1.6d0ee0f70587ep-71,
     0x1.e24630d0a43b2p-320, 0x1.fd27dc76f94adp-902, 0.0, 0.0, 0.0, 0.0,
     0x1.5f8ec433e3f2fp-610, 0x1.bb2386f8eb7c1p-259, 0.0, 0x1.e23e90278b6cdp-988, 0.0,
     0x1.7c77fd7565c43p-959, 0x1.e01bcb115ab1bp-546, 0x1.122c00da20907p-468,
     0x1.8ffcecc3995aep-330, 0.0, 0x1.fa56ae55b4ff8p-170, 0.0, 0x1.eae63b798e53ap-698,
     0.0, 0x1.dbc0bcaad266ap-755, 0x1.67377586ee2d1p-66, 0x1.d105e508db757p-454,
     0x1.0b4e8175f0218p-352, 0x1.9d3f4788510bdp-814, 0.0, 0x1.7bb664957c69ap-305,
     0x1.ac9df2f5b981ap-640, 0x1.e9796fba9cc37p-263, 0x1.695ecd8c84b41p-166, 0.0, 0.0,
     0x1.4962b9e454653p-82, 0x1.95752dd50bb4ep-756, 0.0, 0x1.459cba9d31805p-35,
     0x1.f4368dd979c12p-988, 0x1.1f9885bcd8ap-214, 0.0, 0.0, 0x1.30e2940eb81bep-659,
     0x1.7d5ed98b1fd3ep-390, 0x1.c58aeafd883f4p-281, 0.0, 0.0, 0x1.afa9d1dd3e59bp-3,
     0.0, 0x1.46d63aebc3345p-974, 0x1.0c154260fc888p-678, 0.0, 0x1.0cf6ca96742ap-452,
     0.0, 0x1.a7caa83083bbfp-748, 0.0, 0x1.940d121cec71ap-130, 0x1.9869f4b2fbb2ap-121,
     0.0, 0x1.e2407198627dbp-717, 0.0, 0x1.b2bea927efc4fp-97, 0x1.482738faf833ep-557,
     0.0, 0.0, 0x1.54e3cd071e79dp-939, 0.0, 0x1.3e57d794678bcp-124, 0.0,
     0x1.4cd99cc371d9p-133, 0x1.590e8c55dd239p-622, 0.0, 0x1.41ae932910405p-833,
     0x1.ef04fb666e589p-99, 0.0, 0.0, 0.0, 0.0, 0x1.97b76e845935p-45,
     0x1.bf818a378c668p-773, 0.0, 0x1.c9987dc1caf2fp-631, 0.0, 0.0, 0.0,
     0x1.24245d66098bp-961, 0.0, 0x1.e1232f09649a6p-752, 0x1.429377bda0c7ap-154, 0.0,
     0.0, 0x1.584d5d2c706aap-1000, 0x1.3cca9a22631dfp-301, 0.0,
     0x1.90324ef2656b1p-672, 0x1.9d1b8dd03fd08p-330, 0.0, 0x1.0218e3a379492p-943,
     0x1.0e219842fdaaap-316, 0x1.50a2c5d6219ep-538, 0.0, 0.0, 0x1.411a8aa971d7fp-111,
     0x1.ef36b54e633efp-307, 0x1.d57a8667b6e53p-562, 0.0, 0.0, 0x1.5ec7641628a5p-810,
     0.0, 0.0, 0.0, 0x1.5ca1c6ef8db99p-280, 0x1.71094a977729bp-895,
     0x1.353ef6c8738b1p-9, 0.0, 0.0, 0x1.a8fba2c0f1268p-212, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.02a0e2bc08342p-859, 0x1.f1e64cea29412p-298, 0.0, 0.0,
     0x1.6bf5c9b62ae8ap-158, 0x1.4798b2e5739aap-875, 0.0, 0x1.71accbf3a502dp-810, 0.0,
     0.0, 0x1.bcdad673f7081p-250, 0x1.3a956ec93d665p-570, 0.0, 0.0, 0.0,
     0x1.2e4591b30a92ap-702, 0x1.31b349b71a29ep-146, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a516fba6883p-888, 0x1.be707ba61978ap-644, 0x1.cb13693911124p-902,
     0x1.861ce72719823p-547, 0.0, 0x1.83f802666e726p-650, 0x1.2e25fb75e2313p-814, 0.0,
     0x1.248cc635a996fp-656, 0x1.e45d542c8e979p-986, 0.0, 0x1.c6ebdca898a3ep-456, 0.0,
     0x1.5fc9317841575p-814, 0x1.c707f63eefe15p-68, 0.0, 0x1.c4ddfd758c69dp-92,
     0x1.d9efaf253325dp-4, 0.0, 0x1.ecf49125bd9a4p-641, 0.0, 0.0, 0.0,
     0x1.e3999bfda67e3p-181, 0.0, 0.0, 0x1.960a51c49d327p-296, 0.0,
     0x1.ebb0f7b6ccd22p-497, 0x1.ba72dce785189p-673, 0.0, 0x1.fb9104bc146edp-526,
     0x1.77f6fed7ae4a3p-293, 0x1.e1b97f925c026p-761, 0.0, 0.0, 0.0,
     0x1.771f96042894cp-81, 0.0, 0.0, 0.0, 0x1.dec75c8d130a5p-219, 0.0, 0.0, 0.0, 0.0,
     0x1.e61176c4a9a9dp-720, 0x1.b28f21ed7d19cp-957, 0.0, 0x1.4f383a259df9dp-630, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e807f995a3227p-686, 0x1.8a3c8a2d13e1ap-448,
     0.0, 0.0, 0.0, 0x1.63519585ce5efp-276, 0.0, 0.0, 0.0, 0.0,
     0x1.23ebe67eb598bp-240, 0x1.83ca7c29b9066p-57, 0.0, 0.0, 0x1.55cbb2440be94p-403,
     0.0, 0.0, 0x1.32cc7f911230ep-532, 0.0, 0x1.5e2997b45e3e5p-483, 0.0,
     0x1.c2282fe215c7ap-979, 0x1.2129ad9f514eep-746, 0.0, 0.0, 0x1.b07f3649b80d5p-712,
     0x1.9bbb8e18b0479p-140, 0.0, 0x1.f3ff4304ae3b8p-887, 0x1.954931982d94bp-311, 0.0,
     0x1.71f9ac43a9147p-164, 0.0, 0.0, 0x1.e713e360e76cfp-1022, 0.0, 0.0,
     0x1.bc3732ff27a0ep-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.868b7c684603ap-483,
     0x1.44b290fc813e7p-954, 0x1.9a97d13df14dap-659, 0x1.50d537190f0f7p-392, 0.0,
     0x1.bcdf556055b16p-820, 0x1.b5488bdc7df3bp-739, 0x1.d5a9e27fd541fp-827, 0.0, 0.0,
     0x1.9a2138861af1ap-453, 0x1.2e69c1438784bp-979, 0x1.6ae6d9278f22ap-905,
     0x1.48831d1194b9bp-444, 0x1.92c2312028e0cp-857, 0.0, 0x1.bba3c9d3a54d8p-130,
     0x1.c79ead2d389b4p-845, 0.0, 0x1.3ab646ac76f13p-208, 0x1.02f0192a1b752p-841, 0.0,
     0.0, 0.0, 0x1.5e53f717f6bc1p-363, 0x1.0411af120831ep-773, 0x1.3238a03ad7755p-485,
     0.0, 0x1.9dd9df9bd66a5p-898, 0x1.fe87198e6647bp-855, 0x1.3bf718e375053p-150,
     0x1.6dcbaad6dc3d2p-938, 0.0, 0.0, 0x1.74d287725fc54p-444, 0.0, 0.0, 0.0, 0.0,
     0x1.adfc309bdc0f6p-570, 0x1.fddf195207cd8p-599, 0x1.120c9c3ae5339p-148, 0.0, 0.0,
     0x1.df3d02d306545p-199, 0x1.eb9166249c3eep-658, 0x1.ad7c4e1fab0d1p-543,
     0x1.9961a45518e24p-13, 0x1.b4d0e688da959p-804, 0x1.e06b9db5a5084p-864, 0.0,
     0x1.e995f4c5fe2fcp-30, 0.0, 0x1.2472a6d321428p-831, 0.0, 0x1.10fdb610a06cdp-281,
     0.0, 0.0, 0.0, 0x1.d2941a0b0cfe7p-3, 0.0, 0x1.934bea8ff06a3p-916, 0.0, 0.0, 0.0,
     0x1.8eec2ac1e8001p-663, 0.0, 0x1.c99a51d828f9ap-646, 0.0, 0x1.efe5eae7eb931p-548,
     0x1.fa69cab280135p-898, 0.0, 0.0, 0.0, 0x1.09f8ac957fa68p-235, 0.0,
     0x1.0fc898c08c05ap-145, 0x1.5c887d7d6ba39p-158, 0x1.84389ea45fff1p-78, 0.0,
     0x1.91dfeebe72b43p-414, 0x1.7b467fb62fe36p-856, 0x1.cfe03bfe00f9fp-904,
     0x1.d1a2b0ffa85bep-340, 0.0, 0.0, 0x1.2e5db4af082d4p-539, 0x1.da665fc4baa6dp-211,
     0.0, 0x1.335e40314413cp-674, 0.0, 0.0, 0.0, 0.0, 0x1.20d5e314005f2p-251, 0.0,
     0x1.c41a6e602822p-126, 0x1.d9bf906346dbbp-510, 0.0, 0x1.4d0b51e3fc093p-39, 0.0,
     0.0, 0x1.ed47a7270c08cp-830, 0x1.22e4486a7bbc6p-260, 0x1.db210ef74b03p-781,
     0x1.ac9346a41a42ep-954, 0x1.23b9c302df64ep-728, 0.0, 0.0, 0.0,
     0x1.559f8a9930fc8p-905, 0.0, 0.0, 0.0, 0.0, 0x1.5cb1c67987107p-985, 0.0, 0.0,
     0.0, 0x1.6d80d039dcc4ap-717, 0x1.5487bda73091fp-144, 0.0, 0.0, 0.0,
     0x1.c91419c2105a5p-928, 0.0, 0.0, 0.0, 0x1.53e7cf1834737p-361, 0.0, 0.0,
     0x1.a9b18b9264a72p-827, 0x1.062f858d5271dp-424, 0x1.b5b0f8a8e215p-175, 0.0, 0.0,
     0x1.ab8f8916b4e0cp-48, 0.0, 0.0, 0x1.0426ab5cbdf4ep-1015, 0x1.35cf398d38b12p-28,
     0x1.8700d15f6d9e6p-383, 0.0, 0x1.bd092a60df2e4p-956, 0.0, 0x1.579e0fec0428fp-39,
     0.0, 0x1.0ad07c453d0c9p-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.517de93eb9785p-324, 0.0, 0x1.aaf00289a748ep-476, 0x1.3ecc97684f89fp-67,
     0x1.d370314660bdfp-4, 0.0, 0.0, 0x1.8f4e2de59fff3p-411, 0.0, 0.0,
     0x1.875485fc69a69p-270, 0.0, 0x1.fdec335150cf1p-487, 0x1.7942aef7450abp-633, 0.0,
     0x1.b329ffe6a0627p-650, 0.0, 0x1.24f0521c837b8p-909, 0.0, 0x1.1544afc337f01p-253,
     0x1.3640344795d9ep-920, 0x1.8c8fe67863857p-219, 0x1.32ce054d60f07p-124,
     0x1.f68d0d31ed066p-520, 0x1.91aca24d6e31ap-651, 0.0, 0x1.b1c87cc16f944p-412,
     0x1.f17443d866ee7p-642, 0x1.99e5a0dac143cp-264, 0x1.6d3fe84548c96p-10,
     0x1.203e353d75b4ap-259, 0x1.9802c3ec2726cp-453, 0x1.fdfe1bfc39ca5p-240,
     0x1.d09d1620b0c57p-273, 0x1.ab4eed73f2debp-817, 0.0, 0x1.130de25bee627p-1014,
     0x1.bc26aece830cp-435, 0.0, 0.0, 0.0, 0.0, 0x1.c1a7cd3c4c772p-1001, 0.0, 0.0,
     0x1.9991d793e547cp-687, 0x1.286fb74edee05p-475, 0x1.a78da98a833bap-18,
     0x1.28cb1a59ee84ep-3, 0.0, 0x1.020643fc132bp-121, 0x1.3c9408e2bcc78p-198,
     0x1.ba8cf253047f5p-676, 0.0, 0.0, 0.0, 0.0, 0x1.afd6a5abe4a92p-953, 0.0,
     0x1.f0c6fe05402a4p-731, 0x1.19a6f8cbdda11p-398, 0x1.2ad489791daf5p-158, 0.0, 0.0,
     0.0, 0x1.c2df31429974dp-856, 0.0, 0x1.7d9ac88c3936ap-320, 0.0,
     0x1.0242330817adap-545, 0.0, 0.0, 0x1.030a4c59a3e85p-620, 0.0,
     0x1.03848e815d667p-542, 0.0, 0.0, 0x1.628a4e8594167p-297, 0x1.bf2f61b8ed57p-897,
     0x1.de0b2a92dd537p-47, 0x1.293a2d31edb46p-549, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea1464b95407ap-483, 0.0, 0x1.1c4f0d57365d3p-386, 0x1.266416ad4a45ep-470, 0.0,
     0.0, 0.0, 0x1.527630af41b4bp-29, 0x1.5ee9c58ac0bb2p-226, 0.0, 0.0, 0.0,
     0x1.aead293d91733p-556, 0x1.35227e9cbadc9p-813, 0.0, 0x1.1abd591aa5416p-486, 0.0,
     0x1.bcbe9750ecd9ap-907, 0x1.dc016f74e17dap-139, 0.0, 0x1.2547b2f72fdcdp-969,
     0x1.22c027e5b250ep-461, 0.0, 0x1.fed37ad18cf3ap-758, 0x1.02a46e5ca1ffbp-455, 0.0,
     0x1.9bc620263bc67p-7, 0.0, 0x1.017763356024ap-172, 0x1.bc1e8b90e5134p-430, 0.0,
     0.0, 0x1.67f764ca64ae5p-238, 0.0, 0.0, 0.0, 0x1.99bebdc00f382p-252,
     0x1.53212cb95fc37p-774, 0x1.0c662c2742f06p-524, 0x1.689fafb2bebeep-12,
     0x1.c1e17ba78d331p-30, 0.0, 0.0, 0.0, 0x1.8a5ff42d391f7p-839,
     0x1.481b9872877bbp-630, 0x1.45325dd31746bp-422, 0x1.8739ab16a8ae8p-835,
     0x1.6734c29df43edp-1008, 0.0, 0x1.d6be2e8dd5487p-757, 0x1.0a7383ce3dc9ap-373,
     0x1.282857b82d58fp-183, 0x1.e217b48fb45f3p-803, 0.0, 0x1.51e60316c1cdep-721,
     0x1.d568666ed62f6p-436, 0x1.28a2fd6cb5f2dp-739, 0x1.e0be00d1fa82dp-661, 0.0,
     0x1.128b86da5e00fp-361, 0.0, 0.0, 0x1.a93669fee40ebp-921, 0x1.bf87b8f586008p-169,
     0x1.f1bab7ecbb0e4p-273, 0x1.7a17439974266p-826, 0.0, 0.0, 0x1.1ba80dd347ed7p-856,
     0x1.e2ad4d0b05115p-620, 0.0, 0x1.25ca0be9ee8b3p-617, 0x1.c1deaa5601fb5p-1009,
     0x1.f29513f805cbep-7, 0.0, 0.0, 0.0, 0x1.80c32d65f5983p-226, 0.0,
     0x1.5cf3caaa6ef04p-953, 0x1.f086de5e31a69p-548, 0x1.ecac982f7750ap-202, 0.0,
     0x1.735428f4d8778p-642, 0x1.56fa870fedc49p-950, 0x1.584959a063f42p-24, 0.0,
     0x1.b0308932e4a39p-148, 0.0, 0x1.966dccc944506p-118, 0x1.3687f51254c1p-964,
     0x1.53041a43b2949p-662, 0.0, 0x1.d4e7e263216d3p-218, 0x1.9ec5347f049b6p-2,
     0x1.bf110c8c8baa6p-721, 0x1.27782d6bac83cp-239, 0x1.7d4082fbe2e51p-407,
     0x1.0f5e7b609a436p-167, 0x1.b349d51410c39p-43, 0x1.80a2ceddce5adp-859,
     0x1.7ba75391bca11p-20, 0x1.eca4b411a4e83p-125, 0x1.107f903cd85f2p-139,
     0x1.a6b50e77ec1f2p-382, 0x1.73e3cfe573ed5p-934, 0x1.d6d08955d064dp-301,
     0x1.94ef1dee8213fp-203, 0x1.170de53902861p-959, 0x1.51a6e71d84019p-393, 0.0, 0.0,
     0x1.2b176e86fd8fep-95, 0x1.2c4a1dfc4c786p-31, 0.0, 0.0, 0.0,
     0x1.85b43ff1298bap-207, 0.0, 0.0, 0.0, 0x1.d9c958ac822b9p-9,
     0x1.866c620cd7e4fp-418, 0.0, 0.0, 0.0, 0.0, 0x1.902ad606c0f46p-586, 0.0,
     0x1.4aafb37e3690ap-649, 0.0, 0.0, 0x1.e46c18e21fb61p-334, 0x1.3b1d297d56fbp-818,
     0.0, 0x1.024c0ee3ae4b3p-771, 0.0, 0.0, 0x1.02a37e733c553p-261,
     0x1.4118be874cca2p-184, 0x1.7a7508174341cp-140, 0x1.f4a083670c715p-599, 0.0,
     0x1.7d193017e8e73p-834, 0.0, 0.0, 0x1.6532120da73ecp-496, 0x1.9a568ff404eb2p-195,
     0x1.c1d0119046ddep-199, 0.0, 0.0, 0.0, 0x1.21c0edad12506p-269,
     0x1.6e6f8cb448e07p-230, 0x1.5c6f7e12b6732p-267, 0x1.32e4d3200c6a7p-36, 0.0,
     0x1.31d0b085d0683p-611, 0x1.86f3538c37d41p-271, 0.0, 0.0, 0x1.3de079fe1f98ap-261,
     0x1.9e00fce1dbae6p-688, 0x1.210c82a47da15p-208, 0x1.0ef2c8d977ea6p-365,
     0x1.bcbcea0602cbfp-102, 0x1.3034b3cd781bep-719, 0.0, 0.0, 0x1.4e135caf1999bp-949,
     0.0, 0x1.352ae0d4b8ea3p-976, 0x1.77882ef6a9cbbp-430, 0.0, 0x1.c02cb125410a2p-909,
     0x1.151e99258dbc3p-764, 0x1.f8dde7b00e591p-386, 0.0, 0x1.13fc00acfabc4p-726, 0.0,
     0.0, 0x1.b667be5555496p-795, 0x1.e4add2ad73465p-19, 0.0, 0x1.66d0076d4416ap-677,
     0x1.1dd7b67d9977p-523, 0.0, 0.0, 0.0, 0.0, 0x1.a6f62698c4b38p-775, 0.0,
     0x1.83dd456c16185p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2badff28b5ab7p-89, 0.0,
     0.0, 0.0, 0.0, 0x1.8cc085dbe8b1ep-895, 0.0, 0.0, 0.0, 0.0,
     0x1.f8a026a557515p-493, 0x1.967f1ce9e15cp-979, 0.0, 0x1.ffc88607fa177p-804, 0.0,
     0.0, 0x1.b1e10ce62f6abp-496, 0.0, 0x1.82e36b6b254fep-1012,
     0x1.7d2df504cc822p-904, 0.0, 0x1.9f09b44812dbfp-504, 0.0, 0x1.35e79ef00c126p-190,
     0.0, 0.0, 0.0, 0x1.c8259a02fd98ep-394, 0x1.15a784b3e7556p-164,
     0x1.9660dcef19891p-589, 0.0, 0.0, 0.0, 0x1.75988c6f534d3p-978,
     0x1.f9eae6b9f8569p-213, 0x1.e9803b83f8f62p-138, 0x1.4939e60d093b8p-879, 0.0,
     0x1.32ae194c0937ap-347, 0.0, 0x1.8314370d4d7abp-567, 0x1.61e773d756aabp-562,
     0x1.861044e305915p-686, 0x1.34f8f35d7e6ffp-345, 0.0, 0.0, 0x1.91bafae26d2dcp-43,
     0x1.cf242f015b59dp-80, 0.0, 0x1.d484a974e26a9p-877, 0.0, 0.0,
     0x1.5180ff32824a1p-391, 0x1.ee04c3fa8a3c2p-898, 0x1.f04190b73f598p-864,
     0x1.5e693d622c1b9p-367, 0.0, 0.0, 0x1.9089c838c3caep-708, 0x1.86540f5337e37p-432,
     0x1.fb06fe3872564p-119, 0x1.7c21b4c7fea39p-708, 0x1.9f19723453e4fp-900,
     0x1.67a5a080ae4cfp-200, 0.0, 0.0, 0x1.d36df574210f8p-671, 0x1.78595dffd070cp-947,
     0x1.5546e59df3027p-952, 0.0, 0x1.1c2cb57cde25bp-702, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.048fc67615404p-847, 0.0, 0x1.62669103ccf4fp-855, 0.0, 0x1.3802d409f8fcap-846,
     0.0, 0.0, 0.0, 0x1.a2b858872a438p-721, 0x1.730bdf5550c25p-900, 0.0, 0.0,
     0x1.2a5cf2ef22aedp-242, 0.0, 0.0, 0x1.53f66b27aa143p-581, 0x1.b9c7653c5079cp-415,
     0.0, 0x1.e650befeb2aa2p-542, 0.0, 0.0, 0.0, 0.0, 0x1.111269337654p-484,
     0x1.527bbfe474c8p-735, 0.0, 0.0, 0x1.20c91e3e7a9c2p-1020, 0.0,
     0x1.6c3942eb634c6p-602, 0x1.16efb62df3499p-512, 0.0, 0.0, 0x1.536ef589c62a9p-875,
     0x1.dd613932c6d9bp-60, 0.0, 0x1.13ea9d1edae6cp-539, 0.0, 0x1.3079fa8209e33p-248,
     0x1.52582a5317b6ep-971, 0.0, 0x1.a4ffe104bc887p-585, 0.0, 0x1.a19f1e596d9b2p-915,
     0.0, 0x1.804062b5f5ad6p-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e14f0f333c2fdp-240, 0.0,
     0x1.1939d61a72b3bp-747, 0x1.cc47592da7038p-3, 0.0, 0.0, 0.0,
     0x1.f3de4931c4aaep-537, 0.0, 0.0, 0.0, 0.0, 0x1.4da60cd334794p-822, 0.0, 0.0,
     0x1.5d1939cfc4f46p-777, 0.0, 0.0, 0.0, 0x1.e5b0e7a4f382cp-141,
     0x1.3c7c097128977p-318, 0.0, 0x1.32d807a722f75p-296, 0.0, 0x1.de4721f84c529p-561,
     0x1.9be8ca534cc81p-237, 0.0, 0x1.a10208427808fp-223, 0x1.c75ce0ebb6401p-100,
     0x1.417e67d50be9dp-615, 0x1.f4ed65fd80fbcp-894, 0.0, 0x1.8ec925b9c213dp-99, 0.0,
     0x1.561dc344419d8p-24, 0x1.dd2e86cc31d31p-958, 0.0, 0.0, 0x1.741f1e5216cdep-783,
     0.0, 0.0, 0.0, 0x1.cb8fd3372805bp-541, 0.0, 0x1.2249960dcdb43p-965, 0.0, 0.0,
     0x1.dfb76b93a3b85p-67, 0x1.6087d02dea61ap-208, 0.0, 0x1.f1d21e8e460c6p-693, 0.0,
     0.0, 0.0, 0x1.b3d1f50b7faadp-704, 0x1.34eda5f99eb21p-265, 0.0,
     0x1.dae3d504b9cacp-838, 0.0, 0x1.6ef1ecbd1a75cp-279, 0x1.7fd7bbcebb94fp-505,
     0x1.0e67ff51d34a6p-87, 0x1.97e1a0f22c088p-583, 0x1.1180d444963adp-657, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e9abfa255a8acp-421, 0x1.479cbc63d7e31p-833, 0.0, 0.0, 0.0,
     0x1.1bc13e67e6633p-617, 0.0, 0.0, 0.0, 0x1.89cc0fbf9be09p-866,
     0x1.3554e6488a9aep-33, 0.0, 0.0, 0x1.12e0dd66f55ebp-413, 0.0,
     0x1.64c3550922c08p-130, 0.0, 0x1.d9fc3057baec7p-958, 0x1.6ca84aff46999p-297,
     0x1.c7ddea2ffd77cp-792, 0x1.2558b44ec2e98p-927, 0x1.355d7d1351dddp-314,
     0x1.8326352011c74p-810, 0.0, 0x1.dbba0de658efcp-43, 0.0, 0.0, 0.0, 0.0,
     0x1.07f0ff2d910f1p-928, 0x1.e760cb1faaec9p-76, 0.0, 0x1.028829868c55ap-30, 0.0,
     0x1.ffaed9da4e241p-357, 0x1.facc369272beap-835, 0.0, 0.0, 0x1.506ba9fc056a2p-818,
     0.0, 0.0, 0x1.842a4359bc52ap-353, 0.0, 0x1.50a7c5e3a1f1fp-319, 0.0,
     0x1.2926e982f0e6dp-430, 0x1.c4fdfe2e49f36p-381, 0.0, 0.0, 0x1.de30d46109934p-593,
     0.0, 0x1.c021e5b4ab62ap-919, 0.0, 0.0, 0x1.4650a27a9e71p-328, 0.0, 0.0,
     0x1.42e788e16577fp-379, 0x1.3c3c7581b4bf5p-829, 0x1.566a16c58ec1dp-907,
     0x1.2cd3cceee53bep-970, 0x1.951de87ea0911p-301, 0.0, 0x1.b0095b1c57328p-983, 0.0,
     0x1.a881c98a05846p-251, 0x1.3576dbf315d7fp-974, 0.0, 0x1.2dcbbd808c273p-217, 0.0,
     0.0, 0x1.982db2a7ac0eep-637, 0.0, 0x1.e2496af19489dp-226, 0x1.82c20523c16f1p-497,
     0.0, 0x1.28f726068f3f7p-350, 0x1.1586fb04039c8p-592, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0016336b22516p-72, 0x1.eaff9f90f889bp-32, 0.0, 0.0, 0x1.06a97d4598da6p-348,
     0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosd2_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd2_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
