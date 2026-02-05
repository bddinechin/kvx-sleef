/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd1_u35purecfma.c --function \
 *     Sleef_coshd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.fdbea37e41699p-501, 0.0, 0.0, 0.0, 0x1.19211bc4872p-304, 0.0, 0.0,
     0x1.2b8b98956f329p-383, 0.0, 0.0, 0x1.59f9defe75c56p-1007,
     0x1.5cb036ec33746p-515, 0x1.96c50ad45c12cp-128, 0x1.1dea03f881539p-832,
     0x1.523303cd85d08p-883, 0.0, 0.0, 0.0, 0.0, 0x1.96ddb4161a9d2p-616,
     0x1.d35e2a0edfaf7p-44, 0x1.93d6c7daf68e6p-445, 0.0, 0x1.c1962f459e336p-91,
     0x1.559a197d9317p-946, 0.0, 0.0, 0x1.602fadf55ac8ap-259, 0x1.e59b350c2c88ap-130,
     0x1.9f440918e9019p-622, 0.0, 0.0, 0.0, 0x1.7c780534c6369p-687,
     0x1.2f76a9dcc00aap-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cfdb3fdc094ebp-984, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.520f8e297948cp-98, 0x1.999acd2f68b15p-932, 0.0,
     0x1.f158ef53820d5p-45, 0.0, 0x1.c3ba2f9b2aa7ep-474, 0.0, 0.0,
     0x1.fb21499c4731ap-687, 0.0, 0x1.73c0bc1082627p-813, 0x1.65a4946f4f095p-817,
     0x1.26f0cdb65d655p-622, 0.0, 0.0, 0x1.f15f559611335p-260, 0x1.370855219e9a9p-467,
     0x1.c133d6158476ep-774, 0.0, 0.0, 0x1.f913b7360179p-1009, 0.0,
     0x1.7136d63f9169dp-305, 0x1.7d051eaf7b38fp-809, 0x1.3f7ca4d22ef15p-80, 0.0, 0.0,
     0.0, 0x1.16bc363ea66bap-200, 0.0, 0.0, 0x1.d88f8b58c6477p-569, 0.0, 0.0, 0.0,
     0x1.8976aaafcd7a6p-956, 0x1.1e656e23ceeb2p-720, 0.0, 0.0, 0x1.cef2a890e1715p-964,
     0.0, 0.0, 0.0, 0.0, 0x1.b6b4c4e9ae2f9p-848, 0.0, 0.0, 0.0,
     0x1.14d4be352b695p-212, 0x1.84da741b0aea3p-107, 0x1.87227dbea132bp-948,
     0x1.c996b6b34aedep-68, 0.0, 0.0, 0.0, 0.0, 0x1.8191b6a708533p-31, 0.0, 0.0,
     0x1.dbb9a5cc666d5p-178, 0x1.cb2e19d20fc97p-660, 0.0, 0.0,
     0x1.0b4cc26ce7a6dp-1001, 0.0, 0x1.8400c5f2c924ap-1005, 0.0, 0.0,
     0x1.bb0f6ac9bb71p-497, 0x1.8284518c557ecp-63, 0x1.7ccbefe6c88d1p-883, 0.0,
     0x1.ba310ec1b309dp-766, 0.0, 0x1.eaaeaaf06e8b6p-641, 0.0, 0.0,
     0x1.626880ba0ed48p-351, 0.0, 0.0, 0.0, 0x1.cd6067cf58c93p-662, 0.0, 0.0, 0.0,
     0.0, 0x1.e49db3b5e9ea1p-215, 0x1.d78e8d3ec70cap-503, 0x1.fc9dc9a2437bep-153,
     0x1.cf32446087dcep-456, 0x1.5b794cb9fc647p-221, 0x1.9ed225de09624p-4,
     0x1.819b27be77f1ep-528, 0.0, 0.0, 0x1.9fb3750eec3f6p-464,
     0x1.d44c28c2d7531p-1002, 0x1.7b70208b8f12ep-222, 0.0, 0.0, 0.0, 0.0,
     0x1.2bbb8bd288f52p-370, 0.0, 0.0, 0x1.805d1ad127d62p-881, 0x1.e82691e5c271bp-405,
     0x1.ce212731eabaap-555, 0x1.3d37ac5c22a2dp-905, 0.0, 0.0, 0x1.7dbe59647209p-446,
     0x1.fac76d659cc06p-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d10ed1ef6592ep-540, 0.0,
     0.0, 0x1.b43f3c1cb75e2p-33, 0.0, 0x1.7bfbc0232a329p-799, 0.0,
     0x1.50191f814c90bp-414, 0.0, 0.0, 0x1.331778b0e8a4ap-313, 0.0, 0.0,
     0x1.fe75d5e1149bbp-25, 0.0, 0.0, 0.0, 0x1.1841008e93d1p-587,
     0x1.203560fa0f55p-857, 0x1.cfa4f36c3b4c2p-321, 0x1.145e7d176c16bp-323, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fc362699ebfefp-781, 0x1.ff2faf7eeab9bp-196, 0.0,
     0x1.63ce768f2dbbfp-117, 0.0, 0.0, 0.0, 0x1.24c569b371c0dp-587,
     0x1.94539cdf68546p-799, 0.0, 0.0, 0x1.f09ec9f02f37ap-59, 0.0, 0.0, 0.0, 0.0,
     0x1.ab83c69e1d4p-121, 0x1.2dd351650e4c5p-184, 0x1.8990a0ee9adf1p-3, 0.0,
     0x1.e9ab93769a90ap-466, 0.0, 0x1.41e1eef75ea1ep-907, 0.0, 0x1.f6c1de8501536p-309,
     0.0, 0x1.c2764885a1b4ap-413, 0.0, 0x1.22cad854efd56p-562, 0.0,
     0x1.60b266fd8397ep-880, 0x1.7029c7c3b6f87p-56, 0x1.a9f3a73a29adcp-776, 0.0,
     0x1.648406fac2259p-495, 0x1.5a8c571e65628p-785, 0.0, 0.0, 0x1.69964167dd72p-723,
     0.0, 0.0, 0x1.8726abb3cd4ddp-660, 0x1.ee8fc93d37eb2p-625, 0x1.627bb8230a4e2p-288,
     0x1.7a69495313a5dp-352, 0x1.77637e22b3d92p-11, 0.0, 0x1.651296ddf60b4p-674,
     0x1.98079e3b50122p-654, 0x1.9b3c9f7f14c11p-294, 0.0, 0x1.8b5d0d26bce69p-895,
     0x1.3730a9ddc5fa6p-429, 0.0, 0x1.2fa066473587bp-562, 0.0, 0x1.c03e4f96d66f4p-957,
     0.0, 0.0, 0.0, 0.0, 0x1.5b472faeee7cp-86, 0x1.0a9ddbdc7577dp-121,
     0x1.2f695988d5d8bp-912, 0x1.0e8354a70f08fp-328, 0.0, 0x1.b75ef9ac0ebb4p-755, 0.0,
     0.0, 0x1.074a0cc02adf5p-13, 0.0, 0.0, 0.0, 0x1.f2eba1a652e2cp-778,
     0x1.e797453d71609p-241, 0x1.c7629d33e6258p-584, 0.0, 0x1.e4082f2c88a6cp-332,
     0x1.10c158ef6fd06p-640, 0.0, 0x1.9f7f73b1c9066p-173, 0.0, 0.0, 0.0, 0.0,
     0x1.c713d25a27543p-310, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5edca32fa8cfp-658,
     0.0, 0x1.1c3426dacb54cp-792, 0.0, 0x1.e06482d26d422p-451, 0x1.a0611be88227dp-872,
     0.0, 0x1.5205ec112de56p-211, 0.0, 0.0, 0x1.8807ea472063fp-807,
     0x1.96766909e4aaap-395, 0.0, 0x1.b07ecf5930aefp-752, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cc60e92714243p-117, 0.0, 0x1.6d2a59fea5ae1p-905, 0x1.f61afd22864c9p-52,
     0x1.e7de0540a7ba4p-307, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce41469fd49dap-782,
     0x1.9fa11bf5c43b8p-554, 0.0, 0.0, 0x1.c81df2cf48a6ap-849, 0x1.78b9fb56df71p-544,
     0x1.9f272bc336c27p-655, 0x1.6d6203fd914a7p-303, 0.0, 0.0, 0.0, 0.0,
     0x1.12ff4ea8fe29ep-228, 0x1.a9397110ffb48p-414, 0x1.e19d3f0513419p-996, 0.0, 0.0,
     0.0, 0x1.a4f6790ba7e2dp-574, 0.0, 0x1.7c8e205c84f4p-954, 0.0,
     0x1.2d2dc38f50beep-565, 0x1.e338b24301479p-978, 0.0, 0.0, 0.0, 0.0,
     0x1.cc9d8658e870ap-633, 0x1.8e8651b6c6dcap-56, 0x1.12d8089837a39p-65,
     0x1.cc10d7053b239p-925, 0.0, 0x1.5272f65485278p-715, 0x1.0f1a65137958cp-264, 0.0,
     0x1.75c08a598d68p-109, 0.0, 0x1.ef550abad7eb6p-385, 0.0, 0x1.f806012a5ffep-342,
     0.0, 0x1.dc8b2ab973d37p-830, 0.0, 0x1.a4e4ce245a11ap-949, 0x1.8fffbc0a8d0a4p-267,
     0x1.d0888eceb7029p-377, 0x1.8e1644e8529b5p-573, 0x1.7de646bc0c0b1p-163, 0.0, 0.0,
     0x1.e9da3e1bc1f84p-318, 0.0, 0x1.c0e2aa770a39ap-921, 0.0, 0x1.6376715f3f8c1p-116,
     0.0, 0x1.5d42f54fcebf2p-896, 0.0, 0.0, 0x1.54b4c853218aep-995, 0.0,
     0x1.ec69455720472p-829, 0x1.e865ba89aae7bp-1015, 0x1.2c1691a23efd2p-594, 0.0,
     0x1.0a38fe773ba74p-562, 0.0, 0.0, 0x1.ffed91273bf19p-233, 0x1.9c40ca96c88f5p-714,
     0x1.8840c91f68e4dp-924, 0x1.4f0a3ada60859p-349, 0.0, 0.0, 0x1.c6dae283fd5a6p-693,
     0x1.17bcd6955b78dp-821, 0x1.2ffe58fe698ep-40, 0.0, 0.0, 0x1.89348c02989ep-835,
     0x1.5750cb00887f8p-560, 0x1.06ab19e52997fp-15, 0x1.63fe082ad647fp-235, 0.0,
     0x1.b3b226f39ee63p-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb3b53ec7ebf6p-912, 0.0,
     0x1.5c28d56a820b5p-468, 0x1.62d2e793e14f1p-307, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0976b3ebc5e3ep-674, 0.0, 0x1.6e93e09bbe17cp-315, 0x1.66e0b11a4f7bp-825, 0.0,
     0.0, 0x1.07a8d222318e4p-306, 0x1.f607b43731923p-128, 0x1.9ef2732a7bfc2p-232,
     0x1.1fa1c3d505852p-198, 0.0, 0x1.691de873143f2p-606, 0.0, 0.0,
     0x1.133f91887523dp-174, 0.0, 0.0, 0.0, 0.0, 0x1.efd4b92d60d12p-98, 0.0, 0.0, 0.0,
     0.0, 0x1.c42d7a2b4e258p-357, 0.0, 0x1.fc2eeaaf9406p-920, 0x1.bc5c226c0c12cp-538,
     0x1.f4657fee466c4p-799, 0.0, 0x1.6f23411d35c81p-328, 0.0, 0x1.03c8ea6e37e79p-22,
     0.0, 0.0, 0.0, 0x1.5a13bb57c5336p-357, 0.0, 0x1.7217151095971p-717,
     0x1.3b0552d7d944ep-859, 0x1.0e97ce02c95b5p-49, 0x1.3c324a5be79b8p-413,
     0x1.566c9ffdb7359p-38, 0x1.6cb16a2178849p-1005, 0x1.f5e4287c22911p-1003, 0.0,
     0.0, 0x1.efeccce215203p-739, 0x1.0d9b3b6742a4ep-228, 0.0, 0.0,
     0x1.7548be7bc95b5p-776, 0.0, 0x1.1eda3a3cb324ap-1013, 0x1.dc6eab15480b1p-698,
     0x1.31e6f2b3f88cp-17, 0.0, 0x1.32585a7a98ef1p-401, 0.0, 0x1.6f959303fc739p-106,
     0.0, 0x1.ec5a95f82737bp-270, 0x1.9e3493602b1e8p-196, 0x1.83c6f185f2e2dp-855,
     0x1.0cc3f089ae2a5p-849, 0x1.809655a5ebec5p-153, 0x1.6e0e3086b4524p-503, 0.0,
     0x1.1e90fc65cb95fp-989, 0.0, 0.0, 0.0, 0.0, 0x1.9396c84b97388p-69, 0.0,
     0x1.a30d0e8779ffap-979, 0.0, 0.0, 0.0, 0x1.0f2e4d846d7a2p-415,
     0x1.bd4c7c845e0ecp-393, 0.0, 0.0, 0.0, 0x1.97e87833e93b7p-835,
     0x1.f4ed7e8afbc92p-18, 0x1.22791e5564556p-311, 0.0, 0.0, 0x1.721f62a9d93bbp-469,
     0x1.85046553b49b1p-387, 0x1.e76f5225abc93p-727, 0.0, 0x1.7efaf432fcd2dp-89, 0.0,
     0.0, 0.0, 0.0, 0x1.b9b6a26454ff5p-688, 0.0, 0x1.e47f57820a7e4p-951, 0.0,
     0x1.63ad90f2ffad6p-987, 0.0, 0x1.b6497f8a25c8p-29, 0x1.19d27bc70a8d4p-986, 0.0,
     0x1.96b6e3d86350fp-625, 0.0, 0x1.b4c8fcf5f2d86p-291, 0x1.c215943e979bep-312, 0.0,
     0.0, 0x1.fa2166657e6a4p-802, 0.0, 0x1.cbddc603e670ep-727, 0x1.051fea2a6209fp-236,
     0.0, 0x1.22784b272f152p-114, 0.0, 0x1.39a3f6c098375p-403, 0.0, 0.0, 0.0, 0.0,
     0x1.2f86ae70ace17p-998, 0.0, 0x1.e1797e3e581a6p-359, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4a8bf76111467p-632, 0x1.dc68e21cce8c5p-601,
     0x1.d1d3c0cb35f0cp-877, 0.0, 0x1.71efb5c573046p-433, 0x1.68a3e5f79481dp-844, 0.0,
     0.0, 0.0, 0x1.5c44243fcc92ep-146, 0.0, 0x1.ef1e0396332bdp-108,
     0x1.e0b2c9d4e4bd4p-407, 0.0, 0.0, 0.0, 0x1.1f649de05ade9p-30,
     0x1.9db13c2a4d82p-218, 0.0, 0x1.32395f7e80908p-214, 0x1.7c91b37b6070cp-813, 0.0,
     0x1.b536a1fd77255p-865, 0x1.1e319e812eeadp-512, 0.0, 0x1.a5425bd472d7bp-540,
     0x1.a832364b8c5dbp-513, 0x1.9545f4f9f67e6p-372, 0.0, 0x1.d772b675c3117p-404, 0.0,
     0x1.f0fec4c15c5f6p-548, 0.0, 0.0, 0.0, 0x1.6f806e3dc3f1ap-861,
     0x1.71cec74237566p-717, 0x1.f9289ab6e6fd3p-206, 0x1.fcb63104dbf6fp-21,
     0x1.916bffd6e633fp-451, 0.0, 0.0, 0x1.5845b321d4a38p-804, 0.0, 0.0,
     0x1.c05db9f11e572p-107, 0.0, 0.0, 0.0, 0x1.a56d7a7aeb54ep-907,
     0x1.c0a97a757cb8bp-273, 0.0, 0.0, 0.0, 0.0, 0x1.f9f69d58e5d54p-450, 0.0, 0.0,
     0x1.48d29491b96b6p-85, 0x1.673b104ff35bfp-859, 0.0, 0.0, 0.0, 0.0,
     0x1.418c9ec6d94ffp-221, 0x1.135b811f9f447p-221, 0.0, 0.0, 0x1.affcbd494e2abp-801,
     0.0, 0.0, 0.0, 0x1.fd1cb90f8c6edp-803, 0x1.d3d5fc6fccfcdp-464, 0.0,
     0x1.50f2a5c11a70ep-486, 0x1.b85455301e2f3p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1a5934cff07ap-761, 0.0, 0x1.c505591a2120ep-190, 0x1.13433fd14875ap-163,
     0x1.67d2ba338a65dp-194, 0.0, 0.0, 0x1.fe87f9dea436ep-831, 0x1.3a6d1b260b75ap-1,
     0.0, 0x1.e90faa0471a8fp-447, 0.0, 0x1.c952e0ccee001p-787, 0x1.f30483f4963a7p-249,
     0x1.7611007e2d5c5p-150, 0.0, 0.0, 0.0, 0x1.3277a6cc68601p-490, 0.0, 0.0, 0.0,
     0.0, 0x1.1033c47360af8p-209, 0x1.18e9db586f322p-218, 0.0, 0x1.0f15191ae5142p-117,
     0x1.3cf2aa386d857p-416, 0.0, 0x1.c5551aad3178ap-637, 0.0, 0.0,
     0x1.8030c1e0fb7e8p-561, 0.0, 0x1.5267a235a1f08p-546, 0x1.fee04ad130f3fp-607,
     0x1.a6b5fe5002733p-985, 0.0, 0.0, 0.0, 0x1.9443d425c7199p-231,
     0x1.d148fb6007192p-400, 0.0, 0x1.2816917f30702p-678, 0.0, 0x1.fe1a6283a0ccdp-783,
     0x1.2560abe4bfa37p-408, 0x1.04c99c4339e3dp-410, 0x1.9840406610026p-254,
     0x1.811179a39de5bp-576, 0x1.119e85e2b397dp-597, 0.0, 0.0, 0.0,
     0x1.d62dbf6384fbap-528, 0x1.040b1e3ff67c3p-16, 0.0, 0x1.a99e04cc36c54p-432, 0.0,
     0.0, 0x1.4cb2135de6ef3p-158, 0.0, 0x1.123ca1155e47cp-242, 0x1.3bc24a3e60d95p-962,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.624175d26776p-27, 0.0, 0x1.97bbef63364abp-986,
     0.0, 0.0, 0.0, 0x1.e62c4e2ad3c4cp-779, 0.0, 0.0, 0x1.10a8905c0b209p-139,
     0x1.23c769b009bbfp-123, 0.0, 0.0, 0.0, 0x1.fbe19cd4ab0ebp-765, 0.0, 0.0, 0.0,
     0.0, 0x1.f6f89fef1d69p-505, 0x1.68700aaa3f339p-141, 0x1.d6b44fe26beeap-625, 0.0,
     0.0, 0.0, 0.0, 0x1.4bdd0d95c4674p-807, 0.0, 0x1.4a1c42706027p-578,
     0x1.76b31c9b70a5ep-711, 0.0, 0x1.5824ca27b38b8p-498, 0.0, 0.0,
     0x1.15b27d546050cp-160, 0.0, 0.0, 0.0, 0.0, 0x1.b8513771f9a93p-544,
     0x1.6ae2b82ed1659p-622, 0x1.b01899db11e28p-808, 0x1.271662c0ed568p-1012,
     0x1.db08849bc5513p-341, 0.0, 0.0, 0x1.a0127a1bf9bfp-329, 0x1.11b785640bc3fp-409,
     0x1.0cdfeb01188e9p-104, 0.0, 0.0, 0.0, 0x1.f90ffd20944fcp-958,
     0x1.b4cec983c0a77p-259, 0x1.109aaf77aefd6p-756, 0x1.18e34730e847p-696,
     0x1.321af68d4714dp-627, 0.0, 0.0, 0.0, 0x1.09fc63ed007fap-433, 0.0,
     0x1.47de58e088375p-25, 0x1.0a3085def9cb9p-597, 0x1.0e224c204f86cp-771,
     0x1.6f0c5dc4a8f61p-441, 0.0, 0x1.93d026082e054p-964, 0.0, 0x1.7eecb7a0222cfp-968,
     0x1.d42591de30d49p-417, 0x1.52d6c0c583a06p-123, 0x1.cc3646096b35ap-305,
     0x1.e40e6dab25148p-753, 0x1.7e7142b8bc411p-170, 0x1.8727eb7e953dbp-17, 0.0,
     0x1.05a06dc2dbc0bp-40, 0.0, 0.0, 0.0, 0x1.5c4937f3f5195p-916, 0.0, 0.0, 0.0,
     0x1.4c3cf3b25184ep-998, 0x1.d12b65eb14f75p-164, 0x1.f50e0f4c76459p-699, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e86585032babbp-203,
     0x1.af0cf097e1607p-804, 0.0, 0.0, 0x1.26661598d0398p-148, 0x1.b84e8e413c4d9p-270,
     0.0, 0x1.ed95af879c6b8p-375, 0x1.0ae49ec2ef5dfp-327, 0.0, 0x1.55082bd48880dp-798,
     0x1.2efdbbeb147eap-953, 0.0, 0.0, 0x1.132c9f8d8ce14p-366, 0x1.ab8346aa3d33ep-14,
     0x1.b5ad02008a696p-244, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06ef133cba3f1p-233,
     0x1.fd396eaf6359fp-983, 0.0, 0x1.59bb6dd5034f2p-450, 0.0, 0.0, 0.0,
     0x1.975b8e45aa24cp-419, 0x1.d4dcf8381feeap-825, 0.0, 0.0, 0x1.27bd036f2b19ep-253,
     0x1.2c8caa264dc5ap-465, 0.0, 0x1.8eb941232bfcep-424, 0.0, 0.0,
     0x1.916b30fc3dbbbp-405, 0x1.8d549737e7a4p-426, 0.0, 0x1.a1b50f281566bp-341, 0.0,
     0.0, 0.0, 0x1.d44c743a7de06p-366, 0.0, 0.0, 0.0, 0.0, 0x1.6178c5b5239a1p-408,
     0x1.7d95ce91c6e21p-813, 0x1.0ecded15e5918p-288, 0.0, 0x1.827eaef4b3506p-828,
     0x1.22a58ff6bd9b2p-85, 0.0, 0x1.695cfc00c2b77p-736, 0x1.49f70fe9d028bp-967,
     0x1.6141e491f8733p-272, 0x1.c66e102c45182p-929, 0x1.229af097d5662p-671,
     0x1.14cb82764607ep-176, 0.0, 0x1.8174ef38b8a14p-510, 0x1.0f3281daf0c92p-907,
     0x1.e8a3a46a38156p-150, 0x1.c9ead2c564786p-894, 0.0, 0x1.c41e82ab26d82p-167, 0.0,
     0x1.0cc30af8e3b4bp-926, 0.0, 0x1.a11a12ee311ecp-453, 0.0, 0.0, 0.0,
     0x1.e9007f5588e7bp-410, 0.0, 0x1.7d2b08db90e65p-518, 0.0, 0x1.d71125d8c2bacp-24,
     0x1.e10d721a79c73p-418, 0x1.2ff4d33611df9p-1016, 0x1.b8e3444ef4ab2p-4,
     0x1.02c26a02b6cf9p-765, 0x1.15d28ae33eef1p-850, 0.0, 0.0, 0x1.b9da7a599f87bp-279,
     0x1.38c96ccaad4a7p-956, 0.0, 0x1.82b0026bb87cbp-494, 0x1.baf4cbf3bf7c1p-356, 0.0,
     0x1.7801e8f395d5dp-674, 0.0, 0x1.879d0c3af56cep-807, 0.0, 0.0, 0.0,
     0x1.2a563067a96b9p-396, 0.0, 0.0, 0x1.b2fb8faf64414p-413, 0.0, 0.0,
     0x1.6383dee586aacp-440, 0x1.7df85d9a8f87ep-29, 0.0, 0x1.236b5c2865e23p-542,
     0x1.0142114c684bp-858, 0.0, 0.0, 0.0, 0x1.8a107a4748539p-289, 0.0, 0.0,
     0x1.56e3de3f190a1p-750, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9021eddcc0c0cp-550,
     0.0, 0x1.44d6249ee5757p-339, 0.0, 0.0, 0x1.fba2c2c921f07p-920, 0.0,
     0x1.17fcda49bdeb9p-957, 0.0, 0.0, 0x1.3b2223864845bp-450, 0x1.54e99f3c9399p-672,
     0x1.04d2eaab970fbp-96, 0x1.79876af00c10ep-646, 0x1.df910fea05cap-982,
     0x1.9ddc08dd142f9p-623, 0x1.cfc59b2eb890ap-751, 0.0, 0.0, 0x1.117f486c37cdfp-355,
     0.0, 0.0, 0.0, 0x1.78b6a5a51b32ap-84, 0.0, 0.0, 0x1.724d13b74835dp-482,
     0x1.3ca6d8ba55915p-73, 0x1.502ad28efce4ep-479, 0x1.6aac600eb8db9p-481,
     0x1.b31cabed5cd0dp-951, 0x1.432f0a682418p-916, 0x1.e96d0e1b1de75p-229, 0.0,
     0x1.282b8ee7c2e1bp-268, 0.0, 0x1.17b5dbc123e1ep-439, 0x1.61246f1ae4444p-122, 0.0,
     0x1.64a6b06717a14p-849, 0x1.4c882f6843c41p-909, 0.0, 0.0, 0x1.208ca419c6319p-41,
     0.0, 0.0, 0x1.c9f2de60403cdp-438, 0x1.b2b45444cb286p-447, 0.0,
     0x1.3e9cfe0c885a3p-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e57a5f3a0fa4bp-133,
     0x1.b86c36d6af275p-589, 0x1.5177b07d0500dp-663, 0x1.8bce97e6ac4ccp-723, 0.0,
     0x1.898ec7e432aecp-351, 0x1.7e787da39b92ap-190, 0x1.ef0b9137e41b6p-960,
     0x1.130d4d80058bcp-227, 0x1.c7fbdf4073d1cp-320, 0.0, 0x1.2c27d7c1c4b24p-737, 0.0,
     0x1.8e5cf5e7f682ap-258, 0.0, 0x1.432eafd074401p-711, 0x1.aa3f0876ec3edp-742, 0.0,
     0x1.21e60205243dp-777, 0.0, 0.0, 0x1.8303299ce8b71p-1015
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
            tmp1 = Sleef_coshd1_u35purecfma(tmp0);
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
    printf("Sleef_coshd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_coshd1_u35purecfma bench acc %la\n", global_bench_acc);
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
