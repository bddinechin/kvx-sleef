/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind1_u10purecfma.c --function \
 *     Sleef_asind1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.f48ad870a609dp-170, 0.0, 0.0, 0x1.8a5bf8f31b82bp-71, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b31992d30f632p-920, 0x1.8cc253992ad15p-727, 0x1.2b0c57a3f38a6p-712, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.93ab0adb77cddp-4, 0.0, 0x1.7651e986fe24ep-721, 0.0,
     0x1.61456ab63857bp-657, 0x1.9e6fa26f7ac16p-469, 0.0, 0x1.6b0b16ce87a65p-612, 0.0,
     0.0, 0.0, 0x1.1128bdfc18a7ap-116, 0x1.8bddc6a07eeebp-206, 0.0, 0.0,
     0x1.e374bc0e95fecp-407, 0x1.36dfc8b0a1ba9p-994, 0x1.2879cc6576a7ep-873,
     0x1.1193fd4cc2f2fp-213, 0x1.0a9a8caf19458p-878, 0x1.91eb2df01e8aap-715,
     0x1.73ce9180c176bp-962, 0.0, 0x1.7a89d3c73d639p-233, 0.0, 0.0, 0.0, 0.0,
     0x1.23ae70772429cp-220, 0x1.090819320b83fp-515, 0x1.856d746e0a7e3p-944,
     0x1.4a6316b2245f7p-590, 0.0, 0x1.a8049d648ea5dp-689, 0.0, 0.0,
     0x1.df2b0097ce62bp-150, 0x1.c09482c805d6ep-445, 0x1.a39693a846655p-642, 0.0, 0.0,
     0.0, 0x1.483633d66d4acp-471, 0.0, 0.0, 0x1.d45ba35e58b65p-341, 0.0, 0.0,
     0x1.cdc1b3211d928p-587, 0x1.1c3a2f1176716p-522, 0.0, 0x1.8574e6c0fd23dp-226, 0.0,
     0x1.a558e6f4cc874p-806, 0.0, 0.0, 0.0, 0x1.9f508b3755cc8p-831,
     0x1.3f2b5641e6f06p-225, 0x1.1b2eeec25c648p-748, 0.0, 0x1.f64d197c64a45p-151,
     0x1.9d985c5d3832bp-661, 0x1.063ef30055f33p-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.147b2429d62d7p-492, 0x1.329dd68122967p-501, 0x1.12a0c2ed4e9ep-345,
     0.0, 0x1.526d44689c691p-546, 0x1.e45fb64c3a86fp-380, 0.0, 0x1.801ac1375b44ap-690,
     0x1.9a509f8256551p-756, 0.0, 0x1.ebdf5e6df4ee1p-634, 0x1.ee29d9d533673p-864,
     0x1.745905c90d324p-489, 0.0, 0x1.be043d70f9f62p-907, 0.0, 0.0, 0.0,
     0x1.8620df7add09fp-605, 0x1.8682f912138aap-451, 0x1.8f976b9ba9d87p-357, 0.0,
     0x1.5ee2cc56dae7ap-597, 0x1.0a5aedf9775c6p-469, 0.0, 0.0, 0x1.27947c13a53bap-221,
     0.0, 0x1.3cf2caf8e437ep-926, 0x1.ffda1260767a6p-52, 0x1.6e15de6587484p-97,
     0x1.c53233fdf2377p-634, 0.0, 0.0, 0x1.7721e27c21d46p-441, 0.0,
     0x1.0a75794f070c6p-675, 0.0, 0x1.d07c9db404348p-277, 0.0, 0.0,
     0x1.dbeaf9843f6c8p-881, 0x1.ba2091c4be358p-892, 0.0, 0.0, 0x1.7ea992271f451p-97,
     0x1.e2ef7b9400c83p-819, 0x1.64018411eecf3p-985, 0x1.1f0345ce9d8e7p-144,
     0x1.dc4085d51f5c2p-414, 0x1.3800a850faea7p-934, 0.0, 0x1.176ea688ba222p-936,
     0x1.29ebde506a825p-243, 0.0, 0.0, 0.0, 0x1.fa47b098709d5p-851,
     0x1.c91351c70a00ep-67, 0x1.631baadb47df7p-458, 0x1.100bb28dcc527p-512, 0.0,
     0x1.a4c9bca27b0dcp-842, 0.0, 0.0, 0x1.0cd3f910660ep-961, 0.0, 0.0, 0.0,
     0x1.0938ce542c22bp-132, 0x1.a2b3088e6170cp-873, 0.0, 0.0, 0x1.af1f425ad134fp-663,
     0x1.876c0a558182ap-875, 0x1.013c336a4d748p-305, 0x1.8544359e021dep-385, 0.0,
     0x1.0dafa24e9686p-969, 0x1.f4e972bf3790ap-153, 0x1.7164f970c2359p-444, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c344e17be4c5cp-754, 0.0, 0.0, 0.0,
     0x1.9adf52f2cf132p-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.842b7c71ef6a8p-84, 0.0,
     0x1.a366bcf63a1e2p-911, 0x1.2b991d2a7e696p-500, 0.0, 0x1.491d4e986faa3p-369,
     0x1.683ebe224161p-379, 0.0, 0x1.b187719ae6f0ep-455, 0x1.2f70525cb846dp-608,
     0x1.634778e0d15fdp-167, 0x1.f49978e88ad57p-978, 0.0, 0x1.7c2f566c78b2ep-824,
     0x1.08dbb87062243p-258, 0x1.a22da75632cc6p-685, 0x1.e6e88ab07fab8p-147,
     0x1.5090872d95d8ap-257, 0x1.6abf2894153d9p-557, 0.0, 0x1.183a48add10dp-93, 0.0,
     0x1.ca0bf029614b4p-709, 0.0, 0x1.027f3eb46e299p-555, 0x1.660e7bb084731p-758,
     0x1.e5ce39d69cbbdp-40, 0.0, 0x1.56e60d2f472bp-310, 0.0, 0x1.6cd70a945dc7bp-457,
     0x1.11810311c8731p-230, 0.0, 0.0, 0x1.d88e6e54405bp-936, 0x1.15a8864a4b496p-792,
     0x1.6a5900d0cf715p-967, 0.0, 0x1.e0096a36ccd85p-497, 0x1.74bfcc048856ap-773, 0.0,
     0x1.b1220abe26fb9p-502, 0x1.28dc5805d9444p-668, 0x1.cdc76bf527effp-380, 0.0, 0.0,
     0x1.3abbd71eedebcp-720, 0x1.f250fe7011883p-384, 0.0, 0.0, 0x1.4395b62e31f08p-544,
     0x1.92527360e39dap-111, 0.0, 0x1.fe78fc4fadcd6p-981, 0.0, 0x1.172665b7f958cp-281,
     0.0, 0.0, 0.0, 0.0, 0x1.177043ef705e5p-370, 0x1.6dc4857614dd1p-237,
     0x1.87d894dfa7e3fp-861, 0x1.6c58c2e7cac6cp-609, 0.0, 0.0, 0x1.94868c40fe151p-924,
     0.0, 0x1.394437363d324p-892, 0x1.fd0226587d8c4p-314, 0.0, 0.0,
     0x1.e44115c442877p-568, 0x1.621421c5d30c3p-266, 0x1.23301120e4856p-451,
     0x1.f9e9620fca639p-653, 0x1.f9d4f367bc579p-25, 0x1.49fd9f240fd65p-685,
     0x1.05f2cb42dccccp-249, 0.0, 0x1.f0e2f697e7d7p-232, 0x1.525ff3e05e9cep-444, 0.0,
     0.0, 0x1.9eed71845212fp-923, 0x1.0dd561e10ce93p-815, 0.0, 0.0, 0.0, 0.0,
     0x1.3370de6a9f9e2p-908, 0.0, 0.0, 0x1.d4149620b38f2p-672, 0.0,
     0x1.dedc4b1312dd4p-234, 0.0, 0x1.82242a149582cp-54, 0x1.f951ec7aa4e5bp-192, 0.0,
     0x1.8810daccfdc87p-459, 0x1.3adf00097de57p-375, 0x1.7c0056bcd19d5p-728,
     0x1.a8322b9292d55p-910, 0.0, 0.0, 0.0, 0x1.8688c45f8c986p-374, 0.0,
     0x1.c341a37335edp-171, 0.0, 0.0, 0.0, 0x1.05e2acceee4a4p-816,
     0x1.e7a72c7fb73f1p-598, 0x1.46a59b43125d6p-104, 0x1.750505f8a2ec3p-617,
     0x1.1b9cc26cb9efbp-152, 0.0, 0.0, 0.0, 0x1.1d4f4609f7924p-850,
     0x1.e681b55612d4p-969, 0x1.e2973bf6b4ba8p-5, 0x1.37afaf56b84c4p-231,
     0x1.58119e340f1afp-74, 0x1.11280c4b82a2ap-656, 0x1.648226ed96d09p-485, 0.0, 0.0,
     0x1.dc58efd7e06bap-543, 0x1.8f4a66d847a02p-337, 0.0, 0x1.70693d2b24673p-897, 0.0,
     0.0, 0x1.12854ec2109bbp-194, 0x1.99b19ed34cdcfp-135, 0x1.77cd1e163991p-527, 0.0,
     0x1.908b136b45ed3p-611, 0.0, 0.0, 0.0, 0x1.006aff2f740cbp-991, 0.0, 0.0,
     0x1.c7080d1122bafp-473, 0.0, 0.0, 0x1.403270eabd0c9p-844, 0.0,
     0x1.dcd9f988750bbp-95, 0.0, 0x1.1305f65ef6077p-599, 0x1.5f42a46a16cc3p-595,
     0x1.f636e88ed2728p-235, 0x1.f67da1cfd2aep-982, 0x1.47f9ed00d02dap-205,
     0x1.f58f663f22676p-502, 0x1.12a55cdeb7bfbp-771, 0x1.a76437aa8675p-76, 0.0, 0.0,
     0.0, 0.0, 0x1.d4dd5cc891cf9p-605, 0.0, 0.0, 0.0, 0x1.d4273bf892f64p-880,
     0x1.b8bf2ec181c48p-149, 0x1.8bda71c23111fp-188, 0.0, 0.0, 0x1.07089012c8d14p-232,
     0x1.e627efd01bddap-178, 0.0, 0x1.0d9f9272afbd5p-704, 0.0, 0.0,
     0x1.518ebe7543ad5p-673, 0.0, 0x1.11cd315cb4744p-714, 0.0, 0x1.3933a63c7cdc6p-50,
     0x1.a2d694390433p-840, 0.0, 0x1.e7921aedc27f2p-117, 0x1.bb161f74bcaa6p-498,
     0x1.72eb355e59bf3p-342, 0x1.9d2d754989a0dp-865, 0.0, 0.0, 0.0, 0.0,
     0x1.5ac83d9926243p-821, 0.0, 0x1.facb82e50edbbp-584, 0.0, 0x1.94222afd07c5fp-622,
     0.0, 0.0, 0x1.fa9307d2d326cp-778, 0.0, 0x1.babd95293bb2bp-337,
     0x1.5908f1779a395p-566, 0x1.1fee957d92cfap-382, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea37b26a70a9dp-99, 0.0, 0.0, 0x1.53d3b9134b46ep-846, 0x1.0d84cf18ec0ddp-569,
     0.0, 0x1.48d53059c214ap-952, 0x1.90d926344d0d5p-877, 0.0, 0.0,
     0x1.38cd4a2d18d66p-558, 0x1.8597f9bb6165fp-914, 0.0, 0.0, 0.0,
     0x1.fe7fab8278eaap-761, 0.0, 0.0, 0.0, 0x1.d1097b883d89ap-103,
     0x1.7de3dfb2cbf04p-885, 0x1.fcab54ffc70bfp-401, 0.0, 0x1.d5cbab1806452p-614,
     0x1.1c7c465e9e648p-791, 0.0, 0.0, 0x1.5bfdc0f5d3f6ep-502, 0.0,
     0x1.3f53520a973cfp-876, 0.0, 0x1.6721921a50a1fp-946, 0.0, 0x1.5ee9e783f7d8fp-261,
     0x1.3521a790e4a12p-962, 0.0, 0.0, 0.0, 0x1.70463523ac2c3p-481,
     0x1.b30298e3e2f48p-975, 0x1.8845a0af462f4p-486, 0x1.afa9aac0b5bd9p-478,
     0x1.c4e6780c0544dp-332, 0.0, 0x1.8c837d096fbccp-504, 0.0, 0.0,
     0x1.9c995be07de3ap-178, 0x1.c980719705e2bp-966, 0x1.b7aa5c1b2c3f8p-262,
     0x1.175c88bfa8bcap-882, 0.0, 0x1.efe0e801d06edp-262, 0.0, 0x1.b26cd0645f4c8p-106,
     0.0, 0.0, 0x1.d3c8b05fba45ep-938, 0x1.4f6069fc0a08bp-746, 0x1.8d44e47a02b32p-11,
     0.0, 0x1.d980bcc8d03fep-735, 0x1.1bc2c5ba3c9f1p-931, 0.0, 0.0,
     0x1.c0098451da557p-233, 0x1.2e27f73f4a82ep-516, 0.0, 0x1.71665c180ffb6p-944, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3d63c426c0097p-315, 0x1.1bfa306b459e9p-314,
     0x1.a80f5d982b84ap-528, 0x1.3b60a63dde088p-24, 0x1.609ff031c3b39p-371, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1c4c35cd1b82dp-966, 0.0, 0x1.84dd792a2814cp-936, 0.0, 0.0,
     0x1.4a0ab39e6de7p-874, 0.0, 0x1.27955549a8e2ep-200, 0x1.1a05d47ed5b06p-529,
     0x1.e144cb8753ed8p-364, 0.0, 0x1.a3b7876892fa4p-942, 0x1.c54d10766bbfep-331,
     0x1.2cabb7ab2d4c2p-10, 0x1.fd5eb6dc2dc3ap-841, 0.0, 0x1.7e7c9147b552fp-945, 0.0,
     0x1.74cba81d6e1d8p-398, 0.0, 0x1.f6179e920e5e8p-798, 0x1.aa5c3b9f8b75ep-171, 0.0,
     0x1.541c44712e923p-430, 0.0, 0x1.c5a37c7317b88p-351, 0.0, 0.0,
     0x1.d5d0f80c2584dp-76, 0.0, 0x1.241bd4bb2942p-802, 0.0, 0x1.e18be449d560ap-889,
     0x1.0248b296c9087p-104, 0.0, 0x1.9c924b6e286c8p-424, 0x1.c8f073616b2d4p-216, 0.0,
     0.0, 0.0, 0x1.67686be2b26a5p-188, 0.0, 0.0, 0.0, 0x1.9972d1df8075p-742,
     0x1.d2cff6d6ee463p-866, 0x1.33ca05b2a445ap-335, 0x1.be69efac15775p-592,
     0x1.978b17c7a9c3dp-969, 0x1.92a7c5477c114p-31, 0x1.d1c8215932e19p-817,
     0x1.e5d9cb695d982p-109, 0x1.33127a8963632p-611, 0x1.2d5e2a88b9a21p-133,
     0x1.795d076cb85d7p-742, 0.0, 0x1.149648fd402a7p-13, 0.0, 0x1.590f0b16ff452p-233,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2eef51a20872p-38, 0x1.b7f39334017a3p-666, 0.0,
     0x1.3436e371b9a69p-857, 0x1.9d0f93fd652fdp-218, 0.0, 0.0, 0x1.1ec5cfc3daf9ep-317,
     0x1.053e071f25fddp-562, 0x1.0cbc24b21831ep-200, 0.0, 0.0, 0.0, 0.0,
     0x1.84bc9dac3b231p-352, 0x1.ec2bedd03327fp-720, 0x1.c274c98ca84e1p-354, 0.0,
     0x1.61caf37031e35p-323, 0.0, 0x1.25c47e4ff1a0bp-813, 0x1.061117ed9de1bp-380, 0.0,
     0.0, 0x1.b921af168b36dp-333, 0.0, 0x1.93a697773de2bp-858, 0.0,
     0x1.7c5745072b33cp-725, 0.0, 0x1.9dd9f45360c7fp-550, 0x1.4a2654266db0cp-841,
     0x1.ffdbc0384ebd1p-282, 0x1.b42639498e22p-656, 0.0, 0.0, 0.0,
     0x1.878aba998639ep-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a78d56d6241ep-187,
     0x1.fe49b6feda9dfp-521, 0x1.333635663d7efp-334, 0x1.c2970d3cdad2p-547, 0.0,
     0x1.be649e7650604p-571, 0x1.c2fdffc53bb9bp-971, 0x1.a71ccb252a2b3p-258, 0.0,
     0x1.bacaffa3d7028p-136, 0.0, 0x1.5b16354755224p-788, 0.0, 0.0, 0.0, 0.0,
     0x1.bafc5456df61fp-552, 0.0, 0.0, 0x1.be88d0d2b962dp-844, 0.0,
     0x1.c77c894bf8f9bp-743, 0x1.9d6c618f14ap-459, 0.0, 0.0, 0x1.aedc07ccbbdeep-226,
     0x1.35ee7cedf9bfbp-359, 0x1.421a9a93d68d4p-966, 0.0, 0x1.cf44c679f424ep-416,
     0x1.1b6e56fadf7d6p-932, 0x1.5f71dfc1b3486p-928, 0x1.8960a789c5652p-167, 0.0, 0.0,
     0.0, 0x1.735233b9933dcp-171, 0x1.8007234876f58p-208, 0.0, 0x1.4480acdba3f97p-424,
     0x1.4a632192a321ep-749, 0x1.413329d4aeb77p-120, 0.0, 0.0, 0.0,
     0x1.b5be2bedb4aaap-521, 0.0, 0.0, 0x1.ed9117656954bp-360, 0x1.fe4fb00377657p-897,
     0x1.55d200ab68cd3p-1001, 0.0, 0x1.b756a14d5482bp-916, 0x1.1dbb0f93ba4b8p-296,
     0x1.bc39ceec2ab9fp-870, 0x1.aaa47177e1f6cp-586, 0.0, 0x1.8b32cd3da72c4p-508,
     0x1.e404221a6c742p-717, 0.0, 0x1.ad27ae7ac1c2p-643, 0x1.f8c58dd68a476p-811,
     0x1.a560cd9ddae04p-828, 0.0, 0.0, 0.0, 0x1.12c1891e2b917p-1002, 0.0,
     0x1.2800e4f260c1p-361, 0.0, 0x1.01efd08746f4fp-193, 0.0, 0x1.306c7863d90dfp-85,
     0x1.19a418861212cp-920, 0x1.40a9c5bd2516cp-588, 0.0, 0x1.9dacba204e5d6p-814, 0.0,
     0x1.13508565772cep-812, 0x1.155caa199f8cap-365, 0x1.62006fa7064fap-904, 0.0,
     0x1.614c7a1827f2cp-519, 0x1.08ec9b3c7d71p-824, 0x1.a8b13018bcc93p-156, 0.0,
     0x1.73baa73d79923p-642, 0.0, 0.0, 0x1.1a8dfc03d8488p-342, 0x1.b20442c1a7cfdp-920,
     0x1.01ec88196e7a5p-338, 0x1.30ec219f4be82p-41, 0.0, 0.0, 0x1.c105ae07496c8p-266,
     0x1.1dfeb4a03e513p-596, 0x1.2352d9dfe6c8ap-403, 0x1.45167f2474255p-280,
     0x1.e821dbbb71bbcp-124, 0.0, 0x1.aada72aa1208fp-623, 0.0, 0.0, 0.0, 0.0,
     0x1.4a8ad8fadd268p-441, 0x1.ce9512e63c836p-530, 0.0, 0.0, 0x1.bb3cdcf93f03fp-981,
     0x1.e34cffbbc717cp-298, 0x1.848e22831225ap-370, 0x1.b4421d6437f23p-564, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e940a77537dcp-200, 0x1.1892aac9b98b5p-809, 0.0, 0.0,
     0x1.2f05cc183e841p-678, 0.0, 0x1.ee24e4a43c86ap-580, 0.0, 0x1.0b43b1f3d84c3p-184,
     0.0, 0.0, 0x1.4d420231ba414p-454, 0x1.144e5ff716679p-645, 0x1.29b04632595bbp-188,
     0x1.dfad538a988d3p-600, 0.0, 0x1.68e6d6b0e9dcep-346, 0x1.d00c030d68cd5p-938,
     0x1.df263b92639d3p-47, 0x1.6bf0ec23993a4p-299, 0.0, 0x1.cc81ffc265978p-828,
     0x1.1e0883f029ea5p-524, 0.0, 0.0, 0x1.2c69386c1f3f8p-244, 0x1.741002a27fe09p-713,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be0db01a7c29ap-325, 0.0,
     0x1.fdea1a98322d4p-988, 0.0, 0.0, 0.0, 0x1.ef7e62a420711p-60, 0.0,
     0x1.2db5e7d9257e6p-119, 0x1.b4ebc171b1751p-409, 0x1.d1b94fca11811p-702, 0.0, 0.0,
     0.0, 0x1.ef01db76950cdp-735, 0.0, 0.0, 0x1.5b6ebfd68188cp-376, 0.0, 0.0, 0.0,
     0.0, 0x1.c20a43a4c1447p-588, 0.0, 0.0, 0x1.7f19c94c2743bp-100, 0.0,
     0x1.fe5ea33314a96p-502, 0.0, 0x1.a5463af89cc46p-381, 0x1.14d931c1043b6p-114, 0.0,
     0.0, 0x1.30102434d60fbp-215, 0.0, 0x1.8dc0b38bf77f4p-616, 0x1.0894befd546b5p-102,
     0.0, 0.0, 0x1.36d3287ebb07p-398, 0.0, 0.0, 0.0, 0x1.29701591f331p-364, 0.0, 0.0,
     0.0, 0x1.b10a3a73c4556p-413, 0x1.ebb9d488280edp-93, 0.0, 0x1.85d8fb0385e11p-404,
     0x1.94abe91a15839p-633, 0x1.5612aa8bd6edbp-64, 0x1.5b0452cbb8dcep-665,
     0x1.163df18684cd2p-889, 0.0, 0x1.cd1956d9aeb0ep-124, 0x1.2d35bfe99b78fp-12, 0.0,
     0.0, 0x1.436625384519fp-580, 0.0, 0.0, 0.0, 0x1.36878955f9176p-738, 0.0,
     0x1.4d068c718fe5fp-249, 0x1.80fb5c34466f2p-629, 0.0, 0.0, 0x1.d341f16fa9878p-598,
     0.0, 0.0, 0x1.ad6b46705e985p-894, 0.0, 0x1.a2c304d6ade29p-257,
     0x1.db2491708774bp-844, 0x1.d24978f2b233fp-649, 0x1.a4c3517c48bdfp-463, 0.0,
     0x1.28fc06a78a1b6p-519, 0x1.1d237498d3992p-450, 0x1.fd1b23fb19a0fp-112, 0.0,
     0x1.74ad359f9f472p-433, 0x1.91c5f71095f71p-74, 0x1.fa8838ccc867p-705,
     0x1.ee32615fdf3b2p-108, 0x1.aff5a8d6591a6p-312, 0.0, 0.0, 0x1.666f24f0f315bp-772,
     0x1.094fc6918737cp-748, 0x1.cd2172ae8d579p-125, 0x1.a9eed667b4c1dp-194,
     0x1.a24b7b9e807bcp-485, 0x1.48a3f5a83b659p-13, 0x1.9fa0c9ce19cdbp-445, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6ec1c3e4d09cap-805, 0.0, 0x1.f0c9458d0c64cp-39, 0.0, 0.0,
     0x1.f9c82914dcf95p-846, 0.0, 0x1.3bdc3b8f3e4f4p-280, 0.0, 0x1.11e8781c73f1cp-949,
     0.0, 0.0, 0x1.310f05835b86fp-223, 0x1.0d40013b0ea35p-747, 0x1.a9768c57fd9e4p-764,
     0.0, 0.0, 0.0, 0x1.ed0d1ca309266p-296, 0x1.c6b5b460cb9bap-565,
     0x1.ca0c62d226028p-908, 0.0, 0x1.3c148eccf9139p-31, 0.0, 0x1.58d01f15e3b55p-983,
     0x1.3611b4ace3215p-903, 0.0, 0x1.eeb05d3ac2aedp-198, 0x1.8f94fc5997d11p-612,
     0x1.e991403caa134p-1002, 0.0, 0.0, 0.0, 0x1.eae7954f7051ap-583,
     0x1.aada1b4a06b24p-886, 0.0, 0x1.aed41c7d63676p-903, 0.0, 0.0,
     0x1.d14af8f81700ap-318, 0x1.83025b0dc1453p-498, 0.0, 0x1.6fdfbd67c2becp-323,
     0x1.881128caa038cp-435, 0.0, 0x1.9cf65454906d3p-698, 0.0, 0.0, 0.0,
     0x1.cd299cdf5635fp-437, 0x1.9d0770e964b03p-560, 0x1.629037df71c9bp-683,
     0x1.47568912adfa4p-734, 0.0, 0x1.d62d83e72ef4ap-827, 0.0, 0.0,
     0x1.6c19cd65a47f4p-997, 0x1.90e357c702ba9p-949, 0x1.10f88744a83e6p-662,
     0x1.1b91d8e6bca4ep-922, 0x1.4438f22221e7cp-993, 0x1.4a816f6da7adcp-517,
     0x1.81998d814b146p-223, 0x1.1591c915c33a7p-658, 0.0, 0x1.895bff959a1e8p-798,
     0x1.f34c500b0c3bap-94, 0x1.cbedb52a2b132p-519, 0x1.430101f11bfddp-844,
     0x1.a4a29d23b1a6ep-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f62278f02f284p-869, 0x1.d37d8ea9cfe03p-867, 0x1.66b09445b5919p-421,
     0x1.5b526be86c432p-632, 0.0, 0x1.35062f1cd61a3p-617, 0x1.59291daf1e777p-491, 0.0,
     0.0, 0x1.811527956c39dp-656, 0.0, 0x1.473ce8bd9affcp-44, 0x1.8c9f1508f8a99p-674,
     0.0, 0.0, 0x1.41a83dadae3e1p-861, 0.0, 0.0, 0.0, 0.0, 0x1.bc00eceef290dp-229,
     0x1.ee26290fa2017p-65, 0x1.a38d818e8ae3p-586, 0x1.f97da30f94b6dp-267,
     0x1.18cbc58f964d5p-527, 0.0, 0.0, 0.0, 0x1.e020e0976f5ap-440, 0.0,
     0x1.e680236b108f8p-241, 0x1.4610b9244e034p-946, 0.0, 0x1.ebb4fff285919p-93, 0.0,
     0x1.851f1de47517p-961, 0x1.f00622b4d847fp-380, 0x1.1e9592e06f822p-270, 0.0,
     0x1.941bbc41254abp-212, 0.0, 0.0, 0x1.fa13badd6173dp-714, 0x1.4020170df3176p-220,
     0x1.173ef8e7ca54ap-34, 0x1.e4e70a2603cd5p-855, 0x1.26b5468756b76p-315,
     0x1.12c789885dc1bp-846, 0.0, 0.0, 0.0, 0x1.877b63e8ae91fp-967,
     0x1.0d0149e9dac9ap-774, 0.0, 0.0, 0.0, 0.0, 0x1.53a530a8800f5p-266, 0.0, 0.0,
     0x1.cec33a116d5b7p-865, 0.0, 0.0, 0x1.a7b25949341cfp-287, 0.0,
     0x1.5a08d5821f77ep-101, 0x1.fcbedfb8465eep-945, 0.0, 0x1.9e628384e50adp-606,
     0x1.42414a485236p-685, 0x1.66590f175ff7cp-744, 0.0, 0.0, 0x1.776f46807c457p-241,
     0.0, 0x1.c0ae56d8d353fp-720
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_asind1_u10purecfma(tmp0);
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
    printf("Sleef_asind1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asind1_u10purecfma bench acc %la\n", global_bench_acc);
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
