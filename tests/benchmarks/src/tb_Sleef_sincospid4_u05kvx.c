/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid4_u05kvx.c --function Sleef_sincospid4_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.ea4621d4c9c47p-679, 0.0, 0.0, 0x1.238d1975e97dfp-584,
     0x1.821166d3b195dp-681, 0.0, 0.0, 0.0, 0x1.48a745b1f77ddp-240, 0.0,
     0x1.1dc1c0e718b7p-787, 0x1.b33c9f597016bp-842, 0.0, 0x1.c23f9b562af0dp-55,
     0x1.92bf964cf858p-334, 0x1.8df3a10023522p-235, 0x1.641f6d6fdeba5p-710, 0.0, 0.0,
     0.0, 0.0, 0x1.5869a63f1f341p-956, 0x1.cd64385766819p-1, 0.0,
     0x1.6913393434728p-951, 0x1.5dc2c366ae56ep-326, 0.0, 0.0, 0x1.96e1add79d3ecp-719,
     0x1.0804afc072c97p-824, 0x1.97690f2473072p-1016, 0x1.24b2964afb9b4p-709,
     0x1.aadc367280155p-477, 0.0, 0x1.2a33fe908fb0bp-521, 0x1.e35845090472dp-691, 0.0,
     0x1.a33d070d5d514p-369, 0.0, 0.0, 0.0, 0x1.e5e39f20f56ap-752, 0.0,
     0x1.b17a12f9624a8p-638, 0.0, 0.0, 0x1.d60ad19f7159ep-195, 0x1.653ec2b4ca505p-830,
     0x1.a07bee86f95ccp-77, 0.0, 0x1.60c3eb291aecep-143, 0x1.64770fbb93c2ep-420,
     0x1.fdceb98ac271bp-407, 0x1.f895fbdb91b3bp-53, 0.0, 0x1.68d8130fb469p-394, 0.0,
     0.0, 0x1.7e2630ffb717fp-71, 0x1.15fc9d71e5a68p-345, 0x1.da35d5fd528a7p-862,
     0x1.6f548cffdf4b7p-535, 0x1.cec8018b224d5p-380, 0.0, 0x1.50366735185ecp-651, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3ecb633a177e7p-893, 0.0, 0.0, 0.0,
     0x1.d72efa4a429b6p-165, 0.0, 0x1.abe1fc9a8d3b2p-962, 0x1.73c9ee3af4b4dp-710, 0.0,
     0x1.8a9bdf0a2a346p-752, 0x1.f04005bf3629ep-97, 0x1.314b9e1180443p-1010,
     0x1.ef4ef98529563p-453, 0x1.d0da15de5c2bap-438, 0x1.52ca481a7ed4ap-295, 0.0,
     0x1.9d5fa5098c443p-944, 0.0, 0x1.f941ea60d01f1p-895, 0.0, 0x1.b0b8302eac11fp-761,
     0x1.888b4bdcd04ap-587, 0.0, 0x1.19a15e314026ap-21, 0.0, 0.0,
     0x1.9263c95b8882dp-360, 0x1.55ff82dcd39fdp-893, 0x1.93790e699ff42p-306, 0.0, 0.0,
     0.0, 0x1.b6020f1b72756p-454, 0.0, 0.0, 0x1.c99de4f746633p-40,
     0x1.b5b42259eef57p-935, 0.0, 0.0, 0x1.e5c261fe75677p-328, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.57aba4369345bp-717, 0x1.f8e1e7cf34ca2p-570, 0.0,
     0x1.ec4df7a6701f9p-198, 0x1.0860b4f96bc59p-819, 0x1.8a5ad3d2ed9adp-627,
     0x1.7ad64b1f3ed33p-960, 0.0, 0x1.0876b24d2d1ffp-426, 0x1.a0c989d5a6eeap-397, 0.0,
     0.0, 0x1.3c0eb2900e788p-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a19bb772958b8p-390, 0x1.ccfce5c6fd2afp-79, 0x1.7d4ce6ac5262p-77,
     0x1.07926ad319c3fp-286, 0.0, 0x1.58747502bd221p-38, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1c9c965aba24p-616, 0.0, 0x1.14c0fb7db2933p-774, 0.0, 0.0, 0.0,
     0x1.2f3e6d454b80bp-177, 0.0, 0.0, 0x1.93f6f4ef18655p-372, 0x1.4a030878bc3bcp-289,
     0x1.dc26ee8d69e82p-351, 0x1.2ef08d43329bp-379, 0x1.e92ba24a54c9p-537, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a92ea810572a6p-504, 0.0, 0x1.9a52ef9a7339p-532, 0.0, 0.0, 0.0,
     0x1.cb22648c6f4e5p-878, 0.0, 0x1.7b4a5258127e9p-709, 0x1.af9e308b6d4a3p-965,
     0x1.6ef1a0ad63cc6p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2d89ad7e20fcp-996,
     0x1.89535869d7769p-292, 0x1.5738780544be7p-213, 0x1.4f1a19fabd7ep-2, 0.0, 0.0,
     0x1.0ddf2b069bda5p-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68e8b272068c4p-622, 0x1.d20d50145dd2ep-981, 0x1.f35ee5a1b1ef2p-315, 0.0, 0.0,
     0x1.d8ab160e5fbbbp-134, 0x1.26a35eeea4f4p-438, 0x1.965d6ad91fed2p-603, 0.0,
     0x1.3ca8f248f6e9bp-196, 0x1.5f03941f1b6dep-134, 0x1.f55d7ac4f70d3p-77, 0.0,
     0x1.46d8c81e82861p-661, 0x1.ab1c26e9390cp-284, 0.0, 0x1.13e7bfa31f9c6p-27, 0.0,
     0.0, 0.0, 0.0, 0x1.8c9d6306ab379p-752, 0.0, 0x1.af45ac25aeb9p-548, 0.0, 0.0, 0.0,
     0.0, 0x1.84b8eb6b81995p-273, 0x1.a29d090062a1fp-211, 0x1.d96145e3570fbp-639,
     0x1.54dc03bcb4dd5p-481, 0.0, 0.0, 0.0, 0x1.8311c3de74011p-981, 0.0,
     0x1.44a53246a0dbap-281, 0.0, 0.0, 0.0, 0x1.46a5083220d6fp-16, 0.0, 0.0,
     0x1.29df502fb7a6fp-150, 0x1.bb0fd09d7aeafp-528, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b78ba9117b598p-508, 0.0, 0x1.2c82974b6106ap-1002, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.885bf2d418cap-848, 0.0, 0x1.a52a5c8e8adf9p-724, 0.0,
     0x1.575afb7a033e6p-909, 0x1.839181deca2ap-313, 0x1.50318c71abe82p-4, 0.0, 0.0,
     0.0, 0x1.098149bffc7dep-151, 0.0, 0x1.d3db4f77ae793p-736, 0.0, 0.0, 0.0,
     0x1.acd278850e931p-15, 0.0, 0x1.4fda77cd985dp-331, 0x1.a6d06b5b7525fp-229,
     0x1.9a0ddde42ef06p-900, 0x1.5edc856d4f271p-979, 0x1.4b5e9244619dcp-24, 0.0, 0.0,
     0x1.aa59332339e9ap-987, 0.0, 0.0, 0.0, 0x1.3c74b2fc54268p-554,
     0x1.099a1caecdefcp-121, 0x1.6189fb50fcabep-451, 0.0, 0.0, 0x1.9eb8abab150ebp-199,
     0x1.d7563fb58eb17p-866, 0x1.805719ebd2dep-242, 0x1.b71ecaf437e5cp-163,
     0x1.6fe4512cc4c41p-456, 0x1.e4e7b595fbc4cp-158, 0x1.b6d3ddb367f9cp-3, 0.0, 0.0,
     0x1.3db27e9c29bafp-304, 0.0, 0x1.46f03e980b9dep-158, 0.0, 0.0, 0.0,
     0x1.e5111e7dddb69p-1002, 0x1.2c9c479666fbdp-259, 0.0, 0.0, 0.0,
     0x1.dc2e8eea4302ep-784, 0.0, 0x1.dbb6124bb1be4p-513, 0x1.d16008e25f6bbp-877,
     0x1.49c4a2f31267ep-34, 0.0, 0x1.9efdc7e2b0e68p-757, 0.0, 0x1.aa344461adf85p-464,
     0x1.d9621551d69f7p-213, 0.0, 0.0, 0.0, 0x1.62bf2cf76dfbep-118, 0.0,
     0x1.ff4685e0742bbp-71, 0x1.7a735f740d3a7p-579, 0.0, 0x1.d2c015998356bp-584, 0.0,
     0x1.7fc6423757b5fp-234, 0.0, 0.0, 0x1.d641507859c9cp-260, 0.0, 0.0,
     0x1.e1e722a94cdcap-715, 0.0, 0x1.6d5c9f0462839p-312, 0x1.67b1b56e8e7f2p-437, 0.0,
     0.0, 0.0, 0x1.8d39c2d689986p-914, 0x1.b50085612ea74p-1001, 0.0,
     0x1.baba125cf51a7p-591, 0.0, 0.0, 0x1.70952564a6cf1p-896, 0x1.f2bb6539863fcp-544,
     0.0, 0x1.0664e59734c5dp-1021, 0x1.f172ec67a0c1ep-629, 0.0,
     0x1.63c72858ecb08p-736, 0.0, 0.0, 0x1.db72f8f8d5264p-167, 0x1.1ff5fb1129c69p-537,
     0.0, 0.0, 0x1.604c6eb2923e6p-690, 0.0, 0x1.eb2d5e1d345dp-38,
     0x1.6d6d559b3729p-25, 0.0, 0x1.904627bd3638cp-917, 0x1.71e1143ef3bfdp-254,
     0x1.73012dfc1bbb8p-981, 0x1.e3f1809394b4fp-393, 0x1.379e143e1e1b7p-807, 0.0, 0.0,
     0x1.3b58a210326dap-145, 0x1.ab8ab450f1e5cp-455, 0x1.44d31dd192906p-434,
     0x1.ed06ef500e176p-865, 0.0, 0.0, 0x1.ff159bd6bf363p-720, 0x1.674b5d575f35fp-342,
     0x1.3b6e651f3a2ccp-962, 0.0, 0x1.d4b938f041602p-663, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.83cd0bd15bd88p-569, 0.0, 0.0, 0.0, 0x1.b2be857071654p-928,
     0x1.3e27995fcbfabp-262, 0x1.bf6a64a2acaacp-727, 0x1.90ba6c9bac0cep-718, 0.0, 0.0,
     0.0, 0x1.761c41962fcd4p-774, 0x1.cb776a8326cedp-45, 0.0, 0x1.d861ddd068c3fp-753,
     0.0, 0.0, 0.0, 0.0, 0x1.9985fb45be26bp-312, 0.0, 0.0, 0.0, 0.0,
     0x1.b1d3bf6b1147fp-219, 0.0, 0x1.1de9c8254be73p-170, 0x1.3aff171b3c05ap-254,
     0x1.2b752969e2478p-630, 0x1.08de7fcbe1287p-51, 0.0, 0x1.e268a4cec627dp-88, 0.0,
     0x1.31807cae579ffp-90, 0.0, 0.0, 0x1.d783be1ead983p-561, 0.0,
     0x1.e31fff4f0f1ep-452, 0x1.236f45f2d3ce6p-523, 0x1.08f25767fde6p-711, 0.0,
     0x1.5478088e2422ep-903, 0.0, 0.0, 0x1.cf95385bf7f4ap-343, 0.0, 0.0,
     0x1.e49824faebdc5p-90, 0.0, 0.0, 0x1.816442f9830bp-487, 0.0,
     0x1.b18d198a0595bp-518, 0.0, 0.0, 0x1.cc8e7fce2800dp-926, 0.0, 0.0,
     0x1.74c62c44ba815p-280, 0x1.a93289494e811p-840, 0.0, 0x1.3a856c3064636p-977, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f02f2a2a5c30dp-453, 0.0, 0x1.d9d23869048ddp-492,
     0x1.bc0de9da3da83p-589, 0x1.07abf6e623b88p-223, 0x1.82760d943c785p-636, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.56f084bcf78f2p-853, 0x1.f289962d24fc5p-361, 0.0, 0.0,
     0x1.1ca7d2dce6bddp-272, 0.0, 0.0, 0x1.9302273e6c0bdp-368, 0x1.19b6731b91224p-479,
     0x1.9f4a826c64f16p-139, 0x1.7b419a010b686p-15, 0.0, 0x1.a45dd8da09ba5p-868,
     0x1.894c10646fbfdp-329, 0x1.f476f9aac5facp-833, 0.0, 0.0, 0.0,
     0x1.d5ed486f15a6p-567, 0x1.3fb707566b2ffp-821, 0.0, 0.0, 0x1.2199e8032f2ep-434,
     0x1.e9de02390a09dp-839, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.478a2fda40daap-643, 0.0,
     0x1.a871fffc1dc5p-462, 0x1.962c996c346c3p-766, 0x1.a9f867243dab9p-634,
     0x1.83916999033c1p-1001, 0.0, 0x1.a63aa6b21d717p-819, 0x1.afaf4e3d80216p-291,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59c5575ccc7ecp-924, 0.0, 0.0,
     0x1.24e8dea9ed28cp-575, 0.0, 0x1.f4cbdeccb1b68p-947, 0.0, 0x1.0f7469c37b7a4p-925,
     0.0, 0x1.80682129ab00dp-801, 0.0, 0x1.672f3b4be1e3bp-969, 0x1.5ebe1407f491bp-135,
     0x1.bfe9a01a1c555p-767, 0x1.1c88a25078ebbp-17, 0x1.91bcfbe7f269bp-270,
     0x1.6f5024aeec0dep-249, 0x1.69223ec9ed1f5p-908, 0.0, 0x1.eaf540bab7458p-599,
     0x1.66d854d7854a6p-139, 0x1.87e7ae3e83fc6p-38, 0x1.e55e714aaea48p-109,
     0x1.dbd81deb22c5ep-91, 0x1.105f021be7904p-749, 0x1.b5bb44b05b1b9p-587, 0.0,
     0x1.7995a7959730cp-284, 0x1.181ab462f5e96p-85, 0.0, 0.0, 0.0,
     0x1.8f092fcc5d3e5p-488, 0x1.4169c1972496fp-607, 0.0, 0x1.fc463ecb62bc2p-899,
     0x1.818831b2bc8f6p-947, 0x1.4bd92d11aa7fbp-761, 0x1.4d9640109d772p-728, 0.0, 0.0,
     0.0, 0x1.4788b8d297ba9p-458, 0.0, 0x1.b46c4c12bd1b9p-278, 0x1.7f98c184b8103p-792,
     0x1.8682156b5e304p-357, 0.0, 0.0, 0x1.ddd0e1bf35548p-476, 0.0, 0.0, 0.0, 0.0,
     0x1.27b46bb6284c3p-736, 0.0, 0x1.de166514cfaf6p-887, 0x1.c655df75b10c1p-690, 0.0,
     0.0, 0x1.74cfa8053d69bp-378, 0x1.f605906ca4466p-943, 0x1.9d1e24fb6d286p-556, 0.0,
     0x1.39fbe56a736f1p-789, 0x1.12fcef81dcc93p-257, 0x1.4883dcba31f86p-567,
     0x1.ca1ec33bb5b61p-42, 0x1.0f2e404094c97p-315, 0.0, 0.0, 0.0,
     0x1.fe0ba98b62715p-653, 0.0, 0.0, 0x1.ee8236badc609p-861, 0x1.d33e7fa6df162p-871,
     0.0, 0x1.c90c7dc198ecep-672, 0x1.abb1f1804c6dfp-793, 0x1.5d97b1180985dp-579, 0.0,
     0.0, 0.0, 0x1.1b33afee836e3p-978, 0.0, 0.0, 0x1.e04a46709e9acp-991,
     0x1.c96758fa2b471p-610, 0.0, 0x1.10228d91fa11cp-969, 0.0, 0x1.e5f1c0686bdb2p-964,
     0.0, 0x1.dffe8c3faedbap-251, 0.0, 0x1.135d5d3cca104p-721, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a28d8052b2f0dp-108, 0.0, 0.0, 0.0, 0x1.d3b10506ba293p-772, 0.0,
     0x1.aad20f68dbaa5p-543, 0.0, 0.0, 0x1.7bb15cafb45ddp-178, 0.0,
     0x1.36ae3cfdcd15dp-949, 0.0, 0.0, 0.0, 0.0, 0x1.77aed4b1dee49p-226,
     0x1.5df282af42456p-608, 0.0, 0.0, 0x1.eaf888b8aeb2fp-799, 0.0,
     0x1.0daa34625adfp-996, 0.0, 0x1.45cd4b586c82ap-319, 0x1.9c0aebfe8ba6bp-886,
     0x1.02f791af00aa2p-372, 0.0, 0.0, 0.0, 0x1.9aa50af14a639p-474, 0.0,
     0x1.a9e1b978b5506p-6, 0.0, 0.0, 0.0, 0.0, 0x1.a140f474b51aap-354, 0.0, 0.0, 0.0,
     0x1.743d47fd14437p-299, 0x1.166e32393de1ap-592, 0x1.1c8509d39e752p-30,
     0x1.f47803c4a6ddap-669, 0.0, 0x1.078711164b612p-615, 0.0, 0.0, 0.0,
     0x1.568164d981bcp-805, 0x1.fddcca38a9d9dp-826, 0.0, 0x1.de1967246dff7p-319,
     0x1.7adb0a45df4f5p-327, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0x1.e6b05cf67bb33p-359, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8235ea5716cd7p-784, 0x1.4638654964ed7p-55,
     0x1.6dfe588404efdp-623, 0.0, 0.0, 0.0, 0x1.50cc5dd0eaf84p-974,
     0x1.b876d9fa006d4p-144, 0.0, 0.0, 0x1.095b1002c28bp-741, 0x1.a0bc4461ef009p-17,
     0x1.f7d20008ef29ap-767, 0.0, 0x1.d8d8a16acbbf9p-462, 0x1.47662fe8066d9p-767, 0.0,
     0x1.961ae536f8ed4p-561, 0.0, 0.0, 0x1.ec5496bdce875p-443, 0.0,
     0x1.ce1cd82b7560ep-984, 0.0, 0.0, 0x1.1e04e32f6997ep-36, 0.0, 0.0,
     0x1.3dfe258a9344cp-1007, 0x1.18303946f6a0ap-349, 0.0, 0.0, 0.0, 0.0,
     0x1.5bc63d783d661p-290, 0.0, 0.0, 0.0, 0x1.7e88c33d4ae29p-458,
     0x1.3485566683b7cp-561, 0.0, 0.0, 0.0, 0x1.ae883e97315cbp-580, 0.0,
     0x1.b8a8e6091071ap-190, 0.0, 0.0, 0.0, 0.0, 0x1.c8f5b80b6154ap-728, 0.0,
     0x1.68993a12ea8f1p-853, 0.0, 0.0, 0x1.3af4621c1265dp-564, 0.0, 0.0, 0.0, 0.0,
     0x1.2173b53527bc2p-680, 0x1.54859716fe4e1p-980, 0.0, 0x1.3f98afb4906b6p-405, 0.0,
     0.0, 0x1.c3a58acec56d5p-140, 0.0, 0x1.73e5332b2863fp-102, 0.0,
     0x1.6acc5449af89fp-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88346e63315fcp-277, 0.0,
     0x1.84dd1192dd949p-537, 0x1.7d7388b733852p-890, 0x1.1b4167599d7c3p-861,
     0x1.c525ae664d192p-677, 0.0, 0.0, 0x1.d2aba5865dbfcp-71, 0x1.2446b1b411cf7p-82,
     0.0, 0.0, 0.0, 0x1.7acb802db968fp-551, 0.0, 0.0, 0x1.538669f5d378bp-851, 0.0,
     0x1.647011168d549p-348, 0.0, 0.0, 0.0, 0x1.cd99d6417f63ap-827,
     0x1.9a5853ab70aadp-47, 0x1.bfc4a13971d54p-132, 0x1.d799cc7d796eap-730,
     0x1.b18b2e9e7c74dp-790, 0.0, 0x1.983c2a54d0a43p-836, 0.0, 0.0, 0.0,
     0x1.f36d0d0e771b9p-847, 0.0, 0x1.4ecb054d41086p-353, 0.0, 0x1.2d7ca561ee419p-170,
     0.0, 0x1.875405155bc5ap-828, 0.0, 0.0, 0.0, 0x1.07797223d8d04p-819,
     0x1.84b76a4a917e2p-201, 0.0, 0.0, 0x1.12269c51c6ae7p-319, 0x1.bb5b20c055acp-103,
     0.0, 0x1.6e0bc08e28d63p-925, 0.0, 0x1.6fdfe9ba15888p-926, 0x1.c386b0d6e679bp-932,
     0x1.16b542b2fc4cdp-805, 0.0, 0x1.26b7ee975fd35p-662, 0x1.6bf5d81bf5f5p-772,
     0x1.bab3606fede3dp-691, 0.0, 0x1.dc3d909f62e7ep-117, 0x1.0673951ac60f7p-292, 0.0,
     0x1.a60e43d8fe8e3p-867, 0.0, 0.0, 0x1.aa98f9fba1c1bp-394, 0.0,
     0x1.848c41d4be61ap-931, 0x1.c7276f63234cap-866, 0x1.2d2ea4b91ea6bp-559, 0.0,
     0x1.050b3310b26fp-958, 0x1.81d23a6c13212p-431, 0.0, 0.0, 0x1.3743fc87f4863p-916,
     0x1.e259c4b774bc6p-1015, 0x1.c431f13757b44p-703, 0.0, 0x1.b44e8cc4bc4dcp-69,
     0x1.a1c72041711c8p-650, 0x1.5e2d486eaa597p-743, 0.0, 0x1.30f2e9756dcb8p-382,
     0x1.62142688fd986p-927, 0x1.7b806e74bdeb8p-779, 0.0, 0.0, 0x1.2a9bcf1a0ab75p-563,
     0.0, 0.0, 0.0, 0x1.faceb5b1b3c6p-851, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9942a278995bp-406, 0x1.ad8d0bf448c95p-889, 0x1.e1fd31c939ed3p-617,
     0x1.6e8538733e1e7p-81, 0.0, 0x1.d13f0374256p-671, 0x1.0deb5be279074p-424, 0.0,
     0x1.1c841fcb364eap-805, 0x1.033d0cc73e4d7p-796, 0x1.4dc6632728969p-978,
     0x1.d0e7139eb4fc6p-428, 0.0, 0x1.15873ff4a915ep-455, 0x1.f63b06a737acap-342, 0.0,
     0x1.e751150be4c68p-632, 0x1.dd723b180ee12p-489, 0x1.b235483e8d366p-497,
     0x1.e5bdde6e24117p-725, 0x1.9db778161fcd5p-177, 0x1.45a3a151bd4afp-542, 0.0,
     0x1.2bbe13e84fd5fp-515, 0.0, 0x1.77fd53e33f909p-102, 0x1.822c78ce3c761p-511, 0.0,
     0x1.2b090f41a99f7p-271, 0x1.a580f5ad17d7cp-404, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a02818275953p-274, 0.0, 0x1.60980acf44927p-273, 0.0, 0.0, 0.0,
     0x1.9d14848fbf2ccp-72, 0x1.a24220354e7cdp-582, 0x1.c773dfc755353p-193, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a97de04b82affp-637, 0x1.33f4cd7cb324ep-666,
     0x1.1a588a1925453p-287, 0x1.a21717cfe955bp-223, 0x1.0ab35eff989a1p-406, 0.0, 0.0,
     0x1.36f10a8f063e7p-735, 0.0, 0x1.6d6b7c7300f6ap-820, 0x1.e3a4f5f42497ep-302,
     0x1.2c4284cec99c7p-466, 0x1.74f7df9570f4ap-529, 0.0, 0x1.89bf685b94f53p-440, 0.0,
     0x1.5c2fc207d3c34p-99, 0.0, 0x1.e77d84d50bd04p-753, 0.0, 0.0, 0.0, 0.0,
     0x1.ac4c4ec3a3f0bp-399, 0.0, 0x1.9a4514f98e22fp-8, 0x1.8b90891d90d4fp-493, 0.0,
     0.0, 0x1.c87b1cfe21185p-905, 0.0, 0x1.c9ae2892bdba4p-850, 0x1.b583d7fa5faacp-975,
     0x1.acffb3509134ap-96, 0x1.f6c2c0e33e861p-93, 0x1.01183f8b8464ep-257,
     0x1.088fa0b605f2p-423, 0x1.09b473918674fp-158, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b21018039ae5p-387, 0.0, 0.0, 0x1.0835373e41a35p-1014,
     0x1.6a23509b50a04p-863, 0x1.f1452a7ee7658p-38, 0.0, 0x1.43e995e188f2dp-979, 0.0,
     0x1.e42cd2be6c6d3p-625, 0x1.164788d6ef946p-192, 0x1.17821ebc8e60fp-775, 0.0, 0.0,
     0x1.c77b872fa2631p-396, 0.0, 0.0, 0x1.fa94e7f2d4785p-425, 0x1.24364b4b6cdep-587,
     0x1.635ebddc7b168p-890, 0x1.670cc9d8506ep-205, 0x1.1ac9887d95c5fp-208, 0.0, 0.0,
     0x1.3e2a40a329e28p-297, 0x1.de4570a7c0f4cp-392, 0.0, 0.0,
     0x1.1436fe8a093ddp-1016, 0.0, 0x1.1b4a586cce143p-15, 0.0, 0x1.2fd25b1f815c3p-730,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.abbdd7860c402p-104, 0.0, 0x1.a9fbe9fd0f5bep-211,
     0x1.edad9fb093d45p-932, 0.0, 0.0, 0x1.975bb3d812d23p-767, 0x1.8f11d01fe4c9ep-830
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincospid4_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincospid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid4_u05kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
