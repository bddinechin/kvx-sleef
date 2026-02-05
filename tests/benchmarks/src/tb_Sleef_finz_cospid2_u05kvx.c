/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospid2_u05kvx.c --function \
 *     Sleef_finz_cospid2_u05kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ed55fc54e13ep-72, 0x1.3873ae2b31537p-537,
     0x1.ed966319164c8p-283, 0.0, 0x1.376ff71be9506p-1016, 0.0, 0.0,
     0x1.d71416f82c65bp-320, 0x1.ac3b394504479p-346, 0x1.352920b8ba3a1p-1017, 0.0,
     0x1.ca3fb9e779727p-1019, 0.0, 0.0, 0x1.6a3e2b2b61cd5p-961,
     0x1.87bf36381376p-1000, 0.0, 0.0, 0.0, 0x1.050f7a371434bp-377,
     0x1.02c0e238c55d4p-835, 0x1.c355742b82c7cp-633, 0x1.38ccc48d964a4p-582,
     0x1.5d9971669846p-108, 0.0, 0x1.282802643194p-460, 0.0, 0x1.24f332e578299p-965,
     0.0, 0.0, 0x1.c7067c02eaa89p-321, 0.0, 0x1.6ba988cbbcc4p-978, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f62729e5b985p-929, 0x1.1557b56e600f5p-657, 0.0, 0x1.452aeaf06e8a5p-536,
     0x1.63cefaacef148p-1006, 0x1.0fc82efe4ed64p-720, 0.0, 0.0,
     0x1.a184c1701d65ep-779, 0x1.95b86a1d66836p-373, 0.0, 0.0, 0.0,
     0x1.37fee4efe91ffp-648, 0.0, 0.0, 0.0, 0x1.53d6d6e1aa2d3p-65,
     0x1.6cfd56773f016p-109, 0x1.81b3f89eefb3ep-770, 0x1.a59cc083efa4cp-260, 0.0, 0.0,
     0x1.41daecd4287e3p-864, 0.0, 0x1.9eb66b6ed10edp-459, 0x1.c88153f888e05p-327, 0.0,
     0x1.70cb55882e7e3p-397, 0x1.407776555df28p-203, 0x1.97ad4361263c1p-457, 0.0, 0.0,
     0.0, 0.0, 0x1.b436bbb298e7bp-711, 0x1.ccae6cf5fa2bap-512, 0.0,
     0x1.7167b2f8af424p-42, 0.0, 0.0, 0.0, 0x1.79d319d0a79bdp-765,
     0x1.9d44fe93ccb53p-256, 0x1.d2426a5b0681dp-441, 0.0, 0.0, 0x1.148259899627cp-60,
     0.0, 0.0, 0.0, 0x1.ea8d41fd41ac7p-725, 0x1.dbe1b0addcdbap-900,
     0x1.420c65de330a4p-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5bebb7934d35p-1015, 0.0,
     0x1.1d751da682728p-556, 0x1.4026fa438be3dp-12, 0x1.3b9306e2f1b54p-236, 0.0, 0.0,
     0.0, 0x1.7ef1059cb66f9p-595, 0.0, 0.0, 0.0, 0x1.99f41ee3ab49ep-818,
     0x1.9412d0109763cp-730, 0x1.272f3ab528ba6p-565, 0.0, 0x1.fb6326d0a07c3p-275,
     0x1.c061f9f87bb0fp-136, 0.0, 0x1.ae977a7fcd8c8p-742, 0x1.f6cc0700db84bp-235,
     0x1.ca4702e802876p-771, 0.0, 0x1.cc8b1379cf529p-26, 0x1.b3201eb7c08b4p-187, 0.0,
     0x1.0a9eec89a6a93p-256, 0x1.9375c7873c483p-703, 0x1.0854dc3344ebp-82, 0.0, 0.0,
     0x1.99456ad46b9cbp-567, 0x1.c36302edb1a97p-444, 0x1.c704ea8eca61bp-626, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a764db72af8e3p-270, 0.0, 0x1.0b79bccd31bcp-469,
     0x1.70d03c3764db3p-585, 0x1.3c0e3e5261d04p-461, 0x1.7c1759aec0702p-751,
     0x1.37b872703badep-258, 0x1.210cd9741382dp-653, 0x1.5593428edcdc9p-645, 0.0,
     0x1.fb38c3f637adap-292, 0x1.a7a0ec697d513p-553, 0x1.3f87e84f9aa74p-492, 0.0,
     0x1.96fa22999dcecp-234, 0.0, 0x1.00158b1c3f71ap-35, 0x1.b679a6f3b1f57p-666, 0.0,
     0.0, 0x1.a4d11ae71d1f1p-677, 0x1.201c7800dee17p-674, 0x1.70b0c8769913cp-262, 0.0,
     0.0, 0x1.b71c684783e07p-902, 0.0, 0x1.58baebd53178p-202, 0x1.650398c04cb75p-180,
     0.0, 0x1.8635a94af06ap-158, 0x1.cd0c48ccf61d1p-479, 0x1.00d0403fdd73fp-272, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13d0d3b9aa08fp-581, 0.0, 0.0,
     0x1.d81f88a33dfbap-222, 0x1.12dac09f2f768p-202, 0.0, 0x1.7bf4f482831fcp-884,
     0x1.52a06d93b8edcp-484, 0.0, 0x1.3716f3d1f9de6p-606, 0.0, 0x1.cc7c3c1d3bdd3p-494,
     0.0, 0x1.cb73eda82bfedp-972, 0x1.65ee30289a30dp-1008, 0.0, 0x1.8b92bf848a53dp-69,
     0x1.97ec69de7a26ap-526, 0x1.69340e25a13a2p-60, 0.0, 0.0, 0x1.5eef7e2963ef8p-75,
     0.0, 0.0, 0x1.60cec0b0c41dap-616, 0.0, 0.0, 0x1.80eeff601f054p-620, 0.0,
     0x1.579dbbeb682aep-564, 0x1.6dabbbbd97011p-187, 0x1.6006ab9d88994p-64,
     0x1.fb7648ec22ed9p-532, 0.0, 0x1.490f0a376a68bp-750, 0.0, 0.0,
     0x1.a71f867f86a7cp-57, 0.0, 0.0, 0.0, 0x1.d82cbd1b39ddbp-814, 0.0,
     0x1.7fee0ae54e44cp-989, 0x1.a1622c0be0ccep-554, 0x1.a9aaea056a4aep-700,
     0x1.500be7d714897p-445, 0.0, 0x1.4aa976e0f30b6p-943, 0x1.a70a33d7e72a9p-268, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c064eafc2edbp-522, 0.0, 0.0,
     0x1.329560fb393a1p-733, 0x1.a3aa0507e94ap-593, 0.0, 0x1.f035139656971p-417,
     0x1.81204ec5497b4p-802, 0x1.2075a8ce30e62p-1002, 0.0, 0x1.26175f7c13317p-137,
     0x1.e5dab17260837p-509, 0x1.27db7de337f16p-432, 0x1.f295bf417165p-523, 0.0,
     0x1.524750fae408cp-791, 0.0, 0x1.18a165aba7603p-14, 0.0, 0x1.a0ba8a2888e77p-986,
     0x1.b0bf8b7f99a9bp-277, 0x1.f19c313e71c0fp-943, 0x1.0d104f21258fbp-329, 0.0, 0.0,
     0.0, 0x1.661fd19431c11p-88, 0x1.4d704f515710dp-93, 0.0, 0x1.d1a89453746ep-819,
     0.0, 0x1.c8a7a34546e45p-456, 0x1.e99939b91c4cap-532, 0.0, 0.0,
     0x1.6b1f75e743a98p-589, 0.0, 0x1.1c6cc12aef7f7p-464, 0x1.d83e82dff4eb7p-480,
     0x1.7839ca06fc1b7p-352, 0x1.8dd3ab2ff50f6p-433, 0.0, 0.0, 0.0,
     0x1.ed516d5b0abb6p-10, 0.0, 0x1.ec58ab56f0a6fp-402, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db7cac98bf588p-188, 0.0, 0x1.ca0e5b9ac9b7cp-26, 0.0, 0x1.7b54163ef913ep-879,
     0x1.d2793cc7c7f11p-703, 0x1.f6caab09d69dap-977, 0x1.3fa015f816abep-806,
     0x1.bb0e333b8336cp-55, 0.0, 0x1.6c0e8d11a918ap-526, 0x1.f1d38dbc923bdp-223,
     0x1.c3c6aa8ccad03p-410, 0.0, 0x1.b9c1fd717b1a9p-351, 0.0, 0.0, 0.0,
     0x1.c1ca78af8a8b4p-515, 0.0, 0x1.78a797aed1a86p-422, 0.0, 0x1.a5dc963fe8f48p-665,
     0x1.fde20e408eda1p-283, 0.0, 0x1.75aef209e3fa9p-917, 0.0, 0x1.2a44d6b42c72ep-4,
     0.0, 0x1.ed64218a11e99p-645, 0.0, 0x1.f68e2f2d4b03dp-208, 0x1.65910804c86a7p-129,
     0.0, 0.0, 0.0, 0x1.cc39388e8e5e6p-753, 0x1.6ec8a3a3c1504p-672, 0.0, 0.0,
     0x1.4e7d1ad27ee14p-1013, 0x1.5150b65212ee1p-271, 0.0, 0x1.d05e19c4203ccp-242,
     0.0, 0x1.2ab0be7a9e703p-930, 0.0, 0x1.1924cec230955p-10, 0.0, 0.0,
     0x1.8c668a2746b89p-11, 0x1.5eb3f7ea10244p-411, 0.0, 0.0, 0x1.3791aca0135e1p-238,
     0x1.54a2eda5c060bp-899, 0.0, 0x1.d7d343eaac6d3p-151, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1cd7a5776f02fp-336, 0x1.c1c7c4b798528p-111, 0.0, 0x1.43b6658ba85dcp-833, 0.0,
     0x1.2dade5a90f803p-337, 0x1.44c7ecc5ae06fp-927, 0.0, 0.0, 0.0,
     0x1.0a78195fdc394p-177, 0x1.2291a99f25f4fp-994, 0x1.054f72aef8581p-279,
     0x1.2e172b2986d9dp-747, 0.0, 0x1.40ea85046b498p-767, 0x1.946f70f0394aap-51, 0.0,
     0.0, 0x1.51174d96b6c1cp-745, 0x1.1bca18879cbe5p-143, 0x1.072268eb20b3p-842,
     0x1.3dbd30c001108p-431, 0x1.7e967bb6149b5p-912, 0.0, 0.0, 0.0, 0.0,
     0x1.8f7a2655c18d6p-466, 0x1.27bd1859c8284p-209, 0.0, 0x1.f9dee5677fa7fp-843, 0.0,
     0.0, 0x1.1627ffc30cf6cp-452, 0x1.94be337362313p-998, 0.0, 0x1.9aa13f374382p-1007,
     0x1.2f4320ce43726p-65, 0.0, 0.0, 0x1.d0c4faa6f615ep-117, 0.0,
     0x1.21f16b7bfb624p-499, 0.0, 0x1.10785caae14bfp-293, 0x1.b0493d3ff8183p-639, 0.0,
     0x1.167d14c91fa52p-304, 0.0, 0x1.06caacf5221f6p-740, 0x1.79fdf13f7338ep-952, 0.0,
     0.0, 0.0, 0x1.1f9eb66837aeap-554, 0x1.0acd4db1a47c6p-313, 0.0,
     0x1.5f9cd3e9243dep-631, 0.0, 0x1.66d8e2924634ep-287, 0x1.826951c73d73fp-343, 0.0,
     0x1.7cb4cd16939bp-55, 0x1.f8f83970b114fp-699, 0.0, 0.0, 0x1.fd36fc14f6fdp-839,
     0x1.8907b691b29e4p-246, 0x1.2e3430f0edcc8p-1011, 0x1.e4c3e492dcdeap-729,
     0x1.4455877232bb1p-63, 0x1.64f56de3fb2ep-70, 0x1.f47eadfbbc8fdp-884,
     0x1.1608ffc20b0b3p-476, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.452843c1e76bdp-1011,
     0x1.8db1a5a2474c8p-259, 0x1.1089bd7479dbp-631, 0.0, 0x1.098b60f50e8a2p-281, 0.0,
     0.0, 0.0, 0x1.b684670de6763p-314, 0x1.e20c2fe0ba0cp-892, 0x1.84006d0ed4b23p-643,
     0.0, 0x1.a45615f4023d1p-1018, 0.0, 0.0, 0.0, 0.0, 0x1.8d530d3c56039p-614,
     0x1.ff59d575e9ffep-934, 0x1.8d589b592dd89p-388, 0x1.72404d2d5e996p-818, 0.0, 0.0,
     0x1.47bd445d04a41p-476, 0x1.7c03d0fdd1966p-139, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.668f342428208p-760, 0x1.66414f084e7ebp-119, 0x1.c93b5b6d3bccap-321, 0.0, 0.0,
     0.0, 0x1.48567301fd1cdp-54, 0x1.ea877253145c4p-281, 0x1.5e6fbc4a804cp-41, 0.0,
     0.0, 0.0, 0.0, 0x1.2d9aacad2e3aap-249, 0x1.147af1b34d362p-768,
     0x1.cac3c0e34e566p-228, 0x1.50d8f8ad44403p-155, 0.0, 0x1.3cf76039153fp-425,
     0x1.51eda5590ead9p-374, 0x1.bb7e7823df2ddp-603, 0.0, 0.0, 0x1.8b43eabb15d85p-33,
     0.0, 0x1.3561db672209cp-648, 0x1.be9c2de6fc542p-995, 0.0, 0x1.08e5e9ff32459p-926,
     0x1.ad2152a3fc4a7p-851, 0x1.e283e81a05e11p-448, 0.0, 0x1.86ee7a106c8a1p-522,
     0x1.9c3c11cb6295p-413, 0x1.62b04551fd10dp-35, 0.0, 0x1.0d59c6021246ep-987, 0.0,
     0x1.3bf0ecd71056fp-169, 0.0, 0.0, 0.0, 0.0, 0x1.24d8a2e805b82p-251,
     0x1.33a00e94418f3p-380, 0.0, 0.0, 0x1.5ae58f06a8d9bp-653, 0x1.e11842f0ea8cdp-762,
     0x1.a4768513127eap-157, 0.0, 0x1.59314bb4312dbp-263, 0.0, 0x1.aba7338417f86p-865,
     0x1.cb3ceb90b2136p-643, 0.0, 0x1.1a5e05008650fp-264, 0.0, 0x1.ff479e7e874c2p-6,
     0.0, 0.0, 0x1.2117c42d95f9p-25, 0x1.3741feea6e322p-734, 0x1.aaba61ecd2202p-962,
     0x1.cc9eaaba80371p-203, 0x1.c584d4c4b5748p-242, 0.0, 0.0, 0x1.7a5634a962b38p-516,
     0x1.a724038d58559p-14, 0.0, 0.0, 0.0, 0x1.69289c5c6c1d2p-464,
     0x1.2b29e4d11bd4dp-768, 0x1.853aaaffa823bp-829, 0x1.7b4052d983bc6p-441, 0.0,
     0x1.414d8f528cbb2p-882, 0x1.b3f7c015fec9dp-979, 0.0, 0x1.1bb180cfda3c1p-839, 0.0,
     0x1.b1f62634a754dp-362, 0x1.8406d40a43b4ep-891, 0x1.2c14b02cc0836p-987,
     0x1.fc09f06706befp-607, 0.0, 0x1.b6744456b3c5p-756, 0x1.3ce64869be0fap-871,
     0x1.26f7be404ec28p-247, 0x1.eb6c0baeabd7ap-130, 0.0, 0x1.9a3cd40bfd65dp-487,
     0x1.e97949ad1546cp-456, 0x1.35078a09c0659p-472, 0x1.4b1fb815ccb78p-233, 0.0,
     0x1.3f32729c7f491p-339, 0x1.22b79b2034f92p-879, 0.0, 0.0, 0.0,
     0x1.6c76f9edc3e32p-119, 0x1.fbf40a1c87d5ep-544, 0x1.92ecd02a9d058p-952,
     0x1.a6d141c89d769p-131, 0.0, 0.0, 0x1.613465819f61dp-961, 0.0, 0.0, 0.0,
     0x1.b81a0e315b20bp-85, 0x1.c20c38673fb2bp-82, 0.0, 0.0, 0x1.5e3e4131d8b73p-204,
     0.0, 0x1.fd947edf1a454p-246, 0.0, 0.0, 0x1.d676c5d2b3bf5p-442,
     0x1.44941beefdb3cp-743, 0.0, 0x1.8af5ea0e8215ap-43, 0x1.52be385d2cc8ap-601, 0.0,
     0.0, 0.0, 0.0, 0x1.e97f15f8750bep-612, 0.0, 0.0, 0x1.6277786904a9p-955,
     0x1.51c93c760d67ap-784, 0x1.0bbd345f14b06p-337, 0x1.4cdb1b7a2c96bp-852,
     0x1.892d520be6793p-563, 0x1.5dd53d72d3d45p-914, 0.0, 0.0, 0x1.a03c487687368p-684,
     0.0, 0x1.ca4dd162ed599p-630, 0x1.0617cb9551925p-17, 0.0, 0.0, 0.0,
     0x1.21eef13e13f07p-422, 0x1.e99ea610ab7dcp-411, 0.0, 0.0, 0x1.8e6a6ed20cd5ep-65,
     0.0, 0.0, 0.0, 0x1.d08eed0884ba1p-994, 0.0, 0.0, 0.0, 0x1.94557c703128ep-500,
     0x1.455778a0d3ecdp-616, 0x1.6511027560e85p-71, 0.0, 0.0, 0.0, 0.0,
     0x1.7ecbbf31e5913p-920, 0.0, 0.0, 0.0, 0.0, 0x1.1a8be2ffb1e62p-443, 0.0,
     0x1.763b681c27717p-500, 0x1.b368dae64fc4dp-740, 0.0, 0.0, 0.0, 0.0,
     0x1.64c21bc1fb2f7p-758, 0.0, 0x1.074752fa9692ep-390, 0x1.af47366efc21cp-729,
     0x1.759a37a8aec55p-32, 0.0, 0.0, 0x1.53dd82b61cbedp-45, 0x1.4e930fa02e707p-246,
     0.0, 0x1.164ffeb98cf11p-1014, 0.0, 0.0, 0x1.006c23c410e65p-149,
     0x1.c1bd71b41af92p-531, 0x1.11d97be179206p-863, 0.0, 0x1.d5f7f95f145fdp-107,
     0x1.68e2467178fa6p-1006, 0x1.5fef82a2593dep-648, 0x1.9d678f637ccf1p-911, 0.0,
     0.0, 0x1.e4440a24e2724p-776, 0x1.908f7b52fc1e6p-705, 0x1.cb5aa6f16f4b4p-755, 0.0,
     0x1.ba7de5fc7d23fp-597, 0x1.9c827950ae825p-306, 0.0, 0.0, 0.0,
     0x1.0d822f82f7871p-634, 0x1.11088354adbe4p-135, 0x1.07ce40f6b5ec9p-318,
     0x1.46e0d3bb2d8bep-18, 0x1.59f349dd3a266p-908, 0.0, 0x1.33b0ac257b249p-467, 0.0,
     0x1.acbc927b1b2edp-734, 0x1.1a56146bf42ebp-54, 0x1.749f0eba92107p-450, 0.0,
     0x1.cf586610c5dcdp-560, 0.0, 0x1.ec8a9cc714379p-711, 0.0, 0x1.3a110d7a81b69p-959,
     0.0, 0x1.95c7ac082eca4p-763, 0.0, 0.0, 0x1.210bf6aa0ce99p-14,
     0x1.fca24bd6b04f3p-5, 0x1.a253c694013e9p-651, 0.0, 0.0, 0.0,
     0x1.98de52cf1fd14p-52, 0.0, 0.0, 0x1.204bdfd8fb848p-644, 0x1.6dcd3ae6b0907p-629,
     0x1.a54ed7b5ac60fp-448, 0x1.4a464bc7a278bp-191, 0.0, 0x1.316df8a01aacdp-384, 0.0,
     0.0, 0.0, 0x1.0800559986fep-167, 0x1.12d0494f06b33p-442, 0.0, 0.0, 0.0,
     0x1.727678131501ep-359, 0.0, 0x1.f931a281cee68p-492, 0.0, 0x1.ad6fd0b537d14p-589,
     0x1.b3c12b71c7c69p-919, 0.0, 0x1.bc45bd5d905d7p-506, 0x1.f064cf60aabe1p-714,
     0x1.13f22e79e4b61p-563, 0.0, 0x1.b5658247672f5p-992, 0x1.be659e268785cp-502,
     0x1.4e00c6a09188bp-821, 0.0, 0.0, 0.0, 0.0, 0x1.00c75e1911598p-986, 0.0,
     0x1.26c90080213b3p-834, 0.0, 0x1.dd2f5b1028717p-35, 0.0, 0.0,
     0x1.375d23224a4bep-294, 0x1.55f3323145d56p-317, 0.0, 0x1.f83ed1af550b7p-820, 0.0,
     0x1.adabfaa96481ap-888, 0x1.5abf1a8260bf9p-333, 0.0, 0.0, 0x1.fe2de84869657p-895,
     0.0, 0.0, 0x1.dacf51d8bb4ccp-730, 0.0, 0x1.2864903d25065p-241, 0.0,
     0x1.18f7d051691ap-462, 0.0, 0.0, 0x1.fff8a2d7fe97ep-869, 0.0,
     0x1.32769125da93p-184, 0.0, 0.0, 0x1.9ca5de1dab6d7p-192, 0x1.b0c3d5048520fp-309,
     0.0, 0.0, 0.0, 0x1.7956ed6b53f4fp-826, 0.0, 0.0, 0x1.30138056bcab2p-171, 0.0,
     0.0, 0.0, 0x1.a8bdaa8e5215dp-273, 0x1.e741e5292683fp-707, 0.0,
     0x1.58ae8d939a71bp-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f870a37b5c16cp-954, 0.0, 0x1.d255dc6e1e6dfp-684, 0.0, 0.0,
     0x1.26a72ffc1163ap-535, 0x1.babfa5eda2b86p-580, 0.0, 0.0, 0x1.19cc9e5c55a18p-97,
     0x1.cb83089a1c9d8p-675, 0.0, 0x1.ca9307af3a42ep-429, 0.0, 0x1.4e7b2df9735dcp-614,
     0.0, 0.0, 0.0, 0x1.fc74a5700fb96p-223, 0x1.fc41ba176b142p-708,
     0x1.6ca3e68b67184p-376, 0x1.87f4b366c1651p-103, 0.0, 0.0, 0.0,
     0x1.9a47a17400344p-333, 0x1.d6679fc203e9p-745, 0x1.a5174623b2807p-291, 0.0,
     0x1.0fe537fb51883p-935, 0x1.e8d3ba75de0b7p-203, 0.0, 0.0, 0x1.860a98438226ap-503,
     0x1.ce4a6ddd3b769p-273, 0x1.fed16c5273d19p-1007, 0x1.0b9b74751ae11p-373,
     0x1.dff98b79d54f9p-598, 0.0, 0x1.65a580d15452bp-561, 0x1p0, 0.0,
     0x1.42df2ee977d39p-54, 0.0, 0.0, 0x1.2d09a31084d0ap-594, 0x1.a06e0b6d43467p-528,
     0x1.97624062a3268p-953, 0.0, 0x1.507019221a055p-639, 0.0, 0.0,
     0x1.f63bfd597569dp-867, 0x1.4b74a2d7b164ap-326, 0.0, 0.0, 0x1.39ec088e56e6fp-638,
     0x1.24302dd854965p-1011, 0.0, 0.0, 0x1.c9e293685b6dbp-284, 0.0, 0.0,
     0x1.c80569bd1fa23p-497, 0.0, 0.0, 0x1.899a2c40c7cf4p-624, 0x1.770b07e2ff16fp-280,
     0x1.c0cba82bbb034p-904, 0.0, 0.0, 0x1.326222fdd8bd6p-950, 0.0, 0.0,
     0x1.0f361b5d13a22p-101, 0.0, 0.0, 0.0, 0.0, 0x1.56068f92b9189p-681, 0.0, 0.0,
     0.0, 0x1.5f5ecb9e40ebfp-916, 0x1.e39fbe0739c1ap-720, 0x1.e18bef4199c42p-808, 0.0,
     0x1.ec745e7cd47fcp-50, 0x1.d2b4fef0db342p-403, 0.0, 0.0, 0x1.fea2fb7808e28p-885,
     0x1.a3c5cb135d0cdp-559, 0.0, 0.0, 0x1.b31b19eb095d2p-764, 0.0,
     0x1.c6085f28566f7p-938, 0x1.7508c467c875fp-262, 0.0, 0x1.37b7e0e213c09p-503,
     0x1.62e9cde5a59bep-916, 0x1.d4c7c14530f61p-472, 0.0, 0.0, 0x1.c5bd20d0cff0bp-253,
     0x1.8232f3df34ca2p-628, 0x1.489ab11d232ffp-535, 0.0, 0x1.36e62d2d95bfp-752,
     0x1.60ac1d736537cp-156, 0.0, 0x1.75437ef2b4dbbp-599, 0.0, 0x1.02a5957f0d328p-795,
     0x1.223fb21950e75p-890, 0.0, 0.0, 0.0, 0.0, 0x1.e48101829d702p-72,
     0x1.3b3f9a9a63a3ep-846, 0x1.33ddecdf500e3p-719, 0.0, 0.0, 0.0,
     0x1.0fca08a918aa5p-374, 0.0, 0x1.9bbc7c970d424p-479, 0x1.b74937ac80d9cp-902,
     0x1.ce572e2a934c8p-192, 0x1.dbb1181fe5df8p-713, 0x1.f6a50ab4392c6p-455, 0.0,
     0x1.313c6ea97cebcp-984, 0x1.fe337054b4fbap-756, 0x1.4fe5b6f14312ep-110,
     0x1.30e056837eeb7p-300, 0x1.6b9b5cfd577eep-498, 0x1.8d4551837c646p-15,
     0x1.7ac903a928501p-423, 0x1.35e3784049e78p-687, 0x1.e41092b689f85p-709, 0.0,
     0x1.56700d52211cep-731, 0.0, 0.0, 0x1.d7e10c698d53bp-232, 0x1.ac9857ea47f53p-393,
     0.0, 0x1.771417c9d782bp-995, 0.0, 0x1.8f3e4db6458e3p-940, 0x1.2d62322241b52p-605,
     0.0, 0.0, 0x1.a8bdc2e5e3efdp-729, 0x1.171592f220314p-865, 0x1.53d4f2de11ba9p-195,
     0.0, 0.0, 0.0, 0x1.8e15103987861p-944, 0x1.dea2d277c434ep-541,
     0x1.67f7cc9d423d1p-983, 0x1.fc7a641719e04p-58, 0x1.58c1baeeb8f16p-325, 0.0,
     0x1.ebcfa37c1d1ccp-783, 0x1.001d92fa83d43p-984, 0.0, 0.0, 0.0, 0.0,
     0x1.07f5f309c0fd4p-832, 0x1.0fd499a48aa4p-871, 0x1.fbbd4ee98a739p-865, 0.0,
     0x1.3cc91b8432826p-722, 0x1.107c5cb4c5d1fp-412, 0.0, 0.0, 0x1.c195605d1479dp-841,
     0x1.68d451b3b8949p-986, 0x1.2ed14253e91ap-878, 0.0, 0x1.c8b017a0f5662p-145, 0.0,
     0.0, 0x1.91300bfc380dap-216, 0.0, 0x1.399f07138fe2ep-391, 0.0,
     0x1.e92f8767da4f4p-745, 0.0, 0x1.d430cf5e25b71p-701, 0.0, 0.0,
     0x1.b3f34c2a15b44p-848, 0.0, 0.0, 0x1.f0a7e1dcc5374p-633, 0x1.13297503aefc8p-497,
     0x1.c22a5bcc25a3cp-788, 0x1.46eb4dadf4494p-24, 0x1.de991edeba03fp-151,
     0x1.cee58c4acd11ep-823, 0.0, 0.0, 0x1.2255f3a339d4ap-764
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
            tmp1 = Sleef_finz_cospid2_u05kvx(tmp0);
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
    printf("Sleef_finz_cospid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cospid2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
