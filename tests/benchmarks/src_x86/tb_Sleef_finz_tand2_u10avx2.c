/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand2_u10avx2128.c --function Sleef_finz_tand2_u10avx2128 \
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
     0x1.214ff48337e1dp-488, 0x1.c5ccf4776d4c3p-702, 0x1.03b9f26e0e74dp-97, 0.0, 0.0,
     0x1.3c96a5e28e9ddp-960, 0x1.b7db91b9ecfcap-919, 0.0, 0.0, 0x1.f7602d51c0f28p-974,
     0x1.a3263323927a9p-1020, 0x1.782be75f9c115p-652, 0x1.f2519f299c0dp-723, 0.0, 0.0,
     0x1.4d369c5cdab8p-832, 0.0, 0.0, 0x1.91335b4069362p-654, 0.0, 0.0,
     0x1.a5d41ecda0fe3p-651, 0.0, 0.0, 0x1.142a0e2e9865fp-688, 0.0, 0.0, 0.0,
     0x1.51876d3a24ae7p-514, 0x1.4afea447a62ebp-256, 0x1.ad7a620eec236p-225, 0.0, 0.0,
     0x1.d6b9b663743b1p-573, 0x1.b50decfae2861p-323, 0.0, 0.0, 0x1.f266918edbea5p-562,
     0.0, 0.0, 0x1.f160cbd88961ep-76, 0x1.90618c8337f0dp-978, 0x1.dda0a458317c3p-928,
     0x1.39ab2795ff36dp-1003, 0x1.165f8ce29a4ffp-265, 0.0, 0.0,
     0x1.dd40bc5d05a6fp-184, 0.0, 0.0, 0.0, 0.0, 0x1.481b35af4c5cbp-944,
     0x1.6fd41432ce287p-179, 0x1.dbe6a035c02bap-870, 0x1.e4e280c65bc9ep-39, 0.0, 0.0,
     0.0, 0x1.9ffc4a870d1b4p-759, 0.0, 0.0, 0.0, 0.0, 0x1.fada3c5f228dep-650, 0.0,
     0x1.25a80e5e55e45p-56, 0.0, 0x1.33b934a95bd5bp-923, 0.0, 0x1.5166a175b231p-47,
     0.0, 0x1.926839b2511a6p-567, 0x1.294a2dd7cc491p-363, 0.0, 0x1.7a31b89774c38p-80,
     0x1.4a5089d482d15p-889, 0.0, 0x1.9f179cdac6a5ap-578, 0.0, 0x1.ea9dcc74f88edp-197,
     0.0, 0.0, 0x1.1359c78967308p-617, 0x1.3e35cbdee5803p-869, 0x1.6d0780f79b492p-2,
     0x1.e4a120e50e8ep-955, 0.0, 0.0, 0x1.eeb260fff9111p-701, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1d49a78f882ep-463, 0x1.dc7f9139406e5p-338, 0x1.00f11cef3041ep-451,
     0.0, 0x1.3560b55edba0fp-189, 0.0, 0.0, 0.0, 0x1.e1d311357b90bp-780, 0.0, 0.0,
     0x1.c9215a0bf6324p-263, 0x1.a154afc7804b8p-413, 0x1.779e7bc95701fp-945,
     0x1.f17c5964c779ap-423, 0.0, 0x1.0982b4d5b8bcp-905, 0.0, 0x1.eeee9a68aba28p-534,
     0.0, 0x1.9388d6739b82fp-360, 0.0, 0.0, 0x1.2c20273bb6814p-684, 0.0,
     0x1.fffd50217701ep-75, 0x1.6f6afd61ba224p-891, 0.0, 0x1.c26341ecab4ebp-294, 0.0,
     0.0, 0.0, 0x1.288bf48c815c6p-774, 0x1.4701e56c58c85p-292, 0x1.0c40c40125eebp-321,
     0.0, 0.0, 0x1.ff5a4a1088926p-488, 0x1.d90c38cf37d28p-319, 0x1.b28a318d71142p-721,
     0x1.8f99c90a6941bp-243, 0x1.b11077490eee4p-401, 0.0, 0x1.0a9641ef54d0cp-250, 0.0,
     0x1.4827b9da414f8p-200, 0.0, 0.0, 0.0, 0x1.2b6e58d22fe1dp-716, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4b6a3476bc62p-558, 0x1.86dff8bc65821p-589,
     0x1.23f8a403e3dfcp-1007, 0x1.67cc69bd98f0bp-817, 0.0, 0x1.5b2658666a6bp-514, 0.0,
     0x1.bfbdc48dd6991p-686, 0.0, 0x1.99bab8c96189bp-231, 0x1.33cfa4d0c1caep-369, 0.0,
     0.0, 0x1.c3f04a5b2b237p-906, 0.0, 0.0, 0x1.01582ad14aebcp-209,
     0x1.33873a9a9780ep-384, 0.0, 0.0, 0x1.5493640d32dd8p-621, 0x1.b3758c21ec0bap-119,
     0.0, 0.0, 0.0, 0x1.aa2301aa0dbb7p-208, 0.0, 0x1.46686d4f3ce68p-268, 0.0,
     0x1.a3507a7988c8ap-315, 0x1.b7b56a6c3fe5p-371, 0.0, 0x1.23993924907bdp-813, 0.0,
     0.0, 0x1.d78808ef45784p-858, 0x1.468b27e69c1fp-198, 0x1.1e6212f7da33ep-232,
     0x1.a46e2f77b2826p-710, 0x1.02c730d0f6ea7p-564, 0.0, 0.0, 0x1.e840d780ef266p-2,
     0x1.6c7051db35451p-642, 0x1.c57007b2b3b1fp-5, 0.0, 0.0, 0.0,
     0x1.4d355480237bp-444, 0.0, 0.0, 0x1.520bdf418de72p-578, 0x1.fc16eb1708ecfp-773,
     0x1.d56c31dd315dfp-305, 0x1.d974bfbea0ef9p-347, 0.0, 0.0, 0.0, 0.0,
     0x1.d8d885df74829p-124, 0.0, 0.0, 0x1.5b78c36b1e1a8p-215, 0.0,
     0x1.32e29c56c267fp-256, 0x1.ee1c9ed1513fap-74, 0x1.bc9cfd88301fdp-397,
     0x1.1b83470cf8bb8p-730, 0x1.684d1365adefdp-760, 0x1.2dd17d06f0623p-683,
     0x1.eae7000cdc5b8p-552, 0x1.311f638011c31p-777, 0.0, 0x1.9b15db18816d4p-235,
     0x1.a770992750e6bp-432, 0x1.e421a435e4124p-837, 0x1.af2ba0a2ac336p-683, 0.0, 0.0,
     0x1.4afcd32c52c35p-28, 0x1p0, 0x1.eab173f9e2de9p-670, 0.0,
     0x1.feea13f419bc1p-901, 0.0, 0x1.cc3c58f244fefp-119, 0.0, 0.0, 0.0, 0.0,
     0x1.3c7961c232fbap-609, 0.0, 0x1.84ce140237814p-932, 0x1.367d4afbabb27p-879,
     0x1.c692d17dfc031p-143, 0.0, 0.0, 0.0, 0x1.1c28dac209746p-707,
     0x1.fba964a5a9b18p-379, 0x1.640977d4f8fa5p-895, 0x1.6225917c42fcap-496,
     0x1.34e228a4a0426p-756, 0.0, 0x1.fdd2df8c76aa6p-348, 0x1.ca486b11593e6p-937,
     0x1.ed41037f98e6p-206, 0x1.4c25b9e4f6508p-223, 0.0, 0.0, 0x1.f1514b652a78cp-711,
     0.0, 0.0, 0x1.8f2d68df692e7p-581, 0x1.656c83965e9bcp-889, 0.0, 0.0,
     0x1.42058c5c02de4p-668, 0x1.bd88b51af810ap-1, 0.0, 0.0, 0.0,
     0x1.ec8587d5119b3p-550, 0.0, 0.0, 0x1.8b978f59de1f2p-154, 0x1.a25eeb2a78099p-380,
     0x1.df93faeed78fbp-428, 0.0, 0.0, 0x1.74ad6d03513b2p-54, 0x1.dbed71c17e86ep-485,
     0.0, 0x1.039e0cc919202p-871, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4782ba5df8bf2p-883,
     0.0, 0x1.76cb1e5449236p-541, 0.0, 0x1.c679629aac71dp-34, 0x1.b275e2eb3ea75p-129,
     0x1.6318e22773d5bp-902, 0x1.aea94b219b47ap-16, 0.0, 0x1.ffffc5ee8d671p-963, 0.0,
     0.0, 0x1.90593748ad118p-896, 0x1.4bb6c25e7107fp-429, 0x1.0f53e23e5de04p-793,
     0x1.c80ee49dfed87p-288, 0.0, 0.0, 0x1.012b135bb6949p-655, 0x1.870b646bfa684p-733,
     0x1.72121db88823bp-659, 0.0, 0x1.582d2f2aa8dabp-333, 0.0, 0.0,
     0x1.a13a080fb9d73p-791, 0.0, 0x1.317aa36986bb6p-306, 0x1.28c6dbce19c9bp-742, 0.0,
     0x1.252655d6a6dbbp-828, 0.0, 0x1.22bd87e948ccfp-465, 0x1.501f1aabb7dc3p-555,
     0x1.b751c429508fdp-563, 0.0, 0x1.298ecf0203291p-563, 0x1.973a3985f9311p-938,
     0x1.52a9caa12255p-311, 0.0, 0.0, 0.0, 0.0, 0x1.0f0655466fa3ap-48, 0.0,
     0x1.67c4014109f69p-985, 0.0, 0x1.5dfdbb051d15ap-458, 0x1.2cfa2fbbb0c4fp-198, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43ca116e2cee4p-787, 0.0, 0x1.9c6b39d83a816p-378,
     0.0, 0.0, 0.0, 0.0, 0x1.bbc834c1d15a1p-687, 0.0, 0x1.c297e83edb631p-192,
     0x1.3ac1512f91af8p-815, 0.0, 0.0, 0x1.b2e29850f3946p-220, 0x1.eab55e5001e9fp-328,
     0.0, 0.0, 0.0, 0x1.63576761f4eb2p-214, 0.0, 0x1.5853cdd1a1261p-995,
     0x1.f479928987fa9p-440, 0x1.a5ee109856aa3p-578, 0.0, 0x1.df9283c80e784p-207, 0.0,
     0.0, 0x1.49593cc9390cap-48, 0x1.412ceed7fe596p-533, 0x1.7171bc01264dap-259, 0.0,
     0x1.65c559f65e28ap-76, 0x1.34f521d670ebep-788, 0.0, 0.0, 0.0, 0.0,
     0x1.b3f19a03e7259p-623, 0x1.1a3eb9af6536bp-838, 0x1.5e28ec8b2c3bep-990, 0.0,
     0x1.b7c96146fdcf3p-664, 0x1.f406d073b84e3p-754, 0x1.971040c6fbde7p-138, 0.0,
     0x1.b7d2375223db5p-982, 0x1.2e2b88518406bp-28, 0.0, 0.0, 0.0,
     0x1.4bd31e0fdfbe9p-924, 0.0, 0x1.852bb29aa1794p-983, 0x1.7f79300fddc8p-831,
     0x1.96378969ebbddp-810, 0.0, 0.0, 0x1.b3515eb70b666p-526, 0.0,
     0x1.628af182e3ad1p-308, 0x1.d606bb783eff9p-663, 0.0, 0.0, 0.0, 0.0,
     0x1.3794db81ff615p-266, 0x1.aa5b234b0a5f4p-974, 0.0, 0.0, 0x1.f296125148801p-406,
     0x1.8179803eecab9p-983, 0.0, 0x1.a9a769a6b2034p-562, 0.0, 0x1.adb23c2d3ee7fp-216,
     0.0, 0x1.4da8d6e1e2d3cp-806, 0.0, 0x1.b977ca08ba718p-381, 0x1.102668924296ap-944,
     0.0, 0.0, 0x1.462cc1b30571dp-453, 0x1.8cd4dab14c125p-201, 0x1.4175ef91241f8p-708,
     0x1.67b90cdc47f87p-233, 0x1.98d36620afa41p-480, 0x1.6ffb2b5c59354p-438, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.19b213fd5bd55p-587, 0x1.f525de9a305fp-263, 0.0,
     0x1.8f817f11d93bap-728, 0x1.b45460cca1b7fp-45, 0x1.0c0ad74045e4p-570, 0.0,
     0x1.48907078a394fp-670, 0.0, 0x1.497319e59cc2ep-100, 0.0, 0.0, 0.0, 0.0,
     0x1.ed3b5867f8475p-507, 0.0, 0.0, 0.0, 0.0, 0x1.61369903f5b8p-195,
     0x1.2747b24b46491p-863, 0.0, 0.0, 0x1.2435881514ee5p-453, 0.0,
     0x1.b8214d05747e7p-499, 0.0, 0x1.91d037e20a653p-71, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.25fa40878a155p-86, 0x1.c60481151d8b9p-296, 0.0, 0.0, 0.0, 0.0,
     0x1.70f175c0daadcp-92, 0x1.d552d5318ff52p-144, 0.0, 0x1.47275728ca4fp-231,
     0x1.59eb6b08a586dp-704, 0x1.756128a5bdafcp-376, 0x1.3523f1385e65dp-676, 0.0,
     0x1.467d37e98cd91p-879, 0x1.528b1f2d04738p-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40643dc572238p-110, 0.0, 0x1.60fe120340e8dp-297, 0.0, 0.0,
     0x1.660b7b2f58447p-259, 0x1.fe17a3bc9a7ep-437, 0x1.f23a008dd68b1p-551, 0.0,
     0x1.f1e3830dfe804p-273, 0x1.d226ce0fe89afp-376, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6195c998f61c1p-647, 0x1.b54c6900b02d6p-744, 0x1.06e03f2837eedp-432,
     0x1.8086025c512c8p-339, 0.0, 0x1.5c123a39b394bp-854, 0x1.decd19c3ce81dp-698,
     0x1.3dcf105a0c816p-332, 0x1.3c3aaa1c07035p-407, 0.0, 0x1.e1502d78d0f38p-463, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b105bd197e56cp-186, 0x1.e8ab9c0c3437ap-179, 0.0,
     0.0, 0x1.08ccd68b8b51bp-484, 0x1.94ba78ad4954fp-583, 0x1.cf00b711ba6a9p-480,
     0x1.47d3c05711a35p-773, 0.0, 0x1.6c1d859244fp-912, 0.0, 0.0, 0.0,
     0x1.a486b650f923cp-558, 0.0, 0x1.108fc387e6cf1p-604, 0x1.b61c57e3310a7p-843, 0.0,
     0x1.5b574f0a1c07ap-208, 0x1.f8785588cccap-724, 0x1.395a46274028fp-579, 0.0,
     0x1.9d2139021ab63p-669, 0x1.ac4bd904a2b13p-33, 0x1.49c9fec42ee55p-156, 0.0,
     0x1.de6ae0b963d93p-109, 0x1.e86bdee00d9c9p-258, 0x1.a47adcd93c9d7p-599,
     0x1.94e07d9f7a192p-871, 0.0, 0x1.e7f1a0ea1a8bbp-644, 0.0, 0x1.455d94ebf958dp-823,
     0.0, 0x1.81f359e5d0157p-334, 0.0, 0x1.5b441c3544f69p-826, 0x1.a44ec31c5df0fp-841,
     0x1.bc2ce6a067d2cp-893, 0.0, 0x1.aeaedf4c90249p-955, 0x1.658cead0a438ap-695, 0.0,
     0.0, 0x1.aa2fee1c7eebep-534, 0.0, 0.0, 0x1.d694207093531p-522,
     0x1.1d8e8cfe03be2p-742, 0x1.c40a81422e905p-6, 0.0, 0.0, 0x1.366522ecaf594p-244,
     0.0, 0x1.f6b0f9dfa6353p-414, 0x1.5d6f4f330a87fp-961, 0.0, 0.0,
     0x1.80732b1f9b9afp-148, 0.0, 0.0, 0x1.b9b27b12aa39bp-844, 0x1.c88db75d60852p-353,
     0x1.b89bb5592d90bp-33, 0.0, 0.0, 0.0, 0x1.e454f5a4df12bp-128, 0.0, 0.0, 0.0,
     0x1.511666546449dp-25, 0.0, 0x1.873363fa359dp-653, 0.0, 0x1.534495949242p-146,
     0.0, 0x1.f36b41d697d37p-39, 0.0, 0x1.4615b7f8d04e9p-148, 0.0,
     0x1.dfd7d020b2f34p-728, 0x1.19e8f2c49513cp-714, 0.0, 0.0, 0.0, 0.0,
     0x1.68bd8a60410adp-331, 0.0, 0x1.ea11d214892ebp-211, 0.0, 0.0,
     0x1.78d4ffa8de184p-444, 0x1.befb72a1b98bdp-844, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb67932ced74bp-177, 0x1.bd7de1c88d8c2p-864, 0x1.c95c754ea7b13p-237, 0.0,
     0x1.6c5027b8171dfp-189, 0x1.567922c9490f9p-539, 0.0, 0x1.b9d28c11b9c0ep-552, 0.0,
     0.0, 0x1.62973c0f4e3a6p-687, 0x1.e1c06d2e29537p-274, 0x1.4e45e147f7602p-1008,
     0.0, 0x1.b9cad613fcf9ap-833, 0.0, 0x1.a49352633bf5fp-456, 0.0,
     0x1.eee5e2ba68ab7p-83, 0x1.3fb8e1198e73p-267, 0x1.d6177d4c25e5ap-233,
     0x1.7b72c29363f19p-118, 0.0, 0x1.d4ca074e47ce2p-393, 0.0, 0.0,
     0x1.6448e7a2f027p-950, 0x1.756886df09b7cp-743, 0x1.4c4a2d2a929bep-302, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.51dfd30d9dcd1p-706, 0.0, 0x1.bae6a00708adep-569, 0.0,
     0x1.758bda5898a9fp-127, 0x1.3bc0907f5a5a2p-29, 0x1.ab37a3c4582b2p-320, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15385755d66d5p-1010,
     0x1.c01503136621cp-881, 0x1.85a26829eedbbp-363, 0.0, 0x1.ace6a42ec9f82p-843, 0.0,
     0.0, 0x1.209734d1fe3edp-490, 0.0, 0.0, 0.0, 0x1.790d73c71591bp-251,
     0x1.8376bcdc056f3p-642, 0x1.9d9b99d9285bp-48, 0x1.25fc82133a55ap-700, 0.0,
     0x1.b09e74c6a4706p-64, 0x1.29df918b03c4cp-984, 0x1.226f8dbf0df0cp-804,
     0x1.c965ee1a45325p-638, 0x1.870eeaf4e7beep-431, 0.0, 0x1.ad7603e1b4543p-105, 0.0,
     0.0, 0x1.1ba3bc8cb330ap-315, 0x1.cbbe5fdc86defp-915, 0.0, 0.0,
     0x1.6b2cc744c4907p-540, 0.0, 0.0, 0x1.647f3f535424ep-299, 0.0, 0.0, 0.0,
     0x1.77fc1e70db42p-230, 0.0, 0x1.993874776419dp-845, 0.0, 0.0,
     0x1.94715c09c39ap-740, 0x1.6efaaccb171b4p-114, 0.0, 0x1.a69dcf310e464p-967, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7efa83ed95fafp-677, 0.0, 0x1.661f1c93f25e7p-7, 0.0, 0.0,
     0.0, 0x1.c08656688b8a4p-359, 0.0, 0x1.fadf568172123p-395, 0x1.d9dfb180f00fcp-712,
     0x1.fcc8a99ec8bcp-925, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b5cd2d4b649ddp-514, 0x1.1f26208e45147p-11, 0x1.f645fbc61c5bep-752,
     0x1.453a2d028cf83p-100, 0.0, 0x1.d1a659a8b2f7ap-123, 0.0, 0x1.6e42c3bbab826p-621,
     0.0, 0x1.9576304d61582p-772, 0.0, 0.0, 0.0, 0.0, 0x1.909fc458a5541p-982, 0.0,
     0.0, 0.0, 0x1.fda27f8b80f28p-673, 0.0, 0x1.9e9bffe3ae8c5p-804,
     0x1.4ae8254f0d6b6p-500, 0.0, 0x1.e2ee7ec66fbebp-302, 0.0, 0.0,
     0x1.fa332cb81b80dp-521, 0x1.fd7f02ea7cd2dp-424, 0x1.998bb2c11bc5fp-775, 0.0,
     0x1.f5b645b3f2a75p-326, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f493ac985d3cp-1002,
     0x1.a06b476aee2bdp-950, 0x1.95a98416e59f1p-649, 0.0, 0x1.4938e13cee3dcp-364,
     0x1.79d167002ba7bp-1014, 0.0, 0.0, 0x1.1e190ef445a87p-1000, 0.0, 0.0, 0.0, 0.0,
     0x1.677739fa818c5p-198, 0.0, 0.0, 0x1.6669afc5cab11p-314, 0x1.321c042cb21ep-41,
     0x1.91e970e9d82dfp-651, 0x1.968f955158b33p-934, 0x1.53d21b4ad3cep-880, 0.0, 0.0,
     0.0, 0x1.446371119417p-770, 0x1.1883d6d8194d4p-195, 0x1.cc67729cbd3a1p-891, 0.0,
     0.0, 0.0, 0.0, 0x1.0733d136a626cp-753, 0.0, 0x1.6ef679d045ed6p-12,
     0x1.295ff5463bf93p-175, 0.0, 0.0, 0x1.d88dce4a22a58p-743, 0x1.7ad5d7a622cedp-405,
     0.0, 0.0, 0.0, 0.0, 0x1.63600e66ea0b7p-46, 0.0, 0x1.465ce5603ac2dp-295, 0.0, 0.0,
     0x1.4926c25c48bafp-14, 0.0, 0.0, 0x1.ff3242fb86ee6p-136, 0x1.5d3da811a96bep-398,
     0x1.f7eef0ee76bdap-383, 0.0, 0x1.1a14e12ed2865p-756, 0.0, 0.0,
     0x1.57c9b9cc7f73p-1013, 0x1.8a7a94ab104d2p-556, 0x1.67efd0a6f7e4dp-421, 0.0, 0.0,
     0.0, 0x1.097a67ef3bb89p-85, 0.0, 0x1.8268239d7af7bp-412, 0x1.9805997d4edf2p-694,
     0x1.98de60236ddafp-273, 0.0, 0x1.48f359b17c305p-53, 0x1.11524a9f2e59cp-396, 0.0,
     0x1.6f98fc41b469ep-949, 0x1.7a6d42a822835p-355, 0.0, 0x1.d2207991ff039p-395,
     0x1.39fa7f767ac13p-866, 0.0, 0.0, 0.0, 0x1.3786dc8026d7p-505, 0.0,
     0x1.9961a5e68c508p-339, 0x1.6a0ebb60c8321p-429, 0x1.de030735c4a31p-994, 0.0, 0.0,
     0x1.486f2167d49c4p-316, 0.0, 0x1.b20848ea22f7ep-705, 0x1.7ec80e7b5611fp-469,
     0x1.61ccc15344cecp-581, 0x1.7c3cc81fdb143p-269, 0x1.51d647fb3047ap-406, 0.0, 0.0,
     0.0, 0x1.42dbc09ab5f28p-947, 0.0, 0x1.56f56c3fdf932p-195, 0x1.aeb0463fdec07p-593,
     0x1.bb91206c5679cp-143, 0x1.c42bfc5d421c8p-836, 0.0, 0x1.32319d20cb81ap-675,
     0x1.4fbe53e6d5ef9p-691, 0x1.9a2794fe6f562p-693, 0x1.b3280397014dbp-165,
     0x1.766b7cf016ec3p-696, 0x1.615781ccfcfeap-245, 0x1.24c0172c0475ap-881, 0.0,
     0x1.1958870dbad5ep-267, 0x1.7a25de658f102p-613, 0.0, 0x1.3a85c759aec6dp-177,
     0x1.6bef106610785p-759, 0x1.a163380197c68p-614, 0.0, 0.0, 0x1.54c6f5acf739bp-509,
     0x1.99c3109774badp-444, 0x1.ad207f8c7d0dcp-503, 0x1.aeb167c839f9fp-263, 0.0, 0.0,
     0x1.ad95e8eb96057p-411, 0.0, 0x1.3f845def903edp-892, 0.0, 0.0,
     0x1.c1f2717e6b945p-684, 0x1.52f40fa2a3e91p-703, 0.0, 0.0, 0x1.b4600c2430aa1p-843,
     0.0, 0.0, 0x1.ae706a38dea92p-582, 0x1.32d0dbe7e11cp-854, 0x1.a6feda28b5056p-274,
     0x1.52bcb236791c9p-549, 0x1.9fb4f6e1112a3p-595, 0.0, 0x1.e074bf07457e5p-529,
     0x1.187be3c0e0bc3p-225, 0x1.b01d39a805c56p-539, 0x1.547305d20d8a5p-504, 0.0, 0.0,
     0x1.72541ae7c868dp-589, 0x1.6b5c2c50da104p-576, 0x1.a2977fe290e49p-63,
     0x1.dad911ec3ade2p-778, 0x1.8d6642a3954adp-313, 0.0, 0x1.51b9687c8ececp-387,
     0x1.c91eb714ed2f9p-519, 0x1.ad408151bc2f1p-279, 0x1.6e9f8f45a404fp-223,
     0x1.3563a035a5cc8p-51, 0.0, 0.0, 0x1.ef852703ee0d1p-546, 0.0, 0.0, 0.0,
     0x1.22706300386fp-601, 0.0, 0.0, 0x1.221d471f4bcb4p-3, 0x1.d6ffeb31e971cp-755,
     0.0, 0x1.81b293d3b60d4p-426, 0.0, 0x1.1ebfee0462cc5p-69, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a984325c4f9ap-544, 0.0, 0x1.e88f6be719d04p-384,
     0x1.90da5620c40c2p-22, 0x1.3e6ddc0ed2d77p-598, 0x1.1f333d70347a3p-121, 0.0, 0.0,
     0x1.168fc65987ef6p-716, 0x1.6f7a8a3f82ba3p-196, 0.0, 0x1.7117fb735ab86p-399,
     0x1.c0d0225c8a4a2p-952, 0x1.fce2e4ed116c6p-804, 0x1.cacf5608e1f9dp-15,
     0x1.0fe93c274cf8dp-210, 0.0, 0x1.d3461aa98ad02p-390, 0.0, 0.0,
     0x1.882fc18016142p-101, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_tand2_u10avx2128(tmp0);
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
    printf("Sleef_finz_tand2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tand2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
