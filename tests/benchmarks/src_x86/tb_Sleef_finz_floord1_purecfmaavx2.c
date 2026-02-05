/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floord1_purecfma.c --function \
 *     Sleef_finz_floord1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.15e59be6bef89p-417, 0x1.e8a4b282691c9p-60, 0x1.ae9fcd9eadc9cp-457, 0.0,
     0.0, 0.0, 0.0, 0x1.29658020c3947p-842, 0x1.914dd04da7b21p-86,
     0x1.0eab167be475ep-585, 0x1.6054647ec415dp-2, 0.0, 0x1.c423df50cb9a7p-292,
     0x1.9d4f885bb1249p-948, 0.0, 0x1.e51e1828c9702p-320, 0.0, 0x1.5c0a6effb9db9p-867,
     0x1.5421139c94e85p-377, 0x1.7162bde8324d3p-252, 0.0, 0x1.b80ea4a254666p-910,
     0x1.811aaa2a487efp-986, 0.0, 0.0, 0x1.6e5e34cf2b894p-895, 0x1.76f5eb508517ap-443,
     0x1.e90ea9e5b3debp-957, 0x1.f879d6d191a3fp-886, 0.0, 0x1.faf90be2b19b8p-839,
     0x1.de6c372f4f5e5p-738, 0.0, 0x1.bda98de03b01dp-226, 0x1.f3843253fb422p-992,
     0x1.ee996eafad5bcp-6, 0.0, 0.0, 0.0, 0x1.9d0f3a49d7a5dp-640,
     0x1.9761bc4bf3537p-310, 0x1.5db6910eafbe7p-215, 0.0, 0x1.7388e7eed2b0dp-921,
     0x1.4dc7447f63605p-816, 0.0, 0.0, 0.0, 0x1.6ca66ae87766bp-431, 0.0, 0.0,
     0x1.577a45afe32e2p-925, 0x1.752669ecfb5e7p-880, 0.0, 0.0, 0.0,
     0x1.4defbf33f85ep-393, 0.0, 0x1.e9117a054a285p-717, 0x1.7b57d6825af37p-885,
     0x1.91e8aaa369e0ep-849, 0x1.ec2bf195424e8p-568, 0.0, 0x1.9b48a02acf505p-918,
     0x1.85ff1f4288179p-94, 0.0, 0x1.9e34ae504ce08p-602, 0.0, 0x1.1ca2894021794p-143,
     0.0, 0x1.40b9202129fdfp-542, 0x1.45c2d2a090e2cp-256, 0.0, 0x1.d0aac4c68a563p-845,
     0.0, 0.0, 0.0, 0.0, 0x1.98d20b7a3d0ddp-113, 0x1.21b56ac7389e3p-278, 0.0, 0.0,
     0x1.437cf822df03p-992, 0.0, 0x1.f860db3be28b9p-916, 0.0, 0.0, 0.0,
     0x1.1c9b15a6443fcp-239, 0.0, 0x1.0200c3c169402p-813, 0.0, 0.0, 0.0,
     0x1.59ea65553c8edp-683, 0.0, 0.0, 0.0, 0x1.53b5647e336e4p-325,
     0x1.17b01b5ddad37p-740, 0.0, 0.0, 0.0, 0.0, 0x1.2c7779f18f442p-292, 0.0,
     0x1.6a799f87b9aeep-154, 0x1.45c4d2f722e27p-700, 0x1.4d62b6c2b195p-650, 0.0, 0.0,
     0x1.7c6e7822a3993p-976, 0x1.4a3e16af045d4p-402, 0.0, 0.0, 0.0, 0.0,
     0x1.f4739732a4bbbp-154, 0x1.c95a61b51211bp-829, 0.0, 0.0, 0x1.e6fe5dfbac4cfp-404,
     0x1.8fb6efb6427d8p-281, 0.0, 0x1.8e8c643cb6c52p-102, 0x1.3fd0417c3f4a9p-842,
     0x1.f0c92f9848121p-757, 0x1.39afeded526c7p-247, 0x1.d0f23e5c0adc9p-328, 0.0, 0.0,
     0x1.62fee7d3f4a0dp-909, 0.0, 0x1.da31b8c4544edp-486, 0x1.2deaf039be9d1p-997,
     0x1.de03bbe8ebefdp-214, 0x1.de7517990a0bap-563, 0.0, 0x1.1bd180b979aabp-166,
     0x1.8823f0fe22abbp-318, 0.0, 0.0, 0x1.5a702a54c8013p-852, 0.0,
     0x1.c25225c74073fp-730, 0.0, 0x1.69ac1a5145e0cp-388, 0x1.185132ccd0293p-790,
     0x1.48399f84dbd79p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1cf8d5c68afep-171, 0x1.a7f9078a18588p-682, 0x1.cabafb1d68a55p-750,
     0x1.a73ab7fd4eb54p-405, 0x1.103519a7ea3d9p-911, 0.0, 0.0, 0.0,
     0x1.4f8f1b69aba98p-901, 0x1.05f64583b4ca9p-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.93eed77ed1081p-438, 0x1.a184bda47c54p-698, 0.0, 0x1.2c0fecfb86becp-436,
     0.0, 0x1.d714bc1c27196p-37, 0.0, 0.0, 0x1.d8c19e7435bbp-495, 0.0, 0.0,
     0x1.505ccdd2a9d6fp-612, 0.0, 0.0, 0x1.be67aa9ac0737p-349, 0x1.6a8b4448b47cp-711,
     0x1.16eed98249f16p-171, 0.0, 0x1.5be9654d7c5d5p-569, 0.0, 0x1.21a7207464611p-9,
     0x1.72d5486809695p-673, 0x1.c19ff56c2f44ap-594, 0.0, 0.0, 0.0, 0.0,
     0x1.d0d2aa4b4da8ep-675, 0x1.5edcc8900dc2ep-189, 0x1.ebd41d9ef15cep-346,
     0x1.777d8fc965a32p-132, 0x1.0b40006892606p-467, 0x1.02f00e0f6d9ep-875, 0.0, 0.0,
     0.0, 0.0, 0x1.90471bdaf5bf1p-711, 0.0, 0.0, 0x1.36ac2a47be62fp-280,
     0x1.6ba7959aa1b9ep-3, 0.0, 0.0, 0x1.3c4543e113a42p-758, 0x1.4ec3f66d2e205p-471,
     0x1.4c06a92d5649ep-110, 0.0, 0.0, 0.0, 0x1.d8c0020db1bfp-295, 0.0, 0.0, 0.0,
     0x1.847a1c6bb32bep-63, 0.0, 0.0, 0.0, 0x1.69d3a49447a8fp-678, 0.0,
     0x1.d627457525763p-477, 0x1.412797cb90ap-588, 0.0, 0.0, 0x1.d8171f8f5c868p-98,
     0x1.b77b06b9e1c35p-325, 0.0, 0.0, 0.0, 0x1.3ae15d62d9f59p-221,
     0x1.267df66f283bap-818, 0.0, 0x1.ff6aa443994fep-573, 0.0, 0x1.01169d8dd8923p-426,
     0.0, 0.0, 0x1.a4de36277bb73p-561, 0x1.1e5de761522a8p-271, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.183a5240170b3p-394, 0.0, 0x1.2ea9e5cb4b605p-380, 0.0, 0.0,
     0x1.64670aaa5ff86p-165, 0.0, 0.0, 0x1.b7393158fca1bp-146, 0.0,
     0x1.518d2276d46dp-245, 0.0, 0.0, 0.0, 0x1.f891eb7eeab2dp-718,
     0x1.91fa553e729b9p-990, 0x1.7e299726b0a8bp-965, 0x1.d95354c195a5fp-237, 0.0,
     0x1.879db8f14f427p-859, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0ea94336e015p-688, 0.0,
     0.0, 0x1.34945ee54e01cp-892, 0.0, 0.0, 0x1.89e80ab12af49p-241,
     0x1.acfb08cf7c24cp-527, 0x1.56121d37577c1p-779, 0x1.72d61f47e35f1p-886,
     0x1.2348bafb8b828p-438, 0x1.91020df40a96dp-882, 0x1.7cec0c1ad7754p-708, 0.0, 0.0,
     0x1.55451a92378ecp-121, 0x1.f9fd46a3184bep-739, 0x1.d52f25a09df7ep-364, 0.0,
     0x1.72732da72c83dp-543, 0.0, 0.0, 0.0, 0x1.fdcbdbd617723p-716, 0.0,
     0x1.ae53a41914914p-31, 0x1.bd033df6be542p-411, 0.0, 0x1.dacb5fec68676p-477,
     0x1.dcc07579f6b61p-231, 0.0, 0x1.ef8f7d58270a6p-362, 0x1.e1c36c91d02cbp-764, 0.0,
     0x1.39e1a54d6cb6p-1004, 0x1.c6f0d87c4656bp-727, 0.0, 0.0, 0x1.ce962d49d208ep-712,
     0x1.cff2ee1b8dfa1p-707, 0.0, 0.0, 0x1.73535415b40eep-677, 0x1.d17cb7961870bp-762,
     0x1.df96609b2cccfp-982, 0.0, 0.0, 0x1.98f3507baa576p-769, 0x1.23b8b57b351b4p-707,
     0x1.69a0c3c51ce12p-666, 0x1.fd0af1b120017p-1005, 0.0, 0.0, 0.0, 0.0,
     0x1.7cb5deb028c6dp-374, 0.0, 0x1.adb1e036a9f43p-311, 0.0, 0.0, 0.0,
     0x1.5523e827ed395p-929, 0x1.39d4b23d610fbp-597, 0x1.e1267a18de5f8p-903, 0.0,
     0x1.7e1fc453c0dc1p-102, 0.0, 0x1.3493c8b96c771p-367, 0x1.d2b3bbc55c8dap-712,
     0x1.251965c5df45ep-257, 0.0, 0.0, 0x1.2ca3f556538bdp-776, 0x1.f6243188136c2p-747,
     0x1.d874fbc2129c5p-632, 0x1.9f2d425a4987p-475, 0.0, 0.0, 0.0,
     0x1.bcecc3c642b7bp-61, 0x1.d81735b8ff384p-352, 0x1.ad0ef8d70b479p-786, 0.0,
     0x1.e134c66228414p-48, 0.0, 0.0, 0x1.a3071eb9ad862p-972, 0x1.4de12fac4eb58p-704,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f80c24b9cf762p-453, 0x1.e630ba0c59dcep-178,
     0x1.b64489a9023fbp-702, 0.0, 0x1.b3c99d938f109p-95, 0.0, 0x1.8ce66383269b9p-182,
     0x1.1236810d963a5p-641, 0x1.1c1e6b02bcf73p-288, 0x1.fc40ce88e5b38p-493, 0.0,
     0x1.eec90c362b28dp-604, 0x1.bd6ef81c9b6d9p-54, 0.0, 0.0, 0x1.76e4a5c7e571ap-665,
     0x1.9f575bace5efep-753, 0.0, 0x1.6e9af69cf4492p-841, 0.0, 0x1.e2eed64033012p-860,
     0x1.b6b779c8df97fp-557, 0x1.042e819e36849p-54, 0x1.a15a0a169ae8dp-672, 0.0,
     0x1.2707e8af52142p-882, 0x1.b77aaa8f0eff8p-277, 0.0, 0.0, 0x1.9c8a2dc904597p-151,
     0x1.e2342b1e3dc5ap-870, 0x1.0c81fa93a3326p-47, 0x1.29be4bb6edb3p-416, 0.0,
     0x1.58b369645acffp-347, 0.0, 0x1.dc5a6cacc036cp-870, 0.0, 0x1.3592e560bb4abp-271,
     0.0, 0x1.820ea31ab34ddp-397, 0.0, 0.0, 0.0, 0.0, 0x1.1283d4e8457f9p-524, 0.0,
     0x1.1d9e3a8701473p-518, 0.0, 0.0, 0.0, 0x1.573caa488419bp-543,
     0x1.fa431fb325d04p-367, 0x1.f3b60f88f78a9p-314, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec4a5640d7104p-341, 0.0, 0x1.f2b771009139dp-173, 0x1.2d3107aa942ddp-552, 0.0,
     0.0, 0.0, 0x1.61018ce4b4b66p-149, 0x1.f8fa0e8689825p-117, 0x1.c1b2d4179868ap-171,
     0.0, 0x1.cd6b50577729ap-25, 0x1.9b0d089a7b536p-127, 0x1.e0982f4acf784p-685,
     0x1.ad83ae9a67e9ap-317, 0.0, 0.0, 0x1.97e80b57102p-321, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77bf1d3938d2p-861, 0.0, 0.0, 0.0, 0x1.9e31edbbf771ap-965, 0.0,
     0x1.9f1f7b0bb3066p-147, 0.0, 0x1.c906a895e3556p-398, 0x1.872c17ad53677p-332, 0.0,
     0.0, 0x1.ff430d51d2c84p-5, 0.0, 0x1.7ebf752ab5969p-731, 0.0, 0.0,
     0x1.84c9275f4d76fp-410, 0x1.315b9f658ebf3p-636, 0x1.37ebe1b740011p-227, 0.0,
     0x1.4160f814607fdp-67, 0.0, 0x1.e5910059597ecp-884, 0.0, 0.0, 0.0,
     0x1.82a17c02ec32p-783, 0.0, 0.0, 0x1.acd9f4bdcbc97p-392, 0x1.329e863c7da02p-151,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c2d2a63e3a8fp-327, 0x1.bd17f356f226ep-938,
     0.0, 0.0, 0.0, 0x1.bcded15bd6fe8p-1021, 0x1.74bfff15169b4p-542, 0.0, 0.0, 0.0,
     0x1.e80381ded66f7p-352, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.20dd9efc9df9bp-664,
     0x1.214c34629dccbp-302, 0.0, 0.0, 0x1.128b75e2c084ep-21, 0x1.bbe823983149bp-493,
     0x1.3e26edb686599p-881, 0x1.b4c342101397bp-569, 0.0, 0x1.bfa5dee76651ap-266, 0.0,
     0.0, 0.0, 0.0, 0x1.4fa15868ed4dep-703, 0x1.0a217dc0b511dp-930, 0.0, 0.0, 0.0,
     0x1.5bf99fcf8843dp-915, 0x1.9a6e62b79419cp-755, 0x1.3c7cd091ce87dp-454,
     0x1.7413e52a50116p-948, 0x1.add5cfae3541ap-585, 0x1.e8854fd738eb2p-824,
     0x1.393ef3461b184p-814, 0x1.a5f910f3ef4dep-234, 0.0, 0x1.243f3d9a29928p-253,
     0x1.2337358843dbbp-358, 0x1.8a95bb800069dp-882, 0x1.1a624fa2a44a3p-333, 0.0,
     0x1.ae43ec842e66cp-331, 0.0, 0x1.f79e937479586p-259, 0.0, 0x1.86f59bb9cc107p-862,
     0.0, 0x1.665bc7bf80543p-99, 0x1.96300ee025f13p-394, 0x1.7c77fb3be3f1bp-926,
     0x1.89941fb72c53cp-289, 0x1.b9d3edcab7055p-233, 0.0, 0.0, 0x1.34878ed6acf92p-236,
     0.0, 0.0, 0.0, 0.0, 0x1.69802b3660381p-514, 0.0, 0x1.9752042f3bd13p-894,
     0x1.30bdfb6959eb9p-390, 0x1.5a4360611d3a9p-330, 0.0, 0.0, 0x1.b0a55f1de1344p-136,
     0.0, 0.0, 0.0, 0x1.5a0212318b9c9p-460, 0x1.c4c866e9846cep-415,
     0x1.d4649b724d067p-371, 0x1.de331c62c0275p-774, 0.0, 0.0, 0x1.c5a7f9f81c925p-727,
     0.0, 0x1.81d6a00ba97bfp-341, 0.0, 0x1.8a913567f29c8p-496, 0x1.5551570c36aa3p-720,
     0x1.b0d8b53f196ebp-528, 0.0, 0.0, 0.0, 0x1.52f22f1830107p-776, 0.0, 0.0,
     0x1.f2be2b584fefcp-344, 0x1.c565613558fcp-367, 0x1.d496aea21bf2fp-243, 0.0, 0.0,
     0x1.c2fe6fb41dcb1p-481, 0x1.4c99d19ab485fp-160, 0x1.89845a1df0556p-851,
     0x1.500d190c4ad74p-502, 0x1.51e8435b85029p-765, 0.0, 0.0, 0.0, 0.0,
     0x1.d9bb813bde47dp-921, 0x1.e75fc437c8a76p-228, 0x1.69b6e2f98cf9cp-200, 0.0, 0.0,
     0x1.7a8f8b965143bp-432, 0.0, 0.0, 0.0, 0.0, 0x1.e28fa0d034392p-238,
     0x1.7a8691f329d0ap-359, 0.0, 0.0, 0.0, 0.0, 0x1.bfd6a568461f5p-454, 0.0,
     0x1.986c866d24b9fp-955, 0x1.48712474d1b05p-308, 0x1.ae2487f6c9ae1p-329, 0.0,
     0x1.3ac4250d60788p-579, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47a50d0f8c15p-597,
     0.0, 0.0, 0x1.3de1624c459bep-767, 0.0, 0x1.873047693d385p-976, 0.0, 0.0,
     0x1.f82b6f21854e9p-966, 0x1.b6651d21ebc74p-403, 0.0, 0.0, 0.0, 0.0,
     0x1.bed44c144d858p-641, 0.0, 0.0, 0x1.a4fb274585d8dp-652, 0x1.62749bf4c545dp-457,
     0.0, 0.0, 0x1.0a5859c96e8b1p-640, 0x1.6b91b8c38ef73p-726, 0.0,
     0x1.7813f81f4c0f3p-222, 0.0, 0.0, 0.0, 0x1.1cd0455d69268p-154,
     0x1.e01012538b4efp-582, 0.0, 0x1.28855cecb54f7p-637, 0.0, 0x1.d4b3de0c1697fp-887,
     0.0, 0.0, 0x1.8f95a7b2a0906p-23, 0.0, 0x1.8977045ad2364p-270,
     0x1.30270e914889dp-281, 0x1.04dfb3dc3df38p-184, 0x1.156d220c4eb16p-232, 0.0,
     0x1.dd027f9ed3357p-423, 0.0, 0.0, 0.0, 0.0, 0x1.3a58ec9f115a2p-924,
     0x1.5a34609f9c64cp-649, 0.0, 0x1.ab2be61fb0478p-935, 0x1.87fb4b83d874dp-732,
     0x1.12a9379ea4396p-151, 0.0, 0.0, 0.0, 0.0, 0x1.138f131f51f87p-776,
     0x1.0b6f0fe1cfa3cp-142, 0x1.d10728381dc89p-965, 0.0, 0.0, 0.0,
     0x1.cdf1d1d65e6d6p-328, 0.0, 0.0, 0x1.054e94780f80ap-941, 0.0, 0.0,
     0x1.06f7566ac0f2cp-135, 0.0, 0x1.dece5a8cde245p-254, 0.0, 0x1.a445346c28851p-395,
     0.0, 0.0, 0.0, 0.0, 0x1.f03d8287fc7a9p-307, 0.0, 0x1.aad0b8f650394p-918, 0.0,
     0x1.ec956312bbe23p-343, 0x1.5af6c6eedfc5dp-196, 0.0, 0.0, 0.0,
     0x1.73f26de222675p-460, 0x1.37340e4dd54dp-893, 0.0, 0x1.5bf889a22d22bp-449, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.617ddab8e4469p-802, 0.0, 0.0,
     0x1.caf461dc4ed84p-146, 0x1.d577413751f47p-467, 0.0, 0.0, 0x1.79269075f2121p-544,
     0.0, 0x1.17d43e7ab5576p-451, 0x1.5ff17ab191e2ep-866, 0x1.776b2754f69edp-508,
     0x1.6f5b57477986fp-902, 0x1.1b29c3b3f21cbp-228, 0x1.3cb4a1b51bfc3p-940, 0.0,
     0x1.3d400c3e3b861p-1001, 0x1.f8b5bbe1d7cdp-2, 0.0, 0x1.59ee96ddbbf62p-73, 0.0,
     0x1.21f6aa9c86852p-629, 0.0, 0x1.e751010161fffp-172, 0x1.1a1b422c0fce8p-773,
     0x1.61c04c9f88378p-792, 0x1.9f22d9668ada4p-74, 0.0, 0x1.75fe24d2443cap-770,
     0x1.b0e83b083c386p-227, 0x1.919506b30d9ddp-871, 0.0, 0.0, 0x1.af210fb5c737dp-285,
     0.0, 0x1.430c2b5227347p-195, 0.0, 0x1.3007905927411p-39, 0.0,
     0x1.20321a08b48adp-449, 0x1.61ea4886e376fp-498, 0x1.818f73f63419ep-292,
     0x1.b77b9932f2642p-653, 0.0, 0.0, 0.0, 0.0, 0x1.3cbabb5c90606p-145, 0.0,
     0x1.d1ca1aa949ed1p-413, 0x1.921bf9973acd6p-569, 0.0, 0x1.54fb53576634bp-580,
     0x1.16335446c6c61p-708, 0.0, 0.0, 0x1.d173fb120554p-955, 0x1.8dc22ff15b0a2p-776,
     0.0, 0x1.0912556eb1051p-255, 0x1.e5ef07d4df534p-100, 0.0, 0x1.2cc1e04d43b22p-446,
     0.0, 0x1.b4fd90d1cfccdp-909, 0.0, 0.0, 0x1.5558f342bb35fp-591,
     0x1.25d22def044d1p-288, 0.0, 0.0, 0.0, 0x1.22f9f4291887bp-1011, 0.0,
     0x1.a481f1ed7bdb5p-895, 0x1.4974471c0be08p-11, 0x1.9e2ce88d94f14p-353, 0.0, 0.0,
     0x1.124c81cf7d69ap-410, 0.0, 0x1.8ead33fdcfc6bp-608, 0.0, 0.0, 0.0, 0.0,
     0x1.9944811a8bc45p-303, 0x1.4a32f0864bce8p-85, 0x1.e5e688e47a819p-475,
     0x1.c43efd6adc0c1p-350, 0x1.6c2f235acc2ccp-795, 0x1.a3ad781070a3ap-748, 0.0, 0.0,
     0x1.1069528ea71a9p-912, 0x1.db422250c5d62p-498, 0x1.fef04d2e8155ap-734,
     0x1.9971b6778b30cp-857, 0x1.d81da124d5222p-535, 0x1.803a186a74fb7p-230, 0.0,
     0x1.526813c8cae45p-494, 0.0, 0.0, 0.0, 0.0, 0x1.6a62472582124p-479,
     0x1.e7cdf0ecf9c0fp-945, 0x1.0023423496dabp-367, 0.0, 0x1.b8e006d1143ccp-161, 0.0,
     0x1.05e0ac6586eap-280, 0.0, 0.0, 0.0, 0.0, 0x1.1f1ac4e6a0518p-69,
     0x1.fa4e459945bcap-208, 0.0, 0x1.41175b0caaf9dp-137, 0x1.83a0ebcfccf58p-906,
     0x1.3d83f783dc4e7p-478, 0x1.796440dfc2af4p-1010, 0.0, 0x1.a6cd778d2a2e9p-489,
     0x1.68b84d06c503bp-996, 0x1.c88a81ee97fcep-668, 0x1.124ebafbd4f78p-867, 0.0,
     0x1.21495e73c5716p-779, 0.0, 0x1.509abee4a7975p-682, 0.0, 0x1.6763e179ea80bp-229,
     0.0, 0.0, 0x1.25f566c879f8bp-152, 0x1.fbd7f8c429f17p-885, 0.0,
     0x1.b4d52b5ef5882p-983, 0x1.8076f7c1b4325p-370, 0.0, 0x1.87d8b8ed5d48fp-512, 0.0,
     0x1.dae96e1996488p-497, 0.0, 0.0, 0x1.ce308c26c83dcp-1002,
     0x1.d86faf42acbe4p-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9804f2f05117p-227, 0.0,
     0.0, 0x1.394055e11a431p-37, 0.0, 0.0, 0x1.5af41f22e13dap-647,
     0x1.666d92a7e6a35p-104, 0x1.0022d61754046p-246, 0x1.8e7c2f8fe7096p-76,
     0x1.024281c216c12p-641, 0.0, 0.0, 0x1.c0e4a02a890bbp-783, 0.0,
     0x1.c22fb0094fe27p-986, 0.0, 0.0, 0x1.a9ea30b0a061dp-419, 0.0, 0.0,
     0x1.c29c94c5b15b4p-759, 0x1.d390247c1ddaap-864, 0x1.8dd5753aa10cbp-126, 0.0,
     0x1.aa6aaf3ea2688p-138, 0x1.cc0b72fab3e25p-717, 0x1.89a02571e6decp-456,
     0x1.223dba1cd15f9p-619, 0x1.d63523fa9af53p-396, 0x1.1a343d3585ecdp-428,
     0x1.4bb8c956e4a83p-884, 0x1.12d85801de0dp-651, 0x1.19d14297630d1p-398, 0.0,
     0x1.779a682f000adp-1007, 0.0, 0.0, 0x1.a67c29c953c32p-457,
     0x1.7e91b18138368p-136, 0x1.6c8e89a3f6f06p-482, 0x1.bed70081b3b84p-183,
     0x1.2ab0433b5b3efp-904, 0.0, 0.0, 0x1.8ca75e6e93532p-830, 0.0, 0.0, 0.0,
     0x1.5de33fc76f4d1p-702, 0.0, 0.0, 0x1.7da3e509483a3p-724, 0.0, 0.0,
     0x1.73d4e13541841p-957, 0x1.c1dd18618c91fp-58, 0x1.9afe7ee144b6dp-364,
     0x1.7cf47cb9aa639p-761, 0x1.7e483b28ff857p-718, 0.0, 0x1.dd46e46df21e2p-566,
     0x1.a4bc6702da317p-483, 0.0, 0.0, 0.0, 0x1.10ba306e4d9aap-814, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.949ab36898e97p-439, 0x1.6afb4a5a70b8fp-144, 0.0, 0.0,
     0x1.d4964a1dc1921p-599, 0.0, 0.0, 0.0, 0x1.0f7dedcd061d4p-951,
     0x1.1cc584c4bfa87p-119, 0.0, 0.0, 0.0, 0x1.041c36a6b854fp-770, 0.0, 0.0,
     0x1.6294cb1e57172p-1016, 0.0, 0x1.0b442e9795c14p-664, 0.0,
     0x1.21f06a4c30af4p-423, 0.0, 0.0, 0x1.c87e4452ac1e3p-1017,
     0x1.17992e8e39102p-180, 0x1.b45632e8e9013p-782, 0x1.8f19d1db7a669p-765,
     0x1.0fec0f84813e3p-163, 0x1.0555d23f3c9fp-311, 0x1.a63b6cf4a493p-161,
     0x1.69dcf207d3eaap-816, 0.0, 0x1.95751aaf22cbap-473, 0x1.715d37d5f574fp-171
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
            tmp1 = Sleef_finz_floord1_purecfma(tmp0);
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
    printf("Sleef_finz_floord1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_floord1_purecfma bench acc %la\n", global_bench_acc);
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
