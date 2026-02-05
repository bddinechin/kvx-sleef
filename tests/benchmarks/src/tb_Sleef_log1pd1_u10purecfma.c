/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pd1_u10purecfma.c --function \
 *     Sleef_log1pd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.3b56e3674081ap-644, 0x1.ccecd8af9dd42p-284, 0.0, 0.0, 0.0,
     0x1.6645901db0bbbp-240, 0x1.609d780a35d43p-551, 0.0, 0.0, 0.0,
     0x1.c069f023af0f1p-988, 0x1.5c7681cb5292bp-549, 0.0, 0.0, 0.0,
     0x1.7f5b89519244dp-550, 0.0, 0x1.c078668a6bbfcp-831, 0.0, 0.0,
     0x1.aa16cbd01d01ap-690, 0.0, 0.0, 0x1.ab31dbeb02437p-885, 0.0,
     0x1.a0fe9ededf144p-821, 0x1.db500d27da441p-113, 0x1.4871e55631d5bp-681,
     0x1.4d67439ab887cp-527, 0.0, 0.0, 0.0, 0x1.17bda698f7b62p-567,
     0x1.5f49fede446ddp-727, 0x1.934c2646c1859p-894, 0.0, 0.0, 0.0,
     0x1.79f82a982d9cp-808, 0x1.a1f3f5d28831cp-324, 0.0, 0x1.06b5f598847d9p-1,
     0x1.0652d1296c92p-592, 0x1.e71bdd488def8p-394, 0.0, 0.0, 0.0, 0.0,
     0x1.5eefa436c42bcp-306, 0x1.b069bc6bbfc93p-1000, 0.0, 0x1.6e598a8bd5c68p-168,
     0.0, 0.0, 0x1.edb9526317d05p-701, 0x1.21e0b2d1a07b3p-157, 0.0, 0.0, 0.0,
     0x1.a22ee2739d06p-505, 0x1.4f22c93a1c00ap-336, 0x1.a0a23b310226ap-275,
     0x1.ef636e3dc6bdp-300, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41183ca6176e6p-803,
     0x1.c2e49b8a56caap-773, 0x1.c2bc5dbefc66fp-737, 0x1.43e71253d0feap-111, 0.0,
     0x1.d78cb82808d27p-809, 0x1.900b56c92d8c2p-557, 0x1.03241cbf66e54p-598,
     0x1.f14b8a458523fp-123, 0x1.30c21f25521bdp-294, 0.0, 0.0, 0.0,
     0x1.620994dad2d9bp-820, 0.0, 0.0, 0x1.a881cb348318dp-1014,
     0x1.165f6fcbd55c9p-753, 0.0, 0.0, 0.0, 0.0, 0x1.5765ad510eff1p-954, 0.0,
     0x1.f521d48b7ab87p-137, 0.0, 0.0, 0x1.8755ffabdddcap-866, 0x1.6bec5fb719632p-285,
     0x1.fe98d5b47d7f3p-174, 0.0, 0x1.879b05a51c858p-484, 0.0, 0.0,
     0x1.0130a7e78d848p-981, 0x1.c6a9c6fd3a382p-180, 0x1.60887f915c6eep-693, 0.0,
     0x1.6c15f94437c07p-902, 0x1.413cfd0e2c03dp-7, 0x1.6c85aa0eeac96p-575,
     0x1.ca29804bd8a19p-63, 0x1.d0887e49b6bbp-601, 0x1.ae48ffdba61b7p-53, 0.0,
     0x1.97dae9e8fd9eap-200, 0.0, 0x1.c44dae3153bcbp-758, 0x1.1472efe4fa3a8p-908, 0.0,
     0.0, 0.0, 0.0, 0x1.5d660e0a35393p-160, 0.0, 0x1.78682ff567962p-295,
     0x1.33c2abcffe319p-340, 0.0, 0.0, 0x1.259aedd1dbb25p-606, 0.0,
     0x1.8c4ebbe64d7ebp-925, 0x1.9156a9587be6ap-128, 0.0, 0x1.1130d8715dea7p-843, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccd670e4fb552p-830, 0.0, 0x1.064fa3bcedc3ap-913,
     0.0, 0x1.3fecdaadcdf15p-944, 0x1.a476ce197ad75p-707, 0x1.b90654f6c8da6p-562,
     0x1.511f527c308a7p-117, 0x1.7a657ecb9a0aap-343, 0.0, 0.0,
     0x1.3209bb1bdb93ep-1020, 0x1.16872ec370828p-70, 0x1.57c31cabbf6b3p-103,
     0x1.608d67f8093eap-708, 0.0, 0.0, 0x1.4bc7c5bf3ae2fp-1009, 0.0,
     0x1.82554981bdd8bp-234, 0x1.04b5e65985e32p-576, 0x1.a511f6ca173f7p-426, 0.0, 0.0,
     0x1.7c396fb264b74p-527, 0x1.e8c7196732263p-465, 0x1.25a02e6b482e7p-268,
     0x1.f9efcb82d10bcp-170, 0.0, 0.0, 0.0, 0x1.32e77b71e6edap-681,
     0x1.96098e4518e12p-351, 0x1.d5afcecfd9b25p-256, 0.0, 0.0, 0.0,
     0x1.50d081b05de0ap-315, 0x1.821898609b3a5p-989, 0.0, 0x1.ca4b6ab9bc631p-739, 0.0,
     0x1.a6e5c1ca489eep-245, 0.0, 0x1.38091196215a6p-489, 0x1.a67d1fc98b34dp-905, 0.0,
     0x1.b8dc7a612c0c4p-543, 0.0, 0.0, 0.0, 0x1.9e321b0e11457p-185, 0.0,
     0x1.539f0d57cb09ap-796, 0.0, 0x1.8293ef978ee41p-638, 0.0, 0x1.184af09456a92p-310,
     0x1.f22b92a8bbb17p-567, 0x1.2d3c323918f15p-227, 0x1.8147b84ed80e9p-843,
     0x1.db191211a9b7ep-436, 0.0, 0x1.1fe446b196929p-764, 0.0, 0x1.60db94bb15118p-986,
     0.0, 0.0, 0x1.0f183f93c6bc7p-346, 0x1.17b88b6fb64fap-1016,
     0x1.5b092077f25d1p-795, 0.0, 0x1.3148ab507515ep-627, 0.0, 0.0, 0.0,
     0x1.8c4035a69d285p-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9fa5e3157d6b7p-114, 0.0,
     0.0, 0x1.c3a99fe8564d6p-540, 0.0, 0x1.8982be1c46872p-275, 0.0, 0.0,
     0x1.81e30514af353p-933, 0x1.328af43c3b504p-775, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f42f95cf91edcp-948, 0x1.66549eb76248bp-325, 0x1.762759d6954c4p-263,
     0x1.cb8523fdf37c7p-744, 0x1.b483cdc0f7a18p-43, 0.0, 0.0, 0.0,
     0x1.bf6838806d2a7p-221, 0.0, 0.0, 0x1.94fee9458169ap-803, 0x1.60b699795905p-954,
     0x1.bf86c67ae0c52p-241, 0x1.48b1c22d52e1ep-908, 0x1.ad88b56025eeap-110, 0.0, 0.0,
     0x1.255ebb83212a9p-762, 0x1.5583ecdb142bap-424, 0.0, 0.0, 0x1.c8b16700a4ec3p-282,
     0.0, 0.0, 0.0, 0x1.474d89a913501p-227, 0.0, 0.0, 0x1.ae291f1de1fe1p-367, 0.0,
     0x1.c336509ae92a4p-93, 0.0, 0.0, 0.0, 0x1.f0f8529e3a0efp-982, 0.0,
     0x1.27e754d388b07p-692, 0x1.6d8dbf3a5ce22p-1004, 0.0, 0.0,
     0x1.544093572e1d1p-594, 0.0, 0x1.6b8f444edb234p-185, 0.0, 0x1.76d57d0a7bb6dp-242,
     0.0, 0x1.88f7f6725e436p-574, 0x1.e6f15f0b06b1cp-641, 0.0, 0x1.2086e21ecc7c5p-310,
     0x1.36f3221d8b746p-816, 0x1.ac425bf3e4a02p-948, 0x1.0d77eb85c8409p-152, 0.0,
     0x1.d08f158b4c75bp-462, 0x1.6e911386a7b66p-463, 0.0, 0x1.a72d34828e301p-143,
     0x1.eb8c52b252b6p-596, 0.0, 0x1.4ac5ee7414c06p-422, 0x1.276bb3cb52f12p-376, 0.0,
     0x1.0959206d439b3p-554, 0x1.6ac5e40a67276p-734, 0x1.5996dc40c24f1p-272, 0.0, 0.0,
     0x1.2d099dc49a101p-337, 0x1.35c6684567af8p-373, 0.0, 0.0, 0.0,
     0x1.378ca0a7ed041p-258, 0x1.039ccee1e4bbdp-330, 0.0, 0.0, 0.0, 0.0,
     0x1.854501f41d508p-679, 0x1.5ed09d2367a44p-21, 0.0, 0x1.71703ffbb4eeap-877,
     0x1.10d6af69fdfe7p-163, 0x1.7740f38dd2e8cp-885, 0.0, 0.0, 0x1.f9a02ae386dafp-760,
     0x1.5c845a41886cp-402, 0.0, 0.0, 0.0, 0x1.a5527ae0ef744p-644, 0.0,
     0x1.9d46b652ea08dp-490, 0x1.981a0740f2381p-334, 0.0, 0x1.a52a37a5ac2f3p-773,
     0x1.814b648331812p-573, 0x1.bd0a3a2d414bap-840, 0.0, 0x1.3e6125bfad712p-173,
     0x1.86e5bf760b379p-624, 0x1.feece8ac34b1ap-495, 0x1.7dc505657e009p-244,
     0x1.a90128d5053e2p-241, 0x1.bd44177a876acp-737, 0x1.dcb712d6d1557p-895,
     0x1.d7e669defa45dp-532, 0x1.4b55ac2dc63aap-353, 0x1.55eec498467e6p-703, 0.0, 0.0,
     0x1.85afd7a7dd77bp-591, 0.0, 0.0, 0.0, 0.0, 0x1.d051629868778p-350, 0.0,
     0x1.c0eecdc0c2484p-630, 0x1.528e8ae5104acp-897, 0x1.1b311896200e3p-626, 0.0,
     0x1.71ab2db0e81adp-951, 0.0, 0x1.5da5d06166d26p-26, 0x1.d5012434e101cp-513, 0.0,
     0x1.d3d6d24b550afp-633, 0x1.598306094bee1p-452, 0.0, 0.0, 0x1.6deac80a7c711p-593,
     0.0, 0x1.23d9891af777ap-765, 0x1.e35dfbb8c8b3p-259, 0.0, 0x1.f90766526e2acp-39,
     0.0, 0.0, 0.0, 0.0, 0x1.833f73f329d1cp-641, 0x1.f8de4628c0ba6p-442, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e6e6ffcd9a444p-312, 0.0, 0x1.fa558f172d6d7p-37, 0.0, 0.0,
     0x1.dd005d05c2f5ep-1020, 0x1.5765d6204f862p-108, 0.0, 0x1.1d05163eeb758p-587,
     0.0, 0.0, 0.0, 0x1.f0c2dc625aa4fp-436, 0x1.96c2b09c11d09p-216, 0.0,
     0x1.4111defda5ce1p-1005, 0x1.2269868373edep-65, 0x1.3c5d81d5b116fp-34,
     0x1.3902959c3b65dp-781, 0x1.69a6ba404e1e8p-677, 0.0, 0x1.5fa6c6cdcd34ap-420,
     0x1.513011a7c950ep-486, 0x1.f712deb22a0dap-894, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3118374586258p-412, 0x1.b9bffde18ee0cp-705, 0x1.017beeee5a4dp-350,
     0x1.8e14e4a8df4e8p-690, 0x1.b9b8557677e24p-754, 0x1.44a65eee43ff8p-228, 0.0,
     0x1.f790572a8e953p-359, 0.0, 0.0, 0.0, 0x1.4f141b2241abbp-771,
     0x1.383dee6383f2fp-203, 0.0, 0.0, 0x1.260f0dfe9e1f2p-881, 0.0, 0.0,
     0x1.3635073756391p-798, 0.0, 0x1.713ac0551c3cap-845, 0x1.bd47f8f929bf3p-375, 0.0,
     0x1.7b74e113aae01p-104, 0.0, 0x1.d6bb0ba22e80dp-957, 0x1.94e4a7742a4c5p-282,
     0x1.cdd6b2e4342bp-959, 0x1.cad5b10d64e44p-676, 0x1.b2f0a20cad401p-333,
     0x1.af7db549a3e67p-928, 0x1.93ec0ac025d25p-699, 0.0, 0.0, 0.0,
     0x1.c1608a0d0c496p-573, 0.0, 0.0, 0x1.a161ddaa796cp-630, 0.0,
     0x1.e6ba3f6ed9156p-879, 0.0, 0x1.f50130185e756p-506, 0.0, 0.0, 0.0,
     0x1.0bc7a9f6d68ebp-376, 0x1.e9491e66a8793p-788, 0.0, 0x1.c7bd79c06e17p-931,
     0x1.e6d04e9aa7124p-60, 0x1.449de5d2ee6ebp-803, 0x1.fd7381e4fff6dp-94, 0.0, 0.0,
     0x1.3114ebc5687bcp-761, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dec36b4146a89p-310, 0x1.5f21d3b21bf01p-645, 0.0, 0x1.16493f901607dp-238,
     0x1.b0cdd56f2c001p-243, 0x1.1f0fd9cd5717cp-726, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d0334f545d85p-865, 0x1.9afa2b225b8d7p-11, 0.0, 0x1.0f3fc01737beep-189, 0.0,
     0.0, 0x1.799d4646f22fcp-103, 0x1.25bb72b957b78p-80, 0.0, 0x1.823f6fc054bd2p-87,
     0x1.2246e67fd3241p-933, 0x1.5a92d22c24f8dp-992, 0x1.2276a7d75a539p-209,
     0x1.c1d5a92c362d5p-2, 0x1.304a5609c9b41p-807, 0x1.c38ab722aadebp-410, 0.0, 0.0,
     0x1.63fb16c979b85p-911, 0x1.2c0c7f583900ap-796, 0.0, 0x1.be039ad8b6bd7p-908,
     0x1.4294f1bc70b54p-693, 0.0, 0x1.b0acf6ea72358p-644, 0.0, 0.0, 0.0,
     0x1.c019d6a3b218p-1019, 0.0, 0.0, 0x1.a050a7549c04ep-516, 0x1.befe4746f87f1p-583,
     0x1.407e8ed3e4359p-208, 0.0, 0x1.e7bbe609005d4p-611, 0x1.36aa301b9ac22p-614,
     0x1.95ce23c2083c4p-679, 0x1.1a7a61ec9f4d2p-385, 0.0, 0x1.136a299003036p-859, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.301361f0ba7eap-173,
     0x1.b125673303f51p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9df1ec22e0288p-826,
     0x1.43348aaab44fap-938, 0.0, 0x1.7f4132911c3a9p-848, 0.0, 0x1.76c1768c42aaap-546,
     0x1.7a9657d4bc48dp-603, 0x1.6d9096c35b32dp-98, 0x1.4073c6fb23f2p-996, 0.0,
     0x1.3eb56beeea3bcp-860, 0x1.cf49147f26c4fp-307, 0.0, 0x1.16a61cd9201a9p-793,
     0x1.6d6629fda4d7dp-247, 0.0, 0.0, 0x1.baee185e9dfd7p-107, 0.0,
     0x1.c7c1827a0203bp-299, 0.0, 0.0, 0.0, 0.0, 0x1.f796ad330e415p-599,
     0x1.699e9ca00d3b2p-905, 0x1.875cf3f144866p-754, 0.0, 0.0, 0x1.ac1d239fdf3acp-211,
     0.0, 0x1.2af3638d6e5eap-492, 0.0, 0x1.027d1a98014fep-118, 0x1.17db8df4d2a2p-494,
     0.0, 0.0, 0x1.0f78477930ff2p-941, 0x1.8c45107925f9fp-793, 0x1.71eeda3842234p-193,
     0x1.a1c8e80a339b1p-85, 0.0, 0.0, 0x1.d78fa8c33e0afp-38, 0x1.d1b73cfeb2902p-176,
     0.0, 0x1.b82e63f77c6dcp-596, 0.0, 0x1.a271e3af24ffbp-905, 0.0, 0.0,
     0x1.249e4d872b4e2p-204, 0x1.b454924793b62p-249, 0x1.8d45f687651e7p-109, 0.0, 0.0,
     0x1.5d55b43ac3aecp-193, 0x1.d648b7e5b5ddbp-1004, 0x1.6433d66178377p-514, 0.0,
     0.0, 0x1.d780d49d64152p-542, 0x1.ead430725f561p-933, 0x1.a7df47e00ba16p-282, 0.0,
     0x1.9a9b8a82fa40cp-881, 0.0, 0.0, 0x1.03aac022b7aaep-530, 0x1.ef4bca877e76ep-72,
     0.0, 0.0, 0x1.59dafbc3abb6fp-359, 0x1.3cdfd73808c92p-540, 0.0, 0.0,
     0x1.6ae01f54b4973p-1022, 0x1.22f57f89bafffp-561, 0x1.b9f43e868a3e3p-928,
     0x1.a399506d852fp-618, 0x1.7c8e1440d0e1ep-229, 0.0, 0.0, 0x1.77bfda8b85893p-294,
     0.0, 0.0, 0x1.c040692d3b6d6p-988, 0x1.4ad2cbc4980d4p-33, 0x1.199e6e8c683f7p-679,
     0x1.f11e02381f651p-239, 0.0, 0.0, 0x1.c9072ce817e5ap-702, 0x1.de3705a99ce41p-870,
     0x1.f670040705c4bp-288, 0x1.b3a67aba91046p-114, 0.0, 0.0, 0x1.8210de578917dp-67,
     0x1.24a429a9f0402p-830, 0x1.2c7678c873ab1p-235, 0.0, 0x1.97c2306588318p-275, 0.0,
     0x1.35c819f4deb17p-892, 0.0, 0.0, 0x1.a019457bcebd9p-961, 0x1.27f5ebc9464a9p-599,
     0.0, 0x1.bf5553e0a9072p-361, 0.0, 0.0, 0.0, 0x1.542b2f70f67c2p-81, 0.0, 0.0,
     0x1.bd6f69aa96dfp-443, 0.0, 0x1.b3215cb5a7a8cp-302, 0.0, 0.0, 0.0, 0.0,
     0x1.8845881f52496p-241, 0.0, 0x1.1f2658ae771abp-296, 0x1.1b1477831db76p-526, 0.0,
     0x1.2390d1a11b9c9p-916, 0x1.a29d7f68186e7p-729, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f384ec2d30c05p-113, 0x1.8a7a9e1eb1a95p-691, 0.0, 0x1.d8cfe99754fdfp-203,
     0x1.ad5d1e9d27364p-112, 0x1.36c4235dc83b5p-42, 0.0, 0.0, 0x1.da6604430fe1cp-662,
     0.0, 0.0, 0x1.a5fb000995fc8p-4, 0.0, 0x1.2c4afc3626a04p-499,
     0x1.27e7f4cc3ad96p-917, 0.0, 0.0, 0x1.c459e7f7d3bfap-277, 0.0, 0.0, 0.0,
     0x1.9cfb13097d55p-587, 0.0, 0.0, 0x1.f21e787c8bccbp-666, 0x1.a96a3a8a05f36p-63,
     0.0, 0.0, 0.0, 0x1.fef43a77403c6p-41, 0x1.88f029232bf33p-1018,
     0x1.719f04d99e3f2p-496, 0.0, 0x1.64eb4df2b66bp-560, 0.0, 0x1.53d58be0247e6p-430,
     0.0, 0x1.4fa505a3442d4p-42, 0x1.bc330740a3b7p-850, 0x1.9e7a5840264cfp-738,
     0x1.c9950fae48825p-562, 0.0, 0x1.60b799a36b3cdp-723, 0.0, 0.0,
     0x1.e8d6f21d321d6p-615, 0.0, 0.0, 0x1.b85c2259f4bbcp-143, 0x1.342519ed5ce6ep-243,
     0x1.b9cc13f1db0cp-301, 0x1.e49be34bb3251p-763, 0.0, 0.0, 0.0, 0.0,
     0x1.aabc77a3fe085p-643, 0x1.928b5a6631bd5p-383, 0.0, 0x1.def05167f628p-904, 0.0,
     0x1.a30c839602be8p-583, 0.0, 0.0, 0x1.cbef3cfa68d4bp-1, 0.0, 0.0,
     0x1.647bb13e2361dp-353, 0.0, 0x1.6987bfcd29b82p-547, 0x1.ea23e16d56a21p-568, 0.0,
     0x1.bfcc3ad10c4cep-425, 0x1.671905f55085cp-1018, 0x1.bd61ea31f7796p-42, 0.0,
     0x1.a4e66408fb88fp-152, 0.0, 0.0, 0x1.f3df32ba97f4dp-629, 0.0,
     0x1.bcd1d3c2cdb72p-401, 0.0, 0.0, 0x1.aa3fd4a03ab74p-846, 0.0,
     0x1.db06eac8b949fp-751, 0.0, 0.0, 0x1.d10eedeacfb47p-374, 0.0, 0.0, 0.0,
     0x1.eec716aabb9ebp-672, 0x1.d5da32856f78bp-248, 0.0, 0x1.dea91bfe00a83p-84, 0.0,
     0x1.dc0681e1ccd58p-561, 0x1.0200bf5ed3a92p-745, 0x1.feab4d3325497p-651, 0.0,
     0x1.f50eea53003a3p-313, 0x1.62deba047e0c6p-387, 0.0, 0.0, 0.0,
     0x1.c4e8b3319807p-470, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b7537fe5af33p-224, 0x1.0e00eb32f2726p-352, 0x1.646d663999b97p-300,
     0x1.24843b97260b6p-638, 0x1.e0224b2a1737dp-618, 0.0, 0.0, 0x1.6ad43abfc2017p-825,
     0.0, 0.0, 0x1.2ba32f434054fp-834, 0x1.38ffecf04acd7p-212, 0x1.8ef0e35b4668ep-709,
     0.0, 0.0, 0x1.ec1e62092c167p-134, 0x1.e97be49e04261p-934, 0.0,
     0x1.55ac6935fedf3p-1022, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54ea0e73b60c2p-602,
     0.0, 0.0, 0.0, 0x1.62a95c1cd9e37p-442, 0x1.0f25aeb2f6452p-577,
     0x1.078b24b6657ecp-138, 0.0, 0x1.11fc15f9a0958p-840, 0x1.922ce09486cb6p-562,
     0x1.7d89f54775c0bp-529, 0x1.308c95bd4067bp-358, 0.0, 0x1.0807cd31dfa04p-967,
     0x1.3dd9d3404781p-316, 0x1.1399c7ee6acd9p-789, 0.0, 0x1.3c7914e04eaa8p-548, 0.0,
     0.0, 0.0, 0.0, 0x1.7155bb5b9da12p-392, 0.0, 0x1.9afb7ec92004cp-212,
     0x1.d2f40c2f35fa3p-854, 0x1.87747add98a7dp-608, 0.0, 0.0, 0x1.c64ea889d82c5p-169,
     0x1.1c55a34a2ba0dp-178, 0x1.332cf61d807bbp-765, 0.0, 0.0, 0x1.2e93ff8eac473p-119,
     0x1.3f80dbacb355ap-174, 0x1.b32f7892fe587p-904, 0x1.eec08638eaa3cp-238, 0.0,
     0x1.05903451056bep-250, 0.0, 0x1.45d9408a838bdp-496, 0.0, 0x1.5eb67092be93ap-552,
     0.0, 0x1.2034897007ae9p-551, 0x1.e2a78e3e170fcp-453, 0.0, 0.0, 0.0,
     0x1.d9e3156149468p-941, 0.0, 0x1.0ddaec4078b1ap-524, 0x1.973c255eebfffp-501, 0.0,
     0x1.119743cff6f39p-990, 0x1.5b5c82bcdbcc2p-132, 0x1.54ce368a3282fp-542,
     0x1.5db122bd31218p-275, 0.0, 0x1.3275424336352p-298, 0x1.ce76b6fd4341ap-107, 0.0,
     0.0, 0.0, 0x1.c6da95fbb9edp-602, 0x1.491b362b376d8p-713, 0.0, 0.0,
     0x1.519c94a8ffd85p-605, 0.0, 0.0, 0x1.2b455caa64e24p-777, 0x1.e49ee698f3805p-763,
     0x1.9ab2beaea785ep-465, 0.0, 0x1.40d7f5ca7b0c1p-239, 0x1.2b9f5b288e70ap-726, 0.0,
     0x1.b97c8319f711ep-714, 0.0, 0.0, 0x1.3b2f20c8f54e8p-599, 0x1.626c886111f54p-317,
     0.0, 0.0, 0x1.4a545bf526f61p-731, 0.0, 0.0, 0.0, 0.0, 0x1.1e5867d1bbb17p-530,
     0.0, 0.0, 0x1.2759034d38b0ep-422, 0.0, 0.0, 0x1.2b2c281a9279ep-842, 0.0,
     0x1.d9d55a6750d52p-902, 0.0, 0.0, 0.0, 0.0, 0x1.ce547c7a5ef7ep-95,
     0x1.a14dfc0a5143dp-997, 0x1.709e840ff4cf5p-655, 0x1.e5883ee905adp-906,
     0x1.5de35328fea77p-270, 0x1.c85d446062251p-72, 0x1.1e6927487fdefp-188, 0.0,
     0x1.b366cfd50db32p-219, 0.0, 0.0, 0x1.7bde345c8a19dp-481, 0.0,
     0x1.c5a194380f342p-754, 0x1.e1ae12e2b237cp-335, 0.0, 0x1.62b81a5df6be3p-907, 0.0,
     0.0, 0.0, 0x1.f598008ecacf6p-935, 0.0, 0x1.bca325b651d8ep-48,
     0x1.bf2baaf6a2843p-862, 0.0, 0.0, 0x1.0bd94792950dep-487, 0x1.1e1cf66e415e5p-510,
     0x1.770db631c0b58p-337, 0x1.2bbb889aaf40fp-877, 0.0, 0x1.fb220b475ff0bp-178, 0.0,
     0x1.515bcebe7a283p-38, 0.0, 0x1.4ab9188b286fdp-617, 0x1.c42676f63532ap-895,
     0x1.d724bb1361f9dp-748, 0x1.73f3d7e0effeap-412, 0.0, 0x1.06faf08a727ebp-598, 0.0,
     0.0, 0.0, 0x1.cc989d4f91561p-142, 0.0, 0x1.edbc795e75197p-465, 0.0,
     0x1.ab92a6101f493p-745, 0x1.af4ea4e7faeacp-680, 0x1.aa6ea1793d1f1p-398,
     0x1.75a581793099dp-25, 0x1.616fc0c5e15a9p-468, 0.0, 0x1.bd9b58f3d2ccbp-235, 0.0,
     0.0, 0x1.4005bcf4c6b1cp-255, 0.0, 0.0, 0x1.e9ddee7b1f31cp-678, 0.0, 0.0,
     0x1.46321eda38b57p-775, 0x1.7c324cb4e552cp-32, 0x1.c354c6c1456eap-236
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
            tmp1 = Sleef_log1pd1_u10purecfma(tmp0);
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
    printf("Sleef_log1pd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log1pd1_u10purecfma bench acc %la\n", global_bench_acc);
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
