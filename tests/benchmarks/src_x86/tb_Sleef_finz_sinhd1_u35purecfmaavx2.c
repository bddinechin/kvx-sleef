/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd1_u35purecfma.c --function \
 *     Sleef_finz_sinhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.74b2cd89ca596p-888, 0.0, 0x1.23f901022dc6cp-676, 0.0,
     0x1.709940c3e023cp-997, 0.0, 0x1.5d07ff34da828p-294, 0.0, 0x1.6519c741949aep-510,
     0x1.399a736dd77ebp-268, 0x1.715ee6054fd2ap-523, 0x1.258a3cf10e09ap-251,
     0x1.fa05929bb5296p-651, 0x1.fa72eef8aafd7p-735, 0.0, 0x1.3856de3695546p-262, 0.0,
     0x1.c8c07034899a5p-892, 0.0, 0.0, 0x1.066c06016b454p-352, 0x1.39318ebd7e3d6p-54,
     0.0, 0x1.e728b26b5826p-839, 0x1.3e1801cb1885fp-201, 0.0, 0x1.353ba350cb246p-129,
     0.0, 0x1.d13d586071427p-503, 0x1.7aa069f773b4bp-839, 0.0, 0.0, 0.0,
     0x1.0adc7b6a1ae5ap-554, 0x1.f649f7b379374p-399, 0x1.32aedda96c34dp-768,
     0x1.844d74cfc8c9ap-286, 0.0, 0x1.9e35f417bcbbdp-270, 0.0, 0.0,
     0x1.533894ee5f6dap-481, 0.0, 0x1.130c8e05d8878p-474, 0x1.6fe2145a86729p-697, 0.0,
     0x1.926da632c7106p-390, 0x1.f50e6abb37258p-493, 0x1.1a1f6c07b447bp-500,
     0x1.1e3f3a0340123p-109, 0.0, 0.0, 0x1.21037daf7ce8bp-156, 0.0,
     0x1.00d40de0b35c3p-589, 0x1.162f2f0bfbd96p-16, 0x1.6754556eb5df1p-188,
     0x1.6a523b39a6453p-915, 0x1.e0efa549f54bp-463, 0.0, 0.0, 0x1.1099103e93777p-604,
     0.0, 0x1.30ef8c56a0c34p-841, 0.0, 0x1.923206e72baf7p-940, 0.0,
     0x1.fbcb4f18ce9cfp-887, 0.0, 0x1.da858ab679fdep-639, 0.0, 0x1.ebcf96466ac2fp-680,
     0x1.ba2ba57dedacp-361, 0.0, 0.0, 0x1.9832505012aadp-317, 0x1.cacb1ebab72c2p-466,
     0x1.dffbc5b150d7cp-103, 0x1.88867c4e07e96p-507, 0.0, 0x1.555d95ef7b199p-295, 0.0,
     0.0, 0x1.cd6009336ec3p-638, 0.0, 0.0, 0x1.0d3d8dab96589p-717,
     0x1.4f9c5d954575p-209, 0x1.9dbaf3bb74fa5p-935, 0.0, 0x1.1fe462e75e951p-992, 0.0,
     0.0, 0x1.3afc8143d302cp-332, 0.0, 0x1.0013afaf30c86p-802, 0x1.acc8aa9c85c3dp-57,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6ff43fe2db3bp-750, 0.0, 0.0, 0.0,
     0x1.af5719efdfd23p-156, 0x1.97c893ce2f6dfp-337, 0x1.fe9e513441e97p-170,
     0x1.9a918685bfd5bp-371, 0.0, 0x1.8d4bfd2153794p-256, 0x1.cf928f7581877p-679,
     0x1.94273a24b8814p-503, 0x1.059a78bde32fcp-578, 0.0, 0.0, 0.0,
     0x1.59656e32351a2p-139, 0x1.d86362f68c7a7p-821, 0x1.b3839f75008ccp-809, 0.0, 0.0,
     0.0, 0x1.a9f557b6506f7p-286, 0.0, 0x1.cf8197ed12c7dp-767, 0x1.b3e9f9e9503fdp-187,
     0.0, 0.0, 0.0, 0x1.40361a5a41dd8p-636, 0x1.abe0a80e4bc1bp-537, 0.0,
     0x1.a291c225ccdf6p-812, 0.0, 0x1.6db001caf8fc9p-657, 0.0, 0x1.3df3c31cccecep-491,
     0.0, 0x1.71e86af22e7fcp-619, 0.0, 0x1.230b0c22996c1p-943, 0.0,
     0x1.c8e33fb25fb27p-415, 0.0, 0.0, 0x1.3c52c618d5abbp-273, 0.0,
     0x1.8c9def4a089aap-79, 0x1.0bf579a5a0f83p-204, 0.0, 0x1.90f7ce0c00092p-68,
     0x1.8d11ee0fa6a07p-982, 0x1.cad8ec2e097edp-630, 0x1.054c75d41cd6ep-144,
     0x1.a059c75fe13a1p-741, 0.0, 0.0, 0.0, 0x1.a24a8ec6199d4p-422, 0.0, 0.0, 0.0,
     0x1.fea10cd801e74p-731, 0x1.271f4a833db26p-875, 0x1.93b7d822363e7p-18,
     0x1.e06bd655fa7c5p-444, 0x1.b36922839cf7cp-937, 0.0, 0x1.03ec414b536c6p-698, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7e8c3c08822ecp-398, 0.0, 0.0, 0x1.d78d9f369320ap-886,
     0x1.9a557c7d7ff24p-784, 0x1.b00e1cbf1791p-295, 0x1.c766dacacc554p-952, 0.0,
     0x1.df4ebf918112cp-39, 0x1.3a8e72d20ba02p-770, 0x1.2314923c2c758p-400,
     0x1.46c96a0012ebfp-355, 0.0, 0x1.d120ec22836adp-488, 0.0, 0.0,
     0x1.4f03821cc92c8p-249, 0x1.56256da5d5af5p-917, 0.0, 0x1.3d4f131e7d348p-898,
     0x1.3ab4cb67d769dp-703, 0.0, 0.0, 0x1.13e979f3c0201p-139, 0x1.21e758ff210d4p-436,
     0x1.155f4e57c21eep-621, 0x1.698f4b91f81aap-17, 0x1.e4a26768db4e7p-744, 0.0,
     0x1.8ba00d43e608fp-137, 0.0, 0x1.2e6b1176ccaf2p-778, 0x1.df0a75ba7302fp-72, 0.0,
     0.0, 0.0, 0x1.b78860f4713d6p-141, 0x1.f53ec23989693p-938, 0x1.d9be6dc6c867dp-80,
     0.0, 0x1.268f2612e53ccp-479, 0.0, 0x1.e650f76b59578p-1007,
     0x1.d465de77ea32ap-586, 0.0, 0x1.98bfa1ff30f83p-996, 0.0, 0x1.d86500088c116p-226,
     0x1.17e336cb821d6p-3, 0.0, 0x1.e270876aac959p-237, 0x1.105b0dde897e3p-282,
     0x1.7ff18b969a359p-953, 0.0, 0.0, 0.0, 0x1.d967fd75d26bbp-806,
     0x1.17a11c3279ccep-746, 0x1.cdc6b693d1ca2p-203, 0x1.ba15d0d0f1b2ep-630, 0.0, 0.0,
     0.0, 0x1.1b62114c4223fp-195, 0.0, 0.0, 0.0, 0x1.377d7c9c426c1p-700, 0.0,
     0x1.f73db2c0e8105p-971, 0.0, 0.0, 0.0, 0.0, 0x1.4dd28c289c53fp-812, 0.0,
     0x1.8b12afec8693cp-765, 0.0, 0x1.81de7ec872a03p-212, 0.0, 0.0, 0.0, 0.0,
     0x1.099751e9ab2dp-894, 0.0, 0.0, 0x1.28806cb1b8a92p-964, 0.0,
     0x1.d4c99d9a1ef64p-937, 0.0, 0.0, 0.0, 0x1.f31735eb76268p-157,
     0x1.591e31eab1caep-545, 0.0, 0.0, 0.0, 0.0, 0x1.b52edf59e795bp-298, 0.0,
     0x1.bb84ed7de7243p-17, 0x1.7f2271d6cb6c3p-542, 0x1.c6c548645b281p-587,
     0x1.d48eb8f503176p-235, 0.0, 0.0, 0x1.3e81eff4e2c88p-124, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.66defb04c4c9ap-826, 0.0, 0.0, 0.0, 0.0, 0x1.454962635552cp-787, 0.0,
     0x1.52764795f44d9p-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5646b1b59bd2bp-119,
     0x1.03d24c120207p-251, 0x1.8b0cf208d1eabp-193, 0.0, 0x1.f2c24ed2708f7p-918,
     0x1.431718129f6aap-850, 0.0, 0.0, 0x1.934fe1a73ffcdp-807, 0x1.9ab9d7af3603ap-42,
     0.0, 0x1.c017607f2303ap-872, 0x1.c1f1136ec54bfp-198, 0x1.32a1f2addfc9fp-811,
     0x1.a90b66856de6fp-475, 0x1.292b8a33c553ep-495, 0x1.1e17b55404c69p-147,
     0x1.1cadbbaba9969p-658, 0.0, 0.0, 0.0, 0x1.89da22b19fep-352, 0.0,
     0x1.35c608698cf42p-699, 0.0, 0x1.4f5e7bb723268p-843, 0.0, 0x1.8cf0007c55eedp-959,
     0x1.577665a05c25fp-526, 0x1.d65be8a439447p-522, 0x1.6ed00416b6b4dp-493, 0.0,
     0x1.c143680fec77dp-474, 0x1.37174f771b11p-251, 0.0, 0x1.289a01ab24b88p-65, 0.0,
     0.0, 0x1.8843aab7fd85ap-256, 0.0, 0x1.39e4fac1a473p-758, 0x1.01b229bb76795p-87,
     0.0, 0.0, 0x1.91d43b56ecccfp-604, 0x1.38c5449e079d7p-537, 0x1.9e472ed8117e1p-400,
     0x1.e1a379d627d28p-664, 0x1.fb093c600bdb5p-1008, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3709e52d1eb18p-4, 0.0, 0x1.6e27a21bd1f0ap-258, 0x1.564364d737f71p-855,
     0x1.c35244cd8ac57p-153, 0.0, 0x1.86e6172cb2c43p-712, 0.0, 0.0,
     0x1.7408d2e085694p-46, 0.0, 0x1.67e85225cf211p-890, 0x1.d7d575e4d41cap-66,
     0x1.b8a0c266231d4p-173, 0.0, 0x1.4d7779c61326ap-792, 0x1.b49ec561ba983p-489, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ed10a84d398fp-488, 0x1.996c6edf778d5p-716,
     0x1.8a6d11dc762abp-193, 0x1.f0dc584f3f301p-252, 0x1.0072b794afe7dp-840, 0.0, 0.0,
     0.0, 0x1.2c83ca6e097cap-342, 0.0, 0.0, 0x1.7976233d0c467p-1021, 0.0, 0.0, 0.0,
     0.0, 0x1.c4a7c3df686cfp-40, 0.0, 0.0, 0x1.ee02d46ebc041p-147, 0.0, 0.0, 0.0,
     0x1.00c61d86fbd3bp-186, 0x1.9a2db5b0bf05cp-362, 0.0, 0x1.0937427387272p-219,
     0x1.81870ba3ed9f3p-458, 0.0, 0x1.3ed7f7dfd71ccp-694, 0x1.990921cd0faadp-807, 0.0,
     0.0, 0.0, 0.0, 0x1.dba0427f6f215p-100, 0x1.d844795d017dfp-604, 0.0,
     0x1.3f150d86b6018p-1014, 0x1.b4e721f678418p-74, 0x1.b4606331d5a5fp-509,
     0x1.fd835efc4441cp-917, 0x1.182066e16cafbp-537, 0x1.69afdd7ea3603p-824, 0.0,
     0x1.12f2b564faaecp-311, 0x1.121776e27549bp-126, 0.0, 0x1.11dd313f24bb1p-585,
     0x1.2da826bec99f9p-996, 0.0, 0.0, 0x1.351246a950f5dp-402, 0.0,
     0x1.e9279a1dc12aap-729, 0x1.a4f2cba750e66p-713, 0x1.3dce6b2742cf2p-181, 0.0, 0.0,
     0x1.ad7e1ce32f08dp-479, 0x1.c3f640a9cd89ep-914, 0x1.36db20bc07ee2p-595,
     0x1.832f087f06aadp-832, 0x1.0638c8cdf2215p-478, 0x1.656ed5f3fecfbp-888,
     0x1.40f6879e0aaa7p-301, 0x1.beb9d2b482f8bp-1006, 0.0, 0x1.800ef1d772f18p-372,
     0x1.026f9b99ff6a4p-87, 0x1.22c9ab6904d68p-687, 0x1.c468c690e1953p-973, 0.0, 0.0,
     0.0, 0x1.e7e496c9b7aafp-6, 0.0, 0.0, 0.0, 0x1.4c5a3458b4605p-217, 0.0, 0.0, 0.0,
     0.0, 0x1.b0eefdbdde961p-360, 0.0, 0.0, 0.0, 0.0, 0x1.34907ead7d5a9p-285, 0.0,
     0.0, 0.0, 0.0, 0x1.34e0dfa0a1e3ep-39, 0.0, 0x1.bea42996a1991p-457, 0.0,
     0x1.040d8ba44c0eap-68, 0.0, 0.0, 0x1.fe91d5efa4b7p-468, 0x1.90ebecd90ff47p-327,
     0.0, 0x1.6fb4a83a22c92p-378, 0.0, 0x1.a76963ce56a13p-993, 0.0,
     0x1.76a13b9df0fb3p-109, 0.0, 0x1.e8023d1e57ecfp-73, 0x1.36247996c0937p-834, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6ba6e55d7843p-155, 0x1.df19ded584c71p-714,
     0.0, 0x1.c0048477430d4p-809, 0.0, 0.0, 0x1.7e60d5f0136aap-357,
     0x1.a7a84c08cb09bp-121, 0.0, 0.0, 0x1.327e17863cd4fp-927, 0x1.834bc9deb28a9p-330,
     0.0, 0x1.4e13cebad1df7p-13, 0x1.cd54716752edep-1000, 0x1.7cf4b31784769p-904, 0.0,
     0.0, 0.0, 0x1.4f2b0394b9565p-148, 0x1.7ee33586ab2f8p-522, 0.0,
     0x1.9ed0bedf8c838p-172, 0x1.f1e7c964e4ca1p-822, 0x1.c432697d1f417p-479, 0.0,
     0x1.3da3975a7fa89p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cf8ff202e85ep-806,
     0x1.7d2d6054b2ad9p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f4d7613907e1p-1016, 0.0, 0x1.67a463edd7216p-957, 0x1.434bc71b5db14p-916, 0.0,
     0x1.912629180e084p-305, 0.0, 0.0, 0x1.9e1f516b8f01dp-276, 0x1.7400e4e1f9ca9p-448,
     0x1.a3a24ca2878p-715, 0.0, 0.0, 0.0, 0x1.48c2794b3298ep-941, 0.0, 0.0,
     0x1.bb3109e4a9858p-302, 0x1.c6fa87f89c5ep-410, 0.0, 0x1.d58cacb79551fp-165, 0.0,
     0.0, 0.0, 0x1.459dfe3507581p-693, 0.0, 0.0, 0.0, 0x1.f93995541343p-332, 0.0,
     0x1.f3104dc0c8ab3p-785, 0x1.985e4d963e8d8p-659, 0.0, 0x1.47b2df97266ecp-590,
     0x1.911c06e0fc2dbp-577, 0.0, 0x1.7bfea5c1327acp-353, 0.0, 0x1.c57087b914b6cp-76,
     0x1.f1101191c91e4p-583, 0.0, 0x1.19be30d2f1e1cp-553, 0.0, 0x1.2c09b2ebe60c2p-449,
     0x1.d13c816ffcdedp-869, 0x1.23f83c5cf8c97p-346, 0x1.0ca8ae1157b68p-429,
     0x1.f6b5b16d95801p-65, 0x1.b20add90ea52ap-740, 0x1.5653e73f385cep-1002,
     0x1.19646a82bfc87p-295, 0.0, 0.0, 0.0, 0x1.224f3fc70c597p-520,
     0x1.74b8809575963p-61, 0x1.687c4492f31b3p-181, 0x1.3566f0ecd90b1p-728,
     0x1.34d942a04c975p-7, 0.0, 0x1.2641eed6279f2p-120, 0.0, 0x1.416cfdf2f7943p-845,
     0x1.86e1a56a54222p-673, 0x1.db43ac9a573d7p-638, 0.0, 0.0, 0.0, 0.0,
     0x1.03d38810d731ap-169, 0x1.bc18caff268abp-117, 0.0, 0.0, 0.0,
     0x1.d877bf06bf7e2p-987, 0x1.fcf687ac99acep-656, 0x1.139c9f55c17dep-775,
     0x1.dbd8b43936bd8p-10, 0x1.75d29da6a3d2dp-790, 0.0, 0.0, 0x1.6734aee89b66p-376,
     0.0, 0.0, 0x1.9089a67a71799p-803, 0.0, 0.0, 0x1.1c1235bea488ap-773, 0.0,
     0x1.a7cd389466f24p-956, 0x1.4b4c6d4aa7b58p-448, 0x1.e411b1f02340dp-415,
     0x1.a2b87cc94c4fbp-659, 0x1.f8d0a2813e8bfp-767, 0.0, 0x1.fe6bca6535b5dp-829,
     0x1.15ac265d3dc73p-983, 0.0, 0.0, 0.0, 0x1.63358cce1c63bp-889,
     0x1.d95a4a8068769p-773, 0.0, 0x1.855b429233415p-34, 0.0, 0x1.bff2d58a11571p-301,
     0x1.929e61adfea94p-588, 0.0, 0.0, 0.0, 0.0, 0x1.eb56ef53dcac8p-718,
     0x1.7e24fc22fd24cp-764, 0x1.ddc75a9834bc5p-359, 0x1.a2b7592a2be84p-140, 0.0, 0.0,
     0.0, 0.0, 0x1.59decb0cbaf18p-58, 0.0, 0.0, 0x1.717776b5961ap-633,
     0x1.7916ef60e490fp-831, 0x1.8b7cd9cd449ddp-548, 0x1.093936697beb9p-815,
     0x1.c878fc6eb9318p-620, 0x1.b46e7923af8f3p-992, 0.0, 0.0, 0.0,
     0x1.97afb476105b5p-119, 0x1.d48ce4d183dfp-126, 0.0, 0x1.bfa8d6f96e91p-597,
     0x1.a7e64b254460bp-494, 0.0, 0x1.a36981072544bp-80, 0.0, 0.0,
     0x1.41371f5e9b8a1p-691, 0x1.0bc6d8dcfbaa8p-411, 0x1.24286ba3bbc64p-185,
     0x1.54d4c92de5d04p-937, 0.0, 0x1.50d3aba66c8d2p-343, 0.0, 0x1.1434220adc39fp-876,
     0.0, 0.0, 0x1.9220a2e836638p-583, 0x1.19a6a8e424584p-58, 0x1.9b61bb599f6f6p-299,
     0x1.d7eab7fce76afp-812, 0.0, 0x1.13b9141290379p-46, 0x1.02ed813dbf66bp-714, 0.0,
     0.0, 0.0, 0.0, 0x1.d2a8c4ed2636p-166, 0.0, 0.0, 0x1.f79bbc9f5e882p-239, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.161638d1af4ep-230, 0.0, 0x1.95eebba3975bp-527, 0.0, 0.0,
     0x1.4ea282e74f158p-105, 0.0, 0x1.92441008f7083p-255, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f601b45bcfbc3p-607, 0x1.ffc10a498941cp-429, 0x1.bbdebfb317146p-406, 0.0,
     0x1.1b766ada3e2d8p-707, 0.0, 0.0, 0x1.2f3316c74848p-221, 0.0,
     0x1.5030e7ebfd144p-49, 0.0, 0x1.d7fd88168681p-555, 0.0, 0x1.f5470d8f16902p-690,
     0.0, 0x1.10d40f011591bp-550, 0.0, 0.0, 0.0, 0x1.1b59b2154aa29p-135,
     0x1.3bb049851d8a7p-393, 0.0, 0x1.def969f4da037p-174, 0.0, 0.0, 0.0,
     0x1.a85b495b0b606p-750, 0.0, 0x1.b96706b9df035p-6, 0.0, 0.0,
     0x1.7dfd574f359dfp-627, 0.0, 0.0, 0.0, 0x1.9cf577c97e71fp-907,
     0x1.3714750b2e225p-643, 0x1.409ef04b1179ap-689, 0x1.0c9ab84a7dd8dp-573,
     0x1.8a48e02153cc8p-668, 0.0, 0.0, 0.0, 0.0, 0x1.9047f75063c21p-517,
     0x1.6882f6bb62977p-105, 0.0, 0x1.c51003de93b9ap-896, 0.0, 0x1.60beadf1c4c0ep-259,
     0.0, 0.0, 0.0, 0x1.79bb9a18a0e5p-815, 0.0, 0.0, 0.0, 0x1.978bbe4a4ad6ap-750,
     0x1.2e04b58c8d821p-212, 0.0, 0x1.9b34d028e9114p-906, 0.0, 0.0,
     0x1.9eabcb6d8682ap-111, 0.0, 0.0, 0.0, 0.0, 0x1.761485608f8a9p-943,
     0x1.9f532ec98f9ap-421, 0x1.3a43172a9ecd4p-258, 0.0, 0x1.6613603a486d3p-688, 0.0,
     0x1.036c79b00fb76p-887, 0.0, 0.0, 0x1.b8766f2912501p-456, 0x1.c4fa3d7cd66d5p-966,
     0x1.7f2329a2bbe6ep-345, 0.0, 0x1.153fc1cace45dp-448, 0.0, 0.0, 0.0,
     0x1.ab0860e23783ap-191, 0x1.3f7fe665608fap-94, 0.0, 0.0, 0.0,
     0x1.e82d6013353c5p-6, 0.0, 0.0, 0x1.4457ace3293b7p-660, 0x1.ea3c0724604a8p-396,
     0x1.81d859e9c4c11p-599, 0x1.8270456bc8132p-240, 0.0, 0.0, 0.0,
     0x1.6c9541dd8554ep-935, 0x1.3203f67095a46p-137, 0.0, 0x1.be341713ff915p-281, 0.0,
     0x1.16ea92f99fe83p-157, 0x1.b78db180b77e1p-94, 0.0, 0x1.61db402dd8898p-506,
     0x1.37852008e5a08p-226, 0x1.51e8dbe3924dbp-408, 0x1.c620706154618p-177,
     0x1.d61f5f56cad23p-677, 0x1.9dbaecf638c86p-934, 0x1.0068f802db4f9p-355, 0.0, 0.0,
     0x1.124e001b23146p-4, 0.0, 0x1.a1da28cfdce4ep-14, 0x1.c871845105539p-145,
     0x1.408329f911154p-462, 0x1.a93df46986f6dp-178, 0.0, 0.0, 0x1.58ad80e79fcf5p-406,
     0x1.276cabfd7206cp-907, 0.0, 0.0, 0x1.7ce3e346d6db3p-579, 0x1.35c8f0a64c494p-506,
     0.0, 0.0, 0.0, 0x1.4e1dc4904cac6p-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b334b5c11094p-299, 0x1.f2f11d27cfd48p-211, 0.0, 0x1.dc2fc54b1c71dp-52, 0.0,
     0x1.716171deb3b7bp-406, 0.0, 0.0, 0.0, 0x1.aebc15cf4a298p-852, 0.0, 0.0, 0.0,
     0x1.dbd1fbf662d86p-262, 0.0, 0.0, 0.0, 0x1.7976a3d36932dp-599,
     0x1.d9a0a04be1b43p-993, 0x1.9f9f46f40d997p-810, 0.0, 0x1.b1ea95dee5912p-114,
     0x1.671aaefac3757p-238, 0.0, 0.0, 0.0, 0x1.75daf41e0e75dp-853, 0.0,
     0x1.eed0802569f4ap-341, 0x1.5e7c96ac72d85p-727, 0x1.acda3394b1274p-107, 0.0,
     0x1.b10c253a58506p-962, 0.0, 0x1.409932f6d6873p-781, 0.0,
     0x1.4daf079f68a93p-1018, 0x1.b4060dd17a026p-691, 0x1.1a52571ebb286p-824,
     0x1.3a24a427c2ba8p-483, 0.0, 0.0, 0.0, 0x1.9f0e13bb4a68bp-516, 0.0, 0.0,
     0x1.a7b0501b85c45p-33, 0.0, 0x1.dd3c9f0d7ca7p-179, 0.0, 0x1.94767f25f69dcp-417,
     0x1.68a0c14de7306p-669, 0x1.c230556e05cbdp-297, 0.0, 0.0, 0.0,
     0x1.be0779162d4dbp-686, 0.0, 0.0, 0.0, 0x1.0697c1a209d77p-30, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b31a5770ea77ep-254, 0x1.1b339c110b985p-46, 0x1.97082d94b3da8p-68,
     0x1.7114bb2a7cf9ap-951, 0.0, 0.0, 0x1.68a4f55db74e8p-340, 0.0,
     0x1.fdcf25caf9ebdp-221, 0.0, 0x1.889e18dc821c7p-847, 0x1.c57cf16209fbp-137, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9036c36b55876p-209, 0.0, 0.0, 0x1.2973b5dcd625p-994,
     0x1.a4393b111db6bp-484, 0x1.7eac594016b99p-634, 0.0, 0.0, 0x1.38b31f4bdc483p-750,
     0x1.2489c3ab5c59cp-101, 0x1.79fc34ee93fb1p-592, 0.0, 0x1.1a5d0774975d6p-877,
     0x1.3b05f3944f226p-753, 0.0, 0x1.3f3c817977112p-905, 0x1.ea3b84390f311p-598,
     0x1.a247d309fef3cp-686, 0x1.1838ccb60967ap-1019, 0x1.18b2029652515p-448,
     0x1.10086b34a4665p-237, 0x1.b8bb844206616p-563, 0.0, 0x1.572001ba10cc6p-733, 0.0,
     0.0, 0x1.f763a6c630c67p-691, 0x1.4c3038d554696p-270, 0x1.205025928265cp-297, 0.0,
     0.0, 0.0, 0x1.b1a4aa53c7d92p-194, 0x1.b6d4ca8809f3dp-905, 0.0, 0.0, 0.0, 0.0,
     0x1.11b52a2399177p-548, 0x1.21669b757eb77p-791, 0x1.b0243241274f8p-278,
     0x1.8789e7f2f98a1p-403, 0.0, 0x1.275aa4ed08a27p-386, 0x1.4c7b38363557p-258,
     0x1.cc8267340f9e8p-488, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_sinhd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sinhd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
