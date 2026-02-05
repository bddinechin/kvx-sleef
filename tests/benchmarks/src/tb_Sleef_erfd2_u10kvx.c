/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfd2_u10kvx.c --function Sleef_erfd2_u10kvx --headers \
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
     0.0, 0x1.ae5bef35ba239p-562, 0.0, 0.0, 0x1.52c406824e2dep-90,
     0x1.46812a08cd7adp-56, 0x1.bdf56ef0131e1p-783, 0x1.6d78b26b4114cp-989,
     0x1.097ea09cda313p-802, 0.0, 0x1.aa0e93e3f3e18p-105, 0.0, 0x1.4242e96d42045p-692,
     0.0, 0.0, 0x1.b6ebb5f831451p-79, 0x1.e0f3ecf0c200bp-545, 0x1.3703a015acc3bp-747,
     0.0, 0x1.527a874905386p-775, 0.0, 0x1.6c90a2202628fp-693, 0.0, 0.0,
     0x1.19306ed599f8ap-441, 0.0, 0.0, 0.0, 0x1.1ef9c7e9b85c7p-773, 0.0,
     0x1.f2f7b63db4accp-75, 0x1.675202bdca8b2p-438, 0x1.434cb25d2d5c3p-917, 0.0,
     0x1.fd48b4a33f89fp-579, 0x1.3c5b161578c5p-427, 0x1.47e7a848514b3p-718, 0.0,
     0x1.5e31660fb9032p-638, 0x1.c2d4f2c6a0f3bp-672, 0.0, 0.0, 0.0,
     0x1.02d08749560f7p-502, 0x1.8471134e831dbp-265, 0x1.a8d0ec6bb5aa4p-932, 0.0,
     0x1.6076fe2d7a784p-808, 0x1.04e70bc3db064p-376, 0x1.8aa29e8d6cb32p-11,
     0x1.2b39605e9495ep-709, 0x1.edf9869ada4d7p-460, 0.0, 0.0, 0x1.3b23b2b6886ep-170,
     0.0, 0x1.8c0e7da70d379p-302, 0x1.34bbb99acd15ap-743, 0.0, 0.0,
     0x1.64871259a2941p-82, 0x1.50c42e4d101b9p-477, 0x1.35c8cd22b65c8p-340, 0.0,
     0x1.45b64a1a1f309p-111, 0x1.18f1fc4b02833p-889, 0x1.fa14d8be75249p-722,
     0x1.6708e1df349e7p-393, 0x1.739f4ca9c0a4dp-543, 0x1.562770b39b56fp-890, 0.0,
     0x1.3626db344e743p-984, 0.0, 0x1.b1d4004b38e49p-870, 0x1.45814beda7178p-705, 0.0,
     0.0, 0.0, 0x1.aedb2a115dd91p-693, 0x1.0d243b9d21885p-600, 0x1.d0a94c95e445ep-72,
     0.0, 0.0, 0.0, 0x1.fd9931141c392p-579, 0.0, 0.0, 0.0, 0x1.56bb787f533d1p-664,
     0x1.66f5814098d7ap-539, 0.0, 0.0, 0.0, 0x1.2a0a73261e675p-909, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.582108aa5aeaep-555, 0.0, 0.0, 0x1.b8cedbc28b37cp-844,
     0x1.56ff2e06575b7p-648, 0x1.2dc6285cb389ep-903, 0x1.65be027e6f39ap-853, 0.0,
     0x1.b55a94571637fp-610, 0x1.7d188a5a75b33p-275, 0x1.e96b8876cd5c1p-638, 0.0,
     0x1.de5670fd84e3p-879, 0x1.cc383a674fdedp-278, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12ccfcd14022cp-628, 0x1.611062b9dc96ap-753, 0.0, 0x1.41bcba8cf01bfp-260, 0.0,
     0x1.85686d0738e31p-1004, 0.0, 0.0, 0.0, 0x1.dcfbbb43dd554p-987, 0.0, 0.0, 0.0,
     0x1.211efbcd9d9afp-145, 0.0, 0x1.101a4e799cdb9p-395, 0x1.0e3f9db24111cp-651,
     0x1.b9b82c788d53ap-448, 0.0, 0.0, 0.0, 0x1.083b240649952p-93,
     0x1.482a01622d335p-728, 0.0, 0x1.5215792fc60dfp-939, 0x1.e598c52aa007ap-564,
     0x1.d45a18a2efa3dp-234, 0x1.75806978fbe51p-161, 0x1.65c91649b73afp-837, 0.0, 0.0,
     0.0, 0x1.7f9285933161ap-759, 0x1.91025fc556539p-767, 0.0, 0x1.56b931afe578dp-810,
     0x1.c4484e439313dp-989, 0.0, 0x1.225a7640f41f8p-136, 0x1.d7db527b00e88p-459,
     0x1.eb383bddb36b9p-944, 0.0, 0x1.d4d69bb8f588bp-723, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.51da7f95eb9f4p-698, 0x1.5c589fe3ada04p-364,
     0x1.fa6e5055b5ccdp-598, 0.0, 0.0, 0x1.bcf2ed85561abp-327, 0.0, 0.0, 0.0,
     0x1.fd4cefc346ff6p-1012, 0.0, 0x1.27bc5245e9288p-268, 0.0,
     0x1.5ec5d0012a012p-329, 0x1.fbba2fc39d853p-849, 0x1.ef541e65503d4p-559, 0.0,
     0x1.1d069dd746283p-478, 0x1.2b5fa24447decp-114, 0.0, 0x1.9bf9966f2122ep-841,
     0x1.4e38aefb10148p-637, 0.0, 0.0, 0.0, 0.0, 0x1.b8cb23cc2c27ep-958, 0.0, 0.0,
     0x1.33419a2c5aac6p-170, 0.0, 0x1.f4c00550ee1c9p-171, 0x1.a09bc028f8457p-667,
     0x1.e1111002b7921p-20, 0.0, 0.0, 0x1.af8ad5886bb6fp-663, 0x1.e7f22106104a3p-678,
     0x1.3193869dfd69p-240, 0.0, 0x1.796da0ae9e323p-349, 0x1.f97f4a67d6bb7p-991, 0.0,
     0x1.94878bd4ed7d6p-359, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c18c331fe488p-685,
     0x1.918fc3a811bfap-432, 0x1.7122919e63dcap-969, 0.0, 0x1.296c1491369efp-209, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bc5bcefeaaae2p-385, 0x1.8c18ddd63c12cp-764, 0.0,
     0x1.36b1b170f55d7p-200, 0.0, 0x1.cd469dbd1751cp-843, 0.0, 0.0,
     0x1.5a156c46c8b69p-983, 0.0, 0.0, 0.0, 0x1.425e2a2096eb7p-412, 0.0,
     0x1.9fd4a158d767bp-544, 0x1.2e27dcb2319ap-831, 0x1.ad6a5cef82047p-545,
     0x1.e984b4d35f77bp-360, 0x1.07dad6a54763p-533, 0.0, 0.0, 0.0,
     0x1.593f758d6346fp-836, 0x1.32048b3d2c709p-507, 0x1.5c2b71b07446fp-892,
     0x1.5255f14cf8d5p-388, 0x1.e87f062b8258dp-522, 0x1.24fc45825835p-527, 0.0,
     0x1.c8319b9bae976p-514, 0.0, 0x1.11898e0af6c1ep-112, 0.0, 0x1.8b55626b012ep-122,
     0.0, 0x1.0764ac4971b15p-231, 0.0, 0x1.6fd4ccdffcbdcp-788, 0.0,
     0x1.6c9f5e4865ec4p-39, 0.0, 0.0, 0.0, 0x1.e44d7b763b89bp-618, 0.0,
     0x1.04c8d4fa88a1cp-363, 0x1.155cd7ca40acbp-937, 0x1.ba7ef5fa075fbp-331, 0.0, 0.0,
     0x1.55f1a639acc1p-397, 0.0, 0.0, 0.0, 0.0, 0x1.f5a5fff7d7a19p-226,
     0x1.6499524e68cbcp-224, 0.0, 0x1.3e543333cce45p-1017, 0.0,
     0x1.c1a5ec68487c9p-411, 0.0, 0.0, 0.0, 0.0, 0x1.3b3973cf3d5a4p-107,
     0x1.fb50554714e83p-397, 0.0, 0.0, 0x1.dfbfaccfe8357p-89, 0.0, 0.0,
     0x1.1b1db679eb65ap-926, 0.0, 0.0, 0.0, 0.0, 0x1.e7605467e72ap-358,
     0x1.f6b57d175f29fp-465, 0x1.a0ac3ddf7f75ep-823, 0x1.4634f964ec9cp-71, 0.0, 0.0,
     0.0, 0x1.c735d88071078p-83, 0.0, 0.0, 0x1.1549d5e1e7084p-814, 0.0, 0.0,
     0x1.04558e561113ap-40, 0.0, 0x1.cc37492775fdap-998, 0.0, 0x1.d81a947f9c357p-892,
     0.0, 0.0, 0.0, 0.0, 0x1.bb149033fbd2fp-941, 0.0, 0x1.79fd5d99d0ebp-1017, 0.0,
     0.0, 0x1.e0620cf7eaeb8p-591, 0.0, 0x1.c2c8d39f63611p-851, 0.0,
     0x1.326a587e6eb56p-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f7e4a68f50bdp-573, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.52e63bdbdd1bdp-943, 0x1.9a0075f67c7f2p-517,
     0x1.757860bf7623fp-19, 0.0, 0x1.29100a284c39p-891, 0x1.38b102548be61p-771,
     0x1.30b481c6f9fb7p-712, 0x1.cb483c3644eddp-127, 0.0, 0.0, 0x1.8d54c90ca91bap-598,
     0.0, 0.0, 0.0, 0.0, 0x1.44b2364511ea3p-391, 0.0, 0.0, 0x1.793239d7c2eccp-894,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73f5e415f99e3p-178, 0.0, 0x1.ac94573914f78p-443,
     0x1.e7c5827e6a3b9p-348, 0x1.78bb104a8a2a7p-405, 0x1.4457f7e5d906ep-432,
     0x1.f895cabc89628p-114, 0.0, 0x1.4aa85065c2642p-188, 0.0, 0.0,
     0x1.867c3c09fa6dbp-770, 0x1.b4a2e6d305caep-764, 0x1.cd824b5a7cf52p-139,
     0x1.e61ba9c24c11ap-603, 0x1.09601e100ae4dp-718, 0.0, 0x1.090114390f4c6p-991,
     0x1.c751a5908f08ap-159, 0.0, 0.0, 0x1.716d4a896eca6p-589, 0x1.b7d4a82af0566p-527,
     0.0, 0x1.efed325ec71eap-864, 0x1.f36b51064d41fp-1014, 0x1.5596b66c181e7p-479,
     0x1.c1ee77790d0f2p-29, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2902275214826p-336, 0.0,
     0x1.1cf9363ddb126p-221, 0x1.1932668408225p-798, 0.0, 0x1.370defae87573p-629,
     0x1.ff0e3c38d4efep-648, 0x1.070536003105cp-715, 0.0, 0x1.ef8608db2d30bp-189,
     0x1.1f59937dccf8dp-162, 0.0, 0x1.d83370d26a7f6p-796, 0x1.45cbfb7e120bp-41,
     0x1.5093fe4791cd9p-272, 0.0, 0.0, 0x1.dd8f35a5e5ec4p-341, 0.0, 0.0,
     0x1.100208e60fe07p-690, 0x1.702f563c387f3p-842, 0x1.186d2ee6f5706p-213, 0.0,
     0x1.dc6764af8a285p-349, 0x1.5ab4233e31c1cp-271, 0.0, 0.0, 0x1.fba458aac7ccdp-181,
     0.0, 0x1.690580ef6124cp-153, 0.0, 0.0, 0x1.ba413aef4e417p-467,
     0x1.b73c3a3c65acfp-352, 0x1.9966bee736f84p-292, 0x1.0932ed3bc10b8p-603,
     0x1.e489df60f93cdp-463, 0x1.40bfba3a510eep-752, 0.0, 0x1.404e0ae40540cp-789,
     0x1.ec5a112c2e887p-134, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd816224cb7cdp-88,
     0x1.6b5bf7cb8c695p-657, 0.0, 0.0, 0x1.3ad8743360b05p-352, 0x1.b5c34abbfd342p-52,
     0x1.5162d4bae6783p-283, 0x1.be1f8287cb744p-401, 0.0, 0x1.e3542f1079238p-872,
     0x1.9d6ef79ea380fp-594, 0x1.d0d7f7ead7284p-827, 0.0, 0x1.a9cb62eca5771p-567, 0.0,
     0.0, 0.0, 0x1.ad9836dfc0ecp-483, 0x1.f79e37375638cp-817, 0.0,
     0x1.3762231c7af66p-737, 0.0, 0x1.332f17465f4c4p-459, 0.0, 0x1.9fe93a40d878ep-884,
     0x1.0e1d213e874e4p-253, 0.0, 0x1.f4c9e2593be76p-21, 0x1.a9dc63636ad1ep-785,
     0x1.174ae96245f84p-740, 0x1.9075636706a0cp-1013, 0.0, 0.0, 0.0, 0.0,
     0x1.f0f1c672781adp-219, 0x1.c2499bbc7571ep-15, 0.0, 0.0, 0.0,
     0x1.7a532033ab7b3p-611, 0.0, 0.0, 0x1.2fad47a037edp-324, 0.0, 0.0, 0.0, 0.0,
     0x1.8b22fe9122d9fp-823, 0x1.a997b5f9317a8p-390, 0x1.9f7e0cd8b59e7p-624, 0.0,
     0x1.522eb15123272p-536, 0.0, 0.0, 0x1.0e8c5bc9782bp-558, 0.0,
     0x1.9fb3792b6b9c1p-738, 0x1.afdf9b1d450ap-251, 0.0, 0x1.0b83ae51b0ea7p-811,
     0x1.3952bede1f088p-703, 0.0, 0.0, 0.0, 0x1.df35559098025p-264, 0.0,
     0x1.b63289f57104ep-583, 0x1.29fb1950ae161p-577, 0x1.5d940b75b2191p-507, 0.0, 0.0,
     0x1.f5937074f733p-937, 0.0, 0x1.10efc712e7ac8p-429, 0x1.541460713407bp-264, 0.0,
     0x1.d8fdb38725a22p-779, 0x1.d99fe58a4cd29p-480, 0.0, 0x1.7612abfb5bab9p-72,
     0x1.7ef23bc0b9457p-359, 0.0, 0.0, 0.0, 0.0, 0x1.2e7ea2350b17fp-897, 0.0,
     0x1.d1f7fe588b3c5p-947, 0x1.49cd12c43f2f4p-1021, 0x1.25acdc2cac039p-480,
     0x1.6ab2b3b63491bp-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4adb7aa7dc6bap-896, 0.0, 0.0, 0.0, 0x1.ef8972789cfdcp-861, 0.0,
     0x1.5400fe29fccaap-608, 0.0, 0x1.fcaa1fd0fe0ccp-822, 0x1.f54ca34d85b6ep-85, 0.0,
     0.0, 0x1.3ff31033d2581p-819, 0.0, 0x1.3514b96a120bbp-998, 0x1.51bdad6635232p-309,
     0.0, 0x1.e6ae73884e886p-830, 0x1.834193a293f76p-754, 0.0, 0.0,
     0x1.f4c93a17e5fd6p-109, 0.0, 0x1.f7e75c56aa00ap-831, 0x1.5c42ee24562dbp-453, 0.0,
     0x1.e050e84dfe4cep-589, 0.0, 0.0, 0.0, 0x1.ebeb53f667ab8p-51, 0.0, 0.0,
     0x1.de583069f34aap-139, 0x1.2ae22fd25fa8ep-66, 0.0, 0x1.61c686fbfc5dp-420,
     0x1.092e0677b52b5p-344, 0x1.d60c8828c32fep-997, 0.0, 0.0, 0.0, 0.0,
     0x1.bd2db985372ffp-449, 0.0, 0.0, 0.0, 0.0, 0x1.f2a1bd45d5dap-591,
     0x1.40bd116cf111dp-197, 0x1.5c0bb151c8de7p-664, 0.0, 0.0, 0x1.c2501e7b7cffbp-466,
     0x1.65b68cfc985dep-297, 0.0, 0.0, 0.0, 0x1.ba50943a37812p-719,
     0x1.fd828cce22ff3p-698, 0.0, 0.0, 0x1.e5f2967d3b5c1p-958, 0x1.d0c84eae2fcbcp-125,
     0.0, 0.0, 0x1.0dfbee69e27d8p-261, 0x1.4e5783d7646b4p-325, 0x1.fd87b2f46c68ap-877,
     0x1.51f7219ab5116p-85, 0.0, 0x1.7b9ed7a53c8b4p-271, 0x1.32ab54ee492e5p-183, 0.0,
     0x1.a12530bb0fc76p-65, 0.0, 0.0, 0x1.d8589654dfd42p-104, 0.0,
     0x1.877bc945c4346p-176, 0x1.902ef8bb2e526p-1, 0x1.7cb5dbd103011p-340, 0.0, 0.0,
     0.0, 0x1.d470d1c017bbp-168, 0x1.a176b45f0ac23p-348, 0.0, 0.0, 0.0, 0.0,
     0x1.75c4d8a4e0bbp-499, 0x1.4bf224c74c0bap-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e6890905bd23fp-726, 0.0, 0.0, 0.0, 0x1.c48b09dc49221p-657, 0.0, 0.0,
     0x1.1234cca7c606ap-482, 0x1.e7ee368db190dp-396, 0.0, 0x1.c6bfc2e23dc1ep-470,
     0x1.63ce2f6244d83p-272, 0.0, 0.0, 0.0, 0.0, 0x1.5e32bdb1a5965p-985, 0.0,
     0x1.9ca8911afd786p-184, 0.0, 0.0, 0.0, 0.0, 0x1.7a1f91f04c603p-47,
     0x1.f73913baf6a78p-161, 0.0, 0.0, 0x1.09e569e9722c9p-463, 0.0,
     0x1.37f2712f094b4p-358, 0.0, 0x1.ba8e78228e49bp-1022, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d26debdc051abp-657, 0.0, 0.0, 0.0, 0x1.1359d5de0c823p-688, 0.0,
     0x1.7778673b386e1p-1007, 0.0, 0.0, 0x1.36887f71104ebp-300,
     0x1.dada9da4ae4cep-767, 0.0, 0x1.8af0d303c072bp-1011, 0.0, 0.0, 0.0,
     0x1.38b364abc0a6bp-801, 0.0, 0x1.861f8ed1e334cp-175, 0.0, 0.0,
     0x1.86b394bf3bcdap-418, 0.0, 0.0, 0x1.8ad6725bb3df8p-304, 0.0,
     0x1.377be99461c5cp-863, 0.0, 0.0, 0x1.f88286c1dc945p-480, 0.0, 0.0, 0.0,
     0x1.5b7e1273a72acp-609, 0x1.2a5cb0b72236p-930, 0.0, 0.0, 0.0,
     0x1.c8f13bbb969dp-308, 0.0, 0x1.46a6389efd89p-534, 0.0, 0x1.47a07b89c19adp-338,
     0x1.e76a2cf010255p-196, 0.0, 0.0, 0.0, 0x1.56e7116f44ab9p-447, 0.0,
     0x1.e3ef956e6596fp-350, 0.0, 0.0, 0x1.515f8b7dd41efp-358, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0e03f6bb709a9p-22, 0.0, 0x1.80da54857565cp-340, 0x1.4a94b56942c0ep-679,
     0.0, 0.0, 0x1.58ea8e9b766ffp-571, 0.0, 0x1.84f4752620b6ep-302,
     0x1.b261a061d71b1p-71, 0.0, 0.0, 0.0, 0x1.7e7e102ece174p-982, 0.0,
     0x1.4b80ed45b44fcp-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94df05d455b5bp-964, 0.0, 0x1.f63fc7064293p-852, 0.0, 0x1.68c9827d21c23p-311,
     0x1.a7d0766e6923ep-1013, 0.0, 0x1.455602768ab04p-68, 0x1.b406e8f336affp-15,
     0x1.6e571b22318b9p-164, 0x1.c90104c2271eap-511, 0x1.a43ca30181965p-903, 0.0,
     0x1.b17b4b2058d98p-130, 0.0, 0.0, 0x1.4520e7b57d669p-556, 0x1.7534824cdcdp-144,
     0.0, 0x1.336d42bd08522p-842, 0x1.2a5537c8f4f03p-115, 0x1.24f9307385309p-473, 0.0,
     0.0, 0x1.e4ad99c6ea527p-370, 0.0, 0x1.4624ca8e1e829p-971, 0x1.cdaea3ee28cafp-680,
     0x1.e211f9afa50dp-510, 0.0, 0.0, 0x1.d5ecd4929fa8ap-751, 0.0,
     0x1.9b7d614b36504p-985, 0.0, 0.0, 0x1.6b1cd6837f646p-520, 0x1.cc9702851a838p-886,
     0.0, 0x1.bc3a1efbf2a86p-65, 0x1.fa3553bf063adp-999, 0.0, 0.0, 0.0, 0.0,
     0x1.c3f60704fa5d9p-106, 0x1.e35ea62ba3463p-254, 0x1.5d1eb76669539p-646,
     0x1.cdc85e85360d5p-773, 0x1.b86eb308c523cp-6, 0.0, 0.0, 0x1.c3f50b4e97a4p-550,
     0.0, 0x1.85aa5ff263abap-491, 0x1.556dd03839ad8p-493, 0x1.5f78bc6b379fcp-1000,
     0x1.8e3ac7f448974p-214, 0x1.2b8ce52861ba5p-165, 0.0, 0.0, 0.0,
     0x1.885f47864ebc2p-449, 0x1.82513faeb50b9p-784, 0.0, 0.0, 0x1.6957a611ff358p-715,
     0x1.b5fd4fd9b1ef4p-279, 0x1.155f6582ab1a3p-341, 0x1.0b483488ed2p-469,
     0x1.2c802e95918d1p-722, 0.0, 0x1.5bf5517db7b44p-718, 0.0, 0.0,
     0x1.7f4ec1b7b8918p-663, 0x1.d6fde67ca1f79p-759, 0x1.ed47c373b08ccp-150, 0.0, 0.0,
     0x1.98e7039ac6976p-943, 0x1.475766fb12997p-310, 0.0, 0.0, 0.0, 0.0,
     0x1.1e9761a6c998ap-362, 0.0, 0x1.ac4da0e60fa1dp-376, 0x1.00a23710a0b74p-108, 0.0,
     0x1.de1b17e747d3cp-627, 0.0, 0x1.b8388dd99f7e7p-579, 0.0, 0.0,
     0x1.05f7faee6e894p-988, 0.0, 0.0, 0.0, 0.0, 0x1.0d11ace484406p-23,
     0x1.604aef4867524p-691, 0.0, 0.0, 0x1.a491c0b098c6bp-663, 0.0,
     0x1.f7f76455033f5p-347, 0.0, 0.0, 0.0, 0x1.5993c7da842f2p-625, 0.0,
     0x1.6762f23ee5f2cp-594, 0x1.1dc9de4700a26p-801, 0.0, 0.0, 0x1.09513ef3f40bcp-26,
     0x1.90cff05267d81p-546, 0x1.1ed4b40efb1a9p-260, 0.0, 0x1.5d6a81e3bfc67p-245,
     0x1.49759d41380fep-504, 0.0, 0.0, 0x1.b927e45dcfeb1p-216, 0x1.b6feefb16c7ep-281,
     0.0, 0x1.a908df5424de1p-382, 0x1.e9ef9861f09c3p-47, 0.0, 0x1.c233e6b4cf88fp-205,
     0.0, 0.0, 0.0, 0x1.d552e949b7211p-104, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ff215763146ep-382, 0x1.036e0412fbaeep-615, 0x1.b73fa7f33e937p-996, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d2ffcda9060fp-681, 0x1.b57cf9acef691p-530,
     0.0, 0.0, 0.0, 0.0, 0x1.2e0a107f4343dp-747, 0.0, 0.0, 0x1.b9f7fb7bc1961p-932,
     0.0, 0x1.fd99507d9adf9p-190, 0x1.68adc9195634ap-138, 0x1.283d2885891c3p-70,
     0x1.5c1c75ef27e1ap-175, 0.0, 0x1.041bc089528c4p-486, 0x1.f14d2185dfefbp-384, 0.0,
     0.0, 0.0, 0x1.7c46449456b56p-693, 0x1.2a6283d0f367bp-467, 0x1.b5dc812fae3d3p-611,
     0.0, 0x1.b5baa93e553bfp-993, 0x1.561996d91cf59p-546, 0.0, 0.0, 0.0,
     0x1.667ed6ec5267ep-84, 0x1.a6e8ec3b7e804p-163, 0x1.6f1db14718c6dp-23, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.14616c472ff4ap-287, 0.0, 0x1.41a8afe886146p-451,
     0x1.6d3bfd25197a5p-395, 0.0, 0x1.7ff518ae7095cp-497, 0.0, 0.0, 0.0, 0.0,
     0x1.bbb18c2ffb202p-808, 0.0, 0.0, 0.0, 0x1.503be6a94ad3p-128, 0.0, 0.0, 0.0,
     0x1.d4599ba388652p-263, 0x1.e9a7df5153964p-50, 0.0, 0x1.11abb7f2f9963p-672,
     0x1.36095151b474ap-793, 0x1.f63fa80a2899cp-196, 0x1.bf85b713bc3bp-1000, 0.0, 0.0,
     0.0, 0x1.33427aa7d5ed5p-56, 0.0, 0x1.e211cf09cb93cp-972, 0x1.5971d73e55c05p-600,
     0.0, 0x1.99ce5958db33cp-231, 0x1.54ae497a289e8p-710, 0.0, 0x1.75a90845445bfp-804,
     0.0
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
            tmp1 = Sleef_erfd2_u10kvx(tmp0);
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
    printf("Sleef_erfd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_erfd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
