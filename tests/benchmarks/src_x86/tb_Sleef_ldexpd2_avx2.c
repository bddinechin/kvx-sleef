/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ldexpd2_avx2128.c --function Sleef_ldexpd2_avx2128 --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64,int32 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.2a9600f95fdddp-194, 0.0, 0x1.41f525eb6d3cbp-6, 0.0, 0.0,
     0x1.8c6a1f151372ap-529, 0x1.afdda2e1013abp-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d09c42e0726bep-583, 0x1.dbd7a22d213f4p-82, 0.0, 0x1.86a915e85ef97p-272,
     0x1.ade1444785588p-18, 0x1.2fbeb1758f98dp-991, 0.0, 0.0, 0x1.0330fc39bd85ep-248,
     0.0, 0.0, 0x1.a7823384c4e09p-991, 0.0, 0x1.ca73dd4a58beap-538,
     0x1.f81f7dcb5246dp-584, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c1f680941aaap-520, 0.0, 0.0, 0.0, 0x1.7300d95215412p-377,
     0x1.01cf119cec95cp-605, 0x1.f5a4da8493e35p-525, 0.0, 0.0, 0x1.207a155299087p-711,
     0.0, 0x1.8a4fa0fbfd9ebp-730, 0x1.93d081f01c3bap-290, 0.0, 0x1.1260ae186992fp-692,
     0x1.7b08fbc304871p-64, 0.0, 0.0, 0x1.5adec6ac91da2p-182, 0x1.728409fcfab47p-62,
     0x1.832e199baf6f9p-843, 0.0, 0.0, 0x1.4cd83e79ad09fp-675, 0.0,
     0x1.c7b1f8136f0d7p-484, 0x1.002ea64df50b5p-788, 0.0, 0x1.3454250211f84p-547,
     0x1.91d817affd8bap-981, 0.0, 0.0, 0x1.536bdb96ad566p-597, 0x1.f1898ddf5572fp-904,
     0.0, 0x1.d85137007fa46p-760, 0.0, 0.0, 0.0, 0x1.87fb31615f657p-630,
     0x1.8ca608dcedabfp-923, 0x1.eac3f3a818053p-338, 0x1.c4df3cf530071p-972,
     0x1.d48ca33aaa5fp-955, 0x1.85887cb97356ep-896, 0x1.fe44b6558b922p-92,
     0x1.e016533a16fbcp-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53621e7e619f9p-493,
     0x1.19f556a303375p-185, 0x1.98c8c1451dbe6p-207, 0.0, 0x1.fc8b0b2070c3fp-216, 0.0,
     0x1.91aba667b3effp-336, 0.0, 0.0, 0x1.fe4e4dbfffcc7p-44, 0x1.1ecb56e1be6ep-687,
     0x1.227df5fa58412p-19, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bc899813d03ebp-492, 0.0, 0x1.052ac4d16e972p-629, 0.0, 0.0,
     0x1.325c4442c437fp-97, 0x1.a1c1e0a36a2f4p-118, 0x1.e758cf080b657p-650,
     0x1.422e5076dd6c4p-206, 0x1.3e78aad09c8b2p-737, 0.0, 0x1.963bd65d45f83p-51,
     0x1.e141bd8ee48e2p-714, 0.0, 0x1.ad66ea7f4fff2p-14, 0x1.926097e9207e7p-909,
     0x1.c2134543e956bp-692, 0x1.60f4a058b8c2dp-229, 0.0, 0x1.ae72a6c8b225ep-610,
     0x1.cdea14799ef65p-484, 0.0, 0.0, 0.0, 0x1.20bea4be9d602p-329,
     0x1.36b1a4f8f12adp-700, 0x1.33f69688363d3p-430, 0x1.a1331ad7aaf16p-589,
     0x1.d46064e1b745bp-579, 0.0, 0x1.d4306e07c5472p-33, 0x1.040f4e00bc38p-811,
     0x1.d8afcf1134b89p-915, 0x1.a8ed175917de4p-1019, 0x1.6b8cedaf8bd52p-7,
     0x1.bffa0b70c2bbap-428, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea9fa0d6bb96bp-976,
     0x1.3e0bc1cb2cb62p-546, 0.0, 0.0, 0x1.71ecdfca50001p-856, 0x1.ad11d567b1f37p-847,
     0.0, 0x1.a2d85de9dff82p-949, 0x1.7950685202bc2p-216, 0.0, 0.0,
     0x1.c06a3b357c9a1p-728, 0x1.0c547985c3c23p-998, 0x1.6adaec778063fp-904, 0.0,
     0x1.bc2055f6cf163p-113, 0x1.919c8c3f99296p-935, 0.0, 0.0, 0.0, 0.0,
     0x1.d7f25f35fe185p-229, 0.0, 0x1.f18a31f3ae625p-509, 0x1.de586f3ed77f2p-1004,
     0.0, 0x1.8595387cfa6dbp-604, 0.0, 0x1.bb34d006f83b9p-407, 0.0, 0.0,
     0x1.e64422eef1aa9p-130, 0x1.f2ce2e9ad9887p-687, 0.0, 0x1.452611868eb45p-666, 0.0,
     0x1.0dbe55faa8d6fp-889, 0.0, 0.0, 0.0, 0x1.68ed14ab50d1ep-883, 0.0, 0.0, 0.0,
     0x1.397d062b2b832p-914, 0.0, 0x1.3e059cd2dca79p-976, 0.0, 0.0, 0.0,
     0x1.42a4eb0541194p-523, 0x1.ddaf980a13d0fp-429, 0.0, 0x1.a989e1dc28907p-882, 0.0,
     0x1.e0eaea5a92c1ap-505, 0x1.8a6feb636f27dp-848, 0.0, 0.0, 0x1.09eae9124b42ap-414,
     0x1.533ac3e322473p-516, 0.0, 0x1.d5b7391a42db4p-333, 0.0, 0.0,
     0x1.2d4e66db20f13p-553, 0x1.cdb2ba6939f83p-600, 0x1.87e7c51d1b0f6p-757,
     0x1.15606aabcdbdep-744, 0.0, 0x1.bc953158317c7p-728, 0x1.68a915043f876p-116,
     0x1.b2da8a9ec9d2p-319, 0.0, 0.0, 0x1.1c2ff8b1c6787p-479, 0x1.4f4f4a7646d52p-778,
     0x1.ce987f5c275a5p-815, 0x1.bbdfc55166f45p-129, 0x1.45a2f72830dbp-367,
     0x1.74dab9f981748p-116, 0.0, 0.0, 0x1.f6c2d8c43b06bp-184, 0.0, 0.0,
     0x1.223d0ca8a6c66p-973, 0.0, 0.0, 0.0, 0x1.1abfb852894edp-105, 0.0, 0.0, 0.0,
     0x1.eb8c13252b05p-758, 0x1.1f8b527315087p-931, 0.0, 0x1.1bfb155f0142p-792, 0.0,
     0x1.912518d6679b4p-237, 0x1.e949bb71bbf0ep-28, 0x1.37d6f295d3f4cp-775,
     0x1.df9762fc87a12p-906, 0.0, 0.0, 0.0, 0.0, 0x1.f2d5262d6d196p-224,
     0x1.f517c997e22f2p-564, 0.0, 0.0, 0x1.187845abc7e2ap-6, 0.0, 0.0, 0.0,
     0x1.e44fe28f04f22p-183, 0.0, 0.0, 0.0, 0.0, 0x1.8f07822d381dp-420, 0.0,
     0x1.0c8877366f61bp-622, 0.0, 0.0, 0.0, 0x1.785cb672d7b5bp-815, 0.0, 0.0, 0.0,
     0.0, 0x1.9541fb017405dp-651, 0x1.7e7d0376d354bp-961, 0x1.50ad7dea8e781p-472, 0.0,
     0x1.d124afc070661p-949, 0x1.d101fb772b7b1p-108, 0.0, 0.0, 0x1.b70a3f47add87p-42,
     0x1.2f48615fd88d8p-964, 0.0, 0.0, 0x1.2680d36d88abdp-928, 0x1.02dee114e3d19p-635,
     0.0, 0.0, 0.0, 0.0, 0x1.d48e851bbd628p-416, 0.0, 0.0, 0.0, 0.0,
     0x1.fc3a333160ec8p-79, 0.0, 0x1.c072cb09e3b4bp-154, 0.0, 0.0,
     0x1.4524d24ae88fdp-589, 0.0, 0x1.e1cd0f0c5720dp-844, 0x1.1029b45599601p-396, 0.0,
     0x1.dbec091e9238bp-381, 0.0, 0.0, 0x1.39c20cc435202p-36, 0x1.c5aa684c8a438p-149,
     0x1.c5c76d14afaa3p-749, 0x1.056ed460815cep-103, 0x1.b5cfcc705bfaap-124, 0.0, 0.0,
     0x1.fcc8814e9065cp-274, 0x1.9b0a69c975485p-570, 0x1.6c32ee3c7324ep-368, 0.0,
     0x1.faca55868f574p-715, 0x1.bd2eaa61acfbep-752, 0.0, 0.0, 0x1.f217daf38568fp-808,
     0.0, 0.0, 0x1.b19f669814af3p-263, 0x1.adf98a671eb55p-449, 0x1.17bfef670e4c2p-686,
     0.0, 0x1.b2f9031e598e8p-313, 0x1.b2fa44e0e6c32p-473, 0.0, 0.0,
     0x1.2d8ee4ae59473p-176, 0.0, 0.0, 0x1.b1c05d86b0118p-825, 0.0, 0.0,
     0x1.262d5589fb867p-226, 0.0, 0x1.54f816d3a49bdp-451, 0x1.a4051c3a97497p-1010,
     0.0, 0x1.e40178d88e476p-641, 0.0, 0.0, 0.0, 0x1.b4808a869a188p-83, 0.0,
     0x1.fbdab7c19746ep-280, 0x1.daabdd4663984p-910, 0.0, 0.0, 0x1.23d5084556e45p-276,
     0.0, 0x1.9dfb144ed4667p-881, 0.0, 0.0, 0x1.53ac1dc6fd24bp-6,
     0x1.122e95a69d70dp-620, 0x1.8643ac36b8f0bp-726, 0.0, 0x1.102c0df5cac66p-1021,
     0x1.e11d0206244e9p-292, 0x1.57e243ab6d1b5p-31, 0x1.fa8e06cec242bp-734, 0.0, 0.0,
     0.0, 0x1.e8ad793f29519p-763, 0.0, 0x1.1da37629ac2c6p-907, 0.0, 0.0, 0.0, 0.0,
     0x1.88b7cbce379fdp-317, 0x1.38ed2fe4f8e4fp-766, 0.0, 0x1.61190d90b5251p-99,
     0x1.04692ffbb29a1p-805, 0.0, 0x1.0af6ff3d60331p-417, 0x1.884722d201431p-389, 0.0,
     0.0, 0.0, 0x1.0378b40445047p-513, 0x1.e57bda99758d1p-46, 0.0,
     0x1.d6d1d869bace9p-481, 0x1.082e5ec255559p-127, 0.0, 0x1.ab2a507ed4d66p-710, 0.0,
     0x1.a3ec9a72f3b5cp-651, 0x1.e643a803fa6d5p-299, 0x1.2cd241e2039a8p-852, 0.0,
     0x1.6003054e95dbbp-538, 0.0, 0x1.9011051a76a33p-719, 0.0, 0x1.fdb9351a44c11p-122,
     0.0, 0.0, 0x1.dd8df26b39fd3p-947, 0x1.718264a638b71p-495, 0.0,
     0x1.2bcdfe2c72a91p-311, 0.0, 0.0, 0x1.20569942fd85bp-19, 0.0,
     0x1.4455aec79bb35p-327, 0x1.fde3289bc94b5p-101, 0x1.dbe7eb980b318p-465,
     0x1.ea329a5d364fcp-416, 0x1.950fa211141c7p-651, 0.0, 0.0, 0.0, 0.0,
     0x1.882b48a156cefp-672, 0.0, 0x1.4524d8c35b46ap-596, 0.0, 0x1.a91138247df5dp-486,
     0.0, 0.0, 0x1.653c65438a85dp-716, 0.0, 0.0, 0.0, 0x1.4eb2d690268ddp-840,
     0x1.4ac7f8d7afd29p-579, 0x1.43120f6ae25p-783, 0.0, 0.0, 0x1.5225c6b730feap-176,
     0x1.1d1716cfc95a6p-761, 0x1.30ccac7a16377p-350, 0x1.2f3b99af5da7bp-265, 0.0,
     0x1.2d24b8484bfb7p-333, 0.0, 0x1.19da099b1777bp-354, 0x1.7e4ce89dfe9f3p-88, 0.0,
     0x1.e060002661d4p-857, 0.0, 0x1.f47f0495c0b83p-571, 0x1.6cf35542ab64dp-139,
     0x1.c905a49520c2cp-929, 0x1.8190e8a199da6p-633, 0.0, 0.0, 0.0,
     0x1.92b4e7edbec7p-901, 0.0, 0x1.ca03f245bc82ep-993, 0.0, 0.0, 0.0,
     0x1.b543909046867p-161, 0x1.177a5e2da1f4ap-42, 0.0, 0.0, 0.0,
     0x1.197dbca6e971cp-492, 0x1.6c711762124e3p-736, 0x1.3efe6848f8fc8p-427, 0.0,
     0x1.4e3fbad17f14cp-316, 0.0, 0x1.174162ee5ff1fp-233, 0.0, 0x1.b9b6f15ebe312p-869,
     0x1.44ec99d66d96ap-616, 0x1.7625e94ec827fp-221, 0.0, 0x1.40cd3b8f2de0ep-376, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b017f084f5dep-207, 0x1.3e8809e0ada17p-834,
     0x1.80dfc1c08014fp-296, 0x1.f6ab66a78ca0fp-340, 0x1.5e31169d7b96ap-513, 0.0, 0.0,
     0x1.7d04bf6e5301cp-526, 0.0, 0.0, 0x1.8e10d3e0f4a1ap-617, 0.0, 0.0, 0.0,
     0x1.3cbcd902843c8p-688, 0x1.077798a66a9fcp-970, 0x1.478c693afd81ap-90, 0.0,
     0x1.761ec305fa436p-702, 0x1.8ef4a53828169p-156, 0x1.741cec4340e7ep-493,
     0x1.481cbdf2ca74ap-282, 0x1.d7d982495469ep-748, 0x1.a8175233b11f9p-115, 0.0, 0.0,
     0.0, 0x1.8255d47c90132p-399, 0x1.07c4ca9dfc993p-785, 0x1.471c9da9ddda1p-696, 0.0,
     0x1.d4d3a362605fdp-457, 0x1.414df3842cbd9p-302, 0x1.1e442fe0b5824p-165, 0.0,
     0x1.feb98483c66d6p-223, 0x1.0fba420f2d24ap-818, 0.0, 0.0, 0.0,
     0x1.72ffc8adcce66p-858, 0.0, 0.0, 0x1.5e87345b7fdd5p-895, 0.0, 0.0, 0.0,
     0x1.a023676841c1ap-940, 0x1.6c22cb2ec37a9p-543, 0.0, 0.0, 0.0, 0.0,
     0x1.eaf11c08ee1d4p-926, 0x1.06889545155p-165, 0.0, 0x1.d1dd276ab462p-680, 0.0,
     0x1.5024a50204e67p-347, 0.0, 0x1.6a8279ff2d2a2p-283, 0.0,
     0x1.b9d116cd1aca9p-1021, 0x1.483d55d9e43c5p-232, 0x1.26b322940e633p-874, 0.0,
     0x1.3ef1ae2e47dadp-903, 0x1.b3fc41fa41cb4p-387, 0.0, 0.0, 0.0, 0.0,
     0x1.b648ae6577e84p-899, 0.0, 0x1.a1d017a97d8a2p-300, 0x1.edeb5a1448452p-265, 0.0,
     0.0, 0.0, 0.0, 0x1.aa6bcc2907952p-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ae73bd4caf9fp-829, 0.0, 0x1.6fefaa5447f6ep-696, 0.0, 0x1.e44cb609e91b7p-365,
     0x1.9126d289cb99fp-677, 0x1.6b94dc4ea1646p-924, 0x1.e72f0d3760806p-578,
     0x1.9431d30b555abp-766, 0.0, 0.0, 0x1.e21fcb3ffaa12p-1021,
     0x1.11f60f20bdfa8p-674, 0.0, 0.0, 0.0, 0x1.051163182468fp-518,
     0x1.7246a29512fd3p-666, 0x1.6f4c6d3caafdcp-778, 0x1.8d59ddcff8ff3p-242, 0.0,
     0x1.74493a284d407p-780, 0.0, 0x1.069f0f9b54221p-853, 0x1.b2b0c595fdddp-516, 0.0,
     0.0, 0.0, 0x1.ccdfbf88ed15ap-375, 0x1.afa3e5a35ab7bp-534, 0.0,
     0x1.1ca21f398fa38p-827, 0x1.dbc7ccf5f243ep-453, 0.0, 0.0, 0.0,
     0x1.f0f44abb73cbcp-14, 0x1.d03cc1bd5db12p-525, 0x1.1899795d8b2abp-199,
     0x1.53ff916fea128p-407, 0.0, 0x1.c18652c705d6fp-63, 0x1.f6c2b3486ce8dp-386, 0.0,
     0x1.60becc12d3c89p-663, 0.0, 0x1.5d0257a3124d2p-917, 0x1.9d90d960602f1p-130,
     0x1.e7c0ef2056dd1p-910, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34c555d12d23p-609, 0.0,
     0.0, 0.0, 0x1.e306e07b9955bp-643, 0x1.f4307ed99dc74p-714, 0.0,
     0x1.a15a900407a53p-661, 0.0, 0x1.5d89e74ffa107p-482, 0x1.c523be8bcb7f2p-590, 0.0,
     0x1.52500c212f962p-377, 0x1.492a7e8fa8c9ap-745, 0x1.3a0cc773f1f0fp-440, 0.0, 0.0,
     0.0, 0x1.0d9b1dd5e6697p-680, 0x1.f934dbe3e7946p-310, 0.0, 0x1.4e40fd4fbb1f1p-695,
     0.0, 0.0, 0x1.a2dd559011abcp-47, 0.0, 0.0, 0x1.af08b4d0bf71ap-113, 0.0, 0.0, 0.0,
     0x1.2d5dfad5e5e3dp-558, 0x1.406a29ddf6fa8p-228, 0x1.26f2fb3a77839p-408,
     0x1.7df9ec85ec944p-496, 0x1.6e1d966e52ccap-222, 0x1.85b85fd35397dp-105,
     0x1.abb3ed230c9d3p-427, 0x1.2cc683a1eee18p-388, 0x1.744744d06704p-379,
     0x1.a0c529b87d756p-70, 0.0, 0x1.364bb9d549bacp-502, 0.0, 0x1.285103e1640aap-287,
     0x1.714cb64e3cb02p-330, 0x1.8d018f0e6322dp-199, 0.0, 0x1.20c241dcfdc3p-772, 0.0,
     0.0, 0.0, 0.0, 0x1.6d913c856f51p-11, 0.0, 0x1.9855890489d7fp-604,
     0x1.5ee88cb1022fp-76, 0.0, 0.0, 0.0, 0x1.d0cc1b39a4a7p-772, 0.0, 0.0, 0.0,
     0x1.dfd7545051646p-49, 0x1.d5f0abeaf797bp-27, 0.0, 0x1.138508fd0e084p-482, 0.0,
     0x1.11cdd4226dd43p-795, 0x1.853e9b693c3a9p-446, 0.0, 0.0, 0x1.e82620824fdabp-136,
     0.0, 0.0, 0.0, 0x1.9408b00c41c53p-685, 0.0, 0x1.c743ac9253fc8p-964,
     0x1.7f3ff1e53433cp-233, 0x1.f17c368af4dc4p-536, 0.0, 0x1.baf67cdf7cc8fp-861, 0.0,
     0.0, 0.0, 0x1.caacca71fae27p-724, 0.0, 0x1.8991b3ce31362p-708,
     0x1.66d20dd503e9ap-123, 0.0, 0x1.276e5a47cb038p-775, 0x1.73e69e0b13bfbp-67, 0.0,
     0x1.4f851c7e3ac4ep-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.27ebe264cc051p-1012, 0x1.0a882aba165ecp-774, 0.0, 0.0,
     0x1.632e97e350dbbp-218, 0x1.4592b5f2710cfp-603, 0x1.efd3319f40abcp-250, 0.0, 0.0,
     0x1.1d4343e8c87cfp-640, 0.0, 0.0, 0.0, 0x1.bc55372d3d6e4p-724,
     0x1.d8d5eba6810d7p-48, 0.0, 0x1.478dc1a93aaeep-962, 0x1.cee28bbbb6c98p-1002,
     0x1.4db033116569bp-335, 0x1.55c565eb2603p-995, 0x1.b7955f67f79d8p-873, 0.0, 0.0,
     0.0, 0x1.e6e07e71b464ap-570, 0.0, 0.0, 0.0, 0x1.d745e1bf30c5dp-330,
     0x1.5c8b79ec75fe3p-179, 0x1.d4a1fe02fd592p-607, 0.0, 0x1.ba086d35bcf79p-547,
     0x1.d3c68beef8afp-552, 0x1.b52b8b4475097p-136, 0.0, 0.0, 0.0,
     0x1.cd36a1d334edap-81, 0x1.72e470beb44fbp-726, 0x1.9c59f9232adfp-865, 0.0, 0.0,
     0.0, 0x1.c024707f4c644p-700, 0.0, 0.0, 0x1.7b078aa68c161p-527,
     0x1.b4d1bdddb59aep-905, 0x1.2767701445cd7p-313, 0.0, 0x1.5a2afeec24664p-517, 0.0,
     0x1.46857486a649p-607, 0x1.029085d66ac59p-954, 0.0, 0x1.eddac5d51c90bp-980,
     0x1.2904e8e4e9086p-915, 0.0, 0x1.d3ae33f9c2cf1p-174, 0.0, 0x1.114dff78b5c5fp-59,
     0x1.fefa28b00bb1dp-1003, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d83978b61b546p-669, 0.0,
     0x1.96bb2d33a3da1p-216, 0.0, 0.0, 0.0, 0.0, 0x1.ad01ab998974fp-381, 0.0,
     0x1.746a857f8f066p-1018, 0x1.fc3caa3d136efp-963, 0.0, 0.0, 0.0, 0.0,
     0x1.56d3b2e337f54p-450, 0.0, 0.0, 0.0, 0x1.bf44e605601cfp-28, 0.0, 0.0,
     0x1.7812bffab4383p-280, 0x1.c19c3a0583cap-255, 0x1.8fc4ccaa63dcep-931,
     0x1.7b8db5dcf013ep-673, 0x1.d49770cfde69bp-746, 0x1.4f76263e3917dp-462, 0.0, 0.0,
     0x1.78a99969e0209p-334, 0.0, 0x1.a4ef3fad06703p-866, 0.0, 0.0, 0.0, 0.0,
     0x1.0cc990f4e2373p-845, 0.0, 0.0, 0.0, 0.0, 0x1.42afdd54a4e2ap-88,
     0x1.aa65e4b3188c9p-934, 0x1.da9c4557db5efp-152, 0x1.fea8bf7abb91bp-498, 0.0, 0.0,
     0.0, 0x1.7667feb264bd7p-480, 0x1.4de1b7ab0b784p-981, 0.0, 0.0,
     0x1.93f42f0858e6cp-226, 0x1.49efb28fb9b2ep-901, 0.0, 0x1.fb3cd2ffe1c67p-383, 0.0,
     0x1.cf3b53d1a9c11p-222, 0x1.5684aca595151p-636, 0.0, 0.0, 0.0,
     0x1.b148990b1f64fp-277, 0.0, 0.0, 0.0, 0x1.c62799b9587e7p-154,
     0x1.c154c8c30e701p-209, 0x1.2c8cd8699d1d8p-531, 0x1.89849bc95b6f5p-338,
     0x1.4e433d66e216fp-221, 0.0, 0.0, 0x1.e3aeccccc7c05p-776, 0x1.ac7cde34e5c47p-320,
     0x1.d1f8a69ebd172p-188, 0x1.a0c1c255f0aacp-25, 0.0, 0x1.d471f7d94f12dp-468, 0.0,
     0x1.4ba0d931030c4p-120, 0x1.ad5dcb481b78fp-613, 0x1.48156aae8c9a4p-428,
     0x1.94df749aa907bp-281, 0x1.0fb89b38852fp-676, 0x1.724fdd13c926cp-233, 0.0,
     0x1.a96a6c42586bap-561, 0x1.70be0477d8483p-27, 0x1.33d843c885155p-712,
     0x1.a0effb43b15ep-424, 0.0, 0.0, 0.0, 0x1.2ec5b43a03b01p-781,
     0x1.464f5c3d37b9ep-187, 0.0, 0.0, 0x1.93476ae3d5c65p-739, 0.0, 0.0, 0.0, 0.0,
     0x1.33ed8a6dc7ef1p-509, 0x1.76e19c097f5b4p-50, 0x1.4f8f6a84acc09p-63, 0.0,
     0x1.bd5d37e1764e5p-775, 0x1.b3264f6237eb7p-579, 0x1.0ab58fbc2c407p-182,
     0x1.8f0957ea4fc9cp-925, 0x1.669fe9a9074dp-479, 0.0, 0x1.4ba02cf68b82p-870,
     0x1.ff33890188819p-351, 0.0, 0x1.b81942bb2513ep-102, 0.0,
     0x1.9208e16141cbbp-1003, 0x1.e1f322583852dp-9, 0x1.1609fae713deap-507,
     0x1.b4b8a20f135bbp-607, 0x1.f809253021f0cp-783, 0.0, 0x1.3b7aa99572343p-656,
     0x1.44826a9391b33p-489, 0x1.95d4597fbb4c7p-567, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.abf1624ae39ebp-231, 0x1.b60b0728f46p-681, 0x1.7e0a0e79047d5p-103,
     0x1.d3066bccd5f8cp-542, 0.0, 0.0, 0x1.6fa16e25d8b83p-774, 0.0,
     0x1.e5f939e51f652p-779, 0x1.dad871c5cd262p-631, 0.0, 0.0, 0x1.1ab08ff1a7b26p-207,
     0.0, 0x1.dbb0c214bd1aap-986, 0x1.6540aefb8c40dp-944, 0x1.0c9f82484e8f6p-614, 0.0,
     0x1.99b774e62aaa9p-202, 0.0, 0.0, 0.0, 0x1.6832d7cbdce48p-251,
     0x1.0b31f0bddd63p-53, 0x1.301f6976d1095p-340, 0.0, 0x1.8603684f2adeap-439,
     0x1.480eddf2987c5p-220, 0.0, 0.0, 0x1.5cf15bd198016p-143, 0x1.56beb89b33601p-73,
     0x1.f23e337bcb609p-377, 0.0, 0.0, 0.0, 0x1.cbb8025c36008p-362, 0.0,
     0x1.c1bb5732b8758p-955, 0x1.0b3c98bc35eaap-100, 0.0, 0.0, 0x1.33c169369a55ep-927,
     0x1.1f6ac327b2766p-787, 0x1.84cd72f8cd1a3p-976, 0.0, 0.0, 0x1.f73dac5c5ce3cp-564,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1002]  = {
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0)
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
            ml_int2_t tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_int2_t*)(external_bench_wrapper_input_table_arg1+ i)), 8);
            tmp2 = Sleef_ldexpd2_avx2128(tmp0, tmp1);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp2),  16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(2);
            i = tmp4;
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
    printf("Sleef_ldexpd2_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ldexpd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
