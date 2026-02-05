/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d2_u35avx2128.c --function \
 *     Sleef_finz_exp10d2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.15b26442deab9p-850, 0x1.f9f7883bbc5abp-540, 0.0, 0x1.b11ce6ff2c6bdp-210,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57199e3d4d664p-899, 0.0, 0.0, 0.0, 0.0,
     0x1.92e6c0e2d6f53p-821, 0x1.01b658be0d346p-495, 0.0, 0.0, 0.0,
     0x1.298e2af31a09ep-819, 0x1.133fde488310dp-413, 0.0, 0.0, 0x1.c449e523da37cp-862,
     0.0, 0.0, 0x1.b8419188f598fp-595, 0x1.6c77894832afcp-222, 0.0,
     0x1.e675c653bd06ep-56, 0x1.5edf10ba8974ep-958, 0x1.394f95fae0006p-991, 0.0,
     0x1.a1fb4da3f7d12p-430, 0x1.f671f9fa12704p-326, 0.0, 0.0, 0x1.4e3505c446ff7p-83,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.311dd60e575e2p-420, 0x1.e376e8937da07p-806,
     0x1.2609882fa2b1bp-795, 0.0, 0.0, 0x1.5bf4b7a229aa5p-861, 0.0, 0.0,
     0x1.efb2c9d8ec6d2p-216, 0x1.453b0eb7273cdp-628, 0.0, 0.0, 0x1.734a589321069p-615,
     0x1.b1701377c3948p-193, 0.0, 0.0, 0.0, 0x1.172db4174d89fp-693,
     0x1.edf47f7cb6672p-772, 0x1.3f59994435d4ep-955, 0.0, 0x1.f9b09651a2dfep-420, 0.0,
     0.0, 0.0, 0.0, 0x1.100238a34bfc4p-600, 0x1.1e643e5906edp-907, 0.0, 0.0,
     0x1.e661bb1e46261p-478, 0.0, 0.0, 0x1.1e342d98f75edp-655, 0.0, 0.0, 0.0, 0.0,
     0x1.29f7e60463e25p-850, 0.0, 0.0, 0.0, 0x1.c67e182890edp-936,
     0x1.e0466ac1a4d7ep-826, 0x1p0, 0x1.88c73449aa26ap-395, 0x1.2fc0e3f6d771fp-967,
     0x1.0396988af36f3p-54, 0.0, 0.0, 0x1.25da6002e87f3p-227, 0x1.775ab1996a386p-489,
     0x1.37cef264e9b49p-398, 0.0, 0.0, 0x1.9cf0394bc7276p-178, 0x1.272f830da454ep-766,
     0x1.024e14d78744p-33, 0.0, 0x1.47a87728c510ap-706, 0x1.bfa7f5cdd4d02p-319, 0.0,
     0.0, 0.0, 0.0, 0x1.0d564ca9404c5p-671, 0.0, 0x1.064245872a029p-490,
     0x1.28aa3b8333411p-626, 0x1.9998725f42f2bp-353, 0.0, 0.0, 0.0,
     0x1.1e7593d5dcff4p-914, 0.0, 0x1.f799d4237e198p-793, 0x1.3c570d7c2036fp-899,
     0x1.147cfbbb42c66p-663, 0x1.71449c0df799cp-752, 0x1.5512378091d26p-201,
     0x1.7584a10f0f7dfp-91, 0.0, 0x1.cc96ab336a091p-158, 0x1.977547ae4d2b7p-270, 0.0,
     0x1.4b52d6630da41p-78, 0.0, 0.0, 0x1.89337a3d7051ap-681, 0.0,
     0x1.b6585c8040f8p-439, 0x1.829746591f13ap-440, 0x1.222e5ca1215acp-446,
     0x1.8b59b021891fcp-377, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39d102e93006ep-775,
     0x1.d1340bfece8b9p-34, 0x1.30c07445c51fdp-51, 0.0, 0x1.231597d817cbp-248,
     0x1.fe9c45e212c5fp-549, 0x1.0c39b55e6d23ep-85, 0.0, 0x1.e0113e138d5eap-734,
     0x1.afcac6867168fp-96, 0x1.3fa3f5f0e661dp-87, 0.0, 0.0, 0x1.f61b99fcb4762p-174,
     0x1.702abf69792cfp-931, 0x1.0bcb09f8b5e68p-507, 0.0, 0.0, 0.0,
     0x1.975ac38e05b24p-372, 0.0, 0x1.baa6b43e2362fp-680, 0.0, 0.0, 0.0,
     0x1.f90a5f370361ap-573, 0x1.f90c06940aec3p-167, 0.0, 0.0,
     0x1.9dd1d459b5436p-1015, 0x1.429b3bb1ad46cp-215, 0.0, 0x1.8882b5dd5f3bap-521,
     0x1.bf8204f49a351p-699, 0x1.beed38b757dacp-442, 0.0, 0.0, 0x1.9dfa74e6b14e9p-978,
     0.0, 0.0, 0x1.c1f73b736119bp-493, 0x1.f6f08209e9d2cp-708, 0x1.7f222f4b26ba9p-625,
     0x1.8134d81b71b02p-115, 0x1.46fe90c29741cp-635, 0.0, 0x1.067c25305c556p-340,
     0x1.8ca263963dbd9p-1012, 0x1.991b59e489bbp-63, 0.0, 0x1.b9163df1a43acp-398, 0.0,
     0x1.2d459b6e2bc71p-333, 0.0, 0x1.b772d47f0b74ap-942, 0x1.d8261764d7152p-597,
     0x1.8e3f0c55339cap-567, 0x1.a0c801c5e328p-77, 0x1.5fbd26dfd342fp-239,
     0x1.63e961715d60ap-788, 0.0, 0.0, 0.0, 0x1.9631d1d992043p-592, 0.0,
     0x1.f5b56aae68946p-252, 0x1.c35eeeecbada8p-408, 0.0, 0.0,
     0x1.bd6f0cd8ed442p-1019, 0.0, 0x1.0e3e4a1913d17p-992, 0.0,
     0x1.07fd684b0a3b7p-245, 0x1.47a4f359e79cdp-468, 0x1.2ceaf10562dabp-832,
     0x1.b4ef3cc15c8cep-359, 0.0, 0.0, 0x1.79e3b6eea9b7ap-224, 0.0, 0.0, 0.0, 0.0,
     0x1.49c23ecdac011p-725, 0.0, 0.0, 0.0, 0.0, 0x1.30292f4ad4f74p-658, 0.0, 0.0,
     0.0, 0x1.590e3c9d739c2p-22, 0x1.395a78f54395dp-157, 0.0, 0x1.1a7e7a5439f65p-226,
     0.0, 0x1.2357dfd646418p-241, 0.0, 0.0, 0x1.490acdbfad2bbp-967, 0.0,
     0x1.bed38fa090b5ap-285, 0x1.2ac379e4eee02p-34, 0x1.85c3a9ac1ebf8p-113,
     0x1.d121062f82412p-1004, 0.0, 0x1.391106d682f9dp-487, 0.0,
     0x1.28526f5bb2e8ep-639, 0x1.e9b6448c79f3p-641, 0.0, 0.0, 0x1.f701ae848d427p-870,
     0.0, 0.0, 0.0, 0x1.e37cf38c14cd5p-168, 0.0, 0.0, 0x1.996df3c5f30adp-80, 0.0,
     0x1.f8f1607f5cc05p-84, 0.0, 0.0, 0x1.3a5ddcbb02d34p-303, 0x1.f6bf9a416e813p-321,
     0.0, 0x1.475dbca26dccdp-639, 0x1.cc3a6d01c1286p-976, 0x1.2c2af8d9596a6p-412,
     0x1.a6e54043ca3cfp-283, 0.0, 0x1.c4d57346dc279p-65, 0x1.ee45ef59f6471p-762,
     0x1.41a42d64e3fbp-980, 0x1.08ca58239cbbcp-245, 0.0, 0.0, 0x1.918be671952p-343,
     0.0, 0x1.82b2f65a834f2p-879, 0x1.d04758175922ep-879, 0x1.28d41b472fe31p-408, 0.0,
     0.0, 0x1.ba1561cbda19bp-480, 0.0, 0.0, 0x1.df324b15f289fp-318, 0.0, 0.0, 0.0,
     0.0, 0x1.7d02d0582077dp-303, 0x1.df1ef8112c1cp-203, 0.0, 0x1.7275a3ae66c66p-148,
     0.0, 0x1.7112b6625ebfap-197, 0x1.b46b339a21b1cp-835, 0x1.c9e0ac3cdb51ap-643, 0.0,
     0x1.66a5f59933fd8p-700, 0.0, 0x1.0300ef8d728b4p-246, 0x1.df2b16ecd3f38p-518, 0.0,
     0.0, 0x1.9cfffc75dd72dp-979, 0x1.90b01592215a5p-986, 0.0, 0.0,
     0x1.d49ad392ac764p-123, 0x1.d9ff04412b4fp-114, 0.0, 0.0, 0x1.adf94194656aep-952,
     0.0, 0x1.9942f5ff4f45ap-127, 0x1.f50c549f6de93p-962, 0.0, 0x1.4a59c05ce51fdp-593,
     0x1.1d0dadb352974p-846, 0.0, 0.0, 0x1.5fb5c2dff3854p-38, 0.0, 0.0,
     0x1.42fcf6745750bp-587, 0.0, 0.0, 0x1.9a54e034fdf3p-777, 0x1.4131964065fbep-967,
     0x1.d80ca1a5388ecp-644, 0.0, 0x1.2277d2de730acp-498, 0.0, 0x1.9c46edc9bac64p-818,
     0.0, 0x1.6bd54a231e4f3p-303, 0.0, 0.0, 0.0, 0.0, 0x1.bce70c1ba2d41p-413, 0.0,
     0x1.d7d10c955413ep-338, 0.0, 0.0, 0x1.033a5f4d9c977p-592, 0.0,
     0x1.6c815b79b78c6p-89, 0x1.5b34470651bdbp-426, 0.0, 0.0, 0x1.69709fa33c4e2p-44,
     0.0, 0.0, 0.0, 0x1.339678becfa89p-379, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87e308baeb263p-782, 0.0, 0.0, 0x1.df9f504e3766bp-465, 0.0,
     0x1.8cb75a2693f42p-477, 0x1.51dc7c473fa33p-227, 0.0, 0x1.4002d590826bfp-511,
     0x1.c3dd59db1ba28p-596, 0x1.d5453b4115bf1p-530, 0.0, 0.0, 0.0,
     0x1.c6337ea476c9fp-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb84b522555ddp-684,
     0x1.275d1fa03c927p-167, 0.0, 0x1.65a32b9ddacb8p-513, 0.0, 0x1.6fbbd09aa1b08p-435,
     0.0, 0x1.9bb28e583c7fep-841, 0.0, 0x1.8adb474231d09p-401, 0x1.5b3fe4cc9a5c2p-643,
     0.0, 0x1.73b06c1b2ec05p-426, 0.0, 0x1.31f72b5f480e3p-77, 0x1.2e54c052f158dp-486,
     0x1.a91598df528aep-801, 0x1.2575f405433f9p-745, 0x1.f324f85761512p-61, 0.0, 0.0,
     0x1.8899b11da10a4p-465, 0x1.3df4e2b1827f2p-744, 0x1.bb257af97c936p-867,
     0x1.cb08fc8ac712ep-590, 0x1.2f54bb025dfd1p-549, 0.0, 0x1.b7da05d629c41p-427, 0.0,
     0.0, 0.0, 0x1.e9b73dfc0721p-430, 0.0, 0.0, 0x1.db22c618f0281p-912,
     0x1.2dd1fb1c650d6p-138, 0x1.97db106e9d1dap-13, 0.0, 0.0, 0.0, 0.0,
     0x1.387f492693d68p-568, 0.0, 0x1.87405dbb779aep-88, 0x1.a49d700b678e2p-248, 0.0,
     0.0, 0x1.91c5193217d86p-999, 0.0, 0.0, 0x1.4412e2f8a7ee7p-945,
     0x1.5ffbe25a2e5c3p-913, 0x1.81a2ff50b880ap-819, 0x1.5aed73e6199f6p-934,
     0x1.532ce0f81de6fp-950, 0.0, 0.0, 0x1.6914dac037b11p-9, 0x1.034a22fff96c4p-76,
     0.0, 0x1.b66d1f18dcb03p-548, 0.0, 0.0, 0x1.06bcb3e685da4p-849, 0.0, 0.0, 0.0,
     0.0, 0x1.978a8ade4a2a5p-389, 0.0, 0.0, 0x1.881428d3e69a9p-53, 0.0,
     0x1.95e2317a46452p-110, 0x1.2e49ce7dac967p-425, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45246d054d93dp-783, 0.0, 0x1.198a95a0157a9p-351, 0x1.7f0cafbdc7ac3p-588, 0.0,
     0x1.a1fb1f0293c5p-2, 0.0, 0x1.fc3cb376f5af3p-223, 0.0, 0x1.dab0b5f84f21dp-978,
     0.0, 0x1.1f58b68635061p-406, 0.0, 0.0, 0.0, 0x1.2788858be78f1p-180, 0.0, 0.0,
     0x1.a411474df592dp-991, 0.0, 0.0, 0x1.9958630a8336cp-932, 0x1.da3b90d538795p-846,
     0.0, 0.0, 0x1.4409773bb418bp-709, 0.0, 0.0, 0.0, 0x1.e62bf2774df63p-915,
     0x1.09de8b6434e15p-745, 0.0, 0.0, 0x1.c430ba9725dc5p-433, 0.0, 0.0, 0.0, 0.0,
     0x1.1144b19972b84p-34, 0x1.40fa730e228p-780, 0x1.6292367f9e9eep-359, 0.0,
     0x1.3ab6cf9525555p-40, 0x1.694aa428059cfp-92, 0x1.5e7b36ac6a8aap-301,
     0x1.f2e52ff3c30b3p-347, 0x1.58fff228d097bp-238, 0x1.0b2e3c53a5ee2p-380, 0.0, 0.0,
     0x1.cc3f4e16977fep-89, 0x1.b416ef5a0427ep-807, 0x1.9f62f33459cb9p-247, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.66ec017958051p-369, 0x1.2f3e23d9a6bddp-379,
     0x1.c82537406453cp-526, 0.0, 0x1.ae127b6eed1dbp-370, 0x1.56c7c29198566p-597,
     0x1.4f0083dd77106p-189, 0.0, 0x1.e2a4043ad6f2cp-358, 0.0, 0x1.eff7af405bebcp-414,
     0x1.c0c58f8acfbacp-924, 0x1.8b96d13570b1bp-446, 0.0, 0x1.a498c455c6153p-474,
     0x1.984dd26230a2ep-816, 0.0, 0.0, 0.0, 0x1.9ea7a6ae85f26p-208, 0.0,
     0x1.3d7c23d7fe985p-564, 0x1.bb4cf938cb609p-808, 0x1.45f9fd1fed37p-854, 0.0, 0.0,
     0.0, 0x1.9a4d68a57cb1p-265, 0.0, 0.0, 0.0, 0.0, 0x1.008a5bab39af2p-107,
     0x1.83bf332ebc907p-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99d710ec0996p-850,
     0.0, 0.0, 0.0, 0x1.78b7ef27841fcp-690, 0.0, 0x1.03b7a1ac968f9p-582, 0.0,
     0x1.a558d89456fc1p-6, 0x1.73d7646349289p-621, 0.0, 0.0, 0x1.77b6c643f52b9p-848,
     0.0, 0.0, 0x1.f8a82e2b76d7p-708, 0.0, 0.0, 0x1.ed6dac3c285ap-782,
     0x1.b9d2a5461ff68p-555, 0x1.f52ee84b30e1p-45, 0.0, 0.0, 0x1.f0eff18e6c84cp-420,
     0x1.49e379da36a85p-772, 0x1.162b47606903ap-789, 0.0, 0.0, 0.0,
     0x1.19449f0ef1831p-655, 0x1.47065da519faep-514, 0x1.98b283f380908p-712,
     0x1.d010f0d711ef3p-87, 0x1.420dc154dd43p-944, 0.0, 0x1.be998efb53c1fp-460,
     0x1.71e64a51a0257p-153, 0.0, 0x1.db0306c289fedp-851, 0.0, 0x1.b121868e8730fp-854,
     0x1.053ed7c6f16eep-983, 0x1.c15c4de5c41efp-616, 0.0, 0.0, 0x1.4e0e54ae420d9p-683,
     0x1.4f7e8c33f5089p-882, 0.0, 0.0, 0.0, 0x1.6c8c0fed3a9afp-942,
     0x1.4dbd94b7edaecp-935, 0.0, 0x1.e18950aff094cp-545, 0.0, 0.0,
     0x1.548eab66398cdp-46, 0.0, 0x1.8e6e25a85e8bp-269, 0x1.a8e8911aaa5b7p-581,
     0x1.9a465d560bd11p-628, 0x1.c11299b6e87d6p-210, 0.0, 0x1.3daa4c140acbp-585,
     0x1.2da18bf84cbeep-961, 0x1.1369f6203a9b4p-8, 0x1.d1c29a2c1445ap-716, 0.0, 0.0,
     0.0, 0x1.95280294fbdafp-203, 0x1.ccc603b94fcbap-383, 0x1.841d70d7f85f8p-848, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.20fadffd90d7dp-688, 0x1.86db0209d6198p-255, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.67978fa9bb3c4p-107, 0x1.53eb99511bb97p-567,
     0x1.e9d12d1fc47c7p-339, 0x1.aca828cda1179p-394, 0.0, 0x1.b193e6a496fa5p-249,
     0x1.6dada287c2014p-93, 0.0, 0x1.41fa0f3c6191bp-1000, 0x1.c5f7ccda3b09cp-431,
     0x1.7697197c1fb33p-934, 0x1.6880aa39b3e24p-997, 0.0, 0x1.7d6243cb520a4p-547,
     0x1.1c8d523132facp-618, 0x1.b868111079577p-215, 0.0, 0x1.78f467edbd28fp-464, 0.0,
     0x1.ccd5c5d372d16p-49, 0.0, 0.0, 0x1.9431e28e93365p-620, 0.0,
     0x1.3b6828903ecbcp-94, 0.0, 0x1.231ced2163e7cp-146, 0x1.bcb1da45d9ea3p-904, 0.0,
     0.0, 0.0, 0.0, 0x1.be8f2dd73bb35p-871, 0.0, 0x1.122d63a8c91f8p-866, 0.0,
     0x1.5502573a74c1p-569, 0.0, 0x1.d3f966d7052c6p-932, 0x1.755881481d355p-138, 0.0,
     0x1.7da066c07c2b6p-766, 0.0, 0x1.250a8a8323567p-594, 0.0, 0.0, 0.0, 0.0,
     0x1.41748f5364dfp-945, 0.0, 0.0, 0x1.792b3e344c2ddp-282, 0.0, 0.0,
     0x1.870ab6a4fde44p-733, 0x1.d02fff96ad276p-65, 0x1.f5cdefe36eab7p-914, 0.0,
     0x1.552b05840e2d6p-145, 0x1.786f40d5a661fp-979, 0x1.5bb592725bfefp-497,
     0x1.1037b82480d28p-884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c8534bd8f3dcp-646, 0.0, 0.0, 0x1.ca97a6ed5164cp-377, 0.0,
     0x1.3b4a0cc7148b2p-192, 0x1.d728e0a75819ap-824, 0.0, 0.0, 0.0,
     0x1.c86981cb26f36p-761, 0x1.64c121da273adp-609, 0x1.8d4a93eaaa767p-440, 0.0,
     0x1.95d3e120e7742p-6, 0x1.4fe6300741ee1p-70, 0x1.4216b06388ad6p-968,
     0x1.be923251fe32bp-500, 0.0, 0.0, 0.0, 0x1.34b7640ae3e58p-6,
     0x1.358c714c33f09p-207, 0x1.8779ce63db6cfp-171, 0x1.9808dceb745b5p-876, 0.0,
     0x1.5e08d395ba62bp-172, 0.0, 0x1.827912961dce3p-427, 0x1.cc970b880320cp-416, 0.0,
     0x1.42fe336e57425p-986, 0.0, 0x1.bf86888c37d13p-491, 0.0, 0.0,
     0x1.7c8946b3c1665p-452, 0x1.7377cd569e3bep-930, 0x1.b60dcc078a5c7p-379,
     0x1.a84365168b882p-996, 0.0, 0x1.4a96278bfc95p-111, 0x1.4b9db35ee401dp-832, 0.0,
     0.0, 0.0, 0x1.2552ffa06910cp-893, 0.0, 0.0, 0x1.b5dcd2e99a5cp-294,
     0x1.77df5c6aa52fp-582, 0x1.6fd854dd39a44p-368, 0.0, 0.0, 0x1.d4460d5795e16p-11,
     0.0, 0x1.6ca19f9dc20eep-233, 0.0, 0.0, 0x1.a1bccd9d5d42ep-669, 0.0, 0.0, 0.0,
     0x1.537811cd494efp-131, 0x1.8d798a494b6a5p-835, 0x1.25ad14b96248dp-650, 0.0, 0.0,
     0.0, 0x1.98e83f528c896p-134, 0x1.d3d8cb02e8e29p-292, 0x1.6435c043d999dp-18, 0.0,
     0.0, 0.0, 0x1.eeeefb9e758fap-364, 0.0, 0.0, 0x1.d424f290de9cap-539, 0.0,
     0x1.d6c1abacd8885p-548, 0x1.6e34309d2ecf5p-382, 0.0, 0x1.a8c7f9db52175p-235, 0.0,
     0x1.da3cad00ee793p-374, 0.0, 0.0, 0x1.84d007d08ea12p-354, 0.0, 0.0,
     0x1.3ccaf558ed9aep-863, 0x1.1029fc2765d32p-382, 0.0, 0.0, 0.0, 0.0,
     0x1.b2eea41862e4ap-659, 0.0, 0.0, 0x1.225c4da5a394fp-256, 0x1.5fadc98357d5cp-489,
     0x1.ad9f78044a20ap-229, 0.0, 0.0, 0x1.468b32c3595f2p-468, 0x1.bbf8c0138a864p-77,
     0x1.3b7da3d9cb3b3p-211, 0x1.ef816498d65dcp-954, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2fd56bb08245dp-399, 0x1.795f4fbec1735p-227, 0.0, 0x1.d1a7d63f14623p-730,
     0x1.b57053408a156p-410, 0x1.a9baee8ac0c65p-877, 0x1.f778c353b3e0fp-35, 0.0,
     0x1.a911ef1bf8ce9p-589, 0x1.b0abcf4bc60b9p-743, 0x1.cc5ce85b40414p-677, 0.0,
     0x1.59edd65ce09b1p-728, 0x1.2b2caa09dcdfep-847, 0.0, 0x1.64fc051ccf322p-213, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.91097908841fp-594, 0x1.29a166323b149p-858, 0.0, 0.0,
     0x1.3488b14c5cfe6p-432, 0x1.2371afbd1bdf4p-75, 0.0, 0x1.6e697cb4f5746p-427, 0.0,
     0.0, 0.0, 0x1.54fd393888b9bp-979, 0.0, 0.0, 0x1.fdd5c43bbec3bp-858, 0.0, 0.0,
     0.0, 0.0, 0x1.9c9e520be15b6p-874, 0x1.d810cd87d23bp-760, 0.0,
     0x1.7af80810abe7dp-874, 0.0, 0x1.0e2024d1d6aa7p-515, 0.0, 0.0,
     0x1.54b2ee4cb05d4p-113, 0x1.5faef30ef6badp-961, 0.0, 0.0, 0.0,
     0x1.9ce1378c6171cp-31, 0x1.33a2807523b59p-604, 0.0, 0.0, 0x1.4ace3753aa426p-376,
     0x1.80039c59eeb2p-660, 0x1.ff995573cd7dep-355, 0.0, 0x1.2c2202a71ca99p-478,
     0x1.80e1097c06f9ep-969, 0x1.3ee4c79c6c0afp-479, 0x1.4341363b10515p-961, 0.0,
     0x1.581bc423cffeap-980, 0.0, 0.0, 0x1.66393b5504901p-140, 0x1.f0309a0b9b39fp-919,
     0x1.ee2c0cfc5fba5p-510, 0x1.57bffef06323dp-481, 0.0, 0x1.90d6c50f338fep-441, 0.0,
     0.0, 0.0, 0x1.1a0485492458bp-519, 0x1.0b20f0c6f2b0bp-543, 0.0, 0.0, 0.0,
     0x1.15311b828a7f4p-313, 0.0, 0.0, 0x1.8c8af663c0b45p-583, 0.0,
     0x1.eaeee45147432p-866, 0x1.b1c99fe9a8da4p-1016, 0.0, 0x1.5dfb21ac2df4p-875,
     0x1.6d89f31a2d0b5p-117, 0x1.5b2245219b1d3p-565, 0x1.87a62a2f683fcp-293, 0.0, 0.0,
     0.0, 0x1.bdcc19bf5b5efp-264, 0x1.4e1865e0e8c5fp-306, 0x1.398d69212e474p-310, 0.0,
     0x1.75767dd7d53b8p-382, 0x1.1e81ea1c41c4ap-591, 0.0, 0.0, 0.0, 0.0,
     0x1.b3a20c8430659p-546, 0.0, 0x1.0fb957e1ef8c6p-809, 0.0, 0.0, 0.0,
     0x1.83f7d3c7f8f98p-42, 0.0, 0.0, 0.0, 0x1.b1d755c6c099bp-638,
     0x1.962a2b23cc36p-510, 0.0, 0x1.4cc3c48c0ea59p-670, 0.0, 0x1.ed775e6c6c2b7p-637,
     0x1.a95e0e02ba815p-80, 0x1.75dbbbd632b9ap-279, 0.0, 0.0, 0x1.8e11b9714995ap-866,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2d9acf367a6ap-321,
     0x1.889f364b5a23cp-808, 0x1.dca86669509fap-779, 0.0, 0.0, 0.0,
     0x1.32afcf74bf4e5p-317, 0.0, 0.0, 0.0, 0.0, 0x1.3f347d3a2d06p-900, 0.0,
     0x1.3fd9a7c179087p-654, 0x1.60bc799d7da65p-574, 0x1.cb592417b9582p-479, 0.0, 0.0,
     0x1.27093836979e1p-549, 0x1.309c666c287fdp-208, 0x1.c59e341f7688ep-14, 0.0,
     0x1.c2fed6c758702p-170, 0.0
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
            tmp1 = Sleef_finz_exp10d2_u35avx2128(tmp0);
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
    printf("Sleef_finz_exp10d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp10d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
