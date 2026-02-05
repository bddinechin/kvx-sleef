/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammad2_u10kvx.c --function \
 *     Sleef_finz_lgammad2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.1274d043485b5p-52, 0.0, 0.0, 0.0, 0x1.9ee7ec5b9e4f3p-945, 0.0,
     0x1.0b723bc7149a1p-782, 0.0, 0.0, 0x1.12712144697a3p-805, 0.0,
     0x1.6fcbd2e74cf1cp-313, 0x1.49624bc730959p-48, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b9cedc00e8f7p-110, 0x1.b8cf41cd53c32p-1021, 0x1.e29cc3a7b9245p-961, 0.0,
     0x1.4c46496fdf08dp-548, 0.0, 0x1.a24d76b331fa1p-173, 0.0, 0.0,
     0x1.8f608b21e09ffp-780, 0x1.f926113efcdc6p-513, 0.0, 0.0, 0x1.89e60211cf291p-56,
     0.0, 0x1.0d47ea48d49dfp-811, 0x1.2e1770235649cp-839, 0x1.f096be6f5576dp-317, 0.0,
     0x1.627a1e2bb7edp-304, 0x1.69a1d13a1dd89p-336, 0.0, 0.0, 0x1.f582791cc62f1p-993,
     0x1.d331dda3f18a2p-892, 0.0, 0x1.aa6badbbb3239p-585, 0.0, 0.0, 0.0, 0.0,
     0x1.58c3c57447556p-937, 0.0, 0x1.5b7b74abe7729p-812, 0.0, 0.0,
     0x1.ba8803210480fp-553, 0x1.7f39ff6720e52p-130, 0.0, 0.0, 0x1.02d78a4e76b89p-578,
     0.0, 0.0, 0x1.dd7ca1e540e5ap-751, 0x1.1a3636d16e1b8p-972, 0x1.5e112f86a6a7ap-771,
     0x1.466571764b122p-859, 0.0, 0x1.53d04c38105afp-408, 0.0, 0x1.a5ab9c3ffde55p-746,
     0x1.07ef906822891p-278, 0.0, 0.0, 0.0, 0x1.2e7390ed15555p-1016, 0.0,
     0x1.49c3b6fc22469p-681, 0.0, 0.0, 0x1.d9ba94f342678p-518, 0.0, 0.0,
     0x1.f4e9a0f8a05abp-191, 0.0, 0x1.8799ecb1318b4p-691, 0x1.be4d135252af9p-628, 0.0,
     0.0, 0.0, 0.0, 0x1.0b7b070cb5459p-999, 0x1.aa968d26a1e06p-439, 0.0, 0.0,
     0x1.bd8c827852b3fp-168, 0x1.a17947e0e00fep-353, 0.0, 0x1.d7bc2ddb5b55dp-645,
     0x1.85934baf2a939p-497, 0x1.48d3b0c2ea91ep-678, 0.0, 0.0, 0.0,
     0x1.37b2b5824a882p-11, 0.0, 0.0, 0.0, 0x1.0d7f113bf659cp-448,
     0x1.cbc12f38c1de4p-865, 0x1.278d42bdd96ecp-588, 0.0, 0.0, 0.0,
     0x1.f61ae4acecdd5p-467, 0x1.b87099f0ce1c8p-746, 0x1.4cc3b0b438a65p-97,
     0x1.b8605827b860ap-482, 0.0, 0x1.7b0668887309ep-263, 0.0, 0.0, 0.0,
     0x1.bbdf9067b85cfp-926, 0.0, 0x1.1a8e46a360fbbp-201, 0.0, 0.0,
     0x1.8c1dd3853dca6p-556, 0.0, 0.0, 0x1.6a6dca40eded2p-514, 0.0,
     0x1.cddd0931abf4ep-769, 0.0, 0.0, 0.0, 0.0, 0x1.cddecfbf8d85ep-862, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.06e197b58f48bp-524, 0x1.9107c0784d34fp-624,
     0x1.ee0887ef17d0fp-364, 0.0, 0.0, 0x1.4b3fd2d29c247p-1, 0.0,
     0x1.ac9b0d90c377bp-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ebaf056bdcb04p-128, 0.0,
     0.0, 0x1.a83279d396d09p-117, 0x1.0f0a3f462a7e4p-734, 0.0, 0x1.c0db2b94ab4cp-975,
     0x1.0d4ed54efced9p-545, 0.0, 0x1.9d6f80af44658p-692, 0.0, 0x1.f687eddc86009p-403,
     0.0, 0.0, 0.0, 0.0, 0x1.d5983396e3432p-389, 0x1.c79c4254d7d5ep-66, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d6a4eb8245e16p-974, 0x1.c8ab6e890ecdap-1016,
     0x1.3a24ae0e1df2dp-31, 0.0, 0.0, 0x1.669858a80995p-468, 0x1.c780cff4d8af1p-495,
     0.0, 0.0, 0x1.b0117462e8af7p-728, 0x1.daa21864ae769p-697, 0.0,
     0x1.8363f54c129a2p-271, 0.0, 0x1.fc1c3d9015a83p-240, 0.0, 0.0,
     0x1.c131b13e1ec99p-768, 0x1.1565f02e09342p-517, 0x1.06ed2769df071p-529,
     0x1.39a08a9e5f96ep-790, 0.0, 0.0, 0.0, 0x1.e59c1b05f7eacp-853, 0.0, 0.0,
     0x1.b8407febb024ap-439, 0x1.b0b1ed6ad0ddap-773, 0.0, 0x1.2058aa8eca5e6p-79,
     0x1.cd5f8ec55d6adp-138, 0x1.45b6cc59a7765p-611, 0.0, 0.0, 0x1.20a3c89d85ad7p-839,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.874302c5a3015p-757,
     0x1.17180e1050222p-129, 0.0, 0x1.01ba3c07c22dap-147, 0x1.e21bd4847838bp-254, 0.0,
     0x1.b0ad80974f356p-833, 0x1.07ecbfa635ffp-301, 0x1.b1b410920b751p-94,
     0x1.6b67b2504acf9p-27, 0x1.f7ae0df8ec68dp-373, 0x1.7c1cc69f48642p-862, 0.0, 0.0,
     0.0, 0x1.8ca0e1140ef4ap-985, 0.0, 0x1.e486eaf042d89p-527, 0x1.30209009ff7aep-661,
     0.0, 0.0, 0.0, 0x1.c65668f5610b1p-646, 0.0, 0.0, 0x1.9ba107d5d8d4ep-48, 0.0,
     0x1.66ca7e549abf7p-617, 0.0, 0x1.5116d65a5ad8fp-705, 0x1.9163365bd7691p-940, 0.0,
     0x1.a0eec7774101cp-498, 0x1.2ba394902544cp-758, 0x1.a34d1d25b0947p-123,
     0x1.51194edf047b1p-910, 0.0, 0.0, 0x1.d1f510147c8c1p-322, 0x1.3dc5ee12c830ep-588,
     0.0, 0.0, 0x1.e8b512bfebe3cp-539, 0.0, 0.0, 0x1.268d39c5c69b4p-351, 0.0,
     0x1.faa47423b7395p-997, 0x1.2917df5b15717p-835, 0x1.7072d4c64533dp-310,
     0x1.dfabf154d1d45p-749, 0x1.eff86ecef8751p-401, 0x1.fb75aa4c4d904p-263,
     0x1.ad6abf4db446ep-828, 0.0, 0x1.2d04babc523c6p-583, 0.0, 0x1.ce7a4f20dafbap-84,
     0.0, 0x1.5229f3ec6b238p-67, 0.0, 0x1.89c9169654dd2p-209, 0.0,
     0x1.57b06fe280925p-269, 0.0, 0.0, 0.0, 0x1.5aa21fb53226p-249,
     0x1.2bfb1e721d568p-164, 0.0, 0x1.5da64f8a4675fp-51, 0.0, 0x1.8e4995ffe27bep-401,
     0.0, 0x1.8b1968009c615p-969, 0.0, 0x1.d79ba6822bc6cp-651, 0.0,
     0x1.bb38e055814c4p-906, 0.0, 0.0, 0x1.65b374800160fp-325, 0.0,
     0x1.6064995150b7ap-545, 0x1.6f7115cc81cb1p-293, 0x1.42d5062eb9083p-889,
     0x1.282133d1d3609p-250, 0x1.381aa940c7d3p-690, 0.0, 0.0, 0x1.e60750d87369bp-999,
     0x1.f48b927cae735p-932, 0.0, 0.0, 0x1.11b68d6919afp-210, 0x1.3a3c9f97f5c08p-215,
     0x1.f86e71b6a831bp-897, 0.0, 0.0, 0.0, 0x1.ec10cf0d73b81p-303,
     0x1.f95364c56a1b8p-658, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.186690c6c8e08p-218, 0.0,
     0x1.728073611808p-381, 0.0, 0x1.f9abd3fab43fep-600, 0.0, 0x1.6268ffc61f3e6p-559,
     0.0, 0x1.212733f6c4795p-795, 0x1.3cbf844cf37c1p-217, 0x1.239c5c5028e7dp-1019,
     0x1.d6cb7378a94ebp-314, 0.0, 0x1.c8ac90c315caap-805, 0.0, 0.0, 0.0,
     0x1.fed58c1fbb073p-885, 0x1.57a171bc05207p-533, 0.0, 0.0, 0.0,
     0x1.1d6462178df32p-596, 0.0, 0.0, 0x1.bac872137f8aap-785, 0x1.d6648125f5c81p-190,
     0x1.2593d9ed08dc2p-790, 0.0, 0x1.f79f18528df0cp-487, 0.0, 0.0, 0.0,
     0x1.c5c6f3e273116p-954, 0x1.41ad3d168adf5p-471, 0.0, 0.0, 0.0, 0.0,
     0x1.57f0b5a920b03p-599, 0.0, 0.0, 0x1.f136208b412fcp-819, 0x1.99ad5f6871c77p-925,
     0x1.676b48dbe7351p-83, 0.0, 0.0, 0x1.0c943566be6d2p-1005, 0x1.2ef05011c7a7cp-431,
     0x1.a4efb7a22541p-569, 0x1.836b316eaa9aap-1021, 0x1.ddbabba171355p-932, 0.0, 0.0,
     0x1.ca1ac9471dd73p-899, 0x1.4fdfbfb29286cp-213, 0.0, 0.0,
     0x1.3a3b502e7bd42p-1022, 0x1.b0f7034567877p-449, 0.0, 0.0,
     0x1.f4bb45755fdc3p-207, 0.0, 0x1.4cd32e017db7p-263, 0.0, 0x1.10376c3390d5p-294,
     0x1.feddb8d2375c9p-145, 0x1.74c78a96c3bcep-515, 0.0, 0x1.a7559713ea714p-906,
     0x1.8ccf75397da6p-973, 0x1.a2ed66e004605p-269, 0.0, 0x1.51ac68420d81ep-4,
     0x1.24e066dd93685p-103, 0.0, 0.0, 0x1.1faf8aeabe2e7p-850, 0x1.7c03cdbe14323p-547,
     0x1.aaa59f2e68f6ap-28, 0x1.91b7663b79ee1p-228, 0.0, 0x1.3d5f5e6532e34p-540,
     0x1.6ba136d9d0b53p-96, 0x1.55c94cc1dc2fcp-757, 0x1.8888076813e54p-981,
     0x1.2470790ce74ccp-838, 0x1.d39328aa4c676p-247, 0x1.9ae2e21284cf2p-526,
     0x1.4e77ba17074d3p-157, 0.0, 0x1.b928f6d15c13ap-736, 0x1.93451be0e4001p-182,
     0x1.cfb9e82354971p-8, 0x1.7c96340e9cdaap-472, 0.0, 0x1.c72f27960e7afp-80, 0.0,
     0x1.05f001dca23a2p-272, 0x1.27ec53fca1443p-401, 0.0, 0x1.47c9275f4b83dp-60, 0.0,
     0x1.ca1898eb6f296p-898, 0x1.a2833cc1c4c02p-38, 0.0, 0x1.b93aad893cbap-379, 0.0,
     0.0, 0.0, 0.0, 0x1.8e40baf7f054p-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.27cab7e23d8acp-493, 0x1.595ef744d2595p-570, 0.0, 0x1.8430c33026302p-981, 0.0,
     0x1.22dab49010c2cp-368, 0x1.39e39a714a207p-521, 0.0, 0x1.eee7eaccd7a09p-136, 0.0,
     0.0, 0x1.43dc2f7cad4ebp-677, 0x1.f5a708f3b15efp-310, 0x1.10f0267582a8dp-705,
     0x1.c0ac979d401fbp-446, 0.0, 0x1.6f089f34d4afbp-354, 0x1.23387e585a15ep-715, 0.0,
     0.0, 0.0, 0x1.38032a835068dp-852, 0x1.3962b6f5a89a1p-974, 0.0,
     0x1.8f9eaa585bd39p-795, 0x1.29bca02a01aa8p-415, 0.0, 0.0, 0x1.053052219743dp-630,
     0.0, 0.0, 0x1.a28fe56dd7e3ap-467, 0x1.a952cb1015d89p-463, 0x1.191ffe550219ap-27,
     0x1.7d4cb13df5eecp-467, 0.0, 0.0, 0x1.0a5e98b3e3f3bp-407, 0x1.76c2834936219p-604,
     0.0, 0.0, 0x1.fd8ab030b9f88p-399, 0.0, 0.0, 0.0, 0x1.f2e99c99c4dfdp-770, 0.0,
     0x1.b3ec412676c16p-698, 0.0, 0.0, 0x1.4a7995d7638a2p-433, 0x1.3c053d70d1f95p-489,
     0x1.933ebb39abc53p-342, 0.0, 0x1.b6428c11b2e8fp-739, 0x1.2aef0e8a712dbp-411, 0.0,
     0x1.ca65eb2e0dddfp-541, 0x1.d0ff2248ac4f1p-549, 0x1.75979525cc2e7p-492, 0.0,
     0x1.284c383bcfeb3p-332, 0x1.b8aa3c7e8e81dp-646, 0.0, 0x1.4bd75a5810511p-185,
     0x1.c84aa093e3fc3p-464, 0x1.01f6f768529fep-539, 0x1.bb7992c7d91b4p-555, 0.0,
     0x1.42abada9bccdbp-696, 0.0, 0x1.83546c44165bcp-259, 0x1.d882824759787p-285,
     0x1.8f8dd95bfb3ecp-959, 0x1.9e1fd2d19fc82p-418, 0x1.cb9ef52757659p-394,
     0x1.a2706110d2777p-496, 0.0, 0.0, 0.0, 0x1.d956c66507b7dp-23,
     0x1.a1e5bf2c19be8p-455, 0x1.24cb19d5a5d4bp-1014, 0x1.9d333ecc485ecp-904,
     0x1.6691a2091d3b8p-830, 0x1.f5cf3b5b4fc33p-45, 0.0, 0.0, 0x1.21f2c114a3aeep-555,
     0.0, 0.0, 0.0, 0x1.43d9865d6ec3p-154, 0x1.f908cf4db9dc5p-949, 0.0, 0.0,
     0x1.357882f4f9f9bp-270, 0.0, 0x1.059081a7f8eabp-775, 0x1.5b6c01ced718bp-559,
     0x1.c812d85c56e91p-445, 0.0, 0x1.43c2785fd1823p-238, 0.0, 0.0,
     0x1.e3de22353f024p-517, 0.0, 0.0, 0x1.a5ce3baa1a4e4p-258, 0x1.4c9604c22354ep-966,
     0.0, 0x1.7e002c61fb8bp-894, 0.0, 0.0, 0x1.b49060793c3b9p-847,
     0x1.d6e4555c957e2p-387, 0.0, 0x1.1c2ba6a9b40f5p-215, 0.0, 0x1.5d296d6007756p-343,
     0x1.fd7737fa2c13bp-414, 0x1.812a8a62348d4p-504, 0.0, 0.0, 0.0, 0.0,
     0x1.6846367c67bddp-260, 0x1.53a7adaa6edc1p-853, 0.0, 0x1.7fc92333d6da5p-402,
     0x1.61318af33b781p-507, 0.0, 0x1.b84fcca8ad207p-490, 0.0, 0x1.74b7a54053c5dp-334,
     0x1.6f03eda9d73acp-637, 0.0, 0x1.ce0e3c0a0729fp-18, 0.0, 0.0,
     0x1.090d952d7e4b5p-104, 0.0, 0.0, 0.0, 0.0, 0x1.9d449d051de64p-635, 0.0, 0.0,
     0.0, 0x1.d2ebf06583898p-735, 0.0, 0.0, 0x1.07f38fa2445f8p-906, 0.0, 0.0, 0.0,
     0x1.0883a2756a5e8p-908, 0.0, 0x1.80cdfb7919bfap-701, 0x1.4f73c71b5ad37p-970,
     0x1.c48c6d188031bp-82, 0.0, 0x1.0d858d353c31fp-401, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98254f909ee77p-437, 0x1.3273a13f50573p-114, 0.0, 0.0, 0x1.e890b14ed4198p-304,
     0.0, 0x1.2d92285db2b4cp-835, 0.0, 0.0, 0.0, 0x1.2b5da509d179ep-779,
     0x1.65e762c2ef7b2p-872, 0x1.a9b8d894cd59fp-663, 0x1.aa98cd5f4d8afp-608, 0.0,
     0x1.5dd5f976c8762p-520, 0x1.1199b9bebacp-8, 0.0, 0.0, 0x1.7a5eadfac8152p-846,
     0x1.9170a92ec9354p-808, 0.0, 0x1.a082803f68834p-1003, 0.0, 0.0, 0.0,
     0x1.6681446431251p-534, 0x1.d8b9576b9bbcep-967, 0x1.00b17cb798852p-969, 0.0,
     0x1.bc4a69599f6b1p-881, 0x1.c3b2d0796c7ebp-656, 0x1.3dd10b58b102dp-148,
     0x1.a4085b3919fep-710, 0x1.dc12ad0a77598p-282, 0x1.3d4b1ecdbe935p-861, 0.0, 0.0,
     0x1.4bbc4ed7de29p-434, 0x1.4161df2407c7fp-874, 0x1.6ab949bdb53b8p-521,
     0x1.90158c1454c47p-728, 0x1.b5e1d1ca3a8e4p-133, 0x1.18213de95dc8cp-933,
     0x1.3e431ea381c47p-964, 0.0, 0x1.6970ae671d5f7p-543, 0x1.ead61465c2c91p-633, 0.0,
     0.0, 0x1.876b2432f1d56p-419, 0.0, 0.0, 0x1.cb2a271a75f62p-307,
     0x1.5425c05f3f778p-110, 0x1.ce46f55e19a5ep-764, 0.0, 0x1.290d4cc09d3e6p-266, 0.0,
     0x1.6a93196e8c22bp-542, 0x1.342954d5f7831p-802, 0.0, 0x1.5d496320b1b6p-36, 0.0,
     0x1.80d7f3eda733p-913, 0x1.9ec1647150c26p-1003, 0.0, 0x1.6341f6ec97d95p-448,
     0x1.355e4e8388abbp-511, 0.0, 0x1.b64b963d9d9f3p-35, 0x1.cf6f8cc1a0cf5p-377, 0.0,
     0.0, 0x1.5057c0599444ep-264, 0x1.3e2b78ae37f8cp-19, 0x1.d29e49c6cd61p-118,
     0x1.6efa969dca3e7p-737, 0x1.880fe4240aef7p-644, 0x1.a5a868b074f3dp-767, 0.0, 0.0,
     0.0, 0.0, 0x1.2be5a62aecc6ap-605, 0.0, 0.0, 0x1.72d8d3bf73b49p-878,
     0x1.eb2d20923334fp-801, 0.0, 0.0, 0x1.fec2a5c8919afp-601, 0.0,
     0x1.f60c99a8088bcp-877, 0.0, 0.0, 0.0, 0x1.58a877910b1b4p-799,
     0x1.37aa36f9be3adp-638, 0x1.cd14f50903aadp-414, 0x1.ec41f558308f3p-966,
     0x1.86b693578fb5cp-273, 0x1.541e9a7df78ebp-457, 0.0, 0.0, 0x1.b8347895f01a8p-1,
     0.0, 0.0, 0.0, 0.0, 0x1.71daf394573c6p-183, 0.0, 0x1.39edbef8c38a6p-174,
     0x1.045f6c42baae9p-560, 0.0, 0x1.35ed90a7804d5p-496, 0.0, 0.0, 0.0,
     0x1.42bb30c6efafdp-743, 0.0, 0.0, 0x1.4df5e167e9b8ap-483, 0x1.ed4329f31354p-13,
     0x1.4bb2aeddb8b0ap-467, 0x1.bae664c1b883cp-569, 0x1.ff65d6fcdc798p-142,
     0x1.7fd59a26ddc77p-656, 0.0, 0x1.138a44b23c876p-969, 0.0, 0.0, 0.0, 0.0,
     0x1.5b97f10387fc5p-219, 0x1.d760270eba60fp-1003, 0x1.2175abb5e3dc1p-725,
     0x1.14186e4f5896cp-448, 0x1.51ed40ad1638ap-396, 0x1.aa4b9efca5985p-661, 0.0, 0.0,
     0x1.7ac4cfca1d00ap-710, 0x1.2b455a99d0ac7p-817, 0.0, 0x1.fdb9f0fa41fe7p-27,
     0x1.3ccf57d620624p-1013, 0x1.0ae117d3f1507p-509, 0.0, 0.0,
     0x1.cc7d247ad5433p-807, 0x1.707081777aa3fp-309, 0.0, 0x1.c6ecdcfa067f5p-158,
     0x1.1dd87bb280feep-842, 0x1.07f7c4eb03dfcp-68, 0x1.cc07b7c907c55p-350,
     0x1.a3da4facadf64p-798, 0x1.39428b617baap-497, 0x1.1ca4313384991p-691,
     0x1.d63542b4dc8dep-158, 0.0, 0x1.7dacae29400f7p-891, 0.0, 0.0,
     0x1.bbda544161aa6p-157, 0x1.bf19defbaa408p-1016, 0x1.59163083b15a7p-453,
     0x1.ea6fb1c05d566p-768, 0x1.184477f7e9fd3p-971, 0x1.141032a41ac2cp-548,
     0x1.3b0225df69092p-41, 0x1.a9354f33c0b23p-146, 0x1.286038ba5050ep-927,
     0x1.7b1bfbef9cdfcp-795, 0x1.517cf37eb0066p-42, 0x1.6e4dd33ba9766p-290,
     0x1.9f05f33c0eb7cp-927, 0.0, 0x1.9f656147d1be7p-96, 0x1.b4df6bccf87d3p-266, 0.0,
     0x1.4980e0df4b7a8p-627, 0x1.26c1a87b982e8p-937, 0x1.e46568c83bc26p-852, 0.0,
     0x1.759b53cef7d93p-501, 0x1.e8ce5d3672b3ep-467, 0.0, 0.0, 0.0, 0.0,
     0x1.794465ddd53a1p-141, 0.0, 0x1.ff92dfa280597p-840, 0.0, 0x1.c51b664b2838ap-706,
     0.0, 0x1.7b12f86a636f4p-103, 0.0, 0x1.f490a21a924fep-623, 0.0, 0.0, 0.0,
     0x1.c4fda659c32c6p-460, 0.0, 0.0, 0x1.a7f6f99a782eep-394, 0x1.8e3100ca86289p-663,
     0.0, 0.0, 0x1.6e2392d9855c3p-523, 0.0, 0x1.f5b588c784125p-329,
     0x1.246c5987224f9p-188, 0.0, 0.0, 0x1.69cd62e74e8dbp-902,
     0x1.d148bb51b1784p-1014, 0.0, 0.0, 0.0, 0x1.d0313f51569e7p-168, 0.0, 0.0, 0.0,
     0.0, 0x1.71df9bacdd1b1p-442, 0x1.49b1da5ec91d5p-792, 0x1.9279525090898p-586, 0.0,
     0.0, 0x1.12c8da4a2617ap-257, 0.0, 0x1.16c97a2db26c8p-123, 0x1.0825fd0e7e2ffp-757,
     0.0, 0x1.b21f9791f8ddep-176, 0.0, 0x1.f505082e96714p-360, 0x1.8ed5c786143f8p-166,
     0x1.56edb1650b12fp-570, 0.0, 0.0, 0x1.ae33ecc8691a4p-707, 0x1.66507173e552ep-663,
     0x1.ef8c83a2f4fa3p-627, 0x1.ce6bf51cba6dfp-724, 0x1.498e6a755d96dp-550,
     0x1.27b4a5711a246p-302, 0.0, 0.0, 0x1.ad2a04dfe3b42p-929, 0.0,
     0x1.a29e5ae81d777p-521, 0.0, 0.0, 0x1.bf726a39c354bp-526, 0.0, 0.0, 0.0, 0.0,
     0x1.6ddc3b6add12cp-639, 0.0, 0x1.d294e4fc6d358p-409, 0x1.dd8923ba16fa8p-289,
     0x1.0c9906e5f0954p-428, 0x1.c72ee1861c21bp-405, 0.0, 0x1.ae136428625cdp-227, 0.0,
     0x1.65485af3ac25ap-457, 0x1.c875663047dfep-583, 0x1.e9e6a57a176bfp-858, 0.0, 0.0,
     0.0, 0x1.f382152f4b88p-159, 0x1.3ef1140fe3914p-234, 0x1.601296a2092c3p-870, 0.0,
     0x1.fd01c4824efe8p-499, 0x1.bae4c62c37f56p-450, 0.0, 0x1.553cd01894a6p-118,
     0x1.e492b572b31fbp-528, 0.0, 0.0, 0x1.d04e74221dfe7p-944, 0.0,
     0x1.a1fa66cecc44cp-193, 0.0, 0.0, 0.0, 0.0, 0x1.51f806d2fd53bp-836,
     0x1.5e6b68a38c91dp-381, 0.0, 0.0, 0x1.2fec9485c7bfap-490, 0x1.130e68bd88b34p-473,
     0.0, 0x1.16658f5d97e4dp-354, 0.0, 0.0, 0x1.9308bb115f7cdp-100, 0.0,
     0x1.ab1a2a6a0a97p-857, 0x1.c4721e6d2a2a7p-483, 0x1.2226c06a63088p-816,
     0x1.7bff35d296d31p-749, 0x1.b1a73235dc732p-66, 0x1.625bc133a489fp-689, 0.0,
     0x1.2a4ee417eafacp-792, 0.0, 0.0, 0.0, 0x1.f326e2bad6704p-579, 0.0,
     0x1.4ecdc04c6732cp-16, 0.0, 0x1.194c4ff05c8fdp-72, 0.0, 0x1.c2a6092a40d55p-1015,
     0x1.646f77055e71p-474, 0x1.089c44202112p-27, 0x1.a0463e9dbb5dfp-619, 0.0, 0.0,
     0.0, 0x1.3b64305f510efp-510, 0.0, 0x1.b1a3a5b66f676p-576, 0x1.476c87a99c813p-134,
     0x1.c77871e50302bp-683, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.73728c6ec492bp-999, 0x1.1c061c1c6403ap-430, 0.0, 0x1.f718847bde117p-273, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.16d365449a844p-116, 0x1.77ce7a1699e0fp-667, 0.0,
     0x1.38d57acac37cp-55, 0x1.9eb9f586724b7p-653, 0.0, 0.0, 0.0,
     0x1.568a3045b0d76p-849, 0x1.93c8f1d17180dp-592, 0x1.b134652338eap-322,
     0x1.74cf1cd1e6007p-852, 0.0, 0x1.9d2281919b6fp-1006, 0.0, 0.0, 0.0,
     0x1.93bd9e9b4b4b8p-1003, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb9a71a0fd664p-645,
     0.0, 0.0, 0x1.c43877430e15bp-145, 0x1.41dc808010aaap-5, 0x1.6faa98d873b8fp-19,
     0x1.badf4a377beedp-774, 0.0, 0x1.488c242ed8bd1p-172
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
            tmp1 = Sleef_finz_lgammad2_u10kvx(tmp0);
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
    printf("Sleef_finz_lgammad2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_lgammad2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
