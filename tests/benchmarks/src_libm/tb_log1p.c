/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_log1p.c --function log1p --headers math.h,ml_support_lib.h \
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
     0x1.72f010588865dp-35, 0.0, 0.0, 0.0, 0.0, 0x1.245ad1635ab8bp-766, 0.0,
     0x1.be9d09198d667p-768, 0.0, 0x1.9ef93f44777cdp-762, 0.0, 0.0,
     0x1.b1ab59cbc4952p-889, 0x1.a9e46f523f129p-745, 0x1.310171e263178p-930,
     0x1.fc037ccb1134ep-945, 0.0, 0x1.5ed92487745ap-86, 0x1.65c52d23934cp-555, 0.0,
     0x1.2990cebc8ce8ep-509, 0.0, 0x1.190487888fcd1p-852, 0x1.222ee1d770709p-687,
     0x1.889b68f7f39efp-968, 0x1.dd6312fcc2531p-434, 0x1.c05e996d2dc8p-858, 0.0,
     0x1.0b667f4d89c0bp-414, 0x1.91e75174557cdp-340, 0.0, 0x1.d059d3b3f9cccp-561,
     0x1.b13c271795d6ap-228, 0x1.2ac86f1ad0e4ap-892, 0.0, 0x1.98e0011633444p-366, 0.0,
     0.0, 0x1.53103a1f2bdfbp-465, 0.0, 0.0, 0.0, 0x1.e14343dc00821p-250, 0.0,
     0x1.15ed561beb143p-386, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14349f001cd1p-558, 0.0, 0.0,
     0x1.764aeac385026p-981, 0x1.1555eeeb60085p-857, 0x1.c4556e6493749p-610,
     0x1.4e1b4597f556p-557, 0.0, 0.0, 0.0, 0.0, 0x1.1f015e180eaadp-403,
     0x1.6186514257381p-171, 0.0, 0x1.38f4fe05cb9f9p-879, 0.0, 0x1.06478eff503c1p-413,
     0.0, 0x1.43c79464a3463p-630, 0x1.0f354404e0abfp-160, 0x1.9abbbcad4e823p-457, 0.0,
     0x1.67238a1883c88p-354, 0x1.eb0a8cecf2018p-712, 0.0, 0x1.475e15e8455dp-957,
     0x1.abf84baf59758p-520, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.787d5a3bc9835p-760, 0.0,
     0x1.82d3b8e21d41dp-456, 0.0, 0x1.183a33324fa72p-839, 0.0, 0x1.9932d436ed50fp-747,
     0.0, 0x1.c6b18bd5e747cp-44, 0.0, 0.0, 0.0, 0x1.a92d3a3249e15p-980, 0.0, 0.0,
     0x1.dc004e573fde5p-480, 0.0, 0x1.70a9c56ecfc6ap-75, 0x1.a172f5801bd95p-285,
     0x1.5e2f97bca7ebdp-463, 0x1.48ca4c48cabaep-394, 0x1.5b493d89ba5f9p-884, 0.0,
     0x1.a8c4395b8d533p-979, 0.0, 0.0, 0x1.4cf15d633e887p-11, 0.0,
     0x1.d5c93fefa0da7p-765, 0x1.83af551646a3dp-816, 0x1.0a570c5027897p-846, 0.0,
     0x1.9bc01954fce58p-664, 0.0, 0x1.9689712596a0ep-742, 0x1.8a35a65697452p-205,
     0x1.b37afdf8fd53p-267, 0.0, 0x1.4bd739408b55dp-681, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c31c149cee9d8p-848, 0x1.cf682f185e87fp-310, 0.0, 0.0, 0.0,
     0x1.61fe9a9bd1b4bp-971, 0x1.df743c6abb64dp-465, 0.0, 0x1.988e2c0f59ebep-432, 0.0,
     0.0, 0.0, 0x1.ebe567e328d8fp-287, 0x1.8ac89efcab2cbp-261, 0x1.e12d4facfbb8ep-200,
     0x1.4a2e087479a2cp-375, 0x1.da11023ab1697p-311, 0.0, 0x1.c07546bf2ff2p-103,
     0x1.f642235625fdfp-210, 0.0, 0x1.1142bb621f773p-841, 0x1.5f8ead7440169p-81,
     0x1.1e143160c3b1cp-115, 0.0, 0x1.0a8645044740ap-698, 0.0, 0.0,
     0x1.b148d5ae60f06p-800, 0.0, 0.0, 0x1.c43d9fe73b9cep-832, 0x1.4cb43668a2b2ap-202,
     0x1.40a861c5b27abp-362, 0.0, 0x1.988e9f88b75abp-313, 0x1.f6841f40ac45ap-861, 0.0,
     0x1.d8792aa3a5ab9p-882, 0x1.660ee82f471dcp-462, 0x1.3fae99ad7e06dp-448, 0.0,
     0x1.2dfe3fccb01e7p-709, 0.0, 0.0, 0.0, 0x1.8816a126f684ap-960, 0.0, 0.0, 0.0,
     0x1.5e6ef1c8d2ed4p-47, 0x1.209543d4fab96p-703, 0.0, 0x1.58b07d6c52e3ap-511, 0.0,
     0x1.0c1bbd29a37e9p-198, 0.0, 0.0, 0x1.bf23c01f16d87p-956, 0x1.246b14e8ab57cp-29,
     0x1.b808d031518c8p-760, 0.0, 0.0, 0x1.1df108501f0b5p-959, 0x1.e5b45d212ad27p-662,
     0x1.3563ab8b74789p-157, 0x1.69d4873eabf3cp-895, 0.0, 0x1.df288fdb8366ep-575,
     0x1.6d91766d49291p-279, 0.0, 0.0, 0x1.83e8467057264p-487, 0x1.be640118072dp-520,
     0.0, 0.0, 0x1.3720d22907ceep-935, 0x1.fcedadae2291dp-986, 0x1.e4277401c8c4fp-42,
     0x1.f72f82c338375p-865, 0x1.bd10d2beadbb2p-567, 0.0, 0.0, 0.0,
     0x1.98a2a7e47fdb1p-887, 0.0, 0.0, 0.0, 0x1.0db492009afbbp-840, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3a8a6e36fbc1ap-975, 0.0, 0.0, 0.0, 0x1.43d8d16118632p-196,
     0.0, 0.0, 0x1.ee338d97c250ep-846, 0.0, 0x1.976d7354c6d02p-431, 0.0,
     0x1.ea476a05ff52ap-353, 0x1.963fb54a00bf3p-143, 0x1.6824e2068af5cp-857,
     0x1.043d068c038a8p-763, 0.0, 0x1.ed446c29a95d9p-620, 0x1.b03b7197be5aep-409, 0.0,
     0.0, 0x1.4a06d4d280585p-741, 0x1.4f86c141f039dp-19, 0.0, 0.0, 0.0, 0.0,
     0x1.be13c1a36497p-163, 0.0, 0.0, 0x1.190031466325ap-810, 0x1.1414276dcfa7fp-506,
     0x1.cd5c4e21db599p-928, 0x1.5b00d69508e02p-294, 0x1.b4aa3a501cf8ap-13, 0.0, 0.0,
     0x1.4167b1bdbe442p-20, 0x1.90e9759f6401ep-37, 0.0, 0.0, 0.0,
     0x1.816b47b2d9acfp-890, 0x1.4c690a706b361p-509, 0x1.c928c42019ff8p-92,
     0x1.de0d340535541p-591, 0x1.8c19efbd48b9cp-243, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7bcc591b7a2fep-628, 0x1.85a4f591d51b3p-192, 0.0, 0x1.a3c75edbd0f3ep-814,
     0x1.7c40b6f89f971p-235, 0x1.cd4f8df0ff045p-485, 0.0, 0x1.d6ddf09ab73f4p-44,
     0x1.90e0c5707f9f3p-544, 0.0, 0x1.50454a05c409bp-610, 0x1.724c1ea69d103p-467,
     0x1.96767d302b0e9p-1005, 0x1.51c8d5c09885p-8, 0x1.1e719e3657ff9p-56,
     0x1.82ae6fbb47c23p-381, 0.0, 0x1.fb00c6350b338p-597, 0x1.3d4b171da1dap-132, 0.0,
     0x1.f974fa192336ap-26, 0.0, 0x1.45eb622bfe5bep-200, 0x1.b7f14c48514e3p-938,
     0x1.5412c07f0788cp-833, 0x1.be9c6bc8683f8p-62, 0.0, 0x1.d98a0dc9c2717p-275,
     0x1.e7e35e9b931a7p-468, 0.0, 0x1.6a7e18f4aea28p-915, 0x1.307be419a535ap-515, 0.0,
     0.0, 0.0, 0x1.a3b6fcc2d7858p-141, 0x1.9fa86ab9084e9p-50, 0x1.50a4de0a451bcp-394,
     0x1.ab265ff3b7d25p-737, 0.0, 0x1.52032ec5b1cbep-405, 0.0, 0x1.365a99b569049p-744,
     0.0, 0x1.3f13bef2c0217p-568, 0x1.3a75a75fef823p-18, 0.0, 0.0, 0.0,
     0x1.41bb700ff3c6ep-292, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a524e15eddc98p-390, 0.0, 0.0, 0.0, 0.0, 0x1.bbd5c070dbad6p-839, 0.0,
     0x1.9208e81cbe5e7p-761, 0.0, 0.0, 0.0, 0x1.56901fbd19942p-424, 0.0,
     0x1.ad39b0164a8c8p-61, 0.0, 0.0, 0x1.fd4801d4d4541p-12, 0x1.cba5ebde53fb9p-370,
     0x1.d7a01e31657e8p-111, 0x1.231c5e452ef6p-944, 0.0, 0x1.522c7095fef3cp-28, 0.0,
     0.0, 0x1.592776d98eb71p-461, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58786be78e25ap-907,
     0.0, 0x1.5da933536e3adp-821, 0x1.85490bb439b65p-199, 0x1.34017403312ccp-213,
     0x1.6ed34c993d943p-509, 0.0, 0.0, 0x1.190752e175aap-311, 0.0,
     0x1.73395e78d342p-955, 0.0, 0.0, 0.0, 0x1.8447e2c51aec5p-353,
     0x1.a771672fa2251p-631, 0.0, 0.0, 0x1.5a01b2b2ba6c9p-416, 0.0,
     0x1.f75d7f55af62ap-255, 0.0, 0x1.e1fee8bd4ac86p-512, 0.0, 0.0,
     0x1.fb31d5d86db0cp-174, 0.0, 0.0, 0.0, 0.0, 0x1.1ac94bc7f6ee7p-488, 0.0, 0.0,
     0x1.44d53636512a1p-827, 0x1.dd2092dd1db47p-991, 0x1.1cff93af9249p-229, 0.0,
     0x1.f0d95f756846ap-97, 0.0, 0.0, 0.0, 0x1.eaf984edf43acp-242,
     0x1.6b4081eb919b5p-524, 0.0, 0x1.9cb99cf174b9ap-8, 0x1.610f2f5daa40cp-800, 0.0,
     0x1.591ec015354c1p-419, 0.0, 0.0, 0x1.ef89565080d7bp-237, 0.0,
     0x1.d56fdca17995p-539, 0.0, 0x1.ebe99601f6c64p-12, 0x1.16f88259bd301p-504, 0.0,
     0.0, 0x1.5b94ceee7bd4p-704, 0.0, 0x1.84cec9776de71p-507, 0.0,
     0x1.ef9330876915ap-551, 0x1.86e6faf2e26c3p-311, 0.0, 0x1.485bae0b9c1b5p-410,
     0x1.5a748ea2ae814p-466, 0.0, 0x1.faef8cb1f1556p-716, 0.0, 0x1.ef484d86406dcp-782,
     0x1.c6805adcd2f7fp-548, 0.0, 0x1.15a7fa6b66b6p-41, 0x1.592003cdd4d0ep-711, 0.0,
     0.0, 0.0, 0.0, 0x1.cf9f44b9ec8cbp-491, 0x1.f18f5f35e6107p-405,
     0x1.a0c68a5ef921bp-388, 0.0, 0x1.dabb9d6b2bfb8p-247, 0.0, 0.0,
     0x1.cfe22df37306dp-41, 0.0, 0x1.cbca005b80256p-859, 0x1.4fdfae07650fp-884, 0.0,
     0.0, 0x1.bf07ee4b9742bp-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a433ebce66ca6p-940, 0.0,
     0x1.457e283b3a6bap-550, 0x1.32fe16e06fa73p-610, 0.0, 0.0, 0.0,
     0x1.62cc83f4498b5p-765, 0.0, 0.0, 0x1.e1c14720a64e8p-848, 0.0, 0.0, 0.0,
     0x1.9afb9a93b5c64p-116, 0.0, 0.0, 0x1.0621acdc1f305p-452, 0x1.d19100c1eedefp-754,
     0.0, 0x1.1a91b50755b7ap-210, 0.0, 0.0, 0x1.c00a6094c09f5p-180,
     0x1.6b17fbadf3345p-522, 0x1.f5f74aa1bbb9fp-42, 0x1.331958c67aadcp-842, 0.0,
     0x1.48fed49ee2816p-940, 0x1.37c894bb19dcbp-154, 0x1.60503934f8401p-309,
     0x1.650a3ff7ef22p-213, 0x1.ccba4eff62217p-921, 0x1.facb4b6deb809p-454,
     0x1.4fc5c9d15b896p-237, 0.0, 0x1.371bce6f524a7p-920, 0.0, 0x1.2c9eaa19f3346p-592,
     0.0, 0x1.4cfef19d76246p-165, 0x1.955cc4b39bd99p-942, 0x1.21119e4f96159p-116,
     0x1.c1b392fe8f6a3p-457, 0x1.74fb6ba430026p-443, 0.0, 0x1.377b084516901p-178, 0.0,
     0x1.5c323e087a93fp-270, 0.0, 0x1.8b301e9ddaa14p-868, 0x1.4f677bf3ace14p-727,
     0x1.43f02abdbaa84p-481, 0.0, 0x1.e8e05c2b37807p-1011, 0x1.78f895d22914fp-590,
     0x1.96913f007612bp-384, 0x1.a20596e19a168p-1019, 0x1.ea0b60bd69fbap-315, 0.0,
     0x1.4f456441ece9ap-52, 0x1.815bae519635p-609, 0x1.2d20bc3f4813p-157, 0.0, 0.0,
     0.0, 0.0, 0x1.7f34db31d2db8p-521, 0x1.574c15e898a04p-764, 0.0,
     0x1.91e87a632eaebp-673, 0x1.4b144b87dad69p-208, 0x1.ed460f793f4f8p-116, 0.0, 0.0,
     0x1.6e9c18a77d3cbp-717, 0x1.efb303148267p-840, 0x1.41376f37175bcp-1019, 0.0, 0.0,
     0x1.997abb6e3cc03p-735, 0.0, 0x1.8e305cb558735p-48, 0x1.45ec9e114278cp-590, 0.0,
     0.0, 0.0, 0x1.bc6c81779e47dp-610, 0x1.ac11c5e4a5cf1p-468, 0x1.98335201da3d6p-9,
     0.0, 0.0, 0.0, 0.0, 0x1.9a2c73cdfbe7fp-545, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58a4b12563b4p-67, 0.0, 0.0, 0x1.00005f254cc0ep-125, 0.0, 0.0,
     0x1.f2673e5dba95fp-30, 0.0, 0.0, 0.0, 0x1.e72ac07357fa4p-646,
     0x1.55982dc1f9886p-452, 0.0, 0.0, 0x1.6b517ce11bbdap-856, 0.0,
     0x1.29bf0f227d145p-330, 0.0, 0.0, 0.0, 0x1.325a89a0329fcp-745, 0.0, 0.0, 0.0,
     0x1.a798b13699182p-402, 0x1.b5c25ef3b3ee4p-801, 0x1.69b5b165b984ep-356,
     0x1.5788f17c3a449p-36, 0x1.0c484a81797a5p-405, 0x1.6cafad265bd4bp-953, 0.0, 0.0,
     0x1.35d2009b68fc6p-56, 0x1.05d3724f1ed64p-644, 0x1.f27fbb4681517p-587,
     0x1.85aabc09015e9p-232, 0x1.6cfd3e14a2f59p-740, 0.0, 0x1.95fb19a209fcap-652,
     0x1.c9f4ca1b26e8bp-915, 0x1.c7c64930ed836p-265, 0.0, 0x1.7d640f39d4c5ep-818,
     0x1.462ebc912b3fcp-977, 0x1.d171d9de09c3p-824, 0x1.90c3b60a6061ep-435, 0.0,
     0x1.1b9323f36d0e1p-470, 0.0, 0.0, 0x1.38b5107b987b8p-251, 0x1.76c2b899b0454p-902,
     0.0, 0x1.ec0d60772b066p-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6cde341af0fep-634,
     0x1.6bff5b1b4e5e6p-716, 0x1.e078dde3476c6p-18, 0.0, 0x1.14f3091a5fb2ep-680, 0.0,
     0x1.ae9fb9fb88fe5p-180, 0x1.16a8f0045c91fp-792, 0.0, 0x1.145e2482b1393p-365, 0.0,
     0x1.f5cf5c58f095cp-345, 0.0, 0x1.c2f2386fb0fa9p-968, 0.0, 0x1.1399546082ef7p-896,
     0x1.79430058bae9p-792, 0x1.e5e21fed4d14cp-803, 0.0, 0.0, 0x1.74642ec213926p-149,
     0.0, 0x1.644add327ccaap-478, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.746aa7303a7c3p-136,
     0x1.26099f9e62dc3p-752, 0x1.0aef1c0c09502p-278, 0.0, 0.0, 0x1.fc8cb74e86c9dp-288,
     0.0, 0x1.3ab32aeb08debp-665, 0x1.19e5934a4ca7fp-886, 0.0, 0x1.95ffd6bf13426p-171,
     0x1.cb400c1b68659p-436, 0.0, 0x1.d0930351af9b7p-535, 0x1.71d4cf79c9a1cp-514, 0.0,
     0.0, 0.0, 0x1.e40b0e5f75254p-756, 0.0, 0x1.ee9b79619b63fp-431,
     0x1.35394179d9a16p-562, 0.0, 0.0, 0.0, 0x1.5bbe6467e9706p-91, 0.0,
     0x1.8191f8ac18c15p-250, 0x1.89f440a93a822p-608, 0.0, 0.0, 0x1.4c926561b25c6p-950,
     0x1.8852e42e91719p-1012, 0.0, 0.0, 0.0, 0x1.fbcd7db151f91p-178,
     0x1.64df8d8812334p-888, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.39602ecbe1ac4p-497, 0x1.672ee6d62acb9p-305, 0.0, 0.0, 0x1.f3a5c11c993d1p-352,
     0.0, 0.0, 0x1.a02634dd4e33fp-261, 0x1.44abfa9cec1bp-918, 0x1.0edd70873462p-558,
     0.0, 0x1.cbab1c215d058p-673, 0.0, 0.0, 0x1.e2d95028d486ap-928,
     0x1.134d1ec668684p-950, 0.0, 0x1.f1c988ee243bp-71, 0.0, 0x1.704a42421a56ep-173,
     0.0, 0x1.fc123ca011181p-145, 0.0, 0.0, 0.0, 0x1.18c134e8c3128p-512,
     0x1.6b5c7b287885dp-721, 0x1.dec4adaf5fac2p-238, 0.0, 0.0, 0x1.4a36df2e2a159p-450,
     0.0, 0.0, 0x1.f827f24d79452p-836, 0x1.e82a2d9f0eed5p-831, 0.0, 0.0, 0.0, 0.0,
     0x1.9a19cf9993454p-692, 0x1.802d939cb9457p-248, 0x1.de6350edf70f9p-847, 0.0,
     0x1.9f8fc57a1b963p-932, 0.0, 0.0, 0.0, 0x1.11f4598c839e6p-686, 0.0, 0.0, 0.0,
     0x1.b5457ed1c2d0ep-103, 0x1.5dfe9c88e5586p-340, 0x1.845752661bd51p-595,
     0x1.624f8e89c7de4p-855, 0x1.b89b98b381a0cp-4, 0.0, 0.0, 0.0, 0.0,
     0x1.ab04dd388a6edp-182, 0.0, 0x1.1f9ca381f70ap-138, 0x1.e1fefd7933015p-417,
     0x1.a66a5f661482dp-652, 0.0, 0.0, 0.0, 0x1.018b90d835407p-987, 0.0, 0.0,
     0x1.6011b370abe88p-339, 0.0, 0x1.19b54103d4032p-581, 0.0, 0x1.847faaadd2accp-725,
     0x1.8b87bb5f700cap-1021, 0.0, 0.0, 0x1.ee0d9a46b7d54p-453,
     0x1.a1845d178e384p-320, 0.0, 0.0, 0x1.dc36fcf7bf7c2p-931, 0x1.c49211e7f8595p-276,
     0.0, 0x1.f4a7055ee6cfcp-642, 0x1.17397fc4b7a54p-533, 0.0, 0x1.5d11836a66019p-23,
     0.0, 0x1.0d14d64442d7ap-498, 0x1.0ce8cb3f73398p-514, 0x1.22411e2725747p-216, 0.0,
     0x1.e85c0a18a7b94p-864, 0.0, 0.0, 0x1.a3c48475f2cb7p-683, 0.0, 0.0,
     0x1.43f3465fb14ffp-73, 0.0, 0x1.a9ba3dad6218ap-749, 0x1.0a58a3e7860bdp-908, 0.0,
     0x1.06f41b893623bp-779, 0.0, 0.0, 0x1.af9bb5bc6458fp-580, 0x1.c3063a7e50252p-860,
     0x1.99c08b0a1b16ap-169, 0.0, 0x1.bd6c0304576d6p-190, 0.0, 0.0, 0.0,
     0x1.efe5c7136053cp-757, 0x1.98d2ac19a7ef4p-842, 0.0, 0x1.783a0c837c7bap-199, 0.0,
     0x1.f96db1bf5d3ecp-318, 0.0, 0x1.bdf957a0bb69cp-51, 0.0, 0.0,
     0x1.c38ce276de0dcp-487, 0.0, 0.0, 0.0, 0.0, 0x1.6c75d0f5adbf2p-848,
     0x1.06256c7bbe266p-366, 0x1.2d90e4db7860ep-928, 0x1.a35451cd7f0b2p-742, 0.0, 0.0,
     0.0, 0x1.a3ff646bc439bp-510, 0x1.35dcce52de42p-985, 0x1.aa565fab61412p-934, 0.0,
     0x1.f506bf52ea64p-218, 0x1.1addba9bdc30ap-1020, 0x1.751095b19b375p-1012,
     0x1.ec05f4c1e850ap-670, 0.0, 0.0, 0x1.8985b99048371p-40, 0.0,
     0x1.eaadbd732a585p-417, 0x1.42754af62fd1bp-556, 0x1.f878c02d0a513p-797, 0.0, 0.0,
     0.0, 0.0, 0x1.0831ce4eef1f7p-793, 0x1.e12996c4d9bebp-278, 0x1.b7f8858c7b4cdp-393,
     0x1.17da77d67e07fp-959, 0x1.d6349c9b09db4p-511, 0.0, 0x1.9a0da09703311p-269,
     0x1.396d44591e766p-918, 0.0, 0x1.74e3781c6c74dp-637, 0.0, 0.0,
     0x1.acdfdcf2e89ap-836, 0.0, 0x1.b1cdf422da7f9p-721, 0x1.2e8ba16ac5ff6p-563,
     0x1.240a05fb0552ap-409, 0x1.599c0796ad98fp-265, 0.0, 0x1.0f11f8e28b501p-713, 0.0,
     0x1.d8841a5ee8697p-394, 0x1.e8fa5ca4f2e3dp-687, 0.0, 0x1.adf0929e8ed46p-537,
     0x1.f8fb6a67a4c2ep-224, 0x1.ade641bc76ee7p-169, 0x1.515ffc8c5accep-557, 0.0,
     0x1.7af4f741d7f53p-242, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.749b6891705c9p-8,
     0.0, 0.0, 0x1.a39d2e89c977fp-501, 0x1.6a1afefe39b89p-948, 0.0, 0.0,
     0x1.81d12260b28bbp-1002, 0x1.9f16d6c0cbf25p-514, 0x1.6f10371d4abbcp-507,
     0x1.29c840b951ab7p-454, 0x1.4224166d06748p-514, 0x1.60ca5cf246afap-423,
     0x1.126739174332p-69, 0x1.af22bfc0b05b8p-983, 0x1.d1beb9eb12e56p-453,
     0x1.462a8b676774fp-27, 0x1.43ffb0c8dbc86p-493, 0x1.ba5868cd9d70cp-456, 0.0,
     0x1.a6386a160d04p-182, 0x1.5db028a386d1p-857, 0x1.fb3651d2e2b05p-48, 0.0,
     0x1.e40e9569a87e1p-768, 0x1.1488ec7a34a35p-382, 0.0, 0.0, 0x1.04d6733044ed6p-527,
     0.0, 0.0, 0x1.99773da8ffecbp-341, 0x1.21ebce4ec9398p-393, 0.0, 0.0,
     0x1.75f34e66d335ap-381, 0x1.9765fd68a892cp-805, 0.0, 0x1.b6e5fae59f96cp-355,
     0x1.70fcdf8d4c21cp-146, 0x1.b4353c16f9dc6p-883, 0.0, 0x1.51d9ed5b2d488p-776, 0.0,
     0.0, 0.0, 0x1.16948f31318a1p-525, 0.0, 0x1.316a5ba80e64bp-1022,
     0x1.735bba6bd6e4cp-243, 0x1.d66f7e7292a78p-766, 0x1.938e542f9abep-688,
     0x1.67cde2cc56157p-273, 0x1.062431be4e0d8p-84, 0x1.4b93fc145e937p-836,
     0x1.028d6f8abb3ccp-419, 0.0, 0x1.fd30f9ecd1277p-660, 0.0, 0.0, 0.0,
     0x1.d8db31958c9a5p-29, 0x1.fc9ca3f08f0b6p-590, 0x1.ad840ae61effdp-46, 0.0, 0.0,
     0x1.420bc1e0548bep-1012, 0.0, 0.0, 0.0, 0.0, 0x1.78ff208a7eaadp-477, 0.0, 0.0,
     0.0, 0.0, 0x1.15f97cc3f563ap-601, 0.0, 0x1.79186139dfa05p-941, 0.0, 0.0, 0.0,
     0.0, 0x1.4acee9bfe3f2p-91, 0.0, 0.0, 0.0, 0x1.088bb5af63bc7p-654,
     0x1.5a4762c1c41dep-976, 0x1.fb071a3d9518ap-527, 0x1.c82916e514c74p-586,
     0x1.ed3305717fd45p-551, 0.0, 0x1.079d560469635p-596, 0.0, 0x1.f6876b8ebb88ep-311,
     0.0, 0.0, 0.0, 0x1.71486f9c71ec6p-119, 0x1.99ce85591ea41p-131, 0.0,
     0x1.d32a6a6bc3b91p-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6f9b4809587dp-438,
     0.0, 0.0, 0x1.245457d2219cap-522
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
            tmp1 = log1p(tmp0);
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
    printf("log1p %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("log1p bench acc %la\n", global_bench_acc);
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
