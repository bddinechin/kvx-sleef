/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd2_u10kvx.c --function Sleef_finz_cosd2_u10kvx \
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
     0x1.9b1e41eb66ccbp-702, 0.0, 0x1.cbb9ed63119a8p-986, 0.0,
     0x1.6bdce2b0c8a02p-218, 0x1.04aaf77f4b03cp-141, 0.0, 0x1.5e681b8bcff6ap-493, 0.0,
     0.0, 0x1.e67b8f6ce6eccp-541, 0.0, 0x1.10aa16986cd79p-837, 0.0, 0.0,
     0x1.4d76ec63fc921p-26, 0x1.217889625a6fcp-755, 0.0, 0x1.2b19a848145d3p-599,
     0x1.4fb68942bbe97p-244, 0x1.e5e9590e68cbfp-332, 0.0, 0x1.98d3c22bc4318p-394, 0.0,
     0.0, 0x1.1a5431e8c439fp-1012, 0.0, 0x1.a0b4a6c061e72p-407, 0x1.d7e2ac4323445p-6,
     0.0, 0x1.4d8695238cf98p-956, 0x1.34e55e2fc915dp-293, 0x1.9d2b89e819db9p-427, 0.0,
     0.0, 0.0, 0.0, 0x1.dd745fbe6b4ecp-723, 0x1.1e54a0d633e72p-179, 0.0,
     0x1.1a9fe81f486e8p-291, 0x1.9823ad1be8141p-538, 0x1.5b40080ff07b2p-879, 0.0, 0.0,
     0x1.bf8270966ed5fp-705, 0x1.adb306d6db95p-721, 0.0, 0.0, 0.0, 0.0,
     0x1.c70b607d964cp-661, 0.0, 0x1.f0ba149ba2e7ap-980, 0.0, 0x1.827294099f35fp-159,
     0x1.8bd7eb7775c4ap-596, 0.0, 0.0, 0x1.7866ba2083efdp-37, 0.0,
     0x1.b75af5b61ba36p-781, 0x1.9986f4a3de1f3p-660, 0.0, 0.0, 0.0,
     0x1.2471e70167a46p-1007, 0x1.fe1d33b5356bcp-816, 0x1.12597860940c6p-913, 0.0,
     0x1.9da019d1afe6dp-576, 0.0, 0x1.04fdb8d4b4cd6p-542, 0x1.a8071ee8d1225p-990, 0.0,
     0x1.4047308eb1c7ap-124, 0x1.2fab72c1b9593p-948, 0x1.8df6fd338ae37p-45, 0.0,
     0x1.06efdb83cc047p-691, 0.0, 0x1.47247071b92c8p-567, 0.0, 0x1.cbb054e5c96a5p-153,
     0.0, 0.0, 0x1.8a9ed8dba763cp-466, 0.0, 0.0, 0x1.596249038e16cp-605,
     0x1.6e1bc2fb288d5p-984, 0.0, 0x1.c47fa609754efp-947, 0.0, 0.0, 0.0, 0.0,
     0x1.46d4a736022fcp-52, 0x1.550d24bcd9045p-956, 0.0, 0.0, 0x1.215bfd54acb0fp-151,
     0.0, 0x1.24cd81397fe6fp-526, 0x1.9afe599a57049p-593, 0x1.fd965beef403fp-835, 0.0,
     0x1.734a2ee3cdb8bp-385, 0x1.df227ff78c199p-191, 0.0, 0x1.20459dffae302p-605,
     0x1.d4fda43f31137p-274, 0x1.6349440380169p-749, 0.0, 0x1.7ddf95e97948p-763, 0.0,
     0.0, 0.0, 0x1.32a60160a61d4p-304, 0x1.0a8c9fb9563d9p-496, 0x1.046b621c74797p-709,
     0.0, 0x1.fb8136fd126aap-63, 0.0, 0x1.2dfedd2d1f264p-648, 0.0, 0.0, 0.0, 0.0,
     0x1.bb770528789d2p-97, 0x1.95084cb2a5c8bp-518, 0x1.d8f49827592e5p-65, 0.0, 0.0,
     0x1.4fa8f7f4550c9p-2, 0x1.2ee5e0ecf397dp-920, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db579aa6f825bp-215, 0x1.29e7a464da6b9p-288, 0.0, 0.0, 0x1.08fb2cab80fd1p-245,
     0.0, 0.0, 0.0, 0x1.c1c201d3792bp-109, 0x1.648fc872cf9b2p-364, 0.0, 0.0,
     0x1.8f9a363374c9cp-564, 0.0, 0x1.dd719fb9d17b8p-486, 0.0, 0x1.77c5132aadc0fp-754,
     0.0, 0.0, 0x1.9f5887618558ap-14, 0x1.58aaf3c1d5f8bp-1009, 0.0, 0.0,
     0x1.b6d3fcbbc0787p-221, 0x1.0d12e940a7e77p-99, 0x1.0b7b6d5d7a144p-1011, 0.0,
     0x1.96b20cb9fac06p-623, 0x1.a2927ec760289p-390, 0x1.155c2b45d7c8p-278,
     0x1.c23bc9450c78bp-807, 0x1.a0c07fb6acde3p-928, 0.0, 0x1.665071b10ac9p-632,
     0x1.ab46078e33c9bp-718, 0.0, 0x1.d3463ea9c6473p-485, 0x1.bed72c090ae0ep-697,
     0x1.3885ede268d2fp-54, 0.0, 0.0, 0.0, 0.0, 0x1.0bb62d5c28bdbp-182,
     0x1.580194f25dp-139, 0x1.993f88912e57ep-760, 0x1.e0c74c33ef179p-512,
     0x1.fbe37a982a8c6p-290, 0.0, 0.0, 0x1.f0753562a2c58p-707, 0.0, 0.0,
     0x1.c3298a5f9003bp-42, 0.0, 0.0, 0.0, 0.0, 0x1.b78b692bde349p-912,
     0x1.2c52eb19ec0c4p-988, 0.0, 0.0, 0.0, 0x1.bccf180af18c4p-951,
     0x1.54a5120e86f37p-519, 0.0, 0.0, 0x1.223ac7f3462d7p-549, 0x1.33b095abdb81dp-249,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d204ecae4e3bp-413, 0.0,
     0x1.0688c198bcf16p-23, 0x1.abcf5de9dcd6dp-216, 0x1.b57c48ee354fep-809,
     0x1.0182149e02364p-437, 0.0, 0x1.93056fff8a8dbp-142, 0x1.3f4599fd22de6p-729,
     0x1.bb2a39bdcf2f5p-733, 0.0, 0x1.f15ffc38397aep-418, 0.0, 0x1.a09171c600542p-184,
     0x1.32b39074d7f5dp-723, 0.0, 0.0, 0x1.284585cd9d73cp-1003, 0x1.e697fa8bdbd4bp-6,
     0.0, 0x1.4042683cf4467p-763, 0.0, 0x1.9df320b9d746ap-993, 0x1.dc85726679802p-629,
     0x1.592c1468eb908p-109, 0x1.0af7a716942bfp-71, 0.0, 0x1.c37a4edb3677bp-496,
     0x1.05fca7a6893d3p-905, 0x1.6ea1c16243df1p-1002, 0.0, 0.0, 0.0,
     0x1.8acbd490a1f42p-951, 0.0, 0x1.8449d5d2020a8p-339, 0x1.9f6f73c775d09p-59, 0.0,
     0x1.362579a770203p-865, 0x1.f413ca3c7ee86p-617, 0x1.43be5a1f02b3ep-88,
     0x1.f1949a93582e2p-585, 0.0, 0x1.7f5a17ba405bap-392, 0x1.2e2c95473f4e4p-593, 0.0,
     0x1.660bca9881873p-329, 0.0, 0x1.5edd7335829a5p-822, 0.0, 0.0, 0.0,
     0x1.f17aa6a025745p-206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb896bce3f49fp-666, 0.0, 0.0, 0.0, 0x1.0088a81f9f76bp-797, 0.0,
     0x1.5cda6925c1eaep-882, 0x1.09b5a95343abdp-418, 0.0, 0x1.153fb17aada92p-498, 0.0,
     0x1.55b6084f6472ep-53, 0x1.f9329483da3a2p-492, 0.0, 0.0, 0x1.2a98085930ebep-25,
     0.0, 0x1.88272cfdd3087p-219, 0x1.cddaadf6f8de2p-621, 0x1.3f715d6e07d3dp-707, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b8c946d40aab2p-287, 0.0, 0x1.b8e7601fc5a74p-478, 0.0,
     0x1.23164f2fb418ap-884, 0x1.bd633b20d0b19p-83, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec02de035631cp-280, 0x1.39a5deed57118p-178, 0x1.62882508f702fp-90,
     0x1.8aad4844152dbp-798, 0x1.d781efda5fa21p-439, 0x1.ee211090c431p-741,
     0x1.fb6295a059ccap-817, 0x1.424ffa97aeddap-225, 0x1.79170fad4da09p-877,
     0x1.ed9e07d61c24cp-156, 0x1.b6bae88882eabp-306, 0x1.75d258a2e43e7p-329,
     0x1.08353ca554c62p-977, 0.0, 0.0, 0x1.6d851e67071c6p-872, 0.0,
     0x1.d1a9671d564bep-754, 0x1.ede4be285748dp-925, 0.0, 0.0, 0.0,
     0x1.16a117d0a6a45p-578, 0.0, 0x1.e781ec9a45e53p-654, 0x1.1ce89de8934f5p-622, 0.0,
     0.0, 0x1.199420bdc58cbp-424, 0.0, 0x1.cde5aabd92647p-983, 0x1.e6c32eae82ea4p-626,
     0.0, 0x1.0a00b1e6c4853p-233, 0x1.deba5bab6ab6dp-266, 0.0, 0x1.771c99fe433dcp-752,
     0x1.9bfce8155f0a5p-953, 0x1.08db5ec65d21ep-20, 0.0, 0.0, 0.0,
     0x1.8e4857d3df5c7p-555, 0.0, 0x1.387dd4e7a57afp-683, 0x1.af4cd560f1b9cp-200, 0.0,
     0.0, 0.0, 0x1.5c0d581d3bbf1p-464, 0.0, 0x1.25b53c115fec5p-147, 0.0,
     0x1.52efa22814c28p-409, 0x1.e7cfe3b751e6bp-798, 0.0, 0.0, 0.0, 0.0,
     0x1.fc6fbaf176754p-157, 0.0, 0x1.78057685ea862p-703, 0.0, 0x1.cf86a2e45d29dp-299,
     0.0, 0.0, 0x1.1ead7c042dbd4p-344, 0x1.f926a31e097d7p-974, 0x1.2b9db563c6f23p-811,
     0.0, 0.0, 0.0, 0.0, 0x1.0f1aa1cf8c7b8p-374, 0x1.187107404ed1fp-876,
     0x1.9f73049248684p-331, 0x1.d99d97be61c3ap-705, 0x1.8fbaffb95634dp-115, 0.0,
     0x1.6bc324f67f6d7p-273, 0x1.ef3643acedfb9p-853, 0x1.df46514924e88p-621,
     0x1.d8082aa85a6d3p-514, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa40fad2332cp-896, 0.0,
     0x1.01c5936474ef1p-334, 0.0, 0.0, 0x1.071b67109487p-610, 0.0, 0.0, 0.0,
     0x1.36a79b239e75p-777, 0.0, 0.0, 0x1.68ac335394e92p-382, 0x1.1b31ebea24189p-969,
     0x1.1e7cf87f41ecp-63, 0x1.2ef2c9aa545c9p-404, 0x1.2b605ca0c4bd3p-4, 0.0, 0.0,
     0.0, 0x1.b27e088b3dda2p-317, 0.0, 0x1.07655ae13171bp-96, 0x1.462ebce783928p-617,
     0.0, 0.0, 0.0, 0.0, 0x1.e7789b4e04b79p-731, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e48858bf8357p-956, 0x1.877ee6bd8efc8p-332, 0.0, 0x1.674730e04f82fp-864,
     0x1.0e1850249ab1p-151, 0x1.c1a7ee8828008p-939, 0.0, 0x1.888b83283d9abp-58, 0.0,
     0.0, 0.0, 0.0, 0x1.fa8d83d137ff1p-912, 0.0, 0.0, 0.0, 0x1.ccb6d22c492e8p-156,
     0x1.9641779d21e7p-347, 0.0, 0x1.aac77437624a5p-911, 0x1.29d39d7a50ca8p-442, 0.0,
     0.0, 0x1.d7b50e616b76bp-81, 0x1.fd7df4a664389p-511, 0x1.3c61e0aa1a9ddp-378, 0.0,
     0.0, 0.0, 0.0, 0x1.311d13d813149p-729, 0.0, 0.0, 0x1.4d97a894e58f7p-100, 0.0,
     0.0, 0.0, 0.0, 0x1.fd4892513da57p-878, 0x1.aedf990ce769dp-36, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.39c2c2893d8f7p-969, 0.0, 0x1.e1e99b4a68e87p-654, 0.0, 0.0,
     0x1.ea2ec3a8414e2p-394, 0.0, 0.0, 0.0, 0x1.a3c643aefd27p-185, 0.0,
     0x1.1bc4d6b42e418p-466, 0.0, 0.0, 0.0, 0x1.718e3462a8a92p-293, 0.0, 0.0,
     0x1.21bc1e90a0913p-93, 0.0, 0x1.ac085959e7825p-459, 0.0, 0x1.c16ab346ab2bbp-422,
     0.0, 0.0, 0x1.ca4cf65914674p-112, 0.0, 0x1.5134d1d5c608bp-932,
     0x1.c19ec0928737ep-996, 0x1.eef84a293cbadp-356, 0x1.b53bbc20c5278p-757, 0.0,
     0x1.33c0b0aee41c7p-192, 0x1.5f55199a2f1cap-52, 0x1.bdbe511de3f79p-355,
     0x1.aa1a4955ffd54p-832, 0x1.e4520285ea9c4p-787, 0.0, 0.0, 0x1.a3bfda381017cp-679,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a5026ebea658p-204,
     0x1.ea61fda40bdbep-744, 0.0, 0x1.bd32f17a046bcp-311, 0.0, 0x1.b0d3c323fe21bp-61,
     0x1.f287beda3645bp-819, 0x1.d9cfb0b9ce03ep-705, 0.0, 0x1.edb3fbe3ed436p-338,
     0x1.0bde2aadabcd8p-576, 0.0, 0.0, 0.0, 0x1.513766b3ed514p-369, 0.0,
     0x1.64914b41c027dp-756, 0x1.ff0142ecc1475p-776, 0.0, 0x1.c794da4ee08dfp-212,
     0x1.552d275b3d97cp-171, 0x1.fa4d403947c69p-345, 0x1.5d9c955f5bbcdp-451,
     0x1.eeb1deed44039p-881, 0x1.64c0e86300cccp-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9ed054a6a07dfp-1007, 0x1.03aa23ebc8d23p-556, 0.0, 0.0, 0.0,
     0x1.d83b0dec52d92p-793, 0.0, 0x1.3fc86ebab3797p-912, 0.0, 0.0,
     0x1.dae0825b374a1p-853, 0.0, 0x1.6d5717abf25f2p-157, 0x1.24de6df206779p-43,
     0x1.3210ce2d7a218p-216, 0x1.e97dea7966ee6p-906, 0.0, 0x1.1d11746a304d8p-811,
     0x1.1a67222508cb6p-357, 0x1.b94fe2d583d6bp-60, 0.0, 0x1.393195b5bffeap-235,
     0x1.0b3221d6f4632p-761, 0x1.aa48b3bcbc248p-329, 0x1.370f7ead6b83ep-651,
     0x1.a821a3e9508a7p-375, 0.0, 0x1.43d9e625b8bdcp-7, 0x1.2323ad07a11cbp-972, 0.0,
     0x1.ac05de8a77c2cp-947, 0.0, 0x1.9087885d25f08p-774, 0x1.facc4012c24ffp-212, 0.0,
     0.0, 0.0, 0x1.34cbcb4b8384fp-591, 0x1.dbd129f4662bfp-286, 0.0, 0.0, 0.0, 0.0,
     0x1.85eb6993f475cp-689, 0.0, 0.0, 0.0, 0x1.19b8de188d983p-366, 0.0,
     0x1.d76b047a1ad0ap-415, 0x1.e983ce4e8845dp-351, 0x1.41e1c9580e263p-776,
     0x1.787bb7d4276p-599, 0.0, 0x1.5e890d6aeca3dp-652, 0.0, 0.0,
     0x1.66f78f5156cc5p-689, 0.0, 0x1.83f1a3a6883aap-138, 0x1.54178265b4a6p-257, 0.0,
     0.0, 0.0, 0x1.a0b73d09bd35bp-821, 0x1.0dc8baa1a6058p-486, 0.0,
     0x1.810610ccf0163p-387, 0.0, 0x1.584258a398d57p-112, 0x1.e06bf28177eb9p-248,
     0x1.c3d901d342cc3p-298, 0x1.d46c5a2ebd50fp-902, 0x1.454f64b59a9a2p-568, 0.0, 0.0,
     0.0, 0x1.b63ac557d2414p-494, 0x1.a4687ba21504cp-628, 0.0, 0.0,
     0x1.d60bc03715276p-976, 0.0, 0x1.35e262f45dc9ep-839, 0x1.057ea926ce73ep-140, 0.0,
     0x1.92275a7f17901p-4, 0.0, 0.0, 0x1.a62fa3b818eabp-1008, 0.0,
     0x1.4d267c7903183p-757, 0x1.6ede3cb70a3d6p-639, 0.0, 0.0, 0x1.389ae3186e4cbp-139,
     0.0, 0x1.809330104a26p-219, 0x1.4e6dc3cacfef6p-520, 0x1.3afed8cca5d7cp-435,
     0x1p0, 0x1.67cdb416a55b9p-815, 0.0, 0x1.ac6aa843bcb6cp-624, 0.0,
     0x1.6b3bdc25c2983p-294, 0x1.ee9eead1d8301p-639, 0x1.e32c86d7b4631p-641, 0.0,
     0x1.2cdbb59603ccp-652, 0x1.2f9fbb9e46eafp-448, 0.0, 0x1.8175f38a84945p-37, 0.0,
     0.0, 0.0, 0.0, 0x1.fdc71d8b500d2p-219, 0x1.6a366ba51895dp-474,
     0x1.d00ea67e8a278p-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3192138a93d77p-488, 0.0,
     0x1.a964898448e29p-542, 0.0, 0.0, 0.0, 0x1.0c766c8797929p-239,
     0x1.17c44ecd0833fp-274, 0x1.c21639ba4c253p-661, 0.0, 0x1.08cc808a2018ep-713,
     0x1.ee0c91dfb1fa5p-873, 0x1.74d90ebdf0599p-705, 0.0, 0x1.03b4eb5998deep-935,
     0x1.06ee9b2bf3979p-1007, 0x1.ee6dfc1b657f9p-324, 0x1.df602aa35be5fp-571, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6e116a5d14cp-604, 0x1.e61fceceb1c5fp-707, 0.0,
     0x1.615f9459d9012p-638, 0.0, 0.0, 0.0, 0.0, 0x1.4d1498c2a8d01p-547,
     0x1.951b2a012d35cp-46, 0x1.926eb1ac560cep-238, 0.0, 0.0, 0x1.e43cf695017p-481,
     0x1.8f967994244ebp-568, 0x1.ee51aa07b9e8dp-843, 0x1.0a8e186de9f43p-520,
     0x1.ec624bd32d9b7p-659, 0.0, 0.0, 0x1.9dd65486ea54p-552, 0x1.950449132b021p-7,
     0x1.ce2bbd9907a71p-603, 0x1.9e48267ce57cbp-1017, 0x1.0a27ccc9316d5p-840,
     0x1.4bae8fb90c2cap-728, 0.0, 0.0, 0.0, 0x1.f37fdd9e13472p-488,
     0x1.be02ff529d272p-204, 0.0, 0x1.4f87d72a6d618p-212, 0x1.cc258c04917ccp-501, 0.0,
     0.0, 0x1.937ff9ece566ap-335, 0.0, 0x1.1329c078e52cap-544, 0x1.24d0b2dee282dp-342,
     0x1.10c2434abd879p-268, 0x1.d3d3540b30eccp-504, 0.0, 0.0,
     0x1.6dd43bbffd708p-1007, 0.0, 0.0, 0.0, 0.0, 0x1.5a19f2c6b342dp-967, 0.0, 0.0,
     0x1.f3ca6d27e2105p-620, 0x1.7820eab65ed02p-384, 0x1.2a1f2ea6c8b32p-332,
     0x1.0ed850955bc25p-513, 0.0, 0x1.8b41dd63ac1f2p-52, 0.0, 0.0, 0.0,
     0x1.6f57ec9b5e529p-870, 0x1.9307edcb314dep-628, 0.0, 0x1.b2f618e867eeap-821, 0.0,
     0.0, 0x1.d40932d51963ap-830, 0x1.561c4a5bb2d28p-4, 0x1.2529d184d903ep-1003,
     0x1.be48e0e1566b6p-574, 0.0, 0.0, 0x1.6400bd1be8fcap-482, 0x1.0b5ccb43e4f11p-315,
     0.0, 0.0, 0x1.b0365895bb4a5p-721, 0.0, 0x1.ac4d4fb0ffea8p-857, 0.0, 0.0,
     0x1.69fbe963d20afp-923, 0x1.179dd5943d3a1p-22, 0x1.62c06236002c8p-754, 0.0,
     0x1.d4da2c4964627p-758, 0x1.e8e8fad7d05bep-764, 0x1.971f6ac6c05adp-952,
     0x1.d90e61f5a9284p-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dae9bfa6470b6p-735,
     0x1.190b4e748b9ep-132, 0x1.40123213e43a5p-170, 0x1.75b79df8a772bp-143,
     0x1.044ac08f2d406p-162, 0.0, 0.0, 0.0, 0x1.dd96318d32e3ep-297,
     0x1.d26ad74073d26p-132, 0x1.112d9a0b9061fp-274, 0x1.ef5dfce239ebfp-54, 0.0,
     0x1.13ef1051cb9aap-709, 0.0, 0.0, 0x1.7c591a6947c47p-258, 0x1.b63420dd2b356p-394,
     0x1.e9495224b7bdcp-658, 0.0, 0.0, 0.0, 0x1.d97a9dc541a36p-110, 0.0,
     0x1.27dd8352f8a36p-648, 0.0, 0.0, 0.0, 0x1.68d47d76b51bbp-497, 0.0,
     0x1.c7f7eb6cae1ccp-565, 0.0, 0x1.c264b37ddcff8p-967, 0x1.3fe12b7f28e22p-859, 0.0,
     0x1.e9ef677a1987dp-65, 0x1p0, 0.0, 0x1.2db0125e6da97p-17, 0.0,
     0x1.7e39eb51f76a5p-790, 0x1.c55a6f4422461p-811, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.73c801c62549bp-57, 0x1.f49b91776ee0ap-511, 0x1.b062533e0fc93p-723, 0.0,
     0x1.6ad677ff25956p-852, 0x1.ad9181ddedbe7p-878, 0.0, 0x1.69de4d541c73p-751, 0.0,
     0.0, 0.0, 0x1.eb21aecdd5bdbp-623, 0.0, 0x1.28457b8da4741p-621,
     0x1.bc10b116ac32fp-671, 0x1.defd8b56a228ap-292, 0.0, 0.0, 0x1.1174aa3ff4ea3p-520,
     0.0, 0.0, 0x1.3df6a63f9cb21p-519, 0.0, 0.0, 0x1.62063932b6b54p-204,
     0x1.55538a88a9e1bp-16, 0.0, 0.0, 0x1.e6948c7749e85p-544, 0.0, 0.0, 0.0,
     0x1.688a354d1efa4p-464, 0.0, 0x1.7ca3e7bfec2dap-47, 0.0, 0.0, 0.0,
     0x1.9fa537d5515b8p-766, 0.0, 0x1.2c7863b774825p-879, 0x1.6e91e87e432dfp-371, 0.0,
     0.0, 0.0, 0x1.a30643f8b4792p-704, 0x1.b4ec77e25729cp-984, 0.0,
     0x1.1b0a2e72d82b6p-311, 0.0, 0x1.6df921ea02b1fp-818, 0x1.90c9f3016879ep-797, 0.0,
     0x1.fa30f9a249563p-467, 0.0, 0.0, 0x1.a9c21143cb556p-769, 0.0,
     0x1.cba511aca5e03p-981, 0x1.57a8df0923324p-481, 0.0, 0x1.656000e639dcp-492,
     0x1.ffa032fc5851ep-543, 0.0, 0.0, 0.0, 0x1.2e1517048bee3p-231, 0.0,
     0x1.3da525b1a3bbbp-758, 0.0, 0x1.4eeb43a87eb92p-672, 0x1.9338cad976337p-307,
     0x1.211f142e13b63p-775, 0.0, 0.0, 0.0, 0.0, 0x1.435f51f56cd0ep-576, 0.0,
     0x1.84cab7f0b9ac8p-814, 0x1.99dc765c0551cp-469, 0x1.b2bb17e9cfc89p-475,
     0x1.77a6b9c1b1ab5p-763, 0.0, 0.0, 0.0, 0.0, 0x1.bef1666baf224p-16,
     0x1.440558741b9f4p-39, 0.0, 0x1.94d3dab8c9105p-676, 0.0, 0x1.55996af768c4fp-87,
     0.0, 0x1.6a77a43ef13c6p-975, 0x1.7414dab0a78d3p-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.b61874309d3f8p-754, 0x1.a7cb4082dd52fp-453, 0x1.6a26b36b240a3p-607, 0.0,
     0x1.4cbb55be547e8p-79, 0.0, 0x1.06636b9d8ab5ep-923, 0x1.fc1f05e9781ccp-534,
     0x1.1a4a2bec1d1f6p-421, 0.0, 0x1.9e0fde07d56c4p-606, 0x1.ceb07ebd7d537p-391, 0.0,
     0.0, 0x1.b78178190627ap-653, 0x1.70e1cb5e5bd85p-312, 0.0, 0x1.778e018e14895p-995,
     0x1.5452a71ebe752p-173, 0.0, 0.0, 0.0, 0x1.e8c9145277a01p-437, 0.0,
     0x1.3ffc00a888a54p-543, 0x1.07baa04268d3p-851, 0.0, 0.0, 0x1.93c51fc671065p-672,
     0x1.e256f0fe5207p-854, 0.0, 0.0, 0.0, 0.0, 0x1.eadfe197dbc7dp-122,
     0x1.18a52f366d06bp-164, 0.0, 0x1.9b1e8ec65464fp-75, 0.0, 0.0,
     0x1.d5b933ab755aap-59, 0x1.4f07517ba4d79p-971
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
            tmp1 = Sleef_finz_cosd2_u10kvx(tmp0);
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
    printf("Sleef_finz_cosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cosd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
