/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1d4_u10kvx.c --function \
 *     Sleef_finz_expm1d4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.02a512b362c7ep-547, 0.0, 0.0, 0.0, 0x1.47a9bca50ff97p-604,
     0x1.ac665b3f714cbp-349, 0.0, 0x1.edc91c4600da8p-257, 0.0, 0x1.54ac8d977a39ep-368,
     0x1.f07b3195a89dp-669, 0.0, 0.0, 0x1.fde86f16e3abep-297, 0.0,
     0x1.96781f0430245p-967, 0.0, 0.0, 0x1.79323234ec7cdp-229, 0x1.c3ba9ec27f5fep-997,
     0.0, 0x1.3932f94b4fdbdp-103, 0x1.8c23735839a37p-938, 0.0, 0.0, 0.0,
     0x1.53ac3009cbc6ep-324, 0x1.2b3cda39bc618p-355, 0.0, 0.0,
     0x1.7eebeac39e1dap-1008, 0x1.7c0e0732b46c2p-879, 0x1.7469d00cd8a2p-4,
     0x1.ddb926e633922p-789, 0x1.d728303e908c5p-406, 0.0, 0x1.67bd1fa3e497dp-567,
     0x1.769cf2e7cb5b1p-294, 0x1.99c74cf0702f2p-324, 0.0, 0.0, 0x1.38bb0675d5472p-81,
     0x1.bddc61866b3ebp-172, 0.0, 0x1.632587fe98039p-807, 0.0, 0.0, 0.0,
     0x1.b0fa4d3eff347p-261, 0.0, 0.0, 0.0, 0x1.763091659e77p-650,
     0x1.0c24da4ca087dp-735, 0x1.cda41fb707496p-777, 0x1.b3c91e8d6adf4p-145, 0.0, 0.0,
     0x1.3edf523d7c5e8p-497, 0x1.b62639665aaabp-703, 0.0, 0x1.3dc685986b0eap-994,
     0x1.e56fb98981606p-412, 0x1.0b2f4b82cd3d2p-56, 0x1.24c4f7fa4c6e4p-853, 0.0, 0.0,
     0x1.8508c4f24f13bp-489, 0x1.5c512f8016e8p-282, 0.0, 0x1.6e011c95f1723p-263,
     0x1.76d357b90ca1fp-713, 0x1.a5ac469514ac6p-486, 0x1.645ac7039ed7bp-655, 0.0, 0.0,
     0.0, 0.0, 0x1.d77d988d8718cp-691, 0x1.e5eb441181922p-437, 0.0, 0.0, 0.0,
     0x1.0d0ceb357f947p-764, 0x1.1cf910c61e81bp-825, 0.0, 0.0, 0x1.08702a2bc4584p-899,
     0.0, 0x1.f4127bec93adp-65, 0.0, 0x1.e2422ef31937ap-288, 0x1.05149960aad2bp-570,
     0x1.aff5c23dab085p-971, 0x1.5e3dbc2b6f761p-901, 0x1.a0520b4b43713p-171, 0.0, 0.0,
     0x1.44428bf0027b5p-499, 0x1.676e058eb8ef2p-366, 0.0, 0x1.3d6320e4ef576p-138,
     0x1.31825c9fed5bep-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e22d5eb55385p-858,
     0x1.dc6f24615da7fp-616, 0x1.1a21667c63bfep-475, 0.0, 0x1.c2144158890cap-885, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6dc9cc57702p-967, 0x1.40116342f159dp-154, 0.0,
     0x1.3a8abaec61959p-585, 0.0, 0.0, 0x1.d5f58fc5d8034p-594, 0x1.d8f17e585a15ep-422,
     0x1.5d9fbd2ecfc64p-77, 0.0, 0.0, 0.0, 0.0, 0x1.7a3d30bbbdaf7p-57, 0.0, 0.0, 0.0,
     0.0, 0x1.572b5e7ba678ap-860, 0x1.459e2feb8037p-422, 0x1.cb4b36984ba92p-810,
     0x1.f6d029ca8c8eap-273, 0x1.757b218433dedp-576, 0x1.16bdd60590f63p-45, 0.0, 0.0,
     0x1.5e66fb882508cp-421, 0x1.6614ad887ebadp-686, 0x1.6a2347f64cf6fp-81,
     0x1.47f98b27618acp-978, 0x1.8dbbd2979ae93p-556, 0x1.bdfb68f129655p-785, 0.0,
     0x1.ded458e18d0a3p-97, 0.0, 0x1.845eb8116204p-237, 0x1.3d9787e65bf9cp-923,
     0x1.6453043f92d1cp-548, 0.0, 0.0, 0.0, 0x1.eecb6da8512f1p-309, 0.0,
     0x1.85ecb2c886ee3p-734, 0x1.968bdb18ce6fdp-838, 0x1.f8a0e230265e7p-135, 0.0,
     0x1.0bfbd2d90b594p-747, 0x1.2678af5a53e06p-312, 0x1.15f27741b1d3fp-515,
     0x1.3b398cd5f706dp-449, 0.0, 0.0, 0x1.4abbbe282659cp-336, 0.0,
     0x1.ea51e1fae28e5p-387, 0.0, 0.0, 0x1.bbbd36117d3b9p-237, 0.0,
     0x1.c2c529ce13fa6p-480, 0.0, 0x1.d943243ecd9b6p-410, 0x1.ea90c4fb36cdap-489,
     0x1.3071691b7f3a3p-271, 0x1.0eb553ff10b75p-354, 0.0, 0x1.50447063d2bd1p-28,
     0x1.aff28c57317e2p-351, 0.0, 0.0, 0.0, 0.0, 0x1.fb73989ecd631p-958, 0.0, 0.0,
     0.0, 0x1.e77b083f220b2p-301, 0.0, 0x1.d4777090eaf6ap-336, 0.0,
     0x1.72f4f9380f6e9p-184, 0x1.0309559f6ef03p-1022, 0.0, 0x1.7f3bfad545b56p-981,
     0.0, 0.0, 0.0, 0x1.77ed97daeb68p-238, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97ca266eaed53p-624, 0.0, 0.0, 0x1.06a7d144f457dp-510, 0x1.199376a23770fp-847,
     0x1.ab5f5720c8f46p-188, 0.0, 0.0, 0x1.e17b8c7c16f22p-295, 0x1.9889649ef72c6p-575,
     0.0, 0x1.4b1e8e6c19fep-78, 0.0, 0x1.e8f3ac15e342ap-1007, 0x1.2efd55686cb64p-378,
     0x1.de9897eb700bbp-59, 0x1.4366b7a390d93p-207, 0.0, 0.0, 0x1.701a57a147095p-162,
     0x1.6ca38260028f5p-539, 0x1.0dd97a9c73cdcp-448, 0x1.5ce5ae36dfdedp-918, 0.0, 0.0,
     0.0, 0x1.33a3cbcce4123p-975, 0x1.87497a9208aa3p-613, 0.0, 0.0,
     0x1.8a03bd5e1d37p-77, 0.0, 0.0, 0.0, 0x1.bbb5adc46d7e1p-645, 0.0, 0.0,
     0x1.1ec502b1d097p-391, 0x1.a57052eb36b01p-845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f524f4eb5b5c9p-1012, 0.0, 0.0, 0.0, 0x1.00b619ee255a4p-757, 0.0, 0.0,
     0.0, 0x1.6cef6bb2a32acp-574, 0x1.95aa31038dc6cp-361, 0.0, 0x1.b0cff26d4ba3ep-366,
     0.0, 0.0, 0x1.ef6b87aef13d6p-458, 0.0, 0x1.83873e0cedf27p-403,
     0x1.12bcae0650427p-750, 0.0, 0x1.5e0e7d726af0dp-416, 0.0, 0.0,
     0x1.c726ce1f321a4p-330, 0.0, 0.0, 0.0, 0x1.9abef6799a86bp-746, 0.0,
     0x1.8b8a98bf3a8e8p-482, 0x1.57ab47a9f0cb2p-555, 0x1.4fa66510e0727p-861, 0.0,
     0x1.511cca444758bp-973, 0.0, 0.0, 0x1.d4d0cfd197ee7p-638, 0x1.131e825328634p-726,
     0.0, 0x1.df618b2c8d749p-510, 0x1.9271f9edad865p-648, 0x1.d621228998612p-790, 0.0,
     0.0, 0x1.6f48a88c864bcp-793, 0.0, 0x1.014249dbf98eap-362, 0.0, 0.0, 0.0,
     0x1.b4e9b963f0482p-667, 0.0, 0x1.faaa64d117b29p-1014, 0x1.5e45088108fcfp-468,
     0.0, 0.0, 0x1.dd210addaae2bp-147, 0x1.832845380f2b9p-25, 0.0, 0.0, 0.0,
     0x1.c7c390ccf1fa9p-674, 0x1.4f10bc195a0c8p-73, 0x1.5b41fb9bd22dp-463, 0.0, 0.0,
     0.0, 0x1.672d93fa7192ep-679, 0.0, 0x1.fb2f0265668c8p-409, 0x1.d64703e6527fep-256,
     0.0, 0x1.907a525c5831ep-439, 0x1.02b36bb43f28cp-328, 0.0, 0x1.1cd64afde664ep-659,
     0x1.a1a5653a38144p-356, 0x1.15cc3330c029dp-400, 0x1.193bc27728eaep-954, 0.0,
     0x1.e3584a325fc8ap-631, 0x1.98361597e8d16p-413, 0.0, 0.0, 0x1.28fce9cf19cdfp-362,
     0.0, 0x1.ac12ac9716723p-680, 0.0, 0x1.1abec366f278ap-198, 0.0,
     0x1.1a1b7a74049e2p-223, 0x1.b20255618e3d3p-293, 0x1.13e5c22d8a9e2p-427, 0.0,
     0x1.7953d6472daaep-789, 0.0, 0.0, 0.0, 0.0, 0x1.16b197e7a0d07p-334, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f567e3472cf41p-115, 0x1.b3e788557c072p-108, 0.0, 0.0,
     0x1.629fab702d6b5p-632, 0x1.bd7b5b187286fp-689, 0.0, 0.0, 0.0, 0.0,
     0x1.19ac5b5a33f5ap-749, 0.0, 0.0, 0.0, 0x1.07a90eb4ce66fp-848,
     0x1.7c281a468db1ep-852, 0.0, 0x1.9f40baea41a18p-559, 0x1.3725fb52beaacp-192,
     0x1.5a51c64bee529p-943, 0x1.8fb353af1ef2dp-1022, 0.0, 0x1.701a489ee00cbp-957,
     0.0, 0x1.e8c0f5b168128p-721, 0.0, 0.0, 0x1.3a13173209da4p-1004,
     0x1.4455919a51492p-674, 0.0, 0.0, 0.0, 0x1.4307639cd9568p-37, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.457da1823e0cep-592, 0x1.fad76582147e9p-41, 0.0, 0.0, 0.0,
     0x1.79368090abccap-1012, 0x1.b752904553e0ap-421, 0x1.69d88f70daa7cp-27, 0.0, 0.0,
     0x1.6603f0f50219ap-160, 0.0, 0.0, 0x1.91a6539d36e34p-912, 0x1.15a81cee45dd8p-97,
     0x1.46687f6272a67p-724, 0.0, 0.0, 0x1.d2c8d2d33ccddp-714, 0.0,
     0x1.53e188f5456cap-422, 0x1.490c326f8d493p-559, 0x1.e381b4e1f425ap-971,
     0x1.58d8f1b8126afp-127, 0.0, 0.0, 0x1.f56fee2eabc81p-863, 0.0,
     0x1.57ce7bde34ca4p-994, 0x1.6407f3504323bp-624, 0.0, 0x1.68b91d0d9c0b8p-815, 0.0,
     0.0, 0x1.f423b6b533b81p-250, 0.0, 0.0, 0.0, 0.0, 0x1.4871f7e3b3b43p-20,
     0x1.a40775a115dd4p-154, 0.0, 0x1.ee8706e119fedp-953, 0.0, 0x1.11433aafc79fap-925,
     0x1.4d797abe95fe8p-318, 0x1.26906faba2119p-865, 0x1.b9b67b74437a7p-179, 0.0, 0.0,
     0x1.7092be9b57b9ap-184, 0.0, 0.0, 0x1.bae5ca9f4b9p-735, 0.0, 0.0, 0.0,
     0x1.b46c34fda9f47p-705, 0x1.d3884a17a3959p-280, 0.0, 0.0, 0x1.dd8e200192bccp-489,
     0.0, 0.0, 0x1.76563d6234de4p-956, 0x1.6c72dde5191p-179, 0.0, 0.0,
     0x1.b19584359a8efp-620, 0.0, 0.0, 0.0, 0.0, 0x1.837b315adad66p-835, 0.0,
     0x1.aa8e86685750cp-506, 0.0, 0x1.930725cd5c4e4p-783, 0x1.d899be7b50472p-817,
     0x1.89d874a871f55p-56, 0x1.d3df3cc53445bp-902, 0.0, 0.0, 0x1.483be95b3af58p-335,
     0.0, 0x1.972630a66b0c4p-725, 0.0, 0.0, 0x1.3028e16c8ae43p-19, 0.0,
     0x1.0e1ac38cf0035p-220, 0x1.be8de526e8f39p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b6645ca0ed8bcp-337, 0x1.1da95bd912a18p-784, 0x1.abbe3d734c83p-816,
     0x1.22e8cf79e48edp-201, 0x1.4394b27e8666p-483, 0x1.a32d54bacb253p-487,
     0x1.a760158309105p-204, 0x1.6665020275258p-108, 0.0, 0.0,
     0x1.e52878ec73ea7p-1011, 0x1.74658fa6fff46p-937, 0x1.09987f22ca89cp-1014,
     0x1.dad62f19f5552p-113, 0x1.431892f51951p-233, 0x1.aa1d4dd8c6573p-910, 0.0, 0.0,
     0.0, 0x1.8140d0646f485p-2, 0x1.8b58a3bcf0a86p-650, 0x1.f2eb05550bf6ap-755,
     0x1.9bcdd0e799071p-841, 0x1.ce1a82ee85426p-256, 0.0, 0x1.75c13c79187c9p-3,
     0x1.48abeb93f0aebp-784, 0.0, 0x1.6cc4d230aacfap-934, 0x1.db317625459aep-739, 0.0,
     0x1.fe091ed0f02ap-1016, 0.0, 0.0, 0.0, 0.0, 0x1.d949421ceb7b3p-635,
     0x1.1157fe3c313ffp-431, 0.0, 0x1.b7de684bc7611p-354, 0.0, 0x1.d1fb3234c9c84p-526,
     0.0, 0x1.e3e24b8a1e999p-396, 0.0, 0.0, 0.0, 0x1.66799f099e3eep-1021, 0.0,
     0x1.317b7a6edeed1p-32, 0x1.d17a4f414072p-480, 0.0, 0x1.a0d50d9118824p-67,
     0x1.2e355d0a5c816p-641, 0.0, 0.0, 0.0, 0x1.9dec7d7258bfap-879,
     0x1.b7261aada100cp-478, 0x1.7aabf791e2ae9p-146, 0.0, 0.0, 0x1.39165087670b9p-397,
     0x1.5f7e28fc113d4p-629, 0x1.a8b4ffa450d7dp-947, 0x1.4b2493f7c75dap-986, 0.0,
     0x1.ce2d146888564p-714, 0.0, 0x1.4025f729c3455p-707, 0x1.42b1cd3743b34p-51,
     0x1.a063816efda5ep-423, 0x1.3ae098683089fp-714, 0x1.8ff2c71386b79p-56,
     0x1.8412daefa8c55p-262, 0.0, 0.0, 0.0, 0x1.0a0404eb03c21p-805,
     0x1.d92766c4d14e9p-288, 0.0, 0x1.047588735093dp-355, 0.0, 0.0,
     0x1.3ef3b1b81b517p-816, 0x1.06a69c3eec371p-903, 0.0, 0.0, 0.0,
     0x1.b7919b51fa5bcp-224, 0x1.d66269a630e99p-183, 0.0, 0.0, 0x1.579a77707b9c4p-716,
     0x1.e98a6812de0a8p-956, 0.0, 0x1.74b49e5c0fc62p-367, 0.0, 0x1.751d8caada5ep-649,
     0.0, 0x1.0ad751e53af0bp-880, 0x1.7b340c70291f1p-922, 0x1.7b22c7833104dp-309,
     0x1.147866ff15e47p-187, 0.0, 0.0, 0x1.7e4120ea266f8p-473, 0.0, 0.0, 0.0, 0.0,
     0x1.7e2cc42bec943p-361, 0x1.765d80cc7c85ap-801, 0x1.d08299e8504fcp-622,
     0x1.8797f2a0545bcp-19, 0x1.e1281f632fe26p-960, 0.0, 0x1.24fd8d8fa4936p-452, 0.0,
     0.0, 0x1.e8d14e47b012ep-155, 0x1.dcc414a67fdc9p-563, 0x1.71dbad119f505p-250,
     0x1.852992f9c9bf9p-916, 0x1.22b82ae993adap-362, 0x1.8688adbdd2e6p-386,
     0x1.9e0667ca3d4c2p-639, 0x1.61f2f727e9f5ep-763, 0x1.bbf8101e7d93cp-279,
     0x1.a7beb99e75fe1p-85, 0.0, 0.0, 0.0, 0x1.66f4bbfeeb228p-383, 0.0,
     0x1.05136bf0a5936p-639, 0x1.cddfe205c72f8p-674, 0x1.88b0e2bfc73aep-319,
     0x1.b37564126181cp-260, 0x1.d91cb8f5318dfp-414, 0x1.7144ae90af331p-149,
     0x1.0ae14e42d93dp-578, 0x1.8ae4058728259p-555, 0.0, 0.0, 0.0,
     0x1.5432c43fc5265p-661, 0x1.c0d57e0000039p-763, 0.0, 0x1.1724062e67829p-534, 0.0,
     0x1.8a277acabf85dp-271, 0.0, 0x1.0e947af2b1eb2p-758, 0x1.a0492af59818p-269, 0.0,
     0.0, 0x1.69076470af5efp-629, 0.0, 0x1.266d68b75cf4fp-251, 0x1.194541c6dda03p-674,
     0.0, 0.0, 0x1.1cd7e51ed1833p-462, 0.0, 0x1.1670a5ab5e927p-942, 0.0,
     0x1.01e392d79a9a1p-97, 0.0, 0x1.d1734e37bbc68p-751, 0x1.6a0f8e1df9f5dp-358, 0.0,
     0.0, 0.0, 0x1.a88f8083fc863p-837, 0x1.f59d8f8d3777ep-840, 0x1.678a3b5541aaep-742,
     0.0, 0x1.dd27294e5a0fap-433, 0.0, 0x1.d2eb03a99b74ap-99, 0.0, 0.0, 0.0,
     0x1.577f5fc3a4fe2p-460, 0.0, 0x1.fd38a5412d61cp-299, 0.0, 0x1.d37f9721f9977p-14,
     0x1.af037672c980ep-621, 0.0, 0x1.9fbe799c80db2p-441, 0.0, 0.0, 0.0,
     0x1.b2981c9284446p-627, 0x1.55e736f1abdd6p-345, 0x1.5e3537a52c56ep-616, 0.0, 0.0,
     0x1.8928477caa924p-878, 0x1.eb1f4a7061a91p-1021, 0.0, 0x1.4ec52b05085b3p-155,
     0.0, 0.0, 0x1.e5d1b02664dfap-1016, 0x1.1b4d2260b27ep-883, 0.0,
     0x1.32eafbf954fd2p-850, 0.0, 0x1.c45ea446a45e5p-562, 0x1.b625de15a4ed1p-292,
     0x1.4a1ab9f7184e9p-844, 0.0, 0x1.ca8d175e7f8c3p-293, 0.0, 0x1.c85deaefad0e1p-729,
     0x1.c59492986ce53p-430, 0x1.b746e52fcaaaep-495, 0x1.29f04e8c32ee8p-330, 0.0,
     0x1.efb8c997a1ffp-668, 0x1.14b368df95699p-948, 0x1.6fc448a284335p-53,
     0x1.4b3100f335665p-904, 0.0, 0.0, 0x1.99c583fd12edep-277, 0.0, 0.0,
     0x1.09e161a1f8b2ap-504, 0x1.f83c232e6c609p-255, 0x1.3e3bde2fab4f6p-436,
     0x1.299471bd6805fp-530, 0.0, 0.0, 0x1.396b80ef7d3adp-694, 0x1.2ae037b728508p-306,
     0x1.6a86341bd9918p-1017, 0.0, 0x1.a60114482bb63p-372, 0x1.550a8152e635ep-764,
     0.0, 0.0, 0x1.376a2cb94a1adp-443, 0x1.42d69af28de9dp-264, 0x1.2fc9a47657392p-604,
     0.0, 0x1.c5c680f6011d8p-135, 0x1.a016ba85f10a3p-981, 0x1.cfedef3fe8a19p-824,
     0x1.099a1b4c9ffe3p-715, 0.0, 0.0, 0.0, 0x1.b24358514d272p-596, 0.0,
     0x1.b54915b49c1fcp-147, 0x1.3c207f6729fc8p-28, 0x1.9cfa5671cc711p-92, 0.0,
     0x1.8265ed655c41dp-643, 0x1.040b7bc47bc39p-543, 0x1.859044a44b989p-944,
     0x1.65164d3294cbbp-422, 0.0, 0x1.0a200ae87bc39p-761, 0x1.f1484bdbf57c7p-93, 0.0,
     0x1.4e26836f6a3b5p-107, 0.0, 0.0, 0x1.666f7b9c861e4p-273, 0.0,
     0x1.7889b6467cf2bp-596, 0.0, 0x1.371029bea41bdp-676, 0.0, 0x1.c3968fff2c4bp-580,
     0.0, 0x1.a504c6ae9775bp-993, 0.0, 0x1.fec6b93c6c90cp-14, 0x1.7b88a1099444ep-77,
     0.0, 0x1.0e3a38c1513bdp-599, 0.0, 0.0, 0x1.6bca4db93c387p-246,
     0x1.0097158402d76p-983, 0x1.6fbda35cf54a6p-612, 0.0, 0x1.eaed303755ad1p-345,
     0x1.1c2de370e6f52p-878, 0x1.c03329ebca8ddp-323, 0x1.9014fe171e532p-695, 0.0,
     0x1.8ffd6efcdf6bdp-267, 0x1.9bcb3d46acc61p-112, 0.0, 0x1.dfd308212ac65p-659,
     0x1.0ff61179f3153p-634, 0x1.eb325e37cca08p-220, 0.0, 0x1.4c1ffefdbe174p-210, 0.0,
     0x1.2bd1a2c4afad2p-486, 0x1.b276938de607ap-781, 0.0, 0x1.ed61799e5bb81p-335,
     0x1.04c3b2626c9b3p-671, 0.0, 0.0, 0.0, 0x1.e2af9efaaac2fp-716,
     0x1.e6fde009100c7p-120, 0.0, 0.0, 0x1.ef9126dbc30bp-475, 0.0, 0.0, 0.0,
     0x1.2df939cc65adep-172, 0x1.0881ff19ae7efp-471, 0.0, 0.0, 0x1.8a37da2f31f13p-740,
     0.0, 0x1.b819931bd4f42p-877, 0x1.b541d7b773371p-598, 0x1.399a484955599p-162, 0.0,
     0.0, 0.0, 0.0, 0x1.f20114bbfbe7fp-512, 0x1.954d21ada3933p-919,
     0x1.fdc128b0942b6p-181, 0.0, 0x1.d28b9f488ad03p-275, 0.0, 0.0,
     0x1.31699ae1639c7p-277, 0.0, 0x1.e731843a8461bp-148, 0x1.eba2e1535f90ep-904, 0.0,
     0x1.4948c974e118fp-318, 0x1.bfd5f1ea6d059p-197, 0x1.7026da52a2543p-810, 0.0, 0.0,
     0.0, 0.0, 0x1.d8d39feafe7c7p-613, 0x1.44d8852441b8dp-1019, 0.0,
     0x1.852cfd84fdf99p-976, 0x1.fa0229a67f5c1p-811, 0.0, 0x1.be7f4d215b66dp-133, 0.0,
     0.0, 0x1.393af4c50f8dp-747, 0.0, 0.0, 0.0, 0x1.f91883ed42976p-826,
     0x1.642fad4abc93bp-4, 0.0, 0.0, 0x1.a3d1ab48a0e7dp-265, 0.0, 0.0, 0.0, 0.0,
     0x1.ceee72ecc20aap-872, 0x1.faf0436bedfc3p-650, 0x1.fd5390ee54e76p-133,
     0x1.af83d8f3dd5fp-556, 0.0, 0.0, 0x1.8afc4ca24b235p-453, 0.0,
     0x1.c8ac4ed6cf853p-967, 0x1.41f3ce8363ec1p-796, 0.0, 0x1.c7c6e8949ba47p-570,
     0x1.7dc1e9be13cfp-663, 0x1.e5dab4aa91c05p-763, 0.0, 0x1.aff3e097d4079p-984, 0.0,
     0.0, 0x1.a07b77dc292cep-298, 0x1.22136c4adafafp-189, 0x1.9ec536d610146p-988,
     0x1.690b5b7421f72p-832, 0x1.59fc282211c83p-925, 0.0, 0x1.5862be302b987p-289, 0.0,
     0.0, 0x1.13ea9c2ac4702p-718, 0x1.04e89abe75644p-662, 0.0, 0x1.492da538fe1ebp-855,
     0.0, 0.0, 0x1.6f1d9058b4d9bp-691, 0x1.c33cd8df5458bp-118, 0.0,
     0x1.5c2853cdb89abp-167, 0.0, 0.0, 0x1.3f24d71bccb1cp-658, 0x1.ab2424e332a2bp-851,
     0.0, 0x1.345246fca6ce5p-458, 0.0, 0x1.d9f0f61fb6647p-198, 0.0,
     0x1.f5adf34ad4bd3p-322, 0x1.d4c5543b365dp-517, 0x1.aae4fbbdf347dp-512,
     0x1.a31e2b8cf7eeap-71, 0.0, 0.0, 0.0, 0x1.3fb7b50f10237p-734,
     0x1.6b023098164fbp-630, 0x1.fc1daaf0bf8ccp-86, 0.0, 0x1.d1ed473318051p-925,
     0x1.52158409b8e7cp-406, 0x1.cc526a066f6a1p-887, 0.0, 0x1.7d12ca6dd9de2p-956, 0.0,
     0x1.02776ffacfba3p-541, 0x1.5b01cceffee72p-81, 0x1.72ab068c6222p-264,
     0x1.c46f17721d8c8p-529, 0.0, 0x1.0428169ee0951p-728, 0x1.b9061087e6aaep-623,
     0x1.66e59040948dbp-192, 0x1.c61591a4b12ep-96, 0x1.cf90e2a28af9dp-147, 0.0,
     0x1.93b308f4d6ccp-521, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4487ab9358d3p-570, 0.0,
     0.0, 0.0, 0x1.79db2323e5fb6p-495, 0.0, 0x1.96da6b2b0e4e4p-462, 0.0,
     0x1.cce2efb4e9602p-859, 0x1.d876a9d7777acp-745, 0.0, 0.0, 0x1.4ff0e7d0530d8p-854,
     0x1.f797c0ef04a94p-762, 0.0, 0x1.6536603d783e8p-373, 0x1.fb0cc20e90324p-81,
     0x1.f0ded5b6f4e4ep-596, 0x1.8500a5fce23f4p-747, 0x1.3b877a3a7115ep-400,
     0x1.5c255523ebff7p-354, 0x1.802e0b97bc5fap-286, 0.0, 0x1.28a7665906006p-673, 0.0,
     0.0, 0.0, 0x1.05cfb6d432e57p-534, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f5cc5edcd5f8p-870, 0.0, 0.0, 0.0, 0x1.1b3407464e6cap-292, 0.0, 0.0
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
            tmp1 = Sleef_finz_expm1d4_u10kvx(tmp0);
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
    printf("Sleef_finz_expm1d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expm1d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
