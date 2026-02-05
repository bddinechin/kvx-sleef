/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d4_u10kvx.c --function Sleef_exp2d4_u10kvx \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dda29f097e46p-764, 0.0, 0x1.3fcbd6c7b8f0bp-452,
     0x1.b959ab23bf8d3p-488, 0.0, 0.0, 0.0, 0x1.9dfef6d9ef1ap-393, 0.0,
     0x1.cc207a592fb5p-875, 0.0, 0x1.9d2a318adeaafp-559, 0x1.ff35e290f3a08p-847, 0.0,
     0.0, 0.0, 0x1.e009cd68c98bcp-431, 0.0, 0.0, 0x1.113629d7143f7p-14, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.64515a0e3cae1p-819, 0.0, 0.0, 0x1.b8f3775da4873p-116,
     0x1.f6e5b37ac001cp-596, 0x1.bccd0ad0e2634p-580, 0x1.7e3b49fb4935fp-46, 0.0,
     0x1.8a958e6e7a083p-793, 0x1.9b773a7e754cap-550, 0.0, 0x1.4ffac25e1ad8ep-484,
     0x1.b6be790e93601p-941, 0x1.9c65a53d07b8ep-919, 0.0, 0.0, 0x1.4a492350e781cp-508,
     0x1.6c90f39ef5dd6p-532, 0x1.afb0aea6ff469p-161, 0x1.2abae7ba78f3cp-339, 0.0, 0.0,
     0.0, 0x1.d4617d57a4c0bp-715, 0x1.090058f884fa8p-967, 0x1.928c656db10fap-812,
     0x1.b4c8f081551dbp-726, 0x1.6f44d090daab8p-32, 0.0, 0x1.ef00de4e643a4p-494, 0.0,
     0x1.1fba04b8cc74ap-722, 0.0, 0.0, 0.0, 0.0, 0x1.1ebc445d1aaeap-598, 0.0,
     0x1.bcf154a70646ap-875, 0.0, 0x1.ed8ece4aea3fep-798, 0.0, 0x1.d4c48ee40679p-986,
     0x1.8c6535b1f07d6p-181, 0x1.3543e410dba0ap-630, 0.0, 0x1.801df6a239b7fp-509,
     0x1.a89b744579944p-775, 0x1.3617de8fdd003p-203, 0x1.a73bb7e7c0397p-680, 0.0, 0.0,
     0.0, 0x1.975843917810ep-300, 0x1.b8967f3056214p-132, 0x1.37ac3e5384e6ep-139,
     0x1.6f01bd6ec1583p-929, 0.0, 0x1.50419d02cef31p-543, 0x1.618124757793ap-541,
     0x1.344ea0d4bdbd4p-883, 0x1.592634a627846p-676, 0.0, 0x1.528badbbdcfdp-925, 0.0,
     0.0, 0.0, 0x1.9a2d27649a46fp-428, 0.0, 0.0, 0.0, 0x1.ac126edc1363ap-289,
     0x1.7e816201d3192p-288, 0.0, 0.0, 0x1.d97bb41475805p-223, 0x1.acae5282ada01p-88,
     0x1.4fb7bc7adabe2p-1022, 0x1.b1deeb024afe4p-662, 0.0, 0.0, 0x1.6543584cd8057p-7,
     0.0, 0x1.019e0cdc338aap-21, 0.0, 0x1.d9e84699fdf42p-576, 0.0,
     0x1.e466e20912aeep-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f980f06215acp-727,
     0x1.ca73b9104dc04p-368, 0x1.53145c823b3ffp-103, 0.0, 0.0, 0x1.d1015db7069dbp-398,
     0x1.dfdc4eb9ad686p-787, 0x1.a188bb5ed57fcp-274, 0.0, 0x1.b5af3b6240c4dp-228,
     0x1.984b149720a73p-416, 0x1.f79f257ac97bcp-758, 0x1.44081466c8036p-844,
     0x1.aeb2a383cb6p-219, 0x1.7f2087e699255p-667, 0x1.81e1c8aee4fd2p-742,
     0x1.dd7cd44d0abc4p-592, 0x1.a8112e87a133p-535, 0.0, 0.0, 0.0,
     0x1.28e1d3b80b3efp-98, 0x1.3f95f7d13a46ep-403, 0.0, 0.0, 0x1.cacacf10004aep-430,
     0x1.c24b91b8a9222p-130, 0x1.9e886bce7915ap-587, 0.0, 0x1.df84351768e31p-575,
     0x1.5e827fd284423p-96, 0x1.56c214434369p-249, 0x1.7b220298c96d5p-548,
     0x1.b9b74d8144433p-848, 0.0, 0x1.3a9bd01cce2b2p-714, 0x1.5f424e1c55889p-738, 0.0,
     0x1.98a73358b046ep-350, 0.0, 0.0, 0x1.c58d7210cf325p-545, 0x1.9288b3978e6c7p-642,
     0.0, 0x1.9c542d6a6fbb4p-527, 0x1.5ada0ce4db821p-620, 0.0, 0x1.185d52e82c0cp-165,
     0.0, 0.0, 0x1.71d829af44ac3p-844, 0.0, 0.0, 0x1.261c17aff1264p-59, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d8a8fc6e4655cp-854, 0.0, 0x1.12f0f0ae774a9p-506,
     0x1.2fed4e1b7426p-789, 0x1.25a57802efa45p-76, 0.0, 0x1.fc344b721921ep-141, 0.0,
     0.0, 0.0, 0x1.a609f07227667p-20, 0.0, 0.0, 0x1.86e86af9ba654p-483,
     0x1.baa08bb1c9a01p-892, 0.0, 0.0, 0x1.092b5b6ecc3dp-441, 0.0,
     0x1.0fb62b3162b21p-245, 0.0, 0x1.d53a8df15134cp-244, 0x1.6b16a75ebb352p-533, 0.0,
     0.0, 0x1.51a212238509ap-642, 0x1.4b58bc89a25b4p-575, 0.0, 0.0,
     0x1.ef7227503151ep-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.694eb6481e608p-412,
     0x1.6a358e5270718p-7, 0.0, 0.0, 0.0, 0x1.972dca47def98p-407,
     0x1.58d1f9c1ec2eep-924, 0.0, 0x1.203127eeb5789p-99, 0.0, 0.0,
     0x1.825564f934c68p-492, 0.0, 0x1.a4e33d56d436fp-429, 0.0, 0.0,
     0x1.6920d00063186p-931, 0x1.2a4e800cd3541p-784, 0x1.9a3b7ce47f2a8p-923,
     0x1.33d187bcc2237p-966, 0.0, 0.0, 0.0, 0x1.9d53415a8aed6p-62,
     0x1.c48bf64e06a34p-975, 0x1.8540d287a72cp-926, 0.0, 0x1.4954fda9d1308p-931, 0.0,
     0.0, 0x1.3e135c0b13e17p-40, 0.0, 0.0, 0x1.c648558c57a8ap-649, 0.0,
     0x1.bb3ecd729062bp-830, 0x1.976baac8a7a83p-526, 0.0, 0.0, 0x1.3da3c369893cfp-785,
     0x1.c6cc0625353a8p-473, 0x1.a477932d1879bp-458, 0x1.ceea1d32c0959p-207, 0.0,
     0x1.01bf6df6d75edp-955, 0.0, 0x1.32ac2308f1e6ap-320, 0.0, 0x1.482d6857f329ep-721,
     0x1.956fed600ebcp-643, 0.0, 0.0, 0x1.d6186622e23d2p-588, 0x1.31660c7abbe4fp-111,
     0x1.e21b1b5206d75p-663, 0.0, 0x1.63db71c620a57p-388, 0x1.67c861c50b604p-667,
     0x1.ea629dfbb4242p-356, 0x1.e5131cb06635p-51, 0x1.efcc8fe8ed429p-523, 0.0,
     0x1.7aaad665ddec9p-979, 0.0, 0.0, 0x1.fa8fc40b5ddcap-875, 0.0, 0.0,
     0x1.3352aed913d18p-653, 0.0, 0x1.0d500840b8671p-160, 0x1.a9c95905f4bcp-725, 0.0,
     0.0, 0.0, 0x1.1abf58526b1p-616, 0x1.5655a9d9e88a4p-525, 0x1.c0f4cc6348b35p-124,
     0x1.c3bc7a5b79013p-568, 0x1.666556288abdbp-254, 0x1.641e6b69e7718p-731, 0.0, 0.0,
     0x1.b238d688012fdp-804, 0.0, 0x1.d5531e36a218p-28, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa57b215508fep-747, 0x1.3d6163954dd52p-766, 0.0, 0x1.52149c05a6936p-33,
     0x1.1ccdd38fcf128p-830, 0.0, 0x1.127d50921da7fp-266, 0x1.63c0bdd645859p-536, 0.0,
     0.0, 0x1.def80f4be119cp-706, 0.0, 0.0, 0x1.34d20a7b2bb72p-481, 0.0, 0.0, 0.0,
     0x1.37520c7cbf643p-380, 0.0, 0.0, 0.0, 0x1.f975fde4be87ap-87,
     0x1.63009163d7167p-275, 0.0, 0x1.897626cac746fp-46, 0x1.62283e3142a01p-1012,
     0x1.6f9898276ad14p-967, 0x1.bef438d760e1p-896, 0x1.fac73b522aac7p-739,
     0x1.469914ee0a1ecp-877, 0x1.44a24621c0991p-83, 0x1.684cb3c229362p-292,
     0x1.b83338db6c453p-694, 0.0, 0.0, 0x1.43349d720a0f6p-173, 0x1.886b512eb4aaep-761,
     0.0, 0.0, 0.0, 0.0, 0x1.a31212bb2a6dap-224, 0x1.56edf4f3753e5p-437, 0.0, 0.0,
     0x1.e50aa6da0c9ap-92, 0.0, 0.0, 0.0, 0.0, 0x1.d4f82aee8eaf3p-947,
     0x1.359393cb63165p-240, 0.0, 0x1.852667b12005bp-335, 0x1.e1829244a40eap-849, 0.0,
     0x1.2371be54a6edap-325, 0.0, 0x1.5b366e29d2eccp-855, 0x1.115ca55d79a32p-844, 0.0,
     0.0, 0x1.4d2df77daac3fp-904, 0x1.471d1e2e9a091p-300, 0.0, 0.0, 0.0,
     0x1.d7323597e763bp-378, 0x1.bbf26308cfcb2p-575, 0.0, 0.0, 0x1.e28750623fd31p-827,
     0.0, 0.0, 0.0, 0.0, 0x1.69121f6307bebp-286, 0x1.23362acf162b4p-674,
     0x1.0993c713c8deep-867, 0x1.2c78aba9b0ce9p-452, 0.0, 0x1.7a13f770e1256p-919, 0.0,
     0x1.33099852103e5p-901, 0x1.07314e3a86f09p-107, 0x1.2522360b4d15bp-255, 0.0,
     0x1.4f24646299cccp-880, 0x1.41e9794f77258p-548, 0.0, 0.0, 0x1.60ff139ed89aep-741,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f31215460e3fp-78, 0x1.69484f18768c2p-293, 0.0, 0.0,
     0x1.765a4537b02ecp-241, 0.0, 0.0, 0x1.181f432b56519p-927, 0x1.06c6a3913c339p-485,
     0x1.2f325c5f0b47dp-557, 0.0, 0x1.c14c260546283p-74, 0.0, 0x1.c8b92d0fc2c44p-887,
     0.0, 0x1.f2a7c6c8e2149p-280, 0x1.8c53b50ac8a8p-199, 0x1.1ec1ac36d48afp-564, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8161d632d62dcp-224, 0.0, 0x1.7d7549887ea1p-888, 0.0,
     0x1.89230568457cp-154, 0.0, 0x1.5c973ffbb612dp-286, 0x1.7b28b2c5109d3p-583,
     0x1.a6706bc69e02ap-450, 0.0, 0.0, 0x1.0154ba6d5f97cp-532, 0.0,
     0x1.e4b2357278ca8p-779, 0.0, 0x1.9778e4dc03118p-399, 0x1.ec4e4be644575p-912, 0.0,
     0.0, 0x1.25e04dcdd8ae3p-593, 0x1.4c3884b6af302p-572, 0.0, 0.0,
     0x1.98ba59dea38e1p-844, 0x1.0748c7dd75d78p-253, 0x1.999890ed51779p-540, 0.0,
     0x1.c2d6fdb0d8dfcp-282, 0x1.d0b385e8ffb11p-506, 0.0, 0.0, 0x1.114d248f49e5bp-625,
     0.0, 0.0, 0.0, 0x1.b76eeef63d5a9p-133, 0x1.845701fe8afa5p-71,
     0x1.20236945811b5p-895, 0.0, 0x1.45a6f0b809e7cp-948, 0.0, 0x1.7b89cf838f569p-673,
     0x1.ab962cba153b7p-643, 0.0, 0x1.a8665b4dfd4fdp-13, 0x1.13f0993729025p-104,
     0x1.8660eec352bcdp-748, 0.0, 0.0, 0x1.19b488869fe76p-579, 0x1.7b5f3fc378012p-911,
     0.0, 0x1.3a5b4964d3d1p-532, 0x1.cfa29a389006cp-406, 0.0, 0x1.9416e0142e3b5p-589,
     0x1.f3f9f4bb8c7d2p-260, 0x1.a9a41adb16e9dp-820, 0x1.4006278693f7fp-608,
     0x1.c81a45f317addp-887, 0.0, 0x1.6664ce785db4p-959, 0.0, 0x1.fa830cc396627p-1015,
     0x1.72222ed1b7e81p-462, 0.0, 0x1.74a6120725c74p-541, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.36ce75f0c79d2p-1, 0.0, 0.0, 0.0, 0.0, 0x1.d8d48313988adp-442, 0.0,
     0x1.db608294649d7p-181, 0x1.13e9ab702389p-918, 0.0, 0.0, 0x1.992993fbf9829p-875,
     0.0, 0x1.7f22b62fc9e26p-730, 0.0, 0x1.09a515929aaa8p-654, 0x1.ee6bd4423b3d3p-527,
     0.0, 0.0, 0.0, 0x1.ea9ef9c6cf71cp-796, 0.0, 0x1.daec48530ec65p-365, 0.0,
     0x1.ee8fe2f24b89dp-499, 0x1.bd93ec8920019p-526, 0.0, 0x1.8b35493335283p-526, 0.0,
     0.0, 0x1.84a8b6212409ep-113, 0.0, 0x1.bb2e748714a2p-968, 0x1.17a18fb62dcd7p-695,
     0x1.8adff1fda674ap-748, 0x1.7fda92752a9fdp-388, 0.0, 0.0, 0x1.89b9336b77dcbp-271,
     0.0, 0x1.9f9391a483c7cp-374, 0.0, 0x1.71efa7e314691p-924, 0x1.2bd1ad9c86921p-554,
     0x1.a5473a2a0aa88p-556, 0x1.096972f5e41e3p-656, 0x1.a6319684f11d3p-748, 0.0,
     0x1.d9b49034be4eap-446, 0x1.06949b16fe53p-844, 0.0, 0.0, 0.0, 0.0,
     0x1.0e78d5b43e4bep-142, 0x1.2a8044fb605b3p-89, 0.0, 0.0, 0x1.a90bdf3e48b36p-812,
     0x1.60d5662a732f4p-673, 0x1.8c8339227362ep-30, 0.0, 0.0, 0x1.c1bfd81f9e4c3p-297,
     0.0, 0.0, 0x1.684fe469b3bd7p-175, 0.0, 0x1.efc49f5c81d35p-148, 0.0,
     0x1.edb5ee283e624p-525, 0.0, 0x1.09206cef610f2p-340, 0.0, 0.0, 0.0,
     0x1.e7b3729018e93p-419, 0.0, 0x1.a8c6b6ad4517ap-426, 0x1.ec954ebf10bap-694,
     0x1.863a164b0454cp-543, 0x1.28092f3019a85p-506, 0x1.2cdf2dc2a58c1p-743,
     0x1.c7efb9a535cap-422, 0.0, 0.0, 0.0, 0x1.61c019bcd0ddbp-183,
     0x1.21c25ec57fcb9p-872, 0x1p0, 0x1.b71ab1c7e930bp-332, 0.0,
     0x1.2fc2f1e101827p-734, 0x1.acb22ffc1328fp-1013, 0x1.7d09c34c34c91p-886, 0.0,
     0x1.317a170dfa45ap-406, 0.0, 0x1.54364d4d67cc6p-330, 0.0, 0.0, 0.0,
     0x1.bd2a6871aabacp-76, 0x1.4bfa346ec3c72p-780, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f65bc9fedb61p-13, 0.0, 0x1.76bde3191a132p-47, 0.0, 0x1.3d540478f8d96p-76,
     0.0, 0x1.fe2817526e636p-119, 0.0, 0.0, 0.0, 0x1.8708fc25ff7dep-279, 0.0,
     0x1.6a2ffb52a6164p-249, 0x1.10159afb74326p-64, 0x1.cb1891022f29p-86, 0.0,
     0x1.bcbabaaca895fp-1016, 0.0, 0.0, 0x1.43b3bdac3c3fap-54, 0x1.791875226ce87p-544,
     0.0, 0x1.de242e48afe3bp-845, 0x1.c0dab1ca508cbp-84, 0x1.a246b2a16c996p-531,
     0x1.cf0bc43974e17p-760, 0x1.e931b331c84eep-703, 0x1.9c82ebf1bf743p-98,
     0x1.28c1263eb39a6p-391, 0x1.d0ab7d5694175p-512, 0.0, 0x1.4b100516a580ap-352, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3cbb99c395db9p-30, 0.0,
     0x1.c23baeab92391p-64, 0.0, 0.0, 0x1.7e680fe14f053p-781, 0x1.81a02f5128cf1p-597,
     0x1.bc6a3bfa941f5p-141, 0x1.a34bd5e09c99ep-541, 0x1.99942ce93075ap-912,
     0x1.ed49783d903fep-774, 0.0, 0x1.d80e2d60780e8p-289, 0x1.33bb98088d757p-51, 0.0,
     0x1.32e897ffb5ce7p-716, 0.0, 0x1.d8bcc3693f201p-376, 0.0, 0.0,
     0x1.bfe0a6b4f79dap-825, 0x1.9d6defdf2f3b3p-711, 0x1.8a81701d2c447p-926, 0.0, 0.0,
     0.0, 0x1.34d613c7908e6p-898, 0.0, 0.0, 0x1.a5960bd5926ecp-881, 0.0, 0.0,
     0x1.d192ae7ebff5ap-482, 0.0, 0x1.0e5e013d02fc8p-321, 0x1.de4ab0a4e0919p-470, 0.0,
     0.0, 0x1.bf04f74367bfp-725, 0.0, 0x1.e85a2342245ddp-10, 0x1.2be1cada4444ep-601,
     0x1.b12f85f6d0c3ep-601, 0.0, 0x1.bc49396f06967p-178, 0x1.b9ea2565a1592p-589, 0.0,
     0.0, 0.0, 0x1.96d37990ce114p-747, 0x1.3ab0db3c0a5c2p-458, 0x1.ae9c6f5d64eb3p-549,
     0x1.be8c7bb83834ap-920, 0.0, 0.0, 0.0, 0.0, 0x1.dd5b974b44ef5p-633,
     0x1.497076c378d24p-627, 0x1.7a5d608c4de71p-823, 0.0, 0.0, 0x1.c78cb28d47bcdp-511,
     0x1.30bdef766a59cp-553, 0.0, 0x1.21be8a45ecc43p-408, 0.0, 0.0,
     0x1.9a0de96e4cfb4p-22, 0x1.b1caccdecbb46p-644, 0.0, 0x1.2c6b35c955f5dp-59, 0.0,
     0x1.5a9ea84252e91p-513, 0.0, 0.0, 0x1.dbf1972baa8aap-41, 0x1.1af8f30fd2abbp-57,
     0.0, 0.0, 0.0, 0x1.b0afbb0c65545p-380, 0x1.04427aacf9958p-139, 0.0,
     0x1.5af5814821671p-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52843e19745ccp-540, 0.0,
     0x1.f6aa56bbccbfap-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.101b9eb645e3fp-883,
     0x1.3007eea962ecfp-547, 0x1.a7fb5d11529a4p-117, 0.0, 0x1.1b44cae828292p-309, 0.0,
     0x1.fb7bc3039f976p-515, 0.0, 0.0, 0.0, 0x1.5a001ccc46d4ap-768, 0.0, 0.0,
     0x1.5409c923fa209p-724, 0x1.4799fdb5c17b8p-737, 0.0, 0.0, 0x1.378c4c210778ep-329,
     0.0, 0x1.c24abb011beffp-860, 0x1.fdc94232459c5p-313, 0.0, 0.0, 0.0,
     0x1.7577472001a9dp-806, 0x1.02d58cb104a02p-161, 0x1.2688f5acf8c7ap-431,
     0x1.dbc27da38e203p-696, 0x1.3b18ec57f841fp-256, 0.0, 0x1.e7c9128f5aaf7p-181, 0.0,
     0x1.b0f56c1d7de77p-39, 0.0, 0x1.c2598e225c34ep-851, 0.0, 0x1.c2b69914ece74p-401,
     0x1.924451a23c9c3p-692, 0.0, 0.0, 0x1.82c6604d607b4p-973, 0.0, 0.0, 0.0, 0.0,
     0x1.e56de9b7a1da3p-298, 0x1.58ff4493fcb42p-455, 0x1.4876f7b70a034p-464,
     0x1.0b4ddaf9e93e1p-562, 0.0, 0x1.df3addba50fc8p-555, 0x1.1b3adebf0daf8p-399, 0.0,
     0x1.99e837126cde2p-851, 0x1.5d01ea40973d7p-694, 0.0, 0.0, 0.0,
     0x1.caa5b52246bf3p-617, 0.0, 0x1.47d84acfa484p-444, 0.0, 0.0,
     0x1.2eafdbb37b6abp-982, 0.0, 0x1.fac8f605a7f88p-1014, 0x1.620bef02b41dap-559,
     0x1.14113ced324f1p-714, 0x1.92ee7a8b704d2p-935, 0.0, 0.0, 0.0, 0.0,
     0x1.ea0d39b2dd0cdp-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28a3a231bad0ep-366,
     0.0, 0x1.fa7924b5ecd62p-244, 0.0, 0x1.261244800633ep-392, 0x1.000595274e99p-711,
     0.0, 0x1.4773ce195b3bdp-577, 0.0, 0.0, 0x1.5b362556df9c6p-529, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.73cbe5f227251p-233, 0.0, 0x1.44368c7656f85p-62, 0.0,
     0x1.9d60dc1fe82dep-393, 0.0, 0.0, 0x1.4fd0115437df2p-772, 0.0,
     0x1.5665fc2e7b1c1p-907, 0x1.5840185c341eap-492, 0.0, 0.0, 0x1.897a4885cb50bp-604,
     0.0, 0.0, 0x1.7595cc54582d1p-117, 0.0, 0.0, 0x1.e2cb3164673cep-693, 0.0,
     0x1.0e91286a1922cp-815, 0x1.13fc4cb82f7eap-539, 0x1.b6f3ff1abdab5p-523, 0.0,
     0x1.d8ee5bd16ccb5p-929, 0.0, 0.0, 0x1.4fbf850e37a57p-112, 0.0,
     0x1.7d10097255a48p-102, 0x1.3b0b32bfb8187p-265, 0.0, 0x1.4b1f05f04815bp-254,
     0x1.137c387485262p-22, 0x1.ad77dc0c04169p-726, 0x1.d70724677d503p-292, 0.0,
     0x1.8eb30c22bd769p-491, 0x1.c78ed53a015d1p-660, 0.0, 0.0, 0x1.ccf9e393a3adp-812,
     0x1.b65cd4199e3a4p-739, 0.0, 0x1.7ec0151e8e655p-155, 0.0, 0x1.a5623d7407cc4p-825,
     0.0, 0x1.dc3efc34beea1p-779, 0.0, 0x1.dc5b03887458fp-38, 0x1.d454b489336bfp-585,
     0x1.a821b9f806c9ep-605, 0.0, 0x1.2087c1e85d0a3p-199, 0.0, 0x1.dc0f7daaa8ee6p-772,
     0.0, 0x1.d22545d394b88p-912, 0.0, 0x1.a13bcdad039fdp-465, 0x1.bd7c27d70c476p-891,
     0.0, 0.0, 0x1.2d192e14d68d8p-210, 0.0, 0x1.2282752ce5533p-515, 0.0, 0.0,
     0x1.65689076e2bffp-952, 0x1.24ca30f728e32p-381, 0x1.45e42dc1c499ap-136,
     0x1.39478823a8277p-360, 0x1.5d4022ac3c372p-862, 0x1.94c820c2d8d99p-193,
     0x1.f1622fc554418p-31, 0.0, 0x1.20409d7426a2cp-1013, 0.0, 0x1.7fc8be8adb082p-526,
     0x1.42a9fc4a4bf87p-651, 0.0, 0x1.f1d1dc7e9870cp-354, 0x1.a3fdc56b774bdp-388, 0.0,
     0.0, 0x1.720aa41670835p-24, 0.0, 0x1.3bf0aa2b807ccp-666, 0x1.a5662bc068889p-557,
     0x1.6134dbf870dbp-708, 0x1.86da42904feabp-402, 0x1.ef266ed112f9ep-382,
     0x1.0b41e66f27f35p-48, 0x1.01646f2337378p-179, 0x1.833e937b61dc6p-257, 0.0,
     0x1.09cd4cf55d6afp-158, 0x1.c1926391a7d56p-932, 0.0, 0.0, 0x1.2ae075b6da4ddp-436,
     0x1.02ebe40d2b75ap-921, 0.0, 0x1.5844ae7fa0a91p-980, 0.0, 0x1.5d81fb9abe5cdp-700,
     0.0, 0.0, 0.0, 0x1.15ff18543c002p-340, 0.0, 0x1.b2fefb6ac060bp-566,
     0x1.0560c3de764e9p-691, 0x1.1ac9526e2edddp-609, 0x1.f3c1671b334bbp-126, 0.0, 0.0,
     0.0, 0x1.0df5ba6626ef7p-122, 0x1.f2910f294fb68p-796, 0x1.f8d5327ac6093p-104,
     0x1.16f8829f01459p-839, 0x1.4bb801c4b9db6p-879, 0x1.2e102b4469688p-871, 0.0, 0.0,
     0.0, 0x1.d9e1b5536043ep-660, 0.0, 0x1.ef458b3cb8664p-833, 0.0,
     0x1.25e783bfd83bcp-431, 0x1.c84e753e977ebp-16, 0.0, 0x1.9d9f98e2345b2p-129,
     0x1.0fcd709375be6p-425, 0.0, 0x1.46c188398444dp-373, 0x1.c98c13476fe6ep-403, 0.0,
     0x1.2f4893b447176p-700, 0x1.29ac0eba7b2bp-537, 0x1.da486c47aa375p-928,
     0x1.3df12a694ce28p-585, 0x1.3a7ce9613504bp-444, 0.0, 0x1.a1ae7eae0ddafp-674, 0.0,
     0.0, 0x1.7d372be7b978ap-815, 0.0, 0x1.62cfc79406cbcp-506, 0x1.320f7d5e9c02ep-274,
     0.0, 0.0, 0x1.a51f3ce936c9dp-450
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
            tmp1 = Sleef_exp2d4_u10kvx(tmp0);
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
    printf("Sleef_exp2d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_exp2d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
