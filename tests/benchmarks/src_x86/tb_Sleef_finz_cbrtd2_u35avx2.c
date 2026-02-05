/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd2_u35avx2128.c --function \
 *     Sleef_finz_cbrtd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
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
     0x1.b0caa7cd6c47fp-371, 0.0, 0x1.d39492d6b7182p-845, 0x1.a82fb2dc5e845p-372,
     0x1.29b3f936e8d53p-665, 0.0, 0x1.8bd56db447b01p-711, 0.0, 0x1.02dbd5e7e1052p-360,
     0x1.9e8c1a89cd2c3p-445, 0x1.2935df0ea170dp-64, 0x1.26777e6e5284cp-991,
     0x1.0ded50887f9a8p-384, 0.0, 0.0, 0x1.88ff884734c37p-618, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.410dbd6d5c805p-454, 0x1.90e7dcb0f0561p-298, 0x1.fbd8fff895e37p-129,
     0x1.7fb67d292804fp-1019, 0x1.3c24ca9218b71p-540, 0x1.a2750f9fed651p-120, 0x1p0,
     0.0, 0x1.50396a25f827dp-33, 0x1.d4c29bf8c4d22p-37, 0.0, 0x1.0821a9aec113ep-884,
     0.0, 0x1.6a1c1b253d1f4p-523, 0x1.39a5e931ee7c8p-659, 0.0, 0.0,
     0x1.50e92e4fa1ad5p-716, 0.0, 0x1.47e62148e3d22p-857, 0x1.cbe012a79ffd2p-236, 0.0,
     0x1.0ee7b109276c4p-59, 0x1.e3c93c8ea7fccp-330, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.20fc0fbe97575p-516, 0.0, 0.0, 0.0, 0x1.a1a73a8f8c79bp-283, 0.0, 0.0,
     0x1.82002056f1955p-282, 0x1.6e0013a913b34p-615, 0.0, 0x1.718db6a467574p-543,
     0x1.5f7aa7671c8e2p-245, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0cdadbfdaaa1p-746,
     0x1.b99553eda1039p-685, 0.0, 0.0, 0x1.3bff88f7fa34bp-868, 0x1.d931612600d0fp-258,
     0.0, 0x1.88494069fe25dp-73, 0x1.abc6bc2aa0acdp-219, 0x1.bf2226aa46ce4p-645, 0.0,
     0x1.09a79fbfd1a9dp-307, 0x1.af5b357b035d1p-180, 0x1.951dfdc69fa2p-315,
     0x1.a24e428b4f64cp-71, 0x1.7372ac4ef37c2p-974, 0x1.41bd8f5cd2286p-275,
     0x1.3b887a86d6007p-306, 0x1.9c6b9e0bb4477p-417, 0.0, 0.0, 0x1.3b6b1fec8b402p-238,
     0.0, 0.0, 0x1.8939c6ba16aa1p-313, 0.0, 0x1.27ec3cfaa5412p-647,
     0x1.1b17e38882b8dp-1, 0x1.e2bd8d4acd7ddp-276, 0x1.3133c9d99e021p-407, 0.0,
     0x1.9315910c86652p-439, 0.0, 0x1.9a6e990137e2cp-300, 0x1.685b10cc62ae5p-828, 0.0,
     0x1.89c004402234cp-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e1456ef5c6ab1p-461,
     0x1.f5cae5337722dp-425, 0x1.4846077e6462p-950, 0x1.9ec4c2f5f6474p-923,
     0x1.d4271cc25c6dep-439, 0x1.6ea5d8dd7733dp-95, 0x1.ed24bd081ef12p-256, 0.0, 0.0,
     0x1.2295f8a9164c5p-916, 0.0, 0x1.e8ca8a5fd6028p-566, 0.0, 0x1.754beca8e9373p-451,
     0.0, 0.0, 0x1.b45544b714256p-1, 0x1.02aa534a57a39p-1005, 0.0, 0.0,
     0x1.12ff9911b2a2bp-265, 0.0, 0x1.e099459abe3ebp-52, 0.0, 0.0,
     0x1.a87c40ae93cabp-985, 0.0, 0x1.50e26a0294d5p-995, 0.0, 0x1.389718035b7adp-913,
     0.0, 0x1.e08d4f11eb145p-558, 0x1.4395e2740cdcap-330, 0x1.d204f253245fcp-118,
     0x1.1792ceacca802p-156, 0.0, 0x1.72cf707cc306fp-272, 0x1.cda7b108f7e78p-764, 0.0,
     0.0, 0.0, 0.0, 0x1.b1aa2ed4e2bc6p-787, 0x1.2b87023881d62p-477,
     0x1.3e79817ba4ec6p-196, 0x1.25d28e75f541dp-764, 0x1.1d027f222909cp-335,
     0x1.06595dbd1b5a4p-86, 0x1.7911e55a83562p-307, 0.0, 0.0, 0.0, 0.0,
     0x1.70ace0ecd6e1bp-669, 0x1.fb253f26b2b33p-475, 0x1.ee54a06efc505p-133, 0.0, 0.0,
     0.0, 0x1.59f13a0f2e12cp-1001, 0x1.5d855ac5190c8p-282, 0x1.9733b32d74c31p-669,
     0x1.36d7819210ccbp-109, 0x1.e847ef041afb3p-195, 0.0, 0.0, 0x1.bd3ded3a003e3p-489,
     0x1.517483f1154cp-742, 0x1.56fd1e273d4bbp-48, 0.0, 0x1.56bf04265309dp-876, 0.0,
     0x1.a01e46a06a28fp-228, 0x1.82ce21fccb1c9p-423, 0x1.9a8765f9639d7p-285,
     0x1.908dbd6d61ae4p-702, 0.0, 0.0, 0x1.186d895d686abp-516, 0.0,
     0x1.c9d973f0c7a84p-743, 0x1.e3c99f6132908p-556, 0x1.c31d35f09c157p-714, 0.0,
     0x1.11c727e732e1ap-375, 0.0, 0x1.9ec157badd3c6p-622, 0x1.ba669c3fa8f3bp-446, 0.0,
     0.0, 0x1.53fa79a18d1cfp-846, 0.0, 0x1.8a55d3d7f503bp-977, 0.0, 0.0,
     0x1.9dd9b14ec3edfp-382, 0x1.c70790fcf4e73p-31, 0x1.f2d0e06de6fbep-55,
     0x1.9eac587370d45p-417, 0.0, 0x1.3bb9564f3945fp-398, 0x1.a2e8492303dfap-916,
     0x1.04b3383b555e6p-94, 0.0, 0.0, 0.0, 0x1.cf98ae02d5f15p-537,
     0x1.e56fdbcbf44edp-32, 0.0, 0.0, 0x1.7c6c82852857p-1014, 0.0,
     0x1.99fe29eb9b6p-408, 0x1.9321f5686a3f2p-243, 0.0, 0x1.307153bab4acbp-90,
     0x1.4b93da586eb67p-891, 0x1.6542f51596cfap-54, 0.0, 0x1.bb392cf3bf459p-997,
     0x1.681e426375116p-521, 0.0, 0.0, 0.0, 0.0, 0x1.df7b87bb21c44p-682, 0.0,
     0x1.7caf24ae5c164p-283, 0x1.89680b75ca182p-39, 0x1.1ee8a2641b34p-992,
     0x1.3e631bfd87aa2p-72, 0.0, 0x1.e543c3df8d9bfp-489, 0.0, 0x1.756dd97cf05fdp-790,
     0.0, 0x1.189ef04674a23p-203, 0x1.aadf3a9fe46dbp-610, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1549bc28725b1p-945, 0x1.f59b0c2386802p-359, 0.0, 0.0, 0.0,
     0x1.17910a1ad96dep-50, 0x1.26c2ba3a8c3b5p-880, 0x1.aeb83cba3ce73p-727, 0.0, 0.0,
     0x1.1a5e4a6c2c2d4p-211, 0.0, 0.0, 0.0, 0x1.19f4586381787p-794,
     0x1.bfe35370cb067p-347, 0x1.35688defb20f7p-971, 0.0, 0.0, 0x1.f4131d8939ddp-512,
     0x1.2450ecc03acbdp-641, 0x1.aeadbe300e05cp-395, 0x1.db81020961bb7p-821,
     0x1.3d8ae8d76845bp-328, 0.0, 0x1.5df435dd792cfp-535, 0x1.e89ed0c68895ep-823, 0.0,
     0x1.e3056948a6133p-1013, 0x1.1a01896b99102p-213, 0x1.c345cb6c84176p-581, 0.0,
     0.0, 0x1.6fd1502ace30dp-385, 0.0, 0x1.836e558144d0fp-815, 0.0, 0.0,
     0x1.4e7a8f5632cdcp-459, 0x1.ac619ee8caedcp-682, 0.0, 0.0, 0.0, 0.0,
     0x1.9619b053dccecp-249, 0x1.17b15cb0d1b05p-351, 0.0, 0x1.9f31128c93413p-482, 0.0,
     0.0, 0.0, 0x1.a3b63947eb445p-519, 0.0, 0x1.1126eef3f58aep-123, 0.0, 0.0,
     0x1.eb60ae439d5b4p-867, 0.0, 0x1.22ca014a12defp-28, 0x1.a24bd3f6b368dp-172,
     0x1.9f6d1fd00277cp-67, 0x1.92b0cb7d8dfbap-1014, 0.0, 0.0, 0.0,
     0x1.c1f7bf13b8a6cp-943, 0x1.3528494835e15p-863, 0x1.d4ebee9d92703p-127, 0.0,
     0x1.4eb7b66d3c805p-799, 0.0, 0x1.339cc0f687419p-87, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bbd3fd98e32fp-878, 0x1.cfa4cceca7ee4p-921, 0.0, 0x1.106183d9eafabp-351, 0.0,
     0x1.179930da4f7d5p-769, 0x1.d838381ac00a4p-50, 0.0, 0.0, 0x1.ab5a548250e6fp-927,
     0.0, 0x1.30e2725507142p-542, 0.0, 0.0, 0x1.248879d23080ap-198, 0.0, 0.0,
     0x1.70b22ed5b1c9dp-566, 0x1.79784660a14cbp-724, 0.0, 0.0, 0.0,
     0x1.5102039ca694ap-774, 0x1.3dac34a13114ep-867, 0x1.e790e65403646p-485, 0.0,
     0x1.5a78afd45c37ap-661, 0x1.60a80e70f397ep-427, 0.0, 0x1.f6c09e62f100ap-229, 0.0,
     0.0, 0.0, 0.0, 0x1.fc72d12e33671p-280, 0x1.04f37178a9ae8p-574, 0.0, 0.0, 0.0,
     0x1.eabd90b910e77p-704, 0x1.c357bfe81fabcp-95, 0x1.f569f362038d9p-598,
     0x1.e7570b116f3aep-320, 0x1.eb2ba2c3011c1p-598, 0x1.bff3fd24666e7p-354, 0.0,
     0x1.c1c33f461bf78p-147, 0.0, 0.0, 0x1.c282facfcd382p-326,
     0x1.1d060c8827f3dp-1019, 0x1.902df1e88067cp-354, 0x1.a6781a9248162p-490,
     0x1.9e4f08365f6ddp-945, 0.0, 0.0, 0x1.176943b7eeaf7p-934, 0.0, 0.0,
     0x1.fc03639f52928p-15, 0x1.df557939374a6p-617, 0x1.26571a1fe1f1ep-451,
     0x1.a38936678343bp-530, 0x1.9c3e4df6b429fp-147, 0x1.b96afad3434cp-213,
     0x1.51c23fd704a3cp-899, 0.0, 0.0, 0x1.b7d5cfc0f75e7p-545, 0.0, 0.0,
     0x1.da5bda10ad7acp-146, 0x1.d39557c3a3e46p-379, 0x1.a80132ac566bdp-285, 0.0, 0.0,
     0.0, 0.0, 0x1.ee8075002276ep-148, 0x1.bfbdd110c7b44p-939, 0.0, 0.0,
     0x1.243e9469247f9p-965, 0x1.6bfe58a8e00ap-408, 0.0, 0.0, 0x1.1093f541d4a1ep-270,
     0.0, 0.0, 0x1.6eedec3bcabb2p-128, 0x1.e38876abf1d3ep-739, 0.0, 0.0,
     0x1.ed72df83ea62fp-544, 0.0, 0x1.0252749a38716p-651, 0x1.0219b4d3161d8p-113,
     0x1.d94ce706b396p-626, 0x1.40fab287b2907p-370, 0.0, 0x1.d5d20235ac8c7p-932,
     0x1.9807f09b68c9dp-501, 0x1.f1881c1dcb5b4p-748, 0.0, 0.0, 0x1.5fc5871220306p-221,
     0.0, 0x1.bf080ce570b3ap-290, 0x1.a1b931ac84967p-726, 0.0, 0x1.80d3da6392f7p-238,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db597bb875b1dp-602, 0x1.a1aba61061402p-549,
     0x1.b76794b7035a9p-1002, 0x1.ba5d256bc77f7p-528, 0x1.c055d090fb32ep-760, 0.0,
     0.0, 0.0, 0x1.3453917b2eafbp-789, 0x1.382f585d5a904p-1008,
     0x1.6b010a7a80ba9p-865, 0x1.d0ef46e6719dfp-39, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.460d2d6f9f75dp-890, 0x1.91aee9b897d61p-112, 0.0, 0x1.8c982e09a9a5bp-635,
     0x1.f826b4470115cp-600, 0.0, 0.0, 0x1.f850beee25c21p-179, 0.0,
     0x1.9e87376bbeb07p-706, 0x1.8f68f2a5a28b5p-659, 0.0, 0.0, 0x1.bdcae392326fap-118,
     0x1.257db3fb6dee5p-244, 0x1.7a0617f7fefp-202, 0x1.81e41f5a00381p-489,
     0x1.be84543b3d402p-184, 0x1.d90fb018a0637p-322, 0.0, 0x1.7e85f19968751p-800, 0.0,
     0x1.37e2392f6e627p-170, 0x1.d554ba9fd233ap-93, 0x1.acd0796f502dbp-741, 0.0, 0.0,
     0.0, 0.0, 0x1.1f726d95877a8p-772, 0.0, 0.0, 0x1.263559c1b6fcap-992,
     0x1.9ac6603ea82acp-799, 0.0, 0x1.3485967c96b54p-127, 0x1.01efd429ab828p-172, 0.0,
     0.0, 0x1.acc51ccf37a1cp-697, 0x1.6c032ebf43cabp-148, 0.0, 0.0,
     0x1.7a9937ea4e94ep-623, 0.0, 0x1.e564c16ddc7ebp-233, 0x1.ed51df4b5938fp-92,
     0x1.e01b2342c1b86p-239, 0x1.9afce76c646a9p-417, 0.0, 0x1.33f0cb77c1aacp-286,
     0x1.45be8c473721ap-697, 0x1.66518101ee29ap-917, 0x1.5eb7a743ee35fp-139,
     0x1.af99f8f4640afp-439, 0x1.bd3d150d0d611p-520, 0x1.6ff4bc0d7598fp-328,
     0x1.79ce741933026p-161, 0x1.e1b2c4738e885p-458, 0.0, 0.0, 0.0,
     0x1.9beeeee5bcd5bp-361, 0x1.b1ba086762b5fp-42, 0x1.7b0126da2a81ap-841, 0.0, 0.0,
     0.0, 0.0, 0x1.216afb3f2b1b8p-826, 0.0, 0.0, 0x1.e8586a56f6d2ap-888, 0.0,
     0x1.10fc689d181fbp-187, 0.0, 0x1.468b20af55325p-479, 0.0, 0.0,
     0x1.d40b3e7f51333p-565, 0x1.69f322c1e59a4p-662, 0.0, 0.0, 0x1.83f75ae345c98p-996,
     0.0, 0.0, 0x1.6d33dba0206f4p-48, 0.0, 0.0, 0.0, 0.0, 0x1.5260c0347ebap-46, 0.0,
     0.0, 0x1.d9f15854773c9p-316, 0x1.0b4d665e78cdep-80, 0x1.b52994a8cb8f6p-374, 0.0,
     0x1.c25cc38feb9fap-760, 0x1.8f7d612669715p-430, 0.0, 0x1.abd46ccca7fa4p-914, 0.0,
     0x1.59decb0b08d59p-931, 0.0, 0.0, 0.0, 0x1.6ed5b7728f4f2p-930,
     0x1.54ceaf49cf0eep-322, 0.0, 0.0, 0.0, 0.0, 0x1.23105d871bc3cp-914, 0.0, 0.0,
     0x1.aeaf47ac536dfp-208, 0.0, 0x1.3e5dd333cea25p-622, 0x1.87c7bfb71b5c7p-103, 0.0,
     0x1.1cb85e1d6f527p-783, 0x1.87b2549d37f29p-693, 0.0, 0.0, 0.0, 0.0,
     0x1.e90262c45fa82p-612, 0x1.08324a0093da7p-158, 0.0, 0x1.6bbd51d8fa1dep-472,
     0x1.ff5800fda799fp-700, 0x1.a511db9b2a01fp-399, 0.0, 0x1.b0fcc0363ab3ap-53, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.45882dd03b6b6p-60, 0.0, 0.0, 0.0, 0x1.d33040d81b4bfp-962,
     0.0, 0x1.0b0878b8c8b82p-945, 0.0, 0.0, 0x1.2997fc068123ap-36, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.40d33d542b3c3p-277, 0.0, 0x1.84238d35c89e7p-1018,
     0x1.fae04cb452057p-653, 0.0, 0x1.a8a73b19755d4p-952, 0.0, 0x1.77bc1ad573f86p-100,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63fb91c045ff8p-955, 0.0, 0.0,
     0x1.b34b03804f15bp-754, 0.0, 0.0, 0x1.a9d990fa6a601p-496, 0.0,
     0x1.94303345de033p-539, 0.0, 0.0, 0x1.2eb361971df95p-636, 0x1.84e2278bb09c2p-115,
     0.0, 0x1.c48bf14bb177fp-275, 0x1.ebc6ff504fe38p-677, 0x1.828e37f67f511p-369,
     0x1.a3cfaa5556c98p-396, 0x1.97923a293a911p-189, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.907a756bdf8fap-115, 0x1.63df84880028dp-514, 0.0, 0.0, 0x1.a4da9b20e5ebcp-495,
     0.0, 0.0, 0.0, 0.0, 0x1.96ebb4ca01629p-153, 0.0, 0.0, 0.0, 0.0,
     0x1.d4f1fe338b9bdp-66, 0x1.4eac374e286f5p-594, 0.0, 0x1.430e9a816016fp-479,
     0x1.cfee42f3ef55bp-698, 0x1.81a11626441adp-83, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.397116a0eda82p-67, 0.0, 0.0, 0.0, 0.0, 0x1.1d483bee6f86dp-746, 0.0, 0.0, 0.0,
     0.0, 0x1.01f0c766d7bf2p-762, 0.0, 0.0, 0x1.e5e2d84c82285p-430, 0.0,
     0x1.cab1189cca3dep-592, 0.0, 0x1.d70dbfe9fee1bp-92, 0x1.f944f3b2dad47p-443, 0.0,
     0x1.30c2942beae82p-51, 0.0, 0.0, 0x1.0991ae371c5adp-501, 0x1.46d673e9ca7a7p-652,
     0.0, 0x1.bb9abb644b85bp-693, 0.0, 0x1.ff42f18bb3d64p-434, 0.0,
     0x1.bda77b5ba57adp-655, 0x1.1c6c9e7456948p-942, 0x1.1ffc95a13803cp-172, 0.0,
     0x1.7e5a172b58013p-758, 0x1.fa9cd18c9f28ap-782, 0x1.303949894c18cp-362, 0.0,
     0x1.8f9c31f2aa88ep-157, 0x1.2d5efed9452cep-578, 0.0, 0.0, 0x1.5ddedc4c13c56p-766,
     0.0, 0.0, 0.0, 0x1.8280c2906e18cp-34, 0x1.7d0ac92ff3842p-864,
     0x1.af822b6df1184p-317, 0.0, 0.0, 0.0, 0x1.738948aaedc47p-970,
     0x1.37092b827fb2bp-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba12c0f360fdap-161,
     0x1.b69a9d9981c6p-733, 0.0, 0.0, 0x1.b12565ad09746p-37, 0.0,
     0x1.19e17399e7d3ap-287, 0.0, 0x1.a17b3e144d4e8p-686, 0x1.8d89e2394e33cp-817,
     0x1.5664f3f6921cdp-956, 0x1.2df4dc6c19b96p-259, 0x1.a7b2e02bf230cp-473, 0.0,
     0x1.c0d0c20f2da13p-432, 0.0, 0x1.52e8877a4ec4ap-340, 0.0, 0.0,
     0x1.91ce2fcf6b69bp-304, 0.0, 0.0, 0x1.ad73b8e634629p-967, 0x1.39c97a39e616ep-682,
     0x1.981e184f2915p-151, 0x1.8af1af682c90ep-186, 0.0, 0.0, 0x1.78bbaa7bd4d25p-268,
     0x1.0ef7a54349218p-663, 0.0, 0.0, 0.0, 0x1.a1c6a663dda35p-374, 0.0, 0.0, 0.0,
     0x1.4c8eb1f1100bap-802, 0x1.cb0d8caa391dcp-336, 0x1.2274d17aee676p-172,
     0x1.db132988acdc8p-820, 0.0, 0x1.a69e8afd0f77p-129, 0x1.54665df9f895ap-465,
     0x1.82daf830a4abfp-129, 0.0, 0.0, 0.0, 0x1.e7c247c9cc757p-281, 0.0, 0.0, 0.0,
     0x1.482fabce86682p-697, 0x1.72f087ba28cbap-711, 0x1.0edf47c46f6a7p-451,
     0x1.9dd7c7e7d8c9bp-147, 0x1.c7267622485d2p-495, 0x1.03a4477d6944ap-259,
     0x1.85c0f5905c4e8p-894, 0x1.0bc962ffbda2bp-616, 0.0, 0.0, 0x1.37327d947187dp-775,
     0.0, 0x1.c9686da8571d2p-941, 0x1.fed8e645a45b3p-589, 0x1.672d06687b928p-597, 0.0,
     0.0, 0x1.d58941da1e539p-434, 0x1.c981a09f4a315p-618, 0x1.32b8f84b74f5ep-107,
     0x1.21a52aa3e919cp-801, 0x1.72e62f203305dp-709, 0x1.092915195b989p-193,
     0x1.450c304faf679p-879, 0x1.b1b690aed6df5p-914, 0.0, 0x1.4de85f54997fbp-116, 0.0,
     0.0, 0x1.d3db636542681p-664, 0x1.d41dea20de72ep-78, 0x1.a894e85c13e7fp-366,
     0x1.d5abc5825dc16p-767, 0.0, 0x1.d410275b56a98p-257, 0.0, 0.0,
     0x1.911d28323a3b3p-702, 0x1.16067ebb165d4p-808, 0x1.09eb9e39afb52p-888,
     0x1.ea855b6659746p-919, 0.0, 0.0, 0x1.b9cfff7ecc082p-1012, 0.0, 0.0,
     0x1.7f55bb1f22487p-837, 0.0, 0x1.b181d95dd69ccp-462, 0.0, 0.0, 0.0, 0.0,
     0x1.88e7eb266fd39p-459, 0x1.a6c0e32f13a16p-799, 0x1.0ec9b9ed884fep-968, 0.0, 0.0,
     0.0, 0x1.7f9248adde8f8p-984, 0x1.75b603b19a465p-896, 0.0, 0x1.130f054c6daa8p-749,
     0.0, 0.0, 0x1.d3f3c41a1d042p-438, 0x1.f7a12d979f115p-118, 0x1.c3ca84548d19fp-578,
     0.0, 0.0, 0x1.59f44a0834521p-1003, 0x1.b1ad48f7d56fp-878, 0x1.e8f6532f44197p-844,
     0x1.3e08200f5f0cfp-937, 0x1.12f03b726de0ep-358, 0x1.1ac71e49044c7p-413, 0.0, 0.0,
     0x1.2139c0ad1d8fp-261, 0.0, 0.0, 0x1.3c588928a340cp-255, 0x1.5ab5022b1d05fp-881,
     0x1.4a2f4187c4bf6p-136, 0.0, 0.0, 0.0, 0x1.b21d19b23eca9p-626,
     0x1.9d75eb1641a6fp-695, 0x1.3a9c042b5901p-1022, 0x1.32495ec6db8eep-409, 0.0, 0.0,
     0x1.ffc77837fc1d8p-653, 0x1.335cb4448903ep-96, 0.0, 0.0, 0x1.742cf7cb2e453p-892,
     0.0, 0x1.2ea81303e03b8p-77, 0x1.a98d1eeb82c81p-100, 0.0, 0x1.c7d888abb11fbp-551,
     0x1.80e47b03bcc2ep-328, 0.0, 0.0, 0.0, 0x1.0f874e41fb452p-366, 0.0,
     0x1.b9e316ca0aa5p-1009, 0x1.4eaf9a519e942p-863, 0x1.e84667bb8813ap-942,
     0x1.29e99dba4a959p-946, 0x1.a14a767fe81c7p-182, 0.0, 0x1.68203f71d9b66p-925, 0.0,
     0.0, 0x1.39de9647b8049p-209, 0.0, 0x1.4abe654fda96ap-135, 0x1.74ebe1f87ea41p-858,
     0x1.81efc03f625b8p-330, 0x1.ee2419c4e1dd6p-76, 0x1.970f6e27cc166p-245, 0.0,
     0x1.cbb05e607b5fdp-572, 0.0, 0.0, 0.0, 0.0, 0x1.27c2573d13c7cp-923,
     0x1.eb656967ec8a3p-762, 0.0, 0x1.bf38aa38c02dp-1000, 0.0, 0x1.a94583600025fp-83,
     0.0, 0.0, 0x1.acf40f693c088p-275, 0x1.e2d8a77deadf4p-607, 0x1.1815619f0f654p-788,
     0.0, 0x1.76f5664dd27e6p-24, 0x1.a5c765fa9c2bcp-925, 0x1.a8587bb650525p-224, 0.0,
     0x1.00474ea6d723bp-767, 0x1.081a4d280cbep-344, 0x1.b5845d44d9ff6p-1016,
     0x1.4a6a95fdb9d31p-770, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea1c562720017p-995, 0.0,
     0x1.403ad28c9d9a3p-520, 0.0, 0x1.67ecd68017e63p-901, 0x1.034befce80bb9p-214, 0.0,
     0.0, 0x1.d21a4511e95f9p-900, 0x1.0ffb98dd33ca8p-831, 0x1.c9b7c01feaacbp-690,
     0x1.2724c7d8f5eedp-461, 0x1.aac3522e0e30ap-568, 0.0, 0x1.2ab2caf70b429p-522,
     0x1.8beabcc8716a7p-912, 0x1.9338464c1e2ddp-351, 0x1.cb3b04d8c85d9p-872, 0.0, 0.0,
     0x1.079f03a45505p-73, 0.0, 0x1.7cfd9ef1d2567p-739, 0x1.ecc3595e6e732p-27, 0.0,
     0.0, 0.0, 0x1.e8110a78edcafp-491, 0.0, 0x1.d197cda001e75p-634,
     0x1.3e6ba02e686e7p-560, 0.0, 0x1.63ae2564f5eddp-294, 0x1.bbf5868d97bc2p-666,
     0x1.2a4103fc2d53bp-938, 0.0, 0.0, 0.0, 0.0, 0x1.d1161817d8f6dp-507,
     0x1.8cf24326c4df2p-128, 0x1.b1244ecdf5161p-879, 0.0, 0.0, 0x1.cc4f3d25a49cap-774,
     0x1.a2a50d9c7160dp-833, 0x1.80c8d6c0a47edp-185, 0x1.3b07a131626ccp-434,
     0x1.f51a4bd451d24p-344, 0x1.9acd9efe89e45p-282, 0.0, 0.0
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
            tmp1 = Sleef_finz_cbrtd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_cbrtd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
