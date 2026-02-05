/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tgammad2_u10kvx.c --function \
 *     Sleef_finz_tgammad2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.5ea677517cc21p-1000, 0x1.81228a2ca2989p-163,
     0x1.e92f673394d74p-228, 0x1.5a49129cec59cp-935, 0x1.65c5af060b76p-609, 0.0, 0.0,
     0.0, 0x1.bef1054df47b6p-132, 0.0, 0.0, 0.0, 0x1.a0542b77033d1p-848, 0.0, 0.0,
     0.0, 0x1.c27d44fb1d575p-845, 0.0, 0x1.85415fb849ff1p-549, 0x1.31d00ba0d6c92p-689,
     0x1.97642b11223d5p-209, 0.0, 0x1.243047609aa7bp-219, 0.0, 0x1.526b320ea4c7ap-427,
     0.0, 0x1.6818182053002p-375, 0x1.3cf54900b716cp-328, 0x1.745a6f134b793p-155,
     0x1.2cbac5327d63bp-479, 0x1.b65e3de1b2221p-775, 0x1.7056584c55091p-652,
     0x1.d492dce2ca73cp-707, 0.0, 0x1.d83b06f1b9c2bp-807, 0.0, 0.0,
     0x1.ad8a70371b9bcp-130, 0.0, 0x1.c94a886d13911p-949, 0x1.c4ee54fa73d7bp-89,
     0x1.0e2ae88977f4ap-661, 0x1.1beeba1eaf905p-469, 0.0, 0x1.270b7df84beb9p-75,
     0x1.5138aa4092ce2p-315, 0x1.1429aeac45e8p-694, 0.0, 0x1.883e25563f122p-13, 0.0,
     0.0, 0.0, 0.0, 0x1.6a862a43d9139p-121, 0x1.de2065871ef65p-546,
     0x1.7720528a8162bp-426, 0x1.169e4def12d1ap-744, 0x1.bcf6edc8d6b16p-440,
     0x1.f45134498d0e3p-454, 0x1.de239cf731f65p-184, 0x1.135b65a942201p-31,
     0x1.f98f2be904354p-130, 0.0, 0x1.85f8fd3352c6bp-213, 0x1.0d0bdf5a1759cp-195,
     0x1.ec830683f6b9cp-439, 0.0, 0.0, 0x1.7809d88bc60a6p-527, 0.0,
     0x1.26499d5fba0b3p-661, 0.0, 0x1.bed883b54d464p-145, 0.0, 0x1.555f430032dfp-355,
     0x1.21df9bf1d818fp-734, 0x1.198449e4196d2p-257, 0.0, 0.0, 0x1.869755835d509p-911,
     0x1.ccee1d2addab7p-325, 0x1.0408bb5500d7cp-755, 0x1.a7379a642a061p-824,
     0x1.1850a4f2f9954p-138, 0.0, 0.0, 0.0, 0.0, 0x1.95486ce9eab1cp-583,
     0x1.44a826d8d9ef9p-519, 0x1.c7da719623454p-11, 0.0, 0x1.c2c0337afe415p-981, 0.0,
     0x1.d6cf9a32b3968p-977, 0x1.66a9f3e4eba9cp-302, 0x1.c9d69710cf902p-738, 0.0, 0.0,
     0x1.fdead2d2390a6p-622, 0x1.10b12180bf33ap-323, 0x1.4074d5f86cd4bp-916,
     0x1.66a03f46f0c79p-617, 0.0, 0.0, 0x1.1d2bd9cab728dp-920, 0x1.6f40a81c583dp-804,
     0.0, 0.0, 0x1.81bb9da5378c9p-548, 0x1.e527c6ad0a07dp-324, 0.0,
     0x1.aff1f32d34193p-728, 0x1.1716de338d04cp-826, 0.0, 0.0, 0x1.b1577d50a4058p-258,
     0x1.7af818b42dc27p-1008, 0x1.4bd6a8459c7c5p-786, 0x1.2e377d953e575p-427, 0.0,
     0.0, 0.0, 0.0, 0x1.8d9a343e4ac95p-952, 0x1.90fe88189747cp-593,
     0x1.a51ea176c8816p-380, 0x1.3e5d14b70fe1cp-804, 0.0, 0x1.21976f76c378ap-466,
     0x1.1d6c0bb0c3e3fp-419, 0x1.f1cb4cd1168b2p-833, 0.0, 0x1.7fc60454aa835p-981, 0.0,
     0.0, 0.0, 0x1.f0d20e018aecbp-40, 0x1.328fef2d212aep-483, 0.0,
     0x1.11724467ecb99p-727, 0x1.20645232bc105p-748, 0.0, 0.0, 0.0, 0.0,
     0x1.aefdbb0d45a91p-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0500549c018bp-325, 0.0, 0x1.659d027819d15p-1002, 0.0,
     0x1.0c2a5636f7a36p-815, 0.0, 0x1.2d016574d3df4p-513, 0x1.a3fe0855296b2p-121,
     0x1.3d909418414abp-9, 0.0, 0x1.f7fc2546a46bcp-72, 0.0, 0x1.41cb1adc64946p-280,
     0.0, 0.0, 0x1.7df6fe420db51p-260, 0.0, 0.0, 0x1.696631bbdd31ep-228,
     0x1.7282d30d8e7dep-597, 0.0, 0.0, 0.0, 0.0, 0x1.7c0ba4d5173cfp-463, 0.0, 0.0,
     0x1.83cf234fe1b54p-2, 0x1.abe9c1e7c1d44p-597, 0.0, 0x1.209b67ce797c2p-806, 0.0,
     0.0, 0.0, 0x1.c1b6b4f79d682p-413, 0x1.9b055bba03981p-143, 0x1.7f8ea94efaebep-2,
     0.0, 0x1.1613ce26a2a8fp-943, 0.0, 0x1.d4cb79620e8f2p-84, 0.0, 0.0, 0.0, 0.0,
     0x1.7ecaf8c19411ap-714, 0x1.52ca075908832p-681, 0x1.65706bbbfe77dp-1014, 0.0,
     0.0, 0x1.f6066eb8f31bp-973, 0x1.76742ff19d57dp-490, 0x1.f84b48db1fcecp-407,
     0x1.1e93d584189e8p-412, 0.0, 0x1.a983eee5926b2p-1002, 0.0, 0.0,
     0x1.1c084779e459bp-362, 0x1.5f2176026237cp-71, 0x1.69b37c8a22ad8p-455, 0.0,
     0x1.82f70c51fcf88p-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b1823ca34e9fp-80,
     0x1.a2fa371035b35p-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93900c4bb319fp-339, 0.0, 0x1.9a9cc0dc183b1p-147, 0x1.73b72f9eabc42p-285, 0.0,
     0.0, 0.0, 0x1.85c405b3b087cp-891, 0x1.8dd3e1811a7afp-261, 0x1.6b99643ae65a2p-602,
     0x1.deb4adcb1c204p-422, 0.0, 0x1.fe24745d5c63ap-730, 0x1.b28e8f3f17449p-223,
     0x1.5fd435c45135cp-209, 0x1.965619b5ac1p-737, 0.0, 0x1.2ac188d674618p-646,
     0x1.5862c45cf40c5p-483, 0x1.6746c1fe032p-336, 0.0, 0x1.7679019dba38p-584, 0.0,
     0x1.0eec04f9aae85p-165, 0.0, 0x1.9f1b44ba3170cp-747, 0.0, 0.0, 0.0,
     0x1.6ee0ef37c04cdp-376, 0x1.d7b3fcdef5c99p-736, 0.0, 0x1.e0b9e843114fdp-184,
     0x1.2724874562b55p-845, 0x1.40ea0d0f5c11ap-421, 0.0, 0.0, 0x1.680a6fab5bcb8p-19,
     0x1.57ffa44783defp-139, 0x1.fed9c4099134cp-93, 0x1.c97a1400f7546p-573, 0.0, 0.0,
     0x1.2c62e41539a22p-908, 0x1.1bbdf79857f3bp-668, 0.0, 0x1.307f9a39da4ccp-843,
     0x1.a86083b88d3b3p-49, 0.0, 0.0, 0.0, 0x1.ce350cfa7c319p-33, 0.0, 0.0, 0.0,
     0x1.52f100b7e7dcep-62, 0x1.609e94af1ea8ep-357, 0x1.01a5da78882abp-500, 0.0,
     0x1.e5496444580fp-473, 0x1.1e3266433e55ap-335, 0.0, 0x1.dc84839882a93p-128,
     0x1.770b011144d0ap-960, 0x1.f59e9ea0bd4ap-156, 0.0, 0.0, 0x1.7a219fdb9f7bep-117,
     0x1.f3018a3d47bccp-537, 0x1.60aa6df04a854p-870, 0.0, 0x1.e783901c5da0ap-225,
     0x1.89f3edd18e658p-166, 0.0, 0x1.4861a9bd7944p-916, 0x1.9d38e39f1656cp-647,
     0x1.5c011f6d09041p-593, 0.0, 0x1.a97e435d17e38p-664, 0x1.eec48fe479b98p-1013,
     0x1.1b99e7028b118p-655, 0x1.bb7ddff739c2dp-228, 0.0, 0.0, 0x1.56604fff60725p-925,
     0.0, 0.0, 0.0, 0.0, 0x1.103842cd80ad3p-28, 0x1.fba20c007a766p-716,
     0x1.2083320807a85p-579, 0.0, 0.0, 0.0, 0.0, 0x1.03389ff803588p-92, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a816e21eb2484p-533, 0x1.cd6f7fcd4fc17p-212, 0.0,
     0x1.c51553d01d8d5p-201, 0x1.84c9ee5541606p-656, 0.0, 0.0, 0x1.596a9c6f0260fp-546,
     0x1.fd9a946aa2596p-695, 0.0, 0x1.9988a28f2d0aap-545, 0.0, 0x1.ac562e594b805p-666,
     0.0, 0x1.d3dc004fd74cep-141, 0x1.7e62de5765c89p-580, 0.0, 0.0,
     0x1.66941c80b0c0fp-475, 0x1.47366ff7dc663p-379, 0.0, 0x1.62014eaeb298fp-709,
     0x1.38bc17b44ed6cp-881, 0.0, 0.0, 0x1.42738991d7c69p-247, 0x1.2687ba4a07c1cp-506,
     0.0, 0.0, 0x1.f049c68da1884p-144, 0.0, 0x1.8e14e5baa5c8dp-397,
     0x1.796f9e1360b37p-74, 0.0, 0x1.727a732ad8406p-848, 0.0, 0x1.47fd6afa933b4p-372,
     0.0, 0.0, 0x1.c8d47c2b234b1p-819, 0.0, 0.0, 0.0, 0.0, 0x1.29a7ec4929151p-67, 0.0,
     0x1.3d3dbbf0753c2p-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7af48c19bf33ep-695, 0.0,
     0.0, 0x1.40a43e018079p-205, 0x1.dedf12d35555p-727, 0.0, 0x1.7dedccb5810e9p-615,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aab6baa145132p-1007, 0x1.1460f46586216p-480,
     0.0, 0x1.8f4485cf7cc9cp-583, 0x1.4f415209b0516p-524, 0.0, 0.0, 0.0,
     0x1.15088964f2726p-1011, 0.0, 0x1.71e3a4bd6f985p-772, 0x1.d6bd285c658p-626,
     0x1.3cbd1dec29c93p-259, 0.0, 0.0, 0x1.626f35dbabd5ap-635, 0x1.c331192b5382cp-929,
     0.0, 0x1.ad85ffe8a9a27p-736, 0x1.7b2abcadcd811p-259, 0x1.bc5b5ae22b67p-725, 0.0,
     0x1.ecef346f9faecp-722, 0.0, 0x1.86204ad7a4a9dp-131, 0x1.1abd647fc9745p-558,
     0x1.59b01ffed0471p-229, 0x1.9ea9d467d7ca7p-1012, 0x1.8c0f673e7c819p-1002,
     0x1.1aff7e6a6c632p-757, 0x1.d6ab861cc034ap-227, 0x1.efc22b4746abbp-468,
     0x1.4d61d1298911cp-654, 0x1.07c8962717981p-600, 0x1.997a824684e7dp-51,
     0x1.957b5ce62ea7cp-575, 0.0, 0.0, 0.0, 0x1.270cc9e2c321ap-158,
     0x1.a3325440b1faap-971, 0.0, 0.0, 0.0, 0x1.b610727f06568p-1015,
     0x1.07e9bc22d4ed4p-452, 0.0, 0.0, 0.0, 0x1.27214e09a9bb4p-594, 0.0,
     0x1.596801b610b9bp-761, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1455dd04dd62p-621,
     0x1.b2a5b3451ac29p-751, 0x1.e1183539e7621p-298, 0x1.2a564a2def072p-288,
     0x1.d3f0a7584bbc1p-283, 0x1.6e0a05b6f38d2p-51, 0x1.9a60a95df4d4bp-685,
     0x1.4fe6b6e5c736p-231, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95cc2fb47585fp-1018,
     0x1.8ddda4aa7ecbp-579, 0x1.6d8732bd4a7b3p-210, 0x1.dd5303f84504fp-414, 0.0,
     0x1.95a76fca53b71p-516, 0.0, 0.0, 0x1.e6338984f2013p-396, 0.0,
     0x1.5bc7b02fbff4fp-465, 0x1.53fb0c289ef9fp-210, 0.0, 0x1.7dcd54a6b6f09p-533,
     0x1.a933904decc27p-625, 0x1.5670859f20555p-423, 0.0, 0x1.85de27ec2a10dp-822, 0.0,
     0.0, 0.0, 0.0, 0x1.46e43c286a80cp-996, 0.0, 0.0, 0.0, 0.0,
     0x1.334252678add5p-740, 0x1.22d7292017a47p-132, 0.0, 0.0, 0.0, 0.0,
     0x1.807e6afc9182ep-894, 0x1.225737be9a235p-545, 0.0, 0x1.3195c79b0fea9p-247, 0.0,
     0x1.54823b1cce235p-440, 0x1.bf21c4ac49ae3p-98, 0.0, 0x1.2519b496b94fcp-921,
     0x1.7e718aa8ebdp-753, 0.0, 0.0, 0.0, 0.0, 0x1.c84fcd4722f9fp-987, 0.0, 0.0, 0.0,
     0x1.b14ade15c67f9p-85, 0x1.ebf5512c8ebc8p-358, 0.0, 0.0, 0x1.df7d047ead981p-545,
     0x1.aff75525e4a79p-983, 0.0, 0x1.bde26a2153768p-31, 0.0, 0.0,
     0x1.3fc74ebc0a612p-343, 0.0, 0x1.0fa1dbd640996p-631, 0x1.53f2ee9ac5b63p-300, 0.0,
     0x1.d88933a719fd5p-616, 0x1.c11d601abe37p-254, 0.0, 0x1.423d3258d716ep-171,
     0x1.b5f82f175cda4p-625, 0x1.d147619e0ef49p-644, 0x1.26a1a41cb3a35p-916,
     0x1.dd0ca510e1ca1p-158, 0x1.e147df565fc6p-371, 0.0, 0.0, 0x1.e9beeb4c53de3p-750,
     0.0, 0.0, 0x1.ba0f237307464p-830, 0x1.f9b516f110b3bp-202, 0x1.9b82d95f54482p-548,
     0x1.6f676933accc3p-257, 0.0, 0x1.48596c7aa603ap-337, 0.0, 0x1.9633eff23a259p-945,
     0x1.15edc6765e8acp-1013, 0.0, 0x1.527f206c8beadp-24, 0.0, 0x1.135a4f6d59c6ep-111,
     0.0, 0.0, 0x1.345bd5dfdb5b7p-261, 0x1.525b33f93b191p-333, 0x1.adf8def091527p-341,
     0.0, 0.0, 0.0, 0x1.f9dae1a50fc77p-322, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9ba4c5ffca1fp-614, 0.0, 0.0, 0x1.cdd7d81bad71bp-972, 0.0,
     0x1.8a86ab80ff5b9p-473, 0x1.acaa3db321461p-868, 0x1.8eb803f12308ap-845, 0.0,
     0x1.bad0ee1fb1c1fp-192, 0x1.c3b457932449bp-159, 0x1.8d24ec08ec184p-635,
     0x1.7337a473ff52p-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9c566580c9dp-101,
     0x1.8190c78a33834p-295, 0.0, 0x1.ec0d1906d8b02p-988, 0x1.f616d221e6092p-758,
     0x1.c27b625b3f1cdp-649, 0x1.aac465d12750ep-265, 0.0, 0.0, 0.0,
     0x1.824cfc9f942cap-974, 0x1.83f79ef097aeap-913, 0x1.a4e3dd2a8bbf3p-876,
     0x1.66312801bd22fp-1009, 0x1.f537d465c79f2p-954, 0.0, 0x1.f8ce5be8e0f3cp-33, 0.0,
     0.0, 0x1.3de71f57c3d49p-37, 0.0, 0x1.1479fadc0958ep-984, 0.0,
     0x1.70dbaa2ce399ep-473, 0.0, 0.0, 0x1.b1c690fba9124p-40, 0.0,
     0x1.28d7d57ffe5c5p-872, 0x1.0db3e88411656p-12, 0x1.04ad5f74b6debp-647,
     0x1.d87b421e48ae7p-849, 0.0, 0x1.6a8f37e9063dcp-310, 0.0, 0.0,
     0x1.f7fc0e8d46dd8p-717, 0.0, 0x1.2e3316d324965p-794, 0x1.3ba7b6e854c2bp-608,
     0x1.ce53747e95769p-267, 0.0, 0x1.4e097983e57ddp-1021, 0.0,
     0x1.24263e4b717a7p-494, 0.0, 0x1.e7467c51fe6bdp-515, 0x1.5a0b8e36fcf36p-171, 0.0,
     0x1.119afd721bc21p-1015, 0x1.b8dab8ca86c79p-677, 0.0, 0.0, 0x1.330aec6aa461p-74,
     0.0, 0.0, 0x1.17e79318d548bp-792, 0x1.fc860571dab91p-687, 0x1.b2c608d5a1554p-427,
     0.0, 0x1.224a5ad328c4dp-696, 0.0, 0x1.ce5fa09eaaab5p-331, 0x1.6f5af8d27f5f9p-131,
     0x1.8ef00a4a19569p-530, 0x1.d564fc2529254p-749, 0.0, 0x1.13eff40e3e5aap-835,
     0x1.5d57afdefca02p-318, 0x1.e183220f999d3p-950, 0.0, 0.0, 0x1.2d37c635437dcp-366,
     0x1.b1f2cdd3e66d5p-205, 0x1.d42922f9b5d1ap-918, 0x1.7212b52c465e6p-616,
     0x1.241c919582b93p-32, 0.0, 0x1.3f06f9bd3c2b8p-897, 0x1.ed35adaf814dbp-124, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b38a4971f68p-334, 0x1.fc567fbbf6e57p-513,
     0x1.cd937da84a14bp-94, 0x1.a5d08baf3ef72p-19, 0.0, 0.0, 0.0,
     0x1.a5bb7851d795ap-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76321a5653968p-1010, 0.0,
     0.0, 0x1.b900a16e3bc23p-995, 0.0, 0x1.68a2008f00379p-692, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.29a5390f17ec5p-131, 0.0, 0.0, 0.0, 0.0, 0x1.59820cf2cb152p-237, 0.0,
     0.0, 0.0, 0x1.983546341d8b6p-1012, 0x1.b3ef9de469a45p-190, 0.0, 0.0,
     0x1.a667510246cefp-154, 0.0, 0.0, 0x1.702bf94120d87p-448, 0.0, 0.0,
     0x1.a901379837653p-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6bb506fe0a5c3p-237,
     0x1.9927660ca162fp-831, 0x1.8cb1206621a42p-47, 0x1.d90b1dc356adbp-714, 0.0, 0.0,
     0x1.2a5f85cfcddc1p-572, 0x1.d8babd8816c93p-990, 0x1.d64391644dacbp-350, 0.0, 0.0,
     0x1.76caff71d5047p-1020, 0x1.1064f69ea052cp-66, 0.0, 0.0, 0x1.86ccde9c0080cp-175,
     0.0, 0x1.7b228336f7f03p-495, 0x1.2fb908996378dp-507, 0.0, 0.0, 0.0, 0.0,
     0x1.1291986095e0ep-553, 0.0, 0x1.81ec79abb5a6bp-180, 0.0, 0.0, 0.0,
     0x1.bf6a02eb4ae58p-693, 0x1.2190b18d90445p-1022, 0x1.22f6e96dbc4ddp-136,
     0x1.24481ae9abacbp-473, 0x1.ebf6b06e72e6cp-526, 0x1.b97a5cc3be9ffp-579, 0.0,
     0x1.0644607967333p-974, 0x1.4eb55b4f0c303p-254, 0x1.f6542b354a866p-315,
     0x1.b2b2a7458516ep-515, 0x1.ce4f51c64845ep-415, 0.0, 0x1.5919b52a8a879p-910,
     0x1.929037d02c0eep-201, 0x1.f94d4e4240f8cp-458, 0.0, 0x1.3a427cfd2923fp-64,
     0x1.297c81f0e3341p-60, 0x1.1142fd25bfbebp-175, 0x1.9c5a80d147187p-175, 0.0, 0.0,
     0.0, 0x1.321d55ab87e93p-988, 0x1.823bb502f9d7ap-327, 0.0, 0.0,
     0x1.a8ca82c07fc75p-729, 0.0, 0.0, 0.0, 0x1.fb512d4f519ccp-523, 0.0, 0.0, 0.0,
     0.0, 0x1.b9a0823fcaedfp-150, 0.0, 0.0, 0.0, 0.0, 0x1.752582c0039c9p-117,
     0x1.2a4113cdde59bp-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25170b4935415p-192,
     0.0, 0.0, 0x1.9d19165e2fa41p-655, 0x1.bd837b808e4f3p-206, 0.0, 0.0,
     0x1.191a8e7cead7ap-890, 0.0, 0x1.f345f9df08059p-474, 0.0, 0.0,
     0x1.3d22c9d82d97dp-337, 0.0, 0x1.9d4d9cbb391dp-894, 0.0, 0x1.9056a475dbe02p-975,
     0x1.07268988e3d33p-83, 0x1.94cc894b719d8p-240, 0x1.128b3064cd01ep-342,
     0x1.6212a419e9ceep-342, 0.0, 0x1.dcac137e22527p-151, 0.0, 0x1.7f7f5db362106p-992,
     0.0, 0x1.5e18a82fcf7fbp-920, 0.0, 0.0, 0.0, 0x1.5817c24ef011dp-532, 0.0, 0.0,
     0x1.ffbe83cb58c61p-916, 0x1.3ecae0e09c13ep-754, 0x1.49a547466073ep-456, 0.0,
     0x1.e1678b4ca365bp-373, 0.0, 0x1.bdc5ccea40214p-113, 0x1.a12e79d8b8459p-486, 0.0,
     0x1.bce605e4efe5cp-523, 0.0, 0x1.db736e516da9fp-650, 0.0, 0x1.da38e0ef3fa7ep-758,
     0x1.3bbaedf58892fp-202, 0x1.813eeb20b28e9p-884, 0.0, 0.0, 0x1.902a40b4cdee6p-982,
     0.0, 0x1.3bb9b752b4df3p-819, 0.0, 0x1.a6cc3403ffc1ap-15, 0.0,
     0x1.1e539625a050ep-866, 0.0, 0x1.caff69bdf4bd2p-479, 0.0, 0x1.1a88d77e28308p-827,
     0.0, 0x1.c77b61c11eea2p-719, 0.0, 0x1.6db7035dc105fp-278, 0.0,
     0x1.7ee37562852f8p-540, 0.0, 0.0, 0x1.f5bb1b34a355fp-324, 0.0,
     0x1.0dc9c365103fep-691, 0x1.0bc3aebedac24p-1002, 0x1.b9f771d0b1f1ep-372,
     0x1.eefc2af8594bcp-827, 0x1.94d52f2b6811p-204, 0x1.58f1835c26ccfp-50,
     0x1.48ee58ef3a6a1p-318, 0x1.266ffaef2a7e5p-185, 0.0, 0.0, 0.0,
     0x1.989928656ba2p-408, 0.0, 0.0, 0x1.70f1d76df47cdp-510, 0x1.f13e3e328dedfp-15,
     0x1.03428e6c18d3ap-519, 0.0, 0x1.9d08e07541f13p-71, 0.0, 0x1.37a0b4378ef3p-692,
     0x1.77d6f10677e58p-456, 0.0, 0.0, 0x1.74f1acd13366cp-833, 0x1.286455f1eaa92p-427,
     0x1.3e824d31be6d4p-887, 0x1.130f7ca5973f2p-715, 0x1.2f9e5145667bcp-289,
     0x1.4124ab79b03f3p-273, 0.0, 0x1.aad538bd5fcdfp-125, 0x1.bd8d6799d4bacp-241, 0.0,
     0x1.ce8d687df4b4cp-955, 0.0, 0.0, 0x1.59dcd0d97d7a1p-396, 0x1.d72becc98d058p-929,
     0.0, 0x1.440e1f27ac6fcp-188, 0.0, 0.0, 0x1.9c1d9210f6343p-617,
     0x1.c2931ed8d6247p-456, 0.0, 0x1.0c8aca63bd674p-559, 0.0, 0.0, 0.0, 0.0,
     0x1.12a149ddf3a61p-454, 0x1.d5275254dca3p-659, 0.0, 0.0, 0.0, 0.0,
     0x1.e87d50c7fed0dp-171, 0x1.940d28860168ep-10, 0.0, 0x1.5d7d7ead24854p-786,
     0x1.1b12ad54cd863p-385, 0x1.4672ca126c228p-695, 0x1.0e2c60897c1a1p-325,
     0x1.9a581e6c9e77p-424, 0.0, 0.0, 0x1.d87b071b15f77p-288, 0x1.82d55733e5298p-457,
     0x1.7a470b4f0a4bfp-62, 0.0, 0.0, 0x1.43867e5d329cap-633, 0.0,
     0x1.2a128da81cd0ap-168, 0x1.05b1f11eea7efp-757, 0x1.c9901fe7ae45ep-797,
     0x1.6de98bd926893p-855, 0.0, 0x1.a876ab1cd0445p-648, 0.0, 0x1.61f23b0e146ep-90,
     0x1.896f215f9491cp-569, 0x1.8b551cf181f08p-688, 0.0, 0.0, 0.0, 0.0,
     0x1.63acc22a1e787p-777, 0x1.8749fdae6a3c2p-825, 0.0, 0x1.a6acbc5d4af53p-922, 0.0,
     0.0, 0x1.7645ecb6b6f53p-367, 0.0, 0.0, 0.0, 0.0, 0x1.94f8c5591b30dp-923, 0.0,
     0.0, 0.0, 0x1.bbf9c28830255p-277, 0.0, 0.0, 0x1.3ed654e86df7ep-241,
     0x1.4a3bd13376db1p-62, 0x1.322f5e75773d9p-537, 0x1.0461c83c69726p-891,
     0x1.2740f46a44dd3p-538, 0x1.a9f5cf82914f9p-396, 0x1.077aca6efada6p-978,
     0x1.f427105a06371p-249, 0.0, 0x1.1c6c98c47b2c7p-959
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
            tmp1 = Sleef_finz_tgammad2_u10kvx(tmp0);
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
    printf("Sleef_finz_tgammad2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tgammad2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
