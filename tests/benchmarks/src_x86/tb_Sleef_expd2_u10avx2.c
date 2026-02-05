/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expd2_u10avx2128.c --function Sleef_expd2_u10avx2128 --headers \
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
     0.0, 0x1.5209e2da94d32p-233, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4f33a3eadaaecp-971, 0x1.1d320ad41b6c1p-222, 0x1.68e3409f72becp-562, 0.0,
     0x1.711b4dd60b486p-774, 0.0, 0x1.c4d8317c11501p-55, 0x1.b700c7813d63cp-996,
     0x1.1f8f03e28257p-632, 0.0, 0x1.47acbc30d6d15p-230, 0x1.03a8f583e52efp-36, 0.0,
     0.0, 0.0, 0.0, 0x1.2831e9fdb58d8p-865, 0.0, 0x1.9f2bc41604808p-929, 0.0,
     0x1.474a5217528d3p-552, 0.0, 0x1.ff3462377aca5p-103, 0x1.249021a312ef8p-223, 0.0,
     0x1.8b2c957e2a2e8p-848, 0x1.9e920c68d48c2p-740, 0.0, 0x1.bd8aa6e540ae8p-886,
     0x1.d63b02a4a586bp-306, 0x1.cdab20a6511d5p-202, 0x1.e5cec2d3afe02p-637,
     0x1.295ebb63f28adp-408, 0x1.15abcd483ce8fp-897, 0x1.a3c45a3d5fca1p-118, 0.0,
     0x1.e201671c93d1cp-898, 0.0, 0x1.ac4ee00f238aap-855, 0.0, 0x1.ada612d5a784dp-167,
     0x1.a439c283d55cdp-981, 0x1.55244c739ee27p-713, 0x1.e7bf58d71ff5ap-224,
     0x1.ed433229365e4p-764, 0x1.832509b9256c3p-172, 0.0, 0x1.e46bf74fccedfp-990,
     0x1.7c7badd4d64dbp-924, 0x1.31b25e09c1a12p-969, 0x1.b2590d6bf02b4p-546,
     0x1.002d3a87bb6e8p-245, 0x1.ddd8d8540d39cp-9, 0.0, 0.0, 0x1.0e7706209b63ap-473,
     0.0, 0.0, 0.0, 0x1.89db89c32f05ep-149, 0.0, 0x1.e2c7d3d1cb81ep-153, 0.0, 0.0,
     0.0, 0x1.f852c0f0212d3p-995, 0.0, 0x1.df5a5749f7807p-114, 0.0,
     0x1.303b894358b44p-994, 0x1.130ecea325f9bp-913, 0x1.d78655f5264f5p-90,
     0x1.f7fc35ad2e63dp-687, 0x1.65b7da8fd6fe3p-382, 0x1.a39f3acf5390ap-751, 0.0,
     0x1.a6f269ccdac9ep-730, 0x1.d8dbe0911dff1p-199, 0x1.bbe050ffce255p-806,
     0x1.6a01feb88ff14p-22, 0.0, 0x1.f9bd3b4a26dc9p-189, 0.0, 0x1.afef652c2f185p-839,
     0x1.9370a853937f5p-504, 0x1.3f14d88dc99b6p-453, 0x1.57ea8da848f18p-30, 0.0,
     0x1.6e3868391e506p-369, 0.0, 0.0, 0.0, 0x1.4909d821795acp-101,
     0x1.ad5077b48d159p-10, 0.0, 0.0, 0.0, 0x1.34f63a9914692p-758,
     0x1.90190d5d104fp-231, 0.0, 0.0, 0.0, 0x1.1a07cc8f52f7dp-515, 0.0,
     0x1.bf930ef382d5fp-331, 0x1.29963a484cbcap-944, 0.0, 0x1.b84f15426650cp-668, 0.0,
     0x1.5a970ef8341cdp-385, 0x1.05aa84f400e19p-380, 0.0, 0x1.016fc170d79cdp-313,
     0x1.7e07cec36b24dp-541, 0x1.63c3a3bb286f9p-199, 0x1.7a0027f5e700dp-623,
     0x1.57ea20e81172fp-769, 0x1.845c2edb32935p-991, 0x1.38e83b1c4a4c6p-528,
     0x1.1e1a7d8c99121p-602, 0.0, 0.0, 0.0, 0x1.2c33d6fe15879p-680, 0.0,
     0x1.59d44b1a7ffeap-955, 0x1.11256940b57aep-392, 0x1.59134272032ccp-14,
     0x1.df5d91f0f13a2p-913, 0x1.59260f0b09b4fp-325, 0x1.b475230ff459ap-610, 0.0,
     0x1.2a89483c3314ap-997, 0.0, 0x1.14e9c7b8931a8p-786, 0.0, 0.0,
     0x1.34cbcfb301ea2p-211, 0x1.c28b667f5ade7p-685, 0x1.50fdc18fecdd4p-143, 0.0,
     0x1.9815fb69158d1p-835, 0x1.035dacc8bc327p-778, 0.0, 0x1.17bd1d2dff936p-220, 0.0,
     0x1.34fce7e63041ep-1019, 0x1.1efa234180d1ap-764, 0.0, 0.0,
     0x1.b239290378b78p-712, 0x1.556bac7077ce1p-660, 0.0, 0.0, 0x1.01dc9aa981a17p-222,
     0x1.0a54f97215433p-731, 0.0, 0.0, 0.0, 0.0, 0x1.3043138bb8ce5p-728,
     0x1.274032d2bebf5p-856, 0x1.ecf5a910981d7p-195, 0.0, 0.0, 0x1.b21b4371dddep-264,
     0x1.8954fb1f7f61ap-962, 0x1.362a4ec3685c9p-285, 0x1.364bef0780a48p-978, 0.0, 0.0,
     0.0, 0x1.8f3da8bb2340bp-445, 0x1.fe4188251ea57p-77, 0x1.160ba9b9fecaap-843,
     0x1.d44e61d53bb43p-389, 0x1.037b912a23e9ap-426, 0x1.ef2690b2e1f0ep-581,
     0x1.ee7339c84b8bbp-811, 0x1.64e0f8804f482p-71, 0.0, 0x1.1a1876e2ad515p-886, 0.0,
     0x1.4567b5aaf1bdcp-949, 0.0, 0x1.30c680f8145f6p-592, 0.0, 0.0,
     0x1.72f632fbbea74p-776, 0x1.a6938194d4743p-1018, 0x1.7f94680871d2bp-1013,
     0x1.84715307bc24dp-881, 0.0, 0.0, 0x1.3dc84e0fa4f3cp-967, 0x1.8c25dd76aacaap-86,
     0.0, 0.0, 0.0, 0.0, 0x1.f7199a8bb238p-158, 0x1.e22d0a06643bbp-709,
     0x1.ca81e45dbb51fp-209, 0.0, 0.0, 0.0, 0x1.1898028e8eb57p-532, 0.0,
     0x1.ece4ca56d742fp-799, 0.0, 0x1.824eabccef6fbp-609, 0x1.535c90ddc2b3bp-328, 0.0,
     0x1.b9bebf3b9b029p-80, 0.0, 0x1.25a8896d3fd71p-176, 0.0, 0.0,
     0x1.ec05e3e6aaa2fp-502, 0.0, 0.0, 0.0, 0x1.359de54917febp-264, 0.0,
     0x1.937de9ebbd4ccp-728, 0x1.84baba38a83c9p-130, 0x1.7f3a8d9d88563p-953, 0.0,
     0x1.8f14e5fc4eb28p-450, 0.0, 0x1.b4cc98c8d3a57p-226, 0x1.993eabf14d11fp-60, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f05ec2bb0230fp-873, 0.0, 0x1.168f4fa8efa9dp-964,
     0.0, 0.0, 0.0, 0x1.8bc33a20f0a2p-718, 0.0, 0.0, 0x1.0f32aee9d0ed1p-161, 0.0, 0.0,
     0.0, 0.0, 0x1.91ac9fa32df1fp-662, 0.0, 0x1.aecbc4d6a148dp-563,
     0x1.984282c4f567fp-332, 0x1.fc9d7abde5b3bp-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1ca05e0e496bfp-429, 0.0, 0x1.d08cba1780c7ep-720, 0x1.706e417a67229p-586,
     0x1.3d62c3087c9c6p-679, 0x1.6b26030f206c7p-798, 0.0, 0.0, 0.0, 0.0,
     0x1.53b1fad2d9863p-384, 0x1.840e2b9378e6fp-150, 0x1.e7f0cc13d6acbp-624,
     0x1.dec8f6e414b67p-968, 0x1.a5f25c1cea046p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5543582f1977ep-286, 0x1.5a17c706d46edp-666, 0.0, 0x1.769287bede667p-9, 0.0,
     0x1.d76a8a6a4e48fp-184, 0x1.44dbabb0f7a52p-29, 0x1.f4644c35ac2fep-394, 0.0, 0.0,
     0x1.4a2797d6fed15p-147, 0x1.c50ce5da9a41ap-862, 0.0, 0.0, 0x1.ed02162eda2e1p-441,
     0.0, 0.0, 0.0, 0.0, 0x1.128b9ddd838bp-144, 0.0, 0.0, 0.0, 0x1.d8f0e48989873p-877,
     0x1.f454a53b48cacp-106, 0x1.6e0af151a2bb1p-588, 0x1.a81f8329fc1cep-793, 0.0, 0.0,
     0.0, 0x1.2d4e06d8f9e8bp-623, 0.0, 0x1.f48bb32ff668ap-817, 0x1.5c050f60f5abdp-289,
     0.0, 0x1.7a1b184e07344p-836, 0x1.ee153d6856516p-697, 0x1.8199e2dc8d3dcp-741,
     0x1.c307eef8976fap-158, 0.0, 0.0, 0.0, 0x1.206d5a2273345p-993,
     0x1.66e7169eab57p-608, 0.0, 0.0, 0x1.9a16b21f22ea8p-253, 0x1.0fc11d0348091p-124,
     0.0, 0x1.930dd55900bcfp-193, 0x1.a68f56c4c4c89p-258, 0.0, 0.0, 0.0, 0.0,
     0x1.3812fff698e6fp-210, 0x1.ece9a3e84097dp-39, 0x1.5f2e1d94bcbe4p-1001,
     0x1.eae22f4168ee1p-207, 0.0, 0x1.aa37294012d48p-473, 0.0, 0x1.17bad74d62f42p-62,
     0x1.ee57954d19f79p-482, 0x1.831feb2051ac5p-136, 0.0, 0x1.96a64ef0f26b7p-13, 0.0,
     0x1.6906a47fc1c5cp-225, 0x1.98ec26fdcadcbp-837, 0x1.3cb0554ac97f8p-850,
     0x1.fc255799570f8p-568, 0.0, 0x1.32e138dfe1225p-856, 0x1.0f5c0841f4bd3p-966, 0.0,
     0x1.9a22fc250cc55p-641, 0.0, 0.0, 0.0, 0.0, 0x1.13366d895f0e3p-324,
     0x1.56a0e5d1fb4bp-946, 0.0, 0x1.f5ff232a60acbp-906, 0x1.cd83a797c665p-985, 0.0,
     0.0, 0x1.1f7e5fe446cffp-730, 0x1.649021c0893cbp-793, 0.0, 0x1.7955ee23aeb0bp-499,
     0.0, 0.0, 0x1.e7641d7b76f5p-518, 0x1.91eae72054cep-544, 0x1.aa5646f65ee2fp-920,
     0.0, 0x1.b822bba768041p-314, 0.0, 0x1.b12564dc92d45p-833, 0.0, 0.0,
     0x1.74d42b92483c2p-867, 0x1.db10abb5f1ba1p-1016, 0.0, 0x1.777f1588717acp-831,
     0.0, 0x1.a0d6b700983fep-850, 0x1.0a14c249381fdp-691, 0x1.8f3a3dc0ecd87p-356, 0.0,
     0x1.1df877d1c6a6fp-437, 0x1.cb6c2566f253bp-884, 0x1.3a16d3ad1bad6p-159,
     0x1.d1c7dce50a8c7p-218, 0x1.de8b06313fd74p-698, 0x1.19d9a70c08e22p-961,
     0x1.e4b1d9dcdd82dp-208, 0x1.f3c00c987edb6p-996, 0x1.5143764c36c64p-808, 0.0, 0.0,
     0x1.29948fd72a164p-784, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49be8d4c71df1p-509, 0.0,
     0x1.91c66301825e6p-478, 0x1.12c90672280cfp-511, 0x1.7413c3cc2c175p-650, 0.0,
     0x1.e1daefadc3835p-989, 0.0, 0.0, 0x1.860df41d4890dp-330, 0.0, 0.0, 0.0, 0.0,
     0x1.be850ab7be43cp-971, 0x1.2d053e8ac4594p-106, 0.0, 0.0, 0.0, 0.0,
     0x1.5eb37bd920237p-134, 0x1.018a67817e98bp-266, 0.0, 0x1.4f173182e4bfdp-560,
     0x1.eea07a411c2dfp-835, 0.0, 0.0, 0x1.b4f98414a2a3dp-858, 0.0, 0.0,
     0x1.d0ffec14e0258p-158, 0x1.e846adf56a36ep-203, 0x1.0d9f7a992506cp-287, 0.0, 0.0,
     0.0, 0x1.75929d3f31e91p-617, 0.0, 0.0, 0.0, 0x1.55e34acc2372ep-397,
     0x1.29642d9e30c89p-873, 0.0, 0.0, 0.0, 0x1.bd86a9216b846p-768, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9c65c28711e64p-5, 0.0, 0x1.315a72c3332fbp-414,
     0x1.d407df1549fb3p-216, 0x1.55f5bc7c5b59bp-564, 0x1.a77225f51a423p-264, 0.0,
     0x1.9c6b6d53d8faep-800, 0x1.5fe9e457fb15bp-68, 0x1.1ade8f574c5f7p-344,
     0x1.d57632a23e58cp-285, 0.0, 0.0, 0.0, 0x1.45f88ed7169c2p-780,
     0x1.f9d63c871d4acp-690, 0.0, 0x1.a707f4b4dac14p-331, 0.0, 0.0,
     0x1.dd2412ba40a83p-836, 0.0, 0x1.4a14a95144d9bp-1021, 0x1.ccdcc23376407p-388,
     0.0, 0.0, 0.0, 0.0, 0x1.0dea9673e3986p-256, 0.0, 0.0, 0.0,
     0x1.492ad1a3d2be6p-573, 0x1.47495c8b9d5f7p-301, 0.0, 0.0, 0x1.e5a36527af362p-129,
     0x1.78f075ebdcdffp-59, 0.0, 0.0, 0x1.685fd136e4cf6p-946, 0x1.27d2af47535a8p-585,
     0x1.95fae4ef08a4dp-591, 0x1.95e727d3f6e07p-319, 0.0, 0.0, 0x1.9f102817d9783p-655,
     0.0, 0x1.6154219e06d3bp-952, 0x1.1b4c6aebd441fp-194, 0x1.b808e42d6eea2p-565, 0.0,
     0x1.d7d695c6d2fbbp-100, 0.0, 0x1.f5255dfeee17ep-696, 0.0, 0.0,
     0x1.6e4a402031c75p-122, 0x1.3735dc24c926dp-427, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6a5588d6838d5p-500, 0.0, 0.0, 0x1.c6d978cc2d712p-151, 0.0, 0.0,
     0x1.0d6eddb2f16a2p-1022, 0.0, 0x1.f746bec853828p-568, 0x1.e6b2edb30b63p-8,
     0x1.91693628931d1p-92, 0x1.9771317990809p-798, 0x1.ad95f0912d9f3p-621,
     0x1.549b14147806ep-841, 0x1.e36ed0a51bd3p-728, 0.0, 0x1.c5a9254902308p-923, 0.0,
     0.0, 0x1.9feab8ad4473p-263, 0.0, 0x1.5dadb2c4631f8p-5, 0.0, 0.0, 0.0,
     0x1.601e6eaf8bbb7p-688, 0x1.92ceddb3f368cp-495, 0x1.fbd23983ff239p-606,
     0x1.0506a43df2151p-517, 0.0, 0.0, 0x1.2ffdc3271aa58p-585, 0x1.1c9d67b79a85dp-507,
     0.0, 0.0, 0.0, 0x1.65b07996e7434p-988, 0x1.ea96e69534c79p-603, 0.0,
     0x1.0bde98e4e369fp-435, 0.0, 0.0, 0.0, 0x1.5397eb0474823p-86, 0.0,
     0x1.b6f021d23277dp-154, 0.0, 0x1.324b3fee5dda8p-376, 0.0, 0x1.f6ac77a7c8f4bp-862,
     0x1.e774ac6314433p-667, 0x1.ce9b5d22b5e59p-191, 0x1.b26856fb928bfp-776,
     0x1.d1786b7541142p-119, 0.0, 0x1.5102080d325e7p-4, 0x1.3d672d97e0089p-660, 0.0,
     0x1.64ab7419542d2p-787, 0x1.d91a2e559e40cp-322, 0x1.9080342fd77e8p-478,
     0x1.71a2469f8cd31p-407, 0x1.8a2cc6a3e823p-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab840289e5c01p-656, 0.0, 0x1.3a4ee043c4261p-269, 0x1.6d5cc9f533e3fp-240,
     0x1.e511a3a249825p-266, 0x1.281bd43524a7ap-596, 0x1.fe9d01246dfep-825,
     0x1.f7b406c1df6ddp-754, 0.0, 0.0, 0.0, 0x1.00972a6f6c103p-655,
     0x1.adabe0eafd485p-945, 0x1.c0acd49cfbf62p-669, 0x1.6d3fbcd2e433bp-822,
     0x1.ec8f88058d70dp-199, 0.0, 0.0, 0x1.7c14ba5141e38p-9, 0.0,
     0x1.0888bedbff113p-933, 0.0, 0x1.ea4457005f163p-14, 0x1.2b69899d6b331p-441,
     0x1.e949ca85ec801p-81, 0x1.e386fc1d1addbp-437, 0.0, 0.0, 0x1.c75bfbcc86bfcp-880,
     0.0, 0.0, 0.0, 0.0, 0x1.fcad46b960e64p-362, 0.0, 0x1.b7914cfc3eeaap-437,
     0x1.e0b3390c60ad9p-115, 0.0, 0.0, 0.0, 0.0, 0x1.8ddac17b427f1p-614,
     0x1.e2dceaf8cdfe2p-123, 0.0, 0.0, 0.0, 0x1.e59b09f33f102p-3,
     0x1.7fa3bc36b3a8fp-624, 0x1.4431640365c72p-776, 0.0, 0.0, 0.0, 0.0,
     0x1.8a9b16c765e0ep-533, 0x1.c02977c2ce158p-383, 0.0, 0.0, 0.0, 0.0,
     0x1.5a2949bed8029p-221, 0.0, 0.0, 0x1.c5b65dc6a8681p-145, 0x1.bc50ce4dd6a5cp-314,
     0.0, 0x1.a46aebb23c379p-341, 0x1.b4567484ba9a8p-351, 0x1.3ef15b248f2dp-914, 0.0,
     0x1.7e3813693f776p-1020, 0x1.9e8b574020316p-830, 0.0, 0x1.44a532589987cp-565,
     0.0, 0.0, 0.0, 0x1.b6f0a1df2a009p-1006, 0.0, 0x1.9f76492a88514p-1, 0.0, 0.0,
     0x1.ff96ef0fa5f93p-678, 0x1.e7b89b2bb97b4p-974, 0.0, 0.0, 0x1.4f50b0629f2e3p-3,
     0.0, 0x1.a31915fbb0c6dp-305, 0x1.fadbae9c53223p-754, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0dfecfdbc1d1fp-212, 0x1.cadddacbb7d41p-640, 0x1.0ec82937d303ap-39, 0.0, 0.0,
     0.0, 0x1.aa9e1dd650d1cp-173, 0x1.e4bd317936e4ep-608, 0.0, 0x1.ac1be73a6c2c4p-453,
     0.0, 0.0, 0x1.19c6167871dd4p-1017, 0x1.6711a32496c79p-372,
     0x1.dc5fbf0426feep-289, 0x1.8b1b7d9872282p-174, 0x1.2936fa567a479p-822, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.302ffd85dc411p-601, 0x1.e386aa65ef0ebp-348, 0.0, 0.0, 0.0,
     0.0, 0x1.6cd22043a6e04p-490, 0.0, 0x1.648df8576c4a5p-702, 0.0,
     0x1.3bcb8e8e694f4p-562, 0.0, 0.0, 0x1.41f16a40b23c6p-276, 0.0,
     0x1.f306d758a779dp-184, 0x1.92ae809f4a90cp-200, 0x1.ac456a7a543d2p-190, 0.0,
     0x1.29729ccebb98fp-509, 0.0, 0x1.80f9c2c89d1fap-134, 0x1.6b7856a60fc9fp-805,
     0x1.fd07b068ee538p-570, 0x1.916b0aeb29e67p-555, 0.0, 0.0, 0.0,
     0x1.b1a9c6ab2df68p-235, 0.0, 0.0, 0.0, 0x1.4645a1ae87e28p-275,
     0x1.d352c1adaeb91p-963, 0x1.54efad7818a77p-99, 0x1.61c5ea9a33fb1p-986, 0.0,
     0x1.9ddb9c4839bf9p-608, 0x1.f9f6a3028ab15p-606, 0x1.52bc42140494dp-878, 0.0, 0.0,
     0x1.e600e0809f598p-577, 0x1.18fd17bf3bfa1p-996, 0x1.07684166558ffp-247,
     0x1.d8316b47ea943p-444, 0x1.e67b1c39310f5p-671, 0x1.79bd3932464c7p-1012,
     0x1.ac6b37f5b8de2p-229, 0.0, 0x1.2de998cb857e1p-172, 0.0, 0.0,
     0x1.bc0d737fd1701p-22, 0.0, 0.0, 0x1.05009823b3ca4p-143, 0.0, 0.0,
     0x1.7b21e0a6084afp-766, 0x1.0b208d14d0976p-530, 0x1.788077d07225dp-925,
     0x1.a066548023139p-411, 0.0, 0.0, 0.0, 0.0, 0x1.a22f2392ec01dp-407, 0.0, 0.0,
     0x1.d002ce6f3ad9fp-949, 0x1.27794df3f9defp-741, 0x1.4ff10e7d8fba6p-313, 0.0,
     0x1.7a3cce9e77f99p-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d699e6caa4dap-921, 0.0,
     0.0, 0x1.5a77ff4a94e73p-686, 0x1.9699c292caf35p-705, 0.0, 0.0, 0.0, 0.0,
     0x1.26e20f6e46bfap-439, 0x1.df978dd9426c4p-465, 0x1.7c9e38962f067p-367,
     0x1.05b70081c643bp-397, 0x1.148cd8df1375ap-580, 0x1.cd6cf971223c3p-958,
     0x1.68f508183bad5p-168, 0x1.cd779ec62325ep-520, 0.0, 0.0, 0x1.94eb198ff4942p-733,
     0x1.bf650373e7a9dp-632, 0x1.34651c4a468d2p-594, 0.0, 0.0, 0x1.54a186e8089c2p-664,
     0.0, 0x1.3371e82186e2fp-951, 0x1.d1353b12c622dp-401, 0.0, 0.0, 0.0,
     0x1.9443f5cb3db02p-573, 0.0, 0x1.ec957e251b0f4p-987, 0.0, 0x1.ed34354107a17p-788,
     0x1.ce36b9c79d019p-383, 0x1.e6a6eff91edaep-479, 0x1.40da3bef3b4b8p-292, 0.0,
     0x1.4189cb03e96d8p-621, 0x1.2b7b7a3ab6ca8p-38, 0x1.5b2434a19f848p-249, 0.0,
     0x1.496749224a369p-795, 0.0, 0.0, 0.0, 0x1.3fdfc23d0940cp-119, 0.0, 0.0,
     0x1.64af75eca7e18p-38, 0.0, 0.0, 0x1.a55b7327bdc22p-738, 0x1.6a15cc25472f9p-124,
     0x1.02fb7ff2a0828p-65, 0x1.7880ca130871ep-311, 0x1.d06e7400273a1p-498,
     0x1.f16a56d7fc28fp-84, 0x1.2ab233ca4d793p-650, 0.0, 0.0, 0x1.2bf9c3ea074e2p-208,
     0x1.0967244fdee7dp-314, 0.0, 0.0, 0x1.f61fed87cae9bp-677, 0x1.5203c176385f6p-905,
     0x1.b8a8d537964bap-332, 0.0, 0x1.415444409266ap-425, 0x1.0de7a7b611628p-435,
     0x1.d5265187decd3p-450, 0x1.1540ecfec5769p-621, 0.0, 0x1.bddfd15ef9191p-106,
     0x1.2822913870869p-863, 0x1.e8c785db25a6cp-784, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77815e1e38a5p-803, 0x1.8aaad2eea615ap-28, 0x1.f3fe6a4fa9594p-260, 0.0, 0.0,
     0.0, 0x1.85de1d05e63a1p-351, 0.0, 0x1.b7e0792d6271bp-704, 0.0, 0.0,
     0x1.532a8ad02c6ebp-705, 0x1.026df665a471ap-810, 0x1.96fd35c234c8cp-126,
     0x1.826263dca6fd3p-814, 0.0, 0.0, 0.0, 0.0, 0x1.b52a10f37b7f8p-573, 0.0,
     0x1.c6cf139d9801ep-406, 0x1.14f31c1f7b339p-249, 0x1.d345e8a0b5ed4p-426, 0.0, 0.0,
     0x1.bdacaa8e63c31p-809, 0x1.1560d1c9f4042p-150, 0x1.0c5667c770583p-280, 0.0, 0.0,
     0.0, 0x1.a44f32c91f274p-371, 0x1.a7ba8afb20067p-11, 0.0, 0x1.90a4786d7bf85p-532,
     0.0, 0.0, 0.0, 0x1.5ea39c821f614p-770, 0x1.cd008f03a8e32p-178,
     0x1.521edaee9d449p-866, 0x1.d473bfe8222p-925, 0.0, 0.0, 0x1.7c49e630a70dep-248,
     0x1.e7fdc473c5709p-659, 0.0, 0.0, 0x1.14ccdf9631ec1p-89, 0.0, 0.0, 0.0, 0.0,
     0x1.290e9bbf09a66p-945, 0.0, 0x1.00ece2d0c0af8p-167, 0x1.1fe3f6c253b6p-880,
     0x1.b9f7887e158cbp-829, 0x1.646c78428bd83p-289, 0.0, 0.0, 0.0,
     0x1.e432aeab1acfdp-419, 0x1.93a8a56ebe2dcp-212, 0.0, 0.0, 0x1.7b8fd7ae01205p-189,
     0.0, 0x1.121975bf81545p-693, 0x1.6188c90c2f3bbp-188, 0x1.ce4869bf04dbp-222, 0.0,
     0x1.5243f890ec818p-353, 0x1.3d8f4d42b7466p-493, 0x1.2c82319b7c412p-781, 0.0, 0.0,
     0.0, 0x1.3d8296191da7p-266, 0x1.949440c6b225bp-608, 0.0, 0x1.58a70ac69ecep-384,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b8014b55bdd9p-406, 0x1.53b3d08f41f85p-254, 0.0,
     0x1.4bce8fdebc26dp-948, 0x1.7b78580ac7cc6p-448, 0.0, 0.0, 0.0,
     0x1.71ce60f8c079ap-279, 0.0, 0x1.fc24f557029b6p-314, 0.0, 0.0, 0.0,
     0x1.bc19ea22ceb1cp-95, 0.0, 0x1.52611f200292fp-927, 0x1.ba4fb15e99a5bp-387, 0.0,
     0x1.e29b0d92fa207p-11, 0x1.4edd5121660e5p-802, 0.0, 0x1.a5355678873dcp-643,
     0x1.743be94339ffcp-998, 0.0, 0x1.ac054713d2731p-595
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
            tmp1 = Sleef_expd2_u10avx2128(tmp0);
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
    printf("Sleef_expd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
