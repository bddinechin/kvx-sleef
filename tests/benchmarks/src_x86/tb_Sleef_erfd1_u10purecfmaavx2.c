/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfd1_u10purecfma.c --function Sleef_erfd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.2ae94137e67f1p-370, 0.0, 0.0, 0x1.536f03657ea44p-765,
     0x1.8a2d5fbcae174p-593, 0.0, 0x1.dd9d13de32f2p-755, 0x1.b849836d91e54p-291, 0.0,
     0.0, 0.0, 0.0, 0x1.94ae3bf20aed9p-776, 0.0, 0.0, 0x1.bf69b3523f1c6p-856, 0.0,
     0x1.5677f4527fbbep-897, 0x1.db2569fbe453cp-418, 0x1.5d3a3f6b4218bp-274, 0.0, 0.0,
     0x1.933767cc780edp-807, 0.0, 0x1.d8a768c46f5aap-895, 0.0, 0.0, 0.0, 0.0,
     0x1.e5cb565873a9bp-366, 0.0, 0.0, 0.0, 0x1.1548634751a39p-137, 0.0, 0.0, 0.0,
     0.0, 0x1.82b76fcfb641bp-246, 0x1.6f590b5cdb429p-280, 0x1.dde44afbb9f21p-549,
     0x1.d6c0ebbedf1b6p-56, 0.0, 0.0, 0x1.197679bfaa7ffp-301, 0x1.b7e45318efb52p-384,
     0x1.e053a22ef87b6p-881, 0x1.03770a9f4b522p-630, 0x1.dab9d14eafeb8p-405, 0.0, 0.0,
     0.0, 0.0, 0x1.b47ec89ced195p-991, 0x1.2a0c47bfef7b1p-248, 0x1.ce7aa9011cb35p-532,
     0x1.a72b3d283aeacp-135, 0x1.d2d35bb08d2aep-469, 0.0, 0x1.6cb2c952de4dap-216,
     0x1.0514dd33d064dp-388, 0x1.7acfa38559e11p-869, 0x1.4921e56f6752dp-945,
     0x1.7a975bfa291eap-915, 0.0, 0x1.2749b69df1d54p-105, 0.0, 0.0,
     0x1.60abae8520f12p-1006, 0x1.afa9644efaae1p-62, 0x1.7a6c0ded72949p-410, 0.0, 0.0,
     0.0, 0x1.6f3d4385edf2cp-869, 0.0, 0x1.867066756a8c6p-9, 0x1.2269699c96beep-1005,
     0.0, 0.0, 0x1.96e0d53b1a641p-76, 0x1.12ece3d59120cp-590, 0.0, 0.0,
     0x1.6f04fb53d1de6p-50, 0.0, 0x1.7d726365f1084p-244, 0.0, 0x1.94eff4721af1ep-877,
     0x1.9eac78b1cfa13p-946, 0x1.3100656b0f565p-398, 0.0, 0.0, 0.0,
     0x1.61ee0a3c829ap-651, 0.0, 0x1.786ea1b343fabp-283, 0x1.88a422ff36577p-698,
     0x1.ba1456f58b0d8p-630, 0.0, 0x1.525c48e9c982ap-752, 0x1.7d4983c39ac3bp-870,
     0x1.8433a652ad05ap-197, 0.0, 0x1.8c9bccd4bfd9dp-713, 0x1.8af1a041a4931p-320,
     0x1.69523a0a9a4ddp-649, 0x1.86823347dd2a2p-923, 0.0, 0x1.b0712550eb235p-600,
     0x1.3e0b7a020561cp-885, 0.0, 0.0, 0x1.821958ab5978ep-222, 0x1.8e2a9cff212e5p-968,
     0.0, 0x1.b5bd716b84a5dp-188, 0x1.1f05f0c5fcbc3p-480, 0.0, 0x1.2e7cc6d02cc8bp-594,
     0x1.373bc6e33ecd1p-17, 0.0, 0x1.4ab02ccc30cafp-894, 0.0, 0.0, 0.0, 0.0,
     0x1.7cf0edf2ca48ap-817, 0.0, 0.0, 0.0, 0x1.e2d44236e70e6p-756, 0.0,
     0x1.4ba09bab36ec8p-828, 0.0, 0x1.34bf40fd682ep-444, 0x1.21eda5843383cp-63,
     0x1.c1c16cda9e83ap-688, 0.0, 0.0, 0.0, 0.0, 0x1.97717f7d78b7ap-416, 0.0, 0.0,
     0x1.77cd24cde9bd9p-1019, 0.0, 0x1.a9fc3ee64b812p-941, 0.0, 0.0,
     0x1.144ef6854faccp-931, 0.0, 0x1.4145b9b54c8b9p-723, 0.0, 0x1.bec9eae9b1acbp-119,
     0x1.f9d7350aa87b3p-997, 0.0, 0.0, 0x1.74251588f84cfp-995, 0.0,
     0x1.8ec724487450dp-937, 0x1.792c4415b53c5p-325, 0x1.51d9d1437ed22p-263,
     0x1.6678ac6cb2b0ap-408, 0x1.f75abcb90e021p-133, 0x1.73bbb46fa7888p-83, 0.0,
     0x1.36e5ee5bdc075p-393, 0x1.6af552c842959p-137, 0.0, 0x1.93be1891141e5p-1,
     0x1.bfe5d77871772p-381, 0x1.485bf138162dep-1004, 0.0, 0.0, 0.0,
     0x1.0cf347a84280ap-826, 0x1.504965455c941p-433, 0x1.1f7ec5f90641ep-600, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d7efc3ae801dp-642, 0x1.04b7a2b832aebp-1010,
     0x1.4912a644160a1p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4afc3b827119bp-506, 0x1.9267fa77db02dp-826, 0x1.992575d02b31ap-1008, 0.0,
     0x1.0beec3abd385fp-680, 0.0, 0x1.3cebbed7eba54p-285, 0x1.b3014fde06caap-159,
     0x1.ebd81d8cd283fp-794, 0x1.2bde4167f6ee6p-539, 0x1.57f9b0c1c5f8fp-840, 0.0, 0.0,
     0.0, 0.0, 0x1.8e54d16de86bep-893, 0.0, 0x1.cd9c6713b5c66p-408, 0.0, 0.0, 0.0,
     0.0, 0x1.cf3b13290e54dp-68, 0.0, 0x1.3c6f2fc452677p-406, 0x1.18ba50f80ef5bp-299,
     0x1.ddbed57d4472fp-394, 0x1.e43447fb4022ap-214, 0x1.35cf15a4edbfp-463,
     0x1.18095861426ebp-175, 0.0, 0.0, 0x1.8727b7e27a327p-62, 0.0, 0.0,
     0x1.692306b337ab6p-78, 0x1.20268e0e8a941p-9, 0x1.9e2bc527fcc4bp-613,
     0x1.81f1982ec755p-263, 0.0, 0.0, 0x1.0d8292685d721p-860, 0.0, 0.0, 0.0,
     0x1.048d733bab151p-903, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06a34c9ba0914p-56, 0.0, 0.0,
     0x1.929467c98cbadp-587, 0x1.179cfa46c252p-201, 0x1.afba17c414df2p-7,
     0x1.4ce6b973a7521p-679, 0x1.beec9ad9ea8f9p-387, 0.0, 0.0, 0x1.569372c7c466ep-185,
     0.0, 0x1.5759e175dd7a5p-894, 0x1.900224a0f50dep-47, 0.0, 0.0, 0.0, 0.0,
     0x1.bfa5c2cc7a58dp-66, 0.0, 0.0, 0.0, 0.0, 0x1.72f367d3f576bp-943,
     0x1.d9b479244d50dp-591, 0.0, 0.0, 0.0, 0x1.17d42dd0c96dbp-176,
     0x1.a36e95534ab44p-800, 0.0, 0.0, 0x1.c6c1d712b20bdp-220, 0x1.9dfa410bf013p-54,
     0.0, 0x1.6639574db6a2p-568, 0x1.07f6869ae3484p-380, 0.0, 0x1.1e8467e0f8648p-527,
     0x1.bd3f229ba5938p-454, 0.0, 0.0, 0x1.3c43e85ebc79ep-183, 0.0, 0.0,
     0x1.5d6cefbd4c943p-16, 0x1.c9c32d1ce7f45p-454, 0x1.7418b9084a04ap-667,
     0x1.15c4376e2a2f4p-247, 0x1.6ce5a35c18137p-373, 0x1.a3889418fd467p-142,
     0x1.1458f819ec758p-566, 0x1.3a414d8d9144p-300, 0.0, 0.0, 0x1.9d073cba814c9p-831,
     0x1.7594a5b405c1ap-335, 0.0, 0.0, 0x1.6c2880606937cp-865, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f50ee2252aaa8p-800, 0x1.2c38a0d427aadp-115,
     0x1.cc4d52919979dp-807, 0.0, 0x1.324cb1ffd3e86p-148, 0x1.2ec63fdad7f4dp-70,
     0x1.77a3151ea1366p-22, 0.0, 0x1.72e45a22c189cp-673, 0.0, 0.0, 0.0, 0.0,
     0x1.d541c78f009d8p-556, 0x1.985981a2bd058p-342, 0x1.a7996820a63dp-4,
     0x1.f4dc9b2888342p-180, 0.0, 0x1.f611f3094a10cp-837, 0.0, 0x1.e93268948cd9bp-398,
     0x1.1872496583d3cp-162, 0x1.6d767307e3bd5p-452, 0x1.7c804c4120551p-152,
     0x1.49b7b3d6f07b1p-376, 0.0, 0.0, 0.0, 0.0, 0x1.c0ba6de31cbd6p-444,
     0x1.8142de7886273p-1001, 0.0, 0.0, 0x1.d85acc49f5601p-672, 0.0,
     0x1.b3a485604102bp-214, 0.0, 0x1.da0ea19ba6b06p-415, 0.0, 0.0,
     0x1.a50707ea7063dp-752, 0.0, 0.0, 0.0, 0x1.38be7514b4dfep-495,
     0x1.72ceb0c4b8124p-341, 0.0, 0x1.5cdcc1b915f28p-309, 0x1.8e5a9feafe276p-883, 0.0,
     0.0, 0x1.8bed9fab4c3f5p-241, 0.0, 0x1.a2b40e5bbcbcbp-291, 0.0, 0.0,
     0x1.265feb6d4731ap-749, 0.0, 0x1.6c109f425e3dap-109, 0x1.4e1dbcdaf5a32p-986, 0.0,
     0x1.fdead31c68912p-443, 0.0, 0x1.0961490ed074fp-11, 0x1.aca9048379eecp-44, 0.0,
     0x1.c4d7ac0315bdbp-186, 0.0, 0.0, 0.0, 0.0, 0x1.fddc61f45f126p-439, 0.0,
     0x1.bda93d826ca28p-489, 0x1.ca545c5193cbbp-80, 0.0, 0.0, 0x1.1bc4865316512p-373,
     0.0, 0.0, 0x1.c160239349bbdp-255, 0.0, 0.0, 0.0, 0x1.253cb86b7cb47p-338,
     0x1.0c34c3ace450ep-614, 0.0, 0x1.d172872559745p-243, 0.0, 0x1.a9c10087320dp-273,
     0.0, 0.0, 0.0, 0x1.68c1fa4148485p-910, 0x1.5b64d58265969p-578, 0.0,
     0x1.a51a653067e21p-980, 0x1.5ec689974b98dp-925, 0x1.8312628098784p-397,
     0x1.d9bb73386edf7p-141, 0.0, 0x1.4c4dd76a7d648p-420, 0x1.1c8e3086d3078p-510, 0.0,
     0x1.579007bc72855p-686, 0.0, 0x1.8d0c62ed20bf5p-967, 0x1.e8392e6332f26p-943,
     0x1.66446a5062581p-1021, 0.0, 0.0, 0x1.e87c43160ed2cp-521,
     0x1.5502a038b669ap-455, 0.0, 0.0, 0x1.f8a5cec00fa6bp-301, 0x1.0d25689943bfdp-260,
     0x1.e4b09acc56611p-91, 0x1.0a625ddd1715dp-429, 0x1.b1a977490c9d5p-122, 0.0, 0.0,
     0x1.9386e1cf3b8e8p-1021, 0.0, 0x1.8efe6da019931p-73, 0.0, 0.0,
     0x1.82a4865f08b8bp-437, 0x1.6be2458673e23p-937, 0x1.f4adf8d60c8f6p-156,
     0x1.c82a8b8ecc519p-276, 0x1.37f5c7a753c0fp-977, 0.0, 0.0, 0x1.020e2454f291dp-997,
     0.0, 0.0, 0.0, 0.0, 0x1.ad06649ff2cfdp-649, 0x1.d95ce941d2121p-794, 0.0, 0.0,
     0.0, 0.0, 0x1.c258bcf6c4ee1p-330, 0x1.cc5b66d2f1e39p-997, 0x1.93607e7655c56p-412,
     0x1.501013e42545ep-116, 0.0, 0x1.fedb571cd3d51p-42, 0x1.a6c2e891fde34p-537, 0.0,
     0x1.d641d3de06addp-233, 0.0, 0.0, 0x1.ef4e5506a7c02p-518, 0x1.78cb9f5af1b61p-417,
     0.0, 0x1.9f60ea2cd5ff9p-941, 0.0, 0.0, 0.0, 0x1.5af00f094a317p-374, 0.0, 0.0,
     0x1.63fa0996f0fdbp-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ceb5f299553dp-144,
     0.0, 0x1.2eff2271094fbp-348, 0x1.65504dcd860cbp-251, 0.0, 0x1.3246c04440314p-822,
     0.0, 0x1.c74210877dc0fp-930, 0x1.9970cb8f1a282p-16, 0.0, 0x1.38da25d2b003ap-785,
     0.0, 0.0, 0x1.3c6054f87762bp-3, 0.0, 0.0, 0.0, 0x1.653afb11ea484p-900,
     0x1.f37c32246e6a7p-641, 0x1.ae0dfcb0658f9p-758, 0x1.5365dfe7dd725p-299,
     0x1.d78e4470e8d14p-320, 0x1.b5d37d896266ap-3, 0.0, 0.0, 0.0, 0.0,
     0x1.903930af53489p-847, 0.0, 0.0, 0x1.0590e18646ac3p-329, 0.0,
     0x1.73b955a62b7dbp-747, 0.0, 0.0, 0.0, 0x1.24e97929662cfp-163,
     0x1.228476bdcbb49p-373, 0x1.f783785f55102p-113, 0x1.b58da3c9e837ap-345, 0.0,
     0x1.cd185be089ca8p-206, 0x1.636a88670f6aap-65, 0x1.911bcb4d75efp-522, 0.0, 0.0,
     0.0, 0x1.0d1ed1364c37cp-291, 0.0, 0.0, 0.0, 0.0, 0x1.886177b4900dcp-818,
     0x1.d90dde2064396p-355, 0.0, 0x1.b283fc218f862p-405, 0.0, 0x1.61d813762ce3fp-838,
     0.0, 0x1.ac24e0324e75dp-34, 0.0, 0x1.398dfb42c6739p-139, 0x1.95acb8a27bdd2p-70,
     0x1.bad744820570ap-606, 0x1.2d66e43ad67f8p-831, 0x1.8e7a4617a33d2p-158,
     0x1.efd2d4c8ca38fp-566, 0.0, 0x1.fcb7c2299da12p-735, 0x1.a971a26aa29edp-775,
     0x1.657dcd3b9c905p-848, 0.0, 0.0, 0.0, 0.0, 0x1.ec5e10398db13p-668,
     0x1.3efe474f81f88p-365, 0x1.4144580bbc2ap-340, 0.0, 0.0, 0.0, 0.0,
     0x1.b65d7aecdf0e6p-380, 0x1.8efaf38f76c09p-812, 0x1.8dad62359bb19p-864, 0.0, 0.0,
     0.0, 0.0, 0x1.b377ef260e857p-351, 0x1.725e6517cf18dp-784, 0x1.4350f2fc5433ep-784,
     0x1.4b450f1305165p-926, 0.0, 0.0, 0.0, 0x1.229256a15d567p-674,
     0x1.c590b4bbf5743p-790, 0.0, 0x1.2a2b0fe80fd6ap-865, 0.0, 0x1.2ebdc946f0bf4p-42,
     0.0, 0x1.09b99cda8259dp-909, 0.0, 0.0, 0x1.5643f7bee693ep-361,
     0x1.d9872cf35e202p-349, 0x1.e21474685bc06p-829, 0x1.d6ee68ecfd3aep-457, 0.0,
     0x1.527fd8c4f55a1p-221, 0x1.590b886d75149p-991, 0.0, 0.0, 0x1.9458fae78500ep-497,
     0x1.acc2713cbb20fp-316, 0x1.cb292e451136p-186, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1119ed07b2025p-438, 0.0, 0.0, 0.0, 0.0, 0x1.e693927c9bf2ap-484,
     0x1.7ddee97b16f3ap-131, 0x1.4d2609a0bd786p-404, 0.0, 0x1.7ad7555fda697p-443,
     0x1.bb055ea17d2c1p-412, 0x1.5f8a13e54e138p-602, 0x1.307387c1f1ff1p-226,
     0x1.933465c88428bp-822, 0x1.48c14a152bb99p-199, 0x1.77b3466a77ecep-682,
     0x1.ad1da626d1815p-891, 0x1.a92148ccd39a3p-480, 0x1.18b43e4ed5087p-208, 0.0,
     0x1.ed86f15b57a05p-235, 0x1.ae20fc284e64ap-660, 0.0, 0.0, 0x1.724b4fe9421bap-343,
     0.0, 0.0, 0x1.8fb45f6ae73ddp-948, 0.0, 0x1.4078e7e8d0e39p-123, 0.0, 0.0,
     0x1.c8a772b9657afp-241, 0.0, 0.0, 0.0, 0.0, 0x1.607b45a25cf0dp-312, 0.0,
     0x1.6821344e5813dp-854, 0.0, 0.0, 0x1.adb20ab889a1bp-313, 0.0, 0.0, 0.0,
     0x1.3da0b6f9aecf8p-292, 0x1.18e735308aebap-752, 0.0, 0x1.d972a7e8babe9p-1017,
     0x1.ec72e35723775p-251, 0.0, 0x1.1e4d35faeaf3dp-480, 0x1.df56373ed45c3p-272, 0.0,
     0.0, 0.0, 0x1.cbc8e767bf84cp-89, 0x1.a1b3ff110f5eap-338, 0.0,
     0x1.1eb975f4b111ap-257, 0x1.ef9d50ce7b948p-296, 0x1.939a5e97f663fp-48,
     0x1.797c501ae4ca6p-317, 0.0, 0x1.355f735dfaa14p-532, 0x1.a92bcf0da0049p-168, 0.0,
     0.0, 0.0, 0x1.f5ec2e2ff68c5p-527, 0.0, 0.0, 0.0, 0x1.aeb7efcaf5798p-514, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2ed9af795ee9bp-730, 0x1.d69281513cc0ap-743,
     0x1.00592080d75cap-19, 0.0, 0.0, 0.0, 0.0, 0x1.2486b96282823p-183, 0.0, 0.0,
     0x1.5884699e67635p-258, 0x1.d1713b793624p-497, 0x1.0371a81d67e95p-895, 0.0,
     0x1.03100cd3013c1p-82, 0x1.d9b3516e19a4ep-174, 0x1.400961db9d4d6p-955,
     0x1.e7748a886fe99p-317, 0x1.5d0404df47427p-376, 0.0, 0.0, 0.0,
     0x1.fb16b456e992bp-869, 0x1.de951334536ecp-317, 0.0, 0.0, 0.0,
     0x1.3317228e27cc1p-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55a5b51eda13cp-928, 0.0,
     0x1.d74c6e23fde5bp-784, 0x1.962e9d1e19b74p-533, 0x1.2eaa59ac629a1p-381, 0.0, 0.0,
     0x1.228edce9cf2b9p-347, 0.0, 0.0, 0x1.67aee3125d82dp-722, 0x1.5b82ff744922p-144,
     0x1.03d5305ae536p-426, 0.0, 0.0, 0x1.41441d89de19dp-931, 0.0, 0.0,
     0x1.37c16d1981e7dp-365, 0x1.980bbd075a5fbp-349, 0x1.dcbd3547dca9p-378, 0.0, 0.0,
     0x1.672d1fc2f739dp-345, 0x1.789c70eb5a061p-236, 0x1.073e183151054p-542, 0.0,
     0x1.895eb7f6a520bp-415, 0.0, 0x1.a9cd81faf997ep-605, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8a17ded8651a7p-572, 0.0, 0x1.5e2659092dd8p-855, 0x1.b8fa6b6eb533fp-632,
     0.0, 0.0, 0x1.7a26aa863da31p-468, 0x1.b249ed389ad49p-1000,
     0x1.427b27bdebd52p-235, 0.0, 0x1.dc874364d07c5p-131, 0x1.437fd2433f0d1p-408,
     0x1.67ff7e01cb1b5p-282, 0x1.77e5234f7f867p-246, 0.0, 0x1.f29847691cf56p-10,
     0x1.b8942fbf4d4fep-851, 0x1.8e61115e87451p-861, 0.0, 0.0, 0x1.e588f899f87c4p-189,
     0x1.0bba55ff33b9ep-128, 0.0, 0x1.f538d245ac738p-683, 0x1.88330c9c1f0bdp-179,
     0x1.95609831bf4b4p-603, 0x1.fb7445e8080e2p-583, 0x1.2b49d216eda0fp-635, 0.0, 0.0,
     0x1.b42304718e2bdp-473, 0x1.2084a251cb0bap-882, 0x1.abba5df1d37efp-20,
     0x1.422757ad535dp-904, 0.0, 0x1.0f5194f90bdfbp-1000, 0x1.0c1ae3b24bea9p-836,
     0x1.1629118bdee82p-184, 0x1.7b53559d744fdp-949, 0.0, 0.0, 0x1.c21b4f160915ep-364,
     0.0, 0.0, 0.0, 0.0, 0x1.635222d62a5e4p-21, 0.0, 0x1.0f8d235ed458dp-1018, 0.0,
     0.0, 0.0, 0x1.38fef012a1043p-384, 0x1.ab044e297e4bfp-298, 0x1.45d238061d6a5p-446,
     0x1.393ae39af846p-466, 0.0, 0x1.bcc21611bb842p-479, 0x1.71eabe6f874c1p-900,
     0x1.32b7ecda19d9bp-440, 0.0, 0.0, 0x1.e5e45e312310cp-376, 0x1.989e3d056a568p-176,
     0.0, 0.0, 0.0, 0x1.c93a5542c939cp-904, 0.0, 0.0, 0.0, 0x1.142e78e269b65p-747,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4533db299633p-823,
     0.0, 0x1.e17ed1e3cce1bp-290, 0x1.1943fc998d0b4p-348, 0x1.31731b266c39fp-131, 0.0,
     0.0, 0.0, 0.0, 0x1.fc08933d0fe84p-749, 0.0, 0x1.4aa25b4fbaa3cp-699,
     0x1.9dd34a35075bcp-693, 0.0, 0x1.a5edfcad0f2bdp-109, 0.0, 0x1.251176c9e5dcap-179,
     0.0, 0.0, 0x1.e36f67e777ecdp-131, 0x1.fa84c65646997p-332, 0.0, 0.0, 0.0,
     0x1.2ec7039f817f5p-699, 0.0, 0x1.eeb64cd74d6afp-398, 0.0, 0x1.e5935f8bd345bp-184,
     0.0, 0x1.3c4036cd20ff6p-375, 0x1.4797429f59fd4p-346, 0x1.07bfc4747831bp-612, 0.0,
     0.0, 0x1.959aa0cb8bbf5p-167, 0.0, 0.0, 0.0, 0.0, 0x1.303a0661675f9p-269,
     0x1.efb0f99dbdf17p-980, 0x1.c99843973a31cp-152, 0x1.5e4585252ec3ep-453, 0.0,
     0x1.9f6002c943877p-277, 0x1.5d96b1dddbad4p-275, 0.0, 0x1.a5dfe78a9f8dap-481, 0.0,
     0.0, 0x1.e994b0ec999e3p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c4703c4bfe24p-343,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03860c535d8d4p-647, 0.0,
     0x1.db0ddd65fc5a2p-11, 0.0, 0.0, 0x1.d6b3c678fd2bfp-891, 0x1.4e928109da0b4p-839,
     0x1.8ed4d22fa353ep-916, 0x1.f18032472966dp-992, 0.0, 0x1.7c22d954f6dbep-900,
     0x1.89e573aebd347p-572, 0x1.cbb56baa23436p-947, 0x1.7b4c3918735ccp-886, 0.0,
     0x1.974a510526aa7p-85, 0x1.1cdcb9919d7a4p-859, 0x1.4fe8e086920bep-375, 0.0,
     0x1.fbf8dac8d21afp-67, 0x1.5f838c56c52c4p-848, 0x1.a91a935ad61ecp-779, 0.0,
     0x1.8a00d60f5b78bp-268, 0x1.3c793fecdc048p-451, 0x1.4ba60db76782ap-634, 0.0, 0.0,
     0x1.71dbc168f1e23p-440, 0x1.0dbc50af32d2bp-447, 0x1.762d61cb2dd66p-612,
     0x1.c607c041cb486p-294, 0x1.dbf2b8691ca56p-300, 0x1.161b08e14dc25p-648, 0.0, 0.0,
     0x1.39443b8935223p-361, 0x1.cf99848652485p-799, 0x1.77fb557b88abp-227,
     0x1.aa1aa987bc066p-1, 0x1.6481e366deee2p-263, 0x1.21768f2270adfp-301,
     0x1.91c967989a2fdp-331, 0.0, 0.0, 0x1.79929eabadb66p-703, 0.0, 0.0,
     0x1.fb8decd14109bp-496, 0x1.26ee20323c7c5p-258, 0.0, 0x1.57e2303234022p-499, 0.0,
     0.0, 0x1.2b95e2a44c4bfp-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddd3c3b6bb5ffp-632, 0.0, 0.0, 0.0, 0x1.019085d4ace64p-65,
     0x1.afa748967d747p-826, 0x1.46e5eb528fa8p-96, 0x1.a94ef21c3319dp-888,
     0x1.8edb46f538599p-888, 0x1.88892a9b6cb5ep-4, 0x1.b23f4773c71d9p-554, 0.0, 0.0,
     0.0, 0x1.c852d698d77e2p-253, 0.0, 0x1.76d1d08d1ed44p-778, 0x1.38134918f192cp-941,
     0x1.6fce2c84457c8p-782, 0x1.9e4f834284ca6p-720, 0.0, 0.0, 0x1.1ac0677ff07fbp-132,
     0x1.b4b02bc4da399p-620, 0.0, 0x1.61598e7c9902dp-489, 0.0
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
            tmp1 = Sleef_erfd1_u10purecfma(tmp0);
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
    printf("Sleef_erfd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfd1_u10purecfma bench acc %la\n", global_bench_acc);
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
