/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd1_u10purecfma.c --function \
 *     Sleef_finz_tanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.a1f19681270edp-364, 0.0, 0x1.9b733ff450b9p-557, 0.0,
     0x1.992386f8777a7p-290, 0x1.9729c5e70b5e4p-131, 0.0, 0x1.6b6228d710e5ap-664, 0.0,
     0.0, 0.0, 0x1.4de009fe1f787p-794, 0.0, 0x1.31d6599cfddcbp-20, 0.0, 0.0, 0.0,
     0x1.fa24a6ebd463cp-181, 0x1.b50c57b8acf7ap-594, 0.0, 0x1.f267f14a5cb8ep-1005,
     0x1.cf7482ca8b05p-107, 0.0, 0.0, 0x1.953040e327411p-594, 0.0, 0.0,
     0x1.a66f48c14bd29p-660, 0x1.ae852ea9e16e6p-427, 0x1.084f1b328da78p-969,
     0x1.62792025d85fbp-806, 0x1.3c7b218fbed59p-621, 0.0, 0.0, 0.0,
     0x1.771b97d13b0bcp-226, 0.0, 0.0, 0x1.c46944786eeecp-612, 0.0, 0.0,
     0x1.9227da3ac561ep-395, 0x1.3edb650c52e7bp-878, 0.0, 0x1.623e9ce065edep-983, 0.0,
     0.0, 0.0, 0x1.c9066b152869ep-494, 0x1.faeaf6b92eb0fp-696, 0.0,
     0x1.5c2ab58934a55p-957, 0x1.f1c3eb2139096p-694, 0.0, 0x1.7c0bd81624e11p-339,
     0x1.fda3149f92347p-171, 0x1.13c4cc4394f4p-535, 0.0, 0.0, 0.0,
     0x1.a4d991666182bp-393, 0x1.62e1410f19301p-909, 0x1.254ae0b0d9fd9p-76,
     0x1.6704c644ceff6p-562, 0.0, 0x1.7b1a239d979b2p-748, 0x1.2b81f6533386ap-128,
     0x1.c5110be89c929p-834, 0.0, 0.0, 0x1.2ec2eb42cb3c2p-754, 0x1.978a69f744f16p-433,
     0.0, 0.0, 0.0, 0x1.3069aa3e367bp-93, 0x1.9b1946875e759p-975, 0.0,
     0x1.511ec9224b075p-430, 0x1.4bd9e46c211a7p-272, 0.0, 0.0, 0x1.16bf53503f326p-927,
     0.0, 0x1.325fb8aabd9cbp-444, 0.0, 0.0, 0.0, 0x1.009ca228e765ep-922,
     0x1.165a52195fa94p-319, 0.0, 0.0, 0.0, 0.0, 0x1.992d0c495be45p-948, 0.0,
     0x1.ef6e6bf0e31fcp-71, 0.0, 0.0, 0x1.c0dc48d5c3119p-434, 0x1.356a7b6b2492cp-573,
     0x1.841868a3ce0efp-695, 0.0, 0.0, 0x1.30eae7905f0acp-156, 0.0,
     0x1.53c099e8c9c7p-485, 0.0, 0x1.9b91db6edf48ap-162, 0.0, 0.0,
     0x1.f3a361a912b45p-325, 0.0, 0.0, 0.0, 0x1.50b942ed30e97p-338, 0.0, 0.0, 0.0,
     0x1.4155c1bc0087ap-151, 0.0, 0.0, 0.0, 0x1.f258db3747ae6p-374,
     0x1.6ef039e1ed428p-877, 0.0, 0.0, 0x1.d2cf051c37321p-1017, 0.0, 0.0,
     0x1.4f1d36b6d8d5dp-626, 0x1.3b010860d173ep-97, 0x1.05e786230d816p-646, 0.0, 0.0,
     0x1.12ad1a313018p-394, 0.0, 0.0, 0x1.7d6222505e1fbp-41, 0.0,
     0x1.5ea4afa8e1819p-40, 0.0, 0.0, 0.0, 0x1.781c9cb00ac8p-105,
     0x1.5bf37f0cc8a02p-546, 0x1.53905bf7a9521p-655, 0x1.e251db4802ebbp-577,
     0x1.aac2a0e82dce5p-333, 0.0, 0x1.a26e778a5e1c5p-438, 0x1.84d2bf5693fabp-515,
     0x1.d7b99320b89bcp-777, 0.0, 0.0, 0x1.059c6058a455p-380, 0.0,
     0x1.8d1607fe63c58p-541, 0x1.8d04dc6c3e57dp-959, 0x1.6d46a41a21b77p-776, 0.0,
     0x1.4f2d5925a5576p-289, 0.0, 0.0, 0x1.d5266d9e1d687p-833, 0x1.0a6b49ee9181ap-132,
     0x1.84092d20086b7p-490, 0.0, 0x1.f344caf148a78p-826, 0x1.662e49140cf99p-3,
     0x1.b5959b4de796ep-457, 0x1.848f8cd854b0ap-1014, 0x1.b62e1895c06fbp-150, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.020886222d243p-620, 0x1.0dc8bd323c2dcp-292,
     0x1.0dbe1f22bee0fp-648, 0.0, 0.0, 0x1.80177751265efp-550, 0.0,
     0x1.c185e2fddc92ap-911, 0.0, 0x1.2c3f3eb3f3c41p-536, 0.0, 0.0,
     0x1.4d27090bcae1ep-412, 0.0, 0.0, 0.0, 0x1.b690a6984dcdbp-1008, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.72a5f861a26c9p-105, 0x1.d3ba58b788dffp-512, 0x1.ffe348cff874ap-957,
     0.0, 0x1.172279cc2d18dp-172, 0.0, 0x1.b53c6b9501e24p-537, 0x1.779a89a04f2a1p-156,
     0x1.d035e1f4d9a76p-359, 0.0, 0x1.a7901a812908dp-389, 0.0, 0x1.91e64801d2e75p-479,
     0.0, 0x1.1c102c501c1f8p-441, 0x1.f93bb7e2510b6p-204, 0x1.22f87e4cdbb43p-653, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8f63ce34b3d5dp-691, 0x1.cdb1e6e6f657cp-67, 0.0,
     0x1.c477f08e33a15p-815, 0x1.addd69bb8e883p-950, 0x1.995bbe9de2697p-901, 0.0,
     0x1.c4012040e0b27p-230, 0.0, 0x1.f152b8fa594a4p-236, 0.0, 0.0,
     0x1.ce9110409ed35p-90, 0.0, 0x1.02858a98b66bdp-146, 0.0, 0x1.2e48c6c61cc52p-113,
     0.0, 0x1.4012ed9ee3209p-239, 0.0, 0x1.74931c4961736p-210, 0x1.c84cd1ca7bcfdp-131,
     0x1.e53d9dda86f43p-428, 0.0, 0x1.18afd3c4b9ee8p-212, 0.0, 0x1.a6d8db0def834p-505,
     0.0, 0x1.4be2c622a2229p-84, 0x1.1412d7fa8dc61p-749, 0.0, 0x1.4a05b3e917236p-722,
     0x1.fdd8f7e6ae2eap-298, 0x1.63aaa1d316bap-1006, 0x1.1444120cf032ep-152, 0.0,
     0x1.266d0bb2c82cfp-545, 0.0, 0x1.860bf68c37ec9p-491, 0x1.6814eea6ffb1fp-723, 0.0,
     0x1.20400f9cff991p-990, 0x1.5d1f45666adfdp-612, 0.0, 0.0, 0x1.20f36aa4b613p-239,
     0.0, 0x1.0fb8330e255f7p-686, 0x1.92c67657394eep-204, 0x1.d302dcf68802ap-437, 0.0,
     0.0, 0x1.5eaaa072f6b19p-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bcb2dc104f3cp-447,
     0x1.dd8fd0e5e033dp-198, 0.0, 0x1.4e23bdab64d95p-288, 0x1.9a6968cf9031ep-971,
     0x1.3054cdd2289c1p-509, 0x1.e6f8c5139c13dp-173, 0.0, 0.0, 0.0,
     0x1.b3bbb739995adp-118, 0x1.cc5c263f749bp-279, 0x1.61dbf8e0584fbp-552, 0.0, 0.0,
     0.0, 0.0, 0x1.c56eea226449fp-184, 0.0, 0.0, 0x1.063ddd408b7eap-1014,
     0x1.a0304f8b9744ep-293, 0x1.c6fa55f9a500ep-793, 0x1.fbe33529facf4p-124,
     0x1.d910802f46cf9p-224, 0x1.120d40ecd6b48p-365, 0x1.89e7aeee7e80fp-320, 0.0, 0.0,
     0.0, 0.0, 0x1.80618fe49f98p-504, 0.0, 0x1.c426ae0e00e81p-735,
     0x1.3678e54b14abdp-436, 0.0, 0x1.dd07a4ced6809p-500, 0x1.72440c0c4f0c9p-986,
     0x1.baa51531554eep-62, 0x1.661a3ffa26431p-925, 0x1.4f989127533f3p-215,
     0x1.7d031316b4f9ap-970, 0.0, 0.0, 0x1.0975131028bafp-818, 0.0, 0.0,
     0x1.8270f45aa4d46p-182, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e643f7e8fd04p-332,
     0x1.d710ab45e7c4fp-1019, 0x1.9ee680f31e9fap-151, 0x1.d690cb43ba568p-654,
     0x1.2a9fb567dd8adp-259, 0.0, 0x1.a46c209ff5ff3p-715, 0.0, 0.0, 0.0,
     0x1.aefa6004b36b8p-491, 0x1.479982d0610cdp-440, 0x1.59bf26b6966e3p-842,
     0x1.839b9f49a28bdp-768, 0.0, 0x1.235172c8c05fbp-440, 0.0, 0x1.0ece816a934dcp-564,
     0x1.23db13001136p-624, 0x1.28415e1ba4637p-427, 0x1.55e1ae0599847p-312,
     0x1.930e3f0a49022p-372, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a10fc6c85e2p-813,
     0x1.23688e7d3024fp-433, 0.0, 0.0, 0x1.049c55eb1a0eep-742, 0x1.97dc089fbd412p-15,
     0.0, 0x1.c8fcd344dbbd1p-905, 0x1.55b7e4ef44dc4p-1016, 0.0, 0x1.a25694b4e9231p-32,
     0x1.5686e50f7d9c5p-636, 0.0, 0x1.c392fa6ddde4ap-905, 0x1.9094e9f5c33b6p-318,
     0x1.29bd108ca148dp-951, 0x1.72cde5c4aafa7p-63, 0.0, 0x1.fe3cc75f40bccp-556, 0.0,
     0x1.51ad14c20e18ep-994, 0x1.fc4523a0ff397p-362, 0x1.02b587f6a5f2ap-95, 0.0, 0.0,
     0.0, 0x1.7aae2e89cf778p-717, 0.0, 0.0, 0x1.868315d1f44f9p-239, 0.0, 0.0,
     0x1.bea9f12f8656ap-972, 0.0, 0x1.e492688d5fb42p-810, 0.0, 0.0,
     0x1.69a7aaf7db69ep-571, 0x1.b808546a7c035p-816, 0x1.101d658d8cd7bp-538, 0.0,
     0x1.3b0783eb1d24ep-656, 0.0, 0.0, 0.0, 0x1.f14a79b8ae28dp-493,
     0x1.3e93978c32df4p-854, 0x1.a4c897f84513fp-770, 0x1.dafda06552396p-382,
     0x1.bdb4e4348506fp-361, 0x1.4d632722de73bp-17, 0.0, 0.0, 0.0,
     0x1.37f150964cb01p-434, 0.0, 0x1.2a758038c649fp-903, 0x1.051fa1d573996p-567, 0.0,
     0.0, 0.0, 0.0, 0x1.4f011723f804ep-119, 0x1.9fe5c844ae58ep-308,
     0x1.9a65820fa4ddcp-895, 0x1.441917ac4412ap-737, 0.0, 0.0, 0.0,
     0x1.b19dbbd85b3bfp-48, 0.0, 0x1.5941ba4d2e5ffp-130, 0x1.37fa0281da1adp-574, 0.0,
     0.0, 0x1.60b1aaf5c322fp-1016, 0.0, 0.0, 0x1.9c3e5064d2b04p-323,
     0x1.7f7df73a49b1p-232, 0x1.969cc491762c1p-855, 0.0, 0x1.8d02708ba895ep-102, 0.0,
     0x1.0f49399ac7f47p-772, 0.0, 0x1.0a2a3de6a172p-1009, 0.0, 0.0, 0.0,
     0x1.1a94ac733682dp-952, 0x1.0d0b2b7760fedp-529, 0.0, 0x1.bb1a85ecf03b2p-174,
     0x1.853715094363ap-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8c3417c8fb7dp-637,
     0x1.72bbf7d5ea6f1p-386, 0.0, 0.0, 0.0, 0.0, 0x1.53eed402f18b3p-538,
     0x1.f1cb71efcbc11p-499, 0x1.b1f58ff004e9ep-458, 0.0, 0.0, 0.0,
     0x1.d35f555aa9989p-41, 0.0, 0x1.c9746f6159f26p-296, 0x1.cf0dd3641642p-458, 0.0,
     0.0, 0x1.d785ba3285267p-207, 0.0, 0.0, 0.0, 0x1.af41470e00a75p-327,
     0x1.08dd3d78e397p-914, 0x1.981bc89a27ce4p-222, 0.0, 0.0, 0x1.82fb0b470e69p-224,
     0x1.5ff08196657f8p-595, 0.0, 0.0, 0x1.5f2198b2e544ap-240, 0.0,
     0x1.ecf65bd54850dp-597, 0x1.ef4db3564d5cbp-713, 0x1.96a14b6446561p-1018,
     0x1.8feead9f65d04p-786, 0.0, 0x1.fffa6346c2534p-895, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3235b01f6b727p-121, 0.0, 0x1.5102ed4e8345fp-234,
     0.0, 0.0, 0.0, 0.0, 0x1.c57c3012ddcdfp-932, 0.0, 0.0, 0.0,
     0x1.96c762198037fp-465, 0x1.9d68f5a3b25c4p-889, 0x1.488cccb6fdebfp-461, 0.0,
     0x1.dc94e5fc77017p-725, 0x1.e0b801eecbf5ep-658, 0.0, 0x1.6ccb7b8ffcef7p-882, 0.0,
     0x1.b3a1fc00810d9p-853, 0x1.b929ef4685077p-512, 0x1.5e9670ac5639ap-355,
     0x1.777cb6b432cb8p-383, 0x1.a837d290e194cp-897, 0x1.2ce42e2c28e8cp-431, 0.0,
     0x1.0f30df9c64421p-231, 0.0, 0x1.4934f70a227f2p-78, 0.0, 0.0, 0.0,
     0x1.3fb9b729c54dp-271, 0x1.3a825f7a4845ap-836, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.900ed3929a179p-304, 0.0, 0x1.3772bcada67dap-782, 0x1.efb6f4ebf502ep-810,
     0x1.86a35cc91622ep-875, 0x1.f1f83b52d135ep-769, 0.0, 0x1.5525273b03d1fp-463,
     0x1.b3942750cc885p-751, 0.0, 0.0, 0.0, 0x1.49da721d8a76cp-395,
     0x1.698866ae2e962p-553, 0x1.41682277cab2dp-301, 0x1.fa68b1f3ba606p-748, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.65b2e925d30bbp-905, 0.0, 0x1.e2ad5cc80b57p-823, 0.0,
     0x1.569866bf43e97p-355, 0x1.6fcefa9deaed6p-879, 0.0, 0.0, 0x1.1c3eb2e20afd1p-633,
     0x1.ddf7eaf87c62fp-49, 0.0, 0.0, 0.0, 0x1.b8232564e6831p-142, 0.0,
     0x1.731e24784e14ep-499, 0x1.5f1c5e7bf746bp-103, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9904a8635f9eep-221, 0.0, 0x1.886d4f4326e15p-44, 0.0,
     0x1.3cd8b3c59fe44p-659, 0x1.14057922ba107p-564, 0x1.0e900fe340b0cp-289,
     0x1.68ba144e917fcp-494, 0x1.44d997e3c38bbp-809, 0x1.7655375fea102p-199, 0.0,
     0x1.e72511ba81cdp-112, 0x1.ea84106dd2cbbp-141, 0x1.6547a6ff88c06p-367, 0.0,
     0x1.f9fb980e20c6bp-749, 0x1.ca6a1d0de1503p-10, 0x1.3559968f4c3abp-636,
     0x1.c6a7d0d54d397p-94, 0.0, 0x1.65735d77e7e99p-689, 0x1.c27a2e8afb4c5p-280,
     0x1.c5a71d1037305p-726, 0.0, 0.0, 0x1.aa86c01655b0cp-430, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d2b5c65d41b95p-601, 0.0, 0x1.3d6f0e52ef641p-729, 0.0,
     0x1.086cb67cc80fcp-962, 0.0, 0.0, 0.0, 0x1.348143eccfd7bp-886, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c96d756a91a27p-955, 0x1.4a4d57253ab9ap-201,
     0x1.58aca5c719f74p-284, 0x1.6b29746b45a67p-886, 0.0, 0.0, 0x1.59279ee108e3p-945,
     0x1.34d25a741b2e1p-149, 0x1.8ee33ebefb9edp-1005, 0x1.c3cfad8548e59p-940,
     0x1.409dfb9b22555p-1020, 0.0, 0x1.47cab77f3abf4p-660, 0.0,
     0x1.480956f56b7b7p-233, 0x1.ac064163aaa8fp-125, 0.0, 0.0, 0.0,
     0x1.1fcbb859207e8p-1011, 0.0, 0.0, 0x1.c9fa76b7a700ap-908, 0x1.db5dfcbc470e7p-2,
     0x1.21a4b23af1069p-920, 0x1.3a3433445ff0ep-460, 0.0, 0x1.9ae9db3909186p-324, 0.0,
     0x1.508d92dc02c92p-1018, 0.0, 0.0, 0x1.787090bf31f2ap-295, 0.0, 0.0,
     0x1.ec83c6919555ap-972, 0x1.c4b5bc2de30c2p-122, 0x1.5fd18869cfecap-1019, 0.0,
     0x1.d1b5eb7dc89fep-696, 0x1.e85babf987e0fp-663, 0.0, 0.0, 0x1.cfec07c53ece2p-1,
     0.0, 0.0, 0x1.365cebcea06e6p-40, 0.0, 0x1.02eea66723c94p-148, 0.0, 0.0, 0.0, 0.0,
     0x1.2997f80a7a4abp-660, 0.0, 0x1.1799bb2cb49b7p-922, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4cfe75ce68ba9p-209, 0.0, 0x1.c793563690a8ap-188, 0.0, 0.0, 0.0, 0.0,
     0x1.b8aa31e8cd78cp-682, 0.0, 0x1.244c05ba39ec6p-90, 0.0, 0x1.b81478a912cafp-4,
     0.0, 0.0, 0x1.f194c0bed14e6p-88, 0x1.a11320649b7ep-216, 0x1.e524fe5ba9e8ap-888,
     0.0, 0.0, 0x1.fa8916e69b0b2p-885, 0x1.64e5bac2d3293p-190, 0.0,
     0x1.0a2073e6d7159p-386, 0.0, 0x1.11fe7cb5be24ap-332, 0x1.9bc63502a7c31p-700, 0.0,
     0x1.aa739f8fd8594p-515, 0.0, 0.0, 0.0, 0x1.afc3f656326f2p-750,
     0x1.4deddb89092d7p-43, 0x1.d50e8f1ffae7fp-367, 0x1.c3951590e87f7p-936,
     0x1.aeceff8af76fp-672, 0.0, 0x1.8f2d6066367c3p-703, 0x1.f799fbe9ff453p-405,
     0x1.a232af32f0855p-562, 0.0, 0x1.72f3057ff88b8p-784, 0x1.ede89eeeb8eb9p-113, 0.0,
     0x1.f93d6361d47cep-890, 0.0, 0x1.0bc2f15363f0dp-422, 0x1.28fd1db9b8b68p-402, 0.0,
     0x1.e270018ebfbf6p-521, 0x1.691e61f586cdfp-581, 0x1.6b8a884bcacd3p-798,
     0x1.505b0f59df6dp-103, 0x1.1afb5a9bb6c2fp-187, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f8775217a873p-500, 0.0, 0.0, 0x1.5f383dccdde25p-646, 0.0,
     0x1.aa0e937014ddap-575, 0.0, 0.0, 0.0, 0x1.a611dd8b2870ap-678,
     0x1.276ef389682b3p-5, 0.0, 0x1.621cc5dc4b268p-122, 0x1.be8be6eae9df3p-427, 0.0,
     0x1.840ff13e3d073p-272, 0.0, 0.0, 0x1.ce4f319e78b2fp-89, 0.0, 0.0,
     0x1.2080796836737p-745, 0x1.df4d8512a8fa1p-451, 0x1.8e24ecb051a71p-566, 0.0,
     0x1.f7fef6583e50dp-217, 0.0, 0x1.e87bf94176e9bp-979, 0.0, 0x1.d751db0da2aap-477,
     0.0, 0.0, 0.0, 0.0, 0x1.30e912bf31229p-545, 0.0, 0x1.ec31a98c8ce8ap-971, 0.0,
     0x1.6231906e2592p-349, 0.0, 0.0, 0x1.a10acd5880f32p-902, 0.0, 0.0,
     0x1.5269d6c808d76p-485, 0.0, 0x1.b9b0ce568dcdap-569, 0x1.34289898a82f5p-911,
     0x1.9a218750df402p-51, 0x1.01f1f9668caeep-842, 0x1.171ba7cabf72ep-23,
     0x1.022aa39cb91f4p-364, 0x1.fc93c154efb93p-786, 0.0, 0x1.c81814dfcc5b7p-455,
     0x1.ffa04c3a85119p-622, 0.0, 0.0, 0.0, 0x1.22bce474fc799p-93,
     0x1.91fd7ff5ed842p-958, 0x1.0ee09a49096bap-76, 0x1.09a151516b441p-496,
     0x1.8993b0d86334ap-344, 0x1.cfa3f182bb31p-680, 0x1.919d06f9bd79fp-325,
     0x1.f39430bbe2aa9p-266, 0x1.1569a7a126f0dp-910, 0.0, 0x1.ee0dfd1538911p-218,
     0x1.68533c865b4a7p-193, 0.0, 0.0, 0x1.e5016aa4e9336p-304, 0x1.1fb5d05414fadp-779,
     0x1.0b983d4bf1bdcp-489, 0x1.c06a6f4e4abd3p-891, 0x1.0afa87fa7407p-766, 0.0,
     0x1.ea73d3b5d5e98p-850, 0.0, 0.0, 0.0, 0x1.377430b29d4b3p-179,
     0x1.9216b64b605b3p-780, 0x1.3fd0ea4868ccbp-66, 0.0, 0.0, 0x1.991a428ca746cp-523,
     0x1.9bef9f59d352ap-913, 0.0, 0.0, 0x1.dd5580ec6eaebp-656, 0x1.ad8797b7926cap-235,
     0x1.07847f8b25259p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.795539416678bp-139, 0x1.1f81a4ec9b181p-824, 0.0, 0.0, 0.0,
     0x1.e01465b2ee81p-60, 0x1.4bac5102b9b86p-323, 0x1.0f1faa068ce6ap-810,
     0x1.62074cacf3023p-467, 0.0, 0.0, 0x1.60d5346dc4b87p-107, 0x1.2d7a9563621aep-237,
     0x1.b9c69759d4d31p-55, 0.0, 0.0, 0.0, 0x1.0fe4e69981947p-796,
     0x1.8183be7d04906p-241, 0.0, 0.0, 0.0, 0.0, 0x1.f9b0675fecfa2p-282, 0.0,
     0x1.37be68336b024p-524, 0x1.253ab31893c36p-277, 0x1.55307c07e6e4bp-694,
     0x1.29757022aef24p-116, 0.0, 0.0, 0x1.4cf3869b38da3p-946, 0x1.690ba07ba9d3dp-40,
     0.0, 0.0, 0x1.4ade5a5b6866p-760, 0x1.a187b5fa8337cp-870, 0.0,
     0x1.263eeb781a97bp-661, 0x1.bd6a3de34684p-949, 0x1.26357f80e1b95p-28, 0.0, 0.0,
     0x1.9e65da3f0f873p-494, 0.0, 0.0, 0x1.94bbd2700437ap-1013,
     0x1.42f9b0787dd1ap-181, 0.0, 0.0, 0.0, 0x1.ee40d1ce74474p-738, 0.0,
     0x1.e89646338e5acp-275, 0x1.22f555079c2cfp-10, 0x1.ecde479399157p-609,
     0x1.c6d9b63b22ab1p-464, 0x1.89518a4fc8e46p-59, 0.0, 0x1.02d202b92ff13p-756,
     0x1.1408e9c919c7cp-938, 0x1.88597cfc6852dp-273, 0.0, 0x1.7c5babc49c92ep-189,
     0x1.79660d0cdded5p-869, 0x1.3c24da7cf275cp-427, 0.0, 0x1.b2e440f20fffep-937,
     0x1.955a905896eb1p-711, 0x1.9e125c05522dap-958, 0.0, 0.0, 0x1.124e347c07acfp-106,
     0x1.332812a43d1eap-888, 0x1.b68e5a6a3af9ep-471, 0.0, 0x1.1452592a80ee2p-556,
     0x1.aa61bfb7e2982p-544, 0x1.6865a3925b211p-547, 0.0, 0.0, 0.0,
     0x1.773e4878a8f11p-67, 0x1.4af64a508b35dp-92, 0x1.59556fc3c3d11p-849,
     0x1.f7e24ed7ae8fdp-556, 0.0, 0x1.d61be20981de6p-630, 0.0, 0x1.b631c4a774203p-140,
     0x1.45358ef2130a8p-229, 0.0, 0.0, 0x1.432a222f01f62p-724, 0.0, 0.0,
     0x1.381b8eb0c163ap-302, 0.0, 0.0, 0.0, 0x1.7c328c0c65a89p-370, 0.0, 0.0, 0.0,
     0x1.ab206153dee02p-614, 0.0, 0x1.245f8ba164dd7p-938, 0x1.5c31440fb2f03p-343,
     0x1.ffb7bb7cdbc58p-843, 0x1.426bddc53018bp-586, 0x1.51a93b8d3ce74p-553, 0.0, 0.0,
     0.0, 0x1.6db18af5de9c6p-836, 0.0, 0.0, 0x1.10d78d686580bp-426,
     0x1.57ad2ae8cd221p-812, 0.0, 0x1.efb04d95059bdp-152, 0.0, 0.0, 0.0,
     0x1.7ea4a3b394f67p-967, 0x1.93fa606d0c2d3p-925, 0x1.1280613113ad9p-941, 0.0, 0.0,
     0x1.74df7e3bab616p-230, 0.0
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
            tmp1 = Sleef_finz_tanhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
