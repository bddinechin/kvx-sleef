/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1d1_u10purecfma.c --function \
 *     Sleef_expm1d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.0af5e6fe30889p-790, 0.0, 0x1.e1b276db12b32p-396, 0.0, 0.0,
     0x1.c9d263ba4f28ep-120, 0x1.57ac03efa60fap-516, 0.0, 0x1.5a04af2c9ba89p-205, 0.0,
     0.0, 0.0, 0x1.b673f45ee1cbdp-365, 0.0, 0x1.4cba4ccf46017p-630,
     0x1.989404b431d84p-925, 0.0, 0.0, 0.0, 0x1.7b0dcfd5bd7d5p-516,
     0x1.3b2738587abe9p-296, 0x1.f5dfba41d370fp-22, 0.0, 0x1.f7c3fb5a484fcp-207, 0.0,
     0x1.03687f110f4dep-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.977440b2f9d6dp-770,
     0x1.358a02c43eeaep-149, 0x1.c9f0702c7ef43p-271, 0x1.7092635c23222p-394, 0.0, 0.0,
     0.0, 0x1.29ec320064b9bp-484, 0.0, 0.0, 0x1p0, 0x1.958645c7b3fe3p-792, 0.0,
     0x1.9954fe82312fdp-759, 0x1.30b0349f94fecp-958, 0.0, 0.0, 0.0,
     0x1.65bbc0a493225p-686, 0x1.710fee83a5aa2p-515, 0.0, 0.0, 0x1.34ad8682daff6p-155,
     0x1.da1787b131f88p-451, 0x1.79554ae574b2bp-154, 0x1.7d74dbb4bb0fep-650,
     0x1.5609272be2723p-130, 0.0, 0x1.0b3ac5ca4c423p-557, 0.0, 0.0,
     0x1.77fca96d42ac7p-774, 0.0, 0.0, 0.0, 0x1.748fba802a633p-293,
     0x1.e25d92021b84bp-179, 0x1.8ec1380ab3269p-582, 0.0, 0.0, 0x1.ec010a9505747p-246,
     0x1.c9ee10a2b5253p-406, 0.0, 0.0, 0x1.8e6e596604b7dp-920, 0.0,
     0x1.dd59056de13f8p-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c1c9cb335772p-3,
     0x1.52d878a044f85p-853, 0x1.627ac6d8449c5p-245, 0x1.d5e7299331b09p-281, 0.0, 0.0,
     0x1.c36f13d12f919p-37, 0x1.34f0e99d20cc7p-886, 0x1.f31426960a77ap-778,
     0x1.613efad464bd8p-830, 0.0, 0x1.9968b10829343p-607, 0x1.a3eb87a50bab4p-108, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.893e1ce981e11p-827,
     0x1.add3fda8fa937p-65, 0x1.d8d424ce5ef01p-367, 0.0, 0.0, 0.0, 0.0,
     0x1.5be52bd10355fp-791, 0x1.75cf2be667e63p-300, 0x1.bdb576418c2e1p-848, 0.0, 0.0,
     0x1.ce834bd47c107p-465, 0x1.613e221983873p-490, 0x1.a7114ae425654p-619,
     0x1.f0f7296463866p-427, 0x1.a61723fc999a6p-814, 0x1.493070542819ap-754,
     0x1.426e3ed039a51p-898, 0x1.5da2ffbf15086p-216, 0x1.339f01d08ec1fp-359,
     0x1.3d86e26fdf308p-309, 0x1.de30466f0d9b9p-586, 0.0, 0x1.84f8bebd97e6ep-637, 0.0,
     0x1.17df85cbc880bp-755, 0.0, 0x1.3d54e4a1847a3p-405, 0x1.b892fa8683327p-912, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b1e4cf611586p-960, 0x1.b3f299c3e1991p-999,
     0x1.26901264e603ep-604, 0.0, 0.0, 0x1.8f0451d88db0cp-211, 0x1.dbc4cdc5b6a3ep-832,
     0.0, 0.0, 0.0, 0x1.cc566694dfbf4p-925, 0x1.3085fe813bf92p-962,
     0x1.91300558fbe3dp-876, 0.0, 0x1.ba118d719d607p-822, 0x1.699c9a406911dp-494,
     0x1.02a0e73888c86p-294, 0x1.2fce742e1f39p-779, 0x1.f067acd91b0c8p-947,
     0x1.7204ddce7b025p-731, 0.0, 0x1.b991fc3926c5fp-827, 0x1.a5c6c55496708p-423,
     0x1.b3de8d40eebbp-559, 0.0, 0x1.93d619e40626ep-807, 0x1.575d8f0b27d53p-261,
     0x1.811d1096db4a4p-384, 0.0, 0x1.54758163852eap-816, 0x1.20da3c650c345p-812,
     0x1.7fc1a011e149cp-36, 0x1.48dde630288bdp-741, 0x1.aa57536513326p-137,
     0x1.e49614b486cf4p-641, 0x1.9b4f3f47c3c47p-69, 0x1.b2d5cdb242b7ap-583,
     0x1.5caa1d039600ep-621, 0x1.9a313ed3d06d5p-380, 0x1.2a012d0c56fdep-799,
     0x1.23a6687897eabp-310, 0.0, 0x1.c12da1f6430efp-728, 0.0, 0x1.cfbe1d17c23a4p-909,
     0.0, 0x1.b5b34d947d0a6p-649, 0x1.2dfde808938d9p-439, 0x1.fc30442b2601p-76, 0.0,
     0.0, 0x1.074f6acadf249p-884, 0x1.9238e457564f6p-987, 0.0, 0x1.395cfd972a4eep-289,
     0x1.52b89027e9cap-480, 0.0, 0x1.d51d2c967e5c4p-148, 0.0, 0x1.45f71519d5f39p-892,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d07988162fb83p-795, 0x1.de376adbe86c8p-797,
     0x1.029e4295d5f2p-108, 0.0, 0x1.32775f0ed8727p-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d8d0cb0a63436p-616, 0x1.dec8ec13abcf9p-143, 0x1.735162771955p-436, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3de3e7ebcfbe3p-251, 0.0, 0.0, 0.0,
     0x1.f2cf2abcf7b04p-744, 0.0, 0x1.5944140e6ab57p-50, 0x1.7cab2640bb8b2p-456, 0.0,
     0.0, 0x1.b98203804096ep-695, 0.0, 0x1.35f27e51b9688p-24, 0.0, 0.0,
     0x1.0a34dddac0d25p-954, 0x1.698eb6aa04632p-859, 0x1.0cf5084b4a599p-377, 0.0, 0.0,
     0.0, 0x1.3a5537f0561f9p-322, 0.0, 0.0, 0.0, 0x1.56845bb2dcb7p-429, 0.0,
     0x1.5d243bfeb746cp-10, 0.0, 0x1.c4a38821951efp-761, 0x1.1d06c9cee291bp-460,
     0x1.8dccba9de8592p-563, 0x1.9c3601d55ea19p-324, 0.0, 0x1.b8e43e0bbe17dp-282, 0.0,
     0x1.fe1e8d77ded61p-698, 0.0, 0x1.95c3ef8bc2b31p-955, 0x1.7edc58f3a69d5p-300,
     0x1.4752ca02848a7p-458, 0.0, 0.0, 0x1.95d186ef47654p-777, 0x1.d13a03c2db5c8p-638,
     0x1.ac09ab620ee59p-846, 0.0, 0x1.4dabe3ed2e4e5p-183, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.df117ddd9b7b5p-350, 0x1.480509fbeb0f6p-38, 0.0,
     0x1.fe21686bb0b27p-31, 0x1.a147d41f71ff3p-882, 0x1.71ed4831ce97ep-43,
     0x1.0813eb4e434b3p-579, 0x1.fcff924c23bbep-224, 0x1.d620b1cae80b7p-46, 0.0, 0.0,
     0x1.b033bc62b2c88p-936, 0x1.af1cdbf1bfa98p-600, 0x1.32518c116969ap-519,
     0x1.939f60502158bp-335, 0.0, 0.0, 0.0, 0x1.80738923bffc2p-625, 0.0, 0.0,
     0x1.a43c5a6f6a12p-127, 0x1.e6ce2788313d8p-1003, 0.0, 0.0, 0x1.09c8b6ede2adap-673,
     0x1.d32aed5fc2579p-528, 0x1.ef1afa7206d5cp-55, 0x1.a5392bf02eb23p-682,
     0x1.4b8b3b7e5cf61p-705, 0.0, 0x1.14abe711c01d4p-268, 0x1.309ce0994a63p-3, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f5d44167b444p-236, 0.0,
     0x1.321d9b04643dfp-542, 0x1.51a82225d2e6bp-732, 0x1.026f05b87c50fp-1014,
     0x1.a78f9a4b9fdcdp-168, 0.0, 0.0, 0x1.00faa2ed452a5p-617, 0.0,
     0x1.2daaf9301729dp-168, 0.0, 0x1.033b74fdc4beap-796, 0x1.eff2b36423459p-289,
     0x1.6f144475a0198p-468, 0.0, 0.0, 0.0, 0x1.2343ac412794dp-102, 0.0, 0.0,
     0x1.bbdbf5d157e13p-771, 0.0, 0.0, 0x1.1c4afb28d28bap-447, 0x1.5bd6642500fafp-644,
     0x1.54565101f87b1p-609, 0x1.2cda2814f0665p-129, 0.0, 0.0, 0x1.dea4e169b262fp-703,
     0.0, 0.0, 0x1.ec7ea6f6c7357p-453, 0x1.67f2c747b41d2p-273, 0.0,
     0x1.ee5af76f82d4ap-274, 0x1.a9f51be21dae8p-661, 0x1.f7cf0eaa6ead7p-658,
     0x1.794c8b0919cefp-811, 0x1.6602497f5f19fp-656, 0.0, 0.0, 0.0,
     0x1.03b733912e1e2p-36, 0.0, 0x1.f94427e39884ep-74, 0.0, 0.0,
     0x1.1290790e0afp-501, 0.0, 0.0, 0x1.395cfcc2f7ff3p-552, 0x1.ffde5b30b8a7p-565,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2aa10af8e80c7p-318, 0x1.fa10f54670f73p-1001,
     0x1.f8e4a26b8fe22p-51, 0.0, 0x1.35d1481077ebp-991, 0x1.f19b6a2341359p-361,
     0x1.8e82a1b29e7f8p-1000, 0.0, 0x1.b1a7e5d2971aep-955, 0.0,
     0x1.3a11ca39a6facp-1017, 0x1.b403e01c8cf36p-682, 0.0, 0x1.4dc15e27b520dp-143,
     0x1.8ffafa8645612p-361, 0x1.bef34792e2eddp-139, 0x1.fb507f4faefd2p-162,
     0x1.24884c3712eadp-642, 0.0, 0x1.4f62b05a408b7p-637, 0x1.78b667542c6d5p-309, 0.0,
     0x1.8f296f8a728bap-288, 0.0, 0x1.eef85187f05a3p-864, 0.0, 0.0, 0.0,
     0x1.d7c944080f9edp-167, 0x1.ea88a423545a8p-297, 0.0, 0x1.664b70d128ddep-652, 0.0,
     0x1.607c72b803b84p-587, 0.0, 0x1.c955b0fb28047p-216, 0x1.d5d8f7b075825p-543, 0.0,
     0x1.43f9c3c378f25p-42, 0.0, 0x1.cd53d334bde31p-681, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.89c31b1dd9836p-307, 0x1.3736719c6609ap-43, 0x1.9fcb9a7e57a68p-61,
     0x1.b12711a2cf5cp-720, 0x1.608d54f666e7cp-337, 0x1.50937ceb37ac9p-271, 0.0, 0.0,
     0.0, 0x1.366e41254385bp-873, 0x1.ce22fd112e4d1p-378, 0.0, 0.0, 0.0, 0.0,
     0x1.61d2e95de4598p-782, 0.0, 0x1.411c3cb819289p-736, 0.0, 0.0, 0.0,
     0x1.905be90d01318p-594, 0x1.3a0061972d7cep-671, 0.0, 0.0, 0x1.ab33ddf0d298ap-194,
     0.0, 0x1.dea862da31c05p-858, 0.0, 0x1.8a9a829185e6fp-875, 0.0, 0.0,
     0x1.80c72a50ba324p-482, 0x1.b3e5c06bb6deep-787, 0x1.29c1e22330afdp-899,
     0x1.8b3d4719fae17p-137, 0x1.18dcc8dab5c5bp-1012, 0x1.6cd3d20d92bc7p-565,
     0x1.334f32d53526bp-466, 0x1.704b1aadc28f3p-84, 0x1.0e6ef1600adf7p-177, 0.0, 0.0,
     0.0, 0.0, 0x1.67b6ce487c1ap-95, 0.0, 0x1.b4c5e2bc72bc5p-554, 0.0,
     0x1.885cf96734ab9p-852, 0.0, 0x1.7edd511ab7a5ap-894, 0.0, 0.0,
     0x1.cb6612f923887p-270, 0.0, 0.0, 0.0, 0x1.7f2c950ef1ee2p-198,
     0x1.70e76362f2317p-379, 0x1.c5e960c18a3ccp-64, 0.0, 0x1.ebd73d47281f3p-11, 0.0,
     0.0, 0.0, 0x1.f9b5b909e3ecbp-758, 0x1.ca750332c2b2ap-645, 0.0, 0.0,
     0x1.0c5a1f1479f49p-317, 0x1.3e86f3858fd42p-575, 0x1.62341cfb9c06fp-144,
     0x1.b247b6bbb6015p-198, 0x1.ae7753ea9cd85p-182, 0x1.b75da28fcb1e9p-167, 0.0,
     0x1.61e93416b6dcdp-199, 0x1.a1b28c2d10a6bp-133, 0.0, 0x1.6aab0a3d878d2p-844,
     0x1.88085ffe1e51ap-686, 0.0, 0x1.5f8ef3116119p-660, 0x1.41d7a2174d322p-280,
     0x1.66777b6a9d4ecp-168, 0.0, 0x1.7d39f31b0ba25p-639, 0.0, 0.0,
     0x1.e808a563ed6b9p-533, 0x1.fef136dfca8d4p-809, 0x1.be3bd02f60266p-595,
     0x1.857a6489599bap-310, 0.0, 0.0, 0.0, 0x1.fbcf630d6ed5p-405, 0.0,
     0x1.e45650bc59d85p-7, 0.0, 0x1.f2ceae88fef8ap-407, 0.0, 0.0,
     0x1.1f31b679ded41p-166, 0.0, 0x1.4d4f3eb2fff96p-380, 0.0, 0x1.47b3f02c817e5p-773,
     0.0, 0.0, 0x1.4f456291b04c9p-255, 0.0, 0x1.2bfce14d6101ap-827,
     0x1.058ac13dc6f77p-746, 0.0, 0.0, 0x1.1e2c44a06dbfbp-789, 0.0,
     0x1.719ab4ebfee0bp-288, 0.0, 0.0, 0.0, 0x1.2a6b93196b52dp-131, 0.0,
     0x1.74ece8d6216cp-39, 0.0, 0x1.8a6efaa274d6ep-742, 0x1.45bb9f72a1c46p-974, 0.0,
     0x1.f75da25fcb40cp-167, 0.0, 0x1.9f719e6390159p-1017, 0.0, 0.0, 0.0,
     0x1.194c37aacf2e1p-336, 0.0, 0x1.396c72542844fp-179, 0x1.e1e67ba0ec61ap-973,
     0x1.9647224130a16p-831, 0x1.5c3665b616facp-581, 0x1.c18670c6e77bep-98,
     0x1.66d6411e3ed41p-35, 0x1.957c6fccd4105p-519, 0.0, 0x1.170ea5bb68814p-560,
     0x1.bc0fdac20bcf5p-672, 0.0, 0.0, 0.0, 0.0, 0x1.a63c1d7db5d94p-657,
     0x1.5febf8f63d23dp-718, 0x1.aa6b7018cda8fp-1001, 0.0, 0.0,
     0x1.0497ee7cfdbdep-851, 0.0, 0.0, 0.0, 0.0, 0x1.188aa20f39e9ap-1019, 0.0,
     0x1.215a1d5905896p-695, 0.0, 0.0, 0x1.1cb57edb12341p-992, 0x1.e82d337a91d8ap-334,
     0.0, 0x1.d75618338cfcp-431, 0.0, 0.0, 0x1.870d135467f7p-408, 0.0, 0.0, 0.0, 0.0,
     0x1.41a827cc687f2p-961, 0.0, 0x1.88fdee5f17fdp-848, 0x1.f1490f8843bcbp-734, 0.0,
     0.0, 0.0, 0x1.4bff1857a81a2p-470, 0x1.540e7acf251d5p-141, 0x1.0eeca1fb8da9bp-870,
     0.0, 0x1.370383e29274p-437, 0.0, 0x1.703802f54ad54p-913, 0.0,
     0x1.5bf332f24b81ep-797, 0x1.971360056a9a9p-264, 0.0, 0x1.e6f800d6f53bdp-523, 0.0,
     0.0, 0x1.a33498835379p-669, 0.0, 0.0, 0.0, 0.0, 0x1.f6d34724e5f1cp-595, 0.0,
     0x1.f904261336858p-48, 0x1.39385575daa55p-605, 0.0, 0x1.9088eaa06bfdep-712, 0.0,
     0.0, 0x1.92291b836060bp-605, 0.0, 0x1.7b9619e3fb966p-355, 0.0, 0.0,
     0x1.aed2939f80326p-803, 0.0, 0x1.415bb433591ffp-804, 0.0, 0x1.6a4199f003b0cp-167,
     0.0, 0.0, 0.0, 0x1.9de692d76cbb5p-585, 0.0, 0.0, 0.0, 0x1.9375c920b0125p-982,
     0.0, 0.0, 0.0, 0x1.3bc846efe61a5p-662, 0.0, 0x1.9c458d17efc9p-786,
     0x1.5c2c75f4ad7e9p-237, 0.0, 0x1.c0d02983bdda9p-239, 0.0, 0x1.b1046f0bead7p-305,
     0.0, 0x1.6a9b2172ee0e5p-512, 0x1.818a8e429e346p-472, 0x1.6952819e4a1c1p-859,
     0x1.4a6a4808d3ac4p-816, 0.0, 0.0, 0x1.6b5015ef99a13p-663, 0x1.d7c4b17c92c34p-209,
     0.0, 0.0, 0.0, 0x1.6182339d74d3p-730, 0x1.94d1de62f8803p-167, 0.0, 0.0,
     0x1.e9e0fc27058b5p-823, 0.0, 0x1.9259c6e134373p-763, 0x1.843962a4bb052p-913,
     0x1.d4de97b5d5904p-719, 0.0, 0x1.559ca16937163p-872, 0.0, 0x1.ac1a1de06af9ap-958,
     0.0, 0.0, 0.0, 0.0, 0x1.75aa2143d1106p-996, 0x1.b8cd2b1d167ecp-442, 0.0, 0.0,
     0x1.0637dd97df0fap-130, 0.0, 0x1.c8bc490d5dac8p-551, 0x1.8621311d49a2fp-798, 0.0,
     0.0, 0x1.0a10c5891fbp-993, 0x1.b0a8ff4ed8623p-120, 0x1.36d7410b2bd8ap-14,
     0x1.0dc0264f52f9ap-560, 0x1.9f6a8e9c23f2ap-860, 0.0, 0x1.7596db7073e06p-470, 0.0,
     0x1.19e978045881dp-1010, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07c4ccdbab41fp-91,
     0x1.1707941727f13p-1019, 0.0, 0.0, 0.0, 0x1.97b15bd988c32p-675, 0.0,
     0x1.e921e7d4daa67p-480, 0x1.ced9c7622d159p-543, 0x1.132e4951d7cb8p-74, 0.0,
     0x1.69d51db8c68bbp-496, 0.0, 0.0, 0x1.bc9255d6e3363p-724, 0x1.530ee9ce99831p-66,
     0.0, 0.0, 0.0, 0.0, 0x1.9d44c9b8ec1abp-660, 0.0, 0x1.87fcc67f5eb14p-378, 0.0,
     0x1.319626bf4ac8bp-652, 0.0, 0x1.7c38b6151f0c1p-227, 0.0,
     0x1.eea2933e9f67fp-1020, 0.0, 0.0, 0.0, 0x1.0403f4130bfb8p-139,
     0x1.b2df30f91142fp-788, 0x1.2c1565605cc8bp-731, 0.0, 0.0, 0.0,
     0x1.bc97d6da78b0fp-1007, 0.0, 0x1.9933031b8fea7p-618, 0.0,
     0x1.d18cdc63c0b01p-527, 0x1.6e878efafd3efp-676, 0x1.3745eeac0a641p-303, 0.0,
     0x1.3778e867bafe9p-383, 0x1.5418a5d9245bdp-350, 0.0, 0x1.14a4ca3191a83p-929,
     0x1.9796a02a44a32p-151, 0.0, 0x1.1c220e9dcca0dp-729, 0.0, 0x1.4dba636381c33p-11,
     0.0, 0.0, 0x1.5dabc201b08cp-4, 0x1.08580df8101efp-627, 0x1.413e25543d3bcp-70,
     0x1.4aee9433922f3p-242, 0.0, 0x1.cd5889b633be2p-956, 0.0, 0x1.68492e9976e7ap-650,
     0x1.f7e6d9fb35811p-233, 0x1.079e86a83d5e4p-645, 0.0, 0.0, 0x1.96070c452544p-177,
     0.0, 0x1.5e2b2353578a3p-923, 0x1.e3a5db28ee322p-636, 0x1.2ce48a779e1ccp-812, 0.0,
     0x1.bad0458c81739p-384, 0x1.3c01d5886bd41p-843, 0.0, 0.0, 0x1.41e86ac2d0969p-342,
     0.0, 0x1.e55078487bdbap-833, 0x1.8738e921cdfddp-690, 0x1.4b62e6b4a463p-402, 0.0,
     0x1.4be15b6cadeb3p-42, 0.0, 0x1.c028489258182p-380, 0x1.53dff4c34deabp-526, 0.0,
     0x1.b3cde158a7e34p-581, 0.0, 0x1.fb9cb6cf2e1ep-629, 0.0, 0.0,
     0x1.76edf1e0169c6p-37, 0.0, 0x1.cf561e9e4068bp-182, 0x1.fbb180d225c86p-288,
     0x1.2cf9cf2f0d3f9p-287, 0x1.0e6e4661ce39ap-365, 0.0, 0x1.ac041c2c622c4p-357,
     0x1.383d489e61d45p-67, 0.0, 0.0, 0.0, 0.0, 0x1.47603670617c4p-931, 0.0,
     0x1.702a7719d058ep-283, 0.0, 0x1.fbbb483537e9ep-188, 0.0, 0.0, 0.0,
     0x1.3069d1cd367cfp-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9768ec14867cp-777,
     0x1.e6ad1232ddf39p-1021, 0.0, 0x1.56d445f04d2a7p-631, 0x1.e0dc3cc85f5e2p-242,
     0.0, 0x1.b640c05e26146p-298, 0x1.b1808b1db04a1p-269, 0x1.9341e8dbb2b97p-405, 0.0,
     0x1.6eb5523d2f3fcp-268, 0x1.50d2b012df456p-400, 0.0, 0.0, 0x1.7c598ae4e35cfp-12,
     0x1.93cafcc5250cep-544, 0.0, 0x1.45fd8ea24d1e6p-625, 0.0, 0.0, 0.0,
     0x1.357faef04c033p-462, 0.0, 0x1.62dbc255b7a8p-837, 0.0, 0x1.98480c7c7f91bp-21,
     0.0, 0x1.6c77c064f5ba1p-580, 0x1.55d6963b1327dp-642, 0x1.add903c34d4f2p-561, 0.0,
     0.0, 0.0, 0x1.3318af3007de2p-422, 0x1.45c1ba2ca3c3dp-863, 0x1.98f82abbf5027p-446,
     0.0, 0x1.7433f4d0c8b72p-394, 0x1.406e438452cebp-207, 0x1.81d71f397f4fdp-1016,
     0.0, 0x1.48a160b7b1386p-473, 0x1.7dbf62aa869b9p-373, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f08481adf9442p-489, 0.0, 0x1.7a8ee78673948p-885, 0x1.17e9303c713ffp-387,
     0x1.ea6a584840983p-843, 0x1.dad673323f855p-827, 0.0, 0x1.39699cf44636p-867, 0.0,
     0.0, 0x1.b1243ee79b62dp-483, 0x1.36d72bb0e0744p-621, 0.0, 0.0, 0.0, 0.0,
     0x1.f5c8bc0e5489fp-797, 0.0, 0.0, 0x1.5ab30cca5efa3p-564, 0x1.0b66c0aad231ap-498,
     0x1.5c4c93db40241p-168, 0x1.b2ad9c518a7ecp-604, 0x1.5b94a5b7977b4p-798,
     0x1.ec2bc88089dcfp-898, 0x1.5a7eef039b00fp-542, 0x1.8a934d4a4a7bbp-647,
     0x1.d1cf137a1119p-588, 0.0, 0.0, 0x1.59aa1a440f104p-344, 0x1.a17e10721924ep-128,
     0x1.ba16d8aef6f7bp-743, 0.0, 0.0, 0.0, 0x1.10f94e642ed1bp-681,
     0x1.2780f3e1469a9p-585, 0.0, 0x1.232089b519ffcp-84, 0.0, 0x1.09f5fac13d136p-729,
     0.0, 0.0, 0x1.c83b1fa916115p-525, 0.0, 0.0, 0x1.d43703d3e38bap-84,
     0x1.65b6c6e30f8d8p-33, 0x1.17b68a7f0f3c4p-929, 0x1.857eba56dca8cp-532,
     0x1.23b442160613cp-950, 0x1.7cf0c05009dp-700, 0.0, 0.0, 0x1.34b8258c9c174p-126,
     0x1.bf19caffbebddp-658, 0x1.9137953396f6dp-538, 0x1.68d9bed67394ap-438, 0.0,
     0x1.480e6bd3790d1p-642, 0x1.1f3bf784dcb54p-1011, 0.0, 0.0,
     0x1.b3e8557196443p-204, 0.0, 0x1.7809f93f8c1ecp-775, 0.0, 0x1.684cda0743796p-335,
     0x1.8716875cdb204p-227, 0x1.5f7412d2825a7p-895, 0x1.7390e5c65d70cp-280, 0.0,
     0x1.eda00433509b1p-67, 0x1.596afba7716ecp-316, 0.0, 0.0, 0x1.1fd77877d7f87p-627,
     0.0, 0x1.1d14c4797a38bp-370, 0.0, 0x1.6f9e30f66ba7p-562, 0.0, 0.0,
     0x1.2fb425c6a3e65p-95, 0x1.dfd737157dd8dp-324, 0.0, 0x1.b36a197d3543p-958,
     0x1.40f5725ab1e52p-492, 0.0, 0x1.f3a0a4a7a7446p-751, 0.0, 0x1.fb6f07e53c24bp-303,
     0x1.87743e2a6ee51p-245, 0.0, 0.0, 0x1.47626808527f5p-960, 0.0,
     0x1.df8363c31815dp-231, 0.0, 0x1.a610d82491d6dp-250, 0x1.2dbf167ef805ap-394,
     0x1.d7f25d483ddcap-710, 0x1.10b3396976dd1p-929, 0.0, 0x1.b64072c4aaccp-308,
     0x1.b1cdc4c5cfffbp-671, 0.0
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
            tmp1 = Sleef_expm1d1_u10purecfma(tmp0);
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
    printf("Sleef_expm1d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expm1d1_u10purecfma bench acc %la\n", global_bench_acc);
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
