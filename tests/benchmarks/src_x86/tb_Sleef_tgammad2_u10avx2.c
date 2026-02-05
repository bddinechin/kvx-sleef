/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammad2_u10avx2128.c --function Sleef_tgammad2_u10avx2128 \
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
     0x1.65469b25f02abp-419, 0.0, 0.0, 0.0, 0x1.5c826a2c20fe3p-28, 0.0, 0.0, 0.0,
     0.0, 0x1.000459b5ba6c8p-854, 0.0, 0.0, 0x1.d1e21ceb9aa8ep-530, 0.0, 0.0,
     0x1.f870c5d2dec12p-851, 0.0, 0.0, 0x1.09dccc6ca695p-397, 0.0,
     0x1.c9df7ae113b9dp-82, 0.0, 0x1.ac4a929de0c58p-119, 0.0, 0.0, 0.0,
     0x1.89010368680f6p-370, 0x1.161ab794ae7aap-100, 0x1.cc8759b790fe8p-483, 0.0,
     0x1.0e76dfa3fa32ap-1014, 0x1.144d7a7aac83fp-190, 0.0, 0x1.6f4eb7d101977p-590,
     0x1.e6a22c96a7653p-957, 0.0, 0.0, 0x1.f3933f77ea5b6p-148, 0x1.7c10ef9dd7fe4p-124,
     0x1.642ffb2dc0025p-10, 0x1.c8ea730724505p-846, 0x1.591a9ea52d023p-467,
     0x1.4937e990cb6c4p-472, 0.0, 0.0, 0x1.dcb24d14f6baep-968, 0.0, 0.0, 0.0, 0.0,
     0x1.4516d71c55a39p-483, 0.0, 0.0, 0x1.b82a222743237p-570, 0x1.bc3ce5643dc2dp-964,
     0.0, 0x1.dfa3f6d28a6a8p-857, 0x1.9286f8b7b34f4p-251, 0.0, 0x1.f2aa302d0577ep-53,
     0x1.90450e9d53a93p-87, 0x1.7331c1ecda6ccp-176, 0.0, 0.0, 0.0, 0.0,
     0x1.c49117d21910cp-525, 0.0, 0x1.659aa323e303ep-471, 0.0, 0x1.eb65be6a3e768p-790,
     0x1.1be0331db03b7p-336, 0x1.a93c255cab383p-107, 0x1.aa5612de13b44p-485,
     0x1.3be176224debcp-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.538c1fab74ae6p-118,
     0x1.5b35823d3caf4p-757, 0.0, 0.0, 0x1.2ef418611ea1cp-812, 0.0, 0.0, 0.0,
     0x1.500d1127055c4p-815, 0.0, 0x1.96fed07c5d072p-621, 0.0, 0x1.917a31068eb2p-198,
     0x1.f7b190538b646p-1019, 0x1.eecfad0b2ea6cp-722, 0x1.79f3df71d6843p-423,
     0x1.4f32ffb4c018dp-189, 0.0, 0x1.6834186c71072p-928, 0.0, 0x1.6aa52d89be9f1p-423,
     0.0, 0x1.7db41bd5180efp-648, 0x1.f690c8c9ef14ep-116, 0.0, 0.0, 0.0,
     0x1.d1b99ea5b32c8p-1020, 0x1.643bbd0db4b3p-885, 0.0, 0x1.8786de6b8a965p-349,
     0x1.707ba2557c335p-814, 0x1.e640d5a74c02ap-230, 0.0, 0.0, 0.0, 0.0,
     0x1.2a123876dbc47p-728, 0.0, 0.0, 0x1.d2d68b8dc514dp-160, 0x1.13a609b4ee471p-658,
     0x1.fd84596053599p-685, 0x1.8990594d34ab8p-473, 0.0, 0.0, 0x1.eec4f1ddb9e93p-597,
     0.0, 0x1.1fcdb228bb90ap-254, 0.0, 0.0, 0.0, 0x1.d044e13484a03p-955, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e608ce6f6c7d4p-823, 0.0, 0.0, 0x1.efb9aa227011bp-463, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bee0654c0fef6p-212, 0x1.5be7afe2ee47bp-604, 0.0,
     0x1.5f073054c0152p-1012, 0.0, 0.0, 0x1.9b86e56b8949cp-671, 0.0,
     0x1.6b45fec9190f4p-501, 0x1.f0df9943fa244p-178, 0x1.c07399bd0b393p-465,
     0x1.04325e0620407p-677, 0x1.56906f72b94c4p-72, 0.0, 0x1.f0f6895858a17p-508, 0.0,
     0x1.998854c67ba62p-946, 0.0, 0x1.e4ee24f5fb424p-185, 0x1.854a1e145190ep-935,
     0x1.27fba68ef1fd2p-750, 0x1.c015d0cd28f6p-770, 0.0, 0.0, 0x1.acc11863d4d8bp-379,
     0x1.12dbe949abf05p-434, 0.0, 0x1.7092fe99e834cp-540, 0x1.3380af6e5a5e7p-765, 0.0,
     0.0, 0x1.74a44b92bd29ap-980, 0.0, 0.0, 0x1.d9eace842bcd7p-619,
     0x1.762e98c1bb42bp-348, 0x1.7bb7f1cd6a5d3p-1015, 0.0, 0.0, 0.0,
     0x1.13d39f450b0cdp-748, 0.0, 0x1.fbe64b175b91ap-894, 0.0, 0x1.26f20a6de1241p-731,
     0.0, 0x1.b893f4fe32c52p-733, 0.0, 0.0, 0x1.1b143635341ebp-42, 0.0,
     0x1.33becbc46cefdp-646, 0.0, 0.0, 0.0, 0x1.bf6cf20e6a86dp-670, 0.0,
     0x1.5695a9de7c5dap-61, 0.0, 0x1.d3e9cbc64ca36p-818, 0.0, 0x1.052d6794385d6p-56,
     0x1.dc8113cb2cc9ep-99, 0x1.8e0702bfcde9ep-456, 0.0, 0x1.d0e5e9847eb5cp-569,
     0x1.ed9a6dcb080a8p-289, 0x1.78611378f11b4p-185, 0.0, 0x1.a267e73da4042p-915,
     0x1.08d1f1280cc1cp-493, 0x1.f6505137240f3p-514, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c83b6d1d6b23p-95, 0.0, 0x1.73b6430e4bef7p-118, 0x1.4d052cf78970ep-606,
     0x1.f55c32726bf6p-859, 0.0, 0.0, 0x1.12f345a6445eep-490, 0x1.bcb78e64ab9ebp-786,
     0x1.1f021caed5cb2p-410, 0x1.00cade3320192p-1011, 0.0, 0x1.572c6abb91106p-79, 0.0,
     0x1.e171eb347f751p-431, 0.0, 0.0, 0x1.3053abddd1009p-529, 0.0,
     0x1.113d323eeb7fep-22, 0x1.2a51b08618c5fp-400, 0x1.cb34f69342757p-698,
     0x1.3da8afb3112b2p-57, 0.0, 0.0, 0.0, 0x1.4673fc2735871p-695, 0.0, 0.0, 0.0,
     0x1.b183a874b768p-629, 0x1.18b36f3b50a68p-477, 0.0, 0.0, 0x1.958ea51da50c6p-678,
     0x1.d3cae5af50481p-517, 0.0, 0x1.a3190327f570ep-378, 0.0, 0x1.18eaba16f7585p-398,
     0x1.354b38e9e4d54p-38, 0x1.5888ca7b97314p-151, 0x1.fd82c27e7ede7p-20, 0.0, 0.0,
     0x1.e8fb0fe9c9e26p-436, 0.0, 0x1.e6d42ecccacacp-511, 0x1.01c53da2d41d5p-152, 0.0,
     0x1.f51f12400fd93p-141, 0.0, 0x1.7d4e01ad74d99p-210, 0x1.55fcce5e0c456p-804,
     0x1.ee95a6ea812cep-527, 0.0, 0x1.e2610419eafccp-1022, 0.0,
     0x1.1060a84f81829p-616, 0x1.686030bb2d90ep-250, 0.0, 0.0, 0x1.62ffe96e7352ep-882,
     0x1.5637b812c6155p-530, 0.0, 0.0, 0x1.d838895457274p-447, 0x1.f99fa20fcf161p-929,
     0.0, 0x1.8706c8237f293p-42, 0x1.24f02d09c3b1p-866, 0x1.44d38698cf33bp-311,
     0x1.582cfa6fc2e89p-171, 0.0, 0.0, 0x1.b21e389e63428p-378, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.12e7c6db92b6dp-815, 0.0, 0.0, 0x1.897850e409b07p-207,
     0x1.8f5b42059e767p-743, 0.0, 0x1.a4e15768b0d04p-67, 0x1.d8f25679a2f77p-392,
     0x1.061b17aae0b1cp-282, 0.0, 0.0, 0.0, 0x1.391d2365a62c7p-820,
     0x1.5118fb8e3e3b6p-650, 0x1.aa6c320879228p-933, 0x1.f45c33fab1502p-509, 0.0, 0.0,
     0x1.5a1e0c51d38dfp-919, 0x1.fb6edcc2deae6p-1015, 0x1.d50f2fc45b323p-684,
     0x1.21cec2c69483bp-1011, 0x1.925f0dc668afbp-40, 0x1.cb7b29e04185ap-381, 0.0,
     0x1.c026ff197d997p-207, 0x1.9aa62ec8e588bp-793, 0x1.f769e06d4c674p-127, 0.0, 0.0,
     0.0, 0x1.0b0997d7ff0c8p-401, 0x1.03fb1e9475149p-330, 0.0, 0.0,
     0x1.c0faede16a846p-520, 0.0, 0.0, 0.0, 0.0, 0x1.2dc1761057ffdp-659,
     0x1.1ef10e8905e94p-40, 0.0, 0.0, 0x1.16c66403af385p-862, 0.0,
     0x1.8c0df859220b2p-320, 0x1.7f0c9fc8a6afap-500, 0x1.bc4d08dafb0ep-327, 0.0, 0.0,
     0x1.d7af7778a4b0dp-1000, 0x1.5e8b03b37a4d5p-396, 0x1.f7d0b8b4ac393p-392,
     0x1.3cd9aed0fa2ecp-310, 0.0, 0x1.c7cbd577f04a9p-739, 0.0, 0x1.82bb5502a8e66p-326,
     0x1.d341a4f945bd3p-908, 0x1.98fbfe13a42fp-789, 0.0, 0x1.86a9044b81b04p-296,
     0x1.c82c7596f58cbp-842, 0.0, 0.0, 0.0, 0x1.f5c8c7de8c2fcp-730, 0.0, 0.0,
     0x1.04ecda2ea60ccp-758, 0x1.f0b8aef0cdf2p-756, 0x1.1cd2e555b335ap-157, 0.0,
     0x1.4c7766ade4bd4p-250, 0.0, 0x1.0fec8918932b2p-662, 0.0, 0x1.5ee7689924727p-644,
     0.0, 0.0, 0.0, 0x1.e8e89ddd535cap-934, 0.0, 0x1.3c48b730c99fcp-522, 0.0,
     0x1.a815fbccc1e39p-857, 0.0, 0x1.dc19e4458f4dep-20, 0x1.23a1c25f2824cp-315,
     0x1.f9eae919a9ea3p-904, 0x1.ab7c52f414a26p-555, 0x1.9f28ce995197ap-101, 0.0,
     0x1.d28c7e77194e5p-434, 0.0, 0x1.fd74d35fbaf48p-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e804659f11e2cp-393, 0x1.54c1f6e08a582p-712, 0.0, 0x1.bb6b3821fc5f5p-916,
     0x1.b2eebadf5fbecp-942, 0.0, 0.0, 0x1.dc12f3a7762e9p-786, 0x1.3548a49d608dp-53,
     0x1.a7db04276f5d5p-480, 0.0, 0x1.5a659c3db5bbep-386, 0.0, 0.0,
     0x1.fb87388ef7e0fp-340, 0x1.054f2048b7eb9p-973, 0x1.06e8a0c07dc36p-406, 0.0,
     0x1.c31614a414c4ep-54, 0x1.f43003f24710fp-531, 0.0, 0.0, 0.0,
     0x1.de9f91c15635cp-759, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b1880efd27a1p-265,
     0x1.129b7a25ecb37p-1019, 0x1.01d222182b903p-69, 0x1.7d23066d201ccp-818,
     0x1.9bfdff35ef75bp-409, 0.0, 0x1.21c495af52818p-134, 0.0, 0.0,
     0x1.63260dca403b7p-102, 0.0, 0x1.97a88c5795f0ep-391, 0.0, 0.0,
     0x1.ad5131d23c842p-427, 0x1.025d5a9b29627p-48, 0x1.d86fe29e918f2p-961,
     0x1.b8a5ed548a02ep-394, 0x1.d44040dd4b2dp-1019, 0x1.80a3a39d8eb25p-387, 0.0,
     0x1.92e8802379bbcp-637, 0x1.7ec5768417db9p-722, 0.0, 0.0, 0x1.0cf77cb8e367ep-786,
     0x1.300389c92eaf4p-515, 0x1.9da211401c714p-429, 0x1.7cf4a7fa0eefp-946,
     0x1.7a5728cd56ecbp-924, 0.0, 0x1.fcb52ec83d904p-927, 0.0, 0x1.6961f0d4dfca6p-231,
     0x1.bb7eaf214f977p-842, 0x1.11977963d9d8ap-429, 0.0, 0.0, 0x1.44911a6ff8ec2p-894,
     0.0, 0x1.e5228568f1e12p-155, 0x1.2c042cf5e2825p-971, 0x1.ca917a15ed36cp-803, 0.0,
     0x1.3c47209ca290bp-887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc10c15cf121p-396, 0.0, 0.0, 0x1.378305f3bce2ap-238, 0.0,
     0x1.0b15b44b2bd57p-837, 0x1.aa0778ba58364p-389, 0.0, 0.0, 0.0,
     0x1.0ad059119f753p-818, 0.0, 0x1.fa85057372c3ap-453, 0.0, 0.0,
     0x1.a9edcd56c49a7p-690, 0.0, 0.0, 0.0, 0x1.3643d1d9d7ea5p-924, 0.0,
     0x1.4c302cc2313b3p-571, 0.0, 0x1.8cd97a8f095e6p-833, 0x1.04afd634eb1cap-23, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dfe6fdc0c4393p-736, 0.0, 0.0, 0.0,
     0x1.703267fe635e2p-311, 0.0, 0x1.ee1da3fc90a12p-581, 0.0, 0x1.1ae60b56fdb12p-26,
     0.0, 0.0, 0x1.de272fc57d676p-866, 0.0, 0x1.cd57a3fca9d37p-770, 0.0,
     0x1.3342c4ffda7a7p-606, 0x1.32dc2debbd772p-416, 0.0, 0x1.7f4244f48d474p-553, 0.0,
     0x1.4f650bcb6b4a5p-136, 0x1.753356631d247p-561, 0x1.f93eedf6b5d7cp-328, 0.0,
     0x1.6ef5235024045p-459, 0.0, 0.0, 0x1.2ccdbd1828789p-91, 0.0,
     0x1.0046c6ee60891p-964, 0x1.2b836eab1f277p-543, 0.0, 0.0, 0.0,
     0x1.51cc19e4f06a7p-594, 0.0, 0x1.824d75d33fe11p-994, 0x1.8b5679324069ep-165,
     0x1.0e5baecd9c6e7p-200, 0.0, 0x1.261bb3f8dbef2p-713, 0x1.a4dbf9a7df66fp-721, 0.0,
     0.0, 0x1.1e1dbe0adca0fp-71, 0x1.5816a1b632d7fp-102, 0x1.1ed961d857617p-867, 0.0,
     0.0, 0x1.ffc14c6149728p-760, 0.0, 0.0, 0x1.2e5b476863e0dp-439,
     0x1.f8a823befd5dep-355, 0x1.244e0fd27b1dap-99, 0.0, 0.0, 0x1.d3637cd57cb0fp-952,
     0x1.7580361d53e17p-404, 0x1.c69b3b0120715p-140, 0x1.85d07111da127p-547,
     0x1.60ae41204509bp-796, 0.0, 0.0, 0.0, 0x1.87ee7facea3aep-479, 0.0,
     0x1.6394442e6ecc7p-929, 0x1.496d97da354bap-893, 0.0, 0x1.d30c26ce1b1fdp-273, 0.0,
     0.0, 0x1.ace3732c41654p-911, 0x1.157e2d6f587e5p-110, 0.0, 0x1.a5f6ec30a85fbp-209,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fbad51cc870a2p-56, 0x1.c533162b9d94p-376,
     0x1.0084576ee87f9p-418, 0.0, 0.0, 0x1.1e5d62a92767ep-839, 0x1.61c8730dbd005p-366,
     0.0, 0.0, 0x1.b564bc5fb96edp-488, 0x1.3c660cce0c12fp-680, 0x1.66dc1769bfa99p-326,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.579fbf32a5752p-222,
     0x1.2b53de089cc59p-131, 0x1.465c44fe204d6p-860, 0.0, 0x1.823917968dafbp-560, 0.0,
     0x1.0e89183ea537dp-845, 0.0, 0.0, 0x1.d41390ce6e758p-147, 0x1.e0e4e23eea0fp-48,
     0.0, 0x1.09e0af8783302p-948, 0x1.c737d5b67c596p-512, 0.0, 0x1.e6ee2835545dfp-94,
     0.0, 0.0, 0.0, 0.0, 0x1.20d0ef5d799e1p-346, 0.0, 0x1.52fa574e51bc8p-276, 0.0,
     0x1.f3ff522a14b4bp-49, 0x1.c4fb105bb569ap-265, 0x1.e5681311eac99p-524, 0.0,
     0x1.23e4d5df33797p-432, 0.0, 0.0, 0.0, 0.0, 0x1.67d010a9b6c12p-1016,
     0x1.dc8d61ee3524ep-370, 0.0, 0x1.ee025fe54ba22p-161, 0x1.0dc0afcd4ab25p-543, 0.0,
     0.0, 0x1.09d5f8b795db9p-792, 0x1.875f396358cefp-246, 0.0, 0.0,
     0x1.b721864d28f08p-726, 0.0, 0x1.6cbec53db5368p-579, 0x1.37487c0a767f2p-120, 0.0,
     0x1.3e713279e09cdp-546, 0.0, 0.0, 0.0, 0x1.7885262b83dddp-739, 0.0,
     0x1.ae56664466913p-578, 0.0, 0x1.210a0ec5bd27ep-850, 0.0, 0x1.9a2c6ed067d28p-660,
     0.0, 0.0, 0x1.803eae02539f5p-547, 0x1.476b2720a4f43p-148, 0.0,
     0x1.347307d36283p-217, 0.0, 0.0, 0x1.43b9018f640fdp-238, 0x1.baef5d28966bfp-281,
     0x1.04e9251693001p-363, 0x1.516fcf8dcb46ap-5, 0x1.434270fee8984p-847,
     0x1.2ee83f6fdaef7p-708, 0.0, 0.0, 0.0, 0x1.6053ba36f7c3bp-374,
     0x1.876ad317d5a84p-973, 0.0, 0.0, 0x1.d6d7f2f8e34dfp-41, 0.0, 0.0,
     0x1.64777337516f2p-128, 0x1.06db34148f90bp-513, 0.0, 0.0, 0.0,
     0x1.a94b2fdf601eap-643, 0.0, 0x1.a6000e51c7408p-31, 0.0, 0x1.36a02402dc558p-896,
     0.0, 0.0, 0x1.d0b9c14f07008p-56, 0x1.a593bee51a291p-546, 0.0,
     0x1.2a005c2febdfp-532, 0.0, 0x1.021bbc7226fcdp-536, 0x1.cb4edc83a5e2fp-240, 0.0,
     0x1.62aec8bc23c7cp-442, 0.0, 0x1.c4962d5c4712cp-40, 0x1.e18324e665b6fp-447, 0.0,
     0x1.17265b581470ep-369, 0x1.4e3606f10f721p-826, 0x1.de2a20378fa62p-447, 0.0,
     0x1.0ae87cf94c49p-975, 0.0, 0x1.f6b595861d82dp-959, 0x1.6e6df3a324094p-80, 0.0,
     0x1.ab4ca3b7c8655p-738, 0x1.d4ea6ebd2d4e3p-611, 0x1.f1a48f0db6a29p-486,
     0x1.87fe6bed644dcp-775, 0x1.0cc24b04034dp-745, 0x1.7456ccc7e5866p-677, 0.0,
     0x1.19f29a500fabfp-935, 0.0, 0x1.ae2d2caa8770dp-762, 0.0, 0x1.16521ed4d154dp-828,
     0x1.d653c8e34347fp-714, 0x1.72d8e5cbab254p-5, 0x1.dec0ee5cc8321p-997,
     0x1.c6dadb9e3854p-238, 0.0, 0.0, 0x1.a80fb509df254p-802, 0.0,
     0x1.ed4a8e5553b64p-303, 0x1.cb8d75d5e7965p-669, 0x1.2db8dc404f83cp-721, 0.0,
     0x1.e55e7325d99ecp-643, 0x1.2c77014ec3f85p-213, 0x1.a422c3331e1fep-9,
     0x1.89295d5087437p-945, 0x1.70f6849919076p-231, 0.0, 0.0, 0.0, 0.0,
     0x1.33b7f0eabf042p-144, 0x1.a15b554ea26ecp-808, 0x1.2c3581dcaadacp-365,
     0x1.ba90535c94b0fp-883, 0x1.a77e5135e5c7fp-381, 0.0, 0.0, 0x1.c6ae2cd175031p-785,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e2505e0ab908dp-746, 0x1.7dfec6934f866p-71,
     0x1.3fe92e536622ap-133, 0.0, 0x1.a4e38ebed763ep-562, 0x1.09dcebf506623p-631, 0.0,
     0.0, 0x1.a545bba4f047ap-503, 0.0, 0x1.09e6209919951p-509, 0x1.de43e5d159123p-917,
     0x1.be8a562d652cfp-38, 0x1.b713af07bca82p-598, 0x1.1c31f7f5169b3p-992, 0.0, 0.0,
     0x1.5a515aca1eb9ap-846, 0x1.0dd587732d6afp-218, 0.0, 0x1.e8a282cb60dap-680, 0.0,
     0.0, 0.0, 0x1.cad323e7fa654p-848, 0x1.c0746972de3b8p-937, 0x1.76af31a222c9ep-907,
     0x1.6cd4270492489p-862, 0x1.b9705b9c21877p-700, 0.0, 0x1.87821c4f72ffp-814, 0.0,
     0x1.8485505e49626p-81, 0x1.8603f6729e0e6p-545, 0.0, 0.0, 0.0,
     0x1.a52d5cc6c9e3ep-808, 0.0, 0.0, 0x1.1b3893262bb1p-1012, 0x1.7440b4fd72031p-565,
     0.0, 0x1.c784df238de65p-935, 0x1.7dff0e347f9f5p-774, 0.0, 0.0, 0.0, 0.0,
     0x1.431386c5dbdb9p-876, 0.0, 0x1.07e5cce4160d9p-164, 0.0, 0x1.eb23d520f350dp-210,
     0x1.8050d9a67de7cp-163, 0.0, 0.0, 0x1.92b94b9a35e02p-836, 0.0,
     0x1.ab3c7a9e8418bp-567, 0x1.cb5e2442c6086p-493, 0x1.77d449c08291cp-519, 0.0,
     0x1.883208e5487d4p-724, 0x1.6d2ebcdcb89cap-208, 0x1.48b9c4135b3efp-81, 0.0, 0.0,
     0.0, 0x1.41348299a0f48p-1014, 0.0, 0x1.c8b7aa9b927cdp-683, 0.0, 0.0,
     0x1.25d573d55c288p-91, 0.0, 0x1.f536c4976f03cp-411, 0x1.dd0f1a271ade6p-807, 0.0,
     0x1.4e7a5d86b4c52p-344, 0.0, 0.0, 0x1.8447bb64fe398p-776, 0x1.b88e352509de7p-378,
     0.0, 0.0, 0.0, 0x1.daa5c545585d4p-142, 0x1.9df222cfea9e5p-124,
     0x1.17ff40f09745cp-618, 0.0, 0.0, 0.0, 0x1.e82340a2e9cc9p-856, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.673db8d1def4ep-65, 0x1.226ba1c68b94fp-519, 0x1.778b4d7b832ffp-499,
     0.0, 0x1.8d4594e51cc51p-754, 0.0, 0.0, 0x1.ae61cca8bff2bp-493,
     0x1.165575c3c6c74p-222, 0x1.dacf0e3ea3576p-535, 0.0, 0x1.cbd300feb7d4dp-770, 0.0,
     0x1.9486c8d31a113p-155, 0x1.79c46f332c26bp-980, 0.0, 0x1.ccb859f015da5p-610, 0.0,
     0x1.ddb0656f12842p-99, 0x1.780a554af801dp-254, 0.0, 0x1.7ba8063881c8fp-838,
     0x1.0929f058403e6p-396, 0x1.1f5df5d192ae1p-869, 0.0, 0.0, 0x1.7e8d04e29fd13p-382,
     0.0, 0.0, 0.0, 0.0, 0x1.183407f01646p-876, 0.0, 0x1.ba16bf16327d5p-328, 0.0, 0.0,
     0x1.ddbd1100aea99p-687, 0.0, 0.0, 0x1.b6c346484a181p-699, 0.0,
     0x1.ce9f23719a139p-80, 0x1.b0e1ee73312ccp-388, 0.0, 0.0, 0.0,
     0x1.3be877611a23bp-354, 0.0, 0x1.174cadc88e265p-162, 0x1.ddf6bab2b3952p-378, 0.0,
     0x1.d27bccbda28abp-719, 0.0, 0x1.d3653f670a47ap-763, 0.0, 0.0, 0.0,
     0x1.a699c91f3942bp-154, 0x1.3d78168b5562fp-807, 0x1.be0c2f41841c9p-253, 0.0,
     0x1.f1f9da7c5fd73p-121, 0x1.eaf07de2af022p-848, 0x1.64d3100684d77p-946,
     0x1.0357d906edd32p-773, 0.0, 0.0, 0x1.626b6b55f4ca1p-185, 0.0, 0.0,
     0x1.f7e5fca222d3dp-931, 0.0, 0.0, 0.0, 0x1.770d597874effp-451, 0.0,
     0x1.da462a7d1dd66p-36, 0x1.5da665fbbc7b1p-150, 0.0, 0x1.37af7136f9a7ep-827,
     0x1.2d2f3ef3ab2cbp-589, 0x1.8881114813396p-697, 0.0, 0.0, 0x1.076944d45d813p-400,
     0.0, 0x1.31d37169c74ccp-560, 0.0, 0x1.ed53bbb4c0a65p-546, 0.0,
     0x1.0e771eaf3ee15p-96, 0.0, 0x1.fcf8f2a54d9b2p-69, 0.0, 0.0, 0.0,
     0x1.19cb897d96879p-83, 0.0, 0x1.f6548eab45ebp-255, 0.0, 0x1.5731c2f0f68c1p-951,
     0x1.fbf6fea9dc044p-143, 0.0, 0.0, 0x1.4ef5b17e5288ap-565, 0x1.f12318ad53989p-17,
     0x1.923f6624bab31p-297, 0.0, 0x1.b2c7bc608df6bp-346, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_tgammad2_u10avx2128(tmp0);
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
    printf("Sleef_tgammad2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tgammad2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
