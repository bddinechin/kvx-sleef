/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind1_u35purecfma.c --function Sleef_sind1_u35purecfma \
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
     0.0, 0.0, 0.0, 0.0, 0x1.1171875be6b25p-448, 0.0, 0.0, 0x1.302e4abd27702p-776,
     0.0, 0x1.f7a1dfd6423fdp-965, 0x1.c5f7e36e582dbp-32, 0x1.1ee5e1f0ac01dp-946, 0.0,
     0.0, 0x1.62f0e54cdfa74p-76, 0x1.d24547032a2dep-184, 0.0, 0x1.7574653544e24p-425,
     0x1.fa7903b211067p-769, 0x1.2993f4b43c535p-914, 0.0, 0x1.52b089c7a1b2ep-54,
     0x1.45fef85e5cf2ap-1004, 0x1.ffb013328341bp-708, 0.0, 0x1.6217ba1c5a28p-184,
     0x1.af72a2e96cdabp-135, 0x1.8dfd5cdeb0e73p-219, 0.0, 0.0, 0x1.1bcaf4b56f295p-51,
     0.0, 0.0, 0x1.93ac4453227a5p-736, 0x1.a84f0d5adff8p-517, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ba8886033906p-1018, 0.0, 0x1.b6688044057f4p-976, 0x1.fde98dc1d1dccp-138,
     0.0, 0x1.4b7e8caa839fep-442, 0.0, 0.0, 0x1.392c545758273p-972,
     0x1.46535d5545dbp-787, 0x1.ae9df13acbeccp-809, 0x1.fcf29208b4334p-72,
     0x1.583a5ebcf6e73p-827, 0.0, 0x1.77a58c13b363p-808, 0x1.0573604b452a8p-968, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e6b7f94d94e43p-283, 0.0, 0x1.a40bd0f25ec7ap-322,
     0x1.4618301cd5857p-740, 0x1.7e5bbee0c22ecp-330, 0.0, 0x1.b83bbfa8a4037p-349, 0.0,
     0x1.5372bcee05fd1p-390, 0x1.8f90ccc28aa9dp-842, 0x1.638e07c6de2ccp-557, 0.0, 0.0,
     0x1.6c2d41643b3p-337, 0.0, 0x1.adc21fdad9ce3p-869, 0.0, 0.0, 0.0,
     0x1.731c0a28f7264p-26, 0x1.d5d1ec551a38cp-929, 0x1.10f2cdd21b702p-88, 0.0, 0.0,
     0x1.c86bc5a583fe2p-433, 0.0, 0x1.96176abcd9f11p-784, 0x1.1bfe1aad79905p-501, 0.0,
     0x1.5cfd8e95edf29p-101, 0.0, 0.0, 0x1.3d2aa21c02e1fp-495, 0.0,
     0x1.cef9e3bf5c681p-657, 0.0, 0x1.a904fb3431b9ap-891, 0x1.fcb0164613eb9p-200,
     0x1.93e2affb084d2p-50, 0.0, 0x1.f0edb2dc66088p-865, 0x1.e7155363f2ad9p-958,
     0x1.0c16527c9a3c1p-56, 0x1.38f71ea04f7f4p-166, 0x1.49a6fa43195b1p-726, 0.0,
     0x1.eb385b1347aefp-377, 0x1.9ef333236d33dp-346, 0.0, 0.0, 0.0,
     0x1.500db39cc67ebp-569, 0x1.633c277239a44p-605, 0x1.81d1d31f01dfp-390, 0.0,
     0x1.f6b9d2e7465b5p-874, 0x1.2503b156bb652p-380, 0x1.d6c52ffc3d1bcp-880,
     0x1.7c88538cc49afp-298, 0x1.376fe3cf6828ep-349, 0x1.021bb56220e18p-513, 0.0, 0.0,
     0.0, 0.0, 0x1.bfd7476d45d21p-827, 0.0, 0.0, 0x1.f46d26bc5cc81p-335,
     0x1.1925435508701p-233, 0.0, 0x1.a52f57564a495p-20, 0x1.aa17e53de2514p-37,
     0x1.41a4c4df3790ap-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77b20214948d7p-471, 0.0,
     0x1.fd26ecda25456p-229, 0x1.4778419bbce27p-37, 0.0, 0x1.1ebf1c640a153p-287, 0.0,
     0.0, 0x1.fd32c881655b7p-360, 0.0, 0x1.c6d1e6913c518p-202, 0x1.e76f547942f49p-424,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f55f29f71e7bap-181, 0x1.be4ec084407dbp-721,
     0x1.f6204b6c48136p-666, 0.0, 0.0, 0x1.283dd88b9264dp-888, 0.0,
     0x1.dab49e24e70bbp-674, 0x1.e8a48565feed2p-667, 0.0, 0.0, 0x1.9aff46738ede9p-75,
     0x1.d2ec79c231f4p-514, 0.0, 0.0, 0.0, 0x1.59a0e35894612p-924, 0.0,
     0x1.ceec46a6ffc94p-942, 0x1.08298212b523ep-732, 0x1.b4eba3e1d9836p-831,
     0x1.de08e8e7d184dp-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.257b41432472bp-603,
     0x1.9dcd2cb051543p-647, 0x1.5f9e8bcc04bd1p-995, 0x1.9f54183d90f06p-516, 0.0,
     0x1.565cfc6770fe2p-670, 0.0, 0.0, 0x1.961f9c18ecbb4p-92, 0.0,
     0x1.08c7a2145528cp-72, 0x1.1a9ad25055c1ep-541, 0.0, 0.0, 0x1.7df4feca27ccp-312,
     0x1.aabd11385b451p-426, 0x1.fe80ea5e13721p-359, 0.0, 0x1.b0fe3796df97ep-1009,
     0x1.a797c40b8bd9bp-402, 0x1.ca93f682b3c6cp-713, 0x1.74b61b478f23ep-613,
     0x1.1640e6c0c8845p-236, 0x1.6af33c6bebd17p-570, 0.0, 0.0, 0.0,
     0x1.eb12785b00501p-671, 0.0, 0.0, 0.0, 0x1.68c1ef42cd4f4p-434, 0.0,
     0x1.1d3c62f1e69eep-89, 0.0, 0.0, 0.0, 0x1.6ecd20d49419ap-612, 0.0,
     0x1.df7f9bd610b6cp-531, 0x1.01943d6754664p-741, 0x1.afa1b5f164d35p-742, 0.0, 0.0,
     0x1.8a9c7bb3c3e22p-458, 0x1.debb7053f819cp-793, 0.0, 0x1.f590c2368b6f5p-171, 0.0,
     0x1.b4f152d37cc8fp-666, 0.0, 0x1.0f4509029ccf2p-369, 0.0, 0.0, 0.0, 0.0,
     0x1.9423de46a08bfp-378, 0x1.5edd20f9f622cp-965, 0x1.26531d99180a5p-955,
     0x1.ab52fade33e37p-832, 0x1.20e33e4d24d6dp-163, 0x1.b7620d0f78a55p-446, 0.0,
     0x1.4e9aef9a7cbcdp-343, 0x1.2aa75a129bf1ap-832, 0x1.aa5d743cdc51p-796,
     0x1.dfac4842da9e4p-579, 0x1.07c30bd932e65p-276, 0.0, 0x1.5855732f93afp-941, 0.0,
     0.0, 0x1.afc876d366395p-718, 0x1.10b78534492fap-29, 0x1.2f7fd1225aa9bp-68,
     0x1.92a29530dc2fbp-235, 0x1.fa9cd3241ee01p-483, 0.0, 0x1.901958b0de646p-434,
     0x1.b282ca42f376bp-160, 0x1.bf5cae534f0cdp-422, 0x1.b2d977431664bp-930,
     0x1.690cfbfdefcddp-18, 0x1.26fc1b25fc64fp-637, 0.0, 0x1.10170c7141cap-572,
     0x1.a1217fc09ae57p-908, 0.0, 0.0, 0.0, 0x1.d3a52bf546e64p-691,
     0x1.abd0b50394c06p-403, 0x1.0d672009d26b6p-330, 0x1.c304aa680176fp-176,
     0x1.8cb237254bca6p-647, 0.0, 0.0, 0x1.143e0b0412cccp-498, 0.0,
     0x1.55b8821268d9cp-562, 0.0, 0.0, 0.0, 0x1.3acdcd281b091p-1018,
     0x1.072cac47fe44ep-218, 0.0, 0x1.da15fc243f53dp-631, 0x1.df7926ebd8cd8p-680, 0.0,
     0x1.a2a7ee619a161p-824, 0.0, 0.0, 0.0, 0x1.c4ab353ad6befp-801, 0.0, 0.0, 0.0,
     0x1.1791fe38d3c08p-958, 0x1.d3a00ff58285fp-418, 0x1.dd90a8fbb8876p-127,
     0x1.3dcf911f05a72p-282, 0.0, 0.0, 0x1.680dfc4d77921p-952, 0x1.9afe094a00b95p-641,
     0x1.61d8eaf1bd26fp-9, 0.0, 0x1.e0499a23fad47p-264, 0x1.93379c9abee7cp-435,
     0x1.9716e85b84cd5p-341, 0x1.7288e0c178348p-498, 0x1.b4d73630bf04p-965, 0.0, 0.0,
     0.0, 0x1.2dcf8b0dfe2bdp-56, 0x1.f13eaccee3ef7p-173, 0x1.f5c5cb045e857p-907,
     0x1.214495b72e88p-919, 0x1.b723287cd0339p-1011, 0x1.bc854e170369ep-661, 0.0, 0.0,
     0x1.f97edff575c19p-957, 0.0, 0.0, 0.0, 0.0, 0x1.bd82167ffee0fp-954, 0.0, 0.0,
     0x1.9388c0a8a6437p-380, 0x1.28132ac441bfap-103, 0x1.62c1ca230dabcp-1019, 0.0,
     0.0, 0.0, 0x1.bcf28e06ab142p-522, 0x1.72a017ef7640ep-214, 0.0,
     0x1.118267a328bbap-608, 0.0, 0x1.73e01562a5d25p-859, 0x1.92ad2efdf56d3p-507, 0.0,
     0x1.66ea951f2e4ddp-636, 0x1.00c648ba6221cp-239, 0x1.5a32e8a8d3ce6p-519,
     0x1.50d9aea79cfc4p-1006, 0.0, 0x1.0a128a9f501b4p-836, 0x1.c2445380d3984p-772,
     0x1.7be85a36bdf6cp-747, 0.0, 0x1.7f35f8731c693p-175, 0x1.f1c60bc00743fp-5, 0.0,
     0.0, 0.0, 0x1.c329ce0e10ec5p-597, 0.0, 0.0, 0x1.3e0e8ed59f6b9p-137,
     0x1.44beb587b03ap-694, 0.0, 0x1.fa64488b6b6f4p-755, 0.0, 0.0, 0.0,
     0x1.6f19352b789d9p-129, 0x1.11000a87f977cp-237, 0.0, 0x1.7431606b7e1fdp-675, 0.0,
     0x1.b35915cf5a64fp-557, 0x1.de314b9187b52p-638, 0.0, 0x1.b88a56375ba3bp-791, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d5ef451285044p-686, 0x1.f3e066e2de0eap-697, 0.0, 0.0,
     0x1.7535f95a18aa2p-237, 0.0, 0x1.cc5ccc42c4fc3p-582, 0.0, 0x1.9ce66105f5192p-802,
     0.0, 0.0, 0.0, 0x1.61243fab3714p-484, 0.0, 0.0, 0.0, 0.0, 0x1.b75f29d95ef78p-464,
     0.0, 0x1.ce22f788e4e31p-879, 0x1.5eed8504a5adcp-581, 0x1.701286dd51d5dp-366,
     0x1.11fff250b9f8ep-861, 0.0, 0x1.e9f5905f20971p-681, 0.0, 0x1.f7456a1fdd08bp-917,
     0x1.85ff39b43a116p-963, 0.0, 0.0, 0x1.343045bee1f9bp-103, 0x1.ac1d8c852efdcp-867,
     0x1.9ee1d17e20323p-884, 0x1.a79479aef2db5p-700, 0x1.9b7deea1ff88p-449,
     0x1.b48d678eb2c67p-532, 0.0, 0x1.80f227e78846p-654, 0.0, 0.0,
     0x1.edd15a708d88bp-568, 0.0, 0.0, 0.0, 0x1.2bd448d815a65p-587,
     0x1.26897d205bddbp-850, 0x1.af87f5c64a0ep-707, 0x1.de52e9b61e2ffp-309,
     0x1.f540c06706a94p-239, 0x1.2edf2ef07201ap-609, 0x1.c33c4a9279efdp-12,
     0x1.7a7a618767e5dp-570, 0.0, 0.0, 0.0, 0x1.ffe4e492f7569p-592,
     0x1.510200a2aa16ap-354, 0.0, 0.0, 0x1.a87ec6ace492ap-894, 0.0, 0.0,
     0x1.bc3005e89434ep-388, 0.0, 0x1.566cc0510f693p-818, 0x1.cfe7249187872p-522, 0.0,
     0x1.a149b29b3ce4ap-778, 0x1.e6cd09b40b728p-560, 0x1.b94ab99d7f25ap-374,
     0x1.0ef04c1dae084p-585, 0x1.0c6678945bdc5p-787, 0.0, 0x1.8aec28353153ep-323, 0.0,
     0x1.211a399b83658p-147, 0x1.49f3ee78895a8p-371, 0x1.faf52d6208bbbp-171,
     0x1.09670888b8c2fp-374, 0x1.7c356bfa88738p-397, 0.0, 0x1.84eb99d827006p-172, 0.0,
     0.0, 0x1.4d0434bd9a0b1p-355, 0x1.65a129713c841p-264, 0.0, 0.0, 0.0,
     0x1.3db96f038cc39p-459, 0.0, 0x1.9c44ca9241033p-963, 0x1.c670e70519225p-924,
     0x1.f332b07fb1254p-167, 0x1.9053ee61053c7p-684, 0.0, 0.0, 0x1.01f7572651652p-438,
     0.0, 0.0, 0x1.773ea056d436fp-1000, 0.0, 0x1.5f0a2a73a11dep-990, 0.0,
     0x1.e377aa50ffc5ep-845, 0.0, 0.0, 0.0, 0x1.acb3c294712cep-782, 0.0, 0.0, 0.0,
     0x1.7e1ec89823ffdp-1015, 0x1.f679c3d30096cp-457, 0.0, 0x1.6303e525a5b3bp-341,
     0x1.a0f5af47c9e55p-141, 0.0, 0.0, 0.0, 0.0, 0x1.5f698bdac5221p-650, 0.0, 0.0,
     0x1.0d6eccbf4069ap-572, 0.0, 0x1.2b082cfc1c662p-708, 0.0, 0.0,
     0x1.4a12a7aadcbcfp-11, 0.0, 0x1.5745f6ff2d12bp-817, 0.0, 0.0, 0.0, 0.0,
     0x1.dd7407dde8b5ep-646, 0.0, 0x1.3c95dbd862be9p-1016, 0x1.4432dbed1507dp-501,
     0.0, 0.0, 0.0, 0.0, 0x1.b08717ec3b9d1p-663, 0x1.23fe6886167eep-468, 0.0, 0.0,
     0.0, 0.0, 0x1.130f7c42aa2d5p-642, 0x1.dbebf64cb72c4p-210, 0.0,
     0x1.73599e1978bf5p-670, 0x1.3577874d7f167p-66, 0.0, 0.0, 0.0,
     0x1.87f7880ca56bp-562, 0x1.16f0e91c16e57p-909, 0.0, 0x1.3e9be2ae2a0ap-938,
     0x1.73b90b49c1f26p-760, 0x1.0ba66061cab5dp-548, 0.0, 0x1.d2ef6ba609b54p-52,
     0x1.17c7b2c8f3bfdp-920, 0.0, 0.0, 0x1.96f32034b173bp-404, 0.0,
     0x1.91b62c571be4bp-17, 0x1.c64b09e792f69p-855, 0.0, 0.0, 0x1.0b848cbdf4017p-124,
     0x1.af4b0a722ee36p-708, 0x1.48cceb23b1d6dp-108, 0.0, 0.0, 0.0,
     0x1.9adef51c41242p-24, 0x1.fef3c2e288304p-61, 0.0, 0.0, 0x1.b3de2b8702abep-400,
     0.0, 0.0, 0x1.52f73c87cd7bp-366, 0x1.eab022a8fa368p-368, 0.0,
     0x1.2a3150529aa38p-980, 0x1.c6c36cc089588p-804, 0x1.61b2295343672p-652,
     0x1.82c2fd0c814ddp-155, 0x1.f80080fc81d8ap-482, 0x1.46c7beb5c91bep-946,
     0x1.93ceafe03b1e4p-715, 0.0, 0.0, 0.0, 0.0, 0x1.07af4d1d2a1b6p-599, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cd0d6eec3acfp-988, 0.0, 0.0, 0x1.2539d833958f9p-727,
     0x1.f965f801efbbep-582, 0x1.cb8500708cec8p-1008, 0.0, 0x1.4c8749ec49c64p-1018,
     0x1.cfebea9b0f294p-481, 0.0, 0x1.ddfa8594011edp-695, 0x1.f1e2b3c1cb58bp-586, 0.0,
     0.0, 0x1.4c8c678160a83p-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.948bfea2350f8p-264,
     0.0, 0x1.ffbc8f0b901a3p-477, 0x1.3d394fc761d5bp-147, 0.0, 0.0,
     0x1.f4f71163d0e82p-527, 0x1.0e0a451a0e4d2p-228, 0x1.ae3481cae0fa8p-710, 0.0,
     0x1.8d77c718b1ee9p-691, 0x1.49696950343cfp-728, 0.0, 0.0, 0x1.6ac8ebd7bc824p-679,
     0.0, 0.0, 0.0, 0.0, 0x1.74d04d1fc0621p-108, 0.0, 0.0, 0.0,
     0x1.d22eca54604e2p-822, 0x1.e55cbad2e781ap-715, 0x1.90797f6105c22p-87,
     0x1.7762befee287dp-343, 0x1.64577977788d2p-681, 0x1.c214f29bb00ecp-80, 0.0,
     0x1.5d8169cd26169p-89, 0.0, 0x1.d94f95ee8ce8cp-423, 0x1.d8f8a7a5117fep-642, 0.0,
     0x1.d6a8c83385937p-369, 0x1.012a562306572p-311, 0.0, 0x1.43540ad5822d2p-992,
     0x1.df984fee20717p-67, 0x1.10c7ae97a0bf2p-341, 0x1.afc1d2820b9e4p-993,
     0x1.82b1fb73f482ap-268, 0.0, 0.0, 0.0, 0.0, 0x1.c50a8cab9154ep-386,
     0x1.e480cf6d32a27p-906, 0.0, 0.0, 0.0, 0x1.7b79c9e19338p-140,
     0x1.208c9c4355c53p-129, 0x1.119162d130e5cp-381, 0.0, 0.0, 0x1.b126261d18a98p-775,
     0x1.5b38c2e2d6584p-349, 0x1.94cc9298d7162p-415, 0.0, 0.0, 0x1.7772c8c3cff4cp-953,
     0.0, 0x1.6ea0c854fb3d2p-212, 0.0, 0x1.46aaca9da7ad9p-37, 0.0, 0.0, 0.0,
     0x1.b0e4bc54e9a2bp-624, 0x1.b4ae274457a48p-594, 0x1.01506a352694ap-989, 0.0,
     0x1.1004ac8bd88edp-381, 0.0, 0.0, 0x1.7d13632d44bc4p-63, 0x1.ebc7a0c2ef3b6p-216,
     0x1.202ca236da75p-941, 0.0, 0.0, 0x1.523db19b4aab3p-263, 0x1.c20147a1524d2p-316,
     0x1.8bbdbcbc1e0dfp-448, 0x1.0b4c1453e1c0ap-159, 0.0, 0.0, 0x1.01b856a06dabep-878,
     0x1.7128bdc00acb8p-127, 0x1.9cf99e24704c5p-268, 0x1.8c5dba69258fp-849, 0.0, 0.0,
     0x1.b7a81faaecb48p-644, 0.0, 0.0, 0x1.4fa469a327ccep-91, 0x1.1f72f634da241p-60,
     0.0, 0.0, 0x1.88d0cc9b0bc51p-433, 0.0, 0.0, 0x1.b4d95b7fd5f2fp-744, 0.0, 0.0,
     0x1.73217b036ce1p-734, 0.0, 0.0, 0x1.c9216e130c459p-772, 0x1.a3568bda84058p-678,
     0x1.31de49c5fafbap-396, 0.0, 0x1p0, 0x1.4e70dd06bd4cp-37, 0x1.90ffe4c1317c3p-721,
     0x1.cfd9bc1978dc9p-904, 0x1.f9ecaa60963dap-316, 0.0, 0.0, 0.0,
     0x1.cdd59d512fa54p-41, 0x1.8681e0f0671c5p-904, 0x1.979d63389d911p-683,
     0x1.d67741fb74543p-934, 0.0, 0.0, 0.0, 0x1.3b277e6394ebbp-493, 0.0, 0.0,
     0x1.dc0e2b12e283p-106, 0.0, 0.0, 0.0, 0.0, 0x1.7ed3b7a3a5c2cp-316, 0.0, 0.0, 0.0,
     0.0, 0x1.41808bac3f571p-637, 0.0, 0x1.76224ff1bdd69p-545, 0x1.b6788dd9e9ed2p-646,
     0.0, 0x1.c5299ed9e7ea7p-11, 0.0, 0x1.9afaacbcab1e5p-306, 0x1.c83f8606bab57p-797,
     0.0, 0.0, 0.0, 0.0, 0x1.086ebfcd370a8p-441, 0.0, 0x1.f99e6ee4a02d7p-377,
     0x1.5716e4436538bp-572, 0x1.eff2d6241f17ep-555, 0x1.d1cf69a37a6aap-639, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1e0350523f5bdp-265, 0x1.e2ba05f71f261p-974, 0.0, 0.0,
     0x1.35892151d5acap-393, 0.0, 0.0, 0.0, 0x1.5766584bfd54ep-470, 0.0, 0.0, 0.0,
     0.0, 0x1.3f98843f3788p-13, 0.0, 0.0, 0.0, 0x1.b071aedf829afp-261,
     0x1.63ef10853953fp-1018, 0.0, 0x1.41eb08fa33dcep-970, 0x1.c1a5b921d4586p-891,
     0x1.1ef1d1adaea38p-880, 0x1.4b09f30e86cb5p-260, 0x1.358ed2093750cp-531, 0.0, 0.0,
     0.0, 0.0, 0x1.0879c7718619bp-619, 0x1.3fc1a2feb8e37p-511, 0.0,
     0x1.6fec871441f3ap-970, 0.0, 0.0, 0x1.902ff6d731ce2p-723, 0.0, 0.0, 0.0, 0.0,
     0x1.404feaede0743p-260, 0.0, 0x1.242634e1f4b49p-851, 0x1.a66bb53f15dcap-97,
     0x1.6d3d4d507bf9ap-659, 0.0, 0.0, 0x1.5874243ae18cdp-786, 0.0,
     0x1.825c8cbfc8d3ap-840, 0.0, 0x1.d7d25158f5205p-123, 0x1.7efd2619a796fp-277,
     0x1.dce5615e8b7c3p-1007, 0.0, 0x1.2ee6f6ccb0a3dp-706, 0x1.1d4e94280595fp-3, 0.0,
     0x1.9a839d148d08bp-297, 0.0, 0x1.cb3067c3b5e88p-213, 0x1.b4f8f9112ef7cp-202, 0.0,
     0.0, 0x1.eed78a8f9183dp-350, 0x1.9082039d77bb4p-381, 0.0, 0.0, 0.0,
     0x1.4a0c857ea86a8p-831, 0.0, 0x1.87350ce092eep-213, 0.0, 0.0,
     0x1.c5af1dcc60f71p-49, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e41f3ec40da8p-946,
     0x1.9c66eb4f8f6a8p-894, 0x1.a958f0328afeap-626, 0x1.8535b518918cbp-592, 0.0, 0.0,
     0x1.84f6bc89f3299p-33, 0.0, 0.0, 0x1.69a3b9a6f739ep-822, 0.0,
     0x1.22ea92232a2f2p-138, 0.0, 0.0, 0.0, 0.0, 0x1.df3308de87214p-301,
     0x1.0b06730946481p-183, 0x1.4f73226da6b44p-11, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8631032ca43d5p-142, 0x1.c1de84e8243e3p-58, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a4f861a1662cp-630, 0.0, 0.0, 0.0, 0x1.cba3b56ccb2d7p-642, 0.0, 0.0, 0.0,
     0.0, 0x1.666b93fab6217p-204, 0.0, 0x1.163ed10de4c0cp-341, 0x1.d8d1e2fef345dp-156,
     0.0, 0.0, 0.0, 0x1.f8134044aa9d9p-15, 0.0, 0x1.a0e8a0d16d574p-838,
     0x1.6cd6a96c5708ap-626, 0.0, 0x1.25f88a620a165p-564, 0.0, 0x1.708de6b338198p-493,
     0.0, 0.0, 0.0, 0x1.f681fc0e65fb9p-995, 0x1.9086cbe9d5befp-735,
     0x1.3e567751c7334p-152, 0x1.36c2fb69f3d03p-691, 0x1.859bb2ee8cdb7p-593, 0.0,
     0x1.b450e690728e5p-189, 0x1.1550f99e3c256p-574, 0x1.c8f6a13ac66a4p-864, 0.0,
     0x1.82b3ddf65382dp-57, 0x1.f3d6af370ed41p-604, 0x1.7aacd6aa24235p-750,
     0x1.05d89e273bc6cp-40, 0x1.a4406d8e0a21ep-41, 0.0, 0.0, 0.0,
     0x1.df44f0719cbeap-685, 0x1.9ef895e8198f2p-966, 0.0, 0x1.4cee76656b86p-544,
     0x1.e504086352543p-788, 0.0, 0.0, 0x1.a481ef3626c45p-844, 0x1.03d5a85250d9p-868,
     0x1.72f3500a364f2p-460, 0x1.2a47f3637dfcep-488, 0x1.9c75c0a2310fep-439,
     0x1.dfa894f2fd73fp-36, 0x1.c4ee6b38e93ffp-713, 0x1.b8fa9594cfcd3p-964, 0.0, 0.0,
     0.0, 0x1.57683bd9fcc5dp-1008, 0x1.4896c6ad1de96p-720, 0x1.82c3fe6c1488ep-214,
     0x1.9dfd1aee60444p-894, 0x1.820a510e1af02p-239, 0.0, 0.0, 0x1.bc1cb79891841p-155,
     0x1.367c0cf9e127bp-920, 0x1.d77936d9d69d4p-423, 0x1.cd1b8a9f28815p-248, 0.0, 0.0,
     0x1.42bec14b16559p-658, 0x1.d00372ff67073p-679, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.29a81e51dff7ap-706, 0.0, 0x1.f23f572d20a2ap-874, 0.0, 0.0, 0.0,
     0x1.c70262e3a6949p-431, 0x1.4da2ac81306cbp-260, 0.0, 0.0, 0.0,
     0x1.d902c074bf1ebp-9, 0x1.2e6d10f0ae88bp-926, 0x1.05c8826713fbfp-841, 0.0,
     0x1.b3723aab6bd5cp-339, 0.0, 0.0, 0.0, 0.0, 0x1.2747f588e6de2p-194,
     0x1.b4acd2cbcd1f8p-590
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
            tmp1 = Sleef_sind1_u35purecfma(tmp0);
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
    printf("Sleef_sind1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sind1_u35purecfma bench acc %la\n", global_bench_acc);
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
