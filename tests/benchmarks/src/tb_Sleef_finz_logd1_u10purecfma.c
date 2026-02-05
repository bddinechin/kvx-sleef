/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd1_u10purecfma.c --function \
 *     Sleef_finz_logd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ba938bbba2c0ep-447, 0.0, 0.0, 0x1.12279f83fea49p-544, 0.0, 0.0, 0.0, 0.0,
     0x1.f5f35b28214fbp-659, 0.0, 0x1.6bdb9f4dd02f7p-224, 0x1.3632b63015214p-407, 0.0,
     0x1.78c62e42583c1p-393, 0.0, 0.0, 0x1.6df0374bee5f4p-821, 0.0, 0.0, 0.0,
     0x1.b117281961853p-307, 0x1.ff9cfe2742936p-725, 0.0, 0x1.d36792f5911c1p-107, 0.0,
     0x1.80f7b32b623c6p-1008, 0.0, 0x1.c126e58f0e4e4p-346, 0x1.982efc6b11ee4p-420,
     0.0, 0.0, 0.0, 0x1.cbfd80e17313ap-367, 0x1.6258320b3ee99p-225,
     0x1.b57aa2f1cdfc7p-669, 0.0, 0x1.d8d8cc07fc552p-69, 0x1.4056a1e4c50c7p-423,
     0x1.afd17ee76bdfcp-158, 0x1.1da671dff9bb7p-304, 0x1.f204c1658be66p-557, 0.0,
     0x1.0ffcaa1a30696p-806, 0.0, 0x1.cca7f6261aee9p-13, 0.0, 0.0, 0.0, 0.0,
     0x1.ca0a5a2f38e09p-858, 0.0, 0.0, 0x1.6c14dcef12db8p-144, 0.0,
     0x1.a3228939e296p-217, 0.0, 0.0, 0.0, 0.0, 0x1.be8474195c44ap-973,
     0x1.41d9315966c99p-352, 0x1.76e06f0a51065p-307, 0x1.4ac36b15dbf8cp-446,
     0x1.4b288f32c0d23p-126, 0x1.bb5dc78c255f8p-831, 0x1.80f5dee7f411bp-967, 0.0,
     0x1.0d52f18a9741cp-666, 0x1.f5182cf560532p-89, 0x1.0b43e55c4262ep-88,
     0x1.3ddd9498a65e8p-733, 0.0, 0x1.2216435a42224p-40, 0.0, 0x1.0c609d595ebe7p-264,
     0x1.5e1c49549f114p-291, 0x1.decc1a436b323p-177, 0x1.724d017a62a21p-914,
     0x1.e173af7ecc271p-311, 0.0, 0x1.5fec8e0c59549p-946, 0x1.23bbb732420f8p-981, 0.0,
     0x1.a0e038a5188bp-368, 0x1.02b16c9fe819dp-649, 0.0, 0x1.b079f45e22c91p-491,
     0x1.86a2f4f50790cp-983, 0.0, 0.0, 0.0, 0x1.781c9a6003ba3p-52,
     0x1.b8cd9b744561fp-493, 0x1.9e8d08a1fed71p-792, 0.0, 0x1.4cfe37b968828p-527, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.664ffc4f25442p-27, 0.0, 0x1.409e4b7a03f2cp-792, 0.0,
     0x1.5a1dc8420618fp-65, 0.0, 0.0, 0x1.f0ec4514676d5p-841, 0x1.c51ccdfa4ceffp-563,
     0x1.ffbd4597d7dc9p-386, 0.0, 0.0, 0x1.4254fdcb7edd4p-707, 0x1.bf11d8163205fp-919,
     0x1.ab25a85c80701p-910, 0x1.097fedf2b63d5p-935, 0x1.e36555d8f322bp-890, 0.0,
     0x1.01ba41520a3adp-13, 0x1.02df13c01185fp-654, 0x1.437fd2991671cp-579, 0.0,
     0x1.34e9fd7988294p-96, 0.0, 0x1.431d69e5ebf33p-631, 0x1.e83420b9af391p-431, 0.0,
     0.0, 0.0, 0x1.202c5a667d047p-587, 0.0, 0.0, 0x1.2ca2861c2707cp-128, 0.0,
     0x1.45e8f587d2c65p-199, 0x1.49254f463c126p-300, 0.0, 0.0, 0x1.acda33421de25p-415,
     0.0, 0x1.1abfecd968372p-839, 0.0, 0x1.37eca85ba2c81p-964, 0.0, 0.0, 0.0,
     0x1.ab594bb21d42bp-824, 0.0, 0.0, 0x1.a5867fa74e554p-447, 0x1.3711607e33604p-534,
     0x1.e44193bdd140cp-692, 0x1.cfa95c68ae279p-46, 0x1.fd0c32e9801a2p-700, 0.0, 0.0,
     0x1.4cd2bc00fdf0dp-153, 0.0, 0x1.016145e501df6p-616, 0.0, 0.0,
     0x1.bffe1b5bda35p-932, 0.0, 0.0, 0x1.84298469d5211p-861, 0x1.2508029ddf779p-59,
     0x1.e493d74445d7ap-330, 0x1.f1f057e40795cp-36, 0x1.e645f05346bp-540, 0.0, 0.0,
     0.0, 0x1.06dc8f6867a7bp-479, 0.0, 0.0, 0x1.76fd12c3cdccdp-452,
     0x1.b1b52319a4108p-419, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9722e3417a72p-581, 0.0,
     0x1.23901254821e1p-764, 0x1.9f005f8850b55p-180, 0.0, 0.0, 0.0, 0.0,
     0x1.2196e6a9a405fp-736, 0x1.8f52c7647981fp-672, 0.0, 0.0, 0.0,
     0x1.2d863eea88145p-585, 0x1.7f5076190aacp-383, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e89707ca9232ap-394, 0.0, 0x1.5a8440ab5079ap-392, 0x1.ffc3c200519cdp-726, 0.0,
     0.0, 0x1.0cefcbf684cd7p-157, 0x1.c2071a7ae7b9ap-911, 0x1.793a0ec7dbbefp-784, 0.0,
     0.0, 0x1.cab243e965b95p-839, 0x1.d93a70bfd9e28p-589, 0x1.5642664133621p-378, 0.0,
     0x1.a32066ccc1dc6p-397, 0x1.dd3ef13be3f82p-643, 0.0, 0.0, 0.0, 0.0,
     0x1.53220ce37eceap-912, 0x1.2c3c9597226f6p-411, 0.0, 0.0, 0.0, 0.0,
     0x1.c399c707660dap-40, 0.0, 0.0, 0x1.26d2df3a3b09ep-203, 0.0,
     0x1.cbb0bc8a1c35bp-872, 0.0, 0.0, 0x1.072ee3d1d41a4p-851, 0.0, 0.0,
     0x1.7ee79c71a24fdp-463, 0x1.b822f3bcf2d8dp-631, 0.0, 0x1.c3c73dc657acap-806, 0.0,
     0x1.2e54dab6f6c49p-693, 0x1.43734137fcb14p-926, 0.0, 0.0, 0.0,
     0x1.b12872aeb57b5p-11, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ee96dfc49c4cp-648, 0.0, 0x1.52938ff2af12bp-519, 0.0, 0.0, 0.0, 0.0,
     0x1.f95d8e6313b73p-179, 0x1.8dc4f20c338adp-1002, 0x1.6d98c02492801p-709, 0.0,
     0x1.d71849776315dp-557, 0x1.633063770b0a5p-993, 0x1.581ef1a4b623dp-774,
     0x1.b271c270401ap-316, 0x1.b8f507d779f9ap-858, 0x1.c8717253e6d0ep-567,
     0x1.e33ffe2bc2719p-78, 0x1.6d186af8e6ccep-514, 0x1.9ab084d790dacp-500,
     0x1.d1474be8020d4p-844, 0x1.e58b128e01db2p-793, 0x1.adf649710f355p-261, 0.0, 0.0,
     0.0, 0x1.0fd89b31a2218p-544, 0.0, 0x1.1785f22e4d126p-334, 0x1.e0ebc1bd46964p-718,
     0.0, 0.0, 0x1.f6276b8c1ad4dp-613, 0.0, 0.0, 0.0, 0.0, 0x1.1e163f34cdc72p-527,
     0x1.326d707733c3fp-782, 0.0, 0.0, 0x1.c02f5c128e286p-415, 0x1.56d5f83c0818ap-248,
     0x1.41bfc24d4149dp-193, 0x1.30b4b378800a6p-67, 0.0, 0.0, 0x1.f7a683d3a4c39p-237,
     0x1.46492c70961cep-194, 0.0, 0x1.1e65e1ddd0ef3p-809, 0.0, 0x1.29b7be6117f7cp-590,
     0.0, 0x1.f5aecd269946ap-175, 0x1.0fdfd9d6c3c23p-605, 0x1.3f62945d59841p-557, 0.0,
     0x1.08a96de6506b6p-580, 0x1.a17ac37bf055cp-669, 0.0, 0.0, 0x1.20431319618f3p-214,
     0.0, 0x1.5d6c44677aebcp-489, 0x1.ba52adfa3e87ep-772, 0.0, 0.0, 0.0,
     0x1.c507288546652p-440, 0.0, 0.0, 0.0, 0x1.21c8203c7b6a5p-871, 0.0, 0.0,
     0x1.b7986d29a1104p-9, 0.0, 0.0, 0.0, 0x1.bdd01e34ed948p-718,
     0x1.2e1e9dd8023d2p-844, 0.0, 0x1.7f991000ef6d7p-871, 0.0, 0x1.825157cc7a51dp-875,
     0x1.3ef03058ab651p-143, 0x1.02b1667f7ac93p-948, 0.0, 0.0, 0x1.2178157c5761p-964,
     0x1.67bdb187e53bbp-284, 0x1.b2a7bfd5c16cfp-735, 0x1.64f7ed7343adep-217,
     0x1.261690e486eabp-138, 0.0, 0.0, 0.0, 0x1.5983391c6d076p-932,
     0x1.563af3baae59p-231, 0.0, 0x1.1585df9e112c4p-406, 0.0, 0.0, 0.0, 0.0,
     0x1.ba261e3ad5bc3p-192, 0x1.d302c21b00b16p-608, 0x1.b620bd6523567p-118,
     0x1.3df30a12c16a9p-108, 0x1.7f5b407df5085p-959, 0.0, 0x1.dff7024e13764p-350, 0.0,
     0x1.8309ed7d5021dp-293, 0x1.8f819c2a0c2d1p-860, 0x1.6f1bd93e881c6p-578, 0.0,
     0x1.a4eabd8160474p-250, 0x1.26bbe0d90c2d1p-652, 0x1.88f17af0d00b5p-373,
     0x1.8548e7e521613p-490, 0x1.7dca29569ca36p-288, 0x1.c237a76b866f6p-286,
     0x1.f7f59a6509813p-247, 0.0, 0.0, 0.0, 0x1.3fc683dcacff3p-624, 0.0, 0.0,
     0x1.3f22dacb5632cp-202, 0x1.430ec8d60dcd2p-461, 0x1.2c33fa64600cp-758,
     0x1.0ad3778cde23ep-559, 0x1.0f8d889954c19p-659, 0x1.b9156534e9a5p-649,
     0x1.44a4c2485beb2p-592, 0x1.f9107dc7fe61ap-126, 0x1.fea7519871d7fp-250,
     0x1.2160c7dd446d1p-254, 0.0, 0.0, 0x1.eef683a1a6804p-609, 0x1.437c0cd988d39p-215,
     0x1.b94cddc5e8e97p-342, 0.0, 0.0, 0.0, 0x1.7f6e18594415cp-873,
     0x1.67fe03a17e585p-580, 0x1.95fa490d269fcp-499, 0x1.1e7275ce68f33p-363, 0.0, 0.0,
     0x1.f5056e392f6cep-792, 0.0, 0.0, 0x1.a0160cd9663bap-74, 0x1.974b5df0227dep-716,
     0x1.9b7d72366361p-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.148c3e11a42aep-330, 0.0, 0.0,
     0x1.e0a9def66fbd6p-161, 0x1.e407569bccc8ep-488, 0.0, 0x1.1950c595ca7ddp-108, 0.0,
     0x1.9bf4165838144p-344, 0.0, 0.0, 0.0, 0x1.471f7ef6b3f97p-670, 0.0,
     0x1.c91e7defe981ap-250, 0x1.c33527f311236p-195, 0x1.6814739508d13p-170,
     0x1.9dea5602258b3p-379, 0.0, 0x1.a8f42113ce4e4p-845, 0x1.d690a1e5fb6d4p-731,
     0x1.1551f14965136p-509, 0.0, 0x1.75c426b41dd79p-252, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.48a1bbd80a0e5p-593, 0x1.9bc0a42d0804cp-942, 0x1.4e9fb1a2d77b8p-447,
     0x1.deb62cce7d543p-796, 0x1.6181368ae5b8cp-785, 0x1.9efaa5d4327b7p-22,
     0x1.f7d2b81f42a9ep-327, 0.0, 0x1.7464664d2af15p-827, 0x1.a05c3e0d88e81p-156, 0.0,
     0x1.69bea71f0d4c9p-288, 0.0, 0.0, 0.0, 0.0, 0x1.c145cec479479p-348, 0.0, 0.0,
     0x1.4dde17e10d877p-313, 0x1.0f3d24b21cf3ep-1018, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8bd75de3b181ep-218, 0.0, 0.0, 0.0, 0x1.3b0fcb2c54365p-199,
     0x1.0ebbae0ff59fbp-219, 0.0, 0.0, 0x1.c2f1e196f7819p-84, 0x1.a589657a7834fp-860,
     0.0, 0x1.f7d297ec0f21p-264, 0x1.6b1da534e7a7cp-513, 0x1.b035df60b54b4p-827,
     0x1.fef56f479c213p-861, 0x1.c48bd44d924cap-325, 0x1.5b3c8b32f7fb2p-212,
     0x1.f1a314acfbf29p-517, 0x1.1a5274c12e533p-1005, 0.0, 0.0, 0.0,
     0x1.3c13c264cbb8bp-621, 0x1.5d9142a129faap-933, 0.0, 0.0, 0x1.25bfac0200369p-117,
     0x1.b2c5fd114db2cp-657, 0.0, 0x1.30067d273d414p-256, 0x1.1a24bde9d7b18p-140, 0.0,
     0x1.add4fbfa85291p-863, 0.0, 0x1.af8aa378e694ep-41, 0.0, 0x1.fc4252753b877p-346,
     0.0, 0x1.ab6986bb20d8dp-238, 0.0, 0.0, 0x1.e852a3979f10ep-514,
     0x1.56c061d87f6aap-595, 0x1.d57b570b465e9p-435, 0x1.13f634a23c37fp-354, 0.0, 0.0,
     0.0, 0.0, 0x1.d9ae0184fcf62p-987, 0.0, 0.0, 0x1.8954f9ca3613p-568, 0.0,
     0x1.c59e88e9d73d5p-42, 0x1.8303ab06d5eabp-437, 0.0, 0.0, 0.0, 0.0,
     0x1.d7defb3d47227p-128, 0.0, 0.0, 0.0, 0x1.7364b82f7fea6p-444, 0.0,
     0x1.5830e6d311c24p-705, 0.0, 0x1.7221a78d9eda7p-382, 0.0, 0x1.13ad73360382cp-113,
     0x1.90f147a67bbd3p-809, 0x1.f2ffbeb1929cap-150, 0x1.a1f5cb4af9c62p-92, 0.0, 0.0,
     0x1.dbfe10fe9512ep-352, 0x1.81add0b48f1c5p-598, 0x1.0beda4664fa4dp-108, 0.0, 0.0,
     0.0, 0x1.bff6264ef4d4p-597, 0x1.de4c6138811f8p-93, 0.0, 0x1.97f3c35afe177p-678,
     0x1.7b6489e963eddp-684, 0x1.828d2792deba5p-850, 0x1.1503e97cfb23ep-429,
     0x1.3f6b86de2207dp-369, 0.0, 0.0, 0x1.7c28882c73acep-986, 0x1.7b9960083c344p-824,
     0.0, 0.0, 0x1.be4910f32d23ep-264, 0x1.b7fbec4c3e6a6p-70, 0x1.b77a18a84842cp-828,
     0.0, 0x1.9ceeee0551f19p-870, 0.0, 0.0, 0.0, 0x1.3553726656a53p-606, 0.0,
     0x1.ea615c2d7bf9ap-39, 0x1.756e6e04ca488p-462, 0.0, 0x1.0af374d9a68b7p-216, 0.0,
     0.0, 0x1.4f0afe8ace21cp-216, 0.0, 0x1.1e61ffd1668b9p-698,
     0x1.7dd365ce87e1fp-1019, 0.0, 0x1.1d9a19b2471e8p-24, 0x1.7b63064cd269ap-916, 0.0,
     0.0, 0x1.c3870e88bad67p-87, 0x1.142c9c2452c9ap-902, 0x1.c0ca249c205p-727, 0.0,
     0.0, 0.0, 0x1.0981d48f84695p-627, 0x1.aff0e706c7bf4p-377, 0x1.0069100a4d2a9p-265,
     0x1.95867da6de9b5p-418, 0x1.72e20a3284277p-372, 0.0, 0x1.5c6c8a89175ddp-513, 0.0,
     0x1.1ebdb3fe0a61cp-495, 0x1.ec4d4f6c7af26p-186, 0.0, 0.0, 0x1.39eabdf9a5403p-107,
     0x1.b15244b12c9afp-370, 0x1.5939b7fb492fep-431, 0x1.60290767c3903p-701,
     0x1.976b223536f9p-257, 0.0, 0x1.210d390a3c18fp-941, 0x1.204b3a119fd4bp-927,
     0x1.cc6f173591295p-740, 0x1.fa8bce758d352p-103, 0x1.68fc78456f0e1p-847, 0.0,
     0x1.1c33163f662cep-822, 0.0, 0.0, 0.0, 0.0, 0x1.ded8fdb1f6b52p-800,
     0x1.49f7ebae88459p-769, 0x1.2debf45d947bp-767, 0.0, 0.0, 0x1.f0156df494772p-221,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d54889665c52p-1007, 0.0, 0.0, 0.0,
     0x1.d6c045da11bc4p-320, 0.0, 0.0, 0x1.ba5bcb4f9396bp-153, 0.0,
     0x1.74b4279b02e3p-872, 0.0, 0.0, 0x1.c95494c7c247ap-646, 0x1.4c3e0b1973829p-841,
     0.0, 0.0, 0x1.a00d358de93aep-449, 0.0, 0.0, 0x1.6e4b6f34a3aep-444,
     0x1.ef31f543c845ap-862, 0x1.34052dd6e8549p-1000, 0.0, 0x1.2a68920c0aad6p-993,
     0x1.1c758e89e58fdp-178, 0.0, 0x1.d80efc287e1ep-397, 0.0, 0x1.6bcacf2a0d642p-552,
     0x1.c166b3a089819p-60, 0.0, 0.0, 0x1.7fb05cea597b2p-334, 0x1.4d298498133b1p-809,
     0x1.6614c376dbfafp-862, 0.0, 0x1.015894dad9d7fp-335, 0x1.d01d12f28fc4ap-600,
     0x1.840fc0937dac4p-1011, 0x1.75210aee247a2p-249, 0x1.93094a9440029p-152, 0.0,
     0x1.400bf8bfef8dap-71, 0x1.34091c06c23acp-836, 0.0, 0.0, 0.0,
     0x1.9cac8d640d602p-379, 0.0, 0.0, 0x1.ad82dd790b251p-679, 0x1.36b0a2b72f79cp-837,
     0.0, 0x1.fc5ffc113f83dp-772, 0.0, 0x1.b0763f3faf43ep-572, 0.0, 0.0,
     0x1.9772ca4b4ab93p-682, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.faf48fabfd0e7p-394, 0.0, 0x1.d54227171706fp-426, 0.0, 0.0,
     0x1.50d2f8c409a45p-878, 0x1.f8bf54d269b2p-772, 0x1.abb53340122acp-864,
     0x1.5767a11863284p-734, 0.0, 0.0, 0x1.9e04ef9e8a6fcp-659, 0.0,
     0x1.f5622eeb12f24p-311, 0x1.1acc5c29fac8p-918, 0.0, 0x1.c29b238435b2bp-231, 0.0,
     0.0, 0x1.0fa222ba4fb4p-26, 0x1.0f6b2cdb88df9p-887, 0x1.31cf566ea6139p-716,
     0x1.7b941e606ed1ep-340, 0x1.ee641c5621e5fp-897, 0x1.f1545f1fcbff3p-352, 0.0,
     0x1.28d08431f068ep-994, 0x1.b6583a6ec803p-226, 0x1.3c3625cd3bd87p-301, 0.0,
     0x1.69e53a2ff9fap-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ccf1d9b2bfccp-278, 0.0,
     0x1.cff3a5c860a14p-739, 0x1.bc3e79d5591d7p-173, 0x1.3ce45d461312fp-151, 0.0,
     0x1.20cb5d7d29424p-673, 0.0, 0x1.306dd5f4517ecp-165, 0x1.3943a0c8942c3p-698, 0.0,
     0x1.8a9f5dc0cdffcp-305, 0x1.d27dd88fdf43ap-962, 0x1.4a46318803f34p-508, 0.0,
     0x1.db2191a12d5ddp-540, 0x1.fd8e401a4a31dp-524, 0x1.efd644e70952ep-994, 0.0,
     0x1.e442e376f5b1ep-25, 0.0, 0.0, 0x1.fad6165d9d95cp-909, 0x1.e5668a009ddbap-596,
     0x1.ac3d838cbcccap-1021, 0x1.ade6f3c661b3dp-199, 0.0, 0x1.815bce2a18067p-281,
     0x1.85727f46a4de1p-775, 0x1.fb1e0ded03296p-651, 0.0, 0.0, 0x1.ced60e529822p-551,
     0x1.e4a6ee1cba174p-921, 0.0, 0.0, 0x1.a171f662acd49p-273, 0x1.3fdb9122fe178p-502,
     0x1.215dc906d2c8dp-380, 0.0, 0.0, 0.0, 0x1.021cb075a696bp-589,
     0x1.c5bea61d2f471p-564, 0x1.1717c37baf28fp-9, 0x1.e2a4b9ff01486p-535, 0.0,
     0x1.5a869650477adp-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.019dcbc59cc2fp-713, 0.0, 0.0,
     0.0, 0x1.bacf54296adb5p-407, 0x1.e52b85dc00f67p-977, 0x1.907000f3f549bp-382, 0.0,
     0.0, 0x1.00d90e247f2acp-938, 0.0, 0.0, 0.0, 0x1.b073545c593cdp-382, 0.0, 0.0,
     0.0, 0x1.e62161bf6cb92p-673, 0.0, 0.0, 0.0, 0x1.fa1234e0062e3p-633, 0.0, 0.0,
     0.0, 0x1.b0c5709404c7dp-1014, 0.0, 0x1.58e459c801668p-23, 0.0,
     0x1.67c7fb73c2475p-420, 0x1.0e18138d4a709p-693, 0.0, 0.0, 0x1.5447fa6e81a3dp-407,
     0.0, 0x1.4b80aec4be2c8p-388, 0x1.7c7e289a28fc2p-422, 0.0, 0x1.c57380b174244p-662,
     0x1.53cc0f3281308p-674, 0x1.c1ef4ac4960a1p-737, 0x1.2661d80bb77fep-109,
     0x1.214cb6022a794p-154, 0.0, 0x1.450202f8c5381p-967, 0.0, 0.0, 0.0,
     0x1.5f02d46688ab6p-1, 0.0, 0.0, 0x1.47c7e70aacc86p-228, 0.0,
     0x1.053508b7b5ec3p-204, 0.0, 0.0, 0x1.cb09d88338c61p-392, 0x1.77380af4f7a73p-591,
     0.0, 0x1.603c71bd66c94p-931, 0.0, 0x1.8c95094e364p-904, 0x1.42d30d9a69357p-1007,
     0.0, 0.0, 0.0, 0.0, 0x1.74bd27da3f882p-256, 0.0, 0.0, 0x1.2cdfd1f3c352cp-102,
     0x1.a5ecb1f1f3ba4p-968, 0x1.7eaf2299e4c9ep-314, 0x1.fd6f452010075p-471, 0.0,
     0x1.331578bcfc877p-602, 0.0, 0x1.a7f6fe4d8f5dp-1015, 0.0, 0x1.760ae4b1df8bdp-752,
     0x1.806a3747d952cp-135, 0.0, 0.0, 0.0, 0.0, 0x1.90f16e12ef154p-696, 0.0,
     0x1.2ac521dd9425ep-522, 0.0, 0x1.f36cf7070c192p-695, 0x1.98dfea1c7d3c2p-545,
     0x1.8874e2148f0e4p-554, 0x1.e9abf057d06e1p-856, 0x1.f9f4ef71d307cp-667, 0.0, 0.0,
     0.0, 0.0, 0x1.0f64b5271be33p-70, 0.0, 0x1.683c0ff916b96p-103,
     0x1.1a8c7e8ee145dp-529, 0x1.a5ad462a8ae5ep-667, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ad32a53657514p-290, 0.0, 0x1.e24fac8a6c6d7p-567, 0.0, 0x1.ccdca5f969ffp-358,
     0x1.4871dc27c637bp-472, 0.0, 0x1.a5018975ad4d8p-728, 0.0, 0.0, 0.0,
     0x1.ef8492a4cedcep-58, 0.0, 0.0, 0x1.fd26a28b35601p-18, 0x1.cc8a494db61efp-886,
     0x1.655ccd7149cf6p-833, 0x1.a236323ff71e7p-17, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5715d3c1f9842p-163, 0.0, 0x1.b646a0a5bd721p-598, 0x1.1d9989ed2ded5p-729, 0.0,
     0x1.9855a388bb4efp-851, 0x1.403f55181b618p-111, 0x1.7079775c9784dp-58,
     0x1.721b8af04a1a1p-882, 0x1.f810fa20e5b79p-272, 0x1.ef7cb42fa8aa5p-778,
     0x1.0cdb1dd56585fp-712, 0x1.cc84dcbe8cebfp-835, 0x1.748607dc35c93p-339, 0.0,
     0x1.2b90e6a1425a6p-773, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d8c19feb8267p-351, 0.0,
     0x1.3bad2730bf58p-919, 0x1.d65a07f682e0dp-275, 0x1.37864de24710dp-691, 0.0, 0.0,
     0.0, 0x1.722acc3be4a84p-487, 0x1.95ee8f10d4ed1p-473, 0x1.e2b5f4073a4fep-670,
     0x1.ce98a39f9ec09p-792, 0.0, 0x1.607adb3489584p-987, 0.0, 0x1.9cf0b97b62971p-62,
     0x1.ab98b0e5e1d3fp-122, 0x1.2988625553fe1p-84, 0.0, 0x1.dc7cf938c31ffp-457, 0.0,
     0.0, 0.0, 0x1.d4087061cc8e1p-929, 0x1.e20449508f00bp-294, 0x1.b40fa60a0ac0bp-686,
     0x1.2a5d159e30e9p-65, 0x1.bd43b1ad83513p-449, 0.0, 0.0, 0x1.9820e230ee64fp-165,
     0.0, 0x1.2ca4e14f6c511p-97, 0.0, 0.0, 0x1.ef501301338ffp-548,
     0x1.c53c3d7b543b4p-675, 0.0, 0.0, 0.0, 0.0, 0x1.847cd3e83afe4p-518, 0.0
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
            tmp1 = Sleef_finz_logd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_logd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logd1_u10purecfma bench acc %la\n", global_bench_acc);
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
