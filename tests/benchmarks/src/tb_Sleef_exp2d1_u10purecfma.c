/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d1_u10purecfma.c --function \
 *     Sleef_exp2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.2fd6e52efe4d2p-464, 0.0, 0x1.f811b4ed56df3p-154,
     0x1.cb2670e5a630ap-774, 0.0, 0x1.a0f36e055a1e6p-1014, 0x1.d07f1783a220ap-692,
     0.0, 0.0, 0.0, 0.0, 0x1.acda3490ff4c9p-881, 0.0, 0.0, 0.0,
     0x1.9206a800ae25bp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3350f053b3e66p-110, 0.0,
     0.0, 0.0, 0.0, 0x1.8ce028c6632f1p-360, 0.0, 0.0, 0.0, 0x1.0f35ee1574025p-819,
     0x1.65f778bcab243p-240, 0x1.5d353ef019c0ap-5, 0.0, 0.0, 0x1.5d40fd428e1ffp-758,
     0x1.d769b276f741ap-82, 0x1.633ccfc482fdcp-914, 0.0, 0x1.b7c42c4d2e70bp-26, 0.0,
     0x1.68882eddf2901p-403, 0.0, 0.0, 0x1.a2e9e7c093c62p-599, 0.0,
     0x1.f02c7f3287ac6p-158, 0.0, 0.0, 0x1.42d861766f717p-417, 0x1.76da2f87b9aeap-735,
     0x1.54c06818af417p-241, 0x1.d4eaf5744289cp-770, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ba9b946f5585p-169, 0.0, 0x1.364e0a60d6d57p-4, 0.0, 0.0, 0.0,
     0x1.1a89f60edec74p-810, 0.0, 0.0, 0x1.25d1e61e025c5p-428, 0x1.711ad9464349p-16,
     0.0, 0x1.2ced07d06bfebp-517, 0x1.e6e8b66e19eb4p-637, 0.0, 0x1.681e3602e127bp-182,
     0.0, 0x1.83120f41125d2p-4, 0.0, 0.0, 0x1.c454cfb4df13fp-752, 0.0,
     0x1.7eaea6ad77544p-232, 0.0, 0.0, 0x1.c86659a33978ap-626, 0x1.d7947da2cb58ap-544,
     0x1.8f692cc6795a5p-954, 0x1.2570933455dfcp-366, 0x1.6a430133ca189p-923,
     0x1.226bda8b0ca36p-333, 0.0, 0.0, 0x1.7ae40257b7b6ep-455, 0x1.7fb2ad4a42f6p-412,
     0.0, 0.0, 0x1.44520763038c4p-413, 0x1.4fc01a25206fdp-298, 0x1.527986b005f2dp-170,
     0x1.4609e1d1acd21p-978, 0.0, 0.0, 0x1.d5438d60dab33p-871, 0.0, 0.0, 0.0,
     0x1.bbb570c7cad7ap-166, 0x1.62eae32a47931p-933, 0.0, 0.0, 0x1.310fe658d1481p-994,
     0.0, 0.0, 0x1.d92bcfddcd777p-160, 0.0, 0.0, 0.0, 0x1.63a39536cd8dbp-299,
     0x1.590c60e8a70dcp-702, 0x1.9145df131ffbap-708, 0x1.d428f31071392p-102, 0.0, 0.0,
     0x1.7f59cf161c46p-145, 0.0, 0x1.bcce67c1408acp-211, 0x1.954bf93c3a573p-715,
     0x1.e6d4c8f9c59a9p-515, 0x1.21718809c9484p-655, 0.0, 0x1.280d8c83e639p-513, 0.0,
     0.0, 0.0, 0x1.158e019c5109ap-827, 0.0, 0x1.363dbd9924a2fp-935, 0.0,
     0x1.0cef8925ac599p-447, 0.0, 0.0, 0x1.fcb255be8317ap-1002, 0.0, 0.0,
     0x1.862aac3a30fc9p-61, 0x1.d664578867313p-982, 0x1.23a8edf8a7898p-307,
     0x1.d959dc0acfd0cp-157, 0.0, 0.0, 0x1.5b0a56010190bp-781, 0.0, 0.0,
     0x1.e5b8e7e09135cp-942, 0x1.2953a8652d2cbp-880, 0.0, 0x1.f7b5eb1addbb2p-688,
     0x1.bc37c4adbc0cfp-972, 0.0, 0.0, 0x1.21b8a084b24c6p-807, 0x1.218ad1547abep-147,
     0x1.03771c5678b02p-130, 0.0, 0.0, 0x1.18327fa40302cp-983, 0.0,
     0x1.81c6d1b7befc2p-837, 0x1.8dd822453f5bcp-654, 0x1.b559919528eccp-38, 0.0, 0.0,
     0x1.1682aac06fdf6p-230, 0x1.6d4b377a858d8p-499, 0x1.c2859fcecb16p-981,
     0x1.e24ad215391cap-928, 0.0, 0.0, 0x1.ee169f20c416bp-58, 0.0, 0.0, 0.0,
     0x1.ba43dd3bac9edp-835, 0.0, 0x1.f849118889255p-455, 0x1.e586e6d2ce27bp-673, 0.0,
     0x1.2db0056a31051p-530, 0.0, 0.0, 0x1.0353ec51e62dp-421, 0x1.8427214b69f0ap-411,
     0x1.41c9ac7e720efp-484, 0x1.cf3a8e8ea4a9cp-930, 0.0, 0x1.dbacb1614eb45p-580,
     0x1.cb2a899cab285p-281, 0x1.2bc0b855cdaefp-248, 0.0, 0x1.8e549e9f64fc6p-152, 0.0,
     0.0, 0.0, 0x1.9b5f952bb9b1cp-182, 0x1.34630e0a5ffd6p-194, 0x1.85cfa5ebb763dp-391,
     0.0, 0.0, 0x1.b59f32bc32b3ep-562, 0.0, 0.0, 0.0, 0.0, 0x1.c539acc7908ep-692, 0.0,
     0.0, 0.0, 0x1.fe9a1b7adc48dp-428, 0.0, 0x1.e53f5b69f457fp-409,
     0x1.13ba808550d9ap-403, 0.0, 0x1.d280834e52588p-939, 0x1.e18c2105ce63ap-753,
     0x1.36ea34abf2b4ap-953, 0x1.cc83e809ae891p-968, 0x1.e3d5a506433dfp-922,
     0x1.cb497dd43b483p-839, 0x1.374a6f4f0a672p-427, 0.0, 0x1.fcecdabd1139dp-669,
     0x1.ebe95f6877f2cp-814, 0.0, 0x1.f298ec204bb51p-856, 0x1.c0358a27eb3aep-499, 0.0,
     0x1.ac57dd4af8d64p-702, 0x1.386943b1043f5p-982, 0x1.c37e9acd42868p-633, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d44133b9cb1e5p-571, 0.0, 0.0, 0x1.4028c086c8e86p-241,
     0x1.408ffd27967d6p-241, 0x1.06fb97ea7f9bap-303, 0x1.f6362e215f715p-452, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.77e99b95413b5p-920, 0.0, 0x1.2b2a33974dbabp-863,
     0x1.dd4eda6bfa9abp-333, 0x1.46e908d5b12dp-903, 0.0, 0.0, 0.0,
     0x1.743c73d2e00bcp-681, 0x1.86ca01c8223eep-448, 0.0, 0x1.8ffa3c4d05857p-419,
     0x1.4e29e39a6d282p-196, 0.0, 0x1.bed7fdecdfcp-842, 0.0, 0x1.53eba8e32895ap-389,
     0.0, 0x1.b97653632eecdp-837, 0.0, 0.0, 0.0, 0.0, 0x1.27e25b699a996p-492, 0.0,
     0x1.13e93222e8013p-289, 0x1.4fb227ae967bdp-848, 0x1.c58bf27b8c2b4p-78, 0.0, 0.0,
     0x1.334f9d9ad9d56p-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45d93c5ec545p-3, 0.0, 0.0, 0x1.32ebb076307d1p-704, 0x1.5c15edd17ae89p-449,
     0x1.d6c3d0b374103p-238, 0.0, 0x1.70dc3b444c0d4p-5, 0x1.662f327c1f4a6p-172,
     0x1.d3c4bc55e4826p-619, 0.0, 0x1.2d672ea574cbdp-851, 0.0, 0.0,
     0x1.a694afe807d58p-358, 0x1.297a20af4ca54p-800, 0x1.666d346b18dbp-558,
     0x1.a6fba1906306p-30, 0.0, 0x1.9358eb6d98fc6p-334, 0x1.7aed793297b5ep-881, 0.0,
     0x1.4d7f3e893814fp-177, 0.0, 0x1.a193bcec65879p-804, 0.0, 0.0,
     0x1.e72e47f8c21aep-982, 0x1.7d3dbbef922a9p-555, 0.0, 0x1.c39d9d691682bp-106, 0.0,
     0.0, 0x1.93effebeace6dp-941, 0x1.1c1f7217c0355p-969, 0x1.3d18598481a05p-307,
     0x1.235bd65ded413p-544, 0.0, 0.0, 0x1.ac9b7116b4167p-318, 0.0,
     0x1.50c5e603c66c6p-419, 0.0, 0.0, 0.0, 0.0, 0x1.65d6abfe84c45p-977, 0.0, 0.0,
     0x1.6cac8466fcb95p-585, 0x1.f089a38f91b23p-786, 0x1.f461a237ef45p-584,
     0x1.fc8ac34136a09p-903, 0.0, 0x1.573c7340cf87ep-959, 0.0, 0x1.d1450a9199badp-457,
     0x1.2b6023e053959p-76, 0x1.c1992cafc5417p-870, 0x1.d2be9d533e927p-66,
     0x1.59088efd2f82fp-698, 0.0, 0.0, 0.0, 0x1.5126fdc015354p-781, 0.0,
     0x1.2751539ec7fe9p-754, 0x1.b4a79ae1f0abp-555, 0x1.abdcf5297d2dfp-620,
     0x1.e798e296cb232p-390, 0.0, 0.0, 0x1.bb7bf98eda726p-932, 0x1.5ee472ace8689p-446,
     0.0, 0.0, 0.0, 0.0, 0x1.a8ef04b2dfb0bp-656, 0x1.a93da5fda2db7p-747,
     0x1.020baba747a37p-45, 0.0, 0.0, 0x1.cb2144c673b9bp-779, 0x1.2c49c81754b5p-460,
     0x1.b916e2f94859cp-663, 0.0, 0x1.8d4cef3cb1ab9p-166, 0.0, 0x1.137b1bc282f04p-809,
     0.0, 0x1.d8a8f5ffecf59p-148, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31086270848ffp-97,
     0x1.77a34ae3a0533p-387, 0.0, 0.0, 0x1.41b63d3f5a7a1p-333, 0x1.ce528b0ce960dp-318,
     0x1.7799691f4896bp-402, 0x1.1b57fd7ec3db2p-554, 0x1.32a84a326c719p-666,
     0x1.7de0619a07209p-511, 0.0, 0x1.3002fb430aeaep-809, 0x1.24ef3eb939cccp-844, 0.0,
     0.0, 0.0, 0.0, 0x1.4899e7394e0ddp-707, 0x1.3ba96e5cda4a6p-544,
     0x1.a991065e77db9p-837, 0x1.bd140ade8c312p-695, 0.0, 0x1.32a6e0ce6cbe3p-293,
     0x1.f42781de78b29p-439, 0.0, 0x1.090c992b7df12p-696, 0x1.f59e720dbcb96p-426, 0.0,
     0.0, 0x1.6507f073a274fp-914, 0.0, 0.0, 0x1.a25ceb58a458fp-684, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.203d15383f691p-486, 0.0, 0.0, 0x1.704a8ceb71296p-94, 0.0,
     0x1.b90e4f9b296dap-750, 0x1.0508b36c5cfc5p-976, 0.0, 0x1.067d4673d6b74p-244,
     0x1.116e9c19f0b9dp-681, 0x1.c8c70eb7b377fp-177, 0x1.4bde7443625efp-897,
     0x1.b45a866d627cbp-58, 0.0, 0x1.b456e2e48122dp-52, 0.0, 0x1.ab0ef36d0f5ddp-951,
     0.0, 0.0, 0x1.90a4a12044152p-595, 0x1.5b2ca1895099cp-130, 0.0, 0.0,
     0x1.2e6600601b3cbp-905, 0.0, 0x1.b5b3346881e76p-919, 0.0, 0x1.48bb82ab27334p-449,
     0x1.99f5707849f55p-687, 0.0, 0.0, 0x1.55b3002c5666ap-908, 0.0,
     0x1.f5210188c6ca3p-934, 0x1.de53ad9970ccap-303, 0.0, 0x1.08770e42a737cp-395, 0.0,
     0x1.fbeefd98311eap-481, 0.0, 0.0, 0x1.1188885db8618p-854, 0x1.509e31affbca6p-276,
     0x1.a20058eb8ef2cp-252, 0.0, 0x1.39acaec01fa83p-992, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.60a52691c418dp-692, 0x1.ef89d894311bdp-927, 0.0, 0.0, 0.0,
     0x1.a5061bb3db7f3p-865, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8df7453a3c7ebp-8,
     0x1.f09f1011f83f3p-353, 0.0, 0x1.a29520afcf1eap-314, 0x1.9978bca38a266p-93, 0.0,
     0x1.e1974f9d05addp-523, 0x1.c30043933c02fp-575, 0x1.c9e7dadae618cp-622,
     0x1.7ac7e1bbd591cp-656, 0x1.cf3a40669ea07p-906, 0.0, 0x1.63f3354779d27p-633,
     0x1.eeb6c84bd4ad8p-933, 0.0, 0x1.78ae1c3ef1d7p-361, 0.0, 0x1.e3b19ecf25da1p-683,
     0.0, 0.0, 0x1.f34d40f9a8abdp-465, 0.0, 0.0, 0.0, 0.0, 0x1.a70827227dde9p-47, 0.0,
     0.0, 0x1.037b96bc58304p-213, 0x1.8371111705053p-116, 0x1.21e615673d555p-365,
     0x1.41837c2350c0ap-273, 0.0, 0x1.98692ed32cf63p-977, 0x1.5989f6f5f0e2cp-515,
     0x1.3538bf4d66c41p-951, 0x1.d41878354bd9cp-666, 0.0, 0x1.aa6e72d24c54ep-252,
     0x1.2bb61c70526eep-473, 0.0, 0.0, 0x1.29871b981af84p-57, 0x1.9985b5c081818p-148,
     0.0, 0.0, 0.0, 0x1.f663120493a5cp-750, 0.0, 0.0, 0x1.b849a60cc52e4p-690, 0.0,
     0x1.8b213e87c695fp-1002, 0.0, 0.0, 0.0, 0x1.18e9a0b218cbdp-1013, 0.0,
     0x1.8e5eac2079a79p-115, 0.0, 0.0, 0.0, 0x1.9033678b4fbb2p-27, 0.0, 0.0,
     0x1.22e13e68f769dp-621, 0.0, 0.0, 0.0, 0x1.c51f4bb845a32p-206, 0.0,
     0x1.557e638f2549dp-484, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cb911e3701f7p-338,
     0x1.0117cccd7a98ap-964, 0.0, 0x1.1695b04c36e7bp-556, 0.0, 0x1.1957c9e138bcbp-238,
     0x1.b3573fcb808fbp-848, 0x1.d9341a089b575p-141, 0.0, 0.0, 0.0, 0.0,
     0x1.45c1e0bcd28b3p-874, 0x1.59530c53d56d4p-364, 0x1.7a6bdbe2452cep-272, 0.0,
     0x1.3fa1d6cd42ebcp-280, 0.0, 0.0, 0.0, 0x1.df4d8c9e81538p-486,
     0x1.8a989eceefde2p-248, 0.0, 0.0, 0x1.1240b3634b9e3p-78, 0.0,
     0x1.d2ef7eb1f0f25p-756, 0.0, 0x1.b169bf74267a5p-908, 0x1.b41a33a7224d2p-523,
     0x1.89a9c79d6fe23p-746, 0x1.641d861628275p-509, 0.0, 0.0, 0.0,
     0x1.e341a9dec65ebp-154, 0.0, 0x1.baa2e29f5e11fp-1019, 0.0,
     0x1.ad4c4a205a29ap-190, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55280cfb30f51p-931,
     0x1.784134ae23874p-72, 0x1.1b1578db6f7c3p-720, 0.0, 0x1.c45597b3dc905p-737, 0.0,
     0.0, 0.0, 0x1.6eb6f2058ca99p-579, 0x1.5fbb3c56d159p-386, 0.0,
     0x1.21a4003e39d1bp-799, 0x1.c17c3208efc4ap-948, 0x1.2c1b17c6544e6p-942, 0.0, 0.0,
     0.0, 0.0, 0x1.12444a79c7bebp-66, 0.0, 0x1.10a5ad8933fbdp-695, 0.0, 0.0,
     0x1.df195fafd4e8cp-784, 0.0, 0.0, 0x1.b540bf6914b0ep-295, 0x1.75508505d6b57p-131,
     0x1.10c0b6b36eaabp-370, 0x1.d1546c114585fp-799, 0.0, 0x1.fcd541598b7b3p-32,
     0x1.6a786058fcc52p-796, 0x1.86c0be9f56cf4p-717, 0.0, 0x1.4a6a0bc1a6badp-215,
     0x1.ce456132fe73p-826, 0x1.1b052932be62ep-209, 0x1.5dfa72184f9edp-985, 0.0,
     0x1.f6774f7ef808dp-152, 0.0, 0.0, 0.0, 0x1.6950665c79a12p-768,
     0x1.dda70f80d20f8p-289, 0.0, 0.0, 0x1.9a4bd9edc05a4p-586, 0x1.f6171c7068c7cp-304,
     0.0, 0x1.083c12616993fp-33, 0x1.70c0e19e65e0dp-27, 0.0, 0x1.468661df8705ap-62,
     0x1.f20c381328072p-3, 0.0, 0.0, 0.0, 0x1.ed02319d171edp-512, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c09f3104e3e5cp-246, 0x1.eb1cedc40d6b4p-49, 0.0,
     0x1.1c5552ac40616p-70, 0x1.a770d57869135p-1017, 0x1.e8b708a011d42p-997,
     0x1.550e9ffd40505p-917, 0.0, 0.0, 0x1.1f4641bc9d557p-444, 0.0,
     0x1.bf656ad0f0d21p-434, 0.0, 0.0, 0.0, 0.0, 0x1.bf166ac688d5ap-641, 0.0,
     0x1.8642a5666a56cp-864, 0.0, 0.0, 0x1.62f04af71a618p-940, 0x1.5bf8030979dcap-16,
     0.0, 0.0, 0.0, 0x1.eaa1bc49f377p-910, 0.0, 0x1.8b29b37b1fcb7p-228,
     0x1.e7467ce210bd4p-903, 0.0, 0.0, 0x1.c1014de5c0495p-1, 0x1.e2e818484d177p-149,
     0x1.6e61e1891e86cp-976, 0x1.763d585bcb3eep-867, 0.0, 0x1.12a0dcd9ca16p-898,
     0x1.f1b3f5a50068ep-142, 0.0, 0x1.a1ad7b1b4b75dp-1016, 0.0,
     0x1.f35073db9158dp-206, 0.0, 0.0, 0.0, 0x1.5d53fa3c43552p-517,
     0x1.4a422ea52dafap-847, 0.0, 0x1.81a455af3cf6ep-547, 0x1.07f935f6a83cdp-224, 0.0,
     0.0, 0x1.ffc97d3370fccp-815, 0.0, 0x1.19db17d83c788p-909, 0.0,
     0x1.0d4d0f28af808p-955, 0.0, 0x1.ce5cc680b9afcp-329, 0x1.4c2f76913403p-881,
     0x1.cb60cd406b5b4p-706, 0.0, 0.0, 0x1.9d99fc0dcb40fp-725, 0.0,
     0x1.78484ba19aa53p-800, 0x1.e96bc0c3e6b7p-199, 0x1.07b1fc41ae4c5p-447,
     0x1.fccee9031e5e9p-230, 0x1.53cb90bc84487p-816, 0x1.eab2cdf8ae896p-282, 0.0,
     0x1.3f38d8b31c70bp-858, 0.0, 0x1.bd091599f8ddcp-993, 0.0, 0x1.77a52facedf3p-527,
     0x1.efbb71e5c152ap-639, 0.0, 0x1.dd1394ed51772p-440, 0x1.e1b28c9f1d127p-42,
     0x1.ea0df3ac95bep-395, 0x1.788cc2d127346p-722, 0.0, 0x1.2408feb0d53ffp-541, 0.0,
     0x1.0acab0ed56f19p-30, 0x1.bcbfa9c31df49p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e609e0b1976ep-759, 0x1.63cba0ca34ccdp-201, 0x1.61b2d6a077b24p-424, 0.0,
     0x1.3fb1d75ed3a2dp-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1373ac4f74adep-186, 0x1.e59095e41c758p-192, 0.0, 0x1.0326a62a4a487p-377,
     0x1.daa0c8fdf38bfp-793, 0x1.a2726186ea405p-404, 0x1.17e0b74f55c13p-477,
     0x1.0a48617e5d40cp-214, 0x1.a48a786663b2dp-249, 0x1.724585bdc4a19p-32, 0.0,
     0x1.53e0fbc4488d3p-829, 0x1.866a9f32c3e9ep-344, 0x1.9457d094036b8p-246, 0.0,
     0x1.19029fee7e459p-134, 0.0, 0x1.5f5b2030a5917p-554, 0.0, 0.0,
     0x1.2a372ee880a6bp-111, 0.0, 0.0, 0.0, 0.0, 0x1.b02f320d52dedp-711,
     0x1.f9d7bea4dd8b3p-891, 0.0, 0.0, 0.0, 0.0, 0x1.5a12e58ca52f5p-627,
     0x1.fc0e6938613afp-795, 0x1.61122d8936726p-47, 0x1.2ad5eb071a92ap-304,
     0x1.4e80ebf065925p-234, 0x1.2658f0d036ed7p-1018, 0x1.1cfb738b9fe32p-856,
     0x1.f1760dc6aacf6p-289, 0x1.7f01cc2225c09p-796, 0.0, 0.0, 0x1.716803b8acfa1p-930,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.667006cd962a4p-216, 0.0, 0x1.ba5d30a9f3502p-461,
     0x1.b0c8f395cae46p-1001, 0x1.6aa802ce49c28p-798, 0x1.8f65a556dc3adp-224,
     0x1.d821ee30c0c53p-384, 0.0, 0x1.66b17749f3c9ep-942, 0.0, 0.0, 0.0,
     0x1.049340a025a71p-225, 0.0, 0x1.de1937f7f26a9p-55, 0x1.dc8f3127b082ep-424, 0.0,
     0.0, 0.0, 0.0, 0x1.0268ee79075f2p-501, 0.0, 0x1.565fedd45b946p-199,
     0x1.3d785d1781ae9p-57, 0x1.347d6dbff7d3ep-183, 0.0, 0.0, 0.0,
     0x1.c55a4b3477d65p-969, 0.0, 0x1.e2e13fb7f8b88p-617, 0.0, 0x1.99351e6f8e5cp-945,
     0.0, 0x1.ded3569d02bdap-839, 0.0, 0.0, 0.0, 0x1.8d57a3a378f09p-777, 0.0, 0.0,
     0.0, 0x1.8c3c0ac26617ep-9, 0x1.2e884d2771916p-165, 0x1.df194a9b7f01bp-751, 0.0,
     0.0, 0x1.808531f1c7d8ep-573, 0x1.05b7ecbaa68dap-110, 0x1.ebbfde1afa677p-358, 0.0,
     0.0, 0x1.717bde2c20af9p-826, 0x1.b4d0629f10d9bp-164, 0x1.134ee0d693421p-67,
     0x1.9b3fbf90088b9p-581, 0x1.51f755593337ep-613, 0x1.d09cb224cdc1ep-632, 0.0, 0.0,
     0x1.3fafd914b1c49p-213, 0x1.e7294627a8937p-395, 0.0, 0x1.c77f7555953a5p-277,
     0x1.362ede9d7af2bp-365, 0x1.7a1ec0f50d6fcp-992, 0.0, 0x1.169a37150d00bp-887, 0.0,
     0.0, 0x1.b55ff5b2f3acdp-623, 0x1.ef4251e2ad0fcp-605, 0.0, 0x1.172159551e4dp-455,
     0.0, 0.0, 0x1.1bc3425ad86eap-557, 0x1.0bd61c3517cf7p-689, 0.0,
     0x1.20c842c28a073p-68, 0x1.b4da2db04ad37p-476, 0.0, 0x1.8bdd96a5b185p-318,
     0x1.a161020e9ba83p-1015, 0x1.e328803c0ed08p-273, 0x1.b8c0e9e901e2ep-307, 0.0,
     0x1.edf631b518ff5p-358, 0x1.36cdf9df382cp-60, 0.0, 0x1.f67d59ce53319p-531,
     0x1.ba239d420be8bp-610, 0.0, 0x1.0576fc6374d0ep-574, 0.0, 0x1.9237113621632p-817,
     0.0, 0.0, 0x1.cd1e4e10a506ap-25, 0.0, 0.0, 0.0, 0x1.108ab640c177p-937,
     0x1.c86a71ca86f94p-607, 0x1.094af6c33535dp-451, 0x1.488e4bc04e6fp-33, 0.0,
     0x1.e203b0e37394ep-394, 0.0, 0.0, 0x1.7cda1637dac15p-963, 0x1.6be3ad8907dc6p-903,
     0.0, 0x1.c88a1e3de82bp-775, 0x1.2afdcfa70571dp-403, 0.0, 0x1.c84a4d80d51bbp-350,
     0x1.106bd34c1632bp-430, 0x1.10a76392a6dacp-606, 0.0, 0x1.23fc53a4bdfc6p-816, 0.0,
     0x1.4b99c210778cap-272, 0x1.d8c07339711e9p-294, 0.0, 0.0, 0.0, 0.0,
     0x1.48911cfffa272p-353, 0.0, 0.0, 0.0, 0x1.a26cfc355f02cp-957, 0.0,
     0x1.46998bd407ab7p-86, 0.0, 0.0, 0x1.62936e501e282p-339, 0x1.b0785603093aep-160,
     0.0, 0x1.1411c6b479091p-494, 0x1.8e7b035e640dfp-120, 0.0, 0x1.37f03ae9067afp-466,
     0x1.ab0a077e432d4p-278, 0x1.f125c74fbced7p-422, 0.0, 0x1.680eb1ef6d45ep-809, 0.0,
     0x1.c79cda9fc87bap-171, 0x1.0a8e4a2346a09p-474, 0.0, 0x1.3c64013d348ebp-189,
     0x1.9b2fcee10fb89p-418, 0.0, 0.0
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
            tmp1 = Sleef_exp2d1_u10purecfma(tmp0);
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
    printf("Sleef_exp2d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
