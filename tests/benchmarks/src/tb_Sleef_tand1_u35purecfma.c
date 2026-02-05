/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand1_u35purecfma.c --function Sleef_tand1_u35purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.669ba8d4eaep-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3c51aa7b6b9fp-241,
     0x1.31bca4e0b0cc4p-496, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e108609ce66dp-481,
     0x1.0882fccd3a8f4p-88, 0x1.f6a7f9f037c5fp-329, 0.0, 0x1.5726df795dac2p-735, 0.0,
     0x1.2d02b72693dc9p-390, 0.0, 0x1.c9e603da3f12cp-723, 0x1.0c3d19c07e86ep-788, 0.0,
     0.0, 0x1.b932e039d1dd9p-388, 0x1.8b0fc0c600a1bp-252, 0x1.29b3c1c7e9001p-453,
     0x1.d94e8bd0df922p-969, 0.0, 0x1.5d45ed0ed4fe8p-119, 0.0, 0x1.4d9af61afd0c4p-140,
     0x1.fa199a2da32fdp-475, 0x1.6595e5dcd19e2p-431, 0.0, 0x1.f5fd4bf7d9355p-345,
     0x1.3399e3b2d78d2p-572, 0.0, 0.0, 0.0, 0x1.1bd0d789eff75p-294,
     0x1.a04323efe6927p-255, 0x1.51b38330dba2ap-65, 0x1.440855bf9eeb5p-846,
     0x1.dd3bae121af1bp-605, 0x1.b31deaf543006p-689, 0.0, 0.0, 0x1.380da9b5ff1aap-97,
     0.0, 0.0, 0.0, 0x1.2ad04267116d5p-90, 0.0, 0x1.65e8301a374ecp-51, 0.0, 0.0,
     0x1.f0ddced340fbbp-329, 0.0, 0x1.3e084c746b3fcp-936, 0.0, 0x1.18512d78788f4p-627,
     0x1.b6dc40ec4abd2p-90, 0x1.75a0b2e7d84d7p-111, 0x1.46e17725bc0c9p-379, 0.0,
     0x1.266da096f9a29p-849, 0.0, 0.0, 0x1.1aac46a5b57dep-268, 0x1.a7f0ee5bcae94p-313,
     0.0, 0x1.48c2f7ae6d3e5p-475, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35721a79d7138p-53,
     0x1.16d447737ffp-196, 0x1.055c7ddf71841p-199, 0x1.e7c31d69da8acp-646, 0.0, 0.0,
     0.0, 0x1.b7fd321b2967ep-957, 0.0, 0.0, 0.0, 0.0, 0x1.29b0f6b4dc688p-213, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.890890d3500b5p-595, 0.0,
     0x1.a89c44521dc8ep-712, 0.0, 0x1.561c02a357e65p-550, 0.0, 0.0, 0.0,
     0x1.215dfd41e237dp-666, 0x1.f0bab258ba7aep-106, 0.0, 0x1.3b001e6ac4febp-471, 0.0,
     0x1.5d90dbed4443ap-681, 0x1.684c30b5d2b2bp-449, 0x1.0106af9f3bef8p-638, 0.0,
     0x1.c36ed6ba17a06p-934, 0x1.3c55172f64b1p-646, 0.0, 0x1.dee551838745p-484, 0.0,
     0.0, 0x1.4be472b07a496p-769, 0.0, 0x1.83a6c12066a4ep-807, 0x1.29ebe78127aefp-365,
     0.0, 0.0, 0x1.7128e12e6a848p-404, 0x1.d39a1e26e95edp-343, 0.0, 0.0,
     0x1.d5f008a589cd4p-381, 0x1.4ade9342e1258p-221, 0.0, 0x1.614fb2f2921e5p-509,
     0x1.4f2fac4b4e83ap-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56574137a1bbbp-916,
     0x1.acf174fb3207fp-411, 0x1.d8bd07673f8aap-660, 0.0, 0x1.b882f951892f8p-846,
     0x1.fff768be160a9p-702, 0x1.9b82c66db65e5p-475, 0x1.0724d0853a6f7p-786,
     0x1.28f10ef3a19bfp-98, 0.0, 0x1.7e0bdc0a3d1fp-796, 0.0, 0.0,
     0x1.6677862866baep-298, 0x1.faa18cfd944d7p-34, 0.0, 0.0, 0.0,
     0x1.541d94db72ecbp-330, 0x1.0ac1123e0ca08p-28, 0x1.110f3b4c53fe2p-1015, 0.0,
     0x1.eb30f6824c4e4p-584, 0x1.674ac7440b6a5p-363, 0x1.46c781c779d79p-96,
     0x1.5c71b3bc0b136p-317, 0x1.ba705821c7e04p-648, 0.0, 0x1.c5688faf16efcp-55, 0.0,
     0x1.e295fee62f6c4p-340, 0x1.5cf4f67709a57p-688, 0.0, 0x1.05c7a8b5ad037p-965,
     0x1.752bf81a1c5aap-513, 0x1.9aa729ff770d2p-806, 0.0, 0x1.f1e200303d50cp-248, 0.0,
     0x1.5e9a7efe52862p-374, 0.0, 0x1.9d60cfed5d42dp-38, 0.0, 0.0, 0.0,
     0x1.62fd19b5ee15ap-668, 0.0, 0.0, 0.0, 0.0, 0x1.b170f89f7ceb1p-299,
     0x1.55567f12f7dffp-758, 0x1.afd29ba93ad38p-630, 0x1.c104488c8f4bcp-620,
     0x1.6889997515a22p-713, 0.0, 0x1.77e1dae0fd7ap-682, 0x1.d8de6cf7a837ep-360,
     0x1.cb355fd475d2dp-478, 0.0, 0.0, 0x1.386067ec727c5p-271, 0x1.3d0e85124799fp-203,
     0x1.a6a1448431679p-643, 0.0, 0.0, 0x1.c03057b2850abp-811, 0.0, 0.0, 0.0, 0.0,
     0x1.d65b816c97091p-912, 0x1.f29f5c6e8d62bp-89, 0.0, 0.0, 0.0,
     0x1.b2fc8e28b716cp-223, 0x1.c229d87f5099p-274, 0x1.f4ff1e95142e6p-665, 0.0,
     0x1.4b66dd9e136a2p-852, 0.0, 0.0, 0x1.9826e57449cfdp-174, 0x1.3a8f693c1e6e3p-509,
     0x1.9d3478779b85ep-777, 0.0, 0x1.11a2d94239cc2p-959, 0.0, 0x1.b9e1064535f4p-799,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6df163229b0e1p-265, 0.0, 0.0, 0.0,
     0x1.43e124cd7e575p-596, 0x1.b7f45c10c321ep-231, 0.0, 0.0, 0x1.53a8dd6a8a6fp-406,
     0.0, 0x1.b6fd9d67f6fep-503, 0.0, 0x1.14b031f061dc6p-558, 0.0, 0.0, 0.0,
     0x1.d5361576d856ap-279, 0.0, 0x1.18c26a548545ep-537, 0.0, 0.0,
     0x1.eed9562287f5ap-397, 0x1.44dd011006d5bp-857, 0.0, 0.0, 0x1.91420682e3c55p-484,
     0x1.d567cf240332cp-46, 0.0, 0.0, 0.0, 0x1.6a1d488aac5f4p-112, 0.0,
     0x1.1e99b0a8966c5p-906, 0x1.c7ed9be91d717p-129, 0.0, 0.0, 0x1.a1fe324b61b24p-38,
     0.0, 0x1.74bf9d5f059fep-160, 0x1.ebc0500284936p-342, 0.0, 0.0, 0.0,
     0x1.93a192d475e8cp-791, 0.0, 0.0, 0x1.dd8121fa7c14cp-775, 0x1.8a0e763039d9p-858,
     0x1.e53ae457e8c32p-86, 0x1.d98d5d664cca3p-775, 0x1.b6cb2fd095151p-305,
     0x1.f17440a7dd506p-632, 0x1.2ab943ad90f44p-174, 0x1.1118bb0635204p-509,
     0x1.b63f403d55364p-187, 0.0, 0.0, 0.0, 0.0, 0x1.ee0e44504a5f2p-510, 0.0,
     0x1.45dde85291711p-536, 0x1.bf888219e7fbfp-722, 0x1.77c71bc29016dp-884, 0.0,
     0x1.aad3bb1dee7dfp-56, 0x1.85b94d8cec0bep-1022, 0.0, 0.0, 0.0,
     0x1.4145b6afb8978p-755, 0.0, 0.0, 0.0, 0x1.741e914512c1cp-498,
     0x1.4d46ba5a621a1p-727, 0x1.2a2e8529adf52p-938, 0x1.6a1fbdb5aac6p-318,
     0x1.7b641d54fa659p-929, 0x1.739457c5c1a0cp-606, 0x1.ba3d6f92229e2p-896, 0.0, 0.0,
     0.0, 0x1.3e3375770785cp-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5d730e9a732fp-1020,
     0.0, 0x1.c7759f15811ffp-426, 0x1.810d2d11f0741p-642, 0x1.b47760365a272p-133, 0.0,
     0x1.1d59a5d9157e9p-450, 0x1.e59215b152c84p-848, 0.0, 0x1.8daa4206be094p-115, 0.0,
     0.0, 0.0, 0.0, 0x1.aff23e309ee46p-628, 0x1.a8bdacfdd44c9p-827,
     0x1.6918216800511p-892, 0x1.1fb7f27b55bebp-177, 0x1.b9d74f5fe1dc1p-389,
     0x1.c3f9aa0dd8cp-865, 0x1.c03ec69563cb5p-876, 0.0, 0x1.003f64921b8e9p-730, 0.0,
     0.0, 0.0, 0x1.988793f528e2p-806, 0x1.9fb299f21cf68p-361, 0x1.8e2d78a46fd54p-746,
     0.0, 0.0, 0.0, 0x1.6da633da78efep-897, 0x1.04b02f0999495p-755,
     0x1.1af0c80df2157p-469, 0.0, 0x1.967c0c4222079p-791, 0x1.8c4c9044a8316p-764, 0.0,
     0x1.2746f8c10dee1p-181, 0x1.d21f900146adap-679, 0x1.9d6c1bf2910d9p-188,
     0x1.c46b056ce05ap-338, 0.0, 0.0, 0x1.7860b3aed5e8ep-533, 0x1.fcc828aaaa232p-131,
     0x1.ce0d00fd85755p-579, 0.0, 0.0, 0.0, 0x1.593caf8c5c166p-182, 0.0, 0.0,
     0x1.0e66947876a25p-132, 0x1.a7ae268e56b84p-918, 0x1.d7eee06dc8a6ap-550,
     0x1.f7767060a87ffp-793, 0x1.8ee8f8dd4a66ep-485, 0.0, 0x1.822d5f8f494cep-363, 0.0,
     0.0, 0x1.59483542ccc3p-802, 0.0, 0x1.a6130c6e10225p-363, 0.0,
     0x1.758439e39c391p-925, 0.0, 0x1.e153fb9e422c1p-470, 0x1.c0ded7fdeca5dp-48,
     0x1.c56170429020bp-514, 0x1.09265c425fbf1p-118, 0.0, 0x1.9d37336619f05p-391,
     0x1.cd2c9fa6a713bp-274, 0.0, 0.0, 0.0, 0.0, 0x1.6372b0437e145p-864, 0.0,
     0x1.7a6a0b0c5eccp-662, 0x1.83ba1be0d1d99p-702, 0.0, 0x1.fbc9e971e367ap-844, 0.0,
     0.0, 0x1.e3afffb0d1049p-733, 0.0, 0x1.b7e23104b813bp-403, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.51624abf9c78cp-965, 0x1.2775a371266fap-802, 0x1.ea439c69a97e3p-886, 0.0,
     0.0, 0x1.dcdcd46172ba7p-730, 0.0, 0.0, 0x1.c7946f72cc4fbp-698,
     0x1.79cf2030c2267p-256, 0x1.c70b604cc0063p-608, 0x1.08cebdf858dp-572,
     0x1.42f2e397d691ap-595, 0x1.523b6712e839ap-792, 0x1.32f917351b953p-278,
     0x1.dedc842d00d58p-48, 0.0, 0.0, 0x1.a5039a4f64c23p-293, 0x1.e43b291e6e815p-366,
     0.0, 0x1.69719a292074cp-416, 0.0, 0x1.442cf4058438p-356, 0x1.95561efb83ee7p-514,
     0x1.d46dbf9359433p-163, 0x1.d2fd2f26f6f9ep-783, 0.0, 0.0, 0.0,
     0x1.ca88a1b048af5p-561, 0x1.cc606bd2dad1fp-479, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c5030734c5c0dp-5, 0x1.854abd9091334p-188, 0x1.5944e0e78cf87p-1022,
     0x1.eecb8fd913d5cp-917, 0x1.80f52b123d293p-242, 0.0, 0.0, 0.0,
     0x1.6abcd983c7e57p-211, 0x1.60315562f3016p-283, 0x1.0eea580a3e506p-338, 0.0, 0.0,
     0x1.23c64c784975fp-686, 0.0, 0.0, 0.0, 0.0, 0x1.4e0668e035114p-49, 0.0,
     0x1.348b55f7163bap-651, 0x1.58ad285cbd2a7p-448, 0.0, 0.0, 0.0, 0.0,
     0x1.3385f8c6fbec6p-1003, 0.0, 0.0, 0x1.a595493a3d9fep-235,
     0x1.00c00071c1866p-632, 0x1.77c781287c91fp-600, 0.0, 0.0, 0.0,
     0x1.6a07d211baa71p-791, 0.0, 0x1.ceef7298218bfp-345, 0x1.a9bf4f12b4b8cp-32, 0.0,
     0.0, 0x1.b51863137f0e5p-101, 0x1.0505b4cf35022p-459, 0.0,
     0x1.230e4236e8121p-1000, 0.0, 0x1.03bb966333c3cp-647, 0x1.bf7ca076b9539p-480,
     0x1.5afac8fd52fd1p-525, 0x1.60f7bd6bf68d4p-361, 0x1.a515f342acd36p-903,
     0x1.f9dca7efa14e1p-35, 0x1.381e92cb1feaap-429, 0.0, 0.0, 0.0, 0.0,
     0x1.19cf2c04c10a5p-891, 0x1.df9698b3ad64fp-232, 0.0, 0.0, 0x1.5f1053c44e912p-685,
     0x1.122e60c793838p-210, 0.0, 0x1.c053d7523f4a1p-201, 0.0, 0x1.7ddad96a8fd31p-891,
     0.0, 0.0, 0.0, 0.0, 0x1.1a047e141f5c3p-132, 0x1.7ee97e92f35c6p-217,
     0x1.74a53637a8297p-800, 0.0, 0x1.43fc2363aabd6p-727, 0.0, 0.0, 0.0, 0.0,
     0x1.fd681a5a0c38dp-480, 0x1.ad9186bf36416p-423, 0x1.e376670ec0015p-130, 0.0,
     0x1.456cee323cd9fp-268, 0x1.c454d8eeab765p-734, 0x1.bc0fc332761d6p-358, 0.0, 0.0,
     0.0, 0x1.b66b2840b337dp-921, 0.0, 0.0, 0x1.032d594ca7da4p-615,
     0x1.74ec29011ddf8p-99, 0.0, 0x1.250c8e3824f6dp-774, 0.0, 0x1.9fd86373f1c55p-825,
     0.0, 0x1.5101eb2914bf4p-382, 0.0, 0x1.74ccaf57b7cbdp-159, 0.0, 0.0,
     0x1.1638b72d6ef56p-29, 0.0, 0x1.e911dd5f783d9p-322, 0.0, 0.0, 0.0, 0.0,
     0x1.acae4034fa81ap-206, 0x1.11e3cf389ed0ap-814, 0x1.b44229ad3ebfep-217, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d534134408814p-423, 0.0, 0x1.b961373a8a1a7p-45,
     0x1.c16f3c25f2905p-210, 0x1.22a6ee053ea7p-676, 0x1.47ffe9844e9fep-775, 0.0,
     0x1.408410c374874p-80, 0x1.ad8075551c4c1p-155, 0x1.ab349e193c54cp-377,
     0x1.246413cb4cb84p-857, 0.0, 0x1.1f0f7813c81ffp-622, 0x1.0f7ff119bb221p-800, 0.0,
     0.0, 0x1.fd47b1644a55cp-504, 0.0, 0.0, 0.0, 0x1.2d05f0fc378c7p-207,
     0x1.9237cea62d1f3p-322, 0x1.f3ee7fab93042p-90, 0.0, 0.0, 0.0, 0.0,
     0x1.79dfd4cede99fp-941, 0x1.70d630c35d719p-535, 0.0, 0.0, 0x1.68705320fb8fap-681,
     0x1.9c15ddc5fb792p-56, 0.0, 0x1.4a03bbe84bfc9p-285, 0x1.4783cac34cf92p-110,
     0x1.e39f5c2da7d77p-423, 0x1.03eb9693e6f2fp-573, 0.0, 0x1.666df270d49bdp-238, 0.0,
     0.0, 0x1.3de66b655ac6fp-918, 0.0, 0.0, 0.0, 0x1.61c0e564be45cp-398, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ef5c66bbccep-91,
     0x1.328b8e8679922p-836, 0.0, 0x1.bc0ae5bd7a91bp-265, 0x1.6aa19b10d2feap-949, 0.0,
     0.0, 0.0, 0x1.1bf01692cbba4p-45, 0.0, 0x1.f960926b3598ep-382,
     0x1.da008e515accbp-951, 0.0, 0x1.5678d619af1dfp-8, 0x1.dfe57c29cdedp-829, 0.0,
     0x1.f4b829cf36301p-934, 0x1.4871450c51ap-886, 0x1.a9c22ce4082ecp-834,
     0x1.037249dea86ebp-507, 0.0, 0x1.4bba6b64ab83cp-168, 0x1.5370c1b69ac4p-748, 0.0,
     0x1.325adcb378a81p-178, 0.0, 0.0, 0x1.4b385148d6becp-540, 0.0,
     0x1.e90f95da2554p-16, 0x1.6c9b525c59878p-518, 0.0, 0x1.15d12278d03aap-921, 0.0,
     0x1.d43eb259972eep-769, 0x1.745193c17a29dp-488, 0.0, 0x1.905e5172e082cp-1013,
     0x1.8b5068549c40ep-183, 0x1.6f35d2026f012p-516, 0x1.08b3f3032f833p-932,
     0x1.1d11cbf631621p-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7840f9e247f3p-151, 0.0,
     0.0, 0x1.62db8223cd9c5p-920, 0x1.933c3821c1143p-452, 0.0, 0x1.bc98155f73ac3p-437,
     0.0, 0.0, 0.0, 0x1.8e31ba41dd165p-698, 0.0, 0.0, 0x1.4aedaf1fae252p-106,
     0x1.0df4010dc87bep-201, 0.0, 0.0, 0x1.1f1cb7844069fp-153, 0x1.07e241bbd4408p-352,
     0x1.5a3fb575d5101p-141, 0.0, 0x1.bf1173055750dp-127, 0x1.2c1790905c9cbp-133, 0.0,
     0.0, 0x1.9847ed954d6c2p-23, 0.0, 0.0, 0.0, 0x1.f0b71931fd3ccp-139,
     0x1.d972c2e663b27p-151, 0x1.22bd8ac6a57abp-647, 0x1.616348d0b0543p-48,
     0x1.7a7a66178c8bdp-558, 0x1.26fc415123775p-1016, 0x1.bd9a850df3db5p-344, 0.0,
     0x1.692bbc699d809p-278, 0.0, 0x1.1a995cc8a5774p-552, 0.0, 0.0, 0.0, 0.0,
     0x1.08ac40f8f624p-750, 0.0, 0.0, 0x1.76c3e1fcf31c9p-728, 0x1.ac8d11f4474e5p-377,
     0.0, 0x1.e6d0b0bde9a07p-942, 0.0, 0.0, 0x1.774ee48fec46ep-339,
     0x1.2fdb4ef376989p-860, 0.0, 0x1.e91e4c44c5287p-505, 0x1.9996614cfc857p-709,
     0x1.e596d370d8f27p-115, 0x1.1cd0e634b0c06p-194, 0x1.af43fef5c07ddp-102,
     0x1.2b662314e6ab2p-936, 0x1.d1fa943c270f3p-764, 0x1.bf2a7cdeffa8bp-112,
     0x1.4f7df469eeb04p-742, 0.0, 0.0, 0.0, 0.0, 0x1.b4bb16eb1df24p-875, 0.0,
     0x1.d05e7f642502ep-312, 0x1.6f442abebce2ap-737, 0.0, 0x1.aef02cd4bb626p-329, 0.0,
     0x1.68c138b87d3e9p-673, 0.0, 0.0, 0x1.f1fb9deae30bp-982, 0x1.e43388319a8a4p-3,
     0x1.4cc457ec0ab7dp-477, 0x1.ef87620d0c06ap-759, 0x1.fb90e2f690e55p-418, 0.0,
     0x1.d15236a2d152p-422, 0x1.f26bf69ea7a4ap-803, 0.0, 0x1.116fd4b22b1ap-160, 0.0,
     0.0, 0x1.467006afda248p-185, 0.0, 0.0, 0.0, 0x1.7fc38ab78c252p-919, 0.0, 0.0,
     0.0, 0x1.0b1360f6e1d99p-815, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2aa2b548261fbp-984,
     0.0, 0x1.a1164906ef591p-14, 0.0, 0.0, 0x1.714cbfe8a80b3p-448,
     0x1.4880fee76afp-91, 0.0, 0.0, 0x1.2454656c9f0f3p-880, 0x1.3cf1ca0038b39p-488,
     0.0, 0x1.d58c84cbffc8dp-443, 0.0, 0.0, 0x1.adf9a221cf6f6p-257,
     0x1.23e8a629248c4p-886, 0x1.5f88221802a07p-626, 0.0, 0.0, 0.0,
     0x1.fc653b3ce1766p-236, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a26ba0ec03ccp-869, 0.0, 0.0, 0.0, 0x1.641957456b2a7p-443,
     0x1.822a9a1d28dc7p-796, 0.0, 0x1.710a5dbc9ffdap-629, 0.0, 0x1.6bd0ccfb06bd8p-55,
     0x1.7c7992c26984bp-798, 0x1.8623608ecdc86p-1005, 0.0, 0x1.13da1c08477dap-874,
     0.0, 0x1.6581067a3f8fcp-224, 0.0, 0x1.e5c41fde4bf81p-197, 0.0,
     0x1.318ccc834ffb4p-526, 0x1.11ef019ea8ffbp-838, 0x1.deaa7e83975d9p-446, 0.0,
     0x1.17a250402e83cp-234, 0.0, 0.0, 0.0, 0x1.4f05f1f9973cdp-460, 0.0, 0.0,
     0x1.e4faf65cc3577p-984, 0x1.2488f1b321b15p-763, 0x1.0089114208489p-683,
     0x1.71ea630d92a71p-300, 0.0, 0.0, 0x1.2613469dcc2acp-128, 0x1.55b3dcafcb726p-53,
     0.0, 0x1.82bf61237a407p-336, 0x1.4fea813f9ef41p-501, 0x1.e4e4afa553353p-573,
     0x1.05d8826900326p-357, 0x1.f22e20e3fabd5p-320, 0.0, 0x1.0547719a7df99p-8,
     0x1.f352dcfadc1acp-508, 0x1.d223fcb25a99fp-779, 0.0, 0x1.79d3a915cd1f4p-42, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c69a5273a3f7p-757, 0x1.b6278371e0157p-713, 0.0,
     0x1.4147fb977b31dp-486, 0.0, 0.0, 0.0, 0x1.40f6f00798595p-974, 0.0, 0.0,
     0x1.fd51a239f486p-45, 0x1.d6855703c975ep-969, 0x1.fa3a4369bdf37p-23, 0.0,
     0x1.c9727fabdb811p-166, 0x1.9c8531150e622p-288, 0x1.c4b1aaddd20e9p-253,
     0x1.efa1075af45adp-174, 0.0, 0x1.936f9254cbd61p-292, 0x1.24af8b4904e59p-809,
     0x1.1f62882d732dap-933, 0x1.2ce86989c8ebbp-970, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.122f1277b161cp-909, 0.0, 0.0, 0.0, 0.0, 0x1.c84b62bc1c9d6p-922,
     0.0, 0x1.99f987a18b00cp-637, 0x1.2edb7afe33ebep-452, 0.0, 0.0, 0.0,
     0x1.255e2e675bde6p-244, 0.0, 0.0, 0x1.3ead5235f7155p-61, 0x1.e0e3fe419b0f8p-703,
     0.0, 0.0, 0.0, 0.0, 0x1.d1f79fc2c6334p-325, 0x1.155667ab8e19p-603,
     0x1.909769e55b19ap-391, 0.0, 0.0, 0x1.e89b6679645f2p-97, 0x1.10bdc4c6745a8p-349,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.770268e5dd3ep-135, 0.0, 0x1.c14be88fb387ep-307,
     0x1.4736f216f2985p-735, 0.0, 0x1.d8e8eb03352e5p-380, 0x1.e44a6e851fa1dp-946,
     0x1.9f39e098e53c2p-753, 0x1.2cd0f562b58b4p-688, 0.0, 0.0, 0.0,
     0x1.755785a71b2eap-388, 0x1.ec33794f84855p-99, 0x1.abb22ec233cbfp-69,
     0x1.efd5833d01de8p-315, 0x1.4ac36c72ab93ap-118, 0x1.bfcf21df1b687p-755,
     0x1.175f32ddacc8bp-45, 0.0, 0.0, 0.0, 0x1.b11c9e19fb43p-341,
     0x1.d02765be8af2bp-560, 0x1.8b2f758d5fd0dp-725, 0x1.2b68c457941b3p-579, 0.0, 0.0,
     0x1.7d7305f4e86d7p-1003, 0x1.c8dac1c1dcfd2p-67, 0.0, 0.0, 0.0,
     0x1.08e865c4badbcp-564, 0x1.6f60b77919b37p-386, 0x1.9b9c4b21b7028p-465, 0.0,
     0x1p0, 0x1.2a2ff85b3908cp-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3f87c76263cdp-460, 0.0, 0x1.587580b393b4bp-310, 0x1.387e57a5dd65bp-627,
     0x1.321e5a8b4c90fp-850
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
            tmp1 = Sleef_tand1_u35purecfma(tmp0);
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
    printf("Sleef_tand1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tand1_u35purecfma bench acc %la\n", global_bench_acc);
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
