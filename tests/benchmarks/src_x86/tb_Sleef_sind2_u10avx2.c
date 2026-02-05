/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind2_u10avx2128.c --function Sleef_sind2_u10avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.d736d5e3780ecp-105, 0.0, 0x1.5b4ec444f4387p-282, 0.0,
     0x1.9031c1966b916p-406, 0.0, 0x1.4f4c13cd0304bp-867, 0.0, 0x1.18e891ab290f2p-845,
     0x1.177bcf469a9ap-1010, 0.0, 0.0, 0.0, 0x1.cc7aae20a8131p-358, 0.0,
     0x1.df30bd404f75dp-967, 0x1.c844657f9b79fp-914, 0x1.1141ac5c24d7p-302, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.feb0d54b6be72p-217, 0.0, 0x1.37446b67fdc67p-147,
     0x1.d8c1a07c2f0a4p-898, 0x1.f3bc0f68c0515p-581, 0x1.17a10dd2740e5p-923, 0.0,
     0x1.c4eb8dcc6d118p-755, 0.0, 0x1.f45e5e94df2ccp-64, 0.0, 0x1.9858ca9c04479p-573,
     0x1.8bf129b1cc5c7p-28, 0x1.6ce13b5834749p-187, 0x1.c459e2830f2a4p-789, 0.0, 0.0,
     0x1.dafcffc07a52p-494, 0x1.bb0434d19f48ep-661, 0x1.cee4cf05f4adcp-724, 0.0,
     0x1.53417679906fp-976, 0.0, 0x1.762bf51b8203bp-746, 0.0, 0.0, 0.0,
     0x1.d09d95f217704p-892, 0.0, 0.0, 0.0, 0.0, 0x1.74e9d54288618p-744,
     0x1.59eeedea2c302p-818, 0x1.9a6fc29a98c45p-827, 0.0, 0x1.f60ccb121ce4ap-965, 0.0,
     0x1.fc66fb53f7653p-21, 0x1.e2b5b17996503p-751, 0.0, 0.0, 0x1.071c8cfcbe805p-374,
     0.0, 0.0, 0x1.45d765a99ca17p-724, 0x1.61699ef38c76ap-927, 0x1.df064e780730cp-741,
     0.0, 0.0, 0x1.b2fd1c60a4522p-602, 0x1.bbdf6e21953c6p-552, 0.0,
     0x1.63eeef7a9b5f4p-477, 0x1.be0080112e931p-505, 0x1.d0d8c8451169dp-747, 0.0, 0.0,
     0.0, 0x1.97b06653aebfp-582, 0x1.9ddac7ff7ede2p-411, 0.0, 0x1.30dfa9576b60ap-1005,
     0x1.16df116b2c519p-890, 0x1.eb054c0c2d9b6p-292, 0x1.b9bc1bc06a717p-674,
     0x1.8ed779752f325p-886, 0.0, 0x1.d447fd9c32b6bp-497, 0x1.11c4e3a3b8265p-398,
     0x1.628fab26479a1p-687, 0x1.97a46dd165d07p-10, 0.0, 0x1.f11a8f9893c5cp-730, 0.0,
     0x1.3e5d2c7ce4e08p-990, 0.0, 0x1.7f0831aa0218ap-699, 0.0, 0.0,
     0x1.17d2f3042bec7p-379, 0.0, 0.0, 0x1.b55894f31a895p-188, 0x1.d494dc4df0e6bp-321,
     0.0, 0x1.269e5ba990409p-369, 0x1.eb5162afd1a68p-552, 0x1.149e0edee041dp-48, 0.0,
     0.0, 0.0, 0x1.abd6977373ac4p-974, 0x1.3e0d8e8045bcep-888, 0.0, 0.0,
     0x1.b6deb4fd4daf9p-718, 0.0, 0.0, 0x1.9509636de871dp-852, 0.0, 0.0, 0.0, 0.0,
     0x1.4eae4f8df1f63p-924, 0.0, 0x1.46691f728e663p-616, 0x1.26a1023ee1de5p-985, 0.0,
     0.0, 0x1.063987536f48ap-67, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7812bd674ac3p-176, 0x1.625c2485c3dc8p-282, 0.0, 0x1.7963160e902b9p-732, 0.0,
     0.0, 0.0, 0x1.afa2048012199p-470, 0.0, 0x1.935ecfd547fafp-434, 0.0,
     0x1.301d336880647p-417, 0.0, 0.0, 0.0, 0x1.fbf272e88222fp-863, 0.0,
     0x1.4f655d018c256p-844, 0x1.aac14a58fd2d6p-26, 0x1.ba73f11c94e84p-647, 0.0,
     0x1.eb156917b97b9p-492, 0.0, 0.0, 0.0, 0x1.2ee6997fea56ep-266,
     0x1.da870b3b37871p-176, 0x1.663b7b59224efp-605, 0.0, 0x1.03a6da4ff3b17p-881, 0.0,
     0x1.cdd3dc9588cfp-70, 0x1.e182ab7e15595p-500, 0x1.452fe361c7bd2p-941, 0.0,
     0x1.375c6b7903a62p-116, 0x1.95c19c5f49a4ep-945, 0.0, 0x1.2d742c0fd2665p-618, 0.0,
     0.0, 0.0, 0x1.def46f6009f02p-919, 0.0, 0x1.fe77e7724f716p-306,
     0x1.aa98c25f4c5f5p-176, 0x1.c3aefd16d46b6p-745, 0.0, 0.0, 0x1.aeb73133f5495p-582,
     0.0, 0x1.47861b62cb4c2p-445, 0x1.32c3f5e569a04p-917, 0.0, 0x1.9e0e0079ff493p-845,
     0.0, 0.0, 0x1.c7a69a214a363p-965, 0x1.df78d64bf4b35p-791, 0.0,
     0x1.f0c77cead1afcp-844, 0.0, 0x1.a55ee2ce62ed4p-172, 0.0, 0x1.dd365b10f8a54p-709,
     0.0, 0x1.d650804bd864bp-853, 0.0, 0.0, 0x1.3fb2438daec5cp-835, 0.0,
     0x1.2987e3b8f3b79p-575, 0x1.7d74db14708dp-843, 0x1.c37bc65e5c795p-876,
     0x1.dc88d5066522bp-166, 0.0, 0.0, 0.0, 0x1.b87d664d8deb7p-208,
     0x1.81980cc58060cp-693, 0x1.97bf337ad0f0ap-777, 0.0, 0.0, 0x1.a4348b1e50b49p-254,
     0x1.add2e67d664dcp-105, 0x1.74da40b60216ap-385, 0.0, 0x1.670e18971b9d8p-790, 0.0,
     0x1.e017bf76c47d9p-688, 0x1.91af86284677ep-361, 0.0, 0.0, 0x1.59d27d97df91ap-295,
     0x1.9947bdae25a28p-385, 0.0, 0x1.fa5dd9e46a65ap-740, 0.0, 0.0, 0.0,
     0x1.c9ec12b500eadp-668, 0x1.fda456e4e379bp-714, 0x1.2036250f87b9p-137, 0.0,
     0x1.18fea772610b9p-37, 0x1.95f0b95588c79p-372, 0x1.893516db0845dp-37,
     0x1.c4323aaf0cd71p-881, 0x1.741af970982dcp-615, 0x1.cbd8d821ad93cp-847,
     0x1.883a470ab1ff4p-234, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.399b34666e759p-779,
     0x1.1d750b4292888p-216, 0.0, 0.0, 0x1.009655268cbc4p-952, 0.0, 0.0,
     0x1.29522f25ab179p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9db6c9070a7dp-616,
     0x1.def42010c6e45p-474, 0x1.8c211e68095d7p-769, 0.0, 0.0, 0x1.09e5abb77aa5fp-6,
     0x1.8a0f199531a6bp-627, 0.0, 0x1.3f4a229e12e4ap-605, 0x1.8ad0cdbddc19ap-681,
     0x1.4e8a23444a69cp-575, 0.0, 0.0, 0x1.1680a9bcfb16ep-493, 0.0, 0.0,
     0x1.1a086ef2b18c3p-933, 0.0, 0x1.faf58fe3539b8p-905, 0x1.baff735f0e37p-894, 0.0,
     0x1.d1cfeef25a7f7p-834, 0x1.e2cf2e3f89b03p-611, 0.0, 0.0, 0.0,
     0x1.dae670eaf1533p-141, 0x1.ad0aa7c4a5227p-566, 0x1.50196fdcdf4dap-641, 0.0,
     0x1.dddaa77f58715p-370, 0.0, 0x1.abd074f0eaf63p-532, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5d229db0984fp-347, 0.0, 0.0, 0.0, 0x1.c067d9f6bc804p-311,
     0x1.1dd0ea69c4d2p-26, 0.0, 0.0, 0.0, 0.0, 0x1.bb4d96d33d6ebp-114, 0.0, 0.0,
     0x1.8e77e0521d323p-271, 0x1.ad14e3386f9fep-283, 0x1.e9b3dd14e2266p-796,
     0x1.05601a43c7443p-277, 0x1.4994c3f62cf22p-927, 0.0, 0.0, 0x1.35a0c24727f12p-58,
     0x1.6a2a07062c8dfp-363, 0.0, 0.0, 0x1.6cca1218f95fcp-331, 0.0, 0.0,
     0x1.7a0b8b824a90ep-115, 0.0, 0x1.16a56aa24fa95p-535, 0.0, 0x1.bd7da3145f5e9p-439,
     0x1.fc10a2f79c619p-920, 0x1.faa9e2214f7b3p-408, 0.0, 0.0, 0x1.467d98d326825p-509,
     0x1.cfdb3f082e3b1p-426, 0x1.9e685aeecd3d9p-299, 0x1.837afe7bb6b26p-427, 0.0, 0.0,
     0x1.19aab03170d09p-531, 0.0, 0x1.b4fd6a5905adcp-335, 0x1.f3d0311650f4fp-901, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3054ea4f55762p-785, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caa0203ad9df5p-168, 0.0, 0.0, 0.0, 0x1.73d8312ac8af8p-257, 0.0,
     0x1.81511c886e46ap-855, 0.0, 0x1.fc96f31914548p-865, 0x1.93278a0294726p-1014,
     0x1.459a3a7b537b6p-776, 0x1.34fc6663f6fep-193, 0x1.2db15095cb5a4p-883, 0.0,
     0x1.0b418ca3452b9p-358, 0.0, 0.0, 0.0, 0x1.627b4d0725354p-326,
     0x1.38ea90a45f0a3p-998, 0.0, 0.0, 0.0, 0x1.af7eee8fff2a7p-1017,
     0x1.6d32aa3fa3f8cp-822, 0x1.762fdfb608a79p-824, 0x1.9a2dd311b0709p-978,
     0x1.69fcc4457d463p-317, 0.0, 0.0, 0x1.72441c5a9e487p-289, 0.0, 0.0,
     0x1.066a97ba82cddp-168, 0x1.de433c0b9b866p-45, 0.0, 0.0, 0x1.97e47f1ab6713p-825,
     0.0, 0x1.ae78262a0730bp-967, 0.0, 0.0, 0x1.3d2e974bf3197p-770,
     0x1.9b551d0e6dfbap-515, 0.0, 0.0, 0x1.4871f6c4e5016p-116, 0x1.92cec6c5c12c4p-589,
     0.0, 0x1.5d5efa49f4a9ep-222, 0.0, 0x1.502b432e2e00fp-569, 0.0,
     0x1.8f44904f9afe5p-867, 0x1.d767f4f1ccd9bp-274, 0x1.b135849e3c618p-429, 0.0,
     0x1.2ff1874645bfap-62, 0x1.e295646622269p-137, 0.0, 0x1.5a217215825ebp-78, 0.0,
     0x1.5de6a402ef04dp-869, 0.0, 0.0, 0x1.ffd39c33639f8p-586, 0x1.82074ec9eb315p-550,
     0x1.49862aaa45e02p-491, 0.0, 0.0, 0.0, 0x1.2be5f8689822bp-921,
     0x1.0546dbebcdeffp-994, 0.0, 0x1.48cdbdf13dfa9p-225, 0.0, 0x1.b3a15740cc25cp-158,
     0.0, 0x1.a4a8aa9752f8dp-127, 0.0, 0x1.05b41eb763a61p-674, 0.0, 0.0,
     0x1.5721afc1d1eb9p-454, 0.0, 0.0, 0x1.6e06e911366d9p-207, 0x1.2d18fe6f6fd81p-846,
     0.0, 0.0, 0x1.19e81cf0d53c3p-592, 0x1.8f138edb7d0cfp-351, 0.0,
     0x1.882fca7688572p-583, 0x1.6039c0a16b2b4p-831, 0x1.63036cf32d3f6p-722, 0.0, 0.0,
     0.0, 0x1.b463ae994add2p-698, 0x1.e59ee28dc010dp-944, 0.0, 0x1.815b4c9e10a2ep-206,
     0.0, 0x1.134b7add96393p-194, 0.0, 0.0, 0.0, 0x1.89ada402ccd0dp-531, 0.0, 0.0,
     0x1.94de53a8c3179p-556, 0.0, 0x1.e64a8ed4ebd31p-805, 0.0, 0x1.d6fb9d22c37b1p-987,
     0.0, 0x1.2fc3ed2d3640bp-717, 0.0, 0x1.1f4e2d2d620cfp-636, 0.0, 0.0,
     0x1.92cbf7b134544p-53, 0x1.90318c62f0573p-97, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8e6625b59984p-776, 0.0, 0.0, 0.0, 0x1.8a4fd53a51ee1p-35, 0.0, 0.0, 0.0,
     0x1.28c09dae942b3p-760, 0.0, 0x1.a1d702f1895b1p-134, 0.0, 0.0,
     0x1.3a94ceb1c26f2p-14, 0.0, 0x1.f0ee277b8c3f6p-984, 0x1.7442064cdba61p-459, 0.0,
     0.0, 0x1.195afacf693bbp-712, 0x1.4bfbf0f0caebbp-436, 0.0, 0x1.45b8f60b52e19p-809,
     0.0, 0.0, 0.0, 0x1.2c9f494405f4bp-381, 0.0, 0x1.2656e0c19d7b1p-741, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8a6796e21fd9ap-1015, 0.0, 0x1.ce002064c5665p-628,
     0x1.04ddb34822669p-956, 0x1.6b70c96d235e8p-177, 0x1.ee4abf49f03b9p-69, 0.0, 0.0,
     0x1.319164cdc1442p-275, 0x1.aadb3034201afp-2, 0.0, 0.0, 0x1.f2e1eae868682p-719,
     0x1.d0ea629eb9f18p-665, 0.0, 0x1.2b5ccfaae7efdp-996, 0.0, 0x1.27dd69572db8bp-543,
     0.0, 0.0, 0x1.a58def6f142fp-120, 0x1.079c622b10c94p-311, 0.0, 0.0, 0.0, 0.0,
     0x1.115bc1e7b2aeep-824, 0.0, 0x1.2a35c5b680492p-718, 0.0, 0.0,
     0x1.2f901a0f535c9p-457, 0.0, 0x1.e7d0558285dd7p-60, 0x1.4f224a9a19c5dp-313, 0.0,
     0x1.52bb0a167ba5cp-363, 0.0, 0.0, 0x1.54c1d3cc2655ap-162, 0x1.858cee40c9896p-653,
     0.0, 0x1.0f43675f29402p-679, 0x1.9487533d12c68p-337, 0x1.ea5c77b260d0ap-1018,
     0x1.3f880c495f28p-774, 0.0, 0.0, 0x1.1bb883ddf0622p-966, 0x1.252e52a992efbp-141,
     0x1.b54fb3750ae4ep-995, 0x1.744ae5b390af1p-811, 0.0, 0x1.b88d3ee22b0c2p-962,
     0x1.7598b61194827p-9, 0.0, 0x1.16be1b38022aap-47, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c49226ff5eb33p-954, 0x1.8b0428c2eacb9p-528, 0.0, 0.0, 0.0, 0.0,
     0x1.985a28431862bp-112, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2462daf5d712p-76, 0.0, 0.0, 0.0, 0x1.3dc9a1b07cef9p-853,
     0x1.9a6a4126e87a1p-811, 0.0, 0x1.6f3d8201561ccp-222, 0.0, 0.0,
     0x1.e790eac37d16fp-673, 0x1.faf6cfc1c29b9p-700, 0.0, 0x1.b740b175a5ed4p-545, 0.0,
     0x1.bd846824c3019p-940, 0.0, 0.0, 0.0, 0x1.bf43f1f001086p-848,
     0x1.5ea3972acc795p-577, 0.0, 0x1.a9566dac829c9p-466, 0.0, 0x1.d0dce6298e9cbp-703,
     0.0, 0.0, 0x1.f672eb16bf346p-981, 0.0, 0.0, 0.0, 0x1.8c699ae4c88dp-312, 0.0,
     0x1.1ff4155478dedp-15, 0x1.b92adf1e6d7c8p-654, 0x1.fc0ea0fcfdcf4p-852, 0.0, 0.0,
     0x1.285d2d1b3203p-332, 0.0, 0x1.58cc062ee02ddp-345, 0x1.5e0815b74f73cp-341, 0.0,
     0.0, 0x1.79fc5cc90abd4p-928, 0.0, 0.0, 0x1.f752b38e2956p-158, 0.0,
     0x1.098b19058d31bp-444, 0.0, 0.0, 0x1.a80e435bd7dfp-141, 0.0,
     0x1.99325196077bfp-347, 0.0, 0.0, 0x1.5506f7c327805p-127, 0.0,
     0x1.053999851a456p-584, 0x1.10777ec7789adp-999, 0.0, 0.0, 0.0,
     0x1.87a9b09a2377dp-999, 0.0, 0.0, 0.0, 0.0, 0x1.a38fc57f70c68p-990, 0.0,
     0x1.9298320235a7bp-1000, 0x1.dd057bdbad7bcp-1013, 0.0, 0.0, 0.0, 0.0,
     0x1.6a0afe50c70c6p-901, 0x1.f79171d6e2f83p-630, 0.0, 0.0, 0.0, 0.0,
     0x1.d975c5372fd24p-76, 0x1.65011e588969ap-53, 0.0, 0x1.bbb7d3c0b964ep-543, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9e80a3755e779p-783, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4378ca5619eap-585, 0.0, 0x1.4b9fc601e9534p-945, 0.0, 0.0,
     0x1.f1cb17d528959p-16, 0x1.6770da65c9a5bp-889, 0x1.0119575747408p-510, 0.0, 0.0,
     0.0, 0x1.28dc2a4fa113ap-231, 0x1.16ad0e77a9255p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.0a984945c517ep-306, 0.0, 0.0, 0x1.57deed31f7628p-512, 0.0, 0.0,
     0x1.d6f2d1dbbbd56p-562, 0x1.1853d0600dffcp-764, 0.0, 0x1.9809a1da8f60ep-212, 0.0,
     0.0, 0x1.5542c44fb3ef3p-764, 0x1.9b10a96193b84p-610, 0.0, 0x1.95e6f9906ef6bp-21,
     0x1.25c110453f4a5p-486, 0.0, 0.0, 0.0, 0x1.02a8c914793b8p-144,
     0x1.dca80dcdeef3ep-482, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6bacd51b8be19p-727,
     0x1.ffc5a4845bf35p-719, 0.0, 0.0, 0.0, 0x1.c958a12fb5445p-210,
     0x1.4416a4f8da56cp-751, 0x1.93df1bca07e85p-387, 0.0, 0x1.6a17821c4f4a6p-263, 0.0,
     0.0, 0x1.d0ab259b13f73p-602, 0.0, 0x1.7ce68fe59777dp-836, 0x1.3bc4fadce7c12p-46,
     0.0, 0x1.75764fab5981ep-1014, 0.0, 0.0, 0x1.058a767d4da1ap-378, 0.0,
     0x1.6ea63668d8bbep-465, 0.0, 0.0, 0.0, 0x1.815491107c37bp-970, 0.0,
     0x1.d1114f44e9dd2p-825, 0x1.8d21a27efdb51p-212, 0.0, 0x1.e06d7d0beef4fp-230, 0.0,
     0.0, 0x1.bbad40945915bp-290, 0.0, 0x1.46063b6e80b0ap-80, 0x1.e9b4bf5f01ee5p-791,
     0x1.92b8b9facc8bp-444, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f68a9a2c21ecp-409,
     0x1.a0c2c66edc93ep-176, 0x1.16c938b9d32aep-969, 0.0, 0x1.d3967f5699172p-274, 0.0,
     0.0, 0x1.8361087b14dd5p-260, 0.0, 0x1.72fefd76383d1p-389, 0.0, 0.0, 0.0,
     0x1.f22f17c478481p-1016, 0x1.1042e8df19521p-278, 0.0, 0.0,
     0x1.731ba2af61906p-420, 0.0, 0.0, 0.0, 0.0, 0x1.5ce6387a39dcap-1003, 0.0, 0.0,
     0x1.dfff294e6191ep-460, 0x1.6836ef8f9465bp-765, 0x1.5a2d08f054648p-307,
     0x1.e2a4a0ea2ee93p-398, 0x1.b42dc36704d12p-95, 0x1.fedcf07676d2bp-465, 0.0, 0.0,
     0.0, 0x1.a9a8048b1f301p-908, 0x1.1e537cf692c27p-708, 0x1.520b48585e6ebp-425, 0.0,
     0.0, 0x1.1bd395b2fabb9p-568, 0x1.8d81766715dbdp-780, 0.0, 0x1.a099e32bf2e5p-970,
     0x1.ff16183364d24p-23, 0.0, 0.0, 0.0, 0.0, 0x1.0d2d65db66a5ep-1002,
     0x1.8ab468f377408p-496, 0x1.86ad062a031c7p-997, 0.0, 0x1.4db008ee15fa2p-596, 0.0,
     0.0, 0x1.44c6e0ae5861fp-351, 0.0, 0.0, 0x1.21fa1287cb54fp-563,
     0x1.ff28974bae9b6p-75, 0.0, 0x1.08a544cd7a84ap-755, 0x1.f6eeb8ea4abe7p-101, 0.0,
     0.0, 0x1.3e501004bcd5dp-633, 0x1.695e6d4982c52p-950, 0.0, 0x1.3501f4483d779p-415,
     0.0, 0x1.d70afb7300ee9p-1001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c2c6a5968455p-522, 0.0, 0x1.38640ceb8a0b9p-505, 0x1.b41736c670de7p-820,
     0x1.520b7fcfc0571p-583, 0.0, 0.0, 0x1.a0f327224183fp-551, 0x1.d9c67bc7debf1p-839,
     0x1.4244f24f3f3cbp-156, 0x1.589b6c4d33fc8p-399, 0x1.cbc40f46e11c2p-359,
     0x1.339f63ec2133dp-952, 0x1.5576c1c3b494ep-510, 0x1.422fda7407501p-449, 0.0,
     0x1.d70f2966a03a5p-921, 0x1.3284f2f123627p-526, 0.0, 0.0, 0x1.e24bf47cde1eep-542,
     0x1.939d4f32317a9p-565, 0x1.b04c249b5461dp-726, 0x1.9cf72ed1bbad6p-531, 0.0,
     0x1.24ca5b91b58fcp-204, 0.0, 0.0, 0x1.546f19fdd04b9p-23, 0x1.76c96640d1d2ep-745,
     0.0, 0x1.cec3947bd6bdap-617, 0x1.5ffdfdd27b275p-271, 0.0, 0.0,
     0x1.a3bdd2a00b23ap-447, 0x1.efe8007618a5p-938, 0x1.11d64ef4f083cp-491, 0.0, 0.0,
     0.0, 0.0, 0x1.b26fb6d5364abp-516, 0.0, 0x1.e8dc8a711807p-516, 0.0, 0.0,
     0x1.30904dfda4287p-69, 0x1.df8623f038c9p-999, 0.0, 0x1.0dba24d9ec904p-43,
     0x1.db7079b94dd1dp-384, 0x1.c4f32c0864dc3p-802, 0.0, 0x1.61b3089bd847ap-944,
     0x1.a1a23d2d7e5b9p-589, 0x1.03ba8838f62a1p-916, 0x1.d36310fa5cad1p-239, 0.0, 0.0,
     0.0, 0x1.01a15d89a7107p-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.92f8384b7bffdp-200, 0x1.f6fccd97041f4p-942, 0.0, 0.0, 0x1.d26f1bf73ff7p-260,
     0.0, 0x1.ce2f54e7a52c3p-126, 0x1.7f22ba06bb614p-504, 0x1.1d3427ace1292p-585,
     0x1.781ce7ed7cf1dp-864, 0.0, 0.0, 0x1.16241831e2d11p-691, 0x1.a94e3f051188ap-339,
     0.0, 0x1.6bdcc0390ba3fp-531, 0x1.cb0bb01718ebfp-175, 0x1.b5b8dd0b72a7fp-799, 0.0,
     0.0, 0.0, 0.0, 0x1.dd85ed500ba1dp-605, 0x1.7b7d6a04a47f3p-474, 0.0,
     0x1.2ae72ddaedfe7p-505, 0.0, 0x1.2cb7b60dde072p-280, 0x1.46309c152cfc6p-194, 0.0,
     0.0, 0.0, 0.0, 0x1.63d742e808dbep-607, 0x1.a58a668558044p-168, 0.0, 0.0, 0.0,
     0x1.04bfa3d95fbe2p-558, 0x1.f17176e3e40c4p-898, 0.0, 0.0, 0.0,
     0x1.341f57f857de8p-676, 0.0, 0x1.49aa2ce788e7ap-546, 0.0, 0.0, 0.0,
     0x1.bd191c64209ap-816, 0x1.9269d34568742p-337, 0x1.f716ee30df7f1p-482, 0.0, 0.0,
     0.0, 0x1.fa7de53a13452p-473, 0.0
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
            tmp1 = Sleef_sind2_u10avx2128(tmp0);
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
    printf("Sleef_sind2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sind2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
