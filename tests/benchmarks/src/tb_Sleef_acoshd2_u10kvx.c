/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshd2_u10kvx.c --function Sleef_acoshd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.001344086800fp-601, 0.0, 0.0, 0.0, 0.0, 0x1.c504b2acf5b96p-605,
     0x1.34578bcda9952p-82, 0x1.3623f3d9d001cp-249, 0.0, 0x1.0bce58fb452adp-904, 0.0,
     0x1.bfe091ff69eeap-963, 0.0, 0.0, 0x1.a24722834222bp-969, 0.0, 0.0,
     0x1.e695e8e99bcc8p-942, 0x1.5ba0097f39387p-321, 0x1.10b545b62ade1p-687, 0.0, 0.0,
     0x1.58050095899afp-719, 0x1.948d72abb5724p-727, 0.0, 0.0, 0x1.88bcaead1c9ffp-460,
     0x1.63ad530b4af0fp-827, 0.0, 0.0, 0x1.a58a86b289ba3p-268, 0x1.5aaaf3cb1fd0cp-899,
     0x1.013fd44edf7cep-608, 0x1.d8a9d7dca6204p-735, 0.0, 0x1.7886289f61952p-1006,
     0x1.117a1c7908329p-357, 0x1.b83b1f1fa0d6cp-153, 0x1.4519b31a629a8p-915, 0.0,
     0x1.5a95681498d2p-828, 0.0, 0x1.d1c982fc30c0fp-941, 0x1.f14328ee4943cp-887, 0.0,
     0.0, 0x1.e89fdd1e90f6dp-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2602296395aefp-894, 0.0, 0.0, 0x1.1bd56ef8cfbd2p-519, 0x1.13a7071a06addp-171,
     0.0, 0.0, 0x1.df5d20fce07e5p-905, 0.0, 0x1.da3ead8152f26p-646,
     0x1.fcec7a6321e65p-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d3d070cffc53p-517, 0.0,
     0x1.d34be19895987p-790, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e592c7be21c76p-567, 0x1.9f5471ad2b9ap-374, 0.0, 0.0, 0.0,
     0x1.f1f0f4cea5495p-498, 0x1.b0592a9bf2ab6p-365, 0.0, 0x1.7624ac3568078p-109,
     0x1.ad52fd54e7c18p-152, 0x1.51b6b2153d621p-967, 0x1.d504ca11b4b5ap-724, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d930ba5237e5ap-865, 0x1.5fec2f13844afp-524,
     0x1.48db9fb0339ccp-206, 0.0, 0.0, 0.0, 0.0, 0x1.019b0e96aba45p-225, 0.0, 0.0,
     0x1.ccfc7cdeaad26p-354, 0x1.6c3655a9b4086p-876, 0x1.a4de88d0c0a2ap-364, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.742c5435ef403p-511, 0x1.7c7177ce00b53p-318, 0.0, 0.0, 0.0,
     0.0, 0x1.0bb224f28b2e2p-861, 0.0, 0.0, 0.0, 0.0, 0x1.0324b524e887p-124,
     0x1.4f5923929cd54p-363, 0x1.6af39104e4217p-366, 0x1.077a749138fdbp-836,
     0x1.abb5f3e9b05bep-677, 0x1.07203c3266952p-986, 0.0, 0.0, 0x1.9c1633d0edfe9p-411,
     0.0, 0.0, 0.0, 0x1.07193cdeab7bp-54, 0.0, 0x1.ed57c936aa6e1p-19,
     0x1.2e03086c32ec4p-1022, 0.0, 0.0, 0.0, 0.0, 0x1.cc1598c06977cp-496,
     0x1.35d0160724d9cp-985, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2993a0ebbbdb4p-862, 0.0,
     0x1.2cc5f4e84bab1p-630, 0.0, 0x1.e18b2c9b6e6c4p-308, 0x1.fb296153812ffp-97, 0.0,
     0x1.e64510d5f23e8p-421, 0.0, 0x1.cefac4262db45p-187, 0x1.9ed9e906fae6cp-603, 0.0,
     0x1.6d6f58115168ep-780, 0.0, 0.0, 0x1.f3d63e7707b92p-893, 0.0, 0.0, 0.0,
     0x1.1ae9eba054fdap-214, 0x1.85e59d2bd286fp-701, 0.0, 0.0, 0.0, 0.0,
     0x1.6e7837f6ea79bp-677, 0x1.ff485c0683efcp-921, 0.0, 0.0, 0x1.e6c755e8c492ep-956,
     0x1.c64bf0885d35cp-649, 0.0, 0x1.27b267583ea7p-541, 0.0, 0x1.da9142556dcf9p-619,
     0x1.ee833be597d6cp-289, 0.0, 0x1.0f00d3992f59bp-522, 0.0, 0.0, 0.0,
     0x1.ed4cd7a78d363p-813, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dbef5993adec5p-624, 0.0,
     0x1.bcc5fe3f63f38p-159, 0.0, 0x1.8f75e53ca025dp-685, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b7e1a4c80aebp-618, 0.0, 0.0, 0x1.16ac43e4add95p-104, 0x1.4df0ab6f4d28cp-545,
     0.0, 0.0, 0x1.193e5028674e7p-210, 0x1.abf4f169f750ep-3, 0.0,
     0x1.46e373cb1c286p-923, 0.0, 0x1.d808925e11082p-284, 0x1.a8e52cb4fe551p-599, 0.0,
     0.0, 0.0, 0x1.e9211bb901d96p-287, 0x1.b34737a483cedp-78, 0.0, 0.0,
     0x1.ce9fdb28183e2p-1002, 0x1.0c0942caa29c6p-868, 0x1.1161718fa4e2p-974, 0.0,
     0x1.d948020bc1a28p-889, 0x1.26e4064ea3eddp-332, 0.0, 0.0, 0x1.6190564a3918fp-225,
     0x1.1bca7f41513dfp-522, 0x1.bc5bbb5a1f06bp-787, 0.0, 0x1.c087cbf9fd4fdp-78, 0.0,
     0x1.cd4d28a3cfd9fp-515, 0.0, 0x1.63c61d91d3f3p-645, 0x1.9441c9182feb1p-51, 0.0,
     0x1.716f7fd8b965p-190, 0.0, 0x1.e0fa1511a578ep-696, 0x1.6ff2e31eb61cap-977, 0.0,
     0x1.26ab2659d8bb4p-398, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7827fc925e97fp-750,
     0x1.614c7a41b895p-322, 0x1.4adc182a55c34p-252, 0.0, 0.0, 0.0,
     0x1.f38b1fb5cc95cp-503, 0x1.58af3ad3ab0a4p-161, 0x1.fa8985a5a3fd4p-715, 0.0, 0.0,
     0.0, 0x1.5429d792a29bp-1000, 0.0, 0.0, 0.0, 0x1.d1b488ae3dd0ep-1005, 0.0,
     0x1.634cca26843dcp-651, 0.0, 0.0, 0x1.275b6f09a7ff8p-578, 0x1.82102c2aa2fe5p-731,
     0.0, 0x1.b2e75b27a9702p-51, 0x1.24a056aeabcd4p-355, 0x1.2e2792b8606d6p-535,
     0x1.55ec02e5cbfd1p-249, 0.0, 0.0, 0x1.9615bf2580a9p-442, 0x1.6fd6a81626338p-695,
     0.0, 0.0, 0.0, 0x1.13132b8c95a4ap-249, 0.0, 0x1.ad59f54fd0238p-509,
     0x1.3d0d8fee4ba74p-844, 0.0, 0x1.03d9e4ea7bdep-929, 0.0, 0.0, 0.0,
     0x1.03eaf7455bad3p-103, 0.0, 0x1.402ef9397618ep-657, 0.0, 0x1.5296ab326f244p-445,
     0.0, 0.0, 0x1.21b00a08b737fp-785, 0x1.4e8544e9a6b01p-620, 0x1.b8e57eee865ccp-684,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d99abe76fb84p-626, 0x1.3777b260f04cep-367,
     0.0, 0x1.928c311d84243p-809, 0.0, 0x1.f2098b5b642b8p-711, 0x1.b0c565bfc6043p-949,
     0x1.45c8011a07d91p-692, 0x1.3e0257c14a722p-591, 0.0, 0x1.68b235285b972p-972, 0.0,
     0.0, 0.0, 0x1.a97a6bc006987p-503, 0x1.a42ec298a7062p-469, 0.0, 0.0, 0.0,
     0x1.8f4f01262a07ep-799, 0.0, 0.0, 0.0, 0x1.df1fdc9fa6639p-807, 0.0,
     0x1.5e82189e68a2ap-181, 0x1.0fff33da8682cp-352, 0.0, 0x1.8e66e1684200ep-440,
     0x1.8a2b29ba1ed96p-1012, 0x1.47dc0ea3ec529p-210, 0.0, 0.0, 0.0,
     0x1.4b69b3445eedcp-709, 0x1.2b0c32ceaaa1ap-91, 0x1.bcd88b29822cbp-595,
     0x1.9471a79c6fbc1p-925, 0x1.0759d8cf73337p-428, 0x1.e74ebe669d673p-60,
     0x1.84472672126fbp-170, 0x1.47fdb4185e745p-771, 0x1.0b7990ef95574p-304, 0.0, 0.0,
     0x1.808058f3eb1bap-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6816791e6ad2p-546, 0.0,
     0.0, 0x1.855d87a78999bp-701, 0x1.1133d480e7471p-119, 0.0, 0x1.04d9127dbb5e5p-682,
     0x1.39a6c0af6e49dp-350, 0x1.8440d19c9d8bp-712, 0x1.f4b432a56927ap-823, 0.0,
     0x1.8852083166da6p-591, 0x1.7e3fdcc62a994p-467, 0.0, 0.0, 0.0,
     0x1.e53a9ef460b57p-139, 0x1.bac7032dbf4b7p-57, 0.0, 0.0, 0.0,
     0x1.454ace8efb305p-274, 0x1.391d6a9ff1313p-505, 0x1.4981336602a3dp-182, 0.0,
     0x1.864869f2865ccp-63, 0.0, 0.0, 0.0, 0x1.3bf440a7adb99p-709, 0.0, 0.0, 0.0,
     0x1.a21f1479bc23fp-714, 0x1.e081fc264f7a4p-602, 0x1.f65e2a0592eefp-868, 0.0, 0.0,
     0x1.cc35bdf325329p-785, 0.0, 0x1.3407b66c48186p-784, 0.0, 0x1.e54c76ce19e2ap-873,
     0x1.b5fa931ea687dp-247, 0x1.88ac78f38e191p-361, 0.0, 0.0, 0.0, 0.0,
     0x1.a000679aa98f1p-509, 0.0, 0.0, 0x1.1a02b414b71fap-382, 0x1.07236e6ac71c7p-42,
     0.0, 0x1.1be9eab97626ap-610, 0x1.45774c0631a85p-568, 0x1.71feb2f42b7ap-366,
     0x1.9498963c86febp-507, 0.0, 0x1.da9c9c53d9fe8p-999, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.02450d348fa77p-337, 0.0, 0x1.6a771c9270219p-386, 0.0,
     0x1.a3f0b30fb84f6p-101, 0x1.88a76616d8d8ep-916, 0.0, 0.0, 0.0,
     0x1.2325ff5705c5cp-65, 0x1.5732ca0f1cf04p-898, 0.0, 0.0, 0x1.408c09425af3bp-252,
     0.0, 0.0, 0x1.60eeace4a94f2p-618, 0x1.b2776ae9fc3adp-404, 0x1.10289ce1ac512p-427,
     0.0, 0x1.07d9cc96945afp-375, 0x1.89cf8ce1eafcbp-178, 0x1.f92e51c87531bp-1016,
     0x1.15422ae7656acp-94, 0.0, 0x1.24b3942278b9bp-527, 0x1.13963b8f9507p-226,
     0x1.06afc5fcfa9b6p-355, 0x1.6429c4498706cp-60, 0x1.8f15bce4205ebp-268, 0.0, 0.0,
     0x1.4aeaf7b3d9d8ep-431, 0.0, 0.0, 0x1.1901b8cd6327dp-681, 0.0, 0.0,
     0x1.887130c796602p-725, 0x1.bf8107a7bd365p-203, 0.0, 0x1.8961b60cc4ea6p-578,
     0x1.c920e45cad563p-498, 0.0, 0x1.1e55b6a933bb2p-942, 0x1.c3943eebb7884p-965, 0.0,
     0.0, 0x1.4c8d045612117p-974, 0.0, 0.0, 0.0, 0x1.f5ee115fba38fp-922,
     0x1.49d25b7e5a441p-540, 0.0, 0x1.62aff335c3558p-538, 0x1.dc57ceef3233p-460, 0.0,
     0.0, 0x1.72451da874866p-61, 0x1.2aa125438986p-1016, 0.0, 0.0,
     0x1.be2f6977a4237p-106, 0x1.f72d40a6334d6p-429, 0x1.bab5d2705afcap-621,
     0x1.ace49a8847f63p-112, 0x1.4f22acb062662p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.f6a231d103a67p-124, 0x1.b573ca07fc0fbp-289, 0.0, 0x1.65965d2dc9b1ap-433, 0.0,
     0.0, 0x1.c62739e95fc25p-732, 0x1.d1e9de2675433p-44, 0x1.1b6e963262d2p-219, 0.0,
     0.0, 0.0, 0.0, 0x1.d03213974ae89p-780, 0.0, 0.0, 0x1.812636903fd78p-15,
     0x1.5cf55f5b58f4fp-842, 0x1.52c304e188ba5p-349, 0.0, 0x1.27846abc4464ap-154,
     0x1.4406d543c0094p-252, 0x1.02ab58cdbf2dfp-56, 0.0, 0x1.4736f790b6d9ep-4,
     0x1.b2e24534b92dap-106, 0x1.2d275ad1e6e39p-818, 0.0, 0.0, 0.0,
     0x1.d28ad01be2bf3p-148, 0x1.ccb165cec16e3p-223, 0x1.8d283c74d514p-839,
     0x1.6e6de9de18024p-836, 0.0, 0x1.24e8150ded43fp-240, 0x1.55868fbc1661ap-749,
     0x1.331a2265d58a5p-659, 0x1.7028a501519ep-95, 0.0, 0x1.f19d467082c79p-29,
     0x1.bf9928d4c8df4p-553, 0.0, 0.0, 0x1.b750ea895a186p-396, 0x1.4b71cbbeb1eefp-616,
     0.0, 0.0, 0x1.d0eddb6608c09p-969, 0.0, 0x1.cd1bfb8dbe6aep-115,
     0x1.17d9df65535ddp-910, 0x1.5227ea0a38acdp-970, 0.0, 0.0, 0.0, 0.0,
     0x1.95b2815838d2ep-687, 0x1.b2cee7e80ed17p-872, 0x1.66de58824132bp-238,
     0x1.e288cf1697c1dp-355, 0x1.72f892a9db0edp-648, 0x1.0da54848a5e27p-707,
     0x1.c7bcd1b91580bp-1003, 0.0, 0x1.49d78cebef67ep-79, 0x1.5be33e7d7032p-488,
     0x1.5785eb3d272d3p-774, 0.0, 0x1.197b641c949e1p-950, 0x1.31f0b5c3b65afp-9, 0.0,
     0x1.5bd8d5123bf85p-420, 0x1.e7db1bfa0e0fep-712, 0.0, 0.0, 0.0,
     0x1.5c79d9e1f1107p-642, 0.0, 0x1.c32b369960fe8p-447, 0.0, 0x1.4ab8043f9177bp-272,
     0x1.75590c7b65cb6p-216, 0.0, 0x1.773f85f25308ep-489, 0x1.71fd88770bc02p-172, 0.0,
     0.0, 0x1.763cf1e5289a4p-90, 0x1.fdd13046b71d6p-910, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8691e144913c3p-560, 0x1.b92c69dedbae5p-291, 0.0, 0.0, 0x1.9177d1272829fp-789,
     0.0, 0.0, 0.0, 0.0, 0x1.1b005a41aeca6p-254, 0.0, 0.0, 0x1.4930b7ba4ed36p-337,
     0.0, 0.0, 0.0, 0x1.8bb96e7a7ad13p-52, 0.0, 0x1.242db50c97955p-585, 0.0, 0.0,
     0x1.9de78c1f05b5fp-193, 0.0, 0x1.7c0fe8fc1eecap-24, 0x1.7f020cc05ed76p-218,
     0x1.a3c946a99e1b5p-372, 0.0, 0.0, 0.0, 0.0, 0x1.8b03e9c918bd7p-756, 0.0, 0.0,
     0.0, 0.0, 0x1.adca2545091ebp-1019, 0x1.8244e478919fbp-887, 0.0,
     0x1.1c0c32f03d381p-409, 0x1.5ecde853fdca9p-177, 0x1.8ed73eb708bd5p-504,
     0x1.1f7459de02f69p-1011, 0.0, 0x1.955ef31e873a3p-551, 0x1.d7fc86f89686fp-27,
     0x1.ebef280e424f9p-200, 0.0, 0.0, 0.0, 0x1.2c0663fa175bcp-249, 0.0, 0.0,
     0x1.a0fa6a6254fdp-995, 0x1.0a10b4662193fp-152, 0.0, 0x1.b942d64c2966ap-354, 0.0,
     0.0, 0x1.02bead1972039p-85, 0x1.6178bf5eacbf2p-657, 0.0, 0.0,
     0x1.2e8bffe07e77p-103, 0.0, 0x1.e09cca26d1f34p-887, 0.0, 0.0,
     0x1.cadbbeabc7f4fp-812, 0.0, 0x1.836ecea3416e4p-740, 0x1.ed029c30cf66cp-833, 0.0,
     0x1.10d385315a8c6p-37, 0.0, 0.0, 0x1.d9291aab93166p-649, 0.0, 0.0, 0.0,
     0x1.993b183e7e9acp-635, 0x1.07f7a03f83f08p-505, 0.0, 0.0, 0.0, 0.0,
     0x1.f224274a2a756p-292, 0.0, 0x1.adf7cd71231c1p-1011, 0x1.36f61e34c50d6p-647,
     0x1.bcc87d75ee7afp-826, 0x1.df5880c008d56p-646, 0x1.3f627fe7c7c51p-223,
     0x1.39570f8e28d09p-528, 0.0, 0x1.50c81acf4aac7p-595, 0x1.b46b7328f0bc3p-99, 0.0,
     0x1.78d5b9d31e19dp-917, 0x1.cb1a7b325f5cfp-894, 0.0, 0x1.6706a73b9fe7cp-32, 0.0,
     0.0, 0x1.03e1986963ee6p-519, 0.0, 0x1.70608472ac485p-902, 0x1.c0dcc1b588a46p-4,
     0x1.eaab44acd5de3p-64, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ac333d1cd75fp-856,
     0x1.b18752ec3abb4p-398, 0.0, 0x1.964b39fac3222p-200, 0.0, 0x1.ab68e500867b5p-586,
     0x1.6f9903d18d191p-673, 0x1.3a3df18cfca4ep-50, 0.0, 0x1.1ca21899964p-664,
     0x1.5d5d5bb02a662p-466, 0x1.aef9ee37e7bfbp-198, 0x1.061ca935565b5p-934, 0.0,
     0x1.7d509c125473ep-399, 0x1.a60523c4ce1f1p-784, 0x1.5da36564ac856p-401, 0.0,
     0x1.f4dacc0eed166p-635, 0.0, 0x1.8fe5973a5feacp-903, 0x1.112c06ca11967p-590,
     0x1.90e7b96d2501fp-658, 0x1.6d9a78ded755p-978, 0.0, 0x1.ff1dec30d0003p-662,
     0x1.9c081e26d27d7p-164, 0.0, 0x1.25664a2eba308p-898, 0x1.e1f2cab533ff1p-192, 0.0,
     0x1.ea2023557efccp-61, 0.0, 0x1.7155d73291b16p-545, 0.0, 0.0, 0.0, 0.0,
     0x1.a426b709e4d06p-604, 0.0, 0.0, 0x1.0d7a9d620cad2p-843, 0x1p0,
     0x1.4a2cb4a4b1628p-233, 0x1.20850523224aep-157, 0.0, 0x1.9e115a88b9b7p-628,
     0x1.44f80c91c8b21p-832, 0x1.24794c3e0ffa4p-900, 0.0, 0.0, 0x1.f4416d8d9c3c1p-921,
     0.0, 0.0, 0x1.862d49bcbfe26p-215, 0x1.9cd50b8e07f94p-49, 0.0, 0.0, 0.0,
     0x1.1b138e52d682p-669, 0x1.e5c3292d93292p-658, 0x1.2b88d3035712fp-176,
     0x1.b2790a9e10a1p-595, 0x1.bb52538380a12p-350, 0.0, 0x1.aef5f50d500afp-706,
     0x1.576ab8e73ffb5p-499, 0x1.449edd233ff1dp-762, 0x1.faa023696d71p-67, 0.0, 0.0,
     0x1.495412d51a526p-934, 0.0, 0x1.511f2a680a015p-299, 0.0, 0x1.7387878c16f79p-430,
     0x1.6830825e6c01p-512, 0x1.8a61ec44de939p-339, 0.0, 0x1.99ec78d535bd7p-607, 0.0,
     0.0, 0x1.f17bd1e4e8c4ep-224, 0.0, 0.0, 0x1.67012453b08c9p-396, 0.0, 0.0,
     0x1.7e4d743c88331p-651, 0.0, 0x1.0287499a55841p-671, 0.0, 0.0, 0.0, 0.0,
     0x1.fa3b1fdda190fp-779, 0.0, 0x1.8e0991748d4cep-624, 0x1.473375d2db379p-499, 0.0,
     0x1.8f02a9015686bp-120, 0.0, 0x1.ff8e1fca15887p-698, 0x1.2d2d40f4f6f6bp-751, 0.0,
     0x1.88268f441b5bcp-875, 0x1.cc3a4a4e7dee8p-789, 0x1.068c9425f5797p-918,
     0x1.698a488ebd631p-265, 0x1.c7fbcb2a6745bp-678, 0x1.ee1ee5ef41586p-6,
     0x1.270955ee170f1p-727, 0.0, 0x1.8469b56795f44p-95, 0.0, 0x1.10701641f7e76p-79,
     0x1.918d1aefeb581p-822, 0x1.5780f3eedc0efp-288, 0.0, 0x1.a53b788c7836bp-276,
     0x1.3e6b74e143d08p-514, 0.0, 0.0, 0.0, 0.0, 0x1.219520f88bed4p-394, 0.0, 0.0,
     0x1.2126f1b9672fap-149, 0x1.edafb708f916cp-822, 0x1.3072059a29ef8p-384, 0.0,
     0x1.bac61f2d42b59p-12, 0.0, 0.0, 0.0, 0x1.836ecf708ad57p-296, 0.0,
     0x1.9f8c62d0f1688p-478, 0x1.f14edf3b77b5ap-454, 0.0, 0x1.0520711bcff0bp-376, 0.0,
     0.0, 0.0, 0.0, 0x1.d8fbc35e78043p-663, 0.0, 0x1.6e774b38b0d65p-271, 0.0,
     0x1.ff26cac47458p-236, 0x1.dd841caec4956p-500, 0x1.002a52d09db19p-748,
     0x1.d1645e5a8591ap-404, 0.0, 0x1.0885b98c83ef6p-897, 0x1.d6b3a6115dd41p-273, 0.0,
     0.0, 0.0, 0x1.b3e1af5a06adcp-155, 0.0, 0x1.2b1f5ca471c76p-480, 0.0,
     0x1.31051c8ceeb64p-350, 0x1.61d76eb3c3fbdp-666, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.951c1a9c79badp-1009, 0x1.1ea8cba9b17a4p-231, 0x1.659db24662204p-693,
     0x1.e40c82a9575cap-75, 0.0, 0x1.0826ef19ca80cp-337, 0x1.a5f2f0e564529p-529, 0.0,
     0.0, 0.0, 0x1.436fb8a13bf29p-859, 0x1.8196483d08619p-566, 0x1.fc011128e06c7p-102,
     0.0, 0.0, 0.0, 0x1.36846db0eb8f6p-43, 0x1.aad116c7e356fp-274,
     0x1.90bd688f9cc9ap-140, 0.0, 0.0, 0.0, 0x1.b455737ff83bep-432,
     0x1.84f415a730224p-76, 0.0, 0x1.dcb3914b81f5ap-613, 0x1.fafc8d764e59fp-175, 0.0,
     0x1.484c84cd466cap-891, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9043b6b48e54fp-1008,
     0x1.7aee075f838p-400, 0.0, 0.0, 0.0, 0x1.da37bf5aee709p-536, 0.0, 0.0, 0.0, 0.0,
     0x1.bddabf7033c9fp-749, 0.0, 0x1.92336f3e9c7f1p-42, 0.0, 0x1.aa7b56cdfa41p-455,
     0x1.2c0a5b7cf1bddp-993, 0x1.608262d047d7bp-514, 0x1.8351f5cfe194bp-29,
     0x1.f4e26eb8d5408p-989, 0.0, 0x1.216cb153cf12ep-705, 0x1.49c5af5f33683p-717, 0.0,
     0x1.fb9d574cc50fdp-1016, 0x1.547d533bd5d32p-154, 0x1.1ca6fe4c0e041p-497,
     0x1.46294866b1819p-531, 0.0, 0x1.fe5bde63f2bfp-707, 0.0, 0.0, 0.0,
     0x1.463fe283850dbp-954, 0.0, 0.0, 0.0, 0x1.49deb3d0519c2p-644,
     0x1.469e7ece0df2fp-528, 0x1.7117522e6cce1p-669, 0x1.d67ca3fe225a9p-225,
     0x1.8defb512f3e1p-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fa93b0dbb2f2p-877, 0.0, 0.0,
     0x1.a791b5ec8fea8p-882, 0x1.c97d9f9135e11p-197, 0x1.9d18f2cc8db1ep-501,
     0x1.d28a2d863359dp-75, 0.0, 0.0, 0.0, 0x1.f916a12118e0ap-975, 0.0,
     0x1.832b1447f3e57p-79, 0x1.538e3ec93ae4ap-717, 0.0, 0x1.bfcef63be4477p-699, 0.0,
     0x1.cc18fed763776p-705, 0x1.bb709e811cfcap-164, 0.0, 0x1.a1269fcdd3635p-460, 0.0,
     0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_acoshd2_u10kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_acoshd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acoshd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
