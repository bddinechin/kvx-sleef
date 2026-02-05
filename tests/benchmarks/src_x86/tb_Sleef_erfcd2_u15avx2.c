/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcd2_u15avx2128.c --function Sleef_erfcd2_u15avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.e69535bf010c5p-504, 0x1.e19dc2ee15707p-262, 0.0, 0x1.9059292d4ea78p-42, 0.0,
     0.0, 0.0, 0x1.91533981eab71p-393, 0x1.594ba90b41622p-524, 0x1.a01a11a947327p-292,
     0.0, 0x1.9e6da7a5ce26fp-770, 0x1.34121d1fad3e8p-113, 0.0, 0x1.94a3aedbafa1fp-581,
     0x1.9e2dd9d5cfc34p-125, 0x1.a8702a86a5a13p-392, 0x1.ee55268477ffep-662,
     0x1.5592822487cd6p-929, 0x1.21a43a983dbbep-999, 0.0, 0.0, 0x1.d4599e1756155p-826,
     0x1.8172b568254d3p-213, 0.0, 0x1.0fc58c65510bep-515, 0.0, 0.0,
     0x1.1efcbf266e315p-181, 0.0, 0.0, 0x1.de5b04884d533p-257, 0x1.2c1d57c3439b3p-813,
     0.0, 0.0, 0.0, 0x1.e7e617b5f6e84p-109, 0.0, 0.0, 0.0, 0x1.4c7d8d2b9374bp-468,
     0.0, 0.0, 0x1.4694cad28dd68p-340, 0x1.8abcc96625233p-757, 0.0, 0.0, 0.0,
     0x1.a07ba481195e9p-54, 0.0, 0x1.fa0bfb30b3b4cp-75, 0x1.5a2fc89d206efp-3, 0.0,
     0.0, 0x1.7627e134a0a4cp-54, 0.0, 0.0, 0x1.3a2bc69544004p-6,
     0x1.3e6e983b4952ep-61, 0.0, 0x1.d6034a077f6e6p-696, 0.0, 0x1.0d7563be1a572p-366,
     0x1.0c01319827998p-795, 0x1.e06ca932063fcp-726, 0x1.9ed9a254bd13bp-500, 0.0,
     0x1p0, 0x1.1ca07f1a71119p-67, 0x1.64a53c75a1095p-795, 0x1.d1d656938333dp-33,
     0x1.e8b61adcbd4eep-316, 0.0, 0x1.8be3da70f3a39p-188, 0.0, 0.0,
     0x1.6d74ea061962bp-384, 0x1.b3213fa66ba47p-581, 0x1.77db626e6bf31p-255,
     0x1.09417507a8971p-416, 0.0, 0.0, 0x1.549f701f999d1p-705, 0x1.de9a58acecf02p-796,
     0.0, 0x1.9be2b14314815p-17, 0.0, 0.0, 0x1.5b64edcc7f193p-797, 0.0, 0.0,
     0x1.69df2e4805762p-513, 0x1.fc08a64c9d50bp-628, 0.0, 0.0, 0x1.7e822428998efp-653,
     0x1.e24e496af5d79p-416, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.03a0b65900cf5p-288, 0.0, 0x1.affea0c74c231p-962, 0.0, 0x1.a4ea58be79f59p-281,
     0x1.76d4ced4773d2p-224, 0x1.c2bb2b4275487p-857, 0.0, 0.0, 0.0, 0.0,
     0x1.6be99342b80a6p-218, 0x1.2e271cd9e52a4p-176, 0.0, 0x1.3ac004f03bf23p-860, 0.0,
     0x1.78e3d83b490dp-458, 0x1.104fa8b0dad6ap-756, 0x1.6dee4f3205d5p-947, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a1fd88444e9d3p-725, 0.0, 0.0, 0x1.32d9ea90cb84ep-278,
     0.0, 0x1.86a7150add069p-995, 0x1.08d1a67d06478p-447, 0x1.8f4360a8138f6p-295, 0.0,
     0.0, 0x1.0d77abde185b8p-244, 0x1.7c46703a35162p-422, 0.0, 0.0,
     0x1.44137bbf34831p-792, 0x1.e90adc9dec372p-136, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d613a953e5c3p-955, 0.0, 0.0, 0.0, 0x1.878c38e984f09p-401, 0.0,
     0x1.3014be1f6f1a2p-31, 0x1.18847bcadbf76p-555, 0x1.2e198e4a5fc82p-303,
     0x1.5109c9bcc8f86p-288, 0x1.b4a03171fd729p-894, 0x1.2b947d7d3cdcp-27, 0.0, 0.0,
     0x1.23e6041cbe6b4p-399, 0.0, 0.0, 0.0, 0x1.480bc196b82cbp-344, 0.0, 0.0,
     0x1.ea8ae0fa941b3p-676, 0.0, 0.0, 0.0, 0x1.a3766426e4fbep-83, 0.0,
     0x1.f8f051132fd53p-781, 0x1.07f39d30ef3bbp-924, 0.0, 0.0, 0x1.b877f2c4213b7p-446,
     0x1.94f3dfb3ee775p-276, 0x1.3faef20b19bccp-326, 0.0, 0.0, 0.0,
     0x1.f56e53cf682f5p-315, 0x1.36f4ef7622eb2p-272, 0x1.a32760bdc6bfap-234,
     0x1.5d49cd1adf904p-207, 0.0, 0x1.2add2620b59eap-225, 0.0, 0x1.ff11c1b6ad85ep-382,
     0x1.6d4ab58ccad41p-963, 0x1.fc5c3302957eap-49, 0x1.5a9a81104c41ap-256, 0.0, 0.0,
     0x1.1abb075855f1dp-193, 0x1.7d9eb61a9e3ap-808, 0x1.2a42be4e67a6bp-322, 0.0,
     0x1.793a48255af4dp-85, 0.0, 0.0, 0.0, 0x1.91c8daa6462e7p-762, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cc85dffaeb203p-831, 0.0, 0.0, 0x1.fc96677df9774p-34,
     0x1.891e27f15d136p-498, 0x1.562e413f70808p-894, 0x1.4b6b21b45c139p-760,
     0x1.efeb9d752de6bp-423, 0x1.229469a3598a6p-365, 0x1.854417a49ab86p-349, 0.0, 0.0,
     0.0, 0x1.9f0fafd4b15cfp-653, 0.0, 0.0, 0x1.3f5685a3722fcp-146,
     0x1.07e2a525fc889p-633, 0x1.b194db0c4331cp-808, 0x1.86732791dadep-92, 0.0, 0.0,
     0x1.9a4a32d5ae051p-269, 0x1.9042994840914p-759, 0x1.cbd3a922d53bep-478, 0.0,
     0x1.a947dcaf8c418p-377, 0.0, 0x1.ff693ca1f8c75p-849, 0x1.d3bd319af2a2ap-24,
     0x1.ebb3f47bd8e56p-27, 0.0, 0.0, 0x1.61834c912ec6fp-137, 0x1.0d4b6150c998p-140,
     0.0, 0.0, 0.0, 0.0, 0x1.591ac620d6fb9p-291, 0.0, 0x1.900a920dc3e0bp-554, 0.0,
     0x1.80db49102fafdp-864, 0x1.4711cf983c0ebp-496, 0x1.430750ba2c75cp-590,
     0x1.225d5c8e2a12cp-416, 0.0, 0x1.c0e1ee569c9c2p-151, 0x1.7128f0d9aee03p-816, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a6027fd8e15p-726, 0.0, 0.0, 0x1.2f1096693ba09p-727,
     0.0, 0x1.0213657456f14p-622, 0x1.dae050282d917p-132, 0.0, 0x1.167d9b1256bfbp-239,
     0.0, 0x1.1109b84135934p-660, 0x1.ffc231428c9e6p-504, 0.0, 0.0, 0.0,
     0x1.b48c6bdfdcd2p-322, 0x1.e41e65b610e57p-833, 0x1.909e30a8a5416p-482, 0.0,
     0x1.a3cf8fda5c89dp-725, 0x1.e886251e509a8p-971, 0x1.f9b6e78b006d4p-546,
     0x1.5ad5589ee2d79p-817, 0.0, 0.0, 0.0, 0x1.3c00e9cc589b4p-399,
     0x1.eb9d18c8ad17p-34, 0.0, 0x1.5c92d8fb4a373p-121, 0x1.e497e093f184fp-238, 0.0,
     0x1.7c96e71b39ef1p-202, 0x1.20946ada07a46p-883, 0x1.c30c6cc21160dp-353,
     0x1.81d12e4db95b7p-189, 0x1.f3baefa89f93ep-500, 0.0, 0.0, 0x1.ad69381fff42dp-51,
     0x1.e2652fc597257p-568, 0x1.6d270a7acd092p-591, 0.0, 0x1.4f6e515c42f41p-685, 0.0,
     0x1.797adbe1e0ab3p-850, 0x1.2901cc8ace44p-190, 0x1.8457b5b7f7b53p-566,
     0x1.10a7dcc9e2498p-410, 0x1.544d189cdabfdp-210, 0.0, 0.0, 0x1.62f7d633971d9p-244,
     0x1.4f16bd4472a26p-66, 0x1.830632d641e26p-462, 0.0, 0.0, 0x1.cc32b69b6056ap-799,
     0.0, 0x1.73018438d4332p-963, 0x1.f25cce76969ddp-937, 0.0, 0x1.86474a619a631p-628,
     0x1.2ad9eda0d6cd1p-892, 0.0, 0x1.4337fccfe7289p-418, 0.0, 0.0,
     0x1.9f345ffbe68a7p-428, 0.0, 0x1.e87d225f85dep-504, 0.0, 0.0, 0.0, 0.0,
     0x1.fa6a9824f97bdp-683, 0.0, 0.0, 0x1.e948c5dfd0ecfp-236, 0.0,
     0x1.efe6fe3132f55p-494, 0x1.f26e65f81676ep-268, 0x1.ac03af80a046fp-780,
     0x1.4a227ae4a7d36p-141, 0.0, 0x1.4a39b3e29c227p-930, 0x1.819c65a6d2bd5p-125, 0.0,
     0x1.a3e9d802e82e8p-855, 0.0, 0x1.48409b2be9c31p-451, 0x1.9c5b267fe7885p-349,
     0x1.88f6543d4353p-546, 0x1.03631271a6f2ap-1020, 0x1.9ad912422ad69p-765, 0.0,
     0x1.ba0f87e3654d7p-345, 0.0, 0.0, 0x1.98a186ed084f1p-619, 0x1.95094ec0247b1p-26,
     0.0, 0.0, 0.0, 0.0, 0x1.ea665f067068cp-537, 0.0, 0x1.24c1382a3f33p-239, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7544b4b21ac3bp-188, 0x1.997bce589ab6ap-462, 0.0,
     0x1.e7905a2bb70c2p-1014, 0.0, 0x1.3e00dd0313d31p-653, 0x1.6fc42407a9074p-266,
     0x1.12b3ef9f94c4cp-335, 0x1.dca245d39f754p-958, 0.0, 0.0, 0.0,
     0x1.9abf46d791644p-297, 0x1.5ee29f39bc03cp-249, 0x1.ceaefe6bc2cf5p-679,
     0x1.93926e5a2e027p-112, 0.0, 0x1.9f9192f235c75p-82, 0.0, 0.0,
     0x1.241a8248dc4b5p-42, 0.0, 0x1.6904a30e38579p-837, 0x1.1d8fdaa161aeep-476,
     0x1.8593e4bed6198p-377, 0x1.c202c2a95a1efp-447, 0.0, 0.0, 0x1.17a2c333c5e81p-979,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6373e69e03962p-610, 0.0, 0.0,
     0x1.74371fd58631bp-563, 0.0, 0x1.174510d6fad6cp-322, 0x1.1724a8a97ca9fp-476, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b920444a5240bp-277, 0.0, 0.0, 0.0, 0.0,
     0x1.3a80ddd0e3fb9p-403, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e47f395fffb7p-584,
     0.0, 0x1.0fe1e48fc7bf7p-760, 0.0, 0.0, 0.0, 0x1.bc6b6558bf6eap-473, 0.0, 0x1p0,
     0x1.e1d502779abbbp-903, 0.0, 0x1.2b1086a5a9af8p-89, 0x1.e575f8c6d0985p-518,
     0x1.3996311e01335p-838, 0x1.0ad53eaf27e27p-497, 0x1.4bef5540b3ae6p-62,
     0x1.84d6b410559dp-552, 0.0, 0x1.f6c107b151bdcp-481, 0x1.5d54896d905f3p-183, 0.0,
     0x1.775f680e927d4p-593, 0x1.190be270fab5fp-259, 0.0, 0x1.9b913adac8d04p-493, 0.0,
     0x1.94d8b08908b4fp-631, 0.0, 0x1.bcb538254b09bp-888, 0.0, 0.0,
     0x1.396e998286ffep-460, 0x1.d327497a3a491p-24, 0.0, 0.0, 0.0, 0.0,
     0x1.ea0587273290bp-797, 0x1.745419baaf61fp-389, 0x1.a6a36e79d6673p-297,
     0x1.746286e578cbcp-625, 0x1.a41923e2bd493p-400, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c93f077b14ffcp-112, 0x1.058639e7f876cp-697, 0x1.93b889feebd49p-737,
     0x1.c19480a6b6eap-585, 0.0, 0x1.75055dd0a94f7p-290, 0.0, 0x1.cfc34dbb713e9p-427,
     0.0, 0x1.7f8210b958219p-399, 0x1.9385a76ce820cp-871, 0.0, 0.0,
     0x1.7c5c6157d7aefp-42, 0x1.f213ca01c6e6cp-448, 0x1.3bbfdaa1dc8ep-239, 0.0, 0.0,
     0x1.92c602142f06fp-778, 0x1.7ad9f835d5b54p-28, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e2ab3c0f5ed3ep-227, 0.0, 0x1.1827332079a4bp-44, 0.0, 0x1.377b56e5920bdp-180,
     0.0, 0.0, 0x1.30f83497bb42cp-67, 0x1.ecd0f08073ac9p-281, 0.0, 0.0,
     0x1.cd3b608186a88p-86, 0x1.b4c2004ff357ep-662, 0x1.4f6203f707359p-138,
     0x1.bdc08d1b39c9dp-566, 0.0, 0x1.a48325031ba3p-777, 0x1.d00b0c416a39dp-768,
     0x1.2568825852bbcp-474, 0x1.32f5a7b14665dp-188, 0x1.007f3f07bd3c1p-86,
     0x1.02c38ad2b8fep-801, 0.0, 0.0, 0x1.883bd19f80b56p-134, 0.0,
     0x1.9d8bf4253c53ep-517, 0x1.40a884e57e475p-352, 0x1.1126100a4780cp-119, 0.0,
     0x1.2c973a387be8fp-751, 0.0, 0x1.c0cffd20eca67p-137, 0x1.1ad14b6b4d912p-408, 0.0,
     0.0, 0x1.59fb7ee8354edp-1007, 0x1.955167342f15ap-273, 0x1.3b9d7cc6daaefp-946,
     0.0, 0x1.8938e708f880bp-240, 0.0, 0.0, 0x1.7af109548bd4ap-163, 0.0,
     0x1.877f5d5f4413dp-867, 0.0, 0.0, 0x1.427ec7b6dc20bp-654, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c16568a01c816p-499, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7cf765ae3ba9p-567,
     0x1.fbe8ec9e88373p-301, 0.0, 0.0, 0.0, 0.0, 0x1.0f7af2f786ba4p-719, 0.0,
     0x1.10314d4ade678p-957, 0x1.2a5907f0a93a1p-400, 0.0, 0x1.64b0777ea13ep-947,
     0x1.d71f8f79db82fp-412, 0.0, 0.0, 0x1.8d3c6d23061adp-48, 0.0,
     0x1.ac09c9d359caep-903, 0x1.0c928fed76a2dp-939, 0.0, 0x1.b76a84f269644p-491, 0.0,
     0x1.3d9d3b24fa05cp-631, 0.0, 0x1.a4ffa4916b213p-552, 0x1.58e22dd906acfp-556, 0.0,
     0.0, 0x1.b7d0ede491aacp-140, 0.0, 0x1.00df5df4fd00ap-788, 0x1.8d6b679a7631dp-706,
     0.0, 0.0, 0x1.70b2fb219bb7cp-121, 0.0, 0.0, 0x1.9b155a186a1fp-730, 0.0,
     0x1.4d4e17440bd29p-21, 0.0, 0x1.84c4958587315p-154, 0x1.15536ffb15311p-463, 0.0,
     0.0, 0.0, 0.0, 0x1.c72f7651e4c68p-836, 0.0, 0x1.08152f1ba049dp-41,
     0x1.7d0c04164b215p-27, 0.0, 0x1.d02bd3327d30ap-379, 0x1.68c99752fae8ap-329,
     0x1.d9b6fedd0af9p-733, 0x1.4f59a0436d632p-84, 0.0, 0.0, 0x1.78038d508ea6cp-362,
     0.0, 0x1.f834fd24c4afap-121, 0x1.6c2f15f16f96dp-254, 0.0, 0x1.e7e54fb8deee6p-264,
     0x1.eb4fac4657f58p-970, 0x1.8000bafd01f5ap-427, 0.0, 0.0, 0.0,
     0x1.e0489061a55ddp-12, 0x1.5a829464bc6fp-805, 0x1.1ffd4b2070a77p-217,
     0x1.fc4c885338a2ep-342, 0x1.b6395a4a81f4bp-53, 0x1.93bfdfffba70cp-323, 0.0,
     0x1.f838e46038babp-299, 0.0, 0x1.d05242abcb9b1p-881, 0.0, 0.0, 0.0,
     0x1.eb587ad088da9p-209, 0x1.14e163b105069p-730, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1fcdbf1ed4c89p-641, 0.0, 0x1.18bf42089e349p-338, 0x1.939cfb69a1348p-922,
     0x1.0c0a7cb9d88bp-530, 0.0, 0x1.fe16ef817056ep-105, 0.0, 0x1.83b8f64992facp-520,
     0x1.0358a1c9cf9d1p-323, 0.0, 0x1.8906c9cda3c1fp-967, 0x1.d1bf752545d92p-23,
     0x1.9d0e11782ae69p-424, 0.0, 0x1.6c995a7ed9097p-523, 0.0, 0x1.9b2e00e64f85ep-219,
     0x1.223dcbbec9febp-239, 0x1.cfcabf4337555p-595, 0.0, 0.0, 0.0,
     0x1.cb4ffb3bc70afp-137, 0x1p0, 0.0, 0x1.0bd9aa4b531d4p-540,
     0x1.e3f26a1269553p-411, 0.0, 0.0, 0x1.229c0c1f218bdp-997, 0x1.76208ee89bf4ep-825,
     0x1.a5c4c44ec968ap-70, 0x1.97e441c7d1cd8p-551, 0x1.19ba33dd8d85ap-814,
     0x1.e2620175854cdp-954, 0.0, 0x1.474644e1bb9e3p-503, 0.0, 0.0,
     0x1.d7777dbad6befp-98, 0x1.606b78c917373p-935, 0x1.f778af32db248p-144, 0.0, 0.0,
     0x1.8cd284367af2fp-511, 0.0, 0x1.a8b6ad88d88b7p-711, 0x1.d953bd2060257p-378,
     0x1.270b584ab7cd8p-153, 0.0, 0x1.3221f33d8cd04p-1021, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.5c4e36e1e11c1p-259, 0.0, 0x1.43209eaf373f2p-667, 0x1.f8eabc730b96bp-1008,
     0x1.c53052f7408abp-91, 0.0, 0.0, 0x1.27213129864b3p-228, 0x1.388d9ed30e67dp-349,
     0x1.b346c623e4c81p-784, 0x1.d4da4b17478b7p-173, 0.0, 0.0, 0x1.20caa8c1bb6b1p-847,
     0x1.15adbdad4d0fcp-524, 0x1.b8b744bde08fep-318, 0.0, 0.0, 0x1.6059922b5e4c6p-550,
     0.0, 0.0, 0.0, 0.0, 0x1.b03079aa65493p-582, 0x1.0eaed3799d449p-629, 0.0, 0.0,
     0.0, 0.0, 0x1.272208debe6f2p-701, 0x1.7ffa543b00585p-438, 0x1.9ca287cc56097p-580,
     0x1.d86684ea5fbd8p-617, 0.0, 0.0, 0.0, 0x1.5a531eb636d26p-643, 0.0, 0.0, 0.0,
     0x1.ba3e1773daa95p-284, 0.0, 0.0, 0x1.9010c41a752ep-320, 0.0, 0.0,
     0x1.103e0cf3ff1bfp-461, 0x1.32f34a3157e7ep-192, 0x1.b9c53e52acaedp-281,
     0x1.cde9b31e56bcdp-244, 0x1.c7949a59e535p-566, 0x1.a4398530a4a31p-705,
     0x1.9b78dedecbf3ap-82, 0x1.2c06465b0204ep-277, 0.0, 0.0, 0x1.c071b6657c8bap-78,
     0x1.ebf7575aea58p-758, 0.0, 0.0, 0x1.f8afdf2c0d4b3p-408, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.947af61047352p-10, 0.0, 0.0, 0.0, 0.0, 0x1.3ce4ec9d1e26dp-322, 0.0, 0.0,
     0x1.0ccecd304dec8p-128, 0.0, 0.0, 0x1.8141a32185318p-757, 0x1.e78a2c8f6b5d7p-558,
     0.0, 0.0, 0.0, 0x1.8afc21ea6070dp-528, 0.0, 0x1.e5416b48274bp-809, 0.0,
     0x1.5bee1522e3e16p-649, 0.0, 0x1.9fd0c03b30462p-812, 0.0, 0x1.46c2af5737cep-11,
     0.0, 0.0, 0x1.7e2447f256ed7p-571, 0x1.02e586cd84341p-447, 0x1.59e926c1d2673p-97,
     0x1.33543eb40d9c4p-150, 0x1.baea39d797df9p-588, 0x1.31d2ae6c56553p-1009, 0.0,
     0x1.ea0220011278ap-156, 0.0, 0.0, 0.0, 0x1.ec51da6f3928bp-323,
     0x1.ad9232e41c86dp-874, 0.0, 0.0, 0x1.2dadf59b59792p-242, 0x1.579eb56d01beep-9,
     0x1.4d24d5e3ab46ap-298, 0x1.b127056ae1db2p-212, 0.0, 0x1.de44959fff67ap-224,
     0x1.ca2688dad9cb5p-550, 0x1.e688fbcf8c6cap-437, 0.0, 0.0, 0.0,
     0x1.90d0409de17a8p-548, 0x1.560841afaa97ap-397, 0x1.26bfd7053b1bdp-503, 0.0,
     0x1.f11b08741973fp-196, 0x1.d0f664978aa79p-897, 0x1.1e78547291991p-604, 0.0, 0.0,
     0x1.a2b679136ec3ep-896, 0x1.d2072fe79543bp-497, 0.0, 0x1.b6e89590fa206p-886, 0.0,
     0.0, 0x1.eabf43e48f3e2p-670, 0.0, 0.0, 0x1.9c4931c6a0013p-953, 0.0, 0.0,
     0x1.73e0ac9bbea8fp-8, 0.0, 0x1.d974d875d95b9p-826, 0x1.b85eb32c20f92p-435, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.55c93195c1456p-689, 0x1.af3a2f0175fb8p-648,
     0x1.e9bc1cf8c55c2p-1002, 0.0, 0x1.132b80afb638p-898, 0x1.347609bd43d52p-842, 0.0,
     0.0, 0.0, 0.0, 0x1.5c88d5b9ecf8ep-195, 0.0, 0x1.bf8640cb3ff86p-92, 0.0,
     0x1.7d67066479daap-252, 0.0, 0x1.1d97dd3fa342p-541, 0x1.ec282fcbbb4f4p-216,
     0x1.3b787dbadb084p-74, 0.0, 0x1.5bd7be3ac4c7fp-444, 0.0, 0x1.6f595c09fe0fp-179,
     0x1.9034a52bbe465p-898, 0.0, 0.0, 0x1.9c6a8587f62adp-975, 0.0, 0.0, 0.0,
     0x1.de331bc975187p-906, 0.0, 0.0, 0x1.c243edb409755p-177, 0x1.3d053b5cfe803p-130,
     0.0, 0.0, 0x1.d4cf65d369598p-120, 0.0, 0x1.39d20b4afb209p-198,
     0x1.27a7829f35932p-838, 0.0, 0.0, 0.0, 0x1.c428acf58710ep-957,
     0x1.a5f7a74a7287p-774, 0.0, 0.0, 0.0, 0x1.87fa5ab940268p-559, 0.0,
     0x1.9f2b65d14bd04p-113, 0x1.378949d0ae174p-181, 0.0, 0.0, 0x1.c9debd7a16171p-178,
     0.0, 0.0, 0.0, 0.0, 0x1.94effbd8fa031p-436, 0x1.c704e3e1c1f93p-113,
     0x1.cdc551ac9e089p-447, 0.0, 0.0, 0x1.5a37bf8f4591p-748, 0x1.9f19099a84123p-663,
     0.0, 0.0, 0.0, 0x1.8a78f82e75cc7p-270, 0x1.f4a7da7d802c5p-336, 0.0, 0.0,
     0x1.e6e5739420dd9p-510, 0x1.920a39fe4efebp-626, 0x1.8dd413dff4127p-942, 0.0,
     0x1.934b19a012224p-606, 0x1.0094ac176f787p-672, 0x1.8bfbb90d0f7bep-108, 0.0, 0.0,
     0.0, 0.0, 0x1.ad68b519f1842p-163, 0.0, 0x1.210e4178054e7p-325, 0.0, 0.0, 0.0,
     0x1.b69be39edf55bp-265, 0.0, 0.0, 0.0, 0x1.ccf42d1e31fcep-1001, 0.0,
     0x1.3c9e27bf5a03ep-147, 0x1.2b49a4c40af25p-313, 0.0, 0x1.e8591b1b068aap-141, 0.0,
     0.0, 0.0, 0x1.ebdb8b687fd68p-234, 0x1.3bbce410cfae8p-908, 0.0, 0.0,
     0x1.143709bc9044dp-53, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71b7c0e41a9d1p-838, 0x1.817720593d59p-595, 0.0, 0x1.d6b42f01eb77fp-989, 0.0,
     0x1.5db934b2ac92fp-682, 0x1.9630107398698p-339, 0x1.772ae2996118ap-726,
     0x1.9e79c33433d3dp-70
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_erfcd2_u15avx2128(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_erfcd2_u15avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_erfcd2_u15avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
