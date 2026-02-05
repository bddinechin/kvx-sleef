/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modfd2_avx2128.c --function Sleef_modfd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision \
 *     sleef_sd2 --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.1a26e2ffb19d6p-502, 0.0, 0x1.2a356ff741766p-551, 0.0,
     0x1.8dd023b82a20fp-687, 0x1.876b39f31fc87p-706, 0x1.519782c6c2d89p-879,
     0x1.eac4fabe83044p-824, 0.0, 0x1.da225527c6199p-387, 0.0, 0x1.e6b58e93fb695p-650,
     0x1.631df63a96f6dp-724, 0x1.b145c8eada361p-117, 0.0, 0x1.5acadd3b740a4p-630,
     0x1.174602b600bdfp-1015, 0.0, 0.0, 0x1.d9c7c2eedd5eep-118, 0.0, 0.0,
     0x1.0dbeb0436140fp-866, 0x1.4515f2a401a35p-160, 0.0, 0.0, 0.0,
     0x1.1cab089827cddp-628, 0x1.59c5e2e860e4p-616, 0x1.c5bcccb3160ebp-680, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.64f516c63fb93p-451, 0x1.bfe09eef879c6p-605, 0.0, 0.0,
     0x1.5b623c47acb5p-627, 0.0, 0x1.40fc2db2f55efp-531, 0.0, 0x1.2e6598cdc52d7p-602,
     0x1.85b5a4a5c829bp-467, 0x1.37a2ca8ae3947p-608, 0x1.21442d0ef8ef7p-426,
     0x1.d3d40ff038f09p-710, 0x1.8f1df7f6594abp-593, 0.0, 0.0, 0x1.8301726eddcd9p-303,
     0x1.74493abf85b42p-487, 0x1.9a0e95bf8e056p-999, 0x1.60b618edb834dp-432,
     0x1.fc63002779cefp-852, 0.0, 0x1.0eae9b9e040ffp-390, 0.0, 0x1.999f3dece9b8dp-379,
     0.0, 0x1.a3037198e50ebp-294, 0x1.666253ed88056p-486, 0x1.89276b5611b65p-262, 0.0,
     0x1.c4fafa5273742p-925, 0.0, 0x1.be6ac4e462bc5p-539, 0.0, 0.0,
     0x1.50c2587c8f48ap-135, 0x1.8b53f5f8abfebp-564, 0.0, 0x1.6a7a98931e153p-892, 0.0,
     0x1.cd8ac35851b2bp-723, 0x1.a148a882177d2p-943, 0x1.7d611e11dfe01p-59, 0.0, 0.0,
     0.0, 0x1.8e71d3169ba6ap-894, 0.0, 0.0, 0.0, 0.0, 0x1.d1f9a0aa31e83p-454, 0.0,
     0x1.dd0238aaefc61p-34, 0x1.2a05b7debce83p-309, 0x1.eb9421d141535p-945, 0.0, 0.0,
     0x1.e323faa4183c3p-411, 0.0, 0x1.4d67c9f636767p-444, 0x1.2578cd5db1681p-122, 0.0,
     0x1.f4067260d87f8p-444, 0.0, 0.0, 0.0, 0x1.b71d8fe97c36p-962,
     0x1.77973bebac193p-811, 0.0, 0x1.f3b41ff4c3becp-226, 0.0, 0x1.57fae63eb68p-339,
     0.0, 0.0, 0x1.6c641a62d108ap-421, 0x1.5f7291136280ap-716, 0x1.aa6985af08a3bp-336,
     0x1.0764c7870c386p-804, 0x1.2c8ed4c2a2c48p-418, 0.0, 0x1.0450b32b6a94cp-969,
     0x1.9466684c12168p-432, 0x1.545d80ec3c85p-912, 0x1.aaff3f9d4b942p-157,
     0x1.6362f076cfcb1p-249, 0x1.d5fa494fc69b7p-614, 0.0, 0x1.fb78fdc08d03p-912, 0.0,
     0x1.0074874c0763p-392, 0x1.b22772b6f4d98p-32, 0.0, 0x1.44d0567ed5faep-565, 0.0,
     0x1.78e6707521ccdp-195, 0x1.22509bac60ce5p-714, 0.0, 0x1.1e14ed70bc689p-639, 0.0,
     0x1.057cec779bb64p-684, 0.0, 0.0, 0.0, 0x1.86e873ccf41c4p-916, 0.0, 0.0, 0.0,
     0.0, 0x1.f67ea6b9ec4cdp-607, 0x1.a290a555d722cp-179, 0x1.0a159bac6c658p-885,
     0x1.e8f2a9ba49e37p-130, 0.0, 0x1.3826e639761e5p-396, 0x1.ca20892f41039p-923, 0.0,
     0.0, 0.0, 0.0, 0x1.17779cc0eb0c6p-903, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dce11675cc497p-108, 0.0, 0x1.c8536392103cep-559, 0.0, 0.0, 0.0,
     0x1.a49b8bbdb9b3dp-923, 0.0, 0.0, 0x1.96a6302aba473p-877, 0.0,
     0x1.b9ba8faa717f1p-311, 0x1.f65122bdd09a5p-451, 0.0, 0.0, 0x1.1f5413de23bb3p-59,
     0.0, 0.0, 0x1.842dab8ed7793p-657, 0x1.691bd1535a1c7p-802, 0.0, 0.0, 0.0,
     0x1.8365dc4e7da95p-877, 0.0, 0.0, 0.0, 0.0, 0x1.578e578358e7cp-210, 0.0, 0.0,
     0.0, 0.0, 0x1.78079daf5613ep-260, 0.0, 0.0, 0.0, 0x1.cdbecc3b70fb7p-822,
     0x1.6a9491d98df01p-623, 0.0, 0x1.dc937973c8a44p-384, 0x1.560c901ba099bp-57, 0.0,
     0.0, 0.0, 0.0, 0x1.e2ac1dffe61c5p-575, 0.0, 0x1.426d2d7a4060cp-669, 0.0, 0.0,
     0.0, 0.0, 0x1.5e81fa1dd6529p-611, 0x1.5e667889a80ep-839, 0x1.3ba877180d442p-185,
     0x1.f63c105fb368p-803, 0x1.030caf34af162p-960, 0.0, 0x1.aace5733f5933p-723,
     0x1.544ea15b7a6fbp-72, 0x1.ee19a27082ed8p-236, 0x1.2b2f41b7f4d69p-588,
     0x1.39bc7e55d3866p-711, 0x1.75f39b1d5f7fap-860, 0.0, 0.0,
     0x1.26cbd0483cc34p-1021, 0.0, 0.0, 0x1.8ec8a50d83137p-74, 0.0, 0.0,
     0x1.80afb2fa8104p-558, 0x1.089a0c9204433p-944, 0x1.314bc05db6ab9p-489, 0.0,
     0x1.9215578217f83p-513, 0x1.ca8509f3b70f1p-422, 0x1.1006cf1320b2dp-414, 0.0, 0.0,
     0x1.d6344f65797p-631, 0.0, 0x1.f1d66dab4c59bp-153, 0.0, 0.0,
     0x1.08ac383a929efp-687, 0.0, 0x1.a546d9c8ca307p-395, 0x1.5bcb0ada859e2p-673, 0.0,
     0.0, 0x1.47efb30af79a4p-282, 0.0, 0x1.0180c5f2a2bf4p-914, 0x1.948e3cbb334afp-898,
     0x1.e980800df3bb5p-613, 0x1.2bbc1bb04dd9bp-587, 0x1.694ddf135722p-22,
     0x1.9804d3f587d13p-616, 0.0, 0.0, 0.0, 0x1.f7ba6d6ed3452p-810, 0.0, 0.0,
     0x1.f7c12dd40c619p-68, 0.0, 0.0, 0.0, 0.0, 0x1.91f6ab2b3a3dap-776,
     0x1.9402e72e25f71p-174, 0.0, 0x1.92b8c0e93d24cp-67, 0.0, 0x1.46ec440b436bcp-52,
     0.0, 0x1.258f15ba2dacfp-781, 0x1.615439e81a32dp-802, 0x1.e7cdd857b366ap-235, 0.0,
     0x1.170d631b21a1ap-505, 0.0, 0x1.690ac8ccb5146p-92, 0x1.450d4cbc7db59p-381, 0.0,
     0x1.59e9dc302a0dcp-485, 0x1.a462e284c3e3cp-1000, 0x1.02cadfc666364p-579, 0.0,
     0.0, 0.0, 0x1.4d086a7ee2a81p-559, 0x1.f25c67ee85e53p-810, 0x1.a20bf0611d33bp-865,
     0x1.d8c358840aa8cp-495, 0.0, 0x1.361a5f82f9e6dp-442, 0.0, 0.0,
     0x1.ae051175a7748p-325, 0x1.48cc5236f1421p-603, 0x1.a648cb3dcb3dcp-529, 0.0,
     0x1.dcbe7b049442ep-83, 0.0, 0.0, 0.0, 0x1.1f46cc86b87c1p-1013, 0.0,
     0x1.6ccc23ff5f485p-647, 0x1.61dc0e07ea9f6p-156, 0.0, 0x1.a9971c6087884p-522,
     0x1.90c1cd9488f74p-787, 0x1.9ed3f9387be4ep-472, 0.0, 0.0, 0.0,
     0x1.e6eb4c88cd24fp-326, 0x1.9efcad7155b41p-371, 0x1.03604268c9ec1p-300,
     0x1.ceb1c6db6b5a9p-858, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c57e5bd6d4c7p-495, 0x1.e621b8d7db373p-808, 0.0, 0x1.61e21a419d2f1p-92, 0.0,
     0x1.2786c83e6d5d4p-951, 0x1.7e876b728102dp-379, 0x1.5ef5ac0dcc6a7p-443,
     0x1.b6ce14c2d0d5dp-972, 0.0, 0.0, 0x1.5f72c70ba53c6p-793, 0.0, 0.0,
     0x1.6a17f53b6bb39p-420, 0x1.4403dca6f66ap-262, 0.0, 0x1.b8723a0e4cd0ap-285, 0.0,
     0.0, 0x1.1a38b80e33081p-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d8b7dbedd1fa9p-823,
     0x1.aabdf0d889bf5p-481, 0x1.372b7f1e459e1p-726, 0x1.23663724ea757p-927,
     0x1.997e67d1cd82fp-332, 0.0, 0.0, 0.0, 0x1.1d68a5cf19715p-457, 0.0, 0.0,
     0x1.64ca3309fa738p-971, 0.0, 0x1.7f38044730fb6p-290, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1fe26aed092d3p-619, 0.0, 0x1.9da3743bb4264p-932,
     0x1.4896bd320873dp-337, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ec6eb2a7c366p-471, 0.0,
     0x1.91195eb0b889cp-380, 0x1.f91459d22b2d5p-162, 0x1.22ffa06cb039dp-118,
     0x1.8faac2e862c06p-356, 0.0, 0x1.4dc466b1d8d15p-163, 0x1.e6438a34b55c6p-378,
     0x1.dd5c368f9df9ap-651, 0.0, 0x1.a06930a2ceeecp-518, 0x1.9735e9635edbcp-628,
     0x1.3d053be64c868p-777, 0x1.63315fffa2ba9p-622, 0x1.d56f65f16f1f5p-798,
     0x1.9f21c366d6e0dp-652, 0x1.134d42a967cap-725, 0x1.3e68e1d196841p-352, 0.0, 0.0,
     0.0, 0x1.eade6bf019526p-77, 0x1.25e7d2c4926fcp-613, 0.0, 0x1.1f1498be50762p-99,
     0.0, 0.0, 0x1.f414e3c572a8p-625, 0.0, 0.0, 0x1.5441d8bdd63ap-841,
     0x1.8e5aee93c5027p-852, 0x1.d1eedabab5ef3p-625, 0x1.d72dac64bfb7ep-304, 0.0, 0.0,
     0x1.d973729a7d077p-306, 0x1.6799397da85b1p-471, 0x1.af0a08e516eaep-120,
     0x1.04ac193146ce6p-614, 0x1.8b96d50af624ap-228, 0x1.a2029d68e9551p-1012, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf408fe550754p-198, 0.0, 0.0,
     0x1.52d63568c805cp-227, 0x1.fe6ed63f619c9p-946, 0x1.edb17de995801p-758, 0.0,
     0x1.4b06b6685a6abp-236, 0x1.e0282fbef8635p-60, 0x1.15f1974faf527p-454, 0.0,
     0x1.d3faeba8b0b4bp-474, 0.0, 0x1.595a1a26a9e0bp-900, 0x1.8362bcfe8da3p-374, 0.0,
     0x1.55ffa74108e04p-582, 0x1.791df3d3cc59cp-867, 0.0, 0.0, 0.0, 0.0,
     0x1.ff40c8d4ce32bp-427, 0.0, 0.0, 0.0, 0x1.c4eba85538475p-769, 0.0,
     0x1.8b25d4fc898dp-102, 0.0, 0.0, 0x1.2384158264b3bp-350, 0.0, 0.0, 0.0,
     0x1.ce5ce2f55cbccp-524, 0x1.72ac4d698657p-495, 0x1.963e2b6688958p-828,
     0x1.c046bf4974b43p-522, 0.0, 0.0, 0.0, 0.0, 0x1.10f4c2e4f07a4p-333, 0.0, 0.0,
     0.0, 0x1.35ffe9cacc86cp-494, 0.0, 0.0, 0x1.aae78a4c40aa3p-106, 0.0, 0.0,
     0x1.ca25fe5a1c5eap-909, 0.0, 0.0, 0.0, 0x1.082acc7edf6bp-851,
     0x1.56ca41652d0ffp-759, 0x1.d77399e698cefp-611, 0x1.1d82acb9597c4p-301,
     0x1.2e11532893244p-397, 0x1.2086b755b2a27p-320, 0x1.3ded4446e5c3cp-381, 0.0, 0.0,
     0x1.906dee2058822p-376, 0.0, 0x1.6260da213a473p-945, 0.0, 0x1.8e842260d6221p-744,
     0.0, 0x1.3d8bd05042defp-323, 0x1.2c11caeef031bp-766, 0x1.11cbd132b8b39p-115,
     0x1.78bed94d8adf5p-509, 0.0, 0.0, 0.0, 0.0, 0x1.cc2281510b411p-325, 0.0, 0.0,
     0x1.41d433aa03642p-453, 0.0, 0x1.8f09dc08b80fdp-258, 0x1.8fdd3eed3c37ap-445, 0.0,
     0x1.5421b23aa6755p-347, 0x1.6b70c644d9c13p-820, 0.0, 0.0, 0.0, 0.0,
     0x1.9291d657a2c3dp-250, 0x1.5d5a06631f66fp-992, 0x1.80397fc73e292p-361,
     0x1.41204cdf051e1p-610, 0.0, 0x1.b761ae59df9b1p-4, 0x1.a83e66fa12c4bp-566, 0.0,
     0.0, 0.0, 0.0, 0x1.b80abea9fe80bp-397, 0.0, 0.0, 0x1.654bfde71b735p-474, 0.0,
     0.0, 0x1.56f982a4d64e5p-16, 0.0, 0x1.92e2180e1c0aep-377, 0.0, 0.0, 0.0, 0.0,
     0x1.0f0b7747c5915p-739, 0.0, 0.0, 0.0, 0x1.504827f2234a4p-60, 0.0,
     0x1.05cf08821ab5dp-575, 0.0, 0.0, 0.0, 0x1.bcbf58b09ac9ep-250, 0.0,
     0x1.47a358ff67644p-633, 0.0, 0x1.49b684b16efacp-91, 0x1.4b4336c50899ap-193, 0.0,
     0.0, 0.0, 0x1.c38fe0978eea3p-732, 0x1.fe9e365ba99c8p-877, 0.0, 0.0,
     0x1.ac760ae2f8455p-492, 0x1.e260403413941p-803, 0.0, 0x1.ea39202c9eecbp-522, 0.0,
     0.0, 0x1.e3e261d022e69p-343, 0x1.d4867f730e82fp-610, 0.0, 0x1.5be87bc06874dp-191,
     0.0, 0x1.e9ad84f3dd2f7p-575, 0x1.48eddba1d2642p-413, 0x1.376bf10a49cebp-186,
     0x1.37b023f65e5ep-41, 0x1.8a72e63dd1182p-816, 0.0, 0.0, 0x1.919a062870791p-121,
     0x1.4ad30b2513784p-554, 0.0, 0.0, 0x1.59e933316830ap-933, 0x1.acc5233716ad1p-666,
     0x1.7baa71aeb58e7p-59, 0.0, 0.0, 0.0, 0x1.5a21eb91498d9p-692, 0.0, 0.0, 0.0,
     0x1.62cf30e415ac1p-80, 0.0, 0.0, 0x1.b5de1c9f80911p-374, 0x1.dcdf3048bca45p-424,
     0.0, 0x1.4c7d8a6ba91f2p-312, 0x1.16910334cee3ap-400, 0x1.55aa7ba404dd1p-60,
     0x1.4994fac2b94e8p-407, 0x1.eac2e09149a1fp-624, 0.0, 0x1.e71f89e794698p-951, 0.0,
     0x1.a524f5c9dfb3ep-168, 0.0, 0x1.7dfa8d71ec66dp-560, 0x1.d90e1d9ede609p-611, 0.0,
     0.0, 0x1.ff3ee354a75b8p-191, 0.0, 0.0, 0.0, 0x1.0a1dc2230f7aep-598, 0.0,
     0x1.3218c23203135p-199, 0.0, 0.0, 0x1.bffbb0bd7b379p-427, 0x1.03886eeba6f75p-951,
     0x1.d772fbbf1bbc9p-587, 0.0, 0x1.82533df8da279p-80, 0x1.6aba3d315a2f2p-121, 0.0,
     0x1.344b0f75b6aafp-852, 0x1.f268f183dc442p-774, 0.0, 0.0, 0.0,
     0x1.30d554dfa4495p-526, 0.0, 0.0, 0.0, 0x1.5f9700e5c1295p-344,
     0x1.4fd6df78ecadap-899, 0.0, 0x1.699d761c5a4a3p-956, 0x1.6640bc228ae33p-651,
     0x1.98c683844c0dep-562, 0x1.d14db3c20770ep-910, 0x1.8cab7808eaefbp-181,
     0x1.5f6d09af51bfep-474, 0.0, 0.0, 0.0, 0x1.7c4fdafda507bp-339, 0.0,
     0x1.aad25b73d1922p-511, 0x1.8a20d8651f03bp-614, 0.0, 0x1.fb57b52824179p-233, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.831ad3fab531dp-510, 0.0, 0.0, 0.0,
     0x1.b7c40df525fc2p-344, 0x1.f1259aba42defp-646, 0x1.c6b0310ac8d3dp-813, 0.0,
     0x1.84c377ad7d6a6p-986, 0x1.b1cb89295c8adp-302, 0x1.effd272d0103ap-734,
     0x1.33cbe86fc7501p-878, 0x1.88477a1a2cb14p-114, 0.0, 0x1.92db1b6a6daf8p-461,
     0x1.d511ebb90161cp-523, 0x1.e19f95ca84a21p-616, 0.0, 0.0, 0.0, 0.0,
     0x1.f2f458a77b964p-600, 0x1.5a2116f2cff5p-318, 0x1.18dd40cf6229fp-913,
     0x1.7fd1584ac240ap-413, 0x1.3cd11dfc8ee2cp-761, 0x1.6b5989f9336f5p-105,
     0x1.caebc96d8a817p-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b6efc6e817fb6p-404, 0x1.644d8412e18f5p-570, 0.0, 0.0, 0x1.13ebe0cbf4315p-360,
     0x1.c246ad398f6b2p-472, 0.0, 0x1.b7caca9b5d601p-737, 0.0, 0.0, 0.0,
     0x1.15963f35e4ccdp-611, 0.0, 0x1.470855076284ep-962, 0.0, 0x1.ddb0c685acea4p-581,
     0.0, 0x1.9dc00a26852d6p-368, 0x1.129e8f40eaf1bp-299, 0x1.865a902498437p-1022,
     0x1.00b6caeee61ccp-777, 0.0, 0.0, 0x1.e4c414486b312p-320, 0.0,
     0x1.b50e92e482597p-349, 0x1.90bb6d7bba95p-907, 0x1.b07b3908847c6p-449,
     0x1.53f0400fee8d5p-442, 0x1.6ce0628f202c3p-20, 0x1.9281b19e9286ep-891,
     0x1.ec876e765f269p-420, 0x1.d2c77bea014c5p-400, 0x1.d90ea9c924906p-556,
     0x1.0214f709a406bp-456, 0x1.34e9b0abe4decp-596, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1fbf4c09576f4p-272, 0.0, 0x1.e265509bb1959p-97, 0.0, 0.0, 0.0, 0.0,
     0x1.a331f164ea092p-577, 0.0, 0x1.a8528cad1bf6cp-44, 0x1.f139ca9fbe337p-462,
     0x1.32d134eb390eep-390, 0.0, 0.0, 0x1.23e5720a56ae4p-175, 0x1.8efee3600d993p-119,
     0.0, 0x1.7f7eca9d243c4p-755, 0x1.40c0342fed547p-218, 0x1.7624419e47936p-212,
     0x1.ab0c692c3f902p-435, 0x1.1571f66c49998p-895, 0.0, 0x1.f520b38e27436p-643, 0.0,
     0.0, 0.0, 0x1.86ee9aae7c8a1p-460, 0x1.fb6e1e469c7ap-505, 0x1.ff60f44963bccp-563,
     0.0, 0x1.c4847ff779a6ep-41, 0x1.744bdaad7e566p-916, 0.0, 0.0, 0.0,
     0x1.2dc3426769c5p-356, 0.0, 0x1.577c941126191p-479, 0x1.8ce8df80be5bap-590,
     0x1.a95af1513412bp-615, 0.0, 0.0, 0.0, 0x1.8bbf14bab3643p-962, 0.0,
     0x1.006017905ab7cp-296, 0.0, 0.0, 0x1.a56487db735f5p-895, 0.0,
     0x1.67da8b9ee36f8p-720, 0.0, 0.0, 0x1.387322d20845dp-459, 0x1.d902bd415a2a1p-213,
     0x1.049cf9f713d82p-684, 0.0, 0x1.cbe09796f962cp-544, 0x1.4f1387e2feeffp-883,
     0x1.bf507dd56f405p-410, 0.0, 0x1.d346d4a3b6a2fp-825, 0x1.58fcf3ea1549dp-831,
     0x1.9881449d27ca7p-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7fe02bbaf893p-821, 0x1.8f2135c11cd67p-377, 0.0, 0.0, 0.0,
     0x1.a02bfc3ae96e7p-91, 0x1.a8a53ab0e364ap-350, 0.0, 0x1.599c9d4c29ef9p-615,
     0x1.4becc963a1a0fp-304, 0x1.d4d786dcb95bep-592, 0x1.1221ed234d64p-16,
     0x1.7f56b7ff02aaap-356, 0.0, 0x1.b71fa0a576a29p-45, 0x1.e29a9a389ec6ep-859,
     0x1.84dce833675c4p-135, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44c0a1f235798p-205,
     0x1.d614df92abdb9p-360, 0x1.2612d845050a7p-299, 0x1.490e96b9996a2p-1007, 0.0,
     0x1.522d98d2e1703p-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46625f2af0f8ep-719, 0x1.d1e3af2eb2d08p-768, 0x1.dcccd24790389p-331, 0.0,
     0x1.03dc17af01bc4p-534, 0x1.377c4687a4c5bp-63, 0x1.433609648c80ep-431, 0.0, 0.0,
     0x1.365bbdd6bd9cbp-745, 0.0, 0.0, 0x1.2e3ab614999ffp-491, 0x1.fda02be866dc2p-693,
     0x1.d8f681af3a1d2p-49, 0x1.68301b3ffc708p-151, 0x1.2c81a7eda9d03p-933,
     0x1.3b0f71c902ffcp-858, 0x1.658816ae824edp-973, 0.0, 0x1.c5c6db018b332p-366, 0.0,
     0x1.e145a0a2dd8cfp-271, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.99849e660637ap-556, 0x1.bed9bed5e44e2p-391, 0x1.b5c10c1d9b493p-53,
     0x1.b3d6a605ccaeap-645, 0x1.9988dbcae618cp-286, 0.0, 0.0, 0.0, 0.0,
     0x1.87ed4388cfe99p-942, 0.0, 0.0, 0x1.ea1d69698e9bp-460, 0.0, 0.0,
     0x1.7c20ad2772e79p-664, 0x1.9a666239d5dadp-658, 0x1.fbd1dd61297c5p-227,
     0x1.8e7c509d939d9p-182, 0.0, 0.0, 0.0, 0x1.f09dfd8f34361p-734,
     0x1.1ce7eba5db077p-823, 0.0, 0.0, 0.0, 0x1.4b07f845b0f61p-387,
     0x1.f489db938feb5p-279, 0x1.224d0998319d8p-933, 0x1.7318bc14e9b8fp-620,
     0x1.29dd03ce7680ep-973, 0.0, 0x1.09db135eb3dp-802, 0.0, 0.0, 0.0,
     0x1.7e20ce94bd199p-396, 0x1.b8d8ec22dc925p-289, 0.0, 0x1.98786b6f43523p-391,
     0x1.bb7468407a95bp-372, 0x1.a946ca12c628ap-571, 0x1.b2ec72205b0efp-324, 0.0, 0.0,
     0.0, 0x1.6202dd5be82b3p-163, 0.0, 0x1.c2a19a798319ep-203, 0x1.ece089e52e5ebp-855,
     0.0, 0x1.a2c11e193bac6p-573, 0x1.33011bde125dp-633, 0.0, 0x1.a74db8594adb5p-356,
     0x1.8cb816da4aaadp-786, 0.0, 0x1.ccdf46c807ca7p-870, 0x1.ceb8178b9d52cp-540,
     0x1.8b18587216b5ep-760, 0x1.ce7de33d95c97p-22, 0.0, 0.0, 0.0,
     0x1.8a24d5d579a35p-64, 0x1.cb6a4c229b4fep-65, 0.0, 0.0, 0x1.1a69e14241b52p-897,
     0x1.1408b9fc9c88ep-466, 0x1.c772b074bfd72p-473, 0.0, 0x1.0e6ee7085ca23p-656, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.163b641e109dp-408, 0.0, 0x1.aa06bd5360535p-753,
     0x1.8328eb982c4ffp-555, 0x1.7253e73035a7ep-619, 0.0, 0x1.a814ba61ad015p-387,
     0x1.f573a1770a5b2p-377, 0.0, 0.0, 0.0, 0x1.7f08e537e3975p-526, 0.0, 0.0, 0.0,
     0x1.65b6c387ba143p-326, 0.0, 0x1.d57fb2a6f6132p-56, 0x1.bccd2c5323db2p-489, 0.0,
     0x1.b03085b8df1b6p-507, 0.0, 0x1.f0ae8e625a2d8p-863, 0.0, 0x1.a372ae01b1ad7p-652
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_modfd2_avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_modfd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_modfd2_avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
