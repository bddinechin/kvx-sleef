/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhd1_u10purecfma.c --function \
 *     Sleef_asinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.78c39568e8f9p-428, 0.0, 0x1.9c2e18756e36cp-609, 0.0, 0.0, 0.0,
     0x1.a9f646882f264p-99, 0x1.57fe50a1e26e2p-43, 0x1.7f090def9a38ap-740, 0.0,
     0x1.a3fe4e977d03ep-39, 0.0, 0x1.3964dd7084b14p-498, 0x1.3e0c72a8fc934p-466, 0.0,
     0.0, 0.0, 0.0, 0x1.616fd06cd7283p-920, 0x1.af06eca4324b6p-537, 0.0,
     0x1.584f1904542bap-672, 0.0, 0.0, 0.0, 0.0, 0x1.dca7b023a34d2p-525,
     0x1.43bbb8513fa1ap-229, 0x1.c56aa1cd2c3b6p-950, 0x1.b70f6c159661cp-205, 0.0, 0.0,
     0.0, 0x1.969a2bbbc9ff7p-312, 0.0, 0.0, 0.0, 0.0, 0x1.a6c7f9f32072fp-77, 0.0,
     0x1.75d5ce9eea5d4p-719, 0x1.68cf63b2ee08ep-450, 0x1.9309f71dd822ep-527, 0.0, 0.0,
     0.0, 0.0, 0x1.75c8b3a720fb9p-869, 0x1.76248f6c92717p-266, 0.0,
     0x1.077e1ecd58b4cp-982, 0.0, 0.0, 0.0, 0.0, 0x1.8b6f95eb9a9bfp-908,
     0x1.0011a139003d8p-192, 0x1.d29905eff6f67p-920, 0.0, 0x1.b805d0081c3f2p-855, 0.0,
     0x1.4ef0f82280628p-481, 0x1.47da887beaa04p-964, 0.0, 0x1.1290f0cbccf9fp-952, 0.0,
     0.0, 0.0, 0.0, 0x1.568c70824e1cbp-498, 0.0, 0.0, 0x1.e9653c0e0e51dp-244,
     0x1.9df3fb0d92fc7p-617, 0.0, 0.0, 0.0, 0x1.bfe97690e84bdp-720,
     0x1.c0e0efbd7781dp-749, 0x1.a9bccae635819p-744, 0x1.e8f12a8f6f7f8p-687, 0.0,
     0x1.ac78ae0f349e5p-733, 0.0, 0.0, 0.0, 0x1.b49592fb7282bp-1006, 0.0, 0.0, 0.0,
     0.0, 0x1.eee812780a5acp-418, 0.0, 0x1.b99198e49388p-390, 0x1.5591bb56a0917p-552,
     0x1.1656078880a4fp-564, 0x1.9670d54068cf8p-87, 0x1.fd9f672a51164p-246,
     0x1.a11f08f4e4cf5p-439, 0.0, 0.0, 0.0, 0x1.e29d9327cf392p-790,
     0x1.d99903f32f539p-675, 0x1.d1e500e48fb4dp-295, 0x1.81e93c6f341e3p-335,
     0x1.9d45da4c879b6p-784, 0x1.7c773adf427b3p-637, 0x1.fa6cb20b2e1e4p-679, 0.0,
     0x1.9136a45c07bb6p-725, 0x1.8b74d5f88b413p-800, 0.0, 0x1.d0a4c74427e24p-728, 0.0,
     0x1.b6a0a30a6957bp-1013, 0.0, 0x1.ca750718125eap-778, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1d6b572e5b77p-931, 0x1.70ad42d9f58bp-510, 0x1.03cc29bcdfee4p-422, 0.0,
     0x1.feaa60528d4f5p-90, 0.0, 0x1.b587468c81137p-161, 0.0, 0.0,
     0x1.9d9d9e8631d62p-279, 0.0, 0x1.c61354440468bp-515, 0x1.785be53a135b4p-276,
     0x1.72af1e20d0bcfp-595, 0.0, 0.0, 0x1.6b75f65174966p-161, 0.0,
     0x1.6bfea944dd608p-362, 0.0, 0.0, 0x1.93aef4a3126c6p-773, 0x1.24ca2d92c5a1ap-243,
     0.0, 0x1.e7ea14a9add22p-571, 0.0, 0.0, 0x1.ea4bfec9338bp-323, 0.0, 0.0,
     0x1.9efe1e1f8eaf2p-90, 0.0, 0.0, 0x1.9caf54291471ap-49, 0x1.a6ee06c719397p-1,
     0.0, 0.0, 0x1.c8a025ef75c3cp-392, 0.0, 0x1.8e5930d78ad06p-177, 0.0, 0.0,
     0x1.00154a4d8e552p-511, 0x1.37a39092bfb9ep-143, 0x1.180c66bdc7902p-49,
     0x1.61aee7e5223fcp-321, 0.0, 0x1.8c79d05f9b477p-347, 0x1.c1b388a130aep-559, 0.0,
     0x1.7e982db3a8261p-659, 0x1.834b23eed6a7dp-545, 0.0, 0.0, 0x1.6edd762b20529p-511,
     0x1.a6d5afad41c52p-156, 0.0, 0x1.6233dae26b6f5p-554, 0.0, 0x1.414ade1e86a71p-694,
     0x1.727e4dd01643p-250, 0x1.0a44e01ec1aebp-171, 0x1.3cb51077823dfp-574, 0.0,
     0x1.2db5a76b36e89p-985, 0x1.3799c2247654ap-166, 0x1.7d696591afcf3p-732,
     0x1.fe50766cdced1p-857, 0x1.ac725443da815p-759, 0x1.c331c7c115a0ep-486, 0.0, 0.0,
     0x1.852b3603597cap-733, 0.0, 0.0, 0x1.f28cb1efcc1eep-1021, 0.0, 0.0,
     0x1.47a732d0d778cp-709, 0x1.a21cca1b7ed55p-109, 0.0, 0x1.e55fddac4445ep-922, 0.0,
     0.0, 0x1.a6a2b2a768528p-1000, 0.0, 0x1.a8ef48ca4977ap-655,
     0x1.73fd07120c6a1p-623, 0x1.d94230ae29a6ep-629, 0.0, 0x1.d3f16bc59641cp-756, 0.0,
     0.0, 0x1.f45f0ada3d415p-515, 0.0, 0.0, 0.0, 0.0, 0x1.8a28f82da6272p-507, 0.0,
     0.0, 0x1.be0942e400e4ap-274, 0x1.e21bc0245291p-676, 0x1.61ade54d1f03ap-969, 0.0,
     0x1.2d5457050d27bp-920, 0x1.52dc3f524ea04p-561, 0.0, 0.0, 0.0,
     0x1.1df14d16e9caep-615, 0x1.d49b6317465c7p-20, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.73aa2cf6f3ac9p-635, 0.0, 0.0, 0.0, 0.0, 0x1.fc15df1bcde4dp-824,
     0x1.d78ae1ff41b08p-317, 0x1.96c843ae094fep-287, 0.0, 0x1.7231f044511a7p-184, 0.0,
     0.0, 0.0, 0.0, 0x1.509207fb9fd17p-457, 0x1.8cbb96ebc4661p-824,
     0x1.e41be7f658632p-860, 0.0, 0.0, 0x1.ced53a39b0182p-351, 0.0,
     0x1.2501e0ff97cdp-817, 0.0, 0x1.1f77b69449bbdp-770, 0x1.a867968ff231p-175, 0.0,
     0.0, 0x1.78a2be81f82edp-447, 0x1.e26f95430936ap-871, 0.0, 0x1.0f3106e5de39cp-733,
     0.0, 0x1.523ff53804c36p-511, 0.0, 0.0, 0x1.9c5899122015cp-91, 0.0,
     0x1.47af8ed002445p-91, 0x1.53ed51bdb4863p-489, 0x1.1cf9de4a716fdp-469,
     0x1.f9dc2d82f8cd3p-920, 0x1.670eff6ed765p-70, 0x1.2d40cfa756a8fp-983, 0.0, 0.0,
     0x1.3ea5ed8ed8f23p-876, 0.0, 0.0, 0x1.437d4fc96fefap-942, 0.0,
     0x1.92367e2910c39p-319, 0x1.af8c16fc8805p-371, 0x1.9f4481812a84cp-616,
     0x1.6f37cdb6d164ep-87, 0.0, 0.0, 0.0, 0x1.5b840201a4267p-724, 0.0, 0.0,
     0x1.80aef96d5e726p-982, 0.0, 0.0, 0x1.c2a8dc67bf861p-211, 0.0,
     0x1.61d11e03976cdp-371, 0.0, 0.0, 0.0, 0x1.bb80a34f90e2cp-458, 0.0, 0.0, 0.0,
     0x1.1f04eb96bd703p-482, 0.0, 0x1.22fdcdf8f4ccbp-288, 0.0, 0x1.13b8b5baeabafp-283,
     0x1.6aa310b510be9p-502, 0x1.9b926daebf7e4p-1001, 0.0, 0.0, 0.0,
     0x1.94becbc7bc33fp-912, 0.0, 0.0, 0x1.70c1b0058ec07p-99, 0x1.7e9c8d5225f4dp-626,
     0.0, 0x1.1de0c4805a1afp-718, 0x1.523ec3dfaf7a4p-736, 0x1.158f139af603ap-60, 0.0,
     0x1.199abec562306p-779, 0x1.b6efc3747f458p-961, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eca39facfd4eap-881, 0.0, 0x1.97b1589a0b301p-6, 0.0, 0.0,
     0x1.44e7bf4bb1bc8p-55, 0.0, 0x1.9106620080a89p-229, 0.0, 0x1.4aec2899f57acp-775,
     0.0, 0.0, 0.0, 0x1.4324385f422c2p-602, 0x1.06d8d3932f787p-914, 0.0, 0.0,
     0x1.83617830b139bp-784, 0x1.04c1af18c2d63p-992, 0x1.3bbfee9f0bca2p-794, 0.0, 0.0,
     0x1.39574f5402647p-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a56239050a3dp-335, 0x1.60760b6bb4797p-597, 0x1.b492900264decp-185, 0.0, 0.0,
     0x1.c416004ec357dp-533, 0x1.13d4ab7f4e1a5p-592, 0.0, 0.0, 0.0, 0.0,
     0x1.b80406d6e0b3dp-72, 0x1.1a0bad80f5aa6p-248, 0x1.708e2d25320f3p-17, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bcdf38ec0523p-872, 0x1.5640beae39994p-203,
     0x1.174d6945bd125p-256, 0.0, 0.0, 0.0, 0x1.b1cf533eb5da6p-6,
     0x1.8c2c6a2d45cf3p-392, 0.0, 0.0, 0.0, 0.0, 0x1.d53189a4acep-182,
     0x1.ae546969beccfp-846, 0.0, 0.0, 0x1.65737861b99cdp-723, 0.0, 0.0, 0.0,
     0x1.82f16e4590d88p-806, 0.0, 0x1.f99263cebd0f7p-472, 0.0, 0x1.e2924d29a96bdp-654,
     0.0, 0x1.36bab82dd44e3p-709, 0.0, 0.0, 0x1.beb93e5792ca5p-110,
     0x1.4b127b8efcdf1p-23, 0.0, 0x1.5668401abb175p-501, 0.0, 0x1.1898701f206a7p-533,
     0x1.6da0589370724p-166, 0x1.03b7de75dc4ffp-862, 0x1.333c227718fe2p-687, 0.0,
     0x1.f377b2b0b1557p-936, 0.0, 0.0, 0x1.e15836e62be51p-255, 0.0, 0.0, 0.0, 0.0,
     0x1.5ef83f788ae19p-729, 0.0, 0.0, 0x1.06203d6615bbfp-8, 0.0,
     0x1.1ba7da7a48823p-745, 0.0, 0x1.daddf88d3ff17p-842, 0x1.c9eb9cceffadap-753, 0.0,
     0.0, 0x1.8489fed7f389cp-969, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.874ef39326ac8p-44,
     0x1.6988eb48e82c8p-964, 0.0, 0x1.30b1f7964a00fp-991, 0.0, 0x1.81deacf1ea402p-213,
     0x1.6231f02500179p-954, 0x1.d1f72e19bb42ep-603, 0.0, 0x1.422cf0fe7376dp-893, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22d5f19980e98p-667, 0x1.17c584d237d39p-123, 0.0,
     0x1.a33dd8d5c525ap-636, 0x1.251b3b9f6dbfdp-85, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.978d8d7286e5cp-139, 0.0, 0x1.74a5026cd3b8ep-520, 0.0, 0x1.9532d0ff6306cp-508,
     0.0, 0.0, 0x1.80714607a6207p-821, 0.0, 0x1.357f16c5c0cb5p-588, 0.0, 0.0, 0.0,
     0x1.2927e7e1f952ap-630, 0x1.8654b44e8cde4p-278, 0x1.e97378158cbd4p-102,
     0x1.07011ff0380a4p-420, 0x1.1cea1bc4eaf1p-290, 0.0, 0.0, 0x1.3c4a32eba962ep-830,
     0.0, 0x1.f8fd1574cbe4ep-495, 0.0, 0.0, 0x1.9f94d3f109c8fp-878, 0.0, 0.0,
     0x1.b953455be0153p-385, 0x1.44e59002b3e28p-758, 0.0, 0x1.5cf16a54376b7p-719, 0.0,
     0x1.97380f3629f4fp-970, 0x1.3f924a9e9f9c5p-165, 0x1.68a48362a047bp-260, 0.0,
     0x1.ba8cd213c5bd3p-376, 0.0, 0.0, 0.0, 0x1.a1d9fc3e16783p-250, 0.0,
     0x1.ba16a0416d102p-919, 0.0, 0.0, 0.0, 0x1.c199d50194e0cp-371,
     0x1.3c7738eb96a7p-4, 0x1.9563a57f3ad95p-867, 0.0, 0x1.10a8426b237e6p-190, 0.0,
     0x1.b17e40805d886p-446, 0.0, 0x1.1df4accd4b93p-598, 0.0, 0x1.2bb935d3c8eb8p-122,
     0.0, 0.0, 0x1.9396aeee9bafdp-627, 0.0, 0.0, 0x1.b7c6659e9ddd5p-623, 0.0,
     0x1.9bfb363b6b0c3p-261, 0.0, 0.0, 0.0, 0.0, 0x1.4290af692a0edp-298,
     0x1.4e81029525f55p-795, 0x1.3f6226140aadcp-60, 0.0, 0.0, 0x1.061f7f2f4287dp-851,
     0x1.f3dd39ff776cep-536, 0.0, 0.0, 0x1.e62dc82ca8204p-926, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.896c349ea3c05p-418, 0x1.5e869c876faabp-322, 0x1.6b15c2de5df3fp-340, 0.0,
     0x1.25ea88f9f3421p-559, 0x1.4552e061e9cb2p-425, 0x1.f6670de9407dp-330, 0.0, 0.0,
     0.0, 0x1.2feb3556f9647p-172, 0.0, 0x1.596abb9059d3dp-855, 0x1.208e55aca1929p-922,
     0x1.59075f5b7c12ep-398, 0x1.d4ada66caf453p-358, 0x1.1b4c7424fbe62p-892, 0.0,
     0x1.898c6b187327fp-747, 0x1.37241ff95a266p-255, 0x1.5e88f4e4ac033p-229,
     0x1.f9c46fe502f65p-440, 0.0, 0.0, 0x1.e33d1ea854addp-843, 0x1.4aca027c4b27dp-961,
     0x1.b34cb54478ddcp-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2592b76b94723p-108,
     0x1.a7c9f8798e695p-988, 0x1.60dc7a83804acp-747, 0x1.36fa7b501adc2p-234, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c9e5fbdb2f0b6p-194, 0.0, 0x1.bd9b171a100bcp-116, 0.0,
     0x1.a10f94879403p-738, 0.0, 0x1.5d8dfc2513483p-452, 0.0, 0x1.0ab818ede13d7p-978,
     0.0, 0x1.a88a497ff967dp-386, 0.0, 0.0, 0.0, 0x1.d19bc60beb73ap-707, 0.0,
     0x1.ad4444252ada6p-384, 0.0, 0.0, 0x1.e4248c9dfd3c6p-437, 0x1.08a49df6f0109p-642,
     0.0, 0.0, 0.0, 0.0, 0x1.5dd3d77f07392p-557, 0.0, 0.0, 0x1.863fc12b20505p-724,
     0x1.e1720b58f53e4p-823, 0x1.3140ed7eb862bp-227, 0.0, 0.0, 0.0, 0.0,
     0x1.e14ddc2b4d2cap-463, 0.0, 0x1.807246d0de91ep-107, 0x1.75a239454ce9ep-823,
     0x1.604d240ae75d5p-81, 0x1.32dc314533d09p-357, 0x1.79b8e1e96c469p-826, 0.0,
     0x1.91ed793b26524p-492, 0x1.2ad52a2e25f51p-621, 0.0, 0.0, 0x1.378c6aff79beep-489,
     0.0, 0.0, 0x1.ac7b509c55507p-698, 0x1.475c11b614f56p-291, 0x1.0939bb8c814e6p-671,
     0.0, 0.0, 0.0, 0x1.3604a5a5def17p-956, 0x1.7c679133a653cp-430, 0.0, 0.0,
     0x1.e7a1b959d8ea3p-761, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45616a8ec6c45p-429,
     0x1.93b8576d061eap-477, 0.0, 0.0, 0.0, 0.0, 0x1.ccdf2196f55d5p-274, 0.0, 0.0,
     0x1.72d80b5ffc74ep-132, 0x1.b6660c9a3ae45p-42, 0x1.b83e44e144e7cp-105, 0.0, 0.0,
     0x1.e8138c7dbc1a5p-31, 0x1.787f4fd0cf80fp-971, 0x1.9390274ebd5fdp-522,
     0x1.99f8cd933cc81p-950, 0x1.4ff2530c1b7dp-186, 0x1.37e97099a1f51p-591,
     0x1.99d242c2f2d8p-661, 0x1.4d2847760294fp-574, 0.0, 0x1.33dcd60cf35d5p-959,
     0x1.989a0c896d71ep-926, 0x1.c394524a9a46ep-318, 0x1.d38fc64a507bfp-708,
     0x1.7e7aad0cd8c06p-505, 0.0, 0x1.6a94669d4005cp-116, 0.0, 0x1.a0a47569d6aadp-94,
     0.0, 0x1.b90414a2fc7cfp-57, 0x1.d7f3d9f63ab88p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0a850eb4e7fd2p-934, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70b0f0d900a38p-546, 0.0, 0x1.e7d8508d22675p-164, 0x1.51004ff41755fp-839,
     0x1.ec45114aea1bp-844, 0x1.4c1c3160445f6p-989, 0.0, 0.0, 0x1.3d3b94f2ec7a9p-586,
     0x1.167ec863be6dap-338, 0x1.4c2de22e153acp-526, 0x1.0bc31def764efp-998, 0.0, 0.0,
     0x1.a4ab43e1dfc9fp-878, 0x1.e08d4a9ca18fep-556, 0x1.79d92114c3a5dp-514,
     0x1.7dd590057716bp-957, 0x1.eac1f49260269p-651, 0x1.b8476572b1bacp-110, 0.0,
     0x1.520b0384e2915p-448, 0.0, 0.0, 0.0, 0.0, 0x1.8fc1751f72d9p-270, 0.0,
     0x1.2bb88a0cc1a64p-2, 0.0, 0.0, 0.0, 0x1.b7ed2611381a8p-682, 0.0,
     0x1.b97a04f113144p-517, 0x1.282da66672839p-134, 0.0, 0.0, 0.0,
     0x1.e9a793c6c9d74p-89, 0.0, 0.0, 0x1.6e1367b2b9a43p-758, 0x1.0fd9e9cbf439cp-21,
     0x1.eebe4357e47f4p-680, 0.0, 0x1.172f7a734e107p-768, 0x1.626c69cd5dc27p-952, 0.0,
     0.0, 0x1.425e06db8d35ap-359, 0x1.274928aeb0c6fp-883, 0x1.e20471a8f91e8p-255, 0.0,
     0x1.b5d04e1ea32dbp-346, 0.0, 0x1.fbe0fe18387e8p-695, 0.0, 0x1.154a1805a03abp-144,
     0x1.1bfd200bde18ep-148, 0.0, 0.0, 0x1.a5628b3c7c00dp-856, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.24520ac8feacbp-380, 0.0, 0.0, 0x1.4371eb6b7b629p-184, 0.0, 0.0, 0.0,
     0x1.b01d92318a7c4p-390, 0x1.c775ee471b221p-451, 0x1.841e55b114092p-719,
     0x1.072d52c76f615p-610, 0.0, 0x1.30f20734d8a83p-877, 0x1.dad57fbcdaf15p-499, 0.0,
     0.0, 0x1.bcf79b9ca4c6ep-332, 0.0, 0x1.79568e5888f14p-714, 0x1.9cc263ce5bd69p-257,
     0.0, 0x1.e36f7d6e49191p-787, 0.0, 0x1.11cd4e68fa7b4p-362, 0x1.587513cdf721bp-864,
     0x1.2f9f8cac45b0dp-773, 0.0, 0x1.54614716361bap-789, 0.0, 0x1.60414249f51c3p-980,
     0.0, 0x1.bd0ca4d78cd49p-758, 0.0, 0x1.98979228f137ap-1002, 0.0, 0.0,
     0x1.622f6a25f631p-674, 0.0, 0x1.e6bba6b4eb7bfp-486, 0x1.4be833be0ddbap-861,
     0x1.f6166f28198dap-42, 0x1.fdfecf5a69999p-153, 0x1.e0a8c9601a474p-14, 0.0,
     0x1.8a5d6cc4fce36p-44, 0.0, 0.0, 0.0, 0x1.359d478f1781p-938,
     0x1.c9207714140d5p-84, 0.0, 0x1.1499b603fe484p-870, 0x1.086950f30a733p-846,
     0x1.c6bf761141fd8p-700, 0.0, 0.0, 0x1.8569254fb68cap-743, 0x1.9a2acb24df41bp-578,
     0.0, 0.0, 0x1.042881fa075eap-140, 0x1.241a328c248f3p-48, 0.0,
     0x1.51178ca63b5bap-675, 0x1.989d7c56b6ea6p-632, 0x1.508dc94ab2fe2p-294,
     0x1.5e12bca8a5f31p-229, 0.0, 0x1.c10e396e4fc76p-549, 0x1.a4061c85c682p-139, 0.0,
     0x1.59327eb3b957dp-650, 0.0, 0.0, 0x1.96723326ac26dp-896, 0.0, 0.0,
     0x1.e93648085bf8ep-284, 0.0, 0x1.e34d4cd920deap-855, 0.0, 0.0,
     0x1.239a8c8c2e35dp-546, 0x1.7a6cdf77a1da3p-990, 0.0, 0.0, 0.0,
     0x1.f66a98f14774ep-125, 0x1.165a212687ebbp-140, 0x1.0490aed60d053p-70, 0.0, 0.0,
     0.0, 0x1.bf721cc04cd9ap-99, 0x1.1f03a9f64642dp-501, 0.0, 0x1.17944a1bf9b1ep-231,
     0.0, 0x1.9457c802b5559p-997, 0x1.11ac17b1dd3edp-29, 0x1.f4147886d0081p-706,
     0x1.94c5ce39767ffp-335, 0x1.bb57c0b5199f6p-540, 0x1.991d773fbacddp-145,
     0x1.2b829ce8a162bp-635, 0x1.6fe20b0b3796bp-655, 0x1.c90c280808a1ep-940,
     0x1.e7fd8440b0c91p-17, 0x1.ff69c05bd28cep-623, 0.0, 0x1.659bce3d2780bp-812, 0.0,
     0x1.7fb49acde2dabp-333, 0x1.d99d39a2b07dep-615, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.05dc43f2967aep-260, 0.0, 0.0, 0x1.3c37e0fd53008p-900,
     0x1.1214c1a15675ep-152, 0.0, 0x1.dbe729d520cadp-16, 0.0, 0x1.c54bdd6d992a1p-875,
     0x1.53d06cba68f41p-7, 0x1.73e0ed909c056p-937, 0.0, 0x1.676784ad5497ep-30, 0.0,
     0x1.9681885f8f5fep-609, 0x1.1cb421cdcff1ap-635, 0x1.d79d3db863d33p-459, 0.0,
     0x1.73fc79bdbe3f9p-637, 0x1.9996708783cf4p-801, 0.0, 0.0, 0.0,
     0x1.f08f65e5f524fp-546, 0.0, 0x1.7d401e637c869p-512, 0x1.9a3028b1db89cp-1000,
     0x1.e40f0671e8d72p-851, 0x1.fb32b7f8c429ep-202, 0.0, 0x1.517b6383bb601p-53, 0.0,
     0.0, 0x1.6dbcb34b157ffp-515, 0x1.dacfd12cc5768p-762, 0x1.53cdaf9c263abp-886, 0.0,
     0.0, 0.0, 0x1.c0e29e98d7318p-746, 0.0, 0.0, 0.0, 0x1.866e997857eep-212, 0.0, 0.0,
     0x1.70b08d2294b58p-548, 0.0, 0.0, 0x1.9cd16a13dd5e6p-840, 0x1.5dc2768197f45p-859,
     0x1.4474757024ccep-202, 0x1.e08b64283158dp-560, 0.0, 0x1.58ef0c3c19208p-362, 0.0,
     0x1.2c21079927258p-408, 0x1.366e168498aap-603, 0.0, 0.0, 0x1.3e50ac59fdc15p-822,
     0.0, 0.0, 0.0, 0x1.0764cfa8bb4a9p-485, 0x1.0bd7017d71cc9p-997, 0.0,
     0x1.330147c14117fp-432, 0.0, 0x1.39a714af4d907p-537, 0.0, 0x1.523cc90385d69p-357,
     0x1.4478dec9ab9edp-183, 0.0, 0x1.544a0fae14e29p-797, 0.0, 0.0,
     0x1.558ce02922ab5p-205, 0.0, 0x1.c375f7f3da465p-345, 0.0, 0.0, 0.0, 0.0,
     0x1.daffa9950a5e5p-705, 0x1.a81884dc4c3acp-103
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
            tmp1 = Sleef_asinhd1_u10purecfma(tmp0);
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
    printf("Sleef_asinhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
