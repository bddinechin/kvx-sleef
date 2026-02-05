/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundd2_kvx.c --function Sleef_finz_roundd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.f86804a4a586ap-110, 0.0, 0x1.2e17afc19c4dp-330, 0.0, 0.0, 0.0,
     0x1.e0f78fc7d50afp-985, 0.0, 0.0, 0.0, 0x1.9240d828dc27cp-842,
     0x1.608e637c1a895p-411, 0x1.42803f7c0341dp-647, 0x1.07125871ad7c8p-484, 0.0, 0.0,
     0.0, 0x1.a961ebc7495abp-498, 0.0, 0.0, 0x1.82b397b0b4687p-552, 0.0,
     0x1.3dde3fca35346p-674, 0x1.1a2562d2b0ce6p-738, 0x1.68222ce92fa05p-822, 0.0,
     0x1.3c674910a252p-123, 0x1.731cc6420e776p-805, 0x1.1f5a770fedd7ap-731, 0.0, 0.0,
     0.0, 0.0, 0x1.c4c34db8ff555p-865, 0.0, 0.0, 0.0, 0x1.60497fe0b4708p-68, 0.0,
     0x1.e1a770772b742p-916, 0x1.4e9d3afe7863ep-889, 0x1.724bdc280f5d9p-29, 0.0, 0.0,
     0.0, 0x1.7749ed2b6bb99p-538, 0x1.25a9aaac033b8p-946, 0.0, 0x1.d32a72ba73984p-792,
     0.0, 0x1.de2e92f1a567cp-798, 0.0, 0.0, 0.0, 0.0, 0x1.08ae719ee01a4p-528,
     0x1.6d81cd95740b3p-673, 0x1.d99b222740cp-97, 0x1.0d35cf7936a33p-534, 0.0,
     0x1.dc84f68eac568p-990, 0.0, 0x1.d762379d437e3p-929, 0.0, 0.0, 0.0,
     0x1.99b5bdafb9c5ep-73, 0x1.17f385415cf03p-250, 0.0, 0x1.8a1af6c0bab87p-558,
     0x1.0509233a99018p-454, 0.0, 0.0, 0.0, 0x1.712dde3eee0bbp-659,
     0x1.8b65b3f1c6205p-124, 0x1.82679c52d6cafp-63, 0.0, 0.0, 0.0,
     0x1.d737fe7013253p-631, 0.0, 0.0, 0.0, 0x1.299a039fb1f56p-355,
     0x1.b1188e104fcc4p-169, 0x1.638150224407ep-368, 0.0, 0x1.b6af956bb8a4dp-975, 0.0,
     0.0, 0x1.d58e56cd95042p-684, 0x1.595d69b25bd4p-428, 0.0, 0x1.d4fd18a2b1e9dp-684,
     0.0, 0.0, 0x1.026366abe9308p-834, 0.0, 0x1.d55c47d6bf5f3p-655,
     0x1.5f78522dc1e49p-191, 0.0, 0x1.e2ed60716862ap-457, 0x1.9504c7ff5eb16p-40, 0.0,
     0x1.3aab9e5c466cbp-753, 0x1.13fe908e39f1ap-565, 0x1.e4e88c76a8dc5p-382, 0.0, 0.0,
     0x1.30e570a11ce34p-350, 0.0, 0.0, 0x1.029a69aa0d7cdp-253, 0.0, 0.0, 0.0, 0.0,
     0x1.90e98d990702fp-703, 0.0, 0.0, 0x1.c529e5e987a17p-40, 0x1.a7663448da77ep-932,
     0x1.84fa194ae271p-899, 0x1.49f9a4bf6ec8ep-128, 0x1.1a7f7792a699ap-994, 0.0,
     0x1.fbbe0e1e7a02p-85, 0x1.51e3ce635efd5p-220, 0x1.92a8e8421a09dp-528,
     0x1.9dede6dbfffecp-86, 0.0, 0x1.6222b0e0b324bp-67, 0x1.9e8ffd4f460d1p-398,
     0x1.7059fd364a6b3p-894, 0.0, 0.0, 0.0, 0.0, 0x1.30f0ac2e7cd9fp-140,
     0x1.9c093c99a7f83p-920, 0.0, 0x1.5213bb90d1cdp-959, 0.0, 0.0, 0.0,
     0x1.14bff72f1d281p-844, 0.0, 0.0, 0.0, 0x1.1c12ed8642e02p-628, 0.0, 0.0, 0.0,
     0x1.16dfb4536ebbbp-327, 0.0, 0x1.03e750b90f1e8p-484, 0x1.cd1e20a08597p-403, 0.0,
     0.0, 0x1.9560cc9e26998p-787, 0.0, 0x1.cb9278b717c83p-294, 0.0,
     0x1.bb6c5fe77f0f3p-881, 0.0, 0.0, 0x1.de78bd346d1acp-133, 0.0, 0.0, 0.0, 0.0,
     0x1.5b302dfd9492cp-242, 0x1.2656c0fb9069ep-834, 0.0, 0x1.041f0a5de142p-767,
     0x1.a9d27f0f091e9p-628, 0.0, 0.0, 0x1.38272d70d2687p-986, 0.0,
     0x1.719260c9cea89p-60, 0.0, 0x1.ee9ec5f2abb34p-6, 0.0, 0x1.7a609a42a7bp-257, 0.0,
     0x1.d0b149d8052fap-480, 0.0, 0x1.f314f8f3973bfp-466, 0x1.35dbd306f81dep-915, 0.0,
     0x1.f0548fec3890ap-499, 0x1.04713aec8f90fp-346, 0x1.8e0a9158a268dp-619,
     0x1.ac01a8f38f804p-625, 0.0, 0x1.9d84980760e3ep-166, 0x1.71cc1823db069p-312, 0.0,
     0.0, 0x1.1f54a649af95ep-485, 0x1.08becc71e6e6dp-927, 0x1.1c50bff5543d5p-900, 0.0,
     0x1.de73912992d6fp-246, 0.0, 0x1.5fe0b4e4f12ccp-159, 0.0, 0x1.b90a759eca05ep-916,
     0.0, 0x1.b294e8910a49ap-277, 0x1.1bd17ebe7d073p-907, 0x1.4e656a3b91ab7p-334, 0.0,
     0.0, 0x1.f2015780fe75cp-710, 0x1.9ac5822cc1661p-756, 0x1.bffb8bfd9aadbp-550,
     0x1.f839f28a404d1p-747, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f641a2ef2463cp-504, 0x1.97f585043db7cp-498, 0x1.dd61dc0f5a875p-310,
     0x1.063a189e5cb5bp-938, 0.0, 0x1.833a0af70c27cp-675, 0x1.2ff54d475bde5p-910,
     0x1.05a99d030b138p-346, 0.0, 0.0, 0x1.4299844eea52cp-758,
     0x1.f4f11eb5b0c7fp-1004, 0x1.971ce408e0fcdp-123, 0.0, 0.0,
     0x1.44383f6decb83p-520, 0.0, 0.0, 0x1.fdf6b42992a27p-3, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8fd1f68d5d8efp-982, 0x1.b3023860b607ep-825, 0.0,
     0x1.8dec94bf6edd6p-472, 0x1.296ec31f8805dp-489, 0.0, 0.0, 0x1.1b7f8e711dcf9p-93,
     0.0, 0.0, 0x1.c42604d1e5c81p-122, 0x1.9b692d42a37c9p-48, 0x1.77eb71353c9bcp-521,
     0.0, 0.0, 0.0, 0x1.ccd19d7863c52p-952, 0x1.61eab28794ba6p-469, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9820552f7aea1p-284, 0x1.430e007a6f774p-1016,
     0x1.5e6b866ef3a78p-380, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a602557e68b81p-646,
     0x1.a54d3f865a3cbp-725, 0.0, 0x1.798d2186e6972p-311, 0x1.5c8829e606cp-973,
     0x1.01a4b00f433dap-417, 0.0, 0x1.d1b3a20545ab4p-58, 0x1.8dd04ba6ca527p-656,
     0x1.a3404010a7b44p-463, 0x1.c9be6c3190137p-119, 0x1.1c4d3492f8f0fp-123,
     0x1.1c2e61273953ep-60, 0.0, 0x1.b0cd078bb878fp-129, 0x1.d36db80d467acp-519,
     0x1.a363b648913adp-220, 0x1.ef7ebb4ce3f28p-726, 0.0, 0x1.e43e234d524b1p-200, 0.0,
     0.0, 0x1.cf6dccab53283p-438, 0.0, 0.0, 0.0, 0x1.7e13f5fdde45ep-251,
     0x1.0b206b0a3bd53p-587, 0.0, 0x1.168171da6f694p-189, 0x1.17f52f27e9138p-22, 0.0,
     0x1.f938ae90c1ddep-381, 0x1.152cab85035dap-188, 0x1.8b0c80b1f6c22p-897,
     0x1.68d750e599c51p-311, 0x1.04c035482deb4p-148, 0x1.0efed18a7624fp-807, 0.0,
     0x1.5ea2db2f3a79ap-191, 0.0, 0x1.fd2dfdc21a537p-400, 0.0, 0x1.b8f876764beep-311,
     0.0, 0x1.499b8e7930811p-173, 0x1.ca29595b3470ap-780, 0x1.2f9ebf6f110a6p-59,
     0x1.030664a2d16aap-78, 0.0, 0x1.fa0e27336297ap-347, 0x1.22d43a2e04766p-969, 0.0,
     0.0, 0.0, 0x1.b18bc559b52fbp-257, 0x1.210b8b98a139dp-695, 0x1.2b12e1aaefb71p-960,
     0x1.964d5e89c9329p-646, 0x1.5ec09dfbfd0fp-116, 0.0, 0.0, 0x1.0188f129001a7p-764,
     0.0, 0.0, 0.0, 0x1.cf2162a2d51f8p-988, 0.0, 0.0, 0.0, 0x1.82aca98817f8fp-994,
     0.0, 0.0, 0.0, 0x1.c4d4a4c0c29b6p-818, 0.0, 0.0, 0.0, 0x1.4278459967708p-563,
     0x1.64ccd2835a26ap-962, 0.0, 0.0, 0x1.d1287f2a304e2p-948, 0x1.a22d483f50c53p-712,
     0.0, 0.0, 0x1.4381d1ff63c73p-44, 0.0, 0x1.f8b0071e9f70dp-595, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.77af5e5602674p-799, 0x1.12e985363c3f9p-313, 0.0, 0.0, 0.0,
     0x1.d258273d01122p-32, 0x1.952c5603662a8p-667, 0.0, 0x1.279c39a6a06bap-438, 0.0,
     0x1.55cc2a2d409aep-409, 0.0, 0x1.b2307bc2b9f77p-539, 0x1.2286a1916f54p-481, 0.0,
     0.0, 0x1.2da069cbc5b04p-181, 0.0, 0x1.47f8e6581d1cdp-997, 0.0, 0.0,
     0x1.6ff543b598803p-857, 0.0, 0.0, 0x1.8191a48e26b5ap-930, 0x1.9092fa7cd165cp-330,
     0.0, 0x1.850f64f6c1fe4p-885, 0.0, 0.0, 0.0, 0x1.a6153134eb33bp-549, 0.0,
     0x1.f5675aa1c4a93p-948, 0x1.f39777063b3a3p-525, 0x1.18ea6c50e664bp-388,
     0x1.92d0d49e4084dp-670, 0x1.9a10b8dbb87a3p-786, 0x1.d50e388236fb6p-603, 0.0, 0.0,
     0.0, 0.0, 0x1.5b7173c925488p-452, 0.0, 0.0, 0x1.fa206f3b07611p-643,
     0x1.8209c2980250dp-795, 0.0, 0.0, 0x1.a2cf261a65151p-652, 0x1.1d279cb98395ap-912,
     0.0, 0.0, 0.0, 0.0, 0x1.56ef7bb7a775ep-723, 0.0, 0.0, 0x1.3c87d6398f3bp-34, 0.0,
     0x1.94decea8203efp-19, 0.0, 0.0, 0.0, 0x1.5241b54fadf67p-141, 0.0,
     0x1.493adfce5edc3p-866, 0x1.cf50f2ca5e3cfp-278, 0.0, 0x1.deb233e6352d3p-612,
     0x1.6d74e3df2ebbbp-724, 0x1.9abf32ca900c1p-126, 0.0, 0x1.f8ab287efe26dp-77,
     0x1.4de9792371f03p-706, 0.0, 0x1.96fa355f083aap-477, 0x1.8f6dabd9f5d05p-773,
     0x1.9555fa4d4fa87p-72, 0.0, 0.0, 0x1.16169015f5f15p-869, 0.0,
     0x1.1e4a1d8a0f4f4p-957, 0.0, 0.0, 0.0, 0x1.cf2580a48e84cp-133,
     0x1.eab62a0b3d77bp-617, 0.0, 0x1.033a5f3326804p-763, 0x1.c2b8ed5b886aep-548,
     0x1.1981a3012d77dp-982, 0.0, 0.0, 0x1.e0857e1059849p-333, 0.0,
     0x1.ee8727332e2fp-289, 0x1.710db26bbcfffp-997, 0x1.b42cd1c9f0135p-216,
     0x1.df53526a387a8p-391, 0x1.84103ef13d949p-582, 0.0, 0.0, 0x1.7e4fe10edf18cp-953,
     0x1.19241f8bcf5c2p-60, 0x1.946c4fe233478p-552, 0x1.e8716b3398d7ep-313, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2f1cdcd047aecp-199, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.521ede1123c2p-76, 0x1.181115734089cp-345, 0x1.567e1804d6ebep-735,
     0x1.ccd90256430bap-535, 0.0, 0.0, 0x1.11358b09a4638p-691, 0.0,
     0x1.60191f43e9451p-577, 0x1.f3fb8d9bf9814p-99, 0.0, 0.0, 0.0,
     0x1.7ab4ec4cd4e02p-10, 0.0, 0x1.7b06bce8b615bp-89, 0.0, 0.0, 0.0, 0.0,
     0x1.307434b2af4f4p-126, 0.0, 0x1.d6bcd27058899p-162, 0.0, 0x1.a2bafa0788505p-109,
     0x1.6b71afc686755p-865, 0x1.8c8621f21d168p-558, 0.0, 0x1.ce9b21ff4b733p-226, 0.0,
     0.0, 0.0, 0x1.1b6da9350baa2p-635, 0.0, 0x1.2b27ba839dc0bp-181, 0.0,
     0x1.3b8500efa2ep-25, 0.0, 0x1.a077c8100d125p-860, 0x1.be08b66cbee1p-534,
     0x1.d74cd2e0a365dp-642, 0.0, 0.0, 0.0, 0x1.c1c72123e7857p-640, 0.0, 0.0,
     0x1.bc361322867c2p-349, 0.0, 0x1.bc8aad588714ap-660, 0.0, 0.0,
     0x1.37f8bcc75fd45p-729, 0x1.3132e7ea02e97p-874, 0.0, 0.0, 0x1.239718e8d9abbp-823,
     0.0, 0.0, 0.0, 0x1.0f5f76cd8ba28p-802, 0.0, 0.0, 0x1.56e51ffa0e3b4p-122, 0.0,
     0.0, 0x1.088b57c92431ap-491, 0.0, 0x1.0bf56e86d667dp-997, 0x1.c4e3c82822206p-799,
     0.0, 0.0, 0.0, 0x1.d5571d9a29a8p-826, 0x1.5bd8fa52c7a7dp-411,
     0x1.ee1cd91639afdp-242, 0x1.f521c3a767164p-997, 0x1.d1a7f8ba73efdp-940, 0.0, 0.0,
     0.0, 0x1.b37bea757711cp-1002, 0x1.9875996216bfdp-676, 0.0, 0.0,
     0x1.ff9a9a739c6c2p-194, 0x1.91e775477b6c8p-456, 0x1.7d40d252bff1cp-382, 0.0, 0.0,
     0.0, 0x1.b6cc349f7272p-488, 0x1.0d6f5ad4cce5ap-958, 0.0, 0.0, 0.0,
     0x1.c5baab830f36dp-919, 0x1.2109898869df3p-711, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.baf7c85852317p-1, 0x1.a418db88cf2d9p-230, 0x1.910facfe8da77p-98,
     0x1.9656b104c577dp-683, 0x1.c9e7d8177cb9ep-835, 0.0, 0x1.cb32c8ce98e99p-873,
     0x1.349aae5c64423p-840, 0.0, 0x1.1209a436db586p-437, 0x1.b9cd05e36ca6ep-852, 0.0,
     0x1.100e88f1dbceap-54, 0x1.b9e7f3be6dcc9p-680, 0x1.faa9a3e0f5fbbp-618, 0.0,
     0x1.eb54de41a20ap-203, 0.0, 0.0, 0x1.90add50a4a89bp-650, 0x1.68633a97776acp-105,
     0.0, 0.0, 0.0, 0.0, 0x1.dbd2aa68915bbp-194, 0x1.6aabbf711ce52p-985, 0.0,
     0x1.433b4419acb92p-714, 0.0, 0.0, 0.0, 0x1.c19f1eff29a5ep-727,
     0x1.65ff91c2c5ccfp-967, 0x1.c0d7ae3b9be7ep-21, 0.0, 0.0, 0x1.c9120d0935627p-513,
     0.0, 0.0, 0.0, 0x1.87550da332607p-403, 0x1.066555aceafcep-848, 0.0, 0.0,
     0x1.2dbb68c2e4a15p-1000, 0.0, 0.0, 0x1.50a7339599de5p-881,
     0x1.435ca683eabecp-301, 0x1.74d6a2981a6e2p-933, 0.0, 0x1.f54bada4be1efp-414,
     0x1.a5b75fc198853p-112, 0x1.a2953998c1808p-774, 0.0, 0x1.fee9442422f95p-745, 0.0,
     0.0, 0x1.ae9f627fc8941p-996, 0x1.9b2077b352c1ap-59, 0.0, 0.0, 0.0,
     0x1.ba23da3e13142p-723, 0.0, 0x1.f6c41d5307b3fp-523, 0.0, 0x1.221676a13cdfbp-277,
     0x1.8adee16af8ecdp-258, 0.0, 0x1.3e506fa61a8abp-457, 0x1.bb74bbfc3ccfep-536, 0.0,
     0.0, 0x1.0b46833b11f8dp-830, 0.0, 0x1.0163971057e3cp-151, 0.0,
     0x1.83e90c0aac31dp-1019, 0.0, 0.0, 0x1.20db479de5879p-296,
     0x1.6ab9864618de7p-116, 0.0, 0x1.d9e311faf3df4p-634, 0x1.9a6176a6b35fcp-245,
     0x1.9346c2cfdbd62p-380, 0.0, 0x1.dc18493fc60d3p-101, 0.0, 0.0, 0.0,
     0x1.bdebcf314b066p-781, 0x1.1a82fe955f527p-865, 0.0, 0x1.7aadb3f5e80cep-818, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.551946d0f4fa4p-485, 0x1.a53ca8e90311fp-79, 0.0, 0.0, 0.0,
     0x1.b2f207fbe9461p-1004, 0x1.bd49b06260c02p-716, 0.0, 0.0, 0.0, 0.0,
     0x1.267c60ee5f7b7p-782, 0x1.cb3ccced8aaefp-636, 0x1.234f69320d4d7p-693,
     0x1.82efc14f713a6p-88, 0x1.bace27b9e704bp-992, 0.0, 0x1.c75361682426ep-433, 0.0,
     0x1.8cb9140fb15dp-123, 0x1.1964822f1a5e5p-405, 0x1.284f60890127dp-655, 0.0,
     0x1.de5992478c831p-243, 0x1.e181325aeda25p-255, 0.0, 0x1.5cbea66f92539p-448,
     0x1.904f5b20e67c7p-43, 0.0, 0x1.c22a01d8b42c8p-704, 0x1.bfbf008f430e1p-1019, 0.0,
     0x1.669dab9047a7p-77, 0x1.d6495b2902345p-520, 0.0, 0x1.2898aa68343e7p-503,
     0x1.860be0c53550dp-454, 0.0, 0x1.96bc8bb6e2755p-700, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f5e7e3b4c571p-291, 0x1.3438b5af8fae1p-684, 0.0, 0.0, 0x1.1680d2f80863bp-266,
     0x1.1296b48b53aefp-777, 0.0, 0.0, 0x1.dcff307a0ecd9p-981, 0x1.8a07151b1b00ep-32,
     0x1.fd4f9d35e4c52p-325, 0.0, 0.0, 0x1.8b506346f7be1p-457, 0.0,
     0x1.62374ea7b41f3p-924, 0.0, 0.0, 0.0, 0.0, 0x1.f9a85a48a2f7cp-240, 0.0, 0.0,
     0x1.1f122330164bap-1003, 0x1.ac77d1396f5c6p-147, 0.0, 0x1.b717093970527p-709,
     0.0, 0.0, 0x1.4ec0f2f42cd63p-618, 0x1.aea46fd9534e9p-884, 0x1.770e092e02acfp-48,
     0.0, 0.0, 0.0, 0.0, 0x1.0ac2d128ae176p-659, 0x1.97e774edb8e31p-613, 0.0,
     0x1.232edb34669cep-508, 0.0, 0.0, 0.0, 0.0, 0x1.f973ffd034fcep-836,
     0x1.f8a74fe868f71p-285, 0.0, 0x1.75f098ff57b57p-373, 0.0, 0.0, 0.0, 0.0,
     0x1.69c5cceb75687p-731, 0x1.62a4547eea889p-389, 0x1.0b66a23d9c2c1p-357,
     0x1.98d52fa814141p-240, 0x1.c6b8b3df0735dp-122, 0.0, 0.0, 0.0,
     0x1.ab29fc07f716dp-729, 0x1.50196744d60dbp-936, 0x1.a25ef9dea784ap-371, 0.0, 0.0,
     0.0, 0x1.763519cfcc25p-932, 0x1.5af5def0de708p-54, 0.0, 0.0, 0.0,
     0x1.39b06fbcf0d32p-227, 0.0, 0.0, 0x1.65a4604d178c4p-430, 0x1.8155a9001b0dp-938,
     0x1.4e272ce8c4abfp-565, 0.0, 0.0, 0.0, 0.0, 0x1.58303d1b4f8c7p-356, 0.0,
     0x1.6316945861fc2p-473, 0x1.1bcb039e745f3p-296, 0x1.e29c36fee4ae3p-971, 0.0,
     0x1.4032806025a8ap-315, 0.0, 0.0, 0x1.3fc99e0e60113p-14, 0.0, 0.0,
     0x1.050657c7f49f1p-1013, 0.0, 0x1.d2fe54dc7059ep-324, 0x1.c605af88d783bp-73,
     0x1.4e548db9ab147p-684, 0x1.699a58af4f9d6p-57, 0x1.30771689736c4p-870,
     0x1.3d34bac4dc44bp-600, 0.0, 0.0, 0x1.75769950618eep-478, 0x1.458f253924b62p-645,
     0x1.808eaa3aed5c1p-159, 0x1.ca98e9496bb34p-341, 0.0, 0.0, 0.0,
     0x1.3241712584b01p-225, 0x1.55bd7e1ae323ep-761, 0.0, 0x1.f7b1e97f64fdfp-24,
     0x1.28404510706dbp-665, 0x1.30201a92bfdf7p-89, 0.0, 0x1.22e3e41c37274p-706,
     0x1.a0b0bfc4bf782p-697, 0x1.474ce360678b9p-259, 0.0, 0.0, 0x1.af2246613ded4p-635,
     0x1.312994e1cc431p-956, 0x1.786e01a67194fp-727, 0.0, 0x1.08875e6bb8387p-690, 0.0,
     0.0, 0x1.b1963d90d5068p-836, 0x1.a291ac6c7ae0cp-480, 0x1.805f5b7fca9ddp-589, 0.0,
     0.0, 0.0, 0x1.6fb177477115dp-152, 0x1.336b76e4de9dp-960, 0x1.28347b469ae8fp-349,
     0.0, 0.0, 0.0, 0x1.79af7b8b6f436p-975, 0.0, 0.0, 0.0, 0x1.b1ad61a403aa3p-473,
     0x1.f89bb2576130ep-155, 0.0, 0x1.c9b540080153bp-546, 0x1.01b3d1366b868p-520, 0.0,
     0.0, 0x1.a345c17ff344dp-501, 0x1.2a8930decba6ap-145, 0x1.0974df3b15fbfp-525,
     0x1.89d5f3231ae67p-551, 0x1.9b02d975d17dcp-919, 0x1.19a53c974c0b8p-496, 0.0,
     0x1.c292a011bb809p-125, 0.0, 0.0, 0x1.fdd58e3a27039p-208, 0.0, 0.0,
     0x1.fe2189cf8d5d6p-463, 0x1.0452a9a8cdb6fp-318, 0.0, 0.0, 0.0, 0.0,
     0x1.ce53403777005p-268, 0x1.abc2adc5200fp-707, 0.0, 0x1.5d75cb528c983p-879, 0.0,
     0.0, 0x1.a250eabc4c889p-923, 0.0, 0.0, 0x1.f9f4856c19909p-105, 0.0,
     0x1.fa6c4eb373201p-526, 0.0, 0.0, 0x1.6567943db4514p-624, 0.0,
     0x1.1ef26576022ddp-906, 0.0, 0x1.91d8d78c99c7cp-371, 0x1.c57ddf35cacecp-672, 0.0,
     0.0, 0.0, 0x1.85f665bf1ed49p-477, 0.0, 0x1.ef6cd1f88d21fp-711,
     0x1.74321281a2f5fp-266, 0.0, 0.0, 0x1.84a849ed22ceap-341, 0x1.d057791f40de7p-728,
     0x1.4c78fcd224be4p-979, 0.0, 0.0, 0x1.69006b69f8d32p-305, 0.0,
     0x1.c33d5d33920c1p-988, 0x1.07e3b15375c73p-657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9d2ffff907dccp-81, 0.0, 0.0, 0x1.b53a9100512ecp-730, 0.0, 0.0,
     0x1.034b7a09f466p-438, 0.0, 0x1.b717d27fa2dap-26, 0.0, 0x1.76cb83815c5cep-146,
     0x1.5d834baf9142p-955, 0x1.f4223b30ecbp-57, 0.0, 0x1.71bbe2698ab24p-623, 0.0,
     0.0, 0x1.606452d6d3bc3p-377, 0x1.1a5aa60839c7bp-521, 0.0, 0x1.350b32491a98ep-774,
     0.0, 0.0, 0x1.dbda1e1de0788p-705, 0x1.3cec04f492f42p-771, 0x1.3e2d174c291ecp-967,
     0x1.382d6bad97ecap-613, 0.0, 0x1.3b9c11940ee6ap-15, 0.0, 0x1.8caff9db5e365p-242,
     0x1.7d1bcc3e4404p-954, 0.0, 0x1.a585fea3e9906p-184, 0x1.33080aeb4b517p-905,
     0x1.40167ade4b18dp-994, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_roundd2_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_roundd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_roundd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
