/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd1_u35purecfma.c --function \
 *     Sleef_finz_tanhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.f584265b08a89p-732, 0.0, 0x1.448025c94e915p-540, 0.0,
     0x1.6bbc5c21da588p-119, 0.0, 0x1.c0dfc183bf05ap-656, 0x1.ca92202155edap-361, 0.0,
     0.0, 0x1.d3fc8f9ed9368p-161, 0x1.7369f01abd956p-582, 0.0, 0.0,
     0x1.e7f76b2a82bf8p-586, 0x1.0c1b5d10fe61cp-944, 0x1.ca5ca3d99fce3p-334, 0.0,
     0x1.444f29a9dd673p-332, 0x1.8888cf59e4513p-374, 0.0, 0x1.5f34ea50a4712p-784,
     0x1.053b6eebb7702p-653, 0.0, 0x1.13ea94540fec9p-74, 0.0, 0x1.409af28c0d03dp-617,
     0.0, 0x1.4633569138a21p-250, 0x1.430c923f19486p-647, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ee3ba96de6da6p-12, 0x1.924a2ea46d8edp-803, 0.0, 0x1.3af6ba8144d41p-618,
     0.0, 0x1.1f7b7b20d2e4ap-373, 0.0, 0.0, 0.0, 0.0, 0x1.179d67a965d18p-990,
     0x1.4414e55c5ca8ap-828, 0x1.aa1793895c983p-56, 0x1.bcdb3d9c9cbcbp-654, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.17b3d0fecf8a6p-403, 0x1.ab870f55bdffep-930, 0.0,
     0x1.b084e61659519p-571, 0x1.56a7b6474397ep-455, 0.0, 0x1.ba9c9c17ef566p-757, 0.0,
     0x1.8e5d82a596bbap-637, 0.0, 0.0, 0.0, 0x1.09e21322932b4p-541, 0.0, 0.0, 0.0,
     0x1.904617de14368p-506, 0.0, 0x1.1dfaba062a215p-219, 0.0, 0.0,
     0x1.7206c88644d56p-519, 0.0, 0.0, 0x1.cac13ff644704p-167, 0.0, 0.0,
     0x1.f5f543bbbe963p-980, 0x1.fc1caf0aef32dp-533, 0.0, 0x1.0bf5050327d64p-1015,
     0x1.0f84e38405974p-554, 0x1.c7a4bf3d08cddp-672, 0.0, 0x1.18d8e8f22f4f7p-683,
     0x1.92361047eee76p-740, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1c02536e381p-1017, 0.0,
     0x1.341057e75ff7ep-938, 0x1.84370a62c5d8fp-800, 0x1.35ee4e77f87b2p-229,
     0x1.ef59d489dbbc6p-334, 0x1.7f3243bbb22cfp-765, 0.0, 0x1.d6ed954deb7ecp-960, 0.0,
     0x1.4db8775c2eb86p-855, 0.0, 0.0, 0.0, 0x1.c566ab08fbbcfp-777,
     0x1.777d57eb3d239p-192, 0x1.832577d4c7798p-992, 0x1.92aa5faff3b14p-157,
     0x1.afe41730474e2p-104, 0.0, 0.0, 0.0, 0.0, 0x1.1e3f7c19b977fp-118, 0.0,
     0x1.f622da371cf0dp-1006, 0x1.0cfb507b09677p-538, 0x1.e3d5c120d988ap-399, 0.0,
     0x1.2edd60ebbcc7dp-173, 0x1.3e0ba94dea454p-72, 0x1.1bc0f2e927e39p-395, 0.0, 0.0,
     0.0, 0.0, 0x1.e66182fac5fa8p-992, 0.0, 0.0, 0.0, 0x1.fcc3ee19977cap-893,
     0x1.9e82c9529a233p-251, 0.0, 0.0, 0x1.6a05bf351fffdp-851, 0.0,
     0x1.db47f266b32c4p-329, 0x1.6ee7b15d8e70dp-806, 0.0, 0x1.804f70a3b3fb8p-411, 0.0,
     0.0, 0x1.416096e3cce1p-301, 0x1.47b14cf479df7p-36, 0.0, 0x1.0c32102aace3fp-164,
     0.0, 0x1.44c2a0cf9b8c6p-835, 0x1.492122ed53a64p-117, 0.0, 0x1.eb39a90f4132bp-30,
     0x1.4ba104d1e879dp-121, 0.0, 0.0, 0.0, 0x1.e0dd3ee3a3f57p-25, 0.0,
     0x1.eef46c57e8cb7p-771, 0.0, 0x1.5334c69b6318p-918, 0x1.339a2d8efa41bp-994,
     0x1.2b297378437d5p-362, 0x1.c785b76d7a40ap-635, 0.0, 0.0, 0.0, 0.0,
     0x1.fd4aa69957997p-229, 0.0, 0.0, 0.0, 0x1.7db77bfd514a5p-347,
     0x1.82b9cdf87f1a5p-689, 0.0, 0x1.a29bad3d7acb1p-203, 0.0, 0x1.f9a3cb625fe88p-750,
     0.0, 0.0, 0.0, 0x1.6e988c6c8fe12p-912, 0.0, 0.0, 0x1.a032d6c388c45p-308, 0.0,
     0x1.d0d13d9681e32p-895, 0x1.36f2ddea9defap-559, 0x1.4fa127e83e823p-800,
     0x1.f55b6bc137ap-48, 0x1.9ad92983dc0fbp-855, 0x1.a41d4da389154p-282, 0.0,
     0x1.b9aba8597d8ddp-786, 0.0, 0.0, 0x1.c837fea8ea56ap-988, 0x1.8d43650e74e9bp-110,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d144a6205f09p-1008, 0.0, 0.0,
     0x1.025ab6da3ac6ap-308, 0x1.f34f5e36f02f8p-242, 0.0, 0.0, 0.0,
     0x1.2e6f5702c4782p-284, 0x1.8b34284111ap-1000, 0x1.839aa1aef1cc5p-439,
     0x1.a611bf05f1d9cp-409, 0.0, 0x1.64548bc52ae95p-462, 0x1.6760bf41ad7d1p-620, 0.0,
     0.0, 0x1.e2f140e611c58p-835, 0x1.657b79d92126ap-883, 0.0, 0x1.4ff4578d5fa25p-276,
     0.0, 0x1.c01b40c0b61f2p-566, 0.0, 0.0, 0x1.5007e3fd5bb9p-129,
     0x1.a636320c7199bp-388, 0.0, 0.0, 0x1.a9bd3207f5722p-39, 0.0, 0.0,
     0x1.82d74e8265665p-316, 0.0, 0x1.b06e05a8303f1p-749, 0.0, 0x1.e4a2c6b6bc68ep-584,
     0x1.6d282c5eb2167p-31, 0.0, 0x1.f8a1078cdf64cp-190, 0x1.a31932090ad2cp-46, 0.0,
     0x1.382d8f9dac63fp-952, 0x1.8435325d6d3ffp-688, 0.0, 0x1.ab75f4ebb7ab6p-708, 0.0,
     0x1.bb77c2144d23ep-58, 0.0, 0x1.8a8819794d208p-170, 0.0, 0.0, 0.0,
     0x1.9cf2e300dfd45p-450, 0x1.d67e7a81736dcp-714, 0x1.6d1d90bd1d55p-912, 0.0,
     0x1.b460b0f3b6884p-621, 0.0, 0x1.809009495f48bp-719, 0x1.a1d595d7e9cd6p-737,
     0x1.f9a088087571dp-39, 0.0, 0.0, 0.0, 0x1.c5db1262de0fbp-37,
     0x1.caa975fff7db3p-960, 0x1.bd6abca94bd7bp-201, 0.0, 0.0, 0x1.c99a080955ce5p-470,
     0x1.04eb9b05689fap-661, 0x1.82562d09bba54p-524, 0x1.77e7c5138e611p-1016,
     0x1.d0c07421bffedp-432, 0x1.667f50d70dde1p-509, 0x1.6db0e8d30f345p-490, 0.0, 0.0,
     0.0, 0.0, 0x1.691f37e7ce5bp-502, 0.0, 0x1.e24d7ec5c380cp-527,
     0x1.1d5a0d242eb61p-260, 0.0, 0.0, 0x1.608fa232f4ccep-299, 0.0,
     0x1.a3a988f0bd665p-887, 0.0, 0x1.77193e7c50b85p-869, 0x1.3e292720aeb5ep-536,
     0x1.c90e0a622d333p-993, 0x1.fbba07e9c1479p-628, 0x1.7f36d3948bf3dp-373, 0.0,
     0x1.43af373e83413p-886, 0.0, 0.0, 0x1.50a8643f6367ap-618, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8737f02b79b7bp-423, 0.0, 0.0, 0x1.5e01ae1eb4e45p-207,
     0x1.0040f6d1e6c53p-157, 0.0, 0.0, 0.0, 0x1.5522bd544fbd9p-943,
     0x1.b167b77491172p-41, 0x1.5b19491bde8bfp-20, 0x1.b59b899182d2bp-711, 0.0, 0.0,
     0x1.1b9d900e01b75p-506, 0.0, 0.0, 0.0, 0.0, 0x1.582a2d537bac6p-221, 0.0, 0.0,
     0x1.05377cf1308b6p-921, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0059e3785355p-469,
     0x1.567d55f0a0754p-635, 0.0, 0x1.50e0ed1eefb79p-726, 0.0, 0.0,
     0x1.f626d0a4a4744p-182, 0x1.8b39695c8971fp-608, 0.0, 0x1.7f97422d9cfd1p-269, 0.0,
     0x1.82174c4f687a5p-110, 0x1.b7c50d1284451p-1021, 0x1.0a9a3fbe5eab5p-622, 0.0,
     0x1.7239340607e9fp-277, 0.0, 0.0, 0.0, 0.0, 0x1.0b872492a89c4p-298, 0.0, 0.0,
     0.0, 0x1.f907e83560e59p-407, 0.0, 0.0, 0x1.ef6034122cef4p-803, 0.0, 0.0, 0.0,
     0.0, 0x1.c54438de2a478p-901, 0x1.3cfcc310522edp-247, 0x1.918b193553945p-758, 0.0,
     0x1.901ceb22004dbp-328, 0x1.8dd3b08856991p-699, 0x1.3409c647fe4cbp-791, 0.0, 0.0,
     0x1.333351948eb1dp-739, 0x1.c313598abdef1p-875, 0x1.cd43864b6ffffp-726,
     0x1.0539f2013226p-559, 0x1.a57b50d677362p-264, 0x1.58ec48b50014bp-254, 0.0,
     0x1.11b521cf177dap-668, 0x1.4713e0e093416p-227, 0.0, 0.0, 0x1.b1daa82ead40bp-841,
     0x1.8fd8c6bb3424p-891, 0x1.8b37ec64be9fbp-280, 0.0, 0.0, 0x1.20ff94cbd2fd7p-996,
     0.0, 0x1.5428f33b728e7p-659, 0x1.933e5d16faa5p-271, 0.0, 0.0,
     0x1.548d6a97a4bd9p-147, 0.0, 0x1.8acec62bae6f6p-405, 0x1.6fa59e8d654fp-924,
     0x1.fa27a039f4838p-347, 0x1.a941d47920f9ap-345, 0.0, 0.0, 0.0,
     0x1.4c339c8f39c49p-129, 0.0, 0.0, 0.0, 0.0, 0x1.24a734fd03b4dp-94, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1d058aa3a4eccp-630, 0.0, 0x1.286c5755e2454p-390, 0.0,
     0x1.12677f9055e61p-277, 0.0, 0x1.c13251756ce4p-857, 0.0, 0x1.7712a8a5a2d78p-601,
     0x1.bbdfb3b37c58cp-469, 0.0, 0.0, 0x1.103ffb50931f5p-5, 0.0,
     0x1.90e4f38e7a52p-834, 0x1.d91d77b6c2997p-176, 0.0, 0x1.4da29cbb9bec3p-941,
     0x1.3ec4faf81121ep-157, 0.0, 0x1.1c9a6a1cda3eap-45, 0.0, 0x1.d5aedc3c8d1ebp-993,
     0x1.33e94102b9e38p-1007, 0x1.cf122c1cb5741p-1013, 0x1.25671c2d64c13p-771,
     0x1.1415800a3c6bep-491, 0.0, 0x1.9bbce025a6cf1p-431, 0.0, 0.0,
     0x1.df36618cc23a3p-158, 0.0, 0x1.bd068e906908cp-944, 0.0, 0.0,
     0x1.36d9fa5fccf68p-289, 0.0, 0.0, 0.0, 0x1.24e7d4ab46728p-405,
     0x1.4a1323910a7eap-224, 0x1.64f89daf46dep-957, 0.0, 0.0, 0x1.cb647ed756d9bp-133,
     0.0, 0x1.e2d004e866a74p-1015, 0x1.8b8f4b2389102p-1013, 0.0, 0.0,
     0x1.3f7d45dd76f86p-516, 0.0, 0x1.13655ee0d02a3p-899, 0.0, 0.0,
     0x1.96f2ec4bef5b6p-1002, 0.0, 0x1.fc6d956472eb9p-415, 0.0,
     0x1.4aa23d34ad758p-111, 0.0, 0.0, 0.0, 0.0, 0x1.9f5c43fc7dcffp-749, 0.0,
     0x1.d826ba074f6b9p-676, 0x1.b39d8201f9414p-633, 0x1.8223d427174a2p-852, 0.0,
     0x1.e7cfd1d32f3f2p-164, 0x1.b9c5366586245p-359, 0.0, 0.0, 0.0,
     0x1.be6ac68217f1cp-835, 0x1.b83f17d6db1cdp-440, 0x1.c98c1a9a9c966p-884,
     0x1.aaace46fba39dp-404, 0x1.5937edbe95d6bp-214, 0x1.2f14bc1b1fe16p-773, 0.0, 0.0,
     0x1.d2c543b25232dp-876, 0x1.96c4ec027c8a1p-753, 0x1.c4cc7f3221f49p-834,
     0x1.bf0681fed7a47p-741, 0x1.3923c768df9ddp-468, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb3e6f2191a97p-3, 0x1.e282e79a4a92ap-314, 0x1.4d429bc0673b9p-513,
     0x1.102a8bb31d1d6p-76, 0x1.ce468ca473ec5p-247, 0x1.6e4226b3466a3p-780, 0.0, 0.0,
     0.0, 0.0, 0x1.9857f2a3473e4p-906, 0x1.3f108cfef5cddp-837, 0.0,
     0x1.f0dd115d20af9p-516, 0.0, 0.0, 0.0, 0x1.6cc9f340cfaedp-316,
     0x1.3f9ab67f6676fp-794, 0x1.95f0522aaf2a3p-152, 0x1.71ed24a062c88p-378,
     0x1.dbe34a07c5fe7p-2, 0.0, 0.0, 0x1.9500e6941967dp-664, 0.0, 0.0,
     0x1.77d3ed71f63dfp-92, 0x1.9a4456215c532p-30, 0.0, 0x1.f74f5823584e4p-650, 0.0,
     0x1.4ee68abcc01f1p-12, 0.0, 0.0, 0.0, 0x1.882a40144fe34p-560, 0.0, 0.0,
     0x1.6658d6e07eff8p-703, 0.0, 0x1.836a893f7e66fp-142, 0x1.8e0c6a94f13bap-306, 0.0,
     0x1.b51e80c9fd41ap-630, 0x1.0cbd4ac4a4338p-413, 0.0, 0x1.6ac131489fd1cp-908, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.507ea1d231d19p-163, 0x1.bc2d318e25ee8p-245,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.638b622d38d84p-823, 0.0, 0.0,
     0x1.57ca2517e48dep-211, 0x1.ad393263688a9p-94, 0.0, 0x1.1c589661577d3p-271, 0.0,
     0x1.3d1082d3d286dp-947, 0x1.845ce5d0ee42bp-300, 0x1.82a8c51549ddcp-690, 0.0,
     0x1.e70ed2073fe39p-534, 0.0, 0x1.d40934311895bp-159, 0.0, 0x1.a9aa5acf82c62p-21,
     0.0, 0x1.3022dd12b21b3p-216, 0x1.47329d55df1f6p-218, 0.0, 0x1.2611c114d8039p-623,
     0x1.9d040db2c0e6p-370, 0.0, 0.0, 0.0, 0x1.a94c23ebdfa3dp-969,
     0x1.70304e84d3134p-979, 0.0, 0x1.a881bf1760e14p-634, 0x1.97d522ffe0c69p-933, 0.0,
     0x1.1e33747a7dc4ep-324, 0x1.c5cb129878e4ap-405, 0x1.ec6b7ebb25445p-51, 0.0, 0.0,
     0x1.8aa83e3382de4p-798, 0x1.8a8eff4d0f0f6p-126, 0x1.f233393989651p-587, 0.0, 0.0,
     0.0, 0.0, 0x1.7229b59a9f79cp-397, 0.0, 0x1.d5b00d8bae6ddp-533,
     0x1.03cab1d03163cp-910, 0.0, 0.0, 0x1.e196ac3c20611p-759, 0x1.602ce1b40c943p-309,
     0x1.5bf1332df63e2p-482, 0x1.6fca4b614e10ep-461, 0.0, 0x1.295e29cbfd353p-470,
     0x1.38e0d36c76a2ep-739, 0.0, 0x1.3d909ef6926dbp-368, 0.0, 0.0,
     0x1.66bcfce4cb40fp-935, 0.0, 0x1.f17dd320a10ep-79, 0x1.57cec420262fp-468,
     0x1.7c8ab8524e0e7p-468, 0.0, 0x1.891e79914102dp-990, 0.0, 0x1.17e68f139b0f1p-384,
     0x1.e581a08e4112p-391, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fcb31fe3fc7cbp-129, 0.0, 0.0,
     0x1.5eaeeb8ea07bcp-140, 0x1.dead5c89ae3dp-728, 0.0, 0x1.9d40bb8a5d93ep-141,
     0x1.69669ab3e2fd1p-629, 0.0, 0x1.a3619bbc93f77p-815, 0x1.b4e15c63fc9p-796, 0.0,
     0.0, 0x1.794263a4fb396p-120, 0.0, 0x1.9d3d66afb360fp-310, 0x1.f8af9f36630c6p-497,
     0.0, 0.0, 0x1.f8ed34d91a446p-650, 0.0, 0x1.a4d5ab9a12351p-41, 0.0,
     0x1.3fda284fe27d4p-221, 0.0, 0x1.7e620fab625bbp-388, 0x1.b444b4fddc556p-932, 0.0,
     0.0, 0x1.499a68fe96067p-138, 0x1.377d287cd0dffp-265, 0.0, 0x1.4fc6089e182bfp-789,
     0.0, 0.0, 0.0, 0x1.f8b249f016253p-615, 0.0, 0x1.5b21a3fd96895p-591,
     0x1.a14d9965313ecp-61, 0.0, 0.0, 0x1.ac93430e908ep-832, 0x1.8baff7b4cb4fdp-1006,
     0.0, 0x1.d1fa9f460bb2ap-817, 0.0, 0.0, 0.0, 0x1.4b627f0ce4b89p-660, 0.0, 0.0,
     0x1.4dfbef77b7f2bp-730, 0x1.5cb9494c8106cp-416, 0x1.ef76af59b21dbp-346,
     0x1.3ead393656c99p-719, 0x1.f4f432822d1acp-619, 0x1.4af4951f9b85bp-904, 0.0,
     0x1.d7e550f1c92eep-1018, 0x1.5a8f391ca217p-400, 0x1.2b4b1a7c30f55p-532, 0.0, 0.0,
     0.0, 0x1.adc491b5f3dffp-176, 0x1.11bcae0a9e30cp-328, 0x1.3241c4d0be827p-658,
     0x1.218e49097aaa1p-730, 0x1.1f068f951ef6p-897, 0.0, 0.0, 0.0,
     0x1.91ca4076dc481p-576, 0x1.3da6f43277a96p-874, 0x1.13512f0939015p-620, 0.0, 0.0,
     0.0, 0x1.4d19e763bf488p-341, 0x1.47613f21dfcacp-41, 0x1.0585434356cb7p-223, 0.0,
     0.0, 0.0, 0x1.faf585ac367d7p-667, 0x1.95ccc67adbdbcp-539, 0.0, 0.0,
     0x1.6e23afadfa162p-366, 0x1.b857a97c8a86ep-982, 0x1.829d9b133836cp-465, 0.0, 0.0,
     0.0, 0x1.84c07db785194p-1001, 0.0, 0x1.d41cd5b21d10ep-531,
     0x1.9c563afa8abf5p-550, 0x1.5b6a6fe8685f2p-787, 0.0, 0x1.d1a5307a34574p-933,
     0x1.da21f615fd6bep-278, 0x1.38fad34e79475p-48, 0x1.ac28a8706979cp-509,
     0x1.f0249ccf3f179p-742, 0x1.e2d30cefd6a62p-703, 0x1.cbce937e3e1cdp-497,
     0x1.59d7f904016d7p-103, 0x1.261adaff4339fp-816, 0.0, 0x1.e476ede199e89p-131,
     0x1.1c4ead9a1aaa5p-881, 0.0, 0.0, 0x1.18f7dbc08a6e3p-331, 0x1.6ef94193dc14ep-625,
     0.0, 0x1.eeb0549a1e0f4p-911, 0x1.28446f9aaf522p-749, 0x1.bf27e6d440f1ep-730, 0.0,
     0x1.2654c7dc3b71cp-309, 0.0, 0.0, 0x1.bdc952e84ce3dp-616, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.724d394afb811p-134, 0.0, 0.0, 0x1.746d79fcd37d9p-886,
     0x1.f909d1af5706ep-949, 0.0, 0.0, 0.0, 0x1.265452c417fc2p-977, 0.0,
     0x1.857dfc7afd42p-554, 0x1.36b47fe34b046p-526, 0.0, 0.0, 0.0,
     0x1.4ec07bdee994ep-566, 0x1.5c872fef026a9p-94, 0.0, 0x1.321b724d86052p-287, 0.0,
     0.0, 0.0, 0x1.e9f20430fd101p-300, 0x1.383adf8219f09p-867, 0.0,
     0x1.bdbcd92f4e9f9p-46, 0.0, 0.0, 0.0, 0.0, 0x1.3b9ac150ae149p-403,
     0x1.ad6e30418f6cap-968, 0.0, 0.0, 0.0, 0x1.39bb76c57e26fp-269,
     0x1.fba59632b24f8p-992, 0.0, 0.0, 0.0, 0.0, 0x1.c78a442a07002p-184, 0.0,
     0x1.f6808e360ce6cp-959, 0.0, 0.0, 0x1.690bb03f7b2b2p-162, 0.0, 0.0,
     0x1.d7037028a9363p-812, 0.0, 0x1.d14cb26eb4e5dp-910, 0x1.3f0561ce1cea7p-998, 0.0,
     0.0, 0x1.c6a4c33843009p-866, 0.0, 0x1.dd12b5e7b38f8p-865, 0.0,
     0x1.6ed6d118da596p-963, 0x1.8338d9ba9ffa1p-432, 0.0, 0x1.4e960ce0d2141p-87,
     0x1.7267ae9b97283p-580, 0.0, 0x1.43621f1d5a8fcp-592, 0.0, 0.0, 0.0,
     0x1.c8ef131954d4p-891, 0.0, 0.0, 0.0, 0x1.51ec667e77434p-399, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.03d6023d4419ap-402, 0x1.15fe341485f6ap-210, 0x1.dd5144b0cab8bp-527,
     0x1.a6d281dd40c34p-50, 0x1.b79d93c19623p-182, 0x1.468e5b00edd11p-209,
     0x1.c296e0cf9e697p-918, 0x1.0389bb6d91575p-652, 0x1.57e56d9138823p-648,
     0x1.b1d3e3518055p-595, 0x1.48661ccf9ba9fp-221, 0.0, 0x1.4fa3b3c6ab6d4p-4, 0.0,
     0x1.4b17b9e233805p-630, 0.0, 0x1.e5e3a9221988fp-726, 0.0, 0x1.f019cfd7f7f4dp-958,
     0.0, 0.0, 0.0, 0.0, 0x1.64ea9a1a2681fp-286, 0.0, 0.0, 0.0, 0.0,
     0x1.efd40b75bb4e7p-26, 0x1.e12e834de5cep-202, 0.0, 0.0, 0x1.6ae47554aeecfp-728,
     0x1.a1a5c96c7d51fp-203, 0.0, 0x1.68c723d3fa3a7p-676, 0.0, 0x1.f4c9c9a675badp-108,
     0x1.316d844e40b02p-296, 0x1.5cc55b75f7032p-410, 0.0, 0x1.493c51350dbecp-189, 0.0,
     0.0, 0.0, 0.0, 0x1.011afd43173dap-864, 0x1.e7ef2be73e6ddp-236, 0.0, 0.0, 0.0,
     0x1.dab3360be542ep-468, 0x1.3b00d9ef3cb81p-638, 0.0, 0.0, 0.0, 0.0,
     0x1.706c23e5fc8bp-81, 0.0, 0.0, 0x1.7b99776cfbd29p-729, 0.0,
     0x1.3dc706cce6442p-9, 0.0, 0x1.84f9a8b8906e1p-102, 0x1.68717f5a8726dp-330, 0.0,
     0x1.518049a4626e7p-587, 0.0, 0x1.2230483b31fbep-978, 0x1.4a8d92cf5788fp-883,
     0x1.3d95dba9858afp-434, 0x1.88d9c5cd9f03bp-18, 0.0, 0x1.defc795effad7p-102, 0.0,
     0x1.144fc1a144505p-653, 0x1.3b2055bd5574ap-954, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82801557d1bb3p-654, 0.0, 0.0, 0.0, 0x1.231df3a6e2e78p-192, 0.0, 0.0, 0.0,
     0x1.384d88608e50bp-199, 0.0, 0x1.c7af161616847p-892, 0x1.534235416daa4p-480,
     0x1.0a63fec5492eep-291, 0x1.5e68025cd231ap-516, 0x1.9819d90f4ef5fp-107,
     0x1.e090432e90a2fp-495, 0x1.e7013fe14db76p-85, 0.0, 0x1.2549fc5ad2e0ep-86,
     0x1.64a6274049b98p-1012, 0x1.081833f80f88ep-232, 0.0, 0x1.cdef9f47e3d1fp-272,
     0.0, 0x1.d0143d854529bp-756, 0.0, 0.0, 0.0, 0x1.eb60c7947f1e1p-424, 0.0,
     0x1.9074b4cf7d626p-818, 0x1.ccac1a1a3dafep-781, 0.0, 0x1.02f211bc6b493p-778, 0.0,
     0x1.8172f359cb163p-654, 0.0, 0x1.8661e75f94525p-308
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
            tmp1 = Sleef_finz_tanhd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tanhd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
