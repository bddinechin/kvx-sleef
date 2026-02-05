/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_asin.c --function asin --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.c5f02c0b2cabap-614, 0.0, 0.0, 0.0, 0.0,
     0x1.f4ef0d3415629p-811, 0x1.9ae57e9bbc479p-327, 0x1.8b1420e2f63c6p-194, 0.0, 0.0,
     0.0, 0.0, 0x1.d891d1b6d4daep-1012, 0x1.1c07c8482b0c2p-167, 0.0,
     0x1.4ce0e662b6e66p-644, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e17ae291520ap-148, 0x1.35e3011751a32p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.bd187fc18fc2fp-1000, 0.0, 0.0, 0x1.6f84a54e84309p-694, 0.0, 0.0, 0.0, 0.0,
     0x1.fb599cb3ac5d5p-450, 0.0, 0x1.b62341e5ce077p-454, 0x1.70eaa24231ee3p-898, 0.0,
     0.0, 0x1.dd2477f93b642p-909, 0.0, 0.0, 0.0, 0x1.a648795f69941p-89,
     0x1.85c097ecb1f49p-346, 0x1.c894d5b68a8a1p-519, 0.0, 0x1.e4e9ab90178a9p-1010,
     0x1.d5ccf91be97c2p-643, 0.0, 0.0, 0x1.a8c7d0c31abdap-333, 0.0,
     0x1.32c9254998e84p-973, 0.0, 0.0, 0x1.b94fff2f14efcp-436, 0.0, 0.0, 0.0,
     0x1.eff2d67915868p-441, 0.0, 0x1.6c7fc8074ca56p-777, 0.0, 0.0,
     0x1.98de2c5c39eb7p-857, 0x1.38098dfadc38fp-370, 0x1.d3998e56d7aa9p-704,
     0x1.8a95eb7071ddap-684, 0.0, 0.0, 0x1.cc6684662cc1fp-567, 0x1.cc822afc07d55p-744,
     0x1.259203ac810b1p-514, 0x1.3ccf540bda751p-87, 0x1.53a9d96cacdd4p-710, 0.0, 0.0,
     0x1.93110dc757e9bp-619, 0.0, 0x1.e3371e5cb425fp-20, 0x1.fb1e616993f5fp-1002,
     0x1.a1730c4983f68p-962, 0.0, 0x1.00dd6463fb3e8p-355, 0.0, 0x1.8f5a5c52df6bep-655,
     0x1.692c7014ad111p-986, 0.0, 0x1.a10f6cfc7be52p-954, 0.0, 0.0, 0.0,
     0x1.f41a142bb213ap-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29a9cc3cf4364p-98,
     0x1.dcdd63ed908e4p-425, 0.0, 0x1.0b6180bdcc601p-970, 0x1.b33ed22309c68p-111,
     0x1.99362e983370bp-296, 0x1.efe4ccca60bd7p-336, 0.0, 0x1.659f9f8f5d011p-416, 0.0,
     0x1.27f8dc105b173p-786, 0.0, 0.0, 0.0, 0.0, 0x1.af299e74b63e2p-431,
     0x1.d08253da914a5p-867, 0.0, 0x1.242ae582790f7p-499, 0x1.bd1da4e7932c3p-16,
     0x1.fd3200514eab1p-955, 0x1.20ffb4d483255p-975, 0x1.572d70b94b26ap-511, 0.0,
     0x1.acddf53906233p-288, 0x1.d4b4ac6631d85p-786, 0x1.4622fdb8be565p-825,
     0x1.ad9f7cd443c21p-744, 0x1.486cbc6778105p-382, 0x1.9709d4cfe11cep-331, 0.0, 0.0,
     0x1.bfcb4bb5d622p-808, 0x1.feb4771244736p-1011, 0.0, 0.0, 0.0,
     0x1.b6e692c935b4ep-914, 0.0, 0.0, 0.0, 0.0, 0x1.1c0388acaf58ep-781, 0.0,
     0x1.33bd53afce9bcp-857, 0x1.1e4638802710cp-453, 0.0, 0x1.d3016e207c5f5p-297,
     0x1.34f138b2d394ap-873, 0x1.ba551b8d4dc01p-563, 0.0, 0x1.6dee0eac51acdp-524,
     0x1.fdd1163c63843p-1007, 0.0, 0.0, 0.0, 0.0, 0x1.2137173dc4ba2p-329,
     0x1.1819b65025858p-1002, 0.0, 0x1.6b90b7370342ep-1010, 0.0, 0.0, 0.0,
     0x1.30fc4749e586fp-75, 0x1.d85ac2af9bf4p-932, 0.0, 0x1.16308d1bc8de6p-51,
     0x1.8dfcf4e92a776p-478, 0x1.e78962c5ef5cep-348, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc6db6285e049p-415, 0x1.b866cc5ff61c1p-151, 0.0, 0x1.2936361ad2eb8p-251, 0.0,
     0.0, 0.0, 0x1.9e8f9e50216f2p-447, 0x1.ffc176aa13658p-299, 0x1.76ac349dbb5ap-429,
     0x1.97d36f9d53d9ap-186, 0.0, 0.0, 0x1.5136c8de5887fp-342, 0x1.97f4522388915p-625,
     0x1.632ea3cd1b001p-670, 0.0, 0x1.54d118f64d314p-834, 0.0, 0.0, 0.0, 0.0,
     0x1.61f7c47ea554dp-956, 0x1.bcd3fc77ae5d9p-212, 0x1.6ecbdc70f96b1p-118,
     0x1.cae7e7f22741ap-833, 0x1.4398577633e42p-484, 0.0, 0.0, 0.0, 0.0,
     0x1.ea9621e383c54p-360, 0.0, 0.0, 0.0, 0x1.b39cb0a54f4c7p-90, 0.0, 0.0,
     0x1.6b7edfa307edcp-20, 0.0, 0.0, 0.0, 0x1.79e2e464b04fcp-648,
     0x1.956901d2dd268p-225, 0.0, 0x1.e5dc63873f2ddp-1021, 0.0, 0.0,
     0x1.1b489b92ddde8p-688, 0.0, 0x1.087b5c99cdd5dp-66, 0.0, 0x1.1844541b40dfep-957,
     0.0, 0.0, 0.0, 0x1.d9c2e247cb7a9p-641, 0.0, 0x1.b0c3a512272bcp-205, 0.0, 0.0,
     0x1.205e5945b7c6dp-714, 0x1.0a8bdad1c277dp-513, 0.0, 0x1.97e59e4975c3ep-237,
     0x1.1444d24ff06ebp-656, 0.0, 0.0, 0x1.75e4a7819deb3p-288, 0x1.7cc75b81c54e4p-681,
     0.0, 0x1.e69d796b26ebep-220, 0.0, 0.0, 0.0, 0.0, 0x1.1bb4059bd8d24p-197,
     0x1.0728bff865504p-579, 0.0, 0.0, 0x1.b7f777b1aaf0dp-826, 0.0, 0.0, 0.0, 0.0,
     0x1.0cc1b576f8f86p-499, 0.0, 0x1.28635a3ee3295p-108, 0.0, 0x1.ffa5d16ace20ep-992,
     0.0, 0x1.bb92732d175f2p-1005, 0x1.28566692e59fep-611, 0.0, 0.0, 0.0,
     0x1.2835d81b4e1e4p-560, 0x1.98e73e21e9133p-714, 0x1.8f8495ae5bf67p-490, 0.0, 0.0,
     0.0, 0x1.bd22e07c1c098p-868, 0x1.8fa22345edbf5p-481, 0x1.ab6dc0361698ep-920,
     0x1.1540c0cd2974ep-465, 0.0, 0x1.4457fe2d82c6dp-773, 0x1.9cb8756d6fe1cp-1017,
     0.0, 0x1.27f14b245e98dp-238, 0.0, 0x1.d63662181e63ep-78, 0.0,
     0x1.680be69781052p-385, 0x1.01bb3f9e36604p-801, 0x1.1ec6c427c3ab6p-827, 0.0,
     0x1.a1937730f91a9p-115, 0x1.87ed31b104087p-530, 0.0, 0.0, 0x1.6d5af58fba245p-719,
     0.0, 0.0, 0.0, 0.0, 0x1.39270a33f4e35p-584, 0x1.ea9925b50704cp-149,
     0x1.f78ee758bf52ep-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.04d592319b1cbp-449, 0.0,
     0x1.fcff833753003p-551, 0x1.c201e40128c36p-317, 0x1.df1e37586b75ep-146, 0.0,
     0x1.d1b1f085a97d1p-545, 0.0, 0x1.f2af4387c2b0ap-319, 0.0, 0x1.ec30e578ca081p-588,
     0.0, 0.0, 0.0, 0.0, 0x1.efae41944eaacp-951, 0x1.3336214df0952p-452,
     0x1.7a120f4d3449ep-347, 0.0, 0.0, 0.0, 0x1.6f45d20df26f4p-383,
     0x1.19737dd50824bp-659, 0.0, 0x1.0b18bdd2838edp-874, 0x1.71844c0b9a48dp-784, 0.0,
     0x1.3bbf63577ca1dp-587, 0x1.d9beb7750e592p-1000, 0x1.7ded681793dffp-677,
     0x1.aceac14dd9056p-359, 0.0, 0.0, 0x1.c164b040644d9p-969, 0x1.62dd82e2e6733p-480,
     0x1.ac5de1271ee85p-794, 0.0, 0x1.2b659cde88adcp-732, 0.0,
     0x1.065a609d1e471p-1000, 0.0, 0x1.0fdce1f6d5bb3p-28, 0x1.00be0dda217e8p-559,
     0x1.07c3ce2cfcfbp-560, 0x1.300ccbdc52f2dp-529, 0x1.ea31b4fda327fp-470,
     0x1.892a1caf76ba8p-491, 0x1.cd299da457063p-545, 0.0, 0.0,
     0x1.af5d8c23906c4p-1020, 0x1.bec25fefbbe9dp-557, 0.0, 0x1.ed84fc8eb21c2p-452,
     0x1.e9c8ca370c66p-388, 0.0, 0.0, 0x1.529ac7ab48ef6p-114, 0x1.811406a185ab2p-315,
     0x1.17e7d1969b513p-928, 0x1.643ccb494d62p-771, 0x1.9119cd79fd87ap-230,
     0x1.db5f761c2a919p-721, 0x1.a55b3dc4b4ca6p-492, 0x1.cccc5d585de24p-621,
     0x1.72a6d59e6eb2ap-980, 0x1.b80bb23ed654ap-196, 0.0, 0x1.501e48a33f55p-287,
     0x1.5031865c2cfe5p-404, 0x1.006e4c533aa6p-708, 0x1.7c4fb8ddeeebcp-690,
     0x1.10720a9465754p-355, 0.0, 0.0, 0x1.7a1e60f18b195p-588, 0.0, 0.0, 0.0,
     0x1.0bcd6011c2495p-974, 0.0, 0x1.11648820f9635p-55, 0x1.64ebd160bc8dp-171, 0.0,
     0.0, 0.0, 0.0, 0x1.8bd7ad0689f4ap-486, 0x1.22344bddf66aap-422, 0.0, 0.0,
     0x1.abbf087fbd442p-512, 0x1.43a35d9cc29f8p-5, 0x1.410d82826f6cfp-686, 0.0,
     0x1.36fdc501d7e84p-950, 0.0, 0.0, 0.0, 0.0, 0x1.2276aceace96ap-690, 0.0, 0.0,
     0x1.797a1d39c403bp-331, 0x1.1307d52180f33p-674, 0.0, 0.0, 0.0,
     0x1.1271703f369e2p-433, 0x1.42c4312db1aa9p-1022, 0x1.e8734903e065bp-1008, 0.0,
     0x1.adf1e8c3ef627p-230, 0.0, 0.0, 0.0, 0x1.55e6e3b0482d3p-250,
     0x1.14113f38367b3p-980, 0.0, 0x1.907360c771191p-619, 0.0, 0x1.3c0daa190bd8bp-801,
     0x1.b6f8096199fc2p-895, 0x1.366bc74b6394fp-730, 0x1.843fbcc4b0297p-198,
     0x1.fbfadaa44304cp-691, 0.0, 0.0, 0.0, 0x1.90aa46cb00133p-400, 0.0, 0.0, 0.0,
     0x1.33c3efb2543eep-408, 0.0, 0.0, 0.0, 0x1.a5f38fa2056cp-968,
     0x1.7715d20deb758p-118, 0x1.0d79b16835302p-452, 0x1.cb15213bfabcp-630,
     0x1.72cc5cf5a3c42p-432, 0x1.febd453f10b85p-469, 0x1.0998e076551adp-764,
     0x1.4bc5c685443a4p-635, 0.0, 0x1.9f2064f8ecebcp-854, 0x1.e0f54624e4735p-1002,
     0.0, 0.0, 0.0, 0.0, 0x1.d3549fb326516p-998, 0.0, 0x1.107b26d533fbcp-59,
     0x1.12ffcad7cfac4p-152, 0x1.e16eb0637551ap-19, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5150f71389122p-40, 0.0, 0x1.0f872bcc53c92p-111, 0.0, 0x1.0c9bd8f969602p-443,
     0x1.95106c6a5fd7cp-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83260fe2442eap-87,
     0x1.75b8df8fae696p-561, 0.0, 0x1.f91b643a0d1bcp-309, 0x1.61b7201eed8d2p-748,
     0x1.3e2dcadad306ap-810, 0.0, 0.0, 0x1.2907187445aa1p-278, 0x1.57e2a46b0d4e9p-591,
     0.0, 0x1.4d8e4064cc0e2p-55, 0x1.65129ec949019p-3, 0x1.3760f8f084cbcp-469, 0.0,
     0.0, 0.0, 0.0, 0x1.8a24b036c6234p-767, 0.0, 0x1.93dda84403cd3p-930, 0.0,
     0x1.2a12769f40757p-56, 0x1.e30e4bcecfeb7p-690, 0x1.81280fe71d2eap-950, 0.0,
     0x1.bc3c9a5b0eaap-399, 0x1.ffd70d8af4d99p-861, 0.0, 0x1.7bb70b7989a1cp-865, 0.0,
     0x1.ea7457db67b8dp-73, 0x1.775a094ea51c8p-542, 0.0, 0x1.88ad190a8b2e7p-894, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ebebff04b96dp-152, 0x1.acfa0844a9033p-355,
     0x1.8f4a0f66a327p-835, 0.0, 0x1.492d48878af5ap-511, 0x1.da27dbf4481f3p-662,
     0x1.09fab935d158fp-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9625fd1ffb45dp-547, 0x1.0379530ddb73cp-631, 0x1.fca9c70e73b22p-826,
     0x1.5f76249cfcc86p-1012, 0.0, 0x1.6159016a47039p-535, 0x1.04cc9a3d68543p-864,
     0.0, 0.0, 0.0, 0x1.6c5325262500fp-243, 0.0, 0x1.0451fdab72c7cp-958,
     0x1.e0a848bc1276p-140, 0.0, 0.0, 0.0, 0.0, 0x1.306501351bef3p-569,
     0x1.768b1b2d1f4a7p-550, 0x1.1697c39191818p-749, 0x1.6a5b30391b06bp-348, 0.0,
     0x1.c3983651af57ep-239, 0.0, 0x1.b48eb994c7b23p-291, 0.0, 0.0,
     0x1.e1afc6b37c84dp-406, 0x1.6aacb4c521ecap-805, 0x1.ff1c5906f29aap-546,
     0x1.4e51b303cbc4p-124, 0x1.de3ed485dfdbdp-251, 0x1.b2772fb8ccf47p-565, 0.0,
     0x1.9e199e25ef37fp-361, 0x1.32317b8a732p-46, 0x1.67cf0bbe03c7cp-807,
     0x1.0c34436b50a31p-820, 0.0, 0x1.bc9fb9a817309p-279, 0x1.7bc9c2d47f302p-1009,
     0x1.e736172c7044dp-121, 0x1.32c10a25382dbp-89, 0x1.9c2b7a6ceddbdp-578,
     0x1.0f50ac44a0f72p-874, 0x1.f69048eb5d0e6p-140, 0.0, 0x1.9331e7d5229f2p-170, 0.0,
     0.0, 0.0, 0x1.d6863094aaea3p-525, 0x1.f9845e71b3ed1p-371, 0x1.a2ea0b9ddd515p-191,
     0x1.be9480f8b4ap-530, 0x1.3e27b1ccc1525p-576, 0x1.0560d2572217dp-857, 0.0, 0.0,
     0x1.a635be359a929p-823, 0.0, 0.0, 0.0, 0x1.8592d850c36b6p-614,
     0x1.c51fd17efab1bp-17, 0x1.cb4473f791d87p-445, 0.0, 0.0, 0x1.d3a14b8c37705p-276,
     0.0, 0x1.cfaed5176b099p-65, 0.0, 0.0, 0x1.ab4a566e84939p-107,
     0x1.ee64433e5efc3p-273, 0x1.1f6d0837b12e7p-314, 0.0, 0x1.7013cb33ee07ep-766, 0.0,
     0x1.091e178d30ed3p-742, 0.0, 0.0, 0x1.71e803ad03153p-1019, 0.0,
     0x1.84a90197acb39p-915, 0.0, 0.0, 0x1.dc0edb56bb1e2p-470, 0x1.e6b1c5fe1e35bp-343,
     0.0, 0x1.3275b379b093cp-633, 0x1.f7a92dc49a84bp-864, 0.0, 0x1.09aafbec0b056p-968,
     0x1.e36e19a1d8f24p-61, 0x1.cb427ad69fd55p-313, 0.0, 0x1.8d4ac42966d51p-617,
     0x1.1fca53c601abdp-457, 0.0, 0x1.e0b639c0589e6p-1017, 0x1.312010efb397fp-799,
     0x1.dfa3693a7815p-795, 0x1.a054452db71e6p-441, 0x1.bc696208ba4bep-258, 0.0,
     0x1.520f1c926610ep-744, 0.0, 0.0, 0.0, 0x1.defc28b18f6f7p-358, 0.0,
     0x1.9718fe53089p-327, 0x1.e49972627f28fp-900, 0x1.528a6c447582ep-996, 0.0,
     0x1.f1fedbd599027p-46, 0x1.41478b3ad586p-476, 0.0, 0.0, 0.0, 0.0,
     0x1.64fbfd1b54f24p-230, 0x1.ee5990bf473c4p-564, 0.0, 0.0, 0.0, 0.0,
     0x1.d7bc020ecaf02p-339, 0.0, 0.0, 0.0, 0x1.c004aca602cb4p-518,
     0x1.4bc311b80ccaep-812, 0x1.606ec8c83da13p-61, 0x1.26ba0c31cbb88p-874,
     0x1.d33981ea70399p-706, 0x1.d2b62ae2dcabfp-21, 0.0, 0x1.62ab28fd811eap-104,
     0x1.af5042505d00cp-650, 0.0, 0x1.ae547e98c09fp-479, 0.0, 0x1.1912f1f3529e4p-556,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9309da15e9bbp-80,
     0.0, 0.0, 0.0, 0.0, 0x1.cc87c554b7524p-539, 0.0, 0x1.3f649eef10ec1p-619, 0.0,
     0.0, 0x1.a464225f2a628p-407, 0.0, 0.0, 0.0, 0x1.78511bee72a1ep-781, 0.0,
     0x1.11ecde3cb52bcp-928, 0x1.fc48fc5309fcbp-900, 0.0, 0.0, 0.0, 0.0,
     0x1.75ba1ec98bfbdp-602, 0.0, 0x1.7e8104d98cc27p-133, 0x1.153432533f724p-647,
     0x1.12a79c9f13895p-678, 0x1.a77713f82767dp-857, 0x1.a958dc0749b62p-1013,
     0x1.c931f65a6baf6p-800, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c4398a209c78p-173,
     0x1.1003fe7059c77p-65, 0x1.5176f67963bfap-991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b792e00b0c91p-70, 0x1.067c3899839f2p-552, 0x1.67a09af4740bfp-731,
     0x1.27c8c6dee4baap-474, 0.0, 0x1.20d926c1a41a2p-246, 0x1.e3a3c9c639814p-432,
     0x1.e6cd8fece165cp-427, 0x1.927de255caed3p-787, 0x1.dfab794f5227bp-582, 0.0,
     0x1.dddf948e6ab5cp-312, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38bc30dc513ccp-83, 0.0, 0.0,
     0x1.2e71aec978924p-702, 0x1.614839eb05ec1p-29, 0x1.56fac99116ed3p-760,
     0x1.bfad353c470f8p-1002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d05885549348fp-662, 0.0, 0x1.13bcc9e0dac39p-309, 0.0, 0x1.1d209cadec02bp-706,
     0.0, 0x1.6b0ef81ab2cabp-803, 0.0, 0x1.bd3a8d6a9758dp-814, 0.0, 0.0,
     0x1.49d9e55988ed1p-483, 0x1.cc8c5e7f8a83dp-994, 0.0, 0.0, 0x1.46ace3f671287p-208,
     0x1.d75e8bab3edffp-789, 0.0, 0x1.54c0e924ca6c6p-85, 0x1.5766be738acebp-661, 0.0,
     0x1.72f1a99e34ff6p-794, 0.0, 0.0, 0.0, 0x1.f414f362c072bp-979,
     0x1.3c7f67038e223p-556, 0.0, 0.0, 0x1.3b0f500e90f4p-570, 0.0,
     0x1.c2197b1018fep-104, 0.0, 0x1.7b8b292692225p-949, 0x1.0ec4604339fb8p-615,
     0x1.a57eb46b849e6p-962, 0x1.c45e7e6c800d5p-30, 0x1.924ee979acb95p-317, 0.0,
     0x1.02b3a4cafbf2dp-950, 0.0, 0.0, 0.0, 0x1.9c909e3f2f817p-194, 0.0,
     0x1.f2e53d06a3164p-160, 0.0, 0.0, 0.0, 0x1.8970b7205d019p-646, 0.0, 0.0, 0.0,
     0x1.c8dcfa6a22d46p-609, 0x1.aee131e5739b1p-638, 0.0, 0x1.4d28fa5783925p-717, 0.0,
     0.0, 0.0, 0x1.f45f9aca15578p-58, 0x1.05f2e425220cbp-284, 0.0,
     0x1.d391477ed5c7cp-47, 0x1.548a2bf0e32fp-764, 0x1.a0ea010edeb43p-492,
     0x1.78e2a99f49c32p-396, 0.0, 0.0, 0.0, 0x1.adbbfe63335a6p-866,
     0x1.3d3b50b367d7ap-286, 0.0, 0x1.06bb3aaa27039p-28, 0x1.63e7914f42ca4p-447, 0.0,
     0x1.2d5ad188af82ep-487, 0x1.733e632438b8ep-702, 0.0, 0x1.cc30bd92bdfd6p-892,
     0x1.8fae21f95d358p-181, 0.0, 0.0, 0.0, 0x1.1ad07d807b76ep-571, 0.0, 0.0, 0.0,
     0x1.4c5c20f3d8ebp-833, 0.0, 0.0, 0x1.b890f154ddda6p-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.36bcbfa11907fp-355, 0x1.4e563be55c134p-1005, 0.0, 0x1.b0f2adf4d36f4p-45,
     0x1.bd43d71435ea7p-143, 0x1.b02314e433cd2p-840, 0.0, 0x1.86ccf3d265acdp-791, 0.0,
     0x1.f55399d0a7eadp-294, 0.0, 0.0, 0x1.b5928ac759695p-467, 0x1.5cd755b1cdabfp-791,
     0.0, 0x1.57ddf33b0fffep-845, 0.0, 0.0, 0x1.45aaea37ac913p-203,
     0x1.aa522269f6b47p-802, 0.0, 0x1.9cc1750d2d98cp-177, 0x1.9fd0952724367p-1, 0.0,
     0x1.ea90acf16bbf5p-826, 0.0, 0x1.50e09da5d6d0fp-861, 0.0, 0x1.dc45f06d9457cp-668,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4f9da8e936c7p-784, 0.0, 0x1.81e88892f6d67p-6, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.496413ce3124dp-425, 0.0, 0x1.3e33b390adf22p-672, 0.0,
     0.0, 0x1.39c64f3c00e64p-405, 0x1.d1adeb8a12471p-936, 0x1.f9e6e5562a7f1p-181,
     0x1.4899b76e9e74fp-184, 0x1.6f0aaaff4dfep-808, 0.0, 0x1.192f8bfea4048p-415, 0.0,
     0.0, 0.0, 0x1.ac7b2cd3743dfp-610, 0.0, 0x1.cf479a5b18f9dp-45, 0.0, 0.0,
     0x1.09796d964395cp-28, 0.0, 0.0, 0x1.e1f3262e130b5p-572, 0.0, 0.0,
     0x1.7875393f9c978p-741, 0x1.fd4014cfb0bc3p-936, 0x1.df3708efa598dp-205, 0.0, 0.0,
     0x1.7b9eb8d0fc314p-436, 0.0, 0.0, 0x1.0c15b4f21edfbp-292, 0x1.a0a2fa0732d45p-300,
     0.0, 0.0, 0x1.a4f8902a816b9p-304, 0x1.e06e8ec9aa526p-569, 0x1.99090081e82efp-507,
     0x1.38bd2d75fe8c6p-711, 0x1.7467b13a4c5a4p-333, 0x1.bbf21b1617327p-221,
     0x1.8670c7f298f5cp-758, 0.0, 0x1.8f2571625ea97p-135, 0x1.98a0322ed8c7cp-413,
     0x1.e5a24a91f7d57p-248, 0.0, 0.0, 0.0, 0x1.ae39ebb339d91p-189, 0.0, 0.0, 0.0,
     0x1.29513a84b0747p-826, 0.0, 0x1.ba87bc57152b7p-170, 0.0, 0x1.db57c4cdb4214p-627,
     0.0, 0x1.a445b4276aa37p-44, 0x1.99efa4e79521p-931, 0.0, 0.0, 0.0,
     0x1.c78e0b8b8f0b4p-553, 0x1.19dc49ad5526fp-707, 0x1.b56f3064db4f4p-745, 0.0, 0.0,
     0.0, 0.0, 0x1.d1720f19764bcp-126, 0x1.f4e8e349c84a2p-88, 0x1.890eefe4ad9e4p-353,
     0.0, 0x1.87c2f00a289cp-232, 0.0, 0.0, 0.0, 0.0, 0x1.f9f63f2dfd451p-502
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = asin(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("asin %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("asin bench acc %la\n", global_bench_acc);
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
