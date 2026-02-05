/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd2_u10avx2128.c --function \
 *     Sleef_finz_acosd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.6d6bd5ea39934p-221, 0.0, 0.0, 0.0, 0x1.31e7390fe212dp-4, 0.0,
     0x1.00a0663ace722p-696, 0.0, 0x1.1095f2bcffbb2p-432, 0x1.af4530127c3c1p-407,
     0x1.39271e9e43d61p-557, 0x1.cd55366b12d7dp-713, 0.0, 0x1.3c32ed49875cap-678,
     0x1.2da8e686b3ff3p-256, 0x1.b047cddc43dep-988, 0.0, 0.0, 0.0,
     0x1.b98057313508p-650, 0x1.83ce5e20d2ad2p-94, 0x1.c300b30050e84p-755, 0.0,
     0x1.a59b17f36cd7bp-709, 0.0, 0.0, 0x1.8ae746b8b46c5p-91, 0x1.5bb171a41f52ep-72,
     0.0, 0.0, 0.0, 0x1.f167bb17d14dep-609, 0.0, 0x1.425053c800c17p-560,
     0x1.300997a5a8edfp-777, 0.0, 0.0, 0x1.26814da3e1751p-517, 0x1.20fb163a8e9b9p-68,
     0x1.bfa9a6aa059fap-1001, 0x1.0480564a34989p-503, 0x1.2f338f186460dp-398,
     0x1.43e684a4a894bp-82, 0.0, 0x1.bea1b63d4d48ep-875, 0x1.ae94a0ff0f775p-766, 0.0,
     0x1.d66510c391cbap-787, 0x1.04cfffaff1629p-3, 0.0, 0.0, 0.0, 0.0,
     0x1.b8397e72866bfp-784, 0x1.8890eee98b056p-412, 0.0, 0x1.fcdb89fcf6ee2p-199, 0.0,
     0.0, 0x1.6b67ec94d41f8p-543, 0.0, 0x1.2ee7d59f19c85p-935, 0.0,
     0x1.822d3d3e062a5p-866, 0.0, 0.0, 0x1.2587d99712754p-149, 0x1.d518e2c095cap-440,
     0.0, 0x1.3f4221c1aa8a8p-648, 0.0, 0x1.7b9f07318750ap-297, 0.0,
     0x1.b7dc2566dda72p-381, 0x1.2f0f9125255afp-20, 0.0, 0.0, 0x1.c4d2106853b8ap-536,
     0.0, 0.0, 0x1.b4990336a4073p-749, 0x1.0aeb152be8df4p-506, 0.0,
     0x1.17fa06abe19d1p-778, 0.0, 0x1.4ab660884dc56p-132, 0.0, 0x1.efb853c1ef36dp-280,
     0.0, 0x1.36a82fa3b7d59p-933, 0x1.d032127610aebp-898, 0.0, 0.0,
     0x1.cb53197f71085p-949, 0.0, 0.0, 0.0, 0x1.beb7bd60bbf37p-1010,
     0x1.33af93150a8fap-582, 0x1.e8ac110abef9ap-262, 0x1.7cdb3ffac2e9dp-671,
     0x1.ae7dc63c301bfp-596, 0x1.14ec69ad8f4b1p-533, 0.0, 0x1.cfa58793a76f4p-793,
     0x1.5cc7af7ae194bp-389, 0.0, 0.0, 0.0, 0x1.958f490e278cap-32, 0.0, 0.0,
     0x1.55d4e38caf4e4p-859, 0x1.5f092965d31acp-188, 0.0, 0.0, 0x1.6f211bb50580fp-634,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c36719d88d57bp-114, 0.0, 0.0,
     0x1.05bc5777a2736p-925, 0.0, 0x1.cdbcf2662f0bfp-976, 0.0, 0x1.db74b83d25bd9p-902,
     0.0, 0x1.334303c6ab982p-515, 0x1.2f01fe698ff7ap-941, 0.0, 0.0,
     0x1.aa55766cece12p-667, 0.0, 0.0, 0x1.75f2721fe9005p-600, 0x1.c223a05c0233p-797,
     0x1.d3057afe54471p-495, 0.0, 0x1.a1c00e20a5e48p-136, 0x1.130270cdc1b33p-814,
     0x1.56c1ae7c8501ep-117, 0x1p0, 0x1.26ebcf347433fp-44, 0.0,
     0x1.3e9b1ad1165b8p-276, 0x1.4bc7387d83ecep-965, 0x1.959062fe78ad7p-138,
     0x1.612bd6001ff52p-668, 0.0, 0x1.e551a6d15d46ep-292, 0x1.29f48fba335cp-505,
     0x1.3a8096b92ea21p-699, 0x1.2e7be54c1526ap-9, 0.0, 0x1.13cb48b8bb575p-1020,
     0x1.c8f666c94e444p-797, 0.0, 0x1.27872f874b234p-658, 0.0, 0.0,
     0x1.1c93c6792adbp-301, 0.0, 0x1.d4b058d9d963ep-982, 0.0, 0.0,
     0x1.b5aa6d6d41d6bp-1022, 0.0, 0.0, 0.0, 0.0, 0x1.14be2b9b0cf42p-651, 0.0, 0.0,
     0x1.5c639bf5a88d9p-890, 0x1.639bd8c2bd039p-702, 0x1.d17db5d3b56dp-732, 0.0, 0.0,
     0.0, 0.0, 0x1.8acd5692f4779p-416, 0x1.2c2542a0cccdep-880, 0x1.523c23601c779p-916,
     0x1.5315b36854b7fp-628, 0x1.0d88c2f26210fp-566, 0.0, 0x1.7fcbcefab7435p-222, 0.0,
     0.0, 0.0, 0.0, 0x1.dd9243213913fp-305, 0x1.640f6b03781f5p-594, 0.0, 0.0,
     0x1.ebaec4e46f6f9p-752, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b9929720780ep-686, 0.0,
     0x1.572e395a50c45p-420, 0x1.7395c4442e2f6p-795, 0.0, 0.0, 0.0, 0.0,
     0x1.075f2ff732f66p-828, 0.0, 0x1.3ef00bc89b131p-703, 0x1.8788084dd7c59p-673, 0.0,
     0.0, 0x1.71e3cba7ca409p-832, 0x1.11a6614c7bb3ep-931, 0.0, 0x1.f028d051e2caep-105,
     0.0, 0x1.551e32cec9c38p-629, 0.0, 0x1.fa42c06e5173cp-831, 0.0, 0.0, 0.0,
     0x1.68a1614f0ae63p-401, 0x1.ae600e976fd7fp-502, 0.0, 0.0, 0.0, 0.0,
     0x1.63bb169251f27p-156, 0x1.43a563a5ee96bp-178, 0.0, 0.0, 0.0,
     0x1.36a6ab30e44cep-858, 0x1.50b985353f3e9p-35, 0x1.14f5526485267p-631,
     0x1.b7e283adf99bp-576, 0x1.8dd0416bd166ap-428, 0.0, 0x1.e775ea9064ed4p-21, 0.0,
     0x1.2d49e52e8ca51p-148, 0x1.fb9b67e0043b4p-430, 0.0, 0.0, 0x1.56bfa7501a3d1p-386,
     0x1.ce3ebd3ceab16p-578, 0x1.b91111ee33589p-735, 0.0, 0.0, 0x1.aab5e1b948b96p-605,
     0.0, 0x1.6a1c175f9364ap-687, 0x1.20ce8f70bae5dp-512, 0x1.740001116ac15p-881,
     0x1.b53bcc2348cbcp-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d1b0d0f9b7b0bp-1012, 0.0,
     0.0, 0x1.c717f7b6ed939p-695, 0.0, 0.0, 0x1.a678b83d3b112p-439, 0.0, 0.0, 0.0,
     0x1.1dd6e3fd992d2p-561, 0.0, 0.0, 0.0, 0x1.40e820ca32922p-355, 0.0,
     0x1.af19ab7c54726p-272, 0x1.52e8aba15f818p-352, 0.0, 0x1.5fa7ffed192d1p-113,
     0x1.ce12aed1fd2dfp-749, 0x1.39d6e55539134p-113, 0.0, 0x1.5195ee2fbc8afp-432, 0.0,
     0x1.04d0c7336a0ddp-641, 0x1.70f31618fdbebp-643, 0.0, 0x1.455da97896512p-1021,
     0.0, 0x1.5f32cb4b0ef89p-586, 0.0, 0x1.bc0b64a85044cp-221, 0x1.3b33dd8b8ac61p-715,
     0x1.3471ddde5c52dp-273, 0.0, 0x1.8806657d9b45p-622, 0x1.9a50ae4e0fabcp-701,
     0x1.62dc0b6e87e4cp-467, 0x1.8d3b65dfebdf2p-101, 0.0, 0.0, 0.0,
     0x1.c49a7fa1976c5p-764, 0.0, 0x1.6c8ae6a456a7cp-382, 0.0, 0x1.ba02cadcf97f9p-187,
     0x1.a9fe45dea980bp-520, 0x1.89aa7e5ef5664p-39, 0.0, 0.0, 0.0,
     0x1.f516b4a3d493fp-159, 0x1.bc070825aed4ep-53, 0.0, 0x1.75d6c3da82c46p-96, 0.0,
     0x1.a3814674d5ef8p-272, 0x1.af31a48902666p-971, 0.0, 0x1.4052d541eb9ecp-811,
     0x1.75061271715d3p-745, 0x1.06b447841599p-1006, 0.0, 0.0, 0x1.cf4937b6e8e74p-601,
     0.0, 0.0, 0.0, 0x1.98924779a8a8ap-406, 0.0, 0.0, 0.0, 0.0,
     0x1.15a51c0426b36p-419, 0.0, 0x1.fcf3eb3684172p-4, 0.0, 0.0, 0.0,
     0x1.dbb34d3555a55p-617, 0x1.45a4855d4f0c5p-765, 0x1.d4cda5182a1acp-299,
     0x1.7c8ae2861f7fbp-157, 0.0, 0.0, 0.0, 0x1.3c4ea87e1b6a5p-129,
     0x1.abf27cc60bfb3p-13, 0.0, 0x1.a9e2d2bd35c16p-600, 0x1.e73fb3f2048bfp-314,
     0x1.77d0e7d1cf09ap-919, 0.0, 0.0, 0x1.11926688af362p-883, 0x1.b04decbe44dbp-922,
     0.0, 0x1.62cf51b799889p-258, 0x1.19764c08e2788p-412, 0.0, 0x1.5a40d1eeb4dbp-672,
     0x1.9d71996114d88p-865, 0.0, 0x1.cc5be57f50d08p-426, 0.0, 0x1.966f779aa039dp-377,
     0.0, 0x1.edf7640d316a8p-587, 0.0, 0.0, 0x1.6a2c627da7b0cp-639, 0.0, 0.0,
     0x1.af607faff6537p-268, 0x1.ee70d92a11e15p-191, 0x1.8435ebb9002a6p-633, 0.0, 0.0,
     0.0, 0x1.d03ddedaee5c7p-108, 0x1.03cd617bb8f25p-254, 0x1.9fa4ccef67b57p-609, 0.0,
     0x1.fc25f1fb1fa82p-965, 0.0, 0x1.6805931f24ac5p-512, 0.0, 0.0,
     0x1.c8893a80e41b2p-312, 0.0, 0.0, 0x1.64e21851e80dp-10, 0x1.de922531fdec4p-886,
     0x1.fca087658ed0ep-498, 0.0, 0x1.db80c0259d9cp-888, 0x1.30c22bf991906p-632, 0.0,
     0x1.95f3d98c740aap-863, 0.0, 0.0, 0.0, 0.0, 0x1.650b94391d26cp-104,
     0x1.3538db0a8e87cp-836, 0x1.3b9362b906bb2p-897, 0x1.aad9b2ee84f78p-402, 0.0, 0.0,
     0x1.abaa62fade211p-330, 0x1.72ac0e7132b9fp-1008, 0.0, 0x1.e754a4cdbcb01p-262,
     0x1.28350f6d0b426p-205, 0x1.b3162050c2598p-82, 0x1.4c9e5a250ee4bp-798,
     0x1.2c1017537562ep-864, 0x1.b1abcbe0cd573p-962, 0.0, 0x1.7d31c3437b7a9p-435,
     0x1.04f0bde4fe5fbp-64, 0x1.4d7beaa0e57e3p-784, 0.0, 0x1.7e4c715e7ebe6p-258, 0.0,
     0.0, 0x1.3112b9af390dap-536, 0.0, 0x1.c48eff5e7fd02p-317, 0x1.1caa5232f4ef7p-984,
     0.0, 0x1.6a9043ba4e4bdp-491, 0x1.23110251ff2b6p-296, 0.0, 0.0, 0.0,
     0x1.6b15da46b129ep-957, 0.0, 0.0, 0x1.fe65cce6ad4f7p-444, 0x1.0d2e6582dc479p-517,
     0.0, 0.0, 0.0, 0x1.d57ba9941f6adp-4, 0x1.56216b291fdc4p-175,
     0x1.86d27143cd6f3p-368, 0.0, 0.0, 0x1.0da81314ea269p-206, 0.0, 0.0,
     0x1.1888b5f8a1d32p-995, 0x1.0eda6b3c8b27ap-585, 0x1.b204870d6e0c8p-381, 0.0,
     0x1.0f73d61ab5e23p-321, 0.0, 0x1.6aa660cae9ec1p-182, 0.0, 0x1.2cfac08111699p-553,
     0.0, 0x1.13a3e58f69f6p-594, 0.0, 0x1.a04acae83f2cap-1000, 0x1.4f757a4a6044cp-980,
     0x1.b977fbbc3a499p-201, 0.0, 0.0, 0.0, 0x1.e6cfa35f7d48dp-252,
     0x1.8d06e8d840a52p-499, 0x1.d61150f533372p-212, 0.0, 0.0, 0x1.d334e02a3d15cp-51,
     0x1.f74a56663a19p-279, 0.0, 0.0, 0.0, 0x1.f0657384b8446p-709, 0.0, 0.0,
     0x1.76ec2059e488dp-421, 0x1.7ed7f0c5a0129p-45, 0.0, 0.0, 0.0,
     0x1.106504f9c93e1p-102, 0x1.0c21ef0c16077p-793, 0x1.ad6feada330a8p-681, 0.0,
     0x1.7f4249d45dabfp-764, 0.0, 0x1.3b8209b1b46f2p-1003, 0.0,
     0x1.667e33cd4109ap-398, 0x1.2f6409e1484f8p-329, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c4dac67bead29p-621, 0x1.7d4d4e87acb33p-336, 0.0, 0x1.ef6f2177ded75p-480,
     0x1.ee8b2ecbf7a06p-651, 0.0, 0x1.8dc57e479dd88p-562, 0.0, 0x1.38b3ccfbce1d7p-676,
     0x1.4495fdab43251p-641, 0x1.f44377b1adb88p-155, 0.0, 0.0, 0.0, 0.0,
     0x1.23c661d1a5374p-612, 0.0, 0.0, 0x1.c91e90432d33fp-468, 0x1.56ad20625917ap-847,
     0.0, 0.0, 0.0, 0.0, 0x1.97e602270eb47p-629, 0.0, 0.0, 0x1.4c3b2df4d814cp-746,
     0x1.92a1558a0a068p-637, 0.0, 0x1.7d6ade0fbf508p-143, 0.0, 0.0,
     0x1.0fed2e28f5124p-1016, 0x1.0ceb2b49a35e5p-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.84a1c6cdae968p-324, 0.0, 0.0, 0.0, 0x1.9523f0b1e672p-502, 0.0, 0.0,
     0.0, 0x1.ef16f8207ecp-582, 0.0, 0x1.1fb2fdb4244d6p-719, 0x1.f63853e9c1766p-429,
     0.0, 0.0, 0x1.ff578f4ef54b6p-914, 0.0, 0x1.8b60f9f5a03cbp-70,
     0x1.8c70ad62fa3fp-203, 0.0, 0.0, 0x1.b209c1901fd8cp-187, 0x1.6e52770674167p-683,
     0x1.54597e2cab9abp-661, 0.0, 0x1.f03f28e5f60d9p-582, 0.0, 0.0,
     0x1.af6463c74c868p-208, 0.0, 0x1.a080aedf0a6aep-120, 0x1.3b06fa804d192p-998, 0.0,
     0x1.ce095e84d73b5p-187, 0x1.9a744e862a911p-829, 0.0, 0.0, 0x1.68057dba4aa6cp-469,
     0.0, 0.0, 0x1.fbb588d572362p-952, 0.0, 0.0, 0.0, 0.0, 0x1.4b4e44fa0532fp-236,
     0x1.900b0bf58542dp-273, 0x1.6580088abfd47p-744, 0.0, 0.0, 0.0,
     0x1.1467935c43643p-899, 0.0, 0.0, 0.0, 0x1.e4674701f0a1dp-772,
     0x1.486dc1f590bdbp-343, 0.0, 0.0, 0.0, 0.0, 0x1.0866d84e3bf49p-571, 0.0, 0.0,
     0x1p0, 0x1.e8ffa36b4f9f2p-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8834441e3bb15p-325,
     0x1.377b5a6c31315p-432, 0x1.e4bc88a531b39p-846, 0.0, 0x1.24c453c69e34ap-908, 0.0,
     0x1.ef7a66d5a7791p-737, 0x1.ee1205468b098p-290, 0x1.a1dfa82bd6ba6p-835, 0.0,
     0x1.f69845a4639c7p-599, 0x1.e9cd4cb450a38p-118, 0x1.6f074c20992cfp-637,
     0x1.b4a7b3a274048p-71, 0.0, 0.0, 0x1.d4f66cdd321b1p-948, 0x1.b5778130756dbp-224,
     0.0, 0x1.db5ef7138ab7fp-436, 0.0, 0x1.9817dc3b19f81p-846, 0x1.84d584ea265abp-412,
     0.0, 0.0, 0x1.c3b113b479163p-904, 0x1.341d5580ad8bfp-156, 0.0, 0.0,
     0x1.5b7e00b3bc605p-553, 0.0, 0x1.ec7d030d3a63ep-386, 0x1.6843701f5cefp-921, 0.0,
     0x1.ced12aef1e6fp-371, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6aed17ce52a8fp-901,
     0.0, 0x1.56734077fb475p-449, 0.0, 0.0, 0.0, 0x1.21cc7d63d3ce3p-564, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.937a6df74c3f5p-458, 0x1.6259dcee7b917p-623, 0.0,
     0x1.f4b3346092312p-328, 0.0, 0.0, 0x1.54067afe7efb1p-339, 0x1.d09923171bf8p-647,
     0.0, 0x1.9f3527ffc5dc2p-343, 0.0, 0x1.44a43aca4558ap-775, 0.0,
     0x1.fa227de9f698ep-671, 0x1.f745abdfa0397p-832, 0x1.62998cf2365a7p-349, 0.0,
     0x1.361c5748436acp-125, 0.0, 0.0, 0.0, 0.0, 0x1.e0b908742201fp-547, 0.0,
     0x1.467c4cece212ap-521, 0.0, 0.0, 0x1.3dd879080561bp-469, 0x1.651a2d0828d97p-559,
     0.0, 0x1.5da5003019dafp-189, 0x1.cc576a92704d9p-421, 0x1.6104495461f24p-398, 0.0,
     0x1.293de48be60aap-413, 0.0, 0x1.9bee639eb1ae1p-777, 0.0, 0x1.ab2779301f9ecp-904,
     0x1.c224aff6b3893p-47, 0.0, 0x1.49115d27b9cc5p-763, 0x1.d28073aaa739ep-384,
     0x1.3dd02f6a079c6p-77, 0x1.18c18108fc21cp-318, 0x1.ae094c9d45634p-774, 0.0, 0.0,
     0.0, 0x1.d8c850e68f732p-473, 0.0, 0x1.3df3a92d7f2b4p-150, 0.0,
     0x1.fa9166cd49a2cp-817, 0x1.559e00372fbdp-190, 0.0, 0.0, 0x1.68cb3b5063164p-138,
     0.0, 0x1.e02cb6142d357p-1017, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39ca7d3471ee1p-583,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c03c00ea7b13p-569, 0.0, 0.0, 0.0,
     0x1.04bca586edcbcp-430, 0.0, 0x1.1722259209411p-830, 0x1.e63768de11364p-329,
     0x1.abc11a93ce601p-519, 0x1.4614c7fd6b90fp-410, 0x1.bffa032763ce6p-397, 0.0,
     0x1.7d069c17f9296p-546, 0.0, 0x1.43bcaca0965b4p-569, 0x1.2f610da0a99ccp-466, 0.0,
     0.0, 0.0, 0x1.fbbb313762783p-686, 0.0, 0x1.12e6b7b311d18p-928, 0.0,
     0x1.a39354c058c51p-238, 0x1.71aa1ee404b32p-970, 0x1.941d815e93f7fp-861, 0.0,
     0x1.5defdd77058cdp-1012, 0x1.34b7c3bc8daefp-180, 0.0, 0.0,
     0x1.59ea25e14284dp-671, 0x1.1319261a6c12bp-938, 0x1.214a023aebc39p-145,
     0x1.728b036fb122dp-152, 0x1.390d7d2a8c787p-286, 0.0, 0.0, 0x1.3032a8be27d66p-954,
     0x1.84d6522247b62p-135, 0x1.25140adbbc23cp-1014, 0.0, 0x1.9aaa439379836p-901,
     0x1.fec6ea1b924efp-156, 0x1.7643547e42f9cp-963, 0x1.486c96693c841p-265,
     0x1.cb7d7df394c18p-875, 0.0, 0x1.06b739bf518a6p-108, 0.0, 0x1.a9d92dcd39587p-484,
     0.0, 0.0, 0.0, 0x1.61b6e149f5047p-384, 0x1.61aed43554c8ap-173, 0.0,
     0x1.18f8b2b3102dep-970, 0x1.8bbbf0af2657fp-201, 0.0, 0.0, 0.0,
     0x1.4e7007286f3a4p-525, 0x1.e27c0e07e31c8p-347, 0x1.0d3deb32cbc51p-624, 0.0, 0.0,
     0.0, 0x1.d7e2e8513c10fp-844, 0.0, 0x1.65304726d5813p-654, 0.0, 0.0,
     0x1.1b4844543692p-495, 0x1.c7de4eb0f0685p-418, 0.0, 0x1.767ac2754d46dp-984,
     0x1.d0df5b07212f3p-337, 0x1.d3f2f77971d1p-743, 0.0, 0x1.af7fdcf29b65ap-725, 0.0,
     0.0, 0x1.ffa2d9d4973e1p-579, 0x1.b9067f781cc1ap-297, 0.0, 0x1.dac438c48ae1fp-513,
     0x1.36e2cdfcca769p-612, 0x1.e39eb1107def8p-663, 0.0, 0x1.0d794118d1725p-621, 0.0,
     0x1.cbb925d5610fcp-466, 0x1.b51d95341e493p-581, 0x1.ae1d1b757025dp-849, 0.0,
     0x1.c334e133ab52bp-232, 0.0, 0x1.f6e06fb59aa95p-838, 0x1.0a45b8ada4d3ap-900, 0.0,
     0x1.6c32f500b241cp-824, 0x1.9979eb4675d49p-239, 0x1.724a102d0fe2fp-1003,
     0x1.4febf42dc0da2p-719, 0x1.925d7291a0371p-472, 0.0, 0.0, 0.0, 0.0,
     0x1.f0666d19ce6f8p-791, 0x1.50be5829fd13dp-956, 0.0, 0.0, 0.0,
     0x1.023d19cc82a47p-493, 0x1.030b02ae5938bp-657, 0.0, 0x1.53b8aea2a4ddbp-852, 0.0,
     0x1.096afb7feeb9bp-109, 0.0, 0x1.68bd803de1aafp-839, 0x1.7c5eb6437aff5p-839, 0.0,
     0.0, 0x1.2f50eb2cd0361p-661, 0.0, 0.0, 0.0, 0.0, 0x1.c36fae00ad09p-268, 0.0, 0.0,
     0x1.d592cd580a211p-351, 0.0, 0x1.4688e663a6881p-541, 0.0, 0x1.ff5f1ac0381a5p-106,
     0.0, 0x1.0d743e3bced41p-309, 0x1.94e8adbb236cap-55, 0.0, 0.0, 0.0,
     0x1.40555682bc9fp-567, 0x1.6828d476a0f51p-608, 0.0, 0.0, 0x1.800c855f02431p-298,
     0x1.ed550859c4cb1p-877, 0.0, 0.0, 0x1.4e509a0797c93p-984, 0x1.8fe551f858436p-659,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c638a734a0bcp-699, 0.0, 0.0, 0x1.76741f2400a2p-933,
     0.0, 0x1.73d5e510d185ep-263, 0x1.208f4742c5f9ep-57, 0x1.c8ae5063c6b91p-320,
     0x1.898746c69a804p-955, 0x1.2dab035c6bc6ep-374, 0x1.544e35d3adb06p-814,
     0x1.7e10a0c5283efp-859, 0x1.2aa6743b312dp-595, 0x1.fa28cca70ff3ap-321,
     0x1.f23640ba32cedp-588, 0.0, 0.0, 0.0, 0x1.7af2e393b88ecp-29, 0.0, 0.0,
     0x1.d5ae0c91cc1d9p-460, 0.0, 0.0, 0.0, 0x1.716c913b7b26p-178,
     0x1.64a4bcfc0d516p-140, 0x1.102872bb8efabp-207, 0x1.41542e2fb522ap-688, 0.0, 0.0,
     0x1.298b0bc9ccdd4p-549, 0x1.3bf1f96ffaccep-82, 0.0, 0x1.db63e708e4d29p-610,
     0x1.682d0bf93e9d3p-940, 0x1.a9c5275b6941bp-45, 0x1.2611007753a76p-519,
     0x1.f972fb5dd15b2p-432, 0.0, 0x1.928d409f9da57p-251, 0x1.4742849aa18a8p-533, 0.0,
     0.0, 0x1.722c8067205c5p-549, 0x1.6cc55e37f085p-709, 0.0, 0x1.92a10e967aea9p-165,
     0.0, 0.0, 0.0, 0x1.0962d703db4d4p-356, 0x1.758c490f7d958p-999,
     0x1.6385bdda09867p-738, 0x1.9fd1d0b54c90fp-977, 0.0, 0x1.75f23510a2d03p-431, 0.0,
     0x1.958449693e71dp-925, 0x1.e7857d9e6e41bp-362, 0x1.b2d5d05710d7p-448, 0.0, 0.0,
     0.0, 0x1.0fd3aa9d12011p-713, 0x1.e3db273257ea5p-825, 0x1.06bd6d0d0444bp-320,
     0x1.f0f390c91718ep-411, 0.0, 0x1.a41a8d4c8d37ap-975, 0x1.b04053beb3033p-223, 0.0,
     0x1.a08efaa8a46bap-864, 0x1.75cd5475523c2p-301, 0x1.4e5980a7a23f8p-312, 0.0, 0.0,
     0x1.fefb72497d787p-586, 0.0, 0x1.7caecc1ee1d8bp-830, 0x1.7d34f24fcae17p-403,
     0x1.3ae90f96788b6p-176, 0.0, 0.0, 0x1.16b45b9631864p-381, 0x1.11c75f3f62817p-307,
     0x1.e2be79747ef71p-651, 0x1.85371611685fp-332
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
            tmp1 = Sleef_finz_acosd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_acosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acosd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
