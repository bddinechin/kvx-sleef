/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd2_u35avx2128.c --function Sleef_cbrtd2_u35avx2128 \
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
     0x1.14d1f11775084p-617, 0.0, 0x1.ab9a52f4cee82p-672, 0x1.f9c31f02ee1d5p-832,
     0x1.35c8cef482623p-141, 0x1.6e9ee163ec2a6p-413, 0.0, 0.0, 0.0,
     0x1.ec2e2076951b8p-499, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14f50674a86d7p-395, 0.0, 0.0, 0x1.92c93c03b48e5p-247, 0.0, 0.0,
     0x1.802ab29068cd1p-904, 0.0, 0.0, 0.0, 0x1.81a06f0f6e114p-602,
     0x1.776557ddd8042p-220, 0x1.50e91e2151e19p-552, 0.0, 0.0, 0.0, 0.0,
     0x1.0241ca9e521d7p-243, 0x1.8a784fa8dcdb1p-523, 0.0, 0x1.7e2b709f4def1p-734,
     0x1.e366ebe82447dp-508, 0.0, 0x1.eed1e8dd8cb24p-578, 0x1.2ebca0e2cd558p-700, 0.0,
     0x1.717ae38077be7p-29, 0.0, 0.0, 0x1.c0b6d718684dp-789, 0.0,
     0x1.be248425cf6cfp-773, 0.0, 0.0, 0x1.7bd056cff14f9p-285, 0x1.ec43fa22b7646p-615,
     0.0, 0.0, 0x1.392feedd4cb9ep-765, 0.0, 0x1.ef5599438bf02p-657,
     0x1.5324d061a9c88p-825, 0.0, 0.0, 0x1.65379a82a2d22p-918, 0x1.fae441f9a6fa4p-498,
     0.0, 0x1.bd996e0c4bb46p-105, 0.0, 0.0, 0x1.2dca1864c62dcp-408,
     0x1.a11c27a885b11p-745, 0.0, 0.0, 0x1.362ac925203afp-827, 0x1.4b91f99ebbb84p-594,
     0x1.3c57b100f44c1p-528, 0x1.b413eea0a0dafp-483, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.041247943b6c7p-244, 0x1.a38deb0c7892ep-133, 0x1.664d4279574c2p-560,
     0.0, 0x1.69c72541fd40bp-603, 0x1.93be02f7049dep-828, 0x1.a4fcbc4aea16cp-660, 0.0,
     0x1.8163af05d98b4p-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.843394766c328p-686,
     0.0, 0x1.4498cca23c729p-615, 0.0, 0x1.6303d31680a08p-284, 0.0,
     0x1.159b0d2711d47p-654, 0x1.c19ff5402f045p-511, 0x1.7a3a3169e033ep-722, 0.0,
     0x1.65b97f955c73ep-847, 0x1.ed68614593a7ap-93, 0x1.66738bdd31e22p-634, 0.0,
     0x1.8ef9c06fa758bp-636, 0x1.67b1091620343p-533, 0.0, 0.0, 0.0,
     0x1.2c93d216a818bp-564, 0.0, 0x1.f6749ae27bf5p-629, 0x1.a54206dce0a45p-115,
     0x1.4d08db0e068cep-814, 0x1.303c6986af082p-194, 0x1.a780722e22a0cp-4,
     0x1.2dff62847853ap-35, 0x1.c8048269361b1p-481, 0x1.12235ea85c61p-96,
     0x1.15da8b5827708p-184, 0x1.b0e779a37907bp-414, 0x1.ac206b851d3c2p-530, 0.0, 0.0,
     0.0, 0x1.92782d5ccdefdp-792, 0.0, 0x1.9cde10282d563p-152, 0.0, 0.0,
     0x1.e9fa999f7d898p-782, 0x1.fccbcba1b1805p-505, 0x1.dc5b9a83796d5p-277, 0.0,
     0x1.d79c0c46cd092p-686, 0.0, 0.0, 0x1.90e28ae851d52p-690, 0.0, 0.0,
     0x1.5741b394b50a8p-803, 0x1.c36438c760031p-316, 0x1.042013bfd028dp-935,
     0x1.0bd90b67c1a9cp-886, 0.0, 0.0, 0.0, 0x1.5a7f28b857d7ap-54,
     0x1.c3289e6a406d4p-63, 0.0, 0x1.7ff1375899414p-185, 0.0, 0x1.a22d4d688f0f1p-176,
     0.0, 0.0, 0.0, 0.0, 0x1.52b4497c8142bp-396, 0.0, 0x1.5b3b46d122ecbp-362,
     0x1.1db576606b711p-459, 0x1.327bfc81c6516p-148, 0x1.4e23223f1f2c1p-768, 0.0, 0.0,
     0.0, 0x1.9690e9ac85d8fp-256, 0.0, 0x1.8e0a54163a4f1p-882, 0.0,
     0x1.3c4acaa40f50cp-306, 0x1.79c2ab8248573p-788, 0x1.f9c6fd7ad08f3p-604,
     0x1.280268d2ecb27p-635, 0x1.2afe9d9fe3496p-859, 0x1.9d0da56259294p-593,
     0x1.c8c33f9ee008ep-414, 0.0, 0.0, 0x1.8150608d4d732p-1001,
     0x1.567f7262d60bep-217, 0x1.2e6424e52dd2dp-131, 0.0, 0x1.40b6632451c23p-237, 0.0,
     0.0, 0.0, 0x1.b7640ac44e6c4p-1004, 0x1.8c9333a553cacp-500,
     0x1.33566a9139896p-411, 0x1.560fa22c99337p-1020, 0x1.0c62f3b3a99e9p-36,
     0x1.445818df6556ap-860, 0x1.e675cce36a09ep-885, 0x1.eaea6a568edbep-150,
     0x1.cb5766730c239p-245, 0x1.99692753f9973p-34, 0x1.b9189917915bbp-263,
     0x1.1acf74ba4348p-864, 0x1.e5e015d0b895p-19, 0x1.1651e38a44328p-132,
     0x1.2e4c487318089p-530, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6dfd3071ffed6p-1005, 0.0,
     0x1.df0a8a0874f05p-456, 0.0, 0x1.e99783a77f6bcp-611, 0x1.e138c3ba37d45p-172, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28d34a2b8553bp-257,
     0x1.9619a840fc4a8p-480, 0x1.adf07eb2ccd5bp-230, 0.0, 0.0, 0.0,
     0x1.01f61f0979794p-269, 0.0, 0x1.a24358f803116p-114, 0.0, 0x1.b7a189e4de34ep-801,
     0x1.75d74578b6907p-400, 0.0, 0x1.592339b942e1bp-262, 0x1.1a40c6cc4753p-629,
     0x1.4a90d793ffe39p-764, 0.0, 0.0, 0.0, 0x1.a054dff78e0bp-394,
     0x1.8bbbeae6ebd2fp-859, 0x1.04b3e9d015d1ap-848, 0.0, 0x1.729e7b5ad8687p-555,
     0x1.8bb1805d749afp-691, 0x1.66562f3066871p-446, 0.0, 0x1.6843817aed87dp-991, 0.0,
     0x1.159732092ac34p-844, 0.0, 0x1.57c1e183fac08p-220, 0x1.617e8cdf19172p-922, 0.0,
     0.0, 0x1.0c17add955f97p-601, 0.0, 0x1.802b4df38260cp-801, 0.0,
     0x1.f9f51f6d74836p-147, 0x1.06ba2f1e2ad03p-566, 0x1.9f65ce8b39ca3p-688,
     0x1.62762eddfa787p-968, 0.0, 0x1.7da23996ae48bp-866, 0x1.0080891adc9ddp-556,
     0x1.ec587a039e76fp-655, 0x1.5f44ac49520d2p-302, 0.0, 0x1.e6044501d1308p-611,
     0x1.6024b32c0cefap-214, 0x1.c7835526ec58ep-299, 0x1.2700fd1a629adp-251, 0.0, 0.0,
     0.0, 0x1.6cf98404f9442p-41, 0x1.3fc743b9206d4p-55, 0x1.7fdf8aa0f0c5fp-359,
     0x1.1aadb369b644dp-668, 0x1.3c3250b1c9768p-425, 0x1.b66184213d235p-2, 0.0,
     0x1.8c27e7e9dcb16p-551, 0x1.a6ca46705441ep-134, 0x1.ddfc9c6928e7ap-463, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.47f32e62e6519p-106, 0.0, 0x1.10a2d4b10bb01p-545, 0.0, 0.0,
     0x1.fc09b1eec99c7p-266, 0x1.6138500263492p-392, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.60a739ca89502p-179, 0.0, 0.0, 0.0, 0x1.84c8507ac64ecp-774,
     0x1.6f922c8435fc7p-623, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9689d429a37cbp-200,
     0x1.7a2984ae8f685p-602, 0x1.59696f7be909ep-396, 0x1.a81730d7fcf9dp-48,
     0x1.4f800b2a92fe1p-210, 0x1.6f1e54d24cb4ap-860, 0x1.f1de88efc2497p-856, 0.0, 0.0,
     0x1.baeaf83475922p-627, 0.0, 0.0, 0x1.cd22c67d32868p-41, 0x1.62d24adabf2e3p-552,
     0.0, 0.0, 0.0, 0x1.379d1253df713p-404, 0x1.42ebfb8682556p-218, 0.0, 0.0,
     0x1.e6d8cf3d2cf47p-339, 0x1.d648227b60c4ap-727, 0x1.4553d5d81a7e6p-357, 0.0,
     0x1.e2ca5608f732bp-484, 0x1.8e6471bb294ebp-322, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9215623f7536p-871, 0.0, 0x1.3b174b83446ecp-299, 0.0, 0.0,
     0x1.f03ebece2e44bp-168, 0x1.397deba09e7f3p-553, 0x1.7aa435726d66ep-903,
     0x1.8bc988c6c3affp-753, 0x1.772aab5ff03bbp-237, 0.0, 0.0, 0x1.2b422061414f4p-717,
     0.0, 0.0, 0.0, 0x1.1fedced6c7908p-108, 0.0, 0x1.15607321eb459p-775,
     0x1.a71075150af88p-104, 0x1.5bf5e0ad4420cp-224, 0.0, 0.0, 0x1.b1e31a1cafe42p-143,
     0.0, 0x1.a965a03ec4bb7p-981, 0x1.57819d756f212p-872, 0x1.e040ac84ddc7ep-956,
     0x1.54e79459e9335p-494, 0x1.a063f16e8d246p-107, 0x1.5a2c822709f9fp-414,
     0x1.9dc331da8d37ap-467, 0x1.eb0775d962f87p-990, 0.0, 0x1.e617537e6ca32p-835, 0.0,
     0x1.2a58c5cd353f6p-603, 0x1.241f268c1f404p-839, 0.0, 0x1.b7adfc05ba968p-901, 0.0,
     0.0, 0.0, 0x1.2206ae739664p-947, 0.0, 0x1.e865558ee8f85p-863,
     0x1.484e452d63246p-48, 0x1.375f0198a2175p-829, 0x1.5c8eee8b39de9p-26, 0.0, 0.0,
     0x1.4193acb6a5c43p-1019, 0x1.aa36463bc296dp-115, 0x1.038b55920e4dap-108, 0.0,
     0.0, 0x1.2625d1e593279p-834, 0.0, 0x1.9991d64da4da7p-36, 0.0,
     0x1.f9f0961124273p-36, 0x1.a05a46d917f6bp-176, 0x1.e0d977320b2p-999, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2b70b6617774dp-980, 0.0, 0.0, 0.0, 0x1.7c5752ffbbf45p-357,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b73b7410b0a3p-51, 0x1.2cdff7be44e8dp-184, 0.0,
     0x1.a718490603bc3p-914, 0.0, 0.0, 0x1.fe316105589bbp-347, 0.0, 0.0,
     0x1.b3fa3bb0c4004p-763, 0x1.32ef6d2baefc3p-411, 0x1.9427182e13c7p-774, 0.0, 0.0,
     0.0, 0x1.d3f4b5da91b9dp-805, 0x1.756509ca7dbafp-956, 0.0, 0x1.f1dd720c89e06p-322,
     0.0, 0x1.579acfd76c15bp-746, 0x1.a507aec8c3d31p-243, 0.0, 0.0,
     0x1.9dfb1218571fap-605, 0.0, 0x1.5fa8d5979d298p-358, 0x1.4044e3b5544dap-130,
     0x1.98afb3ed8aab2p-305, 0x1.8c3b2fc2f84acp-608, 0x1.42818e4d1e571p-886, 0.0, 0.0,
     0.0, 0x1.369e777ee59bep-586, 0.0, 0.0, 0.0, 0.0, 0x1.ef365be196eafp-300,
     0x1.22035b688a6fep-587, 0x1.28240b6793582p-520, 0x1.ef998afb9f143p-273,
     0x1.960b423d265cbp-7, 0x1.8f1f0c4473ce3p-413, 0.0, 0x1.15ae1adb61203p-631,
     0x1.782536dfc3392p-750, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.985aa5abb121bp-310, 0.0,
     0.0, 0x1.9e0107087e07dp-682, 0x1.168bb610d1e8fp-1006, 0.0,
     0x1.db84ef1e53fd3p-774, 0.0, 0x1.93db0c33426b8p-516, 0.0, 0.0, 0.0,
     0x1.ebd8026f7cc39p-644, 0.0, 0.0, 0.0, 0x1.a67c2d51c4e2ap-45, 0.0, 0.0,
     0x1.a02b466507038p-19, 0x1.cef83b59153c4p-57, 0x1.46de0ca90e236p-614, 0.0, 0.0,
     0.0, 0.0, 0x1.69fe83b50a657p-602, 0.0, 0.0, 0x1.620dc3227c119p-491,
     0x1.ccae355650486p-126, 0.0, 0x1.0ab387cfb47e5p-105, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.60c046c0fe436p-111, 0.0, 0x1.65d16a3abb569p-946, 0x1.5c2f9168692fbp-920,
     0x1.4ec085cc52d63p-435, 0.0, 0.0, 0x1.ce91f11fe0646p-365, 0.0, 0.0,
     0x1.2c7aa780bb51cp-334, 0x1.7ff153b92e618p-839, 0.0, 0x1.723082df9fe91p-300, 0.0,
     0x1.b2e587640b25p-181, 0x1.a95f038d211b6p-235, 0x1.c86d95ec655fp-285,
     0x1.643a797f508fep-710, 0.0, 0x1.d56a2c88c0c7p-368, 0x1.d39d04d0bf5d2p-198, 0.0,
     0x1.786f53759fae2p-307, 0x1.bacb9eb5902e3p-598, 0x1.251e5e2edf23fp-411,
     0x1.c806c55b0ff7fp-210, 0x1.75a566b0a7ab4p-301, 0x1.9d3aa17be59b1p-240, 0.0,
     0x1.1859ddfe97728p-8, 0x1.2e4a026eb093fp-714, 0.0, 0x1.c66c9f11be92cp-146, 0.0,
     0.0, 0x1.f7170bef28bc4p-850, 0x1.c0e8e7224679fp-649, 0.0, 0x1.daa3919444963p-408,
     0.0, 0.0, 0x1.83fcf6118c74fp-633, 0.0, 0x1.d1949575733bp-24,
     0x1.9c44c07f1cae5p-480, 0.0, 0x1.36fbf9d42fc21p-223, 0.0, 0.0,
     0x1.6936332a1916ap-683, 0x1.b443f5d10f179p-961, 0x1.e6557264d4b77p-603,
     0x1.224e81744d86ap-430, 0x1.9401435234bbbp-923, 0.0, 0.0, 0.0,
     0x1.d8a9d5c5b4dc1p-577, 0.0, 0.0, 0x1.202d49f89295ap-611, 0.0,
     0x1.428b3d5aa0dedp-814, 0x1.54ee1fb2d5bd7p-656, 0x1.72d00909aa945p-55,
     0x1.1b601038daff8p-690, 0x1.976a4f934e0e3p-226, 0.0, 0.0, 0x1.6c633ffcdbaa6p-800,
     0x1.b7589bccc20afp-589, 0x1.e826fcaf7b465p-525, 0x1.19695ef9591e9p-722,
     0x1.c5e9261aa3f7dp-432, 0.0, 0x1.598e4940d8152p-817, 0x1.daac53f9a888bp-564, 0.0,
     0.0, 0x1.d9910a079314ap-578, 0x1.1b2599083ceb3p-275, 0x1.a7768b5cc487dp-297, 0.0,
     0x1.c9b97d2bca6c3p-542, 0.0, 0.0, 0x1.cec4d233fc8eep-140, 0x1.471a2786c415p-334,
     0.0, 0.0, 0.0, 0x1.75526d3028d31p-723, 0x1.307f49b4c3b87p-718, 0.0, 0.0,
     0x1.ea2ff793a069bp-349, 0.0, 0x1.9caffae8b7765p-640, 0x1.d9032f4376205p-182, 0.0,
     0x1.54ba01d2f7798p-598, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.828f6c7af37f2p-283, 0.0,
     0x1.4af2da082ef72p-274, 0.0, 0.0, 0x1.1f22110b89aa4p-1, 0x1.4065fa5fcce96p-391,
     0x1.12c2ba8813cabp-883, 0.0, 0.0, 0x1.2c2e4e80f21c9p-863, 0.0,
     0x1.2b6af8f819f13p-564, 0.0, 0.0, 0.0, 0x1.8a407455b6868p-2,
     0x1.cd51183ce652fp-722, 0x1.fcd8da7deca57p-317, 0.0, 0x1.63e1365e85bbcp-672,
     0x1.6ad018c5f37b2p-457, 0.0, 0.0, 0.0, 0.0, 0x1.9497a41886bafp-312, 0.0, 0.0,
     0x1.566836c0e3e16p-846, 0x1.cab1fdfe199bap-90, 0.0, 0x1.5c93b65cbece3p-78,
     0x1.1f407bbda4fafp-628, 0x1.04ffbb3890b07p-63, 0x1.a7d0c242dd223p-467, 0.0,
     0x1.29c23a8d830a4p-728, 0.0, 0.0, 0.0, 0x1.e9f7f7f30a22dp-916, 0.0, 0.0,
     0x1.6ec3c5c903c7cp-271, 0.0, 0.0, 0x1.0c2ce65ad464ep-105, 0x1.2687edb26bbe3p-907,
     0.0, 0x1.92f213a2c2511p-114, 0x1.5e4a9c31b99d6p-619, 0.0, 0.0, 0.0,
     0x1.98c034168f895p-388, 0x1.38f3f5b60644cp-215, 0x1.f2927e762f06cp-306, 0.0,
     0x1.ea6a5af11b4edp-174, 0.0, 0.0, 0x1.f091edc3cd47p-665, 0x1.a4a072b8fd334p-658,
     0.0, 0x1.8f03ca6c15b7p-968, 0.0, 0x1.b454c371998d6p-454, 0x1.bd91f9b84654ap-231,
     0.0, 0x1.73b3d9e2b7286p-116, 0.0, 0.0, 0x1.93ff759205c31p-397, 0.0,
     0x1.575b81b7b1e96p-533, 0x1.51d49d3f0da7dp-843, 0x1.386d92d8e58d1p-801,
     0x1.d7af17eb7094dp-714, 0x1.690c96241e9f1p-682, 0x1.cc6a6448ab32cp-763, 0.0, 0.0,
     0.0, 0x1.b37b3932ded6p-382, 0x1.897ecb3bd9896p-748, 0.0, 0.0,
     0x1.0e78398783787p-27, 0x1.6b846cbdda7d5p-222, 0x1.9f9a0142ff8a3p-807, 0.0, 0.0,
     0.0, 0x1.4bacc84da6a84p-466, 0.0, 0.0, 0x1.92a8eeec2617bp-537,
     0x1.1f4f3b06eeb0cp-207, 0.0, 0x1.0f0468fdf37eep-294, 0x1.be733f4c6d68ap-156,
     0x1.665cf8583e55dp-189, 0.0, 0x1.e99ece1d0ea2fp-313, 0.0, 0x1.58cc67d8e86cbp-930,
     0.0, 0.0, 0.0, 0x1.a292e9e0bda15p-115, 0x1.32d52cfc28736p-818,
     0x1.f5fbed5731f9fp-332, 0x1.6696af5b9a5c5p-187, 0x1.41b678fbb0fc6p-708,
     0x1.6bd48cb2b8876p-739, 0x1.7fd0c349a1c5fp-450, 0.0, 0.0, 0.0,
     0x1.93b80ba40e074p-496, 0x1.e88f20389b25dp-514, 0.0, 0x1.c9372c7018789p-915,
     0x1.ff7066a121e12p-550, 0.0, 0.0, 0x1.5aa5999f8cc61p-138, 0.0,
     0x1.43effd1d1ae61p-922, 0.0, 0x1.cbf95c8d6238ap-191, 0x1.befce71a64562p-254,
     0x1.16b9960494d39p-351, 0x1.7ee5622bef9c4p-24, 0.0, 0.0, 0x1.f551b6e784e31p-323,
     0x1.46dfb519797fep-329, 0x1.b60fb37bc90f7p-46, 0x1.ccc9cbba5130ap-790,
     0x1.69d3c5f61346cp-596, 0.0, 0.0, 0x1.3c9464a0f623p-355, 0.0,
     0x1.7e0ad720ca705p-495, 0x1.9408ac55c1003p-426, 0x1.5987c9d4458e2p-990, 0.0,
     0x1.bca86159d4a04p-893, 0.0, 0.0, 0x1.6967a15ec1905p-314, 0.0,
     0x1.f4a5542b3dc3bp-424, 0x1.b0f4bb10a7daap-468, 0x1.26d5e7538d0a5p-689, 0.0,
     0x1.ce016b9dcdf5ep-793, 0.0, 0x1.ca0390c91831dp-1020, 0.0, 0x1.c891f1cea132p-104,
     0x1.b23cc0b5adeddp-51, 0x1.873cef007c93bp-532, 0.0, 0x1.dff0077696e23p-805,
     0x1.95da0063f6e0fp-148, 0x1.d44ca53303ef5p-727, 0x1.85745c50a22a7p-141,
     0x1.0229e87d69717p-658, 0x1.b779c814f0a72p-770, 0x1.d21699ccfea8fp-403,
     0x1.6ddf60ff4856ep-145, 0x1.645e745445185p-759, 0x1.6ec0566cd1d2fp-781,
     0x1.136853f41c1d3p-480, 0.0, 0x1.60678693ca528p-419, 0.0,
     0x1.7cd5a436ceaa1p-1001, 0x1.904c22166a048p-671, 0x1.fee2b49c9a425p-108,
     0x1.fdb18006f4623p-10, 0x1.6368b7bb0e95ep-753, 0x1.3dd33ecea72e6p-154,
     0x1.2de9b218ee32cp-702, 0.0, 0x1.d1616b9b7b8d6p-577, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3f1efeb4c6d17p-118, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0a41a13e9bcap-779, 0x1.318db15fdfc0fp-965, 0.0, 0x1.c119cda0e22a5p-306,
     0x1.b2bb8fe4e6bbcp-1008, 0x1.36a5c955da7bcp-250, 0x1.420ca5970cd9cp-235, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9590b3a2ad606p-650, 0x1.e2580eb2c5a08p-151,
     0x1.038d3c5b3216ap-318, 0.0, 0.0, 0x1.8e143679becdp-401, 0.0,
     0x1.df468e6db918dp-219, 0x1.f445f89d0dac4p-110, 0.0, 0.0, 0x1.4693d59013226p-916,
     0x1.c7545e5682bdfp-965, 0x1.378b454bba85dp-255, 0x1.488b5a259eb68p-21,
     0x1.5b27c1ed3cb34p-528, 0x1.ad142c3c50476p-421, 0.0, 0.0, 0x1.bf137420bcc1cp-311,
     0.0, 0.0, 0x1.3c225ac1f555cp-863, 0.0, 0x1.3b5625f451dbbp-956, 0.0, 0.0,
     0x1.69f48acc5354p-1003, 0.0, 0x1.adb06fb762648p-834, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11388bbfadf06p-580, 0.0, 0x1.cea3a5d6ea56fp-775, 0.0, 0.0,
     0x1.706725dfc8b49p-971, 0x1.4ab840826ccf7p-922, 0.0, 0.0, 0.0,
     0x1.da2ff44eff168p-563, 0.0, 0.0, 0x1.35ad208101978p-462, 0.0,
     0x1.8508cc194f4d1p-708, 0.0, 0x1.0f60d11f7072cp-7, 0x1.2671346523999p-302,
     0x1.c9ef371dc9f31p-976, 0.0, 0x1.2398c70ed662ap-189, 0.0, 0.0, 0.0, 0.0,
     0x1.6e3c7b5cf08f5p-738, 0x1.5c982acb5c891p-546, 0x1.fefe0b29c05c4p-1020, 0.0,
     0.0, 0.0, 0x1.b69fd82a54559p-397, 0x1.e2a340b99903dp-383, 0x1.bdc53fb9882e5p-44,
     0x1.3fca9f6ed39c7p-499, 0x1.c95016faee1cep-316, 0x1.ba276a6869ae3p-48, 0.0, 0.0,
     0x1.cf326d5e596b2p-784, 0x1.ff4c5dc236b7p-964, 0x1.245602fc40dbbp-956,
     0x1.374b0dcd6c77cp-843, 0.0, 0.0, 0.0, 0x1.4872a0d608ffcp-406, 0.0, 0.0,
     0x1.f34c899fc50e7p-17, 0x1.b1e1ea4059fd6p-309, 0x1.eb5ace0ec432cp-240, 0.0,
     0x1.20bab2abc3c12p-152, 0.0, 0.0, 0x1.287eba519a121p-600, 0x1.d1f775e55814p-181,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14331be312089p-896, 0.0, 0x1.da152600ccd17p-409,
     0.0, 0.0, 0.0, 0x1.24c47c468290bp-393, 0x1.e20fba16db716p-410, 0.0,
     0x1.2e46a52a7a175p-596, 0.0, 0x1.92d8b3a9c02fdp-846, 0x1.5dfbf58de5135p-253,
     0x1.628eba612d9abp-370, 0x1.6332edd6434ecp-86, 0x1.64ab88b71c1cbp-730,
     0x1.6dbfd0f296f63p-17, 0.0, 0.0, 0x1.23a95963a9059p-403, 0.0,
     0x1.77812b1e62d3ap-587, 0x1.2dd77f0f10255p-740, 0x1.c7bbdd1cea1f2p-659,
     0x1.7d380bb0cea5bp-937, 0x1.4fd955c453efdp-662, 0x1.083c687e6b604p-841,
     0x1.0d66c4248006dp-31, 0.0, 0.0, 0.0, 0x1.24f289ffd495bp-686,
     0x1.1c5fa2d27f602p-702, 0.0, 0.0, 0.0, 0.0, 0x1.937ce46a1f0d6p-734,
     0x1.e2357f33a93ep-608, 0.0, 0x1.31016aa39adp-519, 0x1.a51690d6e14f9p-611, 0.0,
     0.0, 0.0, 0x1.4c875ec1b6ac3p-636, 0x1.b776f6aa7dc67p-462, 0.0, 0.0, 0.0, 0.0,
     0x1.6fb6b0ab5a212p-817, 0x1.b6a0605f0df01p-357
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
            tmp1 = Sleef_cbrtd2_u35avx2128(tmp0);
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
    printf("Sleef_cbrtd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cbrtd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
