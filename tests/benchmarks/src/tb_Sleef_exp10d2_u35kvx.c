/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d2_u35kvx.c --function Sleef_exp10d2_u35kvx \
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
     0x1.ea167077846cep-683, 0.0, 0.0, 0.0, 0x1.f9d43c0f9b3f8p-563,
     0x1.d357762af6e66p-253, 0x1.83cb59bd166aap-190, 0x1.2493d43096eecp-195,
     0x1.a0f99a5a81fe2p-490, 0x1.52c78e89c39a7p-201, 0x1.4b83bda08b5d1p-734,
     0x1.ecad53e16a83dp-432, 0.0, 0.0, 0.0, 0x1.c0debd807290fp-601, 0.0,
     0x1.d7beb55d2650bp-429, 0.0, 0.0, 0x1.a90c861048c71p-2, 0.0,
     0x1.374cdf6111f82p-331, 0x1.6ec9ccc40621dp-267, 0x1.cdb76ae77aedcp-859,
     0x1.904dcaf05a749p-860, 0.0, 0.0, 0x1.65cf4cae4fdf3p-952, 0x1.a112e83bfabb3p-814,
     0x1.39fe47a0cb35ap-39, 0x1.6456b8c086bd4p-917, 0.0, 0x1.c65827e1903bdp-276,
     0x1.d971e6dec93bcp-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c06887690cc5cp-564, 0x1.9fedcf2c006e6p-188, 0x1.f67cbcca64a3p-914,
     0x1.61b6c7160fc13p-267, 0.0, 0x1.6b31ae0eb72a8p-322, 0.0, 0x1.e788d24071201p-605,
     0x1.651ca28c85439p-906, 0.0, 0x1.643492c306169p-64, 0.0, 0.0, 0.0, 0.0,
     0x1.b9592399967a1p-934, 0.0, 0x1.fa0f752a24a78p-244, 0x1.433411a4b1d4bp-696,
     0x1.6f4b4b4fc8f85p-753, 0x1.450311f2826a5p-157, 0x1.6e8cf1423978p-540,
     0x1.974e5ee460a98p-405, 0.0, 0.0, 0x1.9d942d800b239p-962, 0x1.3cc3f2d9748cdp-233,
     0.0, 0x1.7ee08dda16ca5p-106, 0x1.7a7ffd7d089b8p-462, 0x1.6c63ae47f5b9cp-691, 0.0,
     0x1.7f343804f187bp-425, 0x1.912f0a410360cp-536, 0.0, 0.0, 0.0,
     0x1.ef93b690dc4c9p-884, 0.0, 0x1.1aafa89a7599dp-867, 0x1.7b9e8943f87ffp-417,
     0x1.2b199f7f4f07fp-744, 0.0, 0.0, 0x1.2d7c21d4455cbp-558, 0.0, 0.0,
     0x1.7878dd93aaad6p-867, 0x1.f11d90b52c375p-291, 0x1.eb3c697facb3ep-622, 0.0, 0.0,
     0.0, 0x1.5c213ccdad99dp-315, 0x1.b3139562df4a3p-725, 0.0, 0.0, 0.0,
     0x1.4af1f5914fap-484, 0x1.f2598ba698b3fp-245, 0.0, 0x1.69c5de735f80dp-695, 0.0,
     0.0, 0x1.e51b2498d6b4dp-91, 0.0, 0x1.134e8a73cfc44p-519, 0x1.872a2b001d855p-636,
     0x1.1e53a3c494421p-193, 0.0, 0.0, 0.0, 0x1.050bd20c691b6p-745, 0.0,
     0x1.6d9f6484cc811p-240, 0x1.bcdd62295826fp-91, 0x1.8bbc7614d6af1p-359,
     0x1.1ecbd03a73927p-207, 0.0, 0.0, 0x1.1550c43105e49p-126, 0x1.f7d7320f9e1a5p-788,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54ad8b20fc316p-225, 0.0, 0.0, 0.0,
     0x1.7eafadd42b23cp-415, 0.0, 0x1.55bf08b0c5f91p-157, 0x1.71c414964765p-667,
     0x1.5e6a1fb0fb777p-1022, 0.0, 0.0, 0.0, 0x1.481a0fc91473bp-10, 0.0,
     0x1.541d6fccd817cp-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41397a878bd31p-409, 0.0,
     0x1.99e863890d73p-701, 0x1.70b2e3bea4e22p-583, 0.0, 0x1.ea37e338a237dp-64, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eb82f38ceb7c8p-406, 0.0, 0x1.39c454ebeb0d9p-667,
     0x1.011eb7547f8cp-199, 0x1.09f3aaf4f238bp-148, 0x1.71dc16cb3da1fp-427, 0.0,
     0x1.dd9b2e7b0b87bp-583, 0x1.a8b1bdc7b098bp-747, 0x1.63bd66f994303p-718,
     0x1.0c8306560c083p-838, 0x1.2dcdd8c89d109p-488, 0.0, 0x1.fff99737c9b5cp-661,
     0x1.2b9879397aae5p-70, 0.0, 0x1.bda219588a411p-215, 0.0, 0.0, 0.0,
     0x1.b8819522fb719p-374, 0.0, 0x1.90fd9ac2696d6p-304, 0x1.ff60044ed95c7p-883, 0.0,
     0.0, 0.0, 0x1.11b4bc7e0f7aep-753, 0.0, 0.0, 0.0, 0x1.1ca16f2eb9645p-874,
     0x1.e8ab2ca8a7bdcp-506, 0.0, 0.0, 0x1.19727e7106654p-617, 0x1.11bbd5d6ac3a1p-669,
     0x1.556dc999af12ep-367, 0x1.7d730d6d0da0cp-998, 0.0, 0x1.15bb6f8bfd632p-65, 0.0,
     0x1.cb1e45d50b496p-426, 0x1.b7819e4680a4bp-69, 0x1.be3723fdfcfecp-773,
     0x1.2030758fe5e6bp-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e2a4d52c752p-499,
     0x1.326b5cd357d5ap-666, 0x1.4373a1cdca322p-95, 0.0, 0.0, 0x1.cf06bd616f65ap-445,
     0x1.838de8c132c3ep-1008, 0x1.dc3755310bfdfp-958, 0x1.707faed3a9dedp-185, 0.0,
     0.0, 0.0, 0x1.671affae3eae2p-758, 0x1.967e288a63f98p-980, 0.0,
     0x1.d0d19414ac96ep-994, 0x1.cab78501510f8p-213, 0x1.5828371d1c915p-962,
     0x1.51525c580d43cp-953, 0.0, 0.0, 0x1.454da2fbaba2cp-824, 0x1.ad530a2a2ad62p-565,
     0x1.3f88d6462e0bp-328, 0.0, 0x1.e55d69a57f832p-1021, 0.0, 0x1.0eb915017ee9ap-774,
     0x1.baa2cf6dfff81p-670, 0.0, 0.0, 0x1.dc796b2f84003p-383, 0x1.da3db3f74eed8p-959,
     0x1.2247939a4816cp-59, 0x1.3a058f5d73287p-304, 0x1.bac587ba1e98cp-113, 0.0,
     0x1.338ce73d7338ap-370, 0.0, 0.0, 0.0, 0x1.72ca24eef5eccp-940, 0.0, 0.0,
     0x1.2cc9c8c1d670ep-3, 0x1.0d593cb5b0217p-779, 0x1.a44ae25a50cd3p-702,
     0x1.531fbe0a46c61p-653, 0.0, 0x1.a10ac6deab601p-843, 0x1.aa6c6232e5439p-997,
     0x1.2db07fa8ce1c7p-720, 0x1.b14cb034d2cafp-775, 0x1.8b8e8d293c00ap-616, 0.0,
     0x1.e9c00e419f06dp-880, 0x1.29a39b727760cp-860, 0.0, 0.0, 0.0,
     0x1.564e8878576f8p-609, 0.0, 0.0, 0x1.5021b28855951p-227, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.43ed1b24b3b7dp-624, 0x1.a58f3e31eb378p-679, 0.0, 0x1.5e278704fab05p-381,
     0x1.91ce3b18bd295p-60, 0.0, 0x1.f4a3a970583d5p-630, 0.0, 0x1.bd3343c09327dp-556,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.292e52aad8757p-153, 0x1.e46e2a4100b36p-937,
     0x1.745c688c12088p-837, 0.0, 0.0, 0.0, 0.0, 0x1.42f26b1e4051ep-121,
     0x1.504d3b4891114p-831, 0x1.57e61736fae71p-143, 0x1.2895dc30899f1p-805, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.857c1a4531c6bp-952, 0x1.105fe7146c9e6p-766, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4eda28c95b66dp-31, 0.0, 0.0, 0.0,
     0x1.b8924a8de9ff6p-479, 0.0, 0x1.62b305f01bdc4p-423, 0x1.6e7b73a4f89f4p-655,
     0x1.cfa50964bdaa3p-769, 0x1.811102571b077p-904, 0.0, 0.0, 0x1.cbcdcd2430b29p-656,
     0x1.ae72c1a3acbd8p-495, 0.0, 0x1.629fef311a8edp-504, 0x1.8f6eb9598ac9dp-448, 0.0,
     0.0, 0.0, 0.0, 0x1.2659ad3305939p-730, 0x1.1a1e5cdb3e35cp-344,
     0x1.79bae524d81d8p-920, 0.0, 0x1.a44d2c88daadap-32, 0.0, 0x1.3310ca19bb14fp-11,
     0.0, 0x1.7560e9db815c8p-494, 0x1.7725b6d86302cp-966, 0.0, 0.0, 0.0, 0.0,
     0x1.0016f3964729fp-645, 0x1.9c8b363ab870bp-590, 0x1.757edf101e3ffp-126, 0.0,
     0x1.955b423bb80b4p-825, 0.0, 0.0, 0.0, 0x1.6e618d3b8e5c4p-415,
     0x1.5ffde4dc9a3c4p-157, 0x1.517dff78fb3abp-291, 0.0, 0x1.9f5ed6eea3215p-552,
     0x1.0801f09eaf532p-756, 0.0, 0.0, 0.0, 0x1.1f7ecb95368f4p-472, 0.0, 0.0, 0.0,
     0x1.669194e40a054p-929, 0.0, 0.0, 0x1.c42d95217ccfp-34, 0x1.bdc4fc67759b9p-73,
     0x1.544c7280185c9p-36, 0x1.5604cc70d281p-187, 0x1.bbf9f8a7e29d4p-571,
     0x1.cc95958d9847ep-311, 0x1.7d8279705a8fap-706, 0x1.99cc69dad0463p-977,
     0x1.9c7e3337b208ep-512, 0.0, 0x1.a9421563f04adp-863, 0x1.13a18f6a060e2p-159, 0.0,
     0.0, 0.0, 0x1.5ab46811e811p-941, 0x1.1e54fa6a6394p-941, 0.0, 0.0, 0.0,
     0x1.323f6a74c8203p-838, 0.0, 0x1.c4e31a8267bc7p-732, 0x1.0aff6827af54p-680, 0.0,
     0x1.6a9c49ae71f8dp-526, 0.0, 0x1.91e951dddefafp-50, 0x1.9d3e1806ee6e6p-148,
     0x1.d7beef1242534p-647, 0.0, 0x1.15f5990a2c60dp-682, 0.0, 0.0, 0.0, 0.0,
     0x1.ab6c39cb2f4dbp-992, 0x1.4006c3122908ep-984, 0x1.1113204cb4354p-735, 0.0,
     0x1.df8d4c8cbefap-897, 0x1.13471f6b1a5e3p-603, 0.0, 0x1.d976434ab93e6p-176,
     0x1.39261d580a593p-812, 0.0, 0x1.ec2caded3fc67p-161, 0x1.bce6891db1d2p-247,
     0x1.11d672d81cfdap-701, 0x1.6f4094927acfep-907, 0x1.efddb4682e089p-129, 0.0,
     0x1.e952ac85739a1p-89, 0.0, 0.0, 0.0, 0x1.2c4dc618ec5p-241, 0.0,
     0x1.131e60245eca5p-628, 0.0, 0.0, 0.0, 0x1.f822c6e4b63b3p-220,
     0x1.b275e2dcb57a1p-346, 0.0, 0.0, 0x1.bb7288e1e5ed5p-237, 0x1.767714604d8bbp-651,
     0.0, 0x1.36a528de869f4p-151, 0x1.04c3c965cc2cbp-114, 0.0, 0x1.aa35442cbb366p-324,
     0.0, 0.0, 0x1.6620336c3b5edp-805, 0x1.6c5c387ff37b8p-356, 0x1.7944ccf41a475p-762,
     0x1.ec18ac0984c8ap-316, 0.0, 0.0, 0x1.fb1da80b28658p-769, 0x1.8b018037e9a84p-201,
     0.0, 0.0, 0x1.9b1a2c29e6494p-307, 0x1.3a886de0fd09fp-325, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d091c84a3727ap-548, 0.0, 0x1.a68f7312d3c8bp-965, 0x1.412f370aa1d0ap-450,
     0x1.ab7a2d4b9aa59p-619, 0.0, 0.0, 0x1.c9e55d24e64a8p-83, 0x1.e5532ff3f5e4p-333,
     0x1.c179a17be0178p-308, 0.0, 0x1.7d7b4d629c772p-499, 0x1.5446e43158e0ep-422,
     0x1.419c6ba2e10dp-467, 0.0, 0.0, 0.0, 0.0, 0x1.5c47e9c2d4036p-939,
     0x1.b0d70c9506c4ep-402, 0x1.54faaa2961272p-299, 0.0, 0x1.2459ade1bc5a3p-947, 0.0,
     0.0, 0.0, 0x1.1eb9d63052f32p-566, 0x1.de2a9ef47f248p-395, 0.0, 0.0,
     0x1.39fb579f35843p-758, 0x1.3b256b21aa3a4p-495, 0.0, 0x1.a6bf524f853a4p-121, 0.0,
     0.0, 0x1.119115c1f5c4fp-219, 0.0, 0.0, 0x1.511083ea9cb99p-486, 0.0, 0.0,
     0x1.0caa1bad7ac9bp-306, 0x1.492a7dbe5d05p-412, 0.0, 0.0, 0.0, 0.0,
     0x1.1d375d7b11c92p-1006, 0x1.0382ca06ba519p-196, 0x1.5f10d598454cp-514,
     0x1.737df7750282p-484, 0.0, 0.0, 0x1.2492010879dc7p-426, 0x1.7d27e108e9d03p-229,
     0.0, 0x1.4ed6edbfea9a9p-320, 0x1.169ec8369ba86p-124, 0x1.803051f8f0cabp-91, 0.0,
     0.0, 0x1.2426c16c8c259p-396, 0x1.3e1d3997e1caep-345, 0x1.51ddbe6885ce9p-954, 0.0,
     0.0, 0x1.c0d50f9d1cee5p-490, 0x1.62fef11de1d15p-239, 0.0, 0x1.70769471de112p-122,
     0.0, 0.0, 0.0, 0x1.c6d560dcf619dp-828, 0x1.a0758d988e36cp-311,
     0x1.20c440c09c7fdp-931, 0x1.6bf955d018937p-792, 0.0, 0.0, 0.0,
     0x1.1967d1f2f3277p-920, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.871e87d729606p-413,
     0x1.0bac1ba2f5cf3p-15, 0x1.9f47dbb66207ap-430, 0x1.3612784aa1e48p-37, 0.0,
     0x1.085f95592f438p-30, 0.0, 0x1.7491faf573128p-537, 0.0, 0.0,
     0x1.b8611b37c505ap-315, 0.0, 0x1.9035ba4c0e439p-772, 0x1.98d2fff4a4e1p-1003,
     0x1.6e197f36756ebp-965, 0.0, 0x1.4d829453b7c67p-898, 0x1.9dcb8a3400e54p-846, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cfbc5f1f579d7p-274, 0x1.860163d67ae0dp-734,
     0x1.bf896a3f28699p-703, 0.0, 0x1.0a8016d42d2cdp-777, 0.0, 0x1.ff3e73f11a89dp-687,
     0.0, 0x1.845ee42f712e5p-187, 0.0, 0.0, 0x1.524babe96bb73p-519, 0.0,
     0x1.dffdfc40cfa85p-794, 0.0, 0x1.4ae6849052012p-12, 0.0, 0x1.39459b7f7d81dp-1017,
     0.0, 0.0, 0x1.23ee2d9b2515cp-977, 0x1.d15f6759d1264p-722, 0.0, 0.0,
     0x1.047d9293bbbc3p-940, 0x1.4e7612105a047p-967, 0.0, 0.0, 0.0,
     0x1.f9a384463e437p-810, 0.0, 0x1.1a98220615093p-681, 0x1.47b5c2e960846p-385,
     0x1.0cab0e9e689ddp-908, 0.0, 0x1.7f9cb71e13cdbp-114, 0.0, 0x1.bdad39362dffcp-247,
     0.0, 0x1.eb3ec41cb9f36p-266, 0.0, 0x1.890d6240d2611p-833, 0x1.12732ac95c365p-627,
     0x1.108206379eb0cp-697, 0.0, 0x1.674170e557108p-645, 0.0, 0.0, 0.0, 0.0,
     0x1.feaebf74f6782p-147, 0x1.d80121d43b496p-38, 0x1.0e3b070a76c96p-213,
     0x1.f61a7aa5986dp-231, 0.0, 0x1.cf31736818b9dp-694, 0x1.95ddbdf81279p-55, 0.0,
     0.0, 0x1.f43e8b4804752p-915, 0.0, 0.0, 0.0, 0x1.5f5ceae99f53ap-797,
     0x1.f2e8ff093237p-687, 0.0, 0x1.4e619b7c1d64ep-352, 0.0, 0.0,
     0x1.dc9b4debeb1eep-646, 0x1.610a244f79fdp-183, 0x1.7b4481224a03ep-912,
     0x1.cbc8d0e3b426dp-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.828cf471a712ap-659, 0.0, 0x1.ae12d52ab733fp-448, 0x1.13cf53b64293cp-818,
     0x1.36ec829c751c6p-955, 0x1.03d783f6cc34dp-341, 0.0, 0.0, 0.0,
     0x1.1595c34291874p-900, 0.0, 0.0, 0x1.8bf7721a01043p-784, 0.0, 0.0,
     0x1.34d721ae81efep-817, 0x1.dbcf3e42cbf5p-812, 0x1.93b075b411fccp-402, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f4ff0df7ab90fp-541, 0.0, 0x1.46c8d3582254p-222, 0.0, 0.0,
     0x1.c15c838797141p-210, 0.0, 0.0, 0.0, 0.0, 0x1.e651b730325bbp-318, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b91df782e294ap-104, 0.0, 0.0, 0x1.7eb36084fecd4p-94, 0.0,
     0x1.ec6ff8b128b6cp-564, 0x1.d256c18aa46b2p-570, 0x1.131a76b3d4581p-476, 0.0, 0.0,
     0x1.68e0c1494f613p-898, 0x1.f6b59607499b3p-584, 0x1.be424e0dd840cp-21,
     0x1.dba1b59b8344p-531, 0x1.0a8ab228a5fefp-301, 0x1.f9e53bbe56e2dp-784, 0.0,
     0x1.94401c602358ap-508, 0x1.5416dc59a524bp-773, 0x1.c98ce840bb2a8p-260,
     0x1.980f2fd238b2fp-106, 0x1.8357abcbf1f5p-704, 0.0, 0x1.09ef2be4e0aabp-130, 0.0,
     0.0, 0.0, 0x1.1c4536dc196bp-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c748685860f2ap-858, 0x1.3747c694c932p-780, 0.0, 0x1.02917a341c2fp-264, 0.0,
     0x1.788528e77bad3p-947, 0x1.f6a75ca65658ep-202, 0.0, 0.0, 0.0,
     0x1.022180da8fc05p-548, 0x1.d73e0cfb73b1cp-454, 0.0, 0.0, 0x1.a8727e6b2faep-345,
     0.0, 0.0, 0x1.d5ae19af4cf55p-710, 0x1.8fb0c7a76237bp-491, 0.0, 0.0, 0.0,
     0x1.1fb3d02e6ec8ap-432, 0.0, 0.0, 0.0, 0.0, 0x1.f2390392f55b4p-426, 0.0, 0.0,
     0.0, 0.0, 0x1.0abad4495da2cp-866, 0x1.492d8f176db1ep-828, 0x1.52f42785e7981p-886,
     0x1.76d3097f586edp-862, 0.0, 0x1.9cbb347dea14fp-12, 0.0, 0x1.756de3dd25cffp-527,
     0.0, 0.0, 0x1.98121f243f85dp-790, 0x1.8f01090c6351p-271, 0.0, 0.0,
     0x1.ad5a133e154b4p-930, 0.0, 0.0, 0.0, 0.0, 0x1.b159b3e60dceep-52, 0.0, 0.0, 0.0,
     0.0, 0x1.3ad81d9b732a5p-893, 0x1.432b54737c846p-973, 0.0, 0.0, 0.0,
     0x1.8589dfab9aac6p-333, 0x1.99a81b329c06cp-121, 0.0, 0.0, 0x1.0881f8e5f1a73p-233,
     0x1.8b71cd755c3edp-819, 0x1.25299854d94bdp-249, 0.0, 0.0, 0.0,
     0x1.0ac0703568e44p-150, 0x1.d34a5681589bbp-735, 0.0, 0x1.f2e6899db06fep-952, 0.0,
     0x1.e405cdb07e251p-231, 0.0, 0.0, 0x1.848094909e914p-547, 0.0, 0.0, 0.0,
     0x1.6f419fb76caf2p-443, 0.0, 0x1.23e4e3c446948p-582, 0x1.71861ffb6fe5p-647,
     0x1.58a5d80dd5963p-531, 0x1.5e2a8b8d6e1p-236, 0x1.231120bbaeb2bp-194, 0.0,
     0x1.cd3f4a6384cbcp-383, 0.0, 0.0, 0x1.3440351724b6fp-5, 0.0,
     0x1.0fc6c6d7bf6acp-592, 0x1.dceab12e1687fp-485, 0.0, 0x1.16f7f92063c26p-628,
     0x1.8af1715e487b1p-159, 0.0, 0.0, 0x1.dfe5f075ef189p-602, 0x1.ce3d683735afep-923,
     0.0, 0.0, 0x1.d2159c92655a2p-449, 0.0, 0.0, 0x1.e521064976b78p-94,
     0x1.4a961a0a9b8dbp-640, 0x1.6b3d59a015a3bp-745, 0.0, 0.0, 0x1.b95713923225p-619,
     0.0, 0.0, 0x1.4143fa130a98p-245, 0x1.d77b47b5fcd32p-50, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97015d29edd5p-438, 0x1.e9b3732a54e4ep-19, 0.0, 0x1.2eadd0451a819p-538, 0.0,
     0.0, 0.0, 0.0, 0x1.7aa273d0fe017p-880, 0x1.134277fcadf4fp-857,
     0x1.7a0ae6a075ef7p-183, 0x1.0919a44e52571p-820, 0.0, 0x1.d51d449037111p-807, 0.0,
     0.0, 0x1.1fc190548a0d4p-233, 0.0, 0.0, 0.0, 0x1.0844223ad6161p-13,
     0x1.18c045a6b970fp-736, 0x1.f10b52c71cc35p-216, 0.0, 0.0, 0.0, 0.0,
     0x1.bd91b41afdad9p-695, 0x1.58776276cd25fp-525, 0.0, 0.0, 0x1.e3f23b75927a7p-909,
     0.0, 0x1.e63b92002b614p-98, 0x1.ba8a0937a5826p-886, 0.0, 0x1.ea1d6fb77a732p-384,
     0.0, 0.0, 0.0, 0x1.663b1416bcdbbp-83, 0.0, 0x1.68195fe3be84dp-858, 0.0,
     0x1.c1ba953aa36b8p-32, 0x1.33780751a726ap-655, 0.0, 0.0, 0x1.89852162aac53p-43,
     0x1.f1e2ec5c421f6p-638, 0.0, 0x1.c95cbfe8f4516p-853, 0.0, 0.0,
     0x1.f6fa2b03bfd1p-556, 0x1.11441d18bf9eep-740, 0.0, 0x1.496c00d03bedap-96, 0.0,
     0.0, 0.0, 0x1.3fd63b7adab75p-275, 0x1.bc8e2e65c41cep-887, 0.0,
     0x1.75635ed9da798p-591, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab31e12e097bep-93,
     0x1.e775cef386a02p-447, 0x1.16028323a9975p-836, 0.0, 0x1.f12574ef8a0ffp-856,
     0x1.07f9ffe11c35cp-113, 0.0, 0x1.f481f2c26fb81p-216, 0.0, 0.0,
     0x1.0454064be33cfp-777, 0x1.37c1d992918a4p-297, 0x1.b296bdda4b26fp-24, 0.0,
     0x1.3848afad0cd56p-872, 0x1.97723f504daa1p-929, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7df022f7b9995p-266, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d677bbac312e9p-69, 0.0,
     0x1.46cbb2e65b6fdp-3, 0.0, 0.0, 0.0, 0.0, 0x1.3a0e3a324d2c3p-556,
     0x1.fe5d8579493fdp-224, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.946454de58134p-71, 0.0, 0.0,
     0.0, 0x1.ab79f46b8c938p-757, 0x1.a7e1268cfddd4p-967, 0.0, 0x1.4488c02f50e68p-157,
     0.0, 0x1.f39327c72133p-151, 0x1.ab49e1a5fc95ep-516, 0x1.9af417d01a812p-271
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
            tmp1 = Sleef_exp10d2_u35kvx(tmp0);
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
    printf("Sleef_exp10d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp10d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
