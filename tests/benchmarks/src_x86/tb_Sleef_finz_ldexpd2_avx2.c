/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ldexpd2_avx2128.c --function Sleef_finz_ldexpd2_avx2128 \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary64,int32 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0x1.fa092e7f64fa4p-776, 0.0, 0.0, 0x1.fe820ccd4e99ap-277, 0.0,
     0x1.d3b973bc7c5c8p-651, 0.0, 0x1.59109acdf2c14p-992, 0.0, 0.0,
     0x1.70f606ee6ecbdp-813, 0x1.de18a3a4cfdffp-824, 0.0, 0.0, 0x1.7018a9a02c98ap-796,
     0.0, 0x1.51d9c6f918e4ep-941, 0.0, 0x1.bd42d96045384p-625, 0x1.30d0c5cfa3713p-137,
     0x1.942dc6310f501p-736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f20687bd880dbp-245,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48481cbd39bafp-324, 0x1.c9a12d27ea721p-647,
     0x1.3431d97297c08p-781, 0x1.415938c329d74p-590, 0.0, 0x1.fb964793df675p-900,
     0x1.eb6bc65495986p-890, 0x1.5cf815cc4d9d2p-638, 0.0, 0x1.0056498c92b19p-471, 0.0,
     0.0, 0x1.5f1e57b244a95p-946, 0.0, 0x1.5788e73787be9p-220, 0.0,
     0x1.1321b91cb9e09p-435, 0x1.c5997b381a53ap-791, 0x1.07417bde57003p-705,
     0x1.787c942f2b4ecp-388, 0x1.a7e0e562b7da4p-456, 0x1.293fd54804b6cp-43,
     0x1.15d50c5bae196p-41, 0x1.58c0e8100374bp-359, 0x1.bfd457dce4fbdp-727, 0.0, 0.0,
     0.0, 0.0, 0x1.094cd182a452p-688, 0.0, 0x1.63a2cc7f4d934p-304,
     0x1.0aeba2176e79fp-2, 0x1.f71e31aa9e702p-391, 0x1.6061bc4551fefp-685,
     0x1.fd8856069408dp-607, 0.0, 0.0, 0x1.a208b408f9cf1p-627, 0x1.53d378efd6ffep-818,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3423b3a4d77f6p-957, 0.0, 0x1.7b730f261dfc2p-449, 0x1.c36f12853d2f5p-582,
     0x1.cb0ef17ddb3cap-71, 0x1.8deba6ab9e3ccp-420, 0x1.cfc1b2a69f111p-563, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b22dfce85f7ddp-781, 0x1.af1209051f795p-475,
     0x1.e4f71bd703538p-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4972d82496026p-350, 0.0,
     0.0, 0.0, 0x1.9dbcd5081bd1ep-447, 0x1.648cedcc3b968p-698, 0x1.01fe3f676824bp-937,
     0.0, 0.0, 0.0, 0x1.e5a750530ecb3p-841, 0.0, 0x1.2a3d8c101aba9p-795,
     0x1.a7ff693cd26cap-1010, 0x1.35d6f618d20b5p-248, 0x1.e8a6830ac2ae9p-943,
     0x1.9507af5d00c68p-849, 0x1.13322acbf113ep-210, 0.0, 0x1.289081e4c7ba7p-359,
     0x1.fc7e324debd6bp-21, 0.0, 0.0, 0x1.5789ba5f6fb71p-612, 0.0, 0.0, 0.0, 0.0,
     0x1.23002f007dee1p-348, 0x1.2ed58756ae4a1p-38, 0x1.a26650067a1c5p-697, 0.0,
     0x1.e0be89015e962p-145, 0.0, 0x1.27aea97db92f6p-831, 0x1.ff37c7bed8f42p-495, 0.0,
     0x1p0, 0.0, 0x1.65c2f6312d41bp-912, 0.0, 0.0, 0x1.058ed70da0ea4p-311, 0.0,
     0x1.16fe234641007p-773, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4eddc0d042eb8p-826,
     0x1.67d4e070d8e3ap-975, 0x1.4612714ebbd9cp-982, 0x1.1ef99ae8d30b6p-317, 0.0,
     0x1.030057614b281p-95, 0x1.a6d263f6b4fa8p-239, 0.0, 0x1.a565dd83809ep-517,
     0x1.e6beff840e143p-851, 0.0, 0x1.43e42c34f738dp-946, 0x1.175446e9060f9p-427,
     0x1.476dd0a160906p-949, 0.0, 0x1.9ea3edb61b963p-149, 0x1.6ebc938b4b169p-795, 0.0,
     0.0, 0x1.737c42c727fe4p-222, 0x1.39ff33db9f403p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.2d4e1105c754cp-232, 0.0, 0x1.c7c61adb1c323p-243, 0.0, 0x1.3f2de9b382792p-567,
     0x1.78e4f4d57633dp-365, 0x1.71ae49ab3d3bbp-71, 0x1.01743f1780e29p-217, 0.0,
     0x1.93de7dba0a6b9p-316, 0.0, 0.0, 0.0, 0x1.47d70211accc1p-717, 0.0,
     0x1.f05f59040a30cp-566, 0x1.ff52f6f4868afp-297, 0.0, 0x1.2dcfd6eafc355p-828,
     0x1.bf4953ce191a7p-759, 0.0, 0.0, 0.0, 0x1.0d20514ae40f2p-303,
     0x1.3b4205812bd81p-837, 0x1.3f664a2572e0cp-134, 0x1.47de210706c58p-609, 0.0,
     0x1.822f88cfa598p-85, 0x1.f6811bc500b85p-705, 0x1.6d8723da25516p-912, 0.0, 0.0,
     0x1.737d3d64a9606p-298, 0.0, 0.0, 0.0, 0.0, 0x1.966e74f625ab6p-1011, 0.0, 0.0,
     0.0, 0x1.e86ba19074469p-871, 0.0, 0.0, 0x1.e6c914af1161cp-376, 0.0,
     0x1.14c3ab41912c4p-417, 0.0, 0x1.52cae90cf097cp-277, 0.0, 0.0,
     0x1.d1eb7256bc71p-317, 0.0, 0x1.eb622c659e061p-974, 0x1.39d0a074dc484p-690,
     0x1.c5c91a5663e49p-779, 0x1.fdda1a74e7cefp-967, 0.0, 0x1.96ec3fbf78327p-489, 0.0,
     0.0, 0x1.a9a284e8c1efep-124, 0.0, 0x1.22c13ff5e5467p-43, 0x1.e48836017de7bp-202,
     0.0, 0x1.987afcaeacbeap-979, 0x1.bb858c17e8764p-94, 0.0, 0.0, 0.0,
     0x1.b0f453d041c4bp-862, 0.0, 0x1.6b56038cde663p-425, 0.0, 0.0,
     0x1.5f9469171f6e9p-757, 0.0, 0x1.30fd97e5c17ccp-275, 0.0, 0x1.1dd0276e0cd32p-526,
     0.0, 0.0, 0x1.fc49b04eb5731p-59, 0.0, 0x1.e1c3ffbf05aa9p-857, 0.0, 0.0, 0.0, 0.0,
     0x1.ce0102b064ed4p-210, 0x1.8193014369bdep-13, 0x1.6a4d04aa79a24p-758, 0.0,
     0x1.217c1a6f63a8ep-692, 0.0, 0x1.0ea564e9ac87ep-125, 0x1.520083ee79919p-700,
     0x1.97ed81b15bbc6p-770, 0.0, 0x1.445ace0d305cdp-1005, 0.0, 0.0,
     0x1.b2a100210f08fp-68, 0x1.391d87bf6cc28p-923, 0x1.afc705d9c4968p-294, 0.0,
     0x1.6c89872edcd34p-118, 0x1.06763c748031ep-710, 0.0, 0.0,
     0x1.91f9ff5f8b3ebp-1004, 0x1.f372a36e8729cp-376, 0.0, 0x1.4001bb6dfce9fp-672,
     0x1.09c0ae1314a42p-564, 0.0, 0.0, 0.0, 0x1.fc0fd6f7c52a1p-690, 0.0, 0.0, 0.0,
     0x1.5ce783f9285acp-70, 0x1.fe4cac38fa378p-230, 0.0, 0x1.d541930b58c3ap-1021, 0.0,
     0x1.729b87dbd6213p-563, 0.0, 0x1.06dc05ff384f7p-401, 0.0, 0.0,
     0x1.0eb9c11f8f6ddp-219, 0x1.46ca3e2e89296p-268, 0x1.36fb44617c829p-751, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.589b749e86e55p-21, 0x1.9b4596d6f244bp-681, 0.0, 0x1.aa6b89b562534p-892, 0.0,
     0.0, 0.0, 0x1.44dc7e5d4e15dp-53, 0.0, 0x1.4d69b82cc3fa9p-246, 0.0,
     0x1.d84df4d08126ep-792, 0.0, 0x1.39268d1575374p-417, 0x1.30940001419p-968, 0.0,
     0x1.0571dcfcbe3bdp-347, 0x1.4edb38f5ba577p-606, 0.0, 0.0, 0.0,
     0x1.1629e4a2c5361p-194, 0.0, 0.0, 0.0, 0x1.b62aa9ae7cb98p-457, 0.0,
     0x1.230b01d7cfd8bp-673, 0x1.451706a338d86p-801, 0x1.78c45c027dc0fp-889, 0.0, 0.0,
     0.0, 0x1.3e71334a0b836p-911, 0x1.30f20723845e7p-170, 0.0, 0x1.c40c1cdcfe189p-582,
     0.0, 0.0, 0x1.6796070f51be3p-349, 0x1.d94a43de79a0ep-914, 0x1.d599461ccec76p-121,
     0.0, 0.0, 0x1.4d2047f6cce72p-76, 0.0, 0x1.bc64d89202a6bp-274, 0.0, 0.0,
     0x1.5e29adb0c9464p-792, 0x1.4dc74ef451627p-265, 0.0, 0.0, 0.0,
     0x1.18d4233084bccp-361, 0.0, 0.0, 0x1.205029525ddfbp-31, 0x1.c700e74f1b16dp-204,
     0x1.bf2046de6ab9dp-323, 0.0, 0.0, 0.0, 0.0, 0x1.c21442c775f78p-779, 0.0, 0.0,
     0.0, 0x1.869c813b3e037p-868, 0.0, 0x1.67059c174ae51p-792, 0.0,
     0x1.f6df3e19e2a32p-744, 0x1.c5d95d83a7333p-434, 0.0, 0.0, 0x1.c7d494416c527p-42,
     0.0, 0.0, 0x1.b6e3ac4b70f08p-969, 0x1.e8d1087559226p-635, 0x1.83d136f39a617p-457,
     0x1.ee4b852a8a58ep-303, 0x1.d211eab1f48fbp-124, 0.0, 0x1.843e403a85779p-231,
     0x1.b9f55821b0242p-766, 0x1.de21a4fb7cb79p-448, 0x1.a0349a3a25b39p-128, 0.0, 0.0,
     0x1.2cd6b4f815662p-681, 0x1.3330f6de60cb9p-273, 0.0, 0.0, 0x1.ed0e1e2387b3dp-304,
     0x1.efbc524912afp-173, 0.0, 0.0, 0x1.fa4878c71a7bbp-247, 0x1.8f15542b5fbep-52,
     0.0, 0.0, 0.0, 0x1.34cd393d1314dp-651, 0x1.27a7cdf242badp-170, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c6d794f6df4b1p-727, 0.0, 0x1.44945e66a86d6p-847,
     0x1.af6ddfc730defp-504, 0.0, 0.0, 0.0, 0x1.cdb03aad9688dp-68, 0.0,
     0x1.404827c52ed0dp-590, 0x1.7944c3fadda7bp-971, 0x1.e68ded737778p-413, 0.0, 0.0,
     0x1.ade1f024ff42p-505, 0.0, 0.0, 0x1.7f484610ce52ep-555, 0.0,
     0x1.69ebd0ee9318cp-812, 0x1.0225ef7bb8ca9p-301, 0.0, 0x1.b7987c79a780cp-78, 0.0,
     0.0, 0x1.f4bddfb5f5f5bp-702, 0x1.89704929dccdcp-925, 0.0, 0x1.4dc206be56e4p-609,
     0x1.7c4f2cc365ebfp-621, 0x1.b4852db60ad7ep-221, 0.0, 0.0, 0.0, 0.0,
     0x1.d140371dbaac2p-899, 0.0, 0x1.3ed6bcaeabad6p-821, 0x1.3c3fab53d396bp-59,
     0x1.70a9820a0c6dp-264, 0.0, 0x1.543381993acb2p-518, 0x1.e5474482e18b7p-945, 0.0,
     0x1.9c4760654c444p-739, 0x1.644faa0b5706ap-1018, 0.0, 0x1.2df7f75bba20bp-899,
     0.0, 0x1.ff9baf2a72c7ap-570, 0.0, 0x1.fa2890c0b5627p-21, 0x1.dfc2d95449d4cp-906,
     0x1.f08f6ee14b5e9p-713, 0x1.316e07b2e168ap-568, 0.0, 0.0, 0x1.8d49b5c50d22cp-875,
     0x1.d65bdafefc4cdp-371, 0.0, 0.0, 0x1.b750fce9cc2bp-91, 0x1.0eba164e86ebdp-655,
     0x1.470bd52bb15a8p-359, 0.0, 0.0, 0.0, 0.0, 0x1.7bc0bac6bd11fp-63,
     0x1.3da2148d46a81p-293, 0x1.6cc9d9b60dc72p-45, 0.0, 0.0, 0x1.61aac7f5330c4p-203,
     0.0, 0x1.6edd484f52542p-122, 0x1.fd6cd77cffb5ep-494, 0x1.d0d0fb4b211d4p-185, 0.0,
     0x1.576970128a58dp-569, 0x1.34f7d468a70f9p-105, 0.0, 0x1.f3b528cbbb292p-455, 0.0,
     0x1.61bc3b63f80dbp-636, 0.0, 0.0, 0x1.9793c0d05a4ap-607, 0x1.18706f59c59ccp-73,
     0x1.175b27c10b57dp-15, 0.0, 0.0, 0x1.ce03d3f0367b3p-723, 0.0, 0.0, 0.0,
     0x1.b64576675f01dp-747, 0x1.1caa30d0607a4p-231, 0.0, 0.0, 0x1.afce154b13d8ap-734,
     0x1.d487968e3f2p-889, 0x1.f0033ae0b11fap-611, 0x1.57aafafa5f7ebp-234, 0.0,
     0x1.2e2e4a884785bp-808, 0.0, 0.0, 0.0, 0x1.6311d91afd17cp-224,
     0x1.d23e0d49c2e55p-464, 0.0, 0.0, 0x1.d03336bf493a6p-303, 0.0,
     0x1.e0f50042e29e4p-446, 0x1.35342760ab6bbp-765, 0x1.a70d0382cd8ffp-749,
     0x1.cc92c034c3103p-966, 0.0, 0x1.1ec49cc4e8c27p-621, 0.0, 0x1.11f479efac173p-397,
     0x1.5d91713ac722fp-7, 0.0, 0.0, 0.0, 0x1.eb78564f15245p-848, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a32fcf6dda359p-500, 0.0, 0x1.8674c7ec98645p-155, 0.0,
     0x1.218d8f35c6b27p-577, 0.0, 0.0, 0.0, 0x1.223fbef590bd1p-707, 0.0,
     0x1.b62b3fa710ec5p-444, 0.0, 0x1.9b0ce6875554ap-1002, 0x1.2acbadfaa64b9p-799,
     0x1.1414a12c60767p-833, 0x1.30d9d4762abb8p-325, 0x1.56ecb5cbe6dd9p-546,
     0x1.fdfde7d0ed86fp-465, 0x1.58106f7ad2ac3p-657, 0x1.4b5226837e8ecp-374,
     0x1.8308307a9c013p-16, 0x1.b4b8b9f877d72p-335, 0x1.011e33a336d9bp-564,
     0x1.a8a455d568a34p-342, 0.0, 0.0, 0x1.2a87ef8cf7d1dp-448, 0.0, 0.0, 0.0, 0.0,
     0x1.c1a0cb77a5996p-786, 0.0, 0x1.3fa6885f012aap-636, 0x1.f5bc30b7ac462p-661,
     0x1.7468c2d55e243p-894, 0.0, 0.0, 0x1.80a49b19c9e4ep-1003, 0.0, 0.0, 0.0,
     0x1.e77b47b5c63ep-105, 0x1.9c9a1c38f68dfp-242, 0x1.f4e76b103d708p-930,
     0x1.ab2d8adf8a227p-147, 0.0, 0.0, 0x1.e3b73ff0d5b81p-5, 0x1.6319243b0c369p-224,
     0.0, 0.0, 0.0, 0.0, 0x1.4634cd4e3c35fp-248, 0.0, 0.0, 0x1.151db7125426bp-631,
     0x1.daaf872d26765p-152, 0.0, 0.0, 0x1.77214ce7a191cp-523, 0x1.c5187a52a28a1p-786,
     0.0, 0x1.ad0a095edd6cep-885, 0x1.bed9a10c2b72bp-211, 0.0, 0x1.607b9f82578b6p-899,
     0.0, 0x1.691338f62a538p-788, 0.0, 0x1.455870bdfd89fp-387, 0.0, 0.0, 0.0, 0.0,
     0x1.e2beb58951a9ep-240, 0x1.806c9742ee68fp-201, 0.0, 0.0, 0x1.668d1f4cd85dep-276,
     0.0, 0x1.19a15b5012e5p-710, 0.0, 0x1.34883ede904e8p-606, 0x1.855b01b1a6609p-333,
     0.0, 0x1.79b049d5f6526p-986, 0.0, 0.0, 0x1.d6b4edc592886p-979,
     0x1.0fc2ec03bfd7ep-375, 0x1.6c4573e59343p-760, 0x1.0305b82c0c4ddp-648, 0.0,
     0x1.a123fac97f27ap-364, 0.0, 0.0, 0.0, 0.0, 0x1.55931416938cep-44,
     0x1.8d4d12168f31ap-181, 0.0, 0.0, 0x1.a2179b778dc05p-73, 0.0,
     0x1.3038b705093d1p-589, 0.0, 0.0, 0x1.1e752b9f4c0f6p-373, 0x1.a29885ed126cp-802,
     0.0, 0.0, 0x1.314de34bd3d5ep-399, 0.0, 0.0, 0x1.78978ec9028b5p-488, 0.0,
     0x1.1ba8b0754337bp-735, 0x1.0ccba9b03cbf8p-411, 0.0, 0.0, 0.0, 0.0,
     0x1.cb6693e8f9ae6p-757, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09bed34cb8ff5p-858,
     0.0, 0x1.18996ce1a991ap-889, 0x1.f964a9519f68ep-946, 0x1.0a0a0b679589p-210, 0.0,
     0x1.950f05a3c2ecap-1019, 0x1.2e8f38033e87fp-606, 0.0, 0x1.6f613ea5a348dp-789,
     0.0, 0.0, 0.0, 0x1.c7f37ff0a6cf3p-347, 0.0, 0.0, 0.0, 0x1.d05c346c2a6fcp-525,
     0.0, 0x1.1ff7d026b7a42p-273, 0.0, 0x1.55c13e803db3ap-589, 0x1.4f4244e8ec97dp-222,
     0x1.ce7bfd690314cp-587, 0x1.a0d0d052403eep-934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a81a3ebc78b4p-587, 0.0,
     0x1.aff0b62071e12p-690, 0x1.d6bd1a6fec272p-142, 0.0, 0x1.bc4400f6b734cp-817,
     0x1.2a18230ee9a16p-772, 0.0, 0.0, 0.0, 0x1.3d0284893fcf5p-973, 0.0,
     0x1.8286718c15624p-974, 0.0, 0.0, 0x1.3ce28197a9defp-352, 0.0, 0.0,
     0x1.e54c51b040535p-84, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b99b1fb5c46d9p-690,
     0x1.bf306258fbdb4p-836, 0.0, 0x1.f76da1e86bf97p-95, 0x1.071446e023b07p-577,
     0x1.70683ec5d93a4p-356, 0x1.0d5b9d4feb8dp-865, 0x1.29c21d74f7facp-1007,
     0x1.1cac06ba2620cp-550, 0x1.80d619b92d325p-1005, 0x1.8b1a01e8c3593p-602, 0.0,
     0x1.dd83976278da6p-402, 0.0, 0.0, 0x1.42b568544e52fp-79, 0.0,
     0x1.0f6ef3364219fp-90, 0x1.a1f3cbb932e5ep-204, 0.0, 0.0, 0x1.7c8868bcc0bfap-485,
     0.0, 0x1.3e42012f7e048p-806, 0.0, 0.0, 0x1.e79c69c399ep-289,
     0x1.7bded10548636p-180, 0.0, 0x1.f2b8793387ec7p-416, 0x1.e589a62123ebep-697,
     0x1.e6853f84ca2bbp-402, 0.0, 0x1.1931db4a77971p-896, 0.0, 0x1.30ff706fcc414p-262,
     0x1.7945004abc0c4p-186, 0.0, 0.0, 0x1.3198bc34790fdp-18, 0.0,
     0x1.eed0d2bd468dep-299, 0.0, 0x1.c7667549123c8p-889, 0.0, 0x1.c08df2a4f8c76p-236,
     0.0, 0x1.ac25c791e36cep-570, 0x1.976fc165694a7p-605, 0.0, 0.0,
     0x1.bd3276b2afbe2p-704, 0x1.07c99edd135a8p-323, 0.0, 0x1.10cac3f12150bp-662,
     0x1.9990464099cb8p-505, 0x1.2718136b9bb7ap-934, 0.0, 0.0, 0.0, 0.0,
     0x1.e9892fc11c4f5p-589, 0x1.6832f7efb7206p-631, 0.0, 0.0, 0x1.733baf78c7cf8p-12,
     0x1.bf75b698d7f56p-763, 0x1.349822c6bfa77p-442, 0x1.023887744fc79p-152, 0.0,
     0x1.0599c0a10ad2fp-654, 0.0, 0.0, 0.0, 0x1.2487efeae5a64p-85, 0.0,
     0x1.b217f048ecee4p-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24d048b55acf1p-84, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cbc03fda53b66p-660, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc7320ea9e889p-444, 0.0, 0x1.d82ecdd3017c3p-157, 0x1.84cc1f5f73725p-426, 0.0,
     0x1.8f036b535d031p-16, 0.0, 0.0, 0x1.b10aba39da0d2p-222, 0x1.a18b8002ed90bp-415,
     0x1.f3efd8afb6c2dp-222, 0x1.763e6453fb8cap-14, 0x1.3bb5a79fd6769p-907, 0.0,
     0x1.b0d0d7282c57bp-528, 0x1.d79f58aff1a89p-91, 0.0, 0.0, 0x1.f4fb3480b26cap-318,
     0x1.9731ef62323e5p-592, 0.0, 0.0, 0x1.6cf81bd70791dp-442, 0x1.365b795239fd3p-646,
     0.0, 0.0, 0x1.85a2c7ff3570fp-822, 0x1.7f4d942e693e4p-796, 0x1.2a7e8ba9feb16p-605,
     0x1.3ce68888d2e28p-224, 0.0, 0.0, 0.0, 0x1.fb00ed69893f9p-902,
     0x1.b4c0cf85759d9p-242, 0x1.91c1f9d811f88p-429, 0.0, 0x1.3f7588dbc9a6p-970, 0.0,
     0.0, 0.0, 0x1.cf3c4918564b7p-924, 0x1.9f1470d7ba1bbp-42, 0x1.b22a2b95bd8aap-920,
     0.0, 0x1.d6b1f20dce0fp-471, 0.0, 0.0, 0x1.7e613cc0b3b05p-603,
     0x1.7e15ed340a2ecp-517, 0.0, 0.0, 0x1.c11369be7bb81p-57, 0x1.e50cd804d250bp-609,
     0.0, 0x1.66ef048501044p-205, 0x1.6192c4a087c58p-592, 0x1.1a2559d454243p-925,
     0x1.9d822b6da45c4p-220, 0x1.9984a65698d8ep-360, 0x1.07837edf03749p-178,
     0x1.0b6b0ca3667bcp-486, 0x1.297ffd3a618b1p-582, 0x1.78bda27bc7ec7p-312, 0.0, 0.0,
     0x1.4b661ee3888b7p-490, 0.0, 0x1.b46cb21b898b4p-473, 0.0, 0x1.e23521c4042f1p-37,
     0x1.e20bf6a7fe522p-170, 0x1.8b3bb542885bcp-621, 0x1.628b92d4d8dddp-220,
     0x1.8a35464304f1fp-849, 0x1.af778f8438896p-601, 0x1.afb514485b348p-442,
     0x1.ff6d3ad6b411ap-2, 0.0, 0.0, 0x1.2cc8255130c3ep-518, 0x1.52c38df5a6fe4p-913,
     0.0, 0x1.045e41333e98p-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9e30faed8699p-198,
     0.0, 0.0, 0x1.e28149d98ad66p-402, 0.0, 0x1.bd72f2591ea8fp-605, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0b50155d269f1p-105, 0.0, 0x1.dd753e50c4e6dp-145,
     0x1.e324fd9261173p-320, 0.0, 0.0, 0.0, 0x1.9c52a9517193cp-594,
     0x1.0dd73e4ad29dp-843, 0x1.73f43478f4ba3p-741, 0x1.9036a1643d891p-741,
     0x1.300cef7a4b00bp-560, 0.0, 0x1.db9f15a5267efp-246, 0.0, 0.0,
     0x1.b43bfdc79413ep-545, 0x1.6709cf6922a96p-947, 0x1.919a4616aa6d6p-427, 0.0, 0.0,
     0.0, 0.0, 0x1.c37fbb2149972p-943, 0.0, 0.0, 0.0, 0.0, 0x1.21f0a63785986p-611,
     0x1.4a8ae038690a1p-61, 0.0, 0x1.45d708f99afffp-50, 0x1.b213319c11b86p-166,
     0x1.c52dfa57ceda6p-380, 0x1.d943d3252bd9dp-559, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1002]  = {
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
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
            tmp2 = Sleef_finz_ldexpd2_avx2128(tmp0, tmp1);
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
    printf("Sleef_finz_ldexpd2_avx2128 %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ldexpd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
