/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpd1_purecfma.c --function \
 *     Sleef_frfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.95c6d4290e19fp-932, 0.0, 0x1.b9a616ce1bf5bp-926, 0.0, 0.0,
     0.0, 0x1.5eb3662c82493p-807, 0x1.84c2d9bad9285p-852, 0.0, 0x1.42000a5cdc32ep-302,
     0x1.fe59a98e38117p-476, 0.0, 0x1.6813e09f139aep-143, 0.0, 0x1.6d4c51edd98acp-996,
     0.0, 0x1.84a0332a0df37p-990, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66c554b39acf3p-762,
     0x1.9ccc6bd2ef0dap-226, 0x1.5bdd7e4609b8dp-75, 0.0, 0.0, 0x1.b2caf084a4faep-263,
     0x1.0ebbabee0aec1p-909, 0.0, 0.0, 0x1.79b5b826a37e1p-885, 0.0,
     0x1.0e0ece22b74dbp-515, 0x1.2fa60e8f3e303p-633, 0x1.7b55db6d4b01ap-465,
     0x1.7f157bd52e2aep-715, 0x1.c4d7d979f4f0cp-38, 0.0, 0.0, 0x1.790b71c8d7c5bp-575,
     0.0, 0x1.62ee931445d8p-201, 0.0, 0.0, 0.0, 0x1.63a1d4537c6ffp-189,
     0x1.9c79c840faa85p-414, 0.0, 0.0, 0.0, 0x1.2d58e48f3f465p-634, 0.0,
     0x1.499e6e1ad2af7p-147, 0x1.792b73862508dp-625, 0.0, 0.0, 0x1.d738b7b100fb7p-528,
     0x1.0da72c2ae4c8bp-910, 0x1.cbe9733854563p-255, 0x1.425729c524e7p-938,
     0x1.02fbaf7ae0a52p-21, 0.0, 0.0, 0x1.5f64d8b076dffp-374, 0x1.7b28f80f448acp-490,
     0.0, 0x1.8ec4f8132c685p-589, 0.0, 0.0, 0x1.defefbd3abb7p-878,
     0x1.30c87c5d46daap-913, 0x1.91c61aaeeb577p-787, 0x1.0645a0a82168dp-698, 0.0,
     0x1.7aed333608f24p-452, 0.0, 0x1.d99587d1ffbefp-971, 0x1.bdd308e68855fp-506,
     0x1.0400c0e831145p-208, 0x1.34238e8938c9fp-725, 0x1.d744d196ef229p-941, 0.0, 0.0,
     0.0, 0x1.7a83eba001468p-128, 0x1.020efb94206bep-9, 0x1.1f9a758e0093dp-392,
     0x1.4c12f0200172dp-753, 0x1.b0b05477684efp-654, 0x1.c16b2bc602a1bp-311, 0.0,
     0x1.9225950de8a01p-572, 0x1.63f8cd3837fa6p-274, 0x1.44fd29c9ce996p-837, 0.0, 0.0,
     0.0, 0.0, 0x1.452f62bef2e31p-306, 0.0, 0.0, 0x1.5e4de3bff8ed3p-1020, 0.0,
     0x1.1282e6d678742p-675, 0x1.b6f9bf37de597p-396, 0.0, 0x1.638986452dc4cp-640,
     0x1.a6d165aecfe87p-271, 0.0, 0x1.463ada23f7ad8p-617, 0x1.67796bb8248acp-560, 0.0,
     0.0, 0.0, 0x1.1ca973c60fcafp-973, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e3372e33180f1p-503, 0.0, 0x1.60855ee7082bap-254, 0.0, 0x1.f019c20b6d88dp-295,
     0x1.b11036b0a3713p-778, 0.0, 0.0, 0.0, 0x1.16ecc52ceb271p-527, 0.0, 0.0,
     0x1.22f703fcd893dp-663, 0.0, 0x1.6779879b45b3dp-148, 0.0, 0.0, 0.0, 0.0,
     0x1.2ef961c76435dp-813, 0.0, 0.0, 0.0, 0x1.ee1cc40a232bdp-165, 0.0, 0.0,
     0x1.8608eacd0e58cp-403, 0.0, 0.0, 0.0, 0x1.b49e29783ff21p-37, 0.0, 0.0,
     0x1.6cd1d52fbbdf7p-554, 0.0, 0.0, 0x1.88bcbe5939b4ap-475, 0x1.844b8c69c67c9p-696,
     0.0, 0x1.86aaf36233772p-302, 0x1.4198f6ea7c749p-498, 0x1.7199486dfe0f1p-968, 0.0,
     0x1.c8b63dd13226cp-8, 0.0, 0.0, 0.0, 0x1.581a69705787dp-244,
     0x1.bfc36cf35e681p-737, 0.0, 0x1.0954646da08adp-372, 0x1.9924e5c295f48p-779,
     0x1.fdd31661c9e5cp-653, 0x1.01aef6fb987afp-516, 0.0, 0.0, 0x1.2d085a65df266p-430,
     0.0, 0.0, 0x1.5253392bf94ecp-543, 0x1.75eda663448d6p-335, 0.0, 0.0, 0.0,
     0x1.19d7b0ff2a1abp-660, 0x1.9c23b0530d61bp-618, 0x1.a7bbc601e28bbp-700, 0.0, 0.0,
     0x1.a7159ced3d143p-470, 0.0, 0x1.1440b824f757dp-596, 0x1.9298a431d4326p-754, 0.0,
     0x1.d3aebd73fa3p-551, 0.0, 0.0, 0x1.bc0dbc8f4749p-353, 0x1.dc272cb5b02e2p-406,
     0.0, 0x1.5e231da509253p-928, 0.0, 0.0, 0x1.269aa83b9272fp-786, 0.0,
     0x1.8db0bdb83cb0fp-175, 0x1.b7b1c7a8ba51dp-664, 0x1.3bf3dad6ee33ep-284,
     0x1.f11550194da63p-11, 0.0, 0.0, 0x1.bc6795647a21bp-914, 0.0,
     0x1.bd5ec34ed0e88p-311, 0.0, 0x1.e81a9bdc7541cp-58, 0.0, 0x1.a9cd9015ba85ap-723,
     0.0, 0.0, 0x1.ac94495e9c69fp-696, 0x1.f1c1c1960aacep-56, 0x1.bf0b00e1557c7p-929,
     0.0, 0.0, 0x1.7a8c23d8f0b29p-206, 0x1.003b884265e62p-999, 0.0,
     0x1.ae4774f511948p-391, 0.0, 0x1.5952a91d50a31p-748, 0x1.36ca63f0e626bp-143,
     0x1.c0a51ea9f1a3bp-809, 0.0, 0.0, 0x1.cb4d4244f4997p-64, 0x1.4fde98215f796p-989,
     0x1.f8ca928f2eedbp-852, 0.0, 0x1.4ad53dc9a1a8bp-63, 0.0, 0.0,
     0x1.d49bcdb65857fp-567, 0.0, 0x1.b7c93406b76d5p-388, 0x1.f86a16c19f7b5p-713, 0.0,
     0x1.907646b76dbe2p-443, 0.0, 0.0, 0x1.5810b5939ce1ap-734, 0x1.0145467e0781cp-462,
     0x1.a0afc203dde7cp-128, 0x1.b4859de5c0e0dp-987, 0x1.a96a62458692dp-681, 0.0, 0.0,
     0x1.bf34381d50a62p-127, 0x1.02d02edda3693p-496, 0.0, 0x1.1b2bc716ce507p-792, 0.0,
     0.0, 0.0, 0.0, 0x1.ba1698f8e33fap-963, 0.0, 0.0, 0.0, 0.0,
     0x1.615ee00804d1cp-459, 0x1.48ef43a18fa06p-266, 0x1.619d23f56959bp-18,
     0x1.8aa8a6dbbf057p-733, 0.0, 0x1.c79060abc67f4p-472, 0.0, 0.0,
     0x1.b777c15ff9b23p-834, 0.0, 0x1.862cf0221f694p-907, 0.0, 0x1.c7c5171dcc87cp-225,
     0x1.bb9418e1e044bp-796, 0.0, 0x1.2c9a4155c90bcp-450, 0x1.8b64c6d0341cfp-123, 0.0,
     0x1.10302f420a994p-708, 0.0, 0x1.f9f14b58773ddp-459, 0.0, 0.0, 0.0,
     0x1.eca009e8fd03ep-416, 0x1.280419d47ea89p-992, 0.0, 0.0, 0.0, 0.0,
     0x1.d9d6981797dfdp-764, 0.0, 0.0, 0x1.62b416d264f68p-82, 0.0,
     0x1.543d2fb888077p-211, 0.0, 0x1.2522fa7ec3e0fp-573, 0x1.d8df31a0ff65cp-415, 0.0,
     0x1.86fd0e83c34e7p-979, 0.0, 0.0, 0x1.d6d71916011abp-50, 0.0,
     0x1.3f353bc0cb14ap-543, 0x1.09e02285852a6p-619, 0.0, 0x1.66e9377f752bdp-828, 0.0,
     0.0, 0x1.03dfb53bb5e2dp-890, 0x1.fecb669bb2b18p-34, 0.0, 0.0, 0.0, 0.0,
     0x1.b82b5f76245b3p-77, 0x1.79692d82d2cdp-569, 0x1.46914b0d8aff2p-237, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f1aeebcb73d94p-9, 0.0, 0x1.00a3a2c07cbbcp-226, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a9e0bcaef11fbp-870, 0.0, 0.0, 0x1.3b6c909109c18p-250,
     0x1.0e9b2f0b49d7ap-393, 0.0, 0.0, 0.0, 0.0, 0x1.37f90e1cad3bep-157, 0.0, 0.0,
     0.0, 0x1.4a705cf013914p-706, 0x1.cd384d8da2e72p-917, 0.0,
     0x1.7562cda7e0dbap-1010, 0.0, 0.0, 0.0, 0.0, 0x1.094c7d13eed32p-543, 0.0, 0.0,
     0.0, 0x1.0b2e49e38b29ep-444, 0x1.27f8a95a5b98bp-5, 0.0, 0x1.d4c257bd60733p-578,
     0.0, 0.0, 0.0, 0x1.5712551d7dc37p-748, 0x1.2e7e584af5bd9p-385, 0.0,
     0x1.5a77b3c0e568fp-252, 0x1.eea401b51451fp-904, 0.0, 0.0, 0x1.cf879592b06c4p-165,
     0x1.b469475a39e78p-459, 0x1.51cb0b3378f1p-164, 0.0, 0.0, 0.0,
     0x1.fc3ebc036edb3p-172, 0.0, 0x1.01c03429f349fp-756, 0.0, 0.0, 0.0,
     0x1.3ed82d18e16ebp-57, 0.0, 0.0, 0x1.f6eb47339fc25p-680, 0.0,
     0x1.02e6626ce313fp-312, 0.0, 0.0, 0.0, 0x1.f2c193f1016fcp-610,
     0x1.0205756ae844fp-488, 0.0, 0.0, 0.0, 0x1.5fdf7cc926cf5p-233,
     0x1.511721819cb8ap-908, 0x1.82f8e9889d79ap-246, 0.0, 0x1.9d9e1eafb7b59p-421,
     0x1.833e5d5b4427dp-335, 0x1.c10539c3fcdcap-534, 0.0, 0.0, 0x1.e51bb47f43396p-687,
     0x1.81478b33e925bp-952, 0.0, 0.0, 0.0, 0x1.03c4eadd679a2p-85, 0.0,
     0x1.605fb31ad0e38p-618, 0.0, 0.0, 0x1.28a6ecf7a674p-657, 0x1.f026dcb75ed4cp-666,
     0x1.2ef88df55918cp-120, 0.0, 0.0, 0.0, 0x1.943afef37feedp-475,
     0x1.fc3cc4ec051b8p-663, 0x1.5c5cb8bab90b9p-744, 0x1.aa7112f4102cap-257, 0.0, 0.0,
     0x1.63bf0436742cfp-543, 0x1.37b864a6136bap-600, 0x1.79a4376ca1a0ap-973, 0.0,
     0x1.f88f3ad9fe8bep-339, 0x1.d50a6af97b7dep-448, 0.0, 0x1.16b7bb490d047p-631,
     0x1.939b1f1dfc2a1p-640, 0.0, 0.0, 0.0, 0x1.8d514f56d7638p-939,
     0x1.42abdf90ef3c7p-123, 0.0, 0.0, 0x1.5af72e0956ebbp-827, 0.0,
     0x1.7e8f8ce51dc54p-934, 0.0, 0x1.b0881350cb7b5p-549, 0.0, 0x1.5e1043db3f386p-569,
     0.0, 0x1.42d0b564f12fap-201, 0x1.ab1edd46e8797p-499, 0.0, 0.0,
     0x1.f133b1990f3p-772, 0.0, 0x1.6e03e412c561cp-747, 0.0, 0.0,
     0x1.89f74f3958081p-855, 0.0, 0x1.9046875e3ddddp-190, 0.0, 0.0, 0.0,
     0x1.62e301c8c8c66p-752, 0x1.442ed40a33252p-626, 0.0, 0x1.5f92b40f864aap-182,
     0x1.ca1d56ae28465p-861, 0x1.aafa90464c1c9p-808, 0x1.fcf027c208045p-92,
     0x1.b20f836e61127p-396, 0.0, 0x1.747d719f393b1p-848, 0x1.4c47d3b98f7d1p-593, 0.0,
     0.0, 0x1.4cc9c96e2d65fp-276, 0.0, 0x1.10493528bc522p-313, 0x1.bdc066669eaa9p-318,
     0x1.865ee4bb791bfp-149, 0.0, 0.0, 0x1.8df19c6e2716bp-544, 0x1.361b496bf3e36p-162,
     0x1.dffae50107d4ap-860, 0.0, 0.0, 0x1.54f5950402af5p-604, 0.0,
     0x1.ba36545a6e491p-682, 0x1.19f1181835d21p-1000, 0x1.cbbfabcd3f0afp-76,
     0x1.01ae9c15a32fep-756, 0.0, 0x1.d4fad4be5d2e7p-848, 0.0, 0.0,
     0x1.d2fb377752f1p-378, 0x1.a804b700a30bcp-890, 0.0, 0.0, 0x1.aee79a9a2ac44p-141,
     0x1.30b8a3599d989p-438, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c928150fb49b1p-370, 0.0,
     0x1.d1f4f3b6db659p-908, 0.0, 0x1.dcc4549ba843ap-881, 0.0, 0x1.97612282b2813p-305,
     0.0, 0x1.779c82271de9bp-307, 0.0, 0.0, 0.0, 0x1.83814214a7265p-724,
     0x1.5d2dd9e33d9dep-80, 0.0, 0.0, 0x1.8957408e5b5fdp-913, 0.0, 0.0,
     0x1.a161b995321c5p-259, 0x1.1d0678685479ap-519, 0x1.284907aee7b35p-41, 0.0,
     0x1.304d456a8a2ffp-363, 0x1.816c3b498ded4p-399, 0.0, 0.0, 0.0,
     0x1.7b8eef5e07b0dp-507, 0.0, 0.0, 0x1.8e654cb82679ap-325, 0x1.c32ce728966e1p-965,
     0.0, 0.0, 0x1.51459d4feaec3p-607, 0x1.ef7e902879664p-707, 0.0,
     0x1.9f7e1e4b34913p-712, 0.0, 0x1.18c86297b098bp-61, 0x1.6d5dc1270105cp-50, 0.0,
     0x1.27dfbbe7a5fe7p-928, 0x1.16e5243ffc197p-260, 0x1.b5e5efe893c5p-522,
     0x1.aa4042f21fab3p-938, 0.0, 0.0, 0.0, 0x1.ac7007c7f0582p-89, 0.0, 0.0,
     0x1.e9634e4628353p-913, 0x1.eb8d9b096ae2cp-711, 0x1.cc24895ca266bp-411,
     0x1.703aba79252bp-494, 0x1.f10265a0009c8p-818, 0.0, 0x1.9a6a888afd978p-1000,
     0x1.c0cbbbd1c46f7p-987, 0.0, 0x1.6a7d630e74818p-49, 0.0, 0x1.c1f64b486911dp-441,
     0x1.2e39592c69807p-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40405061f718dp-626, 0x1.962b04173c79ep-373, 0.0, 0x1.8581b0ff0cb7dp-795, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e850a1c178ec3p-80, 0x1.93fa501e1f014p-562,
     0x1.7798f3fa1e2b7p-725, 0.0, 0x1.a02204e91397bp-728, 0.0, 0.0, 0.0,
     0x1.3aeba9075c0dep-329, 0.0, 0x1.fe93331efd048p-73, 0x1.7231a9da3ee1ap-772, 0.0,
     0x1.6239587e85c44p-93, 0x1.fe39736439285p-356, 0.0, 0x1.a7e1f55e2c3c7p-56,
     0x1.cc761a22f8541p-60, 0.0, 0x1.98ad6b9d38593p-570, 0x1.99219c697bc0dp-747, 0.0,
     0x1.8606064eee5cfp-988, 0.0, 0.0, 0x1.100c53d75f05bp-111, 0x1.680b53076d932p-691,
     0.0, 0x1.d591aa9e56e2fp-1005, 0.0, 0x1.6710b0379799fp-774,
     0x1.903839160201dp-158, 0x1.22dc74fa96771p-62, 0x1.fb67116bb5118p-609,
     0x1.ddef772d07937p-518, 0.0, 0x1.4040098ffa63bp-588, 0x1.9d27e0345185ep-513,
     0x1.175a46a6a60fp-883, 0x1.0a415f66e9b0ap-1001, 0x1.389247e741756p-975,
     0x1.91ce649f38a74p-298, 0.0, 0.0, 0.0, 0x1.5a4968170f57cp-670, 0.0,
     0x1.35db58a34a115p-54, 0x1.9a1de7423ae1bp-949, 0.0, 0.0, 0x1.9627787c3f15ep-551,
     0x1.d0b0a7e97820dp-505, 0.0, 0x1.9afeaab9af079p-575, 0.0, 0x1.0f0b48ce4a2d4p-955,
     0.0, 0x1.17d02d0aadedbp-46, 0x1.b5a467eb906ep-143, 0x1.989d83126c633p-800,
     0x1.dc840e1980a31p-478, 0.0, 0x1.233140ee45344p-342, 0.0, 0x1.9eafed001110cp-694,
     0.0, 0x1.fbb980272b28p-665, 0x1.a4987e60346e2p-940, 0x1.43b6b78ca791fp-699, 0.0,
     0.0, 0.0, 0.0, 0x1.5ab5639f8e305p-309, 0x1.df5002d8d6b8cp-425,
     0x1.bc717f6e467ebp-77, 0x1.37c0e6955233cp-531, 0.0, 0x1.83c8f3108d8cp-838, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e55f711cc7d33p-600, 0x1.0b752243eab7ap-533, 0.0,
     0x1.d52697eee977p-207, 0x1.64babd8fac9e3p-694, 0.0, 0x1.d597563d930ebp-304,
     0x1.ef434f04bc4d2p-149, 0x1.37e5b4b79c399p-254, 0.0, 0.0, 0.0,
     0x1.401945c086e19p-955, 0x1.c4dd9789bb6bbp-241, 0x1.f3042cbf02175p-122,
     0x1.4508fefa38b2cp-979, 0x1.f5bcbc38be992p-944, 0x1.d928d2d241b5bp-799,
     0x1.f91688fd8c0a8p-904, 0x1.ef8b838ba995cp-894, 0x1.a79619c7921e9p-706,
     0x1.d6a55d8d1a8f3p-613, 0x1.024446307683ap-839, 0x1.2ce2ed392f531p-240,
     0x1.d8333cac71f5p-901, 0x1.79f73b86e0a48p-366, 0x1.dcd68a0de8a6cp-886,
     0x1.fa545da379e78p-542, 0.0, 0x1.cc63d7731d276p-1002, 0x1.86f505242812ep-494,
     0x1.8190c93ffae27p-29, 0x1.d79166a88f184p-789, 0x1.b196eae569ed8p-108, 0.0, 0.0,
     0x1.2570018be0aa3p-564, 0.0, 0.0, 0x1.1242a8ab5c06bp-11, 0.0, 0.0,
     0x1.4d89a959a9663p-306, 0x1.b05d725644e38p-555, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.562bb520cd42dp-282, 0.0, 0x1.539679e179814p-593, 0x1.8e835b3acd85cp-158,
     0x1.3ea685a17582bp-305, 0x1.74c537d14c728p-331, 0x1.b8e8ef7677cc9p-49,
     0x1.2095b7be2d6abp-368, 0x1.f1118622872c9p-811, 0.0, 0.0, 0.0, 0.0,
     0x1.29122cc7e10e3p-92, 0x1.9a45527b8b21p-492, 0x1.22d0f4580eed2p-547, 0.0,
     0x1.61251ba47c642p-806, 0x1.7701fa00675bp-674, 0x1.4c20b3aec107fp-749, 0.0,
     0x1.aad84c40c4eadp-641, 0x1.44df44b8504b7p-824, 0x1.e9592c82c92f9p-1002, 0.0,
     0.0, 0.0, 0x1.a726038ebd433p-120, 0.0, 0x1.db96f5395e1e5p-559,
     0x1.6a1a825fadd0bp-378, 0.0, 0.0, 0.0, 0x1.87f9c5cabed4ap-933, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d61eddddd9831p-805, 0.0, 0.0, 0.0,
     0x1.328bf422ab2f5p-1006, 0.0, 0.0, 0x1.beae8e5c95ac4p-753, 0x1.a5b814dbae6a2p-25,
     0.0, 0x1.7393b8fd724b3p-537, 0x1.233ab597784d9p-531, 0.0, 0x1.26a443594d58ap-268,
     0.0, 0x1.699eedd748199p-554, 0x1.d3c64d60ce1d2p-168, 0x1.f062f3c4fd807p-409, 0.0,
     0x1.086a6920428b8p-498, 0.0, 0x1.bca10f485d295p-760, 0.0, 0x1.c5832968db2b1p-798,
     0x1.a9252c3b84546p-903, 0.0, 0x1.5cec4dc88175bp-783, 0x1.8d57fcc50b80dp-299,
     0x1.c07bcb47559b3p-664, 0x1.f337d6deef7ebp-275, 0.0, 0x1.cd898d5cee741p-398, 0.0,
     0x1.0905ec4f881d1p-165, 0x1.fc9b260285acbp-871, 0x1.9a1171b388cb1p-619,
     0x1.0d0aae51553aep-387, 0.0, 0.0, 0x1.2fc1c3f92923ep-605, 0.0, 0.0, 0.0,
     0x1.73437dbe09eb7p-248, 0x1.b7fee72c65d8bp-886, 0.0, 0.0, 0x1.beb07fdc8e3ebp-332,
     0x1.e5f2e09f51f6p-748, 0.0, 0.0, 0.0, 0x1.a1106f386f9b3p-422,
     0x1.1a8da43f6610ep-691, 0x1.41910365a8816p-647, 0.0, 0.0, 0x1.876b9459b1de8p-895,
     0.0, 0x1.65ce3b8f9e16fp-501, 0.0, 0x1.f5f98a78dfdacp-879, 0x1.7ba150f269c24p-510,
     0x1.9f64f02d95bbfp-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.523e10e37533ep-295, 0.0,
     0x1.bc38c5256a13ap-457, 0x1.b2d4567e7473fp-131, 0x1.363642b7ef4a2p-781,
     0x1.f75ccaa5877a2p-762, 0.0, 0x1.a25ff7ae43eb2p-316, 0.0, 0x1.775582ebc0791p-948,
     0x1.5760d2153f438p-151, 0x1.066f030cab4e2p-48, 0x1.493fedc529166p-779, 0.0,
     0x1.063a6470ef2e7p-583, 0.0, 0x1.727e3d23607bbp-120, 0x1.9d6cf85cba42ep-344, 0.0,
     0.0, 0x1.7f288fb900898p-130, 0.0, 0x1.8a13ec039a86ap-552, 0x1.fa6739e64ade9p-761,
     0x1p0, 0.0, 0.0, 0.0, 0x1.27fcb41dbef16p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.35f54c9f3f633p-395, 0.0, 0.0, 0.0, 0x1.173f000d1d84bp-93,
     0x1.5ffc0a2d2d747p-98, 0.0, 0x1.150f196246d17p-559, 0x1.0b1a21b2c172cp-164, 0.0,
     0x1.c80f2e5519e5p-203, 0.0, 0.0, 0x1.74c4e1973e818p-480, 0.0, 0.0, 0.0, 0.0,
     0x1.3fd59086000b4p-601, 0.0, 0x1.32df0f4a4be79p-903, 0x1.e50860ef0c244p-716, 0.0,
     0.0, 0x1.c1eeab0994c04p-442, 0x1.b56a8e3f079dap-201, 0.0, 0x1.7d40a0108fbdbp-13,
     0.0, 0.0, 0x1.65fff67b2292dp-679, 0.0, 0x1.30328d9b767afp-666, 0.0,
     0x1.46c2c36ba8eb6p-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.69ac43b3363c7p-833, 0x1.97c8e922b3753p-541, 0x1.c8eee2671e99bp-466, 0.0, 0.0,
     0x1.f5472baaec261p-535, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3dba4015554bp-497, 0x1.4d1274c547b08p-383, 0x1.978260019d522p-380,
     0x1.1772d5fc1faep-989, 0.0, 0x1.5177555b453a1p-133, 0x1.c1f218585a6d8p-156, 0.0,
     0.0, 0x1.d255335b28ee9p-1013, 0x1.43df1d3224779p-659, 0x1.923045a6a0f5fp-96,
     0x1.d6c803c265fb2p-277, 0x1.80d1b5071ee8ep-446, 0.0, 0x1.114f5859bbd09p-210,
     0x1.652cfee87299dp-879, 0x1.d054eb2ab2cecp-687, 0x1.236be8a449a55p-380,
     0x1.29cd2ee39a3d8p-244, 0x1.f5a3718183132p-118, 0x1.0cc9b2287201p-197, 0.0,
     0x1.366e9fd4f9f6ep-780, 0.0, 0x1.008e5e726505bp-379, 0.0, 0.0, 0.0,
     0x1.73bb7bbadb10ep-656, 0x1.419c8c1910263p-768, 0.0, 0.0, 0x1.446b80849407ep-322,
     0.0, 0x1.131520a0551dcp-185, 0x1.d15b4736d4e33p-150, 0.0, 0.0,
     0x1.6a359e5bd71fep-257, 0x1.c839140fdf0ccp-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.44307aaa6a1a8p-335
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
            tmp1 = Sleef_frfrexpd1_purecfma(tmp0);
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
    printf("Sleef_frfrexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_frfrexpd1_purecfma bench acc %la\n", global_bench_acc);
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
