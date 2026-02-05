/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd1_u10purecfma.c --function \
 *     Sleef_finz_sincosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.31fd09df2ba55p-809, 0x1.1f006b1606de5p-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d22e635f5fcb4p-423, 0.0, 0x1.c9a1b6b9dce3cp-997, 0.0, 0.0,
     0x1.bbcc9d5850badp-327, 0.0, 0x1.1fc741dc7415dp-209, 0x1.c8d3ad3953541p-804, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.402bc97070058p-660, 0.0, 0.0, 0x1.f69ed3fc775c5p-274,
     0.0, 0.0, 0x1.1eaaff649586fp-997, 0x1.082bfd097f679p-750, 0.0,
     0x1.4358f812b2b59p-466, 0.0, 0x1.0ac6c5565cb21p-943, 0x1.11e10726efa97p-116, 0.0,
     0.0, 0.0, 0.0, 0x1.52948a14b15fcp-827, 0.0, 0.0, 0x1.a919b5adacdap-572, 0.0,
     0x1.b3f65cb40d2ccp-661, 0.0, 0x1.ee59a26a3441ep-330, 0x1.98e82045599c5p-952,
     0x1.522bf7cf12fa6p-762, 0x1.5b521012b0d0dp-950, 0.0, 0x1.78c77b757f6eep-362,
     0x1.5d85114a338a6p-869, 0x1.5880e8506f8f2p-282, 0.0, 0x1.30c5704a94befp-614, 0.0,
     0.0, 0x1.1f22630b52499p-980, 0x1.cbff06bac673dp-704, 0.0, 0.0, 0.0,
     0x1.d20f4b1012b26p-364, 0x1.703f9b782febep-705, 0.0, 0.0, 0x1.0a474004ce5ffp-390,
     0.0, 0.0, 0x1.599f2012cb0fdp-48, 0.0, 0.0, 0x1.db0b5236d8adbp-768, 0.0, 0.0,
     0x1.2bf4cd38e5a3ep-250, 0x1.14ea8df4f3f1ep-940, 0x1.e5ca51c5c8a79p-585, 0.0, 0.0,
     0x1.c3b0cb5924f4bp-832, 0x1.eb47ba80281e7p-328, 0.0, 0.0, 0.0,
     0x1.fb34b5ee592cap-511, 0x1.c1fee928bc72bp-675, 0.0, 0x1.36fa140d9dcbdp-828, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b097872c3ed1p-235, 0x1.6829c932bbc24p-198,
     0x1.888e066c1fb3ep-888, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2132b35656763p-269, 0.0,
     0x1.51d74aa30e125p-445, 0.0, 0x1.5493f34bdf5bep-546, 0x1.87615a69ee186p-564,
     0x1.f2ca8074752bcp-772, 0x1.5730e89dde89fp-215, 0x1.850f981ee7ceep-126,
     0x1.5eb061c31ecep-754, 0x1.6d1ad9e17738p-613, 0.0, 0.0, 0.0,
     0x1.35a0e4e846d0bp-666, 0x1.080231f560727p-349, 0.0, 0.0, 0.0,
     0x1.a5f0908c1d76ap-929, 0.0, 0x1.cb9cbd83050bbp-297, 0x1.76cec32e093b3p-206, 0.0,
     0.0, 0.0, 0x1.871f5fef93edap-567, 0.0, 0.0, 0x1.74b5569bb4659p-234, 0.0,
     0x1.3b0ae0b9b9243p-277, 0.0, 0x1.104bcf88ccdbep-448, 0.0, 0x1.eac440913ee48p-393,
     0x1.6d7a9827e0caep-313, 0x1.f2ab3d023a692p-944, 0.0, 0.0, 0x1.c05dbe5fdce55p-887,
     0x1.78b22e7dc71f2p-931, 0x1.1ba1b1c2a92ap-835, 0.0, 0x1.9581692f62086p-24, 0.0,
     0.0, 0x1.96a516f0e3855p-925, 0.0, 0x1.c6987de598f83p-189, 0.0,
     0x1.3a49ffdbf7656p-81, 0.0, 0.0, 0x1.ba42ee3a36233p-318, 0.0,
     0x1.d4ec8974bbbf9p-339, 0x1.1dd04ee29e784p-139, 0.0, 0.0, 0x1.a361c693e2ec4p-917,
     0x1.54d054a4817c7p-542, 0.0, 0.0, 0x1.0030b52a9c917p-468, 0.0,
     0x1.2d7e53b3ace5ap-99, 0x1.3ff61caea0d9p-651, 0.0, 0.0, 0.0,
     0x1.1fad3ba141352p-662, 0x1.25d0e1f9a0aecp-989, 0x1.537bc5aba3c1ep-195,
     0x1.3e99da58598c2p-348, 0.0, 0x1.c83c1a8f61a69p-252, 0.0, 0x1.18ede3feb214fp-449,
     0x1.ad9dc5a91034p-520, 0x1.07680d7a0b9b4p-577, 0x1.a53a382b4ca15p-860,
     0x1.62d982a11f6a4p-712, 0x1.2ba1c488cd9c8p-159, 0x1.4b4aa8fd48515p-564, 0.0, 0.0,
     0.0, 0.0, 0x1.3bd721176e22dp-414, 0.0, 0.0, 0x1.a801b0c9b86cfp-599, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b76ad9adbb5c6p-753, 0x1.e25c7c1d77b77p-576,
     0x1.983b5d5ceeacap-524, 0x1.0f2a39328ae2p-170, 0x1.9831a281c0211p-61, 0.0,
     0x1.e639e5d17bcd8p-159, 0x1.254f68d9e4082p-495, 0x1.af8caacb5b5afp-64, 0.0, 0.0,
     0x1.dc137055cb9b3p-731, 0.0, 0x1.f1e8a0ed2c147p-45, 0x1.9c7e806ef263bp-264,
     0x1.56391f074f103p-289, 0.0, 0x1.dde4b0102e07p-300, 0x1.2a15421525fcbp-410,
     0x1.e6e3d4edb336p-953, 0.0, 0x1.94fb373f7f0d3p-857, 0.0, 0x1.5cc6d0f537e0fp-293,
     0.0, 0.0, 0.0, 0x1.265ae728f64e7p-482, 0.0, 0.0, 0.0, 0x1.5d1199d6afb9p-840,
     0x1.a8c607a31f02dp-391, 0x1.e5908d7896104p-531, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc3467edb041cp-3, 0.0, 0x1.968d357a78c66p-688, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72b37852fef57p-599, 0.0, 0x1.8da0ef2332b6p-406, 0x1.4405b4c9cbdbp-47, 0.0,
     0x1.507bb8ece7a94p-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f0185821d89bp-580,
     0x1.caa515f0482aap-442, 0.0, 0x1.eacabe9281843p-345, 0.0, 0.0, 0.0, 0.0,
     0x1.2b39441dcc2a9p-796, 0.0, 0.0, 0x1.3d6c5dead3e09p-686, 0x1.287ed39d7f3e9p-150,
     0.0, 0x1.6941450cef18dp-723, 0x1.917c6a7dc1e5ep-490, 0x1.d81d583007dbcp-183, 0.0,
     0x1.fe2271efa42cfp-746, 0.0, 0.0, 0x1.072a400b5ae05p-930, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.82179d8fbb06fp-115, 0.0, 0.0, 0x1.2d57ea5f0320fp-876, 0.0,
     0x1.5194951b967eep-929, 0.0, 0x1.cd90433c5baedp-171, 0x1.136c6b71e5d15p-382, 0.0,
     0x1.b078ebe80f8d6p-225, 0x1.a110cc4ff766p-187, 0x1.a7b0149032fbap-674,
     0x1.295a3f69ff3cep-487, 0.0, 0x1.39ef252eb31c8p-981, 0x1.624da3eeb5beap-888,
     0x1.21a0e0a608db4p-13, 0.0, 0.0, 0.0, 0.0, 0x1.768c02fbba058p-32,
     0x1.53b21d1f3e618p-251, 0.0, 0x1.9f95290685328p-131, 0.0, 0x1.5886e8874cf29p-118,
     0.0, 0x1.bcdd9c122e9e3p-167, 0.0, 0.0, 0.0, 0x1.63d555a02226ep-971,
     0x1.6e20804d6c782p-310, 0.0, 0x1.0232ba114aad2p-902, 0x1.ecb884314ad49p-670,
     0x1.85ee52fb1d35dp-756, 0.0, 0.0, 0.0, 0.0, 0x1.62bcee640d219p-910, 0.0,
     0x1.6d10c462e07d8p-954, 0.0, 0.0, 0x1.0b9e08d37c4p-883, 0.0,
     0x1.841f22fdb5194p-523, 0x1.c118fec90017bp-759, 0.0, 0x1.b7317ec94a457p-433, 0.0,
     0.0, 0x1.8c72ba666cac1p-669, 0x1.3826c0fde952ap-831, 0x1.d30a31e2946cap-946,
     0x1.69c7e0fb5679bp-702, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f51b4236298bp-551, 0.0,
     0.0, 0x1.2c4da66cad56p-733, 0.0, 0.0, 0.0, 0x1.df58355fa883ep-136,
     0x1.a291d52a632c8p-629, 0.0, 0.0, 0.0, 0x1.47d3d881642dap-853,
     0x1.0fc2f4b1e4376p-346, 0.0, 0.0, 0.0, 0x1.522965ce19336p-698, 0.0,
     0x1.cc1738dc6e753p-543, 0x1.f1236e611a211p-611, 0x1.f414da42fbae9p-266, 0.0, 0.0,
     0.0, 0x1.f1f1f4d4b93f3p-954, 0x1.066fc2841c3b6p-162, 0.0, 0.0, 0.0,
     0x1.79e35def763c5p-644, 0.0, 0x1.dc3df5a3ce732p-77, 0.0, 0x1.8a9256f1e85b2p-479,
     0x1.b30edc4f29b22p-681, 0.0, 0.0, 0x1.cb8002fca41eep-800, 0x1.0daabe816fd43p-964,
     0x1.d10c8733422e3p-471, 0.0, 0x1.54542a649780cp-82, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.02a9dad354b1bp-160, 0x1.5d3467321c8bfp-659,
     0x1.4fb514c99e958p-287, 0x1.6a043a4d19726p-36, 0x1.d208af79f65b2p-890,
     0x1.9d60a56a462p-377, 0.0, 0.0, 0x1.38a00a0ca0b07p-28, 0x1.5d64e6318c9cfp-603,
     0x1.8ef1b432f9424p-906, 0.0, 0x1.82b4ade4b576dp-891, 0x1.d3ffa2a44ad7ep-867, 0.0,
     0x1.60325ee863067p-123, 0x1.7639437c90c28p-868, 0.0, 0x1.916e4ba56b1c2p-794, 0.0,
     0.0, 0.0, 0x1.ee34943148779p-812, 0x1.9b6991e819089p-988, 0.0, 0.0,
     0x1.755b11b2e80e6p-201, 0x1.403f1dd13ec23p-570, 0.0, 0x1.ed0043ab9c0fdp-530, 0.0,
     0x1.58275651a88bep-911, 0.0, 0.0, 0.0, 0.0, 0x1.eafb371121b9ap-868,
     0x1.e0691d2ee5bbp-506, 0.0, 0.0, 0.0, 0x1.ad154be1ba9a9p-495,
     0x1.9505fb458941fp-994, 0x1.dd9634b3fc035p-140, 0.0, 0x1.fdd3631bfbe35p-319,
     0x1.db7de9eb523e6p-374, 0.0, 0.0, 0.0, 0x1.1a1e8ddcba309p-334,
     0x1.cd7e55a88b712p-767, 0.0, 0x1.abf84f7d3f9b2p-648, 0.0, 0x1.0bd62f8fa0699p-686,
     0x1.c5d411b635123p-263, 0x1.3ad155ab6722bp-665, 0x1.e730d8d344164p-163,
     0x1.fa0a959841161p-7, 0.0, 0x1.23cba0b82940bp-332, 0x1.3600144a3704dp-818,
     0x1.5b69b6c26b3d6p-26, 0x1.257616776f719p-247, 0x1.cd9e20a810dd3p-362, 0.0,
     0x1.a273178aeccap-727, 0x1.5a1d0886e1bb7p-109, 0x1.5190814493db3p-149, 0.0, 0.0,
     0.0, 0x1.7a70fda2d3618p-803, 0x1.3d54975783eb4p-209, 0.0, 0x1.f9e8228e8df44p-261,
     0x1.a946ccee6997ep-506, 0x1.e4810be0ebc9fp-721, 0x1.954930dc14a08p-33, 0.0, 0.0,
     0x1.219598752206bp-785, 0.0, 0x1.5d2ea41bfd10cp-509, 0.0, 0.0,
     0x1.49fc39286bbb3p-628, 0x1.e1b9cca1fb281p-353, 0x1.b1c7c06c66f37p-724, 0.0,
     0x1.b6084da6e6929p-760, 0.0, 0x1.4709508ee51eep-310, 0x1.ac6339cadc01p-942, 0.0,
     0.0, 0.0, 0x1.eaab3fbe2b195p-88, 0.0, 0x1.1c2d39593f2fep-285,
     0x1.ff02bfb6075aap-604, 0.0, 0.0, 0x1.15524e69ca0a3p-385, 0.0, 0.0, 0.0, 0.0,
     0x1.d49a620178875p-675, 0x1.98d7e751ecc15p-622, 0.0, 0.0, 0.0,
     0x1.1da5f02e6875ep-346, 0.0, 0.0, 0x1.da0e47634ee94p-86, 0.0,
     0x1.18dd809d47779p-950, 0.0, 0x1.9650ae94d7e79p-406, 0x1.73ec249737ec4p-914, 0.0,
     0x1.78259d5f869dp-35, 0.0, 0x1.bbb77f6d5022bp-977, 0.0, 0.0, 0.0,
     0x1.e6d9b22d27a16p-259, 0x1.958bc6b448d74p-567, 0x1.e816a825585bep-477, 0.0, 0.0,
     0.0, 0.0, 0x1.abbfe9691c9dcp-603, 0.0, 0.0, 0x1.1046ffbbf8f1bp-567, 0.0,
     0x1.1a23df7865a53p-284, 0x1.b931886cf10fp-999, 0.0, 0x1.fd77d6a63951ep-686, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d64baacccf28ep-191, 0.0, 0.0, 0.0, 0.0,
     0x1.34556e895be7fp-194, 0x1.54a4a8b55e39fp-733, 0.0, 0x1.b63f66f890864p-989, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54cba08e4bd3ep-345, 0x1.b6e69f6979b01p-79, 0.0,
     0x1.7a59fa0bda6a7p-550, 0x1.9ae36927c8a1fp-124, 0x1.193d014f5753p-621,
     0x1.a4631189178cfp-785, 0x1.8c80279ff8d85p-661, 0x1.b81e786907501p-704,
     0x1.00dfd1abb327cp-22, 0.0, 0.0, 0x1.2420d196807p-508, 0x1.e14745088f122p-848,
     0.0, 0.0, 0x1.b01334a1d37eep-563, 0.0, 0x1.a5374e601d53bp-863, 0.0,
     0x1.dc97ba716fbdbp-676, 0.0, 0.0, 0x1.abcdc69c27781p-986, 0x1.137f20a8e34f4p-630,
     0x1.078d62466c0cp-625, 0x1.5c48e345a966fp-283, 0x1.ffdfad5db5d08p-351, 0.0,
     0x1.a1b4925fb84e8p-600, 0x1.41f8f2d304b11p-247, 0.0, 0.0, 0.0,
     0x1.39967b575cd36p-839, 0x1.10193fbf4826cp-107, 0x1.5235e973e4f6cp-23, 0.0,
     0x1.a0a9e68774fbdp-119, 0x1.bbd968f9e943bp-954, 0x1.fd903b2662b37p-281, 0.0, 0.0,
     0x1.9db1f319c057ap-182, 0.0, 0x1.d1f48347a329ep-868, 0x1.247169aa87b76p-508, 0.0,
     0.0, 0x1.53b6ae20399acp-737, 0.0, 0x1.527e37ed199fp-385, 0x1.480fc617f7e43p-657,
     0.0, 0x1.1baaff1533288p-394, 0x1.2fed46014923cp-664, 0x1.fde99e1036f8dp-923, 0.0,
     0.0, 0x1.0a7b3b57ed385p-917, 0x1.31a25009bfc06p-832, 0x1.28ae33a2a8dcp-248, 0.0,
     0x1.1076421c6c8e2p-406, 0x1.97048b2753911p-30, 0x1.3e8bbdcde1b27p-225, 0.0, 0.0,
     0x1.29a127f49f0a9p-86, 0.0, 0x1.cedd58ef77425p-378, 0x1.cebe0cd77acaap-366, 0.0,
     0.0, 0.0, 0x1.a911d7bbe0f32p-718, 0.0, 0.0, 0.0, 0.0, 0x1.4f8854d54434ep-65,
     0x1.bc3bec002b389p-299, 0x1.446530dea8b8ep-695, 0x1.5db56ba8de8e7p-426, 0.0, 0.0,
     0x1.9613e5642f101p-995, 0x1.0074940d073d7p-757, 0.0, 0.0, 0x1.095ca471c67ep-1020,
     0x1.cd710bd4b2321p-210, 0x1.018c4ba58fe8ap-666, 0.0, 0.0, 0x1.99774017e7d61p-394,
     0x1.66e4b10d4246bp-707, 0.0, 0.0, 0x1.143ccff5bedcap-608, 0x1.0e18b719866ecp-889,
     0.0, 0.0, 0x1.a6ed9f621b86fp-551, 0.0, 0x1.7658258df6bf9p-678, 0.0,
     0x1.3e4a6c78179cfp-475, 0x1.ccec391c46b78p-728, 0x1.a15d0706e521cp-161, 0.0, 0.0,
     0.0, 0x1.f6ae269e4442p-844, 0.0, 0x1.eb70690b8facep-876, 0.0, 0.0,
     0x1.49d8c13a13bc7p-283, 0.0, 0x1.16e5f51cfa1f2p-366, 0.0, 0x1.e859e2678f05dp-754,
     0.0, 0x1.dba666b0db9afp-866, 0x1.1b4add8fae6e8p-616, 0x1.0d4600616e312p-14,
     0x1.d40ebe5ae1868p-554, 0x1.fdd73be1a0d4ep-134, 0x1.a7245fa259907p-344, 0.0,
     0x1.29cb6844b268ep-371, 0.0, 0x1.21dc55a268b1cp-480, 0.0, 0.0, 0.0, 0.0,
     0x1.3aa8a2d9f320ep-1021, 0x1.1e6c0e702aefep-848, 0x1.15c0573232462p-57,
     0x1.cb789742bc1aap-434, 0.0, 0x1.6cfaf5c5609ebp-17, 0.0, 0x1.10f3be3f52a9ap-655,
     0.0, 0x1.ed9c80f53df3ep-840, 0.0, 0x1.a163719a8680bp-963, 0x1.2a326d883d212p-397,
     0.0, 0.0, 0x1.469eea2364c8p-95, 0x1.862b7b79efa2fp-825, 0x1.12f175cbda3a7p-375,
     0x1.d55541d7963b8p-954, 0x1.f71702968dd5p-277, 0x1.1947d98b340ap-715,
     0x1.9454d1667250bp-694, 0.0, 0.0, 0.0, 0x1.a3ec221d5f9ecp-430, 0.0, 0.0,
     0x1.60980bb46ee93p-346, 0.0, 0.0, 0.0, 0x1.17119a66cf773p-596,
     0x1.a53070eddabp-647, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c80d18c0c6564p-771, 0.0, 0.0,
     0x1.87c0a32e1dc3bp-129, 0.0, 0.0, 0x1.6ef3e9123ba07p-600, 0x1.4c4364bda3422p-118,
     0.0, 0x1.6718afcfb8b3p-479, 0x1.75f8134a96babp-756, 0.0, 0x1.869007a07818ap-40,
     0.0, 0x1.da605033fd6bep-399, 0x1.631e1c3f84ac9p-424, 0x1.00a6b8af9080bp-527, 0.0,
     0x1.a2c6ecc28439fp-360, 0.0, 0.0, 0x1.7e44abfb4c18p-223, 0x1.739937313007bp-384,
     0.0, 0.0, 0x1.64a0b001c32f4p-513, 0x1.6240cffefcf6cp-940, 0x1.cd3ebc105e8a3p-414,
     0x1.d8b1669f82f03p-932, 0x1.0c79e68f9ca88p-458, 0x1.277f04d23f61dp-505,
     0x1.378b140e5527cp-679, 0x1.9f0bb7435a1bap-773, 0.0, 0x1.6bd63ab89471p-459, 0.0,
     0x1.4167f3fb4dc28p-930, 0.0, 0x1.d53bb721d44b2p-193, 0.0, 0x1.ae5e64d2aa3a1p-105,
     0.0, 0.0, 0x1.81e3856a39074p-507, 0x1.a459e49b57867p-879, 0x1.d8083bb902eddp-543,
     0.0, 0x1.f5d7ef7195853p-382, 0x1.a6f93d358bf4bp-982, 0x1.17b0842d09a4bp-558,
     0x1.d7d0ff215310cp-997, 0.0, 0x1.a7159d0a8db84p-868, 0x1.65005cd03ee4ap-895,
     0x1.2f5106e64e0e8p-274, 0.0, 0.0, 0x1.9f1bfa88c6722p-475, 0.0,
     0x1.e5f93aa602129p-910, 0x1.505f6a881f891p-481, 0x1.6728eb94510b3p-928, 0.0, 0.0,
     0x1.725fad936c7d9p-58, 0.0, 0.0, 0.0, 0.0, 0x1.bc06ee6eded54p-537,
     0x1.40090c0654ba1p-195, 0x1.19cf960b740b1p-430, 0x1.9b88dd931e31bp-242, 0.0,
     0x1.c5d06d3bcc1ebp-243, 0x1.b2b5548a3a801p-402, 0.0, 0x1.f03e7d304b87fp-128,
     0x1.fcde3512a21c4p-548, 0x1.dee365af9d4c5p-298, 0.0, 0.0, 0x1.7e1bf7400d76ep-111,
     0x1.1145ca392e2b9p-871, 0x1.9f981c00ee65p-849, 0.0, 0.0, 0.0,
     0x1.620da57b73ec1p-400, 0x1.fea11b6675042p-563, 0.0, 0.0, 0.0,
     0x1.21711602da533p-41, 0x1.30acf51e2dba5p-127, 0x1.a6e2c541d7589p-207, 0.0, 0.0,
     0x1.32f2d65b858f9p-883, 0.0, 0.0, 0x1.4d56bcfd525b1p-758, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bb061c296f77fp-407, 0x1.b8409259605a6p-6, 0.0, 0x1.01ea1fd3ea65fp-792,
     0x1.a17b9df24a0dp-245, 0x1.eb94ff4b2beadp-139, 0x1.c6f0822f8ad2bp-473, 0.0, 0.0,
     0.0, 0x1.f91bd0b6b8578p-359, 0x1.6dda15cf114d6p-372, 0x1.79ba0e62aa892p-827,
     0x1.7febe83013208p-588, 0x1.94c67fea99c3ep-918, 0x1.1ead799d8d4ebp-406,
     0x1.da4159e1845e8p-582, 0x1.1beac20eb0ae5p-539, 0x1.555b577d81f92p-509,
     0x1.5058764253eb8p-634, 0x1.98637503804dep-702, 0.0, 0x1.911c4274c6aep-176, 0.0,
     0.0, 0x1.afbfeed683dd6p-491, 0.0, 0x1.6f1a02ebf7fa2p-364, 0x1.d5c39db636123p-481,
     0.0, 0.0, 0.0, 0x1.18ac765f7ca39p-869, 0x1.a469cab7df43cp-379, 0.0,
     0x1.bd4440e110478p-592, 0.0, 0x1.07064eaebde1ap-187, 0x1.a8904da0b79d5p-73, 0.0,
     0x1.d94ffd871f1a8p-885, 0.0, 0x1.fc44a3700bd16p-504, 0.0, 0x1.52b16832a5ed3p-346,
     0.0, 0.0, 0.0, 0x1.69e02c0537d61p-693, 0x1.c7aae34e96441p-856, 0.0,
     0x1.37e60772b2af8p-359, 0.0, 0x1.ba727c2d61e9cp-862, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b715f28b43e5p-387, 0x1.59c24ae06fbe9p-739,
     0.0, 0x1.edbb1a202fe94p-71, 0x1.0da92ae2a79a8p-184, 0x1.520c598a3b8a5p-140,
     0x1.6f8591e9ab366p-898, 0x1.5aa6327bb1a3p-45, 0.0, 0x1.5b351d1a17932p-767,
     0x1.9b17bde7b6752p-337, 0.0, 0x1.da235279a353cp-654, 0.0, 0x1.60e09a84d2362p-593,
     0x1.65961f64f9ccfp-276, 0.0, 0x1.ffd4f536607a2p-550, 0.0, 0.0, 0.0,
     0x1.9caee5340f077p-239, 0x1.2d49b3d38f516p-900, 0x1.5a5191f7913d4p-983,
     0x1.c6c52949c47fbp-242, 0x1.5d3eb2c3bf666p-663, 0.0, 0.0, 0.0,
     0x1.d9846cf52931ap-508, 0x1.7c25f6048e91ap-476, 0.0, 0x1.43bd5b2dfca9ep-121,
     0x1.ff1239ede1ef3p-955, 0.0, 0x1.8d4954ec505ddp-722, 0x1.df93fa3673efp-712,
     0x1.97072dbff1ac2p-661, 0.0, 0.0, 0x1.84efa13628b97p-265, 0x1.8bfdcf9dcbdaap-569,
     0x1.0771ad862ea1bp-28, 0.0, 0x1.73d60673438e5p-755, 0x1.69c32f7735009p-770, 0.0,
     0x1.e25650fcea924p-408, 0x1.5d977fe1d92c3p-79, 0x1.506ed6f3d1de1p-558,
     0x1.08d464f4f38c9p-325, 0.0, 0x1.1bab675e2c155p-730, 0x1.a20955f9df059p-226,
     0x1.71704134fbf75p-781, 0x1.909081c0c21a5p-821, 0.0, 0.0, 0x1.70b9d25db9108p-457,
     0x1.6d586d6b21291p-156, 0.0, 0x1.90da59aaa28cbp-438, 0x1.9de95782613b2p-239,
     0x1.a25104ce9823dp-12, 0.0, 0x1.d7fca7b78026p-981, 0x1.e6706f55bceb6p-988,
     0x1.646640cf48077p-56, 0.0, 0.0, 0.0, 0x1.e0fb1fb672873p-585,
     0x1.f7f7c7996e731p-283, 0x1.92b08edc3ad4ap-447, 0x1.034cfd4c99502p-337,
     0x1.8bd4a3fe18152p-121, 0x1.27859d34a98d6p-434, 0x1.f8dec079e6e1bp-514
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosd1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosd1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
