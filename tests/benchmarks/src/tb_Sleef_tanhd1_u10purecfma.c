/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd1_u10purecfma.c --function \
 *     Sleef_tanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.0027955dffa7p-253, 0.0, 0x1.de8a6ed131e4ep-556, 0x1.c75d130475312p-784,
     0x1.68a73b19f0f72p-49, 0x1.4d86e27a83314p-928, 0.0, 0x1.af02a89d5ad8dp-608, 0.0,
     0.0, 0.0, 0x1.08fe71bd4d916p-542, 0.0, 0.0, 0x1.e2baed54afb31p-294,
     0x1.46bb17c1f5a4bp-529, 0x1.940eaa7c38d67p-528, 0.0, 0x1.71944ec9b0c4ap-262, 0.0,
     0x1.6f6c7e39359c3p-927, 0.0, 0.0, 0x1.5d4744b076e3ap-705, 0x1.8a0ffbd51c31dp-964,
     0x1.a8f6928b97ab5p-472, 0.0, 0.0, 0x1.4280ce7980d86p-971, 0x1.bb1ada4219facp-859,
     0x1.67db810ff7832p-273, 0x1.12b044617be04p-507, 0.0, 0x1.b9ac82f360442p-302, 0.0,
     0x1.898f4f6fb4515p-863, 0.0, 0.0, 0x1.ec151875f12d8p-559, 0.0,
     0x1.bf70f85557674p-158, 0x1.4ec690baf10d8p-863, 0.0, 0x1.31890e7442927p-933, 0.0,
     0.0, 0.0, 0.0, 0x1.38c9de0d3dccfp-333, 0x1.7f85c9d1ef23bp-460,
     0x1.59b0084dc6fap-520, 0x1.70520fd630cfep-21, 0x1.eb6eda1807aep-210,
     0x1.6e9c0f586f1cfp-703, 0x1.2359f720558e5p-842, 0x1.b349dd41bed82p-249, 0.0,
     0x1.2cd66341d1816p-710, 0.0, 0.0, 0x1.38ff9f41cbcb9p-304, 0x1.0059bb34d3abbp-979,
     0.0, 0.0, 0.0, 0x1.8a39e691a1ba1p-822, 0.0, 0.0, 0x1.b31cc2c355c48p-266, 0.0,
     0x1.4388d9b7d6cdep-666, 0.0, 0x1.78e0c1e9142c9p-496, 0x1.eb340da78c141p-408, 0.0,
     0x1.3b003d5aabacep-239, 0.0, 0.0, 0x1.38bdab786ba79p-287, 0.0, 0.0,
     0x1.50a26faece3dfp-683, 0x1.59fa02c11da6cp-279, 0x1.c0549407b52a2p-110,
     0x1.3f1650af0d4d8p-671, 0x1.1f5601ae479fdp-892, 0.0, 0.0, 0x1.8ab6d5eaf5acbp-515,
     0x1.6781b559920bcp-357, 0x1.fd80a8f368ddap-574, 0.0, 0.0, 0x1.bc78e71be5431p-742,
     0.0, 0x1.3418c5606e2b2p-761, 0x1.08612a3bbd2fp-288, 0x1.0931bb8d6324bp-742,
     0x1.d5938f2464d59p-1010, 0.0, 0.0, 0.0, 0x1.46542570c4206p-285,
     0x1.1245d3e4ecf78p-803, 0x1.9cb7877b0814bp-943, 0x1.005f2a59d1645p-482, 0.0,
     0x1.bf43c2fe3dfc2p-567, 0.0, 0.0, 0x1.3cd9ee7900538p-558, 0x1.13036d3023a5dp-7,
     0.0, 0x1.5b91291561881p-427, 0x1.327f40676f7bap-94, 0.0, 0.0,
     0x1.58b69ae30a6a6p-357, 0x1.aa8e24d4cf0b5p-367, 0.0, 0x1.e6923c3aa2c6fp-465,
     0x1.230390107f629p-230, 0.0, 0.0, 0x1.ccb85bf5b42dcp-595, 0x1.c72b5137bc236p-286,
     0.0, 0.0, 0x1.06e04f6ea377ap-46, 0x1.6231b64616aeep-575, 0x1.61f57cdbb4f4bp-990,
     0.0, 0x1.926dfa4048b0ap-134, 0x1.a63f3339a83afp-740, 0x1.45fd2f2a993abp-283,
     0x1.9fc0d4adfe93dp-259, 0x1.e4b791be85db3p-839, 0x1.69ad279f5f11p-324,
     0x1.ae425df17c757p-163, 0.0, 0x1.1304a9c5ea5a8p-53, 0x1.892c65031cc49p-165, 0.0,
     0x1.f7116281b1bdfp-128, 0x1.58223676a4fc1p-980, 0.0, 0x1.0676a7e99f0efp-200,
     0x1.9eb5eeed42103p-905, 0x1.2bd8a0abf147bp-1, 0x1.7ba094b616c83p-730,
     0x1.3154ee0f3996ep-789, 0x1.1d154b4157403p-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b67eecb180ccp-710, 0.0, 0x1.57759a55addaap-315, 0x1.5a310066ddfe3p-507, 0.0,
     0.0, 0.0, 0x1.f3d9542efa82bp-861, 0.0, 0.0, 0.0, 0x1.6dc4e107c2763p-716,
     0x1.886af58ce7899p-509, 0.0, 0x1.9ac2a508b450dp-513, 0x1.597f76650dd25p-977, 0.0,
     0x1.f36dd74937ff9p-915, 0.0, 0.0, 0x1.ad36813749d94p-917, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c28f87d9bea03p-852, 0.0, 0x1.30da22a4b8293p-702, 0.0,
     0x1.1b70590d88b61p-364, 0.0, 0x1.effc1ccc37797p-192, 0x1.06b2306c3eaf8p-137, 0.0,
     0.0, 0x1.c00c83cb95fbap-345, 0x1.a46d5f8245295p-286, 0.0, 0.0, 0.0,
     0x1.ef3291c7d69fp-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdda17e976b9bp-270,
     0x1.6eebafdc09992p-62, 0x1.f52f6e50426a2p-252, 0.0, 0.0, 0x1.bf4adafcee174p-785,
     0.0, 0x1.237dbaf885dccp-137, 0x1.6e16d4d828765p-363, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e005bda341c6bp-994, 0.0, 0x1.56100309a0983p-864,
     0x1.2b59fcb855d4bp-334, 0.0, 0x1.90a4868d54c4bp-902, 0x1.0d96e3676d5acp-463, 0.0,
     0x1.7fa0b1885c83fp-818, 0.0, 0.0, 0.0, 0x1.dc169ddc179f6p-338, 0.0,
     0x1.37b1c5fb5be44p-1000, 0.0, 0x1.84172b5577b9cp-831, 0.0, 0.0,
     0x1.5721d02ed9f6fp-531, 0.0, 0x1.ceeaac761892dp-481, 0.0, 0.0, 0.0,
     0x1.08b9194d9e67bp-166, 0.0, 0.0, 0.0, 0x1.fda3096c9f608p-781, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5dffb17d97711p-357, 0x1.f7a4ab33221cbp-1013,
     0x1.ea6d187a2efcbp-555, 0.0, 0x1.8f3599bfcd57bp-804, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.463c8ae83044cp-572, 0x1.f4a90bf9c2dbap-140, 0.0, 0x1.b53eeacb51c13p-937, 0.0,
     0x1.7a614d02dde77p-922, 0x1.4d2ca1289c9cp-127, 0.0, 0.0, 0.0, 0.0,
     0x1.68c3e8a1b3705p-56, 0.0, 0.0, 0x1.e9133f4cdf003p-499, 0x1.264381848441cp-137,
     0.0, 0x1.2af60602018c7p-115, 0x1.318127bc85789p-679, 0x1.f957b0d5c9924p-270, 0.0,
     0x1.0feda8b90ff32p-499, 0x1.c6d9ba5d6606fp-934, 0x1.6e18a12d97976p-711, 0.0, 0.0,
     0.0, 0x1.4431312b33c7ap-223, 0.0, 0.0, 0.0, 0x1.1bf141e1bda41p-506,
     0x1.17fb9d47c3456p-697, 0.0, 0.0, 0.0, 0.0, 0x1.8d1a50d80b652p-973,
     0x1.3af66f9aa4848p-804, 0.0, 0.0, 0x1.aaae8cbc18fa8p-598, 0x1.897c6a954144bp-196,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fdb35991360aap-936, 0x1.263e1ef7be395p-407,
     0x1.b500b706a9d47p-362, 0.0, 0.0, 0x1.241eeb6a9bdcbp-138, 0x1.90a663ff0e194p-965,
     0.0, 0x1.4cd24bd675f97p-861, 0x1.dd94369c0a68cp-574, 0.0, 0x1.5b84709f335bbp-384,
     0x1.ed31955cae642p-2, 0x1.a0641614d420cp-216, 0x1.168672805a8c6p-6,
     0x1.454cba78410b3p-147, 0.0, 0.0, 0.0, 0.0, 0x1.e902b25ee0857p-832, 0.0,
     0x1.82797a7877884p-15, 0.0, 0x1.26f6bab6eeb8cp-760, 0x1.db25b4ce595b9p-850, 0.0,
     0x1.f410572d9bccbp-381, 0.0, 0x1.dd67910094525p-854, 0x1.7ad5560b6c5d1p-139,
     0x1.022bee70a88c8p-782, 0x1.d16b62488f833p-426, 0x1.f1cef4e18552ap-805, 0.0,
     0x1.6472e45fa575ep-157, 0x1.529f7ea29dd84p-335, 0x1.decb14bccb7c9p-1017,
     0x1.b16cd474b555p-917, 0x1.4e4fd5108728ap-1017, 0x1.aecf7d73df82bp-250, 0.0, 0.0,
     0.0, 0.0, 0x1.48fddf33437ddp-132, 0x1.4b516ef09bf22p-300, 0x1.3d2ce30d2657cp-108,
     0.0, 0x1.0a06654ea635p-444, 0.0, 0.0, 0x1.6adb506582058p-413,
     0x1.c4d6bb93fa695p-522, 0.0, 0.0, 0x1.2fc532d32b531p-598, 0x1.3891086d92d76p-121,
     0x1.ffd2243930b12p-5, 0x1.29d62fc5ee368p-714, 0x1.e0bc2e9d2188p-96,
     0x1.ac89b96c7cf69p-338, 0.0, 0x1.c49dc8841184dp-386, 0.0, 0.0, 0.0,
     0x1.974ddd1582ccbp-636, 0.0, 0.0, 0x1.7e317cc668d89p-739, 0x1.da3713fd33969p-93,
     0x1.a666de09de9d8p-913, 0x1.060900e9aa93fp-887, 0x1.b724bc6364cabp-1001,
     0x1.42dfdbe400be1p-137, 0.0, 0x1.0ecb1c0f6742fp-751, 0x1.5e31b0e81f818p-444, 0.0,
     0.0, 0.0, 0.0, 0x1.543548b6a83bfp-139, 0x1.18d29dcc2b4e2p-885, 0.0, 0.0, 0.0,
     0x1.f4636fb09054p-1019, 0.0, 0.0, 0.0, 0x1.57765939a08d9p-16,
     0x1.1ef92a86910fp-915, 0x1.d68c66cdd5216p-737, 0x1.a179854ceee14p-163,
     0x1.dbe66c24d3a06p-905, 0.0, 0x1.d7f4cc092b78bp-553, 0x1.6ed94be400019p-526,
     0x1.e1beedadfb4afp-245, 0x1.5cc142c278d3ep-505, 0x1.4f44099fbcf9bp-714,
     0x1.163f06b1a8e93p-744, 0x1.5cc3310604ef6p-61, 0x1.2a1f6e0946d58p-376, 0.0, 0.0,
     0x1.3ddafa6a2cf9p-54, 0x1.00bee071fd8p-855, 0x1.6855c5b8ac252p-944, 0.0, 0.0,
     0x1.fd2063a552348p-855, 0x1.8b60cddb8bb53p-988, 0.0, 0x1.e5a39f52407f6p-796,
     0x1.6f26e91cbd8e2p-741, 0.0, 0.0, 0x1.5ac4f71593f59p-712, 0x1.0508716796d4dp-119,
     0.0, 0.0, 0x1.0c63afb2e7d1p-582, 0.0, 0.0, 0.0, 0.0, 0x1.1b08c9997fef3p-866, 0.0,
     0x1.6a25942b2326ep-715, 0.0, 0x1.f12a45b18e2ebp-760, 0x1.04e752367ce24p-712, 0.0,
     0x1.71afe87812527p-615, 0x1.7394cff02b81p-456, 0x1.b8d08ce4b6913p-552, 0.0,
     0x1.480b98b4db809p-540, 0.0, 0x1.1d3b12ee0bfb5p-536, 0x1.c577ea453842ep-103,
     0x1.7ea1dfc62b2abp-4, 0x1.cdab14c54171p-216, 0x1.cb07148cdf2fep-829, 0.0, 0.0,
     0.0, 0x1.6422d8fce4fcdp-257, 0.0, 0.0, 0.0, 0x1.0afd6db8574e6p-134, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.eda0738fcda74p-211, 0.0, 0x1.6f86a2d13aeffp-143,
     0x1.d6b4593f439c9p-663, 0.0, 0x1.b92c42bd74b18p-430, 0.0, 0x1.ad937504afa4ap-409,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c41eb1ccfc981p-174, 0x1.9166d98eeacdap-964, 0x1.1e761d48b8623p-864,
     0x1.7698343b1e3a3p-720, 0.0, 0.0, 0.0, 0x1.b09a66cf5148cp-819, 0.0, 0.0,
     0x1.06a3e318ba1ebp-672, 0x1.0cfda03cc892bp-46, 0.0, 0x1.55bebbe3139c5p-367,
     0x1.a15d874091d16p-537, 0.0, 0.0, 0x1.61d91ca7e0e04p-948, 0x1.64668efdc66ebp-494,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b945577bd5b18p-985, 0x1.c2b981cb0211cp-841,
     0.0, 0x1.656158bbaaac6p-917, 0.0, 0.0, 0x1.b820b2d372df9p-792, 0.0,
     0x1.490a423858148p-5, 0.0, 0x1.1820a2eaa1e6dp-520, 0x1.f0d4d0abb9ad1p-88, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80f9bad5a841dp-920, 0.0, 0.0, 0.0, 0.0,
     0x1.2af707e4859cp-891, 0.0, 0x1.a4c53daa672c1p-963, 0.0, 0.0,
     0x1.3c06942e95704p-98, 0x1.6c43d504cac76p-333, 0x1.6bfa5db21e761p-503,
     0x1.84f554242738cp-126, 0x1.8b5e9390c2e25p-90, 0.0, 0.0, 0.0, 0.0,
     0x1.0fc91da4000cp-79, 0x1.fea6f2c8f1e45p-932, 0x1.295d0640166fbp-880,
     0x1.d8f1ba617b92p-626, 0x1.5b8cf00c87ba9p-848, 0.0, 0x1.1e11f73292733p-128,
     0x1.4c79b80fa3e17p-154, 0.0, 0x1.7c7406025d6c5p-234, 0.0, 0x1.4beb0cfbf79fp-356,
     0x1.58b4b3c70704fp-280, 0x1.d51b594ba74b5p-399, 0.0, 0.0, 0x1.d549c50223891p-999,
     0x1.bc00f1d7185b9p-758, 0x1.6c4999ea2dcccp-504, 0.0, 0x1.f61b40a0daffep-551, 0.0,
     0x1.9dfb5ed80f47ap-738, 0.0, 0x1.8bcc0c34aa579p-757, 0.0, 0.0, 0.0,
     0x1.b4196eb18c668p-492, 0x1.61fcb6dd36599p-94, 0x1.d651bad3ab4bep-531, 0.0,
     0x1.01c3c5f949151p-117, 0x1.928072a53dcd8p-336, 0x1.1dcebd83305dep-152,
     0x1.e84f989bf55efp-903, 0x1.3a1518d6d671p-354, 0.0, 0.0, 0.0, 0.0,
     0x1.aa91bca826f36p-567, 0x1.b3b61d28861f5p-652, 0.0, 0x1.1730e54a03abfp-55,
     0x1.81b6a7e4575e2p-316, 0.0, 0x1.dc0c20fdce554p-116, 0x1.1ad298b5969adp-158, 0.0,
     0x1.bdd693a8c1e3p-4, 0x1.a4ca9b3406da8p-554, 0.0, 0.0, 0.0,
     0x1.67ec6d9f85fbdp-565, 0.0, 0x1.d6f5a7b6e234fp-9, 0.0, 0.0, 0.0,
     0x1.8869f8f16b145p-214, 0x1.433a69ae71056p-198, 0.0, 0x1.88f923a7f1dfbp-128, 0.0,
     0.0, 0x1.67ecb1945f40dp-12, 0x1.013dca94434a8p-85, 0x1.5e9010e3a9f49p-700, 0.0,
     0x1.a6249a0619bbap-417, 0x1.228e6a28a9523p-734, 0x1.9d95a0310302dp-839,
     0x1.05ec6873a0eeap-755, 0.0, 0x1.b01abc7643ecep-676, 0x1.f4a6f99d7975ep-395, 0.0,
     0.0, 0.0, 0x1.694acd8aca2a4p-775, 0x1.962f2975b5587p-467, 0.0, 0.0, 0.0,
     0x1.032abfe35ae3ep-379, 0.0, 0.0, 0x1.b8d86aad3fb6ep-944, 0.0,
     0x1.26290cd8e5fcbp-651, 0x1.2353bc7fc093ap-733, 0.0, 0x1.b71f102070c2p-327,
     0x1.cdf76d298f1f6p-257, 0.0, 0.0, 0.0, 0x1.ef759d813e6cap-2, 0.0, 0.0, 0.0,
     0x1.5bbdc84a14173p-575, 0.0, 0x1.2725a8372078dp-642, 0.0, 0x1.625961ec6ef2ep-642,
     0.0, 0.0, 0x1.26de533baadfap-427, 0.0, 0.0, 0x1.a843949566a5cp-32, 0.0, 0.0, 0.0,
     0x1.d51ba8e81e8edp-551, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a82ef20ddbc8p-991,
     0x1.3ca80a3ce8367p-58, 0.0, 0x1.6b92cba02145bp-901, 0.0, 0x1.7dd42754beb5ap-508,
     0.0, 0x1.7d46b807ef48cp-349, 0.0, 0x1.d0d42b50934a7p-442, 0x1.1e502b0d6ac55p-927,
     0x1.0924250f4e548p-759, 0x1.7434ee2d7208bp-962, 0x1.67bc91182aff9p-202,
     0x1.e0534439442b8p-919, 0.0, 0x1.d42ed74a4e17ap-568, 0.0, 0.0,
     0x1.272ae3a1bd71cp-837, 0.0, 0x1.547e1836c2dp-595, 0x1.488a7f40dbd6p-624,
     0x1.ee454b6a02068p-127, 0.0, 0x1.55a751adc70fcp-539, 0x1.5b59eaefc8125p-623, 0.0,
     0x1.c8ced33867e1fp-756, 0x1.6ea296f9881f1p-217, 0x1.278517c94bb2ep-846, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6aedae6027c83p-564, 0x1.1abb974e95eb7p-289, 0.0,
     0x1.a82b3843c270cp-906, 0.0, 0.0, 0.0, 0x1.38128abb872eep-89,
     0x1.15758fd7ef38bp-934, 0.0, 0x1.b51c0c232efd1p-42, 0.0, 0x1.0291086910ff2p-485,
     0x1.1a07e80c0d146p-111, 0.0, 0.0, 0x1.a6ded317ed33bp-646, 0.0, 0.0, 0.0,
     0x1.291c744627bbcp-199, 0.0, 0.0, 0x1.48f018226b9bdp-313, 0x1.77ce6609b5945p-316,
     0x1.940a1f3bcb0e1p-477, 0x1.ddb91de496b8ep-555, 0x1.4fa75e37be548p-528,
     0x1.f5e2c2ecae082p-365, 0x1.84f6cf5852d7ap-241, 0.0, 0x1.4a41ec9409f08p-950,
     0x1.c4090db14e4cap-51, 0x1.fab9ce9159d3p-304, 0.0, 0x1.a66a971a5e1a2p-410, 0.0,
     0.0, 0x1.f538056cc0326p-958, 0.0, 0x1.3365730a1111ep-798, 0x1.5b84d992620c2p-89,
     0x1.9c280861ee85bp-380, 0x1.a4cc1ff311abep-150, 0x1.08c5c6800dc41p-661,
     0x1.c76a5a4f8d2f1p-638, 0x1.b4557cfb5c70ap-748, 0x1.449cbb73c1acfp-293, 0.0,
     0x1.82ec84ae37fc4p-965, 0x1.af9b1a415dba1p-766, 0x1.af4e1766977e1p-56, 0.0,
     0x1.503a46eadfbe8p-894, 0.0, 0x1.6d2c6119555b5p-122, 0x1.e4c7086abae9ap-390, 0.0,
     0.0, 0x1.8263d47b14303p-939, 0x1.11b9ffee81f6bp-564, 0.0, 0.0, 0.0,
     0x1.17e3421362b9ap-846, 0.0, 0x1.1a842a334713p-815, 0x1.02c999df91c07p-556,
     0x1.af4d41be754c2p-186, 0.0, 0.0, 0.0, 0x1.97a7dc0318e66p-219, 0.0,
     0x1.147f7908aebdap-494, 0x1.e0b12d8d8f1afp-277, 0x1.8065eb794b02ap-1016, 0.0,
     0x1.347fa446246abp-425, 0.0, 0x1.05395c6b4d434p-770, 0.0, 0.0,
     0x1.b4d14f0e40e67p-420, 0x1.1d74927809e04p-299, 0.0, 0x1.ad4005002f5cap-498, 0.0,
     0x1.0501389073919p-89, 0x1.0208e2cd398b6p-151, 0.0, 0x1.4ed79ee642a6p-208, 0.0,
     0x1.a0d3a58fad735p-542, 0.0, 0x1.3c681e477cadep-705, 0.0, 0x1.ebb4484edb841p-895,
     0.0, 0x1.ecd54aeab955p-337, 0.0, 0x1.f2517782f7eb3p-414, 0.0, 0.0, 0.0,
     0x1.abd6ed8b3ef52p-264, 0.0, 0x1.4910b6bc540d3p-430, 0x1.82935298208e7p-44, 0.0,
     0.0, 0x1.9d7ee8f1aaec5p-593, 0x1.2c31405a02412p-150, 0.0,
     0x1.2e17477d8c107p-1001, 0x1.c0792249ca4d2p-807, 0x1.3e10d2cf506abp-298, 0.0,
     0x1.4aef29971d69fp-843, 0.0, 0x1.3b672bd8b3c4dp-409, 0.0, 0.0,
     0x1.7cb3f295ec393p-697, 0x1.fc65505dd3d55p-748, 0x1.4a687ff19ccd3p-358,
     0x1.bfe9428fa2eb3p-48, 0.0, 0.0, 0.0, 0x1.2408fd1f6b2ccp-54, 0.0,
     0x1.f460166e569bap-104, 0x1.5f41fc4c3b09ep-146, 0.0, 0x1.fecb15392f48dp-4, 0.0,
     0x1.44819bafa82c6p-602, 0x1.f396dfad8bd16p-729, 0x1.df7315e0943a7p-162,
     0x1.3f03555282073p-282, 0x1.aed6ed2ac2267p-856, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51fbcc1fdba97p-611, 0.0, 0x1.b99878fde3bb7p-220, 0.0, 0.0, 0.0,
     0x1.9c0c50c0026cap-819, 0x1.fc3835578099p-597, 0.0, 0x1.8fdde1465c28fp-826,
     0x1.f2e6183349f33p-674, 0.0, 0.0, 0x1.f1a94811a0d9ap-108, 0x1.f17dbf671951dp-760,
     0x1.0f8e5bd639cb6p-595, 0.0, 0x1.e92e38a51fffdp-945, 0.0, 0x1.c90520bb2dc3fp-247,
     0.0, 0.0, 0x1.95dc208d46b48p-166, 0x1.7c7c64992fdf4p-222, 0.0,
     0x1.4b2f2904f0fecp-380, 0.0, 0.0, 0.0, 0x1.d51727c98ee4ap-84, 0.0, 0.0, 0.0,
     0x1.cdd513770e248p-567, 0x1.318ee3b7a2c0cp-223, 0.0, 0x1.79ae7a04281cep-80,
     0x1.172c79e8a63cep-358, 0x1.a8fc24075460bp-649, 0.0, 0x1.537bc363654ccp-1020,
     0.0, 0x1.16341a22402b2p-371, 0.0, 0.0, 0.0, 0x1.5e4c72f5cf3bbp-488,
     0x1.f73bca258a7d7p-315, 0x1.4db7e5b64a22bp-431, 0.0, 0x1.adfd18bcb5b27p-748,
     0x1.6d5a3adbd72dep-669, 0.0, 0x1.ac27b58a38c5fp-56, 0.0, 0.0,
     0x1.2dc5721cf36abp-149, 0x1.2cc77ab93147dp-476, 0.0, 0x1.9bd352ec95ab8p-53,
     0x1.1fe74d263fd6p-658, 0x1.a05fef760e0d2p-468, 0.0, 0x1.bc2065f44635fp-877, 0.0,
     0.0, 0x1.2d926dea0fe44p-591, 0x1.7d1bf5b4b59e6p-920, 0x1.9592062b8bd79p-6, 0.0,
     0x1.1256242556f37p-953, 0x1.86da13846bb27p-333, 0.0, 0x1.16a840f7f866cp-853, 0.0,
     0x1.387e76a6d4ebbp-692, 0x1.5f7db868a9cdcp-957, 0.0, 0x1.5f423544c655ep-703, 0.0,
     0.0, 0x1.cd6dc8a36e5eep-1000, 0x1.678eb708b4556p-409, 0x1.3eb4bc939f65fp-562,
     0.0, 0.0, 0x1.38dc2259d2845p-904, 0x1.e2a7f496681e8p-416, 0.0,
     0x1.f24220f00fa95p-68, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23dec24cf777fp-554, 0x1.b3f76f5fcd36ap-592, 0x1.045c2f1861c93p-16,
     0x1.633c3d1c1818ap-418, 0.0, 0.0, 0.0, 0.0, 0x1.82203ce43363bp-5, 0.0,
     0x1.d54a285bca71cp-90, 0x1.d0a6e7f4f38b4p-137, 0.0, 0x1.b2862d13d6249p-553, 0.0,
     0.0, 0x1.a2a6276a688f9p-446, 0x1.e0977bca2f335p-478, 0.0, 0x1.9f3529d490ab4p-433,
     0x1.76842e740280fp-981, 0.0, 0.0, 0x1.773a1d9756a16p-291, 0x1.e21ce04660b72p-708,
     0x1.78a7138ef5e75p-824, 0.0, 0x1.752be44df838fp-148, 0.0, 0.0, 0.0,
     0x1.232a6b222ce44p-513, 0x1.f4592cdfca15cp-237
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
            tmp1 = Sleef_tanhd1_u10purecfma(tmp0);
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
    printf("Sleef_tanhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
