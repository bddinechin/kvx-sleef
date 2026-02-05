/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expd2_u10kvx.c --function Sleef_expd2_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.0b357340cace3p-801, 0.0, 0.0, 0x1.0a75f832c3027p-314,
     0x1.ec9a5d25a4ce1p-358, 0.0, 0x1.036f4cb4d7ba7p-293, 0x1.3f161945453cfp-81, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ca81df59b4c21p-437, 0x1.87c2cee71bc81p-303,
     0x1.ca28ca1540f49p-165, 0.0, 0x1.ad1fc3508e86cp-290, 0.0, 0.0,
     0x1.58677f6f396f3p-429, 0.0, 0x1.7f79d5188d9dbp-685, 0x1.3706c931818b6p-974,
     0x1.8ad5d2d82b42dp-20, 0.0, 0.0, 0x1.0509c597acbf4p-211, 0x1.9382670bb897bp-129,
     0.0, 0x1.c901063ac2377p-482, 0x1.c9404b1b92522p-66, 0x1.a25287747013p-602,
     0x1.d130afd0227aap-717, 0x1.776ae03bfff77p-832, 0x1.cb87c08dacf31p-404,
     0x1.55e0fd35d9c9ep-519, 0.0, 0x1.67dc9471b2c71p-852, 0.0, 0.0, 0.0,
     0x1.ea8cf0f627757p-913, 0x1.ca02c6bc027eap-208, 0x1.0376f2c339d07p-687, 0.0,
     0x1.b5b3a0524315cp-132, 0.0, 0.0, 0.0, 0x1.cd10cf300c295p-727, 0.0, 0.0, 0.0,
     0x1.55f29c7815ebp-214, 0.0, 0.0, 0.0, 0.0, 0x1.80168d6dc6163p-544, 0.0,
     0x1.13982770b5022p-684, 0.0, 0.0, 0.0, 0x1.fcb3276ed10bdp-154,
     0x1.167847542d8bbp-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a04f70d62943p-193,
     0x1.f9115cd59e3cep-715, 0.0, 0x1.ac141d2dfba7p-568, 0.0, 0x1.ded20438b98bfp-660,
     0.0, 0.0, 0x1.b31f74791cb7fp-131, 0.0, 0x1.4fa55be6d8bc3p-320,
     0x1.eb264f62ad9e9p-328, 0x1.6b50bf56c42b2p-174, 0x1.d88eafd5880c5p-1020,
     0x1.5d7b41bf08ea9p-377, 0.0, 0x1.e6d934bfaa3acp-824, 0x1.ca60daa84e7cbp-335, 0.0,
     0x1.2db04d9935702p-58, 0x1.a497d08cc6b1fp-426, 0x1.1e2b3e3dd23ccp-380,
     0x1.fff24ef1be3fdp-369, 0.0, 0x1.ade8616f29aeep-966, 0.0, 0x1.6f5fd9ff42586p-177,
     0.0, 0x1.f2cdd5652386cp-658, 0x1.1bbba556288bdp-400, 0x1.f7c143094af37p-486, 0.0,
     0.0, 0.0, 0x1.942d18f4036cep-69, 0x1.aa36f30c9e733p-359, 0x1.bc5f683985865p-851,
     0x1.28e964531728bp-509, 0x1.30db3b0e6d391p-489, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc6709088b8b1p-827, 0.0, 0x1.5e7ef19286275p-271, 0x1.9d7e56cc84591p-175,
     0x1.1fb6980dd12dp-800, 0.0, 0x1.0f51be2656924p-648, 0.0, 0.0,
     0x1.ac2246f61e027p-249, 0.0, 0.0, 0x1.323cf043dc67ep-916, 0.0, 0.0,
     0x1.3138cfaf56e06p-692, 0x1.0741802d916ffp-688, 0.0, 0x1.ddb5ec3315eeep-351,
     0x1.1252e9b1b19f7p-352, 0x1.184e49d177b7ap-146, 0x1.cd974dccbc749p-437,
     0x1.5e13bc429c876p-74, 0x1.569b4ea009018p-736, 0x1.6004cb12bd1fap-689,
     0x1.644185f7ce286p-711, 0.0, 0.0, 0x1.94a7e7fc34d75p-529, 0x1.c0568a6ba93a9p-523,
     0x1.12b202cc29e8cp-877, 0.0, 0.0, 0x1.e550066d7ea56p-319, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6888f38d0ff67p-960, 0x1.63a1b28809435p-229, 0x1.49f1e97ae0447p-462, 0.0,
     0x1.805005d67d3f9p-748, 0.0, 0x1.05ac50a0e91ap-724, 0x1.ef27b09808041p-877,
     0x1.40cdfb8a3aa88p-578, 0x1.6349a9b9046acp-768, 0.0, 0x1.0acbee2db69dep-539, 0.0,
     0.0, 0x1.3e78f2b1eafdfp-946, 0x1.073c67e049ae3p-708, 0.0, 0x1.c17fd2b229f18p-876,
     0x1.3cfe7e79f6dap-263, 0.0, 0.0, 0.0, 0.0, 0x1.a70b191f88867p-859,
     0x1.5baed63c69d27p-286, 0.0, 0x1.b91758882ef6ap-398, 0.0, 0x1.c52b7eb4157e4p-141,
     0.0, 0x1.9e3608cc817aap-403, 0.0, 0x1.8219b06b2f25cp-653, 0x1.06989840ca171p-275,
     0x1.bfa07e8a80201p-935, 0.0, 0.0, 0x1.1980485ed08dcp-37, 0x1.6a1cbbf36abe3p-121,
     0x1.40711e6b9cb8ep-425, 0.0, 0x1.db39acbaee27ep-24, 0.0, 0x1.2a474f16f4918p-658,
     0x1.eb2b9584322p-732, 0x1.16b2a0d547e0dp-300, 0.0, 0.0, 0x1.b784a257fc225p-281,
     0.0, 0x1.42b06be31bf41p-595, 0.0, 0.0, 0.0, 0x1.dac9440b37e48p-221,
     0x1.03abb99237e08p-327, 0x1.47077d0528c3p-336, 0x1.9786393913e3fp-212,
     0x1.b5e5574e65d09p-644, 0.0, 0x1.e22e6fdca9ed2p-826, 0.0, 0.0,
     0x1.f8cc1c49addc5p-308, 0.0, 0.0, 0x1.7f789ce023eb8p-909,
     0x1.7cfe8db443bacp-1006, 0x1.93c94ef2f9f39p-481, 0x1.69f818433e2edp-335, 0.0,
     0x1.86612ec66342fp-58, 0x1.2a9de339f2258p-285, 0.0, 0.0, 0x1.e33735e48435ap-770,
     0x1.3593fb045754bp-688, 0.0, 0x1.a1ca054d1cd31p-818, 0x1.ea16a88fe3d1ap-496,
     0x1.673eba74ba5acp-851, 0.0, 0.0, 0x1.6c7c5fd499e8fp-394, 0x1.34004a9b68576p-857,
     0.0, 0x1.e861036f9f204p-770, 0.0, 0.0, 0.0, 0x1.ef52c38c22c31p-883,
     0x1.9a63844736242p-706, 0.0, 0x1.d1a21b637b32cp-850, 0x1.05c37c0cdefc1p-695, 0.0,
     0.0, 0x1.36e1c143bcf3ap-886, 0.0, 0x1.1c37dac134ad6p-217, 0.0,
     0x1.d79f57f6c419dp-114, 0x1.1096f074c362p-557, 0x1.dacfa12c2646ep-848, 0.0,
     0x1.e9d04371160d8p-157, 0.0, 0x1.b1357894b7f48p-415, 0x1.b35803216fb9p-34, 0.0,
     0x1.b098d01bbe6aep-620, 0x1.926e26a7f23f7p-624, 0.0, 0.0, 0x1.46c126242b458p-159,
     0.0, 0x1.38a85e1754503p-862, 0x1.4677cbf158a3bp-94, 0.0, 0x1.e0d71d83e2e6bp-776,
     0x1.eb0ddd80f8989p-400, 0x1.ddbd39bc90096p-253, 0.0, 0x1.4f91d60e8470cp-1011,
     0x1.64c27e4d5c073p-229, 0x1.d558d38aa716p-898, 0x1.f0247d624f356p-117, 0.0,
     0x1.7cf5c80aef27fp-316, 0x1.eeda444a65f85p-817, 0x1.79766be12ff74p-794,
     0x1.16fe10f88bd92p-733, 0x1.26a25748c7561p-681, 0.0, 0.0, 0.0,
     0x1.447208aa2bd4dp-272, 0x1.9bc843342f2dfp-792, 0x1.32882d46d1234p-662,
     0x1.564d1df816ffcp-440, 0x1.df24ffdbdf69ep-368, 0.0, 0.0, 0x1.142ecd10d0e8bp-555,
     0x1.eb0317c340adp-621, 0x1.940a551ddf5f1p-903, 0x1.91bbb1f186336p-84,
     0x1.095a5d8e4bcdap-826, 0.0, 0.0, 0x1.ab268155338abp-118, 0x1.26e8f0a3d75d6p-600,
     0x1.07b1c71aaf3f5p-701, 0x1.acb9954c36d69p-948, 0.0, 0x1.ed1615edd341cp-65,
     0x1.3fefd04153328p-146, 0x1.86a351973bed5p-748, 0.0, 0x1.d574d013c1f38p-597, 0.0,
     0x1.4cf6b648dbd02p-885, 0.0, 0.0, 0.0, 0x1.cdc89e6bd87b6p-458,
     0x1.59d6643f201bp-751, 0x1.f512543974d4ep-659, 0.0, 0x1.aa2645c08b328p-864, 0.0,
     0x1.48670ca312745p-899, 0x1.b11fca68a4d9p-643, 0.0, 0x1.a0fd6c5fabcfdp-990, 0.0,
     0.0, 0.0, 0x1.a10a039150923p-76, 0x1.123ceb68df362p-223, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98a078ca28a42p-92, 0.0, 0x1.ba4617661af15p-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1fbb6d665b90dp-602, 0.0, 0x1.1c499eb7fbfa6p-844, 0.0, 0.0,
     0x1.37b15cdc7a3d9p-893, 0x1.70c3f5191a307p-298, 0x1.f75474913b764p-435, 0.0,
     0x1.12d41fef7411dp-144, 0x1.aad79f7899957p-581, 0x1.743cc08deba6ap-298, 0.0,
     0x1.4c4b0bbc872d5p-323, 0.0, 0x1.730316d8a9d8fp-230, 0.0, 0x1.c272f800e4a53p-890,
     0.0, 0x1.ab83138dfdccdp-988, 0.0, 0x1.0b88b47481a43p-896, 0x1.88bbcb3426398p-191,
     0.0, 0x1.8dc9d1dbf47cdp-756, 0x1.0914d20fed336p-643, 0x1.8b74ea7a30045p-581, 0.0,
     0.0, 0x1.aed83ddfcb664p-172, 0.0, 0x1.84462803f5078p-329, 0.0,
     0x1.3adcc050387e2p-610, 0x1.d6cfc048b3c6p-999, 0.0, 0.0, 0x1.aa151b6c6413fp-366,
     0.0, 0.0, 0x1.f7b93c087ae03p-781, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9088e0f70b96dp-463, 0.0, 0.0, 0.0, 0.0, 0x1.edde0ccfc370bp-724,
     0x1.86ace9da2c495p-347, 0.0, 0.0, 0.0, 0x1.ad551de2b7735p-176, 0.0,
     0x1.70c350f0715p-256, 0.0, 0.0, 0x1.157aa7940008dp-538, 0x1.66454a5d41a9p-63,
     0.0, 0x1.073dcd151d87ep-385, 0x1.af52be9efaea3p-21, 0.0, 0x1.9f4ddb3e3c256p-296,
     0x1.848f54ee6691fp-753, 0.0, 0x1.704037be43f2ep-819, 0x1.e6b2d55cab4fcp-232,
     0x1.25e76be9248eap-42, 0.0, 0x1.1833691c04ae5p-634, 0.0, 0.0,
     0x1.fe9b4f6185062p-919, 0.0, 0x1.81e8ca2afa4fp-180, 0x1.6354061fb241ap-129, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70bfa506c35bp-136, 0x1.6a583312acbfep-994,
     0x1.47c26f72e488fp-121, 0x1.c1ac1ef8123f6p-359, 0.0, 0x1.d932c2b849debp-235,
     0x1.7fcd327f316bdp-525, 0.0, 0x1.1f85ac12a57p-148, 0.0, 0.0, 0.0, 0.0,
     0x1.d87074cfeeadep-543, 0x1.750a628325a9ep-325, 0.0, 0.0, 0.0,
     0x1.4314575027f26p-82, 0x1.c4b95b54f3d6ap-422, 0x1.c600e07ea705p-839,
     0x1.d82428ec9c61bp-24, 0.0, 0.0, 0.0, 0x1.090c67701a30fp-811,
     0x1.669331cc63911p-48, 0x1.07b87c7e51f0bp-372, 0x1.9a1226e86fd6ap-259, 0.0, 0.0,
     0x1.4e5a09de94799p-957, 0x1.7cdb5dc75ad6p-290, 0.0, 0x1.f920d1f12e4bap-301, 0.0,
     0.0, 0.0, 0x1.3bf619ce9400ap-866, 0x1.d90dc3ee80bd5p-667, 0.0,
     0x1.c121fefb1d6cfp-711, 0x1.b732155145f75p-261, 0.0, 0x1.c6c1bb9f42825p-411, 0.0,
     0x1.ee9357820cc47p-199, 0x1.ddca91482621dp-883, 0x1.007a31a91abf2p-296, 0.0,
     0x1.52cfdb5ef970dp-867, 0.0, 0.0, 0x1.5d962724799c3p-813, 0x1.feba47908a596p-259,
     0x1.45aef46495b4bp-642, 0x1.5af73abb0a35dp-460, 0.0, 0x1.a4c0a92efd743p-664,
     0x1.d6e6dd606d659p-349, 0.0, 0.0, 0x1.72ae7e8d6258bp-140, 0x1.2e1e401e681f5p-72,
     0x1.ae05f5a54626dp-1012, 0x1.a2aec0e719262p-283, 0x1.841db4ec57c0bp-816, 0.0,
     0.0, 0x1.1d2e79e825664p-283, 0.0, 0.0, 0.0, 0x1.a882e3ca168ep-765, 0.0,
     0x1.1050dc492e78bp-209, 0x1.e8e7517b09bdep-522, 0.0, 0x1.3615b53bcc13cp-273, 0.0,
     0x1.aa0479d56e92ap-333, 0x1.c1846f9136cbdp-293, 0.0, 0x1.9b07dc18d2e0cp-698, 0.0,
     0x1.b5ce415d3f08ep-97, 0.0, 0x1.066c776704e25p-482, 0.0, 0x1.d553e5a770554p-476,
     0.0, 0x1.f8bddd7235eb7p-532, 0x1.aea74ac8c2cdep-274, 0.0, 0.0,
     0x1.c27dc67a13a03p-36, 0.0, 0x1.870cb6abd6ba5p-582, 0.0, 0.0, 0.0,
     0x1.d3fe1fa0c7d2fp-1, 0x1.fcdbc9c2dabd3p-469, 0x1.17ce216793e55p-439,
     0x1.eb42a19c39baap-668, 0.0, 0x1.e03a38884a2acp-260, 0.0, 0x1.6c5fcc343b27dp-275,
     0.0, 0x1.70dfdff808278p-627, 0.0, 0x1.c4f28dfcc6547p-60, 0.0, 0.0,
     0x1.5392c00686ac7p-421, 0.0, 0x1.6e175ddde8f71p-268, 0.0, 0x1.2b590dd3f34afp-52,
     0x1.a09439cc5253p-65, 0x1.d0f6148f80e17p-433, 0x1.5670682550363p-77, 0.0,
     0x1.136e1a7322b21p-993, 0.0, 0.0, 0.0, 0.0, 0x1.3cb0aaa03a44bp-32, 0.0,
     0x1.88038e880d373p-243, 0x1.bd2784b985dddp-184, 0.0, 0.0, 0.0,
     0x1.06767fc9aefffp-590, 0x1.c0a6c8c09a79fp-427, 0x1.0b74bcefd820bp-738,
     0x1.cc72f932a8a9ap-318, 0x1.a431a3653e6c6p-330, 0.0, 0x1.e35f68581bc99p-95,
     0x1.3ad49c9a92c0dp-448, 0.0, 0x1.17645b05c0145p-582, 0x1.5c4769e0a6d94p-682, 0.0,
     0x1.ef7e517ad0d8dp-57, 0x1.f648e29a74402p-894, 0x1.ab68d0dc3fb1ap-331, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.edac4e9b0bf81p-195, 0.0, 0.0, 0.0, 0.0,
     0x1.42f2d6355d9d7p-738, 0x1.105cfbaf17bdcp-558, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.96b4f569f0b8p-90, 0.0, 0.0, 0.0, 0x1.ad0c317b2d212p-231,
     0x1.1eb3f318204c6p-383, 0x1.b2ef85d4727f4p-408, 0x1.eca19f81f58c7p-935, 0.0, 0.0,
     0x1.99d58e18eefa6p-651, 0.0, 0x1.a6601bf8897p-338, 0.0, 0x1.5e95f2ac5a2b1p-532,
     0.0, 0.0, 0.0, 0x1.d8c9936602038p-466, 0x1.ad85094207483p-966, 0.0,
     0x1.a96a04d9b5922p-976, 0x1.05f7d959a6fe8p-469, 0.0, 0.0, 0x1.447c48125e48bp-313,
     0x1.b2152dbf88b1fp-155, 0x1.b9d195ff106a5p-748, 0x1.5cabead701902p-430,
     0x1.c2e17ffe818c3p-785, 0x1.64fa52985428dp-645, 0x1.40d4997f13593p-879,
     0x1.8518ca8b30757p-964, 0x1.1f41b9423acbap-917, 0x1.dfd3ac635703ap-338, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1dd59c9b902dp-283, 0.0, 0.0,
     0x1.ca43b3c601c9bp-930, 0x1.20daea80687a5p-623, 0.0, 0x1.8e10b6d4fdf02p-428, 0.0,
     0.0, 0.0, 0.0, 0x1.6bdabb751db3p-116, 0x1.3fa824f516557p-512,
     0x1.39ee00251adb9p-470, 0x1.42dedcde49b14p-245, 0x1.af49fadecaaaap-347,
     0x1.45f9810f3da72p-55, 0x1.da26acf8acbf9p-423, 0.0, 0x1.27d397fdc40bfp-113, 0.0,
     0x1.42e0954a5d8e8p-547, 0x1.dfcb5510f91e7p-804, 0.0, 0x1.7cda7faf944f3p-469,
     0x1.2ebde8a35a1c5p-236, 0.0, 0.0, 0x1.0bff9938aeb88p-696, 0.0,
     0x1.1a7edd11ac632p-587, 0x1.46dfcc8d3688cp-592, 0.0, 0x1.e457e283ba491p-550, 0.0,
     0.0, 0x1.b00ecd47d0677p-43, 0.0, 0.0, 0.0, 0x1.3a519bada976dp-420,
     0x1.0b4607ad29d1bp-881, 0x1.73c31a637d2a1p-291, 0x1.cb1ca72593807p-319,
     0x1.3c511fce4f5p-125, 0.0, 0x1.b4d1d49c6c03bp-449, 0.0, 0x1.d4ee2ad47a49p-591,
     0.0, 0.0, 0.0, 0.0, 0x1.8527279b06b9p-567, 0x1.c0de450c34d21p-858, 0.0,
     0x1.66583f4bea607p-724, 0.0, 0x1.6127f3aaf4a86p-910, 0.0, 0x1.9363887934b77p-846,
     0x1.c8ea9761623edp-508, 0.0, 0.0, 0.0, 0x1.e0c32424ad9bep-181, 0.0, 0.0, 0.0,
     0.0, 0x1.849285cc662b7p-733, 0x1.6f818b64c9cd4p-344, 0.0, 0.0,
     0x1.8cac002bcd7d8p-72, 0.0, 0x1.f5850456b2d06p-955, 0.0, 0.0,
     0x1.58016ada7a6bdp-187, 0.0, 0x1.b4bc641e87523p-950, 0.0, 0.0,
     0x1.46a734c8045b2p-1017, 0x1.b6505c517b02dp-980, 0x1.3935f24e248f4p-112,
     0x1.afc10f53be877p-587, 0.0, 0.0, 0x1.ebf6798122cbap-746, 0.0,
     0x1.f71238023bde5p-51, 0x1.267c3ed2a67dcp-520, 0.0, 0x1.5703179c29d65p-937,
     0x1.6d3d4ec3228aap-338, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0e70319ee0dbp-327, 0x1.de1cbc0f36207p-777, 0x1.6b0aefa3e72fap-913, 0.0,
     0x1.06b9cf9a35222p-166, 0.0, 0.0, 0.0, 0.0, 0x1.afd74f0495eb2p-54, 0.0, 0.0, 0.0,
     0x1.384932df893a3p-26, 0x1.7e9c39f4629fbp-200, 0.0, 0x1.1601fbb8d221p-313, 0.0,
     0x1.062c204e70c9ep-628, 0.0, 0x1.c3b41bcb8fbbbp-585, 0x1.0c4c308358997p-623,
     0x1.c72b98e387009p-744, 0x1.0f7437dad88c1p-861, 0.0, 0.0, 0.0, 0.0,
     0x1.acb7169143077p-576, 0x1.92018448ad68ap-875, 0x1.ce299620a26a8p-85, 0.0,
     0x1.5b129c480b1f2p-742, 0.0, 0x1.4884b7b0078eap-367, 0.0, 0.0, 0.0,
     0x1.2f8d7c55d3d54p-971, 0x1.a5ea11934dffp-846, 0x1.4b521a7d48455p-4, 0.0,
     0x1.1ddd063e14118p-922, 0x1.d62dcfeefd0a1p-388, 0x1.8aa21f16ee0c6p-229, 0.0, 0.0,
     0x1.c043bfd93e76bp-876, 0.0, 0.0, 0x1.fbe1d7dfe5f85p-1005, 0.0,
     0x1.f273b1576c62bp-794, 0x1.4464cc765800bp-505, 0.0, 0.0, 0.0,
     0x1.425a6f9d9122fp-773, 0.0, 0.0, 0x1.5561b53660ff6p-267, 0x1.60aa1b60f5768p-585,
     0x1.eb6ed52768d75p-463, 0x1.f5cbf70d241efp-812, 0.0, 0.0, 0.0, 0.0,
     0x1.269a3a7e935a6p-588, 0.0, 0x1.eb885188b532ap-870, 0.0, 0x1.68e3c42b4a82ap-855,
     0x1.799966932ec8p-316, 0.0, 0x1.cf39cbb3787e5p-576, 0x1.099c87db14864p-832, 0.0,
     0.0, 0x1.a4b2af331e023p-548, 0x1.a9b66db93042ep-134, 0x1.43785041e0b88p-254, 0.0,
     0x1.29a86e646625cp-288, 0x1.a6fdddd557319p-96, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7e594b7475b68p-894, 0.0, 0x1.39b34c90a22c4p-587, 0x1.2d30d8fa28558p-532, 0.0,
     0x1.d66330698d42fp-917, 0.0, 0.0, 0.0, 0.0, 0x1.da2c86907e15fp-490, 0.0,
     0x1.0a7470d3200abp-182, 0.0, 0.0, 0x1.5e972b95a576fp-832, 0.0,
     0x1.42fd4186118b7p-140, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e57d90923581ep-748,
     0x1.bfb0ade82aaabp-781, 0.0, 0.0, 0x1.c9e0548219f8p-1009, 0.0, 0.0,
     0x1.85b2b9a366c7ep-376, 0x1.b5b95ebf4b02fp-90, 0.0, 0.0, 0.0,
     0x1.3c524a78e1935p-848, 0.0, 0.0, 0.0, 0x1.ac948e9409aa7p-147,
     0x1.9dedeb32d840fp-370, 0.0, 0x1.fcb456ef45f32p-96, 0.0, 0.0, 0.0, 0.0,
     0x1.be0343e8f4d71p-549, 0.0, 0.0, 0x1.1ed67659dac9bp-66, 0.0,
     0x1.e23406483c2a4p-27, 0.0, 0.0, 0.0, 0x1.ea0a50780d44dp-836,
     0x1.d76a9565057a2p-625, 0x1.7f4225823f33dp-490, 0.0, 0x1.b4986f9863287p-85, 0.0,
     0.0, 0x1.e6b0aa2cd8ed3p-292, 0.0, 0.0, 0x1.47b6767291c35p-668,
     0x1.51c6f8043ee36p-391, 0.0, 0.0, 0.0, 0x1.eb5ae89e26993p-996,
     0x1.0a2eca039f875p-673, 0.0, 0x1.f3a211bda6f08p-687, 0.0, 0.0,
     0x1.6a1e6229c6f01p-847, 0x1.70a9679721fdep-757, 0x1.873d0d05aacf5p-169, 0.0, 0.0,
     0x1.20fbeabb4d842p-677, 0.0, 0x1.ab4bbcc8ed79p-311, 0x1.558d90c80721p-936,
     0x1.a27b9186af046p-696, 0.0, 0x1.8a0163c606096p-554, 0x1.1c0afcb3df637p-685, 0.0,
     0x1.2c2113e41ecd2p-822, 0x1.1a9c324d6c7c4p-21, 0.0, 0.0, 0x1.b162f9ba78c1ep-912,
     0x1.e45cb13e2f48ap-531, 0x1.16d95de532babp-681, 0x1.4da8d22ae0f5bp-441,
     0x1.cd483d50785c6p-781, 0x1.38047be8519d7p-833, 0x1.f9bfe7f4cb9d6p-209,
     0x1.75bef39be5db2p-325, 0.0, 0.0, 0x1.100a70b211d02p-442, 0.0, 0.0, 0.0,
     0x1.4ac2de60ce77dp-617, 0.0, 0x1.4e4d17c8cf8dp-622, 0x1.a874c21a97e8ep-503,
     0x1.9a7e2e06c85cfp-881, 0.0, 0.0, 0.0, 0x1.f8eb9da0e04bap-494,
     0x1.567d7ce25f06ap-932, 0.0, 0x1.f600d80d59a45p-299, 0x1.de58871e14d1fp-104,
     0x1.4ae9be11bd81dp-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.718a24924345fp-153, 0.0, 0.0, 0x1.f1eca49002ff9p-858, 0.0,
     0x1.7de0c15ba4074p-499, 0x1.1727b3482aa3cp-90, 0x1.a02406b447f2p-278, 0.0, 0.0,
     0x1.ee461d76c32fcp-168, 0.0, 0.0, 0x1.ea25dbb5d9e63p-211, 0x1.88bd7eb90799ep-368,
     0.0, 0.0, 0x1.3dc7309b8ceafp-978, 0x1.f84f401e0cc5p-137, 0x1.365012ed60e04p-659,
     0x1.83d2006dd3676p-98, 0x1.fad7365d7f8aap-530
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
            tmp1 = Sleef_expd2_u10kvx(tmp0);
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
    printf("Sleef_expd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
