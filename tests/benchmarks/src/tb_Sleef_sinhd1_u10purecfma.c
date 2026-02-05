/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd1_u10purecfma.c --function \
 *     Sleef_sinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.db797d6880a8dp-184, 0.0, 0.0, 0x1.1bdef77a8e713p-914,
     0x1.06b0c4bc4a791p-293, 0.0, 0.0, 0x1.3d902addbb0fp-622, 0x1.20c4715c6d4d6p-248,
     0.0, 0.0, 0x1.a940833d32fa1p-485, 0x1.1ccf998bffee7p-910, 0x1.c950b7ffef4cp-468,
     0x1.4da9b05a3cd14p-194, 0x1.4b1b7aeac4ed9p-250, 0.0, 0x1.78b56aee7e336p-114, 0.0,
     0x1.d35b0d0b080efp-100, 0x1.1887180bb692dp-613, 0x1.aee06bff79836p-597, 0.0,
     0x1.5fd6b6ee02e39p-394, 0x1.0a6f4e1de973cp-513, 0.0, 0.0, 0.0,
     0x1.d483ddaa822b9p-632, 0x1.c0a4e526ab4b7p-88, 0x1.361959a2c79e9p-72,
     0x1.825d64feecc3ep-900, 0.0, 0.0, 0.0, 0x1.4cfd2f6584521p-308,
     0x1.c6f50ff6f79cep-227, 0.0, 0.0, 0.0, 0.0, 0x1.6430ebef21f14p-52, 0.0,
     0x1.05168bdc7b617p-245, 0x1.472b557b20938p-751, 0x1.aca32c5884c76p-278,
     0x1.ef5c08e756813p-785, 0.0, 0.0, 0.0, 0x1.7f4150b103629p-735, 0.0, 0.0, 0.0,
     0.0, 0x1.70c7bffa67035p-301, 0.0, 0.0, 0x1.2846000590b6fp-715, 0.0,
     0x1.b996700ba81aap-97, 0.0, 0.0, 0x1.e560a0bac0e9ep-991, 0x1.a0d77f2cccb64p-588,
     0.0, 0.0, 0x1.fbf2697c97aaep-503, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5bdbf3a85b3ep-336, 0x1.9353db1374e5p-658, 0.0, 0.0, 0x1.bf5270e8594ebp-204,
     0x1.20ffc0cdedcbcp-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ee67760fb02p-750,
     0.0, 0x1.f405e14da4b31p-511, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75e57e4eba31ap-721,
     0x1.94499dfa1ef71p-550, 0.0, 0x1.4e48a114db5fdp-225, 0x1.0658397aed0adp-975, 0.0,
     0.0, 0x1.75970f544cbb9p-269, 0.0, 0.0, 0x1.a14914b25a0e9p-815,
     0x1.ebad78ab392b8p-683, 0.0, 0.0, 0x1.d112337ae8f6bp-728, 0.0, 0.0, 0.0,
     0x1.25b54e48cd397p-204, 0.0, 0x1.a463cd6c68daep-973, 0.0, 0x1.0c35083f4f5b9p-39,
     0x1.4bf34111056b1p-680, 0x1.95db95f30b35ep-139, 0.0, 0x1.6e26cc5e04162p-718, 0.0,
     0x1.71235088018b2p-877, 0x1.8fa2c38eee85p-960, 0.0, 0x1.5f468d0a8c958p-907, 0.0,
     0.0, 0.0, 0.0, 0x1.5c6b72e86826ep-306, 0x1.564efc0cd38bbp-776,
     0x1.05cb62f41429cp-164, 0.0, 0.0, 0x1.e73fb62ac3b1dp-711, 0x1.2e4a26563745cp-199,
     0.0, 0.0, 0x1.f39df0fdd01ep-257, 0x1.7114e6c6fe578p-135, 0x1.d955a82ca4992p-23,
     0x1.f18cfe737bb6cp-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36e29af333ba8p-805, 0.0,
     0.0, 0x1.eb1eca554b95dp-549, 0.0, 0.0, 0x1.209e7e2495dbfp-926, 0.0,
     0x1.660b8ac6e283ep-467, 0x1.cd0f2bb45b07ap-295, 0x1.ab7937eb6c7b1p-378,
     0x1.c7b16f5d29c3dp-749, 0x1.a5783e2cb2dfep-658, 0.0, 0.0, 0.0,
     0x1.251f52dc2932ap-612, 0x1.1eec7b3d5234bp-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d56c1584440d6p-575, 0.0, 0x1.56c0b2e2b2e18p-521, 0x1.48f847549f5f6p-411,
     0x1.cfb283ffd21aep-215, 0.0, 0x1.4ab605281e14fp-109, 0.0, 0x1.a746e42bff656p-737,
     0x1.65126f15f6191p-9, 0x1.bde35e1ef782p-61, 0x1.5f11bb376bd86p-703,
     0x1.1b91069c6d7d7p-905, 0.0, 0.0, 0.0, 0x1.ece3a421653f6p-34, 0.0,
     0x1.09a771ec6f447p-700, 0x1.1494fae626898p-335, 0x1.11d09e2b42388p-790,
     0x1.bd284b7e74ff9p-251, 0x1.289ff8e06d9fep-12, 0x1.3db032b44ecdcp-567,
     0x1.f6eb2420d01e9p-614, 0.0, 0.0, 0x1.1d050f6382808p-875, 0x1.b376c5446c34bp-610,
     0.0, 0x1.2881dbf5f64dcp-343, 0.0, 0x1.a6e8ebab59286p-323, 0x1.bb345b5d6c229p-962,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73cc118bf00bbp-278, 0.0, 0.0, 0.0,
     0.0, 0x1.3cf2210c62462p-845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c528a5190925p-184, 0.0, 0.0, 0x1.becd4ce2378dcp-15, 0x1.65bc00a0d481dp-12,
     0x1.12425d57334bep-404, 0x1.b7772c41899a9p-200, 0.0, 0.0, 0.0,
     0x1.211393153b208p-959, 0.0, 0.0, 0x1.c83d90520122ap-531, 0x1.4ef3e37bdd322p-434,
     0x1.fcd6cc6d045e6p-640, 0x1.d4e499b3501b5p-167, 0x1.7b43d68e30116p-504, 0.0,
     0x1.d3d595c2255b7p-612, 0x1.12b2cccbd2582p-340, 0.0, 0x1.e90e349a8de5dp-620, 0.0,
     0.0, 0.0, 0x1.7bca1ec3295b2p-429, 0x1.800c58858fc1ap-189, 0.0,
     0x1.79ac90be9eaa5p-77, 0.0, 0x1.be06cfc61ef7fp-659, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22cc192df8962p-640, 0x1.98e183a0e244dp-889, 0x1.5a643db641e53p-451, 0.0, 0.0,
     0x1.f8e22e18b157bp-944, 0.0, 0x1.50d8ec38e3abep-737, 0.0, 0x1.7a49c2248a3e1p-905,
     0x1.d74b5ea3309c3p-68, 0.0, 0.0, 0x1.395a73f64ff02p-743, 0x1.cc6adc3cb504p-223,
     0x1.09e2bc8247abfp-354, 0x1.b55d894e1c3c6p-989, 0x1.6a246ca170c4fp-420,
     0x1.bc9219e76e485p-591, 0.0, 0.0, 0x1.8fd58d19258fp-996, 0.0,
     0x1.352382ddfb691p-898, 0.0, 0x1.91bc2d5b8070fp-818, 0.0, 0.0,
     0x1.15c69b2851cfap-389, 0.0, 0.0, 0.0, 0x1.67a0a373bbd1bp-624,
     0x1.ef7f897d64688p-697, 0x1.24ca69c00170ap-819, 0x1.b202316f1e072p-171,
     0x1.2b914305724ddp-462, 0x1.39c74d6e422d3p-369, 0x1.3b44bb852d3ecp-309,
     0x1.b9780b9b7d761p-551, 0x1.2963bc644ecbcp-181, 0x1.e33deac140418p-482, 0.0,
     0x1.7ea08dc571cbp-855, 0.0, 0.0, 0x1.828a36b1122dep-449, 0.0, 0.0, 0.0, 0.0,
     0x1.b8a01741b85e5p-385, 0.0, 0.0, 0x1.48670ecf68996p-109, 0.0,
     0x1.361e07237603ep-502, 0.0, 0.0, 0x1.e3ef6a9846ec5p-339, 0.0,
     0x1.6d991ce820176p-378, 0x1.9e2de5316ed29p-772, 0.0, 0x1.f41199c5d65e3p-340, 0.0,
     0x1.1cd15446d4045p-620, 0.0, 0.0, 0x1.d72dbbef55122p-683, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4bafe24b1f4ap-647, 0x1.499e6ce7d5f24p-886, 0.0, 0.0,
     0x1.a2487f1dde56ap-877, 0x1.e784b894ce068p-631, 0.0, 0x1.fa43f1c9c2d3fp-953,
     0x1.c36435181193ap-987, 0x1.1dc89a475e19ap-21, 0.0, 0x1.38034887b39fcp-33,
     0x1.776f23f99c339p-487, 0.0, 0x1.15c9e3b4335efp-819, 0x1.816fd89257e9p-609,
     0x1.ec8313f33d07bp-201, 0.0, 0.0, 0x1.a8e7086898fa8p-122, 0x1.47f68503503c3p-543,
     0x1.52d8b6a332eb3p-525, 0x1.d1fb16b86171ap-834, 0x1.b0aa1fd25fabbp-158, 0.0, 0.0,
     0x1.0d83b470578b6p-952, 0.0, 0x1.19e21b6e4c30ap-374, 0.0, 0.0, 0.0,
     0x1.800e8bc9a6071p-947, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7c4e38356a77p-815,
     0x1.b369addcdfc2p-649, 0.0, 0.0, 0x1.30c0b34809b5fp-189, 0x1.c9469864988ccp-430,
     0.0, 0x1.bdc63917c6153p-894, 0x1.ab60e6c269008p-431, 0.0, 0x1.ed4ccf737da3dp-127,
     0x1.f78e637508649p-700, 0x1.3f94735ea1087p-718, 0.0, 0x1.4a222eb058f06p-776,
     0x1.7de509a87d442p-983, 0.0, 0.0, 0x1.81efbdad55715p-827, 0x1.b16480d1431adp-125,
     0.0, 0.0, 0.0, 0.0, 0x1.01f35a395198cp-678, 0.0, 0x1.d7306cf576a34p-610, 0.0,
     0.0, 0x1.c70e3739106cep-32, 0x1.82871e4c6eb55p-534, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1668bbfd29d0dp-751, 0x1.284e2e8c2d48bp-419, 0x1.ed467069b2bp-213, 0.0,
     0x1.d6bb10d82c319p-617, 0x1.3341b85fa613cp-991, 0x1.3497b06d985e3p-675,
     0x1.4fabbca3216cdp-374, 0.0, 0.0, 0x1.866ecdf929a32p-458, 0x1.aae4bd05d7301p-760,
     0x1.a171b9000e1eep-351, 0.0, 0.0, 0x1.68b398cd7cf37p-551, 0x1.c4c6fe7dd5dcp-1012,
     0x1.9f96c38de3b47p-305, 0.0, 0x1.8f0be8df5ea2dp-866, 0.0, 0.0, 0.0,
     0x1.b1bb98930a48fp-95, 0.0, 0.0, 0.0, 0.0, 0x1.8f9ac638f7101p-328, 0.0,
     0x1.846d0ccd7651fp-155, 0.0, 0.0, 0.0, 0x1.a3d8f7fb75fcbp-651, 0.0, 0.0,
     0x1.00937a8645c04p-727, 0x1.e6a80fc1ad31ap-408, 0.0, 0x1.24353328e1ecp-674, 0.0,
     0x1.03d25366abcaap-931, 0.0, 0x1.cdd7ecd222d7cp-347, 0x1.3aa776b9155b2p-809, 0.0,
     0x1.8171e0343d006p-903, 0.0, 0x1.ded6b19d871fap-580, 0.0, 0.0, 0.0,
     0x1.0f2772b11f351p-902, 0.0, 0x1.3720294d4a55cp-970, 0.0, 0x1.efd7c4f2c0f7ep-444,
     0x1.a7825b908587p-589, 0.0, 0x1.bb28193322b8ep-839, 0x1.41b7c08f6cb96p-1019, 0.0,
     0x1.5f43a0c491c4cp-224, 0x1.a8403aa68d587p-847, 0.0, 0.0, 0.0, 0.0,
     0x1.c9ed7d15119cp-709, 0x1.8ae648d71d2cep-431, 0.0, 0.0, 0.0,
     0x1.0c067bca814fap-891, 0x1.b0b806a2824dbp-1004, 0x1.eb3578869bd57p-720, 0.0,
     0.0, 0x1.8f1a5ca7af50cp-899, 0.0, 0x1.7da25112b2cf5p-303, 0x1.f02de6e834b4ep-222,
     0x1.23ca0a49c938ep-738, 0.0, 0.0, 0x1.989b6f0477af7p-518, 0.0,
     0x1.aae33067729ap-28, 0.0, 0x1.e9b9a4f3003dap-581, 0x1.872a4af25db72p-146,
     0x1.c4335285ba346p-806, 0x1.f190481d52ee8p-499, 0x1.52f0e3480f956p-380, 0.0,
     0x1.fac1058aa83b4p-313, 0.0, 0x1.3e2aacd97126dp-38, 0.0, 0x1.87f413e6b1643p-703,
     0.0, 0.0, 0x1.c57855a371475p-433, 0x1.06d1c9b681e4p-328, 0x1.6b69e984cbac7p-634,
     0x1.07f695ad7ab09p-796, 0x1.f7b47e0d05c63p-639, 0.0, 0.0, 0x1.80f48b161d8c7p-606,
     0x1.1bfe66f01258bp-634, 0.0, 0x1.76e521089822ep-394, 0x1.0e18c12716e8ap-594, 0.0,
     0x1.8ae873ad7ff91p-41, 0.0, 0x1.996c0ea59437bp-519, 0.0, 0x1.5c03ba4b6a576p-120,
     0x1.9da249bb9887dp-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bc44b62766bd1p-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4d7ea92c0d69p-762,
     0.0, 0.0, 0x1.b0bfa3ef89da2p-741, 0.0, 0x1.29c25f40d2a31p-278, 0.0,
     0x1.7cea9979289fp-975, 0.0, 0x1.98cfd4d4921fap-92, 0.0, 0x1.f6618d58fe84cp-140,
     0x1.8348e4a4221adp-691, 0.0, 0.0, 0x1.0a8d68ba2d937p-1018, 0x1.ab81261b24a31p-50,
     0x1.5b6b6e96a5721p-849, 0x1.3fdef0c1211d5p-204, 0x1.a2c71e6cfb93bp-245, 0.0,
     0x1.ca2a509efff28p-380, 0.0, 0.0, 0.0, 0.0, 0x1.e2052d71293a4p-781, 0.0, 0.0,
     0x1.1f08154204ce4p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70ccc62856ba7p-281,
     0x1.01cbc0334631dp-156, 0.0, 0.0, 0x1.2740e98994dccp-774, 0.0,
     0x1.c879f2ebadbfp-469, 0.0, 0.0, 0x1.fcbe2a544c007p-40, 0x1.a3e048e01f1c3p-803,
     0x1.c36809e6b83b5p-509, 0x1.3a0abeff70bccp-885, 0.0, 0x1.de2576ce58f56p-845,
     0x1.77ef7539101b6p-751, 0.0, 0x1.af8b39f8ac3e9p-619, 0x1.1afd70569eb22p-62,
     0x1.673bcb8fe2639p-583, 0x1.87b77ef183892p-11, 0.0, 0.0, 0.0, 0.0,
     0x1.2b0a7d28562fap-214, 0x1.931eed32ba379p-757, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0,
     0x1.896da8c65081cp-582, 0x1.54ac9530dc2cep-993, 0.0, 0.0, 0x1.baf369ff2ab9fp-380,
     0x1.a817a64c0dc5p-81, 0x1.6708f822eecaep-852, 0.0, 0x1.0621c61a89c52p-547,
     0x1.ee0e7ef764c68p-514, 0x1.8d630681e5667p-1000, 0x1.c038fdd6462c7p-635,
     0x1.71821eaa7d8f6p-751, 0x1.7f652421e11fep-751, 0.0, 0.0, 0x1.e11fab6f9768cp-508,
     0x1.ba44190d0a8a2p-717, 0x1.2c07c51471a9p-696, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.601f50bfd4dcp-125, 0x1.37e7ce99885fbp-588, 0.0, 0x1.c677d06c3662ap-808,
     0x1.73381b4db80dp-269, 0x1.69fdef7a61e1fp-897, 0.0, 0x1.bcfc120164f56p-394,
     0x1.d5cbcad458ba2p-737, 0x1.5f5d167b58763p-391, 0x1.7393f91009408p-268,
     0x1.f313b9abcd00bp-177, 0.0, 0x1.a1e0d71d90b2ep-119, 0x1.e76afdbc058f6p-896,
     0x1.a99e101137629p-860, 0x1.08f63cb953edfp-588, 0.0, 0.0,
     0x1.a739554ff071bp-1009, 0x1.9ae20cf8a645ap-377, 0.0, 0x1.a09a266e3f1cep-1007,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.406842292288ep-284, 0x1.5457fa3ead417p-134,
     0.0, 0x1.02055e77233cdp-685, 0.0, 0x1.7a495cb1f82edp-600, 0.0, 0.0, 0.0, 0.0,
     0x1.ea286418653d9p-867, 0x1.148118e189ca6p-987, 0x1.a0c604fa97c1bp-824,
     0x1.07ea3456883eep-657, 0x1.1aa78c65a6ab2p-371, 0.0, 0x1.076ca4bac57e4p-326,
     0x1.93dbf1d806baap-308, 0.0, 0.0, 0.0, 0.0, 0x1.aeb7ad022c807p-31,
     0x1.d57f23b4ac733p-738, 0x1.c72d581622b82p-94, 0.0, 0x1.cab4754f587e5p-577,
     0x1.c9d77610aec57p-906, 0.0, 0.0, 0x1.911ef594e9053p-954, 0.0,
     0x1.1e7493681cd9fp-511, 0x1.ad18332b52f86p-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49424eb701aep-89, 0x1.dd414fab77652p-870, 0.0, 0x1.c19fb4af792e4p-285,
     0x1.8e4d7cc7b24c7p-52, 0x1.70687170dadecp-389, 0x1.ce3de78a042d5p-213,
     0x1.61fbfc1717d7ep-814, 0x1.1028c4e67245cp-730, 0x1.33d88f67decfcp-780, 0.0,
     0x1.a46d8c3b39c63p-514, 0x1.31552e446d167p-690, 0.0, 0x1.b71301baa6373p-8, 0.0,
     0x1.84b2e4e3abcc6p-214, 0.0, 0.0, 0x1.6198d91ed7a25p-98, 0x1.d50bf90329ef6p-543,
     0x1.e912b336cb545p-377, 0.0, 0.0, 0.0, 0x1.fe4f1f64030c6p-759, 0.0, 0.0,
     0x1.4db34ac979c5ap-999, 0.0, 0x1.a1b39413994aap-236, 0x1.942c3a4ad3252p-727,
     0x1.89fd9081b8742p-95, 0x1.3f937e38e89aap-838, 0.0, 0.0, 0.0,
     0x1.fc2d2cdbdaa68p-551, 0x1.385a6e16ed1f5p-65, 0x1.b78a8891af5e3p-649,
     0x1.f73b0dc461215p-652, 0.0, 0x1.54edf3b502ddbp-531, 0.0, 0x1.59fd793bee874p-899,
     0.0, 0x1.38d5132379cb6p-63, 0.0, 0x1.22bd5a7e4df7cp-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.cf4f16a478ccbp-100, 0x1.4818e60e0b366p-309, 0.0, 0x1.6a221a65ee95fp-420, 0.0,
     0x1.7c89873ff10b1p-772, 0x1.921b4d46cfa1bp-805, 0x1.525d0c33e7656p-461,
     0x1.d770b5f11435cp-450, 0.0, 0x1.2824a87e35e9p-523, 0.0, 0.0, 0.0, 0.0,
     0x1.ffe040a0a566bp-947, 0.0, 0x1.df74dc2e9fddep-570, 0.0, 0x1.dbd0aa2fb1857p-748,
     0.0, 0x1.843080bb6afa4p-867, 0x1.acb0407d3296cp-229, 0.0, 0.0,
     0x1.3060f9e9514c8p-804, 0.0, 0x1.e0366091a3cap-585, 0.0, 0x1.589c7c060f74bp-487,
     0x1.d42c9551f1afbp-148, 0x1.a5c62450d5aa6p-667, 0.0, 0x1.f4285278f1aebp-799,
     0x1.06d137f17b76ep-824, 0x1.f1539b5d1ad93p-931, 0.0, 0.0, 0x1.b7313cc669aep-470,
     0.0, 0x1.21c6c5983a8d1p-610, 0.0, 0.0, 0.0, 0x1.43455be60bd8ap-623,
     0x1.fc016d7e3fd9dp-418, 0.0, 0.0, 0x1.c75a526b833e2p-388, 0.0, 0.0,
     0x1.6bd8516fabf53p-114, 0x1.0109785748c88p-182, 0x1.63ddc00909d1cp-435, 0.0,
     0x1.2d80100be0542p-742, 0.0, 0.0, 0x1.be50f8f63f1e5p-406, 0x1.83a2df5f64373p-329,
     0x1.308820968eb54p-477, 0x1.b7f656c90169fp-989, 0x1.ba4a5089a722cp-721, 0.0, 0.0,
     0x1.66de2a904c9d8p-145, 0.0, 0x1.f4c1ac7d46a6fp-143, 0.0, 0.0,
     0x1.e03988195cc39p-73, 0x1.e35e61a54b642p-908, 0x1.4fdce487d574fp-8,
     0x1.ae4068ae9a6a6p-792, 0.0, 0x1.41181209c679bp-743, 0x1.683bf0d4fffap-454,
     0x1.3f170d2581a67p-176, 0.0, 0x1.6aab1150406ccp-336, 0.0, 0x1.9af8c9eb51b7cp-72,
     0x1.88cb8d5208718p-872, 0x1.55b43aaeedc58p-802, 0x1.282ae14695efep-555,
     0x1.73cd4f02b0322p-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.609781391913bp-190, 0.0,
     0.0, 0.0, 0x1.9c12f407ece35p-1004, 0.0, 0x1.7ab85166ff525p-485, 0.0,
     0x1.3e6be0f08fe91p-150, 0x1.2b982f483fb61p-750, 0x1.d6688ffb024a1p-142, 0.0,
     0x1.b42ec68825a78p-647, 0x1.137f32f8bf0d9p-5, 0.0, 0x1.5ca03e38dd2dap-686,
     0x1.ccb61cadbec45p-656, 0x1.995012a894da7p-701, 0.0, 0.0, 0x1.8378a5e7bf218p-684,
     0x1.dc222a7284791p-117, 0x1.faac87e35a93ep-462, 0x1.df8e54eb754f5p-152, 0.0, 0.0,
     0x1.eb395c4976fddp-1000, 0.0, 0x1.910763d94a10ep-622, 0x1.a6499e81ec24ap-559,
     0.0, 0x1.6d97e46d59eddp-238, 0.0, 0x1.3ea15973e4da3p-919, 0.0, 0.0,
     0x1.a9727cc05aae8p-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ea588579efa7p-1021, 0.0,
     0.0, 0.0, 0x1.d163e355e62b8p-1016, 0.0, 0x1.c478bda12ffb5p-978, 0.0, 0.0, 0.0,
     0x1.8db215b4f7b8fp-743, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4688ee2e6ca75p-810, 0.0,
     0.0, 0.0, 0x1.43635619242ebp-883, 0.0, 0.0, 0.0, 0.0, 0x1.2a320e5496f63p-506,
     0x1.f5b3e7bb91dd4p-922, 0x1.65c7f8b0d049bp-796, 0.0, 0x1.5f762d29ec8f7p-834,
     0x1.40516c05c7ba3p-448, 0.0, 0x1.ffa37b7d1374dp-1006, 0.0,
     0x1.50d6943bb7f14p-926, 0x1.11515f45da9adp-125, 0x1.c40e11e3ed711p-333,
     0x1.7430317642db2p-373, 0.0, 0x1.faf65757b3d0bp-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2426070ff4b82p-907, 0x1.b68956c54ea2cp-452, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c39af9f1a5ffp-953, 0.0, 0x1.cec04783c30efp-946, 0x1.8a92db1f71c95p-295, 0.0,
     0.0, 0.0, 0x1.4e2724cfa154dp-226, 0.0, 0x1.17ce28858e266p-856,
     0x1.357eab143df64p-528, 0.0, 0x1.6e653a60b8028p-773, 0x1.57c7ed5a9d0a5p-830, 0.0,
     0.0, 0x1.26554b5a811f1p-483, 0.0, 0x1.29fbd5f37a74p-369, 0x1.db325f2b1101p-755,
     0x1.19755cba90fbcp-898, 0x1.a1101ce8e9a02p-359, 0x1.e5315ae118f11p-402, 0.0,
     0x1.c709ef92ec8bdp-707, 0x1.3792b859fc321p-113, 0.0, 0x1.24f91cb392fb7p-389, 0.0,
     0x1.503911750b34dp-756, 0.0, 0.0, 0.0, 0x1.08e261dfd53c5p-1013,
     0x1.3138a599f8db8p-395, 0.0, 0x1.c0dc677a33985p-800, 0x1.491277bb3ab06p-180,
     0x1.3475b0be7a65ep-799, 0x1.01641770e26d6p-721, 0x1.cc1ee14a3d51p-565, 0.0, 0.0,
     0x1.6f9341e6bda45p-718, 0.0, 0x1.4c3dc1e5d7754p-960, 0x1.29f35eafb472dp-455,
     0x1.bc2d844d7d572p-487, 0x1.810aa2557b93ap-865, 0x1.0a3739b844ed9p-19
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
            tmp1 = Sleef_sinhd1_u10purecfma(tmp0);
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
    printf("Sleef_sinhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
