/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd4_u10kvx.c --function Sleef_acosd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.7d1d9ea091d07p-871, 0.0, 0x1.7ba3dfa306f58p-606, 0.0, 0.0,
     0x1.150f540dc9e61p-409, 0x1.1365ee99da7a2p-53, 0x1.0349fc2425b69p-728,
     0x1.58ca54aa7c4cfp-686, 0x1.51740653a8f2p-532, 0.0, 0x1.e41a1ab24f66ep-561, 0.0,
     0x1.f367be7da2f87p-937, 0.0, 0x1.0851710e417a4p-244, 0x1.c6a014b4ea975p-125, 0.0,
     0.0, 0.0, 0.0, 0x1.0616e15691e67p-724, 0x1.04e2b748d875bp-245, 0.0, 0.0, 0.0,
     0x1.60a2f45eeeafdp-374, 0x1.7be361aaa3ebfp-577, 0.0, 0.0, 0.0,
     0x1.9361176919f86p-533, 0x1.06adead2e7bdbp-468, 0x1.ff2e6a3f38cf4p-877, 0.0, 0.0,
     0.0, 0x1.6f95256c68342p-865, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c89adb491e6fp-806, 0x1.82c5f1525e9dap-379, 0.0, 0.0, 0x1.e648b8fd0240ep-381,
     0x1.d97660361fe7bp-311, 0x1.aa23ab3964e16p-2, 0.0, 0x1.628c0b1ffad2dp-742, 0.0,
     0x1.94c19e9812df2p-147, 0.0, 0x1.1569e555ef58ap-154, 0.0, 0x1.b5b63454c9027p-291,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76e04e8d0a508p-290,
     0x1.b0b519fcfece1p-297, 0.0, 0x1.9765a62acf03ep-966, 0.0, 0.0,
     0x1.86941dd7369f8p-616, 0x1.f8b6ced896b8ep-552, 0x1.541e9393f04bfp-992,
     0x1.3010316f2f9dcp-128, 0.0, 0.0, 0x1.92b56e81504d8p-91, 0.0, 0.0, 0.0, 0.0,
     0x1.44630b6f92ec7p-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db01b3e466d32p-463,
     0x1.586b8fd5fc0ebp-95, 0.0, 0.0, 0.0, 0.0, 0x1.b11d2b61383dep-386,
     0x1.81be3c652630fp-907, 0x1.a6a933b2b1472p-560, 0x1.490f82e73f834p-825, 0.0,
     0x1.5100bb4869f6bp-590, 0x1.9c62d0d2e06p-858, 0x1.428808d9c9121p-308, 0.0, 0.0,
     0.0, 0x1.b0880f84f22aep-470, 0.0, 0.0, 0x1.2722b0ebe6e21p-371,
     0x1.021f12f90a8c9p-869, 0x1.d87456371f727p-362, 0x1.65f115a3c99d8p-293, 0.0, 0.0,
     0x1.7d751f99dbff4p-28, 0.0, 0.0, 0.0, 0.0, 0x1.d9c5bc835e3c6p-617,
     0x1.69726d6fcafcbp-834, 0.0, 0x1.c8ab16b6660b5p-198, 0.0, 0.0,
     0x1.22a70af51ebd1p-489, 0x1.275222a7ecf24p-802, 0.0, 0.0, 0.0, 0.0,
     0x1.8c14424b80b3fp-406, 0x1.4a66e1c6106c6p-794, 0.0, 0x1.92e6a4189dfb4p-89,
     0x1.41e228535b863p-792, 0x1.af9964185ef43p-552, 0x1.32070360bbc26p-956,
     0x1.901e8eacfd886p-205, 0.0, 0x1.efb39c5caf7edp-233, 0.0, 0x1.e081abcb8027ep-933,
     0x1.2cf00ee62104bp-152, 0.0, 0.0, 0.0, 0x1.99d7712c8fabcp-792, 0.0, 0.0, 0.0,
     0x1.5369fa46c76eep-289, 0.0, 0x1.c3fb1212aa49fp-259, 0x1.a0e4c451f6b0fp-547,
     0x1.cb1f699b13c4fp-121, 0x1.8c5259d496623p-642, 0x1.028ac5b86aa26p-134,
     0x1.d09155bafde3bp-761, 0x1.3265d27e4ecf3p-491, 0x1.edc7cf32d2b3ep-657, 0.0,
     0x1.eb890d40b1ccap-1020, 0.0, 0x1.50ce285c67fffp-470, 0.0,
     0x1.e72d7e10c80e4p-422, 0x1.eb6f4501c2625p-489, 0.0, 0x1.2c5af4a6420cfp-819, 0.0,
     0x1.802571c5d9a41p-157, 0x1.4ec557cb32e84p-994, 0.0, 0.0, 0.0,
     0x1.44f951d1943c4p-592, 0x1.542b03d35e0cap-843, 0.0, 0.0, 0x1.019da16c27b45p-657,
     0.0, 0x1.56b033b07812fp-439, 0x1.f6d2c44ceda26p-590, 0x1.e0fff21f0f08ap-36,
     0x1.e51e3cfce2771p-350, 0x1.a873414c98143p-735, 0.0, 0.0, 0x1.b9facc924f063p-324,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d14ff4ef3fdd4p-838,
     0x1.4d180a22b9e52p-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af7ba6a812a94p-553,
     0x1.78946ec34db22p-32, 0x1.8b82e864f2289p-131, 0.0, 0.0, 0x1.a61acb6f93c8fp-707,
     0x1.d56119e6f2cep-722, 0x1.1d280b56e256fp-888, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f394fe07ed1e6p-814, 0x1.8499edcfc5795p-788, 0.0, 0x1.2c0498178ba03p-674,
     0x1.d9a4a2735f132p-491, 0x1.b6d2495b4f555p-808, 0x1.13679e2eac4e6p-716, 0.0,
     0x1.e8267113a4afdp-753, 0.0, 0.0, 0x1.293fce0c3574bp-210,
     0x1.37fd7d1de462fp-1017, 0.0, 0x1.3e66fc72a7038p-212, 0x1.45c047ff19bf1p-229,
     0x1.ba23f8450295dp-84, 0x1.73e43964e5ef1p-837, 0.0, 0.0, 0x1.5d221e44bda2ep-47,
     0x1.e77193a7fbcd1p-769, 0x1.c7475cee42ffbp-870, 0.0, 0x1.8f3aebe5b42dfp-70, 0.0,
     0.0, 0x1.de547be885a18p-250, 0x1.eb955df1fd019p-718, 0.0, 0x1.cb3100f9c83e5p-447,
     0.0, 0.0, 0.0, 0x1.888852536817fp-965, 0.0, 0.0, 0.0, 0x1.5a3e61359b4f7p-388,
     0.0, 0.0, 0.0, 0x1.2ed7125fa8d0ap-485, 0x1.fa3001525d5f2p-326, 0.0, 0.0,
     0x1.ef2c9ab6023efp-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b97a26c1dc5cp-134, 0.0,
     0.0, 0x1.52abc1a473949p-65, 0.0, 0x1.be3dab449646p-568, 0x1.6870ec06c9feep-639,
     0x1.5987b16a2546bp-719, 0.0, 0x1.cfd0396fa523fp-673, 0.0, 0.0, 0.0,
     0x1.262610b2ef87p-303, 0.0, 0x1.160baf14cbb86p-303, 0x1.e6dab36bf99dap-70, 0.0,
     0.0, 0x1.321042e3cce4dp-222, 0x1.eb74a13c60637p-444, 0.0, 0x1.3e67d8b567d5ap-104,
     0x1.40303adb80189p-823, 0.0, 0x1.f8fe9b26bff9p-590, 0x1.04fbd495753b4p-324,
     0x1.26637daf4fe3dp-1019, 0x1.41a7e9e9e94bep-452, 0x1.c50f3060894dfp-155,
     0x1.f3cc5f485b2fbp-1014, 0.0, 0.0, 0x1.7a666abf32bap-403, 0x1.4f03fc476c78bp-824,
     0x1.f224a8818c8f1p-829, 0.0, 0x1.8b3a0e09efe97p-138, 0x1.a986a101319d9p-669,
     0x1.0f83680ce7597p-43, 0.0, 0.0, 0x1.efc10ade3fbfbp-1007, 0x1.5c1f9d1fe0ddcp-11,
     0.0, 0.0, 0x1.afe1742af5736p-961, 0.0, 0x1.7d4811ba8aa3bp-501, 0.0,
     0x1.d1bff6c7e025ap-341, 0.0, 0.0, 0.0, 0x1.09e411ffe6982p-410, 0.0, 0.0, 0.0,
     0.0, 0x1.ba52a7766b496p-76, 0.0, 0.0, 0x1.01b35d7084b61p-153, 0.0, 0.0, 0.0,
     0x1.23b3e2ee98153p-761, 0.0, 0x1.9009e9baa2f72p-42, 0.0, 0.0,
     0x1.2cf1d699808d2p-599, 0x1.7ec0101477d8ap-666, 0.0, 0x1.7fe7372423dafp-813, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42f96361b996bp-868, 0.0, 0x1.9f15314e66abp-201, 0.0,
     0.0, 0.0, 0x1.f6fa896bd17dbp-547, 0x1.6ebcdd9d92babp-775, 0.0,
     0x1.b60d0c0462981p-889, 0x1.76ab4d70a9ca9p-139, 0x1.f603619b85175p-328,
     0x1.bddd312c3b3ffp-216, 0.0, 0.0, 0x1.ebc8c00f8f886p-818, 0.0,
     0x1.6d728351efba4p-949, 0.0, 0x1.fbb5f11b4578dp-368, 0.0, 0.0,
     0x1.926856acfd929p-517, 0x1.19afd4f68b81cp-399, 0x1.b759d4f6fa3cp-738, 0.0, 0.0,
     0.0, 0x1.d99edc83e031dp-165, 0x1.ad6511c4507bbp-569, 0x1.4c06c851aa4f8p-281,
     0x1.568f31d7c8349p-260, 0.0, 0x1.164cae7709249p-418, 0.0, 0.0, 0.0, 0.0,
     0x1.f5bda4dc6efbfp-989, 0x1.ef9f4516123fep-746, 0x1.379745aab495ep-954,
     0x1.7a53d9e765f4p-983, 0.0, 0x1.84bed2333b5b7p-955, 0.0, 0x1.c06df3a4a903cp-261,
     0x1.52c9d6b608169p-932, 0x1.d1bbd2597a02ap-983, 0.0, 0x1.fd2166b17ce51p-456, 0.0,
     0x1.3520d7d466d2bp-320, 0x1.879b5421422e5p-422, 0.0, 0x1.ec7b666ca3bdfp-798, 0.0,
     0.0, 0.0, 0.0, 0x1.dc289c2afef05p-635, 0.0, 0.0, 0x1.70da74098958cp-69,
     0x1.525eea1b72251p-363, 0.0, 0.0, 0x1.5696bf2568e43p-428, 0x1.dfda5fd1df702p-341,
     0.0, 0x1.7cc1c4d5cd57dp-279, 0x1.d8db7248b0accp-461, 0x1.f604747ca7d97p-263,
     0x1.ce5a2ed899234p-717, 0x1.76e4c5c5ba7afp-358, 0x1.558018bc1a213p-574,
     0x1.c8c9f1e73402ep-613, 0x1.3f9638f688d27p-626, 0x1.5123517e1310dp-295,
     0x1.ac0e105962bd5p-295, 0x1.4fc88f892b2b9p-324, 0x1.21dc7b11278bdp-749, 0.0, 0.0,
     0.0, 0x1.a0d8ea990b695p-250, 0.0, 0x1.2720e00e80ab6p-360,
     0x1.a055e845189d4p-1001, 0x1.87cd0cc34e2a4p-694, 0x1.8a7cc5afb309cp-781,
     0x1.85a31f8d7d53ap-568, 0x1.d772d50706f39p-106, 0x1.049000dc2facbp-645,
     0x1.6085e7b510718p-1003, 0x1.8a7959744939p-68, 0.0, 0.0, 0.0,
     0x1.c87f20a6a4455p-72, 0.0, 0.0, 0.0, 0x1.17b17ee4d8b11p-445, 0.0, 0.0, 0.0,
     0x1.448b65e1d9f1dp-702, 0.0, 0x1.08e50f2d3f23bp-765, 0.0, 0x1.814577c077e39p-240,
     0x1.e6580933ed9b8p-416, 0x1.52a9a727c69aep-480, 0.0, 0x1.298684e55b8ap-501, 0.0,
     0.0, 0.0, 0x1.b48fe4d3a2cd4p-367, 0.0, 0x1.8dd8d64c8b9dbp-296,
     0x1.28a65fb4feb7ap-529, 0x1.d1d0d73d48577p-850, 0.0, 0x1.299ef45bbc3cdp-983,
     0x1.25c3b06db9371p-501, 0.0, 0x1.55cd9b035d0fep-941, 0x1.cd25d83272a0dp-492, 0.0,
     0x1.f2cd3bdc593f7p-1004, 0x1.90fa2322d4f04p-591, 0x1.5b731f8809ca1p-527,
     0x1.f909e6e42ca73p-896, 0.0, 0x1.ee2c4ab2149f6p-506, 0x1.641f0118a3746p-491,
     0x1.857e6365e2c26p-163, 0.0, 0.0, 0.0, 0x1.bb3323ee26f6fp-572,
     0x1.961ac104f34abp-136, 0.0, 0.0, 0x1.eb5bd51947f4dp-81, 0.0,
     0x1.e94ae372052a9p-984, 0x1.f5fca29603f24p-461, 0x1.ecbe28a6d581ap-643,
     0x1.d3971284e6aedp-518, 0x1.a7713d16b8b6dp-98, 0.0, 0x1.2a1d95937b19cp-205,
     0x1.53d4872f2c24p-267, 0x1.da1b743e7cf97p-392, 0.0, 0x1.34e138c14fce7p-483, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2f85659f6b84p-875, 0.0, 0.0, 0x1.d93ef60231da1p-521, 0.0,
     0x1.e7376aaf7c4fdp-443, 0x1.4c0da9a1f948ep-215, 0x1.0bcba29b8c70fp-844,
     0x1.6f3a38b00b8b1p-428, 0.0, 0.0, 0x1.11c1737f16148p-788, 0x1.013c81912816cp-731,
     0.0, 0x1.b2fc2978c2e4fp-160, 0x1.6f4c841b03e7fp-639, 0x1.98bda5cd62655p-683,
     0x1.3a88a3d4a4731p-394, 0x1.bc4e141417394p-487, 0x1.a0d7b8d511339p-561,
     0x1.e4a1df2cea24ap-913, 0.0, 0x1.fd5a79634f6afp-966, 0.0, 0x1.224785e738fe9p-730,
     0.0, 0x1.72dd61d2cb685p-720, 0x1.6dc71e7fd0b9fp-573, 0.0, 0x1.2380b99e94d5p-964,
     0x1.de2c561d6e156p-503, 0.0, 0x1.7e96037844e22p-884, 0.0, 0x1.ac8abc70eab78p-807,
     0.0, 0.0, 0x1.1b18603d3594p-142, 0.0, 0x1.05e883825b50bp-917, 0.0, 0.0, 0.0,
     0x1.5877185d99b52p-586, 0.0, 0.0, 0.0, 0.0, 0x1.61938fcd51baap-516, 0.0,
     0x1.0b867f25b2595p-864, 0x1.22b799716f828p-468, 0.0, 0.0, 0x1.64c0fb624f1eap-888,
     0x1.58fe3611bf60ep-194, 0x1.b60f5833da41ep-428, 0x1.4611c1972e4e9p-61,
     0x1.99fa60d1aa2d7p-712, 0.0, 0.0, 0x1.ac0b03e307e56p-141, 0.0,
     0x1.0c0b1df0e8671p-483, 0x1.8425b84f03245p-542, 0.0, 0x1.b4a972aae9c09p-87, 0.0,
     0.0, 0.0, 0x1.82b3adf73ac7dp-236, 0x1.f5270556e8dd4p-570, 0x1.0ff5e4fd6981dp-785,
     0.0, 0.0, 0x1.a50aee1ab2608p-964, 0.0, 0.0, 0.0, 0x1.a26b77b5dfb42p-649, 0.0,
     0.0, 0.0, 0x1.f2e204cb2d47cp-315, 0x1.5e1e6eb6ddc9cp-386, 0.0, 0.0, 0.0,
     0x1.7edcbc2e1d2ffp-520, 0x1.069a0f8b348a2p-295, 0.0, 0x1.6ec211bf3f03fp-685, 0.0,
     0x1.02bc60d35a5b5p-744, 0x1.02ed27b2d2ba3p-216, 0.0, 0x1.6b09197b22544p-858,
     0x1.ba1d85cc2f2f4p-791, 0.0, 0.0, 0x1.474a70c01f1dcp-563, 0x1.0a6125104dda2p-937,
     0.0, 0x1.3a0d61f5ac85dp-938, 0.0, 0.0, 0x1.7395e4fceaed7p-965, 0.0, 0.0,
     0x1.eda22af1747fbp-1009, 0x1.02300af9f62e4p-646, 0.0, 0x1.3e8e60f329a05p-16,
     0x1.a94dbee15ba73p-568, 0x1.c896c4051769ep-566, 0.0, 0.0, 0x1.bfd036cf58cep-826,
     0x1.c72158f7addacp-862, 0x1.be52e58f833abp-43, 0.0, 0x1.b4b5f7aaa1ca2p-547,
     0x1.9cdf3910155bap-388, 0x1.1d4fb4cd78ca9p-181, 0.0, 0.0, 0.0,
     0x1.033d6ab9f7915p-840, 0x1.9ef2e7bd37cb6p-602, 0.0, 0x1.82c0e2af4790ep-130, 0.0,
     0x1.8d9433c0e170bp-769, 0x1.7016a8e737ee5p-428, 0x1.5c728bbffe8b5p-573,
     0x1.999596ff8938ep-207, 0.0, 0x1.8e3b35a1e204fp-386, 0x1.8abecf29fa24cp-616, 0.0,
     0x1.b116f00604861p-948, 0x1.55324a5069c2dp-894, 0x1.06e7a39136fe1p-173,
     0x1.43c3cddc742b3p-140, 0.0, 0.0, 0.0, 0x1.bc3e602ae18fap-446, 0.0,
     0x1.93edb879989c6p-627, 0x1.91de0af94ecf3p-620, 0x1.3bbff550236c4p-70, 0.0,
     0x1.1c36bc9bd4367p-108, 0x1.8822c7be59d22p-91, 0x1.115eeb1510f9cp-15, 0.0,
     0x1.90fdc39323db5p-368, 0.0, 0x1.9c2b793282ac7p-706, 0.0, 0x1.78f0f3de0c2aap-236,
     0.0, 0x1.514f4e3dc10dp-327, 0x1.e5ff88495a123p-279, 0.0, 0.0, 0.0,
     0x1.2e87f1fb8b8dap-659, 0x1.fa979cb302d6bp-609, 0x1.96d69332a044bp-55,
     0x1.c4eee1daad603p-209, 0x1.b6c5d9f4ba429p-548, 0.0, 0x1.8365f273f9b0fp-331,
     0x1.bfb5b9b8d7e3dp-688, 0x1.7955ecdc180b9p-724, 0x1.b7747bbeb5df9p-782,
     0x1.741e77372d547p-493, 0.0, 0x1.b9c0ddaf7623cp-545, 0x1.2bf804cd753e9p-140, 0.0,
     0x1.afb2d7b887ac1p-1021, 0.0, 0.0, 0x1.68a5cb246c11bp-276, 0.0, 0.0,
     0x1.3d8cab81f050cp-247, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.01223fc91a7ffp-682,
     0x1.f6f11b63116a3p-588, 0.0, 0x1.6d15159993a28p-457, 0x1.752bf0b4da11p-305,
     0x1.7467cca5dbdebp-35, 0x1.41754e20c93bp-284, 0x1.c7b3e3ac09c1fp-3, 0.0, 0.0,
     0x1.888dc769cf03ep-513, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.129a3c5c17aa9p-378,
     0x1.9ec605b0faa3ap-929, 0x1.e8c9a6dbc64bbp-817, 0x1.78181d47d5d77p-207,
     0x1.c5e66b2cfed87p-813, 0x1.aecfb47908604p-687, 0.0, 0x1.88685c44036f8p-200, 0.0,
     0x1.9f33c0c747f0ap-964, 0x1.e21a1d3f74eafp-73, 0.0, 0x1.fc2f573b9f16ep-93,
     0x1.f8f910bf74d18p-487, 0x1.c4cbb6ea0afa8p-437, 0x1.ceab4d1a5dd32p-452, 0.0, 0.0,
     0x1.9f8ff5da15df8p-683, 0x1.d30251322cb64p-366, 0x1.60ab85f2c4593p-1007,
     0x1.705b15fe9e392p-827, 0x1.ca0ae41e17c06p-334, 0.0, 0x1.aa5db3988be1p-895, 0.0,
     0x1.bd0b87303f883p-119, 0.0, 0x1.ee2d4977be401p-576, 0x1.a4eaa526887f9p-771, 0.0,
     0x1.a7ca394664d67p-14, 0x1.3aad8feb7e4c8p-390, 0.0, 0.0, 0x1.f972da2b166efp-688,
     0.0, 0.0, 0x1.a1f8a8adb3269p-126, 0x1.f37734e9cf946p-666, 0.0,
     0x1.45cf00692193dp-163, 0.0, 0x1.2c2b6f032b813p-14, 0.0, 0.0, 0.0,
     0x1.75e0a66df57aep-362, 0x1.5538fee8a8699p-513, 0.0, 0.0, 0.0, 0.0,
     0x1.0365495b6f9d4p-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f290e14863f6p-280, 0.0, 0x1.cc12c41043babp-594, 0.0, 0x1.606bac2c08f9bp-908,
     0.0, 0.0, 0x1.8e872c0778026p-714, 0.0, 0x1.5a360443f5f2fp-881,
     0x1.69e8e3679c82fp-799, 0.0, 0x1.98cbcee798e02p-468, 0.0, 0.0, 0.0, 0.0,
     0x1.83b332eac37b5p-938, 0.0, 0x1.8f3eeb3b44c16p-1008, 0.0, 0x1.cf01e18cef993p-29,
     0.0, 0.0, 0x1.fe6da256cc7bp-867, 0.0, 0x1.6588f7d027d57p-3, 0.0, 0.0,
     0x1.10e238fccb2bap-861, 0x1.4fe252cabde96p-265, 0x1.55fcfe9807a72p-217, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.126418badef26p-50, 0x1.2c71de903cd4ap-578, 0.0, 0.0,
     0x1.cca48532a93e6p-334, 0.0, 0.0, 0x1.75ad4e77cfb66p-688, 0x1.8f6c0aaf9e779p-65,
     0x1.1eb640eb6c2a2p-390, 0.0, 0x1.391ab53ee28cep-688, 0x1.37701b0fe1b3ap-839,
     0x1.ec8610b2186f1p-527, 0.0, 0x1.387081acdf279p-251, 0.0, 0x1.0b9093b950769p-521,
     0.0, 0.0, 0x1.c6ede7f51a855p-721, 0.0, 0.0, 0x1.9dd012e019a8p-321, 0.0,
     0x1.c0feea0f37ee4p-354, 0.0, 0.0, 0.0, 0x1.ca433ba8568cdp-969, 0.0, 0.0,
     0x1.043efa03b4adfp-659, 0.0, 0x1.08d4a647d7c4ep-887, 0.0, 0x1.23025c8e2d0c7p-578,
     0.0, 0x1.f37b4dfddbb41p-304, 0.0, 0x1.bd882d148dfc8p-581, 0.0,
     0x1.2c39edfe37fcep-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.277ccf2e59d7cp-987, 0.0, 0.0, 0x1.3a593ba076cdp-205, 0.0,
     0x1.553966ba5f223p-920, 0x1.7173503c6f31bp-509, 0.0, 0x1.f1b4781439195p-94,
     0x1.528b8dbbec514p-44, 0.0, 0.0, 0x1.67546506b4a94p-314, 0x1.7dd46a3a49df4p-498,
     0x1.9c3ea9f516f58p-338, 0.0, 0x1.2409239cdb246p-975, 0.0, 0.0,
     0x1.492f2e01e3aadp-697, 0x1.55a194f2bafbep-586, 0.0, 0.0, 0.0, 0.0,
     0x1.24bdc89a9f04ep-351, 0.0, 0.0, 0x1.9f226bb455715p-238, 0.0, 0.0,
     0x1.ba2ccde44fe1ep-409, 0.0, 0x1.38b8634de52bep-907, 0.0, 0x1.72dabd0fdd885p-927,
     0.0, 0x1.64a4a8e8e5d56p-194, 0x1.f80fe7067197bp-768, 0x1.a22da4afd5fefp-933, 0.0,
     0x1.6d54b8bb67616p-366, 0x1.398a50c49fc7dp-103, 0.0, 0x1.d96056ae6643p-652,
     0x1.7ab83770ca15fp-675, 0x1.7c9e421396cbdp-875, 0.0, 0x1.0bee9d3c99e56p-912,
     0x1.8108b7b73bfa2p-362, 0.0, 0.0, 0x1.46fce3cd4e5abp-384, 0x1.af65ec292ee06p-433,
     0x1.a140c79b6badep-992, 0.0, 0x1.0c39d12e79c8p-219, 0.0, 0x1.9e2fb24e0d469p-369,
     0x1.de32d199b5d8cp-443, 0.0, 0x1.19b912b3e2259p-695, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.293f5fff741a6p-779, 0x1.6fc13ab74c4d7p-707, 0x1.1b7dbd33b8dd8p-211,
     0x1.7bb9c8fddee09p-542, 0.0, 0x1.42599f122f35cp-618, 0.0, 0x1.1be6c41d7b2ccp-910,
     0.0, 0x1.cb16e58557565p-965, 0x1.a1ff541517c12p-327, 0x1.260684a9febf9p-35, 0.0,
     0.0, 0x1.7f63c7ed04adep-926, 0x1.eb5dae6227dfdp-901, 0x1.e4798c0711d2p-772,
     0x1.490484adedea9p-380, 0x1.916c9fe4a6942p-142, 0x1.ea079205995aap-357, 0.0,
     0x1.876333acd5c01p-319, 0x1.de874f5df96e8p-529, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.066b1f9310b66p-737, 0.0, 0.0, 0.0, 0x1.82725e2b9f5c5p-759, 0.0,
     0x1.8ccec801625b5p-988, 0x1.b9f982dba9ca1p-224, 0.0, 0x1.ed71ffa807ca6p-541, 0.0,
     0.0, 0.0, 0x1.f85ab7bf17f3ep-683, 0.0, 0x1.f60b87bbf3075p-222,
     0x1.403e2337c6717p-1013, 0x1.62a61aa5550b2p-677, 0.0, 0x1.9dbbdfb65b63dp-58,
     0x1.5f8943bf000d4p-197, 0x1.f60c562e3e889p-605, 0x1.4e86ac21e6d3cp-330,
     0x1.a521fb32875e2p-89, 0.0, 0x1.d085393d1a346p-49, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_acosd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
