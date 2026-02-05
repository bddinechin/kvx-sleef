/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd1_u10purecfma.c --function \
 *     Sleef_finz_sinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b4a903f387b83p-166, 0x1.0c0f09c89feeep-787, 0.0, 0x1.809517296ca66p-261,
     0x1.780decb7ff979p-580, 0x1.894f5997e279dp-1006, 0.0, 0x1.38377c610a82p-622, 0.0,
     0x1.95763bd1e910bp-161, 0.0, 0.0, 0x1.de3515d2fad8ep-981, 0.0,
     0x1.9ad5c4403f364p-422, 0x1.f804ea9ae8b54p-968, 0.0, 0x1.cf381bdecd3d3p-422,
     0x1.a9c91db9b3591p-490, 0x1.4923c115c8d66p-642, 0.0, 0x1.7a1fb73401478p-566, 0.0,
     0x1.e757677e032ccp-264, 0.0, 0x1.0535ca077b14fp-908, 0.0, 0x1.fd30f67e44368p-534,
     0.0, 0.0, 0x1.e097ba29215a7p-599, 0x1.83f7e269a0bb8p-620, 0x1.7229cc4752785p-117,
     0.0, 0.0, 0x1.db0992f08ff05p-345, 0.0, 0x1.cb105c83f9f82p-60, 0.0,
     0x1.32e9fd861d6bep-825, 0.0, 0.0, 0.0, 0x1.fada32129accp-377,
     0x1.8ed7a8c932d49p-2, 0.0, 0.0, 0.0, 0.0, 0x1.da081a0ed061cp-362,
     0x1.e1e43eba91427p-75, 0x1.ccdf00bc0071fp-670, 0x1.ebdf00a147e61p-1011, 0.0, 0.0,
     0x1.56b9448e79bd3p-395, 0x1.ca45111007c21p-250, 0.0, 0.0, 0.0,
     0x1.0e3c86dd5bcaap-357, 0x1.3b2d2d68c54e3p-937, 0x1.df33eb5cea56p-207, 0.0, 0.0,
     0.0, 0x1.fdef7159a65d3p-585, 0x1.54685863527aap-237, 0x1.82d659b78ab6cp-254, 0.0,
     0.0, 0x1.29ee2cdb5be83p-966, 0x1.aba289466052ap-11, 0x1.b9d225e6837cbp-605,
     0x1.0be670da18537p-948, 0.0, 0x1.1cabdde5df0d1p-783, 0.0, 0x1.c21414478755p-784,
     0.0, 0.0, 0x1.5cbeacfe27a77p-428, 0.0, 0x1.3749c2471e9p-556, 0.0, 0.0,
     0x1.b1e83c48c3dd5p-307, 0.0, 0x1.6b82f4e383f34p-581, 0.0, 0x1.3611e53a7475fp-880,
     0.0, 0x1.5b33a1e7685b7p-120, 0.0, 0.0, 0.0, 0x1.4030f7cae327bp-613, 0.0,
     0x1.b43d281677665p-477, 0.0, 0.0, 0.0, 0x1.0648e94e290fp-144, 0.0, 0.0, 0.0,
     0x1.b833924cc1cddp-274, 0x1.4976ea7d75ce4p-860, 0.0, 0x1.de4c16af398ebp-258,
     0x1.08bba3a812043p-529, 0x1.dca39da30b18fp-317, 0.0, 0.0, 0x1.310f1f9a5296bp-515,
     0.0, 0x1.b8af703864212p-496, 0x1.88a164213578fp-769, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.586a5cf95c04ap-922, 0.0, 0.0, 0.0, 0.0, 0x1.fd2826f8ee298p-202, 0.0,
     0x1.6235e9221303ap-877, 0.0, 0.0, 0x1.a9a43cf852976p-890, 0x1.598a80de7250ep-590,
     0x1.6a68f7b7dc618p-102, 0x1.148a6b18591fap-868, 0.0, 0x1.e5a73eb80e1afp-744, 0.0,
     0.0, 0x1.2d02fb448624dp-75, 0x1.c8ff5a4e13babp-669, 0.0, 0x1.af02d6a5918ccp-492,
     0x1.25553679e3956p-58, 0.0, 0x1.6f8ab6b93db9ap-337, 0.0, 0.0, 0.0,
     0x1.3a956008cf771p-958, 0.0, 0.0, 0x1.d30a80810f43ep-789, 0x1.aa7b90a6d6f5bp-795,
     0.0, 0x1.4b4ed2437a211p-113, 0x1.9619922917f5p-313, 0x1.a701b42d88508p-725, 0.0,
     0x1.8ddab01e5f62ap-1009, 0.0, 0.0, 0x1.aed9e1c79839bp-835,
     0x1.d43e1b62ec25ap-730, 0x1.0b03a9b68fd6bp-21, 0x1.ff1933c2cb2bep-338, 0.0, 0.0,
     0.0, 0.0, 0x1.84a3c7a4ae909p-161, 0.0, 0x1.7d9201f5ba4b3p-633, 0.0,
     0x1.6d8e0dad93982p-613, 0x1.d206fce07e72fp-135, 0.0, 0x1.4957a978f4b97p-620,
     0x1.330c707bcaa89p-473, 0.0, 0x1.80e97f0204c65p-335, 0x1.be719888bfe03p-955,
     0x1.f9a6ac621890ap-873, 0.0, 0.0, 0x1.e7c249e23df6p-243, 0.0,
     0x1.692634918bd2bp-853, 0x1.7456db2c76f45p-678, 0x1.991b29b1cc1d6p-173, 0.0, 0.0,
     0x1.d55ac47f8598ep-403, 0.0, 0x1.937078fbc5778p-391, 0x1.fb617f684721ap-574, 0.0,
     0x1.54e48ca879769p-353, 0x1.89b2655f753c6p-678, 0x1.3f746a06f9ad1p-426, 0.0, 0.0,
     0.0, 0.0, 0x1.052ae0002800cp-733, 0.0, 0.0, 0.0, 0.0, 0x1.551f746df3c1p-798,
     0x1.a64887802271p-311, 0.0, 0x1.e092a29c1b1fbp-318, 0x1.615f3ed126627p-961, 0.0,
     0.0, 0x1.f3787d0f0b0adp-807, 0x1.68e3505f8c39cp-966, 0x1.c5e7b5c3a83c7p-891,
     0x1.7c7a93ce94899p-256, 0x1.807d66504bbaep-832, 0x1.44a1d10c535d6p-334,
     0x1.1d0fd65be4eadp-234, 0x1.2ce6248ecfb5ep-962, 0x1.91f883f13ca93p-152, 0.0,
     0x1.78de6037406e4p-259, 0x1.dedda31de6ddp-810, 0.0, 0x1.8fcb0f6dae195p-152,
     0x1.85368a7f8fe4ap-592, 0.0, 0.0, 0x1.1afc842badb2ap-118, 0x1.208b36f12aa1dp-575,
     0.0, 0.0, 0.0, 0.0, 0x1.4cec00ae9db3p-765, 0.0, 0.0, 0.0, 0x1.61eb93687c333p-642,
     0.0, 0.0, 0.0, 0x1.192f8763a3e2dp-18, 0.0, 0x1.8a5d676e59859p-773, 0.0,
     0x1.961149ba7659ep-518, 0x1.531a5155ab0c3p-271, 0x1.5507a4bdaf039p-741, 0.0, 0.0,
     0.0, 0x1.a8e268a7199e9p-364, 0x1.65b45edcb7da2p-872, 0.0, 0.0,
     0x1.1dc36b98fec78p-1009, 0x1.0e39856911487p-216, 0.0, 0x1.e622e38b0f09p-83, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cff0d7a37c037p-617, 0.0,
     0x1.4aa103f8f0862p-309, 0.0, 0.0, 0.0, 0x1.6e168d563835p-253,
     0x1.d5a07dfda3205p-389, 0.0, 0.0, 0.0, 0x1.09223e542f4cbp-7, 0.0, 0.0, 0.0, 0.0,
     0x1.383dfea2e42ap-413, 0.0, 0.0, 0x1.fe07bd74409d5p-822, 0.0, 0.0,
     0x1.3a84b9c991ccp-559, 0.0, 0x1.2a6fbab916908p-56, 0.0, 0.0, 0.0, 0.0,
     0x1.2d92f28d0ced1p-961, 0.0, 0.0, 0.0, 0.0, 0x1.ff813415adfbbp-949, 0.0,
     0x1.5e63e52a95516p-699, 0x1.37611bfaf6028p-647, 0.0, 0x1.60f381976a3b2p-739,
     0x1.828235f611cb7p-589, 0x1.24f90c1dabaf5p-222, 0.0, 0.0, 0.0, 0.0,
     0x1.df5c6ba0b7477p-66, 0x1.681d18d0f397fp-147, 0.0, 0x1.ce60d4172ab2fp-769, 0.0,
     0.0, 0x1.4fdb5ca9a59f8p-842, 0x1.49b955501ab4dp-467, 0.0, 0x1.8a4be75bb56b2p-223,
     0x1.2612ced398a16p-634, 0.0, 0.0, 0x1.5287b40984672p-568, 0.0, 0.0,
     0x1.ffed188d91a2p-165, 0x1.4208a7a02d085p-704, 0x1.1610e128c40a3p-768, 0.0,
     0x1.7f2e5671901c2p-647, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ae43e99fda3p-646, 0.0,
     0x1.81d190e40cef4p-323, 0x1.d54f1ee48eb47p-434, 0.0, 0x1.e63090adb8ee2p-29, 0.0,
     0x1.dcbdde8d4e563p-409, 0.0, 0.0, 0x1.26f2f3c1143b2p-184, 0x1.a6c6275f54579p-715,
     0.0, 0x1.2edcea9b98425p-105, 0x1.f36bef5787fc6p-160, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a3499020e6043p-985, 0x1.1636d8cf1370cp-1005, 0x1.b27a9d847deep-765,
     0x1.33a483d7f83cdp-8, 0x1.de2fbe17bae8p-653, 0.0, 0x1.862dd235e9662p-854,
     0x1.7782442457aaap-359, 0x1.d1d35685b5cb8p-456, 0.0, 0x1.e239684d529ecp-593, 0.0,
     0x1.b3b035256354dp-1005, 0x1.9fae73227de7bp-36, 0.0, 0.0, 0.0, 0.0,
     0x1.b081e648e5d94p-876, 0.0, 0x1.0fda11f167295p-405, 0x1.06afc644d7ebp-253, 0.0,
     0.0, 0x1.465d54304cd1p-167, 0x1.12fd66c7bc151p-218, 0x1.b16bf7923cdc7p-326,
     0x1.41a9bbfdd35b4p-494, 0x1.e271cf3987e4ep-431, 0x1.aa1d4024a302cp-850,
     0x1.46e7c58fe5d18p-703, 0x1.28d24058a0077p-89, 0.0, 0x1.22b2e24d5a10ep-108,
     0x1.a8b01353fe002p-61, 0x1.3f86b274ac037p-745, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f6e897b48006p-174, 0x1.da85d8a340862p-123, 0.0, 0x1.4fc254c466aa6p-833, 0.0,
     0x1.bd952ced594b2p-57, 0.0, 0x1.c1d006067a895p-585, 0x1.82867cb61e742p-263,
     0x1.f142a7c8a7f0cp-374, 0x1.886c54bbd287p-360, 0.0, 0x1.cb37a34f54a8bp-100, 0.0,
     0.0, 0x1.db4bb87229fd6p-737, 0x1.e029ddf5a566p-257, 0.0, 0x1.d5381740843ddp-660,
     0.0, 0.0, 0x1.1df84bbee3ca2p-753, 0x1.327f240d49b02p-197, 0x1.4369dea1d085fp-788,
     0.0, 0x1.499c257a39992p-786, 0.0, 0x1.1b5e51c67e2a2p-429, 0x1.02f89f09c0e4ep-465,
     0x1.8966b8c0e6a55p-583, 0x1.26b1cb7bf08e3p-469, 0.0, 0x1.686ba357e53adp-370,
     0x1.581c943705517p-673, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64b5e674d96c6p-113,
     0x1.9bf6e503eb4b2p-92, 0x1.a2dd572fe0ad3p-784, 0x1.046a4537348e7p-486, 0.0,
     0x1.7d836526432d5p-330, 0.0, 0x1.49c6669921ccp-734, 0x1.f44b033a8b1a8p-934, 0.0,
     0.0, 0x1.8b4b8640dbd37p-759, 0x1.daf36857f84a5p-136, 0x1.4f9651c8119c5p-658,
     0x1.2fc70b1ba8479p-192, 0x1.52289bccdd0dp-559, 0.0, 0.0, 0.0,
     0x1.4ce2fc04c7bd1p-75, 0.0, 0x1.c8d180686269p-703, 0x1.ef1fa5c70c8e2p-86,
     0x1.975836f32458bp-18, 0x1.1b2f98c357f72p-237, 0x1.c0e9b00559dc3p-366,
     0x1.75b80444b3c54p-818, 0.0, 0.0, 0x1.d97397583827ap-368, 0x1.f43d1966e36ebp-861,
     0x1.9e1324ef36eb5p-1008, 0.0, 0x1.2fab546b6bd9bp-112, 0.0, 0.0, 0.0, 0.0,
     0x1.5e7a1e4f1e85cp-680, 0.0, 0x1.dc051db8751bdp-161, 0.0, 0x1.f6943b6e0429ap-487,
     0x1.8877fd6499d92p-897, 0.0, 0x1.7b7a564312704p-573, 0.0, 0x1.15f1e8eed9d6cp-447,
     0.0, 0x1.0b0c585db3fap-665, 0x1.5ea6ea7be9e81p-396, 0.0, 0x1.3676b288cafb4p-120,
     0x1.3e12cd162d532p-526, 0.0, 0x1.500785122f38p-226, 0x1.3ee28bf0e4a7ap-190,
     0x1.d5730891caaf7p-661, 0x1.df8be70f07ea6p-270, 0x1.e45ee9290d281p-398,
     0x1.07a22ab8c7a15p-191, 0.0, 0.0, 0.0, 0x1.670a0032c85f6p-357,
     0x1.5c44fa725ca33p-179, 0.0, 0x1.322aacadbd7eap-364, 0x1.746ec14646bd8p-791, 0.0,
     0.0, 0x1.99b147b086522p-661, 0.0, 0x1.1dd6b56005efep-250, 0x1.b43c0cd7d6824p-307,
     0.0, 0.0, 0.0, 0.0, 0x1.de6352f9a65bcp-839, 0x1.1da9fd16276f9p-17, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.dbb4d520c358bp-82, 0x1.dae81a30abfb6p-978, 0.0,
     0x1.72c51d77995a5p-256, 0x1.2ac8d213c44b6p-82, 0x1.8f137b8b8629ap-877,
     0x1.31672ee007a7ep-630, 0.0, 0x1.d2b2b562a21edp-469, 0x1.7998f51385aabp-10, 0.0,
     0.0, 0x1.c98e2596f259cp-187, 0x1.4d00ef4b3c979p-992, 0.0, 0.0,
     0x1.1d9cbcf7c61bfp-184, 0x1.e8544cc11d6e1p-496, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.57f88d8f5646cp-841, 0x1.c214ec0349abep-767, 0.0, 0.0, 0.0, 0.0,
     0x1.29d23d9633e8cp-762, 0.0, 0.0, 0.0, 0x1.7a8db75a5365bp-420, 0.0,
     0x1.9aacfd868b89fp-445, 0x1.ed5b2d5e92062p-499, 0x1.801eee119a6dp-869,
     0x1.d5a79f1b9b71cp-55, 0.0, 0.0, 0.0, 0.0, 0x1.d96182a902546p-579, 0.0,
     0x1.cef91e91fdae2p-206, 0x1.6776c4a6eeap-706, 0x1.18867ecf21ab9p-745,
     0x1.6a468070d0e96p-746, 0.0, 0.0, 0x1.b80268332c138p-987, 0x1.f4e1a6feb2c77p-100,
     0x1.1edd12ce6a20cp-730, 0x1.1cf03272aab1ap-607, 0x1.552ada95c05cep-213, 0.0, 0.0,
     0.0, 0.0, 0x1.568bdb0c40ec4p-85, 0.0, 0x1.5d3130acbefddp-50,
     0x1.79a2fe0f4a179p-585, 0.0, 0x1.b03e63926264fp-188, 0.0, 0.0,
     0x1.87ca831563b1cp-467, 0x1.032414beb41ccp-167, 0x1.c292d75c71281p-215, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3bcb7d05cacfp-288, 0x1.21301baa0f1cp-786, 0.0,
     0x1.08cfa951315b1p-56, 0x1.e2f1050a46c2cp-501, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6afa8efe21d86p-269, 0.0, 0x1.93f003378eb6fp-877, 0x1.0684c0dd38672p-864,
     0x1.029ef896e8624p-573, 0.0, 0x1.b5ec4f40723fdp-387, 0x1.ea90a1d36a0dbp-909,
     0x1.a6a432bad40f6p-784, 0x1.9922f1b1028a9p-256, 0.0, 0x1.e482423afe322p-955, 0.0,
     0x1.cdd6c1c009095p-458, 0.0, 0x1.17968caa76017p-440, 0x1.bdc6e76618693p-462, 0.0,
     0.0, 0x1.180a4e1bfa786p-525, 0.0, 0x1.d608a833a770bp-509, 0x1.2a2991331631fp-995,
     0.0, 0.0, 0x1.623b16bb4df6ep-761, 0x1.e73bc9fab27bep-225, 0x1.1e364cf0e4813p-226,
     0.0, 0x1.4499ef91e8da1p-249, 0x1.924528920aa5ap-360, 0x1.3bad5dd46cf0ap-314,
     0x1.c3ee81955005dp-376, 0x1.1ec1b6709b8cdp-427, 0x1.99529c5ba671ap-97, 0.0,
     0x1.0bfda5b756793p-265, 0.0, 0.0, 0x1.0d7e002892458p-428, 0x1.36cfc44ab11ddp-161,
     0x1.48ac3698ad0e5p-141, 0.0, 0x1.69b2e2f59d693p-484, 0x1.3b84e958516f9p-971,
     0x1.b407952f00432p-887, 0x1.f2bbf99c66e16p-957, 0x1.60f179210f492p-175,
     0x1.090e64fc118a7p-1011, 0.0, 0x1.e2d0e2cee2bcp-605, 0.0,
     0x1.28d03146216f5p-1008, 0.0, 0.0, 0x1.ac793a0ff7a4dp-919,
     0x1.0a9e2ab65a7b5p-800, 0x1.d2f1dc484a27cp-97, 0.0, 0x1.24e07443b8913p-931, 0.0,
     0x1.970b5e6fa5ed9p-412, 0x1.82168e8691304p-306, 0x1.bcfdfbb198792p-555,
     0x1.ae05b24754347p-931, 0x1.c1402e8a6d6acp-365, 0.0, 0x1.c7e32b0492bc3p-663, 0.0,
     0.0, 0.0, 0x1.2ca5e49d7d522p-456, 0x1.73379b7890da3p-602, 0x1.95b6842605092p-739,
     0x1.5240329045d8bp-749, 0.0, 0x1.e1f3b20ce1a0dp-246, 0x1.c7e85ab385674p-156,
     0x1.625c5009b6222p-214, 0.0, 0.0, 0x1.f8ada662ed8f2p-523, 0x1.d830c1faf56fap-270,
     0x1.19a4e64f47aa4p-600, 0x1.ba25b56857fb2p-206, 0x1.0ef8ff4311e1fp-571,
     0x1.9e84a6a219895p-358, 0.0, 0x1.de1894db21713p-468, 0x1.b7ac5ee8a1231p-700, 0.0,
     0.0, 0.0, 0.0, 0x1.d1544046c0764p-426, 0.0, 0.0, 0x1.39d282787fcdbp-967, 0.0,
     0.0, 0x1.02a1626d95222p-699, 0.0, 0.0, 0.0, 0x1.b5a2aa8689b14p-824, 0.0,
     0x1.01f8d579de308p-151, 0x1.7b199bf785bffp-703, 0x1.a6cc191fdbbc2p-748, 0.0, 0.0,
     0x1.ab2f0cc7a08f5p-854, 0x1.5fc05c9047cd4p-479, 0.0, 0.0, 0x1.912227b2ec8c3p-297,
     0x1.8625eb46cd81fp-23, 0.0, 0.0, 0x1.819d3ce104d3fp-462, 0.0,
     0x1.fa47aaa3edd8fp-259, 0x1.db11394a198e3p-790, 0.0, 0x1.0a1af1c0fef16p-310, 0.0,
     0.0, 0x1.683465ca7c912p-756, 0x1.f9c20ca3da109p-48, 0.0, 0.0, 0.0, 0.0,
     0x1.56d601159300ap-896, 0x1.41a8031e35653p-268, 0.0, 0.0, 0.0, 0.0,
     0x1.ababb56363cb6p-185, 0x1.ec5a9ea32e284p-499, 0x1.2bfd47ca8dbbep-971,
     0x1.99d668c280dap-734, 0x1.c9e15e71bd21p-461, 0x1.fbdc456fb12cbp-990,
     0x1.b5638e25e6b3dp-607, 0.0, 0x1.04ddc1ba7ac02p-760, 0.0, 0x1.89d6e8deda97bp-308,
     0x1.cec4ad0a6238dp-30, 0.0, 0.0, 0x1.4d7f24fae88b4p-743, 0.0, 0.0, 0.0,
     0x1.0a1d951aed4e1p-117, 0x1.fcc8ff1fc3f76p-860, 0.0, 0x1.c4dddc6275cfp-367,
     0x1.7cceccd28b14dp-305, 0x1.213db625c0409p-669, 0x1.8fc796c3e1533p-406, 0.0,
     0x1.6ee7b2fb131ap-934, 0.0, 0.0, 0.0, 0x1.87882222bcd14p-805, 0.0,
     0x1.7f332dd22b3ddp-198, 0x1.a173f648ae4d4p-141, 0x1.8412ecebbe98p-766,
     0x1.2ec4078b298e1p-63, 0x1.6f576b924c11p-950, 0.0, 0.0, 0.0,
     0x1.68504350683c8p-97, 0.0, 0x1.1765580dc053bp-655, 0x1.4611ce8368a0ap-405,
     0x1.4d401258c198dp-774, 0x1.20f10b270a98ep-1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.043f21d4f2fa1p-42, 0x1.eae02e81d44fbp-165, 0.0, 0x1.b459a80e0156fp-561, 0.0,
     0.0, 0x1.544df84400f32p-538, 0x1.a9d7589adc6c3p-823, 0x1.0bcdbff4b647fp-899,
     0x1.3f708874599ep-324, 0x1.b350fb397769fp-881, 0x1.eb601f1b1b0bep-205, 0.0, 0.0,
     0x1.21dfdda40f168p-119, 0x1.cfb6a98f22f2cp-844, 0x1.ec3e377ab0ca1p-98,
     0x1.2890b75cf5846p-271, 0x1.69ba060de2835p-36, 0x1.799acd3932112p-92, 0.0,
     0x1.cff4459b63a78p-615, 0.0, 0x1.0bfc784207cc8p-568, 0.0, 0x1.df2aa542847aep-439,
     0x1.ee7f491f2b17dp-1008, 0x1.0e71c360a46b2p-758, 0.0, 0.0, 0.0, 0.0,
     0x1.5574ecaad15e8p-213, 0x1.fc894f464b1ccp-583, 0x1.4a5bde9a74978p-641,
     0x1.db7501a2b4658p-540, 0.0, 0.0, 0.0, 0.0, 0x1.af5866b15adcep-208, 0.0,
     0x1.45755f545eab2p-224, 0.0, 0.0, 0x1.75bc971c37f06p-238, 0.0, 0.0, 0.0,
     0x1.ad17721bcd7f6p-690, 0x1.6723788003683p-890, 0x1.eb2f6d0778f47p-887,
     0x1.3d430c871e7ffp-992, 0x1.189d5bd0124afp-880, 0.0, 0x1.e157a004a26cp-864,
     0x1.fab6ec24c6277p-518, 0x1.46aaa4124d77dp-208, 0x1.258d9d5eb0affp-920, 0.0, 0.0,
     0x1.0f8e5bc09cbd5p-784, 0.0, 0.0, 0x1.07be0b611c8c1p-876, 0.0,
     0x1.a8e99fc1ec3e1p-559, 0x1.24ff678fb85dp-624, 0x1.f468cd51ca36cp-335,
     0x1.a751180ac0c3bp-768, 0.0, 0.0, 0x1.c361b1fc623e2p-514, 0x1.2a1e79d27df1ap-555,
     0.0, 0.0, 0.0, 0.0, 0x1.2bc6708aaf539p-79, 0x1.191579f01b5f1p-495, 0.0,
     0x1.f48294551266cp-1011, 0.0, 0x1.bf4b7f31e275bp-168, 0x1.d12b16dfc2dfdp-422,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fed39a46721b7p-860, 0x1.d2a180ebcccabp-85,
     0x1.0f7e21f492539p-855, 0.0, 0x1.be7bf574eb823p-62, 0x1.70e366dceb1fcp-522, 0.0,
     0.0, 0.0, 0x1.bf2c152e97e2dp-518, 0.0, 0x1.d9ec95043e1bp-45,
     0x1.b62ba804ecd4ep-459, 0x1.509cf46a6cfd4p-636, 0x1.d7590a96462ccp-204,
     0x1.bc383a2754cf6p-41, 0x1.170c9b0175289p-1009, 0.0, 0x1.ae8989cb55849p-28, 0.0,
     0x1.58c8afe417d4cp-686, 0.0, 0.0, 0x1.9ffa84da7d6d5p-839, 0.0, 0.0, 0.0, 0.0,
     0x1.bfd45bdea9f7ep-691, 0.0, 0x1.6f976d3dc7448p-506, 0.0, 0.0,
     0x1.e2f0764567dcdp-228, 0x1.172c5ac9f859p-581, 0.0, 0x1.15b7154c9fe58p-897,
     0x1.cd7a5811dd1c9p-959, 0x1.591c2b3bab5ecp-611, 0x1.4077df4f08e7bp-451,
     0x1.fe9f78fe312bbp-632, 0x1.4860b1dbc7b7ep-845, 0.0, 0.0, 0.0,
     0x1.bb2bced382bc2p-680, 0x1.46cfb50c18d5p-526, 0x1.1cef492a3b26ep-422, 0.0,
     0x1.7865b4d45148dp-747, 0x1.ec41bd790abe1p-579, 0.0, 0.0, 0x1.988e6b6bf91cap-508,
     0x1.82965631962f9p-889, 0.0, 0x1.72d1c97f36953p-830, 0x1.e5100bd5f5f77p-238, 0.0,
     0x1.f14dfc7c66a97p-716, 0.0, 0.0, 0x1.947c04aa9846cp-12, 0.0,
     0x1.bea048b7d1a7dp-450, 0x1.8f2fd011288bdp-524, 0x1.ca40219d79bfep-19,
     0x1.d229c99d097f8p-723, 0.0, 0x1.1725f3225be13p-1010, 0x1.102a4a862f623p-994,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a54d64c4b26p-361, 0.0, 0.0, 0.0,
     0x1.c1bb866e5df68p-903, 0x1.ba8611f298ae9p-765, 0x1.3b63f0f02bea2p-112,
     0x1.c3a47eb5aede6p-19, 0x1.aef1064cf90b8p-772, 0x1.dedb3be9d9921p-471,
     0x1.79972889c0acap-822, 0x1.dc22ff33f802p-989, 0.0, 0x1.af9e42a900369p-704,
     0x1.428f900b56b4fp-62, 0x1.305afa644b93p-273, 0.0, 0x1.e77236565bfc8p-320,
     0x1.a509516f13abbp-630, 0.0
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
            tmp1 = Sleef_finz_sinhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sinhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
