/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd1_u35purecfma.c --function \
 *     Sleef_finz_cosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.490a4c8adbdf3p-352, 0.0, 0x1.d1c377d554917p-714, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.261c8b3db74b8p-324, 0x1.914dad55cfdb3p-356,
     0x1.3ab22a638b3adp-671, 0x1.ecbb33dd93586p-599, 0x1.9d5a77ca08027p-601, 0.0, 0.0,
     0x1.f634b319218e7p-300, 0x1.0c644bc78226bp-90, 0x1.9d1c908e3a165p-902,
     0x1.7c36b2382f5c2p-1008, 0.0, 0.0, 0x1.f73e05583fe26p-497, 0.0,
     0x1.552e2b68b32fdp-814, 0.0, 0x1.1aab4d1d6bb06p-1001, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fd68420b5c938p-146, 0.0, 0x1.ff1975a71f886p-88, 0.0, 0.0,
     0x1.4d84d43c482d7p-635, 0x1.032d5b1108f0dp-956, 0x1.b6caa2a1efe31p-497, 0.0, 0.0,
     0.0, 0x1.c0e246c42fe91p-36, 0x1.3e23c2de6adfcp-360, 0.0, 0x1.294a871a585ebp-54,
     0.0, 0x1.209f3afe08d7p-84, 0.0, 0.0, 0x1.3a3b3a9283155p-188, 0.0,
     0x1.34a2d9fa090c7p-552, 0.0, 0.0, 0x1.63499ef5dcd86p-162, 0x1.dbd55a771e78fp-810,
     0.0, 0.0, 0x1.dff47e144b3b5p-19, 0x1.476c0f59f4685p-639, 0x1.fe147cfa89cd7p-900,
     0.0, 0.0, 0.0, 0.0, 0x1.d7b11ed04655fp-808, 0x1.63dfe72cbabfcp-671,
     0x1.1e46449bbe467p-244, 0.0, 0x1.c99ff593172dcp-338, 0.0, 0.0,
     0x1.eba3c5916c892p-299, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7b8c66b2d239p-448,
     0x1.3e88e33b51cd8p-610, 0x1.83a09b3c06315p-348, 0.0, 0.0, 0x1.4c9c13e4d6f05p-249,
     0.0, 0.0, 0x1.04fef28a1d29p-681, 0.0, 0.0, 0.0, 0.0, 0x1.9b3bf7c498793p-619, 0.0,
     0.0, 0x1.1a64a53797d5fp-932, 0x1.40f7128a29cbfp-522, 0x1.e5ca361f8a884p-686,
     0x1.761c5045e9257p-294, 0.0, 0x1.1654a464e899dp-617, 0x1.09ecc210fdab2p-448, 0.0,
     0x1.672f10e39fe17p-648, 0x1.9e6339fdc198ap-766, 0.0, 0x1.fe561f813bbafp-771, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aff5343657facp-598, 0x1.4f010ef0f0a3ap-515,
     0x1.5f6b9eb4a776ap-286, 0x1.a74c37863b841p-304, 0x1.83a067c8bfa87p-1000, 0.0,
     0.0, 0x1.377fd931fdfc7p-620, 0.0, 0.0, 0x1.97c3184a7a0d2p-408, 0.0,
     0x1.a942f21ad12a2p-698, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d6e0cbe92acap-514, 0.0,
     0.0, 0.0, 0x1.167d11d2a69f9p-720, 0x1.99a0cc857ab05p-866, 0.0, 0.0, 0.0, 0.0,
     0x1.21eb3f67443a3p-620, 0x1.3accf44c1274bp-265, 0x1.f4fca0c9d1175p-432,
     0x1.aa5d8cf6c3faap-737, 0x1.82a56cafbb776p-705, 0x1.73e085f2a43e4p-216,
     0x1.2e1f9273da02p-203, 0.0, 0.0, 0x1.73c10cab71c6bp-511, 0.0,
     0x1.013ad0feff3e9p-324, 0.0, 0x1.17571e9d6d927p-401, 0x1.51d55242737d3p-655,
     0x1.97520e50f2d45p-1012, 0.0, 0.0, 0.0, 0x1.9811afe6c6a6cp-372, 0.0, 0.0,
     0x1.80f5f5630545bp-744, 0.0, 0.0, 0x1.607034fc1c05dp-200, 0.0,
     0x1.27bc9f8e0a825p-88, 0.0, 0x1.f07fa58afd607p-45, 0x1.8245aee255b02p-993, 0.0,
     0x1.35cd466bff8dfp-441, 0.0, 0x1.a5a3a7cc5badap-29, 0x1.662aae7abf3dfp-207, 0.0,
     0x1.04034254338e9p-599, 0x1.e270d92d5f956p-310, 0x1.45174ab68abc1p-651,
     0x1.fe62488bc68ap-284, 0.0, 0.0, 0.0, 0x1.2e8f218a4a0ebp-706, 0.0,
     0x1.525d9af93b3cap-271, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.069575a2272afp-23,
     0x1.d0797aebcb161p-1000, 0x1.eab7411040f98p-568, 0.0, 0.0, 0x1.4d1ac7749f6f1p-59,
     0.0, 0.0, 0x1.b612a1d30ef4ep-12, 0.0, 0x1.e02988961a45cp-588,
     0x1.178149d1a8949p-162, 0x1.77f63a790d64bp-330, 0x1.f3feace4dda21p-838,
     0x1.fff22d6a29b4bp-475, 0x1.8160247c92184p-596, 0.0, 0x1.3a294c4b8e9ecp-191,
     0x1.3e5259a55db61p-416, 0x1.faf6d3bccde15p-51, 0.0, 0.0, 0.0,
     0x1.abd0508283b03p-281, 0.0, 0.0, 0.0, 0x1.a830b8e21356cp-624,
     0x1.586892e83f87dp-690, 0.0, 0x1.ab1ab474c6c31p-311, 0x1.c97f419803c8ap-173,
     0x1.23f48a0264d3bp-526, 0x1.951ddecf25b24p-162, 0.0, 0.0, 0x1.319b7cd84c465p-401,
     0x1.11d869b062cf7p-289, 0x1.e6fe390095a63p-494, 0.0, 0x1.eae270325e988p-659, 0.0,
     0.0, 0.0, 0.0, 0x1.86fc29fde8a79p-628, 0x1.fe9f65f4c46c2p-586, 0.0, 0.0,
     0x1.0f056ac68220cp-285, 0x1.e1da5d96aea35p-267, 0x1.b9ec416aef2ebp-676, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b193e1d7279d4p-814, 0.0, 0.0, 0.0, 0x1.b54f6b9418106p-924,
     0.0, 0.0, 0.0, 0.0, 0x1.d35ae07daa92p-187, 0x1.293cd6ac4b1cfp-828, 0.0, 0.0,
     0x1.8cc584362a944p-150, 0.0, 0x1.f6a8a1001b2cp-234, 0x1.c9acd6a8e6d5p-612, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b993d1e24010cp-813, 0.0, 0x1.53efa57d1be2ep-827,
     0x1.e83f45117b13ep-91, 0x1.1f8c8b193a6e9p-456, 0x1.a8b36d9862352p-559,
     0x1.0b6863d59fec3p-901, 0.0, 0x1.6cef26541bdb3p-367, 0x1.3ac51e7a518a7p-827,
     0x1.078a6a8a4242bp-480, 0.0, 0.0, 0.0, 0.0, 0x1.a15f4c8e729afp-78, 0.0,
     0x1.846c3470e68f8p-862, 0.0, 0x1.f463943fcdd31p-260, 0x1.96b174273adp-397, 0.0,
     0.0, 0x1.cca5b131d6c75p-288, 0.0, 0.0, 0x1.96d5535841971p-67, 0.0, 0.0, 0.0, 0.0,
     0x1.eeb52d888fb4ep-719, 0.0, 0.0, 0.0, 0x1.f335f97ada26bp-730, 0.0,
     0x1.f4524acd7a094p-717, 0x1.d29d6acc66751p-72, 0.0, 0.0, 0x1.99ab3921d21e7p-417,
     0.0, 0x1.bdceb2e84dd47p-359, 0x1.6e1ea442adcd3p-803, 0.0, 0x1.478ad3b4e618fp-746,
     0.0, 0x1.15b68882ccea3p-389, 0.0, 0x1.18be4a3859ad6p-32, 0.0, 0.0,
     0x1.078326ad0276ap-178, 0x1.4af255728c6eep-82, 0x1.c49e3f0d22ce9p-944, 0.0,
     0x1.f59995dacffbfp-674, 0.0, 0x1.56a3ac3c30234p-545, 0x1.9c735ab2fc102p-954,
     0x1.84cf5318eceeap-983, 0.0, 0x1.e866f41b1dd11p-247, 0x1.fa70e1dc67358p-641,
     0x1.5307678251a64p-349, 0.0, 0.0, 0.0, 0x1.17052e336e7ecp-768, 0.0, 0.0,
     0x1.aae8860df87f4p-362, 0.0, 0x1.b5956b9aeb7dp-393, 0.0, 0x1.51019ff0014dp-89,
     0x1.9e1364988ae8cp-893, 0.0, 0x1.56dcd92bae701p-606, 0x1.9b6d3d0298964p-275,
     0x1.faadf73c8cffcp-953, 0x1.3d6b9a0479bc2p-395, 0x1.cfc082c4610f1p-754,
     0x1.8cf5a162806f3p-165, 0x1.c99cc5ab03823p-894, 0x1.3d9dd508b62c9p-437,
     0x1.f24b54ee1de23p-711, 0.0, 0x1.1512f7f9c6584p-293, 0.0, 0.0,
     0x1.eba86a42f267ep-280, 0x1.9b1ab284f4143p-64, 0.0, 0x1.561d2722ea38ap-568, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b6b1a35cb874p-546, 0.0, 0.0, 0x1.d9b9bb6ed1144p-20,
     0x1.a2b1179abfb75p-191, 0.0, 0.0, 0x1.3d91a0f331649p-228, 0x1.3969e90d80237p-995,
     0x1.90f594ad12ffdp-63, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.157fcc6dc72a5p-452,
     0x1.437c4e7c2e99dp-412, 0.0, 0.0, 0x1.e67a1a18c075ap-580, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4dd0c9592e973p-391, 0x1.d9f6d3bd5cfd6p-519, 0.0, 0.0, 0.0,
     0.0, 0x1.be59f2120ff85p-530, 0.0, 0.0, 0x1.8912e22c880bep-803, 0.0, 0.0, 0.0,
     0x1.a0f323eaa431p-752, 0x1.7d8bcea77e99cp-79, 0x1.6aadca4e837d1p-951, 0.0,
     0x1.7c0fb5b0e257ep-8, 0x1.3295d1876e021p-182, 0x1.4f38a0b31ac5ap-317, 0.0,
     0x1.7db12bfbcac8bp-965, 0.0, 0x1.1d8f264d596ap-720, 0.0, 0x1.85b83fb92efadp-497,
     0x1.4365f745fed6cp-864, 0.0, 0.0, 0.0, 0.0, 0x1.21dd94123a2d3p-574,
     0x1.3cb8a07ec1931p-436, 0x1.b3374d904aa15p-492, 0.0, 0x1.ea48eeb74e38cp-154,
     0x1.2211a4246872cp-30, 0x1.60b66ea2012eep-557, 0.0, 0x1.60c6f825f807cp-895,
     0x1.8ffafdfb1d38ap-871, 0x1.12fa6f041c83p-978, 0.0, 0.0, 0x1.0cb877a0c193ep-799,
     0x1.c70a2ead98956p-729, 0x1.798c7f030eca7p-549, 0.0, 0.0, 0.0, 0.0,
     0x1.ca7758d50ec03p-458, 0.0, 0x1.6495c39e34052p-501, 0.0, 0x1.03be2027adb55p-818,
     0x1.837738dd02852p-893, 0.0, 0x1.99e69f898050bp-874, 0.0, 0x1.c14bda925ffddp-26,
     0x1.9ccb9685829e2p-693, 0x1.6442a26594223p-163, 0x1.65519ace6d902p-274, 0.0,
     0x1.d2a3e5c529375p-431, 0x1.8cfe3457612e3p-1, 0x1.4339277574bd9p-176, 0.0, 0.0,
     0.0, 0.0, 0x1.205c5d172ca1fp-135, 0x1.0b8f0153bd503p-400, 0x1.380b9f7122631p-466,
     0.0, 0.0, 0x1.053049a0e6095p-611, 0.0, 0.0, 0x1.0b768eefd41cep-632, 0.0, 0.0,
     0x1.962df385af862p-106, 0x1.04bfdd7735acp-514, 0x1.0f18951ee3a5p-605, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b6b974a5c38a1p-877, 0x1.43423920a5f8ap-347, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a3782fec2991bp-350, 0x1.bfe29a1ff4946p-889, 0x1.3f7dd9d45700ep-120,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9eeb3a19d1d94p-245, 0x1.66621c583a60dp-972,
     0.0, 0.0, 0.0, 0.0, 0x1.d325601b0ec8p-185, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca756b7eca355p-525, 0.0, 0x1.d53bcd21913afp-101, 0x1.bc98df7aab4e6p-240,
     0x1.f73b1260c8a7cp-579, 0x1.15d009f148a75p-977, 0x1.ed493d6e99cf8p-494, 0.0, 0.0,
     0x1.7771c726357f2p-425, 0x1.f99eb50aa3f2dp-510, 0.0, 0.0, 0x1.773a1ec6a1b42p-748,
     0.0, 0x1.580f47c08707fp-765, 0.0, 0x1.1f5693366f2e1p-60, 0.0, 0.0,
     0x1.58d7bedb15bfap-679, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.658294f4d1289p-961, 0.0,
     0.0, 0x1.c7163a7b8f5dep-418, 0.0, 0.0, 0x1.6b88c9ab06f55p-257,
     0x1.8f5bcdc6ff1e9p-689, 0.0, 0.0, 0x1.761342a18e0b2p-960, 0x1.3892701725e47p-408,
     0x1.5b3ca25f1e84ap-451, 0x1.10fed981f4c66p-813, 0.0, 0.0, 0.0, 0.0,
     0x1.10e3bc305cb2bp-599, 0.0, 0x1.841cd710a3a1ap-789, 0.0, 0x1.9a76c0cb8fdf2p-110,
     0x1.a84677d35539fp-133, 0x1.8d14f0914e6bap-892, 0x1.66e8052d5878ep-321, 0.0,
     0x1.d39fd148d8f08p-114, 0x1.d3fb936982d79p-714, 0x1.bbe7b9faf3c23p-363,
     0x1.5013ee90f5e4ap-750, 0.0, 0x1.8252059b8c223p-505, 0x1.921d09003376cp-795,
     0x1.5cd0fd31b8307p-596, 0.0, 0.0, 0.0, 0x1.eec5aa0f78ea6p-841,
     0x1.a5e3a7f4e0363p-295, 0.0, 0.0, 0x1.d789718d5d056p-52, 0x1.ea6de5047d3e7p-882,
     0x1.537fa4b1d7fd4p-781, 0x1.f835ba972ad2ap-460, 0.0, 0.0, 0x1.e64bf6b6885fep-593,
     0x1.21ec617ac7faep-618, 0.0, 0.0, 0x1.1516805daeebbp-67, 0.0,
     0x1.b5ba7e99787bcp-225, 0x1.734fd76c3a8d1p-962, 0x1.97f65faad21fbp-950, 0.0, 0.0,
     0x1.025fcf6ee19adp-674, 0x1.9d262337800efp-308, 0.0, 0x1.cf39c655700a8p-613, 0.0,
     0x1.35130f534fef1p-618, 0x1.dae98e7e13d9dp-217, 0x1.7d3c6b663c8f9p-722, 0.0,
     0x1.ee6b52586b1e6p-59, 0.0, 0x1.56c8f37632e66p-215, 0x1.11ebf081c4109p-425,
     0x1.1e01dd77b2cc7p-723, 0.0, 0.0, 0x1.d84ca1e3def07p-794, 0x1.f2389b80e165ap-213,
     0x1.771fffc8c1a7bp-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1720aa6c65e5p-519,
     0x1.576ff2f4ee303p-359, 0x1.57c652607cbfap-138, 0.0, 0.0, 0.0,
     0x1.3cd6438d9dc2fp-805, 0.0, 0.0, 0x1.400fad14da9ebp-636, 0x1.d64ad6e9cc781p-486,
     0x1.48b750cb9dd8p-114, 0.0, 0x1.14dc80b995925p-406, 0x1.175621f8c9a91p-451,
     0x1.da4d211bfbf08p-762, 0x1.fb571e9c35851p-655, 0x1.8bd25493fa9b1p-798,
     0x1.be0640f60d6cep-153, 0x1.aaa20b58506d3p-392, 0.0, 0.0, 0.0,
     0x1.327289db9c971p-564, 0.0, 0.0, 0.0, 0x1.c418b95b5a6fp-259,
     0x1.66d9f3c4da6ddp-912, 0.0, 0.0, 0x1.99e87ca40c427p-841, 0x1.8b9af3e7b43eep-728,
     0x1.530cbb501aef8p-125, 0x1.f50e4f0611db9p-104, 0x1.29d8bd5001325p-228,
     0x1.4130dc41c1ff4p-363, 0.0, 0x1.e23d5e269a412p-927, 0.0, 0.0,
     0x1.c756a1c599ca2p-362, 0.0, 0.0, 0.0, 0.0, 0x1.00372720bc64cp-62,
     0x1.b18c32f8f386ep-409, 0.0, 0x1.07eb28f38f714p-1015, 0x1.f9d2cbe6f2012p-346,
     0.0, 0x1.7dd1280fed1c2p-229, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b93966f32a7fp-192, 0x1.bd5a033f2a9f6p-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d59b55142f0ep-447, 0.0, 0.0, 0.0, 0x1.4e810ce138d82p-937,
     0x1.feefe2f985ae6p-41, 0x1.0f20c5622c8c4p-36, 0x1.2977dd541408p-229, 0.0, 0.0,
     0.0, 0x1.c77d9d4e61fp-201, 0x1.be45e09c36194p-617, 0.0, 0.0,
     0x1.77603dfad6c4dp-267, 0x1.b62fb2a0b7127p-576, 0.0, 0.0, 0x1.f1db3643abe64p-861,
     0.0, 0.0, 0.0, 0x1.74322232a6b9p-934, 0x1.f6ff6623161f7p-908,
     0x1.fe975a29677ffp-602, 0.0, 0x1.51c330a3c30d8p-317, 0.0, 0x1.31f26f6ad4eb3p-588,
     0.0, 0x1.f1cbe7a259a41p-93, 0x1.2ff80757a1704p-422, 0.0, 0x1.cf00578faa961p-967,
     0.0, 0x1.4e3762e6750a4p-523, 0.0, 0.0, 0.0, 0x1.3728f23c0155ap-127,
     0x1.d3bdad2ab19f1p-612, 0x1.2cd7b93fc4e4fp-964, 0.0, 0.0, 0.0,
     0x1.98d6750248ca3p-465, 0x1.3861cab81158fp-972, 0.0, 0x1.26c7fe967334p-249, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2b637bd22efp-233, 0.0, 0.0,
     0x1.9e41decb1f5aep-532, 0.0, 0x1.19d96a99d1baap-577, 0x1.9f525f82f236ep-600,
     0x1.4b561d28985fep-900, 0x1.c9af7f7532551p-231, 0x1.cb025ff96884ep-649, 0.0, 0.0,
     0x1.8dc93e6506269p-1008, 0x1.712e7e2781d75p-259, 0x1.751490b7b7354p-421,
     0x1.11d497fed8db2p-120, 0.0, 0x1.fc62dcfb37b13p-232, 0x1.157ae21159fa3p-385,
     0x1.516f67b4b68f1p-937, 0x1.53df192dea4c9p-818, 0.0, 0.0, 0.0,
     0x1.e676ecc0df444p-602, 0x1.11600d8c4adccp-372, 0.0, 0x1.8820ff6109e5bp-292, 0.0,
     0.0, 0x1.16d142f91c39dp-802, 0.0, 0x1.5820567123201p-937, 0x1.6e8a36bce32b6p-635,
     0x1.92d730a801155p-1012, 0.0, 0x1.4b0534060308fp-425, 0x1.fead275e4a297p-431,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.154865d5ab6f4p-394, 0.0, 0.0,
     0x1.b2a8f7ff6468dp-349, 0.0, 0.0, 0x1.fa1ad648345fep-312, 0x1.02680326c9af4p-623,
     0x1.fadcb2e40bd6dp-4, 0x1.d34aba9e3b061p-48, 0x1.7f8648aa7357dp-18,
     0x1.cc9f1dd5ce4aap-167, 0x1.046e86a4313d5p-433, 0.0, 0.0, 0.0,
     0x1.f0ecebd40ab4fp-791, 0.0, 0x1.04d79d2cae37fp-606, 0x1.f8fcece617f3fp-55, 0.0,
     0x1.db4ece42ebb66p-887, 0.0, 0x1.4ae3ddd269d2ep-656, 0x1.485d8da15ee22p-273,
     0x1.548910c51a38bp-474, 0.0, 0x1.520bcf2b2fd05p-704, 0x1.2ea7fd2d98c45p-704, 0.0,
     0x1.7da5fca87da86p-358, 0x1.efafe62ea4cc7p-816, 0x1.4fafc1ceda104p-286, 0.0, 0.0,
     0.0, 0x1.8d04f3af0a58ep-696, 0.0, 0.0, 0x1.675ac15d291fbp-957, 0.0, 0.0,
     0x1.3c364663a5ff2p-683, 0x1.7c8227fbd51e2p-621, 0x1.e1cb6d2655223p-430, 0.0,
     0x1.9d486de060de3p-527, 0x1.1ff5f548dfa9p-328, 0.0, 0x1.a8af6c03dfd1fp-546, 0.0,
     0.0, 0x1.39e779d482fcep-345, 0.0, 0x1.3d9cbf87dc019p-107, 0x1.a545785f8760fp-747,
     0x1.a9c1965e6acdap-941, 0x1.b30a9514bd462p-576, 0x1.1b931f48f34a6p-631, 0.0, 0.0,
     0x1.7f1ceb0a023efp-285, 0.0, 0x1.c366ddd26b7adp-124, 0x1.23736a2f82557p-950, 0.0,
     0x1.d1ea60328f672p-895, 0x1.29bb1ebebbb07p-491, 0.0, 0.0, 0.0,
     0x1.b4e4ce3aa3cd9p-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5189c3f414f2dp-528,
     0.0, 0.0, 0.0, 0x1.78fd0b06c27d8p-947, 0x1.cea356836a5a6p-903,
     0x1.3e5035deb48bdp-818, 0.0, 0x1.74c6d12483d16p-829, 0.0, 0.0,
     0x1.b70b25c2ab156p-108, 0x1.79967a48c5299p-200, 0.0, 0.0, 0x1.f1f67871b992ap-138,
     0.0, 0x1.35f6f3bde4e76p-988, 0x1.1fac8b9d15c7ep-94, 0.0, 0.0, 0.0, 0.0,
     0x1.53e73734b86d9p-58, 0.0, 0x1.251c90d2ecac6p-180, 0x1.2b6b2b2db8d67p-478, 0.0,
     0x1.b9487ab6f423ep-199, 0.0, 0x1.6cbfdb26973c5p-468, 0.0, 0.0,
     0x1.b7cd7f27629f9p-332, 0x1.0d108c693604cp-492, 0x1.b102e01b325bcp-90,
     0x1.7657d2de59befp-86, 0.0, 0x1.5ce5876a7516bp-542, 0x1.ce22878d32e06p-681,
     0x1.d79450723bca4p-238, 0x1.cbfe3c6de0bf4p-144, 0x1.b4409e8ba53efp-542, 0.0, 0.0,
     0x1.768610b80937fp-769, 0x1.df208c26d452fp-260, 0.0, 0.0, 0x1.073cb30ecdc34p-43,
     0.0, 0.0, 0.0, 0x1.5c77e44bfbap-613, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35e97daadd0d2p-954, 0x1.c412183c6a9eap-642, 0.0, 0.0, 0x1.75c7734ab6028p-837,
     0.0, 0x1.ad7480a18c373p-755, 0.0, 0.0, 0x1.b1fadb297fe48p-278,
     0x1.9ea76e77b0986p-409, 0.0, 0x1.b509928848b9dp-474, 0x1.e8ac329324b0dp-252,
     0x1.5deb5bf74ec1cp-694, 0.0, 0x1.96968547e4925p-516, 0.0, 0.0,
     0x1.963dfc2f69b96p-347, 0.0, 0.0, 0x1.b3aa53288164p-643, 0.0, 0.0, 0.0,
     0x1.5c703d85c6a18p-456, 0.0, 0x1.92d4e305c42d2p-173, 0.0, 0x1.63c1fc2c5cdf4p-27,
     0.0, 0.0, 0.0, 0x1.92fb6a21f482ap-259, 0x1.af1efcb46aee8p-394, 0.0,
     0x1.b3a4ba1ac4af2p-469, 0x1.adea8ddecd9f6p-303, 0.0, 0.0, 0.0, 0.0,
     0x1.703e14c45b72ap-49, 0x1.4628f158a73fbp-954, 0.0, 0.0, 0x1.9d407462e38e8p-751,
     0.0, 0x1.a8923dace7548p-606, 0x1.b1a294270bdf2p-710, 0x1.698d570abd943p-967, 0.0,
     0x1.9aa9f54e5c628p-413, 0.0, 0.0, 0x1.dd64b2cfd2614p-964, 0.0,
     0x1.734dbd2b374a1p-255, 0x1.e168bb80d0b9p-344, 0x1.c6330ca9ee695p-496
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_cosd1_u35purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_cosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
