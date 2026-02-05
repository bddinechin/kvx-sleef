/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsd1_purecfma.c --function \
 *     Sleef_finz_fabsd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.01d29ad7431fp-422, 0.0, 0.0, 0.0, 0.0, 0x1.12db4f0542a55p-984,
     0x1.3a57ee37d9653p-290, 0.0, 0x1.1f6458433dfa2p-724, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dbf72965512cap-74, 0x1.1159fe4f0a3ecp-671, 0.0, 0.0,
     0x1.99b5363b0ba2p-715, 0x1.0824090c06843p-132, 0.0, 0x1.a499510e0cb72p-573, 0.0,
     0x1.6f0075b5201f1p-567, 0.0, 0x1.de408d57381a7p-159, 0x1.8d4bf59273bdp-992, 0.0,
     0x1.a02c68c495419p-281, 0x1.5e76e26751ba9p-846, 0x1.2947e3b4cd13p-172,
     0x1.bb2ce034e7142p-323, 0.0, 0.0, 0.0, 0x1.cb1998bd5990bp-358, 0.0,
     0x1.c5c3860dd045cp-894, 0x1.fa0082b798f6ap-623, 0x1.2c9ed224c0a9ap-520,
     0x1.517197994049p-704, 0x1.b1a44b6047341p-356, 0.0, 0.0, 0.0,
     0x1.40425f9e89002p-548, 0x1.187b32e963e9cp-909, 0.0, 0.0, 0x1.7f9ef41798667p-134,
     0.0, 0x1.675b8c1330a37p-477, 0x1.04e33b7a47a2fp-610, 0.0, 0x1.a5d3c80c6f31fp-724,
     0.0, 0.0, 0x1.477b50198a651p-393, 0x1.49b239a317369p-461, 0x1.a777d0010a474p-347,
     0x1.cfab600f3a25cp-669, 0.0, 0.0, 0.0, 0x1.72af3be731613p-465,
     0x1.97ff8af4d4a1p-790, 0x1.23fd0b128878fp-906, 0x1.80c1fe9c7b26ap-109, 0.0, 0.0,
     0x1.024666b7a0ed8p-800, 0x1.cbf6bd6fbfad1p-461, 0.0, 0x1.659af91af0232p-635,
     0x1.6388857bc5b34p-510, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a6504afdc107ep-891, 0.0, 0x1.dca3343fed4dcp-638, 0.0, 0x1.d33fabaec8717p-359,
     0x1.db17778388a91p-577, 0x1.1feee5f4820c1p-351, 0x1.de276247a55d7p-508,
     0x1.0b26c6cbe3d3p-109, 0.0, 0x1.f0be94d5a127fp-71, 0x1.baae34be6a9d2p-497, 0.0,
     0.0, 0x1.8de37d2309025p-723, 0.0, 0x1.14198a4991e19p-268, 0x1.9d17ffd871ad7p-489,
     0.0, 0x1.382106f9f34ddp-855, 0x1.5d71d04ffd335p-281, 0x1.f450323f0db2cp-74, 0.0,
     0x1.3d2a5078d839dp-1016, 0x1.050e51b16b95ep-747, 0.0, 0.0, 0.0, 0.0,
     0x1.db2c244b26abdp-434, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40822ed215362p-458,
     0x1.faadedd088931p-859, 0x1.2c2da12e14f76p-223, 0x1.d3a979a2e9ddap-698, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1c901fc34d668p-560, 0x1.1690b6e46fb16p-456,
     0x1.9309faf674412p-203, 0x1.049a4a5f29ea7p-912, 0x1.f87bc71623e9bp-1007, 0.0,
     0x1.f6da24dcf423dp-65, 0x1.5270697afc8f6p-630, 0x1.af7dd6c885d05p-207, 0.0, 0.0,
     0x1.a150d180d5727p-840, 0x1.e47137af71fefp-683, 0x1.2d12272f657a4p-285,
     0x1.5ddc9eaf76693p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2fc5672553c3p-45,
     0x1.74d92f2a57e9ap-342, 0x1.fa43d8dd49e75p-131, 0.0, 0x1.7be7f7c1999a2p-226,
     0x1.0cc18c19f460bp-914, 0x1.a6a066159ccadp-122, 0.0, 0x1.62e5bb6ed11ffp-497, 0.0,
     0.0, 0x1.251455d38274fp-873, 0.0, 0.0, 0x1.2f96b06c81c69p-611, 0.0, 0.0, 0.0,
     0x1.7b1c7ce57c505p-447, 0.0, 0.0, 0x1.b32d6c8eee33bp-952, 0x1.758bfdc11c7c9p-926,
     0x1.fda2f0984490cp-32, 0x1.3d268b400c4ffp-647, 0.0, 0.0, 0.0,
     0x1.2832d5b076619p-160, 0.0, 0x1.b0dea2808daa7p-600, 0x1.e3ab67444ffd8p-249,
     0x1.e0e4494a357dcp-438, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2cb0a4c4150b1p-678, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bc8797252c4bp-27, 0.0, 0.0,
     0.0, 0.0, 0x1.804fa96a58f15p-724, 0.0, 0x1.3af043bd9f055p-858,
     0x1.d2c2bd1c4abp-185, 0.0, 0.0, 0.0, 0x1.88c2bf1045757p-791,
     0x1.b55b0bbb9640cp-749, 0x1.7494b28261057p-733, 0x1.c7d174bb785e8p-693, 0.0,
     0x1.d3cb029820d0ap-244, 0x1.49020dd3c5ab1p-201, 0.0, 0.0, 0x1.7cc500c0941b8p-576,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e3425937a39fp-200, 0x1.9468440fd52efp-766, 0.0,
     0.0, 0.0, 0.0, 0x1.3242f18e3ec7bp-540, 0x1.923f851edc4c3p-320,
     0x1.40de5a39abfa9p-286, 0x1.e52de9e88242fp-673, 0x1.1c429c757c0a5p-497,
     0x1.03564e612aa3cp-822, 0.0, 0x1.fc3c77c8c4021p-946, 0x1.729d91f1824e1p-225, 0.0,
     0.0, 0.0, 0x1.65472f14ac459p-553, 0x1.c4a1349719622p-867, 0.0,
     0x1.c280aff377228p-192, 0.0, 0.0, 0x1.d41ae25a064f6p-819, 0.0,
     0x1.bc13768805b0ap-204, 0x1.b08a29d03ee5cp-178, 0.0, 0.0, 0.0,
     0x1.10fe5f11acb8dp-13, 0x1p0, 0x1.59d004ac3aad2p-780, 0.0,
     0x1.0be8bc8a5f6e4p-146, 0.0, 0x1.5eceeb43d9b02p-137, 0.0, 0.0,
     0x1.fd0e0e7f7a9b8p-876, 0.0, 0x1.c1595afc0dd5ap-291, 0x1.fae9c279a948cp-165, 0.0,
     0.0, 0x1.4abdbfc22a951p-614, 0x1.9ed2391e3bf18p-477, 0x1.b4aabe365365p-27,
     0x1.dd9f775e0cd94p-221, 0x1.3e937e71bc776p-129, 0.0, 0.0, 0.0,
     0x1.a0ab8af2d0adep-504, 0.0, 0x1.e5d957a97bc1dp-789, 0.0, 0x1.4fa12465505c7p-347,
     0x1.38caa929253f9p-360, 0x1.2ef361771047ep-691, 0x1.856619636919fp-632, 0.0,
     0x1.f47c75217a24ap-204, 0x1.30fcc0be8c53dp-12, 0.0, 0x1.dacc8543eb29dp-407,
     0x1.c770d19ace39dp-670, 0x1.d4467761f2f66p-642, 0x1.80d03feb85d6dp-435, 0.0,
     0x1.b95271f13aa54p-7, 0.0, 0.0, 0x1.f661cae05af6bp-976, 0.0,
     0x1.f552079c1c259p-968, 0x1.c39d7be7cc181p-298, 0.0, 0x1.3a16d553f632bp-131,
     0x1.63ea0f1dc5c75p-220, 0x1.dcc116dcab23cp-842, 0x1.65bd4e3b6dacfp-255,
     0x1.5061b03e98003p-987, 0.0, 0x1.6285551e01d57p-638, 0.0, 0.0,
     0x1.dd1ebe853ad81p-431, 0.0, 0x1.33744da37ee01p-246, 0x1.22297c36172fdp-527,
     0x1.93c462a8e847dp-624, 0x1.94f0ec8b9241ep-60, 0x1.e5179d99d0db6p-231,
     0x1.f7bc7b2d11e44p-811, 0.0, 0x1.a47742eac1f43p-854, 0.0, 0x1.4256f9b56ce76p-561,
     0.0, 0x1.38dc734e85b86p-568, 0.0, 0.0, 0.0, 0.0, 0x1.f8704da6f2edap-770, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.739d0bbf230abp-970, 0x1.417d4c634ecaap-193,
     0x1.4f724b68cf6f9p-717, 0x1.d9dfd4c04e47p-998, 0x1.1bbb789e37f8ap-685, 0.0, 0.0,
     0x1.18f04b690b2ecp-731, 0x1.76738bee0ae38p-530, 0x1.90326aa2bf101p-569, 0.0,
     0x1.d53a43cd2c87ep-114, 0.0, 0x1.b856f0a887161p-404, 0x1.d63d07990e927p-543, 0.0,
     0x1.e22742ac7406ap-266, 0x1.e54aac8144486p-1009, 0x1.36b8fec0823cep-823,
     0x1.20f0f6a2a1316p-819, 0x1.5d5317a6810e4p-696, 0x1.151bf3db13545p-6, 0.0,
     0x1.12707849b6acep-807, 0x1.d09547da7a72cp-913, 0.0, 0x1.03c1c1b240087p-332,
     0x1.d9ee7a0750096p-108, 0x1.57c43b68d5eccp-695, 0.0, 0x1.a4594b7b6a912p-539,
     0x1.7d6848fe79959p-347, 0.0, 0x1.20c1125d728edp-286, 0x1.7ccfa125e9872p-478,
     0x1.3af3cd6b4374p-205, 0.0, 0x1.c5cc58c67673bp-821, 0.0, 0.0,
     0x1.274c0b63f1708p-629, 0x1.dbdd28ad9b7ap-878, 0x1.085a95fdcdb4dp-218, 0.0,
     0x1.b6281ed73a99dp-529, 0x1.9bbdfcbbc11ffp-1009, 0.0, 0x1.e742b87c0c363p-892,
     0x1.63658163ffa49p-390, 0.0, 0x1.03f72e8d31f25p-432, 0.0, 0.0, 0.0,
     0x1.e294291c6c088p-383, 0.0, 0.0, 0x1.de57a4658a832p-565, 0.0, 0.0,
     0x1.b8538f4300cb2p-208, 0.0, 0.0, 0x1.f1c856d5af38ap-529, 0x1.39fa50520ae68p-376,
     0.0, 0x1.31164af81827fp-855, 0x1.c0b01a81e4fd7p-704, 0.0, 0.0,
     0x1.2730792c02f61p-85, 0x1.02b8691d5e6cbp-796, 0.0, 0.0, 0x1.2a9df6e9bbdep-828,
     0x1.81247bf7f6bacp-970, 0.0, 0x1.9493f67a49c5ap-736, 0.0, 0x1.26eeec01dcb88p-560,
     0.0, 0x1.6bb99d8c6f345p-213, 0x1.8dd932c6ae723p-674, 0x1.9cffb25925ce7p-779,
     0x1.5b9dc854429e4p-292, 0x1.a52adb3db5b9ap-166, 0.0, 0x1.4b2d01730c25bp-911, 0.0,
     0.0, 0.0, 0x1.9b13acc25016cp-382, 0x1.4cae49dc91b43p-672, 0.0,
     0x1.5b50a69fec269p-744, 0x1.9a0d3bb52669fp-25, 0.0, 0.0, 0.0,
     0x1.49603dcd1b4c6p-920, 0.0, 0.0, 0x1.8d97a4893f76bp-845, 0x1.272b38e688c81p-399,
     0x1.1f0ce4bc4ec25p-913, 0x1.36164e5f2bd21p-73, 0.0, 0x1.905f825ca791fp-418,
     0x1.a126896924f1p-699, 0x1.df4530a8b1f99p-940, 0x1.2ec6e2b1ebdd5p-315,
     0x1.2a97ccbd0c0c8p-336, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9831470d64685p-250, 0.0,
     0.0, 0x1.a1d02c2ef7f6ep-906, 0x1.c32a6d83c5d1ap-285, 0x1.45dc48c135074p-438, 0.0,
     0.0, 0x1.865c9dcaca26ap-133, 0x1.7fe896e88b10ep-764, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.65ccf6f35d92cp-623, 0x1.ea6c24c731922p-501, 0.0, 0.0,
     0x1.9de4d5ff4b5fap-802, 0.0, 0x1.828b705694632p-648, 0x1.6ac68fbf8a92ep-107, 0.0,
     0x1.c4018a2b9d5dfp-464, 0x1.e2cd5799329bfp-115, 0x1.a222dae6c981cp-972,
     0x1.33497a1e39512p-793, 0.0, 0.0, 0x1.73c7a0a66fd2cp-286, 0.0,
     0x1.61285a6822282p-656, 0x1.2e20f14f06e8cp-903, 0x1.754c473bb6b8p-389, 0.0,
     0x1.1d74ff1e83d4dp-832, 0.0, 0.0, 0x1.b2d95b26a5d46p-936, 0x1.87ae1915cf91fp-715,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bf8ee9c16095p-417, 0x1.bdca06b006db6p-639,
     0x1.4849e6c295dc4p-770, 0x1.2ad97f673eb58p-16, 0.0, 0.0, 0.0,
     0x1.08738dd52a74p-94, 0.0, 0x1.626a56e2a9259p-385, 0x1.83d290af3fe06p-768, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.90fcca34dc454p-923, 0.0, 0x1.93bad13496703p-393, 0.0,
     0x1.06dcc6835d23ep-17, 0x1.90972cdf922a7p-264, 0x1.e2566dee5c5c4p-860,
     0x1.814bdcd30582bp-562, 0.0, 0.0, 0x1.17a5914aa277cp-969, 0x1.edd51e5f96235p-329,
     0.0, 0x1.c07b6fdea71a3p-505, 0x1.3bb10acc8b77ap-703, 0x1.e8b7eeb191cdfp-945,
     0x1.77659ce040c85p-300, 0.0, 0.0, 0x1.08cfe3482117ep-22, 0x1.cd4a546e5b2a1p-255,
     0x1.58dd69ff14625p-136, 0.0, 0x1.d59999e0486e4p-318, 0.0, 0x1.8a66296e6077fp-577,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28d4a9fc5e2edp-211, 0.0, 0.0, 0.0,
     0x1.c62c5caf77f9cp-969, 0.0, 0x1.a77eac271fe96p-617, 0.0, 0.0,
     0x1.5e4707cc269a6p-707, 0x1.b7a1508720f3fp-594, 0x1.285cd7a03c9c3p-449,
     0x1.653d08432f6e4p-298, 0.0, 0x1.e1fe1b42ac8d4p-502, 0x1.590756d05556bp-797, 0.0,
     0x1.7797f24527afbp-333, 0x1.d7e8a3ce6c98ep-35, 0x1.15385cf82586p-997,
     0x1.794e6516849dfp-111, 0x1.68f7f7aa608dep-184, 0.0, 0x1.52db0ff83c452p-774, 0.0,
     0.0, 0x1.b46b2bb31c936p-908, 0.0, 0x1.a368782bddb8bp-952, 0x1.cee1a7360428cp-956,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fab2d487c3d3p-785, 0.0, 0x1.8c8ccebe6bd52p-344,
     0x1.0d1f8ba5b7fe1p-129, 0x1.e42a8f402a00ep-163, 0x1.6cf98f07a9a47p-529, 0.0, 0.0,
     0x1.61c27fe06665cp-848, 0.0, 0x1.b7eec020c270dp-322, 0x1.f15695629af35p-626,
     0x1.227c1d8ac22acp-877, 0.0, 0x1.0aeaa038ee75ap-959, 0x1.cf81d683e45dep-547,
     0x1.9037271f3496ap-767, 0.0, 0.0, 0.0, 0x1.d1c48e5cf5672p-688, 0.0, 0.0,
     0x1.82681e7a0f1b2p-360, 0x1.df78efe8324a8p-782, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.adb688e0a6daap-482, 0x1.e8218cc286fb4p-85, 0x1.5008b9e43728ep-206, 0.0,
     0x1.ec099cda7c2d4p-749, 0.0, 0x1.ce2914769d28cp-671, 0.0, 0.0, 0.0,
     0x1.91a5fa140674fp-556, 0x1.d0a107ee72898p-316, 0.0, 0.0, 0x1.99c904d1f5b5p-149,
     0.0, 0.0, 0x1.4c8ffe31fb90ep-995, 0.0, 0x1.1c591a1e1cc1ap-820,
     0x1.1be710d0fc737p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca1d9e765787p-957, 0.0,
     0.0, 0x1.3cac9f0f8b6b1p-36, 0.0, 0.0, 0x1.0d0baed94f3a7p-1016, 0.0, 0.0,
     0x1.289d5d81ac111p-42, 0.0, 0.0, 0x1.fbb1e43a6ee7cp-164, 0.0,
     0x1.e7b77ba89f801p-907, 0x1.c1b8aea9c68a3p-378, 0.0, 0x1.ce56fd4ca2e15p-1007,
     0x1.c05bdd487204ep-613, 0.0, 0x1.4d00d44445007p-36, 0.0, 0.0,
     0x1.dfe157bc72133p-1018, 0x1.579ae6a5575a5p-86, 0x1.6f651aded0072p-404, 0.0,
     0x1.3640d9aaf4f4cp-196, 0x1.7aeafc3b8b8b7p-166, 0.0, 0x1.ebc180719c689p-42,
     0x1.6ee2140d26639p-778, 0x1.66b28a47c31b1p-993, 0.0, 0.0, 0.0,
     0x1.9d5eba89bd313p-393, 0.0, 0x1.fa28a7ef295c5p-236, 0x1.ebad2b5c89085p-246, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4da788557a51bp-724, 0.0,
     0x1.f136062116c73p-630, 0.0, 0x1.6fbac3ee40f74p-241, 0.0, 0.0, 0.0,
     0x1.73b08c078baf2p-37, 0.0, 0.0, 0x1.9c8b6c3923232p-428, 0.0, 0.0, 0.0,
     0x1.6585c56a4ab75p-102, 0x1.168bae2aae767p-523, 0x1.689a4db53ee92p-492,
     0x1.03eac40cb61b1p-270, 0x1.17adc9fd27177p-278, 0.0, 0.0, 0x1.49ab6ab1145e1p-67,
     0.0, 0x1.9fad9159c9ee4p-197, 0.0, 0x1.967757bedfc07p-723, 0x1.5eb44fc6608b7p-162,
     0x1.a23b10dbf504ap-984, 0x1.dc3290a154a73p-60, 0x1.42dee820ff258p-489, 0.0,
     0x1.88f170794fa99p-635, 0.0, 0x1.5f56f0b14581ap-835, 0.0, 0.0,
     0x1.fde7c1162febcp-698, 0.0, 0.0, 0.0, 0x1.73264cb74f621p-121, 0.0, 0.0, 0.0,
     0x1.07060b85775eep-991, 0x1.9748f9008c5a7p-845, 0.0, 0x1.9da981d8d22f1p-323, 0.0,
     0x1.d560b7dd9a208p-94, 0.0, 0.0, 0.0, 0x1.d362fe385ec3fp-487, 0.0,
     0x1.905b67139b213p-389, 0x1.f3f9faad34aebp-437, 0x1.d4209c50e9349p-518, 0.0,
     0x1.6f12009deeca7p-687, 0.0, 0x1.ded0a4c0ed16p-169, 0.0, 0.0,
     0x1.30f361671fd8bp-337, 0.0, 0x1.406c596f63829p-834, 0.0, 0x1.64b55ad0c2567p-758,
     0.0, 0.0, 0.0, 0.0, 0x1.ae6eefc990a01p-318, 0.0, 0.0, 0x1.19de28756c1e1p-637,
     0.0, 0.0, 0x1.c3c8a8dea3bd6p-671, 0.0, 0x1.0bd8ae7b679ecp-676,
     0x1.2e4dc3c0bd5b9p-36, 0x1.71c8cdf567ab4p-957, 0.0, 0.0, 0.0,
     0x1.a9b7b19a37585p-354, 0x1.eb837b282a4b4p-627, 0.0, 0x1.4db21b43441a4p-595,
     0x1.a0821e01493a6p-430, 0.0, 0x1.9f7a27c82fa45p-270, 0.0, 0x1.2d809c67c71b2p-822,
     0x1.66bbce9970b99p-709, 0x1.3150a64c80aafp-664, 0.0, 0.0, 0x1.d17ab88ccf6p-129,
     0x1.002052395f2c4p-617, 0x1.4550e3a214b57p-661, 0x1.5287cb2839189p-204,
     0x1.eef29d6bbd72p-462, 0.0, 0x1.40ae443540eap-296, 0x1.c259db84dbb83p-219, 0.0,
     0.0, 0.0, 0x1.b140f323b9f5fp-67, 0.0, 0.0, 0x1.5ffea51f4a5c8p-532,
     0x1.f001ebe2911e2p-96, 0.0, 0x1.62d6771814aa1p-100, 0x1.6ad3179ff2b83p-578,
     0x1.d1bebdc5930edp-223, 0.0, 0x1.98cbe6db566d6p-865, 0.0, 0x1.8aa8a8fb14bccp-830,
     0x1.b090e0d3ef7b8p-481, 0.0, 0.0, 0x1.b2c6d0b782266p-269, 0.0,
     0x1.8079633eb05eap-791, 0x1.f847624387eb6p-266, 0.0, 0.0, 0.0, 0.0,
     0x1.8bd217abd176ep-414, 0x1.d3a2e170b0398p-721, 0x1.eb0c66aa23331p-524,
     0x1.94f6cefcbbc04p-774, 0.0, 0x1.9faaaea80908cp-190, 0.0, 0x1.77daa74076a1dp-579,
     0x1.a651e985632bep-899, 0.0, 0.0, 0x1.83b6d7f54f434p-219, 0.0, 0.0, 0.0,
     0x1.33c148158a627p-820, 0.0, 0.0, 0x1.348e8d1559877p-124, 0.0, 0.0, 0.0,
     0x1.c061046c89caap-613, 0x1.2f9601e380a61p-214, 0.0, 0x1.114d558d2bc26p-617, 0.0,
     0.0, 0x1.db702da0dc718p-716, 0x1.8a7356022a15fp-605, 0.0, 0.0,
     0x1.2281f3bdcb6f6p-824, 0.0, 0.0, 0x1.d5ec4279136f8p-544, 0.0,
     0x1.85de35e8710e1p-786, 0x1.f7712e1eff503p-99, 0x1.98ffc1bdbc26ep-966,
     0x1.975cb2a3a522bp-160, 0x1.6e023607ec5afp-693, 0x1.72a7f4f0f0dffp-999,
     0x1.3d2698baf8581p-946, 0x1.edea524406325p-251, 0.0, 0.0, 0x1.b66dee736e03ep-304,
     0x1.10e12e4ea697bp-739, 0.0, 0.0, 0x1.65e315eb3b2edp-983, 0x1.3f0bddbc9593fp-467,
     0.0, 0.0, 0x1.bf2f410f06859p-726, 0.0, 0x1.db25bac00bf81p-168,
     0x1.e2c424373ff1fp-864, 0x1.fe16e42c447fap-409, 0x1.5dffbe4987f4ap-622, 0.0, 0.0,
     0x1.a68d7cc5e807ap-1002, 0x1.2c4078c06abc1p-759, 0.0, 0.0, 0.0,
     0x1.cab7d29a18e9fp-270, 0x1.962c4964c7e0cp-406, 0.0, 0.0, 0.0,
     0x1.9d327ae48e503p-205, 0x1.dedc733a87696p-276, 0x1.6dcfb06d1c09p-427,
     0x1.a81683dc4ecc9p-633, 0.0, 0.0, 0x1.5325555cecc1fp-943,
     0x1.3fe62537fed7fp-1021, 0x1.8a1ae07cf4a1fp-548, 0x1.aae1497f1785bp-348, 0.0,
     0x1.8e6740caecc0fp-206, 0x1.2ba79b7324649p-662, 0.0, 0.0, 0.0,
     0x1.3424a0663f13bp-610, 0x1.ea876c8dcec98p-69, 0x1.7093e0204627dp-761, 0.0,
     0x1.89c5356b381a6p-983, 0.0, 0.0, 0x1.f6344974f3d5ep-47, 0.0,
     0x1.57bd1d5e82a8dp-950, 0.0, 0.0, 0.0, 0.0, 0x1.6261398f52a8ep-958,
     0x1.eebcf9921f3c2p-152, 0x1.cdb3ff4af3ba8p-219, 0x1.d7ffc7edb7d71p-931,
     0x1.a13ac07c7629p-238, 0.0, 0x1.477ac7e0ce95p-584, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88abf77a8fb8ep-451, 0.0, 0.0, 0x1.356811e51d39ap-346, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.995a051933f94p-387, 0x1.b61d1b7e3cebap-385,
     0x1.6611f215754ccp-590, 0.0, 0.0, 0.0, 0x1.4c9c93ba27ffcp-69, 0.0, 0x1p0, 0.0,
     0x1.a9cf1c26b9005p-3, 0x1.3746ab471b06p-897, 0x1.e2be97954631fp-789, 0.0, 0.0,
     0.0, 0x1.f3f5b11af1a56p-1017, 0.0, 0.0, 0x1.181d49adcd015p-650, 0.0,
     0x1.1611d71452707p-907, 0x1.0f41d4363ea1dp-972, 0x1.546b67a190f8bp-790,
     0x1.8a75aab818a7dp-907, 0x1.e48927fcae18dp-850, 0.0, 0.0, 0x1.e2a481fb359c8p-730,
     0x1.eb0d0b3fa4b32p-435, 0x1.b8049fbf67b7ap-708, 0.0, 0.0, 0.0,
     0x1.f641a8c678e7ap-263, 0x1.d7cabf54dbb5fp-292, 0.0, 0.0, 0.0,
     0x1.5e21f9551e45ap-71, 0x1.de63826d2f68ap-117, 0.0, 0x1.cf8c2111f26f3p-208, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_finz_fabsd1_purecfma(tmp0);
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
    printf("Sleef_finz_fabsd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_fabsd1_purecfma bench acc %la\n", global_bench_acc);
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
