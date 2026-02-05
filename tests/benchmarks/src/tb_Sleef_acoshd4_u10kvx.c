/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshd4_u10kvx.c --function Sleef_acoshd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.740db1535ff3cp-790, 0.0, 0x1.64e8463b7bd0ap-714, 0x1.c92e3f348ef26p-758,
     0.0, 0.0, 0x1.e404859addea1p-444, 0x1.08e1d8bc8f0bbp-540, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0119829d9589cp-494, 0.0, 0x1.8facf7d39a5fbp-183, 0.0, 0.0, 0.0,
     0x1.605a7deb3e16ep-406, 0x1.3a216b474cb53p-356, 0x1.3b6f0f25ea5d5p-840,
     0x1.18def8eaab367p-335, 0x1.90c7cff799b7bp-431, 0x1.81b7dfda87cabp-208, 0.0,
     0x1.6e76f2e57a33ap-303, 0.0, 0x1.72df2e0529e75p-299, 0.0, 0x1.5bdc0a6f3b509p-262,
     0x1.4b163c4286954p-618, 0.0, 0.0, 0.0, 0.0, 0x1.4302af23edb8ep-860,
     0x1.d3be37d4d807cp-526, 0.0, 0.0, 0x1.9cc874ee3948fp-250, 0x1.8b2b447709c9fp-508,
     0.0, 0.0, 0.0, 0.0, 0x1.4577c268178fbp-414, 0.0, 0x1.07cdc7d0fd5a3p-418,
     0x1.64a896c356d04p-621, 0x1.753a296e55bb5p-1018, 0x1.907c4da8df916p-1001,
     0x1.51074b117a4a1p-46, 0x1.fabc09f85450dp-992, 0x1.1c9e9defe47f2p-569, 0.0,
     0x1.e5244984301c2p-368, 0.0, 0x1.60862250c266ep-92, 0.0, 0x1.2d646ae9c83cep-467,
     0x1.56fa1fc2411dp-686, 0x1.de892219a5981p-571, 0.0, 0.0, 0x1.7c82682e0868cp-538,
     0x1.461da7050ac02p-164, 0.0, 0x1.cfda058105996p-634, 0x1.749dac69f2254p-678,
     0x1.ee9e8cff7a789p-679, 0x1.4360b45bf520cp-799, 0.0, 0x1.8ad26bd2bbd38p-699, 0.0,
     0.0, 0.0, 0x1.783261c36b995p-466, 0.0, 0.0, 0.0, 0x1.3a12bf78c9379p-261, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0660d3ae2b668p-586, 0.0, 0x1.2c95ffeec1b6p-106, 0.0,
     0x1.1483f8cd48c6cp-277, 0x1.7e0151175eac7p-205, 0.0, 0x1.385fb97fa32fap-236, 0.0,
     0x1.471bb644322f6p-697, 0x1.be6c1dd5fa9a3p-302, 0x1.86123225d13f4p-390, 0.0,
     0x1.8ae28374a70d6p-67, 0x1.ecd62e52adc59p-220, 0.0, 0x1.3ba5fa35240b5p-619,
     0x1.9eee267930d97p-467, 0x1.e4e6d9f5c5756p-157, 0.0, 0.0, 0x1.f173de71be906p-487,
     0.0, 0.0, 0.0, 0.0, 0x1.8bfb2fd6ec96bp-706, 0x1.e70ecff3af375p-675, 0.0,
     0x1.4cf640ff34505p-344, 0x1.bdf64a544d272p-854, 0x1.25474d664d2b9p-93, 0.0, 0.0,
     0x1.8805ccee419ebp-630, 0x1.cb4bc6c17bffdp-641, 0x1.3c0572dfa158cp-841,
     0x1.a44a43a99fd98p-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0926129d46f71p-74, 0x1.74e2645e04d92p-502, 0x1.d1008be83450cp-45,
     0x1.504bc8bc52dbep-78, 0.0, 0x1.6c98afecdbda3p-958, 0x1.e11a12dc7f568p-748,
     0x1.15bc596a7166fp-772, 0.0, 0x1.4cb53e50336fdp-499, 0.0, 0x1.fac86a8e0f839p-948,
     0x1.aa3d0f0a0094cp-420, 0.0, 0x1.15f4bee4649ddp-142, 0.0, 0x1.e96abd5bd82ebp-593,
     0x1.09de143f2d519p-749, 0.0, 0.0, 0x1.405c50e821b33p-624, 0x1.9158e8031e465p-414,
     0x1.f0827a1e7f09p-380, 0x1.bf76ba03c3f77p-278, 0x1.6f0222caab262p-287,
     0x1.0e10a05e95ebp-643, 0x1.b13435c1d45e9p-780, 0x1.860ab07b4f0dp-743,
     0x1.ae9b340653585p-29, 0.0, 0x1.38a78bb2be2dcp-825, 0x1.9fcd715961c47p-423, 0.0,
     0.0, 0.0, 0x1.bf7de47e30001p-492, 0.0, 0.0, 0.0, 0x1.fa12bb0e1b519p-264, 0.0,
     0.0, 0x1.b7d05b2167064p-643, 0x1.5393ceb5c1c61p-313, 0.0, 0x1.7d32023b7c1ecp-868,
     0.0, 0.0, 0x1.609e4c7e971dp-495, 0x1.94c085fe7e331p-238, 0.0,
     0x1.3182e7830a6e2p-1002, 0.0, 0x1.b90abf836157fp-499, 0.0,
     0x1.83c4f7bc578e8p-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35001a454e3a2p-789,
     0x1.88364b97e84a7p-323, 0.0, 0.0, 0.0, 0x1.8d436de0ef3bfp-587, 0.0,
     0x1.8171959bc7cccp-932, 0.0, 0.0, 0.0, 0x1.7a9898d4a6eb6p-912,
     0x1.d890308621e33p-665, 0x1.459afd6f6938dp-107, 0x1.8e11f844857e7p-759,
     0x1.54956a3e25e3ap-110, 0x1.0dd06bb6352b9p-91, 0.0, 0x1.d8d69e2c2140dp-560,
     0x1.f2b8be9639e34p-392, 0x1.33665a1e6614p-611, 0.0, 0x1.225eb4b3a117ep-286,
     0x1.7feb88d9a7037p-58, 0x1.f544621351c59p-555, 0.0, 0.0, 0x1.c0b64cc27f4f9p-544,
     0.0, 0x1.c6ad9499ae29ep-563, 0.0, 0x1.b1a7a0640f31ep-120, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9be2e760e095ep-190, 0.0, 0.0, 0.0, 0.0, 0x1.874ea67ce7572p-309,
     0.0, 0.0, 0.0, 0x1.5554dd6cd6515p-732, 0.0, 0.0, 0x1.58a6885312a24p-163,
     0x1.facc3123b1324p-484, 0x1.efb594b19e1ecp-267, 0x1.764a7d3c8a2e5p-141,
     0x1.025f90a6a9372p-662, 0.0, 0x1.092059adf01adp-537, 0.0, 0.0,
     0x1.60eb0db361314p-741, 0x1.cdbd14a5f8decp-157, 0.0, 0.0, 0.0,
     0x1.b2d6e5b61071p-202, 0x1.a1bde47088301p-397, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5cb1937c0893cp-601, 0.0, 0.0, 0x1.99fe55860e44p-745, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed0da14cbb9b4p-904, 0x1.48796f6136cf1p-374, 0x1.6503096306ba7p-529,
     0x1.80b81c03b3cfbp-215, 0x1.d8a08eb772141p-39, 0.0, 0x1.fe3fc4af0ce17p-610,
     0x1.5d622609357d6p-1012, 0x1.3501353bf6b88p-70, 0x1.3c2f9ba6b8eeep-43,
     0x1.8a4ea4923e3fdp-405, 0x1.7ce3ec0bbddabp-352, 0.0, 0x1.fa2dece573aafp-505,
     0x1.551c3844cd23cp-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.596a644b1b427p-828,
     0.0, 0x1.c97e173d5b3a2p-524, 0x1.4d2311d57840cp-288, 0.0, 0x1.c998d93b96ab5p-656,
     0.0, 0x1.ffefc11f536bdp-327, 0.0, 0x1.3e3582fee398p-610, 0.0, 0.0, 0.0,
     0x1.292c5fc73ed18p-561, 0.0, 0.0, 0x1.a4614daa17a7dp-778, 0x1.2014cfd01afabp-80,
     0.0, 0.0, 0.0, 0x1.df0d1e675a6d1p-525, 0x1.ddf725d7ab7cep-406, 0.0,
     0x1.5ff30256eb9cfp-356, 0x1.94982deb12867p-523, 0x1.c0c21e8a060bdp-266,
     0x1.bec69033097b6p-529, 0.0, 0.0, 0.0, 0x1.b0712fd95409cp-372, 0.0,
     0x1.ca8e952a570bap-788, 0.0, 0x1.038b2ceb3e3cbp-31, 0x1.58c408cb76c9ap-524, 0.0,
     0.0, 0x1.6356c94f91a94p-702, 0x1.eab4cd3fe27cdp-2, 0.0, 0x1.bd2db9aabf7ep-685,
     0x1.9bcda5af8c1e7p-110, 0x1.049b7cb9572bap-161, 0x1.dd75c663db6c6p-558,
     0x1.1a36996a0e80ap-677, 0x1.3f9347bf04eddp-25, 0.0, 0.0, 0x1.99cc78cdd4738p-173,
     0x1.104d5f57139b6p-131, 0x1.d3fbd0b0a7852p-323, 0.0, 0.0, 0.0, 0.0,
     0x1.371574790c531p-95, 0x1.1ada2de2c5fb8p-807, 0x1.0856c5998cf31p-404,
     0x1.7e3f447cf862fp-391, 0.0, 0x1.8e7e4bf460a88p-890, 0x1.514d54e700f32p-326,
     0x1.604e862256e84p-236, 0.0, 0.0, 0x1.8013cb962e898p-367, 0x1.da3e50cc6471ep-165,
     0x1.6bc3188b42487p-775, 0x1.fcd7b0b178eedp-984, 0x1.e355f702f325ep-791, 0.0,
     0x1.dac6d2161d4f2p-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34a003ac35f6ep-930, 0x1.142808e71b04ep-366, 0x1.405ced817462ap-180,
     0x1.4536e157cba28p-377, 0x1.0df2f92b86d42p-60, 0x1.4c00ac457a676p-842,
     0x1.bd597d1e522acp-1022, 0.0, 0x1.5050d49fb17aep-266, 0.0, 0.0, 0.0, 0.0,
     0x1.26dbe5b2619b6p-849, 0.0, 0x1.dc3b5f2e89ef8p-9, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.04ff3886d9f94p-58, 0x1.86cc46d0f01d5p-55, 0.0, 0.0, 0x1.1f83f21a3c20cp-823,
     0.0, 0x1.6f63af238486cp-1020, 0.0, 0x1.8c72197bd2cd6p-985, 0.0,
     0x1.b4ebad42555cfp-458, 0.0, 0x1.ee980e6bbb49bp-676, 0x1.4ecc6dbaa0a01p-233,
     0x1.68365db6a9cc8p-62, 0.0, 0x1.ed2d1ac14d701p-504, 0.0, 0x1.5d82aa3aafaa4p-269,
     0x1.50e2a14d3cfc1p-679, 0x1.a38f094838bb5p-473, 0.0, 0.0, 0.0,
     0x1.abebff673832cp-215, 0.0, 0.0, 0.0, 0x1.b8151b93ac3d8p-309, 0.0, 0.0,
     0x1.943a431d8f4fdp-544, 0x1.f1df030fa58a3p-113, 0.0, 0x1.595b99fefdc23p-516, 0.0,
     0.0, 0.0, 0.0, 0x1.30a764d875733p-620, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9bbd2c8b29c3p-62, 0x1.3e7af96af3f64p-710, 0.0, 0.0, 0x1.9611365dc1f89p-53,
     0x1.14aa793a69242p-486, 0.0, 0x1.4e0f957e907b8p-547, 0.0, 0x1.582e6c45a9c08p-90,
     0x1.0cd13938e4d3cp-1018, 0.0, 0.0, 0x1.82b7b5a1116bep-5, 0x1.38636c04df79p-573,
     0x1.72c99a78215f7p-15, 0.0, 0x1.926b2dd927b37p-912, 0x1.4f7929f6d009bp-478,
     0x1.2360e31de99fbp-483, 0.0, 0x1.9080830cb7a25p-906, 0.0, 0x1.8df177b6a3407p-689,
     0x1.696244aec0db6p-764, 0x1.39b5551f46911p-644, 0.0, 0x1.8f547002ef3eep-563, 0.0,
     0x1.2dc6f19eb5cf9p-410, 0x1.a610da1f16e77p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.93740ef22cf8dp-228, 0.0, 0x1.fdc9202974aa3p-919, 0x1.193a3208f6e05p-1018,
     0.0, 0x1.50d5d1c08431bp-10, 0.0, 0x1.0eac995a59fb6p-356, 0x1.89405bf5324abp-460,
     0.0, 0.0, 0x1.4c8520fac7539p-45, 0.0, 0.0, 0.0, 0x1.2cd60f6b26356p-397,
     0x1.52885cc8b645bp-337, 0x1.577fd2c84c8dep-703, 0.0, 0x1.df170a308d2a2p-554, 0.0,
     0.0, 0.0, 0x1.5bd924fde977ep-150, 0.0, 0x1.f3f2e6f90759bp-73, 0.0,
     0x1.0bd0b30903001p-331, 0.0, 0x1.cd92ef8d721e6p-624, 0.0, 0x1.da4e4537596dfp-982,
     0.0, 0x1.bf47aedbdf515p-813, 0.0, 0.0, 0.0, 0x1.39dac3e2f16b4p-945,
     0x1.bf7976032ec6bp-435, 0x1.69adc6b37453cp-20, 0.0, 0x1.659be3a06cf8ep-990, 0.0,
     0.0, 0x1.aa4111ad8ecc3p-81, 0x1.5b70dab464369p-745, 0x1.7263ddbe99447p-724, 0.0,
     0.0, 0x1.00a51df61d75fp-332, 0x1.d1ea7029e0105p-229, 0.0, 0.0, 0.0,
     0x1.425511dc13245p-384, 0x1.493ba082ce7b7p-415, 0x1.5106247601b7fp-720,
     0x1.edacccdd3b538p-145, 0.0, 0x1.cec5b3f5f810cp-901, 0x1.cc97aa47b4a72p-562,
     0x1.7029e5648cf16p-171, 0.0, 0x1.4655136f11febp-358, 0x1.96e495baa1df6p-942, 0.0,
     0x1.9a3e18bafe719p-376, 0.0, 0.0, 0x1.b8fbfaecf21acp-873, 0.0,
     0x1.7c5a763cc6157p-782, 0x1.06ee28709af36p-883, 0.0, 0.0, 0x1.4c7b5c3c0847p-510,
     0x1.300e31dac1d8ep-339, 0.0, 0.0, 0.0, 0x1.f69683dc92327p-31, 0.0,
     0x1.647309db81da3p-407, 0.0, 0.0, 0.0, 0x1.0da4c510bc504p-690,
     0x1.b037a387ea60cp-153, 0.0, 0.0, 0x1.46c220a7ac835p-709, 0.0, 0.0, 0.0,
     0x1.88a9469e8c7f6p-887, 0x1.4090f3dd4edadp-415, 0.0, 0x1.37bce52dce88ap-431, 0.0,
     0x1.526c6c04c4d0ap-995, 0.0, 0x1.4c3e4511d5774p-927, 0.0, 0.0,
     0x1.57010ba4fbf99p-287, 0x1.20f0beb51b422p-30, 0x1.77442f89cc831p-54,
     0x1.f8b319aa408c1p-417, 0x1.eaa678e7bd80dp-333, 0x1.79cb5a7945297p-175, 0.0, 0.0,
     0.0, 0x1.c48ba46ac8721p-364, 0x1.74d79db0b171cp-424, 0x1.cb1dfc99bd49ep-451,
     0x1.c2899f1e6ce5ep-733, 0x1.0c706eb2d6c4cp-922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a1b0bf42077edp-384, 0.0, 0.0, 0.0, 0.0,
     0x1.e82e55f262ea2p-587, 0x1.61f189b8585adp-853, 0x1.217d66a354a52p-264, 0.0, 0.0,
     0.0, 0.0, 0x1.45538f073a2d5p-472, 0.0, 0.0, 0.0, 0.0, 0x1.146edf4f078fbp-471,
     0x1.78a807040fa41p-725, 0x1.130e4334cbc2dp-188, 0.0, 0x1.9b3f6bf0b4fap-811, 0.0,
     0.0, 0x1.6e96c1a2bf278p-44, 0.0, 0.0, 0x1.0414fb9be0fe3p-47, 0.0, 0.0, 0.0,
     0x1.15a34016f9bf7p-796, 0x1.c7465e631ea32p-373, 0.0, 0x1.d9fa4e923fa53p-914,
     0x1.229723ad8c8f3p-863, 0.0, 0.0, 0.0, 0.0, 0x1.a97be236c712bp-740,
     0x1.b0eef1a55afb6p-668, 0x1.de589a66e930fp-134, 0x1.bfb19e200f7e6p-442, 0.0,
     0x1.42b543d635104p-347, 0.0, 0x1.093c1d375edc7p-955, 0.0, 0.0, 0.0, 0.0,
     0x1.6d1266fa1a4fp-306, 0.0, 0x1.932ffdc89e9b4p-416, 0x1.95b44f364a539p-1019, 0.0,
     0x1.df7bbb3b3ea66p-455, 0x1.2466640c2c45dp-671, 0.0, 0.0, 0.0,
     0x1.c1d68791662c5p-964, 0x1.1caa6fc84c932p-69, 0x1.ef5aa16a0569bp-251,
     0x1.394f5f695e736p-382, 0x1.95b48b4653977p-826, 0.0, 0x1.bb9595aa41e29p-236, 0.0,
     0.0, 0.0, 0x1.e99de712dc78ap-125, 0.0, 0x1.41203c9a1cba7p-34, 0.0, 0.0,
     0x1.6a10c3d65a099p-273, 0.0, 0.0, 0.0, 0x1.3891acb53d20cp-329, 0.0,
     0x1.87cb878c546cep-354, 0.0, 0x1.3a9f36cab69b6p-162, 0x1.748250b5dc3f2p-131,
     0x1.e4a9ba5ba3edbp-927, 0x1.a1a94f8ab82fdp-848, 0.0, 0.0, 0x1.986bc537e38dfp-900,
     0x1.c75a47aed89dap-981, 0.0, 0x1.abe36fd158d38p-194, 0.0, 0.0, 0.0,
     0x1.e3b88314df58p-288, 0x1.d69aa44df852ap-294, 0.0, 0.0, 0x1.a97638882e12dp-103,
     0x1.3a640fa05b31ap-311, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2871338e43cdp-979, 0.0,
     0x1.003dc781ccefdp-670, 0.0, 0x1.b41f7e88b330bp-329, 0.0, 0.0,
     0x1.ed9a3a6ad9ea4p-839, 0x1.ec201f4874f41p-242, 0.0, 0x1.3c24a6a4cdf29p-54, 0.0,
     0x1.348f1e68f04aep-466, 0x1.2590cdb68acf3p-16, 0.0, 0.0, 0x1.f4254bdd849bap-821,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b8ddda1173c8p-126, 0.0, 0x1.bb352e6107e2ap-634,
     0.0, 0.0, 0.0, 0x1.9dc3e5d8f5e5p-789, 0.0, 0.0, 0x1.ba62262fd8deap-120, 0.0,
     0x1.54ed7c8294ee7p-169, 0.0, 0x1.4bd456aee8d9dp-441, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d24e466280c64p-793, 0.0, 0.0, 0.0, 0x1.93513fa821408p-446,
     0x1.59d0d632cdcadp-194, 0x1.05e79f5acb9c7p-305, 0x1.05ef7fdfee89bp-86,
     0x1.a51f5639fb6dfp-255, 0.0, 0x1.5932ae1699812p-839, 0x1.86f00280413bap-845, 0.0,
     0x1.6f15dc1d987cep-299, 0x1.9f4bddec68563p-576, 0x1.4926b29515a9ap-740, 0.0, 0.0,
     0.0, 0x1.6b05b629ac03fp-230, 0x1.f624f63c4c38ep-828, 0.0, 0x1.31c92998fe14ep-195,
     0.0, 0x1.4f7a0a2ad040ep-102, 0x1.819f040d8ae37p-195, 0.0, 0x1.f43e8f87e7997p-645,
     0x1.118d4e1e6336dp-451, 0x1.2c766151dabe3p-719, 0.0, 0.0, 0.0, 0.0,
     0x1.b93aab56cda99p-650, 0x1.95e0354a17ef2p-457, 0x1.4052c1c28a4aap-945, 0.0, 0.0,
     0x1.b74bb8bbdf1fep-207, 0x1.edf9a457d07c1p-661, 0.0, 0.0, 0x1.2392afbc05dbdp-570,
     0.0, 0.0, 0.0, 0x1.e9a81e1dedb39p-173, 0.0, 0x1.0a815b94e58c1p-938,
     0x1.a4c9418712bf4p-933, 0x1.44c08d3b324c1p-576, 0x1.65d15a72a12bp-886,
     0x1.388287aaad178p-449, 0x1.5cc11610c3a55p-413, 0x1.8de02dfa8ec6dp-889, 0.0,
     0x1.40e4f5e579851p-987, 0x1.6bc2872ca20b4p-615, 0x1.32086ad3e7a04p-27, 0.0,
     0x1.19b0d3b76fe51p-603, 0.0, 0.0, 0x1.6852ab7507021p-696, 0.0,
     0x1.efabdb99c2a77p-173, 0.0, 0x1.5cb8a41735a36p-515, 0x1.ac4bbc6582568p-260, 0.0,
     0.0, 0.0, 0.0, 0x1.42bf29d07185bp-346, 0.0, 0x1.d10ef0276fa65p-816, 0.0, 0.0,
     0.0, 0x1.323441743eae9p-34, 0x1.c03f52fb6aaa3p-520, 0.0, 0x1.d3ce78c822b31p-643,
     0.0, 0.0, 0.0, 0x1.bb622fca65ccep-754, 0.0, 0.0, 0x1.daa57313150dep-347, 0.0,
     0.0, 0.0, 0.0, 0x1.91b193bf1d63dp-975, 0.0, 0x1.c32eaf5340a85p-171, 0.0,
     0x1.113052e5c7d81p-1011, 0.0, 0x1.969815296c036p-809, 0x1.06f8519388213p-269,
     0.0, 0x1.efb445d5d5cd6p-287, 0.0, 0x1.3ec0579166134p-367, 0x1.f99645c170f14p-350,
     0.0, 0.0, 0.0, 0x1.cb7b2ee6ad102p-771, 0.0, 0.0, 0.0, 0.0,
     0x1.466142c01cb17p-843, 0.0, 0.0, 0.0, 0x1.e069c34640be5p-235,
     0x1.27bfe556d163fp-566, 0x1.5a475482ed74fp-523, 0x1.0ed788b54672fp-856, 0.0,
     0x1.7ac70576e9b36p-315, 0x1.677b5fa0e6c25p-626, 0x1.7d17d50a24864p-913,
     0x1.7a2bc61d1cf63p-537, 0.0, 0.0, 0.0, 0.0, 0x1.f549947b1de1cp-884, 0.0, 0.0,
     0x1.a99679d451a39p-915, 0.0, 0x1.5c7469da02867p-74, 0.0, 0.0,
     0x1.dfeaeaa7b8947p-93, 0x1.566f263006da7p-295, 0x1.1696bd5e0436ap-85,
     0x1.b7cd40c454404p-648, 0x1.325273d8a44cep-529, 0.0, 0.0, 0.0,
     0x1.f0023e0ac83b8p-394, 0x1.13c182fcca326p-591, 0x1.932982668c20dp-1000, 0.0,
     0.0, 0.0, 0.0, 0x1.0a426ca875762p-76, 0.0, 0.0, 0x1.22d20786ca41bp-748, 0.0,
     0x1.1a7a6839066ebp-796, 0x1.314bebabd21f5p-755, 0x1.be59fc93f5d1dp-87, 0.0, 0.0,
     0x1.7978bbbc366fap-556, 0.0, 0.0, 0x1.54ea7d2f8f83p-287, 0.0, 0.0,
     0x1.b60c96571ff02p-96, 0.0, 0x1.d32bea0f8b6dap-352, 0x1.53174b2981f65p-7, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2575eb9cf7347p-75, 0x1.f84aac599438p-144, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dc030e8a5591ap-134, 0.0, 0.0, 0.0,
     0x1.610c5c5255ddcp-231, 0x1.cc418d138d0fcp-421, 0.0, 0.0, 0x1.9d9e752fbec2fp-145,
     0x1.b525cbcd8b599p-444, 0x1.a00197f4b4c97p-173, 0.0, 0x1.93498f84e9628p-1019,
     0x1.e9cfe5382debcp-311, 0x1.62ca0538e6128p-1005, 0x1.7f196d4de7f83p-619, 0.0,
     0.0, 0x1.bf20affcf6bb9p-358, 0.0, 0x1.b385f53786e2p-31, 0.0, 0.0,
     0x1.936141a9a631p-556, 0x1.201d6a9137382p-755, 0x1.1a8f8398bc321p-167, 0.0, 0.0,
     0.0, 0x1.81de5f0b37f0dp-1009, 0.0, 0.0, 0.0, 0x1.293cef84735c8p-331,
     0x1.8001fda99c831p-392, 0x1.3e0df47cc145dp-370, 0x1.da5f2c9e436d2p-346, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.45c3553b8d667p-354, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c9f397d4fb3ap-973, 0x1.4b9fab999e8d6p-798, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_acoshd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acoshd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acoshd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
