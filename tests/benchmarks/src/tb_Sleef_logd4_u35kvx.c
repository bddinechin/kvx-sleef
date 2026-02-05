/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd4_u35kvx.c --function Sleef_logd4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.f77c2a29111f9p-798, 0.0, 0x1.050741ae2e9f5p-81, 0x1.0f520654ffb4cp-92,
     0x1.ce49bf25fcc92p-895, 0x1.8e3893f606619p-520, 0x1.bb13d9daa3127p-192,
     0x1.7a26d4f3ec0d8p-900, 0.0, 0x1.6ebc953bd793ap-657, 0x1.2a84245bc98e2p-346,
     0x1.7682f855483d2p-277, 0x1.249f40a56fa27p-749, 0.0, 0.0, 0.0,
     0x1.a13ce29da6d61p-548, 0x1.fc1b0c98081a6p-573, 0x1.d8da833eb3eafp-1000, 0.0,
     0.0, 0x1.19e4c450945b5p-277, 0x1.4e322c1bf64c6p-845, 0.0, 0.0, 0.0,
     0x1.e55984860370ep-289, 0.0, 0x1.ec1907f0f42a5p-593, 0.0, 0x1.cc12e4df28feap-515,
     0x1.8598e738fad29p-877, 0x1.6e84a6b85e33dp-26, 0x1.52cbb2b90dfeap-682,
     0x1.b4535819ed8d3p-233, 0x1.e476d7a5247fap-650, 0.0, 0x1.0bf45012d9236p-402,
     0x1.947b8b72cb896p-675, 0x1.0a301cceb3d05p-1021, 0x1.873e775784f45p-437,
     0x1.3ef62699e2d68p-950, 0x1.4a7757879ce67p-686, 0.0, 0.0, 0x1.65d7c8b23e4f6p-909,
     0x1.570461975f184p-211, 0.0, 0x1.69c88f4824e35p-842, 0x1.59b5d04db6799p-940, 0.0,
     0.0, 0x1.f23535ae4a2e2p-438, 0x1.68d80665a2504p-328, 0.0, 0x1.897590e37057ep-343,
     0.0, 0.0, 0.0, 0x1.5bf75bbafbea1p-843, 0.0, 0.0, 0.0, 0x1.0836246f28c1dp-420,
     0x1.2ce775adb40dfp-656, 0.0, 0.0, 0.0, 0x1.50ec68979a607p-325, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.db61b69b830fap-185, 0x1.69bca54f8dd6ap-819, 0.0, 0.0,
     0x1.1863f77e80e7ep-245, 0.0, 0x1.4bc58a06623c6p-593, 0x1.4e491d7e88718p-621, 0.0,
     0x1.6708cc2d2bd11p-811, 0.0, 0x1.e5fa8c1e3a369p-62, 0.0, 0x1.ccc2f5a2f3a02p-290,
     0.0, 0.0, 0x1.4c25a4ee87fa2p-866, 0.0, 0x1.d2ce011664527p-496,
     0x1.00d84d8ffc9f8p-26, 0.0, 0x1.5ea81a7f717bbp-594, 0x1.3deff60411d7ep-586, 0.0,
     0.0, 0x1.c79a4fe518e7fp-130, 0.0, 0x1.6dca4cc69e7eep-713, 0x1.ca4d77b57def8p-775,
     0.0, 0x1.213b3445f1c8bp-353, 0x1.6f43b0fa994ffp-100, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9dc538ae8dacp-70, 0.0, 0x1.6d623a221ce98p-837, 0x1.ac97e0dda99b5p-794,
     0x1.0690aa61c6a52p-510, 0.0, 0x1.afef380de1cf5p-791, 0.0, 0.0, 0.0,
     0x1.e6bc5210acaa7p-302, 0x1.c499cc63560a4p-629, 0.0, 0x1.18ec45ff9a1f6p-376,
     0x1.af0525e35739dp-829, 0x1.555bc6adc3ep-145, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.674f010df61bap-132, 0.0, 0x1.e265329154f27p-442, 0x1.cac0f975ade09p-526,
     0x1.c3945087138f4p-999, 0.0, 0.0, 0x1.89734d85d7244p-945, 0x1.dea8ac45e0fap-525,
     0.0, 0.0, 0x1.7cfe957cfa045p-289, 0x1.78bfbe4e301b3p-628, 0.0, 0.0,
     0x1.c94ede4533105p-746, 0x1.32b6ee75e01d3p-640, 0.0, 0x1.56f367fb04fdcp-839,
     0x1.940594eb6386cp-29, 0x1.b36506718d268p-450, 0.0, 0x1.8350a7da6627ap-391,
     0x1.9ab129e3d6f6cp-286, 0x1.bb19b4bcfc873p-519, 0.0, 0.0, 0x1.ea6a7bc3cf4afp-15,
     0x1.f2fa96a4857bep-966, 0x1.8c6701c3632e5p-758, 0.0, 0x1.38a4fecac4b7bp-76, 0.0,
     0x1.38f76fe44af81p-180, 0x1.04d4f94cedf72p-8, 0.0, 0.0, 0.0, 0.0,
     0x1.a0158b65f2a56p-179, 0x1.7443aae6d90e3p-762, 0.0, 0.0, 0x1.02230eaeab03fp-242,
     0x1.118b1569301b8p-526, 0.0, 0x1.36ec1355210f4p-163, 0.0, 0x1.f70b362f64f4fp-143,
     0.0, 0x1.76a9c2ecaf4b5p-798, 0x1.1977d96e12482p-662, 0.0, 0x1.785ca23afdcd7p-646,
     0.0, 0x1.ec7ccc414b7b4p-997, 0x1.12784d1183e3bp-14, 0x1.906bd393224c1p-11, 0.0,
     0.0, 0x1.28ddf63560fe7p-22, 0x1.11b8afb50fcb2p-971, 0.0, 0.0,
     0x1.29810fa0e2606p-764, 0x1.54aaf6c51840fp-905, 0x1.cd7e59d25a222p-8,
     0x1.180508f899d6dp-43, 0x1.51014f5481bb2p-64, 0.0, 0.0, 0x1.345ec28120e03p-829,
     0.0, 0x1.80db5dfeae717p-410, 0x1.7e3977e331af9p-2, 0.0, 0x1.6bcc65fe38939p-210,
     0.0, 0.0, 0.0, 0.0, 0x1.bfed2d73bd4b1p-948, 0.0, 0.0, 0x1.a731c87deee52p-387,
     0x1.9398f65f9372ep-618, 0.0, 0.0, 0x1.1b3d9c6625b3p-610, 0x1.f43431412c214p-342,
     0.0, 0x1.5d67097fe539bp-400, 0x1.aa4b15c3d6529p-468, 0x1.705f0e0a680ccp-608,
     0x1.db40ec836124p-974, 0x1.cd9db6a0fd9dfp-583, 0x1.d3021e406ecccp-854,
     0x1.ff73967cd619ep-735, 0.0, 0.0, 0.0, 0.0, 0x1.e1407b4196d3dp-667, 0.0, 0.0,
     0x1.e04207cc2b931p-557, 0x1.c8b015bb68707p-775, 0.0, 0.0, 0x1.ca8e8973ddcf5p-320,
     0x1.b8fe05a191f09p-224, 0x1.2776666959831p-102, 0x1.75ac7a4caf526p-225,
     0x1.9fc724f81b762p-35, 0.0, 0.0, 0.0, 0x1.2f8f3cee67705p-166,
     0x1.26ca6027e1ce8p-737, 0x1.72048d0d4722ap-608, 0x1.158212afc15a1p-163,
     0x1.17d19135e6433p-171, 0.0, 0x1.e831e2d2a007bp-300, 0.0, 0.0,
     0x1.d7f8d49b72b12p-612, 0x1.53851ad075f6p-55, 0.0, 0x1.194ae4a48a6dep-35,
     0x1.4303b5f9df503p-921, 0.0, 0x1.3d13977257914p-789, 0.0, 0x1.1d0ac02ca68d8p-222,
     0x1.0122f3dfcb28ep-455, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0eb96b90b919fp-501,
     0.0, 0.0, 0x1.30605c65805ap-519, 0x1.cd0d68351a9fcp-165, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.deb0f1c2bfdafp-721, 0x1.f48a0dfec5b3dp-90, 0.0, 0.0,
     0x1.d714d7298c91ep-590, 0x1.0f086db107bffp-114, 0x1.a867cd201735ap-334, 0.0,
     0x1.2cf2fe5a5df6fp-491, 0x1.b37463e666a6fp-453, 0x1.9379b88a7ed9ap-346,
     0x1.07fef842ec33bp-504, 0x1.974dd3de1281fp-1004, 0x1.10596c121c61ep-645, 0.0,
     0.0, 0x1.767e6ee2808a1p-557, 0.0, 0x1.7d304f0fddd2bp-641, 0x1.19812e441ad25p-738,
     0x1.445f4afb3cbffp-56, 0x1.a9bd5e66fe773p-511, 0x1.35e5a8f8ec0f4p-211, 0.0, 0.0,
     0.0, 0x1.d3f340d89116bp-843, 0x1.15a7418bd7b81p-203, 0x1.5a8c77ba1127ep-320, 0.0,
     0.0, 0x1.7197852ba78c1p-303, 0x1.8ce2c655b44fbp-707, 0x1.b50ac1dcf4233p-914,
     0x1.2647606451b75p-736, 0.0, 0x1.55dceefc0f74ap-47, 0.0, 0x1.ef6c24438939cp-389,
     0x1.24582df9faccap-450, 0x1.f02fd9d6309a6p-606, 0.0, 0x1.ce92c4875d3a9p-560,
     0x1.8c3a7ca3c627bp-856, 0.0, 0.0, 0.0, 0x1.466433a2ada96p-604,
     0x1.7eca553f38d0dp-309, 0x1.072af40ddb367p-309, 0.0, 0x1.92351fe28feb6p-860,
     0x1.3e40ea224d081p-794, 0x1.5c0ca0fa1a193p-112, 0x1.ffd5eb9fa1998p-590,
     0x1.0404c6ae29728p-360, 0x1.0fa0a4f378985p-859, 0x1.c60e603669a6cp-606,
     0x1.0aee7ebacdfc7p-773, 0.0, 0x1.828b2da974c2cp-501, 0.0, 0.0, 0.0, 0.0,
     0x1.1bc077ba83ba8p-467, 0x1.880c36b92a2f5p-421, 0x1.126cbbc4515fcp-985, 0.0, 0.0,
     0.0, 0x1.e8a7a95526977p-554, 0.0, 0.0, 0.0, 0.0, 0x1.6b64df942d9d6p-121,
     0x1.f6c214e0b1c4fp-993, 0x1.c01d3a7db588bp-624, 0x1.5846d78248fc2p-1015,
     0x1.c54d953a0ceb2p-941, 0.0, 0x1.4c91016689fd1p-163, 0.0, 0x1.e0ee6c6047a3dp-422,
     0.0, 0.0, 0.0, 0x1.56412ba45507bp-223, 0x1.13e4b25259f58p-484, 0.0, 0.0, 0.0,
     0x1.0c72c724fe06bp-785, 0.0, 0x1.530ad3a6fbb91p-170, 0.0, 0.0,
     0x1.ae8c4c27de35ep-383, 0.0, 0x1.484dee775bc33p-355, 0x1.75da61497aa5p-425,
     0x1.f82f052ef0705p-944, 0x1.ad602162e4a38p-268, 0.0, 0x1.52707713d1ba5p-173,
     0x1.094bdefa865bbp-200, 0.0, 0.0, 0.0, 0x1.c21fcab1c7bcep-824,
     0x1.e1902bc68507ap-932, 0x1.1ac43a8eef805p-268, 0x1.c9c552f9790c8p-53, 0.0,
     0x1.803cedde80d5ep-653, 0.0, 0x1.e25cd9217fed9p-127, 0.0, 0x1.45ec1b02df421p-686,
     0.0, 0x1.911fa2047b522p-352, 0.0, 0.0, 0.0, 0x1.38078c48bf699p-331,
     0x1.68f24332a486dp-425, 0x1.99c011141aa82p-317, 0x1.9f1a171f943ep-207, 0.0, 0.0,
     0x1.ef583b43de442p-192, 0x1.a4114488f8396p-803, 0x1.36731eb2fa764p-397, 0.0, 0.0,
     0x1.1ec0cc169e4a3p-864, 0.0, 0x1.41d173003bfb8p-245, 0.0, 0.0, 0.0,
     0x1.2fd9667e6dfc8p-773, 0.0, 0x1.cad8e9cd1ef95p-133, 0x1.73de132a5b98ep-581,
     0x1.547f7b0595142p-3, 0x1.f26ef8045de9dp-8, 0.0, 0x1.d8a437944d1acp-687,
     0x1.7fa18a1c83ac5p-992, 0.0, 0.0, 0x1.142aebc2608f2p-164, 0.0, 0.0,
     0x1.0a1dbc5fe1e0cp-285, 0x1.b3d072486c713p-484, 0x1.7e730dfe5e6cdp-428, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a94fade0ead11p-299, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.620a3c184679fp-547, 0x1.496d5f26d2ad5p-977, 0.0, 0x1.c93098346ac88p-178, 0.0,
     0x1.55330b5f7382ap-589, 0.0, 0.0, 0.0, 0x1.78028f1fe7e79p-699, 0.0, 0.0, 0.0,
     0x1.a5df40c7262f7p-432, 0.0, 0.0, 0.0, 0x1.044221f9f907bp-446,
     0x1.32c3e48201a78p-215, 0.0, 0.0, 0.0, 0x1.d06f7145cfa32p-954, 0.0,
     0x1.46d9866dc4913p-121, 0x1.9c67517d4671dp-129, 0.0, 0.0, 0.0, 0.0,
     0x1.d23f82b1b66dp-972, 0.0, 0x1.41fb3dc9fc784p-553, 0.0, 0x1.04f5bb8512689p-963,
     0x1.78555a52dc665p-333, 0.0, 0x1.486fc1fc83d99p-109, 0x1.eb649a9150137p-70,
     0x1.02609ab1f2c35p-419, 0.0, 0.0, 0.0, 0.0, 0x1.d4027b50a1953p-765, 0.0, 0.0,
     0x1.058957f2b7d96p-761, 0.0, 0x1.f60aaaca01079p-767, 0.0, 0x1.f6b9c26723289p-437,
     0.0, 0.0, 0.0, 0.0, 0x1.a7e944e0de5eep-654, 0x1.77910671f867cp-848,
     0x1.d55b3445d5807p-349, 0.0, 0x1.9c58944a41fep-835, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0192273c2cae1p-671, 0.0, 0x1.de66adeb02a91p-808, 0x1.5635951773c66p-750,
     0x1.4f45fec39edb5p-382, 0x1.8545c47b99672p-923, 0x1.4278a8a0ad33bp-649, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8c6894ae6fa8bp-503, 0.0, 0x1.ee69a77c54185p-393, 0.0,
     0x1.2b50845b7eba2p-797, 0x1.9bedfe7f38147p-586, 0x1.8ee2881729a95p-714, 0.0, 0.0,
     0x1.c4a230204a247p-154, 0.0, 0x1.98a73d857f43cp-138, 0x1.60c672f7d13ep-887, 0.0,
     0x1.daa856d8b9efep-420, 0.0, 0x1.ff01c87f8b6a6p-1020, 0x1.4a70145bc41a8p-812,
     0.0, 0x1.5056dea96e03dp-250, 0x1.fa67a3f04a46ep-346, 0x1.e6d051966294p-1010, 0.0,
     0.0, 0.0, 0.0, 0x1.2f3a6eca6c026p-104, 0x1.6323c2c3c6abcp-707,
     0x1.0ae38e97f6cdfp-776, 0.0, 0.0, 0x1.2e6d095d7b903p-463, 0.0,
     0x1.0091a77cb8533p-15, 0.0, 0x1.98227aaa4d222p-112, 0x1.4ba4d883357f3p-290, 0.0,
     0x1.2553b24a81db5p-975, 0.0, 0.0, 0.0, 0x1.10b5ff383e018p-257,
     0x1.c5942b9f8a8b8p-301, 0.0, 0.0, 0.0, 0x1.c500c44ec1539p-205,
     0x1.cb19fc6aa9837p-357, 0.0, 0x1.1e6c530f10888p-322, 0x1.253441ebc6937p-495,
     0x1.2e82182ff8293p-550, 0x1.e5ec2cc85df6cp-871, 0x1.6ed04d6aed624p-142,
     0x1.9ae1f2a3e729ap-502, 0.0, 0.0, 0x1.ad6db9da724b5p-349, 0.0,
     0x1.82af4127794ep-227, 0x1.8a35177d78226p-797, 0.0, 0.0, 0.0,
     0x1.adffc9642e411p-880, 0.0, 0.0, 0.0, 0x1.d34f10db793dcp-646,
     0x1.899f924891af6p-251, 0.0, 0x1.806767a81d7e8p-362, 0.0, 0.0, 0.0,
     0x1.ff071c233ee92p-864, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d8c6888a04abp-33, 0x1.d8eba4db806a7p-75, 0.0, 0x1.bab0ae888c8f3p-798, 0.0,
     0x1.0d0f37c0e461ap-65, 0x1.4151030fe8054p-853, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72260a0b665ffp-21, 0x1.97f3d4b26961dp-198, 0.0, 0x1.42a4877dadb34p-1018, 0.0,
     0x1.07251d5cde4e5p-706, 0.0, 0x1.6c1520d736791p-513, 0.0, 0x1.b6ce3c0948434p-161,
     0x1.b7a3f50085615p-589, 0.0, 0x1.e9bc83e0a9e06p-70, 0.0, 0x1.362a973eeed5bp-405,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f1086c6f2375p-990, 0x1.e0c5faad98d8cp-43, 0.0,
     0.0, 0.0, 0x1.b7bc8deb73c9bp-751, 0.0, 0x1.95a986b504a77p-926, 0.0,
     0x1.c2d2e6ef270bdp-981, 0x1.f4b811c1e3ed3p-67, 0x1.07f59c89b8e2cp-729, 0.0, 0.0,
     0.0, 0x1.1ec44bb0b2c48p-545, 0.0, 0x1.fb6ab08f5d93ep-820, 0x1.13fc1b0be15dep-498,
     0.0, 0.0, 0x1.ab7d9d1382031p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.39e859c18b9ebp-432, 0.0, 0x1.407e06b7c5d85p-122, 0.0, 0.0, 0.0,
     0x1.ef57f0f2d5154p-1019, 0.0, 0.0, 0.0, 0.0, 0x1.3db2c7395d1f1p-232, 0.0, 0.0,
     0.0, 0x1.33bcc96838d32p-455, 0x1.965a4482902b8p-443, 0.0, 0x1.0f6b3acdadddfp-21,
     0.0, 0x1.b3285f2bf9075p-316, 0x1.e5371d0aef883p-83, 0x1.896aefc9d28e7p-570,
     0x1.c3d872f29bbc6p-513, 0x1.2aeed5fed5275p-934, 0x1.3bb60530a44ebp-697,
     0x1.e2c03798b7d57p-399, 0.0, 0.0, 0x1.7238447c609aep-179, 0x1.e5a76eccc02f4p-794,
     0x1.6497d2383afafp-531, 0x1.23d910a2b0604p-579, 0.0, 0.0, 0.0,
     0x1.8dca82a5425a2p-501, 0x1.55b84ecb8b701p-172, 0.0, 0.0, 0.0,
     0x1.5538f9daf3a0bp-602, 0.0, 0.0, 0x1.4c7d657473ee4p-872, 0x1.39d10d50a8fc3p-489,
     0.0, 0x1.54b607e5a34bdp-789, 0x1.83c0bbeff643fp-220, 0x1.a77bb3feac80dp-762, 0.0,
     0.0, 0x1.437916e85266ap-837, 0x1.0ef2a61e934f6p-67, 0.0, 0.0, 0.0, 0.0,
     0x1.68e222da6e533p-563, 0x1.e3425a13bd864p-714, 0x1.036f9d9f05da7p-810,
     0x1.dcb11d79e75b2p-716, 0x1.25a0159c0a65cp-134, 0x1.3d15e8c5c4fc9p-279,
     0x1.6d7ef6cb8c334p-58, 0.0, 0x1.d42e94c5b6d2dp-136, 0x1.ac2a3fe96ddbfp-228,
     0x1.ad29463a3f5bcp-230, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e1b7ccb4043fp-886, 0.0,
     0.0, 0.0, 0x1.8074634eba04bp-522, 0x1.277b064eb1e12p-141, 0x1.add8be8b464b9p-662,
     0x1.366e22abc7e9dp-157, 0.0, 0x1.ce8b186980a43p-251, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d03ba25541bb5p-531, 0.0, 0x1.6cbeb4f7f473cp-515, 0x1.e821be9c7aad5p-1013,
     0x1.b801dc660332bp-997, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40f989a442f2dp-664,
     0.0, 0x1.2aa4ee2337b85p-774, 0x1.4ce25fd376dd5p-1002, 0.0,
     0x1.3bfe0a3e9a321p-136, 0.0, 0.0, 0x1.43badde1b10bap-387, 0x1.415b658ab2f2ap-67,
     0.0, 0.0, 0.0, 0.0, 0x1.a95539ee8478cp-170, 0.0, 0x1.83b7b3cfb6f9dp-964, 0.0,
     0x1.caa7cfd82ed71p-840, 0x1.3d6e90644d2fap-114, 0.0, 0.0, 0.0,
     0x1.e21468f058659p-221, 0x1.44968176ae21ep-666, 0.0, 0.0, 0.0, 0.0,
     0x1.328fdf2d0d061p-170, 0.0, 0.0, 0.0, 0x1.0af232e862e96p-560, 0.0,
     0x1.c85f55e1f65d1p-872, 0x1.397ce486d9616p-513, 0x1.af2e7e27a6924p-292,
     0x1.bd6f602c913aep-610, 0x1.39b832355b9e7p-338, 0x1.26eaaf2534665p-970, 0.0, 0.0,
     0.0, 0x1.b7fa657ee4c5ap-716, 0x1.46e72637ee4bfp-717, 0x1.878b408a82667p-258,
     0x1.520e16815f64ap-622, 0x1.1c210feeea2d8p-246, 0.0, 0.0, 0x1.9bb1d9752e2d2p-735,
     0x1.fa0ea393bb5edp-512, 0.0, 0x1.b0ef6298f242dp-625, 0x1.f1274e808747bp-384, 0.0,
     0.0, 0x1.fc7f2ac27f47ep-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e06a498e5d5bp-728, 0.0, 0.0, 0x1.a8f5ba32dd6f4p-381, 0.0, 0.0, 0.0,
     0x1.75c404fb484edp-192, 0x1.8097afd8cc77ap-22, 0.0, 0x1.cd1589415b849p-970, 0.0,
     0x1.4a31993b55e18p-293, 0x1.d3f775b5d111cp-435, 0.0, 0x1.73d38899dbf1ep-272, 0.0,
     0x1.b83a198fc81e9p-818, 0.0, 0x1.9da8e74583f4cp-868, 0.0, 0.0, 0.0,
     0x1.6b26996def134p-82, 0x1.58efb73e7bf64p-12, 0.0, 0.0, 0x1.63228a0957fe9p-852,
     0.0, 0.0, 0.0, 0x1.980b798b00b16p-447, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bd23092d434fp-123, 0x1.bc463f651d892p-80, 0x1.5685c6d8e9168p-401, 0.0,
     0x1.1428a34a62da8p-971, 0x1.3a4b2179907cep-421, 0.0, 0.0, 0.0,
     0x1.1612776bb1b0ap-354, 0.0, 0.0, 0x1.96055b3dd4e5cp-322, 0x1.c5512bfb3e186p-405,
     0.0, 0.0, 0x1.bc56165a356fdp-280, 0.0, 0x1.d864f12786147p-970, 0.0,
     0x1.40813c96a9313p-534, 0x1.2d57c81200614p-40, 0.0, 0x1.f5f38bbf33584p-693, 0.0,
     0x1.01e8cedfa1077p-500, 0.0, 0.0, 0.0, 0x1.f01cfcb7c608fp-361, 0.0, 0.0,
     0x1.bc20b0bf4545ep-812, 0.0, 0x1.dc6d5638e273ap-120, 0x1.43192abea88ffp-916, 0.0,
     0x1.ba402e4a3e8f1p-132, 0x1.c0cc8e286e77cp-735, 0x1.6415969c20782p-401, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e9a569755fba4p-666, 0.0, 0x1.c2d3e0f7a788fp-462,
     0x1.8c9203e88fe9p-197, 0.0, 0x1.ff9e41974a617p-380, 0.0, 0x1.066f5d4ccbb8fp-712,
     0.0, 0x1.6f807c9236623p-401, 0.0, 0x1.e938cab078681p-290, 0x1.bd83c88a37025p-468,
     0x1.fb5f7c32dbfafp-84, 0.0, 0x1.182fd7e660a66p-84, 0.0, 0.0,
     0x1.619195e664ceap-342, 0.0, 0.0, 0x1.5e5a468fe227bp-163, 0x1.4403a602858ep-329,
     0.0, 0.0, 0.0, 0.0, 0x1.7d7828d91f054p-428, 0.0, 0.0, 0.0, 0x1.1a8ac00d04e43p-21,
     0x1.8765184efc8b1p-456, 0.0, 0.0, 0x1.d834912af8865p-855, 0.0, 0.0, 0.0, 0.0,
     0x1.3808399a0317p-501, 0x1.42d9b4b1466bdp-939, 0.0, 0x1.b6d065591cf49p-16,
     0x1.874cc6c449dfep-638, 0x1.c291244765043p-955, 0x1.da58d45455b32p-172, 0.0,
     0x1.0b94545c6dd03p-441, 0x1.4ea06cf785541p-828, 0x1.7fc11930b092p-469, 0.0,
     0x1.8d8d99c48b08dp-244, 0x1.4db79600122cep-982, 0.0, 0x1.b321f6d7f5f6bp-52, 0.0,
     0.0, 0.0, 0.0, 0x1.ebdac67ac36b2p-427, 0.0, 0.0, 0.0, 0x1.b49d8b1397d2ap-18, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d1d78a7196bdbp-602
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
            tmp1 = Sleef_logd4_u35kvx(tmp0);
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
    printf("Sleef_logd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
