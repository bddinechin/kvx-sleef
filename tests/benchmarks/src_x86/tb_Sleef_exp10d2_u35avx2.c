/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d2_u35avx2128.c --function Sleef_exp10d2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
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
     0.0, 0.0, 0x1.44db69d12ce5ap-228, 0x1.7a0191c0fd2a7p-173, 0.0, 0.0,
     0x1.39afe41baa3fp-966, 0x1.9e059eb1834b4p-554, 0.0, 0.0, 0x1.f42acd273f83bp-211,
     0x1.e09f187c61619p-796, 0x1.cbbaaba4c19e5p-916, 0.0, 0x1.8bb507468e668p-965, 0.0,
     0.0, 0x1.6753aa28256e3p-931, 0x1.154289a610fd3p-16, 0.0, 0x1.d510de3f4a2b3p-604,
     0x1.c106f50376ec8p-93, 0x1.1570ec7eed6fap-189, 0x1.7393eea3c5034p-120, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.768d83a86ded3p-585, 0.0, 0.0, 0x1.620e6348e4275p-557,
     0x1.e7c1c265f227ap-1007, 0.0, 0.0, 0x1.9df2081e9f556p-614, 0.0,
     0x1.d05285d9de099p-774, 0x1.06d86e9d16f71p-826, 0x1.273c6add0c14ep-348,
     0x1.b6e175f21de67p-282, 0.0, 0x1.b194d9fcbf60ap-478, 0.0, 0.0,
     0x1.e3652a579221ep-82, 0x1.432e66d13369ep-505, 0x1.d2d585ec9f668p-196,
     0x1.644d7f9a29fb7p-433, 0x1.5a3a569e19a28p-529, 0x1.5822f21bbf4bcp-953, 0.0,
     0x1.49e1fc9b4a7b6p-966, 0x1.a9de55f38d8bep-110, 0x1.bc39195d7d802p-895, 0.0,
     0x1.c387aa3530d3fp-1, 0x1.829a6c6f14adp-819, 0x1.2b9a4ff611ca5p-234, 0.0,
     0x1.c20f0c428ba22p-509, 0x1.d95384fc29352p-569, 0.0, 0x1.3b54bcabba7dcp-540, 0.0,
     0x1.b1e3c1d12dad4p-994, 0.0, 0.0, 0.0, 0x1.a57d3b295b64fp-983, 0.0,
     0x1.87db9add92defp-644, 0x1.65f62ea6e7ccep-219, 0x1.702c696b289ep-239,
     0x1.8637913961391p-171, 0x1.2e16d3afb95c4p-728, 0.0, 0x1.50ca397943ee4p-335, 0.0,
     0.0, 0x1.edd494edef052p-611, 0x1.7e9bee7606b3ap-550, 0.0, 0x1.aedf2d5f81a3bp-99,
     0x1.e7f82dbebe8ccp-955, 0.0, 0.0, 0x1.5c8f2b85b169p-313, 0x1.7de2f882a3237p-511,
     0.0, 0x1.79a3e78d2c9abp-361, 0.0, 0.0, 0x1.19b2355e9d951p-220,
     0x1.06424bb5ab2b8p-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f04387e3690dp-708, 0.0,
     0x1.3e087f652244bp-1, 0x1.38af01ab6b789p-752, 0x1.a7bfa669f8e7ep-613,
     0x1.a18112fc14e61p-115, 0.0, 0x1.378be6c382a11p-100, 0x1.ad5f2e771f8bap-814,
     0x1.d14df296a7acep-395, 0.0, 0.0, 0.0, 0.0, 0x1.356c2bc2a6f38p-862,
     0x1.129d3dc487998p-811, 0.0, 0.0, 0.0, 0x1.fcf6521139b18p-515, 0.0,
     0x1.43ee4bc0ec2aap-1004, 0x1.5adb493a63f84p-910, 0x1.4ba1185f477bap-98,
     0x1.7fb711ea00adfp-27, 0x1.f4665557001f3p-270, 0x1.faa485ef56b4dp-788,
     0x1.8d2d8f2c0fd03p-856, 0x1.eda4a00b6d60cp-719, 0x1.4f3bd2cd65a93p-670, 0.0,
     0x1.2eba970b80316p-960, 0x1.d80a6b7c8b23ap-568, 0x1.fda5da2bf37bfp-381,
     0x1.a80b613caac02p-607, 0x1.83282009196a2p-701, 0x1.f4612c41316cdp-603,
     0x1.64858fe192811p-892, 0x1.fac2788a8ce3cp-520, 0.0, 0x1.11a869fac3f2ep-333, 0.0,
     0x1.4f4112f7c1281p-29, 0x1.c20d2cd05c58p-390, 0.0, 0.0, 0.0,
     0x1.1362f58bcffe7p-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03eefd07d6be6p-672,
     0x1.cab4c5221e223p-269, 0x1.8cef906d84e1p-359, 0.0, 0.0, 0x1.8ca12a721f037p-267,
     0x1.fbd8e761ef287p-362, 0x1.6ac48c92bfaa9p-577, 0x1.3cbbbc499dbbfp-437,
     0x1.618cbed878935p-441, 0x1.14c9108cabfa8p-290, 0.0, 0x1.c2011e56ee418p-947, 0.0,
     0.0, 0.0, 0.0, 0x1.c3e6fee3ee93ap-310, 0.0, 0x1.d2fd9c6110398p-288,
     0x1.cd1969e408fa9p-938, 0.0, 0.0, 0x1.5f8079d3af777p-576, 0.0,
     0x1.30acb054a7927p-693, 0x1.8ce3fe62deeedp-103, 0.0, 0x1.2ce09d9a7dd8ap-356, 0.0,
     0.0, 0x1.0cfee5b033dd4p-781, 0.0, 0x1.904930cd11eb7p-773, 0.0, 0.0, 0.0, 0.0,
     0x1.0e63680193e02p-707, 0.0, 0.0, 0x1.1b5d86017afbbp-290, 0.0, 0.0,
     0x1.9218ebd5b5d83p-203, 0x1.1ab716428320ap-645, 0.0, 0x1.60372debe0a16p-151,
     0x1.3da88a1b49e7fp-896, 0x1.be04171e16e4cp-926, 0x1.44e6ec10aff69p-408, 0.0,
     0x1.688003552fa27p-528, 0.0, 0x1.65d0c6ca0d4ccp-37, 0x1.ebf8605aa7db9p-91, 0.0,
     0x1.4404916d9e20ap-716, 0.0, 0x1.e472104c4bd09p-360, 0x1.254a173ba067ep-702, 0.0,
     0.0, 0x1.4b102b6bd9d39p-402, 0.0, 0x1.125755f29d799p-607, 0x1.cfb2c01fb524ap-569,
     0x1.049d5cd454de8p-443, 0.0, 0.0, 0x1.14545118d9573p-92, 0x1.5ef4b714c773cp-271,
     0.0, 0x1.3f38cda7664eap-587, 0x1.8609daad72001p-183, 0x1.e3e03b2321695p-936, 0.0,
     0.0, 0x1.53e7b616df546p-759, 0.0, 0.0, 0.0, 0x1.ab9c7c448dc5ep-172,
     0x1.c783867c5a316p-640, 0.0, 0x1.806a2f52b933fp-612, 0.0, 0.0,
     0x1.7ec892989cb5ep-483, 0x1.1edd4f7057fe7p-569, 0.0, 0x1.bec8bbad9afedp-197, 0.0,
     0x1.9ce57f65c9231p-526, 0x1.73a47575e2cb1p-548, 0.0, 0x1.adfdf6d734cdep-613,
     0x1.32488ed34b1c3p-504, 0x1.923b6c0241a5ap-444, 0.0, 0x1.a69fe95372b3ep-838, 0.0,
     0.0, 0x1.63f161ca5f289p-885, 0x1.415f1dcc28169p-501, 0x1.0a3d8d1ed89bfp-214,
     0x1.061c1069b09b5p-365, 0x1.2ad451b26b742p-253, 0x1.dfd8b79ffc07cp-885, 0.0,
     0x1.1dd850974282cp-22, 0x1.7ccf18e79ae68p-811, 0.0, 0.0, 0.0, 0.0,
     0x1.cceecf94f517cp-732, 0.0, 0x1.be874406b2accp-612, 0.0, 0.0, 0.0, 0.0,
     0x1.b27102bc8896ep-512, 0x1.4543746294c5cp-169, 0x1.544cb43c80fdap-104, 0.0,
     0x1.d83f1e45f5a19p-611, 0.0, 0x1.0266f11ddd18p-509, 0x1.1a3296250c55dp-951, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e9bce5a7928cp-41, 0x1.77b9326c28572p-298,
     0.0, 0.0, 0x1.9b1feaafb202ap-364, 0x1.3c2a0e1d6041cp-868, 0x1.eb2d755b104e5p-338,
     0.0, 0x1.3c3b2949fd53ap-690, 0x1.5d320f36ee3a8p-375, 0.0, 0x1.a8903984f8036p-590,
     0x1.012c0f7c372d5p-83, 0x1.9253b214eadbcp-373, 0.0, 0.0, 0x1.866b44321101p-945,
     0x1.e069d2a89358cp-772, 0x1.dbe5d2725514ap-413, 0x1.266ccd31e531cp-708,
     0x1.f5b375abddd08p-102, 0x1.1fe41b03664e5p-604, 0x1.0a3786d0a0a17p-53, 0.0,
     0x1.5772e8da9f422p-1, 0.0, 0.0, 0.0, 0x1.c02c514fbf7cep-894,
     0x1.4a726f46d4ea6p-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b14773d87c943p-118, 0.0,
     0x1.6fefd24207c33p-960, 0x1.dc66d48412345p-669, 0x1.d05d1267c120cp-397,
     0x1.d21eef9f51142p-566, 0.0, 0.0, 0x1.2c406189eb8c2p-165, 0.0,
     0x1.6cb1234930facp-627, 0.0, 0x1.be07638cd23cfp-407, 0x1.c1b0dd4d63714p-192,
     0x1.10307d8a1b717p-217, 0.0, 0.0, 0x1.0c784cb8a23efp-976, 0x1.2604aa9d665dap-165,
     0x1.7b8f26276112cp-73, 0x1.30925686bb004p-985, 0.0, 0.0, 0.0,
     0x1.c3f590391ab54p-63, 0x1.4f08607a89a69p-851, 0.0, 0.0, 0.0,
     0x1.6cb252d931858p-995, 0x1.62c3f9f55a49ap-915, 0.0, 0x1.8677446809452p-818,
     0x1.3bc16ab09d987p-747, 0x1.92420b72a332ep-50, 0.0, 0x1.746e3e1edde6bp-568,
     0x1.4d72c1e28d4edp-4, 0.0, 0.0, 0x1.3541c5e1bdcbp-521, 0.0,
     0x1.7585c73ea1854p-873, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be616ee139e4cp-314,
     0x1.711cde9da38adp-848, 0.0, 0x1.83955e8a51ba6p-140, 0x1.c549bf2addc4p-20, 0.0,
     0x1.ce4f8e5b9ff6fp-529, 0x1.3b5dff1c9766p-222, 0.0, 0x1.23f096ee44ca8p-44, 0.0,
     0.0, 0x1.6fdfb6cfc0357p-647, 0.0, 0x1.5355cda08142ep-636, 0x1.16f6b7b110bc4p-365,
     0.0, 0.0, 0x1.725f3534cc322p-862, 0.0, 0.0, 0.0, 0.0, 0x1.8eb46134379d8p-1018,
     0.0, 0.0, 0.0, 0x1.d11352e992bep-852, 0x1.065d7603acf6ap-709, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.94c001dbcacdap-948, 0.0, 0x1.d86caa758361ap-466, 0x1.35dc26325b599p-860,
     0.0, 0x1.242a5334519c7p-68, 0.0, 0.0, 0.0, 0.0, 0x1.a57e5893828bap-448,
     0x1.6397d28e047ep-136, 0.0, 0x1.b29cfaeac22e2p-921, 0x1.e0b0ba61fbc88p-830, 0.0,
     0.0, 0x1.a6838569a83b5p-277, 0.0, 0.0, 0.0, 0.0, 0x1.ac27808eed42ap-93, 0.0, 0.0,
     0x1.0f13270ad363cp-680, 0x1.1baf2d0a1d6d7p-400, 0.0, 0x1.9b141a410775bp-471,
     0x1.c0bb9c009127bp-454, 0x1.91e577b1a8c56p-731, 0x1.c119a12b7721cp-811, 0.0,
     0x1.095a1bce5c69ep-240, 0x1.808c2f1379d94p-537, 0x1.331354c8b13f7p-463, 0.0,
     0x1.075efa61cb466p-137, 0.0, 0x1.7d5d16f4decfep-265, 0.0, 0.0, 0.0,
     0x1.b998883378ec3p-172, 0x1.e0740093eef36p-590, 0x1.27da15f53134cp-715, 0.0, 0.0,
     0x1.0697f4def2bd9p-928, 0x1.4af93fea18a88p-595, 0x1.791ae072a711cp-73, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.aa151146e4b75p-1022, 0.0, 0x1.82c44d619c623p-895, 0.0, 0.0,
     0.0, 0.0, 0x1.99187b988b109p-193, 0.0, 0x1.7e35526357739p-671,
     0x1.88cf667c48cdap-322, 0.0, 0x1.64a2726740e8p-381, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.498482202afc6p-297, 0.0, 0x1.7e4de3c451bc9p-366, 0.0,
     0x1.4c0b461d44c25p-575, 0x1.c8f22f6b1511ap-919, 0x1.d226b699afd77p-580,
     0x1.09777cc95e35cp-154, 0.0, 0.0, 0x1.dce242ea00cdbp-498, 0x1.1ccf4ef55f419p-653,
     0.0, 0.0, 0.0, 0x1.bf8f7c1c0fc75p-819, 0.0, 0.0, 0x1.aa3d4c6bae882p-13,
     0x1.6c3d0793597c3p-685, 0.0, 0.0, 0.0, 0x1.d07cedb0918a8p-540, 0.0,
     0x1.e8143025e13dap-801, 0.0, 0x1.48d8ea591a21fp-770, 0x1.b9dc74f1a3254p-969, 0.0,
     0x1.425d5d03a2a7p-496, 0.0, 0.0, 0x1.f105bd180507fp-465, 0x1.5960accaf0457p-912,
     0x1.2d6775ca725ebp-331, 0.0, 0.0, 0x1.406997a0ff14ap-625, 0.0, 0.0, 0.0, 0.0,
     0x1.c7d454ca693e9p-336, 0.0, 0.0, 0x1.729b8b47d1311p-183, 0.0, 0.0,
     0x1.74e22e627f17fp-963, 0x1.12fb3269e95c3p-205, 0.0, 0x1.dd38fef622a49p-108,
     0x1.8f948816626afp-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1932685fe42f9p-437, 0x1.9a9ea34ed54ecp-480, 0.0, 0x1.a1cff543d10c4p-404,
     0x1.5be0528604e3p-455, 0.0, 0x1.0f0c7fadd6e96p-869, 0.0, 0.0,
     0x1.2d627ca858383p-64, 0x1.1cd5e1d1cfa66p-966, 0x1.30b6e804fe6e9p-108,
     0x1.572094bfa01f5p-864, 0x1.c4b23c1ee30e1p-609, 0x1.7d1d5ef3efbb7p-921, 0.0,
     0x1.6a80c39ed3485p-91, 0x1.d2c9cb29dab68p-575, 0.0, 0.0, 0x1.e614e821eedfep-679,
     0.0, 0x1.c1f6bf7ab7012p-908, 0.0, 0x1.42e47688bea86p-31, 0x1.69c6bf3aa472fp-793,
     0x1.b25e211af3485p-404, 0.0, 0.0, 0.0, 0x1.29b64d5e906ccp-360, 0.0, 0.0,
     0x1.71d88af1c1c55p-545, 0.0, 0x1.351b45d12249dp-784, 0.0, 0x1.1cb3adf451118p-540,
     0x1.15dfbe064e412p-530, 0x1.68ca9e80a86d2p-907, 0x1.b0f4912e1519fp-637, 0.0, 0.0,
     0x1.d2d30a0c1a5a3p-577, 0.0, 0x1.28822a10bf874p-903, 0.0, 0x1.1c2cc326a660ep-490,
     0.0, 0.0, 0x1.a64c135439034p-848, 0x1.2b7c485fe07f5p-772, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a03f4a85d5d7ep-574, 0.0, 0x1.d9aa4d41f9be3p-208, 0.0,
     0x1.a7f729129b49fp-201, 0x1.5deabdc088decp-911, 0x1.19a411a07ad4cp-902, 0.0, 0.0,
     0x1.919e0969d9501p-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9e315301597bp-936, 0.0, 0.0, 0x1.9b1c2ef8510b4p-987, 0x1.edcda3df98362p-343,
     0x1.2dd40f6e4d025p-436, 0.0, 0.0, 0x1.cd50ba0704676p-271, 0.0,
     0x1.96a603b46268cp-1, 0.0, 0x1.8efd2694bbeaep-320, 0x1.a31bed8f7f99p-524,
     0x1.6da7ed18d1328p-487, 0.0, 0x1.7c4f975ca2637p-152, 0.0, 0x1.3b7837ed8c70cp-909,
     0x1.d548b7a650b5p-698, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.741633b6de9e7p-249,
     0x1.bfd3cf5c9afdap-181, 0.0, 0x1.9945602c9f7a2p-552, 0x1.ad88628b7d5c6p-931,
     0x1.aa03a9e069cd6p-985, 0x1.3c917b6bde728p-163, 0.0, 0.0, 0.0,
     0x1.698ca853806d5p-1015, 0x1.3898ecc3e033cp-673, 0.0, 0x1.d14f6bb6174ddp-873,
     0x1.4dfd2d6ec769bp-140, 0.0, 0.0, 0.0, 0x1.499de99032bbp-765, 0.0, 0.0, 0.0,
     0x1.2d7680aed8a46p-37, 0.0, 0.0, 0x1.562b2fe135c42p-500, 0.0, 0.0,
     0x1.674dae7ae9c74p-546, 0x1p0, 0.0, 0x1.7d70dabf40168p-138, 0.0,
     0x1.4fc2e7fe44905p-667, 0.0, 0.0, 0x1.d8e7e1eccb49ep-549, 0x1.3e9ee16c1d044p-262,
     0x1.1d1be529582bfp-115, 0x1.348c56a67238cp-528, 0.0, 0x1.742df55dc76e4p-117, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba4d9a479b232p-565, 0.0, 0x1.c2ddc814b8d05p-640,
     0x1.8d7c5a1092ae6p-703, 0x1.bc767954b6e03p-257, 0x1.bf47606e8780ep-478,
     0x1.c049f3a21466ep-959, 0x1.63075a36b572dp-493, 0.0, 0x1.e176db5a91e29p-866,
     0x1.af202822b3a56p-555, 0.0, 0.0, 0.0, 0x1.da0f3f82d667cp-423,
     0x1.8c7fb9e3a5121p-1012, 0.0, 0.0, 0.0, 0x1.433a31bcd475bp-817, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.308c1a95013cp-790, 0x1.6e8ca79a9aea7p-474, 0.0,
     0x1.d6839e6d244dep-356, 0x1.a1c103daaa05ap-380, 0.0, 0x1.8307fa0b361b2p-656,
     0x1.97a30f9a00cbbp-85, 0x1.af1a376a5f5dap-631, 0.0, 0x1.e8f6de0cd993ep-489, 0.0,
     0x1.fac595a16b125p-758, 0x1.ca3733c95f71cp-966, 0x1.5b2ce4e26c826p-954, 0.0, 0.0,
     0.0, 0x1.d8dd93eef4ad5p-487, 0.0, 0x1.3ff364f2f679ep-999, 0.0, 0.0, 0.0, 0.0,
     0x1.63ec4d77adba8p-676, 0.0, 0.0, 0.0, 0x1.1bad6b95a1c6ep-204,
     0x1.fe13952deabf7p-936, 0x1.91f8000f08b5cp-347, 0x1.efb2df4437239p-85, 0.0,
     0x1.c292d90dc82edp-619, 0.0, 0.0, 0x1.edbd55e14da24p-107, 0x1.be4d42c492aa6p-716,
     0x1.95bf928b61fdep-416, 0x1.3b0415bd6b619p-670, 0.0, 0x1.8c0049b093aa4p-889,
     0x1.0d6205eae0bb4p-776, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2ac1cecd81f09p-887,
     0x1.d84e0f84d3ae1p-461, 0x1.42afef3af76ecp-371, 0.0, 0.0, 0.0,
     0x1.59f999b30a909p-936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60a3a434c8891p-597,
     0x1.62ff7ee83b25p-751, 0x1.603363c6b90f4p-119, 0.0, 0x1.108b6cbd7188bp-968, 0.0,
     0x1.fd39ef1073529p-107, 0x1.40e262eb3a33ap-102, 0x1.5adbb7efa999dp-927, 0.0, 0.0,
     0x1.4dcd7828f4a4p-393, 0x1.48d0ba5a768dbp-181, 0.0, 0x1.1a21d0f8fb0e6p-22,
     0x1.fe1b486974034p-721, 0x1.657ebc59d29d1p-700, 0.0, 0x1.296f28554f187p-169, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f41169421da7p-51, 0.0, 0x1.d5769b5c1a299p-60,
     0.0, 0.0, 0.0, 0x1.0ba53095aee63p-268, 0x1.95c06a80a543dp-340, 0.0, 0.0,
     0x1.44cd8dc35dfccp-946, 0x1.05eddf0405de5p-97, 0x1.92f4a05e80a92p-721,
     0x1.d20b571b18ac8p-475, 0.0, 0x1.b32e95434d966p-146, 0x1.39d06bc89e00bp-1012,
     0x1.e0b258fdc1131p-448, 0.0, 0x1.98e1b26edc43p-77, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14c79519b87aap-229, 0x1.908223bb811eap-693, 0.0, 0.0, 0x1.0295e4f83a49cp-252,
     0.0, 0x1.1214c99235aadp-379, 0.0, 0x1.13e60f25b6b4cp-693, 0.0,
     0x1.478c64f66a998p-271, 0x1.bb93c8683aa28p-616, 0.0, 0x1.1acc1cd3ee3a4p-81, 0.0,
     0.0, 0.0, 0x1.e263acd279fb6p-204, 0.0, 0.0, 0.0, 0x1.a64792c0effa8p-785,
     0x1.46982d90995d6p-617, 0x1.632715d76c7f5p-689, 0.0, 0x1.cb42a4b673391p-6, 0.0,
     0.0, 0x1.76fe8285aa086p-737, 0.0, 0.0, 0x1.5327b3d3a1527p-701,
     0x1.56a25ca3d96fbp-742, 0x1.3c79f4070f246p-74, 0x1.1e696d0e35af4p-781, 0.0, 0.0,
     0x1.2c01b8fa43cfdp-683, 0.0, 0x1.0f34a3cfa4b26p-978, 0x1.d7a68b4f2f5ecp-534,
     0x1.bbbcd090358f4p-764, 0x1.37158dc6dd72dp-993, 0.0, 0.0, 0.0, 0.0,
     0x1.81fecf70cddb5p-241, 0.0, 0x1.3c49eb5a4fe13p-650, 0x1.ddc98ce9bed6cp-974, 0.0,
     0x1.071e1a543a9a6p-334, 0.0, 0.0, 0x1.7e5dbc1f02fdbp-407, 0.0,
     0x1.66a82bef30a03p-447, 0.0, 0.0, 0.0, 0x1.7235aec7de86ap-820,
     0x1.c7d162671edb9p-745, 0x1.f14506be4bffp-882, 0x1.5eacfc88fa045p-788,
     0x1.3fdf93717282dp-508, 0x1.05194d3891a16p-894, 0.0, 0.0, 0x1.730ff5fd1b221p-176,
     0x1.15409719e7e3ep-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39ea4451aa4d2p-606, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db7f91741a1d4p-904,
     0x1.1a57b818b2f86p-433, 0.0, 0.0, 0x1.f88fc0d4a1b8dp-2, 0.0, 0.0,
     0x1.8853cc37e0f66p-183, 0x1.13eb5f0790aedp-137, 0.0, 0.0, 0.0, 0.0,
     0x1.c42cb9feae471p-170, 0x1.97f126505f5fp-527, 0x1.1b08576d85f4ap-739, 0.0, 0.0,
     0x1.624aaed54e21dp-943, 0x1.97eebcaf40595p-583, 0.0, 0.0, 0x1.60df1700b093fp-442,
     0.0, 0x1.9e20a376ce9f9p-348, 0x1.a61a997f32e66p-775, 0.0, 0x1.204f56294e148p-949,
     0.0, 0.0, 0x1.17e2cb8d4fa23p-158, 0.0, 0x1.e732c01551068p-100,
     0x1.f3e5fe35587c9p-603, 0.0, 0.0, 0x1.5633ead798741p-325, 0x1.25a2dbb978dfep-267,
     0.0, 0.0, 0x1.f825619f5c38cp-713, 0x1.6600af5bfe019p-726, 0x1.210e79d6e5f97p-871,
     0.0, 0x1.8da8a9faa633fp-284, 0.0, 0x1.272908a6f121dp-184, 0.0,
     0x1.0b782489adb68p-274, 0.0, 0x1.7db79e058820ap-684, 0.0, 0x1.a16884eb4cb75p-750,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e5612d33edp-246, 0x1.b24734a0fadc6p-231,
     0x1.7dc67a61b955fp-69, 0x1.f6096b958c463p-211, 0x1.e11e3a60f6322p-224, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2ce6c46c1806fp-717, 0x1.fe8f9413755c2p-3,
     0x1.0c5ce6da201a7p-2, 0.0, 0.0, 0.0, 0x1.06263035ea271p-1016,
     0x1.e1af28ddab9a8p-78, 0.0, 0x1.8d9aa151b6543p-129, 0x1.ee33cf5528507p-107,
     0x1.316f6fa5f7da4p-502
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
            tmp1 = Sleef_exp10d2_u35avx2128(tmp0);
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
    printf("Sleef_exp10d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp10d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
