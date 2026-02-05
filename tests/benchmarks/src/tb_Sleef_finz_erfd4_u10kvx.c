/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfd4_u10kvx.c --function Sleef_finz_erfd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.4172f782feac6p-445, 0.0, 0.0, 0x1.984df3d35ed1ep-591,
     0x1.bb57becaf3da9p-497, 0x1.b3bf6b007f6b4p-1010, 0x1.56f6367829c4bp-793,
     0x1.90029eac7bb6p-190, 0x1.ace55adaffffep-427, 0x1.fbf756f212e1p-794,
     0x1.c394f6b270802p-737, 0.0, 0.0, 0x1.62dc7cfa7107dp-986, 0.0, 0.0, 0.0,
     0x1.e6c204bfc9ab6p-8, 0x1.d7258575ea69fp-607, 0.0, 0.0, 0x1.a2eb974a8e4f8p-92,
     0.0, 0.0, 0.0, 0x1.057e2e7bbfb78p-819, 0x1.4013479a924a7p-345, 0.0,
     0x1.e4e1eef67745fp-153, 0x1.9ee4a159f8bdp-270, 0.0, 0x1.182bed384b216p-255, 0.0,
     0x1.cefd857f1499fp-349, 0x1.840d4d854717dp-436, 0x1.0b4425c9086b7p-308, 0.0,
     0x1.4096c54c6f91ap-985, 0x1.cf376413a4448p-481, 0x1.05a683bb344c4p-525,
     0x1.a887c7fdbc209p-595, 0.0, 0x1.99fa13b9cd025p-669, 0x1.87907b3d53c38p-1003,
     0x1.3ad349bf31acdp-128, 0.0, 0.0, 0.0, 0x1.acc3ec48a1a4ap-774,
     0x1.d5ecfb6ad5fb9p-514, 0.0, 0x1.fb4f9fe1a8eaap-656, 0x1.6972eecd6bb93p-215, 0.0,
     0x1.27cca25d72efcp-598, 0.0, 0x1.ae383dff1d60bp-692, 0x1.3ed2a56dc8016p-770, 0.0,
     0x1.3378125b01e37p-177, 0.0, 0.0, 0x1.16a67e865814fp-677, 0x1.0ca22704cb011p-508,
     0.0, 0x1.ea0fa76403d99p-11, 0.0, 0x1.2f0bc6d74a141p-849, 0.0,
     0x1.cee5a0b524a26p-482, 0x1.9a22131a25acfp-710, 0.0, 0x1.44640cdd1fd9fp-257,
     0x1.f52312a6c335ap-730, 0x1.5bb7894e005cep-936, 0x1.e1ae5898fab45p-220,
     0x1.3146d1964ef78p-733, 0.0, 0.0, 0x1.c08c16217006cp-646, 0.0, 0.0,
     0x1.c633cc1089bbp-663, 0x1.08b0e55cc76fep-785, 0x1.c51cc9286ab08p-711,
     0x1.02f41a86bf568p-360, 0.0, 0x1.814101b371d29p-925, 0x1.de7d24c9d33bbp-107,
     0x1.8a251618cc54ap-40, 0x1.4814ac7e5be87p-188, 0x1.f44a1d41a10c8p-827, 0.0,
     0x1.10947fcb78291p-514, 0x1.0bdfa6cf29b12p-94, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94215065b4e2ap-589, 0.0, 0.0, 0x1.3d6f0293966d3p-727, 0.0, 0.0, 0.0,
     0x1.2b0da72c78e1dp-644, 0x1.38f0b9c6bffcap-855, 0.0, 0.0, 0.0,
     0x1.239814cfb9867p-479, 0x1.749a7cf021d5ep-412, 0.0, 0x1.d55e7f3343c1ap-162,
     0x1.d622b986ea85p-649, 0.0, 0x1.9eb180313742dp-211, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.07747a2cc5641p-55, 0x1.f16d81a39a1d1p-282, 0x1.28fa05773ef41p-375,
     0x1.55d9c373b8475p-175, 0.0, 0.0, 0x1.41187ff31fdd1p-53, 0.0, 0.0, 0.0,
     0x1.f85fb9a8cfcb5p-666, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.134166c57b29ap-126, 0.0,
     0.0, 0x1.d9834ee53f91p-552, 0x1.4f1b2571fd26ep-726, 0x1.935c4b202dfa1p-63,
     0x1.0d70c2c921c8fp-275, 0.0, 0.0, 0x1.229769a69b3eap-606, 0.0,
     0x1.1a846df36bb42p-301, 0.0, 0x1.9f7fabb709305p-863, 0.0, 0.0, 0.0,
     0x1.ad8c7afd4f1a3p-116, 0.0, 0x1.1d2ae6d6f6b19p-962, 0x1.380c4ca0fb247p-803,
     0x1.f8c5c599fb179p-808, 0x1.0b6e4475dc305p-664, 0.0, 0x1.41030e463a0cap-42, 0.0,
     0.0, 0.0, 0x1.15a401043520ep-710, 0x1.97cbe12f05881p-373, 0x1.38b2406d233b7p-728,
     0.0, 0.0, 0.0, 0x1.f1d55f50afb7dp-197, 0x1.a6f03bb84ffb6p-337, 0.0, 0.0, 0.0,
     0x1.c57db6fc994e7p-909, 0x1.facb5da670c16p-267, 0x1.5accf474dc9fdp-865, 0.0, 0.0,
     0.0, 0x1.96bb410df2716p-652, 0x1.31a9261c06facp-660, 0x1.149f238dbb1d3p-877, 0.0,
     0.0, 0x1.ae064883de2a1p-445, 0x1.b1898cdc859e3p-559, 0.0, 0.0, 0.0,
     0x1.52b426d2818acp-442, 0x1.c4a2143dc3d33p-363, 0x1.a4be4f8fe2f32p-523,
     0x1.cd7cc42fea893p-360, 0.0, 0.0, 0x1.5e206e4597e2bp-525, 0.0, 0.0, 0.0, 0.0,
     0x1.e33723ee7493ep-507, 0.0, 0.0, 0x1.9d03030b6c5d5p-234, 0x1.041f636d4a9fep-383,
     0x1.897ea0e20d703p-925, 0x1.3d7b80e68edebp-173, 0.0, 0x1.b0d85ed6fd89ap-401, 0.0,
     0x1.cf76fb5bd6132p-701, 0x1.a0f97169992d6p-587, 0x1.257e2463023b4p-624, 0.0, 0.0,
     0x1.d68f93502f073p-329, 0.0, 0x1.890cf931b47edp-835, 0x1.65b7696b3d56p-510, 0.0,
     0x1.7ae14e2fdf15dp-423, 0.0, 0x1.5a1ead8d59316p-660, 0x1.a331c544370e6p-565,
     0x1.bd54a7be4bcb7p-15, 0.0, 0.0, 0x1.25a6adc70451bp-178, 0.0,
     0x1.a889584af1cc4p-422, 0.0, 0.0, 0.0, 0x1.6bbb9b5eb100ap-253, 0.0, 0.0,
     0x1.b051be234eae3p-1010, 0x1.f39993e85f5cap-792, 0x1.6b2bdba4b6a99p-370, 0.0,
     0.0, 0x1.b64644736d068p-539, 0x1.e690516eb472ep-64, 0x1.387720858e59fp-347,
     0x1.6d5d3438ed7c9p-808, 0x1.04b239f954d8ap-914, 0.0, 0.0, 0x1.b9c2cf0ef56f9p-49,
     0x1.06a98abbe419cp-653, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d5335d8646dcp-581, 0.0,
     0x1.4f5567fba451dp-567, 0x1.1233dc79d02ddp-68, 0.0, 0.0, 0x1.bdc1f93a96885p-607,
     0x1.1cf1d985c20ccp-291, 0.0, 0.0, 0.0, 0x1.bfe32c9944e86p-910,
     0x1.f43ecf512cdefp-73, 0x1.6ef3098e65fa8p-92, 0.0, 0x1.7424a3cf6595p-90,
     0x1.bbf4d59cd8474p-603, 0.0, 0x1.e18d65574ca55p-547, 0.0, 0.0, 0.0,
     0x1.0e1ff6d1a8392p-107, 0.0, 0.0, 0x1.51a1a2f4d0ea1p-621, 0x1.fc2fa8eacc0ecp-975,
     0.0, 0x1.2e393947e726ap-966, 0.0, 0.0, 0.0, 0x1.4a3096b497eb7p-649, 0.0, 0.0,
     0.0, 0.0, 0x1.e1052f3a0014p-839, 0.0, 0x1.7d907c117a763p-623,
     0x1.05b950bc29867p-351, 0x1.2c2a8ed2391bdp-500, 0x1.cdb5aa9ca3b65p-603, 0.0, 0.0,
     0x1.fcce6a3627d51p-236, 0x1.ccb2e69ba9d05p-729, 0x1.20fed4d74ad79p-118,
     0x1.1121e4717b035p-994, 0x1.40b22c33a10bfp-528, 0.0, 0x1.1d87769de974ap-386, 0.0,
     0x1.a359677faaf55p-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05bcbda8d4785p-766, 0.0,
     0x1.70ff3ea50adf6p-696, 0x1.4d2e9d14f34f9p-854, 0.0, 0x1.46ffb9bf5173ap-1010,
     0.0, 0.0, 0.0, 0.0, 0x1.ff47b0a5e189bp-727, 0x1.9f6730cf5a226p-165,
     0x1.60e87949eadf3p-463, 0x1.d30cf5e2728dep-797, 0x1.6f09f2b30b2b2p-645, 0.0,
     0x1.31e3df9351dbap-66, 0.0, 0x1.c370e4a06abbfp-28, 0x1.b2a19c039afcbp-613,
     0x1.2d7e3da983cf2p-882, 0.0, 0x1.d2ea1371e1218p-131, 0x1.1d6122312536ep-558, 0.0,
     0.0, 0x1.47a7ccb218d99p-619, 0.0, 0x1.80b1a7986e0c1p-771, 0x1.75c7d635a2cdbp-864,
     0.0, 0x1.8855db5af7b51p-225, 0x1.8cdc26e41b294p-101, 0.0, 0x1.1825151747901p-964,
     0x1.7fdd9b44ef4d9p-234, 0x1.29ea93c8ff73p-606, 0.0, 0.0, 0.0,
     0x1.e6ca49ee9c228p-747, 0.0, 0x1.676aa4bbe641cp-705, 0.0, 0x1.38bdcef1d87cep-350,
     0.0, 0x1.edf8e94f19b4cp-739, 0x1.74dec627e4f67p-488, 0x1.1bcfd17058547p-434,
     0x1.952814b296bep-647, 0.0, 0x1.91e95f94191efp-938, 0.0, 0x1.0ccf6c00a7d5cp-217,
     0.0, 0x1.b3878fcc81f86p-848, 0.0, 0x1.eea32176512a6p-292, 0.0,
     0x1.6538a9b7128e3p-561, 0.0, 0x1.4e1b6f7c2176p-494, 0x1.d519ac740bdb9p-753, 0.0,
     0x1.f08c609d51d21p-714, 0.0, 0.0, 0x1.0d22d72ade226p-957, 0.0,
     0x1.98a982fe209bcp-222, 0x1.2b13299d7e608p-151, 0.0, 0x1.f0167496c991p-125, 0.0,
     0x1.a30d29d7c4dap-545, 0x1.231eb363294d5p-909, 0.0, 0.0, 0x1.f1f9e00f7381bp-692,
     0.0, 0x1.ae1f38c80c737p-947, 0.0, 0.0, 0x1.1ae38a39fbdbep-841, 0.0,
     0x1.a244c8ad8bde4p-764, 0.0, 0.0, 0.0, 0x1.3ad29803d34a2p-183, 0.0, 0.0,
     0x1.1075809cf4002p-581, 0x1.c09ca973aa5dbp-874, 0x1.25490a7f3ad2ep-784,
     0x1.de94c6f84eedbp-569, 0x1.e6eaafdac5cd4p-431, 0.0, 0.0, 0.0,
     0x1.a6763d6ae5d91p-1008, 0x1.46fe6c17eb12bp-122, 0.0, 0.0, 0.0,
     0x1.89dba22deba17p-128, 0.0, 0x1.433ac2b54e72dp-653, 0.0, 0.0, 0.0,
     0x1.454a53e85ab9ap-50, 0.0, 0x1.1da9494d42cedp-575, 0x1.9e90324b5d317p-964, 0.0,
     0x1.3c0277b790a79p-453, 0.0, 0.0, 0.0, 0x1.3044cb682c4d6p-427,
     0x1.c989e3e1425cbp-234, 0x1.890181e2e15c9p-19, 0.0, 0.0, 0x1.3330cad0d9755p-93,
     0x1.4b26ee909898p-659, 0.0, 0.0, 0x1.4370f4417129cp-966, 0x1.639ff774e6821p-530,
     0x1.57cdb57f3b2b8p-126, 0x1.d410492702654p-562, 0.0, 0.0, 0.0,
     0x1.788db00cf813bp-850, 0x1.5561097f56b3p-1, 0.0, 0x1.4d50b7ff2a273p-712, 0.0,
     0.0, 0.0, 0.0, 0x1.d696113e81da7p-278, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6431aeac67471p-912, 0.0, 0.0, 0x1.89436e16ef70bp-281, 0.0,
     0x1.e64d39a649a71p-173, 0.0, 0x1.a59c57a0f1a4bp-240, 0.0, 0.0,
     0x1.e0058437b83eap-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.962710770b372p-993,
     0x1.198023c2afd33p-142, 0x1.c9a8e0f0eed8p-984, 0x1.3e19c3517c4f4p-709,
     0x1.20ee98cfc0a87p-596, 0.0, 0.0, 0.0, 0.0, 0x1.93f344507d9a1p-499, 0.0,
     0x1.600b22826fbb8p-984, 0x1.7dbacbf3503fdp-176, 0x1.a0d3535c8c57fp-56,
     0x1.8260551aae74ap-321, 0x1.7d865f9bced8dp-292, 0.0, 0x1.0ade0853ee9e4p-418,
     0x1.d2812b522c723p-261, 0.0, 0.0, 0x1.9a42153527b92p-727, 0.0, 0.0, 0.0,
     0x1.29d5a7126564cp-105, 0x1.697d0b804b662p-817, 0x1.875d4e1123dd1p-447, 0.0, 0.0,
     0.0, 0x1.0b34a87a73e59p-976, 0.0, 0.0, 0x1.3debbcf88a38cp-649, 0.0,
     0x1.0920e7419c7c4p-257, 0x1.02e8a474e2543p-750, 0x1.1b95170689e24p-272, 0.0,
     0x1.67ceb129cb496p-766, 0x1.d2dac0cdfaf43p-949, 0x1.b7c43d7f325c2p-945,
     0x1.26c50097f94f1p-684, 0x1.d0a3e5226d288p-63, 0.0, 0.0, 0.0,
     0x1.a3267e3bf6e2cp-530, 0x1.6be605dbd2518p-413, 0x1.627e86133c926p-196,
     0x1.739d17fda6115p-823, 0x1.35e7e0003c741p-459, 0.0, 0.0, 0x1.99fe289571b9dp-59,
     0x1.d09b533016704p-308, 0.0, 0x1.8f80be341613ep-420, 0x1.d639f05dce09fp-625,
     0x1.27fafd1670a6cp-8, 0x1.0bc82083f8971p-691, 0.0, 0x1.a093ccea7e771p-72,
     0x1.38be1d698ec68p-220, 0x1.23de54716ec39p-644, 0.0, 0x1.cc1f3aa007b1ep-913,
     0x1.61a0d8e4cc299p-466, 0x1.90bc0a5b782abp-910, 0x1.e0f77b2fd6c9bp-977, 0.0,
     0x1.1b7a8c7b1c60fp-183, 0.0, 0x1.8f21e3746aa33p-947, 0.0, 0.0,
     0x1.52beb6c7b8696p-874, 0x1.da9cf90dd85dfp-566, 0.0, 0.0, 0x1.5da38b72fcc74p-953,
     0x1.0e02bc74cc849p-876, 0x1.728d882e7d0e6p-366, 0.0, 0x1.9727b080b9964p-681,
     0x1.abf27e4a1fdd3p-922, 0x1.a7ebcdd022568p-515, 0x1.00f611b4e2be7p-525,
     0x1.07b6388c6c164p-186, 0x1.7b3bb459abef9p-992, 0.0, 0x1.61ca5fb1a5254p-461, 0.0,
     0x1.57889d8d3595dp-389, 0x1.56e3218419687p-39, 0.0, 0x1.ddc8fc9dddf03p-319, 0.0,
     0x1.a221eac2a5948p-137, 0x1.f54a24889f4d7p-607, 0x1.8c0893358f455p-802, 0.0,
     0x1.4afc290987896p-975, 0x1.f275a704cd8bap-170, 0x1.07e341efcc9efp-995, 0.0, 0.0,
     0.0, 0.0, 0x1.136f89ee87cbfp-258, 0x1.fdc1aa4e802dp-601, 0.0, 0.0,
     0x1.81fab82a1b089p-739, 0.0, 0x1.2936705c50a9ap-38, 0.0, 0x1.fea188a806197p-273,
     0.0, 0x1.8f65587fbd567p-652, 0.0, 0x1.ce85961998a33p-997, 0.0,
     0x1.c225b8c627031p-331, 0x1.db5d9c69278bcp-164, 0x1.727f66e6274afp-169,
     0x1.0b8eb319edfe4p-931, 0x1.65e3cc0772b8p-562, 0.0, 0.0, 0.0,
     0x1.7b465c1a333d7p-953, 0x1.2a6c10204642fp-626, 0.0, 0.0, 0.0,
     0x1.10996cdd3df62p-178, 0x1.ca6b5f42faffcp-431, 0.0, 0.0, 0.0,
     0x1.8ccf8b8613dc4p-1010, 0x1.31613ff7ac99dp-545, 0x1.30760aaba9ab6p-793, 0.0,
     0x1.546d5cc48b9ecp-211, 0x1.974382fc13577p-282, 0.0, 0.0, 0.0, 0.0,
     0x1.79a2882416b3ap-511, 0.0, 0x1.3727a43eb7cc9p-241, 0.0, 0x1.d5792c29737f3p-907,
     0.0, 0.0, 0.0, 0x1.97c9e4822a6e4p-221, 0.0, 0x1.d58d461669d6bp-753, 0.0,
     0x1.57ed67dc23f79p-194, 0.0, 0x1.c12cd84090838p-403, 0x1.095a7cebefab8p-910,
     0x1.a306e60c3d562p-254, 0x1.85b542b2a6ac4p-185, 0.0, 0x1.cf181362ee7e3p-260, 0.0,
     0.0, 0.0, 0.0, 0x1.656b5c4227789p-740, 0x1.105b8ecc544c3p-615, 0.0, 0.0, 0.0,
     0x1.3eb0f6ec67af2p-89, 0.0, 0.0, 0x1.610b9512dcd5p-239, 0.0, 0.0, 0.0,
     0x1.7d65012284314p-224, 0.0, 0.0, 0.0, 0.0, 0x1.f6d2813a43c9p-204,
     0x1.a9050e1005facp-906, 0x1.ec5b31e5fbbaap-154, 0x1.38f09cab6f67cp-806,
     0x1.381110fdf37a5p-336, 0x1.fb4868ee2cfecp-723, 0.0, 0.0, 0.0, 0.0,
     0x1.b5fcf86d4f841p-362, 0x1.54159dfeafe07p-763, 0x1.f59f170b2579ap-616,
     0x1.30f9261341b62p-106, 0.0, 0x1.c6f76e8ebdb49p-412, 0x1.f58b0ba102f5dp-802,
     0x1.279bd39430f24p-869, 0.0, 0.0, 0x1.9f79946cb0b9ep-125, 0x1.2460d24fec383p-146,
     0.0, 0x1.a057745e245f6p-533, 0x1.576e0259d6c53p-107, 0x1.e94b780f3fd0ep-757,
     0x1.7c110846f115dp-56, 0x1.624f32bb5283dp-344, 0.0, 0x1.57fa9f23713c5p-538,
     0x1.81f84cf53c2fdp-96, 0x1.d599b57519286p-431, 0x1.f69dc2812f9c7p-354, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f9d5401921dffp-923, 0.0, 0x1.d2b2046252326p-272,
     0x1.220dd0360b8f8p-339, 0x1.fed90362ed2cdp-655, 0x1.82000e44af2ep-33,
     0x1.c50ee5c846116p-855, 0.0, 0x1.9163af1c7f76p-774, 0x1.48ad1d35f29ebp-230,
     0x1.fe9ab3bb4aae9p-617, 0x1.15bc86bebf073p-895, 0.0, 0x1.70a7a4c361e9p-13,
     0x1.c9dee65fb6767p-1006, 0.0, 0.0, 0.0, 0x1.89334d5ca1d7ap-953,
     0x1.e4c604a43d5dbp-1, 0x1.5d60ee4ffc915p-130, 0x1.e55f1f20eaea4p-677, 0.0,
     0x1.c94ab36e368d1p-1003, 0x1.c40fb2499dbe5p-493, 0.0, 0.0, 0.0,
     0x1.df66c356a6646p-754, 0x1.58070b2056263p-968, 0.0, 0x1.20b0643451bf5p-676,
     0x1.a4e97b364bfcap-463, 0.0, 0.0, 0.0, 0x1.42e0109109cc7p-295,
     0x1.246937b7d5037p-442, 0.0, 0.0, 0.0, 0.0, 0x1.7deb82beb953ep-430,
     0x1.ef004d4560a0cp-435, 0.0, 0x1.606aa35598817p-954, 0x1.6262be28ce228p-862, 0.0,
     0x1.39720a018d944p-447, 0.0, 0x1.4a98cacae73dp-984, 0.0, 0.0,
     0x1.4181d771e8421p-299, 0.0, 0x1.784de945a54fp-906, 0.0, 0x1.6137f7986e168p-130,
     0x1.d25cf1721a271p-30, 0x1.2170e62536812p-975, 0.0, 0.0, 0.0,
     0x1.6101f46719de3p-631, 0x1.d6e31a10f0a36p-77, 0.0, 0x1.aab176fb0592bp-256, 0.0,
     0x1.fbbf578e71e8cp-401, 0.0, 0x1.1eb5e8c0ce212p-967, 0x1.a150ee9d8799cp-732,
     0x1.308d1b76826d6p-22, 0x1.7d38d99305a2fp-6, 0.0, 0.0, 0x1.a4034321f439ap-646,
     0x1.17ba284b88ddfp-573, 0.0, 0x1.af90a0d33f60fp-196, 0.0, 0.0, 0.0,
     0x1.863b1e8da2f74p-1006, 0.0, 0x1.e4ec91dfb9613p-676, 0x1.e595924cb11a6p-789,
     0x1.2dd6f4f1fbdffp-792, 0x1.9d4c149483004p-76, 0.0, 0x1.f20d06b13476fp-772,
     0x1.fa0322ded4fe5p-122, 0.0, 0x1.907d49e6e75b4p-898, 0.0, 0.0, 0.0,
     0x1.2e2b6e29bd799p-362, 0.0, 0x1.f8eeb6aeb708fp-882, 0x1.bd0971ca91a9dp-446, 0.0,
     0.0, 0.0, 0x1.e0bfcf47cf0cbp-869, 0x1.15bc38d63aa5p-955, 0.0,
     0x1.3dc4dfc89a72ep-535, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e765f7b6da729p-254,
     0.0, 0x1.06a6dab7613dfp-849, 0x1.496d0e07dc945p-847, 0x1.f8556a4b28a22p-775, 0.0,
     0.0, 0.0, 0x1.683d449c18a08p-666, 0x1.6c79ac3594ed7p-929, 0x1.2f6621e40cac8p-897,
     0x1.ed15deca464a3p-550, 0x1.2fff721443b6ap-437, 0x1.0344f35eedfedp-191,
     0x1.2849df05042a3p-1013, 0.0, 0x1.1434859cfe15dp-326, 0x1.fa6c14ad18c9cp-21, 0.0,
     0x1.f1aa1284b5p-99, 0x1.5c618ed1aadf8p-166, 0x1.9cdb818f7ddaap-25, 0.0,
     0x1.d2b880993e73bp-940, 0.0, 0.0, 0.0, 0.0, 0x1.d15276a88895ap-975,
     0x1.212523fa013bdp-517, 0x1.42543a9f633cap-322, 0x1.966096b9d85dcp-769,
     0x1.10424f5d2e759p-663, 0x1.1d055cd75b3a3p-601, 0.0, 0x1.642003b2ccf6fp-487,
     0x1.8efca93f23079p-862, 0x1.c33bb26276be9p-145, 0.0, 0.0, 0x1.f02114b324403p-270,
     0.0, 0x1.b8a432ecbf18ep-815, 0.0, 0.0, 0x1.a9363737566edp-11,
     0x1.d4eea2bad1a42p-472, 0.0, 0x1.eb5870b7bbdb3p-60, 0x1.18ea53864be49p-346,
     0x1.1c4038c6438fcp-850, 0x1.a6ba75369bfc1p-597, 0x1.588c89e150d2fp-87, 0.0,
     0x1.1d0a111ad9a92p-664, 0x1.6a12cce271d95p-394, 0.0, 0.0, 0x1.933b1d264a45bp-41,
     0x1.e7ed8626dc2fp-419, 0x1.e5c286e3496bap-966, 0x1.d6e622d60331p-994, 0.0,
     0x1.bfbc4113ed43dp-592, 0x1.43b983c044438p-64, 0x1.e497b93619577p-509,
     0x1.47b3a37a0af61p-413, 0x1.34b046442a4aap-133, 0x1.405ed63a63204p-783, 0.0, 0.0,
     0x1.4c88954e9b04ep-515, 0x1.fc8e937c4ff38p-421, 0x1.c77aeffac233bp-436, 0.0,
     0x1.4d9d3ba4db1cp-594, 0.0, 0.0, 0x1.584945c896adep-596, 0x1.1ce3364f72342p-710,
     0x1.3a3e76e0b24a5p-524, 0.0, 0.0, 0.0, 0x1.1fdd20b9c54c1p-891,
     0x1.1012a0f6040dep-270, 0.0, 0x1.5618bd0583f2ep-758, 0x1.90cb1e38e08e9p-41,
     0x1.ff938b86f52bp-785, 0x1.18aeee6914ff3p-791, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80b03a23c5f8fp-245, 0x1.df8503a28c4fcp-605, 0x1.0122fcb352741p-35,
     0x1.01fe61c506ad8p-942, 0.0, 0.0, 0x1.2884095778de8p-129, 0x1.fd9d4266fffb6p-677,
     0x1.4a2621467febep-891, 0x1.ff871d5631547p-221, 0x1.489e35eb68c97p-992, 0.0,
     0x1.5c98ba10f3d0dp-72, 0x1.df57e935df4f7p-509, 0.0, 0.0, 0.0,
     0x1.7149633800028p-108, 0.0, 0x1.41f28580b6cdcp-343, 0.0,
     0x1.9e2a2c9066f3ap-1006, 0.0, 0x1.9d6d18bf8626p-1002, 0x1.a044c6402421dp-456,
     0x1.3d7a7c27712f1p-807, 0x1.941b145f9ccb7p-540, 0x1.abfb92a2193cdp-322, 0.0, 0.0,
     0x1.3cfc907bce31ap-445, 0.0, 0.0, 0x1.bb123fea25c79p-365, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.366fa6935fc85p-50, 0x1.137a2a97b978dp-797, 0.0, 0.0,
     0x1.b540d52e304a6p-617, 0x1.a2440a11c44bfp-974, 0x1.3f1b42fbfe9acp-478,
     0x1.617afa799a93bp-285, 0.0, 0.0, 0.0, 0x1.33ef359bad861p-528,
     0x1.72309e2efbabep-810, 0.0, 0x1.32e6b983a5fc5p-140, 0x1.4d1fc09b4ae62p-589, 0.0,
     0x1.83ee6460e9f2ep-338, 0.0, 0.0, 0x1.6de5c2aa89e97p-178, 0x1.fee3cee7597f5p-522,
     0x1.d532d2e5ab3acp-750, 0x1.aef5480ff4b98p-243, 0x1.1dfc7f1f7c35ap-929, 0.0, 0.0,
     0.0, 0x1.0d35ac1acfe24p-581, 0.0, 0x1.dd3ebeae14188p-423, 0x1.db8f437cab13ap-795,
     0x1.45444f5b73f0cp-178, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_erfd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_erfd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erfd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
