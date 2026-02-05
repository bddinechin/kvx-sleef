/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsd1_purecfma.c --function \
 *     Sleef_finz_fabsd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.f400e03cb73f9p-1019, 0x1.0412d70d1eb4p-668, 0.0, 0x1.55d16d49c8d6p-794,
     0x1.f460caf6f76d6p-126, 0.0, 0.0, 0.0, 0.0, 0x1.99922adb39158p-616,
     0x1.0d21d69d6a3e2p-177, 0.0, 0x1.57030f230f1e3p-468, 0.0, 0.0,
     0x1.8f23af09f2263p-905, 0.0, 0.0, 0.0, 0x1.4ff56fd06eeddp-46, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cbfba32a06673p-115, 0.0, 0.0, 0.0, 0x1.ee3d89ab4259ep-48,
     0x1.dea2230839fap-409, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc2cb3dbeefa5p-78,
     0.0, 0.0, 0.0, 0x1.6835d0e3888dbp-497, 0x1.7555decf09b85p-393,
     0x1.3510fc6ca109bp-958, 0x1.aabd2ac812f32p-149, 0x1.987f64445a4c1p-429, 0.0, 0.0,
     0x1.7cd7bc12f2f23p-828, 0x1.fc54a6b660cccp-15, 0x1.181bc8eefd186p-950, 0.0,
     0x1.527cf99574c2ap-742, 0x1.c54b30b2cef21p-285, 0x1.b3c2c3ad52b65p-787, 0.0,
     0x1.a9309e2ad5d92p-337, 0.0, 0.0, 0.0, 0.0, 0x1.92a11b0fed2fp-517, 0.0, 0.0,
     0x1.912c520488796p-263, 0x1.232fca4166aa3p-193, 0.0, 0.0, 0.0,
     0x1.1e41b4edb0d8ep-85, 0.0, 0.0, 0.0, 0.0, 0x1.810574546f4edp-342, 0.0, 0.0,
     0x1.3ce775e941725p-445, 0.0, 0.0, 0.0, 0.0, 0x1.c2a1e8506be3cp-84,
     0x1.209d95f7d0716p-146, 0.0, 0.0, 0x1.c9aed9fc59ee6p-281, 0.0, 0.0, 0.0, 0.0,
     0x1.40435aa22f42bp-489, 0.0, 0.0, 0x1.ed2bc472232ddp-180, 0x1.7da4874fd58d7p-892,
     0x1.bb333082d1fp-709, 0.0, 0.0, 0x1.c691cad79c6b3p-262, 0.0,
     0x1.5081c4f1f32a7p-767, 0.0, 0x1.807bd2710e83fp-662, 0x1.c3b5c939ca174p-100, 0.0,
     0.0, 0x1.c3f7169f9712dp-124, 0x1.e49b31ed0e101p-928, 0.0, 0.0,
     0x1.7ca8c0793f714p-319, 0.0, 0x1.2cb08ca23a3a9p-548, 0.0, 0x1.bb03f424bf854p-877,
     0.0, 0x1.3c9216d4204cap-841, 0x1.43eede7350503p-801, 0x1.7440ef8b2915ep-828, 0.0,
     0.0, 0.0, 0.0, 0x1.24b6c8924d8e4p-619, 0x1.00bbd34891d99p-232, 0.0, 0.0,
     0x1.8216d818dea4p-758, 0x1.b6778f7019bcap-415, 0x1.93a1a503be2c3p-574, 0.0,
     0x1.5846f362e60dfp-632, 0x1.4d66d408535e1p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.50687eaa53e0bp-367, 0x1.e29aaa1bcf15ap-246, 0x1.45adb3e99c4fdp-292,
     0x1.2c788d1edc722p-779, 0x1.b2af756b7a445p-153, 0x1.ac525f199285fp-632,
     0x1.c7556dc7051bfp-642, 0x1.29fc3701a14bep-618, 0x1.78ef1d7401ebcp-320,
     0x1.91dca5ee8a3adp-257, 0x1.13f8949b7c474p-17, 0.0, 0x1.4593040a69655p-514, 0.0,
     0x1.42e0f198b77d1p-102, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2461999ed754ap-750, 0x1.8032c48cab389p-350, 0x1.cc4a30661c3b2p-474, 0.0, 0.0,
     0x1.57bc7eaf5a938p-449, 0.0, 0.0, 0.0, 0x1.2013ffc9951bep-404, 0.0,
     0x1.08877a6a2d315p-256, 0.0, 0.0, 0.0, 0x1.812017768f5eap-326, 0.0, 0.0, 0.0,
     0.0, 0x1.46e7989caa40ap-1003, 0.0, 0x1.b9b54580abfc3p-954, 0.0, 0.0, 0.0,
     0x1.9a7033b99e068p-775, 0.0, 0.0, 0x1.413dd33941554p-13, 0x1.aaac6e09dd1d8p-989,
     0x1.5cfecce595678p-930, 0.0, 0x1.311723326cd0ap-474, 0x1.084327474ef61p-216,
     0x1.b48782bb58145p-700, 0.0, 0x1.741ef98d74a85p-250, 0x1.2e1bbd72e60a7p-491,
     0x1.6d15ddd3c674cp-640, 0x1.21397fba26cb9p-30, 0.0, 0.0, 0x1.f02684b2c0717p-280,
     0.0, 0x1.a5962be1c84a8p-395, 0.0, 0.0, 0.0, 0x1.8e8e40b074194p-454, 0.0, 0.0,
     0.0, 0x1.1bf3bfedd044ep-128, 0x1.18c96cc3bd3cbp-244, 0x1.2dff67f7978e1p-944, 0.0,
     0.0, 0.0, 0.0, 0x1.4021ed29a8d92p-809, 0.0, 0x1.6c0103600ff59p-944, 0.0, 0.0,
     0.0, 0x1.06bcdd6f2c931p-607, 0.0, 0.0, 0x1.20163079c94ap-312, 0.0, 0.0,
     0x1.c9c6df0536a9bp-519, 0x1.7c5355caf8e96p-151, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caf9147632898p-820, 0x1.821a8fae444e6p-109, 0x1.6e4301f3e043cp-397,
     0x1.fe56268688a52p-290, 0x1.82ef54cfaf757p-169, 0.0, 0x1.de7820afbc2e9p-206, 0.0,
     0x1.660c03a0a6c46p-481, 0.0, 0.0, 0.0, 0.0, 0x1.c4e99682b6d73p-572, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8d59ae38e5822p-540, 0.0, 0x1.2bb50e08e98a7p-650, 0.0, 0.0,
     0x1.50367bdeb2e7ep-727, 0x1.c4efd5c02237dp-883, 0.0, 0x1.1c8a1d6f274f5p-620,
     0x1.78758065cf0bcp-759, 0x1.a224baa2c005cp-80, 0.0, 0.0, 0x1.becb45298d8f5p-125,
     0x1.1fcdcce683e12p-762, 0.0, 0.0, 0x1.db1734c5ccc86p-817, 0x1.bf9afce231f4dp-772,
     0x1.adad4dc523ef9p-4, 0x1.e64f7ea6337f1p-973, 0.0, 0x1.2f5a68fdca501p-1012, 0.0,
     0x1.86a374f6d5ae9p-285, 0x1.8b03b5c39c56dp-581, 0.0, 0x1.a9d7648dd7388p-937, 0.0,
     0.0, 0x1.4460384bc9426p-603, 0x1.7b3147e17fa4ap-735, 0.0, 0.0,
     0x1.51cb7c9ac00bcp-82, 0x1.f68ae8723b577p-313, 0.0, 0x1.bc0f775e9008ap-922,
     0x1.a2f6ca993fc93p-563, 0x1.a4b14685d6d02p-147, 0.0, 0.0, 0.0, 0.0,
     0x1.4181eaf3d522ap-432, 0x1.78a200942963dp-937, 0.0, 0.0, 0x1.72931c486c17ep-733,
     0.0, 0x1.2b9a1936f23c2p-88, 0.0, 0.0, 0.0, 0x1.e05c14e6d41fap-942, 0.0,
     0x1.6f6e322f598ccp-718, 0.0, 0x1.6578e1d8cb6f3p-454, 0x1.6fe7e3ef45fd4p-139,
     0x1.41cf48f48b273p-235, 0x1.0ce1a018f7b21p-803, 0.0, 0x1.c6af466168356p-109, 0.0,
     0.0, 0.0, 0x1.cfa90f4e2ac74p-438, 0x1.3e33f0bfccba5p-393, 0.0,
     0x1.aca3d4af5b46fp-19, 0x1.dfb9972fe8e2dp-593, 0.0, 0x1.5083e20793d5bp-306,
     0x1.965c8c44d1f43p-449, 0x1.bc0bbc2bbab37p-574, 0x1.f783d26ec6705p-535,
     0x1.194013c9e1501p-595, 0x1.55db71d9b857ap-927, 0x1.44021696b279fp-550, 0.0,
     0x1.807198d212288p-997, 0.0, 0x1.f072d6c61dca9p-568, 0x1.8667cc4d4a1dbp-750,
     0x1.3519e9638c0dbp-274, 0.0, 0.0, 0x1.79b551af79ce2p-823, 0x1.0e485886d704ap-278,
     0.0, 0x1.0b58b8b3df644p-436, 0x1.2b95ff6f1bf3bp-31, 0.0, 0x1.3c3a405223be4p-626,
     0.0, 0.0, 0x1.22bd135caeccp-889, 0.0, 0.0, 0x1.02f170c2a788ep-441, 0.0, 0.0,
     0x1.7779fe6b71bcp-390, 0.0, 0.0, 0.0, 0x1.69f648e193f8dp-689,
     0x1.e2f2033d9d949p-228, 0.0, 0x1.14fdae819bfb1p-147, 0x1.4a73e8cad7a6dp-693,
     0x1.acf41e3e7d8a2p-754, 0x1.3178609a8ed6cp-727, 0x1.48eb9f4f02bfbp-341,
     0x1.3e2821c389266p-147, 0x1.885fda4ac382dp-66, 0.0, 0x1.97e8219d8517bp-613,
     0x1.d10c49f97f8fcp-389, 0.0, 0.0, 0x1.033777ba318f8p-171, 0x1.7e273c7f7106ap-564,
     0x1.bac2df8862dffp-362, 0.0, 0x1.b61bfe1b220abp-272, 0x1.f459d77c1f57ap-874, 0.0,
     0.0, 0.0, 0x1.fdfca4c3444ddp-428, 0x1.c5af57f80c51fp-654, 0.0,
     0x1.a3ac82c1de2b1p-100, 0x1.d34632fbd4431p-2, 0.0, 0.0, 0x1.c48d16f378edbp-450,
     0.0, 0.0, 0x1.fe63ccc7f5cdp-446, 0x1.8ffde529cdcaap-612, 0x1.185f87e87d226p-8,
     0x1.dd17876df0d02p-587, 0.0, 0x1.720a7385a5f6dp-995, 0.0, 0x1.0694f21ff0213p-813,
     0x1.2a1eb565df104p-351, 0.0, 0x1.2702d2dca5ad7p-332, 0x1.ff851d86ac619p-717,
     0x1.740d7457f965ap-348, 0x1.f6a39d6e71d2cp-376, 0.0, 0.0, 0x1.6cecc7001a95ap-796,
     0.0, 0x1.9d2296bc99e74p-1009, 0.0, 0x1.b1e06a7f18f2ap-971,
     0x1.086bc4d677c51p-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bc8d0d9efebcep-808, 0x1.e63158188bb93p-278, 0.0, 0x1.33851c784da6ep-505,
     0x1.54059f1649b99p-122, 0.0, 0x1.7a5538fe63576p-54, 0x1.52ff50c989c4cp-757, 0.0,
     0.0, 0x1.029dc8a3311f2p-726, 0.0, 0.0, 0.0, 0x1.4aac0f51f449bp-978,
     0x1.9a8ac305ccc9cp-623, 0.0, 0x1.e2663d27ca157p-606, 0.0, 0.0,
     0x1.30866c263b77cp-555, 0x1.b312852b296e3p-731, 0.0, 0.0, 0.0, 0.0,
     0x1.3b510038b9b3dp-893, 0x1.dc25e4cc55204p-407, 0.0, 0x1.1445ef18e99ccp-133, 0.0,
     0.0, 0.0, 0.0, 0x1.b764b052db013p-594, 0x1.81585d9a77c6bp-76,
     0x1.1ab48d17551ecp-54, 0.0, 0x1.9f2b112b5581ep-119, 0.0, 0x1.6ecff164e4161p-41,
     0x1.456589332e393p-695, 0.0, 0x1.81feebdc303c4p-860, 0x1.63ec780e022cfp-347,
     0x1.0c6a6567fb56ep-816, 0.0, 0x1.c50700ca9aa99p-683, 0x1.986e30e335a88p-164, 0.0,
     0.0, 0x1.0c1dd6143790bp-267, 0.0, 0.0, 0.0, 0x1.02418b7ceabdcp-79,
     0x1.886410a99ec1dp-234, 0.0, 0.0, 0.0, 0.0, 0x1.3aa950de2c1ebp-881,
     0x1.5d91ac05bb3f7p-368, 0.0, 0x1.aef319c0f9b85p-183, 0x1.d08c498422723p-1019,
     0x1.4f2a32c1bbc72p-97, 0.0, 0.0, 0.0, 0x1.a80631d39f978p-503, 0.0,
     0x1.94846f15dcbffp-10, 0x1.031beae8508a6p-1007, 0.0, 0x1.7ce76f8d13ebp-829,
     0x1.acc4cf2072ea6p-243, 0x1.185efd5a3a9d3p-11, 0x1.0df227740c89cp-527,
     0x1.47e84d4ccb7d8p-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c4de94e22fe46p-133,
     0x1.7dca184194032p-302, 0x1.3c9880db87762p-479, 0.0, 0x1.fd52de15a759fp-450,
     0x1.f5f768525eaddp-843, 0x1.848b1047e9872p-1000, 0.0, 0x1.2a1df412c847cp-777,
     0.0, 0x1.9adb71eb9dcf5p-563, 0.0, 0.0, 0.0, 0.0, 0x1.4886ca3c1a03dp-242, 0.0,
     0x1.81698edc8e48cp-404, 0.0, 0x1.0c2d2c4b7948p-912, 0x1.1bb18da1e69dfp-829,
     0x1.3c709d656d5efp-902, 0.0, 0x1.c58a97e32219ap-292, 0x1.01485f494426p-1017, 0.0,
     0x1.0130278b3c2c1p-570, 0.0, 0x1.289764050ead7p-150, 0x1.eb988aafa04fcp-879,
     0x1.c3b6945524f75p-526, 0x1.b3d46d535cdc9p-328, 0.0, 0x1.d060b0bc9f335p-271,
     0x1.456b6743f0af2p-943, 0x1.898f983cad441p-123, 0x1.1497f162d9e5bp-397,
     0x1.e67c1310c85cap-230, 0x1.a2865f7c77ff1p-560, 0.0, 0x1.1dc7a2ca3406cp-831, 0.0,
     0x1.c1ad59888372ep-160, 0x1.34bbda6b76717p-938, 0.0, 0.0, 0x1.1ae449e26d24cp-807,
     0.0, 0x1.6b00a61ee5694p-297, 0.0, 0.0, 0x1.37101361d4593p-688, 0.0,
     0x1.de5e94760aaa5p-166, 0.0, 0x1.3be945bd5a2ccp-523, 0.0, 0.0,
     0x1.8793f195c1228p-489, 0.0, 0x1.c9ab1faf8a39ep-652, 0x1.f12744e83b588p-393, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ac4df2c24e536p-156, 0.0, 0.0, 0x1.f3e99ba41718bp-578,
     0.0, 0x1.8a8e95c1028bdp-541, 0x1.4cc343183b2aap-610, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b37c313deb274p-513, 0.0, 0.0, 0.0, 0x1.480ad3937fd82p-788, 0.0, 0.0,
     0x1.d04b2731c7923p-151, 0.0, 0x1.a69d57c0cd351p-305, 0.0, 0x1.e3376eeb20f4ap-445,
     0x1.d2bc0949c9d6p-451, 0.0, 0x1.6f6bcebd64b0ep-818, 0.0, 0.0,
     0x1.86cec0bfd6f93p-326, 0.0, 0x1.dc7810ea3f522p-475, 0x1.f466648649ab5p-1019,
     0x1.12408407ed17dp-354, 0.0, 0.0, 0.0, 0x1.963063473f5e1p-471,
     0x1.7c72d6f56a2ep-443, 0x1.9d9885ba84d48p-979, 0.0, 0x1.38d08d6677a3ap-613,
     0x1.3b3a0fbebc3afp-193, 0x1.8ece1d2214eddp-69, 0x1.354ce1e4487d6p-357,
     0x1.175298549dd65p-919, 0x1.3e609e4f5efb5p-896, 0x1.8aea2cf764afdp-581, 0.0, 0.0,
     0x1.d6121e19b71dbp-194, 0.0, 0x1.8aa342f0fed4cp-644, 0.0, 0.0, 0.0,
     0x1.c4bd8fa7abffcp-633, 0x1.be7f68b56d891p-806, 0.0, 0.0, 0x1.414845c558a9bp-805,
     0x1.3f441b1da8c4ap-357, 0x1.db1d2691eb6fbp-887, 0x1.bf7185e4662a1p-175,
     0x1.aa3dedd1a223ap-581, 0x1.11436df7babfbp-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6e2bdf4d91d04p-965, 0.0, 0.0, 0x1.142750c892f4cp-1008, 0.0,
     0x1.0c2c64794429dp-332, 0.0, 0x1.babedb3e9bdb9p-258, 0.0, 0x1.48cc22bd16c6bp-125,
     0.0, 0.0, 0x1.e2c26b210fbe7p-112, 0x1.7540e65b3d9b5p-92, 0x1.d77a6e8ec9401p-177,
     0.0, 0x1.769f53a644b48p-962, 0x1.f512e1dde365cp-342, 0x1.2a68934913716p-629, 0.0,
     0.0, 0x1.a6fb25285e456p-677, 0.0, 0.0, 0.0, 0x1.4415b08766d1cp-538,
     0x1.29935634689fdp-689, 0.0, 0.0, 0x1.1ae0054fe462bp-334, 0.0,
     0x1.1ee6f81696d6cp-345, 0.0, 0.0, 0x1.4b72bd2a11b53p-492, 0x1.7b571b465b0bfp-493,
     0.0, 0.0, 0.0, 0.0, 0x1.35f00805b5887p-405, 0.0, 0x1.f59bb733231a9p-734, 0.0,
     0x1.3f6ed53a39082p-456, 0x1.1aa0f52872597p-845, 0.0, 0x1.91f27e745cb0cp-612, 0.0,
     0x1.0504dc4d5202dp-991, 0.0, 0x1.0ee2db6d212e6p-951, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.038eda8a772dfp-1019, 0.0, 0x1.34af999f543b1p-592, 0.0,
     0x1.bd9776bf12e4bp-540, 0x1.e340882658281p-533, 0.0, 0x1.a74b5993c1e7cp-554,
     0x1.2870887e89401p-543, 0.0, 0x1.cd2438d50ad4cp-398, 0x1.61613a833e6c3p-161, 0.0,
     0x1.fbea44aaadeddp-547, 0.0, 0.0, 0x1.b216ead8d9c8dp-454, 0x1.0b9fed1ce059dp-815,
     0.0, 0.0, 0x1.4cbfbad3a9031p-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.199d9c00090b5p-851, 0x1.3fa272576fa72p-568, 0x1.387260cf7a8cap-385, 0.0,
     0x1.4901fc97864fp-90, 0.0, 0.0, 0x1.c8a0d3df1d69dp-459, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b00b962a8e5aap-1002, 0.0, 0.0, 0.0, 0x1.463c14519cc19p-382, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9fbcac955349cp-703, 0.0, 0x1.6db50f9807d4dp-828,
     0x1.46f0fc1820b18p-895, 0x1.2e9ec27acf118p-626, 0.0, 0.0, 0.0, 0.0,
     0x1.f430f0762fccep-858, 0x1.901a692aef3fdp-769, 0x1.376a568ed6806p-685,
     0x1.a76f2c8ef9bd2p-903, 0.0, 0.0, 0.0, 0.0, 0x1.2d82350465f44p-289,
     0x1.162c1b06d7c1ap-942, 0x1.c34db94e560c7p-906, 0.0, 0x1.6dae2133a1b8p-393,
     0x1.e44ec6aec30c1p-572, 0x1.4105ebcf66f26p-561, 0x1.4aa2eda1a8939p-205, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f456ec68b3c6ep-171, 0.0, 0.0, 0x1.718273b225c7cp-231, 0.0,
     0x1.ea606748450dp-820, 0.0, 0.0, 0x1.438f9dd7a8db3p-161, 0.0, 0.0,
     0x1.44d3d7f78bb1fp-630, 0x1.480b7af647bdp-948, 0.0, 0.0, 0x1.e8a70531dbc4ep-773,
     0x1.1df8e27993ec9p-811, 0x1.ff362f8f0358ap-631, 0x1.e76d0dce466p-109,
     0x1.8cc5ec5628bd4p-277, 0x1.435aaf9a69117p-245, 0x1.a59c3a61cf367p-401, 0.0, 0.0,
     0x1.a0e9af79baae6p-393, 0x1.816c5f7995359p-235, 0x1.1e01533d372a4p-1012,
     0x1.72ef269626866p-108, 0x1.6aa536145546ap-685, 0x1.b65c7ea5fce6ap-801, 0.0,
     0x1.db0295085fc38p-278, 0x1.9f64c76693a7cp-159, 0x1.df4ca88e3a791p-583,
     0x1.184f6fca40ac5p-714, 0.0, 0.0, 0.0, 0x1.f63e083636de9p-711, 0.0, 0.0, 0.0,
     0x1.c917f284ac00ap-906, 0x1.2f91923c1e4a6p-85, 0.0, 0x1.15a17b3ad6888p-154, 0.0,
     0x1.beb51dc7404dbp-150, 0x1.d9e8e72b33c1ap-681, 0.0, 0.0, 0x1.4ba381d37dd7cp-956,
     0.0, 0x1.cbca10ff6eefcp-749, 0.0, 0.0, 0.0, 0x1.f477ce8cdf09fp-539,
     0x1.f1d4887131501p-838, 0x1.8fdbd7d75c308p-762, 0.0, 0.0, 0.0,
     0x1.71f788b9de44ep-560, 0.0, 0.0, 0x1.ecd880fc29787p-242, 0.0, 0.0, 0.0,
     0x1.a94a44ff6b488p-255, 0x1.c9c72e80676c1p-331, 0.0, 0x1.92128b3b768dp-304,
     0x1.ebb06a121520ep-909, 0x1.4422e0724a51fp-397, 0x1.9409c1153b676p-888,
     0x1.11f66e8af256dp-631, 0x1.5844cc52e84b4p-427, 0x1.64dd309aefd55p-71, 0.0,
     0x1.65893a3b9e2efp-84, 0.0, 0x1.56c4df8a1e61cp-869, 0.0, 0.0,
     0x1.69d6e4ca4a9bp-474, 0x1.dce062b3a39bep-440, 0.0, 0.0, 0.0,
     0x1.cada849eff49dp-413, 0x1.43f25acce4b35p-342, 0x1.df25bfa69776dp-260, 0.0,
     0x1.9c57e15c0d039p-725, 0.0, 0x1.ccea2629cedbcp-198, 0.0, 0x1.b1bb1b51dde9fp-910,
     0x1.a8889b2777b4ep-635, 0.0, 0x1.e99cf2273d03ap-657, 0x1.41c53c0e0d0f1p-650,
     0x1.9f8d52e65962ap-867, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.848bd8a53a12fp-442,
     0x1.2c7f6e54f4801p-73, 0.0, 0x1.b0392d08154d3p-893, 0x1.e060938eb7d39p-877,
     0x1.63a5f6525ef6bp-159, 0x1.0b4197ba2de3bp-965, 0x1.0f4baa929fd5ap-800, 0.0, 0.0,
     0x1.672b0b8ef401dp-429, 0x1.dbff45f232ebap-973, 0x1.190347da89dc2p-99,
     0x1.cff9423c7f137p-101, 0x1.7bf01eb019f02p-179, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab25f95034316p-409, 0.0, 0x1.04ec911c9e9ccp-921,
     0.0, 0x1.e60191538103ap-341, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b79bef9d84fbp-222,
     0.0, 0x1.ce45a8d47f815p-210, 0.0, 0x1.9e0a863877f2ep-598, 0.0,
     0x1.ca03ffb0033c5p-765, 0x1.e949a15e5b12cp-714, 0x1.524e00240f45fp-746, 0.0,
     0x1.2c687a100ccc4p-891, 0.0, 0x1.e959644b57d87p-199, 0x1.cdfe73be39929p-734, 0.0,
     0.0, 0.0, 0x1.ab89cba3b19a4p-154, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b7374f70b628p-39, 0.0, 0x1.20abaf77b147ap-52, 0.0, 0x1.1cc75e620c514p-976,
     0x1.cdf94da8fa175p-326, 0x1.679c1cffb0117p-421, 0x1.17fd7e855a2a4p-308, 0.0,
     0x1.38aec553266d2p-72, 0.0, 0x1.7da3f33526bbcp-281, 0.0, 0.0,
     0x1.370f407a1dbfap-383, 0.0, 0x1.a7c4bfad0508ap-997, 0x1.e3dd30129fd94p-52,
     0x1.2bcfcd4569893p-607, 0.0, 0.0, 0x1.b0d4a5fdc379ap-210, 0x1.ba447a300667dp-123,
     0.0, 0.0, 0x1.ac5f46e5b348fp-690, 0x1.4f63b10a72dap-110
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
            tmp1 = Sleef_finz_fabsd1_purecfma(tmp0);
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
    printf("Sleef_finz_fabsd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fabsd1_purecfma bench acc %la\n", global_bench_acc);
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
