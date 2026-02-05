/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d1_u10purecfma.c --function \
 *     Sleef_exp10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.6a8937d26b1c2p-103, 0.0, 0x1.58da0147fb0adp-195, 0x1.d42ee5bd2b0a2p-621,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d61d96110bf82p-553, 0x1.5b836b994365dp-722, 0.0,
     0x1.ee8700e9a4c1ep-77, 0x1.998b721715567p-638, 0x1.45a4d04c1c7d6p-20, 0.0, 0.0,
     0.0, 0x1.d06115e583ec6p-410, 0.0, 0.0, 0x1.6b17001a1b435p-970, 0.0,
     0x1.433da495c4bd5p-513, 0.0, 0.0, 0.0, 0x1.23fbc428d2227p-108, 0.0, 0.0,
     0x1.5660fa2245b8dp-517, 0x1.df8aadeae6f8p-504, 0x1.e250e3aa09d8cp-173, 0.0,
     0x1.c67f366ac05f3p-15, 0x1.3dfc1be01348fp-120, 0x1.5671a0ea291f9p-148, 0.0, 0.0,
     0x1.020b0884d5415p-921, 0x1.2188245f78f0dp-815, 0x1.d77533b945a7cp-940,
     0x1.cd1531b164417p-427, 0.0, 0x1.860bfc7ecb191p-330, 0x1.38211a78f908dp-427, 0.0,
     0x1.f71f38350262ep-261, 0x1.1ce55dc00ee06p-525, 0x1.119c8db5a5652p-533,
     0x1.d1396eaa97139p-356, 0.0, 0.0, 0x1.8785a4170020bp-449, 0x1.3ceef95a6fffp-467,
     0.0, 0x1.8f1d4ffe74e37p-424, 0.0, 0x1.33de1292b1cf7p-337, 0x1.fc4d9a4dbfeb8p-627,
     0.0, 0.0, 0.0, 0x1.a7083f388bd7fp-197, 0x1.55f3bc81893f8p-331, 0.0,
     0x1.d489b7e73cce5p-546, 0x1.875f07408aecbp-868, 0x1.efc954d4e86a3p-378, 0.0, 0.0,
     0x1.55692bca93fd4p-767, 0.0, 0.0, 0.0, 0.0, 0x1.6cdaaea357deep-10,
     0x1.a63b5c6076707p-840, 0.0, 0.0, 0x1.02cd5234e86b4p-340, 0x1.e99f6379affafp-879,
     0x1.16fdb64aa5cdfp-547, 0.0, 0.0, 0x1.a88b3632cae64p-98, 0.0, 0.0,
     0x1.f5ad9c20c9e7fp-412, 0x1.20eca691c1757p-61, 0.0, 0x1.a93ef30373493p-463,
     0x1.b1f5cbfe0353bp-244, 0.0, 0.0, 0x1.ca9a4eeaab2fdp-40, 0x1.c705c46fb0c1p-1006,
     0x1.1ca42578ce2bp-33, 0.0, 0x1.c50056952c012p-424, 0.0, 0x1.e4e120fd01c9bp-450,
     0.0, 0.0, 0x1.445009236d103p-522, 0x1.6089b17ac49b5p-846, 0.0, 0.0,
     0x1.141a1b72a51d8p-971, 0x1.692c11876a349p-327, 0x1.22ba53efb46d4p-1007, 0.0,
     0x1.8f85518a776fep-577, 0x1.39dae384e9a2bp-183, 0x1.98940972c470ep-425, 0.0,
     0x1.b346f69098ed1p-190, 0x1.e0974a7e00723p-655, 0.0, 0x1.29ea8247b2c33p-693, 0.0,
     0x1.a397211a4795bp-285, 0x1.8fff84b868ed9p-512, 0.0, 0x1.248300c82c309p-9,
     0x1.897929ae6ff2cp-814, 0x1.3066bd15130f8p-933, 0x1.cd977ec84604fp-652, 0.0, 0.0,
     0x1.f8ac17f7fb117p-223, 0.0, 0x1.92468f05591b7p-157, 0x1.86e247e358ccep-538, 0.0,
     0x1.a614fa9194ac8p-956, 0.0, 0x1.d2cb315e7bccp-533, 0x1.6d97c12a756e5p-231, 0.0,
     0.0, 0x1.17f386f7d193ep-112, 0x1.ac7804452ccadp-843, 0x1.2d7381fee3528p-883,
     0x1.64e38b75d26e3p-395, 0x1.f21a567e6f567p-47, 0x1.66b9c8f127c3bp-161,
     0x1.6973518ad75a8p-962, 0x1.63a9306822379p-873, 0.0, 0x1.61b175a43d4bbp-364,
     0x1.de36899075493p-362, 0x1.7000d673bbdddp-869, 0x1.1e79b3f5d52ccp-931, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.930667df25a23p-94, 0x1.2cb651f503647p-622,
     0x1.7a13d889e019ap-589, 0.0, 0.0, 0x1.d75683f2fcc51p-26, 0x1.a4957137d1463p-388,
     0x1.0de39ad5834dfp-338, 0x1.ab9136006aed8p-805, 0x1.e36d83af8121bp-122,
     0x1.bddc5910789d8p-480, 0x1.771cb51eb8766p-761, 0.0, 0x1.18e8a94ba17b1p-568,
     0x1.5c9fe5494cb76p-521, 0x1.5bef383994bf2p-101, 0.0, 0x1.4e6643f5e361p-724, 0.0,
     0x1.e593aee242bffp-182, 0x1.bca14723fd0fcp-876, 0.0, 0x1.feb797147cbbfp-538,
     0x1.af904263ff808p-846, 0x1.e1c1d72c25eb1p-395, 0x1.e72faaf9b059p-427,
     0x1.2ed2b8e881ce6p-696, 0.0, 0x1.8d93c1146b415p-773, 0.0, 0.0, 0.0,
     0x1.6b3f80e75447dp-258, 0x1.0a515e282e8adp-702, 0x1.a2ac4cb1c062cp-843, 0.0,
     0x1.34fc059d93058p-52, 0x1.b012cab397795p-215, 0x1.baa2f2730aa81p-200,
     0x1.aa717bc5d769p-811, 0.0, 0x1.ba8bbab4d1f19p-236, 0x1.6506b8eb2cf8fp-446,
     0x1.43d363a1a456ap-9, 0x1.03ddbd74423c9p-502, 0x1.f3f7f20ae0423p-249, 0.0,
     0x1.18e475e51ede3p-336, 0.0, 0x1.f389eb1fdb115p-648, 0x1.85f336c1721dep-912,
     0x1.a522ab7ce980fp-430, 0.0, 0.0, 0.0, 0x1.519b6f02269dcp-219,
     0x1.41301f070d687p-476, 0.0, 0x1.8f2a2f2c3ec24p-871, 0.0, 0x1.c1d4a80279274p-257,
     0x1.f6e8dd791da81p-520, 0.0, 0.0, 0x1.cef6e7ab937bcp-318, 0.0, 0.0,
     0x1.3670a06ed3ec2p-65, 0x1.e3a30c3c68ba9p-797, 0x1.496cb6a88e061p-10, 0.0, 0.0,
     0x1.026ee19b14599p-304, 0x1.8eff41648f7d2p-501, 0x1.5941931d2efadp-1000,
     0x1.26b93694368b3p-462, 0x1.04783808be3c9p-27, 0.0, 0x1.f034198a6add6p-806, 0.0,
     0x1.adce99e11f5a4p-825, 0.0, 0.0, 0x1.011d55c978ef5p-260, 0.0, 0.0,
     0x1.d11f6a765a69cp-945, 0x1.95b8b464008a5p-39, 0.0, 0x1.bb8c33626c519p-296,
     0x1.a3a1f9b74cdbp-451, 0.0, 0x1.c8670a3eb8eabp-311, 0.0, 0.0, 0.0,
     0x1.b447002000b5ep-583, 0.0, 0x1.e1c667c1c5e08p-705, 0.0,
     0x1.e2747181c9aa9p-1021, 0.0, 0x1.5c0942a875137p-595, 0x1.e9de0f4c8dbf5p-968,
     0x1.ffe3932297929p-33, 0x1.d616468fc83c3p-440, 0.0, 0x1.4514057e6021p-65,
     0x1.903d3b94ceeaep-504, 0x1.58dad8c3275p-658, 0.0, 0x1.997a50b446146p-58, 0.0,
     0x1.93a422da1dd6dp-360, 0.0, 0x1.ae776ad6cd5fdp-323, 0.0, 0x1.cd74a3f962d09p-735,
     0x1.8beee9dd7eeffp-690, 0.0, 0.0, 0.0, 0x1.a01ab404d321bp-102, 0.0, 0.0,
     0x1.73664a881d081p-937, 0.0, 0.0, 0.0, 0.0, 0x1.cd006510a515ap-900,
     0x1.417c7b5abcb69p-932, 0x1.f8e29f8f7105cp-1019, 0x1.ee46c7397ddedp-519, 0.0,
     0x1.342e5167e70acp-72, 0x1.e836b946ca068p-778, 0.0, 0.0, 0x1.fd93dfdf5f986p-797,
     0.0, 0x1.7e8890814853p-841, 0x1.741083139350ep-115, 0.0, 0.0, 0.0, 0.0,
     0x1.0efc155d5444ep-506, 0x1.c479cc3564cb5p-785, 0.0, 0x1.390804c2049b7p-986, 0.0,
     0x1.f3576c43e799fp-512, 0x1.6d47c74a2c7e5p-53, 0.0, 0.0, 0.0, 0.0,
     0x1.1b1ce0e70215ap-607, 0x1.bfe16216eafdfp-569, 0x1.e69247120e1b6p-899, 0.0, 0.0,
     0.0, 0x1.64d17cfb08125p-63, 0.0, 0.0, 0.0, 0x1.5944ce2022001p-963,
     0x1.4abe18b95b6b1p-947, 0x1.1e02db1d4cf2bp-769, 0.0, 0.0, 0x1.c67d4eaddfc6bp-660,
     0.0, 0x1.5bff6f4cd53e3p-649, 0x1.7c446ad2cc6a3p-400, 0.0, 0.0, 0.0, 0.0,
     0x1.b58bf202c03a9p-179, 0.0, 0x1.1ccdc1b6166a8p-444, 0x1.e9153ab2983b3p-406, 0.0,
     0x1.2ab871348609bp-992, 0x1.60af06d69eb64p-896, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb43d88e5402ap-837, 0x1.fd18ab8d6b87bp-1003, 0.0, 0.0,
     0x1.5d669f93c37cbp-389, 0x1.57da3cdc530e7p-662, 0x1.a82ee4dfb397p-771,
     0x1.a8ee227ab3ea8p-938, 0.0, 0x1.757453dffa05bp-229, 0x1.04a30fe99457ep-489, 0.0,
     0x1.2e52966dd0733p-915, 0.0, 0x1.7a109e2aa0ae2p-118, 0x1.2c0ba25b3eb6ap-237, 0.0,
     0x1.c6fc7153f2433p-526, 0.0, 0.0, 0x1.b2efefab2442ap-800, 0x1.aab4d2591a5b7p-666,
     0x1.9614678a5edd3p-379, 0x1.826e8ec0aee3p-150, 0x1.7d8b4385bde06p-193,
     0x1.cf68ae80cc302p-477, 0.0, 0x1.1d931d560891p-408, 0.0, 0.0,
     0x1.e3158e73d2856p-575, 0.0, 0x1.c8c663e286fdcp-12, 0x1.8458b09579c97p-329,
     0x1.2e7c4fdf8df0ep-522, 0.0, 0.0, 0x1.d21eacd8f1228p-915, 0x1.3ea22d938123ap-325,
     0x1.9046f5159ace7p-729, 0x1.2f5792a938c18p-372, 0.0, 0.0, 0.0,
     0x1.74908e708a2c1p-701, 0.0, 0.0, 0x1.dcba04e960968p-725, 0x1.a0c71eda9bb75p-867,
     0x1.c6e665af33348p-115, 0.0, 0.0, 0x1.e35dab235383p-246, 0.0, 0.0,
     0x1.b04e97ad3c1dp-404, 0x1.61536bf6b0ebap-125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.07de193882033p-1014, 0.0, 0x1.4e1b1b7e28d12p-782, 0.0, 0.0,
     0x1.8be7bb95362bap-150, 0.0, 0x1.4602b7ffd07c9p-439, 0.0, 0x1.983739ec52fb4p-933,
     0.0, 0x1.edbe756c339dap-189, 0.0, 0x1.3d1efa79460b1p-449, 0.0,
     0x1.7601813c109b6p-233, 0x1.90b322f277444p-511, 0.0, 0x1.17701ac80338ap-195,
     0x1.5a3d44ca322c4p-902, 0.0, 0.0, 0.0, 0x1.56423c56d25e7p-446,
     0x1.9828b94341c2bp-589, 0x1.a69f72a257274p-174, 0x1.20d97692d137cp-602,
     0x1.b8f9e563475d4p-343, 0.0, 0.0, 0x1.6347544d63c44p-695, 0x1.513a86abf204dp-572,
     0x1.4a0455ce35db1p-437, 0x1.e36be280e4af9p-145, 0.0, 0x1.5eed1aa3b25dp-214,
     0x1.07ff35760214ap-158, 0.0, 0x1.6cb832c496fa3p-1019, 0x1.03b99846eedecp-426,
     0x1.c5ec1e241eaa7p-991, 0.0, 0x1.be0757cd1741p-149, 0.0, 0x1.f36577dee93dep-910,
     0.0, 0x1.756e0ea88d406p-723, 0x1.b34952627849p-939, 0x1.f471b49a4c831p-151,
     0x1.164c822a60abp-394, 0.0, 0.0, 0x1.6e2b87a36a4b7p-36, 0.0,
     0x1.8f00ef288c1d9p-503, 0x1.6dfa74d17150bp-353, 0x1.2f3857809b8f6p-142, 0.0,
     0x1.42db0529e89d6p-505, 0x1.5b7e10542152fp-445, 0x1.d910bd1293b4p-438,
     0x1.608a339500865p-928, 0.0, 0.0, 0x1.3e6c1295e0778p-271, 0x1.9d7db6d3a2313p-122,
     0x1.65d933231ef35p-421, 0x1.d426382379e02p-438, 0.0, 0x1.230d5a4858091p-990,
     0x1.8db67293588dbp-756, 0.0, 0x1.70b3f57155ac4p-803, 0.0, 0x1.102e100d6de81p-541,
     0.0, 0x1.70ff26a053486p-853, 0.0, 0.0, 0x1.a4b71fc669208p-256,
     0x1.955d5f45e1a2ep-581, 0.0, 0x1.3734e1f5e501p-5, 0x1.ab9b6d700974ep-34,
     0x1.1359838e00693p-796, 0x1.47bfb7d1adc4fp-124, 0.0, 0x1.6ddc6af523122p-128,
     0x1.603d86ec023efp-526, 0x1.87d757a123b69p-987, 0x1.bc0f241f74975p-44,
     0x1.eadeaedfbc294p-685, 0x1.7a7ef498296d9p-85, 0.0, 0.0, 0x1.a5089090dcab7p-835,
     0.0, 0x1.7a46a1c48d556p-145, 0.0, 0x1.b02b0fb9e518fp-854, 0.0, 0.0,
     0x1.df6790946d98dp-646, 0.0, 0x1.129daf5c3fcb2p-409, 0x1.f3f04fbca7cb7p-938, 0.0,
     0x1.0cbe5cec2753p-983, 0.0, 0.0, 0.0, 0x1.9db9a1e951be6p-911,
     0x1.6e3e7e684a1e1p-605, 0x1.592803cbbe6f1p-22, 0x1.78b3938d5b3d1p-12,
     0x1.8d0a6c023218ep-785, 0.0, 0.0, 0x1.10b746a0f9436p-581, 0.0,
     0x1.fd388e7a0c3f1p-170, 0.0, 0.0, 0x1.82ac2e6f1f888p-641, 0x1.8d4a550e7fa26p-429,
     0x1.f69a02507b906p-905, 0x1.bea147430310cp-886, 0.0, 0x1.2ffd021eec343p-427, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1559a457d11f3p-220, 0x1.ef82510617f02p-759, 0.0,
     0x1.ccb766ed207ecp-186, 0x1.5e164c4381cb8p-149, 0x1.695154fbcae33p-506, 0.0, 0.0,
     0x1.a25fa2d41b6f9p-516, 0x1.86b33e1e08be2p-143, 0.0, 0x1.c735e3d477917p-393,
     0x1.1e7a85cd5cf47p-113, 0.0, 0x1.86581f069be0bp-361, 0.0, 0x1.7728312541b2p-451,
     0x1.505e9b25a7d3ep-664, 0.0, 0.0, 0.0, 0x1.8036d18f00431p-93, 0.0,
     0x1.7865fd2e19938p-761, 0.0, 0.0, 0x1.a7d712f3f8bfp-159, 0x1.e5d0640cd9382p-156,
     0x1.b4bf9b5630e74p-406, 0.0, 0x1.be820e17f33c2p-541, 0.0, 0x1.f92a3186745b3p-426,
     0.0, 0x1.f21498e16cffep-813, 0x1.5d0b98cd0539p-491, 0x1.d0222b084f6a9p-204,
     0x1.59d9ad5d57569p-394, 0x1.56dc5526e5e1cp-314, 0.0, 0x1.f2ac720272ed7p-618,
     0x1.16a7a5aef3385p-312, 0.0, 0.0, 0.0, 0x1.54f7c6dc9dfc1p-966,
     0x1.3143501248146p-987, 0.0, 0.0, 0x1.0a45fe377ff49p-187, 0.0,
     0x1.fb6d71f6e0ecep-564, 0.0, 0.0, 0.0, 0.0, 0x1.808af55615149p-338, 0.0, 0.0,
     0.0, 0x1.6be3c98a5feacp-403, 0.0, 0.0, 0.0, 0x1.14909e7fbde3ep-198, 0.0,
     0x1.f37c3b5611481p-193, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3985bb64d6ac9p-386,
     0x1.3658dece22732p-682, 0x1.9889b56c13a5ep-423, 0x1.dce0a91e3f4cfp-914,
     0x1.738f555bf8b61p-83, 0x1.33381537e5d3ap-185, 0x1.ea4197d906403p-190,
     0x1.f459b2b7e7f62p-564, 0.0, 0x1.d0d7ab5b18885p-252, 0x1.ad21fa58091d8p-795,
     0x1.eaae7d13c3ea4p-804, 0x1.b27012857b4bep-393, 0.0, 0x1.2e518b7873dfep-97,
     0x1.3c7e45a0840b1p-397, 0.0, 0x1.a7bca554b567ap-283, 0x1.355da5d68f3c6p-996,
     0x1.e23524b83cb84p-174, 0.0, 0.0, 0.0, 0x1.55b03a721fbe2p-615,
     0x1.af8aab20dc8a6p-99, 0x1.154d12482acaap-546, 0.0, 0x1.ac471fee56c0bp-204, 0.0,
     0.0, 0x1.8c7625fb1f4e4p-593, 0.0, 0x1.cfb2fad091178p-764, 0.0, 0.0,
     0x1.f829eae10ff62p-835, 0x1.bd083eee3eda5p-231, 0.0, 0x1.b2129d1bde72bp-868, 0.0,
     0x1.2cefad9fdcb93p-83, 0.0, 0x1.9bf2d02fdffcfp-307, 0x1.4aec288f0a5f8p-886,
     0x1.9acfb430996e8p-1020, 0.0, 0x1.4fd5759dc7b1dp-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37cf63bfe1b83p-453, 0x1.0dd4bee296c78p-609, 0.0, 0.0, 0.0, 0.0,
     0x1.f7c56f39655eep-852, 0x1.d976fbefaa936p-95, 0x1.acd5738ef6791p-80, 0.0,
     0x1.2c7a00dcf0d2p-560, 0x1.f65c6261f2625p-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.315dd52dc6f8bp-240, 0x1.b63cdcd6ea06p-475, 0x1.ac5cced18ffbbp-332, 0.0, 0.0,
     0.0, 0x1.401f7587446d5p-367, 0x1.407c5dd0acc62p-999, 0x1.fb103c93a1645p-942,
     0x1.f4ef70f1708fap-364, 0x1.2c4756f7afe2ep-355, 0.0, 0.0, 0.0,
     0x1.e707f45a7e56bp-906, 0x1.5a8948d306ca5p-825, 0.0, 0x1.d723c3e210db7p-846, 0.0,
     0.0, 0x1.89b58192a9e6fp-126, 0.0, 0.0, 0.0, 0x1.0aa315c2b9d1bp-772,
     0x1.e70dc904a33cp-1014, 0.0, 0x1.b30b8b0320d9ap-309, 0.0, 0.0,
     0x1.41f7ad2a174e7p-1, 0x1.ceaba20a6edd2p-695, 0.0, 0x1.0c2c4c35982d7p-311,
     0x1.6b336734a3efcp-428, 0x1.ea878227793bap-821, 0x1.0f423d01bf4f4p-446, 0.0, 0.0,
     0.0, 0.0, 0x1.91d60079d21b8p-248, 0.0, 0.0, 0.0, 0.0, 0x1.b29de1b835d7dp-524,
     0x1.700bddb9e5efbp-939, 0.0, 0x1.d4f73399b7b79p-128, 0.0, 0x1.cae38c908b8bdp-100,
     0x1.19830dd99cdc4p-293, 0.0, 0x1.a777ea6ee8834p-37, 0x1.40aacdf26b938p-571,
     0x1.05040e8567093p-344, 0x1.5d96ab877fb2cp-747, 0.0, 0.0, 0x1.afe64c1066bep-741,
     0x1.27ef47798a8b1p-453, 0.0, 0.0, 0.0, 0x1.6a73f6157c3a3p-909,
     0x1.863894b3e4b82p-875, 0x1.b9bfc15a499aap-520, 0x1.edf779b4fdb6dp-915, 0.0,
     0x1.1e6691c8cf77p-753, 0.0, 0.0, 0.0, 0.0, 0x1.3c168b8fcd663p-915, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4786e15d93c4bp-214, 0x1.a0e3ff66fab9ap-337, 0x1.f3b244df4bd29p-45,
     0x1.c3b87e631c337p-177, 0x1.4f5fac0b9aab2p-687, 0.0, 0x1.850e862dc24acp-812, 0.0,
     0.0, 0x1.7c4d7cd711f25p-253, 0x1.f97016e92ceap-555, 0x1.c5c2530d0511dp-688, 0.0,
     0.0, 0x1.84e8ca265919p-758, 0.0, 0.0, 0.0, 0.0, 0x1.fa9cd0f71c69ep-957, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.af03883cd8d31p-865, 0.0, 0x1.314f1b8ca6f9ep-925, 0.0,
     0x1.aaa6a5d0fb595p-455, 0x1.f4fb0409fca45p-929, 0x1.0ec23a92ff169p-182,
     0x1.f312e8655b71p-854, 0x1.b82e1fb88d8e7p-447, 0.0, 0.0, 0x1.54b4a29c513cbp-204,
     0x1.e7ba504f5b337p-683, 0.0, 0x1.5454d590f6434p-893, 0x1.074857ce5f072p-336,
     0x1.68bbee8450dd9p-66, 0x1.ece6ca19877b2p-1022, 0.0, 0.0, 0x1.2493fe6bf689ap-656,
     0.0, 0.0, 0x1.4c0356109f7b3p-158, 0.0, 0x1.e880972641ee3p-69,
     0x1.841ee2720f371p-347, 0.0, 0.0, 0x1.46e1f6ea1645ap-807, 0.0, 0.0, 0.0,
     0x1.f40e8f4ca622ap-137, 0.0, 0.0, 0x1.e78894e57d917p-500, 0x1.33a1fa0dabd8cp-473,
     0.0, 0x1.7eb83bb02190bp-10, 0x1.05e2297fdaa6p-66, 0x1.ed1c5c5284355p-148,
     0x1.a2caeaf2f0fd9p-420, 0x1.982e6b7dbbp-995, 0.0, 0x1.b377d1ba26d08p-506,
     0x1.e18e9529c58ffp-850, 0x1.4b0c8f2414d0ep-797, 0.0, 0x1.0d9209a6e08ap-966,
     0x1.67ae4cf9c45dap-255, 0.0, 0x1.9c25412e0f885p-983, 0x1.f8695681bae54p-664,
     0x1.aef77658e2fdap-1020, 0x1.bf7568ad4940ep-168, 0.0, 0x1.63b851217d0bfp-259,
     0.0, 0x1.503fd3e6ecb1fp-377, 0.0, 0.0, 0.0, 0x1.528d26a3974e6p-907,
     0x1.b4599880944d3p-501, 0.0, 0.0, 0x1.d496a267af6f3p-193, 0.0,
     0x1.671c1fa0e72bdp-113, 0.0, 0.0, 0.0, 0.0, 0x1.3874f160e3017p-165, 0.0,
     0x1.d69e4b1cf3f5ap-874, 0.0, 0.0, 0.0, 0x1.df6c4e76eadedp-822, 0.0, 0.0, 0.0,
     0x1.6ad85dfd3a67bp-439, 0x1.2e2ea3f2eaef2p-311, 0x1.6f98ad6e77a63p-12,
     0x1.8dc1380bb73ecp-523, 0x1.27a6ad4b86aa2p-448, 0.0, 0x1.bc69fcebe789ep-382,
     0x1.0825490035be1p-797, 0x1.71dcbfb8ed04ep-882, 0x1.1a5260e4f6871p-525, 0.0,
     0x1.364eb8c7b4bfcp-475, 0x1.de373d35459cp-649, 0x1.5beb912549c62p-193, 0.0, 0.0,
     0x1.01e3fb4727b41p-660, 0x1.34f80a37c7b9fp-718, 0x1.d4cb580e5e1fep-42,
     0x1.1b8d984e42b94p-146, 0x1.f2bba618e0633p-698, 0.0, 0.0, 0.0,
     0x1.184975d9e4d61p-712, 0x1.7d9a69a614fa3p-262, 0x1.37cd273dd363ap-701,
     0x1.a9651eda5dda7p-182, 0x1.24bb73e2f688cp-541, 0x1.53e9323992bccp-803,
     0x1.32c713bcd7789p-200, 0.0, 0x1.96f1338aac441p-272, 0x1.80f424885cdaep-366, 0.0,
     0x1.7e3f3be37559fp-203, 0.0, 0x1.11d3db10b42ecp-797, 0.0, 0.0, 0.0,
     0x1.aae89611cc094p-124, 0.0, 0x1.54bfdbca2b388p-90, 0.0, 0x1.4a1383b4afd45p-927,
     0.0, 0x1.8a42edb2d0d92p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e9e32f7ac9b7p-43, 0.0,
     0x1.ceba988eefffbp-841, 0.0, 0x1.4edd4e3cc9b27p-717, 0.0, 0x1.533949e705bcp-735,
     0x1.129309198233p-44, 0.0, 0.0, 0x1.6c7683430498ap-998, 0x1.406947e4a2004p-876,
     0.0, 0x1.114ff1bc56ed6p-354, 0.0, 0.0, 0.0, 0x1.7cbd08a15e4d1p-804,
     0x1.83e88b1271134p-550, 0x1.0903e9e72004ap-382, 0.0, 0.0, 0.0, 0.0,
     0x1.0770f16f8ccaep-50, 0x1.3c999af98da7bp-865, 0x1.f7bed6395552bp-286,
     0x1.da077635ec1f1p-480, 0x1.897413a51cda3p-291, 0x1.61cbac287d024p-708, 0.0,
     0x1.fcea81187c49dp-359, 0.0, 0x1.0ab744077195dp-818, 0x1.d142f57db2c5bp-882,
     0x1.7aaf9670c097fp-871, 0.0, 0.0, 0x1.5ec1a45e2be55p-556, 0x1.98bf2cce3207p-400,
     0x1.5ec154e9628b8p-939, 0x1.5d9c14b95c5a3p-87, 0x1.9e14d11efa452p-470, 0.0, 0.0,
     0x1.7577d0eab315bp-392, 0.0, 0.0, 0x1.f6c192a54a5aep-962, 0.0,
     0x1.235463607f22ep-207, 0x1.3442eb32d5686p-213, 0x1.54d0f8bbb5936p-623,
     0x1.f9ee1558248d8p-890, 0x1.432df59985617p-709, 0x1.0a8f0f24a3fp-375,
     0x1.0ab7c491b04d6p-474, 0.0, 0x1.773cebe56c4cp-651, 0x1.0d1089b144dffp-429
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
            tmp1 = Sleef_exp10d1_u10purecfma(tmp0);
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
    printf("Sleef_exp10d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
