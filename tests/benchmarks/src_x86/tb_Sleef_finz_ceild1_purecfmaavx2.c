/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceild1_purecfma.c --function \
 *     Sleef_finz_ceild1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.b7354e125589fp-766, 0x1.239ba2fc64559p-57, 0.0, 0x1.e7bf9dbb53a28p-133,
     0x1.440e82f222e11p-574, 0x1.6e0d2d02b136ap-83, 0x1.c257267c52034p-494,
     0x1.a9402ebddc952p-893, 0x1.665dadce25892p-775, 0.0, 0.0, 0.0,
     0x1.ae69d39442897p-374, 0x1.d286e1cb03e5ep-876, 0.0, 0x1.2ba347894f4d7p-74, 0.0,
     0x1.0fc692008e8b1p-340, 0.0, 0.0, 0.0, 0x1.2719137c4958bp-668,
     0x1.e98bbb717f184p-945, 0x1.4d466497c0bap-908, 0x1.bb0701bab06c3p-607,
     0x1.eaf9535f33d18p-525, 0.0, 0.0, 0.0, 0x1.50bcd3284d813p-99,
     0x1.34f0e1a217e9dp-79, 0.0, 0x1.250e729fd18bdp-366, 0x1.0fb583d18b5d6p-257, 0.0,
     0.0, 0.0, 0.0, 0x1.c3a09266aab17p-71, 0x1.77a92d219ec6ap-465, 0.0, 0.0,
     0x1.8127aca516466p-37, 0.0, 0x1.a52fe8d32bd4bp-968, 0.0, 0x1.bc0b0a81a697fp-403,
     0x1.8b3fdd0bd0fe7p-228, 0.0, 0x1.858956a67b626p-477, 0.0, 0.0,
     0x1.27a90293bdedfp-720, 0.0, 0x1.13040d02b8b02p-622, 0x1.be7e07cecc374p-84,
     0x1.5a4d4e78c4eb9p-174, 0.0, 0x1.15427c3591e4ep-519, 0x1.899a9f9adca93p-46,
     0x1.657b6881b4953p-465, 0x1.5029e462d1e7dp-640, 0.0, 0.0, 0.0, 0.0,
     0x1.92621e948940ep-314, 0.0, 0x1.8fe202186c343p-321, 0x1.1284b234e3359p-482,
     0x1.1fd4e64b7a786p-402, 0x1.0fdfa77c7490ap-1005, 0.0, 0x1.12122c13cb8b9p-203,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f46a776cde0bp-778, 0x1.cd15af41725b1p-86,
     0x1.24d9299ac2fc9p-397, 0x1.f6b5ce959d005p-728, 0.0, 0.0, 0x1.9da3ac90f0b4p-725,
     0x1.ff49d2481a506p-523, 0.0, 0.0, 0x1.0572f034584cp-297, 0.0, 0.0, 0.0,
     0x1.55c6419ee1f3ap-848, 0x1.d09fad861d6e9p-132, 0.0, 0x1.8aee02c860821p-779, 0.0,
     0x1.1083bdf7c4624p-538, 0x1.ce42a1637f8p-167, 0x1.acc7441b13e7ep-864, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d75ee1830409ep-613, 0.0, 0x1.d30ba1044def3p-699, 0.0,
     0x1.de966ba6f471p-814, 0.0, 0.0, 0.0, 0.0, 0x1.18314d213ead1p-122, 0.0, 0.0, 0.0,
     0x1.45bbda329277ap-964, 0.0, 0.0, 0.0, 0x1.2e4fe43d19209p-21, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.55adfcd942998p-272, 0x1.5a331f615e191p-692, 0x1.dcb419f06f1c4p-828,
     0x1.fd6f4667b716p-746, 0x1.1edfbfdb56e68p-365, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.80e65168f36d3p-965, 0.0, 0x1.f6818a0143a3dp-177, 0x1.a1253f9ce5cdep-332, 0.0,
     0x1.a380d94439e76p-312, 0x1.578d1346b5d3dp-386, 0x1.d20634d78bfcdp-116,
     0x1.4e3105ba4e861p-997, 0x1.68db9d4073832p-779, 0.0, 0x1.2845e06917bbbp-524, 0.0,
     0.0, 0x1.45cdfe7cbbe8cp-7, 0.0, 0.0, 0.0, 0x1.baf70410762c9p-254,
     0x1.ed53172ae5147p-762, 0x1.5b09522c33067p-59, 0x1.28002f737b2e8p-1003,
     0x1.620e8ce32ae39p-764, 0.0, 0.0, 0.0, 0.0, 0x1.1a74c6327e351p-893, 0.0, 0.0,
     0.0, 0x1.699abde3fa507p-447, 0.0, 0.0, 0.0, 0x1.dfe56fb5bd00cp-880,
     0x1.6fe2a794f12cap-100, 0.0, 0x1.d5b108dec5bfap-1009, 0x1.d3f98013e8e71p-744,
     0.0, 0.0, 0x1.2eb6b0ba7ec54p-624, 0.0, 0x1.cb549722d88cfp-449,
     0x1.63f97b28fe4c3p-728, 0.0, 0.0, 0x1.ec481ac3cfc23p-660, 0x1.5197cbe268c3p-165,
     0.0, 0.0, 0.0, 0x1.fc473aad03933p-472, 0.0, 0x1.444e0c982f685p-105,
     0x1.557f9ecfe07c3p-957, 0x1.5f0edf044778ap-897, 0x1.7066803204707p-589,
     0x1.9cbc8d157038bp-271, 0.0, 0x1.33bc8ba5be387p-636, 0x1.17f234f5da2ddp-608,
     0x1.82d08bdd6f21bp-87, 0x1.99057267d947ep-684, 0.0, 0.0, 0x1.968708dd11585p-739,
     0x1.2ba9afbb87fb9p-848, 0x1.7415e09820edap-292, 0.0, 0x1.e261bd7fe66ep-408, 0.0,
     0x1.f72a694094e46p-746, 0.0, 0x1.2c7f6edaa00f1p-830, 0x1.431f4301271bcp-161, 0.0,
     0x1.cac03ba7e4359p-671, 0.0, 0.0, 0x1.c2bab9211b81bp-410, 0x1.bbc6468ff0c42p-514,
     0.0, 0.0, 0.0, 0.0, 0x1.0fb8707a3518fp-929, 0.0, 0.0, 0x1.06df86c60faa9p-971,
     0x1.bb7dd5b2437f3p-320, 0x1.1d9aa0ee799a1p-88, 0.0, 0x1.25f709a9b1f26p-399, 0.0,
     0x1.4fb12e4df06bdp-185, 0.0, 0x1.efbda07f1c67bp-203, 0.0, 0.0,
     0x1.394a83f6fba53p-871, 0x1.4fdcc8f656168p-857, 0.0, 0.0, 0x1.9ed80581d2dd2p-138,
     0x1.e8477a1e07098p-1017, 0x1.a32178dd6edc7p-312, 0x1.b7515ca81445fp-102, 0.0,
     0.0, 0.0, 0x1.cc80cfcee697ap-192, 0.0, 0x1.801cadc6b6a6ep-817, 0.0,
     0x1.171f80ee99d86p-660, 0x1.c9fea6cc63267p-871, 0.0, 0x1.1c7d31b3c29cp-440,
     0x1.ce5a94e1a02bp-743, 0x1.9cc6c40a02c8fp-177, 0.0, 0x1.f218d94efd7a7p-213, 0.0,
     0x1.ec6f4d4c855fcp-15, 0x1.d63c9ddf6f01cp-159, 0.0, 0x1.6eedb2d6483d5p-31,
     0x1.da846973f8a44p-655, 0x1.9f9c10a49de9ep-960, 0.0, 0.0, 0x1.b56f1655ee8bbp-204,
     0x1.c55683da37a41p-649, 0.0, 0x1.407c360b27d14p-36, 0.0, 0.0, 0.0,
     0x1.00f90eb08a04p-297, 0.0, 0.0, 0x1.2e66cff097f61p-337, 0.0,
     0x1.2c4278c6f7c01p-380, 0x1.75612d9da7b6dp-217, 0.0, 0.0, 0.0,
     0x1.4b3df2dee22acp-951, 0x1.fddd8def22281p-23, 0x1.514c84c1f32b3p-910, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cc9675b6bbaa6p-165, 0.0, 0.0, 0.0, 0x1.9ea9ba39f402p-648,
     0x1.139f303c10534p-562, 0.0, 0.0, 0.0, 0.0, 0x1.3b14dae8b4521p-791,
     0x1.4f073c5df5e1bp-385, 0.0, 0.0, 0.0, 0x1.b5f8e287f114bp-130,
     0x1.d788f792327eep-831, 0.0, 0.0, 0x1.201df70674615p-238, 0x1.6af93031c7f0ep-10,
     0x1.4074c73e8cd06p-1021, 0.0, 0x1.eb418a3c0bc55p-218, 0.0, 0.0,
     0x1.bc221a20db4e7p-679, 0.0, 0.0, 0x1.adbefae902fccp-241, 0.0,
     0x1.84ec9c08b2d95p-687, 0x1.cd69b6e5c44b6p-383, 0.0, 0.0, 0.0,
     0x1.97e60d5dad8abp-799, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d75a70b7b3f63p-801,
     0x1.22d93b2da52dep-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7494bbacbec6p-17, 0.0, 0.0,
     0.0, 0x1.5604945792c74p-787, 0.0, 0.0, 0x1.c377a314d26d9p-304, 0.0,
     0x1.1b7e11954f1e2p-556, 0.0, 0.0, 0.0, 0x1.d910cdcb0f742p-618,
     0x1.3110f7c9b7f27p-72, 0.0, 0.0, 0x1.08fd3e3aac69fp-498, 0.0,
     0x1.929d7b3974ed7p-313, 0x1.1c5ea1dd27eafp-546, 0.0, 0x1.4d3720dc39fc4p-608,
     0x1.1fa3609b9e108p-300, 0.0, 0.0, 0.0, 0.0, 0x1.10920fd9ed9e7p-914, 0.0,
     0x1.2aea362608efp-43, 0x1.db4ed71d962f1p-111, 0.0, 0x1.65a433f009fb6p-33, 0.0,
     0x1.08ae7de9c2db1p-973, 0x1.dbcc6f295136dp-627, 0.0, 0x1.d0c4e0aacb54dp-523, 0.0,
     0x1.47f18c26beb7bp-1006, 0.0, 0.0, 0.0, 0x1.2d16e44bf1bb7p-492,
     0x1.29f87fea50c72p-924, 0.0, 0x1.73f7a23772b99p-215, 0x1.9845bc5c7ad58p-36,
     0x1.860f8288c0a08p-230, 0.0, 0x1.d615f1597bb53p-359, 0x1.b0eea3d86a257p-486, 0.0,
     0.0, 0x1.530d2a74e4ed6p-204, 0x1.46c77256a5ccbp-950, 0x1.1fdb2112d52f3p-732, 0.0,
     0x1.3e34918f52692p-255, 0.0, 0x1.32415405b3345p-491, 0x1.d729bbb1f3291p-82, 0.0,
     0x1.2fa1e566be59p-336, 0.0, 0.0, 0x1.ea2cd82ef7a8cp-669, 0.0,
     0x1.26a47e85b1011p-30, 0x1.74d5c466599efp-698, 0.0, 0x1.cfdfe829fea67p-948,
     0x1.f508a8779b33cp-655, 0x1.ba1316f0ecf8dp-996, 0.0, 0x1.48fa70710d3eep-168,
     0x1.0b4f0925f3a67p-423, 0.0, 0.0, 0x1.6c1ad97a7cb52p-307, 0x1.aee3ad2df304ep-142,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.355eebe03926p-71, 0.0, 0x1.94e8bc7f46e6fp-204, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.04212779ddefbp-245, 0.0, 0x1.c3a2d8310e143p-137,
     0x1.45027b4fd5ab9p-711, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f74f6739cf48p-472,
     0x1.5e630b347d5cap-968, 0x1.ef22c59fe693fp-35, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0932b2c4bc44p-101, 0x1.518a003a41b45p-955, 0x1.f28edb4dc7dcdp-809,
     0x1.cdec17707ed6bp-254, 0.0, 0.0, 0.0, 0x1.9281867c92c57p-587, 0.0,
     0x1.197b4868f9da1p-840, 0.0, 0x1.38baefb0cdeaap-168, 0.0, 0x1.c3550b2773bcbp-380,
     0.0, 0.0, 0.0, 0.0, 0x1.3ff9f8efe2412p-238, 0x1.edbd193c38381p-923,
     0x1.8b296497c4e7p-369, 0.0, 0x1.27306d65ee1e5p-812, 0.0, 0x1.f0dde7c6c7fa8p-1022,
     0x1.be2d6011ef0cap-23, 0x1.5270a024f9c36p-863, 0.0, 0x1.719cf7c4c9783p-987,
     0x1.5d93d3a2db025p-625, 0.0, 0.0, 0x1.23f4249a4c339p-559, 0.0, 0.0, 0.0,
     0x1.f85266e43deb8p-436, 0x1.1b3fa1d793c9ep-611, 0.0, 0x1.20db19196e52ep-88,
     0x1.ade03c0fcfb49p-148, 0x1.b0c8b0bdf1991p-23, 0.0, 0x1.de94f53ef6948p-632, 0.0,
     0.0, 0x1.4917209c56e08p-104, 0x1.e28c593cbd351p-384, 0x1.b4b7c914839bfp-448,
     0x1.c5cf03813e69p-714, 0.0, 0.0, 0x1.c5e932e282347p-211, 0x1.3cacc0fde48c5p-339,
     0x1.f230788e4f7d6p-961, 0.0, 0.0, 0x1.b2a67dea5344bp-753, 0x1.8e5d67a964ed1p-211,
     0.0, 0.0, 0x1.d490d40e33f51p-6, 0x1.f339277802a9cp-972, 0x1.6b11735819efdp-632,
     0.0, 0x1.076c6668cee75p-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b70b00a7e3b04p-937, 0.0, 0.0, 0.0, 0.0, 0x1.c93781010dd4cp-420,
     0x1.7d6626949134cp-198, 0.0, 0x1.ca46219f97e5cp-494, 0.0, 0.0, 0.0,
     0x1.a96afe4a1164ep-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0344513afb12p-366, 0x1.df21a5624c267p-800, 0x1.508f7ccf48826p-455, 0.0, 0.0,
     0.0, 0.0, 0x1.fd74f422732cdp-359, 0.0, 0.0, 0.0, 0x1.4cb4df38f89aep-420,
     0x1.a40ecf7493b13p-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.914db5bd11629p-20,
     0x1.d07a351781ed9p-891, 0.0, 0x1.2242312e41c22p-317, 0x1.29fc164da37p-913, 0.0,
     0.0, 0x1.07372c2791f4cp-795, 0x1.57b4413adceadp-823, 0.0, 0x1.2c6b94d5c3567p-920,
     0x1.a799b0ac0f65ap-765, 0.0, 0.0, 0x1.cf7a9ef43a80cp-1014,
     0x1.9286206dc372ap-1020, 0x1.d89deded2a152p-231, 0.0, 0x1.13cff9fc1e6c9p-867,
     0x1.3b2cc35df8df1p-874, 0x1.0b17473de23c3p-109, 0x1.a6c5d8bd1a0c6p-453,
     0x1.41d58b27e61dep-242, 0.0, 0.0, 0x1.54ecb615678ap-249, 0.0,
     0x1.120793cc2e4f2p-640, 0x1.c09193fe81efep-867, 0x1.82318df956c3ap-875,
     0x1.bb4568937d19dp-890, 0x1.6b6233ad4c264p-906, 0x1.ae61d94fbb0bp-1017, 0.0,
     0x1.1d608d9b31018p-853, 0x1.8922f16793382p-707, 0x1.1e8b253b60a66p-360, 0.0,
     0x1.c8017419717c8p-99, 0x1.124032fd44b2bp-611, 0x1.4ee8e37351d47p-750, 0.0, 0.0,
     0x1.54e0677701fb4p-508, 0x1.3f6cbbe587afap-280, 0.0, 0x1.ffb63587e27c2p-223,
     0x1.1ee673ff4ddc2p-784, 0x1.7dd6a54cdcfbap-456, 0x1.207955ae83edbp-820, 0.0,
     0x1.4cd8803a7bc22p-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f20e6b5dd0382p-530, 0x1.83f97e20c0e91p-255, 0.0, 0x1.4dcfa7cc21112p-256,
     0x1.12bcab469d14cp-286, 0.0, 0.0, 0.0, 0x1.6db0d11104f22p-329,
     0x1.4501de25ba571p-686, 0.0, 0x1.222b5e6278049p-665, 0.0, 0.0,
     0x1.7738fb309d1ddp-917, 0x1.0d67b469f8cdep-472, 0.0, 0.0, 0x1.1ebdc3edef2abp-834,
     0x1.71cc5508a9e6ep-335, 0.0, 0.0, 0x1.02fb2d32d512fp-719, 0.0,
     0x1.873b165a00323p-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab2d126db57d7p-791,
     0x1.5e792a4c2e0aep-197, 0.0, 0x1.a8f82ff42e71dp-813, 0x1.3b5b1abeb3d14p-904, 0.0,
     0.0, 0x1.9c896be07eb57p-55, 0x1.1126dffc2c374p-219, 0x1.f4f61035772afp-885,
     0x1.fa6bd7779fef3p-624, 0.0, 0x1.29d9dc3857123p-657, 0.0, 0x1.c8dcb0d8969c7p-680,
     0.0, 0.0, 0x1.bea6da09a5974p-38, 0x1.93b4a1ca7b6fap-118, 0x1.c2cb2075ee74p-561,
     0x1.27b1ee5b63f97p-864, 0.0, 0x1.1a8759803d8e5p-333, 0.0, 0.0,
     0x1.1dfcad4c07bf9p-463, 0x1.6e59a740d4701p-811, 0x1.71f93320c6256p-316, 0.0,
     0x1.86dee1c05a9f9p-636, 0x1.ecd14491abb8cp-963, 0.0, 0.0, 0.0, 0.0,
     0x1.6cdcce42798c3p-56, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63042ffc51ce5p-647,
     0x1.cf7b261afbf42p-695, 0.0, 0.0, 0.0, 0x1.f6dd2c55a4bc5p-795, 0.0, 0.0,
     0x1.1879ef055deafp-808, 0x1.66dbf30b7fbcp-820, 0.0, 0.0, 0x1.3f972d9bd6761p-477,
     0x1.e78dd52ca06d6p-748, 0x1.14d952f019523p-71, 0.0, 0.0, 0.0,
     0x1.03de805b25601p-969, 0x1.4a610b14148cep-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.287cebff36caep-168, 0.0, 0x1.9427d043bc21p-790,
     0x1.2fb44fad1e297p-113, 0.0, 0x1.d18feef4508e1p-86, 0.0, 0x1.dac45cd36d3a1p-408,
     0.0, 0x1.28a1741375bddp-671, 0.0, 0x1.6e6e2b746f36cp-710, 0x1.8d3ec7aaa205dp-344,
     0x1.aa8e6af94d7b1p-843, 0x1.07626caf08e94p-687, 0.0, 0.0, 0.0, 0.0,
     0x1.ef798545cf1afp-975, 0x1.f7c9801b24d71p-42, 0x1.1a414d944d3a8p-623, 0.0, 0.0,
     0.0, 0.0, 0x1.702cead05ba44p-159, 0.0, 0.0, 0.0, 0x1.80c30be6f046p-1, 0.0,
     0x1.c63c07b37a092p-375, 0.0, 0x1.6d03ca7c36b08p-907, 0x1.bdd23334aaebcp-468, 0.0,
     0.0, 0x1.24145d326c3eap-503, 0.0, 0x1.2c574eb0f31acp-630, 0.0, 0.0,
     0x1.d7134df0ccfb9p-48, 0.0, 0.0, 0.0, 0.0, 0x1.e08340072fcabp-703, 0.0, 0.0,
     0x1.7127b1bf6e509p-7, 0.0, 0.0, 0.0, 0x1.137722f822adbp-175,
     0x1.e105844fae26ep-179, 0x1.2e9c9f7e17c8bp-592, 0.0, 0x1.4a082b25c9f5p-607,
     0x1.90967d1450cbep-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dda9761198be1p-376,
     0x1.ac02358d4f1c4p-699, 0.0, 0x1.10470a6399946p-597, 0x1.1037664ec64fbp-455,
     0x1.532914fe0da7bp-144, 0.0, 0x1.974373df77ee2p-324, 0.0, 0x1.96912000806c4p-468,
     0x1.b67573c6fefeep-426, 0x1.e02196f097a86p-21, 0x1.128884d94c029p-401, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ad81b056dc2eep-850, 0.0, 0x1.14fdc0d3b90bp-68, 0.0, 0.0,
     0.0, 0x1.a02232f096e88p-496, 0.0, 0x1.15b0646274ebcp-399, 0.0, 0.0,
     0x1.137ac81a1fa75p-791, 0x1.ad1400b063babp-274, 0.0, 0.0, 0x1.7ca4f28152d05p-287,
     0x1.b4cd365834597p-131, 0.0, 0x1.d6ee10061eb8fp-60, 0.0, 0x1.0ec75ee8000bp-747,
     0.0, 0.0, 0.0, 0x1.e05a89df34644p-288, 0x1.80571c428582ap-353, 0.0,
     0x1.57ae3d8cd943dp-139, 0x1.0bf780343537ap-373, 0.0, 0x1.bc73ebe53e6e1p-38,
     0x1.e707ea088c68dp-862, 0x1.0e02898d75d59p-62, 0.0, 0x1.63aa63cae8482p-39,
     0x1.a063632468b2cp-943, 0x1.b748d395c4bf3p-517, 0.0, 0x1.769b88f386a8fp-486, 0.0,
     0.0, 0x1.3f7070efb66b8p-243, 0x1.74422633b220cp-883, 0x1.bc6bcbc5fcabdp-826,
     0x1.fd673648a19e8p-151, 0.0, 0x1.ba9d281d371ecp-517, 0.0, 0x1.7d8c29e9181d1p-250,
     0x1.93ad5dc67359bp-55, 0x1.b34ceeb62ac81p-145, 0x1.5a715df0fce19p-665,
     0x1.dd1c41e40ccfcp-740, 0x1.add77f664c8cbp-759, 0x1.fd48d6c990af1p-590, 0.0,
     0x1.459bf2d559413p-136, 0.0, 0.0, 0x1.90a1a2ccb3082p-138, 0x1.5506ab6f2d975p-246,
     0x1.87715bced2373p-151, 0x1.92b79fed785dbp-271, 0.0, 0.0, 0x1.2b4c75de7f53ap-375,
     0x1.b7f352cb2d24fp-468, 0.0, 0x1.3544ecb57968dp-1013, 0.0, 0.0, 0.0,
     0x1.391aa4a4e0d9cp-87, 0x1.0c0a38585ca14p-983, 0.0, 0.0, 0.0,
     0x1.bd58e7e9a298cp-219, 0.0, 0.0, 0x1.fe2fcdaed3f2ap-220, 0x1.76028cb7113b7p-576,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc30760961441p-826, 0.0, 0.0,
     0x1.231484cf2a0abp-324, 0.0, 0.0, 0.0, 0.0, 0x1.e44891b9735e7p-943, 0.0,
     0x1.c2743a948bc5ep-909, 0x1.e76217dc867fp-510, 0x1.4d56ed8d734afp-60, 0.0,
     0x1.6bfabe8db5eccp-810, 0.0, 0x1.8bbabbffa55e5p-473, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f4ae23466b881p-83, 0x1.b6bff75f7bac1p-426, 0x1.2b2c9b3a506c7p-214,
     0x1.e94494c462174p-265, 0x1.eb8d96291b105p-676, 0.0, 0x1.70d2f25672db1p-622, 0.0,
     0.0, 0x1.a3540644b71bbp-620, 0.0, 0x1.6742080d903f3p-690, 0.0,
     0x1.01d76b7421e68p-816, 0x1.02b6947c049a6p-848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f879ec1fe4a1p-145, 0x1.8923d476a2aa7p-543, 0x1.fc95bae8fd0eep-575,
     0x1.d303ae2df6a3ep-842, 0x1.cadf41394f98dp-81, 0x1.786b04f9c6654p-833, 0.0,
     0x1.a73e4ca0047e1p-986, 0x1.013892d00d7fdp-621, 0x1.3150e04f102e4p-603, 0.0, 0.0,
     0.0, 0x1.0d1da037a61acp-864, 0x1.edc1943a32529p-824, 0x1.2869b0227fd31p-541, 0.0,
     0.0, 0x1.8eea79a8a51abp-391, 0.0, 0.0, 0.0, 0.0, 0x1.7443e2e29bf6cp-78, 0.0, 0.0,
     0.0, 0.0, 0x1.b0d6b08c6a933p-806, 0.0, 0x1.e0cb9e030140fp-728, 0.0,
     0x1.61493d9bd8cf8p-243, 0.0, 0x1.80431777591cep-305, 0x1.7521f1471b7fep-751,
     0x1.e70ebca456149p-56, 0x1.754740af4516fp-388, 0.0, 0.0, 0x1.b713e6d65ec44p-876,
     0x1.53eab319e4393p-600, 0x1.9326f7948928dp-449, 0x1.8f6dba3868699p-485, 0.0, 0.0,
     0.0, 0.0, 0x1.075d1b6d4f63ep-851, 0.0, 0.0
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
            tmp1 = Sleef_finz_ceild1_purecfma(tmp0);
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
    printf("Sleef_finz_ceild1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ceild1_purecfma bench acc %la\n", global_bench_acc);
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
