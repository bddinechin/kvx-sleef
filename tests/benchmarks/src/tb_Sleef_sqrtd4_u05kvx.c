/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd4_u05kvx.c --function Sleef_sqrtd4_u05kvx \
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
     0x1.8777e18bfbb8p-70, 0.0, 0x1.4f73860895cabp-602, 0x1.7e681c5b3e4fdp-148,
     0x1.bf05244cc40fap-727, 0x1.fd54b26582ea1p-507, 0.0, 0.0, 0x1.6865705fd9374p-786,
     0.0, 0x1.810a6e0aed5f4p-379, 0x1.f72e289f2ae46p-426, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.067dfcc086414p-509, 0.0, 0.0, 0x1.ef92981c07274p-667, 0x1.95c1f52f0a1fep-975,
     0x1.6169ad4755f15p-561, 0.0, 0x1.0975c54afc1e8p-849, 0x1.c7f0462f4481p-669,
     0x1.4b922da891143p-735, 0x1.4d5f0974df227p-149, 0.0, 0x1.3225a08f62789p-453, 0.0,
     0x1.855ec38c58e86p-341, 0x1.d038de7241dcbp-219, 0.0, 0x1.37869ad55f542p-667, 0.0,
     0.0, 0.0, 0x1.23affe8dc324fp-1012, 0.0, 0.0, 0x1.7bd00306752c5p-86, 0.0, 0.0,
     0.0, 0x1.23ef330dacc23p-555, 0x1.20940781983a9p-601, 0x1.e2c20e3995b88p-822, 0.0,
     0.0, 0x1.0b9a5901b24f8p-647, 0.0, 0.0, 0.0, 0.0, 0x1.e5de7401d1ee7p-42, 0.0,
     0x1.de027e3987cf9p-853, 0.0, 0.0, 0.0, 0.0, 0x1.bcf0b611a33f2p-417, 0.0, 0.0,
     0.0, 0x1.c9f226ee1f605p-552, 0.0, 0x1.8176f5a5c368ap-797, 0x1.6fcc536b235bp-903,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.336746f338cecp-54, 0.0, 0.0, 0.0,
     0x1.9253e28b36d97p-635, 0x1.0809ecc193c57p-681, 0x1.6bf7e01524cbbp-253, 0.0,
     0x1.f92495c6cd01bp-831, 0x1.9a659e729e902p-393, 0.0, 0x1.a995a9210ff7ep-20,
     0x1.89b267399bce5p-759, 0x1.2dbb61152ba19p-801, 0x1.9a0d4450d7e5ap-885, 0.0,
     0x1.8b94de276dd3p-654, 0x1.12572a179f2bp-528, 0.0, 0.0, 0.0,
     0x1.ad958c0b45e35p-974, 0.0, 0x1.36c166e40189cp-323, 0x1.c63abb0e1f1f1p-163, 0.0,
     0.0, 0x1.fec00cfd691p-248, 0x1.82c640f8dec11p-853, 0x1.160bf06528f09p-816, 0.0,
     0.0, 0x1.43fcc18a9df73p-426, 0.0, 0.0, 0x1.3f5ea75b2a965p-794,
     0x1.490a6c6cc4b1ap-849, 0x1.882fa9ab799f7p-156, 0.0, 0x1.98052dfa28fb8p-908, 0.0,
     0.0, 0.0, 0.0, 0x1.bd12004bdcac2p-486, 0x1.37a6a2dc61c24p-935, 0.0,
     0x1.7bc97748c150bp-229, 0x1.a69a528c5561ep-824, 0.0, 0.0, 0.0,
     0x1.cb278c9916f33p-965, 0.0, 0.0, 0.0, 0x1.fd29a202b1a7fp-338,
     0x1.8579390dc81ecp-288, 0.0, 0x1.9871f4c26c497p-988, 0.0, 0x1.c6aab0019643p-223,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.199d68dd7e554p-202, 0.0, 0x1.ed0d2a81bc941p-1006,
     0x1.28f644077001ap-855, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5af048ccaa522p-182, 0.0, 0.0, 0x1.936343de7693cp-203, 0x1.153f84161a972p-48,
     0x1.e19d3bc065f38p-767, 0.0, 0.0, 0x1.9415624d48296p-236, 0.0,
     0x1.fc0363d2cc3aep-703, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80d8d18baeb1ap-646, 0.0, 0x1.30dac9c69f74fp-698, 0x1.0b17655dd5f22p-12,
     0x1.9e21d9cea3623p-474, 0x1.32ff28a02455ep-527, 0.0, 0x1.6e2f90422443p-258, 0.0,
     0.0, 0.0, 0x1.be2a6160c1218p-338, 0x1.ae520e29a319fp-204, 0.0,
     0x1.7cc3a1fc7ef89p-743, 0.0, 0x1.6fc6c826b0922p-761, 0x1.fccec927b8089p-671, 0.0,
     0.0, 0x1.ef2e478fcfd55p-845, 0x1.7d6c7635f9dc8p-805, 0x1.f19339308dbc4p-22,
     0x1.9c47ed950507ap-464, 0.0, 0x1.283c2a769008dp-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fef1873cb9105p-938, 0x1.aea9bfa68299ap-675, 0x1.0a7081ed7af4ap-283,
     0x1.9883184c78099p-1010, 0x1.109df7e8d3893p-616, 0x1.909052280135dp-878,
     0x1.1a2b1237f007fp-149, 0.0, 0x1.2e57bc8dd3e3fp-820, 0x1.beecb1604594fp-539, 0.0,
     0x1.fae4bfdebb7eep-759, 0x1.320b302bd8d08p-721, 0x1.7f3d122b7f6ep-490, 0.0, 0.0,
     0x1.cfe32ac836adap-614, 0.0, 0x1.317794dc20bdbp-179, 0x1.1159fa199abc5p-851, 0.0,
     0x1.5b620621ca644p-509, 0.0, 0.0, 0x1.34789b3dc3f86p-576, 0.0, 0.0,
     0x1.04c83bcd100bdp-89, 0.0, 0x1.47b1776f94953p-370, 0x1.b2fdb7bd7933fp-981,
     0x1.a5c9997b6095ep-633, 0.0, 0.0, 0x1.9b970e3437f3dp-212, 0x1.6c1c6886ef492p-328,
     0.0, 0x1.9998c319117bcp-861, 0x1.6a4600edbbd96p-66, 0.0, 0x1.7d0d80f92f854p-975,
     0x1.d38cb1ff4dd83p-339, 0x1.9f68c71606f2p-247, 0x1.3439e2ccd96cep-462, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6e6318f4527a9p-909, 0.0, 0x1.8db6606be209ap-315,
     0x1.9ebd1920c4b42p-589, 0x1.4a02934dc3274p-519, 0.0, 0.0, 0x1.9da38b4c4d5bfp-459,
     0x1.87e800e30170dp-845, 0.0, 0.0, 0x1.75e80b00b9586p-260, 0.0,
     0x1.b627dc83d64f9p-153, 0.0, 0x1.f0f31d3241baep-930, 0.0, 0x1.23c454cac44bdp-149,
     0.0, 0x1.c7861eacc1705p-162, 0.0, 0.0, 0.0, 0x1.1212b3ca8ebc1p-457, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18d15e947c97ep-276, 0.0,
     0x1.13beb82d893bap-41, 0.0, 0x1.178c22d735c9fp-172, 0.0, 0x1.46f3703e53cf8p-99,
     0x1.71df4cbde4e12p-84, 0x1.2b105148d133p-763, 0x1.156959dda97d5p-381,
     0x1.64a629e112f5bp-601, 0x1.7272267797f14p-841, 0x1.7a0599c2040ffp-171,
     0x1.d597d1a9bd8a6p-571, 0.0, 0x1.6237260b03e3cp-713, 0x1.945439e07180ep-956, 0.0,
     0.0, 0x1.f1eb353ae6f35p-107, 0x1.e9e36b04f5362p-72, 0.0, 0x1.db260ff68b5d4p-424,
     0x1.5b9b899ef1537p-718, 0.0, 0.0, 0x1.81d023909cee9p-495, 0x1.9f67f0401f731p-843,
     0.0, 0.0, 0.0, 0x1.eb5b30687de22p-463, 0x1.786b366b9f14fp-407, 0.0,
     0x1.481d7caa17309p-78, 0x1.d8138a49788d2p-1006, 0x1.6755101581bdcp-1000, 0.0,
     0.0, 0.0, 0x1.0619132b6dc2dp-387, 0x1.dd3aa2a3e8d9p-716, 0x1.fc3423a11c51p-114,
     0.0, 0x1.0cc576453a97ep-510, 0.0, 0x1.052334b109657p-718, 0.0,
     0x1.19968f5878a09p-420, 0.0, 0.0, 0.0, 0.0, 0x1.6040b6bfa4586p-742, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b667ce374f987p-861, 0x1.fa5bb600c7d76p-991,
     0x1.de9f527ea1953p-557, 0.0, 0x1.54c6224cff0c2p-782, 0.0, 0x1.4508f0c04dc1ap-139,
     0x1.542d3c12cd8b1p-704, 0.0, 0x1.d9812a53a78b9p-66, 0x1.c10ce088a6583p-385, 0.0,
     0x1.91aecb2bddb8ep-832, 0x1.48185690fadb3p-384, 0x1.be15e3470d871p-608, 0.0, 0.0,
     0x1.dccefa57dd65bp-850, 0x1.23f43681e33c5p-620, 0x1.49c389bd954c4p-810,
     0x1.5ab7572cdf926p-380, 0x1.e623f14469209p-1017, 0x1.e1645f98e612cp-459,
     0x1.0dbf940af6789p-465, 0.0, 0.0, 0.0, 0.0, 0x1.fd2460525e951p-782,
     0x1.5d2ee93be0112p-728, 0.0, 0x1.aa11560f84c68p-584, 0x1.04250db0d16a4p-83,
     0x1.50827a2afbb6ep-175, 0x1.4bf6a21afabadp-971, 0.0, 0x1.35321cd34c899p-403,
     0x1.abb240fb47848p-582, 0x1.ce85d6b345502p-895, 0x1.b7d5ed1adc8ap-954,
     0x1.2ab9d6d6a130ep-1007, 0x1.04421c13e2d76p-51, 0.0, 0.0, 0x1.1f8d52dada4acp-704,
     0x1.35a73bcab096bp-696, 0.0, 0x1.2b00700d3880fp-142, 0x1.fec06af2f2de9p-944,
     0x1.b7e59a255f122p-865, 0x1.1eee0ee2c38bap-380, 0x1.ac0c3013f076fp-954, 0.0, 0.0,
     0.0, 0x1.fd1f9c6b1807fp-418, 0.0, 0.0, 0x1.6e6d815ff2339p-659, 0.0,
     0x1.7a764826cf06bp-374, 0x1.1ca241f67913bp-574, 0x1.b8fa0483db91dp-106,
     0x1.d021a1a6cd3d9p-607, 0x1.310bd41f1fa1ap-91, 0.0, 0.0, 0x1.d66e66d272ap-921,
     0.0, 0.0, 0x1.2e35a5e6596d1p-332, 0.0, 0x1.db213cdfb1864p-206,
     0x1.7efc3034fb41bp-783, 0.0, 0.0, 0x1.8e2cce5a34e4dp-100, 0x1.5fc56a1cd45e8p-82,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e271b2a68da8p-789, 0x1.fc799797d740bp-591,
     0x1.b2fd749a4a2cfp-314, 0.0, 0x1.09039ff51a126p-840, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.38af3ec08141ap-949, 0.0, 0x1.bf7078e813815p-601,
     0x1.82ab587a0be06p-292, 0.0, 0x1.52f170de785f2p-103, 0.0, 0x1.9f5c451e6ec02p-282,
     0.0, 0.0, 0.0, 0x1.ebfa042834dbfp-942, 0x1.4847a45f0b474p-375, 0.0,
     0x1.615eba62139c2p-144, 0x1.44b3eb9c795e1p-75, 0x1.f19e626f470fep-869, 0.0, 0.0,
     0x1.1431f48fb708bp-142, 0x1.60285a857ad9p-415, 0x1.558eb90311239p-338,
     0x1.7421ca8fbd1ccp-580, 0x1.0231e3c930fbfp-344, 0x1.941df1ab938ecp-825, 0.0,
     0x1.6a2a3be210dffp-171, 0.0, 0x1.63a0100398b6dp-100, 0x1.0fd923eda3f6bp-978,
     0x1.8281b90584076p-206, 0.0, 0.0, 0.0, 0x1.bd716539bef8cp-885, 0.0,
     0x1.2efca5e360f5ep-446, 0.0, 0.0, 0x1.787e6591a9443p-60, 0.0, 0.0,
     0x1.38b80afd385c4p-716, 0x1.8c30ca7118c4ep-531, 0x1.60af4fb16119dp-659, 0.0,
     0x1.f1e3b70b2b31ep-788, 0x1.db363a5d97748p-352, 0x1.e77873877c9cdp-73, 0.0, 0.0,
     0x1.cd453f19e580ep-703, 0.0, 0x1.d40c824e18643p-543, 0.0, 0.0,
     0x1.61edb8d5fa1d8p-83, 0.0, 0.0, 0.0, 0x1.1a6ae642d82aep-1008,
     0x1.d81a04e8729f3p-111, 0x1.3792ffcd3f969p-164, 0.0, 0.0, 0x1.4a0190d3f22adp-273,
     0x1.4418e8048d5e7p-122, 0x1.ed66f6c987b04p-289, 0x1.b0e5d7854246cp-720, 0.0, 0.0,
     0.0, 0.0, 0x1.73233ecb761e2p-55, 0.0, 0.0, 0.0, 0x1.3574bfe8686d1p-810, 0.0,
     0x1.c432cc6a85ddap-1018, 0x1.9fe761dccba17p-644, 0x1.59542bfe10016p-241,
     0x1.0bff95b78e1bfp-701, 0x1.17c508c7e683ep-393, 0x1.b39bc858d1c17p-97,
     0x1.ff00b6f4a0a6p-878, 0.0, 0.0, 0x1.268dc860d41abp-849, 0x1.822b2a2048a71p-401,
     0.0, 0.0, 0.0, 0.0, 0x1.13daec185b2b3p-827, 0.0, 0.0, 0x1.1e710726deeacp-902,
     0x1.4730105eec1bfp-923, 0.0, 0x1.fbdf97e678efcp-558, 0.0, 0.0,
     0x1.c71ba671a2d28p-819, 0x1.9cc1c146ef65fp-87, 0x1.0f9395af90d14p-64, 0.0,
     0x1.11ef9d16d3a73p-243, 0.0, 0x1.9b4e84fc156c5p-130, 0.0, 0x1.78666aaf9191dp-4,
     0x1.5e72aa54af547p-193, 0.0, 0x1.29a9109fed07bp-578, 0.0, 0x1.8185ce6266ddp-438,
     0x1.fa1abc7145992p-481, 0x1.c5c3fe8a8cd0bp-785, 0.0, 0.0, 0x1.07d92a9e432c9p-910,
     0.0, 0x1.db4268170ef45p-318, 0x1.c48869e7d1074p-141, 0.0, 0x1.270fdc12de9c2p-304,
     0.0, 0.0, 0x1.6462546f4f53dp-254, 0.0, 0x1.beb8f5f064b35p-141, 0.0,
     0x1.85659e3e5b1bp-800, 0x1.bd3bd25194ff5p-638, 0x1.11661a0009b03p-623, 0.0, 0.0,
     0x1.a126eec8c9db5p-732, 0x1.321f42bc2e49cp-297, 0.0, 0.0, 0.0,
     0x1.4156cd8f1cecbp-876, 0.0, 0x1.962a84746151fp-588, 0x1.35c1ee0328fb8p-672,
     0x1.208b9fa628bep-495, 0.0, 0x1.6735091b16eddp-585, 0x1.7fedf26b9605cp-97,
     0x1.53a4bcdedfedap-163, 0.0, 0.0, 0x1.2918bf638f271p-572,
     0x1.63b7b7088813fp-1000, 0.0, 0x1.cd6ed81ee164fp-33, 0x1.0d814274a501fp-266, 0.0,
     0.0, 0x1.ff8bca909412dp-912, 0x1.1e8e2756a09dap-585, 0.0, 0.0,
     0x1.37cae63e94cdep-341, 0.0, 0.0, 0.0, 0.0, 0x1.a6e17554a5f7dp-510,
     0x1.0c16b9208163cp-674, 0x1.ab23d9567c70fp-960, 0.0, 0x1.afb3f8538bb27p-818, 0.0,
     0x1.730c53e5c57edp-282, 0.0, 0x1.5239d9e6be934p-973, 0x1.20af3439b0b06p-810, 0.0,
     0.0, 0x1.066961fa3a81cp-601, 0x1.0c2c52ab29c49p-665, 0x1.1ad089e7b741p-944,
     0x1.8a83f70236c8ap-621, 0x1.2b988ecedb3e6p-270, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b736822fd57b8p-171, 0.0, 0.0, 0x1.df8417a20016cp-368, 0x1.e6a888458fa44p-200,
     0x1.685c19806f34ep-777, 0x1.2dce9f4cfb411p-1015, 0x1.41b9cf867bfd2p-907, 0.0,
     0.0, 0x1.748ed807aab94p-763, 0.0, 0.0, 0x1.782f609993766p-425,
     0x1.a03ea022c76fbp-143, 0.0, 0x1.1a3268f0be522p-457, 0.0, 0.0,
     0x1.68a0933e85ae8p-491, 0x1.e7d83e36cf2d1p-897, 0.0, 0.0, 0x1.2566d65f4e50ap-767,
     0.0, 0x1.8da74cf631073p-323, 0x1.9419dbe136b1ap-881, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8e63d722fcc76p-998, 0x1.2674bcbb07f68p-299, 0.0, 0.0, 0.0,
     0x1.9facd0aa634eap-502, 0.0, 0x1.2b4bb19588e2p-548, 0x1.271e43f6d98d7p-178,
     0x1.5b0f7339c13a7p-696, 0.0, 0x1.4430dd53e58fp-794, 0x1.d6ee168a234bbp-1022, 0.0,
     0x1.6d2502f934e3fp-1012, 0x1.f3c6910355d37p-772, 0x1.43f10ace777dbp-532,
     0x1.b22e40e5662f6p-482, 0.0, 0.0, 0.0, 0x1.b4bbb1e1a382p-530, 0.0, 0.0,
     0x1.b996a06c22f7p-688, 0.0, 0.0, 0x1.96378208f1d2p-504, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c1b7f2b2d07cfp-64, 0x1.c557ea73ca965p-594, 0x1.9ee2a11f01cefp-756,
     0x1.294568579b70fp-15, 0.0, 0x1.3117bd3427b6p-881, 0x1.f2c14f7e74b57p-921,
     0x1.b282c12e478e7p-195, 0.0, 0x1.5f14c243157ddp-700, 0.0, 0.0,
     0x1.1bacb66afc49fp-456, 0x1.cfd5070dcf142p-744, 0x1.b5c8f0478c353p-282,
     0x1.909f3b33198dfp-477, 0x1.4b13c62e6a539p-430, 0x1.b9d67710bbf56p-213, 0.0, 0.0,
     0x1.000b68fe76affp-817, 0x1.6649ce32e7725p-146, 0x1.a44f357f77007p-452,
     0x1.43b12a42a980cp-1007, 0.0, 0x1.1329ff2701185p-924, 0.0, 0.0, 0.0,
     0x1.c1329cd837d64p-455, 0x1.9b6409816ffe1p-239, 0.0, 0.0, 0x1.f01d0af5cbf51p-508,
     0x1.e94ee9c188326p-875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c22a9085f23dp-205,
     0.0, 0.0, 0.0, 0x1.15f7ae6126ep-101, 0x1.0b37609ae01d8p-194, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d7cddc355f536p-889, 0.0, 0.0, 0x1.5bcf665e40175p-516,
     0x1.d2f4029376c28p-98, 0x1.23c0f1e0a96ep-773, 0x1.cf97abfe35b13p-168, 0.0, 0.0,
     0x1.0093725178d9bp-569, 0x1.8a175beb78a33p-105, 0.0, 0x1.c4d9f4f05727fp-166,
     0x1.4750979e4a096p-183, 0.0, 0x1.7e1c27447fe34p-340, 0.0, 0x1p0,
     0x1.afc701c44e896p-389, 0x1.35753efc23c16p-144, 0x1.f1fed6f7011d5p-496, 0.0,
     0x1.93937af232e9ap-276, 0x1.be40524b0b8cdp-586, 0.0, 0.0, 0x1.133ce1dc71455p-793,
     0.0, 0.0, 0.0, 0x1.04975cd4b76b3p-628, 0.0, 0x1.357599987de32p-783,
     0x1.7c0c1d9cd3495p-882, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2e315715d6c6p-802,
     0x1.9d171a55c5758p-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.10df416816fd7p-234, 0.0, 0x1.9549c054fe982p-297, 0.0, 0.0,
     0x1.ffeb45779b1b4p-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e1b6437604a93p-823,
     0x1.94bbed1fd3cbfp-236, 0x1.23925a779f745p-384, 0x1.d2ef21e8e796fp-485,
     0x1.f124b0b0797ecp-595, 0x1.ed9e949b7003fp-371, 0x1.00d7099bf0774p-77, 0.0,
     0x1.c699041a5332p-803, 0x1.2fd5120c06d65p-457, 0x1.723b2919d4c9fp-296,
     0x1.8d2648aa30c3ep-137, 0x1.7c2f4a42f90bep-536, 0x1.5454e0933838fp-996,
     0x1.f320703bf588ep-195, 0.0, 0.0, 0x1.919599d8e4aa5p-572, 0.0, 0.0, 0.0,
     0x1.38688314e3a63p-210, 0.0, 0x1.14bf40ce64784p-630, 0x1.610ec995eb231p-66, 0.0,
     0x1.ef7e68d2a5e89p-44, 0.0, 0x1.4f897e12b3062p-683, 0x1.30d1f097b9932p-558, 0.0,
     0x1.8d0608b94a82p-927, 0x1.8308bd1c1afc4p-551, 0x1.877963104851fp-961, 0.0, 0.0,
     0.0, 0x1.4739b70323d5ep-993, 0.0, 0.0, 0.0, 0x1.5450a7226eea6p-59,
     0x1.c1215066afcf9p-296, 0x1.6e39fee073c1fp-594, 0x1.44e789be9e8f1p-885, 0.0, 0.0,
     0x1.633aad9e4bc51p-233, 0.0, 0x1.3c138255e882cp-795, 0x1.91b774d68000fp-745, 0.0,
     0x1.514be9c1ed57bp-868, 0x1.6aa18a5685adep-475, 0x1.525309ecf099p-155,
     0x1.41782b64bf8d4p-462, 0x1.d5dc59e249324p-714, 0x1.68e963732ea4fp-706, 0.0,
     0x1.ccfd47907a4ccp-207, 0x1.486c3809418dap-913, 0x1.3f0423fa3e57fp-247, 0.0, 0.0,
     0.0, 0.0, 0x1.a45bb334ecc9p-368, 0.0, 0x1.d381bba22e564p-583, 0.0, 0.0,
     0x1.48f8a0e0cefe6p-238, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.218bb3a4d01fdp-685,
     0x1.df7593722501ap-890, 0x1.a186a7ede2bdfp-725, 0.0, 0.0, 0.0, 0.0,
     0x1.105f33c71d158p-1016, 0x1.230544c722bdap-399, 0.0, 0.0, 0.0, 0.0,
     0x1.82191a9d1dce5p-546, 0.0, 0x1.a238f1dff6ca6p-421, 0.0, 0x1.056d8aaeb7fd3p-275,
     0x1.235bc5aaf68fcp-1020, 0x1.8760648e5c756p-462, 0.0, 0x1.c9df3cebd75d8p-756,
     0.0, 0x1.39ad4af227122p-490, 0.0, 0x1.ab48d318e2c09p-76, 0.0, 0.0, 0.0,
     0x1.9bd0ed690ecadp-84, 0.0, 0x1.6b5f82e30e33cp-56, 0.0, 0.0,
     0x1.8eab2880fd88dp-952, 0x1.7b265fdef5432p-286, 0x1.e0e6f2fb70fe5p-165,
     0x1.14235652342f1p-188, 0.0, 0x1.9e7ceeab6197bp-121, 0x1.35e3db495dfafp-246, 0.0,
     0.0, 0x1.44f2ee43cb1cdp-922, 0x1.6b6535148ceb9p-711, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97126427ddaa2p-31, 0x1.ee58b21981179p-75, 0x1.03251adf42fc9p-705, 0.0,
     0x1.b4afbfa4dee43p-602, 0.0, 0x1.f6ecfd270bf86p-108, 0x1.c6f2b9b8b8567p-533, 0.0,
     0x1.66dbcc2d7a3a4p-927, 0x1.fd890b4264293p-938, 0.0, 0x1.74bc7b3386285p-11,
     0x1.27e7f4626b371p-369, 0x1.b1492c2fedd3fp-191, 0.0, 0.0, 0.0,
     0x1.40bd36a3794dap-123, 0x1.2539c2cdc5c92p-938, 0.0, 0.0, 0x1.24af556d0cabp-305,
     0.0, 0x1.c3c97890dc842p-541, 0x1.f247701e8dbp-638, 0x1.37c248c22b435p-698, 0.0,
     0.0, 0x1.5abe2479cb821p-524, 0x1.be8ed7bd7db89p-954, 0x1.2f0ee5b374bbap-450, 0.0,
     0x1.6365ebeb5e90bp-641, 0x1.7b08e0e689418p-395, 0.0, 0x1.ad02175589d63p-550,
     0x1.1a85373c8cf64p-414, 0x1.d0b0c4ee1fb35p-341, 0.0, 0x1.68ce46aa58b0fp-619,
     0x1.a0ebb9f987487p-161, 0.0, 0.0, 0x1.f50a4b0bd508ep-529, 0.0,
     0x1.d0c5a9b78bdacp-689, 0.0, 0x1.3d83f69f38b4dp-139, 0x1.45129b2c6694bp-110,
     0x1.6389172385e7fp-996, 0.0, 0x1.8fde49ac0b637p-326, 0x1.3aeed93cb092ap-33, 0.0,
     0.0, 0x1.ae70877789f65p-356, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_sqrtd4_u05kvx(tmp0);
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
    printf("Sleef_sqrtd4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtd4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
