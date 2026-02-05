/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand2_u10kvx.c --function Sleef_tand2_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.a0f1a106031aap-286, 0.0, 0.0, 0x1.38ec15071b112p-978, 0.0,
     0x1.60e24a19432c2p-475, 0x1.ca003a0ccdbd9p-199, 0.0, 0x1.75f53046f0cb5p-994, 0.0,
     0.0, 0.0, 0x1.c0bc74fda9173p-1005, 0.0, 0x1.3a61602c414c4p-986,
     0x1.a9e1b32d2d5cbp-143, 0x1.b0ab62e5b1739p-873, 0.0, 0.0, 0x1.690d68f8c751ep-781,
     0x1.930083cfcf234p-887, 0.0, 0x1.b63a7d57a9155p-87, 0x1.caf265e199309p-89, 0.0,
     0.0, 0.0, 0x1.9a66a8e5dfe7fp-346, 0x1.8192533169d5p-157, 0.0, 0.0, 0.0, 0.0,
     0x1.dbdb0ac84a70fp-668, 0.0, 0.0, 0.0, 0.0, 0x1.c73b1f5305eb6p-454, 0.0,
     0x1.11a94e7f5eb6cp-968, 0x1.cf22ee02b341p-887, 0x1.013041f8f1d3ap-562,
     0x1.ed4a7e27ca458p-992, 0.0, 0.0, 0.0, 0x1.3d6b16da1c2ccp-36, 0.0,
     0x1.24e98a95bd1c1p-386, 0.0, 0x1.cfea2ff925842p-171, 0.0, 0x1.d683db2e51fbbp-50,
     0x1.e6988a38a92b1p-720, 0.0, 0.0, 0x1.0e7e54b557cc3p-114, 0x1.a5732cdf7ceb2p-496,
     0x1.53d49461acb46p-318, 0x1.526106a650503p-579, 0.0, 0x1.d89953679d68ep-295, 0.0,
     0x1.ba5b7e4c50db4p-681, 0x1.db0c188c2a9cap-269, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.519da63bf9fep-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b35655909d142p-6, 0.0, 0.0,
     0.0, 0x1.727e610a01a85p-6, 0x1.e5a8de85f6b94p-758, 0.0, 0x1.a51af727f0c4cp-180,
     0.0, 0.0, 0.0, 0.0, 0x1.f48f853e509e6p-99, 0x1.026883ea82781p-21, 0.0, 0.0, 0.0,
     0x1.a6f85206425dp-1001, 0x1.1e7d691de482dp-628, 0.0, 0.0, 0.0,
     0x1.9f1a1e225b977p-373, 0x1.fc97c9017e0dep-224, 0x1.cbf70d4f38a4fp-636, 0.0,
     0x1.29523c6bb1166p-113, 0.0, 0.0, 0x1.5364cbebc0c69p-49, 0x1.102db9ff117c8p-192,
     0.0, 0x1.9e2396ec21f27p-32, 0x1.beae014104338p-195, 0.0, 0x1.1e47af0fef0d8p-89,
     0.0, 0x1.b6751038a228bp-81, 0.0, 0x1.46b83b21a2495p-733, 0x1.29a79528f7a0bp-788,
     0x1.52f010f1fa581p-60, 0x1.5698aa8d35e71p-177, 0x1.5f4142fc4fd91p-363,
     0x1.ffb98d3ad00b5p-30, 0.0, 0x1.f2c4ff27694ep-27, 0x1.2c553d4f91d36p-518,
     0x1.800099b4454d9p-156, 0x1.978f5b94a77d9p-176, 0x1.d7f77d6eef5bep-528,
     0x1.b5e6b9f71bccep-692, 0x1.52bedb3ef6ceep-537, 0.0, 0.0, 0x1.25da7b9444d09p-788,
     0x1.fa183f0f3a894p-349, 0x1.9e63b27f490c3p-321, 0x1.1b8cc88f568ccp-277, 0.0, 0.0,
     0x1.dfaba373a357fp-779, 0x1.6f38551bfed8ep-73, 0.0, 0x1.c8739ecd59db1p-640, 0.0,
     0.0, 0.0, 0x1.9bc915e08c945p-355, 0x1.0c24039aa2a83p-867, 0.0, 0.0,
     0x1.526aac39e8dc9p-121, 0.0, 0x1.9a95b3d570e57p-396, 0x1.2fe63004354ddp-290, 0.0,
     0.0, 0x1.620f4206f651dp-572, 0.0, 0x1.4f1ac94eec114p-559, 0.0,
     0x1.559b605adc4acp-834, 0.0, 0.0, 0.0, 0.0, 0x1.0d6722afc479ap-623,
     0x1.9d194a7e20f16p-364, 0.0, 0x1.c275b8767f414p-350, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8147811836e8bp-40, 0.0, 0x1.ab4f3375358f4p-55, 0.0, 0x1.0261987a58943p-40,
     0.0, 0.0, 0x1.de3713de48a0bp-663, 0.0, 0x1.0d9686fbac7abp-821,
     0x1.a14acc275e138p-633, 0x1.2886bde08a19p-675, 0x1.2089e0bde6546p-440,
     0x1.8caaeb6036e5ap-478, 0x1.8dceceb4ad064p-275, 0.0, 0.0, 0x1.331a34592c37bp-498,
     0.0, 0x1.91df7e663a53bp-837, 0.0, 0.0, 0.0, 0x1.2ef0c39417cedp-745,
     0x1.0cbf8addc3c45p-171, 0x1.35672cd8d7f0dp-222, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20146246efe43p-1008, 0x1.0245354824311p-592, 0x1.bd4d8da677811p-52,
     0x1.0f426a14e725ep-116, 0.0, 0x1.b1e48d7db09ffp-1020, 0.0, 0.0, 0.0,
     0x1.c6d6cd0aebeb5p-698, 0x1.7dbc65f199cd6p-651, 0.0, 0x1.73491e0900d65p-171, 0.0,
     0x1.e9eddf61cdb05p-727, 0x1.fb3b4e669762p-54, 0x1.d1ac906546069p-50, 0.0,
     0x1.b88c1711b4c8ep-70, 0.0, 0x1.ea9d19db96f8ap-762, 0x1.60789e74de1e8p-843, 0.0,
     0x1.038ed65981ec8p-199, 0x1.326e7458e8e89p-799, 0x1.a6340c5306978p-252, 0.0,
     0x1.132a92c9d9048p-188, 0x1.6c65251702e2ap-305, 0.0, 0x1.bd36283f9009dp-1000,
     0x1.cee95640fbfb6p-264, 0.0, 0.0, 0.0, 0x1.a627e0775bd09p-789, 0.0, 0.0,
     0x1.68e6f6f526776p-326, 0.0, 0.0, 0x1.5c8c6a3d7e089p-547, 0x1.26ac133774e54p-91,
     0x1.8aec77e21c072p-622, 0x1.e7a420e783775p-969, 0.0, 0x1.383280422566ap-277,
     0x1.a64b9904dc2f2p-770, 0.0, 0.0, 0.0, 0.0, 0x1.625663d32c108p-407, 0.0, 0.0,
     0x1.f09fb78284f9cp-508, 0.0, 0.0, 0.0, 0.0, 0x1.57f36494466b2p-891,
     0x1.3f4e9acd86fadp-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1762d2824e425p-157, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9bd5694a2b8p-264, 0.0, 0.0, 0x1.be74497a49eaap-696,
     0.0, 0x1.7e0eb8478f83bp-282, 0x1.a3de38e3b5af8p-789, 0x1.6a6e4d2ba1a01p-282, 0.0,
     0x1.c24880b4a5dbap-228, 0.0, 0x1.58fa4ff9f8ef2p-461, 0.0, 0.0, 0.0,
     0x1.a4c502642e297p-476, 0.0, 0.0, 0x1.cc160c76af2b8p-277, 0.0,
     0x1.9467b9faac823p-344, 0.0, 0x1.85bf071a99681p-1012, 0.0, 0.0,
     0x1.e053cb7a0a919p-45, 0x1.73f19408e547ep-768, 0x1.1934dfddcb40bp-29, 0.0, 0.0,
     0x1.4db1ad978f991p-951, 0.0, 0.0, 0.0, 0x1.d28bb7449c60bp-339, 0.0, 0.0,
     0x1.9d2fc7bb04757p-93, 0x1.f41fbc440dbdap-1002, 0x1.4fca18f1dd6dbp-932, 0.0, 0.0,
     0x1.43f1aa684d998p-316, 0x1.44039d62bf252p-780, 0x1.244ffe3bb048bp-995, 0.0,
     0x1.2056613b9e23ap-477, 0.0, 0.0, 0.0, 0.0, 0x1.d1a95851f4babp-745, 0.0, 0.0,
     0.0, 0x1.2a33a7d1eee55p-151, 0x1.bcbd541dd3bdbp-768, 0.0, 0.0,
     0x1.d870666558c95p-595, 0x1.f881400fa274p-998, 0.0, 0.0, 0x1.b4ef87aa340ebp-756,
     0x1.9d86f5e7e3344p-638, 0x1.cd4ff6a90de52p-99, 0.0, 0x1.e5d9135a923c2p-714,
     0x1.ece0202ace091p-345, 0.0, 0x1.af962e0c7d5fbp-756, 0.0, 0x1.419827491b58p-254,
     0.0, 0.0, 0.0, 0x1.329c55ef6c63ap-786, 0.0, 0x1.2cd9b9cf8c867p-565,
     0x1.2743a09760e68p-713, 0x1.e5e2d49c88ee5p-59, 0x1.923a61c682eebp-370,
     0x1.75a6e0e539504p-479, 0x1.48a139fe4168dp-965, 0x1.599826fee728ep-210, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa76cd342fa32p-384, 0x1.047ec05a13652p-149, 0.0, 0.0,
     0x1.a97544e19447fp-585, 0.0, 0.0, 0.0, 0x1.f29e48f250af3p-694,
     0x1.19727c2dca867p-997, 0.0, 0x1.b28c8889b4882p-160, 0x1.86d44969d0e01p-610, 0.0,
     0x1.53f17472d04bp-870, 0.0, 0.0, 0.0, 0.0, 0x1.bade2f795759ap-491, 0.0,
     0x1.2e2b706da3d11p-435, 0x1.ca21667e0ca7cp-670, 0.0, 0x1.5e377a083857ap-30, 0.0,
     0.0, 0x1.a883a7eddd801p-251, 0x1.8ee3922b72546p-828, 0x1.3a03f7f7d14p-35, 0.0,
     0x1.9ef23f31c14a8p-302, 0x1.0a50c3ea0f0b5p-151, 0.0, 0.0, 0.0,
     0x1.53dd7be85ca59p-753, 0x1.9e13f645d747ap-428, 0.0, 0x1.b8d29884e0712p-590,
     0x1.b783d5166e1c3p-432, 0.0, 0.0, 0x1.47c250929f545p-1019,
     0x1.ea248fe052821p-585, 0.0, 0x1.7a95cb21ea2c2p-447, 0.0, 0x1.a6551c7e8a6d7p-502,
     0x1.53253221629e8p-66, 0.0, 0x1.dec89159600bp-399, 0x1.f7f2847ff3916p-26, 0.0,
     0x1.d0f1d1d68db28p-648, 0.0, 0.0, 0.0, 0x1.d2b07b91d3e12p-511, 0.0, 0.0,
     0x1.327682548423ap-370, 0x1.d376bd30f8d24p-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4932b181894p-495, 0.0, 0.0, 0.0, 0.0, 0x1.79b59ce5407a8p-175, 0.0, 0.0,
     0x1.90853e7f9ba35p-516, 0.0, 0x1.56e63e43eadfdp-220, 0x1.575638a872632p-769,
     0x1.137f0108cc502p-812, 0x1.199f4a1c48feep-545, 0x1.55b83538e6a08p-96,
     0x1.e2036b35587c4p-443, 0.0, 0.0, 0.0, 0x1.3e878357f9d24p-217,
     0x1.03ce038685112p-809, 0x1.ec6a4b86ff354p-902, 0.0, 0.0, 0.0,
     0x1.66ca8bb659a1ap-336, 0x1.db9fa1f9bf435p-302, 0x1.60d747583d2bcp-307, 0.0,
     0x1.7bad4a6d439cfp-727, 0x1.b7bce3330e1b1p-629, 0x1.954f0bb7f6d72p-1001,
     0x1.f92c1019d09b2p-257, 0x1.1961f13bcd68ep-429, 0x1.f4eb7f7a7b697p-960,
     0x1.441409bcda2d8p-379, 0x1.ad34851f09396p-300, 0x1.475f3836d1698p-728, 0.0,
     0x1.497747d1e8a9cp-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1131fb0d56d1p-557, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0af1635c5491ep-390, 0.0, 0x1.b3a1acc7bdd55p-232, 0.0,
     0x1.d0497a67509fcp-331, 0.0, 0.0, 0x1.1edca3f775578p-441, 0.0,
     0x1.6d32ea1a4666fp-532, 0.0, 0.0, 0x1.853389b95bfcap-608, 0x1.c1c4bc34c02c5p-45,
     0.0, 0.0, 0.0, 0x1.40d8eb1d4924cp-558, 0x1.31afb9d49a6b2p-581, 0.0,
     0x1.9e12edd66b12p-39, 0.0, 0.0, 0x1.1146b98467d74p-340, 0x1.8d6d45cd9f5eep-832,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea6da3fbedc5p-305, 0x1.9d4a4f52dfd8ep-808,
     0x1.4f44f929c6b7ap-831, 0x1.80086a16f2253p-253, 0x1.d603fc5d5dce2p-357,
     0x1.7815ba782c77cp-933, 0x1.40e4dd1a42bp-766, 0x1.bd6cfee734a65p-419,
     0x1.a0540429ef157p-99, 0x1.9dfa66c9fe9e1p-309, 0x1.e98138bcefacbp-540,
     0x1.556217a3ec035p-8, 0x1.7e03bbef1880ap-643, 0x1.6466f13191776p-787,
     0x1.3892afa8e047bp-434, 0x1.1623c9137f0ebp-280, 0.0, 0x1.b3c5a76924d82p-856,
     0x1.cca99c73e2493p-563, 0x1.3d502e751af28p-754, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bbe3607bf0d5p-645, 0.0, 0.0, 0.0, 0x1.ef850165fc766p-223, 0.0,
     0x1.bb75d78f48d56p-532, 0.0, 0x1.a5a51b18ec1aep-954, 0.0, 0x1.52047b858ba32p-903,
     0x1.e905e7a20881ap-288, 0x1.1d4b30537363ap-691, 0.0, 0x1.18afb0f579aap-30, 0.0,
     0x1.b889c2c0638aep-865, 0x1.55e8dea14cd91p-738, 0.0, 0x1.542cb03de7f7fp-487,
     0x1.9a9bbd9ecdbeap-951, 0.0, 0.0, 0.0, 0x1.abbffd9510407p-651, 0.0,
     0x1.86f8b9208166ap-257, 0x1.498ce26cebc08p-233, 0x1.c3561cdf02c8fp-529, 0.0, 0.0,
     0x1.bf164ab7637edp-290, 0.0, 0x1.c73e064bdd0f7p-726, 0.0, 0x1.6c214a5c5b3a4p-988,
     0x1.ebb0de7717148p-535, 0x1.f9c843b7614e5p-190, 0x1.47ce5beb1dda9p-543, 0.0,
     0x1.a96a9451574a8p-492, 0x1.f2152dc3fdc75p-643, 0x1.6905be2a356f2p-395, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4815879b4fcd6p-967, 0.0, 0.0, 0x1.2c02a587ee3eep-760, 0.0,
     0x1.ddf1c9a962075p-244, 0.0, 0x1.10c8e9224613dp-350, 0x1.e5005044862a8p-109, 0.0,
     0x1.91836935edb69p-438, 0x1.69f8aa563791bp-38, 0x1.fb4679250da9cp-860,
     0x1.92f0dc802f055p-555, 0x1.4e0888930ebfcp-462, 0x1.9389c32a75396p-632,
     0x1.39b14d0b9c914p-363, 0x1.f3efbbf53baa1p-302, 0x1.468f7f15df661p-745, 0.0, 0.0,
     0x1.00193acaa77dap-895, 0x1.b1220a123a5d3p-203, 0.0, 0x1.85254baed6e2dp-196,
     0x1.ffc121d963ae5p-996, 0.0, 0x1.c95e8f70a29fap-633, 0.0, 0.0,
     0x1.a0cc0908d1592p-277, 0x1.85f3753035e05p-972, 0.0, 0.0, 0x1.24e097380b373p-102,
     0.0, 0x1.0b9b908ab0e7bp-757, 0.0, 0x1.c8cde125c8d7dp-573, 0x1.9d9c241b25cb5p-873,
     0x1.aba4f434f264dp-84, 0.0, 0.0, 0.0, 0x1.d5a4b5795b63p-513,
     0x1.7c81244ce74d2p-373, 0.0, 0x1.f34730c034527p-29, 0.0, 0.0,
     0x1.52d0beb82fbdp-96, 0x1.b7744a8689d87p-48, 0x1.5d0399020c438p-214,
     0x1.af60ed4a39951p-662, 0.0, 0.0, 0x1.7edb79b60c579p-666, 0x1.7abcb3b47aa1ep-860,
     0x1.d62cdd5562e5ep-981, 0x1.7ae18194388c3p-452, 0x1.761b971081daep-603,
     0x1.cc73b69c5ca56p-730, 0.0, 0.0, 0x1.fa580f8ee353cp-694, 0x1.03f7837974061p-62,
     0.0, 0.0, 0x1.edd8138b55ec4p-603, 0.0, 0x1.e3476d19ba43dp-662, 0.0,
     0x1.ff376cd5c5d89p-336, 0.0, 0.0, 0x1.8ef95ddf2541dp-752, 0x1.3c1cefb5744b3p-895,
     0.0, 0.0, 0.0, 0x1.0e12b6728f1e5p-872, 0.0, 0.0, 0x1.823f55a6f0744p-624, 0.0,
     0.0, 0.0, 0.0, 0x1.e7d354017755ap-19, 0.0, 0.0, 0.0, 0x1.6513b59431ccep-191,
     0x1.28277cf97c05p-495, 0x1.b839f78b4a6ebp-941, 0.0, 0x1.643ddd32d42dap-506, 0.0,
     0x1.a0316e1ecc531p-84, 0x1.73d9b4e539f6dp-619, 0.0, 0x1.c2d6904847496p-700,
     0x1.69baa93c867e8p-990, 0.0, 0.0, 0x1.0fcc2e687e2ddp-808, 0.0,
     0x1.a6ffeb720c226p-736, 0.0, 0x1.08783f5f4f7dap-709, 0.0, 0.0, 0.0,
     0x1.d560301a11774p-582, 0.0, 0x1.a8288000d1cb7p-588, 0x1.ef842c3e48ba6p-403, 0.0,
     0x1.879ecbd8ad118p-850, 0.0, 0x1.2d60912582022p-103, 0x1.0ea4ea797750dp-484, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd0d1c1198623p-614, 0x1.e19425264b8f9p-381, 0.0,
     0x1.0056e306135c5p-280, 0x1.87d2e9b32716cp-396, 0x1.181e36d953934p-32, 0.0,
     0x1.a1a25206190f6p-208, 0x1.01dceba59efbfp-198, 0x1.dcc899275d84ep-492,
     0x1.e7b4e2e228489p-494, 0x1.50fb3047e842bp-930, 0.0, 0.0, 0x1.f0751f938855ap-996,
     0.0, 0.0, 0x1.ab101de7a3a03p-200, 0.0, 0x1.b976feced96f2p-834, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fe20fe19ffa99p-362, 0x1.2bc8dae9a3061p-401,
     0x1.20a154a114e3bp-299, 0x1.d58e42d9a035ep-601, 0.0, 0.0, 0.0,
     0x1.75cdc5575e1fdp-412, 0x1.bcac309b1ac32p-995, 0x1.09a7b9497c36fp-112, 0.0, 0.0,
     0.0, 0x1.18b4ce1e25459p-836, 0.0, 0.0, 0x1.131d63b513e7bp-842,
     0x1.5962196bfed8p-794, 0x1.055b9edb3b745p-455, 0x1.ef00143c65eccp-130,
     0x1.3d83453ab63d8p-883, 0x1.5a8705a1d56e1p-743, 0.0, 0.0, 0x1.0d782eda80968p-178,
     0x1.8d9704b7d5dbdp-846, 0x1.b1155e864e37ap-148, 0.0, 0x1.522a5be2552cbp-985, 0.0,
     0.0, 0x1.4e8212322c47ap-885, 0.0, 0x1.723fad65a4ea3p-332, 0.0,
     0x1.9ba822d4eeae3p-14, 0.0, 0.0, 0x1.6527fb162e7e4p-583, 0.0, 0.0,
     0x1.290b52afcbf69p-46, 0x1.e3a6f26bb00ep-106, 0.0, 0.0, 0.0,
     0x1.610e878257414p-898, 0x1.ddd7800bd370bp-776, 0.0, 0.0, 0x1.e6b533ea3bf36p-42,
     0.0, 0.0, 0.0, 0x1.90543bbba731fp-290, 0x1.43792d779daep-564, 0.0,
     0x1.ae071b8a5deccp-243, 0.0, 0x1.4e96b63ddcafdp-13, 0x1.4e3bbe0f5ec24p-105,
     0x1.ab68718790995p-745, 0.0, 0x1.0d77d2b77dc5cp-893, 0.0, 0.0,
     0x1.f9126123388c2p-672, 0x1.22b662a1863a5p-838, 0x1.12ed22c519f05p-420, 0.0, 0.0,
     0x1.0e3e4a1c3d378p-145, 0x1.8509043486693p-798, 0.0, 0.0, 0.0,
     0x1.b84464f421666p-394, 0.0, 0x1.8915f04583aap-458, 0.0, 0x1.1bf5f528dba8dp-162,
     0.0, 0x1.4c9655bc2921bp-862, 0.0, 0.0, 0.0, 0.0, 0x1.aef50288536d6p-130, 0.0,
     0x1.209e2f210ed4dp-282, 0x1.1d43d2aa7eddp-207, 0x1.5a14f6501fd3ap-81, 0.0,
     0x1.803afdad74b8ap-271, 0.0, 0x1.ebf96fdc3fcdep-599, 0.0, 0.0,
     0x1.ee99e383e4858p-296, 0.0, 0.0, 0x1.bbf58fbff77eap-925, 0x1.d261ea56f14f4p-155,
     0x1.d3ef40f7b443p-563, 0x1.15b13dbda3a18p-487, 0x1.cffe01e6237a8p-712,
     0x1.23f501298cca1p-128, 0x1.d2740156daaeep-599, 0x1.774fe0f7c49a4p-823,
     0x1.7ea8f3f99ef0ap-171, 0.0, 0.0, 0x1.453b368a83961p-222, 0x1.1f3cc405a72p-477,
     0.0, 0x1.770d528500561p-231, 0.0, 0x1.68d1010908fcbp-183, 0.0, 0.0,
     0x1.7e4ea63c57d31p-985, 0x1.42ccddcb055c5p-441, 0x1.1962257348a45p-720, 0.0, 0.0,
     0x1.0c60278361557p-833, 0.0, 0x1.5c1eb167a470cp-623, 0x1.51053bf1c7894p-974,
     0x1.deea10dd7fba8p-892, 0x1.c377036a2e664p-517, 0x1.7496603fd3cp-931,
     0x1.0a17d282b3941p-401, 0x1.e91aaa07f3c73p-534, 0x1.1009c1edb8e5ep-516,
     0x1.8a80bdbcf0af5p-431, 0.0, 0x1.9adbdaa935e05p-499, 0x1.51728b728b8b2p-567,
     0x1.e1055e7208e2fp-380, 0x1.3c0a5f1c3ba03p-198, 0x1.d474e0c4f4627p-42, 0.0,
     0x1.1c3d1ed3272b1p-601, 0.0, 0x1.d3d61a8e879f5p-313, 0x1.a476781bf038cp-538,
     0x1.1f9c9524506c9p-995, 0.0, 0.0, 0.0, 0x1.8f87bbe647ebp-869,
     0x1.07e90bdb58e2bp-721, 0.0, 0x1.9460665431105p-516, 0x1.137bcbfa5ec08p-815,
     0x1.215fa398ac2e4p-291, 0x1.c8233f41aad62p-962, 0.0, 0x1.ec0798586cep-967, 0.0,
     0x1.805794638d232p-707, 0x1.8e58b6a4920d7p-367, 0.0, 0.0, 0x1.7f1fb8ce9a591p-684,
     0x1.228545351cec1p-819, 0x1.a6e110c2ea9ddp-606, 0.0, 0.0, 0x1.d1c9f4395a58ep-389,
     0.0, 0.0, 0x1.52d67ecc92c3dp-530, 0.0, 0.0, 0x1.89624c248a7f5p-390, 0.0, 0.0,
     0.0, 0x1.6329a01115bcap-780, 0.0, 0x1.60efa0954ddd1p-53, 0x1.cb46100e362b3p-412,
     0.0, 0.0, 0.0, 0x1.e993c19e73d8ap-814, 0x1.fb27cf998a78p-66, 0.0,
     0x1.40661951e2fa7p-250, 0.0, 0x1.cb0c1d79fbe73p-491, 0.0, 0x1.18a0a2d00c7fep-572,
     0.0, 0.0, 0x1.abe7d1c3981e3p-169, 0.0, 0.0, 0x1.1ed527553bd2ap-508,
     0x1.425a827723a5p-1020, 0.0, 0.0, 0x1.eec51b32f9f19p-405, 0x1.e7eb065cc2a98p-623,
     0x1.f426604777a66p-632, 0x1.c4b65763bee7dp-902, 0.0, 0.0, 0x1.c691df1b38086p-556,
     0.0, 0.0, 0x1.5350e3d3e9a13p-757, 0x1.00748a493c85p-812, 0.0, 0.0,
     0x1.2601ed50dd619p-14, 0.0, 0.0, 0.0, 0x1.6aad030e1994ep-368, 0.0, 0.0, 0.0,
     0x1.26850326e5109p-163, 0x1.f7d8102c6d6afp-87, 0x1.cf699e3929a91p-69,
     0x1.ac134056e5823p-777, 0x1.f3603841b7df9p-632, 0.0, 0x1.eee1f7abad0e7p-503, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.afa0a6ecc662dp-255, 0.0,
     0x1.7c080d588d77dp-586, 0.0, 0.0, 0x1.0b04c71722761p-594, 0x1.13256347be5bbp-846,
     0.0, 0.0, 0x1.b7dfd085c8f82p-61, 0x1.2d2b21f60edf8p-939, 0x1.b6d8d11b44d4ep-482,
     0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_tand2_u10kvx(tmp0);
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
    printf("Sleef_tand2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tand2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
