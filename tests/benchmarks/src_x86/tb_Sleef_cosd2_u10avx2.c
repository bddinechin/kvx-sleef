/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd2_u10avx2128.c --function Sleef_cosd2_u10avx2128 --headers \
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
     0.0, 0.0, 0x1.3c21c5acffa0fp-402, 0x1.937b1bc2b56ecp-52, 0.0, 0.0,
     0x1.083e5a90382b6p-271, 0.0, 0.0, 0.0, 0x1.2602c1b0d46fap-628,
     0x1.8aff531f2501ap-867, 0.0, 0.0, 0x1.e67a56f3c6279p-384, 0x1.43f678f7f5626p-589,
     0.0, 0.0, 0.0, 0.0, 0x1.006175fd0e7b8p-694, 0.0, 0.0, 0x1.2b826dfebfc96p-113,
     0.0, 0x1.5e2531ea8fa4cp-894, 0.0, 0.0, 0x1.bcb1477d75c2ep-935,
     0x1.f6e05eed4cd2cp-575, 0x1.5a375dae0fa21p-412, 0.0, 0.0, 0.0,
     0x1.118ad0280c7aap-879, 0.0, 0.0, 0.0, 0x1.f6afbc07ab206p-320,
     0x1.dfa277face895p-534, 0.0, 0.0, 0x1.0432cf8b272d8p-329, 0x1.5c67626cdb85dp-318,
     0.0, 0x1.81b418c6b15cfp-18, 0x1.b9aad23c0f2b8p-398, 0.0, 0.0, 0.0,
     0x1.d11ab890dd60fp-683, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5aa55277060d2p-235,
     0x1.579efae7ece26p-890, 0x1.d25786e55d6ebp-678, 0x1.43c0c37970f5fp-804, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9797a5feff416p-890, 0x1.6fdc6e1dac672p-611, 0.0, 0.0, 0.0,
     0.0, 0x1.ce06c7f770598p-797, 0x1.a184b7f9d04bbp-688, 0x1.d7d1a225c0a19p-630,
     0x1.1449d4f9539ffp-796, 0.0, 0x1.441cc7b5691d1p-877, 0.0, 0x1.0bab450f55ac8p-819,
     0.0, 0x1.6c9586904706p-548, 0x1.e4ec7929d5259p-507, 0.0, 0.0,
     0x1.884cf530a317bp-466, 0x1.11b2b08ef60bap-536, 0.0, 0.0, 0.0, 0.0,
     0x1.4041285adae19p-758, 0x1.a6466b44ff71fp-319, 0x1.51577becfc95bp-791,
     0x1.714e585253fa2p-316, 0.0, 0x1.a3f32f09e6a1bp-614, 0x1.475bf7b453667p-656, 0.0,
     0.0, 0x1.774cc343032e8p-74, 0.0, 0.0, 0x1.7e5299ffe0235p-13, 0.0,
     0x1.16ff08d4fe1a6p-585, 0.0, 0x1.a0f6c00ef9334p-60, 0x1.b1a00da730c66p-31,
     0x1.4e9bdcb960232p-131, 0.0, 0.0, 0x1.3daf3d24b731cp-133, 0.0, 0.0, 0.0, 0.0,
     0x1.62d751de96918p-986, 0x1.e189e129766a3p-43, 0x1.8e9017c64c50dp-606,
     0x1.10ff032745e7bp-914, 0x1.5cadd8e5e7878p-958, 0x1.fc0e983d6595ep-291, 0.0,
     0x1.1ea26b2789252p-992, 0x1.f5d42cf68cb5ap-68, 0x1.a8e9974cb60f3p-25,
     0x1.76485397ce5dp-64, 0.0, 0x1.bc7b8f33e9af8p-640, 0.0, 0x1.5aead2e2929d9p-885,
     0x1.f2d908f126039p-35, 0.0, 0x1.e8636e86e66b7p-678, 0x1.15a7cffa82fb3p-902, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0446f22f2946dp-876, 0x1.e5c23404cd3ccp-466,
     0x1.1a577f9b89a2dp-974, 0.0, 0.0, 0.0, 0.0, 0x1.1482b3aee51dfp-503,
     0x1.a2bbf42f7547bp-494, 0x1.141367199782p-31, 0x1.70ba5f635212ap-461,
     0x1.17af120e06c7dp-148, 0.0, 0.0, 0x1.a8aac006c34f6p-598, 0x1.e38ea10a88cd7p-39,
     0x1.ccb23d8d13f01p-1006, 0x1.a725724809a8fp-479, 0.0, 0.0,
     0x1.59548e3a4184cp-422, 0x1.ca6f67732a20dp-246, 0x1.0028f199701b6p-372, 0.0, 0.0,
     0.0, 0.0, 0x1.f68ed0dd69244p-196, 0x1.0ca93f6ea18a6p-378, 0.0,
     0x1.206067103c10fp-265, 0x1.52b0a8dee57c3p-43, 0.0, 0x1.0cc277294189ap-875,
     0x1.cb57113243d0cp-762, 0.0, 0x1.cc7d10ed9b912p-476, 0.0, 0x1.3345a3522fd96p-915,
     0x1.a249cfa437987p-317, 0x1.52d38ca3a6ef5p-855, 0.0, 0x1.30bb846942bcbp-223, 0.0,
     0.0, 0.0, 0.0, 0x1.4fb0366399417p-742, 0x1.e229aa20a19f2p-286, 0.0, 0.0,
     0x1.4f4cb8933a541p-394, 0.0, 0.0, 0x1.b1abe00a26d1cp-130, 0x1.48692f6dcafa5p-758,
     0x1.3679d38c3bf09p-602, 0.0, 0x1.051ae4b10502ap-415, 0.0, 0.0,
     0x1.cbd8c863c27c6p-429, 0x1.c506cee99c3cap-653, 0x1.537cd58f92f84p-920,
     0x1.bc27f3327db33p-977, 0.0, 0.0, 0x1.bfe2fcf7d8177p-83, 0x1.970ed3d46daa1p-732,
     0x1.5e1f99c737b4ep-969, 0x1.71e2de9cf678ep-813, 0.0, 0x1.9ba25774dc852p-977,
     0x1.9afcc58843614p-1002, 0.0, 0x1.9f73ec9bd8d95p-269, 0x1.815176c004ap-2, 0.0,
     0.0, 0x1.cc46fb7c4c3eap-122, 0x1.e442a3389c002p-414, 0.0, 0x1.171955b7e2209p-126,
     0x1.c0f3fa20c7107p-831, 0.0, 0x1.0787331062008p-931, 0x1.5813c703a9ed6p-160,
     0x1.58ff6c07262cep-462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16c8f5109bf7dp-334,
     0.0, 0.0, 0x1.53e09f671a054p-393, 0x1.9fd7d50d1d24fp-982, 0.0, 0.0,
     0x1.ca679a74f221dp-162, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02251578091cp-576, 0.0, 0.0,
     0.0, 0.0, 0x1.a109f0111c1d6p-1013, 0.0, 0x1.ee4d9aa149107p-516,
     0x1.6470066fdb24dp-8, 0x1.3b90bc60332f8p-496, 0x1.c73073e588193p-779,
     0x1.e12e77a4a7125p-970, 0x1.8955c2f31b1cep-816, 0x1.f095ddaa588c8p-913,
     0x1.6dff93d64b169p-199, 0x1.594d2122dc80ep-1008, 0.0, 0.0, 0.0,
     0x1.2dfc4adabc268p-45, 0.0, 0x1.d9330193affdep-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.61e53de285f6fp-16, 0x1.3f6b0d2109078p-296,
     0x1.727044f3e617fp-715, 0x1.7deeda529be6p-520, 0x1.7d8bd9e140752p-582,
     0x1.e78565ec39c25p-229, 0.0, 0.0, 0x1.11448d9aa9fc1p-44, 0x1.ee6d0109c5325p-945,
     0.0, 0.0, 0x1.3fb53d63f1d42p-874, 0.0, 0.0, 0.0, 0x1.bdb7528cf8511p-380,
     0x1.42c6ff52b6f16p-930, 0.0, 0.0, 0.0, 0x1.7008f0b034224p-711,
     0x1.6822235e6ef62p-714, 0x1.e24176b69c3bcp-523, 0x1.fe2e291bebe34p-367, 0.0, 0.0,
     0x1.f5cc2f395a8a5p-566, 0.0, 0x1.5bde6eacf6af6p-757, 0x1.338ecbe8ac9dap-574,
     0x1.93aaf096e0a67p-709, 0x1.0451603d3e322p-960, 0.0, 0x1.87a8981a477cbp-385, 0.0,
     0.0, 0.0, 0x1.23d7178abaf68p-790, 0x1.71331bac6120bp-179, 0x1.39576f46c4035p-967,
     0.0, 0.0, 0x1.7c0fa5a299cebp-124, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a2925385d42adp-457, 0.0, 0.0, 0.0, 0x1.74f41165c3e1ap-614,
     0x1.c6cb9e8883347p-136, 0x1.d7465b1760927p-1008, 0.0, 0x1.811365ea82fbcp-59,
     0x1.ed21c9069c899p-352, 0.0, 0x1.900777a836029p-777, 0.0, 0.0, 0.0,
     0x1.e37a1f1ff86bap-796, 0x1.1e6ed161015b2p-77, 0.0, 0x1.7b9fe5d127ebfp-586, 0.0,
     0.0, 0x1.70921657eb1c3p-797, 0x1.223b0174c31e6p-334, 0x1.d772d3d65ab41p-426,
     0x1.dd79d11251b48p-9, 0.0, 0x1.f801b0d88c0fdp-473, 0x1.53dde064b3d9ap-708, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bfc9e75e6f55p-81, 0.0, 0.0, 0x1.22674a9026f6ep-878, 0.0,
     0x1.5ac5d3f4fe411p-235, 0.0, 0x1.d6064c6f5c932p-877, 0.0, 0x1.b02db3ab2f579p-159,
     0x1.0c5db26d71a09p-209, 0.0, 0x1.692717f8a45eap-64, 0x1.93c6d5953bb58p-608,
     0x1.eab9b03245c0dp-568, 0x1.39ea34db41c55p-88, 0x1.63e03e4dfcca1p-908, 0.0, 0.0,
     0x1.333d08276cb36p-242, 0x1.91b6d68ce001cp-753, 0.0, 0x1.6654104760ac9p-399, 0.0,
     0x1.4e2970a1fbde4p-229, 0x1.7d2a02f24bca9p-54, 0.0, 0.0, 0.0, 0.0,
     0x1.dd709b2191555p-193, 0x1.80ed5d7b15ad3p-771, 0.0, 0x1.0e21b589e3dc7p-546, 0.0,
     0.0, 0x1.ebe6bc38b232p-572, 0.0, 0x1.83e5d5ce4566p-475, 0x1.3bcb96beb90e7p-29,
     0.0, 0x1.d40d5abec6fc3p-116, 0.0, 0x1.a9891a9d9a42p-678, 0x1.b290c7778f6c1p-584,
     0.0, 0x1.219df1e4b9f8ap-316, 0x1.367254d60cd9fp-859, 0.0, 0.0, 0.0,
     0x1.2c5a814d3ac2p-54, 0.0, 0x1.a57e22b9f03f4p-197, 0.0, 0x1.a852599522301p-740,
     0x1.b68674447148ap-217, 0x1.d606f727b9ab4p-237, 0.0, 0.0, 0.0,
     0x1.0bc85ffda099bp-190, 0x1.449f921fff6b4p-703, 0.0, 0.0, 0x1.e751de8b3b2cbp-840,
     0x1.b5c21f1b6f69dp-209, 0x1.8c78b3a9b05c5p-107, 0x1.d1632de424ebbp-986,
     0x1.908408ee72b08p-648, 0.0, 0x1.7b981a46c8425p-785, 0x1.22eb47865650ap-163,
     0x1.7a0dc16d224f6p-759, 0.0, 0.0, 0x1.5595f3d5e8dc9p-403, 0x1.058012ceabc52p-864,
     0x1.e1356553d5aedp-737, 0x1.e0571bd7c1c6dp-236, 0.0, 0x1.92774898ceee5p-590,
     0x1.6844e6916c3a1p-926, 0x1.18a99578826b6p-499, 0x1.53a8f3efe8ccdp-352, 0.0, 0.0,
     0x1.2d55142cfd69ep-743, 0.0, 0x1.dca3541f96872p-278, 0.0, 0.0,
     0x1.80d51ffc580e5p-820, 0.0, 0x1.740894dfc8b45p-591, 0.0, 0.0,
     0x1.bd2142b00eb56p-770, 0.0, 0x1.eecf73edf5d2p-1009, 0.0,
     0x1.1bcbdb4084098p-1007, 0x1.f8273caa05744p-489, 0x1.731871901346p-587,
     0x1.98285b6915d05p-69, 0x1.46f8e8e7b9466p-781, 0x1.78b666cb22b7fp-670, 0.0, 0.0,
     0x1.4336d983ffa8cp-718, 0.0, 0x1.4aff979947b2ep-981, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.669f50a011613p-519, 0.0, 0x1.c3b7ad6a3d498p-532, 0.0, 0.0, 0.0,
     0x1.8b50664fe664ep-158, 0x1.833edd8b68b1cp-883, 0x1.e94cb70256178p-696,
     0x1.85e1db7dcd085p-190, 0x1.f4624d61b1bbdp-540, 0.0, 0.0, 0x1.be2548c0a79bap-413,
     0.0, 0.0, 0x1.a79a5671e934cp-8, 0x1.465bb84ac0a1fp-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.c79da2fbf3f76p-502, 0x1.6cd664ea80f9fp-149, 0.0, 0.0, 0.0, 0.0,
     0x1.d23b422bcb89ep-548, 0.0, 0x1.c51b8d88ff557p-612, 0x1.1252bcb1e5627p-945,
     0x1.a6aa360bbd8edp-482, 0.0, 0x1.f7a0fd7d67173p-443, 0x1.cb978c6e0a38fp-589,
     0x1.c720a7dec281cp-685, 0.0, 0x1.a7c2313796672p-451, 0x1.1d642734bf721p-936, 0.0,
     0x1.61b1278fd44c7p-847, 0.0, 0.0, 0.0, 0x1.c0c8dd40b2486p-1018,
     0x1.01d60ac4e3c26p-90, 0.0, 0x1.c550ae1377204p-771, 0.0, 0.0, 0.0,
     0x1.77925bd7d0fadp-785, 0.0, 0.0, 0x1.0ebb59d1ed251p-618, 0x1.d2077bf52435p-523,
     0.0, 0.0, 0x1.563ef62bc23a3p-989, 0.0, 0.0, 0x1.7873d3cd01ff3p-287, 0.0, 0.0,
     0.0, 0x1.68f5b3f089767p-933, 0.0, 0.0, 0.0, 0.0, 0x1.34fa5bf752516p-131,
     0x1.e352be24a9ac1p-135, 0x1.89ad8b00fd642p-482, 0.0, 0.0, 0.0, 0.0,
     0x1.26493e69ad9cep-425, 0.0, 0.0, 0x1.5329b2ebe71c1p-387, 0.0, 0.0, 0.0, 0.0,
     0x1.ba0cdea72fec5p-193, 0.0, 0x1.89039881fac57p-965, 0x1.9e0d51c667858p-1022,
     0.0, 0.0, 0x1.e2029faac9aa5p-528, 0.0, 0x1.fea9236f44776p-721, 0.0, 0.0,
     0x1.75c9141d2c332p-821, 0.0, 0.0, 0x1.9515e69489be4p-862, 0.0,
     0x1.8e1fa06f30dddp-347, 0.0, 0.0, 0.0, 0x1.9ec5470cdb7cp-618, 0.0,
     0x1.c2f1050b4364bp-55, 0.0, 0x1.fd2bd8654e325p-466, 0x1.1487c85701d7fp-599, 0.0,
     0.0, 0x1.24ef1405896d6p-581, 0.0, 0x1.21d6338b8548bp-185, 0x1.cd113a3b0cdb5p-208,
     0x1.b61799f8365b3p-731, 0.0, 0.0, 0x1.50feff06c266dp-661, 0x1.a2119062e866p-335,
     0.0, 0x1.b525cf61ac56ep-168, 0x1.d2a77fce4f885p-796, 0.0, 0.0,
     0x1.b716469a60a8ep-1015, 0.0, 0x1.388f72d5f7405p-727, 0x1.f32a30928d604p-603,
     0.0, 0x1.f765a3a1d0d63p-560, 0.0, 0.0, 0x1.64f15bfac6298p-353, 0.0,
     0x1.f13fe566509b2p-357, 0x1.4d8278efb832ep-182, 0.0, 0.0, 0x1.1bfa5d20b2da9p-60,
     0x1.8ff3f98015d2p-339, 0x1.be813b1a299f9p-347, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8e9ad3051654fp-64, 0x1.7f9e396887c58p-521, 0x1.9bf69e054a21ep-715, 0.0, 0.0,
     0.0, 0.0, 0x1.f8ce9eafa2d95p-988, 0x1.5c23393ac1b4p-980, 0.0,
     0x1.2af23028382cfp-701, 0x1.9b1fcbdb714acp-666, 0x1.e06d65f2bdd37p-305, 0.0,
     0x1.209710a99690ap-892, 0x1.788fe89a8ac6dp-929, 0.0, 0x1.937b74af4242p-304,
     0x1.78cf043687309p-25, 0.0, 0.0, 0x1.a427d5c2cf38cp-221, 0x1.6113793ffc9d8p-627,
     0.0, 0x1.7b4b58722799p-640, 0.0, 0x1.8c5427116de8bp-889, 0.0,
     0x1.5b5cec375d9cap-674, 0x1.993b67874969bp-563, 0.0, 0.0, 0.0, 0.0,
     0x1.b76b8c2688ef7p-86, 0x1.2440eee4c2a3bp-275, 0.0, 0.0, 0.0,
     0x1.3cd2877b329ffp-666, 0.0, 0.0, 0.0, 0x1.a18a00f324b87p-52,
     0x1.f4e340f6ef9d8p-991, 0.0, 0.0, 0x1.bc00309f23127p-85, 0.0,
     0x1.0cac26de87865p-639, 0x1.9dd8c0e763829p-495, 0x1.d0cbe58fc9f42p-222,
     0x1.60f10ac8a78b9p-322, 0.0, 0x1.13cbda19f4f2dp-76, 0x1.b0406ecaca9fp-157,
     0x1.58d3511054fbep-265, 0.0, 0x1.403b049de5fa4p-823, 0.0, 0x1.cd5dca5141a3ap-91,
     0.0, 0.0, 0x1.ce1a7193d2417p-992, 0x1.9ad0eb12c4cddp-428, 0x1.8efd451ae2985p-884,
     0.0, 0x1.3ead15d40fdfdp-386, 0x1.14b10b6b0743cp-942, 0.0, 0x1.55e60b3dd82aep-806,
     0x1.8b212ce914a47p-1022, 0.0, 0x1.3f26d1cbf5398p-651, 0x1.2613ff6af048ep-922,
     0x1.83c3b1ce087fp-524, 0.0, 0x1.3cedff08b21dfp-580, 0.0, 0.0, 0.0,
     0x1.a5547e313680ap-570, 0.0, 0.0, 0x1.0a6b1e181cee5p-391, 0x1.af88092dd6f2p-802,
     0x1.10d4cd20637b6p-179, 0x1.a96e260922b26p-309, 0x1.8473c09b5e9b4p-638, 0.0,
     0x1.9a07766d8cfb5p-637, 0x1.244a38228f127p-124, 0.0, 0x1.bc6a4878a3fa6p-424,
     0x1.5c0ec2449b836p-521, 0.0, 0x1.9e5a7164f27e7p-506, 0x1.c7cf90e6c7dfap-944,
     0x1.d1533fafed672p-218, 0x1.383fccd865a64p-583, 0.0, 0.0, 0.0, 0.0,
     0x1.cbb53524923c2p-478, 0x1.0e16f2595454bp-618, 0x1.9edb8ba494d65p-306,
     0x1.b7538ec6d72a4p-13, 0.0, 0x1.a8d4b641b9652p-960, 0x1.b79087b2d4adp-119,
     0x1.f98673bad8d66p-560, 0x1.7ca6cb9a33cdcp-189, 0x1.5e3fa0a79d1c3p-875, 0.0,
     0x1.08251c936c7bap-682, 0.0, 0x1.f5d080155d53dp-23, 0.0, 0.0, 0.0,
     0x1.c984f6496a1ap-154, 0.0, 0.0, 0x1.a20c8e388f8d1p-447, 0x1.387fefd2abdb3p-71,
     0.0, 0.0, 0.0, 0.0, 0x1.828b73107b83fp-967, 0x1.693b26365031fp-692,
     0x1.4d0808c705695p-972, 0.0, 0.0, 0x1.b12aff483a93ep-105, 0.0, 0.0,
     0x1.a42621c6e07bcp-532, 0.0, 0x1.7dcb7eb629001p-388, 0.0, 0x1.84aebd4d2dc8dp-784,
     0.0, 0.0, 0x1.a980b86fee3ebp-903, 0x1.2500e69fc8b96p-463, 0.0,
     0x1.9bdfd4cbbbba3p-335, 0.0, 0.0, 0x1.3ee7eb840f043p-48, 0.0, 0.0, 0.0,
     0x1.1d8c6025692ecp-36, 0x1.10b31b5309a3dp-367, 0x1.fbb1134da5a0cp-372, 0.0,
     0x1.539591e2c6a8p-225, 0.0, 0x1.6c87841ada7f1p-228, 0x1.d67e02ce321b9p-375,
     0x1.97e2cdaba7f23p-14, 0.0, 0.0, 0x1.2dbc96afe13eap-717, 0.0, 0.0,
     0x1.372bdd43948cfp-201, 0x1.82328760ddc9p-464, 0x1.2362fcb485b9p-295, 0.0,
     0x1.799c00bb8160fp-10, 0x1.59bd725a39053p-776, 0x1.3a3da227bf7aep-175,
     0x1.5ef7bdc1f0b6dp-640, 0.0, 0.0, 0x1.e9523f61163c1p-915, 0x1.bfe481c1ab1ccp-10,
     0x1.1e4ba51e69778p-713, 0.0, 0.0, 0.0, 0x1.71a6cacc1a39dp-79, 0.0, 0.0,
     0x1.b315c6a4acd48p-675, 0.0, 0x1.b40ddeee2e1cdp-548, 0.0, 0.0,
     0x1.338517fc81afdp-544, 0x1.d7ec74f705709p-799, 0x1.4c477f469b4d7p-110,
     0x1.c9502fc9e77acp-196, 0x1.a971135a50864p-871, 0x1.b55cfe36c3783p-279, 0.0,
     0x1.03d5e29159faap-296, 0x1.3043a714fdb32p-991, 0.0, 0.0, 0x1.df36cf38b4381p-517,
     0.0, 0.0, 0.0, 0.0, 0x1.0e49df2dcd998p-28, 0x1.aa1c595d3f099p-921, 0.0, 0.0, 0.0,
     0x1.5f94385be565ep-588, 0.0, 0x1.d2dfa1b461823p-599, 0x1.c8a057337c649p-223, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1a8f84a16b56p-274, 0x1.55cbe4c3a539bp-699,
     0x1.253cc299742e4p-252, 0x1.0b5395dbfd37ap-298, 0x1.20351e0f8c05bp-544, 0.0, 0.0,
     0.0, 0x1.93a12f064b4ep-620, 0.0, 0.0, 0.0, 0x1.f39a67afad15cp-516, 0.0,
     0x1.398ff66c4f332p-752, 0x1.bf2385fcef549p-89, 0.0, 0x1.4145325639776p-909,
     0x1.890fd19290e38p-976, 0x1.38e56e9469132p-276, 0.0, 0x1.c098c101a5eecp-613,
     0x1.0e8350c5acedap-407, 0x1.cc9f8596035fp-569, 0x1.576848950c971p-393,
     0x1.6e2df06b029a3p-357, 0x1.1efdf7ba8a803p-121, 0x1.b66165714f738p-89, 0.0,
     0x1.034cd3d2d346p-205, 0x1.611f69b44d1aap-972, 0.0, 0x1.a5136343227bap-146, 0.0,
     0x1.b0802ce8fd585p-633, 0x1.75af88dbdb005p-714, 0x1.cb06c46b681dfp-576, 0.0, 0.0,
     0.0, 0x1.6311cf9b95d4dp-684, 0.0, 0.0, 0.0, 0x1.d3678c9ac1957p-782, 0.0,
     0x1.130754cc9a436p-213, 0.0, 0x1.4baa5f0ae11f2p-235, 0x1.ead3d47b53cf4p-683,
     0x1.f1f301383302dp-558, 0x1.a47994e9da138p-722, 0x1.a93fcee407fc5p-745,
     0x1.8439b8a792c31p-839, 0x1.1b864b177e3e7p-20, 0.0, 0.0, 0x1.6db056c763378p-1000,
     0.0, 0.0, 0x1.81c891d578de7p-779, 0.0, 0x1.6c92eae1e6768p-596, 0.0,
     0x1.0f7367cb0bea9p-537, 0.0, 0x1.1627f039b5194p-425, 0.0, 0x1.843922779782cp-323,
     0.0, 0x1.4c163c93c9613p-663, 0.0, 0.0, 0x1.cd6ee49f12072p-602, 0.0, 0.0,
     0x1.228f2e937bdcfp-369, 0x1.72b8ef4f70e5cp-614, 0.0, 0.0, 0x1.5d54c636bb7c4p-632,
     0.0, 0.0, 0.0, 0x1.2b219eb342d04p-218, 0x1.4a62d964b54e3p-338,
     0x1.52053ce6d0cf9p-319, 0.0, 0x1.d13b9a4dd1d25p-556, 0.0, 0.0,
     0x1.2264737ddcfap-327, 0.0, 0.0, 0x1.f9758148cb73cp-645, 0.0, 0.0,
     0x1.f66b88a85b2d2p-311, 0.0, 0.0, 0x1.4b7bb4a5672a9p-533, 0x1.256b92ad5ab4bp-396,
     0x1.a8f6171595179p-980, 0.0, 0x1.798fb28e097a2p-946, 0.0, 0.0, 0.0, 0.0,
     0x1.c45f9a135f63cp-95, 0.0, 0.0, 0x1.0240b3948f513p-461, 0x1.27405c0688dbbp-728,
     0.0, 0.0, 0x1.ba9e1aee9fec4p-505, 0x1.76a409629adc1p-804, 0.0,
     0x1.8ac5fe95e666p-391, 0.0, 0x1.f06f0cc30827cp-169, 0x1.c6fcedbb1a536p-78, 0.0,
     0.0, 0x1.27a40e385a64cp-934, 0x1.0e6f0a99ea05ep-110, 0x1.cdd1612f2ec6ep-96,
     0x1.03f1eb2a1192ap-173, 0.0, 0.0, 0.0, 0.0, 0x1.665263055eb58p-788,
     0x1.2c40a4b7ff68ep-515, 0.0, 0x1.8039f0467801bp-493, 0x1.9d2518bc325fap-115, 0.0,
     0.0, 0.0, 0.0, 0x1.419e79158fffep-398, 0x1.268d5335208cp-796,
     0x1.97bc4f511569dp-813, 0x1.dff2036fef1dep-748, 0x1.6f4b87df4c46p-102,
     0x1.de296f06dacd9p-690, 0.0
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
            tmp1 = Sleef_cosd2_u10avx2128(tmp0);
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
    printf("Sleef_cosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cosd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
