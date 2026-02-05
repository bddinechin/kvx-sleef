/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log2.c --function log2 --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.b7e90dc507f54p-59, 0.0, 0x1.7925424edf962p-780, 0x1.85b92ca79a322p-321,
     0x1.2c97a9e849097p-1020, 0x1.1b6f6e524b32bp-623, 0.0, 0.0, 0.0, 0.0,
     0x1.c7f9017f38dd7p-524, 0x1.f0cc032488fbap-605, 0x1.54973645b2bb4p-727,
     0x1.e8809a8c93c4ep-192, 0.0, 0x1.b496143c82b0fp-566, 0x1.d97e72cb90b2bp-836, 0.0,
     0x1.0682d72102f57p-694, 0x1.b5efe2e6ecf88p-434, 0x1.84e7835f7705fp-862, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.812463ae20051p-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bda29015d1517p-755, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9340f8d0e969fp-817, 0.0,
     0.0, 0x1.9ebf3a7a36b9ep-786, 0.0, 0x1.efca49aecc5bcp-150, 0x1.0753ae8b9cfddp-216,
     0x1.bce4336035c21p-299, 0x1.69d4c587683dfp-772, 0.0, 0x1.80dd0194fcb0fp-957,
     0x1.9239dcddf1beap-729, 0x1.991620d371c35p-374, 0.0, 0.0, 0x1.ed65a67f4a93ap-315,
     0x1.6cc9bca341e11p-630, 0x1.0d1d6a3a907b5p-889, 0.0, 0.0, 0x1.8fabd5d99ef84p-427,
     0x1.91d60f8b489cdp-799, 0.0, 0.0, 0x1.7d3087702d7dbp-97, 0.0, 0.0,
     0x1.82cf8b4bcb958p-795, 0.0, 0.0, 0.0, 0.0, 0x1.b319a5c2aa529p-400, 0.0,
     0x1.26715001ad298p-289, 0.0, 0.0, 0.0, 0.0, 0x1.da7dbe0a6cd25p-761,
     0x1.d1653ab715a02p-1000, 0.0, 0x1.7376c322bd8cep-92, 0.0, 0x1.559d03ccf79bp-818,
     0x1.e239b5147f5abp-991, 0.0, 0x1.404d82fb4dbbp-689, 0.0, 0x1.125a529c08eaap-77,
     0x1.13abca47e0649p-523, 0x1.86d09b68eff96p-1006, 0x1.4b6a41bc5f72p-223, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.909b7b6084bfp-913, 0.0, 0.0, 0x1.771f3caa94d4ep-782,
     0x1.4e9f0a1135d03p-906, 0x1.0ee862d18b263p-187, 0.0, 0x1.ce3bedfb55ce5p-217,
     0x1.3502dcc61d8f5p-895, 0x1.15ae66feefeb9p-700, 0x1.5b743ce6e230ap-328, 0.0,
     0x1.cf60766867204p-565, 0x1.13857ca518737p-405, 0x1.4ba05775908dcp-1008,
     0x1.d2baf06019027p-873, 0x1.3f3e0355b8113p-426, 0x1.49e167725994bp-763, 0.0,
     0x1.e33329dba6d6cp-381, 0x1.5fea1b8e9dc52p-43, 0.0, 0x1.0c9286d28fc4dp-449,
     0x1.97963350bf52cp-639, 0x1.2547e043c9423p-107, 0.0, 0x1.fd8902fb99e92p-75, 0.0,
     0x1.03da870a1dec3p-167, 0x1.9eb3cf9f68388p-925, 0.0, 0.0, 0.0, 0.0,
     0x1.8228d44af38cep-285, 0x1.08a8b91c5eec7p-771, 0.0, 0x1.59746a088dabfp-681, 0.0,
     0.0, 0.0, 0.0, 0x1.cea0bc634148cp-244, 0.0, 0.0, 0x1.81370a5317ae3p-625, 0.0,
     0x1.b03f11593f09fp-849, 0x1.fe523066a7d97p-886, 0.0, 0.0, 0.0,
     0x1.17608785f0bfdp-603, 0.0, 0.0, 0x1.f87d200dd0714p-993, 0x1.c80dbe8d6e5b8p-155,
     0x1.ee0da95a92d16p-106, 0.0, 0.0, 0.0, 0.0, 0x1.2e1d3379bf3d2p-779,
     0x1.1c7cb09837c29p-719, 0.0, 0.0, 0x1.3ef49fbd2014p-282, 0.0,
     0x1.4f765aea311aep-152, 0.0, 0.0, 0.0, 0x1.c440d088d6baep-709, 0.0,
     0x1.9ded4b28e195ep-852, 0.0, 0.0, 0x1.31c634daa9a5ep-831, 0.0,
     0x1.a47f5d759f4bcp-408, 0.0, 0.0, 0x1.5dffcc0809201p-824, 0.0, 0.0, 0.0,
     0x1.ea2f312747213p-600, 0x1.67aeb12d03b88p-250, 0.0, 0.0, 0.0, 0.0,
     0x1.58ef149b8eadp-136, 0x1.1ac67a13fb5a6p-691, 0.0, 0.0, 0.0,
     0x1.a810b472b9915p-991, 0.0, 0.0, 0x1.6fb640cd55fbfp-814, 0.0, 0.0, 0.0,
     0x1.822a29717bc2fp-60, 0.0, 0x1.a5df6448e6a68p-188, 0x1.11b835fbd0e48p-338,
     0x1.d5ed186bbef41p-112, 0x1.d809edea70993p-177, 0.0, 0x1.6b8713ddd3bf3p-762, 0.0,
     0x1.e2505aa54659cp-433, 0.0, 0x1.4106d79707a5cp-19, 0x1.c7a01f7601444p-828,
     0x1.0a655e1cb1aa7p-538, 0x1.fafad839b4e4ep-940, 0x1.f62b8cc0b5258p-646, 0.0, 0.0,
     0.0, 0.0, 0x1.0192cc9fbfec2p-69, 0x1.19c2682e519c2p-824, 0.0, 0.0, 0.0, 0.0,
     0x1.2532e2f60f3c5p-536, 0x1.691a9c5931fdcp-981, 0x1.306b012dcb78p-1018, 0.0,
     0x1.a1ef3d70518fbp-91, 0x1.f15b974df2eefp-793, 0x1.a00426be9b8p-222, 0.0,
     0x1.28eeebae0b403p-751, 0x1.90a32d5d0813p-402, 0.0, 0.0, 0x1.b4da72939cd21p-217,
     0.0, 0x1.4bea12d3d4efap-986, 0x1.df6cda6a108b9p-778, 0x1.910707e9f9af9p-251, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.24b58b4db2d46p-428, 0.0, 0.0, 0x1.511fd926cebb9p-817,
     0.0, 0x1.913fe58d4de22p-952, 0x1.fac4e71ea98fp-147, 0x1.ab1b889ebaa29p-339, 0.0,
     0x1.00e870a2fabc6p-818, 0x1.f5b9c75af9e08p-589, 0x1.37de5d78a269bp-514,
     0x1.5f586f39ee5adp-232, 0x1.b3482f8fe935bp-962, 0x1.61c4eff86ab9cp-12, 0.0,
     0x1.27a4ffc038fe4p-488, 0.0, 0x1.5aae919fe05a3p-384, 0x1.3565946a20f91p-737, 0.0,
     0.0, 0x1.376cb9a136e78p-394, 0.0, 0.0, 0.0, 0x1.b1e202efc74f2p-26, 0.0, 0.0,
     0x1.c8423705c4e48p-1010, 0x1.93036de4b0a34p-582, 0x1.5c5c1c2cdb4c5p-655, 0.0,
     0.0, 0x1.403ac9849885ap-498, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9fd89ecc5dfbp-248, 0.0, 0.0, 0x1.fa9e66e99508p-212, 0.0,
     0x1.5753d92af0894p-390, 0.0, 0.0, 0.0, 0x1.c434c241c4c76p-555,
     0x1.dbbde58775f95p-754, 0.0, 0.0, 0x1.82be2026c2dcdp-479, 0x1.fc1e9c628bfdp-138,
     0x1.cc552819908e2p-107, 0.0, 0.0, 0x1.7fe9bf691cdfcp-437, 0.0, 0.0,
     0x1.712f025f34da7p-818, 0x1.293943b421acfp-14, 0.0, 0.0, 0x1.464bb11763a1cp-560,
     0.0, 0x1.441371a0ac397p-546, 0x1.524fef7df1151p-227, 0.0, 0.0,
     0x1.49b9a4a56837ap-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.240a338ee93e6p-350,
     0.0, 0x1.f1e81914ae738p-508, 0x1.4ba202c049fa4p-291, 0.0, 0x1.26761cd02c302p-686,
     0x1.5b1db3a11202ep-543, 0x1.fbe70a8ca1a3p-599, 0.0, 0.0, 0.0,
     0x1.38ad2586816b5p-993, 0x1.c69f534a1060cp-84, 0.0, 0.0, 0x1.9cfb01ed8710ap-162,
     0.0, 0.0, 0x1.9a45936435babp-211, 0.0, 0.0, 0x1.3829dd1e4d8fap-862,
     0x1.cda69c5341ff2p-346, 0.0, 0x1.9399d8548971cp-654, 0x1.ae760ab2871cp-507,
     0x1.a431e5b752b7ap-127, 0.0, 0.0, 0.0, 0.0, 0x1.dc650972a4fa2p-241, 0.0,
     0x1.1bb414960877bp-33, 0.0, 0.0, 0x1.628e9f50f4ee3p-707, 0x1.83445069073b4p-48,
     0.0, 0x1.defc5c37ca48cp-141, 0x1.2d510c8290074p-968, 0x1.9ee9641bf9e07p-974, 0.0,
     0.0, 0.0, 0.0, 0x1.6f4f3b8aa75e8p-676, 0.0, 0x1.bee1aad913661p-166, 0.0, 0.0,
     0x1.348c460992a1p-863, 0x1.9854d7831691ep-398, 0x1.2032ceb3b8af4p-230, 0.0,
     0x1.651550299f81fp-404, 0.0, 0x1.787a30dfd836ep-532, 0x1.4ec08cb125c42p-288, 0.0,
     0x1.3519cf362115ep-652, 0.0, 0x1.3696ac1483a05p-918, 0x1.3e42868ea850ep-506,
     0x1.6a208a55b5f3ap-354, 0.0, 0.0, 0x1.b39c5c8e81da5p-597, 0.0, 0.0, 0.0, 0.0,
     0x1.e32f52362234p-770, 0x1.b813e4b3f85e2p-967, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9049a72d59142p-771, 0x1.d3931b3eda39ap-506, 0.0, 0x1.cd0cd446c2d9dp-169, 0.0,
     0x1.22e4e2b4a3bc2p-999, 0.0, 0.0, 0x1.3f678a4d10357p-624, 0.0, 0.0,
     0x1.f433a96a86c11p-410, 0.0, 0.0, 0x1.64181cb4e8a28p-372, 0x1.3e0b4f1fbc3e9p-378,
     0.0, 0x1.03d10c6e2e54dp-110, 0x1.81d5230cbda73p-416, 0x1.439dc1387f159p-135,
     0x1.be286aa9dbbf9p-718, 0x1.6ac8a9b291723p-164, 0.0, 0x1.b1fa93062c519p-148, 0.0,
     0.0, 0.0, 0x1.9844ba5ca641ap-974, 0.0, 0x1.ead39a328c121p-478,
     0x1.f1cf6641a14b5p-626, 0x1.b5403decf3c26p-149, 0.0, 0x1.3c30d00eceadep-405, 0.0,
     0.0, 0x1.987e0a87fc559p-234, 0x1.b0b668807082fp-848, 0.0, 0.0,
     0x1.6faeb4e8978f1p-69, 0x1.5e716484a9f4ap-612, 0x1.ba8ea11ffc83ep-661, 0.0, 0.0,
     0.0, 0x1.47af0ebe0a861p-819, 0.0, 0x1.9adc6262a4f02p-350, 0.0, 0.0,
     0x1.a090bdd27e1b8p-450, 0x1.a559aa7263ff1p-246, 0x1.954e988e3b2c3p-561,
     0x1.c4e576a518082p-543, 0x1.011466df01d53p-95, 0.0, 0x1.761183e9414ddp-742, 0.0,
     0.0, 0x1.f833691101e3ap-799, 0.0, 0.0, 0.0, 0x1.3532f0b914953p-663, 0.0, 0.0,
     0x1.945b3b7cbe78fp-895, 0x1.43f1dc136e3afp-129, 0x1.09197603b96d3p-105, 0.0,
     0x1.9fc439e56c37fp-11, 0.0, 0x1.f67004bb3acd1p-174, 0.0, 0.0, 0.0,
     0x1.64ac7ce9ff43ep-704, 0x1.8279139042aa4p-833, 0.0, 0.0, 0x1.1475bbaf101bbp-897,
     0x1.91e6893802ad1p-858, 0.0, 0.0, 0.0, 0.0, 0x1.3871b44cc95ccp-481,
     0x1.7e7892f2cd9dep-719, 0x1.ac44b54e12339p-111, 0x1.c19151d684d1cp-528,
     0x1.cc9a33e3f97ebp-958, 0.0, 0.0, 0.0, 0x1.ceb9d59517b07p-458, 0.0, 0.0, 0.0,
     0x1.f43c76c2cef2fp-845, 0x1.1c397b2b16946p-466, 0.0, 0.0, 0.0,
     0x1.97fc4eadd9d8ep-951, 0x1.fc16ff7436d41p-170, 0x1.929ea5b4d813cp-626,
     0x1.d2ff33e0c9672p-1011, 0.0, 0.0, 0x1.c3c7af00014dap-791,
     0x1.120a4ca322f7ep-681, 0.0, 0.0, 0x1.5de002278e007p-287, 0x1.e38ddf6e132a4p-264,
     0x1.74bc07188abfep-789, 0.0, 0x1.df806a3a77625p-190, 0.0, 0x1.2896cc7d9e92cp-106,
     0.0, 0.0, 0x1.b9d74d9c9e2dfp-128, 0x1.5629e02f78cdcp-234, 0x1.80254dbaecfadp-957,
     0x1.f045847af5008p-991, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1dd8be8eda5fp-262,
     0x1.d6d57e6c5f4b4p-258, 0.0, 0x1.e2d45b4b6fca7p-503, 0x1.1d9e5865d8e3dp-88,
     0x1.c2f2562501aa9p-443, 0.0, 0x1.7f612840a328p-790, 0.0, 0.0,
     0x1.5f4d32c7bf844p-476, 0.0, 0x1.ec694058ad632p-412, 0.0, 0.0, 0.0,
     0x1.4074a5af3e6f1p-496, 0.0, 0.0, 0x1.0add11e463b7dp-453, 0.0, 0.0, 0.0,
     0x1.bff3133dfd269p-85, 0.0, 0.0, 0x1.2fa3403c37492p-65, 0.0, 0.0,
     0x1.3efb632cd4933p-734, 0x1.8b0bddb499356p-714, 0.0, 0x1.0848995a6ff32p-512, 0.0,
     0x1.75a301d92537cp-488, 0x1.5e307da33726ep-876, 0.0, 0x1.4ba040ec17a3fp-420,
     0x1.944bccccbb85p-404, 0x1.e07c3c35b125fp-65, 0.0, 0x1.d558b814b834dp-785, 0.0,
     0x1.533eeda981c11p-1004, 0x1.991c03537f7aap-408, 0.0, 0.0, 0.0, 0.0,
     0x1.77170030be4eep-248, 0x1.642fc5efed2fep-479, 0x1.081d649e6f2bfp-778, 0.0,
     0x1.d377d9c57f9f8p-314, 0x1.5f4754578b1b6p-557, 0x1.f2942cbf8ef6ap-962, 0.0,
     0x1.7142fcb128eacp-342, 0x1.44f00571b1319p-1000, 0x1.859c64d948a02p-522, 0.0,
     0x1.7753c54ddd888p-356, 0.0, 0.0, 0x1.7e2c0b289fa7p-220, 0x1.bea329edce67ep-174,
     0.0, 0.0, 0x1.35da19c989591p-502, 0x1.082b54d2ee4fep-230, 0.0, 0.0,
     0x1.49f2ed8c1ac28p-306, 0x1.a1f458672a3fbp-682, 0x1.31c8b7e181cc4p-84, 0.0,
     0x1.3a7bb23176395p-449, 0.0, 0x1.6015cc92158c8p-333, 0x1.376997ad2c862p-966,
     0x1.289ada718e5f4p-835, 0.0, 0x1.0069032fa8743p-646, 0x1.fb47ab2f63db2p-854, 0.0,
     0x1.d6a215b899634p-585, 0x1.72ac09c9f6966p-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dcbc26337b27p-480, 0.0, 0.0, 0x1.e78e3063885cep-389,
     0x1.de1d85450af0dp-1021, 0x1.95b2ebb754cc8p-918, 0x1.d3e0dd664174dp-101,
     0x1.4f90d94e28906p-712, 0.0, 0x1.c5743cffc289cp-875, 0.0, 0.0, 0.0, 0.0,
     0x1.6f813f238f5a6p-222, 0x1.1fca611636c94p-562, 0x1.9828a99dc0bedp-670, 0.0,
     0x1.d0d7be7937b42p-552, 0.0, 0.0, 0.0, 0x1.83cac76b3ac21p-74, 0.0,
     0x1.8f2b4f7822073p-852, 0.0, 0x1.e52b29f9e823p-963, 0.0, 0.0, 0.0,
     0x1.fe3f8f9367dd9p-581, 0.0, 0x1.f8c33cd102111p-623, 0.0, 0x1.55cd0550754d1p-921,
     0.0, 0.0, 0x1.24edcaace8b5fp-557, 0.0, 0x1.563602dc3b852p-767,
     0x1.688dbfd586d06p-424, 0x1.d6f776a75be2fp-422, 0x1.071f5fa295846p-743,
     0x1.e0bb981c1feddp-137, 0.0, 0.0, 0x1.a76493f790aefp-846, 0.0, 0.0,
     0x1.91ad3c1db8534p-20, 0x1.3bcf750f34101p-393, 0x1.f521d31c0e114p-840,
     0x1.ecffb3f6bc7f4p-802, 0x1.297338ca0a4b5p-698, 0x1.7a5b74dddaacdp-923, 0.0, 0.0,
     0x1.18bbcc29da502p-463, 0x1.4550512a738eep-772, 0.0, 0x1.cd61ae2471b4fp-185,
     0x1.683d75cf5fe47p-2, 0.0, 0.0, 0x1.80726b487669ep-284, 0.0, 0.0, 0.0,
     0x1.3ca8a34f326f6p-357, 0x1.5e81d6c05d59cp-354, 0.0, 0.0, 0.0,
     0x1.d3fdab41d80e1p-721, 0x1.6c4607b92c9ap-564, 0x1.37b49cbcf29acp-994,
     0x1.6af81ae37624dp-528, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b7dcf7fb418bp-233, 0.0,
     0.0, 0.0, 0x1.b07c1f962b1a4p-139, 0x1.18b93b5dfe632p-778, 0x1.9d125fda77c07p-365,
     0x1.e4554887875e6p-912, 0.0, 0.0, 0.0, 0x1.6fbc0baf396cdp-821, 0.0, 0.0,
     0x1.6b52027aa232ep-772, 0x1.fe2beba5e8dap-368, 0.0, 0.0, 0.0,
     0x1.5bdb363cccef7p-445, 0.0, 0x1.5180158e3dadep-304, 0.0, 0x1.a88654443f59bp-162,
     0.0, 0x1.5fdd1f08ba7ebp-516, 0.0, 0x1.e1332ea7dbbf5p-380, 0x1.c7c5b080f3904p-84,
     0x1.7c688efde163dp-570, 0x1.1b1b92628091bp-911, 0.0, 0x1.a6ab9bb5eed4dp-575, 0.0,
     0x1.e78396ba20831p-513, 0x1.f53467b62293bp-526, 0x1.a9d31ca5e4d9ep-100,
     0x1.d41ae38adacdp-961, 0.0, 0x1.781f2dba32ddap-217, 0x1.6e0925c55e4c8p-586,
     0x1.f1bda33b6f281p-804, 0.0, 0x1.31d9dbf83790dp-1001, 0x1.7bbc1cee2ee46p-672,
     0x1.e5f421375ac5fp-492, 0x1.c801ba0008076p-499, 0x1.e804ed1a1b283p-868, 0.0, 0.0,
     0x1.9bef4e15e8df9p-557, 0.0, 0.0, 0.0, 0.0, 0x1.48fe259531dcap-831, 0.0,
     0x1.5efb242c999dp-663, 0x1.e30fc9173f084p-838, 0x1.919bf07f6a651p-654,
     0x1.31aa8e024b7c3p-156, 0.0, 0x1.1bdbbe4ca80b3p-992, 0.0, 0x1.f636d19f68d0dp-554,
     0.0, 0.0, 0.0, 0x1.9bc47f7457155p-493, 0.0, 0.0, 0.0, 0x1.12e92cfd54e67p-94,
     0x1.09db6c03d17cap-389, 0x1.85c25e4ccb547p-247, 0.0, 0x1.353816ec241f3p-525, 0.0,
     0x1.b81326795e0b6p-142, 0.0, 0.0, 0.0, 0x1.f0a8fbd6bb1edp-498, 0.0,
     0x1.10eb6cfb87be6p-932, 0x1.660ed8909ea52p-183, 0.0, 0x1.fb943efbf1d1ep-134,
     0x1.ff5af03db58aep-720, 0x1.878d274de85d4p-866, 0.0, 0.0, 0.0,
     0x1.204ba2bb03c13p-80, 0x1.b2474bfc9fdd6p-460, 0x1.36d0dcdf6f9fcp-546, 0.0, 0.0,
     0x1.10dc6b0a71c8ap-529, 0x1.a91281f7f7e5p-311, 0x1.6730c2cb69b9fp-967, 0.0, 0.0,
     0.0, 0.0, 0x1.4fe21e026c1a5p-456, 0x1.c7dbdf6166fe1p-877, 0x1.98ad79a76aaecp-856,
     0x1.792b26343b5fep-727, 0x1.2efc780e33496p-900, 0x1.3ec95be8012f4p-535,
     0x1.53568f5458e8ap-535, 0.0, 0x1.9883bcf53dbf2p-884, 0x1.eaebbab604d1dp-950, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5d60a58a8713p-393, 0.0, 0.0, 0.0,
     0x1.aa7f21063f239p-709, 0x1.57ffb952b5accp-445, 0x1.7e61b72c9640ap-294, 0.0,
     0x1.42dbc59de0c14p-623, 0x1.8debbb6f2769fp-940, 0.0, 0x1.f5483218bcf39p-175, 0.0,
     0.0, 0x1.30e2100991b8bp-425, 0.0, 0.0, 0x1.6f7620243bf5ep-348, 0.0,
     0x1.9d7d6c6f396fdp-573, 0.0, 0x1.4b49e15902b78p-373, 0.0, 0x1.080f65fd133a6p-138,
     0x1.b4d8f333bffddp-845, 0x1.345a6ea51d9f2p-379, 0x1.438c05bc7ea8dp-879, 0.0, 0.0,
     0x1.7fa641f86a43cp-472, 0x1.84345f3ef11d1p-675, 0x1.38c66c1a92c64p-274,
     0x1.197fd70086d72p-799, 0.0, 0x1.efc140379cc52p-219, 0x1.fd14870150d43p-242,
     0x1.5a9744e7cc415p-192, 0.0, 0x1.af366f348851bp-199, 0x1.56bb9b336c6e4p-404, 0.0,
     0.0, 0x1.69ae08238641cp-595, 0x1.ecda5aa55e633p-77, 0.0, 0x1.3601e23215841p-368,
     0x1.22729ddbca555p-512, 0.0, 0.0, 0x1.dd836ac2d09b2p-1019, 0.0,
     0x1.891a16ea22bbep-657, 0x1.897a5901f61f7p-775, 0.0, 0x1.97412cf4bea8dp-1006,
     0.0, 0.0, 0x1.e997065400634p-697, 0x1.ebf7badf6c0cap-223, 0x1.e73e5b1fc74fbp-546,
     0x1.02134e6103e92p-585, 0.0, 0x1.6e652627b1f31p-644, 0x1.2e1e299c31ba3p-948, 0.0,
     0x1.da5213d448fa3p-229, 0.0, 0.0, 0x1.3e801482c1bd7p-872, 0.0, 0.0,
     0x1.19853b36e9717p-359, 0x1.d6c1f47e26f99p-438, 0.0, 0x1.c3dcdde219962p-520,
     0x1.aa799c1c0459dp-397, 0x1.1e4aa48ef926dp-318, 0.0, 0x1.f39d31e11fc3dp-140, 0.0,
     0x1.e8da648755f02p-883, 0.0, 0.0, 0x1.674c3437875b1p-329, 0x1.92d0501fd11b8p-662,
     0x1.6cba8d39c2063p-383, 0.0, 0.0, 0x1.bd6c5395ccb8bp-444, 0.0,
     0x1.e3ca07e8e89aap-839, 0x1.7e89092e93938p-1019, 0x1.67816bf6a87d4p-848,
     0x1.c9c5a8cb5cac8p-421, 0x1.312e34d54e70dp-42, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1c8706d7a4f0fp-191, 0.0, 0.0, 0x1.63b0d23106244p-29, 0.0,
     0x1.a81ca7740e8d3p-110, 0x1.edc5d6c80df96p-137, 0x1.879f1c11b775cp-902, 0.0, 0.0,
     0x1.a3969550aa759p-671, 0.0, 0x1.e2e48fc5d93e8p-296, 0.0, 0x1.b4f38ac4c1997p-239,
     0.0, 0.0, 0.0, 0x1.e578297e2509dp-560, 0.0, 0.0, 0.0, 0x1.2c1405a4eb4e9p-716,
     0.0, 0x1.bbc402bff6953p-358, 0.0, 0x1.594d016ce5e32p-456, 0.0,
     0x1.fdf6f0b3a565bp-173, 0x1.ef388e849835fp-946, 0x1.ead9eff3b0ba3p-307, 0.0,
     0x1.2da78f1eeb03ap-996, 0.0, 0x1.80bb79cb18fccp-654, 0x1.d7c48368f4799p-259,
     0x1.8c26abef285b7p-461, 0x1.db6cec50801c8p-51, 0x1.7e8522406b3a3p-92, 0.0, 0.0,
     0x1.f162ed36b0fc2p-772, 0x1.400866443ca5dp-365, 0.0, 0x1.419d04af27e19p-990,
     0x1.aec2c2df88606p-758, 0.0, 0.0, 0x1.0562a1f37e393p-720, 0.0, 0.0, 0.0, 0.0,
     0x1.5ec11ad876449p-50, 0x1.64491477386c7p-205
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = log2(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("log2 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log2 bench acc %la\n", global_bench_acc);
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
