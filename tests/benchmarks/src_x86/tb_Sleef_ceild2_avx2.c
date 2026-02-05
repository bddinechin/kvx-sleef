/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceild2_avx2128.c --function Sleef_ceild2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.ba84ef43af7e8p-135, 0.0, 0x1.43ecd40c5712bp-550, 0.0,
     0x1.4b1cfa4123b41p-469, 0.0, 0.0, 0.0, 0x1.b461555c9aed5p-934,
     0x1.fbdf5193816f9p-858, 0.0, 0x1.e3ac3e2d36022p-108, 0.0, 0x1.739fd1b4d7d12p-666,
     0x1.915021ddee678p-1006, 0x1.c58d17615b4a4p-1016, 0.0, 0x1.b91a3b212774p-460,
     0x1.f7fdb3b6df1c4p-67, 0.0, 0x1.c49bd9995d3f9p-595, 0.0, 0x1.783bb80962981p-198,
     0.0, 0x1.69886baf755ebp-120, 0.0, 0.0, 0.0, 0x1.94d6cc2014e12p-503,
     0x1.10f0cd8f1359bp-524, 0x1.d4cee0497a506p-149, 0.0, 0x1.40a84ff02c9e5p-97, 0.0,
     0.0, 0x1.f1d17a313db1bp-307, 0.0, 0.0, 0.0, 0x1.288d197b3714bp-344,
     0x1.c1c1599700bc7p-785, 0x1.26466d2663da1p-7, 0x1.73beb5e24e4b4p-285,
     0x1.d968a25e3p-337, 0x1.f0f32ae31de6dp-759, 0.0, 0x1.82f8b09d3cb65p-851, 0.0,
     0.0, 0x1.869be1736f571p-159, 0.0, 0.0, 0.0, 0x1.7d1e0a32de9a9p-997, 0.0,
     0x1.a68c9d143b5e6p-796, 0.0, 0x1.dfc164dc7f1f7p-340, 0x1.8e18825cde95p-590,
     0x1.5e3f8732dd4dfp-857, 0.0, 0x1.66639b33fab9fp-892, 0x1.64f4ac3c9675p-185,
     0x1.3ab77fbf674ffp-894, 0x1.4dea876827142p-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dacfc6b01a465p-729, 0.0, 0x1.d3da8b8a5d923p-741, 0.0,
     0x1.ba0d854b6cd67p-1002, 0.0, 0x1.cd2c9483f6fb4p-51, 0x1.bf978326f49f2p-561,
     0x1.9707cee9e136fp-314, 0x1.2cc1ce1c9a75fp-150, 0x1.37c86298e018dp-899,
     0x1.4a8f6ae8712d7p-777, 0.0, 0.0, 0.0, 0x1.dfc78bd9cfd38p-22, 0.0, 0.0,
     0x1.e955d68c4d072p-645, 0x1.7690713edbb2ep-854, 0.0, 0x1.22bf882edc63ap-10,
     0x1.f215fd1672a91p-539, 0.0, 0.0, 0x1.729dc37349387p-999, 0x1.943501c17677p-572,
     0x1.c2b9ca12f4ae2p-125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1087978608907p-67, 0.0,
     0.0, 0x1.1b4469d22b3dap-489, 0x1.e8635648d87dp-564, 0x1.5410ecf68006cp-699,
     0x1.b4ab9fdd19a58p-189, 0x1.5000605bb15b2p-349, 0x1.563c94a0fe112p-490, 0.0, 0.0,
     0.0, 0x1.f668a623f3d09p-402, 0x1.4a98f1b60f843p-573, 0x1.eb115b9c500e4p-879, 0.0,
     0x1.0af77fe3482fep-439, 0x1.b0975b5d63a81p-185, 0x1.60f3cb289e2d4p-680,
     0x1.39ed73fdb2e1p-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa83d20747088p-631, 0.0,
     0x1.44d3db13aad3cp-299, 0.0, 0.0, 0x1.a7d860082ac75p-375, 0.0,
     0x1.c8cb0d4de1e0cp-565, 0.0, 0x1.4df4f30d9ce45p-921, 0x1.c31ddd1b751e8p-643, 0.0,
     0.0, 0.0, 0.0, 0x1.bdf4733e9bccbp-557, 0.0, 0x1.e0b7b74c6799ap-680, 0.0,
     0x1.028cfc2532795p-614, 0x1.41d389041fbacp-1008, 0x1.92e310bb3b44cp-930,
     0x1.22e36801c5174p-525, 0.0, 0.0, 0x1.dd0fc5d259014p-939, 0x1.5bcef94034843p-835,
     0.0, 0.0, 0x1.dd94572e705a7p-777, 0.0, 0.0, 0.0, 0x1.f069101be4ec5p-746, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f3f78bd125a6p-893, 0x1.9db754afac5ffp-636, 0.0,
     0.0, 0.0, 0.0, 0x1.4f15acaf54d8bp-251, 0.0, 0.0, 0x1.08f7edd2a9916p-282, 0.0,
     0x1.563192d059b22p-828, 0.0, 0x1.e4fa7e6cfc6f2p-698, 0.0, 0x1.b399d979c3d57p-49,
     0.0, 0x1.acf380471c546p-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed1cc2e13cca2p-225, 0.0,
     0.0, 0.0, 0.0, 0x1.05b8fe4cb35dbp-968, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.174e7589fc386p-534, 0x1.e65bbaa93ac44p-526, 0x1.956d1dd6a60ecp-938,
     0x1.8cf8d2c5eb5a8p-616, 0x1.f2b7b6ef338a3p-258, 0.0, 0.0, 0x1.75a9775a7aab8p-176,
     0x1.c034671385056p-445, 0x1.f99b5421a875ap-964, 0x1.d67af95c9027dp-580,
     0x1.44fe37ecc2bfap-699, 0x1.aac7aa8e32a69p-798, 0.0, 0.0, 0x1.ea2c8b5e8224ap-392,
     0.0, 0.0, 0x1.e97d302c3c6c1p-286, 0.0, 0x1.6a20559049c9p-465,
     0x1.c7f8151e1a3b2p-129, 0x1.5a73ff7706482p-556, 0x1.3d3de8308cb96p-546,
     0x1.e8e10ae3dbfc8p-465, 0.0, 0x1.f3d89ca54fbf3p-988, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94507b2306a3fp-650, 0x1.30313221c233fp-154,
     0x1.7873e00f7f361p-897, 0x1.3307a24cbad83p-206, 0.0, 0.0, 0.0, 0.0,
     0x1.6a85e0e27024cp-97, 0.0, 0.0, 0x1.b56e28cec3c62p-753, 0.0, 0.0, 0.0,
     0x1.f8fcf54cba325p-642, 0.0, 0.0, 0x1.870e488ab2e52p-47, 0.0,
     0x1.d6110cefcc7acp-220, 0x1.e7706bb811e17p-189, 0.0, 0.0, 0x1.c8af7fe668bebp-927,
     0.0, 0.0, 0x1.b84adaf59992cp-392, 0x1.8093a2a939a96p-998, 0x1.9838fc442d344p-460,
     0x1.e6dcf120324a9p-648, 0x1.b896807a1dd85p-525, 0x1.45f70589ea61ap-626, 0.0, 0.0,
     0.0, 0x1.425d5bdb42c31p-574, 0x1.ba3cf685894ecp-147, 0.0, 0.0, 0.0, 0.0,
     0x1.15a4cf52ae3bdp-999, 0.0, 0.0, 0.0, 0x1.9d75f1d921785p-844,
     0x1.888955d533ec2p-340, 0.0, 0x1.6962fde8c38ebp-644, 0.0, 0x1.d6f817a98c7fep-523,
     0.0, 0x1.e8c823b83a80fp-724, 0x1.873b0856811a9p-827, 0.0, 0.0, 0.0,
     0x1.98143e52a342p-75, 0x1.19aec409259a4p-91, 0.0, 0.0, 0x1.57a4bf41c3d07p-804,
     0.0, 0x1.f22640f1cff6bp-114, 0.0, 0.0, 0.0, 0x1.356dff4b3bcd7p-90, 0.0, 0.0,
     0x1.fda040a85ec41p-705, 0.0, 0x1.1709b5a321b8cp-387, 0x1.a6fc5940549d6p-945,
     0x1.7c4144b68389ep-706, 0x1.5c8a3a8b023afp-64, 0x1.6b82c24cb82dap-324,
     0x1.975614f84419p-222, 0x1.765cc414f19b7p-559, 0.0, 0x1.00ea3d1f68b6p-652, 0.0,
     0.0, 0x1.dede9f2b58ccep-809, 0.0, 0.0, 0x1.edf7cf36c7d13p-821,
     0x1.b2eb5791099f4p-68, 0x1.1b6cf375298b6p-774, 0.0, 0x1.f1381a3dd308dp-973, 0.0,
     0x1.eaf4baf0e8999p-724, 0x1.07a2ba58744c3p-762, 0.0, 0.0, 0x1.1d8d4ddc1a2f4p-357,
     0.0, 0x1.4a46de7670a67p-368, 0.0, 0x1.8b9858c84ff5dp-83, 0x1.cfae1395b6734p-358,
     0x1.af0bf95261693p-420, 0.0, 0x1.332e861cd97d9p-723, 0x1.ba8d95795f178p-154,
     0x1.236012e71968ap-573, 0.0, 0.0, 0x1.caaeef7d100d8p-733, 0.0, 0.0,
     0x1.a9e24ca9d3354p-377, 0.0, 0.0, 0x1.181414399ddf2p-17, 0.0, 0.0, 0.0,
     0x1.f462064288f92p-620, 0.0, 0.0, 0.0, 0x1.6746e4e946d52p-128,
     0x1.f9018318a8fep-490, 0x1.074f67694c17p-830, 0.0, 0x1.21c6eab736439p-816, 0.0,
     0x1.2891740929d29p-479, 0x1.26e4d6ba7dd81p-998, 0x1.1cb1952fd25ebp-273, 0.0,
     0x1.02b264206b5b1p-712, 0.0, 0x1.6cede2c3db60ap-446, 0.0, 0x1.abf3e4e540c04p-567,
     0x1.de0b8eb2aba74p-650, 0x1.449981a2a1428p-933, 0x1.f5f6fee6cbfdp-287, 0.0, 0.0,
     0x1.0d219c879b4e7p-135, 0x1.1301abb0ee6f9p-345, 0.0, 0x1.71006d40d0a36p-285, 0.0,
     0.0, 0.0, 0.0, 0x1.083850dac2053p-28, 0x1.c2eb8f635054bp-268, 0.0,
     0x1.5c8cdb5a818a4p-678, 0x1.0bffe76b953b3p-490, 0x1.c11f747edd0cp-110, 0.0, 0.0,
     0x1.7fd9d8ed083dap-908, 0.0, 0.0, 0x1.f280c5d92e8ddp-148, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8bd3a0871cae5p-81, 0.0, 0.0, 0.0, 0x1.fdd183d22a46dp-515, 0.0,
     0.0, 0.0, 0.0, 0x1.eb899577058cp-777, 0x1.07af8f9b2fb58p-680,
     0x1.fd906f3ad90cbp-884, 0x1.8a196a71976b5p-698, 0x1.edcdbcd9f55edp-642, 0.0,
     0x1.751ecbde82bc7p-144, 0.0, 0.0, 0.0, 0x1.df42f8b6909a4p-571,
     0x1.8041d97cfcba8p-989, 0x1.20c40ccb21a9bp-356, 0.0, 0.0, 0x1.5913ca637d602p-135,
     0x1.4402f8f9da4edp-611, 0x1.3db9a758e9687p-901, 0x1.5515faf8dea99p-532,
     0x1.7024a1904fa14p-653, 0x1.110edbdea0c98p-965, 0.0, 0x1.5aa91bb1d682p-633,
     0x1.bdfc8d1b8382p-945, 0.0, 0.0, 0x1.a4aa5dea62fe1p-871, 0.0,
     0x1.e5dd8e5738a49p-342, 0.0, 0.0, 0x1.6cb35c221cc77p-780, 0.0, 0.0,
     0x1.08cd6148eeaa8p-903, 0x1.58fef30493b92p-353, 0x1.f7088c0351a29p-543, 0.0,
     0x1.dbe70ac24786fp-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9eb48226c2d5p-100,
     0x1.ec7531fb7242ep-730, 0.0, 0x1.6495df450eb75p-272, 0.0, 0.0,
     0x1.d94829ca0e1ccp-424, 0.0, 0x1.d084d6a1aebbbp-903, 0.0, 0.0, 0.0, 0.0,
     0x1.d62fd64483d43p-81, 0x1.9c388ea263848p-996, 0x1.87a7ace9036aap-23,
     0x1.bc430746557edp-305, 0x1.ef1276de7ff7fp-959, 0x1.929b7f1fb1d5cp-249,
     0x1.69017ac99500cp-564, 0x1.bea798ccbe09bp-720, 0.0, 0.0, 0x1.63513a880b7ddp-318,
     0x1.e7bf4281a050fp-547, 0.0, 0.0, 0.0, 0.0, 0x1.029605878113fp-172,
     0x1.6ee0af76b86a9p-253, 0x1.28e19a37fe71dp-795, 0x1.1775aec077866p-299, 0.0, 0.0,
     0.0, 0.0, 0x1.96416c76a590cp-152, 0.0, 0x1.172d0a8830467p-704,
     0x1.9519c1f5049b9p-512, 0x1.b326bdbe334fap-924, 0x1.f4683dab9338dp-578, 0.0, 0.0,
     0.0, 0.0, 0x1.d4c312c888a0ap-667, 0x1.92b1de8ad7931p-49, 0x1.b40130a007eb2p-857,
     0.0, 0x1.fc2d914516492p-684, 0.0, 0.0, 0x1.91957228d38fbp-693,
     0x1.0c4f88e3b4794p-775, 0.0, 0x1.924f283784717p-920, 0x1.a48c6bc2ea97fp-824, 0.0,
     0.0, 0x1.8c6890f37b956p-713, 0.0, 0.0, 0.0, 0x1.e059d5d5200cap-886, 0.0,
     0x1.cf2d2099dd0bbp-714, 0.0, 0x1.1ebe0a017add8p-753, 0x1.05e17e4ece9bbp-647, 0.0,
     0.0, 0.0, 0.0, 0x1.abd1f56099806p-209, 0x1.8df3648178948p-412, 0.0,
     0x1.f9cfff57b4f8p-640, 0.0, 0.0, 0.0, 0x1.272e711e3d972p-821, 0.0,
     0x1.239065356a2bcp-849, 0.0, 0.0, 0.0, 0x1.e100aa2ad668ap-565, 0.0, 0.0,
     0x1.0dec5f5755fa5p-479, 0x1.071b83dc04135p-553, 0x1.647a499d0c1e2p-912, 0.0, 0.0,
     0x1.ad67ce5637a9bp-301, 0.0, 0x1.af5bc4dcf5796p-166, 0x1.40926ffc9ca6cp-121,
     0x1.bc21ad94133ffp-79, 0x1.619a54f7a7362p-891, 0x1.dfc738f86c13p-960,
     0x1.6898364a6c33p-290, 0.0, 0.0, 0.0, 0x1.3bd6271fa0b78p-129, 0.0, 0.0, 0.0, 0.0,
     0x1.fefc17b69113fp-190, 0.0, 0x1.01d2d81909209p-505, 0x1.23598293ab0bdp-211, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf74601acb55ep-119, 0.0, 0x1.10b36bf951e11p-755,
     0.0, 0.0, 0.0, 0.0, 0x1.385fc04cc7c38p-200, 0x1.6e28d9e561da4p-671,
     0x1.836371cbdc099p-37, 0x1.e3219d545bdaep-454, 0x1.c5d720c8321e2p-882, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8ea90a716c06p-767, 0x1.1a9b703ba2d7fp-509, 0.0, 0.0,
     0x1.d3782a09b59e6p-678, 0x1.dc0ea1dbf6782p-721, 0x1.7b340f6363f9ap-562, 0.0,
     0x1.5ee691129b5c4p-552, 0x1.d5a72a686ba28p-620, 0x1.b7b1660b0d60bp-947, 0.0, 0.0,
     0.0, 0x1.327e108b6c6fep-942, 0x1.405ba4881c56cp-251, 0.0, 0.0,
     0x1.55f392555a949p-825, 0x1.11bf0990f3219p-942, 0.0, 0.0, 0x1.1d69b7ebb10f6p-4,
     0x1.1b0a43475c884p-197, 0x1.28153b7433a55p-622, 0x1.dba0f9c68b244p-415,
     0x1.fa66e68b3ca23p-603, 0.0, 0x1.f6dddc778d8ccp-633, 0.0, 0x1.5b9c431d41bcep-144,
     0.0, 0.0, 0.0, 0x1.d5cb17f4e2a4cp-443, 0x1.95ede16d855d1p-612, 0.0,
     0x1.823642bbb66e8p-632, 0x1.fefd41425774dp-361, 0.0, 0x1.f7d7d3b8cb8f5p-86,
     0x1.6573251dbeed6p-1009, 0x1.faf347bb90becp-532, 0x1.25336815d7b63p-470,
     0x1.49851ac343e41p-67, 0x1.f6843ec347a89p-715, 0.0, 0.0, 0.0,
     0x1.e61b9ae6c9f87p-253, 0.0, 0x1.8ac7943fd4ac4p-995, 0x1.e53763b7b3f23p-690, 0.0,
     0x1.da4aa70557e72p-405, 0x1.5ac142f05a2f8p-665, 0x1.dee0951cfbefbp-104, 0.0, 0.0,
     0x1.535412ffaa00cp-919, 0.0, 0.0, 0.0, 0x1.587ea8f5b32aap-543,
     0x1.739046c034a79p-315, 0.0, 0x1.378cda0630c76p-912, 0x1.d337c7277fd95p-966,
     0x1.a113bc88db924p-14, 0.0, 0x1.3872a2fecdd46p-183, 0x1.61e4ccc7f1c22p-228, 0.0,
     0.0, 0.0, 0x1.05045479eb268p-360, 0.0, 0x1.0185cad627a81p-306, 0.0, 0.0,
     0x1.02fe3a6cdd9d9p-760, 0.0, 0x1.f70a930bc3612p-397, 0x1.6d9ee2bf57cecp-908, 0.0,
     0x1.6ef982b64732fp-393, 0.0, 0.0, 0.0, 0x1.50d4754b16328p-450,
     0x1.9fb070485d53dp-237, 0.0, 0x1.ca339b149528bp-392, 0x1.7af928cf616aap-337,
     0x1.e6e3f9424ae15p-879, 0.0, 0.0, 0x1.f541cdd76d0d4p-226, 0x1.077effa19c141p-674,
     0.0, 0.0, 0.0, 0x1.f797cfc8cba11p-482, 0x1.e5edef77f3afbp-486, 0.0,
     0x1.e70fad1368cd2p-210, 0.0, 0x1.6f6c2a8da941cp-31, 0.0, 0.0,
     0x1.e4bdfe74f8422p-271, 0x1.23ec7b6887bb4p-811, 0x1.c837756d515f6p-822,
     0x1.752d865bca676p-497, 0x1.5ebe42e9453d8p-730, 0.0, 0x1.a7a29917cd40ap-636, 0.0,
     0x1.17ee4843bcc43p-189, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d08adf4e2f86p-35, 0.0,
     0x1.88c35293b494cp-884, 0x1.7c5d536b61d2ap-79, 0.0, 0.0, 0x1.11773c3fa884fp-703,
     0.0, 0.0, 0.0, 0.0, 0x1.85cbcfe5b7982p-662, 0.0, 0x1.5654e31e27d59p-921, 0.0,
     0.0, 0x1.8370a4a4ddf83p-249, 0.0, 0x1.fbbc23b848431p-972, 0.0, 0.0,
     0x1.aef1927bd7655p-881, 0.0, 0x1.4d67990ef0aaap-581, 0.0, 0x1.e03136ebba6b8p-386,
     0x1.8d897161248bfp-329, 0.0, 0x1.bf179a3b10d3ap-465, 0x1.85d5450771f74p-165, 0.0,
     0x1.26f9956788c6ap-81, 0.0, 0x1.afe103a05232ap-494, 0x1.426351806462bp-101,
     0x1.9fb9f4e22e67bp-761, 0.0, 0x1.43cd4c7efe92ap-226, 0.0, 0.0,
     0x1.f63868320b9a8p-370, 0.0, 0x1.41c4932b31376p-966, 0x1.2de268ede8fcap-869, 0.0,
     0x1.699aaa263b053p-464, 0x1.feac1d825ba64p-127, 0.0, 0.0, 0.0,
     0x1.edbedf62fa9dfp-991, 0.0, 0x1.a7173655f6e9ep-152, 0x1.88c7584ec1b87p-686, 0.0,
     0x1.f25c9c67e0ce5p-956, 0x1.5257313af2191p-810, 0x1.26d1b728cb1cfp-143,
     0x1.eaa89b56261e6p-794, 0x1.2f1f8b0483361p-86, 0.0, 0x1.134e3b9390428p-766, 0.0,
     0.0, 0x1.7bb2591694bccp-413, 0.0, 0x1.dc134a2cce70bp-543, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.23381b813eec8p-871, 0.0, 0.0, 0x1.ce3d36d926654p-881,
     0x1.5820691859469p-836, 0x1.adc0c008b5629p-244, 0x1.d5e0c5d15d00bp-880, 0.0, 0.0,
     0x1.a536cec36a286p-745, 0x1.e40eec9f696c6p-940, 0.0, 0.0, 0x1.e1c5680f59405p-515,
     0.0, 0.0, 0.0, 0x1.dae6f6e277b2cp-416, 0x1.5a18c1ca1e6c8p-839, 0.0,
     0x1.1d9739a0cf90bp-490, 0.0, 0.0, 0.0, 0.0, 0x1.a54c4138eacb1p-630,
     0x1.a52bd997275fap-699, 0.0, 0.0, 0x1.8af69a67c74f4p-535, 0.0, 0.0,
     0x1.86bc43ac2a481p-578, 0.0, 0.0, 0.0, 0.0, 0x1.d19af122d12dcp-1010,
     0x1.47a352ea0ae18p-751, 0.0, 0x1.dcb32ddbe89bep-463, 0x1.ed11b2ac11017p-139, 0.0,
     0x1.97600a59d0585p-988, 0.0, 0.0, 0x1.369c39932ff0dp-850, 0x1.69342cc3b5ad3p-444,
     0.0, 0x1.ae1ab73fdfd8cp-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c09f9243e6f1p-724,
     0x1.5905544f509a5p-788, 0.0, 0x1.1426c67eb1512p-375, 0x1.984ec7f1e1226p-464,
     0x1.362a853c710eep-719, 0.0, 0x1.72db0729e810fp-944, 0.0, 0.0,
     0x1.18932799352e8p-796, 0.0, 0.0, 0x1.7d69e517f114dp-822, 0x1.2404476fcb921p-298,
     0x1.d2d52b70d3be7p-964, 0.0, 0x1.34b7b55b85bd7p-803, 0.0, 0.0, 0.0,
     0x1.e946d81f32255p-236, 0x1.d42e45259edd7p-467, 0.0, 0x1.9338975b2a252p-516, 0.0,
     0.0, 0x1.bae07efc5dc6fp-527, 0.0, 0.0, 0.0, 0x1.bc2fa604ae1f9p-468, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d31eaef76ea98p-570, 0x1.e8da5d4a5ade9p-180, 0.0,
     0x1.1efef0e72abb3p-303, 0x1.61a0642cc9a64p-592, 0x1.1981f7f5a7c3dp-800,
     0x1.d1000e98e1a93p-266, 0.0, 0x1.f77e0cdd9bc09p-80, 0x1.2d9a06c0c4a63p-993,
     0x1.ff5f96fd29de6p-914, 0x1.a99de5ae3d258p-442, 0x1.0660378ed9f8p-446,
     0x1.9a55f8cc11d31p-800, 0.0, 0x1.148d97ac50516p-623, 0x1.ff38eaf64573cp-912,
     0x1.91c0c72c0f957p-410, 0x1.d1e7fef075fd9p-534, 0x1.5dff76ceed014p-385,
     0x1.e7b2bd2dcd805p-1020, 0x1.070117fbebadap-116, 0x1.c0019eff3f581p-441,
     0x1.1df94035bece1p-265, 0.0, 0x1.9f5ba93ae99dcp-67, 0x1.1d6d735aa20bap-501,
     0x1.5d38ae70d2b9ep-124, 0x1.306c6ad4fce44p-820, 0x1.6cbba650bee2dp-165,
     0x1.fa299e091da8p-230, 0.0, 0.0, 0x1.90243766a4de4p-770, 0.0, 0.0,
     0x1.014627337a5bap-830, 0x1.2310bae63202bp-97, 0.0, 0.0, 0x1.bb6de7f491428p-695,
     0x1.034c566162ae8p-1009, 0.0, 0x1.ba497ff515244p-545, 0.0, 0.0, 0.0, 0.0,
     0x1.b787448347b9bp-743, 0x1.034e39f5bea63p-32, 0.0, 0x1.bd0850b338251p-161,
     0x1.a433208729f7cp-51, 0x1.5c3811370f469p-739, 0x1.7f11ecc977c64p-617, 0.0,
     0x1.5e9d61e66c146p-948, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95984f5980c53p-999, 0.0,
     0.0, 0x1.3acb64e40ff2cp-958, 0.0, 0.0, 0.0, 0.0, 0x1.b182984277ffbp-314, 0.0,
     0x1.a8b17599ee1aap-612, 0.0, 0.0, 0.0, 0x1.dc6e20603c606p-91, 0.0,
     0x1.1ac9439ea5af3p-667, 0.0, 0x1.d3715eaf8364ap-764, 0.0, 0.0,
     0x1.7e9efc3bd7e28p-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb5f8531a52ccp-449, 0.0,
     0x1.e2d4b1e105cd4p-910, 0x1.d37d7cd4359f6p-938, 0x1.7a4e25fc6720ep-493, 0.0,
     0x1.5066250ee3a2p-179, 0x1.9df4973a03c33p-143, 0.0, 0x1.984223cde161p-864, 0.0,
     0x1.32cf287f064ecp-124, 0.0, 0.0, 0.0, 0x1.9ee98712f6652p-845, 0.0
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
            tmp1 = Sleef_ceild2_avx2128(tmp0);
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
    printf("Sleef_ceild2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ceild2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
