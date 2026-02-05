/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintd4_kvx.c --function Sleef_finz_rintd4_kvx \
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
     0x1.1be5ac9abf3f1p-711, 0x1.68496854aec7ap-853, 0.0, 0x1.efd4ef45d61e3p-270,
     0x1.9d222fe74df45p-313, 0x1.84d569a79e9bep-687, 0.0, 0.0, 0x1.724255ecb47aep-634,
     0x1.265fe9e26cf25p-473, 0x1.34688cea37115p-282, 0.0, 0.0, 0.0,
     0x1.fd20f17603899p-382, 0.0, 0x1.5b6d297d1b735p-155, 0x1.2e5e0a697afdap-832, 0.0,
     0x1.911b2fcac427p-323, 0.0, 0x1.6c9464e58907ap-572, 0.0, 0.0,
     0x1.8394d6f4f82fp-809, 0.0, 0x1.7622cb187d5f4p-903, 0.0, 0x1.0f933773d21aap-557,
     0.0, 0x1.51d699b5aab25p-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb21a2cc4cf6cp-180, 0.0, 0x1.b0a3711b47242p-742, 0x1.6931f3a12736p-232,
     0x1.3fbecf1528dbbp-578, 0x1.554273e5c3401p-348, 0.0, 0.0, 0x1.47bc93291c3e7p-607,
     0x1.5b4fc37e78e0ap-420, 0x1.dcaedfe372992p-512, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.15996ff0caab4p-878, 0x1.ed521ba934ed7p-41, 0x1.1c6d0c8539aa5p-586, 0.0,
     0x1.1e3a74eef041dp-298, 0.0, 0.0, 0x1.aac8195fdde5ep-76, 0.0, 0.0, 0.0,
     0x1.d5ba652637146p-916, 0x1.c88967156f9f2p-575, 0x1.ed1567e545f3ep-777, 0.0,
     0x1.90359aac24606p-1007, 0x1.f60da8315a8aep-383, 0.0, 0x1.7c445c418b65p-1001,
     0x1.85d100fb8c37bp-950, 0x1.daa3daf60451bp-309, 0.0, 0x1.9392d90358b94p-122,
     0x1.82f9fd2c14538p-10, 0x1.159ba40ef11b5p-981, 0.0, 0x1.3c2b5043289aep-1011, 0.0,
     0x1.6681b948e456cp-73, 0x1.58ffb2d044c48p-651, 0x1.8aab4876ef171p-825,
     0x1.54f651ed5cb2dp-149, 0x1.cd9337388533bp-400, 0x1.2be5b85ced7a9p-853, 0.0, 0.0,
     0x1.d912ef20f59b2p-841, 0.0, 0x1.02d621f20c86ep-524, 0.0, 0x1.0a50caf5670d3p-431,
     0x1.dba2f3702e3d4p-586, 0x1.4aa01fad85848p-755, 0.0, 0.0, 0x1.375902f3c3d09p-401,
     0x1.1836bc3fea22p-117, 0.0, 0.0, 0x1.9afc771d46a93p-519, 0.0, 0.0,
     0x1.442efdf94ec6ap-877, 0x1.daf21d0dbd193p-77, 0x1.20391e0e2c03p-247, 0.0,
     0x1.68021f0d0fa76p-583, 0.0, 0x1.7b3e69aea81dp-658, 0.0, 0x1.5427ca00b34c8p-135,
     0.0, 0x1.fb16ba5bc576p-503, 0x1.f20fdcf034976p-89, 0.0, 0.0,
     0x1.e0818f2e879dep-24, 0x1.176a3760066c4p-624, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ccd3bd6b480cp-513, 0.0, 0x1.e530f18475423p-373,
     0x1.001cdf34fd53ap-809, 0.0, 0.0, 0.0, 0x1.2f515641d0ddp-400,
     0x1.69302b2670f5ap-531, 0.0, 0x1.9744b0bd59457p-456, 0.0, 0x1.90211b779ce64p-819,
     0x1.db5e6a61d4d98p-158, 0.0, 0x1.b60a9e91fd3eap-135, 0.0, 0x1.d6bed27ee40eep-838,
     0x1.8b67020e393b8p-850, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c71e1b1d08db1p-884,
     0x1.f6efef8518fd1p-577, 0x1.b07dd7fdcf7bp-664, 0.0, 0x1.9bc6e8ffaa5afp-592,
     0x1.9c11a25b7d52bp-653, 0x1.374db5fbcf8f3p-301, 0x1.aabb9339e3f0ap-958,
     0x1.b411e4e221f0dp-240, 0x1.cefd1dd00fc05p-831, 0.0, 0.0, 0.0, 0.0,
     0x1.e04613de2a1a2p-165, 0x1.d2ac234576114p-837, 0x1.842cb4d049081p-596, 0.0,
     0x1.cc6c83d79bd8p-30, 0x1.c15c1d22ea036p-599, 0x1.cc143202d9b7fp-129, 0.0, 0.0,
     0.0, 0x1.26046eec8ffd3p-441, 0x1.f4f68dbc6ddbbp-202, 0x1.172b5e28a267cp-779,
     0x1.8bc867f1c898ap-379, 0x1.862e008ddf08fp-538, 0.0, 0.0, 0x1.7f49f0be775dcp-930,
     0.0, 0x1.6168aeb870e9dp-498, 0.0, 0x1.ca8dbd4a76c58p-902, 0.0,
     0x1.e182964c7379fp-934, 0.0, 0x1.ee83318482d5bp-66, 0.0, 0x1.c83b0ad4de17bp-790,
     0x1.8a39fbf4e7115p-581, 0x1.1f7ea8852753dp-1002, 0x1.8fe092c1f7785p-442, 0.0,
     0x1.558aa55dcc067p-768, 0.0, 0.0, 0.0, 0x1.e98bce5aac18dp-479,
     0x1.041a8ff1ff616p-383, 0x1.462deac780109p-648, 0.0, 0x1.6cc0f71727972p-750, 0.0,
     0.0, 0.0, 0x1.bd9278e2ee923p-419, 0.0, 0.0, 0x1.3a51ff42bb533p-39,
     0x1.47f5989eff02bp-523, 0x1.089599f252bf4p-631, 0x1.133f9a647a59cp-570, 0.0, 0.0,
     0x1.f169672288077p-237, 0x1.4fa74a86e78dcp-78, 0.0, 0.0, 0x1.153353c6c13f1p-401,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.146685afec789p-937,
     0x1.d7bbfcd75f782p-914, 0x1.aa303b3935176p-878, 0x1.6793077d7488ap-175, 0.0, 0.0,
     0.0, 0.0, 0x1.ff5aab178961dp-25, 0.0, 0x1.71ffb84c1e6f9p-1001, 0.0,
     0x1.82ff039b2237fp-881, 0.0, 0x1.27d5309c0a7cep-238, 0x1.668f873a92c83p-533,
     0x1.def3a5f54dec5p-930, 0.0, 0x1.203cc1dc05517p-974, 0x1.2eebfa73d8fcap-973,
     0x1.86a3b54fbfb96p-898, 0x1.7402438aef973p-356, 0x1.d17ec88b54d69p-732,
     0x1.4b6e7512d320cp-305, 0x1.f02a6d4e69b02p-362, 0x1.1989a7a68c302p-306, 0.0,
     0x1.9d7c5190fe3cdp-638, 0x1.524ea47ea3e3dp-413, 0.0, 0.0, 0x1.a432e58cdd15cp-694,
     0.0, 0x1.078300bb54c21p-210, 0.0, 0x1.7ba4098cd08f4p-321, 0.0, 0.0,
     0x1.3817f443d65d3p-86, 0.0, 0.0, 0.0, 0.0, 0x1.6ca5be8d53b38p-481, 0.0,
     0x1.a7b4b5ae5cba5p-494, 0x1.a5af669153416p-606, 0.0, 0.0, 0x1.e62b050473543p-599,
     0.0, 0.0, 0x1.5031bdcd54ec4p-144, 0x1.3f43eae4c4478p-713, 0x1.c48480ba7b2f8p-912,
     0.0, 0x1.32d935b7cfd9p-295, 0x1.a3a6bd38ceb8dp-644, 0x1.165c58b9afbc4p-945, 0.0,
     0x1.81a625b7ddcbfp-211, 0x1.06f6d1c5f8cb7p-246, 0x1.201030986e60bp-733, 0.0,
     0x1.29add9cafedffp-967, 0.0, 0.0, 0x1.b7717e6278edfp-869, 0x1.e535238d276bbp-396,
     0.0, 0x1.200daf7842145p-145, 0.0, 0x1.5b52d5cc58707p-386, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9902cbccb664fp-435, 0.0, 0.0, 0.0, 0.0, 0x1.eb0dc8681d69cp-839,
     0x1.21219c4eafa3bp-394, 0x1.b7eebc1ca24p-113, 0.0, 0x1.103b392905072p-304, 0.0,
     0x1.ebc06e949344p-635, 0x1.c19afc9058d3ap-135, 0.0, 0.0, 0x1.a17623cfe691p-561,
     0x1.6e3053f1b2a4bp-866, 0.0, 0.0, 0x1.0b92a7b66319dp-255, 0x1.6ad881e09effap-559,
     0x1.b18acbc104c74p-924, 0.0, 0.0, 0.0, 0x1.980aa9424f7f5p-213,
     0x1.5a461f1176a4ap-24, 0x1.a02f02a2b9adap-633, 0.0, 0x1.60cd4389d0598p-883,
     0x1.d5942281291cbp-739, 0.0, 0.0, 0x1.9be147471ff36p-71, 0.0, 0.0,
     0x1.4c70c551d1a8fp-624, 0x1.af6b45947f01ep-467, 0x1.ecc02ebc961e9p-433, 0.0, 0.0,
     0x1.fc22c9e72d758p-563, 0.0, 0.0, 0.0, 0x1.4dca2958036aep-35,
     0x1.f6ae0540d2a9cp-787, 0.0, 0.0, 0.0, 0.0, 0x1.e549a1d66534ap-989,
     0x1.8712d60260aa7p-793, 0.0, 0.0, 0x1.4db9915288462p-169, 0x1.cef39ee5ef804p-480,
     0.0, 0x1.f600680e63994p-392, 0.0, 0x1.82c1cc33f217ep-385, 0x1.28b133143b908p-515,
     0.0, 0x1.613da67f0fd1bp-140, 0x1.ef253e2dff792p-39, 0x1.a692a5fd8c24fp-565,
     0x1.799a7841cdcd2p-565, 0x1.c27e6f3f8f28dp-321, 0.0, 0x1.c8b55d43b9714p-844, 0.0,
     0.0, 0.0, 0x1.baab74ed1addfp-210, 0x1.31affcb1174f3p-579, 0.0, 0.0, 0.0,
     0x1.19e78aa674747p-118, 0.0, 0.0, 0x1.336de06d5560ep-688, 0x1.fb489e37b5816p-615,
     0.0, 0x1.abaa9b55ff41cp-306, 0x1.ace0983abb561p-24, 0x1.c7e82e88da034p-188,
     0x1.b0fa7a4bda79cp-894, 0x1.da0fb8ed4fd72p-805, 0x1.ea9f8f5d2ab47p-468,
     0x1.2b29efb5b02c8p-773, 0.0, 0.0, 0.0, 0x1.7b45110701b84p-687, 0.0,
     0x1.ede125bc21aecp-152, 0.0, 0.0, 0x1.c88fc94bae5d7p-267, 0.0, 0.0,
     0x1.350c54929585p-852, 0x1.51dd1a46ecb32p-109, 0.0, 0.0, 0x1.8336ccf50d9bap-652,
     0x1.9cccd58ea26ap-193, 0x1.03a0ef1763063p-200, 0x1.a86e146020e8p-331, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.951f119caecc1p-393, 0.0, 0x1.006318f2a914dp-872,
     0x1.85767752981a5p-168, 0.0, 0x1.886e86fbde578p-585, 0.0, 0.0, 0.0, 0.0,
     0x1.3cae10b6744f4p-408, 0.0, 0.0, 0x1.358b0401b750ep-368, 0x1.ed1a2ec64cb3fp-849,
     0x1.a6a4164b334d1p-953, 0.0, 0x1.78aaf822cb838p-983, 0x1.a117d3c6df381p-700, 0.0,
     0.0, 0x1.add105ac25b41p-78, 0.0, 0x1.699203078bcb6p-136, 0x1.fcb192fd91eb6p-364,
     0.0, 0.0, 0x1.6a46ad6e4652p-916, 0x1.c3485cb25a1b2p-815, 0x1.a763cb7170e41p-671,
     0x1.6caa4879bded1p-413, 0.0, 0x1.725bba6d9b4cfp-505, 0x1.680844e2fda9ep-604, 0.0,
     0x1.514464fec272cp-545, 0.0, 0x1.bfb49de97a624p-18, 0x1.d15fda9affbeep-727, 0.0,
     0x1.ed1407a81baddp-99, 0.0, 0x1.494c509d76d57p-299, 0x1.ea5094c4e91fbp-216, 0.0,
     0.0, 0.0, 0x1.3c9f7be3bbc7p-584, 0.0, 0.0, 0.0, 0.0, 0x1.0306a3b273682p-307,
     0x1.230b3b0a82dfcp-651, 0.0, 0.0, 0.0, 0.0, 0x1.286b1116e8f12p-313, 0.0, 0.0,
     0.0, 0x1.22c411935d362p-432, 0.0, 0x1.fa767bc222012p-418, 0x1.567454e168281p-446,
     0.0, 0.0, 0.0, 0x1.1360270fff863p-294, 0x1.7bafa7dbfb1c8p-379, 0.0,
     0x1.97ac714b10d9fp-270, 0.0, 0.0, 0x1.210b9bb549773p-765, 0.0,
     0x1.284a6e8dd9c4fp-282, 0x1.ccfc8fad088d1p-750, 0x1.b34ac66153fd5p-396, 0.0,
     0x1.de51e6f0e0b5p-327, 0.0, 0x1.12ee958a5bb46p-54, 0.0, 0x1.deae1e748db31p-323,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.180ccfe2e468cp-860, 0.0, 0x1.41e08c28feb9p-137,
     0.0, 0x1.52187e07ad278p-878, 0.0, 0.0, 0.0, 0x1.d151b255250e2p-155,
     0x1.151215e4758d6p-105, 0x1.3c18746a92cbep-871, 0x1.3ccce2fa263f6p-474,
     0x1.a8dd876faf021p-715, 0x1.e364b8b7f900ap-146, 0x1.e3f0baa8ff247p-645, 0.0,
     0x1.d51f31f30079fp-992, 0x1.e7bf874847ceep-284, 0x1.60268e8af6644p-527, 0.0,
     0x1.9b709c1d971a6p-163, 0.0, 0x1.9c7978e59b858p-664, 0x1.53bc2157df041p-336, 0.0,
     0.0, 0x1.dc01c8493d61cp-978, 0x1.981f6c17d5061p-266, 0.0, 0.0, 0.0, 0.0,
     0x1.ce4024ba4eca4p-982, 0x1.7f0151b46bf63p-694, 0.0, 0.0, 0.0,
     0x1.d663f61292f0fp-154, 0.0, 0x1.ce8372d9f398ep-27, 0.0, 0x1.f3488750c6362p-305,
     0x1.3bfaac1449adp-657, 0.0, 0.0, 0x1.f577174926692p-554, 0.0, 0.0,
     0x1.9f6204cefda95p-319, 0.0, 0.0, 0x1.96e5f8353d37p-760, 0.0,
     0x1.97dc3e4a416f9p-357, 0.0, 0x1.1a0a19703eabap-8, 0x1.56bde7f66f0f5p-681,
     0x1.d24466bb8fe67p-977, 0.0, 0x1.9439005edf155p-514, 0.0, 0.0, 0.0,
     0x1.3169f1b4a0e4dp-100, 0x1.be9ec37e8253fp-890, 0x1.6d6d5ac1b23b9p-288,
     0x1.a526f3c9661aep-186, 0x1.d59262ead13fcp-316, 0x1.f02cf9fadc4a8p-121, 0.0,
     0x1.57a42221f8473p-512, 0x1.51c4702432f83p-675, 0x1.b7d0eb3ecde98p-990,
     0x1.60110d225a3b6p-578, 0x1.41cc27e2e4f79p-648, 0.0, 0.0, 0x1.d13a647e97e94p-589,
     0x1.88ce6257b0a24p-376, 0x1.5f26bf7e88e72p-210, 0x1.5b49d2bae6cbep-179,
     0x1.90286b1dc27b9p-438, 0x1.a492b2b9002e9p-252, 0x1.ed1b1d6a43d5ap-482, 0.0,
     0x1.26a2b531b0b44p-69, 0x1.0af7da016388p-870, 0.0, 0x1.563e9c0c0bcb3p-477, 0.0,
     0.0, 0.0, 0x1.8c34f2e4823d8p-813, 0.0, 0x1.a15257c7e9cacp-643,
     0x1.ad18559836124p-966, 0.0, 0x1.a82ce7f24df32p-530, 0x1p0,
     0x1.e05602d9173abp-711, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0036a6e0a4d1ap-717, 0.0,
     0x1.326f5271b454p-375, 0x1.6d8757cc0cbeap-262, 0x1.dfdc85a4824acp-230, 0.0,
     0x1.06eeff75d47aap-753, 0.0, 0.0, 0x1.5fb92e3b98072p-616, 0.0,
     0x1.fc26f2c34d454p-976, 0x1.e99c2917d5f77p-133, 0x1.3fa7c7e83ccb9p-936,
     0x1.59691fa44088ep-1007, 0x1.841be64a4d4eep-461, 0.0, 0x1.a761ac8699972p-408,
     0.0, 0x1.bb7503a5a5ab3p-85, 0x1.c38f1c8c3e09p-504, 0x1.8dab4767b603dp-593,
     0x1.d80b55efa3e71p-958, 0x1.bfb4a1277fc7ap-393, 0x1.389858b83430ep-778, 0.0, 0.0,
     0x1.e54a257bb5131p-581, 0.0, 0.0, 0.0, 0x1.5771fc260662p-62, 0.0, 0.0, 0.0,
     0x1.dbfbf168cea68p-919, 0x1.4390b12e8d5a1p-511, 0x1.35dca6a2b8a59p-111, 0.0, 0.0,
     0x1.00f2b9d3969c3p-104, 0x1.05346a9d31b14p-665, 0x1.451fc405ed9fep-288, 0.0,
     0x1.57634111a4718p-925, 0.0, 0x1.92e06f40c0d28p-979, 0x1.fe965959541d6p-419,
     0x1.7ebbe7d9c20f3p-78, 0x1.51501d77a9ad2p-924, 0x1.3751aed60a7d5p-713, 0.0, 0.0,
     0.0, 0.0, 0x1.244ed8c348c8ep-292, 0.0, 0x1.f1fcc7681b90cp-258, 0.0, 0.0, 0.0,
     0x1.6aa24551d7c58p-406, 0.0, 0x1.658767a93c72p-140, 0x1.09ee97e4f2f6dp-527,
     0x1.0d0b03beb85ddp-283, 0.0, 0.0, 0.0, 0x1.88175bbe32f76p-687,
     0x1.bf62f6a1c9f0bp-196, 0x1.04805176b6527p-119, 0x1.f7c0a49425c17p-121, 0.0, 0.0,
     0x1.c1fea66e22d02p-961, 0.0, 0.0, 0x1.690a72e150c91p-787, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5a3253e7366ccp-11, 0.0, 0x1.4da67a0a7b1bdp-164, 0.0,
     0x1.ad87c770c5df2p-514, 0x1.040941c541b7p-315, 0x1.6126ac4559c4p-336, 0.0,
     0x1.9d68682e53886p-453, 0x1.9c95cf16d1a93p-629, 0x1.d67a1b7a9863cp-253,
     0x1.71fe40a26b701p-309, 0.0, 0x1.a915306eae665p-790, 0.0, 0x1.c2ec1c45b4419p-432,
     0x1.4cade498c4b0bp-846, 0x1.c914a0353fa84p-580, 0.0, 0.0, 0x1.c5dc6e3c0e2a4p-590,
     0.0, 0x1.cfbc4430cb4afp-984, 0x1.b7b581da622bap-17, 0.0, 0x1.98b1492a71423p-157,
     0.0, 0x1.cb4e29904ce94p-588, 0x1.64d1f10569151p-967, 0x1.e6f124abbdce6p-117, 0.0,
     0x1.405e29bea8ae7p-72, 0.0, 0.0, 0.0, 0.0, 0x1.51346b9e743d2p-127, 0.0,
     0x1.6db9d69aaea67p-1005, 0.0, 0x1.b21f9f2e5f09p-780, 0.0, 0x1.6bf602fc534f5p-97,
     0x1.987749d9d5afbp-556, 0.0, 0.0, 0.0, 0x1.0fd14408bbb14p-680,
     0x1.b63ba7f6fc1a8p-454, 0.0, 0.0, 0.0, 0x1.aa8b1019d9315p-831,
     0x1.23de8579c7c47p-377, 0.0, 0.0, 0x1.971c6209332e7p-798, 0.0, 0.0,
     0x1.0f72fd0f5acf1p-385, 0.0, 0x1.e2ac5b02f6662p-272, 0x1.ac7b20aa3ab2fp-911,
     0x1.3196865fc855fp-115, 0x1.60502d4b64555p-147, 0.0, 0.0, 0x1.09056efa3b52fp-211,
     0x1.6a9f37f257dddp-311, 0x1.9f33c93912927p-46, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3e0194c1604ep-513, 0x1.c07335e7f3fcp-68, 0x1.9db239528acfdp-589,
     0x1.0a0ecbe10e062p-229, 0.0, 0.0, 0x1.efc438c4ea48cp-995, 0x1.3db4c2d5824b1p-529,
     0.0, 0x1.060d91d1f8396p-308, 0x1.6646ae8c01f12p-508, 0x1.cea902d1af36fp-951, 0.0,
     0x1.126fc46d4d08cp-930, 0x1.bf5f1bfc46cafp-521, 0x1.f49363bc3603cp-117, 0.0,
     0x1.f97544ac202c1p-365, 0x1.084dbc58a98d8p-540, 0.0, 0x1.13e63a5d3702cp-319,
     0x1.b756dcc54d042p-241, 0x1.e30a0efb0407dp-326, 0.0, 0.0, 0x1.4486b500537b7p-37,
     0x1.94f5f52b5dbdep-361, 0.0, 0x1.778215648a963p-456, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c09714e377502p-627, 0x1.faf6ea1b5c8f8p-685, 0.0, 0x1.b8bec5cbb8e98p-266,
     0x1.1e68cb3df5b1fp-752, 0x1.4f6ceef16ce4dp-762, 0.0, 0.0, 0x1.0521f8175854p-737,
     0x1.afaa0962d3aecp-278, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1eb91f528738p-992,
     0.0, 0.0, 0.0, 0x1.87b8a5fd79635p-376, 0x1.4410e2556bb75p-830,
     0x1.f85052ae53518p-263, 0x1.5ff13c7c79b0fp-451, 0.0, 0x1.2f49ad52d894fp-359, 0.0,
     0.0, 0x1.777028c394824p-565, 0x1.52647e3fb0425p-71, 0.0, 0x1.6d673e9f0a266p-526,
     0.0, 0.0, 0.0, 0.0, 0x1.fc52a17c6df0bp-552, 0x1.e431a3a7b4669p-933, 0.0, 0.0,
     0.0, 0x1.74306fd4824bap-729, 0x1.6eae9f1229feap-553, 0x1.eacd98e1cc699p-673,
     0x1.6415c22a53346p-221, 0.0, 0x1.d4477bf3e1f9cp-776, 0.0, 0.0,
     0x1.24035dc35cd2ep-357, 0.0, 0.0, 0.0, 0x1.c497f00d59563p-536,
     0x1.284bfc4627bc3p-1007, 0.0, 0x1.1a3b11ff20514p-859, 0.0, 0.0,
     0x1.8afe1d73d354bp-232, 0x1.b78f20428d1eep-16, 0x1.993f2880b5b4dp-941, 0.0,
     0x1.ee516d087c646p-189, 0x1.708e213fbf971p-236, 0x1.8ba6e6ff2b35p-482,
     0x1.2e2a1c41091e2p-722, 0.0, 0x1.b91e5b3f592edp-544, 0.0, 0.0, 0.0, 0.0,
     0x1.a9943103a914cp-156, 0x1.13e7e9c0ad677p-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ecc5bc19b7f05p-703, 0x1.026469ed0fabp-900,
     0x1.fb742e15b3eap-222, 0.0, 0.0, 0.0, 0x1.3eaaabeef12f6p-121, 0.0, 0.0,
     0x1.8bc6516aa7a96p-685, 0x1.5f06badac9f1dp-154, 0x1.11f8ea1243e1dp-853, 0.0, 0.0,
     0.0, 0.0, 0x1.01bfd7a089689p-1016, 0.0, 0.0, 0x1.b8e79aea85885p-641,
     0x1.1c116ccbe6edbp-418, 0x1.a8547e87dcef1p-411, 0.0, 0.0, 0x1.6fdd158dfab51p-187,
     0.0, 0.0, 0.0, 0x1.1fec11f8e1cb6p-781, 0.0, 0x1.e4de5facfa066p-125,
     0x1.0f8fd77f011d7p-347, 0.0, 0.0, 0.0, 0x1.bc71d5c898c48p-601,
     0x1.d5ee12c3ca691p-755, 0.0, 0.0, 0.0, 0x1.b8d8d75e1ccadp-65,
     0x1.dd0875cb95572p-862, 0x1.d18506cad92dp-259, 0.0, 0x1.a2b36fc995afap-549, 0.0,
     0x1.b59794e9ac39dp-871, 0x1.49f44f0f0dae3p-323, 0x1.4b3fe8787ac1p-338,
     0x1.41ed212b16bb4p-819, 0x1.d214c95afbf78p-908, 0x1.3888e37ef52f8p-515, 0.0, 0.0,
     0x1.6eea7fd408fd7p-1000, 0.0, 0x1.8682c2afd533ap-210, 0x1.95be4ece2c73cp-360,
     0x1.ad3be4b7924acp-899, 0x1.0a77d12e24aeap-180, 0.0, 0x1.59a1b529a8adap-956, 0.0,
     0x1.715e18670f723p-462, 0.0, 0x1.af7569ddb9775p-1001, 0x1.d2158c7a2de51p-46, 0.0,
     0x1.dfd5ff1a39ab2p-464, 0x1.f4dc75cd0973ap-717, 0x1.a272689934008p-143, 0.0, 0.0,
     0x1.f8f7803e4c25ap-680, 0.0, 0.0, 0x1.e3f97fa47fd94p-579, 0.0,
     0x1.639b240ebf196p-638, 0x1.3f9114fea8cfbp-404, 0.0, 0.0, 0x1.c908b0b89b692p-223,
     0.0, 0.0, 0x1.3a7799f6c8559p-791, 0x1.3bd1b302bb053p-779, 0x1.354b293160173p-994,
     0.0, 0.0, 0.0, 0x1.c00e270f5eb59p-337, 0.0, 0.0, 0.0, 0x1.ef2a0a7a9ddcbp-83,
     0x1.2932c31344326p-35
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
            tmp1 = Sleef_finz_rintd4_kvx(tmp0);
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
    printf("Sleef_finz_rintd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_rintd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
