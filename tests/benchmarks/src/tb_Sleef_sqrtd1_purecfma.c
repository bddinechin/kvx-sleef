/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_purecfma.c --function Sleef_sqrtd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.c9bf3d5e634e5p-539, 0x1.2e53c9bf19d8ap-282, 0.0, 0x1.8d09984af055p-850,
     0x1.621afb534447p-466, 0x1.1b775a59814c1p-775, 0.0, 0x1.e1c0d25eca8e3p-390, 0.0,
     0x1.34796ccf4f909p-890, 0x1.2ce097dcc736p-138, 0x1.97740a299f6dp-88,
     0x1.465d8e29475e7p-888, 0x1.ef3210da35158p-887, 0x1.747c33d8978d4p-950, 0.0,
     0x1.13fc247f6b8d5p-885, 0x1.e2adbbcb7ab04p-421, 0x1.dc9da9d98426cp-663,
     0x1.6522ea66b9a68p-260, 0.0, 0x1.90cc852c9d2c6p-465, 0x1.2d8bbd67eeabcp-391,
     0x1.a08b336736c45p-975, 0x1.4243b5798e543p-387, 0x1.88450526bcecdp-145,
     0x1.1591ac3589b9cp-261, 0x1.f1053fc1ad2b9p-294, 0.0, 0x1.04075e618476dp-744, 0.0,
     0x1.7dc5149c1dd26p-580, 0.0, 0x1.873a00f923872p-991, 0.0, 0x1.7ebd6cb045fe7p-972,
     0x1.1da860a6734f2p-702, 0.0, 0x1.ed21d9a002feap-23, 0.0, 0x1.5c9a49b8431e6p-374,
     0x1.e1b2b7a8646cep-898, 0x1.476a9c0796e86p-503, 0x1.7675bbb44d969p-932, 0.0, 0.0,
     0x1.5f0ac3c4d4504p-333, 0.0, 0x1.995d8562dc66cp-7, 0.0, 0.0,
     0x1.5d45d532e790ep-584, 0.0, 0.0, 0x1.b935301af40fp-971, 0.0, 0.0, 0.0,
     0x1.0b8664cc1acacp-510, 0.0, 0.0, 0.0, 0.0, 0x1.46e373ada3502p-243, 0.0, 0.0,
     0x1.18816d2e486fdp-627, 0.0, 0x1.41db65ae98b54p-728, 0x1.f49733b183637p-77,
     0x1.556412a760953p-828, 0x1.8c834fab3512dp-430, 0.0, 0x1.54bd7cf3e1113p-607, 0.0,
     0x1.c12f3878a6143p-593, 0x1.b7bb7bcdc0ca7p-715, 0x1.852310ea4ad6fp-150,
     0x1.05880d6bab17ep-991, 0.0, 0.0, 0.0, 0x1.7da015acebee9p-480,
     0x1.29d79e1fb43aep-7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.783f81cb20913p-913,
     0x1.a1cb0c4b9da3dp-593, 0x1.a5a93b79d9e6p-991, 0.0, 0x1.06889318e8143p-431, 0.0,
     0.0, 0x1.96a529dda9f67p-943, 0.0, 0.0, 0x1.4a5e780600f74p-860, 0.0,
     0x1.04470f69acbc3p-604, 0x1.e4e27eedf0914p-134, 0x1.4e615edbdb7fp-79,
     0x1.6dec685f63c41p-220, 0.0, 0x1.0b41f79be71b7p-85, 0x1.dcde49725078ap-795,
     0x1.b7fb31820f8dap-66, 0.0, 0.0, 0x1.3908d0f089d69p-763, 0x1.1dc6b4eec265cp-11,
     0.0, 0x1.4633bc2ae9e3p-396, 0x1.1caf138fd7b33p-714, 0.0, 0.0, 0.0,
     0x1.8b9940e32a062p-9, 0.0, 0.0, 0x1.93445b812ff9ep-856, 0x1.caf5dc84db55ep-585,
     0x1.95bb19d9394fep-951, 0.0, 0x1.e5980437b2e1cp-60, 0x1.c2b71609b80c6p-247, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7f151f4fdd0a5p-287, 0.0, 0.0, 0.0, 0.0,
     0x1.4d471334c6101p-909, 0.0, 0x1.f7cd78caf09e4p-540, 0x1.547b7fc00ac24p-531,
     0x1.f163b50bf1cfdp-639, 0x1.a3e8ec6ff7647p-354, 0x1.bf42d20267504p-30, 0.0,
     0x1.5f49e3e59bfdfp-586, 0x1.4d252df4789b4p-257, 0x1.7cbe465743fddp-794,
     0x1.332989a55c2a5p-592, 0x1.4bdd248887af6p-557, 0x1.890567ed7a4e9p-466,
     0x1.ed1c8ec43a8e6p-12, 0.0, 0x1.605766dfaa4f5p-857, 0.0, 0x1.eabc3f0076311p-308,
     0x1.b6ebfe83ed214p-627, 0x1.0130dc9229fd7p-696, 0.0, 0x1.180f59edd28b9p-469,
     0x1.15c0c4cdcd062p-890, 0.0, 0x1.3fb01a361255fp-1017, 0.0, 0.0,
     0x1.8f68da3972f4ep-396, 0.0, 0.0, 0x1.4eb6acff98eaap-954, 0.0, 0.0,
     0x1.5bb7a3ee556a9p-196, 0x1.cbe44c1a7f11fp-367, 0.0, 0x1.3fabf898a341dp-445,
     0x1.2590cf4228d78p-251, 0.0, 0x1.c9025b91d4b62p-418, 0.0, 0x1.4119154b4f21p-368,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb1439df37611p-1010, 0x1.c1c9551d4cc0cp-974, 0.0,
     0x1.8be7839b09e88p-261, 0x1.3ffea3ed39bcdp-599, 0x1.9e73a83f688a7p-693,
     0x1.00a59371e8c8cp-537, 0x1.ff8eadcba08cdp-571, 0x1.cc32fb7fd30aap-354,
     0x1.1473533fc09c5p-603, 0.0, 0x1.31d4d130b4f63p-419, 0x1.c50a3f91c71dap-282, 0.0,
     0.0, 0x1.2badff03bf06ap-398, 0x1.fafbf09bbfe14p-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aefdbdbcb9a4p-303, 0x1.69ce560ca9252p-513, 0.0, 0x1.75f29a9c2363bp-880,
     0x1.051ac2537983bp-509, 0.0, 0.0, 0.0, 0.0, 0x1.1b02a75ea7859p-56,
     0x1.35911ac0036e4p-105, 0x1.df121f9674ff1p-514, 0x1.6f4e6d9597009p-621,
     0x1.8457a0568d08dp-84, 0.0, 0x1.12d433c37b8c2p-769, 0x1.51f355cf02c17p-932,
     0x1.d063f846c65bfp-123, 0x1.66b1b65bf16dbp-828, 0.0, 0x1.8d6fe784d8955p-277, 0.0,
     0x1.c43a2fc875905p-17, 0x1.8df9506d85519p-780, 0.0, 0.0, 0x1.8c1886c34693cp-400,
     0x1.644b5d2a07efdp-839, 0x1.de3857edf713ap-208, 0x1.a776c80e162e9p-992, 0.0,
     0x1.f966946f0b3e2p-768, 0x1.39b7f5bb4eec9p-439, 0.0, 0.0, 0x1.2f331ca7665b1p-639,
     0.0, 0.0, 0.0, 0.0, 0x1.3c20f89584ce1p-206, 0.0, 0x1.544a53b8a403p-641,
     0x1.e06dbb939ddfbp-404, 0x1.79d7a3d2fa8e5p-916, 0.0, 0.0, 0x1.eb1334962120dp-876,
     0x1.75aeb331a52cfp-282, 0x1.e4f4fe6c2f1b3p-516, 0x1.894b273adfabdp-814, 0.0,
     0x1.68372f2b583b1p-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4262282966c72p-263, 0.0, 0.0, 0x1.b35ce7b19c0fep-648, 0x1.a246070145c91p-392,
     0x1.4997720a279ddp-449, 0x1.a9e69ba765dcdp-751, 0x1.02d2e0cde8674p-324, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.52498aa1da6f1p-868, 0.0, 0x1.c6a95e431ab15p-50,
     0x1.a723485c35296p-952, 0.0, 0.0, 0.0, 0x1.5aee278402d7ep-789, 0.0, 0.0,
     0x1.4835707ec4867p-769, 0.0, 0.0, 0x1.c741eddad9cb5p-142, 0x1.0f06251992b96p-840,
     0x1.38c2b7903f68cp-590, 0x1.90bc252264208p-761, 0.0, 0.0, 0.0,
     0x1.364372338ceb9p-694, 0.0, 0.0, 0.0, 0.0, 0x1.a6d1645dbe2ep-657,
     0x1.31bd0e4ff86f4p-270, 0.0, 0.0, 0.0, 0x1.99290ca4a2fe5p-571, 0.0,
     0x1.fc1db05666688p-36, 0.0, 0.0, 0.0, 0x1.61b7dfaac2fcp-370, 0.0, 0.0, 0.0,
     0x1.8b118dc50bb46p-530, 0x1.f847c3b7f287fp-754, 0x1.8eeb45c277088p-237, 0.0, 0.0,
     0x1.78cf0e21a6a91p-348, 0x1.399e5b6a90077p-96, 0x1.412a66f91a8a2p-424,
     0x1.7ac0d90710b92p-473, 0.0, 0.0, 0x1.7e5aa9d72e4a7p-787, 0.0, 0.0, 0.0,
     0x1.b5fcceed52511p-478, 0.0, 0.0, 0.0, 0.0, 0x1.1b8d66627ca5cp-498, 0.0,
     0x1.432959c241cc9p-5, 0.0, 0x1.64ff978284575p-376, 0.0, 0x1.820aafefb62dbp-681,
     0.0, 0x1.931a0e0838eaep-552, 0.0, 0.0, 0x1.eaef16938f057p-814, 0.0,
     0x1.6f24184f173c1p-880, 0.0, 0x1.251bf2e7d2699p-678, 0x1.7d31c2b57ef6dp-97, 0.0,
     0x1.a53521f225941p-61, 0x1.869956a6030b8p-837, 0.0, 0.0, 0.0, 0.0,
     0x1.ac969bd6a43d6p-294, 0.0, 0x1.c59ba9beb8846p-161, 0x1.c79b7ed613a7dp-841, 0.0,
     0x1.28f5f3a808161p-851, 0.0, 0x1.981c3069df6f5p-129, 0x1.734228d8535c3p-449, 0.0,
     0.0, 0.0, 0x1.f1f9a236e92aep-482, 0.0, 0x1.c9b70e989a425p-115,
     0x1.bc74b7ad9d132p-631, 0.0, 0x1.dcce3673637fbp-825, 0x1.4632b9467c12ap-597,
     0x1.9ceec131d0a0dp-57, 0.0, 0.0, 0.0, 0x1.2835ff38737e4p-984,
     0x1.e28bc50e892a9p-644, 0.0, 0x1.105a3e6dddf69p-627, 0.0, 0.0, 0.0,
     0x1.2bdf079d3d04bp-339, 0.0, 0.0, 0x1.5242370cb7198p-776, 0.0,
     0x1.183aef6c9cf32p-317, 0x1.43c88194efdf5p-595, 0x1.b666cb64cf334p-162, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c9c0922d52a5p-649,
     0x1.94316535e50d7p-579, 0x1.d04fe448d6c53p-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.905c33d0e937dp-728, 0x1.167281c9f710fp-719, 0x1.9f1c622c0c9d4p-482,
     0x1.b463bacc05667p-606, 0x1.65c6bc86b6b3fp-423, 0x1.4f4bbaf446316p-897, 0.0, 0.0,
     0x1.cd78ca8a9962ep-851, 0x1.8d25c4f8a4b8fp-513, 0x1.6ed9741498c48p-493, 0.0, 0.0,
     0x1.f313fc0e2210fp-702, 0x1.8480ea2553ea1p-990, 0.0, 0x1.df68ac8e4877p-417, 0.0,
     0.0, 0.0, 0x1.c4fe6a2124452p-719, 0x1.ce01bd01b62fbp-988, 0.0, 0.0,
     0x1.67376bd670b14p-162, 0x1.5ee568ee9091dp-985, 0x1.3a219ee490c89p-221, 0.0, 0.0,
     0x1.5e3b28a33cc3fp-650, 0x1.b0fc6c060174p-233, 0x1.db97cd1860e32p-508, 0.0, 0.0,
     0x1.1e5c5cbab7269p-979, 0.0, 0x1.d7a24eb2d0254p-974, 0.0, 0x1.f9bfe09691f7p-442,
     0x1.c38545fe96118p-318, 0x1.4c1bc3176fffap-752, 0.0, 0x1.95f8ccc643c96p-605, 0.0,
     0x1.34a8c06e548d6p-856, 0.0, 0.0, 0x1.09dc57438a91dp-906, 0x1.101cb3453c334p-684,
     0.0, 0.0, 0x1.5f700728f6e37p-41, 0.0, 0.0, 0x1.0f155f63ff205p-827,
     0x1.10a169b5cda7fp-947, 0.0, 0x1.d47bc0abd566bp-371, 0x1.13f2e8ca4ea5bp-661, 0.0,
     0.0, 0x1.6266b619e0f4bp-344, 0.0, 0x1.8c87c970da96ep-795, 0x1.3393d8fb0ad05p-925,
     0.0, 0.0, 0.0, 0x1.881b50736f644p-379, 0.0, 0.0, 0x1.bd53c520d9e2dp-445, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66d03fefc4749p-98, 0.0, 0.0, 0.0,
     0x1.82d6daad9e1fp-804, 0.0, 0x1.4dd5d6d241c12p-955, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.10dbf37f3ba0ap-127, 0x1.67a1e73a436d6p-928, 0x1.8851dbbd44cap-214,
     0.0, 0x1.332c712c5826ep-804, 0x1.bca11ee3d8e56p-453, 0.0, 0.0, 0.0,
     0x1.c0e5580913506p-148, 0x1.be928e3486edep-391, 0.0, 0.0, 0x1.424827752762fp-509,
     0x1.0603059aae3e3p-433, 0x1.7b48b869745a2p-836, 0x1.19fa042cd5ff6p-806, 0.0,
     0x1.7dc268dbff4aap-366, 0x1.5ae1ddf61872ep-599, 0.0, 0.0, 0x1.f45d063e41da9p-770,
     0x1.75269f350697ep-969, 0x1.8b8a0c5e4c521p-119, 0.0, 0.0, 0x1.0d28e0ef288cdp-527,
     0x1.61151b7bf4784p-820, 0x1.6bb33a0431ff7p-444, 0x1.c7fce8ec423d6p-15, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.85114a85b23dp-1005, 0x1.8681ab4e0569ap-937, 0.0,
     0x1.891553abf250fp-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6481ff9099e42p-611, 0.0,
     0x1.b4060cd8858e1p-213, 0x1.709f5372e7d1dp-526, 0x1.8bd3c2673013ap-287, 0.0,
     0x1.0235434f9720ap-262, 0x1.3ce61e04bcfb8p-701, 0.0, 0x1.8043c33544681p-646, 0.0,
     0.0, 0.0, 0.0, 0x1.69b1c07617e89p-405, 0.0, 0.0, 0x1.dbba4ff144441p-285, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d54a48ab8076fp-703, 0.0, 0.0, 0.0,
     0x1.78150e7d697c4p-370, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39103e7bb0a23p-713,
     0x1.31b249963efb9p-64, 0x1.c174bd5efcbc1p-850, 0.0, 0.0, 0x1.230bee4f9b4e6p-587,
     0.0, 0x1.ef2423bc23b2dp-627, 0x1.1f68d9c3700a3p-951, 0x1.e34b436c56fa2p-31,
     0x1.3ea87a8591782p-604, 0.0, 0x1.b3eaf5235fb22p-151, 0.0, 0.0, 0.0,
     0x1.8e3bd27b1826dp-806, 0x1.d51c81f4e8cebp-969, 0x1.54bbd9b6eb602p-544,
     0x1.997806d05a65ep-220, 0x1.075cf8074ef72p-183, 0.0, 0x1.708050c73069p-154, 0.0,
     0.0, 0.0, 0x1.1cc93ef6c699cp-78, 0x1.a4ac1c77fab78p-963, 0x1.4dd97c124eb08p-592,
     0.0, 0x1.ed9b36a16741dp-374, 0x1.852703dd62b5p-488, 0.0, 0x1.a9bb9f05a9f71p-754,
     0x1.e1e43bcfab8e7p-19, 0.0, 0x1.cc7ed810f11fep-694, 0x1.c7e8ee1ae6eb2p-838,
     0x1.d29dd2a309a81p-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a54f37798311p-117,
     0x1.72d8e811433bfp-652, 0.0, 0x1.e26a7fee2afbcp-841, 0.0, 0.0,
     0x1.3249d5d934622p-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a4363907a787p-449, 0.0, 0.0, 0x1.4aaba51c94789p-521, 0x1.49ca2c74ccf8bp-170,
     0x1.1132b8c00aa5cp-743, 0.0, 0.0, 0x1.92a7c064f4516p-483, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0a3a80c10ba77p-258, 0x1.06b85efaddec4p-959, 0.0,
     0x1.35d6b47d0b4b1p-961, 0x1.42e5675a3e111p-962, 0x1.e38e15e0b6c4ap-118, 0.0, 0.0,
     0.0, 0.0, 0x1.6e13bb5516b43p-606, 0x1.7446cac1a8448p-881, 0.0,
     0x1.1636f256d27c8p-6, 0x1.82c4cad8a9957p-87, 0x1.d454cbdf24946p-85, 0.0, 0.0,
     0.0, 0x1.76822c810ddc5p-775, 0.0, 0x1.e2baf3c4f283p-158, 0.0,
     0x1.fcb4e4036a481p-950, 0x1.790016f48d131p-726, 0x1.6b6d8ce3ee61bp-928,
     0x1.7f1e133a8c259p-654, 0.0, 0.0, 0x1.0248607f8f903p-88, 0.0,
     0x1.cf8fcb4334055p-313, 0.0, 0.0, 0x1.56c3ce65ac014p-585, 0.0,
     0x1.cd924e4d9ee2cp-785, 0.0, 0.0, 0.0, 0x1.d3ba687698326p-459, 0.0, 0.0,
     0x1.153fe3a16f71p-460, 0x1.21b285044247ep-39, 0.0, 0.0, 0.0, 0.0,
     0x1.2a5eef230ca73p-119, 0x1.46baeb76e2dc8p-306, 0.0, 0x1.c9d88c85e2294p-952,
     0x1.98ebe2f00557dp-393, 0.0, 0x1.d0a3815b0156ap-226, 0x1.d5aaa4aabdc97p-819, 0.0,
     0.0, 0.0, 0x1.3d30e83866aa9p-578, 0.0, 0x1.57bff444457cp-528,
     0x1.0379a8c0fc402p-294, 0x1.3b25a2839963dp-96, 0.0, 0.0, 0x1.a324503b93336p-15,
     0x1.cb82faafbc125p-505, 0.0, 0.0, 0x1.57396c062f136p-778, 0x1.12a21c9fbaa2fp-817,
     0.0, 0.0, 0.0, 0.0, 0x1.665bcc770a34dp-689, 0x1.1c1e95b787caep-814,
     0x1.92835bfe43969p-907, 0x1.7db596519c1p-797, 0x1.b383d0b6eb9ebp-304, 0.0, 0.0,
     0.0, 0.0, 0x1.f7f07a12ab0edp-832, 0x1.24327d3624fb4p-190, 0x1.718af309a35b2p-381,
     0x1.e4a3f312bc458p-425, 0x1.b3d2be134fe48p-101, 0x1.bb0cf9f3d7975p-899, 0.0,
     0x1.9ad1cd72c5e0cp-850, 0.0, 0.0, 0x1.a8076f8bf3b63p-991, 0.0, 0.0, 0.0,
     0x1.35e6034dbbf74p-765, 0x1.5c6c0c5f026f2p-309, 0.0, 0.0, 0x1.05cd7c9635814p-903,
     0.0, 0x1.54ad8447ff8e7p-410, 0.0, 0.0, 0x1.dcc304a72ae09p-642,
     0x1.76003766a8f6dp-590, 0.0, 0x1.8f14e31f92d2dp-247, 0.0, 0x1.75a3707544df9p-621,
     0x1.6d29ec93dd548p-444, 0.0, 0x1.a15510e2adce4p-856, 0.0, 0.0,
     0x1.19dc903f65869p-218, 0x1.01d33c36dfaf4p-559, 0x1.2a20d8c362454p-363, 0.0,
     0x1.d0c0e0915cb8p-947, 0.0, 0x1.864d6c09a821ep-154, 0.0, 0.0,
     0x1.a07dd0864564bp-352, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df6dcb2ff494ep-798, 0.0,
     0.0, 0.0, 0.0, 0x1.1216e7d45cf02p-962, 0.0, 0x1.d288a4d414d4p-728,
     0x1.fb38c706d2334p-943, 0.0, 0x1.6f595abfed4a4p-561, 0x1.5119045d8b488p-971, 0.0,
     0x1.6141d14d59a6dp-954, 0.0, 0x1.12e77ff1bcdcfp-322, 0.0, 0.0, 0.0,
     0x1.5a7c1ec9ab168p-186, 0.0, 0x1.dd9b91f96d97p-839, 0x1.80aae0136159p-882, 0.0,
     0.0, 0x1.3a1181d892e5ap-117, 0x1.9adc1ed3017a5p-187, 0.0, 0x1.abb36e37893eep-548,
     0x1.69af47f2f08f3p-468, 0x1.bd056c8cbd923p-563, 0.0, 0x1.6a5a3cf5ce30ep-493, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b3d125eb16a33p-853, 0x1.3466b1111a4b9p-705,
     0.0, 0.0, 0x1.b6096dcffbeefp-495, 0x1p0, 0.0, 0.0, 0x1.152f11b48aff3p-365,
     0x1.38374155b1d0dp-886, 0x1.cfe4753083701p-963, 0.0, 0x1.340c0d603dcedp-251, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3db69576e37a1p-593, 0.0, 0x1.20808067f834fp-140,
     0x1.eb15ef5ea951ep-343, 0.0, 0x1.6dac7c599024bp-587, 0x1.a28a9b5d795fap-875,
     0x1.0ac3af34822ccp-859, 0x1.5f7c36da0721dp-468, 0.0, 0.0, 0.0,
     0x1.aaeffe972f286p-463, 0.0, 0x1.39dd1fcb6bfadp-746, 0.0, 0.0, 0.0,
     0x1.582928686e7dep-339, 0.0, 0x1.895a5f23fa02p-321, 0.0, 0.0,
     0x1.fca96e429e89cp-990, 0.0, 0.0, 0x1.9df8bbcc396f9p-128, 0x1.6e2ff293d036fp-217,
     0x1.8a5a356e82bfap-816, 0.0, 0x1.8be20dd5827fcp-870, 0x1.4a59e8e5b1c6p-923, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dfd2a23ce17abp-313, 0x1.4b3c26df4b3b2p-917, 0.0,
     0x1.82615d944e13cp-214, 0x1.3c817d8036f52p-918, 0x1.fc1757860fd64p-244, 0.0,
     0x1.ce6ecbf4de7d4p-287, 0x1.b0652f015ba86p-250, 0.0, 0x1.22cb1af416aabp-65,
     0x1.bde7e24ca88f9p-717, 0x1.0a9f61c1b849ep-799, 0x1.0636572f13c68p-383,
     0x1.f46ad44a15b76p-17, 0x1.44a371dcdf729p-823, 0.0, 0x1.1484daa768eap-598,
     0x1.d7569e49b5f33p-238, 0x1.aa6c8ca36e598p-137, 0.0, 0x1.e16add9908faep-114,
     0x1.3e8be7722b498p-15, 0x1.89a45926fb00ap-873, 0.0, 0.0, 0.0, 0.0,
     0x1.688378ac4c753p-855, 0x1.01e303aa79853p-415, 0x1.8938608c94e89p-626, 0.0,
     0x1.0ea406b7ed3a4p-628, 0.0, 0.0, 0.0, 0x1.a0e86eaab7703p-493, 0.0,
     0x1.92af1e9bbc822p-708, 0.0, 0x1.7276ad3d29ecp-876, 0x1.9d590f953e387p-738, 0.0,
     0x1.22a2987c9ce47p-425, 0.0, 0.0, 0x1.271f68ff2ffaap-27, 0x1.7452642d969aep-990,
     0.0, 0.0, 0x1.622e34235fbb3p-305, 0.0, 0x1.3c24a50e1f74p-914,
     0x1.32494e468425dp-113, 0.0, 0.0, 0x1.9a1c4526e0c6fp-329, 0.0,
     0x1.eec6a6a180fddp-1000, 0x1.37cf5bd000d2dp-82, 0x1.88b314eee0c6bp-25,
     0x1.105f3082f687bp-749, 0.0, 0x1.97c61cd0a7351p-462, 0.0, 0x1.4709093e32974p-748,
     0.0, 0.0, 0.0, 0x1.ea41ab21ce684p-952, 0x1.93ac4a77fcaf9p-70, 0.0,
     0x1.e6529a36924f1p-68, 0.0, 0x1.7d07d85dd10e8p-167, 0.0, 0x1.6b6b886935da3p-345,
     0x1.706d836e95e4ep-822, 0x1.1c39e3c6e552p-127, 0.0, 0.0, 0x1.eca823ef00ed9p-948,
     0.0, 0x1.e506b32944e76p-464, 0.0, 0.0, 0x1.627c81f1ff164p-725,
     0x1.555de094f72f3p-169, 0x1.67e597c71289fp-1015, 0.0, 0x1.8299c38c9ee29p-108,
     0x1.94e7691d5092fp-764, 0x1.5e75653295c8p-514, 0x1.72a4ef15f50bbp-625, 0.0, 0.0,
     0x1.3e91fd9efb9bfp-856, 0x1.f0bd1d88e657bp-650
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
            tmp1 = Sleef_sqrtd1_purecfma(tmp0);
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
    printf("Sleef_sqrtd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtd1_purecfma bench acc %la\n", global_bench_acc);
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
