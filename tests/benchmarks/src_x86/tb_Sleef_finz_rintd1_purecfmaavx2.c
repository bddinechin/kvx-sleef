/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintd1_purecfma.c --function \
 *     Sleef_finz_rintd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.03e74a2793249p-444, 0x1.df72fc6f3bbafp-537, 0.0,
     0x1.8ed5c6b1a9c6ap-966, 0x1.2bcf464ddfab3p-39, 0x1.420614da10d8p-414, 0.0,
     0x1.44cf3b1078434p-692, 0x1.c02f76f3c3b6dp-719, 0x1.6b4bbdf2a2c33p-847,
     0x1.d6559e4e9f12ep-475, 0x1.8db2c7d38f8eep-775, 0x1.8d6b32b78f746p-149, 0.0, 0.0,
     0x1.e97503893fe3ap-556, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4f502816d9e5p-226, 0.0, 0x1.c819dcc1986c8p-649, 0x1.371e1e8325b19p-101, 0.0,
     0.0, 0.0, 0x1.cdd2cc56d896fp-465, 0.0, 0.0, 0x1.4b7a06981e63cp-739, 0.0, 0.0,
     0x1.29cc58cd97889p-489, 0.0, 0.0, 0.0, 0x1.a85a52a7a80b7p-848, 0.0,
     0x1.8eef0e11d4377p-99, 0.0, 0.0, 0.0, 0x1.b34a3e4665cffp-643,
     0x1.1a7235ede4ac9p-466, 0x1.118d8e597d604p-128, 0.0, 0x1.d4d09ab9d56e1p-127, 0.0,
     0.0, 0x1.c9944275d7466p-383, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e32c627e38de5p-857, 0.0, 0x1.8c2590b6a2fd4p-317, 0.0, 0x1.b1c1038ba2a9ap-855,
     0.0, 0x1.13ffd978dd995p-524, 0x1.42e8e8ce72332p-475, 0x1.efbe3ef378c13p-39, 0.0,
     0x1.c3d5452f5f16p-713, 0.0, 0x1.5547747bee0d3p-87, 0.0, 0.0, 0.0,
     0x1.07f58be37418ep-48, 0x1.0fa624ec37e32p-849, 0x1.9256ae1512638p-260, 0.0, 0.0,
     0x1.8d5fea4a7bd6dp-537, 0x1.61df457aab1a8p-281, 0x1.f0e0609667ab9p-680,
     0x1.e2988d3f66546p-118, 0.0, 0.0, 0.0, 0x1.29af5763eac4ep-1017, 0.0, 0.0,
     0x1.2c77aead2c4eap-532, 0x1.7cd5780a84a9p-619, 0x1.4db23f2bc7674p-258,
     0x1.4e773d75390b8p-294, 0x1.d58a39f3deb0fp-845, 0x1.579ebae480576p-113,
     0x1.5487efd2f1f6dp-393, 0x1.8899b4bef7b71p-19, 0.0, 0x1.84a3da2a70e5ep-535, 0.0,
     0.0, 0x1.81a2a5adb7c5ep-680, 0x1.969c68ecf6048p-790, 0x1.ac4f4cc780e32p-864,
     0x1.8fd371d712dc9p-865, 0x1.fdb5e5f650a2cp-636, 0x1.e17ade7d82193p-375,
     0x1.295940e0f51bp-113, 0x1.87dd1a9b0dde4p-10, 0x1.6244db1a633acp-359,
     0x1.68477f229998dp-844, 0.0, 0x1.7d134db18803ap-441, 0x1.eb8c49ae17d0ap-416,
     0x1.c4603be55fe39p-766, 0x1.ce2c50c650e42p-696, 0x1.3ced181cee623p-806,
     0x1.4d08c7a2606f6p-339, 0.0, 0x1.1a4b4473621afp-847, 0x1.247b0f26ec973p-888,
     0x1.72bf822d8a485p-58, 0x1.6dcdf5fe369d9p-1010, 0.0, 0.0, 0.0,
     0x1.de3bc29c20a93p-433, 0x1.2df32b415d157p-906, 0.0, 0x1.906b0f20c23aep-607,
     0x1.51ffd7436d3e2p-851, 0.0, 0.0, 0x1.9ee1977a6c108p-959, 0x1.319f3eb4f795p-895,
     0x1.0d13294d38bcep-158, 0x1.82943e1583d26p-992, 0x1.1e72864ceef67p-130, 0.0,
     0x1.07199fce9fa11p-461, 0x1.f1d8312e0017dp-585, 0x1.05ffb0466898bp-15, 0.0, 0.0,
     0x1.a923bc654319bp-345, 0x1.97b88cbe78061p-56, 0.0, 0x1.16a193e52173p-345, 0.0,
     0.0, 0x1.00515c9d36a4fp-392, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16431655fddaep-1013, 0x1.991cde451e63ep-493, 0.0, 0.0, 0.0, 0.0,
     0x1.0243548d5e086p-940, 0x1.484f1288907b1p-177, 0x1.2c0005c32484ap-427, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fc1d25c10348ep-620, 0x1.2bf0a1e198f83p-319,
     0x1.d23788dd6fa31p-714, 0x1.2cac412dd418dp-496, 0x1.fe16e20ba7dfbp-99,
     0x1.7cae8dcba3d1cp-485, 0x1.abc38020afdd3p-142, 0.0, 0x1.3a9c631c03682p-514, 0.0,
     0.0, 0x1.e49f06dba18bcp-146, 0.0, 0.0, 0.0, 0x1.37f092e7d6988p-1021, 0.0,
     0x1.3825ec9ed3dd4p-384, 0x1.92bbf113cd9e8p-809, 0x1.699d1878d8816p-714, 0.0,
     0x1.d24ee030b5713p-1007, 0.0, 0x1.175624027d85p-349, 0x1.3ef870b618c66p-380,
     0x1.82fe8d40fed42p-474, 0.0, 0x1.409cf9aa0e25dp-922, 0x1.4c7598b9fc3dfp-226,
     0x1.8732e3eb67ce8p-422, 0x1.74fa693df0674p-505, 0.0, 0.0, 0.0,
     0x1.a2a7647f228e2p-1004, 0.0, 0.0, 0x1.9fb4646920e2ap-672, 0.0,
     0x1.d346774fc651cp-869, 0.0, 0x1.02612d65836cbp-730, 0.0, 0x1.76cbdb09b8ff5p-651,
     0.0, 0.0, 0.0, 0x1.1e59b79d57c9p-13, 0.0, 0.0, 0.0, 0x1.128322811438p-119,
     0x1.f43842ddc6038p-873, 0x1.b57849d99f0efp-105, 0.0, 0.0, 0.0, 0.0,
     0x1.a3edc5682baafp-55, 0x1.fdfc2499541f5p-404, 0.0, 0x1.ed813bb257c8ep-672, 0.0,
     0x1.cacb3ac3789p-513, 0x1.223320ae769e1p-274, 0.0, 0.0, 0x1.8a75e1929a6ebp-89,
     0.0, 0.0, 0x1.c0fb8cc0a1a3ep-173, 0x1.0689f07dc7a8fp-433, 0x1.62cab0aae851ep-455,
     0.0, 0x1.dbeb80b98802p-328, 0x1.6e61a653a1ddep-406, 0x1.1aca23873a7c5p-966,
     0x1.7d5690dcd849cp-431, 0.0, 0.0, 0.0, 0.0, 0x1.66f1ab04401d6p-807,
     0x1.b3da38e4da05ap-416, 0x1.c6ac093c2ae6ep-502, 0x1.56963b543765bp-680,
     0x1.a2eb756a4d11dp-115, 0.0, 0x1.0e35e74afd37dp-183, 0x1.ed9f9f46088edp-372,
     0x1.fb0e47fef65ebp-695, 0.0, 0.0, 0.0, 0x1.11d34ca9bb56bp-55,
     0x1.0334ece1a594p-94, 0.0, 0x1.01dea12bc3961p-5, 0.0, 0.0,
     0x1.f7b46abdaacfdp-127, 0.0, 0x1.1d4544c6ca85bp-948, 0x1.ef0bab4f2f174p-850,
     0x1.4b8aa123417ep-421, 0.0, 0.0, 0x1.d9a6ff25e99e8p-491, 0x1.46a28b82b913fp-228,
     0x1.d180a4e8990c5p-20, 0.0, 0.0, 0.0, 0.0, 0x1.d7f5e82dff0afp-412,
     0x1.265a205ab7a25p-736, 0.0, 0x1.b25889b8971dap-877, 0.0, 0x1.5b9c01ec3d417p-485,
     0x1.196119abe30dfp-459, 0x1.c1e56e7f42496p-625, 0.0, 0x1.83bd1da420002p-1022,
     0.0, 0x1.a389a000cb9c6p-471, 0x1.514856916ecbep-243, 0.0, 0x1.acda54563fccdp-121,
     0x1.3c18d0e2e1887p-595, 0.0, 0x1.098d97aee8f39p-372, 0.0, 0.0, 0.0,
     0x1.59f95e55d5bbcp-727, 0.0, 0x1.95a4650c51614p-384, 0.0, 0.0, 0.0,
     0x1.a5a044b77fef9p-745, 0x1.e23734a368d18p-841, 0.0, 0.0, 0.0,
     0x1.7adcba8bb4c6dp-747, 0.0, 0x1.fd3b4630cb00fp-21, 0x1.97b146e7fcd4p-201,
     0x1.b4b9563fca00dp-178, 0.0, 0.0, 0x1.eb6f1226e3d05p-1009, 0.0, 0.0,
     0x1.ba262a7fe6ecep-172, 0x1.ca0dd833ade46p-844, 0.0, 0x1.8660b5ddff43ap-770, 0.0,
     0x1.d3c17d8182a69p-451, 0x1.e3fca692ca72ep-687, 0x1.201f1620b976bp-718,
     0x1.4cb7ccd37f55cp-458, 0.0, 0.0, 0.0, 0.0, 0x1.25b816dc77176p-220,
     0x1.b527b34942161p-480, 0.0, 0x1.034b365f32a91p-766, 0x1.eb891e7737a38p-942, 0.0,
     0x1.e4c3b132dac6bp-539, 0.0, 0.0, 0x1.1a283da2da72cp-48, 0.0,
     0x1.c1c72aefbb4d5p-311, 0.0, 0.0, 0.0, 0.0, 0x1.46fb1eb208f02p-234, 0.0,
     0x1.e569ba0e1baecp-994, 0x1.9940919cff656p-996, 0.0, 0.0, 0x1.ce9335e32120dp-94,
     0x1.db38f5fa097dfp-987, 0.0, 0x1.bafc0366aaec1p-198, 0.0, 0x1.4e3a1405a4d2fp-868,
     0.0, 0x1.ffa70219866a6p-398, 0x1.d9a747be1e73ep-883, 0.0, 0x1.81e71ac9313ccp-53,
     0.0, 0x1.b286c5b42c681p-571, 0.0, 0x1.3d9a6e296d4a6p-907, 0.0,
     0x1.8d30c7f7fe436p-577, 0x1.41212caa337c5p-259, 0x1.ee5877c6eff88p-468,
     0x1.32d5a0065d256p-470, 0x1.016b5e008f1a4p-179, 0x1.8310897e79401p-423, 0.0,
     0x1.c5f672f10b95p-735, 0x1.e069093120b31p-927, 0x1.96ace750aab46p-654,
     0x1.62eda8502fc1ap-667, 0x1.aaba7e71646d6p-634, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9f311758bc622p-159, 0.0, 0.0, 0x1.042396b90bdfcp-249,
     0x1.18f8625cfb9fp-840, 0.0, 0.0, 0x1.9db8e0cb20bb5p-947, 0.0,
     0x1.8477b413186cbp-226, 0x1.985ef7a41a2f7p-880, 0x1.f1fe4d1312c8cp-647, 0.0, 0.0,
     0.0, 0x1.1b9a3d2f3d1d9p-472, 0.0, 0x1.4b8860d6d3303p-962, 0x1.a6527f7e1401ep-70,
     0.0, 0.0, 0x1.bd5c8b5c03babp-422, 0.0, 0x1.9847117c8b1cdp-919,
     0x1.50eb503d1c566p-30, 0x1.3d3a7089d439fp-306, 0.0, 0.0, 0x1.d2790d103fe36p-923,
     0x1.f6b0b0c4ff7f1p-1005, 0.0, 0x1.777e14051ffadp-360, 0.0,
     0x1.9aae2f8fc6578p-577, 0x1.411359beb85f6p-1020, 0x1.d5ead83e2dc6ap-572,
     0x1.87e9d1f68ba35p-872, 0x1.7324c34c8114ep-849, 0.0, 0x1.c5602e05d40f5p-459,
     0x1.fb25fbbf6e586p-308, 0x1.d5b2bc81d81b3p-375, 0x1.7b7a6e294b355p-231,
     0x1.b2bfe9f9052d4p-140, 0x1.bbd2608f3deb8p-129, 0x1.8fd14eb23c354p-194,
     0x1.1dffb2350422bp-769, 0.0, 0.0, 0x1.45041d99766acp-119, 0.0,
     0x1.fc28e2095f3cbp-530, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0115a0d2ceb1cp-166,
     0.0, 0.0, 0.0, 0.0, 0x1.e7c78604c8c17p-940, 0x1.abbb90d490928p-361, 0.0,
     0x1.16e55f6012ee1p-728, 0x1.2f4bc1b6bd7dap-668, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.76cf67c0eee4cp-697, 0x1.788b381ffb7abp-186, 0.0, 0.0, 0x1.560e3ec8ee452p-792,
     0x1.e9b4a0ad4e194p-529, 0.0, 0x1.a088a8e367aabp-964, 0x1.8fcf1537191a5p-1004,
     0x1.1b0ef59ffa5a3p-119, 0x1.ebc6d6670786bp-586, 0.0, 0x1.02676042d756ap-468, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5f56a14cf835ap-439, 0.0, 0x1.10b5060217e38p-367,
     0x1.14ea7f5833204p-731, 0x1.a470132f12a05p-967, 0x1.dc6acbdbbabfbp-540, 0.0, 0.0,
     0.0, 0x1.3287ccd447b9dp-297, 0x1.c22784ffcca09p-623, 0.0, 0x1.a38e7449549a2p-480,
     0x1.1506ca31609e9p-120, 0x1.933d52af5c5a6p-324, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7c256aeaa0479p-334, 0x1.c7d1af99f31afp-341, 0.0, 0.0, 0x1.47b8d01db7c94p-977,
     0x1.d4754590cc5b4p-177, 0x1.2c09ee12b9555p-854, 0x1.c091efc4dc906p-331, 0.0,
     0x1.0006303c683e1p-799, 0.0, 0x1.00167f77db82bp-365, 0.0, 0.0,
     0x1.2d49b8a8b2db9p-440, 0.0, 0x1.efb9ef254a272p-765, 0.0, 0.0,
     0x1.f8c529dd7f2e3p-956, 0x1.0033992e89caep-239, 0x1.599396cad0b4ap-901,
     0x1.cc8094ed1a24ap-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d42ed01d0e9p-414,
     0x1.7956203dc1aabp-753, 0.0, 0x1.292a9188f9b63p-798, 0.0, 0x1.65774cdc470fp-941,
     0x1.5c91fce296486p-908, 0x1.da96d26c7dca1p-857, 0.0, 0.0, 0x1.039113a24b321p-170,
     0x1.0a747e5234a87p-526, 0.0, 0.0, 0x1.e0c384a6b76bbp-288, 0.0, 0.0, 0.0,
     0x1.89d149eb0a395p-373, 0.0, 0x1.5ebfa6db0ff1ap-994, 0x1.724f460115279p-554, 0.0,
     0x1.c36016ef17a12p-846, 0.0, 0.0, 0x1.7f6d22382f0acp-126, 0x1.68dac9304a7b8p-424,
     0x1.06f1e5628aa5cp-932, 0.0, 0x1.7393b76b388bcp-309, 0x1.48e0c92342d0ap-277,
     0x1.052c002ae7d16p-130, 0x1.31fd22b896faep-338, 0.0, 0x1.a66238843ce11p-996,
     0x1.53a3abf2899afp-958, 0.0, 0x1.ad1f00ab98b46p-1017, 0x1.9a2d0a5a2d2ddp-517,
     0.0, 0x1.e8aa30fb1e6b5p-199, 0x1.7b372a75f96c6p-169, 0x1.e7dac2a0917bfp-77, 0.0,
     0x1.1e70cbe9cc2e4p-134, 0x1.3b2f963c3f3e7p-205, 0x1.aff96ae315c3p-613,
     0x1.f9e49adb3db0ap-1, 0.0, 0x1.7e6c4491f4b48p-30, 0.0, 0.0,
     0x1.bb1ad034c3912p-757, 0x1.4c5dadbcb7d7dp-202, 0.0, 0.0, 0.0, 0.0,
     0x1.bd9cc8a5f41bap-160, 0x1.4429b802a1dc1p-706, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2ea403b9deebp-159, 0.0, 0x1.e94d408c51fcep-898, 0.0, 0.0, 0.0,
     0x1.25bcf35e8b246p-614, 0.0, 0.0, 0x1.9aa9a8b7f5b25p-680, 0.0, 0.0,
     0x1.5ab5d0671c882p-446, 0x1.18da9ead502e2p-855, 0.0, 0x1.7bdbd54ee5589p-649, 0.0,
     0.0, 0x1.faca0e8c62e95p-20, 0x1.9330c58dd4c9bp-870, 0.0, 0.0, 0.0,
     0x1.b7e8507c8cf03p-190, 0.0, 0x1.da53bb5d3278cp-218, 0.0, 0x1.3989adc2c123ep-314,
     0x1.689ea0f8cd66cp-830, 0x1.67c1b745cb1e8p-144, 0.0, 0x1.e0c8e5d14d312p-992,
     0x1.b4a734a01a825p-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.678fdf8dd55e1p-365, 0.0,
     0x1.52e473b8d642cp-355, 0.0, 0x1.f0a286cf2f6c4p-544, 0x1.e1c1a12988527p-514,
     0x1.381c95569fad7p-714, 0.0, 0x1.b1b74905a3c02p-633, 0x1.a62b0d8fca1f3p-680, 0.0,
     0x1.b8ef92b4f09a5p-52, 0.0, 0.0, 0x1.9a4d83f38482fp-163, 0x1.21c16884ec22p-890,
     0x1.5d1aed7492478p-136, 0.0, 0x1.42be334522364p-330, 0.0, 0.0,
     0x1.93410133fa975p-628, 0.0, 0x1.6ce565ff84118p-634, 0.0, 0x1.70027920d3ce6p-114,
     0x1.c50bfa07f9ae6p-354, 0.0, 0.0, 0x1.9f3a9907c34b8p-766, 0.0, 0.0, 0.0, 0.0,
     0x1.13488c851df8fp-454, 0x1.dcb84650758e3p-166, 0x1.568f4b5ab58e9p-942,
     0x1.bd7fc3086bf0fp-994, 0x1.f7938c3e0f3d4p-162, 0x1.f0db516c5dde8p-410,
     0x1.e4785cd52634dp-956, 0.0, 0x1.ea88900dc147bp-709, 0x1.dfc1a325934d3p-433,
     0x1.0c54a33534d01p-763, 0x1.6365d81e1e6fdp-79, 0.0, 0x1.991997c619619p-548, 0.0,
     0.0, 0x1.fb950389fa357p-802, 0.0, 0.0, 0.0, 0.0, 0x1.0a75770b9fbd1p-140, 0.0,
     0x1.31976819008dap-455, 0x1.b7658492aafadp-383, 0.0, 0.0, 0.0,
     0x1.95f2d02d07c9bp-254, 0.0, 0x1.add4755370562p-781, 0.0, 0x1.d50d88ad69107p-848,
     0x1.b7f059b2060d3p-537, 0.0, 0x1.6d3ad1ee51ca9p-812, 0.0, 0x1.9e63634ed35fcp-581,
     0x1.562b22edfba98p-574, 0.0, 0.0, 0x1.8577390e8be79p-160, 0x1.e010219910e8ap-840,
     0x1.e501a45b3d455p-166, 0.0, 0x1.62b4f8614f434p-783, 0x1.c0129a91fb2f3p-564, 0.0,
     0x1.4717ca6c3f772p-166, 0x1.54b1040ad0baep-992, 0x1.9d7185f171465p-458, 0.0,
     0x1.bcedd9145d827p-709, 0.0, 0.0, 0.0, 0x1.6a4a10da611a8p-730, 0.0, 0.0,
     0x1.b9db311e005d9p-787, 0x1.f6dc8336f2e5ep-405, 0x1.7b60727dafb6fp-999, 0.0, 0.0,
     0x1.ab2bd48ceaeacp-457, 0.0, 0x1.a492903b75841p-364, 0x1.a0f6bb57c8ff1p-517, 0.0,
     0x1.9538a88842442p-390, 0x1.9e07d739623ddp-984, 0x1.0986086b8aafcp-716, 0.0,
     0x1.759959e9ef953p-417, 0x1.2573bd2c644f6p-472, 0.0, 0x1.e3daf54016476p-215,
     0x1.be088ebe54eap-504, 0x1.236cc95f92a55p-318, 0x1.a50a7ec10ab55p-255,
     0x1.d455bb92038dbp-754, 0.0, 0.0, 0.0, 0x1.7a7557797b71dp-632,
     0x1.c4443de7a5893p-765, 0x1.a339abdbd5684p-654, 0x1.db50ca4915833p-632, 0.0, 0.0,
     0.0, 0.0, 0x1.5798643c67a13p-62, 0x1.f8f1ed4a297e9p-909, 0x1.87142516e33acp-729,
     0x1.e3bc0c06d7832p-558, 0x1.06ad830e11a52p-140, 0x1.b6868eb3dc2a3p-940, 0.0,
     0x1.becb7f8bbbf2dp-495, 0.0, 0.0, 0.0, 0x1.d738b33580e4ap-772, 0.0,
     0x1.f01af45e38151p-937, 0x1.5690cdaac5e0fp-780, 0.0, 0.0, 0.0,
     0x1.baa364f80fd0cp-364, 0.0, 0.0, 0.0, 0.0, 0x1.3a36d7025096fp-575, 0.0, 0.0,
     0.0, 0x1.9cbb0be74963dp-390, 0x1.810fce5265567p-87, 0x1.149affbf2f8dap-322, 0.0,
     0.0, 0x1.ca3377ba98d41p-554, 0.0, 0x1.1cb7166862e9dp-236, 0.0,
     0x1.f6850d32ce703p-719, 0x1.57e4ce6989135p-233, 0.0, 0.0, 0x1.449d70be9ab5cp-709,
     0.0, 0.0, 0x1.3ca497c037d8cp-644, 0x1.804cf8a6132c7p-313, 0x1.f18ae180f8e7dp-316,
     0.0, 0x1.5732bb9e27e7dp-555, 0x1.c47a42d7930cfp-358, 0.0, 0x1.8e36dfd06c882p-245,
     0x1.01d6078aa8d1ep-625, 0x1.2067177ea35b2p-503, 0x1.a706deb1ee729p-421, 0.0,
     0x1.7e4920abb810cp-414, 0x1.c04e7c0512012p-357, 0x1.db6004cc3ee6dp-582, 0.0,
     0x1.3f222812bb20bp-908, 0x1.978d40c1364e3p-608, 0.0, 0.0, 0x1.4e8af18ec9b23p-406,
     0.0, 0.0, 0x1.9a49d9d897081p-536, 0.0, 0x1.0c6bc7eba43d2p-336, 0.0, 0.0,
     0x1.c7a4f1c05d404p-585, 0x1.020020d007ae9p-590, 0x1.55a64a1b8af9cp-432, 0.0,
     0x1.3bc9b7fdc12bdp-578, 0.0, 0x1.3eb26ccfe65fp-557, 0x1.89d4b8da84a98p-493, 0.0,
     0.0, 0.0, 0x1.1e31d9c0ac63bp-90, 0.0, 0x1.8a821c941d98p-500,
     0x1.f7f12c528e606p-739, 0x1.a5e293f8ed062p-56, 0x1.8e6331a8d62e5p-584,
     0x1.4a360e48d9938p-800, 0.0, 0x1.f3ce552603ce9p-33, 0x1.6cb395d345e9dp-614, 0.0,
     0.0, 0x1.f3e8efa4dc9dp-628, 0.0, 0.0, 0x1.ab6ba60921805p-114, 0.0,
     0x1.736a98d97a3adp-688, 0.0, 0x1.e9fd74b5ec16ap-899, 0x1.c54d5d886aac6p-584,
     0x1.ff7706c19c89ep-432, 0.0, 0.0, 0x1.00dab14e3b32ap-48, 0.0, 0.0,
     0x1.640b8907dad88p-871, 0.0, 0.0, 0.0, 0x1.65ea23c9d8a77p-511, 0.0, 0.0, 0.0,
     0x1.e0d8bfc5d618p-56, 0.0, 0.0, 0x1.5bd5ed5dea95bp-501, 0.0, 0.0,
     0x1.e6b306256f8aep-518, 0x1.ef8037db68a2ep-795, 0.0, 0x1.e0be86671f04bp-599, 0.0,
     0x1.1966378764956p-367, 0x1.27a9eebd941c6p-678, 0x1.2241167834f52p-669, 0.0,
     0x1.891560997a638p-502, 0.0, 0x1.404e79816b6cbp-687, 0x1.edaf6aaecf9e8p-104, 0.0,
     0.0, 0x1.e894e01e6ad66p-100, 0x1.2bb33c90ffe3bp-874, 0.0, 0.0,
     0x1.62c5082db0a6dp-385, 0x1.5dd1527068cc9p-116, 0.0, 0x1.7b6f05b81f5a6p-355, 0.0,
     0x1.044f5f585afc6p-608, 0.0, 0x1.cab29e3f4b1cfp-448, 0.0, 0.0, 0.0,
     0x1.eaff272ed62ccp-558, 0x1.bd05918d45562p-770, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a46647729695p-459, 0.0, 0x1.1163ce88fcce6p-30, 0x1.eaa4615a58eb8p-938, 0.0,
     0.0, 0x1.27dcfb894099p-557, 0.0, 0x1.b6facf8d7ab58p-852, 0.0,
     0x1.397305edda44fp-420, 0x1.d77246560e666p-647, 0x1.af9dca6d7a946p-72, 0.0,
     0x1.da018b36cc23cp-488, 0x1.8de05e0858ba2p-92, 0.0, 0x1.9b6a96f914898p-806,
     0x1.d436b9cff9f64p-478, 0x1.62dc11872067bp-373, 0x1.b4b3e034c31d9p-753, 0.0,
     0x1.0ca91aed71bb5p-7, 0.0, 0.0, 0x1.e2e7b23554e45p-266, 0x1.e73b88be2235ep-308,
     0x1.feb97c59a7dp-717, 0.0, 0x1.a410109942349p-226, 0x1.47b56c433a307p-96,
     0x1.0ffe75a7e95d9p-405, 0x1.62e815f896c81p-870, 0.0, 0x1.221caf1cb8d89p-190, 0.0,
     0x1.8f1eae137a8c2p-168, 0x1.153991f6972b1p-103, 0x1.276d240bddb95p-648, 0.0,
     0x1.844e78a47d522p-360, 0.0, 0x1.51acf897cf2bbp-587, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5a53f9548b13cp-388, 0x1.14c22bb0f89fp-964, 0.0, 0.0,
     0x1.b363e27fb05c5p-58, 0x1.bdea8fc19fa2p-18, 0.0, 0.0, 0x1.415d72c8abfb1p-440,
     0x1.cf81994ef2ed9p-932, 0x1.fad9a19bc0f72p-312, 0.0, 0x1.ddc4e4065386ap-228,
     0x1.d415b1efba6ebp-443, 0.0, 0.0
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
            tmp1 = Sleef_finz_rintd1_purecfma(tmp0);
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
    printf("Sleef_finz_rintd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_rintd1_purecfma bench acc %la\n", global_bench_acc);
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
