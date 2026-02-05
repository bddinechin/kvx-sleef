/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd4_u35kvx.c --function Sleef_sincosd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a5fab75787bfp-527, 0x1.e1609f8eaf234p-531,
     0.0, 0.0, 0x1.2eb069151b95cp-906, 0x1.c2207a0389a9dp-566, 0.0, 0.0,
     0x1.82bc424083c47p-133, 0x1.e82422cc01345p-742, 0.0, 0x1.edb3f17c0443ep-705,
     0x1.15908665db4ebp-27, 0.0, 0.0, 0.0, 0x1.18a672dfd4fcap-91, 0.0, 0.0, 0.0,
     0x1.313320aa409c6p-912, 0.0, 0.0, 0x1.5bb9d45c0481ap-496, 0.0,
     0x1.631aaf335ab93p-216, 0.0, 0.0, 0x1.e7679b7f0fbbfp-216, 0x1.37a581f02ad55p-757,
     0.0, 0.0, 0x1.d72e2205207b4p-934, 0x1.1318170724d9ep-47, 0.0, 0.0,
     0x1.15613cdbf3ae1p-439, 0.0, 0x1.38121f5619501p-829, 0.0, 0x1.667b5be86590cp-487,
     0.0, 0.0, 0x1.976f262e9553dp-819, 0.0, 0x1.e9cee85a0a633p-95,
     0x1.e1207bc86a085p-288, 0.0, 0.0, 0x1.c07e0202df491p-297, 0x1.3c1e19ceca436p-509,
     0.0, 0x1.8a48de325babfp-747, 0.0, 0.0, 0x1.0f19782468f6bp-399, 0.0, 0.0,
     0x1.1361f74a65dap-365, 0.0, 0x1.f10adcfe45857p-526, 0x1.22e081222fa6p-903,
     0x1.d5f54d73d4251p-669, 0.0, 0.0, 0x1.b6ad141d80995p-51, 0x1.72cee0f46ae9ep-635,
     0x1.30103a3c6bc49p-724, 0x1.f2176c8995ccep-385, 0x1.8ad4f9209814dp-354,
     0x1.4938c68feb6dep-331, 0x1.24b195822b8b4p-594, 0x1.f5819b0e7e872p-764,
     0x1.1893c13772ed6p-594, 0.0, 0x1.1bf8a8b923e24p-722, 0x1.c4d5f1e99e2f7p-328, 0.0,
     0x1.1382490319f67p-959, 0.0, 0x1.7d29336e5fd73p-666, 0.0, 0x1.208d4e4eb41fcp-431,
     0.0, 0.0, 0x1.d1cac65c03569p-846, 0.0, 0x1.06316420a07cp-543, 0.0, 0.0, 0.0, 0.0,
     0x1.a4b40112abb38p-914, 0x1.c25f132a57f93p-842, 0.0, 0x1.31c5789d61e5ap-219, 0.0,
     0.0, 0x1.d4cc9db38a0d1p-11, 0.0, 0x1.6fd7599361865p-743, 0x1.7517a00c8d101p-286,
     0x1.f6ed9495f238p-9, 0x1.ba74ffe77ad6ap-22, 0x1.6efb32b49d1f6p-913,
     0x1.8a3a0b1f71107p-930, 0.0, 0.0, 0.0, 0x1.91ddc8809c05bp-146, 0.0, 0.0,
     0x1.ab3a35926181dp-683, 0.0, 0.0, 0.0, 0x1.fe5ba0961e3fep-1008, 0.0,
     0x1.1600eead6cc4dp-854, 0x1.a6924d164ec71p-314, 0x1.4508b07299dc5p-677,
     0x1.199f918fe1acbp-257, 0.0, 0x1.635422828855p-900, 0x1.a52bace8ee47ep-365, 0.0,
     0.0, 0x1.317f4eaebd8e7p-918, 0x1.44750188952a7p-545, 0.0, 0x1.8cc787b40b1afp-263,
     0.0, 0.0, 0x1.6a65a4218678ep-1005, 0x1.dff385e6eb475p-987, 0.0, 0.0,
     0x1.b2bddf638f586p-598, 0x1.0355d029f484bp-146, 0.0, 0x1.55af179b0882bp-242, 0.0,
     0.0, 0.0, 0x1.041e93f4bb7e4p-768, 0x1.dc7f0b51040eap-209, 0.0, 0.0,
     0x1.2b84c332e6698p-154, 0.0, 0x1.4d89b3ed6d956p-1011, 0.0,
     0x1.78e4d850c9c5ep-690, 0.0, 0x1.d00f2d3076473p-666, 0x1.f14e34bcd8f7ep-111,
     0x1.79132bdfcc6edp-455, 0x1.f949ef2a0d29bp-136, 0x1.2889d5b220c3p-599, 0.0,
     0x1.d7c1ef9699936p-857, 0x1.d32ec6afc1e49p-936, 0x1.1f982132e77bcp-45, 0.0, 0.0,
     0x1.a6cf254ea360ep-66, 0x1.2fa954244ff13p-401, 0.0, 0x1.086ec8f27f4c2p-729, 0.0,
     0x1.a4e3cbf2a29acp-770, 0.0, 0.0, 0x1.032732467bfadp-558, 0x1.36a3ba677836cp-676,
     0x1.c44b3c9a7b4aap-187, 0.0, 0x1.85e319b1981e2p-287, 0x1.d8d766ca81c8ep-826, 0.0,
     0.0, 0.0, 0x1.8ed519a11f3e2p-762, 0x1.5d189b628d851p-1013, 0.0,
     0x1.229ec674540c5p-610, 0x1.5280ce905e2a1p-53, 0.0, 0.0, 0x1.ef473fd178993p-105,
     0.0, 0x1.851a9374956d1p-651, 0.0, 0x1.4e4ab4aa1cb76p-870, 0.0, 0.0,
     0x1.e32f12d124f97p-1019, 0.0, 0.0, 0x1.3f87059ef7e6fp-363,
     0x1.e0a1e7da37a65p-454, 0x1.e010a8bb409dfp-345, 0.0, 0.0, 0x1.8b11be748e8c1p-298,
     0x1.5ef6203b723a9p-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c930d0c7e3c1p-892,
     0x1.12fb6fcbfef31p-837, 0x1.3dee34c253fe8p-921, 0.0, 0.0, 0.0, 0.0,
     0x1.5a6a60a4acb8p-162, 0.0, 0x1.b1c0ff685df55p-367, 0.0, 0x1.36349be05be7ep-1004,
     0x1.1b5be5e753a1ap-600, 0.0, 0x1.7d43b11735408p-1019, 0x1.326236936a84bp-1004,
     0.0, 0x1.8714fb08c9176p-494, 0x1.7c615f08c3b6p-797, 0x1.727beefefb50fp-142,
     0x1.7fdf5e2766bc1p-436, 0x1.d4668c3ce70ebp-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e330ce2fbdfe8p-673, 0.0, 0.0, 0x1.8437f4262dbbep-507, 0.0, 0.0,
     0.0, 0x1.af1dc95e36e5dp-647, 0x1.5fdb3d3f1fde4p-603, 0x1.d34bbe26e7094p-630,
     0x1.6c4e853dc3ce2p-39, 0.0, 0.0, 0x1.56678e77714c1p-94, 0.0,
     0x1.19fe33f465bdep-252, 0.0, 0.0, 0.0, 0x1.c41e5f97a3499p-135,
     0x1.3b07bf2392979p-131, 0x1.25827940a6bbep-283, 0x1.00ee80501ed5fp-655, 0.0,
     0x1.8ace332d266bfp-168, 0x1.5ee79c5da3c54p-646, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79520e60c0c7bp-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.acccb25495a88p-937,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec44bf1063214p-739, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8a3ade9350471p-892, 0x1.2752dff631fcap-872, 0.0, 0x1.670c838d15b0fp-442,
     0x1.57a652e56f08ap-22, 0.0, 0x1.43b5e6552f26ap-401, 0x1.adda2e1b9d28cp-993, 0.0,
     0.0, 0.0, 0x1.49b283e8fbebcp-768, 0x1.8cf55ad401a99p-75, 0x1.d561faa2b0bf4p-986,
     0x1.7f418cfce3b92p-213, 0.0, 0.0, 0.0, 0x1.14d26f8dbd893p-197,
     0x1.a81d8a2f52e4dp-321, 0.0, 0x1.99d643446c3eap-184, 0x1.b1ba8ab778d26p-3,
     0x1.9da7b66d41281p-519, 0.0, 0.0, 0x1.d4139dfb8da16p-723, 0.0,
     0x1.8e243fa6cb4e9p-198, 0.0, 0x1.75ee92af09371p-664, 0.0, 0x1.3df7394a6f4afp-606,
     0x1.13db96188cf31p-398, 0.0, 0x1.fa14ae5842b67p-363, 0x1.e928e70e412e5p-373,
     0x1.ac9ef5eb1dbe9p-221, 0x1.7025ec60c4151p-317, 0.0, 0x1.a22c609848924p-142,
     0x1.15017ac0707bep-1003, 0x1.e930fe45b1056p-193, 0x1.86e3e6ca1d99cp-80,
     0x1.db9696342dc65p-277, 0x1.c0c7d54e5cab5p-221, 0.0, 0.0, 0.0,
     0x1.750cba91fc1f3p-530, 0x1.3468df53ad608p-758, 0x1.ca572623b97e5p-515,
     0x1.a085c651aeaf9p-716, 0.0, 0.0, 0x1.b95e6a015c206p-243, 0.0, 0.0,
     0x1.5d090d5e1adc8p-607, 0.0, 0.0, 0.0, 0x1.75aae67966e06p-291, 0.0, 0.0, 0.0,
     0x1.e4ca520516d6dp-553, 0x1.76efc77b09db6p-949, 0x1.e0ef87e47b9ffp-619, 0.0,
     0x1.f0073b42ee769p-68, 0.0, 0x1.57b06238bb7dp-522, 0.0, 0x1.54366db53a9dcp-262,
     0.0, 0x1.7266c17d07687p-574, 0.0, 0.0, 0.0, 0x1.66b5220b3d18fp-712, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e96fd8a5717e5p-65, 0x1.9b9018406c6e7p-37, 0.0, 0.0,
     0x1.8f3e94cd1a57ep-839, 0x1.7226edd8e2c38p-636, 0x1.4c68902231412p-35,
     0x1.4dcc3f4c150c7p-579, 0x1.2e2a87c09c30cp-1012, 0.0, 0x1.ae8c24258dc19p-158,
     0x1.65eccf4d681e7p-751, 0x1.1c6cdd5b26636p-669, 0.0, 0.0, 0.0,
     0x1.2cece5e1825cep-880, 0x1.12b73e932212ep-298, 0.0, 0x1.42496f8ae3e02p-577, 0.0,
     0x1.b7d12694fb50cp-64, 0x1.db4c105ede52dp-598, 0x1.e9f202d375803p-238, 0.0,
     0x1.b38bd3e2119aep-699, 0.0, 0.0, 0.0, 0x1.22eb8788422b9p-657,
     0x1.4d74835cb75d3p-604, 0.0, 0.0, 0x1.208222c51e772p-514, 0x1.2819b87f8375p-585,
     0x1.26ec3a78d5a06p-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a25da41176299p-249,
     0x1.2fb550c3e1dbdp-657, 0.0, 0.0, 0x1.cc4eb6e43534bp-1013, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8f99e07267899p-830, 0.0, 0x1.cd3f6e2fa2e3cp-801, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e0a428eb18dcep-628, 0x1.8bf473b8af8cap-452, 0x1.e682f56d99c4bp-176,
     0x1.e67b464c35f4cp-746, 0x1.e2068d0def39cp-681, 0.0, 0.0, 0.0,
     0x1.70a0f6e021a0dp-129, 0.0, 0x1.30d99d2c94a96p-956, 0x1.200bebbbf921ep-891,
     0x1.9233b0cd831bcp-340, 0.0, 0.0, 0x1.72dfce98486ep-423, 0x1.3426e94a8ee18p-598,
     0x1.660c53ef86077p-480, 0.0, 0x1.d75a44c71c224p-51, 0x1.61bb3faf120ebp-366,
     0x1.3db3c821d8d03p-745, 0x1.081843f6abf49p-850, 0.0, 0.0, 0.0,
     0x1.5634ad47785a6p-44, 0x1.4aee589897c3ap-960, 0x1.285e2d6c2adf5p-939,
     0x1.c298aec8fefacp-901, 0x1.85a1a8d55adefp-195, 0.0, 0x1.0be9355042935p-671,
     0x1.7b812c7503d0fp-404, 0.0, 0.0, 0x1.a210001774957p-956, 0x1.acae64ae55e57p-555,
     0.0, 0.0, 0x1.8b6d30977654fp-471, 0x1.573fc9a9559p-153, 0.0,
     0x1.a8bf4df474b35p-919, 0.0, 0x1.1cff558486e6p-673, 0.0, 0x1.686a859a53f45p-287,
     0.0, 0x1.d6ff06eca01e6p-75, 0x1.9ff204e5230d5p-229, 0x1.b24353b7786b5p-837,
     0x1.6ba0d66d05863p-1007, 0.0, 0.0, 0.0, 0x1.f23448d249161p-18, 0.0, 0.0, 0.0,
     0x1.57903e04ee992p-4, 0.0, 0x1.9f1967bd39e6fp-58, 0.0, 0x1.009759f43b72ap-962,
     0x1.a319381fd2015p-461, 0x1.e5bee3abf4f37p-733, 0.0, 0.0, 0.0,
     0x1.404c9bdf1b525p-636, 0x1.eb08dcd8b9116p-33, 0x1.75bc327558a0cp-940, 0.0,
     0x1.7f1cc30a20445p-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d31674eefc8a9p-504,
     0x1.0482a83872f1fp-265, 0.0, 0.0, 0.0, 0x1.08797558b6a47p-383,
     0x1.e2896235e183p-662, 0x1.bcc150080ca25p-647, 0x1.35821af5fb4f2p-97,
     0x1.1ac81b9a7e916p-969, 0x1.67c52779e97e4p-521, 0.0, 0.0, 0.0,
     0x1.3f15ccdcd287fp-600, 0.0, 0x1.778e3ba8c878bp-145, 0.0, 0.0,
     0x1.6333f29a0d77ap-951, 0.0, 0.0, 0x1.cbb3e96f15c0bp-167, 0.0,
     0x1.090fc5fb011fap-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8a4397d58daap-168, 0.0, 0.0, 0.0, 0.0, 0x1.4d490e96d3a89p-646, 0.0,
     0x1.1c2e1f5aa4692p-869, 0.0, 0x1.e29bef2c70342p-402, 0.0, 0x1.447357ede8db8p-677,
     0.0, 0.0, 0.0, 0x1.f4328e4d163fep-111, 0x1.a2f658d793efep-467,
     0x1.fd2c4a0c8e142p-472, 0.0, 0.0, 0.0, 0x1.d7d27be4f4d22p-887,
     0x1.c253597e8f515p-704, 0x1.e09668509542ap-99, 0.0, 0x1.58648e5db2a5bp-818, 0.0,
     0x1.54706dc050effp-781, 0x1.c1a9633a3f9d9p-339, 0.0, 0x1.e7e9d947f823cp-267, 0.0,
     0.0, 0x1.62e5f69afee16p-735, 0.0, 0.0, 0x1.cc45173cd958p-527,
     0x1.06da06b406984p-741, 0x1.268c6dbbb89c2p-700, 0.0, 0.0, 0x1.4b7fd2ab4f7bap-977,
     0.0, 0x1.3815717b77993p-439, 0x1.e5ff631148947p-591, 0x1.918b5099b5c3fp-664,
     0x1.7bd1278b1bb3p-315, 0.0, 0x1.570066eeef57fp-774, 0.0, 0x1.41e68dcc839f7p-237,
     0x1.c7eafc2a99034p-561, 0x1.6290012109c8ap-603, 0.0, 0x1.39202fc24c1adp-592,
     0x1.e791846cff94cp-869, 0x1.1039cf40d3231p-473, 0.0, 0.0, 0.0,
     0x1.432d52c4e68bep-238, 0x1.88fa73c901372p-218, 0x1.a711aa33c25bdp-964,
     0x1.6f6ccb99d7ae3p-501, 0.0, 0x1.7a45276d682d7p-729, 0x1.9c85a82c21e45p-493, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ebaeadf606ccp-835, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0e2941a878412p-633, 0.0, 0x1.2a8dc10a56529p-158,
     0x1.0e864ce753f1fp-834, 0x1.0a2d6a243ba5bp-551, 0x1.17236d531fbc7p-858,
     0x1.fae4338ede498p-339, 0.0, 0x1.d95afebe3254fp-584, 0x1.e211b4db491cdp-341,
     0x1.bb8eb07b294c6p-711, 0x1.7429d39afd1d2p-187, 0x1.eea3023c13ba7p-400,
     0x1.83509f2694f5p-199, 0x1.eed02edac4a88p-132, 0.0, 0x1.f28a0b8dbdbbcp-824, 0.0,
     0x1.6973915d6c66p-200, 0x1.fd1cbb3f508dfp-489, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7c2786defbb44p-659, 0x1.cb8d31cddc728p-410, 0x1.448e2986a24c8p-123, 0.0, 0.0,
     0x1.922df5c5cef8bp-184, 0.0, 0.0, 0x1.beb84c74ef762p-996, 0x1.6e63b045bc476p-428,
     0.0, 0.0, 0x1.b79335121ec8ep-1017, 0.0, 0x1.cbf63e1efcc36p-353,
     0x1.9c395e7c18ab1p-877, 0x1.853f85d7c0f56p-519, 0.0, 0.0, 0x1.e644212d98f4p-294,
     0.0, 0x1.0a5347b5c6e2ep-31, 0.0, 0.0, 0x1.34eb27b7fe848p-242,
     0x1.c29dfcd111544p-175, 0x1.8224872a336f9p-484, 0.0, 0x1.ff47c444a8a7ep-452, 0.0,
     0.0, 0.0, 0x1.63884dc86e723p-929, 0.0, 0.0, 0x1.df48063c1ef99p-647,
     0x1.ebfdb65a2044bp-419, 0x1.155295921c4e9p-176, 0.0, 0x1.790df53ce087ep-151, 0.0,
     0.0, 0.0, 0x1.9c2633977274dp-843, 0.0, 0.0, 0.0, 0.0, 0x1.c2a71d764e36bp-192,
     0.0, 0.0, 0.0, 0.0, 0x1.f51c35db3aca7p-404, 0.0, 0.0, 0.0,
     0x1.c5822e9516a95p-747, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95ac5dc112a4bp-585, 0.0, 0.0, 0x1.b707368734713p-975, 0.0,
     0x1.5746c47088392p-584, 0x1.3673290247786p-47, 0.0, 0.0, 0x1.e8d8acacc3d2bp-509,
     0x1.570bb2e994c2p-34, 0x1.e9efc3a0f178p-437, 0x1.988a1ebd3a3c1p-414, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.79fd7c51a01b4p-137, 0x1.cdc010fedc7ebp-357, 0.0, 0.0, 0.0,
     0x1.95d2d53c18c3ep-464, 0x1.852fc1119da75p-941, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea0293f93e527p-854, 0x1.bd3a68844ceb3p-767, 0x1.839fb8cc91587p-300, 0.0, 0.0,
     0.0, 0.0, 0x1.3a9bb925243fcp-933, 0.0, 0.0, 0x1.555229faf284ep-715, 0.0, 0.0,
     0x1.4077fe8bb6a63p-667, 0.0, 0.0, 0x1.cb27fe99b04e1p-314, 0.0, 0.0,
     0x1.47416a9a6ec8fp-711, 0x1.94bc55887b418p-792, 0.0, 0.0, 0x1.452554a9f7ff1p-849,
     0.0, 0.0, 0x1.4538a73d3faebp-666, 0.0, 0.0, 0x1.d955be1af0691p-293, 0.0, 0.0,
     0x1.b98bcc28e4976p-50, 0x1.1af4ac2a26b8dp-548, 0.0, 0x1.d40172ea6c40cp-524, 0.0,
     0x1.e84f03d5cc90fp-703, 0x1.77c489e53ac18p-38, 0x1.db77df0fc31aap-992, 0.0,
     0x1.b1ffeed739a7bp-955, 0.0, 0.0, 0x1.276dba68a2549p-190, 0x1.3d93e9997f5a2p-354,
     0x1.c23ef9f05f355p-342, 0.0, 0.0, 0.0, 0.0, 0x1.640f85b61429ep-372,
     0x1.a4238b11987b6p-134, 0x1.48578b5f93a35p-359, 0x1.d573b416551p-314, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bfcc7a1b9d622p-715, 0x1.4c407dc9d115ap-911, 0.0,
     0x1.65bb4c5bfaf61p-424, 0.0, 0x1.53c9b8ad1a091p-792, 0x1.7fd80aeaa1ba9p-368, 0.0,
     0.0, 0.0, 0.0, 0x1.006f3abf53ec4p-471, 0.0, 0.0, 0x1.12249349cb058p-443, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.16d07963b6bd4p-333, 0.0, 0.0, 0x1.25f0c5e66eabdp-1009,
     0x1.ce6ef330f792fp-860, 0x1.74114e6d34e95p-287, 0x1.83991e0597de4p-243,
     0x1.2338cc1676578p-154, 0.0, 0.0, 0x1.6acb95e110b72p-204, 0x1.30d4b36f6362p-26,
     0x1.07c0419a8efd3p-1003, 0x1.24a830053ed75p-447, 0x1.81e461ed5ed16p-592,
     0x1.de7b8108f051p-296, 0.0, 0.0, 0.0, 0.0, 0x1.f49dfae2ae7eap-373,
     0x1.3a8e3d8f732ap-673, 0.0, 0x1.87491d8638074p-645, 0x1.3cfd50b4ae082p-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f6c7aa9be4d4p-524, 0.0, 0.0,
     0x1.cbe47a10f74aap-257, 0x1.ddc31f674acc4p-443, 0.0, 0x1.e71a25fd7a9c9p-822, 0.0,
     0x1.9eb9ad6e75bfep-979, 0.0, 0.0, 0.0, 0x1.84650d67ffbb4p-858, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.862990a9538ebp-702, 0x1.d29c34a38a9afp-986, 0.0,
     0x1.cb6557aa25f17p-757, 0x1.ddf3a4beb461ep-364, 0.0, 0.0, 0x1.8b360d9ba2a71p-608,
     0x1.4515e061c0c1dp-636, 0x1.1074fe4dfcd1dp-321, 0x1.75a5abab9bfd6p-520,
     0x1.57c6a17489f73p-988, 0x1.b6008b128494ap-843, 0.0, 0.0, 0x1.60e37890d6d67p-479,
     0x1.12db7a40d5186p-761, 0x1.0d7dff14a0ab2p-957, 0x1.d4e219d49ba1dp-560,
     0x1.d58419b07e376p-624, 0x1.362a7ef6bf009p-577, 0x1.e669313baed84p-611,
     0x1.328ef0f700e62p-355, 0.0, 0.0, 0.0, 0.0, 0x1.9a54eeeb8a032p-730, 0.0,
     0x1.c14bb63f07e4ep-749, 0.0, 0x1.97f07e8568169p-884, 0.0, 0x1.1b76e1e1d256fp-123,
     0x1.42991055b083dp-45, 0x1.bbca607563e3ap-427, 0x1.59a05644548d5p-916, 0.0, 0.0,
     0x1.345c6d1bad6aep-712, 0x1.d1e073f7e1ce6p-560, 0.0, 0x1.9bbc240e7a1afp-965, 0.0,
     0x1.3e757619594bbp-362, 0x1.d38a3e1d406c3p-427, 0x1.cda0f0f1c1cdep-499, 0.0, 0.0,
     0.0, 0x1.170bf30c6a23ep-492, 0.0, 0.0, 0.0, 0.0, 0x1.c224559f02a58p-100, 0.0,
     0.0, 0.0, 0.0, 0x1.2497de5937106p-1004, 0x1.dbfd90bd674f9p-162,
     0x1.65194f6827dbdp-911, 0.0, 0x1.ad69ea6dae42ap-268, 0x1.73decadd62076p-972,
     0x1.201d74e8e9d11p-783, 0x1.d9e9eefc12259p-548, 0x1.f3518fe19fb48p-749, 0.0, 0.0,
     0x1.dc854bdabc971p-241, 0.0, 0x1.d10b92299148ap-476, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.32a648a577dd7p-383, 0x1.82d313c35d964p-68, 0.0,
     0x1.22a4d5e425632p-638, 0x1.4a051df9165aap-20, 0x1.7a08d905839dcp-705,
     0x1.712a702a98a88p-394, 0x1.fc798e9961843p-56, 0.0, 0.0, 0x1.40a15df62d0b6p-1007,
     0.0, 0x1.dbfbfe36c53ebp-240, 0x1.b84d0b9ab26bep-983, 0x1.193b17e865725p-204, 0.0,
     0.0, 0x1.54c0d13bb7834p-735, 0x1.25820f9f22d71p-67, 0.0, 0.0,
     0x1.26fd8850bbbfbp-89, 0x1.62aa19b092dcp-620, 0x1.49a766cbae2a4p-360,
     0x1.f33ffbb707d51p-901, 0x1.9f11c01692b5bp-310
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincosd4_u35kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd4_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
