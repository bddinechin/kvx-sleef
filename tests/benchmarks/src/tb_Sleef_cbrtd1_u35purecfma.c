/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd1_u35purecfma.c --function \
 *     Sleef_cbrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.ee46e2ec2f2afp-601, 0.0, 0x1.680f780865341p-660, 0x1p0,
     0x1.4eceb778b0e44p-974, 0.0, 0x1.462aff8ff9929p-406, 0x1.15f343ca8e84p-161, 0.0,
     0.0, 0.0, 0.0, 0x1.43b9659fae822p-419, 0x1.5131e931c1ff6p-973, 0.0,
     0x1.14b2a2ae34961p-705, 0x1.c78732b2fe083p-766, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5be548c0a89e4p-145, 0x1.4a554eec60d5p-587, 0x1.e018200c7311p-740, 0.0,
     0x1.9af5a480ca762p-474, 0x1.c7028fcfc489fp-438, 0x1.d478ac9574b8p-360,
     0x1.33f69bd00d0e1p-934, 0x1.5f8ea5c18ff86p-57, 0.0, 0.0, 0x1.9f989e77c1abdp-770,
     0.0, 0x1.21f0dc81725ccp-140, 0.0, 0x1.211feeaec00bep-822, 0x1.8fbcad12b33abp-946,
     0.0, 0x1.df6911faa9307p-58, 0.0, 0.0, 0.0, 0x1.9b0c80326d8bep-131,
     0x1.d9474dcc7122bp-588, 0x1.3a92d3544f38ap-80, 0x1.938e433294326p-964,
     0x1.28d0b931374bap-207, 0.0, 0x1.e05ead880d289p-53, 0.0, 0.0,
     0x1.f89cfa5b07321p-459, 0x1.fdb15a375d546p-253, 0x1.9f9d14b13a909p-261, 0.0, 0.0,
     0x1.125324d6bd013p-535, 0.0, 0x1.ce62f6c7b1b7ap-770, 0x1.f143885768d29p-511,
     0x1.bcd5c8ad625f7p-28, 0x1.3a5bd1ebe3ec9p-928, 0x1.28146c8bf854ap-485,
     0x1.b3c9d01db4c11p-68, 0.0, 0.0, 0.0, 0.0, 0x1.9c844d1925d6cp-624,
     0x1.93654ceb51d2dp-67, 0x1.54c8adbad053fp-446, 0.0, 0x1.22589e1628d3ep-641, 0.0,
     0x1.98f6160d1c233p-742, 0x1.9d4df50059308p-916, 0x1.88f68a6bfd876p-554,
     0x1.21ddf249ac7c9p-106, 0.0, 0x1.fe7b109f8fb01p-601, 0.0, 0.0, 0.0,
     0x1.07a52e4bf1db7p-523, 0.0, 0x1.77b673be2f9aep-124, 0.0, 0x1.759ad3699dfa2p-415,
     0x1.ebea43dcbc9d5p-370, 0.0, 0x1.c36a471b8b49bp-376, 0.0, 0x1.a11423da326e7p-965,
     0.0, 0x1.cf066366e544ap-177, 0x1.d65921772e4a3p-1012, 0x1.dfa958e1a11cep-301,
     0x1.b38879767d936p-780, 0x1.27e47e5f37a41p-921, 0.0, 0x1.3ae6851c4c92ap-321,
     0x1.466515c176481p-463, 0x1.5fd5538902e2dp-120, 0.0, 0x1.8cbf118d41d41p-358,
     0x1.fc7a656254cb7p-87, 0x1.0a43c85941f6fp-855, 0.0, 0x1.7c77d9fcd19bbp-521, 0.0,
     0x1.1ae06685db2cap-947, 0x1.553559b69e4e9p-535, 0.0, 0x1.eb23e1a868b76p-504,
     0x1.61f8d520992dap-159, 0x1.e802b57cefcd9p-543, 0x1.c9063e70f16aep-932,
     0x1.cd1db17d2d4a8p-791, 0x1.6351d24655e17p-739, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c24d3f6b46772p-280, 0x1.7026d5241e20ep-977, 0x1.66346e380a7f8p-312,
     0x1.85301543005c8p-930, 0.0, 0x1.eed83367643c2p-411, 0x1.fbc694f425857p-996, 0.0,
     0.0, 0x1.9089ac5b086bfp-38, 0.0, 0x1.a272bf9144897p-689, 0x1.e22d3c5604a62p-332,
     0x1.52a6a3df93b75p-157, 0x1.8915736b3ea5bp-670, 0.0, 0x1.711439319ed3bp-106, 0.0,
     0.0, 0x1.fc92f8c1133a9p-900, 0x1.f37ddce4e12afp-887, 0.0, 0x1.acff10d63f2bp-393,
     0.0, 0x1.c5e44137ad291p-187, 0x1.1eb6e79163e7cp-455, 0x1.130205c2a58f7p-202, 0.0,
     0.0, 0.0, 0x1.f0769e756245bp-178, 0x1.41b0d833eff8ap-916, 0x1.3f29cadf37954p-135,
     0.0, 0x1.3aabd4899b453p-7, 0.0, 0x1.1b6bc7f90e7fbp-42, 0.0, 0.0,
     0x1.d702dd0988fcfp-766, 0.0, 0.0, 0x1.f745b93c21a72p-387, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4f9c47cfad0bcp-950, 0.0, 0.0, 0.0, 0x1.0a7e829875595p-459, 0.0,
     0x1.94e6fe14b0af1p-18, 0x1.e5a47db6f1fc2p-207, 0.0, 0.0, 0x1.9e41a902869b1p-178,
     0x1.e555a02d430d4p-1020, 0x1.9f9c49e43a70cp-666, 0.0, 0.0, 0.0,
     0x1.2e4abafde97b2p-533, 0.0, 0.0, 0x1.3a03a0dee3bddp-281, 0x1.af2118e25e101p-118,
     0x1.28a1c6af92d4p-434, 0x1.078c3bd060c6ep-84, 0x1.ebf77f7df42d7p-929,
     0x1.467deb818efb1p-505, 0x1.24d69c95d523ap-459, 0.0, 0.0, 0x1.c180fc3cac0cp-387,
     0x1.a27906b3cb2f2p-969, 0.0, 0x1.2ccf464213ecap-935, 0x1.99f6d8b8692ccp-10, 0.0,
     0.0, 0x1.5045b3cc04ccbp-659, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd75d69efcab2p-279,
     0x1.d72deb1705a7p-397, 0x1.c7970e1026ff6p-632, 0.0, 0.0, 0.0,
     0x1.cc8e037a4462ep-174, 0x1.76740b09878dep-351, 0.0, 0.0, 0x1.9521ccd8a987fp-345,
     0.0, 0.0, 0x1.7f11355ffebdbp-711, 0x1.149211d6b842cp-561, 0x1.52d1286fd4f5cp-670,
     0.0, 0x1.0c811e812c0f9p-749, 0.0, 0x1.c8eca4cf05975p-688, 0.0, 0.0, 0.0,
     0x1.b57974d234f42p-543, 0.0, 0.0, 0x1.260bb4585a6d3p-156, 0.0, 0.0, 0.0,
     0x1.1dec1b83e695p-746, 0x1.0b631f052032cp-838, 0.0, 0.0, 0x1.f013ac08adc25p-583,
     0.0, 0.0, 0x1.fe6b9d746d8c2p-52, 0x1.800ba66423ac4p-159, 0x1.0788369125d53p-771,
     0.0, 0.0, 0x1.65a859d569f58p-1008, 0x1.d75e68d0dd8c3p-224,
     0x1.5144df6392171p-642, 0.0, 0.0, 0x1.358cf9a9a3bf6p-462, 0x1.e84c1801dcdd7p-517,
     0.0, 0.0, 0x1.15081779bdc5cp-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8eabcb285773p-725,
     0.0, 0x1.aba83a0ed21b4p-648, 0x1.c8872de0c4bf2p-484, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d9df297c32bfep-164, 0x1.1e49e6a3b80b6p-512, 0.0, 0.0,
     0x1.31053c79563a3p-145, 0x1.9c620d44a8a75p-542, 0x1.2b6f2dda12cb3p-378,
     0x1.2bef04ae8cf38p-526, 0.0, 0x1.4f9647266b569p-300, 0x1.a8d6c8adf9f27p-906, 0.0,
     0x1.542c3cffed29ap-344, 0x1.284c2eaacc985p-264, 0.0, 0x1.a7262857b2824p-277,
     0x1.e85ac91fea78ep-406, 0x1.cfb97c5b2922fp-19, 0x1.5665c45715c93p-603,
     0x1.3db9f30141a37p-697, 0.0, 0.0, 0.0, 0.0, 0x1.5d6a0f5ebd011p-315, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dea8b89c4d184p-696, 0.0, 0.0, 0.0, 0x1.3e58ad0ab4f3fp-490,
     0.0, 0.0, 0x1.f278d3a69f7edp-372, 0.0, 0.0, 0x1.3fab89cc13707p-525,
     0x1.67917346b700ep-744, 0.0, 0.0, 0x1.92f3761c37d5bp-262, 0x1.c096eddf550aep-156,
     0.0, 0x1.b182dd4d8bda7p-383, 0x1.3801d29b8befbp-234, 0x1.da0e7e7a82c4bp-102,
     0x1.c9906f7c28241p-290, 0.0, 0x1.6300c8c00245ap-116, 0x1.9b48695280639p-290,
     0x1.31ee933511ccep-411, 0x1.a70fc1513da08p-59, 0x1.8fd6cf277bb44p-535,
     0x1.d6a6b9b0c8a33p-1010, 0x1.3583b479bd074p-959, 0x1.9aefdf7363cfcp-827,
     0x1.723840872f31ep-921, 0x1.3154c8102aa4p-323, 0.0, 0.0, 0x1.19b5b9fe20da2p-287,
     0.0, 0x1.ee7ca6769dbecp-816, 0x1.d8e0d5ea4fb7bp-470, 0x1.d44da0cb48bfdp-844, 0.0,
     0x1.fb43f54a94543p-889, 0.0, 0.0, 0x1.0481e91819006p-211, 0x1.7b81b4132c531p-982,
     0.0, 0x1.fd88f956d9237p-605, 0.0, 0x1.2eddf6473d463p-474, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.19894b2bbcbb9p-441, 0x1.ad0e59d24ed61p-324, 0.0, 0x1.fad5be4ac5821p-877,
     0x1.c100a90886cf8p-341, 0.0, 0x1.e6340476c6a42p-776, 0.0, 0.0, 0.0,
     0x1.a54ee979199fap-322, 0x1.bf39e4bb5aa9ap-705, 0x1.8f0c6014cb00fp-151, 0.0, 0.0,
     0x1.c03dfc391ce21p-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a94724c89549p-864,
     0x1.f0fa9478cc9e2p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d92ad8152a47dp-806,
     0x1.60d20585a8416p-303, 0.0, 0.0, 0.0, 0x1.b4e699ecce22ap-593,
     0x1.ba61eff5d539p-867, 0x1.316f5b8144db5p-283, 0x1.452f9fba5a81p-103, 0.0,
     0x1.3160ee74afebep-351, 0x1.9e81a46ba4fb4p-596, 0.0, 0x1.78ad35aa5e34bp-999,
     0x1.20b164ce79a0ep-773, 0x1.5fabd2bacb489p-478, 0.0, 0.0, 0.0,
     0x1.6619ecf374de4p-522, 0.0, 0.0, 0x1.56c6cbfaa5b5bp-399, 0x1.1ccfe485e4bb8p-289,
     0.0, 0x1.594b1832b318fp-251, 0x1.11d2627611e35p-532, 0.0, 0x1.de75b9d6fb7bfp-313,
     0.0, 0.0, 0x1.5d35afefdf38cp-611, 0x1.68c17fcf2bdc2p-6, 0x1.7a83ca4f00c29p-85,
     0x1.5fc63d7394388p-66, 0x1.5e77730e327e5p-504, 0x1.1b94291f3d9aep-640,
     0x1.6de2048798f6dp-553, 0x1.6c1f2bc78efe8p-240, 0x1.09b0e2e7c23a3p-148, 0.0, 0.0,
     0.0, 0x1.9ab52154b9c8ep-142, 0.0, 0x1.721a247b96627p-733, 0x1.d187d52d96085p-217,
     0x1.bc5dae4685e69p-489, 0x1.66b4ce308d6c1p-276, 0.0, 0.0, 0x1.875d46edd50cap-686,
     0x1.9a1a7ef37b2efp-710, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a5c9b1396df2p-501,
     0x1.14454a25db12dp-669, 0.0, 0.0, 0.0, 0.0, 0x1.3e84c6ed95ed2p-308,
     0x1.8af1329ff8d4dp-539, 0.0, 0x1.ab530aebced97p-767, 0.0, 0.0, 0.0,
     0x1.878fddeebaee4p-841, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a10948af54878p-654,
     0x1.1937242ff5c1ep-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.20870cb7ae2afp-951, 0.0,
     0.0, 0x1.39db6149185bbp-323, 0.0, 0.0, 0x1.064c28efb509fp-1012,
     0x1.2aebf5321fe53p-876, 0x1.4c4786bb3ee3bp-212, 0x1.0073f575987a1p-845, 0.0,
     0x1.87660394742d4p-39, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.779b092002212p-312, 0.0,
     0.0, 0x1.88870a3af446bp-111, 0.0, 0x1.4a12b768f07edp-1020, 0.0,
     0x1.42dfd40b4dea8p-31, 0x1.86df34be1a125p-754, 0.0, 0.0, 0x1.42b8e485a22e8p-681,
     0.0, 0x1.bae0ea29ad0acp-311, 0x1.93ca439d43775p-552, 0x1.58054fc9868d2p-66, 0.0,
     0.0, 0x1.ec02c55e540dcp-823, 0.0, 0.0, 0x1.6ca6ae86c4fbcp-306,
     0x1.0f1002dd94939p-288, 0x1.c74aee77ec0d3p-797, 0.0, 0x1.67bfac18ff129p-45,
     0x1.b756e52a73f4ep-910, 0x1.dd67f99246cfep-621, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.336d54ce5dcbbp-441, 0x1.09f559a908243p-886, 0x1.7c8ebfb41f839p-565, 0.0,
     0x1.83a456f1f3c01p-113, 0x1.e669fca1eb244p-338, 0.0, 0.0, 0.0,
     0x1.2451cde2bdaf7p-719, 0.0, 0.0, 0x1.26f3dde48351ep-139, 0.0,
     0x1.1b8ec311fd774p-307, 0.0, 0x1.e9c63e226892p-145, 0.0, 0x1.4eee2a757b611p-51,
     0x1.2e6cfb2f484c4p-697, 0.0, 0.0, 0x1.feaf5422d8ccfp-310, 0.0,
     0x1.900ba8a107191p-446, 0.0, 0.0, 0x1.ab7aa5222f99bp-883, 0.0,
     0x1.bba2aa6f4de34p-875, 0.0, 0x1.daf8a2fb09033p-994, 0.0, 0x1.e6a9ae0b5e20ap-724,
     0.0, 0x1.78076987027bfp-1014, 0.0, 0.0, 0x1.7eeac318dfedep-935, 0.0, 0.0, 0.0,
     0x1.347dfaa3dd2c8p-207, 0.0, 0x1.070769df828a7p-469, 0.0,
     0x1.0e127ae97ed3bp-1014, 0x1.e175e55a4ea51p-652, 0x1.9f37fe6a1f8bap-785, 0.0,
     0.0, 0.0, 0.0, 0x1.630813ab7a556p-980, 0x1.4f80767b3716bp-769,
     0x1.a2bba2dbe5508p-54, 0x1.1a65380572c7fp-3, 0x1.90a150f6c855fp-842,
     0x1.4523ea71faef8p-782, 0.0, 0.0, 0x1.f5caf30aba115p-413, 0x1.d374e3c2938cap-920,
     0x1.12f4fc141411fp-870, 0x1.8a2aecb2a507bp-351, 0x1.83ed7bb1e9276p-441,
     0x1.e7e867225ab8p-27, 0x1.f6e0fa333879ap-91, 0x1.77aec6d3340f4p-8,
     0x1.7e16e6596250ap-2, 0x1.a5fa55d314b17p-561, 0x1.27b18741d4e5fp-813, 0.0, 0.0,
     0.0, 0.0, 0x1.7b5f3eb093eabp-39, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b897738b49f1p-635,
     0.0, 0x1.2d7766f98c928p-953, 0x1.487796a64ab6bp-941, 0.0, 0x1.2a1f4adc315bbp-712,
     0.0, 0.0, 0x1.c489205478883p-764, 0x1.782c2911cadcp-632, 0.0,
     0x1.f46a42223bb39p-934, 0.0, 0.0, 0.0, 0x1.5a5b65b17253ep-687,
     0x1.3f48317596ff2p-557, 0.0, 0.0, 0x1.43f13c6bb394ap-560, 0.0, 0.0, 0.0,
     0x1.42faf9c0da1e8p-510, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b23e18fb5acap-661,
     0x1.8a126bdea6b8dp-841, 0.0, 0.0, 0x1.88e7c06a4f30fp-859, 0x1.4e3b8d4c788bcp-956,
     0x1.432030e189131p-592, 0x1.ac7f2b6e3c147p-897, 0x1.95281184774f6p-769, 0.0,
     0x1.af00c282f5031p-611, 0.0, 0x1.d5c9af8332bd2p-299, 0.0, 0x1.d7edd97b7bc48p-602,
     0x1.60c12f37722d4p-745, 0.0, 0x1.6142db8633829p-228, 0.0,
     0x1.57a532ca52439p-1010, 0x1.70560752eba5cp-900, 0x1.edcec4f883a8bp-922, 0.0,
     0x1.8b02893d2b61ap-865, 0x1.96a74b5e1e509p-238, 0.0, 0x1.d130e5b69b847p-306, 0.0,
     0x1.7421d2ccd2413p-166, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.221dcf7ede955p-948,
     0x1.34df39272d329p-868, 0.0, 0x1.f25b755d112bdp-1008, 0x1.abc44d6a074a8p-204,
     0.0, 0x1.f7e8883730159p-650, 0x1.936a00d05a001p-272, 0.0, 0x1.067b42ca3890cp-284,
     0x1.5e7dea7488bc2p-729, 0.0, 0.0, 0.0, 0x1.e713e02756de8p-121,
     0x1.41141b05b28cp-158, 0x1.ef77dd8573736p-489, 0.0, 0x1.f95b97c7adad4p-856, 0.0,
     0x1.b98084c950dcp-160, 0x1.a8d4990579421p-656, 0.0, 0.0, 0.0,
     0x1.056920e7be5dbp-277, 0.0, 0.0, 0x1.6913bb2f0770cp-414, 0.0,
     0x1.3b80842ce9865p-809, 0.0, 0x1.2b9cefc2e5412p-714, 0x1.b1d37ce1c4d82p-371, 0.0,
     0x1.344a5c65787f3p-26, 0x1.4882a91a4665dp-949, 0x1.0aaed2a549265p-684,
     0x1.4430cfb2a784bp-463, 0x1.a0adf6afdcd0ep-616, 0.0, 0x1.fcba990d1341fp-784, 0.0,
     0x1.2b3b11a66d28ep-959, 0.0, 0x1.0bc952cae453ap-693, 0.0, 0x1.f36b977b2d852p-683,
     0.0, 0.0, 0x1.4fe3c83a8c7f4p-35, 0x1.5161fda792416p-985, 0.0, 0.0, 0.0, 0.0,
     0x1.780bac375c6c9p-838, 0x1.b3e92dea7e0cap-934, 0x1.3ae40f90fb12cp-144,
     0x1.f25f31602ffe8p-1012, 0x1.42831c4166f61p-102, 0x1.cce759659bb16p-107, 0.0,
     0.0, 0.0, 0x1.d8e8a33705684p-209, 0.0, 0x1.ed166d47b4d6p-659, 0.0, 0.0,
     0x1.06357fd41f9ap-22, 0.0, 0.0, 0.0, 0x1.630908a89f838p-308, 0.0, 0.0,
     0x1.e2af416870a46p-10, 0x1.fe0a4c0d32abap-151, 0x1.97bbfe0a69e12p-919, 0.0, 0.0,
     0x1.3b6bcc47488c7p-480, 0x1.3f89138bed914p-727, 0.0, 0.0, 0.0, 0.0,
     0x1.12fe4ad46ac51p-842, 0x1.0d4968e89cbcep-460, 0.0, 0.0, 0.0, 0.0,
     0x1.95dcaadf92d6p-828, 0x1.f7aa7be04f26ep-622, 0.0, 0.0, 0.0,
     0x1.0111bca928ba9p-757, 0.0, 0.0, 0.0, 0x1.4f914a56484ep-690,
     0x1.fb6050353567ep-376, 0.0, 0x1.78ac39ba28724p-413, 0.0, 0x1.177fc1e6ffc9ep-138,
     0x1.9a1a7da1b49c9p-781, 0x1.697bc46f01b49p-5, 0x1.beec8f45730f4p-157,
     0x1.c4c72f10cda1p-993, 0x1.08b6ea5aaccap-288, 0x1.52a17e4e116dcp-704, 0.0, 0.0,
     0x1.c85833e9705b4p-975, 0.0, 0.0, 0x1.f67a02b481022p-266, 0x1.36381f3c06b58p-979,
     0x1.24c296e8245bbp-989, 0.0, 0x1.0b5e9e8831c1cp-175, 0.0, 0x1.fbe17f6720af3p-383,
     0x1.8a7542ffc3697p-712, 0x1.67e8eba0fe711p-856, 0x1.db309c4ae87b2p-200, 0.0, 0.0,
     0.0, 0x1.c452754dda1e5p-785, 0x1.45ac68222383p-392, 0x1.8fa0160fb3d93p-301, 0.0,
     0x1.9758a7a408a7bp-312, 0.0, 0.0, 0x1.76df13229fec9p-515, 0.0,
     0x1.d8f60ecf91f74p-461, 0x1.006f4cd0744fdp-241, 0.0, 0x1.d154546918804p-651,
     0x1.a60a2bd5b48f3p-1, 0x1.88aa97696433cp-648, 0.0, 0x1.a07f74fbbae86p-161,
     0x1.f02f1a695e933p-542, 0.0, 0x1.906f7dcd7a4e2p-694, 0.0, 0x1.7308f93e14188p-929,
     0x1.d96ef10f2d1d9p-752, 0.0, 0x1.4ae2c2901e872p-863, 0x1.bb6aa8a49002cp-248,
     0x1.a25bf8e926b94p-620, 0x1.9798f1a9910afp-449, 0x1.7df7ac176dbeap-973, 0.0,
     0x1.3c537f8e0edebp-806, 0x1.cdba35e3295eep-102, 0.0, 0.0, 0.0,
     0x1.ef8961e4ea2a8p-69, 0.0, 0.0, 0x1.75bffeffd50c9p-613, 0x1.13c7d3b5e21afp-772,
     0x1.58cc4fafe3155p-74, 0.0, 0.0, 0.0, 0.0, 0x1.28ec5e3e4fde8p-289,
     0x1.8a301617b1913p-500, 0.0, 0x1.9d4970a5addb6p-874, 0.0, 0.0,
     0x1.f8487e23fe2afp-59, 0x1.ef8f6eccd2949p-112, 0.0, 0x1.145e0685c61b6p-63, 0.0,
     0.0, 0x1.4e1b75d3ef1fbp-659, 0x1.4568a14cbccabp-1022, 0x1.efd8405fd0d55p-94,
     0x1.cdd3b2f5b05adp-57, 0x1.deb1818a8b0dcp-966, 0x1.cf15178486e4ep-662, 0.0,
     0x1.9db972b907fdap-972, 0.0, 0x1.2a5df7297d045p-66, 0x1.7576355751e5cp-906,
     0x1.22d69de479464p-607, 0.0, 0x1.fa3087cf135bcp-190, 0.0, 0.0, 0.0, 0.0,
     0x1.d56619bb5c10fp-437, 0.0, 0x1.fb1cd279dba34p-48, 0x1.d77a81e749ebfp-800, 0.0,
     0x1.9a862331db199p-982, 0.0, 0.0, 0.0, 0x1.2d7e90d8a5e78p-181,
     0x1.c3ea6d7163109p-971, 0x1.b93dba6f6871bp-794, 0.0, 0x1.ee74058801d61p-53,
     0x1.2b460907c3ea2p-425, 0x1.9a23ade07fe63p-762, 0.0, 0x1.245c6ad8f52f9p-376,
     0x1.f21f3c2e2f1afp-751, 0.0, 0x1.77401c368c4a7p-170, 0.0, 0.0, 0.0,
     0x1.ad45df2765d1ep-462, 0x1.bb16db09f7c0cp-746, 0.0, 0.0, 0x1.6c2953ba2cc16p-380,
     0.0, 0x1.fcc7119d8ca6ap-1020, 0x1.431e883f9e5b2p-217, 0x1.321c29bb747a4p-222,
     0x1.14f5bbdef6a9ap-339, 0.0, 0x1.9ca103fea7d0ap-206, 0x1.154f37d3a7233p-179,
     0x1.5c76531685976p-835, 0.0, 0x1.73d47f564270dp-976, 0x1.1c4f7070f928fp-280,
     0x1.1930c7e47adbdp-350, 0.0, 0x1.ea1fe2d37fd0fp-711, 0x1.0d0ad1d828a97p-1011,
     0x1.03c26454f9afdp-736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f508f9bcee9bcp-526,
     0.0, 0x1.fe0c9bf8281fp-44, 0x1.23a68c80a693cp-95, 0.0, 0.0, 0.0,
     0x1.3b0120862b77ap-892, 0.0, 0.0, 0.0, 0x1.411128903ff3cp-335, 0.0,
     0x1.cbd114cb534b2p-880, 0x1.30ab113a2fb08p-189, 0.0, 0.0, 0.0, 0.0,
     0x1.607171ce5fd04p-789, 0.0, 0x1.6eedb3528b17ap-720, 0.0, 0x1.02e815d177239p-703,
     0x1.f7393559bec1cp-847, 0x1.2f3a78f66fb4dp-205, 0.0, 0x1.88ac68ee073a5p-444,
     0x1.5db6a88ab4326p-860, 0x1.c32bc26837c3ep-466, 0.0, 0.0, 0.0,
     0x1.bf3af992da45ap-1009, 0x1.c652bd0a1009p-789, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ff7d173b8a135p-906, 0.0, 0x1.4c117a163316ep-657, 0.0, 0x1.ff962694b984dp-734,
     0.0, 0x1.36f826cf26f38p-465, 0x1.0c331f2e49524p-626, 0x1.cba9f2eea3858p-251, 0.0,
     0.0, 0.0, 0x1.1135fa1e9411ep-844, 0x1.d20884fd2f536p-293, 0.0,
     0x1.8005dbd80eebbp-696, 0x1.9f17780d70c07p-754, 0x1.c2618dd28d887p-530
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
            tmp1 = Sleef_cbrtd1_u35purecfma(tmp0);
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
    printf("Sleef_cbrtd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
