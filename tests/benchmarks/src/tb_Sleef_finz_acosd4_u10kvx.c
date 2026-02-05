/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd4_u10kvx.c --function \
 *     Sleef_finz_acosd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0x1.4480be5552ab6p-529, 0.0, 0x1.2a5b0a7b009f4p-818, 0x1.c532dd58e70b6p-35,
     0x1.1fca6d2fcfc4ep-171, 0.0, 0x1.83684d1879e9dp-388, 0x1.ad480ff610ceap-965,
     0x1.a8e01c61f669ep-750, 0.0, 0x1.ade84bfa20a5fp-408, 0x1.858084123e2fep-576, 0.0,
     0.0, 0.0, 0x1.f4bc7a93204cap-120, 0.0, 0x1.414962b761f14p-422,
     0x1.24a7f5b19bf2p-81, 0x1.a70d8cb071a67p-675, 0x1.f4fd2be28703p-893,
     0x1.b4ffee0298537p-447, 0x1.a0b5475d3c236p-372, 0x1.c06266de0e422p-723,
     0x1.5ac21757ca35ep-919, 0.0, 0x1.c7bcd71e4ab36p-366, 0x1.3dd480e59e494p-232, 0.0,
     0.0, 0x1.5eacd0acf15d9p-817, 0.0, 0x1.9f20eb24c9ee2p-58, 0.0,
     0x1.04b96044f60cp-212, 0.0, 0x1.dc1e05a39bde8p-92, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5392e9cd57b8dp-183, 0.0, 0x1.625a269e15e98p-409, 0.0, 0.0,
     0x1.78fa02dd74b0dp-611, 0x1.d5c90ab10fa1dp-583, 0x1.bc7ca91148116p-553,
     0x1.b8e76408d870bp-128, 0x1.7bcd9ff602273p-846, 0.0, 0x1.aa18ec455d09cp-454, 0.0,
     0.0, 0x1.9367732cd2fffp-155, 0x1.39e7ec480c04p-216, 0.0, 0.0,
     0x1.89c22abf2fa64p-108, 0.0, 0x1.53800043d15f6p-975, 0.0, 0x1.1ebdcbcda1883p-951,
     0x1.df310334a9f2fp-773, 0.0, 0x1.1dcafd5588e7p-848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.376ba7bb8abe4p-867, 0x1.0c50db1327226p-921, 0.0, 0x1.960414591c731p-89,
     0.0, 0.0, 0x1.f1d7b02ca095ap-68, 0.0, 0.0, 0.0, 0.0, 0x1.fbe6803bf1c47p-967,
     0x1.72805f67d02fcp-230, 0x1.79a7732b474e2p-780, 0.0, 0x1.da56935657ebap-354, 0.0,
     0x1.e5a4a15534688p-267, 0.0, 0.0, 0.0, 0.0, 0x1.0a13b760f3ffdp-602, 0.0, 0.0,
     0x1.5bb4c5c9f3c51p-1019, 0x1.e92bfca207188p-848, 0.0, 0.0, 0.0,
     0x1.e31787fd685b6p-602, 0.0, 0x1.6d8f3036f439p-470, 0x1.0f11c784439e3p-175, 0.0,
     0x1.bbf3977d31319p-174, 0.0, 0.0, 0.0, 0x1.b7217aaf6c41p-702,
     0x1.1c8e1040e8c64p-150, 0.0, 0x1.0bfbda4614c3cp-572, 0.0, 0x1.d0803d745e236p-723,
     0.0, 0x1.16e9c079fb75fp-405, 0x1.1e2347d5e0cbdp-218, 0.0, 0.0, 0.0, 0.0,
     0x1.fc03f744b5ad3p-264, 0x1.8ca3809ed21e9p-432, 0x1.747cd53df6da3p-245,
     0x1.29950029b9453p-400, 0.0, 0.0, 0.0, 0x1.3669d64b58828p-539, 0.0, 0.0,
     0x1.9040d874808e7p-546, 0x1.bc3d06a5d50ffp-595, 0x1.12657a20c867p-531, 0.0,
     0x1.b0941d87c94afp-485, 0x1.c1187be73fcf8p-190, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cab50e3c952b3p-174, 0.0, 0x1.9b64738d8c2aep-87, 0.0, 0.0,
     0x1.ea4ef9f06beb9p-131, 0x1.3863f3adf9055p-325, 0x1.e2f1c59293284p-814, 0.0, 0.0,
     0x1.9eb13a33c8874p-107, 0x1.02ed8dfcbd575p-791, 0.0, 0x1.822b6e39cfab6p-983,
     0x1.c788cba1b0ce4p-105, 0.0, 0.0, 0x1.6edf14fa4641fp-206, 0.0, 0.0,
     0x1.35e2f98beb34ap-813, 0.0, 0x1.bffeaa4dae8bdp-505, 0x1.a8c735287e3afp-326, 0.0,
     0.0, 0.0, 0x1.1639e9f900b79p-765, 0x1.e5ab3774dc6cbp-594, 0x1.c167c0b47737fp-247,
     0x1.a0ce8f5cc748fp-990, 0x1.e93c3c0112f1ap-341, 0x1.8bb77618b9a68p-510, 0.0, 0.0,
     0x1.c52aa81af9daep-574, 0.0, 0x1.0b89b99f5fa43p-855, 0.0, 0.0, 0.0,
     0x1.fea28635b163cp-962, 0.0, 0x1.e5abeed283fe6p-773, 0.0, 0x1.1410072cc69ddp-142,
     0x1.4f1874fba3e25p-180, 0x1.9a654bfeafcebp-283, 0x1.ac217b716fec9p-753, 0.0, 0.0,
     0x1.03c6caca7dabp-705, 0x1.f09fb87015b01p-713, 0.0, 0.0, 0.0,
     0x1.aa18963d4aba5p-964, 0.0, 0.0, 0.0, 0.0, 0x1.9994afcaea89p-781,
     0x1.c19be4fb1073dp-584, 0x1.3f48513866cc6p-244, 0x1.5f5f44d8c34a5p-651,
     0x1.01caa5fd31e3p-142, 0x1.a054b45b7ccb8p-479, 0x1.a183d5a49c5cap-267,
     0x1.821afffcf39fdp-591, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f7ab8b26087c5p-320, 0.0, 0.0, 0.0, 0x1.98b5ee3119d32p-775,
     0x1.6b97bd9c44c21p-827, 0.0, 0.0, 0x1.79122a0afb8cep-628, 0.0, 0.0,
     0x1.34562f9095c47p-845, 0.0, 0.0, 0x1.2ccf2dca82f37p-698, 0.0, 0.0,
     0x1.bbd4c1fcb8aa4p-449, 0.0, 0x1.07a1741a27c2ap-156, 0x1.90c97a8e86609p-766,
     0x1.de4aa4e8baae5p-43, 0x1.2d11e3028abb9p-511, 0x1.d70662c24af5ap-411,
     0x1.2c9d0c099449fp-744, 0.0, 0x1.a5b037104dff5p-547, 0x1.6b72cb4d48582p-282,
     0x1.41a9b5be12bc6p-957, 0x1.2c157b0ea488dp-740, 0x1.69819c2e4b6b6p-978, 0.0, 0.0,
     0.0, 0.0, 0x1.9a89fedb6610fp-256, 0.0, 0x1.a2e8e9d3bdba6p-703, 0.0,
     0x1.3cd228170eb09p-131, 0x1.aa596833fb27fp-92, 0.0, 0.0, 0.0, 0.0,
     0x1.91c6d835bb8d1p-311, 0x1.7bf71efe53ebap-53, 0.0, 0.0, 0.0,
     0x1.f2cd0aa749f44p-506, 0x1.bfcd8be26abc4p-409, 0.0, 0.0,
     0x1.526e3fb2397e1p-1003, 0x1.1b17700856605p-807, 0.0, 0x1.37aeb43df2579p-343,
     0x1.5c46ca5c95f72p-257, 0.0, 0x1.1796384c97f79p-388, 0.0, 0x1.a03d51968545p-108,
     0x1.6b59f153f2f0dp-639, 0x1.2c27aceb56d1ep-61, 0x1.81c5dc2bdf0f3p-169, 0.0,
     0x1.745c4548a1a77p-1003, 0.0, 0.0, 0x1.d718c1bfebe93p-803, 0.0, 0.0, 0.0,
     0x1.2df75f9b1cd2fp-616, 0x1.467d2c7ae9e2cp-51, 0x1.9809f86dd810dp-847,
     0x1.6e02537f1d7e2p-175, 0.0, 0x1.213f30c2306eep-262, 0.0, 0.0, 0.0,
     0x1.c1504c3fcfd16p-136, 0.0, 0x1.9076a9ca5dae6p-74, 0x1.8ed341925a1bbp-1020, 0.0,
     0.0, 0.0, 0x1.77b88708dd634p-525, 0.0, 0x1.58105075b6a2bp-19,
     0x1.d04631082f907p-727, 0.0, 0x1.48e35dd168d67p-153, 0x1.b78d40998db08p-546, 0.0,
     0x1.9c79bc00300e4p-483, 0x1.4a31e2ec60c5fp-1, 0.0, 0x1.59658ad3f5defp-187, 0.0,
     0x1.306cd2ad88719p-959, 0.0, 0.0, 0.0, 0x1.804349966e032p-181, 0.0,
     0x1.ec3482caf26ep-983, 0.0, 0.0, 0.0, 0.0, 0x1.5a7b51a1fc7fbp-705,
     0x1.f5647c7980fe4p-243, 0.0, 0x1.db28d6b7fa0dap-909, 0.0, 0.0, 0.0,
     0x1.60faf6296a5a6p-293, 0x1.977299a2397c2p-358, 0.0, 0.0, 0x1.52effa3aae621p-596,
     0x1.ad5fc3500b405p-724, 0.0, 0.0, 0x1.e8548005c16cfp-231, 0.0, 0.0,
     0x1.285815259d388p-367, 0.0, 0x1.42224c1573554p-92, 0.0, 0.0, 0.0, 0.0,
     0x1.60b8304f94bb2p-124, 0.0, 0x1.ec59b0f2ad975p-1009, 0.0, 0.0, 0.0,
     0x1.a258215715f9p-117, 0x1.d7377f8af8c1bp-844, 0.0, 0x1.77025515783b1p-819,
     0x1.b7e28d3b61de7p-523, 0.0, 0x1.6daa8be96c869p-991, 0.0, 0x1.b48cdf21829f1p-651,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b71bade76763bp-540, 0x1.dbe96f0d31326p-117,
     0x1.68befb15c8ebp-960, 0x1.ea46cd8a001fbp-844, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dac7bf710d8dfp-495, 0x1.46479e8845247p-512, 0x1.9308ba099011cp-989,
     0x1.6dffabc926cdep-785, 0x1.d3eadf1402713p-438, 0.0, 0.0, 0x1.2964ef289df3dp-551,
     0x1.4cce278e7a97fp-826, 0x1.2cef7fe33e5d4p-36, 0.0, 0.0, 0.0,
     0x1.da5fb88a562b1p-905, 0x1.a67be33b114e5p-549, 0x1.878fff680f968p-251,
     0x1.2a8341d577369p-170, 0x1.75c74384fe25fp-606, 0.0, 0x1.b935c833393b5p-570,
     0x1.f65b704f56828p-52, 0.0, 0.0, 0x1.defc1be767b9cp-887, 0.0,
     0x1.1395a55eee8b5p-531, 0.0, 0x1.04a6e61c4de1ep-443, 0x1.8a57fa7d1e5c9p-381,
     0x1.12e3048b585e4p-707, 0.0, 0x1.9267c3bcc3c1bp-150, 0x1.6429827d538a5p-912,
     0x1.68f47338c6f31p-246, 0x1.ce780d1430ba8p-533, 0.0, 0x1.3ab0fa6a188c1p-571, 0.0,
     0x1.4a0320de99c83p-693, 0.0, 0x1.b9c5163ceb09cp-567, 0.0, 0x1.4d72560f0ca35p-803,
     0.0, 0x1.a575e1e5df86p-585, 0x1.e6ce4e60ddbcfp-136, 0x1.be9fa40d4ccbcp-126,
     0x1.f6b417983db42p-447, 0.0, 0x1.c90ffee0a3439p-201, 0x1.6ee2fb7d17124p-818, 0.0,
     0x1.adaa84a6bc0d7p-202, 0x1.a50bc1b16073fp-114, 0.0, 0x1.ea3c2d741d725p-866,
     0x1.926e03f9d61b2p-813, 0.0, 0x1.8ee20a8daed96p-603, 0.0, 0.0, 0.0, 0.0,
     0x1.7d94c823ec893p-44, 0x1.e6a782b33750ap-1007, 0x1.3dcc001b84b2p-816,
     0x1.7f4a39d7a3e68p-444, 0.0, 0x1.63f2ed9f2b632p-286, 0.0, 0x1.8fed10af806ffp-318,
     0.0, 0.0, 0x1.a227b092e0a96p-333, 0.0, 0x1.2ac1cd6339dbep-127, 0.0, 0.0, 0.0,
     0x1.0954685ecf4dap-867, 0.0, 0x1.88a24b2f7aae6p-947, 0.0, 0x1.99010a0b21a16p-674,
     0.0, 0x1.beb918f720829p-205, 0x1.9250448180676p-817, 0x1.de159f89901c4p-487, 0.0,
     0.0, 0x1.0e8509e253c93p-36, 0.0, 0x1.566c089e012a4p-494, 0x1.8f07444c2f934p-814,
     0.0, 0x1.1647cab5ca8f8p-357, 0x1.3becc064ab684p-75, 0.0, 0x1.44d006a7fe77bp-922,
     0.0, 0x1.31313006c95cdp-402, 0x1.36288a603e7d5p-178, 0x1.e3ee1715060b3p-779,
     0x1.fd1d11cc9bb47p-182, 0.0, 0x1.a552c7b03d277p-744, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.93429b8eacbf8p-574, 0x1.95f544786a7ddp-530, 0x1.3be01d60c49c2p-52,
     0.0, 0x1.58bbca88330b5p-634, 0.0, 0x1.b23837bb668bdp-461, 0.0,
     0x1.7e2318073539dp-1004, 0x1.b4c421be31a95p-255, 0x1.93f86f329c4dfp-666,
     0x1.33487f3b536b9p-459, 0.0, 0x1.f85afb9d44c39p-894, 0x1.76245b0dac2dfp-705, 0.0,
     0x1.6a32ad760a7b6p-195, 0.0, 0.0, 0x1.b89a56ef5307dp-132, 0x1.88fccbf823a2cp-533,
     0.0, 0x1.3d1ac40bfe7b7p-373, 0.0, 0x1.cbb356896dd7cp-619, 0x1.c8708b298166bp-160,
     0x1.f5e434d4cf29bp-74, 0.0, 0.0, 0x1.269c15a7ed443p-755, 0.0,
     0x1.d674ed60e900cp-826, 0.0, 0.0, 0x1.33aadc773124fp-579, 0.0, 0.0,
     0x1.a48fe1fdb6182p-616, 0x1.9586ca5c46836p-751, 0x1.0f7f22e247fddp-710, 0.0,
     0x1.bac8911191551p-49, 0.0, 0x1.8b13fc9140a5cp-777, 0x1.5e1e1fdacab76p-423,
     0x1.8b33690deac41p-145, 0x1.21487ae2da5f8p-448, 0.0, 0x1.d21818e08665ap-657, 0.0,
     0x1.5a90113239bbdp-389, 0.0, 0.0, 0x1.2ba256b1abdd3p-67, 0x1.ff097fcb1cdc2p-257,
     0x1.b427280541a13p-712, 0.0, 0x1.5c5c02d4c7fd9p-555, 0.0, 0x1.f640e8edfda01p-207,
     0.0, 0x1.679c7f8db56dep-693, 0.0, 0.0, 0.0, 0x1.4c58d5c68b7aep-1005, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.88e2cb5668577p-899, 0.0, 0x1.60583513e612p-779,
     0x1.00156982e521ap-616, 0x1.570dd4989e9a8p-312, 0x1.4404c2495587dp-406, 0.0,
     0x1.0729c02dfcd15p-648, 0x1.a9cdd0639cc85p-494, 0x1.4bb8784af766ep-465,
     0x1.751f4b0bde0b4p-251, 0.0, 0x1.287f243e8b673p-445, 0x1.2480eb16f3c61p-681,
     0x1.1d2a9c86e76abp-206, 0.0, 0x1.fd259b3efd41fp-26, 0.0, 0.0,
     0x1.bb0e1cfee28cep-288, 0x1.91c0776d9f459p-673, 0.0, 0x1.4f90be504628p-584, 0.0,
     0x1.e6fbd333860f2p-426, 0x1.a7929694a75f4p-973, 0.0, 0x1.51fe8622b858cp-962,
     0x1.cac668dbcbb4cp-95, 0x1.0e2f39cbfe7bep-200, 0x1.e71cc812d6ac7p-291, 0.0, 0.0,
     0.0, 0.0, 0x1.91ae9517d1b55p-464, 0x1.c9afba9bb684ep-984, 0.0,
     0x1.36602492825bep-220, 0x1.8738656df8735p-87, 0x1.65ac3dc0ae9d1p-493, 0.0, 0.0,
     0x1.9ecbff205487fp-742, 0x1.cad2edb290d36p-777, 0.0, 0.0, 0x1.0230db908cffbp-845,
     0x1.1327cdb70c1f1p-940, 0x1.c0546104f0198p-769, 0x1.94b7b95fd0b01p-843,
     0x1.11079681e7406p-895, 0.0, 0x1.f210dfd79f54ap-388, 0.0, 0.0,
     0x1.befc5a634f778p-891, 0x1.c7c0d9b18ff0cp-306, 0x1.b613780b56d9fp-756, 0.0, 0.0,
     0x1.60b7fbeeee621p-736, 0x1.187bdadeffcdep-525, 0.0, 0.0, 0x1.fb78f9345a85p-892,
     0.0, 0x1.bc31cee02bc1bp-965, 0.0, 0.0, 0.0, 0.0, 0x1.f695c6939f138p-813,
     0x1.4a4192d1289d8p-97, 0.0, 0x1.bb00b3261cb4ap-841, 0.0, 0x1.0761ab709e55fp-50,
     0.0, 0.0, 0x1.dbdc80124303ep-865, 0x1.6f0747629d39cp-214,
     0x1.3193c223111c6p-1005, 0.0, 0.0, 0x1.f784434edb5dcp-771,
     0x1.0cff534b58bc4p-188, 0x1.f8ea44043d45bp-473, 0x1p0, 0x1.c9ff148dbe0f7p-340,
     0x1.6c440eff745eap-337, 0x1.3b6b8e87fd225p-182, 0x1.4d2398cc2b22ep-770,
     0x1.841d1007c8cc8p-716, 0.0, 0.0, 0.0, 0.0, 0x1.b1056ec554029p-707, 0.0, 0.0,
     0.0, 0x1.8be95fcc98d24p-1022, 0.0, 0x1.3debc7124b8d3p-972, 0.0,
     0x1.3c5ae28597f4p-956, 0.0, 0.0, 0x1.9fb1184e8293ap-795, 0x1.b623df59f7fefp-970,
     0.0, 0x1.65a81facb2a02p-483, 0x1.f837f4edd7f98p-587, 0.0, 0x1.4cdcae8dd351p-62,
     0.0, 0x1.0b746eb6b0728p-725, 0.0, 0.0, 0x1.7d5ddeaac6f35p-155, 0.0,
     0x1.3a728f68ba4bdp-657, 0x1.ea25b3a4fb9c3p-480, 0x1.b4022b0ececcp-856,
     0x1.621aa5238d5d6p-483, 0.0, 0x1.db6fb90b160c9p-456, 0x1.b6f9c04eb6c3cp-396,
     0x1.bdfe4fa80bccap-953, 0.0, 0x1.d82981b713ab3p-813, 0x1.ec35fdfdda8c7p-218, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.87dc7f5c9054dp-161, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58d0bc73f6861p-142, 0x1.76b93217a652fp-106, 0x1.ef7c625a56cc2p-732,
     0x1.772cb723224d6p-634, 0.0, 0.0, 0x1.c455ed343b349p-382, 0.0, 0.0,
     0x1.e451ce52a4509p-961, 0x1.fc9bb80aedbeap-683, 0.0, 0.0, 0x1.6f49df6ae7901p-643,
     0.0, 0x1.0d31708c8d2b2p-793, 0.0, 0x1.d2376afd3254cp-744, 0x1.d8a71d761995cp-454,
     0.0, 0.0, 0x1.993a5e5b6255p-259, 0.0, 0.0, 0.0, 0.0, 0x1.ba52450efe34dp-771,
     0x1.b347e8a54a724p-144, 0.0, 0x1.273d6ff132513p-49, 0x1.18119a9a3ebf4p-863, 0.0,
     0.0, 0x1.7a0cf8e8ca31ap-556, 0.0, 0.0, 0.0, 0x1.d801894360061p-936, 0.0, 0.0,
     0x1.63ae941dd4e5p-613, 0x1.a61133c35a281p-684, 0.0, 0x1.9d46cb67e7c55p-901,
     0x1.c7f3af5b70e5fp-750, 0.0, 0.0, 0x1.0991294442451p-702, 0x1.0e1eecdce2621p-571,
     0x1.8067eaa85f21ep-767, 0x1.1255ba87d2684p-143, 0.0, 0x1.945d6466aa6e3p-270,
     0x1.27560218176c4p-698, 0x1.6cea295ae1fcdp-930, 0x1.0816ebb2d63cp-524,
     0x1.5414a18a0c5f2p-916, 0x1.0be8e45765293p-601, 0.0, 0x1.7994ff4cf0037p-368,
     0x1.4402c0e3359d9p-863, 0.0, 0x1.6e7debe4dac2fp-452, 0x1.ee54e972484b7p-850,
     0x1.4db1ac5150406p-165, 0.0, 0.0, 0x1.e2de777b05a4ap-158, 0.0, 0.0,
     0x1.9e796354092c4p-867, 0.0, 0x1.3b046f9517572p-560, 0.0, 0.0,
     0x1.d9290f9b1e333p-582, 0.0, 0.0, 0x1.a923c559d40dp-738, 0.0,
     0x1.9c2878ec37748p-206, 0.0, 0x1.48b6138217052p-491, 0.0, 0.0,
     0x1.de41b3d17ebf6p-957, 0x1.b9c5aa745a06fp-613, 0x1.f28ffaf1f8cb7p-105,
     0x1.e5f2824d59fe9p-17, 0x1.b0a18d7f676aep-325, 0x1.e2b8524b8c916p-440, 0.0,
     0x1.d62ca1e9a3da6p-887, 0.0, 0.0, 0x1.72a427603406p-681, 0.0,
     0x1.ba30ec6d627f9p-425, 0.0, 0x1.bf89789464f4fp-889, 0.0, 0.0,
     0x1.b81e157be41ebp-796, 0x1.7ddfb975faa8dp-291, 0x1.e9ecc3065df89p-840, 0.0,
     0x1.1e37179f531a5p-288, 0.0, 0x1.2c7027b508d45p-675, 0.0, 0.0,
     0x1.b04f808e8a56bp-303, 0.0, 0.0, 0x1.5c8e4e195bd1bp-392, 0.0,
     0x1.32cc8a81efeb9p-365, 0x1.c4d9168aa5959p-916, 0x1.347f0a19043edp-165, 0.0,
     0x1.c577ed3469086p-933, 0.0, 0.0, 0x1.1a25679f5e71dp-77, 0x1.7b63892e71d4ap-567,
     0x1.0b2c9077e60b8p-845, 0x1.7f37b89ff60f3p-478, 0x1.8162fa6663673p-953, 0.0, 0.0,
     0.0, 0x1.d45dd790852f6p-776, 0x1.ff81ab464022p-232, 0x1.0e40b57276299p-232, 0.0,
     0x1.d7c6b353e5f27p-256, 0.0, 0.0, 0.0, 0x1.fb838bc66d9p-213, 0.0,
     0x1.3b103336669adp-419, 0.0, 0x1.9120d3b294cf3p-802, 0x1.05301860c1202p-973, 0.0,
     0.0, 0x1.7f61dc16a3d3dp-746, 0x1.a233b2d6bff61p-856, 0.0, 0.0,
     0x1.cd384ecab8a95p-684, 0.0, 0.0, 0x1.9abed37aba1d3p-972, 0x1.6ced38d01bcccp-620,
     0x1.1a768acb3a80ep-452, 0x1.2a5a3c3ea070cp-533, 0x1.7f6180399725bp-569, 0.0, 0.0,
     0.0, 0x1.e3927078b575cp-762, 0.0, 0.0, 0.0, 0x1.5db5a8f3d2386p-593, 0.0,
     0x1.a7703efa3263ap-89, 0x1.62fdb20b62de5p-62, 0x1.da2a1e92b8ce8p-671,
     0x1.f6e77d1c2d5a3p-510, 0x1.2d99588c5f807p-575, 0.0, 0.0, 0.0,
     0x1.1a5c7dbdf7f41p-657, 0x1.5b57e4b9cdf76p-711, 0.0, 0x1.9c2c9434eb2e8p-41, 0.0,
     0x1.d31427fef2d7bp-401, 0x1.817619790caep-839, 0.0, 0x1.c5c4992714d1ap-972,
     0x1.0a3c9b1dc8dcdp-91, 0x1.1b7a4414cfb6bp-29, 0.0, 0x1.2c1d4ccf45af4p-943,
     0x1.4025098b66e76p-710, 0.0, 0.0, 0.0, 0.0, 0x1.f12b92582bf34p-43,
     0x1.748d0e9bcb37bp-860, 0x1.5a31b9e7e1b79p-147, 0.0, 0x1.c2c40959af99fp-630,
     0x1.154cefebd4a05p-72, 0x1.35761e34f711ap-166, 0x1.8e52384437e6p-918,
     0x1.efd9a75b54c85p-211, 0.0, 0x1.272916721793p-750, 0.0, 0.0, 0.0, 0.0,
     0x1.7c3e2b21f4564p-418, 0x1.ee794851e4814p-667, 0x1.1d245d38579d2p-807, 0.0,
     0x1.3456001f767fbp-93, 0.0, 0x1.1ee08e1e12f14p-818, 0x1.019a19f7fa7dfp-583, 0.0,
     0.0, 0.0, 0x1.3669dbf578499p-696, 0x1.e7d7abc1cbddbp-1017,
     0x1.63580182f090bp-431, 0x1.f14afbc3cfe43p-14, 0.0, 0x1.5920a4b7bca96p-127, 0.0,
     0.0, 0x1.b4fd92e28afa7p-931, 0x1.51f83e09243dcp-216, 0.0, 0x1.47b5dc8473564p-869,
     0x1.8d9848b859fb5p-745, 0x1.5b665440762b2p-1005, 0x1.279587779f23bp-755,
     0x1.d66da0ccc449p-844, 0x1.680288d5b6e1bp-150, 0x1.e084ddf43f765p-560,
     0x1.36fdaa1630189p-879, 0.0, 0x1.58e09a8e36688p-584, 0.0, 0.0,
     0x1.7b3054f2e1b71p-524, 0x1.9c1de38248018p-158, 0.0, 0x1.4b4d1de41e871p-457,
     0x1.0b1c07e7f74dcp-34, 0.0, 0.0, 0x1.ca8ec466de5ep-938, 0x1.9bc70b28846ddp-545,
     0x1.d7dc5fff042e4p-318, 0.0, 0x1.c53f88ba19a36p-693, 0x1.36e81699e9acfp-150, 0.0,
     0.0, 0.0, 0x1.7bc9ef5831d2fp-53, 0x1.e7a9cf0c6c2b9p-273, 0x1.ef262b8a4185ep-62,
     0.0, 0.0, 0x1.bba7c5f98de19p-113, 0.0, 0x1.e80fc09a15375p-521,
     0x1.383e0648c1a45p-871, 0.0, 0.0, 0x1.f4d861b443598p-630, 0x1.cb786d55f16e8p-308,
     0.0, 0.0, 0x1.67bcbde0379bdp-1007, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_acosd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_acosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acosd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
