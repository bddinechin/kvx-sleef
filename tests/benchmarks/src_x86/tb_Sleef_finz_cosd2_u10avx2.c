/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd2_u10avx2128.c --function Sleef_finz_cosd2_u10avx2128 \
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
     0x1.1130c4f03d543p-589, 0.0, 0x1.f483c86b1be3p-502, 0x1.9d5be8108386cp-738,
     0x1.4ba69e220c5d9p-931, 0x1.80b0b89f6f835p-69, 0x1.fcf3ca913cfa8p-588,
     0x1.58070824856cdp-216, 0.0, 0x1.515fb4180681fp-481, 0.0,
     0x1.6353adab463b3p-1020, 0x1.d0e9de9f9af3ep-128, 0x1.99fc450a66a1ep-250, 0.0,
     0x1.b7c14fa7e1097p-224, 0.0, 0x1.9aa70e8b57695p-311, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2ad1df2ea784ap-983, 0x1.a9163ba2b93fdp-639, 0.0,
     0x1.3c7a673799156p-598, 0x1.ba89982e4bed6p-745, 0x1.430b49782b7f7p-24, 0.0, 0.0,
     0x1.5aeeb0f628957p-730, 0.0, 0.0, 0.0, 0x1.7015cff82c292p-255,
     0x1.f215de370d1d1p-704, 0x1.4efe4bc41cbaep-872, 0.0, 0.0, 0.0,
     0x1.8072dff598691p-104, 0.0, 0x1.f290d92b539f8p-860, 0x1.24c045728d3b5p-625, 0.0,
     0.0, 0.0, 0x1.ce1a9557e320ep-234, 0x1.e859231c0590bp-256, 0.0,
     0x1.478ffb77baed6p-313, 0.0, 0.0, 0x1.46991785b3796p-42, 0x1.c35dffc6a520ep-795,
     0.0, 0x1.8e96712d26273p-845, 0.0, 0x1.e8b8c8343f578p-532, 0.0, 0.0, 0.0, 0.0,
     0x1.54977ddddaaddp-683, 0x1.957358285a21ap-256, 0.0, 0x1.c06499e66163cp-167, 0.0,
     0x1.6e52a782e2c5ep-75, 0x1.82ca02ea11afbp-100, 0.0, 0.0, 0x1.1a046ff408845p-391,
     0x1.26527d4909ed1p-497, 0x1.4592a14f538f5p-366, 0.0, 0.0, 0.0,
     0x1.fa606541fadbcp-511, 0.0, 0x1.5e91b32039d46p-502, 0.0, 0x1.115dc157a8422p-357,
     0x1.6cc9a6c9edf07p-682, 0x1.f617c652f455fp-898, 0x1.5dcabe21d5974p-276,
     0x1.9b3ef0c178cbbp-764, 0x1.21123e7d53a7dp-309, 0x1.62768c2100ad7p-86,
     0x1.5552a5d04246fp-682, 0x1.087f0324af5f8p-509, 0.0, 0x1.493e490982b59p-326,
     0x1.8827300c3ac76p-507, 0x1.16129a589a92ap-488, 0.0, 0x1.1cf76acc52727p-225,
     0x1.32a8faa8d6005p-689, 0x1.8da89b898b605p-494, 0.0, 0.0, 0x1.7f7d27dbf0d33p-117,
     0x1.74abfcfa47362p-23, 0.0, 0.0, 0x1.2d99afc9d9697p-971, 0.0,
     0x1.4907aafbe548dp-851, 0.0, 0x1.7fa8838ec0d8dp-3, 0.0, 0.0, 0.0,
     0x1.71597a061e38cp-256, 0.0, 0.0, 0x1.0be1f9a2bc535p-662, 0.0, 0.0,
     0x1.4dc33a63102b8p-575, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d23a7a998a13ap-866, 0.0, 0.0, 0.0, 0x1.c45606d70872ep-662,
     0x1.54eccfc723a68p-535, 0.0, 0x1.69fc42a86979ep-3, 0.0, 0.0, 0.0,
     0x1.b593575909a2ep-898, 0x1.86635efdd9193p-15, 0x1.5ac7d0e9b3737p-202,
     0x1.2b59726c3a22bp-234, 0.0, 0x1.41d343c495614p-973, 0x1.e04697d809289p-781,
     0x1.c5b90233e8db8p-656, 0.0, 0x1.8fe1b793c7f78p-676, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca7ad6c21b3a5p-949, 0.0, 0x1.4c417e6e4df36p-351, 0.0, 0.0, 0.0,
     0x1.40ef551efd89bp-656, 0x1.3bfa5eeaa0b0cp-697, 0x1.9ba143cf43983p-643, 0.0,
     0x1.1271a785aa118p-971, 0x1.41648674d0e4bp-147, 0x1.697f62c2be071p-467, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f08c0482de66ep-264, 0x1.93a08a02cc65bp-179,
     0x1.b75af6a4bc8ffp-50, 0.0, 0.0, 0.0, 0x1.d770efa46c393p-611, 0.0,
     0x1.3b2a888cbf6f5p-291, 0.0, 0.0, 0x1.007527f6d2c0ap-805, 0x1.7cce72c01e002p-148,
     0.0, 0x1.640c3c8a94dd2p-724, 0.0, 0.0, 0.0, 0x1.17610dc89602dp-719,
     0x1.6dfa26464ce2ap-959, 0x1.07db0df2edfc7p-94, 0.0, 0.0, 0x1.0adffb5e12f09p-113,
     0x1.2fa82dbbe6febp-974, 0.0, 0x1.9168081c72ccbp-252, 0x1.16187c7104562p-160,
     0x1.71be2a319b97fp-598, 0x1.f228c1e3838f6p-318, 0x1.d9992cc6292acp-577,
     0x1.14e097e9f909bp-155, 0x1.3633e3de86042p-479, 0.0, 0x1.6ea51d313bd33p-532, 0.0,
     0x1.65b2df218650ep-939, 0.0, 0x1.37354ab9fb9a8p-210, 0.0, 0.0,
     0x1.e26abc23f3ac1p-727, 0x1.d45d5f76b897ap-589, 0.0, 0x1.83e3a49a1139cp-194,
     0x1.48a732ae83b79p-422, 0.0, 0x1.c025aace7f5d5p-129, 0x1.06fc2f0e3d1c4p-978, 0.0,
     0x1.d61cbd2754a69p-820, 0.0, 0.0, 0x1.f07dd5d5499ddp-460, 0x1.e270d101d75f4p-794,
     0x1.4c4a27a99b038p-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.499a9a5b39bf3p-267,
     0x1.2d699addc4597p-725, 0.0, 0x1.2cb63cca1641bp-49, 0.0, 0x1.dd630c4be945cp-450,
     0.0, 0.0, 0x1.c75f9ca3e8143p-543, 0x1.6655c849b7b9cp-445, 0.0, 0.0,
     0x1.504b2762399abp-320, 0.0, 0x1.28f9f04f39927p-423, 0.0, 0x1.c4a640ba40869p-170,
     0x1.be4f28a12c1a4p-738, 0x1.c260716e4a40cp-906, 0x1.394643105cd5cp-48,
     0x1.02cca09eac09bp-339, 0.0, 0x1.97e18ee026d8cp-736, 0.0, 0.0,
     0x1.6f37c70f3e8bcp-973, 0.0, 0x1.dff1ed1102bbep-764, 0x1.72cae71b89587p-442, 0.0,
     0x1.e07028901022fp-380, 0.0, 0.0, 0x1.a8013b8b96a98p-542, 0.0,
     0x1.b940cf2785ea3p-295, 0x1.03d2ceaae29f4p-639, 0x1.d44da1b7b21cdp-300, 0.0, 0.0,
     0x1.1a32e48fc44c2p-269, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ee2c9c5ad445p-90,
     0x1.79853ebb2a5b5p-402, 0x1.5283d6a869565p-279, 0x1.fc08b8ba6868cp-593, 0.0,
     0x1.d0eb4696cb55p-703, 0x1.9f31e50f2c245p-703, 0.0, 0x1.b17e91989e88ep-503,
     0x1.0c39f231920eap-163, 0.0, 0.0, 0.0, 0x1.528cc4a04d046p-134,
     0x1.45f8db5306989p-931, 0x1.8da03927c282fp-87, 0.0, 0x1.86259333bae4cp-106, 0.0,
     0.0, 0x1.e0ecdc5500234p-313, 0x1.ece4fb8a5541cp-774, 0.0, 0.0,
     0x1.a39e3fc8a60d8p-274, 0.0, 0x1.e9a05812978f6p-193, 0x1.09f4b9284bbe1p-789, 0.0,
     0.0, 0x1.bb2c3aa3b815dp-56, 0.0, 0x1.4b3a3a7f415ddp-236, 0.0, 0.0, 0.0, 0.0,
     0x1.0f6a8a08f817ap-730, 0.0, 0.0, 0.0, 0x1.db24381b741f4p-827, 0.0, 0.0,
     0x1.a2ebaf90c85a9p-193, 0.0, 0x1.2891033b041fap-635, 0x1.969406d6e831p-37, 0.0,
     0x1.29dd82abe3e16p-77, 0.0, 0x1.ba76ccfc50943p-470, 0x1.ba6af447afd23p-919, 0.0,
     0.0, 0x1.ddf17556cda0dp-855, 0.0, 0.0, 0x1.3d58ed2b8482ep-735, 0.0,
     0x1.5bc6b4857b556p-398, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8bcad3af28e7p-273, 0.0,
     0x1.565e7947950afp-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ea19b81c04b3p-516,
     0x1.337c37814c635p-346, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1026ae69481ap-210,
     0x1.450680ab777afp-147, 0.0, 0x1.d07d3bd3ef81fp-410, 0x1.2df845ae7a2f7p-105, 0.0,
     0.0, 0x1.116a1154727b9p-479, 0x1.c31fe7e83b919p-51, 0.0, 0x1.fcf18368c0429p-47,
     0.0, 0.0, 0x1.23e2bc461c172p-135, 0.0, 0x1.440016f14a02ep-724,
     0x1.8417f91fa31b4p-82, 0x1.265800ef87286p-448, 0x1.1c29c72737963p-229,
     0x1.4198102146277p-937, 0x1.c393ef6653aeep-236, 0x1.6719aac3d2921p-374,
     0x1.2c79ac9573fc7p-897, 0x1.03cd896f72b02p-219, 0x1.7deb263337b13p-588, 0.0,
     0x1.9aa22e636113dp-409, 0.0, 0x1.7224ce74251dp-601, 0x1.e69b05e6f4e03p-219,
     0x1.353ec10d4fa5fp-233, 0x1.65a6a9f8017eap-206, 0x1.39e6212eb229ap-150,
     0x1.2a13a2f8f44c7p-26, 0x1.f7427dab4fd36p-132, 0.0, 0x1.a928eaedab6e2p-118,
     0x1.e8f55c58f0b7p-18, 0x1.4ed6bf66bb632p-40, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b082d52fc4ebp-632, 0x1.b91e96e6d5be5p-841, 0.0, 0x1.838d9200fa598p-597, 0.0,
     0.0, 0x1.ab8bd462f8e3bp-737, 0.0, 0.0, 0.0, 0x1.a98b33143b3e2p-317,
     0x1.7c13987e8da5fp-710, 0x1.8c8ac8525400ap-775, 0x1.d856042ff90fcp-822, 0.0,
     0x1.eb3f7897cadc8p-643, 0.0, 0.0, 0x1.35bc6e9e5363cp-406, 0.0, 0.0,
     0x1.aed1a9b40aa0cp-123, 0x1.426902d7fa37ap-627, 0.0, 0.0, 0.0,
     0x1.e481f1b3fedbap-641, 0x1.32da2422bfdccp-825, 0x1.7257c57b5ffd2p-597, 0.0, 0.0,
     0x1.b30a203fe9493p-589, 0.0, 0.0, 0.0, 0x1.14eec59e29306p-66,
     0x1.a5c8131545323p-708, 0.0, 0x1.270bbbddf9b7p-53, 0.0, 0x1.eff7af5578a6cp-392,
     0x1.06b742cb1e3b7p-403, 0x1.36fd727e2ce74p-460, 0x1.d9167f2c3b993p-911, 0.0, 0.0,
     0x1.79a2e69f99b38p-47, 0x1.84be9f56a4524p-858, 0.0, 0x1.914f1a74e4bbfp-80, 0.0,
     0x1.eddbea86f40fp-642, 0.0, 0x1.24e09666fddd3p-970, 0.0, 0.0,
     0x1.9d1d815ef0a55p-690, 0.0, 0.0, 0.0, 0.0, 0x1.438264b720f33p-261,
     0x1.dfd2059cfc617p-1022, 0.0, 0x1.70815eaed5a4fp-625, 0.0, 0.0, 0.0,
     0x1.4cac736482df4p-903, 0.0, 0.0, 0x1.516a472f4d705p-96, 0x1.08fe655defa0ap-326,
     0x1.0771f7170bb43p-840, 0x1.15e452a6a4f32p-442, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.095a7059dac1fp-914, 0.0, 0.0, 0x1.966b410f1dbe7p-35, 0.0,
     0x1.362f65599b154p-930, 0.0, 0x1.6dfa2600c8852p-248, 0.0, 0x1.0846fee5d9d35p-546,
     0.0, 0x1.cc6d12aa90e21p-980, 0x1.40ef0a31a9a3fp-796, 0.0, 0.0, 0.0,
     0x1.152895fe9de38p-715, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f08c80d2e4a87p-463,
     0x1.6c84f750accbap-458, 0.0, 0x1.db5b9e3935e8bp-569, 0.0, 0x1.813ec34fe1666p-571,
     0.0, 0.0, 0x1.b0dcc2f0c61bfp-118, 0.0, 0.0, 0.0, 0.0, 0x1.7fa79586de273p-418,
     0x1.f97abff047467p-905, 0.0, 0x1.ce462d32b558fp-391, 0.0, 0x1.a232656118d75p-625,
     0.0, 0x1.06e15b2c3729ap-13, 0x1.e1dd769e65915p-763, 0x1.40777d0acc8ebp-117,
     0x1.793a21bf39114p-777, 0.0, 0.0, 0.0, 0x1.541178dc7931bp-218,
     0x1.71cbc523e63cfp-238, 0x1.b0e810d99fdc9p-50, 0x1.b0ba0c2cd5436p-527,
     0x1.090a79a715987p-424, 0x1.6851731536411p-246, 0.0, 0x1.955eca88afcc3p-328,
     0x1.050a958834fc4p-713, 0x1.81f6e82676338p-292, 0.0, 0x1.12da7939bdb3bp-817, 0.0,
     0x1.2a44b3dbe523fp-656, 0x1.4f3c29eafae03p-237, 0.0, 0.0, 0.0,
     0x1.36972de3b830ap-327, 0.0, 0x1.66d7aea29b2f8p-6, 0x1.68d461adc1f1dp-587,
     0x1.744bf9dd1440cp-165, 0x1.8c306d05ede17p-94, 0x1.556146518a6bep-1020,
     0x1.c92f2f869d347p-205, 0.0, 0.0, 0x1.0b5f8c215a49fp-5, 0x1.fad75929aaacap-624,
     0x1.c26a6b982939p-611, 0.0, 0.0, 0.0, 0.0, 0x1.efb4df1eadfd8p-18, 0.0,
     0x1.54ed2713fd2e6p-728, 0x1.7990b8cdec2a1p-710, 0x1.776f3f8d21d64p-942, 0.0,
     0x1.c3f9fc47438e3p-456, 0x1.69cd3eed1c74ep-32, 0x1.88084bfa35762p-173, 0.0,
     0x1.ec20199c22898p-770, 0x1.4b57ce79b8192p-845, 0x1.24317bf0b86bbp-955,
     0x1.f26043d23c22ep-252, 0.0, 0x1.0ea77e9a6f5a8p-517, 0.0, 0x1.04d44cb2fc014p-448,
     0x1.576e0cba33242p-808, 0.0, 0x1.3890ba98a137fp-110, 0.0, 0x1.038f0495a101dp-457,
     0x1.66258645f6d75p-339, 0x1.b2bd2cec43d68p-732, 0x1.4ca6154a1c9ep-568, 0.0,
     0x1.df3acb604238dp-964, 0.0, 0.0, 0x1.53a72c90003d2p-475, 0.0,
     0x1.12fbaf018af2ap-168, 0x1.f1713ab2dd442p-218, 0x1.940a645ab68aap-664, 0.0, 0.0,
     0.0, 0.0, 0x1.56b008dea77bep-332, 0x1.7ed65185e8a8ap-90, 0.0,
     0x1.c29efe68912aap-443, 0.0, 0.0, 0x1.a1ee7fa99f823p-74, 0.0,
     0x1.bddafa85b2f43p-341, 0x1.69e4dcf00aebdp-497, 0x1.e3a17f682bb35p-109, 0.0,
     0x1.66b4a9442f5bfp-260, 0.0, 0.0, 0.0, 0.0, 0x1.3efaf6bc012fbp-669,
     0x1.4023ebbcaa86ap-557, 0x1.06de9192fb915p-855, 0.0, 0.0, 0.0,
     0x1.98a0585f15409p-769, 0x1.faa37b08be578p-278, 0x1.e6b8c0397f467p-730, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4033e1e152d63p-155, 0.0, 0.0, 0.0, 0x1.582e0bae8979bp-942,
     0.0, 0.0, 0x1.cec8fd55e00ecp-435, 0x1.7070a4f5a3464p-539, 0.0, 0.0,
     0x1.97f12970a91f6p-517, 0.0, 0.0, 0x1.9959437bf25e5p-453, 0.0, 0.0,
     0x1.5df4f2691a791p-20, 0x1.f3648c988b0eep-137, 0x1.83a0b4d0b9bfap-405, 0.0, 0.0,
     0x1.bcf24143cbbd6p-157, 0.0, 0x1.69245bf2e8ec5p-34, 0.0, 0.0,
     0x1.62aa93c07338cp-546, 0.0, 0x1.167ea05ae7915p-692, 0x1.8148dea252561p-290,
     0x1.b9ea13f65ba54p-21, 0x1.2b3d50f4baadbp-375, 0x1.5e3d081f19f8p-604,
     0x1.880d13b592e4p-410, 0.0, 0x1.c7698ce438356p-946, 0.0, 0x1.5c8a26d1c6874p-703,
     0x1.6b62de3efb73cp-912, 0x1.23cdafd068dd9p-200, 0x1.c892bd94ef95ep-32,
     0x1.b982d8596fd63p-188, 0x1.866625c772dbfp-860, 0.0, 0x1.91ad4222e6743p-464, 0.0,
     0x1.0dba7f962b161p-127, 0.0, 0.0, 0x1.97130ffbd8787p-970, 0.0, 0.0,
     0x1.882d7128a634fp-295, 0.0, 0.0, 0.0, 0x1.f276683eee669p-240,
     0x1.01a9e44b44c63p-785, 0.0, 0x1.ac2f6ce94ba22p-188, 0.0, 0.0,
     0x1.b1de7a855a11ep-612, 0.0, 0.0, 0.0, 0.0, 0x1.9b8b14da7949bp-789,
     0x1.7e7d3a42c37a9p-852, 0.0, 0x1.e02f45e17e2c5p-61, 0.0, 0x1.17e4515596263p-591,
     0.0, 0.0, 0x1.eb7a6b93f76bap-475, 0x1.ecbb014c1cdffp-268, 0.0,
     0x1.6c4dd0daf62f7p-290, 0.0, 0.0, 0x1.9ae84913ec49bp-469, 0.0, 0.0, 0.0,
     0x1.c1cd8371e3058p-459, 0.0, 0x1.34d83363fb7fp-617, 0x1.d4f71bddd97c2p-231,
     0x1.eed342d58b737p-647, 0.0, 0x1.1c6361ef39517p-778, 0.0, 0x1.a851c8c86acc9p-54,
     0x1.97a4b490ecd68p-949, 0x1.02fcbc665cadcp-544, 0x1.2701427b63972p-323, 0.0,
     0x1.6187a84e73521p-236, 0x1.49d000e08ae12p-48, 0x1.87239c4f48d6ap-783,
     0x1.9a7c01d538409p-288, 0.0, 0x1.3ee971455a42bp-938, 0x1.42bc07886453p-93,
     0x1.95fb035ff0a4cp-549, 0.0, 0x1.cc5828e6b2fe4p-161, 0x1.5e0cc7b241872p-473, 0.0,
     0.0, 0.0, 0x1.212bb8035d4f2p-833, 0.0, 0.0, 0x1.40d81a4a6b68ap-168, 0.0, 0.0,
     0x1.69ef62400d114p-616, 0x1.474eecc051beap-118, 0x1.da89b504ee55ep-292, 0.0,
     0x1.aefa5acf64f5dp-598, 0x1.3f006f2f833b2p-968, 0x1.248f9fa7c8696p-221, 0.0, 0.0,
     0.0, 0.0, 0x1.531a19683cc9fp-586, 0x1.0b19b73fec8a6p-43, 0x1.225cbb84faf3p-566,
     0.0, 0.0, 0.0, 0.0, 0x1.8ac0c17d8f50bp-81, 0x1.c6649f8b3584ep-667, 0.0,
     0x1.1412579ab7333p-227, 0.0, 0x1.6af6c2ced5dabp-545, 0x1.9135f0f4bd5bcp-362, 0.0,
     0x1.a1a041476c62fp-427, 0x1.76f281ee2402ap-66, 0x1.0e4de36068355p-356,
     0x1.7e73c4f2e8ffp-945, 0.0, 0x1.da6eb020ea313p-251, 0x1.30d028a1b374p-438,
     0x1.c0c731e3f4e06p-840, 0.0, 0x1.e5bb0b4585d7ap-560, 0.0, 0x1.b42e6322a441cp-679,
     0x1.320229d9be773p-147, 0.0, 0x1.865004bd3c579p-98, 0.0, 0x1.99527e401fe5fp-601,
     0.0, 0.0, 0x1.723d98abad98cp-355, 0x1.b5c10daa705b7p-438, 0.0, 0.0,
     0x1.c7502cc25683ep-645, 0.0, 0.0, 0.0, 0.0, 0x1.6ebb1855ff52p-253,
     0x1.056910fa67d68p-175, 0.0, 0.0, 0x1.9e80f153a989fp-43, 0x1.490380d3bfcd7p-746,
     0x1.c8d9f83a51014p-878, 0.0, 0.0, 0x1.84a2d14522a97p-289, 0x1.c074ba4445d9dp-931,
     0.0, 0x1.520d020acc52fp-874, 0x1.9b61692350b59p-655, 0.0, 0x1.4e72c7b2aa6bfp-928,
     0x1.6c0603976e7afp-948, 0.0, 0.0, 0x1.0433729a0f70fp-524, 0x1.3a1fc6e3c3dacp-762,
     0.0, 0.0, 0x1.6197bb5d7c1edp-942, 0.0, 0x1.4f4655f9cf349p-783, 0.0, 0.0,
     0x1.2514430aec7b6p-712, 0x1.9687ffa06abc6p-650, 0.0, 0x1.a652746694ad9p-236,
     0x1.5ae20badc79f7p-495, 0x1.b81b6cb050657p-284, 0.0, 0.0, 0x1.9ee872307e742p-133,
     0x1.22c318f5afaa2p-387, 0.0, 0.0, 0.0, 0.0, 0x1.a006d67a98ddfp-624, 0.0,
     0x1.922d9808999fbp-894, 0x1.24e4a04b3567ep-734, 0.0, 0x1.f4dc5a94009bfp-31, 0.0,
     0x1.8907aafa102c3p-438, 0.0, 0.0, 0x1.3ba621e426ff8p-64, 0x1.156b166fffe9fp-716,
     0.0, 0x1.ebdf41ecdaaddp-81, 0.0, 0x1.8b0c704fb410ap-324, 0.0, 0.0, 0.0,
     0x1.f97a0b168ee6ap-540, 0x1.9c85643470c1dp-683, 0.0, 0x1.9846635cf0a4ap-524, 0.0,
     0.0, 0x1.aea18bed8bab3p-486, 0x1.d22493e4140b3p-448, 0.0, 0.0, 0.0,
     0x1.bde6798bfee73p-291, 0x1.bdfaf7e5da3adp-689, 0.0, 0.0, 0x1.a09e8c865fc8ep-110,
     0.0, 0x1.8c5e1b024a244p-826, 0.0, 0x1.a3867497b26d1p-899, 0x1.e0f0b453eed2ap-453,
     0.0, 0x1.6314a89fc1789p-828, 0.0, 0x1.06a8c9cbc5a4p-798, 0x1.0c7c82e504539p-209,
     0x1.13a2b9eabae9dp-116, 0.0, 0.0, 0x1.d78a0993b74c8p-35, 0x1.83330efab3138p-805,
     0.0, 0x1.70aed2b3400dep-305, 0.0, 0.0, 0x1.ce9181641e466p-169,
     0x1.8f2a5b25e584ap-720, 0x1.b154280c2693dp-135, 0x1.401c11f45b84cp-229,
     0x1.4084e4505fbap-147, 0x1.3d5dcfc27a476p-465, 0x1.2730b700726bap-122,
     0x1.7dd7220f7823ep-742, 0x1.7aca5e2942a1p-83, 0x1.ccafa6dd9d4afp-233,
     0x1.b55ce9fe18514p-274, 0.0, 0.0, 0x1.ae02117a9f2a9p-925, 0.0,
     0x1.ed16441f7fc6cp-321, 0.0, 0.0, 0x1.8d72ac8353a14p-636, 0x1.26491aa4104c5p-313,
     0x1.e08c878e8f78p-971, 0.0, 0x1.0427674ac483ap-549, 0x1.899092ee599efp-4, 0.0,
     0x1.8d01aae8d762fp-525, 0x1.31aa116eca4abp-999, 0x1.afcd5ed35305fp-261, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.393fba4f7c3adp-810, 0.0, 0x1.73d0846a7fc98p-505, 0.0,
     0.0, 0x1.b9ce2c870db71p-884, 0x1.60446469fce78p-330, 0x1.fdaf09c48fa0dp-676, 0.0,
     0x1.50cab402046a8p-953, 0.0, 0x1.2fa4f26542d07p-830, 0.0, 0.0,
     0x1.1d6d5d8c92b8ap-54, 0x1.5e1ac012b93c8p-74, 0.0, 0x1.c5144d612a02bp-672, 0.0,
     0x1.d849240b71695p-936, 0x1.ce81257de70d9p-365, 0x1.a9955159352bp-530,
     0x1.d83530496dae7p-273, 0.0, 0.0, 0x1.2dd0fb295d7d5p-445, 0x1.07df8b67ea2eep-274,
     0.0, 0x1.5b4256150b793p-508, 0x1.9da5be6a100ccp-61, 0x1.dd162ea8e52b1p-749, 0.0,
     0.0, 0x1.a9794b715bfe2p-73, 0.0, 0.0, 0.0, 0x1.bff1ee40520acp-530, 0.0, 0.0,
     0x1.3cf9af9c1f87p-873, 0x1.63a2af454a84fp-567, 0.0, 0x1.acd6a9df219c2p-89,
     0x1.cb1d3ee8cb4f6p-615, 0.0, 0.0, 0.0, 0x1.c8b2b78533ea4p-362,
     0x1.f97e747a3af7p-780, 0.0, 0x1.3d71b2556adfap-915, 0x1.2a9c15056a5bap-533, 0.0,
     0.0
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
            tmp1 = Sleef_finz_cosd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_cosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cosd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
