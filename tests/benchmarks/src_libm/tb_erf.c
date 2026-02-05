/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_erf.c --function erf --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.4553d2ae4deb2p-832, 0.0, 0x1.ad836357b158dp-971, 0x1.db55a02182a24p-755,
     0.0, 0x1.fe58712d5674ap-615, 0x1.c2ebe5953f498p-968, 0x1.3b2d05e6483fdp-582,
     0x1.0be9a8bfcc21ep-526, 0x1.a4ef12633ccddp-629, 0.0, 0x1.5bf521ea36f7bp-265,
     0x1.07e810cc36e9fp-439, 0x1.ff1061b5b2db4p-140, 0.0, 0x1.cc20ae66bebd4p-387, 0.0,
     0x1.ed53732e8d47ep-502, 0x1.ca4dbb262da0ep-860, 0x1.dafc27e6d1f18p-567,
     0x1.4470c28bd8a6p-938, 0x1.ff8c5fd09a91p-919, 0x1.f6f8e85645ec3p-63, 0.0,
     0x1.8382188caa73bp-766, 0x1.d1a21e6ca8451p-42, 0.0, 0x1.84bb28c8773f6p-156, 0.0,
     0x1.2e87a742d3ea5p-747, 0x1.ca04b7b46026dp-234, 0.0, 0x1.6fd8310542259p-493, 0.0,
     0.0, 0.0, 0x1.e1d4fb6f24727p-166, 0.0, 0.0, 0.0, 0x1.09e67947f9ee2p-388, 0.0,
     0x1.26b9bdd1859afp-41, 0x1.ac4bac0915b83p-943, 0x1.a0ba5f19b29bbp-211, 0.0,
     0x1.308aba77d79f5p-530, 0x1.00decf92c9bbp-120, 0x1.85259f60c6699p-624,
     0x1.c0770226edbf5p-799, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d6880d733c7p-291, 0.0,
     0x1.01d989e6d1b9ep-154, 0x1.3181d30bed9dap-943, 0.0, 0x1.0369e812757c6p-513, 0.0,
     0x1.c588227825cf4p-38, 0.0, 0x1.56e9fa4d24845p-588, 0.0, 0.0,
     0x1.5669a775fdb59p-928, 0x1.d457b3a0908c7p-542, 0.0, 0x1.d950526198157p-250, 0.0,
     0x1.a530d7a2bd395p-88, 0.0, 0x1.52c4b3c4ff8abp-87, 0x1.fce1c4b958727p-493,
     0x1.d7df25170a831p-53, 0.0, 0.0, 0.0, 0x1.0ac128e2e95a5p-948, 0.0, 0.0,
     0x1.c3184331976e1p-28, 0.0, 0.0, 0x1.6d2dc353b7494p-204, 0.0, 0.0,
     0x1.14c9d9d01b1a7p-378, 0x1.10301b76691c6p-61, 0.0, 0.0, 0x1.2f9ed32e8bc54p-195,
     0x1.b2264f6beb34fp-9, 0x1.9a2f35422dc7cp-788, 0.0, 0.0, 0x1.da5d5c4a0ef4dp-997,
     0x1.b2c1c440bc563p-781, 0x1.f2af0d314a32fp-1003, 0.0, 0x1.687720fa7d4b5p-452,
     0.0, 0.0, 0.0, 0x1.021b6c682a63dp-755, 0.0, 0x1.09c368f864566p-661,
     0x1.c5b7991e2b97ep-34, 0.0, 0.0, 0x1.b15a6199364f6p-702, 0.0,
     0x1.25bac5467fc3fp-121, 0x1.04fabe24bab45p-200, 0.0, 0x1.a99f45a2b0511p-832,
     0x1.226af9e2f6b8p-513, 0x1.2cf070577fab9p-77, 0x1.5f84f49099156p-627,
     0x1.e57adaf860ca8p-968, 0x1.f86116abf7372p-626, 0x1.17f3cff7f0304p-449,
     0x1.058ca03d519fbp-344, 0.0, 0x1.bd89fb9c46a8p-965, 0x1.0baf95ee82539p-26,
     0x1.45d3fe2139f94p-355, 0x1.387a8980b57fp-278, 0x1.2574dd14d905dp-902, 0.0,
     0x1.a701089e6ae09p-1017, 0x1.3929e96ccc8dep-48, 0.0, 0x1.ffb97406462b2p-214, 0.0,
     0.0, 0x1.c998c3271b96dp-460, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f58938de38cf4p-575, 0.0, 0x1.eb7c28e1e4c09p-417, 0x1.97d50e9587486p-298, 0.0,
     0.0, 0.0, 0x1.ede124686beddp-686, 0x1.9b0f035958858p-785, 0.0,
     0x1.1e7d1388ba3cfp-339, 0.0, 0.0, 0x1.8f9c847d9cfb6p-679, 0x1.20cececca18fep-579,
     0.0, 0.0, 0x1.c647ee6aacdf7p-941, 0.0, 0.0, 0x1.4ec3965eab6b4p-760,
     0x1.1a79605cd68fcp-1012, 0x1.e43396f3646bep-183, 0x1.f3d92456e41c4p-504,
     0x1.12fb185bbc862p-514, 0.0, 0.0, 0x1.a9adb2b797deap-214, 0.0, 0.0,
     0x1.3aebf3e0d1005p-570, 0x1.2e09b9324f8c2p-273, 0.0, 0.0, 0.0,
     0x1.b27f1f171a261p-865, 0.0, 0.0, 0x1.3d9efb0c787bp-968, 0.0, 0.0, 0.0,
     0x1.5b40f2860bcbcp-635, 0.0, 0x1.2b9a550efc779p-800, 0x1.a8e012692923p-925, 0.0,
     0x1.14546b31f89acp-712, 0.0, 0.0, 0x1.4249321cd87e4p-686, 0x1.7f178295a0d5cp-456,
     0.0, 0x1.c1c90a60fd356p-162, 0.0, 0x1.c9360de21c9a2p-652, 0.0,
     0x1.18214ee065a98p-435, 0x1.4a9109c8905cfp-7, 0x1.10d0e18d94c6p-790, 0.0, 0.0,
     0.0, 0x1.a426c9b9dd747p-100, 0.0, 0x1.2050927449324p-125, 0x1.ad99de2b37a3cp-689,
     0x1.19af8739b54a9p-876, 0x1.be6bef989db1ep-390, 0x1.1be3dca6fa7dap-542, 0.0,
     0x1.db15b8420887ep-10, 0x1.fae9bf536b24bp-224, 0x1.c1160d2ccf705p-920, 0.0, 0.0,
     0x1.5c305f8ee0f6fp-623, 0x1.c73ccc6cc298fp-651, 0.0, 0.0, 0x1.079a9070484ecp-344,
     0.0, 0.0, 0x1.0bf788efc36e1p-343, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82c15356d84a5p-100, 0x1.f9eb51dfc3ab1p-53, 0x1.970e72bbfca6bp-771,
     0x1.786be7db2c70dp-628, 0.0, 0x1.96bd286b2a239p-240, 0x1.eabe9622d1b1bp-322, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5d806538f8e9ap-166, 0x1.9672dafc0b178p-284, 0.0,
     0x1.ac1a9f306e01ap-490, 0.0, 0.0, 0x1.b4167d137772dp-32, 0x1.e53992c09a55bp-57,
     0.0, 0x1.dc89e2fd961f2p-123, 0.0, 0.0, 0.0, 0x1.bf9e9673f42eep-305,
     0x1.f76b87eaa5ee8p-156, 0x1.19a40f16fe594p-507, 0x1.29bcb1e8521d8p-151,
     0x1.6dc6701d474a8p-766, 0.0, 0.0, 0x1.e18887b3dbe6dp-72, 0.0, 0.0, 0.0, 0.0,
     0x1.5afcae9a9f959p-456, 0.0, 0.0, 0x1.f12cd2e57249fp-172, 0x1.93785efff4e04p-125,
     0x1.80caaaf9f44acp-43, 0.0, 0x1.13e7dfad9f51dp-682, 0x1.3e08caa5aef64p-96,
     0x1.9471168a9721ep-506, 0.0, 0.0, 0x1.f51ea7c857e94p-972, 0x1.ddcc6d289da99p-857,
     0x1.0f20a979972b1p-485, 0.0, 0x1.6cc1cc3dea9cp-992, 0x1.65a01f82c1809p-328,
     0x1.b5fe1fdda443cp-6, 0.0, 0.0, 0.0, 0x1.7a358697d545bp-218, 0.0, 0.0, 0.0,
     0x1.5db4525d4eba4p-371, 0x1.72bbe7faa2884p-174, 0.0, 0x1.35101912fabc3p-87, 0.0,
     0x1.9a8598e14782fp-257, 0x1.36f29bfe1a615p-1016, 0.0, 0.0,
     0x1.97131fdd9d6a1p-733, 0x1.193411473d662p-197, 0.0, 0x1.84bdaa332bd93p-966,
     0x1.36e803f23082dp-698, 0.0, 0x1.29cb23a8e9bbp-695, 0x1.738b7fa833624p-993, 0.0,
     0.0, 0x1.fb3ae00d54773p-184, 0x1.9c8628b0a6744p-722, 0x1.fd2628f691eacp-184,
     0x1.56f6727fff7d8p-254, 0x1.c9d39edb37d9fp-73, 0.0, 0x1.5829cd886fd91p-602, 0.0,
     0x1.0a6bb07d15603p-163, 0x1.b463a556ee99bp-999, 0.0, 0x1.e6bc1bed337e7p-153,
     0x1.45842838f8991p-3, 0.0, 0x1.caba64a3c5374p-231, 0x1.893ceee4d4332p-715,
     0x1.2012933a879d4p-720, 0.0, 0.0, 0x1.9ffa7d518d02dp-984, 0.0, 0.0,
     0x1.5d4cdafb5a5e2p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e967129bed19cp-713,
     0x1.a92703c64ea33p-250, 0.0, 0.0, 0x1.7d3242ca907fap-578, 0x1.a0b05231582f8p-612,
     0x1.5cc13787755b2p-378, 0x1.2446390e5476cp-766, 0.0, 0x1.f87c721a75614p-29,
     0x1.2ba44797ce8dbp-932, 0x1.570f458b848c2p-648, 0x1.6c292d9c203a8p-47, 0.0, 0.0,
     0x1.29b553379d736p-724, 0.0, 0x1.6ebeda93f2afap-490, 0.0, 0x1.ab7e88c8ac395p-151,
     0.0, 0x1.a6e01053def7ep-791, 0.0, 0.0, 0x1.ea3aa69c93d52p-476, 0.0,
     0x1.a203c4308272dp-953, 0.0, 0.0, 0x1.f2eb00a796e3fp-422, 0.0, 0.0,
     0x1.5a61168668369p-101, 0.0, 0.0, 0x1.d1152b241f325p-497, 0.0,
     0x1.9a7f4d9d83d21p-548, 0.0, 0x1.e1f1050b20d7p-86, 0.0, 0.0,
     0x1.5698128a06e5cp-887, 0x1.a93ef76593a2cp-577, 0.0, 0x1.9d60bc50387f2p-481,
     0x1.b22aafc3f569fp-3, 0x1.190a767a2db6bp-588, 0.0, 0.0, 0.0, 0.0,
     0x1.e2e6006b6f397p-363, 0x1.edc202518803dp-835, 0.0, 0x1.59867ee2d6148p-103,
     0x1.1a561127b2fd5p-788, 0.0, 0x1.5c35299240988p-272, 0x1.f5ab8715f7d5ep-500, 0.0,
     0x1.a7e072e31e53ap-128, 0x1.84afc0543cb7ap-490, 0.0, 0x1.2e0b6505ad8f7p-697, 0.0,
     0x1.80728d99e1fa7p-625, 0.0, 0x1.db32d5d592393p-844, 0.0, 0x1.054febce681f5p-349,
     0x1.315d2d17b103ep-315, 0x1.5bf254e13cfb3p-875, 0.0, 0.0, 0.0,
     0x1.86a785fac0512p-687, 0.0, 0x1.4651621d0811bp-244, 0.0, 0x1.7139269bb0d7ep-406,
     0x1.0fca8cf78f057p-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ce393fc5ffcfp-877,
     0x1.32bb93e37dac7p-392, 0x1.ce5337d232f19p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.9ca8b933abecbp-333, 0.0, 0x1.2a1da73341d57p-399, 0x1.49a7bfaaa2c6ep-780, 0.0,
     0x1.c7b4c8d520f53p-504, 0x1.d82f89f560149p-493, 0x1.b125c4f0a3787p-307, 0.0, 0.0,
     0x1.26297efd7db22p-192, 0.0, 0x1.f6763a2750e2ap-518, 0x1.6e837a3149c42p-288, 0.0,
     0.0, 0x1.7453220ee9acep-454, 0.0, 0x1.d4b96faa35d84p-273, 0.0,
     0x1.fccd1ddf21dbp-532, 0.0, 0x1.d340c613cf3dp-691, 0.0, 0.0,
     0x1.2cd3bab7a135dp-986, 0x1.476337d579a16p-254, 0.0, 0.0, 0x1.66158c6784bdap-985,
     0.0, 0.0, 0x1.554f9e097ab46p-524, 0x1.51d261dc31fe4p-693, 0x1.53dc44bdb1a6p-38,
     0.0, 0.0, 0x1.87129aa2b2054p-826, 0x1.601498000e7b1p-344, 0x1.3384b0605ae02p-956,
     0x1.317764e41fe2cp-720, 0x1.db849b7637dd5p-164, 0.0, 0x1.0c0dbaea151e3p-713,
     0x1.2c2d181b023dbp-648, 0.0, 0x1.041c522ead8f3p-835, 0x1.dc8cdff980a6cp-606,
     0x1.23f9828fdbb1bp-492, 0x1.6f5404d92adc4p-314, 0x1.a68f3f1583839p-131,
     0x1.9f5f31867364ap-241, 0x1.a2a84e09d49eep-670, 0.0, 0x1.76dcaf996e456p-137, 0.0,
     0x1.7631714f38ebep-292, 0x1.1f43c36b07c4ep-834, 0x1.bbf405b02ec0ap-687, 0.0, 0.0,
     0x1.687326266b934p-925, 0.0, 0.0, 0.0, 0x1.bcaec64f3c6ffp-630,
     0x1.660f85fd9cb9p-325, 0x1.c3c982ac8f9d8p-263, 0x1.b3c64ec917765p-927,
     0x1.19ea87360be86p-29, 0x1.f9a00a4fce746p-1018, 0.0, 0x1.ef7443504e2b1p-660,
     0x1.bd5f57a805c43p-532, 0x1.d305ec9544db8p-579, 0.0, 0.0, 0.0,
     0x1.d31acd9785edp-110, 0x1.41dfb3ea399afp-88, 0x1.718ea3c52967p-599, 0.0, 0.0,
     0.0, 0x1.4699f5893c1c6p-365, 0.0, 0x1.3b3eb64e554bbp-57, 0x1.24a578692e404p-846,
     0.0, 0.0, 0x1.91ada17dd2fb5p-394, 0x1.faf19d92efd56p-54, 0x1.6325b7407f0a8p-518,
     0x1.68eff530706d3p-638, 0x1.777eb2aca3272p-62, 0x1.94fac04b2fe5p-279,
     0x1.1b613af5a0f3fp-357, 0.0, 0.0, 0.0, 0x1.178cdb7267304p-453, 0.0, 0.0, 0.0,
     0x1.b5d55bbc2ef78p-185, 0x1.6a4e594c1e9dbp-33, 0.0, 0x1.1b254d08f106bp-683,
     0x1.7e76cf69d500fp-501, 0.0, 0.0, 0x1.e712ddc4c5f0cp-903, 0x1.228b1b374c216p-998,
     0.0, 0.0, 0.0, 0x1.e91a2ca63ad8dp-84, 0x1.bcb1c44835321p-502, 0.0, 0.0,
     0x1.ff2eb62d00ca5p-760, 0x1.460b4069bfbf4p-515, 0.0, 0.0, 0.0,
     0x1.f8e3bd791a8e5p-101, 0x1.82db18b139246p-52, 0x1.f62cceea57073p-964, 0.0, 0.0,
     0.0, 0.0, 0x1.6c6d382b5357p-275, 0.0, 0x1.57c1cf561ab72p-560, 0.0,
     0x1.d998e72e67b1ap-53, 0x1.97af7d97577dbp-218, 0x1.9b5106443647ep-74,
     0x1.80bc888903eefp-581, 0.0, 0x1.d7b6f38634e9bp-51, 0x1.5cd23ffe2b199p-617,
     0x1.e0cb57d5bb9f2p-26, 0x1.af9021255be12p-212, 0.0, 0.0, 0x1.1f24cad7a16b2p-621,
     0x1.ac1da3a971c7ep-781, 0x1.31b88de55bda1p-648, 0x1.1c2c55e364101p-930, 0.0,
     0x1.f30a2cbe9856ap-972, 0x1.ba033e57ffb96p-875, 0x1.b2d329a5a9878p-663,
     0x1.53b52bdd55a24p-67, 0x1.ea12ff2888e77p-178, 0.0, 0x1.fd704bcb52f99p-710,
     0x1.a58ca74fcd10ap-292, 0.0, 0x1.5c1d10ec519c7p-229, 0.0, 0x1.b84d9c5340a46p-339,
     0x1.2eb6e6c58fc19p-315, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba9d8d80b82fep-415, 0.0,
     0x1.faa26b4a4959ep-685, 0.0, 0.0, 0x1.2fd512c684123p-65, 0.0, 0.0, 0.0,
     0x1.898328deee037p-341, 0.0, 0x1.843bc0c3c377dp-43, 0.0, 0.0, 0.0,
     0x1.f725af1d8356fp-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e2d58f6df38fap-607, 0.0, 0x1.63913758e5df1p-432, 0.0, 0.0,
     0x1.d382d5365c5e4p-500, 0x1.b847bdbff0ea3p-884, 0.0, 0x1.a26ba932afa1cp-176, 0.0,
     0x1.e32ac3a01d57p-175, 0.0, 0x1.7021e22e79c8p-486, 0x1.4a7e41c2c2473p-131,
     0x1.b0927e2220024p-561, 0x1.c9c668b74499bp-838, 0.0, 0x1.101538a2d8851p-202, 0.0,
     0x1.9b23dacf0e4d7p-216, 0x1.ac7575fbd73bp-849, 0.0, 0x1.60b0fcdb37d72p-798, 0.0,
     0.0, 0.0, 0x1.1d0710218156fp-651, 0.0, 0x1.a6a39878da9a7p-822, 0.0,
     0x1.d70c14ae3a9e6p-444, 0x1.316c4d71d368bp-8, 0x1.8e43b62d14f56p-439, 0.0,
     0x1.0a05c3e4f7b06p-126, 0x1.a61a5fc91a44ep-129, 0.0, 0x1.3863cefd6f6cdp-812, 0.0,
     0x1.15ec5b6925e5ap-689, 0x1.7f38d1d7e905fp-884, 0x1.56dac7e02a51bp-331,
     0x1.d2f790ea9750bp-40, 0x1.4c9a8813441c7p-243, 0.0, 0x1.d36f79de37476p-17, 0.0,
     0.0, 0x1.2156d103356cfp-335, 0x1.31718501a0931p-50, 0x1.a4e53d75e447dp-146, 0.0,
     0.0, 0.0, 0x1.8ed17c87dd201p-953, 0.0, 0x1.8a5eda1ef4ce4p-989, 0.0, 0.0, 0.0,
     0x1.a1dc3fd7a9caep-403, 0x1.f003b383d3227p-751, 0.0, 0.0, 0x1.198b0e12664afp-795,
     0.0, 0x1.78552b3492f99p-397, 0x1.8bf35b0a6c04ep-6, 0.0, 0.0,
     0x1.09de824cb7f5bp-899, 0.0, 0x1.b61d3a052baa3p-650, 0x1.45f489421f37dp-694, 0.0,
     0x1.162c15f2cd957p-861, 0x1.1cdadc144436cp-723, 0x1.61942d88c65eap-280,
     0x1.2d447a060f122p-86, 0.0, 0.0, 0.0, 0x1.f54fc837fe16cp-795,
     0x1.b8b39794c5e5cp-606, 0x1.6c4bce7b64391p-1004, 0.0, 0x1.0ed987be89fefp-6, 0.0,
     0.0, 0x1.66bf88613e67fp-168, 0x1.24d9728f98202p-538, 0.0,
     0x1.bdf2e8a31cf66p-1004, 0.0, 0.0, 0.0, 0x1.faf186910d03cp-182,
     0x1.c9d324573f95p-893, 0x1.bb57e11801297p-251, 0x1.e24270a68f151p-452, 0.0,
     0x1.be39765aa6cd1p-1014, 0.0, 0.0, 0x1.d690392702c4bp-560,
     0x1.e001aff5de9b4p-657, 0.0, 0x1.4207d0266953dp-313, 0x1.c480294ca5f61p-478,
     0x1.6cbdf6f3b4e2bp-122, 0.0, 0.0, 0x1.4d40dc171afb3p-847, 0x1.2b08f62dfbe23p-611,
     0x1.8b39fddb40589p-935, 0.0, 0.0, 0x1.f2ea36bad61fbp-425, 0.0, 0.0, 0.0, 0.0,
     0x1.148020e09f4cep-12, 0.0, 0x1.4e74fd5588d0dp-659, 0x1.ad62baf209dcfp-145, 0.0,
     0.0, 0x1.dc8fc9be94cf7p-515, 0x1.276e0c929a8dep-733, 0x1.ba581b0530325p-480, 0.0,
     0.0, 0x1.cf6aa56b9cdf1p-731, 0x1.18410a80c676cp-367, 0.0, 0.0,
     0x1.0cf6aca026ae8p-685, 0x1.17dc89bf92e19p-824, 0x1.b8e611baa8539p-795,
     0x1.8584321a53826p-12, 0.0, 0.0, 0.0, 0.0, 0x1.aac6bf0e1038ap-810, 0.0,
     0x1.1cc230b2401a8p-864, 0x1.337714aaad924p-550, 0x1.2f33bb7741eabp-164, 0.0,
     0x1.91f10b4c9580cp-706, 0x1.7abdb3038b5bp-265, 0x1.fe67be8a3384fp-226,
     0x1.a18f7d4897119p-168, 0.0, 0x1.bf6fc047eee7bp-654, 0.0, 0x1.3afe3a46eba49p-293,
     0.0, 0.0, 0x1.17d48fde7f693p-219, 0x1.e0cef0f13d0fbp-159, 0x1.fa24c5314ba0dp-332,
     0.0, 0.0, 0x1.5c8923b71959ep-452, 0.0, 0x1.3a0fb1737bfcdp-965, 0.0, 0.0, 0.0,
     0x1.f001c815ef68ep-393, 0x1.da391e3237788p-938, 0.0, 0.0, 0x1.5c2b4247b122cp-859,
     0.0, 0.0, 0.0, 0x1.f9fe449b2472cp-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e45ba4cbe6e2ep-68, 0.0, 0x1.c1ee07caf0148p-990, 0.0, 0x1.b0e09e83e0aafp-957,
     0.0, 0x1.3f0ed9d8a094ap-103, 0.0, 0x1.2e9ee130f9ac9p-307, 0.0, 0.0,
     0x1.cb97c2cce3bcfp-60, 0.0, 0.0, 0x1.064c127c6b663p-586, 0.0, 0.0, 0.0,
     0x1.b97534bc2b401p-665, 0.0, 0.0, 0.0, 0.0, 0x1.90d1b024aa5ddp-451,
     0x1.39a2d1091716dp-249, 0.0, 0x1.7d0ae5915b3edp-725, 0x1.2414c5088eb23p-39,
     0x1.d965569e68d9ap-665, 0.0, 0x1.44f284ba37f32p-348, 0.0, 0x1.e984642287749p-618,
     0.0, 0.0, 0.0, 0x1.fd2d66f2db8d6p-878, 0.0, 0.0, 0.0, 0.0,
     0x1.2aa417965caf3p-453, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2e4cce2749a8p-257, 0x1.7932e20252872p-366, 0.0, 0.0, 0.0, 0.0,
     0x1.85cc6c1fb5232p-598, 0x1.7d6b75d10b84fp-511, 0x1.f7e481b05c9f3p-998,
     0x1.461a47d51fae9p-464, 0x1.4b21417beb4dbp-288, 0x1.6e5f1fa5d868cp-770,
     0x1.5164ecd8338b4p-109, 0.0, 0.0, 0.0, 0.0, 0x1.aa8c7358803a7p-933,
     0x1.ec8556bfeca08p-465, 0x1.ac2c34457ed04p-508, 0x1.85534268eb85ep-886,
     0x1.d3a0a8368fae5p-716, 0x1.c75a823dfddaep-685, 0x1.419e5171c010cp-246,
     0x1.73a61620f6cd2p-774, 0.0, 0x1.a5206e6d3e0cdp-741, 0.0, 0x1.63502ddb7aaefp-882,
     0x1.8553052a2d079p-490, 0.0, 0.0, 0.0, 0x1.5420c2ca94a4dp-726,
     0x1.bd37fbc4e669ep-903, 0.0, 0.0, 0x1.4842e1bf633c5p-903, 0.0,
     0x1.76267dd9fcd34p-108, 0.0, 0.0, 0x1.90e284a15d27p-40, 0.0,
     0x1.868268a7f9041p-261, 0.0, 0x1.bd9f3c2e3b1p-97, 0x1.d2b6ef20e2678p-234, 0.0,
     0x1.a8ec84150cee6p-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e57ea6dc1a565p-7, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6d16da141b758p-653, 0x1.c03f084f753e4p-202, 0.0, 0.0,
     0x1.bf5e078a54501p-543, 0x1.e367e6eac863fp-635, 0x1.8372b01357ec7p-887,
     0x1.7863c8eec1016p-333, 0.0, 0.0, 0.0, 0x1.2243133646472p-405,
     0x1.635c4376e8c2fp-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.964598f9d0153p-494,
     0x1.62534d72ba9fp-745, 0.0, 0x1.e3027b31a7c8cp-307, 0x1.cf9fe27228e2ap-585, 0.0,
     0.0, 0.0, 0x1.0cd2f1ea9408cp-159, 0.0, 0x1.a7cf8788217c2p-242, 0.0,
     0x1.8732c6ea35d58p-166, 0x1.d975f73e57b11p-247, 0x1.4e81f0111abd9p-33,
     0x1.cd0b50d82bf06p-259, 0x1.ce9c26540f44bp-532, 0x1.b6e654b5efe95p-1003,
     0x1.66667e864069p-201, 0x1.051d43d003ec5p-677, 0x1.94b72652fee82p-261, 0.0, 0.0,
     0.0, 0.0, 0x1.6337d3bd8cbf4p-4, 0x1.49b582196c03p-873, 0x1.d9e0e3548eb69p-658,
     0.0, 0x1.f9926ab5b0c51p-1017, 0x1.f858a44a170bfp-514, 0.0,
     0x1.b9106cb652338p-461, 0x1.abaa2ee79a82fp-428, 0x1.0f242fb585db7p-467,
     0x1.d2e1d1f1a049ap-558, 0x1.93a7629a09d4ap-441, 0x1.3145eb17b5037p-969, 0.0, 0.0,
     0.0, 0x1.b0492ef82309ap-222, 0.0, 0.0, 0x1.f23ff6e6aaeafp-535,
     0x1.836f1d03c8362p-203, 0x1.df4867e3b533fp-382, 0x1.d0d0873d1e272p-907,
     0x1.ad573d3d3f72p-458, 0x1.fbdd6d0b247b1p-149
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
            tmp1 = erf(tmp0);
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
    printf("erf %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("erf bench acc %la\n", global_bench_acc);
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
