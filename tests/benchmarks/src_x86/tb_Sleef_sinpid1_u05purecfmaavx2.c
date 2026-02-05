/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpid1_u05purecfma.c --function \
 *     Sleef_sinpid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.57ca614a169bap-459, 0x1.a0d1baab74513p-359, 0.0, 0x1.a0827a48f3357p-170,
     0x1.91ebb5c7ee345p-229, 0.0, 0x1.ff8c451fffac6p-68, 0x1.b5140f63f2564p-370,
     0x1.a62083ad60c7p-700, 0x1.cbdf47f9030ccp-224, 0x1.38b1dff456a4fp-198, 0.0,
     0x1.fe1c708607adep-617, 0.0, 0x1.54b49c9d1e12p-746, 0x1.11504d5b47b98p-23, 0.0,
     0.0, 0x1.8405bc56b09f6p-142, 0.0, 0.0, 0x1.49cd4c2efbf2bp-724, 0.0,
     0x1.e3e82fb3c7366p-391, 0x1.4f3c79118600cp-907, 0x1.8a6ab89ccc375p-341, 0.0, 0.0,
     0x1.25015ca750e0dp-257, 0.0, 0x1.ca106cab251fep-18, 0x1.1d9991b18cffdp-782,
     0x1.51e1bf3193b6ap-801, 0x1.459143ec5bd6fp-169, 0.0, 0x1.040a73a088827p-786, 0.0,
     0.0, 0.0, 0.0, 0x1.6bb78dad5413p-493, 0x1.332bb6d12fdeep-982, 0.0, 0.0, 0.0,
     0x1.d160d24455177p-469, 0.0, 0x1.0571567db9a7fp-269, 0.0, 0x1.392115c887e65p-250,
     0x1.54851b4980601p-889, 0.0, 0.0, 0.0, 0x1.58a2a026c1c25p-761,
     0x1.f150d21216f7p-481, 0x1.0d6888aa9487ep-372, 0.0, 0x1.34bc20a04795dp-794, 0.0,
     0.0, 0.0, 0x1.5bc193f0ddc71p-425, 0x1.9f115a7f756f3p-921, 0.0, 0.0,
     0x1.514d5719d85d8p-568, 0.0, 0.0, 0.0, 0.0, 0x1.d5845fa66bdabp-928, 0.0,
     0x1.31d55ebb0d42cp-479, 0x1.eca3f0dcb4ac6p-235, 0.0, 0x1.273d43df6a755p-590, 0.0,
     0.0, 0x1.85842414efdfbp-609, 0.0, 0.0, 0x1.afad3cbb2d494p-112, 0.0, 0.0,
     0x1.0606ead0caecep-389, 0.0, 0.0, 0x1.19933929bab67p-261, 0.0, 0.0, 0.0,
     0x1.1ecbb6227b2d3p-31, 0x1.1509c75c5e6dp-816, 0.0, 0x1.b217420181ec9p-331, 0.0,
     0x1.97243b4e169bap-272, 0x1.ea4de5be54d1cp-607, 0x1.44fba8b2873c3p-1012,
     0x1.615e612b2125ap-650, 0x1.84d7280b522c5p-198, 0x1.29a841c452614p-907, 0.0,
     0x1.5efb4e16994c6p-933, 0x1.cce900a0b9d39p-34, 0x1.c022aade47439p-954,
     0x1.3e61212a74d77p-541, 0x1.90bb995130468p-92, 0x1.e3f08bc632aa5p-524, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b99983e16ea68p-427, 0.0, 0.0, 0.0, 0x1.7364bf9bebe25p-325,
     0.0, 0.0, 0x1.9d04c971f86c1p-876, 0.0, 0.0, 0x1.799a48c9542b6p-1019, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d0e6f0c71aaap-133, 0x1.d2e454b46964cp-676,
     0x1.d5c6d8d60aeb8p-834, 0x1.4dab19533b0cbp-47, 0.0, 0.0, 0x1.6cafcff562c18p-235,
     0.0, 0.0, 0.0, 0.0, 0x1.3a030ce8f4fc1p-251, 0x1.fa30580ed7a0ep-175,
     0x1.c6a4967489219p-416, 0x1.015a1918ea505p-762, 0x1.0d65caf761fc9p-849, 0.0, 0.0,
     0.0, 0x1.ea19ca9f171aap-248, 0x1.6eb5efd7aca22p-597, 0x1.923f07421b924p-743,
     0x1.3f62ea75b0404p-891, 0x1.4996969a3b557p-714, 0x1.af790f32fdb55p-608, 0.0, 0.0,
     0x1.5a8b442744845p-690, 0.0, 0.0, 0.0, 0x1.1b874d1098e35p-448, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.811cc6b6f4b8ap-375, 0.0, 0.0, 0x1.cdd075f523f74p-126,
     0x1.6abf22faa4314p-688, 0.0, 0.0, 0x1.a2a5be11ae74ep-813, 0.0, 0.0, 0.0,
     0x1.28e112ac30503p-856, 0x1.4c2d8f911be34p-799, 0x1.ff211123c8e08p-108,
     0x1.d58ff49ebc26ep-1016, 0.0, 0.0, 0.0, 0x1.af269fa1cdeadp-105, 0.0,
     0x1.90cfb5ce40ffp-94, 0.0, 0x1.0b7fcb61572cap-98, 0.0, 0x1.1ae8d1e625f11p-790,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.576e6579946edp-680, 0x1.6eb57fa448f95p-759,
     0x1.6911d7e2168bfp-302, 0x1.58984d33955cbp-541, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0dd2b232d8dap-988, 0x1.1c9cbe5d7adfep-243, 0.0, 0.0, 0x1.60cc8397018acp-773,
     0.0, 0.0, 0x1.123fefe84cb3ep-724, 0.0, 0.0, 0.0, 0.0, 0x1.7e6752c60e193p-301,
     0x1.d8ba890c3171bp-140, 0x1.920857144e1e5p-655, 0.0, 0x1.8e28255426cb2p-529, 0.0,
     0.0, 0.0, 0x1.2ce602a2e700fp-49, 0x1.474587437210dp-607, 0.0,
     0x1.c16817bb9351cp-147, 0.0, 0x1.20555f8203e29p-687, 0.0, 0x1.ab8a9780abfebp-811,
     0.0, 0.0, 0x1.ba702b23e2befp-624, 0.0, 0x1.003742acc0f35p-496,
     0x1.0b12c8fb4cc43p-518, 0x1.5372bd312487dp-529, 0.0, 0.0, 0x1.fdc096c37cc92p-730,
     0.0, 0x1.85d4a8052e792p-651, 0x1.51a819f6d2ec2p-142, 0x1.dc93f54fb74e5p-677, 0.0,
     0x1.6c3107e2fce75p-453, 0x1.f902492b0bd8dp-18, 0x1.3ba1b9ef38bddp-530,
     0x1.87461cb7cb6fbp-698, 0.0, 0.0, 0x1.cda367a43b98p-129, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbf7c7489e1bep-289, 0x1.0501be2b19b19p-918, 0.0, 0.0, 0.0,
     0x1.2cdbb2d382764p-745, 0.0, 0x1.db1d099a0c13dp-915, 0.0, 0x1.5c70f945240c7p-281,
     0x1.dcf16a6df87b8p-152, 0x1.9d64906a15e18p-704, 0x1.413197fe86c5fp-862, 0.0, 0.0,
     0.0, 0.0, 0x1.3b1832b0d2c5ep-996, 0x1.b84ec781f7dadp-769, 0.0, 0.0,
     0x1.dbe82d1b9a181p-180, 0.0, 0.0, 0.0, 0x1.85c0c0c03b497p-586,
     0x1.e2ed8be50aec4p-414, 0.0, 0x1.296df44c7751p-42, 0.0, 0.0,
     0x1.4bba8d5c30914p-262, 0.0, 0x1.036679c8b512p-115, 0x1.cc4b7c114adcep-744,
     0x1.82ddc3418bb5ap-806, 0.0, 0x1.473db267fc418p-538, 0x1.63f0285772384p-134, 0.0,
     0.0, 0x1.1077d614d5dd7p-95, 0.0, 0x1.93e9ae86c0bcap-933, 0.0, 0.0,
     0x1.0fe3852f8463ep-593, 0.0, 0x1.d50d8a88c8ef9p-349, 0x1.88d1cc10f7e9fp-857,
     0x1.e4e94dc5e9703p-361, 0.0, 0.0, 0.0, 0.0, 0x1.fd970dbd36dbdp-915,
     0x1.78c531a8cbec6p-139, 0x1.cd04b9772720ep-87, 0x1.6cae99f2ccdd3p-112,
     0x1.b4fe60aaf22efp-996, 0x1.9c0dc2081afedp-845, 0x1.0dc2b2b647d31p-740, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3733fb2c5a04dp-634, 0.0, 0.0, 0x1.9e5cec93e8ceep-898,
     0x1.31306743af2a3p-410, 0x1.c94898c80b885p-601, 0x1.60c36846e462ep-433,
     0x1.1dd1324fca70bp-780, 0.0, 0x1.8113da3b077b9p-714, 0x1.bd6a91cdc9433p-583,
     0x1.2a446baeaad68p-261, 0x1.bfa745d262ffap-66, 0.0, 0.0, 0.0, 0.0,
     0x1.c995f463fb67ap-844, 0.0, 0x1.7cf7cdf33a8bdp-939, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.863f0b5607932p-1004, 0.0, 0x1.09115b0e8f566p-477, 0x1.82d4ff25c0f05p-406,
     0.0, 0.0, 0.0, 0x1.8d8325a0c40ebp-232, 0.0, 0x1.dc6bf39955d9dp-155,
     0x1.b3514ec3b5b9ep-535, 0.0, 0x1.c59015f884ba6p-78, 0x1.a79a88ce8ff7ap-457,
     0x1.65d0965d6d2f2p-953, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.66eeafc68e669p-131, 0x1.b1234a9b05afp-659, 0.0, 0x1.08c6621cbfe2p-403,
     0x1.abbbea446a807p-691, 0.0, 0.0, 0x1.a5f05d46bd221p-782, 0.0, 0.0,
     0x1.eda8a1b70bc0dp-829, 0x1.e1938daddd7e4p-798, 0x1.75fa6f0ad45f4p-862,
     0x1.16dd2f4295b2dp-635, 0.0, 0.0, 0x1.184ba206e6b29p-55, 0.0,
     0x1.f271d1ce30142p-264, 0x1.3c738f6382843p-710, 0x1.86bfbc91169c7p-440,
     0x1.0bf35ec5b450dp-210, 0.0, 0.0, 0.0, 0x1.077a04657b215p-478,
     0x1.688f7356ac24ap-462, 0.0, 0.0, 0.0, 0.0, 0x1.3b993e9404a6bp-140,
     0x1.ddc8b909fd746p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34bc18179c853p-327, 0.0,
     0.0, 0x1.9b9b5a16b5bffp-191, 0.0, 0x1.525636bc699e1p-555, 0x1.5dc7761539b55p-634,
     0x1.43d3029c65611p-989, 0x1.9ffa508cccb1cp-643, 0.0, 0x1.18b9e96a88ce6p-75, 0.0,
     0.0, 0.0, 0.0, 0x1.69d867d094d31p-497, 0x1.47b778e12aa09p-839,
     0x1.39906de5bfe96p-251, 0x1.d629b9f4ec0c4p-732, 0x1.ba2f6b951f5bfp-1004,
     0x1.ca806ae726ab9p-884, 0x1.c7deed021ed06p-710, 0x1.a905833e2ff16p-831,
     0x1.89a34003c201p-1013, 0.0, 0x1.427472d3d2258p-506, 0.0, 0.0,
     0x1.4c2d22249fa94p-270, 0.0, 0.0, 0.0, 0x1.d62967d1fd933p-708, 0.0,
     0x1.fb35bbc0653e8p-429, 0x1.62aeb2bae0bc3p-290, 0x1.59e2f2058394p-474, 0.0, 0.0,
     0.0, 0x1.c085b35d8dfc6p-452, 0.0, 0x1.3b0599da083f9p-850, 0x1.b695c8e0d7d81p-403,
     0.0, 0.0, 0.0, 0.0, 0x1.90dd6348d98f9p-21, 0.0, 0.0, 0x1.f13ab275fa2a8p-633, 0.0,
     0.0, 0x1.96596230f56aap-372, 0x1.b690225928f5dp-535, 0.0, 0x1.84b74399b1683p-169,
     0x1.0f6fd946e9dfdp-749, 0x1.4678aeb359c2dp-728, 0.0, 0.0, 0.0, 0.0,
     0x1.fad5ee3dfd5f3p-240, 0.0, 0x1.8e4fcb0e1946cp-418, 0.0, 0x1.b8726b85e3b93p-428,
     0x1.a03eedab3c2aep-879, 0x1.f672dbd591245p-177, 0.0, 0x1.24d673c65a94dp-518,
     0x1.2a22ae055fc4bp-493, 0x1.77ec2e8f25b92p-624, 0.0, 0.0, 0x1.b1ff4fc36e221p-533,
     0x1.d008d97cb14bap-956, 0.0, 0.0, 0x1.953e1829b89c2p-64, 0.0,
     0x1.793b1884229c2p-198, 0x1.3a5f62c65502dp-599, 0.0, 0.0, 0.0,
     0x1.96c8be45d8e58p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a853957b0becfp-492, 0x1.3a0e9c7d0eeffp-654, 0.0, 0.0, 0x1.77b12cd1ddbccp-86,
     0x1.925a189768df8p-190, 0x1.a7670b7970c39p-644, 0x1.cf464bf14585ep-425,
     0x1.684934ad2337bp-169, 0x1.577293dfa39fp-306, 0x1.639125b830228p-858, 0.0, 0.0,
     0x1.a2abd6408206dp-498, 0x1.7f55522493f89p-421, 0.0, 0.0, 0x1.a87170a44adep-719,
     0x1.61cbef7c5e5cep-1013, 0x1.410f43f35a8e2p-720, 0.0, 0.0, 0.0, 0.0,
     0x1.3652e49fc5249p-219, 0.0, 0.0, 0x1.6f1e0d0e0f851p-851, 0.0, 0.0, 0.0,
     0x1.ffe920741ad17p-367, 0.0, 0x1.20653d95cc699p-298, 0.0, 0x1.a70fc9eecb094p-93,
     0.0, 0x1.7b52779265b47p-927, 0x1.e2863d91e6f73p-254, 0x1.f766f646b6344p-264, 0.0,
     0x1.15aeef884a0bcp-113, 0.0, 0.0, 0.0, 0x1.e96c37c27b06ap-760, 0.0, 0.0,
     0x1.f45a6e12e72a4p-162, 0.0, 0x1.5211b8bd77e4p-949, 0x1.5eb546496eca8p-524, 0.0,
     0.0, 0.0, 0x1.09fc700e23d6p-706, 0x1.97ee244a30d17p-320, 0x1.169417655b6f5p-405,
     0.0, 0.0, 0x1.9eab7b298c5a3p-472, 0.0, 0x1.d90158a948aedp-71, 0.0, 0.0,
     0x1.e79f5d9963e06p-157, 0x1.03d18078372f8p-964, 0x1.db730a52d215p-648, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff7a330a586fep-717, 0x1.c95e07da3ea3bp-163,
     0x1.b020c01b42a3dp-393, 0x1.ad72e5152b618p-208, 0.0, 0x1.eb885e21c4ebdp-551,
     0x1.da2f3e0e4db7fp-450, 0.0, 0x1.ca702db6536afp-861, 0.0, 0x1.52df896016d98p-333,
     0.0, 0.0, 0x1.9a82b6d7f669ep-926, 0x1.49cf1aa9a88b3p-291, 0.0, 0.0,
     0x1.e0e148e1372abp-821, 0.0, 0.0, 0.0, 0.0, 0x1.d44426621f5f5p-861, 0.0, 0.0,
     0x1.e32228243eacdp-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f16953371a8afp-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.457c6596d1d7fp-539, 0.0,
     0.0, 0x1.2136075e340a8p-779, 0x1.3898245b9f9c1p-674, 0.0, 0x1.26e14a906ebcbp-464,
     0.0, 0x1.75ada858aec13p-748, 0.0, 0.0, 0x1.5ae10332b89d6p-190, 0.0, 0.0, 0.0,
     0x1.a0e9eae921528p-771, 0x1.334edfdec6d89p-376, 0.0, 0.0, 0.0, 0.0,
     0x1.5195784ffdecfp-914, 0.0, 0x1.9653a85710d5dp-431, 0x1.d45af0ed02507p-953,
     0x1.eacaad10c5bf6p-535, 0.0, 0x1.aff8fd2467816p-492, 0.0, 0.0,
     0x1.a2dcd173a456fp-756, 0.0, 0x1.73623b3d1ee75p-908, 0.0, 0.0, 0.0,
     0x1.3d8cf05b425f7p-514, 0x1.a3cbf0480678ap-690, 0x1.cb00c84f72e38p-433, 0.0,
     0x1.8d8c64cd0f055p-582, 0x1.f1b203c0658bap-473, 0.0, 0x1.9a7bca21096ebp-528,
     0x1.abd8792e6fcbp-195, 0x1.43e335fd5da85p-617, 0x1.4723d6cb67d82p-289,
     0x1.7269f2db22753p-548, 0.0, 0x1.cdcaef4d7ecc1p-1007, 0x1.64fc065ae8827p-1,
     0x1.c024f3231e6f2p-223, 0.0, 0.0, 0.0, 0.0, 0x1.18e66431cf778p-1,
     0x1.9ae74eded3a09p-905, 0.0, 0.0, 0x1.6577b4be67e41p-103, 0.0,
     0x1.5209a0bc8669ep-609, 0x1.89cb94919ca35p-291, 0x1.6d4dbc1878b65p-109, 0.0,
     0x1.94a60c0892598p-884, 0x1.92e484b303ca2p-819, 0x1.315be55f742e7p-424,
     0x1.6714489fc5067p-565, 0.0, 0x1.4e697264cccbp-452, 0x1.03d8b019ab1a2p-198,
     0x1.709a99427e917p-893, 0.0, 0x1.06cd5a9b89f0ap-648, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3c0c912731facp-940, 0x1.fd5019f66e093p-867, 0.0,
     0x1.862cba7f21ba1p-451, 0x1.0801ac05ac193p-161, 0x1.1840664088b88p-906,
     0x1.3aeace2509a16p-116, 0x1.1a5c7a4482d7ap-676, 0.0, 0x1.ce155fdc85554p-463, 0.0,
     0x1.755f661bb6821p-846, 0x1.ac198f8549382p-572, 0x1.91852ecc66233p-556, 0.0, 0.0,
     0x1.e8c6fd86a91d3p-488, 0x1.a7903d4790346p-205, 0x1.dfe935f2a9e5dp-485, 0.0, 0.0,
     0.0, 0x1.19aa01165152dp-194, 0.0, 0x1.debf60adf2364p-117, 0x1.a495881f5afefp-361,
     0x1.af2fc63d5c0d5p-880, 0.0, 0x1.9c4408facdd65p-258, 0x1.8412657e11bc9p-32, 0.0,
     0.0, 0x1.7779a1cc611acp-242, 0x1.9e300561e74a9p-730, 0x1.1b5ff9a9bd08fp-715, 0.0,
     0.0, 0x1.90171b2d36b87p-806, 0x1.0942fe8e88201p-17, 0x1.0e765c4c09cb9p-44, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.21f8595ff5b0cp-970, 0x1.722478103de0cp-763, 0.0,
     0x1.1c1a1fe2a0018p-774, 0.0, 0x1.94c877d42abebp-20, 0x1.a61163c7f9f3dp-897,
     0x1.f31430691dac7p-814, 0.0, 0x1.e84f549073a86p-966, 0x1.2a29235b4c028p-460,
     0x1.9b768e633a64ap-835, 0.0, 0x1.5f6c262b08f56p-646, 0x1.4eee22bfce9f5p-958, 0.0,
     0.0, 0.0, 0x1.cf64f138c1f7cp-104, 0.0, 0.0, 0x1.750341a7830dep-278, 0.0,
     0x1.7cae5857e4458p-698, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77faa11f4ec8cp-21,
     0x1.510219b9e0f5p-924, 0.0, 0.0, 0.0, 0.0, 0x1.baab4c58bb87ap-821,
     0x1.f2dca4f299524p-299, 0x1.7867042897449p-442, 0x1.e55eb95e35dacp-204, 0.0, 0.0,
     0x1.591304127d46ap-953, 0x1.ae7e9a7dba532p-321, 0.0, 0x1.2391d6e789a23p-197,
     0x1.daf9471292f05p-293, 0.0, 0x1.4ee1edfb87cfdp-260, 0.0, 0x1.83af225475566p-366,
     0x1.5cd62266ac905p-406, 0.0, 0x1.b54fabafbc98fp-190, 0.0, 0.0,
     0x1.fbe3816c4c93fp-858, 0x1.5737eefc7c901p-118, 0.0, 0x1.804dafa648754p-38,
     0x1.3304d429e6f63p-355, 0.0, 0x1.89ad2030372e6p-813, 0.0, 0x1.75433f598983cp-108,
     0x1.4da16ad63ae25p-110, 0x1.0f3d61c14d42cp-732, 0.0, 0x1.38ab1d08fbbf4p-566,
     0x1.dd9ea7d15ed39p-863, 0x1.f8664551c01f9p-93, 0.0, 0.0, 0.0,
     0x1.0a54e1f601285p-276, 0x1.7de2db82a39f5p-69, 0x1.69e6abc571de1p-331,
     0x1.b676ac4fa3093p-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.817766790677fp-694,
     0.0, 0x1.65a523e65ed4cp-830, 0.0, 0x1.3753d5e52203dp-454, 0x1.cd67aa508ebaap-682,
     0x1.033a594068304p-726, 0x1.9f36df1020d13p-341, 0x1.bdbaa97e7a619p-374, 0.0, 0.0,
     0x1.6ba8a44a5aaafp-831, 0.0, 0x1.7f9b7b64eaf96p-214, 0x1.9864e682d4f1p-2, 0.0,
     0.0, 0x1.31c0f017abc35p-550, 0x1.90ce54ad99a0dp-866, 0.0, 0x1.e3fd14d6044d3p-106,
     0x1.f390f3acc3174p-691, 0.0, 0x1.7d2eab939430fp-396, 0.0, 0x1.6ba35379882aap-562,
     0.0, 0.0, 0x1.51427dc45b521p-938, 0x1.614accbf3a686p-521, 0x1.693f7138c9027p-861,
     0.0, 0.0, 0x1.4a248f93e9c63p-855, 0.0, 0.0, 0x1.d2493204f255dp-357,
     0x1.d35f22ac83f41p-394, 0.0, 0.0, 0.0, 0x1.a6832b0b89937p-1004,
     0x1.4220b250d7137p-158, 0x1.73e8406e5824p-488, 0x1.24354583bafbcp-225,
     0x1.fdcfd2f638bcfp-908, 0x1.27b2cc598f2cbp-678, 0x1.482a4353e5d87p-143,
     0x1.2920a81e1394bp-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4849c28850a8p-208, 0.0,
     0.0, 0.0, 0x1.a3a24d5b6ddfep-793, 0x1.fefc79180cc6ap-31, 0x1.cf2579f88df28p-424,
     0.0, 0.0, 0.0, 0x1.ada59a1b81353p-333, 0.0, 0x1.7337bb0f0610dp-38, 0.0, 0.0, 0.0,
     0x1.a6a88320b30fp-175, 0.0, 0x1.174c1a9a4733ep-107, 0x1.0ae4a880f696ep-94, 0.0,
     0.0, 0x1.363f5dd5da1a1p-619, 0.0, 0x1.7e5e06c1b772fp-73, 0.0, 0.0,
     0x1.5fc72f923a92bp-87, 0.0, 0.0, 0x1.a29f856e9dd74p-313, 0.0, 0.0, 0.0,
     0x1.38bc09dec82dp-491, 0.0, 0.0, 0.0, 0.0, 0x1.dd7d560655088p-489, 0.0,
     0x1.1230445449701p-71, 0x1.b134aa1369975p-397, 0x1.5c8423a08842cp-646, 0.0, 0.0,
     0.0, 0x1.5f12f9ed32ff4p-850, 0.0, 0x1.3bf4f73e0331p-431, 0x1.ef72e7fe980a1p-24,
     0x1.79ef0e9fae4a7p-744, 0.0, 0x1.d48f83e70e218p-393, 0x1.0d65d276116e8p-707, 0.0,
     0.0, 0x1.dd061522386c4p-680, 0.0, 0x1.bdaa5f4aa2bd1p-267, 0x1.2e36fb740146ap-803,
     0x1.cc88c017353d9p-468, 0.0, 0.0, 0.0, 0x1.a1150b062b268p-548, 0.0,
     0x1.8b7bc6a69ed96p-635, 0x1.c882d2d599053p-858, 0x1.3eb0f494b8f6ep-5, 0.0,
     0x1.fbccecf86cb47p-171, 0x1.a5f0230fdda54p-729, 0x1.4dde412b5bf9cp-720,
     0x1.9991a21d439c8p-852, 0.0, 0.0, 0.0, 0x1.02cca7e2585a7p-856,
     0x1.723d9478ece57p-368, 0x1.017c5c22be17ap-359, 0.0, 0x1.5b7a30945f4c1p-1007,
     0x1.fdaf784869dcdp-55, 0.0, 0.0, 0.0, 0x1.41438c58079adp-863, 0.0,
     0x1.104a460fc4b1cp-962, 0.0, 0.0, 0x1.952786fce1cdep-208, 0.0,
     0x1.0be9003530d1p-564, 0.0, 0x1.63bfeeaa767ddp-791, 0x1.feadcf2cdc969p-743, 0.0,
     0.0
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
            tmp1 = Sleef_sinpid1_u05purecfma(tmp0);
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
    printf("Sleef_sinpid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinpid1_u05purecfma bench acc %la\n", global_bench_acc);
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
