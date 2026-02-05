/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pd1_u10purecfma.c --function \
 *     Sleef_finz_log1pd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.b53bcfb8a5e48p-1011, 0.0, 0x1.8a0524599302p-293,
     0x1.85acc8d72acd2p-948, 0x1.518db6a72bcedp-55, 0.0, 0x1.c9939ed9346dcp-53,
     0x1.4b48337d3fd8cp-241, 0x1.9ad08c4672b0ep-151, 0x1.8f7de3eff8a7ep-802,
     0x1.e5fd2ae07fa86p-618, 0.0, 0.0, 0x1.8d3775530280ap-591, 0.0, 0.0,
     0x1.87f5b882a7b2dp-801, 0.0, 0.0, 0.0, 0x1.992ab96772157p-61,
     0x1.359cb4a181d97p-912, 0x1.117784568d395p-959, 0.0, 0x1.be8cef9bcf624p-550, 0.0,
     0x1.504ed60d0e337p-462, 0x1.8498f492a6563p-51, 0x1.8f8fc693f9096p-569,
     0x1.eb49b931773b5p-719, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff9029bbb0eacp-375, 0x1.93474e9682706p-68, 0x1.aa1fe194437ccp-89,
     0x1.dcd240ad39de6p-816, 0x1.80d54adbf4daep-943, 0x1.bc17a634d7239p-936,
     0x1.9fdc110b296cfp-268, 0.0, 0x1.c260d6e783565p-7, 0.0, 0x1.67ee57add70f7p-114,
     0x1.a415799843f7p-160, 0.0, 0.0, 0.0, 0x1.0afaa7eb97e87p-180,
     0x1.34bb81e09b2b7p-596, 0.0, 0x1.014a0182be488p-710, 0.0, 0x1.774fc8522f60ep-771,
     0x1.de1c65b55c4fdp-250, 0.0, 0.0, 0x1.7d4ff54690c9cp-839, 0x1.0d8d617654424p-123,
     0x1.708a0efc538dfp-273, 0.0, 0.0, 0.0, 0.0, 0x1.4d913a6b7289ep-184, 0.0,
     0x1.e07ea9288c78ep-105, 0x1.b1856f88d9d5bp-517, 0x1.0cb3aa220154dp-402, 0.0, 0.0,
     0.0, 0.0, 0x1.716176bc7366bp-863, 0x1.02c915b5bafffp-522, 0.0, 0.0,
     0x1.e15ab91441019p-509, 0.0, 0x1.e14478b448432p-433, 0.0, 0x1.29827b452192ap-626,
     0.0, 0x1.a9cc4d45ccd1cp-107, 0x1.dddac15eb00cfp-722, 0x1.31d3e435f5ab6p-520,
     0x1.8cf4062827696p-340, 0.0, 0x1.7dd7699fd1d8cp-511, 0x1.710fff629146ep-934, 0.0,
     0.0, 0x1.c17b8c0392a2bp-845, 0x1.d55d4933cc39cp-607, 0.0, 0x1.a34b62c6f073ep-132,
     0x1.85aa3b31da89fp-285, 0x1.fe2e52bf4bb13p-354, 0.0, 0.0, 0x1.e4fe627193749p-316,
     0.0, 0.0, 0x1.2c0a5ea783335p-428, 0x1.ca30964d775bp-887, 0x1.b7abcf57b071ap-630,
     0x1.ac71d6c921b7ep-815, 0.0, 0x1.f471ee70a5106p-871, 0.0, 0x1.db6a0e75bc4f6p-270,
     0.0, 0x1.aa08c687cf46dp-162, 0x1.73b69ac36b54ep-257, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.99c9946f67a42p-377, 0x1.0c3667118dc0bp-561, 0x1.1c13246eed633p-148,
     0x1.f24e8a0c9fc95p-1011, 0.0, 0.0, 0.0, 0.0, 0x1.3f63b4ce9f6b9p-301, 0.0, 0.0,
     0x1.c142448895733p-544, 0x1.d96f4f16e4e49p-396, 0x1.222fd5293c4f1p-394,
     0x1.e183a63af931fp-199, 0x1.778e13deec937p-15, 0.0, 0x1.ce48e7dc33b21p-331, 0.0,
     0x1.674e9b7446534p-507, 0x1.4b1498ebc11f5p-308, 0x1.6d92ab90a804cp-719,
     0x1.e5ce8219f2e6fp-172, 0.0, 0.0, 0.0, 0.0, 0x1.53110651c49dep-750,
     0x1.34e1c0e32686cp-209, 0.0, 0x1.4d1f0bafb8a48p-430, 0.0, 0x1.3f54b220623c4p-118,
     0x1.2e223c913f2cp-574, 0.0, 0x1.81e01b4cbe6dep-700, 0x1.ae8d6cb64edbbp-839,
     0x1.2ff5dbc4d1d23p-462, 0.0, 0x1.d7e5ea0abfa13p-337, 0x1.9d331520847c7p-781, 0.0,
     0x1.c1002ff317578p-769, 0x1.076dd173e8b47p-422, 0x1.e5c3734421bedp-778,
     0x1.4d353a96c4ad3p-924, 0x1.a4a84a423da18p-726, 0.0, 0.0, 0.0,
     0x1.f69722ea991a5p-272, 0.0, 0x1.67f4fe14097f8p-873, 0.0, 0.0,
     0x1.9677fc11694b6p-16, 0x1.6fd568adfc6dep-366, 0.0, 0.0, 0.0,
     0x1.b63012b53d4d3p-1016, 0x1.9197ed3ad9f13p-697, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ace569aa141ap-502, 0x1.0d9a80ffd7cafp-464, 0x1.5afb2b3fe64ddp-84, 0.0, 0.0,
     0x1.064f23fb5d58ap-977, 0.0, 0.0, 0x1.77fdb4ecb5decp-317, 0.0, 0.0, 0.0,
     0x1.81693cdfcc6e6p-806, 0x1.37e81f9e46928p-499, 0.0, 0.0, 0x1.e645804973b36p-204,
     0x1.90d142db6a36p-461, 0x1.363e066ee6e48p-446, 0x1.69ef8fc6c77dap-276,
     0x1.d6522792db04dp-587, 0x1.b42c9cf84a2ddp-726, 0x1.04ae8d5e30563p-789, 0.0,
     0x1.7647b0a60b062p-866, 0x1.f07f2e2405a43p-994, 0.0, 0x1.57e1ec6f74498p-298,
     0x1.3a96425fe07ap-50, 0x1.9a380b2e60427p-317, 0.0, 0.0, 0.0, 0.0,
     0x1.5fb64d14e12b2p-958, 0.0, 0.0, 0.0, 0.0, 0x1.7e972283b5065p-253,
     0x1.c6e99a9bb30f8p-991, 0x1.8d5e5b3fdf187p-255, 0x1.1076c767a1145p-373, 0.0, 0.0,
     0.0, 0x1.a3c64dfa41239p-41, 0.0, 0x1.d564009e9c9e8p-48, 0.0, 0.0,
     0x1.24b22a933860ap-560, 0x1.4a3834b26467dp-951, 0x1.7f760198e854bp-153,
     0x1.03b024187431fp-341, 0x1.7f61a41dbf434p-1021, 0.0, 0x1.241e1f56a1cep-390,
     0x1.2dbb42ce6c69bp-257, 0x1.ac3cde0dd48b5p-131, 0.0, 0.0, 0.0,
     0x1.14a0798956b25p-572, 0x1.8c5ea3f78191p-192, 0x1.bec50dd5d17ffp-430, 0.0,
     0x1.7320ce0a88879p-632, 0.0, 0.0, 0x1.8d6fd49f2aceep-454, 0.0,
     0x1.64f733904c82ep-805, 0.0, 0x1.6c901a4c3225ap-902, 0x1.a3ab93028a4e6p-466, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31dfea7ca4ab9p-1000, 0.0,
     0x1.e16d2e1cf74cbp-463, 0.0, 0x1.e6a799bff242dp-952, 0x1.81659c2193932p-906, 0.0,
     0.0, 0x1.8b5bf683ff238p-155, 0x1.76f2f06d2a19p-181, 0x1.1d4edab76ac5dp-833,
     0x1.3fc24a791d03ap-700, 0x1.8c29463087eeep-797, 0x1.2a2bf3bbf4a5bp-947, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9c81d32b881ap-249, 0x1.3d124641fb9d9p-599,
     0x1.a726c33f1571cp-70, 0.0, 0.0, 0x1.d60e8f4fc9aap-675, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff1ed97130e4bp-31, 0x1.414f27a616e8bp-854, 0.0, 0x1.95fcc0ff87affp-458, 0.0,
     0.0, 0.0, 0x1.39994aed9cde5p-170, 0.0, 0x1.9ce97da85076dp-467,
     0x1.a3401a2fb8efap-388, 0.0, 0x1.767065953c541p-20, 0x1.380756821fd27p-511,
     0x1.5adcbcd35d369p-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.777ec76befdb9p-794, 0.0,
     0x1.a2f625b818626p-59, 0x1.d9094d617734cp-187, 0x1.f245319f796c2p-334,
     0x1.0af4cf9308afcp-771, 0.0, 0x1.f4527e26e4477p-775, 0.0, 0.0, 0.0, 0.0,
     0x1.62b2b79e83dd3p-311, 0x1.f1bcd4366c318p-865, 0x1.9236290b6e9f9p-620,
     0x1.d025afe346ed2p-553, 0.0, 0x1.353b995870f6bp-940, 0x1.a23540cd4da02p-926, 0.0,
     0x1.3b8a402b4fb29p-809, 0x1.c7157f2940c3ep-100, 0x1.16ce2ae80c81ep-975,
     0x1.33f53d82fda46p-102, 0x1.003f0dbd192c8p-606, 0.0, 0.0, 0x1.75a9dfac2a65bp-241,
     0x1.7f8be403aa5d3p-561, 0.0, 0.0, 0.0, 0x1.eee708fddbfd3p-119, 0.0,
     0x1.750cc5e433142p-948, 0x1.b227c1f2b9059p-63, 0x1.653620e5915ebp-278,
     0x1.513485054162cp-896, 0x1.ace5595665c94p-551, 0.0, 0x1.10eaf5930b953p-513, 0.0,
     0.0, 0x1.e1c876ad995f8p-107, 0.0, 0x1.936f55a6a5cc8p-454, 0.0,
     0x1.c9a20f59f6631p-309, 0.0, 0x1.ed7d9cc1be317p-66, 0.0, 0.0, 0.0,
     0x1.162a024b8815dp-509, 0.0, 0.0, 0.0, 0x1.6de3ca5ca48bp-510,
     0x1.0733cfbbdcb01p-474, 0.0, 0.0, 0.0, 0x1.9a46edfcfd7f4p-598,
     0x1.8c30c6df3d828p-280, 0x1.e45a46a3579bdp-915, 0.0, 0x1.22ba84ac913f5p-134, 0.0,
     0.0, 0x1.6f22b5ca22c15p-762, 0.0, 0x1.ed716363fc3p-414, 0x1.b873fd6ee75ecp-705,
     0x1.b2db60446cc1bp-349, 0.0, 0x1.d7538124aecp-807, 0x1.f793a82936af6p-99, 0.0,
     0x1.49350b24a165cp-965, 0.0, 0x1.4630d2265cfe5p-960, 0x1.1a4a18934aef3p-544, 0.0,
     0.0, 0x1.53b1860685935p-718, 0x1.a2ad3fb7e3db5p-605, 0x1.b24e4dfbbcdbbp-964,
     0x1.13988146f19bep-98, 0x1.b53e9c67760d6p-463, 0x1.4c245c2443df4p-674, 0.0, 0.0,
     0x1.efa50af3f4f41p-871, 0x1.56ce92f604f8ap-123, 0.0, 0.0, 0x1.53b45c8c75853p-684,
     0.0, 0x1.94a34b5c49408p-239, 0.0, 0x1.f619604524b0cp-515, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d8feb5a142cb5p-227, 0x1.f56b9c6250009p-720, 0x1.521c27c392d42p-325,
     0.0, 0x1.4a58cd312219ap-546, 0.0, 0.0, 0x1.838c4c1514929p-434,
     0x1.9bba3d1d72fb1p-55, 0x1.07fccb0c4caap-821, 0x1.d443961b45e5ap-954,
     0x1.2f07767c69212p-1018, 0.0, 0x1.7012a2291da9p-455, 0.0, 0.0, 0.0, 0.0,
     0x1.96c4ffdc2e891p-278, 0.0, 0.0, 0x1.e276a142d3b1p-4, 0.0,
     0x1.be206715bdeap-999, 0x1.6660d48b8d453p-357, 0x1.829eaf911228fp-177, 0.0,
     0x1.a7d9e79e95504p-702, 0.0, 0.0, 0x1.3b92073f46932p-260, 0.0,
     0x1.7c7b6321b55d5p-570, 0x1.6dd9837acef7ap-352, 0x1.fc01b3ca3b1d4p-858, 0.0, 0.0,
     0x1.3ec07efb0f726p-241, 0.0, 0x1.98f0eebf287ep-997, 0.0, 0.0, 0.0,
     0x1.023abc84c825ep-298, 0.0, 0x1.e8f1b1441f689p-617, 0x1.a1444f471273dp-675, 0.0,
     0x1.979e2520056d2p-586, 0.0, 0.0, 0.0, 0.0, 0x1.460720c85be1p-563,
     0x1.627d86c4a9b48p-56, 0x1.c80799fc98207p-653, 0.0, 0.0, 0.0,
     0x1.b50f607e86248p-502, 0x1.2b8ec26d0656ap-865, 0x1.802f524f8e031p-865,
     0x1.b528b22a962bap-580, 0x1.8c2111d0f3beap-405, 0.0, 0.0, 0x1.2f2b823632023p-430,
     0x1.62a3be2293205p-456, 0.0, 0x1.19839423b2d24p-1018, 0x1.be8e207fc924fp-602,
     0x1.f598adb9cc647p-67, 0x1.8c938e1f2bcd1p-626, 0x1.457fc2f292b77p-188,
     0x1.22e8b6122865fp-593, 0x1.d1a1bfd42b368p-1018, 0x1.f0795ec47d2b4p-570, 0.0,
     0.0, 0.0, 0x1.327836ec55ff4p-679, 0.0, 0.0, 0.0, 0.0, 0x1.cfcf018e10c18p-48, 0.0,
     0.0, 0x1.80e3d5e9e9753p-10, 0x1.56f1d58ce1644p-228, 0.0, 0x1.81c0cbab8db9p-992,
     0.0, 0.0, 0x1.326d9e027110bp-498, 0.0, 0.0, 0.0, 0x1.256d054a9267fp-582,
     0x1.e719890915581p-385, 0x1.bfc62c7000998p-831, 0.0, 0x1.f4bff7dbbe7cfp-26, 0.0,
     0x1.c54f4d2c70bd5p-1020, 0.0, 0x1.c119dcda58969p-684, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.abc6ff4df59f3p-533, 0x1.c857f272d4c2fp-784, 0x1.d982fbfa43e0ap-222,
     0x1.19e7353d7b444p-287, 0x1.16df1df8e8a49p-882, 0.0, 0.0, 0x1.94bed39902d54p-598,
     0x1.de589ea62c777p-238, 0x1.f26d46cf910b3p-374, 0.0, 0.0, 0x1.1be5dbfad64e5p-948,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.976d2854b1bbap-95, 0.0, 0x1.ec55eebe7268fp-607,
     0x1.111075cbc7e4bp-279, 0.0, 0x1.975e1a037247ap-993, 0x1.0cb38e9c4cf07p-131,
     0x1.177496b376bdfp-709, 0.0, 0x1.cf76d89dbd016p-829, 0.0, 0.0,
     0x1.8dc6b4fdf7cc8p-754, 0.0, 0.0, 0.0, 0x1.e28e4312a39cdp-699,
     0x1.eecf9a1d28144p-76, 0x1.139b1b1e102a6p-466, 0x1.ed82699719553p-931, 0.0, 0.0,
     0x1.f8465ac51b458p-823, 0.0, 0.0, 0x1.6c3fce76cf917p-493, 0x1.a1860275c03bcp-279,
     0.0, 0x1.e17b13a7d905bp-175, 0.0, 0.0, 0.0, 0.0, 0x1.567bc079dca2dp-650, 0.0,
     0x1.44ef7e209d8acp-941, 0.0, 0x1.c346698dd7b32p-456, 0x1.2b11393cad3f4p-550,
     0x1.4b4e32bf701bp-826, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36b5f87c783e8p-305, 0.0, 0.0,
     0.0, 0x1.7d4ae4371fa71p-234, 0x1.8122c95d545b9p-309, 0.0, 0x1.0a66f6439bb8cp-562,
     0x1.895502bcc13bp-919, 0x1.7078fe610bf88p-795, 0.0, 0x1.9258f841a3b9cp-213, 0.0,
     0x1.e36a11c4d7d91p-51, 0.0, 0.0, 0x1.dda716b8744cfp-326, 0.0,
     0x1.97aeb3da6b1e4p-281, 0x1.857000b527201p-540, 0x1.3878e526bd2b6p-879, 0.0, 0.0,
     0x1.bf637d8ab367cp-993, 0x1.ea47017f1517ep-148, 0.0, 0.0, 0x1.aec012e739924p-485,
     0.0, 0x1.298b2c9139df2p-546, 0.0, 0.0, 0.0, 0x1.3b86210c22f1p-231, 0.0, 0.0, 0.0,
     0.0, 0x1.932668d7228bap-554, 0x1.30d081df5dc98p-617, 0.0, 0.0, 0.0,
     0x1.22c696815d513p-793, 0.0, 0x1.5cb45ee992dd6p-330, 0.0, 0x1.458df6d44f959p-36,
     0x1.4a1bf3b4fd12dp-110, 0x1.0658b0822eb3fp-278, 0.0, 0x1.3d0c52f21b647p-374,
     0x1.532373c62f855p-485, 0.0, 0x1.32c5af8763d7dp-202, 0.0, 0.0,
     0x1.6b136510ac4b7p-423, 0.0, 0.0, 0x1.f81098215de6bp-955, 0x1.6f224adb9f208p-375,
     0.0, 0x1.a489cd91cbaa5p-424, 0.0, 0x1.dc532b37ed079p-219, 0.0, 0.0,
     0x1.b2c744010b7ccp-951, 0x1.8dd7ef05dd067p-479, 0.0, 0.0, 0x1.02f7c29f33caep-113,
     0.0, 0x1.49bf7784e745ep-562, 0x1.b6ced1759960ep-297, 0x1.687dd2fac1ef7p-1011,
     0.0, 0x1.cd58f5d46bb5bp-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53980f0a4de86p-90,
     0x1.72ebce1f16ca7p-277, 0.0, 0x1.f14cdfe7876f5p-67, 0x1.c414e296725dcp-783,
     0x1.ad219c150f77ep-400, 0x1.b778887a7ced2p-244, 0.0, 0x1.cc46515effefdp-347, 0.0,
     0x1.8b4b3033350a3p-100, 0x1.a91a53d886064p-186, 0.0, 0.0, 0.0,
     0x1.3548ad6ca1975p-258, 0.0, 0.0, 0.0, 0x1.9ea68371535cdp-185, 0.0, 0.0,
     0x1.c6a39d14e0eabp-329, 0.0, 0x1.b81cd6caadc7dp-896, 0x1.3375f8a293a84p-55, 0.0,
     0x1.ecc5e5651a2f3p-900, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.37118a0850144p-451,
     0.0, 0.0, 0.0, 0x1.a3d3383a6c6d3p-686, 0x1.2d9269a53823bp-899,
     0x1.a69c2cc8df2b9p-833, 0.0, 0x1.9c40011729323p-995, 0.0, 0x1.b7544406c5fbbp-903,
     0x1.653d36319f84dp-554, 0x1.9d80d641ea074p-359, 0x1.3228bff67dc04p-1002,
     0x1.b15023e2a1df3p-537, 0.0, 0x1.1e2e1573e373fp-579, 0.0, 0.0, 0.0,
     0x1.ee0d06ffae77fp-730, 0.0, 0.0, 0.0, 0x1.44dc2f75104e9p-209, 0.0,
     0x1.ff95950b2004cp-219, 0x1.e45257d525049p-53, 0.0, 0.0, 0x1.7e118a145f5bdp-972,
     0.0, 0x1.28da6ebbefef8p-700, 0.0, 0x1.6f90794e993a7p-599, 0.0,
     0x1.313f702b20dd5p-59, 0x1.b4961f5328f28p-500, 0.0, 0.0, 0x1.fc3138e0528d7p-86,
     0.0, 0.0, 0x1.0bc2f0d54d5b4p-97, 0.0, 0x1.251ef03df9095p-233, 0.0, 0.0,
     0x1.87340da7dd71ep-124, 0.0, 0x1.8437b2ad63a2ep-755, 0.0, 0.0,
     0x1.19d930d0f6e94p-624, 0.0, 0.0, 0x1.1c3152cc8ed27p-29, 0x1.56de490710e78p-170,
     0.0, 0.0, 0x1.0130ff3253254p-680, 0x1.1894bf3ed44ecp-513, 0.0,
     0x1.dfeb1fc414412p-267, 0.0, 0x1.e7f63eef620cfp-682, 0.0, 0x1.8600988fe3f67p-822,
     0.0, 0.0, 0x1.ab77ae6a3d713p-919, 0x1.d1f175baabcbbp-128, 0x1.4b8a97fcaedfap-996,
     0.0, 0.0, 0x1.eb122c00d1cfp-837, 0.0, 0.0, 0.0, 0x1.a4e0b89fb77dbp-699,
     0x1.1d61cb27abf6ap-812, 0.0, 0.0, 0x1.44581171d9a33p-98, 0.0,
     0x1.02b95ede2d388p-776, 0.0, 0x1.50924a734fb5dp-300, 0x1.aa8a41bdfa3bep-497, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9405a236e50e8p-668, 0.0, 0x1.e7bfb2a2a8d03p-710,
     0.0, 0.0, 0x1.6b1ab79b0182dp-518, 0.0, 0.0, 0.0, 0x1.155676c25b0a1p-394,
     0x1.769cee7a01367p-639, 0x1.d56d39d20aaa9p-330, 0x1.2b1514ca788f7p-420, 0.0, 0.0,
     0.0, 0.0, 0x1.30baf51026d3ap-622, 0x1.d33aa653f5717p-444, 0x1.84207cbb75558p-614,
     0.0, 0x1.e13fbf286ac7bp-936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45a8336e1aeaap-456, 0x1.3ffaa84cb5d75p-1004, 0x1.f90471641b647p-278, 0.0,
     0.0, 0x1.8c01b8662f1fdp-519, 0x1.65bc9154425fp-450, 0x1.edc89c44a6f8dp-78,
     0x1.687e70f1de4dap-924, 0.0, 0x1.7e78e9a461ccbp-345, 0.0, 0x1.f54eead566256p-341,
     0x1.289f2f7c2d9a8p-276, 0x1.9220dfb70deaep-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.17dbcad0e5a83p-465, 0.0, 0x1.72e82157411ep-144, 0x1.5b20c98b8c86dp-628,
     0x1.63d2f4ce86a04p-755, 0.0, 0x1.1b38bba5c0b33p-128, 0.0, 0x1.c544fc39ec55dp-22,
     0x1.86190f0c93bd1p-184, 0x1.77bd4131a703dp-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.628870cd89c98p-853, 0.0, 0x1.7f5e146f75d52p-630,
     0.0, 0x1.d413220b20985p-141, 0.0, 0.0, 0x1.3f56edee55cf1p-791,
     0x1.431627e59d53ap-866, 0x1.b4624163b0907p-380, 0x1.06f825144bf2ap-304, 0.0,
     0x1.11f3eeb3838ebp-896, 0x1.f6d2f41ab488dp-414, 0.0, 0x1.9b5495a741a5fp-644, 0.0,
     0.0, 0x1.4460289fe2e77p-252, 0x1.f97bc4a210077p-440, 0.0, 0x1.352c71eed1193p-153,
     0x1.7300c2bdcf7c5p-314, 0.0, 0x1.1b3ab159f6d26p-477, 0x1.7771a7eed3071p-569, 0.0,
     0.0, 0x1.1ccfcf1aa1d21p-97, 0x1.13b7baaf5baa9p-702, 0x1.ae35a3aabc2f6p-633, 0.0,
     0x1.8a7496520823dp-133, 0x1.804744db756bp-630, 0.0, 0x1.ecf8f09486347p-453, 0.0,
     0x1.f3261e0ff4d6ap-761, 0x1.30dda91be69a1p-464, 0x1.fa751124e8b3ep-923,
     0x1.2e167e280652cp-688, 0x1.65efc0da5d7d9p-973, 0x1.4e4b1c9fbfb6bp-114,
     0x1.68f7abe17b49cp-689, 0x1.f70c5c80edfbfp-817, 0.0, 0x1.79d20ad82fa43p-820, 0.0,
     0x1.f2c5b834528cdp-771, 0x1.b84d506de697ap-780, 0.0, 0x1.855a43bbe8dcbp-992,
     0x1.818fa44d96023p-100, 0.0, 0x1.cf47eee29e0ddp-625, 0.0, 0.0, 0.0, 0.0,
     0x1.260bb5fcfa395p-751, 0x1.09d9d1965cfa6p-684, 0x1.c1f0ed83a7348p-94, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.421afe49f528ep-311, 0.0, 0x1.3bde2340ba274p-612,
     0x1.44e617fbc4ce1p-743, 0x1.ee60777ad8bb3p-200, 0.0, 0x1.7d38b81b9ac2ep-535, 0.0,
     0.0, 0.0, 0x1.4df1b1324840ap-927, 0.0, 0.0, 0x1.283b367a1845ep-540,
     0x1.6e38f0a08d289p-527, 0x1.8b7e7a0ad34d5p-414, 0x1.00244146e8e54p-320, 0.0, 0.0,
     0x1.5e227c96fe3b9p-432, 0x1.4a0b492f34a1ep-160, 0.0, 0x1.2b66ddd5c0773p-872, 0.0,
     0x1.465ab7b4cc499p-26, 0x1.8b0146b6d7fc3p-953, 0x1.9a6beef56e0dp-753,
     0x1.33dc12dab015fp-880, 0.0, 0x1.ed14e4620bbd7p-842, 0x1.e9011ff1a1fc5p-675,
     0x1.86befa9c05771p-402, 0.0, 0.0, 0.0, 0x1.4ee08e28ac7b4p-149,
     0x1.a0d78221fdd8fp-641, 0.0, 0.0
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
            tmp1 = Sleef_finz_log1pd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log1pd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log1pd1_u10purecfma bench acc %la\n", global_bench_acc);
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
