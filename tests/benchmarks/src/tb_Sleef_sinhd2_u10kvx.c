/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd2_u10kvx.c --function Sleef_sinhd2_u10kvx \
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
     0x1.6f7f5da172d8dp-608, 0x1.17d6fb00980adp-422, 0x1.29ed3c9c753a8p-91,
     0x1.60b605c0cfbd4p-521, 0x1.6ab6f672ad5b8p-102, 0x1.958b3562edc4p-180,
     0x1.76a181da9fa41p-832, 0.0, 0x1.d3bb37f50b6f5p-802, 0x1.2381bf073fc1dp-62,
     0x1.3d6ab4658fabp-531, 0x1.f61c922cbfdb9p-392, 0x1.a3f4aee32b28cp-942, 0.0, 0.0,
     0x1.1adc493c1b159p-632, 0.0, 0x1.acc1fc1e5c8d7p-170, 0.0, 0x1.5820f0fe82cf1p-799,
     0.0, 0x1.7333e3e6224afp-223, 0.0, 0x1.07f1d5d1d05dfp-669, 0x1.42faa8fc57da1p-148,
     0.0, 0.0, 0x1.15afa59e6822p-273, 0.0, 0.0, 0x1.8c04b8ab0d379p-1010,
     0x1.e4ced8570498fp-830, 0.0, 0.0, 0.0, 0x1.9a44f2559fbe9p-396, 0.0, 0.0, 0.0,
     0x1.0dfa6f46f3cf4p-177, 0.0, 0.0, 0x1.f715f3f30109fp-415, 0x1.2345b848171a2p-18,
     0.0, 0x1.b47140292c6dap-796, 0.0, 0x1.2ab2ecde3dbdfp-143, 0x1.c2834ab207cdp-215,
     0x1.4032f903dfc2cp-711, 0x1.a58ad7ffbe401p-798, 0x1.dbc2000d56aap-493, 0.0,
     0x1.eaefe0b842653p-644, 0.0, 0.0, 0.0, 0.0, 0x1.57dbdb2e6276fp-194, 0.0, 0.0,
     0x1.dc446fe48753fp-662, 0x1.259c9137c52a8p-334, 0.0, 0.0, 0x1.04ffc4dc6429p-785,
     0x1.ad8df4f7270cp-367, 0x1.c089d2b425328p-428, 0.0, 0.0, 0x1.2c2f4558b33p-61,
     0x1.5961b485cd273p-818, 0.0, 0.0, 0.0, 0x1.242962e01f8e6p-611, 0.0, 0.0, 0.0,
     0x1.4a8d4aab66487p-505, 0.0, 0.0, 0.0, 0.0, 0x1.52a4032a0ed3dp-44,
     0x1.cafc82adc5264p-881, 0x1.b96f4adac7ff1p-396, 0x1.cd5f38f220a19p-557,
     0x1.ead3bd4cb8fb8p-496, 0x1.005d082cd3dc5p-1021, 0.0, 0.0,
     0x1.1da7cfcc698a4p-970, 0.0, 0x1.c5aaa1dd8cbdap-805, 0x1.23219f7c254a4p-698,
     0x1.0655e886bcf9p-177, 0x1.47c4271eae864p-326, 0x1.50f7b5317d56dp-679, 0.0,
     0x1.e0d34b73c530dp-652, 0x1.f1726b3007519p-770, 0x1.a8f79bfb9c082p-740,
     0x1.7efee3fd63635p-1016, 0x1.49a03acd90bc1p-423, 0.0, 0x1.8e8b9c4c806eep-168,
     0.0, 0.0, 0x1.383b82e1f265cp-515, 0.0, 0x1.67301612a45bdp-556, 0.0,
     0x1.a22230b434ef9p-808, 0.0, 0x1.224251e03a85cp-735, 0x1.8383dd0614cc1p-518,
     0x1.bc92a20a0737p-655, 0x1.a14c0a932cae6p-175, 0x1.7941c0b400bbep-705, 0.0,
     0x1.4ed8949b47acp-81, 0.0, 0x1.ef2577a1cb792p-468, 0.0, 0x1.53a33c65ead8bp-310,
     0.0, 0.0, 0.0, 0.0, 0x1.43bb1fdb4a045p-432, 0x1.3e8a06334d809p-448,
     0x1.bbd42258cc1e9p-417, 0.0, 0.0, 0x1.b178f7819d65ap-794, 0x1.e54b9d688162dp-215,
     0.0, 0x1.f4edda1c91f6ep-647, 0x1.5fe7c129558dfp-753, 0.0, 0.0,
     0x1.23ece5d0d13e2p-620, 0.0, 0x1.4b4b944b33d34p-564, 0x1.7728a2c9b6c83p-933, 0.0,
     0x1.9c318c9294f23p-1012, 0x1.5c60637efc23cp-874, 0.0, 0.0,
     0x1.24d336c92e2a9p-213, 0.0, 0.0, 0x1.1580108cb52bap-1004, 0.0,
     0x1.f7833c4c7d356p-321, 0x1.d44f927061ffap-489, 0x1.f000347fa4c0cp-686, 0.0, 0.0,
     0x1.bb7718696d95ap-634, 0x1.8cf42cbcd719p-195, 0x1.736eba65c03c1p-994,
     0x1.adc783dda33cdp-36, 0x1.d6c8ddfb61967p-37, 0.0, 0.0, 0x1.50fb8955102b9p-173,
     0x1.182784848a4aap-936, 0x1.7f698281ac942p-43, 0.0, 0x1.63196dcd71404p-555, 0.0,
     0x1.141dd3594037dp-601, 0.0, 0x1.8f0a20687619p-166, 0x1.2a8e50c50964bp-595,
     0x1.0f30b5f6d5535p-459, 0x1.ce729af4af151p-1022, 0.0, 0.0, 0.0, 0.0,
     0x1.ba930e1d20386p-268, 0.0, 0.0, 0x1.f75338394384cp-798, 0x1.e1b603367303p-456,
     0x1.748b91393ddb9p-14, 0x1.dfdcf9ca6620ap-343, 0.0, 0x1.de8dbcd3c661cp-374,
     0x1.4e40dcb538319p-215, 0x1.1894b8dfe73e6p-953, 0x1.a1150f08b2af5p-426,
     0x1.bead122d4935p-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8aec309335071p-475, 0.0, 0.0,
     0.0, 0x1.1082096796fb6p-917, 0x1.4d64957725f6dp-219, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5158a55ee76ep-737, 0x1.fff918f09862ap-842, 0.0, 0.0, 0.0,
     0x1.e8b36c74b186fp-243, 0x1.9d7aa686785f5p-370, 0x1.de0bee5d20319p-349,
     0x1.2b5b23f749a46p-855, 0x1.5173a21ba3f29p-217, 0.0, 0x1.f82d6469c957p-665,
     0x1.79e9559d01d64p-993, 0.0, 0x1.303b3e2e164f7p-21, 0x1.b62228489a14ep-685, 0.0,
     0.0, 0.0, 0x1.c3258d6cabcd8p-883, 0x1.ea359dd1ffdfcp-338, 0.0, 0.0,
     0x1.5710777df42cp-941, 0x1.7b38f4d938c51p-755, 0x1.da7af37012ed9p-975, 0.0,
     0x1.6c517946e1893p-227, 0x1.0d359fab67cc4p-815, 0x1.69d26c26d9339p-494, 0.0, 0.0,
     0x1.3ab550fc8f357p-725, 0.0, 0x1.db8cae1311267p-1002, 0.0, 0.0, 0.0,
     0x1.9783f63807fbdp-260, 0x1.9cb174a347df7p-319, 0.0, 0.0, 0x1.3d92f68045ccep-3,
     0.0, 0.0, 0.0, 0.0, 0x1.270f601d8adb8p-547, 0.0, 0.0, 0x1.8950f317544d1p-755,
     0.0, 0.0, 0x1.877acbdd551bp-866, 0x1.1d1314a45f587p-189, 0.0,
     0x1.8c2f6ff4ac046p-67, 0.0, 0x1.5454535c83c82p-930, 0x1.e5ae64bcefedp-233, 0.0,
     0x1.3a871c98bd45bp-489, 0.0, 0x1.635d6ca69ed4dp-116, 0x1.506f0285e328fp-189,
     0x1.4dac5a154b685p-809, 0.0, 0x1.7f287cc42ce8ap-131, 0x1.31e3f2071bca6p-433,
     0x1.c1dfa1343f63ap-541, 0x1.43461a49277f9p-143, 0x1.6cdb4177770c3p-219,
     0x1.866657a39d58fp-35, 0x1.8c6c013376ffep-426, 0.0, 0x1.8cbb97a2315acp-112, 0.0,
     0x1.da56d05ed606fp-512, 0x1.f88ae96ab6bdbp-140, 0x1.9e44863eb4f82p-75, 0.0,
     0x1.550ce15fe9571p-808, 0.0, 0x1p0, 0x1.9f52add1d232p-478, 0.0, 0.0, 0.0,
     0x1.5e7e8e92c9135p-326, 0.0, 0x1.2a6764f6d41a1p-986, 0.0, 0.0, 0.0,
     0x1.90da0c8fa416p-276, 0.0, 0.0, 0x1.27cd8f17ddf12p-102, 0x1.d47abbfc1bea1p-986,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d6a7d2aac2ddap-1003, 0x1.70b453229a94p-883,
     0x1.72b6fabacff25p-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.397515c6f5b8bp-990, 0.0, 0.0, 0x1.39b408e2fb208p-46, 0x1.669601db62b8fp-188,
     0.0, 0x1.589890aafe2cdp-342, 0x1.72852528545a6p-832, 0x1.037b2f33707dap-595,
     0x1.013ca9459ec75p-911, 0.0, 0.0, 0x1.deca11c2b4ecbp-312, 0.0,
     0x1.53a5cad854a42p-823, 0.0, 0.0, 0.0, 0.0, 0x1.45561a6e9424bp-135,
     0x1.4daa0fb68e8dbp-599, 0.0, 0.0, 0x1.9a0f225a3773cp-603, 0.0,
     0x1.66e891ab3e018p-992, 0.0, 0x1.553a3b999508p-505, 0.0, 0x1.c1e76e1938e24p-807,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b184bd540ee9ap-507, 0.0, 0x1.79e1baead0c6ap-534,
     0.0, 0x1.753fdcc5df25ap-399, 0x1.e4906154d7fd6p-964, 0x1.c5594b5754dd8p-913,
     0x1.9df0194e338a7p-236, 0x1.2a6e761874958p-907, 0.0, 0x1.7c1e8eebe349ap-511,
     0x1.1176693349d6bp-117, 0x1.b4c4022e465d3p-304, 0.0, 0.0, 0x1.7c2da01ccdea6p-713,
     0.0, 0.0, 0x1.1b9743b015bc9p-892, 0x1.16591d82895bdp-495, 0.0,
     0x1.c8d22aef3868cp-365, 0x1.0f61c15005226p-228, 0.0, 0.0, 0.0, 0.0,
     0x1.d9d4b4293b357p-750, 0.0, 0.0, 0x1.dd5bf1268532bp-885, 0x1.d4c41edcfb8acp-514,
     0.0, 0.0, 0.0, 0x1.7d3ab6d61bd61p-930, 0x1.43f6ad2502d7fp-672,
     0x1.d9b301da1948cp-833, 0x1.ae9babd308a36p-938, 0.0, 0x1.2a84df2248837p-842, 0.0,
     0x1.6f47434aefe7dp-875, 0.0, 0.0, 0x1.f2eca12393da1p-923, 0x1.a2a3896db1aeap-181,
     0x1.eea9bd87ae93cp-1020, 0x1.8ba63b9e5a849p-726, 0x1.e3e89c3cdcd4ep-294,
     0x1.f213f88f44e7bp-213, 0.0, 0.0, 0x1.c1ab0f4b7287ep-742, 0.0, 0.0,
     0x1.8a19c8c78ba4ep-2, 0x1.915793143db7bp-796, 0x1.d7f3ce1918d5ap-487, 0.0,
     0x1.1b4e870f0e009p-918, 0.0, 0.0, 0.0, 0x1.0a7dfcd58592ap-384, 0.0,
     0x1.d96752d9195efp-695, 0x1.d96b0bb8a9ee2p-94, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b26dafdfa36p-784, 0.0, 0x1.d24e3e56d91ebp-820, 0.0, 0.0, 0.0,
     0x1.3060d0d705dc6p-158, 0.0, 0.0, 0x1.7126322047607p-328, 0x1.cad40ee76c304p-733,
     0.0, 0.0, 0.0, 0x1.07f4d31bc69c5p-720, 0.0, 0x1.534b11f1d2283p-342,
     0x1.9bf02a3470601p-136, 0.0, 0.0, 0.0, 0.0, 0x1.aaf40eeb91258p-637,
     0x1.d6c886d4b0526p-235, 0.0, 0x1.fb5abbc6fe29ap-248, 0.0, 0x1.895cf1c7f60d8p-711,
     0x1.6686cc8d9f027p-834, 0x1.2a85b67ad4e76p-177, 0x1.f96f8f8aa2baap-147, 0.0, 0.0,
     0x1.fff16dfa59471p-634, 0.0, 0.0, 0.0, 0x1.ca567afe551d5p-468, 0.0, 0.0,
     0x1.aa0072732efddp-654, 0x1.09a15d8d98b2cp-378, 0.0, 0.0, 0x1.16ca2d28aa94cp-20,
     0x1.eacb61d099b3fp-132, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a74eb9a690522p-309, 0.0,
     0.0, 0x1.b4ef33a7d2e5ep-337, 0.0, 0x1.ddba43591243dp-715, 0.0, 0.0, 0.0,
     0x1.dc844b1bab279p-16, 0.0, 0x1.147d9404225e4p-570, 0x1.686535d605579p-305,
     0x1.799432196ccbdp-120, 0.0, 0x1.275f233546979p-424, 0x1.1a1266e2cd416p-113,
     0x1.b0a229e2202b2p-55, 0.0, 0.0, 0x1.0d188f63da78bp-941, 0x1.fe087af0ac259p-375,
     0.0, 0.0, 0x1.824f1074b54c8p-671, 0x1.5e1f798f503b5p-44, 0.0, 0.0, 0.0,
     0x1.4fbf64c2cd02ep-898, 0x1.6b93a7176605dp-224, 0.0, 0.0, 0.0,
     0x1.6b12be09b8cedp-787, 0x1.8b74d472c183bp-536, 0.0, 0x1.54b0748d82797p-238, 0.0,
     0.0, 0.0, 0.0, 0x1.33fddaa56b764p-417, 0.0, 0x1.c34b93b30d4aap-121,
     0x1.a6c8e18dde1c8p-467, 0.0, 0x1.2abc4e46b1059p-993, 0x1.6a55e3ce3a4b1p-932,
     0x1.7825b93f38d6fp-287, 0.0, 0.0, 0.0, 0.0, 0x1.74c57413f3eep-720,
     0x1.26afb23c9f6c9p-85, 0x1.0c041bad90078p-1, 0.0, 0x1.a74ba3e2a07a7p-164, 0.0,
     0x1.0e27ccd049319p-781, 0.0, 0x1.20745cd5576efp-107, 0x1.368f22fe355cdp-33,
     0x1.3dd71db27d04ap-334, 0.0, 0x1.9131200b9d102p-616, 0x1.1a51207dfc5bbp-318, 0.0,
     0.0, 0x1.54d07c941a658p-506, 0.0, 0.0, 0x1.a2c9a020f91f5p-986,
     0x1.4c0c1b63f11b5p-684, 0.0, 0.0, 0.0, 0.0, 0x1.d8d16c5f6c37bp-82,
     0x1.f96ff1251dfcep-867, 0x1.3ca7d9368cf7ep-74, 0x1.f4cca8b35d69bp-69, 0.0, 0.0,
     0x1.bfb038e29d15ep-579, 0.0, 0.0, 0x1.02cb2169cebcbp-868, 0.0,
     0x1.47337f745c226p-320, 0.0, 0x1.7c0d35ab6bfbdp-494, 0x1.df4104ae8fe6ap-304,
     0x1.0891d9aee66a6p-70, 0.0, 0x1.4a763a5507327p-934, 0.0, 0.0,
     0x1.ba3ae60a400a2p-929, 0.0, 0x1.cf486546e931bp-330, 0.0, 0.0,
     0x1.c986b136f31e8p-56, 0x1.52cbd61e88a09p-959, 0x1.dd97834c5ed1bp-185,
     0x1.252ab2613e8a4p-801, 0.0, 0x1.de8e2e5430bcep-406, 0.0, 0x1.2c0858d6ddcf2p-364,
     0x1.72c2ac03ae6c3p-853, 0x1.db852ff41b7acp-755, 0x1.d90c157aef4a6p-98,
     0x1.dcb0778c63304p-996, 0.0, 0x1.d7c3af3eb6a51p-322, 0x1.82fd6f745479ep-619,
     0x1.ad1101d667ce1p-441, 0.0, 0.0, 0.0, 0.0, 0x1.21e11d7aa5dbfp-516,
     0x1.24f2b19ac42d4p-419, 0x1.4dbb50c859b9ap-663, 0.0, 0x1.f547cb72c5396p-765,
     0x1.5db96e447abbdp-119, 0.0, 0.0, 0.0, 0x1.333ed212b21bp-742,
     0x1.7df6a1c52285p-352, 0x1.6584fececc59bp-206, 0x1.12e198fb6f2ebp-732, 0.0, 0.0,
     0.0, 0.0, 0x1.e57872a86d36p-172, 0x1.bbfe7d7ecbeb2p-687, 0x1.535dc74e28d74p-211,
     0x1.a047a9afce72cp-567, 0x1.a59d0eb3368b8p-460, 0x1.25f708c39c387p-709, 0.0,
     0x1.a9b02d615ee69p-855, 0x1.5b3dfde08c768p-138, 0.0, 0x1.caeb4b1bbe39cp-782,
     0x1.2fee308f50082p-685, 0.0, 0x1.e354fa02cd94cp-144, 0x1.73963f1ca8ce5p-425, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3cae24de986ep-460, 0.0, 0.0, 0.0, 0.0,
     0x1.cfaeafd6286a4p-323, 0x1.9f3ba72bc9a11p-229, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f2590749b46cp-179, 0.0, 0.0, 0.0, 0x1.c62871614cff4p-240,
     0x1.2e60cb291beafp-779, 0.0, 0.0, 0.0, 0x1.46f6928860302p-136, 0.0, 0.0,
     0x1.0e1a8fd17afffp-951, 0.0, 0.0, 0x1.25327f2779fddp-486, 0x1.258f9cf1f45e3p-949,
     0x1.6ed6bbb84acbcp-745, 0.0, 0.0, 0.0, 0.0, 0x1.802c5f73e9013p-20,
     0x1.2a037d726d71cp-344, 0x1.40d302df28504p-913, 0.0, 0.0, 0x1.a62fff544447ep-793,
     0x1.e384221929b1ap-383, 0x1.1dd346196f887p-552, 0x1.f95bbb7d952d9p-588,
     0x1.fff563dc0cfb4p-346, 0x1.3cb5403806997p-30, 0.0, 0x1.fb23166df24dp-912,
     0x1.79fcd6406e305p-491, 0.0, 0x1.5de281f94c931p-421, 0.0, 0x1.270a5ea2ccc2bp-527,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2070a574cdca5p-186, 0x1.cc92bd309384ep-975,
     0.0, 0x1.efdd72c343c19p-388, 0.0, 0.0, 0x1.77db1de35d036p-405, 0.0, 0.0,
     0x1.a4b6daac7f403p-513, 0.0, 0x1.aaec1e904eea4p-75, 0.0, 0x1.3cb3d3e570413p-65,
     0x1.e6ced791b747ap-550, 0x1.f48bdf9c571b1p-72, 0x1.dfd235c9e7057p-167, 0.0,
     0x1.0ab32c05e11fcp-898, 0x1.77e0dad8053e6p-36, 0.0, 0x1.a1e982d5674acp-149, 0.0,
     0x1.4cef71d0add94p-333, 0.0, 0.0, 0.0, 0x1.a05c3f434118p-79,
     0x1.c7138389718ebp-570, 0.0, 0x1.fa3da35094238p-423, 0.0, 0.0, 0.0, 0.0,
     0x1.d8ddb61e7f27dp-122, 0.0, 0x1.0c41653da6bffp-459, 0x1.95f80be6fffb8p-53, 0.0,
     0x1.865f044314d9ap-1003, 0x1.ffb382ed2fd44p-58, 0.0, 0x1.57e7d44d2984cp-340,
     0x1.8449d49fc86cep-518, 0.0, 0.0, 0x1.41dbd17b674edp-236, 0.0,
     0x1.bd7c59fd6b5dap-367, 0.0, 0.0, 0x1.291290dba68abp-272, 0.0, 0.0,
     0x1.534e65a2b2de1p-729, 0.0, 0x1.3046b6eeb8cc8p-840, 0x1.c0bbd83dfb091p-12,
     0x1.02affb47f09a3p-805, 0x1.900cf1eb53a08p-810, 0x1.75da1ebf40871p-306,
     0x1.495fd3bfb10a8p-294, 0x1.abdf60c259846p-901, 0.0, 0.0, 0.0,
     0x1.b9297d55aeb64p-1006, 0.0, 0x1.02fc30ec52566p-186, 0x1.1fa921d3d37d8p-624,
     0.0, 0.0, 0x1.b4f568e160969p-112, 0.0, 0x1.95b509c755dabp-828,
     0x1.a6e2e149bed94p-993, 0.0, 0x1.6b49039428fddp-699, 0.0, 0x1.7c07c1d9c4f17p-70,
     0x1.9a88d8f945f51p-1019, 0x1.ef36d14ac9de2p-558, 0x1.92348013058f2p-801, 0.0,
     0.0, 0x1.3bbff219707ap-790, 0x1.8c6cb391b154p-697, 0.0, 0.0,
     0x1.7c819e0bd2489p-214, 0.0, 0x1.0b187947ba5b6p-222, 0.0, 0.0, 0.0,
     0x1.dbd38837aa2fdp-631, 0x1.36a578027128cp-245, 0x1.6524652be3d6fp-790,
     0x1.753b224104436p-293, 0.0, 0.0, 0.0, 0x1.8a803dc8036b9p-384,
     0x1.3945c2753e456p-285, 0.0, 0.0, 0x1.5d506407ec1bfp-1017, 0.0,
     0x1.88a9a8cf71fdcp-461, 0x1.efa1a10193df2p-436, 0x1.9239784f152f4p-190, 0.0, 0.0,
     0x1.23f347037369ep-645, 0x1.ab1c750f56a2cp-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d207c0998b28dp-99, 0x1.378e81b40274fp-599, 0.0, 0.0, 0x1.078cc3eecfc05p-466,
     0.0, 0x1.edc2ce2872048p-793, 0x1.e0b161d508c8dp-866, 0x1.df03ac24749d5p-390,
     0x1.2d5b1a9ba8362p-446, 0.0, 0x1.88814ffb6d02dp-703, 0x1.74d558c5739afp-856, 0.0,
     0x1.dabf9b5fb3b5cp-256, 0x1.6e8684ea76ad8p-347, 0x1.c65e442a9edbep-277, 0.0, 0.0,
     0x1.fed1322c5fe58p-940, 0x1.b237fab1be37ap-913, 0x1.635da2af26f01p-294, 0.0,
     0x1.aad025e6ed1ccp-486, 0.0, 0x1.79778fec053b2p-800, 0.0, 0x1.354d9f230c0abp-968,
     0.0, 0x1.3abb67c71ad7ep-415, 0x1.0eeebf80aae57p-20, 0x1.c9a5d6cea1b25p-465, 0.0,
     0.0, 0x1.2af1cfe5dec04p-627, 0.0, 0x1.3b81e5b996ce2p-44, 0x1.118b0afebf77fp-757,
     0x1.db6047d6d65b8p-997, 0x1.7b900d41c8da5p-507, 0.0, 0.0, 0.0, 0.0,
     0x1.0c0d95a70bbd3p-413, 0x1.1367799803113p-247, 0x1.f591df3324cacp-637,
     0x1.f369cfa369078p-127, 0.0, 0.0, 0x1.d1844be7d7b0ep-694, 0.0,
     0x1.3dfea7de97d25p-304, 0.0, 0.0, 0.0, 0.0, 0x1.e45f1e3347ab8p-491,
     0x1.200d09594ed0fp-381, 0x1.9bd79daf8e55p-28, 0x1.6b81e5e02ed31p-882, 0.0,
     0x1.5066bdfdaafbep-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.adf7475aa107ap-1009,
     0x1.25b3e2dd1c8f8p-464, 0x1.3c12d1cdf31dep-635, 0.0, 0.0, 0.0, 0.0,
     0x1.774eabb325f83p-385, 0x1.c197e448bc37p-110, 0.0, 0.0, 0x1.6164d7930621dp-257,
     0x1.67e7c72b80225p-222, 0x1.9578a52008f37p-516, 0.0, 0x1.92832ff89fc7bp-962, 0.0,
     0x1.e913891836045p-268, 0.0, 0.0, 0x1.ab06596c43a83p-630, 0x1.470e31c692963p-827,
     0x1.31f3af8a0859ep-760, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e7fc42d0d355p-72,
     0x1.1b90f1e688ef8p-338, 0x1.82bc9631b36f5p-202, 0.0, 0.0, 0.0,
     0x1.ff0aeaf1c8408p-412, 0.0, 0x1.c8b641c02cd6ap-626, 0x1.ac090672d32b2p-768, 0.0,
     0x1.d4c5a588c67ap-179, 0x1.88bae41af2fcbp-578, 0x1.83f15a3edf3a1p-492,
     0x1.136944c4a03dbp-874, 0x1.a28929618cb81p-789, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9ab2567e0df07p-869, 0.0, 0.0, 0x1.8844660ca0e23p-272, 0x1.d71bc76491929p-471,
     0.0, 0.0, 0.0, 0x1.4c40e4ebee4f3p-836, 0.0, 0x1.3adaedea30c98p-282, 0.0,
     0x1.cdfaefd7e7362p-802, 0x1.14f121275a5d4p-533, 0x1.12d990208cdb4p-439,
     0x1.3ff2fb473d35bp-483, 0.0, 0.0, 0.0, 0x1.23c5d66daf7b6p-54, 0.0,
     0x1.91bb3f4581f7cp-815, 0x1.483cf36c65cbdp-729, 0x1.40e346d450a7ap-310,
     0x1.069e4a6bcbf8dp-270, 0.0, 0.0, 0x1.6177e3f74c33p-911, 0x1.bff7c889e8f47p-273,
     0x1.56568c3c97b88p-774, 0.0, 0.0, 0x1.6b35c340a91dbp-149, 0.0, 0.0,
     0x1.c5ba605075d5p-849, 0.0, 0.0, 0x1.aa60b30b657dbp-792, 0.0, 0.0,
     0x1.c8352f6342832p-845, 0.0, 0x1.e8055f782b99p-772, 0x1.ab7f88f78833ap-679, 0.0,
     0x1.ebe8b350d2e24p-140, 0x1.f40dea0409739p-855, 0x1.f14e50783d63p-805,
     0x1.80b949a81d385p-662, 0.0, 0x1.f095b334ca891p-771, 0x1.5a61eca3715dfp-681,
     0x1.e5a8ed4bcf61dp-8
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
            tmp1 = Sleef_sinhd2_u10kvx(tmp0);
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
    printf("Sleef_sinhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
