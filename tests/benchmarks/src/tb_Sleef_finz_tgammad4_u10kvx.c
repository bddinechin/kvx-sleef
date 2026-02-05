/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammad4_u10kvx.c --function \
 *     Sleef_finz_tgammad4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.1532d588ee361p-879, 0x1.dababd31f511ap-748, 0x1.8c496d907ef11p-328,
     0x1.ebfff29432c6ap-546, 0.0, 0.0, 0.0, 0x1.eba9a4ad65d04p-461,
     0x1.b69d13019b1dap-454, 0x1.8633b8afda2f1p-868, 0x1.411882151ad7dp-696,
     0x1.00f79478ebdb5p-631, 0x1.c3c20651c2acap-753, 0.0, 0x1.09e58f772a42p-484,
     0x1.ea5a543d96638p-859, 0x1.5277ff7e82f3bp-995, 0.0, 0.0, 0x1.7badb99bc7bf7p-935,
     0.0, 0.0, 0.0, 0x1.239f65879da84p-691, 0.0, 0x1.07d4f5979e76bp-395,
     0x1.23c938416b33cp-913, 0x1.fc339523aa6f2p-734, 0.0, 0x1.7526f776acd0ep-863, 0.0,
     0x1.2b1f32eb151f7p-524, 0x1.d90db8327d349p-654, 0.0, 0.0, 0x1.e350f0acf637ap-876,
     0x1.508a646bfa781p-76, 0x1.5f8bf946e2017p-476, 0.0, 0.0, 0x1.7cc420fa45652p-791,
     0x1.8f0952a854f41p-592, 0.0, 0x1.f194611d9b2e4p-626, 0.0, 0x1.f12a81944111dp-257,
     0.0, 0.0, 0x1.8f6712e06d9ccp-534, 0.0, 0.0, 0.0, 0.0, 0x1.6279e9f835fc4p-263,
     0.0, 0.0, 0.0, 0x1.ee5a4e5a3bffcp-294, 0x1.9c8889a8b1661p-977, 0.0,
     0x1.2c871f2c445c3p-861, 0x1.7bf49521317fcp-456, 0x1.ef35e3d98e99cp-497,
     0x1.03c697045f5cp-746, 0x1.7c1f7c0521338p-93, 0.0, 0x1.6aa2d8ccddefp-650,
     0x1.579ccdcc566b9p-931, 0.0, 0x1.3cd0d7f42e617p-174, 0.0, 0x1.f656cd6b1050ap-27,
     0x1.e0ff0057d272p-972, 0.0, 0.0, 0x1.e4d548386591p-978, 0.0,
     0x1.6f0f86cb848b5p-929, 0.0, 0.0, 0x1.63599f0dc87f1p-487, 0x1.2e6f52c30c993p-441,
     0x1.dd832cac32943p-661, 0.0, 0x1.ec3d267b939ddp-698, 0.0, 0x1.1aac7165d77eep-445,
     0.0, 0x1.c30ae2e000502p-60, 0.0, 0.0, 0x1.b0e3998749dbep-455,
     0x1.8ff80ce1b65a2p-195, 0.0, 0.0, 0x1.41d9d724e43eap-149, 0.0,
     0x1.59a2cb1beecc4p-446, 0.0, 0x1.043ec38fc691dp-834, 0x1.904a4e6cb4c99p-170,
     0x1.c221f47ba8adp-735, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c31d5dfb6c11fp-401, 0.0,
     0x1.715762d014c76p-240, 0.0, 0x1.2f2e949acc566p-355, 0x1.5ef9b6d146fc8p-895, 0.0,
     0.0, 0.0, 0x1.1a35abff88abbp-507, 0.0, 0x1.0074135506ad6p-247,
     0x1.dbe253111eb28p-825, 0.0, 0.0, 0.0, 0x1.1d157562fdc8bp-858,
     0x1.0fdacd9a759b8p-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.989597ddb1e28p-540,
     0x1.44bc56ff7d934p-770, 0.0, 0x1.ec5730addf4ap-568, 0.0, 0x1.d7449b69f0767p-579,
     0.0, 0x1.c69daa77601b1p-794, 0x1.087d0f9f8237ap-34, 0x1.29688d398b243p-23,
     0x1.21c7ca34abf52p-594, 0x1.3275298fa4608p-274, 0x1.4229cabb65589p-776,
     0x1.8ce9c6ac91764p-988, 0x1.abb6d591cc1acp-915, 0x1.d7c2be8b2e85fp-790, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.248a633cb9648p-851, 0.0, 0.0,
     0x1.8dd5249081936p-204, 0x1.d83f8497aad84p-430, 0.0, 0.0, 0x1.38eb6d34c824ap-40,
     0x1.a33ee4eaab678p-348, 0x1.8154844b49665p-611, 0x1.9eb0c3e8f617bp-999, 0.0,
     0x1.0c56d2eeb2934p-820, 0x1.6636f95e5f577p-330, 0.0, 0x1.0e75bd2f892eap-128, 0.0,
     0.0, 0x1.c7c8743c5cc8p-942, 0x1.366ee2877687ep-580, 0.0, 0.0,
     0x1.1b266f4b4ea65p-415, 0.0, 0x1.bfab248bd685bp-123, 0x1.6dded091d342dp-941, 0.0,
     0.0, 0.0, 0x1.be90e0ab7bd8p-562, 0x1.3d15e7233ef89p-968, 0x1.4e9b64b9883eep-428,
     0.0, 0x1.61c3403139b14p-616, 0x1.bb1c2143c4262p-319, 0.0, 0x1.2b43f41190746p-986,
     0x1.35fb4654a9dc9p-586, 0x1.077e9c2517af7p-39, 0.0, 0x1.4a66b0f6390a4p-829,
     0x1.bffdfc25c64fap-933, 0.0, 0.0, 0x1.7c5e07f2a18ap-790, 0.0, 0.0, 0.0, 0.0,
     0x1.d905cd063113p-833, 0.0, 0x1.5d39e9c49848cp-929, 0.0, 0.0,
     0x1.fef9349d8c546p-249, 0x1.98e21110d0cd1p-108, 0x1.e3bc3f41511ecp-5,
     0x1.651c93db050d7p-323, 0.0, 0x1.ed7cf59b79d7ep-191, 0x1.137b96bf0b9d1p-691,
     0x1.c3ed8ce9a8524p-248, 0x1.1d3a67df5d4e1p-128, 0.0, 0x1.14bb88b384dc1p-795, 0.0,
     0.0, 0x1.2c87053381f0cp-153, 0.0, 0.0, 0.0, 0x1.52316ed932493p-614,
     0x1.dd1aa4691f206p-825, 0.0, 0x1.7230676a2a564p-141, 0x1.977cbbf593317p-247, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b6591cedb5a1p-308, 0.0, 0.0, 0.0,
     0x1.d086d91485477p-8, 0.0, 0.0, 0x1.ed833c1b6b762p-140, 0x1.d7885bc9255ddp-412,
     0x1.d1ec4b38a6a8bp-259, 0.0, 0x1.84cbdbd77afacp-966, 0x1.5eba43f5bc9f1p-617,
     0x1.5577e85c88782p-717, 0x1.6848228c41e7dp-868, 0.0, 0.0, 0.0,
     0x1.69cbb0b8e9b9p-758, 0x1.0b58b19ea111ap-562, 0x1.51a0f65245794p-401, 0.0,
     0x1.4ab82802aea01p-471, 0.0, 0x1.533131deff60fp-795, 0.0, 0.0,
     0x1.486966d46562ap-502, 0.0, 0x1.e33f2df7c3d9fp-583, 0x1.77f7936dc8289p-149,
     0x1.883f83da42e9ap-939, 0.0, 0x1.daf22805b6cc4p-846, 0x1.7d8f2eb45d238p-891, 0.0,
     0x1.dd8ea3c7f0adfp-945, 0.0, 0.0, 0x1.8d369cbb198b4p-211, 0x1.b6423154ff02dp-789,
     0.0, 0.0, 0x1.7256a510495c2p-93, 0.0, 0x1.75db9abf93719p-595,
     0x1.59473243d7dd1p-751, 0x1.c01524b40a093p-649, 0.0, 0x1.e35502d17decfp-433,
     0x1.7f1b1baf58e58p-981, 0x1.99ec2eaf980bp-171, 0.0, 0x1.f552b57606ae2p-566,
     0x1.c553c03536f16p-919, 0x1.d48a31d673fecp-624, 0x1.4b2237e75e703p-200,
     0x1.18e910507818bp-577, 0x1.0ba06ee93e45ap-408, 0x1.d9366f4e0908ep-969, 0.0,
     0x1.69dfb7595f42bp-583, 0.0, 0.0, 0.0, 0.0, 0x1.dafe34bd4ae3ep-888, 0.0, 0.0,
     0.0, 0x1.b67cd2417972ep-679, 0.0, 0x1.909c0e6979e49p-506, 0x1.03d97d844458ap-998,
     0x1.a0e269c89ac95p-165, 0x1.3bed233ca78aap-242, 0x1.d3c55a52d8533p-896,
     0x1.22084c729187dp-272, 0x1.e9f403141e0b9p-173, 0x1.d120a3f4d95e6p-184, 0.0,
     0x1.b408b925e7f64p-816, 0x1.c44feae3f3e91p-657, 0.0, 0x1.8828e897da2dp-490,
     0x1.92634c75fbb56p-209, 0x1.6f3e6c96d77aep-891, 0.0, 0.0, 0.0,
     0x1.90959972f4eb1p-152, 0x1.c15739b837085p-816, 0x1.cc1615c5c75b7p-672, 0.0, 0.0,
     0x1.c53675b3bb4d5p-194, 0x1.d7d08bacef0fbp-300, 0.0, 0.0, 0.0, 0.0,
     0x1.83b51d8a9245fp-422, 0.0, 0x1.ebdf7f16f5be5p-386, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.23684dfe0ff08p-497, 0x1.26961a2ced571p-964, 0x1.ff81f51dddf04p-969, 0.0,
     0.0, 0.0, 0x1.40995e8df7215p-354, 0x1.37280db8e3ea9p-90, 0.0, 0.0,
     0x1.e864f87195f7ap-709, 0.0, 0.0, 0x1.37375d90de5b6p-539, 0.0,
     0x1.157d230798d35p-70, 0.0, 0x1.ebd6604904534p-468, 0.0, 0x1.be6b490175a8dp-717,
     0x1.04fd6f243dd8fp-853, 0x1.5ee6f89196ca9p-1022, 0.0, 0x1.f86bd5d80273ap-875,
     0x1.7813c2ecaa32p-624, 0x1.9b513dbb57ff4p-515, 0.0, 0x1.ae9ba386d5905p-446,
     0x1.23cae51fc56dap-65, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b0432bc778f1p-486, 0.0, 0.0,
     0x1.de38de520eccp-920, 0.0, 0.0, 0x1.50471cfdfc92ep-523, 0x1.09567abbc68f9p-671,
     0x1.cb709810542dbp-500, 0.0, 0.0, 0.0, 0.0, 0x1.b0f28b2246726p-107,
     0x1.1630fccf51422p-556, 0.0, 0.0, 0.0, 0x1.a2e9423edab19p-42, 0.0,
     0x1.02ebe8710c4e3p-804, 0x1.248bb5854b3afp-480, 0.0, 0.0, 0x1.c848dbdfeac12p-834,
     0x1.9c92dea8bfa27p-93, 0.0, 0.0, 0.0, 0.0, 0x1.4205e06f6194ep-750, 0.0, 0.0, 0.0,
     0x1.6eed46cfa8045p-1008, 0x1.813d1e94e86cep-295, 0.0, 0x1.718e4aaed134p-942,
     0x1.e36506e30fb0ap-143, 0x1.5ee3454f3f658p-195, 0x1.f891409781265p-200,
     0x1.87d0c94280d65p-1012, 0x1.bbcf11cdcee9bp-990, 0.0, 0.0,
     0x1.063d088b85d0fp-694, 0.0, 0x1.7dcdb6d3051e5p-664, 0x1.b9fa4ed2a7f01p-27,
     0x1.e1f53c1f66d37p-531, 0.0, 0x1.25f75e4973016p-383, 0.0, 0x1.e02c3f9dd4007p-752,
     0.0, 0x1.50374cbeceb33p-197, 0x1.fd5e309d53dcp-232, 0.0, 0.0,
     0x1.3861bc43ec262p-773, 0x1.0cac1f0f66c7dp-830, 0.0, 0.0, 0x1.f2b320671b5b1p-243,
     0.0, 0x1.1f416ac66b7c9p-456, 0x1.dc060a2ab2ae4p-428, 0x1.2ec3d2f2bfddbp-132, 0.0,
     0.0, 0.0, 0x1.3f00a88b3506dp-255, 0x1.79aafa5cbd31dp-690, 0x1.e97a6e1e9a5b4p-781,
     0.0, 0.0, 0x1.6daa93fa81aafp-841, 0.0, 0.0, 0x1.e2eed0a2e1ad8p-22,
     0x1.724bf7420f982p-382, 0x1.9d30ed0e76164p-941, 0x1.6fd60c4b5e1e4p-209, 0.0,
     0x1.c3afa11fe1a9ap-244, 0x1.d2e654c5f46f1p-404, 0x1.8bc825f92d25fp-193, 0.0,
     0x1.5381a217520fbp-449, 0x1.c4464ebf37d1fp-231, 0.0, 0.0, 0.0,
     0x1.31440522d620ap-479, 0.0, 0.0, 0x1.c3f077c0ec7cfp-371, 0x1.271372c4fe71p-1014,
     0.0, 0x1.119083332dd22p-148, 0.0, 0.0, 0x1.99d1a1600d3fp-369, 0.0, 0.0,
     0x1.c0e4c3c466db7p-789, 0.0, 0x1.767f382651041p-768, 0x1.6aab84b467735p-931, 0.0,
     0x1.6ca3de2657a6fp-831, 0x1.18279850bbd96p-391, 0.0, 0x1.1a2de86a5bf33p-830,
     0x1.13d7ac5e5ee32p-264, 0x1.55e1e15c80c33p-113, 0.0, 0x1.c727404311b5bp-367,
     0x1.997c419a2e989p-391, 0.0, 0.0, 0x1.5ad539d1bd1d1p-763, 0x1.846dcb04a6ea6p-493,
     0.0, 0x1.4c687917f601fp-464, 0x1.221bfd8396c5ap-1008, 0x1.79fecd10b3647p-144,
     0.0, 0x1.7292ff67be8fcp-531, 0x1.dbc952884f38ep-459, 0x1.7e552cde31e16p-287, 0.0,
     0x1.e28a3d6b49061p-682, 0.0, 0x1.ee0ecc26f0c7ap-1013, 0x1.41ed21d848dcep-54,
     0x1.038d98e501e7bp-141, 0x1.4698813d6ab4dp-663, 0x1.dfde07a6403e2p-398,
     0x1.f273e89cdc325p-320, 0.0, 0.0, 0.0, 0x1.ad1e012c0f39p-688, 0.0, 0.0, 0.0, 0.0,
     0x1.af1bdf616a104p-832, 0x1.8d017a8f27de7p-85, 0x1.29d8aa63bc9d8p-598, 0.0,
     0x1.7dcf0ae201423p-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de21f7bd91873p-217, 0.0,
     0.0, 0x1.08bd7e7a7d299p-889, 0x1.a18000de9c43dp-756, 0x1.0948b3d39a682p-597,
     0x1.f3d6b5e7776f3p-1010, 0x1.db70ca544b1b5p-663, 0.0, 0x1.3bc3815eed378p-665,
     0x1.0915eb3a51028p-781, 0x1.3a0151a3c824ap-912, 0x1.f7897dead13cep-797,
     0x1.5566908514372p-720, 0x1.b44a1ae7a0d36p-608, 0.0, 0x1.6c9dd79555a37p-768, 0.0,
     0x1.7c2bd55495683p-495, 0.0, 0.0, 0x1.c210491d300b9p-267, 0.0,
     0x1.1e3c7b907c445p-298, 0x1.8efb67a24d1a3p-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d595495384c12p-1006, 0x1.87f9c66fa31ep-605, 0.0, 0.0, 0x1.91f22b262d504p-643,
     0x1.27f31f759b415p-787, 0.0, 0.0, 0.0, 0.0, 0x1.61f3a0aebf758p-319,
     0x1.97071f4c47c81p-708, 0.0, 0.0, 0x1.3c167a8deda11p-172, 0x1.8bcb65d9d02c6p-303,
     0.0, 0x1.15ad7b8b56448p-246, 0x1.9be72695e0d7dp-213, 0x1.587a0b3a02003p-667, 0.0,
     0.0, 0.0, 0x1.747285b6bbf79p-283, 0x1.4715826102e1fp-472, 0x1.57eb073e9b6f1p-377,
     0x1.0365e40e0c943p-764, 0x1.f69dc05d1807p-783, 0.0, 0x1p0,
     0x1.9d6ae952f94a6p-306, 0.0, 0x1.aebc17acd5c83p-30, 0.0, 0.0, 0.0, 0.0,
     0x1.86498aad51p-260, 0.0, 0.0, 0x1.51cd444c075e7p-3, 0x1.6b5753153db86p-656,
     0x1.1b9eb8b7741c4p-196, 0.0, 0.0, 0.0, 0x1.96d5580ba8affp-853,
     0x1.e12d75a9c9bdcp-888, 0.0, 0.0, 0x1.4bf4032c31ddep-785, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0448827f817c1p-964, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.092291d873414p-686, 0.0, 0.0, 0.0, 0x1.e69188a3aa35cp-928,
     0x1.360722b39ffccp-565, 0x1.78900aaf6fa0ap-988, 0.0, 0.0, 0x1.9fe7aad68a179p-295,
     0.0, 0x1.88e47092729b8p-956, 0.0, 0.0, 0x1.7fd96a6d9a06ap-140,
     0x1.0176b2f34fb16p-210, 0.0, 0x1.fb3f23ef62662p-115, 0.0, 0.0,
     0x1.f459ff5e8524cp-532, 0.0, 0.0, 0.0, 0.0, 0x1.9dee3d8d56c66p-897, 0.0,
     0x1.1d1497dc7a9b1p-989, 0.0, 0x1.1b4300eb90113p-233, 0x1.6d739eef6e99fp-562,
     0x1.d80359c90eedap-616, 0x1.59d7f48f66a0cp-464, 0.0, 0x1.69f764cd9c5e1p-748,
     0x1.1f21bd84f2b19p-842, 0x1.844cc7987638p-232, 0x1.f538d97a99e99p-950,
     0x1.a2ce63f7a7fa1p-307, 0.0, 0x1.7c9d4eb461a27p-144, 0x1.21785b055d833p-216,
     0x1.56444052b56eap-603, 0x1.84c0c46cca179p-1022, 0.0, 0x1.e5325593cf0bfp-953,
     0x1.e401a683b92fcp-554, 0x1.53eb42e84490ep-734, 0x1.3aa11883215aap-482,
     0x1.f66d702340bfap-208, 0.0, 0.0, 0x1.9c4d6593b1612p-769, 0.0,
     0x1.bf281e00a27c1p-633, 0.0, 0.0, 0x1.b6bd2fcea5369p-807, 0x1.0311b53b3753fp-363,
     0x1.f117267f11ffcp-204, 0.0, 0.0, 0.0, 0.0, 0x1.1d03ac66727cdp-463,
     0x1.03520d4cf233dp-708, 0x1.cc1d282780d0dp-742, 0x1.fdfe6922cc57bp-727, 0.0, 0.0,
     0.0, 0x1.460a0a57327b6p-1021, 0x1.7e2eed5446a64p-152, 0.0,
     0x1.62a6838f2bf8dp-125, 0x1.46481fc20646bp-73, 0.0, 0.0, 0x1.6847710360c25p-599,
     0x1.811684be5e0aap-817, 0.0, 0x1.0f6ac27cd6291p-100, 0.0, 0x1.c8517e51a731p-165,
     0x1.59f4393cf9685p-973, 0.0, 0x1.b7518683668bcp-578, 0.0, 0x1.9f7053a2f456fp-731,
     0x1.c464848dcf578p-658, 0.0, 0.0, 0.0, 0.0, 0x1.e7dfd0b474e92p-494, 0.0, 0.0,
     0x1.8c0c11dc4c073p-586, 0x1.331fe60044045p-252, 0x1.cee00d3cc570ep-47, 0.0,
     0x1.5a70dfc6ab8b1p-171, 0x1.faf940a581459p-678, 0.0, 0x1.1efe68d4e21fep-585,
     0x1.806118845a79ap-25, 0.0, 0x1.4981b685ba626p-895, 0.0, 0x1.d4adb1d398e63p-462,
     0.0, 0.0, 0x1.308bcc6bc5498p-864, 0x1.fdd6211244e0ap-807, 0.0,
     0x1.9d02fc3ff7decp-149, 0.0, 0x1.d79322ec5ee26p-894, 0.0, 0x1.44a5df43ff92bp-471,
     0x1.356db7988904ap-302, 0x1.42bad5c6a6db3p-37, 0.0, 0x1.ec61df1fd234bp-546, 0.0,
     0.0, 0.0, 0x1.f7bf542dc4ee3p-843, 0.0, 0x1.57c850a0e35b8p-211,
     0x1.c7953c917de77p-78, 0x1.37ff9b53332aap-370, 0x1.fbe97abe28101p-947,
     0x1.14ddc585d3194p-961, 0x1.a70b3292fbc93p-329, 0x1.5635752693732p-241, 0.0,
     0x1.9bf052af86389p-561, 0x1.7adbc5cf3992fp-941, 0.0, 0.0, 0x1.bc154379bac2p-60,
     0x1.999ca862d0fc4p-80, 0x1.3b6ab1b6439abp-588, 0x1.a52d040967c96p-824, 0.0,
     0x1.d5be75609e9cap-463, 0x1.906bbc666ddf9p-570, 0x1.046ecf9f94dd8p-720,
     0x1.60c2197a4fba6p-139, 0x1.362a85fc2c64bp-188, 0x1.3e959e3bcbe0ep-521, 0.0, 0.0,
     0x1.affc57ac7ec59p-290, 0x1.478487532370ep-982, 0.0, 0.0, 0.0,
     0x1.1b6c653f47073p-47, 0.0, 0x1.5813c5c511a92p-270, 0.0, 0.0, 0.0,
     0x1.3ddbb414a1554p-237, 0x1.8c2024e0b49acp-594, 0.0, 0x1.6608f9f87b803p-348, 0.0,
     0x1.1fc893febabcp-622, 0x1.eca1b3928fe2cp-336, 0x1.24412ad68ce1cp-781, 0.0, 0.0,
     0.0, 0x1.e0c40e3e3980dp-583, 0.0, 0.0, 0x1.c2057e574f81ap-321,
     0x1.4c5b736b7650ap-925, 0.0, 0.0, 0.0, 0x1.1edd909daa312p-760, 0.0, 0.0,
     0x1.6c85b1cea3219p-595, 0x1.5f163e5bc76a9p-937, 0.0, 0.0, 0.0,
     0x1.d658a6b1403c3p-45, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1381237b400cp-691,
     0x1.f36ae23cf2f4bp-690, 0x1.250ac21c4c44p-179, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b40bf40c62299p-630, 0.0, 0x1.5798dd904918cp-570, 0x1.002f0c023a9a8p-232, 0.0,
     0.0, 0x1.23b86e3053532p-957, 0x1.3492fe473d66fp-178, 0x1.a82995682448ep-670,
     0x1.ff4e96078c9e3p-530, 0x1.51f6f16032d6p-201, 0.0, 0x1.47ecd270ecda5p-779,
     0x1.61f9ec8316f67p-385, 0.0, 0.0, 0x1.7f00aead7d938p-723, 0x1.b54b85b9b06d6p-330,
     0.0, 0x1.78c3a12de9bebp-909, 0x1.8e2f8bf6d72cfp-182, 0x1.3b69a8ba873bdp-30, 0.0,
     0x1.b4e540ef3dda2p-229, 0.0, 0.0, 0x1.71b5b2f269dc1p-360, 0.0,
     0x1.6c68c7e3c95f7p-135, 0x1.a270282118a69p-205, 0x1.5031eb6466887p-394,
     0x1.d1fbc4173f0ep-65, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a73b14e1c76f7p-570, 0.0,
     0x1.176ec94e39281p-245, 0x1.314af4f63d034p-924, 0.0, 0x1.2ea4de0ffa98cp-256, 0.0,
     0.0, 0x1.b2296be4c7defp-149, 0.0, 0x1.a6db0cc4979dap-332, 0x1.cc5d90f89b242p-35,
     0.0, 0x1.0f8376092f465p-739, 0x1.36772b2ecc739p-91, 0x1.fbb09e185f25bp-774, 0.0,
     0.0, 0x1.f17881bc529a1p-695, 0.0, 0.0, 0.0, 0x1.dada9c97773adp-295,
     0x1.be19797db7806p-376, 0.0, 0x1.fa74d3f9036b1p-639, 0.0, 0x1.c0e95b7d344edp-562,
     0x1.0e96135d30f6ap-547, 0.0, 0.0, 0.0, 0x1.2c32f4ff61115p-172,
     0x1.2f767c482d29ep-862, 0.0, 0x1.b915eb2fe481ap-26, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd5815e2d3b03p-657, 0x1.551d98a89ed28p-865, 0.0, 0.0, 0x1.74399f9b6726fp-438,
     0x1.57be215f0484dp-25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12a33dda0381bp-187, 0x1.0c0c6ce77a747p-708, 0.0, 0.0, 0.0,
     0x1.a44affedbba23p-89, 0.0, 0x1.a59fd73e85e37p-521, 0x1.99c4c578082e4p-972, 0.0,
     0.0, 0x1.e15b4d561b21cp-195, 0x1.3b31c2f57bd89p-379, 0x1.f2f23e219d62p-657,
     0x1.43c088b9561fcp-470, 0x1.2b134b69271c9p-309, 0x1.051e717c5d59p-892,
     0x1.cff3189961258p-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.334d783e1adabp-331,
     0x1.eb8665542ebaap-345, 0x1.417ced76b5baap-236, 0x1.fa7328f354963p-411, 0.0, 0.0,
     0x1.24a27f8fe962ap-963, 0x1.9a1de5bc7d8fbp-703, 0.0, 0x1.75c4a3fb3f308p-425,
     0x1.af2e2fc8cf56dp-345, 0x1.e1556b14ab423p-357, 0x1.b194d1e3187c8p-364,
     0x1.c0f39e12cd85cp-674, 0x1.51942ca84d717p-906, 0.0, 0x1.fcebd9a956eaap-446, 0.0,
     0x1.2c4589e448083p-1006, 0.0, 0x1.29106058c84c8p-263, 0.0, 0.0,
     0x1.bf9aae6bd8f1cp-409, 0.0, 0x1.ed8e4c5eb7e21p-407, 0x1.b838e1424013ap-504, 0.0,
     0x1.26861b5b895ep-660, 0.0, 0.0, 0x1.ac9ba87f74efp-56, 0x1.47e32a55a59e7p-345,
     0.0, 0.0, 0x1.9e45c8fa90f71p-538, 0x1.4c6466dca4891p-850, 0x1.c07414a7d074cp-564,
     0.0, 0x1.6cb8cbd96a172p-760, 0.0, 0x1.45aac6709954bp-873, 0x1.fb39b79af6cf3p-495,
     0x1.6e7cdb0de195p-988, 0.0, 0x1.0eb43af7cfd03p-278
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
            tmp1 = Sleef_finz_tgammad4_u10kvx(tmp0);
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
    printf("Sleef_finz_tgammad4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tgammad4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
