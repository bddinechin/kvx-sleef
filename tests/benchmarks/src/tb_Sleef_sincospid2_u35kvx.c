/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid2_u35kvx.c --function Sleef_sincospid2_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.6900a42cf4df4p-835, 0x1.5a7f6460a8fep-664, 0.0,
     0x1.6ca66740c5ef8p-549, 0x1.8a630a3f87bb3p-757, 0x1.aaf22fbf9824ap-456, 0.0, 0.0,
     0x1.8041043b9f9abp-598, 0.0, 0.0, 0x1.1547d4a1cd746p-1020,
     0x1.ddf284ab7baa7p-906, 0x1.5902efabb99b1p-830, 0x1.19fc42a88df5ep-431,
     0x1.879b038ea44b6p-704, 0x1.71cf4974e7228p-99, 0x1.2dccb4156a052p-557, 0.0,
     0x1.8c36c908a115ep-783, 0.0, 0.0, 0x1.e4496870be0ddp-159, 0x1.97b2e3cd15b36p-640,
     0x1.d28495ab628aep-699, 0x1.fb24dbf084098p-227, 0x1.85abb3419c2f6p-783, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.036f58de86defp-36, 0x1.53ad09c5f2e98p-207,
     0x1.a28307152e32p-491, 0.0, 0x1.7c2799e41b30ep-457, 0.0, 0x1.c1ae026fec87fp-493,
     0x1.e60bbc1c96275p-834, 0x1.04cd963a01a5p-866, 0x1.19557a8a00e9ep-44, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea42f0ce019e3p-525, 0.0, 0x1.2c4a5c81ed117p-341,
     0x1.b1ce436f195fbp-1, 0.0, 0.0, 0x1.4fad5a06dde23p-965, 0.0, 0.0,
     0x1.3acb33e69c0aep-554, 0.0, 0x1.c19141954a328p-21, 0.0, 0.0, 0.0, 0.0,
     0x1.8b8150616b7abp-761, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c27c1606f24c3p-819,
     0.0, 0.0, 0x1.37be145ef96e9p-160, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c124a6853a19p-340, 0.0, 0x1.0cc97be70008p-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb048589d60fp-4, 0.0, 0.0, 0.0, 0x1.405c026c12ca6p-115,
     0x1.bb69fc26104cfp-240, 0x1.1df541fa9e58dp-482, 0.0, 0.0, 0.0,
     0x1.6c0e7331ab27dp-399, 0.0, 0.0, 0x1.8373e1ffd50dbp-83, 0.0,
     0x1.dedee1f6c0325p-861, 0.0, 0x1.82154d834c9d4p-277, 0.0, 0.0,
     0x1.440425f51077ap-840, 0x1.41e70a822ce3bp-919, 0x1.0544c9ec61623p-961,
     0x1.f7cf33b0d417ap-365, 0x1.373eb3f83ee3fp-761, 0.0, 0.0, 0.0, 0.0,
     0x1.fc6c9a038d2bap-421, 0.0, 0x1.4c982fb063f8p-626, 0.0, 0x1.f5c114691dc9p-170,
     0x1.ecc67bd6c4b99p-837, 0.0, 0x1.00daae0a15a74p-660, 0x1.655c73ef18bcep-72,
     0x1.805b8aab08ddfp-179, 0x1.d4696addf34afp-186, 0x1.a4d40546370cfp-920,
     0x1.8f0b1efc7f12ep-174, 0.0, 0.0, 0.0, 0x1.3f872509371c1p-576,
     0x1.99a9ec7e10406p-462, 0.0, 0x1.ddd35fee4661fp-645, 0.0, 0.0,
     0x1.5de8fb278ea19p-678, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9517b9b70e256p-613,
     0.0, 0x1.d98b4b080513dp-69, 0.0, 0.0, 0x1.64bc90b037ea7p-970, 0.0,
     0x1.f348f361037b3p-730, 0.0, 0x1.e54b7f5bd856ep-12, 0.0, 0.0,
     0x1.32fb26a859ef3p-75, 0x1.36606c5e92c01p-59, 0.0, 0x1.03b563bd6281cp-830,
     0x1.efe9a698183bbp-589, 0.0, 0x1.3e2925f53213cp-675, 0.0, 0.0, 0.0, 0.0,
     0x1.ad8fd32d31f1dp-963, 0x1.4458616e6ec6cp-406, 0x1.e10301bfd6ba9p-86, 0.0,
     0x1.209fb41350266p-360, 0.0, 0x1.73e56aae5c8cbp-388, 0.0, 0x1.5cb86b5c4deb9p-567,
     0.0, 0.0, 0.0, 0x1.0dcd2725d1427p-58, 0x1.b1880e4c805bbp-287,
     0x1.79a972a63238cp-867, 0x1.8326e34a7f197p-26, 0.0, 0.0, 0x1.3c021b12bde1fp-347,
     0x1.74a690cdf0a54p-527, 0x1.4adfce2b3a7e5p-549, 0x1.e9c19fa3bb2a6p-972,
     0x1.ad9593fee375bp-475, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15b0933ed6a87p-173,
     0x1.ecdf437ff7adp-83, 0x1.b26c548a7e016p-8, 0x1.cf80a614d13acp-938,
     0x1.e741140682591p-977, 0.0, 0x1.8c547d4fa1365p-617, 0.0, 0.0,
     0x1.9c9cf3148f898p-527, 0.0, 0x1.ce3b7da40f8bap-20, 0.0, 0x1.06c7e11a49379p-959,
     0x1.13b0607cce3aep-686, 0x1.4cdd893464d54p-268, 0.0, 0x1.fb1342e9e14adp-399, 0.0,
     0.0, 0.0, 0.0, 0x1.61e850d6042dap-935, 0x1.6d5759702f96cp-819,
     0x1.c3498e5b07c1ep-91, 0.0, 0.0, 0.0, 0x1.39f215120d79bp-308,
     0x1.6730df8f9d442p-316, 0.0, 0.0, 0.0, 0x1.b1ed66e493de1p-126, 0.0,
     0x1.74f792a9fcf9bp-538, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6888dbb40d003p-730,
     0.0, 0.0, 0.0, 0.0, 0x1.594548bcde1cp-357, 0x1.80d5446c4a1a8p-28,
     0x1.bcae129a1f19ep-736, 0.0, 0.0, 0x1.2e0db4f668d41p-215, 0.0,
     0x1.dfee248b714e8p-217, 0.0, 0x1.664e16206d11ep-320, 0x1.4a63a239b7c8ep-558, 0.0,
     0x1.5dfc111f96b04p-542, 0x1.2c1fbcdeec3ap-219, 0x1.efcae098041aep-239,
     0x1.614b07ca06388p-761, 0.0, 0x1.2a9a46de72b8ep-239, 0.0, 0x1.72037e400f95cp-874,
     0x1.1290d70530a86p-1014, 0x1.62487d45cb1dap-293, 0.0, 0x1.873dd09118ffep-11,
     0x1.58afe99fa6b88p-784, 0.0, 0x1.d49ae0bc52974p-829, 0.0, 0x1.93173d9e09eb3p-558,
     0.0, 0x1.8b33eaabc2707p-216, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94a22bd76d1b6p-713, 0x1.8be8fad3b9dc3p-1006, 0.0, 0.0,
     0x1.ce5341043ec27p-720, 0x1.1f95c6cc43e02p-144, 0x1.56a515182d0a2p-358, 0.0, 0.0,
     0x1.00a2fb0120c29p-319, 0.0, 0x1.7bc60d7d30da9p-268, 0x1.608e1c8ae121ep-508,
     0x1.a531fd445c589p-651, 0x1.8e7b078a4611dp-268, 0.0, 0.0, 0.0,
     0x1.560c30e100359p-645, 0x1.fe13c67f95aa9p-893, 0.0, 0.0, 0.0,
     0x1.f0e1632fd2c26p-251, 0x1.5a795891973d7p-310, 0.0, 0.0, 0x1.3a55271fa17b6p-33,
     0x1.a3c7649aa3651p-92, 0x1.f943fcfcb4fc7p-178, 0.0, 0x1.a2e879455308ap-822, 0.0,
     0x1.f8ef015d6f6f5p-257, 0.0, 0.0, 0x1.03c07ae367592p-719, 0x1.008f90e2e7854p-377,
     0x1.546c520f003dbp-772, 0x1.01fe8625813a6p-618, 0x1.c7889e6c62f22p-518,
     0x1.aa1ac3458dbc6p-218, 0x1.21e4459faafa7p-290, 0.0, 0x1.a02cd67476dfp-611, 0.0,
     0.0, 0.0, 0x1.7c445c9c7374fp-140, 0x1.eda594f985b9ap-103, 0.0, 0.0,
     0x1.57ca169770524p-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f11f33914e834p-660,
     0x1.6a750aed47f0dp-269, 0x1.558e13ff8e895p-502, 0.0, 0x1.74e3aa1f368dap-264, 0.0,
     0x1.5282c7df34707p-780, 0x1.bc2b77a51e416p-374, 0x1.e5529ea3ebfa5p-233,
     0x1.488614b0cecc7p-31, 0x1.dceee0ef70a5dp-896, 0x1.02ece18f3c016p-3,
     0x1.811c18dbd9423p-946, 0.0, 0x1.17e13cc009f9cp-725, 0x1.7aef96bdec7a8p-688,
     0x1.b543aa85b1d9ap-944, 0.0, 0x1.fb983f52c12d4p-352, 0x1.61d4ebfc86e38p-304,
     0x1.0c91892ec2136p-972, 0x1.2ef7c0fec50fbp-140, 0x1.204d21622f5b5p-343,
     0x1.0c54bbaba4c8p-722, 0.0, 0x1.c1cb91632f652p-595, 0x1.9ab952fa99a47p-66,
     0x1.3d642064e72cep-211, 0.0, 0.0, 0x1.b6230c1d2907fp-544, 0x1.16982f36e539p-706,
     0.0, 0.0, 0x1.54e61e2e5ed55p-769, 0x1.8c5b825ac1775p-871, 0x1.08e4a55eddc7fp-91,
     0.0, 0x1.0317b51ba11ffp-12, 0.0, 0.0, 0.0, 0x1.633e3c134b737p-664,
     0x1.ec8588eb7eaa3p-767, 0x1.6671aa284d682p-124, 0x1.66c9046bf5314p-582,
     0x1.ff8bdcc9973a4p-260, 0x1.a48c455e2151ep-318, 0x1.dab5f5fd6cf55p-164,
     0x1.b8b46e181f332p-534, 0x1.ce076d1e6a9d2p-153, 0.0, 0.0, 0.0,
     0x1.43a9240eaaf32p-420, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa54ff7ecc157p-11,
     0.0, 0.0, 0x1.8647723bb0e75p-10, 0x1.7f1d27ec089d9p-238, 0.0, 0.0, 0.0,
     0x1.70a0df2cb97fep-492, 0x1.d5e534231edeep-419, 0.0, 0x1.f38484cb7893ap-952,
     0x1.b13115d349063p-455, 0.0, 0x1.a2a8659895bd5p-219, 0x1.cc52bb0629363p-477,
     0x1.80f18012f69c8p-256, 0x1.c68c22dfc346p-5, 0.0, 0x1.c6553465fe3d6p-732,
     0x1.25f0243922c4bp-514, 0.0, 0x1.cc63bc070a8a8p-64, 0.0, 0x1.42b17e7fb05a5p-389,
     0.0, 0x1.07176a84b6363p-838, 0.0, 0x1.03b415977d875p-611, 0.0, 0.0,
     0x1.ce964f848b0bfp-631, 0.0, 0.0, 0.0, 0x1.24eb14c8beee6p-70,
     0x1.f88c8d5eb3c2bp-647, 0x1.05370e73efb9bp-390, 0x1.0154f44ef2ba6p-53,
     0x1.4a5c50ca73e91p-546, 0x1.93958881e347cp-729, 0.0, 0.0, 0x1.87948e52a8484p-411,
     0.0, 0.0, 0x1.f32816a1b64cdp-205, 0.0, 0x1.d8ac30ada2fd9p-960, 0.0,
     0x1.cb5e0c1a3ffdap-329, 0.0, 0x1.2a88b11e374cdp-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c4b160ed3c85dp-553, 0.0, 0.0, 0x1.63297017b2e3bp-68, 0.0, 0.0,
     0x1.1497a353f9022p-465, 0.0, 0.0, 0x1.c736d7f61bc77p-551, 0x1.e80e8066af4c7p-880,
     0.0, 0.0, 0.0, 0.0, 0x1.678a2512261c2p-968, 0.0, 0x1.f7cd4c7ff30f3p-904,
     0x1.e1e45ba96b243p-888, 0x1.4e6a9f5b2be39p-56, 0x1.b8ca89a7c9a7bp-627, 0.0,
     0x1.1cd9a6ea18215p-985, 0.0, 0.0, 0x1.711708d0de79cp-75, 0.0,
     0x1.78290a0001f88p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.864627e1a48a3p-815,
     0x1.2131aa4c41df5p-407, 0x1.2d0c961c73efap-713, 0x1.2a5f3ba7a677p-718,
     0x1.fa08ab7a78151p-800, 0x1.d87becbbe924dp-130, 0x1.4ccfa957997c9p-594,
     0x1.3e36274cc612p-448, 0x1.3fc8799cdeae7p-315, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.915bfedad92f6p-391, 0x1.d0e5e47a7faf3p-338, 0.0, 0.0, 0.0, 0.0,
     0x1.6e95f2fe6261bp-918, 0x1.e48847522e7c8p-933, 0.0, 0x1.f064058c12c3p-42, 0.0,
     0.0, 0.0, 0.0, 0x1.618d1d22410ffp-771, 0.0, 0x1.f10f424c215d3p-742, 0.0, 0.0,
     0.0, 0.0, 0x1.97768c6df9f85p-135, 0.0, 0.0, 0x1.c97a0562e2677p-589, 0.0,
     0x1.46980d810b66ap-459, 0.0, 0.0, 0x1.ee1f0d72d099cp-834, 0.0,
     0x1.af1006615e34fp-508, 0.0, 0x1.3f244002f9159p-69, 0.0, 0x1.d3a7db0077959p-611,
     0.0, 0.0, 0.0, 0x1.9d0cbb890e655p-572, 0x1.b51ca0383c7a3p-681,
     0x1.b4d3c1f6a8366p-640, 0x1.6ead1471a699p-262, 0x1.7eb5221a53deep-977,
     0x1.565f27e020372p-636, 0x1.15558f983ad3dp-169, 0.0, 0x1.872abc7c4c987p-849, 0.0,
     0x1.4371856078f17p-926, 0x1.fce1de5f5ad0fp-1008, 0.0, 0.0,
     0x1.415e26729777bp-902, 0.0, 0x1.e220c612ddae3p-918, 0x1.3f6f7b07fd2a2p-837, 0.0,
     0.0, 0.0, 0.0, 0x1.9d1425834adcfp-288, 0.0, 0x1.9157ca77863c5p-983,
     0x1.13fe7eaf35153p-231, 0.0, 0.0, 0x1.4638cd6f9cf4cp-591, 0x1.28223a6c4e051p-817,
     0x1.8ad88f805ae4bp-536, 0.0, 0x1.697cb0b8be7efp-112, 0.0, 0x1.ce11a8ee5809cp-980,
     0x1.2d936e0c5197cp-643, 0x1.aad73028fce28p-68, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6af8a74c86cc2p-587, 0.0, 0.0, 0.0, 0x1.8c1a3bc1ee43ap-797,
     0x1.604fe57990944p-996, 0x1.63431ca639bcap-935, 0x1.165fbf962a2aep-463, 0.0,
     0x1.1ee385bb09987p-784, 0.0, 0.0, 0.0, 0.0, 0x1.479d0c1bce64ap-557,
     0x1.d1d40bb9927p-463, 0.0, 0.0, 0x1.bb62afee6c01fp-774, 0.0,
     0x1.ffd57d031de61p-731, 0.0, 0x1.054e707659618p-151, 0.0, 0x1.6f8440efcf01cp-201,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1981ea5342974p-108, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.60d0eef6165e1p-786, 0x1.5fdb0634b3ea5p-401, 0.0, 0.0, 0.0,
     0x1.78f499ed24a38p-721, 0.0, 0.0, 0.0, 0.0, 0x1.33ad6df357c5fp-62, 0.0, 0.0, 0.0,
     0x1.b8e7ba6d60444p-796, 0x1.f1ac4e90676fap-281, 0x1.8053d4b4325c8p-521, 0.0,
     0x1.96bf4d7ce94d7p-935, 0x1.530b85216a856p-391, 0.0, 0.0, 0x1.b9b2702e7daep-124,
     0x1.2d31c5e3140e4p-329, 0x1.95567fd6c086ap-189, 0.0, 0x1.3f2e18498566p-927,
     0x1.e1d10c692d7a6p-715, 0x1.7616643d591a9p-987, 0x1.3a1c5fd2ba6b9p-719,
     0x1.a9a7e4d3af0bep-617, 0.0, 0.0, 0x1.d5dc57065bc36p-696, 0x1.8eaf36828d76bp-684,
     0x1.453e87b8ea71cp-702, 0x1.7e8316736099bp-657, 0.0, 0.0, 0x1.a99afb00be869p-31,
     0x1.d4e5cd1822677p-514, 0x1.e5521b0a80b07p-928, 0.0, 0.0, 0x1.3f50b04de66f3p-531,
     0.0, 0.0, 0x1.dff6b906071e1p-482, 0.0, 0x1.29f6a39ecc2e7p-324, 0.0, 0.0,
     0x1.bea2be1f33907p-375, 0x1.dfafa3017639cp-637, 0x1.ea3cb1eecd852p-411, 0.0,
     0x1.52408c081a1e8p-157, 0x1.ec2f56fd1a892p-576, 0.0, 0.0,
     0x1.631c96ca06392p-1015, 0.0, 0x1.1d5e7f541d0bep-300, 0.0,
     0x1.34c0fc64b5bb6p-717, 0x1.c4dc4fcab5415p-561, 0x1.01237b78a60b7p-24, 0.0, 0.0,
     0.0, 0.0, 0x1.8145e5e8be1dep-582, 0x1.21caf3e6418c8p-546, 0x1.22d82da060ec2p-403,
     0x1.d967846b4c2dep-1013, 0x1.3b0140aab1fffp-616, 0x1.f16bd7df4e8a2p-132,
     0x1.f53bc1bacb8b6p-252, 0x1.ac8167d3b85c3p-483, 0x1.e7e0e4682ca5p-477, 0.0, 0.0,
     0.0, 0x1.308bbf94e7413p-637, 0x1.0ef2bcc923bdap-11, 0x1.7d6b3a4849e28p-597, 0.0,
     0.0, 0x1.573f2c9f1189ap-961, 0x1.c51c5ca2183d6p-146, 0x1.b8c7c9da6d53cp-669, 0.0,
     0x1.14ad5588bca92p-181, 0.0, 0.0, 0x1.7f49214e51de1p-44, 0x1.e055e5e643435p-632,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a9205ecf5eb5p-747, 0x1.731052ea6bb7ep-423,
     0x1.2b32efd28a0c1p-346, 0.0, 0x1.ee7e458f1d407p-866, 0.0, 0.0,
     0x1.ce6e6223440ccp-975, 0.0, 0.0, 0x1.c5d3b2e3d3641p-681, 0.0, 0.0,
     0x1.4b23860b5e1eep-517, 0.0, 0.0, 0.0, 0x1.1923d42235c0fp-275,
     0x1.50e7b567b66eep-840, 0.0, 0x1.18d61e5ab98a3p-807, 0x1.86e7de343c6f9p-494,
     0x1.181a5515c4d6cp-325, 0.0, 0.0, 0.0, 0x1.54e337a74b8b9p-330,
     0x1.a28fb936048c3p-974, 0.0, 0x1.e80f797f65506p-840, 0x1.b679865d23cd3p-860, 0.0,
     0.0, 0x1.3acc9f94aabc8p-857, 0x1.ef79232a6d8d3p-390, 0.0, 0.0, 0.0,
     0x1.9a839c30ac4ecp-180, 0x1.04f704877daa2p-580, 0x1.7e7f9d475e843p-53,
     0x1.cc823fc8a0643p-986, 0x1.102c9111850c4p-70, 0.0, 0x1.83c53884f901fp-387, 0.0,
     0x1.0f65e45e05dfap-517, 0x1.0700008f5cbdfp-301, 0.0, 0x1.5c3292a83b2edp-655,
     0x1.f172ec9720e5fp-468, 0.0, 0x1.94b5ab21dce8bp-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.14696710d1222p-477, 0x1.d18904c07a811p-595, 0.0, 0.0, 0.0, 0.0,
     0x1.01fb0163ac969p-720, 0x1.59dda61c51011p-565, 0x1.e4db79b0d4b2dp-62,
     0x1.0d992eccdad52p-459, 0x1.5051ed0525f01p-865, 0x1.f262effc42448p-704,
     0x1.acdc5166c8396p-616, 0x1.07847cdd659b8p-378, 0.0, 0x1.44b4328ef3f37p-758,
     0x1.a47b0b654e65bp-317, 0x1.a9bad9e67f467p-880, 0x1.dd3de609f6798p-996,
     0x1.035fa802920e2p-1019, 0.0, 0x1.337425e300149p-156, 0.0,
     0x1.c9a7ab1243659p-624, 0x1.4a6975e961be9p-690, 0x1.6dba4e0a5ce79p-242,
     0x1.27d822186afbbp-741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3089a7d1ec0bbp-702,
     0.0, 0x1.c2bbfa11b8p-142, 0x1.a72e35958e203p-419, 0x1.163f8ee82e485p-382,
     0x1.2b4daaf02c0e2p-425, 0x1.481997c0568a6p-886, 0x1.87f6c48c32d55p-356,
     0x1.ab5a543ab449bp-639, 0x1.69aef6bebee5dp-453, 0x1.bc6df738d88d4p-483, 0.0,
     0x1.560f4dea5da87p-870, 0x1.a4964985b370cp-112, 0x1.32ce31ec7b136p-78,
     0x1.21f2016a7f2efp-82, 0.0, 0x1.58994f70d42c7p-547, 0x1.e3da7582a13f5p-265, 0.0,
     0.0, 0x1.88ec4b8fe9091p-498, 0.0, 0x1.738178a7e93d4p-451, 0x1.0d736e490476fp-396,
     0.0, 0.0, 0x1.5ccbbc3176ad4p-952, 0.0, 0x1.f945467a5ca56p-723,
     0x1.49cfe51b3addcp-784, 0x1.25bed22f76b0fp-432, 0.0, 0.0, 0.0, 0.0,
     0x1.0e7beacbd3c2ap-107, 0x1.2754edf0cd47ep-985, 0x1.d150152a8f6fap-943, 0.0,
     0x1.3c195b376daa7p-421, 0x1.3b8cd1738ab2ap-346, 0x1.bbc85ac05b5a4p-94,
     0x1.471e8a216a735p-458, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8d6e7f5b3433p-589, 0.0,
     0.0, 0x1.ecae7b72452fap-420, 0x1.ffe775191ab35p-22, 0.0, 0.0,
     0x1.95639ff1f65e1p-162, 0.0, 0x1.90c711755fefap-626, 0x1.40308333374aep-640,
     0x1.5b2939582b79bp-71, 0.0, 0x1.ed454583d9d83p-750, 0x1.f212267dbcc75p-37, 0.0,
     0x1.3e1c8e8121d5cp-345, 0x1.70aa5cc2fee51p-966, 0x1.4aa42072da8cdp-370, 0.0, 0.0,
     0.0, 0x1.a22401080631dp-159, 0.0, 0x1.2ca968a40a153p-311, 0x1.9030ea4dc1672p-765,
     0x1.08ed0e2851a3ap-149, 0.0, 0.0, 0x1.d15727053dca9p-80, 0.0, 0.0,
     0x1.9e67d67616f59p-441, 0.0, 0x1.32738bfb65dfbp-910, 0.0, 0x1.8490d9de67cf5p-14,
     0.0, 0x1.c081c29602de5p-256, 0.0, 0.0, 0x1.e5e5b5f5e7412p-248, 0.0,
     0x1.1e12d7b1a084fp-907, 0.0, 0x1.fe3dfc96b3dc4p-621, 0.0, 0x1.7880840c0da73p-904,
     0.0, 0x1.26f546e44d9abp-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80fc435501cep-939,
     0x1.cb26716c57275p-487, 0x1.9ec783bb6d59fp-792, 0.0, 0x1.e2279594d24fap-744, 0.0,
     0x1.6b91a80ff9a8bp-31, 0x1.538dd49e2eec5p-322, 0.0, 0x1.2233016fd53dbp-7, 0.0,
     0x1.5eb8e7cbc4801p-222, 0x1.2bba51340d00ep-81, 0x1.846efffc1c503p-20,
     0x1.64778756fc913p-200, 0.0, 0x1.d2840d36dce58p-970, 0x1.18b739e5225ddp-677,
     0x1.b85e6368649d1p-143, 0x1.101dd435c79fap-786, 0x1.1203718e1ddaap-574,
     0x1.69d745bae4225p-670, 0x1.905a9fdb2f313p-28, 0x1.66ffc90ae048fp-994, 0.0,
     0x1.321e71361f59ap-515, 0x1.6e96d1180d499p-158, 0x1.247987a66e08bp-406, 0.0, 0.0,
     0x1.d113ffe11f1d8p-746, 0.0, 0.0, 0.0, 0.0, 0x1.3325620dc6465p-303, 0.0, 0.0,
     0x1.ab5e1a47e896bp-216, 0.0, 0x1.9488f5ca6bd12p-664, 0x1.ca1255091d643p-254,
     0x1.1799f5af9a68bp-295, 0.0, 0x1.4b187684fef1bp-112, 0.0, 0.0,
     0x1.e21a479a1037p-168, 0.0, 0.0, 0.0, 0x1.06638dcb6033cp-852,
     0x1.ff482977e4a07p-168, 0.0, 0x1.2f199c01fbc7bp-778, 0.0, 0.0, 0.0, 0.0,
     0x1.c65d3dcc50719p-56, 0.0, 0.0, 0x1.4c0d1c1d3e274p-599, 0x1.b3861ca0beb01p-245,
     0x1.ae6d3c86277a9p-321, 0x1.762e42cdf5131p-38, 0x1.078f641376626p-567,
     0x1.b9176d7007c5p-105, 0x1.451f12df5b601p-479, 0x1.0e993a4539a6bp-425,
     0x1.3d7449297a35bp-406, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospid2_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincospid2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid2_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
