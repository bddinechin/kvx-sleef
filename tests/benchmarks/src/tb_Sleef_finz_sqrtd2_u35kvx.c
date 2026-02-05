/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd2_u35kvx.c --function \
 *     Sleef_finz_sqrtd2_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.303c058fe1b74p-293, 0.0, 0x1.3995e4a3515dap-560,
     0x1.c40f2be9a8568p-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.443aaf59618afp-308,
     0.0, 0x1.3db7f9d440614p-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72f5cd6a18896p-207, 0.0, 0x1.925a2fbcf76edp-668, 0.0, 0x1.17674a3ca7fe4p-364,
     0.0, 0x1.dceb359d372dcp-232, 0.0, 0.0, 0x1.2f974c99ede51p-8,
     0x1.96078e6d5d2e9p-825, 0x1.4110b377a3c1fp-62, 0.0, 0x1.a56bff7e53859p-513, 0.0,
     0x1.38f64edb8ffe2p-199, 0.0, 0x1.fcf9f6f33bf3bp-485, 0.0, 0.0,
     0x1.892e0ee1d76f2p-834, 0x1.7e4374f1baf4bp-179, 0x1.dc1d0e7273496p-35,
     0x1.abba8d8bcf05fp-244, 0.0, 0.0, 0.0, 0.0, 0x1.2b2f3a63ce469p-551, 0.0, 0.0,
     0x1.76cf847203bb3p-959, 0x1.81109dcb5ec9ap-450, 0.0, 0x1.ee9ef824f0b37p-765, 0.0,
     0x1.0ac2fcfea90eep-778, 0.0, 0.0, 0.0, 0x1.208fe7c0b876fp-243, 0.0,
     0x1.37f881382f583p-926, 0x1.cbd1bf61f73f4p-1009, 0x1.6be472a1b1d47p-752,
     0x1.5c8a03b585908p-7, 0x1.738d1472aeeap-919, 0.0, 0.0, 0x1.15291ab39338dp-560,
     0.0, 0x1.7e4010f68278ap-821, 0x1.a5cc61a44de0fp-845, 0x1.baf8c1025b2f6p-115,
     0x1.2ba31b534d1d6p-723, 0x1.75de6b3ce1af9p-621, 0.0, 0x1.ed5ae05b31b6p-418, 0.0,
     0.0, 0x1.90284798e1229p-198, 0x1.03a4547557c48p-688, 0.0, 0.0,
     0x1.fc1abf9d91469p-48, 0.0, 0.0, 0.0, 0x1.40844d74db958p-123, 0.0, 0.0,
     0x1.113d56399fcbap-713, 0x1.7471a5d1481edp-743, 0.0, 0x1.180b031de167cp-616,
     0x1.a832c47e311dbp-554, 0x1.3fc1d349daefep-777, 0x1.d3b45dc1fbbf8p-168, 0.0,
     0x1.5afd6ae87e7b8p-848, 0x1.c9d6d29012542p-89, 0x1.02fecc6d8ba7p-911, 0.0, 0.0,
     0.0, 0x1.adbcf43b64d53p-436, 0x1.4c428b4d47fd8p-643, 0.0, 0.0,
     0x1.04648a684bb33p-278, 0.0, 0.0, 0x1.d470e0c381d21p-833, 0.0, 0.0,
     0x1.eecc4278bb2f8p-561, 0.0, 0x1.64ad2d8affbb3p-881, 0x1.ce0632bf499d8p-382,
     0x1.30abf74e82ac6p-730, 0x1.c9d50ed65c19cp-209, 0x1.c6ef6e90ac992p-881, 0.0, 0.0,
     0.0, 0x1.29f9b31c6c689p-904, 0x1.b5abf000c7cadp-8, 0.0, 0.0,
     0x1.8d7fe1f75b5b1p-747, 0.0, 0x1.dba8e93bf3b6ep-523, 0.0, 0x1.e254d8969da5ap-255,
     0x1.68ca299e2830dp-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4122e6bfca437p-644, 0.0, 0x1.434455bfbb4f1p-384,
     0x1.67980c32dc36ap-20, 0.0, 0.0, 0.0, 0x1.7554ce8f5b9fcp-505,
     0x1.fe443bc7c0281p-658, 0x1.8d013c18530bcp-642, 0x1.383bfd1a2dd4ap-41,
     0x1.7ecfd32bc4d83p-665, 0.0, 0.0, 0x1.4b7601ea11716p-42, 0x1.c9f76842cda97p-495,
     0.0, 0.0, 0x1.71b48473bbe23p-278, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65a8e7805ca49p-128, 0x1.990281eb431f5p-664, 0.0, 0.0, 0.0,
     0x1.5fc22234170e4p-695, 0.0, 0x1.0c447a347e6f4p-562, 0.0, 0x1.ebd8841582e2p-972,
     0.0, 0.0, 0.0, 0x1.a97f4ce69110ep-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6777ee20a7dp-447, 0.0, 0.0, 0x1.a43e260d3bb01p-555, 0x1.4e06803513e19p-93,
     0x1.e76f243ba88fap-955, 0.0, 0x1.0a40dc99cc89cp-739, 0x1.236956b0af206p-119,
     0x1.0be958a20d0fap-399, 0.0, 0.0, 0x1.109311b11108cp-613, 0x1.4d22fe517a1fep-724,
     0x1.6a3ab35ec47a2p-584, 0x1.43a776e0b90c5p-977, 0.0, 0x1.98c66864f24c2p-223, 0.0,
     0x1.cb838d907a9d6p-618, 0x1.0d4a02def4f37p-998, 0.0, 0.0, 0.0,
     0x1.95781be700708p-93, 0.0, 0.0, 0.0, 0x1.cf3391aa41323p-94,
     0x1.84d0ef9832045p-495, 0x1.d0780d815536bp-290, 0.0, 0.0, 0x1.80f2e863fbd3fp-763,
     0x1.1c04ccae9541ap-680, 0x1.262dbd2e50819p-269, 0x1.49d9638917cf9p-323, 0.0, 0.0,
     0x1.001d5bf54f2e7p-234, 0.0, 0.0, 0.0, 0x1.d14dd6d9a3a52p-583, 0.0,
     0x1.6fdc035467081p-856, 0x1.9bf88dca7617dp-827, 0x1.794aa2ee05effp-647,
     0x1.dc6156d60e019p-358, 0x1.bfbc254312bd9p-3, 0.0, 0x1.82f0820457565p-148, 0.0,
     0x1.43efed330ef0dp-714, 0x1.436df00321a4cp-634, 0x1.a29eb44da015p-338, 0.0,
     0x1.5b59e5c714e93p-778, 0x1.addc2e1abd4c6p-923, 0x1.69fbd736bb4c6p-794,
     0x1.2d4569daee8d1p-607, 0x1.28258eeac741ap-882, 0x1.f534823952c01p-1007,
     0x1.ee83f6c643b21p-232, 0.0, 0x1.eeff03a1bb547p-958, 0.0, 0x1.1304f80a6c214p-269,
     0x1.792b8835fc54cp-868, 0x1.bf9ff117e7f4cp-697, 0x1.01dc36d0dda0ep-492, 0.0, 0.0,
     0.0, 0.0, 0x1.7075a09655e67p-511, 0x1.9bc85f7e5b8ddp-766, 0.0,
     0x1.62f3b56eaa3f8p-737, 0x1.1bf251657b5f6p-503, 0.0, 0x1.8b1404a8ba4c5p-417, 0.0,
     0.0, 0x1.44dc52fcb3777p-315, 0.0, 0x1.a32688cadfdd3p-621, 0x1.ccb0bca6cc65ap-858,
     0.0, 0.0, 0.0, 0x1.364069021beeap-409, 0.0, 0.0, 0x1.15ff620c560ccp-1003,
     0x1.b9bc6fd51cfb4p-516, 0x1.71f9b1a00a3e9p-120, 0.0, 0.0, 0.0,
     0x1.7447ccad2fep-927, 0.0, 0x1.4c2c93cf4fd9ep-821, 0.0, 0.0, 0.0, 0.0,
     0x1.b0d11a8d1eae6p-25, 0.0, 0x1.92a140830fc12p-456, 0x1.998bdcb74041ap-857,
     0x1.fe9797a4ad081p-285, 0x1.7268e05df7a42p-541, 0.0, 0x1.31254c5b145f5p-723, 0.0,
     0.0, 0x1.50384c7081e28p-660, 0x1.f6ca65bb7bda1p-691, 0x1.af5be67b1a8fap-777,
     0x1.39062424dd2a2p-92, 0x1.e25397e6191bp-501, 0.0, 0.0, 0x1.5cf73681dd09ap-909,
     0x1.369edd76844f5p-565, 0.0, 0.0, 0.0, 0x1.e084cac08d47cp-762, 0.0, 0.0,
     0x1.9f2a4d614738fp-140, 0x1.216c0a715aab6p-482, 0x1.99f6d6998a26cp-490,
     0x1.9abdbd18c9dd5p-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94ab09bac6e71p-797, 0.0,
     0x1.f68159d350edp-321, 0.0, 0.0, 0x1.a59bcd91235c4p-855, 0x1.d6f8caef1a233p-880,
     0x1.b7e1ebd456889p-112, 0.0, 0x1.52eff023da1bfp-257, 0.0, 0.0, 0.0,
     0x1.469297283bae5p-47, 0.0, 0.0, 0.0, 0x1.5ee0206243e36p-287,
     0x1.41c2cddd80a35p-1010, 0.0, 0x1.f6bb497491845p-457, 0x1.b8309ab062706p-865,
     0x1.3a3654605b5ecp-85, 0x1.3e23abe8acbdcp-910, 0x1.ba0abfaa337aap-452, 0.0, 0.0,
     0x1.429ef49b188a3p-323, 0x1.c21294e6e674p-37, 0.0, 0x1.8393560055a7ep-846, 0.0,
     0.0, 0.0, 0.0, 0x1.d612dea591c65p-639, 0x1.580698e928b24p-982,
     0x1.f557f263e72b6p-738, 0x1.c16ff8761a63cp-45, 0x1.35a306b835babp-294, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fed3acecc34dap-389, 0.0, 0x1.4b2f31247eed1p-216,
     0x1.714b14583d11cp-479, 0.0, 0x1.eb9eff70cb2dap-788, 0.0, 0x1.a47d3da72e47bp-799,
     0.0, 0.0, 0.0, 0x1.0b93d45861d85p-982, 0x1.be480c2e4961cp-472,
     0x1.b4cd601bb09bbp-762, 0x1.0eb27a7ead6f6p-722, 0.0, 0x1.adae59d438628p-455, 0.0,
     0.0, 0x1.29de60872e0c3p-106, 0.0, 0.0, 0.0, 0x1.8f5fca30c3a8ap-586, 0.0, 0.0,
     0x1.d4f83bc888d9bp-660, 0x1.8f256db573dbbp-141, 0.0, 0x1.c9d32ce89cf67p-514, 0.0,
     0x1.eae42a9da13ccp-995, 0x1.aca5f8f3e9d1cp-791, 0x1.eff2aa99d01f2p-485,
     0x1.0fd74bf130695p-632, 0x1.75a56c477f4bap-774, 0x1.2f16860e0d24ep-865, 0.0,
     0x1.0d2496c82d0dp-320, 0x1.818136ca3ce25p-951, 0.0, 0.0, 0.0,
     0x1.d084ab0ec3fdbp-88, 0x1.0c709528e2bfcp-467, 0x1.a405211310bbbp-465, 0.0,
     0x1.4dbf942b09cc8p-590, 0x1.4f671dbf3b722p-393, 0x1.93cd076205b4bp-601,
     0x1.f3492cb0799abp-312, 0.0, 0x1.3d248a6c5812dp-574, 0x1.14bee71a334bfp-1011,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.978b5c2271b33p-288, 0x1.749db46ba476p-180,
     0x1.87dd4886e6d1dp-184, 0.0, 0.0, 0x1.c6e3b2917917dp-902, 0.0, 0.0,
     0x1.d528dbff00fb8p-641, 0x1.94ae23df5c87fp-804, 0.0, 0x1.1149d1f23ec0ap-925, 0.0,
     0x1.4f303e0270dd8p-870, 0.0, 0.0, 0x1.08a528bebb8b5p-327, 0x1.c85ee83d1b8ffp-36,
     0.0, 0.0, 0x1.7239689313bc2p-332, 0x1.f1eeb38430e85p-112, 0.0, 0.0,
     0x1.cb89a37a54678p-122, 0x1.220688ebe744cp-571, 0x1.a610ac7a16077p-641,
     0x1.e9a5580186559p-578, 0.0, 0.0, 0.0, 0x1.58e8b8b3c73f7p-988, 0.0, 0.0,
     0x1.d5a2d8e4010bp-851, 0.0, 0.0, 0.0, 0x1.6c73f20d4f0fcp-95, 0.0, 0.0,
     0x1.618f8d5ebefebp-647, 0.0, 0x1.559d94283c776p-486, 0.0, 0x1.75b1e2276227dp-574,
     0.0, 0.0, 0.0, 0x1.64e4a91974ab8p-161, 0x1.357cd87c2eeaep-706,
     0x1.26784751c96e8p-387, 0.0, 0x1.cd994d420bacdp-818, 0.0, 0.0, 0.0,
     0x1.af7c19d6321c1p-588, 0.0, 0x1.9339e32bb8751p-893, 0.0, 0.0,
     0x1.af44f3a87c36fp-20, 0.0, 0.0, 0x1.1d40a86f8eab2p-395, 0.0, 0.0, 0.0, 0.0,
     0x1.f43214abd827cp-208, 0x1.01c8a865f1a6ap-780, 0x1.e4b923c01dbap-358, 0.0, 0.0,
     0.0, 0.0, 0x1.259b432f0ecf9p-408, 0.0, 0.0, 0x1.fe476905888bcp-526,
     0x1.3c109441d1656p-992, 0x1.89beb85bace0cp-204, 0.0, 0x1.8cf5f4bf25d59p-428, 0.0,
     0x1.382ca860568afp-253, 0x1.1659f1a7acf03p-26, 0.0, 0.0, 0x1.7a4e5c74cb622p-17,
     0.0, 0x1.2320ae13f5439p-808, 0x1.5cbe4910186c4p-258, 0.0, 0.0, 0.0, 0.0,
     0x1.0834f4eab33dfp-748, 0x1.6fcfa7b90cebp-257, 0x1.cbde03fdcf72dp-293,
     0x1.c8585cfc7d11p-570, 0.0, 0.0, 0.0, 0x1.df61b0a391f03p-636,
     0x1.2b41af39fc61ap-660, 0.0, 0x1.1c11b3cd1fc9fp-196, 0x1.088328642f15cp-237,
     0x1.5bcdca9185f71p-448, 0x1.11a77291e1122p-302, 0.0, 0x1.3b0019a344ba6p-1017,
     0x1.0827ddb3b65bbp-172, 0.0, 0.0, 0x1.79141b83521bap-994, 0.0, 0.0,
     0x1.e86070e575dc8p-334, 0x1.dc201af437df8p-624, 0.0, 0x1.24c4f54a9d851p-199, 0.0,
     0x1.1a156ad553c9ap-98, 0x1.1f38b701176e7p-913, 0x1.8ba4d693cb15bp-23, 0.0,
     0x1.fd8fcdc8b3a1ap-819, 0.0, 0x1.a2c2a018380cbp-471, 0.0, 0x1.d8417206ffbb3p-604,
     0.0, 0x1.08ecb1a7acec8p-996, 0x1.15391530f1243p-164, 0.0, 0.0,
     0x1.9db8adabc027cp-346, 0.0, 0.0, 0x1.c3c9746280953p-3, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7324652a839e2p-263, 0x1.050ea3f31de65p-381, 0x1.dae516a7b601p-315,
     0x1.7ce9405640d72p-913, 0.0, 0x1.b693b0da35263p-937, 0x1.a5618731a23eap-101, 0.0,
     0x1.66cf0a46b0315p-441, 0x1.e35a33630f20fp-502, 0.0, 0x1.1fc9a148cbb7ep-424, 0.0,
     0x1.e126d9068e966p-542, 0x1.8c6527efe7708p-374, 0.0, 0.0, 0x1.9eb832e8edfb9p-39,
     0x1.b07de92ed3498p-612, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d5c478e7fe47p-567,
     0x1.149fb149b72e8p-515, 0.0, 0x1.388f60d0e5acfp-467, 0x1.e5a6a07ed90d4p-950, 0.0,
     0x1.c294c920083aap-48, 0x1.1be1e46ced273p-231, 0x1.a6092d0c6cec5p-434, 0.0, 0.0,
     0.0, 0x1.f0469da96f9b7p-510, 0.0, 0.0, 0.0, 0.0, 0x1.ff85a7066dc0fp-398, 0.0,
     0x1.42837058d2911p-248, 0.0, 0x1.d001ac34a5d3p-541, 0x1.c27370561df4fp-958, 0.0,
     0.0, 0.0, 0x1.c6f6e983de1c9p-533, 0x1.2d3c6d99ffb18p-221, 0x1.9d5ccfe5a191dp-305,
     0x1.534ca7ac387ep-869, 0x1.48c04031a751bp-414, 0x1.2f703b2439c1fp-428, 0.0, 0.0,
     0x1.6634b719ede01p-880, 0.0, 0.0, 0x1.cb7eaa0ab9872p-823, 0.0,
     0x1.deb1ac9049409p-352, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e2a9b5d35de5p-712, 0.0,
     0x1.fc6cb3b073dfbp-245, 0.0, 0.0, 0x1.816f38b8b0725p-71, 0.0,
     0x1.0ca7bba845d7bp-111, 0x1.afa54850b6de8p-57, 0.0, 0x1.731613974fd87p-822, 0.0,
     0x1.85c8523d7d95ap-765, 0.0, 0x1.6da7b4c1f187bp-580, 0x1.5971b7699a2dbp-736, 0.0,
     0x1.64bc1b6665a79p-484, 0x1.52717a9b30e69p-278, 0x1.a3ff5dac8145dp-298, 0.0, 0.0,
     0x1.58f035d529d67p-613, 0.0, 0x1.e8c4bc14e1d76p-104, 0x1.a56fc7a0f7efap-660, 0.0,
     0.0, 0.0, 0x1.ff9ee5b49eea2p-773, 0.0, 0.0, 0.0, 0x1.8d0de15878849p-298, 0.0,
     0x1.54358fab95805p-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e67a2d0fe515dp-1, 0x1.b414b13c1ffbfp-841, 0x1.d9138ad0f5e5fp-246, 0.0,
     0x1.d56383ba19fd9p-256, 0.0, 0x1.282d568d6ec7ap-716, 0.0, 0x1.c4bf031d4b4e7p-481,
     0x1.88f10e2d72c37p-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ebb73f3c4c7dbp-329, 0x1.411c762234772p-482, 0x1.fbedcfa03e711p-353,
     0x1.11460358756bfp-20, 0.0, 0x1.5e3bed39303bcp-221, 0x1.c87ec217f1a7ap-235, 0.0,
     0.0, 0x1.64e46cc7afbc3p-402, 0.0, 0.0, 0x1.af740806cd7cp-485, 0.0, 0.0,
     0x1.c8b92c6542fb5p-37, 0.0, 0.0, 0x1.2c5f7b0bb293dp-699, 0.0, 0.0,
     0x1.8e0c336804629p-480, 0x1.121c8e895dae7p-15, 0.0, 0.0, 0x1.0e39884d8c70dp-26,
     0.0, 0.0, 0.0, 0.0, 0x1.8ff61ccd58fa8p-236, 0x1.fa987acfe582dp-129,
     0x1.c5538d1840067p-395, 0x1.2ed10930c7d4cp-141, 0.0, 0x1.9cfa314c55c2bp-93,
     0x1.fe4b5851e7c36p-772, 0.0, 0x1.2b48036fb0a2dp-557, 0x1.367ab677b3cbfp-616,
     0x1.020d50550bb36p-917, 0x1.fd7158965f4b3p-1005, 0x1.14e19b715a4d8p-118, 0.0,
     0x1.f0df5ff77ad42p-750, 0.0, 0x1.2f22291d9b407p-235, 0.0, 0x1.2b183b9a380b1p-798,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93118b3334272p-1003, 0x1.63c4fc598e179p-427, 0.0,
     0.0, 0.0, 0.0, 0x1.6295e5fe5c6ecp-960, 0x1.bf6bd58ef0241p-169, 0.0, 0.0,
     0x1.4a039f6470924p-413, 0x1.1a6a5d47df7c8p-978, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbefab4e3ddd2p-665, 0x1.45d9bd246f479p-568, 0.0, 0x1.99cbff3f0dc2ep-842, 0.0,
     0x1.53c56f3934131p-378, 0.0, 0.0, 0.0, 0x1.ce022db6d97afp-988,
     0x1.5f836c28834fcp-384, 0x1.64d0ccb97db2dp-57, 0.0, 0.0, 0.0, 0.0,
     0x1.b6f723213d785p-69, 0.0, 0x1.1f225ea7afaa7p-535, 0.0, 0.0, 0.0,
     0x1.ce83285714712p-94, 0.0, 0.0, 0.0, 0x1.02bbd63f5b121p-589,
     0x1.c0f67f13b681ap-715, 0x1.2e098dc50bbcep-289, 0.0, 0x1.19a98c3651bdp-459, 0.0,
     0x1.3f4cd0f4a3ce9p-28, 0.0, 0.0, 0.0, 0.0, 0x1.1281c319757a3p-209, 0.0, 0.0, 0.0,
     0.0, 0x1.a0a339624ad1bp-422, 0x1.fa8d9c0e0c686p-707, 0x1.2b3751f9be84p-123,
     0x1.0bc383095e14cp-165, 0x1.662a7a8ab695dp-217, 0.0, 0.0, 0x1.ce14917e5d939p-88,
     0x1.50bfdf2edbaaap-928, 0x1.d1f6c9ac47646p-835, 0.0, 0x1.ddeaa6af72ec9p-296,
     0x1.ee57f792a1d72p-750, 0.0, 0.0, 0.0, 0x1.672353f56f322p-709, 0.0,
     0x1.e7fb085b42bcfp-565, 0x1.937a87d185e3ep-166, 0.0, 0x1.5058d7663917ap-651, 0.0,
     0.0, 0.0, 0x1.02eb53333ddbp-900, 0x1.c8f7d5908c81bp-937, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ef3275ad0902p-1012,
     0x1.c941cf217d752p-531, 0x1.236da6fef6556p-995, 0.0, 0x1.a897251c57049p-634,
     0x1.d0841a5b3586ep-202, 0.0, 0.0, 0x1.91bc6a933cd1fp-64, 0x1.26bfccd5d8f66p-510,
     0.0, 0x1.f02133525c81ap-43, 0x1.d905566451105p-219, 0.0, 0.0,
     0x1.1c169ad6b21edp-364, 0.0, 0.0, 0x1.e8c65ffe4d9e2p-549, 0x1.82be889e31e45p-320,
     0.0, 0.0, 0x1.21a28d86109e3p-15, 0.0, 0x1.393a7dc25b8dcp-810, 0.0, 0.0, 0.0,
     0x1.a413fcf759e02p-341, 0.0, 0x1.6f8f3ac85f262p-614, 0x1.3d2f0d0fcf243p-684, 0.0,
     0.0, 0.0, 0.0, 0x1.394332a457decp-17, 0.0, 0x1.8505ec3473619p-156, 0.0, 0.0,
     0x1.e3f677543e567p-907, 0x1.913bf545ed008p-537, 0x1.a561c2672cd87p-772,
     0x1.e25750abdc5cdp-667, 0.0, 0x1.271bec17861a6p-1021, 0.0, 0.0,
     0x1.9ef6f4df864bap-269, 0.0, 0x1.e1870b06811ep-558, 0x1.44e91069bcf3fp-596,
     0x1.2bd206d480a4fp-859, 0x1.c6097169b72b9p-515, 0.0, 0.0, 0x1.f2e44564ad471p-919,
     0.0, 0x1.18841ee703c63p-443, 0x1.d12681cff45eap-338, 0x1.3416fae181f33p-132, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3c25ef5202657p-548, 0x1.4ac9c869404b8p-850,
     0x1.9a560ce7e9e3dp-199, 0.0, 0.0, 0x1.a4bedac60780bp-665, 0x1.622f80e80357dp-491,
     0.0, 0x1.ea17d304d12e9p-675, 0x1.20601bc3dc57dp-478, 0x1.e1994e0d99362p-259,
     0x1.babc6a3edb34cp-613, 0.0, 0.0, 0x1.d7bec07b46798p-727, 0x1.b664306773211p-714,
     0x1.29a7a794f8462p-886, 0x1.97578679f57e6p-761, 0.0, 0x1.a70a49b71ffb3p-469,
     0x1.64aa04d643711p-491, 0x1.9d6640a477329p-138, 0x1.a83edebe4588bp-580, 0.0,
     0x1.304337b1f7bd5p-377, 0x1.79c36a4c2bc5ap-955, 0.0, 0.0, 0.0,
     0x1.43a5b6da3b46fp-42, 0x1.11f7777dd689p-658, 0.0, 0x1.97a017a8cc103p-726, 0.0,
     0x1.46be12b721c43p-715, 0x1.4cf4f44d0afafp-796, 0x1.ca49d3eab4064p-649, 0.0, 0.0,
     0.0, 0x1.a7d6614c218ep-621, 0.0, 0.0, 0.0, 0x1.2e89e627a86cdp-725, 0.0, 0.0, 0.0,
     0x1.bda363ea8a988p-59, 0.0, 0x1.83bec1b8c7269p-733, 0x1.adf6d5500abe6p-346, 0.0,
     0.0, 0x1.b383c4012f986p-692, 0x1.f9fd2ff55aae1p-943, 0.0, 0.0,
     0x1.5cfc722097162p-671, 0x1.f07d3769e6368p-397, 0x1.b1c23b455f94cp-440,
     0x1.97158a8f145d3p-235, 0x1.5dc99ba0c0c2fp-804, 0x1.905fe771a8d75p-711,
     0x1.7d22f05c47317p-722, 0x1.6131ea067ef0cp-772
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
            tmp1 = Sleef_finz_sqrtd2_u35kvx(tmp0);
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
    printf("Sleef_finz_sqrtd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
