/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd2_u35kvx.c --function Sleef_acosd2_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.d2cf6f61d5596p-367, 0x1.7ba02a661281p-74, 0x1.2ddb60ff29642p-372, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ede986d3df064p-539, 0x1.98b0c280214b3p-955, 0.0,
     0x1.de3d43fb6fa7ap-186, 0x1.e3d888da14139p-963, 0x1.43ae991de7bfcp-829, 0.0, 0.0,
     0.0, 0x1.6c42302a51864p-626, 0x1.be29b146f2a05p-138, 0.0, 0.0, 0.0, 0.0,
     0x1.144b6bf944d73p-619, 0.0, 0.0, 0x1.a214dbd5831ddp-716, 0.0, 0.0,
     0x1.fcb0163af6065p-945, 0x1.b3e28c434643ep-427, 0x1.5f6b555b924a3p-456,
     0x1.d3d4c8201e655p-614, 0x1.f52d5ea03367fp-310, 0x1.7410618b12d5dp-899,
     0x1.76c8166890a74p-282, 0x1.8d87fb02d7af3p-28, 0.0, 0.0, 0.0, 0.0,
     0x1.aace3ae2a8b7ep-612, 0.0, 0.0, 0x1.79d291d56f4c8p-686, 0x1.7de328ed8cdbbp-724,
     0.0, 0x1.805dd4b92e049p-26, 0.0, 0x1.9f0a79ccf5cfbp-758, 0x1.0333a090a8fd2p-543,
     0.0, 0.0, 0x1.df52a95464748p-327, 0.0, 0.0, 0x1.f9f80782a056cp-231, 0.0,
     0x1.3d7e160b080cep-256, 0x1.52915960c90bbp-46, 0.0, 0.0, 0.0, 0.0,
     0x1.45e5fc7591dc7p-731, 0.0, 0.0, 0.0, 0x1.1d976f14a9a62p-247,
     0x1.ea299f9115685p-434, 0x1.0991fd703bfe5p-30, 0x1.6f84bf543c9d4p-189, 0.0,
     0x1.c35c92b864a7p-988, 0x1.1c3c026421b5ep-20, 0.0, 0.0, 0.0,
     0x1.48188d7c7643cp-254, 0.0, 0.0, 0.0, 0x1.5ee3040649d45p-155, 0.0,
     0x1.ff1f692d987bep-663, 0x1.8b763545dde14p-633, 0x1.4f83b229050e2p-659,
     0x1.09c85abefeca7p-207, 0x1.8f6421ff0a7e2p-667, 0.0, 0x1.edb9408152bfdp-520,
     0x1.86fa5718e9446p-842, 0x1.17d07ec4b79abp-308, 0x1.195fe425aca7ap-979,
     0x1.33e714f6c19c7p-33, 0x1.bf138c8c203d9p-921, 0.0, 0.0, 0x1.329f0eaf25334p-300,
     0x1.780860ae8dc1ap-368, 0.0, 0.0, 0.0, 0x1.f49e33d5adc86p-380, 0.0,
     0x1.c549e99cf159dp-974, 0x1.54b1d8fcf4a35p-57, 0.0, 0.0, 0x1.bf8322f1cd94ep-613,
     0x1.d0e2be5734032p-37, 0.0, 0x1.18040eadae5c6p-842, 0.0, 0.0,
     0x1.85ee01b1a098bp-709, 0x1.93ecf185539e3p-852, 0x1.571a57bd2c4b1p-11,
     0x1.9a8004adb61abp-298, 0x1.9d746f71cd142p-30, 0x1.5d393e832a72fp-691,
     0x1.3addc4d22385cp-600, 0x1.fec1c41388643p-765, 0x1.00e2b7c768dbep-826, 0.0, 0.0,
     0x1.37eed962e169p-314, 0.0, 0x1.20d3304503439p-190, 0.0, 0x1.928ded9356fe6p-766,
     0.0, 0.0, 0.0, 0.0, 0x1.7dd67918244f4p-394, 0x1.f6ca1bab7f99bp-271,
     0x1.324c51136ea1ep-160, 0x1.f30ae2c1d82b1p-111, 0x1.985a193a41c4fp-670,
     0x1.574ae00bfb4f2p-213, 0.0, 0x1.3f337cbb58262p-927, 0x1.676affaddeabdp-997, 0.0,
     0.0, 0x1.6b8eb663af106p-493, 0.0, 0x1.d3712c5bef084p-941, 0x1.8635f982fbb87p-307,
     0x1.1961394b12035p-208, 0x1.149c236a8ac42p-920, 0x1.9c7247370cb62p-622,
     0x1.0781456589227p-170, 0.0, 0.0, 0x1.17574b5d1113p-224, 0x1.1b3e9ef94fa3cp-992,
     0.0, 0.0, 0x1.61597b4159ea5p-567, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0095f9be56f2cp-465, 0x1.ac02c555e9413p-499, 0.0, 0.0, 0.0,
     0x1.ca65698b8047dp-148, 0x1.aea42b7a158aap-632, 0x1.1d5b89955fcdfp-313,
     0x1.efff73760e387p-656, 0x1.02b65d5012c62p-62, 0.0, 0x1.a28e3e5378a8cp-557, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74bd976276e5p-591, 0x1.3b259f7de04fcp-956, 0.0,
     0x1.a016a316271b6p-84, 0x1.f6ca25e701952p-731, 0x1.e866446c86878p-113, 0.0,
     0x1.d5a993dd6967cp-560, 0x1.5963bd3509ea9p-504, 0x1.73a81a13b6bf6p-934,
     0x1.e1941a28121c6p-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0db78727a6e56p-301,
     0.0, 0.0, 0.0, 0x1.29e3d7098c1c5p-253, 0.0, 0.0, 0x1.12e0dcd34a5aap-279,
     0x1.e72061794ea96p-324, 0x1.c83e4cbca117cp-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c771a2881514p-907, 0.0, 0.0, 0.0, 0x1.ac0ebfa06ae83p-155,
     0x1.b78d72b81f43ep-356, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.568d3f09e16ep-125,
     0x1.499577fa841bep-357, 0x1.7dd1d5c80ad45p-738, 0x1.d2252b6d07e38p-542,
     0x1.0266533d56abap-120, 0x1.c7e3c08985f9cp-618, 0.0, 0x1.c22714b607904p-929,
     0x1.541475cfd25efp-716, 0.0, 0.0, 0.0, 0.0, 0x1.2d9f2b0c0bd34p-470,
     0x1.7a92359256c5p-230, 0x1.b3d2c3ce592b4p-850, 0x1.4b0d1ea17f442p-335, 0.0,
     0x1.4f9dc5a251b73p-33, 0.0, 0x1.3308f9480ceccp-818, 0x1.6577528a31ce1p-296,
     0x1.78fba0b346b3fp-546, 0x1.056b3dd1c1af6p-938, 0x1.8e45cf0da6cdcp-108, 0.0,
     0x1.c8149e37ba9a6p-567, 0x1.f3f4aa5970ecp-986, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35db635d19bdcp-417, 0.0, 0.0, 0.0, 0x1.d830efec5dfffp-292,
     0x1.13adfbfd892b4p-350, 0.0, 0x1.b24b141353e44p-909, 0x1.623a38abfe84p-435, 0.0,
     0.0, 0.0, 0x1.af363e0802b04p-44, 0x1.24d0e58f190ep-951, 0.0,
     0x1.0684407a6891dp-477, 0x1.247e00b6d4f5cp-677, 0.0, 0x1.0042ebff96916p-309,
     0x1.6acc3105319fcp-60, 0.0, 0.0, 0x1.e78e99e9058a9p-713, 0x1.26d1a1b7c9f79p-462,
     0x1.25b6bf3c1eafdp-346, 0x1.aeb7ca8d972f7p-347, 0x1.7164b1788ab7ep-74, 0.0, 0.0,
     0x1.ced62745eda3cp-357, 0x1.3643cc8efe02bp-62, 0x1.9b9795c3aac4p-676,
     0x1.dd8380e4f3c2ep-155, 0x1.430c9e1f889e7p-523, 0x1.d15a96ec2debdp-699,
     0x1.24a53acb6c3f9p-374, 0x1.3d297fb955713p-750, 0.0, 0.0, 0x1.66b45350cb931p-331,
     0x1.bfc5a9f52e05ap-12, 0.0, 0.0, 0x1.bb7c305086d15p-506, 0x1.452cfced63672p-761,
     0x1.0e27866a2c8abp-929, 0x1.72ab5450cd577p-213, 0.0, 0x1.afdf81981ecdbp-447, 0.0,
     0.0, 0.0, 0x1.e2c07a38bfe75p-77, 0x1.3a88915df158p-553, 0.0, 0.0,
     0x1.0d4522d411431p-182, 0.0, 0.0, 0.0, 0.0, 0x1.9832ced03e03dp-50, 0.0, 0.0, 0.0,
     0x1.970e92704f261p-928, 0x1.e4600d5d42ae6p-230, 0x1.eee524fcd6029p-971,
     0x1.bb95140d00616p-630, 0.0, 0.0, 0x1.f81269f13b338p-529, 0x1.35d0283279011p-540,
     0x1.738029524cb36p-656, 0.0, 0x1.2133db5a42617p-475, 0.0, 0.0,
     0x1.e84dc673fcbacp-215, 0x1.f2f911a4749e6p-588, 0x1.f25f742a18bfp-438,
     0x1.33cbf00a6b9ddp-987, 0x1.775351c2eccbdp-104, 0.0, 0.0, 0x1.9a29614401c4bp-485,
     0.0, 0.0, 0x1.4119a4841a60fp-100, 0x1.fa873dfe86726p-549, 0x1.6f195a9527d76p-388,
     0.0, 0x1p0, 0x1.efd8b71651c8bp-776, 0x1.935a636dd946cp-926, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.92040e58c3b8bp-178, 0x1.8336eeee59507p-715,
     0x1.e9b72da27cab1p-152, 0.0, 0x1.9d36bebea43edp-939, 0x1.417b478fa2111p-51,
     0x1.2c4e443f85aa4p-317, 0.0, 0.0, 0x1.9b6f23e09a762p-417, 0.0, 0.0, 0.0,
     0x1.55188b072ddfbp-86, 0.0, 0.0, 0x1.6e91872e83108p-103, 0x1.7b58e1c08cd97p-345,
     0.0, 0x1.91a0769bc4fb2p-879, 0x1.b07782b5b084bp-345, 0.0, 0.0,
     0x1.78bd54b997a9ap-210, 0x1.fbfd616b8bbaap-298, 0.0, 0.0, 0x1.01b29ce1a7b49p-998,
     0.0, 0.0, 0.0, 0x1.74e8f8c2a9c76p-834, 0x1.9b412bbe942aap-149, 0.0,
     0x1.a8dd7ba37f347p-692, 0x1.eb46d50f1725fp-708, 0.0, 0.0, 0.0,
     0x1.d7711287b6f8dp-470, 0x1.1964a73acb344p-447, 0.0, 0.0, 0.0,
     0x1.0d871bf5c7eb2p-21, 0.0, 0.0, 0x1.eea56a8920f3dp-240, 0.0,
     0x1.d91edb00a7c1bp-1006, 0x1.718288d34d467p-650, 0x1.8654c7dd7fe78p-793,
     0x1.f6911faf9b2c5p-790, 0.0, 0.0, 0x1.d143effb28045p-310, 0.0, 0.0,
     0x1.ab327ae94b36dp-668, 0.0, 0.0, 0.0, 0x1.9eba75b7734e4p-421, 0.0,
     0x1.9f7b122a392f9p-230, 0.0, 0x1.6c91a9e7e4077p-466, 0.0, 0x1.5b325af546857p-311,
     0x1.9592f437c01p-1006, 0x1.b066f232eb31dp-93, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74451ccf91632p-836, 0x1.a7d75a08964c1p-70, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df7ce985042b6p-326, 0x1.03b6689aa8a15p-850, 0.0, 0x1.844d351327ca3p-23,
     0x1.42d95e8b0f638p-337, 0x1.495b06fb5c3ecp-435, 0x1.7298cc8ef40bp-248, 0.0, 0.0,
     0.0, 0.0, 0x1.fc796837a6ba5p-448, 0.0, 0x1.ac545083eb04ep-175, 0.0, 0.0,
     0x1.86a228ef0337cp-784, 0.0, 0.0, 0.0, 0.0, 0x1.e0cbf9f62770fp-441, 0.0, 0.0,
     0.0, 0x1.32fdc4a63bc65p-791, 0x1.fd0f52fb591f6p-682, 0x1.7ef432b9570dcp-955,
     0x1.f4fad0819c336p-108, 0x1.b6a32743daef6p-807, 0x1.1b3b918542929p-109, 0.0, 0.0,
     0.0, 0x1.ee9cd38d69e39p-480, 0.0, 0x1.52a2bfd801df4p-104, 0.0,
     0x1.e028a32bc88c1p-781, 0x1.bb5a13bfc24b9p-744, 0x1.0af4518853bcp-280, 0.0,
     0x1.87a3d9ef45671p-699, 0x1.bf75546ef4c95p-550, 0x1.c6acfc2ec3547p-253, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bff49728708cbp-790, 0.0, 0.0, 0.0, 0x1.613681427aafp-923,
     0x1.74d994afcda38p-591, 0.0, 0.0, 0x1.239696764d99ep-16, 0.0,
     0x1.7fa00b7fcd02ep-390, 0x1.d3477a5b03038p-28, 0x1.d1d3a883dff51p-785,
     0x1.0c4bdc77ec235p-52, 0.0, 0.0, 0.0, 0.0, 0x1.5629dc22923ddp-961,
     0x1.b638c53593b09p-272, 0.0, 0x1.d67cbc3205676p-953, 0x1.0d4b65a639c53p-184, 0.0,
     0.0, 0x1.d001d152a8314p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.faaf774347fc6p-284, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa70d2a2b69f9p-491,
     0x1.e9f108650e32ap-311, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3928445bd70e2p-622,
     0.0, 0x1.64bc06182181ap-603, 0x1.388e3d626214p-1009, 0.0, 0.0,
     0x1.104900cec97c7p-655, 0x1.5237059cae9f7p-313, 0.0, 0.0, 0.0,
     0x1.de69028dabe96p-817, 0.0, 0.0, 0.0, 0x1.ac7120f815db1p-938,
     0x1.8f79f3d771a4fp-9, 0x1.130608d7f17b5p-232, 0.0, 0.0, 0.0,
     0x1.6d8884cea7d74p-695, 0.0, 0x1.9dac688e9829p-349, 0.0, 0x1.471c6502884f6p-986,
     0x1.b46c3cf73b98p-967, 0x1.316314815afcp-591, 0.0, 0.0, 0x1.ea09ea378bb45p-813,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5997a310ef82bp-378, 0x1.fff18e63605d5p-556,
     0x1.16c03be9f1dcep-160, 0.0, 0.0, 0x1.487df3850c6ccp-437, 0x1.18de9a5fa6e65p-502,
     0x1.c124e49fd3a4fp-495, 0x1.e10e116735658p-586, 0.0, 0x1.25b549fc9f407p-622,
     0x1.a3bc36b9c9e98p-108, 0.0, 0x1.989b087ca6c91p-513, 0.0, 0.0,
     0x1.85248b8efa3b1p-893, 0.0, 0x1.95013ee171acap-264, 0x1.98e2dfce95b32p-485, 0.0,
     0x1.fbb5f035af108p-376, 0x1.9bc6996be1c1cp-694, 0.0, 0.0, 0.0,
     0x1.d2eba870eb097p-524, 0.0, 0.0, 0x1.1761ebe371374p-864, 0.0, 0.0, 0.0, 0.0,
     0x1.c5dd4c633d5c2p-51, 0x1.2e07e82a9313ap-587, 0x1.14c143add8fe3p-38,
     0x1.c9d8910d77273p-587, 0.0, 0.0, 0x1.bc97a39321823p-402, 0x1.fcf4b581434ecp-403,
     0x1.58061a8b5061cp-273, 0x1.ecbc2d4441dc6p-58, 0.0, 0x1.d61fff2c1087ep-842,
     0x1.45ebe207e39b7p-59, 0.0, 0x1.ae4481c4fd40fp-373, 0.0, 0.0, 0.0,
     0x1.9c7cfc9d16bd3p-612, 0x1.1d2639ec1dacep-30, 0x1.ae19c7a4abc0bp-371, 0.0, 0.0,
     0.0, 0x1.cfcff17e32108p-218, 0.0, 0.0, 0.0, 0x1.3f7da8a4334acp-158,
     0x1.a9c208cd58a8ep-266, 0x1.1eaf4f11f5cf5p-105, 0x1.cf32e3b1a7985p-110,
     0x1.3a56a08af09f6p-512, 0.0, 0x1.14e897a120643p-355, 0x1.2537a220ed78bp-573, 0.0,
     0.0, 0x1.4515200960a9p-930, 0.0, 0.0, 0x1.f2a707a6ad84dp-915,
     0x1.e0307c55dd20cp-906, 0.0, 0x1.0a1840d5393fdp-764, 0x1.693b8c7e36886p-133,
     0x1.ee96d5d4a67dep-496, 0x1.7182a56862358p-795, 0x1.745c434f99aa5p-326,
     0x1.7f54b18b42c9ap-455, 0x1.0fba79e0f753cp-500, 0x1.03230e69d4166p-565, 0.0,
     0x1.cfc234c7676e4p-424, 0x1.66a03730534d6p-376, 0.0, 0x1.ad3edc056629fp-764, 0.0,
     0x1.28b2ede6df338p-13, 0x1.f7c7b257a285fp-695, 0.0, 0x1.e801af16617c5p-764, 0.0,
     0.0, 0.0, 0x1.b8501adaf0b41p-721, 0x1.4e83ec800b809p-363, 0x1.ff3c12689e387p-865,
     0x1.294d07740730bp-214, 0x1.711e59ccd8056p-470, 0.0, 0.0, 0.0,
     0x1.e88c86be56b86p-582, 0x1.3866840fff845p-733, 0.0, 0x1.7d4b515e349p-759,
     0x1.2b7d053c85d7p-102, 0.0, 0x1.9c940a9deb9fap-297, 0.0, 0.0,
     0x1.42c163bf1d1f4p-284, 0.0, 0.0, 0x1.432ac9c5c0affp-459,
     0x1.791cb143c17acp-1002, 0.0, 0.0, 0.0, 0x1.a45c1b3a37fd5p-527, 0.0,
     0x1.1283793e24473p-712, 0.0, 0x1.f9ca6e940da0ep-416, 0x1.1439e13bb8f8dp-882, 0.0,
     0.0, 0x1.1c0aa51a4ae57p-317, 0.0, 0.0, 0x1.5f4eab14c031cp-469, 0.0, 0.0,
     0x1.d439d715700a5p-337, 0x1.16991b973ff25p-589, 0x1.9ebc1435410eep-864, 0.0,
     0x1.9d0de437dfa4ap-722, 0x1.ae6cea40fd63dp-490, 0.0, 0.0, 0x1.a38e1df34fb8bp-622,
     0x1.9e6f472b0e786p-392, 0.0, 0x1.a7e858f8f0aa5p-845, 0x1.52d6760c4e2a3p-263, 0.0,
     0x1.7bbd313a3b225p-878, 0.0, 0.0, 0x1.b29dc6f7b0f9dp-187, 0x1.2eacd8dd5be4ap-967,
     0.0, 0x1.88e22249e4dc8p-544, 0.0, 0x1.71be8e7b95a87p-15, 0x1.e411f9abb174ap-717,
     0x1.71303a7dec2ccp-997, 0x1.acc0738b529a2p-375, 0.0, 0x1.08d7c4b1c04e9p-873, 0.0,
     0x1.5d2cb06a1bed7p-594, 0.0, 0.0, 0.0, 0x1.d16cef1aadb7dp-707,
     0x1.f94f735bc7ecbp-557, 0x1.19de579821149p-509, 0.0, 0x1.4003bc9ce696ep-677,
     0x1.a5a1eb9d3ab36p-347, 0x1.620d099adcd3bp-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.38811639eb0c3p-779, 0.0, 0x1.9c4819b7442p-875, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cbc5519335f63p-727, 0.0, 0x1.4fbd6ca16d583p-20, 0.0,
     0x1.dda0069454d16p-248, 0.0, 0.0, 0x1.ca61ee00d12c9p-747, 0.0, 0.0,
     0x1.58f0696a939c3p-851, 0.0, 0.0, 0.0, 0x1.43e512c0d80e4p-849, 0.0, 0.0, 0.0,
     0x1.92047f5b04e34p-294, 0x1.47d94d699bff3p-601, 0x1.e3264952fce5ep-685,
     0x1.861b9f3d6b991p-451, 0x1.9f2f8cfd8d4p-118, 0.0, 0x1.3641bd22cea01p-157, 0.0,
     0x1.8e47bd6f06c5ap-976, 0x1.fc3b5553c9559p-726, 0x1.e9e8910e144f2p-688, 0.0, 0.0,
     0.0, 0x1.694d561f76c77p-572, 0.0, 0x1.1175afb24237fp-298, 0.0,
     0x1.72a3ac1c9e13dp-406, 0.0, 0.0, 0.0, 0.0, 0x1.1ab696a6f0179p-155, 0.0,
     0x1.2785790560d2bp-58, 0.0, 0.0, 0.0, 0x1.431ccfe04511bp-600, 0.0, 0.0,
     0x1.bd8ded93eb854p-719, 0x1.a2dfd2b587b55p-332, 0x1.0ed0cb43f2eeap-175,
     0x1.ab309ead538ep-292, 0.0, 0.0, 0x1.208681bfabcebp-878, 0.0,
     0x1.233154ff54b94p-114, 0x1.ad8ba99f4d52ap-295, 0.0, 0x1.f2b2dd693f8e1p-967, 0.0,
     0x1.2e10461d714d7p-640, 0.0, 0.0, 0x1.833ab70aa8568p-323, 0x1.9d60d23a7287fp-220,
     0x1.f48f23edabf11p-20, 0.0, 0.0, 0x1.1aaca4f9da21cp-417, 0.0, 0x1p0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f8985f5d5b05p-667, 0x1.bcab650335664p-731, 0.0,
     0x1.4e79b211c1499p-135, 0x1.996175d38e27cp-838, 0.0, 0x1.d6a2eb51cb94dp-979, 0.0,
     0x1.3a5f48ee7ddb5p-442, 0.0, 0.0, 0.0, 0.0, 0x1.aa00c3e1e3253p-568,
     0x1.416a617e70aa7p-914, 0.0, 0x1.4c889c122d962p-396, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97872582d6987p-496, 0x1.7e498840c849cp-652, 0.0, 0.0, 0x1.2d4d9867161e7p-712,
     0x1.5647413756d56p-612, 0.0, 0.0, 0x1.e0c1af828158fp-247, 0x1.84bec56cb346dp-644,
     0x1.4c265cefb81ecp-525, 0.0, 0x1.4b93b616ffccfp-375, 0.0, 0x1.06f0e25ba68ap-180,
     0.0, 0x1.c6b45d773b43ep-412, 0x1.0c4e0c2c64b88p-554, 0.0, 0x1.486180c299b4bp-892,
     0x1.3803623477e71p-574, 0.0, 0x1.401cfb05ffdfp-721, 0.0, 0x1.781e68fff7e22p-409,
     0x1.5bfd9695b9432p-101, 0x1.a3ee64f2fa40cp-979, 0x1.6e5e13f3f5d4fp-325,
     0x1.a005ea1307b98p-205, 0.0, 0x1.d519ca951a347p-400, 0x1.1530521054215p-576, 0.0,
     0.0, 0x1.3314bb2f9bc23p-664, 0x1.e00a9156ec396p-404, 0x1.e9d855f35216ep-704,
     0x1.90b7f19059aa2p-617, 0x1.887aaaae7e0a5p-481, 0.0, 0.0, 0.0,
     0x1.946311fc8d2dp-455, 0x1.cf81062f03373p-479, 0x1.41bb5bb28f4ep-560, 0.0,
     0x1.1ba0705bf11f1p-43, 0.0, 0x1.55672798a263p-474, 0x1.85cba7ed0e068p-403, 0.0,
     0x1.2f5ad06ba1a4cp-278, 0.0, 0x1.c8b09abb1127cp-114, 0.0, 0x1.74f7ef869f81bp-243,
     0x1.a2ed92decf5cap-305, 0x1.c301f12a3d445p-824, 0.0, 0x1.3ef68afbff4d4p-970,
     0x1.b99c2ca2e402ep-781, 0x1.17853e615138p-727, 0x1.5bc7dd8cb7243p-579,
     0x1.9ec95b922ec35p-486, 0.0, 0x1.657506a1fd13ep-709, 0x1.22c041d3062bcp-890,
     0x1.b4f868d2c7c07p-619, 0.0, 0.0, 0x1.63b434f66019fp-951, 0.0,
     0x1.17cfb94883b27p-456, 0x1.412734556ca94p-897, 0x1.c892ba23ccfeap-202, 0.0,
     0x1.ac9546dfd94c8p-36, 0.0, 0.0, 0x1.e54a232800529p-95, 0.0,
     0x1.fcb3fa5158cdbp-817, 0.0, 0.0, 0.0, 0x1.21a6432cc6fa4p-761,
     0x1.81bfb8ad1f046p-239, 0x1.648adbe30e3dfp-404, 0x1.eb74e4257831cp-748, 0.0,
     0x1.136660a1e3dd7p-918, 0.0, 0x1.42f120e4574bep-731, 0x1.ab4c027454011p-123, 0.0,
     0.0, 0x1.85c0a3a077647p-63, 0x1.3f4b5f44aa75ap-829, 0x1.e80202f372ac3p-1013,
     0x1.5c964c8f064ep-734, 0.0, 0.0, 0.0, 0.0, 0x1.9dd29d47d898fp-478, 0.0,
     0x1.3ba7bff8f882ap-57, 0x1.d9671c3db7f6cp-70, 0.0, 0x1.5cf17e7468a0fp-435, 0.0,
     0.0, 0x1.b46cd2d1bb213p-73, 0x1.f0ba0f301ba42p-147, 0x1.2cc7bdf3d1fa7p-803,
     0x1.5439626b00c25p-708, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_acosd2_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_acosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acosd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
