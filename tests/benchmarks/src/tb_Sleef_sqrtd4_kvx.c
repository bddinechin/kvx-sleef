/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd4_kvx.c --function Sleef_sqrtd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.f2656b2f46bdbp-290, 0.0, 0.0, 0.0, 0x1.40fb33cae5a1ep-531,
     0x1.2cedc918ca4abp-369, 0x1.de7184460e73cp-689, 0.0, 0.0, 0.0,
     0x1.5964c852b6ae6p-977, 0.0, 0.0, 0.0, 0x1.8d1b832e031b8p-832,
     0x1.0a791922910f9p-244, 0.0, 0.0, 0.0, 0x1.e1cfae089fe89p-813, 0.0,
     0x1.fecd1a4795fafp-208, 0x1.b5ec7b7f1d15fp-687, 0x1.54a04a92dd62ap-198, 0.0,
     0x1.83932fd694ba5p-59, 0x1.b79e1c06b1366p-349, 0.0, 0.0, 0x1.a1f1d71364235p-505,
     0.0, 0.0, 0x1.7baa1859baee2p-66, 0.0, 0x1.47de0513f14aap-22,
     0x1.6ce436d377472p-166, 0.0, 0.0, 0.0, 0x1.6076e25b43d41p-925,
     0x1.fb4fd12bed7fp-303, 0.0, 0x1.c6aa9af9cdf25p-132, 0x1.d0d28420bac57p-907,
     0x1.593383812a90ap-799, 0.0, 0x1.20073491c7613p-149, 0x1.570090cf14086p-414, 0.0,
     0.0, 0x1.1e0dd796f7e4fp-833, 0.0, 0.0, 0x1.8a6c5b60d4c78p-223, 0.0, 0.0, 0.0,
     0.0, 0x1.88d0fadfd5017p-820, 0x1.7fd2fc4a36a61p-1014, 0.0, 0.0, 0.0,
     0x1.4aaf80384ee14p-963, 0x1.5068eaa1c92bap-273, 0x1.7736487f6040cp-879, 0.0,
     0x1.503b31071a9fdp-418, 0.0, 0x1.88f6340898309p-957, 0.0, 0x1.b8315dbe18f75p-963,
     0.0, 0x1.85c6495d7f2e1p-927, 0x1.956a29275b5bfp-242, 0x1.6f78a1dbbd4d5p-61, 0.0,
     0x1.ed2d9faee2eb9p-854, 0.0, 0.0, 0x1.03858c7a5b72ap-697, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.84fe878310fa3p-870, 0x1.086e9d7e240d9p-545, 0x1.6c462f3b9cbbap-12,
     0x1.4a55f92880d2bp-563, 0.0, 0x1.2261cb6d644cep-932, 0.0, 0.0, 0.0, 0.0,
     0x1.f51d28cb960cbp-328, 0x1.d4425357f4f03p-964, 0.0, 0.0, 0x1.0430c70f3137ap-463,
     0.0, 0x1.43a813c8be589p-321, 0.0, 0.0, 0x1.572de9f546363p-900, 0.0,
     0x1.fdf91c53b91dfp-229, 0x1.a132dec070123p-642, 0x1.04f896075045dp-229, 0.0, 0.0,
     0x1.ffb8479384aabp-996, 0x1.a86d3c5caf641p-124, 0.0, 0x1.96dcce71cca3ap-241, 0.0,
     0x1.d830c975168c6p-560, 0.0, 0x1.c10da9752add5p-933, 0x1.ebc0a043074ffp-832,
     0x1.26b31db0b8b31p-42, 0.0, 0x1.47a4859e2e0a2p-654, 0.0, 0x1.e2ee1af01df67p-783,
     0.0, 0x1.fa92a19736eb6p-500, 0x1.630fe66246ac9p-435, 0x1.d62bc6c9d12b3p-980, 0.0,
     0x1.1716cefddb3c7p-43, 0.0, 0.0, 0x1.17cbdf47f35ccp-895, 0x1.2adba9dab7fbcp-1003,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.526ded9498c7p-941, 0.0,
     0x1.8d13b156f6f7ep-762, 0x1.9082eebb1f1bep-211, 0x1.30bdc0d81cb82p-913, 0.0, 0.0,
     0.0, 0x1.08f06e7d935a2p-178, 0x1.9ed549b020af7p-760, 0.0, 0.0,
     0x1.a8c4f148cc0bdp-819, 0x1.aa3235d0082edp-880, 0.0, 0x1.b63c28b9864c3p-585, 0.0,
     0x1.96607766418acp-681, 0x1.aef14a1da4915p-777, 0x1.70b813ace501p-154,
     0x1.601f610c185d2p-639, 0.0, 0.0, 0x1.d52bc3699dc55p-194, 0.0, 0.0,
     0x1.5773c824b6fb1p-41, 0x1.2692513a364bcp-263, 0x1.aa678b37da4bep-983, 0.0, 0.0,
     0x1.eba9d25fdc96ap-149, 0x1.a49b35b1719b6p-116, 0x1.0a514237cffbap-132, 0.0, 0.0,
     0.0, 0.0, 0x1.85471c72c8c18p-14, 0.0, 0x1.a7efcc32f0b6ap-224, 0.0, 0.0, 0.0,
     0x1.269d66bcf625dp-174, 0.0, 0.0, 0x1.82c75c30227e9p-306, 0.0,
     0x1.4996b536ff845p-792, 0.0, 0.0, 0x1.1dd8eddfc0a17p-845, 0.0, 0.0,
     0x1.7d89a0585eba1p-638, 0x1.622f881692cdbp-946, 0.0, 0.0, 0x1.4ad93612e8fe8p-365,
     0.0, 0.0, 0.0, 0x1.5aa839bf9bba7p-805, 0x1.c10831721d2bdp-818, 0.0,
     0x1.1874bbadb406ep-109, 0x1.62687f91ca1fap-302, 0.0, 0.0, 0x1.fdd849e3c1649p-608,
     0.0, 0x1.7b42864f770bfp-621, 0.0, 0x1.6584fb60b122cp-184, 0.0, 0.0, 0.0,
     0x1.f665cb8c74d69p-272, 0.0, 0x1.a1c91eaf8abfdp-76, 0x1.93c845e36e179p-624, 0.0,
     0.0, 0x1.9466a96a51674p-549, 0.0, 0x1.0b8037e406d2p-652, 0.0,
     0x1.f84dc248335e6p-515, 0.0, 0.0, 0x1.415cc7d83d8b9p-666, 0.0,
     0x1.3bd76cff7eafep-316, 0x1.1385a3bc5265dp-314, 0.0, 0.0, 0x1.90bb6374910c8p-719,
     0.0, 0x1.65d1ec074ffd1p-27, 0x1.b12fdfbc24709p-480, 0.0, 0.0, 0.0,
     0x1.dbbcaea197123p-646, 0x1.4e25092211ca8p-661, 0x1.dc1e9eae5dee2p-657,
     0x1.3e7e6be836c25p-599, 0x1.97e3a0ccc211dp-881, 0.0, 0.0, 0x1.4b5766fb5ac5ap-35,
     0x1.562cd144896ccp-963, 0x1.5c2fc45aab4dfp-451, 0.0, 0.0, 0x1.28afa023ebdebp-405,
     0x1.919fd4217a714p-75, 0x1.c165f85527c7cp-310, 0.0, 0.0, 0.0,
     0x1.8de59776b2052p-354, 0.0, 0x1.8b099ccaea1bep-917, 0.0, 0x1.4a77604b094c6p-875,
     0.0, 0x1.3c59a8160e673p-323, 0.0, 0x1.5977d6bd31105p-358, 0.0,
     0x1.7599ab7968f7cp-683, 0x1.8eab528edac7dp-449, 0.0, 0x1.e4779f4a947cap-504, 0.0,
     0.0, 0x1.26b7ef68a007bp-827, 0x1.49e7fb55c8b3ep-129, 0.0, 0x1.d6b64c3a4cfc8p-942,
     0x1.566bb3efefaf4p-590, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52587c5f66267p-861,
     0x1.b87374e0deab3p-786, 0x1.c5a5b1df8422ep-162, 0x1.62c64249a93eap-791, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3662414c55ccap-413, 0x1.6dab71d02c8a3p-785,
     0x1.b1f4259284536p-516, 0.0, 0x1.6f7d2d9172967p-881, 0.0, 0x1.bc906531af798p-609,
     0.0, 0.0, 0x1.8771f68c0b92bp-152, 0x1.c194a272eab8ep-747, 0x1.10ea287c9ee7p-82,
     0x1.344e0aa2914a4p-122, 0.0, 0.0, 0.0, 0.0, 0x1.b5cf17334b45dp-999,
     0x1.72be1d089613fp-525, 0.0, 0x1.a59d150291cb8p-859, 0.0, 0.0, 0.0,
     0x1.319666ed0ad95p-412, 0x1.6ee1d300867f9p-33, 0x1.bc1d1ece4b73ap-417, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65af5d0b575f7p-246, 0.0, 0x1.2423d2550a3eep-877,
     0.0, 0x1.e69e759cd0309p-124, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9deb61bf740dbp-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5302225b6a9f5p-768, 0.0,
     0x1.3bc42c054721dp-542, 0.0, 0.0, 0x1.2db6ab43c8734p-448, 0x1.42ad1e9b46021p-747,
     0x1.2bc7052a181d3p-661, 0x1.2cfe5c030908ep-89, 0x1.0304bc6964f53p-847,
     0x1.f668bf9bd8b2cp-685, 0.0, 0.0, 0.0, 0.0, 0x1.016ed1b01dff1p-183,
     0x1.c765f9168183bp-506, 0.0, 0.0, 0x1.60a516cf99ad7p-830, 0.0,
     0x1.2ca0adc756c4ep-140, 0x1.5e4ff380b7898p-375, 0x1.c4d4a025969dap-200, 0.0,
     0x1.90e313fc3f53cp-203, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99f3436711fa1p-925,
     0x1.6714caa93067p-970, 0.0, 0x1.d6b766324e58dp-145, 0x1.0105a8b28d89p-777,
     0x1.af016fc2d4059p-308, 0x1.0724855d18772p-912, 0.0, 0.0, 0.0, 0.0,
     0x1.319187357b88fp-451, 0x1.50cc90416032ap-81, 0.0, 0x1.fc240b73ecd98p-333, 0.0,
     0x1.ccae454c067fep-1011, 0x1.08b6d31523528p-100, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9f5531d4a4a1ap-70, 0.0, 0x1.2af4797cbcdebp-305, 0x1.2151792fab5e7p-541,
     0x1.b3aec62c4fe82p-922, 0x1.3af991eb88f56p-553, 0.0, 0x1.e439b67226df3p-857,
     0x1.9f01ff713a08fp-781, 0x1.b02d0f36cc44p-977, 0x1.bcb4b9eab0fa8p-209,
     0x1.fbcd2e8f3c8ap-203, 0x1.eb24c96aea151p-642, 0.0, 0x1.7f48e07566825p-798,
     0x1.1624ba1a16885p-275, 0x1.54f8a33b2794p-181, 0.0, 0x1.fe880dce9853p-921,
     0x1.e6ba9b5e17835p-358, 0x1.b12f434e30805p-370, 0x1.4c8815058245dp-625,
     0x1.e28bb94dd6167p-421, 0.0, 0x1.2bb09d5cf46ebp-161, 0x1.9e68630e0adabp-561, 0.0,
     0.0, 0.0, 0x1.186c2e28fc122p-189, 0.0, 0x1.7c8c9872624ebp-829,
     0x1.1d7a2ebcd21d6p-105, 0.0, 0.0, 0x1.7642f6f0f065cp-581, 0.0, 0.0, 0.0, 0.0,
     0x1.9f4755d6e9589p-247, 0.0, 0x1.5c8f8f0772782p-195, 0.0, 0.0,
     0x1.fdb24ee4537c6p-1022, 0.0, 0.0, 0x1.b4cb65d7a0982p-297,
     0x1.816a4304eec86p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6e2b9e3494031p-522, 0x1.eec4ab7763db1p-122, 0x1.855b2e18c5a0dp-869,
     0x1.3f953797e71a2p-112, 0.0, 0.0, 0x1.903791099ef0bp-496, 0.0,
     0x1.cdc4bc3c5f8b2p-139, 0.0, 0.0, 0.0, 0x1.27e29f370130cp-148,
     0x1.f09ccca8e2ec9p-165, 0x1.e1cef4c8b2ff3p-343, 0.0, 0x1.b126bcdaa58adp-233,
     0x1.1fd0adc99502fp-638, 0.0, 0x1.bd3a9d2bcab6cp-820, 0x1.b1db9a68377f6p-483,
     0x1.7e8b929ed0ff7p-98, 0.0, 0x1.364a90ae472fp-81, 0.0, 0x1.0c1993251411p-231,
     0x1.8a16f83c60b14p-809, 0x1.2d9b8cb1b7192p-964, 0x1.de3614302968bp-430, 0.0,
     0x1.e2ee3b71a8de8p-461, 0.0, 0x1.080a78025bd22p-14, 0.0, 0.0, 0.0,
     0x1.21463167e97bp-846, 0.0, 0x1.b34f26738df1fp-347, 0x1.d88efbf75cf24p-718,
     0x1.8d5d63720943ep-918, 0x1.3a5e1102c3d8ep-427, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.395fb656a0047p-929, 0.0, 0x1.e0515334d8ac6p-543, 0x1.1a5e8a30710bdp-610,
     0x1.226a096d2f801p-754, 0x1.0b1b2b0fe93bp-498, 0.0, 0x1.16a60f4bca63ap-736, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.da7a146841167p-305, 0.0, 0x1.26e266b81a99dp-281, 0.0,
     0.0, 0x1.5b431fcb2cc06p-176, 0.0, 0x1.fa1b7697153f9p-44, 0.0, 0.0,
     0x1.9cae91781d7c5p-636, 0.0, 0.0, 0x1.fe66abd260d9cp-1008,
     0x1.db0e4f01aaecap-350, 0x1.e911c25b666dap-40, 0.0, 0.0, 0.0, 0.0,
     0x1.5327d29caddd3p-797, 0.0, 0x1.f4f43878a94edp-632, 0x1.8dae5c44a4809p-333,
     0x1.da5da4aa9682fp-237, 0x1.b6cbdcac242a2p-966, 0x1.2fd1f6df60002p-959, 0.0, 0.0,
     0x1.be2d5debf23aap-333, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca104675750b5p-399, 0.0, 0x1.e28f65e6b794cp-189, 0.0, 0x1.912163354b79bp-255,
     0x1.a62f1238274dep-430, 0.0, 0x1.e27491cc771a8p-694, 0.0, 0.0,
     0x1.cadce147ad37ap-788, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98ff07db1f6e4p-17, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5fd8ddf343b2p-92, 0.0,
     0x1.b01ca4f596abep-744, 0x1.e89e6592a4683p-118, 0.0, 0.0, 0x1.7b29204fdf4bcp-184,
     0x1.46dd7eef480fep-380, 0x1.0c5466141dd53p-85, 0.0, 0.0, 0.0, 0.0,
     0x1.dca24a0f681dep-181, 0.0, 0.0, 0.0, 0x1.9bffdcc40f97bp-707, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6cf5a6bd35214p-849, 0x1.827bb459aa6f4p-451, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0c9c961ade426p-349, 0.0, 0.0, 0x1.40f29ed2e0a83p-754, 0.0, 0.0,
     0.0, 0x1.99fef2a1d4ee5p-186, 0.0, 0.0, 0x1.a3f1c32ccfff3p-713,
     0x1.bba1bd3031008p-289, 0x1.c1e58ab1d9282p-843, 0x1.b7dcbd473a46p-966,
     0x1.ed5f856ed479ap-578, 0.0, 0.0, 0x1.a06113290b39dp-720, 0.0,
     0x1.17a790bcd269bp-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26a6413baabd2p-283, 0.0,
     0x1.402b7d670a283p-173, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1d4cc75c1551p-1011,
     0x1.a059b12829632p-853, 0x1.4a5ca3d9346a2p-615, 0.0, 0x1.a919371f6f7f2p-41, 0.0,
     0.0, 0x1.885eb5f26a0d1p-367, 0x1.41c7aabbe465dp-1018, 0.0,
     0x1.1a6779d68810dp-585, 0.0, 0x1.389e060fac575p-47, 0.0, 0.0,
     0x1.9fa1c3a911909p-894, 0.0, 0x1.eceff507be7b2p-628, 0.0, 0.0,
     0x1.7f3797d8f6984p-597, 0.0, 0.0, 0x1.d19caffd0818cp-728, 0.0,
     0x1.1c07d85e3d35p-316, 0.0, 0x1.e5dfdd81d8e9dp-379, 0x1.35abb4b4c6e9cp-720, 0.0,
     0x1.eea4f9c84a4f3p-33, 0x1.b71398fd17dccp-859, 0x1.30b927fb4586ap-835,
     0x1.8559f6e0f2af1p-144, 0x1.0f4849719679dp-168, 0.0, 0.0, 0.0,
     0x1.1f802c93bcb3dp-455, 0x1.7ab94d2831c3p-508, 0.0, 0.0, 0.0, 0.0,
     0x1.8a210285c47c6p-838, 0x1.08aa15a12c2fcp-136, 0.0, 0.0, 0x1.1e8147b2e5deep-95,
     0x1.8001a7bb51641p-845, 0.0, 0.0, 0.0, 0.0, 0x1.ea6bffc8ecb04p-900,
     0x1.05e02c5158272p-236, 0x1.02b53b8b2cacap-1016, 0.0, 0x1.f90a7f00ea61ep-733,
     0x1.ca9041f86e79ep-634, 0.0, 0.0, 0x1.f67a3d51097d8p-200,
     0x1.e8a41c5333406p-1016, 0.0, 0x1.f494ababe2afdp-508, 0x1.85fa5cc221878p-93, 0.0,
     0x1.c2b1240ecabbp-880, 0x1.022d0a545aefcp-954, 0.0, 0x1.1a53f636abcedp-346,
     0x1.6c4778cd46548p-679, 0x1.2fa1898863d67p-492, 0.0, 0x1.95bc152885bdep-12,
     0x1.d876c714aa893p-176, 0x1.ecfdb4127c474p-443, 0.0, 0.0, 0.0,
     0x1.fd03e541c1e8ap-156, 0x1.4f7f0a32ce7ap-805, 0x1.5c4f33ef78f65p-393, 0.0,
     0x1.c68f851e35265p-665, 0.0, 0x1.927d9cb2728ccp-910, 0x1.64c9fc118afa4p-950,
     0x1.fd285b9e9bbc2p-443, 0.0, 0x1.4d75846cdb50dp-12, 0x1.7f8dc94e086f4p-644,
     0x1.a2c085a9bea93p-1005, 0x1.4aff282bf932bp-580, 0.0, 0x1.c759bec455ccfp-944,
     0.0, 0.0, 0.0, 0.0, 0x1.97d755937039fp-434, 0.0, 0.0, 0x1.d99dbba60e57fp-510,
     0x1.4674d5c8be5c5p-116, 0.0, 0.0, 0x1.990db8ace4267p-400, 0.0, 0.0, 0.0, 0.0,
     0x1.7d3cd6491de58p-516, 0x1.95dc5cd39e85cp-176, 0x1.ea9e7f2b5c9b9p-9, 0.0, 0.0,
     0x1.d6a9ac4f39ad9p-634, 0x1.4679ed072baacp-505, 0x1.41b149e7fb213p-529,
     0x1.c1caa7f4ce752p-205, 0.0, 0x1.91dfcd50e15d6p-276, 0.0, 0.0,
     0x1.5c687f681a703p-490, 0.0, 0.0, 0x1.c59ad7714cfa5p-199, 0x1.154378cdb2f7fp-688,
     0.0, 0.0, 0x1.2491be617d46ap-378, 0x1.3c636382724d3p-312, 0.0, 0.0,
     0x1.9d26270c01bdfp-91, 0.0, 0x1.8c09980da4065p-852, 0.0, 0.0, 0.0,
     0x1.5f8230b5b5411p-237, 0x1.35ba9a268adbcp-311, 0x1.43cd67cd4f6b2p-304,
     0x1.99f7768ad3943p-702, 0.0, 0x1.7ed913041e2c8p-26, 0x1.1062fb7e9cdcfp-71, 0.0,
     0.0, 0.0, 0.0, 0x1.bd3fc39d7fafbp-535, 0x1.ea6fd06647631p-727,
     0x1.e0f802889836ap-115, 0.0, 0.0, 0x1.2d31cc72a573ep-598, 0.0, 0.0, 0.0, 0.0,
     0x1.96383455f369bp-446, 0x1.4d41a6e392283p-343, 0.0, 0x1.aa0d58b374fd3p-536, 0.0,
     0x1.abc672b7b63aep-157, 0.0, 0x1.4aa9b0786ac23p-958, 0.0, 0x1.e68fc0e27f0abp-197,
     0x1.1f3d128efaefbp-402, 0x1.334420386787p-739, 0x1.56ef292701659p-790, 0.0,
     0x1.0735c5dddbde7p-343, 0x1.04f7c58878244p-900, 0x1.3b345bc1a0494p-11, 0.0,
     0x1.4a3e634043497p-62, 0x1.d192fedb01ff4p-346, 0x1.81476b970d43dp-977, 0.0,
     0x1.51511a23887dep-334, 0.0, 0x1.3dba9749d01bbp-439, 0x1.859a4365c6bc1p-241,
     0x1.dbd10124f2b68p-514, 0x1.8d7a3a99a3537p-337, 0.0, 0x1.21d5919cee8aap-937, 0.0,
     0.0, 0x1.a7579399a578ep-229, 0x1.4c12f9611790ep-492, 0x1.340ada89da835p-948, 0.0,
     0x1.924176db25154p-825, 0.0, 0.0, 0x1.d4f9c41a9cf32p-421, 0.0,
     0x1.c714d4c3895efp-695, 0x1.49a50114b0ad5p-730, 0x1.9ce4344643ac6p-461,
     0x1.eb77e51fdf99ap-573, 0x1.90d7625d0534p-110, 0.0, 0x1.d0d01db848f54p-1010, 0.0,
     0.0, 0x1.09dc87828f85dp-1014, 0.0, 0x1.e408013d43672p-517,
     0x1.c15ec44292c14p-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68e7e24f8c60ep-149,
     0x1.a9c0ea3512f91p-796, 0x1.e85fb48a281f7p-784, 0x1.85335532f5ed9p-194,
     0x1.63ff43d834b86p-743, 0.0, 0.0, 0x1.fbf2faee30579p-737, 0x1.dd8a11805e259p-668,
     0.0, 0.0, 0x1.e44753c64907bp-802, 0x1.e1384a0c651cfp-412, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.415f323c5c675p-918, 0x1.db655680f79f1p-66, 0.0,
     0x1.9f4777225ae32p-748, 0x1.f9c478667ba61p-978, 0.0, 0.0, 0x1.99423e32a8e32p-600,
     0x1.391aedcf559acp-15, 0.0, 0.0, 0x1.9ed0fca07efa2p-319, 0x1.f223bfcc29586p-199,
     0.0, 0.0, 0x1.46d911aa9e4fbp-613, 0.0, 0x1.5ae944df51f12p-483,
     0x1.af18e29296e18p-906, 0x1.56d9c9a968832p-328, 0.0, 0.0, 0.0, 0.0,
     0x1.d5b2c9f859475p-149, 0x1.e6fe5f9dd8f32p-72, 0x1.e8ea9f9979103p-884, 0.0, 0.0,
     0x1.e43418d1fec4bp-221, 0x1.2279c7b081a72p-865, 0x1.0821671dc569dp-113, 0.0, 0.0,
     0.0, 0x1.92a479708d657p-574, 0.0, 0x1.183ba32689aedp-79, 0.0,
     0x1.452926fe6b67dp-236, 0x1.49229675baa1ap-6, 0x1.15c0e5125005ep-349, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa7b50ed5f22cp-675, 0x1.caf4afb7b14dp-799, 0.0,
     0x1.5e94152a7388ep-523, 0.0, 0.0, 0x1.667e25d0acd57p-821, 0x1.24d531f749c91p-386,
     0.0, 0x1.109e0255be6eap-400, 0x1.f0498cc6c63f7p-392, 0.0, 0x1.d9fc5b679f839p-815,
     0.0, 0x1.73707ebd7ead1p-219, 0x1.0b0c74444f50cp-9, 0.0, 0x1.2e44dcae13b04p-269,
     0.0, 0x1.464bcaef2d749p-648, 0x1.b6b2bfa4a6a2p-796, 0x1.2f3adadd0370fp-300,
     0x1.8a07e187ce1cdp-906, 0x1.7ecda8b5c1dd4p-183, 0.0, 0x1.dff2a0717d0a6p-197, 0.0,
     0x1.8ea803fd370a3p-336, 0x1.d4e013e87ea57p-1016, 0x1.0b1475a6ebb2p-278,
     0x1.fc4c034b68a68p-840, 0.0, 0.0, 0.0, 0x1.31ab3016681bp-53,
     0x1.1da3638ac8458p-24, 0.0, 0x1.536489a8f8526p-42, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf69ce1a8f679p-520, 0x1.721cf6bdde64ap-1004, 0.0, 0x1.38c07b4dbb9bp-216, 0.0,
     0.0, 0x1.b35fa6054ed02p-810, 0.0, 0x1.9ac2b413ac7bep-329, 0.0, 0.0,
     0x1.17bcf0917f23ap-878, 0x1.ef172398a131ap-253, 0x1.6f070b9674561p-634, 0.0, 0.0,
     0x1.aa57a5ee39748p-344
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
            tmp1 = Sleef_sqrtd4_kvx(tmp0);
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
    printf("Sleef_sqrtd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sqrtd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
