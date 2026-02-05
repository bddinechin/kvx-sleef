/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd4_u35kvx.c --function Sleef_sinhd4_u35kvx \
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
     0x1.725df8f6b6fap-479, 0x1.47bfadcd531b9p-402, 0x1.e6241f76134c2p-620, 0.0,
     0x1.25daa50bba57fp-339, 0.0, 0.0, 0.0, 0x1.91ed17dcfc404p-299,
     0x1.2d0b6ae2c27cep-13, 0x1.fb1750bf2c188p-762, 0x1.702d3b927361cp-621, 0.0, 0.0,
     0x1.92350eae3dca2p-82, 0.0, 0x1.4a512e53e8c74p-746, 0x1.77069b397ffb9p-943,
     0x1.1986dcd28b775p-560, 0x1.bcff817e554f6p-835, 0x1.434a5880fb165p-927,
     0x1.cd977c6786739p-285, 0.0, 0.0, 0x1.321bb44e8db5fp-327, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d94e13cbf7223p-425, 0.0, 0x1.00294958dc579p-340, 0.0, 0.0,
     0x1.c56fffdcc8772p-226, 0.0, 0x1.9eeb3573577aap-950, 0.0, 0.0, 0.0,
     0x1.4113c3439b76p-365, 0x1.e31f3d5feb128p-303, 0.0, 0.0, 0.0,
     0x1.95dd363b2d403p-993, 0.0, 0.0, 0x1.16511c5a7ef5bp-959, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b7570c2e0875dp-381, 0.0, 0x1.7e1bd847687cep-24, 0.0, 0.0,
     0x1.f2c2b5e4fca6p-247, 0x1.3c75da2e2b24bp-972, 0x1.8ab83c9a08378p-804, 0.0,
     0x1.0c8cc06ed439ap-346, 0.0, 0x1.0dbc945cda2ecp-574, 0x1.afcb1b32a3ffbp-1010,
     0x1.64d79b85a0565p-507, 0x1.30b47ba28e3ebp-696, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.abb5b7a475e19p-451, 0.0, 0x1.9ae2357f0c922p-575, 0.0, 0x1.4067071f0f69ep-48,
     0.0, 0x1.40982fd5d7dc6p-681, 0.0, 0.0, 0x1.82591f834485bp-29, 0.0,
     0x1.7f68a5cad1263p-916, 0x1.5af00ca0daad3p-643, 0.0, 0x1.362761d2bb816p-103,
     0x1.9a881dd24678fp-735, 0x1.35502cf360911p-56, 0.0, 0.0, 0.0,
     0x1.82dade098dba7p-314, 0.0, 0x1.b048a422df86cp-642, 0.0, 0x1.173f8ead6e7fbp-986,
     0.0, 0.0, 0x1.c9bc922a4e6bcp-797, 0x1.fe3e8679556cfp-934, 0.0, 0.0, 0.0,
     0x1.611ef5bc171b5p-819, 0.0, 0x1.e68d4f7cdd368p-166, 0.0, 0.0, 0.0,
     0x1.d8d67bdf9f0fap-781, 0.0, 0x1.996520e8c8471p-998, 0x1.721d23ceab97ep-20, 0.0,
     0.0, 0.0, 0.0, 0x1.48862d9d49073p-865, 0x1.7ff450fde9c67p-181,
     0x1.ca971b0ba1a4fp-656, 0x1.f315adc924b69p-501, 0.0, 0x1.3c804c15ab402p-81, 0.0,
     0x1.fcceb8d94dee7p-770, 0.0, 0x1.3ee4f3d0da377p-215, 0x1.9cca6f7676aacp-689,
     0x1.3a9297e7da24p-776, 0.0, 0x1.654bc362c9825p-650, 0.0, 0.0,
     0x1.d8c50cb3545a6p-235, 0.0, 0.0, 0.0, 0.0, 0x1.ac83c7616129ep-178,
     0x1.91f965ae4291dp-767, 0.0, 0.0, 0x1.12c6ef9acc0e6p-846, 0x1.1bb8e9789f7acp-113,
     0x1.deeaed9f42e15p-92, 0.0, 0x1.f29c7a8b894f2p-138, 0.0, 0x1.327050b6959fep-1008,
     0.0, 0.0, 0.0, 0x1.ffbe41b1d97cfp-377, 0.0, 0.0, 0x1.955b9fc9a19b2p-261, 0.0,
     0x1.e9d529c712a65p-860, 0x1.467c9bec6d9aap-389, 0.0, 0.0, 0.0,
     0x1.5f5f989afb2b2p-634, 0.0, 0.0, 0.0, 0.0, 0x1.6c86a5cca2bb1p-377,
     0x1.0ecf2e2b68f7ap-726, 0.0, 0x1.869da56c09d18p-1006, 0.0, 0.0, 0.0,
     0x1.39f216df07aadp-713, 0.0, 0.0, 0x1.ea242fa6d9788p-7, 0x1.3416a4633e8c6p-165,
     0x1.95e3abba4433p-709, 0.0, 0.0, 0.0, 0x1.3b4e2ccb14b95p-1013, 0.0, 0.0,
     0x1.067ff31e004bap-508, 0.0, 0x1.71d4886d2d534p-156, 0.0, 0x1.e6748c5d1dbbp-691,
     0.0, 0x1.8f91b2779b7a7p-357, 0x1.703b531a5bd75p-512, 0.0, 0x1.20d7042399ef2p-370,
     0.0, 0.0, 0.0, 0.0, 0x1.1e09cb470051cp-198, 0x1.1d696071232eep-871,
     0x1.7f55f447f570cp-649, 0x1.4dc69425b73ddp-767, 0.0, 0x1.897d1645570cbp-67, 0.0,
     0.0, 0x1.b991c7a46cc44p-41, 0.0, 0x1.75f3bc3918949p-462, 0.0,
     0x1.758f38bb77a8fp-645, 0x1.5e9e03860d315p-496, 0x1.ea0f4013014bfp-232, 0.0,
     0x1.6ffb7a185f2a6p-924, 0.0, 0x1.ff5e8c3fe10dcp-584, 0x1.2b1912639ae2cp-460,
     0x1.37105f5251ab4p-619, 0.0, 0x1.e4d647ee828bep-265, 0.0, 0x1.f13cc8b301166p-16,
     0x1.7843eae3a1719p-921, 0.0, 0.0, 0.0, 0.0, 0x1.25a3830daa784p-512, 0.0,
     0x1.1950f665d4fd1p-523, 0x1.2c3b76bf60e4cp-437, 0.0, 0.0, 0.0,
     0x1.c52485141d3b1p-511, 0x1.fb79e6a548502p-454, 0.0, 0.0, 0x1.d30f4bdb524e9p-803,
     0x1.d88225bb96c04p-760, 0x1.b31f112883cd6p-193, 0.0, 0x1.876c7e7c47209p-38,
     0x1.45f9c3b6560edp-653, 0x1.038b3080e50eep-664, 0.0, 0x1.c00b87083599dp-592, 0.0,
     0.0, 0x1.463385da6a3e8p-209, 0.0, 0x1.8e7cc5c6ae552p-387, 0x1.e92ef86c76386p-81,
     0x1.4b8b5b18c7bc5p-217, 0.0, 0.0, 0.0, 0.0, 0x1.f7e752b0e7926p-543, 0.0, 0.0,
     0.0, 0.0, 0x1.025bd1a62c813p-932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ee1aeedba92dp-242, 0.0, 0x1.2b0596b8f19d3p-436, 0x1.72e96b2ce9491p-734, 0.0,
     0.0, 0x1.854f158e17a39p-733, 0.0, 0.0, 0.0, 0x1.8042b404d41e7p-622,
     0x1.0090f28b4c1b2p-462, 0x1.b080312a76deap-672, 0.0, 0x1.44020990a8bc4p-102,
     0x1.e8c61aeebf74p-296, 0x1.a7b949eb5611fp-382, 0.0, 0x1.cdf7d8c8b9a8p-163,
     0x1.8832ce11e25e4p-241, 0x1.258240043884p-846, 0x1.1a14348722c3p-1017, 0.0, 0.0,
     0x1.a31013c00b751p-19, 0.0, 0x1.6334ffa6d0f68p-977, 0x1.95e102d5264d4p-943, 0.0,
     0x1.3ad893b626a55p-1005, 0.0, 0.0, 0.0, 0x1.443590840316cp-217, 0.0,
     0x1.6e86a557e246ap-779, 0x1.4d5ae8f402dbp-228, 0x1.6d0b015fedb62p-169, 0.0,
     0x1.c63f6b4c2d01p-109, 0x1.e9b3fd7fa99cep-959, 0x1.82aa965cfabf9p-859, 0.0,
     0x1.7ee76992fec49p-725, 0.0, 0.0, 0x1.f77f134cbfb82p-716, 0.0,
     0x1.e3f39c0cd8152p-677, 0x1.9eee3da05d1e1p-533, 0x1.c97ddc672718p-222, 0.0,
     0x1.e7c72e182515dp-728, 0.0, 0x1.538675eb29253p-638, 0.0, 0.0,
     0x1.afb82337fca69p-714, 0.0, 0.0, 0x1.4c8f21436cd0ap-309, 0.0, 0.0,
     0x1.41916af913d11p-627, 0x1.82bebd07a4fefp-439, 0x1.00614e9123493p-109,
     0x1.1ed56a866115cp-736, 0x1.2b246e49d8521p-207, 0.0, 0x1.09f2fd87eda5cp-892, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7a9087ac5298p-885, 0.0, 0x1.1cfbbda12ae46p-37,
     0x1.0df1c1b4bdb6ep-494, 0x1.774651b2fde28p-119, 0.0, 0.0, 0x1.28d2afa69d65p-594,
     0.0, 0.0, 0x1.da5966979d332p-221, 0.0, 0.0, 0x1.9abf817990852p-813,
     0x1.9b128e6c6e027p-317, 0x1.029b86b7a8c12p-14, 0x1.b7db011f42bf9p-230,
     0x1.997c855c171f4p-734, 0x1.e26913d77bbc3p-390, 0x1.9dec24abde848p-490,
     0x1.d440da804650ap-76, 0.0, 0x1.dd0c3a3b5a781p-641, 0.0, 0x1.71196b700885ep-195,
     0x1.c713a3f9ea7dep-398, 0.0, 0.0, 0.0, 0.0, 0x1.df1080b9e8997p-889, 0.0, 0.0,
     0.0, 0.0, 0x1.04c4dbf1c58e7p-698, 0.0, 0x1.6c945216ed78bp-362,
     0x1.8653cfcf5307ep-3, 0x1.1c5aff83368e8p-537, 0.0, 0.0, 0x1.707e1997762b4p-368,
     0x1.375a21bbae85dp-8, 0x1.616999dcc60b9p-955, 0x1.9cc67dbe541a5p-232,
     0x1.25875c3c55849p-266, 0.0, 0.0, 0x1.e91aa8e49718dp-685, 0.0, 0.0, 0.0,
     0x1.96889e396c1b4p-942, 0x1.94b6bd04abac4p-469, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d240232c8c388p-735, 0x1.f443c848d3e4ep-109, 0.0, 0.0, 0x1.ecccdcc37450cp-58,
     0.0, 0x1.d787bb36ae578p-415, 0x1.aead3382e68c9p-527, 0.0, 0x1.a614357601161p-56,
     0x1.57dd705da9ddcp-723, 0.0, 0x1.1438892705f86p-268, 0.0, 0.0,
     0x1.1670ed8fb13bbp-193, 0x1.1ab2f17a49f4fp-679, 0x1.23830b8b0b446p-62, 0.0, 0.0,
     0x1.dd7a6a9f4fd3cp-116, 0.0, 0x1.dcc304ace6379p-184, 0x1.12c5a9d78a5ccp-376, 0.0,
     0.0, 0x1.a0752cfab348p-459, 0x1.ebed65aec9a7dp-216, 0.0, 0x1.8d9386d6edc5ap-846,
     0.0, 0x1.275a02b1d2795p-900, 0.0, 0.0, 0x1.727e0ddd7bcp-416, 0.0,
     0x1.53406cbcb628ap-190, 0.0, 0.0, 0.0, 0x1.c668fc56d8dc1p-109, 0.0,
     0x1.86415f5de8771p-629, 0x1.ec75346cc28e9p-250, 0x1.757f2607f9c5ep-738,
     0x1.ea26e4f6a7d4p-252, 0.0, 0x1.628a2f43cdbb8p-269, 0.0, 0x1.75c3bf8c86481p-841,
     0x1.0cdcae31037f4p-322, 0.0, 0.0, 0x1.a692a2396d14p-653, 0x1.7f87d2aa9e99p-2,
     0.0, 0.0, 0x1.9e30254100ab8p-399, 0.0, 0x1.a33c0eb2d4b2ap-934, 0.0,
     0x1.a63449c9096ccp-875, 0x1.aa26f101caee2p-357, 0.0, 0x1.6bc08dadcb103p-656, 0.0,
     0x1.0fcc272e9c156p-660, 0.0, 0.0, 0x1.6b71fcf91e9efp-48, 0x1.e65474c7ceb1ap-747,
     0x1.19189ae28aecap-711, 0x1.b83a343b41c7dp-269, 0x1.09584b687d479p-475, 0.0, 0.0,
     0.0, 0x1.be4aa9c2b3f21p-853, 0x1.1a0d2bbd0720bp-252, 0.0, 0.0, 0.0,
     0x1.fd21f4a33a77ap-981, 0x1.2736583a977bdp-694, 0x1.a37cbf533bf5cp-353, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.95ac42979cf2dp-167, 0.0, 0.0, 0x1.a81eb144b3756p-438,
     0x1.07933d4765df7p-969, 0x1.869564770fc93p-526, 0x1.f64bb29848f7ep-173, 0.0, 0.0,
     0.0, 0x1.7751175215e86p-818, 0.0, 0.0, 0.0, 0.0, 0x1.1a4ab4ec99375p-1002,
     0x1.2304c0e02701fp-902, 0x1.dba37b046b8c5p-319, 0.0, 0x1.0bce62042b059p-569,
     0x1.42954775f5625p-539, 0.0, 0x1.8a05cc196e825p-823, 0x1.155da9368e3fbp-11, 0.0,
     0x1.d412c15225e37p-997, 0.0, 0.0, 0x1.98af146c1c888p-546, 0.0, 0.0, 0.0,
     0x1.8aee44a0eb891p-505, 0.0, 0.0, 0x1.c58dbe9c0840bp-276, 0.0,
     0x1.376221e0a26p-166, 0.0, 0.0, 0x1.0ba5d38770b0bp-353, 0x1.d5ba276f55984p-600,
     0x1.b693b84516edcp-461, 0.0, 0x1.c4810ab573f9ap-242, 0.0, 0x1.929c740840debp-126,
     0x1.8736eac565b11p-419, 0x1.057844f4c50bap-462, 0x1.6f8beb1408aa2p-941, 0.0,
     0x1.26b9fe992283bp-961, 0x1.af28d6ce7505ep-431, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35b12f4bebacdp-20, 0.0, 0.0, 0.0, 0x1.14a90260608d3p-507,
     0x1.eaba2789c7b98p-817, 0x1.37a06a655ee08p-266, 0x1.ad1505e5e92acp-658,
     0x1.f473678ca05abp-161, 0x1.1f1ba81e66431p-398, 0.0, 0x1.1d9b4b4745ba5p-417, 0.0,
     0x1.10477169f95a1p-539, 0.0, 0x1.9c4331ed3c32ap-537, 0.0, 0.0, 0.0, 0.0,
     0x1.ac6c745bcf13p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47fcc97220535p-1022, 0.0,
     0.0, 0x1.69f1d1c61d525p-930, 0x1.b62378e6e6da4p-106, 0x1.b302662522482p-836, 0.0,
     0.0, 0.0, 0x1.6f6c0583cd61fp-865, 0.0, 0.0, 0.0, 0x1.e82d20d5ed7b6p-953,
     0x1.bfd4448486f8cp-421, 0.0, 0x1.5fa50d49f011p-119, 0x1.a52ead8a202ccp-790, 0.0,
     0x1.ebd5bb140e161p-892, 0x1.d29671722091ep-432, 0.0, 0.0, 0.0, 0.0,
     0x1.afd59dbadce7dp-596, 0.0, 0x1.948f34cbc50afp-162, 0x1.487527ac0705p-903,
     0x1.05ccad0833c7p-674, 0.0, 0x1.a644bfa0d352fp-595, 0x1.76454b84c5ca6p-136,
     0x1.4b47cc8df5649p-23, 0.0, 0x1.f41d27fd5f3d1p-838, 0x1.dd5c5ebce94cap-643, 0.0,
     0.0, 0x1.07d93978b7604p-504, 0x1.53553888d6d24p-444, 0.0, 0.0,
     0x1.1c967ac7f9ecep-730, 0x1.bf15c50ad4a9ep-978, 0.0, 0.0, 0x1.29c525ac76582p-925,
     0.0, 0x1.65bdd3d7af8acp-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f218713015d8dp-217,
     0.0, 0.0, 0x1.a069c58d54f26p-948, 0.0, 0.0, 0x1.7ea2f4feb053cp-276,
     0x1.ed9263eea1a92p-190, 0x1.ce4e25f33ae1fp-118, 0.0, 0.0, 0.0,
     0x1.c9535fcd2c8aep-684, 0x1.0448c5454c48bp-456, 0x1.cdb5e2c900fd1p-275, 0.0,
     0x1.fdb9a38ab7067p-918, 0x1.bd9ec54576539p-264, 0x1.31c7aeb2f15cap-929, 0.0,
     0x1.e29a9e53d41eap-295, 0x1.2e1663dd2bddbp-577, 0.0, 0.0, 0.0, 0.0,
     0x1.f520e49f09006p-129, 0x1.2e34e6db0834cp-901, 0x1.2283f5f614dc1p-49,
     0x1.434c66f1d8fa8p-442, 0x1.7dad34ba3a58ap-28, 0.0, 0.0, 0x1.faeeb1ba53b15p-1003,
     0.0, 0x1.e73e8928c7e29p-503, 0.0, 0x1.9361e35cf3a0ep-287, 0.0, 0.0, 0.0, 0.0,
     0x1.fa01148d6a5d1p-693, 0x1.7693c9e37b48p-393, 0.0, 0.0, 0.0, 0.0,
     0x1.70f175bfa5c9fp-776, 0.0, 0.0, 0.0, 0x1.44ca9828161a1p-1000,
     0x1.0c1f9fa2eaf39p-476, 0x1.d33c3cb80ad4p-454, 0.0, 0.0, 0x1.042c1564cfc61p-896,
     0x1.8b8ac61ec54bep-89, 0x1.47bdb0f81c78cp-799, 0x1.d7841568cdbdfp-164, 0.0,
     0x1.ced6f393a5a02p-596, 0.0, 0.0, 0.0, 0x1.e129c4e064dcbp-463, 0.0,
     0x1.70c8a3cf1410dp-83, 0x1.4b215237b0961p-359, 0.0, 0x1.19011599d4751p-186,
     0x1.94c26adc27356p-122, 0.0, 0.0, 0x1.7e3cfc7d835f5p-453, 0.0, 0.0,
     0x1.eaf4fb8da70dbp-289, 0x1.67eddbdcc4d05p-142, 0x1.c9abf890ea694p-347, 0.0, 0.0,
     0.0, 0x1.c53757788fe3fp-603, 0x1.9e79e7e3b7259p-913, 0.0, 0.0,
     0x1.709f71e2932e7p-30, 0.0, 0x1.86334efd0fd06p-548, 0.0, 0x1.c8c15f6f7a593p-322,
     0.0, 0.0, 0x1.8daba4e586496p-452, 0x1.4de44f57d116bp-361, 0x1.bdd238708182cp-528,
     0x1.7e91cc1617df1p-33, 0x1.0b836ea8c3bcep-692, 0.0, 0x1.c1fba38bfaf9fp-552,
     0x1.e37e78ee8f57p-850, 0x1.f0765d02b407dp-860, 0.0, 0x1.66d3cce0b728ap-560, 0.0,
     0x1.d68c0e832aea4p-172, 0.0, 0.0, 0.0, 0.0, 0x1.9e61ad8efcb72p-658,
     0x1.720ae02d5aae2p-1020, 0x1.83dbd38dc1e22p-124, 0x1.ec12612054634p-30,
     0x1.cde4632f8c77fp-609, 0.0, 0x1.f9dbb4b0c2ec7p-877, 0.0, 0x1.74104f3d6d135p-979,
     0x1.415b6558db6cbp-603, 0x1.1b510476d04e2p-138, 0x1.ff6d4a2904dc4p-927,
     0x1.885381f5d8d28p-843, 0.0, 0.0, 0x1.d43bdd46fa2f1p-217, 0x1.c36db2f507834p-996,
     0x1.80cdc82235a8dp-500, 0.0, 0x1.e1e431e749fc9p-904, 0.0, 0.0, 0.0,
     0x1.ab32fc63aa86ap-717, 0.0, 0x1.46ca7e5b355p-71, 0x1.ce1c262aed1ap-976, 0.0,
     0.0, 0x1.54498579d095ap-926, 0.0, 0.0, 0x1.7d5387a2ad893p-365, 0.0,
     0x1.99471ec27216ap-289, 0.0, 0x1.4ffbf8fc15873p-257, 0x1.82f41036e6465p-151,
     0x1.e7fb1d7b52c05p-707, 0.0, 0x1.eab9ae117efabp-795, 0x1.149bb6886bd15p-869,
     0x1.3eeaa680c5b5ep-29, 0.0, 0x1.f1b7ad5822445p-408, 0.0, 0.0, 0.0,
     0x1.94441608378ebp-965, 0x1.2942647b2179p-346, 0.0, 0.0, 0x1.23928d7d6d1a2p-74,
     0.0, 0.0, 0x1.c38d9ed3cc71cp-586, 0.0, 0.0, 0x1.757bd91e96723p-226,
     0x1.fc88151403533p-966, 0x1.80ead8c834fdep-419, 0x1.0c4c332f9f558p-574,
     0x1.70030776cd2bp-673, 0x1.66d034d5ce4a5p-788, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e41d2877f504ap-409, 0x1.2e49fb76b8829p-371, 0x1.58a177835f2b2p-909,
     0x1.d95160741132dp-978, 0x1.f8acec08c52acp-199, 0x1.79067e6b792b3p-576,
     0x1.c3054b2046f1cp-257, 0x1.1f9ca7af1c4b9p-607, 0x1.39dcca0f2daf6p-723, 0.0,
     0x1.5e5333f98b004p-222, 0x1.4a43e2345bdcdp-621, 0.0, 0.0, 0x1.f747e61b818d3p-884,
     0.0, 0x1.52a91cd0ef141p-751, 0x1.e87307db022cdp-668, 0x1.bb0eada1eaa9cp-351, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21e2765c704e5p-344, 0x1.af8b7c304170dp-215, 0.0,
     0.0, 0x1.d328c81f99647p-202, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02604c9bd01bfp-304, 0.0, 0x1.65ea0c7c82cfep-764, 0.0, 0x1.0b0a95cab04ecp-678,
     0.0, 0.0, 0x1.e75a36c567e6fp-685, 0x1.f9f14e83ddcffp-321, 0x1.7ea44c43bb002p-519,
     0x1.fe9c7d367eb02p-16, 0.0, 0x1.6d70df23ea0bep-1009, 0.0, 0x1.de12482b0b379p-261,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d75ffd2300185p-795, 0.0, 0.0,
     0x1.6b752ed8bf2e3p-855, 0x1.7922c63eed419p-499, 0.0, 0.0, 0x1.2880a3040aa43p-239,
     0.0, 0x1.7b6de147ff38ap-845, 0x1.f4dab7e335144p-366, 0.0, 0x1.253c5ccc793e6p-856,
     0x1.8a3d1398b5f58p-808, 0.0, 0.0, 0x1.b82dc46397343p-280, 0x1.cb620707e0215p-601,
     0.0, 0x1.6d24e5a04095ep-544, 0x1.8bab2cddf6d0ap-388, 0.0, 0x1.2cbe7e3645fa4p-99,
     0x1.54e0a0d22a905p-643, 0x1.fe8cc4803fdbbp-49, 0x1.09cd420e1f1b3p-905, 0.0, 0.0,
     0x1.2340f77bf7a88p-811, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6841a5e0a515p-921, 0.0, 0.0, 0x1.3735005bbcc0cp-310, 0.0, 0.0, 0.0,
     0x1.fb2d7b790b82fp-37, 0x1.a08915f4cd712p-15, 0x1.90997aca0e0e5p-248, 0.0, 0.0,
     0x1.f06dcea4ca238p-663, 0.0, 0x1.265132579daafp-122, 0.0, 0.0, 0.0,
     0x1.026eeea552993p-681, 0.0, 0.0, 0x1.826e39e20a2a9p-318, 0.0,
     0x1.7008cbfc69298p-107, 0.0, 0x1.4535231af6483p-225, 0x1.ad27fedf4dccap-825, 0.0,
     0x1.d85ec56a632b4p-51, 0.0, 0x1.a71c5ed0bf157p-86, 0x1.7074c9b17565cp-541,
     0x1.de65e9be03d89p-953, 0.0, 0.0, 0x1.ef902b7653698p-492, 0x1.2e63649ff30e7p-89,
     0x1.46bf0634eea9p-729, 0.0, 0.0, 0.0, 0x1.4b124035b34d3p-841,
     0x1.c965f74e1dff2p-232, 0.0, 0x1.54b12b7b421bbp-994, 0.0, 0.0,
     0x1.8e1f3c6d9fc9ep-289, 0.0, 0x1.bc006ebd3dc9ep-3, 0x1.bb6b85c42c91fp-313, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e49eb0d1ab03p-353, 0x1.930e51cd92be5p-250,
     0.0, 0x1.bdaff27f447c8p-830, 0.0, 0.0, 0x1.969815d06115ep-34,
     0x1.09de11c67f4fp-902, 0x1.58d075ec8ef59p-280, 0x1.4181472c43b76p-751,
     0x1.16332e6efea76p-119, 0x1.4265530208404p-440, 0.0, 0x1.491498c716a14p-91, 0.0,
     0.0, 0x1.5864afb11fd51p-354, 0.0, 0x1.9ebd61ee762f1p-759, 0x1.f5f29f233cd01p-466,
     0.0, 0x1.50c2fba19a991p-345, 0x1.905af3abb47ffp-116, 0.0, 0x1.aa79cc5c7afebp-936,
     0.0, 0.0, 0x1.460cf8daf10cdp-316
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
            tmp1 = Sleef_sinhd4_u35kvx(tmp0);
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
    printf("Sleef_sinhd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sinhd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
