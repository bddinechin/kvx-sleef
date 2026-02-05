/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind2_u10avx2128.c --function Sleef_finz_sind2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.eaacc8a8753bdp-765, 0.0, 0x1.d62b8594c1fe8p-432,
     0x1.b5a308d81a994p-513, 0.0, 0x1.d3212ef2bbc74p-185, 0x1.c3ef2e8be00eap-967,
     0x1.faaa565e393d9p-362, 0.0, 0x1.77741bc1efecdp-284, 0.0, 0x1.b3ad7f51dd3ddp-848,
     0x1.bf75e058c5446p-905, 0.0, 0x1.688d059fea4ap-660, 0.0, 0x1.21cc2a3910077p-984,
     0x1.e92e98334cbep-362, 0x1.48519dae3f9ddp-681, 0x1.f6e010346a3ffp-680,
     0x1.f68b086b04ffbp-451, 0x1.d7075699239d8p-853, 0x1.633cd6bacc466p-309,
     0x1.5b0d11a2beff7p-130, 0x1.5ccdb8d325269p-586, 0.0, 0x1.4784b31e933a1p-884, 0.0,
     0.0, 0x1.8682aae10209p-237, 0x1.df96b35da7a3cp-113, 0x1.bbe14a3497548p-366, 0.0,
     0x1.700b236dc8af8p-599, 0.0, 0x1.482b4063d7c36p-483, 0.0, 0.0, 0.0,
     0x1.b3d76f22ca989p-719, 0.0, 0.0, 0x1.0a5eaabf038a3p-740, 0.0, 0.0,
     0x1.be99f59366befp-867, 0.0, 0.0, 0x1.5da742022adacp-834, 0x1.73d6b0a3cb089p-309,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a8d277daa2832p-70, 0.0, 0.0, 0.0,
     0x1.9b47afdbdb4ddp-983, 0x1.eecd84eb4d357p-219, 0.0, 0x1.e92f675f1b006p-311,
     0x1.5b086b71578fp-355, 0x1.e8135df87a26dp-917, 0.0, 0x1.55afda87d64c6p-405,
     0x1.1eb1bf13143e2p-353, 0.0, 0.0, 0x1.5e1d53440cebap-163, 0.0, 0.0,
     0x1.0e85c0e625f29p-750, 0x1.0401255c20c68p-205, 0.0, 0x1.65ce172b7c566p-976, 0.0,
     0.0, 0x1.7f2107c60ab1fp-304, 0x1.2f738b8a657a4p-566, 0.0, 0.0,
     0x1.3c635fa8e987cp-418, 0.0, 0x1.52ed46f367692p-215, 0x1.03d4cf81a3f03p-160, 0.0,
     0.0, 0x1.844cd1ead5661p-307, 0.0, 0x1.85ea6025e734dp-39, 0x1.ab1143e2b00fep-592,
     0x1.d0417d64e629p-4, 0.0, 0.0, 0x1.bfd6cc1db77eep-94, 0x1.45e8ac2056919p-217,
     0x1.42f28481a8838p-500, 0.0, 0x1.562f655f5aa7p-701, 0x1.ef3b7aaba34cdp-768, 0.0,
     0.0, 0.0, 0.0, 0x1.6903577a136eap-571, 0x1.d4ed83a1746c5p-332, 0.0,
     0x1.a44e0448194d8p-65, 0.0, 0.0, 0x1.b2d98b05a19dbp-833, 0.0,
     0x1.2bb093baa0e1ap-937, 0x1.d1d6e27c60654p-195, 0.0, 0.0, 0x1.f335d90f2305dp-119,
     0.0, 0x1.349f67f1a8c74p-615, 0.0, 0x1.5d516ae98e9b8p-816, 0.0,
     0x1.7a587e86f0ed1p-555, 0x1.82af1fa6c18c2p-260, 0x1.cc84f372f0c0bp-53, 0.0, 0.0,
     0.0, 0x1.8a4e4bde71cd1p-147, 0.0, 0.0, 0.0, 0x1.989adb4870e6p-229, 0.0, 0.0,
     0x1.c3519e47e0a8ap-572, 0x1.ca24846ed6ac2p-475, 0x1.cdd5533f8a08dp-1018,
     0x1.80baba1828e6ep-653, 0x1.a1da54df91073p-849, 0x1.0da19deefdc9cp-505, 0.0,
     0x1.8a10dc7dc89fdp-670, 0x1.499e112821491p-143, 0.0, 0x1.22bc0a975906bp-35, 0.0,
     0.0, 0x1.154f380d6a3c8p-998, 0x1.961b159a4a667p-614, 0.0, 0x1.ef5da9b7390b9p-332,
     0.0, 0x1.a6f4672ae0eb7p-86, 0.0, 0.0, 0x1.7033f9bdefe68p-789, 0.0,
     0x1.10327c55766c5p-5, 0x1.dfd8744759fc6p-656, 0.0, 0.0, 0.0,
     0x1.1729fd3d2386dp-1004, 0.0, 0x1.ff0bda4f8881fp-748, 0.0,
     0x1.f76cffc6de472p-603, 0x1.9741f74b4e8a4p-66, 0.0, 0.0, 0x1.bc6278743b0f6p-616,
     0x1.2adae65ab3e96p-397, 0.0, 0.0, 0.0, 0x1.318dcd7e628dap-310, 0.0,
     0x1.a21f25f4dc8cap-198, 0x1.57813765db26ep-788, 0.0, 0x1.95504ba5127d5p-501,
     0x1.1e19374941079p-634, 0x1.05b0ad8c6d274p-583, 0.0, 0.0, 0x1.0691cffd9c8eap-314,
     0x1.45be65b171cccp-813, 0.0, 0.0, 0x1.8675c5153661ap-44, 0.0,
     0x1.39cda2163032fp-171, 0x1.ea460be27232ap-141, 0.0, 0.0, 0.0, 0.0,
     0x1.e1a3873b88467p-850, 0.0, 0x1.7bffd611dfd5bp-41, 0.0, 0.0,
     0x1.171bcd2e987b2p-406, 0x1.6626d8af95829p-365, 0x1.15626d5e90747p-352, 0.0,
     0x1.b4bf6114cf402p-17, 0x1.6de4288455cbap-125, 0.0, 0.0, 0x1.bcf9a29b6efdp-859,
     0x1.8e4c8152bfedcp-848, 0x1.9ff6adc6eaecfp-160, 0.0, 0x1.b2c07b9f59f9fp-231,
     0x1.82bc8847f9d7fp-669, 0.0, 0x1.7e2c0aa30e662p-768, 0x1.6f44fde8825f5p-656,
     0x1.305e8190c2fcfp-577, 0.0, 0x1.efa49b9faba1bp-1004, 0x1.17bab2df090a5p-779,
     0.0, 0x1.e592aac628bedp-933, 0.0, 0.0, 0.0, 0x1.be526d4ac01abp-779, 0.0,
     0x1.c15419f82aab5p-74, 0x1.0137e7abeae94p-263, 0x1.ef9ee2d092b2ep-933,
     0x1.911a83439abaep-968, 0.0, 0x1.c1a6f42a943d9p-23, 0x1.f694b5a4f8624p-602,
     0x1.2e6665c33a502p-554, 0x1.202d8a25af3bbp-414, 0.0, 0x1.353e52d8da64cp-258,
     0x1.2d57e2dded6f3p-989, 0.0, 0x1.4518170b85d09p-462, 0.0, 0.0, 0.0, 0.0,
     0x1.92b616c804d75p-438, 0.0, 0x1.57fc50e7eb9dbp-662, 0.0, 0.0, 0.0, 0.0,
     0x1.31a55b33821cp-928, 0.0, 0.0, 0x1.79750dbe63653p-291, 0.0,
     0x1.51c8bbda603d4p-284, 0.0, 0x1.e817ebb071b54p-636, 0x1.22d9c1e27a4bfp-611,
     0x1.5517560c27e89p-252, 0x1.44eb3d7e32467p-1009, 0.0, 0.0,
     0x1.b4842fa1bf07bp-890, 0x1.d5f3293118083p-369, 0.0, 0x1.c62048806e9a4p-338,
     0x1.c3f58ad3edb89p-949, 0.0, 0x1p0, 0x1.bdd10e48a8825p-875, 0.0,
     0x1.b349fcc70a06p-284, 0x1.51ab0ef950d7dp-9, 0.0, 0x1.ca44bc71d8fb6p-746, 0.0,
     0.0, 0.0, 0x1.496ae5a2ffb68p-740, 0x1.b24421792a3a9p-644, 0.0, 0.0,
     0x1.b598db6169642p-647, 0x1.a15aae9a69e39p-840, 0.0, 0x1.f4c25cfc5a697p-868,
     0x1.63775895f6adfp-723, 0.0, 0.0, 0.0, 0x1.659b4621bd3e6p-810,
     0x1.060248c3f1a41p-280, 0.0, 0x1.5b67feb4f366ap-596, 0x1.3b5258201466bp-468, 0.0,
     0x1.b577d6df5217dp-29, 0x1.dd840afca20e9p-992, 0x1.e9c9cbe4f8c07p-104,
     0x1.c64c116408423p-844, 0.0, 0x1.6b2ee9e32e88ap-77, 0x1.d34291ca0a3b1p-550,
     0x1.055f7c73ea886p-706, 0.0, 0x1.77ddde1279e9p-963, 0.0, 0.0, 0.0,
     0x1.ccfb5686a18c9p-207, 0.0, 0.0, 0x1.6cf0f72382251p-345, 0.0,
     0x1.937b2460c80cep-799, 0x1.cee5da3eb0495p-563, 0.0, 0x1.8768eb2f6e647p-732, 0.0,
     0x1.373f8cd02abcbp-712, 0x1.0e0d60a5f16f9p-50, 0x1.a427c0dd0f457p-607,
     0x1.5c558df007b0dp-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9940df01a5bc9p-923,
     0.0, 0x1.3ad0adc01c7fap-378, 0.0, 0.0, 0x1.1e2ff31714d41p-140, 0.0,
     0x1.2cdc41a0b87c1p-156, 0.0, 0.0, 0.0, 0x1.f6187f563e69p-733,
     0x1.189140c68a2b3p-226, 0.0, 0.0, 0.0, 0.0, 0x1.2788247fe555fp-915,
     0x1.316d7cc30c52ep-717, 0x1.fa683cf96fa86p-463, 0.0, 0x1.3ca548bd5c5b1p-653, 0.0,
     0x1.53c43da119a86p-171, 0x1.6a6b087e578edp-929, 0x1.d593581ae3a5p-989, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bf9e3d4f44b1cp-593, 0x1.34daa7babe631p-118,
     0x1.c9712d5628436p-784, 0x1.0b99fe0a47532p-849, 0x1.090b8e6b1d40fp-34, 0.0, 0.0,
     0x1.a0d8c984663c7p-19, 0x1.6009e9e0dc113p-316, 0x1.bd5e631b4245fp-1019,
     0x1.5472295fb467p-514, 0x1.23587d285ad54p-66, 0x1.28c769c0840aep-122, 0.0, 0.0,
     0x1.2f3307ec67ce1p-612, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1b29106d5112p-704,
     0x1.518eda6c1b11ap-273, 0.0, 0x1.16a3f09511b4ep-586, 0x1.a24de9f3d4d74p-726, 0.0,
     0x1.8eb0e24a10f92p-366, 0.0, 0x1.efd7a1ed6ddc3p-456, 0.0, 0.0, 0.0,
     0x1.f6f07ca6679f1p-474, 0x1.c5b78e52e621bp-396, 0.0, 0x1.cd61d673c8c96p-95,
     0x1.da62cf2737cdep-321, 0x1.1c565caaf21c1p-69, 0x1.b901bcdc969fdp-605,
     0x1.5bb0dd48fa0b2p-205, 0.0, 0x1.fc3e515a42922p-557, 0x1.25bb4235a644bp-468,
     0x1.9d9a8223d71e4p-239, 0x1.9c86a586f1422p-637, 0x1.20bc32c29646p-842,
     0x1.2913c0fd397c6p-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.299843a5460d2p-180,
     0x1.e3bd9bfe876bbp-36, 0.0, 0x1.78d3acad35bc8p-153, 0x1.cdb8058a8d46fp-226,
     0x1.986d085158d9fp-58, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79d98cd795897p-84, 0.0, 0.0, 0.0, 0x1.487691bcf029ep-779, 0.0, 0.0, 0.0,
     0x1.4a04559cacf15p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d0b0310c2fbe1p-572, 0.0,
     0x1.e5a5ac9fc259bp-81, 0.0, 0x1.e32dde56da06bp-766, 0.0, 0x1.5b8c7e7e36b15p-201,
     0x1.38e658c7b3f9fp-869, 0.0, 0.0, 0x1.c0dc7fde50756p-155, 0.0, 0.0,
     0x1.b4f059ca386dep-49, 0x1.9c1982bd456e7p-547, 0x1.6e44488a7d38fp-549, 0.0, 0.0,
     0.0, 0x1.1d454a77d7fa5p-123, 0x1.c163757ca9c7ap-232, 0x1.e01396449d95p-354, 0.0,
     0.0, 0.0, 0x1.89e5a05e326acp-592, 0x1.a562474336b03p-733, 0.0, 0.0,
     0x1.d975a9c0b1a31p-775, 0x1.2cda13a3f4ef3p-486, 0x1.109121abc103ep-190, 0.0,
     0x1.43c13e7aab26fp-596, 0.0, 0x1.604434c7dd521p-595, 0x1.6d45883e9bb48p-846,
     0x1.511212dd0586fp-314, 0x1.37de5cb877d13p-317, 0.0, 0.0, 0x1.1f05f912836dbp-79,
     0.0, 0x1.9e55f2689cbd6p-483, 0x1.313f50d46c9e5p-776, 0x1.f3b3c8a1f18ccp-259,
     0x1.259558d088abbp-931, 0x1.32e637750302dp-462, 0x1.0df22fd69a906p-939, 0.0, 0.0,
     0x1.6a5cc2910846fp-736, 0x1.86e1b5d865b7cp-890, 0.0, 0x1.48265c0193c73p-151,
     0x1.d402975d4380fp-952, 0x1.6edce90bc0adap-507, 0.0, 0.0, 0.0,
     0x1.a9cbea2323d14p-504, 0x1.f4031971bdbdbp-489, 0x1.f3d6f51ffa197p-742,
     0x1.d4d0a228be1a4p-904, 0x1.1c67a4dc2bc61p-274, 0x1.50bf0bbc182ebp-435,
     0x1.a98fd950538cfp-110, 0x1.e3780a391f85fp-818, 0x1.179a2c420469fp-761,
     0x1.cd3b68e2ab0e6p-1012, 0x1.05e1162cd99f5p-86, 0x1.69794c59e1c1ap-216,
     0x1.3d6136024868ep-765, 0x1.6e0495f018b3p-309, 0.0, 0x1.694c1cf432265p-561,
     0x1.b6cbcdef025cp-783, 0.0, 0x1.454d2aca59993p-150, 0x1.e4b73ee5fc333p-733, 0.0,
     0.0, 0x1.75bdad187ef5bp-730, 0x1.2816be32b1b7ep-680, 0.0, 0x1.291d8dd6b56bp-38,
     0x1.f0a4ace44b268p-805, 0x1.c0cfcf68c4c83p-372, 0.0, 0.0, 0x1.67341858491ddp-946,
     0x1.ce805e06fe751p-439, 0x1.09c6cab7f5b81p-187, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81249a9ddd501p-962, 0x1.df621f6c47c94p-161, 0.0, 0x1.d2936ca7f3773p-448,
     0x1.22aa9652602b8p-764, 0x1.2b09b44a0b9d9p-934, 0.0, 0.0, 0.0, 0.0,
     0x1.599b799467b36p-232, 0x1.9f79db2afc3acp-711, 0x1.40b42530de9ebp-363, 0.0,
     0x1.3316739ac13ap-522, 0x1.7e2a562ace2f9p-106, 0.0, 0x1.c73e7b93dd705p-578,
     0x1.95e49fc2a8ef8p-504, 0.0, 0x1.5025eb49511cdp-324, 0.0, 0x1.d4e3efdb79db9p-426,
     0x1.b38290136593bp-214, 0x1.0ce879809eee5p-331, 0x1.32010d9dda5eap-964,
     0x1.de7182e87c76cp-31, 0x1.205f2772b3c6p-49, 0.0, 0x1.3ae065b7f6069p-560, 0.0,
     0x1.55a2bc8aaed02p-780, 0.0, 0.0, 0.0, 0x1.ed1316c6bcc98p-218,
     0x1.bed5c4547bc47p-736, 0x1.6ad9847fb4328p-743, 0.0, 0x1.b5d79b2a9c07dp-542,
     0x1.13669db16198cp-896, 0.0, 0x1.6139bf991322p-332, 0x1.ab28fb7682182p-299, 0.0,
     0x1.47536d85f5e4fp-1019, 0x1.869ac6a39cp-631, 0x1.473d5876f779fp-991,
     0x1.125b568d1c37ep-277, 0x1.39389fb6269cp-459, 0x1.f06192b8532e6p-250,
     0x1.65e20f26cafdfp-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b039bd4fc6a7p-247,
     0x1.a30004d9545e3p-279, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7de395a7fe0a2p-703, 0.0,
     0x1.c5fed42bb2775p-241, 0.0, 0x1.eb983cbdd5435p-580, 0x1.2cdce9f1bf3fcp-818,
     0x1.ecfc897dd4c99p-132, 0.0, 0.0, 0.0, 0.0, 0x1.0abd7a7439d65p-382, 0.0, 0.0,
     0x1.ba766adc3c22ap-860, 0x1.f93212cc36935p-14, 0x1.cccb0841fb3c6p-370,
     0x1.fe5d2519b563bp-235, 0.0, 0.0, 0x1.a395399342e13p-528, 0x1.f14d0fcb8effap-98,
     0.0, 0.0, 0.0, 0x1.555a1485a6d0dp-172, 0x1.e8b5721445a71p-849, 0.0, 0.0,
     0x1.2aff50733592cp-62, 0x1.09619637674e8p-211, 0x1.7fa265fcb1ab8p-271, 0.0, 0.0,
     0.0, 0x1.3965e61d79f4fp-110, 0x1.c2adf8e9b8b48p-341, 0x1.8f94a51fb59dcp-761, 0.0,
     0.0, 0.0, 0.0, 0x1.c081e99faca47p-110, 0.0, 0x1.9a07ec2775aa6p-136,
     0x1.b41abb98942ap-610, 0.0, 0x1.5b9e9fbcf9dacp-116, 0x1.938b26fd22d9bp-913, 0.0,
     0.0, 0.0, 0.0, 0x1.c357e65eb4ee1p-744, 0x1.4d59ae0f21a01p-744,
     0x1.3f775c025bbfdp-978, 0.0, 0x1.afde00622f7bp-193, 0.0, 0.0,
     0x1.dd6c2c788897fp-578, 0.0, 0x1.0fdeffa29aebfp-300, 0x1.d7639554b4ffp-696, 0.0,
     0.0, 0.0, 0.0, 0x1.22e850917c5e3p-974, 0.0, 0x1.f99c4f1f20df7p-258,
     0x1.4742c90543516p-437, 0x1.930d4021e4492p-248, 0.0, 0x1.9160c5baf0c9bp-367,
     0x1.91c09211e6003p-938, 0x1.ebb65d60262c1p-993, 0.0, 0x1.80e45c17d9847p-48, 0.0,
     0x1.ffb54bb96371fp-676, 0x1.51ce2ef201748p-717, 0x1.ea888625bc652p-914, 0.0, 0.0,
     0x1.4a4d2a2832d85p-277, 0x1.b22e2793d8223p-381, 0x1.0cbfa3935b15bp-546,
     0x1.c0e5500eb8128p-165, 0.0, 0.0, 0.0, 0x1.10e032e0edd45p-111, 0.0,
     0x1.7f50e2bac43c5p-429, 0.0, 0.0, 0x1.5a287a1d1578fp-255, 0x1.e2df55d70c82ep-511,
     0x1.bd1015aace51ep-465, 0x1.43917bcdec4fbp-953, 0x1.609e8c3a24db1p-274,
     0x1.84b6d18048709p-235, 0.0, 0.0, 0x1.e60878bc6df68p-834, 0x1.83c795f84171cp-544,
     0x1.90212f6b2b2fbp-566, 0.0, 0.0, 0x1.a19154e921d59p-500, 0.0, 0.0,
     0x1.f3f48b27516fbp-175, 0.0, 0.0, 0x1.d64bc058b9b3fp-537, 0x1.67283138101ep-74,
     0.0, 0.0, 0x1.bc0fe4d6f24e3p-510, 0.0, 0x1.b5e1feba5f562p-182,
     0x1.3ec43dc328131p-420, 0.0, 0.0, 0.0, 0x1.07d13f0997522p-468, 0.0, 0.0,
     0x1.ebade2681af68p-48, 0x1.41a9e572b9cd9p-361, 0.0, 0.0, 0.0, 0.0,
     0x1.b824d011d8c28p-237, 0.0, 0x1.4ad555de8946bp-85, 0.0, 0x1.b013e891285p-436,
     0x1.a38354c75428ap-465, 0.0, 0.0, 0.0, 0x1.894a13643e1eap-542,
     0x1.42e6684a94cfp-280, 0.0, 0x1.4e2b020dc9872p-55, 0.0, 0x1.0e875a2d8acffp-415,
     0.0, 0x1.7d8333448efefp-152, 0x1.86eb0185c3931p-687, 0.0, 0x1.6dfd435ada1bap-844,
     0.0, 0.0, 0x1.40eb48382faf7p-478, 0x1.e3bb61df4e94ep-696, 0.0,
     0x1.64d665f720454p-372, 0.0, 0.0, 0.0, 0x1.67b2e5a08d0b9p-469, 0.0, 0.0,
     0x1.2e548d005a868p-278, 0.0, 0.0, 0.0, 0x1.55eaf4da6be84p-529,
     0x1.2e85cd3262c2dp-751, 0x1.b2532d0f188ebp-604, 0x1.71297321c9c8cp-774,
     0x1.3880d9a7b8748p-883, 0x1.dd52a27a1cd8ep-686, 0x1.9cd9a7de1931cp-456,
     0x1.05edddd628a6cp-383, 0x1.2a1aaf8f65e31p-853, 0.0, 0x1.a1a3f171075bbp-601,
     0x1.5d2649012cbcdp-95, 0.0, 0.0, 0.0, 0.0, 0x1.34d28fc54c257p-245, 0.0, 0.0, 0.0,
     0x1.0a48e025b5dc1p-322, 0.0, 0x1.1f87d6179edd9p-34, 0.0, 0.0,
     0x1.6b729030ef9bbp-906, 0.0, 0x1.763cf25716135p-279, 0x1.15c1a2da8af7fp-661, 0.0,
     0.0, 0x1.ea91d7c86b411p-1002, 0x1.5cf16f18a598fp-640, 0x1.a084a25416d99p-711,
     0x1.3e90ab211c24p-792, 0.0, 0.0, 0x1.bc2cf2965865ap-989, 0x1.e3bf09229c314p-18,
     0x1.fd42d666acf76p-34, 0.0, 0x1.0cb800e455e1dp-499, 0x1.645539fafd9cp-842,
     0x1.d530b3bd1526dp-611, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e1eff4106967p-464,
     0x1.b55fbca68e6d5p-798, 0.0, 0x1.e0155e8c71fcbp-723, 0x1.2f55e557cb0cp-727, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c59037772e91ep-952, 0x1.78d76f7861c82p-409, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.de332be9f6fb3p-938, 0.0, 0.0, 0.0, 0x1.5b39470f99e19p-797,
     0x1.9999a4011beb8p-268, 0x1.e49560a1df58ap-958, 0x1.0fd61d958d959p-112, 0.0,
     0x1.17ee25f46d357p-861, 0x1.8d3020ab1ba31p-183, 0x1.4257862a65311p-776,
     0x1.87a04061b660cp-504, 0x1.cc996e47a28dap-882, 0x1.ead2417b0ce09p-475, 0.0, 0.0,
     0x1.b2c2971003745p-575, 0.0, 0x1.30e46a759c49bp-551, 0x1.27430aa0805f1p-342, 0.0,
     0.0, 0x1.623db4c5f2bcap-650, 0x1.4c50b7ab8310fp-784, 0x1.3c9defa7f2b18p-763, 0.0,
     0.0, 0.0, 0x1.c75e0d71bd41ap-326, 0.0, 0.0, 0x1.1a69da9dd9bfp-213, 0.0,
     0x1.f87f6709d90ddp-562, 0x1.495b446b0f7fep-920, 0.0, 0.0, 0.0, 0.0,
     0x1.c1cb149648801p-988, 0.0, 0x1.eed35b094288cp-83, 0.0, 0.0,
     0x1.df9d16f91c656p-323, 0x1.177759742c97dp-262, 0x1.d0974aaca1f75p-768, 0.0,
     0x1.b6a892f1846cap-188, 0x1.9800148ede696p-913, 0x1.1fa6b939e06b1p-141,
     0x1.0df770e184fdbp-304, 0.0, 0x1.bb92f267bfce9p-814, 0x1.531c85f7377a4p-184,
     0x1.14552c513692ep-129, 0.0, 0.0, 0x1.bcba6fba24535p-855, 0x1.3698e92381321p-595,
     0x1.99dbe87fe44bep-857, 0x1.b9890b2a71b16p-464, 0.0, 0.0, 0x1.724355de64515p-894,
     0x1.de87cc1ee17cap-284, 0.0, 0x1.e7e5f566eb1bep-788, 0.0, 0x1.1d7e49c7a20e2p-525,
     0x1.5c2838b625675p-929, 0x1.82f1c47ea60c7p-509, 0.0, 0x1.aaa6c859e2106p-456, 0.0,
     0x1.d272723b17312p-144, 0x1.fbadc1dd3dbb7p-688, 0.0, 0x1.305a5f2e1eb6p-20,
     0x1.33b92dc764e56p-386, 0.0, 0x1.845f30e9989f9p-75, 0.0, 0.0, 0.0, 0.0,
     0x1.ab3f21bf6b3d4p-799, 0.0, 0x1.fe9c899c643bep-621, 0.0, 0.0,
     0x1.19a89281bc8abp-727, 0.0, 0x1.1c661ef746717p-133, 0x1.e824ef13fb2b1p-1019,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b449ceb61043p-39, 0x1.743c89531a979p-656, 0.0,
     0x1.f1b85e4aacc43p-480, 0x1.8e61bc3a8daaep-858, 0.0, 0x1.e0dceb432a6ap-655, 0.0,
     0.0, 0x1.95bac9594e2fbp-401, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f99458a558fep-909, 0x1.7e26eccc68cc3p-94, 0.0, 0.0, 0x1.6f63008baba6bp-863,
     0x1.308ae25169a3fp-442, 0x1.6759ffd3b9992p-20, 0.0, 0x1.e3e8ba2d2993dp-538,
     0x1.2fc26170a791dp-143, 0x1.3770cb32c4aebp-695, 0x1.1f91d9c804b49p-671, 0.0, 0.0,
     0.0, 0x1.c0ab4054a870ep-996, 0x1.19262eae44383p-193, 0.0, 0x1.130f16d7496a8p-136,
     0x1.de197adc1551ap-418, 0x1.c751b45dc3fd9p-955, 0.0, 0.0, 0x1.d5591e72cc1f2p-287,
     0x1.64743a7abb1c6p-772, 0x1.e27eab4196c65p-849, 0x1.629f54aca44abp-944,
     0x1.4e172e455a9abp-701, 0x1.82d659a3d6b8dp-190
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_sind2_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sind2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sind2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
