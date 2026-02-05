/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d4_u10kvx.c --function \
 *     Sleef_finz_exp10d4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.476b75060b15ep-468, 0x1.3cbd3ff32c2c8p-296, 0x1.7f7a840cbf419p-571,
     0.0, 0.0, 0.0, 0.0, 0x1.1f21efb1a0e04p-37, 0x1.3e9e8d9bc9788p-51, 0.0,
     0x1.1b7a75614139p-949, 0.0, 0.0, 0x1.fac32cd0ac7bfp-334, 0.0,
     0x1.617b859122a5fp-379, 0x1.5174a915a422cp-843, 0.0, 0.0, 0x1.31bd44f1dcdb5p-611,
     0.0, 0.0, 0x1.4ecc0560bp-848, 0x1.15839e00beeccp-89, 0.0, 0x1.2051252c135d2p-398,
     0.0, 0x1.29119d43852edp-418, 0.0, 0x1.a3e43c0843c4ap-430, 0.0,
     0x1.0b56518bb4fa9p-691, 0x1.54d630a13d7f2p-975, 0.0, 0.0, 0x1.1b63231a397acp-865,
     0x1.72f24d7202821p-608, 0.0, 0x1.d383ff7f4161bp-90, 0x1.68aa445781726p-297, 0.0,
     0x1.8bab9e0f47775p-998, 0.0, 0x1.28aa1dffba0f1p-550, 0.0, 0x1.3c3237c35fb17p-242,
     0.0, 0.0, 0x1.077b5e759c6ecp-708, 0x1.c27ad09ff88cp-408, 0x1.e8e5d8ad38664p-754,
     0x1.d8ddef144a35dp-824, 0x1.4a8e2f0622094p-575, 0x1.7b41a36dcdacdp-256,
     0x1.e0eabd3cbfc5ap-475, 0.0, 0x1.b989e41a6e9f3p-4, 0.0, 0.0, 0.0,
     0x1.6dd79bccf0648p-887, 0x1.efc897b7210a9p-757, 0x1.48cf280e8fb09p-933, 0.0, 0.0,
     0x1.66afc415c0eaep-471, 0.0, 0.0, 0.0, 0x1.22c449514609cp-473,
     0x1.45f35a2c5e347p-221, 0x1.31e0bffe7f399p-817, 0.0, 0x1.86f892221135cp-309, 0.0,
     0x1.f9622e9474f99p-897, 0.0, 0.0, 0x1.781c12190cd6bp-417, 0.0,
     0x1.f991ce4791c61p-945, 0.0, 0x1.59f1915020f63p-515, 0x1.73d0d8bac00b8p-178, 0.0,
     0x1.3cfee819c3609p-407, 0x1.dc5027da0f064p-989, 0.0, 0.0, 0x1.43b9c82245b88p-648,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.439163c491465p-417, 0.0, 0x1.22d8c8b22dc86p-771,
     0x1.6c11a62bd89cdp-673, 0x1.1e0b65407cbe4p-470, 0x1.aa7f328f73b8cp-649,
     0x1.fec64cb9cdf7dp-41, 0x1.9dd74b35b788fp-265, 0.0, 0.0, 0x1.f5d455b6e22p-539,
     0.0, 0x1.454e30ee4a85ap-694, 0x1.10bb496d22f3p-702, 0x1.19a15fc063386p-928,
     0x1.04731e4302c6fp-457, 0x1.48895196f8f5dp-797, 0x1.61dab258eae43p-580,
     0x1.b810d15fbdfc1p-810, 0x1.25e5bdeef0617p-43, 0.0, 0x1.e1c0e943d723cp-643, 0.0,
     0x1.b66a8ed1d195cp-351, 0x1.3932b922f5eedp-262, 0.0, 0x1.156da6ecf528ep-903,
     0x1.349427b41fe87p-713, 0.0, 0x1.12c4f5bd10bc3p-429, 0x1.016be0585253fp-408, 0.0,
     0x1.b0fbd50de777fp-113, 0x1.ca5238c19e1f7p-1000, 0x1.0a81782e2efabp-562, 0.0,
     0.0, 0x1.4de3616dab314p-900, 0.0, 0x1.16739d3e28af1p-672, 0.0,
     0x1.1c36aff998d7ep-607, 0.0, 0x1.b0b48a7b5bcc2p-511, 0x1.6f848e98d32b8p-781, 0.0,
     0.0, 0.0, 0.0, 0x1.20261454e222p-498, 0x1.87200ae1145cdp-572,
     0x1.6640306e3dc12p-670, 0.0, 0x1.4b324bfedbfe3p-480, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e557c637117d2p-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6204a65d78c44p-730, 0x1.9ac1219186cc6p-802, 0.0, 0x1.ca6d4346fa347p-335,
     0x1.7f7b0cd6a75c5p-427, 0.0, 0x1.da3ab89a23973p-525, 0x1.f3d768f84cfd3p-22,
     0x1.abb0ee8c2840dp-842, 0x1.e2fa317c3726ep-434, 0.0, 0x1.9bce7307e2cbep-794, 0.0,
     0x1.370c7c64b2ee9p-713, 0.0, 0x1.97304fb75e32ep-399, 0.0, 0.0, 0.0,
     0x1.9a2b530ddea25p-836, 0.0, 0x1.1cfe057d56d4ep-167, 0x1.eac6a9cdaf5ccp-623,
     0x1.e581253ed7364p-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c9871ef379acp-844,
     0x1.83fde3fccaac7p-29, 0.0, 0.0, 0.0, 0x1.340a47763fc0fp-90, 0.0, 0.0,
     0x1.be63f8653a838p-664, 0x1.f34581a59b548p-150, 0x1.45716c1ffa6b4p-45,
     0x1.8a9f60dee476p-504, 0.0, 0.0, 0.0, 0x1.d0b2728e5d66p-856,
     0x1.806af49889dccp-983, 0.0, 0.0, 0x1.533a41ec0b1abp-793, 0x1.0181f21cd29fep-619,
     0x1.ed1c43dd9c532p-662, 0.0, 0.0, 0x1.32126cc618edap-171, 0.0,
     0x1.2b29155c59008p-514, 0x1.11fde0f09c719p-593, 0x1.00a9cbb665b47p-486,
     0x1.79cbe6d53f351p-219, 0x1.4b0b016299538p-350, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2c337f5fdda1p-399, 0.0, 0.0, 0x1.3da8634a83367p-313, 0x1.f10e93254341cp-269,
     0x1.dc1bbef0a4c3cp-161, 0.0, 0.0, 0.0, 0x1.f7de8aae12503p-630, 0.0, 0.0, 0.0,
     0x1.00f4819614524p-716, 0.0, 0x1.fb1da023068cbp-535, 0.0, 0.0,
     0x1.c3ef0315018d4p-34, 0.0, 0.0, 0x1.34cd58a091416p-205, 0x1.f1d787fe050afp-194,
     0x1.1b79aa1a0c72ap-329, 0.0, 0x1.9bbc9941a4822p-499, 0x1.8191577c2ef9dp-721,
     0x1.dd0145879b9eep-895, 0.0, 0x1.8c6376f8efefbp-558, 0x1.d485260687bffp-949,
     0x1.5ea5e9ce869cbp-136, 0x1.e7e16f3b5ab51p-301, 0x1.a2cb28695e819p-58, 0.0, 0.0,
     0x1.d9ebb4b18e94fp-456, 0x1.3999cd6a8c14bp-62, 0.0, 0.0, 0x1.277559d991b96p-682,
     0.0, 0x1.7d3e2bb24a417p-508, 0x1.a40fe07cf86a9p-318, 0.0, 0.0, 0.0,
     0x1.2e22d24dc075bp-161, 0x1.795afe3a0b599p-844, 0.0, 0x1.11471f4ca3ba6p-866, 0.0,
     0.0, 0x1.4f4a2910853bfp-815, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d0d52d7f43c2p-230,
     0.0, 0x1.c7c324dbd6d52p-855, 0.0, 0x1.a762811124b92p-398, 0x1.112a4834995bbp-650,
     0x1.5034397bd8807p-332, 0x1.02c835a8c740ap-933, 0.0, 0.0, 0x1.a472f0344fc09p-189,
     0.0, 0x1.59ed54fcd6e0fp-772, 0.0, 0.0, 0.0, 0.0, 0x1.f7c3484b623bdp-701, 0.0,
     0x1.f643acb3bbfd7p-933, 0x1.dcf5705aa6ef8p-311, 0x1.d632a90cec60dp-991,
     0x1.6309458bc2ac2p-153, 0x1.e9043dcdc0bcbp-547, 0x1.9974a16b6f30bp-472,
     0x1.abe938a3580efp-181, 0.0, 0x1.d3465e560b23cp-698, 0.0, 0x1.a1cf802495631p-160,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f3799c3fb775p-385, 0.0,
     0x1.bbc9142f71743p-175, 0.0, 0x1.2e09832572bedp-450, 0.0, 0x1.978129736fa1bp-474,
     0x1.f8418e93654d2p-498, 0x1.9f824b8241819p-305, 0x1.f702bca8fb313p-107, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.861fc3e81d802p-963, 0.0, 0.0, 0x1.f9cbd12b6672fp-97,
     0.0, 0x1.29445bc5bdd51p-303, 0x1.826b426078ce9p-690, 0.0, 0x1.9af290a0cf8adp-440,
     0.0, 0x1.3802d8a67671bp-925, 0.0, 0x1.c8c221c020573p-283, 0x1.fa9c41508b66bp-955,
     0x1.511b66fcbac7cp-636, 0x1.be667ca443441p-126, 0x1.db6028a4d97d6p-858,
     0x1.cc275677874c2p-853, 0.0, 0x1.c6c76106cd8bep-252, 0.0, 0x1.cae33df906c12p-208,
     0x1.68d7f8d2c192cp-637, 0.0, 0.0, 0x1.5d332baf59e1ap-64, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2c5ca9cf1138ep-930, 0x1.431d6b15dc8b4p-392, 0x1.d7dd888680107p-90,
     0x1.f1e44dd620a9p-912, 0x1.d775fdce541cbp-801, 0.0, 0.0, 0.0,
     0x1.b886534087438p-308, 0x1.8bb9fefebde91p-49, 0.0, 0x1.c75117e4d1bddp-12,
     0x1.a4169a5194e2fp-654, 0x1.2d153ade5b70ep-124, 0x1.14e9c98c2b6bbp-343, 0.0, 0.0,
     0.0, 0.0, 0x1.f292770f14babp-778, 0x1.d24d9b2a7da18p-44, 0x1.9f322436ac8a4p-219,
     0.0, 0.0, 0.0, 0x1.d900e562ade6dp-359, 0.0, 0x1.11658f9e3e34cp-24, 0.0, 0.0, 0.0,
     0.0, 0x1.915ffa5f2a443p-976, 0.0, 0x1.77e2f18e4458ep-898, 0x1.01a17a456067ap-894,
     0.0, 0x1.4ef0fdcbb396dp-345, 0.0, 0.0, 0.0, 0x1.3864631a2d91ap-905, 0.0, 0.0,
     0x1.84744b2ae4352p-565, 0x1.4493237ed76fep-518, 0.0, 0x1.ccb13d2380decp-341,
     0x1.6f0faae9ea6e9p-507, 0.0, 0x1.ef5fdfd6f1d88p-981, 0x1.86d499e384e47p-456,
     0x1.75b6457bc7185p-375, 0x1.b45b02dca391bp-523, 0.0, 0.0, 0.0, 0.0,
     0x1.a11b37a428bffp-386, 0x1.a42f89912b972p-814, 0.0, 0x1.4dd832bf27506p-907, 0.0,
     0x1.74435b5b626d2p-663, 0.0, 0.0, 0x1.76135c8ab4b6p-178, 0.0,
     0x1.27086f01a7b7ep-772, 0x1.e5bb6ab7090bbp-150, 0x1.2401be329d796p-687, 0.0,
     0x1.ed980f6fb7d6cp-48, 0x1.9418c8aece35p-670, 0.0, 0x1.36b3deed19e64p-577, 0.0,
     0.0, 0x1.6542e7d36c104p-491, 0x1.23df8f3516c42p-735, 0.0, 0.0,
     0x1.5a76bade6be96p-754, 0.0, 0x1.80da7ed932913p-570, 0x1.480a73c1e1984p-652, 0.0,
     0.0, 0.0, 0x1.a8c53d317357fp-978, 0x1.c24eb32661d8dp-653, 0x1.b0917af9942bcp-309,
     0.0, 0.0, 0x1.135d0899bb82bp-376, 0x1.b28acce488e42p-485, 0.0,
     0x1.8123c83d6ab5cp-284, 0.0, 0x1.f81f979de65e8p-124, 0.0, 0x1.152bee675b0c4p-917,
     0x1.9711236466bb7p-350, 0x1.3dfb557e066d5p-330, 0x1.767a94696a1c8p-6, 0.0, 0.0,
     0x1.6b4d8bf247897p-852, 0.0, 0.0, 0x1.b9ac7c2a31b9bp-117, 0x1.656e28ffa2fd7p-768,
     0x1.e7f94c772c3cbp-665, 0.0, 0x1.f33ffea6757a3p-324, 0x1.9733f364fb2adp-992, 0.0,
     0.0, 0.0, 0x1.5cdd9b3c15013p-57, 0x1.7dda466efbde8p-552, 0x1.5e148024709fcp-292,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.576c2ae58ef03p-730, 0x1.1e7eb3fdfeebp-917, 0.0, 0.0,
     0.0, 0x1.6668d4d849b49p-853, 0x1.a4bb8bbd015c5p-848, 0.0, 0.0,
     0x1.2a5166756d765p-40, 0.0, 0.0, 0x1.1ecfb32d0a37bp-267, 0.0,
     0x1.d688b4249358dp-369, 0x1.88f21e38bed62p-264, 0x1.dffb2d7ecc381p-651,
     0x1.0426ebda82165p-1003, 0.0, 0x1.3080c80a8a0dap-471, 0.0, 0.0,
     0x1.110d07d8c204cp-902, 0x1.c25debacbd06p-46, 0.0, 0.0, 0x1.6a914b6575cafp-618,
     0x1.6f1af5df4319bp-374, 0x1.ff4f25488d61ep-989, 0.0, 0x1.55aee4ee6284bp-37,
     0x1.df1ddde52d1cp-590, 0.0, 0x1.56b1ace96e59ep-299, 0.0, 0x1.7cb2c7d4ef8f6p-712,
     0x1.ff7581eb0545bp-578, 0x1.111533d3d828p-361, 0.0, 0.0, 0x1.dee60c2b2177ap-175,
     0x1.6bd7324ab1639p-400, 0x1.cf7bfab910056p-198, 0.0, 0x1.461c7bd07df6dp-664, 0.0,
     0.0, 0.0, 0x1.9f856e2770d0dp-758, 0x1.0c16606a921fbp-695, 0.0, 0.0, 0.0,
     0x1.88795d2745c52p-148, 0x1.c8bb6e1df72cbp-1014, 0.0, 0x1.7974591a72926p-386,
     0.0, 0.0, 0x1.2eba3371229b8p-874, 0x1.5e333e6ab1d3ep-417, 0.0,
     0x1.97c2c0c20bb21p-446, 0x1.574f7db123f83p-629, 0x1.de3667179c007p-237,
     0x1.50968bed41042p-267, 0.0, 0.0, 0x1.8aa3e66677cbp-607, 0.0, 0.0,
     0x1.bb5787621a455p-995, 0x1.d2c5912d87139p-197, 0x1.eead005db717cp-997, 0.0,
     0x1.fa016d9091676p-251, 0x1.4dc8e4040e976p-951, 0x1.fb31fb27ba9bbp-588, 0.0,
     0x1.63a2acf0f5bfbp-617, 0.0, 0.0, 0x1.b9e90c72f417bp-305, 0.0, 0.0,
     0x1.905443867203p-214, 0x1.e12dcd64a23b5p-312, 0.0, 0.0, 0.0,
     0x1.8975906157206p-56, 0.0, 0x1.91f797b1f0243p-219, 0x1.01c648b497216p-425,
     0x1.b7d45ff57361fp-353, 0.0, 0.0, 0x1.f26c28fd045e7p-236, 0x1.c83c8dcf2ce07p-200,
     0x1.e0bf241e289cep-451, 0.0, 0.0, 0.0, 0x1.6d4bbb08175dfp-873,
     0x1.f1698f612df1ap-643, 0.0, 0.0, 0.0, 0.0, 0x1.acec5ba4e86d4p-606,
     0x1.d06cc60291145p-1020, 0.0, 0.0, 0x1.720f42f3e3a8ep-537, 0.0,
     0x1.ef3bc7c98cb7cp-490, 0.0, 0x1.92ca5acd85573p-123, 0x1.aa444ef35ccf2p-692,
     0x1.03c36e2f1bdd4p-790, 0.0, 0.0, 0.0, 0.0, 0x1.9ef372c4cb4b7p-269,
     0x1.d00a296af2cfp-873, 0x1.278c9d5bc3edap-355, 0x1.220698952e1b4p-376,
     0x1.0912c231c0311p-907, 0.0, 0.0, 0x1.2510248d82e9ap-560, 0.0,
     0x1.fdfeb8b0a954cp-408, 0.0, 0x1.7961a96246bbap-544, 0x1.214860aac4742p-218, 0.0,
     0x1.48fefa2a1159cp-270, 0.0, 0x1.e12a91fd155bap-334, 0x1.166a45d53442ep-105, 0.0,
     0x1.8a15fdfb9b19cp-961, 0x1.1bed70f8ff0f8p-446, 0.0, 0.0, 0x1.35564543fec88p-749,
     0.0, 0x1.791878534cc25p-559, 0.0, 0.0, 0x1.c42a5b4ced0efp-239, 0.0,
     0x1.91b8b16fa6db2p-920, 0.0, 0x1.1d27e296e006p-303, 0x1.0a711b0af6104p-774,
     0x1.e2ebac453b428p-161, 0x1.132e316ff5fdbp-721, 0.0, 0.0, 0.0,
     0x1.366ca68780a65p-759, 0x1.871477d8d34b8p-403, 0x1.7f6e6edfc83edp-738,
     0x1.49a0e27afaa42p-309, 0.0, 0x1.5a93bb7fa9d24p-428, 0.0, 0.0, 0.0,
     0x1.3bee2861bff4cp-180, 0.0, 0x1.39037d2eb4281p-462, 0.0, 0.0, 0.0,
     0x1.4bbbdc07d7c77p-296, 0x1.b42d801f587ebp-44, 0x1.135618f60f769p-704,
     0x1.c32c5ba4978fap-108, 0x1.9998560eb423cp-496, 0.0, 0.0, 0x1.07979072f856bp-92,
     0.0, 0x1.c842c730b84c2p-625, 0.0, 0x1.50a0026e6960ep-913, 0x1.87ef4a5c0cf82p-24,
     0.0, 0x1.675629c32b889p-287, 0x1.70a2306da691dp-483, 0x1.5f7086f1b1d92p-556, 0.0,
     0x1.6c3c8cd202bc5p-385, 0.0, 0.0, 0.0, 0x1.a61db2cb43a07p-784,
     0x1.db91b01e75bbp-146, 0.0, 0x1.90f49d6aa02a4p-225, 0x1.6f5caec09b951p-621, 0.0,
     0.0, 0x1.8b7782e6237e6p-418, 0.0, 0.0, 0x1.6bd494de3bc6fp-9, 0.0, 0.0,
     0x1.b9631534fb388p-738, 0.0, 0x1.c2bcdc0b7eeb7p-386, 0.0, 0x1.8f7f934ace068p-181,
     0x1.db855ca051219p-720, 0x1.c91f57561db95p-31, 0.0, 0x1.66a147ab2e9d7p-862, 0.0,
     0.0, 0x1.1a9099d41e38ap-754, 0.0, 0.0, 0.0, 0x1.4aab37423d099p-868,
     0x1.dd0bf22e2d96ep-201, 0x1.f54b3646df725p-564, 0x1.72d74f5ffb053p-1008,
     0x1.522216972f244p-770, 0x1.02056a73e2c21p-453, 0.0, 0.0, 0x1.0fdb184061f9p-798,
     0.0, 0.0, 0.0, 0x1.1bdf8d0790f0dp-507, 0x1.675846ea8ecaap-123, 0.0, 0.0,
     0x1.223a51c70bedcp-428, 0x1.461a2026ddbc6p-712, 0.0, 0.0, 0.0,
     0x1.015f260fa0f42p-954, 0.0, 0.0, 0.0, 0x1.8efcbbf078294p-483, 0.0, 0.0, 0.0,
     0x1.baf3b55a4e40cp-916, 0x1.0999d7ba05a87p-300, 0x1.030d1856205bdp-872,
     0x1.f58ded6468959p-475, 0.0, 0x1.25cd43fa91c3ap-949, 0x1.58b0b2c70b852p-381, 0.0,
     0x1.dd2c6ebc2ad22p-740, 0x1.ca0a2aa2d55bfp-892, 0.0, 0x1.9e981271e773ap-223,
     0x1.f2300795f36a9p-824, 0x1.d25067f2e85a6p-680, 0x1.5c57a9ed51b36p-235,
     0x1.64126dfc88c22p-568, 0x1.c3b9e04a12fbdp-854, 0x1.ce8f401955239p-55, 0.0,
     0x1.c032cc0a0e2b8p-369, 0.0, 0x1.0ab0c490a04dbp-177, 0x1.096583dd83665p-648,
     0x1.7b5d4e9efcfb1p-804, 0x1.64a861f616e92p-876, 0.0, 0.0, 0.0,
     0x1.c2e5f08393805p-785, 0x1.fdfb0cafd3199p-405, 0x1.1e908552cedc4p-769, 0.0, 0.0,
     0x1.dca6ab26e63cep-718, 0x1.c15418543f4f5p-961, 0x1.f1b517b996821p-952,
     0x1.35f198801ffd4p-694, 0.0, 0.0, 0x1.2d2e0caff1122p-463, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ef34fecc88738p-752, 0x1.2128ad9e40e48p-358, 0.0, 0x1.64a1119b8a399p-363,
     0.0, 0.0, 0.0, 0x1.942d84d4b1b7fp-318, 0.0, 0.0, 0x1.c499d7f67c5d9p-488,
     0x1.f73a673e12f43p-704, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.865a79465d23ep-461,
     0x1.100513c6f831dp-453, 0.0, 0x1.c02a243277129p-536, 0x1.66b6f23ad6543p-925,
     0x1.9622847d9a96bp-378, 0.0, 0.0, 0x1.3a45b12af07bap-73, 0x1.7a332af013b5cp-815,
     0.0, 0.0, 0x1.7c17368edc57p-950, 0x1.f9403a568a16bp-41, 0.0, 0.0, 0.0, 0.0,
     0x1.06bcff3b682bap-312, 0.0, 0x1.fad478965990dp-877, 0x1.7b85b69ff49ecp-406,
     0x1.8962a158b7c09p-436, 0.0, 0.0, 0.0, 0x1.3dbafcee56bafp-152,
     0x1.d45ca4d7c8afdp-343, 0x1.6c205a32ac5b5p-235, 0x1.8c36f9fa3d677p-915, 0.0, 0.0,
     0x1.b8891b728e69p-617, 0x1.5039c0773a219p-728, 0x1.6aae5bfb91982p-119,
     0x1.266bf163e392cp-753, 0x1.e6612a7035fbfp-729, 0x1.71d5adcac639fp-326, 0.0,
     0x1.99e1fbf7c6b5ep-914, 0.0, 0x1.0f656df631d1cp-926, 0x1.d365d2cfe24c3p-663,
     0x1.7cce28c69aca3p-429, 0.0, 0.0, 0.0, 0.0, 0x1.0d8fa6140522ap-772,
     0x1.4b5067809a05p-574, 0.0, 0x1.67bbcdac1f86ep-665, 0x1.a9a5146837174p-36,
     0x1.97feb98d2725p-169, 0x1.97088338cd834p-548, 0.0, 0x1.edca1ac8027b1p-569,
     0x1.fcabb803d8aa9p-61, 0.0, 0x1.7c03fc23d7b67p-150, 0.0, 0.0, 0.0,
     0x1.c43a35b721e17p-541, 0x1.7020f072890cp-821, 0.0, 0x1.9ea3daea8fap-628, 0.0,
     0.0, 0.0, 0x1.91f9e72fb8807p-453, 0.0, 0x1.4d4b5fc16a8bbp-744,
     0x1.9b9f04bbf0bd8p-903, 0x1.04bbe75ae05e2p-299, 0.0, 0.0, 0.0, 0.0,
     0x1.9a4dc43f168cdp-775, 0x1.c6a27c94b89e5p-988, 0x1.c87a4fa272e12p-382,
     0x1.71a1f62233e45p-393, 0.0, 0.0, 0.0, 0x1.95f46be242cb9p-191, 0.0,
     0x1.32b80e68c1eaap-130, 0.0, 0x1.30f53eae3c0fdp-61, 0x1.bedeb0b93a4f4p-191,
     0x1.97908fb900dbbp-111, 0x1.7666db7db5338p-705, 0.0, 0x1p0,
     0x1.931be51cd11dep-400, 0.0, 0x1.04bff2c974a7bp-229, 0.0, 0x1.b8e8a60a4444ep-956,
     0.0, 0.0, 0x1.76d66d55f901ap-171, 0x1.4353cbe47e175p-907, 0.0,
     0x1.428179cde3bfp-113, 0x1.be5d4082ded07p-919, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95be03c62dbc4p-437, 0.0, 0.0, 0x1.085b8ef8b51ap-585, 0.0,
     0x1.9f1d51a0a637cp-383, 0x1.c833e95236ad5p-38, 0.0, 0x1.28875e3528d8bp-77, 0.0,
     0.0, 0x1.a7d18e40bebeep-660, 0x1.58f108766f25ap-861, 0x1.cd18e7e65de9p-746,
     0x1.5cb69bde690f7p-545, 0x1.c81a52118a969p-946, 0x1.f0e99921bb29dp-414,
     0x1.c82d40ed55279p-343, 0x1.8cd42ef0f6fe3p-802, 0.0, 0.0, 0.0,
     0x1.80f08596280b7p-860, 0x1.c145021379f11p-415, 0x1.3c35c8da4f6c2p-957, 0.0,
     0x1.e68b19d9ffdd7p-963, 0.0, 0.0, 0.0, 0x1.eb927a40ac6cfp-911,
     0x1.793a2cdd8ba98p-60, 0x1.88ae02a4c6389p-30, 0x1.4e382214ba47cp-97, 0.0,
     0x1.7164be90703bdp-903, 0x1.202ea8ac0477ap-211, 0.0, 0.0, 0.0, 0.0,
     0x1.4e93e39b86134p-669, 0x1.47a3935654eafp-477, 0x1.11246e8535ffep-651,
     0x1.18425b6552fe7p-961, 0.0, 0x1.77373061099bap-765, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e5ef942c9126ap-741, 0x1.2196dd0b7fd6dp-883, 0.0, 0.0, 0.0,
     0x1.564ae5d41aff8p-189, 0.0, 0x1.becdb4eb2d6c4p-587, 0x1.04bcd57b48f13p-678,
     0x1.a69a7856959a7p-648, 0x1.8e72d9ce03adbp-48, 0x1.462c5a147addap-744,
     0x1.d06d680c60c37p-526
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
            tmp1 = Sleef_finz_exp10d4_u10kvx(tmp0);
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
    printf("Sleef_finz_exp10d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp10d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
