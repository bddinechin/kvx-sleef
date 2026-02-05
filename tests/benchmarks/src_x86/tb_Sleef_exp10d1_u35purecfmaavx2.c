/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d1_u35purecfma.c --function \
 *     Sleef_exp10d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.2d9f81c33b722p-83, 0x1.f448096bbb2bp-388,
     0x1.96a2f1d1cd2e1p-545, 0.0, 0x1.83858e140d736p-386, 0x1.83ecf51a59849p-885, 0.0,
     0.0, 0x1.08ef3b8162705p-669, 0x1.d2bbb6fc09b55p-83, 0.0, 0.0, 0.0, 0.0,
     0x1.2f47da2e85898p-77, 0.0, 0.0, 0.0, 0x1.454d4c2271bfap-394,
     0x1.a681d76a1b04dp-930, 0x1.219b83aca9bc5p-973, 0x1.46d68738b9f42p-753, 0.0,
     0x1.df37d77b455d1p-762, 0.0, 0x1.19763bb164148p-562, 0.0, 0x1.381b3b3075c62p-535,
     0x1.69ce6fae4f1a8p-727, 0x1.8a04bab1f0a57p-330, 0x1.73310cf449155p-932, 0.0,
     0x1.1e498a64f513ap-414, 0x1.9cd2241bf0f55p-375, 0.0, 0x1.00162f6abbe32p-197, 0.0,
     0x1.72fc3bf0257aap-184, 0.0, 0x1.48abbe15631ffp-621, 0.0, 0.0, 0.0,
     0x1.70eee6c8e4cb1p-744, 0x1.532b51f9d3437p-126, 0x1.04494d26b4476p-441, 0.0,
     0x1.6bed5739b6d2cp-733, 0.0, 0.0, 0x1.89b562cd5b98fp-862, 0.0, 0.0,
     0x1.aee868a28297bp-1005, 0.0, 0x1.7539e83eac904p-1022, 0.0, 0.0, 0.0,
     0x1.5cd5c8c3a2e6ep-17, 0x1.0084ae121cd08p-244, 0.0, 0.0, 0.0,
     0x1.e9c50b4ae2p-340, 0x1.999833af3f767p-983, 0.0, 0.0, 0x1.73628ce863e39p-278,
     0.0, 0x1.aff67cc6e8cc3p-635, 0.0, 0x1.b88cbe8fc586ep-223, 0x1.fec181a477c72p-536,
     0.0, 0x1.00c0e87100188p-603, 0.0, 0.0, 0.0, 0x1.c07973f415d52p-477,
     0x1.7cdf545fcd224p-930, 0x1.91debb68fc54fp-422, 0x1.2d9c0ee11b2c6p-355,
     0x1.2c24773825871p-983, 0.0, 0.0, 0.0, 0x1.9f735e4f28ba5p-870, 0.0,
     0x1.637d9646ec8bap-380, 0.0, 0x1.41dd31e91c3a4p-549, 0.0, 0x1.9f3a14b9fd564p-731,
     0.0, 0x1.c4f243d619b12p-501, 0x1.70644f41fd3d6p-140, 0.0, 0x1.92776614cb94ap-8,
     0.0, 0x1.60643965a5a27p-428, 0x1.6f74ecaf918fdp-737, 0x1.ef52f8fd7b3f2p-485,
     0x1.8c46c6b908b77p-133, 0.0, 0x1.01c10dfe588c3p-195, 0.0, 0x1.49252a515b0cp-860,
     0.0, 0x1.4821d9ee78b2ap-9, 0.0, 0x1.5eac256b430f6p-65, 0.0,
     0x1.dcc0a09a70618p-25, 0.0, 0.0, 0.0, 0x1.b3f3de3346ff1p-674,
     0x1.6f57b70ccf1a4p-467, 0x1.dd8eb39772129p-20, 0x1.4ce82738a29d9p-172, 0.0,
     0x1.db978e3ce10f2p-461, 0x1.68822aa38f853p-569, 0x1.80bbf51e445a4p-888,
     0x1.f23759fc5a885p-781, 0x1.75a6e532afb0bp-290, 0x1.144dad18c5892p-7, 0.0, 0.0,
     0x1.19c9cce79278p-974, 0.0, 0.0, 0x1.977bade27e9dp-90, 0x1.e37c851d1799bp-223,
     0.0, 0.0, 0x1.678800222a3e4p-705, 0.0, 0x1.d22a7279282cfp-637, 0.0,
     0x1.728736ca38c4ap-1016, 0.0, 0.0, 0.0, 0x1.251a863aafbc7p-146, 0.0,
     0x1.93e221b587d1ep-634, 0.0, 0x1.555c9810c0036p-966, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0b831a067343ep-520, 0.0, 0x1.60fe80b3ac5f4p-33,
     0x1.5681474f36775p-671, 0.0, 0x1.2792edf7c6f93p-1019, 0.0, 0.0,
     0x1.50ed7c6f7a76fp-334, 0x1.c3b94aaa05c53p-812, 0.0, 0.0, 0.0, 0.0,
     0x1.424ebcb1a4a4bp-263, 0x1.106a22537102cp-973, 0.0, 0x1.1c273eeefe9fbp-805,
     0x1.8cdf6e3101068p-903, 0.0, 0x1.96d0ba43ec34cp-174, 0x1.8ee49cd753ba3p-30, 0.0,
     0x1.df075ae9bbf6ap-999, 0x1.305353c603791p-558, 0.0, 0x1.c9b181f9cf069p-491,
     0x1.3b91ac9a04596p-300, 0.0, 0.0, 0x1.3ac3ac51190d4p-291, 0x1.41852409752fep-594,
     0.0, 0.0, 0x1.09b09b46af7ddp-807, 0.0, 0.0, 0.0, 0x1.4d281396c423bp-813, 0.0,
     0x1.8f25503aa6201p-379, 0x1.e271a8992758p-825, 0x1.f56d412b2d3b6p-192, 0.0,
     0x1.4d3c6e08493c6p-13, 0.0, 0.0, 0.0, 0.0, 0x1.996ee34eeab0dp-435, 0.0, 0.0,
     0x1.aedb5d80caf9ep-604, 0x1.e8eb1de42de4ep-982, 0x1.88d0584680c3p-117,
     0x1.5cdcd9deba18bp-795, 0.0, 0x1.d305e30c68b4fp-743, 0x1.cb2f1b08f1c01p-38,
     0x1.57cb37a681802p-840, 0.0, 0x1.6b438227237d9p-811, 0.0, 0x1.c3cb7ae4aff3ap-95,
     0x1.39ec10df963d4p-313, 0.0, 0x1.c93413a4c9ce1p-176, 0x1.6b8e2da457765p-137, 0.0,
     0x1.9503d48cd6801p-99, 0.0, 0.0, 0x1.d0dae53d8b5fp-668, 0x1.03bd84e88c465p-805,
     0.0, 0.0, 0x1.00505ec3bb734p-300, 0.0, 0x1.e8572d5a36e9bp-126,
     0x1.d0e78b5a80eabp-692, 0.0, 0.0, 0x1.c8fd0b46816b3p-727, 0x1.1709d2908d1afp-426,
     0.0, 0.0, 0x1.fa69195ba71bep-686, 0x1.87dc001156a7ap-67, 0.0, 0.0, 0.0,
     0x1.b6ddaec5c754dp-193, 0.0, 0.0, 0.0, 0.0, 0x1.797d3d5be360fp-953, 0.0,
     0x1.a29f06ccef312p-806, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8bd8a1713598p-608, 0.0,
     0.0, 0x1.429f220e1f9c3p-378, 0x1.733adbd422c98p-347, 0.0, 0x1.f51a8205098bep-988,
     0.0, 0x1.cbd8d3088a163p-574, 0.0, 0x1.4da804aba72b2p-726, 0.0, 0.0, 0.0,
     0x1.6ffd0810489d8p-254, 0x1.0176657e98718p-760, 0x1.459551e8540fbp-896,
     0x1.e0c9143176571p-983, 0.0, 0.0, 0x1.75d69622c537ep-550, 0.0,
     0x1.554be257a8e22p-687, 0.0, 0.0, 0.0, 0x1.2ee151f05e23cp-437, 0.0,
     0x1.0ead36683ffeep-392, 0.0, 0.0, 0.0, 0.0, 0x1.06741c0388b0bp-187, 0.0, 0.0,
     0x1.4e9e830ad455ep-190, 0.0, 0.0, 0x1.701f65d229b76p-484, 0.0,
     0x1.3bbc0b564e63ap-432, 0.0, 0.0, 0x1.2dccf2a5b4b77p-574, 0x1.14347fdbc7995p-739,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b8b9e98f18a5p-482, 0x1.f725d065e164dp-59,
     0x1.809f8d0859154p-903, 0.0, 0.0, 0x1.73638fca347ebp-291, 0.0, 0.0,
     0x1.a5242c2207978p-780, 0x1.5e79e91db6f2bp-614, 0x1.81d4713524e6p-638, 0.0, 0.0,
     0x1.02ebb718cfd94p-536, 0x1.1979b94e564bfp-880, 0.0, 0.0, 0.0,
     0x1.c9774235bc704p-832, 0x1.9f88668e38bedp-959, 0.0, 0x1.beadcfdd31ee5p-628, 0.0,
     0x1.4b70bda5988fcp-479, 0x1.1a03ad855eafbp-803, 0.0, 0.0, 0.0, 0.0,
     0x1.8658a6f2dfafep-929, 0.0, 0.0, 0x1.dca215a3abbcep-711, 0.0,
     0x1.a0fbbe640ebe7p-830, 0x1.5db188ec81e06p-607, 0x1.45e2193d0687ap-435,
     0x1.b403b7c97f68p-108, 0x1.6ac0f669174bcp-852, 0x1.32a2ec20c4894p-625,
     0x1.c3fbfb281f1a8p-360, 0.0, 0.0, 0x1.28c2e7b2f169dp-531, 0.0, 0.0, 0.0, 0.0,
     0x1.809f4590a5ed2p-159, 0.0, 0x1.12557d28cdcadp-970, 0.0, 0x1.2a655a0860f96p-158,
     0x1.c1ad4b19e81a3p-97, 0.0, 0.0, 0.0, 0.0, 0x1.540579293b389p-792,
     0x1.a8bfff313079ap-907, 0x1.97c1b4371810ep-134, 0x1.cdf8252447b78p-328, 0.0, 0.0,
     0x1.ddad9e44767f1p-19, 0.0, 0x1.18a0857febd5ep-645, 0.0, 0.0, 0.0,
     0x1.0302f070b00fbp-5, 0x1.f111a31410beep-614, 0x1.b44ad92c267e6p-933,
     0x1.42651c05eea39p-214, 0x1.7b5672ef250dap-841, 0.0, 0.0, 0x1.adc9a80de0089p-663,
     0.0, 0.0, 0.0, 0x1.f909f2450b2f3p-409, 0.0, 0.0, 0.0, 0x1.d059cea719f64p-510,
     0x1.1b6e54bea474ep-7, 0x1.74e6aa349f46cp-146, 0x1.ee434a7182021p-819, 0.0,
     0x1.bdb6e0958d5a4p-977, 0x1.93a1c3d883f18p-141, 0x1.9404a71987823p-241,
     0x1.bb0f766f2a061p-954, 0x1.b8d721c499538p-149, 0.0, 0x1.84d6f33010027p-1008,
     0.0, 0x1.e4f51eb04c578p-894, 0x1.d724737ca3beap-217, 0x1.7a872f5a35d15p-467, 0.0,
     0x1.1a879d9477f91p-959, 0.0, 0x1.6f426867d4b2bp-1006, 0x1.18216efb1b40cp-243,
     0.0, 0x1.385f85465f42fp-105, 0x1.267e77458333p-307, 0x1.f231db82883f2p-342,
     0x1.eadd81d39b464p-275, 0.0, 0.0, 0x1.c4092d3da6cccp-782, 0.0,
     0x1.074376822b6a5p-781, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd68b9732a6a9p-1020, 0.0,
     0x1.c7811ca2638ecp-262, 0x1.99620c0b5478ap-111, 0x1.2261841363591p-679,
     0x1.53bf605668122p-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f1a35df7c101p-331, 0x1.a65dfc3c35381p-46, 0x1.69f37259ab97p-619,
     0x1.5aa61fbdb21e6p-693, 0.0, 0.0, 0.0, 0x1.8cb9ddea1272ap-768,
     0x1.c20abbe671be8p-888, 0.0, 0x1.6166c165a2433p-189, 0x1.bf9e493ee132p-921,
     0x1.5ca285e35b99bp-401, 0.0, 0.0, 0x1.68175c7684698p-380, 0x1.728ddb69b330ap-540,
     0x1.9a4c17f59ee65p-790, 0x1.1962a908cd8c8p-916, 0.0, 0x1.86eb51c849885p-1014,
     0x1.6a3ae3c353ce9p-176, 0.0, 0x1.ad3dd07b96098p-35, 0x1.8bcce7ea994e4p-672, 0.0,
     0.0, 0x1.554b0267b7736p-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa3b60efb578cp-324, 0.0,
     0.0, 0x1.5fb441206ac27p-141, 0.0, 0.0, 0.0, 0x1.142459bec7cf1p-215,
     0x1.276210f8fa9f1p-1004, 0.0, 0x1.992dc9b34b7c5p-703, 0x1.6049796505d54p-366,
     0x1.4f4c733e01915p-251, 0x1.6858549a9662cp-154, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba477d1a401f3p-169, 0x1.08e95f6c5c674p-699, 0.0, 0x1.7e948b2496cap-259, 0.0,
     0.0, 0x1.95f66e1ef338ap-688, 0.0, 0.0, 0.0, 0x1.6f85aec8e9c4fp-142, 0.0,
     0x1.a78f32101a3bfp-520, 0.0, 0.0, 0.0, 0.0, 0x1.164712e7b087bp-747,
     0x1.17d9fd8024275p-280, 0x1.f712ad5285afdp-968, 0x1.274ed94eed0dap-697,
     0x1.ad0132fdbce85p-584, 0.0, 0x1.3c6182f0a30e4p-358, 0x1.f238514728cfap-583, 0.0,
     0x1.a68590f2620c9p-749, 0x1.8e1528596db8ep-816, 0x1.a23c4ed26b893p-726,
     0x1.a99077608489ep-932, 0x1.8cbf83e8d019bp-141, 0x1.c354aadd008a5p-614, 0.0,
     0x1.05ee8be013a0bp-820, 0x1.1327b0fe0f1c6p-683, 0x1.cb86bb8b3309bp-111, 0.0, 0.0,
     0.0, 0x1.e9108536e6d13p-682, 0.0, 0.0, 0x1.5bb58650f7881p-278, 0.0,
     0x1.c92c9b0893a7ap-426, 0x1.3e06138778d2p-1013, 0.0, 0x1.1de1ea22d66ep-179,
     0x1.0f47b36a95357p-716, 0x1.122f4d1bdd935p-866, 0.0, 0x1.db326d67a9c13p-231, 0.0,
     0x1.e2aeafa74a2bep-701, 0x1.2ec3189461009p-222, 0.0, 0.0, 0x1.92b1463015469p-380,
     0x1.e2e796d0d217dp-20, 0x1.04f636edf7a11p-446, 0x1.93cdb25c88a68p-473,
     0x1.685ddbf38c652p-398, 0.0, 0x1.db5daff380027p-830, 0.0, 0.0, 0.0, 0.0,
     0x1.5aad43d800f23p-568, 0x1.6a3f344da31acp-843, 0.0, 0.0, 0.0,
     0x1.c994ca3963e67p-584, 0.0, 0x1.53f085fdf65bfp-189, 0x1.30a501d478149p-598,
     0x1.ff1a4c579d89fp-430, 0x1.ce009b1afb0eap-446, 0.0, 0x1.2b1cf6163068ap-447,
     0x1.79275c2766b6ap-609, 0.0, 0.0, 0.0, 0x1.3f28ffa0a744ep-560, 0.0, 0.0,
     0x1.fb55dde5e136cp-731, 0.0, 0.0, 0.0, 0x1.c42005f9af6f1p-138,
     0x1.2f66fc76c1739p-868, 0x1.4dfe270ffdc5cp-681, 0x1.e7844f757a63ap-523, 0.0,
     0x1.bc5561da07b95p-824, 0.0, 0.0, 0.0, 0x1.c53f020d0a4f6p-88,
     0x1.b1703adacb716p-1002, 0.0, 0.0, 0.0, 0x1.182a791f1c70ep-396,
     0x1.c84d479be62cbp-801, 0x1.321c294bd91d1p-886, 0x1.540b2cb6b958ap-637,
     0x1.e28bed037e8dp-725, 0.0, 0x1.cbfdeec0fdc98p-201, 0x1.2f9d18168a828p-801, 0.0,
     0.0, 0x1.ad0d377a8981fp-260, 0x1.3b251a8360869p-17, 0x1.72d7880cc3174p-859,
     0x1.ff17e853b84a4p-999, 0.0, 0.0, 0.0, 0x1.a2f59cb32eac8p-317, 0.0,
     0x1.cc205dac30d51p-850, 0x1.7d3af6096af3ap-770, 0x1.7de3ebc91625ap-211,
     0x1.99c6f20c4c43dp-410, 0.0, 0.0, 0x1.165eb79d3e2d7p-378, 0x1.7945584582233p-324,
     0.0, 0x1.672b26f6030bcp-161, 0.0, 0.0, 0.0, 0x1.fa2292cad2f95p-614,
     0x1.c52dd12054e74p-798, 0x1.4b73e231b438p-642, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de5a3e47d4927p-721, 0x1.3fdd8ed259fd4p-361, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f3dd95d46b1a5p-187, 0.0, 0.0, 0.0, 0x1.1dc72a85a6399p-85, 0.0, 0.0, 0.0, 0.0,
     0x1.f4452ab555d08p-697, 0.0, 0x1.3fb94632d556bp-5, 0x1.00c64598b47cap-444, 0.0,
     0x1.a517983381089p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05ec84a7f4cbp-948,
     0x1.e8a6d6ee928d1p-447, 0x1.f6980509a1fefp-669, 0x1.bf8388486fe71p-604,
     0x1.814315e9113a6p-863, 0x1.feda12340bc95p-7, 0.0, 0.0, 0.0,
     0x1.9936a0a6887dfp-129, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23008c304e63bp-988, 0x1.2e806f63aae6fp-145, 0.0, 0.0, 0x1.f7316012e816bp-271,
     0.0, 0.0, 0x1.8b765239c776fp-469, 0.0, 0x1.8b88e6a572e9ep-817,
     0x1.106d43baafc79p-100, 0.0, 0x1.2cb9380d46036p-169, 0x1.3ee5d22928c05p-390,
     0x1.d0cffbad2ff8fp-55, 0x1.3ab80dfe85441p-34, 0.0, 0x1.1d35ef795ac5ap-244, 0.0,
     0x1.e00240e79c844p-987, 0x1.0b00b50706f9ep-73, 0x1.9e044afbef97p-1008, 0.0, 0.0,
     0x1.d836fb433874dp-665, 0x1.539b79722fbcap-506, 0.0, 0x1.de6917134025bp-752,
     0x1.cbbb0b4c290c8p-1014, 0.0, 0.0, 0.0, 0.0, 0x1.0a540274a1f97p-897,
     0x1.e88b6f4984ce7p-53, 0x1.f1c0031c8c835p-146, 0x1.acfdd97e732fep-117,
     0x1.b8673821e4b68p-531, 0.0, 0x1.ec6d02278c8bep-459, 0.0, 0.0, 0.0,
     0x1.90a69830ed66cp-128, 0.0, 0x1.c76739a1a30cep-25, 0x1.6c8034871de44p-16,
     0x1.9b64d3f803eabp-353, 0x1.bb372736ed0c1p-285, 0.0, 0x1.55b385c911ef1p-723,
     0x1.be84599fe5975p-401, 0.0, 0x1.47260dd2f4882p-829, 0x1.82d2fd2229065p-611,
     0x1.85246a5335511p-22, 0x1.42a0b16e555d2p-659, 0x1.f5304fb99f60cp-29, 0.0, 0.0,
     0.0, 0x1.b3f22fee44b8bp-523, 0x1.9bc774cf66592p-91, 0x1.a0a49ea526965p-247, 0.0,
     0x1.89b6b7a0118bfp-903, 0x1.b74dcfc0248c8p-753, 0.0, 0.0, 0.0,
     0x1.0f2e75cd68bap-540, 0.0, 0x1.8a00e6df3599bp-514, 0x1.236f7b42e0e03p-893,
     0x1.8b5072ca4d813p-343, 0.0, 0x1.01ce236cda9cdp-485, 0x1.6f34fc3b04095p-613,
     0x1.5f65de7c3e207p-981, 0.0, 0x1.d7c47b89cdddap-307, 0x1.dc194d5ff2614p-213, 0.0,
     0x1.469533fad6cdfp-367, 0x1.611c213a6ecfbp-370, 0x1.d2273e1931693p-436, 0.0, 0.0,
     0.0, 0.0, 0x1.993027597434dp-331, 0x1.8ef37eb03507p-346, 0.0,
     0x1.af0e86e9c5d4dp-740, 0.0, 0.0, 0x1.23386c139739fp-19, 0.0,
     0x1.0cd7d1f9b6749p-872, 0.0, 0.0, 0.0, 0x1.77e0f29c80549p-329, 0.0, 0.0, 0.0,
     0x1.df4cd5b2d5597p-457, 0x1.9220c98828c81p-944, 0.0, 0.0, 0x1.6830cecdebep-344,
     0x1.7520c8db497e9p-754, 0.0, 0x1.5a2ea9ea278c6p-5, 0x1.f3786c23f5337p-179, 0.0,
     0.0, 0.0, 0x1.a59c88f8cd09p-676, 0x1.5fb4e207c1abbp-803, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.460ac425e26ebp-863, 0.0, 0x1.07fca6519804ep-759, 0.0, 0x1.14d4d8de0437bp-126,
     0x1.1a87860dd1e13p-314, 0x1.804b5685bbdap-844, 0.0, 0.0, 0.0,
     0x1.1305ae93c7f17p-332, 0.0, 0.0, 0.0, 0x1.b44cd60bd85e9p-504, 0.0,
     0x1.c4d4815fbfef8p-25, 0x1.13e041102149bp-795, 0.0, 0.0, 0.0,
     0x1.892cfb5468dfep-170, 0.0, 0x1.e767912fcd328p-746, 0.0, 0x1.87a1889cc5cc5p-941,
     0.0, 0.0, 0x1.2aa240fa97194p-74, 0.0, 0x1.3a86b399445c8p-30,
     0x1.7e5e449706069p-150, 0.0, 0x1.37941cf345501p-156, 0x1.564c5f2e53ca4p-666, 0.0,
     0x1p0, 0.0, 0.0, 0x1.8a4751aa45fe7p-438, 0x1.b3b97c1f1ee32p-272,
     0x1.9a0bb96dc974fp-840, 0x1.db5dee56cd5d6p-786, 0x1.7b48f2947e727p-673, 0.0, 0.0,
     0.0, 0x1.1902155fabdbcp-308, 0.0, 0x1.fbf824a39dd3p-323, 0x1.fc2a9da47100cp-951,
     0.0, 0.0, 0x1.4440adc05fb15p-879, 0x1.c8818ebee3c34p-125, 0x1.3ac7e46a2219fp-754,
     0.0, 0.0, 0x1.06df24c5fbed5p-495, 0x1.28ccc42a41c0ep-330, 0.0,
     0x1.fde759015b921p-702, 0x1.7877ae8174e3p-84, 0x1.3c42dcf70e424p-218, 0.0, 0.0,
     0.0, 0x1.1b5487a303433p-591, 0.0, 0.0, 0.0, 0x1.94e4d969f9fc7p-921, 0.0, 0.0,
     0.0, 0x1.003aacce532eep-666, 0.0, 0.0, 0x1.0778df2aae32fp-272,
     0x1.338af87c80964p-976, 0x1.e4a2bcc59cc53p-635, 0.0, 0x1.fac38b73a4efdp-158, 0.0,
     0x1.dfcd195169dbbp-633, 0x1.c987180b8657bp-741, 0.0, 0x1.ed5fecce34a01p-978,
     0x1.68e4f9026c042p-54, 0x1.70ca8aa7ebf41p-987, 0.0, 0.0, 0x1.2abb5136d0e97p-210,
     0x1.5b19bafc7445cp-917, 0.0, 0.0, 0x1.1bf53f767f4c2p-359, 0x1.db7a366a5cdb8p-122,
     0.0, 0.0, 0.0, 0.0, 0x1.1cecbca7b749ap-579, 0x1.c92f003eba859p-682, 0.0, 0.0,
     0x1.5364127f0919p-707, 0x1.e70af6ef0f38dp-547, 0x1.854f7b01ecfa5p-872,
     0x1.fd5230147782fp-107, 0x1.42b79b39a08e6p-777, 0x1.724ec3e9c2ca1p-746,
     0x1.7fc913e429a64p-535, 0.0, 0.0, 0x1.0a23054b432c3p-199, 0x1.ec8c451f724b5p-380,
     0.0, 0.0, 0.0, 0x1.356ed340b25a3p-482, 0x1.fdf2aa63f6022p-800, 0.0,
     0x1.d25582836053ap-534, 0x1.60d99a9c2e6c1p-283, 0.0, 0.0, 0x1.42904ec7df1d6p-185,
     0x1.bfd63067e08c9p-186, 0.0, 0.0, 0.0, 0.0, 0x1.0b33daa4e59d6p-455, 0.0, 0.0,
     0.0, 0.0, 0x1.704c2458a5f46p-321, 0.0, 0.0, 0x1.b309db8b28dfep-898, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7f99003832823p-865, 0x1.a977c7e43521bp-154, 0.0, 0.0, 0.0,
     0.0, 0x1.7ba5e1025bb0fp-358, 0.0, 0x1.34fe5013930c1p-339, 0x1.80ae42638bb92p-6,
     0.0, 0.0, 0x1.1843df4d56334p-322, 0.0, 0.0, 0.0, 0x1.d7f7796a6755cp-698,
     0x1.68ab4d17d22fdp-536, 0.0, 0x1.2d5e3791a6de2p-847, 0x1.9f41d3663289ap-848, 0.0,
     0x1.db25755cd4cbep-896, 0x1.305bb854970f7p-898, 0.0, 0.0, 0.0, 0.0,
     0x1.7d86a98cfa0f7p-632, 0x1.dab91633499d1p-431, 0x1.7f93a3ac0f2abp-1005,
     0x1.2f5ced7a7fcfep-691, 0.0, 0.0
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
            tmp1 = Sleef_exp10d1_u35purecfma(tmp0);
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
    printf("Sleef_exp10d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10d1_u35purecfma bench acc %la\n", global_bench_acc);
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
