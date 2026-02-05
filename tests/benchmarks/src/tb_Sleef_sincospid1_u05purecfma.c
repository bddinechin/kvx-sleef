/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid1_u05purecfma.c --function \
 *     Sleef_sincospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.6a9ceef98b7fp-409, 0.0, 0x1.71e33a55e010ep-613, 0.0,
     0x1.edd327d41c887p-53, 0.0, 0.0, 0.0, 0x1.054e84fcedbd5p-530,
     0x1.c1caa6a701288p-181, 0x1.f089240a6db53p-580, 0.0, 0.0, 0x1.40752134c92fbp-194,
     0.0, 0.0, 0x1.c24f50c41442fp-588, 0.0, 0x1.fa3071a59b5fep-297, 0.0,
     0x1.a7693fe315721p-353, 0x1.4fa96ace8ed65p-67, 0.0, 0.0, 0x1.db870045d19ddp-943,
     0.0, 0x1.02d5f27c84dc6p-689, 0.0, 0.0, 0.0, 0.0, 0x1.5bad0cec49118p-195,
     0x1.4126f6e13ec12p-7, 0.0, 0.0, 0x1.fb8f12cfee40ep-820, 0.0,
     0x1.e7026e0c6555p-285, 0x1.c25aec1e1a802p-81, 0x1.2ea6498794171p-617,
     0x1.d20de9c3fdeb4p-615, 0x1.e876ca936e146p-606, 0.0, 0.0, 0x1.ae3498e7da255p-996,
     0x1.21bc4e945851bp-20, 0x1.0dc9cbd743c17p-919, 0.0, 0x1.ffa8154d635eap-700, 0.0,
     0.0, 0.0, 0.0, 0x1.2169423bc2347p-888, 0x1.97aee63712c6dp-4,
     0x1.d0f89bdb4ab8dp-936, 0x1.4650572e727adp-935, 0x1.14a3ac00b9771p-948, 0.0,
     0x1.8010255081b54p-632, 0x1.c121952b484d2p-435, 0x1.e828ca92a4805p-547, 0.0, 0.0,
     0.0, 0.0, 0x1.4d0078112a387p-78, 0.0, 0x1.6a027ae9e48acp-1003,
     0x1.a112ae2096c56p-487, 0.0, 0.0, 0x1.ab4f4d67d9fc1p-373, 0.0, 0.0, 0.0,
     0x1.dfce3ff61ae55p-366, 0.0, 0.0, 0.0, 0x1.9b287de21f3dap-751,
     0x1.2df35e8ffaf5fp-402, 0.0, 0x1.47c895cb3531ep-715, 0x1.6fa9b81080a61p-384,
     0x1.7e0ef20d77454p-272, 0x1.e6d16710826b1p-879, 0x1.a10e6148de695p-501, 0.0,
     0x1.3f21f601ba763p-1, 0.0, 0.0, 0x1.4d1685b70a637p-168, 0x1.d3a9e49cea554p-410,
     0.0, 0.0, 0x1.9b3be98ee323ap-331, 0x1.ec6c4d316a4bap-457, 0x1.119da847145cbp-666,
     0.0, 0x1.d0e2fa0e44252p-119, 0x1.f9dabf853fc87p-209, 0.0, 0.0, 0.0, 0.0,
     0x1.b0debe1e3ac96p-983, 0.0, 0x1.5d8a468b82bf1p-471, 0.0, 0.0,
     0x1.ef9ee9ecdee44p-56, 0x1.8516c3686e9b2p-20, 0.0, 0x1.47bbaeb2529b1p-150,
     0x1.57bd70af9e176p-541, 0x1.750ad2379723ap-871, 0x1.9a424d09a2cfep-462, 0.0, 0.0,
     0.0, 0x1.9a4f7f0902916p-798, 0x1.db3d9b755ad21p-778, 0.0, 0x1.24fc7f5ef2fbep-772,
     0x1.c1b09a2da28dfp-862, 0x1.325f6057226dap-194, 0.0, 0.0, 0x1.4df7251a35e89p-776,
     0.0, 0x1.c7bda6bdf0453p-318, 0.0, 0x1.a457fc3a8b4e9p-925, 0.0, 0.0,
     0x1.c40bc52022073p-331, 0.0, 0.0, 0x1.a44faaf9732a1p-493, 0x1.f78c5472bfe46p-589,
     0x1.a773cfea08d4p-133, 0x1.068fca114478ap-578, 0x1.35348c97a4279p-756, 0.0,
     0x1.cbd7c6bd5b6cdp-560, 0x1.7aa54136fddbep-729, 0.0, 0.0, 0x1.311a593930479p-656,
     0.0, 0.0, 0.0, 0x1.0784852048fb2p-151, 0.0, 0x1.835da4205f304p-590,
     0x1.bb19ccec46d06p-986, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d76be6907b853p-165,
     0.0, 0.0, 0.0, 0.0, 0x1.5c5567c830983p-510, 0.0, 0.0, 0x1.43b4d796fb17p-287, 0.0,
     0x1.c6faf71f12bd8p-14, 0x1.218887d47fa21p-337, 0x1.4d325fec2761p-668, 0.0,
     0x1.8fcf10624254fp-639, 0x1.1c6a1699c3634p-140, 0.0, 0x1.6cb9004986804p-303, 0.0,
     0x1.b4ff08d34d515p-526, 0.0, 0x1.ae435ef5b2a09p-113, 0.0, 0x1.76d13090602cfp-432,
     0x1.8edd7e7948b82p-681, 0.0, 0x1.3436087bd0151p-922, 0.0, 0.0,
     0x1.1797c8838faabp-985, 0x1.7e61eb7a6ff52p-764, 0x1.2b9b9f3aa49d8p-197,
     0x1.76025050461a2p-161, 0.0, 0x1.a17c3ce5d1d9p-389, 0x1.325fdba4ef98bp-157,
     0x1.f6cfb8c5696bcp-964, 0.0, 0.0, 0.0, 0x1.01dbfcb928bfp-64, 0.0,
     0x1.459b8c505e7afp-637, 0x1.ea514ea66baf3p-468, 0x1.a951c5589c72p-381, 0.0,
     0x1.fc14e9889d745p-69, 0.0, 0.0, 0.0, 0x1.9227cf635a60cp-980, 0.0,
     0x1.95b2d6b3fe587p-928, 0.0, 0.0, 0x1.16cdb58c63b38p-660, 0.0, 0.0, 0.0,
     0x1.b7c77456079ccp-365, 0.0, 0x1.bea310b2daba5p-844, 0x1.28b9bfd0494c3p-523,
     0x1.f7c4637067973p-647, 0x1.d798bf940426dp-884, 0x1.3e03581e2b9f4p-890, 0.0, 0.0,
     0.0, 0x1.5b42dce50afcdp-460, 0.0, 0.0, 0x1.4cdb82cc3c78dp-718, 0.0,
     0x1.d82abc7ac997p-664, 0x1.5036a8de6e138p-514, 0.0, 0x1.be064b618e1fbp-876,
     0x1.630f360fe002ep-756, 0x1.bdb5959d1d73p-425, 0.0, 0.0, 0.0,
     0x1.8ebdfa63c0805p-960, 0x1.e1a417b9bfab1p-96, 0x1.693c19f45e463p-671, 0.0,
     0x1.1393980f676f4p-178, 0.0, 0x1.90f78b9ea14bbp-299, 0x1.6ccb8e410e3e1p-138,
     0x1.108e10e46305cp-378, 0x1.e9605a426b79ap-101, 0.0, 0.0, 0.0,
     0x1.448cfd6f0de19p-956, 0.0, 0x1.e2e77953d059cp-339, 0x1.a3f1fddfd075p-410, 0.0,
     0x1.66de0a894f8dep-966, 0x1.e7659186e8e71p-23, 0.0, 0.0, 0x1.267b726240229p-470,
     0x1.416084b9d26dp-195, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92fd877ccd123p-986, 0.0, 0.0,
     0.0, 0x1.1fbe3c6aab098p-589, 0x1.8506cd4683ddcp-876, 0x1.8c0307e261034p-875,
     0x1.1aeaba52563b4p-181, 0.0, 0x1.7dad3aca82c3ap-761, 0x1.665b0e69a12bcp-204, 0.0,
     0.0, 0x1.4fec794f9a201p-91, 0.0, 0x1.ea243677d9f0dp-455, 0x1.e5542806c7889p-817,
     0x1.a2d43e626e7d4p-766, 0.0, 0x1.39cd9e9b20288p-484, 0x1.ba8d86370d0a9p-304,
     0x1.ef5f80c95f311p-520, 0.0, 0x1.8a381ebab9ddbp-657, 0.0, 0x1.d66b84ea09b9fp-123,
     0.0, 0.0, 0.0, 0x1.016abeb92d4p-395, 0x1.753bbe9c2a03dp-300,
     0x1.d4a539c60959bp-78, 0x1.a125cb699b3c3p-626, 0x1.b21bbe892df82p-160, 0.0, 0.0,
     0x1.87b6f008cabd2p-630, 0.0, 0x1.65f2625b69a6dp-802, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d34352a9881bap-809, 0.0, 0.0, 0x1.929de5e6db5cep-384, 0x1.06903e6964e38p-409,
     0x1.f7be71ea097c3p-801, 0x1.01053e076c9a2p-999, 0.0, 0.0, 0x1.69429a858a2ecp-733,
     0x1.6b9a7e137fa1cp-560, 0.0, 0.0, 0.0, 0x1.861fc8b323488p-460, 0.0, 0.0, 0.0,
     0.0, 0x1.f56c8b51ed24p-863, 0.0, 0.0, 0x1.e05f4fccb421dp-92,
     0x1.c9bf5d9e3a0a7p-234, 0.0, 0.0, 0x1.8f001f11860c3p-289, 0.0,
     0x1.089d11f1f90cdp-371, 0.0, 0x1.70a1651df299ap-538, 0x1.8c396967cc402p-383,
     0x1.2d0280a27f256p-716, 0.0, 0x1.9e05fb9583f54p-288, 0.0, 0x1.231966dc0e92cp-916,
     0x1.eb606e8ad512ep-840, 0x1.c9058e121557dp-961, 0.0, 0x1.463c9f148399dp-610,
     0x1.2ad7911ef7029p-757, 0.0, 0x1.bcd63120bc82bp-377, 0.0, 0x1.c153c90520cd3p-112,
     0x1.a3b3c5c05916fp-399, 0x1.3500f1748673p-687, 0x1.a15e4404ecf59p-440, 0.0, 0.0,
     0.0, 0.0, 0x1.7da492475b974p-536, 0x1.5a05896bb14cp-584, 0.0, 0.0,
     0x1.7a4deb890c3fcp-806, 0.0, 0.0, 0.0, 0x1.d1cb589ffd669p-358, 0.0, 0.0, 0.0,
     0x1.1690f606f87bap-530, 0.0, 0x1.89b515f9a259cp-265, 0.0, 0.0,
     0x1.c630d751facdep-816, 0.0, 0.0, 0x1.c79a62cbac4dp-544, 0.0,
     0x1.e4bf3699e8484p-428, 0x1.0f957a0a8d36bp-160, 0x1.399efa6b8aep-617, 0.0,
     0x1.15610ead2c611p-729, 0x1.84694e839bf32p-668, 0.0, 0.0, 0.0, 0.0,
     0x1.f125defa0e07dp-372, 0x1.b9da7bca943a8p-895, 0x1.46e94f2c4eaefp-651, 0.0, 0.0,
     0x1.869b7925e40b9p-341, 0.0, 0x1.82aced2b8425bp-554, 0.0, 0x1.dd534fa534099p-760,
     0x1.d51f03cec4b5fp-350, 0.0, 0x1.b6b77db7f854cp-840, 0.0, 0x1.070c45c55039ep-284,
     0x1.3fcaa58379c7p-971, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce4465c5d85bep-85, 0.0,
     0x1.08515829392c3p-577, 0.0, 0x1.2fe9316d47f9cp-360, 0x1.0187a2a6fa0a9p-719, 0.0,
     0x1.a5eb0a085e6a1p-15, 0x1.1d228305b638cp-443, 0x1.09192ee565276p-508, 0.0, 0.0,
     0.0, 0.0, 0x1.6c0ac29dbbab1p-720, 0.0, 0.0, 0.0, 0.0, 0x1.6db4dc91415e6p-157,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d70fb1b507dp-1012, 0x1.e9648f90c812p-266, 0.0, 0.0,
     0x1.0525c969d7614p-102, 0.0, 0x1.49949a7a6a98fp-489, 0.0, 0x1.808d5fd67895cp-86,
     0x1.6cfde6530fd06p-609, 0.0, 0.0, 0x1.f3a33bfba2c3dp-921, 0.0, 0.0, 0.0,
     0x1.8ed81b9b4eaadp-117, 0.0, 0x1.8630b8a3a1856p-951, 0.0, 0.0,
     0x1.52b72107616dbp-9, 0x1.4734d4f25a24p-622, 0x1.95ec12b661c5ap-280,
     0x1.c1754a099e9cep-827, 0x1.44ba17b9c71a9p-307, 0x1.8793faacc4bcep-220, 0.0,
     0x1.46010105f118dp-199, 0x1.c2876868d9ed5p-313, 0.0, 0.0, 0.0, 0.0,
     0x1.ef1dbd99efd9dp-415, 0.0, 0.0, 0.0, 0x1.138b910d63154p-597, 0.0,
     0x1.cde5e8ef719ddp-912, 0.0, 0x1.5b0a3f63d229ep-896, 0.0, 0.0, 0.0,
     0x1.d0920823f5e4ap-22, 0.0, 0.0, 0.0, 0x1.8466a7db0073ep-909, 0.0, 0.0,
     0x1.e5f05beec0647p-608, 0.0, 0x1.c12877e32532ep-818, 0x1.b81577bf2f307p-963, 0.0,
     0.0, 0x1.029794e8815fap-3, 0.0, 0.0, 0x1.ac396ccaead5ap-539,
     0x1.d5ffa5bb5e934p-390, 0x1.7dafd90524779p-708, 0.0, 0.0, 0.0, 0.0,
     0x1.08dc74244f27ep-618, 0x1.446a079e4013ap-538, 0x1.0d90afbfd4e2fp-991, 0.0,
     0x1.2760dac90bcb4p-915, 0.0, 0x1.592663f330dbep-333, 0x1.0c3596c8db319p-56,
     0x1.83b754ba0de5bp-648, 0x1.f9f3bcd02b348p-434, 0x1.33d7b4a35fd3cp-944,
     0x1.5452e5c76e55bp-255, 0x1.832e5ca2ff3eap-321, 0.0, 0x1.07af9b43d4eeap-87, 0.0,
     0.0, 0x1.583016929221bp-423, 0.0, 0x1.5a9d203daa117p-764, 0x1.f5bf33675ac98p-579,
     0.0, 0.0, 0x1.076dc8c0b4f3bp-675, 0.0, 0.0, 0x1.d42904ef7d26p-473, 0.0,
     0x1.348245d407595p-1018, 0.0, 0x1.ded8b5eeb7104p-388, 0.0,
     0x1.d8cc96b31ad86p-220, 0x1.b5272d290c581p-250, 0x1.9669d87406fdap-597,
     0x1.e03f6f60edf17p-996, 0x1.6478b064bffc7p-230, 0.0, 0x1.c7beb812a2969p-1020,
     0.0, 0.0, 0.0, 0.0, 0x1.159298ecb2d96p-796, 0.0, 0x1.d70dc78476e1bp-969, 0.0,
     0.0, 0x1.990432da63ef3p-323, 0.0, 0.0, 0x1.48dac2c7e4b4cp-797, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.94557ff91dd7fp-465, 0.0, 0x1.5d46ecd9d4d7p-361, 0.0,
     0x1.12d087869d565p-257, 0x1.3b559714a7c61p-628, 0x1.8032dba7f15bdp-141, 0.0, 0.0,
     0.0, 0x1.371a62bf0b169p-651, 0.0, 0.0, 0x1.83d43745e75eep-254,
     0x1.e367ff56c67b7p-475, 0.0, 0x1.9893538ce9987p-909, 0x1.d85349da3bb0fp-461, 0.0,
     0.0, 0x1.ee6576dc847a9p-801, 0.0, 0x1.7647e0f9dd977p-287, 0.0, 0.0, 0.0,
     0x1.e0b9a5c8c80a8p-659, 0x1.48a5a9d5defdcp-643, 0.0, 0x1.968480257e9f6p-555, 0.0,
     0x1.375b6dd8ff4cbp-784, 0.0, 0.0, 0x1.1a19851f98037p-854, 0x1.fe4a553640da4p-857,
     0.0, 0x1.babc3d75d17acp-900, 0x1.aa9cf12f110c5p-627, 0.0, 0.0, 0.0,
     0x1.92a564ebf1e18p-304, 0.0, 0x1.9dacb0d1abb71p-149, 0.0, 0x1.e0f10c9449ddap-698,
     0x1.39e140b123de1p-64, 0x1.b35524f85d53ap-210, 0.0, 0.0, 0x1.b7251d7ca95d5p-489,
     0.0, 0.0, 0.0, 0x1.42f94753061dap-416, 0.0, 0x1.ddf3a7a81834dp-461,
     0x1.ca35394d69bcp-528, 0.0, 0x1.12faf6fdb39c5p-792, 0.0, 0.0,
     0x1.b0021fa8f0578p-413, 0x1.d3507291852cfp-483, 0.0, 0.0, 0.0,
     0x1.f2a5b9a075f91p-32, 0x1.1e397a192b0e4p-17, 0x1.1df6070d3f946p-31,
     0x1.6d42e8caa1f69p-586, 0x1.b2c4edb72d77fp-126, 0.0, 0.0, 0.0,
     0x1.5f01da0548f52p-1017, 0x1.aa42833108fabp-814, 0x1.0310514d37506p-935,
     0x1.c374b4d2c0fdap-311, 0.0, 0x1.9cba547ba893bp-428, 0x1.5177410865f54p-973, 0.0,
     0.0, 0.0, 0x1.9f6736f7a877cp-568, 0.0, 0.0, 0.0, 0x1.d0e06fdc0029dp-721, 0.0,
     0.0, 0x1.e9e62c4b7970ap-45, 0.0, 0.0, 0x1.341d10f94c01dp-945, 0.0, 0.0,
     0x1.ded532174a4dap-236, 0.0, 0.0, 0.0, 0x1.98701fb1430fdp-457,
     0x1.2c282548e4ed3p-685, 0x1.605d9d2032571p-40, 0.0, 0.0, 0.0, 0.0,
     0x1.0fa5cfd2015a2p-904, 0.0, 0x1.83167a531d63ep-469, 0.0, 0x1.33f74cfadca63p-343,
     0.0, 0.0, 0.0, 0x1.f2bf1138fffdp-130, 0.0, 0x1.76c46689b8abp-659,
     0x1.9664b2cef61efp-575, 0.0, 0x1.6d10461eb5424p-652, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.57c3af198b7fbp-307, 0.0, 0x1.606d3d3a1e60bp-596, 0x1.76552f3645fcap-587,
     0x1.6a88af77d9ceep-475, 0.0, 0.0, 0.0, 0x1.05e62d20806edp-373,
     0x1.e3817117e1ffep-1007, 0x1.5142259ff0cf6p-707, 0x1.74bb5ec530925p-471, 0.0,
     0x1.fbbdb18263644p-631, 0.0, 0.0, 0x1.15d07067bc9fcp-183, 0x1.e82d90679c5c9p-471,
     0.0, 0x1.e266d15050c2dp-387, 0.0, 0x1.3ab2795fd22eap-36, 0.0,
     0x1.ebcb068f9b9d7p-86, 0x1.777731e5a3faep-659, 0.0, 0x1.51ffe6c757c2cp-49,
     0x1.830da001628adp-611, 0.0, 0x1.bee2f82976ed3p-282, 0x1.a36556832380cp-183,
     0x1.19ad9bff5a642p-780, 0.0, 0x1.d783047b1b368p-349, 0.0, 0x1.ccb6db44d6807p-128,
     0.0, 0.0, 0x1.955a7fa91442dp-653, 0x1.8d9f3e3d6c87p-361, 0x1.255fe711526e2p-595,
     0x1.3b24e965cbd93p-305, 0.0, 0x1.770276c0c5bf8p-693, 0.0, 0.0, 0.0,
     0x1.103e6813fb064p-412, 0.0, 0.0, 0x1.8f0abda67964bp-960, 0.0,
     0x1.6a74acf2569c8p-535, 0x1.be6c53ba6db73p-194, 0.0, 0x1.8ea7a31ef2d77p-981, 0.0,
     0.0, 0.0, 0.0, 0x1.8f72f46822a6ap-621, 0.0, 0x1.ad6a8bc34ea02p-366, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2113c50c91e36p-765, 0x1.b81eca1c30dbbp-333, 0.0, 0.0,
     0x1.02f5f9cbd76e7p-865, 0x1.ea272c687711fp-833, 0.0, 0.0, 0x1.e52877b3c4ec6p-998,
     0.0, 0.0, 0x1.ab6f953298f29p-340, 0x1.da1a9ec17c0e3p-792, 0.0, 0.0, 0.0,
     0x1.34fb64537e2f2p-760, 0.0, 0.0, 0.0, 0.0, 0x1.3dd9b55b26d1cp-434, 0.0,
     0x1.83fdafad6d1cap-917, 0x1.0e3e7dd9ba0edp-1022, 0.0, 0x1.ba01a993cc0b2p-556,
     0x1.2801cfbd0f1f4p-953, 0x1.4039755a0d723p-867, 0x1.293507070f508p-278, 0.0, 0.0,
     0x1.bd5d15ef63f2p-340, 0x1.311bf65da1516p-379, 0.0, 0.0, 0.0,
     0x1.413ec47fa2576p-356, 0x1.5516ca14c4abap-893, 0x1.0a36f2af8b6bep-74, 0.0,
     0x1.e08f8be80f03p-753, 0.0, 0x1.ce429da1560a7p-487, 0.0, 0x1.c549e4f12fc5bp-149,
     0.0, 0.0, 0x1.92362c6f238d1p-762, 0x1.ac8e316fbaf1dp-515, 0.0,
     0x1.06bd8dc640d19p-418, 0x1.623cfd319ba3cp-738, 0x1.a3b9f882e48e6p-600,
     0x1.b4a0faa367c54p-333, 0x1.ab5352c63658cp-605, 0x1.b1c56b47a4519p-10, 0.0,
     0x1.9060089a67843p-760, 0x1.27a156cca003fp-665, 0x1.ee2e41a55d487p-642,
     0x1.0e3a49503683ap-1013, 0x1.359a2bedfaed8p-524, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af8d3b814668fp-344, 0x1.79f0425e6c29cp-574, 0x1.48922c195f0b5p-142,
     0x1.e0f8dac28a9cp-88, 0.0, 0x1.765200eef25a1p-881, 0.0, 0x1.9db51d7a65cf1p-42,
     0.0, 0.0, 0x1.1085f2da1b81bp-57, 0.0, 0x1.a67054a489eeap-887,
     0x1.10dc01c863893p-344, 0.0, 0x1.dfb4b22becd72p-596, 0.0, 0x1.a3dce81709f78p-340,
     0.0, 0x1.e4ce3f02114a3p-568, 0.0, 0.0, 0.0, 0x1.803a21bfbd8f4p-961, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c4ed165735d2cp-324, 0x1.0457a68554cf6p-785, 0.0,
     0.0, 0.0, 0x1.1431a9e11ae07p-973, 0x1.9d2acd8f6fc61p-840, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3f7942a8d78d2p-989, 0x1.df19f19465f4bp-691,
     0x1.8d44ff7d5da8p-394, 0x1.bc299bbf458cbp-392, 0x1.09cc23315e424p-560,
     0x1.b51c73e4afa87p-17, 0.0, 0x1.968b3c8b24f5cp-273, 0.0, 0.0, 0.0, 0.0,
     0x1.6ff4d334939acp-774, 0.0, 0.0, 0.0, 0x1.c75e44345d954p-790, 0.0,
     0x1.2768f7b1e2f9ap-204, 0x1.ce9e569ceae92p-672, 0x1.44312cd468a44p-931, 0.0,
     0x1.809c81f49a94ep-201, 0.0, 0.0, 0.0, 0x1.0e9b1ba5a9007p-236,
     0x1.938cf75d1be1dp-646, 0.0, 0.0, 0.0, 0x1.4d7bf97af67acp-27,
     0x1.f8d0451cdefccp-742, 0x1.7b92e70f1167ap-501, 0.0, 0.0,
     0x1.355e39305cb53p-1016, 0.0, 0x1.3025dcd975217p-766, 0.0, 0.0,
     0x1.056facca0424ep-55, 0x1.e0cc681f3cf44p-79, 0x1.2bced9c379f66p-609,
     0x1.ec6bd85c12957p-661, 0x1.2de36ff47fa0dp-270, 0x1.2f7d2af2e5423p-546,
     0x1.6ecdaa8bbd9cbp-564, 0.0, 0.0, 0.0, 0x1.07b21f5fac149p-323,
     0x1.b322239f4083ap-380, 0x1.e337ea55d8234p-3, 0x1.41d82a37f97ep-32,
     0x1.07eeb5d73ca03p-170, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba9c70b74c98ep-308, 0x1.3ad1dfef09024p-216, 0.0, 0x1.0a2074b473bf9p-535, 0.0,
     0.0, 0x1.5603910d5a3ffp-919, 0.0, 0.0, 0.0, 0x1.2e6e5c6aee63ep-664,
     0x1.c5705e406beb1p-396, 0x1.12130a81adfe5p-50, 0.0, 0.0, 0x1.7b2f5c48a2a39p-693,
     0.0, 0x1.972e2fead8dcfp-540, 0.0, 0x1.eff908766a1d9p-426, 0x1.43e3878698b16p-109,
     0.0, 0.0, 0x1.957a33e694f35p-394, 0.0, 0.0, 0.0, 0x1.461281f34cfe8p-599, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b58d1fd948f4p-896, 0x1.70f0cecfd1db8p-163, 0.0, 0.0,
     0x1.bde9f4b59d973p-503, 0.0, 0x1.61afac7f75f15p-590, 0x1.eaf2301f04effp-976, 0.0,
     0.0, 0x1.f6421cc73b51ep-990, 0x1.92167c9daf118p-613, 0x1.c9eeb138917d7p-641,
     0x1.5fb9363a2fec5p-872, 0x1.017559117ac32p-347, 0x1.8b8b99bf7f877p-304
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
            tmp1 = Sleef_sincospid1_u05purecfma(tmp0);
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
    printf("Sleef_sincospid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincospid1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
