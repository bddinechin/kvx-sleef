/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand1_u10purecfma.c --function \
 *     Sleef_atand1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.fec649b0312a9p-324, 0.0, 0x1.10cf246e10782p-873,
     0x1.1d287a18d2126p-379, 0.0, 0x1.753c0e903d4ep-382, 0x1.04f838fe9f172p-747,
     0x1.d5c1864218b73p-303, 0.0, 0.0, 0.0, 0x1.4530814fb93aap-424, 0.0,
     0x1.43299ecc55783p-538, 0x1.665de5f7013c8p-877, 0.0, 0x1.4c46b9349701bp-474,
     0x1.6c80517413bd5p-573, 0.0, 0x1.c315d8c38e4aap-946, 0x1.3348ebf4b8fa1p-826,
     0x1.f3d8d48c70fc7p-1022, 0.0, 0x1.8d443c8fd669ep-770, 0.0,
     0x1.da87058e1876bp-618, 0x1.0fb153e496bdbp-171, 0x1.90f5fc61542e6p-503, 0.0, 0.0,
     0x1.a78798d55aefcp-81, 0.0, 0x1.433f4f2465f71p-121, 0.0, 0x1.509e26deb7412p-428,
     0.0, 0.0, 0x1.fab1dd9970aa5p-445, 0x1.e542a99214e18p-65, 0x1.ac6a2f12da9f6p-49,
     0x1.f5dd397590776p-520, 0.0, 0.0, 0x1.c27ccadf9e2e3p-743, 0.0,
     0x1.ef573c1897d2p-350, 0.0, 0.0, 0x1.5f8f99729ec79p-818, 0.0, 0.0, 0.0, 0.0,
     0x1.1447a388ac3a5p-478, 0x1.d51f2d8d68ec9p-100, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.644462beccc01p-813, 0x1.a797985f318c7p-90, 0x1.73d5c06e6bbfdp-709,
     0x1.da531659f6f84p-686, 0.0, 0x1.48d84f779e3e7p-570, 0x1.0683b58e2f22cp-456,
     0x1.a69a31df66d7cp-862, 0.0, 0x1.10bc24f322301p-325, 0x1.4027efe270ed1p-102,
     0x1.2bae8714c16a2p-232, 0x1.2696ef16e74cp-914, 0.0, 0.0, 0x1.a4e37b88ca979p-596,
     0x1.98da5306a3a7ap-189, 0.0, 0x1.5363fafaf8068p-202, 0x1.0c08912e2b689p-635,
     0x1.7bf1f718912f3p-250, 0x1.2ee027bf4bf3bp-645, 0x1.d29cc6f3dfa8ep-998, 0.0, 0.0,
     0x1.46be5380420a4p-697, 0x1.e6816afb0f5d9p-741, 0.0, 0x1.2b03ba8d9afc1p-933,
     0x1.2e4139cef3a44p-154, 0.0, 0.0, 0x1.a49b28f85da77p-133, 0.0, 0.0, 0.0,
     0x1.d891f09263fa7p-269, 0.0, 0.0, 0.0, 0x1.630b6a0cf5a83p-841,
     0x1.134d9f4d418e8p-987, 0.0, 0x1.99c4cb7213db1p-16, 0.0, 0x1.2b7e735d3b081p-214,
     0x1.d72aa5d61d57fp-699, 0x1.831a3d6d3ef34p-198, 0x1.3e042b79d690ep-87,
     0x1.a73ceed7079bcp-567, 0.0, 0x1.58a31e8863efdp-552, 0x1.e28b0e1d59eddp-211,
     0x1.f49b4165111ccp-18, 0x1.0a8fdf83afd0fp-250, 0.0, 0.0, 0x1.ad39976a9f918p-924,
     0x1.446c77a0c3cc1p-620, 0x1.7abe357f9b354p-119, 0x1.52d7a6f13eec5p-67,
     0x1.91615767076f2p-6, 0.0, 0.0, 0x1.806d610734aaap-621, 0.0,
     0x1.edab16cbb1281p-74, 0.0, 0.0, 0x1.e1fa25f3d3fa4p-1016, 0.0,
     0x1.a72e81e076184p-656, 0x1.266ef91c4ed47p-378, 0x1.e86a3a9e72c53p-926, 0.0, 0.0,
     0x1.9d66fe4760359p-545, 0x1.ce2994d9eeffdp-488, 0x1.1b56b49931ebfp-556, 0.0,
     0x1.e4275174136fep-300, 0x1.8da51b406e86cp-1018, 0.0, 0x1.e127081e5b346p-198,
     0x1.81cb34c089f1dp-940, 0.0, 0x1.840df82fd2d62p-114, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5cdb63bcea5dp-34, 0x1.e6dd2b9086dccp-178, 0.0, 0.0, 0x1.6caa6ed8ec995p-176,
     0.0, 0.0, 0.0, 0.0, 0x1.010a621031eccp-461, 0x1.f0fb7b3d115c1p-91, 0.0, 0.0, 0.0,
     0x1.81ae27847f663p-930, 0.0, 0x1.dec3bd0fa5c01p-833, 0.0, 0x1.4671dedcf8833p-43,
     0.0, 0x1.eebee4ec4d78ap-650, 0.0, 0x1.597d1e5087c33p-530, 0x1.9a7dde7f712abp-12,
     0x1.64639849510ccp-151, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10667736bb69fp-156, 0.0,
     0x1.fb097d8430aebp-298, 0.0, 0x1.6025254fd707dp-826, 0.0, 0x1.5875014c576fp-195,
     0.0, 0.0, 0x1.82c8e4b9b2163p-94, 0x1.62d224873c203p-584, 0.0,
     0x1.38aca3aa1db62p-267, 0.0, 0.0, 0x1.2777ea5ca9ca3p-865, 0x1.5ea13fb20ccd1p-813,
     0x1.3a7c8dcd7ee7ep-125, 0x1.4040022a19b4ap-426, 0.0, 0.0, 0x1.9b803b70f7d25p-546,
     0.0, 0x1.1b4f34c31a628p-306, 0x1.26bc6d4cf3f25p-851, 0x1.c79d31ae54b58p-456,
     0x1.7dd74233d1dfcp-115, 0x1.4c4a8886614dp-985, 0x1.61a9a0cb48831p-238,
     0x1.70751224f12c3p-602, 0x1.0f83e68724991p-385, 0.0, 0x1.12dfc1716b914p-341, 0.0,
     0x1.d2b1088dcd903p-268, 0x1.19a8ca6712843p-430, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e4c65457be13p-667, 0x1.7573dc0124c5cp-50, 0x1.3a28fcdafd067p-633,
     0x1.ad510783e9269p-291, 0.0, 0.0, 0.0, 0.0, 0x1.6b61f307120c6p-1001,
     0x1.0831bb95bb378p-490, 0x1.8dc8e9e4a3b7p-630, 0x1.984a7d42de72ap-584, 0.0, 0.0,
     0x1.faa59544cff28p-686, 0x1.4ccdd8d77fc5bp-811, 0.0, 0.0, 0x1.a72a79221fbp-420,
     0x1.1786edb1f449dp-154, 0x1.f1b2690d468aep-548, 0x1.2dabdce717279p-711,
     0x1.0332641d4040ap-42, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ff85c1ba844bp-2,
     0x1.4b47b686f78e7p-681, 0.0, 0x1.bf990676896ebp-985, 0x1.20c20939a4319p-265,
     0x1.14f18c6ca6be6p-433, 0.0, 0.0, 0x1.5c8fa8ae1f397p-704, 0x1.bf3d46c14d166p-160,
     0.0, 0.0, 0.0, 0.0, 0x1.9a60eb4b439cep-293, 0.0, 0x1.2e777f82ccea4p-799,
     0x1.902ddc1a792eep-472, 0.0, 0x1.0f52bfe98ff7ap-210, 0x1.ba951a96769c1p-366,
     0x1.fcdf0dcdc53a3p-525, 0x1.bc778ea59f196p-808, 0x1.ef1b5af994dadp-158,
     0x1.e53a76ccaa35cp-1008, 0.0, 0.0, 0x1.922429dce1a06p-117, 0.0,
     0x1.44ccb121d53fcp-145, 0.0, 0.0, 0.0, 0x1.81ffb2b331a2cp-447, 0.0, 0.0, 0.0,
     0x1.7939fb430de92p-806, 0x1.04e5965003a6dp-320, 0x1.36c43cab6eb02p-167, 0.0,
     0x1.c3118afc5362p-59, 0x1.4adbacd2ca7e3p-759, 0.0, 0.0, 0x1.8e43ac964a612p-168,
     0x1.97c13a9a93991p-574, 0.0, 0.0, 0.0, 0x1.ae61813b2d972p-735,
     0x1.c8ebf806b62aap-28, 0.0, 0x1.dac3b2043d954p-112, 0.0, 0x1.2d239a7c4de6ep-357,
     0x1.3668e483bf515p-482, 0.0, 0.0, 0x1.f0c61c5bd657cp-399, 0x1.1694110e106eep-569,
     0.0, 0x1.01c3931861b29p-914, 0.0, 0.0, 0x1.ca8bf136e2aafp-263,
     0x1.9b0f5ce73d587p-472, 0x1.301af0ad68ea9p-617, 0.0, 0.0, 0x1.e956c3ccea432p-311,
     0.0, 0x1.c79ec12f2f877p-454, 0.0, 0.0, 0.0, 0x1.4d6343598a0fp-901,
     0x1.43316d51fa917p-285, 0x1.c8cda1fce03a7p-67, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.14ab2580efdf1p-538, 0.0, 0x1.479751066c3ddp-152, 0x1.bacf3fb116cp-384,
     0.0, 0.0, 0.0, 0x1.565aa5568ba14p-61, 0.0, 0x1.643c8025ced95p-766,
     0x1.e6f97de1ced25p-899, 0x1.1d8f846552fa3p-242, 0x1.ddeeb20b5feabp-378,
     0x1.2aa351584dd06p-955, 0x1.a42251f372df8p-575, 0.0, 0.0, 0.0, 0.0,
     0x1.1ceb6424f4118p-533, 0x1.c6bff7483d607p-820, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8ffb7f1fa3697p-273, 0.0, 0x1.cbef6528bf14ep-785, 0x1.5536ac9e3e525p-920,
     0x1.485f069e096a8p-787, 0x1.75086607fb411p-619, 0x1.cf0f116376cf2p-951, 0.0, 0.0,
     0.0, 0.0, 0x1.be9a7722b3c4p-574, 0.0, 0x1.0bd3cbd89c5cfp-539,
     0x1.84b9d2f9525edp-774, 0.0, 0x1.8c16fae8e1259p-286, 0.0, 0x1.dc2d872c34648p-914,
     0.0, 0.0, 0x1.a58098026c8b4p-767, 0.0, 0x1.9ad60d0bc90b4p-429, 0.0, 0.0,
     0x1.c17ce69ffcee3p-35, 0x1.5164524e0f66bp-24, 0x1.378595b26c227p-472,
     0x1.d79e4c8fe1848p-557, 0x1.4fca5cd7ce0a8p-932, 0.0, 0x1.46fcd7a7cdff6p-238,
     0x1.5e0cb0d42ee66p-388, 0x1.72ee6d808702dp-595, 0.0, 0x1.01b7c9fefca68p-392, 0.0,
     0x1.3e0a1ba5248e9p-847, 0.0, 0x1.96ebb5a4fd57bp-202, 0x1.79b6402e3987ap-427, 0.0,
     0x1.b0af66a13b8fcp-236, 0.0, 0x1.bd8c3dbca668fp-437, 0x1.d594cf36c985fp-330, 0.0,
     0.0, 0x1.8f6cd95183a8cp-262, 0.0, 0.0, 0x1.ac384cd36183cp-1005,
     0x1.86bcb31da4ed2p-15, 0x1.f35dde8cbbdfbp-110, 0.0, 0.0, 0x1.6aab783fc32b7p-225,
     0.0, 0x1.5971c5655839ap-484, 0x1.bb60766c65b7fp-410, 0.0, 0x1.ff32edac5f2a5p-606,
     0x1.b0771723680ep-373, 0.0, 0x1.eee3cb485793dp-46, 0.0, 0x1.48df88481dff4p-689,
     0x1.edb6cff143f18p-380, 0.0, 0.0, 0.0, 0x1.437377b7ae39ap-932,
     0x1.1c9a025942d12p-826, 0x1.038cef6b77fedp-608, 0.0, 0x1.fe30f590e5077p-884,
     0x1.a944a6e0628acp-530, 0.0, 0.0, 0x1.b373fa90c3d66p-559, 0x1.ebfc44ff5bfdfp-162,
     0.0, 0x1.0c01957733129p-851, 0x1.a8a2a83fe7789p-410, 0x1.02c86694d8fdep-985, 0.0,
     0x1.2bf622d53f1c7p-69, 0.0, 0x1.6d3f56a976242p-362, 0x1.714b43934437cp-507, 0.0,
     0.0, 0.0, 0x1.bb091d1921f76p-748, 0.0, 0.0, 0.0, 0.0, 0x1.11d79b0ccb0c2p-666,
     0x1.0d30781a45e1ap-895, 0.0, 0.0, 0.0, 0x1.8ffb294793dbcp-80,
     0x1.1123704c4d6c5p-1000, 0.0, 0x1.1942d00c6f1a4p-376, 0x1.7ac51d378e0dep-794,
     0.0, 0.0, 0.0, 0x1.ba1aa9593d84ep-107, 0.0, 0x1.938456144a17bp-577,
     0x1.30febc6fc96afp-338, 0.0, 0.0, 0x1.517bd258e5638p-730,
     0x1.d2b9f47a722b3p-1004, 0x1.a9102d0e0d919p-583, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.759dc85be4a5fp-943, 0.0, 0.0, 0.0, 0.0, 0x1.e39520f7ab48p-253, 0.0, 0.0,
     0x1.3dc376d7f58aap-914, 0.0, 0.0, 0.0, 0.0, 0x1.6ecc7d7d0fe69p-700, 0.0,
     0x1.8f894fab3d4f5p-304, 0x1.a754266864b6bp-254, 0x1.bafd16988f962p-711,
     0x1.30f06be728de3p-652, 0x1.69c3a0a09d096p-839, 0.0, 0x1.ba1d4f4a7c494p-412, 0.0,
     0.0, 0x1.4bedb456e1ce1p-220, 0.0, 0x1.832c83e588f1ap-906, 0.0, 0.0, 0.0,
     0x1.f79c912c32e9cp-17, 0x1.bfb01d641f63cp-429, 0.0, 0.0, 0x1.7ef9fc32403c9p-828,
     0x1.39c6191e0f141p-377, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3d8b750a95c3p-988, 0.0,
     0.0, 0.0, 0x1.757025ad6ea15p-634, 0x1.aae63fb65e4dp-135, 0x1.f8b361069465bp-128,
     0x1.f9dd675f5edaep-335, 0.0, 0x1.582251b9bfe04p-698, 0x1.b5c68148ae4fcp-903,
     0x1.3f07c8464ffbdp-275, 0.0, 0.0, 0x1.c0e07d937b9e3p-759, 0x1.37f306e3e0e13p-325,
     0x1.d484eabbea118p-594, 0.0, 0.0, 0x1.e84d6f1690f66p-739, 0x1.d6117ca18502p-106,
     0x1.43a4c6f99c1ddp-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40494545c3219p-372,
     0x1.658a519b84c65p-765, 0.0, 0.0, 0.0, 0x1.be3b1c6f7f256p-749, 0.0, 0.0, 0.0,
     0x1.dd61aeaed414bp-985, 0.0, 0.0, 0x1.5542100a9da7dp-6, 0x1.d36e7e940a229p-37,
     0x1.c6648ebfa2c75p-178, 0x1.d3e9257307b53p-361, 0x1.78929677f8cb9p-410,
     0x1.3c5e86f3a045dp-891, 0x1.583f27d41818cp-888, 0.0, 0.0, 0.0, 0.0,
     0x1.d35b34a6b7ad6p-246, 0.0, 0.0, 0.0, 0.0, 0x1.90b3d0b9758afp-111, 0.0,
     0x1.6d42bbf93adbcp-1016, 0x1.fdc9025e8c08ap-955, 0x1.3f00b59e1dee4p-701,
     0x1.9adc537276f84p-824, 0x1.8d13327410c7ep-892, 0.0, 0.0, 0.0,
     0x1.3888aded0f73ep-393, 0.0, 0x1.e5a3a8ef71518p-442, 0.0, 0x1.03cd00444b91p-641,
     0.0, 0.0, 0.0, 0.0, 0x1.5ecbb8b95a6bcp-210, 0x1.b122a97f47769p-270,
     0x1.67bd0a24aca9cp-630, 0.0, 0x1.d3c7cc063863p-689, 0x1.494ecba76a824p-965,
     0x1.f645b6349f199p-538, 0x1.5aac4beb660ep-721, 0x1.10bd7b13c86e3p-339,
     0x1.357897fbc47d4p-976, 0x1.9df7579b51821p-679, 0.0, 0x1.616f9c640a02bp-353,
     0x1.59fb295ca1eacp-753, 0x1.e9ee0e177b847p-156, 0x1.0cba397be3bc1p-219, 0.0,
     0x1.d84db805880d4p-527, 0x1.d49c1332f9a5ap-313, 0.0, 0.0, 0x1.46d5be0ed31cap-36,
     0.0, 0x1.2e57f12de9b17p-386, 0x1.12e299d700108p-743, 0.0, 0x1.15338bf0d9a11p-12,
     0x1.7aa97d522876cp-823, 0x1.06dd11fc9ba8ap-774, 0x1.d5c5c71c573c6p-700,
     0x1.118ac3503b779p-828, 0.0, 0.0, 0x1.b3e12aae59dc4p-338, 0.0,
     0x1.29b37dd231a1ap-129, 0x1.064bd2ea29911p-990, 0x1.89c34486cb6c3p-741, 0.0,
     0x1.8fda93794893ap-309, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.32180376166ecp-544,
     0x1.510a6ea473e9ep-703, 0x1.5441699c05821p-288, 0.0, 0x1.1723e705c75cp-246,
     0x1.727aa0dfa9a06p-84, 0x1.7d37d7959070bp-236, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a4f3c1966ba83p-61, 0x1.515380f2da713p-261, 0.0, 0x1.62e8db20c3aaap-674, 0.0,
     0x1.7c32dfcfb64cap-199, 0x1.bea1beb20b0e8p-321, 0.0, 0.0, 0x1.3e106c5e2c40fp-235,
     0x1.fd26b571de761p-320, 0.0, 0.0, 0x1.fd60e0975eb69p-65, 0.0, 0.0, 0.0, 0.0,
     0x1.c7255d4529bb7p-562, 0x1.4f6e4efcbd20fp-929, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a73d16c18ec8ep-684, 0.0, 0.0, 0.0, 0x1.596a3757bbf7fp-122,
     0x1.804845b6146ebp-890, 0x1.c6a8c5e486288p-317, 0.0, 0.0, 0x1.2a5a648b3e32dp-741,
     0x1.7e91aade5761cp-206, 0.0, 0.0, 0x1.e423e2411e406p-971, 0x1.6f5e5bba964cbp-370,
     0x1.9051f0c85bca3p-293, 0x1.5747880dd100ap-890, 0.0, 0.0, 0x1.9482953bbb712p-518,
     0x1.9ae2bf99c5c17p-357, 0x1.fe2f3007b9b65p-785, 0.0, 0.0, 0.0, 0.0,
     0x1.dd551bf7361a7p-967, 0x1.1ba796669b029p-648, 0.0, 0.0, 0.0,
     0x1.44847473641eep-5, 0.0, 0x1.fbbaf9bcd7f61p-47, 0x1.e29ae7c7d989cp-952,
     0x1.950d6ded50b89p-820, 0x1.11ffd83273275p-442, 0.0, 0x1.6cfbe0dfa33e3p-701, 0.0,
     0x1.1a356b0e1c13dp-241, 0.0, 0x1.40c457710d0fcp-175, 0.0, 0.0, 0.0,
     0x1.54c699536aacbp-700, 0x1.77e115a331fffp-366, 0.0, 0x1.8461cc987fb1ap-521, 0.0,
     0.0, 0x1.3a106b60470b7p-588, 0x1.1a41ce6eb0e7fp-824, 0x1.928455d98bab7p-200,
     0x1.6c488765a208cp-929, 0.0, 0x1.dfd8b32910b5bp-794, 0.0, 0x1.bb49ee3f3a7bbp-656,
     0x1.dcf02c12f2126p-47, 0.0, 0.0, 0.0, 0.0, 0x1.436ffffa9610fp-969, 0.0,
     0x1.93a8ba4737248p-629, 0.0, 0.0, 0x1.0f1f3497a61a8p-213, 0x1.8bbfc928db7fep-205,
     0x1.e81ec705f9a15p-190, 0.0, 0x1.f3e4c7e0ad34cp-287, 0x1.9d43dd0a91212p-757, 0.0,
     0x1.e287fa715f9fp-631, 0x1.7c99ee612ce16p-988, 0.0, 0x1.05ab385be2deep-147,
     0x1.b270293f86f3ep-609, 0x1.c3ba8314b5473p-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.56141d02de33bp-1, 0x1.442e4954a7c29p-901, 0x1.8f41e1efa5d37p-628,
     0.0, 0x1.806fd7fa2674ap-50, 0x1.9d7337db51f36p-561, 0.0, 0x1.8eb997a402ee9p-403,
     0.0, 0x1.67dfd06a3bf0bp-801, 0.0, 0.0, 0.0, 0.0, 0x1.6e15b8bd8a15cp-912,
     0x1.70706e52760f1p-11, 0x1.e48581dbe8b74p-803, 0x1.560b4bc390b7bp-667, 0.0,
     0x1.3233c9486527ep-280, 0.0, 0.0, 0.0, 0x1.ea70f942529fdp-129, 0.0, 0.0,
     0x1.cb25106a5c65p-422, 0x1.b970b620a9e08p-992, 0.0, 0x1.2b6ff286b552dp-41, 0.0,
     0.0, 0.0, 0x1.047a58d8916b2p-203, 0.0, 0x1.f573154036fcdp-752, 0.0,
     0x1.b5c6ab9d27f89p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7172caaa58859p-810, 0x1.fd22b41bd03adp-870, 0.0, 0.0, 0.0,
     0x1.bd32ee6ebf35ep-675, 0.0, 0x1.4261e41fb496cp-578, 0x1.0824ce5585a26p-69, 0.0,
     0.0, 0.0, 0.0, 0x1.45521261cda61p-449, 0x1.a2e056e38a7b9p-965,
     0x1.8bba51573f6fbp-527, 0x1.b4b3ced593c93p-570, 0.0, 0x1.99cf897639a3dp-682, 0.0,
     0.0, 0x1.696d88328973cp-504, 0.0, 0.0, 0.0, 0x1.5965f7768ba8dp-556,
     0x1.c2df9782e75b8p-84, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bc16ac3c84dcp-818,
     0x1.481eed542bfebp-392, 0x1.f3f80d2481a87p-674, 0x1.ca4de23e19319p-291,
     0x1.0e9377405520cp-961, 0.0, 0.0, 0x1.446eda72efbbep-295, 0.0,
     0x1.2c8367dfdde87p-662, 0x1.79be121361cacp-878, 0x1.62bd0b2b29203p-292, 0.0, 0.0,
     0x1.b58905a38fa85p-165, 0.0, 0x1.0a282571369dep-1012, 0x1.a4973ea4290bp-266, 0.0,
     0.0, 0.0, 0x1.fe3b3f58ac307p-549, 0x1.6dc68190258f3p-811, 0x1.232b262616fd1p-986,
     0x1.121198fc27535p-820, 0.0, 0.0, 0x1.ed94517e373cfp-472, 0.0, 0.0, 0.0,
     0x1.704c7db4dda76p-166, 0x1.f1783f4c9607ep-797, 0x1.06b523883cbdbp-177, 0.0,
     0x1.4399f8638feedp-37, 0.0, 0x1.81cffbc4856f2p-1013, 0x1.901a0fda1d02bp-915, 0.0,
     0.0, 0x1.d452ada8521abp-942, 0x1.f18f245dc7f3dp-482, 0.0, 0.0, 0.0,
     0x1.438008f7adce1p-464, 0x1.f23c5b07fc99fp-212, 0.0, 0x1.07408d516265cp-73,
     0x1.122f803a31652p-263, 0x1.9d73985cf941ep-60, 0x1.3b8c0286d8231p-217,
     0x1.21d977220e755p-387, 0.0, 0x1.22954f08e4645p-915, 0.0, 0x1.6901e9af3a79fp-679,
     0.0, 0x1.cd0dc8633dd3fp-85, 0.0, 0.0, 0x1.a294257b35879p-101,
     0x1.e98d5db5e3debp-889, 0x1.048cf521d107ep-156, 0.0, 0x1.39b7f4b8528cep-103, 0.0,
     0.0, 0x1.838b0ec47b2cbp-590, 0x1.2417a9bed369ep-932, 0x1.ba9cd13bfc4f3p-639, 0.0,
     0.0, 0x1.f450876a87ba6p-1003, 0.0, 0.0, 0x1.c346d775be305p-337,
     0x1.4349148dcf54cp-1006, 0.0, 0.0, 0.0, 0x1.4772f789b868p-1007, 0.0,
     0x1.678de20e539b9p-118, 0x1.4ec8767ff9c21p-558, 0x1.bcaef1df804d8p-622, 0.0, 0.0,
     0.0, 0.0, 0x1.9ed76b2323151p-982, 0x1.ca12bc42a4f65p-398, 0x1.8f6f916afef79p-449,
     0x1.5018993dc0637p-307, 0x1.dd34d58cfd5b4p-539, 0x1.587ddcd1889b8p-201,
     0x1.687f27ee2c7dep-928, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac1fa888f4112p-499,
     0x1.1bfa69cd97f21p-429, 0.0, 0x1.01f5e7ab30b02p-813, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a7e7f219cc1cp-191, 0x1.7e9d30b045473p-401, 0x1.795349b82f96p-859, 0.0, 0.0,
     0x1.2a71175b858b4p-947, 0x1.755db4dd725f5p-583, 0.0, 0.0, 0.0, 0.0,
     0x1.80c718791db05p-132, 0x1.91ddc8a5ac0f9p-10, 0x1.9a7610faf1cf4p-132, 0.0, 0.0,
     0x1.fe5c34debc4f8p-592, 0x1.d12494b94de59p-355, 0x1.fb842f20e6082p-18,
     0x1.33f2beaabca34p-492, 0.0, 0.0, 0x1.58e98371ad736p-543, 0x1.72719bbfba353p-901,
     0.0, 0x1.b5fd9a5fe55a4p-600
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
            tmp1 = Sleef_atand1_u10purecfma(tmp0);
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
    printf("Sleef_atand1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atand1_u10purecfma bench acc %la\n", global_bench_acc);
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
