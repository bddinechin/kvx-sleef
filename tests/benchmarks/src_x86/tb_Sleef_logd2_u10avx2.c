/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd2_u10avx2128.c --function Sleef_logd2_u10avx2128 --headers \
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
     0.0, 0.0, 0x1.a9bf7be9aa418p-923, 0.0, 0x1.607706660c79ap-440, 0.0, 0.0,
     0x1.5255d1890328cp-355, 0x1.c1d7a73577f2cp-446, 0.0, 0.0, 0x1.6d3b2e4b2639dp-993,
     0.0, 0x1.2365100650246p-914, 0.0, 0.0, 0.0, 0.0, 0x1.bd2b6baf11063p-284, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e9d711d2f0bfp-547, 0.0, 0.0, 0.0,
     0x1.34dd4e1441cd4p-486, 0x1.1923b9ee7bacep-672, 0x1.735828b598ab4p-948, 0.0, 0.0,
     0x1.ecdf4335edcdfp-358, 0x1.a6cfcb2365f3ep-118, 0.0, 0x1.637c53fabfebap-233, 0.0,
     0x1.50a24d09761d3p-590, 0.0, 0.0, 0x1.7dbf4cceebb3p-42, 0x1.89b1239e546d1p-104,
     0.0, 0.0, 0.0, 0x1.dd7bc0e084af8p-244, 0.0, 0x1.77fe1b2a0b63p-807, 0.0, 0.0,
     0x1.05bb70aae55f2p-672, 0x1.8c6ccc591eec9p-37, 0x1.9d7ff085de161p-763, 0.0, 0.0,
     0.0, 0x1.a708a68aa4fe5p-936, 0.0, 0.0, 0x1.2f217c14a1deep-9,
     0x1.f28384c5a823cp-844, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6c407d5c6805p-843, 0.0,
     0x1.cb763806e0239p-486, 0.0, 0x1.bf9574fa23e2cp-535, 0.0, 0.0,
     0x1.e5c0d241e1f07p-952, 0x1.0814ff78cacaep-241, 0x1.d0c3829857dfap-732,
     0x1.051a4029c04bbp-865, 0.0, 0x1.d7debc24ec639p-171, 0.0, 0x1.c4c9a77e9caabp-951,
     0x1.c97d52decb28bp-825, 0.0, 0.0, 0.0, 0x1.a3a6e97fc52a9p-253, 0.0, 0.0,
     0x1.c47973b668e04p-563, 0x1.e985111a22589p-123, 0.0, 0.0, 0x1.1f73b6e5c9ccep-750,
     0x1.d44e93e11b547p-772, 0x1.44d888c33d1d2p-358, 0x1.e8e4c7aee21dfp-259,
     0x1.e4c19a71d4467p-136, 0.0, 0x1.a3b6f2a90cbaep-349, 0.0, 0.0, 0.0,
     0x1.4917526199e9cp-416, 0.0, 0.0, 0x1.cf62461d2f3c6p-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ffae6229636e8p-136, 0.0, 0x1.7c1cc84b549f9p-598, 0x1.0e255244452a6p-734, 0.0,
     0x1.92853e19e82aap-18, 0x1.dc2999a860461p-750, 0.0, 0.0, 0.0, 0.0,
     0x1.c6cef087d2ffbp-250, 0.0, 0x1.3f0c2f0534862p-810, 0.0, 0.0,
     0x1.bf92ec741941ap-503, 0.0, 0.0, 0.0, 0x1.474b8cd6038efp-283,
     0x1.9c03e7e0e5b99p-976, 0x1.7158f6c9975ap-1021, 0x1.7fa2b959c32f3p-616, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.069c4f034902dp-543, 0x1.3aed123d284eep-8, 0.0, 0.0,
     0x1.3b05759a9b495p-664, 0x1.9e20859923a69p-662, 0.0, 0.0, 0.0,
     0x1.b99b259c766c7p-666, 0x1.e90fe18f64a03p-279, 0.0, 0.0, 0x1.09f0b8cadfa9p-202,
     0.0, 0.0, 0.0, 0.0, 0x1.47d2ebfadf58bp-259, 0x1.0b52d6e15acd4p-781, 0.0,
     0x1.4da3adebc8a41p-1013, 0x1.9f54cc86c4c6p-6, 0.0, 0x1.5e3e901f81bc9p-256,
     0x1.8bd9be570d623p-686, 0.0, 0x1.d5ea82cf7cc6ap-887, 0x1.9b22538e1b0b4p-836,
     0x1.63650f9dd88b8p-723, 0x1.d157d2ce98019p-505, 0x1.2f211d2e91c7bp-62,
     0x1.fd0f050ca512cp-639, 0.0, 0x1.6b363a295d306p-552, 0.0, 0x1.01001947c20f4p-880,
     0x1.24af49611412ep-233, 0.0, 0x1.40b46bb765e52p-675, 0.0, 0x1.69221e44360e6p-767,
     0x1.5e4863d5cf36ap-217, 0.0, 0x1.bd541f2a66c0ap-231, 0x1.fd81148bf8a05p-580,
     0x1.8f7990fdc489cp-846, 0x1.9a7ed28367568p-799, 0x1.49728eedda08dp-151, 0.0,
     0x1.b319fe9b283bap-142, 0.0, 0x1.30a003538bbd6p-163, 0x1.780f699e1bf74p-361, 0.0,
     0.0, 0x1.0cc62ac641db9p-519, 0.0, 0.0, 0.0, 0x1.350c5e3bbc656p-161,
     0x1.d432f041c8b08p-782, 0.0, 0.0, 0x1.fb78f1f03d001p-609, 0.0, 0.0, 0.0,
     0x1.73000e4833c63p-210, 0.0, 0.0, 0x1.7c8b9df20b505p-987, 0x1.7a8152a4d5427p-922,
     0x1.ad6c70ffd4863p-711, 0x1.4ba8662541461p-703, 0x1.a57c024734463p-873, 0.0,
     0x1.a43843729fd6ap-937, 0.0, 0x1.bdbe43e1d4ceap-501, 0x1.be755355c797ap-74, 0.0,
     0x1.8a96c173f721ep-856, 0.0, 0x1.2fac969a523ccp-766, 0x1.d972b34816d9ap-522,
     0x1.79c6c98c0f8f1p-210, 0.0, 0.0, 0x1.f01e0e588dccfp-60, 0x1.b172761ed5764p-894,
     0.0, 0x1.a855539de1e02p-837, 0x1.446016a2566a8p-105, 0x1.24f51d861a82bp-792, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0af8748231e7ep-155, 0x1.99f586287b8aep-396,
     0x1.be462c309cc97p-385, 0.0, 0.0, 0.0, 0x1.e7a038680ff8dp-29,
     0x1.54134573f59f4p-683, 0x1.be54e67dee057p-749, 0.0, 0.0, 0x1.41c8c92e37ae4p-849,
     0x1.46a440ecee57ep-921, 0x1.a0bd37139913p-781, 0x1.61d9f9afda0c3p-71,
     0x1.e5a56e938a723p-200, 0x1.fd4426adf7adep-79, 0x1.9c45c390f864cp-605, 0.0,
     0x1.f0a20519ffa6cp-695, 0.0, 0.0, 0.0, 0x1.56ac20d7e6ac6p-434,
     0x1.f6514ad403417p-730, 0x1.62a482efe4501p-639, 0x1.a08d1710b8c76p-442, 0.0,
     0x1.5622f885df641p-231, 0.0, 0.0, 0.0, 0.0, 0x1.835d60d3110c6p-1020, 0.0,
     0x1.db1d641a4707ap-869, 0x1.8c42dfbacbe5bp-133, 0.0, 0x1.8b5cce2ea6019p-57,
     0x1.bf14a5a5495a4p-129, 0x1.4942912fc1ba6p-183, 0x1.043c5cec2b59fp-245, 0.0,
     0x1.341c933c736dep-721, 0x1.1cb27293d63b6p-352, 0x1.115662ec0a682p-376,
     0x1.9702b6918efaep-896, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33b2fe950b679p-539,
     0x1.ee698c547f654p-404, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f92ae306d2bd7p-185,
     0x1.0d550971e1e4dp-10, 0.0, 0x1.4baee46d165b8p-803, 0.0, 0.0,
     0x1.897b94e7e9744p-30, 0.0, 0x1.9d586b5395f2cp-3, 0x1.e5d4d6ccfc53p-597,
     0x1.1059dfd410b03p-683, 0x1.70859212b0bd3p-264, 0x1.216a7e0068dd1p-418, 0.0, 0.0,
     0x1.1e0d7be1a5751p-604, 0x1.416b572939b5bp-782, 0x1.7bb2eaa550735p-35, 0.0, 0.0,
     0x1.7438bed16e531p-151, 0x1.0c1b05e4fcbb2p-247, 0.0, 0.0, 0.0,
     0x1.06f925c2838a5p-557, 0.0, 0x1.73194a521125ap-719, 0.0, 0.0,
     0x1.8cee8f8fcd133p-497, 0.0, 0x1.3dd6ae32670a7p-600, 0.0, 0.0, 0.0,
     0x1.902fe55e38d1p-858, 0.0, 0.0, 0.0, 0x1.0ff79dd5b2489p-392, 0.0, 0.0,
     0x1.ef400a7759331p-490, 0.0, 0x1.c92c483046707p-603, 0.0, 0x1.bcdd13417147bp-473,
     0.0, 0.0, 0.0, 0x1.531d2497af29ap-1017, 0.0, 0x1.110088a03e674p-858,
     0x1.a5e0bbc09844p-226, 0x1.82443d8054ca5p-889, 0x1.2c5ecc673455fp-28,
     0x1.06768525dcbcbp-927, 0.0, 0.0, 0.0, 0x1.b319d0e5ed8cdp-70,
     0x1.262bd33c32e29p-363, 0x1.f5a6eaf561dedp-679, 0.0, 0x1.d615d048f2aa6p-130, 0.0,
     0.0, 0.0, 0x1.eab5af7fdd13dp-372, 0.0, 0.0, 0x1.fb94ae404dbc7p-747, 0.0, 0.0,
     0.0, 0x1.340edaf74b402p-634, 0x1.b6df37ae54fb8p-311, 0.0, 0x1.8b73a36938611p-287,
     0x1.9828ee9757042p-1014, 0x1.59c461da52a35p-809, 0.0, 0.0,
     0x1.daec58e5cb381p-624, 0x1.ad1fc7170064cp-972, 0x1.9e57a397ddd91p-1006, 0.0,
     0x1.ce923518be357p-787, 0.0, 0x1.f966835653d6ep-856, 0.0, 0.0, 0.0,
     0x1.5a5245884ac24p-924, 0x1.2f304795b3c91p-865, 0x1.5cee77af45a3ep-97,
     0x1.1573760d783d9p-883, 0x1.b930a58a2507p-284, 0x1.eb3e48188cb95p-489,
     0x1.653b0971efc2ap-759, 0.0, 0x1.fcb637f59bd8cp-762, 0x1.8408c851cc131p-580, 0.0,
     0.0, 0x1.183d38eca64a1p-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18054e38675bp-748,
     0x1.41480e25690f5p-24, 0x1.14c120e242f9bp-486, 0.0, 0x1.c8335cd1c2bb5p-656,
     0x1.518976165b488p-235, 0.0, 0.0, 0x1.927ce70807398p-405, 0.0,
     0x1.212de9f82c0e7p-328, 0x1.2d2e2367aca7ap-964, 0.0, 0x1.1bd401c6a98a9p-28, 0.0,
     0x1.9246db3a65431p-826, 0.0, 0.0, 0x1.9faa26cdb02e6p-736, 0x1.502873bfd908bp-552,
     0x1.d65a9d90547c3p-181, 0.0, 0x1.9d9d2e66ec6ccp-293, 0x1.3e5a2d774ba3bp-742, 0.0,
     0x1.7575282b7d482p-46, 0.0, 0.0, 0x1.44ab5a1ac29c2p-240, 0.0, 0.0,
     0x1.1df3986aa5a66p-846, 0.0, 0x1.c1b251aaba95dp-123, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65af9e08500a2p-686, 0.0, 0x1.57a2c4b919d72p-1021, 0x1.0b479f4b968e6p-1010,
     0x1.19e94745ff9aep-298, 0.0, 0.0, 0.0, 0x1.5d5cc138151fdp-719,
     0x1.851c3b459a1eep-633, 0.0, 0.0, 0.0, 0.0, 0x1.b848d2883240bp-761,
     0x1.826d4843648b4p-215, 0.0, 0x1.e83e9e5424fb1p-242, 0.0, 0.0, 0.0, 0.0,
     0x1.373ba372e08e5p-417, 0x1.fbc8f82009d24p-206, 0x1.7560460ba8f7cp-145, 0.0,
     0x1.2559c1ce25b33p-883, 0x1.cf19207b94f3ep-271, 0x1.ebf8b255039c5p-711, 0.0,
     0x1.4144f114e6e2bp-545, 0x1.f0599ca16a44ep-750, 0x1.b51f1ccbf741cp-25, 0.0,
     0x1.f98be1b407fa8p-277, 0x1.de709dc610ccbp-482, 0x1.c28341d5fded3p-675,
     0x1.98f336364eaeap-255, 0.0, 0.0, 0x1.256ff1cd00d6fp-275, 0x1.9d1a8c6786eb2p-863,
     0.0, 0x1.48f304095b388p-503, 0.0, 0.0, 0.0, 0x1.0b5ff41b0a837p-221, 0.0,
     0x1.fc1196fe86e1ap-925, 0.0, 0.0, 0x1.b61503ab1cbdap-437, 0x1.bd4245e4af765p-91,
     0.0, 0.0, 0.0, 0x1.4b154e6291dc7p-829, 0.0, 0x1.8bc53338cc8b3p-926,
     0x1.1406f7e9d336bp-889, 0.0, 0x1.944941dfdb807p-793, 0x1.4e7712eae1151p-159,
     0x1.95c974d9ff12ep-697, 0x1.7c49b5da4fa6cp-176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cf37e3109229p-904, 0.0, 0x1.a06e74a4fd69bp-681, 0.0, 0x1.c5508303c96b8p-129,
     0x1.d6ec27233981ep-675, 0x1.ae8b1b69a2f02p-373, 0x1.1d771b196e47fp-160,
     0x1.7562ced64ea21p-593, 0x1.b6315bd03330dp-531, 0.0, 0x1.f6520c28ff1d5p-385, 0.0,
     0.0, 0.0, 0x1.c37e685f31111p-984, 0.0, 0.0, 0x1.a3c33bc3dcb4ap-177,
     0x1.e790fa409fa5p-755, 0.0, 0x1.e5d63925c2b3cp-81, 0.0, 0x1.0b0b61be54b99p-948,
     0.0, 0.0, 0.0, 0x1.2b3ca0ad68e98p-948, 0.0, 0.0, 0.0, 0.0,
     0x1.cba4d3eca239fp-287, 0.0, 0x1.eb5e493aac76bp-436, 0x1.417585f054429p-326, 0.0,
     0.0, 0x1.1ae30e3a583ap-739, 0x1.b98e426c9c4edp-413, 0x1.c8bf893203c92p-300, 0.0,
     0.0, 0.0, 0.0, 0x1.fabce7c47c88ap-193, 0x1.68dc6f705f259p-9, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5e3f8b3b5e247p-338, 0x1.8917599478e79p-487, 0x1.006e2289749abp-877,
     0x1.e0bc99d560aaep-519, 0x1.80665ef407a8fp-706, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b939a63c0cb9cp-398, 0x1.1901968a2b3a3p-2, 0x1.74020532a80ebp-143,
     0x1.e608ef439673ap-785, 0x1.a35095e38916cp-19, 0.0, 0.0, 0x1.d68136da61795p-206,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b4d02d7c0532p-274, 0x1.edeae0219aab9p-181, 0.0,
     0x1.f193499070094p-321, 0.0, 0x1.86b26cd19f218p-150, 0x1.b60ea675b108ap-241, 0.0,
     0x1.71be33a27fedep-4, 0x1.9dd3ffe33b4afp-21, 0x1.709e7f4d720c4p-954,
     0x1.37dadd5bfc6ccp-332, 0.0, 0.0, 0.0, 0x1.8d1fabcd8061cp-169,
     0x1.32d4bb67a1e88p-685, 0x1.7c4439c20e27p-989, 0x1.858f6687f97e3p-461,
     0x1.270dede726e7dp-778, 0.0, 0x1.bb77cb387a8ffp-195, 0.0, 0x1.997174642535ap-29,
     0.0, 0x1.b4b0ef535b5aap-134, 0.0, 0x1.62a292bbfdce1p-179, 0x1.f3b9f96d16958p-296,
     0x1.ad6f5c1588d5ap-1, 0.0, 0x1.3f2bc9bb11476p-605, 0.0, 0x1.9449af98ecd8dp-76,
     0x1.62397aade479cp-902, 0x1.4faf7b594cf97p-35, 0x1.65368ebb8b3a6p-439,
     0x1.7540d18735755p-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ccad2655e0e01p-355, 0.0, 0x1.fef615be1ba16p-835, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12a3ecc3d6b82p-703, 0.0, 0x1.9b6ed4d2583b9p-373, 0x1.1308a1ece337p-138,
     0x1.21323135c924ep-716, 0x1.b93ac8b0d558ep-544, 0.0, 0x1.cc329599fd147p-616,
     0x1.622f92cca0f3ap-617, 0.0, 0x1.58e8b863b688dp-849, 0x1.f70d82c4ae0f2p-520, 0.0,
     0x1.a9d8d2db2697cp-146, 0x1.3a3a0758ed08ep-910, 0x1.668ae396ea25ep-194,
     0x1.47170bc91e57fp-455, 0x1.1cb7a40316c13p-165, 0.0, 0x1.7ea3413c262d5p-45, 0.0,
     0.0, 0x1.5aa53e8bc5e92p-514, 0x1.44f4290c7a3bp-36, 0x1.813d119b2901dp-200,
     0x1.790f991136fe6p-48, 0x1.a5d7499e494cap-593, 0x1.cb74943b2ebcbp-322,
     0x1.e7a644ceb5f41p-432, 0x1.bd26ca8c7b5a4p-294, 0x1.0967fa3cfecap-368, 0.0, 0.0,
     0.0, 0x1.796d3038e3848p-236, 0x1.1a43adbd250f9p-580, 0x1.3f17584681d63p-128, 0.0,
     0x1.7fe84786ba0e9p-306, 0.0, 0.0, 0x1.f91c23db49f28p-190, 0.0, 0.0, 0.0,
     0x1.6659423bc8786p-356, 0.0, 0x1.5364d16237b02p-715, 0.0, 0x1.263cb57cc6c82p-126,
     0x1.5ac0eda8079c6p-575, 0.0, 0x1.35b499643f1acp-598, 0.0, 0x1.0715d17975eafp-566,
     0x1.9cd2d2f12ae08p-713, 0.0, 0x1.dea86e14aed3dp-896, 0x1.79832e827d766p-244,
     0x1.d37c534882e42p-26, 0.0, 0x1.ed383eea01bcfp-447, 0x1.beece0639b6dbp-87,
     0x1.7a1c8f34573a6p-78, 0x1.b2b1749943c1p-398, 0x1.c2baece065cc3p-493, 0.0,
     0x1.de4c970c1929fp-19, 0.0, 0.0, 0x1.6b5149f02563p-626, 0x1.f94b23ba6656ep-5,
     0.0, 0.0, 0x1.9c6922ad31d48p-187, 0.0, 0x1.2ca39b6a96a6dp-574,
     0x1.8c7ce9b74605ap-109, 0.0, 0x1.83231b2d303e8p-198, 0x1.0d90cb2051951p-185, 0.0,
     0.0, 0x1.c406787f2d1eep-337, 0x1.dfb8b79ba1c9fp-204, 0x1.e966274439ccbp-796, 0.0,
     0.0, 0.0, 0.0, 0x1.512e344464d3dp-872, 0.0, 0.0, 0x1.be3651d614195p-179,
     0x1.54195e1468e6p-3, 0x1.54fc081cce7e7p-397, 0.0, 0x1.78e41dbebd45bp-774,
     0x1.f8be62bbc6c0ap-153, 0.0, 0x1.34074d030bb05p-740, 0.0, 0.0,
     0x1.32fb4d0ef43dcp-491, 0x1.bbd8d1e44a131p-805, 0x1.46202e28e88a8p-523,
     0x1.6d3fd8ee76686p-722, 0.0, 0.0, 0x1.c4e96fae47b79p-941, 0.0, 0.0,
     0x1.eb2f634b3b12bp-332, 0.0, 0x1.e469f30b005ffp-750, 0.0, 0x1.aebd5a140249ep-254,
     0.0, 0.0, 0.0, 0.0, 0x1.6060f452f3c4dp-626, 0.0, 0x1.1743842bc7ed3p-995, 0.0,
     0x1.d6c77a32b12a3p-802, 0x1.dfa902bdf2af6p-134, 0x1.1082af635a271p-42,
     0x1.f959426b2633cp-973, 0x1.13b3901b35a08p-752, 0.0, 0x1.3acdf67f69ddap-251, 0.0,
     0x1.54548d4dcc5p-665, 0x1.83254ba4d8ac2p-381, 0x1.31d987be251dfp-141, 0.0,
     0x1.f0384544dc06dp-974, 0.0, 0x1.59500b5ff3b27p-367, 0.0, 0.0,
     0x1.38c5aabf2f3a7p-963, 0.0, 0x1.79509e9bb9dbcp-766, 0x1.2b9c08150bd51p-571, 0.0,
     0x1.a7454782088adp-982, 0x1.949caa46aaf8fp-291, 0.0, 0x1.f62a0627b5ab4p-476, 0.0,
     0.0, 0x1.2abfe0aa61abcp-280, 0.0, 0x1.c5cbfe060484cp-634, 0x1.53d1dc7ca0c6p-486,
     0x1.92fb5304b16a6p-985, 0x1.d74c2c7e2d8fap-646, 0.0, 0x1.f3df4d7874405p-356, 0.0,
     0x1.234ab018b2d34p-284, 0x1.5a188271b609bp-724, 0.0, 0x1.0a898b49e54edp-782,
     0x1.c8c577f510204p-345, 0.0, 0x1.4a3916d6d564p-147, 0.0, 0.0,
     0x1.3384d4ffb5dcp-32, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6875f1760b14p-468,
     0x1.238ce898a2187p-650, 0.0, 0x1.abe9fad72c4fp-960, 0x1.11de2ee40027ep-491, 0.0,
     0.0, 0x1.0130397167addp-484, 0x1.47fdb33a55494p-416, 0.0, 0.0,
     0x1.342b466ddbd21p-681, 0.0, 0x1.99a755f6d9228p-775, 0x1.952d2cb07587fp-448,
     0x1.a6d24e2e94eacp-948, 0.0, 0x1.051465331d39dp-710, 0.0, 0.0, 0.0,
     0x1.74e68d19dadd9p-358, 0.0, 0x1.3aeb2007eb2c6p-676, 0.0, 0.0,
     0x1.4fff6ab695c57p-805, 0.0, 0x1.227cf31504f14p-53, 0x1.53b12dfbb958cp-660,
     0x1.9ddc9fc029d4ap-506, 0.0, 0x1.684da84a68005p-274, 0.0, 0.0,
     0x1.2a4a621497f7bp-640, 0x1.61a1b219d26f3p-661, 0x1.943f8de734e8fp-312, 0.0, 0.0,
     0x1.e0aef15cb0925p-108, 0.0, 0x1.c623fa9d1d66p-444, 0x1.7dbef0e862dcap-351,
     0x1.39b97f71c108ep-920, 0.0, 0.0, 0x1.99767ec0c2646p-905, 0x1.ec5c38d815234p-688,
     0.0, 0x1.306fab4e5eac9p-39, 0.0, 0.0, 0.0, 0x1.a8d314d3fffb4p-891, 0.0, 0.0, 0.0,
     0x1.bdeace312d089p-467, 0x1.e65bf0b72639dp-167, 0x1.c45f4b26878fap-196, 0.0, 0.0,
     0.0, 0x1.7d40e29932982p-210, 0x1.e913e9661270ep-474, 0.0, 0.0, 0.0,
     0x1.04e45141e6f34p-150, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf688ffcfbddep-546,
     0.0, 0.0, 0x1.e57139a499e84p-333, 0x1.4630fbddbef5bp-595, 0.0, 0.0,
     0x1.9821310af6116p-49, 0.0, 0.0, 0.0, 0.0, 0x1.9dcd93dd63271p-335,
     0x1.6290526b21032p-574, 0.0, 0x1.96744cbb12f62p-339, 0x1.1d6f175d8a2eap-4, 0.0,
     0.0, 0.0, 0x1.d81ce543b61e5p-267, 0.0, 0.0, 0.0, 0x1.b16053bd4fa9ap-129, 0.0,
     0x1.58291a7fd26c1p-954, 0.0, 0x1.3b645fad21252p-214, 0.0, 0.0,
     0x1.85d0b3d853d34p-458, 0x1.fa6f3d7440fddp-814, 0.0, 0.0, 0x1.79e6a076d39e9p-671,
     0.0, 0.0, 0.0, 0.0, 0x1.8699e5753ee5p-473, 0x1.c9775f2bb278fp-868,
     0x1.5811f53898b4ap-122, 0.0, 0x1.1d6ad834e974ep-205, 0x1.81499daf20a8ep-410,
     0x1.5998c5cac5affp-325, 0x1.9afbc546828c6p-621, 0.0, 0.0, 0x1.2466f432ed674p-562,
     0.0, 0.0, 0.0, 0x1.285e6501599a9p-848, 0.0, 0x1.082b846815162p-111, 0.0, 0.0,
     0x1.5f87c37f0b55ap-770, 0.0, 0.0, 0.0, 0x1.f81ef627909b5p-349, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.62ea8e751bd68p-635, 0.0, 0x1.065b05119663ap-250, 0.0,
     0x1.659c4eb8ed0d2p-1011, 0x1.fcd7496ad5063p-43, 0x1.f9c6a5c2f3014p-686, 0.0, 0.0,
     0x1.cb025363aa3f1p-379, 0x1.bfb720e8aac43p-1011, 0x1.a07334f5797dp-366,
     0x1.91be493dedf8ep-882, 0x1.ffe8a358b7cfbp-178, 0x1.b36e20d90711cp-834, 0.0, 0.0,
     0x1.6364e63033479p-522, 0x1.7725ff6ea14ecp-683, 0x1.f59d4bc6d81cfp-33, 0.0, 0.0,
     0x1.1c81a2a1f71bfp-646, 0x1.917fc2d34b083p-999
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
            tmp1 = Sleef_logd2_u10avx2128(tmp0);
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
    printf("Sleef_logd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_logd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
