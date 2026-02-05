/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpd1_purecfma.c --function \
 *     Sleef_frfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b91eea17a7p-913, 0.0, 0x1.45dc8697fcff7p-742, 0x1.c89d6c616254p-429,
     0x1.c515c75ef5badp-181, 0x1.cb44d9108e4b3p-479, 0x1.6e126a1db3d53p-514,
     0x1.56af30ae3ec87p-99, 0.0, 0x1.50c6cdac0576fp-623, 0x1.15736b70aeecep-837, 0.0,
     0x1.c9a04f365da0bp-758, 0.0, 0x1.fd45e0329993fp-16, 0x1.9a93f10c99cddp-996,
     0x1.23d9ce395997ep-411, 0.0, 0x1.ef135797e4bfdp-816, 0.0, 0x1.63bd2ae8c8d4ep-614,
     0.0, 0.0, 0.0, 0x1.db95bee75ccccp-383, 0x1.9df52e71925ecp-217,
     0x1.674c1ec197262p-668, 0x1.b76b1f575876ep-954, 0.0, 0.0, 0x1.3e835b6dec0b6p-168,
     0x1.a69904ccfee4cp-711, 0.0, 0x1.b4ccd03003a56p-913, 0x1.c3ba82835ba76p-532,
     0x1.72fd12fb5c2ccp-518, 0.0, 0.0, 0.0, 0x1.f95634ae7873ap-612, 0.0, 0.0,
     0x1.2275dcb51b03p-557, 0.0, 0x1.eb8822c2d8433p-505, 0x1.54dd414282e38p-461, 0.0,
     0x1.b0c0f32f9f789p-204, 0.0, 0.0, 0.0, 0.0, 0x1.7f8deec79b7ffp-537, 0.0, 0.0,
     0x1.f56dd8d73db03p-383, 0.0, 0x1.d8f26f55fe174p-274, 0x1.c8e9dc2553efdp-300, 0.0,
     0x1.d775524ca3586p-170, 0.0, 0x1.8165adcc130bap-375, 0.0, 0.0,
     0x1.4c483399bf114p-524, 0x1.a52498b1b3461p-336, 0x1.aaa26d9a15a7fp-761,
     0x1.f0292b39f717p-764, 0.0, 0x1.b1c62a6c65a35p-474, 0x1.3635bc58a1493p-380, 0.0,
     0.0, 0.0, 0x1.2ba2cf343c253p-65, 0.0, 0.0, 0x1.d735e4ae6fa46p-859,
     0x1.edf83e8cdf35cp-258, 0.0, 0x1.8765362b7656dp-159, 0x1.1838ee31eb1f8p-113,
     0x1.ae2c5475a7575p-705, 0x1.2d72fd112e8b9p-127, 0x1.de5ebae73e57cp-772,
     0x1.09074620e44b9p-288, 0x1.2c26575853074p-144, 0.0, 0.0, 0.0, 0.0,
     0x1.31298982de16bp-787, 0x1.00daefadf256cp-100, 0x1.80603823b23b4p-99,
     0x1.edd46e2c4f581p-258, 0x1.919e47ad8a825p-315, 0.0, 0.0, 0x1.6456692fb074dp-456,
     0x1.697d48bc7f00bp-938, 0.0, 0x1.d90bb139045fdp-96, 0.0, 0x1.667866daee42dp-1008,
     0.0, 0x1.b76f72dbf16a3p-891, 0x1.46e446d451d05p-316, 0.0, 0x1.e2d09055c392cp-3,
     0.0, 0.0, 0x1.e5836881e76ccp-260, 0.0, 0x1.a640bfa84e839p-466, 0.0, 0.0, 0.0,
     0.0, 0x1.a43f1cb0f4444p-665, 0x1.b67261c3d58b5p-166, 0.0, 0.0, 0.0,
     0x1.383edd7306ce1p-267, 0.0, 0.0, 0.0, 0x1.a9a7c91893c6ep-764,
     0x1.2718c3898df99p-872, 0x1.c8c3d9f62c379p-304, 0.0, 0x1.d9d8ed1bdf543p-171, 0.0,
     0x1.c48dd035f0391p-171, 0x1.5e397d1f1e08fp-57, 0x1.23dbad1de6bf7p-818,
     0x1.112019193a534p-664, 0.0, 0x1.2d658225d1319p-650, 0x1.3fa0f78003995p-860,
     0x1.1371e1dd5f90cp-140, 0.0, 0.0, 0.0, 0.0, 0x1.1b9bd3f535c4ep-187,
     0x1.15cf1e9de5027p-982, 0.0, 0.0, 0.0, 0x1.9537a57f228b4p-51, 0.0, 0.0, 0.0, 0.0,
     0x1.563f48f8aa661p-284, 0x1.868ba45628264p-308, 0x1.39adf14710dbbp-498, 0.0,
     0x1.becb848175659p-452, 0x1.5862ed7f7ff42p-764, 0x1.9bb713fa224e9p-416, 0.0, 0.0,
     0.0, 0x1.846ae2d3e83f7p-481, 0x1.e9032213bd92dp-278, 0.0, 0.0,
     0x1.06d6976f6802bp-476, 0x1.c849a6b567c78p-309, 0x1.b90d91c93cef7p-714, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8280603882389p-846, 0x1.668410ceab606p-497,
     0x1.51bf0786e9f02p-361, 0.0, 0.0, 0.0, 0x1.ba29698814663p-244,
     0x1.7cef10bcaa19bp-569, 0x1.7dd88e796ec3ap-160, 0.0, 0x1.aa2361581aa0fp-525,
     0x1.eb9672d10e3afp-750, 0x1.245b784295feep-44, 0x1.00794259f22dfp-24,
     0x1.4fc94f991566bp-900, 0.0, 0x1.c8f31f036475dp-154, 0.0, 0x1.18682e10770c7p-672,
     0.0, 0.0, 0.0, 0x1.291a9a4b4f255p-926, 0.0, 0x1.2dc5c4a3bc0b7p-143,
     0x1.7850de3772a8fp-352, 0x1.60d45c6079048p-641, 0x1.ce85689d4d2c5p-699,
     0x1.ab76cc00de604p-631, 0.0, 0.0, 0.0, 0x1.01bba722bc9a5p-158, 0.0, 0.0, 0.0,
     0x1.7d9347b568973p-683, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a915d71cae5ep-546,
     0x1.0f0975c825529p-51, 0.0, 0.0, 0x1.f6be730e602cap-442, 0.0, 0.0, 0.0, 0.0,
     0x1.2b88671cbd7efp-61, 0x1.6c344d25211fdp-363, 0x1.60d03cb9bdddcp-676,
     0x1.9c6f2c7eef29fp-562, 0x1.c2f202e2de576p-520, 0.0, 0.0, 0.0,
     0x1.5d8d0c1f539c2p-714, 0.0, 0x1.68360997e218fp-143, 0.0,
     0x1.d3f5900b8a065p-1016, 0.0, 0.0, 0.0, 0x1.613bc2df075eep-875,
     0x1.28af1188f73a3p-894, 0x1.187d6cea0dbd3p-655, 0x1.e364b92575f58p-18,
     0x1.349150ae3934cp-659, 0.0, 0.0, 0.0, 0.0, 0x1.7a325633f9847p-271, 0.0,
     0x1.75e10be1bfc7bp-253, 0.0, 0x1.84d49f6a1805p-983, 0.0, 0.0, 0.0, 0.0,
     0x1.08f710fd9a395p-782, 0.0, 0.0, 0.0, 0x1.d199ed6fab9fap-382,
     0x1.140e4df59a148p-169, 0.0, 0.0, 0x1.8e2c02c1d7e9fp-701, 0x1.2094cb3bc5e6ap-202,
     0.0, 0.0, 0x1.36253f675b21bp-209, 0.0, 0x1.320f79a9f641p-646, 0.0,
     0x1.cf06ed2587c63p-622, 0.0, 0x1.120b0241e3c52p-418, 0.0, 0.0,
     0x1.166c316d19374p-643, 0x1.519984e0135c4p-845, 0.0, 0.0, 0x1.2a41174b6b29fp-131,
     0x1.7c098f3730954p-422, 0x1.303786071752cp-1009, 0x1.e12d3005adb58p-468, 0.0,
     0.0, 0.0, 0x1.484e0116a2a0ap-362, 0.0, 0x1.e3148e4d8de66p-823, 0.0,
     0x1.1c4b14c379ad1p-577, 0x1.d7b5391c5f6b2p-536, 0x1.af5afe4f65559p-237, 0.0,
     0x1.a6243e5a40f5ep-751, 0x1.52618e9cd6768p-584, 0.0, 0x1.607f2b699536p-389, 0.0,
     0.0, 0.0, 0x1.82b41c7e6390bp-426, 0x1.37e4688665b6cp-807, 0x1.c19564b15ac45p-349,
     0x1.6e3dc8c49dfbfp-342, 0x1.f1e824cc3dde9p-924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2ef73e275d977p-428, 0.0, 0x1.b264c1abe2319p-126, 0x1.5debbce6ee849p-532,
     0x1.4d9fc5401f92fp-967, 0.0, 0.0, 0.0, 0.0, 0x1.544b09b5e70acp-903,
     0x1.9c241c3ad411ap-690, 0.0, 0x1.435d40b7b0c1cp-687, 0.0, 0x1.ae80a9b7eddf5p-991,
     0.0, 0.0, 0x1.352714fea88ddp-547, 0.0, 0.0, 0x1.bad042fe691aap-849,
     0x1.aa8452d48b448p-320, 0x1.260d95e677386p-192, 0x1.c81857969bf8cp-789, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f313746e274edp-887,
     0x1.f14713258e8f4p-178, 0x1.da66a3618033bp-521, 0x1.f67543051865ap-501, 0.0,
     0x1.df339602d514dp-163, 0x1.01f8325d775cp-138, 0.0, 0x1.ef95e4cdb2973p-49,
     0x1.a7ca107570ebcp-346, 0.0, 0x1.7b4ad0d146904p-65, 0.0, 0x1.6d83cae777922p-487,
     0x1.ef585db47d28p-1000, 0.0, 0x1.8fdd7d81083efp-231, 0x1.2a6b1c434d88ep-779, 0.0,
     0x1.b77566dec52bdp-136, 0.0, 0.0, 0.0, 0x1.a741137fae5b6p-188,
     0x1.5b9b1baf0c7a8p-725, 0.0, 0.0, 0x1.5fc3954de5c82p-553, 0.0,
     0x1.86f3fd7a2200ap-387, 0x1.9477e58eba7fcp-282, 0x1.4bfdd1442ad22p-390,
     0x1.4945d7f2e530ep-446, 0x1.e9d51b718b42dp-386, 0.0, 0x1.e698896be1a3bp-117,
     0x1.cd2b969a39bcbp-454, 0x1.659dbf194630bp-621, 0.0, 0x1.a4af4aaf6637cp-319,
     0x1.4b67fde2e37bep-635, 0.0, 0x1.ef7c4de538c0dp-977, 0.0, 0x1.d8dfde2252b5ep-617,
     0x1.7afbde993b0e8p-564, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af4598997820cp-529, 0x1.2229448396cd9p-200, 0x1.0ba12ccb0151cp-508, 0.0, 0.0,
     0.0, 0x1.3bd8eebfb0564p-171, 0.0, 0x1.09d4246022d74p-729, 0.0, 0.0, 0.0,
     0x1.874558aff2b67p-110, 0.0, 0.0, 0.0, 0x1.e276ab99c031p-198,
     0x1.8d4a4f2f31122p-38, 0.0, 0.0, 0x1.ae1b57883e9d7p-758, 0.0, 0.0,
     0x1.5d5b69b3c69d4p-334, 0.0, 0.0, 0x1.1fdaae58008f9p-584, 0x1.94e07a03cb542p-402,
     0x1.3b7261b72c813p-279, 0.0, 0.0, 0x1.74fcf63c8f8f5p-995, 0.0,
     0x1.fbee95153741ep-848, 0x1.59148c84eaa91p-337, 0.0, 0x1.9d129423290e1p-13, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.76db6260eb06ap-592, 0.0, 0x1.8db9e481d6d27p-51, 0.0,
     0x1.e45c44cfaf7bap-748, 0x1.2428eae731373p-668, 0.0, 0.0, 0x1.426ec1d53364p-523,
     0.0, 0.0, 0.0, 0x1.c19d894a06195p-772, 0x1.829b88786104bp-145,
     0x1.a0cf56eb68fcp-690, 0.0, 0x1.bf0e7da0ccc53p-132, 0.0, 0.0, 0.0,
     0x1.5dcb9ec103633p-1005, 0x1.eb0189bdf73d4p-131, 0x1.9fb87c10607dap-178, 0.0,
     0x1.65beaa7e90718p-821, 0x1.e95ec8c7ab67cp-64, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c4cfa98691c9p-231, 0x1.ee6a0514e6594p-136, 0x1.473d319ab9cd3p-747,
     0x1.c42a4b5c209bdp-439, 0x1.c41446aee5115p-758, 0x1.3afe0fd9b053bp-99, 0.0,
     0x1.fb96a9ea81e9bp-198, 0x1.cf6735c6f43e7p-535, 0.0, 0.0, 0.0,
     0x1.9e0edfdf768ebp-36, 0.0, 0.0, 0x1.f7d4cb8e6ecb9p-297, 0.0, 0.0,
     0x1.83d2fce923ed4p-819, 0.0, 0x1.5d99b24e1ebfdp-608, 0x1.81051120ab70bp-565,
     0x1.80ce21f65880bp-632, 0x1.f970fac3ebaa5p-181, 0.0, 0x1.4a8385fc11137p-42,
     0x1.62a52dd06fcaap-825, 0.0, 0x1.ee7b8cc59cd85p-612, 0x1.44fe78154c9a6p-239, 0.0,
     0.0, 0x1.d832f5ee29bcdp-902, 0.0, 0.0, 0x1.af615c03c46d4p-312, 0.0,
     0x1.20b82fddcaf11p-414, 0.0, 0.0, 0.0, 0.0, 0x1.cfc0829969c13p-16,
     0x1.6091fbb897231p-726, 0x1.bcdde93deb472p-499, 0x1.017a078e96dabp-10,
     0x1.3a73779722bc8p-568, 0x1.0c9fdcf59815fp-281, 0.0, 0.0, 0.0, 0.0,
     0x1.60ec39180f4f3p-890, 0x1.85d1ef21aad0cp-24, 0x1.1ba8730908f6ep-755,
     0x1.ae22154031a0dp-690, 0x1.31a1983fdd28cp-211, 0.0, 0.0, 0x1.b9bfd3be708f6p-803,
     0x1.55a43b178c1e4p-416, 0.0, 0x1.1d432a67567dep-984, 0.0, 0.0, 0.0,
     0x1.94ff47458e203p-888, 0x1.c627ae992b223p-508, 0x1.f333557145518p-84, 0.0, 0.0,
     0.0, 0.0, 0x1.78839f846521fp-125, 0.0, 0.0, 0.0, 0.0, 0x1.134cec09efb03p-864,
     0x1.f814f3359012fp-895, 0.0, 0x1.8dccf50f4067ap-829, 0x1.fa4a9a547d18p-398, 0.0,
     0x1.0c7dd2d36f15dp-291, 0x1.e344806149caep-37, 0x1.3a395d1e957a1p-84, 0.0, 0.0,
     0x1.592eeb2c2772ap-100, 0x1.f9b5eaac2e31fp-564, 0x1.b08b77d602cfap-311, 0.0, 0.0,
     0.0, 0x1.ecb83712cd45fp-343, 0.0, 0.0, 0.0, 0.0, 0x1.f59bfd4438a8ap-101, 0.0,
     0.0, 0x1.76a5887bb098cp-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9fbb0cf3ff509p-309, 0.0, 0.0, 0.0, 0x1.534762f013357p-576, 0.0, 0.0,
     0x1.0054a0d475e6dp-486, 0x1.e02658830043bp-612, 0x1.0fdff7fb87b2fp-91,
     0x1.cdfc6912a9f44p-421, 0x1.8b96a94eb1af3p-967, 0x1.cc7ebe4352ce3p-988,
     0x1.b0c511fcff924p-325, 0.0, 0.0, 0.0, 0.0, 0x1.cb7512aba5af9p-523,
     0x1.cdfe6a28baf05p-247, 0x1.e2c5dfedd05afp-762, 0x1.15ecb0b69964fp-936,
     0x1.6742cf6a8869p-111, 0.0, 0.0, 0.0, 0x1.06621988e563ap-933, 0.0,
     0x1.35b0fef437d5fp-402, 0.0, 0.0, 0.0, 0x1.8de2e95f15eabp-969,
     0x1.d9597519bd1ep-925, 0.0, 0.0, 0.0, 0.0, 0x1.78a0ec9c77497p-424,
     0x1.d0a85e05b0a0cp-730, 0x1.b4bbde3dcdc37p-545, 0x1.88b4bc166c32bp-215, 0.0, 0.0,
     0.0, 0.0, 0x1.bcab6595ea33p-805, 0x1.8d237263fdbacp-59, 0x1.c7bbc198a6232p-427,
     0.0, 0.0, 0.0, 0.0, 0x1.832fd6bbf895bp-620, 0x1.77672f36f35c8p-528, 0.0, 0.0,
     0.0, 0x1.8447cf98c25cdp-903, 0.0, 0x1.25f784a0b9a2bp-300, 0x1.09b4a026d30b9p-336,
     0x1.c66b314a68af7p-578, 0x1.0f97b4c7c5a55p-1012, 0.0, 0.0,
     0x1.287f873687b52p-217, 0x1.03e0317f3cfeap-221, 0x1.f86da64ebc7b5p-232, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.18a3e3259a5a3p-182, 0.0, 0x1.f04c12292324ep-835, 0.0,
     0.0, 0x1.e073bd02038b9p-184, 0x1.6a3f0cabb5f85p-408, 0x1.c6dd13e8f61fp-667, 0.0,
     0x1.6a329f4919dcbp-897, 0x1.7e6e85a1e3d77p-476, 0x1.de2cc8661afb6p-965,
     0x1.fb6d895536abdp-390, 0.0, 0x1.959628c84666ep-82, 0x1.f81f68a52b204p-492, 0.0,
     0.0, 0x1.175c4e219f1bfp-173, 0x1.313a8001b2bcfp-560, 0x1.eaa9026a18457p-67, 0.0,
     0.0, 0.0, 0.0, 0x1.dec51117c8f99p-732, 0x1.ad1da112e1b8p-578,
     0x1.1e6220f7b3c54p-350, 0x1.42899ada4194fp-896, 0.0, 0.0, 0x1.e34b07e546d6ap-245,
     0.0, 0.0, 0.0, 0.0, 0x1.07cfd103f499bp-469, 0.0, 0x1.98e70a587a673p-922,
     0x1.084002386065cp-103, 0.0, 0x1.e9dfe3a9b7136p-923, 0x1.6912ae88a9798p-70,
     0x1.cda37551095c2p-1018, 0.0, 0.0, 0x1.8b8682de2059fp-754,
     0x1.f684a643efa95p-883, 0x1.ac3fc146bf71fp-763, 0.0, 0x1.21c1bf92ab7p-929, 0.0,
     0.0, 0.0, 0.0, 0x1.e82578febf34p-151, 0x1.4f806437b62fp-717, 0.0, 0.0, 0.0,
     0x1.b027971f2a5fep-660, 0.0, 0x1.02aa5417a7d0fp-109, 0x1.619aeb4341881p-154,
     0x1.15cf8ae8250e5p-835, 0x1.4f9eddf678cc1p-151, 0x1.ba1432cf4b85ap-191, 0.0, 0.0,
     0x1.12538a049e716p-760, 0.0, 0x1.ab2eee23a802fp-211, 0.0, 0.0,
     0x1.98dbcaff13047p-296, 0x1.f6c25428520acp-88, 0.0, 0x1.d93c40062534bp-546,
     0x1.24b82ce8159a9p-794, 0x1.dcb57f5b488e8p-725, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6dc2975638bb9p-792, 0x1.63a887b525a2p-848, 0x1.da4be0ac2a02cp-723,
     0.0, 0x1.78cc357404608p-820, 0.0, 0x1.3dfc8f5ab6f7fp-443, 0.0, 0.0,
     0x1.d6204fc498c0bp-898, 0.0, 0x1.762be27183041p-764, 0.0, 0x1.48f3690e9c1e3p-400,
     0.0, 0.0, 0x1.2a1e371438852p-113, 0.0, 0.0, 0.0, 0x1.63af373e242e2p-724, 0.0,
     0.0, 0.0, 0x1.198b1a7f9d83ep-275, 0x1.2d73cc325f08bp-483, 0x1.b07a3435ded7fp-207,
     0.0, 0.0, 0x1.dc35986cd2d1ep-560, 0x1.35f22c3f65b4ep-992, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e3d72051202dep-767, 0x1.a33fb328497d1p-698, 0.0,
     0x1.52ce12d406d41p-997, 0x1.65a0ad717ee3fp-177, 0.0, 0x1.34b8fa6501734p-38, 0.0,
     0x1.2975b996acb15p-565, 0.0, 0x1.dddf45fd5366ep-211, 0x1.708da23a56c13p-448,
     0x1.9ed07e05313ddp-155, 0.0, 0x1.38dba85c6ef42p-823, 0x1.0c1fd17f05bc9p-729, 0.0,
     0.0, 0x1.c139253cba6f1p-489, 0x1.16a25453c5daep-84, 0x1.0dc228c99b6d6p-602, 0.0,
     0x1.bf7ad9b3c5731p-569, 0.0, 0.0, 0x1.45b182c93585p-678, 0.0,
     0x1.98862f90b6b73p-392, 0x1.c4add3dd874f9p-919, 0x1.29430b19c8a91p-364, 0.0,
     0x1.192e33c75028fp-340, 0x1.cd9142718bb3p-998, 0x1.fe3a8d7e5248ep-316,
     0x1.67d85421b00ep-891, 0.0, 0x1.f9ee1577451c9p-431, 0x1.33d38f84dbf5ep-166,
     0x1.b371ac350bab3p-678, 0x1.2021943e7d407p-725, 0x1.f90e4ac1e50dap-500, 0.0,
     0x1.d54a4d45e9ebdp-342, 0x1.0848afec8f9fep-966, 0x1.1c0bd59f3d636p-104, 0.0,
     0x1.bd3be270f218dp-661, 0.0, 0x1.f97c10c4f34a8p-306, 0.0, 0x1.d50aab784c961p-100,
     0x1.78ab82158c41bp-70, 0x1.8a5f496b08dbcp-160, 0.0, 0x1.7990acabbfc94p-370,
     0x1.badb27316cef6p-446, 0.0, 0.0, 0x1.585c9d14ccf81p-819, 0x1.96f723adc7c28p-432,
     0.0, 0.0, 0.0, 0x1.7801c4a19ab11p-827, 0.0, 0x1.23dcc78a073e3p-186,
     0x1.b3e944c5f6509p-262, 0x1.ded8f6d8a2349p-747, 0.0, 0.0, 0x1.2723fadb6850cp-561,
     0.0, 0x1.6fccfd1650bf2p-240, 0x1.3ee9b686ba928p-441, 0x1.d3272d2436e6ep-865, 0.0,
     0.0, 0x1.3f2307fa40ae3p-422, 0x1.9bc6c4dbe834bp-911, 0x1.66c2eb18b6287p-783,
     0x1.9d5754180526fp-360, 0.0, 0x1.ab0693159fd31p-762, 0.0, 0x1.b7901c6536b02p-27,
     0.0, 0x1.3f5919f853f0ap-212, 0.0, 0x1.8aa02f2ff84f7p-722, 0.0, 0.0, 0.0,
     0x1.09d5e53f1accep-182, 0x1.076b76c9eac52p-239, 0.0, 0x1.94454a5d5b267p-92, 0.0,
     0.0, 0x1.02c2eed1a7b94p-99, 0.0, 0x1.944da56ce29d1p-861, 0.0, 0.0,
     0x1.66617c494f4b7p-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83de5d1dc76e3p-1,
     0x1.9b5524aced473p-239, 0.0, 0x1.57e71c1e12cdep-272, 0x1.dd2b66efe1e3ap-175, 0.0,
     0.0, 0.0, 0x1.182b23b3af2a1p-823, 0.0, 0.0, 0.0, 0x1.147d15fbd6453p-384,
     0x1.f061229fbd142p-1007, 0x1.d838350d837d6p-746, 0.0, 0.0, 0x1.9c66e681dcf9cp-99,
     0.0, 0x1.52f670177b4a2p-431, 0x1.f60f74503c3efp-762, 0.0, 0x1.67e7d13d6dcdcp-283,
     0x1.8cdad41551bfep-423, 0x1.32ae5078d0617p-733, 0.0, 0x1.bdebe138c1c33p-134, 0.0,
     0x1.cf56f6b67fa25p-153, 0.0, 0.0, 0x1.041adc60536dcp-539, 0.0,
     0x1.fccbd86580d57p-452, 0x1.a4a4cd5c07f47p-683, 0x1.13c8ddf0a545dp-472, 0.0,
     0x1.5a23c7f229161p-943, 0x1.9068113d26674p-858, 0.0, 0.0, 0.0,
     0x1.d2b2bbac75247p-90, 0x1.e44ec2548c5cbp-662, 0x1.d86bdc5b27cb3p-143,
     0x1.d00b825faab04p-550, 0x1.cb0df0173e08ap-690, 0x1.f0997e8a9d4ffp-786,
     0x1.a4de902acfe41p-784, 0x1.665a3ff2bdb75p-449, 0x1.6f94bf6fd4c0cp-385, 0.0,
     0x1.9e6f94ba7771dp-449, 0x1.de186e157905p-995, 0x1.e831b307f098ep-453,
     0x1.8a75813c72d47p-172, 0x1.5f643c86d0a17p-780, 0x1.ac117380de291p-550, 0.0, 0.0,
     0.0, 0.0, 0x1.18f4987421c9fp-391, 0x1.0339046436d31p-471, 0x1.6a422655f00abp-800,
     0.0, 0.0, 0.0, 0x1.ba7c5a0c37b49p-929, 0.0, 0x1.0f259566b52a9p-558, 0.0,
     0x1.fc1d5ee49bfcep-344, 0.0, 0x1.9b751496ac552p-931, 0x1.f5594e8b455d5p-305,
     0x1.307c93d9fd7aep-506, 0.0, 0x1.ce1f3b6742616p-179, 0x1.8e9585b99d4ddp-554, 0.0,
     0x1.97f34f0a9e0bdp-45, 0.0, 0.0, 0.0, 0x1.567013eb77d1ep-309,
     0x1.b5169cda897b8p-598, 0x1.afca6f6d2f10bp-1005, 0x1.2ba12d2691a6bp-45,
     0x1.8ed77c72d778ap-858, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d891685a77fcfp-405,
     0x1.42143ba489ef1p-260, 0x1.8e72176c32613p-506, 0.0
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
            tmp1 = Sleef_frfrexpd1_purecfma(tmp0);
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
    printf("Sleef_frfrexpd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_frfrexpd1_purecfma bench acc %la\n", global_bench_acc);
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
