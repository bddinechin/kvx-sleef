/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind2_u35avx2128.c --function Sleef_finz_sind2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.883b08431381cp-58, 0.0, 0.0, 0.0, 0x1.94891db417e79p-620,
     0x1.1999912775594p-842, 0.0, 0.0, 0.0, 0x1.81edebef8afacp-678, 0.0, 0.0,
     0x1.b15c7b988625p-805, 0x1.1663f353a1bc9p-728, 0x1.d023002929313p-763,
     0x1.ff5a8b606a9c7p-293, 0.0, 0x1.33f1359fd6896p-794, 0x1.8e277700448ffp-100, 0.0,
     0x1.d1feb45b556fep-146, 0x1.1b2b7ed934bf3p-1017, 0x1.a150f1237b92fp-112,
     0x1.1f795f66a18ffp-267, 0x1.75a839ba0345cp-449, 0x1.1f5c8142dde09p-210, 0.0,
     0x1.92985ad9e2f73p-489, 0x1.79dbbd3d13ba2p-838, 0.0, 0.0, 0.0,
     0x1.94f883c84770dp-715, 0.0, 0x1.0ae7fa2f96bafp-303, 0.0, 0.0,
     0x1.12232ecb1c5b7p-783, 0x1.27666c1e392afp-719, 0x1.a627a8ce79a49p-481, 0.0, 0.0,
     0x1.de3c0e1d3e6fap-320, 0.0, 0.0, 0.0, 0x1.bdf5c62fc6f58p-726, 0.0, 0.0, 0.0,
     0.0, 0x1.4c4f62db9fc5p-898, 0.0, 0x1.ba38daeafc266p-598, 0x1.93c6da7dfb511p-434,
     0x1.56f399415ce89p-720, 0x1.dc488a229d4fbp-982, 0.0, 0x1.26923850d9306p-779,
     0x1.bbd2eeed9ce4cp-112, 0.0, 0.0, 0x1.1ff7a3a2c9eeep-310, 0.0,
     0x1.bcb400b455596p-137, 0x1.ea13cfd1dedeap-988, 0x1.d92dba2c290efp-215, 0.0,
     0x1.b654efc9e4f39p-401, 0.0, 0x1.858d35e5a2e79p-328, 0x1.15c237320095fp-443,
     0x1.53e0a4ba576f9p-233, 0.0, 0.0, 0x1.9aa26c955e9ffp-703, 0.0, 0.0,
     0x1.afda6e89a44d8p-126, 0.0, 0.0, 0x1.18ee8c389f866p-779, 0.0, 0.0,
     0x1.5c59c3fe77b02p-212, 0x1.c099996ef91c2p-677, 0x1.24064dc81d4bbp-638,
     0x1.2fd57b84cc3e7p-797, 0x1.061d1ca65ba7cp-660, 0x1.9f0587eaa8edbp-346, 0.0,
     0x1.7b333985b0131p-576, 0x1.d5a8c00a580a4p-779, 0.0, 0x1.1b4f859764db1p-853,
     0x1.cce76805ecfffp-894, 0x1.2b3b831744d7dp-276, 0.0, 0x1.16c06f5e6a6fbp-174, 0.0,
     0.0, 0.0, 0x1.5c0a0ae4dab58p-412, 0x1.b3ec174aa32b9p-601,
     0x1.ee4b4cc40629ap-1010, 0x1.ef542b36c6b31p-10, 0.0, 0x1.08541b186f2e6p-578, 0.0,
     0x1.a892461eb6297p-219, 0.0, 0x1.89497c920ec52p-850, 0x1.dfb2ed06bf465p-606,
     0x1.0ba2ac167de5fp-747, 0x1.d07a6ad6b9cbfp-944, 0.0, 0.0, 0x1.18d9a2834d7cbp-325,
     0x1.8daf662030933p-327, 0x1.b321a2607afffp-944, 0.0, 0x1.a73d536648654p-10, 0.0,
     0.0, 0x1.04a7af427cc9cp-926, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d96d689137875p-659, 0x1.1055075841369p-662, 0x1.3543109193cd7p-613,
     0x1.79f2950e85ed5p-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ed513b5e70dep-218,
     0x1.7411949dafc48p-65, 0.0, 0x1.07dde01137b45p-255, 0x1.9f9dfa1234b7bp-531, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cfbc177c8895p-583, 0x1.7df676a9bcd89p-503,
     0x1.5ad91c031e66dp-235, 0x1.d517fee408f6fp-48, 0.0, 0x1.2c5089c5e0931p-331,
     0x1.1ca9d193317ecp-67, 0.0, 0x1.19d4d45e979eep-263, 0.0, 0x1.823b5ca22231ap-460,
     0.0, 0.0, 0x1.b0a9fec455891p-820, 0.0, 0.0, 0.0, 0x1.413fcb8185cacp-208, 0.0,
     0x1.fa82c190e75eap-883, 0x1.fe7f23b3f293ap-591, 0x1.eacec76a81197p-493, 0.0, 0.0,
     0.0, 0.0, 0x1.84fab26ef1a84p-502, 0.0, 0.0, 0.0, 0.0, 0x1.791006022e2c1p-772,
     0.0, 0.0, 0x1.d7f7097ac5639p-601, 0.0, 0x1.511aff0c909eep-161, 0.0,
     0x1.d83d0d5efe676p-107, 0.0, 0x1.cdfdfe30ab2d7p-970, 0.0, 0x1.5fef95dd1e293p-264,
     0x1.d73c83e220963p-843, 0x1.eeb3759ca33d3p-708, 0x1.9f95bba26f104p-980, 0.0, 0.0,
     0.0, 0x1.f6eb5e506bfcap-626, 0.0, 0x1.21334e9eed659p-411, 0.0, 0.0,
     0x1.53ed5c8d26675p-736, 0x1.4fae809bbe858p-263, 0x1.c99df9e2b174fp-708, 0.0,
     0x1.0656e78617c61p-234, 0.0, 0.0, 0x1.e534b3a07e43cp-944, 0.0,
     0x1.bb81a4fdb15f3p-637, 0.0, 0x1.e89696d288693p-988, 0x1.838cbe8428bd3p-425,
     0x1.1a7112bf9f11bp-493, 0.0, 0x1.bb5038406dcbcp-947, 0x1.a8e93bdd5018p-779, 0.0,
     0.0, 0.0, 0.0, 0x1.f9ee300ca44dcp-67, 0x1.9d1095123042ep-601, 0.0, 0.0, 0.0,
     0x1.9d4fc0e5f1af4p-606, 0.0, 0x1.06712fea278dep-606, 0.0, 0.0,
     0x1.f4ebea20281f4p-407, 0x1.7d1a87e376c27p-575, 0.0, 0x1.8b1c75674cc7fp-834,
     0x1.22f856b8499bcp-574, 0x1.303ce22a4ec32p-251, 0x1.1f35b770eb53cp-132, 0.0,
     0x1.559489dd233f7p-287, 0x1.76674dce7d98fp-721, 0x1.9c24d7f16d225p-13,
     0x1.cd7259abebbdap-441, 0x1.977b1c26633cep-87, 0.0, 0x1.be97a97595b04p-553, 0.0,
     0x1.7d5d3c20f962p-461, 0x1.80a8e054df9bcp-272, 0.0, 0.0, 0.0,
     0x1.d4c019e2061a1p-409, 0.0, 0x1.2e87fecdbd4d7p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.7f864047130a7p-130, 0.0, 0x1.86a1fb09e2062p-318, 0.0, 0x1.9dc9662407795p-574,
     0x1.4a98383c49f18p-806, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56561a3a02546p-61,
     0x1.25f65e9390173p-802, 0x1.325ee66e40e24p-13, 0.0, 0.0, 0x1.4a96107b8e454p-129,
     0.0, 0x1.8d9d0ce05c0ccp-917, 0.0, 0x1.e0cf2b8c112afp-258, 0.0,
     0x1.7f5b8acd9163cp-166, 0x1.613cf6e83365ap-486, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b7ea9228ec219p-816, 0.0, 0.0, 0.0, 0x1.de67cf307ac9dp-661,
     0x1.70b3eaea5aa2bp-762, 0x1.e80fb00eb6a4cp-77, 0x1.2fe4acf55087dp-802, 0.0, 0.0,
     0x1.dbf9c1ad0e2cep-289, 0.0, 0x1.7614a077321aap-151, 0x1.8ac70c5cf5f53p-399, 0.0,
     0.0, 0x1.a596be8e1cc47p-33, 0.0, 0.0, 0.0, 0.0, 0x1.94726dd9cf7a1p-365,
     0x1.5c30338b7fbb9p-121, 0.0, 0x1.03463435f69d8p-986, 0x1.95eea4b80a324p-90,
     0x1.d7396783a3p-819, 0.0, 0x1.c9c8da44d3564p-278, 0x1.043a7ca02febap-619,
     0x1.bcf4e1aaafa82p-892, 0.0, 0x1.374fbe4c63806p-776, 0.0, 0.0, 0.0,
     0x1.22521652fc9b6p-436, 0x1.3a4881aaafa74p-362, 0.0, 0x1.f7168c306b889p-690,
     0x1.ce1a74810976ap-964, 0x1.28b99ef9cc6d5p-755, 0x1.4682a18c2184fp-49, 0.0,
     0x1.395e2a51127f3p-129, 0x1.837fa10a5adccp-529, 0.0, 0x1.649a2dbb6b993p-301, 0.0,
     0x1.fe18de28ed652p-172, 0x1.31266c3b15c4ep-560, 0x1.ccf184d14a9cdp-940,
     0x1.51cde4cdbbce7p-291, 0.0, 0x1.c578e089ff93bp-331, 0x1.a6800affbe69ap-374, 0.0,
     0.0, 0.0, 0.0, 0x1.b084d2a1becd5p-892, 0x1.592e72e3a037dp-164, 0.0, 0.0,
     0x1.89b4482e309d2p-221, 0.0, 0.0, 0.0, 0.0, 0x1.5f4db2b1da66ep-770,
     0x1.31254bbdb6974p-265, 0x1.55677a66caeecp-431, 0x1.b67b79ac6c6e2p-964, 0.0,
     0x1.9915a1ee3acf4p-701, 0x1.a8dcc076bc825p-125, 0x1.6bcc62137c223p-928, 0.0, 0.0,
     0x1.201ec1610f97fp-722, 0x1.037fd5d774bf3p-707, 0.0, 0x1.774e3fc1ea9a2p-426, 0.0,
     0x1.8f0fbff915bf7p-123, 0x1.cdbfc9ab1d9bdp-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.573dd9a8c336dp-926, 0x1.a67810ee14398p-125, 0.0, 0.0, 0.0,
     0x1.52bc3fb9766efp-805, 0.0, 0x1.ae7273fb373f4p-925, 0x1.b232ab4538e27p-616,
     0x1.a2fe5539eb7f2p-300, 0x1.47a9b8283a01bp-332, 0x1.c65b0e4805c7ap-145, 0.0, 0.0,
     0.0, 0.0, 0x1.7ebdeb5c5f83p-630, 0.0, 0x1.612213919159ep-914,
     0x1.d811f8bc1e1d5p-428, 0x1.f7729723fc81p-929, 0x1.e5482ca592638p-171,
     0x1.36848ee0a5d2cp-748, 0.0, 0x1.7369132ba2d11p-202, 0.0, 0.0, 0.0,
     0x1.3bef584d8e70bp-454, 0.0, 0x1.ba7a2ed024c41p-440, 0x1.92ad430ce5e4dp-345,
     0x1.c0ea78568c789p-474, 0x1.d656d5477f801p-164, 0x1.75e62ab528853p-45,
     0x1.468f8d955803cp-913, 0x1.4f0699a276952p-842, 0.0, 0.0, 0x1.7a4b788813458p-350,
     0.0, 0x1.7eb2d5562e347p-515, 0.0, 0x1.4d54ef82b43f8p-414, 0x1.c51a9f87c5007p-332,
     0.0, 0x1.73937c6256b5ap-230, 0.0, 0.0, 0x1.ce620f86148d5p-432,
     0x1.98ccfb2240fedp-199, 0.0, 0.0, 0x1.b1e4891d03fc5p-150, 0.0,
     0x1.94a8f041555d3p-190, 0x1.2fbcc94181474p-569, 0x1.299a8e417c495p-838,
     0x1.f9854675df2fap-587, 0x1.f7846bf264bd6p-811, 0.0, 0.0, 0x1.1fedca90d1c7cp-744,
     0x1.ec1e960898edp-987, 0x1.8447f689355ddp-245, 0x1.494e07fe4ae2ep-359,
     0x1.143a555cc95a3p-398, 0.0, 0x1.8d640811bbd53p-478, 0.0, 0x1.ed3e32b114ac8p-492,
     0x1.8ffd12b94466bp-719, 0x1.04598f53d8862p-940, 0x1.71cfb2095f861p-849, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.340808560c49bp-479, 0x1.8ec14bbe681adp-583,
     0.0, 0.0, 0x1.095d88efd1e79p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a95bffebd13ep-651, 0x1.f6509cca2a0eep-360, 0x1.3355d5310eb7dp-486,
     0x1.4e8ba49d190e4p-342, 0.0, 0.0, 0.0, 0.0, 0x1.65ff49ba2ce39p-340,
     0x1.9bd298fb9b346p-816, 0.0, 0x1.0dc92bee337a5p-618, 0x1.eb1e097afb974p-575,
     0x1.cce316e8ee6c3p-973, 0.0, 0x1.0799b12e71d37p-330, 0.0, 0.0, 0.0,
     0x1.b67a0db9d9372p-360, 0x1.75bea03a825aep-871, 0x1.774bcad0deb9dp-214,
     0x1.e4f175ab82993p-504, 0x1.0987160a89dc5p-104, 0x1.5e1002da3e62p-189, 0.0,
     0x1.ab873be3f156bp-382, 0.0, 0x1.f672d8c73f5b1p-263, 0.0, 0x1.ea8b35ac5d0f6p-259,
     0.0, 0x1.d0b472e017c9p-678, 0.0, 0.0, 0x1.ec8532706f5b5p-437,
     0x1.630099cb70036p-700, 0.0, 0x1.46c49afc62df2p-100, 0.0, 0.0, 0.0,
     0x1.248dbeaef673ap-753, 0.0, 0.0, 0x1.2014058822f11p-1017,
     0x1.6883c75034d25p-421, 0x1.56183cd81d698p-474, 0.0, 0.0, 0x1.05c6dd4648f4dp-716,
     0.0, 0x1.a53e15b8103ddp-936, 0x1.a44398a38888ap-26, 0x1.4f3015d4eea27p-547,
     0x1.763ca0f1aa5c7p-115, 0x1.c94049b08e5ffp-45, 0x1.d4038de977f8cp-380,
     0x1.f16fa5699ac11p-942, 0x1.c566ca14ce04ep-316, 0x1.f5314025de616p-366,
     0x1.8a32080d8f074p-341, 0x1.14dad70ea6eadp-265, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c1648e358d73p-329, 0x1.a1314509fda1ep-872, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af989100a4277p-369, 0x1.7b74067c6f8fbp-907, 0x1.dc47eef6e86ddp-491,
     0x1.dcfa956953813p-1001, 0x1.66a5ef66c4d55p-375, 0.0, 0x1.1e194114d6d7dp-72,
     0x1.c48101f6266b7p-729, 0x1.e2653b4c35997p-443, 0x1.feb80c7dc901ap-732,
     0x1.2d05b7c0a91e5p-666, 0x1.4534c1a34d047p-441, 0x1.2784ec0521993p-364,
     0x1.c52be84f085fbp-240, 0.0, 0.0, 0.0, 0x1.ab40486c35d56p-850, 0.0, 0.0, 0.0,
     0x1.8d344304d1c5fp-432, 0x1.0412ed402b0cdp-845, 0.0, 0x1.ed4b803e27cfdp-322, 0.0,
     0x1.fdd28abf384f1p-506, 0.0, 0x1.b493b343bbd0bp-341, 0x1.2a1c0438bf71fp-227,
     0x1.4165174c87d48p-114, 0.0, 0x1.a5fdd2e2f0a03p-489, 0x1.4621567e35e96p-984, 0.0,
     0x1.57839c0b3d1bdp-218, 0x1.3fa6ee98825f7p-47, 0.0, 0x1.ad15908ba63e1p-32, 0.0,
     0.0, 0x1.290438062a86cp-271, 0x1.ab172f7c3de8p-659, 0x1.a23a3cfd3de67p-495,
     0x1.5387ead48bb4fp-86, 0.0, 0.0, 0x1.55d8fc287982cp-425, 0x1.da56e8adeb11cp-678,
     0.0, 0x1.f4504b01ebb73p-1011, 0x1.4db44ecd5376bp-781, 0x1.1cae0deb1214p-684,
     0x1.3f22a65a92e83p-745, 0x1.a6b1642d0b90ep-1010, 0.0, 0x1.73c9c2df85bb4p-204,
     0x1.81fd73ff6d419p-492, 0x1.c251b3455434bp-429, 0x1.556bca1762ae8p-471,
     0x1.9b86d724ffa3fp-884, 0.0, 0x1.1e78c41cccad5p-925, 0x1.e521abfe6d485p-471, 0.0,
     0.0, 0x1.0b4c9d454e4cfp-963, 0x1.f1c087e19b962p-344, 0x1.ff670307228abp-248, 0.0,
     0.0, 0x1.d03dc4fab4493p-707, 0x1.c6082ac479b8bp-931, 0x1.5536fa3c97defp-790, 0.0,
     0x1.bb14fcf07e539p-976, 0x1.2bf1b51f0b6c7p-518, 0x1.86da77ee18df6p-6, 0.0, 0.0,
     0x1.c87c280516369p-833, 0x1.3b9b065f1eec8p-372, 0.0, 0x1.620f46eef30dep-96, 0.0,
     0x1.6f1992054292ap-282, 0.0, 0.0, 0x1.f8a76eb78f988p-441, 0.0, 0.0,
     0x1.94693bf9f3139p-1013, 0.0, 0x1.05cf09aa39146p-9, 0x1.e3742a9546cb2p-172, 0.0,
     0.0, 0x1.d5b636190209fp-38, 0.0, 0.0, 0.0, 0x1.558dff4861b29p-282,
     0x1.6877fd6571453p-911, 0.0, 0x1.f1bdd0020dac5p-128, 0x1.4a45ebf381566p-398,
     0x1.18d5b107b3578p-244, 0.0, 0.0, 0x1.faa475afe79efp-166, 0x1.49130dc20234bp-304,
     0x1.30720d69873c8p-335, 0x1.48f508edb3583p-88, 0x1.72b32d991e2fp-822, 0.0, 0.0,
     0x1.5446515f8f0edp-771, 0x1.b8737c0cda7cbp-853, 0.0, 0x1.56d7c6d08dcf6p-545,
     0x1.0b1e47bfad61ap-577, 0.0, 0.0, 0x1.f296fa3ef124ap-636, 0x1.8af8460aa8432p-933,
     0.0, 0.0, 0x1.6a2e8d2853d19p-644, 0x1.03b3f34d36521p-65, 0.0, 0.0, 0.0,
     0x1.0a9e0450641aep-864, 0x1.5eae632ef9a69p-536, 0x1.36a305c7ea0dfp-444,
     0x1.ab105163e5b64p-633, 0x1.5ba64322c78efp-997, 0x1.7b545116a24d7p-545,
     0x1.c628203c24319p-283, 0x1.296742fdcc4fcp-622, 0.0, 0.0, 0x1.f6ea59c0b1bcep-390,
     0.0, 0x1.25da26cfa92d1p-299, 0x1.85dc288ef64fp-219, 0.0, 0.0,
     0x1.a4e33146e991ap-45, 0.0, 0x1.24695a2e33e35p-793, 0x1.d82417ac6087ap-414, 0.0,
     0x1.4dac8e0a1709ap-556, 0x1.c492f64882c31p-789, 0.0, 0.0, 0.0,
     0x1.961c4640bc0eep-74, 0.0, 0x1.415451906ec2bp-551, 0.0, 0.0,
     0x1.01a06e9171361p-195, 0.0, 0x1.e582a3619aa8p-347, 0x1.21ba68fcd9196p-706,
     0x1.5bc05f1416a1bp-727, 0.0, 0.0, 0x1.c772327558a35p-555, 0x1.f8121168f7835p-569,
     0.0, 0.0, 0x1.558f57b289274p-356, 0x1.a611e24538257p-480, 0.0,
     0x1.7f128bf7a3409p-54, 0x1.dc0b4765d6cap-696, 0x1.0f5e1b287f2f9p-193,
     0x1.f497618a9bff1p-761, 0.0, 0.0, 0x1.8bd0e0cbd8c41p-284, 0.0,
     0x1.3fe1b6f3fb917p-96, 0.0, 0x1.59a32dda8d3a3p-511, 0x1.226e4634af242p-754,
     0x1.270b6d6ef88e9p-609, 0.0, 0.0, 0.0, 0x1.3ee45bb62a474p-968,
     0x1.61bfed1a9b451p-452, 0x1.24b1cbc8cdec6p-365, 0x1.0336828bf8f2fp-281, 0.0, 0.0,
     0x1.57a70f07a34dcp-376, 0.0, 0.0, 0x1.4870235b52fd7p-242, 0x1.49014dbd20855p-181,
     0x1.b47f36e05ada1p-428, 0x1.8b293ad3fc9e6p-372, 0x1.f3b3e9a9b4206p-447,
     0x1.dd1e4ec5c0cb9p-233, 0.0, 0.0, 0x1.b0d98e0da30ffp-446, 0x1.ff52d5b7fb3ecp-534,
     0x1.7dc75b0cbe331p-984, 0.0, 0x1.0386dea36ac5bp-625, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05361ba524155p-476, 0.0, 0.0, 0x1.a18b2dfc902afp-806, 0x1.cfaefb791fae4p-640,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83d1ac58d44e1p-166, 0.0,
     0x1.0fae1bab5a231p-29, 0x1.3561c97b6582p-1001, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.760fb802205b9p-537, 0x1.05625eee6fcadp-524, 0x1.9c693c480b71ap-433,
     0x1.c19204a9530ap-88, 0.0, 0x1.f55b720277d03p-454, 0x1.209ec0c011f09p-509,
     0x1.d19a231694273p-676, 0x1.8120817257p-806, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.981624cdb83f3p-447, 0x1.ee25f290c1ca3p-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.506da3e4a1ccp-859, 0x1.d6fbdfa1c1d0ap-549, 0x1.e70d1d102dad1p-87, 0.0,
     0x1.88635dcb26a2bp-811, 0x1.f85eb3fb59e21p-215, 0.0, 0.0, 0.0,
     0x1.e011ce0aa677p-210, 0x1.77e405d2e1a1dp-477, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b30e6ae9d4e9p-789, 0.0, 0.0, 0.0, 0x1.bbbe8136442f8p-96,
     0x1.507dce5763c09p-471, 0x1.7c95787884a4ep-64, 0x1.bba1c52fdb70bp-251,
     0x1.86f90e48bcb54p-652, 0x1.fb3992f099b57p-741, 0x1.3527b3ddbacfcp-1005,
     0x1.83341ac9c63fbp-844, 0.0, 0x1.22f2faf03aea9p-312, 0.0, 0x1.14bfe24ebf6ddp-964,
     0x1.6253fa553b814p-995, 0x1.a6df8c1b04599p-356, 0.0, 0.0, 0x1.16cfe12d56dcfp-562,
     0x1.b70597a8ce25ap-509, 0x1.af2622952feaep-874, 0.0, 0.0, 0x1.3f2f8e24d5508p-200,
     0.0, 0x1.c0da542230443p-875, 0.0, 0x1.8cba4ac526471p-135, 0.0, 0.0, 0.0,
     0x1.418c7edef7c09p-202, 0x1.174f81088964ep-530, 0.0, 0x1.6036be6583444p-394,
     0x1.74a9e60229e0ap-161, 0x1.7d69724a4cc99p-981, 0.0, 0x1.a75ce537d60cap-580,
     0x1.5e76c278ea093p-731, 0.0, 0.0, 0x1.6b70bf6c1ec07p-291, 0.0,
     0x1.c2f2bcda69d37p-758, 0x1.86f5e6aff356p-627, 0x1.50b6ca452193dp-181,
     0x1.866628545380cp-261, 0.0, 0.0, 0x1.49dc2d8621501p-989, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2b8c49068326ep-745, 0x1.b251cf5f7ba23p-244, 0.0, 0.0, 0.0,
     0x1.5034c56dad882p-838, 0.0, 0x1.6715711350278p-439, 0.0, 0x1.9a2c6ab33832p-760,
     0x1.e2fe7eb5bfad3p-157, 0.0, 0.0, 0x1.1c66e6f3da73cp-942, 0.0, 0.0,
     0x1.5e54ae1de2e45p-985, 0x1.35be5983045e6p-137, 0x1.980ef9647d378p-597,
     0x1.6b49e6ca7b03ap-388, 0x1.286c5fd6fbd5cp-928, 0x1.fc37d7e5bfc7dp-95, 0.0,
     0x1.ccec00db78abp-534, 0.0, 0x1.800acfd8eaa4dp-804, 0x1.3a99b88265431p-1010,
     0x1.79e44f0ccb79dp-496, 0.0, 0x1.6b27f7ecf76ecp-458, 0x1.1470e09638fc7p-918,
     0x1.2f5cca2fed881p-11, 0.0, 0x1.67dda44e167cap-110, 0x1.8046154a32437p-273, 0.0,
     0x1.71b76b8285ep-75, 0x1.889ce48e3ec89p-847, 0.0, 0x1.34f7d12c122dp-796,
     0x1.6d1a9f6d0cd31p-239, 0x1.0ec2fc784308ap-449, 0x1.386b2d29021ecp-727, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5fb6c69abbcfap-940, 0.0, 0.0, 0x1.88ec89505b029p-248, 0.0,
     0x1.c61a2c0a59496p-410, 0.0, 0x1.3be1d909ec852p-819, 0x1.d2e4aae6ff70ep-157,
     0x1.c8ad65f15c3e8p-726, 0.0, 0.0, 0.0, 0.0, 0x1.837916d0092cap-832,
     0x1.a3021b849cd13p-633, 0x1.4d4032a3fbcbp-190, 0.0, 0.0, 0.0, 0.0,
     0x1.3e51da0bf7894p-689, 0x1.f7e7b6e09df8p-947, 0x1.73d5ba72f7cccp-227,
     0x1.7216c8cf23c64p-153, 0.0, 0.0, 0x1.b2ca8dd5e2c32p-950, 0x1.2af27f7ff2139p-547,
     0x1.634c3226660a8p-536, 0x1.ec518807a41cp-377, 0.0, 0.0, 0.0, 0.0,
     0x1.03f8baf15ec2ap-773, 0.0, 0.0, 0.0, 0.0, 0x1.009bf17de69c2p-732, 0.0,
     0x1.a0b020dfae45bp-636, 0x1.2a02b993ad6bap-209, 0.0, 0.0, 0x1.422bd7776813cp-689,
     0x1.66050629c9a32p-836, 0.0, 0x1.2765b1846146ep-153, 0.0, 0x1.95039ab717697p-421,
     0.0, 0.0, 0.0, 0x1.b195de773cceap-8, 0x1.e06576649a751p-309,
     0x1.44b484157a908p-317, 0x1.a7e76cdf848c3p-980
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
            tmp1 = Sleef_finz_sind2_u35avx2128(tmp0);
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
    printf("Sleef_finz_sind2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sind2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
