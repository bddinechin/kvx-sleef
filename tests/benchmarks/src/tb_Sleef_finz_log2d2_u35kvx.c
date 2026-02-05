/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d2_u35kvx.c --function \
 *     Sleef_finz_log2d2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.604e7ba7dbcfcp-977, 0.0, 0x1.4beef3260ecbdp-57, 0.0,
     0x1.ac51ab271707ep-891, 0.0, 0.0, 0x1.b3385757c2c53p-962, 0.0, 0.0, 0.0,
     0x1.1723e7fff252cp-722, 0.0, 0.0, 0x1.e3d76e7721c2p-302, 0x1.333748665e606p-418,
     0x1.1a183a97dff9ep-778, 0.0, 0x1.8339ad8627c28p-541, 0.0, 0.0,
     0x1.f9756b0291fcdp-1011, 0.0, 0x1.abf28eeafa7cp-651, 0x1.4ba726ede6b37p-842, 0.0,
     0x1.20bae4be63b13p-124, 0x1.40a1a7a88747bp-958, 0.0, 0x1.035d958e5beb2p-680, 0.0,
     0x1.b6b056cdd739fp-580, 0x1.10a88ea3281a1p-671, 0.0, 0.0, 0.0, 0.0,
     0x1.99227673597f3p-69, 0x1.2eab29d696779p-525, 0.0, 0x1.d326bbedc60ap-258, 0.0,
     0.0, 0.0, 0x1.d37802c5b2213p-821, 0.0, 0.0, 0.0, 0x1.f1a93bd73628dp-599,
     0x1.c41c32ab099c1p-889, 0x1.7ece7e4562549p-854, 0x1.aafc9f7e751d2p-822, 0.0,
     0x1.270623d78eb53p-107, 0.0, 0.0, 0.0, 0.0, 0x1.2f6de1877b422p-606,
     0x1.dc1dbffb4fd93p-641, 0x1.89129be145097p-339, 0.0, 0x1.7b6af633003dep-23, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e8069b6e44359p-1021, 0.0, 0x1.951381e66e62ap-780,
     0x1.9820007ec00ep-194, 0x1.43ebb1f71e938p-848, 0x1.1b9bc67d66b98p-454,
     0x1.68e9e760a4cb4p-891, 0x1.627b01303cc3ep-260, 0x1.27921e865768p-813, 0.0, 0.0,
     0.0, 0.0, 0x1.f42946b16d287p-866, 0x1.bcd96753bb002p-589, 0.0,
     0x1.9887a224c04ecp-791, 0.0, 0x1.cfb089c55f1c2p-103, 0x1.48305720058bap-694,
     0x1.88e67b2167e1p-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dcf574544ae45p-709,
     0.0, 0.0, 0.0, 0x1.deaf763798573p-529, 0x1.5a25854e70362p-704, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8b3e61ab7229bp-902, 0.0, 0.0, 0x1.0b89acdd642dfp-962, 0.0,
     0x1.f64def626a6edp-794, 0.0, 0x1.ed5555a011fp-727, 0.0, 0x1.2f0baf74cad41p-979,
     0.0, 0x1.6800f9ae1ed0ep-878, 0x1.b5a3fb8ba2596p-896, 0.0, 0x1.c787859342016p-309,
     0.0, 0.0, 0x1.0930aa9db2357p-208, 0.0, 0x1.2f7aed51897b3p-622, 0.0,
     0x1.c72b68d320c13p-809, 0x1.ead1ce96a4b3fp-712, 0.0, 0.0, 0x1.557ffe315da88p-88,
     0.0, 0.0, 0x1.0c82cc80417ddp-774, 0x1.24935b61c05efp-562, 0.0, 0.0,
     0x1.28ed608fe9a7ep-944, 0.0, 0x1.e3600c2ee8e7ap-397, 0x1.d86a968304769p-827, 0.0,
     0x1.a69d3c4f57a81p-227, 0x1.c33e0151c7534p-753, 0x1.2058903e6b921p-1, 0.0,
     0x1.01f828fc7628p-14, 0x1.f59c03adae489p-636, 0x1.80125dddf620ep-725,
     0x1.5c0e1c7000bfcp-69, 0.0, 0x1.289b6472bd9d6p-733, 0.0, 0.0, 0.0,
     0x1.b916b521e346fp-323, 0.0, 0.0, 0x1.56f96cd2bf287p-160, 0x1.2444a2ae807aep-545,
     0x1.f86a0215af8bep-512, 0.0, 0x1.e34788b70d6dep-746, 0.0, 0x1.cfe16ddbd51c2p-855,
     0x1.532d0c7ebc464p-390, 0.0, 0x1.aedad580423p-256, 0.0, 0x1.8d8cfd9f9a88ap-287,
     0x1.cd04460b8d7f8p-352, 0x1.e6bb09c09a943p-212, 0x1.a48bbf1ff3a52p-42,
     0x1.8adb3fd135655p-852, 0x1.3793ab3a03509p-137, 0.0, 0.0, 0.0, 0.0,
     0x1.2408ec5a4831dp-407, 0x1.8b125d2590996p-799, 0.0, 0.0, 0x1.3d72a9efd512dp-606,
     0.0, 0.0, 0x1.8831d9ba61f4fp-751, 0.0, 0x1.262cb40895342p-150, 0.0, 0.0, 0.0,
     0x1.d4cebd5877368p-845, 0x1.452b3abeb79adp-418, 0.0, 0.0, 0.0,
     0x1.35488e5a8dc97p-194, 0x1.36158ece450eap-181, 0.0, 0x1.94e61e04a1c2dp-602,
     0x1.93ad93baf6591p-403, 0x1.59a99fa8a4504p-459, 0x1.71c6cf88ba256p-486,
     0x1.d78b9076be89fp-319, 0.0, 0.0, 0x1.538e13b9a7112p-131, 0x1.75c9b4957f9dap-568,
     0x1.80a311b50e40fp-11, 0x1.8c3064d202a3fp-166, 0x1.57b82eb785d23p-561, 0.0,
     0x1.977e2ac9f6065p-917, 0x1.3fa7c8782467dp-212, 0.0, 0x1.cb7dcf075ee56p-671,
     0x1.18396bddb81c7p-930, 0.0, 0x1.800761cc9439dp-305, 0x1.b486b39fff06bp-66,
     0x1.85b77df577333p-448, 0x1.edaa2c5e904d9p-342, 0.0, 0.0, 0x1.7a040ade70957p-370,
     0.0, 0x1.e3777b91723a6p-707, 0x1.a19de27b1bd86p-781, 0x1.c6c1cde5c7d71p-503,
     0x1.d44fefff4d5c4p-742, 0x1.7f800740feea6p-410, 0.0, 0x1.99708662e8a44p-467,
     0x1.e657bb94314ep-672, 0x1.3e6392cd66d18p-121, 0.0, 0x1.7e1ed8cd7c99bp-952, 0.0,
     0x1.808ac1b2e8873p-20, 0x1.981a0847bbb7bp-753, 0.0, 0.0, 0x1.d8e6ad723acfp-224,
     0x1.32fab08335f46p-686, 0.0, 0.0, 0x1.46e9dcefcf54ep-549, 0x1.2c923e2479e7fp-486,
     0x1.f395d111b162bp-712, 0.0, 0.0, 0.0, 0x1.1afdd511a5c2p-284, 0.0, 0.0,
     0x1.f24c86a7435e8p-548, 0.0, 0.0, 0x1.1149d0af67a05p-792, 0.0, 0.0, 0.0, 0.0,
     0x1.b60dd0bbefbd2p-9, 0.0, 0.0, 0x1.0fa87667f5f8cp-366, 0.0, 0.0, 0.0, 0.0,
     0x1.a63f4007c9d98p-835, 0x1.f824782690691p-614, 0x1.d482349388adcp-860,
     0x1.0a1cb04ba6b08p-930, 0x1.3ff0cc08479f7p-534, 0.0, 0.0, 0x1.25e72e284bd7ap-802,
     0x1.82479716974bep-91, 0.0, 0.0, 0x1.0fda1e980a95cp-433, 0x1.4753a0d395597p-642,
     0.0, 0x1.cd4da0ef7781ap-241, 0.0, 0x1.5b93bfcedc868p-789, 0.0, 0.0, 0.0, 0.0,
     0x1.7dcc80837bceep-779, 0.0, 0.0, 0x1.dee768d74e6f2p-515, 0.0,
     0x1.198ae10b5414p-211, 0x1.8ad7f0e0258c1p-681, 0x1.a104432753b71p-546,
     0x1.f7300a6a11d5ep-959, 0.0, 0.0, 0x1.fead9e055d29fp-882, 0.0,
     0x1.4c7bf2e5eb977p-612, 0x1.0e29056acb595p-181, 0x1.fff8a53065dcfp-493, 0.0,
     0x1.fd981edee61e7p-792, 0x1.20c098a739dd4p-220, 0.0, 0.0, 0.0,
     0x1.8b6f1109faf91p-290, 0x1.8cf5d15ccf5e4p-481, 0.0, 0x1.9d999cfb75cdap-955,
     0x1.f2142dfa21b2dp-330, 0x1.55c2fe5729b9dp-47, 0.0, 0x1.d46379c368921p-285,
     0x1.514a09d0b8181p-581, 0.0, 0.0, 0x1.f5c2360e0478dp-796, 0x1.ed7be7e57e0d8p-73,
     0x1.9061f671bdb65p-920, 0.0, 0x1.09c938558676bp-407, 0x1.8497fb396f8aap-61,
     0x1.69a0b7729f0cbp-241, 0x1.8a144f06601c9p-777, 0.0, 0x1.8ba491ba6838dp-156, 0.0,
     0.0, 0.0, 0.0, 0x1.3ae13a784eb96p-914, 0.0, 0x1.b77b2dbe89cacp-394,
     0x1.7cc2e57421fadp-76, 0.0, 0.0, 0x1.4bc643f2351bp-524, 0x1.4a495ce231ddep-1000,
     0x1.19407ab1a292bp-707, 0.0, 0x1.0ee5d754a321ap-750, 0.0, 0.0,
     0x1.f97872bc0ebfp-525, 0x1.28b894519f735p-997, 0x1.32bdf2aeceeabp-381, 0.0,
     0x1.c1d168f9cbe0cp-864, 0x1.1699292a69066p-50, 0x1.7a384f2f70fcdp-421, 0.0,
     0x1.bd12a1bb655dcp-613, 0x1.6d164332e4bd8p-329, 0.0, 0x1.b4c122190af55p-553,
     0x1.8ef139431dc06p-673, 0.0, 0x1.5620bce9f002ap-684, 0x1.b58813f98bdb3p-47, 0.0,
     0x1.8e0d9a162a818p-574, 0.0, 0x1.83ea8377c96b7p-899, 0x1.54e3328041881p-828,
     0x1.1ce8d69178c22p-425, 0x1.3d797bfb27572p-916, 0.0, 0.0, 0x1.150df8363923p-667,
     0x1.89c277478140bp-308, 0x1.43f1349afaff9p-48, 0x1.e0aaf182567a5p-365, 0.0,
     0x1.5cf5984f0992p-770, 0.0, 0x1.9aef142fa5aa4p-567, 0x1.80796b2080f3dp-373, 0.0,
     0x1.f2d8e10c9a491p-773, 0x1.de448d02a9458p-257, 0.0, 0x1.71315aa35efddp-749,
     0x1.67a9d47e87e3p-120, 0x1.b102d231854e8p-933, 0x1.6bef84b191e4p-55, 0.0,
     0x1.16992e2712048p-497, 0.0, 0x1.54ab04844c5cp-739, 0.0, 0x1.f121888929e65p-590,
     0x1.a6a1c5e603ff1p-1016, 0x1.b28dc66f693a6p-437, 0x1.16ec39242465cp-566,
     0x1.178e77e9422aap-421, 0x1.345962f07604cp-302, 0.0, 0x1.2b52c4f3568adp-174,
     0x1.f87210d2a54acp-597, 0x1.44c721fc45b0dp-732, 0.0, 0.0, 0.0,
     0x1.21edb2d70b277p-464, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d2f1b99da2298p-342, 0.0, 0.0, 0x1.1c672b620638fp-740,
     0x1.d7b5f9cc1af96p-1004, 0.0, 0x1.4285594a28093p-676, 0.0,
     0x1.fc85bea3d50a7p-956, 0.0, 0.0, 0x1.c43526a925bb5p-459, 0x1.86e4f89c2d4b7p-837,
     0.0, 0x1.7f3cd8d888221p-650, 0.0, 0x1.c8702c6eee5a2p-414, 0.0,
     0x1.e093cb2cca978p-506, 0.0, 0x1.04b4508c8cb39p-764, 0.0, 0.0,
     0x1.1c26991e1238cp-810, 0.0, 0.0, 0x1.de678cb3ae349p-609, 0.0, 0.0, 0.0,
     0x1.b8fd78bc2ab1fp-743, 0.0, 0x1.8849053a2a572p-820, 0.0, 0.0,
     0x1.3646f812d73e3p-615, 0x1.d93d84f6188abp-454, 0.0, 0.0, 0.0,
     0x1.8cc0e20b039cfp-89, 0x1.b0c6d82634d96p-202, 0.0, 0.0, 0.0,
     0x1.ec3e942a4340cp-226, 0.0, 0.0, 0.0, 0.0, 0x1.79eabaf61fee9p-779, 0.0,
     0x1.ed9b716e9ca6ep-42, 0x1.3698d1ac875f8p-680, 0.0, 0.0, 0x1.6cdedb405c146p-816,
     0.0, 0.0, 0.0, 0x1.02eb40054c1dep-967, 0x1.756e27bc09899p-395, 0.0,
     0x1.f85dde4fc8131p-525, 0x1.663c8aeb504fdp-238, 0.0, 0x1.2045a90ff7d69p-344,
     0x1.231165bd9cc56p-23, 0.0, 0.0, 0.0, 0x1.f174a2f50c469p-628,
     0x1.47f49facc8b4dp-251, 0x1.9380885953542p-411, 0x1.c8ada4b3fa898p-177,
     0x1.957bb1cd1a24ap-811, 0x1.49dc3011bbc1bp-374, 0x1.4d9b08bb440a2p-348, 0.0,
     0x1.d048f3c1d3abbp-752, 0.0, 0.0, 0.0, 0.0, 0x1.9bd4232b6dd03p-257, 0.0, 0.0,
     0.0, 0x1.c0b5e3184ea62p-856, 0x1.80e2949b161acp-459, 0.0, 0.0,
     0x1.f8544cbeed6b9p-1001, 0x1.5dfee4909c845p-372, 0x1.9f735504bea63p-340,
     0x1.c8975b13796fap-734, 0x1.90581df02121fp-487, 0.0, 0x1.173fa6a906f4dp-720, 0.0,
     0.0, 0.0, 0.0, 0x1.d49cbc99bae7ep-889, 0x1.48581e94f53efp-456,
     0x1.ef3befe8e7678p-402, 0.0, 0.0, 0.0, 0x1.8ac30da7add91p-147,
     0x1.1d3424eccb3e7p-637, 0.0, 0.0, 0x1.985704c19877dp-768, 0.0, 0.0,
     0x1.dbb8c3ee7e152p-784, 0x1.2615042e3217fp-802, 0x1.21e6447f418fcp-704,
     0x1.b7b487c319594p-891, 0.0, 0.0, 0x1.ce47ef592b4b3p-990, 0x1.0042e33cd08cdp-932,
     0x1.3f561dd7914e7p-897, 0x1.2b9efa87d0f94p-854, 0x1.b7017142c0cc7p-833,
     0x1.012ab235de2b6p-389, 0x1.0f2f61638e7d7p-36, 0.0, 0.0, 0x1.c2a375f15a441p-388,
     0x1.49fbb78cd4564p-893, 0x1.f93da9920d1d4p-94, 0x1.1d9406c831ab1p-194,
     0x1.6f8976b955a5fp-378, 0.0, 0.0, 0x1.8cfb9670f7f6ap-594, 0x1.7f688b3aec20bp-836,
     0.0, 0x1.1d033d0b6ca0ap-439, 0.0, 0.0, 0.0, 0.0, 0x1.9ea501e710bc2p-1020, 0.0,
     0.0, 0x1.8d6819a01ed05p-6, 0.0, 0.0, 0.0, 0x1.0c64f20a3e6afp-18,
     0x1.cfcfe750c0a01p-627, 0.0, 0.0, 0x1.82934f352eef9p-563, 0.0,
     0x1.4de9375d39879p-55, 0x1.ba2ee15a149dep-512, 0.0, 0.0, 0x1.a5ceab9115961p-775,
     0.0, 0.0, 0x1.1783610bf4e22p-576, 0x1.9d198c3883d6cp-503, 0.0,
     0x1.6b1852db137bcp-731, 0x1.4b1d42f12d361p-268, 0.0, 0x1.2f561a8ccab21p-908, 0.0,
     0x1.e47a03704481fp-687, 0.0, 0x1.9f000ea795a5dp-108, 0.0, 0.0,
     0x1.07d454fd2d1bbp-530, 0.0, 0.0, 0x1.b4ba7728fece6p-333, 0.0, 0.0, 0.0,
     0x1.a5173c13881c2p-961, 0x1.7af1d8958cf6bp-322, 0x1.6d0a673f03bbdp-661, 0.0,
     0x1.4d509a4102256p-830, 0x1.ab32116992e87p-922, 0x1.72aa321a8e77fp-564,
     0x1.ca31a83f0bb9dp-734, 0.0, 0.0, 0x1.f7fd8f84a0133p-934, 0x1.64ea9faaec715p-547,
     0x1.01abc5e468cafp-264, 0x1.09b0e972e9624p-625, 0x1.b22c9885531dcp-933,
     0x1.f965fe746d2fdp-833, 0.0, 0x1.dd57c6645e541p-579, 0.0, 0.0, 0.0,
     0x1.15ca148db6248p-614, 0.0, 0.0, 0x1.c6eb0a8d232a1p-538, 0.0,
     0x1.3dc7c7ff1d2aap-887, 0.0, 0x1.08fd931a9fcbcp-260, 0x1.d567f9fbc44d5p-718, 0.0,
     0x1.4b6bbea540f98p-550, 0.0, 0x1.656380a352471p-771, 0x1.1e6f28cd60b6fp-321,
     0x1.c964b9fe913b6p-457, 0x1.8874a74b17e2dp-268, 0x1.54c87f38f3568p-645, 0.0,
     0x1.b84456b75a43fp-692, 0.0, 0x1.d2eef0f0563e1p-669, 0x1.01efa01fab5d1p-314,
     0x1.39cb708bfda1dp-301, 0.0, 0x1.3f400e08142f5p-13, 0.0, 0x1.ec791fec7d4fcp-41,
     0.0, 0.0, 0x1.149fb057c53bp-846, 0.0, 0.0, 0x1.d5ba2e76efbe7p-741,
     0x1.0f3dec665e71cp-962, 0x1.6ff0fdf9ac821p-22, 0x1.9f36402ff368bp-177, 0.0,
     0x1.7342143415c0ap-271, 0.0, 0.0, 0.0, 0x1.8e88230aa8edcp-592,
     0x1.c7d9c7b660b7ep-964, 0.0, 0x1.31a2e85ef022ap-232, 0x1.3faab86605a73p-326,
     0x1.c7bddc82807dcp-344, 0.0, 0x1.a854508c233f6p-140, 0x1.a1c7057796075p-375,
     0x1.2f38596e50a35p-1020, 0.0, 0.0, 0x1.1bb6722261b63p-103, 0x1.271f35f901e4p-240,
     0.0, 0.0, 0x1.ca71e4ab9883bp-799, 0.0, 0x1.e1df8aba9b1b3p-205,
     0x1.46b1b490c3d97p-414, 0.0, 0x1.3db18bafb6f6dp-831, 0x1.1a4f69a9730a6p-682, 0.0,
     0x1.b5612cd66799ep-170, 0x1.0677ae97a282cp-243, 0.0, 0.0, 0.0, 0.0,
     0x1.2c9c4433f74d5p-577, 0x1.393cad8afbe3dp-403, 0x1.e3ce11201d3e2p-185,
     0x1.82ad05d19ed55p-796, 0.0, 0.0, 0.0, 0x1.9c6732c8cbe73p-587,
     0x1.0708e75bee026p-329, 0.0, 0x1.0a7caab06c30dp-962, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.82dcb4c2ca0f8p-637, 0x1.15a59e3dccfcfp-782, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8995de97b4a4p-679, 0x1.b2c8527fb62d8p-303, 0.0, 0.0, 0.0, 0.0,
     0x1.f9b8c68e2ab62p-674, 0.0, 0x1.1fde3df8bb802p-447, 0.0, 0.0,
     0x1.d61e87364fa12p-609, 0.0, 0x1.23ff623eabb59p-54, 0.0, 0x1.76ad0c7b9e5cfp-437,
     0.0, 0x1.1950fbf3bcf35p-254, 0.0, 0x1.4d340bcf77c3ep-777, 0x1.60e005848ddfbp-307,
     0.0, 0.0, 0x1.93ca68534701ap-63, 0.0, 0.0, 0.0, 0x1.464e4ddde40b3p-579, 0.0, 0.0,
     0x1.ad3408083a032p-520, 0.0, 0x1.4e8e136131758p-789, 0.0, 0x1.84f1c7b5e8d71p-508,
     0x1.aca7d29838773p-553, 0x1.35d3a67acaac2p-346, 0x1.7cd67cb3a4918p-58, 0.0,
     0x1.34e2385d44ae5p-718, 0.0, 0x1.13a214fdeb76cp-771, 0.0, 0.0, 0.0,
     0x1.4b0752448a10cp-333, 0x1.703ca2aef3ff9p-755, 0x1.7259cfe37bde6p-979, 0.0,
     0x1.0f96027efe6f8p-749, 0.0, 0x1.5d21f8a24563ep-255, 0.0, 0x1.8f28680210374p-140,
     0.0, 0x1.671fe41014d1p-1006, 0.0, 0x1.5103a34fe915dp-291, 0x1.9c3d9907810eap-70,
     0x1.13f7220d2dc42p-978, 0.0, 0x1.338e538511763p-172, 0x1.5d25a005a2d78p-101, 0.0,
     0.0, 0x1.f16e5783a7effp-649, 0x1.5976b0e5caa1dp-610, 0.0, 0.0, 0.0,
     0x1.e44e45448595bp-856, 0x1.808fb7e52b469p-330, 0.0, 0.0, 0x1.a1629e4d853f1p-954,
     0.0, 0.0, 0x1.b4b6b3ea360c5p-945, 0.0, 0.0, 0x1.88dab2b1642e8p-657,
     0x1.3c1a516877cc7p-230, 0x1.644bfdf9cccd5p-90, 0.0, 0x1.be9a46dd3cd82p-690, 0.0,
     0x1.7618cb785d026p-846, 0x1.908729ccd4f58p-580, 0x1.91f34e5c47f31p-415, 0.0,
     0x1.76a40c6e28603p-761, 0.0, 0x1.621719e457379p-41, 0.0, 0x1.5650a42937e8fp-274,
     0.0, 0.0, 0x1.0fcf0bd2d5284p-20, 0.0, 0.0, 0.0, 0x1.c30e1664838cdp-683,
     0x1.a5585d2b6c1d6p-972, 0x1.ab054549a394p-325, 0x1.6a012c280dc8p-947, 0.0, 0.0,
     0.0, 0x1.4ed60ba03116bp-44, 0.0, 0.0, 0.0, 0.0, 0x1.f4cb3bdd87fbcp-792,
     0x1.11fbadb0fe4a3p-654, 0x1.595482bc016ddp-477, 0.0, 0x1.58015535218adp-303,
     0x1.951a85761004p-246, 0.0, 0.0, 0.0, 0x1.7c503acbce6c1p-845, 0.0,
     0x1.56302bb0a89a4p-875, 0.0, 0.0, 0x1.a54c1ae8e5b8fp-545, 0.0,
     0x1.9d10b8993d681p-905, 0x1.8bda36721fafdp-472, 0.0, 0.0, 0x1.59eeef867992ap-747,
     0x1.0953a8258f57cp-637, 0.0, 0x1.00d567ca18f61p-27, 0.0, 0x1.e20b07c6beabp-930,
     0x1.10a5640742678p-1018, 0.0, 0.0, 0x1.33e45912dfdf5p-434, 0.0,
     0x1.511004d6ec704p-515, 0.0, 0.0, 0.0, 0.0, 0x1.bfe2252551f34p-657, 0.0, 0.0,
     0x1.c830fed5433aap-674, 0.0, 0x1.8b15a7d7db94fp-626, 0x1.9d88d91e9767ep-413, 0.0,
     0.0, 0x1.0fdd297309d2ap-709, 0x1.bfbf61e3c3167p-590, 0.0, 0x1.b4c7ee34fbe0dp-890,
     0x1.028256ab5e1fbp-691, 0x1.b6f4b7a9ce203p-718, 0x1.16b0304d5dfb8p-784,
     0x1.eb7b3f75e6ad7p-89, 0x1.690cc7c9ec3bap-663, 0x1.b89dd4790142ep-3, 0.0, 0.0,
     0.0, 0x1.21f9355da1597p-752, 0x1.9ac8abff46c79p-452, 0x1.8ba7115f2665dp-470,
     0x1.1dc1b940e15f3p-864, 0.0, 0.0, 0.0, 0x1.e30a8012b84dap-11, 0.0,
     0x1.e4ea2eb970fap-869, 0x1.dbd09419e2279p-911, 0x1.752afcc1cc046p-249,
     0x1.26998331210d7p-534, 0.0, 0.0, 0x1.93285db4d70c3p-837, 0x1.23b4bcb181854p-264,
     0x1.9aaac8657146ap-819, 0x1.4dc365dd41361p-947, 0.0, 0x1.dd08d3c1a0acp-434,
     0x1.97c57079f9756p-568, 0x1.f3f44edcf0ap-790, 0x1.0b7316c957ep-128,
     0x1.8e889a896f7fp-897, 0x1.0c41431139cb7p-504, 0.0, 0.0, 0x1.b3de30f49d85p-200,
     0x1.b65388cb8dd4fp-748, 0.0, 0x1.76b985a35d5f1p-658, 0x1.c8d9716ee5246p-817,
     0x1.8629d79cfcbc9p-39, 0.0, 0x1.055de00747564p-399, 0.0, 0x1.eb6ed24d96c0dp-731,
     0x1.18060b864bd48p-268, 0x1.b7451191bf26p-905, 0.0, 0.0, 0.0,
     0x1.a3f425c60847dp-673, 0.0, 0x1.74f3f8438a397p-847, 0.0, 0x1.1ceab0ee436eap-593,
     0.0, 0x1.c054abea414f2p-976, 0.0, 0x1.e6c9294f5243fp-972, 0x1.d2e1dc5d31396p-88,
     0.0, 0x1.e60ff6eb60e38p-962, 0.0, 0.0, 0x1.8245aa72f17a9p-878, 0.0,
     0x1.3ba7cbc8f946p-836, 0x1.714b0ca0daaafp-526, 0.0, 0x1.4c0047e079271p-713,
     0x1.b0057448661c9p-409, 0.0, 0x1.0bb5cfce80f2p-167, 0x1.36430416de0a7p-210,
     0x1.5114a7331dd93p-820, 0x1.c607e491953fbp-11, 0.0, 0x1.6b13a5d589bcfp-770,
     0x1.b227e775bf192p-479, 0x1.736383c061cdcp-859, 0.0, 0x1.fdde40a8a4af8p-718, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.369e5200ac2d4p-102, 0.0,
     0x1.dcda8c393d26p-468, 0x1.a858cdf8e04bfp-258, 0.0, 0x1.6fedc5c0f8c2ep-719,
     0x1.ae5fd61c831e8p-536, 0.0, 0x1.f73aab11d7b75p-416, 0x1.bf0b098922f8p-154,
     0x1.d74b851ebdad2p-565, 0x1.b21da45ae8c1ep-651, 0.0, 0x1.9459d7cb54688p-286,
     0x1.880fc4afe39bp-160, 0.0, 0.0
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
            tmp1 = Sleef_finz_log2d2_u35kvx(tmp0);
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
    printf("Sleef_finz_log2d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log2d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
