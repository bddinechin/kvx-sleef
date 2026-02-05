/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhd1_u10purecfma.c --function \
 *     Sleef_finz_asinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.7d16e5d73af4ap-951, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc594e96d5c59p-414, 0.0, 0x1.c07f5c09f30ecp-242, 0x1.2c2d49e6620bcp-625,
     0x1.fcbc981506d5ep-672, 0x1.6c6b34d0eeffcp-396, 0.0, 0.0, 0.0, 0.0,
     0x1.25089f3c31473p-90, 0x1.61e9045d8b575p-517, 0x1.2c234b9b98904p-115, 0.0,
     0x1.266ab149e96e3p-675, 0x1.c1b26592bf9bdp-96, 0x1.80e4e8b4493e1p-899,
     0x1.206093ffce488p-897, 0x1.f550e0519abf9p-31, 0.0, 0.0, 0.0,
     0x1.3f93a3dcfebf1p-431, 0.0, 0.0, 0.0, 0x1.531608e71278ap-585,
     0x1.5741d4fdbcf8fp-605, 0.0, 0x1.f4185004d2e0ap-357, 0x1.e5825308bbafdp-550,
     0x1.3753d013732adp-871, 0.0, 0.0, 0x1.19bdf0c0c833bp-61, 0x1.7d62e9c5aa4f9p-813,
     0.0, 0x1.4546b28ac45fp-645, 0.0, 0.0, 0x1.fb54cb3b7d2a7p-127,
     0x1.b03912f6232bbp-568, 0x1.6f365d373f177p-436, 0x1.172e68bcc1dc7p-110,
     0x1.dac441b2ebe0dp-639, 0x1.4f5d21372bee3p-3, 0x1.eac355b424bbp-780, 0.0, 0.0,
     0.0, 0x1.7c28a334bae01p-848, 0x1.729cdf47d78d7p-744, 0.0, 0.0, 0.0,
     0x1.2556a8af36adbp-63, 0x1.9a54e8a616b08p-156, 0.0, 0x1.e41cdd6dd2a9cp-972,
     0x1.c50e32b844eb3p-314, 0.0, 0.0, 0.0, 0x1.58b1e183d0d26p-864,
     0x1.2928f98e18f99p-723, 0x1.ec46f73e6782p-709, 0.0, 0x1.ea5ff765bdb56p-201,
     0x1.82607d50c665cp-3, 0.0, 0.0, 0.0, 0.0, 0x1.5ba5ba1a7d75fp-772, 0.0,
     0x1.844065a63360fp-658, 0x1.3bc2ce5feb102p-741, 0.0, 0x1.be05d69ca5d1ep-985,
     0x1.a5ca7c67c867p-385, 0.0, 0x1.deadcf2def147p-1007, 0x1.71ea7310877cfp-503, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4d84d0f4be071p-437, 0x1.32d008523ff85p-26, 0.0,
     0x1.64698c30115bcp-298, 0x1.ee5025427a894p-709, 0x1.91551dbacd778p-792, 0.0,
     0x1.cadd54f7eec67p-964, 0.0, 0.0, 0.0, 0x1.7a87a8eae6d9fp-747, 0.0,
     0x1.df7dda160c891p-339, 0x1.dd8c3047d873cp-191, 0x1.0526ec7acb7f6p-762, 0.0, 0.0,
     0x1.ce8a493dbcd8p-210, 0x1.f76f74d54da47p-397, 0x1.03f1d073d54bap-106, 0.0,
     0x1.c97c74dc2eb05p-517, 0.0, 0.0, 0x1.eb6e381d953dcp-199, 0.0,
     0x1.f7d4b6e058e5ap-390, 0.0, 0x1.62f2823544fedp-92, 0x1.9bfd685ceacbcp-558,
     0x1.f1870a4fa62cfp-290, 0x1.0cb0ef478ee1bp-981, 0x1.cecc467ec5a2dp-777,
     0x1.bb1410aca803bp-883, 0.0, 0x1.a824996affebp-816, 0x1.7c876667f2061p-368, 0.0,
     0.0, 0x1.d43cc0d8a8cb3p-272, 0x1.886c56cfff70cp-181, 0.0, 0x1.30d9af306fadp-194,
     0.0, 0.0, 0.0, 0x1.067486b7c787bp-167, 0x1.caf139abfb361p-7,
     0x1.95e6c2587988p-108, 0.0, 0x1.18301e045b67dp-833, 0.0, 0x1.d0642a59eeddfp-425,
     0.0, 0x1.2262eee94f73dp-808, 0x1.9c68f9efa88dp-854, 0x1.e3e5b36d8b98dp-491,
     0x1.a62d00f55e8b8p-572, 0.0, 0.0, 0x1.ae8175d476ab2p-927, 0.0,
     0x1.701ea46388f7cp-499, 0.0, 0.0, 0x1.bdc961365771cp-625, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.659af29e77268p-629, 0.0, 0x1.506ec5b67c6d2p-283,
     0x1.ab46d11d42434p-677, 0x1.6c94e4130d066p-277, 0x1.0e446227f2fb8p-79, 0.0,
     0x1.4c080d0e52c54p-530, 0x1.3019ee83f7835p-140, 0.0, 0x1.a5e3ccc3f77c9p-163, 0.0,
     0x1.43a550d8b318ap-997, 0.0, 0x1.55728d896fbcdp-704, 0.0, 0.0, 0.0,
     0x1.90bc65bf46cecp-105, 0x1.3cdf3fa54a572p-831, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cfc60ad3050b1p-535, 0.0, 0x1.6f1a3ae3ebf44p-1005, 0.0, 0.0,
     0x1.88dc2c2f20969p-37, 0.0, 0.0, 0.0, 0x1.8c2e867dc8039p-890,
     0x1.f0a8c38161d1bp-205, 0.0, 0.0, 0x1.3c05b73c75541p-54, 0x1.848a5e059615dp-258,
     0x1.36697128f305cp-485, 0x1.bb7d24cd614bap-724, 0.0, 0x1.70f117228602cp-511,
     0x1.4ee87def5f37cp-931, 0.0, 0.0, 0x1.c70c75d04a7b3p-1002, 0.0,
     0x1.ea5f254d9fb5p-248, 0.0, 0x1.5567c52ea584ep-595, 0x1.cb95526d30b26p-76, 0.0,
     0.0, 0.0, 0x1.d813cac217247p-132, 0.0, 0x1.3224cd6987924p-371, 0.0, 0.0,
     0x1.5a388c299accbp-203, 0.0, 0x1.d662d068a554dp-943, 0.0, 0.0,
     0x1.da6bd26666834p-369, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0,
     0x1.587afb19d3e2fp-137, 0x1.7a582966d4d2cp-941, 0x1.109b9b5d6be1ap-144, 0.0,
     0x1.b80f9c30c1cebp-646, 0x1.667b5ba95c5ddp-561, 0x1.3cb71be3e86ecp-142,
     0x1.59cfcbdad9bdap-720, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81152b531b98ap-853, 0x1.f3f73efb46e39p-273, 0.0, 0x1.6ef4cd91176adp-63, 0.0,
     0.0, 0x1.424bf46e7869ap-42, 0x1.60eaf5cb093dfp-703, 0.0, 0x1.475e86a164943p-481,
     0x1.323b250870574p-600, 0x1.5e895ad242799p-557, 0.0, 0x1.2b01606ad51a4p-604, 0.0,
     0.0, 0x1.a685a1a2d49dap-62, 0.0, 0.0, 0.0, 0x1.630b531ca8e9ap-915,
     0x1.ac36a555557aap-468, 0.0, 0x1.bbae4f5d6f7efp-151, 0x1.6f6c94e1f8657p-498,
     0x1.a09da7ac8dc88p-190, 0.0, 0.0, 0x1.d69f630823ef1p-31, 0x1.4dcf8d34dbb95p-963,
     0x1.62030c2f098aap-591, 0x1.bb976e59f798dp-872, 0.0, 0.0, 0.0,
     0x1.900f8cceac98ep-452, 0x1.e9f71aa8deb82p-137, 0x1.d236a47a10e1dp-984,
     0x1.997cbd0434187p-750, 0x1.e03aae9b869dcp-88, 0.0, 0x1.3bec5781c6383p-860,
     0x1.845390bb8ef18p-775, 0x1.abd5e8c90da86p-791, 0.0, 0x1.b66054f9abf0ep-834,
     0x1.e875f25e98779p-133, 0.0, 0x1.6d2e7d978d8dbp-251, 0.0, 0x1.5433e434a4c66p-797,
     0.0, 0.0, 0x1.a58541c45333fp-209, 0x1.11b72c2183e8p-691, 0.0,
     0x1.907f667c406d6p-963, 0.0, 0x1.24096024b6aa5p-628, 0x1.47c71dfdbeeeep-551,
     0x1.4df813fd746b7p-509, 0x1.b6d007df3852fp-474, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3887739fe1204p-386, 0x1.794ccf108a65p-1011, 0x1.f9b2540d5db47p-231,
     0x1.5626725868247p-212, 0.0, 0x1.dad173c106d9p-450, 0x1.a35d7e9b86badp-1014,
     0x1.e3930bd03e159p-267, 0.0, 0.0, 0x1.d94beb6b044c7p-460, 0.0,
     0x1.1292379fe6d7bp-319, 0.0, 0.0, 0x1.e996df3dc6f62p-403, 0.0, 0.0, 0.0, 0.0,
     0x1.9bf6c65655c4fp-914, 0x1.4d7c4ab5ec0f5p-215, 0.0, 0x1.cd94d749e252p-816,
     0x1.d7bce0018ddaap-504, 0x1.48874ca78d8cp-991, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6890b85e01a35p-55, 0.0, 0.0, 0x1.e709fbb35a3cap-323, 0.0, 0.0,
     0x1.ae3f54feb74ccp-539, 0x1.e70957a63ece5p-449, 0.0, 0x1.b626a58f42388p-737, 0.0,
     0.0, 0x1.a46c345ba6057p-595, 0x1.6902cc47a9f42p-326, 0.0, 0.0, 0.0,
     0x1.6724a7d00915fp-10, 0x1.19fb38cfd261ep-155, 0x1.7626356dde821p-573, 0.0, 0.0,
     0x1.ea28b9146975p-384, 0.0, 0.0, 0x1.2b0a5f012f834p-554, 0.0,
     0x1.bc323904209c2p-252, 0x1.d73f0237fc5f5p-306, 0.0, 0x1.71ee73f8e3705p-181,
     0x1.395afa08cea39p-133, 0.0, 0x1.de6d78e8a70a7p-847, 0x1.92bb2f230e3a8p-58,
     0x1.46575bd7a3b62p-592, 0x1.b40a8dce9d4c4p-135, 0.0, 0.0, 0x1.75aefedeb3ab8p-509,
     0x1.6349bfa45820cp-367, 0x1.94df36380d514p-180, 0.0, 0x1.0d31f642b2979p-694,
     0x1.0be48912b8b38p-1005, 0x1.d0bcbebbfb855p-281, 0.0, 0.0,
     0x1.ade2d5a1dccbap-254, 0.0, 0x1.3f6553ae0ae36p-462, 0.0, 0x1.ee213569097cdp-672,
     0.0, 0.0, 0x1.705153790e0d6p-321, 0.0, 0x1.a6361b731937ap-360,
     0x1.35848367eb9bap-981, 0.0, 0x1.48f6cedd23c71p-804, 0x1.4cf76a7449943p-872, 0.0,
     0x1.5d3fb3ad987d5p-614, 0x1.9a97e3dc415dbp-206, 0x1.1d71c88a20eb6p-282, 0.0, 0.0,
     0x1.eef63229ff049p-638, 0.0, 0.0, 0x1.e95480b8b3b18p-265, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fce18429e078ap-525, 0.0, 0.0, 0.0, 0x1.32de5385e709ap-282, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b9f79f8f24cadp-36, 0x1.39892a4575daep-379,
     0x1.34912b4137a8bp-865, 0.0, 0x1.9e2229136586ep-48, 0.0, 0x1.499219d84b2e5p-822,
     0.0, 0x1.101e01843096fp-694, 0x1.75634e73b0184p-949, 0x1.a7b68752cce2bp-499,
     0x1.53cdd1bd01f6p-719, 0x1.be2d5ba5db84ap-862, 0x1.bde861f36ec74p-1000, 0.0, 0.0,
     0x1.6691eb64c83d4p-245, 0x1.285a30904f6f4p-650, 0x1.757eb7f2f4652p-289, 0.0,
     0x1.5c3d4dbd78ad9p-74, 0x1.a133e633b67bcp-907, 0x1.3b713ba4e1cf2p-598, 0.0,
     0x1.fd8dc41980168p-481, 0x1.21fc79db66995p-337, 0x1.3ef4bc976e53cp-227, 0.0,
     0x1.85b83289e0b2ap-1002, 0.0, 0x1.14a5e643c64fbp-312, 0x1.5dca594ca817ap-883,
     0.0, 0.0, 0.0, 0x1.9383e9e810302p-31, 0x1.e6bfeac144b0ap-333, 0.0,
     0x1.a6285ac443f1fp-393, 0x1.3172970c0e0c1p-644, 0.0, 0x1.29cce509e3c67p-726, 0.0,
     0.0, 0.0, 0x1.7d881654768b4p-30, 0x1.ce6d6c3af189ep-762, 0x1.0ff2f2f4321c3p-152,
     0.0, 0x1.5bdd2462cb1c2p-485, 0.0, 0.0, 0x1.ea8fc44981196p-447, 0.0,
     0x1.7a370fb02bb77p-681, 0x1.510ee98affd24p-340, 0.0, 0.0, 0.0,
     0x1.a9b8dfdf3c708p-54, 0x1.d61e5e77529abp-498, 0.0, 0x1.06fc0f48e150ep-347, 0.0,
     0x1.b1d294db3dd2cp-527, 0x1.e796fc55a00adp-120, 0.0, 0x1.e6c2b9a93930bp-994, 0.0,
     0x1.28be5caa11ca6p-120, 0.0, 0.0, 0x1.0a914acc045p-961, 0x1.ffefd3146a39ep-814,
     0.0, 0x1.7b789959b277ep-831, 0.0, 0.0, 0x1.453b164a2b076p-105,
     0x1.abb435462a84fp-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a41ad2e6f6485p-1020,
     0x1.99faf4d48ea9p-335, 0x1.0a585254bb0eep-383, 0x1.f1da0839966bap-929, 0.0,
     0x1.f5b40d6f8fdf2p-933, 0x1.8e9512a65cb14p-390, 0.0, 0.0, 0.0,
     0x1.4e56bce6b2cfp-7, 0x1.0b97b587b2954p-225, 0.0, 0x1.a209242629b64p-778,
     0x1.4f6aa189e2ea3p-926, 0x1.dceb953afb4dap-59, 0.0, 0x1.4276357a084cdp-313,
     0x1.49052ab94e37cp-711, 0x1.9100ea0c1a6p-1016, 0x1.e4480f9b27147p-248,
     0x1.c94a1105a4cb6p-934, 0x1.c6466aeb3ce4dp-430, 0x1.a9d0281b848c6p-202,
     0x1.6c03a20c600d2p-154, 0.0, 0.0, 0x1.b2b3c9cd2bf55p-992, 0x1.0cad394545bfp-996,
     0x1.52bcccff99f79p-875, 0x1.857132ac06371p-310, 0.0, 0.0, 0.0, 0.0,
     0x1.6319888cce1e5p-959, 0x1.c3306c59d8febp-697, 0.0, 0x1.9d1d10c8555b8p-925, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.222714860fa96p-218, 0x1.07f62a7b72567p-284,
     0x1.a5e2fe1ff687ep-295, 0x1.0d35d7caaf6b8p-899, 0.0, 0x1.3822425684498p-357, 0.0,
     0.0, 0x1.46de3f3b680c5p-165, 0.0, 0.0, 0x1.606793583d6ebp-333, 0.0, 0.0,
     0x1.a5294a28913aap-553, 0.0, 0.0, 0.0, 0x1.41c48cb2717cep-353, 0.0, 0.0, 0.0,
     0x1.1289331d72fddp-79, 0x1.cdb3b2ce341c4p-702, 0.0, 0x1.5ed0de983441ep-503,
     0x1.34c6d201792d2p-187, 0.0, 0x1.dd748f687daap-600, 0x1.d3fc6fd914b8ep-698, 0.0,
     0x1.9198779e9c7cbp-420, 0x1.7d59df90e4119p-505, 0.0, 0x1.9a46dec81119p-795, 0.0,
     0x1.7fc9137e1cf2ap-345, 0x1.38074fab905f7p-848, 0.0, 0x1.8436f265e05cp-334, 0.0,
     0.0, 0.0, 0x1.223d5c0f4eb04p-498, 0x1.63918cd4ecad1p-793, 0x1.e1be576113d4fp-358,
     0.0, 0.0, 0.0, 0x1.c6d8e4b23c1d6p-637, 0x1.8759613d95ebfp-609,
     0x1.84e7e78d33d1fp-506, 0.0, 0x1.243dd0c5c21a4p-547, 0.0, 0x1.87a71a84cc814p-260,
     0.0, 0.0, 0.0, 0x1.66f8fba532883p-679, 0.0, 0.0, 0x1.4a9f7a1f6a5f7p-792, 0.0,
     0.0, 0x1.4ef043fff4451p-210, 0.0, 0.0, 0x1.1b790ba4aefd7p-177, 0.0,
     0x1.d955a242f6cdep-862, 0x1.097dbf70afe6dp-434, 0x1.98e3717f1d91cp-506, 0.0, 0.0,
     0.0, 0.0, 0x1.c427a5e34c118p-626, 0x1.75701d36c93adp-445, 0.0, 0.0,
     0x1.da188ea3b47adp-469, 0.0, 0x1.4f13455b8ea92p-715, 0.0, 0.0,
     0x1.4514989fe18dap-304, 0.0, 0.0, 0.0, 0x1.65f6dc279148ap-1015, 0.0, 0.0,
     0x1.1095dfaabe4bbp-153, 0x1.3f72addcf5f55p-146, 0.0, 0x1.e942ad786be37p-1011,
     0x1.3507731cf25b3p-677, 0.0, 0x1.f75d900c1d6c3p-164, 0x1.56061354d51d7p-580,
     0x1.120d1e95cc515p-832, 0.0, 0.0, 0.0, 0x1.0ccc6efec7247p-286,
     0x1.f7f588d4c42fdp-479, 0x1.b385de546e37ap-1000, 0x1.19cf3062fce1ep-577, 0.0,
     0x1.036fc0f22decbp-557, 0.0, 0x1.79056eadda0a8p-257, 0x1.53dd8d881bc11p-660, 0.0,
     0.0, 0x1.d3c379bf5b0a2p-279, 0.0, 0x1.b49a94507f52cp-485, 0.0,
     0x1.8e9166404ded9p-835, 0x1.eea8210c40648p-824, 0x1.df0a15fcacfcdp-230,
     0x1.65b2f4e1325b7p-934, 0x1.2a2d497b196fap-513, 0x1.697acc02cb3afp-618,
     0x1.584bb6bc4ed43p-984, 0x1.74789b9fda368p-399, 0.0, 0.0, 0.0,
     0x1.a299d391f51adp-178, 0x1.0abefdd0c711p-486, 0.0, 0x1.692286d1d485dp-345,
     0x1.a02ace6e6a4bep-43, 0.0, 0.0, 0.0, 0x1.feb080edf6abap-248,
     0x1.c3588ed683e0ep-976, 0x1.bf904ea0c3809p-566, 0.0, 0.0, 0.0,
     0x1.36a9abb065236p-678, 0.0, 0x1.e41946f236cbep-124, 0.0, 0.0,
     0x1.ab4b9b0ece974p-56, 0.0, 0.0, 0.0, 0x1.0722ae1e24eap-891, 0.0, 0.0, 0.0, 0.0,
     0x1.4989b52407a6cp-446, 0x1.531486a92ff3ap-627, 0x1.d6a4a5a8b73f2p-909, 0.0,
     0x1.3c74f167eb293p-424, 0.0, 0.0, 0x1.3f3ec3ee13846p-675, 0.0,
     0x1.97bc28178acbcp-627, 0x1.37702c14b49c1p-727, 0x1.ffb2b8588405ap-867,
     0x1.509a203db9d98p-842, 0.0, 0.0, 0x1.80cc2c7462f7p-567, 0x1.69d4f33fab0fp-132,
     0x1.b10e0287cd62bp-360, 0x1.6c4c1dc2ed7d7p-14, 0x1.1c4db67f3b21bp-410, 0.0, 0.0,
     0.0, 0x1.d09067d0ab20ep-709, 0x1.0dd370f085b2dp-446, 0.0, 0x1.006e35ba11571p-599,
     0x1.60ce318abe09ap-544, 0x1.a9f072fbddccdp-428, 0.0, 0x1.c2926051179cp-642,
     0x1.1cdfc1c5b62fep-237, 0.0, 0x1.60ed5e9aed4f3p-366, 0x1.4fe9001ee326fp-805,
     0x1.26311e4a1e44ep-644, 0x1.7161dec9b4063p-203, 0.0, 0.0, 0x1.b5702d7931a9fp-926,
     0.0, 0.0, 0x1.0860bd5fab813p-276, 0.0, 0.0, 0.0, 0x1.4eeceaa5856ebp-830, 0.0,
     0x1.993ee0bef19bbp-866, 0x1.b9840ab772f92p-452, 0x1.cc741592ddc19p-354,
     0x1.053cafb26e4c5p-1010, 0x1.920c32e63654ap-945, 0x1.a6201e6c2b62ep-544,
     0x1.05afa0f2e723cp-382, 0x1.09ce3f043a6cep-752, 0x1.774946640687ep-30,
     0x1.3c8ba9b14d877p-203, 0.0, 0.0, 0.0, 0x1.f566260a97e9ep-83, 0.0, 0.0,
     0x1.41638a4538276p-790, 0x1.bc669641dcf78p-533, 0x1.53d810a7ccbep-12,
     0x1.47ce2be31a2c4p-856, 0x1.496fefa4aefe8p-797, 0x1.225e05d911ea7p-161,
     0x1.b900aaa04cfa7p-654, 0.0, 0x1.820ed978e4111p-165, 0.0, 0.0,
     0x1.f927b370fb4f6p-902, 0x1.9c7ab2a16a73ap-1015, 0.0, 0.0, 0.0, 0.0,
     0x1.661d19494e767p-368, 0.0, 0.0, 0x1.9ff1a3022a0a2p-229, 0x1.c02e7fbae7127p-520,
     0.0, 0x1.2bfe71a4d127ep-335, 0x1.ad2b9a3f82b19p-33, 0.0, 0.0,
     0x1.5b95cc25ebd3p-1004, 0.0, 0x1.a1f788779f1f6p-950, 0.0, 0.0,
     0x1.278f4bc7e1421p-369, 0.0, 0x1.bfba97b820639p-403, 0.0, 0x1.8bced0f1b6b8bp-416,
     0x1.d42c8988e2b09p-939, 0x1.b4ac7b20670ep-988, 0x1.0d96228a0a6dbp-834, 0.0, 0.0,
     0.0, 0x1.72ec47278a1d9p-374, 0x1.e25df1db8ce19p-939, 0x1.fbe2d3da1907cp-948,
     0x1.6551f98659a83p-665, 0x1.6ce1b433bd83fp-1004, 0.0, 0.0, 0.0,
     0x1.b17fc614dcb9ap-831, 0.0, 0.0, 0.0, 0x1.eeaa9843047bdp-838,
     0x1.b009ebc41011ep-330, 0x1.264cc43519d31p-616, 0x1.6e4e001656b3ep-271,
     0x1.3f93d24d1bf0ep-128, 0x1.4eff2e459293cp-982, 0x1.4d2666e35ccb8p-578,
     0x1.dec23035fd986p-74, 0x1.3cc33c89722bbp-813, 0x1.6e43a0748600ep-824, 0.0, 0.0,
     0.0, 0x1.a2d0e5f2dd2cap-659, 0.0, 0x1.40be11f6c293ep-211, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8b91fa937b50dp-760, 0.0, 0.0, 0x1.05ce79e799a3p-280, 0.0, 0.0,
     0.0, 0x1.5b7c9acc9d50fp-594, 0.0, 0x1.b559d0239131cp-834, 0x1.f294f82d16515p-219,
     0x1.f8144484cf057p-771, 0.0, 0.0, 0x1.c7da3c9414e0dp-446, 0x1.d6d31d534fbf5p-727,
     0x1.06f392b735cep-154, 0x1.9090058edbf1bp-311, 0.0, 0.0, 0.0,
     0x1.27bee2ea99d8ep-562, 0x1.38677b205b4abp-886, 0.0, 0.0, 0.0, 0.0,
     0x1.2528468c59be6p-245, 0.0, 0.0, 0.0, 0x1.21535fa0524bdp-645,
     0x1.7f4fd65e02dafp-985, 0.0, 0x1.01a73d322ca64p-641, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6c71046f2499cp-684, 0.0, 0x1.324ba8c0fa16p-745, 0x1.2de6f9a0f68ddp-208,
     0x1.96a1e9f410195p-700, 0.0, 0.0, 0.0, 0x1.ef6bb4567ade6p-799,
     0x1.ccdca99f49e11p-900, 0.0, 0.0, 0x1.172430e446d15p-627, 0.0, 0.0,
     0x1.ffaae49fb5b86p-51, 0.0, 0x1.3b99494e395bap-439, 0x1.c338388ea0ee4p-105, 0.0,
     0x1.6fec949725ba2p-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dde649d28c46p-900, 0.0,
     0.0, 0x1.62d6e54eadfe2p-651, 0.0, 0.0, 0.0, 0.0, 0x1.1df030964b49p-689,
     0x1.3cac2cf0b5c5bp-967, 0.0, 0x1.fa0aaa81f8a7cp-406, 0x1.c8f02696c47f3p-715,
     0x1.934bc4c21741fp-17, 0x1.66a71ff2a25b7p-75, 0x1.546ba3a70e09fp-845,
     0x1.8c790c4ec169cp-294, 0.0, 0.0, 0x1.df3f4b515d6f6p-388, 0.0,
     0x1.48e280a6f9b81p-171, 0.0, 0x1.68b0123c7684dp-903, 0.0, 0.0, 0.0,
     0x1.95297cece872fp-454, 0x1.19f3d54d32cabp-271, 0.0, 0x1.4ebbdd2587922p-375,
     0x1.a9af7f06e2059p-922, 0x1.227e765429176p-648, 0.0, 0.0, 0.0,
     0x1.f431d857cf51ap-216, 0.0, 0.0, 0.0, 0x1.d997fa72d0b6ap-254, 0.0, 0.0,
     0x1.926b8a729199p-818, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71b23723eb709p-507, 0.0,
     0x1.5a9b663c0fa49p-982, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_asinhd1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_asinhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
