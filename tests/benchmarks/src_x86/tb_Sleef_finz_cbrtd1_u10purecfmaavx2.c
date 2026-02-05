/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd1_u10purecfma.c --function \
 *     Sleef_finz_cbrtd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.9e2aa59b29092p-365, 0.0, 0x1.3198db75ff0a8p-169, 0.0, 0.0,
     0x1.8baa121055dd3p-956, 0x1.f0606437c8e98p-854, 0x1.a350723943b97p-731, 0.0,
     0x1.146089d10b0bap-1002, 0x1.397728719ab67p-302, 0x1.a28fb7efa880ap-686,
     0x1.eef3327210dbfp-276, 0x1.c4309b4a1ba0ep-711, 0.0, 0.0, 0.0, 0.0,
     0x1.36fa87996ec67p-56, 0x1.d742efab53c79p-647, 0x1.eba279c5825aap-54,
     0x1.e8ebae46af085p-752, 0.0, 0x1.38aee3f6c100bp-257, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1721b9d63a01cp-444, 0.0, 0.0, 0x1.4be8c4830caffp-481, 0x1.e53c1e27d2c1ap-863,
     0.0, 0x1.a2131dbaa1bafp-757, 0.0, 0x1.301f56783f96ap-210, 0x1.0992ed02c0decp-180,
     0x1.0f4bf680e793ap-382, 0x1.90a65089cb419p-50, 0x1.e2e7a873ce307p-937,
     0x1.9df56f9767a36p-525, 0.0, 0x1.9dadeda14a42fp-261, 0.0, 0x1.5c356f260898ep-6,
     0x1.b1c0688833c32p-498, 0x1.da074fef092bp-623, 0x1.c315575a5639p-718,
     0x1.e2b303773912fp-741, 0.0, 0.0, 0x1.8c23b42350a76p-623, 0x1.7a4ff996be193p-719,
     0.0, 0x1.64fd3cdbb9a65p-715, 0.0, 0.0, 0.0, 0.0, 0x1.6774852cd86e5p-561, 0.0,
     0.0, 0.0, 0x1.3508fdc819b75p-887, 0.0, 0.0, 0.0, 0x1.24c5e410827f9p-11,
     0x1.b9598a9704e74p-188, 0x1.3de22b56bb9a1p-701, 0x1.701b6261bf35bp-857, 0.0,
     0x1.700085680fd68p-611, 0.0, 0.0, 0x1.7d2b3bec1407fp-952, 0.0, 0.0,
     0x1.c9ae869cac50bp-92, 0x1.11cf636a9e7e9p-454, 0x1.3e01aec2fee65p-999,
     0x1.c9c46b5297d3ep-231, 0.0, 0.0, 0x1.a4ce5c203ddfcp-635, 0.0,
     0x1.a68bfe45f55ccp-441, 0.0, 0x1.be76fe3063a81p-380, 0.0, 0x1.ea1c336cd7892p-695,
     0x1.68e5f189ad93cp-959, 0x1.41013183ed38p-712, 0.0, 0x1.d6f0bc1ee9a8bp-237,
     0x1.9fc552bd0696bp-1011, 0.0, 0.0, 0.0, 0x1.dcf45dfea047fp-681, 0.0,
     0x1.3bf5491f9e0cep-144, 0.0, 0x1.1e83458232cf4p-911, 0x1.5a8aafd48a0a4p-259,
     0x1.3632b634a99ep-67, 0x1.29387f066f4f6p-952, 0x1.93a55d26d1d38p-144,
     0x1.5d91328603d2ap-648, 0x1.44a17bc6b23cp-754, 0.0, 0x1.4029c5193bbp-50, 0.0,
     0.0, 0x1.87415c03da5abp-426, 0x1.856c56854899dp-601, 0.0, 0.0,
     0x1.028f31e185f66p-765, 0x1.f8f9e98947df2p-448, 0.0, 0.0, 0x1.548a1ff99ba1bp-189,
     0.0, 0x1.30cd2d3cd5ea4p-502, 0.0, 0x1.b72c5cd5d28aap-259, 0x1.a68027cdfc2d6p-46,
     0x1.7df5cf8ab0972p-840, 0x1.c3ddfd38aa933p-452, 0.0, 0.0, 0x1.96ac78be7c707p-465,
     0.0, 0x1.d43ec55a46f88p-404, 0x1.97e0e00c70a05p-116, 0.0, 0.0, 0.0, 0.0,
     0x1.52d8ea08c4f62p-1014, 0x1.754c845f45a9dp-224, 0x1.4484a8088767ep-857,
     0x1.0bb4deb263f74p-271, 0.0, 0.0, 0.0, 0x1.bc194651355a2p-418, 0.0, 0.0, 0.0,
     0x1.5106e525e1f6bp-929, 0.0, 0x1.97e0f868291dap-314, 0.0, 0x1.6fe2581565362p-955,
     0x1.c24fc68ea1006p-594, 0x1.98344861e010bp-667, 0x1.e502156c8a092p-815, 0.0,
     0x1.4daf80c64928p-193, 0.0, 0.0, 0.0, 0x1.3faf7dabf78edp-10,
     0x1.e87b12dfc06bp-473, 0x1.4dcbe8c11e6c9p-728, 0.0, 0x1.bac4afd87632ap-69, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5da10fb34c3a5p-803, 0.0, 0.0, 0.0,
     0x1.73b570cc0e448p-314, 0.0, 0x1.9e954715b66fdp-993, 0.0, 0x1.3c72de55072f8p-943,
     0x1.24c3aa1ab7ba2p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9319727f6e349p-229, 0x1.28ce5ae4a7f69p-604, 0x1.735d88a287953p-979, 0.0,
     0x1.6476247ee2707p-295, 0x1.e8c8f0d289eep-584, 0.0, 0.0, 0x1.01ef68700f976p-751,
     0.0, 0.0, 0.0, 0x1.f21ef3ca630bfp-389, 0.0, 0.0, 0.0, 0x1.683b02356f095p-391,
     0.0, 0.0, 0.0, 0x1.99fb47dd64dd5p-402, 0.0, 0.0, 0.0, 0.0,
     0x1.1ec83a52426a7p-280, 0.0, 0x1.04598486e72ep-500, 0.0, 0x1.e568ffd7a578cp-388,
     0.0, 0.0, 0x1.7afbdcd5ef048p-482, 0.0, 0x1.32a981473f48p-15,
     0x1.06abef23014cep-340, 0x1.94c0d7dcf5488p-68, 0.0, 0.0, 0x1.fbfede7407c6ep-691,
     0x1.fcdb4eaeaaea5p-719, 0x1.0de7bc8a88e25p-61, 0x1.921eb3c516e91p-398,
     0x1.efe4457c1400bp-80, 0x1.b4ab29fdab2bp-585, 0x1.153fcaa32babp-806,
     0x1.57cddb190212dp-720, 0.0, 0x1.36b6759411818p-983, 0.0, 0.0,
     0x1.27e46ea4e6dc1p-841, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a84b17c94bd44p-681, 0.0,
     0.0, 0x1.f6a77e1feed3dp-320, 0x1.1671ce7f679cdp-71, 0x1.7cedc2131e52cp-402,
     0x1.1e0beb5c2706ap-404, 0.0, 0x1.0883c378a2639p-101, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6084596bfcdf6p-89, 0x1.9efbd6304fc8fp-995, 0x1.b953ce7193887p-489, 0.0,
     0x1.9cb20eab93c2dp-712, 0.0, 0.0, 0.0, 0x1.dd03137ba7ff2p-945,
     0x1.8a5ad0f762451p-636, 0x1.94f2e1c6560bcp-795, 0.0, 0.0, 0x1.89253fb9c2467p-535,
     0.0, 0x1.45373b3ed1d81p-394, 0x1.191af3090aa59p-673, 0.0, 0.0,
     0x1.53aa159fd5cc4p-686, 0x1.62613e307d5dbp-853, 0.0, 0x1.5fbe82b4c6a1fp-772,
     0x1.3c8047cf1b693p-135, 0.0, 0.0, 0x1.dad71dae5f1b2p-200, 0x1.55b0a543d49ebp-595,
     0x1.79c1322c1b9cep-161, 0.0, 0x1.d6f02461c3a17p-454, 0x1.2aa7817c3b81cp-549,
     0x1.1bb01ea7b9903p-678, 0.0, 0x1.638d9b5d965a8p-742, 0x1.8996e91e23f8ap-787, 0.0,
     0.0, 0x1.de20bfd6df08dp-622, 0x1.3ce2b32c39dap-727, 0x1.7a16764138004p-676,
     0x1.b05439ff64345p-12, 0x1.c52e657d076b7p-936, 0.0, 0x1.08299c7d9f0ddp-381, 0.0,
     0x1.72f0b7cb91645p-622, 0x1.6e247ce2375bep-542, 0x1.a3d0a6de82625p-728,
     0x1.428aa86dc99ccp-752, 0.0, 0.0, 0.0, 0x1.a64fbe96d23f5p-995,
     0x1.78b8495f08d32p-894, 0.0, 0x1.707ac1ea1d363p-957, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e1874dda4c11ap-991, 0.0, 0.0, 0x1.c7ed5cfdfe8acp-465,
     0x1.3b5e8c08d84a3p-463, 0x1.d12adfe852938p-127, 0x1.1c12a882efd6p-844, 0.0,
     0x1.ecc5ae52f3107p-249, 0.0, 0.0, 0x1.f5fb344059967p-77, 0x1.ecbff7174a3dep-206,
     0x1.dc1e4e31cbcc9p-960, 0.0, 0x1.c0ae325295371p-526, 0.0, 0x1.a583bbc08f2fp-574,
     0x1.684875bb9af73p-827, 0.0, 0x1.afda66b9e4783p-466, 0x1.0b96603c5568ep-855,
     0x1.1037f4a14d047p-27, 0x1.a3ebdc81643d5p-844, 0.0, 0x1.bfeb562afeb7fp-467,
     0x1.d4bc02d85ac3fp-975, 0x1.1d929749b54e3p-832, 0x1.be3065dccae45p-309, 0.0, 0.0,
     0.0, 0x1.16f89f95adcc4p-959, 0x1.5fac28fb4c907p-384, 0.0, 0x1.3f50e7fed5085p-558,
     0.0, 0x1.060c348f549efp-590, 0.0, 0x1.c1ee62e915814p-566, 0.0, 0.0,
     0x1.3f627b5f96585p-809, 0x1.ea90a3a9a6c1fp-198, 0x1.cdec9047c2de6p-36, 0.0, 0.0,
     0x1.ea30e63868334p-225, 0.0, 0x1.5f91d59f74373p-923, 0x1.718c6c966cda4p-207,
     0x1.758509ecd725fp-866, 0x1.5dfbe27f17278p-424, 0.0, 0x1.aa25ef864f7f4p-819, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9731f2f45e7ccp-502, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.364dd2b8cd88ap-1016, 0x1.eb22177309b87p-974,
     0x1.3b18725aaff14p-973, 0x1.c6ebc5b0a42cdp-58, 0.0, 0x1.c313096ed461cp-805,
     0x1.96a7e293eab72p-337, 0.0, 0x1.0f043167b6f42p-273, 0x1.f1039f10f6ecbp-718,
     0x1.bce497bf11613p-868, 0x1.b6250ebf7edep-368, 0.0, 0x1.4e3f1f92ba44p-317,
     0x1.9000c197fc1fdp-266, 0x1.e30c96bb68f0cp-207, 0x1.750e8fad036c3p-54, 0.0, 0.0,
     0x1.8247b3a2374a4p-719, 0x1.2b3e7d1fd710dp-207, 0x1.aaf695c2249adp-901,
     0x1.d855b34394e85p-407, 0x1.b9a9d8059cbp-830, 0x1.d1540f0b2485ep-244, 0.0,
     0x1.1c3b263619934p-93, 0x1.e4d21ff53f931p-167, 0.0, 0x1.9f75ce47a3eb6p-769,
     0x1.433d0ea3f36c7p-307, 0x1.bfb42216a4189p-398, 0.0, 0x1.860816c70e933p-191,
     0x1.ceac8826ff629p-666, 0x1.1fa6b20dae9f3p-834, 0x1.a5a560c5351c6p-306, 0.0,
     0x1.21b8b4ba352ddp-223, 0x1.95a49e22aca97p-175, 0.0, 0.0, 0.0,
     0x1.af0f1d082c20ap-357, 0x1.b8073ed7c43f5p-258, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dbcadd490e9acp-959, 0x1.0a6d933abe18bp-538, 0.0, 0x1.96f492f7b7666p-353,
     0x1.8597d0c9b19p-383, 0.0, 0.0, 0.0, 0x1.855f37181d0dbp-1006, 0.0, 0.0,
     0x1.88f2078e8fcb9p-727, 0x1.7042ae7dd74d5p-867, 0x1.1e64f8a8bddefp-765, 0.0, 0.0,
     0x1.2ff7ae978f935p-40, 0x1.0f4676cb3285p-772, 0.0, 0x1.a4d65e865c1aap-1021,
     0x1.17c850b274debp-917, 0.0, 0.0, 0.0, 0x1.f9694aaf586a4p-989,
     0x1.559e4da20755ap-854, 0x1.7f131b746a975p-545, 0x1.f6affa6abce51p-778, 0.0,
     0x1.af0e97409d4bep-163, 0.0, 0.0, 0x1.6d51c6158b5b1p-157, 0x1.32017b4d7efddp-38,
     0.0, 0.0, 0.0, 0x1.fc31472b3f5bdp-618, 0.0, 0x1.cd1955b85087p-936, 0.0,
     0x1.87e6355bd184cp-172, 0x1.1ee8bd601e792p-85, 0x1.dc5a0c35f8de8p-596, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.22e2db96e1cedp-703, 0.0, 0.0, 0x1.5ebdaf2a6de89p-609, 0.0,
     0.0, 0x1.7e5640a219a3bp-746, 0.0, 0x1.fcc06317b3df3p-200, 0x1.83d0e3ff5f9adp-257,
     0x1.319178f08e0bfp-226, 0.0, 0.0, 0x1.70d46ed49bb03p-844, 0x1.e395bd7010e1bp-474,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1860cf4c30662p-26, 0x1.cbe0efcc2b7c9p-712,
     0x1.9f044a02d76e9p-143, 0x1.6cb4b54b565p-773, 0.0, 0.0, 0.0,
     0x1.f7a106773f326p-895, 0x1.5b71da6b04b13p-917, 0x1.e57772c8253c5p-901,
     0x1.8aa9a0e3968d5p-836, 0x1.cb74c89ee3319p-976, 0.0, 0.0, 0x1.adad6ddb2fc8bp-495,
     0.0, 0x1.4c8a7dd701edp-564, 0.0, 0x1.a991466fbe44fp-249, 0x1.64420fe758a9ep-515,
     0x1.810c2a33b3722p-5, 0x1.c6d3940c3c497p-186, 0.0, 0.0, 0x1.72d454725936ap-133,
     0.0, 0x1.700c95ff2b77ap-90, 0x1.98bcd8cdf7044p-163, 0.0, 0x1.a8d04b63a806bp-6,
     0.0, 0.0, 0x1.083d413080922p-728, 0.0, 0.0, 0x1.0af27e557fbc4p-426, 0.0,
     0x1.bcabb793af065p-865, 0.0, 0.0, 0x1.371ff197f1f3cp-909, 0x1.a7946d1a1ad07p-599,
     0x1.4f7d2c3122ce4p-699, 0x1.a1fae829dd5efp-151, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.140031bf52c9ap-37, 0x1.0781897bdfaaep-254, 0.0, 0.0, 0x1.b45b30d9ab89bp-450,
     0.0, 0.0, 0.0, 0x1.2fa7be723c82cp-810, 0x1.836c71f515111p-36,
     0x1.aff595a793568p-741, 0x1.54504528f1d9ep-565, 0.0, 0x1.ba629748ba1bp-203,
     0x1.817c6fa883441p-688, 0x1.92c54bc3c4e1p-851, 0.0, 0.0, 0x1.adc162c4a00dfp-144,
     0x1.32883d9950b59p-691, 0x1.681dc28e4f28dp-434, 0x1.54a940d4472abp-925, 0.0,
     0x1.85ce483eeaa74p-109, 0x1.4f10b96f29e65p-338, 0x1.ea84f1468f9e3p-311,
     0x1.aa76ba5fb50f1p-448, 0x1.6bf9895b811a4p-682, 0.0, 0.0, 0x1.fcea57a3462b9p-647,
     0.0, 0.0, 0x1.6b98ea84e18e8p-40, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a55362ef6d5a6p-217,
     0.0, 0.0, 0x1.19cbd5d5e9e7bp-47, 0.0, 0.0, 0x1.4dfd91d642f45p-1006,
     0x1.04c70636d6109p-904, 0x1.1d0514ff19275p-752, 0x1.74b4bfbff22c8p-329, 0.0, 0.0,
     0.0, 0x1.f2a1a832dc90dp-247, 0x1.aa036f28d3c36p-600, 0x1.269d35c82ca1ep-955, 0.0,
     0.0, 0.0, 0.0, 0x1.0b5585a220d2p-680, 0x1.dfee55f6cfd81p-808, 0.0,
     0x1.131e27488766ap-352, 0x1.41fa0ea26e90ep-34, 0.0, 0.0, 0.0,
     0x1.6f687a12fca8fp-876, 0.0, 0x1.95467dec0307cp-105, 0x1.69914a2d18d1dp-740, 0.0,
     0x1.13ac5bb968a0fp-951, 0.0, 0x1.2ed2b81a67c7ep-736, 0.0, 0x1.f41e7ae00dca5p-456,
     0x1.7c7283c964723p-215, 0.0, 0.0, 0x1.6b865a4c87c32p-184, 0x1.ee591410e99dep-26,
     0.0, 0x1.4366d3eaac215p-687, 0.0, 0x1.3b12450ae2eeap-351, 0x1.d92ad8524fc45p-13,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a30fe27e6e478p-566, 0.0, 0x1.a4d575e736b09p-115,
     0.0, 0x1.816aa515f56c3p-379, 0x1.0bccd83b6ef72p-215, 0x1.08d4a044b84d7p-942,
     0x1.6e5fb25ed4d32p-846, 0.0, 0.0, 0.0, 0x1.26a4aa8aacec8p-262,
     0x1.7bc8b332fbe78p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e875410485fc9p-1012, 0x1.461c25d7bec04p-37, 0.0, 0.0, 0x1.0e7fba7c3df72p-890,
     0.0, 0x1.2493832cc64b2p-694, 0x1.277968a94390ap-44, 0x1.c4977bf2f46dp-622,
     0x1.ab7364e3c9d9ep-617, 0.0, 0.0, 0.0, 0.0, 0x1.80e400e18329p-112, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.608407160a715p-717, 0x1.8606181bce46ep-411,
     0x1.6aaad5416583bp-196, 0x1.9eca0fc9efap-954, 0x1.d1b9c75b1c36ep-163,
     0x1.907df230c256cp-878, 0x1.f318a942d011p-109, 0x1.48206989bfc92p-839, 0.0,
     0x1.e6e8e2a4ec44cp-598, 0x1.9bed96c767265p-672, 0.0, 0.0, 0x1.ddeacfeef11f9p-160,
     0.0, 0x1.1218933b34bd3p-380, 0.0, 0.0, 0x1.eb6218f31a3a1p-64,
     0x1.97fc3ffc93e0dp-190, 0x1.0557672b521c8p-470, 0.0, 0x1.0555b983de0a4p-183,
     0x1.96e6eb3475e2dp-301, 0.0, 0x1.015ed70493321p-154, 0x1.80892d90bb125p-1021,
     0.0, 0.0, 0x1.37b578c358e6fp-964, 0.0, 0.0, 0.0, 0x1.045a61b8fb332p-614, 0.0,
     0.0, 0x1.44f524c5a6295p-494, 0x1.9050cff28c8dfp-761, 0.0, 0x1.f75c476e2383cp-144,
     0.0, 0.0, 0.0, 0x1.d423e4f6e96d6p-237, 0.0, 0.0, 0x1.4bb6cfee73773p-216, 0.0,
     0x1.599217e4f9f2bp-294, 0.0, 0.0, 0x1.24a8ef5f7c964p-629, 0.0,
     0x1.4d12a98198fb2p-119, 0x1.de1b2bffcf1f2p-17, 0.0, 0x1.e083cd171f9dfp-239,
     0x1.e5abb013a676ap-810, 0x1.f6ed7737e20b9p-930, 0x1.412673995da71p-923, 0.0,
     0x1.b16cf9cf65717p-667, 0x1.e5bdefa98108bp-603, 0x1.31af29d09fe2fp-514, 0.0, 0.0,
     0x1.1401709d13e5dp-186, 0x1.fd6800f66f308p-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.129d950fc19e7p-10, 0.0, 0.0, 0x1.fce11bf045d95p-886, 0.0, 0.0,
     0x1.a5d802cdd6dadp-730, 0.0, 0x1.5ca1ce05cbd9cp-283, 0x1.f49dcbba27e5dp-192,
     0x1.150b31255235bp-636, 0.0, 0.0, 0.0, 0.0, 0x1.8b48ce76db73ap-282,
     0x1.d33eafd6c8dc2p-393, 0x1.383b0a0297c35p-871, 0.0, 0x1.8281ebe7432ebp-111,
     0x1.2cd0359df5b8bp-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a35c9c867c045p-609, 0x1.46f6a98318a3fp-762, 0x1.01e91633b188dp-6,
     0x1.9e84046c4c122p-113, 0.0, 0x1.63f07aa32974bp-594, 0.0, 0.0,
     0x1.939e517959a4dp-31, 0x1.176bb67e75005p-208, 0.0, 0x1.6d380465d463dp-975,
     0x1.28297e245519ep-396, 0x1.63b618d8245e6p-62, 0x1.896a5a65499eep-820,
     0x1.a6678bd57f9f2p-135, 0x1.8ee519b6ac2f8p-647, 0x1.762e812c8821dp-155, 0.0, 0.0,
     0.0, 0x1.c5d3f998f3aa9p-530, 0x1.3ed6fd0bcc4abp-557, 0.0, 0x1.567e2b8af6498p-450,
     0.0, 0.0, 0x1.755586bec4128p-14, 0.0, 0x1.5d22a9669118ap-540, 0.0,
     0x1.26ddfa7bab234p-847, 0.0, 0x1.1a4d7721b76edp-836, 0.0, 0.0,
     0x1.323a96f261cfdp-368, 0.0, 0.0, 0x1.b3660ea1fed9p-420, 0x1.0c16c184e6454p-183,
     0.0, 0x1.7857f3fe81d6p-667, 0.0, 0x1.26bdcb469cf81p-863, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1320b4db023cap-88, 0.0, 0x1.e89d7c01486f2p-663, 0.0,
     0x1.f3b77467c97f9p-1019, 0.0, 0x1.a9f88c6f6c57fp-318, 0.0,
     0x1.0c7800b8457cfp-314, 0.0, 0.0, 0.0, 0x1.21c31dae738f3p-935,
     0x1.85863acbe2cd4p-329, 0.0, 0.0, 0x1.078f611837716p-91, 0.0,
     0x1.ff36adfecede9p-285, 0x1.690b9c640bcf1p-126, 0.0, 0x1.deac9b57158f8p-280,
     0x1.eb1ecd5381468p-534, 0x1.f730462342288p-289, 0.0, 0x1.786df55a37635p-681, 0.0,
     0x1.b7c61c8007c83p-575, 0x1.103945ce87529p-524, 0x1.e094b53323cddp-123, 0.0,
     0x1.040a27763a5c7p-596, 0.0, 0.0, 0x1.61272a37cc83ap-142, 0x1.4bd80450ee11dp-152,
     0.0, 0.0, 0.0, 0x1.2d7853db7745p-465, 0.0, 0.0, 0x1.fbb2d270954d9p-59, 0.0, 0.0,
     0x1.1dbb6624134ecp-917, 0x1.de92f03f21c55p-477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b410d1ee169ap-1012, 0.0, 0.0, 0x1.e49ebfb345bfp-381, 0.0,
     0x1.cebc38e1e0598p-1013, 0.0, 0x1.2c3deb2b8aa83p-232, 0.0, 0.0, 0.0,
     0x1.9a67e56ec98dbp-696, 0.0, 0.0, 0.0, 0x1.35ccec888513cp-791,
     0x1.b6363eab62248p-343, 0.0, 0x1.4a49b6ad2a0d2p-1002, 0.0,
     0x1.dd0bb1edadd66p-549, 0.0, 0x1.50c898f150c12p-548, 0.0,
     0x1.83a4b2c94acf2p-1012, 0.0, 0x1.40441cd92f24bp-940, 0.0, 0x1.4433e155a103ap-15,
     0.0, 0.0, 0x1.fdf05da304a7ep-252, 0.0, 0x1p0, 0x1.8c5f5221c94dcp-949,
     0x1.418604aab7ccp-757, 0x1.103f3e8af9448p-551, 0.0, 0x1.99fa33138cc6p-276,
     0x1.450e8b72d56f3p-350, 0x1.b1bf86ba06801p-485, 0.0, 0x1.a09cf47bba2afp-602, 0.0,
     0x1.a777b3560398dp-628, 0x1.b8bce8dcdbbe2p-37, 0x1.bb6eee8157f1cp-827, 0.0,
     0x1.257dba8d06b34p-694, 0x1.32afefb5d8d5dp-173, 0.0, 0x1.ac11696932fdep-263,
     0x1.6fa0fb72301b9p-555, 0x1.55509f0c64938p-841, 0x1.f4ab0ddc0f97bp-485,
     0x1.0d345cf173938p-49, 0.0, 0.0, 0x1.8aadd6936e319p-376, 0x1.404363741b7bep-38,
     0x1.21f5d5f04ecd2p-758, 0x1.f058fb2cfe6dfp-306, 0x1.8d375f12b5143p-918, 0.0,
     0x1.16d0e619d0cb6p-357, 0.0, 0x1.bb9688d6e5174p-60, 0.0, 0.0, 0.0,
     0x1.77fd8eafd3842p-969, 0.0, 0x1.1a8866120a8e2p-450, 0.0, 0.0, 0.0,
     0x1.5bde0ac31edeap-719, 0x1.0056239c7a0ffp-665, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e7308109172a1p-564, 0.0, 0.0, 0.0, 0x1.2bc901b7c4345p-339
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_cbrtd1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_cbrtd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd1_u10purecfma bench acc %la\n", global_bench_acc);
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
