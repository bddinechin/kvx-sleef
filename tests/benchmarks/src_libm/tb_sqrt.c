/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_sqrt.c --function sqrt --headers math.h,ml_support_lib.h \
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
     0x1.efffc98bd77ep-792, 0.0, 0.0, 0.0, 0.0, 0x1.14dd6ea671518p-308,
     0x1.971cb883f2087p-638, 0x1.aec957c5bae0ep-256, 0x1.025bc7b6a3b24p-38, 0.0, 0.0,
     0x1.f94f7f4b17d8dp-803, 0.0, 0.0, 0.0, 0.0, 0x1.295b9ac9717f8p-508, 0.0,
     0x1.cea6dabafe06dp-57, 0x1.328a1fadb38a7p-959, 0x1.1e2017e9e8917p-255, 0.0, 0.0,
     0x1.2c723e66c2515p-508, 0x1.f7150864f6ec7p-259, 0.0, 0.0, 0.0,
     0x1.8b2ec0b76f44dp-704, 0x1.fe857495260e9p-328, 0x1.e04a07aa2ace1p-46,
     0x1.6f3f2e577aa9fp-491, 0x1.05ba522c90fdcp-846, 0x1.64031d5ef8c4ep-247,
     0x1.74fa472b04169p-861, 0.0, 0x1.4afd62261a1e6p-456, 0.0, 0x1.8f46ae837c8f6p-5,
     0x1.2c984287453b4p-157, 0x1.05d82e36cbffdp-763, 0x1.b02864aeb8221p-95, 0.0,
     0x1.6709d9559596ap-691, 0.0, 0x1.d2f9184c1f892p-588, 0.0, 0x1.ee8263a1e4d55p-468,
     0.0, 0.0, 0x1.95cde13bcd14ap-1020, 0x1.ea8f63fe1dcc6p-161, 0.0,
     0x1.39986921e5ac4p-878, 0x1.e294d3b2ab56ap-740, 0.0, 0x1.bbf4e5a97d429p-345, 0.0,
     0.0, 0x1.da11b91644a7dp-12, 0.0, 0x1.e67de682eaf64p-938, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.01b7dead3268ap-878, 0x1.63808acdcab04p-288, 0.0, 0x1.d78af9a7f3ed7p-291,
     0.0, 0x1.e139a78e6656fp-996, 0x1.c51187cc965d4p-719, 0x1.8dcaa74f6e98dp-943,
     0x1.cf17a7e91638cp-153, 0x1.11be53e2ff9f5p-146, 0x1.4a15868ed7c23p-805, 0.0, 0.0,
     0.0, 0x1.df939dfd31f83p-491, 0.0, 0.0, 0x1.8e96ec7aa50dfp-312,
     0x1.e7a493322ef56p-259, 0.0, 0.0, 0.0, 0.0, 0x1.82b171098fe38p-1003, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.81676e3ad45fbp-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bac6f05ad2b8fp-441, 0x1.dd8c41aa05637p-729, 0x1.0b03d697daf4ep-615, 0.0,
     0x1.ac05babde44ecp-443, 0x1.91f5292a1e81ep-352, 0x1.ee03d50b6e487p-118, 0.0, 0.0,
     0x1.c4466e920c1bfp-326, 0x1.d3acf611698fep-443, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.761a6255000f4p-860, 0.0, 0x1.5e31846adfc93p-524, 0.0, 0.0,
     0x1.7698de2a3c18fp-743, 0x1.e12c04615bf6ap-146, 0x1.4e9f88436b297p-537,
     0x1.5ae0f9546084bp-842, 0.0, 0x1.11890df0cc1e2p-745, 0.0, 0.0, 0.0,
     0x1.1a13b910f2aeap-795, 0x1.868f7b54e1957p-922, 0x1.edeb468913227p-860, 0.0,
     0x1.95a6a52668aadp-879, 0x1.d36898bce044dp-384, 0.0, 0.0, 0.0, 0.0,
     0x1.5c5a7b0424f3p-452, 0x1.249d0d970cc26p-959, 0.0, 0.0, 0x1.86b517ea84dbp-288,
     0.0, 0x1.3afb301bf21f3p-846, 0.0, 0x1.88523fda076f5p-541, 0x1.606499799ac31p-726,
     0x1.8a0d459d65eap-810, 0x1.3f93a39658d5ap-652, 0x1.8bb8a4e5390a4p-804,
     0x1.2b04ca202756dp-65, 0.0, 0x1.011170b3118eap-640, 0x1.e267cc74be15ep-683, 0.0,
     0.0, 0x1.2200e7505458cp-674, 0x1.bacbdaf05a2abp-439, 0.0, 0.0, 0.0, 0.0,
     0x1.2d927fc713eap-146, 0x1.4c641caa1a36ep-255, 0x1.acdc4f234d574p-985,
     0x1.54a9eaa58d042p-78, 0.0, 0x1.9dc541fd2c849p-767, 0x1.0985e35bfb1cfp-112,
     0x1.f6b465d1f9f13p-524, 0x1.a735add41d102p-857, 0x1.028cef102e676p-630,
     0x1.17a8166d37edfp-13, 0x1.fcc0720e1b506p-276, 0x1.bd171eba649d5p-768, 0.0,
     0x1.ed9f12972856dp-446, 0x1.0964c8b9353f2p-462, 0x1.38c6ae90756b1p-50,
     0x1.0c45e2244685ep-963, 0.0, 0.0, 0x1.4c8d872e9ad4bp-915, 0x1.022de95ae61ecp-327,
     0.0, 0.0, 0.0, 0.0, 0x1.75b42b8e2dc3fp-774, 0x1.2771b543e3204p-294,
     0x1.3d8e360f3f0b5p-445, 0x1.dc232074d6a92p-501, 0x1.9294a8ad1966fp-141,
     0x1.1ee79be98cf86p-167, 0x1.6044995e923f8p-385, 0x1.bfdb2f45d2313p-564,
     0x1.4d7b6034cb4bfp-944, 0.0, 0x1.448240561c226p-561, 0.0, 0.0,
     0x1.2b62be9f6d114p-103, 0x1.1a99e8e636deep-658, 0x1.fdc5d736ae353p-391, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d07306291a4fp-128, 0x1.ac4565c88f749p-875, 0.0,
     0.0, 0x1.b0655814e5779p-470, 0.0, 0x1.b5b2c4aef9194p-260, 0x1.b9e0e583897fp-576,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c87ff5205145ap-273,
     0x1.37de993273b67p-583, 0x1.75e268a3ee176p-704, 0.0, 0x1.ab76252aaf613p-974,
     0x1.cacac79c38049p-676, 0x1.f337b55ca4bdfp-598, 0x1.a5fff5cd802a6p-106, 0.0,
     0x1.830ed5aad9362p-378, 0.0, 0.0, 0x1.272b82e1de2bbp-417, 0.0,
     0x1.cf039363d83e9p-139, 0x1.d8b4f29b0d3c8p-147, 0x1.8e8517ce7c4fcp-577, 0.0, 0.0,
     0.0, 0x1.d69dcc4f47b73p-202, 0x1.45b941ed19322p-338, 0.0, 0x1.88feb24794761p-656,
     0x1.abbd85b9a134fp-662, 0x1.7e4c3b4ed6762p-709, 0.0, 0x1.fee96f964256p-900,
     0x1.fb2fb1f9899adp-632, 0.0, 0x1.7fa465f602307p-202, 0.0, 0.0,
     0x1.026b368009807p-279, 0x1.1edd53b4520f9p-710, 0x1.18362f6586ffep-588,
     0x1.018328a4c41ap-156, 0x1.e52ffa90afc59p-776, 0x1.d88e3fb975e04p-988,
     0x1.fef11b553970dp-595, 0.0, 0.0, 0.0, 0x1.b153472db63ep-499,
     0x1.78154957c2573p-322, 0x1.ecdaed6d00a35p-103, 0x1.7c0d05703e2c4p-551,
     0x1.1eb4064395ad9p-570, 0x1.74e065bc67017p-481, 0x1.c85ae475b0732p-397, 0.0,
     0x1.b5b9c76745991p-1022, 0x1.fea01c461ab79p-760, 0x1.ed59d86d1f1b4p-136, 0.0,
     0.0, 0x1.fda85fc354e34p-22, 0x1.617e661c08d29p-262, 0x1.c1dd28b0a9ac5p-56,
     0x1.01bf9a9e94bebp-19, 0x1.c6cd9f8a50b83p-919, 0x1.bc552ee0eee2ep-29,
     0x1.b4d8842fa8e8dp-734, 0.0, 0x1.3c656e11546c6p-454, 0.0, 0x1.c24928bcbf7d1p-907,
     0x1.cc4313df93d61p-824, 0x1.e66b8ef08b803p-452, 0.0, 0x1.ed0f7ed21a20ep-993, 0.0,
     0x1.6eea37d43d5e2p-612, 0.0, 0.0, 0x1.677508c2dc352p-67, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d78695435adecp-624, 0.0, 0x1.3064c3df43e8ep-784, 0x1.fc3ecab17f193p-914,
     0x1.78d4f8275b5d2p-679, 0.0, 0.0, 0x1.2ed8a9a2d2a56p-491, 0.0, 0.0, 0.0, 0.0,
     0x1.6fdd7fc0b965bp-1018, 0.0, 0x1.d1c8ae046abfbp-451, 0.0,
     0x1.7da29f77a3097p-960, 0x1.a053f3b51657ep-456, 0.0, 0x1.8516aa5c83b3ap-312, 0.0,
     0x1.27ec36b565bcfp-55, 0x1.4cdadce93d65ep-280, 0x1.f8c2330312d7ap-226, 0.0,
     0x1.69481511bcaacp-435, 0.0, 0.0, 0.0, 0x1.7dabf3a5c1e9fp-330,
     0x1.a6de239504aa4p-839, 0x1.66fdee3e13577p-876, 0x1.4e5f95700153ap-816, 0.0, 0.0,
     0x1.f7e3df6763c9ap-875, 0x1.7f02338cf7c48p-967, 0x1.27ba32ced0495p-753, 0.0,
     0x1.d5707d9793bbbp-340, 0.0, 0x1.3a138463f76f7p-210, 0x1.bbc9370ce9f07p-272,
     0x1.04d78a71f6bcbp-945, 0x1.07ffda4f75dc3p-768, 0x1.569e80bbbf432p-567,
     0x1.1da06d065d95dp-848, 0x1.506c5ecd6df81p-720, 0.0, 0.0, 0x1.c2c8c7be7ce3cp-746,
     0x1.06cae2f4489fep-98, 0.0, 0x1.6d0549cf004e4p-316, 0x1.56bf75ac504a2p-516,
     0x1.f56fe7398a058p-652, 0x1.232635ef07b8dp-268, 0x1.7240b5d585f95p-326,
     0x1.de95484fa86bcp-785, 0.0, 0x1.819e8545c456bp-425, 0.0, 0x1.f7d00f7659194p-319,
     0x1.aedfe8a2fe988p-411, 0x1.d324492901086p-380, 0x1.452b67769cfb3p-846, 0.0,
     0x1.d575f3600cfddp-141, 0.0, 0.0, 0x1.368ad31310359p-822, 0x1.1b25a1679c273p-764,
     0.0, 0x1.83e319c042738p-233, 0x1.8f357e3f62af7p-636, 0.0, 0x1.a102854a3aa6p-770,
     0.0, 0x1.e979da48c4fc2p-81, 0x1.b98a5b2e9c083p-263, 0.0, 0.0, 0.0,
     0x1.20876a8a17d64p-232, 0x1.78a14dce7ffcap-931, 0x1.d15b8c183416cp-512,
     0x1.eb4501ddaf826p-736, 0x1.4d679c1a289cep-748, 0.0, 0x1.e22d84d890117p-660, 0.0,
     0x1.2061bb306a889p-998, 0x1.bd5467fdd9c54p-630, 0.0, 0.0, 0x1.cfa6fa0d08328p-747,
     0x1.037cd347fdc62p-777, 0x1.0a05d2c3a2b92p-49, 0.0, 0.0, 0x1.46fafd67454ebp-928,
     0x1.96b6f7d03b6cep-339, 0.0, 0x1.f310f8bce1e2bp-393, 0x1.7e4bc773c1b23p-640,
     0x1.2928064d5801dp-294, 0x1.4781c5c316388p-926, 0.0, 0x1.7d47ef18b1c8ep-752,
     0x1.b28ce083d0331p-204, 0x1.7ca9a708b42f3p-51, 0.0, 0x1.6543d1e9d9fbdp-154,
     0x1.29a330b092946p-672, 0.0, 0x1.f921e87e8999ep-618, 0.0, 0.0,
     0x1.918988ebb0544p-37, 0.0, 0.0, 0x1.d7bedc99e8389p-448, 0.0, 0.0,
     0x1.f35bcde44bb49p-179, 0.0, 0.0, 0.0, 0.0, 0x1.c79388675fde4p-893, 0.0, 0.0,
     0x1.2ea997e77a78ap-178, 0x1.7014e0aaca955p-738, 0x1.26643ac9c26cbp-645,
     0x1.cd312725cf79bp-245, 0.0, 0x1.8f50141f796a5p-5, 0x1.135ae1da1c3d4p-354,
     0x1.cfbce5b343d18p-22, 0.0, 0.0, 0x1.f003dc1acc70fp-151, 0.0,
     0x1.782a676e17116p-871, 0x1.b9dc903352cd2p-312, 0.0, 0x1.35d1ccb00a4acp-737,
     0x1.9336f314e95ecp-538, 0.0, 0x1.f3b203f4d7dd7p-695, 0.0, 0.0, 0.0, 0.0,
     0x1.686a86dd35573p-996, 0.0, 0x1.eb6d494c3e216p-891, 0x1.ec3d8161d49fep-885, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9fc4906ee6376p-51, 0x1.01f9cb4ab8f84p-945,
     0x1.856782789376dp-723, 0.0, 0x1.646cdf1997667p-24, 0.0, 0x1.fb271ee12803ap-779,
     0x1.6214b98d466d2p-859, 0x1.83eac8c3e6867p-949, 0.0, 0x1.c87f190fd0fb3p-885,
     0x1.46fea506bd968p-901, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fa5d387365efp-114,
     0x1.0a6aa3cf9dc49p-849, 0x1.4154ba0e345d4p-532, 0x1.07e2b8f3fd665p-403,
     0x1.aa73f24fe204fp-45, 0.0, 0x1.14bf96a6c7a2fp-659, 0.0, 0x1.19b5a035bf532p-735,
     0.0, 0x1.69b715f14f821p-695, 0x1.81658a7254459p-519, 0x1.45ad89d1d1022p-326,
     0x1.8036c16fcc2e5p-398, 0.0, 0x1.719578aed2ccdp-509, 0.0, 0.0, 0.0, 0.0,
     0x1.66850220db8f9p-9, 0x1.1437670b72605p-496, 0.0, 0x1.cde0b13da1e2fp-173, 0.0,
     0x1.c62fda097db72p-497, 0x1.6ff19ebd832cfp-305, 0.0, 0x1.f3a65b3cfe514p-866,
     0x1.6741e9fda8254p-96, 0.0, 0x1.3df072043133fp-569, 0.0, 0.0, 0.0, 0.0,
     0x1.2015b3f9fdc2dp-24, 0x1.6b80306882bb9p-833, 0.0, 0.0, 0.0,
     0x1.6b3d7c6b84a19p-36, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22509b93e69f6p-592,
     0x1.ae6dcba0216c8p-596, 0.0, 0x1.172d74f5faef3p-208, 0.0, 0.0, 0.0, 0.0,
     0x1.7500ad8134d98p-205, 0.0, 0.0, 0.0, 0x1.2be30eb877e9fp-346, 0.0, 0.0,
     0x1.27ba3db4d6753p-34, 0.0, 0.0, 0x1.e7645da3c5dcfp-544, 0.0,
     0x1.b54ccd140188ap-678, 0x1.01229867505edp-29, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.10f6c2e515dc4p-589, 0.0, 0.0, 0x1.66606fa4cee66p-868, 0x1.b1eb06be04f08p-212,
     0.0, 0x1.866893c514eb9p-452, 0x1.60aa7ba854995p-354, 0.0, 0.0,
     0x1.6329ff57ef343p-945, 0.0, 0.0, 0x1.e7eee88a99df1p-140, 0x1.6cd3e768ef04fp-833,
     0.0, 0.0, 0x1.451ebda992414p-563, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b78d4befbafbp-681, 0.0, 0.0, 0x1.c5fc99efdb02bp-942, 0.0, 0.0,
     0x1.f44724a10a141p-914, 0x1.04ff7fc80687ep-248, 0x1.9cddf916d4a05p-254, 0.0, 0.0,
     0.0, 0.0, 0x1.ac1d054a301bep-240, 0x1.ba4db2c7f204ap-329, 0x1.ed4fd6868419ap-988,
     0x1.cb8be4ac2c5c4p-269, 0.0, 0x1.2b75354d4a8fbp-897, 0.0, 0x1.fc64e8f3fc604p-730,
     0.0, 0.0, 0x1.49a6ed35f4febp-124, 0.0, 0.0, 0x1.ae9c1b21ee023p-459, 0.0,
     0x1.9c1c941653343p-844, 0x1.cae56cc91a03ap-985, 0.0, 0x1.838bb63deda68p-738,
     0x1.5fb4b9c5e8405p-3, 0.0, 0x1.d59a929f9b9b3p-751, 0.0, 0.0,
     0x1.d87839b04e601p-98, 0x1.0815f3797b6e4p-138, 0.0, 0x1.ae921afab263p-540, 0.0,
     0x1.5b27a4ae8042p-637, 0.0, 0.0, 0x1.bbe4d1128b5acp-1014, 0.0, 0.0, 0.0,
     0x1.cb7b3aed435b6p-326, 0x1.a0ad277c3924ap-684, 0x1.62ae22c0058ep-906,
     0x1.c1377e4b3b826p-831, 0x1.1f351e8a855e8p-789, 0.0, 0x1.07ae70ed52e73p-594,
     0x1.4536418aa341ep-33, 0.0, 0x1.2afc2f3fd74dep-1003, 0.0, 0x1.bb9388757a106p-699,
     0.0, 0.0, 0.0, 0x1.115e759b9463ep-978, 0.0, 0x1.1d5384f7965cap-997,
     0x1.bb89d773ee8b5p-474, 0x1.c11816e0eb139p-89, 0.0, 0x1.f41b34148fd17p-91,
     0x1.6ee0f7d436d07p-566, 0x1.f0f73ff2a4f27p-143, 0x1.147559fcf0597p-262, 0.0,
     0x1.e9beb16a364c7p-149, 0.0, 0x1.8e23c81577018p-161, 0x1.5ba9f7dd1e246p-646, 0.0,
     0.0, 0x1.bc2c6a958b91dp-782, 0.0, 0.0, 0x1.2bd2634ddad9bp-193, 0.0, 0.0,
     0x1.cbe7e7c5a1b45p-937, 0x1.bb0a41014c088p-15, 0.0, 0x1.b2dfa14477086p-994, 0.0,
     0x1.fcf172e878a71p-342, 0.0, 0x1.a37b8f68a8553p-160, 0x1.41eaaedd02e2p-17, 0.0,
     0x1.4e1dae868fa9bp-711, 0.0, 0x1.70b41d9d12a2ap-568, 0x1.e0f202971429cp-804, 0.0,
     0.0, 0x1.f7fa9465b927ep-452, 0.0, 0.0, 0.0, 0x1.d7d511d3055ccp-697, 0.0, 0.0,
     0.0, 0.0, 0x1.4435c0045cdcep-523, 0.0, 0.0, 0x1.85f683ceec10bp-586, 0.0,
     0x1.be1c5f8fc0224p-777, 0.0, 0.0, 0x1.1d85dd5065ddbp-86, 0.0,
     0x1.aadb59772468p-265, 0.0, 0x1.be59b5b75ac02p-790, 0x1.459d13ae00f45p-607, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97de93ce4bc37p-909, 0.0,
     0x1.4b005aa0d7fa6p-803, 0x1.48425bf7d4f7dp-617, 0.0, 0.0, 0.0, 0.0,
     0x1.14da2e1603445p-762, 0x1.b433dd97a322p-814, 0x1.451fab66e9a61p-837, 0.0, 0.0,
     0.0, 0x1.3554453705f16p-82, 0.0, 0.0, 0.0, 0x1.777dd346959b2p-874,
     0x1.4787d3118c78bp-1020, 0x1.e8d8e15983867p-351, 0.0, 0.0, 0x1.6ca88bbb21ffp-590,
     0x1.f9b1dbe1791b1p-569, 0.0, 0.0, 0x1.0ec9535a738d2p-947, 0x1.fed63f4019f3ep-71,
     0.0, 0x1.695c2e4e4a494p-80, 0x1.d47bb0f7b4df9p-977, 0x1.3899bf6655b34p-971, 0.0,
     0.0, 0x1.c18133612be2fp-329, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.127629f2a85efp-983, 0x1.7a9d77e3b9896p-553, 0x1.b6eebd4b7118ap-853,
     0x1.250dc18bc7044p-311, 0.0, 0.0, 0x1.164c2e890915p-680, 0.0, 0.0, 0.0,
     0x1.e4d329fabb321p-544, 0.0, 0x1.2cea48dc8f3f6p-882, 0.0, 0x1.ecabff99cf4a6p-82,
     0.0, 0x1.9834363fd26fbp-809, 0x1.5b871458bdc6ep-415, 0x1.5b2fa4a6404d9p-767,
     0x1.0e04896138299p-424, 0x1.8fd6fc2e45189p-874, 0x1.5a3e0c35c63b2p-688, 0.0,
     0x1.b5be9aae40218p-856, 0x1.7f2095aa6c153p-443, 0.0, 0.0, 0x1.821393a8a2033p-165,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0312e81a116ep-695, 0x1.4054b1a542b72p-972,
     0x1.799f571d48cc8p-668, 0.0, 0x1.c548097c079c7p-452, 0x1.00a50268dd234p-788,
     0x1.ced2faa1ac023p-904, 0x1.fb1a0d2b749d1p-307, 0x1.150d9e414205ap-382,
     0x1.a7376d446c901p-788, 0.0, 0.0, 0x1.968d1e2e033cdp-225, 0.0, 0.0, 0.0,
     0x1.ef80bad8a0e22p-706, 0.0, 0.0, 0x1.0eee1e94d1919p-182, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b3ebec1f35e7fp-214, 0x1.e5f762d915234p-676, 0x1.24ef2d28e1dcdp-63,
     0x1.98c9df50260d8p-855, 0x1.580bdc8c00948p-93, 0x1.ab4cd7494297p-411,
     0x1.bd952d7e78458p-410, 0.0, 0x1.365e398f2899ap-634, 0.0, 0x1.137800e0bc94dp-124,
     0x1.72b21637dddaep-875, 0.0, 0x1.b62954ca24f6p-318, 0x1.32be7745c8b9p-392,
     0x1.975458d331ef3p-291, 0.0, 0x1.3bcfd8cff0411p-654, 0x1.30075224f49eap-459, 0.0,
     0.0, 0.0, 0.0, 0x1.73c1f9e3158e5p-248, 0.0, 0.0, 0x1.2d3e5b4d08b06p-174, 0.0,
     0x1.ca88cf19bf1fap-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.009a79a9c6467p-209,
     0.0, 0x1.afe71a780b669p-543, 0.0, 0x1.eda384ef860acp-461, 0.0,
     0x1.ebdf9b9298f1p-80, 0x1.4600a72b766d9p-184, 0x1.e286a01df20a2p-987,
     0x1.d6d6d413e0f35p-8, 0.0, 0x1.03a1dc7d852bp-41, 0.0, 0x1.915c20836d0d3p-282,
     0.0, 0.0, 0.0, 0x1.11a3d2ba677a7p-299, 0x1.0ea426b632a87p-402, 0.0,
     0x1.0db1fbfdbf369p-883, 0x1.b0a6b00d71163p-82, 0x1.2371c9adb61f5p-498, 0.0,
     0x1.702863d2b275bp-924, 0x1.9d2202caad60bp-753, 0x1.f1f16a16c54a4p-978,
     0x1.5c0ff6ea082a1p-135, 0.0, 0.0, 0.0, 0.0, 0x1.27fc3b6eeecfbp-163,
     0x1.cc9232a894dd2p-556, 0.0, 0x1.5eced438e579cp-832, 0x1.e58439c289f68p-2,
     0x1.f60a8c5993e0bp-752, 0.0, 0x1.02081948b21d3p-199, 0.0, 0x1.17fffecd465f2p-867,
     0x1.d135e75bb0346p-467, 0x1.bac8844cccd4cp-955, 0x1.9d59578beab54p-93, 0.0, 0.0,
     0x1.3899620daee95p-401, 0.0, 0x1.3671663273b6p-300, 0.0, 0x1.f0539461d59e4p-828,
     0x1.472ed8f041705p-77, 0.0, 0x1.137a81f5b857fp-1018, 0.0, 0.0,
     0x1.5704fb73582ap-598, 0.0, 0.0, 0.0, 0.0, 0x1.96a3f608d8371p-664, 0.0,
     0x1.2a8a002f3d0e2p-5, 0x1.ff6d6adb3731dp-173, 0x1.b38eddb79d8d3p-351, 0.0, 0.0,
     0x1.a05c7c5e6a5cap-296, 0.0, 0.0, 0x1.3b08ecbcc716p-452, 0x1.555ca18fbf9c4p-404,
     0.0, 0x1.e48f75ba879c2p-560, 0.0, 0.0, 0.0, 0.0, 0x1.4ad6de6653149p-834,
     0x1.443071cf0a4ebp-434, 0.0, 0x1.9732b4d22badap-96, 0.0, 0x1.0a3701a24f918p-759,
     0x1.cde31891eff8fp-326, 0.0, 0x1.38a21d3723492p-330, 0x1.ac6ec07876864p-760, 0.0,
     0.0, 0x1.4e1b7a9b841cbp-305, 0.0, 0.0, 0.0, 0x1.6257958a6bd7bp-747,
     0x1.808ac1b2d6e11p-69, 0.0, 0.0, 0x1.519361f07da9ap-132, 0.0,
     0x1.5dca091198483p-971, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.987b110b9f021p-264, 0.0,
     0x1.8056754297aa8p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b84218d2401dp-839,
     0.0, 0x1.1987d93d7cd6dp-480, 0x1.eee54c2002cd4p-265, 0x1.1a199dcd351cp-570,
     0x1.3eb48c92e788cp-1, 0.0, 0x1.5e7513974e8dep-253, 0.0, 0x1.6a29bd8b8b658p-176,
     0.0, 0x1.9dd367521df6ep-205, 0.0, 0x1.fb7418b98b80dp-102, 0x1.743797d16a9dep-683,
     0.0, 0x1.82871b30eb01ap-610, 0x1.36bd0a078ac45p-345
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
            tmp1 = sqrt(tmp0);
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
    printf("sqrt %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("sqrt bench acc %la\n", global_bench_acc);
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
