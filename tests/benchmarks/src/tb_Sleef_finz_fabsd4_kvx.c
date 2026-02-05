/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsd4_kvx.c --function Sleef_finz_fabsd4_kvx \
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
     0x1.8e34063d8ecbbp-24, 0.0, 0x1.4ed59fce5852fp-661, 0x1.ea163fb3e34p-663, 0.0,
     0.0, 0x1.74c68c05a5a1bp-606, 0.0, 0.0, 0.0, 0x1.a7b493590f18fp-500,
     0x1.37c691481d816p-94, 0x1.cf46858546f57p-660, 0.0, 0x1.e522d4b19cb4dp-280,
     0x1.108db1e2862edp-410, 0x1.5f83d372b4ef8p-831, 0.0, 0.0,
     0x1.aa82654d04219p-1012, 0.0, 0.0, 0x1.15ba494e0b241p-210, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.92d0b382a60ep-986, 0x1.c4f46a4e1161dp-338, 0x1.459b2591f5fa5p-840,
     0.0, 0x1.e6ec641fe68d3p-65, 0.0, 0.0, 0x1.6d49a07808bbap-113,
     0x1.805897d954f4cp-985, 0x1.003ccaace27cp-950, 0x1.ddefb7fdd974ep-997,
     0x1.6c95d45d6768fp-177, 0.0, 0x1.b61e58dae87fap-518, 0x1.b2172c22b0927p-454,
     0x1.ed15c21a8aa0ep-180, 0.0, 0x1.abe028c87c022p-980, 0x1.2020ad972852ap-345, 0.0,
     0.0, 0x1.50e32f6eab131p-411, 0x1.88aec077453bfp-787, 0.0, 0x1.e7ca1cb8fa409p-644,
     0.0, 0x1.a556b3c6cd118p-612, 0x1.895c9bd15bffdp-110, 0x1.d8c2974fa84c9p-723,
     0x1.95ed5d3b780bdp-922, 0x1.7a8165b6e98b5p-30, 0x1.789551d56dda1p-907,
     0x1.2a7efbe688bb5p-658, 0x1.422534d0245c1p-381, 0.0, 0.0, 0.0,
     0x1.5daf10cead2c5p-766, 0.0, 0.0, 0.0, 0.0, 0x1.939d50c5204fbp-825,
     0x1.a82feb8ddc5dcp-804, 0.0, 0x1.e115cef28ffe8p-536, 0x1.f57ab5825684ep-967,
     0x1.940de17710ac6p-358, 0.0, 0x1.26ae217b9b35fp-686, 0.0, 0.0,
     0x1.be6b0c21af4c8p-479, 0x1.1ef2d06e56e0fp-595, 0x1.d599ee2dfa2a2p-983,
     0x1.856d98e36544dp-77, 0x1.522913fc05cc5p-345, 0x1.eff3e129d04ddp-973, 0.0, 0.0,
     0x1.a4791de337e7p-938, 0.0, 0x1.9787292d6da1bp-257, 0x1.17f6a92605516p-755,
     0x1.d4e5369befddap-144, 0x1.6cb6d04b2a6edp-621, 0x1.51473d0e2eb1bp-426, 0.0,
     0x1.5461ea0baf7c3p-295, 0x1.09e0d82222141p-357, 0x1.0f381bae1be36p-696,
     0x1.7a44f33044cfcp-485, 0x1.137af2cffc4ddp-202, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df74e894208ffp-362, 0x1.9da0ba25ad391p-210, 0x1.366b92e1c15d3p-732, 0.0, 0.0,
     0.0, 0.0, 0x1.ab0650cb36972p-601, 0.0, 0.0, 0.0, 0.0, 0x1.2b6bb787fcb64p-389,
     0.0, 0.0, 0x1.a8209ee632d56p-577, 0.0, 0.0, 0x1.b21578e789544p-692, 0.0, 0.0,
     0x1.d793eda667d88p-581, 0x1.0a2b94fb53926p-966, 0.0, 0.0, 0.0, 0.0,
     0x1.6b58ef0c81fd4p-399, 0.0, 0x1.3ef148786c797p-134, 0.0, 0.0, 0.0,
     0x1.14729e465eae4p-460, 0.0, 0.0, 0x1.ea5c034a19eb2p-601, 0x1.65d9e2554fa9ap-520,
     0x1.86cd988d30f4cp-980, 0x1.fd556c0db2eap-230, 0x1.de074c1dc00f2p-210,
     0x1.de93475594563p-105, 0.0, 0x1.04298759d037p-169, 0x1.e86f3af7e73c4p-301,
     0x1.02a48549e557p-377, 0x1.de79dd59332bp-520, 0x1.9562ce86b616fp-374, 0.0,
     0x1.d8473cd9dd60cp-730, 0x1.8dcb93f5fe241p-446, 0.0, 0x1.8648477bbe6cep-204,
     0x1.2e960bb13c03cp-64, 0x1.b58aa29194764p-625, 0x1.44b349ff2691ep-91, 0.0, 0.0,
     0.0, 0x1.8e6fad26144dep-482, 0.0, 0.0, 0x1.97089cbf352edp-905, 0.0,
     0x1.704364920940ap-331, 0.0, 0x1.3eabeb3c50889p-219, 0.0, 0x1.21780304c3018p-757,
     0.0, 0x1.fecece24ff74fp-490, 0.0, 0.0, 0.0, 0x1.18adb788a5dc6p-914, 0.0,
     0x1.613918a36897p-949, 0.0, 0.0, 0.0, 0x1.251eb54c56082p-501,
     0x1.80a4a51d76747p-1001, 0.0, 0.0, 0.0, 0.0, 0x1.bbc5c131ebf7fp-269, 0.0,
     0x1.006411d424fa3p-431, 0.0, 0.0, 0.0, 0x1.06d20d1dee809p-180, 0.0, 0.0,
     0x1.251d575dfa0dep-11, 0.0, 0x1.3471783eb6e9bp-417, 0x1.9a9cab5a19eadp-362, 0.0,
     0.0, 0x1.ba2923ada905dp-11, 0x1.155153506664p-783, 0.0, 0.0,
     0x1.9eb6a37295312p-594, 0x1.6015759234589p-27, 0x1.5d0112dff32ep-597, 0.0,
     0x1.b70a37c9e220ep-194, 0x1.57acda3a308c5p-583, 0x1.7aa31e1b74527p-1022, 0.0,
     0.0, 0.0, 0x1.ce1a143c95c8bp-944, 0x1.3f4c8d789355ap-360, 0x1.441bdb3c0d218p-299,
     0.0, 0.0, 0.0, 0.0, 0x1.e5b246abaabd2p-705, 0x1.d90d8427cc3bep-984,
     0x1.24226bda9b67ep-399, 0x1.80bee60ab8758p-626, 0.0, 0x1.48e546c33a362p-195, 0.0,
     0x1.16d656544a0cfp-3, 0x1.b34b0c5c57d5fp-396, 0.0, 0.0, 0x1.9163d22daf18bp-996,
     0.0, 0x1.5effa886568ebp-408, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f66a0f48dd101p-859, 0.0, 0x1.76061cb31fae2p-861, 0x1.9a9d359a38a9fp-687,
     0x1.2cc4b343c4db2p-805, 0.0, 0x1.7dd5dfb830172p-268, 0.0, 0x1.e4f8798cad94ap-313,
     0.0, 0x1.a6ff2e812f81dp-365, 0x1.0b86c46d01a25p-33, 0.0, 0x1.ac81b5f9fdb7cp-596,
     0x1.ee8c6682b6b44p-215, 0.0, 0.0, 0.0, 0x1.c52a2a39c9b5p-980, 0.0, 0.0, 0.0,
     0x1.b4a43ebb142d6p-548, 0x1.b4d4e1787fa22p-368, 0.0, 0.0, 0x1.37c598aca5f47p-19,
     0.0, 0x1.e3c5ccd2c27bfp-927, 0x1.49ad9343b4e35p-865, 0x1.5bb79345f1326p-919, 0.0,
     0.0, 0.0, 0x1.57a3039e3407ep-746, 0.0, 0.0, 0x1.d0524e107a0a5p-337,
     0x1.fae99a07e484bp-299, 0.0, 0.0, 0.0, 0x1.bc43c82cd109ep-973, 0.0, 0.0, 0.0,
     0x1.2007945924e0ap-432, 0x1.feeaf4bdda525p-239, 0x1.97adeac6f9649p-511, 0.0, 0.0,
     0x1.1ee27732829bep-839, 0x1.70ca0b6c2abc8p-914, 0.0, 0x1.91d0e645f77f1p-336,
     0x1.66fc5c48e9a7dp-991, 0.0, 0x1.daee1fe2a294cp-241, 0.0, 0x1.36b8b1bb9875bp-523,
     0.0, 0.0, 0x1.564efa1b033b3p-536, 0.0, 0.0, 0.0, 0x1.ed7fe8d993d45p-910, 0.0,
     0.0, 0x1.385d6792fdf59p-397, 0.0, 0x1.102ec59d09c5fp-597, 0x1.e9f8b055e732fp-219,
     0x1.126b06239a449p-321, 0x1.46216224c808bp-77, 0.0, 0x1.aa492986d2753p-681,
     0x1.331a286d51db4p-774, 0.0, 0.0, 0x1.7a547f5a6b0f2p-567, 0x1.0bca30e8f19bap-475,
     0.0, 0.0, 0x1.ec909e42a1a93p-604, 0x1.07d41e12ba217p-677, 0.0,
     0x1.8beffc25f6eebp-477, 0x1.0a488e50440f4p-263, 0.0, 0.0, 0x1.9c29ae2819d38p-272,
     0.0, 0x1.ba6dbe7bd676cp-102, 0.0, 0x1.87071825074a9p-108, 0.0, 0.0, 0.0,
     0x1.57807c3c722c4p-340, 0x1.94fe5e0483411p-927, 0.0, 0.0, 0.0,
     0x1.fa5d34caf44b4p-961, 0x1.a138144c318b1p-28, 0x1.7b60718f3105ap-539,
     0x1.863b6db876e1p-753, 0.0, 0x1.f72715346980ap-364, 0.0, 0.0, 0.0,
     0x1.6495c4338246cp-356, 0x1.adaf7736657c5p-439, 0.0, 0x1.9b9a7efd1902p-91,
     0x1.65087985239a6p-997, 0.0, 0x1.d9f730c9e5949p-595, 0x1.041508b999725p-936,
     0x1.77b88b0061f18p-922, 0x1.f60b44cf8613cp-8, 0.0, 0x1.81771a9746347p-749,
     0x1.8696c74505c8bp-593, 0.0, 0x1.e0b40374991a7p-343, 0.0, 0.0,
     0x1.63eb89aad41b8p-160, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.423af77c9c11bp-331,
     0x1.cc184eb7cbd42p-437, 0x1.9e8d7b027b678p-838, 0.0, 0x1.e6487ec8ab8ccp-517, 0.0,
     0x1.61050be4b45a8p-974, 0.0, 0x1.fcffaaf16301fp-943, 0x1.b69dcef59f0f6p-944,
     0x1.0e2a8deab89cap-248, 0.0, 0x1.c2635671cbd7ep-850, 0x1.b3f481f80d911p-838, 0.0,
     0.0, 0.0, 0.0, 0x1.330a5cfd5c8f4p-491, 0.0, 0x1.28776afdebe45p-201,
     0x1.e2e4f0345e69cp-585, 0x1.18a3e3ad737c2p-151, 0x1.9ed22d22cd088p-281, 0.0, 0.0,
     0x1.5fcc48ef75c9p-843, 0x1.220dd938de2e3p-931, 0x1.c21173fc46132p-155,
     0x1.0b18b98e0fa72p-893, 0.0, 0.0, 0.0, 0.0, 0x1.622a04083914cp-206, 0.0,
     0x1.a01a4e6eb6707p-77, 0x1.4393aef4616d3p-419, 0.0, 0.0, 0x1.64500af3a1f17p-165,
     0.0, 0.0, 0.0, 0.0, 0x1.76719d7ab0182p-380, 0x1.d8a1173ba632p-175,
     0x1.41c1507e2d92ap-861, 0x1.f14d1441ad83p-615, 0.0, 0.0, 0x1.5123bf179e3b5p-373,
     0.0, 0x1.1878e42ea4d25p-377, 0.0, 0.0, 0.0, 0.0, 0x1.64e1e1c0c5e24p-684, 0.0,
     0x1.98114a2486cbap-565, 0.0, 0.0, 0x1.30f64c65107a7p-179, 0.0,
     0x1.24dfcc7a4c3d2p-458, 0x1.45ad90d1c4925p-213, 0.0, 0x1.cadbf18dae863p-755, 0.0,
     0.0, 0x1.5845f82ebb88dp-772, 0.0, 0x1.96788e1070591p-17, 0x1.b281614e00f4ap-172,
     0x1.8bcb50d6469cep-343, 0.0, 0x1.eda246db3e404p-768, 0.0, 0x1.693fe14acabcep-523,
     0.0, 0.0, 0x1.67864ebbdfb39p-633, 0x1.e38fbcc1ed521p-187, 0.0,
     0x1.112248aee6e69p-152, 0x1.213669929c22bp-10, 0.0, 0.0, 0x1.31c9644867ba4p-430,
     0.0, 0x1.e9e08be017b34p-555, 0x1.1f7255e661f1ap-547, 0x1.a5e83d67fd2ecp-338, 0.0,
     0.0, 0x1.e1940a6bf839cp-985, 0x1.fd82c172749ebp-851, 0.0, 0.0,
     0x1.0225f390542b1p-537, 0x1.c979fd920b0f7p-954, 0x1.cf05a35cd9cd2p-842,
     0x1.bde16887fe5b1p-419, 0x1.74905fa90558p-467, 0x1.552d71b88f18ep-250, 0.0,
     0x1.8f159ece663a8p-426, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe766ad72e66fp-867, 0.0,
     0x1.8162692f773f2p-992, 0.0, 0x1.628b29ce40fb5p-172, 0x1.f7f5da411a874p-715, 0.0,
     0.0, 0x1.774d128b4459dp-238, 0.0, 0.0, 0x1.82190496545c2p-584,
     0x1.7cd8876905751p-516, 0x1.0b6f5b6136b71p-861, 0.0, 0.0, 0x1.fdec738433e32p-40,
     0.0, 0.0, 0.0, 0x1.64f98d32e2cd3p-306, 0x1.b06e09588f5aap-217, 0.0, 0.0,
     0x1.1f85256e61e64p-387, 0.0, 0x1.fd62b6100641ep-1010, 0x1.a6214e02db2dep-125,
     0x1.cdad2c6263f2fp-370, 0x1.df5fdf79557a7p-775, 0.0, 0x1.f6fd14f2b82c5p-985, 0.0,
     0x1.e84986884d527p-883, 0x1.0e176976c4df4p-332, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40867adca953p-341, 0x1.b108911f6565cp-848, 0.0, 0x1.9004a42891a3fp-941, 0.0,
     0x1.6df0a3211731ap-585, 0.0, 0.0, 0.0, 0x1.558399c8f5a4dp-454,
     0x1.17e2e19731187p-365, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40c27407469fap-596, 0.0,
     0x1.9bdb83ccbf173p-39, 0.0, 0x1.ccc325e33f168p-179, 0.0, 0x1.652aa047c4dc7p-835,
     0.0, 0.0, 0x1.39834f7a33515p-173, 0.0, 0.0, 0.0, 0.0, 0x1.fc8bfc1254ee6p-807,
     0.0, 0.0, 0x1.f3215d0a2570ap-586, 0.0, 0x1.e3cafce8e9caap-749,
     0x1.2be98988fde11p-238, 0.0, 0.0, 0x1.1d76cd57393b2p-8, 0x1.88a8d254d713ep-27,
     0.0, 0x1.e7ca85d883f3ap-227, 0x1.0389ab224810cp-376, 0.0, 0x1.063c7780df83p-531,
     0x1.9fd96a7e3db38p-227, 0x1.cf4e878cf0db7p-834, 0.0, 0.0, 0x1.c231d121668e2p-829,
     0.0, 0x1.a300541894549p-867, 0x1.9eb045a251289p-466, 0.0, 0x1.fded83e9d91d3p-522,
     0x1.34670d1cc5c3fp-751, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c27e7f85a683ap-779,
     0.0, 0x1.171b40aef10bfp-461, 0x1.b28b8a31ed81ap-701, 0.0, 0.0,
     0x1.b849a7f00d7a1p-467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84fb5f876c541p-211, 0x1.49db1c2f97035p-56, 0.0, 0x1.add6ffa504be7p-664, 0.0,
     0x1.55e3c15c84e0bp-253, 0.0, 0x1.faad4b11414ecp-582, 0x1.9f4ae3caea608p-391,
     0x1.b1944ce2bd395p-452, 0.0, 0x1.1d7e9877f1e83p-581, 0.0, 0x1.630633ab3471cp-979,
     0x1.b07e5c9f9167ap-810, 0.0, 0x1.5d2c298bb02ebp-724, 0x1.c3d521222d8a8p-613, 0.0,
     0.0, 0x1.c01ac2726a36ep-201, 0.0, 0x1.2fddf923ce1f5p-953, 0x1.aca6e01eb5545p-495,
     0.0, 0.0, 0.0, 0x1.cb9c202e2c8ecp-698, 0x1.fc60571ed0181p-402, 0.0, 0.0,
     0x1.f2f755679bba9p-359, 0.0, 0.0, 0x1.b3867aaf86534p-619, 0x1.6265873337902p-441,
     0x1.fb2bec97f3504p-221, 0x1.d4e446d9fb343p-112, 0x1.f27489f1cf1bp-328,
     0x1.276f05ee55917p-428, 0.0, 0x1.95b3ebd76b6dcp-820, 0x1.a14f0d6303711p-480, 0.0,
     0.0, 0x1.20347f5f97d9ep-671, 0x1.4805c751781c3p-315, 0.0, 0x1.4befc29ad433p-304,
     0.0, 0.0, 0.0, 0x1.9da8fa167dddfp-840, 0x1.7bedb3ac79058p-840, 0.0, 0.0, 0.0,
     0x1.70bb8d9ccfbd8p-847, 0x1.02dde54ef1f19p-430, 0x1.eb084a204ebdap-16, 0.0,
     0x1.300520e1548bbp-839, 0.0, 0x1.f3bb0a7ead366p-612, 0x1.4f59e2fc39ad3p-937,
     0x1.29d680efca6cp-67, 0.0, 0.0, 0.0, 0x1.b8ef94a75134ap-878, 0.0, 0.0,
     0x1.7ceab6ff31712p-834, 0x1.4e0d4ae38c555p-484, 0x1.d6d29bfab0b59p-907, 0.0,
     0x1.205e239d8ea08p-542, 0.0, 0.0, 0x1.7a76fa765a68p-232, 0.0, 0.0,
     0x1.4eec44b753ee2p-851, 0x1.88e88c9ea1032p-641, 0.0, 0x1.0d2c6f475683bp-480,
     0x1.6393a2887fcap-421, 0.0, 0.0, 0x1.5cae010a44d97p-285, 0x1.aa4aefa8bcf62p-897,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb2ab2223efd3p-89, 0x1.39a23a749afdfp-566, 0.0,
     0x1.77136ffc6e163p-459, 0.0, 0.0, 0.0, 0x1.3e08c12951dafp-116, 0.0,
     0x1.af7642afeea14p-889, 0.0, 0.0, 0x1.45b32ff53da8fp-293, 0.0,
     0x1.587f95bb4e293p-237, 0.0, 0.0, 0x1.8345f1b6dba0bp-221, 0.0,
     0x1.4e655328b2c94p-695, 0x1.c1336344d53c5p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d5ebc0221058p-838, 0.0, 0x1.dde8b198a14f4p-285, 0.0, 0.0,
     0x1.d49ecd2478046p-746, 0.0, 0x1.ead3d2c23a188p-97, 0x1.65d0f2cb241fcp-1000, 0.0,
     0.0, 0.0, 0x1.a7542ba1d183fp-831, 0.0, 0.0, 0x1.7dc0aa7553729p-969, 0.0, 0.0,
     0x1.486d52be8788p-209, 0.0, 0x1.117759b2eace1p-867, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.980284a024fc7p-203, 0x1.0e39c7e2c9deap-224, 0x1.55cfe8bb36cbdp-1021,
     0x1.e437106c701b3p-305, 0.0, 0x1.df46149915383p-217, 0x1.61e7c7d7e1efp-756,
     0x1.0f98b2e04a26cp-892, 0x1.3b8a8b1687fa8p-714, 0x1.0c31ab720796p-14, 0.0, 0.0,
     0.0, 0.0, 0x1.8f68afde71c69p-942, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ceb4129237b5dp-175, 0.0, 0x1.9684d906ad8eep-112, 0.0, 0.0, 0.0,
     0x1.310073a1392e8p-841, 0.0, 0.0, 0.0, 0x1.ed6833967f71ep-666, 0.0,
     0x1.ea28239bb68eap-342, 0.0, 0.0, 0x1.529ca1092e6abp-899, 0.0, 0.0, 0.0,
     0x1.f902bb6c6f555p-688, 0x1.68738840b52ebp-161, 0x1.b015a982b41edp-1020, 0.0,
     0x1.e09fb2a88507ap-369, 0.0, 0.0, 0x1.218dffd8683aep-781, 0x1.4316070e85688p-17,
     0x1.9757a2c91eecfp-580, 0.0, 0x1.b12c41bce86e2p-164, 0.0, 0.0, 0.0,
     0x1.c5834202fb11fp-29, 0.0, 0x1.c901ecb607f34p-809, 0.0, 0.0, 0.0,
     0x1.a5b6b2e37393cp-192, 0x1.8c58f24ac5d51p-329, 0.0, 0.0, 0x1.5583e3aa3c6a3p-54,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2aa21af35d316p-80, 0.0, 0x1.ca9e640acbff2p-331, 0.0,
     0.0, 0x1.e9575bed07eb4p-9, 0x1.e55eee7a8299ep-275, 0x1.919277a7ce5b2p-818, 0.0,
     0x1.2ff3a0296bc21p-958, 0x1.1e88040739ef9p-374, 0x1.bd2eaf87d8515p-873, 0.0, 0.0,
     0.0, 0x1.7d72168e5ddebp-790, 0.0, 0x1.118ad5e50e5dfp-927, 0.0, 0.0, 0.0,
     0x1.d362dd7391f2bp-355, 0.0, 0x1.1d4dd828e4019p-147, 0x1.074e90fb04cd3p-934, 0.0,
     0x1.0b364fcd38ad8p-950, 0x1.f386d1d0bd344p-589, 0x1.cc32adeac023p-552,
     0x1.a97c3831770f3p-304, 0x1.8a247bb84a47bp-877, 0.0, 0x1.ec73b21b15a73p-858, 0.0,
     0.0, 0.0, 0x1.aeae730537367p-876, 0x1.143576090b6abp-235, 0.0,
     0x1.8bd2ef73658c3p-385, 0x1.ab73686cf5525p-6, 0x1.13073784410eep-896, 0.0, 0.0,
     0.0, 0x1.be5af848fb14cp-287, 0x1.b58c601139b32p-881, 0x1.09eaa1615fcb6p-784,
     0x1.ce583e48c077ap-624, 0.0, 0x1.01eeab4982e6dp-338, 0x1.7af62cd383b0fp-296,
     0x1.829a242219c15p-638, 0.0, 0.0, 0x1.d22b99afb71b7p-544, 0x1.f619de57c7cf2p-545,
     0x1.a6598f6b7496ap-55, 0x1.34e8d972955c8p-887, 0.0, 0x1p0,
     0x1.7a36f8fc57109p-787, 0x1.368a2ccb07d31p-30, 0.0, 0x1.f74b2dc5c597ap-336, 0.0,
     0x1.bf5904de8d804p-437, 0.0, 0.0, 0.0, 0x1.9c3bc3b957a3bp-618,
     0x1.87aeca7b54c7cp-258, 0x1.98c96a14c1c8fp-371, 0x1.faa586f9435bbp-208, 0.0,
     0x1.51accd6973298p-617, 0x1.46aebb311779fp-72, 0x1.14819626b3827p-200,
     0x1.29ab3f64b5bc1p-227, 0.0, 0x1.cf78065702902p-244, 0x1.98f3fa625e481p-383,
     0x1.0464c1f217a69p-322, 0.0, 0.0, 0x1.4c8d007899a4ep-780, 0.0, 0.0,
     0x1.775167c7903a4p-522, 0x1.78163b61e3994p-439, 0.0, 0.0, 0x1.3bf9915e26441p-633,
     0x1.05028abb9d57fp-998, 0x1.88dceffbfccdfp-1013, 0.0, 0x1.d19cf4e8e4d56p-278,
     0.0, 0.0, 0.0, 0.0, 0x1.a13cccbbf95d5p-84, 0.0, 0.0, 0.0, 0x1.6e76f6042b233p-743,
     0x1.10e5ceabb4f4p-272, 0.0, 0x1.cba40a88a4c68p-966, 0.0, 0x1.eed6a7fa8dbep-671,
     0x1.63cc0a9a12aa6p-307, 0.0, 0x1.7075b2a3680b1p-603, 0x1.e8425d4f3f211p-966,
     0x1.3c0442d3463d1p-70, 0.0, 0x1.ec3e715d2f1bbp-225, 0.0, 0.0,
     0x1.058f1ecaa25eap-186, 0.0, 0x1.620a5abab04bdp-223, 0.0, 0.0, 0.0,
     0x1.fcc7b4d1a7c1ap-932, 0x1.1f1484f1c50f2p-516, 0x1.8981346bdd7d6p-166,
     0x1.8d6dcb004306ep-522, 0.0, 0x1.67433adb442bfp-565, 0x1.2c23c10096d06p-615, 0.0,
     0.0, 0x1.fdd919bd29c16p-148, 0x1.ea0357adb5eb6p-122, 0x1.a9d21797cdb62p-828,
     0x1.1ae343bfbd043p-276, 0x1.859620d51844cp-522, 0.0, 0x1.01edf4c5ae6aep-835,
     0x1.350ded2bd9821p-215, 0.0, 0x1.58b483594c58dp-299, 0x1.dc37caf938acap-1014,
     0.0, 0x1.4651a68035c02p-851, 0x1.f0ae28eee509fp-835, 0.0, 0x1.7420ccfd2ec93p-46,
     0x1.1b431366a7bdap-146, 0.0, 0x1.726c029777abep-591, 0x1.f392f890048bbp-996, 0.0,
     0x1.60687f70b26b5p-455, 0.0, 0.0, 0x1.f7fbcd82e31b7p-928, 0.0,
     0x1.0af02db1c6055p-661, 0x1.100c9350a8a41p-563, 0.0, 0.0, 0.0, 0.0,
     0x1.d48ca21d223b9p-53, 0x1.c9643b0ff326ep-129
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
            tmp1 = Sleef_finz_fabsd4_kvx(tmp0);
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
    printf("Sleef_finz_fabsd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_fabsd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
