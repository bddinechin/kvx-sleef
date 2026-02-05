/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_ilogb.c --function ilogb --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.e3c9d102fb137p-198, 0.0, 0.0, 0x1.1e553d987ca6ap-271, 0.0, 0.0, 0.0, 0.0,
     0x1.51002a35a979bp-569, 0.0, 0x1.02bf43f88f205p-177, 0.0, 0x1.076ea0abba143p-967,
     0x1.779bf84afef69p-620, 0x1.da8ee988fa306p-262, 0x1.5e3ecba54dffcp-235,
     0x1.7670d360c914p-138, 0x1.360b5394b3238p-309, 0x1.3d5f4d9b9a43bp-985, 0.0,
     0x1.0dbc56dfe1ebep-989, 0.0, 0.0, 0.0, 0.0, 0x1.14c9432dbdec4p-546, 0.0,
     0x1.699810133870bp-595, 0x1.d84583ae29a49p-712, 0x1.24ae59bfd7ff8p-781,
     0x1.3c163b5f4778cp-255, 0.0, 0x1.e5241c7f65ae3p-914, 0.0, 0x1.8016bf7ee069p-190,
     0x1.92826e1440051p-185, 0x1.8574d2a74396ep-775, 0x1.bfdef6ee1fccbp-366, 0.0, 0.0,
     0.0, 0.0, 0x1.bb0d908c2d482p-397, 0.0, 0x1.b2e1f8cabd2dfp-517, 0.0, 0.0, 0.0,
     0.0, 0x1.ae3bb011ff403p-290, 0.0, 0x1.4f5070147f249p-911, 0x1.d0c3d97faa427p-420,
     0x1.faf288cc575a4p-145, 0x1.5a779c6f662e8p-798, 0.0, 0x1.a8ce6f2e27e11p-134,
     0x1.6d72719441dd9p-599, 0x1.8620d6fecb95p-217, 0x1.bbbcfb76748ap-898, 0.0,
     0x1.2c37ef4b51fcdp-526, 0.0, 0.0, 0x1.32e306780b4fdp-259, 0x1.ad70da904acdp-672,
     0.0, 0x1.a206b7bfafee1p-518, 0x1.545fbc80c8bd2p-107, 0.0, 0x1.16660c01abf1bp-97,
     0.0, 0x1.837d804a29157p-636, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.782104c557a2p-878,
     0x1.87adab0d3fe21p-679, 0.0, 0.0, 0x1.c7219ac1d7fe5p-196, 0.0, 0.0, 0.0,
     0x1.04726354f48a8p-234, 0x1.e64faa24db397p-403, 0x1.963a575d1f4f7p-975, 0.0,
     0x1.b6c6b28e8c6cap-462, 0x1.9451606342751p-614, 0.0, 0x1.63607a19bebap-887, 0.0,
     0.0, 0x1.6872ed6aecc65p-368, 0x1.874876766c56ap-514, 0.0, 0x1.8e9335104863cp-481,
     0.0, 0.0, 0.0, 0x1.ae72a8358e08cp-178, 0.0, 0x1.80d7fc3b79005p-957, 0.0, 0.0,
     0.0, 0x1.7b4f5828fb92cp-814, 0.0, 0.0, 0x1.6037d43ffdbd1p-49, 0.0, 0.0,
     0x1.cea10bea422f6p-915, 0.0, 0x1.fbdf9cee3a3d6p-354, 0x1.74a7a45f0e7d1p-497,
     0x1.e1e53f5e85bdbp-841, 0.0, 0x1.78adc070e537bp-381, 0.0, 0x1.95f56400bd6afp-419,
     0.0, 0x1.6b5c6f5ff5bcp-825, 0.0, 0.0, 0x1.2b487fe79801cp-621,
     0x1.9f72fae943cap-183, 0.0, 0.0, 0x1.532e84fa8fe81p-739, 0.0,
     0x1.f9f70736e565ep-117, 0.0, 0x1.1b40d35202a93p-965, 0x1.4eb2fd1d07128p-320, 0.0,
     0.0, 0.0, 0x1.c2210540f06f9p-95, 0x1.80bff6a8fa6bbp-694, 0x1.c5afd291df304p-20,
     0x1.93593bcee30d9p-702, 0x1.87cf97aad453cp-1018, 0x1.5a49fc7e29e79p-856,
     0x1.d3f5756a8344dp-601, 0x1.b42690f231cb2p-401, 0.0, 0.0, 0.0,
     0x1.ab59ad6f9e9b4p-946, 0x1.a54209f568699p-635, 0x1.41f7e31270536p-758,
     0x1.4bbd900201c9cp-513, 0.0, 0x1.01311875cf6eap-899, 0.0, 0.0, 0.0,
     0x1.c57b8acadc76fp-976, 0.0, 0.0, 0.0, 0x1.7cd9b759fc811p-38, 0.0, 0.0,
     0x1.c889c65edf5ebp-556, 0.0, 0x1.c576b23d480cdp-254, 0.0, 0x1.95f22a44c9ea9p-544,
     0x1.78e71183e4be4p-936, 0x1.95f6284f91dbep-738, 0x1.3ef9b83f36716p-366, 0.0, 0.0,
     0x1.4fcfba2a79b9bp-260, 0x1.8572ffdc6faf6p-456, 0.0, 0.0, 0x1.58691d73ed468p-368,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc43d5dac0dfap-39, 0.0,
     0x1.e7a248fad549fp-155, 0x1.4e5c5b277c54cp-848, 0x1.fb23ad8b537dp-902,
     0x1.d85793cd80acfp-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.67860005bdd8cp-959, 0x1.f37c91b8c0b07p-673, 0x1.0a682b904158ep-904,
     0x1.0f515c8346c6ep-549, 0.0, 0x1.821dd2be5c3a1p-968, 0.0, 0.0,
     0x1.6e20c9cc07ee2p-353, 0.0, 0x1.23d0ee63a97aep-773, 0.0, 0.0, 0.0,
     0x1.21d23992fc9acp-635, 0.0, 0.0, 0x1.55c66bbcd5289p-373, 0x1.11bb2c35f7f18p-496,
     0.0, 0.0, 0x1.90121b38e236ap-908, 0.0, 0.0, 0x1.c8410e458599dp-936,
     0x1.0c02db52b9cc4p-443, 0.0, 0.0, 0x1.b9616d88804b4p-684, 0x1.4326edc000c65p-299,
     0x1.82e9686348c9bp-229, 0.0, 0x1.b728514788ddfp-924, 0.0, 0x1.b3ab7ae66cfd1p-129,
     0x1.e73c7fc46d6f8p-285, 0x1.ecded322bb186p-554, 0x1.cea0e48e35ac6p-226,
     0x1.d4e0b4181a19ap-507, 0x1.5b167d277e4dep-282, 0x1.476b0eb6f3095p-727, 0.0,
     0x1.a2123552b7f3ap-654, 0.0, 0x1.1f41c1b58c4b3p-150, 0.0, 0.0, 0.0,
     0x1.38e6f645a42ap-631, 0x1.724300ff5e1cbp-750, 0x1.e52e64e439a75p-454,
     0x1.2726894bfd2f7p-321, 0x1.790d9a2f07c6cp-795, 0.0, 0.0, 0x1.255a358e53d89p-678,
     0.0, 0.0, 0.0, 0.0, 0x1.bfdb50cf98231p-525, 0.0, 0x1.3c01a9a92a269p-1004, 0.0,
     0x1.181804f2208fcp-522, 0x1.5b4131cf58de4p-317, 0.0, 0x1.4e4d2f5e2186fp-3, 0.0,
     0.0, 0.0, 0.0, 0x1.7629194031b3ap-73, 0x1.74b86fe23475ap-629, 0.0, 0.0, 0.0,
     0x1.208d5a635639bp-815, 0.0, 0x1.16a5269f9e822p-994, 0.0, 0.0,
     0x1.1a7d197689949p-230, 0x1.11291bf363945p-920, 0x1.29c6b0bfe23fcp-561,
     0x1.ef1dad1b4a75dp-369, 0x1.3d04f502b57fcp-206, 0x1.9a1470b0c24adp-995,
     0x1.cca7afea8a7a7p-129, 0x1.82b2cc4a402ebp-62, 0x1.30d4ca3a9f341p-822, 0.0,
     0x1.fee2b7c1831b8p-978, 0x1.d11d62e569bdap-47, 0.0, 0x1.ca7be3959dcc7p-647, 0.0,
     0x1.fa199288b52b6p-572, 0x1.cf318f26fed36p-963, 0x1.1969ce84c6d36p-791,
     0x1.538537b17ab8bp-468, 0x1.8cabef125c5dap-328, 0.0, 0.0, 0x1.67c68239c63dap-752,
     0x1.f373e0b50b4fap-361, 0.0, 0x1.c2e5edcffbd47p-341, 0x1.552098618a09fp-310,
     0x1.e4a279834a834p-165, 0x1.26c2986771133p-280, 0.0, 0.0, 0x1.d41e5c6a025f6p-852,
     0.0, 0x1.5f0a23907f208p-49, 0x1.d4a9facfbfc6p-902, 0.0, 0.0, 0.0, 0.0,
     0x1.1268dfecaccccp-941, 0x1.29234e476649ep-998, 0x1.70d6b0ecf54bbp-470,
     0x1.323dfbd058e2dp-840, 0.0, 0x1.880441d262cd5p-631, 0.0, 0.0, 0.0, 0.0,
     0x1.8b97d83ac8367p-650, 0x1.47cb978f6ad1dp-888, 0.0, 0x1.82881668195dcp-138, 0.0,
     0x1.fb299aa3e97ddp-887, 0.0, 0.0, 0x1.3faa138ea94edp-727, 0.0,
     0x1.6041d822ad99bp-908, 0x1.91f954f7b558bp-51, 0x1.d8049cfff75fp-178, 0.0,
     0x1.5ca8629690922p-474, 0x1.d60c8ac5734aap-929, 0.0, 0.0, 0.0,
     0x1.35177418802e8p-1020, 0x1.9d406d7df092p-584, 0x1.89476c6dd8b3cp-378, 0.0,
     0x1.c548f117edaf3p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ae3fc10ec668fp-890, 0x1.6ec7b5ed3182dp-343, 0x1.fd50529a7c2ap-710,
     0x1.a826cda87870dp-371, 0.0, 0.0, 0x1.36542efb913c3p-324, 0.0, 0.0,
     0x1.7116d0f6c5b75p-252, 0.0, 0.0, 0.0, 0.0, 0x1.0995a375d4dc8p-7,
     0x1.01ef1da727d92p-311, 0.0, 0x1.7efb5146d58ccp-19, 0.0, 0.0, 0.0,
     0x1.0aa22777460f9p-106, 0x1.e6c01eab3bb4ap-202, 0x1.9500031408a8dp-892,
     0x1.c216171a6bee3p-738, 0.0, 0.0, 0x1.9efe6f497f314p-512, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.181b187853eccp-805, 0x1.c7a3210043953p-29,
     0.0, 0x1.d53cffcb1544p-358, 0.0, 0x1.05a96e0c2b0dap-638, 0.0, 0.0, 0.0,
     0x1.d968d7ccba646p-969, 0.0, 0x1.686608896610ep-607, 0.0, 0.0,
     0x1.3665d8abe82dep-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1196dbbf9b26p-531,
     0x1.dd46a01218ac5p-905, 0x1.aa197016922bcp-953, 0x1.7c4771f9ece12p-157, 0.0,
     0x1.dcdc6baedf434p-1009, 0x1.5af17e9f137b2p-116, 0.0, 0x1.3751c5afb7d2ep-137,
     0x1.370fddb351981p-722, 0x1.a40c7aa99d183p-178, 0x1.71a163a357d92p-864,
     0x1.940c4f1a132b4p-966, 0x1.7e088ae963a22p-176, 0.0, 0x1.e14697b299b23p-416, 0.0,
     0x1.b03dfb9a050f1p-79, 0.0, 0x1.e3206605e4f6bp-113, 0x1.c948c89c56abdp-403, 0.0,
     0.0, 0.0, 0x1.abe0e5063ac43p-867, 0.0, 0.0, 0.0, 0x1.ef0593b0233f7p-308, 0.0,
     0x1.3de533c036e94p-996, 0.0, 0x1.73d2eb42b4831p-731, 0x1.ee0596931d314p-341, 0.0,
     0x1.e3a528a4661bdp-388, 0.0, 0.0, 0x1.3a2ba44ac9c7dp-31, 0x1p0, 0.0,
     0x1.1a393f50dc1abp-577, 0x1.8dd999d825923p-726, 0x1.fed6516ae4ecp-822, 0.0, 0.0,
     0x1.602707610bf49p-646, 0x1.fe4672a965468p-657, 0.0, 0.0, 0x1.82ca567708e96p-789,
     0.0, 0.0, 0x1.7c79b3b9ca534p-807, 0x1.92d00f2c1959cp-263, 0x1.9ef02e770e5d2p-704,
     0x1.56142c3cdc6b7p-561, 0x1.7e4a384fb6c56p-291, 0.0, 0x1.5533f0504ac8bp-162, 0.0,
     0x1.1d2f6079432e2p-185, 0.0, 0x1.e914997cb1ba5p-39, 0.0, 0.0,
     0x1.6ef41d87ee3c5p-266, 0x1.364a52d7fb21fp-481, 0x1.32d559348fd57p-435,
     0x1.d6a5282e5af6dp-478, 0x1.afb8b5f83ba4fp-683, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6bc138784683p-587, 0.0, 0.0, 0.0, 0x1.f74b90f89b6d4p-110,
     0x1.6cd81f40550cbp-192, 0.0, 0.0, 0x1.9464020d43c7ep-329, 0.0,
     0x1.046bddd7bc232p-859, 0x1.6bb176932b25bp-892, 0x1.94a9cb0941891p-828, 0.0, 0.0,
     0x1.29e6cf366405ap-530, 0x1.fc189c3c73a17p-917, 0x1.76acea4ec18ffp-44,
     0x1.c280f69d107eep-442, 0x1.a8a9817ff8d2ap-642, 0.0, 0x1.6409ab07ebc2cp-682,
     0x1.8ed53e230e54p-455, 0x1.68c0d404102c5p-653, 0.0, 0x1.8f8cf7321e5b7p-978,
     0x1.71dd0de1f8b56p-563, 0x1.de050cb56dce6p-892, 0x1.9685f8cb1392ap-862,
     0x1.470b2d480b22bp-83, 0x1.fb7a90effd0cfp-405, 0x1.6112259e127dep-630,
     0x1.9cafee257dd72p-140, 0.0, 0x1.27fae7fd8fccp-983, 0x1.b264532e68e15p-46,
     0x1.3c074d5e0b8a3p-644, 0x1.ce707a4563c0bp-366, 0x1.462f23d3781cdp-17,
     0x1.33949cd8f75b7p-355, 0.0, 0x1.c50974b158402p-415, 0.0, 0x1.b0fa04a224343p-577,
     0x1.1a006b42dd591p-170, 0x1.1996e700efdd3p-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4bd20fb823e28p-638, 0x1.e206054ec2153p-130, 0.0,
     0x1.1ece0068c2ba2p-961, 0x1.7013bfc2bdd98p-507, 0x1.95b10f33ab933p-131, 0.0, 0.0,
     0.0, 0x1.483b269889b75p-31, 0x1.1b497d13a58d8p-349, 0x1.8cb22254b5242p-516,
     0x1.db6467edc53f1p-288, 0.0, 0.0, 0.0, 0x1.640816d1776b2p-617, 0.0,
     0x1.e216d5b8da1edp-623, 0x1.4617412f2c61cp-549, 0.0, 0x1.382b2a88ad327p-832,
     0x1.ff458152a9057p-809, 0.0, 0.0, 0x1.5d83b1559b1bfp-1016,
     0x1.da4f51df5f281p-911, 0x1.cfdf0d42c52f4p-723, 0x1.686d91e003e51p-332,
     0x1.2255656c0a183p-574, 0x1.16ae450994e3cp-508, 0x1.01140246a8fe3p-968,
     0x1.2a00fc1094a4dp-474, 0.0, 0.0, 0x1.559b109704a02p-234, 0x1.19f378724f2d4p-785,
     0x1.b178f2b308cd4p-900, 0.0, 0.0, 0x1.4eb5c9521030dp-199, 0.0,
     0x1.35ed2aa7a5da8p-360, 0.0, 0.0, 0x1.f8701cbe1b231p-940, 0.0,
     0x1.2b4de1ff564cap-267, 0x1.80785bbb30b9p-504, 0.0, 0.0, 0x1.3c1230ac5515bp-300,
     0x1.821912bcee60ep-363, 0x1.681d269f8280dp-839, 0.0, 0.0, 0x1.3f53104b5dd55p-494,
     0.0, 0x1.a358925af4f6dp-617, 0x1.888ea39b6c33ap-915, 0x1.1243d405cb7cp-71,
     0x1.104bffcc93588p-758, 0.0, 0x1.b7c06b29bdf92p-937, 0x1.b2a69bd510ca4p-68, 0.0,
     0.0, 0x1.657edf2a8e56p-338, 0.0, 0x1.d13e7fe7870cdp-508, 0.0, 0.0,
     0x1.a8ad40d3e31c3p-127, 0x1.0c4804bc06ed6p-460, 0.0, 0.0, 0.0,
     0x1.8bc89a9c1e88ep-976, 0x1.556c74839e1b5p-439, 0.0, 0x1.71b9b9d5d8709p-259, 0.0,
     0x1.5b62e82b5a629p-798, 0.0, 0.0, 0.0, 0.0, 0x1.59799fea84579p-720,
     0x1.7a033be237eb8p-784, 0.0, 0x1.a78ad5768479fp-31, 0.0, 0x1.bb48ffb2eea3fp-55,
     0x1.dbd9ecc64cdeep-308, 0x1.bacab94388133p-235, 0x1.a1c415a98eaf6p-604, 0.0,
     0x1.70c8f0c5cff54p-174, 0.0, 0.0, 0x1.349e47bc9f067p-201, 0x1.54d40e8a61ba6p-428,
     0x1.9b17cb3088b1ap-130, 0.0, 0.0, 0x1.87e90d1fd40f8p-111, 0.0,
     0x1.a580fc151976dp-855, 0x1.73e06f6fb76a7p-210, 0x1.8f92ea973545dp-52, 0.0, 0.0,
     0.0, 0.0, 0x1.51e75d626eefcp-293, 0.0, 0x1.9ac77c3556c5bp-809, 0.0,
     0x1.e9c5b2b59db8dp-835, 0x1.67b5d4cb41ca8p-273, 0x1.d4c9bab0edfcep-566,
     0x1.0f93be8214594p-330, 0x1.5df2d9e73d03ep-793, 0x1.da9e37b38ca26p-116,
     0x1.11b5753208654p-731, 0.0, 0x1.29376a9fc7d11p-616, 0x1.31b934a128212p-982, 0.0,
     0.0, 0.0, 0x1.085b8e6daaef4p-399, 0x1.181e9f70e637ep-813, 0.0,
     0x1.3286c336a0b05p-573, 0.0, 0.0, 0.0, 0.0, 0x1.03a5823d2af09p-900, 0.0,
     0x1.7220bd6375a27p-535, 0.0, 0x1.8f982a3dc936bp-62, 0.0, 0.0,
     0x1.b265eda330b08p-495, 0x1.5cfa241a7b449p-631, 0.0, 0.0, 0x1.cda30e4894f9ap-44,
     0x1.56f6a9e8604a6p-985, 0x1.2bfc045c2361bp-425, 0x1p0, 0.0, 0.0,
     0x1.c488fb3c6675cp-333, 0.0, 0.0, 0x1.c1eb2fb97caf8p-1018, 0.0,
     0x1.026f349ee9608p-141, 0.0, 0.0, 0.0, 0.0, 0x1.d9ca961faa4cp-116,
     0x1.e717c53412119p-586, 0x1.481bf0e8287dp-817, 0x1.b6ea03b6f9c0dp-631,
     0x1.9f0c104309c03p-926, 0x1.7849629d7ec96p-888, 0.0, 0.0, 0.0,
     0x1.143001d213bbp-341, 0x1.8e20883c97ca3p-622, 0x1.f0425a8136b34p-466, 0.0,
     0x1.281ecc88e6415p-661, 0.0, 0.0, 0x1.1b8324b5607afp-850, 0.0, 0.0,
     0x1.1c94c23ea1878p-145, 0.0, 0x1.c8ec0a32a9275p-174, 0x1.0c274adc55dap-732, 0.0,
     0x1.9f3aa6483744ap-459, 0.0, 0.0, 0.0, 0x1.78f5fefeeb528p-408, 0.0, 0.0, 0.0,
     0x1.152f26ec62f2ap-920, 0x1.8b6f5ec0c5d55p-451, 0x1.fe50693ee7b59p-677,
     0x1.4af5c7b55026p-661, 0x1.2939648756fd9p-597, 0x1.233a5b5a8ce07p-903,
     0x1.7703f7b0bbcd9p-606, 0.0, 0x1.3f1ed05f08d9cp-844, 0x1.a47f42c023115p-966, 0.0,
     0x1.f875831048a87p-64, 0.0, 0x1.7d48c499a515fp-79, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a31a3fa44e07bp-590, 0.0, 0.0, 0x1.e843753ed2b9fp-698, 0.0, 0.0, 0.0,
     0x1.350483e9cba8ep-317, 0.0, 0x1.f3494687bf1b4p-464, 0.0, 0x1.d7d3831749ebp-806,
     0x1.6ecc9c0364ee7p-451, 0.0, 0.0, 0x1.a03becf4d94cp-925, 0.0, 0.0,
     0x1.5051a7b5bdf36p-472, 0.0, 0x1.d03fe176f316cp-681, 0.0, 0.0,
     0x1.0e98516e70e0bp-345, 0.0, 0.0, 0x1.2d785749319abp-798, 0x1.6de66d102739bp-822,
     0x1.416a545213418p-861, 0x1.2938a6a5bdc75p-182, 0.0, 0.0, 0x1.de8fbd9d8406cp-264,
     0x1.14f97282e3cb1p-779, 0x1.1bfe36cc689eep-225, 0.0, 0x1.e095a8f8ab0dep-612,
     0x1.7b91bdc5a9b2p-943, 0.0, 0.0, 0x1.96d22a2f2ddfep-20, 0.0, 0.0, 0.0,
     0x1.317e759f778afp-102, 0x1.30cba2a21d95ap-496, 0x1.18cfd4a10bbadp-658,
     0x1.89ed346c06a61p-814, 0.0, 0x1.42ae56279a171p-485, 0x1.f75b676564f69p-390, 0.0,
     0x1.649fd0d7c8e25p-187, 0.0, 0x1.ac849bc69c3fdp-431, 0x1.d2f5e685535d5p-199, 0.0,
     0x1.6f8b7b0fce5c5p-691, 0.0, 0.0, 0.0, 0x1.85b133f0a01b7p-525,
     0x1.456ef56fc8299p-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.452417bfc85bfp-1006,
     0x1.93a062066d5b9p-197, 0.0, 0x1.3614a9f0d01acp-436, 0x1.fcb0fff0791bcp-77, 0.0,
     0x1.4a869a2d352bcp-931, 0.0, 0x1.4122244e2867fp-151, 0x1.d3c39aaacfb9ap-916, 0.0,
     0x1.9edbd211cfadap-104, 0x1.74f0a88871473p-416, 0x1.7c42ad788ab1cp-300,
     0x1.5ce933810f234p-437, 0x1.7fd22c24dbcc8p-465, 0.0, 0x1.db2bf17e8b3b3p-267,
     0x1.a79e212ddee07p-302, 0.0, 0.0, 0x1.62d42168961b1p-43, 0.0, 0.0,
     0x1.f8ff51e06df62p-227, 0.0, 0x1.992a5e7fcffd2p-1016, 0x1.9acbbdb74be59p-351,
     0x1.69ca86cbb5346p-347, 0x1.1babd521a5cb6p-322, 0.0, 0x1.3ae9190679959p-178,
     0x1.4967bcb98aa6ep-278, 0.0, 0x1.5cba419ffca0bp-502, 0x1.4a8543e783011p-757,
     0x1.480298e51cdccp-46, 0.0, 0.0, 0.0, 0x1.b5b1ca9d3c1e1p-200,
     0x1.c191a98d8783cp-449, 0.0, 0.0, 0x1.5dc9ec39d7d34p-790, 0x1.73e255f3d541ap-878,
     0x1.54966c23848cp-683, 0.0, 0x1.017a3e165ceaap-438, 0x1.ceb1a0490341bp-243,
     0x1.67a0576b83732p-211, 0x1.ef59b551dfc33p-1007, 0x1.a39c06783c705p-229, 0.0,
     0x1.b68861588c1dbp-343, 0x1.75b530fc736d8p-782, 0.0, 0x1.90261b001d4a9p-255, 0.0,
     0x1.aeee7513c589ap-289, 0x1.c44f3b87c9f7p-585, 0x1.b5f35bf200329p-308, 0.0,
     0x1.f3a15d7e1282bp-751, 0.0, 0x1.cdec9dac29603p-809, 0x1.9095680d2781ap-889,
     0x1.e84a61ce1ff28p-51, 0.0, 0x1.1e69f5e8ed28cp-330, 0x1.c145c9d82fbb1p-915, 0.0,
     0.0, 0x1.8ee5cb8d95449p-1009, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d9dc5f6cc24p-565,
     0.0, 0x1.a359083719799p-851, 0x1.3dfa5c6f1d29cp-66, 0x1.8d7f19d1d9f6bp-676, 0.0,
     0.0, 0.0, 0.0, 0x1.0430ee220bafcp-967, 0.0, 0.0, 0x1.dca8b577d335bp-1016, 0.0,
     0x1.0a7e4d8e53378p-263, 0.0, 0.0, 0.0, 0x1.779625da17887p-340,
     0x1.7c119428731a4p-182, 0x1.1ba292e4e70c5p-619, 0x1.fa1bb2ce78081p-575, 0.0, 0.0,
     0x1.7a857296ddd58p-565, 0.0, 0x1.f91899d42436cp-840, 0x1.fb63f438b20adp-384,
     0x1.c1c34c643ae6bp-426, 0.0, 0.0, 0x1.446b5450a8389p-1013, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1a8da99310a09p-483, 0.0, 0.0, 0.0, 0.0, 0x1.66ee820de96e8p-115,
     0.0, 0.0, 0x1.efd30f9116eb3p-1003, 0x1.f2fe57e7e5193p-189, 0.0, 0.0, 0.0, 0.0,
     0x1.bae205da3d5fcp-347, 0.0, 0.0, 0x1.405b47fccaa1dp-705, 0x1.27f2e950d200bp-622,
     0.0, 0x1.a8db3e45e2bd4p-985, 0.0, 0x1.6af0302e7e3b9p-1014, 0.0,
     0x1.3519d175da216p-161, 0.0, 0x1.96ecc0002760ep-1017, 0.0, 0.0,
     0x1.0a767b2b3c9f9p-660, 0.0, 0.0, 0x1.ff14cc256d634p-752, 0.0,
     0x1.c3678b8445821p-511, 0x1.d4483dad7b3fep-701, 0.0, 0x1.dda14c5d87c77p-774,
     0x1.7bb3d6d005329p-303, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = INT32_C(0);
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = ilogb(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("ilogb %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("ilogb bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
