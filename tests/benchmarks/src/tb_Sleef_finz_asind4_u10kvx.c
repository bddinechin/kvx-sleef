/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind4_u10kvx.c --function \
 *     Sleef_finz_asind4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.9f4d659e37fe1p-77, 0.0, 0.0, 0.0, 0x1.fed6fbfa1f32bp-359,
     0x1.c584e6bad9f44p-307, 0x1.c2bc1b7e2b147p-193, 0x1.8e678de2ccf7fp-214, 0.0, 0.0,
     0.0, 0.0, 0x1.2d52aeda45a8ap-368, 0.0, 0x1.0bc1cb9605485p-425, 0.0, 0.0,
     0x1.919ad620f91cfp-810, 0x1.772f21d753d45p-840, 0x1.8fb2fd60638a8p-959, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9fbb8169c48dp-277, 0x1.f1ce1e91e127ep-80,
     0x1.c119e51610a25p-91, 0x1.c77d2d5db6d94p-144, 0x1.3f76aff6f5bf9p-941, 0.0,
     0x1.b1d9e355b1d04p-523, 0x1.a388cca93d0bep-726, 0x1.d3e04c05c5474p-360,
     0x1.32291b07cad29p-283, 0x1.81f2545076d62p-487, 0x1.cb531073b67f3p-638, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c7eabfc19a2cp-716, 0.0, 0.0, 0x1.d17dbc0fa4c3cp-480,
     0x1.464f8036866f8p-267, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb4e9476f8e16p-781, 0x1.53081257e059fp-899, 0.0, 0x1.a6ed06172abecp-71,
     0x1.d9d0eb865cc85p-930, 0x1.325ccaece4091p-967, 0x1.575a90591ff1cp-8, 0.0,
     0x1.aa1d80f8a6468p-580, 0x1.e9a02614afba5p-270, 0x1.e393df73a9865p-627, 0.0, 0.0,
     0x1.0d18a2466aa55p-354, 0.0, 0x1.bb883c1b841f4p-687, 0.0, 0x1.49d90247e4836p-343,
     0.0, 0x1.e807d52497fe8p-184, 0.0, 0x1.990ddb2403787p-316, 0.0, 0.0,
     0x1.1a7bac187b37dp-827, 0.0, 0x1.a3d3f9d30b348p-534, 0.0, 0.0,
     0x1.0fed25138f2d8p-929, 0.0, 0.0, 0x1.f8df2e94cec2ap-672, 0x1.32257821ddacep-264,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d121f660f1f6ep-478, 0.0, 0x1.d2ee9443551ddp-413,
     0.0, 0.0, 0.0, 0x1.6167baff24733p-236, 0.0, 0.0, 0.0, 0x1.0adb94918601dp-539,
     0.0, 0x1.0dcd22bc7fcabp-284, 0.0, 0.0, 0.0, 0x1.9bea1ce7e13b2p-325,
     0x1.5e56487d04671p-840, 0x1.387725cdf38afp-820, 0x1.4dc9288463f24p-340,
     0x1.70cfa508212fbp-876, 0x1.1bf5a723157aap-694, 0.0, 0.0, 0.0,
     0x1.ef0b7dfe54355p-949, 0.0, 0x1.e1353f4ed7588p-400, 0x1.fed7f222dad6p-638, 0.0,
     0.0, 0x1.1867f0e4bb495p-105, 0x1.fd3be8897316p-40, 0.0, 0.0,
     0x1.ac4138d826c9fp-390, 0x1.adc14e474810cp-201, 0x1.64ca8c79bd6c7p-744,
     0x1.7e755744366f4p-282, 0.0, 0.0, 0x1.b899c82fc2f79p-1014,
     0x1.4d0a1a7d87c99p-891, 0x1.d69cda3e2a285p-91, 0x1.4805428d5a492p-399, 0.0, 0.0,
     0.0, 0x1.02ff57ec65ce1p-512, 0x1.740929707c566p-394, 0.0, 0x1.c9aca2b19f882p-528,
     0x1.5c2d3a23b52b2p-23, 0x1.0fa226fe65f8cp-167, 0x1.f22de7666d07dp-96,
     0x1.fb4ef560539fbp-194, 0.0, 0.0, 0.0, 0x1.7186ee312e81p-364,
     0x1.90e59cdc5ccdbp-399, 0.0, 0x1.f93c4055c6bdbp-241, 0x1.473b1dca8f3c6p-827, 0.0,
     0x1.b00c53c3629efp-486, 0.0, 0.0, 0.0, 0x1.764071172644fp-49, 0.0,
     0x1.6c450d2ce30b1p-925, 0.0, 0x1.8b244faddbc9dp-112, 0x1.935a1aab1255ep-693, 0.0,
     0.0, 0x1.49869c0477e5ap-343, 0x1.308871dda069bp-776, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.167fda5b17544p-816, 0.0, 0x1.de934e7b035f2p-516, 0.0,
     0x1.5c2ed54bb1772p-619, 0x1.af60b9cd2da4ep-994, 0x1.56a8ed51ce65bp-985, 0.0, 0.0,
     0.0, 0x1.65a3e7c0be374p-686, 0x1.650c9e20a92f2p-1003, 0x1.2d67d3f8e4e49p-285,
     0x1.5695adb9c7b7dp-756, 0x1.d6ec9df0df4d2p-439, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7709382331624p-36, 0x1.30c4241434c0cp-728, 0x1.5400e19ac8ef4p-776, 0.0,
     0x1.6b89f6f0ae96cp-611, 0.0, 0x1.0e3515a349ap-50, 0.0, 0x1.9531f82769ecbp-512,
     0x1.1657bf7c5c52ap-200, 0.0, 0x1.67553be2e2f09p-907, 0x1.3611e6fed4b24p-881, 0.0,
     0x1.0190df9372dap-818, 0x1.3475b8ef9f281p-255, 0.0, 0.0, 0x1.b7954b8e90adap-949,
     0.0, 0x1.4aae6b4371cd3p-639, 0.0, 0.0, 0x1.e649bea3841fep-333,
     0x1.7294bcc99580fp-190, 0.0, 0.0, 0x1.c958b9a260d61p-716, 0x1.52264a18831cp-58,
     0x1.f01b1a6bbce6p-817, 0x1.feab4e274f0ccp-13, 0x1.080a694e9e662p-492,
     0x1.98558b7114676p-130, 0x1.9afde3481ff72p-650, 0x1.f9560aa126faep-559, 0.0,
     0x1.dcc2d59f0a4bp-587, 0.0, 0x1.0c554d4c39d48p-763, 0x1.c073ed10d0defp-212, 0.0,
     0x1.f6195a2915881p-355, 0x1.64fce59c42482p-938, 0x1.0873bb1e5aa9fp-959, 0.0,
     0x1.b2f622d43d17p-543, 0.0, 0.0, 0x1.0c08c312356a9p-570, 0x1.5c0e80eb46979p-452,
     0x1.ba475629ba58fp-237, 0.0, 0x1.4a062fe8d6596p-763, 0x1.43698719bfe3p-982, 0.0,
     0x1.23d661a4c2e0bp-474, 0.0, 0.0, 0x1.9899656bb27e8p-761, 0.0,
     0x1.0dd89fc5c87ccp-126, 0x1.a94c413b88258p-740, 0x1.829e4fa1b8efp-295,
     0x1.1afd49794eb22p-652, 0.0, 0.0, 0x1.51f573c7269b6p-943, 0x1.d4e467e8ca30ap-712,
     0x1.d62ed813e1735p-124, 0x1.7017d3971902cp-535, 0x1.27e04b3ca2ab6p-613, 0.0,
     0x1.2a77ae7361c66p-737, 0.0, 0.0, 0.0, 0.0, 0x1.9795153bfd661p-282,
     0x1.a3dcb436e60e4p-166, 0.0, 0.0, 0x1.f2d67ea231d87p-122,
     0x1.d2b5500c172cdp-1012, 0.0, 0x1.da7aad3c13d9bp-347, 0.0, 0.0,
     0x1.00149d52ac3eep-114, 0x1.9427dafd353d1p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.47beeda62cf62p-891, 0x1.afe252f3be9cp-592, 0.0, 0.0, 0.0,
     0x1.6b54305e92567p-1012, 0.0, 0.0, 0.0, 0x1.4dc8b5f7b3f22p-851,
     0x1.e328b6d4937a5p-340, 0.0, 0x1.0ca9549d45c98p-890, 0x1.1f2f1fda669dbp-980, 0.0,
     0.0, 0.0, 0x1.21a714c5fca87p-145, 0x1.beba1c7fd9704p-7, 0x1.6a4ac321f60ep-891,
     0x1.21dbb52a8d535p-479, 0.0, 0.0, 0.0, 0.0, 0x1.8f9b59fff240bp-806,
     0x1.cf5b707a1fd4cp-669, 0x1.994c61f46c6a1p-92, 0.0, 0.0, 0.0,
     0x1.112e82542cb1fp-8, 0.0, 0x1.5a263b43816bfp-876, 0.0, 0.0,
     0x1.d408211f1f2f8p-64, 0x1.a6ffd880e4d3dp-812, 0x1.f1e4a8ed57d54p-582,
     0x1.27e736ac12b99p-586, 0.0, 0x1.eb91a7df96a9fp-525, 0.0, 0x1.2f331580d187dp-682,
     0x1.31ff72069afafp-575, 0x1.c9a4e4df73801p-958, 0.0, 0.0, 0.0, 0.0,
     0x1.0ecc6012ed5adp-406, 0x1.d9be29de44301p-864, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b177f84e83f2p-579, 0.0, 0.0, 0x1.cd1418ecabc2ep-635, 0x1.d2d3b498db38p-628,
     0.0, 0x1.2cd3555e4e707p-415, 0x1.86da6f60ff6b8p-704, 0.0, 0.0, 0.0,
     0x1.4e1ffc5985546p-842, 0x1.42a6ee0268d97p-814, 0.0, 0x1.3c5e8fb48fb9bp-670,
     0x1.0300deb09a083p-734, 0x1.e9c6c7172a8c7p-853, 0.0, 0x1.3dea1f5656086p-269,
     0x1.180c672b7a28p-960, 0x1.19700b3218ed5p-444, 0.0, 0.0, 0x1.157850837375p-418,
     0x1.5a9825230725cp-777, 0.0, 0.0, 0x1.6a4bf8944101fp-200, 0.0, 0.0,
     0x1.c89e3c190eabbp-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3acd14b8bb3bcp-45, 0.0, 0.0,
     0.0, 0x1.5ddebcf8305c2p-375, 0.0, 0.0, 0x1.4c00f909a451ep-1008, 0.0, 0.0,
     0x1.dbe401cb4a7bdp-149, 0.0, 0x1.ad85ef4fa41edp-691, 0x1.f170af810789fp-205, 0.0,
     0x1.ef30cd0cd7ba2p-680, 0.0, 0.0, 0.0, 0x1.f8ea7f7ef04c2p-349,
     0x1.78b7772f8309ep-634, 0.0, 0.0, 0.0, 0x1.6d889bd5fac4dp-203, 0.0,
     0x1.022c6a29396afp-726, 0.0, 0x1.7830618ac9d1ap-990, 0x1.c566aa075dfa4p-708, 0.0,
     0x1.cc31470b12965p-919, 0x1.f2b03fa23d6b1p-381, 0x1.fdcb3d6747d08p-153, 0.0, 0.0,
     0.0, 0x1.2ef8dcc22edabp-831, 0x1.288f0d137bcd2p-8, 0x1.489d1f98671eap-241,
     0x1.499f2285f1692p-103, 0.0, 0x1.e8ed05c4edc6cp-361, 0.0, 0x1.a16909e5dcep-858,
     0.0, 0x1.61723e5afd984p-218, 0.0, 0.0, 0.0, 0x1.69c6190fb3188p-145,
     0x1.6f14047a88872p-790, 0x1.7dd482e3c17e9p-147, 0.0, 0.0, 0x1.5fb1c0585c686p-797,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b324278444304p-166, 0x1.39654c692572dp-257,
     0x1.c1439235b0532p-556, 0.0, 0.0, 0x1.cdff8d8759ff6p-278, 0.0, 0.0,
     0x1.f184479be6745p-837, 0x1.830a7619e4877p-62, 0.0, 0.0, 0.0, 0.0,
     0x1.d934cfacf51c5p-464, 0x1.de13ac21c6064p-171, 0x1.70da09d7754f4p-223, 0.0,
     0x1.bc937b4c44544p-373, 0x1.cdb6e553728b3p-965, 0.0, 0x1.95b908c351caap-394, 0.0,
     0x1.6a7b55a01d7e3p-956, 0.0, 0x1.b9b8eff40feacp-818, 0x1.cb8e3c3054843p-720,
     0x1.18c10e48d9651p-660, 0.0, 0x1.209b2ba39f609p-280, 0.0, 0.0,
     0x1.a88725f8423dbp-620, 0.0, 0.0, 0x1.5b5ee4a8135c6p-841, 0x1.efef31608182fp-187,
     0x1.40dbb19756a89p-29, 0.0, 0.0, 0x1.c4e557b06794ep-347, 0.0, 0.0,
     0x1.d22ff9f538852p-592, 0x1.34bd930ea96bcp-642, 0.0, 0x1.14ce6254f62a9p-931, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b3ab2691e11cp-597, 0.0, 0.0, 0.0, 0.0,
     0x1.921fbf6fcad8dp-160, 0x1.1356d8a59816dp-663, 0.0, 0x1.972214d00cda7p-673, 0.0,
     0x1.0d6934384fabbp-937, 0x1.2b638e236641fp-665, 0x1.f372bde792563p-371,
     0x1.6db3279c85f0bp-988, 0x1.2403ac8883352p-438, 0x1.95da3016122b1p-441,
     0x1.21146af8a6f44p-518, 0.0, 0x1.d1eb77a511d52p-721, 0x1.d97428544599p-270, 0.0,
     0.0, 0x1.8c74ec04bef9ep-974, 0x1.ed477b81fe7bfp-979, 0.0, 0.0, 0.0,
     0x1.084901c239342p-305, 0x1.19270e8762d82p-266, 0.0, 0x1.aad07892fe91dp-175,
     0x1.1a95975709e4ep-620, 0x1.2a0a4dd273b3ep-197, 0x1.9325bcd8be89dp-28,
     0x1.3daa5947193ccp-502, 0.0, 0.0, 0x1.f61a0bd4225f7p-603, 0.0, 0.0, 0.0,
     0x1.6af13ce31aa65p-174, 0.0, 0x1.ce88182259a39p-346, 0x1.e933f11326d9cp-357, 0.0,
     0x1.bb721ef9b7883p-897, 0.0, 0x1.4527d492b93d3p-152, 0x1.592caec00410bp-912, 0.0,
     0x1.727cc616229fp-495, 0x1.68cd0850ef29dp-785, 0.0, 0x1.2ed819c984254p-29,
     0x1.12328aa98ed08p-507, 0x1.d8f72a8353542p-950, 0.0, 0x1.0c3d706b4ae9fp-953, 0.0,
     0x1.4a7fbdeedf308p-710, 0x1.f64398a4c22fcp-125, 0x1.5344f9bdd046fp-801, 0.0, 0.0,
     0.0, 0.0, 0x1.d86d8c013ecb6p-750, 0x1.c11d8ecc74d81p-422, 0.0, 0.0, 0.0,
     0x1.4bdadbbb9253bp-293, 0.0, 0x1.e6d1ae7dbcf88p-47, 0.0, 0x1.054f842f36be2p-709,
     0x1.259f5b03c1c3bp-930, 0.0, 0.0, 0x1.5d09a9b1551d5p-222, 0.0,
     0x1.40a06a83a47b8p-35, 0.0, 0.0, 0x1.e34b4cf2a45f7p-107, 0.0,
     0x1.ba24eef6e1d47p-273, 0x1.26aa0c546a13ep-1016, 0.0, 0x1.f7a669fb87e06p-663,
     0.0, 0x1.299d3ba3eff24p-825, 0x1.9056209abb37ep-272, 0.0, 0x1.209efc96de025p-496,
     0.0, 0x1.ea065ca56794bp-750, 0.0, 0.0, 0x1.39af5b4a0cb64p-547, 0.0, 0.0,
     0x1.2b2afaf32482cp-221, 0.0, 0x1.efc223543fe7dp-998, 0.0, 0x1.49892acdfa3bcp-747,
     0x1.607407e1899e7p-299, 0.0, 0x1.4652d5458bb19p-12, 0.0, 0.0,
     0x1.c4e757529c22p-940, 0x1.ad36b462636c3p-238, 0.0, 0.0, 0.0,
     0x1.e4070e880cb3bp-98, 0x1.36fe20f19c48bp-481, 0.0, 0.0, 0.0,
     0x1.f55236aa449cp-929, 0.0, 0x1.4f39b589c409p-191, 0.0, 0x1.fa6b4af91f4d1p-1008,
     0.0, 0x1.faabae2cdf76ep-54, 0x1.4b099930e8f31p-527, 0.0, 0.0, 0.0,
     0x1.5d088419ab301p-689, 0x1.60051c22c4657p-67, 0.0, 0x1.9467adf6ae189p-549, 0.0,
     0x1.d0d7287078c85p-686, 0.0, 0x1.d6ffe369e3e22p-295, 0.0, 0.0, 0.0,
     0x1.13c36d020c9bcp-818, 0.0, 0.0, 0x1.d4d579e5ba999p-404, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fdead3ea5eb9bp-1018, 0.0, 0x1.c79df459d225p-41, 0.0, 0.0,
     0x1.d466fc8590111p-556, 0x1.b55d1d98eaa08p-61, 0.0, 0x1.72efd883b9ff4p-514, 0.0,
     0.0, 0x1.75af6a76985f6p-529, 0.0, 0.0, 0x1.e1e3cc7513abep-281, 0.0,
     0x1.a34a82f70211ep-950, 0x1.00cbc33fb4aeap-210, 0x1.6b29df3a38323p-643,
     0x1.e8ce0f482bb57p-985, 0x1.c92ced66b57ep-996, 0x1.c9b810c4b7618p-565,
     0x1.666daf55e39d3p-507, 0x1.ee3fdb0fa873fp-922, 0.0, 0x1.7027cd61ff39ap-668,
     0x1.aac3e9edc7ccfp-747, 0x1.caa6298f25e9ep-713, 0.0, 0.0, 0x1.45194c09d2992p-897,
     0x1.2ef4399772398p-147, 0x1.c50be6c3faad6p-627, 0x1.214427634148dp-125,
     0x1.e62ae8b604251p-511, 0x1.d01dbe1760b0bp-217, 0.0, 0x1.22c3877dd43c3p-673, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.888a055d5838fp-70, 0x1.548b527e86c55p-618,
     0x1.888bf714e2d31p-249, 0x1.e561860bfa84bp-257, 0.0, 0.0, 0.0,
     0x1.c58bf371034a7p-869, 0x1.6a01a0151c41p-597, 0x1.6621271500db1p-625,
     0x1.0dd843e14b266p-943, 0.0, 0.0, 0.0, 0x1.b6dba73928889p-395, 0.0, 0.0, 0.0,
     0x1.260add2e802ccp-1004, 0x1.c1a08507ee592p-830, 0x1.30876ecf2d6e8p-138,
     0x1.8e7297e7659d7p-46, 0x1.26779dc85846ap-1019, 0.0, 0.0, 0.0,
     0x1.7d173ca4336a7p-110, 0.0, 0x1.eb24e89ca35d8p-595, 0.0, 0x1.e6a7c2566070fp-774,
     0x1.e0f5dc8cd4635p-219, 0x1.b90142600863ep-320, 0x1.52d1f487e4555p-233, 0.0,
     0x1.87b32cbec73e9p-296, 0.0, 0.0, 0x1.e078ed8d80dc1p-480, 0.0,
     0x1.84225f965ad4bp-353, 0.0, 0.0, 0.0, 0x1.041911c639d0ep-628, 0.0, 0.0,
     0x1.7ee76e794a29ap-965, 0.0, 0.0, 0.0, 0x1.d887bf5388eb4p-927, 0.0,
     0x1.da78f1c9763e5p-76, 0.0, 0.0, 0x1.e547054469f4ap-203, 0.0,
     0x1.465d306d20e32p-627, 0x1.fb6af25b14f2fp-2, 0.0, 0x1.6db68de7e446cp-1003,
     0x1.857e48bcc71dcp-499, 0x1.8f9e91ef37196p-149, 0x1.4d2b6d3729424p-822, 0.0, 0.0,
     0.0, 0x1.360d165acba32p-574, 0x1.b65281c6ff9efp-1021, 0.0, 0x1.7cabbeff6999fp-40,
     0x1.5de91173e2609p-552, 0.0, 0.0, 0.0, 0x1.04a5cd282ace5p-55,
     0x1.29c7289f99f1dp-139, 0x1.eee1c04490b3bp-304, 0.0, 0x1.902d84e89be03p-17, 0.0,
     0.0, 0x1.9283fb01426c9p-1021, 0.0, 0.0, 0x1.10b221f81d0dp-936, 0.0,
     0x1.24a034fbbc076p-634, 0.0, 0x1.f9b3a60e2b8a3p-711, 0.0, 0x1.305e1e4f225d5p-78,
     0.0, 0x1.119a9586537aap-458, 0x1.95911b37317dp-308, 0x1.ac10f29e333f4p-377, 0.0,
     0.0, 0x1.32dc9df962ed8p-312, 0x1.2435e55727e8ap-997, 0.0, 0x1.d27fbe7751af3p-683,
     0x1.8c2623e31aa26p-147, 0x1.96f0c293301dbp-804, 0.0, 0.0, 0.0, 0.0,
     0x1.0cca8143a2c1ep-567, 0x1.754386fe1e35fp-888, 0x1.6a5bff53232c7p-176,
     0x1.50ddd58e0b16p-748, 0.0, 0.0, 0x1.bd1b1ff5e9977p-509, 0.0,
     0x1.e1efafa2529e1p-152, 0x1.6d0271f72a857p-89, 0.0, 0x1.c1af974dccda6p-755, 0.0,
     0x1.5f7b9b9bd79ecp-435, 0.0, 0x1.05b5265cc693cp-36, 0.0, 0x1.e30a482226ba9p-666,
     0x1.6141aa46c8e7dp-276, 0.0, 0x1.80aa7a218e637p-155, 0x1.d4cb7ba536c63p-715,
     0x1.dfad815bc7eaep-469, 0x1.ae5133195cbf3p-774, 0.0, 0.0, 0x1.1fda89d953a6bp-674,
     0x1.8f11f0507b8e9p-82, 0.0, 0.0, 0x1.98daa78379677p-989, 0x1.324128e5bebffp-125,
     0.0, 0x1.2cbb88d50471dp-538, 0x1.dd7788cd10b65p-541, 0x1.a2d4d4007c0a5p-540, 0.0,
     0x1.4c670b99f7cfbp-341, 0x1.e84ce89eb0547p-416, 0x1.43977da9f6b7ap-876,
     0x1.9679d9f731c34p-359, 0.0, 0.0, 0x1.7ddf6f5dd6cfep-836, 0x1.67e8d782a5d82p-945,
     0.0, 0x1.aac40d99b5d3dp-304, 0x1.31845eef04adfp-508, 0.0, 0x1.8b96c9a5aa504p-80,
     0.0, 0.0, 0x1.8d3efb6ef10a3p-1020, 0.0, 0x1.c835691ac4008p-649, 0.0, 0.0, 0.0,
     0.0, 0x1.a6fce8a9652e4p-289, 0x1.a95bf3dfd46cep-585, 0.0, 0x1.a0f95381748d6p-80,
     0x1.99827e4447d65p-531, 0.0, 0x1.77bbf3466fa63p-943, 0x1.c6b08f7c252c6p-707, 0.0,
     0.0, 0.0, 0x1.c6c10c68f714cp-972, 0x1.9a119048ed732p-891, 0.0, 0.0,
     0x1.62d6226ae5de3p-3, 0x1.fb9d007cf39ecp-857, 0x1.c07b599b2eb38p-566,
     0x1.48615f92fda63p-911, 0x1.4c0e3f917dddap-800, 0x1.04abe57e81951p-477, 0.0, 0.0,
     0.0, 0x1.a7f2464e7c1cp-871, 0.0, 0.0, 0x1.56fe92d44ca8ap-566, 0.0, 0.0, 0.0,
     0x1.5751ba778c4eap-924, 0x1.40d33616f2284p-641, 0.0, 0x1.da2528c942f7ep-525, 0.0,
     0x1.cae2cadb51c71p-419, 0x1.3510e07901f23p-393, 0.0, 0.0, 0.0, 0.0,
     0x1.f0eb981901b12p-715, 0x1.318fc0b4cae85p-768, 0x1.a7cab19243f4ap-695,
     0x1.2d7b9d83d96f6p-196, 0.0, 0.0, 0x1.1641997c2970fp-974, 0x1.545d45a843d9bp-222,
     0x1.a7f31d21f0671p-595, 0.0, 0x1.cdc4f236c6c3dp-288, 0.0, 0x1.b91e617afe4f7p-741,
     0.0, 0x1.1cdea487407cfp-711, 0.0, 0.0, 0x1.ea3f3d6646374p-762, 0.0, 0.0,
     0x1.5339e7e73a5b3p-854, 0x1.dc3c42b55fcb6p-259, 0x1.e09bb430a4ffp-17, 0.0,
     0x1.84faf68e211f1p-206, 0.0, 0.0, 0x1.ac022628ad084p-614, 0.0,
     0x1.51cfaba71450ap-824, 0x1.8946b238d9afep-851, 0x1.0288db7a3bf66p-406,
     0x1.6fc1b2e5bee49p-491, 0x1.f0f297dd2fa3fp-696, 0x1.a3307a66ae4fdp-152, 0.0, 0.0,
     0x1.f2f9e2a71f23dp-484, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.500c087d12681p-432,
     0x1.a6bee87d61e98p-770, 0.0, 0x1.e8b1e9c8c890bp-21, 0x1.8542015c67dd5p-864,
     0x1.f1075c58df81bp-63, 0.0, 0x1.723514bc6860dp-11, 0x1.7dff3bedbcee1p-95,
     0x1.f6a1883064ba8p-481, 0.0, 0x1.c7e3513a852f6p-221, 0x1.dbdb967fab00ep-515,
     0x1.5e121799c84bfp-148, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0d48eb637c9ep-815,
     0.0, 0x1.b1a4b7b98378fp-772, 0.0, 0x1.85a243fb7391p-192, 0x1.cd4bcd129360bp-285,
     0x1.adb3df151acc5p-774, 0.0, 0x1.39fb1a10fc613p-390, 0.0, 0.0, 0.0,
     0x1.3d93c961b8d02p-646, 0x1.3c2135cae470ap-764, 0x1.764a2e0a46fb7p-343, 0.0, 0.0,
     0.0, 0x1.c545c0eb8e953p-496, 0x1.ae6fc55f6ca3ap-341
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
            tmp1 = Sleef_finz_asind4_u10kvx(tmp0);
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
    printf("Sleef_finz_asind4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_asind4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
