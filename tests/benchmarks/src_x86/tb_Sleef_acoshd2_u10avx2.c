/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshd2_u10avx2128.c --function Sleef_acoshd2_u10avx2128 \
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
     0.0, 0x1.be20895421c1ap-845, 0.0, 0.0, 0.0, 0.0, 0x1.6ee8843136b7bp-967, 0.0,
     0x1.db58bdc5666e4p-987, 0.0, 0.0, 0x1.780b08bab89adp-45, 0.0,
     0x1.fb041922d55dp-747, 0.0, 0x1.dbfdb523a1af2p-12, 0x1.4efecc157f5e5p-447,
     0x1.4d2394336a1bcp-72, 0x1.34da881884912p-838, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7bdb2698255b5p-308, 0x1.36e94f205d3b7p-429, 0.0, 0x1.403d93f10a09bp-804,
     0x1.5030b8b590e25p-820, 0x1.c4baa6147d9dfp-526, 0x1.e797db943d3f6p-24,
     0x1.e051d5adb97bdp-179, 0.0, 0x1.841d20c358b9bp-192, 0x1.887b924048fdep-1000,
     0x1.0b474dba8a6eap-577, 0.0, 0x1.de081108ef76fp-885, 0x1.fc59552890bcdp-848,
     0x1.3a68d5013ef8ep-242, 0.0, 0x1.89fd3db1511e3p-844, 0x1.72701e312a3c5p-783, 0.0,
     0x1.0f597554b5e84p-510, 0.0, 0x1.5c7569c27e2c7p-867, 0.0, 0.0,
     0x1.d18cd16ec41eap-168, 0.0, 0.0, 0.0, 0x1.b86d6d0d91e2ap-751,
     0x1.d5b8abe0fe227p-209, 0x1.0b2fc721942e1p-337, 0.0, 0x1.4efec07ea3e96p-635, 0.0,
     0.0, 0.0, 0x1.15a7c98bd331fp-944, 0x1.4a229150bca9p-36, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df3eeeec5fb5ap-722, 0.0, 0.0, 0.0, 0x1.1ac4f37c08ecdp-512,
     0x1.c0418ecfe578ep-830, 0.0, 0x1.7314b03a72657p-402, 0.0, 0.0, 0.0,
     0x1.1358af14b4518p-673, 0x1.f798b10299bdep-259, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af450ead4792ap-964, 0.0, 0.0, 0.0, 0.0, 0x1.2857f2eb1d95bp-224,
     0x1.404c51296a17dp-1014, 0x1.cccaf1b67f75bp-252, 0x1.368f4637de2bfp-729,
     0x1.2ea0bab63eb0cp-47, 0x1.901ecb27c8e3bp-703, 0x1.7108fb2ab2677p-503,
     0x1.03d0afe2dc521p-385, 0.0, 0x1.bcbc0d905c50bp-470, 0x1.1288393e2e38dp-204, 0.0,
     0.0, 0x1.d1df925473b7dp-541, 0.0, 0.0, 0.0, 0.0, 0x1.d6fbd630613afp-530, 0.0,
     0x1.36e3ab44d96f5p-331, 0.0, 0.0, 0.0, 0.0, 0x1.1dece1037f513p-156, 0.0, 0.0,
     0x1.2800b18a6a356p-827, 0.0, 0x1.135e4559a4ffdp-871, 0x1.d3e1fa53f1afep-660,
     0x1.0b5cf9108a089p-472, 0x1.91a9c53f9f77bp-780, 0x1.260d92af99c1dp-54,
     0x1.b73a4141aeb95p-89, 0x1.fbcae4daea4d9p-492, 0.0, 0x1.d783017dd0f65p-698, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.19a9fc23f555cp-553, 0x1.2b2e75951af95p-709, 0.0, 0.0,
     0x1.b5878a3591819p-938, 0x1.ca72357b66a5dp-372, 0x1.61fb88a2917e7p-1011,
     0x1.8ea90d0f3b07p-285, 0.0, 0.0, 0.0, 0x1.36e4d07a12ap-935, 0.0, 0.0,
     0x1.1c739fec79118p-669, 0.0, 0.0, 0.0, 0.0, 0x1.6fd57538aed39p-269,
     0x1.5f458ec77302bp-681, 0x1.f5d1f85f82d04p-540, 0x1.71cd70b122763p-593, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15687256eef5ep-597, 0x1.ecdb1ae9cc332p-230,
     0x1.c1af6c16a623ap-862, 0.0, 0.0, 0x1.9e37e81f21eb1p-898, 0x1.d718a4584a239p-420,
     0.0, 0.0, 0.0, 0x1.44666d9f4c7e8p-753, 0x1.860abfdce7e86p-128, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fe0ef3a6b79ep-893, 0.0, 0x1.26b063b7b24ep-324,
     0x1.81971e238d589p-917, 0x1.4e8ce9dab36eap-882, 0x1.ceb7a6f6fe58dp-924,
     0x1.d5d4c5dd51d01p-368, 0x1.ad5097e2dea08p-893, 0.0, 0x1.8d5061f25f1b9p-777, 0.0,
     0x1.ad47153947249p-566, 0.0, 0.0, 0x1.fcf960a33fb1fp-546, 0.0, 0.0, 0.0,
     0x1.5740f7fc989f2p-41, 0x1.90ed5929adb39p-873, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.019648de838cbp-7, 0x1.8107ffafa7eb7p-597,
     0x1.4db2e8fdbce75p-550, 0.0, 0x1.d85a363d5b90ap-152, 0.0, 0.0,
     0x1.044fc5700bd1ap-921, 0.0, 0.0, 0x1.62d6f0da372dbp-679, 0.0, 0.0,
     0x1.844264b814666p-570, 0x1.01729dcd0046ep-509, 0.0, 0x1.07e6121c4e88ap-348, 0.0,
     0.0, 0x1.aeb3a4f750912p-171, 0x1.3d124221d119fp-463, 0x1.02feb380263f1p-125, 0.0,
     0.0, 0.0, 0x1.3bb2bf783f598p-738, 0x1.aa05d737ccebfp-584, 0x1.4f65383d688e6p-351,
     0.0, 0x1.bd90e8d8eddabp-918, 0x1.e532cf80edc07p-322, 0.0, 0x1.ef9f7405ea529p-498,
     0x1.d8dbac21c3a41p-474, 0x1.614d3ee185e9ap-327, 0x1.faa1656be9bd4p-314,
     0x1.fc04d632b498ep-841, 0x1.8ed1613e04d72p-723, 0.0, 0.0, 0x1.60a88fa927209p-798,
     0x1.be4ddf8adcc2fp-961, 0x1.0d15435920fc8p-739, 0.0, 0x1.7775010aef23ep-789,
     0x1.9d39b1dee7deep-65, 0x1.8970776223f4bp-10, 0x1.f7577a7b3ba0bp-828,
     0x1.aa9e24dd9c93ap-147, 0x1.9e8396bd2d795p-556, 0x1.1aa090cf8a489p-502, 0.0,
     0x1.52c92ea54c0bbp-519, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ac270d1847c8p-61,
     0x1.85a75d3d50d25p-218, 0x1.df37b6694b8f4p-687, 0.0, 0x1.0191ee6961ab9p-215,
     0x1.4f1ca702f19ap-97, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fcc14b5228e6p-427,
     0x1.2f0b4a65dc575p-930, 0x1.36a8d19a8e726p-435, 0x1.40d97f91b9ed3p-803, 0.0,
     0x1.d80b3c789779bp-760, 0.0, 0x1.319ab23915a79p-616, 0x1.20bf2d1ebe326p-615,
     0x1.d7b477f983fc8p-855, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fef0949b259eep-297, 0.0,
     0.0, 0x1.eea9512c58b95p-180, 0.0, 0x1.31913075dcedcp-464, 0.0, 0.0, 0.0,
     0x1.9f4f47962f198p-785, 0x1.fcb5a119e0719p-6, 0.0, 0x1.1676ec3ffa22dp-696,
     0x1.08c5023ec0696p-424, 0.0, 0.0, 0x1.5c31ab0ef69d3p-1006,
     0x1.8573e9cd36c79p-565, 0.0, 0x1.cead7175a041cp-741, 0.0, 0.0,
     0x1.a6c29ed4401ffp-337, 0x1.5a3929f64108p-760, 0x1.c56b659413e52p-967, 0.0, 0.0,
     0x1.bf337798491c7p-484, 0.0, 0x1.846bd4285a78fp-951, 0.0, 0.0,
     0x1.3eef684e8520bp-34, 0.0, 0x1.e0f2696a8fabbp-606, 0.0, 0x1.7d8da05a378fcp-198,
     0.0, 0.0, 0x1.b2ec8e05fa099p-169, 0x1.4a27eaa0aa44p-386, 0.0, 0.0,
     0x1.54ba3e52b1951p-906, 0.0, 0.0, 0x1.5e47ef019d838p-228, 0x1.48de44b279adp-860,
     0x1.534e37d029708p-780, 0.0, 0.0, 0.0, 0.0, 0x1.59c0ccbf3a6cfp-100, 0.0,
     0x1.436a6e07e4aeep-154, 0.0, 0.0, 0.0, 0x1.94eb2573f2632p-504,
     0x1.df4dc495eac81p-505, 0.0, 0x1.a19594caa32ddp-614, 0x1.1f1c8260ba4e6p-556,
     0x1.0f540318464c9p-844, 0.0, 0.0, 0.0, 0x1.43405d99a0451p-667,
     0x1.bb397036b32b5p-844, 0x1.66279605f6647p-113, 0.0, 0x1.ec527ada229bfp-546,
     0x1.9815de38f85b6p-811, 0.0, 0.0, 0.0, 0x1.001dafdcf68f4p-396,
     0x1.650c023a4399bp-170, 0x1.cd722cce03573p-213, 0.0, 0x1.7b203eb4fefdp-461,
     0x1.1ffb5350c83e7p-611, 0x1.de0d34dbe8588p-935, 0x1.d17a15ff7e95fp-351,
     0x1.47a732e00e79ep-118, 0x1.1ec10d3caa8dp-710, 0x1.9a059ea3d75bep-367,
     0x1.108b765ff1702p-800, 0x1.22c26a7ef04aep-295, 0x1.89e46523af937p-69, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00a0b2b4898fep-474, 0x1.bf8a3bebc408dp-572,
     0x1.3ae4ebe1f237p-303, 0x1.df4e2f02afa7bp-735, 0x1.43ff78ae415c1p-433,
     0x1.0b7d18e8b9e0dp-628, 0.0, 0x1.4dbecd493de92p-854, 0x1.ac8d83aec34ecp-614,
     0x1.e5cf345e4f8d8p-849, 0.0, 0x1.55a735a7fa18bp-74, 0x1.c26e18d17fc03p-27, 0.0,
     0x1.8b497f292c41dp-856, 0x1.6aee6387889d2p-791, 0x1.3e4111a1746fep-945, 0.0,
     0x1.9b670eb13fc28p-342, 0.0, 0.0, 0.0, 0.0, 0x1.3e43f6906dbbdp-802,
     0x1.25a3df7799e17p-834, 0x1.6b55fee1b0e6ep-166, 0x1.a4a44c43377f3p-360,
     0x1.901a6180fcb63p-763, 0.0, 0.0, 0x1.bd260a707a93cp-432, 0x1.583fd10e75811p-698,
     0x1.d38ab567e2f79p-424, 0.0, 0.0, 0.0, 0.0, 0x1.73f8956cabb5dp-286,
     0x1.7d737810ccc24p-741, 0x1.060c170f05966p-351, 0.0, 0x1.9133623582121p-183,
     0x1.8ad9e51661227p-289, 0x1.6bd7a6be93ccap-744, 0.0, 0x1.18c768aad7ee7p-545, 0.0,
     0.0, 0.0, 0x1.d2a299683143p-42, 0.0, 0x1.0fa24af396dc4p-829,
     0x1.9333171c0b0fap-317, 0x1.0ed83dad9a8e8p-984, 0x1.988d90259a6f6p-3,
     0x1.1dc09a314e78dp-357, 0x1.f06586b72586ep-255, 0x1.5f2a55ffd6ea5p-867, 0.0,
     0x1.1365c24a7dff4p-174, 0x1.a0f8807ae33eap-979, 0.0, 0.0, 0x1.c6d144b1977cep-662,
     0.0, 0x1.b68e04cd3f957p-10, 0x1.d77e6860a8541p-357, 0x1.583552d1ac20dp-131,
     0x1.e10a2256b12e4p-1022, 0x1.37671dd8d2167p-519, 0x1.22b92d7409d4dp-927,
     0x1.dfdc5cb18c342p-646, 0.0, 0.0, 0.0, 0x1.b08f7ff19e4ddp-159,
     0x1.25745feee448bp-472, 0x1.9c3a479c3fd06p-780, 0.0, 0x1.c096c9a50992p-1010,
     0x1.66c3a9b72c27fp-632, 0x1.7dc87aab1a102p-336, 0.0, 0x1.21f9f95ecc49p-696,
     0x1.554324ab3c91bp-974, 0x1.4a5c7f4c86a2dp-154, 0x1.5a094944b0037p-320, 0.0,
     0x1.b99b0a6b91593p-201, 0.0, 0x1.5067451c2b10ap-67, 0x1.3d959f4347382p-49,
     0x1.b6cf39bcdcd03p-710, 0x1.27e50b629e7f8p-888, 0.0, 0x1.6bafe107c87fbp-694, 0.0,
     0.0, 0x1p0, 0x1.c8eaa45e1cd8bp-480, 0x1.2a41ec56d99bcp-666, 0.0, 0.0,
     0x1.6acd403bc9fe3p-314, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a985159142a3p-636,
     0.0, 0.0, 0x1.a5a4398cea77ap-969, 0x1.e6418ffc605fp-265, 0x1.ccae4ca4654a2p-265,
     0x1.d604e28a4db8bp-951, 0.0, 0.0, 0x1.39939abc57feap-363, 0x1.87b9638e8fe26p-365,
     0x1.c059af73f5bb1p-60, 0.0, 0x1.90c52b3f0cb2cp-406, 0x1.96e4513744358p-110,
     0x1.86ab938725714p-205, 0.0, 0.0, 0x1.a5548bae3f8cfp-232, 0.0, 0.0,
     0x1.ab3dd0d9960f8p-176, 0x1.d592df5e18712p-359, 0x1.4af941c81979ep-363,
     0x1.5cf8e600450b6p-159, 0.0, 0.0, 0.0, 0x1.66e53fd38e3dfp-329,
     0x1.c045c6abe66cap-67, 0x1.d1695f9709badp-136, 0.0, 0x1.67b1c2283c16p-531,
     0x1.99fbf6a8f4ca6p-1005, 0x1.a878919db8d8ep-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97b963ec44f2ap-999, 0.0, 0x1.beffeadf5dfb3p-904, 0.0, 0x1.de825169bf465p-980,
     0.0, 0.0, 0.0, 0.0, 0x1.9219f5e98ff77p-213, 0.0, 0x1.6cb0f2b572a9fp-47, 0.0, 0.0,
     0.0, 0.0, 0x1.6c5cda5e9ddb2p-156, 0x1.1aa5c7abd0731p-944, 0.0,
     0x1.b30d6c791d23bp-30, 0x1.d868696978f9ep-296, 0x1.5a00be05313fap-547,
     0x1.c0483e5be0015p-285, 0x1.791a8b5095de8p-604, 0x1.fea4b2574ad29p-348, 0.0, 0.0,
     0x1.e0263a28f875cp-48, 0x1.7f42eaf08b9d1p-243, 0x1.a1ea691de3d8bp-217,
     0x1.4fb9e0823ee54p-928, 0.0, 0x1.bebd85b6915b6p-268, 0.0, 0.0, 0.0,
     0x1.925c268f757bp-692, 0x1.06f5d7c0fd70ep-982, 0.0, 0x1.067757067ed68p-957,
     0x1.876415fa18fc6p-834, 0x1.107b96bf0a8d4p-508, 0x1.c84f60d42648bp-95, 0.0,
     0x1.5a932315e5cf3p-514, 0x1.66ff6d18da0e6p-122, 0.0, 0x1.49822bdc7411fp-368,
     0x1.671e0884408bcp-604, 0.0, 0x1.81ae352f4618dp-187, 0.0, 0.0,
     0x1.9b0a7fb005f58p-67, 0x1.195540cce83f4p-581, 0x1.b816bdaec436bp-487, 0.0, 0.0,
     0x1.914e488b06f4ep-157, 0x1.dab0ce696701ap-342, 0x1.2d1d509a82f76p-470,
     0x1.8051f9e5aaecbp-596, 0x1.d5cee62650f71p-232, 0x1.0362a019027c3p-954,
     0x1.5a45682e76b9ep-497, 0.0, 0.0, 0x1.ad8df91ad5cb3p-983, 0x1.dd31eff4eef27p-993,
     0.0, 0x1.0218ec809186bp-421, 0x1.df0951a51f3f2p-210, 0x1.b083e2eb65f8dp-726,
     0x1.c22a4960eb4dep-905, 0.0, 0.0, 0x1.9ad5fc3492aefp-185, 0x1.34d7cc804d693p-993,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d6d7f452c98ap-405, 0.0, 0.0, 0x1.892a508e3a59bp-944,
     0x1.30ca7bf2c8c39p-403, 0x1.be10a7f61b9b2p-622, 0.0, 0x1.ee1fbd07311ep-251,
     0x1.37bc7ca954adbp-291, 0x1.78764e1acc4e7p-619, 0.0, 0x1.54ee7ec647cp-299, 0.0,
     0.0, 0.0, 0.0, 0x1.e0b3f3983d885p-650, 0.0, 0.0, 0x1.64d64598cef88p-77, 0.0,
     0x1.c2c031fca38efp-390, 0.0, 0x1.720c72c03366dp-722, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.628f9c22ad0f3p-322, 0.0, 0.0, 0.0, 0x1.76f989e88b7f3p-801, 0.0,
     0x1.114109e53ebbdp-362, 0x1.809591a9695aep-780, 0.0, 0x1.0a058354c39bbp-413, 0.0,
     0.0, 0x1.48e58d516ca97p-765, 0.0, 0x1.22bbb72f48296p-786, 0.0,
     0x1.8aa06b6846002p-628, 0.0, 0x1.30c62a714f803p-746, 0x1.43f3c094e4286p-166, 0.0,
     0.0, 0x1.c05ce63f60dd3p-540, 0.0, 0x1.50cac7780ea71p-634, 0x1.e19ba07204f72p-661,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3747e0b0c921p-675, 0.0, 0x1.201aa2c9f3e7dp-977, 0.0,
     0.0, 0x1.f9aa0ff42204dp-75, 0.0, 0.0, 0x1.2f634e1077c7fp-711,
     0x1.fa57be132df16p-992, 0.0, 0x1.9621b3ed75335p-781, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.021dffc44168ap-914, 0.0, 0.0, 0x1.7a8e3b8227bfdp-61, 0x1.e7bc7c7e6fd6ap-984,
     0x1.e37e05b0f8007p-442, 0.0, 0.0, 0.0, 0x1.62ffcc67954a9p-131,
     0x1.757674a034636p-733, 0x1.893412c7b0b09p-561, 0.0, 0x1.af575af00dc73p-177,
     0x1.366cfdf17c998p-702, 0.0, 0x1.b1903db25ec17p-421, 0.0, 0x1.984bf9bfb17d2p-327,
     0x1.25c95d5ec18d3p-258, 0.0, 0.0, 0x1.a640504af880ap-355, 0.0, 0.0,
     0x1.5efe7f5a54dc4p-601, 0x1.d227eafb90b49p-115, 0x1.fb0f1a17e4eadp-94, 0.0,
     0x1.a785335c8384fp-520, 0x1.503054e5faa2bp-461, 0x1.35ce82e92ea8ap-674, 0.0,
     0x1.b618b05369d14p-956, 0x1.287958626d5eap-791, 0.0, 0x1.49834d29402e4p-564,
     0x1.38a6d893cb109p-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cc8d792b4b9d5p-79, 0.0,
     0x1.c18f6a552c936p-905, 0.0, 0.0, 0x1.0b101b058c62p-545, 0x1.9b5354a7538afp-784,
     0.0, 0.0, 0x1.336c2ecd462bbp-294, 0x1.7d8613958c9aep-568, 0.0,
     0x1.ebf54d9c44a71p-682, 0x1.aa7a11e634cd6p-855, 0x1.98250211dc607p-206, 0.0,
     0x1.e591275749c97p-789, 0.0, 0.0, 0x1.f9f69b4098595p-711, 0x1.774103d383045p-612,
     0x1.407230f3976e9p-1003, 0x1.f1e76d9ae8903p-385, 0.0, 0x1.4cc021de5827fp-104,
     0x1.4cc14b5541a73p-780, 0.0, 0.0, 0x1.753796bbc942p-841, 0x1.8e1f2c5bdee5fp-495,
     0.0, 0x1.a1563fef67b3bp-913, 0x1.8d1a44c9919efp-670, 0x1.7d6930877bccp-705,
     0x1.3ece4a203d1c1p-289, 0.0, 0x1.814345641f106p-108, 0x1.a0f14952deb1ep-555, 0.0,
     0.0, 0.0, 0x1.a5792bce39cfbp-22, 0x1.8be2bfcc818eep-580, 0x1.aea0472abe1fdp-239,
     0x1.6acbf2feda61fp-61, 0x1.0a3ff5be5164cp-905, 0.0, 0x1.65c0fefa38968p-698, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec99e573a786dp-859, 0.0, 0.0,
     0x1.65f71433f24e5p-789, 0x1.46a4b6390681ep-547, 0x1.77951175d9444p-461, 0.0,
     0x1.eaefffa8a20bep-723, 0.0, 0.0, 0.0, 0x1.358af09a6acbcp-297,
     0x1.9bf59f42f3b44p-494, 0x1.3479d6b574577p-979, 0x1.9d08946b90f19p-158, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fe46836197bbfp-765, 0.0, 0.0, 0.0, 0.0,
     0x1.b3d9a3f3f236fp-109, 0.0, 0.0, 0x1.5eb92abc132e3p-294, 0x1.83314fb9ca57p-125,
     0.0, 0x1.cbc25290e2a03p-192, 0.0, 0.0, 0x1.7c628268684b8p-645,
     0x1.61f61ee6897a4p-939, 0x1.438f69bc37ebp-974, 0x1.1b27b32d20e83p-95, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e9ab2a8ba9b49p-828, 0.0, 0x1.d47f52123a7c9p-348, 0.0,
     0.0, 0.0, 0x1.ea7330f2674e8p-558, 0.0, 0x1.24459bb008d87p-347, 0.0, 0.0,
     0x1.a6933778cd3a5p-382, 0x1.58be109991637p-595, 0x1.14057eedb2dc2p-276,
     0x1.f7f2debc52bf2p-414, 0.0, 0.0, 0.0, 0x1.dcf55fac104f3p-124, 0.0,
     0x1.6f1c00034d786p-760, 0x1.4d6e87ddba5bep-316, 0.0, 0x1.2df5d5dbc0adp-1005, 0.0,
     0.0, 0.0, 0.0, 0x1.48806a2a6e435p-215, 0x1.682ae57080ecdp-754, 0.0,
     0x1.8a63e4ba5db61p-569, 0x1.32445096dd37p-209, 0x1.5ab130715a75p-846,
     0x1.8fd9e3714fe6ap-485, 0x1.6d61db5a8fa4p-145, 0.0, 0x1.45b398187d68ep-962,
     0x1.f5e5d2fe6d35ap-1010, 0.0, 0x1.2e1b7c3d2673fp-817, 0x1.17d5a800f9a58p-680,
     0.0, 0.0, 0x1.1b2e7105a9eadp-290, 0x1.3c14cd22797e4p-134, 0.0, 0.0, 0.0, 0.0,
     0x1.34550dd031961p-999, 0x1.a5bce57fdc247p-270, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c6bd58e4066a3p-838, 0.0, 0.0, 0.0, 0.0, 0x1.5ae289e6bc3fep-972, 0.0,
     0x1.35c7eec5419a9p-638, 0x1.3ed993ff1c75bp-751, 0.0, 0x1.0b5301fd24cfap-466, 0.0,
     0.0, 0.0, 0x1.0f412c3e04152p-154, 0.0, 0x1.c64ad3fcd073p-45, 0.0,
     0x1.3302e160d48dep-397, 0.0, 0.0, 0.0, 0x1.eb27f749f08c9p-531, 0.0, 0.0,
     0x1.83cb423280f7ep-868, 0.0, 0x1.c16667fe5978bp-881, 0.0, 0.0,
     0x1.327eda20843c9p-529, 0x1.b01b8286f86ddp-685, 0x1.dc4f8a878698dp-705,
     0x1.e678e317e5f18p-966, 0.0, 0x1.7ff12cc71296dp-998, 0.0, 0.0,
     0x1.34a4d269d9ee6p-683, 0.0, 0x1.54a18ad8c8e39p-322, 0x1.62e7c185ff791p-188, 0.0,
     0.0, 0x1.fde66af172f58p-1017, 0.0, 0x1.fbfc144a1048cp-239,
     0x1.1064bffc1df3ep-435, 0.0, 0.0, 0x1.1d493474f01e6p-362, 0.0,
     0x1.d33e4d9762d1ap-343, 0.0, 0.0, 0x1.3896a41a6aafp-640, 0.0, 0.0,
     0x1.faf20f49d1bbfp-75, 0x1.42edf29c5ae13p-262, 0x1.4d0e250425f8ep-830, 0.0, 0.0,
     0x1.a795b61c82af1p-338, 0x1.047ae76873365p-327, 0.0, 0x1.17d73276b4c88p-198,
     0x1.25c38a83b369fp-279, 0x1.05bba812fb2fp-33, 0x1.5cf770d69970fp-719, 0.0, 0.0,
     0x1.bd4cb20cd2315p-701, 0x1.796bf55736e26p-266, 0.0, 0.0, 0x1.1daad37dc309p-770,
     0.0, 0.0, 0x1.82c4d57840fe6p-306, 0.0, 0.0, 0x1.5d0860236afe6p-846,
     0x1.d6a04328ad2bcp-946, 0x1.4e7a7373a55c4p-946, 0x1.d18384b92dd7ep-507,
     0x1.698699bbe4ba3p-30, 0.0, 0x1.57c6e8a9d168ep-836, 0x1.bda48ae0216afp-345,
     0x1.78c0f789385b1p-648
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
            tmp1 = Sleef_acoshd2_u10avx2128(tmp0);
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
    printf("Sleef_acoshd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acoshd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
