/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd1_u05purecfma.c --function \
 *     Sleef_finz_sqrtd1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.63a5b182b604p-724, 0x1.0f7209de6932fp-1010, 0x1.c4b2d9066918bp-15,
     0x1.de50ca1b9522ap-555, 0x1.c002d7a990f27p-446, 0.0, 0x1.bd366262e3e9cp-357, 0.0,
     0x1.157c1d702b17cp-96, 0.0, 0.0, 0x1.ab0ac79d89466p-183, 0.0, 0.0,
     0x1.bc6f291612d17p-640, 0.0, 0x1.107e0d726ddecp-323, 0x1.d54ee0c720d6dp-890, 0.0,
     0x1.6973562b2257fp-522, 0.0, 0.0, 0x1.4ca3d4294ab35p-1012, 0.0,
     0x1.84f2d859c3545p-436, 0x1.060b10440f9e9p-643, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c7849d0aed82p-649, 0x1.c95aa6f5d5cc3p-39, 0.0, 0.0, 0x1.656b109f4b981p-87,
     0.0, 0.0, 0x1.3b08d28cfa0d7p-90, 0x1.f927b01c0c9edp-279, 0.0, 0.0,
     0x1.ed459975fd33dp-985, 0x1.f6e60aa5b51f2p-294, 0.0, 0x1.4dc5d76746d5p-503,
     0x1.17f4b9a26dbcdp-351, 0.0, 0.0, 0.0, 0x1.b248d114ca4f3p-449,
     0x1.745e5e9a61ec9p-1019, 0.0, 0.0, 0x1.dfe3f404e2bacp-554, 0.0, 0.0,
     0x1.7be71abd603cp-254, 0.0, 0.0, 0x1.0d6079b7ea8f8p-732, 0x1.9682e5c86fe1ep-361,
     0.0, 0x1.80537670b4979p-369, 0x1.e1339617cb669p-41, 0x1.6c4ed953e9877p-18, 0.0,
     0x1.4905364d02805p-455, 0x1.aae88a00b0ac4p-774, 0.0, 0x1.22dac9bc4ea09p-755,
     0x1.fc35a2efec403p-755, 0x1.fb1f288b2c64bp-117, 0.0, 0x1.d714ead0e8e6p-989, 0.0,
     0.0, 0.0, 0x1.2d11244c61626p-357, 0.0, 0.0, 0x1.640fbba19d3d7p-99,
     0x1.def36bad839a3p-143, 0x1.d8f7136d804e8p-43, 0.0, 0x1.53544e5388b4fp-156,
     0x1.33714389b0a2bp-991, 0.0, 0.0, 0x1.eaca4dc45b148p-750, 0.0,
     0x1.d9e1d73e3cb86p-23, 0x1.36e4090f934e8p-857, 0.0, 0x1.6e177d6522473p-509,
     0x1.8435bbc7215f9p-329, 0.0, 0.0, 0x1.c33582d4f17acp-474, 0.0, 0.0,
     0x1.8e8a76c385c36p-952, 0.0, 0.0, 0.0, 0.0, 0x1.849c1b22cad1bp-583,
     0x1.c60565fcd86e1p-948, 0x1.21088fa88198ap-114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8a8e388c932fp-21, 0x1.f7e50e9c0bccep-583, 0x1.3de4941f24c2ep-49, 0.0,
     0x1.1a102bd3846ecp-585, 0x1.9c432d6adb1efp-917, 0x1.6b656c293523fp-489, 0.0, 0.0,
     0x1.9ef5dfefc80d6p-760, 0x1.6dcd892fb6abbp-659, 0x1.4ab12c267c619p-199, 0.0,
     0x1.fc345692029a5p-460, 0.0, 0.0, 0.0, 0x1.c605de1ce239ap-896,
     0x1.7aa05077d8d6ap-55, 0.0, 0x1p0, 0x1.56bdb1d0f987dp-813, 0.0, 0.0, 0.0,
     0x1.a812a36a2b2fp-898, 0x1.dc0edb9e5ccebp-785, 0.0, 0x1.676f5b062bb0bp-655,
     0x1.2430ef500601ap-711, 0.0, 0x1.08b2e93933839p-954, 0.0, 0x1.d2215a74267d4p-993,
     0.0, 0x1.e9a5e96f90dd5p-823, 0x1.7dbee7ffee56bp-623, 0x1.1386736ad616ep-977, 0.0,
     0.0, 0x1.9a1c71ced7216p-683, 0.0, 0.0, 0.0, 0x1.b7ddeba09e9b7p-739,
     0x1.888f5153f4551p-744, 0x1.069c2ecb2282ap-972, 0.0, 0.0, 0.0,
     0x1.048caf429a853p-256, 0.0, 0.0, 0x1.7a890e0a58f1dp-782, 0.0, 0.0,
     0x1.b2f335b5de723p-943, 0.0, 0x1.6f8376c5c4abcp-547, 0.0, 0x1.c945f7f4d498ep-720,
     0x1.2e86ba23488c2p-173, 0.0, 0x1.030a6dfe7ec1fp-490, 0.0, 0x1.2c7b6baefbc68p-669,
     0.0, 0.0, 0x1.2d68c1a588aa1p-969, 0x1.7e099e3b062e1p-306, 0x1.0c89752575badp-967,
     0x1.83b45af01467ep-794, 0.0, 0.0, 0x1.192f63b94b8b3p-805, 0.0,
     0x1.d37bf042feb2fp-404, 0x1.74c3c1d4b40fp-766, 0.0, 0.0, 0x1.ac36d02403f0dp-327,
     0x1.b06024638889dp-667, 0.0, 0x1.139063bc8b15bp-752, 0.0, 0x1.dd1d2f160ccf7p-866,
     0x1.05282ee4b9d61p-407, 0x1.a1a6fc626358p-609, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.689a3b960f93p-188, 0x1.369adf34b2dfbp-191, 0.0, 0x1.7b231afca5f21p-890,
     0x1.27e2f65b39828p-852, 0.0, 0.0, 0.0, 0.0, 0x1.01342f392854ap-714, 0.0,
     0x1.1c30800b83b56p-188, 0x1.383e37043c87ap-502, 0x1.9cca991167c03p-696,
     0x1.25d2142907365p-1015, 0.0, 0x1.bf59d651cde32p-35, 0.0, 0.0,
     0x1.2c310042d8727p-830, 0x1.857c55ce5f323p-699, 0x1.f3096a0c22e3fp-124, 0.0,
     0x1.2e99dd5701778p-269, 0.0, 0x1.39a9596cf4886p-289, 0.0, 0.0,
     0x1.95059cb21feb9p-246, 0x1.9fb09eaec1af5p-500, 0.0, 0x1.0f2979de38d94p-22, 0.0,
     0x1.62e1f00c2910ap-748, 0.0, 0.0, 0x1.b05de820adbe3p-123, 0.0, 0.0,
     0x1.f19a276de128ap-493, 0.0, 0x1.e15909d849b77p-61, 0.0, 0x1.5f3d9dc4cfe7ap-590,
     0.0, 0x1.6f03e5453cbfap-303, 0x1.cd2f71309568cp-199, 0x1.54c534e4c7cbp-35,
     0x1.b2042f3a58b18p-1007, 0.0, 0.0, 0.0, 0x1.03adff2b66d47p-682,
     0x1.9bc4e4aaf67b3p-362, 0x1.303638e0cf246p-284, 0.0, 0.0, 0x1.4b6a50c22a3b6p-272,
     0.0, 0x1.3384935ad7a5dp-284, 0.0, 0x1.fe4fb6665036fp-1010,
     0x1.dee4d231b663fp-410, 0x1.c875c855745adp-497, 0x1.314bdbb616a78p-563, 0.0,
     0x1.b1c8543db4fe4p-559, 0x1.c16712500667ep-558, 0.0, 0x1.eef5e6fe70e81p-943,
     0x1.2760fad6fbbe3p-717, 0.0, 0.0, 0x1.1ffeb0d1b7475p-523, 0.0,
     0x1.4f6caa9d0669p-217, 0.0, 0x1.11b1a3cd7c204p-318, 0.0, 0x1.8b38815359ea4p-94,
     0x1.fe2cb963817a9p-700, 0.0, 0.0, 0x1.1755faec39905p-739, 0.0,
     0x1.da10acf17d6f6p-727, 0x1.a88242ec73078p-431, 0.0, 0x1.b8bb68904fee3p-876, 0.0,
     0.0, 0x1.3df7dda46d23ap-464, 0.0, 0x1.8346d11e78c87p-186, 0.0, 0.0, 0.0,
     0x1.3ef87a76fb2f9p-430, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.611c335a31209p-205, 0.0, 0.0, 0x1.f3203c518e9cap-625, 0.0, 0.0,
     0x1.42278f672df38p-364, 0.0, 0x1.6c593c0872021p-254, 0x1.137f770f8a54fp-1011,
     0x1.fbd0266519f54p-837, 0x1.96e639862df48p-913, 0.0, 0.0, 0.0, 0.0,
     0x1.a8c7ed24b2153p-344, 0.0, 0x1.976679a1dd1bdp-327, 0.0, 0.0,
     0x1.cd078467f69ccp-609, 0.0, 0x1.5121d06a954ep-967, 0.0, 0x1.df17594a98ac4p-374,
     0.0, 0.0, 0x1.7cff455801c73p-66, 0.0, 0x1.a663ac639ab98p-20, 0.0,
     0x1.8d59ac14a33bap-537, 0.0, 0x1.454141a6de45fp-751, 0.0, 0x1.8ee5f710971ccp-65,
     0.0, 0.0, 0x1.59f8259279ddbp-25, 0.0, 0x1.9079b7c2423a6p-529, 0.0,
     0x1.aa39d3171d7fbp-433, 0.0, 0x1.4d0e7ae8bc962p-896, 0.0, 0.0,
     0x1.5b53f2f38774ap-273, 0.0, 0.0, 0x1.d5694707a7307p-930, 0.0, 0.0, 0.0, 0.0,
     0x1.41f99d9bba878p-76, 0.0, 0.0, 0.0, 0x1.5ec05196d8116p-568, 0.0,
     0x1.555138ec4e822p-226, 0x1.eccad0598f5e6p-797, 0.0, 0.0, 0x1.a63b3763dc51bp-440,
     0x1.410cfd520d82fp-811, 0.0, 0x1.6d870673e361fp-158, 0x1.9971c588df222p-666,
     0x1.c3607666214dcp-642, 0x1.dcfa970090424p-158, 0x1.a3e9a544c0a49p-340, 0.0,
     0x1.0be261597df06p-508, 0.0, 0.0, 0x1.b5fed79596bf2p-559, 0.0, 0.0,
     0x1.a7633e5e6b588p-454, 0.0, 0.0, 0.0, 0x1.932c156aae26bp-829, 0.0, 0.0, 0.0,
     0x1.7bd4e3c338731p-590, 0.0, 0.0, 0.0, 0.0, 0x1.6ec45b6ff1e73p-389,
     0x1.d88abb7b8bdbp-610, 0x1.5d0de3850808dp-544, 0x1.787af2180c0ccp-652,
     0x1.0e240cd75553ep-146, 0.0, 0.0, 0x1.72225c95c9c62p-900, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.04bd826d3f211p-365, 0x1.ac9ea80be2f56p-659, 0x1.7a9a1991e129cp-57, 0.0,
     0x1.87e3641827305p-106, 0.0, 0x1.1e2f176630533p-191, 0.0, 0.0,
     0x1.c93b985ed88ddp-201, 0x1.9bc463a3fefa4p-109, 0x1.dfb43ecf4b25cp-241, 0.0, 0.0,
     0x1.532493ae21fc3p-25, 0x1.a8773bbdbedadp-76, 0x1.dc4a19923f298p-53,
     0x1.be04c6f4ff01dp-963, 0x1.41fde70cb102fp-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.246da17331f1ap-662, 0.0, 0x1.ff31eae4d37bap-340, 0x1.ace130fe73b65p-636,
     0x1.ac282b5716836p-466, 0x1.9e88c777450b3p-753, 0.0, 0x1.f98a69deb791p-1013,
     0x1.41a71412f79e5p-950, 0x1.bda8cc444e84ap-436, 0.0, 0.0, 0.0, 0.0,
     0x1.d5c0a687d4bfap-498, 0.0, 0x1.9d697d7ad780bp-395, 0.0, 0x1.c753f68db1bb9p-932,
     0x1.9ee84204e6a0ap-517, 0.0, 0.0, 0.0, 0x1.3397e031d48b6p-230,
     0x1.5959b75f8b433p-189, 0x1.b6b63c0de8804p-459, 0x1.37ab7b28789ebp-78,
     0x1.83aec4b939f7ap-399, 0.0, 0x1.2186a417a2d0cp-23, 0.0, 0x1.efebc393065a7p-867,
     0.0, 0x1.b5c7fc57f029ap-542, 0x1.d846610596e51p-734, 0.0, 0.0, 0.0, 0.0,
     0x1.eed330b1e7721p-747, 0.0, 0x1.fbbc1f19b422p-382, 0.0, 0.0,
     0x1.f815602980bf6p-238, 0.0, 0x1.29a86fa50745fp-48, 0.0, 0.0, 0.0,
     0x1.c8dd46fe6e1dfp-262, 0x1.5db3ed97107f7p-28, 0x1.4d08e63020208p-35,
     0x1.eb244a4577814p-191, 0.0, 0x1.497d7b3f082f9p-446, 0.0, 0x1.1483cb0209501p-487,
     0x1.0d4330c8914e3p-4, 0.0, 0x1.fffa4b02e2401p-264, 0x1.ff0fc6c5857b4p-947, 0.0,
     0.0, 0.0, 0x1.e56009be96013p-687, 0.0, 0.0, 0x1.42826a3b84864p-443,
     0x1.21e854ec9d205p-808, 0.0, 0.0, 0.0, 0x1.5c26a30b6bc23p-131,
     0x1.46a64dc0677b4p-431, 0x1.1ad78aac36182p-509, 0.0, 0x1.87e3023c7f4ebp-868,
     0x1.a5935ed77822bp-452, 0x1.d7f179c9c148ep-416, 0x1.269c7f03f71cap-374, 0.0,
     0x1.d0a5d88607647p-585, 0.0, 0x1.45f5eccd2b204p-171, 0x1.94ca14240a09ap-777,
     0x1.31631dc77f8fcp-351, 0.0, 0.0, 0x1.a91eeff52bc6bp-750, 0.0, 0.0,
     0x1.173cac9017ee2p-28, 0.0, 0.0, 0x1.b3b30c606c273p-831, 0.0,
     0x1.75552b8a53da1p-71, 0x1.b99a609b138abp-27, 0x1.0a9f5ebaa9fb3p-553, 0.0,
     0x1.f4256e9bc36f9p-623, 0.0, 0x1.32aee0e03c544p-734, 0.0, 0.0, 0.0,
     0x1.480841ef876f1p-581, 0x1.66b43f68ab61bp-795, 0x1.05a1014b8efcfp-259,
     0x1.206f6a18d606dp-959, 0x1.7c975784c7f5bp-387, 0x1.6e975661dedbap-704,
     0x1.97d840e7a111ep-431, 0.0, 0.0, 0x1.75a6e0e23f4d5p-729, 0.0,
     0x1.47df0753ae784p-404, 0x1.406f60993816ap-835, 0x1.1c1f142fc1f95p-99, 0.0,
     0x1.7813db830a296p-777, 0.0, 0.0, 0x1.7d79b7c8eb545p-803, 0.0,
     0x1.cea894f7fa38ap-102, 0x1.baa5e9a108eadp-584, 0x1.9aa69ef803122p-826,
     0x1.27df7141fd8dbp-468, 0x1.34c86545f8b5cp-322, 0.0, 0x1.17570b93e651p-850, 0.0,
     0.0, 0.0, 0x1.ed967fda7a5fdp-78, 0x1.3a340d8d2c645p-992, 0x1.5d1af44e24faep-781,
     0x1.9dbe26f8f14eep-244, 0x1.0d6c58d64f418p-454, 0x1.149f0622168dap-511, 0.0,
     0x1.2ad71b7de409ep-178, 0x1.a6275e575eefp-217, 0x1.c2d187faeeb0bp-79,
     0x1.70cf9928ddd59p-568, 0x1.8e501e956edd4p-307, 0x1.07cd690cc5e5cp-255, 0.0, 0.0,
     0.0, 0x1.2c83847244a8bp-473, 0.0, 0x1.c24f950a592acp-281, 0.0, 0.0, 0.0, 0.0,
     0x1.de6d9b57b4d4ap-624, 0.0, 0x1.0e8ea04d0fa91p-125, 0.0, 0.0,
     0x1.76faaee0b4b9ap-962, 0.0, 0.0, 0x1.56e0f295a7a1dp-545, 0x1.adaaab2e1c1dap-694,
     0.0, 0.0, 0x1.7ca5ece10da67p-846, 0x1.5d2f03846795p-977, 0.0,
     0x1.89da935d462dp-167, 0.0, 0.0, 0.0, 0x1.0243506426026p-956,
     0x1.1c89545bc1118p-183, 0.0, 0x1.25350029fa2aap-4, 0.0, 0x1.af911769eba5dp-797,
     0x1.9ade30a2827ccp-313, 0.0, 0x1.ffd7b5b5c9d22p-17, 0.0, 0x1.7bd895e57fca7p-668,
     0.0, 0.0, 0x1.ea6e9c68e41eap-239, 0x1.102fd268cf969p-906, 0.0, 0.0,
     0x1.d254b61412582p-739, 0.0, 0x1.fd34c2b9f0359p-422, 0.0, 0.0, 0.0,
     0x1.8ef7d11f696eep-916, 0x1.ca35fa3707e0dp-910, 0.0, 0x1.78499575bbe43p-846, 0.0,
     0x1.9f4f9421558f6p-131, 0x1.3b7148c89f143p-432, 0.0, 0x1.113d13b9ab2ccp-437,
     0x1.cd8540e1275ffp-707, 0x1.c8fd88f7ae028p-5, 0.0, 0x1.097161a97875fp-799,
     0x1.3c025bd079f04p-886, 0x1.dfabb55643698p-1010, 0x1.267cfed5dc745p-383, 0.0,
     0.0, 0x1.51eea0fc5812dp-566, 0.0, 0x1.7d2f6d169649cp-549, 0x1.f2c77870198f1p-743,
     0.0, 0x1.b438464323d59p-470, 0x1.e0701ad3b019dp-428, 0.0, 0.0,
     0x1.56e291761995bp-500, 0.0, 0x1.91e4b3b29b6aep-493, 0x1.94f24cbc88a4fp-686,
     0x1.0dafc4bf96c8fp-726, 0x1.e676fa097c7a1p-732, 0x1.9d18d06522742p-90,
     0x1.9b9a9e1cec876p-41, 0.0, 0.0, 0x1.c1c2961ab413cp-294, 0x1.e611bdf0816e1p-273,
     0.0, 0x1.747749c78874p-380, 0x1.b1ee54b150c94p-366, 0x1.9d12bfc6ea05fp-561,
     0x1.980ff79f112b1p-343, 0x1.116f0a6368019p-933, 0.0, 0.0, 0x1.89d9302a8ef6ap-379,
     0x1.47c7ac5fecd2bp-773, 0.0, 0x1.ef04234e52817p-824, 0.0, 0.0, 0.0,
     0x1.e97abd65fc521p-409, 0.0, 0x1.fc354097de9ddp-837, 0x1.386ec68b6c586p-616,
     0x1.a99ecbf5242fbp-253, 0.0, 0.0, 0x1.d825dc9df899ap-617, 0x1.49ab10848f9dbp-409,
     0.0, 0x1.a8e245b7b397fp-799, 0.0, 0x1.e7f36073498a2p-674, 0x1.9e9275d1cbb28p-180,
     0.0, 0x1.7a12bc873566p-446, 0x1.cc34320b4f1a8p-493, 0.0, 0x1.26c7ea7a99a31p-617,
     0x1.2d682e7afaee8p-716, 0.0, 0x1.acfd9d8b6fc81p-375, 0.0, 0.0,
     0x1.87f1f40eb7cf2p-586, 0x1.ee922fbd3c301p-640, 0x1.008974bca3704p-699, 0.0,
     0x1.73d90c9b685bp-860, 0.0, 0.0, 0x1.493dbddd32c5fp-213, 0.0, 0.0, 0.0, 0.0,
     0x1.d4f24177c99bfp-455, 0x1.1bf0dd5e4da67p-409, 0.0, 0.0, 0.0, 0.0,
     0x1.e3c3e08a2399p-424, 0.0, 0x1.a7ae9894c770cp-16, 0x1.d70388c83b622p-168,
     0x1.3401be051677p-631, 0.0, 0.0, 0.0, 0x1.ef6ff72d83aa1p-431, 0.0,
     0x1.804e1e8f0f973p-679, 0.0, 0x1.f76f1e29d6505p-784, 0.0, 0x1.de338f564c5dbp-266,
     0x1.2c5fc1942bf83p-1012, 0x1.fea4072f8aefep-398, 0x1.e7a9488331015p-849, 0.0,
     0x1.42d0fb68dd491p-895, 0x1.50e568e0ab454p-498, 0x1.6a14699b1e90fp-160,
     0x1.a1e6d9eb4a857p-704, 0x1.80cc12db65023p-563, 0.0, 0x1.241ab55ce3589p-168, 0.0,
     0.0, 0x1.7e609e13db4f8p-990, 0.0, 0x1.27d18c99ed92dp-160, 0x1.30eb969fb4352p-643,
     0.0, 0.0, 0x1.2e519405a0697p-68, 0x1.16bfb1fbd31d7p-210, 0.0, 0.0,
     0x1.80ef0b78229ddp-752, 0.0, 0x1.6e61c380e2a01p-579, 0x1.bd90e0cf0ff9p-1010, 0.0,
     0.0, 0x1.6916fd072bd6fp-53, 0.0, 0.0, 0x1.78c5521c3980ap-698, 0.0, 0.0,
     0x1.7020fc1e11d8bp-997, 0.0, 0x1.3f334de49105fp-775, 0x1.27818632b1f87p-742,
     0x1.591d4d525743fp-682, 0x1.d7df629bf6ad8p-551, 0x1.c1a19071ddacfp-214,
     0x1.02950dee8ea72p-755, 0x1.98a5de95fdd36p-434, 0x1.4d1958b4d1ebdp-516, 0.0, 0.0,
     0.0, 0x1.a695818cfa43cp-675, 0.0, 0.0, 0x1.fada3b3975f53p-636,
     0x1.2e37c6f20a123p-625, 0.0, 0.0, 0x1.5340d7e6762a1p-327, 0.0, 0.0, 0.0, 0.0,
     0x1.4dda2b4891e89p-473, 0x1.53073a54af0eep-41, 0.0, 0x1.755a597f64692p-140,
     0x1.2078c0537f6fp-211, 0x1.eee34c2f051eap-556, 0x1.9cb7ce4f59aecp-557,
     0x1.8310a4ca55b44p-387, 0.0, 0.0, 0x1.6db3f60f34e5dp-324, 0x1.4d0d7791e5378p-906,
     0x1.880d1b635bf97p-467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93a1cbaa950e4p-457,
     0.0, 0.0, 0x1.9f4cc2dc7a7f9p-107, 0x1.31e85eb9d3c41p-74, 0x1.0e5194dc05816p-159,
     0x1.86a929dfc16e6p-822, 0x1.34031f72401e3p-731, 0x1.c783b6a26f4d3p-363,
     0x1.aa35c19edd8e8p-430, 0x1.38b81d9037e73p-359, 0.0, 0x1.110d3764628cdp-685, 0.0,
     0.0, 0x1.8f208ed04590cp-165, 0.0, 0.0, 0x1.4bd67552824e2p-507, 0.0,
     0x1.62d28a5193bb9p-276, 0.0, 0x1.98319e1b37253p-33, 0x1.05478cac2bab9p-163,
     0x1.d0f590525d4dbp-138, 0x1.c95f4fbbdedd3p-54, 0x1.d2eae873897fep-811, 0.0, 0.0,
     0x1.dcc8591dd9218p-215, 0x1.54dc6e75c2515p-483, 0x1.2360cd6a2f0fep-786, 0.0, 0.0,
     0x1.70400164c354cp-563, 0.0, 0x1.83e3695ba6b2dp-914, 0x1.1172e6d493e5fp-929,
     0x1.4ffbaa8c9b414p-250, 0.0, 0.0, 0x1.58649823f0bap-292, 0x1.4e4c70a977e27p-854,
     0.0, 0.0, 0.0, 0x1.3d82bdd254f0ap-389, 0x1.b1cdeea7b396dp-850, 0.0, 0.0, 0.0,
     0x1.3aa28368df97cp-388, 0x1.58a9280a0a226p-1018, 0x1.d98608fe401cp-439,
     0x1.25d8b48b99346p-234, 0.0, 0x1.4a493502a9a6cp-477, 0.0, 0x1.f8c7ee6e358bbp-54,
     0.0, 0x1.7dd467e75a4d5p-957, 0x1.2a961faa46c72p-212, 0x1.b7d2eb64dcf7ep-788,
     0x1.b99b09c41bdcbp-364, 0x1p0, 0.0, 0x1.9bae0a98c727bp-6, 0x1.159144e187c45p-120,
     0x1.665769911d648p-456, 0.0, 0x1.db3b7c74ad127p-144, 0x1.a1be0948600bap-744,
     0x1.cf02e0e9a437p-861, 0.0, 0.0, 0x1.906ac974effb3p-461, 0x1.aed25dd1ae512p-454,
     0.0, 0x1.8b1e8184f02a6p-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38eb52b5081f2p-218,
     0.0, 0.0, 0x1.00bd2949c6cfep-973, 0.0, 0.0, 0.0, 0x1.f32b4c1911b63p-500, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07150c51cb44dp-317, 0.0,
     0x1.eb329529c8dbap-512, 0.0, 0x1.f504004fd6824p-274, 0x1.f49d0accda42ep-396,
     0x1.9e2562bff1383p-482, 0.0, 0.0, 0.0, 0x1.8610e94ea3648p-211, 0.0,
     0x1.75652c8cbd0b1p-650, 0.0, 0.0, 0.0, 0.0, 0x1.9c0b150d3cab8p-408, 0.0, 0.0,
     0x1.2d025d5b9a478p-1006, 0.0, 0x1.0ca6fc3faab44p-96, 0x1.3b030ffdef631p-57, 0.0,
     0.0, 0.0, 0.0, 0x1.0d0fb770570f2p-621, 0.0, 0x1.b0b5567552ddbp-214, 0.0,
     0x1.ec3501475efd9p-802, 0.0, 0x1.79657adbd9b97p-624, 0x1.656ec0815f889p-953, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.798d8a566a433p-332, 0x1.55add1b86d1e3p-832, 0.0,
     0x1.4ee8ce952fbfp-507, 0.0, 0x1.c1a70f4565be6p-908, 0.0, 0x1.ab420f8e2ed88p-585,
     0.0, 0.0, 0x1.719eb459be802p-762, 0.0, 0x1.82049d6f1a5dep-831, 0.0, 0.0,
     0x1.ff8c7f6e83a25p-284, 0.0
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
            tmp1 = Sleef_finz_sqrtd1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sqrtd1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd1_u05purecfma bench acc %la\n", global_bench_acc);
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
