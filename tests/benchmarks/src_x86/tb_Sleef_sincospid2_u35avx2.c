/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincospid2_u35avx2128.c --function Sleef_sincospid2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.0b31eaa69bf3ep-612, 0.0, 0.0, 0x1.64138cc3e9766p-555,
     0x1.2f1f981c2af4bp-48, 0.0, 0x1.fb54b75834f6ap-919, 0x1.2f58edc111f2ep-173,
     0x1.cbb0501c96f06p-91, 0x1.4884b85a8128bp-932, 0x1.65909c294e8a3p-277,
     0x1.73aaf9d2bae86p-676, 0x1.b6faf20050964p-78, 0.0, 0.0, 0x1.abcc21029e1d1p-460,
     0x1.63af3676113e9p-188, 0.0, 0.0, 0x1.32d35f67f9398p-596, 0x1.cd93108b10aafp-52,
     0x1.586efda9e8947p-1019, 0x1.926ab1ab0b06fp-689, 0x1.70ec4372d3acbp-149, 0.0,
     0x1.32713dd89f7a3p-973, 0x1.851d70f77b242p-130, 0x1.8321bd1b5c155p-593, 0.0,
     0x1.4f189301be13ap-669, 0x1.03372f1e92c38p-266, 0.0, 0.0, 0.0,
     0x1.132b02d9da5e4p-661, 0.0, 0x1.b0c3387237541p-716, 0.0, 0x1.31941d9cc52ap-516,
     0.0, 0.0, 0x1.8769b58958149p-1010, 0x1.c87906a410ccfp-682, 0.0,
     0x1.e5c48b4f828cbp-955, 0x1.ca4eb178f9837p-348, 0.0, 0.0, 0x1.19d47db1ee994p-858,
     0x1.be4e84bff8906p-907, 0.0, 0x1.c796c7a68a412p-902, 0x1.49cb696596cfp-758, 0.0,
     0.0, 0.0, 0x1.3843a18933fe9p-989, 0.0, 0.0, 0x1.991685f707153p-229, 0.0, 0.0,
     0x1.dfa0598f3d4c2p-404, 0x1.71ef2945cc4cap-614, 0.0, 0.0, 0.0, 0.0,
     0x1.69dd4cd67fee9p-1008, 0x1.486261680ecd5p-162, 0.0, 0.0, 0.0,
     0x1.5efc88262e5ep-988, 0.0, 0x1.a736c3db29e7fp-919, 0x1.8e6f99b720096p-499,
     0x1.87ad49aa5d19ap-218, 0.0, 0x1.6a83fac388da8p-648, 0.0, 0.0, 0.0,
     0x1.9ec6f56c76164p-247, 0.0, 0x1.c748e9895901ep-911, 0.0, 0x1.d18690e005836p-329,
     0.0, 0.0, 0.0, 0x1.0584839da1978p-646, 0x1.a1107747707b3p-183,
     0x1.fd393caa72c2p-122, 0x1.ad564701cdedcp-815, 0x1.4d330f12b2ff8p-637,
     0x1.9b6b666860379p-980, 0x1.a461e89c84d02p-863, 0x1.47bc9863ab1c2p-406,
     0x1.fa26a6ba9dc47p-504, 0x1.b980f1aa45fe7p-342, 0.0, 0x1.1b326ea53bc2p-744, 0.0,
     0x1.5b997f7dfd775p-245, 0.0, 0x1.da51dae4268c8p-676, 0.0, 0.0, 0.0,
     0x1.f044cd9a22969p-347, 0.0, 0x1.adbd7b16f6f26p-982, 0x1.2638e77368ae9p-10,
     0x1.562de646fbba9p-893, 0x1.18842801227afp-181, 0x1.a8909c3604d2ep-992,
     0x1.709461b5ab16cp-237, 0x1.1f20d478f4019p-722, 0x1.717f52a010966p-814,
     0x1.736a410453c9ap-895, 0.0, 0.0, 0x1.24397c8a2b11cp-451, 0.0,
     0x1.851abfd03537fp-362, 0.0, 0x1.6ec93e9a167b2p-337, 0x1.dfbac3a20769ep-406, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.44d09b0926b39p-794, 0.0, 0.0, 0.0,
     0x1.05e48de673024p-678, 0x1.4d7ac7592a6ddp-151, 0.0, 0.0, 0.0, 0.0,
     0x1.4586438722e4ap-457, 0.0, 0x1.75ed3f0ec84dap-1012, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.26877cb204c83p-737, 0x1.c3df3a9571228p-33, 0x1.2e49b71337472p-247, 0.0,
     0.0, 0.0, 0x1.59e793d44b6b9p-928, 0x1.919a7a7cc60cdp-103, 0x1.dc5d213cc77bp-257,
     0.0, 0.0, 0.0, 0x1.390103c3dc9f6p-801, 0.0, 0.0, 0.0, 0x1.5725ab7b189b5p-991,
     0x1.4aec271c37b6ap-918, 0x1.74bd0058b98a3p-833, 0x1.94c9340c9d1c7p-201,
     0x1.a0a62166c8958p-852, 0x1.bd2b12fe75433p-572, 0.0, 0.0, 0x1.9b212c6e1a53ep-335,
     0.0, 0x1.a7dc96679702dp-955, 0x1.77066fd22ab05p-421, 0x1.ae5620cdd7b0dp-729, 0.0,
     0x1.62b5031507b4p-104, 0x1.06a4a7d8a9c5dp-548, 0.0, 0x1.ea5bb1d85d0f3p-988,
     0x1.983bb6dc32ccdp-237, 0.0, 0.0, 0x1.b760efd5bf845p-673, 0x1.d1f48100c0fa3p-89,
     0.0, 0.0, 0x1.1f86c72601f7ep-506, 0.0, 0x1.823ed2139e735p-851, 0.0,
     0x1.3517b2900faap-548, 0.0, 0x1.ac7260b32b13cp-577, 0x1.f5fab1834fdbbp-511, 0.0,
     0.0, 0x1.fd1b6f0f6ae51p-213, 0.0, 0.0, 0.0, 0.0, 0x1.ad1d178d853a2p-402, 0.0,
     0x1.57213044e833bp-435, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7994a485e3c39p-813,
     0x1.fef9a719b3475p-995, 0.0, 0.0, 0x1.edfef22024fd5p-440, 0x1.e8910d79904ffp-705,
     0x1.18916d677bcbdp-762, 0x1.370abfb455538p-978, 0.0, 0x1.b60793fd824e5p-654, 0.0,
     0.0, 0x1.b422079e0ec16p-32, 0x1.de9a483a85247p-143, 0.0, 0x1.eab1ee5fed1cap-940,
     0.0, 0x1.1d2e119f9a5dbp-669, 0.0, 0.0, 0x1.5482bd7c33be6p-408, 0.0, 0.0,
     0x1.f0c3af3a0a40fp-54, 0.0, 0x1.716eb68b85cf3p-710, 0.0, 0x1.5f8f05fc2b251p-133,
     0x1.c1824dfde4e9cp-483, 0x1.cded266f400f4p-175, 0.0, 0x1.02d41a0059d3cp-155,
     0x1.9d8ffef120106p-740, 0.0, 0x1.1257069307acep-577, 0x1.60f199068a37cp-487, 0.0,
     0x1.0325f452cd3c6p-307, 0.0, 0.0, 0x1.0f28ac899ef5fp-555, 0x1.fd5dac694b8cfp-571,
     0x1.e0a6d38c6f003p-649, 0x1.48e5ad7068406p-1004, 0.0, 0x1.80f8b91035bf2p-471,
     0x1.4328783209a33p-910, 0.0, 0.0, 0x1.13fe0712e91a2p-83, 0.0, 0.0, 0.0,
     0x1.263e8a33671e8p-765, 0.0, 0.0, 0.0, 0x1.0101f92ff17a8p-344, 0.0,
     0x1.f7369d5c8f3a4p-8, 0x1.a4ad8dd485179p-486, 0x1.000bf095b1449p-2, 0.0,
     0x1.5cf0fafb8762fp-310, 0.0, 0x1.cceda72868671p-709, 0.0, 0x1.994c1c11228eep-479,
     0x1.6418d92f074a9p-501, 0.0, 0x1.72d7bdc44c711p-685, 0x1.790948b70ac08p-653,
     0x1.dd9c5603634b7p-49, 0.0, 0x1.3e6152c15b918p-282, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2168474826207p-906, 0x1.fe3e248542063p-398, 0.0, 0x1.e67f3baf25483p-575, 0.0,
     0x1.e20d81fc87b42p-179, 0x1.c9966401d3eap-565, 0.0, 0.0, 0x1.3dde3c07f90c6p-19,
     0.0, 0x1.6e5d0126da4edp-330, 0.0, 0.0, 0x1.4a82d38c5fdecp-260,
     0x1.97360ac3be773p-472, 0.0, 0x1.d0eecc7e11547p-910, 0x1.77806635f6907p-876, 0.0,
     0.0, 0x1.6a00841d45e9ep-314, 0x1.f34317749a8cbp-26, 0x1.ee50e5ecaac83p-638, 0.0,
     0x1.d95e5244b5f11p-839, 0.0, 0x1.0670f2509e9b2p-462, 0x1.333a686491d56p-530,
     0x1.825948b2e30b6p-297, 0x1.cb91a6a0d9276p-664, 0x1.0aa383a62310ep-685,
     0x1.17ab2a216c4bdp-772, 0.0, 0x1.2772da3a9c3afp-212, 0x1.0cc59e3fd7f22p-536, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6cebf2233bdp-891, 0.0, 0.0,
     0x1.77bc820a93fa5p-685, 0x1.1029ea0f51bd9p-834, 0.0, 0x1.14aecced56bffp-917, 0.0,
     0x1.2d77c95b9733fp-306, 0x1.088722bfd860ep-61, 0.0, 0x1.2bf856f5f778p-370,
     0x1.d76635d7fe585p-532, 0x1.5b9ba4d6a6061p-429, 0x1.d7f9c9a6b8bb1p-495, 0.0, 0.0,
     0x1.5b0f017527af7p-596, 0x1.458c8773e64ddp-834, 0.0, 0x1.e1c2eb20b1d2cp-633,
     0x1.f5234fa599502p-44, 0x1.63c1d6dbddf91p-736, 0x1.923ed1ebdaaf1p-999, 0.0,
     0x1.bc5662869e21ep-1007, 0x1.612b1a9be1c15p-998, 0.0, 0x1.77582d271d42fp-414,
     0x1.988585d7827efp-698, 0x1.7af0810950213p-596, 0x1.7187b4500d796p-349,
     0x1.2ff69ad293d1ap-145, 0.0, 0.0, 0x1.3e068dd5be21ap-930, 0x1.c1cbe84fdde6fp-787,
     0.0, 0.0, 0x1.2b2a5903aff2bp-111, 0.0, 0x1.623d5d549c327p-420,
     0x1.fcef69206ae7fp-625, 0x1.6b72f6be7c016p-741, 0x1.ed021b5a4ed8bp-246, 0.0, 0.0,
     0.0, 0.0, 0x1.8b25a235b217p-490, 0.0, 0.0, 0.0, 0x1.86a7b42218a6ep-210,
     0x1.a4c19fb5e6af6p-1006, 0.0, 0x1.04921e3e7bdcbp-1000, 0.0,
     0x1.415e65d4d8219p-1005, 0x1.75783c36e132ep-267, 0.0, 0x1.1c4435b852057p-536,
     0x1.2da34427d60d6p-815, 0x1.77022a80a72ap-619, 0.0, 0.0, 0.0, 0.0,
     0x1.73cd22a76e425p-831, 0x1.7f0333a087824p-282, 0x1.41e3f5c640ep-390,
     0x1.0278a02df3ff7p-212, 0.0, 0x1.dea901f4521a6p-29, 0.0, 0x1.a6f406613acfbp-745,
     0.0, 0.0, 0.0, 0x1.cd9d70a3f8346p-626, 0x1.071d5bf3fa11bp-658, 0.0, 0.0,
     0x1.46c28e0516f72p-319, 0.0, 0.0, 0.0, 0x1.974ea5439e0b1p-619, 0.0, 0.0,
     0x1.3100a5a89e4f3p-281, 0x1.4bd3f4a5abb4dp-18, 0.0, 0.0, 0x1.9bc352fa10102p-1017,
     0x1.66067962cd3a6p-181, 0.0, 0x1.8704fbd27570fp-818, 0.0, 0.0, 0.0, 0.0,
     0x1.8abf180283422p-563, 0x1.36b448c692a71p-733, 0.0, 0x1.17cc2beeb3261p-459,
     0x1.c1c20a871d618p-865, 0x1.e1863bee5c9fep-532, 0x1.e094bf57d7c7fp-103,
     0x1.e7a86fc187ccap-562, 0.0, 0.0, 0.0, 0.0, 0x1.d0a3d71fd9f09p-752,
     0x1.7cd60e065fb5dp-379, 0x1.450e36216eefep-953, 0x1.6ad2daecc7adcp-588, 0.0,
     0x1.7b9979a2521f3p-676, 0x1.cb240ade3a34cp-462, 0.0, 0x1.c449e500b8095p-104,
     0x1.e2c233f1e1688p-906, 0.0, 0.0, 0.0, 0x1.780b8e5174c61p-365,
     0x1.c6c20c0a4485dp-127, 0.0, 0.0, 0x1.076b6812444a4p-669, 0.0,
     0x1.bea6dbc0b2b22p-227, 0x1.1a4e427b3c324p-496, 0.0, 0.0, 0.0,
     0x1.0e8663bbc1ec2p-218, 0.0, 0.0, 0.0, 0x1.2b823e58e9756p-205, 0.0,
     0x1.2d4af2df8a356p-349, 0x1.47f3d23ab9276p-57, 0x1.9a33d41799d7fp-455,
     0x1.d54f7b18ddadcp-754, 0x1.b5234b9de8272p-48, 0x1.b8a137d1a42fbp-198, 0.0,
     0x1.f055709d296fp-534, 0.0, 0x1.f35189f20ef4ap-858, 0x1.871950915376ap-120, 0.0,
     0.0, 0.0, 0x1.d54e7572953b3p-459, 0.0, 0.0, 0x1.1c8126b96434ap-536,
     0x1.762bb8df3279fp-419, 0.0, 0.0, 0.0, 0.0, 0x1.be7a517daa0a8p-132,
     0x1.f51d54421cdb7p-727, 0x1.10b95855d7d77p-898, 0.0, 0x1.8c0cab22386f6p-615, 0.0,
     0.0, 0.0, 0x1.7bd42670cf522p-445, 0.0, 0x1.b3ea5ae5b79b6p-552,
     0x1.283829c044ecfp-20, 0.0, 0x1.7f91e6679633ap-691, 0x1.8a315f8cac738p-947, 0.0,
     0.0, 0x1.a418a68cc1da8p-180, 0x1.d935b56bc71dcp-201, 0.0,
     0x1.b1fabe1ef099cp-1007, 0.0, 0.0, 0x1.f97ebfbb56d97p-75, 0.0,
     0x1.04feedd95f9cbp-133, 0.0, 0x1.6c3e52af6a46dp-626, 0x1.67b0037092c85p-116,
     0x1.f5780d27fdbc1p-988, 0.0, 0x1.bbeb26096a305p-821, 0x1.cf6ade2c39be1p-942, 0.0,
     0x1.943f828ddf3f8p-118, 0.0, 0x1.6f391ea3b2e07p-407, 0.0, 0x1.2ae54f8d5cb5p-904,
     0x1.38663418d0c74p-542, 0x1.b81b3c00509ep-316, 0x1.cd7ea4637815fp-479,
     0x1.698ee758f640fp-797, 0.0, 0x1.76970ec528c92p-663, 0x1.9d8edac02cc7cp-848, 0.0,
     0x1.40b175d8cfc9ap-807, 0x1.3e507b1632336p-720, 0x1.b0012072f1c2ap-585, 0.0,
     0x1.d8d7852b8cbd7p-755, 0x1.052be4dd07f04p-68, 0x1.6183aa149350bp-697,
     0x1.e45ad0a4094afp-876, 0x1.e640ef0cd7357p-436, 0.0, 0.0, 0x1.44e59321c6f46p-108,
     0.0, 0.0, 0.0, 0x1.4062373dc6b46p-80, 0x1.924a92df25e63p-758,
     0x1.34972c953530ap-115, 0x1.8f9396b470478p-430, 0x1.4c97e1aba802fp-421,
     0x1.917156ea8e0a1p-892, 0.0, 0x1.1ccd2971790ccp-897, 0.0, 0.0, 0.0, 0.0,
     0x1.5d743b99fefe5p-675, 0x1.1996ecba97d61p-305, 0.0, 0x1.f3cfa9d58268bp-52, 0.0,
     0.0, 0.0, 0x1.c0711bcde9149p-530, 0.0, 0x1.5407a72ee0472p-830, 0.0, 0.0, 0.0,
     0x1.74e812fd233fp-18, 0x1.fb575f6f82134p-808, 0.0, 0.0, 0x1p0,
     0x1.83729db7a7e14p-24, 0.0, 0.0, 0x1.ecf0824e879a2p-329, 0.0, 0.0, 0.0,
     0x1.d94030b38fbc8p-991, 0x1.afc729b91e5f3p-199, 0x1.2ed1ad3d7e162p-352,
     0x1.bb59a448abf7fp-965, 0x1.704041b39fc3ap-914, 0.0, 0x1.1803f1f0f5e81p-355, 0.0,
     0x1.4410263787d64p-778, 0x1.d4547f7072b66p-282, 0.0, 0x1.f3734c9017844p-359,
     0x1.d83b6f0861826p-828, 0.0, 0x1.5d7378087d939p-204, 0x1.0ebb0e5643d01p-237, 0.0,
     0x1.4004a3a18f577p-544, 0x1.fd055941083cap-272, 0x1.006d55ff9e758p-520,
     0x1.a187c3c70547bp-944, 0.0, 0x1.414a39b9ce8bp-840, 0.0, 0x1.a3e08c8ee9532p-330,
     0.0, 0.0, 0.0, 0x1.725f399fe1262p-571, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.722ec2a42f2cbp-301, 0x1.1ff796f924a64p-416, 0x1.085e19ea3c20cp-138,
     0x1.39d2a093c1da7p-266, 0x1.ec708e7948c2p-239, 0x1.cdf8cb894e5c4p-671,
     0x1.9f73ef40c5b85p-580, 0.0, 0.0, 0.0, 0x1.735e6615b889fp-903, 0.0, 0.0, 0.0,
     0x1.063006c123046p-454, 0x1.a68e4d3b9ec4ep-872, 0.0, 0.0, 0x1.8c2f452a108fdp-585,
     0.0, 0x1.e61b524d654d2p-157, 0.0, 0.0, 0.0, 0.0, 0x1.97beb1f2552b6p-276,
     0x1.a08f09eacaa2fp-944, 0.0, 0x1.b59d776cc1a02p-936, 0x1.f3483bdfdf3fep-252, 0.0,
     0.0, 0x1.b4b674507514dp-673, 0x1.9a0d5a921f612p-439, 0.0, 0x1.543f392ee8db7p-427,
     0.0, 0.0, 0.0, 0.0, 0x1.5b55244adff6ep-208, 0x1.c4bf3e36354bcp-146,
     0x1.b143e90c68b7bp-341, 0.0, 0.0, 0x1.42def74c3cb11p-127, 0.0, 0.0,
     0x1.b8994d7a0adc8p-206, 0.0, 0x1.b53264afee991p-431, 0.0, 0x1.abda22267fd03p-252,
     0x1.d8f18dec2f45ap-154, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ce42ef226ddep-296,
     0x1.b306ea645cbd5p-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.197fbcbcf5546p-692, 0.0,
     0x1.0999e7c8083cdp-878, 0.0, 0x1.2ec3448f2e37ep-279, 0x1.81cfa37ee40c6p-604,
     0x1.997792c7feec8p-685, 0.0, 0.0, 0.0, 0.0, 0x1.5dc8d0d6c62f9p-48, 0.0, 0.0,
     0x1.612984c8c7933p-368, 0x1.fb4a7bd2b1e1p-661, 0x1.03cf1ee789f6cp-320, 0.0, 0.0,
     0x1.1b254886881p-33, 0x1.87c97cec18059p-703, 0.0, 0.0, 0x1.7dc93c329f11ep-919,
     0x1.ac3ee9254f4ddp-1016, 0x1.75b4691ae3cdbp-635, 0x1.7d8e7433645d2p-936,
     0x1.bfc7f36237acap-365, 0.0, 0.0, 0.0, 0x1.59af0d1d28ba9p-248,
     0x1.e48e9aaf40fb1p-229, 0x1.372a6e66e9186p-74, 0x1.3ca6c16813c6bp-297,
     0x1.f62c9b58735a4p-708, 0.0, 0.0, 0x1.5594e5bafc11dp-1003,
     0x1.bfb024ef449acp-884, 0x1.82853299b574fp-48, 0x1.c0432ac334103p-304, 0.0,
     0x1.2b66e4f73acd1p-811, 0.0, 0x1.35ace32a42597p-1007, 0x1.f0005ba8fd45ep-752,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1060f15156915p-254, 0.0, 0x1.69b1851c06a9p-636, 0.0,
     0.0, 0x1.c90f5d93faf78p-727, 0.0, 0x1.2c3ace320dd34p-1018, 0.0, 0.0,
     0x1.8a30d6b5265d7p-1005, 0x1.2664d0ef1d688p-153, 0.0, 0.0, 0.0, 0.0,
     0x1.68879c5cae057p-861, 0x1.1a2c30b1e8996p-37, 0.0, 0x1.a780569b1f4c1p-773, 0.0,
     0x1.f15777c028df9p-146, 0x1.4d91662f109a5p-70, 0.0, 0x1.3229aa244a9c7p-609,
     0x1.980fd1d3fbd16p-753, 0x1.47a30109ba2dep-823, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.babc2a2ca9327p-191, 0x1.3884db3d95f7cp-33, 0x1.4d29e93af68b9p-715, 0.0, 0.0,
     0.0, 0.0, 0x1.58997fc9a3ec2p-637, 0.0, 0x1.3bf8a3504a634p-639, 0.0,
     0x1.69a9ee03e3688p-188, 0.0, 0.0, 0.0, 0.0, 0x1.cc86e22cb2a3dp-270, 0.0,
     0x1.0d42b0817df1ap-202, 0.0, 0x1.5cd8d05b5cb83p-1022, 0x1.cf08fe04b0528p-393,
     0.0, 0x1.71c021182b0a8p-418, 0x1.fd9dff3932e41p-587, 0x1.2027a7e015b01p-712,
     0x1.29de2106edf6ap-467, 0x1.39a9cbcd325edp-434, 0x1.ab5aac0f29ed8p-937,
     0x1.ed75035bf7285p-201, 0.0, 0x1.47a19a803606ep-891, 0.0, 0x1.f134a4adf4e2cp-418,
     0x1.31f2e4a4a9ef4p-322, 0.0, 0.0, 0.0, 0x1.882b2681e1075p-482,
     0x1.a405acd651a9bp-854, 0.0, 0x1.38d3c87ea1206p-701, 0.0, 0x1.2266a397175aap-825,
     0.0, 0.0, 0.0, 0x1.bb61907f736fep-788, 0x1.a7562325d9c26p-133,
     0x1.9b0ebb61f233ap-551, 0x1.d6c3608ce22d3p-505, 0x1.f091610034c8p-768,
     0x1.279086b8c8b87p-851, 0.0, 0.0, 0x1.698383da14c7p-273, 0x1.9310ff6b3762ep-94,
     0.0, 0x1.5db2e33698c32p-755, 0.0, 0x1.a209cefcd0da3p-86, 0x1.02a7db0675cbcp-861,
     0x1.3ca66ffb31189p-501, 0.0, 0x1.bfc2417f92061p-171, 0x1.438ce6f312316p-88, 0.0,
     0x1.5db9cb82a9101p-325, 0.0, 0.0, 0.0, 0x1.69fcdd9f6228fp-328, 0.0, 0.0,
     0x1.6a4a6f91200efp-511, 0x1.2062151407512p-171, 0.0, 0x1.e5a50a61f56dp-959, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b3c05682c085p-499, 0.0, 0x1.8b22c3c22941ep-139,
     0.0, 0x1.7abec2b03ea74p-668, 0.0, 0.0, 0.0, 0x1.db9dc59951b94p-431, 0.0, 0.0,
     0.0, 0x1.1054d0f9bfc3ep-286, 0.0, 0x1.5e1baafc00fadp-213, 0.0,
     0x1.47fa633ddd4cbp-731, 0.0, 0.0, 0.0, 0x1.771ca376bf9fp-378,
     0x1.280349fae464dp-187, 0x1.102a8299424c2p-579, 0x1.38c2c5425c68p-458,
     0x1.672798e80ca71p-156, 0x1.612165ce8917ep-17, 0x1.aea0ca7a63739p-822,
     0x1.bbf7ca8d7551ep-571, 0x1.f7402325b1bb6p-671, 0x1.b78c82dfa8d99p-63, 0.0,
     0x1.dc05dba6ddcafp-236, 0x1.3a794875976fcp-63, 0x1.6cd564400b89cp-884, 0x1p0,
     0.0, 0.0, 0x1.428ac0a50722p-166, 0x1.765fcf9b3bcc5p-794, 0x1.edfc73aa4b478p-757,
     0x1.e44c2772d43f5p-337, 0.0, 0.0, 0x1.331a433d8226bp-821, 0x1.853ad8b6ec663p-87,
     0x1.63130fcf0ef99p-639, 0.0, 0x1.52d2c2ff80049p-330, 0x1.4639fef78d71fp-296,
     0x1.093bad6fb615cp-578, 0x1.f3c6524bc80dp-311, 0x1.8f718a5b835a3p-190, 0.0,
     0x1.5e201a7c3bc8p-995, 0x1.d41a723451c3fp-244, 0x1.4ef3b404e42e3p-480,
     0x1.143a085774869p-737, 0.0, 0.0, 0x1.922ee569e7a6cp-699, 0.0, 0.0,
     0x1.ef4afbbd830dbp-234, 0x1.1fd9fa44f33aap-693, 0.0, 0x1.2f94c14a7ddb1p-418, 0.0,
     0.0, 0.0, 0x1.422c16bbe543ap-278, 0x1.ed65db79bd8f9p-970, 0x1.ca8b3a1d8bd7dp-688,
     0x1.c7b97cc9e564ep-966, 0.0, 0.0, 0.0, 0x1.8556cd6c9f378p-411,
     0x1.7633649b3ad62p-733, 0x1.52d5fae749746p-448, 0x1.f2db9f78b3359p-425,
     0x1.25c8f6f24086fp-84, 0x1.5d9a15b658ef5p-779, 0x1.1c3707c7fe555p-335, 0.0, 0.0,
     0x1.aa53c959c42eep-738, 0.0, 0.0, 0x1.7e71e74c4514ap-200, 0.0, 0.0,
     0x1.ee2c3609a1fd6p-858, 0.0, 0x1.e15598d015954p-752, 0x1.ac1ab0ad6dc01p-731,
     0x1.fa90c177cfe9ap-867, 0x1.22d16b2c7aa9bp-901, 0x1.628e74751713bp-862, 0.0,
     0x1.2a584bcb27c4cp-386, 0.0, 0x1.a780fea3e0b0dp-535, 0x1.4d2abecc8455dp-905,
     0x1.f883824bcea79p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a3d542265205p-219,
     0.0, 0.0, 0.0, 0x1.264126bcc3fc9p-774, 0.0, 0.0, 0x1.aa52e0aadb86dp-171, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a35ec462903b9p-413
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincospid2_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_sincospid2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincospid2_u35avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
