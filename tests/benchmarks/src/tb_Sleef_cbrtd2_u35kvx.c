/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd2_u35kvx.c --function Sleef_cbrtd2_u35kvx \
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
     0.0, 0x1.8b991eff5ad62p-241, 0.0, 0x1.c0596adcce855p-875,
     0x1.550add52fe3a6p-967, 0.0, 0.0, 0x1.816270e48d825p-536, 0.0,
     0x1.6ecfc4479e71ep-818, 0.0, 0x1.7af79b5c084c7p-948, 0x1.75e5c9ba2dadp-585,
     0x1.49fad67c7eb81p-310, 0x1.fd183271bdf0ep-377, 0x1.20198bec0da45p-581, 0.0, 0.0,
     0.0, 0.0, 0x1.19c043e1a6a09p-598, 0.0, 0x1.a6d9a1b9a183cp-229, 0.0, 0.0,
     0x1.e7a9b43b9333cp-495, 0x1.ab554314fcda9p-955, 0x1.eae1ad8d80d2ap-920, 0.0, 0.0,
     0x1.d2ac27797dca2p-564, 0.0, 0x1.e6c5b82f8f153p-755, 0x1.1666c326d8326p-808,
     0x1.0cc810414360dp-330, 0x1.0929883a7be61p-610, 0.0, 0.0, 0x1.d95c25c936333p-645,
     0x1.0ed5034ef2282p-695, 0.0, 0.0, 0.0, 0x1.5be7596753c03p-691,
     0x1.016ecfa32fb4bp-800, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78086e9f66b66p-765,
     0.0, 0.0, 0x1.2bbacbfa96533p-918, 0x1.e794ecc8e5a3fp-450, 0.0, 0.0,
     0x1.c87f2bac3d7d5p-825, 0x1.b9822185af022p-533, 0x1.0b25815689268p-374, 0.0,
     0x1.6ea4e86f431cfp-573, 0x1.50d28c2f6439ap-341, 0.0, 0x1.bc1391f8181b5p-678, 0.0,
     0.0, 0.0, 0x1.ecdab028e9f6fp-526, 0.0, 0.0, 0x1.de7c13d177725p-24,
     0x1.753b956c9af8bp-906, 0x1.ce3f484a871e7p-43, 0x1.ca756e1a9d383p-312, 0.0,
     0x1.824a2d8eb99fep-477, 0.0, 0.0, 0.0, 0x1.e625aff6a17a2p-202, 0.0,
     0x1.ceea5fd2f4d64p-513, 0.0, 0.0, 0.0, 0x1.86af0eff3cfd3p-628, 0.0, 0.0,
     0x1.ae2762467ef4bp-512, 0.0, 0x1.bd9f83b2453f6p-850, 0x1.acc12f0a93b24p-824, 0.0,
     0.0, 0x1.aae2b99e7fa73p-600, 0x1.19f459fe20e9cp-739, 0x1.605dcb36fe986p-1018,
     0.0, 0.0, 0x1.7cf97d8e378fap-741, 0x1.e3532ea9462d4p-940, 0x1.55556975377bcp-851,
     0x1.ba329a2cdf059p-166, 0x1.ddaafcb364223p-357, 0x1.657601e3fe949p-67,
     0x1.46843027d5de4p-543, 0.0, 0x1.15cc077e697e3p-57, 0.0, 0.0, 0.0, 0.0,
     0x1.880685e68dda2p-91, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc3b58552c043p-996, 0.0,
     0.0, 0x1.f64c0f1780bacp-381, 0x1.fc80c4152e06fp-57, 0.0, 0x1.0f72e1d77e799p-567,
     0.0, 0.0, 0x1.7854c567b6863p-179, 0x1.8233ffa4fea72p-437, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cbcdbaf0ca92dp-502, 0x1.d0b7d2b083a32p-933, 0.0, 0x1.72d60062b2d2ap-579,
     0x1.fc36860b38e2cp-799, 0x1.aa070170877d5p-815, 0.0, 0x1.7f69d0f2c987p-52,
     0x1.51580af0a6214p-875, 0x1.78160dc57b26cp-182, 0x1.350ac017f7adep-953, 0.0,
     0x1.52bd6f70e32a7p-545, 0.0, 0x1.c879c54ac38a3p-989, 0.0, 0.0,
     0x1.8b7db36d4827bp-538, 0x1.c4fc8ee81c8ep-77, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff53b0d55d194p-749, 0.0, 0x1.222e4d541105dp-711, 0.0, 0x1.2273b73466e47p-697,
     0.0, 0.0, 0x1.5cc971770d90cp-178, 0.0, 0.0, 0x1.ea23c9eb75747p-114, 0.0, 0.0,
     0x1.47ea268b580b1p-50, 0x1.bc2f3fe8e4fcfp-30, 0x1.c994fb4447c2fp-615, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.39d725bbbe854p-816, 0x1.f00610c7f491bp-346, 0.0,
     0x1.54ea44fe82d66p-385, 0x1.582136f4874a5p-418, 0x1.81e4fb722cb92p-326, 0.0, 0.0,
     0x1.d93bebc9b77b8p-340, 0x1.c26e5fddf0521p-771, 0x1.7f9e4727f0757p-41,
     0x1.408dd14b5e868p-965, 0.0, 0.0, 0.0, 0.0, 0x1.46eacf48f1adcp-144, 0.0, 0.0,
     0x1.05a053828aa41p-769, 0.0, 0.0, 0x1.5427fe27b867ap-785, 0.0, 0.0,
     0x1.149e909a60f7p-26, 0.0, 0.0, 0x1.da68117c1f267p-928, 0x1.cef93b708827bp-939,
     0x1.1be900055579bp-1006, 0.0, 0x1.11c83c28af679p-926, 0.0, 0.0,
     0x1.26be8966da68ep-489, 0x1.b18bcb1de8a28p-569, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d32b8b938aa2p-518, 0.0, 0x1.9d18826b83e46p-829, 0x1.0829faa02bd6dp-70, 0.0,
     0.0, 0.0, 0.0, 0x1.adab7782fa483p-133, 0.0, 0.0, 0.0, 0x1.1b4fae143ab6ep-349,
     0.0, 0.0, 0x1.87629c2ddb639p-806, 0.0, 0.0, 0.0, 0.0, 0x1.63242d0224dffp-764,
     0x1.30c23b1e7d5b8p-710, 0.0, 0.0, 0.0, 0x1.4a0ba0d5ec8adp-886,
     0x1.4990a9b97ce8p-887, 0.0, 0x1.cd9fab6870d11p-344, 0.0, 0x1.da5cd2b1079c4p-81,
     0x1.4806b148c39d2p-997, 0.0, 0.0, 0x1.d91a25781c9cfp-760, 0x1.cbb3d1d3eee9dp-666,
     0.0, 0x1.3c99e0e0dd5d1p-134, 0x1.2110ca20e2a93p-135, 0x1.74397ef15081fp-685, 0.0,
     0.0, 0x1.42ad14912fcc6p-896, 0.0, 0x1.10ef0ad6baf74p-414, 0x1.252b6e59b39ep-559,
     0.0, 0x1.89bf4e54b29dcp-522, 0.0, 0x1.0623714f2c962p-594,
     0x1.8c7d3cf2c33c2p-1021, 0x1.0c10e5b8e1b8p-525, 0.0, 0x1.2d6b6aefd331p-830,
     0x1.062a22790c1a8p-875, 0x1.653af3d37650fp-53, 0.0, 0.0, 0.0,
     0x1.08d39e58670fcp-170, 0.0, 0.0, 0x1.192472a552a56p-836, 0.0, 0.0,
     0x1.85aa8bb4466b7p-554, 0.0, 0x1.d008f77ddf46ep-725, 0.0, 0x1.7785adbc6ed79p-31,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8875fc0c6d4b2p-984, 0.0, 0.0, 0.0,
     0x1.3c032d7cd5b66p-260, 0.0, 0x1.dd2c8917639e7p-319, 0.0, 0.0,
     0x1.3ed167d354007p-209, 0x1.62cafcbc57068p-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c14216448d15bp-162, 0.0, 0x1.4e2840cb6231cp-434, 0.0, 0.0,
     0x1.2a9ff3576fa79p-791, 0.0, 0.0, 0.0, 0.0, 0x1.635fc29da22d2p-926, 0.0,
     0x1.6ff312a014cbdp-915, 0x1.e6773d53d89a4p-384, 0.0, 0.0, 0.0,
     0x1.1b137beb88476p-796, 0x1.bd271cd860f97p-823, 0.0, 0x1.03c0875826a21p-939, 0.0,
     0.0, 0x1.8356f2e5c4724p-454, 0.0, 0.0, 0.0, 0x1.174935eb1efacp-601,
     0x1.566b37bb3fe08p-152, 0x1.7a83591e4bb09p-611, 0x1.0e1681d035184p-51, 0.0, 0.0,
     0x1.adabd5992483dp-37, 0.0, 0x1.29328e0e27cbp-32, 0.0, 0x1.97f36530b4e75p-880,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b7795718d5b8p-285, 0.0, 0x1.d4cb9e1013a3ap-841,
     0x1.72f729c6e2528p-929, 0x1.c16af4db0d412p-63, 0.0, 0x1.cc54a5e2b1ad9p-485,
     0x1.33a94cbe7be45p-569, 0.0, 0.0, 0.0, 0.0, 0x1.11bebc4c95d49p-601,
     0x1.2d2ecd0eb9a72p-890, 0x1.2d57ac1e82a69p-620, 0x1.dee87489226bap-801, 0.0,
     0x1.fe4d4033c30f2p-940, 0x1.0a75b226f90ffp-393, 0x1.0e61da6a3651ap-101, 0.0,
     0x1.00fd300526cc2p-572, 0x1.de0e2ab16959cp-571, 0x1.f706501db530ap-612,
     0x1.0a0c371b651a7p-977, 0.0, 0x1.34c948cde9f4dp-30, 0x1.8ff2d94225826p-478,
     0x1.8bf8c91a50418p-855, 0x1.0be4b46163ffep-893, 0x1.67b22234c653dp-392,
     0x1.ce2a548dcde47p-180, 0.0, 0x1.f82ae245b2d3dp-646, 0.0, 0.0,
     0x1.6d11939e33f7ap-687, 0x1.445207b177cfbp-109, 0x1.98e8dfa4a3408p-548,
     0x1.452ef079e445ep-978, 0x1.5ccd53aae2396p-481, 0.0, 0.0, 0x1.80691b2de11b1p-200,
     0x1.dc962181f15fbp-277, 0x1.232d201a1a2ecp-333, 0x1.41a677f74fe91p-199,
     0x1.6e21dd68a2569p-129, 0.0, 0x1.cf801ceeba6f6p-747, 0x1.784831a7ba388p-964,
     0x1.29df972d077b9p-966, 0.0, 0x1.11b003365b6p-480, 0x1.1c594e486c559p-198, 0.0,
     0.0, 0.0, 0x1.0df0ba6948cbcp-656, 0x1.a16f538f3e789p-332, 0.0, 0.0,
     0x1.8420629ea7539p-25, 0x1.dbc82009e25abp-835, 0.0, 0.0, 0x1.22a72d9def465p-931,
     0x1.63d6a21d406b6p-388, 0.0, 0.0, 0.0, 0.0, 0x1.5a8544d97a76cp-263, 0.0, 0.0,
     0x1.576d7f9fb37d2p-205, 0.0, 0.0, 0.0, 0x1.00e34b247bccdp-97,
     0x1.630aa1460a058p-983, 0.0, 0x1.31b8a21cf95dep-549, 0.0, 0.0,
     0x1.618b3cc50ee99p-945, 0.0, 0.0, 0x1.af11ec1d019cep-312, 0.0,
     0x1.a761dbaf0aa3ap-121, 0.0, 0.0, 0.0, 0x1.63200da3406f8p-569, 0.0,
     0x1.ee60565d66667p-994, 0x1.ca401a4f459bap-664, 0.0, 0x1.471485ad5d0bep-553, 0.0,
     0x1.2b03107a5208ep-430, 0.0, 0.0, 0x1.d0945ee6b776bp-152, 0x1.cecfacd47a2a9p-539,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4851ba9d28da5p-752,
     0x1.9c079e2c85ea7p-775, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c93ce89fc91p-166,
     0x1.655af1c8c6b01p-812, 0x1.7adff45a2e19dp-456, 0x1.6528b7ac4da8bp-262, 0.0,
     0x1.3ef04232fe2e9p-297, 0.0, 0.0, 0x1.4462fe6717756p-14, 0.0, 0.0,
     0x1.f63e2e5679b25p-486, 0.0, 0x1.5e32f9b76cd12p-439, 0x1.8d635700fe23fp-931, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b90a020ac7ef6p-398, 0x1.48b1b022dec21p-767, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34b811f008944p-780, 0.0, 0.0,
     0x1.fd4d929c0527ap-971, 0.0, 0.0, 0x1.f866018ee3b85p-612, 0.0, 0.0, 0.0,
     0x1.68207fe6063ecp-216, 0x1.a617f291bef57p-815, 0x1.3cbfc0bb25a8ap-140, 0.0,
     0x1.6452afc3cca7ap-743, 0x1.0b6b2e95f33cbp-60, 0.0, 0.0, 0x1.b33482f5bcba3p-986,
     0x1.c7be82dc68944p-928, 0x1.6cc0d35124419p-316, 0.0, 0x1.1cccab48678b9p-60,
     0x1.46688a2207546p-390, 0.0, 0x1.0a3023c99ad98p-124, 0x1.5b60bb2f34f5fp-284,
     0x1.b113301a59677p-920, 0.0, 0x1.b22dd01af5bd4p-942, 0.0, 0x1.1ef278fea21bbp-339,
     0x1.ebd37fa229b94p-505, 0x1.b119bb29c13afp-846, 0.0, 0.0, 0x1.154312b28d1dcp-214,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03f28c98f929ep-137, 0x1.947c901bb35edp-862,
     0x1.965231f6282b3p-348, 0.0, 0.0, 0.0, 0x1.ba58c83579a09p-985,
     0x1.a4ef728e510a4p-911, 0x1.23e64e5d5e766p-849, 0x1.fd7f220c240ebp-685, 0.0, 0.0,
     0x1.bf537f89dacdcp-151, 0.0, 0x1.0892958934a2cp-720, 0.0, 0x1.c43d0e5cb4771p-847,
     0x1.7807149678579p-351, 0.0, 0x1.62c1e766a478cp-935, 0.0, 0.0, 0.0,
     0x1.5e13070416067p-284, 0x1.63182efa01f43p-628, 0.0, 0x1.f02bdf46150f8p-527, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ede3e784b9da9p-924, 0x1.5b1e94d6c4d9fp-235, 0.0, 0.0,
     0x1.15c902a199193p-313, 0x1.98bf438743e66p-703, 0x1.8f92cd5ece4c4p-31, 0.0,
     0x1.366ed56ea3a5cp-1019, 0.0, 0.0, 0x1.c38a8c70f2ba6p-412, 0.0,
     0x1.324790a580e0ep-1013, 0.0, 0.0, 0x1.df4f866ca1119p-645, 0.0,
     0x1.faaba7147e1edp-907, 0x1.96cd4279116bfp-239, 0x1.be0c1c681abb3p-887,
     0x1.e8072fa0b9bb3p-656, 0.0, 0x1.74a5b88a44881p-135, 0x1.fbf3473709bdfp-658,
     0x1.ec1ed30bfb13dp-179, 0.0, 0x1.89ab0a9dbc5a5p-396, 0.0, 0x1.e8ddeb20399f2p-633,
     0.0, 0x1.6d6cb7e85b06bp-483, 0.0, 0.0, 0.0, 0x1.53af8b2cc4595p-223,
     0x1.c2e75ea090f5ep-662, 0.0, 0.0, 0.0, 0x1.9e0bee2640b5dp-649,
     0x1.2dc3b3b5e6e3p-571, 0.0, 0x1.0830c8d67c249p-206, 0x1.addff586c94e8p-26, 0.0,
     0.0, 0x1.080c54422d472p-906, 0.0, 0.0, 0.0, 0.0, 0x1.d86dea11101bap-858,
     0x1.0b06cc3932f59p-500, 0.0, 0.0, 0.0, 0x1.cd2d26d1004a5p-360, 0.0, 0.0,
     0x1.2f10f069c8358p-878, 0x1.55728050e4339p-279, 0x1.5455ffb1049e5p-264,
     0x1.1e28b7e711cc3p-968, 0x1.6d025a916436ep-117, 0.0, 0.0, 0.0,
     0x1.96e3e841a8b79p-524, 0.0, 0.0, 0x1.a5213df56ead7p-998, 0x1.a5e9d4eb191dp-706,
     0x1.d0ce22270efafp-250, 0.0, 0x1.37658924e424ap-115, 0.0, 0.0, 0.0,
     0x1.5c8a82c8ef398p-699, 0x1.658dfd5d7a0b4p-971, 0x1.94f887dec128ap-129, 0.0,
     0x1.dc8a3c4403d5cp-476, 0x1.83e9bf091413ep-752, 0.0, 0x1.5838d7a3c2d47p-735, 0.0,
     0x1.45ba1b8fedd37p-128, 0x1.ff74b718458e1p-929, 0.0, 0x1.7b89d37de978p-489,
     0x1.6cfc1e13503edp-322, 0.0, 0x1.b81d154a49d2p-176, 0.0, 0.0,
     0x1.51e1f2f420781p-190, 0.0, 0.0, 0.0, 0x1.a68fa54c995e8p-375,
     0x1.23f9796f8baeap-419, 0x1.e7cd77130751p-821, 0x1.1ac6cf0471336p-1016,
     0x1.1c9e23158d7f8p-550, 0x1.3947ddb985a3bp-351, 0x1.bd6faf90857f4p-144, 0.0,
     0x1.263b4ea260bb7p-733, 0.0, 0x1.dd3a41a8303b9p-752, 0.0, 0.0,
     0x1.6459dc9597545p-197, 0.0, 0.0, 0.0, 0x1.81e75d5e1891p-925,
     0x1.dc66cf28ac5a4p-71, 0.0, 0x1.d3262ee4fe829p-192, 0x1.e64fc23cdb765p-924,
     0x1.cc3f868b81892p-493, 0x1.9f05b3e5b0cc9p-477, 0.0, 0.0, 0.0,
     0x1.31b1d4ba8f5c6p-550, 0.0, 0.0, 0.0, 0.0, 0x1.d4b2cdad15865p-22, 0.0,
     0x1.662713ad8a2cbp-778, 0x1.8a4947bf042cdp-725, 0.0, 0.0, 0.0,
     0x1.89b42b02b1359p-753, 0x1.2de451e855131p-196, 0.0, 0x1.8a341296597d8p-386, 0.0,
     0x1.5c25ce91b745cp-699, 0.0, 0x1.d218f8e5812p-355, 0.0, 0x1.088a82968354fp-225,
     0x1.e9eb9b041d01fp-538, 0.0, 0.0, 0x1.aca16bd167b68p-258, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8a00a60c6d291p-996, 0.0, 0.0, 0.0, 0.0, 0x1.b21cce0bb5cb3p-784, 0.0,
     0.0, 0x1.b46d8dd1be3fep-455, 0x1.a4980e5492434p-888, 0x1.7dd1c75157f11p-789,
     0x1.1c4b4d5608698p-579, 0.0, 0x1.3f50d660744a7p-916, 0x1.a857081c0835cp-9, 0.0,
     0x1.ef473902353d5p-922, 0.0, 0.0, 0.0, 0x1.cf90c265461e9p-955,
     0x1.4c8330f1a316cp-573, 0x1.5f18f1cac7fb7p-557, 0x1.23e072da57e3bp-444,
     0x1.3063d74719368p-59, 0.0, 0x1.89c9b7ee32547p-346, 0x1.670d2ff5e9ba3p-550,
     0x1.5a4b84a91a79ap-423, 0x1.55aa7d8c027bep-51, 0x1.b0dc14fab71f2p-256,
     0x1.30c5bfe71d67ep-643, 0x1.3876409fdef21p-1000, 0x1.d93c63c7a3841p-565,
     0x1.84c981781e33bp-1021, 0x1.19eef4450e7d7p-883, 0x1.88d475c8a2ebbp-429, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.770fa26127ab9p-395, 0x1.ee1c00006fd0dp-113,
     0x1.3ae2f9b5e6ae8p-781, 0.0, 0x1.9699f740ba762p-15, 0x1.750e083d922e4p-652, 0.0,
     0.0, 0.0, 0x1.b6dc32fc3dc54p-578, 0x1.a6740fb00286fp-853, 0x1.574118e4d9bfdp-630,
     0.0, 0.0, 0x1.849ba16d6e9ecp-954, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.94731782cdb31p-807, 0.0, 0x1.5cb31238d210cp-443, 0.0, 0x1.5e227fc6ac96bp-402,
     0x1.7b60be27ee957p-16, 0.0, 0.0, 0x1.5b51cd7f22136p-437, 0x1.bd5d54add8d52p-847,
     0.0, 0.0, 0x1.4ae45caaa0089p-413, 0.0, 0x1.f59da65a16518p-233,
     0x1.31efb7a466881p-722, 0x1.1b1cb8ffcb134p-317, 0.0, 0x1.ce12d266b25edp-792, 0.0,
     0x1.1d7b5daa4b7a9p-66, 0.0, 0x1.65db032a1e96cp-171, 0x1.3a105eef95867p-995,
     0x1.c17b11d961936p-15, 0.0, 0x1.95fdb3358465bp-1013, 0.0, 0.0, 0.0,
     0x1.a881c42fc4c82p-130, 0.0, 0.0, 0x1.421f8c3e1b278p-654, 0.0,
     0x1.213cfcfacf36p-6, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c1e51374954dp-821, 0.0,
     0x1.f712ec42993ccp-457, 0.0, 0.0, 0x1.f453ecc744606p-567, 0.0,
     0x1.11afe3a88dfb2p-758, 0.0, 0.0, 0.0, 0.0, 0x1.b6e18cab1b7abp-434, 0.0,
     0x1.5235a3606666dp-10, 0.0, 0x1.969d3579b79cep-171, 0x1.e6c9154e06c71p-451, 0.0,
     0x1.e523ff279d8p-116, 0.0, 0x1.33ae023d4ea91p-898, 0.0, 0.0,
     0x1.ff91853f8e46cp-167, 0x1.f0f6b82d98872p-334, 0x1.de9041fd20bbcp-258, 0.0,
     0x1.7e287f1deaa4ap-77, 0x1.44c92e65f5b9ep-219, 0.0, 0x1.5cf6a0803aad9p-411, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cda2a4b424d71p-89, 0.0, 0.0, 0x1.e31d23e1fa89bp-763,
     0x1.3528c7244df8dp-206, 0x1.0a15a26bb966bp-739, 0.0, 0x1.4329765fc0b1fp-939, 0.0,
     0.0, 0.0, 0x1.b8761ab44fadbp-994, 0x1.3bfaada028196p-9, 0x1.91260db780fc4p-154,
     0x1.4ab764f33284dp-743, 0x1.fb3428755158ap-735, 0x1.8460228169014p-517, 0.0,
     0x1.dea8e87c8abcep-751, 0.0, 0.0, 0x1.b73964340b17fp-311, 0.0,
     0x1.14c112d36dbe5p-549, 0x1.6f5b7864abf2cp-460, 0.0, 0x1.b97d0ebf33486p-285, 0.0,
     0.0, 0.0, 0x1.8887b4bde18b9p-992, 0x1.29becf2ee5da6p-979, 0.0,
     0x1.4e15cc82957f4p-952, 0x1.fb2e73d5015b9p-629, 0.0, 0.0, 0.0,
     0x1.eafb5d949f5b8p-106, 0x1.01e988a5c41cep-421, 0.0, 0.0, 0x1.fc31f54776a1fp-410,
     0x1.42ac2554095b9p-826, 0x1.4b6e9d54c412cp-958, 0.0, 0x1.f054b2e806bc2p-521,
     0x1.5278862aad906p-872, 0x1.f8c558b6bf5e3p-767, 0.0, 0.0, 0.0,
     0x1.87deffeee468fp-865, 0.0, 0.0, 0x1.864fe05eb6ec8p-360, 0x1.61531d9e33f11p-578,
     0.0, 0.0, 0x1.64ec6e51ae6e2p-117, 0.0, 0x1.2f437313fd01p-785, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c6d36401b01f7p-831, 0x1.9f9061b74c74dp-1015,
     0x1.0ac205538e973p-767, 0x1.256e887bf9acep-642, 0x1.bee414a41017p-884, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ed8e6674a5b76p-574, 0.0, 0x1.8613ec2ca1142p-678, 0.0, 0.0,
     0.0, 0x1.7040fcc12e7e1p-753, 0x1.94036503c7637p-572, 0x1.05fd61eb2ad74p-912, 0.0,
     0x1.6b9622c02fa32p-44, 0x1.9d8e3d77827a9p-507, 0.0, 0.0, 0.0, 0.0,
     0x1.c21e03d2f3facp-83, 0x1.d54a80c32558cp-216, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc18af8853cc7p-304, 0.0, 0.0, 0x1.a0013f0be6272p-787, 0x1.b25a7a1c4bb13p-178,
     0.0, 0.0, 0x1.ad96cc578b7c3p-606, 0x1.bbeed03bbccb1p-155, 0.0,
     0x1.8f12285135ba4p-308, 0x1.ad26a8ceda6b9p-174, 0.0, 0x1.7bd502690253ep-829,
     0x1.b3d2cdff96be8p-719, 0.0, 0x1.a25d442854a51p-336
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
            tmp1 = Sleef_cbrtd2_u35kvx(tmp0);
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
    printf("Sleef_cbrtd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cbrtd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
