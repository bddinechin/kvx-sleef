/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid1_u05purecfma.c --function \
 *     Sleef_finz_sincospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1ec9ab2c889ap-837, 0.0, 0.0, 0.0,
     0x1.3ce2622f6987dp-316, 0.0, 0.0, 0x1.4beabc54742f4p-23, 0x1.a6aea7e90b396p-606,
     0.0, 0.0, 0x1.e4c0b00511d9cp-51, 0x1.5b8f4f19b83bfp-457, 0.0,
     0x1.76de525114d56p-780, 0x1.175ba4927163dp-711, 0.0, 0x1.ce0d837998f78p-127,
     0x1.cc27da06b856p-500, 0x1.f9e5e16f3b06bp-284, 0.0, 0.0, 0.0,
     0x1.6942ca2de43fbp-659, 0.0, 0x1.16511200e539cp-221, 0x1.5234521755477p-689, 0.0,
     0x1.ceb4b1a28ecefp-878, 0.0, 0x1.fa43e82b569c7p-643, 0.0, 0x1.36c260cac1604p-639,
     0.0, 0.0, 0x1.d9cd14257877cp-169, 0x1.db0cfb3a87239p-508, 0x1.725927106903ep-374,
     0x1.8482288bab27fp-395, 0x1.8dd9d181a6ddcp-877, 0x1.ac610658c2afcp-24, 0.0, 0.0,
     0.0, 0.0, 0x1.514a0625bccc5p-1020, 0.0, 0x1.426ecb1b7943ep-59,
     0x1.9b211ad22dd62p-633, 0.0, 0x1.234ce8da07e8dp-676, 0.0, 0.0, 0.0,
     0x1.09c17c3c8ca4fp-365, 0.0, 0x1.724fbb6735685p-419, 0x1.7337a461bf75fp-137, 0.0,
     0x1.1b1796db23758p-611, 0x1.7c7eefa4794ccp-154, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba43b9ea9213ep-81, 0x1.3100e89acac3ap-910, 0x1.b883d66aac4b7p-76,
     0x1.1545bd1233336p-992, 0x1.04ca3e996a836p-584, 0.0, 0x1.9fc59b0d434fep-23, 0.0,
     0x1.23f61d8421386p-803, 0.0, 0x1.3555c6e3b7d33p-127, 0.0, 0x1.55ef19f88841ap-655,
     0x1.5a79e967ac151p-136, 0x1.2fe7ac26bf656p-464, 0x1.fb073c59144f2p-426,
     0x1.add2e1a1eba48p-431, 0x1.b716694d15ffdp-1005, 0x1.592c322134fd5p-100,
     0x1.b3e71f2bfd634p-1015, 0x1.3c26705eb29f7p-271, 0x1.48e6f1ce41c55p-42,
     0x1.f95ca1d414103p-928, 0.0, 0x1.6b4eb39605912p-15, 0.0, 0.0, 0.0, 0.0,
     0x1.2e75f4144dca8p-658, 0.0, 0.0, 0x1.c32d744e3f75dp-137, 0x1.5bd375c3aea0fp-195,
     0.0, 0.0, 0x1.ee1a27192ac11p-206, 0x1.574cf43f6f426p-751, 0.0, 0.0,
     0x1.e108711ee7b5dp-233, 0x1.b9d5a7ffc734dp-659, 0.0, 0.0, 0x1.9d254c61c0c99p-475,
     0x1.084637d9f5ebap-922, 0.0, 0.0, 0.0, 0.0, 0x1.68534266bb8e1p-924, 0.0, 0.0,
     0.0, 0x1.e235b9c88e868p-1001, 0x1.97eedf47f23ep-225, 0.0, 0x1.07b52e969c13dp-918,
     0x1.8c89475cc5a22p-522, 0.0, 0.0, 0.0, 0.0, 0x1.bafbae140c18ep-808, 0.0,
     0x1.44e7360a75f8dp-883, 0.0, 0.0, 0.0, 0x1.67a7f838d48b3p-177, 0.0, 0.0, 0.0,
     0.0, 0x1.0e481f169f1a3p-313, 0.0, 0x1.0941eaefa86b2p-17, 0.0,
     0x1.ce2d3dfcd3c58p-899, 0.0, 0x1.84c4fe2e32548p-103, 0.0, 0x1.457704459796ap-16,
     0.0, 0x1.ad362305a844p-428, 0x1.57b143820800bp-841, 0.0, 0.0, 0.0,
     0x1.8d505e6b169bbp-172, 0x1.934d95466b3ebp-70, 0.0, 0x1.771983791a9e2p-669,
     0x1.f3c803e536e8cp-269, 0x1.03b7e04fbb27cp-546, 0x1.d17dae9ce1d23p-127, 0.0, 0.0,
     0.0, 0x1.85f773e286917p-718, 0.0, 0x1.b1c52d7317bddp-653, 0.0, 0.0,
     0x1.341d08a3f2cefp-882, 0.0, 0x1.46d60e00dc551p-982, 0x1.27810636c5427p-770, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d3a25d0db8908p-891, 0.0, 0.0, 0x1.a2b02f82ca412p-304,
     0.0, 0x1.99a4089bf066p-726, 0.0, 0.0, 0.0, 0x1.14de2fe1dbc85p-38, 0.0, 0.0, 0.0,
     0.0, 0x1.98679baa06adbp-1009, 0.0, 0.0, 0x1.c05d8fd4619b7p-717, 0.0,
     0x1.76f0130015dedp-652, 0x1.8e1b234ea8659p-204, 0x1.bbc1a411deaefp-4, 0.0, 0.0,
     0x1.698d02745b0dcp-44, 0.0, 0x1.f67e5e1331e34p-237, 0x1.5095aa629e3ffp-32,
     0x1.78d418c4c649dp-125, 0x1.a9a3875bac5a6p-879, 0.0, 0x1.67ed990d3f624p-3,
     0x1.eeee54129668p-662, 0.0, 0.0, 0x1.11084761aa3f5p-196, 0x1.bf43df6d93222p-811,
     0x1.63eea57ab2e06p-238, 0.0, 0x1.81d0b37760ddcp-923, 0x1.cb246c7d20661p-456, 0.0,
     0x1.6f8068d890223p-967, 0x1.c87ec292b5bf8p-152, 0x1.8c63f52ea4455p-788, 0.0,
     0x1.74e69d1dca0dfp-14, 0x1.b21aa9f3c9a47p-256, 0.0, 0x1.c6f66546b2be4p-666,
     0x1.805d065f0b75cp-569, 0x1.2ef4a1ac4c642p-98, 0x1.ed0887eb7bcdep-528,
     0x1.e48a8792e2cafp-7, 0.0, 0x1.2ea3aeb346abap-428, 0x1.6d5e7511245eep-543,
     0x1.fc8ee34e9e045p-300, 0.0, 0.0, 0.0, 0.0, 0x1.a2a3a4547af37p-743, 0.0, 0.0,
     0x1.eb89894570893p-811, 0.0, 0.0, 0.0, 0x1.b0f27803af32bp-80, 0.0, 0.0,
     0x1.3eb264ee5cf72p-843, 0x1.39add079ae756p-496, 0.0, 0x1.263f95e68b5bep-474, 0.0,
     0.0, 0x1.889f1d08d1668p-222, 0x1.b936d3df28018p-586, 0x1.6f865dbe3ef22p-923, 0.0,
     0x1.9e2b02133174dp-591, 0x1.627d09c519cb4p-745, 0.0, 0x1.8134472c0b85bp-556,
     0x1.096f0364a6713p-425, 0x1.937b297a4fef1p-535, 0x1.d305a5e96e068p-856,
     0x1.eae515a0a4ed1p-601, 0x1.1f79e4ba0185bp-55, 0.0, 0.0, 0x1.4d0a182d517efp-958,
     0.0, 0x1.790e0f48ffc57p-784, 0x1.ca659ec188235p-391, 0x1.ff66f13383781p-13, 0.0,
     0.0, 0x1.f7464d618dcc4p-723, 0x1.8536ebcb1192fp-251, 0x1.3daee521a688bp-754,
     0x1.341b911553541p-902, 0x1.71b3db4dacba3p-593, 0.0, 0.0, 0.0,
     0x1.6ad33cf67d602p-761, 0.0, 0.0, 0x1.c5829a3bbab48p-828, 0.0,
     0x1.facd1c76d4c43p-333, 0.0, 0.0, 0x1.c413ce485f753p-669, 0x1.26fb420b97ea7p-657,
     0.0, 0.0, 0x1.a9a930a22a26dp-190, 0x1.534891f0a0dccp-305, 0.0, 0.0,
     0x1.5f55cc07f97e9p-170, 0x1.95b448247e9fep-385, 0x1.89c941648e97bp-399, 0.0,
     0x1.5431b02bba8d8p-624, 0x1.12f6cc0f58ba8p-807, 0x1.70f55da2001e3p-487, 0.0,
     0x1.b7a533b4ef6a1p-228, 0x1.7077c35878d01p-746, 0x1.ce3a1fbace34dp-945,
     0x1.1e0c1bdd9afd2p-203, 0x1.27f84866e4447p-874, 0.0, 0x1.b150b0b13817cp-62, 0.0,
     0x1.c00cb8b21eb2ap-276, 0.0, 0.0, 0.0, 0.0, 0x1.4528067b5cc17p-122,
     0x1.20b37fb511236p-760, 0x1.e53ac10c59bf6p-493, 0x1.d2f8d1e861a07p-458, 0.0,
     0x1.21f8d366662a8p-446, 0x1.2f1dbe0cda864p-127, 0x1.b0c27752ad8a1p-23, 0.0, 0.0,
     0x1.6a1cddd23d283p-933, 0.0, 0x1.5bdaf61cb5a9p-783, 0.0, 0x1.f327f1b3526e1p-999,
     0.0, 0x1.87388a7fbab79p-597, 0x1.2e0eb4a645913p-124, 0x1.879269d0eba15p-881, 0.0,
     0x1.b78bd2b649518p-772, 0x1.997703ae7b402p-306, 0.0, 0.0, 0.0,
     0x1.17ae12f03c51fp-698, 0.0, 0.0, 0.0, 0x1.af479785a08e8p-528,
     0x1.4c776f5a99b7cp-948, 0x1.6552d95367d3cp-979, 0x1.a956b38523975p-462,
     0x1.c263d1948978fp-456, 0x1.5cc8f78f865f7p-501, 0x1.f6b1cf12b302p-655, 0.0, 0.0,
     0x1.e56cc4336afc7p-63, 0.0, 0.0, 0x1.f87da23015cb7p-845, 0x1.a98448aee19f1p-323,
     0x1.50b4a5bfb35d8p-634, 0x1.f5d3369d62095p-794, 0.0, 0x1.72a756779ea79p-983,
     0x1.fdf26a968ca5dp-174, 0x1.e64a150d5b15dp-679, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f3a8fadf9db6dp-959, 0x1.172767ff13bd9p-580, 0.0, 0x1.2fb7cb4cbdec5p-471, 0.0,
     0x1.826b26d299db7p-138, 0.0, 0.0, 0x1.29139043ef61ep-466, 0.0,
     0x1.9bfde06be09d6p-523, 0x1.2676e4e003612p-490, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.424f51f63a09dp-51, 0x1.08bc6afa0774cp-474, 0.0, 0.0, 0x1.3240d8032c56bp-295,
     0.0, 0.0, 0x1.59c5fa21b579dp-396, 0x1.890ca21b13251p-347, 0x1.a6b41e234e897p-804,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c79ab00f33885p-366, 0.0,
     0x1.581f2cef91773p-186, 0x1.efd5c852197d9p-404, 0.0, 0.0, 0.0,
     0x1.93b0d3982a4e7p-582, 0.0, 0x1.b7922f162a533p-328, 0x1.2d1ee9f4e3ee7p-322, 0.0,
     0.0, 0.0, 0x1.b4c18cb4c7516p-546, 0.0, 0.0, 0x1.2c4e75f9dcd3dp-382,
     0x1.7fb69f3916f85p-673, 0x1.41e9dc7439bfep-704, 0x1.1b9fc6db2938cp-355,
     0x1.ff6f280b19b9p-406, 0x1.453e870e1d6e1p-463, 0.0, 0.0, 0.0, 0.0,
     0x1.bfe1e7da07d2cp-752, 0x1.00954247d2717p-105, 0x1.6883fd1a9f5a7p-404, 0.0, 0.0,
     0x1.4e9a0f3b56672p-290, 0x1.00440466a99cp-541, 0x1.670b717938db1p-205,
     0x1.a34c50fcc2b71p-904, 0x1.065b7e7e84fc7p-883, 0x1.9483f6ce07236p-6,
     0x1.e18408ea8101dp-508, 0x1.e248d1864d46fp-483, 0.0, 0x1.4dc3a438e0a94p-400,
     0x1.28b71ffea0121p-611, 0.0, 0x1.e0bd5e30e33c5p-419, 0x1.a022b70935bcdp-14,
     0x1.b8bdacfcf3c4dp-296, 0.0, 0x1.35fde2ec53cfp-190, 0.0, 0.0, 0.0,
     0x1.d63d3c60fe15bp-446, 0.0, 0.0, 0x1.9bb43be84000fp-399, 0.0, 0.0, 0.0,
     0x1.54cb49e0ba441p-268, 0x1.14d0f08e98137p-182, 0x1.54e7ed3b67deep-215, 0.0,
     0x1.65d5f403d5c0cp-252, 0.0, 0.0, 0.0, 0x1.bbf5348b1f8e8p-334,
     0x1.2809b72f3b048p-329, 0.0, 0x1.1a6bdc5b37d43p-388, 0x1.f7e24467bb681p-123, 0.0,
     0.0, 0.0, 0x1.2f476a437ba4ep-137, 0.0, 0.0, 0x1.6977206ffa5c2p-59,
     0x1.e622b1565ca84p-396, 0x1.5c50134c32fbcp-686, 0.0, 0.0, 0x1.3fe47f5afadf6p-707,
     0.0, 0.0, 0.0, 0.0, 0x1.bf78b52b02f1ep-872, 0x1.0fc4eb2edc3e7p-244,
     0x1.9e7a0fc2eb7cp-329, 0x1.30b5067f46c6cp-1012, 0x1.27bc765207607p-1019, 0.0,
     0x1.4ce685936e512p-854, 0x1.e54bfe1bc4b85p-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e357fbe691e48p-1017, 0x1.d2ef07276378dp-113, 0x1p0, 0.0,
     0x1.2fe0ae4e7f9ebp-933, 0.0, 0x1.17df0799f6d9bp-988, 0.0, 0.0,
     0x1.3dd31e289b6f7p-609, 0x1.c0d6100687ae2p-424, 0x1.36552e3f5a4ap-375, 0.0, 0.0,
     0x1.2d421c0e53894p-574, 0x1.b9bd4cbbae0e8p-756, 0.0, 0.0, 0.0,
     0x1.258a8b5d50959p-284, 0x1.1b7bcebe2dap-684, 0.0, 0.0, 0x1.5cb83c8f727a4p-597,
     0.0, 0.0, 0x1.4b2f88a81c67ep-582, 0x1.e77966dd4dd8fp-297, 0.0,
     0x1.a7eb52a18ff6ap-909, 0.0, 0x1.6268becbf57cp-84, 0x1.9feb6e23d837dp-890,
     0x1.1835645a24702p-686, 0.0, 0.0, 0.0, 0x1.9224ee13ddec9p-787, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3946ff254deeep-224, 0.0, 0x1.6eb5a335b136p-592,
     0x1.f53e9798c1c33p-1013, 0x1.972a2af94a4f1p-348, 0.0, 0.0,
     0x1.a8326cb112a88p-801, 0.0, 0x1.9831ce7fe0ecfp-195, 0x1.6d47c978f0c5fp-923,
     0x1.f076f2d0ea2a4p-340, 0x1.27aa542787772p-591, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6762d4f1c363bp-913, 0x1.1321d5549e741p-809, 0x1.f27a01f6c83dfp-432,
     0x1.01805630a7314p-922, 0x1.3e5e10e54fd0bp-466, 0.0, 0.0, 0x1.650c6e8ba3b34p-362,
     0x1.3f8277742b5d2p-379, 0x1.8659e0a0eb3dcp-803, 0x1.840676775c536p-382,
     0x1.3058f5951eb14p-184, 0x1.552406932c2c7p-476, 0x1.7d9fdd15ee367p-193, 0.0,
     0x1.6e527adad8259p-852, 0x1.539e55d2febbap-585, 0.0, 0x1.dbcb05f821baap-9,
     0x1.e2f5584cbe8bcp-166, 0x1.ce9bb55adfb65p-668, 0x1.9c9398d830367p-587,
     0x1.9b9daecdd5a27p-555, 0x1.a6a33400a67a9p-233, 0x1.2d12db1d63705p-584,
     0x1.8ff83bbce980bp-936, 0x1.055466f5b9f5ep-803, 0.0, 0.0, 0.0, 0.0,
     0x1.017330ce9cc32p-183, 0.0, 0.0, 0x1.2279a3328e303p-569, 0.0,
     0x1.3f63d82cdfdfap-952, 0x1.8c5e36b2276c2p-859, 0x1.223996af3fe0cp-1001,
     0x1.1be5514119f7dp-764, 0x1.86ecd7f9f404p-112, 0.0, 0.0, 0x1.3232332dbfff6p-97,
     0x1.e17d9c3b7cbaep-869, 0.0, 0.0, 0.0, 0x1.5b5f614b1a0e2p-500, 0.0, 0.0, 0.0,
     0x1.13883a4bf984fp-176, 0.0, 0x1.8ba3ed004709ep-852, 0x1.87789617cd02bp-476, 0.0,
     0.0, 0x1.82246a37bb61dp-638, 0x1.3c2f5379d9dd1p-746, 0x1.d2af7e2ed284ap-772,
     0x1.9b5c85593534dp-576, 0x1.141c4779d831bp-814, 0x1.e0a49b717d0c7p-662,
     0x1.4a9a9dfbd0dcap-772, 0x1.7687956cfdb1fp-474, 0x1.6967b07c2e362p-178, 0.0,
     0x1.eed9b2503f636p-529, 0x1.07fbd451feb17p-339, 0x1.4c4cce85373p-493,
     0x1.294cd73833e29p-107, 0.0, 0.0, 0x1.041b94ca98ffcp-724, 0.0,
     0x1.56723fd3768a9p-565, 0x1.a2800516675dep-938, 0.0, 0x1.4a76a81cb44b3p-771, 0.0,
     0x1.8d3ed7be89707p-583, 0.0, 0.0, 0x1.4709105a62ef2p-135, 0.0, 0.0,
     0x1.9e923d2042d2cp-158, 0x1.5a8a71da23dcp-327, 0.0, 0x1.9b03435331ab5p-838,
     0x1.ecbc0764f662fp-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6efb3f5a77f6ap-1009,
     0x1.95228dff5907fp-493, 0x1.80f3de9dc8edbp-276, 0.0, 0x1.0539e2989ec7ap-456, 0.0,
     0.0, 0x1.e7c65581db477p-154, 0x1.0cc99229f9b6p-171, 0.0, 0.0,
     0x1.2d2f44936d386p-718, 0x1.551a30b3eb7ffp-803, 0x1.2ba1a70620b9dp-701,
     0x1.25a2158a8d4cp-179, 0x1.69658141cc4a7p-259, 0.0, 0x1.fbb3aeec7183cp-976, 0.0,
     0x1.01a212c3841f9p-364, 0.0, 0x1.c5d4195bd06d8p-99, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.76936a857df6ep-49, 0x1.a4f7702b6e665p-155, 0.0, 0.0, 0x1.1c19e562745a7p-924,
     0x1.ca93c0d48d61p-470, 0.0, 0x1.a8026072c6cf2p-656, 0.0, 0x1.0b8ecdab581fep-695,
     0.0, 0.0, 0x1.6bbcf2812be89p-245, 0x1.a92b7372d2b92p-542, 0x1.de128805b9cd5p-276,
     0.0, 0.0, 0x1.c725a30ffa492p-344, 0x1.d2b785e392b53p-72, 0.0, 0.0,
     0x1.094299ab97d96p-286, 0x1.adb53e69d12e8p-12, 0.0, 0x1.02cefaa8b54bfp-63,
     0x1.8218cb89ae587p-212, 0.0, 0.0, 0.0, 0.0, 0x1.0b2a4873e677dp-214,
     0x1.e1c894b8cdbafp-702, 0x1.8177fadb6cff8p-403, 0x1.3888ecd53de5bp-353, 0.0,
     0x1.6279f7d8b2e44p-47, 0.0, 0.0, 0x1.58ad5f0fd26abp-779, 0.0, 0.0, 0.0,
     0x1.e64c3199770a9p-984, 0x1.885e19d6885aep-14, 0.0, 0.0, 0x1.29790c48c606cp-89,
     0.0, 0.0, 0x1.7dc603675cb69p-982, 0.0, 0.0, 0.0, 0x1.8b4368e019ec5p-769, 0.0,
     0x1.f36e9daa3166fp-930, 0x1.9879dcc5d2d54p-907, 0.0, 0.0, 0x1.214f38ce60dcap-906,
     0.0, 0x1.0d879a72c7e1ap-355, 0.0, 0.0, 0.0, 0x1.84bb4f957bdaep-387,
     0x1.f2b2d067a1c3bp-899, 0x1.ad6e2140499b6p-424, 0x1.168598a1cc702p-236, 0.0,
     0x1.166db96464d51p-246, 0.0, 0.0, 0x1.af83976c561p-691, 0.0,
     0x1.29a51b8092cb1p-111, 0.0, 0x1.62e80dd0e6fccp-473, 0.0, 0x1.209fbc5cf812p-779,
     0.0, 0.0, 0.0, 0.0, 0x1.6959f5106d144p-1001, 0x1.3c300630582f7p-835, 0.0,
     0x1.436ca58ce16b8p-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4e30d89b4fa4ap-714,
     0.0, 0x1.ff2e3714e993dp-707, 0x1.d0450cb09001dp-343, 0x1.9d98ba6835be8p-355,
     0x1.c3286a4600b8ap-724, 0x1.5480bf7ed180bp-124, 0x1.9a70e05202e23p-701,
     0x1.5b8f67d4c0869p-524, 0x1.9908f214bc82p-132, 0.0, 0.0, 0.0, 0.0,
     0x1.77fdf2955db06p-169, 0x1.a60043c275445p-945, 0.0, 0x1.7aa27e3369113p-491,
     0x1.e3b6703f52f32p-484, 0x1.3dd73dfcbdb0bp-930, 0.0, 0x1.4b5efc04271b6p-968, 0.0,
     0.0, 0x1.8a6c9bad4fd4dp-611, 0.0, 0x1.d20282786ba8ep-203, 0x1.f5f527ac2d7d9p-730,
     0.0, 0.0, 0.0, 0x1.36f2f9af01339p-156, 0x1.debd6fcd465d5p-642, 0.0, 0.0,
     0x1.c5515cf1e717ap-283, 0x1.24c45489e146fp-641, 0x1.7a7b04c774bc7p-138,
     0x1.87703672b9264p-898, 0.0, 0x1.ea6edd6da77eep-646, 0.0, 0.0, 0.0,
     0x1.e6d6254c4ecfep-482, 0.0, 0x1.f9f0b89e7e775p-552, 0.0, 0x1.aa93752c48cfbp-112,
     0.0, 0.0, 0x1.de0f7b891db06p-478, 0.0, 0.0, 0.0, 0.0, 0x1.742e195aaaf2dp-714,
     0.0, 0.0, 0x1.e68fdd2840404p-534, 0.0, 0.0, 0.0, 0.0, 0x1.7d03695577fd9p-605,
     0.0, 0.0, 0.0, 0.0, 0x1.ad83473567d23p-745, 0x1.64e18bad1cb7ap-106,
     0x1.5235a90b070e8p-955, 0.0, 0x1.856af67ea61b4p-820, 0.0, 0.0, 0.0,
     0x1.f10ff33ceae26p-1000, 0x1.e02617c95ca01p-169, 0.0, 0x1.8e2fb98c3ad7cp-448,
     0x1.b1f9f7a5357ap-805, 0.0, 0.0, 0.0, 0x1.4f20012332ce2p-336,
     0x1.d3f8428a97bd9p-254, 0.0, 0.0, 0x1.f0a7fc45408f2p-754, 0.0, 0.0,
     0x1.56d15a42ba093p-891, 0x1.ea02c9d030071p-927, 0x1.9ccc4c556f808p-412, 0.0,
     0x1.70a993456459ap-207, 0x1.3d18572fbfdd9p-739, 0x1.94feb3423aeb4p-115,
     0x1.8535d53a2dae2p-484, 0.0, 0x1.a0f011ac9a1c4p-488, 0x1.f0813afb9f879p-492,
     0x1.93bb265b2c9fdp-283, 0.0, 0x1.6f48a762076d9p-776, 0x1.4b9bda856a517p-208,
     0x1.344f10e4e868dp-731, 0x1.a0d78eeec8a72p-803, 0x1.28250aa43cbf7p-546,
     0x1.4b1e442eadbccp-487, 0x1.93f0781d13622p-39, 0x1.ce4eae11af9b9p-936, 0.0,
     0x1.74791c23c5ed3p-643, 0.0, 0x1.6ac03fca67fc8p-209, 0.0, 0x1.50977c214166bp-62,
     0.0, 0x1.469999e4691ep-664, 0.0, 0.0, 0.0, 0x1.9bcbbc1f5d46dp-753, 0.0,
     0x1.8d7f82410c7ap-763, 0x1.c4c9ad10243fap-421, 0x1.d10e75c990a66p-799, 0.0, 0.0,
     0.0, 0x1.5e8377c1f2782p-443, 0.0, 0.0, 0.0, 0x1.b973752526325p-134, 0.0, 0.0,
     0x1.0ad051e868f21p-113, 0.0, 0x1.e61e67e4492adp-1021, 0.0,
     0x1.63466b6209b61p-651, 0.0, 0.0, 0.0, 0.0, 0x1.676c3713dfc97p-479,
     0x1.7c94d20d76bb2p-835, 0x1.98bccdc7dca6ap-788, 0x1.c52ef511993b8p-862, 0.0, 0.0,
     0.0, 0x1.0d13f8b1a78ep-159, 0.0, 0x1.3ab004c7540adp-845, 0.0, 0.0, 0.0,
     0x1.2dd225766ed44p-17, 0.0, 0.0, 0x1.4d49ef7467cf4p-941, 0x1.a5fe93693b015p-690,
     0.0, 0x1.4e2f618962e01p-638, 0.0, 0.0, 0x1.71d433848cae3p-54,
     0x1.a18475b8b2aacp-290, 0x1.7d5f60ead0ca5p-453, 0.0, 0x1.0e7c55206c1a3p-321,
     0x1.c877d35e48e56p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.affa451c49bf5p-731,
     0x1.f3997305adfb8p-749, 0.0, 0.0, 0.0, 0.0, 0x1.9a5efe04f28a9p-222, 0.0,
     0x1.69584682eebb7p-67, 0x1.fe5b223f7291fp-706, 0x1.ceb10cce707a4p-946,
     0x1.756e9c3130d18p-722, 0x1.e7397002612afp-43, 0.0
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
            tmp1 = Sleef_finz_sincospid1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sincospid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospid1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
