/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand4_u10kvx.c --function Sleef_atand4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.02cc22576ebc3p-59, 0.0, 0x1.ce0f7a314fec4p-234, 0x1.7b3fcbaf3fd5fp-863,
     0x1.8a898ff9fd722p-287, 0.0, 0x1.15c3ae7e24f81p-283, 0x1.d390e011df497p-579, 0.0,
     0x1.7e0c861963093p-142, 0x1.80786ed576b5cp-386, 0.0, 0x1.6720f2ab8d6bp-338, 0.0,
     0.0, 0.0, 0x1.5d01d58069efap-211, 0.0, 0.0, 0x1.22fae23276e37p-673, 0.0, 0.0,
     0.0, 0.0, 0x1.e16ffa4552418p-32, 0.0, 0x1.f93e8c8469a2fp-598,
     0x1.386e7181e7777p-369, 0.0, 0.0, 0x1.5c44e28dd08ap-424, 0x1.f9b9392270563p-660,
     0x1.185efd9c1dee8p-685, 0x1.09b71b7f64c8p-644, 0x1.00d692e4b458p-954,
     0x1.2b2af73a3648ap-752, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b47d72de018p-795, 0.0, 0x1.9e4a6f3130fbdp-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.07f503ef8ad9bp-200, 0.0, 0x1.935a4851d2a0ep-377, 0.0,
     0.0, 0x1.a6a176cabe6eap-888, 0x1.a50403aade6e5p-439, 0x1.6d50b652f220bp-38,
     0x1.72f36dbe34752p-525, 0.0, 0x1.3fc986cade452p-581, 0x1.0f535b1e4454ap-619, 0.0,
     0x1.2eb5dfb862b5dp-134, 0.0, 0.0, 0x1.71be1b5debf7ep-104, 0x1.77ae7ebfcd4e8p-116,
     0x1.aafca1a422f95p-409, 0x1.bdd5f3ba78be6p-177, 0x1.c8f833177cecbp-15, 0.0,
     0x1.9c19231ea8318p-958, 0.0, 0.0, 0x1.7bfc8a099b738p-395, 0x1.c53242db30dfbp-165,
     0x1.6d56d4b046f1dp-691, 0.0, 0x1.f9467d26b5314p-598, 0.0, 0.0, 0.0, 0.0,
     0x1.31b21f17e02c9p-783, 0x1.12051a221d9f1p-882, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.07ac0eca9133bp-1003, 0.0, 0x1.2218f41f5ac4dp-49,
     0x1.d0362d11512e6p-1016, 0.0, 0x1.87eef178c6984p-4, 0x1.42cdcb374e5dbp-794, 0.0,
     0.0, 0x1.69fb2199cf7d5p-491, 0x1.b40047f6bee38p-544, 0.0, 0.0,
     0x1.562c1330c1965p-708, 0.0, 0x1.3cf97da64f6d5p-421, 0.0, 0.0,
     0x1.7e7b40ad066dcp-382, 0x1.e98d76c4c2d13p-886, 0x1.d99f2631bb10ap-548, 0.0,
     0x1.813977a744a8cp-173, 0x1.c2a0610a3bd54p-456, 0x1.5495f09118783p-270, 0.0, 0.0,
     0x1.e0187b8b7cdb9p-896, 0x1.865bf7edb32cep-163, 0x1.b269e15ef8b6ap-243,
     0x1.f34330cbc5c9ep-257, 0x1.fe1cd4e13e66bp-381, 0.0, 0x1.6c6bb12296d36p-527, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0eb1f8e9453b3p-854, 0.0, 0.0, 0.0,
     0x1.00b087c73e2f4p-426, 0.0, 0x1.9aefee8c5c36cp-150, 0.0, 0.0, 0.0,
     0x1.1634f770dba7ep-827, 0.0, 0x1.293a0d08129a6p-630, 0x1.47cd0cabca6c5p-117,
     0x1.63c4c0577ac69p-782, 0x1.0e66b055bdbeep-618, 0x1.9c288f643206ap-743, 0.0,
     0x1.d52ccc1c6472ap-952, 0.0, 0.0, 0.0, 0.0, 0x1.68661d5d322efp-247,
     0x1.99b2734029c17p-729, 0.0, 0.0, 0x1.4957bbb6f2686p-736, 0.0,
     0x1.a1e17271cd9d2p-10, 0.0, 0x1.2a321da7cc3dep-545, 0.0, 0x1.9aed581fb7c1cp-504,
     0x1.bfe1832bbcf26p-324, 0x1.9a41582be227cp-250, 0x1.e6bbe94ce56d4p-130, 0.0, 0.0,
     0.0, 0x1.a47f248efea8fp-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23fa2a3411a73p-732, 0x1.30460ff372a85p-716, 0x1.838ae591caeeep-202,
     0x1.9a95a1a171a23p-15, 0.0, 0.0, 0.0, 0x1.e024983fc1637p-565, 0.0,
     0x1.a12c8bafb4075p-67, 0x1.06a3ee8a652d4p-530, 0.0, 0x1.9c54189576c22p-766,
     0x1.30cd2f1d87facp-255, 0.0, 0x1.820459d96e005p-407, 0x1.5cbdf3e70d89ap-641,
     0x1.162e7983733a8p-167, 0x1.4c1be5ae4ca28p-161, 0.0, 0.0, 0.0,
     0x1.4051319af5e79p-358, 0.0, 0x1.9503f91c917c9p-900, 0x1.09f114d52ad74p-524, 0.0,
     0.0, 0x1.f8886fcfd503bp-984, 0.0, 0x1.a7e387774bb05p-1019, 0.0,
     0x1.107e719d6192ep-1009, 0.0, 0.0, 0.0, 0.0, 0x1.c5dfe85fe1a08p-206,
     0x1.b52f7a21d7a2fp-374, 0.0, 0x1.9ed09287b8d1cp-919, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.185e5dfc0dc57p-4, 0x1.728673cfcc6e6p-157, 0.0, 0.0, 0x1.6663c1637dc21p-230,
     0.0, 0.0, 0x1.7b956dee25e03p-708, 0x1.06e85cc3a9921p-1009, 0.0, 0.0,
     0x1.f26f667e39bb6p-715, 0x1.81cb49ffc2e58p-753, 0x1.9067513a1666ap-356, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.681b7bf3a2ee2p-316, 0x1.0c167f8d0c5acp-763,
     0x1.103f9fbfa31fep-459, 0x1.0e452f4fd8be3p-725, 0.0, 0x1.0c77cc4bfa375p-354, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e355bad1801e4p-807, 0x1.8fcfbcbdecfdbp-491,
     0x1.70a6f3aee5f71p-744, 0.0, 0x1.7c11fe1bd1dd4p-930, 0.0, 0x1.50774e8ef0c5p-777,
     0.0, 0x1.32551f1c7f14cp-595, 0.0, 0x1.b908fe4d87c45p-819, 0.0,
     0x1.fbd0b5dd77b38p-184, 0x1.a543260c50d4dp-688, 0x1.b0517f2015769p-550,
     0x1.e5bf7696aaeeap-894, 0x1.c4342e0314606p-992, 0x1.4f1bc36d7f21p-33, 0.0, 0.0,
     0x1.a662d94b5cd16p-700, 0x1.1a2ea1211544dp-722, 0x1.4f778206ab226p-241, 0.0,
     0x1.e5aa0f0a02925p-33, 0.0, 0.0, 0x1.41ac1e7037845p-870, 0x1.f2f4e8162f92ap-630,
     0x1.49d914b9c433ep-517, 0x1.b64aa5ed94a75p-195, 0x1.ba7ce34e68c22p-747,
     0x1.9acc4e195e4dcp-964, 0.0, 0x1.efec29b4edd07p-260, 0x1.747e8718a2135p-205, 0.0,
     0x1.265571c6144cbp-209, 0.0, 0.0, 0x1.03d73acf4587bp-236, 0x1.53daff7ecbe67p-585,
     0x1.8868e24612d79p-486, 0.0, 0.0, 0x1.eaf60f83b03e8p-961, 0.0, 0.0,
     0x1.8340a803c42b2p-343, 0.0, 0.0, 0x1.0a12748ea3afdp-272, 0.0, 0.0, 0.0,
     0x1.f36970ad78bd6p-500, 0.0, 0x1.74bd3dc21f284p-807, 0x1.3d79d6f27efa1p-486, 0.0,
     0.0, 0x1.d4652dc87852ep-158, 0.0, 0x1.c0ba23a81d07fp-196, 0x1.7fefa208695cap-960,
     0.0, 0.0, 0x1.dd926e8f0324ep-849, 0.0, 0x1.ec1e1f7c7fc09p-495, 0.0,
     0x1.4d3c17fb8b10dp-873, 0.0, 0x1.2a41203c02ab1p-545, 0x1.120a547abf41ep-394,
     0x1.1c2f15b696608p-137, 0.0, 0.0, 0.0, 0x1.da7e5e5eefc45p-482,
     0x1.d594a07f218abp-392, 0.0, 0.0, 0.0, 0x1.ce29379bd1642p-1011, 0.0, 0.0, 0.0,
     0x1.6910dfbb72f6bp-549, 0x1.1b75d6221843dp-427, 0x1.fed35953c0be9p-991,
     0x1.107d3c7c7011bp-651, 0x1.d12fa82cd15e4p-135, 0x1.74ae3ccdd4e41p-717,
     0x1.2adca00aeda69p-924, 0x1.2f962aac5a923p-658, 0x1.b1a93f271b34ep-453,
     0x1.b488e12e49b49p-784, 0.0, 0.0, 0.0, 0x1.87c5cfc435edep-490,
     0x1.aa529e6d792e3p-886, 0x1.d77571ea1025fp-217, 0.0, 0.0, 0x1.6b066c12a5b24p-754,
     0.0, 0x1.da7f8c842c765p-918, 0.0, 0.0, 0x1.da55eea3405e5p-271,
     0x1.257377ab2577p-342, 0.0, 0.0, 0x1.b5200211e9701p-206, 0x1.af1f681f6a9f6p-206,
     0x1.13cfd672a1cedp-112, 0.0, 0.0, 0x1.2ef5d4ffe1cb7p-377, 0.0,
     0x1.e58f0a8b91fbdp-225, 0.0, 0x1.3b76c0e77460fp-371, 0.0, 0.0, 0.0,
     0x1.980a858dc9b25p-293, 0x1.6007f56b3058ep-189, 0.0, 0x1.2982bb0444396p-887, 0.0,
     0x1.b976c1454db2dp-466, 0.0, 0x1.cf3edb2b861efp-681, 0x1p0, 0.0, 0.0,
     0x1.e7c0994e31bfcp-167, 0x1.060ab7411bafcp-399, 0x1.c9ce2a5a8c433p-573,
     0x1.6f04e4b835903p-363, 0x1.7fabf5b66a763p-683, 0x1.b5c1612e804bbp-46,
     0x1.d58e37c8de866p-395, 0.0, 0.0, 0.0, 0.0, 0x1.3da163a626d5ep-616, 0.0,
     0x1.31609cf83a25bp-176, 0x1.8a4bf44eed5dcp-169, 0x1.7b2b2101e16f6p-718,
     0x1.34d22ca727cdfp-703, 0x1.b3bc2b754ce7bp-667, 0x1.ea702e81a8cc6p-817,
     0x1.b94aeaa38719cp-85, 0x1.d6ee266508e4cp-501, 0x1.80b0b57dcb709p-532, 0.0,
     0x1.693fc0d87bebap-298, 0x1.bddcc5a1d7fcbp-919, 0.0, 0x1.1ab31e5e7dd6dp-788, 0.0,
     0x1.b9784322ecb3ap-700, 0.0, 0x1.6fb58210f97a7p-199, 0x1.09f264d37c9bap-118,
     0x1.628e4f8503878p-328, 0x1.ae8dea41f21edp-492, 0.0, 0x1.d9a704058698cp-245,
     0x1.5fc33c75c9369p-795, 0x1.230dbf0cfd3f3p-222, 0.0, 0.0, 0.0, 0.0,
     0x1.680e9047dcfb4p-511, 0x1.f2b02342f8e71p-636, 0.0, 0.0, 0.0, 0.0,
     0x1.6f0addb10e7c5p-945, 0.0, 0x1.25b6f3a84a22dp-699, 0x1.66d865a97d043p-513,
     0x1.2488268331f6ep-874, 0x1.c93a4ad50bf14p-982, 0x1.cae5d8a08ba28p-77, 0.0, 0.0,
     0.0, 0x1.42feb993ea58cp-466, 0x1.795766d6d192cp-954, 0x1.b7c3d519bde54p-839, 0.0,
     0.0, 0.0, 0x1.8b365e7a2444ep-595, 0x1.58aa772b16e21p-75, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d76080cd376b2p-807, 0.0, 0.0, 0x1.1fd78209d6a31p-65, 0x1.2ea600db8ba8ep-190,
     0.0, 0.0, 0x1.b8f8f0b637344p-723, 0x1.ba87a67280a49p-397, 0.0,
     0x1.fa198fce6dae1p-1002, 0.0, 0.0, 0.0, 0.0, 0x1.7fcdc29ea30aap-696, 0.0,
     0x1.fc03189940f6ep-522, 0.0, 0x1.9597d4a607aaep-492, 0.0, 0x1.06b889df8ebd3p-444,
     0.0, 0.0, 0.0, 0x1.f1594d13e4e6p-710, 0x1.84c69a041a42dp-226,
     0x1.f2cdebf2429b4p-949, 0x1.db2775711ba04p-359, 0.0, 0.0, 0x1.5f876951d1609p-657,
     0x1.46cf91fdcde72p-668, 0x1.caffe41f61e83p-710, 0x1.4e3d60e014dadp-500, 0.0,
     0x1.cc720f08c63eep-631, 0x1.e1e6e1d34ca52p-1004, 0.0, 0.0,
     0x1.824371a10b514p-757, 0x1.36dd40d01eeedp-936, 0x1.a51bab6bad5b3p-924, 0.0, 0.0,
     0.0, 0.0, 0x1.10408d682a96cp-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3afcf0bd73274p-895, 0.0, 0x1.0e592b00e0db6p-240, 0x1.193ea44e16bbcp-569, 0.0,
     0x1.fa1153b09d08p-894, 0x1.f19e4fda3df42p-186, 0.0, 0x1.e46f5baa4a21ap-316, 0.0,
     0.0, 0x1.d0c2760138794p-641, 0.0, 0.0, 0.0, 0x1.09da6367ba18p-910,
     0x1.e1c08d7ef237p-806, 0x1.dbc7089298701p-694, 0.0, 0x1.5f6e7f361bd34p-351,
     0x1.188ea563ed505p-294, 0x1.2f186c5d1e6d2p-10, 0x1.c552f2ac4106fp-139, 0.0, 0.0,
     0.0, 0x1.95ceba4bbe5bbp-452, 0x1.a4c71f94b4bafp-591, 0.0, 0.0,
     0x1.87ef257a92938p-769, 0.0, 0x1.34877266aff59p-987, 0.0, 0x1.705e7b10dd547p-387,
     0x1.22139618a6992p-786, 0x1.ffe713e96ba3bp-832, 0x1.e523179e9dfc2p-988,
     0x1.65f1246b2fcdp-474, 0.0, 0x1.acfb968b490fep-906, 0x1.8f8548c923ac2p-488,
     0x1.3ac0cfe83d3c9p-298, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c9cfa57907cep-710,
     0x1.f6676d566cfc9p-933, 0.0, 0.0, 0x1.1240f313b8073p-837,
     0x1.d9be0af9378d6p-1003, 0x1.d130b3f83e623p-1001, 0x1.c142735e7c209p-404, 0.0,
     0x1.01bd9037d5512p-23, 0.0, 0x1.ea24d69331e37p-44, 0.0, 0x1.248d299164547p-608,
     0.0, 0x1.48565a7b90c6fp-64, 0.0, 0.0, 0x1.81b34c70c3e4dp-260,
     0x1.c49e999db02e3p-543, 0x1.4f5da39407be6p-881, 0x1.4ccb46de99a22p-651,
     0x1.c08935172b58dp-588, 0x1.065d4f94f60c3p-113, 0x1.0c57bf222c4bfp-829, 0.0, 0.0,
     0x1.bf043c617fbf9p-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.917592ad8ac5dp-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ddd35dcc0131p-104, 0.0,
     0.0, 0x1.5de6398de4af9p-175, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87856b53e6d48p-554, 0x1.fdc2a2d7f3347p-654, 0x1.461e33e294b6p-640, 0.0, 0.0,
     0x1.ff330475d7b5cp-9, 0x1.b706f57ce49edp-186, 0x1.0215f30b3b634p-167,
     0x1.cf70548a084bdp-385, 0x1.3ced703990138p-272, 0.0, 0x1.21c9ec49449e7p-524,
     0x1.8c80f48df4785p-724, 0x1.50a9e959806abp-765, 0x1.7b19cdcf31f93p-568, 0.0, 0.0,
     0x1.865305dcbe98dp-442, 0.0, 0.0, 0.0, 0.0, 0x1.061221f17f0f9p-822,
     0x1.dcb84223ce577p-942, 0x1.b6a493fe518f2p-1010, 0x1.32d8d33d0ef05p-713,
     0x1.8212d3523973bp-827, 0x1.0e354404f99ffp-745, 0.0, 0.0, 0x1.dc0638dd48c85p-127,
     0.0, 0.0, 0.0, 0.0, 0x1.743da1a1a8c42p-652, 0x1.a62a3d296be41p-352,
     0x1.4c005e83ceeb8p-482, 0x1.2e2ef379251e4p-333, 0x1.4c68e3fda14ecp-635, 0.0,
     0x1.56163da07e24dp-906, 0.0, 0.0, 0x1.96159254bae0bp-17, 0x1.c9dfaed770f74p-83,
     0x1.fd2d14949a9f6p-453, 0x1.5c2c2c23bf1ffp-39, 0.0, 0x1.e7c7a19c1f17bp-776, 0.0,
     0.0, 0x1.8bd747548052dp-490, 0x1.5484c50a59e3bp-960, 0x1.a1d16871dedd6p-1008,
     0x1.9e43f6383fb9cp-656, 0x1.a1829f2a5c6aep-533, 0x1.6d15cf3ac60c2p-640, 0.0,
     0x1.810ce3ba2ead8p-889, 0x1.99ddf1e89f76ep-568, 0.0, 0x1.ecced79093ea1p-966,
     0x1.634b2f521e6fcp-619, 0x1.a8473808b171ap-681, 0x1.23d4cf8075877p-80, 0.0,
     0x1.2174577059192p-276, 0x1.073876a9dfa4p-1006, 0.0, 0x1.f6293ef579429p-225, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.045b270a7969fp-141, 0x1.ba143d3a10432p-583,
     0.0, 0x1.2e35566936339p-550, 0x1.3d31a50b6fc35p-312, 0x1.a84bf72f5fc88p-96,
     0x1.6265d2e2129e1p-463, 0x1.1db1f29be5282p-846, 0x1.f06109fa432dbp-394, 0.0, 0.0,
     0.0, 0x1.88db44276489p-854, 0x1.16356e07c1288p-972, 0x1.e208ac6c8d832p-966,
     0x1.1212b1f340d9dp-1, 0.0, 0x1.1c8d483d937f7p-932, 0.0, 0x1.436594f829d55p-66,
     0x1.4c19837952b81p-981, 0.0, 0x1.713a843afcf72p-197, 0.0, 0.0, 0.0,
     0x1.f2b6b9e351541p-1011, 0x1.e297e0742c485p-47, 0x1.23067708f787ap-318, 0.0, 0.0,
     0x1.c4eccf671528fp-507, 0x1.db901977a76a5p-936, 0.0, 0x1.e2cc8f735ad96p-623,
     0x1.c29a3585da707p-42, 0.0, 0x1.2b1f902becb61p-359, 0.0, 0x1.8d4d1ba20ab64p-57,
     0.0, 0x1.8dd2f8ffc376fp-869, 0x1.22a500f581098p-160, 0.0, 0.0, 0.0,
     0x1.8f1aab0a4b44cp-727, 0.0, 0.0, 0.0, 0x1.37836ff9051ap-776,
     0x1.72036f1aa6d47p-397, 0x1.da2f302c031e3p-195, 0x1.e50eeeb1de39ep-738, 0.0,
     0x1.230141243dfffp-958, 0.0, 0.0, 0x1.7db060ed06646p-511, 0x1.e92d0570becf5p-840,
     0x1.1764e63265c9ap-421, 0x1.411d12e0a7fc5p-308, 0.0, 0x1.240e827be7ea1p-889,
     0x1.3ec4a1783478ap-475, 0x1.b4a746184ef3fp-405, 0.0, 0.0, 0x1.a12c032886a5dp-359,
     0x1.984ba491417f3p-493, 0x1.f552efcd3f30bp-736, 0.0, 0.0, 0x1.485025e807254p-84,
     0x1.244832bea0b6bp-801, 0.0, 0x1.c84fb08e68182p-44, 0.0, 0x1.62001eca198cfp-146,
     0.0, 0.0, 0.0, 0x1.cf04131147aebp-901, 0x1.ade390f8e5635p-326, 0.0, 0.0,
     0x1.fe19c44f4c55ep-24, 0.0, 0x1.10d17adf97ac8p-821, 0x1.e4fc6fde9a9b9p-437,
     0x1.e91839888c3bbp-947, 0.0, 0.0, 0x1.669bd7a9fa2aap-211, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b5dba27bca362p-676, 0x1.04c4d13cc0b6cp-410, 0.0, 0x1.df1795a55e29cp-246,
     0.0, 0x1.445428c05445cp-428, 0x1.6eb0296175091p-88, 0.0, 0x1.545b8558f7c2p-987,
     0.0, 0.0, 0x1.6610101a0fc6p-835, 0.0, 0.0, 0.0, 0x1.c506c1b8a1ca9p-471, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f5ab0bd4dadd8p-800, 0.0, 0.0, 0x1.58de0889fc21cp-608,
     0x1.926ba9f3228c3p-959, 0x1.21e745caf582p-591, 0.0, 0.0, 0x1.83295756e3d4ap-291,
     0.0, 0.0, 0x1.e054bfac55437p-415, 0.0, 0x1.704f260298bcap-733,
     0x1.30fbfd40ee492p-303, 0x1.5130fd0b030e2p-693, 0x1.86d831ca79ba2p-857,
     0x1.fc7201af43163p-612, 0x1.cc0131569eeccp-916, 0x1.a69fa791718b6p-425,
     0x1.6d482a911969bp-389, 0.0, 0.0, 0.0, 0x1.d87f49e2838cep-448,
     0x1.f6681753bcff2p-47, 0x1.5a191ec3d2673p-457, 0x1.55f739a52c2f8p-226, 0.0,
     0x1.ba7663149513ep-532, 0.0, 0.0, 0.0, 0x1.fcc6d6035b6b2p-970,
     0x1.88c33fbcd95b7p-280, 0.0, 0x1.ebcba9a7f7f24p-32, 0.0, 0x1.885eb198bff3dp-694,
     0.0, 0x1.a8adc24da2621p-507, 0x1.37d0b31197332p-336, 0.0, 0x1.eb04acfbd4ad4p-778,
     0x1.d45a1e27673e6p-928, 0.0, 0x1.eb379ee4f244p-1013, 0.0, 0.0, 0.0,
     0x1.68ace0dcf5ee5p-29, 0x1.b0b5edf4637cdp-718, 0x1.41d1d30322b13p-143,
     0x1.9b5556c61d448p-418, 0.0, 0.0, 0x1.26ca87763648cp-93, 0x1.e7990c8f89529p-157,
     0.0, 0x1.735809c6c8007p-136, 0x1.d9ebb64c39e81p-354, 0x1.7c5355db3b6f5p-76, 0.0,
     0x1.6c57a1f1de99bp-409, 0x1.6e6b4e0da9ee3p-883, 0.0, 0x1.4f295f232df84p-555, 0.0,
     0x1.b6a9d9e90eaa5p-254, 0.0, 0.0, 0.0, 0x1.36742f44092a2p-912, 0.0,
     0x1.c90c934c73cbep-292, 0x1.3dc6dc702e99ap-856, 0x1.96dd353bde1ccp-318, 0.0,
     0x1.a418febbf6bbcp-447, 0.0, 0x1.1c33237bdcd86p-138, 0.0, 0x1.7f43016c445a8p-152,
     0x1.c90915ea383ddp-616, 0.0, 0x1.a2850d66eea4ep-992, 0.0, 0.0,
     0x1.6c6b68c6eb8dbp-775, 0x1.e0f8dd9c97d5fp-456, 0.0, 0x1.f6763cf79478ap-482, 0.0,
     0x1.826f547f33f2p-304, 0.0, 0x1.de19f4060b664p-148, 0x1.40ab7b25fbf73p-19,
     0x1.87f0d4030ac08p-460, 0x1.f30a1132eab08p-518, 0.0, 0x1.9265ecd68675bp-976,
     0x1.4a651e5e84a18p-559, 0x1.189a5adeb2cfcp-540, 0.0, 0x1.3193fd10865afp-703, 0.0,
     0x1.e4eb487ef876ap-82, 0.0, 0.0, 0x1.6a2d3d39c0d59p-872, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e48a7b6f85533p-227, 0.0, 0.0, 0.0, 0.0, 0x1.054c6e1620382p-169,
     0x1.8bbc84876a42p-521, 0.0, 0.0, 0x1.6d2a7e8e403dap-662, 0x1.9cdddfff10244p-41,
     0.0, 0x1.a6172adea340fp-612, 0.0, 0x1.2f1a55e5dad75p-213, 0x1.9becbd3c9c8c1p-860,
     0.0, 0.0, 0x1.7d683fb91a1b2p-185, 0x1.d837b62e110a3p-948, 0.0,
     0x1.d05fc8e403e3bp-518, 0x1.94ccf08563075p-825, 0x1.9b198291efcf6p-1007, 0.0,
     0x1.e254961473957p-881, 0x1.cd6a91bd1acc3p-402, 0x1.e2959c2fcbe89p-541,
     0x1.84e38273f987cp-329, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52a02f233fcadp-764, 0.0, 0x1.68f457373d5ebp-452, 0x1.940dca669939ep-915, 0.0,
     0.0, 0.0, 0x1.a6d8d16d8f315p-145, 0.0, 0.0, 0.0, 0.0, 0x1.15d2d50a9172ep-530,
     0.0, 0x1.83ac1a4524c9fp-541, 0x1.2946155545e1dp-603
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_atand4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_atand4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atand4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
