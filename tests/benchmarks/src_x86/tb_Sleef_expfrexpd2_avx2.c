/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expfrexpd2_avx2128.c --function Sleef_expfrexpd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 2 --function-input-vector-size 2 --precision int32 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.ec23b25135917p-994, 0x1.563968349b2aap-461, 0.0,
     0x1.98152565e0fc9p-517, 0x1.4f97e45838a59p-784, 0.0, 0.0, 0.0,
     0x1.c6e37204adb0fp-579, 0x1.4c10c9ea5155ep-61, 0x1.acb28467cf7cdp-643,
     0x1.0bfa7f071d02ap-539, 0x1.1ce96f6a24aa9p-268, 0x1.b03e8b946feap-740, 0.0,
     0x1.3fb1303213509p-464, 0x1.332cd66bbe119p-585, 0.0, 0.0, 0.0, 0.0,
     0x1.dc2a9c1d5a49ap-690, 0x1.422c1cc34f469p-711, 0.0, 0x1.680505414069bp-857,
     0x1.cb87ccd7db1d5p-590, 0x1.25beb2279370fp-497, 0.0, 0x1.d7c25941af974p-329,
     0x1.0258c5038ef75p-262, 0x1.106f2f4d930b8p-458, 0x1.f9f5f2ff75b6fp-739, 0.0, 0.0,
     0.0, 0x1.435b62189d797p-388, 0x1.686e0e2678e24p-668, 0x1.76dd566f71f45p-406,
     0x1.bc591ec8a40d4p-564, 0.0, 0x1.3b31673cd1802p-477, 0x1.cfbdb077dea1ap-955,
     0x1.a861a41454cafp-22, 0.0, 0.0, 0x1.f6ee56e8580ffp-523, 0.0, 0.0, 0.0, 0.0,
     0x1.bde8889a463b3p-19, 0.0, 0x1.cf07efff536b9p-430, 0.0, 0x1.d156dd19cb6fp-539,
     0x1.597df7bc07e88p-306, 0x1.4018b8bfea375p-782, 0.0, 0x1.bbf038356d42ap-314, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d8d772cc111a1p-668, 0x1.bdfce9b9fb8e7p-792, 0.0,
     0.0, 0x1.5afc4d47a6404p-10, 0.0, 0.0, 0x1.0a2207a0b5d13p-675, 0.0,
     0x1.8c5ba0bb5964bp-973, 0x1.91a7d794c4726p-2, 0x1.53d6ab87f2b3ep-925,
     0x1.3e9fb78e9bc6bp-885, 0x1.db4084879a7bep-807, 0.0, 0x1.2293d558d5cd2p-986, 0.0,
     0.0, 0.0, 0x1.3d0ff257dfa28p-608, 0.0, 0x1.632c22fc50c1p-390,
     0x1.41c913da08e2ap-714, 0x1.9f63466dc7281p-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.65879c56cad02p-938, 0.0, 0.0, 0.0, 0x1.cb6cd243ada75p-520,
     0x1.e04fbab0e7a97p-862, 0x1.1f7a4d70ad6efp-893, 0.0, 0x1.35c084447bde6p-534, 0.0,
     0x1.d36762053a42bp-479, 0.0, 0.0, 0.0, 0x1.90c6689e88b8p-173, 0.0,
     0x1.39ad901cd5304p-640, 0.0, 0x1.551d76ff8673p-485, 0.0, 0.0, 0.0,
     0x1.7b6219fc0389fp-800, 0x1.ffaec12ed3a0bp-188, 0x1.5941e39804581p-165,
     0x1.fe45d12e5a359p-94, 0x1.da33beea4575p-397, 0x1.5e7b79d78768dp-119,
     0x1.2e8484ed2df1cp-875, 0x1.9285daff527b4p-445, 0.0, 0.0, 0x1.8a24f83926af5p-112,
     0x1.3635edb05bca1p-163, 0x1.fad96decf973bp-551, 0x1.5453aa4c60a2p-712, 0.0,
     0x1.d0afbcd19aa9ap-205, 0x1.cd494825d5d28p-138, 0x1.d648f7225ecb1p-618,
     0x1.5fcd7c738d692p-419, 0x1.5f0dfd1d4bd77p-509, 0x1.88c0c0068c569p-580,
     0x1.14f6d4c065bp-242, 0x1.4914972027a68p-602, 0x1.358defb689fb4p-838, 0.0, 0.0,
     0x1.d742609dd37d1p-633, 0x1.2290920a62b9p-341, 0x1.48a3e018b6052p-358,
     0x1.5516411e2bafp-537, 0.0, 0.0, 0x1.e1269ae8b383fp-97, 0x1.1b27b1491827cp-376,
     0.0, 0x1.ff5c13e4daa3bp-487, 0x1.0e2fec2829235p-432, 0.0, 0.0,
     0x1.7f2b056634efap-65, 0.0, 0x1.27ca8ad250257p-405, 0x1.4004dde09575bp-545, 0.0,
     0x1.d88931c72a898p-965, 0x1.801e5da317a4ep-522, 0.0, 0.0, 0.0,
     0x1.cbdd3fb828529p-875, 0x1.ef74d81aa0c52p-680, 0.0, 0.0, 0.0, 0.0,
     0x1.d6afb39e05c12p-344, 0x1.8a517ebc505d9p-973, 0.0, 0.0, 0.0,
     0x1.a91d2ef2a51a9p-373, 0.0, 0.0, 0x1.427d11bd06b1ap-239, 0.0, 0.0,
     0x1.db430f0d6f916p-479, 0.0, 0x1.fea8337b053acp-240, 0.0, 0.0,
     0x1.6bdc08b38717bp-925, 0.0, 0.0, 0.0, 0.0, 0x1.bbc940a3c0805p-648, 0.0, 0.0,
     0x1.02bbb4f311883p-655, 0.0, 0.0, 0.0, 0.0, 0x1.983cccc48b04fp-405, 0.0,
     0x1.4a5f81413b34p-294, 0x1.c85f42eb1995p-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1892e893d05fbp-896, 0x1.bbd9e76ca0894p-553, 0x1.ed2642454de2p-140, 0.0, 0.0,
     0x1.cc8ef644179c4p-199, 0x1.73975d5fd935ep-470, 0x1.3d60e9cc59886p-133, 0.0,
     0x1.b52fb2e586fbep-163, 0x1.441c21b92e093p-583, 0.0, 0x1.6cff39d462ecdp-634,
     0x1.5aec70488e98ep-175, 0.0, 0x1.e82cf6467c886p-634, 0.0, 0.0,
     0x1.a8fd0adb80fdfp-330, 0.0, 0.0, 0x1.21b88680f2db1p-319, 0.0,
     0x1.4e10b2161ead3p-748, 0x1.b7471ca393f2fp-540, 0x1.ee8bc3c802c7bp-819,
     0x1.f2a2db2e5361ep-783, 0.0, 0x1.463d0b13469ep-883, 0.0, 0x1.3e48cb588984p-315,
     0.0, 0x1.7d79beef65348p-9, 0x1.b2de2669388f2p-729, 0x1.69dcfc7e176a4p-213, 0.0,
     0.0, 0x1.d5d33931ae0f9p-686, 0.0, 0x1.22ac27225f8b1p-433, 0x1.b39d28e2c0b43p-360,
     0x1.f3f61e84ad684p-903, 0x1.78dfb27808ba9p-714, 0.0, 0.0, 0.0,
     0x1.2372b3f92786cp-961, 0x1.99a47dba5e8dfp-517, 0x1.dfad7de5948cp-491,
     0x1.3840107e981bep-433, 0x1.0d05c7cc141p-475, 0x1.7bf875e01f082p-254, 0.0,
     0x1.936e29314cd4cp-238, 0x1.dda94bb1ef93bp-394, 0.0, 0.0, 0x1.3017fe61733ap-144,
     0x1.7817a97b294a2p-885, 0.0, 0x1.48d347a116c9bp-637, 0x1.bc51bb9ceee99p-408,
     0x1.49489b2bd7a61p-634, 0.0, 0x1.785399c124fb7p-811, 0x1.4f6f5f4ea6898p-538,
     0x1.32dfc6ef43a2p-914, 0x1.23a5b10b769dcp-40, 0x1.10ec3efa7f2cep-777, 0.0, 0.0,
     0x1.669863e9ff43ap-378, 0x1.6a83c91d41581p-754, 0.0, 0x1.a15096ebfb648p-160, 0.0,
     0.0, 0x1.01e3db97dcdafp-418, 0x1.1f1170c6f4cd4p-230, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.35fc871020919p-198, 0x1.b7693f72fdadp-750, 0.0, 0.0, 0.0,
     0x1.8cdbab5526dd1p-601, 0.0, 0.0, 0.0, 0x1.a5d10f7e0c6c4p-972,
     0x1.688b27ff956b6p-332, 0.0, 0x1.2c3f6ad6cc36cp-673, 0.0, 0.0, 0.0,
     0x1.9bca90580c3c7p-416, 0x1.59570d3a0e09ep-60, 0x1.c094e034926e8p-59, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33b68e4c99b71p-523, 0.0, 0x1.ecee4c67cb0f7p-366,
     0.0, 0x1.1e588d39d675bp-166, 0.0, 0x1.cae753b1ea995p-135, 0x1.544be2e8e4e3fp-597,
     0x1.83306cbf2db64p-882, 0x1.3cf86341d07b7p-986, 0x1.84563558d719cp-770, 0.0,
     0x1.30400571fa23ep-586, 0.0, 0.0, 0.0, 0x1.05694bd1bba08p-886,
     0x1.a9503e1af0116p-82, 0x1.ffd2ad04c9181p-205, 0x1.12756c7fd1e5cp-243,
     0x1.8e945f7ff60bp-746, 0x1.000b992632dfap-251, 0x1.977c3cc8f4e0ep-362, 0.0,
     0x1.fd6e53d6b69d9p-454, 0.0, 0x1.8855153430f47p-732, 0.0, 0x1.23ce33e830527p-609,
     0x1.f41bf1ddc4bb4p-849, 0.0, 0.0, 0.0, 0.0, 0x1.79b5169c25242p-648, 0.0,
     0x1.389937a22c411p-530, 0.0, 0x1.30a73059f3a83p-242, 0x1.e98075cb5cb49p-140, 0.0,
     0.0, 0x1.4efe995c44bp-849, 0x1.1c7d0ce58a006p-854, 0x1.f55a06705d8aap-63,
     0x1.b790268075dcep-354, 0.0, 0x1.6f3409cbaa68ep-542, 0x1.0a55bd228c7eep-500, 0.0,
     0x1.4d84a146e6f28p-640, 0.0, 0x1.300d63617568bp-112, 0.0, 0.0, 0.0, 0.0,
     0x1.0dc8d6e9f9879p-590, 0x1.eea5a340f2c26p-151, 0.0, 0x1.000d70119012bp-644, 0.0,
     0x1.193e9d52e4ecp-858, 0.0, 0.0, 0x1.b0bf70fd52202p-706, 0x1.4c2e31fda712ep-254,
     0.0, 0x1.b131f2c83ed92p-98, 0x1.18e3be459b1fp-756, 0x1.4837097a975d9p-77, 0.0,
     0x1.488d41d6e4b11p-523, 0x1.bdd1b2e4bffdfp-385, 0x1.f4297d809dbc1p-820, 0.0, 0.0,
     0x1.716358e7ea22ep-264, 0x1.e716f67c552e4p-14, 0x1.aee2024cae058p-542, 0.0, 0.0,
     0.0, 0.0, 0x1.ba2b187439438p-601, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.078d474345c45p-376, 0x1.3e42f02026d4ep-913, 0x1.d28af82a22961p-580, 0.0, 0.0,
     0x1.df4198beed42cp-567, 0x1.b4f3027601336p-294, 0x1.442feea877d02p-54,
     0x1.0121960dd5babp-638, 0.0, 0.0, 0x1.304740bc1a7dbp-472, 0.0,
     0x1.ccf8334beae81p-205, 0x1.f387d277ac72cp-399, 0x1.4b30a07085f0fp-391, 0.0,
     0x1.30a604f2f8192p-212, 0.0, 0x1.cd8db69bc4199p-139, 0.0, 0x1.8d1785d8a2e85p-218,
     0.0, 0.0, 0x1.d3d85826a2561p-157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d13c29cd4bc7cp-54, 0x1.fbae494ed5b4ep-245, 0x1.42d560b284142p-316, 0.0,
     0x1.9f9304d1b41cp-484, 0.0, 0.0, 0.0, 0.0, 0x1.255d0058e002cp-275,
     0x1.9f6d5a429450cp-591, 0x1.137d6875bc387p-989, 0.0, 0.0, 0x1.c2363e30498d7p-452,
     0.0, 0.0, 0.0, 0x1.6096f2beb8749p-355, 0.0, 0.0, 0x1.2ee41a0de9a55p-327,
     0x1.9417883c71eafp-151, 0.0, 0x1.02a3d3941e693p-839, 0.0, 0.0, 0.0,
     0x1.a811035e60aedp-406, 0x1.dc949e78e19f2p-661, 0x1.6a3bb1725b64dp-240, 0.0,
     0x1.f5cb08c5ba4f9p-221, 0x1.4d21548254d7bp-92, 0x1.a4dd8986fcc28p-71, 0.0, 0.0,
     0.0, 0x1.772eaed862a31p-853, 0.0, 0.0, 0x1.809e313647706p-142,
     0x1.87cd2eb169b4ap-1011, 0.0, 0x1.0574914d1db7bp-790, 0.0,
     0x1.8a5f50ad2d05dp-425, 0.0, 0x1.b24fed0431d64p-539, 0x1.f27486a961a4bp-392,
     0x1.4e87853b1bdc8p-941, 0.0, 0x1.e3f86c6fccf3ap-249, 0.0, 0.0, 0.0, 0.0,
     0x1.486ee108c4408p-408, 0.0, 0.0, 0.0, 0x1.c6539b4bd6022p-494, 0.0,
     0x1.f773965a692a6p-915, 0x1.efe52db5b4a26p-157, 0x1.3126ccc2dc43p-751, 0.0,
     0x1.5cb87754db8fcp-255, 0.0, 0.0, 0x1.21dffec5f97acp-312, 0x1.7c69a9a1a6704p-888,
     0x1.1cb2678c27b38p-674, 0.0, 0.0, 0.0, 0x1.b8a534bbd76f5p-113, 0.0,
     0x1.76ed15eccc348p-668, 0x1.32b4c2d9a2a33p-53, 0.0, 0.0, 0x1.55567b9e0e04cp-473,
     0.0, 0x1.d0e7b2d5bd466p-624, 0.0, 0.0, 0.0, 0x1.f20b42bd53c8ep-47,
     0x1.fc5253d99dd84p-559, 0x1.46616cf608b6ap-329, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e95419796fa25p-313, 0.0, 0.0, 0.0, 0.0, 0x1.0028291ce8f8bp-497, 0.0,
     0x1.176f3f1ca1f3p-173, 0x1.9a82292d54e8fp-682, 0.0, 0.0, 0x1.f3c442d7655cfp-387,
     0x1.9abce65fae2d4p-209, 0.0, 0x1.c4bd4c066364cp-963, 0.0, 0x1.492b0c671904p-478,
     0.0, 0.0, 0x1.2f8c5d260ca02p-594, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b49e89812f7ep-312, 0x1.f9c6b3833db95p-247, 0x1.038a8cf4015ddp-944,
     0x1.ca14f2efaa1ebp-355, 0.0, 0x1.77d2945c2336fp-944, 0.0, 0.0,
     0x1.14a9e9a8365adp-872, 0.0, 0.0, 0x1.c8eb6bb615018p-379, 0.0, 0.0,
     0x1.b2eab563e1f9bp-404, 0x1.6f1a08903e42cp-341, 0x1.e4e88b154fa9ap-181, 0.0,
     0x1.6b19cfbf8ed16p-522, 0.0, 0.0, 0.0, 0.0, 0x1.fa3486f082ed6p-485,
     0x1.85cc22f5456b5p-742, 0x1.545ea7944459cp-856, 0.0, 0.0, 0x1.d4d42ed0a5d8ep-465,
     0x1.52b49d1539cacp-745, 0.0, 0x1.8215ca0fb71f1p-28, 0.0, 0x1.baf1a58b14104p-789,
     0.0, 0x1.33731b1090d5bp-667, 0x1.88876e24fa848p-560, 0.0, 0x1.9de96234b0a5p-29,
     0.0, 0.0, 0x1.9eb50af8da3bfp-295, 0x1.3cb68ddc5c5e1p-234, 0x1.6bb54c849c02p-466,
     0.0, 0.0, 0x1.2d97902d4f576p-89, 0.0, 0.0, 0.0, 0x1.03c9004087ea2p-467,
     0x1.4986daa92410ep-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95127ba5050bdp-830, 0.0,
     0.0, 0.0, 0x1.ab3ec17ab85e7p-601, 0x1.fea1f9187ca35p-508, 0.0, 0.0,
     0x1.668d00458751p-421, 0x1.662db7560be46p-650, 0x1.dfb4e88663ad4p-861,
     0x1.84c9ea8608074p-579, 0x1.fe2147ac7a71p-54, 0x1.41be3c8dd4634p-995,
     0x1.1cd9d1513a823p-46, 0.0, 0.0, 0x1.198ad407bc0eep-569, 0x1.1fe3b8513da2ap-997,
     0x1.3d02943d4195ep-1012, 0.0, 0x1.834fb57f81d45p-44, 0x1.6456ff55433fbp-230, 0.0,
     0x1.2c62bcdb707ecp-447, 0.0, 0.0, 0x1.e07e1a9f0e03dp-135, 0.0, 0.0, 0.0, 0.0,
     0x1.a8cfb7cee4987p-749, 0.0, 0.0, 0.0, 0.0, 0x1.8603d6d48819cp-358, 0.0,
     0x1.af80a9540f379p-736, 0x1.3c043562d2dd7p-483, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2de31bbb94ec7p-264, 0x1.2e3719d8565f4p-697, 0x1.4c2d3a4c2ce8bp-170,
     0x1.be1e353fa4637p-929, 0x1.4d461daf07853p-692, 0.0, 0x1.4e8d371ac7b2p-268, 0.0,
     0.0, 0x1.b69f7f6206c05p-946, 0.0, 0x1.23d1837888f5bp-598, 0.0, 0.0,
     0x1.e8dc48795263p-744, 0.0, 0x1.c683581218df6p-666, 0.0, 0.0,
     0x1.d76ecc9fb9885p-962, 0.0, 0.0, 0.0, 0x1.113ba8292a81cp-268, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2880094e850c8p-838, 0.0, 0x1.32e93f6494051p-235,
     0x1.5cc3c1f4355afp-132, 0.0, 0.0, 0.0, 0.0, 0x1.b9c215596a04bp-710, 0.0, 0.0,
     0x1.9680dbe1ad472p-127, 0x1.5ae7a91b08e0fp-992, 0.0, 0.0, 0x1.c0bee6ce77da5p-466,
     0x1.9f26c5e5fe1f8p-876, 0.0, 0.0, 0x1.166bb51a63fdp-352, 0.0,
     0x1.2d4516ffdfa49p-726, 0.0, 0.0, 0.0, 0x1.9d6ac5da67a5bp-220,
     0x1.ef37cff5046ddp-308, 0.0, 0x1.38a79954de96ep-278, 0.0, 0.0, 0.0,
     0x1.18eef8827e9dap-533, 0x1.c428632c3d56bp-172, 0.0, 0.0, 0x1.8b695f7081d6ep-747,
     0.0, 0x1.3cea96b29d369p-618, 0x1.c3baa854ade78p-489, 0x1.fbdf2fd02b347p-714,
     0x1.9e1dfcb57724ap-283, 0.0, 0x1.804023232dbd5p-959, 0.0, 0.0,
     0x1.618df2617523ep-866, 0x1.b0773494a7183p-291, 0.0, 0.0, 0.0,
     0x1.61c4810a0809cp-670, 0x1.2d06e2e2400dep-300, 0x1.8683b305a5d5p-213,
     0x1.157e065ee6a8dp-258, 0x1.7a4108ffc22fp-335, 0x1.4b4803cb0567dp-154,
     0x1.106ac28d34a8ep-305, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.bff6010aaed3ap-318,
     0x1.6f7b429d3ae5dp-31, 0x1.676d5cb354084p-714, 0x1.b2ef247937ad4p-688, 0.0,
     0x1.80698e8236c41p-886, 0x1.83553c61a0c99p-477, 0x1.ea10082078afap-752, 0.0,
     0x1.8caa90b14f94ep-969, 0x1.69b683dbb7fdbp-950, 0x1.613a997969069p-331,
     0x1.b1c12084c7e27p-239, 0x1.39a795b04fbc1p-857, 0x1.b6fffb7a868e2p-650, 0.0, 0.0,
     0.0, 0.0, 0x1.d9a84622541c5p-260, 0.0, 0.0, 0x1.b343760c5acbp-668, 0.0,
     0x1.ca50d310d0842p-204, 0x1.26b5a9822476bp-11, 0.0, 0x1.131b414066bc5p-562,
     0x1.8532cb2fd21f7p-384, 0x1.2a2be82797618p-631, 0x1.dad2515c163f6p-162,
     0x1.1f2825b2a8922p-719, 0x1.6791de862140dp-397, 0.0, 0x1.5cddb8101ba99p-191, 0.0,
     0x1.70779560e9c5cp-368, 0x1.ec6e3b4094085p-908, 0x1.561d030da1c46p-66, 0.0, 0.0,
     0x1.10acec8deffadp-373, 0.0, 0x1.6b10c445e733cp-764, 0.0, 0.0, 0.0,
     0x1.2b6ef6efb69abp-149, 0x1.8134640c12808p-258, 0.0, 0x1.eb2a5f6a781dfp-342,
     0x1.e8fb45aa96e37p-818, 0.0, 0.0, 0x1.0d3c9ecffdd58p-670, 0x1.120383605b397p-14,
     0x1.db937097a4f9p-177, 0x1.67ad7a63eeff6p-551, 0x1.f539edfca896dp-303, 0.0, 0.0,
     0.0, 0x1.656a8b83e262bp-13, 0.0, 0.0, 0x1.04ebf01fd164dp-590,
     0x1.1c0cc279a35c5p-191, 0.0, 0.0, 0x1.1510fe16c22abp-165, 0.0,
     0x1.26c3fec89eb3ap-345, 0.0, 0x1.a6318ae82df97p-69, 0x1.ec6d3b8f15b7cp-805, 0.0,
     0x1.3f090b7f530cdp-802, 0x1.4896e5c5a0bf5p-430, 0.0, 0.0, 0x1.6bf0867ba59b1p-341,
     0x1.e5d4f0adcfa8cp-902, 0.0, 0x1.df38c76e627bap-524, 0.0, 0x1.64c04af01995bp-758,
     0.0, 0.0, 0.0, 0.0, 0x1.005a07b6275dbp-499, 0x1.38a8737153f76p-995, 0.0, 0.0,
     0.0, 0x1.350d60df63b08p-242, 0.0, 0x1.2310abae68203p-337, 0.0, 0.0, 0.0, 0.0,
     0x1.defe569f43829p-970, 0x1.b2222318c9af5p-161, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88f3e703d8526p-276, 0.0, 0.0, 0x1.fe3dbd62002b7p-971, 0.0,
     0x1.396b39ac02de4p-431, 0.0, 0.0, 0.0, 0x1.2cfdf47e828a2p-669,
     0x1.9ad1d3366854dp-201, 0x1.43b886189688ap-472, 0.0, 0x1.4e5c6841e75ebp-358, 0.0,
     0x1.24339a445aeb9p-662, 0.0, 0.0, 0x1.e32255de60b98p-972, 0.0,
     0x1.87451becd92bap-291, 0.0, 0x1.01982d6d0e52p-345, 0.0, 0x1.523a5afe264aep-931,
     0x1.e51250a388c49p-746, 0x1.5653a5654b0e6p-596, 0x1.f0123608f676ap-365,
     0x1.5ea97e8972509p-125, 0x1.891eecda7885ap-22, 0x1.83c55e3ef968ep-289, 0.0,
     0x1.5ff3eafe17edep-930, 0.0, 0x1.ff5484952fad2p-494, 0.0, 0x1.c296c8149cc36p-210,
     0x1.48d2cd814a0e1p-117, 0.0, 0.0, 0.0, 0.0, 0x1.280cc53c23e6cp-904,
     0x1.2aba63bb0bff7p-506, 0.0, 0x1.dae4712806053p-157, 0x1.25d38541fce8dp-13,
     0x1.bdf73d3e7d562p-168, 0x1.eecd1919a5894p-866, 0.0, 0x1.d299ed78794e1p-444,
     0x1.9798df9113adep-631, 0.0, 0.0, 0x1.5f42ed67d64c2p-138, 0.0,
     0x1.2793cd6fbaf23p-830, 0.0, 0x1.d2c9fe05d2a2ep-167, 0x1.e921f283c74e1p-292, 0.0,
     0.0, 0x1.b5b81bee15995p-290, 0x1.a8a041c9fb41cp-350, 0x1.4048c45020913p-809,
     0x1.303caaed6e721p-428, 0x1.10fb2ae346a97p-451, 0.0, 0x1.3f3e6a950afd4p-875,
     0x1.838829f3753a7p-485, 0x1.fc84a05f1eb98p-84, 0x1.8ce1ec10d130ep-977, 0.0,
     0x1.a642a94cfaa19p-226, 0x1.18df224a1fc6cp-327, 0x1.8653994511ad8p-763,
     0x1.e0a6e61557469p-458, 0x1.c33f0cecd4bdp-468, 0.0, 0x1.afd42aae9219p-137,
     0x1.ce8f95d3de0eep-153, 0x1.f7777dbcab635p-830, 0x1.c35db249a2b5fp-22,
     0x1.379d601c4250bp-110, 0x1.67e862fe67096p-26, 0.0, 0.0, 0x1.01df316148abdp-877,
     0.0, 0.0, 0.0, 0x1.87edd6d555f5dp-368, 0x1.98aa8aa460ce5p-974,
     0x1.caea50ed5fb72p-320, 0x1.267e39ad34b2fp-145, 0.0, 0x1.2542bdd5ba23ap-551, 0.0,
     0.0, 0.0, 0x1.2f0ec773a697p-469, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c914847b33264p-528,
     0.0, 0x1.e0330bb657e45p-808, 0.0, 0x1.a92a903308f54p-913, 0x1.de1bb80df7aaap-979,
     0.0, 0.0, 0.0, 0x1.316713336e136p-220, 0x1.c758460049be5p-231,
     0x1.7266e07c558fep-195, 0x1.90a7a9619ff9bp-448, 0x1.00476c4e59f75p-489,
     0x1.29244b372b22p-735, 0x1.bd07210e05c32p-924, 0x1.abd46c3f1566cp-361, 0.0, 0.0,
     0.0, 0.0, 0x1.33f34a7ed7b0bp-306
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_expfrexpd2_avx2128(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_expfrexpd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expfrexpd2_avx2128 bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
