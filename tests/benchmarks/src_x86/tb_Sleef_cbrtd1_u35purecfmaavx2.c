/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd1_u35purecfma.c --function \
 *     Sleef_cbrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.dcbae7555cd1bp-551, 0x1.59e23015a6eaap-900, 0.0, 0x1.766e1fa4e3ebbp-761,
     0.0, 0.0, 0.0, 0x1.0bab7bbb44893p-479, 0x1.cd2eac1d2df4fp-84,
     0x1.fe2ef0ba409bep-634, 0.0, 0x1.a789e4ba10eb5p-992, 0.0, 0.0,
     0x1.7c64f83ebdc9cp-768, 0x1.b2e27e468d4e9p-200, 0x1.e098b799b55f7p-11, 0.0,
     0x1.445246f240793p-53, 0x1.4df1b8c0fa95fp-815, 0x1.87e9143b3ca8bp-848, 0.0,
     0x1.020470659472dp-928, 0.0, 0.0, 0x1.17d1c2eeff556p-829, 0.0, 0.0, 0.0, 0.0,
     0x1.3df06e4712863p-713, 0.0, 0.0, 0x1.93e32cb3e80fcp-408, 0x1.6d82fc868b35dp-210,
     0.0, 0x1.815f1ad2259bdp-864, 0x1.282154a20c424p-411, 0.0, 0.0, 0.0,
     0x1.027d37308db64p-887, 0.0, 0x1.f2ed565738f26p-478, 0.0, 0.0,
     0x1.48c61bac7f3f7p-341, 0x1.96c931ebcfd63p-360, 0.0, 0x1.8abc703d547eap-957,
     0x1.c4203645c90e1p-189, 0x1.bbb85e944ca91p-77, 0x1.52e8dcf693ba6p-953,
     0x1.6229a371cb748p-575, 0.0, 0x1.062d745477d56p-42, 0x1.d699a74b817f9p-465, 0.0,
     0x1.472f609e091dcp-270, 0x1.6153211b21545p-27, 0x1.7f9e9e81637a2p-955,
     0x1.fe2ecfd09b736p-189, 0x1.2bef363abbdacp-178, 0x1.626c01543e52ep-681, 0.0,
     0x1.859d6364ca139p-155, 0.0, 0.0, 0x1.b412e8a7370fbp-471, 0x1.52fa6f7217879p-598,
     0x1.399917c483703p-946, 0.0, 0.0, 0.0, 0.0, 0x1.c3a2894f61784p-781, 0.0, 0.0,
     0x1.05f226e88b307p-505, 0x1.a4f881e36c426p-60, 0x1.d7ae2b22e1a2ap-532, 0.0,
     0x1.a97be2b8082p-426, 0.0, 0x1.fc2aedf0ce8c3p-904, 0x1.975ac13e40224p-804, 0.0,
     0x1.072ac8317f1b5p-484, 0.0, 0.0, 0x1.de1ff5cc570b8p-282, 0.0, 0.0, 0.0,
     0x1.08c7fcb9ac6b1p-741, 0.0, 0x1.447f16d979513p-859, 0.0, 0.0,
     0x1.e55762d56831cp-867, 0x1.372aeb6b49b49p-307, 0.0, 0x1.b77546381fdcbp-246,
     0x1.636f3f214e396p-71, 0x1.2613ee79d360cp-251, 0x1.f4f124f3affcep-56,
     0x1.7c043c8d8c672p-239, 0x1.ca9c92f396909p-886, 0.0, 0.0, 0x1.7dddfc7f37a83p-913,
     0x1.f40252e0c4587p-427, 0.0, 0x1.418793c6929bap-937, 0.0, 0x1.e2ab908e7f468p-87,
     0x1.d44dd99df56e1p-763, 0x1.4aed3d9062e8cp-967, 0x1.dfd19245d19fep-183, 0.0, 0.0,
     0.0, 0.0, 0x1.79286a8f6aeaep-586, 0x1.5afe47b5860f7p-392, 0.0,
     0x1.cb8279f5fe36cp-305, 0x1.2ecf27d82976ep-755, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12c1886a6fb18p-505, 0x1.8d12c747a1d9bp-701, 0x1.0b366a3b06f12p-574, 0.0, 0.0,
     0x1.bf61fceab5088p-741, 0.0, 0.0, 0.0, 0x1.4c4594c2dcc7p-368,
     0x1.bbc9e5c36ac65p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9e8a5a65e5b5p-256,
     0x1.330586ab825e1p-559, 0x1.2d3c372a824b1p-616, 0x1.2c641b6ebfbc6p-61,
     0x1.536570cc8d637p-949, 0.0, 0x1.73a95cdab0486p-425, 0x1.09e07a140bb4bp-895,
     0x1.880e8c4694961p-324, 0.0, 0.0, 0.0, 0.0, 0x1.34093b04d533p-473, 0.0,
     0x1.fb8c57aaf7f94p-935, 0.0, 0.0, 0x1.2e94e58baf274p-673, 0.0,
     0x1.c17aa1880d826p-519, 0.0, 0.0, 0.0, 0x1.798ec7411545bp-146,
     0x1.73c4046d207c2p-655, 0x1.f26a989d242d8p-551, 0x1.583ae48dd1e83p-949, 0.0,
     0x1.5a388f584231p-672, 0x1.e373ab065195p-483, 0.0, 0.0, 0.0, 0.0,
     0x1.9ddb38bff4a5ep-264, 0.0, 0x1.8ddc5b24b07cfp-907, 0x1.e8548f8c4a267p-600, 0.0,
     0x1.d569d9eb639f9p-561, 0x1.988ecfbc1a35dp-1016, 0x1.7ca06575507bcp-450, 0.0,
     0x1.8b5b38e7eb76p-158, 0.0, 0x1.7b47accd58423p-82, 0.0, 0.0, 0.0,
     0x1.7cc237c98e5e8p-400, 0x1.df6ad623eef19p-237, 0.0, 0x1.94cbd566717afp-75, 0.0,
     0x1.cea5be64b2f06p-549, 0x1.639c1c0167142p-481, 0.0, 0.0, 0x1.17e03515de304p-647,
     0x1.b2f139699d674p-622, 0x1.55320b626cd7dp-62, 0.0, 0x1.f2acce9dad805p-708,
     0x1.e7fb439614cfep-682, 0.0, 0x1.f9bebc841abbep-1020, 0.0,
     0x1.3e0f4adfd2be7p-938, 0x1.7e5050fd35e07p-716, 0x1.1fffd5f703eaap-560,
     0x1.761a3a9030312p-396, 0x1.870aa47def953p-287, 0.0, 0.0, 0.0,
     0x1.892161e0c8ab8p-901, 0.0, 0.0, 0.0, 0.0, 0x1.07be9d69a5bf1p-245, 0.0, 0.0,
     0.0, 0x1.17b67e98a9c51p-498, 0.0, 0x1.7dfba73a2788cp-244, 0.0,
     0x1.b2f73e42b5a73p-692, 0.0, 0.0, 0x1.1407d8a40260ap-252, 0.0, 0.0, 0.0,
     0x1.31af5e2e8dbe6p-572, 0x1.2deec060cd9b4p-146, 0.0, 0x1.cec6a4849032ap-650, 0.0,
     0x1.ed01ba72ebaaap-866, 0x1.9a41c4757e761p-23, 0.0, 0.0, 0x1.50658b666ea51p-142,
     0x1.f9e55ca0ab7afp-157, 0.0, 0.0, 0.0, 0x1.551928363a056p-405,
     0x1.293dbaa44f9bep-717, 0.0, 0x1.cafc5300cb01fp-389, 0.0, 0x1.609c8e31d35aep-121,
     0x1.2f41362f860a9p-436, 0x1.df39fc242d551p-409, 0.0, 0x1.a06bdb842b431p-996,
     0x1.2131a43a16a5bp-242, 0x1.21b980a6dbb8p-201, 0.0, 0x1.e3a4b45b2b8acp-467,
     0x1.cc45e5403587ap-568, 0x1.66de54c63826cp-738, 0.0, 0x1.e504f3b11b448p-790, 0.0,
     0.0, 0.0, 0.0, 0x1.f3d0c2331ecdbp-613, 0x1.c1f8bd1c9a13cp-853, 0.0, 0.0,
     0x1.7dad0f7d6c58fp-882, 0x1.ff12cc7ebb4e2p-37, 0.0, 0x1.def40e2eebdc9p-871, 0.0,
     0.0, 0.0, 0.0, 0x1.5914b7bbc97ddp-12, 0x1.751109e11c087p-748, 0.0,
     0x1.14140b15e1ca7p-920, 0x1.ec6e6836c5577p-569, 0.0, 0.0, 0x1.634a10bfc98aep-710,
     0.0, 0x1.af3ecedda65b2p-109, 0.0, 0.0, 0x1.22d5e9d55c5cp-731,
     0x1.53a12e5c7574cp-773, 0x1.543b52ab0f8e7p-183, 0.0, 0.0, 0.0,
     0x1.19a7a9173da9cp-495, 0.0, 0x1.0a83efcc55daap-644, 0.0, 0.0,
     0x1.fd4208307826ep-312, 0.0, 0x1.ba8e0225f643ep-920, 0.0, 0.0,
     0x1.f934fce951bf6p-381, 0.0, 0x1.5299291b1ccc1p-39, 0.0, 0x1.8ea787e6944d4p-858,
     0x1.c5c6887dad167p-286, 0x1.a7789af4753bep-920, 0.0, 0.0, 0x1.125a56376b2fap-815,
     0.0, 0x1.ba7c3140630dp-474, 0x1.4a0e0057973a2p-819, 0x1.3af04b8dc12b7p-547,
     0x1.1b40c00e89fd8p-776, 0x1.0f97cba5b6b4p-490, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c11eb30c3c25p-207, 0.0, 0.0, 0x1.bde0e46f2d11ep-945, 0.0,
     0x1.321c95ae00a45p-202, 0x1.ec7b48c06f71cp-215, 0x1.49fe14c11003dp-51, 0.0, 0.0,
     0.0, 0x1.dbe581b1e6ca1p-321, 0.0, 0.0, 0x1.bca21bcf78f12p-33, 0.0, 0.0,
     0x1.76af909dcb28dp-540, 0x1.06c46fcc636e4p-355, 0.0, 0x1.8190577d93a65p-500,
     0x1.482a24a4a27eep-974, 0.0, 0.0, 0.0, 0.0, 0x1.bcf593485e7c7p-509, 0.0,
     0x1.7bb8e37668cd2p-234, 0x1.18b7fb5ff2b07p-907, 0.0, 0.0, 0x1.d46cefb6151dfp-442,
     0.0, 0x1.2110fcb1c547dp-715, 0x1.cb503da6e2faep-149, 0x1.d0ea280340a29p-610,
     0x1.95352e01681b4p-514, 0x1.f486221cdec31p-183, 0.0, 0.0, 0x1.d4bc54e9a9c17p-81,
     0.0, 0x1.c263deee73094p-347, 0.0, 0x1.e1319156ccbp-490, 0x1.09f0c526b16f8p-246,
     0.0, 0x1.b8517e1f8b2dcp-260, 0.0, 0x1.85601eddc9b4dp-988, 0x1.c123ad01e8b66p-627,
     0x1.5ce0f17cafbcdp-610, 0x1.bcf2359211cd8p-452, 0x1.6fbc37a46150ep-383, 0.0,
     0x1.d7705ecf10e6ep-316, 0x1.a62bbfb76ee14p-179, 0x1.b5a37b28f1e7ep-721,
     0x1.4894c83f41039p-800, 0.0, 0x1.25b57efce7746p-83, 0x1.936b99865eb4ep-856, 0.0,
     0x1.8502b303d4e2cp-141, 0x1.f6cfe32d912dbp-309, 0.0, 0x1.0944f5f33d075p-659,
     0x1.84afe65b179ap-503, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.586597ec0a8b4p-842,
     0x1.3d9a3e20770bbp-319, 0x1.611ec59974fb1p-315, 0.0, 0x1.48891151ddb46p-401, 0.0,
     0x1.3884766a18223p-238, 0x1.82f014ebf4c39p-709, 0x1.d8b8436600775p-389,
     0x1.2918d15e31608p-670, 0x1.8fbd5273f8d07p-836, 0.0, 0x1.20b269da31855p-635, 0.0,
     0.0, 0.0, 0.0, 0x1.ce84181b9cd4fp-459, 0.0, 0.0, 0x1.f1ea07ce755f1p-375, 0.0,
     0.0, 0.0, 0x1.61f3e52b3ceeap-939, 0x1.a8762ab5f9e57p-350, 0x1.cfeae5376e7dp-840,
     0x1.be6ef1b9bd2e3p-810, 0x1.e03885b096d67p-115, 0x1.87eeace041295p-15,
     0x1.f1f028d39d29fp-504, 0x1.e8cfb67d8d772p-256, 0x1.d3146caa2cda5p-509, 0.0, 0.0,
     0.0, 0x1.d78e2bca5dd44p-175, 0x1.3207f34e6e65cp-915, 0.0, 0x1.acf9f49982545p-961,
     0x1.013153e14435bp-920, 0.0, 0.0, 0.0, 0.0, 0x1.b5c5b9501a2a8p-784,
     0x1.39db262a63ef5p-569, 0x1.4b8bd84a044b7p-788, 0x1.dae874d3a07fdp-677,
     0x1.703a6b7602cbdp-808, 0x1.dc1c6d9347b14p-442, 0x1.9e2195d9307b2p-315,
     0x1.dd75d617657cp-21, 0.0, 0x1.b166e180974c9p-872, 0.0, 0x1.92618624efa1fp-1000,
     0x1.885eeace4cc9p-304, 0x1.5ce61375661fp-994, 0.0, 0x1.0e0416e6cb71bp-499, 0.0,
     0.0, 0.0, 0x1.8d9bb76bea1fp-153, 0.0, 0.0, 0.0, 0.0, 0x1.498f3b95639f3p-725, 0.0,
     0x1.a45449f7eb12cp-838, 0x1.c9435ccf49357p-193, 0x1.b440e6f3ad439p-402, 0.0, 0.0,
     0x1.787e299e02a26p-762, 0x1.e941a88ca840bp-38, 0x1.bc107a5910e26p-686, 0.0, 0.0,
     0.0, 0.0, 0x1.74ee32a14dfabp-457, 0.0, 0x1.06b29803f0a29p-659, 0.0, 0.0,
     0x1.437d9dabf77a9p-698, 0.0, 0x1.2bf1c0cc5bdd1p-556, 0x1.f4d2062a576f8p-906,
     0x1.a4209f43bd325p-264, 0x1.05fc806fa0edfp-403, 0x1.774eec42f3881p-354,
     0x1.ab4037d1bb0bfp-149, 0x1.2015833703ebbp-143, 0.0, 0.0, 0x1.326766b58d819p-913,
     0.0, 0x1.737133e3aa6e5p-942, 0x1.8e38e174e85b2p-596, 0.0, 0.0, 0.0, 0.0,
     0x1.710ffc61d48c7p-590, 0.0, 0.0, 0x1.8b519e71042b1p-438, 0.0, 0.0, 0.0,
     0x1.aad9d1668c434p-947, 0.0, 0x1.03d07a05fb2fbp-835, 0x1.efddd3ed183b9p-1009,
     0x1.e4901cd2da4ep-687, 0x1.b478526b785b3p-814, 0x1.e8f1070b3afefp-378, 0.0,
     0x1.cc92adcf0e92dp-135, 0x1.55b30e73b34cfp-22, 0.0, 0.0, 0.0,
     0x1.78520cd84c70bp-757, 0x1.2ac442347807dp-957, 0.0, 0x1.e7a631c967a8ep-518, 0.0,
     0.0, 0.0, 0x1.fa8129f818bb5p-698, 0.0, 0.0, 0x1.5b03dbb3b4c1ap-863, 0.0,
     0x1.e54ea4c40f917p-880, 0.0, 0x1.1d1b59f04abb1p-609, 0.0, 0.0,
     0x1.5e94f50135482p-205, 0x1.eae23a215e0bbp-56, 0.0, 0.0, 0.0,
     0x1.bc073d397ab22p-709, 0.0, 0.0, 0x1.4e92180442586p-825, 0x1.9812130e05a8dp-360,
     0x1.2e605bcfb513dp-630, 0.0, 0.0, 0.0, 0x1.6c6aa3d920273p-868, 0.0,
     0x1.7f97b42db01d9p-41, 0.0, 0x1.ad7161098a6a2p-115, 0x1.c3f060b4b33c8p-402,
     0x1.ec53ef1872458p-963, 0.0, 0x1.91ae32ace4079p-243, 0x1.636489fd6656dp-850, 0.0,
     0.0, 0x1.c04cdf74bdb49p-290, 0x1.fd5348094c621p-584, 0.0, 0.0,
     0x1.8bd475914e6e1p-431, 0.0, 0.0, 0x1.d415abbe9b6b4p-444, 0x1.19a6fa32fd46dp-983,
     0.0, 0.0, 0.0, 0x1.82e5ad23bc7c9p-721, 0.0, 0.0, 0x1.a4c96c9a319edp-161,
     0x1.d40c1ec7ca763p-455, 0x1.22198b98b672cp-349, 0x1.37216fb520989p-962, 0.0, 0.0,
     0x1.ddaca2e129b7ep-904, 0x1.d1687c71ff247p-738, 0.0, 0.0, 0x1.e3d0455e46758p-537,
     0.0, 0.0, 0x1.c96950218327cp-855, 0x1.3e46cfe46d597p-4, 0x1.0a5eff176acebp-721,
     0x1.07e8ca52cbb98p-271, 0x1.9c86664d6a27p-307, 0x1.76361f3e5b7d8p-418, 0.0, 0.0,
     0x1.df30ec8bf6dd1p-297, 0x1.96e389f54c057p-531, 0x1.fce8f9a38c663p-51,
     0x1.d077c430583f7p-276, 0x1.d5611d2d6852fp-371, 0.0, 0x1.9f8167a9f023p-544,
     0x1.eb0f8725f53c7p-259, 0.0, 0.0, 0x1.ae998dd1afbcp-394, 0.0, 0.0, 0.0,
     0x1.7e323b0d1fb5cp-98, 0x1.da3651e5f5776p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f954368cff2c6p-911, 0.0, 0.0, 0x1.f323105682edbp-698, 0.0,
     0x1.427ae29ec514bp-693, 0.0, 0x1.4dab45d264a32p-670, 0.0, 0x1.3f8f45073d19p-125,
     0.0, 0x1.9f966a2d1d36p-343, 0x1.9f55c6dd50611p-420, 0.0, 0.0, 0.0,
     0x1.9be76bc012323p-376, 0x1.194432048d067p-426, 0.0, 0x1.840dead258cc5p-836, 0.0,
     0.0, 0.0, 0x1.5724d190b76a3p-229, 0x1.44cd269c0fecep-884, 0x1.d260ec1ff5056p-377,
     0x1.7c087ecdb6378p-242, 0.0, 0x1.ef0b50aacad44p-156, 0x1.b8ddc79c1c025p-151, 0.0,
     0.0, 0x1.5e04429b968ecp-614, 0x1.c5ee29f945eccp-91, 0x1.b0afeb09cec5cp-469,
     0x1.d1c4f2c76af36p-140, 0x1.e51343f221dfcp-162, 0x1.8e3f01b7050b1p-706, 0.0,
     0x1.c6d2a542e6e01p-925, 0x1.d9e2e4f577c53p-300, 0x1.c0b3ba6cc712cp-771, 0.0,
     0x1.1619cf8b2431bp-63, 0.0, 0.0, 0x1.9b1d1c696bcf3p-301, 0x1.25f9fb1c2cc44p-153,
     0x1.b2598254363bap-569, 0.0, 0x1.d69b9a795dd78p-660, 0.0, 0x1.eb1a1f753d03dp-149,
     0.0, 0x1.f936b9b7bc9efp-470, 0x1.c8b009d06c1bap-761, 0x1.1520de7db4b39p-181,
     0x1.d67090a4cb485p-769, 0.0, 0.0, 0.0, 0x1.8c59410789126p-866,
     0x1.7ffd31d6bbf11p-522, 0x1.5365fec0c085bp-544, 0.0, 0.0, 0x1.ebbba07fe234cp-608,
     0x1.e9ad10c3ca8bep-411, 0.0, 0x1.e023885bc99b1p-1, 0.0, 0.0,
     0x1.d061b62b0a26fp-865, 0.0, 0.0, 0x1.ea7cf9df50f8p-866, 0.0,
     0x1.bd5df52720a69p-698, 0x1.6962848fb14d1p-392, 0.0, 0.0, 0.0,
     0x1.8c88d8c63259cp-245, 0x1.70c7519e83fe1p-327, 0.0, 0x1.a294df0736df3p-691, 0.0,
     0x1.2615728982e8fp-44, 0x1.fc4c85a363277p-48, 0.0, 0x1.683b34e59f4f4p-362,
     0x1.6655e07441216p-354, 0.0, 0x1.a261bcef4ef7fp-87, 0x1.d92a03f2083ffp-782, 0.0,
     0.0, 0.0, 0x1.3fd8978651151p-699, 0x1.60b545d49f54dp-756, 0x1.0975271ff21d7p-33,
     0.0, 0.0, 0.0, 0.0, 0x1.f310f99ebfe07p-175, 0x1.8a3d3e14f9fb9p-945, 0.0,
     0x1.f2703948c3c9p-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13ed444dbb682p-845,
     0x1.bd26d6d89ebe6p-764, 0x1.6f2a6d36c7247p-138, 0x1.79b1e2706a73ap-33, 0.0, 0.0,
     0.0, 0x1.3809709e541d4p-552, 0.0, 0.0, 0.0, 0x1.e165b9900f506p-197, 0.0,
     0x1.4afafb3dcff16p-415, 0x1.cb8960cb9629ep-366, 0x1.51771af463d9cp-601, 0.0,
     0x1.9f02ab9a62c3dp-694, 0.0, 0x1.fe1cc47d88df5p-153, 0.0, 0.0,
     0x1.c220d2b7d632dp-406, 0x1.876b3263c56a1p-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.282561874d39bp-543, 0x1.4ceb854fbffedp-461, 0x1.6df65dab6d283p-853,
     0x1.527d372fd87a2p-898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a50c74f3fc3ap-237,
     0.0, 0x1.a69438dc02abfp-826, 0.0, 0x1.209ff6ab29381p-727, 0x1.5829687224a67p-173,
     0.0, 0x1.437d590d50fb5p-658, 0.0, 0.0, 0.0, 0x1.8436cf27b04c7p-91,
     0x1.b377798458d6ep-136, 0x1.4635c51301233p-947, 0x1.ffec8372a679ep-272, 0.0,
     0x1.60507f74798dep-102, 0.0, 0.0, 0x1.ab6ea2a8e3cfep-238, 0.0,
     0x1.d03fdde35aee4p-291, 0x1.fbb9f7904f16cp-125, 0.0, 0x1.4210d618368e3p-407,
     0x1.c6f8200ed4febp-14, 0x1.8a09662c57a4cp-724, 0x1.63b5dcfeb1325p-301, 0.0,
     0x1.412ff5ca5a521p-746, 0.0, 0.0, 0.0, 0x1.99edad2016bedp-241,
     0x1.48a3babe718f5p-983, 0x1.649f199385dbp-826, 0.0, 0x1.ffea4b303c836p-518,
     0x1.7998f2d825ab4p-524, 0.0, 0.0, 0x1.a55aed705388p-919, 0x1.5f2fb15701c7ap-1012,
     0.0, 0x1.17a0b1082d699p-747, 0x1.2055fc2bf738ep-978, 0.0, 0.0, 0.0, 0.0,
     0x1.ccbb616551f6bp-411, 0.0, 0.0, 0x1.adcdb6dd39f6cp-650, 0.0,
     0x1.9c65d2c897cbp-435, 0.0, 0.0, 0x1.d546b8cd44d11p-258, 0x1.71c00cfee3479p-422,
     0x1.05125b14c8b3ep-445, 0.0, 0.0, 0x1.cc9b9fea2cfa8p-705, 0.0,
     0x1.a4a2070093d38p-954, 0.0, 0.0, 0x1.cffda0dc5bcbbp-966, 0.0, 0.0, 0.0, 0.0,
     0x1.0b762375a17e4p-693, 0.0, 0x1.93ed5abcabb1dp-654, 0x1.2e89234fbd019p-711, 0.0,
     0x1.ef26ebc7ade3bp-123, 0.0, 0x1.e9858e74a6542p-536, 0x1.62bcb5ab8d78p-639,
     0x1.f2ed3ff12dd6p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3657997c0dac1p-755, 0.0, 0x1.f05f1075f8e9ap-298, 0x1.dc76394cd734ap-642, 0.0,
     0.0, 0.0, 0.0, 0x1.48783a94fe0fdp-253, 0x1.8eef8a2d27646p-911, 0.0,
     0x1.91897a8f2f4dap-583, 0.0, 0x1.8e1ae6bf6201p-575, 0x1.b48e16d3776d6p-20, 0.0,
     0x1.3ec2773beb126p-1013, 0.0, 0x1.60d3f1ca0c55fp-777, 0.0,
     0x1.52f1c2beab422p-880, 0x1.ccc0e61dbad38p-110, 0.0, 0.0, 0x1.e44d927b8cff4p-659,
     0x1.d37405f2a823fp-761, 0.0, 0.0, 0x1.771c1f6649601p-75, 0.0, 0.0,
     0x1.a0c3dbdf5ecbcp-321, 0x1.b7825656ba31bp-120, 0x1.b4ae2949b2f6bp-705,
     0x1.57cca57e77f75p-45, 0.0, 0x1.b267ae66bf0bdp-673, 0.0, 0.0,
     0x1.ed348d3176f33p-479, 0.0, 0.0, 0.0, 0x1.c57b42083e38bp-948,
     0x1.f4a622e1be0b8p-459, 0x1.a12cdd50dad7fp-552, 0.0, 0.0, 0.0,
     0x1.68f89036cdc5bp-502, 0.0, 0x1.443880a63ba96p-707, 0.0, 0x1.3bc77e7bad2efp-776,
     0.0, 0x1.7aafbe8249a33p-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05ea9ef3017d5p-376,
     0.0, 0.0, 0x1.6d17497924879p-863, 0x1.a6f12fcb42db8p-510, 0.0,
     0x1.82a36e3d3ee08p-447, 0x1.8c9f55aca8463p-235, 0.0, 0.0, 0x1.953a2bdd17876p-206,
     0x1.b229288fbf819p-569, 0x1.535f38f806552p-293, 0x1.40944ac25c188p-760, 0.0,
     0x1.747425bd154dfp-529, 0.0, 0x1.71df6ffaec746p-709, 0x1.aadb7a46a536cp-534, 0.0,
     0x1.e2bf1146619cbp-918, 0x1.4e81b5be07928p-813, 0.0, 0x1.66ce79b494122p-929, 0.0,
     0x1.6f5b428a2a45bp-100, 0x1.f759367958daep-991, 0.0, 0.0, 0x1.4591786c50131p-63,
     0.0, 0x1.964bbb257b68dp-374, 0.0, 0.0, 0.0, 0x1.01400c51b875fp-955, 0.0,
     0x1.50101851cecd6p-753, 0.0, 0x1.3f69cd0084c6bp-711, 0.0, 0.0,
     0x1.8e6a0a8b3639fp-757, 0x1.b094f38db20f2p-590, 0.0
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_cbrtd1_u35purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_cbrtd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
