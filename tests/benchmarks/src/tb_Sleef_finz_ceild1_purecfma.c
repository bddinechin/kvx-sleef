/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceild1_purecfma.c --function \
 *     Sleef_finz_ceild1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.e964a1e509132p-361, 0x1.73232357ed375p-247, 0.0, 0x1.b2ed104ed9287p-312,
     0x1.8bd579f09f6aap-878, 0.0, 0x1.e5aca13329a1p-9, 0.0, 0.0,
     0x1.6455d2bbc23c7p-595, 0.0, 0.0, 0.0, 0x1.e94ada4cc447p-1000, 0.0,
     0x1.1e31c55336c55p-802, 0.0, 0x1.f1453d8b55387p-185, 0x1.b29a94da22cdep-536,
     0x1.67ac53e66ff16p-769, 0.0, 0x1.6afbc30421f41p-135, 0x1.5ce66717ec26bp-539, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15d18d193a5ap-474, 0.0, 0.0,
     0x1.4994dbc35bc7fp-503, 0x1.b690b415c7181p-905, 0x1.3fc13cc99287fp-129, 0.0,
     0x1.18f5a93180e3ap-222, 0.0, 0x1.46fb07eef1657p-664, 0x1.cc781290aaefcp-652,
     0x1.f24d537193745p-573, 0.0, 0x1.906828ada3224p-767, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19075b3fccce9p-707, 0.0, 0.0, 0.0,
     0x1.0ed5ba4aa0327p-959, 0x1.8c46d9ac5fe5ep-346, 0x1.e65ccdacf2fcp-591, 0.0,
     0x1.3fe78c9dc7fd3p-963, 0x1.75e955c3a7be1p-753, 0x1.6d3a379d13a32p-785, 0.0,
     0x1.ca66cdf3c1ffap-284, 0.0, 0.0, 0x1.6fded8f691d72p-72, 0.0,
     0x1.5b6b32e7e4deep-511, 0.0, 0x1.e699b5623c6d1p-1018, 0.0,
     0x1.4bc5e979de8f8p-219, 0x1.f2cac799329e2p-559, 0.0, 0.0, 0x1.98725b50d01d9p-257,
     0.0, 0x1.507ae89306732p-869, 0x1.acabcb056e95fp-913, 0.0, 0.0, 0.0,
     0x1.2ccd6856897d1p-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.85f2042e6df76p-564, 0x1.60fa0de25f806p-892, 0.0, 0x1.763695fae472cp-235,
     0x1.362bd6ee36ac5p-271, 0.0, 0.0, 0x1.27b7b1f53662ap-283, 0.0,
     0x1.09f95d3563b62p-81, 0.0, 0x1.bd6c17ac97b4dp-257, 0x1.8d65b2752d608p-993,
     0x1.e63e7f9ef58b8p-352, 0.0, 0x1.8e5d2ab84adbbp-806, 0.0, 0.0,
     0x1.e648a0e5ee68bp-28, 0.0, 0x1.0f9326beaf546p-592, 0.0, 0.0, 0.0,
     0x1.8c2c8ccd05361p-133, 0x1.f499e4692c77ap-429, 0x1.db753ea9bcd56p-692,
     0x1.9abe87446c8e1p-994, 0x1.6ae14f109702p-617, 0.0, 0x1.dc6e9520d9aafp-891, 0.0,
     0x1.84e02b769de34p-910, 0x1.299ab8195a869p-360, 0.0, 0x1.038340fee9e8fp-150, 0.0,
     0x1.e01ece0999177p-577, 0x1.134cb6dc865a6p-250, 0x1.3f47405208748p-721,
     0x1.1d29b1dd93dd4p-354, 0.0, 0x1.3ef97e7a20a0ap-806, 0x1.2e5ad31c55bfep-449,
     0x1.6aef0fe07b759p-670, 0x1.80a463ea6462ep-259, 0.0, 0x1.42c36df6485c8p-963,
     0x1.3b715237c741ap-431, 0.0, 0.0, 0x1.d3e61760974f7p-4, 0.0, 0.0,
     0x1.b2be136c4e3e3p-711, 0.0, 0.0, 0x1.bfb36c546eafbp-294, 0x1.b0c9c2da1df26p-855,
     0.0, 0x1.a989eb5607aa9p-159, 0x1.485863298a6c2p-395, 0.0, 0x1.45b69e23ed39cp-817,
     0x1.cb814d268d117p-77, 0x1.f4bcf0eb4e24ap-998, 0x1.6edd412703054p-775,
     0x1.ebb375c33145ap-202, 0.0, 0.0, 0.0, 0x1.09a098d3e3facp-903,
     0x1.5d9f9259ada07p-64, 0x1.73b5f3a7b4777p-42, 0x1.f925d49c1092bp-402, 0.0, 0.0,
     0.0, 0.0, 0x1.15a22a2845a26p-457, 0x1.2b3cb75b8d449p-419, 0.0,
     0x1.c94be57fbb34ep-315, 0x1.59745d2dea398p-833, 0x1.05d47ae45879p-203, 0.0, 0.0,
     0x1.7ffa08a2fdda5p-808, 0.0, 0x1.c55d2e2df35eap-556, 0.0, 0.0, 0.0,
     0x1.7273a8a8c86e5p-134, 0.0, 0x1.965eb31403335p-625, 0.0, 0.0,
     0x1.61d5358cc95cfp-957, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5678e3f97d5fp-111,
     0.0, 0x1.6dfa4fe3b290ep-1003, 0x1.4bd611790e5ep-762, 0x1.5c1b5eddbe849p-560, 0.0,
     0.0, 0x1.a266c1bb2e2ddp-729, 0x1.6f328bd1ca5fdp-92, 0x1.cfd3ce6887bdbp-971,
     0x1.e83f6a01da902p-193, 0.0, 0.0, 0x1.cf3ff3c81fbbdp-206, 0x1.bc7c53f806349p-17,
     0x1.43eee4142dc92p-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e7ae7eced64cp-181,
     0.0, 0.0, 0x1.592f53084592bp-334, 0x1.96eafd0449b48p-513, 0.0,
     0x1.53acae9fe1a4fp-462, 0x1.eb44a271fd5c3p-676, 0x1.a3fc113d3e131p-439,
     0x1.4928b29cb90ccp-681, 0.0, 0.0, 0.0, 0x1.42a64515affddp-766, 0.0,
     0x1.9fb42d77ce62cp-721, 0.0, 0x1.131e15333689dp-239, 0.0, 0x1.c0c0f1ed8a144p-861,
     0.0, 0x1.9f15fe07a5526p-225, 0x1.975870bee4c16p-618, 0.0, 0x1.e07d71c722a67p-225,
     0.0, 0x1.f335f65860bc7p-966, 0.0, 0.0, 0.0, 0x1.891c464b599c1p-546, 0.0,
     0x1.c9738e7aaebap-875, 0.0, 0.0, 0x1.c4e24b86141c4p-526, 0.0,
     0x1.97da849f8c2b7p-406, 0x1.cd077e2871c5dp-616, 0.0, 0.0, 0x1.19afde5da5f09p-178,
     0x1.d5c2ad1207077p-607, 0x1.1b7ce99c55f37p-878, 0.0, 0.0, 0.0,
     0x1.6cd6e4194ede6p-1003, 0.0, 0x1.eb9b60a0dc83p-532, 0.0, 0.0, 0.0,
     0x1.2fa9913e163a2p-227, 0.0, 0.0, 0x1.cc82092b72b9dp-53, 0x1.1398e5f50caa4p-389,
     0x1.f081c74659fa7p-392, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b4db05fca34ep-658, 0x1.e0da33c9fcd84p-469, 0.0, 0x1.1fafb98c99decp-713,
     0x1.f0f134a344c88p-377, 0x1.4d726e72ca883p-465, 0.0, 0x1.0becc90c1122ep-700, 0.0,
     0x1.c298fe8b1a891p-64, 0.0, 0x1.88d946e2634dp-99, 0x1.f638baa7fda66p-570,
     0x1.f456f63e4ff52p-345, 0x1.c4cdb9ab8694cp-377, 0x1.9ddbcdc41a9fap-423, 0.0, 0.0,
     0x1.8924f60f3bec3p-821, 0.0, 0x1.5b31fe4dd6374p-93, 0x1.ecd12c62c973p-559,
     0x1.c3fe57e632c86p-14, 0.0, 0x1.9f3696e6ea2a1p-199, 0x1.c1f0ee82717afp-327,
     0x1.7edde45c09d4bp-810, 0x1.b00c04303844ep-693, 0.0, 0x1.3e8cef2e18759p-288,
     0x1.9b94b42bc0f34p-245, 0x1.9c7d56a036101p-91, 0.0, 0x1.83b747684a436p-174,
     0x1.5c412d3f9bae6p-771, 0x1.639c3d71a4112p-381, 0.0, 0x1.bd43df5d1ab8p-984,
     0x1.2f6c6ebeab3f1p-471, 0x1.3e7e5a1eecda9p-674, 0.0, 0.0, 0x1.1af342a3f1e12p-109,
     0x1.0c7d65952adfbp-608, 0.0, 0x1.549174c0ab545p-748, 0.0, 0x1.a20f42fe88e2dp-952,
     0.0, 0.0, 0x1.bfda425aff29p-923, 0x1.75ac3c947215bp-652, 0.0,
     0x1.2ee5214869373p-738, 0.0, 0x1.fa1a75a796ad5p-649, 0x1.d8bd3bd12db01p-100,
     0x1.0727b01752553p-835, 0x1.80177dc9515f6p-608, 0x1.a94d0b59aa5d5p-240,
     0x1.4ed86feaff099p-843, 0.0, 0x1.db401886504acp-139, 0x1.05951cd1561b3p-985,
     0x1.646e6c664d789p-400, 0x1.6e40a5b3f58e3p-797, 0x1.dcad7013b5a6ap-986, 0.0,
     0x1.674982a0ca9a3p-139, 0x1.4a7c5d0b8368ep-1, 0x1.f020d98acd19bp-661, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.87eb2128a252dp-61, 0.0, 0x1.e00eac43cb673p-890, 0.0,
     0x1.a04d46e9d2f5p-476, 0x1.fe5db69bef2fbp-562, 0x1.4e6ee0f8eec69p-571, 0.0, 0.0,
     0x1.959bb185e0b9fp-805, 0x1.9921de3f75315p-682, 0x1.8b02858172e54p-344,
     0x1.b1f7b9b2d0a4fp-195, 0x1.855e5eb4e3e84p-904, 0.0, 0x1.795d486b55f98p-68, 0.0,
     0x1.5690a25ff2ee6p-743, 0x1.ac4f98bbe105cp-181, 0.0, 0x1.a8e4f3882efe6p-163, 0.0,
     0.0, 0x1.09c2f5c4daf7cp-231, 0.0, 0x1.cace0ec9653d6p-551, 0.0, 0.0, 0.0,
     0x1.f6d2a21e3a09bp-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de25e27d3f8b9p-346, 0.0, 0x1.029a451f51708p-518, 0x1.2411e93ff7f41p-609, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8a866abf9f94p-56, 0.0, 0x1.a36ba0fd4f3a2p-69, 0.0,
     0x1.b9553bd5bd496p-841, 0.0, 0.0, 0.0, 0x1.cc475921b1fddp-333,
     0x1.d78618afa4c1dp-368, 0.0, 0.0, 0.0, 0x1.b1daea8a0bcd1p-87,
     0x1.7668d6be50bfap-228, 0.0, 0.0, 0x1.12fbaa21083fap-29, 0.0,
     0x1.bc6070b92aba7p-923, 0x1.1c8ad351b9895p-407, 0x1.0ad9439902945p-614,
     0x1.f07a3ad22e5d2p-491, 0.0, 0.0, 0.0, 0.0, 0x1.d05c4ef26397ep-485, 0.0,
     0x1.692fcdb1cfc4dp-76, 0.0, 0.0, 0.0, 0x1.781ae619e090ap-905,
     0x1.8ed8c2158d681p-671, 0.0, 0x1.5566b24eadb33p-130, 0x1.261fb1e834572p-35, 0.0,
     0x1.81fa7b50c4db9p-553, 0x1.b77e491052ad4p-828, 0x1.fbf3def47e998p-30, 0.0,
     0x1.92700fefef9a2p-365, 0.0, 0.0, 0.0, 0x1.ea643b1c12238p-876, 0.0,
     0x1.5cd12614f47d3p-489, 0x1.c725ddb126a51p-9, 0x1.12badd2412b92p-961,
     0x1.fec7407cb8659p-190, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6f3e834e64834p-468, 0x1.af0f8117f17f2p-784, 0x1.2784e5b494d1bp-704, 0.0,
     0.0, 0x1.c9fde29638b11p-324, 0x1.7e96fa7133c9cp-76, 0x1.a375fe3a1f09dp-453, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c1b26befeba4ep-903, 0x1.b3235232b7403p-105,
     0x1.18a2d54a200ecp-182, 0x1.1687313ba93a5p-479, 0x1.f4da2bf61325p-281, 0.0, 0.0,
     0.0, 0.0, 0x1.71cc69172dec9p-722, 0x1.911508711ce85p-541, 0x1.3a0abc11580c3p-972,
     0.0, 0.0, 0.0, 0x1.b116a7677739bp-266, 0.0, 0.0, 0.0, 0.0,
     0x1.4ab429bfcd6f1p-120, 0x1.27947240d576cp-156, 0.0, 0x1.712c03a8dc02ep-39,
     0x1.0ad34aca22d67p-206, 0x1.d39ec23b3f432p-656, 0x1.5eba719145e93p-383, 0.0,
     0x1.1130f65cd772p-380, 0.0, 0x1.afb55cc3547fbp-506, 0x1.1949b93dc1e8p-777, 0.0,
     0.0, 0x1.c69203a39692ap-574, 0.0, 0.0, 0.0, 0x1.7e3403d9ffc3ep-816,
     0x1.9f037af3dc8bp-256, 0x1.d2bcf7d26e121p-433, 0.0, 0x1.7aac1bb60d313p-323,
     0x1.2e14d063e7bfep-846, 0x1.8c5fb58441e6cp-971, 0.0, 0x1.3c4bdca015671p-960,
     0x1.17b34eb69a213p-827, 0x1.96b5960c495f5p-522, 0x1.93b5def918603p-347,
     0x1.503746a86521cp-104, 0x1.e4d185ff441dep-1001, 0.0, 0x1.97ae7bb39e465p-394,
     0x1.0bdb2f74cab97p-252, 0.0, 0.0, 0.0, 0x1.1e50a68f1e164p-640, 0.0, 0.0, 0.0,
     0x1.83ab8599e8058p-401, 0.0, 0x1.526c2e9a82169p-253, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cae6c124b7678p-617, 0.0, 0.0, 0x1.add8919ee7eb8p-56, 0.0, 0.0,
     0x1.82682d0270acdp-369, 0.0, 0x1.57779a3db0811p-371, 0x1.766f7c536165cp-371, 0.0,
     0x1.6efed1bc4f404p-18, 0.0, 0x1.278a8d7c7f95bp-678, 0x1.c2bdae851ea6ep-427,
     0x1.c6048dcc0922bp-126, 0x1.1260a9e3b7a29p-691, 0x1.09015db1ee46dp-8, 0.0, 0.0,
     0.0, 0.0, 0x1.6d7b9c0462819p-861, 0.0, 0.0, 0x1.e1cee997a843bp-384,
     0x1.851544bac2d7bp-795, 0x1.160763281b66bp-678, 0.0, 0x1.9cced12d2812p-651, 0.0,
     0x1.7bba6f5bc3fccp-523, 0.0, 0.0, 0x1.773097761a344p-656, 0.0, 0.0,
     0x1.297fdf84b7579p-860, 0x1.33410c07f6efbp-351, 0.0, 0.0, 0x1.b00418c7f91a1p-340,
     0x1.f11c42133a343p-48, 0.0, 0.0, 0.0, 0x1.a3b2c49fa89e2p-497,
     0x1.0c5a53d0e186ap-880, 0.0, 0.0, 0x1.7a6c4b876c2e2p-111, 0x1.d5ee8e181e4f9p-872,
     0x1.60285b2e9a4dbp-83, 0x1.84d93afd31e77p-222, 0.0, 0x1.e6df886e7fdf9p-191, 0.0,
     0.0, 0.0, 0x1.5264aa044bdf3p-975, 0x1.201d463d2288ep-231, 0x1.87b378c168debp-307,
     0.0, 0.0, 0x1.af4ef9dd5e746p-236, 0.0, 0x1.28686818427c1p-96, 0.0, 0.0, 0.0,
     0x1.94786a8f83a89p-47, 0x1.dbbb70936fc71p-267, 0x1.9c1de2ace32bp-101, 0.0,
     0x1.37f8c139d7f5ap-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc9852968ee84p-71, 0.0, 0x1.59c0ae613f759p-204, 0x1.e68d5022899c1p-42, 0.0,
     0x1.db78f07a26ca2p-183, 0x1.447fc52f06f76p-899, 0.0, 0x1.ef8a39e70fed8p-85,
     0x1.e4c258bfa91eep-234, 0x1.7816d8f94c6f4p-562, 0x1.f09d38dca343bp-166, 0.0, 0.0,
     0.0, 0.0, 0x1.828943e1d2615p-338, 0.0, 0x1.2ae89e2d46164p-492, 0.0, 0.0, 0.0,
     0x1.60eef9423b3f8p-767, 0.0, 0x1.b676114868ab1p-386, 0.0, 0.0,
     0x1.c9f94b3c66843p-913, 0x1.24c35d7e9f3bcp-977, 0.0, 0.0, 0x1.be8f2bb37e6b2p-275,
     0.0, 0x1.bebf47df73ecdp-653, 0.0, 0x1.ec8f7561b2568p-450, 0x1.f5cf54cbcc3ffp-842,
     0x1.adcba875c0f06p-708, 0.0, 0x1.4e0a3e6d005ffp-113, 0.0, 0.0,
     0x1.82a4f92dda528p-388, 0x1.4066423672664p-536, 0x1.c5b7125677cb7p-855, 0.0,
     0x1.0a3d43ec8ab36p-64, 0.0, 0x1.e5e992eeec79ep-673, 0x1.ab9052efb7e25p-390, 0.0,
     0.0, 0x1.10b295b64d17bp-83, 0x1.755603d952d8ep-705, 0x1.db62717b2ab49p-283, 0.0,
     0x1.78d2331219b1dp-893, 0.0, 0.0, 0x1.f27d3ee283432p-791, 0x1.096162efeb668p-475,
     0x1.c94ebf32d0fb9p-992, 0.0, 0.0, 0.0, 0x1.17cc2f8592e0ep-156,
     0x1.4f6c4b00923bep-334, 0.0, 0x1.99421080c3341p-221, 0x1.e6de827968e5cp-286,
     0x1.fe602cad28acep-248, 0.0, 0.0, 0x1.46ea23b05aaf4p-780, 0.0,
     0x1.ecb702fbf7ddfp-383, 0x1.8452b1e895b21p-323, 0.0, 0x1.1c1eedb7e4039p-264, 0.0,
     0x1.839ba028c425bp-357, 0.0, 0x1.ea450fe3822ffp-795, 0x1.bfdbd91026606p-222, 0.0,
     0x1.38b5beacc9437p-830, 0x1.05a6675354aecp-55, 0x1.60800973cfecp-118, 0.0,
     0x1.af653c11a694fp-687, 0.0, 0.0, 0x1.75289222636a6p-516, 0.0,
     0x1.4672ba48a9fcap-2, 0.0, 0x1.57d8e1e934436p-554, 0x1.e0e7fe5ba2411p-258,
     0x1.57d1227c108cdp-742, 0.0, 0.0, 0x1.41643c385db37p-359, 0x1.c379f3a849376p-21,
     0.0, 0.0, 0x1.76584ba2512cbp-730, 0x1.fdf0881f7cda9p-953, 0x1.f5e9fbf8ef24fp-346,
     0.0, 0x1.e29d63188850bp-251, 0x1.66d477ce2ae6p-930, 0.0, 0x1.3e8bfab275dcap-161,
     0.0, 0.0, 0.0, 0.0, 0x1.ef60ea7b7c68p-252, 0.0, 0x1.f2a3668eaabcdp-788,
     0x1.1b6cdb8c040d4p-377, 0.0, 0.0, 0.0, 0.0, 0x1.ef2991aa5a9f3p-727, 0.0, 0.0,
     0x1.db19b6ec15936p-738, 0x1.112dea8537e97p-101, 0.0, 0.0, 0x1.d890a02a8e0d7p-99,
     0x1.7aa971321895p-803, 0.0, 0.0, 0x1.64d34d1d8d965p-149, 0.0, 0.0,
     0x1.5e3a8417dc282p-625, 0x1.dac93c59d0fecp-555, 0.0, 0.0, 0.0,
     0x1.cf0b81e338f51p-144, 0.0, 0.0, 0x1.c7ee88bc7bd56p-477, 0.0,
     0x1.c779159d8bfd8p-234, 0x1.20543969879bap-906, 0.0, 0.0, 0.0,
     0x1.96329a6647228p-146, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f6a8b5701ff2p-799,
     0.0, 0x1.8a9cba28d4eaep-324, 0x1.319fa7bbe091bp-504, 0.0, 0x1.c10e796a7f33fp-328,
     0x1.813b7a1ce1dc8p-281, 0.0, 0x1.a685fc7ad56f7p-332, 0.0, 0x1.73ac7cf9f2f46p-626,
     0x1.109319db828cep-30, 0x1.d879420fedee5p-1001, 0.0, 0.0, 0.0, 0.0,
     0x1.c9248c0a4e608p-768, 0x1.16b0f9061a446p-166, 0.0, 0.0, 0.0,
     0x1.1faa3ee7233e7p-974, 0x1.d43f3b0c798e9p-194, 0x1.6d2ff85456c83p-964, 0.0, 0.0,
     0.0, 0.0, 0x1.0b60daec9b01ap-1017, 0.0, 0.0, 0x1.5631d106e7f67p-919,
     0x1.16cd6343f20e9p-999, 0.0, 0x1.bc1f7b8377f55p-155, 0.0, 0.0, 0.0, 0.0,
     0x1.877475271e5fcp-99, 0.0, 0x1.a7ebe8fb0e96p-23, 0x1.7f7c46abbee51p-18,
     0x1.3887b7410e5acp-415, 0.0, 0.0, 0x1.eb3a1f0cbe147p-87, 0.0, 0.0, 0.0,
     0x1.6cbf1fe57eb84p-548, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03f51446443b1p-516,
     0x1.ed3b144cf816fp-985, 0.0, 0.0, 0.0, 0.0, 0x1.a70e7fd7a308fp-98,
     0x1.a1719f4da5266p-938, 0x1.dc09253895018p-55, 0.0, 0.0, 0.0,
     0x1.84909393074edp-359, 0.0, 0x1.22da20947a0e9p-652, 0.0, 0x1.9b6ad411b88ap-570,
     0.0, 0x1.5404813986912p-515, 0.0, 0x1.6b1e80850b41ep-512, 0x1.844c1e7fbbbe8p-371,
     0.0, 0x1.ddcd690fb814ap-282, 0.0, 0x1.29d80293452adp-805, 0x1.88d180833bb04p-155,
     0.0, 0x1.67d668665dfbap-986, 0.0, 0.0, 0x1.12d903602d839p-508, 0.0,
     0x1.db85557858822p-597, 0x1.a9c6034ee9c0ap-340, 0.0, 0x1.86298e0fa446p-384, 0.0,
     0.0, 0x1.01f5e2dc8ab85p-438, 0.0, 0x1.18a46c86a1ae9p-703, 0x1.2664978cc2372p-83,
     0x1.c2e62d33a911bp-722, 0x1.f3fbcf4f53858p-836, 0.0, 0x1.e3662cdd3b425p-398,
     0x1.aa952ff4ddce5p-355, 0.0, 0.0, 0.0, 0x1.26bb8edd5bc35p-372, 0.0, 0.0,
     0x1.93fc90d603997p-339, 0.0, 0x1.f35bd403624b5p-959, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd34d7e02c42bp-751, 0x1.3e8a41276b0e3p-966, 0.0, 0x1.35d005e94bf9p-932, 0.0,
     0x1.fac79b6b271e7p-293, 0x1.92a3a351c4cccp-477, 0x1.0110def5822c4p-76,
     0x1.12ff7e15036e4p-999, 0.0, 0.0, 0x1.6d7186dd4d83ap-760, 0.0,
     0x1.4702fab7e8df3p-777, 0.0, 0.0, 0.0, 0.0, 0x1.21f5b86e31e74p-1003,
     0x1.2110209b2d4c1p-967, 0.0, 0.0, 0x1.9975db9adaa5fp-462, 0.0,
     0x1.dee52ff6252c2p-144, 0x1.4fba83cc27a16p-810, 0x1.2b4066aa6dad2p-954,
     0x1.066c3d7ed1c76p-876, 0.0, 0.0, 0x1.962e1b0db5001p-114, 0x1.357c33f213c0ep-957,
     0x1.733ba4a6e6711p-424, 0x1.cdc3924b1e9eap-181, 0x1.79ecd4c036228p-483, 0.0, 0.0,
     0.0, 0x1.a3ec2169054f2p-107, 0x1.bac7d8f04cb2dp-537, 0.0, 0x1.ce1e185c44f99p-81,
     0.0, 0x1.4651cadad24f3p-662, 0.0, 0.0, 0.0, 0x1.984bd1db4ded5p-309,
     0x1.8778c0a8891e7p-717, 0.0, 0x1.d041333357738p-586, 0x1.a4213c56dd5b2p-515,
     0x1.a4ddf6431509ap-25, 0x1.1bca1f769bca3p-998, 0x1.7d44366849a7fp-499, 0.0, 0.0,
     0.0, 0x1.1ddc9b98355c8p-214, 0.0, 0x1.ec67d1d99e93bp-578, 0x1.49d7db8615f7dp-484,
     0x1.e291f93780784p-743, 0x1.05229b1711d33p-234, 0x1.bd9a0dd532f35p-454, 0.0, 0.0,
     0x1.003ae3579b2adp-457, 0.0, 0x1.a52db50b0a3d8p-767
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
            tmp1 = Sleef_finz_ceild1_purecfma(tmp0);
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
    printf("Sleef_finz_ceild1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ceild1_purecfma bench acc %la\n", global_bench_acc);
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
