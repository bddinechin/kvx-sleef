/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd2_u35avx2128.c --function Sleef_coshd2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0.0, 0x1.3cb62a88e81f6p-517, 0x1.927d159a81337p-650,
     0x1.57060e6ab1dd2p-594, 0x1.96bf68d5b5493p-52, 0x1.896adb957be82p-716, 0.0, 0.0,
     0.0, 0x1.24291b12a0539p-659, 0x1.8cca967157d74p-387, 0x1.a33f54f1bf083p-968,
     0x1.7c29017937a23p-368, 0x1.0a401dc4584b5p-570, 0.0, 0x1.85421309a5582p-728, 0.0,
     0x1.b154c3f730622p-3, 0x1.e32a8667bd372p-262, 0.0, 0x1.8c153e5f3af49p-887,
     0x1.3aa6cb11aa8f9p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccdfedf281f3cp-764,
     0.0, 0.0, 0.0, 0.0, 0x1.60d1b99e3b18cp-736, 0.0, 0.0, 0x1.fa72a0b029bf2p-319,
     0.0, 0.0, 0x1.c20b5f63a262fp-746, 0x1.e151b22b41a46p-46, 0.0,
     0x1.ea880f344a068p-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42b37268f27dp-173, 0.0,
     0x1.c00e707eb5b4bp-676, 0x1.b6671d506af6bp-553, 0.0, 0x1.22d968591b279p-669,
     0x1.4551d0b74520ap-308, 0x1.a3f1f27d806c4p-846, 0x1.7bab242720396p-997, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f1fc5a0791804p-388, 0.0, 0.0, 0x1.fd4afbd50fc1ap-104,
     0x1.644998578ea3bp-749, 0x1.b58337154c2c7p-961, 0.0, 0.0, 0.0,
     0x1.a92596f4778dp-27, 0.0, 0.0, 0x1.dc985ec6f911cp-257, 0.0, 0.0,
     0x1.c40ef02e26eebp-44, 0x1.41378ba7eafb1p-13, 0x1.708a917d8dfa6p-159, 0.0, 0.0,
     0x1.0e7ee61f5388fp-147, 0x1.0ae0e852672dap-237, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ad29265870fap-570, 0x1.68d2279b748ebp-1000, 0.0, 0.0, 0.0,
     0x1.364aef1177691p-55, 0.0, 0x1.8e6734414f824p-422, 0x1.efc68fad27276p-525,
     0x1.80fced12a2814p-369, 0x1.cb7c56e222d32p-617, 0x1.17c366864a446p-575,
     0x1.164516053bf69p-933, 0x1.f7e493d4802a1p-691, 0.0, 0x1.566cf47a91c2bp-866, 0.0,
     0x1.b25b0df6fe568p-28, 0.0, 0x1.447d08be4e148p-50, 0x1.73282a5b634e9p-706, 0.0,
     0.0, 0x1.48d5c23208f0bp-71, 0x1.c92c6cfa1c3e1p-710, 0x1.b2efef387e903p-99, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0974dff544319p-269, 0x1.f07dd6832ebap-741,
     0x1.d3dab49afa2bcp-391, 0.0, 0x1.eda480895a17ep-512, 0.0, 0x1.a3513fbd6d47fp-668,
     0x1.5a0187e438826p-461, 0x1.180379a4ccb93p-214, 0.0, 0.0, 0x1.26026f821633dp-804,
     0x1.e46931d4138c2p-651, 0x1.b854d87cb9468p-315, 0x1.4b1331d4e721dp-492,
     0x1.c8cbbaa695c6ep-373, 0.0, 0x1.321eb155b31f1p-946, 0.0, 0x1.77a85b657f471p-486,
     0.0, 0x1.f3735e8fc8bep-678, 0x1.40a6f0a690041p-76, 0.0, 0.0, 0.0,
     0x1.bfa12a52f2c3ap-151, 0x1.02b8cf4ea0122p-457, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b496c6a07fdedp-509, 0x1.8bbee4397fd13p-887, 0.0, 0x1.e489dbb66c7bp-325, 0.0,
     0.0, 0x1.702ba82fe7d53p-211, 0x1.fd640d2ae8ceap-212, 0.0, 0.0,
     0x1.0c53807096eebp-454, 0x1.28545e8556ff2p-382, 0.0, 0.0, 0.0,
     0x1.298c7d69d6326p-762, 0x1.673c6ab4274d9p-369, 0x1.4e44ab1d6384fp-267,
     0x1.979b7d26f0906p-270, 0x1.c9e9f4c42cec5p-948, 0x1.59c293b509885p-623,
     0x1.67ee41e448285p-89, 0.0, 0x1.71250e0d6b0fap-650, 0.0, 0.0,
     0x1.2dc3f3add30a9p-291, 0x1.424700fff5489p-682, 0x1.47d3a15ac73e4p-606, 0.0,
     0x1.0fc5a3f15ee62p-556, 0x1.23f2bb28697dap-117, 0.0, 0x1.e815d8c97919cp-372,
     0x1.6c3ab9ef1cadap-91, 0x1.16dc1b8a1f433p-925, 0x1.ae2173fbb930dp-886,
     0x1.3f5c1ffbf2e67p-250, 0x1.123981bb17159p-205, 0x1.98e3fda215bd9p-106,
     0x1.664dd496e09bep-995, 0x1.f8290f6e57a74p-164, 0.0, 0x1.a0b8798f77d8ap-825,
     0x1.3505a81615bbbp-617, 0.0, 0x1.9b89d4e7c526ap-187, 0x1.2df8b33c6d3f6p-222, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e4abe87f77bffp-456, 0x1.46353906e75p-534,
     0x1.5a4a59b5ebd3dp-61, 0x1.50f6527883e15p-524, 0x1.08974b713aeeep-20,
     0x1.7312c32af8b38p-541, 0x1.2cdc3c82733d6p-851, 0.0, 0x1.b2bf4f5974053p-513, 0.0,
     0x1.221fd594dc1a1p-235, 0.0, 0.0, 0.0, 0x1.abe472d02162dp-6, 0.0,
     0x1.3dc83430b911ap-799, 0x1.800dbafd39803p-894, 0.0, 0.0, 0.0,
     0x1.6f1379de8a03ep-850, 0.0, 0.0, 0x1.479f6b9a1d5cbp-78, 0.0,
     0x1.5e9ad8a1d58b4p-773, 0x1.22ce99c6def17p-924, 0x1.1e3cb9d8980dfp-662,
     0x1.aebf58bb860e7p-479, 0x1.5eabd3ede912ap-518, 0x1.0063f3f229b4p-761,
     0x1.5f2f82959289ap-505, 0.0, 0x1.797dbed570052p-733, 0x1.dea30be799f75p-861,
     0x1.89c7338b583ecp-463, 0x1.f5699e7112ca7p-759, 0.0, 0.0, 0.0,
     0x1.d25387e3c162ep-401, 0x1.851d770d8ed26p-350, 0.0, 0x1.f8b5b25f8556fp-986,
     0x1.c6f30f18f5872p-227, 0.0, 0.0, 0.0, 0.0, 0x1.f53b7002f37dp-309, 0.0, 0.0,
     0x1.79d06565076d6p-919, 0x1.bcc727925aaccp-298, 0x1.35f93a6c962fdp-733, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.01e6295f62dedp-11, 0x1.53a374bc73ef3p-802,
     0x1.85a956f74a441p-566, 0x1.71c60b5b8e72dp-136, 0x1.3489c0d3c1eacp-20, 0.0, 0.0,
     0x1.cbdcdb7a0296cp-1018, 0.0, 0x1.bf5bb5363642ap-20, 0.0, 0x1.d63b6733f55a8p-777,
     0.0, 0.0, 0.0, 0x1.ecca8225b6f9ap-576, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51071c16d9018p-175, 0x1.e1d45e48e21bap-205, 0.0, 0x1.3b49edcba89fep-100,
     0x1.767c01ec04361p-990, 0x1.71acf0a6defc2p-296, 0.0, 0.0, 0.0,
     0x1.0a607249a5412p-833, 0x1.39df0dcc5343cp-654, 0.0, 0x1.1b2741ce0e4afp-788,
     0x1.74d9db5957674p-616, 0x1.50307ea7f0a8p-1008, 0x1.8be09cf632a5ep-905, 0.0, 0.0,
     0x1.aa0e13a7c0c66p-741, 0x1.c89d2dfbf50d2p-264, 0x1.707d13b7923d1p-71, 0.0,
     0x1.3699c6008ec8dp-775, 0.0, 0.0, 0.0, 0.0, 0x1.c68615ba7d14ap-616,
     0x1.82efe2bde764ep-444, 0.0, 0x1.28e1552374ab7p-904, 0.0, 0x1.0e9905c79c016p-245,
     0x1.47a30e8a6994fp-985, 0.0, 0.0, 0x1.6afef8613b0cbp-982, 0x1.7cf767954451dp-813,
     0x1.2ad870dca96d4p-796, 0x1.605a78d203485p-132, 0x1.670101c033c19p-146, 0.0,
     0x1.c09a7f8e8784ep-213, 0x1.93d1d8ac6c3d9p-763, 0.0, 0x1.0b2a34558c881p-37, 0.0,
     0x1.3a2841de75cd5p-414, 0x1.c29eeac1b4f76p-722, 0x1.9e0d2db980621p-993,
     0x1.c19bc462ae266p-985, 0x1.644c067c0f74cp-610, 0x1.238a6e007e188p-246,
     0x1.d03efceced5efp-490, 0x1.81fb58a65012dp-411, 0x1.fca9fb11b0127p-696, 0.0,
     0x1.630bd81c804ebp-681, 0x1.f0ecf567d2d63p-690, 0.0, 0x1.13f368d773f9fp-733, 0.0,
     0x1.e0c8dbce37998p-392, 0.0, 0x1.f07683e59633ep-549, 0.0, 0x1.f62e082e76f01p-143,
     0.0, 0.0, 0x1.2bc321be24efbp-996, 0x1.24f4dcca59c6cp-267, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.05a08d8e8b76fp-702, 0x1.fb1f9f9a24b76p-804,
     0x1.c61f7354074e3p-110, 0.0, 0.0, 0x1.0a5817dc01b9p-110, 0.0, 0.0,
     0x1.3d820fcaf42c5p-689, 0x1.4736e230a1719p-314, 0x1.bfddbbd7c5bcfp-361, 0.0, 0.0,
     0x1.6c2bae6c3bb0dp-890, 0.0, 0x1.9e549be7c1253p-754, 0.0, 0.0, 0.0,
     0x1.92fdffc07a80cp-390, 0x1.764dd40ccbc36p-827, 0x1.841a1b0b87cc4p-520, 0.0, 0.0,
     0.0, 0.0, 0x1.0745837a644ddp-228, 0x1.214dc469227d1p-467, 0.0, 0.0, 0.0, 0.0,
     0x1.31cdfc132fbfep-93, 0x1.222a92fafad5p-719, 0x1.c152fd05019ccp-711,
     0x1.972a54800352fp-584, 0.0, 0x1.44672265f448ep-643, 0.0, 0x1.5a779b4aea51p-746,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b29d238eb1dap-108, 0.0,
     0x1.d190da0b05cc5p-792, 0x1.75bd0fcb0ec5p-395, 0x1.70dde0e7d5c61p-120, 0.0,
     0x1.709480ce32281p-981, 0.0, 0x1.3da6c585a1361p-140, 0.0, 0.0, 0.0,
     0x1.207078f4908a7p-997, 0.0, 0.0, 0x1.463d9ac50799ep-708, 0.0, 0.0,
     0x1.5de85f61004bap-1022, 0.0, 0x1.ffc3b249ce463p-166, 0.0,
     0x1.9d476535993cep-625, 0x1.565236314eb03p-686, 0x1.7d1ecf8c08eacp-461,
     0x1.4eeca161e6f18p-755, 0x1.19a799444bacp-975, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b222a92fb5158p-37, 0x1.d4e6cead21f25p-681, 0.0, 0x1.49da1eb4ba782p-696,
     0x1.0199b955034d2p-257, 0x1.2f0be177258efp-35, 0x1.27f9657f84c55p-128,
     0x1.0e949c29cc256p-413, 0.0, 0x1.244b390d450e5p-934, 0.0, 0.0,
     0x1.4f77a3cdaa72ep-171, 0x1.fc96d53a1a0acp-76, 0.0, 0x1.fa0a7cb7c53e3p-668,
     0x1.3672ea2035be9p-366, 0x1.0c80733965d7dp-14, 0.0, 0x1.3267932767347p-896,
     0x1.190ffd9a12e6fp-608, 0.0, 0x1.de8c855315ap-467, 0x1.1206b6ae885a4p-187, 0.0,
     0x1.f8625b36855b3p-994, 0x1.898f97f42247bp-877, 0x1.a3491ed8f3cc3p-836, 0.0, 0.0,
     0.0, 0.0, 0x1.e6b804246b00cp-314, 0x1.73d528cd53817p-790, 0x1.58c17a62ce486p-125,
     0.0, 0x1.dd4bd0244b50dp-234, 0.0, 0x1.5558af88b5fdfp-801, 0x1.71e2a1f21ae2p-782,
     0.0, 0.0, 0.0, 0.0, 0x1.c3882acb78189p-689, 0x1.41455f1685fd6p-720,
     0x1.008ffbab7504p-383, 0x1.58532c6c25154p-271, 0.0, 0.0, 0x1.656e3844dfc5bp-685,
     0.0, 0x1.2446724726e03p-114, 0.0, 0.0, 0x1.3ba0575d83836p-192,
     0x1.4c02a47fbe24dp-908, 0.0, 0x1.dc786921da7adp-110, 0.0, 0x1.229b928ad42a9p-27,
     0.0, 0x1.86e1f4fe35948p-653, 0.0, 0.0, 0x1.c7fdb5c13f814p-189,
     0x1.cfea65eab7492p-727, 0x1.864893e9a4572p-785, 0x1.fa2a3af98cfd5p-665,
     0x1.1e5357479448dp-690, 0x1.3c7b8d451675p-103, 0x1.f47e10f62e61cp-625,
     0x1.71ad79415a242p-431, 0.0, 0.0, 0x1.b9e84b8c158fcp-838, 0.0, 0.0,
     0x1.d1b0bc439a299p-1006, 0.0, 0.0, 0x1.b2c5c147abf73p-941, 0.0,
     0x1.674792c40b0b1p-512, 0x1.07b13df995272p-587, 0.0, 0.0, 0.0, 0.0,
     0x1.d6322d19039c1p-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17c1b13b7a856p-98, 0.0,
     0x1.91f53d31bb834p-441, 0x1.3f84ec9486e6p-188, 0.0, 0x1.9d010bcd14c24p-92,
     0x1.500b4afb48f16p-217, 0x1.edb43db7076d7p-38, 0.0, 0x1.8ea35cd21594ep-707,
     0x1.7cd312e94c679p-771, 0x1.923557a2f1d38p-768, 0.0, 0.0, 0.0,
     0x1.342ea020f17dcp-155, 0.0, 0.0, 0.0, 0x1.0ac3a07424ad6p-780,
     0x1.0f1fb62970d9cp-440, 0x1.7186bbf00c50ap-304, 0x1.89708242e878cp-83,
     0x1.e92647c8d81fcp-595, 0.0, 0.0, 0x1.f35d153500a8ep-921, 0x1.888936d95e211p-608,
     0.0, 0x1.8956ea7346e42p-568, 0.0, 0x1.793cfeb1910dbp-64, 0x1.81afe3456ef1ap-493,
     0.0, 0x1.cff42ed4ce5d9p-344, 0.0, 0x1.876b519230d4fp-277, 0x1.8c15934d4894ep-827,
     0.0, 0.0, 0.0, 0.0, 0x1.18a3f0aa080b5p-706, 0.0, 0x1.408ad559cb8b8p-775,
     0x1.9a2f76d8fccecp-41, 0x1.3ca7d5672d80bp-714, 0x1.d8bf7634ef90cp-512,
     0x1.01a906fbc5a58p-151, 0.0, 0.0, 0x1.1fede565076c5p-686, 0x1.3e3dcdfb2ed12p-777,
     0.0, 0.0, 0.0, 0x1.4b98b8ac9123bp-504, 0x1.3d178ed91be7fp-574,
     0x1.3cc5f7a60428fp-453, 0.0, 0x1.b82e79cce1889p-948, 0x1.4d5feb52d82c6p-177,
     0x1.a15d946e83eabp-1012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3fcd0dfb3ba4p-59, 0x1.daaca1cb7bf93p-611, 0x1.d096d63a1c012p-387, 0.0, 0.0,
     0x1.860f1e0a10681p-886, 0x1.2d9d83bd11b79p-328, 0x1.d4a2a39465d94p-357, 0.0,
     0x1.1c8bdca10bb1dp-438, 0x1.816e4bc71f6e4p-231, 0.0, 0x1.c0bf193204521p-388,
     0x1.8083b74b86bd4p-206, 0.0, 0x1.6c7b0ae06b426p-168, 0.0, 0x1.b26478d65da8dp-464,
     0x1.f00e4849bba96p-721, 0x1.caad6ee7b377cp-115, 0.0, 0x1.07b2a95cb7c96p-59, 0.0,
     0x1.ff8ce490d30aep-64, 0x1.af39854e71865p-702, 0.0, 0.0, 0.0,
     0x1.51376edbd5f1ap-914, 0.0, 0x1.ccddbd172e122p-890, 0.0, 0x1.bbb5251a79cf4p-83,
     0.0, 0.0, 0.0, 0x1.ae0b440559cd4p-657, 0.0, 0.0, 0x1.1b259e0dd83a7p-835, 0.0,
     0x1.10dc2759da565p-787, 0x1.e6ecfa1cca3c2p-788, 0x1.eff1aa4027c1cp-910,
     0x1.7d6676fc56d17p-956, 0x1.265b328289e9cp-682, 0x1.37a7fb79961c7p-71, 0.0,
     0x1.32fdcd7522059p-666, 0x1.eaaa6f87176f1p-858, 0.0, 0x1.93b3c19394e3bp-660,
     0x1.246b83ac882c6p-772, 0x1.b083eacbcbbd6p-660, 0x1.b50fceb433853p-165, 0.0,
     0x1.6bfb19a7a2f1bp-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fca73cf4647fp-860,
     0x1.1dd746b6e0077p-321, 0x1.58b8e46342e2ep-336, 0x1.3ccf1b697ca56p-154,
     0x1.65a4e55011fe2p-425, 0x1.7b88debede1bep-606, 0.0, 0x1.52d6405b54a06p-289, 0.0,
     0x1.c2cb7160fd221p-412, 0.0, 0x1.03fab35e6fd1cp-581, 0x1.4623b2e70f46ap-23,
     0x1.0b54fe3191be3p-549, 0.0, 0x1.f3b4c53601354p-245, 0.0, 0x1.c83b86634d2c9p-696,
     0.0, 0x1.350bf5dfb0ebp-677, 0x1.aa293ff4b2444p-826, 0.0, 0.0, 0.0, 0.0,
     0x1.bd6bd3bfb2dcp-495, 0x1.ea4cc25f2c27fp-774, 0x1.79ccc9f721784p-799, 0.0,
     0x1.85c39d061b264p-555, 0x1.afea1eedbfa6fp-919, 0.0, 0.0, 0x1.4f6f2eb64c13p-753,
     0.0, 0.0, 0.0, 0x1.668a63715088cp-521, 0x1.b46667d0bef3ap-589, 0.0, 0.0,
     0x1.7b38a0499c3fep-961, 0x1.b7fb601a45e2ep-409, 0.0, 0x1.0e1473baad774p-831,
     0x1.d97ca3ee15c8dp-390, 0.0, 0x1.473f7ce908174p-653, 0.0, 0x1.07b9ca3a9c0b9p-355,
     0x1.f7dc5890cab24p-396, 0x1.a0bd8ed97d40cp-282, 0.0, 0.0, 0.0,
     0x1.9b3c4234b4839p-26, 0.0, 0x1.209fb8e43af5dp-948, 0x1.10bd7202baf4dp-566, 0.0,
     0.0, 0.0, 0x1.4ee6bfffeb4bfp-317, 0x1.23ff83a591d6cp-819, 0x1.60b2ac7d51043p-154,
     0x1.fee9030ddb9ddp-623, 0x1.f4079fc8e46cfp-706, 0x1.9c948a4b5ae0dp-88,
     0x1.7ca069e329591p-237, 0.0, 0x1.9b91b8e289f2ep-59, 0x1.a583fe3622b67p-721, 0.0,
     0x1.5b48e1837db56p-165, 0.0, 0x1.06c49c7e208a3p-947, 0.0, 0.0,
     0x1.c59ad0e03e54cp-1020, 0.0, 0x1.5f5cb952035b8p-169, 0x1.a5552c0605f5p-1002,
     0.0, 0.0, 0x1.45d9c1b5663a6p-571, 0x1.014a12e816728p-74, 0.0, 0.0,
     0x1.dbbf4373970d5p-867, 0.0, 0.0, 0.0, 0x1.2865f00f95cf6p-795,
     0x1.3ccd835b1c462p-986, 0x1.79b862236f355p-665, 0x1.13c5267fddcacp-95,
     0x1.2c8c106e2ee37p-86, 0x1.6eb93bfd47654p-344, 0x1.2da24f08bddbap-960, 0.0, 0.0,
     0x1.47e2043628bfbp-912, 0x1.41bd8dbec5691p-894, 0x1.31671f59b7a3dp-216, 0.0, 0.0,
     0x1.350b625fbe6cfp-833, 0x1.3fe9be8e5bc1p-211, 0x1.7492c786b2315p-680,
     0x1.2a5cb56095b7p-499, 0.0, 0x1.1aa169116d941p-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.901eaf13bbfeep-183, 0.0, 0x1.1baeaf30f438dp-885, 0.0, 0.0,
     0.0, 0.0, 0x1.82427197c4549p-55, 0.0, 0x1.f138639787089p-12,
     0x1.1fb365787b9dp-163, 0x1.8ad7695a8d224p-59, 0x1.64c199a97e974p-183, 0.0, 0.0,
     0x1.9e799b7d98f73p-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f790d0a73822p-134, 0.0,
     0x1.fa43b1784e583p-37, 0.0, 0x1.9692fbcca3b86p-937, 0x1.b11019a6a8db2p-346, 0.0,
     0x1.208eafe4d7a38p-942, 0.0, 0x1.6f57e9ba6313ep-109, 0x1.8ce9ece5f060ap-994, 0.0,
     0x1.9548cce5a56fdp-968, 0.0, 0x1.db8c9c83b36c3p-696, 0.0, 0x1.9c60c1cb7246ep-943,
     0x1.f3a67b6be3385p-957, 0x1.ecf7a678de935p-577, 0.0, 0x1.9d3a297201ac6p-900,
     0x1.82cf003ce643cp-139, 0.0, 0x1.43194d7ff29b9p-170, 0x1.3f4fed17917b7p-143, 0.0,
     0.0, 0.0, 0.0, 0x1.9d5a4d40a2c2p-163, 0.0, 0x1.1d7ed4bd23682p-942, 0.0, 0.0,
     0x1.949be964c1eb7p-664, 0.0, 0x1.c90b40539371fp-211, 0.0, 0x1.87b1f0b0ee32ep-202,
     0.0, 0.0, 0x1.f9dc43901030fp-373, 0.0, 0.0, 0x1.68c60b8b1248bp-726,
     0x1.74ee7cc20da0ap-999, 0x1.9095026627fdap-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.95f61ba1e484bp-48, 0x1.e0b70a3a6f122p-466, 0.0, 0.0,
     0x1.61da6f26ea773p-538, 0.0, 0.0, 0x1.559ced7761fabp-194, 0x1.ea12a97fe9bb8p-657,
     0x1.149ba29bb2d81p-245, 0x1.ddcec93c07e0bp-628, 0.0, 0x1.d35077de1a3d5p-575,
     0x1.0abea1d143047p-187, 0x1.34ae21275febap-557, 0.0, 0.0, 0x1.75e3b6d995466p-738,
     0x1.337be6c046191p-678, 0x1.ca1f81677610dp-751, 0.0, 0.0, 0x1.fc4adafbdbe57p-302,
     0x1.f2c396400e954p-135, 0.0, 0x1.90e9dc5c28d4fp-887, 0x1.a7877e6c48857p-1013,
     0x1.f6c94657fb44fp-896, 0x1.dd41ad2b7c276p-50, 0.0, 0x1.282a47bf1866dp-327,
     0x1.ef56540832afbp-530, 0x1.7b2635151159ep-482, 0x1.6257707fd50ecp-642,
     0x1.46e64acc8f3d4p-767, 0.0, 0x1.0e6da46228d48p-181, 0.0, 0x1.44065cce1e74dp-59,
     0.0, 0x1.03b1757829437p-602, 0x1.06ca03a5319dp-796, 0x1.c1269669d5d98p-125, 0.0,
     0x1.20fd27746a25ep-964, 0.0, 0x1.7771add4ce2dap-303, 0.0, 0x1.91a9700fbe8fcp-964,
     0x1.6164c05228b15p-873, 0.0, 0x1.bc0e06c288633p-827, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a418a8eaf3f44p-38, 0.0, 0x1.0567b99bf59fp-49, 0x1.02827801907aep-95,
     0x1.0c273eada069p-454, 0x1.b577f800d991cp-778, 0.0, 0x1.c795c509f2133p-782,
     0x1.c995b54d6886p-138, 0x1.766376794a3e4p-413, 0.0, 0x1.57f5718f475cep-134,
     0x1.ae62fc03ee2dp-637, 0.0, 0x1.54b44f1a3da95p-420, 0.0, 0.0,
     0x1.006e6c2d1b8p-191, 0.0, 0x1.b799f431d630fp-916, 0x1.9d8d40a979a7bp-330, 0.0,
     0.0, 0x1.1e940790bbd16p-934, 0.0, 0x1.0878409202f4fp-329, 0x1.65723887229d5p-154,
     0.0, 0x1.d0a7be7b1c323p-697, 0.0, 0.0, 0.0, 0.0, 0x1.1da4f30e68674p-313,
     0x1.7c1ee9de0dba4p-781, 0.0, 0x1.4a0456197434bp-950, 0x1.41009587b4e2ep-230,
     0x1.c06bbab65b214p-125, 0.0, 0.0, 0x1.c46ac29442db1p-812, 0x1.f34605356d415p-715,
     0.0, 0x1.3105f62fb25e6p-225, 0x1.776f8964323cbp-175, 0x1.c59465029f5c2p-681, 0.0,
     0.0, 0.0, 0x1.f173506458ceap-895, 0x1.d17b1e2056271p-628, 0.0,
     0x1.36626bb90bc7ep-677, 0x1.d8442d2a9dbdap-334, 0x1.641ca13e50b35p-358,
     0x1.b6171cb1f99edp-205, 0.0, 0.0, 0x1.eb657f8845a2bp-196, 0x1.67b01d769c266p-408,
     0.0, 0.0, 0x1.0c8444cb38fccp-128, 0x1.dba2c06d7ead5p-628, 0x1.f4f6745c924dap-272,
     0x1.24be47d7dd67ep-883, 0x1.98be26712e5e2p-482, 0.0, 0x1.ecfb2a4f87f82p-991, 0.0,
     0x1.75c7c43c069d3p-969
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
            tmp1 = Sleef_coshd2_u35avx2128(tmp0);
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
    printf("Sleef_coshd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_coshd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
