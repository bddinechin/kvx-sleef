/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd4_u10kvx.c --function Sleef_logd4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.d9bea69653a1p-459, 0.0, 0x1.d8a865182a371p-927, 0x1.18b28e8314ef3p-336, 0.0,
     0.0, 0.0, 0x1.0ccceba14410ap-492, 0x1.d350ecbdad9a9p-214, 0x1.fb4c79def5438p-675,
     0x1.59304022f10fcp-557, 0x1.7b7fe35ba7989p-871, 0x1.7ea8ba68aefa9p-146,
     0x1.84c95bbaa029dp-63, 0.0, 0.0, 0.0, 0.0, 0x1.15bef410e02bap-987, 0.0,
     0x1.a32d1a7ee2ab1p-485, 0.0, 0x1.b32de0ebedf36p-727, 0.0, 0x1.0e4f45d7abfa4p-766,
     0.0, 0.0, 0.0, 0.0, 0x1.9cd697097f078p-578, 0.0, 0x1.dfa54317b967bp-153, 0.0,
     0x1.3bcc76f5e0bacp-787, 0x1.e1ecf66c24df7p-677, 0.0, 0.0, 0.0,
     0x1.b3f725f8027c3p-380, 0x1.88846bf27b37cp-179, 0.0, 0.0, 0.0,
     0x1.4980319ffdd09p-926, 0.0, 0x1.271e360f53137p-793, 0x1.319eafebdbff2p-473, 0.0,
     0x1.b34c5562d007ep-851, 0.0, 0x1.2177f6f319083p-862, 0.0, 0.0, 0x1p0,
     0x1.742858de22ab9p-88, 0.0, 0x1.d73ae581d5405p-127, 0.0, 0.0, 0.0, 0.0,
     0x1.f058c67d0cdccp-339, 0.0, 0.0, 0.0, 0x1.e2e84b36f7bdep-765,
     0x1.d3fef02d5491cp-1000, 0.0, 0x1.55e19abc3d4c4p-195, 0x1.b2a3f02d9e1f7p-968,
     0x1.43a97735ac528p-603, 0x1.cededb2cd898bp-681, 0.0, 0.0, 0x1.0e77e8f5a5ec1p-907,
     0x1.379ebcf9da8e3p-470, 0x1.7f9cba3824eb1p-125, 0.0, 0x1.ce96464b188ep-444,
     0x1.e1dae32085604p-264, 0.0, 0.0, 0x1.d93633a4e827p-667, 0.0, 0.0,
     0x1.fe935a62670bbp-598, 0x1.57d523ab82222p-545, 0.0, 0.0, 0.0,
     0x1.dddba1728f60ep-997, 0x1.1fceddab76e03p-719, 0.0, 0.0, 0.0,
     0x1.dc18f5388421cp-137, 0.0, 0x1.1e956462ebb9ap-323, 0x1.82ddabb25277p-703, 0.0,
     0.0, 0.0, 0x1.1c7bad7624fd3p-285, 0.0, 0x1.d82e34c398938p-638,
     0x1.9660db654decap-86, 0.0, 0.0, 0x1.680fef43382ep-232, 0.0,
     0x1.782a36be3f5e6p-565, 0x1.339d77a8df0b6p-862, 0x1.785cb74e59d3ep-1022,
     0x1.c75e0fa31652cp-817, 0x1.b123b8ac1bf7ep-697, 0x1.c8bc3ca6c6f84p-838,
     0x1.535d02d6e9665p-102, 0.0, 0x1.14295753f0997p-543, 0.0, 0x1.804e4db2799a4p-480,
     0.0, 0x1.d5224152aeabap-902, 0x1.a691829526ad1p-595, 0x1.35a62b7058cdbp-842,
     0x1.674361030828cp-796, 0x1.1d5ee95c752bp-255, 0x1.76b6afc85de8cp-430,
     0x1.5d21c4129a185p-398, 0.0, 0.0, 0.0, 0.0, 0x1.73647c6572696p-377, 0.0,
     0x1.ff026bfa7744ep-234, 0x1.e7bd21d2bb56fp-195, 0x1.63a05336dd6f8p-922, 0.0,
     0x1.30e01a312e2dcp-762, 0.0, 0x1.af71a4a529a44p-183, 0x1.4cc50523a516bp-589,
     0x1.3be27be6a9c5dp-672, 0.0, 0x1.446eed1e8ba02p-327, 0x1.33ee8cbb0c6fbp-141, 0.0,
     0.0, 0x1.8adc773dfb833p-121, 0.0, 0.0, 0.0, 0.0, 0x1.a8f9a4b73394cp-880, 0.0,
     0x1.f65f458a162a1p-929, 0x1.25f8a95104c3bp-996, 0x1.c9254c2ab347p-439,
     0x1.af7f116a491fp-812, 0.0, 0x1.b1a102c5d34d8p-43, 0x1.c685de98ae249p-993,
     0x1.0f14489173e1ap-882, 0.0, 0.0, 0.0, 0x1.8dae4d604f159p-156,
     0x1.1fb4434f610a2p-295, 0.0, 0.0, 0x1.4cc826175d9dep-29, 0x1.adabcf2edbd36p-760,
     0x1.003f34afb7442p-415, 0.0, 0.0, 0.0, 0x1.b2a56168c3a7dp-732, 0.0, 0.0,
     0x1.6553799baa09fp-3, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e3f7277cb747p-1015, 0.0, 0x1.2efd0fc1e56d4p-334, 0.0,
     0x1.209455276d051p-945, 0x1.3d6f254498e89p-481, 0.0, 0x1.6649abd5fb335p-962, 0.0,
     0x1.406bd2eaf0694p-351, 0x1.b24127f844851p-249, 0x1.27d3aa91136ap-5, 0.0,
     0x1.8df1742097055p-804, 0x1.12c04a5254113p-259, 0x1.4a91407fe2d38p-211, 0.0,
     0x1.50becf3a23348p-946, 0.0, 0.0, 0x1.a87970eebaeb9p-689, 0.0, 0.0,
     0x1.0e190fb808573p-192, 0x1.a526925ed9569p-743, 0x1.480c8d8748a25p-841, 0.0,
     0x1.12a0cf810990fp-383, 0x1.0c8efe92578d9p-56, 0x1.5c37379dd7321p-983, 0.0,
     0x1.be0039c572d77p-570, 0.0, 0.0, 0.0, 0x1.190fd25907bbbp-981,
     0x1.24dea71553846p-537, 0.0, 0.0, 0.0, 0x1.1ab356510c4cep-666, 0.0, 0.0,
     0x1.fd80a124038dap-70, 0x1.1ca74682786f7p-923, 0x1.412d4e4069ec7p-523,
     0x1.bb2e712033e74p-614, 0x1.95361a8c4c3e7p-647, 0x1.b3f1b9f4e586dp-445, 0.0, 0.0,
     0x1.9e5fd347fb60dp-354, 0.0, 0x1.dee48a9f33d86p-738, 0x1.d20d83941f678p-35, 0.0,
     0.0, 0x1.0a48649aa346dp-650, 0x1.656b558ee6e84p-929, 0.0, 0.0,
     0x1.516c692a03034p-952, 0x1.408858539b7dcp-988, 0.0, 0.0, 0.0,
     0x1.c576397d193a3p-392, 0.0, 0x1.a9e662953c2afp-259, 0.0, 0.0, 0.0,
     0x1.7bc9810628cccp-72, 0x1.166c8e3bd9512p-913, 0x1.31277ec6e7fc5p-568, 0.0, 0.0,
     0x1.9123f6f739803p-447, 0.0, 0x1.2b15046e0d2dp-463, 0x1.289e1dd0bfd67p-205,
     0x1.751f36996537ep-5, 0.0, 0x1.8915239bd9b3bp-375, 0x1.9bab89e0ba1f1p-638, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e598ad7aebfcp-390, 0x1.37860b99cd29ep-946,
     0x1.e635db1f69de8p-374, 0x1.85d4b82c35a8ap-615, 0.0, 0x1.af3cdc74f9405p-805, 0.0,
     0x1.9bd74baf71f18p-292, 0x1.bd622233eee19p-584, 0.0, 0x1.46ea628469231p-461,
     0x1.05a591fbb6ed8p-758, 0.0, 0x1.51d99478958cbp-622, 0x1.c19cfb7662121p-764,
     0x1.412e3d3712026p-119, 0x1.53d5f972dc30dp-100, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e395ce3fd6f7p-315, 0x1.e3320bf12050fp-311, 0x1.58ba25be4ea1p-93,
     0x1.a428d34ee84b6p-595, 0.0, 0x1.612ae0f548665p-439, 0.0, 0x1.47036df34268dp-600,
     0.0, 0.0, 0x1.f0d11b75f191bp-691, 0x1.0a8db8356393ep-841, 0.0,
     0x1.089899d5a7ef2p-809, 0.0, 0x1.2fff9446b62acp-755, 0x1.4abc57ea0c979p-362,
     0x1.283a8fdba3421p-36, 0.0, 0.0, 0x1.d450b490bc6ddp-949, 0.0, 0.0,
     0x1.35ee25cced3bdp-190, 0x1.b94ea111873a7p-54, 0x1.e3824e680b85p-686, 0.0,
     0x1.b5190adc1f5b7p-638, 0x1.c61f254fdbd1cp-11, 0x1.07ac0b61efabdp-739,
     0x1.9ffdfb564078ep-21, 0x1.c1d6e4f666251p-325, 0x1.27827a346e3bp-968, 0.0,
     0x1.e7c1ff2c1f286p-673, 0x1.3a60dfa6de885p-277, 0x1.ec807876969d7p-759,
     0x1.75ca95383f88fp-451, 0.0, 0.0, 0x1.c493b0656affap-273, 0x1.ff723438cab23p-201,
     0.0, 0x1.00289f500aefdp-167, 0x1.a07464080298fp-338, 0.0, 0.0, 0.0,
     0x1.ba7308de39898p-424, 0.0, 0.0, 0x1.8a5b0234b4a34p-540, 0x1.ae270a0f4fb3ap-341,
     0x1.88757b3e0ac8cp-739, 0.0, 0.0, 0.0, 0x1.4e65f9e3d388bp-327, 0.0,
     0x1.ab176180b1cc6p-864, 0.0, 0x1.013cbac3eb623p-246, 0x1.deee7dcb0c045p-747, 0.0,
     0.0, 0.0, 0x1.5f5c85e961e63p-548, 0x1.1434da4d56817p-273, 0x1.e17ca31fe95c1p-866,
     0x1.4156686587d97p-297, 0x1.a4714cfca20ecp-996, 0x1.b271d37c0b43fp-812,
     0x1.0c64962cbac64p-162, 0x1.b5ade5c23f62cp-876, 0x1.a545c51716911p-920,
     0x1.1f853180f122p-437, 0.0, 0.0, 0.0, 0x1.ada127547d77fp-687, 0.0, 0.0, 0.0,
     0x1.eec520e32a4c7p-442, 0.0, 0.0, 0x1.203835d91a2a8p-905, 0x1.f1ed18b52d2f4p-644,
     0.0, 0.0, 0x1.78ba57ea7d1ccp-960, 0.0, 0x1.6318f5c089eb6p-534,
     0x1.6f20a85a6ae55p-827, 0x1.770f89a27c6a8p-4, 0x1.06dfcda02fa54p-606,
     0x1.633829ad91e43p-427, 0.0, 0x1.66ada8cef614ap-397, 0.0, 0x1.66c889f4c2cb6p-42,
     0x1.02965a484634dp-691, 0.0, 0x1.e7afc1bb1358cp-894, 0.0, 0.0,
     0x1.11d7c2c1a34e8p-618, 0.0, 0.0, 0.0, 0.0, 0x1.83918e0c002b9p-24, 0.0,
     0x1.fdc8dbfbdf074p-225, 0.0, 0x1.7a146f33254c2p-820, 0x1.3646f314b5036p-751, 0.0,
     0.0, 0x1.1c2917068b391p-554, 0.0, 0.0, 0x1.0131db8e8a736p-576, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d82b6fc7454b9p-641, 0.0, 0.0, 0x1.252fe9433360cp-653,
     0x1.f6308fb6c3557p-57, 0x1.8ed1c30da5e8dp-680, 0x1.7fa73a2d9dc99p-693, 0.0,
     0x1.031d0592ec7e1p-666, 0x1.a6de960302bf7p-126, 0x1.fce3c8121746ep-391, 0.0,
     0x1.8edb59a634799p-598, 0x1.89d2f9fd66f39p-495, 0.0, 0.0, 0.0,
     0x1.6704f8635a911p-313, 0.0, 0.0, 0x1.a9940e389f5cfp-316, 0x1.5da3e2883f19ap-177,
     0x1.846ff22f4c575p-417, 0.0, 0.0, 0x1.7885bc84a44e8p-882, 0x1.6d140e596618ap-536,
     0x1.505a6c7e78aap-782, 0.0, 0.0, 0.0, 0x1.f8243e2314f7bp-699,
     0x1.3cf197ea12b36p-1000, 0x1.1ed3ae8cb5251p-491, 0.0, 0x1.44794ad3448bp-947, 0.0,
     0x1.1296f6ab85d62p-421, 0x1.91bcfb1cf6653p-128, 0.0, 0x1.7d23cd2785403p-788, 0.0,
     0.0, 0x1.7a82d79e93b67p-517, 0x1.5eba99866721ap-830, 0.0, 0.0,
     0x1.fc26cd4caabd3p-627, 0x1.203e5347e3e73p-756, 0.0, 0.0, 0x1.37899fc55e8dep-81,
     0x1.ab806e1781cbp-610, 0x1.b71ae822f784bp-329, 0x1.527e211f44cf1p-808, 0.0,
     0x1.c148cba59cbcbp-363, 0.0, 0.0, 0x1.c51329338a06ap-851, 0x1.3d0f1f0cfde75p-59,
     0x1.1af9be3b9d416p-220, 0x1.395c03ff4b063p-424, 0.0, 0.0, 0x1.fc0f975308e43p-790,
     0x1.3df915742a18bp-204, 0.0, 0.0, 0x1.309dcd2244793p-21, 0x1.3320dc9f218dcp-376,
     0x1.33b126fc1dbf2p-893, 0.0, 0x1.9f41064b32aeap-139, 0.0, 0x1.85d44715b06bfp-454,
     0.0, 0.0, 0x1.ffa98bbe48579p-128, 0.0, 0x1.74bc034fc2e8p-140, 0.0, 0.0, 0.0,
     0x1.c2fe5894536b7p-924, 0.0, 0.0, 0x1.14e75de424009p-181, 0x1.ca313c06c8c46p-859,
     0.0, 0.0, 0.0, 0x1.1978cc8ff9681p-12, 0.0, 0x1.08ebf4fb8fbd7p-635, 0.0, 0.0,
     0x1.2be739bc1edc9p-910, 0x1.0eab5373015dep-513, 0.0, 0.0, 0.0,
     0x1.d0221a3eca612p-482, 0x1.c46a5afbab29ap-534, 0x1.55f7c29b82cbcp-616, 0.0,
     0x1.bb95d902d11bcp-911, 0.0, 0x1.30be064c65958p-102, 0x1.bd421157245e5p-962, 0.0,
     0x1.ae8e2176d83dp-936, 0x1.5d4774b6d76bfp-60, 0x1.ef34b7a244c17p-478,
     0x1.ebc025e56b80dp-123, 0x1.a14408e2945a1p-158, 0.0, 0.0, 0x1.5d568101cab0bp-446,
     0x1.c052a533c49e5p-989, 0x1.0ba49da09cd5p-562, 0.0, 0.0, 0.0, 0.0,
     0x1.741e9fb4f180fp-46, 0x1.65e5322a40e36p-844, 0x1.a408891092863p-793, 0.0,
     0x1.bf7bf4fae9c9bp-323, 0.0, 0x1.e64e2fdca67ecp-313, 0.0, 0.0, 0.0, 0.0,
     0x1.14e942eed991ep-977, 0x1.98f4725730335p-11, 0x1.5f56efa30e1acp-27,
     0x1.047c1b40dc257p-61, 0x1.45d02cc6dbd6cp-557, 0x1.20bc86a04ebacp-976,
     0x1.e94d37832b8a4p-680, 0x1.ff704d31bc5d6p-711, 0.0, 0x1.7e53cda2b677dp-937, 0.0,
     0.0, 0x1.2288763614212p-64, 0x1.e68ca8708e578p-398, 0x1.1a0c681222616p-77,
     0x1.bd972e2b9f011p-96, 0.0, 0x1.891c2a64e9af1p-173, 0.0, 0x1.37c3f9fb97df2p-446,
     0x1.fd2329d631d5dp-847, 0.0, 0x1.557c8efa565c8p-690, 0x1.e7cc790d70ebep-406,
     0x1.bb438bfed1f7bp-581, 0.0, 0.0, 0x1.3ecf7cfbc819ap-117, 0.0, 0.0, 0.0,
     0x1.aedfd2fd55c64p-380, 0x1.6e42aa80bb24dp-184, 0x1.dcf5733c2efe5p-297,
     0x1.93b4fc23ac0fcp-771, 0x1.512069f11294cp-725, 0.0, 0x1.0932f4a7ad785p-447, 0.0,
     0x1.15dd19600fb7bp-215, 0.0, 0.0, 0x1.74ab4520de48ap-806, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.572aa9ad1f44bp-980, 0x1.ac6a54ba51fdap-131, 0x1.60c5c0d62f311p-136, 0.0,
     0.0, 0.0, 0x1.9db62542ef305p-423, 0x1.0c3f59b19014dp-514, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c02e733baf0afp-922, 0x1.36108f018b258p-258, 0.0,
     0x1.400ec2382b9bp-831, 0x1.17845f0f685fep-885, 0.0, 0.0, 0.0, 0.0,
     0x1.0f969836b129ap-229, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f7b9948d922dp-195, 0.0,
     0.0, 0x1.2a55c1b78fadbp-35, 0.0, 0x1.77bd7572daca8p-891, 0x1.d569dd07c0477p-447,
     0x1.541533a21876dp-344, 0.0, 0.0, 0x1.b385db007b05ep-453, 0x1.4bc281a2c26c3p-316,
     0x1.a683afaa07b46p-729, 0x1.c48a3321fead9p-505, 0.0, 0x1.63110476a5432p-13, 0.0,
     0.0, 0.0, 0x1.bfb61aaa8938dp-750, 0x1.d7e5d85052769p-569, 0.0, 0.0,
     0x1.dfcbc2ec2df83p-324, 0x1.9998168a1fd5ap-776, 0x1.be626c06a88d6p-473,
     0x1.424e1ae0ac302p-231, 0x1.81e4e9397bf45p-579, 0.0, 0x1.e8e84362934cep-14,
     0x1.c54cdd1f3d684p-405, 0x1.5060e1bd4357cp-975, 0.0, 0.0, 0x1.66bbca509945ep-27,
     0.0, 0x1.a21c8f11c4a8bp-1013, 0x1.808d5bfbe87ccp-246, 0x1.822767939d8c9p-190,
     0x1.089a5e68dedbbp-696, 0.0, 0.0, 0x1.284abeadf3d27p-292, 0.0,
     0x1.fa4f19b086381p-388, 0.0, 0.0, 0x1.4154516a349dcp-724, 0x1.eec70c0e71691p-914,
     0x1.dfd6746fe0c5ap-679, 0.0, 0x1.9e9de894d30b3p-399, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0c5b9613e361bp-995, 0x1.d956dbf3a8f9fp-467, 0.0, 0.0, 0.0,
     0x1.b783a5b6ec94bp-111, 0.0, 0x1.66cb7cdaaa4cfp-1015, 0x1.4f6ad9df726c4p-637,
     0x1.3d56515f2eb2dp-747, 0x1.c1bd9a6a60192p-411, 0x1.b562676f5fd0ap-673, 0.0,
     0x1.2f8805c3f774ap-675, 0x1.35ee92a3db384p-873, 0.0, 0x1.07b484dffd0e1p-892, 0.0,
     0x1.3fd363c2da12ap-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78255ca009dc5p-128,
     0x1.c76cd88239c7ap-338, 0.0, 0.0, 0.0, 0x1.442a94271e215p-56,
     0x1.5f5f7424d952fp-348, 0.0, 0.0, 0x1.67a1ca984b9cfp-979, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.08f6ef6da5eb9p-17, 0.0, 0x1.84ac9e034baf6p-159, 0x1.1f04374c40136p-398,
     0.0, 0x1.2a9a8cfe1a18ep-783, 0x1.42bc37237a45fp-43, 0.0, 0x1.547bb7bda8b07p-645,
     0x1.f5a232e336264p-223, 0x1.19b1ff328d418p-894, 0.0, 0x1.6c5a11fddaccbp-145, 0.0,
     0.0, 0x1.22cde200031ecp-176, 0x1.1d8f2d1a9c902p-395, 0.0, 0.0, 0.0,
     0x1.a4ef54f257fe6p-755, 0.0, 0x1.cb773b5bff611p-412, 0x1.d05cff1701d0cp-230,
     0x1.0b956dd0d0119p-580, 0x1.a38af6e63ee1dp-19, 0.0, 0x1.19f0790399dabp-335,
     0x1.ec1ca245d2cap-732, 0x1.ebbd094613b9ep-179, 0x1.be66913724b55p-416, 0.0,
     0x1.3cfcb04e9541ap-331, 0x1.d5c10c5e647a5p-540, 0.0, 0x1.4e8264ef3519ap-694, 0.0,
     0x1.434015b77cfd8p-36, 0.0, 0x1.061c1b0afead5p-744, 0.0, 0.0, 0.0,
     0x1.64c582296da66p-157, 0.0, 0x1.56895c0301707p-574, 0x1.7247a6d2dd608p-312, 0.0,
     0.0, 0x1.c139b0246ec77p-750, 0x1.096bcd71e9361p-288, 0.0, 0x1.b06ebb2d533bap-362,
     0x1.a5b60fbd0396ap-9, 0x1.2e385213695d3p-124, 0x1.5d8fe6a675809p-812, 0.0, 0.0,
     0x1.9c6643a1a0067p-69, 0x1.7116dd69e892p-397, 0.0, 0x1.84ff54987ac6ep-253,
     0x1.da7af32cfd9a8p-515, 0x1.8ea306e38408bp-958, 0x1.53bcc05d6ac4p-804, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ddff1e7db40eep-148, 0x1.1a1e08c1d357fp-266, 0.0,
     0x1.567d7f801d167p-780, 0.0, 0x1.4f1f6d9a77264p-755, 0.0, 0.0,
     0x1.1c6e72539b903p-225, 0x1.3df1f046ce505p-645, 0x1.ecb46db8fec4bp-879, 0.0, 0.0,
     0x1.6eee310082b6bp-166, 0.0, 0.0, 0.0, 0x1.466a487f10dafp-832, 0.0, 0.0,
     0x1.41e50b8e77ba7p-129, 0.0, 0x1.67bf1ff7bb07cp-27, 0x1.4e64589b316cbp-438,
     0x1.467177d71f459p-368, 0x1.1a5fd92fad59fp-107, 0.0, 0x1.5521f3bc07beap-342, 0.0,
     0.0, 0x1.138caf58992dep-212, 0.0, 0.0, 0x1.3fc9f07094eb5p-57, 0.0,
     0x1.68923f08711c5p-713, 0.0, 0x1.c9bbea3b496d8p-926, 0x1.25bf683515798p-971,
     0x1.04347f46fa71p-282, 0x1.724d54880c912p-373, 0x1.3aa0282fa2592p-674,
     0x1.88c3543247836p-676, 0x1.d56e939d3f602p-968, 0.0, 0.0, 0.0,
     0x1.1a01a06116c69p-727, 0x1.1a1fd2624c3fcp-975, 0x1.34d1b24138bep-474,
     0x1.1f35663fb3be1p-755, 0x1.7494223300f3bp-538, 0.0, 0x1.345009d1efe95p-145,
     0x1.22199620d3abbp-880, 0.0, 0.0, 0x1.d6a4723c1e362p-656, 0.0, 0.0, 0.0,
     0x1.a4bfad6320a6fp-95, 0x1.f8a750514e341p-276, 0.0, 0x1.24036c2d5eecdp-703,
     0x1.51f3aeb6c85b2p-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51a28935fc3ap-532,
     0x1.b1e2e910ae177p-126, 0.0, 0.0, 0.0, 0.0, 0x1.a01b3d2820ee1p-656,
     0x1.29136c2ed240dp-783, 0.0, 0.0, 0.0, 0x1.643e7aa1b89ebp-676,
     0x1.9b48a3d743131p-546, 0x1.5ed00109b80a7p-763, 0.0, 0x1.6e1872e25b78ap-145, 0.0,
     0x1.4fa5492af51e1p-696, 0x1.244ea8bab9ff7p-511, 0x1.57746b5a0e784p-487, 0.0, 0.0,
     0.0, 0.0, 0x1.c8b8e7eccb4dbp-903, 0.0, 0.0, 0x1.53fb5e69c57e5p-631, 0.0,
     0x1.e4a768aefef34p-106, 0x1.b16fb55f5a66bp-524, 0x1.1b50558b79607p-642, 0.0,
     0x1.ea8e62996e0fep-130, 0.0, 0x1.fe37587a6b7ddp-999, 0.0, 0.0, 0.0, 0.0,
     0x1.68d7b50a16262p-11, 0x1.7e09a0933599fp-281, 0.0, 0.0, 0x1.8e7cfd5e4920cp-71,
     0.0, 0x1.582dd8a0a3396p-835, 0.0, 0x1.a8e35606e4f38p-730, 0.0,
     0x1.cf3196b3dfd6bp-740, 0x1.abe431996f53bp-794, 0x1.32bbd236f4ef3p-254,
     0x1.822f881a0bda8p-456, 0x1.b948010301eaep-358, 0x1.2325d17aefe03p-81,
     0x1.7ace095f4a1b4p-191, 0x1.74102f2db85cfp-360, 0x1.cb75b526faf21p-695,
     0x1.b3240106d2804p-827, 0.0, 0x1.b9cc6878cc4fdp-130, 0x1.a4c05be96951ep-880, 0.0,
     0x1.2db01d6483cd1p-611, 0x1.b213ade4ff36dp-411, 0x1.7331b175e752p-340,
     0x1.2346b8a8c3b35p-897, 0x1.9ebeba58d0411p-249, 0.0, 0.0, 0.0,
     0x1.db5f550de4897p-821, 0.0, 0x1.7b7c33f395b9dp-667, 0.0, 0x1.16d5aca351aa9p-881,
     0.0, 0.0, 0.0, 0x1.a338b3d982661p-497, 0x1.52a3c2c112716p-852,
     0x1.1f0e89a3f3de6p-1004, 0x1.ad96561c43d54p-198, 0x1.18b98c166b1bep-923, 0.0,
     0x1.b2eaf59d9283cp-515, 0.0, 0x1.80c58e87c45f1p-482, 0.0, 0x1.641b63d40ade8p-911,
     0x1.1675c2776c776p-25, 0.0, 0x1.8fe598f9a1df2p-507, 0x1.184cd52a19b78p-10, 0.0,
     0.0, 0x1.2b1d0dbe39563p-546, 0.0, 0x1.4ade8e7f44246p-619, 0x1.5c420f6038cadp-757,
     0.0, 0x1.08d5c5b1a07e5p-656, 0.0, 0x1.df88df49aaca3p-829, 0x1.e882e83f2732ap-42,
     0.0, 0x1.ed3b91a4e989ep-454, 0.0, 0.0, 0x1.60cc8dc1f42cfp-306,
     0x1.c08ddec75e52ep-500, 0.0, 0x1.47f649f972994p-944, 0x1.b9410f20793bdp-192,
     0x1.3d451618b1e74p-718, 0.0, 0x1.6f42a3c781276p-858, 0.0, 0x1.3bfa446632bdcp-437,
     0x1.1f09aa54d8aa3p-577
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
            tmp1 = Sleef_logd4_u10kvx(tmp0);
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
    printf("Sleef_logd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_logd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
