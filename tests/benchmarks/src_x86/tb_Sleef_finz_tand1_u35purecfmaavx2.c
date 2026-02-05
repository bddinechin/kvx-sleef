/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand1_u35purecfma.c --function \
 *     Sleef_finz_tand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.7a95bb518a3c6p-904, 0x1.5d26cf73154a1p-792, 0.0, 0x1.bda3757017505p-831,
     0.0, 0x1.00a72626d0a3dp-568, 0.0, 0.0, 0.0, 0.0, 0x1.64ed4ad9ba259p-473,
     0x1.6ade61d435d6p-44, 0.0, 0.0, 0x1.2daabd4a810c9p-592, 0x1.cb52551fff2dep-212,
     0x1.94c15e8ccb8fbp-838, 0x1.762bdec966fb7p-282, 0x1.4071c0603d66bp-223, 0.0,
     0x1.5c881c2fb81ddp-551, 0.0, 0x1.08145ec26ef64p-632, 0x1.a255e93c75f85p-314,
     0x1.8a845db89f5f6p-515, 0.0, 0.0, 0.0, 0.0, 0x1.967ca24e547bp-814, 0.0, 0.0,
     0x1.900916499782p-1017, 0.0, 0.0, 0.0, 0x1.1995036e908ddp-678,
     0x1.033e85e572af2p-12, 0x1.80f09e0397427p-233, 0.0, 0.0, 0.0,
     0x1.44d5dd138086ep-738, 0x1.29a190d3f1f44p-438, 0x1.f205ebfe4d518p-340, 0.0,
     0x1.308f9dfb28899p-345, 0x1.76f1885ad76b6p-402, 0.0, 0.0, 0x1.fdbe0b5ce9bd8p-332,
     0x1.79594703a5523p-611, 0x1.6eaf1b016f6cep-111, 0.0, 0.0, 0x1.72ea7ae3e1369p-824,
     0x1.b2648b25cc669p-851, 0x1.a853e85e7a6d6p-933, 0x1.398d43603212cp-981,
     0x1.576c502f14567p-539, 0.0, 0x1.9d7229601d7f5p-933, 0.0, 0x1.ccadbc9c18b66p-949,
     0.0, 0x1.9b717e1a3f34bp-860, 0x1.65a967b473d15p-56, 0.0, 0x1.a992f54937588p-326,
     0x1.004d6ed27b58dp-702, 0.0, 0.0, 0x1.1f671513de7ep-664, 0x1.8ae74ce0c6ac3p-393,
     0x1.e41ddd24ed419p-410, 0.0, 0x1.9968bb18dcdeep-165, 0x1.c4cf8afb96fdfp-998, 0.0,
     0.0, 0x1.73599b27a23d8p-314, 0.0, 0x1.12ad0a21f1f8ep-203, 0.0,
     0x1.5c7a445224295p-498, 0.0, 0.0, 0x1.ea60204cd6725p-582, 0.0, 0.0, 0.0,
     0x1.743a2c3ab216cp-235, 0x1.1c8128fc8792p-439, 0x1.c6615f1fbbb7fp-509, 0.0,
     0x1.d4c1ae90aab41p-311, 0x1.b833b553c2187p-191, 0x1.b15c067955652p-487,
     0x1.6ec65c70c65d5p-364, 0.0, 0.0, 0.0, 0x1.b9bfa595b4408p-645, 0.0,
     0x1.8507e1095f83p-582, 0x1.e1d24cb08b469p-440, 0x1.1a3db5bae92a6p-932,
     0x1.83ce4996a616ap-285, 0x1.2556b1a77e75ap-197, 0x1.3c0f81bb54fe4p-966,
     0x1.7b4a425519daap-214, 0.0, 0x1.6af8a0d73a276p-71, 0.0, 0.0, 0.0,
     0x1.8eec97ea6ac6ep-775, 0x1.280bb6e158c14p-149, 0x1.52b2264d11a2dp-229, 0.0, 0.0,
     0.0, 0.0, 0x1.2b9ba68a3e6f8p-871, 0x1.2ac69a3b51fd6p-884, 0x1.d5c8b8426b6fap-51,
     0x1.3fbed7d94e71bp-195, 0x1.58fd4935ede3bp-31, 0.0, 0.0, 0x1.df9d9aa10b338p-607,
     0.0, 0x1.7cd365763c95cp-787, 0.0, 0.0, 0.0, 0x1.8b9b4dc7aedadp-827, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d651d4a5ef5dp-803, 0x1.f3ceec9f980d6p-161, 0.0,
     0.0, 0x1.3311f7e1f176fp-551, 0.0, 0x1.b53ea056a326ep-751, 0x1.6f192c7b95c97p-64,
     0x1.3bb6d2ccf2198p-1022, 0.0, 0x1.9fa572a63e00ep-500, 0x1.f5ad240ca5889p-351,
     0x1.bf379c46126b7p-348, 0.0, 0.0, 0x1.555d164ca051cp-370, 0x1.43e9f73f28951p-662,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd3306fd78513p-940, 0.0, 0x1.501ecfcf289cep-929,
     0.0, 0x1.776a2edd9cdd2p-352, 0x1.8e6bc09c482aap-373, 0x1.dcfba0edb40cbp-582,
     0x1.0b9115f3e9b8p-729, 0x1.342053be2c92fp-877, 0.0, 0x1.9ef216d8af9cfp-95, 0.0,
     0.0, 0x1.3d549e44952ep-990, 0.0, 0x1.fd1bffbc4ff2cp-247, 0.0, 0.0,
     0x1.07d75447c8efdp-752, 0x1.16d7e25478572p-651, 0x1.2af818dbc404p-818, 0.0, 0.0,
     0x1.600a58955d869p-585, 0x1.bb7b5a9804bb7p-386, 0.0, 0x1.e0296f69dc6a8p-873, 0.0,
     0.0, 0x1.96da144993577p-82, 0.0, 0.0, 0x1.cf263a734c9d3p-987, 0.0, 0.0, 0.0,
     0x1.8d4e57a4a6d33p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5644c63a46e47p-559, 0.0,
     0.0, 0x1.c130e20dd3277p-370, 0.0, 0x1.f2de84f11406cp-865, 0.0,
     0x1.85a31310b7b42p-802, 0x1.b196533748e53p-516, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d37af8508b04cp-1007, 0.0, 0x1.441379ca56ab8p-117, 0.0,
     0x1.494a8bcfcc7f7p-574, 0.0, 0.0, 0x1.a41897ce0e38p-654, 0.0,
     0x1.25c8151cda4e9p-844, 0.0, 0.0, 0x1.2a75ac2ca164cp-347, 0x1.42b2e042fe9e6p-747,
     0.0, 0.0, 0x1.9c8bdc696ea5fp-316, 0.0, 0.0, 0.0, 0x1.200aad1446f13p-1021, 0.0,
     0x1.7aee2f7449993p-479, 0.0, 0.0, 0x1.9a1eacc9a55c5p-450, 0.0, 0.0,
     0x1.d7fa98a14269p-399, 0.0, 0.0, 0x1.ba0281509a5b3p-669, 0x1.425504523ffa6p-1016,
     0x1.52bac2726f729p-868, 0.0, 0.0, 0x1.f53f8b85a483bp-776, 0x1.206cb62ad47e1p-713,
     0.0, 0x1.e9f62d1bff458p-601, 0.0, 0.0, 0.0, 0.0, 0x1.3bc8db7c1f38dp-434,
     0x1.2aff29951fd2ap-612, 0x1.c38c627773fd5p-573, 0x1.cd3e758acbd0cp-996, 0.0,
     0x1.b79d7fcd6f87fp-630, 0x1.4d53f062d3f57p-890, 0.0, 0x1.42c02079b582cp-1009,
     0.0, 0x1.6a63340373a84p-648, 0x1.410d5b828a623p-371, 0x1.51ec58ae855bcp-98, 0.0,
     0.0, 0x1.5865239b500eep-439, 0.0, 0x1.eb6bb80a36643p-1012,
     0x1.935e96b123c59p-594, 0x1.b0d61d15cc9fap-638, 0x1.c3f1dd75b1595p-546,
     0x1.c3408f71c7585p-831, 0x1.54a5644ebb122p-909, 0.0, 0.0, 0x1.6d61aaa454c7cp-807,
     0x1.c16b4b1942523p-199, 0.0, 0.0, 0x1.ff9f709c6c423p-326, 0x1.01f29c5064accp-267,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5262ee8888efp-903, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.061144ea7e59dp-291, 0.0, 0.0, 0.0, 0.0,
     0x1.edc3fd694bca4p-982, 0.0, 0x1.1c36119e74f1fp-407, 0x1.1b195702025c7p-462, 0.0,
     0.0, 0.0, 0x1.6112c36a5b593p-614, 0.0, 0.0, 0.0, 0.0, 0x1.512497b6f74b2p-43,
     0x1.ba7357a0afcaap-610, 0.0, 0.0, 0x1.46a9f66f96cedp-261, 0.0,
     0x1.736cada212e6cp-603, 0x1.2c09a6b93f96ap-863, 0.0, 0.0, 0x1.8dc0030141e83p-371,
     0.0, 0x1.ab86acd571c7dp-211, 0.0, 0.0, 0.0, 0.0, 0x1.6c51cc77db414p-535, 0.0,
     0x1.38dcdcd576d6dp-95, 0x1.c0a335122322p-453, 0x1.a28c56649cd4ep-912,
     0x1.03ce4caa0b39ep-148, 0.0, 0x1.b5da06242a6e6p-949, 0.0, 0x1.06d986b9dfc9ep-771,
     0x1.6367ea0a5dffp-963, 0.0, 0x1.5fcbce00ae5dep-487, 0x1.03f3837166811p-231,
     0x1.4e989b6fe4198p-250, 0x1.a1b06b2f1969bp-891, 0x1.3bff60a7f219cp-954,
     0x1.445bd2a4562f5p-824, 0x1.9714d5162d616p-531, 0.0, 0x1.6fae2992554c9p-66,
     0x1.150732627190dp-629, 0.0, 0.0, 0x1.57d6be6528adap-166, 0.0,
     0x1.f0d55c1fa00a9p-972, 0.0, 0.0, 0x1.5d190691409bdp-506, 0.0, 0.0, 0.0,
     0x1.20c0ce7dd69b1p-294, 0.0, 0x1.ca56792445685p-800, 0x1.7705e84c201cdp-518,
     0x1.69afd1cafe85p-781, 0.0, 0.0, 0x1.28e7bf77785c7p-668, 0x1.f9924ef84ec05p-184,
     0.0, 0x1.e10477c669f39p-789, 0x1.01cf275a7f584p-368, 0.0, 0.0, 0.0, 0.0,
     0x1.d43b32ae006f4p-111, 0.0, 0.0, 0.0, 0x1.43be2c089f1fap-28,
     0x1.1a2db06e696dp-513, 0.0, 0x1.4844e39cef3c8p-198, 0.0, 0.0, 0.0, 0.0,
     0x1.6c8f2ebb620afp-631, 0.0, 0.0, 0x1.1ab31a9e7b7p-273, 0x1.b993e5ec9cf67p-358,
     0x1.f68eaedc605e4p-624, 0x1.8eb4e8711e703p-946, 0.0, 0x1.ad6b26b0bea0dp-232, 0.0,
     0x1.6bd6330bedddap-884, 0.0, 0.0, 0x1.83d1a8c15fadcp-669, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ad106733ccf8bp-392, 0x1.ae4015ac375a7p-335, 0x1.dcc8abb61f13fp-510,
     0x1.1408c53c8fc95p-293, 0x1.fe134eb854898p-568, 0.0, 0x1.4c7e284831edep-827, 0.0,
     0x1.5d4926b0741cep-731, 0x1.6d43e4d4514b5p-269, 0x1.eb8603186e2c6p-332, 0.0,
     0x1.f77c7d578e4abp-463, 0x1.81a495b9608cp-982, 0x1.509e8f45746ecp-38, 0.0, 0.0,
     0.0, 0x1.16c8ac03837dp-888, 0x1.77e8688317179p-174, 0x1.fb8c7cc7fbce6p-901,
     0x1.a4c470079afdp-130, 0.0, 0x1.f39c4552e229ap-270, 0x1.1bda9fc858074p-890,
     0x1.71ac4e4ec046bp-305, 0x1.d9cb6cf6e4eb5p-94, 0.0, 0x1.a483e059253e3p-435, 0.0,
     0x1.1be5cc153eba4p-709, 0x1.3c3de8ab888bp-521, 0x1.6bfa16b0cb0e1p-70, 0.0, 0.0,
     0x1.62376302fddb7p-535, 0.0, 0.0, 0x1.d15dfacb33dbdp-749, 0x1.0276ac8435031p-905,
     0x1.4f8fcd8caba54p-528, 0.0, 0x1.37674d86aac03p-462, 0x1.771ac15e7f44cp-198,
     0x1.be37d0280a8d4p-434, 0.0, 0.0, 0x1.74920be069ff2p-817, 0.0, 0.0, 0.0,
     0x1.820ebf9e1bc3dp-156, 0x1.e00568da1764ep-868, 0.0, 0.0, 0x1.e7f2bc8ce32fbp-263,
     0x1.df54788ec3fb8p-606, 0x1.fb4d22d92a94fp-519, 0.0, 0x1.0dffac0a252aap-986, 0.0,
     0x1.baec25379ee78p-870, 0.0, 0.0, 0x1.b49a8138afd4ep-21, 0.0,
     0x1.61f8910edb939p-989, 0.0, 0x1.b7fc451da2371p-596, 0.0, 0.0, 0.0, 0.0,
     0x1.20a6cde08ec65p-249, 0.0, 0.0, 0x1.a67830406276ap-666, 0.0, 0.0, 0.0,
     0x1.503d524fce62ep-158, 0.0, 0x1.022560a57bbb3p-736, 0.0, 0x1.1d93bd04ea596p-958,
     0x1.4ed9563a2d6ffp-261, 0x1.f94adca3cf3fp-365, 0.0, 0x1.98d8c6f7892dbp-54,
     0x1.c2e1a3bf3dc0bp-943, 0.0, 0x1.ba7eb331f6f02p-695, 0.0, 0.0,
     0x1.83bfeb61af6d6p-923, 0x1.aedaaeaf799c9p-692, 0x1.f149c1936c5a5p-118,
     0x1.ae7f95dbe3113p-104, 0x1.0bc927bb52589p-218, 0x1.02de380d5d771p-20,
     0x1.382fb6d4ff32ep-49, 0.0, 0x1.dae0f485dda5bp-465, 0x1.c1b35ed21a4b7p-1017, 0.0,
     0x1.85ac938c3c91bp-108, 0x1.714a9814e8696p-518, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6755d56197363p-701, 0x1.68313f260da42p-156, 0.0, 0.0, 0.0, 0.0,
     0x1.0028d69ab71c9p-572, 0.0, 0x1.1426d6fadb197p-308, 0x1.58f2bc22a01e5p-787, 0.0,
     0x1.2c58b9344c924p-457, 0.0, 0.0, 0x1.83a61b087e40ap-451, 0x1.fc186cd8504dfp-303,
     0.0, 0.0, 0.0, 0x1.e7bb5c0cbceacp-889, 0x1.78b9e4e3c0876p-584,
     0x1.f6452313ed5eap-1, 0x1.3d51ebaa5ef89p-847, 0.0, 0.0, 0.0,
     0x1.0b9817b2e5116p-565, 0x1.4cf1d480d6983p-937, 0x1.cdf4b984a5a32p-207, 0.0,
     0x1.b3b3ad057668dp-957, 0.0, 0x1.625d56558d264p-914, 0x1.727b08e5725dp-835, 0.0,
     0.0, 0x1.da60703193c29p-926, 0x1.e7ed3d5a41167p-859, 0x1.020ec2fee00ffp-237, 0.0,
     0x1.02d76105791c2p-107, 0x1.e6def5f975041p-40, 0x1.e2eaf55f4370bp-983,
     0x1.d5bb9e93bcd7dp-809, 0.0, 0.0, 0x1.f44a8cf0d38c8p-250, 0x1.e700b4bedbdf4p-110,
     0.0, 0x1.9283dcdc259a3p-861, 0x1.9ebc3ca3b6346p-635, 0.0, 0x1.d5e0ef711759fp-582,
     0.0, 0.0, 0x1.0815fb90ea79fp-49, 0.0, 0x1.ac3ede5582b94p-530, 0.0, 0.0, 0.0,
     0x1.5a337123c228bp-569, 0.0, 0.0, 0.0, 0x1.066bd12b0874ep-601,
     0x1.8c151a86ba827p-295, 0x1.355477060b90bp-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.027d9dad5d652p-672, 0.0, 0.0, 0x1.94f1c1d19dcc9p-216, 0x1.ec54abec5bd62p-616,
     0.0, 0.0, 0.0, 0.0, 0x1.be9e46c1b9bbdp-955, 0x1.adbd5e1cf75e7p-375,
     0x1.c9a6fdcb781bep-899, 0.0, 0x1.88bc45922908p-355, 0.0, 0x1.be3ffdc25c76cp-515,
     0.0, 0.0, 0x1.35650b5c9e749p-347, 0x1.6b71be71614c9p-191, 0x1.2233cf0aa2f5cp-415,
     0x1.3594ea0a539d7p-398, 0.0, 0x1.20b0c4c177beep-701, 0.0, 0.0,
     0x1.040065593892cp-698, 0x1.36b2150c85b93p-710, 0x1.d84589c8397bp-461,
     0x1.08b15f8575001p-506, 0.0, 0.0, 0x1.df903d8b9e9a4p-975, 0.0,
     0x1.de5f1fd1557adp-169, 0x1.b7aa63e9635a5p-410, 0.0, 0x1.73c242828bb8bp-545,
     0x1.fb1ed8d95ea31p-351, 0.0, 0x1.c60346afe702p-998, 0x1.6a5e24358f70bp-296,
     0x1.586a3e54deeb8p-275, 0.0, 0x1.de13c53898c9ep-46, 0.0, 0.0, 0.0,
     0x1.e25e8e45b4e7cp-938, 0.0, 0x1.ca0a7c9c041adp-206, 0.0, 0.0, 0.0,
     0x1.4020e538a9db8p-41, 0.0, 0.0, 0.0, 0.0, 0x1.2bdc7c515c892p-397,
     0x1.830f232e6feb3p-73, 0x1.e8a6f9f34a9f9p-91, 0x1.8ae057c9a9779p-318, 0.0, 0.0,
     0.0, 0.0, 0x1.f779d4d2748c2p-753, 0x1.ab9e78da90f61p-531, 0x1.073783279a73ap-639,
     0.0, 0x1.f3165453d2da9p-133, 0x1.c701abe5a4457p-814, 0.0, 0x1.c601a64938f6bp-105,
     0.0, 0.0, 0x1.dd67b616d1ce4p-681, 0x1.aa7a48befbc7bp-729, 0.0, 0.0,
     0x1.861bf0ecf186dp-798, 0x1.4c74504ded482p-756, 0.0, 0x1.36060500fcc95p-18, 0.0,
     0.0, 0x1.fa44eb307e207p-742, 0.0, 0x1.b61667e76ce99p-596, 0.0, 0.0, 0.0,
     0x1.0ea15b40b7fe6p-474, 0x1.a04d6d8d5e39ep-929, 0.0, 0x1.4a3b45ade4c7ep-145,
     0x1.516e42dd8104dp-273, 0.0, 0.0, 0x1.4b2a3409994ddp-109, 0.0, 0.0,
     0x1.6317bcc97cb5p-712, 0x1.a13ecfc17c16ep-688, 0.0, 0x1.a319357911f1fp-971, 0.0,
     0x1.735cd67c324a2p-160, 0.0, 0.0, 0x1.0f05e11632c92p-676, 0.0,
     0x1.9db282610e81ap-605, 0x1.a8b3bd05f96c3p-31, 0x1.9086d949f8b02p-731, 0.0, 0.0,
     0x1.50243ebe277ffp-975, 0x1.0edcc6ead5abap-435, 0.0, 0.0, 0x1.2c3ba3027410fp-38,
     0.0, 0.0, 0.0, 0.0, 0x1.1c0150e759c7cp-863, 0x1.19b313038d471p-67,
     0x1.2a584767b12d3p-856, 0x1.056d645060f93p-834, 0.0, 0x1.870a4a4301c4fp-145, 0.0,
     0.0, 0.0, 0.0, 0x1.ec1509e028c89p-347, 0x1.ac61063d70b88p-735,
     0x1.226ccd07c9866p-953, 0x1.743ee5e57e75bp-576, 0x1.064f66bb29db4p-958,
     0x1.97be0a68b1bf4p-17, 0.0, 0x1.fe4b88d627334p-838, 0x1.7bd4b9f12d526p-98,
     0x1.468b1c88f48bfp-606, 0.0, 0.0, 0.0, 0x1.0647e5ec60f15p-259, 0.0,
     0x1.25b5501250f25p-868, 0x1.0f45bc2b8e895p-645, 0.0, 0.0, 0x1.a8047e1cac874p-863,
     0x1.d278534d82edap-445, 0.0, 0x1.7d5fb83bb0827p-946, 0x1.c2bcfece7bafdp-758,
     0x1.8deeebaf1f22cp-503, 0.0, 0x1.a4a575df1c52dp-708, 0.0, 0.0, 0.0,
     0x1.0e6d8dfe856a6p-882, 0.0, 0.0, 0x1.9a3e85ce3684dp-644, 0x1.df69622d0e3b9p-190,
     0x1.81f19e86702f6p-500, 0x1.2a45672586278p-257, 0x1.cdcf01254955bp-638, 0.0, 0.0,
     0x1.79e784bef4daep-480, 0x1.5a62c19ef08fap-260, 0x1.c32ff972bbaa5p-292,
     0x1.9f38f8f23741bp-694, 0x1.96fcba6aeeac3p-136, 0.0, 0.0, 0.0, 0.0,
     0x1.5be1b37e22df7p-996, 0x1.ee365b85ce2a3p-12, 0x1.307754d918ed3p-272,
     0x1.65602fe3be0b3p-667, 0x1.ab97e0ca043fap-1003, 0.0, 0.0, 0.0,
     0x1.ac37bc1dc50e5p-735, 0x1.4f4c4150f6d2ep-721, 0.0, 0.0, 0x1.c29ad421bef33p-496,
     0x1.bb604b91aea9fp-595, 0x1.a7f5a6812df1fp-528, 0x1.683b2a39115e9p-650,
     0x1.b977de118b575p-45, 0x1.c03a5dfc1ae55p-1009, 0x1.63cee93d16f0bp-737, 0.0,
     0x1.4a19c16379959p-1006, 0x1.55bc79e2b8dbp-66, 0x1.9441cd9e59b6dp-262, 0.0,
     0x1.c4e7fef70d77cp-222, 0.0, 0.0, 0x1.0a1bb5d2b7b2ep-883, 0.0,
     0x1.5ab3ebc3e3398p-718, 0.0, 0.0, 0.0, 0x1.e9fb0b479c549p-149, 0.0,
     0x1.69edc48799563p-812, 0.0, 0x1.8956ad167778bp-1013, 0.0, 0x1.194ffe9085e66p-99,
     0.0, 0.0, 0x1.dc6b9ad337645p-225, 0.0, 0x1.371ed5f8b37cap-291,
     0x1.5d284ee5c584bp-137, 0x1.fee5f6e1077aap-301, 0x1.094cb88c56f95p-997,
     0x1.25f1c17e54d6cp-879, 0.0, 0.0, 0.0, 0.0, 0x1.a59fcc6864d3dp-751, 0.0,
     0x1.6ce29a9f60e61p-294, 0x1.85daf7ae160f6p-20, 0x1.30b714aab73fdp-952, 0.0, 0.0,
     0.0, 0.0, 0x1.46dc039a77367p-486, 0x1.cd409f9fa8affp-432, 0.0,
     0x1.fdb4154ac54e6p-926, 0x1.959b125bbb84ap-475, 0x1.061cc332227f2p-207, 0.0, 0.0,
     0.0, 0.0, 0x1.38c89853c2bep-158, 0x1.3b7f7d23eb86p-605, 0x1.d124ece47c1c9p-425,
     0.0, 0.0, 0.0, 0x1.d1551999428f9p-7, 0.0, 0x1.2df00392d3233p-375, 0.0, 0.0,
     0x1.8e85a2caf25afp-177, 0x1.a63267764f4c6p-876, 0x1.da87adbca0817p-259, 0.0,
     0x1.2b10ee798b4d3p-345, 0.0, 0.0, 0.0, 0x1.6f38ce021a96fp-593, 0.0,
     0x1.c5e59ec5f148p-532, 0x1.dbaf3045379a2p-492, 0x1.6d1dc08fccfbdp-443, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.686631ed8c11bp-482, 0.0, 0x1.3bae5ecb33ce2p-90, 0.0, 0.0,
     0x1.f7145638ea7eap-793, 0x1.6d044a3278347p-366, 0.0, 0x1.d230468c5ea9dp-31,
     0x1.3f38c8e53a842p-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd004b7e1abc4p-68, 0x1.b0163671029d3p-922, 0x1.28a6ee53fb9e7p-331, 0.0,
     0x1.4d3170f688025p-737, 0.0, 0.0, 0x1.414bd969bf2d4p-419, 0x1.0a4df74c21ab8p-404,
     0.0, 0x1.245b9f31c5fb3p-627, 0.0, 0.0, 0x1.482f5a3e556a2p-355, 0.0, 0.0, 0.0,
     0x1.9e68bfeb0c199p-626, 0x1.df7885525a057p-286, 0.0, 0x1.b294003428618p-853,
     0x1.9e990ace95faap-933, 0.0, 0.0, 0.0, 0.0, 0x1.e2be7b398d1b7p-352,
     0x1.cc111008e88d4p-993, 0.0, 0x1.b852f7c2e0a84p-770, 0.0, 0x1.4ee0f5223226p-862,
     0x1.2d984392d3554p-793, 0.0, 0.0, 0.0, 0x1.3a9a6e771761fp-664,
     0x1.9c52e08efd717p-822, 0x1.b76a10ea7cd0fp-47, 0.0, 0.0, 0.0,
     0x1.7b2dbfa929ceap-163, 0x1.01f3b1a9eb385p-713, 0x1.bce0f43bf55f1p-318, 0.0,
     0x1.26eae47139634p-631, 0x1.fa302bd51c6edp-623, 0x1.fe9462ed44269p-513, 0.0, 0.0,
     0x1.9497ff1cd4289p-752, 0x1.b438ecabbc55ep-885, 0x1.004977d93de4cp-819, 0.0, 0.0,
     0x1.6f335860e48fcp-256, 0x1.143b49bbdc023p-107, 0x1.db7689ebc6c3ep-304,
     0x1.6af6018ddc67bp-908, 0.0, 0x1.2b4c72546047dp-551, 0x1.54da21b06fd72p-431,
     0x1.62369d9f30f21p-936, 0.0, 0x1.d205dfc0db479p-296, 0x1.49c9a16dade1fp-576, 0.0,
     0x1.ae2af71efb187p-551, 0x1.20dd340fbc1a4p-81, 0x1.8f2972e8e7f4bp-238, 0.0,
     0x1.bcd898586a6c4p-350, 0.0, 0.0, 0.0, 0.0, 0x1.c26c16fc4a127p-542
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
            tmp1 = Sleef_finz_tand1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tand1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tand1_u35purecfma bench acc %la\n", global_bench_acc);
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
