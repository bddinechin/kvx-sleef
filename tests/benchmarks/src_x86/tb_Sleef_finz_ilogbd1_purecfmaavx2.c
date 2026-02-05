/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ilogbd1_purecfma.c --function \
 *     Sleef_finz_ilogbd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.757b0b534ff0ep-930, 0.0, 0.0, 0.0, 0x1.c506a8139157p-736,
     0x1.1e1f31b89b5ebp-896, 0x1.ddda4469a6e81p-297, 0x1.54df09e9998e3p-76,
     0x1.12d213893ef2fp-895, 0.0, 0.0, 0.0, 0x1.72c50fbd140fap-469,
     0x1.995f2fd606effp-309, 0x1.456f095e6be3p-515, 0x1.83ebe28da98adp-1,
     0x1.a07786167fe5fp-666, 0.0, 0.0, 0x1.ba33186ecaf6fp-219, 0x1.60df339541f7fp-619,
     0.0, 0x1.234f392e7b77ep-374, 0x1.6ae156aaa3109p-937, 0.0, 0x1.36e7dfbe1b293p-289,
     0.0, 0.0, 0.0, 0x1.7dc5b0c002eedp-211, 0x1.e9b02579ba24dp-269, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b4c2c9aa3d903p-679, 0.0, 0.0, 0.0, 0x1.6b156ee661abap-624,
     0x1.d81a2a9f50e7cp-738, 0x1.47fcff0d835dfp-345, 0x1.9513de0ed4371p-663,
     0x1.213aee027e9e1p-166, 0.0, 0x1.867b0e7f0a756p-726, 0.0, 0.0, 0.0,
     0x1.60633814ca8b4p-299, 0.0, 0.0, 0.0, 0x1.bf896b6182ecap-112,
     0x1.24c8d6e8abb76p-364, 0.0, 0x1.c515ea31b1af4p-7, 0x1.1b13ff9e83dfp-904, 0.0,
     0.0, 0x1.a9ee8555c448cp-763, 0x1.effd237df6f72p-898, 0x1.c567ecffea646p-113, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8ac35172c049p-679, 0x1.25f833b630e47p-514, 0.0,
     0x1.73a96ae684491p-759, 0.0, 0x1.03ec5b6f0d09cp-783, 0.0, 0x1.8937f7bf3a2acp-171,
     0x1.841fe4aa7c9a3p-696, 0x1.25a4532efb1fep-634, 0.0, 0.0, 0x1.fb76706badddep-670,
     0x1.f24cb9c8a8267p-542, 0.0, 0.0, 0x1.65199f39cd386p-103, 0.0, 0.0,
     0x1.2b0dba2b1d6dcp-427, 0.0, 0.0, 0.0, 0x1.fd0e4c15930e4p-698, 0.0,
     0x1.24458a0db24f6p-818, 0x1.8c74461012f7ep-654, 0.0, 0x1.8de1e6bfd2d27p-69,
     0x1.c1cc08dca877dp-695, 0.0, 0.0, 0.0, 0x1.0d45b308118c7p-932,
     0x1.9ed8470441051p-841, 0.0, 0.0, 0x1.ec0ec64b44a59p-912, 0.0, 0.0,
     0x1.e65723657d843p-16, 0.0, 0.0, 0.0, 0x1.13d0e5e90acd6p-648, 0.0, 0.0, 0.0,
     0x1.8cdad233f47bep-258, 0x1.0193288a9f8e4p-824, 0x1.9dfc74bd1d413p-837, 0.0,
     0x1.d9fb3b88d6c3ap-296, 0x1.f16eb1e4100dp-677, 0.0, 0.0, 0.0, 0.0,
     0x1.2211ba7a1f743p-795, 0.0, 0.0, 0x1.db6fae4192066p-763, 0.0,
     0x1.8b1037bbd897bp-197, 0x1.90e5ba5355be3p-963, 0x1.d6668ca9abab6p-74,
     0x1.3fc87ebbc2691p-1020, 0.0, 0.0, 0x1.d5c2a5a4e6d52p-1019, 0.0,
     0x1.aaf08e1ae06b1p-373, 0.0, 0x1.ca156759befa7p-802, 0x1.3ecd29fc37375p-719, 0.0,
     0x1.2dffeb125a168p-362, 0.0, 0.0, 0.0, 0x1.e092f494c1b61p-122, 0.0,
     0x1.522e136e0ba86p-460, 0.0, 0x1.d4a0547cbaea4p-553, 0.0, 0x1.db02f52d64778p-137,
     0x1.11f0eed4df6a5p-306, 0.0, 0x1.3468149e5a931p-218, 0x1.d8e933f1dd12fp-688, 0.0,
     0.0, 0.0, 0.0, 0x1.5f6985050a7d9p-771, 0.0, 0x1.474c50bd23861p-436, 0.0,
     0x1.daf80c1ff9c39p-868, 0.0, 0x1.101e593c3de2ep-264, 0x1.a087a17441d8ep-680, 0.0,
     0.0, 0x1.eec60f56c42dap-735, 0x1.f76c4859911c6p-744, 0x1.7890336dfc5ep-14, 0.0,
     0x1.a12d8415918a3p-226, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.075dcdb1eca71p-218, 0x1.a30cce6c63454p-312, 0x1.83410b4fd8397p-971,
     0x1.4714d4920d7a4p-256, 0.0, 0.0, 0x1.8054ab1fe815fp-238, 0.0,
     0x1.a22bbe05e2458p-893, 0x1.c937b03d0db6cp-781, 0.0, 0.0,
     0x1.17d78bb5ba4cbp-1011, 0x1.523ecb4ad6edfp-505, 0.0, 0x1.4c007f35a0d14p-43, 0.0,
     0x1.134f5d48fc688p-82, 0.0, 0x1.e1eaa68680b71p-377, 0x1.1322230cd2864p-877, 0.0,
     0.0, 0x1.257e5c44df18ep-1001, 0x1.b07724f7b04e4p-807, 0.0,
     0x1.c2034878dc7e6p-237, 0.0, 0x1.8e87bee523b2fp-412, 0.0, 0x1.92d19bf01bfe9p-270,
     0x1.e5caec569525cp-848, 0.0, 0x1.2b9a9fe9fd9bep-1014, 0x1.8ffb2f7859ff6p-666,
     0.0, 0.0, 0x1.2f7f61bd3eeccp-294, 0.0, 0x1.e8fb4e7cc8a08p-894, 0.0, 0.0, 0.0,
     0x1.9b71feda600ccp-999, 0.0, 0x1.4398bbb401bedp-408, 0.0, 0x1.14af4d489cfabp-113,
     0.0, 0x1.4baa30bcbfcfdp-712, 0x1.3017259424bffp-732, 0.0, 0x1.84f5551ca74cp-357,
     0.0, 0.0, 0.0, 0x1.1dff39706969ep-502, 0x1.7c5a5618be65ap-176, 0.0, 0.0,
     0x1.fa2dfaa533ea8p-120, 0.0, 0x1.481216c3841ap-105, 0x1.49f5d53bad86ep-90, 0.0,
     0x1.a9f837be36d17p-83, 0.0, 0x1.bc8df3a1eb83p-802, 0.0, 0.0,
     0x1.68509d8a9fe58p-573, 0.0, 0x1.670dbf31fec46p-8, 0x1.d678cc2a74399p-663, 0.0,
     0.0, 0x1.17fdaf9f9570ep-844, 0.0, 0.0, 0x1.e4ca694d74d7bp-813, 0.0,
     0x1.cc4922e140ad4p-519, 0x1.a9f92d02a1f48p-862, 0x1.4528ca69d6392p-411,
     0x1.49b595eeb850bp-397, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90a72c5ef5175p-525,
     0x1.12b4fbf56b12fp-183, 0x1.3d59bfc5b1a4cp-864, 0x1.bb49996ccf849p-84,
     0x1.c8d62bd5088d4p-372, 0.0, 0x1.ce08f64f2572cp-249, 0.0, 0.0,
     0x1.88c5c92171301p-51, 0.0, 0x1.ef65b4d3af579p-150, 0.0, 0.0,
     0x1.75c476b2b4cdep-227, 0x1.9c1a3552cc556p-464, 0x1.88f004bb040ebp-881, 0.0, 0.0,
     0x1.b16705a6f4bcap-256, 0x1.9574e4e623698p-103, 0x1.db9510b48185ep-732,
     0x1.a7d5e8ad2dbap-237, 0x1.5882e43eec743p-274, 0x1.4dfd3b2063f2p-61,
     0x1.6a1db6f4c4289p-43, 0x1.75c15a66a797fp-267, 0.0, 0.0, 0.0,
     0x1.9fb9e7e778cfcp-653, 0x1.798faf215a1b4p-890, 0.0, 0x1.9f07b6b1ed37cp-411,
     0x1.c4d563350a518p-51, 0x1.6a0a8481cc718p-93, 0.0, 0.0, 0x1.ebc766554483bp-27,
     0.0, 0.0, 0x1.ea6125f31ca71p-812, 0.0, 0x1.fda9e53dc477fp-180, 0.0,
     0x1.ee70a9103e05dp-663, 0x1.c458d44be5605p-5, 0x1.e4ba61bfc7804p-439,
     0x1.bbde5845113bap-818, 0x1.1e78e029ae3cdp-274, 0x1.ac169c790df6ap-232, 0.0, 0.0,
     0.0, 0.0, 0x1.8f6e7c8bc55bfp-818, 0.0, 0x1.ae1298bae6c3ap-271,
     0x1.7a499ef824b24p-400, 0x1.d934814f79983p-728, 0.0, 0.0, 0x1.306b81286a2ddp-621,
     0x1.0c18bce71bb67p-531, 0x1.260b5390e62f5p-14, 0x1.0213c5616ef3bp-644,
     0x1.222bfce4fbd6ep-576, 0.0, 0x1.a4738b8421087p-501, 0x1.6eb1d1ab03682p-612,
     0x1.35f16dfdb1394p-182, 0x1.d3d32acd1a9a5p-38, 0.0, 0x1.3a7ba8dc0bb76p-710, 0.0,
     0.0, 0.0, 0.0, 0x1.0b63d2cc40fb9p-127, 0x1.72ebfc9d28c04p-37, 0.0, 0.0, 0.0,
     0x1.5d54a834a1368p-270, 0.0, 0x1.729965ed4c077p-309, 0x1.2952dbe2ffb48p-617,
     0x1.0b076272b19f7p-658, 0x1.ced002a28e5d8p-148, 0.0, 0x1.99c40cb8fd7f3p-382, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9858a87eb67cdp-495, 0x1.56fbed329f61ep-616, 0.0,
     0x1.6ae587fbb263p-652, 0.0, 0.0, 0x1.de8ed49172e3ap-842, 0.0,
     0x1.802a6a9cb7809p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6eae2e27cfd9bp-64,
     0.0, 0x1.1ba0696e6e5e3p-224, 0x1.cd3ebbd4341bbp-374, 0x1.068ae1fd43ee4p-206, 0.0,
     0x1.8798dfd10ae56p-547, 0x1.26faa4de058edp-865, 0x1.2056b5b079c76p-54, 0.0,
     0x1.66232011e9fb3p-853, 0x1.8fafa3d33f792p-743, 0x1.fc38704f9cca7p-585,
     0x1.8d652ef0fbc2ap-826, 0x1.d1e62303f45e5p-542, 0.0, 0.0, 0.0, 0.0,
     0x1.c7b3c7020ab6fp-319, 0x1.8b77e8549c0d3p-309, 0.0, 0x1.a873cadd8abf9p-1019,
     0.0, 0x1.9a1cb0ea9d246p-54, 0.0, 0x1.530f6ee4ad18bp-810, 0.0,
     0x1.c59949ac4739p-725, 0.0, 0x1.06c63caf4f576p-1004, 0x1.e36fac5fc816cp-458, 0.0,
     0.0, 0x1.5be68a85b6faap-155, 0.0, 0x1.969257a955a9ap-140, 0.0,
     0x1.305045afc7e15p-918, 0.0, 0.0, 0x1.74ef9a5a0ee4cp-914, 0.0, 0.0,
     0x1.83c5152556aebp-650, 0.0, 0x1.0869b4bec3c26p-479, 0x1.c9888de0b747ap-213, 0.0,
     0.0, 0x1.44b3564e8464ap-768, 0x1.1acba95121b29p-166, 0x1.6283b285c9c0ap-339, 0.0,
     0.0, 0x1.7031678859b8fp-919, 0.0, 0x1.f3c7dfe850bfep-896, 0x1.95f2a71377056p-678,
     0.0, 0x1.bc9b1bd399a2ep-606, 0.0, 0.0, 0.0, 0x1.f4a5ee614c48fp-1007,
     0x1.9e6217d631138p-455, 0.0, 0x1.90b4c6d098aa2p-718, 0x1.abf1c7c2b69bdp-927,
     0x1.86cfab9510322p-37, 0.0, 0x1.69f42f935e708p-365, 0.0, 0.0,
     0x1.3f2e655bdd417p-792, 0.0, 0x1.45e1aff839607p-786, 0.0, 0.0, 0.0,
     0x1.789c7eec5474cp-49, 0.0, 0.0, 0.0, 0.0, 0x1.6ccfcb9fff75cp-50, 0.0,
     0x1.936855716dcc7p-439, 0.0, 0x1.983f13243dc52p-900, 0.0, 0x1.fb184496227d4p-320,
     0.0, 0.0, 0x1.8aaded69df573p-967, 0.0, 0x1.eb07f872f9721p-817,
     0x1.58971d1bcae43p-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e95d776d98175p-1003,
     0x1.f35af75ced85ep-709, 0x1.b614fef123b2ap-980, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e36b5ba9e52dap-169, 0.0, 0x1.8babb3c59521ep-402, 0.0,
     0x1.ad1cab3ed190ep-758, 0.0, 0x1.0c6504a41dcd6p-657, 0x1.128eae860fb51p-694,
     0x1.05331ffce6f6p-362, 0.0, 0.0, 0.0, 0x1.d3b597db3dcb4p-731, 0.0,
     0x1.6159ead484d1p-716, 0x1.28204f21337e3p-597, 0x1.79c800995a028p-824,
     0x1.c9380721ca208p-286, 0.0, 0.0, 0.0, 0x1.f89e6c6261a43p-637, 0.0,
     0x1.cd3b8ff1bcd94p-68, 0x1.15fb0623e9841p-491, 0.0, 0.0, 0x1.a9c2f3cc9ca93p-149,
     0.0, 0.0, 0x1.6308590b41a2ap-817, 0.0, 0.0, 0.0, 0.0, 0x1.1fdff876f23b5p-927,
     0x1.c54415a39dcfp-448, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b865bab6432cp-365, 0.0,
     0x1.89068914e293p-310, 0.0, 0x1.6752036910827p-933, 0x1.58295d134bbcap-228, 0.0,
     0x1.376af1d907a82p-654, 0.0, 0x1.515606b461113p-988, 0x1.e89d1b199fb3p-617, 0.0,
     0x1.3a8bd1f2db217p-626, 0.0, 0x1.5dd6977f42a94p-805, 0x1.4df8ea46e093fp-561, 0.0,
     0x1.ef410f031fae9p-1020, 0x1.470e89807200ep-308, 0.0, 0x1.5471e1aac283ep-591,
     0x1.1b868a1bfe296p-360, 0x1.5aa710fc9432ep-57, 0x1.d6e725fb327e1p-652, 0.0,
     0x1.d04cfab96ca99p-607, 0x1.4f675abea7d7p-848, 0x1.a39e074c55296p-1004,
     0x1.49a6e4f6f8f4ep-634, 0x1.74e6864d26448p-844, 0.0, 0x1.73e728b2cfa85p-296, 0.0,
     0.0, 0.0, 0.0, 0x1.5aa95171f1db1p-230, 0.0, 0.0, 0x1.12bd44a2e06cap-34, 0.0,
     0x1.96d1fbe9d4f13p-262, 0.0, 0.0, 0x1.4f69fbf7d96bp-295, 0x1.aff3392efc465p-915,
     0.0, 0x1.9115eaa4b9187p-629, 0x1.53949b55b2a17p-283, 0.0, 0x1.6fdec2380ca7ep-43,
     0.0, 0x1.974ede564224fp-942, 0.0, 0.0, 0x1.e63d82536dc9ap-519,
     0x1.f78926ce996e9p-837, 0x1.05d83e88b3cfep-519, 0.0, 0.0, 0.0, 0.0,
     0x1.c307c71186053p-1004, 0x1.8f8d957cf8932p-302, 0.0, 0x1.197665a30d8acp-387,
     0x1.f27e672790013p-765, 0x1.278717a9cb61dp-540, 0.0, 0.0, 0.0, 0.0,
     0x1.d1fe2a9743bddp-161, 0x1.1b9b5f255b2a6p-377, 0x1.ff6564a52df6dp-17, 0.0,
     0x1.9434f02d3d216p-627, 0.0, 0.0, 0.0, 0.0, 0x1.af785b137b972p-319, 0.0,
     0x1.e9e4482d7d7d6p-979, 0.0, 0x1.56001c4342dc5p-662, 0.0, 0.0, 0.0, 0.0,
     0x1.a784b2a2eea72p-341, 0.0, 0.0, 0x1.388ec5fb7ec89p-383, 0.0,
     0x1.cd47ebcd74d03p-824, 0x1.2403bcc329cfep-19, 0x1.9ada8dd39a053p-316,
     0x1.6c1d48e22eeafp-568, 0.0, 0x1.adf3723b8ad8fp-651, 0x1.a9986f2981e11p-722, 0.0,
     0x1.c7aad0ee6637ep-368, 0.0, 0.0, 0.0, 0x1.3d2a4906b61b1p-131, 0.0, 0.0, 0.0,
     0.0, 0x1.c88ff252a23a4p-806, 0.0, 0.0, 0x1.a3a2fdb57015fp-795, 0.0,
     0x1.349fba1959e56p-769, 0.0, 0.0, 0.0, 0x1.a573eb29534ccp-231, 0.0,
     0x1.b446011cb931bp-435, 0x1.a178141855b09p-306, 0x1.c9562c5352028p-226,
     0x1.e23cbc0bb20b1p-673, 0x1.35ac1941d383ap-629, 0.0, 0.0, 0x1.3a5fb7b95799fp-67,
     0x1.ddba37e8f3cdep-376, 0x1.ce0002a376e4cp-875, 0x1.e488c6bd0a59fp-518,
     0x1.0f8e96a30e164p-233, 0x1.1167067aa63cap-907, 0x1.b3ae73b33584ap-374, 0.0,
     0x1.3a80a28566974p-450, 0.0, 0x1.f0c93a9c07fa6p-360, 0x1.894e4137fb928p-292,
     0x1.21a67af24d898p-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af99fd74f51b6p-520, 0x1.731ebc375640ap-826, 0.0, 0.0, 0.0, 0.0,
     0x1.68e88101e22f1p-224, 0x1.83b6e973884e4p-394, 0x1.88b9b46da2326p-885, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0442520704f03p-507, 0.0, 0.0, 0.0, 0x1.eb930badce6cbp-51,
     0x1.a71a4192980b1p-761, 0.0, 0.0, 0x1.9009eefa4dd74p-773, 0.0,
     0x1.109237ac6016bp-967, 0x1.da307f4468b07p-896, 0.0, 0.0, 0.0,
     0x1.31a871ffbffc6p-745, 0x1.47795d59d35c1p-419, 0x1.2f002ce3b04a1p-277,
     0x1.e3cd16e9ab2fep-479, 0.0, 0x1.1856fa4585dap-532, 0.0, 0x1.ab61f8570f0c8p-380,
     0.0, 0x1.8ab2ee89a2d55p-800, 0.0, 0.0, 0.0, 0x1.71cc8837c44bep-711,
     0x1.c0af5c868442dp-928, 0x1.83abcd7cca798p-859, 0x1.93d1b0dd6984bp-749,
     0x1.580fa2c28699dp-862, 0.0, 0.0, 0x1.0ebf3952e70c3p-373, 0x1.2cec5714a7dcp-255,
     0x1.88a8aae6102dap-587, 0x1.6fdffeb149321p-220, 0x1.01f54b5fcb58ep-872,
     0x1.80f993e0f3d9dp-707, 0.0, 0.0, 0x1.d934210a2a42fp-112, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b28943da35d5cp-202, 0x1.4ba770979a335p-116, 0x1.3a7383211cd5bp-905,
     0.0, 0x1.c89d7f0f59167p-296, 0x1.affb309aa96afp-506, 0.0, 0x1.b473706810383p-325,
     0.0, 0x1.411888f6ab344p-613, 0.0, 0.0, 0x1.efd808b3a853dp-920, 0.0,
     0x1.1d94963299c6fp-292, 0.0, 0.0, 0x1.0d77456fe156fp-381, 0x1.14dfbb5be75cp-892,
     0.0, 0.0, 0x1.579fdf2f921cap-457, 0.0, 0.0, 0x1.86ea9911516ccp-997, 0.0,
     0x1.c916bd72f7a43p-588, 0.0, 0x1.14d76191ce01ap-181, 0x1.09725f35c5933p-719, 0.0,
     0.0, 0.0, 0x1.3a6748fb1f4d4p-721, 0x1.60c47227ca293p-677, 0x1.13b33695e2b1bp-916,
     0.0, 0.0, 0.0, 0x1.66724d2ac7074p-265, 0.0, 0.0, 0.0, 0.0,
     0x1.96406448ba35dp-478, 0x1.103fcccab2dep-626, 0.0, 0x1.546c4453fba0dp-841, 0.0,
     0.0, 0x1.af4a110a0c2d7p-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2177d67cb60fp-189,
     0x1.03786f52f596p-1, 0x1.531236f9cc975p-434, 0x1.47027e7c49c77p-941, 0.0, 0.0,
     0x1.1c3da7a48f146p-362, 0x1.4544c0546bbcdp-761, 0x1.9e60133179947p-669,
     0x1.a48c2b834099fp-736, 0x1.892d99b53d664p-597, 0.0, 0x1.9ed2010e435a2p-681,
     0x1.96397e9528408p-957, 0.0, 0x1.12a1077466883p-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3f57dec9712b3p-15, 0.0, 0x1.0c07c5ebedbe8p-35,
     0x1.aa155447461b1p-227, 0x1.77054138fc9b3p-830, 0x1.60b9ceb9391c5p-44,
     0x1.5389db74d20bfp-771, 0x1.34de786a6c0b2p-514, 0x1.a9bdcb297f40ap-914, 0.0,
     0x1.a69b7829b5202p-271, 0.0, 0.0, 0x1.fa43bcc2c56f1p-80, 0x1.3dd254dc0d3fbp-917,
     0.0, 0.0, 0x1.b429d6d331e01p-985, 0x1.19fff1ed1b38cp-687, 0x1.5c7fe052c7792p-870,
     0.0, 0.0, 0x1.e20a46c91d2b5p-772, 0.0, 0.0, 0.0, 0x1.d51e3085ba9a4p-106, 0.0,
     0x1.deb9a7bf26002p-48, 0.0, 0x1.5bedb8ffbe984p-744, 0x1.13d9d83b8b95cp-359, 0.0,
     0.0, 0.0, 0x1.e89480225dcdbp-300, 0.0, 0x1.5b6b75470f2b9p-966,
     0x1.bf9d171d34576p-758, 0.0, 0.0, 0x1.7f72f35821278p-229, 0x1.18fe2ec78da32p-997,
     0.0, 0x1.dd8cb23cd9677p-986, 0.0, 0x1.efdbfc2168307p-388, 0.0, 0.0, 0.0,
     0x1.9bf0d8034a4b1p-1001, 0x1.cf9b016f9d8bep-559, 0x1.58fe5d9569e8p-266,
     0x1.7d32901b4d507p-540, 0x1.c5e459fd6c58dp-266, 0x1.e5803a3bd1becp-729, 0.0, 0.0,
     0x1.af0447461d223p-225, 0x1.05b3efcf09317p-402, 0x1.2b2b7b3ba0208p-614, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8703c72b19101p-686,
     0x1.35439df2a7557p-116, 0.0, 0x1.cfb683f4f6204p-904, 0x1.55d848163dc21p-856,
     0x1.d86140b1ee3ddp-715, 0.0, 0.0, 0x1.5fc379e8c3454p-553, 0x1.2016e71d0f45p-840,
     0x1.66a9c5bfbb795p-554, 0x1.ea209e7e9784ap-139, 0x1.9c9f0d86bd881p-727, 0.0,
     0x1.0f260ab1b8c0bp-1021, 0.0, 0.0, 0x1.9348446bc4c96p-2, 0.0, 0.0,
     0x1.14b382218d5afp-173, 0.0, 0x1.193680ef44025p-386, 0x1.63489a2e64ae2p-541, 0.0,
     0x1.48272feb2e51p-351, 0.0, 0.0, 0x1.2f22bbe0a9943p-134, 0x1.95622bd91f491p-718,
     0x1.d30c9016c32a2p-618, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.070580789a4ap-69,
     0x1.f88759de781dap-737, 0x1.bd84583135772p-399, 0x1.297a14201295bp-68,
     0x1.abb8f769db842p-696, 0x1.294e064a19a6ap-196, 0x1.da2d080d1d4edp-226,
     0x1.a08f525139d2fp-988, 0x1.f40b06d874c67p-382, 0x1.3bb89c3eb9cfcp-374,
     0x1.d1500a4c2d682p-131, 0.0, 0.0, 0x1.1a6ab9af163fp-841, 0x1.42ce8763bbe59p-813,
     0.0, 0x1.3db7160ac74b3p-787, 0x1.06ebc024b5de5p-3, 0x1.f4767f26e49f9p-539, 0.0,
     0x1.26ec29c79861fp-217, 0x1.43415d786a899p-667, 0x1.b06b5d32cdb71p-747,
     0x1.9374ace6fa88ep-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.702eeae4775e3p-501,
     0x1.7a288fae6ca57p-604, 0.0, 0x1.3919865aaaceap-111, 0x1.b53a6b6085445p-261,
     0x1.1838becf2c4cdp-569, 0.0, 0.0, 0x1.6e31776b1874p-439, 0.0,
     0x1.41e72c8b50139p-599, 0x1.8058de54038dap-747, 0.0, 0x1.f45c44e8d437dp-694,
     0x1.6b499461692cap-865, 0x1.7eb8b0b609c08p-998, 0x1.9ba2d19cc72e3p-435, 0.0,
     0x1.a2bf333cf2779p-732, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = INT32_C(0);
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
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_ilogbd1_purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_ilogbd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ilogbd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
