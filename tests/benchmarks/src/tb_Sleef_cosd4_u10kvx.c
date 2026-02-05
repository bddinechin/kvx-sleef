/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd4_u10kvx.c --function Sleef_cosd4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.3184ed1cece51p-616, 0x1.0565ce5687f46p-133,
     0x1.527ebb81ab45dp-258, 0x1.95e66aa0b6b87p-634, 0.0, 0.0, 0x1.70e3ca6bf70ecp-744,
     0.0, 0x1.fec047728b7fap-721, 0x1.160366f9fdfc3p-810, 0.0, 0.0,
     0x1.5ca62119f9d82p-897, 0x1.5885d2a5c2e89p-242, 0x1.2a7c1e8fec373p-578, 0.0, 0.0,
     0x1.cedb0c3216145p-138, 0.0, 0x1.e34d5d426072p-883, 0.0, 0x1.d2db0f289c769p-640,
     0.0, 0.0, 0x1.497ef068edeb5p-352, 0.0, 0.0, 0.0, 0x1.353a3dd62e776p-756, 0.0,
     0.0, 0.0, 0.0, 0x1.20c9ec0d7f82ap-357, 0x1.b6c847b70e112p-940,
     0x1.764687921f561p-798, 0.0, 0.0, 0.0, 0.0, 0x1.ae38fe0c953dcp-377, 0.0,
     0x1.4f6b3d6098cc4p-812, 0x1.b8af9ed2a46eep-245, 0x1.3c510c0a13703p-20, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3ec1f05381c46p-185, 0x1.50ff996c799c1p-400, 0.0,
     0x1.2af4b8a7a0ea4p-614, 0x1.d773cffc873a1p-296, 0x1.24a49bb77d422p-714, 0.0,
     0x1.c7f6fb6b74b1fp-365, 0x1.f9b63b51fcfa2p-458, 0.0, 0.0, 0x1.9132a8c2af3b8p-266,
     0.0, 0x1.17ef92a0042dp-754, 0.0, 0.0, 0x1.7e893ef4444ap-1002,
     0x1.ff9c32104b2fep-116, 0x1.c9153816c04ep-669, 0x1.cff9dfe768a2fp-208,
     0x1.55d45e82ea35cp-149, 0x1.6b6f233d69a39p-470, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.918afd7129d8dp-894, 0.0, 0.0, 0x1.0808893c076f8p-918,
     0x1.186c6587c83dcp-269, 0.0, 0x1.38e5b466b25fbp-824, 0.0, 0.0, 0.0,
     0x1.8cd125917b613p-416, 0.0, 0x1.102560fc32b05p-760, 0.0, 0x1.2ad3b0735b2b5p-651,
     0x1.438da274d47b6p-833, 0.0, 0.0, 0.0, 0.0, 0x1.ce61948ded6dap-490,
     0x1.7a32eca214cc2p-330, 0.0, 0.0, 0.0, 0x1.22821b5e9036p-427, 0.0,
     0x1.92515be7c8acap-586, 0.0, 0.0, 0.0, 0x1.8079bc2f29e1bp-125, 0.0, 0.0,
     0x1.2a9cd99b3c5fp-956, 0.0, 0x1.4410adc688fd2p-318, 0.0, 0x1.541ac21b06034p-317,
     0x1.fac5ca7d9b6cap-15, 0.0, 0.0, 0.0, 0x1.4f738e5e7ee6cp-255, 0.0, 0.0,
     0x1.ea646f1b8a2bap-456, 0.0, 0x1.938d4fc42eb28p-120, 0x1.28ccae3adf6f2p-645,
     0x1.488062a634ba4p-841, 0x1.bf72134fcd80cp-971, 0x1.765acb74154c9p-786, 0.0, 0.0,
     0x1.49139da162451p-908, 0x1.45902a487b9bep-659, 0.0, 0.0, 0x1.b0a6b45629617p-488,
     0x1.42243d5d0a348p-66, 0.0, 0x1.e332b06a065b9p-141, 0x1.3af79ea5217d1p-458, 0.0,
     0.0, 0x1.d2319b2b27ddep-118, 0x1.5e7be06c0fc1dp-581, 0x1.1c3a3e9da9894p-330,
     0x1.58030ea3d8b31p-70, 0x1.5689e6daa335bp-698, 0x1.6fbb2c0fce534p-740, 0.0, 0.0,
     0.0, 0x1.de86858e9221dp-927, 0x1.08dc4665fda74p-455, 0.0, 0x1.e04fd4fe35fb2p-416,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ee68878ff23bp-637,
     0x1.21d29cc70abe1p-846, 0x1.c7869a7645826p-254, 0.0, 0x1.c8e50ee4a3953p-380,
     0x1.267cbcca7bfc5p-4, 0x1.71b1d88204321p-8, 0x1.09d3e3e2704a1p-588, 0.0, 0.0,
     0x1.7e887c8420262p-346, 0.0, 0x1.4a7e0994016c8p-561, 0.0, 0.0,
     0x1.459f1e141c6efp-147, 0x1.9bac75221b519p-502, 0x1.5b52445ca28f9p-327, 0.0, 0.0,
     0.0, 0.0, 0x1.43c1458566175p-264, 0x1.56f0a4ad9ceb2p-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b5c9baf076747p-715, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1166e0a4d0aep-413, 0.0, 0x1.e8478d7de886cp-660, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ee2e00a8e437ap-999, 0x1.e7bf70276cbcfp-554, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c05578c46505dp-42, 0.0, 0.0, 0.0, 0.0, 0x1.150e3433c155ep-736,
     0x1.51cfaf4e73c3ap-423, 0x1.54227a85638c1p-794, 0x1.826522fcd62c6p-446, 0.0, 0.0,
     0x1.77092d1fece0cp-283, 0.0, 0.0, 0x1.46905177c177ap-266, 0x1.86111eadf8181p-544,
     0x1.7a64205641887p-142, 0.0, 0.0, 0x1.4bf5d70b0254cp-744, 0.0, 0.0,
     0x1.631cc63bd5991p-657, 0x1.c322e6e9b2234p-103, 0x1.c983293759128p-224,
     0x1.a169cd0a1b7bfp-2, 0.0, 0x1.e20e1c18ddebp-376, 0.0, 0.0,
     0x1.b048088ebb3bfp-247, 0.0, 0.0, 0x1.ac5017123fff2p-619, 0.0,
     0x1.4f3c27f9b3283p-174, 0.0, 0x1.5d54a6b213cb5p-653, 0x1.e8b8ce6dfd153p-640, 0.0,
     0x1.2ecf2ebeeaecp-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d21075cb2c05ap-609,
     0.0, 0x1.480a5c472f8e4p-933, 0.0, 0.0, 0.0, 0.0, 0x1.38c7d4684ea0dp-173, 0.0,
     0x1.1cd1f14af7f41p-477, 0x1.b9c94ed9ff815p-764, 0.0, 0x1.7ec29643ea21dp-1, 0.0,
     0x1.1f174a6ea8a6ap-650, 0.0, 0x1.b350cd031a25ap-122, 0.0, 0x1.14dc7a53623b5p-253,
     0.0, 0x1.9ed0490aaf42dp-147, 0x1.c5aca7364fcddp-390, 0x1.809b726f26b8dp-134,
     0x1.bd19fc7c0fb76p-775, 0.0, 0x1.b2ea3fb21ece7p-41, 0x1.c7301f37edc6fp-464, 0.0,
     0x1.d137a0a032778p-977, 0x1.6c65ac87044fep-417, 0x1.ce72c65c6e455p-463, 0.0,
     0x1.726fa01c1b5d5p-832, 0.0, 0.0, 0x1.d73961e241878p-44, 0.0, 0.0, 0.0,
     0x1.7b6f77c796099p-803, 0.0, 0.0, 0.0, 0.0, 0x1.6967d4341b5d3p-70,
     0x1.b5ce269b0569ep-726, 0x1.22ae70ce9d8edp-760, 0.0, 0x1.1d9fb5e9b99cep-127,
     0x1.7451b4fa1cfd7p-887, 0.0, 0.0, 0x1.0227f33be0412p-821, 0.0,
     0x1.8b74f51585b7dp-962, 0.0, 0x1.e1a1d7fd7d32cp-464, 0x1.9a0c924156e1bp-644, 0.0,
     0x1.18823ba98f0e4p-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82fb38abeb718p-216,
     0.0, 0.0, 0.0, 0x1.18367296f61a3p-172, 0x1.2cd3323ecf45cp-299, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.10db72f176ee8p-155, 0.0, 0.0, 0x1.5882b06d9f273p-883,
     0x1.47d9c9073c917p-974, 0x1.f0bdde38e1bf7p-481, 0.0, 0x1.f6983e649de4ap-1,
     0x1.27d599ae593e3p-29, 0x1.c9c717ccce79fp-957, 0x1.5062cdc7a0b27p-247,
     0x1.ad11aa8ecbaf1p-977, 0.0, 0x1.d038e648e0269p-148, 0x1.f1a97509a94fap-516,
     0x1.04a80faaa9945p-654, 0.0, 0x1.0cf4db9b9973cp-905, 0.0, 0x1.6458907f8b2b8p-499,
     0x1.15e502fc9ec54p-732, 0x1.f916641e589e4p-224, 0.0, 0x1.941b32a71c2bap-629,
     0x1.e683b6fcb8ef3p-852, 0x1.b509edc2c951dp-1020, 0.0, 0.0, 0.0,
     0x1.8cdf9e72aea52p-133, 0x1.897fd1c8baf06p-44, 0.0, 0x1.a58aed7f94585p-597,
     0x1.2b64f46b91f8fp-452, 0x1.d8ce4274bc2e4p-893, 0x1.086298330e585p-316, 0.0,
     0x1.5da6916aca0b1p-546, 0.0, 0.0, 0x1.c87c36ea2d16cp-2, 0.0, 0.0,
     0x1.61a15f36bf87bp-91, 0x1.7dcecea5ba3a6p-519, 0.0, 0x1.b020f7b0898e6p-210, 0.0,
     0x1.be11da95952bep-639, 0.0, 0x1.7d2566a6f30cfp-512, 0x1.467d11fb66537p-369,
     0x1.e22035737342fp-513, 0.0, 0.0, 0x1.5a6c7ee1259bdp-82, 0x1.0b09f5ebc8b97p-883,
     0.0, 0x1.5850a3cf3776p-308, 0x1.a448b69a4a629p-455, 0.0, 0x1.c179e332f0a81p-113,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f13f1efadc4b9p-122, 0x1.f5d1d5f1c37d3p-995, 0.0,
     0.0, 0.0, 0.0, 0x1.e81016d115be4p-819, 0.0, 0x1.ca358fd65cef1p-517,
     0x1.5a3f023076fabp-552, 0.0, 0.0, 0.0, 0x1.879bb67417b6ep-635,
     0x1.5188583486fc3p-979, 0.0, 0x1.427164330ed45p-900, 0.0, 0.0,
     0x1.05a3c60090c34p-590, 0.0, 0x1.aa9a53e7a5032p-5, 0x1.6be9015740c9cp-971,
     0x1.6e82d212d2a78p-472, 0.0, 0x1.6803c1d78c681p-428, 0.0, 0x1.9d54641a64effp-463,
     0x1.4a0a37e01b0cbp-964, 0.0, 0x1.9f18f1dd86e73p-43, 0.0, 0x1.c3c7582d1bef3p-717,
     0x1.27c49b1dbd6bcp-1005, 0x1.b73fdffba36ccp-149, 0.0, 0x1.3cae8bbcd8261p-824,
     0.0, 0.0, 0.0, 0.0, 0x1.c8a2f2ccdd84ap-674, 0x1.1b57b0959fa44p-478,
     0x1.a1397cae5cdcap-194, 0.0, 0.0, 0x1.e8aae5a36e4f5p-841, 0.0,
     0x1.b3c4fb4ce76a8p-386, 0x1.34e1ea658665cp-886, 0.0, 0x1.61e75af5683b8p-875, 0.0,
     0x1.8adcb6e12f5eep-788, 0.0, 0x1.9af9ec8009de2p-940, 0x1.722e0cde1627p-193, 0.0,
     0x1.be9e48ce92ef8p-409, 0x1.cb9d9e4a573bp-372, 0x1.819ab1b5bff91p-534,
     0x1.bc48143931ffbp-214, 0x1.cf04df1509229p-143, 0x1.d5738705f654fp-709, 0.0,
     0x1.d9986dc7c2dfdp-705, 0x1.f45464ab75749p-164, 0x1.6a9a465aef2c9p-375,
     0x1.d3f6ccd882e4dp-282, 0x1.e48a5cab33967p-163, 0.0, 0.0, 0x1.8dbfa9270dc7ap-738,
     0.0, 0x1.c5206b7b4ec7bp-604, 0x1.785c6ea0660d5p-604, 0.0, 0x1.69eaea6d9484cp-188,
     0.0, 0x1.f2f88ce704cf3p-429, 0.0, 0.0, 0x1.0e57b68de13dep-583,
     0x1.7d31ad223878fp-208, 0.0, 0.0, 0.0, 0.0, 0x1.6f137da33cfe2p-392, 0.0, 0.0,
     0x1.0b439dc848ee5p-924, 0x1.3111dc0fbb30cp-638, 0.0, 0x1.93531099e9492p-309, 0.0,
     0.0, 0x1.43839c2e73773p-627, 0x1.f550b2c56d246p-805, 0x1.cacb13b129b0ap-885, 0.0,
     0.0, 0x1.5ca409a854d6ap-536, 0x1.6b9a13a2f0273p-284, 0.0, 0x1.ddabf5102b924p-921,
     0x1.afeec86a563afp-53, 0.0, 0.0, 0x1.e577984e7cf26p-129, 0.0, 0.0, 0.0,
     0x1.0a987abe8cba4p-1006, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b255b9b5b5964p-696,
     0x1.a53595d479f3dp-921, 0.0, 0.0, 0x1.1d82c214ff98p-18, 0.0, 0.0, 0.0, 0.0,
     0x1.a2673a59237p-513, 0x1.9c2597071a78bp-447, 0.0, 0x1.a63776bf0cbep-1019,
     0x1.64481ed22fb3p-55, 0.0, 0x1.09363992c75afp-603, 0x1.73745b48466fbp-427, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e55ee54cee25p-382, 0x1.e8dbba95d8be1p-877, 0.0,
     0x1.36bef6fbf1b18p-65, 0x1.9c24643303eedp-625, 0.0, 0x1.ca56980cf9bb6p-658,
     0x1.8704acf89eb5fp-744, 0.0, 0.0, 0x1.0f19ebede0697p-277, 0x1.d1c09b839ea51p-426,
     0.0, 0x1.a748aae9b1ce6p-845, 0x1.c0fef157edd14p-241, 0.0, 0x1.eb5eb472a3e8ep-894,
     0x1.bd0829a9da307p-914, 0.0, 0.0, 0x1.97a5251e432d7p-148, 0.0,
     0x1.fbddd0b2b5726p-356, 0.0, 0x1.b9d8950630a03p-30, 0.0, 0.0,
     0x1.89933e53d78d9p-150, 0.0, 0x1.f2f7933cfb1e9p-351, 0x1.b135e27bdf999p-389,
     0x1.ab925f3ed0e1ap-267, 0.0, 0.0, 0.0, 0.0, 0x1.a688481eb189cp-549,
     0x1.6c5d0e9dd6757p-890, 0x1.81755e22f8113p-304, 0x1.53c269c91f04cp-348, 0.0,
     0x1.aac163874d4ddp-569, 0.0, 0.0, 0x1.85b9b1ae03643p-906, 0x1.2b879eb50bad6p-218,
     0.0, 0.0, 0x1.7043ea989f09ep-160, 0x1.57e394c35c7cfp-297, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8d181e5bc343ep-995, 0x1.bf6b3932108eep-416, 0x1.b32b327ec9f79p-375,
     0x1.9a243883b62c1p-795, 0.0, 0.0, 0x1.99c7fc0ae6f16p-402, 0.0,
     0x1.81c511042396dp-913, 0x1.f50bf6a3cf283p-763, 0x1.aaff3b1e57dp-157,
     0x1.e1ac57bc57b4ep-54, 0.0, 0.0, 0x1.bf245fd55bd5fp-422, 0.0,
     0x1.cfd07b42ee9e8p-269, 0x1.9543d67b9bc8ep-207, 0.0, 0.0, 0x1.6aef899a95aa5p-391,
     0.0, 0x1.e9f90cfa7ace7p-803, 0.0, 0.0, 0x1.5bc73014b99bbp-385, 0.0, 0.0,
     0x1.5d6a49aaa998bp-901, 0x1.a30ed6527b77fp-739, 0x1.16b5c77a947a3p-835, 0.0, 0.0,
     0x1.49dbfc02c55b2p-673, 0x1.8ea7b28875f5ep-92, 0.0, 0.0, 0x1.065e0d08d2377p-478,
     0x1.92601903691d5p-868, 0.0, 0.0, 0x1.fc329b4c541fcp-294, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8e68e9f37049fp-1001, 0.0, 0.0, 0x1.e8748a48ea1a8p-88, 0.0, 0.0,
     0x1.0fe9708493ff6p-433, 0x1.883446842ac24p-872, 0x1.7e576b59a0d25p-220,
     0x1.1d962e557eb8fp-88, 0x1.3b9b6caae09bap-180, 0x1.eec26f3236fb1p-674, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f638aa0f878b9p-659, 0.0,
     0x1.1e77ea66d987fp-359, 0.0, 0.0, 0.0, 0x1.6c187f986dffep-127, 0.0,
     0x1.285174170e8f4p-276, 0.0, 0x1.c05fb9df31a5cp-444, 0x1.4fd5dca8baf4p-941, 0.0,
     0x1.5da947c041611p-830, 0x1.c499093bc2064p-786, 0.0, 0x1.008c6b601505ap-890,
     0x1.16b9441c1393ep-288, 0x1.e0439463ac2dap-423, 0x1.18d9360cf8cadp-868,
     0x1.abdf5ea75b184p-685, 0.0, 0x1.b020f22a433c1p-98, 0.0, 0x1.3ecce74eafdf3p-114,
     0.0, 0x1.120a6b0f3f16ap-272, 0.0, 0.0, 0x1.a3de2be8593fcp-955, 0.0, 0.0, 0.0,
     0x1.8de6cbb90d3e8p-255, 0.0, 0x1.adb39703f378ep-146, 0x1.1a4a113c56ba4p-577, 0.0,
     0.0, 0.0, 0x1.267f75b315713p-317, 0.0, 0.0, 0x1.c308ba4b2bde1p-481,
     0x1.3c3293d81f88p-394, 0.0, 0x1.762763fdaa0ecp-3, 0x1.90b58c3c7f37ap-857, 0.0,
     0x1.247977a039dddp-918, 0x1.ecfb458bce91fp-42, 0.0, 0.0, 0x1.5ad43af7c6dddp-416,
     0.0, 0.0, 0.0, 0x1.c007fbd7daed6p-674, 0x1.4ccf1c8424075p-851,
     0x1.b1d9b2b1d120fp-617, 0x1.9f1c6505d3085p-883, 0.0, 0x1.e324911f80f32p-746, 0.0,
     0x1.7df20b8ccc594p-458, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a578006dfc51bp-563, 0.0,
     0x1.e4b7bfcba18fp-491, 0x1.7f529df809227p-129, 0.0, 0x1.320a99e6fc9a3p-813, 0.0,
     0.0, 0x1.fd5f2bf0ea26ap-702, 0x1.ece9792c5f3f2p-250, 0.0, 0.0, 0.0,
     0x1.308791ceaef24p-700, 0x1.7a0825584f93ap-971, 0x1.a7345b689c03ep-742, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a95472500aeep-182, 0.0,
     0x1.9a5091d5427b3p-240, 0x1.c696b9a55f166p-791, 0.0, 0x1.74446b9bdcd74p-812, 0.0,
     0x1.ee6db7d3d5b5dp-301, 0.0, 0x1.ea3bcbaf7f35p-692, 0x1.009fd4096485fp-184,
     0x1.f097826401fe3p-687, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a704bb2cffbbbp-787, 0x1.83220d366af76p-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5e0db3bd3ed19p-954, 0.0,
     0x1.5bc9908a6ce32p-618, 0.0, 0x1.12dfb374e93f5p-441, 0.0, 0x1.025f8d1bb0945p-673,
     0x1.5aef4f0456842p-660, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.1923d2283db77p-371,
     0.0, 0.0, 0.0, 0.0, 0x1.707f4d4ea0004p-933, 0x1.cfe18577a5f88p-980, 0.0,
     0x1.2535e4c5c2d5fp-475, 0x1.47332946adf3dp-154, 0.0, 0x1.dc2e348a0533cp-844, 0.0,
     0x1.9211f265b81c8p-262, 0x1.1278c96723fb5p-480, 0x1.41c9077faf0f4p-593,
     0x1.2fabbaf90552p-369, 0.0, 0.0, 0x1.27e145b005d6bp-906, 0.0, 0.0,
     0x1.95272c537fe8dp-766, 0.0, 0x1.8dc10d36a71efp-952, 0x1.1a10aa1db8248p-875,
     0x1.48dc9ff1597dap-236, 0.0, 0.0, 0.0, 0x1.83d9a2e5e2f52p-937, 0.0,
     0x1.fda17e77edd82p-8, 0x1.2cf84b0cdbb11p-641, 0.0, 0x1.67786cc073ee1p-129,
     0x1.3ea935bdc9807p-14, 0x1.57b7182a411bbp-93, 0x1.a25cba56bb3a5p-448,
     0x1.c8633d438310bp-684, 0.0, 0x1.e8553cf97a727p-412, 0.0, 0.0,
     0x1.a4b1a1adc0166p-256, 0.0, 0x1.f1f1f1977cb83p-125, 0.0, 0.0,
     0x1.476488169a731p-18, 0x1.cb70a55af8992p-116, 0x1.6f49e97ad0abbp-121, 0.0, 0.0,
     0x1.f65cdc1ad8dc2p-298, 0x1.15731226ef457p-787, 0.0, 0.0, 0x1.51c910f4ed34fp-453,
     0.0, 0x1.652de87dce174p-212, 0x1.ef72e24d7e968p-771, 0.0, 0x1.4346364c22a2ep-852,
     0x1.1c71f5fbb5aa8p-656, 0.0, 0x1.12d2683acc8cap-972, 0x1.f57f538db246p-792, 0.0,
     0x1.9d092af27949bp-374, 0.0, 0x1.b508bf86e073dp-103, 0x1.c173db5dd4159p-463,
     0x1.273424b10d97ep-118, 0.0, 0.0, 0x1.f54abd59db811p-148, 0.0,
     0x1.bcc182b3b51d5p-963, 0x1.d0dfbebab8028p-462, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.265369b889245p-820, 0x1.cbf1ef2e6033p-669, 0x1.9d3632b03559fp-950,
     0x1.c28d91eebb9c6p-786, 0.0, 0x1.2b210f58720edp-567, 0x1.60873464e2c1fp-154,
     0x1.0914bc6a0db0bp-583, 0.0, 0x1.0589be4345adfp-361, 0.0, 0.0, 0.0,
     0x1.515fdf02f1014p-926, 0.0, 0x1.a8bf2552180fbp-998, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2da29832a897p-668, 0x1.51677f1c06023p-54, 0x1.53fa172844298p-813,
     0x1.1c0895ddb663fp-670, 0x1.183e2662c1247p-834, 0x1.2521ab1ee124dp-635, 0.0, 0.0,
     0x1.907fb39c69ddep-812, 0x1.6a64ef19271ep-292, 0.0, 0.0, 0x1.cbe602ade47e9p-523,
     0x1.3908ed7a6250ep-987, 0x1.1a226bb6e5c59p-77, 0x1.99c3991644b9bp-880,
     0x1.e17d1e02d02bap-947, 0x1.c9a02c09bbabp-468, 0x1.5d8a7af310d06p-909, 0.0, 0.0,
     0x1.26f8d956bab9ep-977, 0.0, 0x1.08a4ecb35f93p-4, 0x1.1378a107e761bp-453,
     0x1.e77dac7a757abp-498, 0x1.b6d5ebcfdefb6p-541, 0x1.4de13a131c3e5p-971,
     0x1.5dd1663c9961bp-812, 0.0, 0x1.afdbe0159c3eep-667, 0x1.f7f4bf4cc06efp-473,
     0x1.978a3ab5a6f31p-354, 0.0, 0x1.09dfa1e15c6cbp-451, 0x1.02b29066fbf18p-472,
     0x1.fa1a49e1176ebp-36, 0x1.43354dfcd67fap-770, 0.0, 0x1.20838d281b251p-793,
     0x1.f99dbdc358cc2p-343, 0x1.97adef4e23fa4p-96, 0.0, 0x1.4d58cf3b162b7p-163,
     0x1.334d542b2c3a5p-69, 0x1.2e894af44e277p-808, 0x1.8084900d91eebp-590, 0.0, 0.0,
     0x1.00ff70f2623ebp-973, 0.0, 0.0, 0x1.2e47f1670315ep-44, 0x1.af3a3953bede8p-534,
     0x1.b18e5eb90e44bp-414, 0.0, 0.0, 0x1.fd7c3080052b9p-167, 0x1.25b761e6cfd8ap-615,
     0.0, 0x1.cf8b3d8725e79p-76, 0x1.b1cf60902735dp-487, 0.0, 0x1.5d71422d2446fp-738,
     0x1.e0587b045825fp-736
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
            tmp1 = Sleef_cosd4_u10kvx(tmp0);
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
    printf("Sleef_cosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cosd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
