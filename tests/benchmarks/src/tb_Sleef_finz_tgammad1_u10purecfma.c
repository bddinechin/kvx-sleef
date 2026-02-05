/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammad1_u10purecfma.c --function \
 *     Sleef_finz_tgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.5aec9bcfececbp-12, 0.0, 0x1.aef6658d523p-781, 0x1.6ecc4329ca9b7p-736,
     0x1.b7a9afb14abeap-178, 0x1.d63e946e967adp-723, 0.0, 0x1.545edd09256fep-319,
     0x1.1aa3396865cfap-673, 0x1.d30840407db41p-680, 0x1.a76f47c3ed6dap-1015, 0.0,
     0x1.93d985b213151p-751, 0x1.d67eba837bbc3p-223, 0x1.d6eb5e00700edp-301,
     0x1.a6098549448d5p-78, 0x1.161369916fb2ap-883, 0x1.63bcbe43a492ep-324, 0.0, 0.0,
     0x1.e40e2ffaddf1ep-676, 0.0, 0x1.85f19b54210a7p-628, 0x1.5c18a54987da2p-940, 0.0,
     0x1.d44f045219105p-618, 0.0, 0.0, 0.0, 0x1.7b9e09609625fp-173,
     0x1.22d6cd66b9ca6p-384, 0.0, 0x1.876254528eac2p-350, 0.0, 0x1.a40566548fdp-390,
     0.0, 0x1.8436a84d30f63p-36, 0.0, 0.0, 0x1.65fb3f1d82669p-306,
     0x1.3419f55c5788ap-505, 0x1.989fed236ca03p-214, 0.0, 0.0, 0.0,
     0x1.7cbc0b7c58facp-193, 0x1.42e90ad0fe17dp-576, 0.0, 0x1.9e417d240d8efp-351,
     0x1.f3e3d414849f5p-23, 0x1.5c4babc05da8fp-363, 0x1.351715e3d4df1p-9,
     0x1.083d16dbd1d4ap-504, 0x1.b79540d75158dp-599, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93269fbccce6cp-988, 0x1.fc675c2ceec29p-496, 0x1.57ce97ebe82fbp-235,
     0x1.27b7547c257adp-558, 0x1.53ab84c0d6813p-701, 0.0, 0.0, 0x1.5a3189bc098d4p-702,
     0.0, 0.0, 0x1.9b79ead6ca75bp-263, 0.0, 0x1.4dece6c3475bap-625, 0.0, 0.0,
     0x1.b65e9ab5ae8aap-808, 0.0, 0.0, 0x1.bd560302b80bp-690, 0.0, 0.0, 0.0,
     0x1.5e34daf6230fep-131, 0.0, 0x1.86e97ca70a26dp-968, 0x1.b17f3c4b0db71p-158, 0.0,
     0x1.8263fc2f07d2bp-985, 0x1.365367c5c379ep-396, 0.0, 0x1.9bfa65a4343c5p-1022,
     0x1.a61986eef127dp-600, 0.0, 0x1.3c329f85b3c74p-58, 0x1.99721e1d10ec7p-756, 0.0,
     0.0, 0.0, 0x1.8cf1804102b59p-263, 0.0, 0.0, 0x1.8ce5633ad2887p-968,
     0x1.e5654da2bf816p-137, 0.0, 0.0, 0.0, 0x1.68cd0ae15456bp-770, 0.0, 0.0, 0.0,
     0x1.6064de8ea2f61p-398, 0x1.5fafd0fd22419p-801, 0x1.d02120d036ba7p-445,
     0x1.cfba887ace9cp-726, 0x1.1e27b731bfc82p-976, 0x1.0a808642963a4p-337, 0.0,
     0x1.3d4d2fad3889p-638, 0x1.af57cf2996344p-414, 0x1.e4835ad70797ap-134,
     0x1.ce052c8f641ep-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93f544755008p-260, 0x1.8be93bcb83edap-755, 0.0, 0.0, 0x1.29faab51f0b88p-15,
     0.0, 0.0, 0x1.b114942015a1ap-531, 0x1.446e9cb6b83b3p-365, 0.0, 0.0, 0.0, 0.0,
     0x1.918b768437048p-98, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a82bb72923d2p-833,
     0x1.acc46fd2c9464p-523, 0x1.c84236a883e85p-623, 0x1.e01be266d6e19p-210,
     0x1.85b86f9088b2bp-920, 0.0, 0x1.2a939970e9123p-388, 0x1.7e085a660e216p-54,
     0x1.cd3e0b81a20b9p-263, 0.0, 0x1.212fb3c58be31p-841, 0.0, 0x1.7e61c7b660f28p-841,
     0x1.b70f5118804b8p-965, 0x1.b7f89184fb8d2p-949, 0.0, 0.0, 0x1.dffa2bc2e79c1p-934,
     0x1.e4a3c1d54836p-892, 0.0, 0x1.63f70494a213p-436, 0x1.9d6aaf7419508p-968,
     0x1.7823a601298f7p-793, 0x1.90e917dd6b31fp-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c3fc60b96c5ep-211, 0.0, 0x1.be5a83974c03bp-995, 0.0, 0.0, 0.0,
     0x1.0b68ca92ce24ap-656, 0x1.b153f4454aa56p-166, 0x1.a0e9a009c47c1p-466,
     0x1.e73528bc25f28p-597, 0x1.6fbc97ea81849p-995, 0.0, 0.0, 0.0,
     0x1.337292b4fc711p-674, 0.0, 0x1.5c8a66fb9c024p-218, 0.0, 0.0,
     0x1.3866052d8d548p-988, 0.0, 0x1.a356d4a8bae66p-421, 0.0, 0.0,
     0x1.126061612feap-833, 0x1.e36f8f5f2d49ap-1003, 0.0, 0.0, 0x1.459362a88d52ep-134,
     0x1.2304078514279p-434, 0.0, 0x1.a1e41c33cdec4p-682, 0.0, 0x1.565240036a2a9p-774,
     0x1.04ec8b9017109p-717, 0.0, 0x1.103bbcc666fbap-365, 0x1.1647f7d47d1bp-589,
     0x1.f840b3d5531a1p-332, 0x1.4d2cdab0ba7d3p-934, 0.0, 0.0, 0.0,
     0x1.20aac557f26b3p-552, 0.0, 0x1.13e6a9b25471bp-419, 0.0, 0.0, 0.0, 0.0,
     0x1.a387a7559175cp-846, 0.0, 0x1.2cd1c84636c5fp-434, 0x1.f0a92d3a35024p-37, 0.0,
     0x1.43129d1aa0ee9p-586, 0.0, 0x1.626eddab0635dp-836, 0x1.6543ba9aa2844p-542, 0.0,
     0x1.bf43bd5bdc4f1p-549, 0.0, 0x1.6ca8434f9b1a6p-914, 0.0, 0x1.af577f493446ep-236,
     0.0, 0.0, 0x1.318528f2181d7p-580, 0.0, 0.0, 0.0, 0x1.53f8d0905eb55p-350, 0.0,
     0x1.50392d1e784c1p-744, 0x1.bbaa7ffebd3d3p-900, 0x1.b5b7f39e028abp-642, 0.0, 0.0,
     0.0, 0.0, 0x1.431c017858d4bp-386, 0.0, 0x1.83ac2e2840ca2p-776,
     0x1.1edf319aac7a1p-760, 0x1.f2cc727e03b5bp-173, 0.0, 0.0, 0.0,
     0x1.3672b1db0f6b6p-370, 0x1.5cf0622051e75p-396, 0x1.b94cf54a372e4p-501,
     0x1.54a4c785d7c74p-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cf421761c09dap-484, 0.0, 0.0, 0.0, 0x1.74452d45fd344p-557, 0.0,
     0x1.1b853367bc341p-49, 0x1.494c7fbccde9dp-165, 0.0, 0x1.5040e66d4153cp-167, 0.0,
     0x1.9cb072b31b215p-955, 0x1.24cd93554d541p-522, 0.0, 0x1.d3086e8c078a6p-894, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd71499d7558fp-724, 0x1.c06be9b52f747p-947, 0.0,
     0x1.7c0bacdeeb9b5p-199, 0x1.d64a126a198c3p-473, 0.0, 0x1.7209de61ab89cp-545,
     0x1.305478ed810aep-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d108b0387289cp-89, 0.0,
     0x1.f9eaf562ba3fbp-487, 0.0, 0.0, 0.0, 0x1.63106a9b25e28p-178,
     0x1.df0ba1cc5c50ep-827, 0.0, 0x1.5815f2bd8447ep-660, 0x1.cd0d1a9bf9c52p-118, 0.0,
     0.0, 0.0, 0.0, 0x1.24c761fbc931fp-322, 0x1p0, 0.0, 0x1.4d3ecedd62fb2p-976,
     0x1.dba30c4b4f846p-196, 0x1.980b7473cc215p-76, 0.0, 0.0, 0x1.5badc9ac08322p-979,
     0.0, 0.0, 0.0, 0.0, 0x1.6833b3a3639a7p-188, 0x1.5b1bad0f42988p-376, 0.0, 0.0,
     0x1.3f6d47f2ee185p-683, 0.0, 0.0, 0.0, 0x1.e61a2e50a706fp-112, 0.0,
     0x1.9324f49dce05bp-587, 0x1.9e979842a0504p-451, 0x1.2746c0396a64cp-35,
     0x1.e9b025603d0eap-398, 0x1.b914b71e0926bp-544, 0x1.73b980b70193ep-685,
     0x1.6c8c9102cab93p-73, 0.0, 0.0, 0x1.12a552664b715p-172, 0x1.aad466af4e80fp-64,
     0x1.0a965b74baff5p-169, 0.0, 0x1.c7317dfdaed9dp-384, 0x1.e7814e852ad6ap-766, 0.0,
     0x1.c7efb79e50f64p-918, 0x1.5da0560f01eabp-923, 0x1.5f167b75c8b0bp-143,
     0x1.b2e0d69ed68e1p-279, 0x1.a8c3a89e26c2ep-872, 0.0, 0x1.762205c228923p-556,
     0x1.042352c3257p-345, 0.0, 0.0, 0.0, 0x1.f8cc6c640de6bp-834,
     0x1.cd634ff2f134fp-703, 0x1.23ba90b5026b3p-295, 0.0, 0.0, 0.0, 0.0,
     0x1.b63350daccd63p-320, 0.0, 0x1.340b6d6d58b1ep-702, 0.0, 0x1.0b869895f38ep-896,
     0x1.e2c987fdfd5bbp-415, 0x1.fafede092c706p-737, 0.0, 0x1.13b498b216ddcp-943, 0.0,
     0.0, 0.0, 0x1.570d6e94a4772p-305, 0.0, 0x1.c0e30f50b0991p-582,
     0x1.bf091716b0375p-709, 0.0, 0x1.bdb933ab8af3p-676, 0x1.6528e1a442db6p-880, 0.0,
     0.0, 0x1.62696af91f22ep-365, 0x1.ad5bba1400759p-466, 0.0, 0x1.8fb8086cf88bp-573,
     0x1.c8886cf8e0146p-105, 0.0, 0x1.2df1667c4cf43p-905, 0x1.b26961a8f2b61p-693,
     0x1.6ab4d1a9bf427p-146, 0x1.2489dbdeac6aap-882, 0.0, 0x1.d5c2a8fc97c52p-13, 0.0,
     0.0, 0.0, 0x1.1d93e94f82d89p-445, 0.0, 0x1.d470334592f74p-482,
     0x1.51151ee6609ffp-427, 0x1.9a59f75c2e9cep-422, 0.0, 0x1.9c1e3f58f4a65p-792, 0.0,
     0.0, 0x1.aa76d62db3d7p-643, 0.0, 0.0, 0x1.1282e9318c625p-750,
     0x1.2e1e43e6a190cp-392, 0.0, 0x1.74de373696455p-206, 0x1.cf30df0b7dc4ep-417,
     0x1.41dd4076fe812p-519, 0x1.c37d88d2614e8p-926, 0.0, 0.0, 0x1.571d2e777ebcbp-696,
     0x1.c21109e51c475p-978, 0.0, 0.0, 0.0, 0x1.9e4bd6b4afadp-938,
     0x1.e92bd43c3fc7bp-309, 0x1.532689947c0f1p-934, 0x1.2e576ddd69c0ap-673,
     0x1.c825ee3192c3ap-465, 0.0, 0.0, 0x1.8c05f4b24f641p-839, 0.0,
     0x1.14b4fdc7f34e7p-848, 0.0, 0x1.5fa6852671b79p-912, 0x1.f50b4c1bdaa96p-922, 0.0,
     0.0, 0.0, 0x1.1c8626cbc2f54p-848, 0x1.caf6c00449525p-992, 0.0,
     0x1.8ba15242c762cp-856, 0x1.124af21e70f1fp-269, 0x1.cfda1579ff945p-164, 0.0,
     0x1.6cbafc4f2e143p-511, 0x1.a5a324623746cp-779, 0x1.262fb75f54ef9p-488,
     0x1.6082485abd0ddp-823, 0.0, 0.0, 0x1.c267795593a04p-546, 0x1.603710a588266p-967,
     0.0, 0x1.a5ac750130df5p-98, 0x1.c1a1b924de6f9p-407, 0x1.74680249de386p-384, 0.0,
     0.0, 0x1.fc8469552e03ap-273, 0.0, 0.0, 0x1.9f8f976d4ffcfp-236, 0.0, 0.0,
     0x1.1a48a092aa179p-700, 0x1.d2306b4c47cf9p-572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88c4c45d18bd3p-602, 0x1.8287e374166cap-521, 0.0, 0x1.4843910171326p-758,
     0x1.b5783f4159c03p-59, 0x1.d7bde66c66d6ep-564, 0.0, 0.0, 0.0, 0.0,
     0x1.b9e5bb29ed8cp-215, 0x1.cab1075d356ffp-763, 0.0, 0.0, 0.0,
     0x1.13284cf5032p-689, 0x1.57c3eae4d351cp-438, 0x1.f2a4ba15071a8p-268, 0.0,
     0x1.fe2ac3accde86p-60, 0x1.560a1b891e978p-79, 0x1.a76c290c3f64dp-962, 0.0,
     0x1.fc3432da8d791p-1005, 0.0, 0x1.6247167bc6b61p-310, 0x1.e1ef6b63c78d3p-130,
     0.0, 0x1.8e5b47cdb4291p-499, 0x1.d5b2e936b3718p-255, 0.0, 0.0,
     0x1.33766bfdd76c5p-458, 0x1.e4487e134a51ep-33, 0.0, 0.0, 0.0,
     0x1.7201737bb16b3p-255, 0x1.0fe2e4d8e8d5bp-803, 0.0, 0x1.07df08226729dp-415,
     0x1.f04d95139fa94p-443, 0.0, 0.0, 0x1.ce04b210dca14p-277, 0.0,
     0x1.c9c8c7974a4f5p-91, 0x1.c6ae64841bc3bp-676, 0.0, 0.0, 0x1.276f642e607f6p-755,
     0x1.48030127822ccp-360, 0.0, 0.0, 0x1.538438aed2ffp-526, 0.0, 0.0,
     0x1.a8b277561b378p-430, 0x1.5f21bf2d95683p-798, 0x1.b7fc231ed3486p-296, 0.0,
     0x1.8296cd9109f5dp-234, 0x1.51c0cf067a88fp-332, 0x1.4718989fdadedp-173,
     0x1.9c40f8d81996ap-418, 0.0, 0x1.bb97aa379e355p-593, 0x1.1510691ed0f18p-812,
     0x1.d653633d229f2p-351, 0.0, 0.0, 0x1.c7cff83ff200dp-603, 0x1.f098298868171p-476,
     0x1.1ad15a6f52ad1p-117, 0.0, 0.0, 0.0, 0x1.386be40969fc2p-919,
     0x1.408da00c6ba75p-337, 0.0, 0x1.5aabbe392a428p-461, 0.0, 0.0, 0.0,
     0x1.5e73b0fd8f984p-791, 0.0, 0x1.57fcaa263ad89p-430, 0.0, 0x1.99c32323fa8a5p-570,
     0.0, 0x1.7ba153533a3e9p-504, 0x1.136f0c9e2c309p-138, 0.0, 0.0, 0.0,
     0x1.b67a633dc3966p-36, 0.0, 0x1.b1a7383133e0bp-157, 0.0, 0x1.1e75e65289166p-406,
     0.0, 0x1.ed650cc3e8a2fp-1006, 0.0, 0.0, 0x1.a329872938b28p-546,
     0x1.b5915fdfe296dp-671, 0x1.fc3796cd00734p-271, 0.0, 0x1.0130d865ad3f2p-869,
     0x1.968ad1fc565cap-223, 0x1.90edee0dad9cp-515, 0.0, 0x1.8abda2c3f6666p-913,
     0x1.a90667ade73fdp-752, 0x1.4a07979a99716p-334, 0x1.2067bf43aa2b9p-239, 0.0, 0.0,
     0x1.0314ac8a7612bp-149, 0x1.fa080c7b40f8dp-147, 0x1.bb3f2d8609c6bp-673,
     0x1.53445a08d2e78p-655, 0x1.844f3894e3331p-674, 0x1.224e66a91f4abp-551, 0.0,
     0x1.4033e52562e73p-763, 0.0, 0.0, 0.0, 0.0, 0x1.0623f20bf8a13p-593,
     0x1.777720882b067p-197, 0x1.0082e3a057ee3p-31, 0.0, 0.0, 0x1.7c8651f8c4e9ep-876,
     0.0, 0x1.84ea9d1627fc3p-15, 0x1.579833f5c81f9p-61, 0.0, 0.0, 0.0, 0.0,
     0x1.491bc2d9068afp-1004, 0x1.c38b260a8159dp-293, 0x1.da3e4c807c713p-869, 0.0,
     0.0, 0x1.fa5f076c5e0c2p-874, 0.0, 0x1.df46e93125627p-743, 0.0, 0.0, 0.0, 0.0,
     0x1.7462494139503p-305, 0x1.711eebbd6abe9p-90, 0x1.0302a062f272ap-994,
     0x1.30d71661c430fp-646, 0x1.6fedb60be068bp-868, 0.0, 0.0, 0x1.c04ec39f928cep-786,
     0.0, 0.0, 0x1.84561b9996b01p-30, 0x1.dc721b4c0d0c6p-86, 0x1.eec944ea25c7fp-665,
     0.0, 0.0, 0x1.a5278a5483d23p-888, 0x1.4675c5a253ca3p-605, 0x1.e6bae67a853a1p-955,
     0x1.92915f691a6f4p-168, 0.0, 0x1.b367249a25638p-120, 0.0, 0x1.517c67a6e4af1p-522,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79d198585d26p-949, 0.0, 0.0, 0x1.e08e88951d862p-387,
     0.0, 0.0, 0x1.cc05d884964fbp-663, 0x1.60e8fc3663d8p-602, 0x1.33f8f36b90c4cp-499,
     0x1.dc3561e942e99p-628, 0.0, 0x1.e6ff90326c9b8p-82, 0.0, 0.0, 0.0,
     0x1.05332a5146621p-761, 0x1.f60c5d41c0b1fp-925, 0x1.256d8725aba03p-400, 0.0, 0.0,
     0x1.abce8992d971fp-292, 0.0, 0x1.5c0794a0b3b26p-1, 0x1.df00a0246caaep-701,
     0x1.7228effd0f9d9p-627, 0x1.faf8081180d67p-641, 0.0, 0.0, 0.0,
     0x1.f2e11b37d52ecp-312, 0.0, 0.0, 0.0, 0.0, 0x1.b7c04fbffdec6p-362, 0.0, 0.0,
     0x1.2fab7c85faebap-129, 0.0, 0.0, 0.0, 0.0, 0x1.fd2e3abb2d12ap-938,
     0x1.74cfe6c55212p-298, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.431f4da6f7deap-174,
     0x1.4eb04ad0af621p-276, 0.0, 0.0, 0x1.5421f20d9a0cbp-755, 0.0, 0.0, 0.0,
     0x1.ce8a1306c187dp-258, 0.0, 0.0, 0x1.0fb449d4d8573p-224, 0x1.45214c93afd2dp-934,
     0.0, 0x1.53f7779868522p-104, 0.0, 0x1.755043966985ap-345, 0.0,
     0x1.d6808dd893bc1p-359, 0.0, 0.0, 0x1.dff3d72c994efp-64, 0x1.5d87379637a5fp-121,
     0.0, 0x1.da0a23b54928ep-807, 0.0, 0x1.263d96e21759bp-121, 0.0,
     0x1.b5a0c40995279p-359, 0.0, 0x1.d96467e06cd06p-337, 0x1.ff092492b0188p-843,
     0x1.6e8ea994dd77cp-267, 0x1.98d862096dd9cp-237, 0.0, 0.0,
     0x1.b99e2a3580b77p-1010, 0x1.2b70c8dac3ca5p-775, 0x1.036736068fe9p-140,
     0x1.382ddffd94a8ep-591, 0x1.7fe0fa6a2ed2ap-555, 0.0, 0.0, 0.0, 0.0,
     0x1.2474343d1ad9cp-342, 0x1.af37169de3f6ep-448, 0x1.3971d23fdf061p-861, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3beec26e5399ep-640, 0x1.3d56bde0d4807p-280,
     0x1.16c19679cc5cep-427, 0.0, 0x1.2474172f42256p-305, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c8bd04898f641p-928, 0x1.d5f04ac6a53f1p-726, 0x1.4bcda9863cc84p-622,
     0x1.2396b4405cc27p-634, 0x1.ea2e8a04388d7p-199, 0.0, 0.0, 0.0,
     0x1.b21d154a85139p-893, 0x1.06340c2742779p-871, 0x1.923a6a2ce183dp-30,
     0x1.e8cb677e6e1e8p-565, 0x1.d94259ab76873p-822, 0.0, 0.0, 0.0,
     0x1.4524e9f912029p-1, 0x1.16102c4801c04p-225, 0.0, 0.0, 0.0,
     0x1.20191f542ed41p-396, 0x1.70181adbc4cb2p-144, 0x1.3f927106063e7p-616, 0.0, 0.0,
     0.0, 0x1.40b27f6e1432ep-335, 0.0, 0x1.e7401fc7b92cfp-583, 0x1.3a2b4f4f19932p-781,
     0x1.b73f9f79a7c46p-441, 0x1.bee5c5e2b0f04p-589, 0.0, 0.0, 0x1.573fc6be755d8p-105,
     0.0, 0x1.03728691e7aaep-733, 0x1.8b7f268548ec5p-209, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4684719e6691ep-244, 0.0, 0.0, 0x1.49f27632c1b46p-230,
     0x1.727ab34d3a758p-884, 0.0, 0.0, 0x1.5ada54db1dd44p-150, 0.0, 0.0, 0.0,
     0x1.265c2add35982p-762, 0x1.365c3c64cb534p-562, 0x1.0e19fd204327cp-379,
     0x1.af183da5443abp-918, 0.0, 0x1.67724582375a9p-434, 0.0, 0.0,
     0x1.1c994cea11708p-779, 0.0, 0x1.f5c2e573da7afp-967, 0.0, 0.0, 0.0, 0.0,
     0x1.fe2e30e5f3954p-698, 0x1.a5a62056520a6p-672, 0x1.264f78efbc745p-421,
     0x1.2840eea43fc2bp-192, 0x1.4067777ebd4d8p-270, 0x1.a8063a0476f37p-165, 0.0, 0.0,
     0x1.70ef6eb9eeb6p-581, 0x1.e3936a44fd0e3p-159, 0x1.ad51ed83c4cb1p-964, 0.0,
     0x1.cb094bececff2p-74, 0.0, 0x1.a690b162bbe44p-565, 0x1.b2d5e4cbe0edep-470,
     0x1.e8e870b73fb34p-827, 0.0, 0x1.6c3b326b0b6bep-464, 0x1.245452bd768d3p-272, 0.0,
     0.0, 0x1.ae44b92866843p-92, 0.0, 0x1.72d53042b1c7bp-309, 0x1.526f5b5ab7463p-165,
     0.0, 0.0, 0.0, 0.0, 0x1.a8c89cd2b68a5p-29, 0x1.91809e0530b7fp-27,
     0x1.41203a2155399p-132, 0.0, 0x1.00d61fd8ab69ap-73, 0.0, 0.0, 0.0,
     0x1.234fdc22c3925p-67, 0x1.3f9895e9d3d27p-83, 0x1.e6a356afd9449p-498, 0.0,
     0x1.1c673de0121c9p-301, 0x1.af1db759b0894p-257, 0.0, 0.0, 0x1.379a23d940ae6p-435,
     0.0, 0x1.bac5e208da094p-429, 0x1.a847909b641e7p-742, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3786b979add2p-689, 0.0, 0x1.a9cc97b5c72p-376, 0.0, 0x1.99a264c8861aep-128,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31eda48e00dabp-871, 0x1.9f86b18aad7ecp-339,
     0x1.6a3e7214b095ep-924, 0x1.6d234c1607e73p-740, 0.0, 0x1.a19aac91bf50dp-205, 0.0,
     0x1.7ddf36b2b6db5p-466, 0x1.73b09aa3de53ap-178, 0.0, 0.0, 0x1.becf28f36522cp-249,
     0x1.63368c6939f25p-85, 0x1.d7720287de2c9p-115, 0.0, 0.0, 0.0, 0.0,
     0x1.f8dbda21c8efp-219, 0.0, 0.0, 0x1.7784cb4759162p-470, 0.0,
     0x1.a3cb8f921ce13p-899, 0.0, 0x1.e1f67a57c8bdbp-32, 0x1.9f5d937fddd0cp-615, 0.0,
     0.0, 0.0, 0x1.57d5e8b860c71p-542, 0x1.cae0eb09032d2p-785, 0.0,
     0x1.7b1c32fe3446bp-122, 0x1.976ee9e50e887p-692, 0.0, 0x1.fde7dedba4b75p-633, 0.0,
     0x1.ba4184df4194bp-754, 0x1.3453e2a862f4bp-413, 0x1.fb56e9b3a4efp-916,
     0x1.6cde0b4848f14p-409, 0x1.10ae0c192aec4p-357, 0.0, 0x1.d38cb93f7ed52p-290, 0.0,
     0x1.b63792e6a227ep-217, 0x1.9eeecb8165ad8p-599, 0x1.82282292bfacfp-904, 0.0,
     0x1.4ac6513d824bap-520, 0x1.30e10347545d9p-668, 0.0, 0.0, 0.0, 0.0,
     0x1.91384cef24418p-619, 0.0, 0x1.8f86f4c83ab74p-74, 0.0, 0x1.67bb0949504c3p-452,
     0x1.9665bf135ededp-226, 0x1.3a9e2ecf4bf96p-259, 0x1.28de537aebc7fp-555,
     0x1.7b278108be6c1p-768, 0x1.5fd9be6fb75b4p-443, 0.0, 0x1.60474ea9a2f3ap-168, 0.0,
     0x1.2e83443f6de8fp-262, 0x1.6cbac27ca138ep-448, 0.0
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
            tmp1 = Sleef_finz_tgammad1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tgammad1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
