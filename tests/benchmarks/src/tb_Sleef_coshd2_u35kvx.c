/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd2_u35kvx.c --function Sleef_coshd2_u35kvx \
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
     0.0, 0.0, 0.0, 0.0, 0x1.1f1b5cd987a0cp-168, 0x1.5697cfe05472ap-651, 0.0,
     0x1.a0c612cb67835p-232, 0.0, 0.0, 0x1.17f1c7a70b149p-974, 0x1.1e1e784d5ed5bp-359,
     0.0, 0.0, 0x1.e6c622792bd2cp-152, 0.0, 0x1.4633cb6c0ed21p-692, 0.0,
     0x1.647144bb768efp-844, 0x1.40dc64c61235bp-740, 0x1.be6382698f7b7p-96,
     0x1.a8c64c9ab5318p-612, 0.0, 0.0, 0.0, 0x1.e6b851569a02cp-681,
     0x1.b395c8a83f723p-632, 0x1.bed299d474d3p-778, 0.0, 0.0, 0x1.f6eb82d70c6d3p-92,
     0.0, 0x1.514fb148fb616p-215, 0.0, 0x1.8e4a6572dec8fp-473, 0.0, 0.0,
     0x1.960cb2c27d7cap-460, 0.0, 0x1.a2d88fddb1d4cp-556, 0x1.3b408127ca223p-986,
     0x1.2436bcb78921ep-478, 0x1.d76a70eb8a152p-14, 0x1.064de7337287fp-812, 0.0, 0.0,
     0x1.0ac8ed27858bep-152, 0x1.b992a1a7ff8ddp-93, 0x1.d4e86aad732d2p-294,
     0x1.68ece8b3ec534p-979, 0.0, 0x1.74f8812069fbfp-570, 0x1.1398e0f03e47ap-84,
     0x1.115e256eecf2bp-311, 0x1.6d2e4c81fd065p-953, 0.0, 0.0, 0.0, 0.0,
     0x1.783217acd9182p-144, 0x1.200c0f11b8adcp-72, 0.0, 0x1.3cf0816de0699p-957,
     0x1.2fd15d9fcd2d9p-765, 0x1.02215ffed7facp-1004, 0.0, 0.0, 0.0,
     0x1.e1a867ca77cdap-930, 0x1.acc1844d6f1f4p-797, 0x1.480d55e310114p-974, 0.0,
     0x1.6e60ef72d35ffp-575, 0x1.d7a1c5a4a9904p-459, 0.0, 0.0, 0x1.12bcfac5a0926p-118,
     0x1.3423ffba548d3p-581, 0.0, 0.0, 0x1.0193d4d60a4efp-970, 0x1.36ab4a61fc969p-863,
     0.0, 0x1.99272c6cb652fp-429, 0x1.90cd498b0ce5cp-146, 0.0, 0x1.2403e2784c60dp-468,
     0.0, 0x1.35d5f39f929fep-1006, 0.0, 0x1.398165c0fcb28p-723,
     0x1.556ed1debfeabp-547, 0x1.60728536ac1f3p-110, 0x1.ee06ef34259f3p-6,
     0x1.273f02597b663p-519, 0.0, 0.0, 0.0, 0.0, 0x1.dc5ca1d46df8ep-160,
     0x1.de411de08940ep-757, 0x1.3c6fc8114a6e7p-660, 0.0, 0x1.b68643efae938p-21,
     0x1.b80239ab59424p-997, 0.0, 0.0, 0x1.0a45578a558aep-952, 0x1.f0a90e64b3bd9p-599,
     0.0, 0.0, 0x1p0, 0x1.d53eeb02f39b3p-135, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ffcd07f77a84p-307, 0x1.f9ca10ed4e0acp-380, 0.0, 0.0, 0.0,
     0x1.e214df9f8e6f3p-888, 0.0, 0x1.d9dfd036ed5afp-512, 0.0, 0x1.4920ec7e5623bp-287,
     0.0, 0x1.8cbef4c6a1d01p-870, 0.0, 0x1.74c282363a56ep-231, 0x1.695d46388f7edp-944,
     0x1.77e9afd851cbcp-231, 0x1.8bbf9acf70236p-548, 0x1.aa8397ceed1ecp-191, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4a53e02cee806p-101, 0x1.af12ac9352e6ep-887, 0.0, 0.0,
     0x1.b496e5a1ee7d6p-147, 0.0, 0x1.618729c4ac046p-180, 0x1.8b2a7caf9f3d4p-108, 0.0,
     0x1.023aebf38aec4p-512, 0.0, 0x1.73196fac1b941p-494, 0x1.5fe3bc5407e85p-587, 0.0,
     0.0, 0x1.e2ce53a2e91cp-320, 0.0, 0.0, 0x1.d195fc214881cp-189,
     0x1.5a58288efaccep-244, 0x1.c56f7cfc086bcp-571, 0.0, 0.0, 0x1.edcde66c667fap-201,
     0.0, 0x1.d025959f46877p-175, 0x1.13b9f37e5a825p-316, 0x1.d3dc1234accp-595,
     0x1.d02c425ebcbc9p-570, 0.0, 0.0, 0.0, 0x1.83a818889c254p-840,
     0x1.e3e334e621df8p-1018, 0x1.02ef3d2b2c509p-122, 0.0, 0.0, 0.0,
     0x1.9877cb9b8f2f9p-483, 0x1.e54b0f492f74ep-723, 0.0, 0.0, 0x1.bb180bacf66eap-474,
     0x1.772740f833b34p-89, 0x1.985f7748f604bp-230, 0.0, 0x1.b107bb64b9b95p-757,
     0x1.7df9f2128aa23p-378, 0x1.d25545f37e69bp-816, 0x1.baaa9fd7f75fp-728,
     0x1.c815e0667a2b8p-758, 0.0, 0x1.a4087701fdd6p-252, 0.0, 0.0,
     0x1.cb991f697a7bdp-397, 0x1.a068b4ca50705p-716, 0.0, 0.0, 0.0, 0.0,
     0x1.ddab7568281ccp-518, 0x1.317b7ce2ef5bp-32, 0x1.f52b7ac85ea3fp-522,
     0x1.9081357346abp-473, 0x1.310491fb5b1cep-525, 0x1.2605be82597ep-577, 0.0,
     0x1.9e16cb4d1c1a9p-467, 0x1.9bd905cb18b25p-77, 0.0, 0.0, 0.0,
     0x1.f1c429bccccd5p-89, 0.0, 0.0, 0.0, 0x1.f851ec431c964p-901,
     0x1.c9ee563b1ce35p-815, 0.0, 0x1.cf2140d52827p-822, 0.0, 0.0,
     0x1.af7553a78552cp-356, 0x1.303d4b6cdddf5p-207, 0.0, 0.0, 0x1.6585dcf275fd1p-565,
     0x1.f260659e6e88ep-650, 0.0, 0.0, 0.0, 0.0, 0x1.3a40167bd9f14p-443,
     0x1.07b2ce06dad2ap-930, 0x1.994419e71a66cp-642, 0.0, 0x1.08d1e5c71babp-692, 0.0,
     0.0, 0.0, 0x1.8e313a8a0e106p-876, 0x1.bc6249db19f04p-892, 0.0,
     0x1.cb614ca84d107p-557, 0x1.119f23e577a8fp-337, 0.0, 0.0, 0.0,
     0x1.961925ec38319p-677, 0x1.4dae5fc9ed4bp-657, 0x1.8b354eefea964p-446, 0.0,
     0x1.1c8c795f2d97p-372, 0.0, 0.0, 0x1.d04525e68c512p-306, 0.0,
     0x1.a4f7d07c97c82p-354, 0.0, 0.0, 0x1.fd5f08762fe8p-519, 0.0,
     0x1.9d85de06dabf3p-812, 0x1.c4b138434535cp-125, 0x1.62c36fda04e4p-570,
     0x1.d4d8367ff472fp-437, 0.0, 0.0, 0x1.c293672fa5f3bp-539, 0x1.28ccdb512c2a9p-121,
     0.0, 0.0, 0x1.5275cd488aba9p-468, 0.0, 0.0, 0.0, 0x1.49888447406fap-280, 0.0,
     0.0, 0x1.8c22dd1fa58f6p-648, 0x1.b9b09f379e1dbp-459, 0.0, 0.0, 0.0, 0.0,
     0x1.283593b5ead1ep-148, 0x1.c8842b172db69p-828, 0x1.322401aa880bap-474, 0.0, 0.0,
     0x1.26081d44d935ap-375, 0.0, 0x1.2f6a4e77d7b53p-692, 0x1.910a9360a1f8fp-178,
     0x1.854d6b93011a7p-1019, 0.0, 0.0, 0x1.2137c24581d92p-977,
     0x1.f5c2991aeffc5p-272, 0x1.69aa1eb0a750bp-902, 0.0, 0x1.35d1940877168p-923, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.652094c08104ep-248, 0x1.4aec530625ebfp-817, 0.0,
     0x1.5b5a0b8321082p-541, 0x1.91d0c7e238c08p-343, 0x1.fbeb279154a5cp-662,
     0x1.ccd9f0043f6eap-141, 0x1.253add8706132p-473, 0x1.77ec186dbea33p-368,
     0x1.6759b9f05ae3dp-841, 0.0, 0.0, 0x1.191522c94e025p-861, 0.0,
     0x1.41cdd926a497bp-262, 0.0, 0.0, 0x1.4e8bb8b860fc6p-697, 0x1.38c66801631cdp-83,
     0x1.3519a9f8c5466p-984, 0.0, 0.0, 0.0, 0.0, 0x1.83e94e809a701p-587,
     0x1.eec38dd4cca4ap-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5284395eed217p-573,
     0x1.2d3addbfdab66p-565, 0.0, 0x1.7c89d35d2d1e2p-303, 0x1.fbf28404a9e26p-570, 0.0,
     0x1.cf1990adab30bp-269, 0x1.b98295aa2f57ep-505, 0.0, 0.0, 0.0,
     0x1.12483ac3cc568p-846, 0x1.0b089db8f5f8ep-813, 0x1.3d2960632fcc5p-581, 0.0, 0.0,
     0x1.8ef97988171adp-543, 0x1.7e27436eb3297p-360, 0.0, 0.0, 0.0,
     0x1.857ebe36dceafp-899, 0x1.8c1b0a5f06866p-805, 0x1.32fc335335cb1p-543,
     0x1.cfcdab29adb81p-660, 0x1.069149396fd05p-180, 0x1.608d3935c40e8p-202,
     0x1.0ab66d88e81c6p-306, 0.0, 0x1.783cdb20ef6eep-460, 0.0, 0x1.1afe8cf09baep-955,
     0x1.5ad8b196b3d17p-624, 0x1.71c8361b5b522p-362, 0.0, 0x1.86a9ddf19b56p-76,
     0x1.7816e72745938p-636, 0x1.58caa8413933p-135, 0.0, 0.0, 0.0,
     0x1.c4627dc5d4c12p-322, 0x1.532bd829993a1p-215, 0.0, 0x1.65810e0cec042p-31, 0.0,
     0x1.2d14f7f95a443p-407, 0.0, 0.0, 0.0, 0x1.f5d24cb195c94p-605, 0.0, 0.0,
     0x1.e84ba0925f66dp-561, 0.0, 0x1.5b39ad33a0d22p-927, 0.0, 0.0, 0.0, 0.0,
     0x1.5a55342b924dcp-682, 0.0, 0x1.5fb74b3b928f1p-136, 0.0, 0.0,
     0x1.02b0774226ae7p-710, 0.0, 0x1.3d3b3985b3842p-596, 0x1.10a58beb4636dp-77,
     0x1.b1da2eb143849p-13, 0x1.7b4c67fae2abap-503, 0x1.e321275dc5b64p-959,
     0x1.71d3bf3f88de6p-936, 0x1.7fb7090fa467bp-1004, 0.0, 0x1.9337c2d7ff5bfp-23, 0.0,
     0.0, 0x1.124c58e0344a6p-836, 0.0, 0x1.5dc72f6efbcbdp-109, 0.0,
     0x1.e08630fdba038p-659, 0x1.27b00d87d532dp-55, 0.0, 0.0, 0x1.29360d734985ep-611,
     0.0, 0x1.44e3c862f592ap-447, 0.0, 0x1.faaeeceff46dep-367, 0x1.dd980dea5c842p-249,
     0.0, 0.0, 0.0, 0.0, 0x1.70c8cd31ad379p-695, 0.0, 0.0, 0.0, 0.0,
     0x1.dcd3827e71122p-803, 0x1.c2fc7a7674121p-598, 0.0, 0x1.b724f3bd8c481p-1021,
     0.0, 0x1.b745ab0ad621dp-390, 0x1.743e1db3c2c08p-268, 0.0, 0.0,
     0x1.e6dd6e970194bp-193, 0.0, 0x1.7192c782321e7p-943, 0x1.70e7ed4a61c7p-610, 0.0,
     0.0, 0x1.f20e06fe1b801p-505, 0.0, 0.0, 0.0, 0.0, 0x1.a3745d6ec6d5fp-556, 0.0,
     0x1.7785e5b592aep-685, 0.0, 0x1.be3587578b5c4p-730, 0x1.b7c7440360f21p-1010,
     0x1.b31ac804ae20ap-835, 0x1.57d3bb5865f9dp-880, 0x1.10db072b6e504p-624, 0.0,
     0x1.6316316f4d277p-943, 0x1.3e7c1355791e6p-558, 0x1.4fe392ab840fp-689,
     0x1.1aee3605ccb12p-328, 0x1.e1a7fe7b075fep-782, 0x1.da5c0b43cfe6ep-96, 0.0,
     0x1.a6ca1de1ac3dbp-727, 0.0, 0.0, 0.0, 0.0, 0x1.8cc00061d2072p-466,
     0x1.c58eb70381a35p-51, 0x1.5207eb0dabca7p-944, 0x1.1f6f60768f015p-593, 0.0,
     0x1.1cee1c6a30813p-14, 0x1.8462d9ec6cfa6p-844, 0.0, 0.0, 0x1.6419af205d7f7p-233,
     0x1.7395d49e23f84p-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c626a8d5f0aebp-171,
     0x1.99fe4570a3cc1p-89, 0x1.3b4270b99bd06p-363, 0x1.8988885e0b317p-564,
     0x1.d2a08553c7b08p-622, 0x1.f2ff42ada3c6bp-18, 0x1.0f13dbb493b43p-157,
     0x1.26ef8f02e4edep-158, 0.0, 0.0, 0.0, 0x1.f07b83eba7c76p-134, 0.0,
     0x1.abe0f346f90eep-738, 0.0, 0.0, 0x1.614efc3be892p-625, 0.0, 0.0,
     0x1.7dc262330fafbp-709, 0x1.c4c67f046c375p-505, 0x1.26ef269bd88edp-504,
     0x1.ff625fa967efbp-636, 0.0, 0.0, 0x1.2de3bf5e3d9e6p-637, 0.0,
     0x1.a9bf7a69f316ep-174, 0.0, 0.0, 0x1.04b5d542fbf3fp-465, 0.0, 0.0, 0.0,
     0x1.ef6a3a434443ep-669, 0x1.1f46163f88447p-414, 0x1.712440cd74181p-611,
     0x1.2f5546edc79f4p-849, 0.0, 0.0, 0x1.73001acc7ed5bp-983, 0x1.0a851736bb832p-982,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e28d7c14deaa2p-702, 0x1.038f36fe0d365p-497, 0.0,
     0.0, 0x1.cdf463b986d83p-913, 0x1.72f494aab9b15p-56, 0.0, 0.0,
     0x1.5b27e46eb8691p-409, 0.0, 0x1.8f7ce95e1e291p-324, 0.0, 0x1.7bec5476d361cp-661,
     0x1.0e60523ed3cc1p-44, 0.0, 0.0, 0.0, 0x1.2f5d137792fc1p-952, 0.0,
     0x1.e59ce7e220fc3p-184, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6650e29f6d2p-187, 0.0,
     0x1.28eb206c9f2a1p-985, 0x1.8d6680000a71dp-15, 0x1.6b6cf1368b244p-494,
     0x1.59e2050affe88p-935, 0x1.10cee3bc5a55dp-486, 0.0, 0x1.6bf38811cf2aap-482,
     0x1.025b1012f8f14p-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3a20a45e5aa5p-556, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59e14d99daddfp-613, 0x1.69820b0e151c7p-451,
     0.0, 0x1.035a43b212ccep-422, 0x1.076a4a163a764p-925, 0.0, 0x1.957879289786p-1006,
     0x1.e549063afcd05p-873, 0.0, 0x1.a8dfba21a477ap-530, 0x1.a2a0719b0bdfp-565,
     0x1.c7c557d79c974p-107, 0x1.83333ccad9f68p-149, 0x1.537df3dc6f344p-431, 0.0, 0.0,
     0x1.b1919974ba943p-96, 0x1.77b5271b2d1acp-525, 0.0, 0.0, 0x1.f1ecd48f096dep-459,
     0.0, 0.0, 0x1.e7f754cd2749ep-540, 0x1.26410ab4a5a07p-961, 0.0, 0.0,
     0x1.86c406c455407p-977, 0x1.f9937fb86a6f2p-791, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d52771d3fc04dp-958, 0x1.26e144453c84cp-200, 0x1.541a39f33c138p-4, 0.0,
     0x1.abe2d3f338427p-904, 0x1.e59f410ac77dcp-287, 0x1.45f79659da356p-422,
     0x1.28fedba7a258dp-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66b2ffeaa24cp-832, 0.0,
     0x1.14c3b3b0cff8ap-362, 0x1.06603a1e58c59p-895, 0x1.b35edae87fa03p-775,
     0x1.e40937e266d19p-1009, 0.0, 0.0, 0x1.af70bbf7a41e6p-402, 0.0, 0.0, 0.0,
     0x1.80a9871526f15p-611, 0.0, 0.0, 0x1.aeef42b995948p-603, 0.0, 0.0,
     0x1.4822d4c9a9e75p-483, 0.0, 0x1.88a00822a7533p-562, 0x1.ac6a70ce93993p-985, 0.0,
     0x1.63c257ece8355p-361, 0x1.f6873ab438d14p-968, 0x1.fcfff2a07a5e8p-1019, 0.0,
     0.0, 0.0, 0.0, 0x1.1b1377d2b08b9p-229, 0x1.482d08199f368p-125, 0.0,
     0x1.2e8e81762521p-235, 0.0, 0x1.1f69372bd516ep-886, 0.0, 0x1.96d0bacd0201cp-750,
     0x1.0512c487e6f8dp-202, 0.0, 0.0, 0.0, 0x1.c26ca36ad325bp-227, 0.0,
     0x1.e46da0e22d997p-792, 0x1.d81f3ed14128dp-1018, 0.0, 0.0,
     0x1.60523d371071dp-417, 0.0, 0x1.2eed73e148b3p-176, 0x1.25b64f117c1f3p-412,
     0x1.5007b6ea5fdd2p-837, 0.0, 0.0, 0x1.99e407d974fc8p-324, 0.0, 0.0, 0.0,
     0x1.632b1a491ebd6p-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7547212e9c0afp-761, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b96b8e3ddbbc1p-31, 0.0, 0.0, 0.0, 0.0,
     0x1.4de958fdb1772p-831, 0x1.f0712a218b453p-904, 0.0, 0x1.f86fa6d3f42f9p-688, 0.0,
     0.0, 0x1.819e7eed6c4d1p-549, 0.0, 0x1.aef75ba3a63f1p-467, 0.0,
     0x1.99005ea490d01p-420, 0x1.da19bcc44d849p-989, 0x1.99cf326d97676p-208, 0.0,
     0x1.cdde173af49cfp-460, 0x1.803d4a669b3p-843, 0.0, 0x1.f93b983ff6d2fp-825, 0.0,
     0x1.d4a5f25bf415ep-768, 0x1.f34bbae1795p-534, 0x1.f9a13c26f88ebp-514,
     0x1.df67079bbbc1fp-25, 0x1.84c7f33c2dba7p-284, 0x1.a44876098a6c1p-992,
     0x1.9097434e636ffp-14, 0x1.2cf0ddfba5d3dp-172, 0.0, 0.0, 0x1.c8661938b1ef1p-143,
     0x1.a246b059619f9p-818, 0x1.1e85ac9310fd6p-656, 0.0, 0.0, 0x1.cf9c0b1280e4cp-736,
     0x1.90ed81d6eb2e1p-718, 0x1.cfac1a3ff4d16p-756, 0.0, 0x1.753e801ea3eb5p-707, 0.0,
     0.0, 0x1.ecabc1849e62bp-848, 0x1.55932d67453f5p-13, 0x1.96b2dd3949e95p-650,
     0x1.6db2226085166p-835, 0x1.b687ab4476345p-892, 0x1.4ffc018fe7b83p-279,
     0x1.8ee3c5819aacep-690, 0x1.62c3ac5af2b3fp-895, 0x1.6464e206cef66p-1005, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16d786553256p-602, 0x1.a491eef21b35fp-412,
     0.0, 0.0, 0.0, 0.0, 0x1.b9ddae5b2cf3fp-937, 0x1.c373a0f536b5cp-874, 0.0, 0.0,
     0x1.d2b1e873eb6ep-326, 0.0, 0.0, 0x1.8c4ff2750908dp-99, 0.0, 0.0,
     0x1.231933e3f4792p-329, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b0e2879b459fp-234,
     0.0, 0.0, 0.0, 0x1.c757f3e5d4daep-216, 0.0, 0x1.06d81f115aa56p-48, 0.0, 0.0, 0.0,
     0x1.b94bd47dcb474p-414, 0.0, 0.0, 0.0, 0x1.5b458398d9803p-886,
     0x1.b959b74d51503p-518, 0.0, 0x1.889fc0e881a9dp-600, 0x1.b347ea3236fep-629,
     0x1.51637b7ba679dp-413, 0.0, 0.0, 0x1.3ef75f8504d02p-679, 0x1.e38b4039af8fdp-534,
     0x1.c555cd219bd1fp-671, 0x1.664d230af08edp-605, 0x1.f93cb35a795cp-500, 0.0,
     0x1.62c5ddd02ba23p-432, 0.0, 0x1.efabf0f2b9e14p-472, 0x1.c3491e5a9d285p-777, 0.0,
     0x1.caa34ba94b2ap-620, 0.0, 0x1.5e00ef9589a7fp-976, 0.0, 0.0, 0.0,
     0x1.9489fff8b57cdp-305, 0.0, 0.0, 0.0, 0x1.862bb9c8ffe44p-392, 0.0, 0.0,
     0x1.b19c950d31187p-271, 0x1.007b6960e2001p-181, 0x1.e741aa013aa3cp-562, 0.0, 0.0,
     0.0, 0x1.d2a17f8f33a79p-306, 0x1.e86ee0ec58374p-720, 0.0, 0.0,
     0x1.665fd2cce13ap-525, 0x1.ce165596b8086p-392, 0.0, 0x1.f849766a3a7b2p-91,
     0x1.3ee9211a85f51p-698, 0x1.d0f6ff9c5efc2p-598, 0.0, 0.0, 0x1.0de5d38271c5fp-398,
     0.0, 0x1.083868dafe396p-362, 0.0, 0.0, 0x1.df085eaed20a6p-278, 0.0, 0.0,
     0x1.45ded8df15574p-130, 0.0, 0x1.1a810bc496f13p-513, 0.0, 0x1.f9879d2f864cfp-373,
     0x1.54cdbca7c15f5p-796, 0x1.369d103e9690bp-494, 0x1.54129b4ca225ep-324,
     0x1.56b18b4456dbep-935, 0x1.f92af937bef5fp-208, 0x1.1d286a3884865p-774, 0.0,
     0x1.06880a9a57b96p-330, 0x1.b4769b9bd78ddp-986, 0x1.5424186cf8465p-22,
     0x1.494a961f2e446p-807, 0x1.a736c82fad44p-854, 0.0, 0x1.416f4b9a8a88fp-323, 0.0,
     0x1.6d0b954b5d1cbp-803, 0x1.b607fb6d7a06dp-472, 0.0, 0x1.f8b603ca88a6bp-604, 0.0,
     0.0, 0.0, 0x1.733c1b19184d5p-205, 0x1.845dae30f56e1p-121, 0.0,
     0x1.77b71f14e0178p-29, 0.0, 0.0, 0.0, 0x1.3258012e46df2p-604,
     0x1.64d480e301c67p-554, 0.0, 0x1.1e8c19d6edb0ap-813, 0x1.745a870b4332bp-199, 0.0,
     0.0, 0x1.f867ddf2d9f16p-22, 0.0, 0.0, 0x1.54ca3fa090442p-93,
     0x1.28752c50c67edp-1019, 0.0, 0.0, 0x1.ac2aff8fafc95p-176,
     0x1.225d4cf23ca14p-345, 0x1.b54d3b381cb96p-818, 0x1.0a7908e06fbe3p-650,
     0x1.05e0cf73f8f34p-286, 0.0, 0.0, 0x1.55230108746c6p-332, 0.0, 0.0,
     0x1.71152b8ffac16p-113, 0.0, 0x1.8ac09696167cfp-957, 0.0, 0.0,
     0x1.9c457f1bf54bap-476, 0x1.55b6b04e99a84p-5, 0.0, 0.0, 0.0,
     0x1.984c26db35bfep-110, 0.0, 0.0, 0x1.c88b5dbdefc43p-937, 0.0,
     0x1.e4b5b142a2f26p-364, 0.0, 0.0, 0.0, 0x1.b5b95801070b9p-357, 0.0,
     0x1.4cf77d6594245p-588, 0x1.b85fbd78fbaf5p-802, 0x1.1cf57e7420bbbp-172, 0.0, 0.0,
     0x1.38599a96061d5p-105, 0.0, 0.0, 0x1.fed460509390ap-170, 0.0, 0.0,
     0x1.5ddb1caa00f6fp-974, 0.0, 0x1.1af8f5c2de53p-82, 0x1.8c02ca27f166dp-380, 0.0,
     0x1.fc676520b6e4ap-706, 0.0, 0.0, 0.0, 0.0, 0x1.6bf1218b126f4p-233, 0.0, 0.0,
     0.0, 0.0, 0x1.a882432c14156p-347, 0.0, 0x1.5a4ff06b97352p-512, 0.0,
     0x1.9dc4ddc1cfeb8p-324, 0x1.1d04f1956d8dap-463, 0.0, 0x1.453fa56525aa7p-14, 0.0,
     0x1.8db85a89cf1bap-125, 0x1.6133b68578b22p-806, 0.0, 0.0, 0.0, 0.0,
     0x1.731015692cb77p-473, 0x1.71f38d3c54181p-93, 0.0, 0.0, 0.0, 0.0,
     0x1.278937b2c3a6cp-641, 0x1.668717beb7b5ap-87, 0x1.106ca04e15b14p-33
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
            tmp1 = Sleef_coshd2_u35kvx(tmp0);
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
    printf("Sleef_coshd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_coshd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
