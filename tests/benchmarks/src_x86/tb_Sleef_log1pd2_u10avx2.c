/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log1pd2_u10avx2128.c --function Sleef_log1pd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.16b0c982063dap-938, 0.0, 0.0, 0x1.4db7978a2ecb3p-131, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8f16b158b2993p-578, 0x1.fd7d4b493acc7p-78, 0.0,
     0x1.d3eafb8eeaa47p-207, 0x1.45f92e47d26b1p-826, 0x1.8686de5494bdfp-285,
     0x1.1c6dce4bd0657p-939, 0x1.adc7280be1f9dp-384, 0.0, 0x1.35518f777781bp-672, 0.0,
     0x1.7aa0c38a48106p-925, 0.0, 0x1.d1497cff4c8fbp-839, 0x1.e531b67c76b3ep-913, 0.0,
     0x1.9cdce9d471b5ap-761, 0x1.0a5f8f367c6b5p-401, 0x1.c090d4d8e23ecp-724, 0.0,
     0x1.5ba47d5fcebe5p-690, 0.0, 0.0, 0x1.4f7f642a9a305p-886, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2c37d470da0f4p-476, 0x1.774e6e08211eap-1008, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.055302d430992p-62, 0x1.5956be2f37784p-416, 0x1.a4426abba9683p-529,
     0.0, 0.0, 0.0, 0x1.a271a349ff49bp-840, 0x1.5984092f232e7p-22, 0.0, 0.0, 0.0, 0.0,
     0x1.eaf168cfc76bcp-473, 0.0, 0.0, 0.0, 0x1.14f8f893045e6p-1019,
     0x1.994596e383f4cp-296, 0.0, 0x1.4e1175bf3d5a1p-715, 0.0, 0.0,
     0x1.d49d24cff235cp-945, 0.0, 0x1.783ae3308de6dp-245, 0.0, 0x1.09aca3cb821e6p-91,
     0.0, 0x1.88f3db3914d74p-310, 0x1.eaaf3b8012068p-879, 0x1.dc3ebb61c895bp-332,
     0x1.c2470652a39c3p-729, 0.0, 0.0, 0x1.b942184a59d48p-173, 0x1.5441d7bbaf8a5p-454,
     0x1.7c61a5c4917dbp-290, 0.0, 0x1.bc047c6c1464ap-528, 0x1.81e4e012fdc8ep-425, 0.0,
     0x1.1d048a1ab0564p-309, 0.0, 0.0, 0.0, 0.0, 0x1.fb53cc80476a3p-984, 0.0,
     0x1.759ab91f6609cp-25, 0x1.c1d656fb6563cp-125, 0.0, 0x1.098d6200ea0a9p-631, 0.0,
     0x1.02a2a08f2d7d9p-984, 0x1.d83df4ef42053p-549, 0x1.094b82e8cca97p-997,
     0x1.e50addc832439p-434, 0x1.3da7640146a6dp-882, 0.0, 0.0, 0.0,
     0x1.e7c2eba253b79p-926, 0.0, 0x1.c7ff954053789p-886, 0x1.1718ff19a0bdfp-493,
     0x1.9b381840eacbbp-901, 0.0, 0x1.a03dc9e0ae12ep-832, 0x1.4d8804edb537fp-808, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.83c9f4f7ce981p-411, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f0f1f981c78p-962, 0x1.a2db39761ab84p-1000, 0x1.063d8029a2583p-673, 0.0,
     0x1.840bcebe42107p-222, 0x1.b9366feace7adp-114, 0.0, 0x1.89004e6bf7eadp-67, 0.0,
     0.0, 0.0, 0x1.a0bfa8ab97ce8p-129, 0.0, 0.0, 0.0, 0.0, 0x1.e56dcafdc73c6p-706,
     0x1.41e0e9fd19732p-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.149f8798337f9p-555, 0.0, 0x1.6483c46215856p-994, 0x1.12904c1850cb1p-112, 0.0,
     0x1.8a809a91d16d5p-912, 0x1.2c351ff56508p-412, 0.0, 0x1.0263c5f9ebeaap-853, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b49cfc1d4da62p-471, 0x1.ec5c8a6368aa8p-353,
     0x1.97a568706084cp-242, 0.0, 0.0, 0.0, 0x1.04e478186b0a4p-88,
     0x1.09882bf4cc1b6p-850, 0.0, 0x1.d8560fdaa2aa5p-976, 0.0, 0.0,
     0x1.cc1d9017af7bfp-871, 0.0, 0x1.1be01e0d191f2p-848, 0x1.c2f3f719ebfa8p-69,
     0x1.8623347f8b83dp-273, 0x1.b2a5f2331dbf1p-611, 0.0, 0.0, 0x1.b873141d10402p-826,
     0.0, 0x1.51030c748c65cp-288, 0.0, 0x1.f0f85e800d47bp-820, 0x1.daba12ae1e2eep-133,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4916ef53acc2p-803, 0.0, 0.0,
     0.0, 0x1.86c22205761b8p-725, 0.0, 0.0, 0.0, 0.0, 0x1.bb5d2c72eb701p-695,
     0x1.419077bd1dfa1p-897, 0x1.30a9cafcdc11p-61, 0x1.0a8cd22669d7dp-442, 0.0, 0.0,
     0x1.722a5e6ab87p-866, 0.0, 0x1.a70863844dc6p-854, 0x1.8030a9a57f4cfp-559, 0.0,
     0x1.72aac485571e8p-681, 0.0, 0x1.45356cf8e918ap-799, 0.0, 0x1.f8d2e6cc44305p-574,
     0x1.df323f025f6dcp-132, 0.0, 0.0, 0x1.abaac248fd439p-546, 0x1.ccf1ede89524ep-446,
     0x1.42b31b64f5098p-124, 0x1.89365391e6972p-747, 0.0, 0.0, 0x1.f4085dcdc19b9p-428,
     0x1.e6837a8cb72fp-908, 0x1.532d97ca9972bp-502, 0.0, 0x1.6c430bfde9a79p-963, 0.0,
     0.0, 0x1.1dc305f7cd015p-783, 0x1.8ac0e1ec5620bp-643, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4f3cd11b9e9ap-721, 0x1.cad7bf0d88b37p-347, 0x1.6e2d6ac408223p-279, 0.0,
     0x1.d22ca044e7a66p-985, 0.0, 0x1.8cd69d623f994p-944, 0.0, 0x1.1eb6a5148d153p-922,
     0.0, 0.0, 0x1.97c1af8aa4ba1p-865, 0x1.2a598da6dad77p-122, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.07ceb02444f24p-1020, 0.0, 0x1.8d3df6e481501p-888,
     0x1.9d4589a75fb09p-65, 0x1.8ff93adc62c12p-556, 0x1.c66df39dcefe5p-985, 0.0,
     0x1.17c77b39939c2p-504, 0.0, 0.0, 0x1.54b87ea1195adp-403, 0.0, 0.0, 0.0,
     0x1.192444e94954bp-922, 0x1.be97c5777b4e2p-533, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34d347e6d0eddp-131, 0.0, 0x1.f0cf0c6669ddep-820, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4cf9f385cee2cp-894, 0x1.ed859d7e4fe3dp-142, 0.0,
     0x1.f086fabc6f077p-993, 0x1.cb6d1b3a6de6fp-350, 0x1.b5128e86f6c18p-564, 0.0,
     0x1.d51c0a9473c21p-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b6957fb8a162p-764,
     0x1.ad63a4197543dp-651, 0.0, 0x1.529236daf950fp-588, 0.0, 0x1.f75ccc06b8665p-911,
     0.0, 0.0, 0.0, 0x1.74ddf1bab9cb7p-361, 0.0, 0.0, 0.0, 0x1.0c9327c145977p-577,
     0.0, 0x1.bd81b8ed77b97p-440, 0.0, 0x1.06ce2a1403f4p-387, 0.0,
     0x1.21aa65292354fp-826, 0.0, 0x1.e945408dc2191p-289, 0x1.c64433ec999b4p-2,
     0x1.ba167d3100a26p-514, 0.0, 0x1.fe8234b65b1b4p-1018, 0.0, 0.0,
     0x1.5e0587fdcf1b6p-590, 0x1.3f9952f341265p-914, 0x1.11dfb75e6f135p-834, 0.0,
     0x1.aacef77d42b78p-573, 0x1.11d6bf6a1ef08p-844, 0x1.4c8a0cb3c1e6ep-216, 0.0,
     0x1.d463faab7c1dep-23, 0x1.a3361dce60ce3p-341, 0.0, 0x1.7df5befc8ce4p-383, 0.0,
     0x1.2944422206c2p-77, 0.0, 0.0, 0.0, 0x1.353f468f08b9fp-223, 0.0,
     0x1.58474fd55cd6ap-346, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db45d969a13dcp-624,
     0x1.758eab4e0912bp-870, 0x1.9e83d21055796p-212, 0x1.9f018b4fd760ap-749, 0.0,
     0x1.5c41c7916364p-582, 0x1.97b32ca3006bdp-764, 0.0, 0.0, 0.0,
     0x1.4e59ab1852033p-213, 0.0, 0x1.1e0ab3d8bc5ap-878, 0x1.86aca836a3a36p-339,
     0x1.99655de0f3726p-300, 0.0, 0.0, 0.0, 0x1.ae4ab51c8cbfcp-238,
     0x1.705ad0ba6f8edp-463, 0.0, 0x1.96b41b6ffd6f7p-80, 0.0, 0.0, 0.0,
     0x1.38b592921f552p-764, 0x1.c339ffd8f992p-875, 0x1.5a5bbd050d93p-632, 0.0,
     0x1.3ea2826667254p-287, 0x1.e575cf9e40b6bp-588, 0x1.233d5c4dc076ap-342,
     0x1.644bc6c17245dp-409, 0.0, 0x1.8df428ddab3bbp-578, 0x1.1e7429f9b4ab4p-100,
     0x1.25380ab219c45p-76, 0.0, 0x1.bc12f6d35e3b1p-343, 0x1.3d6e3b378606dp-970, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6620e5b381cep-59, 0.0, 0.0, 0x1.5164cb00bbbedp-401, 0.0,
     0.0, 0.0, 0.0, 0x1.b517bcdb06a1cp-714, 0.0, 0x1.44f220219f16fp-713, 0.0, 0.0,
     0.0, 0x1.4f0d59051864bp-355, 0.0, 0.0, 0.0, 0x1.debbb081e0931p-639, 0.0, 0.0,
     0x1.e34df2e0699dp-814, 0x1.df91311aae007p-745, 0.0, 0x1.80690facbb913p-983, 0.0,
     0x1.edf4789707dbdp-51, 0x1.24d6bfab0e043p-681, 0x1.799705b7fd43fp-330,
     0x1.e6fe6369bf2e4p-758, 0x1.4c91ba1d7e7dbp-55, 0.0, 0x1.422d4de867b54p-74, 0.0,
     0x1.41e5780bc56bep-595, 0.0, 0.0, 0.0, 0x1.83741b43726dfp-926,
     0x1.7afb60d60d37bp-487, 0x1.076be19616caep-447, 0.0, 0.0, 0.0, 0.0,
     0x1.d5e3a08b92cf7p-386, 0.0, 0x1.03dc9c0e07504p-27, 0.0, 0x1.933e1bf6124c8p-384,
     0x1.93bb26e51c9ebp-350, 0.0, 0.0, 0.0, 0x1.9e8a2b565af72p-316,
     0x1.91c33e3c4ab37p-992, 0.0, 0x1.6aea69df5d61ep-551, 0.0, 0x1.6b3c961635043p-737,
     0x1.a25b82e270d48p-125, 0.0, 0.0, 0.0, 0x1.68848a49dd911p-88,
     0x1.1276e7f8f96c1p-427, 0.0, 0x1.5c8785c3ff93ap-442, 0x1.41e32b58c25c7p-189, 0.0,
     0.0, 0x1.d38850e261ddcp-663, 0x1.731083c86cd7ep-107, 0x1.2bfc906ce2176p-984,
     0x1.e25558937c34bp-425, 0x1.c3fc5f540cd3cp-384, 0x1.4114b6cc64a87p-684, 0.0,
     0x1.43316d31f5a69p-986, 0.0, 0.0, 0x1.372d6ea0fe666p-32, 0.0, 0.0,
     0x1.0da3ad6a3c6b8p-785, 0x1.56a343df628c4p-182, 0x1.b6b0c7e72a2d1p-772,
     0x1.b8e9cf414dc62p-498, 0x1.89b2bce7c0d3bp-577, 0.0, 0x1.f0e404d36011fp-327,
     0x1.14c91166e5edcp-620, 0.0, 0.0, 0x1.7bdc4455df57fp-420, 0x1.200f26537a945p-612,
     0.0, 0.0, 0.0, 0.0, 0x1.186e20db7d04cp-153, 0.0, 0.0, 0.0,
     0x1.2639281c984a1p-644, 0x1.f9b4a421a171fp-287, 0.0, 0.0, 0.0,
     0x1.46d4757af1949p-987, 0.0, 0x1.26f921335755bp-271, 0.0, 0.0,
     0x1.afaadf006b386p-958, 0.0, 0x1.39e215b61e864p-841, 0x1.863be1a9de063p-383,
     0x1.aa9e6d90e50d5p-295, 0x1.fe760cb2f1878p-533, 0.0, 0x1.ac46886823acfp-13,
     0x1.c4275a5635285p-945, 0x1.d8131b2ff8022p-354, 0.0, 0x1.a0a9c4e66683p-266,
     0x1.42b451aa3f735p-770, 0x1.d0792dbea874p-569, 0.0, 0.0, 0x1.5ad1e245491f6p-833,
     0.0, 0.0, 0x1.871fdac61dcccp-839, 0x1.4f4690e57603p-232, 0.0, 0.0,
     0x1.8f16517a0fe7ap-604, 0x1.8228af62faabp-435, 0x1.23ff795a80b54p-821, 0.0,
     0x1.7016ebed9485p-309, 0x1.1d12cd370d00dp-357, 0.0, 0.0, 0x1.4edf74e8c512p-62,
     0x1.9e183096dc07bp-133, 0x1.1c967fd24d32dp-511, 0x1.a536dfff332ecp-366, 0.0,
     0x1.b6ed0fd5e63cdp-74, 0.0, 0x1.2f99ff7d34ab7p-969, 0x1.a8b51e247ed73p-989, 0.0,
     0.0, 0x1.c298bd37a9ca5p-700, 0x1.fce98952ff10cp-611, 0.0, 0x1.83a9e23de8f1p-761,
     0.0, 0x1.6319abe636ad9p-789, 0x1.4c537bbfd680cp-979, 0.0, 0.0, 0.0, 0.0,
     0x1.d4cc7d3022e18p-123, 0.0, 0x1.0930708876b8ap-87, 0.0, 0x1.fb0883e65c599p-195,
     0x1.402047e03fb34p-691, 0.0, 0.0, 0x1.927b949f0cdb8p-1004, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a8208f9a03db2p-163, 0.0, 0x1.27e6a11616603p-617, 0.0, 0.0,
     0x1.8de723233502ep-187, 0.0, 0x1.b371c33db58cp-367, 0x1.76f5e0eead521p-586, 0.0,
     0.0, 0x1.6d58517d1131fp-309, 0x1.119256ccc67c8p-14, 0x1.c12bf8609ef1dp-410, 0.0,
     0.0, 0.0, 0x1.09b4589b6a941p-681, 0x1.1a69134945951p-833, 0.0,
     0x1.ca059ec2c0a51p-317, 0x1.a7c3f01ad4768p-840, 0.0, 0.0, 0x1.f81629651cdedp-833,
     0x1.66e654633f7cap-1015, 0.0, 0.0, 0.0, 0x1.ac904f7af273ep-460,
     0x1.2b7a12603a3f3p-860, 0x1.c5956b4062241p-285, 0.0, 0.0, 0.0,
     0x1.61b4c32b5b19p-952, 0x1.8c8d71a8c81b2p-94, 0.0, 0x1.c2e741edb0229p-203,
     0x1.f0d1ddfd44212p-666, 0.0, 0x1.2b022b8a6d7f6p-799, 0.0, 0.0,
     0x1.3192a36c5e74ep-878, 0x1.1addf424489bep-538, 0x1.87ac34b9b2f6dp-381,
     0x1.f40d515b9b428p-566, 0x1.b71b82e34b19fp-747, 0.0, 0.0, 0x1.09b5a2c6edb67p-299,
     0.0, 0.0, 0x1.5403cf1c4a844p-972, 0.0, 0.0, 0x1.b1d5f0f882d62p-919, 0.0,
     0x1.fb75aa2371c6bp-692, 0x1.8753f762f56d9p-519, 0.0, 0x1.3e4cda5088a8dp-240,
     0x1.d8c8a4ed64ed9p-898, 0x1.79f40a8952bd6p-756, 0.0, 0x1.9b0ed250d771ap-284, 0.0,
     0.0, 0x1.c720ef85f99cdp-240, 0.0, 0.0, 0x1.644f55a79bdb9p-612,
     0x1.43d4992cb7972p-218, 0.0, 0.0, 0x1.8cc7cc678943p-736, 0x1.8045e4fde6c44p-710,
     0x1.da4715a1ce477p-876, 0.0, 0x1.5752198934088p-558, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0.0, 0x1.0165dbbabc538p-285, 0.0, 0x1.2b8943a1e6e9p-802, 0x1.4f6c3e7016f2bp-605,
     0x1.9dc2db0ef76a2p-775, 0.0, 0x1.04006f7105ba5p-72, 0x1.1e92126bdcdf5p-589,
     0x1.7418b5649055fp-588, 0.0, 0x1.d3f88b524073ep-703, 0.0, 0.0,
     0x1.96554d45be27fp-295, 0x1.ef3835834b71ap-31, 0x1.52b83dc63ea13p-785, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.11ea5f517a058p-13, 0x1.056cb2f512fc2p-520,
     0x1.de6e1f49f7dafp-474, 0x1.3711fdbf2218ep-258, 0x1.d5960c7ab3bd8p-31,
     0x1.5a951837dd242p-662, 0x1.cd93cc5a34701p-410, 0.0, 0.0, 0.0, 0.0,
     0x1.7e1497725bafep-607, 0x1.668b781af31dap-749, 0x1.9ed6582a2dda4p-946, 0.0, 0.0,
     0.0, 0.0, 0x1.05c5b162743d6p-966, 0.0, 0x1.43bfa66cfdd5fp-936, 0.0,
     0x1.89573e4afc032p-793, 0x1.97070a005d68dp-731, 0x1.944920713a7ebp-497,
     0x1.838311049410ep-717, 0x1.9dc6d83c3dd97p-913, 0x1.561ac3e26499cp-249,
     0x1.817d801d2da53p-442, 0x1.2ef1a4cb033p-543, 0.0, 0.0, 0x1.5d8565961cd3dp-512,
     0.0, 0.0, 0x1.d9cf788e0fc59p-184, 0.0, 0x1.8b72fe121cc0dp-80, 0.0, 0.0, 0.0, 0.0,
     0x1.00e99d0c93a77p-646, 0.0, 0x1.9ad0757ed2ccp-118, 0.0, 0x1.42d5c3427238ep-123,
     0.0, 0.0, 0x1.ff947f85be391p-793, 0x1.d9c147642934cp-141, 0x1.3cd6aa7f958fcp-528,
     0x1.3f50e06127a75p-824, 0x1.1fa8bc8de8a73p-441, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab2a069acd044p-885, 0.0, 0x1.057550fc6977cp-919, 0.0, 0.0,
     0x1.df90294da4814p-219, 0.0, 0.0, 0x1.62a33c056a621p-1021,
     0x1.4adc39d8d9f28p-931, 0x1.1a299937e58dep-619, 0.0, 0.0, 0.0,
     0x1.c2000030ab82fp-697, 0x1.559a41c96147ep-646, 0x1.f60ccf94d4627p-616,
     0x1.c812e874f0822p-243, 0x1.3bc681820e065p-120, 0x1.e23b992984f4fp-299, 0.0,
     0x1.2c8ddd0ce1da5p-538, 0x1.202c5b929fb0dp-254, 0.0, 0x1.6272bd7235f59p-530,
     0x1.3c7cbf18e713ap-432, 0x1.03a2800a199e6p-876, 0x1.d1baad2feab6fp-427, 0.0,
     0x1.6fe0a23a909d5p-823, 0.0, 0.0, 0x1.9d5175557e681p-182, 0x1.3188b5b8247a5p-806,
     0.0, 0x1.d6848d585f899p-9, 0.0, 0x1.909804343177ap-247, 0.0,
     0x1.160b441882248p-10, 0x1.68f5d60e3f007p-516, 0.0, 0x1.ccc65d18ca0a7p-93, 0.0,
     0x1.11a021280e782p-340, 0.0, 0.0, 0.0, 0x1.ca54183e5a3f8p-85, 0.0,
     0x1.480f409a3bb48p-891, 0.0, 0.0, 0x1.b9629a6c08ddap-445, 0.0,
     0x1.55f6dd7dcb935p-380, 0.0, 0.0, 0x1.c6f32024951fep-844, 0x1.1b05348fb3c1ap-801,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99c47cd4f7162p-345, 0x1.8ae49a40a5b75p-490,
     0x1.0f0daca8ca99bp-362, 0x1.d5e909ebef18ep-729, 0.0, 0.0, 0x1.52a74205d14f8p-7,
     0x1.a5be192a9c68p-912, 0x1.8c79f34f0f2a4p-168, 0x1.073d229602813p-936, 0.0, 0.0,
     0x1.4e40315d1bd85p-893, 0.0, 0x1.7d96711d387b4p-113, 0.0, 0.0,
     0x1.cd9f33607ffdfp-482, 0x1.c66fc1a99b7abp-962, 0x1.824aa9c4fd828p-370, 0.0,
     0x1.6b38b165590efp-346, 0.0, 0x1.3ce9b02e21141p-1011, 0x1.e29af95dfd5ep-255,
     0x1.f85d6d668e5ecp-879, 0x1.241ab9b7f0fb1p-832, 0x1.aed89f22acc7bp-970, 0.0, 0.0,
     0.0, 0.0, 0x1.01d137e9452e7p-682, 0x1.07e63b9b9726bp-903, 0.0,
     0x1.e9403ccae424ap-542, 0x1.96d141f8c9e23p-197, 0.0, 0.0, 0x1.5c014e0a35b38p-889,
     0.0, 0x1.26835dcd5ab8bp-885, 0.0, 0x1.b586edd51b475p-992, 0x1.291133993fb6ap-983,
     0.0, 0x1.2cf9101f2dbc8p-13, 0x1.6c91ec8f06108p-325, 0.0, 0.0,
     0x1.7b9c9288a5f92p-987, 0x1.832390643e86cp-99, 0.0, 0x1.361ef8578a0fp-452,
     0x1.91dabca17b11bp-64, 0x1.b1ecd27a4b442p-416, 0.0, 0x1.86fcdb68f26b7p-1007, 0.0,
     0.0, 0.0, 0x1.944d6920f5e5p-784, 0.0, 0.0, 0x1.19784fb253736p-439, 0.0,
     0x1.ffa0146f43a1cp-88, 0x1.a38988068ad23p-248, 0x1.b0ccf82118264p-83, 0.0,
     0x1.8b1c000618a85p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d7e98286b1bf5p-912, 0.0,
     0x1.87225c402021bp-560, 0.0, 0x1.6396a0cc7e519p-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cac056835a9fp-117, 0x1.0fc62c842de88p-568, 0x1.19494f0c2335p-29,
     0x1.afd2451cf8d56p-755, 0.0, 0x1.5c22a65489355p-528, 0x1.acde1593e9ac2p-921, 0.0,
     0x1.5962a74bb724ep-25, 0x1.3d4e5d06909fcp-127, 0.0, 0x1.89a8cae101c55p-762, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4680c30a939f9p-166, 0x1.e84a4aa734547p-689, 0.0,
     0x1.6d5246b2ffc56p-139, 0x1.efbc2e8ffe634p-571, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93176c53fba29p-57, 0.0, 0x1.5a41d6536e334p-76, 0.0, 0x1.d5ddd46f94289p-852,
     0x1.226a5ea69bff5p-419, 0x1.6d2f93441bd94p-165, 0.0, 0x1.9a65b37e2d59fp-923,
     0x1.7f38c370e12a3p-110, 0x1.33d31b0052ec1p-561, 0.0, 0x1.061626f74b4ddp-87,
     0x1.01be894ebdd9cp-555, 0x1.3892fed445c81p-877, 0.0, 0x1.e93eaa1bef512p-723, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.864fb9644a625p-320, 0.0, 0.0,
     0x1.4e9df27aca67ep-616, 0x1.d39a9139c09fap-297, 0x1.a8c6f31620833p-659, 0.0, 0.0,
     0.0, 0x1.393a98babe5e3p-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9482f921dfa3p-211,
     0.0, 0.0, 0x1.95473b0b05ebp-352, 0x1.12682ef52ddp-12, 0.0,
     0x1.633e6b3d8c70cp-333, 0.0, 0x1.5046ac737103ap-191, 0.0, 0x1.e7141d5a74687p-421,
     0x1.a850ef6e6f5f5p-80, 0.0, 0.0, 0x1.9172a7391afc3p-188, 0x1.ace4ba2151727p-90,
     0x1.8f1a1822daa1cp-306
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
            tmp1 = Sleef_log1pd2_u10avx2128(tmp0);
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
    printf("Sleef_log1pd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log1pd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
