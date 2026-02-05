/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd2_u10avx2128.c --function Sleef_sinhd2_u10avx2128 \
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
     0.0, 0x1.97740cabfd803p-40, 0x1.98d001b8bab6ep-695, 0.0, 0.0, 0.0,
     0x1.4171c602d397bp-885, 0.0, 0.0, 0x1.02b54441ca3abp-378, 0x1.23295da4ca1e2p-739,
     0.0, 0x1.989e49e356098p-699, 0x1.ad201a2915e21p-147, 0x1.aecdef5d49e63p-924, 0.0,
     0.0, 0x1.e5f86939bfe2dp-84, 0.0, 0x1.8ba0695760725p-400, 0x1.b11b9f345debdp-351,
     0x1.f21177b5ce523p-557, 0x1.4d29c0484412p-497, 0x1.3b95a97e5bc0cp-62, 0.0,
     0x1.b49e6266774dp-90, 0x1.37c6ece467eb3p-235, 0x1.4d71f078d6543p-468, 0.0, 0.0,
     0x1.d29aa58c1d9fap-328, 0x1.b5ccc534c1113p-731, 0x1.4ba1907f1868p-821, 0.0,
     0x1.eecba30d4ae0cp-559, 0x1.96b135d094aap-272, 0x1.6fc16406147ccp-183,
     0x1.381eedec537fdp-599, 0x1.7adbaea11a73p-214, 0x1.b916cb0891eb2p-231,
     0x1.e415a39351f0fp-878, 0.0, 0x1.04224fe3237bdp-228, 0.0, 0x1.0f0761b46cbdp-667,
     0x1.46830ca6f0642p-589, 0x1.1a2467d5fd125p-61, 0x1.3deecc8cb9fcp-29,
     0x1.7f617e04f449p-852, 0.0, 0.0, 0.0, 0x1.b20c93a2e66cep-432, 0.0,
     0x1.0d4a36a8bb3e7p-375, 0x1.4e6e100e2ccfcp-550, 0x1.5a97c676840d7p-179, 0.0, 0.0,
     0.0, 0.0, 0x1.41d99baa44086p-320, 0x1.e8aef67d74be1p-444, 0.0, 0.0, 0.0,
     0x1.eb9f491147afep-85, 0x1.254c61a583461p-772, 0.0, 0.0, 0x1.c69f8116ef36bp-678,
     0x1.a7a38cf6f9933p-732, 0x1.a60122a89a917p-168, 0.0, 0x1.9ac187b5be6e4p-424, 0.0,
     0.0, 0.0, 0x1.8aece7b628373p-800, 0x1.641ee3fc8d9ccp-587, 0x1.91608875d7a91p-798,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f484781a042d7p-413, 0.0, 0.0,
     0x1.f65b26b834d7bp-29, 0x1.64c3211397f0cp-739, 0.0, 0x1.e4fe14698f2dap-510,
     0x1.0a0b35c0d734ap-110, 0x1.b4cd45c848e1bp-722, 0x1.32bb7929a803dp-175,
     0x1.a1057b135a013p-741, 0x1.259b1998542b3p-863, 0.0, 0x1.fda485aaebecfp-992, 0.0,
     0.0, 0.0, 0.0, 0x1.dff334bc6d813p-703, 0.0, 0.0, 0x1.73df310a00727p-300, 0.0,
     0x1.c6f2597779bbap-885, 0x1.370efb3e22373p-669, 0x1.2bfb56d8c0229p-399, 0.0, 0.0,
     0x1.de3da7f0a9656p-197, 0x1.eb1a3582b8765p-20, 0x1.8a0c753f025afp-57, 0.0, 0.0,
     0.0, 0x1.0f2a5b8ea3c5ep-333, 0x1.2d19dbdeb082bp-890, 0x1.e82bc55826846p-232,
     0x1.147d5fd88cb2ap-952, 0x1.1fbe1027013bcp-572, 0.0, 0x1.dedb0444d4f0ep-306, 0.0,
     0x1.72928a8eab5d7p-213, 0x1.38568e28082e2p-255, 0x1.1551196340b56p-374,
     0x1.2522016f9ec1bp-828, 0x1.fbc3cc15bce14p-453, 0.0, 0x1.1b134dd0a8aeep-29, 0.0,
     0x1.7196ff0f1d6b4p-336, 0.0, 0x1.c9719960b3832p-638, 0x1.f0ba4f6434cfbp-58,
     0x1.5bc6f268a4df6p-36, 0x1.8afb60b6d433fp-194, 0x1.da2514c4630adp-675, 0.0, 0.0,
     0x1.0323f8cbfa21cp-472, 0x1.86af10d03a864p-407, 0x1.07a01e36b3461p-239, 0.0, 0.0,
     0x1.a37fceb1479d8p-548, 0.0, 0x1.4869d5be4f0ebp-109, 0.0, 0x1.95968b2674124p-672,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71f4b319abbacp-541, 0x1.c549d166fc998p-962,
     0.0, 0.0, 0.0, 0x1.073ed977573ebp-545, 0x1.11a534b197932p-800,
     0x1.fdd0c97d4ad2ep-553, 0.0, 0x1.bfa08e0d6d849p-43, 0x1.848c52484c202p-47,
     0x1.eb8ccb5c9c1a9p-633, 0x1.76045276b1399p-707, 0x1.0c940c172e804p-123,
     0x1.3ac343be8cd88p-1016, 0.0, 0x1.d042953aadaa9p-478, 0x1.d63dfa0e681a9p-21,
     0x1.90c20e6b5e1p-402, 0x1.981675ea197cep-156, 0.0, 0.0, 0.0,
     0x1.8e133b7d910a5p-848, 0.0, 0x1.cad6da8321a1ap-41, 0x1.cfdafa59264d3p-192,
     0x1.a72708111cb21p-533, 0.0, 0.0, 0x1.303b2890f636dp-783, 0.0,
     0x1.67fe940b6efp-1002, 0.0, 0x1.a8ae11bc75cdep-892, 0.0, 0.0,
     0x1.3e4259816a24cp-320, 0x1.20fef97f4161cp-151, 0.0, 0x1.54e7316cd519ep-389,
     0x1.f653d893d6a7p-2, 0x1.3eb48a2f20b8fp-950, 0x1.8c78d2a46d269p-618,
     0x1.d4d1a60d45d3dp-439, 0.0, 0.0, 0.0, 0.0, 0x1.12f1286db391dp-254,
     0x1.5a09ae578fd8p-994, 0.0, 0x1.d73cf662ce118p-466, 0x1.6d11edc648e2cp-52,
     0x1.07433fd9ec8a1p-445, 0x1.d257a0ec55122p-913, 0.0, 0.0, 0x1.57be1f24204a6p-276,
     0x1.1073f3f23d925p-247, 0.0, 0.0, 0.0, 0.0, 0x1.ff281af7d648cp-211,
     0x1.5ec897f387342p-720, 0.0, 0.0, 0x1.778e68b26bf77p-290, 0.0, 0.0, 0.0,
     0x1.33348ed3c6fe6p-749, 0x1.c5a42d9bdf1dap-422, 0.0, 0x1.bb2160aa79f9bp-838, 0.0,
     0x1.2077164a46484p-128, 0.0, 0x1.e4dc20931d2f7p-921, 0.0, 0x1.f1fa6ca2bcc97p-310,
     0x1.94e0bbbe7c619p-690, 0x1.776a30de3cbeep-545, 0.0, 0x1.37a9892a2c72cp-471, 0.0,
     0x1.5eb91adda720ep-159, 0.0, 0x1.3d23bce8f646cp-528, 0x1.0bdd57d19fba1p-249, 0.0,
     0x1.7d037a3ffd7bcp-169, 0x1.582c1c9f512e2p-501, 0.0, 0.0, 0x1.ecb3858125debp-740,
     0.0, 0.0, 0.0, 0x1.fba7c56d8325bp-962, 0x1.c7d98cad7bd17p-904,
     0x1.fae45948e0369p-307, 0x1.8e1b0314a1449p-975, 0.0, 0x1.f7be7894f8323p-390,
     0x1.3a1737d001686p-785, 0x1.8ab55af227f13p-781, 0x1.731505442781ep-829,
     0x1.3825378f88d3fp-5, 0x1.96c9a0fe1995cp-278, 0x1.49720362b5e7p-632,
     0x1.c1773e2b43547p-52, 0.0, 0.0, 0.0, 0.0, 0x1.19b82189deac9p-834,
     0x1.974e4a4263785p-182, 0.0, 0.0, 0x1.bb35bb8861628p-213, 0.0, 0.0, 0.0,
     0x1.0ea1abdfc0307p-260, 0x1.98d4ab568289ep-694, 0x1.c0ad271ef3dc4p-825,
     0x1.9883902a24b29p-656, 0x1.9bf2fd80aae0ep-920, 0x1.020b14733cb2dp-762, 0.0, 0.0,
     0.0, 0.0, 0x1.b733212870bc2p-570, 0x1.d47dbb0949a8dp-572, 0.0,
     0x1.5f8fce9ca7667p-715, 0.0, 0x1.990a8ee55792p-738, 0.0, 0x1.46fc53ca2e91bp-431,
     0x1.b7fd73d5d4336p-46, 0.0, 0.0, 0.0, 0x1.d101d6249966fp-993, 0.0, 0.0,
     0x1.db00346226846p-966, 0.0, 0.0, 0.0, 0.0, 0x1.03d17e3f74b69p-852,
     0x1.e86d90bda7ea2p-535, 0x1.51a4ac6b6fcbfp-100, 0.0, 0x1.7015d030f708ap-814,
     0x1.b2d574400f744p-137, 0.0, 0x1.804d03e57daddp-249, 0x1.53b81c925aa1p-582,
     0x1.5cc3701219f87p-141, 0.0, 0.0, 0x1.1db0f9655512ep-869, 0x1.da7dbae8b9752p-270,
     0x1.587760d3f527fp-707, 0x1.b0fa8de9356b5p-800, 0.0, 0.0, 0.0,
     0x1.ed70470c08e16p-217, 0x1.848887549b679p-323, 0x1.4af3032438778p-141, 0.0,
     0x1.c428ac8b2fdd4p-388, 0x1.8e08e46373f3cp-85, 0.0, 0x1.25fe5dc84988bp-436,
     0x1.6f650d2b9fb3ap-790, 0.0, 0.0, 0.0, 0x1.1011f0d4e97bep-41,
     0x1.72b1bdb31b085p-847, 0.0, 0x1.bf02d92bde782p-467, 0.0, 0.0, 0.0,
     0x1.a4bad088444c7p-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a608891897355p-246, 0x1.690574b04c3dbp-321, 0.0, 0x1.52d88739f550ep-689,
     0x1.75053eaa56e9dp-686, 0.0, 0x1.ca82d592e8957p-131, 0.0, 0.0, 0.0, 0.0,
     0x1.e42f13191af89p-599, 0.0, 0.0, 0x1.eeabdeb7ca7d1p-503, 0.0, 0.0,
     0x1.c89da75db6a51p-642, 0.0, 0x1.0ab43fe31ec22p-842, 0.0, 0.0, 0.0,
     0x1.e7bd5e22f3919p-565, 0.0, 0.0, 0x1.443bd4e482883p-524, 0.0, 0.0,
     0x1.a5ca8471d3aecp-396, 0.0, 0.0, 0x1.43adfea4bad2ep-355, 0x1.e393a1d19bde9p-604,
     0.0, 0x1.1092ee14ca7d4p-336, 0.0, 0.0, 0x1.8e0b2b2fb021dp-1000, 0.0, 0.0, 0.0,
     0x1.ce3e53b5050b6p-178, 0x1.9de714617c775p-536, 0x1.444b0172cfd39p-464,
     0x1.b12094002b371p-5, 0x1.92702a40e4d68p-734, 0.0, 0.0, 0x1.3a5d2bbfe744cp-218,
     0.0, 0x1.7b42793c9e212p-184, 0x1.4e9011336c247p-806, 0x1.8110ab70688d1p-41, 0.0,
     0.0, 0x1.2d9bc72a7d661p-293, 0.0, 0x1.1dba26ddbea21p-963,
     0x1.e4d890aab86a1p-1002, 0x1.7edfc10fc1ed9p-911, 0.0, 0x1.dd4029ada7788p-358,
     0x1.2b26332e32c0ap-8, 0.0, 0x1.c152202ffbfcp-324, 0.0, 0.0, 0.0,
     0x1.6fc0184a228b7p-116, 0x1.175013a69a6b9p-548, 0x1.76b49d9ee3282p-223,
     0x1.2239aef7e52a4p-61, 0.0, 0x1.cae7105e82c04p-932, 0x1.75ab2bbfe6e54p-288, 0.0,
     0.0, 0.0, 0x1.155692f5d2051p-1002, 0.0, 0x1.eb7c7023db724p-934, 0.0,
     0x1.74682a100d83ap-633, 0.0, 0.0, 0x1.aeeab5f3d657bp-55, 0x1.46158296effcep-395,
     0x1.0a35b72a0681p-796, 0x1.e37d4e8241c3ep-588, 0.0, 0x1.003eb49367a6ap-735,
     0x1.226aab2a997a2p-436, 0x1.c5164fe3d7861p-725, 0x1.9b631f3bda36p-69,
     0x1.6d22d21b004dap-737, 0x1.5045627b9c5e1p-919, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0262ebe929099p-186, 0x1.c404da9b2be3ap-929, 0x1.7de83e28a658fp-514, 0.0, 0.0,
     0x1.b6d198b56b071p-625, 0.0, 0.0, 0.0, 0.0, 0x1.e113ba1422fb3p-583, 0.0,
     0x1.91d266b0d98fep-726, 0.0, 0.0, 0x1.4e5eb17ce6e3fp-674, 0.0, 0.0,
     0x1.01fde4bd5081cp-776, 0x1.6b30f44c74cb5p-424, 0x1.07e11868b637fp-420,
     0x1.ee1f1ab2723f4p-780, 0x1.12abd8fd0f4d5p-524, 0.0, 0.0, 0.0,
     0x1.d05bee2614408p-315, 0.0, 0x1.1dbaa1d511955p-325, 0x1.93a8a92303b3bp-653,
     0x1.c94c3eebc3002p-89, 0.0, 0x1.5408dc9ad0963p-949, 0.0, 0.0,
     0x1.d78b2b3f66973p-672, 0x1.e36e5de12cf02p-44, 0x1.dbd45f03a23bcp-242, 0.0, 0.0,
     0.0, 0x1.988cea0f4275bp-775, 0.0, 0.0, 0.0, 0.0, 0x1.7f9ab413afb55p-169,
     0x1.263a4cd3bbaebp-902, 0x1.3422591de0678p-159, 0x1.bc37c128a67fap-257,
     0x1.b914af33b8e88p-222, 0x1.4fba8f5721af2p-813, 0x1.e5929e1a9ea3p-475,
     0x1.94a95b9676e72p-600, 0x1.8ec27bacf40dcp-904, 0.0, 0x1.126172e65409p-787, 0.0,
     0.0, 0x1.385d51e5b471bp-715, 0x1.a2a9de74dfe9ap-768, 0.0, 0.0,
     0x1.27121f1c70dcfp-193, 0x1.b94ccc5583374p-610, 0.0, 0x1.391ef6942f292p-441,
     0x1.354643b728b4dp-731, 0x1.d76ceeba2d1f2p-110, 0x1.37931490ebe71p-1019, 0.0,
     0.0, 0x1.a61a323cb224cp-188, 0.0, 0.0, 0x1.9620de1e6b448p-74,
     0x1.b307e4bd0bd33p-593, 0x1.f9de46332f56fp-338, 0x1.db6673b501d08p-942,
     0x1.7ea7cfd411b7dp-121, 0.0, 0x1.feb3d1d1df451p-986, 0.0, 0x1.4ea195d7a41fbp-81,
     0.0, 0.0, 0x1.78d679b1d6cf5p-75, 0x1.98b8d9a57d3eap-294, 0.0,
     0x1.8caa9267c005ep-1015, 0.0, 0x1.9e9325f6c99dap-746, 0x1.e78b502a4f861p-918,
     0x1.f7df6f3c696cdp-158, 0x1.af7c787f74388p-138, 0x1.06bddaa736d5ap-611,
     0x1.7f74f7da241fcp-83, 0x1.f0f79ef6f0462p-498, 0.0, 0.0, 0.0, 0.0,
     0x1.97e499b293b15p-42, 0.0, 0.0, 0x1.8eecfcb98d814p-647, 0x1.4390b41f0c98dp-721,
     0.0, 0x1.771618ef9c86dp-1016, 0x1.fe14208eee28fp-421, 0.0, 0.0,
     0x1.588809985f361p-473, 0.0, 0x1.0b5225190d7c9p-755, 0x1.e7733f08fa1a7p-301,
     0x1.40c0594abb23ep-177, 0x1.82eff7bf05632p-917, 0x1.206546d33cbc8p-584,
     0x1.d075bf27f6e2fp-894, 0.0, 0x1.9dc63967dcac2p-782, 0.0, 0.0,
     0x1.1b01ba06877a5p-823, 0.0, 0.0, 0.0, 0.0, 0x1.3b40d450b77d1p-264, 0.0, 0.0,
     0.0, 0x1.5049ebfb62a9fp-29, 0.0, 0.0, 0.0, 0x1.2822fea397cedp-916,
     0x1.6a761b4bb3a94p-83, 0.0, 0x1.00cd0e003c6edp-209, 0.0, 0x1.e40a9ed37696fp-998,
     0x1.985cbfc98dbdfp-387, 0x1.d90370ef085f7p-257, 0.0, 0.0, 0.0,
     0x1.3f306ce85cf86p-474, 0.0, 0.0, 0x1.5100e616605c5p-170, 0.0, 0.0, 0.0, 0.0,
     0x1.ca0ea3253be2fp-172, 0x1.c197a075ed9e6p-706, 0x1.fc6ff6c13e877p-326,
     0x1.8e23460502f61p-696, 0.0, 0x1.ae4b772f87f79p-419, 0x1.b7d4f7eae04fep-348, 0.0,
     0x1.d80435fd39554p-320, 0x1.56edb3e16779fp-589, 0.0, 0.0, 0.0, 0.0,
     0x1.08640f3a1a7f7p-902, 0.0, 0.0, 0x1.8cbe58623fe9fp-893, 0.0,
     0x1.3ea1df509bc4p-15, 0x1.8c2ca743911eep-127, 0x1.2459d2caca607p-457,
     0x1.ac4c91393c8c9p-474, 0.0, 0.0, 0x1.653fda5896eddp-993, 0.0, 0.0,
     0x1.75312418eb98ap-412, 0x1.9c21545529a48p-367, 0.0, 0.0, 0x1.717b0cf1f5c87p-243,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3c8036ad1c1fp-615, 0x1.7a4d50cea4f84p-11,
     0x1.c3914c67a14c7p-26, 0.0, 0x1.51ef77e531ce6p-538, 0x1.cdf8eacd6684cp-644,
     0x1.b3dab469ceb6dp-416, 0.0, 0x1.03b1ec1a96d2fp-166, 0.0, 0.0,
     0x1.1cbfc5047b8d5p-751, 0x1.26b8148d68272p-939, 0x1.c7032e70851f3p-874, 0.0, 0.0,
     0.0, 0.0, 0x1.718fc62c18119p-772, 0x1.98ba7bc9dbb27p-268, 0.0,
     0x1.9bbd7363add5ep-395, 0.0, 0x1.ffaf3aa364b48p-647, 0x1.d154c11512ceep-284, 0.0,
     0x1.c6e8e701cc1b1p-328, 0x1.2b6a8a5bed0d8p-689, 0x1.d3e063cc39479p-557, 0.0,
     0x1.ffa0aab9a06e4p-980, 0x1.d8e894b797199p-918, 0x1.2a0ad0199bdcfp-470, 0.0,
     0x1.ed076ad668617p-36, 0x1.f05cfac6f30c5p-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6850736ef5f75p-890, 0x1.8c0a1224f15f4p-751, 0.0, 0.0, 0.0,
     0x1.6ae0750587112p-12, 0x1.33f8a217eafb7p-892, 0.0, 0.0, 0x1.7a80401a533cp-933,
     0x1.20e754a9afe82p-76, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90ebd29b5a4a5p-418,
     0x1.ed095468cf95dp-560, 0.0, 0x1.96f3979d42fdep-394, 0x1.9dd0da8658ee2p-201,
     0x1.e78a73fef25f5p-529, 0.0, 0x1.76209a348f38cp-642, 0.0, 0x1.6eab4eced2de7p-635,
     0x1.88400f2f0471ep-262, 0x1.825a61da66074p-57, 0x1.d15d173826ecep-207, 0.0,
     0x1.d3992480dd913p-868, 0x1.ef3099df8675fp-647, 0x1.fca8135132384p-895, 0.0,
     0x1.98f01aa4e1143p-327, 0x1.b6873ca801a6ap-97, 0.0, 0x1.565b49f7f843ep-192, 0.0,
     0.0, 0x1.035d1fc594304p-285, 0.0, 0x1.616b8f099a5ffp-211, 0x1.2f2fd922a1c7p-618,
     0.0, 0.0, 0x1.de8ec566ffa07p-259, 0x1.3199e664a97fdp-134, 0.0,
     0x1.127e5c4a620ap-455, 0x1.52ccc78a9f957p-749, 0x1.699a154e9f6e1p-588, 0.0, 0.0,
     0.0, 0x1.8b6a37ce42849p-551, 0.0, 0.0, 0x1.03df0cbad5dbbp-977, 0.0,
     0x1.14d240d0fa6ecp-737, 0x1.33c3768cec581p-243, 0.0, 0x1.4dc94e3e17336p-461, 0.0,
     0x1.29c990216847ap-956, 0.0, 0x1.0ae902d93586ap-525, 0x1.7d2047428c75ep-656, 0.0,
     0.0, 0x1.da81dd3a00c5ap-565, 0.0, 0.0, 0x1.551e9aa2b1acep-461,
     0x1.140c39bcaadf5p-961, 0.0, 0x1.461dd88fc95d6p-98, 0.0, 0x1.993f7fcfee021p-160,
     0x1.f60cceaf093adp-101, 0.0, 0.0, 0x1.5d7972b3ae73cp-176, 0.0,
     0x1.fcfcf02e79d24p-100, 0.0, 0.0, 0.0, 0.0, 0x1.4dd5150a79ce3p-698, 0.0,
     0x1.d10afbc5aa34ap-75, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdb7b54ca8199p-737,
     0x1.23027b17ce85p-419, 0x1.d40d345a7b3efp-385, 0x1.5a9a6f8ff8fe6p-386,
     0x1.22d44819c0649p-869, 0.0, 0.0, 0.0, 0x1.e8c1655e85227p-1016, 0.0,
     0x1.d77a0a7a800f6p-374, 0.0, 0x1.c0319621796e6p-435, 0x1.5b0faae325d74p-866,
     0x1.71cb8eae69704p-945, 0x1.974fa97ae96d7p-49, 0.0, 0.0, 0.0, 0.0,
     0x1.a49003c3c1ae7p-48, 0.0, 0x1.2aca78f49459p-437, 0.0, 0x1.2273c1ff1cf91p-698,
     0.0, 0x1.b273554d0fdccp-95, 0x1.969f7bd1eb281p-458, 0x1.6ffffb2b5f865p-488, 0.0,
     0x1.ae8342f7e3ebbp-229, 0x1.992ea7a52642ep-996, 0x1.437b630a14682p-426, 0.0,
     0x1.029a0bbf0b127p-896, 0x1.7d638db821cccp-995, 0x1.a515d27e2206ep-75,
     0x1.46005caf1edbbp-250, 0x1.78fd1af25dd78p-568, 0.0, 0.0, 0x1.49502519e156cp-306,
     0.0, 0x1.d4ca04113ccbcp-197, 0x1.63767985de7bcp-213, 0.0, 0x1.a41f98ad8dcdcp-808,
     0x1.4ccb93e623b53p-399, 0.0, 0.0, 0x1.9d8798bdbf659p-393, 0.0,
     0x1.96f979cf521bp-365, 0x1.ab8dad944fe1p-775, 0x1.d5e338969ee7p-270, 0.0, 0x1p0,
     0x1.cfcf1880b783cp-352, 0.0, 0.0, 0.0, 0x1.6c63108c1d5bcp-1001, 0.0, 0.0,
     0x1.1ca169da22b0cp-524, 0x1.25f5b3fcee609p-739, 0.0, 0x1.208cb9a376a73p-589, 0.0,
     0.0, 0.0, 0x1.dfcfbc9221804p-957, 0.0, 0x1.87d8577836c44p-323, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b9410ae8972f5p-597, 0x1.e2e81125cb02dp-101, 0.0, 0.0,
     0x1.dabc0dfed6d25p-198, 0x1.d8183706e58a2p-6, 0x1.acf0c49499e0bp-75, 0.0, 0.0,
     0x1.54e140e9025aep-323, 0x1.01058b992268ep-923, 0x1.049c92a04e7p-772, 0.0,
     0x1.9b36ce7a3c9ep-719, 0x1.5ef58c8dbb382p-330, 0.0, 0.0, 0x1.ad21bc5f8993cp-26,
     0x1.80cd488f18787p-729, 0x1.89b2732d9db1dp-102, 0x1.3124bb23f8422p-46,
     0x1.e83d9836e7c7bp-490, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9fc55fcad8db5p-139, 0.0, 0x1.c5d1653f090f7p-438, 0x1.bf606a2d27414p-671, 0.0,
     0x1.d25c66648b856p-1017, 0.0, 0x1.0904bb709c778p-100, 0.0,
     0x1.83db396994dd1p-624, 0.0, 0.0, 0x1.5c16ec4791232p-371, 0x1.bcffda1b12387p-767,
     0.0, 0.0, 0x1.dff26e8471849p-738, 0x1.e154f2af7bb45p-762, 0x1.729e6642bca9cp-213,
     0x1.a0b4dbcd6d2a1p-185, 0.0, 0.0, 0x1.31880a57bccccp-445, 0x1.e8885b176d1ecp-800,
     0x1.15808a26138b3p-78, 0.0, 0x1.d1c1d2a2ed18ap-152, 0x1.8698b88739e55p-610, 0.0,
     0.0, 0x1.be04a2f4df4abp-361, 0x1.f9cc3cbe011d8p-179, 0x1.56a2113997246p-826, 0.0,
     0x1.87e6f7199dac4p-676, 0x1.d81a23e56a743p-491, 0.0, 0.0,
     0x1.d2083a81a1bbap-1012, 0x1.4c23f7db044eap-308, 0.0, 0x1.c8c0c3c9e634ap-504,
     0.0, 0.0, 0x1.a7e05607b77dp-798, 0x1.22fff2fdf1c6fp-494, 0x1.310459fcb044ap-898,
     0.0, 0x1.f2646c399fde2p-247, 0x1.42502f5b19d3fp-862, 0.0, 0x1.cab411300ecdcp-468,
     0.0, 0x1.9843f4ef0f08fp-350, 0x1.1effccc828db5p-735, 0.0, 0x1.3b9bce2c9a4eep-554,
     0x1.e1425295eae51p-164, 0.0, 0x1.6d59c084b4dd6p-605, 0.0, 0x1.f3b48a8c7ed11p-660,
     0.0, 0x1.726d33ed535aap-582, 0.0, 0x1.b7577599ebc19p-527, 0x1.6e1e92b5c8e48p-19,
     0.0, 0x1.38fb9b008f15dp-775, 0x1.945fd091f222dp-223, 0.0, 0x1.bf6d812e48e05p-242,
     0.0, 0x1.54bf63205d0e8p-831, 0x1.befee3fb1e53ep-74, 0.0, 0x1.fe147769ecc6cp-415,
     0x1.e61fdbec18bf9p-209, 0.0, 0x1.58571282668c1p-93, 0.0, 0.0, 0.0,
     0x1.d4dc3922b95cfp-261, 0.0, 0x1.34229fec9b043p-784, 0.0, 0x1.e47b7b0dc48dcp-656,
     0x1.ccdffbae7af7bp-466, 0.0, 0x1.92c6104abebd3p-367
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
            tmp1 = Sleef_sinhd2_u10avx2128(tmp0);
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
    printf("Sleef_sinhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
