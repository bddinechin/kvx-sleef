/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd2_u35kvx.c --function \
 *     Sleef_finz_sinhd2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0x1.7a11c101748ap-543, 0x1.e04ed7e454905p-70, 0.0, 0x1.4a04afcdbf0bbp-676,
     0x1.f3b16edb9947ap-664, 0x1.ab37cc2a92b3dp-782, 0.0, 0x1.fc056bbd439cbp-997,
     0x1.07c7e83090e5fp-328, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65e22d27ac019p-555, 0.0,
     0.0, 0x1.e202ab3dc3e03p-447, 0x1.5952ccd38c83p-356, 0.0, 0x1.d7585581e058cp-185,
     0.0, 0x1.50096235b51e5p-345, 0x1.f8596dde38dd6p-117, 0.0, 0.0, 0.0, 0.0,
     0x1.90a9260a38eafp-585, 0x1.152fb1bca61d8p-3, 0x1.43552358c77fcp-98,
     0x1.54c531861e468p-669, 0.0, 0.0, 0.0, 0.0, 0x1.386550ebc4249p-940, 0.0, 0.0,
     0x1.5b01df294d1c9p-93, 0.0, 0x1.6bc89a76394b4p-225, 0x1.c9eb9a76c02b3p-44, 0.0,
     0x1.5d9bd879c2788p-780, 0.0, 0x1.c0f01244420a8p-953, 0x1.2a7ed5705aa76p-9, 0.0,
     0.0, 0x1.253ae68d01cbap-271, 0.0, 0x1.721a8070d734ap-40, 0x1.6767d96e7ab54p-643,
     0x1.35099c64f1f1cp-331, 0x1.a983dadab9186p-316, 0.0, 0.0, 0x1.e1cba136947f2p-540,
     0x1.113c7c900c28cp-219, 0.0, 0x1.06c3387d99874p-965, 0x1.ec36b268953aep-273, 0.0,
     0x1.e4f7a52287dabp-950, 0.0, 0.0, 0.0, 0.0, 0x1.ab1d2165b10dp-879,
     0x1.a188d411c37cep-170, 0.0, 0x1.96dfe02e26777p-427, 0.0, 0.0,
     0x1.458bf04be6906p-136, 0.0, 0.0, 0.0, 0.0, 0x1.3a3332fbc3eaap-762, 0.0,
     0x1.96dc37bcff084p-888, 0.0, 0x1.0066b2789129ep-488, 0x1.55241018ffd05p-323, 0.0,
     0.0, 0.0, 0x1.db35d361c54cbp-242, 0.0, 0x1.b308b48c2a1d5p-685, 0.0,
     0x1.2dd37fbcb2dbep-897, 0x1.3d12d1ada8064p-248, 0.0, 0.0, 0x1.701e0229dc742p-991,
     0x1.053402ec4e013p-513, 0x1.6bca19fc3ce18p-803, 0.0, 0.0, 0x1.56c3fe76ac574p-220,
     0x1.880cb60bf0315p-142, 0.0, 0.0, 0.0, 0x1.29229379691b9p-214, 0.0, 0.0, 0.0,
     0x1.e982e7b0c20a7p-672, 0x1.a737e93d60aecp-180, 0x1.4d6452921448p-489,
     0x1.c028bc07822d5p-917, 0.0, 0.0, 0.0, 0x1.6e8e00d2d86p-706, 0.0, 0.0,
     0x1.df072ac8e11abp-9, 0.0, 0x1.49aae53247c41p-695, 0x1.dfb9237930a8p-616,
     0x1.134104dd3c39p-714, 0.0, 0x1.15fb4b06d8b9ap-229, 0.0, 0.0,
     0x1.923eff447cbecp-82, 0.0, 0x1.743e71ed34472p-114, 0.0, 0.0, 0.0, 0.0,
     0x1.bd62656e07bddp-910, 0x1.7600178e36768p-181, 0x1.5581ff0cbf583p-782,
     0x1.cbe61f8136a13p-546, 0x1.9a0365012d11cp-771, 0x1.445d8dd18d7bdp-132, 0.0, 0.0,
     0x1.11bd30fb57cccp-64, 0.0, 0x1.5e93d63e3fbfep-774, 0x1.3630a2b49b538p-592, 0.0,
     0.0, 0x1.3bc9c809f22fap-913, 0x1.4659a5bfd8a5bp-901, 0.0, 0.0,
     0x1.7a57fe05683b9p-111, 0x1.7e9961f82e7abp-332, 0.0, 0.0, 0.0,
     0x1.8aab680ba6f6fp-638, 0x1.2057222dfeb97p-358, 0x1.752a82c82c019p-37,
     0x1.23b9793320f92p-536, 0.0, 0.0, 0x1.50d3c9f0bbe2ep-892, 0x1.7a7add4171af7p-613,
     0x1.6b6a66a33291ap-723, 0.0, 0x1.cd9a76bcde74bp-12, 0.0, 0.0, 0.0,
     0x1.9892ea36f0536p-942, 0x1.15e354a84cd21p-885, 0x1.aa77828121139p-681,
     0x1.c102fdccb4adbp-997, 0.0, 0x1.08f6e16e92291p-527, 0.0, 0.0,
     0x1.e82bd2c185795p-386, 0.0, 0.0, 0x1.c8167ee3ff36bp-491, 0x1.f84621191e4aap-641,
     0x1.b96517d57d93ep-226, 0x1.d4a312dfc00cap-290, 0.0, 0.0, 0.0,
     0x1.d543e10e34b9bp-990, 0x1.edce5bd6e481ep-439, 0x1.92add16a62abdp-911,
     0x1.9294777d62e6p-441, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21ef6247c04d3p-139,
     0.0, 0x1.2f1adf2330a4p-532, 0x1.74f19561b8b2fp-468, 0x1.09f3242eb446dp-881,
     0x1.6393fa37f9bb5p-862, 0x1.627e811fb223bp-585, 0x1.e521db4d3fffep-79, 0.0,
     0x1.23f6c7239d08ep-1014, 0x1.f69efa1a2730bp-672, 0.0, 0x1.c99cb02bbee46p-402,
     0.0, 0x1.cb2a5acd55e41p-55, 0.0, 0.0, 0.0, 0x1.ab1b9b53ac02p-68,
     0x1.67a1bbaf1b252p-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.39ae3415681bdp-478, 0.0, 0.0, 0x1.2f086ff7af77fp-626, 0x1.65ff7a3ecc082p-388,
     0.0, 0.0, 0x1.bbb11abf52a65p-483, 0.0, 0x1.6e96a466405ffp-354, 0.0, 0.0, 0.0,
     0x1.b29a15551367fp-808, 0.0, 0.0, 0x1.829a184518d46p-894, 0x1.d015eed1dde36p-238,
     0.0, 0x1.644072bee2d7cp-943, 0x1.95379d0880fa1p-1017, 0.0, 0.0,
     0x1.e4f4e13f87211p-794, 0x1.b3f0ca68036dep-403, 0x1.87e4a0028904p-560,
     0x1.a64d2bb75815ap-768, 0x1.dfd6855f8e9d9p-904, 0.0, 0x1.58418e75a975cp-154, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6a335f063b54ep-770, 0.0, 0x1.d417ff9372942p-226, 0.0,
     0x1.9cd8ffb860a7dp-92, 0x1.989485afde832p-536, 0.0, 0.0, 0.0, 0.0,
     0x1.427162be36758p-489, 0x1.6eea80d7d2ce4p-2, 0x1.355d624b9e99ep-30,
     0x1.20aefd722934cp-498, 0x1.0546b692ddc4ep-775, 0.0, 0.0, 0x1.518523fe46c34p-680,
     0x1.8b0df625e4a1ep-115, 0x1.d653dff01cc95p-550, 0x1.1493e0d95687p-522,
     0x1.461b99b64445bp-425, 0x1.28fbb2ee95a2dp-776, 0x1.537a279d73973p-336,
     0x1.cbe5e67fcd91cp-864, 0x1.54686fd3afc8fp-257, 0x1.9ad0e3f644731p-436, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.50569301d5d39p-469, 0.0, 0x1.08d0823cf4663p-76,
     0x1.7cbe3d4f150b5p-523, 0x1.b6edc4c3d0352p-273, 0x1.e666bf56b2762p-663, 0.0, 0.0,
     0x1.a871a156f5c14p-784, 0x1.3f80a561f573p-444, 0.0, 0.0, 0x1.c858f8fd039d9p-997,
     0x1.247d7e91e33dap-930, 0x1.14272e8c69af6p-123, 0x1.449669ac90654p-226, 0.0,
     0x1.bb1026420a526p-527, 0x1.2c40eb40f519p-125, 0x1.a149af9d3b2dcp-894,
     0x1.078be224a96a5p-53, 0x1.76b3aad7f5613p-930, 0.0, 0x1.4d3b4735c7c96p-183, 0.0,
     0.0, 0x1.f557f4ec5652fp-187, 0.0, 0x1.0aaddb16b691ap-968, 0.0, 0.0, 0.0,
     0x1.642e5755ae433p-183, 0.0, 0.0, 0.0, 0x1.1b5fcf746e51ap-85,
     0x1.f1c888180d711p-423, 0x1.6c71e8c538023p-941, 0x1.147d74a29dee2p-387, 0.0,
     0x1.569d51f294a9cp-131, 0.0, 0.0, 0.0, 0x1.d1eb386a02ffap-742,
     0x1.421e3ffa8e0ebp-395, 0.0, 0.0, 0x1.3633f5a998d68p-993, 0.0,
     0x1.65364e420ee66p-726, 0x1.90f9020c95021p-838, 0x1.54d768cb6d18dp-393,
     0x1.00fe7c6c3ceeep-405, 0x1.0b9a981c0351ap-251, 0.0, 0x1.00dcd8a87ff7bp-1022,
     0x1.31189968f368p-504, 0x1.a1b8c00b956b7p-1002, 0x1.233b80cbc56bfp-295,
     0x1.571b5040e5288p-981, 0x1.2a1ed9db67883p-633, 0.0, 0x1.f069a5306e223p-89, 0.0,
     0.0, 0x1.df66002179232p-709, 0.0, 0x1.be232c4166dcep-762, 0.0,
     0x1.0728730db37b5p-384, 0.0, 0x1.304f979df69b7p-557, 0x1.3f581f32e55ecp-908,
     0x1.447c7092e0b4cp-184, 0.0, 0x1.fe6a8b4abc6aep-495, 0x1.fee0379c5d6acp-900,
     0x1.4778db8ac9482p-19, 0x1.4ddcb696ff65cp-267, 0.0, 0.0, 0x1.47c6432978aedp-729,
     0x1.b7ee09cc8bd19p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cee4ee90d75c7p-736, 0x1.5a01f4fc21ae3p-47, 0x1.d2838910a84fp-682,
     0x1.ac5af0f3da5ap-359, 0.0, 0.0, 0x1.33b914b27131dp-271, 0.0, 0.0,
     0x1.cd1f658a0af89p-634, 0.0, 0x1.7766fa4d9ddf7p-489, 0.0, 0x1.6a34bf94fec6p-993,
     0.0, 0.0, 0x1.60d3bc3dbdbf3p-332, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b0279d4fa03dp-456, 0x1.6b3c29995f016p-631, 0.0, 0x1.ff964ec515fa9p-199, 0.0,
     0.0, 0.0, 0x1.3ec1620921cf4p-967, 0x1.d3f3d0dd4882cp-633, 0x1.c5cf8a716ea4cp-593,
     0.0, 0x1.a1c2b5ea0d4c8p-279, 0.0, 0.0, 0x1.dedc1feaf4e9ep-696,
     0x1.f8aeb132bb49bp-428, 0.0, 0.0, 0.0, 0x1.10e146035554cp-786,
     0x1.41c76c5422487p-308, 0.0, 0x1.b87092f77920dp-59, 0.0, 0.0,
     0x1.b9dc872e0215ep-939, 0x1.2663b2d33f906p-447, 0.0, 0.0, 0x1.ba8c8a2f7f577p-536,
     0x1.5e940b32afe2fp-582, 0.0, 0x1.00901b7e35d97p-357, 0.0, 0x1.a8fab6de2cacbp-283,
     0.0, 0x1.294e3299eafep-494, 0x1.30e7688ace269p-208, 0x1.bbd57e431508cp-810, 0.0,
     0.0, 0x1.d32dd6cd2e8dbp-743, 0x1.cef0dc213a139p-735, 0.0, 0x1.792b6feb15363p-651,
     0x1.13979401366abp-855, 0.0, 0x1.918980273c1abp-644, 0.0, 0x1.6581682f01434p-564,
     0.0, 0x1.a3b87e7adb00ap-551, 0x1.4235b61b4c4a6p-999, 0.0, 0x1.3f8acd76501fdp-642,
     0.0, 0x1.24d4ad73620d2p-316, 0.0, 0x1.0dc92c0e5edd2p-346, 0x1.2e7ba23ba6371p-93,
     0x1.aa25298b30a04p-742, 0.0, 0.0, 0.0, 0x1.0420d8c17aa88p-301, 0.0,
     0x1.f84de8001ef4fp-451, 0x1.5fe336c1be81cp-188, 0.0, 0x1.d8aef5373146dp-288, 0.0,
     0x1.d8d98851523c5p-414, 0.0, 0x1.ebb48a78a6429p-950, 0.0, 0.0,
     0x1.44038a3d1d8c7p-253, 0.0, 0x1.9bfd8a7b66dccp-80, 0.0, 0.0,
     0x1.328ce8f12b54dp-610, 0x1.3b318c3e9695p-279, 0.0, 0x1.de30900255c12p-814,
     0x1.b418c44dd25aep-532, 0x1.fbc7d531e186p-980, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.00d0eb3735547p-452, 0.0, 0x1.2ea914da560e9p-800, 0.0, 0.0,
     0x1.e603c68bd87a1p-481, 0.0, 0x1.7f3c5bc2f4381p-466, 0.0, 0.0,
     0x1.22216ee5cc644p-236, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16e843da1b58fp-603,
     0.0, 0x1.b699e6fc034d2p-65, 0.0, 0.0, 0x1.7c8e0b79bd1a9p-773,
     0x1.0125da49aeb8fp-617, 0x1.83d4edd9c5a45p-526, 0x1.993bf6950015ep-280,
     0x1.3e23bc85a6deep-916, 0.0, 0.0, 0x1.ffbde02eca8f3p-810, 0.0, 0.0,
     0x1.b9139203139b5p-413, 0.0, 0.0, 0.0, 0x1.a0887c424b26fp-38,
     0x1.6ae31bdc81077p-751, 0x1.4112469101925p-958, 0.0, 0.0, 0x1.bfc7f797b208ep-872,
     0x1.6894471f3af9bp-990, 0x1.80f933bd67f94p-436, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0146cb995f67dp-957, 0.0, 0.0, 0.0, 0x1.c32b859d634aap-867, 0.0,
     0x1.09c57c09249e3p-146, 0.0, 0.0, 0.0, 0x1.cba23f4aa92b8p-805, 0.0,
     0x1.f2e53c1a862e8p-115, 0.0, 0x1.fd4b0a845489dp-858, 0x1.6f9d05988f06fp-388, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.af78c7069e932p-176, 0.0, 0.0, 0x1.4e82cbccec971p-664,
     0.0, 0x1.3a26aaab5451ep-509, 0x1.eecf48e97619fp-285, 0.0, 0.0,
     0x1.94c6f4d4011f8p-781, 0.0, 0x1.de9ea53df9cabp-333, 0x1.5f38cc8501502p-690, 0.0,
     0x1.27b689cd484c5p-877, 0.0, 0x1.75b98b1d6c48ep-216, 0.0, 0.0, 0.0,
     0x1.46dfd9b2ca28fp-147, 0x1.179a1356d63dfp-79, 0x1.a62fd0765202fp-918,
     0x1.c7206fc67623fp-973, 0.0, 0.0, 0x1.e473dc9d8cda1p-831, 0x1.24e8013a8afa4p-610,
     0.0, 0.0, 0.0, 0x1.50dfa75b8ba7cp-277, 0.0, 0x1.88a9941055132p-534,
     0x1.dc6594ac5e1fep-1022, 0x1.9bc229433859ap-395, 0.0, 0.0,
     0x1.574338dab9cefp-215, 0.0, 0x1.83ca3ddc8347ap-344, 0.0, 0.0,
     0x1.60853710570b5p-510, 0x1.fa17d5d5708d3p-834, 0.0, 0x1.3e4455b67c265p-374, 0.0,
     0x1.3dd9e8f291914p-659, 0x1.e0c62c677c161p-1021, 0.0, 0x1.f74e52c8f96f8p-880,
     0.0, 0.0, 0x1.ec32b16610859p-700, 0.0, 0x1.2df625ee4d827p-150, 0.0, 0.0,
     0x1.c0fdfc18ef907p-1018, 0.0, 0x1.1b811c7af6e54p-766, 0x1.b0e3397165cb7p-605,
     0x1.4f99fa878b2d5p-801, 0x1.b16476b20e45ep-163, 0.0, 0.0, 0x1.d7a38d1ed7c31p-722,
     0x1.3454a58b24be5p-725, 0x1.b149c47678879p-267, 0.0, 0.0, 0.0, 0.0,
     0x1.a6bcc2dfa6ca7p-344, 0x1.c91c00ab6eb43p-172, 0x1.286047726cef8p-446, 0.0,
     0x1.e906cd449f6eep-986, 0x1.1f077d2027601p-876, 0.0, 0x1.5cfc15fc5a5c4p-920, 0.0,
     0.0, 0.0, 0x1.6c37f4d4588b2p-666, 0x1.48ba4064eb09ep-477, 0x1.1b9ab38397bc1p-335,
     0.0, 0.0, 0x1.c5dcac760c28p-301, 0.0, 0x1.e83de27cab3edp-74,
     0x1.8537ea3fb495ap-613, 0x1.6aba0226c89bbp-687, 0.0, 0x1.66f1fae7147d8p-208, 0.0,
     0x1.abd1b29c15544p-136, 0x1.446d07b3e736dp-936, 0.0, 0.0, 0x1.c785f86bfa92ep-505,
     0.0, 0.0, 0x1.37c53eeaa77fp-378, 0.0, 0x1.bc5868ec72cc1p-702, 0.0,
     0x1.99198ad1c36fp-347, 0x1.b2e476ece0b8dp-738, 0.0, 0.0, 0.0,
     0x1.3a311f908b786p-856, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f140881f4fd5p-594,
     0.0, 0x1.4ed58ffb990f9p-44, 0.0, 0x1.5807123b7a198p-645, 0.0, 0.0,
     0x1.4baae396d140ep-48, 0x1.eb7dfe66f89c4p-208, 0x1.e1ac817715af4p-995, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.473875859ba67p-103, 0.0, 0x1.b2c5a95b791f9p-887,
     0x1.155151d477e3p-553, 0.0, 0.0, 0x1.1aa64f25f723fp-807, 0.0,
     0x1.e4335a5a7ad46p-425, 0x1.e4ed8b45327fbp-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b110aa8da5e9p-1010, 0x1.5e623d863e936p-526, 0.0, 0.0,
     0x1.6aa9c8bf2a125p-246, 0.0, 0x1.9574ad58e7d38p-754, 0.0, 0.0, 0.0, 0.0,
     0x1.f7be6ebc04f77p-891, 0.0, 0.0, 0.0, 0x1.f690a0b6671bap-427, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f965dd02140dbp-348, 0x1.dbdb2690b6f48p-264, 0.0, 0.0,
     0x1.6f5728a1965c8p-950, 0.0, 0x1.e3cc50a2ba143p-202, 0.0, 0.0, 0.0,
     0x1.4edb8205b6e4p-779, 0x1.50d90ee4b8c87p-838, 0x1.6cce25408b532p-588, 0.0,
     0x1.191fb2fa7d835p-903, 0.0, 0.0, 0x1.ed60ba3280578p-565, 0.0,
     0x1.73d167039379bp-652, 0.0, 0.0, 0x1.5880bd2f83cbep-251, 0.0, 0.0,
     0x1.87d7cfc2b180ap-976, 0x1.33f122ea2d1e4p-739, 0.0, 0x1.bee30e102dc5ep-485,
     0x1.e174c8b50d15ap-669, 0.0, 0.0, 0x1.ea26ceaf511p-382, 0.0, 0.0, 0.0, 0.0,
     0x1.1848dabcea2d7p-437, 0x1.1df093a841779p-888, 0.0, 0.0, 0.0, 0.0,
     0x1.f34722761e3aap-602, 0x1.b5fdf8c3fd5acp-317, 0x1.5adae89292f95p-206,
     0x1.b726afe7b1ecep-891, 0.0, 0.0, 0x1.6d345dd2c57a4p-323, 0x1.8dcf90af13bc5p-33,
     0x1.d3c07157e4de4p-963, 0x1.0aa768ab8c596p-62, 0.0, 0x1.32c4ad8c1e071p-462,
     0x1.d308a29a06336p-259, 0.0, 0x1.0677d4239844bp-100, 0.0, 0x1.c7a193d4e07b8p-127,
     0x1.b478dc7b5961cp-962, 0.0, 0x1.d75eaf80b5b66p-253, 0x1.ebeac356508f7p-191, 0.0,
     0x1.2476473ab37c5p-179, 0x1.538e3f74291edp-631, 0x1.742b7ba82a66cp-691,
     0x1.8fccf48076cecp-593, 0x1.2f22143aea7d3p-813, 0x1.3f6530192946bp-376,
     0x1.53436502bceffp-903, 0.0, 0x1.0ceadafed2af7p-461, 0.0, 0x1.d0aadeb4092b1p-615,
     0.0, 0x1.5b53b07142aaep-801, 0.0, 0.0, 0x1.1813d9a8c89dbp-454, 0.0, 0.0, 0.0,
     0x1.c7c16db26408ap-695, 0.0, 0.0, 0.0, 0.0, 0x1.e6538bfd4e22ap-185,
     0x1.7be01eb8348e1p-717, 0.0, 0.0, 0.0, 0x1.dc4158f6c1b37p-76, 0.0, 0.0, 0.0,
     0x1.834dbe1c62febp-142, 0x1.db4d8c65f4762p-82, 0.0, 0x1.5e4a00de9c5ep-558, 0.0,
     0.0, 0.0, 0x1.1c5e91907b8d1p-496, 0.0, 0x1.14b204ac05d76p-1017,
     0x1.c010b75cfd0dfp-389, 0x1.e83d36622091p-914, 0x1.6632625840eddp-952, 0.0,
     0x1.fc3ebe20c306bp-588, 0x1.98b2bd3e0de04p-485, 0.0, 0.0, 0x1.456eced96cdf8p-766,
     0.0, 0x1.68ff791db1c8ep-836, 0.0, 0.0, 0x1.6c779df0c768ap-628,
     0x1.a09fbd896dc6ep-969, 0.0, 0x1.9148cfa7b68aep-191, 0x1.723a0966c1daep-604, 0.0,
     0.0, 0x1.a46f3f51b398p-338, 0x1.798d49102e22ep-224, 0.0, 0x1.fb630ff20c9a3p-606,
     0x1.a377ad2cbf24cp-165, 0x1.fd58cfaa3127cp-695, 0x1.717d95246e7d9p-976, 0.0,
     0x1.c1a468f0c53b1p-33, 0x1.5aafb322056bdp-758, 0.0, 0x1.5eb21f697d6f1p-573,
     0x1.9adfb54677436p-808, 0x1.94e5fd293a12dp-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23d18a162235p-853, 0x1.71a0977545ed2p-1013, 0.0, 0x1.e89a9a1e23a41p-328,
     0x1.10b14487fc19ep-927, 0.0, 0.0, 0.0, 0.0, 0x1.a945c14252c87p-928, 0.0,
     0x1.30ddd7ad817eap-889, 0.0, 0.0, 0x1.b97119d84bb13p-190, 0.0,
     0x1.ecc8cbf5ae225p-424, 0x1.73af70b5a5b58p-743, 0x1.67924d98012f4p-776,
     0x1.5fc3562620506p-272, 0x1.603da3e079411p-868, 0.0, 0x1.d91c138b78493p-879,
     0x1.c09ddb2379cd3p-86, 0.0, 0x1.cbd1b4df65302p-992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c96176a430bp-218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.229d3b866bf6fp-174, 0.0, 0x1.8dad607045303p-612, 0.0, 0.0,
     0x1.8a05f45821165p-955, 0.0, 0x1.ed52430bc4563p-890, 0.0, 0.0, 0.0,
     0x1.ba8e9fbf47b0bp-772, 0.0, 0.0, 0x1.9f7ac5dacb6a6p-780, 0.0, 0.0, 0.0,
     0x1.4a9add87855bfp-221, 0.0, 0x1.4b3e50eeb482dp-785, 0.0, 0x1.5559f7ef187bdp-145,
     0.0, 0.0, 0x1.bb1e66f658ac3p-613, 0x1.4885e00c50becp-818, 0.0,
     0x1.99ea34fe69f78p-878, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.404683b500883p-163, 0x1.269f3ae2c9c69p-718, 0.0, 0x1.ee6d76d9b8e73p-51, 0.0,
     0.0, 0.0, 0.0, 0x1.4dad81f634effp-756, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab5cd558bee8dp-722, 0x1.88ed522b824e6p-371, 0.0, 0x1.35c81db3ad409p-476,
     0x1.a64c3929d0849p-867, 0x1.0a6de5e23bfb5p-449, 0.0, 0.0, 0.0,
     0x1.aff59c0578f9fp-779, 0x1.d953dfe0dd73bp-79, 0x1.3f7df5311fec4p-291
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
            tmp1 = Sleef_finz_sinhd2_u35kvx(tmp0);
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
    printf("Sleef_finz_sinhd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinhd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
