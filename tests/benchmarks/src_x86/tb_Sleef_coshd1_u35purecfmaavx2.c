/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd1_u35purecfma.c --function \
 *     Sleef_coshd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.92b280b07bcbep-692, 0x1.b4e381dd7687bp-242, 0.0, 0x1.1b07ca07c64e9p-50,
     0x1.a024a9e2cff4bp-992, 0.0, 0x1.14d5abf70ac7bp-688, 0.0, 0x1.ea60e62bfb05bp-911,
     0x1.8dfe01a92944cp-519, 0.0, 0x1.d59c7719dfbb4p-420, 0.0, 0.0, 0.0, 0.0,
     0x1.ee82a8c167cf6p-757, 0x1.c58528e95b53p-645, 0x1.6a513e2db58dfp-959,
     0x1.54b737a4e924ep-693, 0.0, 0x1.18a4d770a717fp-880, 0.0, 0.0, 0.0, 0.0,
     0x1.a3a8388fc11a7p-806, 0.0, 0.0, 0.0, 0x1.d426e14afc138p-443,
     0x1.a3c1ec936b1b5p-974, 0.0, 0x1.9b15cc2a1a4e3p-234, 0.0, 0.0, 0.0,
     0x1.1028a0f78ee94p-157, 0x1.7e26980d25b37p-119, 0x1.36db155df32b9p-955,
     0x1.d362795536feap-291, 0x1.941c12cfb64d8p-50, 0x1.54090ec947206p-634, 0.0,
     0x1.88e6102d42143p-235, 0.0, 0x1.f4cd5c53ad50fp-455, 0.0, 0.0, 0.0,
     0x1.ffd271329909fp-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d88b478330dep-285, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e06831765891ap-573, 0.0,
     0.0, 0.0, 0x1.dd9adfc2d7a1dp-315, 0x1.53dc318eff6d4p-160, 0.0, 0.0, 0.0,
     0x1.892a5d8ebe769p-558, 0.0, 0x1.5f9793896ec4cp-995, 0.0, 0.0, 0.0,
     0x1.7daaf9afe0a78p-193, 0.0, 0x1.b300eb335d505p-221, 0.0, 0x1.dc7b07642ed5cp-149,
     0x1.6021dac36ded4p-371, 0.0, 0.0, 0.0, 0.0, 0x1.1ed95b9b132f4p-326,
     0x1.e0282b80094bfp-499, 0x1.2321af54b0c22p-235, 0.0, 0x1.662e0ea43ca39p-634,
     0x1.0f62ab767d2a3p-209, 0x1.21cf647475a4ap-785, 0.0, 0x1.c1b825c1c7737p-462, 0.0,
     0x1.e5f63c3992e5dp-724, 0.0, 0x1.fcbc0c6c0ed05p-50, 0x1.f59cf83e19091p-236,
     0x1.8e214bd9e161fp-95, 0.0, 0x1.af65f6fabf3f7p-553, 0.0, 0x1.e11cf85d8caddp-959,
     0x1.8824141ce48bep-925, 0x1.0692588cfe6c6p-779, 0x1.11c451fa003d3p-318, 0.0,
     0x1.05a7a2da62924p-462, 0.0, 0.0, 0.0, 0.0, 0x1.caeb71ceb88c6p-771, 0.0, 0.0,
     0.0, 0.0, 0x1.594e27f16fefap-807, 0x1.9b933cef458afp-603, 0x1.464d107b65b28p-642,
     0.0, 0x1.b8a99ce38371bp-24, 0.0, 0x1.029f559c7778ap-409, 0.0,
     0x1.ff8b4a7fbc81bp-207, 0x1.6a55e874ccep-152, 0.0, 0x1.23a178d8cd107p-920, 0.0,
     0.0, 0x1.80096600a8734p-964, 0x1.6f548433c81dp-712, 0.0, 0x1.98bc21d20bea2p-632,
     0x1.ceec0c7d0daf2p-693, 0.0, 0.0, 0x1.a5cf1aa3c0fcep-682, 0x1.f9c14c697b77dp-532,
     0x1.575d62f32b866p-30, 0x1.1d94472cc9849p-567, 0.0, 0x1.a00781cadbf9p-452, 0.0,
     0x1.e89bc324d8fa3p-351, 0x1.472c28f2c159p-1011, 0.0, 0.0, 0.0,
     0x1.41b7d8a52feeap-811, 0.0, 0.0, 0x1.33fe65ae8ac5ap-248, 0.0,
     0x1.69e83674ee982p-963, 0.0, 0x1.c8b464d3b696ap-480, 0x1.44f4407b2cf3bp-455,
     0x1.043fe6996c586p-109, 0x1.46abe33b78b5ep-726, 0x1.006e5801ecb72p-459, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5c18e93fa5afp-520, 0.0, 0x1.236008010758ap-934, 0.0,
     0x1.4db0429423541p-64, 0x1.a682d6d8f75f2p-500, 0.0, 0x1.286b2d38dd051p-697, 0.0,
     0.0, 0x1.453e482f387e8p-928, 0x1.57ddc5d19b818p-144, 0x1.97a9a5a96bf68p-929, 0.0,
     0.0, 0x1.c5b772ef3b487p-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c3c64529f668p-565,
     0.0, 0x1.62ea39888f709p-642, 0x1.2ccac112369d8p-829, 0.0, 0.0, 0.0, 0.0,
     0x1.4cf752470551fp-892, 0.0, 0.0, 0x1.51feaaf47f7e1p-152, 0x1.d7d538d753617p-962,
     0.0, 0.0, 0x1.fcc083b162375p-925, 0x1.3a9cf9535e883p-415, 0.0,
     0x1.239ddf513f165p-560, 0x1.81c442f3792f5p-419, 0x1.3e6b89cc7da45p-602,
     0x1.7383dff098f59p-648, 0.0, 0x1.7563dae0fb73dp-205, 0.0, 0x1.382410a3e36fep-333,
     0x1.52c49627cb42fp-432, 0.0, 0x1.47eae73eff95fp-550, 0.0, 0x1.4976cfcf4687ap-455,
     0x1.11ef8c6ed9dd2p-574, 0x1.a6733063c8767p-755, 0x1.7c03feaf4b055p-636, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ffc67dd72f471p-116, 0x1.fe6251495832ap-687,
     0x1.370b0312bdd8ep-796, 0x1.a5ff69600541ap-241, 0.0, 0x1.762f8327c7a9cp-604, 0.0,
     0x1.ca0f40ffdf6fap-70, 0x1.326c232dd541dp-847, 0.0, 0.0, 0x1.2f4e3248edd6dp-945,
     0.0, 0.0, 0x1.5af38afd55ae1p-650, 0x1.92e97bc23f57cp-635, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0bacc0027bcc4p-207, 0.0, 0x1.bf39e0b4a5f46p-697, 0x1.0efa56eb33ea9p-3,
     0.0, 0.0, 0.0, 0x1.f735b3edc12f6p-969, 0x1.bf398a7ef243p-261,
     0x1.d4b0cb4583c1ep-854, 0x1.63120ef576856p-358, 0x1.3a9d0ea5d827p-65, 0.0, 0.0,
     0.0, 0.0, 0x1.e4b285f21049p-908, 0x1.0422d3cd7476ep-447, 0.0,
     0x1.453d83d99bb2p-249, 0x1.6cecd91a7b524p-599, 0.0, 0x1.3fa06cdf20bb3p-538, 0.0,
     0x1.a406a1d0056a3p-334, 0x1.85e16d0787884p-419, 0x1.1e2d5385b06b4p-24,
     0x1.942b3dcaa986ap-772, 0x1.68cb63aa410dbp-631, 0.0, 0x1.14ee78e0d1cc6p-662,
     0x1.103840a75ea75p-153, 0x1.a48dbc0deeb9fp-775, 0x1.090a119dc1e02p-838,
     0x1.d5b5b19a6e568p-711, 0x1.5cb11a3ef3e74p-490, 0.0, 0.0, 0x1.d4bd4e4bf3029p-456,
     0x1.1fb73f30c946p-662, 0.0, 0.0, 0x1.8c53f41b62098p-719, 0.0,
     0x1.b8755699edb6ep-909, 0x1.6e18565f8086cp-581, 0x1.c765c89420da9p-685,
     0x1.be26bcd7ef1ddp-265, 0x1.752249da40148p-327, 0x1.4ef4d0e18da75p-814,
     0x1.aed8caf7eaab8p-115, 0.0, 0.0, 0x1.8f7e2dc51fca7p-27, 0.0,
     0x1.a31a0828d2361p-73, 0x1.8d0e708857405p-864, 0x1.3facccfb8a07p-755, 0.0,
     0x1.ed7315c2f8864p-809, 0x1.aee89ed873d85p-271, 0.0, 0.0, 0x1.8c8c4207c1624p-462,
     0.0, 0.0, 0.0, 0x1.f34b427959ce4p-643, 0.0, 0.0, 0x1.f6308d5b4bf1fp-785, 0.0,
     0.0, 0.0, 0x1.34d998a2a84bcp-472, 0x1.2b82f7d1382e8p-700, 0x1.f3771d6b2be6bp-897,
     0.0, 0x1.d091915679dedp-710, 0.0, 0x1.d407755a62893p-785, 0.0,
     0x1.5cf8183aa6ec6p-180, 0.0, 0.0, 0.0, 0.0, 0x1.c6a2c4f496a3bp-712, 0.0,
     0x1.30b699de991cp-49, 0.0, 0x1.be2cf9c3679e6p-166, 0x1.30dd1362bfb3bp-966,
     0x1.5f789cc488e2fp-161, 0.0, 0x1.d3ea8ee753c37p-138, 0x1.e6fa34131b6dcp-159,
     0x1.f6b6a622a248dp-531, 0x1.33801c9d3afddp-938, 0.0, 0x1.da324ed5e72dfp-743, 0.0,
     0.0, 0.0, 0x1.23744aec2f613p-673, 0x1.6626a655e088ep-765, 0x1.f49695ab6cdap-574,
     0x1.d094e3d6f0b64p-275, 0x1.364e4515a7ea5p-163, 0.0, 0x1.caef45b7ad864p-2,
     0x1.a0254b607554fp-697, 0x1.8715bdc9ce17ap-13, 0x1.00b42ddfb4664p-606, 0.0,
     0x1.631cd6e019101p-813, 0x1.82d75585b3612p-660, 0x1.e3d915093aba1p-1003, 0.0,
     0.0, 0.0, 0x1.b9dbf035129b2p-548, 0.0, 0x1.45eb65947c0f6p-310,
     0x1.5769ba68b0a88p-523, 0.0, 0.0, 0x1.52aece4068c26p-576, 0.0,
     0x1.1dca8e2bf620dp-489, 0x1.d67b34e93a039p-614, 0x1.6135012305b1ap-508,
     0x1.e8467b0f311bap-574, 0x1.6cfb9a30bbdf6p-862, 0.0, 0.0, 0x1.54e6e9faadd09p-451,
     0x1.44253c5436dc2p-444, 0.0, 0x1.2923def828a33p-456, 0x1.27098c3fc6abep-1002,
     0.0, 0.0, 0x1.b3aa278997193p-508, 0.0, 0x1.6ef6b1a6b558p-823,
     0x1.dc4f698d30865p-373, 0.0, 0.0, 0x1.34aa3d2d08afp-618, 0x1.19db244f734d5p-126,
     0.0, 0.0, 0.0, 0x1.cc18188396922p-106, 0.0, 0.0, 0.0, 0.0,
     0x1.2cc7dd4599339p-164, 0.0, 0x1.5c091c339d0ffp-279, 0.0, 0x1.f7faeadcb53d4p-462,
     0x1.5dcc1e8b7945ap-193, 0.0, 0x1.2feea96a074f2p-971, 0x1.9db64ba9f29acp-703,
     0x1.2849f46c63cb2p-559, 0x1.843150d0809acp-80, 0x1.2a472878caeaep-458,
     0x1.9fc2acb41ee7cp-446, 0x1.337d03977bf51p-738, 0.0, 0x1.13823704bf095p-313,
     0x1.154512d47058p-291, 0.0, 0x1.03f05485f3008p-623, 0.0, 0x1.1411e2bd34eb6p-1012,
     0.0, 0.0, 0x1.dd15dd06134e2p-12, 0.0, 0x1.98c229e05f419p-437, 0.0, 0.0,
     0x1.a2730f1b7bfbep-954, 0x1.90c995e3376d2p-334, 0x1.b278015558f84p-386,
     0x1.f4fe84a3c4f45p-693, 0x1.da4fa9a7c9d18p-249, 0x1.cf051ab467c87p-617,
     0x1.431f0220d3c3ap-508, 0x1.dc77840d7adc3p-757, 0x1.22cea59291d6cp-331, 0.0,
     0x1.1b6caec0352efp-48, 0.0, 0x1.f0639511c77a9p-426, 0x1.2467ea1c5d0a8p-474, 0.0,
     0x1.234c83dbe284fp-210, 0x1.0ffab189a2ed2p-496, 0x1.a5dee5c794fbap-315, 0.0,
     0x1.e61698868b7efp-386, 0.0, 0x1.01ee56b9334b4p-411, 0x1.8d489e9296ac6p-817, 0.0,
     0x1.04a8d0c93f185p-686, 0x1.b18665fc515d7p-331, 0x1.0c6f88433a46ep-288, 0.0, 0.0,
     0.0, 0x1.91ad4d5c21d79p-37, 0x1.aa3b0a72d252dp-470, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4fccb0cf9382dp-328, 0x1.052340f674c19p-983, 0x1.3590a7dfb1c38p-382, 0.0,
     0x1.73fdfde940c6dp-561, 0.0, 0x1.5625d104a353p-396, 0.0, 0x1.1b0de1eb71342p-552,
     0x1.f86e60fcb8fefp-162, 0x1.f63c7ecba28d8p-898, 0.0, 0.0, 0x1.b2040059fdd36p-664,
     0x1.ff3843faf5eaep-1009, 0x1.f72b14e7f389bp-998, 0x1.3e8ab9cc0811fp-546,
     0x1.c6d18a83f9e5bp-86, 0x1.2885b1d70acecp-878, 0x1.7f0776865fb7ap-312,
     0x1.72e7a695b76bep-328, 0x1.3d7d0c6ff6583p-858, 0.0, 0x1.8cbaa5dd9b662p-438,
     0x1.6262b82320fa5p-944, 0.0, 0.0, 0.0, 0x1.26e39d5784555p-63, 0.0, 0.0,
     0x1.b6cf6d3ce6ee2p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eaba747c356edp-783, 0.0, 0.0, 0.0, 0.0, 0x1.c041720277036p-967,
     0x1.37de2e85aa794p-837, 0x1.b6353a4d984a3p-974, 0.0, 0.0, 0x1.936cb3199ce6ap-118,
     0.0, 0x1.662ec77b6f8d2p-35, 0.0, 0.0, 0x1.e5d0e57f5732fp-813,
     0x1.9816ba85a1a77p-305, 0x1.289bf308218a6p-306, 0x1.f55ecb1083b18p-890, 0.0,
     0x1.f10ae87e4508cp-495, 0.0, 0x1.aef6c048f39efp-603, 0.0, 0.0, 0.0,
     0x1.2250e01c0cc0ap-436, 0x1.5b901bb5ad22ep-800, 0x1.2e00408e9b0edp-338, 0.0, 0.0,
     0x1.4944ab2c90b31p-989, 0.0, 0.0, 0.0, 0.0, 0x1.17b527eaf94c2p-147,
     0x1.da8af092ae7bap-658, 0.0, 0x1.da910028de568p-627, 0x1.25c5d19c993a1p-574,
     0x1.7a2bb796084d5p-301, 0x1.77503fb5f705cp-888, 0x1.fc0295ff63b6bp-91,
     0x1.8b24780b4556bp-535, 0x1.b564df802cce8p-977, 0x1.11bc521ad083bp-923, 0.0,
     0x1.bef333fe22706p-545, 0x1.28da3f70e95adp-871, 0.0, 0.0, 0.0, 0.0,
     0x1.ef3b38e19d038p-917, 0x1.0247341b33e07p-409, 0.0, 0.0, 0.0,
     0x1.bd3e3d3fa7cbbp-1, 0x1.20c1194827753p-245, 0.0, 0x1.406e934ad7b6ap-738,
     0x1.7ba6aa816359fp-388, 0x1.6b8dc764b6251p-669, 0.0, 0.0, 0x1.72def097cd373p-267,
     0.0, 0x1.b3ee739269c4ap-220, 0.0, 0x1.da32bbcda1687p-385, 0x1.4d925a064ca01p-646,
     0.0, 0.0, 0.0, 0x1.a8d0f635b0233p-58, 0x1.6a683b48bcb0cp-483, 0.0,
     0x1.19db3f2c2aa3dp-22, 0.0, 0x1.bbc4cbc1af634p-726, 0x1.aff64f3b4a41bp-668, 0.0,
     0.0, 0x1.b9616a2f37616p-378, 0x1.53a2901e90a49p-362, 0.0, 0.0,
     0x1.67464655865dbp-109, 0.0, 0x1.996b967e61adcp-651, 0.0, 0.0, 0.0,
     0x1.114e4e9ce1p-13, 0.0, 0x1.e05333b190953p-902, 0.0, 0.0,
     0x1.64b4097b867aap-215, 0x1.71ea6e61a0215p-686, 0x1.fa2d07e08fd82p-568, 0.0,
     0x1.2be6ffddeb335p-574, 0x1.8dc1c2d6e9e4bp-873, 0x1.2e6d812173f51p-68, 0.0, 0.0,
     0.0, 0x1.a91d45af9ec35p-699, 0x1.e2d99ad0aa5d9p-199, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f562174a906cap-147, 0x1.fda1814bbacbdp-593, 0x1.bf9839a6a30a8p-1011,
     0.0, 0x1.2b519af2a461cp-206, 0x1.cbbe27f75e567p-66, 0x1.299e9e18d5d7dp-762, 0.0,
     0x1.cfdae8e0b79bfp-77, 0.0, 0.0, 0x1.5aef03a417c1ap-813, 0x1.01db7a480702fp-680,
     0.0, 0.0, 0x1.d5d1468124d81p-345, 0.0, 0x1.0b2ebda936d8p-409, 0.0, 0.0, 0.0,
     0x1.3dcd59f95abd4p-158, 0x1.9e9e3873d379cp-1003, 0x1.9e9475e8520e3p-779, 0.0,
     0.0, 0.0, 0.0, 0x1.c5d251492b492p-467, 0.0, 0x1.c5ec2f563ea7dp-555,
     0x1.1d28b21686ba7p-277, 0.0, 0.0, 0.0, 0x1.bbecbf0c828bbp-885,
     0x1.9225c79105087p-574, 0x1.ad2d8b37a387bp-804, 0.0, 0x1.d8db2eb92e2e8p-213, 0.0,
     0.0, 0x1.64ed8fc587609p-653, 0.0, 0.0, 0x1.43b0f90b946b8p-219, 0.0, 0.0, 0.0,
     0.0, 0x1.547a47525091ep-859, 0x1.d590c43a541b7p-92, 0x1.4b479d1b66ddbp-619, 0.0,
     0.0, 0x1.572bb2bd2664dp-1018, 0x1.83fb7a6f0e01bp-11, 0x1.552794548dfadp-305,
     0x1.55b6e133e45e6p-609, 0x1.484d37a3feaebp-557, 0.0, 0.0, 0x1.d5489674a829p-431,
     0.0, 0.0, 0x1.ce7cba3940a14p-326, 0.0, 0x1.0913697d3f8fbp-646, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b1801a2944014p-975, 0x1.e36c9bfa0209bp-966, 0.0, 0.0,
     0x1.37fada21925eap-534, 0.0, 0.0, 0.0, 0.0, 0x1.ff48823a37679p-781, 0.0, 0.0,
     0x1.c21b28a1413e3p-457, 0x1.d0f17809d25ap-617, 0.0, 0.0, 0x1.a7ab0c3749435p-341,
     0.0, 0x1.6c07c70da3204p-837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0fa32249a241cp-275, 0x1.669e2611a9692p-252, 0.0, 0.0, 0x1.990e743b5521cp-841,
     0.0, 0.0, 0.0, 0.0, 0x1.4f0ea5ded09f3p-869, 0.0, 0.0, 0.0, 0.0,
     0x1.57280bd433c1bp-680, 0x1.dae792edef546p-681, 0x1.9167bb2177b35p-426,
     0x1.443b94c40d336p-392, 0x1.cda1e421d5d0dp-206, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ebae0df346bdp-727, 0.0, 0x1.5c465b8592e69p-951, 0.0, 0x1.27a13475655e2p-891,
     0x1.6abafba14444ep-419, 0.0, 0.0, 0x1.9c472d1ec6c83p-997, 0.0,
     0x1.fdd7bd5d2365dp-65, 0x1.f7d2194104eecp-831, 0x1.37fbb7745e78dp-896,
     0x1.a8bc7d55018b3p-394, 0x1.571b82ce1f343p-958, 0.0, 0.0, 0.0, 0.0,
     0x1.0db25fca6d9a8p-662, 0x1.b0de57b2722f8p-361, 0.0, 0.0, 0x1.e899c94adcdb6p-936,
     0.0, 0x1.772500c3ba18p-26, 0x1.40cde7478bdfdp-362, 0x1.be150e30fd75dp-345, 0.0,
     0x1.aad9aa070b8cbp-812, 0.0, 0.0, 0x1.5463406235b69p-981, 0.0,
     0x1.4daeec8ea37d2p-674, 0.0, 0x1.67e65c4317e0ep-931, 0.0, 0x1.6d25a0ec341dcp-973,
     0.0, 0.0, 0.0, 0x1.c14e28c3daa11p-790, 0x1.4b470b47625b8p-182,
     0x1.6141958fa291dp-764, 0.0, 0x1.6d428864b2a75p-965, 0.0, 0x1.106fa0d6abd89p-217,
     0.0, 0.0, 0x1.7f98704137017p-435, 0x1.021e5b99bb146p-490, 0x1.15cb63616cda4p-639,
     0.0, 0x1.3d0ad08f46a87p-335, 0.0, 0x1.e44d3a5d0384ep-482, 0.0, 0.0, 0.0,
     0x1.0d04cdfad07eep-993, 0x1.5764e30b9b5bap-221, 0.0, 0.0, 0x1.9ab13f5766725p-748,
     0.0, 0.0, 0.0, 0x1.86fa11c702546p-405, 0x1.7a08693a35acap-102,
     0x1.bba9d4d253aacp-970, 0x1.c62f0ec9b691cp-125, 0x1.72830a4e55c45p-608, 0.0, 0.0,
     0x1.87e18dfdfbd44p-585, 0x1.7eb919e3d1b54p-189, 0.0, 0x1.17180e4c13ba2p-635,
     0x1.d33f32c151383p-930, 0.0, 0x1.04a74202b136p-826, 0.0, 0.0, 0.0,
     0x1.719d06d2c7e1fp-274, 0.0, 0x1.c3d5ebbe26e31p-432, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8630be44906b5p-717, 0.0, 0x1.a0a605d0625a4p-75,
     0x1.ffbf0e198112ap-121, 0.0, 0x1.817a797412988p-47, 0x1.70f8d244520f7p-525,
     0x1.8dc218fbcc585p-540, 0x1.9f92f5423f37ap-1016, 0.0, 0.0, 0.0,
     0x1.bea721292c1e2p-81, 0.0, 0x1.ad367b5223026p-40, 0.0, 0.0,
     0x1.6a6a709dc0668p-125, 0x1.4fb09482fa877p-270, 0.0, 0x1.9d28a4a706589p-692, 0.0,
     0x1.024d28c9a202fp-74, 0.0, 0x1.4f9ef40d10ef9p-950, 0x1.6c18eaefd9453p-534, 0.0,
     0.0, 0x1.4ee3a7bba06edp-811, 0.0, 0.0, 0.0, 0x1.e08998a344bd9p-400,
     0x1.7c362ce0009bbp-919, 0x1.34ca70255ec19p-89, 0x1.ff37f5d05cb9dp-573, 0.0,
     0x1.d7a5c20ec3cb6p-225, 0.0, 0.0, 0.0, 0.0, 0x1.8cce3580ad66ap-119,
     0x1.14c9fb5b66e78p-242, 0.0, 0.0, 0.0, 0.0, 0x1.468719624e841p-326, 0.0,
     0x1.feb1b6776abc7p-228, 0x1.86ad61d5322f2p-433, 0.0, 0x1.0104c5c347d23p-249, 0.0,
     0.0, 0x1.2d09eb303a272p-231, 0.0, 0x1.75af84eddc3cfp-582, 0.0, 0.0,
     0x1.3fc356fe7c1ap-976, 0x1.3565e920edc93p-1007, 0.0, 0x1.ea12a2907402fp-196, 0.0,
     0.0, 0x1.5d362ab05481dp-33, 0x1.6df705818975fp-910, 0x1.27f32bf09988bp-254,
     0x1p0, 0.0, 0.0, 0x1.bd77c9df07bb4p-165, 0x1.4bbd19f183e24p-793,
     0x1.df1f29213aeecp-253, 0x1.6abcfbdde559ap-841, 0x1.fcab1dcad178ap-16, 0.0, 0.0,
     0x1.9c81feb15a2a2p-968, 0.0, 0x1.431d03fb9276p-558, 0.0, 0.0, 0.0,
     0x1.bf3c15351508ep-244, 0.0, 0.0, 0.0, 0x1.ee871de10e386p-958,
     0x1.b438ae5349dddp-137, 0x1.0382d0e28c4bbp-267, 0x1.038464f2807cp-283,
     0x1.c79a687597cccp-717, 0x1.3ae8095f89dd5p-793, 0.0, 0.0, 0.0,
     0x1.2a5237aa3c2b9p-545, 0x1.1bf4d93a2295dp-699, 0x1.f60b4d324db2bp-991,
     0x1.46a3331396611p-970, 0x1.a5a25dc6670cbp-725, 0.0, 0.0, 0x1.e2ce8135cc923p-409,
     0x1.bd5f60d3b43ddp-368, 0x1.a9f1e53787276p-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6f73e457ebc47p-428, 0.0, 0x1.c064034161c6dp-37, 0.0, 0.0,
     0x1.4f00f875278d6p-383, 0x1.7bf943141aa7bp-992, 0x1.8e695040ab48ap-23, 0.0, 0.0,
     0x1.f5bd2df125f8bp-583, 0.0, 0x1.3514aec1aff65p-303, 0.0, 0.0,
     0x1.ca674b26b4506p-828, 0x1.cc01b7690980cp-519, 0x1.5d928f0836f5ep-438, 0.0, 0.0,
     0.0, 0x1.bbba890dd88c4p-704, 0.0, 0x1.397d7a0a575ffp-501, 0.0
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
    
    global_bench_acc = 0.0;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_coshd1_u35purecfma(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_coshd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshd1_u35purecfma bench acc %la\n", global_bench_acc);
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
