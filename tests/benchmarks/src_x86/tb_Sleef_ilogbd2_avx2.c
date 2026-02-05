/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ilogbd2_avx2128.c --function Sleef_ilogbd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --vector-size 2 \
 *     --function-input-vector-size 2 --precision int32 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0.0, 0x1.f7478a4d05126p-332, 0x1.f464f550e5c1cp-952,
     0x1.f757df35d8f05p-993, 0x1.beff98308e2c8p-405, 0x1.9eeb82b46155ep-481,
     0x1.27053f54cf867p-2, 0.0, 0.0, 0x1.1f72719db579dp-607, 0x1.162fb26eb7e43p-774,
     0.0, 0x1.4dd02603f55f6p-1003, 0.0, 0.0, 0x1.840aeac5a8802p-203, 0.0,
     0x1.e6dcf6c83727fp-471, 0x1.5b26b28e99f53p-473, 0.0, 0.0, 0.0,
     0x1.27922b38e57b5p-125, 0x1.a3adb8cd01941p-903, 0x1.c1ebdae8c50bdp-915,
     0x1.ff7f95e53de56p-446, 0.0, 0x1.1ffd9ea20a74cp-598, 0x1.134275619e651p-195,
     0x1.cb7180a4a8365p-336, 0.0, 0.0, 0.0, 0x1.ea1624fa57311p-309, 0.0, 0.0,
     0x1.1a2d5fdd7b7dp-655, 0x1.646a9db3097cfp-348, 0x1.9d429443995ddp-792, 0.0, 0.0,
     0.0, 0x1.79ffb0bb0d7d9p-335, 0.0, 0.0, 0x1.3718dbff13c4cp-19, 0.0,
     0x1.6cc644f5771ccp-683, 0.0, 0x1.58bc5e0740027p-82, 0x1.750da1757be64p-766, 0.0,
     0x1.8b5f6c3c9f984p-747, 0.0, 0x1.e5761e6a54c66p-387, 0x1.2f13b6d9b6445p-874,
     0x1.13ddc84b2162cp-152, 0.0, 0x1.c4f5fdbe043adp-572, 0x1.fa72c81f2db93p-712,
     0x1.6242dcf83dff9p-1003, 0.0, 0.0, 0x1.90f6281c948cap-350, 0.0, 0.0,
     0x1.52a44c0789fddp-564, 0x1.cf30ac627d672p-697, 0x1.631730761c88bp-981,
     0x1.d3b4ef2b29d09p-43, 0.0, 0.0, 0.0, 0.0, 0x1.cc0f9d23f3821p-409, 0.0,
     0x1.786777989c8d8p-373, 0x1.89f69aecd4d77p-710, 0x1.874be5e8caccep-593, 0.0, 0.0,
     0x1.5fb977b4d97ddp-733, 0x1.542c7dc661495p-282, 0x1.87655ad86215fp-411,
     0x1.ce40bd31227efp-37, 0x1.2b3c7b550b788p-242, 0.0, 0x1.12c71b971da52p-268,
     0x1.6d532e7d64ec5p-944, 0.0, 0.0, 0x1.2dfc00f63423p-935, 0.0, 0.0,
     0x1.c4efe26b7822cp-525, 0.0, 0x1.045fc7d102e53p-724, 0x1.544dd357fb174p-975,
     0x1.19d0af0196b64p-952, 0x1.30789dbfc9a74p-498, 0x1.247ae87888b82p-122,
     0x1.77cbf81cd62ccp-666, 0.0, 0.0, 0x1.1c79c44327d0ap-25, 0.0,
     0x1.a96d830b9452fp-853, 0.0, 0x1.d8e7844def54cp-281, 0.0, 0x1.996726561416bp-860,
     0.0, 0.0, 0x1.628ee6caf6bc2p-76, 0.0, 0.0, 0x1.ff5a51ec3e07p-221, 0.0,
     0x1.e2c71fa00039dp-862, 0x1.4f1706eb195b5p-645, 0.0, 0.0, 0x1.32d0fc8ba0688p-490,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f43a4e0d09ccp-540, 0x1.ca9bb6b64137fp-52,
     0x1.b86131abd7baep-719, 0.0, 0x1.18abcb93b9ba8p-385, 0x1.555cf651aa991p-970, 0.0,
     0.0, 0.0, 0x1.89856cde57609p-27, 0x1.baddd0d956771p-689, 0.0, 0.0,
     0x1.e4f7a33b73312p-1022, 0x1.d796399b4c624p-785, 0.0, 0x1.4cb8e9b3fbc7p-750, 0.0,
     0.0, 0x1.341ce03c23b33p-925, 0.0, 0x1.75eb447b94524p-821, 0x1.d8617bc1d5aep-867,
     0.0, 0x1.144b8bc162b82p-125, 0.0, 0.0, 0.0, 0.0, 0x1.e6c0e0e326f6ap-760,
     0x1.cdbbf80873a6cp-194, 0x1.3fad10380b022p-129, 0x1.5cb463cfb99eap-945, 0.0, 0.0,
     0x1.13159c525f0cbp-12, 0.0, 0x1.b5f14e19182cfp-589, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d60e2c043ccf6p-711, 0.0, 0.0, 0x1.ce6406f34adaap-100, 0x1.32d6442ce7a9ep-591,
     0.0, 0.0, 0.0, 0x1.442640ab4a1a2p-329, 0x1.508fa684b0307p-229,
     0x1.a343d24efc4ddp-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.831474806c3e2p-343, 0.0,
     0.0, 0x1.113d2518f9125p-317, 0.0, 0.0, 0x1.704a3d2a3983ap-331,
     0x1.e46104077ff17p-241, 0.0, 0.0, 0x1.b0e7dc23df251p-789, 0.0,
     0x1.f69a85f9e39bcp-272, 0x1.d9fc0c0ad44e9p-800, 0.0, 0x1.3b9495c3143e5p-990, 0.0,
     0.0, 0.0, 0x1.0cc1dcdec6f52p-512, 0x1.216561db9b587p-1019, 0.0,
     0x1.0a096aec8db6ap-60, 0.0, 0x1.d050fd540c8cap-194, 0x1.cf3d9152c6a33p-786, 0.0,
     0x1.de6fdb23cf4bp-241, 0x1.66ab812458c63p-396, 0.0, 0.0, 0.0,
     0x1.91d029ee357a6p-691, 0.0, 0x1.da6a070b1771ep-596, 0.0, 0x1.8a94dac5a8a06p-200,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c68c7cb23ce7fp-103, 0x1.79664e26fc59ep-161,
     0x1.21b8e2ad2fae4p-906, 0x1.debb06f68a471p-288, 0.0, 0.0, 0x1.d893adc1341e3p-729,
     0x1.c7c97638e9332p-1015, 0x1.00b7651865b44p-377, 0x1.bb6696dea8ddep-1011, 0.0,
     0.0, 0.0, 0.0, 0x1.3b80fd9e813f8p-183, 0x1.2759e537424c8p-136, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.68ec54415366ap-792, 0x1.e9d3ffb9fdb22p-937, 0.0,
     0x1.a45c31373a4f9p-154, 0x1.eba08f7012f59p-921, 0x1.24daef5ec7f91p-712, 0.0, 0.0,
     0x1.096c39c54ccfcp-793, 0x1.84b319b315029p-225, 0.0, 0x1.227efc039074cp-921, 0.0,
     0x1.cdc7f3c4bdec5p-578, 0x1.9d48a18bcbb83p-551, 0x1.054a5d0fed497p-864, 0.0,
     0x1.d738b792a8014p-488, 0x1.6665d26691b77p-378, 0.0, 0x1.0dcfa069c04e9p-198,
     0x1.3f99acfebb3b8p-342, 0x1.9c374ad5be62bp-635, 0x1.fd4bf5f8a5148p-862,
     0x1.74e583bed880bp-983, 0.0, 0.0, 0x1.80d48cac0fc61p-2, 0.0, 0.0, 0.0, 0.0,
     0x1.a9ef6f181c228p-67, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2ba56af4ad66p-821,
     0x1.7960a7620d495p-635, 0.0, 0x1.fe1f6e23008ebp-102, 0.0, 0x1.99b803aa04194p-963,
     0.0, 0x1.98b2988ef58aap-192, 0x1.61947e812d07fp-149, 0x1.c7504eb69d82fp-413,
     0x1.9997ebefeee0ep-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06c2b51976eaep-37,
     0x1.92041d08070a7p-623, 0x1.bffa3f88d21bfp-273, 0x1.46aae7e258516p-984,
     0x1.fc7e8e2e25d34p-828, 0x1.a27b701c25a51p-450, 0x1.5d887d8e07ecfp-346, 0.0, 0.0,
     0.0, 0x1.7833ef56f2276p-429, 0x1.71c757bfe67p-111, 0.0, 0x1.58fe73479921p-606,
     0.0, 0.0, 0.0, 0x1.e101b6b5264d6p-207, 0.0, 0x1.f5ae4a0a84a39p-861, 0.0,
     0x1.37c58705fdbc2p-671, 0x1.d975bb05208dep-212, 0x1.cb14ff6d37255p-301,
     0x1.523e1f42fcd88p-832, 0.0, 0x1.38151886e794bp-816, 0x1.af92f3a6c4af5p-472, 0.0,
     0x1.b0fd0f19647bap-514, 0.0, 0.0, 0x1.b77f8d5af6731p-161, 0.0,
     0x1.08e77cdfc1f4cp-156, 0x1.84d15a63bbe2ap-864, 0x1.20af93c33a646p-270,
     0x1.cf5978bc766fp-636, 0.0, 0x1.dfd6ab3df332p-594, 0x1.7b86ad5eae4e5p-623,
     0x1.747de676da903p-360, 0.0, 0.0, 0x1.3ac1db8d4388fp-166, 0x1.e0d6246027735p-406,
     0.0, 0x1.0fb71f308644fp-85, 0x1.62058ab7921edp-937, 0x1.3f30fc601b98ap-77, 0.0,
     0.0, 0x1.a76d0cbcd5c48p-422, 0x1.d76f7232f20e1p-603, 0x1.be844919a0c2cp-561,
     0x1.cf9fe7261e2ap-785, 0.0, 0x1.d20a73d7c7491p-470, 0.0, 0x1.35927dea981ep-957,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0daa4b44eb985p-883, 0x1.6158f59b0064ep-205, 0.0,
     0x1.2daefa971497ap-738, 0.0, 0.0, 0x1.3aed648993614p-279, 0x1.26034b6de0e13p-726,
     0.0, 0.0, 0.0, 0x1.4a0ec9969f62dp-498, 0.0, 0x1.597346a8f1ecbp-317,
     0x1.c71aefad74d6ap-231, 0.0, 0.0, 0.0, 0.0, 0x1.c96dfbc1b0f92p-743,
     0x1.4092492c0f4f3p-821, 0x1.bd3899aac9c2ep-247, 0.0, 0x1.0c787675ae71p-402,
     0x1.06522823053eap-612, 0x1.a9d8260d5aae8p-476, 0.0, 0x1.8c9c97c0e58e8p-225,
     0x1.c337fd8a8c501p-105, 0x1.fff812a2c3917p-897, 0x1.c6ac4a9bb3ed6p-442, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.341ffe5bebe46p-982, 0.0, 0x1.10eb0d917d2b7p-702,
     0x1.678b1fff2e732p-913, 0x1.60d6e261ad5ap-211, 0.0, 0.0, 0x1.7196ba17c6ff9p-187,
     0.0, 0.0, 0x1.1aa391ac387fdp-14, 0x1.5d32ac186a321p-719, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a97a791bcf61ap-848, 0.0, 0.0, 0.0, 0x1.db842ddb5a6c9p-181,
     0x1.803077c8f5139p-59, 0.0, 0.0, 0x1.e320ab5e076d6p-825, 0.0, 0.0,
     0x1.78f0911e11abp-7, 0x1.d6941d687afc4p-747, 0.0, 0.0, 0.0, 0.0,
     0x1.43a419c548f8p-461, 0x1.72749c128bd11p-768, 0.0, 0.0, 0.0,
     0x1.7dae7242816f9p-973, 0x1.7e4630147df38p-449, 0.0, 0.0, 0x1.29aba5eaf252cp-666,
     0.0, 0.0, 0.0, 0x1.409da06730753p-684, 0.0, 0.0, 0.0, 0x1.837d3aa003584p-139,
     0x1.1cc0af77405bdp-299, 0.0, 0x1.d7e2f76d54a85p-505, 0x1.dee36753e79b6p-506,
     0x1.c4e6eb5628347p-297, 0x1.40457cc09069cp-282, 0x1.3e6142d6910bcp-809, 0.0,
     0x1.93cca2098c177p-970, 0x1.75bf4385a17cap-4, 0x1.d34cafb8f7dabp-932,
     0x1.6bc023777e332p-491, 0.0, 0x1.02fbb8eb502c2p-279, 0.0, 0x1.b3f4c22083315p-652,
     0.0, 0x1.6728fac6eb956p-104, 0.0, 0x1.991c948e08b9dp-956, 0x1.f048c503c7061p-175,
     0.0, 0.0, 0x1.3caf90eb0760dp-956, 0x1.923a0fc23d81ep-837, 0.0, 0.0,
     0x1.1e3a858f5be2p-227, 0.0, 0x1.fe3cf9c37df7bp-975, 0x1.193304763dc5cp-358,
     0x1.20ae0fd0941cp-295, 0.0, 0.0, 0x1.af7df771d38bfp-913, 0x1.889e11d7bfa1dp-996,
     0x1.2751041dd414ep-441, 0.0, 0.0, 0.0, 0.0, 0x1.56288c58eef87p-858,
     0x1.6e4fb7b2a673ep-507, 0.0, 0x1.9d210373a2cfbp-160, 0x1.f1b9af8784caap-579, 0.0,
     0x1.9edb2f10f214ep-883, 0x1.c4a59f60c3941p-806, 0x1.e10c3036d4282p-819,
     0x1.8c1ca250bd53p-143, 0.0, 0x1.f13bdfef3513fp-807, 0.0, 0.0,
     0x1.b87de10d4e534p-743, 0.0, 0x1.14b323f4d8272p-364, 0.0, 0.0, 0.0,
     0x1.341c1d5e2652dp-1009, 0.0, 0.0, 0x1.7afc55f84630ep-134,
     0x1.6176e4ddb1e26p-691, 0x1.b0543e119ed38p-404, 0.0, 0x1.e63926fb5a873p-708, 0.0,
     0x1.6e6afa925207p-559, 0x1.710316dd36eedp-345, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02699c19da50cp-884, 0.0, 0.0, 0x1.abf81cefa2403p-884, 0.0,
     0x1.d3d2bf293bc9p-143, 0.0, 0x1.ae36f5b8a350ep-353, 0x1.9ba0ab95c074ap-511, 0.0,
     0x1.1eb8206f700c5p-326, 0.0, 0x1.2dc1d512cae4fp-170, 0.0, 0x1.77ffbc1b87fc4p-923,
     0x1.f0dd993d648ccp-931, 0.0, 0x1.6e0d234cdcedep-272, 0.0, 0.0,
     0x1.7c2bd5aeeb11bp-237, 0.0, 0.0, 0.0, 0.0, 0x1.87f1bfb672376p-467,
     0x1.65a93b3908904p-574, 0.0, 0.0, 0.0, 0x1.aeff8c06db87fp-282, 0.0,
     0x1.924a37061c718p-687, 0.0, 0x1.e4ca922f31005p-362, 0x1.eb083d3c6d41ep-108, 0.0,
     0x1.7a8914a4c9518p-678, 0.0, 0x1.fa659ac308ac4p-882, 0.0, 0x1.54da99759a3a9p-662,
     0x1.35b686b604e6p-102, 0.0, 0x1.46cfc0f59c843p-896, 0x1.8a3c67e19482p-783, 0.0,
     0x1.386c54e07bf5bp-598, 0.0, 0.0, 0x1.81bee8b18b6cap-933, 0.0,
     0x1.a09c9fd05611p-965, 0.0, 0.0, 0x1.5d9d8d277b54ap-429, 0x1.c55cd34146d01p-914,
     0.0, 0x1.06f24b2fbc6a3p-941, 0x1.4a4d5da770feep-528, 0x1.7b04acc3ddc36p-837,
     0x1.c75193042eb1p-958, 0.0, 0.0, 0.0, 0x1.e69c58d8d08c8p-876, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.65946338eac97p-130, 0.0, 0.0, 0.0,
     0x1.4a960e96a42c4p-652, 0x1.a9ecf1767ac64p-821, 0.0, 0x1.fc42b8f20a119p-420,
     0x1.850cdb9ba68ap-530, 0x1.e3d67a77672b2p-530, 0x1.ef834c652ec2p-557, 0.0, 0.0,
     0x1.0d488bc457045p-870, 0.0, 0x1.cfabcd5a4ad6cp-210, 0x1.647c6bfc3691ap-147,
     0x1.57d3572a81022p-770, 0x1.13636137283ecp-876, 0.0, 0x1.cfab3a901807ep-8,
     0x1.a1ae32e429956p-700, 0.0, 0x1.2745a23bfc88ep-778, 0.0, 0x1.ba1b85298a1d1p-146,
     0x1.0316c9438c304p-462, 0x1.082a01b289903p-61, 0.0, 0x1.1e9599c524ea4p-811,
     0x1.8a1abd5bd3771p-59, 0.0, 0.0, 0x1.236e4d57e518dp-72, 0.0, 0.0, 0.0,
     0x1.254a8ed477639p-948, 0x1.679d613853245p-358, 0x1.8ef79a7071f3bp-386, 0.0,
     0x1.e52b830d3e26bp-175, 0.0, 0x1.50f8b714aa4a3p-870, 0.0, 0x1.4638d70067df9p-196,
     0.0, 0x1.f81ebefa85472p-517, 0x1.d3a1182e9f392p-1013, 0.0, 0.0,
     0x1.00058fd69d4cbp-726, 0x1.b6cd88f0663cep-54, 0.0, 0x1.5776f2ecdecd6p-823,
     0x1.ff12ebe1feb2ap-1001, 0x1.4396f130f3395p-596, 0.0, 0.0,
     0x1.de2c1c72a7b9bp-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c63d19e35244bp-530, 0.0,
     0.0, 0.0, 0.0, 0x1.3bad15dd91167p-759, 0x1.7b1563c8d2f8cp-828,
     0x1.aa60380d0c2b5p-908, 0.0, 0.0, 0.0, 0x1.cf50c9a156222p-221, 0.0, 0.0,
     0x1.24f6b1b848c0ap-63, 0x1.137ac894e315bp-709, 0x1.45d0edaf2b586p-670,
     0x1.8ded27825e88ep-671, 0.0, 0.0, 0.0, 0.0, 0x1.c83946b38f0bcp-402,
     0x1.052ea48ce833fp-522, 0.0, 0.0, 0.0, 0x1.94ca58108d6ffp-1012,
     0x1.1964b44dd78c8p-369, 0x1.1b3534f0568b6p-258, 0.0, 0.0, 0.0,
     0x1.22d7c1b2415fbp-139, 0.0, 0.0, 0x1.0f8122f3398b8p-873, 0x1.c67ad50d430e1p-377,
     0.0, 0.0, 0.0, 0.0, 0x1.f5b14fad5f025p-773, 0.0, 0.0, 0.0,
     0x1.098431d86a5d2p-790, 0.0, 0x1.5ae0c6121efb9p-543, 0x1.adab13bebcb45p-499,
     0x1.dbcb7ddefaa25p-315, 0x1.9d961483b4727p-480, 0.0, 0x1.5d47611f0e546p-397, 0.0,
     0x1.473947d6c1d51p-512, 0x1.9db5b04927401p-131, 0.0, 0x1.74e25d1e47661p-840, 0.0,
     0x1.5f681725edcb4p-727, 0x1.94ff0f38b0b13p-771, 0.0, 0.0, 0x1.eb31c17ffcb54p-651,
     0x1p0, 0.0, 0.0, 0.0, 0x1.a8c3fc54abedep-73, 0x1.215ec4a418f5fp-925,
     0x1.f5fa4b0e7f9eap-560, 0.0, 0x1.1a43f3dcf8399p-249, 0x1.61624c7e6bcd6p-193, 0.0,
     0x1.2603dcef4b266p-389, 0.0, 0x1.caf7cfe80978bp-848, 0.0, 0x1.23386ff062ab3p-333,
     0x1.51e73e114a4aep-427, 0x1.43387351a2f9fp-201, 0x1.91e6cbe48c373p-22, 0.0, 0.0,
     0.0, 0.0, 0x1.8b3133a2874c8p-469, 0x1.fe7a8e2a73d96p-562, 0.0, 0.0,
     0x1.daeed211d89c7p-9, 0.0, 0.0, 0x1.65fb53f0a4634p-298, 0.0,
     0x1.89be21c7e6058p-104, 0x1.0692dffe005afp-406, 0.0, 0x1.a9c2279e7182fp-512, 0.0,
     0.0, 0.0, 0x1.9c436f235a0b6p-275, 0x1.ca14f7462701cp-901, 0x1.752934985cec6p-174,
     0x1.73fdefd960c3ap-708, 0.0, 0.0, 0.0, 0.0, 0x1.4886575f65a4cp-36,
     0x1.592c713fbe453p-609, 0x1.36371a9c7dfd7p-105, 0.0, 0x1.4b6e955862a12p-363,
     0x1.38577f5414f47p-813, 0x1.cae6efb2daf79p-167, 0.0, 0x1.7e318605db0d4p-230,
     0x1.3e1da2f1fe542p-577, 0.0, 0.0, 0x1.160818db38c37p-220, 0x1.d0a2b3ddfea54p-184,
     0.0, 0x1.96e252b9a1c95p-627, 0x1.b6c6d51d357fbp-649, 0x1.5d4c11352d142p-273,
     0x1.29a2b2d92b81ap-654, 0.0, 0.0, 0.0, 0.0, 0x1.a781a6f702af4p-348, 0.0,
     0x1.0f9ab43dca531p-1014, 0.0, 0.0, 0x1.38a0726070bc3p-824,
     0x1.af8f8f2a80129p-889, 0x1.219de85f0d6ep-782, 0.0, 0x1.c8f4c061eff35p-784, 0.0,
     0x1.64304d33e6623p-251, 0.0, 0x1.9e8f43f609227p-291, 0.0, 0x1.3ff0359f04638p-224,
     0x1.fa45297e7b391p-479, 0x1.6441888e15af5p-570, 0.0, 0x1.b5675543d97edp-436, 0.0,
     0x1.34a7f6f5fa408p-135, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17d99a26d4f4cp-255, 0.0,
     0.0, 0x1.e66807daf1ca5p-383, 0x1.4a2e7bf0df9d7p-619, 0x1.1716cab4831fep-175,
     0x1.15209e8b8cc7dp-586, 0x1.6d5440e9275e7p-988, 0x1.aff61cbe3f257p-626, 0.0, 0.0,
     0.0, 0x1.80337732e00b2p-211, 0.0, 0.0, 0x1.0c88f0671f8cap-982, 0.0, 0.0, 0.0,
     0x1.7fc983a84c71cp-739, 0x1.bdde2ae24efb1p-867, 0.0, 0.0, 0.0,
     0x1.d0e3efda0b2d5p-358, 0.0, 0x1.7dc50e0ad2746p-248, 0x1.6004028def8eep-665, 0.0,
     0.0, 0x1.697b4f3265605p-787, 0x1.83e9e2fe2b126p-273, 0.0, 0x1.f7f315f212b01p-206,
     0.0, 0.0, 0.0, 0x1.e4849775621b3p-358, 0x1.aa8e2af08fb64p-849, 0.0,
     0x1.970413d7e0632p-903, 0x1.f453d7b7a31b1p-664, 0x1.113e85a0ab6d4p-257, 0.0,
     0x1.6651c48ecd0fep-1015, 0.0, 0.0, 0.0, 0x1.eb242ad9df9acp-159, 0.0, 0.0,
     0x1.70f7c74d9505p-36, 0x1.8612243cf7a0bp-680, 0.0, 0.0, 0x1.8278051e75945p-364,
     0x1.834aa351e1e66p-302, 0.0, 0.0, 0.0, 0x1.73b71bcb364fep-646, 0.0,
     0x1.08d039123434ep-483, 0x1.9edd24a4b06dcp-125, 0x1.a9e55331bbcd9p-540,
     0x1.cb9591dc7cc6p-179, 0x1.75756c15dffe8p-56, 0.0, 0x1.baa1bbd1c23efp-748,
     0x1.c656278841717p-43, 0.0, 0x1.e6b2000c761e2p-861, 0.0, 0.0,
     0x1.4ca1a142e01d3p-939, 0x1.c70e41191ba8bp-889, 0x1.5176ea7bdf97fp-642, 0.0, 0.0,
     0x1.42a81038ed77cp-894, 0x1.81f49f889a74cp-507, 0.0, 0x1.b4b954f3ee906p-919, 0.0,
     0.0, 0x1.57bc87747049bp-201, 0x1.9a4dcce074a74p-279, 0x1.9b96a6a01ffecp-654, 0.0,
     0x1.e0e5be3a9d44fp-318, 0.0, 0.0, 0.0, 0.0, 0x1.2923ca1483473p-855, 0.0,
     0x1.39c2ff69b4b53p-781, 0x1.c71704d66d3c7p-681, 0x1.5b3d25c9f7f37p-303,
     0x1.33023cfc940e5p-813, 0.0, 0x1.02aeb654acab8p-732, 0.0, 0.0,
     0x1.7714ddac20981p-453, 0x1.d16f083cecdaap-814, 0x1.dcfdc1eb85133p-890, 0.0,
     0x1.6d6f6edbd22cfp-123, 0x1.d5839cf96b2fep-943, 0.0, 0.0, 0.0,
     0x1.5e6140aadbe7cp-751, 0.0, 0x1.e2114c0026d9p-637, 0.0, 0x1.cefef781dee4ap-180,
     0x1.9bbcbeb95f0b1p-880, 0.0, 0x1.7eae6933e32ddp-484, 0.0, 0x1.1f544dc215b97p-825,
     0x1.651d5852d5ed1p-923, 0x1.25240ef84effep-773, 0x1.7928049d54fc6p-933,
     0x1.bc44b83404b1dp-878, 0.0, 0.0, 0x1.4d82968c49155p-945, 0.0, 0.0, 0.0,
     0x1.7ebd7a8b302d3p-314, 0.0, 0x1.6173f4635b676p-157, 0.0, 0x1.6ee647e085ea3p-183,
     0x1.596369fa2593cp-102, 0x1.f100469426af5p-455, 0x1.98284d1cc300fp-871, 0.0, 0.0,
     0x1.3c4593edf98b3p-137, 0x1.bc500c3e0ba0fp-564, 0.0, 0.0, 0.0,
     0x1.a5a6d4c4160abp-615, 0x1.8fd7bb3b23219p-923, 0x1.77a334ef5ee2p-1013, 0.0,
     0x1.b717b9d5e27bp-544, 0x1.883a8f051899p-832, 0x1.181ca236dd481p-757, 0.0,
     0x1.a2705005567cdp-619, 0.0, 0.0, 0.0, 0x1.cd601a1a4212dp-522
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_ilogbd2_avx2128(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_ilogbd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ilogbd2_avx2128 bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
