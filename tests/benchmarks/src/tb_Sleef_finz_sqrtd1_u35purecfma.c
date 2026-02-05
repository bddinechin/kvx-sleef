/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd1_u35purecfma.c --function \
 *     Sleef_finz_sqrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.32429353975b4p-975, 0.0, 0.0, 0.0, 0x1.ac7f7294d5a96p-103,
     0x1.f50adc63fcd77p-291, 0.0, 0x1.890d2ade677d2p-901, 0x1.04baae7e0f4d7p-926, 0.0,
     0x1.819555ffaf759p-694, 0x1.22ea7c0b91ed9p-352, 0x1.67934be8e897ap-207,
     0x1.73c344c0d5181p-234, 0x1.793cc4a117f13p-130, 0x1.6037e2813d556p-154,
     0x1.a568354dbad97p-832, 0.0, 0.0, 0x1.1d769de9bd417p-15, 0.0,
     0x1.adf03bea04733p-4, 0.0, 0.0, 0x1.69490e032dd62p-434, 0x1.d0f39eb559e37p-60,
     0.0, 0x1.9f6eb12efb141p-81, 0.0, 0.0, 0x1.2cc2690a08b56p-5,
     0x1.2a41490bf94bfp-969, 0.0, 0x1.6d5813762237ep-596, 0.0, 0x1.b317768431dp-1,
     0.0, 0.0, 0.0, 0x1.8415ead8e7e7p-782, 0x1.72e9e4977eb55p-647,
     0x1.89c3029d8b856p-21, 0.0, 0.0, 0x1.314a4fbc8d323p-778, 0.0, 0.0,
     0x1.d5e3be2007ebdp-605, 0x1.422ebf670275bp-753, 0x1.5462e75c45f6fp-957,
     0x1.833f793b1b024p-221, 0.0, 0x1.76171541dd47ap-472, 0x1.7b567516dee8fp-207, 0.0,
     0.0, 0x1.bc1a04d28bae9p-967, 0x1.dd2e917fbd97p-705, 0.0, 0x1.c60e9b06ee0d7p-65,
     0.0, 0.0, 0.0, 0x1.a8ad323150f2fp-521, 0x1.3a4983612565fp-436, 0.0,
     0x1.7b2f6eecc1d16p-374, 0.0, 0.0, 0.0, 0x1.6b2db982f9abdp-774,
     0x1.254e4299b98bep-115, 0x1.e59c1cda81a2ep-978, 0.0, 0.0,
     0x1.2742a669a07ffp-1017, 0.0, 0.0, 0.0, 0x1.6a026c83164fcp-649, 0.0,
     0x1.f45e777340ff3p-154, 0.0, 0.0, 0.0, 0.0, 0x1.66f971e1f8c21p-646, 0.0, 0.0,
     0.0, 0x1.4ed518f6ffcbdp-849, 0x1.af41798bbebe1p-308, 0x1.0bd59d2392634p-257, 0.0,
     0.0, 0x1.72a0079243296p-885, 0x1.97bc104727db5p-56, 0x1.b934c2a952496p-681, 0.0,
     0x1.239cafecffdb8p-28, 0.0, 0.0, 0.0, 0.0, 0x1.8eab7bd0e5afbp-330, 0.0, 0.0,
     0x1.c98b4a5d9fb86p-598, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab5ad807be5e8p-672,
     0x1.a48f261339fccp-536, 0x1.9f399db8e8486p-1012, 0x1.54d51fb571969p-793, 0.0,
     0x1.88c984db35404p-130, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e97635a2fd26fp-644,
     0x1.83d648812670dp-574, 0.0, 0x1.e586cfba44eaap-900, 0.0, 0x1.e7079ac44c18p-711,
     0x1.50b687f2fa36dp-939, 0.0, 0.0, 0.0, 0.0, 0x1.c7bb4ed382eadp-959, 0.0,
     0x1.28fc04ef32bd9p-976, 0.0, 0x1.b0bf74279ed9ep-140, 0.0, 0x1.43c69d8296c98p-691,
     0.0, 0.0, 0x1.893640dd38f6p-722, 0.0, 0.0, 0.0, 0x1.2b3e06abfe567p-492,
     0x1.0de3fda6668bcp-257, 0x1.0480f690c4f22p-792, 0x1.ba3135184014dp-894, 0.0, 0.0,
     0.0, 0.0, 0x1.d926294bcad29p-523, 0.0, 0.0, 0x1.a7a8f6cbaa5c5p-969, 0.0,
     0x1.d762b4506f3cfp-909, 0.0, 0.0, 0.0, 0.0, 0x1.8ddd7ecf75805p-161,
     0x1.13280b811b223p-725, 0.0, 0.0, 0x1.a98a4965e91f3p-398, 0x1.7f98f6e35aafap-716,
     0x1.7c5ba81cc196ap-912, 0.0, 0x1.04ea56f9e86a5p-131, 0.0, 0x1.ffc2e8e74758p-206,
     0x1.fd0ec48dbe3f7p-426, 0x1.40fb1dbeaa879p-416, 0x1.fb4c6f8a1a739p-662,
     0x1.00a4c9afebba6p-433, 0x1.99e02af441feap-525, 0.0, 0x1.5a1ff87e67d22p-519,
     0x1.cf0fe0221f899p-995, 0x1.6f29c24fa7793p-714, 0x1.334fc2e40508dp-954,
     0x1.3ed81c7002321p-161, 0.0, 0x1.c43c5bee30b1fp-483, 0.0, 0x1.0940a98aaa941p-105,
     0.0, 0x1.cbd4e3585a35bp-564, 0.0, 0.0, 0.0, 0x1.1f7fbc619ee17p-721, 0.0, 0.0,
     0.0, 0.0, 0x1.d4cc147690ce4p-613, 0x1.b5f7d18fb9089p-808, 0x1.158306f389a54p-176,
     0.0, 0.0, 0x1.a4c673f54d18ap-580, 0.0, 0x1.4e58ad1af268ep-838,
     0x1.27878bfa1df59p-58, 0.0, 0x1.4f68afd2b7ff9p-666, 0.0, 0.0,
     0x1.c154591d4850cp-989, 0.0, 0x1.98862d0816173p-348, 0x1.1674b5edbda98p-936, 0.0,
     0x1.7adbf9e278b99p-161, 0.0, 0.0, 0x1.6dda654256bffp-250, 0.0,
     0x1.f98f01ebeb992p-785, 0.0, 0x1.aecd59d33a63cp-314, 0x1.11520f5b6a978p-120, 0.0,
     0x1.8ffce1e9dde42p-115, 0x1.0f74be86368dap-817, 0.0, 0.0, 0.0,
     0x1.a65325e5d326bp-471, 0x1.c19d5d4ce9eeap-979, 0.0, 0.0, 0x1.888161b4427fdp-637,
     0x1.9499ad6918203p-834, 0x1.85bb834f0c16fp-500, 0.0, 0x1.7d3b9a7882ae2p-972,
     0x1.f54cb8656a3eap-416, 0.0, 0.0, 0.0, 0x1.6a2dcc3e2d39ap-995,
     0x1.e5ac08145e433p-906, 0.0, 0x1.56d431eff1b05p-478, 0.0, 0.0,
     0x1.5d8f3c6040f61p-646, 0.0, 0.0, 0x1.e10253187e9a7p-776, 0x1.4a30f549b238fp-589,
     0.0, 0x1.dc6d00f3c647ap-757, 0x1.eac2a2873f207p-798, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f966c63c9fcp-73, 0.0, 0x1.cfb62af6e942bp-982, 0.0,
     0x1.77b434db5fdabp-545, 0.0, 0.0, 0x1.5289285efa08fp-694, 0x1.bda895624f0dap-88,
     0.0, 0.0, 0.0, 0.0, 0x1.c875151d9851fp-822, 0.0, 0.0, 0x1.6703b65a2f16p-927, 0.0,
     0x1.a51b1c022b97cp-241, 0x1.744cfe6a345b1p-749, 0x1.89e307dd99794p-729, 0.0, 0.0,
     0x1.505b3d7bc2b22p-676, 0.0, 0x1.dd2ace3c9f06cp-243, 0.0,
     0x1.311a8320ad226p-1001, 0x1.0715b16dff76ap-918, 0x1.b74e267bfafedp-432, 0.0,
     0.0, 0x1.93fa71cc717b1p-384, 0x1.3bf4e8b5d64acp-636, 0.0, 0.0,
     0x1.17d455f290a7bp-241, 0x1.33b15e0cf1741p-267, 0.0, 0x1.d951cd7df0425p-980, 0.0,
     0.0, 0x1.ff9f3f7086f23p-913, 0x1.b43bed3b4f9d1p-405, 0.0, 0x1.d77a104fee1fbp-492,
     0.0, 0.0, 0x1.455859ff49f48p-808, 0x1.b27af1305b88ap-307, 0x1.1d9273b2069f4p-592,
     0.0, 0.0, 0x1.72a2a7a84404dp-1002, 0x1.2a741a610879fp-810, 0.0,
     0x1.31c2ff02a5f3bp-1005, 0.0, 0.0, 0.0, 0x1.38267f332f70ep-967, 0.0,
     0x1.816dafb5c5035p-395, 0x1.13c8f86ae1481p-753, 0.0, 0x1.066fb0f94571p-981,
     0x1.fe8e063d93ab7p-855, 0.0, 0x1.a7cd37b43ddd5p-70, 0x1.f7eda1eda391cp-331,
     0x1.c35a7a39700eap-762, 0.0, 0x1.ecd0274b18629p-55, 0x1.3a7adccc1927bp-737, 0.0,
     0x1.ccbd7795379e1p-274, 0.0, 0x1.171b2f8bcc1a6p-113, 0.0, 0.0, 0.0, 0.0,
     0x1.39780e902a715p-343, 0.0, 0x1.a1bffe392f9e6p-342, 0.0, 0.0,
     0x1.2cdbeb9e75b35p-519, 0.0, 0.0, 0x1.aa2ebbb77a70fp-551, 0x1.526d5927cef1ap-798,
     0x1.19adf29ffb5d2p-510, 0.0, 0.0, 0x1.9951865ece877p-231, 0x1.5058242bd9811p-165,
     0x1.485d76566ec8cp-748, 0x1.5f57d41b7fc7cp-193, 0.0, 0.0, 0.0, 0.0,
     0x1.1d545b0c4b2ddp-444, 0.0, 0x1.b4292631da83cp-6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17569c362c41dp-987, 0x1.6e683f4f8e36ap-69, 0.0, 0.0, 0.0, 0.0,
     0x1.9636685f02067p-966, 0x1.395967d24eed4p-887, 0.0, 0x1.b1dace3f9629ep-664, 0.0,
     0.0, 0x1.e9206c0ebf5ebp-722, 0.0, 0x1.a9c8431784aabp-941, 0.0, 0.0,
     0x1.b0cbc8aba79c1p-40, 0x1.e61b48e25db17p-449, 0.0, 0.0, 0.0,
     0x1.b4e0814defe12p-903, 0x1.6ea6a350a6cb7p-849, 0x1.a89621c4d31f6p-401, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f589d23f8f6bp-416, 0.0,
     0x1.706bc8822c7cbp-919, 0x1.2627a5b165583p-993, 0.0, 0x1.2e74a7ee617fdp-702,
     0x1.64435d1fdbeb6p-816, 0x1.12eddcfede1e5p-856, 0.0, 0.0, 0x1.d6b0162ec9819p-268,
     0x1.c8d1a63722834p-89, 0.0, 0.0, 0.0, 0.0, 0x1.4da6a3de2e06bp-298, 0.0,
     0x1.ae167bba49275p-431, 0x1.b34739a6be53dp-640, 0.0, 0x1.dc28b8c32c273p-500, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88b2619043b7ap-621, 0.0,
     0x1.cbf29567d442bp-791, 0x1.44fa0fecf34d2p-871, 0x1.f4a714a52018ep-327,
     0x1.11a79544fafc4p-822, 0x1.92f9dc7709f1p-457, 0x1.d4799e15aada2p-641,
     0x1.a513524d90b72p-608, 0.0, 0x1.e1f22ce122835p-32, 0x1.dfbd28669f01bp-93,
     0x1.29ffdc2e334d5p-773, 0x1.c4c7d2dbe2da2p-917, 0x1.e0163be897a56p-140,
     0x1.bab0ef81155f8p-281, 0x1.4230d5e4ac9cfp-767, 0x1.b953bc3477ec8p-1006,
     0x1.4b747ba1f6e3p-720, 0.0, 0.0, 0x1.6a31d2c016d4p-690, 0x1.30e442673f607p-10,
     0.0, 0x1.879de0bd0c62fp-217, 0.0, 0.0, 0.0, 0x1.cf79e77233405p-924, 0.0,
     0x1.4e694a1fe979fp-922, 0x1.c30bffa7f5af9p-745, 0x1.803305c2952e4p-449,
     0x1.3415f697f6b6cp-548, 0.0, 0.0, 0x1.256e38b07fe5ap-167, 0.0,
     0x1.7208d5a6cdfafp-114, 0.0, 0x1.5d1a2f416d8bbp-501, 0.0, 0.0, 0.0,
     0x1.31b6b6cd5043p-594, 0x1.19596271f38d5p-792, 0.0, 0x1.c2e5b78ad56ep-845,
     0x1.d1376b0cbfd53p-609, 0x1.182fd2d3323aap-49, 0x1.3187fa29737fdp-669,
     0x1.c3f7d86779eddp-901, 0.0, 0x1.99c0b3af5bd8ap-543, 0.0, 0x1.acca7100b62dap-979,
     0x1.62626563aebb6p-919, 0.0, 0x1.4bd5044773383p-222, 0x1.fd19de54ae8afp-428,
     0x1.563b400f1f71ep-204, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7313a27adaccbp-885,
     0x1.e7b442bb66d72p-541, 0x1.1fcaf362adb17p-232, 0x1.6a0c886f1de9ep-702, 0.0, 0.0,
     0x1.7cf76463cc133p-211, 0.0, 0x1.ad82bf4a3a623p-558, 0x1.1cd35ac1d1a7ap-641, 0.0,
     0x1.4e7d29dcd1164p-279, 0.0, 0x1.7793911bddb71p-282, 0x1.2e9128b11d4d6p-120, 0.0,
     0x1.d528829609a2ap-412, 0x1.ba2df5d8197b5p-284, 0x1.a04d14be49cddp-228,
     0x1.2d3438f6f9761p-61, 0.0, 0x1.cea1b5c90cf7fp-328, 0x1.691b055be6a5cp-813,
     0x1.fef1e1820a63bp-891, 0x1.c0c4c356b2f8p-121, 0x1.190dfd141df9cp-427, 0.0,
     0x1.b3bb4a23ad78bp-270, 0x1.458e66e3dfb93p-840, 0x1.34f31ffa563b2p-327, 0.0,
     0x1.e84781a0687a2p-629, 0x1.9c3422c88c82fp-992, 0x1.bc236f2ca8125p-369, 0.0, 0.0,
     0.0, 0x1.bfffa04c949c4p-531, 0x1.4a2bdbb61edcap-611, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.545a54f0f3b89p-358, 0.0, 0x1.cff1d9c706d0cp-261, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.87a236d176911p-749, 0.0, 0.0, 0x1.30f35abe40e5p-421,
     0x1.aae8f93b1b012p-544, 0x1.1627445e344dep-414, 0.0, 0.0, 0x1.becbd5108c4e7p-592,
     0x1.30ba16bcdc3b7p-219, 0.0, 0x1.1d71c38b6fda3p-922, 0.0, 0x1.5b4be8edcef2cp-31,
     0x1.6a45a5774ffb6p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9dd7eb156f0fap-794,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70e602d225b87p-441, 0.0, 0.0,
     0x1.f0dd4edc272b8p-23, 0.0, 0.0, 0x1.ade120974a8a7p-124, 0x1.32ed2330fc08p-625,
     0.0, 0x1.01abd502ac2bep-691, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55aff4621811fp-197,
     0.0, 0.0, 0x1.d70f9d15614a2p-931, 0.0, 0.0, 0x1.bbd579e7f41dp-544, 0.0,
     0x1.ff21da3b7900fp-851, 0.0, 0.0, 0x1.f270836c05208p-338, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.547ab1dafb32dp-381, 0.0, 0x1.1de4f93ffc954p-996, 0x1.8b494577b6dbfp-82,
     0x1.0cb020eccb374p-267, 0.0, 0.0, 0.0, 0x1.5670f75ec28c9p-168, 0.0,
     0x1.4da75a10664fbp-113, 0x1.1fcb0adb22072p-767, 0.0, 0.0, 0.0,
     0x1.912388ad68a14p-413, 0.0, 0x1.2774d21242cbdp-742, 0x1.ddf57a74d03f9p-635, 0.0,
     0x1.04403496154dep-861, 0.0, 0x1.e3136c2766e74p-1021, 0.0,
     0x1.0724be6ebd185p-807, 0x1.8b468d1cf0be9p-654, 0x1.b00e876d47529p-669, 0.0,
     0x1.5de4fe1487231p-845, 0x1.b02f2aed89faep-493, 0.0, 0.0, 0x1.29d3ae9c1d2a8p-496,
     0x1.9cfad5580e0efp-207, 0.0, 0x1.8cbd5cb577951p-598, 0.0, 0x1.128e4bffc8ed3p-202,
     0x1.2489b17bba4f2p-396, 0.0, 0.0, 0x1.99042f8e8fccp-760, 0x1.4569e0836e92p-45,
     0x1.67e1eaaf17e74p-632, 0x1.2636882e3ee5bp-466, 0x1.d6115803cb697p-427,
     0x1.340e3deb5ee64p-215, 0x1.0d8cf7b01d3b2p-739, 0x1.9244f97fcb189p-516,
     0x1.9cfd9971892f2p-291, 0.0, 0.0, 0x1.4a15a8d05dd42p-298, 0x1.5e44d79c5d40bp-225,
     0x1.f95d7a52cc61fp-383, 0.0, 0x1.8e0f04e423cd3p-795, 0.0, 0.0, 0.0,
     0x1.59a0fefb443fp-424, 0.0, 0.0, 0x1.7f0c3335896b9p-732, 0.0,
     0x1.85b8f683dd266p-701, 0x1.e2b44bb7057aep-160, 0x1.d29dda23912ap-419,
     0x1.88e612f310046p-724, 0.0, 0x1.165f6f4216523p-513, 0.0, 0x1.b87a684bfd67dp-951,
     0.0, 0.0, 0x1.84eb7d736c421p-509, 0.0, 0.0, 0.0, 0.0, 0x1.f1a90a1257264p-815,
     0x1.7ae4beceebef8p-689, 0x1.ca5bccd4d554ap-614, 0.0, 0x1.d396c0a61c043p-417, 0.0,
     0.0, 0x1.29c21bbf12741p-826, 0x1.d6461fde9b005p-751, 0.0, 0x1.fd8232b6819aep-185,
     0.0, 0x1.01a3f5beaf359p-466, 0x1.a990c500d671ep-148, 0x1.28293990026b1p-817, 0.0,
     0x1.ba3f89397fb31p-390, 0x1.fedebe5d37cebp-945, 0.0, 0.0, 0x1.eea75d5e0e1a6p-824,
     0.0, 0.0, 0x1.1527d34eeeb67p-169, 0x1.0268d4283d083p-195, 0x1.1d8bb05e12b76p-331,
     0.0, 0x1.d3a6f3bd52ef9p-652, 0.0, 0x1.abc58496732cbp-381, 0.0,
     0x1.0c13bcbad0704p-528, 0x1.14e103b6c4e85p-951, 0x1.25a9d8e855cdap-538,
     0x1.4c6313d1112bp-658, 0.0, 0x1.e7af43089035dp-361, 0x1.10a6ea69ecd4ep-1009, 0.0,
     0.0, 0x1.30b2627358c91p-237, 0.0, 0x1.d45ede3f60b4ep-546, 0.0,
     0x1.6a5af42443a36p-234, 0.0, 0x1.3e7e0dc7149a2p-222, 0x1.06d7902f44841p-134,
     0x1.6c1574aaa0595p-944, 0.0, 0x1.b0d128c50b937p-588, 0x1.a3eff7d66cb89p-1022,
     0.0, 0x1.4b3b610955d1ep-713, 0.0, 0x1.102421f16d14bp-580, 0.0, 0.0, 0.0,
     0x1.ef72c23ecd645p-781, 0x1.cf1bed1c89c21p-326, 0x1.5b64918505753p-80, 0.0, 0.0,
     0.0, 0x1.b2f28151c3577p-749, 0x1.9517807275ap-681, 0.0, 0.0,
     0x1.8aef9c8477a0ep-109, 0.0, 0x1.889704c1a0cd1p-628, 0.0, 0x1.a67a08f67c02cp-175,
     0.0, 0x1.57bc3566a2f52p-370, 0x1.8d9e2c3dee9ep-614, 0.0, 0x1.0e577cda58606p-229,
     0.0, 0x1.5317d30f672d3p-171, 0x1.c7de31bec1849p-756, 0x1.de64cea8fbe3dp-245, 0.0,
     0.0, 0x1.a272f79105453p-221, 0.0, 0x1.efdec1b848849p-993, 0.0, 0.0, 0.0,
     0x1.7f74bbe44f372p-374, 0x1.ca8f90fb1dd72p-543, 0.0, 0x1.8f96d676fc58ap-819, 0.0,
     0x1.c009e75fee7c8p-44, 0.0, 0x1.ec0e4e3af6edep-587, 0x1.5fd34df84fdd3p-312, 0.0,
     0.0, 0.0, 0x1.81ee2d1814759p-851, 0x1.b70a93ac30a26p-234, 0x1.46d63c517d5b8p-553,
     0x1.288e43c2cadeep-157, 0.0, 0x1p0, 0x1.d3e688aacc4bbp-807, 0.0,
     0x1.4c66047f85a14p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d2192b16538e8p-556, 0x1.f3c0da949b1d8p-111, 0.0, 0x1.ef929689ec759p-130,
     0x1.6d7fe5118dc35p-123, 0x1.5a3ae2ca10c49p-726, 0x1.9c4e6b1d9cfd5p-303, 0.0,
     0x1.2601b7487e19bp-235, 0x1.b6318e8bed4bp-862, 0.0, 0.0, 0x1.204f9510ccef7p-945,
     0.0, 0.0, 0x1.27ba53f02eb6ap-420, 0x1.89ea503464142p-293, 0.0,
     0x1.1c5bed42556c6p-826, 0x1.c280a74496623p-573, 0.0, 0.0, 0.0, 0.0,
     0x1.6ca839debc496p-6, 0x1.38439f0ec333fp-774, 0.0, 0x1.86660c94eb403p-939, 0.0,
     0x1.91c77fccac6fbp-758, 0x1.0460e6c031fdp-276, 0x1.19ca930210b88p-780,
     0x1.0132fe8506963p-434, 0x1.0517e31eacdd4p-215, 0x1.1ac84250f430bp-932, 0.0,
     0x1.f1b881af88f64p-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05369b869bdefp-886, 0.0,
     0x1.b95821fe81d6cp-384, 0x1.3fb4053dfad5p-1009, 0x1.6cfb1ae984a0fp-541, 0.0, 0.0,
     0.0, 0x1.4dbf578bc72c2p-222, 0.0, 0x1.5c424302a0de8p-544, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.edbac674718e4p-457, 0x1.5b60b858f400fp-850, 0x1.5eeae0041dbcap-977,
     0x1.c5a55a4000239p-251, 0x1.837e34cecb9d1p-79, 0.0, 0x1.4650ba2377657p-841,
     0x1.137c2d6b70fb4p-360, 0.0, 0.0, 0x1.a6198b48221cdp-706, 0.0,
     0x1.e4c3f55899d72p-838, 0.0, 0.0, 0.0, 0x1.a63c52d4ce436p-136, 0.0, 0.0,
     0x1.9752781393388p-214, 0x1.b3fc4343493ebp-310, 0x1.33ca9c28d8df1p-215, 0.0,
     0x1.c87bbc119b83cp-189, 0.0, 0.0, 0x1.38eaa02abd309p-860, 0x1.4ac478c147002p-796,
     0.0, 0.0, 0x1.cbd11dc879af4p-493, 0.0, 0.0, 0x1.a3ad1fce5e27ap-68,
     0x1.6221503495e49p-499, 0x1.23e98704ddea2p-472, 0x1.13a455d93e6e4p-434,
     0x1.e5dda5cf9390ap-13, 0x1.41e0a95f0491fp-166, 0x1.fc933498a1564p-946,
     0x1.923a08eb2913dp-493, 0.0, 0.0, 0.0, 0x1.4b54bd610f0ccp-848,
     0x1.517a2de89b1a6p-821, 0x1.00062fe6afa96p-584, 0.0, 0.0, 0.0,
     0x1.71c78b8db2c4dp-900, 0x1.92351e5127466p-829, 0x1.fbb8c0f553f79p-861, 0.0,
     0x1.f40ba222fddbp-736, 0.0, 0.0, 0x1.dafe889b43df7p-286, 0.0,
     0x1.103ecbece3e55p-550, 0x1.f1f351cb17531p-341, 0x1.90a105f3c3d71p-828, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.982399f2c5be9p-203, 0.0, 0.0, 0x1.6455e16d5dbe3p-59,
     0x1.f6d506dcac9e1p-168, 0x1.7ea78e94bf2e1p-992, 0x1.41888e21f0efbp-928, 0.0, 0.0,
     0x1.26981fc845f23p-16, 0x1.3dee639e6ba83p-254, 0x1.e9a5929655a8dp-720, 0.0, 0.0,
     0x1.740dcb13f3b9fp-197, 0.0, 0.0, 0x1.defa25d17ac5bp-385, 0x1.7584b250c2f48p-488,
     0.0, 0x1.d9fc6132d9a25p-299, 0.0, 0x1.4f9ab6efa2a7bp-777, 0x1.49c37981428f5p-526,
     0.0, 0.0, 0.0, 0x1.9a70fac4fdb2ep-201, 0.0, 0x1.dfd400604472ap-805,
     0x1.16bc8bdb9420bp-155, 0.0, 0.0, 0.0, 0x1.40f2038323531p-871,
     0x1.6ade1e7d97f81p-369, 0x1.85a1e3eae68c1p-194, 0.0, 0.0, 0x1.823451024236cp-931,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d561b97c9d25bp-766, 0.0,
     0x1.0481cd7c74aa1p-499, 0.0, 0x1.710ac3f3cab87p-180
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
            tmp1 = Sleef_finz_sqrtd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sqrtd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
