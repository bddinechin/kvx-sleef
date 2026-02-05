/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expd2_u10avx2128.c --function Sleef_finz_expd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.0ca84243795b6p-66, 0x1.c8b8a2bb9e0d2p-135, 0.0, 0x1.587ddfbcf5927p-559, 0.0,
     0x1.e9bbcf17ec0cp-64, 0.0, 0.0, 0x1.60b905d9f4f8ap-255, 0.0,
     0x1.e51e448da33adp-863, 0.0, 0x1.f6f355936633fp-822, 0.0, 0.0,
     0x1.ea240a3c3ef43p-774, 0x1.f2bed70f0de5dp-336, 0x1.d79b12e9e86cap-77, 0.0,
     0x1.11ab53a577dc8p-39, 0x1.b093bbc288a18p-1001, 0x1.f2f2be6e79272p-317, 0.0, 0.0,
     0x1.406763a242212p-929, 0x1.c3a97e548f86ep-768, 0x1.4803059ac9277p-39, 0.0,
     0x1.13e0020220832p-29, 0.0, 0.0, 0x1.2d6b85936cc67p-342, 0x1.dd844e302d87p-566,
     0.0, 0x1.837d8484f2ea3p-63, 0.0, 0.0, 0x1.f9fa9b50e698cp-264, 0.0, 0.0,
     0x1.5ecc13508dedbp-72, 0.0, 0.0, 0.0, 0x1.5ca220f7e2ceap-853, 0.0,
     0x1.0ab5dcbe6329bp-92, 0x1.5b77a35486e3ep-207, 0x1.771bc65fba35bp-318,
     0x1.61de843f8315bp-842, 0x1.3eb9d41d9b5a7p-577, 0.0, 0x1.a645c4ea5d10ep-447, 0.0,
     0x1.c614f8efa300cp-807, 0.0, 0.0, 0.0, 0x1.f8d2f12c235fp-503,
     0x1.219633c8f6c5cp-349, 0x1.9cfe2a76d443p-555, 0.0, 0.0, 0x1.3e5d29b8120a8p-991,
     0.0, 0.0, 0x1.7d18d9dafb6ep-569, 0x1.63436b106a15cp-721, 0.0, 0.0,
     0x1.0d9f5e0cb64e8p-823, 0.0, 0.0, 0x1.c59b50f4e66f5p-244, 0x1.da64a2b7395bbp-172,
     0.0, 0x1.b3da2645b4b03p-696, 0x1.b864e9165dcedp-906, 0.0, 0x1.9a4b8bd374707p-956,
     0.0, 0x1.289144c3b7e97p-596, 0x1.68946239c8b31p-189, 0.0, 0x1.3c66570852135p-367,
     0x1.5796f1cfdae1p-320, 0x1.e2956a18b514ap-302, 0x1.f2eb6c078ff3ep-771,
     0x1.bb87c0488ad03p-791, 0x1.c84b6a8602ccbp-586, 0.0, 0.0, 0.0, 0.0,
     0x1.2dd955ed80003p-788, 0x1.efb3208782e37p-839, 0.0, 0.0, 0x1.4a900905412e2p-689,
     0.0, 0.0, 0.0, 0x1.c0cd47c4451e3p-104, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d47f1ca86a24p-1012, 0.0, 0x1.8c524d5b61702p-576, 0.0, 0.0, 0.0,
     0x1.b573a59126ed3p-70, 0.0, 0.0, 0.0, 0x1.bfe1e8eb61213p-770,
     0x1.adf0c96e185cfp-460, 0.0, 0x1.ac69c8c8105d8p-687, 0x1.de62c7ecdf1f9p-83,
     0x1.a20fb56c45c69p-847, 0.0, 0.0, 0x1.b97f3ebf19269p-711, 0x1.52302bfe1f0b6p-245,
     0x1.5f5d5a995130ep-103, 0.0, 0.0, 0.0, 0x1.38a3858476cacp-229,
     0x1.5feb2703bc9c8p-370, 0.0, 0x1.6d46652a21ac5p-1000, 0x1.52acd874685c8p-701,
     0.0, 0.0, 0.0, 0.0, 0x1.182f9f01a1f3cp-760, 0.0, 0.0, 0x1.a2c2b8985639bp-965,
     0x1.014c631509d51p-459, 0x1.871e8b776f93cp-819, 0x1.8d22033c75a2dp-500,
     0x1.34069022f1d61p-904, 0.0, 0.0, 0x1.cbcb21ef61d69p-322, 0x1.19c925a3ffc1dp-25,
     0.0, 0.0, 0.0, 0x1.ab6e1137704d6p-675, 0.0, 0.0, 0x1.6cd02b8449f82p-650, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6637e46a07a0cp-426, 0.0, 0.0, 0x1.29f0b2ebfecbbp-891,
     0.0, 0x1.71f8043bed2ap-396, 0x1.105638892bb2fp-695, 0.0, 0.0,
     0x1.d9fa69b90e8b7p-883, 0.0, 0.0, 0x1.14a48408fa2d3p-352, 0x1.67656f707c179p-878,
     0x1.9ef21faad5f2fp-743, 0x1.13913171d1f2p-404, 0x1.f2abce3db6e33p-230,
     0x1.f9de9fbae6301p-161, 0.0, 0.0, 0.0, 0.0, 0x1.4e7bb9cbd457bp-101,
     0x1.c38e0092ecaa2p-529, 0.0, 0.0, 0x1.19c61f7dd332dp-282, 0x1.3f5a4991401a7p-279,
     0x1.6890a7648d22fp-652, 0x1.41bd076423637p-483, 0.0, 0.0, 0x1.ced722b3255a4p-559,
     0x1.8a9aeea652d5fp-210, 0.0, 0x1.6a9a009f7e1cap-946, 0.0, 0x1.db253c124fbfcp-339,
     0x1.235f280376cc8p-106, 0x1.687adb2a2665cp-398, 0x1.e9a162bd1a6bap-776,
     0x1.1e13bfeb913f6p-579, 0x1.2762028adf96dp-153, 0x1.946dd81171bd5p-765,
     0x1.07434884d8e71p-893, 0x1.f077b0d8147edp-231, 0.0, 0.0, 0x1.35900bf4db5c7p-27,
     0x1.f422e3af7673cp-522, 0x1.9098527ab8a04p-316, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bdeb5e30772ep-869, 0.0, 0.0, 0x1.6e21e36cc57a7p-827, 0.0,
     0x1.b828f616d6f8ep-618, 0.0, 0x1.dcac42ade4c39p-381, 0x1.261e77705f4dcp-106,
     0x1.227102aea1706p-252, 0.0, 0x1.303a1b830aa3bp-673, 0.0, 0x1.4f9dedde6a7d3p-699,
     0x1.c97d385eab772p-270, 0x1.8af5d4974e9f2p-664, 0.0, 0.0, 0x1.0cc654e3fe2f5p-949,
     0.0, 0x1.66165906d0b2ep-884, 0.0, 0x1.b91d70a767227p-319, 0.0, 0.0,
     0x1.e9112258425a6p-397, 0.0, 0x1.58624b32d7bc3p-782, 0x1.2bc16de9313b8p-528,
     0x1.d370e77c4eb66p-517, 0x1.e45c80ea0fc5fp-442, 0.0, 0.0, 0.0,
     0x1.69619cb95e4acp-166, 0.0, 0x1.8c2539c44c6bap-328, 0.0, 0x1.1ff2dbba05d47p-472,
     0.0, 0.0, 0x1.9bfc89a762411p-154, 0x1.2f71bb29be128p-385, 0x1.66b50058042dfp-256,
     0x1.fcf8de525332bp-773, 0.0, 0.0, 0x1.74db8ae267b3cp-299, 0x1.524e89766be7cp-27,
     0x1.cde5fb47b0825p-756, 0x1.4f88c9a33ca47p-198, 0.0, 0x1.0955bf5e9e223p-947,
     0x1.c66482601b997p-885, 0x1.4bae8a1bf450ap-628, 0.0, 0x1.731f7d0fc4731p-12,
     0x1.3674c7b71a544p-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2409647a52bap-524, 0x1.a1e38c2c4cc5cp-42, 0.0, 0.0, 0x1.5e7baf1f4a169p-722,
     0x1.720298b2e96ecp-233, 0x1.69d214c79811bp-499, 0.0, 0.0, 0x1.1b4e5e93ecc4fp-822,
     0x1.51d6912f9d7cep-112, 0.0, 0x1.a1c32afe67becp-437, 0.0, 0x1.d6aa4c37f7c3bp-251,
     0.0, 0x1.64f425bea9485p-61, 0x1.3505143d52d88p-562, 0x1.589c367d4d161p-372,
     0x1.e804cff49f7a7p-659, 0x1.29720983426dcp-131, 0x1.354772c09e21fp-233, 0.0,
     0x1.c7d304425d86cp-582, 0.0, 0x1.e54d0c7acb9d5p-545, 0x1.f98f729cef77cp-617, 0.0,
     0x1.6dc1066bd227bp-80, 0x1.84ff52872b66fp-28, 0.0, 0x1.ac77d7d266a4fp-992,
     0x1.a00a22e6438c6p-814, 0x1.39b16a4b8821cp-295, 0x1.4a7e4f93c0467p-365,
     0x1.0b01a77f78f7ap-568, 0.0, 0.0, 0x1.66e244cfe5c88p-523, 0x1.f6b1740924227p-100,
     0x1.e01abc388654ep-695, 0x1.508b3606f6c76p-816, 0.0, 0x1.6c883a8c45316p-183, 0.0,
     0x1.04dc5e1b170fp-618, 0x1.f2622d13743c4p-707, 0.0, 0x1.8cb3a47764bbbp-415,
     0x1.bc92a208f6251p-66, 0x1.e1159e9e41946p-999, 0.0, 0x1.f928220f90ab6p-289, 0.0,
     0.0, 0x1.4638b87e920cdp-78, 0x1.f768e832b9f52p-647, 0x1.8ce433b4c06bbp-341,
     0x1.1038d8a59beccp-580, 0.0, 0.0, 0x1.db494b64263b2p-607, 0.0, 0.0, 0.0,
     0x1.4dafbf3972dccp-578, 0.0, 0x1.172ab2dc1a654p-292, 0x1.21626b3c301fdp-214,
     0x1.7009f88287c21p-686, 0.0, 0.0, 0x1.d2679b4c611a3p-56, 0.0, 0.0, 0.0,
     0x1.ff805b3f145fap-150, 0x1.01ea24624f5eep-167, 0x1.b5889dc36cd6ap-108, 0.0,
     0x1.ab8b5d0895181p-58, 0x1.9a3624ae42804p-644, 0.0, 0.0, 0.0,
     0x1.37ca6a31e93d6p-156, 0x1.4f426a3e75fe4p-735, 0.0, 0x1.b449dbc05edacp-880,
     0x1.5d169caf64348p-967, 0x1.bcecabf8465ebp-755, 0.0, 0x1.cdcd19200d66cp-460,
     0x1.59e3c24086ba8p-266, 0.0, 0.0, 0.0, 0x1.af444868ab7fep-760,
     0x1.73c06ccc7f36ep-672, 0x1.d18f18bbb26cp-951, 0.0, 0.0, 0.0, 0.0,
     0x1.318d4e95c082bp-6, 0x1.2b163de23b71cp-58, 0x1.aca69eeb061b3p-396, 0.0,
     0x1.960eaf947eb93p-270, 0x1.7a11f3ceb45d4p-1019, 0.0, 0.0,
     0x1.74ad674b0fc1ep-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4296fa0ad925p-331, 0.0,
     0x1.361318c2f60eap-209, 0.0, 0x1.77713ac3552dcp-1019, 0.0, 0.0,
     0x1.2ff40c9ed8b96p-612, 0x1.566fb21e4b92p-987, 0.0, 0.0, 0.0, 0.0,
     0x1.9fe87b9b1bbdbp-612, 0.0, 0.0, 0x1.fa1d158dcee46p-331, 0.0, 0.0,
     0x1.3d63d396bf2dbp-138, 0x1.42e2babb579f9p-168, 0x1.af4cc09ae6a71p-330, 0.0, 0.0,
     0x1.a4e72e628e714p-779, 0x1.b784ce8c521a3p-340, 0.0, 0.0, 0.0, 0.0,
     0x1.e7a08cdf2de84p-1007, 0.0, 0x1.d75368c2fcf66p-729, 0.0,
     0x1.be543e1784c94p-970, 0.0, 0.0, 0x1.31584c307a2e8p-278, 0x1.1290606be44c3p-115,
     0.0, 0x1.673b4bc2ca76cp-46, 0.0, 0.0, 0x1.94cce2f9c91fep-813,
     0x1.7a14fd4b0fep-457, 0x1.12d439c491391p-845, 0.0, 0x1.5b276bea12beap-464, 0.0,
     0.0, 0x1.15bfa0e3d3238p-585, 0x1.33c8fbadb5745p-664, 0x1.fbac527ec2158p-877, 0.0,
     0.0, 0.0, 0x1.7e5747e79bf1ap-876, 0.0, 0x1.8f96d7854ee3dp-558,
     0x1.c025d8bcef033p-923, 0x1.0f0e4c7d8315ap-944, 0x1.ff1d64f61278ap-755, 0.0, 0.0,
     0.0, 0x1.647de4e954bb6p-838, 0.0, 0.0, 0.0, 0x1.f5e7eb864236ap-37, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a3248a0198513p-989, 0.0, 0.0, 0.0, 0x1.e5c9fafc3783ap-412, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.acdd379392367p-923, 0.0, 0x1.f47406126d055p-873, 0.0,
     0.0, 0x1.c27b3c63d876p-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0a3a64676ac9p-427,
     0x1.66b62d95135c9p-637, 0.0, 0x1.e4c7065cabf3cp-993, 0x1.9e2551bd2ada2p-690,
     0x1.08d7a9dcd166dp-80, 0.0, 0.0, 0x1.d40b20eab0ce2p-632, 0x1.8002c8ec0ecffp-661,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81f389f1389f8p-168, 0.0, 0.0,
     0x1.607a88dd8d0dcp-731, 0.0, 0x1.98749c1d4919fp-493, 0x1.2fc95c1d6e239p-624, 0.0,
     0x1.fc87dca9d11ddp-72, 0x1.b74c453629b8cp-75, 0.0, 0.0, 0x1.c0f3985335ca5p-984,
     0x1.9b6e431ca1b14p-103, 0x1.167d734e30677p-1005, 0.0, 0x1.1eb232b2c94e7p-831,
     0x1.e4763a89800a1p-378, 0.0, 0x1.c7b384e73d759p-898, 0x1.a010b707c1721p-484, 0.0,
     0x1.77be067a02eb3p-730, 0x1.e0013a5fd10e2p-1002, 0.0, 0x1.d694f1caa2ec4p-164,
     0.0, 0x1.e0f43dc668a99p-853, 0.0, 0x1.dbb8ced128634p-196, 0x1.408977cef5b8fp-724,
     0.0, 0x1.ffe6a93b566b6p-415, 0.0, 0x1.54065852babcap-1014,
     0x1.a5df6434b945cp-937, 0.0, 0.0, 0x1.3d1b83da3f37bp-204, 0x1.5ff0d0406eb95p-756,
     0.0, 0.0, 0x1.0fd86bef0fe75p-665, 0.0, 0.0, 0.0, 0.0, 0x1.dd7d0ba68d5b5p-648,
     0x1.abb20d3282207p-94, 0.0, 0.0, 0.0, 0x1.0f1f6db4ec5d2p-316,
     0x1.47c88c8e5fe83p-777, 0.0, 0x1.9aa522e212823p-588, 0x1.afca634d94e2p-10, 0.0,
     0x1.5048b14c68c62p-592, 0x1.9948c5f5aa591p-342, 0.0, 0.0, 0x1.3afb138b90cd6p-317,
     0x1.ab02fec7d4c13p-784, 0.0, 0x1.4f4bf07ce1ab8p-422, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.700ea4b0605dap-32, 0x1.5aa1bdd5ec0d5p-180, 0.0, 0x1.49e12129ad55cp-235,
     0x1.62130f2c37defp-271, 0.0, 0x1.caf3803c36aefp-957, 0x1.d9ebb32b0cep-239, 0.0,
     0.0, 0.0, 0.0, 0x1.ab39e4a1d58d9p-672, 0x1.603ea863385e3p-417,
     0x1.d93f965e1d473p-284, 0x1.922a7f02ad3cep-282, 0x1.19bf98492aa62p-171,
     0x1.0d87cd7a2ebadp-731, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7e0bc980540e6p-233,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73b1c2ddccf4cp-52,
     0x1.970a1f5c569e7p-100, 0.0, 0.0, 0.0, 0x1.1f48d5b268fa9p-117,
     0x1.fab73d6497a38p-865, 0x1.5dd58edbfa832p-676, 0.0, 0x1.6d9e28b697a7fp-1013,
     0.0, 0x1.3aa2a68394a9cp-650, 0.0, 0x1.c822138b105bep-884, 0.0, 0.0, 0.0, 0.0,
     0x1.abe6b501e3321p-394, 0.0, 0x1.a6601dab19e1p-940, 0x1.832c31053c2aap-395,
     0x1.0f87a2335b7fdp-570, 0x1.6543d166de511p-218, 0x1.aeda83d8f33a9p-642,
     0x1.05d5f6e534595p-429, 0.0, 0.0, 0x1.3c3c75fcc3787p-370, 0x1.279078b06e45cp-40,
     0.0, 0x1.d50837a538781p-663, 0x1.3f72f6f10fd79p-370, 0x1.9d06746be11b7p-409, 0.0,
     0x1.d5198cea7fdf6p-409, 0.0, 0.0, 0.0, 0.0, 0x1.b484e4c60303fp-419,
     0x1.9b73a98033f23p-53, 0x1.0154536fc67cp-228, 0x1.eb7ce9351cfp-496, 0.0,
     0x1.d2bfb3335da6bp-54, 0.0, 0x1.d6755282e9594p-19, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aacd0428d8a8ep-691, 0.0, 0x1.ac1b2a9553897p-354, 0.0, 0x1.f2881b429051fp-676,
     0.0, 0x1.58f081728a4b3p-390, 0.0, 0.0, 0x1.80ef00bdca2d6p-668,
     0x1.f8cdf1a93e85cp-307, 0x1.1902a62d73effp-7, 0.0, 0x1.f1a8f6b2dbb65p-57,
     0x1.77af246fdc5f5p-505, 0x1.2b964a776cb07p-385, 0x1.77abc6105b35p-457, 0.0, 0.0,
     0x1.1045639d9fccap-145, 0x1.17b745c476876p-1010, 0.0, 0x1.635e6f6bcee62p-145,
     0.0, 0x1.bb65d32656c45p-172, 0.0, 0x1.3380e337f2a0dp-171, 0.0, 0.0, 0.0, 0.0,
     0x1.087b3cef0eb5fp-683, 0.0, 0.0, 0.0, 0.0, 0x1.15bc14b30ac14p-342, 0.0, 0.0,
     0.0, 0.0, 0x1.ae87701d2f042p-123, 0x1.7080eb5ced406p-229, 0.0, 0.0,
     0x1.6efabb93dfab9p-842, 0.0, 0x1.7d35b6de503b7p-470, 0.0, 0x1.eb329d8fb4abap-795,
     0x1.a5a3069a74fc2p-977, 0x1.7858c39eb31e5p-871, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e4629a7fc9feep-95, 0.0, 0x1.cdaa598fa7b35p-550, 0x1.8a292aa19a8fdp-453,
     0.0, 0x1.8485ca93742a4p-760, 0.0, 0.0, 0.0, 0.0, 0x1.1ba14c5d6b3dp-596, 0.0,
     0x1.828bf3a0a2bb9p-326, 0.0, 0x1.f4faf9fe4aab5p-940, 0x1.fcc9f098879c7p-965,
     0x1.6321e33eeed8bp-25, 0x1.f20a22e94585dp-86, 0x1.15b2a45f97614p-453, 0.0,
     0x1.5eb822375268p-498, 0x1.9b9299f825cf1p-363, 0.0, 0.0, 0x1.e0b47d0f39315p-917,
     0.0, 0x1.573548c4059a5p-134, 0x1.a36d32a49466p-159, 0x1.b9161a7b56b38p-746,
     0x1.47abe5317a579p-475, 0.0, 0.0, 0x1.66ef4e386411cp-223, 0.0, 0.0,
     0x1.8d5de444e0f8ap-768, 0.0, 0x1.d5f7d3df09fe3p-834, 0x1.a134bdf3ee71p-330,
     0x1.a3245e77b5e62p-862, 0.0, 0.0, 0x1.46f58413a88adp-653, 0x1.5f7d01a8a7977p-461,
     0x1.9a42924be16a9p-934, 0.0, 0.0, 0.0, 0x1.9dd4759736f65p-148, 0.0, 0.0, 0.0,
     0.0, 0x1.bd819f94df322p-925, 0.0, 0.0, 0x1.a1f3136f6a312p-76, 0.0, 0.0,
     0x1.1c6d01cee8b36p-424, 0x1.08ad94b42c295p-401, 0x1.8aa331328dc76p-129,
     0x1.beb3540778fefp-374, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99bf2c487edbdp-387,
     0x1.e7fcacd018f64p-1006, 0.0, 0.0, 0.0, 0x1.c5956202eb2b2p-708,
     0x1.8a63374627725p-941, 0x1.982734db2cfc3p-261, 0x1.8a8ab840c5832p-715,
     0x1.2f8c42e6644ddp-603, 0x1.f43dcc7ff5aa3p-974, 0.0, 0x1.ddce3098cbc45p-161,
     0x1.47f7e65b04e63p-508, 0x1.2164a5d5d7221p-569, 0.0, 0x1.0ba906a73fe27p-570,
     0x1.d7d2ca37b84b6p-413, 0x1.606c900aab237p-151, 0x1.af6b488d26095p-736,
     0x1.5d357e555ca4p-117, 0.0, 0.0, 0x1.18556b7ffc4a9p-706, 0x1.b533a4d9ce9a6p-294,
     0x1.ab8267fa0795cp-816, 0x1.86e712bcfbe88p-439, 0x1.f1f5bf50c5af8p-92,
     0x1.8242ce3034914p-16, 0x1.634618e42958dp-149, 0.0, 0.0, 0x1.a1f9eb3942ae6p-455,
     0x1.82100fce85db5p-842, 0.0, 0.0, 0.0, 0.0, 0x1.6a99881af5cf3p-268,
     0x1.a153db8339c27p-480, 0.0, 0.0, 0x1.f6091d2c52a2ap-127, 0x1.916e101cfa132p-191,
     0.0, 0.0, 0x1.6c01a9d4bd8f3p-976, 0x1.5c4b75b732bdbp-69, 0.0,
     0x1.40509ccc231c6p-816, 0x1.a5bfe227f1658p-893, 0x1.b41be9bc15b02p-426, 0.0, 0.0,
     0x1.ac191141a4506p-229, 0x1.0a5967b19c27fp-387, 0.0, 0x1.63ca3613106abp-57,
     0x1.cb5b2b177fc85p-910, 0.0, 0x1.c05ab8a630fb2p-736, 0.0, 0.0,
     0x1.e1075f5fabb5ap-264, 0.0, 0x1.e76bcaf0dc7b9p-860, 0x1.56b41b07cc07bp-620, 0.0,
     0.0, 0.0, 0x1.3b42cbe1ef791p-77, 0x1.40b866d1258f6p-785, 0x1.630d2bd05deffp-170,
     0.0, 0x1.02fb49736e8cdp-6, 0.0, 0x1.fbf84dacfe597p-135, 0.0, 0.0,
     0x1.9d83d877de818p-171, 0.0, 0.0, 0x1.18f77cba4207ap-86, 0.0,
     0x1.2ee2a67a1396p-575, 0.0, 0x1.73236fed331a1p-901, 0.0, 0.0,
     0x1.c9d72191b430ep-459, 0x1.8480e3c9413d3p-406, 0x1.aad766518f195p-941, 0.0, 0.0,
     0.0, 0x1.d961f0a7d37bbp-5, 0x1.c621ab7f2f892p-415, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df682725e5471p-570, 0.0, 0x1.62cfb24dd1413p-809, 0x1.ac67fc39c6883p-625, 0.0,
     0x1.24735764fd6cbp-251, 0.0, 0.0, 0x1.abc01da5597f1p-810, 0.0, 0.0, 0.0,
     0x1.de355b979adffp-887, 0.0, 0x1.029934adf68a4p-394, 0x1.f0040886aab0ap-471, 0.0,
     0.0, 0.0, 0x1.b424d751adf36p-727, 0x1.3e8c0d501aae8p-77, 0x1.01f6933cfa02fp-113,
     0x1.3b1ae2bf8adbbp-121, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.adcf139092b62p-66,
     0x1.46561328b893cp-599, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9fb36ed927196p-174,
     0x1.c44d3c8123bb2p-480, 0.0, 0x1.e332241b2f8b4p-217, 0x1.cb057b9f63811p-578, 0.0,
     0.0, 0.0, 0.0, 0x1.506e7b7812495p-784, 0.0, 0x1.884caab0e157ep-10,
     0x1.ca03cf9b7d3ccp-25, 0x1.82d4ed7133144p-55, 0.0, 0x1.212231b30da16p-416, 0.0,
     0x1.75b57bfcf5ff8p-494, 0.0, 0x1.a70bf79d70cc2p-279, 0x1.e260beddb9efdp-374, 0.0,
     0.0, 0.0, 0x1.ad336b9992067p-759, 0.0, 0x1.8d539bf32cae1p-282, 0.0,
     0x1.495c6eee0330fp-285, 0.0, 0.0, 0.0, 0x1.0f2b91b0c8decp-754, 0.0, 0.0, 0.0,
     0x1.5ea4bc3e5ffaap-144, 0.0, 0x1.5e9d94cddf7ebp-463, 0x1.adf9335844d9ep-938, 0.0,
     0.0, 0x1.b912a55023603p-373, 0x1.e7e30988c2816p-44, 0.0, 0.0,
     0x1.9f77d3d908defp-1008, 0.0, 0.0, 0.0, 0x1.60885088c041ep-61,
     0x1.bf9bd7ede239ap-675, 0x1.fce7d51d8901bp-551, 0.0, 0.0, 0.0,
     0x1.84661d54af0e4p-639, 0.0, 0x1.80ba6833da4c8p-214
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_expd2_u10avx2128(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_expd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
