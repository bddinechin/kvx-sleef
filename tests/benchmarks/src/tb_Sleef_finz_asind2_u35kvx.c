/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind2_u35kvx.c --function \
 *     Sleef_finz_asind2_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.cdde2f2b55d06p-712, 0.0, 0x1.9c5ea8484585ap-473, 0x1.ea41bd9923a04p-645,
     0x1.d711b4a92f21dp-976, 0.0, 0x1.30841e38836acp-357, 0.0, 0x1.6a2f689420bb9p-391,
     0.0, 0.0, 0x1.729287a26e8c8p-885, 0x1.84fd83dc697ecp-448, 0.0,
     0x1.e6f4f5667367ep-433, 0x1.360f66c31d056p-215, 0x1.5896e5704e263p-517,
     0x1.3a4aab78e9dfcp-721, 0x1.7eac2f761d8b1p-590, 0x1.7c4eddcb2bfe5p-914,
     0x1.0d802050d417dp-509, 0x1.c5bc820bb476ep-350, 0x1.ba1c06474c514p-745,
     0x1.43ebbdf0f73bbp-367, 0x1.ea7f858fe9ce7p-954, 0.0, 0x1.aee01eff5efbfp-579, 0.0,
     0x1.b5f7f3778b00dp-617, 0.0, 0x1.5b8b7c0f13975p-681, 0x1.db42fefaa2b65p-363, 0.0,
     0.0, 0.0, 0x1.1f786e37d8227p-959, 0x1.50a4d6de8348p-64, 0.0,
     0x1.70b50e4444ad8p-576, 0.0, 0x1.b5bc4ef8c9ba6p-770, 0x1.e9cda7405b70bp-652, 0.0,
     0x1.661c803a52f2cp-901, 0.0, 0.0, 0x1.6fa5c2697a02fp-110, 0.0,
     0x1.45564d1784fe7p-697, 0.0, 0.0, 0.0, 0x1.c6ca678dab36p-887, 0.0, 0.0, 0.0, 0.0,
     0x1.a75ab755f1b2fp-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.973a38b125854p-516,
     0x1.48dca783d5b3cp-967, 0.0, 0x1.975d19e34cf4ap-458, 0x1.02c27482bf9ccp-452, 0.0,
     0.0, 0x1.8bb6bad22be3ep-981, 0x1.ec84ad79c5989p-831, 0x1.47d56787fa872p-911, 0.0,
     0.0, 0x1.853bbbb2af518p-480, 0x1.4a4e1c289572p-498, 0.0, 0.0, 0.0,
     0x1.72e59dfb5eed7p-815, 0.0, 0x1.45a6dfe52e63bp-448, 0.0, 0.0, 0.0, 0.0,
     0x1.5daa525c5e159p-643, 0.0, 0x1.479aa138587eep-659, 0x1.2789bd05a2f7ep-878, 0.0,
     0.0, 0x1.b91fe3c1ec31bp-606, 0x1.7468eb6deeebep-153, 0.0, 0x1.bd642ea831664p-882,
     0.0, 0.0, 0x1.2af041cb8f8a8p-826, 0.0, 0x1.c261f82977193p-731, 0.0,
     0x1.df1ca40867006p-780, 0x1.eba3726a89732p-842, 0.0, 0.0, 0x1.858b845aeff3cp-464,
     0x1.b4e3b82064119p-206, 0.0, 0.0, 0x1.890838d2b7d7ap-4, 0.0,
     0x1.53d6b8e6c9914p-972, 0.0, 0x1.1d5cdf27126e6p-231, 0x1.6ac73f14d5f2bp-264,
     0x1.ed9a45ef3d35cp-253, 0x1.b2e48b83b3f06p-692, 0.0, 0.0, 0x1.f2bfcd64754ccp-659,
     0x1.42b056797c069p-359, 0x1.a60c44499128bp-862, 0x1.3a38023100c8bp-501, 0.0,
     0x1.cb8c90bf882a7p-837, 0x1.6128c66bdac35p-415, 0x1.79d76a2088853p-913, 0.0,
     0x1.bf2ead4011e13p-259, 0x1.7ceacb6acedaep-670, 0.0, 0x1.da9c5a74a8b47p-472, 0.0,
     0x1.51ea74532df49p-792, 0.0, 0x1.124957b023d9bp-346, 0x1.c24d0222bce8cp-906, 0.0,
     0.0, 0.0, 0x1.ad4b374572079p-756, 0x1.3014507257d0cp-900, 0x1.f2cd36d2401cbp-304,
     0.0, 0x1.d5804d0e102a5p-83, 0x1.d9073561575e1p-607, 0.0, 0x1.058480c69448fp-1021,
     0.0, 0.0, 0.0, 0x1.9f47a10d0a54ep-518, 0x1.d3872d88e922ap-354, 0.0, 0.0,
     0x1.a4e0ec977fb5ep-680, 0x1.e53d91aa468acp-326, 0.0, 0x1.df6d713b4ce33p-71, 0.0,
     0x1.141a1afec17abp-253, 0x1.7d46880852e12p-374, 0.0, 0x1.e38a0fed81d5fp-415,
     0x1.df67476cc613bp-783, 0x1.a79e0e9f317d1p-1022, 0x1.75e3b71fdddfep-216, 0.0,
     0.0, 0x1.2f8a7c828588p-559, 0.0, 0.0, 0x1.f600da7cfd1e6p-472, 0.0,
     0x1.e22aab9ec4b1dp-419, 0.0, 0.0, 0x1.d89b241d68d64p-635, 0.0,
     0x1.4a19fccba5e89p-311, 0x1.2aaed676df5fep-511, 0x1.7043839c112a1p-303, 0.0, 0.0,
     0.0, 0x1.0199926bff3fap-118, 0x1.689b855c14931p-542, 0x1.161dc0b86fbdfp-670, 0.0,
     0x1.71ccd45188f84p-944, 0.0, 0x1.72cc398d73f1bp-406, 0x1.3a04b33fe881cp-109, 0.0,
     0x1.f15a86d4a2097p-772, 0.0, 0x1.33fc488c444eap-601, 0.0, 0x1.3f572c281e975p-786,
     0.0, 0x1.94619b4974936p-369, 0.0, 0x1.75bed48c27ab2p-805, 0.0, 0.0,
     0x1.7a248ebc6348cp-943, 0x1.3f76f5030b45dp-447, 0x1.da05e941312acp-110,
     0x1.02d9caed3fc53p-650, 0x1.fe3bdab0928cp-951, 0x1.71a2ff61476p-513, 0.0,
     0x1.7ab7981eae0c4p-485, 0x1.bba88f982c249p-503, 0.0, 0.0, 0x1.123f6c6330901p-298,
     0x1.492e19618b305p-261, 0.0, 0x1.d6e9cc1ce3f1p-748, 0x1.820eb141274ebp-858, 0.0,
     0.0, 0x1.e303bedcf7149p-847, 0.0, 0x1.c192c6b7d21abp-165, 0.0,
     0x1.1f9ca57bacfd6p-855, 0x1.5b25f11f477cdp-62, 0.0, 0.0, 0.0,
     0x1.40b7b3bd1e11cp-120, 0x1.e3391ee1e33acp-292, 0x1.f659b4f83cb0ap-699,
     0x1.8c995e2746cd4p-348, 0x1.0cbc2ca981279p-705, 0x1.c98b4133e762dp-309,
     0x1.b1d4dd3561921p-382, 0x1.53ad64d91e7e5p-30, 0x1.a74b45277e464p-790,
     0x1.2d49544c93acp-795, 0.0, 0.0, 0x1.ca1de66cca2cbp-940, 0.0, 0.0,
     0x1.f4ac0a4a117c6p-352, 0x1.7a8563a6929b5p-54, 0.0, 0x1.b838d1e4ed635p-741,
     0x1.e7e1b3fded8d5p-556, 0x1.e1f3dfcadf4ecp-18, 0x1.d41093babc025p-658,
     0x1.30c8e39be22d4p-655, 0.0, 0x1.a31be9448e8d3p-576, 0x1.02decae367f5ep-560, 0.0,
     0x1.a910932b9fb82p-522, 0.0, 0x1.f3db3c990976p-141, 0.0, 0x1.60a60177249bep-688,
     0.0, 0x1.9a8de13f61011p-763, 0x1.f58de53130f23p-84, 0.0, 0x1.c6e145d62156p-293,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4238733cec322p-140, 0x1.e647a68629a08p-428,
     0x1.c5fd424e454c7p-444, 0.0, 0.0, 0.0, 0x1.99fe0f4d3c82bp-916,
     0x1.61660a9112fa9p-937, 0.0, 0.0, 0x1.c6249a23cb357p-862, 0x1.735e05cf7923bp-701,
     0x1.8fd1192d77a86p-186, 0x1.c6be8420e62dp-44, 0x1.2ae0c0842defcp-33, 0.0,
     0x1.27d3b9ed76465p-196, 0x1.d6fac2a6fbb46p-598, 0.0, 0.0, 0.0, 0.0,
     0x1.f3181583eb3f5p-385, 0x1.f9fb2a599d536p-27, 0x1.20b98a7f138c9p-382, 0.0,
     0x1.6ba54926829a6p-563, 0x1.9bf802694660ap-266, 0x1.9ac81541a41bap-23,
     0x1.c1ee1954808f5p-269, 0x1.e6943415a214dp-879, 0.0, 0.0, 0.0,
     0x1.05878fdae4e81p-367, 0x1.fba52a46e7379p-686, 0.0, 0.0, 0.0,
     0x1.bb3d133c19041p-337, 0x1.8e854a3bdf548p-896, 0x1.c86260054ddfdp-659,
     0x1.a1199be883bbep-749, 0x1.3a6c0cb012553p-629, 0x1.967142e3dd6c2p-665,
     0x1.1d7c2094cfc74p-919, 0.0, 0.0, 0.0, 0x1.2c33d815b601cp-642,
     0x1.b45d4cf81e7f8p-311, 0x1.0081164bb2feap-824, 0x1.bffd8b7357c82p-161, 0.0,
     0x1.487f304e07ef3p-814, 0x1.3ce5c795de5cdp-454, 0.0, 0.0, 0.0,
     0x1.a570d6158e1e7p-1, 0.0, 0.0, 0.0, 0x1.b3f1cbed7ada8p-408, 0.0, 0.0,
     0x1.7347d3ac8cb2bp-168, 0.0, 0.0, 0x1.67504d7e62ae4p-909, 0.0, 0.0,
     0x1.899cf66d60408p-1006, 0.0, 0x1.73d02580d5d54p-1008, 0x1.650e104b4e89ap-308,
     0.0, 0x1.f1ba1369a03ffp-838, 0.0, 0.0, 0.0, 0.0, 0x1.ad8b69dd244abp-642,
     0x1.197c93081b0fcp-769, 0x1.c116767b4a80cp-525, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.282faf3251215p-273, 0.0, 0x1.6eeac8b1971d7p-23, 0x1.0821363499d0cp-579, 0.0,
     0x1.2b72d05aa540ep-378, 0x1.8e4e3792ed956p-793, 0.0, 0x1.510a50506f50ap-338, 0.0,
     0x1.b6475e481232cp-204, 0.0, 0.0, 0x1.661237fd7a29bp-674, 0.0, 0.0,
     0x1.833c6c4bef3aep-201, 0.0, 0.0, 0x1.edbc681891abbp-85, 0x1.8e16620f3980cp-337,
     0x1.9420343632055p-563, 0x1.6faa672645437p-484, 0x1.2a275423485e6p-817, 0.0, 0.0,
     0.0, 0.0, 0x1.148bf8cdcfcadp-818, 0x1.c88bf0b47d4f5p-980, 0.0,
     0x1.1ef2351b82aadp-540, 0x1.c37c796cf75a9p-753, 0.0, 0x1.f1dcf26ce5217p-537, 0.0,
     0.0, 0.0, 0.0, 0x1.1a9b6c261203ep-295, 0.0, 0x1.ac4a3ddb555ep-484,
     0x1.066839b6b8155p-7, 0x1.5ebf7cb218581p-512, 0.0, 0.0, 0.0, 0.0,
     0x1.01f823898d41bp-585, 0x1.dec7c20cd4169p-350, 0x1.1c90069d5985cp-739,
     0x1.5346a09c7b7bep-761, 0x1.c8fa6d3321faap-81, 0.0, 0x1.711fda400fac1p-764, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7fc15730d623p-410, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a97fa3bf4e2bdp-106, 0.0, 0x1.d0ef36dd4052bp-821, 0.0, 0.0,
     0x1.9fa5cc0f254b2p-882, 0x1.f3d6401879112p-845, 0.0, 0x1.e13f1e89a07b9p-120, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60a70ce445873p-434, 0.0, 0.0,
     0x1.5a21a38eabfbcp-774, 0x1.119347d6fa33cp-218, 0x1.aa8d187f04706p-107,
     0x1.01b6000d996e1p-105, 0x1.6d7849666b45bp-222, 0x1.dce7e500510dp-85, 0.0, 0.0,
     0.0, 0x1.58584130cfe64p-439, 0.0, 0x1.844555d690c41p-501, 0.0, 0.0,
     0x1.4d85d66b509c6p-573, 0x1.0dfced47c9aacp-61, 0x1.0c902c94f1208p-455, 0.0,
     0x1.7ef077ff0b426p-705, 0.0, 0x1.9d6647f90dd81p-930, 0.0, 0x1.5432434210a04p-855,
     0x1.7fc2ebc0a2c8ap-492, 0.0, 0x1.404d486bdc0c1p-486, 0x1.d5213b21729ffp-913, 0.0,
     0x1.e67035dad10aep-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a281fab38fc3ep-813, 0.0, 0x1.5a733a6618d88p-215, 0.0, 0.0, 0.0,
     0x1.60694b7faec27p-623, 0x1.13db03149b34bp-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.29b7ecc853402p-771, 0.0, 0.0, 0x1.16bb288b0d313p-154, 0x1.48c22b958fb83p-919,
     0.0, 0x1.db2b32bc1d676p-446, 0x1.299d6807c59f9p-170, 0.0, 0x1.334e690bbdbb1p-236,
     0.0, 0.0, 0x1.d0928516cb1c7p-212, 0x1.95ae6d6ea8ca7p-583, 0.0, 0.0, 0.0,
     0x1.f9e9754309229p-741, 0.0, 0.0, 0x1.45a7d6b2095dcp-593, 0x1.9458908287ec5p-683,
     0x1.c236b9770debbp-50, 0x1.2bbda4d1683a2p-462, 0x1.4ddaa2aaa4362p-28, 0.0,
     0x1.f4c1cf7f7406cp-45, 0.0, 0x1.00b14c6cf804dp-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cabfbda50720dp-437, 0.0, 0x1.558325624341ap-274, 0.0, 0x1.87f46185bc82fp-693,
     0.0, 0.0, 0x1.dad9bbfdc2699p-572, 0.0, 0x1.4919580d0b872p-501, 0.0,
     0x1.daa5e1fc487ebp-964, 0x1.0114434c7c295p-173, 0.0, 0x1.b6f25d93d1135p-584, 0.0,
     0.0, 0.0, 0x1.f3a639672feb6p-545, 0.0, 0.0, 0.0, 0x1.3256f0c38333bp-460, 0.0,
     0.0, 0x1.1de0be08569eep-786, 0.0, 0.0, 0.0, 0x1.d741fdbabf144p-951,
     0x1.9d141b90f1713p-594, 0.0, 0.0, 0x1.139ee0398d89fp-208, 0x1.31fe33e40e951p-101,
     0x1.0cfc332abe0c8p-284, 0x1.1813b35225a5bp-463, 0.0, 0x1.826c1a0171da1p-836, 0.0,
     0x1.886a33e7d5383p-620, 0x1.75d437f5bff88p-857, 0x1.c23d561b62466p-352,
     0x1.00763e95dc846p-602, 0.0, 0x1.e6a540040eaf5p-966, 0x1.1bbb3c802668cp-944, 0.0,
     0x1.7aa268ee1fa97p-1010, 0x1.25a257c1315d8p-371, 0x1.3c143db1a4d19p-238,
     0x1.ba72e47a4d031p-498, 0.0, 0x1.542c6afa225edp-517, 0x1.b5d73b6e5f77fp-321,
     0x1.309739eceef4ap-317, 0x1.5cde9a98e8236p-822, 0x1.876961246e072p-587,
     0x1.cb11ff8b32891p-940, 0x1.7466ddb8b60cep-310, 0.0, 0.0, 0x1.1d7519e60d76p-503,
     0x1.7863f9b182594p-839, 0.0, 0.0, 0.0, 0.0, 0x1.e4cab7e898081p-752, 0.0, 0.0,
     0.0, 0x1.b213074a033c2p-947, 0x1.2a7e3eee5ed23p-615, 0x1.c9c3201c712a9p-877,
     0x1.65c20471e0fe5p-541, 0.0, 0.0, 0x1.099511128ae66p-275, 0x1.029d69dd1f78ap-453,
     0x1.f3813211cc16dp-869, 0.0, 0.0, 0x1.ee088f1c8981dp-392, 0.0, 0.0,
     0x1.caeb2fb1e7c27p-409, 0x1.fa72f418b0fa3p-154, 0x1.81e04a2d3069ap-500, 0.0,
     0x1.217789b4a87fcp-42, 0.0, 0.0, 0.0, 0x1.b4957c42a4f4cp-132,
     0x1.c2a97f367174p-448, 0x1.0826b23a6a577p-657, 0.0, 0x1.064bb610969cfp-467,
     0x1.99d575b2ec861p-776, 0x1.58ea1193184f4p-660, 0x1.1490b9b5cf3e4p-47,
     0x1.85653dfb89c47p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29ec766681a06p-443,
     0.0, 0.0, 0x1.b9f463c25bee8p-221, 0x1.376d659e26d9ep-486, 0.0,
     0x1.6c8075fc984edp-452, 0x1.0430f7f7ab16dp-103, 0x1.5b4e7c1c961dfp-388,
     0x1.96261409bad8bp-401, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6630c5b8e093fp-284, 0x1.7e934bea00804p-257, 0x1.76d7a912d1304p-405, 0.0, 0.0,
     0x1.09faffdc2581ap-842, 0x1.6842dd6f4dac7p-592, 0x1.d12eca8746ccp-741, 0.0,
     0x1.04faf439970f8p-263, 0.0, 0.0, 0.0, 0x1.61b5eb4fbe973p-270,
     0x1.36015f7620938p-765, 0.0, 0.0, 0x1.a9a2f790266e3p-674, 0.0, 0.0, 0.0,
     0x1.c978b2745f2dbp-625, 0.0, 0.0, 0x1.2b0e00fdf0069p-159, 0x1.ba59dfbb4c09bp-457,
     0x1.84a2fb8d4728ap-557, 0x1.50320ddb97a7ep-132, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.419376e111ca3p-19, 0x1.8910b0fc04fcep-859, 0.0, 0.0, 0x1.97e080f337a9dp-650,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ba417741a977p-1011, 0.0,
     0x1.91b93db161565p-247, 0x1.a2fe3b7df30f6p-473, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.314e84152d461p-400, 0x1.7a3d115fc2bd2p-355, 0x1.cf4382a9ced6dp-851, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.42f0c98c3750dp-973, 0.0, 0x1.807ae6fcf9adcp-614,
     0x1.e90dfbae1362bp-551, 0x1.24ef8328f56f4p-361, 0x1.59beb0a635141p-944,
     0x1.6e62dc9d53e19p-667, 0.0, 0.0, 0.0, 0x1.739b6ee6b31f2p-971,
     0x1.d784141622812p-116, 0.0, 0.0, 0.0, 0.0, 0x1.074c4f29df408p-322, 0.0, 0.0,
     0.0, 0x1.5bebd8a0e00f3p-348, 0x1.0c75590077661p-584, 0.0, 0.0, 0.0, 0.0,
     0x1.4ea57cf39de04p-343, 0.0, 0x1.cfe233b4c312dp-706, 0.0, 0.0,
     0x1.b4011bf81f30bp-742, 0.0, 0.0, 0.0, 0x1.4f40d86640afdp-833, 0.0,
     0x1.46591b28699fdp-524, 0.0, 0.0, 0x1.260f4bf2dfe99p-627, 0x1.7b6f1b560a579p-44,
     0x1.cbc4740e43402p-263, 0.0, 0.0, 0x1.33e5ad2223b55p-46, 0x1.520cb1760fa7cp-475,
     0x1.c64c3c936edbbp-1011, 0.0, 0x1.c15c151b08f78p-47, 0x1.f458d7324a758p-7, 0.0,
     0x1.1b02601032f5p-265, 0x1.fac2292b9b492p-8, 0x1.0a53644ee89bdp-235,
     0x1.4f67c6bdf1cb2p-951, 0x1.227b2a0b44976p-84, 0x1.0f66d8362c0cep-876,
     0x1.ebe79fe2d06b7p-172, 0.0, 0.0, 0.0, 0.0, 0x1.e459a4009dc6cp-223, 0.0,
     0x1.63cee9b28c601p-966, 0x1.4a2cde51b15cbp-11, 0.0, 0x1.bb44709236da5p-156, 0.0,
     0x1.74c7914d8b5e9p-81, 0x1.92117c6b00949p-347, 0x1.97287399ea645p-744, 0.0, 0.0,
     0.0, 0x1.f733fc133d77bp-581, 0x1.5f2a55155720cp-658, 0x1.b4a6dc425f4d2p-458,
     0x1.c04d2f947f1eap-486, 0x1.151ed4ddbdc58p-968, 0.0, 0.0, 0.0,
     0x1.898c13eff2444p-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed1398c330a8ep-123,
     0x1.cd59e2918cabcp-408, 0x1.9be42b286e6e3p-606, 0.0, 0x1.f0c657383f07fp-150,
     0x1.f2b01a16958e3p-686, 0x1.be6a90a0b8db1p-533, 0.0, 0.0, 0.0, 0.0,
     0x1.fdf93b1856cbcp-1015, 0x1.cb4bf2e0e1b61p-483, 0x1.f445bf9413cdbp-316,
     0x1.7d3ad67309e3dp-473, 0.0, 0.0, 0x1.3ab9cf684705ap-591, 0.0,
     0x1.11d831098d0cdp-95, 0.0, 0x1p0, 0x1.ee327e4ce378fp-786, 0.0, 0.0,
     0x1.51688b28795f8p-67, 0.0, 0.0, 0x1.e5fa62e3f516cp-279, 0x1.b4837b060cf9ap-600,
     0x1.e25094880327ep-99, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57a743230cd06p-123,
     0x1.9ca099fa6ffap-835, 0.0, 0x1.ad4ba050baee7p-155, 0.0, 0.0,
     0x1.46f4e9a5ea6fcp-896, 0.0, 0.0, 0x1.9a694b9ffe1c5p-161, 0x1.fee955878894ap-299,
     0x1.74064be9b4449p-74, 0x1.73ec4b5da07a4p-678, 0.0, 0x1.f552227f64ed8p-450, 0.0,
     0x1.fc41d82813ff1p-440, 0x1.7a70f571363adp-778, 0.0, 0x1.454cba7522562p-587, 0.0,
     0.0, 0x1.4883fe33f0db3p-893, 0.0, 0x1.eb4a3e82f4ca1p-661, 0.0,
     0x1.fbb88a97825f1p-171, 0x1.50daf1f30b441p-675, 0.0, 0.0, 0x1.acd091858609p-273,
     0.0, 0x1.74bb843eeaf62p-814, 0x1.3cb30e32cdb0fp-44, 0x1.1edd64a7f5b4p-448, 0.0,
     0.0, 0.0, 0.0, 0x1.c37621b4963fep-348, 0x1.4af0185f236bp-240,
     0x1.0cd2efc38a798p-169, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.981b990cb5cbep-376,
     0x1.bad798e7f5619p-630, 0x1.5f1db9112bcecp-72, 0x1.619f5388241fbp-52,
     0x1.6b9e3b94c0c61p-511, 0x1.8853dab24249fp-369, 0.0, 0x1.30856bfbbc82dp-71, 0.0,
     0.0, 0.0, 0.0, 0x1.137be840b5db2p-9, 0x1.ef944e8550e05p-776, 0.0, 0.0,
     0x1.280ca225d9d7fp-904, 0x1.a5173fc02f71ap-51, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7712adfabd277p-775, 0.0, 0x1.d7d27794bd2e3p-497, 0x1.ceeb6a56bae8bp-676, 0.0,
     0x1.898ceaa55562bp-588, 0.0, 0.0, 0x1.d168bc50e09c6p-45, 0.0,
     0x1.9f8d01af110b9p-102, 0x1.2bbd6357360d5p-167, 0x1.225fb11b37545p-158,
     0x1.cb27e1430c65bp-818, 0.0, 0x1.a0eb984918882p-983, 0.0, 0.0, 0.0,
     0x1.fad75af5c11b7p-957, 0x1.a7ccf923b908ep-455, 0x1.ad9c362ce412ep-52, 0.0,
     0x1.705d635033e81p-107, 0x1.e85604779bf5ep-170, 0.0, 0.0, 0x1.0846d494b59c5p-446,
     0.0, 0x1.e6c539ad7cd16p-317, 0x1.ad0d59c20eec2p-181, 0x1.7c3ae2e92836bp-807,
     0x1.6cfc812994d86p-327, 0.0, 0.0, 0x1.d41fa9cdc8ec3p-464, 0.0,
     0x1.b8be462cecca8p-925, 0.0, 0.0, 0x1.fdcf0aae80981p-604, 0.0, 0.0, 0.0,
     0x1.556f97d517fd1p-566, 0.0, 0.0, 0x1.7a083c3a16e5bp-213, 0.0,
     0x1.e150dd4f2729p-818, 0.0, 0x1.ab0d132ba4b8fp-945, 0x1.adcaebf415c4cp-408,
     0x1.ee07a4914426ap-868, 0x1.94686f665eb4bp-495, 0.0, 0x1.e7bc5eeb3ad5cp-459,
     0x1.1a04cae521e8p-786, 0.0, 0x1.f061651d507a9p-135, 0.0, 0x1.626db6a571a72p-74,
     0.0, 0.0, 0.0, 0x1.7682ca88d9486p-49, 0.0, 0.0, 0.0, 0.0, 0x1.e7f2f92222c47p-172,
     0x1.3dfe39bf684ccp-380, 0x1.f8b87456989fp-723, 0x1.d9055b14a6865p-313
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
            tmp1 = Sleef_finz_asind2_u35kvx(tmp0);
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
    printf("Sleef_finz_asind2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asind2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
