/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpid2_u05kvx.c --function Sleef_sinpid2_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.0e86e15d4587cp-671, 0x1.cfeb84a6ee588p-138, 0.0, 0.0,
     0x1.c991d82958bb5p-840, 0.0, 0.0, 0.0, 0x1.b3f6c1fceb993p-653,
     0x1.563eaa408a07bp-920, 0.0, 0x1.a70de7e3880bcp-982, 0.0, 0x1.8934267460733p-85,
     0.0, 0x1.da39e9037df7bp-160, 0x1.6722fef254487p-853, 0x1.60d1fc964eeaap-601,
     0x1.fe9546024b9dcp-122, 0x1.9744033bcb4fep-773, 0.0, 0x1.d705703d7a41dp-691,
     0x1.8a0a363682337p-893, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec605b031c174p-277, 0x1.f47bf63567f1cp-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d46aafb50a5cp-492, 0x1.5d09649ac7412p-669, 0x1.e098c7eaf879cp-792, 0.0, 0.0,
     0.0, 0x1.372e7725077d1p-151, 0x1.0dc32c5aeb60ep-652, 0x1.7ebee9ea579cdp-856,
     0x1.ac67538ca0e7fp-890, 0x1.a982fb0330b27p-813, 0x1.e0a4ee94bc103p-453,
     0x1.6ad09f280603dp-440, 0x1.574f5455e763ep-222, 0.0, 0x1.eca17532a8e69p-930,
     0x1.ac305f51247a1p-501, 0x1.920060438ffb5p-265, 0.0, 0x1.b69fb3b008865p-56,
     0x1.84748ec034083p-28, 0.0, 0.0, 0x1.18675c40f1119p-114, 0x1.285f5ac9e042ep-603,
     0.0, 0x1.f47a6f30b2587p-30, 0.0, 0.0, 0.0, 0.0, 0x1.a1cdb44d78c74p-345, 0.0,
     0x1.a2168f44ee08p-233, 0x1.9417ef2e679afp-259, 0.0, 0.0, 0x1.36db9e55127a9p-670,
     0.0, 0.0, 0x1.b48d8164cce38p-172, 0.0, 0.0, 0.0, 0.0, 0x1.f6e1e89d6c04p-256, 0.0,
     0.0, 0x1.c366e34d0447ep-790, 0.0, 0x1.e6821f5cf91bp-95, 0x1.fc1d9d382e747p-995,
     0x1.da20c7af3eba8p-772, 0x1.66e7113f60189p-489, 0x1.639c90e70bccbp-711,
     0x1.8174b585efedep-787, 0.0, 0x1.be3ab07c795b7p-328, 0.0, 0.0, 0.0, 0.0,
     0x1.0f4967ca48b53p-871, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23cbf9bff7c34p-447,
     0x1.7c6c752f3dacdp-135, 0.0, 0x1.916faedc4d6edp-231, 0x1.109d22096abfbp-1002,
     0.0, 0x1.6156df713c64ep-98, 0.0, 0x1.593a9a95faf64p-470, 0x1.9db3c87f07745p-285,
     0x1.46ea9d192e05bp-37, 0.0, 0.0, 0x1.5f20e9b989686p-642, 0x1.9937b70c20599p-838,
     0.0, 0x1.aa31fc53e3a1fp-1012, 0.0, 0x1.fb4e4454bd0e5p-495, 0.0,
     0x1.d8afa7341aa28p-482, 0x1.bf2822481442dp-202, 0.0, 0.0, 0.0,
     0x1.5c61d41c8376dp-134, 0.0, 0.0, 0.0, 0.0, 0x1.f58aedaf2001fp-228, 0.0,
     0x1.b9d19c67cb515p-281, 0.0, 0.0, 0.0, 0x1.9b977c8ea5ca4p-711,
     0x1.0e3f8f088be57p-214, 0.0, 0x1.17dd8b55ee829p-263, 0.0, 0x1.f725b3311a5c7p-751,
     0x1.85d99b67d16dcp-968, 0x1.48caaf1a91ad7p-914, 0x1.33434aab85f1ap-300, 0.0, 0.0,
     0.0, 0.0, 0x1.6af84152b594ep-492, 0.0, 0.0, 0.0, 0x1.8570721105951p-111,
     0x1.08edbe50c9581p-327, 0x1.b5b50ec62385cp-459, 0.0, 0x1.e4cb554399ccdp-26,
     0x1.f74ed21aa7d95p-818, 0x1.0db4531f34bd4p-718, 0x1.2c67e58b34289p-9, 0.0,
     0x1.098013763b6dep-37, 0x1.c31437bf67ca1p-285, 0.0, 0.0, 0x1.068dc9e70351ap-690,
     0x1.4f1530419eb17p-594, 0x1.87d3732553eb4p-797, 0.0, 0x1.70c01e61cb417p-455,
     0x1.2699b1b205ff5p-90, 0.0, 0x1.4ef17f62917b4p-679, 0x1.071b52769d8dep-1003, 0.0,
     0x1.b3bb0cebe1533p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2ab3f2643e6bp-805,
     0x1.12ed4612b9191p-269, 0.0, 0x1.57c2595294e09p-289, 0.0, 0.0, 0.0,
     0x1.7951799bad157p-427, 0.0, 0.0, 0x1.853fb43cec627p-938, 0.0, 0.0, 0.0,
     0x1.1110f7570c9fp-333, 0x1.cb497428e97adp-9, 0x1.1491af1b47139p-510,
     0x1.e4307907d1cd4p-467, 0x1.0d25515bac6a8p-882, 0x1.c46795fc06936p-937,
     0x1.063f7a4ce5b14p-919, 0.0, 0.0, 0.0, 0x1.2a95f115d5d1bp-34, 0.0, 0.0,
     0x1.ddc50ab3bf4ddp-707, 0.0, 0x1.4ed9bb7b6bc0ap-617, 0x1.0c34c6fc22422p-502, 0.0,
     0x1.8a55591f2ad43p-1018, 0.0, 0x1.79c6cd914867dp-610, 0.0,
     0x1.890126b8a2a95p-185, 0x1.840bdf4c24882p-893, 0x1.60a6ce4fa125fp-346,
     0x1.61afdf810e2dfp-557, 0.0, 0x1.07cb6415c3087p-472, 0x1.381fdb953a8a2p-277,
     0x1.0903c5bbf03cdp-870, 0.0, 0x1.f2ff004cd5c67p-617, 0x1.e80cde1ad5279p-446,
     0x1.f0d0df0b08189p-90, 0x1.a33d7e9d80994p-557, 0x1.2b2d19edc4ab3p-542,
     0x1.f3b7f0ae3ea1ep-700, 0x1.fc1e6a86fd20fp-302, 0.0, 0x1.9fba08000d5e7p-366, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99594b3442ba5p-248, 0.0,
     0x1.994f92ae73eb1p-847, 0x1.65d2549c1229cp-47, 0.0, 0x1.bd4207f18ff8cp-47,
     0x1.18874e4dca841p-984, 0.0, 0.0, 0x1.398b12e364b1cp-597, 0x1.964e15a4d3a3ep-696,
     0x1.d4eef9656977bp-630, 0x1.5af595aa2440ep-207, 0x1.826db9fc70f6dp-352, 0.0, 0.0,
     0x1.5da08467f6caep-899, 0x1.e20454123d26ep-474, 0.0, 0.0, 0x1.c64169c57fc26p-451,
     0.0, 0.0, 0x1.241de4955a5c5p-955, 0.0, 0.0, 0.0, 0x1.c6b223d85504ep-674, 0.0,
     0.0, 0.0, 0x1.629d99be1bf4cp-1021, 0.0, 0.0, 0.0, 0x1.998e8dfb81e43p-768, 0.0,
     0x1.d9d9ea310be1fp-4, 0.0, 0x1.26cbe98a4bb4cp-5, 0x1.46e56c517e9bep-562,
     0x1.f037f56e5f58bp-308, 0x1.03f47377f861cp-225, 0.0, 0x1.6246176b9f93ap-26, 0.0,
     0.0, 0.0, 0.0, 0x1.464d413abe9f9p-105, 0x1.967b87225829ap-651, 0.0, 0.0,
     0x1.2323c10cb69ep-548, 0x1.a120b24fc5959p-666, 0.0, 0.0, 0.0,
     0x1.01048de9491c5p-487, 0.0, 0x1.81213880509c6p-929, 0.0, 0x1.7d4e5aa5d6e37p-287,
     0.0, 0.0, 0.0, 0x1.ddead5df87ae1p-525, 0x1.ddf84d2139569p-927,
     0x1.1c2ec8d85131ep-765, 0.0, 0x1.c2c9e040ebb6bp-542, 0.0, 0x1.f000ffe62192ap-955,
     0x1.6267ea5e1d991p-849, 0.0, 0.0, 0x1.e4feba098894cp-164, 0x1.f4cb81b3097cbp-368,
     0.0, 0x1.936a14fcebb48p-178, 0x1.2f0ae45f557b3p-522, 0.0, 0x1.2f107e5ca3466p-115,
     0.0, 0x1.3bf22e01cd24ap-256, 0x1.142f393f3e5ap-818, 0.0, 0x1.45f5818bd3394p-164,
     0.0, 0.0, 0x1.633248761c17p-709, 0x1.ce41e4106825cp-251, 0x1.4ed10c9f1e071p-658,
     0x1.f68fb054a07f9p-400, 0x1.f0f8132e2044bp-699, 0.0, 0x1.4f535b29adc79p-901, 0.0,
     0.0, 0x1.f2e4ef62c7f92p-645, 0.0, 0.0, 0x1.f6e031041b5ccp-600, 0.0, 0.0, 0.0,
     0.0, 0x1.4dd03f4b21b8dp-198, 0.0, 0.0, 0x1.4ab5517ca9201p-582, 0.0, 0.0,
     0x1.a345d33ee6086p-545, 0.0, 0.0, 0x1.ea0a021f5bafbp-383, 0x1.177a89305e6d6p-838,
     0.0, 0x1.db8839bd4b2e4p-885, 0x1.d208b2e05eccdp-1001, 0x1.a7acde5499f2fp-461,
     0.0, 0x1.7c3da80f101f1p-711, 0.0, 0.0, 0.0, 0x1.6d0efbf8afe36p-990, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.62ece885d5ed7p-627, 0.0, 0x1.bf089496084a9p-847,
     0x1.0f66ca00610c3p-102, 0x1.a74009cd636e8p-124, 0x1.a6ab824399357p-596, 0.0, 0.0,
     0x1.27fd6ed757e9bp-297, 0.0, 0.0, 0x1.ad71a65151c67p-488, 0.0, 0.0, 0.0,
     0x1.aa6f017cb5b3p-851, 0.0, 0x1.3e1b442f46aafp-805, 0.0, 0.0, 0.0, 0.0,
     0x1.8e2714b03f09ep-347, 0.0, 0x1.de3fc10b133bdp-432, 0.0, 0.0,
     0x1.be076a935ffbep-902, 0.0, 0x1.835ad705ef5c3p-852, 0.0, 0x1.4ca14108741dfp-340,
     0.0, 0x1.befb5b5333b7dp-699, 0.0, 0x1.287696c03978p-91, 0x1.75332e546c7dbp-496,
     0.0, 0x1.1c6e84e12d10dp-266, 0.0, 0x1.d77daffa40327p-355, 0.0, 0.0, 0.0,
     0x1.2e4c4d2db1161p-586, 0.0, 0x1.11efc22633aa5p-174, 0x1.5ff4dddd18cbap-602, 0.0,
     0x1.f91da33232087p-806, 0x1.be09e98dcd8bdp-819, 0x1.ce7924997501ap-865,
     0x1.29203cebc5d75p-633, 0x1.94973e5d4ece7p-828, 0.0, 0x1.72d472c78afd9p-550, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0ad5d7261d89p-818,
     0x1.395a2e9c5f635p-274, 0.0, 0.0, 0x1.def4929205e1bp-522, 0x1.26f0a695568f7p-255,
     0.0, 0.0, 0x1.7e679176b90a2p-277, 0.0, 0.0, 0.0, 0x1.64dcd41dbdbaep-401, 0.0,
     0.0, 0.0, 0x1.837848bb22f39p-786, 0x1.a69a9cf566f6dp-564, 0x1.4855d55ca27aap-980,
     0.0, 0x1.becee54b2fedfp-437, 0.0, 0.0, 0x1.b98fa33d8eebdp-480, 0.0, 0.0, 0.0,
     0.0, 0x1.51dd88116b298p-266, 0x1.e9c79a122e004p-672, 0x1.87a90554d8b49p-102,
     0x1.7253c7519c88fp-178, 0.0, 0x1.ba6aca37dce62p-519, 0x1.0fc57a424aebcp-46,
     0x1.01193ffbc794cp-814, 0.0, 0.0, 0.0, 0.0, 0x1.a9709ff40d6cp-87, 0.0,
     0x1.0314c8073dap-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2c5805ed4668p-731, 0.0,
     0x1.39ac206929aebp-741, 0x1.0a91d97018f7cp-136, 0.0, 0x1.cd2222835c22ep-136, 0.0,
     0.0, 0x1.226ca1f4638bdp-724, 0.0, 0x1.be6496696b742p-885, 0.0,
     0x1.04ac5edd5de76p-346, 0.0, 0x1.2146e092b9c3fp-68, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6020a916f1955p-602, 0.0, 0.0, 0.0, 0x1.4f55c7fed6a27p-387,
     0x1.7b7c1e2c93ccap-546, 0x1.738e78a399831p-676, 0.0, 0x1.9ff54912ff3cdp-739,
     0x1.0231e942c0b01p-152, 0.0, 0.0, 0x1.316c2d36cf4b3p-421, 0x1.5b02d7e8418afp-478,
     0.0, 0.0, 0x1.8729426f216e4p-578, 0x1.ea88728a29f9fp-769, 0.0, 0.0,
     0x1.a8bd514c6d9d6p-954, 0x1.421d50e321a1dp-641, 0.0, 0x1.52c3fcfc41f23p-464, 0.0,
     0.0, 0x1.02a63f9a6e23p-183, 0.0, 0x1.734954b4c004fp-346, 0.0,
     0x1.87635ef220f2cp-768, 0x1.babb75bba64a1p-844, 0x1.802aeea861bf7p-51,
     0x1.c29f4893e9457p-799, 0.0, 0.0, 0x1.08093448caa06p-215, 0.0, 0.0,
     0x1.bfad6a8e02b52p-254, 0x1.d8f4a44994fc8p-777, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.774eca7847d72p-966, 0.0, 0.0, 0x1.aed3a594649a7p-170, 0x1.fef160f8484eap-84,
     0.0, 0x1.27614e0d97544p-352, 0.0, 0.0, 0.0, 0x1.f554dbbed828ap-545,
     0x1.6dcca87c134d9p-69, 0.0, 0.0, 0x1.3ab3bb9ac74d4p-814, 0x1.be7bbf611288dp-784,
     0.0, 0.0, 0x1.e5484a88fbd7p-340, 0.0, 0x1.9889fac5331c8p-894,
     0x1.ea5b3dac0d58cp-199, 0x1.b89a559ca29bdp-91, 0.0, 0.0, 0x1.13bd86966407cp-490,
     0x1.2f9166521beb1p-771, 0x1.0bc3ab1329093p-840, 0.0, 0x1.a4118a6eafa14p-732, 0.0,
     0x1.d288e03bcc8bep-151, 0x1.45f6e19fba72p-498, 0.0, 0x1.38e45baa9efe5p-533, 0.0,
     0x1.020d90d6186cep-783, 0.0, 0.0, 0.0, 0x1.8830e12aa4fbdp-909,
     0x1.39eee181b5adbp-909, 0.0, 0x1.47d580675fbeap-29, 0x1.f8a676acae6d2p-847,
     0x1.aceb9490e5212p-373, 0x1.ea96ccb65c4b1p-245, 0x1.a3e1b3cdfd8acp-292, 0.0,
     0x1.10f0f23e3c843p-171, 0.0, 0x1.cedfd5893e1b6p-515, 0.0, 0x1.457b793020e49p-456,
     0x1.23fdc1c0ec84ep-491, 0x1.c2bc2a83c91bap-413, 0x1.38a00d0b7518cp-423, 0.0, 0.0,
     0x1.b9c80f6383b1fp-130, 0.0, 0.0, 0.0, 0x1.cba11e1986cb7p-821, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b41f2cc0fa599p-648, 0.0, 0x1.a5d9037eb260fp-374,
     0x1.eb2dbc803689p-225, 0x1.e85fcb6263bbdp-1013, 0.0, 0.0, 0x1.3d99486e89433p-721,
     0x1.4a0276582fcc1p-661, 0x1.ed5685e7b9bf5p-489, 0x1.88c189c805a84p-658, 0.0,
     0x1.68e3a895b01e8p-141, 0x1.cca004b9bb78p-230, 0x1.48d92e6efa66p-533, 0.0,
     0x1.101d47d9b26fep-370, 0x1.536164925eab7p-747, 0.0, 0x1.8768eb92e32c6p-621, 0.0,
     0.0, 0x1.6fe9e327debdap-24, 0.0, 0x1.1b32f76f23deep-949, 0x1.af3086bf75d15p-385,
     0.0, 0x1.c7deb72b22d7ap-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7dfb3d255fe17p-956,
     0.0, 0x1.284dab57aba44p-236, 0x1.e90471ab1755ap-170, 0x1.7f8e9aa5b67c2p-235, 0.0,
     0.0, 0.0, 0.0, 0x1.88c3fae6f631fp-132, 0x1.77793998be551p-393,
     0x1.19d8d77491869p-848, 0x1.56b8c0c00721cp-576, 0.0, 0x1.a91332bafaf79p-288,
     0x1.320b72ac42d2fp-894, 0.0, 0.0, 0x1.585b3b4bfc417p-833, 0x1.76140576e0701p-680,
     0.0, 0.0, 0x1.ef60f992dcb25p-487, 0.0, 0x1.defcf473cf765p-427,
     0x1.ade3aff090962p-898, 0.0, 0.0, 0x1.772415977da5cp-670, 0.0, 0.0,
     0x1.2c8565c7c4053p-169, 0x1.42c53d987cbb3p-247, 0x1.59c7b4e88a52cp-399,
     0x1.1abca80897aadp-819, 0.0, 0x1.cb6eb8cf342e6p-504, 0x1.b99c3b2cb8be8p-717, 0.0,
     0.0, 0x1.895e2aedd0ec6p-77, 0.0, 0x1.30c2b3a4a49e8p-807, 0.0,
     0x1.f3db13d966db8p-3, 0.0, 0.0, 0x1.eb2eff939a5bbp-628, 0x1.88419134311dfp-468,
     0x1.b7638d66179ap-126, 0x1.d30002a5b7a1dp-272, 0x1.1b762b71468e4p-85, 0.0, 0.0,
     0x1.214618f825f8ep-61, 0x1.00aa28bdad4dcp-665, 0.0, 0x1.303bcb097353ep-264,
     0x1.43bef25f14b5dp-879, 0.0, 0x1.956a2c89477p-245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c941836cced4p-440, 0x1.074f1eb2156dp-544, 0.0, 0.0, 0.0,
     0x1.28c943794df61p-980, 0.0, 0x1.f8d98f7ce368bp-532, 0x1.999ff1bdbafefp-121, 0.0,
     0.0, 0x1.683eee2612441p-604, 0.0, 0x1.c522cc033cce5p-902, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0cb8da44fd05ap-162, 0.0, 0x1.bdc163f4fe256p-933, 0.0,
     0x1.d7035b55e73bfp-447, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68e5bc94052b2p-701,
     0x1.550e07cf4ae98p-743, 0.0, 0x1.fe5d0067a32c2p-991, 0.0, 0x1.c5dcf4c7200e1p-157,
     0.0, 0.0, 0x1.1c08c134696f8p-1, 0.0, 0.0, 0.0, 0.0, 0x1.a7f663ba7c97cp-655, 0.0,
     0.0, 0x1.a6e8e50e260a1p-969, 0.0, 0x1.55104ec9ead46p-749, 0x1.c4b7bc8dc0668p-741,
     0.0, 0x1.e1745994b1cabp-348, 0.0, 0.0, 0x1.da7f45044de38p-980,
     0x1.b8e75faf5b39dp-358, 0x1.ee55e6394ec7bp-271, 0x1.b488346260ab3p-543, 0.0,
     0x1.0f6f221b4f95ap-182, 0.0, 0.0, 0.0, 0x1.a0e415dc335adp-650, 0.0,
     0x1.639c136ad636fp-341, 0.0, 0x1.1e2d1c01a139bp-245, 0.0,
     0x1.82f083b1a90a5p-1010, 0.0, 0.0, 0x1.31c55ceb02b6bp-564, 0.0, 0.0,
     0x1.4db0b90612751p-273, 0x1.239f717f1840ep-642, 0.0, 0x1.f361d0b2a6f9cp-492, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4acd584f02c4cp-822, 0.0,
     0x1.5dad0fd9d731cp-523, 0x1.a4d5af1801aa9p-493, 0.0, 0.0, 0x1.deef849f6cd6dp-474,
     0.0, 0.0, 0x1.94465857e2c86p-531, 0.0, 0x1.e1a7d3a17bdf8p-884,
     0x1.63f45b014df1dp-69, 0x1.36fb19e5ec4c5p-692, 0x1.dbc49506bcf04p-224, 0.0, 0.0,
     0x1.4405d473b2508p-331, 0.0, 0x1.323672aad6728p-829, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d1d9f6be0315p-735, 0x1.2c43e1893efep-284, 0.0, 0.0, 0.0,
     0x1.1a62be012ddc3p-574, 0x1.7507675b8cccep-914, 0.0, 0.0, 0x1.e4fa9bd9901c3p-671,
     0.0, 0x1.74afe1afdba5p-1005, 0.0, 0.0, 0.0, 0x1.93a1ff2592fc5p-798,
     0x1.8b1b68caa9d7bp-148, 0.0, 0.0, 0x1.f7e58d1f9378dp-801, 0x1.b8c89ba3b5f71p-912,
     0.0, 0x1.07df5556d8c58p-441, 0x1.3a306447accap-911, 0.0, 0x1.aaf91ba67ebc8p-359,
     0.0, 0.0, 0.0, 0x1.47b24167d96bcp-507, 0x1.9b0a254c5ab59p-502,
     0x1.517722f20106ap-513, 0.0, 0x1.2c50d48a7b618p-631, 0x1.1281759edd9d7p-129, 0.0,
     0x1.44866bd75d73p-753, 0x1.b07427c118062p-556, 0.0, 0x1.a09ae7f41cd09p-598, 0.0,
     0.0, 0x1.5fdb4fe5ac5e7p-958, 0x1.df9a00c429c09p-435, 0x1.3bcf8218aace2p-374, 0.0,
     0.0, 0x1.7ab7f2e4a08eap-146, 0.0, 0.0, 0x1.bfec3c8639868p-656, 0.0,
     0x1.8eb3877afa74cp-445, 0.0, 0.0, 0.0, 0x1.624141584aa13p-207, 0.0, 0.0,
     0x1.3f0eaa929c86ep-809, 0.0, 0.0, 0x1.bbd5d04b2120bp-228, 0x1.df2edc297f9bfp-573,
     0x1.d9eaa60d228ep-1, 0.0, 0.0, 0x1.69db832e97df4p-547, 0x1.d202ca589a896p-830,
     0.0, 0x1.47aa3028d86d1p-221, 0.0, 0x1.9617b3bd8a994p-112, 0x1.020a7e1f9acb1p-991,
     0x1.9b87887b3dd19p-343, 0.0, 0.0, 0.0, 0.0, 0x1.3000c5ac58cbap-895, 0.0,
     0x1.3dae7d5c29309p-96, 0.0, 0x1.139a339d361f9p-954, 0x1.d8009398903edp-536, 0.0,
     0.0, 0.0, 0x1.c9057138960bap-489, 0x1.cfaf4350d6e6ap-425, 0.0,
     0x1.f90e28f447cf6p-599, 0x1.4dade3088bbdbp-578, 0.0, 0x1.a9db8df2559acp-917, 0.0,
     0x1.b1552cd878d8ep-41, 0.0, 0x1.3fdd8d0a3d69p-909, 0.0, 0.0,
     0x1.a3be4d341145dp-163, 0x1.335d663decfe5p-996, 0.0, 0.0, 0x1.780689b82f0d1p-203,
     0.0, 0x1.05e57829d363ep-1001, 0.0, 0.0, 0x1.9fa18bd9db6d9p-728,
     0x1.fc35c359174ccp-209, 0.0, 0x1.8c0d26956f765p-619, 0x1.1858569b92b3ap-599, 0.0,
     0.0, 0x1.2c33ba183e12cp-991, 0.0, 0x1.3ca0669a3f608p-866, 0.0, 0.0,
     0x1.a3f48c66a179dp-964, 0x1.ce81d5755a91p-153, 0.0, 0x1.82e9aae8b127p-543, 0.0,
     0.0, 0x1.ee79ac27eef94p-637, 0x1.38b434c2c4c0bp-19, 0x1.90482f75d422ep-975,
     0x1.88fe06848d50ep-735, 0x1.6ee7ea0a5b6d5p-280, 0x1.441a1d1f79a52p-943,
     0x1.6e0e3def48a33p-883, 0x1.7d505b1896926p-760, 0.0, 0x1.b280cfabe3845p-746,
     0x1.eafe26842af54p-651, 0x1.6d7ce88c33e0dp-358, 0x1.df310be0666e9p-70, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.efdeaaff4476ap-716, 0.0, 0x1.d2a59999abc36p-900, 0.0,
     0x1.9a38908d873bcp-170, 0.0, 0.0, 0x1.711f72a589fb8p-489, 0.0, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_sinpid2_u05kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sinpid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinpid2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
