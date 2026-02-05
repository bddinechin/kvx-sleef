/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd2_u35kvx.c --function Sleef_sincosd2_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.b57f4d8675c35p-724, 0.0, 0.0, 0.0, 0.0, 0x1.9dd2fdf01d88dp-563, 0.0,
     0x1.696b014daf63dp-110, 0.0, 0.0, 0.0, 0x1.2ba0e6ce49bc9p-449,
     0x1.efc56642c02bcp-832, 0x1.c142becbb38a9p-883, 0.0, 0x1.16515ae603986p-158, 0.0,
     0x1.1f2867e13c4dfp-618, 0.0, 0x1.c4bb189d849afp-363, 0x1.299e28b642d33p-609,
     0x1.f3c304dec92fbp-350, 0x1.8c7800aa9416cp-52, 0x1.d4efd40296fcep-841,
     0x1.c433a079d1303p-372, 0.0, 0.0, 0x1.a7af004c59912p-260, 0.0,
     0x1.dbdeb9675650fp-755, 0.0, 0x1.6abe32ba1cb7fp-892, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.72229b4fad851p-618, 0x1.1d2a1b1cf4c21p-869, 0.0, 0.0, 0.0, 0.0,
     0x1.c8e84decc16a1p-747, 0x1.11f3ace58687bp-23, 0x1.3f22f07b13467p-358,
     0x1.ba8a183ffa792p-739, 0.0, 0x1.452d5f5114c2dp-376, 0.0, 0.0, 0.0,
     0x1.8c5358323d6c4p-278, 0x1.cedfe79e6c154p-458, 0.0, 0x1.8dd0bb70fb1ffp-306, 0.0,
     0.0, 0x1.12c5acb5bac3ap-850, 0.0, 0.0, 0.0, 0x1.55a55cb8972e6p-857,
     0x1.895bd40320ab7p-868, 0x1.5c17535970c56p-788, 0x1.00b6460cc166ep-111,
     0x1.8633b6b07aa0fp-1007, 0.0, 0.0, 0x1.6f8df0f36ae33p-936, 0.0,
     0x1.1d00eeea3a412p-605, 0.0, 0.0, 0x1.00967110cfb6bp-461, 0x1.113bd4b6f2976p-483,
     0x1.5d78957e7c45cp-215, 0x1.ebc4ebcd7e7a8p-52, 0.0, 0.0, 0x1.c96254ed5955ep-139,
     0.0, 0.0, 0x1.1e574a4f24f21p-517, 0x1.b3f91f55a8531p-603, 0x1.c5775638f3e46p-472,
     0x1.eb6c95b36904ep-650, 0.0, 0x1.8f0788ebead49p-594, 0.0, 0.0, 0.0, 0.0,
     0x1.f7f5199a886c1p-883, 0x1.228e5bf58d971p-909, 0.0, 0x1.dfbd0c9f9fd9cp-497, 0.0,
     0x1.5e9ed17cc06f7p-357, 0x1.69094544149fp-280, 0x1.b71b97b735ff2p-647,
     0x1.f065bacc7e99dp-455, 0x1.4ecfde1ac94a3p-814, 0.0, 0x1.90d805102d0ebp-602,
     0x1.eb8120c97c881p-329, 0x1.a5861064e71dcp-220, 0.0, 0x1.cf3b3c813eaa9p-487,
     0x1.c58cd0616f2bdp-456, 0.0, 0x1.14bb50cfa131ep-966, 0.0, 0x1.e795d24a88481p-656,
     0.0, 0.0, 0x1.62a6fd09bdfcap-430, 0x1.b6a27ab5c7d36p-519, 0.0, 0.0,
     0x1.d4f0d57a231c4p-671, 0x1.d8623af5437bdp-57, 0.0, 0.0, 0x1.f2b42f189fcccp-962,
     0x1.cf50274d01909p-695, 0x1.f46e556d30c86p-596, 0x1.ed0a878560e39p-279, 0.0,
     0x1.4d1ef887c8787p-909, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40a499b164d1bp-480,
     0x1.5ac15a98e85f7p-227, 0x1.20e4f77c6cef1p-918, 0.0, 0.0, 0x1.7190d686ef00dp-922,
     0x1.d5dabe74e626cp-48, 0.0, 0.0, 0x1.8a2a1a67f9ca3p-1007, 0x1.ed42c3e2d610dp-24,
     0.0, 0.0, 0x1.ee8f2bd0573a1p-226, 0x1.2be01a770ec04p-948, 0x1.bf56b8192c86fp-675,
     0x1.d49537f60104ap-828, 0.0, 0x1.fa36404d0c4e6p-720, 0x1.f248542fb11bap-473, 0.0,
     0.0, 0x1.afcb13b9fdb7p-217, 0x1.95337c72a2816p-944, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87aeaea00c88ep-671, 0.0, 0.0, 0.0, 0x1.f84e03d6d73ddp-682, 0.0,
     0x1.e0a6bf1c7a3bp-775, 0x1.a4f26e5c0e81p-73, 0.0, 0.0, 0x1.3ac2c7c7cf8eep-691,
     0x1.507885b3f037dp-120, 0x1.cbbd1df4c63fep-418, 0.0, 0x1.b06f28ab73bffp-442,
     0x1.059119300dafap-681, 0x1.38646886a3dd1p-294, 0x1.ff2cfd13767c7p-805,
     0x1.a78bc80ab855dp-418, 0x1.81c6ccbf58efp-33, 0x1.e36a9e14edfebp-470,
     0x1.f315b941d8572p-818, 0.0, 0x1.5ddd1774e2972p-387, 0x1.4052ccda39f5ap-883, 0.0,
     0.0, 0.0, 0x1.50218d2261ed3p-255, 0x1.fe9d244dc5d06p-447, 0x1.895eb5c05a5a3p-972,
     0x1.8475e7635b302p-948, 0.0, 0x1.0197002dd553ep-620, 0.0, 0.0,
     0x1.b16ddf1fced72p-962, 0.0, 0.0, 0x1.f71abf07d70edp-1007,
     0x1.5f03922fe5245p-356, 0x1.cf6dd899b76d6p-754, 0.0, 0x1.8f84e4b6f3378p-239,
     0x1.03db359fab769p-790, 0.0, 0.0, 0x1.eec8a69ade11ep-445, 0.0,
     0x1.05e6062ac2121p-994, 0.0, 0.0, 0.0, 0x1.16bca46d00811p-805,
     0x1.867fb32c3953ep-690, 0.0, 0x1.b42e29a2f52ap-582, 0.0, 0x1.6f285fee7fa4ap-420,
     0x1.a639e613c8569p-634, 0x1.5b3626fda315ep-649, 0x1.cfa8ea73fc314p-202, 0.0,
     0x1.9cc52ac328a0bp-288, 0x1.fc8cd5061750cp-848, 0x1.95c220bd7437ep-606, 0.0,
     0x1.68a10b851cd25p-440, 0x1.e9bea8643fc5dp-60, 0.0, 0x1.b80446414ac48p-736, 0.0,
     0.0, 0x1.c1bfeb2b9a1d1p-703, 0.0, 0x1.4bddc358f1678p-956, 0.0, 0.0,
     0x1.66240199a4684p-69, 0.0, 0.0, 0x1.217d130db3873p-759, 0x1.7afdf3ddaa0f4p-234,
     0x1.ecb3b7be6a1f2p-705, 0x1.8f57a7858a8aap-499, 0x1.c5365b0dbcc13p-247,
     0x1.c7a3dfa17aa7dp-669, 0x1.c1e1c9e716aa9p-240, 0.0, 0.0, 0x1.38a658b4aa0e8p-488,
     0.0, 0.0, 0.0, 0x1.22fe9c969e158p-536, 0.0, 0x1.43477123cc522p-594, 0.0,
     0x1.efb7ac730f14dp-671, 0x1.515b42aed831ap-554, 0x1.79f408c2361a1p-982,
     0x1.71553149d1194p-143, 0x1.0805b4fa497fep-429, 0.0, 0x1.a71ceff4039ddp-188, 0.0,
     0x1.73f7c7f7e1315p-368, 0.0, 0x1.2fb919d233563p-4, 0.0, 0x1.0b3ff090ab468p-791,
     0x1.b2d9092105d74p-481, 0x1.04eb75e6417bp-722, 0x1.df40f94beac99p-456, 0.0,
     0x1.9b4a7781c315fp-497, 0.0, 0x1.c54607a0dd787p-951, 0.0, 0x1.4467aad049ce4p-877,
     0.0, 0.0, 0x1.890dceeef6fdp-1014, 0x1.7ee8ece774908p-108, 0x1.4904131e2e041p-818,
     0.0, 0.0, 0.0, 0.0, 0x1.0216a61da3a22p-465, 0x1.85a5724786926p-871, 0.0, 0.0,
     0x1.9af53d48c5223p-99, 0.0, 0x1.53f19b0e911aap-276, 0x1.939e4ee464b83p-642, 0.0,
     0.0, 0.0, 0x1.cd756e3ccb1aep-374, 0.0, 0.0, 0x1.fddcae4d3c4e2p-20,
     0x1.818088ec60226p-648, 0x1.19ad7a88ee2a8p-704, 0x1.1ed18893f9e2dp-223, 0.0, 0.0,
     0x1.3929ea2ccc951p-762, 0x1.224f0e5cb2432p-557, 0x1.3986b7ec1a5f9p-647,
     0x1.827ca20419509p-256, 0.0, 0x1.550d9a6e7f75bp-66, 0.0, 0x1.b6b6311862c55p-947,
     0.0, 0.0, 0x1.c39187db788a4p-168, 0.0, 0.0, 0x1.6158a187d79edp-510,
     0x1.f15e146d8d618p-261, 0.0, 0x1.54f5c81eb0307p-503, 0.0, 0x1.f7190012514d5p-290,
     0x1.42a652b4a83d3p-972, 0x1.4688aadf5a89fp-139, 0x1.ccba5caaa0783p-367, 0.0,
     0x1.f9685bc7997f4p-744, 0.0, 0x1.b4d7bea92c165p-940, 0x1.68f586614bf7bp-262,
     0x1.217c3d40c2e91p-799, 0x1.8a8008f269b8p-617, 0.0, 0x1.684c7c36567d4p-235, 0.0,
     0.0, 0x1.738d942862cd7p-153, 0x1.0654342f5cdc2p-935, 0x1.59fba6bb22173p-627,
     0x1.2f75e73378bfap-247, 0x1.15f083891fa92p-878, 0.0, 0.0, 0x1.ecbe5be4860cbp-138,
     0x1.a478b149cd15bp-232, 0x1.331d18c7e215dp-393, 0x1.c29c7680ea886p-332, 0.0, 0.0,
     0.0, 0x1.d198eabc23484p-808, 0.0, 0x1.1b41639b02e7ep-395, 0.0, 0.0,
     0x1.2672d2df980fdp-190, 0x1.c40cc7a937f5cp-919, 0.0, 0x1.827f0a17f7194p-555,
     0x1.5149538a18deep-439, 0x1.a0eccb2529b17p-950, 0.0, 0.0, 0x1.5944de60d2784p-437,
     0.0, 0.0, 0x1.58388ffd5704dp-797, 0.0, 0x1.798eec60e5d6ep-366,
     0x1.93de341c1cd81p-114, 0.0, 0x1.30d2a960c1551p-215, 0.0, 0x1.5c865ff719f49p-383,
     0x1.7734ed44385b6p-39, 0x1.3030a5c4c5e92p-151, 0x1.d7f99ba15f0cep-935,
     0x1.97d18860b499ap-292, 0.0, 0x1.4c2c4ad8eccdap-304, 0.0, 0.0, 0.0,
     0x1.36f71dd2494d9p-305, 0.0, 0.0, 0x1.58fffd51373fcp-924, 0x1.875aa2ac852ecp-18,
     0.0, 0.0, 0x1.a4154e728d779p-621, 0x1.b6c9b64eae2b5p-1005, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f926febd3185bp-549, 0x1.a797261032dcbp-340, 0.0, 0x1.0a0a468f67602p-833,
     0x1.db0ebf72f0b6bp-13, 0x1.65d8e95ba3467p-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7a32d738250eap-956, 0.0, 0x1.90100fb63c33bp-944, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20366f7e20227p-888, 0.0, 0x1.e4c891fd0fbf6p-959, 0.0, 0.0,
     0x1.8bce154b640bp-457, 0.0, 0x1.85e01b1041ae7p-927, 0x1.83123e51bbb28p-505, 0.0,
     0.0, 0.0, 0x1.bc90a6ddc01c7p-154, 0x1.28c26ad2a5ac5p-82, 0.0, 0.0, 0.0, 0.0,
     0x1.19e08b744b554p-128, 0.0, 0.0, 0x1.9b69ad37cd2c3p-504, 0.0, 0.0, 0.0,
     0x1.9200bf1273dfcp-434, 0.0, 0x1.af5e8b97b8c11p-835, 0x1.7f66d62a8140ep-382, 0.0,
     0x1.93089b6550c76p-852, 0x1.04f4571b8d581p-94, 0x1.f830867089514p-853, 0.0,
     0x1.b19d5c08279ap-178, 0.0, 0x1.6ac2d459271c9p-559, 0.0, 0.0,
     0x1.f18bf39f1bc12p-393, 0x1.d14528ae86729p-409, 0.0, 0.0, 0.0, 0.0,
     0x1.8f452244f4be2p-956, 0x1.77d72e4f42749p-554, 0x1.69bbdcbaf952p-894,
     0x1.ccd6bfef45a79p-464, 0.0, 0.0, 0x1.f8f1180f90421p-904, 0.0,
     0x1.60ec1efc4b193p-561, 0.0, 0.0, 0.0, 0x1.cf704eaaed92cp-913, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8cebe59a02706p-849, 0.0, 0x1.7cfd793242136p-89,
     0x1.5f681574b495fp-762, 0.0, 0x1.cb7e2eedcce09p-598, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0fa39c65fb2e1p-610, 0.0, 0x1.9659f87decdap-838, 0x1.f6c5f0126ffcfp-344, 0.0,
     0.0, 0x1.7fa6caaff7cd8p-35, 0.0, 0.0, 0.0, 0x1.424e8b3a52c6bp-427,
     0x1.0ffb2e1bbb155p-728, 0.0, 0x1.b6e4180682e93p-90, 0.0, 0x1.10a477f04a3aap-847,
     0x1.a2644b618430cp-623, 0.0, 0.0, 0.0, 0.0, 0x1.03c8b3bab0cbbp-144, 0.0, 0.0,
     0.0, 0.0, 0x1.d2ad7a07ee643p-149, 0x1.39266731d7349p-870, 0x1.d1be16e677113p-173,
     0x1.179c6cfb31125p-627, 0x1.402468431d0fcp-408, 0.0, 0.0, 0x1.81990962efca8p-254,
     0x1.3b40a9843e489p-246, 0.0, 0x1.db79ae74fba17p-233, 0x1.0361595872e8p-247,
     0x1.b5298dabf341cp-357, 0x1.9975392d3bcdap-696, 0.0, 0x1.fd4e03d06bcf2p-6,
     0x1.737c0a3ee1232p-227, 0x1.1a37e069eee6p-983, 0.0, 0x1.eabfaef95cb1ap-300,
     0x1.cb034fa1fca73p-988, 0.0, 0.0, 0x1.31e8748faa451p-987, 0.0, 0.0, 0.0,
     0x1.8da7a795d88d1p-215, 0.0, 0x1.35b59a9643ab6p-33, 0.0, 0x1.ad5a676f9c3f2p-1010,
     0x1.b7c25c7b2628fp-825, 0x1.f096c4a304bcdp-784, 0.0, 0x1.4786835a80579p-651,
     0x1.5f3f7bd1bf4ep-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40e438594a62p-103,
     0.0, 0.0, 0x1.af5e247378e1bp-597, 0.0, 0.0, 0x1.7280633747137p-869,
     0x1.d6c3dab7ebf5fp-531, 0.0, 0x1.d5ca7eb70b9a4p-885, 0x1.3b70fc0f6c596p-673, 0.0,
     0.0, 0.0, 0.0, 0x1.e4768bd7dc46fp-593, 0.0, 0.0, 0.0, 0.0,
     0x1.b4ee6880e5a9ep-521, 0.0, 0.0, 0x1.a251f8d433888p-887, 0x1.88a256e56ae81p-963,
     0x1.aeeb3b69fef53p-288, 0.0, 0x1.251c618b94164p-175, 0.0, 0.0,
     0x1.85bb3314d2e4ep-181, 0x1.253b29656fd5bp-731, 0x1.33a2dc6bc4eedp-634, 0.0, 0.0,
     0x1.e1d55a76877fdp-731, 0x1.2de3f6bf78fa2p-400, 0.0, 0.0, 0x1.d39bbd91a4883p-240,
     0.0, 0x1.8348df72ca2ccp-166, 0.0, 0x1.d10bc444e7397p-229, 0.0,
     0x1.767abc2684af3p-293, 0.0, 0.0, 0.0, 0x1.66d36464fa588p-588, 0.0,
     0x1.f9883f8b7809fp-251, 0x1.15efa5b7d81a4p-753, 0x1.da914ba8666a8p-803, 0.0,
     0x1.00c69f737c3dp-229, 0x1.e2db54fc5fc3fp-442, 0.0, 0.0, 0x1.2e3f3d93d63ddp-722,
     0x1.1f1c943c57049p-102, 0x1.a8822ec5c0925p-772, 0.0, 0.0, 0.0,
     0x1.9dc0868e17e5cp-215, 0x1.36ced43fa75f3p-15, 0x1.83d4fdb9bbd8fp-855,
     0x1.c6ddd13af76d1p-430, 0x1.2687425bb8ea5p-1012, 0.0, 0x1.6aff5b8e1199bp-1006,
     0.0, 0x1.baec696f973dbp-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e23c6aaafadp-990, 0.0,
     0x1.a227846f9cd34p-753, 0.0, 0.0, 0.0, 0x1.6b9aef6aaa939p-79, 0.0, 0.0, 0.0,
     0x1.100aa35a31e09p-687, 0x1.627914411e3c6p-720, 0.0, 0.0, 0.0, 0.0,
     0x1.0937c3a8f0f8p-947, 0x1.63d79e3959cd6p-655, 0.0, 0x1.e98b8a0c31ae9p-970,
     0x1.bb6d172dcee59p-991, 0x1.f05877215a8a7p-34, 0.0, 0x1.f35b9cb32adep-559, 0.0,
     0.0, 0x1.7e26e80e5fb1ap-480, 0x1.91aed7f30e03ep-149, 0x1.1a0d2d348bf6dp-835,
     0x1.b9f57acb6704cp-795, 0.0, 0.0, 0.0, 0x1.d57235a9a212dp-215, 0.0,
     0x1.619ae78b3856fp-566, 0.0, 0.0, 0.0, 0.0, 0x1.17bcc8a4aedcfp-849,
     0x1.2d0784dd05542p-729, 0.0, 0.0, 0.0, 0x1.be9255d742f5cp-776, 0.0,
     0x1.2a4466ea7eb44p-104, 0x1.39b2080ce4274p-493, 0x1.75e3c0c4f9e86p-970, 0.0,
     0x1.521708d080045p-460, 0x1.cf242dcb8a12ep-860, 0x1.95cd3751c7e57p-228, 0.0, 0.0,
     0x1.329fc3d53351ep-622, 0x1.c166d790ac0a2p-957, 0.0, 0.0, 0x1.ca0ea2e4c29f9p-296,
     0x1.e019577f49e3ep-854, 0.0, 0x1.2792cb3a299aep-905, 0x1.5a686900c9fe5p-530, 0.0,
     0x1.da70d9e937479p-901, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c82b2bdc9be62p-92, 0x1.15d6097ceec74p-228, 0x1.3e03315dca81p-137, 0.0,
     0x1.ee6b0af6b94c3p-930, 0.0, 0x1.e6aa9a8eaf96dp-706, 0x1.2118e813486bfp-4, 0.0,
     0.0, 0x1.01741a7884307p-985, 0.0, 0x1.dd30ebeebd3f3p-723, 0x1.3281b9027f2c9p-272,
     0x1.6a3e8b6d8dcbfp-494, 0x1.d8d6d7f10353ep-956, 0x1.0a82f8d63eb63p-481, 0.0,
     0x1.9125339be0fc1p-719, 0x1.c49801f4b1374p-470, 0x1.9bf3f031dd257p-516,
     0x1.26e7a111dba23p-632, 0.0, 0x1.864ea8005735ap-411, 0.0, 0x1.8dc8352eae658p-470,
     0x1.715857ebf3483p-790, 0x1.081f0e8fe740cp-108, 0x1.bb0931b3c5cdep-809, 0.0,
     0x1.e26df02598362p-231, 0x1.0db33f36a3c77p-233, 0x1.1a2da7ae40a07p-589, 0.0, 0.0,
     0.0, 0x1.ffb626317541cp-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.238b85f458d33p-8, 0.0,
     0x1.636671dac314fp-63, 0x1.917f703c669f3p-256, 0.0, 0x1.f875742d73f3ep-974, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fa0dcf8e4f724p-941, 0.0, 0x1.4d4d9e6c2cf9cp-923, 0.0,
     0x1.fff9bd5e2c7adp-984, 0x1.7495f12a02bdep-488, 0x1.bec50898713c1p-115, 0.0,
     0x1.643e3a97232dap-913, 0x1.8e5ebae485bbdp-132, 0.0, 0x1.94f0af5065b5cp-97,
     0x1.90e979a1a7361p-936, 0.0, 0.0, 0x1.0f6405ef9a1b9p-526, 0.0,
     0x1.a5359a53c815bp-788, 0.0, 0x1.80d99eef4c895p-905, 0x1.5289ac14ee622p-174,
     0x1.18fb676ca344cp-738, 0x1.fbd2a5f3474c1p-828, 0.0, 0x1.8b6730ace3892p-775, 0.0,
     0.0, 0.0, 0x1.23cbb729bc2adp-710, 0.0, 0x1.e141b4a8dda43p-514, 0.0, 0.0, 0.0,
     0x1.a4fcf562dd3f2p-100, 0.0, 0x1.3c4468357c8cdp-890, 0x1.fe2a11c0302dbp-61,
     0x1.93796cf6c729dp-233, 0.0, 0x1.9eb77adcb9b54p-544, 0x1.faadf25df3f5cp-531,
     0x1.48bbe349a92a9p-589, 0x1.de6b6e83df344p-727, 0x1.a66341b982a7ap-831,
     0x1.405b869a89d7cp-235, 0x1.5428864df337ep-924, 0.0, 0.0, 0.0,
     0x1.80b36d5cd9427p-458, 0.0, 0.0, 0.0, 0x1.2bd93e5070c65p-229, 0.0, 0.0,
     0x1.2eaf1976a344cp-299, 0.0, 0.0, 0x1.d3f17ec2fca52p-773, 0x1.42d37bd21e435p-112,
     0x1.062ce64b91c05p-5, 0.0, 0x1.ff2dff8d1d5ecp-945, 0x1.47887e80b20a3p-964, 0.0,
     0x1.94413fdc1491dp-237, 0x1.c5fd0234ee3f7p-290, 0.0, 0x1.23306c0e46bfbp-874,
     0x1.cd705d06a0796p-658, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d94c06a3033fp-72, 0.0, 0.0,
     0x1.2957d9b9fae21p-479, 0x1.0c82bc2a8c034p-337, 0.0, 0.0, 0x1.4079353c863e8p-629,
     0.0, 0x1.186204aa560d6p-422, 0x1.c14351f17e781p-250, 0.0, 0.0, 0.0, 0.0,
     0x1.9fa9d0ac04718p-553, 0x1.09b5e5964aee3p-455, 0x1.ae37e24740cffp-817, 0.0, 0.0,
     0.0, 0.0, 0x1.ad11da81876edp-710, 0x1.edf11ce90657cp-294, 0.0,
     0x1.c600bbaace30bp-230, 0x1.9cc13ca2cfae8p-450, 0x1.59565214c4c6dp-130, 0.0,
     0x1.e1375fa908808p-941, 0.0, 0.0, 0x1.93e6c52f184f6p-599, 0x1.1e80bc4463e4ep-715,
     0x1.d001714c8f86bp-729, 0.0, 0x1.d61dfb1ea65f1p-26, 0.0, 0.0,
     0x1.4a017bfce8937p-368, 0x1.0f2a2d429fc68p-11, 0x1.f48a4b6d06e47p-537,
     0x1.dad122076abe8p-85, 0x1.e2d00d00dff74p-323, 0.0, 0x1.040cf0fd242bdp-52,
     0x1.e7e6ed6d1807dp-981, 0x1.276b4b9377d3ap-597, 0x1.8361397dcfc5fp-340, 0.0,
     0x1.b4eb4e6c9e9fdp-924, 0.0, 0x1.a966e816dcd9ap-485, 0.0, 0.0,
     0x1.ac11a1ef86a23p-590, 0.0, 0.0, 0.0, 0x1.4db71d9673458p-441,
     0x1.f8a2b90288554p-157, 0.0, 0x1.9a297d8170afep-873, 0x1.e8982469b3d2ap-623, 0.0,
     0x1.034dd69b72365p-930, 0.0, 0.0, 0x1.524c7315488aep-715, 0x1.fb5ece71f6d73p-151,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97aeb0d26b9cdp-167, 0.0, 0x1.54e8e19406a81p-18, 0.0,
     0x1.30d85660d8f25p-743, 0.0, 0x1.9d4a299f8c206p-693, 0x1.d36a119cd5a0dp-455,
     0x1.071dcf9bf99c2p-200, 0x1.e32cf3d65087bp-822, 0x1.6957c4bea0db4p-353,
     0x1.13f82ebfd43c7p-190, 0.0, 0x1.7c836fb0944afp-754, 0.0, 0x1.397d9f592a0e3p-173,
     0x1.317998b13c8f9p-352, 0.0, 0.0, 0x1.ef5d90bb2594ep-47, 0.0, 0.0,
     0x1.9c7836cbb4a6p-195, 0.0, 0x1.a2b9a28be0a5bp-966, 0x1.3829c17abacc5p-716, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4acd67da4f453p-146,
     0x1.a687b4af6a8f7p-921, 0x1.a5a3c7bb02ab6p-60, 0x1.58a9385eac5b1p-178,
     0x1.97298899b5886p-709, 0x1.27a4a4b2daf92p-119, 0.0, 0.0, 0.0, 0.0,
     0x1.39bb77aaecd24p-823, 0.0, 0x1.a7041db31d5dep-970, 0x1.6508a4c56551dp-378,
     0x1.c4f8f6c7bc304p-897, 0x1.7bca75e808a1fp-509, 0.0, 0.0, 0x1.fe5d6ce2763c2p-151,
     0x1.ca5f0323918fap-449, 0x1.c052c98658408p-286, 0x1.c2888dc2f6759p-575,
     0x1.28afe7af7f454p-105, 0.0, 0x1.bb2d8d6200762p-544, 0x1.d7ab855bf3943p-460, 0.0,
     0x1.abd9807c9086bp-801, 0.0, 0x1.fd348806df07dp-978, 0x1.04b98448a3389p-729
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosd2_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd2_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
