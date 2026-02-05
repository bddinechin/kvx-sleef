/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd1_u10purecfma.c --function Sleef_cosd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.525b1b6e19d75p-277, 0x1.efb72277dd1fep-788, 0.0, 0.0,
     0x1.032f605756e78p-856, 0.0, 0x1.3ed87c524ad1cp-431, 0x1.b7aa5bb67ddc6p-468, 0.0,
     0x1.bf7c21afd9073p-861, 0.0, 0.0, 0x1.80a01c1d16a1bp-43, 0.0, 0.0, 0.0,
     0x1.2927d8c146ec8p-410, 0x1.618bb37735bafp-423, 0x1.887cb14fb17a3p-71,
     0x1.1549b9fcf1604p-465, 0x1.f887b21cbb5dp-204, 0.0, 0x1.eaca3aeffe1a6p-26,
     0x1.adbbc00b6f4dap-24, 0.0, 0x1.115add04e6a9cp-99, 0x1.64f11ae924d68p-349, 0.0,
     0x1.15763b7e8352p-228, 0.0, 0.0, 0.0, 0x1.5e16aa744a247p-346,
     0x1.91d6bc4cbc6bp-656, 0x1.790968e26830cp-556, 0.0, 0.0, 0x1.d317eef94e4bfp-64,
     0x1.f9bfc920dc521p-269, 0x1.54436425d3d9cp-549, 0x1.05f2af1b56041p-95,
     0x1.aa6fd3d975152p-114, 0.0, 0.0, 0x1.0bd0496e866e7p-603, 0x1.2ee360a07ba24p-987,
     0.0, 0.0, 0x1.4f66d50a0d577p-775, 0.0, 0x1.ea4c1765d98a8p-823,
     0x1.48ec72ebcb5e8p-548, 0x1.44a7cf95dbe8bp-903, 0.0, 0.0, 0x1.261ed50440851p-898,
     0.0, 0x1.bb255ca78d7dep-183, 0x1.95b60312c849ep-786, 0.0, 0.0,
     0x1.d577919eeed3p-558, 0x1.b0e50f4fd4bbep-803, 0.0, 0.0, 0.0,
     0x1.ea51b91d5c62cp-521, 0x1.734b86d12ef2fp-279, 0.0, 0x1.f1ed8c1b274dcp-568, 0.0,
     0x1.2b1c03c8e7cadp-215, 0x1.c962b8be1b668p-781, 0.0, 0x1.3224fc04c239ap-459,
     0x1.4dad8a0991ebap-547, 0.0, 0x1.f20d55a7663bfp-66, 0.0, 0.0,
     0x1.b7ac2699c97b1p-365, 0x1.d9b5b858c6191p-339, 0.0, 0x1.1d7aa4ee0e69cp-939, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3305df71fcc49p-395, 0x1.ae640e74570e2p-533, 0.0,
     0x1.34d5fd37ef8cdp-682, 0x1.8053c2a97fce9p-352, 0x1.57d7ecf268ee9p-113, 0.0, 0.0,
     0x1.c6b820ee40ebcp-61, 0x1.c438bfd9210e9p-763, 0x1.42fb450ec6c12p-270, 0.0, 0.0,
     0.0, 0x1.6452542a7f651p-549, 0x1.4e8c2a6e17c0ap-677, 0.0, 0.0,
     0x1.4ba2f946f900ap-296, 0x1.fc2c7a3bc825fp-111, 0x1.9b0bc017419efp-58,
     0x1.e22a58e90a174p-305, 0x1.4ea42ae4e734bp-814, 0x1.ccb5240faf2aap-248,
     0x1.efc4ea3318dd8p-1020, 0.0, 0x1.f0ecce1981e68p-91, 0x1.e05064d3d29a3p-190,
     0x1.274800257cecp-821, 0x1.8db3d2776f5a9p-578, 0x1.9d36f0985cf4fp-263, 0.0,
     0x1.a9b4cce5d6ecep-794, 0.0, 0x1.a8f735e8f6294p-936, 0.0, 0x1.be635a7c05409p-686,
     0x1.14bceaf9bc82p-625, 0x1.a63ebcaf4102fp-72, 0x1.99881a101ae5dp-280, 0.0,
     0x1.634da487786aep-162, 0.0, 0.0, 0x1.d5952d6afd247p-161, 0x1.726cd8b773ad8p-269,
     0.0, 0x1.e65a0ad7603b2p-368, 0.0, 0x1.b81614c76c2fbp-59, 0x1.b145ff620c46p-960,
     0x1.ceaa38b8c5825p-136, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7292ab902e096p-9,
     0x1.d7379433763e4p-772, 0.0, 0x1.90a5fdd27e984p-909, 0x1.8b20d65b14a8cp-564, 0.0,
     0x1.8905832ae36c2p-346, 0x1.38a3466bcb4p-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea10f2650eba9p-361, 0.0, 0x1.6d2dee3030ae9p-614, 0.0, 0x1.0e45f3eb215dcp-285,
     0.0, 0x1.80f8cb8886c8ap-577, 0x1.90a77445be4e5p-376, 0x1.077e63180033ap-609, 0.0,
     0x1.917fe609f0bf9p-243, 0.0, 0.0, 0.0, 0x1.5389de2787443p-494, 0.0,
     0x1.e521be398bd9cp-742, 0.0, 0x1.4ac6b71dc34b6p-433, 0.0, 0.0, 0.0,
     0x1.044217ee7bf4ep-976, 0x1.accacd29c8157p-826, 0x1.030b55e897e95p-1008,
     0x1.a575dd9681037p-2, 0.0, 0x1.e9b46726cf894p-552, 0x1.535901b570ae9p-112, 0.0,
     0.0, 0.0, 0.0, 0x1.b1b832453c4bbp-334, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4ae55732e24b3p-283, 0.0, 0.0, 0x1.a0de380d9093cp-164, 0x1.7654225dd1e5ap-13,
     0.0, 0.0, 0.0, 0.0, 0x1.c0e1c4fed646bp-1005, 0.0, 0x1.5745748370b75p-509, 0.0,
     0x1.5db720bfdf543p-102, 0.0, 0.0, 0.0, 0x1.7861de42ac937p-443, 0.0, 0.0, 0.0,
     0x1.21520149643b1p-794, 0.0, 0.0, 0x1.c506c561e849fp-155, 0x1.ac0d5db8c0e4ep-812,
     0x1.a14c7a87b1931p-532, 0x1.65923fe91e32cp-555, 0x1.651fa21fdbc92p-422, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.38a4b271fe9b6p-936, 0x1.4b30be4d0e875p-829,
     0x1.c89d89653edd9p-329, 0x1.96ac45414d502p-86, 0.0, 0x1.26f643871a4cep-90,
     0x1.0ba9dc388979bp-261, 0x1.827e73da01608p-549, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3d7f229772f9p-66, 0.0, 0x1.f8006b2a29a02p-841,
     0x1.f32a39d6a7559p-699, 0x1.3d62423c10175p-1010, 0.0, 0.0,
     0x1.303cec94a90b3p-138, 0x1.10e661d360fafp-311, 0x1.d8ff821955a7ep-55,
     0x1.c63b3ea4b3814p-422, 0.0, 0.0, 0x1.64cd085270105p-649, 0x1.eed73cd9ccd77p-556,
     0x1.6f7e94db0150dp-663, 0.0, 0x1.ec44206c33092p-353, 0.0, 0.0,
     0x1.789902b572b0dp-889, 0x1.fcd2e8c561a9cp-439, 0.0, 0x1.75d631cc721b1p-62,
     0x1.a19cf7a1be068p-705, 0.0, 0x1.fea75d0d34a23p-16, 0x1.2acf5e0561b24p-956,
     0x1.907642d59bfd2p-648, 0.0, 0.0, 0x1.d944f38cb05ap-973, 0.0,
     0x1.031ac4157fa1p-652, 0x1.0c2eb7b77694fp-106, 0.0, 0x1.df5e7316a6ebcp-105, 0.0,
     0x1.57b7f3f2f7cb3p-683, 0x1.6c2525c8b40d7p-234, 0.0, 0.0, 0.0,
     0x1.798bc56db1bbfp-871, 0.0, 0x1.b0c0360a06d0ap-655, 0x1.7eed42fd2cea9p-301,
     0x1.e9904efe9ec0cp-95, 0.0, 0x1.0796bf7f14997p-496, 0x1.4d1abadbb4b22p-526,
     0x1.b6d9d3513d196p-728, 0x1.1d372c9cdb22bp-39, 0x1.8839280f20a84p-782,
     0x1.f53299c525d2p-52, 0x1.97828f0ac734ep-11, 0.0, 0x1.fc1ba2984c16p-557, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c3d32773b5305p-102, 0x1.4af4ec7e28314p-965, 0.0, 0.0,
     0x1.74ced7c3ab517p-888, 0x1.46d1bb9f57af3p-9, 0.0, 0x1.5322af5dee268p-817,
     0x1.7cb9f148f65d5p-877, 0x1.7ca82bb894a04p-572, 0.0, 0.0, 0x1.286f70b71baep-488,
     0x1.2fe0dae683d88p-572, 0x1.83b0192fa6e18p-28, 0x1.1c73c9d33b4dfp-189, 0.0,
     0x1.5193888bafa18p-362, 0.0, 0.0, 0.0, 0x1.c68e47418849fp-448, 0.0,
     0x1.e2d2ca10f071ep-943, 0x1.fb992d93efc11p-363, 0.0, 0x1.c047cb5a3faebp-161, 0.0,
     0x1.98278b215af08p-976, 0.0, 0x1.b895e635f11a8p-174, 0x1.73ebfd48e8a01p-528,
     0x1.ce1d2903de8c1p-576, 0.0, 0x1.38263f0cfa95bp-692, 0x1.a8ce843c8be06p-864,
     0x1.7a116adc7dd4ap-65, 0x1.f4fbe23cafed6p-621, 0x1.836ca022f9308p-999, 0.0,
     0x1.76d9b29922b4cp-854, 0x1.5411656783118p-433, 0.0, 0.0, 0.0,
     0x1.1d0eeb0138dcdp-519, 0x1.469e0a3c4ac3fp-811, 0x1.ddd2f0189fb5p-749,
     0x1.a49f7f00ccdedp-672, 0x1.1a1a69ffa63e1p-503, 0.0, 0x1.3d2e48b5ad5bcp-421,
     0x1.1cfbb46f9f384p-439, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f9375297b38ap-1,
     0x1.9a2fdd3d276c3p-451, 0.0, 0.0, 0.0, 0.0, 0x1.e041a088d1a0fp-763,
     0x1.ed541ff3bee9ep-377, 0.0, 0x1.da69ba00aa765p-88, 0x1.82f11d01b0435p-519, 0.0,
     0.0, 0.0, 0x1.58ac908f4ead6p-451, 0.0, 0x1.e545f60efe4e2p-427,
     0x1.58a9d153baf26p-1006, 0.0, 0.0, 0x1.81c37e1296e9fp-994, 0.0, 0.0, 0.0,
     0x1.ac5df5cdb80d3p-302, 0x1.8e43d5690775cp-348, 0x1.134a5fb8edaeep-198,
     0x1.12223a8255e55p-852, 0.0, 0.0, 0x1.7229e2d0b4413p-865, 0x1.65c4693994839p-803,
     0x1.1a8ab7360f4f2p-759, 0.0, 0.0, 0.0, 0.0, 0x1.eb6ec9b89d1e5p-668,
     0x1.1374cc80cf81dp-337, 0x1.c2e894c740474p-777, 0.0, 0.0, 0.0, 0.0,
     0x1.6fd6c0a1e7af7p-541, 0x1.a8130409f8877p-284, 0x1.758af89596886p-434,
     0x1.eded90fe54a8bp-476, 0.0, 0x1.ae5e04dc9f7b4p-576, 0x1.f6a04ca86b812p-396,
     0x1.0315f0e7182f5p-971, 0x1.0cb453fdc763dp-928, 0x1.db4d9e025665ap-231,
     0x1.7bc25d84e83ep-409, 0.0, 0x1.14ce8f2b3fde6p-583, 0x1.85f3d9bbc706cp-122, 0.0,
     0.0, 0.0, 0x1.1194f35456bbbp-392, 0.0, 0x1.202013df0313cp-491, 0.0, 0.0, 0.0,
     0x1.660cc02898d2cp-842, 0x1.717c766238d08p-218, 0.0, 0.0, 0x1.aa1ba13005daep-872,
     0.0, 0x1.7f52d715f90fcp-190, 0x1.19987705b0a2p-420, 0x1.fd9d3d669d1f3p-781,
     0x1.9ad1f26753474p-481, 0x1.d2a028bf6a36cp-334, 0.0, 0.0, 0.0,
     0x1.f598b86708184p-764, 0x1.1e019e9f9f06ep-629, 0x1.6104ffe736fcbp-158, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b05107cb4e738p-192, 0x1.efa9aff0240a5p-946, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.48ec42b8d3957p-312, 0x1.c59d68fad131fp-312,
     0x1.983d64ca1b5bbp-597, 0.0, 0x1.e3d0c230bf3e7p-681, 0.0, 0x1.fe85fa4eae0a1p-32,
     0.0, 0x1.d322d0c0a0e24p-352, 0.0, 0.0, 0x1.74ef56982231fp-977,
     0x1.1c76a1863aaa7p-801, 0.0, 0x1.669959ff12009p-15, 0.0, 0.0,
     0x1.79e69062f4e13p-835, 0.0, 0.0, 0x1.acdf5a26f151bp-27, 0x1.f0087194756b9p-786,
     0.0, 0.0, 0x1.22b4de18b181dp-603, 0x1.57f03529bafedp-946, 0x1.0fb8e704f8166p-594,
     0x1.2ce54bee21d2cp-683, 0x1.86b0b5a471b1bp-268, 0x1.cf471e97a99c6p-21, 0.0,
     0x1.34aeef7098472p-576, 0.0, 0x1.f94f61812e2e3p-517, 0x1.ef7630e11e6b6p-164, 0.0,
     0x1.9114c290f0b59p-460, 0x1.7e26fdb3365cbp-63, 0.0, 0x1.ff1268c06d474p-87,
     0x1.2826d863d9fafp-77, 0.0, 0x1.68d9ef4871865p-684, 0.0, 0x1.fb4885da22abp-36,
     0x1.2d30377a15633p-91, 0x1.cf4365e4cc8eep-881, 0x1.baaad83a433bep-105, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7dedf59098e46p-600, 0.0, 0.0,
     0x1.963bfd1ab8766p-769, 0x1.a98a257b63524p-991, 0x1.b1a944bec9136p-269,
     0x1.18bd7663cdf07p-118, 0.0, 0.0, 0.0, 0.0, 0x1.cbdae8ccd4c8ep-155, 0.0,
     0x1.32dbf990060c8p-704, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d612d854135bp-186, 0.0,
     0x1.fb489fb220a81p-588, 0.0, 0.0, 0x1.cd229ddaaa9eap-397, 0.0,
     0x1.8cfc9998825cap-171, 0x1.10c09725f1da3p-580, 0x1.8ef7616909bd3p-548,
     0x1.c324f191b74bdp-924, 0x1.15aab85791bf4p-895, 0x1.7af4da311d055p-444, 0.0,
     0x1.6fe35f58240acp-440, 0x1.0d64612aafb3p-6, 0x1.7a5c7d196a542p-894,
     0x1.b3f3e12d4023bp-735, 0x1.1141da3de0401p-663, 0x1.78313f7a32ccep-705, 0.0, 0.0,
     0.0, 0x1.5256269ca35b4p-645, 0x1.90270c22bd908p-411, 0x1.534eaea873d1fp-176,
     0x1.bede5151f1701p-753, 0.0, 0x1.824415ec812a5p-737, 0.0, 0.0, 0.0,
     0x1.3d6457cc2cc2bp-342, 0.0, 0.0, 0.0, 0x1.91ddd9ec47c6dp-402,
     0x1.3194cd8f6f9e7p-496, 0x1.ae62de82cff07p-862, 0x1.820f72c2c332bp-974, 0.0, 0.0,
     0x1.0fdc3afb20218p-791, 0.0, 0.0, 0x1.f725bddb215f8p-816, 0x1.2ae00825be20fp-209,
     0x1.bbf447860eef9p-512, 0.0, 0x1.466722ad226p-993, 0.0, 0.0,
     0x1.282acfe5c4d08p-548, 0.0, 0.0, 0x1.9a99e2ff96318p-716, 0.0, 0.0,
     0x1.d4cba553c93aep-387, 0x1.70bcddb1b6d52p-85, 0.0, 0x1.64a1ce62788dbp-502, 0.0,
     0.0, 0x1.2074e73c5f3d5p-682, 0.0, 0.0, 0.0, 0x1.24401df3e2ce7p-52, 0.0,
     0x1.e65a53006fe53p-825, 0x1.9fc98903aee6dp-843, 0x1.e955ff330a0edp-66, 0.0,
     0x1.2fe5cbf95b285p-949, 0x1.91325ada859ebp-643, 0x1.8458060bdfe67p-364, 0.0,
     0x1.682fd2180505ep-557, 0.0, 0.0, 0x1.8e67267fad5a9p-618, 0.0, 0.0, 0.0,
     0x1.1dc11eb0bf706p-1006, 0.0, 0x1.4bde55f6965d8p-141, 0.0, 0.0, 0.0,
     0x1.f6b580311e714p-15, 0x1.fa92af72ca6b1p-741, 0x1.37c2ad072898ap-155, 0.0, 0.0,
     0x1.ec1d9ee93dc71p-31, 0.0, 0x1.d6941ffd275bcp-851, 0x1.7d87dce267db9p-59,
     0x1.0b786a12c6fb1p-4, 0x1.9f4fb8c308c9ep-794, 0x1.6c4f03a5b3907p-857, 0.0,
     0x1.9ecfbd03af52bp-430, 0.0, 0x1.7cb10269965fbp-541, 0x1.02dfa2a7e95a6p-491,
     0x1.154f4459b229bp-44, 0.0, 0.0, 0.0, 0.0, 0x1.b36b1de0ad2a6p-591,
     0x1.1365c659f47b2p-241, 0.0, 0.0, 0.0, 0x1.25791b2790fep-780,
     0x1.4e5404c8e54f6p-261, 0x1.858a30c4ed0ffp-258, 0x1.c5bac5656a5e3p-577, 0.0, 0.0,
     0.0, 0x1.94f1fa5214449p-922, 0x1.ec6165542b77ap-1017, 0x1.95072cc380ba7p-11, 0.0,
     0x1.d7c8585c567e8p-61, 0x1.8a1ce0f28491p-741, 0x1.3edaf7f94c3d9p-408,
     0x1.2eecd0390a042p-748, 0.0, 0.0, 0x1.78b254d6530bcp-600, 0.0,
     0x1.453ceef875eafp-628, 0x1.93cae1667a6a6p-584, 0x1.8a3c63b011b3ep-588,
     0x1.883f5a79c1fb6p-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3550bcfdd2a3fp-54,
     0x1.de68eb0c46138p-730, 0x1.f62fedc534b1cp-338, 0.0, 0x1.b1381c6269284p-120,
     0x1.046c0adafc925p-460, 0.0, 0x1.30ed740a70294p-476, 0.0, 0x1.cea1c3efeab9ap-833,
     0.0, 0.0, 0x1.1327374337cedp-280, 0x1.a96ad6deb0287p-296, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ea40b8c116b8cp-75, 0.0, 0.0, 0.0, 0x1.df717707bc1a6p-545,
     0x1.79097df16af16p-145, 0.0, 0.0, 0x1.60a56fd04ff11p-225, 0.0, 0.0, 0.0, 0.0,
     0x1.1150f25ba8246p-820, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5763b768a79ccp-482, 0.0,
     0x1.ea163cddf1203p-235, 0.0, 0x1.90a7869baab18p-951, 0.0, 0x1.2efffc946db01p-672,
     0x1.05d95315e45ep-852, 0.0, 0x1.d8efa1d6bcd7cp-912, 0x1.b393b443a995cp-373, 0.0,
     0.0, 0.0, 0x1.09bab382df3a5p-760, 0.0, 0.0, 0x1.9daa1a741c92ep-604, 0.0,
     0x1.e92803efd9b05p-102, 0x1.6b005c57b6013p-111, 0.0, 0x1.b28d9a8d52bebp-41,
     0x1.eb3a725f55262p-819, 0.0, 0.0, 0x1.5aae9709ed5bdp-23, 0x1.9df9ee2f3c4dap-909,
     0.0, 0.0, 0x1.1e9539e2726c5p-725, 0.0, 0x1.ea34506524463p-620, 0.0, 0.0, 0.0,
     0x1.ecbf59ec863bcp-732, 0.0, 0x1.bf34b5dac6c51p-380, 0.0, 0.0,
     0x1.7c108e0dcfc2ep-983, 0.0, 0x1.d4230f5ee999bp-37, 0.0, 0x1.18fa719dabf8bp-717,
     0.0, 0.0, 0.0, 0x1.048999bf44374p-557, 0x1.0e4a0ef4a5795p-673,
     0x1.ae667c9baf577p-519, 0x1.683e5a7f49334p-715, 0.0, 0x1.3fb5334660caep-405,
     0x1.aa07f179c6188p-840, 0.0, 0x1.c86933171ed1p-976, 0.0, 0x1.832ca0fa92c08p-1022,
     0.0, 0.0, 0x1.e5c20a4a08eb3p-167, 0x1.85301b41af917p-364, 0.0, 0.0,
     0x1.1daf7fa4c45ffp-31, 0.0, 0.0, 0.0, 0x1.2e6ef183f116p-163, 0.0, 0.0,
     0x1.f180189ac20cdp-478, 0x1.33890693b0164p-303, 0x1.00e95daa5bf38p-689, 0.0,
     0x1.3f45b54069f51p-638, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c399274215b8p-600, 0.0, 0x1.3408239628288p-543, 0.0, 0.0, 0.0,
     0x1.67b7e45f9b8aap-272, 0x1.667dc7f885dafp-464, 0.0, 0x1.cc61a2b13a3b4p-2, 0.0,
     0x1.007de0669aad4p-911, 0.0, 0x1.90bd1d0305c1fp-251, 0x1.9c03ea1bc4fdep-869,
     0x1.034d7b48f07d5p-410, 0x1.d0bbca064519fp-678, 0.0, 0.0, 0x1.0ea50f725acaep-648,
     0.0, 0.0, 0.0, 0.0, 0x1.d22c81d6b8cb1p-715, 0x1.5b310a66da386p-119, 0.0,
     0x1.5f6edb1816b9dp-753, 0.0, 0x1.e772c84b4d823p-802, 0x1.20b9180aaedc5p-127, 0.0,
     0x1.96e9be11bfcc5p-281, 0.0, 0.0, 0.0, 0.0, 0x1.df3a7d744f03ap-84,
     0x1.b67f60551ee9cp-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.879f88bb7312ap-170, 0.0, 0.0, 0x1.2d1185c15c676p-742, 0x1.3ca4c360a80fdp-58,
     0x1.be10dc5ed0854p-245, 0.0, 0x1.234724e9ac2d3p-158, 0x1.33fb7e1ce52e1p-151, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ee36d45801dep-104, 0.0, 0.0, 0.0,
     0x1.2b0658d4c607bp-333, 0.0, 0x1.8fe01a67c4499p-291, 0x1.91d77d20ffda5p-1009,
     0.0, 0x1.db0806cc9f052p-362, 0.0, 0.0, 0x1.eeeb48fc42a7p-275, 0.0,
     0x1.831158b920a4dp-885, 0x1.33590b9abe869p-73, 0x1.bfab251464b9ep-120,
     0x1.075a3d7611ee7p-217, 0.0, 0x1.51feb2224bbc8p-1020, 0.0,
     0x1.406cc488a3d2dp-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aae6dcf72016p-85, 0.0, 0.0,
     0x1.c1a57472305abp-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4b59ebc3dd75p-706, 0x1.a2c56c87afe8fp-751, 0.0, 0x1.f8d3daa3eb266p-981, 0.0,
     0.0, 0x1.bd8cfbd0966cbp-983, 0.0, 0x1.e834928d4bc67p-932, 0.0, 0.0,
     0x1.27abbad6353fp-861, 0.0, 0x1.8cc1f09e88baap-437, 0.0, 0.0,
     0x1.a20b50c2c440fp-286, 0x1.e1304a26c2179p-448, 0x1.aa4f40e881108p-570,
     0x1.bbe484b03eadp-161, 0.0, 0x1.7d9e467370876p-480, 0.0, 0x1.41566853a2e6dp-583,
     0x1.e58ba680e1cfcp-590, 0x1.fde4dd3c4f873p-854, 0x1.a51cce7a0784cp-123, 0.0,
     0x1.7c44cea4205fp-520, 0.0, 0x1.75516efde1afep-467, 0x1.0fef25039f74fp-52, 0.0,
     0x1.903ac7c0f7dcep-934, 0x1.bb2d8eaf8cb0cp-350, 0.0, 0.0, 0x1.d66d99adccff4p-335,
     0.0, 0.0, 0x1.1fad006b1ce8dp-207, 0.0, 0.0, 0x1.47505ecb46459p-920,
     0x1.0f6042f9412f9p-719, 0.0, 0.0, 0.0, 0.0, 0x1.06b02327ba36ap-215, 0.0,
     0x1.03deef6c8243ep-382, 0.0, 0x1.ec4eb05270673p-269, 0x1.ffa36326c6146p-755, 0.0,
     0x1.3687244b5a7bp-275, 0.0, 0x1.a510bf61d4ca8p-940, 0.0, 0x1.2a41eb077b3c9p-929,
     0x1.c324448c9d73ep-369, 0x1.9d24c5bda6d0dp-902, 0x1.c198a3391a171p-105, 0.0,
     0x1.fb968931dda55p-606, 0x1.24a6b5cb6c924p-760, 0.0, 0x1.7b20dc4826e4ep-576,
     0x1.abaeba910aa5cp-1005, 0x1.a45686776607ap-1009, 0.0, 0x1.bb9da8e87a957p-929,
     0x1.9d63a4d15b66bp-79, 0.0, 0x1.1cf135db35393p-426, 0.0, 0.0,
     0x1.dddfa65a3453dp-963, 0x1.730c0a40c8c01p-478
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_cosd1_u10purecfma(tmp0);
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
    printf("Sleef_cosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
