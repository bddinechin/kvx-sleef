/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammad1_u10purecfma.c --function \
 *     Sleef_finz_lgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.ef8a339c5e8c2p-939, 0x1.35832ab8d19c6p-204, 0.0, 0.0, 0.0,
     0x1.dcdf771be9977p-224, 0.0, 0.0, 0x1.255089b2b3538p-187, 0x1.bd22e3567edf1p-853,
     0.0, 0.0, 0.0, 0.0, 0x1.15f017d6a3438p-513, 0.0, 0.0, 0.0, 0x1.c093320de82e8p-27,
     0x1.697a03e07f555p-662, 0.0, 0x1.afb30fc43d6eep-420, 0x1.80defece963f9p-461, 0.0,
     0x1.23403914f5719p-640, 0.0, 0x1.c9ef49465fe58p-513, 0x1.5a27cadf0abb6p-835,
     0x1.bc3baca75adfdp-208, 0.0, 0.0, 0.0, 0.0, 0x1.59d6b274cea55p-149, 0.0, 0.0,
     0x1.557987c55b5c3p-832, 0.0, 0.0, 0x1.e33cd6761bbc3p-730, 0.0,
     0x1.d3c5f0d0d2c8fp-945, 0.0, 0x1.11ea7436f65a2p-1019, 0.0,
     0x1.9768c0aae04ecp-933, 0.0, 0.0, 0x1.be97d0e7c4cfep-459, 0.0,
     0x1.30142b183a0cap-483, 0x1.9e2b1ab5e99cep-861, 0.0, 0.0, 0x1.d833bc11d663ap-596,
     0x1.d016d8c43e567p-466, 0.0, 0x1.342eaf781b99p-820, 0.0, 0.0, 0.0,
     0x1.7a32e8c7a1e2bp-908, 0.0, 0x1.880038066e0f4p-329, 0.0, 0.0,
     0x1.b6e0f1f11099fp-124, 0x1.0f044a78afd4fp-805, 0.0, 0x1.ee3a0f352e4ap-722,
     0x1.5c40a2244cde8p-541, 0.0, 0x1.b995ef17a8374p-133, 0x1.ed5c48511d609p-205,
     0x1.26c9288dcbabp-766, 0x1.0d1091960e01dp-447, 0x1.a06e2717396p-455, 0.0, 0.0,
     0x1.cb28a24210ea3p-719, 0x1.5f932cda3eed3p-683, 0x1.dc0af964cf1d1p-62,
     0x1.30cba4c3da013p-15, 0x1.2a77460a8ef9bp-455, 0x1.b5e9bccd7e161p-261, 0.0,
     0x1.24e19bbdd2e67p-554, 0x1.4cc7f1a1482p-211, 0x1.d1ec275f069p-416, 0.0,
     0x1.ef50e8aced55ap-84, 0x1.2d98668fa9f36p-111, 0.0, 0x1.100fb35c827b4p-697,
     0x1.c38d55b092bcbp-963, 0x1.ae59fd4a38b83p-131, 0.0, 0x1.1ddbb567cf822p-348,
     0x1.cc374af62fb4bp-182, 0.0, 0x1.9189e4fb56829p-470, 0x1.cd970c3f4de8bp-540,
     0x1.8d96ec2a9a143p-480, 0x1.e0b9e9462eddp-913, 0.0, 0.0, 0.0,
     0x1.92a73fd2a49afp-722, 0x1.bc57e255b40cbp-1012, 0.0, 0x1.2a79149c43f2fp-991,
     0x1.f302bd3231424p-727, 0x1.634426d2bbd93p-898, 0x1.6f252d013bd4cp-509, 0.0,
     0x1.8c0b0fa261c66p-476, 0x1.031f325605659p-422, 0x1.98c0140ab8778p-883,
     0x1.560bc1a41c713p-661, 0.0, 0.0, 0.0, 0.0, 0x1.2a64a918335fep-946,
     0x1.a33dd52db8b5ap-6, 0x1.e9ac00c4ef77dp-220, 0x1.da2c2d76ac6efp-82, 0.0,
     0x1.a00d519fa5f43p-345, 0x1.5753a970da905p-557, 0x1.2746c1eb8f014p-1020, 0.0,
     0x1.6a2ba505633dbp-684, 0x1.4be1d522f4476p-406, 0.0, 0x1.9cebfef5e645bp-739, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.abccfae5768a4p-468, 0x1.6beaf71afcb4p-893, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a7c351589498p-159, 0.0, 0x1.722d8abf694efp-247, 0.0,
     0x1.b01907b77c08bp-216, 0x1.ed97e1dbe8049p-472, 0x1.401c8bcbc2b69p-442, 0.0,
     0x1.30bd7c2b38414p-693, 0.0, 0x1.8d9f43e64b73ep-686, 0.0, 0.0,
     0x1.5a5b79fa9cdacp-549, 0.0, 0.0, 0x1.b4798bbc3fcfcp-537, 0.0, 0.0, 0.0, 0.0,
     0x1.1e400c20a2083p-799, 0.0, 0.0, 0.0, 0.0, 0x1.c29c09f9564d4p-919,
     0x1.ac11cabec6adbp-462, 0.0, 0x1.a3983db607fe3p-777, 0x1.77413a5ce3aa7p-309, 0.0,
     0.0, 0x1.d1642a79cec7ep-758, 0x1.776899dda7adcp-707, 0.0, 0.0, 0.0,
     0x1.646e3f4599bb2p-712, 0.0, 0x1.dad5891a47aedp-444, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.735188e46b663p-599, 0x1.c12ea595836f6p-340, 0.0, 0x1.30675bf8e4bddp-277,
     0x1.57a87343ea69ep-538, 0.0, 0x1.1fc5fc2d5aaa1p-905, 0.0, 0x1.ccdba10819b83p-961,
     0.0, 0.0, 0.0, 0x1.5406197e80ad7p-792, 0.0, 0x1.1256562b01ef5p-625, 0.0, 0.0,
     0.0, 0.0, 0x1.17ee53ec13fccp-38, 0.0, 0.0, 0.0, 0x1.f5ac7b019a5edp-631, 0.0,
     0x1.79432f7dbb80fp-112, 0.0, 0.0, 0.0, 0x1.da554a957446ap-17, 0.0,
     0x1.769adaf8e7694p-207, 0x1.599a84e223592p-977, 0.0, 0.0, 0x1.5e07ce4b46a4p-906,
     0x1.a408d945fd84dp-817, 0.0, 0.0, 0.0, 0.0, 0x1.40f0ea9ae969p-81,
     0x1.fdc81871cdef6p-696, 0x1.fad32424a3a9cp-604, 0.0, 0.0, 0x1.acdde39a9c7e8p-820,
     0.0, 0x1.57ff1b0bee879p-597, 0x1.e8e4ead253569p-962, 0x1.79e7d175408cdp-707, 0.0,
     0x1.538688a9a5303p-143, 0x1.b7cc43215afafp-281, 0.0, 0.0, 0.0,
     0x1.89b4dd929e877p-581, 0.0, 0.0, 0.0, 0x1.dd50e4932aa79p-114,
     0x1.9224ffa0facc2p-794, 0x1.38c626d7ac107p-65, 0.0, 0.0, 0x1.aba507373ed4ap-768,
     0x1.8e57dde236eddp-814, 0x1.f70cbc3484a37p-518, 0x1.afb6815dc7396p-119, 0.0, 0.0,
     0.0, 0.0, 0x1.c1c9568dc60cap-162, 0x1.f8a667eaea5b7p-547, 0x1.f17ffe0b76719p-144,
     0x1.306c5336a9899p-476, 0x1.8ce303331e29bp-705, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3a85c4398390fp-926, 0.0, 0x1.99eba2aaae7bp-852, 0.0, 0.0, 0.0,
     0x1.d6c991ee59dbfp-158, 0.0, 0x1.c965d649f64c2p-278, 0x1.a7d61f6893899p-322, 0.0,
     0.0, 0x1.5fd098f54c86fp-374, 0.0, 0x1.76608029d9cadp-299, 0x1.482390e03114cp-319,
     0x1.51b4a99abba4ep-582, 0.0, 0x1.d1cce7984cc52p-752, 0x1.897c1b456e83p-576,
     0x1.0b9522929ab59p-860, 0.0, 0x1.78a7bf5acc7f8p-740, 0.0, 0x1.08e6989b70a62p-194,
     0.0, 0.0, 0x1.245b40733b8a5p-278, 0x1.db856fc8c4099p-381, 0.0, 0.0,
     0x1.ee9ab9e222a9ep-731, 0.0, 0x1.013b2eaa93b99p-668, 0x1.a1b8b1f47ba67p-283, 0.0,
     0x1.0c2f0c0629261p-657, 0.0, 0x1.23ad6bf2d66d8p-1001, 0.0, 0.0, 0.0,
     0x1.2f57029d6878p-684, 0.0, 0x1.0da2df9d83403p-585, 0.0, 0x1.794028704f2d5p-618,
     0.0, 0.0, 0x1.1352dede21333p-48, 0x1.ef1e2a2345cd1p-72, 0x1.935717d8fa71ep-636,
     0x1.d93a63c482f7ep-753, 0.0, 0.0, 0x1.2c967ebc8dccp-599, 0x1.fab57f0f4cc47p-731,
     0x1.0ce264529182bp-592, 0x1.5ec3ced8ad2d8p-240, 0x1.fb1d3b99233e6p-285,
     0x1.4b5410c40a8c2p-411, 0.0, 0x1.33741057f03d5p-456, 0.0, 0.0,
     0x1.6bc15dfbf3469p-783, 0x1.5716292c545dbp-94, 0.0, 0x1.906838534eb64p-317,
     0x1.600c00d3126cbp-290, 0.0, 0.0, 0x1.e6e1c1c02ab6ep-230, 0.0,
     0x1.e022310379886p-674, 0x1.dd769d4d390dap-103, 0x1.d88b77d59518ep-142,
     0x1.395d4435fcedfp-80, 0x1.a75155da1a82ap-571, 0.0, 0x1.700186a312bb5p-416, 0.0,
     0.0, 0x1.d6fb86c3157f4p-561, 0x1.9b85fd7326663p-775, 0.0, 0x1.95ea6125902b5p-558,
     0.0, 0.0, 0x1.961b46305708ap-265, 0x1.8644b2592908ap-131, 0.0,
     0x1.ed73a9c9037a8p-853, 0x1.a37eb2b4fe2c2p-68, 0.0, 0.0, 0x1.ea015919ebc8ep-833,
     0x1.1c13b52c1a1cfp-69, 0.0, 0x1p0, 0x1.a5631cb957178p-505, 0.0,
     0x1.797b6b714a4e9p-564, 0.0, 0.0, 0x1.43e374aaf7ad5p-224, 0x1.0d0bc267d7ceap-668,
     0x1.539ea7c8e4d2p-822, 0x1.017a1052631a1p-395, 0x1.0960eff2d7333p-529, 0.0, 0.0,
     0x1.022f85befddfap-473, 0.0, 0x1.47fce23034e53p-977, 0x1.5fb49853aa6a4p-631,
     0x1.dfef99cb2f30ap-761, 0x1.d71fead7e6dbbp-125, 0x1.818f91295c7b5p-347, 0.0, 0.0,
     0x1.37214c5c75985p-211, 0x1.2cfeb868b6676p-964, 0x1.db2ac753d672bp-310, 0.0, 0.0,
     0x1.6f319b338cefap-2, 0x1.c760ed384d5c1p-673, 0x1.5ffdbd82c2df5p-376,
     0x1.8165bfd4db4b1p-542, 0.0, 0.0, 0x1.e4a896237d6ep-941, 0x1.aedf07f4bae1bp-298,
     0x1.e02a99506eb4p-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6fc3570938ac1p-673, 0.0,
     0x1.2085d63d46e1bp-570, 0x1.02245d3625528p-752, 0x1.8c664dcfb03fp-972,
     0x1.cf9d1ac32c11fp-69, 0.0, 0.0, 0x1.5fc5f56988e87p-550, 0.0,
     0x1.34e00e97ff96fp-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fab9d66d03116p-48, 0.0, 0.0,
     0.0, 0x1.13e62aecc066bp-9, 0.0, 0x1.539bcd3b36454p-122, 0.0, 0.0,
     0x1.f1e08e767a9c5p-642, 0.0, 0x1.2e2af6b089cdep-108, 0.0, 0x1.a91e703d3550cp-832,
     0x1.18380f8a703e6p-473, 0.0, 0.0, 0x1.e3951d23c818bp-931, 0.0,
     0x1.0e8fe1abc0d61p-905, 0x1.a691a9ee1ed81p-377, 0x1.67fced8149b36p-209,
     0x1.ce4687e555678p-360, 0x1.8fc5b05344355p-773, 0x1.2f11482ffbfc3p-219,
     0x1.c40c7f622034ap-649, 0x1.c82aeedd8fbd5p-932, 0x1.99492793b247ap-236,
     0x1.b1ae477eded7bp-577, 0x1.cc481c513bf8dp-3, 0x1.e4c92ba3f900fp-803, 0.0, 0.0,
     0.0, 0x1.cdc439e2460cbp-920, 0x1.9ec2bcd0cad8dp-108, 0x1.dae7f0129781fp-32,
     0x1.9aa7bafba6747p-246, 0x1.623dac2f2d058p-945, 0x1.7139c188b2527p-1005,
     0x1.76ff8ab35671cp-114, 0x1.92dbf1c98d3acp-560, 0.0, 0x1.33db04a5bd0a6p-472,
     0x1.61727b134d215p-829, 0x1.5d3c5f9232aedp-488, 0x1.2cd3ef311925bp-254,
     0x1.3d0bba8a3af9fp-71, 0.0, 0.0, 0.0, 0.0, 0x1.b0eb06721fe64p-783,
     0x1.0ea12f108e3fbp-962, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.90b48673e9d4ap-867, 0x1.82adf9dbc5d02p-753, 0.0, 0x1.f1868068e3559p-977, 0.0,
     0.0, 0.0, 0.0, 0x1.7a3ea0475edacp-894, 0.0, 0x1.bc8bab7a00f16p-924, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.67c703e11e172p-965, 0x1.0a5d71afcc484p-1016,
     0x1.7d4d072c6c1ecp-230, 0.0, 0.0, 0x1.e453b998916ffp-776, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.348b779973bf6p-861, 0x1.9f77042c39836p-435, 0x1.967375e930ac1p-745,
     0x1.a03d416e8a0bbp-574, 0x1.75a327f24fb3ap-877, 0.0, 0x1.25efd56c74064p-376, 0.0,
     0.0, 0.0, 0.0, 0x1.f4d16083685adp-36, 0.0, 0.0, 0.0, 0x1.3643750b0068cp-415, 0.0,
     0.0, 0x1.edef59b70989cp-975, 0.0, 0.0, 0x1.53177c040cf25p-328,
     0x1.72107f164da2p-199, 0.0, 0x1.3d1390a46a709p-363, 0.0, 0x1.5487705c6da6ap-89,
     0x1.bea4c936bdf24p-529, 0x1.db10f7efde15ap-68, 0x1.3dc41b18dc1d7p-760, 0.0, 0.0,
     0x1.e9ef51440bd4ep-849, 0.0, 0x1.e6f7b63153e64p-263, 0.0, 0x1.b4f9ab6989b07p-414,
     0.0, 0.0, 0x1.b7c2b1f17fe1p-205, 0x1.eebb143b8f8bcp-137, 0.0, 0.0, 0.0, 0.0,
     0x1.aaa4ba4c874aep-333, 0.0, 0.0, 0x1.6b3a256730dafp-637, 0x1.dc35574a976dep-595,
     0.0, 0.0, 0.0, 0.0, 0x1.072085c25d83cp-443, 0.0, 0x1.6f0d4b64cbc53p-247,
     0x1.bf7243a93b29dp-443, 0x1.d493f5b82e1afp-246, 0x1.7fbfde9f50a72p-589,
     0x1.c474d1e6a3bf7p-764, 0x1.a7d5ba84b91cfp-64, 0.0, 0.0, 0x1.8082c7fcd035bp-32,
     0.0, 0x1.b0c4bc67c2735p-664, 0x1.4ec861a865523p-819, 0x1.e2b221fba4068p-785,
     0x1.c86c106162f27p-864, 0x1.33afb4335a57fp-188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95f4632369f02p-557, 0.0, 0.0, 0.0, 0x1.097cd9f8dae1fp-237, 0.0,
     0x1.6693b5a60bfd5p-58, 0x1.4bd9af2eda189p-91, 0.0, 0x1.ae82d5876fc99p-401,
     0x1.061383054ddebp-1000, 0x1.7ec0d12047a0dp-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81eb0d393aee1p-96, 0.0, 0.0, 0.0, 0x1.2ed74c0248b2bp-694,
     0x1.d0d9c7c0de15ep-1017, 0x1.4191a58f51e92p-310, 0x1.1b94c29e59325p-52,
     0x1.cefe029e67ef1p-994, 0x1.fa56d7a6bbd0bp-491, 0.0, 0x1.79a57ff8b470fp-145, 0.0,
     0x1.96b1973606429p-453, 0x1.ba32b4d60f8fcp-800, 0.0, 0x1.6e40761658e9ep-38, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4aa42cd3026dep-271, 0x1.a58b9bf53ac79p-812,
     0x1.6ff93626424bep-926, 0x1.6f8b5ab6ffa53p-58, 0.0, 0.0, 0x1.8c825d8a7b2cfp-677,
     0.0, 0.0, 0.0, 0x1.f095b1ca48313p-582, 0x1.cb10aa26769e9p-860, 0.0, 0.0, 0.0,
     0x1.4e34df9eba3f9p-591, 0x1.5109d9296a35dp-708, 0x1.390c04a8b291cp-76,
     0x1.fc8a59e5c5dep-1012, 0x1.2aba1d5e22132p-804, 0x1.4a0e2de150d8ap-268, 0.0, 0.0,
     0x1.41b999de8f5f2p-374, 0x1.3407cf0a53548p-122, 0.0, 0.0, 0.0, 0.0,
     0x1.091db98178ebbp-516, 0x1.99aa386f1b3e9p-604, 0.0, 0x1.d4562afbccfafp-456,
     0x1.8a58047d02c11p-843, 0x1.a2b0e3e1627f4p-700, 0x1.a329e68c3d0a3p-801,
     0x1.a36824540327dp-886, 0.0, 0x1.806218e7eb078p-819, 0x1.95ba8957e7eaap-128, 0.0,
     0x1.ab449d04f9147p-243, 0x1.762c08a3d05ecp-395, 0x1.e3525dd9e8022p-85, 0.0,
     0x1.0a315c7f78f64p-450, 0.0, 0x1.31f64a2962a7dp-173, 0.0, 0x1.a393dd533d1bdp-143,
     0x1.7f9da28d4ab03p-803, 0.0, 0.0, 0x1.b2d40857364a9p-142, 0x1.89056b0b5b196p-623,
     0x1.63e7b65b86ffdp-401, 0x1.ece9661fa4d7p-985, 0x1.7dada5a9a325dp-601, 0.0,
     0x1.3793014dade49p-434, 0.0, 0.0, 0.0, 0.0, 0x1.fcb75baa36504p-126,
     0x1.78b18f865adb8p-935, 0x1.b7db748569dfp-1021, 0.0, 0.0, 0x1.b3e623a18f3a4p-40,
     0.0, 0x1.3f1e1dc048535p-357, 0x1.6d17f26937975p-455, 0.0, 0.0,
     0x1.a3cc31476bddap-563, 0x1.eb3d1a584f329p-303, 0x1.117b7e5e06c96p-285, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.baf0385f6e62ep-372, 0.0, 0x1.fc1d53ea30d15p-710,
     0x1.d74426e6e4355p-331, 0x1.7748438202472p-654, 0x1.e97235583577p-370,
     0x1.b7c80a7848822p-412, 0.0, 0x1.9c899e639a6d5p-594, 0x1.32991de59dd5ep-330, 0.0,
     0x1.10f86af0ec817p-816, 0x1.f7a090d7b5d1p-201, 0x1.a8c58e1a783d2p-88, 0.0,
     0x1.09f8407ccfd43p-431, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db170001b0f7dp-240,
     0x1.2e33824ff939fp-416, 0x1.1d673cec18497p-119, 0x1.a2422c0c07825p-23,
     0x1.5a45c7c9d0201p-426, 0.0, 0.0, 0x1.3e9d3f27e766p-347, 0x1.9aa476f866396p-887,
     0x1.2b6dce31f6c2p-106, 0x1.499f1a19c5ecdp-734, 0.0, 0.0, 0.0,
     0x1.18bb5b339b45ap-957, 0x1.05a5fd0fab593p-57, 0x1.f07514728927cp-131,
     0x1.c4e8561d9ef32p-1004, 0.0, 0.0, 0x1.9bf86e55d70bap-342, 0.0,
     0x1.6de97dc3d5b19p-32, 0x1.1ec1349412fb7p-959, 0.0, 0x1.e6193eb0b09dap-74, 0.0,
     0x1.70ccaebe89ce4p-787, 0.0, 0x1.7c9eb7847a631p-211, 0.0, 0.0,
     0x1.62570d8021a1bp-966, 0x1.45aebe4a5fa3fp-896, 0.0, 0.0, 0.0, 0.0,
     0x1.0795e039feedep-218, 0x1.152a378a4adb5p-178, 0.0, 0.0, 0x1.0aad94d0c8b44p-890,
     0.0, 0x1.81b494dc52599p-991, 0x1.e3aab3fce41bbp-257, 0x1.c97d102ddb21ap-841,
     0x1.6c69f1ae2d629p-16, 0.0, 0.0, 0.0, 0.0, 0x1.ee7ae2e5eea2fp-419,
     0x1.fb47f893b4cfap-426, 0.0, 0x1.5ba32c9a588a2p-812, 0x1.fb725dd9f09a9p-701, 0.0,
     0.0, 0.0, 0x1.a9430644e82c6p-760, 0.0, 0.0, 0.0, 0x1.187d525f85478p-157,
     0x1.a6430175a692ap-716, 0.0, 0x1.8ff70bb9d66bcp-40, 0x1.78d7d8152b92bp-562,
     0x1.40a7e8cb57e8ep-653, 0.0, 0x1.f0cfd7af24878p-142, 0x1.6a7ab49e5b135p-90, 0.0,
     0.0, 0.0, 0.0, 0x1.27e4147a0f615p-642, 0x1.09c22adefb404p-965, 0.0, 0.0, 0.0,
     0x1.b968bea651affp-276, 0.0, 0x1.065b535175905p-851, 0.0, 0.0,
     0x1.c76a6781cc2bbp-35, 0.0, 0.0, 0.0, 0x1.4074d0093ca7bp-622,
     0x1.fd71f02d5377fp-596, 0x1.c414d65eba41fp-1008, 0.0, 0.0, 0.0,
     0x1.078c3f8eda513p-910, 0.0, 0.0, 0.0, 0.0, 0x1.74fd8be3b6729p-780,
     0x1.2cda1c3380a7fp-229, 0.0, 0x1.6b9f438e75425p-703, 0.0, 0.0,
     0x1.9032aa9d6bdp-382, 0x1.ae2abef4b4d0ap-163, 0.0, 0x1.343854f2de043p-155,
     0x1.c5a92d96dbbadp-658, 0.0, 0.0, 0x1.7ce657fbb4f66p-929, 0.0,
     0x1.1bb1c1a588137p-900, 0.0, 0.0, 0x1.e2ebe3619d19ep-391, 0.0,
     0x1.1c50baa2a122fp-988, 0.0, 0.0, 0x1.01a46765591bcp-236, 0.0, 0.0, 0.0,
     0x1.8d8f283e972f5p-418, 0x1.1cab5f00e722ap-662, 0.0, 0.0, 0x1.b73a98ad45462p-77,
     0x1.f8203f6dd7eafp-967, 0.0, 0x1.bdba228dde1efp-322, 0.0, 0.0, 0.0,
     0x1.59af609c99437p-415, 0x1.881815a0f400ap-498, 0x1.f0621402807f6p-988, 0.0, 0.0,
     0x1.2cfd9ef006131p-214, 0.0, 0x1.46327ade31989p-216, 0x1.366644e74275ap-842,
     0x1.02a2295d9ba36p-325, 0.0, 0.0, 0.0, 0.0, 0x1.d45afa283b8dap-554,
     0x1.9725059fbdc97p-798, 0x1.c04ab418e58aep-982, 0.0, 0x1.7f46bde4a0a47p-365, 0.0,
     0x1.a4256c981a8aap-645, 0.0, 0x1.bd3bd26ae57a1p-225, 0x1.fb73406599e28p-608,
     0x1.d883452dd39d4p-620, 0x1.d155759b12e8ep-232, 0.0, 0.0, 0x1.246584a984504p-254,
     0x1.c5ba78436b1e8p-165, 0x1.eb36a7da47a86p-879, 0.0, 0x1.b3b33609165d4p-567, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.57ba8a5783f63p-346, 0.0, 0.0, 0x1.3697f34273a4ep-794,
     0x1.d36e7e7714604p-49, 0.0, 0x1.b5ab967969092p-252, 0.0, 0.0,
     0x1.4507a71d59215p-743, 0.0, 0.0, 0x1.0888a0700363cp-851, 0.0, 0.0, 0.0,
     0x1.cc9b401beb803p-232, 0.0, 0x1.17c1006a9febap-871, 0.0, 0x1.08ba1af5b9b2ep-395,
     0x1.169279d2230b9p-23, 0x1.3829905dd6b9fp-700, 0.0, 0.0, 0x1.af3ba6188a511p-219,
     0x1.f205e606ea804p-784, 0x1.ed8a21af6fa5ep-138, 0x1.abe25846df7bfp-904, 0.0, 0.0,
     0.0, 0.0, 0x1.57c5bb08cea4dp-159, 0x1.8a132149bb07ep-208, 0.0,
     0x1.5dbccc8ee84fdp-885, 0x1.cd0808050da4ep-850, 0.0, 0x1.4a8fb4f976bf4p-780,
     0x1.79f1bb2a637fcp-972, 0.0, 0.0, 0x1.bd78d0ad94175p-16, 0.0,
     0x1.bdeadea799e18p-960, 0x1.fbcca6c18856ep-124, 0.0, 0x1.1b13a9d86c2d9p-593,
     0x1.97f4fb1babbb2p-360, 0.0, 0.0, 0x1.7d1f3b964de61p-828, 0.0,
     0x1.9000cbe1b43fdp-101, 0x1.a34a0db42c327p-306, 0.0, 0x1.18bb25bf11f9fp-782, 0.0,
     0.0, 0x1.d9e0811e2230bp-167, 0x1.dd969e08906c2p-506, 0x1.00bdaf049cd6bp-959, 0.0,
     0.0, 0.0, 0x1.8d25cd7f8798p-820, 0x1.306d4d5b0e929p-401, 0.0, 0.0, 0.0,
     0x1.fddd6d2bfe9b2p-157, 0.0, 0.0, 0x1.4f2d30ad4eefap-428, 0.0
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
            tmp1 = Sleef_finz_lgammad1_u10purecfma(tmp0);
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
    printf("Sleef_finz_lgammad1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_lgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
