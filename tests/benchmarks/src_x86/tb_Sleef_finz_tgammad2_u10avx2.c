/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammad2_u10avx2128.c --function \
 *     Sleef_finz_tgammad2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.c12a589dd43a5p-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.faee757af3d71p-620,
     0.0, 0.0, 0x1.c16d9d51e086fp-252, 0.0, 0.0, 0.0, 0x1.a4c3ffc66ab19p-488,
     0x1.4938b01ee2f4bp-664, 0.0, 0.0, 0.0, 0.0, 0x1.2924fbf33856ep-626, 0.0,
     0x1.c18ef1dddbba1p-909, 0.0, 0.0, 0x1.7491f95db9664p-330, 0.0,
     0x1.86ba9a20f072fp-606, 0x1.e92a3ce19d7fap-468, 0x1.cc9803116c2e6p-335,
     0x1.6b4c48251451cp-943, 0x1.132daecb2816ep-850, 0x1.67383661470d6p-853, 0.0, 0.0,
     0.0, 0x1.fc009a451f51ep-224, 0x1.7314653acff75p-26, 0x1.d9661235b3a9cp-819, 0.0,
     0x1.349075af44184p-372, 0x1.4666bd59767bep-155, 0.0, 0x1.9d2f7c0f68ed5p-749,
     0x1.df3491179d25cp-903, 0x1.41027a178c35bp-576, 0x1.798c4ee2937afp-293, 0.0, 0.0,
     0x1.2ed82e1a2fa96p-739, 0x1.9e4b8ddfa23d1p-686, 0x1.025f4fcf343d4p-776,
     0x1.9083d2ae0f8aep-64, 0x1.f5fa40c8c6dccp-312, 0.0, 0x1.9d6619e2a00d7p-648,
     0x1.9bdac5c1edccdp-375, 0.0, 0x1.de50ba75e2438p-300, 0x1.5cb8a46fd6b73p-894, 0.0,
     0x1.63b24464c5452p-782, 0x1.1dd57a1452b2ap-584, 0.0, 0x1.b3e8b0dcbec7ap-395,
     0x1.36f22d7564614p-188, 0.0, 0.0, 0x1.d775cf1a5afd7p-893, 0x1.25483aca88a4p-834,
     0.0, 0.0, 0x1.a43b0dd3c4486p-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65fd2d643f5bbp-163, 0.0, 0x1.7a29a96165c42p-280, 0x1.df7dd2f55dc06p-319,
     0x1.ecbd6e46c4cffp-486, 0x1.2da5899ffd98ep-72, 0.0, 0.0, 0x1.cb2a2c31c31cp-434,
     0x1.6e065902277eep-689, 0.0, 0x1.c02b3f775d05p-337, 0x1.28e89fcc5e0cdp-298,
     0x1.b775b366df6cfp-615, 0x1.d8dab9859a08cp-573, 0.0, 0.0, 0x1.6c9196beb0ebap-913,
     0x1.1122122774b1ap-203, 0.0, 0.0, 0x1.a856aec7d3658p-761, 0.0, 0.0,
     0x1.6ffa3138d8d9bp-506, 0x1.0a39e918a4354p-546, 0x1.c4e5939ff2a1p-532, 0.0,
     0x1.f9646fbbf4444p-358, 0.0, 0.0, 0x1.b106f06ce77f5p-54, 0.0,
     0x1.83b80e2127195p-70, 0.0, 0x1.566e2b06d24ap-669, 0.0, 0.0,
     0x1.e216b4e1a6c0bp-679, 0x1.2c24d5ed1de7dp-126, 0.0, 0x1.393e637d277e9p-350, 0.0,
     0x1.e6010aaaa0242p-655, 0.0, 0x1.f314aa89f185bp-987, 0.0, 0.0,
     0x1.72a490db6fd73p-577, 0x1.f3293c9f4fa18p-576, 0.0, 0x1.2195f0ac5a121p-299, 0.0,
     0.0, 0.0, 0.0, 0x1.a5918c6d8cbe2p-844, 0x1.a6db338af8889p-911,
     0x1.801d2f1ab2919p-131, 0.0, 0x1.9373b93ef4fcfp-635, 0x1.4550e59920fddp-304,
     0x1.25d6c66fa41b1p-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c89de0e08237p-294, 0.0, 0.0,
     0x1.fa87f71a45a3ap-367, 0.0, 0.0, 0x1.f7049fc9f769ep-845, 0.0,
     0x1.a54ebc38cb2ap-764, 0.0, 0.0, 0.0, 0x1.165e6658604f9p-925,
     0x1.cf9d9991d4aa6p-756, 0.0, 0.0, 0.0, 0.0, 0x1.48a7a5beb27cdp-948, 0.0,
     0x1.f2c2f5512105dp-832, 0x1.c9130df0609dbp-882, 0.0, 0x1.8691670b12538p-240,
     0x1.7b8626daf3a3ap-67, 0.0, 0x1.50173827f33cdp-734, 0.0, 0x1.1026a66d20e82p-896,
     0x1.1f0abcc7162cp-728, 0x1.274928b7c3368p-657, 0.0, 0.0, 0.0,
     0x1.3f7e310cee833p-523, 0.0, 0.0, 0.0, 0.0, 0x1.7248988a5f995p-883,
     0x1.e6c97d41c1dbdp-816, 0x1.aa6d2f92d83bdp-743, 0x1.4e9c42c8d63f8p-286, 0.0, 0.0,
     0x1.8a8e9196de9b7p-920, 0x1.f6d13b072e528p-776, 0x1.fd5d58cfa80cbp-946,
     0x1.3659d87beabcbp-521, 0x1.cd7aeefeeec83p-49, 0.0, 0.0, 0x1.8b17f6650b089p-372,
     0.0, 0x1.d7da234cb6e74p-247, 0x1.6f3ea9ae23bep-820, 0.0, 0x1.12bdac25f439cp-317,
     0.0, 0x1.78aea7a885a5fp-4, 0x1.bd6d72c69a6adp-438, 0x1.bf4bf157bc0e8p-715,
     0x1.521a14859a41ap-35, 0x1.641d25ff6bf78p-780, 0x1.5227fbd48daf6p-627,
     0x1.ee680ac3cd9bap-458, 0x1.00d6a5907c8afp-468, 0x1.d448304a7acdap-604,
     0x1.81f9cef739b2ap-96, 0.0, 0x1.36c603100987p-765, 0x1.8f71385888513p-153, 0.0,
     0.0, 0x1.c09178f2bdf62p-101, 0.0, 0x1.a63dbb0c86bfap-463, 0x1.a5f772cd53119p-515,
     0.0, 0.0, 0x1.2dbeec5845eb7p-535, 0x1.7ec70b4d129e9p-374, 0x1.7fc7a14a3a2fdp-643,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.feea9807e85dp-101, 0.0, 0.0, 0x1.10e9279bfc661p-998,
     0x1.2ba15b2532482p-168, 0.0, 0x1.a8b9e9e6ed326p-896, 0x1.f2a7d0d504bedp-918, 0.0,
     0x1.5cf3610d60b86p-691, 0.0, 0x1.b4e585ebda5a2p-971, 0x1.4d73fd80bfa69p-571,
     0x1.e4fac027f128ap-194, 0x1.ee48ef04cc126p-235, 0x1.beca72707397ep-832, 0.0,
     0x1.722227490d244p-337, 0.0, 0x1.ac55e333cd6f8p-466, 0x1.681354532ec2fp-685, 0.0,
     0.0, 0.0, 0.0, 0x1.09df8499a85d5p-442, 0x1.1845e0d6999dp-565, 0.0, 0.0,
     0x1.b66c0ebe65806p-767, 0.0, 0x1.c66adb8c955eep-821, 0x1.35c6ee49deaf9p-603,
     0x1.74063cbc21daep-478, 0.0, 0.0, 0x1.77d7da2c29c19p-151, 0x1.10f618a1666a2p-475,
     0x1.c2a2243d098ep-285, 0.0, 0.0, 0x1.e85c05a36e7a6p-478, 0x1.aa4f13bb906c5p-395,
     0.0, 0.0, 0.0, 0x1.589f1fc6c1beap-995, 0.0, 0x1.a0cf463a69fb4p-557, 0.0,
     0x1.711ad2c26592dp-71, 0.0, 0x1.83d8b2cd60b26p-424, 0.0, 0.0,
     0x1.4193c28caa20ap-331, 0.0, 0x1.aa66b1d3a4e96p-909, 0.0, 0x1.3171c82af9e3bp-976,
     0.0, 0x1.34ea1cd2a9d1p-602, 0.0, 0.0, 0.0, 0x1.b695b126ff82fp-136, 0.0,
     0x1.ab8bd528b4925p-140, 0.0, 0x1.5ef165383a663p-1021, 0.0, 0.0,
     0x1.e16ac8a330dfdp-603, 0x1.9a7a575450929p-430, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a06cc70e08435p-60, 0x1.f2a5b33d8d22p-380, 0.0, 0x1.f9022957f56a8p-306,
     0x1.75a1be2ea46cfp-733, 0.0, 0.0, 0x1.13fc6bd542e7ap-698, 0x1.5654cd7f00a1p-558,
     0x1.13ceb46b15426p-901, 0.0, 0.0, 0.0, 0.0, 0x1.819c86bbeb156p-850, 0.0,
     0x1.3127aa064bfafp-661, 0x1.4a014816256ep-126, 0x1.ffb7470a06942p-844, 0.0, 0.0,
     0x1.a33f7876a7f97p-758, 0.0, 0x1.ad62507e5cba1p-518, 0.0, 0x1.8c707e3c787f9p-528,
     0x1.27432f64f4719p-808, 0.0, 0x1.adeb077dce3fcp-810, 0.0, 0.0, 0.0, 0.0,
     0x1.41a54fa4ec755p-221, 0.0, 0x1.3a3592b01af07p-627, 0.0, 0.0,
     0x1.5609d0c767b92p-758, 0.0, 0x1.47c6f8de05683p-613, 0x1.6aab2dc4814f1p-201,
     0x1.b66e562ee1a22p-614, 0.0, 0.0, 0x1.58ebfdcf3277dp-517, 0x1.78240637187e6p-856,
     0x1.182fa055fee55p-211, 0x1.a8879215106f5p-563, 0x1.803182514b09bp-550,
     0x1.bc5deb3c43e6ap-801, 0x1.2408e1eab2db8p-534, 0x1.e61b5f3b8fad8p-914, 0.0, 0.0,
     0.0, 0x1.211f73cec5b82p-742, 0x1.e023360b8d4b8p-79, 0.0, 0x1.f50a4d4f5ba1ap-102,
     0.0, 0.0, 0.0, 0x1.cb14ad8a62316p-230, 0.0, 0.0, 0x1.93cf4355c2765p-260, 0.0,
     0x1.267eb01b288f4p-117, 0x1.1f8eb78080a62p-572, 0.0, 0x1.9c26c165e1e44p-1021,
     0x1.f55c75ffc6f3cp-211, 0.0, 0.0, 0.0, 0x1.fc04bdac3aac7p-673,
     0x1.22e1b794aee24p-450, 0x1.58b6fbefe4223p-160, 0x1.c6b914a323261p-973, 0.0,
     0x1.906bae887508ap-176, 0.0, 0.0, 0.0, 0x1.46d6619089e6p-675,
     0x1.27681ba2b5b4dp-969, 0x1.7529d6f74ac7p-845, 0.0, 0.0, 0.0,
     0x1.6de4b0ceb743ap-359, 0.0, 0.0, 0x1.4beb321c9ceedp-555, 0.0,
     0x1.85a76bb3fe03p-962, 0.0, 0x1.ee56aa04b1bd3p-358, 0x1.8b77d9cc1b8d6p-16, 0.0,
     0x1.d1b64973a5e16p-622, 0x1.5cfbf29c66225p-309, 0x1.f7bea1cc03039p-530, 0.0, 0.0,
     0.0, 0x1.eb49d12aa4247p-257, 0x1.d25288950b9d7p-673, 0x1.ebdc01cae6df7p-769, 0.0,
     0x1.735c412328283p-215, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40ec0234ca12ap-596, 0.0,
     0x1.e6bc506718b9ap-908, 0.0, 0x1.aa67d9bb559ep-542, 0x1.c26ce144feb32p-547,
     0x1.6bc6746fc5048p-293, 0x1.c8cf091e5cd69p-477, 0.0, 0x1.d811c5a8bbe38p-369,
     0x1.717a937d8885bp-722, 0.0, 0.0, 0x1.aa69013c14c37p-456, 0x1.235911b5feb2ap-72,
     0x1.fbfea6462695bp-805, 0.0, 0x1.01282124d9293p-887, 0.0, 0.0, 0.0, 0.0,
     0x1.7e4d45431008fp-54, 0.0, 0x1.6d147a3109bb6p-574, 0x1.76c0f6246a529p-165, 0.0,
     0x1.c8791d29b0e93p-643, 0x1.1c3be13b5b5a2p-685, 0x1.2cf94985f9e32p-680,
     0x1.67cede02deb04p-100, 0x1.a2661d1051f3ep-432, 0.0, 0.0,
     0x1.604a6145a604ap-1002, 0x1.662f7093e82b6p-36, 0.0, 0x1.2fb13186d8cd3p-65, 0.0,
     0.0, 0x1.0c8fda55d713bp-87, 0.0, 0x1.87dca7e54106p-648, 0x1.caa680925dce2p-880,
     0x1.d97421736d898p-306, 0.0, 0x1.28a32c5e96da2p-866, 0x1.4e51f6714c00dp-750,
     0x1.c808cee55e415p-982, 0.0, 0x1.0950b594e0295p-723, 0.0, 0x1.eac6c4582512ap-661,
     0.0, 0x1.970d8b16608e2p-726, 0.0, 0.0, 0.0, 0.0, 0x1.81f7aba6e0258p-260, 0.0,
     0x1.565e63dc7ed14p-729, 0.0, 0x1.20d0176675169p-412, 0.0, 0x1.a56d0335f4b86p-199,
     0.0, 0.0, 0.0, 0.0, 0x1.c6cd52c0c948ap-984, 0.0, 0.0, 0x1.7f4d3c11f510cp-635,
     0x1.798dc362a68c8p-89, 0.0, 0.0, 0x1.318a602468168p-176, 0x1.74a24ef54e342p-206,
     0x1.857135470e8eep-702, 0.0, 0x1.2d70c69621771p-456, 0.0, 0.0,
     0x1.a067743bd81cfp-614, 0x1.992a0bdcaa002p-28, 0x1.454ba3bcd054cp-588,
     0x1.01e282894755dp-873, 0.0, 0x1.f072f4e7d2f82p-755, 0x1.0d38f6212e948p-672,
     0x1.9d3b3879c3929p-973, 0x1.c7df07771e66p-886, 0.0, 0x1.95185c370072fp-371,
     0x1.2fff79af3261p-84, 0.0, 0x1.a5a72dffd3fc3p-291, 0.0, 0.0,
     0x1.64add0f733bbp-296, 0x1.4b049b7813651p-247, 0x1.8f3eae0850818p-666,
     0x1.18712e88f2f16p-85, 0x1.7dfa3c44c22ddp-64, 0x1.323072808d1e1p-515, 0.0,
     0x1.1634eb1cdd046p-405, 0.0, 0.0, 0.0, 0x1.df09e16ea2877p-891, 0.0, 0.0,
     0x1.a9ce843cf3938p-129, 0.0, 0.0, 0x1.86d1cf5548de5p-224, 0x1.3e78b07395ac8p-443,
     0x1.5d763dd5acb0cp-834, 0.0, 0.0, 0.0, 0.0, 0x1.5436c97b6ea3p-239, 0.0, 0.0, 0.0,
     0x1.ff926c91f9bf8p-431, 0x1.869348bb7ad8ep-191, 0.0, 0.0, 0.0,
     0x1.1ef30aeb19d1p-489, 0.0, 0x1.8ace9d3225b29p-272, 0x1.a9f9091cbb7a7p-60, 0.0,
     0x1.6048f6a5e693ap-523, 0.0, 0.0, 0x1.787de271046ccp-654, 0x1.2bf92063f5511p-883,
     0.0, 0x1.2a4aa1a3b0fccp-970, 0.0, 0.0, 0.0, 0.0, 0x1.9f31b2e722398p-982, 0.0,
     0.0, 0x1.64404fefdf3ccp-724, 0x1.ab58bfd406ba1p-1019, 0.0, 0.0,
     0x1.6c06d34e54942p-230, 0x1.17d6526dde2a5p-1022, 0.0, 0x1.03d7dbb4e7p-879,
     0x1.5eac9f6c7e0fdp-737, 0.0, 0x1.719c9b4ef066cp-338, 0x1.e2e8c6df6b85fp-434, 0.0,
     0.0, 0x1.a2d074c0e6fd2p-217, 0.0, 0.0, 0.0, 0x1.bbf3a20973b83p-603, 0.0, 0.0,
     0x1.8968674babe8ep-281, 0x1.0540b676a0411p-176, 0x1.5b7a6bd1552edp-894,
     0x1.cab2d79f6730fp-90, 0x1.b59e1e57895b2p-616, 0.0, 0x1.0c562bf8d4e4ep-182, 0.0,
     0x1.b155db8c5ced4p-1, 0x1.40586824637a4p-744, 0.0, 0x1.d556070cce499p-318,
     0x1.f06cf80c79e5bp-465, 0.0, 0.0, 0x1.5abbb3834b58ep-527, 0.0, 0.0,
     0x1.e40252bf87dd3p-358, 0.0, 0x1.ffdeeaf3e0623p-892, 0.0, 0x1.fc46ec34bf00ep-653,
     0x1.ac10b7499c0b5p-209, 0.0, 0x1.f346a42f2c4fcp-864, 0.0, 0.0,
     0x1.bfa8db24858e3p-659, 0x1.bd4db978be4fap-896, 0x1.a609bc87f51a8p-1003, 0.0,
     0.0, 0.0, 0.0, 0x1.422a826c03725p-749, 0x1.8cd1b82406609p-461,
     0x1.e8d9c45b48cd6p-563, 0.0, 0x1.743649f3fcf9dp-623, 0x1.af1891c5f6375p-534, 0.0,
     0.0, 0x1.68da4a76ded97p-333, 0x1.a95cf8bd6fcep-434, 0x1.83f49c75957d7p-151,
     0x1.434656991a51ap-128, 0.0, 0x1.e6f773507c407p-202, 0x1.3cc642a0e9a5bp-16,
     0x1.9dcdbbd607a65p-886, 0.0, 0.0, 0.0, 0.0, 0x1.16edd2d863e62p-282,
     0x1.e401a7f4d72bdp-781, 0x1.bb9f613d64d18p-148, 0.0, 0.0, 0x1.02cc8d45716aep-174,
     0x1.7cea6c5ee3b98p-386, 0x1.f05786e968cb7p-605, 0x1.4c6278ec850cbp-920, 0.0,
     0x1.c25c4e5fc8f28p-757, 0.0, 0x1.bdd6b28b4d5e6p-155, 0.0, 0x1.ed92ed3f5daf4p-331,
     0.0, 0x1.d3266b184ee46p-713, 0x1.c910165569f6ep-746, 0x1.3c67a1f8e48ddp-882, 0.0,
     0.0, 0x1.952d24ffb22bdp-368, 0x1.ebb1ba271737p-970, 0x1.186428866d1fdp-226,
     0x1.8370c97a0d05cp-738, 0.0, 0x1.ee41c00667a2dp-240, 0.0, 0x1.8e019f74ff827p-211,
     0x1.b5e46c1296babp-557, 0.0, 0x1.cf6a9c9d750a1p-724, 0.0, 0x1.0eba539df9361p-904,
     0x1.0b8e3d5cad26cp-89, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6a61bf33ad554p-590, 0.0, 0x1.34db4b18df61ap-888, 0x1.d544166c72e03p-772, 0.0,
     0x1.2ff0576bd1e02p-728, 0.0, 0x1.447a4eb67689cp-519, 0.0, 0.0, 0.0, 0.0,
     0x1.be070e560d25p-887, 0x1.d71acc72857c7p-376, 0x1.bbbafc993c5eap-501,
     0x1.904756d482033p-362, 0.0, 0.0, 0x1.fb5802fececdap-653, 0.0,
     0x1.da3215dd526a9p-243, 0x1.1da2cdcb6f7b7p-582, 0.0, 0x1.be3abbda54fcep-163, 0.0,
     0x1.303a78293db96p-554, 0.0, 0.0, 0x1.83fb9fee2407dp-174, 0x1.5e4d5e2f07964p-237,
     0x1.1e1fa6a5318e6p-526, 0.0, 0x1.1cc2f65659dfcp-983, 0.0, 0x1.5334ac1fcaed9p-796,
     0x1.de0c1b0582778p-971, 0x1.b063df35ca5cfp-139, 0x1.b42fbe1ea333cp-620,
     0x1.1248f40a3f72dp-16, 0.0, 0x1.611eb601681b1p-38, 0.0, 0x1.e1ad9829e19f8p-77,
     0.0, 0x1.747cdcbec1503p-911, 0x1.79bd30d32a78bp-431, 0.0, 0x1.e814113f624bep-879,
     0x1.035ad9f07c39ap-75, 0x1.fc08996b01cb7p-836, 0x1.3bb3d055d3fa9p-988,
     0x1.0389db35b42eep-333, 0x1.d9febf8b9459p-950, 0x1.4744e3ef05bd4p-29,
     0x1.7f908654dfa6ep-960, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.232cea9fc8b5cp-344, 0x1.8b387419b19b5p-908, 0.0, 0x1.b8f69f3cb07bep-332,
     0x1.7e64a797b0cd2p-48, 0.0, 0.0, 0x1.7c2953918e9a7p-515, 0x1.bd9c2a3c4980ep-554,
     0.0, 0.0, 0x1.694d6df52325dp-818, 0x1.03641da1f1721p-1021, 0.0, 0.0, 0.0, 0.0,
     0x1.24bf419a93453p-689, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80929ad412339p-438,
     0x1.5560272440f78p-589, 0.0, 0.0, 0.0, 0x1.2ac1bd1f58a99p-809,
     0x1.f2c733cc55834p-972, 0x1.13a2737be12a8p-217, 0.0, 0.0, 0x1.a1e1e5dfd7f3ep-722,
     0x1.a1c3905878c3cp-352, 0x1.fe37265139173p-524, 0x1.915443713d2ccp-941,
     0x1.cec6ebf8193e2p-603, 0x1.a78ecca5caa3cp-174, 0x1.4b7108dcfef9cp-144,
     0x1.40324511ec297p-642, 0x1.31f7b262ee255p-1015, 0.0, 0.0, 0.0,
     0x1.6fb542e0df7bep-802, 0x1.0c92452ddc5ffp-389, 0x1.94e557f46f28fp-28,
     0x1.2cc2250582dc9p-495, 0.0, 0.0, 0.0, 0x1.5e50f4126cd1fp-483,
     0x1.1c988a5585fb3p-207, 0.0, 0x1.d20272dbb514bp-717, 0x1.8e15f946871fep-385, 0.0,
     0x1.fb5007a4f672dp-516, 0x1.51b7c35578927p-707, 0x1.b6854dc3aac73p-848,
     0x1.b14651254ba27p-713, 0x1.5a66ddb3179aep-7, 0x1.ca7b441d7f2c6p-112, 0.0, 0.0,
     0x1.7e73ab5d3b85ep-899, 0x1.1a1973165bf29p-157, 0x1.67c214dbd80ddp-254,
     0x1.919b2b3e09f58p-386, 0.0, 0x1.429812077dd06p-724, 0x1.50dbd0e78a1a2p-997,
     0x1.0fe611ead2ec2p-994, 0.0, 0x1.71639aa144bbp-931, 0x1.773c8e6389e57p-141,
     0x1.c38155b623f0fp-473, 0x1.265ff3ec39acp-246, 0x1.38584ff124f51p-464,
     0x1.e603550cab225p-697, 0.0, 0x1.f3bf3a141d7ccp-719, 0x1.77a26134604aep-636, 0.0,
     0x1.75db35672c466p-889, 0x1.3555a60ddc878p-574, 0.0, 0.0, 0x1.a99a61f7dcf6dp-489,
     0.0, 0.0, 0.0, 0.0, 0x1.e70c3e1cf36cfp-475, 0x1.02a6125ba8dcp-1016, 0.0,
     0x1.de52f22a0a715p-1005, 0x1.4e609844c0c66p-668, 0x1.c74cbac926ea6p-298,
     0x1.7c53c32baab53p-124, 0.0, 0.0, 0x1.0f790d82e46d6p-701, 0.0, 0.0,
     0x1.ee12292259e21p-205, 0x1.fad901ccd5333p-924, 0x1.6e72379e65f6ap-105,
     0x1.d635159385401p-1002, 0.0, 0x1.5345f66b32bd3p-955, 0.0,
     0x1.60a7d5ff181a2p-276, 0.0, 0.0, 0x1.c869da605636ep-251, 0x1.cdac25832a163p-156,
     0x1.d575865bd70cbp-737, 0.0, 0x1.84c4286a8793bp-497, 0x1.5131ad5d2c642p-808, 0.0,
     0x1.cf6d08a60c873p-502, 0x1.c1ebed3f15349p-448, 0x1.02d9068638198p-404, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.24c57898bee8cp-783, 0.0, 0.0, 0x1.0ae24388d6f71p-217,
     0x1.5c341fe9361f6p-714, 0.0, 0.0, 0.0, 0x1.c1a6759eef254p-340,
     0x1.c20822fa1a731p-673, 0.0, 0.0, 0x1.d27e65686f623p-905, 0x1.d7e7cde8fc262p-763,
     0.0, 0.0, 0.0, 0.0, 0x1.218af73d0c525p-45, 0.0, 0.0, 0.0, 0x1.47b3d0e6f9dbp-841,
     0.0, 0.0, 0.0, 0x1.1b80f127cc795p-430, 0x1.3fee240eb216bp-212, 0.0,
     0x1.dd9cec899505ap-864, 0x1.2ad471fd34b9ap-487, 0.0, 0x1.2c890151c4c9fp-862, 0.0,
     0.0, 0x1.af2ccc97a4334p-695, 0x1.a52d96fc5034fp-484, 0x1.960cd8ec8468bp-305, 0.0,
     0.0, 0x1.5b40538556719p-432, 0.0, 0.0, 0x1.564ad21237a24p-404, 0.0,
     0x1.ce0464db4f346p-44, 0x1.d529a9f091faap-41, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84feefb79db83p-430, 0.0, 0.0, 0.0, 0.0, 0x1.0c9680b0976bcp-300,
     0x1.79a851fedc8b7p-653, 0x1.b35d5201a2d07p-219, 0.0, 0.0, 0x1.d3e5b16822f3ep-691,
     0.0, 0.0, 0.0, 0x1.a9dbe32223991p-881, 0.0, 0.0, 0x1.eda3aedb485ddp-521,
     0x1.74639ecc06e89p-454, 0.0, 0.0, 0x1.18dc34648134bp-637, 0x1.1f43c6b958d53p-16,
     0.0, 0x1.f33fd3ad096b5p-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d24b3e6f92p-939, 0.0,
     0.0, 0x1.1e04fc5aa589dp-37, 0.0, 0x1.bc91974ee38ffp-470, 0x1.dffcc4bb4db4ep-641,
     0.0, 0.0, 0.0, 0x1.162bea4fcda3p-815, 0.0, 0.0, 0x1.abcbfeb22f27bp-568, 0.0, 0.0,
     0x1.1a28af689c0e1p-87, 0x1.f41b473c2497bp-1004, 0.0, 0x1.6ebd3204230e7p-464,
     0x1.7a8e54a94c5ap-32, 0x1.d50fa9f8908e8p-450
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_tgammad2_u10avx2128(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_tgammad2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tgammad2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
