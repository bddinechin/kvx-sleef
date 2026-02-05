/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d4_u35kvx.c --function Sleef_exp2d4_u35kvx \
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
     0.0, 0x1.102b4e7d780b3p-788, 0x1.9d13357e2bb43p-642, 0x1.5dc035afa2fc2p-498,
     0.0, 0x1.26a5eb49b81a7p-1007, 0.0, 0x1.fd456c0004506p-997, 0x1.e4d449777972ep-78,
     0x1.b2c1289ad91d5p-21, 0x1.39763cc73599dp-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d4ae252e7a4dp-859, 0.0, 0.0, 0.0, 0x1.3965c755df2dcp-71,
     0x1.e39fc38588dd5p-318, 0.0, 0x1.38982492388c8p-967, 0.0, 0x1.038c95dbf1d99p-73,
     0x1.3351ed6bbd35ep-462, 0x1.0ffb00ac3e9p-899, 0.0, 0.0, 0x1.2e9969551b35dp-60,
     0.0, 0.0, 0x1.9ffc19c3df80bp-730, 0.0, 0x1.2929e352cec97p-52, 0.0,
     0x1.425d7f4fd7d8fp-695, 0.0, 0x1.a799f0b3adfap-984, 0.0, 0x1.2267fb0846a3bp-676,
     0.0, 0.0, 0.0, 0x1.7a91f2fcaaf35p-300, 0.0, 0x1.4b3a91de4e9f3p-209, 0.0,
     0x1.c6a7ec26c0e55p-289, 0.0, 0.0, 0.0, 0.0, 0x1.0b78fb73f0fb3p-412, 0.0,
     0x1.7b689ef1b85ffp-195, 0.0, 0x1.01f8d53a2fd3ap-101, 0x1.d3bb06dc8f1cdp-813,
     0x1.4eae8467b9b57p-884, 0x1.413a34cd5aab6p-554, 0x1.f2b2c8eacf084p-566,
     0x1.a77ed1aa2c67p-882, 0.0, 0x1.ab65da50b896p-369, 0.0, 0x1.9f579680afc7p-376,
     0x1.1ed93d51f82f4p-382, 0x1.9e963b688621ep-556, 0x1.50aff87b7ee01p-527,
     0x1.65bff3483d1c6p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4772dc22c7609p-965, 0.0,
     0.0, 0x1.a3d1e32614731p-10, 0x1.b6f3885fdac4ep-673, 0x1.70eb2e0a2307ep-178, 0.0,
     0.0, 0.0, 0x1.f678c965d9fbdp-777, 0.0, 0x1.9b3cbc75587a4p-902, 0.0,
     0x1.26450ab6cff17p-358, 0x1.73789e9a12be4p-896, 0x1.313aaf6ce8b8dp-506,
     0x1.455f1d9975714p-168, 0.0, 0x1.587bd69203727p-276, 0.0, 0.0, 0.0,
     0x1.69b36a02d3abbp-721, 0x1.0265b72d168b1p-805, 0x1.c1033d37169cep-633,
     0x1.2d90ff0ae1306p-40, 0.0, 0.0, 0x1.a64f68a563acep-219, 0.0, 0.0, 0.0,
     0x1.e9a177c73f60fp-703, 0x1.e044278358815p-713, 0.0, 0.0, 0.0,
     0x1.ee3373bf290c2p-746, 0x1.cd4e2b55d02c8p-61, 0x1.12c830161b566p-772,
     0x1.26dc30cd48deep-367, 0x1.62ef8acea8008p-210, 0x1.10fd4442e91fbp-945,
     0x1.72b3884e9fa73p-167, 0.0, 0.0, 0.0, 0x1.ea3395ba4bcdep-732,
     0x1.33dc6526d7c88p-646, 0x1.f2841e0bc7501p-794, 0x1.19c79d25d556ep-995,
     0x1.a4bde102511fcp-981, 0.0, 0x1.10f0ce4394156p-189, 0x1.5b0f2d169a10ap-690, 0.0,
     0x1.469aa52788fd1p-909, 0.0, 0x1.b60a882b6ad57p-478, 0.0, 0x1.4089d7ffa31eap-592,
     0x1.a5b6e3be7948dp-994, 0.0, 0x1.f00c493b63e2cp-200, 0.0, 0.0, 0.0, 0.0,
     0x1.4738463c66c89p-342, 0x1.27b0adbe05814p-917, 0x1.bb58eb5e7239ep-874,
     0x1.c2e62b88166f8p-909, 0x1.bbf44dc0e0e31p-292, 0.0, 0.0, 0.0,
     0x1.67c1a3053f956p-470, 0x1.38cd92cdb9b5dp-473, 0.0, 0.0, 0.0, 0.0,
     0x1.7118ba9791681p-721, 0x1.b25bca86e1cbdp-875, 0.0, 0x1.28e65788ac4fbp-571, 0.0,
     0.0, 0x1.c19fe5be77ca2p-439, 0x1.733b9c626f9d6p-827, 0.0, 0.0,
     0x1.a95228d478802p-462, 0.0, 0x1.f42de7e1f62cfp-475, 0.0, 0.0, 0.0,
     0x1.9f7a28dade52p-971, 0.0, 0.0, 0x1.3cd45a12e62b6p-284, 0.0,
     0x1.d2833cf3ad012p-286, 0x1.ac118ac80a3ecp-918, 0x1.5ef98066969a8p-480, 0.0,
     0x1.7a6fe39bdc925p-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aea0dfeb4bc05p-579,
     0x1.16e085000336dp-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.719a85d4c15cap-890, 0x1.22358ee674ee8p-374, 0.0, 0.0, 0x1.b0ac4238c7686p-687,
     0x1.3918ea54778edp-553, 0.0, 0x1.b1c004936c068p-765, 0x1.1b695338ab6c6p-885, 0.0,
     0.0, 0.0, 0.0, 0x1.895dbf923eac5p-824, 0x1.cd6ee0a1931d5p-395, 0.0, 0.0, 0.0,
     0x1.5d5b4af637ce6p-214, 0.0, 0.0, 0x1.02c5b08bdeeadp-188, 0.0, 0.0, 0.0, 0.0,
     0x1.bdc9b56c4e8e4p-509, 0.0, 0x1.d397fcf2d5714p-831, 0.0, 0.0,
     0x1.e0fa647b2bb4dp-749, 0x1.8482733dbc714p-576, 0.0, 0x1.9bd3eaad476bep-15,
     0x1.f7907d2d0a2f7p-489, 0x1.ad93ed4200445p-135, 0.0, 0.0, 0.0,
     0x1.0e2f99d220b18p-118, 0x1.f78ad5935c573p-592, 0x1.61876ae1213cap-889, 0.0,
     0x1.2279f6f9e97b4p-546, 0.0, 0x1.3ac830feb88afp-410, 0.0, 0.0,
     0x1.cf5b7666e53aep-411, 0.0, 0.0, 0.0, 0x1.76ae61888c785p-884, 0.0, 0.0,
     0x1.83f817d0e8b37p-166, 0.0, 0.0, 0x1.5e42028198cb2p-927, 0x1.7014ee157ae88p-334,
     0x1.c3b2988f499e3p-332, 0x1.9cec388f44212p-633, 0.0, 0x1.396d1460f9697p-484,
     0x1.95d1c0a826335p-231, 0.0, 0.0, 0.0, 0x1.3fdb51c149075p-15, 0.0, 0.0, 0.0,
     0x1.a9005c9b8f2bfp-218, 0x1.71206d26963a1p-367, 0x1.76bfeec526f02p-538,
     0x1.2bc8631d6725cp-617, 0.0, 0x1.0181b2451f2cep-239, 0x1.02c63b3601dddp-111,
     0x1p0, 0.0, 0x1.a22a2d0bdae1dp-949, 0.0, 0x1.9dbb2963f5ff8p-70, 0.0, 0.0,
     0x1.e60320d1352fcp-653, 0.0, 0.0, 0x1.e95de87bfb8dap-460, 0x1.e893ee3ade995p-881,
     0.0, 0x1.da024a4ffbbf5p-387, 0x1.fde2f71f5d877p-51, 0x1.fd851c877ecfcp-413, 0.0,
     0.0, 0x1.dea2271c853d2p-247, 0.0, 0.0, 0x1.e76c99fe893b5p-217,
     0x1.d4b01845a2c1cp-311, 0.0, 0x1.f0984b4808d15p-244, 0x1.621b2e622d698p-112,
     0x1.6223f6ebc6722p-751, 0x1.a70119fbe5f88p-166, 0.0, 0.0, 0.0,
     0x1.b99d38b96414bp-132, 0x1.77d57e24b4fefp-443, 0.0, 0.0, 0.0, 0.0,
     0x1.05324ea5acb4bp-884, 0x1.954e96f88a4p-63, 0x1.a2757dcb72394p-185, 0.0, 0.0,
     0x1.3074d98409805p-534, 0.0, 0.0, 0.0, 0x1.50d6d18435966p-105,
     0x1.c4be063ee6bb8p-387, 0.0, 0.0, 0.0, 0.0, 0x1.7556a09fc8e01p-403, 0.0,
     0x1.67aee5ccf2f96p-53, 0x1.c0fd9289fff2p-613, 0.0, 0.0, 0.0, 0.0,
     0x1.a807688e2a59cp-832, 0x1.fea3f580d9184p-715, 0.0, 0x1.f8a03e4cd7c2p-774, 0.0,
     0x1.495b3986d415ap-314, 0x1.3f4e533857d4cp-477, 0.0, 0.0, 0x1.4adb2f0a0af37p-713,
     0.0, 0.0, 0x1.86a0446e43a3ep-635, 0x1.1c6c864b001fbp-797, 0.0, 0.0,
     0x1.6e58375e8b104p-963, 0x1.8feff843e6326p-983, 0.0, 0.0, 0x1.c90bed82be2ddp-587,
     0.0, 0.0, 0.0, 0x1.0c3841d104973p-437, 0x1.dd1fc7cd16cd1p-669,
     0x1.4148fa77343bdp-55, 0.0, 0x1.bd9c0571d397cp-519, 0x1.04e398419ad13p-146, 0.0,
     0x1.1842e89692561p-910, 0x1.b5f04e14d81c8p-92, 0x1.a1374af5a47d1p-316,
     0x1.340b01ab50f1ap-911, 0.0, 0x1.50e1a6bdbb671p-639, 0.0, 0.0, 0.0,
     0x1.35987f4984892p-799, 0.0, 0.0, 0x1.7d2eca5adebdep-988, 0.0, 0.0,
     0x1.09c79a92ed4dfp-970, 0.0, 0.0, 0x1.cddfe2fe7b945p-730, 0.0,
     0x1.22913f9c98355p-254, 0.0, 0.0, 0x1.24a6af135bec3p-708, 0x1.9ec2827932548p-613,
     0x1.32869cad6e12ep-553, 0x1.10d1673251fdep-133, 0.0, 0x1.569078990129dp-23, 0.0,
     0x1.963cfdcb09e88p-1005, 0x1.47c1366708ff1p-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.706d0787d998dp-207, 0x1.7cd0760bb3673p-945, 0.0, 0.0, 0x1.3907e70b4c00dp-209,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed7e36f98df2fp-978, 0.0, 0.0,
     0x1.2f1718d67507bp-743, 0x1.ca0bbf1d30764p-578, 0.0, 0x1.d13b60babe76ep-277, 0.0,
     0.0, 0.0, 0.0, 0x1.ba6c05c5d010ep-460, 0x1.b5ba885847469p-300,
     0x1.d8a0ba51d9ec7p-829, 0.0, 0.0, 0x1.52da6d680ccf1p-461, 0.0, 0.0, 0.0,
     0x1.984ac239256fp-239, 0.0, 0x1.ab69ea2de0878p-140, 0.0, 0x1.b9baf52ed6f64p-1002,
     0.0, 0.0, 0.0, 0x1.1aedb3aa73ccap-916, 0x1.5494cf4a68f5cp-603,
     0x1.02e2dd4d388p-944, 0x1.e45b99b155fffp-29, 0x1.315eec9107b1cp-136, 0.0,
     0x1.6110fb15aec7dp-132, 0.0, 0.0, 0.0, 0x1.de0eb936de961p-1,
     0x1.8387583aaebd8p-322, 0.0, 0.0, 0.0, 0.0, 0x1.95730d60d41f6p-436, 0.0, 0.0,
     0x1.100e18a128c7bp-1015, 0x1.52e92a8e59c47p-903, 0.0, 0x1.f5d7b650bd8d5p-421,
     0x1.dc73e797e6941p-812, 0x1.74f13d46598ffp-1019, 0.0, 0.0, 0.0,
     0x1.9512b12fbfac2p-676, 0x1.4a7f3efba1838p-386, 0.0, 0.0, 0.0, 0.0,
     0x1.14a7f7c95739ap-25, 0.0, 0x1.a20267d02e60cp-375, 0.0, 0.0,
     0x1.e5b81353e8a36p-984, 0x1.d1ac12cc11dd8p-313, 0.0, 0.0, 0.0,
     0x1.3b7f05c68451p-176, 0.0, 0.0, 0x1.cef1101630a1ap-1019, 0.0, 0.0, 0.0,
     0x1.84fb4814c20b1p-613, 0.0, 0x1.8786ae06f5c7fp-778, 0.0, 0x1.3fa33a7020a38p-791,
     0.0, 0.0, 0x1.fa287059cc05ap-367, 0.0, 0.0, 0.0, 0x1.eef223e4830f4p-678, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84d8ed0e2470bp-697, 0.0,
     0x1.dc090fdfe401bp-720, 0.0, 0.0, 0.0, 0x1.94161832d15c3p-245,
     0x1.42980599ffeep-259, 0.0, 0.0, 0.0, 0.0, 0x1.c3e233c6109f7p-547, 0.0, 0.0,
     0x1.b298f28ffbd57p-551, 0x1.3eee27af8f0f2p-448, 0x1.ac32b5fee4475p-78, 0.0, 0.0,
     0x1.d6636766b8659p-958, 0x1.6d7a6d82309edp-958, 0x1.d8f6d5ad3c716p-576,
     0x1.54199229e6d12p-970, 0x1.6157fe9302e4cp-739, 0x1.91f9d589e0a1cp-1020, 0.0,
     0x1.c9032417be60ep-809, 0.0, 0x1.6efc79dc1a35ap-211, 0.0, 0x1.aa890328070aap-681,
     0x1.f14cc5ad27396p-652, 0.0, 0x1.b91d850f120cp-219, 0.0, 0x1.dab765fedcf94p-270,
     0.0, 0x1.167966df15a5ep-609, 0.0, 0x1.ef9ba39bcf474p-40, 0x1.0dab687684164p-150,
     0x1.2198e3013bd13p-218, 0x1.cdda30801ceb9p-748, 0x1.82229a9f8494p-574,
     0x1.4f4e43031d384p-353, 0x1.0ec8497545cfep-136, 0.0, 0x1.a64ac7214b877p-507, 0.0,
     0x1.368316a9bdd2cp-934, 0.0, 0.0, 0x1.75aec85c649d6p-708, 0.0,
     0x1.767933f4e7988p-340, 0x1.be549e071587bp-267, 0.0, 0x1.272317bc7ef28p-49,
     0x1.55c6e55383494p-832, 0x1.f701a17e62e07p-394, 0x1.128982bae83ep-390, 0.0,
     0x1.a23f8e0d5d60ap-1014, 0.0, 0.0, 0.0, 0x1.a07cdc2ecec5ep-510, 0.0,
     0x1.23e3b6e55c347p-711, 0x1.2bb0f26c57e48p-361, 0x1.9bc6bdfc854p-66,
     0x1.2a270b8f39691p-615, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a51ac585a743p-268, 0.0,
     0x1.db8febb2bbe0cp-459, 0x1.28d1bace07229p-781, 0x1.78b5d8bc97d32p-1010,
     0x1.b2544d641a8a5p-354, 0.0, 0x1.c48b9fb0a829ep-848, 0.0, 0x1.c13e8185a01ccp-525,
     0x1.7068dd245c696p-126, 0.0, 0.0, 0x1.716f6fd1a29efp-159, 0x1.c8f38f3c20d05p-94,
     0x1.75a7ec5ffcd69p-709, 0x1.79daed7ccc9a2p-153, 0x1.40fd37ee309d2p-288, 0.0,
     0x1.3f1d489b9ff84p-174, 0x1.3265cfd8fa399p-889, 0.0, 0.0, 0.0,
     0x1.ebc33ede56971p-815, 0.0, 0.0, 0x1.d00833f1e86fp-881, 0.0, 0.0,
     0x1.be8e22a959ddcp-340, 0x1.5e85a3682064cp-236, 0.0, 0.0, 0x1.52f257434f7eap-570,
     0.0, 0.0, 0x1.6093b6bb8a265p-154, 0x1.4f211d907368fp-329, 0x1.8d5fd7855f15p-819,
     0x1.6d7a01179d578p-546, 0.0, 0x1.99515fe4a88c3p-816, 0x1.f4e2bea73572dp-749,
     0x1.c55eb85a276edp-218, 0x1.c2de0c49a1ccfp-170, 0x1.d6ca24d006347p-866, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35fc7887106bbp-990,
     0x1.0706dc8ec7ec8p-867, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14a78a7db9238p-505,
     0x1.08dc69be672ap-514, 0.0, 0x1.6447660d45667p-939, 0x1.3e3368d01c03cp-701, 0.0,
     0.0, 0x1.8f027f07443c9p-824, 0x1.ed75a7569f194p-249, 0.0, 0.0,
     0x1.b3059eb5ec7c5p-421, 0x1.52b2e09401f79p-891, 0.0, 0x1.955728b27bba2p-528, 0.0,
     0.0, 0.0, 0x1.fabda5db2c7e9p-22, 0x1.e1213e6a94721p-867, 0x1.4ca1eb3d9e6e1p-799,
     0.0, 0.0, 0.0, 0x1.3e46e93eb04b3p-158, 0.0, 0.0, 0x1.d52529c1757cfp-487, 0.0,
     0.0, 0x1.4ea9b9cc7d547p-80, 0.0, 0x1.1fc11d9ebf2fbp-950, 0x1.8cda96fc2d57p-761,
     0.0, 0x1.85cd91378bbcdp-569, 0.0, 0.0, 0x1.7a9e5962cc687p-446,
     0x1.f8fb195146a7bp-645, 0x1.41316776c5b76p-432, 0.0, 0x1.08339d1a73d5bp-472, 0.0,
     0x1.1aed5e10daa6dp-536, 0x1.02b57002b52bcp-891, 0.0, 0x1.2440e81af81bbp-769,
     0x1.2fb41ef53662cp-613, 0.0, 0x1.6f48264a542c6p-74, 0x1.1520160809a32p-220, 0.0,
     0.0, 0.0, 0x1.de7ef8e313aeep-964, 0.0, 0.0, 0.0, 0.0, 0x1.bb424dedd5b9p-866,
     0x1.fc4eb3036684ap-476, 0.0, 0.0, 0x1.ec7a079129eb2p-330, 0.0, 0.0,
     0x1.c175ab7a0e236p-960, 0x1.5752445ff6c3ep-695, 0x1.985ad8175d2fdp-357, 0.0,
     0x1.6e9dfc3432dbdp-276, 0x1.619fabd5b2453p-869, 0x1.657f33cbc5c64p-323,
     0x1.7533be5d4c151p-597, 0.0, 0x1.811341391d22fp-724, 0.0, 0x1.60e2870c58bfep-853,
     0x1.5693d0223bb59p-130, 0.0, 0.0, 0.0, 0.0, 0x1.f3f1b18148b2bp-1008,
     0x1.3e3c3eb1fdea9p-686, 0.0, 0x1.366bf357e0a22p-322, 0.0, 0.0,
     0x1.464de6f7cd973p-870, 0.0, 0x1.91ce6150636b8p-600, 0.0, 0x1.ee9de56f83a36p-770,
     0.0, 0x1.b2db70d6dff29p-855, 0.0, 0.0, 0x1.1c2d02d3654aep-479,
     0x1.f696d90ee55bdp-382, 0.0, 0x1.577acee3ee991p-608, 0.0, 0.0, 0.0,
     0x1.ca5308b997097p-374, 0x1.cc4625da1f4c7p-630, 0x1.467a0b8495dep-357, 0.0,
     0x1.b2f36db79c932p-934, 0x1.6b5123d5fac4fp-447, 0x1.3f6b139905244p-262,
     0x1.73f040f1e66f9p-921, 0.0, 0.0, 0x1.b1844f159e939p-128, 0.0, 0.0, 0.0, 0.0,
     0x1.69ca56d0b5a98p-492, 0x1.53b19b66e714bp-68, 0.0, 0.0, 0x1.7b6d666954cd5p-949,
     0.0, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0x1.f5728ed56d0dbp-782, 0.0, 0.0, 0.0,
     0x1.9ed4aa5d5e3c6p-144, 0x1.a7a03ad1585ccp-323, 0.0, 0x1.dbd90eff7a683p-778, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.45ca7ffc0665cp-706, 0x1.55b1fd847342dp-582,
     0x1.b2eb0765126d6p-65, 0x1.f5c4cf9e679f2p-612, 0x1.b033e3c0f436dp-548,
     0x1.f82e963705f3bp-579, 0.0, 0.0, 0x1.c4a392ff119cap-422, 0x1.7998d60bab0cep-630,
     0.0, 0x1.7eaaefbc5821cp-752, 0x1.10af34e48abeep-766, 0x1.5641ce35f60b8p-487,
     0x1.440c3c4460e9ap-921, 0.0, 0.0, 0x1.400b301b65101p-508, 0.0, 0.0, 0.0,
     0x1.1f77a030295p-67, 0.0, 0x1.b621f458e77d3p-586, 0x1.73a3532653bcbp-44, 0.0,
     0x1.96b41946ac124p-383, 0x1.da92cffb187bcp-453, 0x1.40337c360a07dp-134,
     0x1.a2dd9809a66fap-332, 0.0, 0x1.23f08625bd416p-516, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb68d068a64a2p-757, 0.0, 0x1.1dc7e658c7dc7p-994, 0.0, 0.0, 0.0,
     0x1.001b0f9726503p-170, 0x1.0a16eaa21bb9dp-264, 0.0, 0x1.c67fafcfc122dp-933,
     0x1.7aea2e5ddbeb3p-934, 0.0, 0x1.49f86afd223d5p-471, 0x1.af364cf00888p-264,
     0x1.a8c314ce9a727p-721, 0.0, 0.0, 0x1.7bb971dc66031p-448, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.86c20b80bc9eep-644, 0x1.7a233df6717f5p-1001, 0.0, 0.0,
     0x1.b5208ab88a09ap-1022, 0x1.c8c5517e634f5p-203, 0.0, 0.0, 0.0,
     0x1.43ebcd262d0dcp-925, 0.0, 0.0, 0x1.390f087be9b0dp-954, 0.0, 0.0,
     0x1.ae796c96ed7dbp-931, 0x1.24930a7b596b6p-238, 0.0, 0x1.7c6efcd5bc1e7p-352, 0.0,
     0x1.17178af4bfeb9p-777, 0.0, 0.0, 0.0, 0x1.df7c07daf04d4p-950,
     0x1.0c92b246b847ep-84, 0.0, 0x1.584d88e671e5ap-173, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02b46ba84cebfp-56, 0x1.bba7ff4346d29p-471, 0.0, 0.0, 0x1.9b946e9c1f98fp-385,
     0.0, 0.0, 0x1.e714ec60d2bcap-102, 0x1.2fe0ce56a198p-432, 0.0, 0.0, 0.0,
     0x1.bdbc3e7e9cb96p-902, 0x1.dadf75b94f56cp-415, 0.0, 0.0, 0.0,
     0x1.41d2c02e53ae9p-780, 0.0, 0.0, 0.0, 0.0, 0x1.e154441b76ceap-323, 0.0,
     0x1.9dac5bff878c3p-338, 0x1.b36cbd9cb58fdp-392, 0x1.46024a84b591fp-876, 0.0,
     0x1.fa334b86d4846p-844, 0.0, 0.0, 0x1.67431be1c25c2p-666, 0x1.13e909d157b44p-221,
     0.0, 0.0, 0x1.a0bf48c61b634p-556, 0x1.5ca4e30599626p-99, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c40773a4e38abp-1009, 0x1.67c4f62c85946p-682,
     0x1.30521d0202a9ap-41, 0.0, 0x1.9af85983df942p-1006, 0.0, 0x1.32327c3948f4p-794,
     0.0, 0x1.b2387a0190976p-492, 0.0, 0.0, 0.0, 0x1.f1318174cfb27p-181, 0.0, 0.0,
     0.0, 0x1.493033046dec1p-803, 0x1.e56d9e4cb5481p-26, 0.0, 0.0,
     0x1.5ef0827507ff7p-869, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c93f46926cc6fp-196, 0.0,
     0.0, 0x1.dfb77b901c6e4p-101, 0.0, 0x1.ac516bbbbec0fp-744, 0.0, 0.0,
     0x1.1d46799a3d975p-989, 0x1.7b61642656607p-225, 0x1.0921331f82f23p-487, 0.0,
     0x1.af2de3d1edfe4p-869, 0.0, 0x1.9793c4e616338p-737, 0x1.61482dec66242p-186, 0.0,
     0x1.c3cb01a40de6cp-248, 0.0, 0.0, 0x1.fc4d1110dc758p-890, 0.0, 0.0,
     0x1.7bdd377db6485p-37, 0.0, 0x1.6f4b1a2e95e96p-388, 0x1.c862a27cbad7bp-206, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.62b3993494b9cp-589, 0.0, 0x1.06410baca4fe4p-430
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
            tmp1 = Sleef_exp2d4_u35kvx(tmp0);
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
    printf("Sleef_exp2d4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2d4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
