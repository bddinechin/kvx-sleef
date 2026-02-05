/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd2_u10avx2128.c --function \
 *     Sleef_finz_coshd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.80cff188ac083p-690, 0.0, 0x1.8d239108e0a93p-462, 0x1.03cf2c35c6979p-711,
     0.0, 0.0, 0x1.d6cb4c8d5b581p-405, 0x1.f922ebf20bff1p-260, 0.0,
     0x1.f6d7c9b19d21ap-296, 0x1.291dfaef85733p-23, 0x1.774ecbca7327ap-577,
     0x1.301b00b311226p-470, 0.0, 0x1.0d3bb4bcbdefbp-680, 0x1.c03f5fc1b1b7cp-818,
     0x1.919748319bdbep-945, 0x1.e3d35843f3194p-550, 0.0, 0.0, 0x1.8251154472902p-879,
     0.0, 0.0, 0.0, 0x1.985fcf480f222p-914, 0.0, 0.0, 0x1.2ddcf48f4f353p-613, 0.0,
     0.0, 0.0, 0x1.3d9d5b25625adp-881, 0x1.301c4798fc0ep-987, 0x1.1a6018c5acfe6p-468,
     0x1.3e738adef6b8dp-475, 0x1.daaafdbb4faeap-570, 0.0, 0x1.d6d13a96d217dp-184, 0.0,
     0.0, 0x1.79eadcedde937p-657, 0.0, 0.0, 0.0, 0.0, 0x1.ebfb747d6ea0fp-125, 0.0,
     0x1.564c9fa8f5d2fp-321, 0x1.87d140058cbdcp-105, 0x1.6a7e1d2bd6ac5p-776,
     0x1.18617c089951fp-853, 0.0, 0x1.c1e71475ae6eap-816, 0.0, 0x1.f440365269005p-575,
     0x1.2bfed6d892e3ap-904, 0.0, 0.0, 0x1.856ff31610ebp-728, 0.0,
     0x1.da14862e48d95p-717, 0.0, 0x1.d7e0c01985b59p-922, 0x1.c60be7af78f8cp-352, 0.0,
     0.0, 0x1.058ec6d4a12a4p-577, 0.0, 0.0, 0.0, 0x1.b98658615897ep-236, 0.0, 0.0,
     0x1.228a7a6ff9cfcp-422, 0.0, 0.0, 0x1.96d512426aep-474, 0.0, 0.0, 0.0,
     0x1.d0b82996c2286p-370, 0x1.859f7ce16a408p-414, 0.0, 0.0, 0x1.7a061a9a7ce6p-1021,
     0x1.f13bba38314bap-187, 0x1.d2978454d5e27p-878, 0x1.f98ec181aea78p-501, 0.0, 0.0,
     0x1.e99f7cdfb8e0ep-120, 0.0, 0x1.959c758a19534p-206, 0.0, 0x1.0a33d73173c4fp-507,
     0x1.b3543d9a880eep-564, 0x1.780c9b4f896f4p-8, 0x1.531d36672bd33p-714, 0.0, 0.0,
     0x1.cc7e9edabcc58p-929, 0x1.2a8ee30b031cep-480, 0x1.c8addd6f751f6p-114,
     0x1.6a867b3586c26p-625, 0x1.5d88279524e44p-291, 0x1.2fbb63f092852p-397,
     0x1.ddbb60a181455p-61, 0.0, 0x1.e37e7e05cc417p-175, 0.0, 0.0, 0.0,
     0x1.394722d66c7ebp-590, 0x1.4a734a4e348ddp-219, 0.0, 0.0, 0.0,
     0x1.73fa88c608084p-653, 0.0, 0.0, 0x1.6256b1ff6a871p-981, 0x1.d46e8514de964p-136,
     0.0, 0.0, 0.0, 0x1.a88aab503dbf1p-440, 0x1.d27cc8795c93ap-583, 0.0,
     0x1.d3494007bdddbp-468, 0.0, 0x1.261434bf91e62p-918, 0.0, 0x1.2ecd634de2766p-373,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3fad0153302aep-404, 0.0, 0x1.6f5970df86813p-290,
     0x1.d58e1efffad29p-636, 0x1.54e34a73d0fa6p-246, 0x1.b62d4e6afdd1fp-974, 0.0, 0.0,
     0x1.42e6ba427ec13p-384, 0x1.49b4fb5fb09b7p-202, 0x1.087bd017f1fb7p-33, 0.0,
     0x1.7445569baee63p-65, 0.0, 0x1.cd3bffcc8fb03p-489, 0x1.4a2a9aad5885fp-639, 0.0,
     0x1.2b0c2a547aee1p-923, 0.0, 0x1.93b043063fb21p-881, 0.0, 0x1.7e930869964c9p-910,
     0x1.c143981120eb1p-902, 0.0, 0.0, 0.0, 0x1.2e8eef0f5e25p-480, 0.0,
     0x1.6a8baef7d22ep-424, 0x1.33d1e133c1c18p-553, 0.0, 0x1.dab82ce82bab6p-82,
     0x1.a8a3eeb7ed239p-697, 0x1.8eec7cb17a39bp-996, 0x1.2172eb4afa195p-288, 0.0, 0.0,
     0x1.41bd61201aa89p-15, 0.0, 0.0, 0.0, 0x1.a6b8554a926ecp-133, 0.0, 0.0,
     0x1.f95fe69982acdp-902, 0.0, 0.0, 0x1.73b42decfaeb2p-788, 0x1.359b2e744cdf9p-169,
     0x1.60b1a722934c7p-945, 0.0, 0x1.3433bb6ce2e94p-550, 0.0, 0.0, 0.0,
     0x1.8a817eeede26dp-280, 0.0, 0x1.92afe5da1326p-325, 0.0, 0x1.b712a7135ce05p-366,
     0x1.e607820984c99p-998, 0.0, 0x1.32d77447d86f6p-768, 0x1.1871bce93591ap-124, 0.0,
     0.0, 0x1.d97db86e9c657p-292, 0x1.041998651224cp-577, 0.0, 0x1.a8e3425361162p-223,
     0x1.87a9b499b0292p-132, 0.0, 0x1.9ca97a291cf64p-576, 0.0, 0.0,
     0x1.b8cf846f1f6e8p-986, 0x1.898db68975459p-56, 0.0, 0x1.33a5d48d7ffcdp-867,
     0x1.7efbbc0d98d47p-708, 0.0, 0.0, 0.0, 0x1.429a09e5fe4aap-458,
     0x1.58e8af1dd304dp-394, 0.0, 0x1.85f32555a75d7p-376, 0x1.2eb3bf1c4af68p-567,
     0x1.071b9865b231cp-8, 0.0, 0.0, 0.0, 0x1.1baa0c6ef883dp-69,
     0x1.0fcbdc3407087p-405, 0.0, 0.0, 0x1.c17753cd8f34p-650, 0.0, 0.0,
     0x1.38a161685ee5bp-633, 0x1.1898414c141e6p-438, 0x1.34205357176f7p-34,
     0x1.fd0d9b73702fp-221, 0x1.846b9ff271d78p-962, 0.0, 0.0, 0x1.a9bba9cbbf7aap-1016,
     0x1.be73fef27b46ap-496, 0x1.9acc751ac6b08p-317, 0.0, 0.0, 0x1.5f422d348f78bp-269,
     0.0, 0.0, 0x1p0, 0x1.edf6232f778d8p-965, 0.0, 0x1.d866aac3ee858p-752,
     0x1.dca18af2f6954p-528, 0x1.5eeaa3ff98774p-163, 0x1.98baeabc2b7cdp-668, 0.0,
     0x1.d0ddb6f83333cp-56, 0.0, 0.0, 0x1.9e56e0eff9b0fp-638, 0.0,
     0x1.bcde326c768a6p-970, 0.0, 0x1.b12132d8c67e2p-1014, 0.0,
     0x1.c8881b7fe263ap-628, 0x1.87ac98f8adcf9p-416, 0x1.71fee7ea7768p-211, 0.0,
     0x1.b7d8afec15d25p-197, 0.0, 0.0, 0x1.7e2eae0f41484p-259, 0.0,
     0x1.52d08475b8314p-910, 0x1.120cce8936003p-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8ea0e3f5f11fbp-835, 0x1.d771f98b7c9eap-542, 0x1.8de9cdc04439p-73,
     0x1.90588297c9412p-733, 0x1.7f175a545f02bp-341, 0.0, 0.0, 0.0,
     0x1.1e4e0a0ce625ep-532, 0.0, 0x1.5f3b4de033878p-928, 0.0, 0.0, 0.0,
     0x1.b040f196c3ff3p-202, 0.0, 0.0, 0x1.73b738a6d6cc8p-203, 0x1.ac89f45702178p-690,
     0.0, 0x1.54994e1094bap-671, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e2c774f95704p-919, 0.0,
     0x1.035fe3dddcb62p-668, 0x1.494b0adff8a58p-544, 0.0, 0x1.e88c7aab23b68p-164, 0.0,
     0.0, 0.0, 0x1.741d9e022b73bp-1003, 0x1.077c1b53f91aap-53, 0.0, 0.0,
     0x1.2205abcfdbf98p-724, 0x1.3ed88535f3093p-247, 0.0, 0x1.7fb41a12fa367p-529,
     0x1.757f785e3d66dp-410, 0x1.d16d352f9e292p-935, 0x1.a79284548e83cp-1009,
     0x1.7577190cec5fp-100, 0.0, 0x1.4970284420215p-258, 0.0, 0.0, 0.0,
     0x1.5d34ef4ef9346p-433, 0x1.19b7583dddd69p-421, 0.0, 0x1.7ab710a691d5bp-82, 0.0,
     0x1.f362edf54556ap-502, 0.0, 0.0, 0x1.ed13b81cdcd5bp-411, 0x1.4e7fb42bbc354p-781,
     0x1.d6657eae052b7p-93, 0.0, 0x1.6967dfc5c10e7p-203, 0.0, 0.0,
     0x1.17a9adae9d59ep-385, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0b219c0b150b4p-416, 0.0, 0x1.f266f48268d52p-337, 0.0,
     0x1.b1461f6842f62p-402, 0.0, 0.0, 0.0, 0x1.0217f08b8c188p-355,
     0x1.9c2985e8dc422p-294, 0.0, 0x1.b211a69f9271ap-586, 0x1.bc4f41357af13p-986, 0.0,
     0.0, 0x1.eb23e94bd6267p-791, 0.0, 0.0, 0x1.efd7c0bde10e3p-316,
     0x1.01644294b0f95p-207, 0.0, 0.0, 0.0, 0x1.32a316f1de32ap-899, 0.0,
     0x1.ccf4b6c52b603p-126, 0.0, 0x1.d9f5cf66ce175p-818, 0x1.bb931cdb8503p-797,
     0x1.3deb078efdd49p-895, 0.0, 0x1.fe85b3d759327p-170, 0.0,
     0x1.e4ed2b2f9e31ap-1019, 0.0, 0.0, 0.0, 0x1.edcad22b974adp-931, 0.0, 0.0,
     0x1.9c08a05ec23d6p-131, 0x1.433ba7c8cb32bp-183, 0.0, 0.0, 0.0,
     0x1.d02c769729118p-430, 0.0, 0x1.c42da700ea369p-977, 0x1.ded8c368e533dp-657,
     0x1.096e68f77c194p-958, 0x1.8cdd3e17cb6fep-118, 0.0, 0.0,
     0x1.025dba23de56dp-1010, 0.0, 0.0, 0.0, 0x1.618b2003b9936p-511,
     0x1.a311d6042fcdfp-444, 0x1.cfb13d74287dp-202, 0x1.f03cd5d56d528p-182, 0.0,
     0x1.27e37472a7eefp-489, 0x1.d1a6cce79e0a1p-839, 0.0, 0.0, 0x1.eb033b060aa0dp-520,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1867f19474ef4p-709, 0x1.d56f1ad2af9b3p-670, 0.0,
     0.0, 0x1.8d044769e2dacp-245, 0.0, 0x1.2c373342ad31ap-205, 0x1.95d6120b2cbe2p-51,
     0.0, 0.0, 0.0, 0x1.f779dc13144efp-437, 0.0, 0.0, 0.0, 0.0,
     0x1.7a15a81686727p-574, 0.0, 0x1.2d76b04fa32e3p-939, 0x1.a1baec5dc49edp-654, 0.0,
     0.0, 0x1.fce32760294b3p-113, 0x1.abf1277d1bc96p-288, 0x1.16d3e7e469096p-599, 0.0,
     0x1.72c49653e7254p-219, 0.0, 0x1.f730cfcc2f11fp-229, 0.0, 0.0,
     0x1.d2073a5dc90b4p-509, 0x1.c200c49a72f9fp-40, 0x1.acae3d29673c8p-69,
     0x1.5014707258acfp-563, 0x1.c7bc2684be846p-294, 0x1.21efee87edc93p-634, 0.0, 0.0,
     0.0, 0x1.3235c0074aa39p-894, 0x1.f88e11904b1b6p-357, 0x1.586fe8a76c9ecp-191,
     0x1.40ef66362c485p-499, 0x1.a05caf64b3e56p-1012, 0x1.cf89e7580fd57p-352, 0.0,
     0x1.7e77159a4c38cp-686, 0.0, 0x1.c6f320c14786ap-451, 0.0, 0.0, 0.0, 0.0,
     0x1.164dd13ce22dcp-692, 0x1.4d8c4f3b3004bp-484, 0.0, 0.0, 0x1.2b80ef3f37abbp-98,
     0x1.457ab447c4a13p-962, 0x1.faae31e8ff91ep-761, 0x1.41ff4d0e11b91p-804, 0.0,
     0x1.bfb244b159443p-808, 0.0, 0x1.817662fe216bcp-300, 0.0, 0x1.b4d4f3a0d6467p-153,
     0x1.0cd6fab8585acp-973, 0x1.7d842e8d3b71ep-763, 0x1.d9b5976160ed3p-185, 0.0, 0.0,
     0x1.688374a5ae8f2p-768, 0x1.34a1d59e96e21p-618, 0.0, 0x1.b7c6531719aafp-816,
     0x1.04be2e9e54f8fp-746, 0.0, 0.0, 0x1.29fa44bcee75dp-92, 0x1.53d3b5eec918bp-363,
     0x1.a3057c3ea1fd7p-875, 0x1.36a95f5891abap-1018, 0.0, 0.0,
     0x1.29ab3a315c71ep-995, 0x1.9727b9af0ca31p-266, 0.0, 0x1.ba1bae3ebe8fdp-109, 0.0,
     0.0, 0x1.98367cff6c8f1p-905, 0x1.f97975b3c77dap-175, 0.0, 0.0,
     0x1.0db4bb77eeadep-927, 0.0, 0x1.eb4ad845cdfc8p-93, 0x1.a4b763e411f5cp-528,
     0x1.4117ac429245bp-218, 0.0, 0.0, 0.0, 0x1.b62c7f9e4005bp-649, 0.0,
     0x1.b5a5e01b829d6p-579, 0.0, 0x1.e0a48ffc0b465p-554, 0x1.adc1dc7dc8cb4p-327, 0.0,
     0.0, 0.0, 0x1.d933559c74e31p-682, 0x1.7f2be233345d8p-319, 0x1.ce8fffe4c588fp-562,
     0.0, 0x1.59ca03c8d6662p-443, 0x1.925a1820f3064p-261, 0.0, 0.0, 0.0, 0.0,
     0x1.559be0a48500fp-528, 0x1.c32c9395a6969p-413, 0x1.914b7e366b7f6p-185, 0.0, 0.0,
     0.0, 0x1.608b74f082342p-863, 0x1.f488374da21bdp-1009, 0x1.c975742c6c917p-244,
     0x1.cd18872cf15d5p-648, 0x1.eced8195abcfdp-135, 0x1.b66427ee2c92fp-71,
     0x1.35b8cf95266e9p-64, 0x1.38302397b5d45p-358, 0.0, 0x1.771294642ea9ep-119, 0.0,
     0x1.bbfb68298b8f2p-858, 0x1.4ffd05ab01a62p-457, 0.0, 0.0, 0.0, 0.0,
     0x1.57eb4f96d52cp-188, 0x1.51569e2a39889p-158, 0x1.81f48c010ac49p-567,
     0x1.1bc2a8024518p-857, 0.0, 0x1.56fba5a963d64p-571, 0.0, 0.0,
     0x1.89fd058ab45aep-157, 0.0, 0.0, 0x1.fda5e443217a2p-649, 0.0,
     0x1.e0c9784d93bf4p-563, 0.0, 0.0, 0x1.83c60af6cbb3ep-929, 0.0, 0.0, 0.0,
     0x1.c284edcb9f309p-621, 0x1.81d49543844acp-271, 0x1.dd3c11aeadfa8p-57,
     0x1.95af263f3b25p-745, 0x1.7a880d05fb381p-50, 0x1.b3e9c742f5edep-488, 0.0,
     0x1.64be3ce7f6746p-239, 0x1.0f1907b2c45abp-832, 0x1.5b520fd05d7d1p-270, 0.0,
     0x1.7c4eefea5084ap-630, 0.0, 0x1.9f93686661121p-684, 0x1.9b17c3c547029p-396,
     0x1.8415d42de295fp-343, 0x1.223c1a701dfc5p-715, 0x1.4cdb77a3bb0e8p-947, 0.0, 0.0,
     0.0, 0.0, 0x1.3d6c5996cb4a5p-799, 0x1.7943607be923fp-195, 0x1.446dd9f817ceap-228,
     0x1.c4e50028436d1p-433, 0.0, 0x1.221d03a6e5ee8p-978, 0x1.e06d88c66cfe3p-933, 0.0,
     0.0, 0.0, 0x1.5d437a1c0c553p-290, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9eb0f95c6314cp-801, 0x1.a41011befd25p-996, 0x1.97b1cedf142ffp-867, 0.0,
     0x1.2efa13140e216p-471, 0x1.4fb25ead7d36fp-116, 0.0, 0x1.3dbecbab33c8fp-598, 0.0,
     0.0, 0.0, 0x1.e2b3a0b7fa814p-935, 0.0, 0.0, 0.0, 0.0, 0x1.c673a8f7f95c9p-476,
     0x1.41f78aa5be995p-514, 0x1.2e87be5c9ca61p-842, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c3835b553e7dp-804, 0.0, 0.0, 0x1.7eefc21eedf94p-155, 0x1.02dbb47d6c613p-14,
     0.0, 0x1.a79044af15ab4p-985, 0.0, 0x1.7a6b2f890640cp-925, 0.0, 0.0,
     0x1.69644c3e9b529p-145, 0.0, 0.0, 0x1.e5f664f85664p-808, 0x1.3b976cf622609p-294,
     0.0, 0x1.a2f06b33d45d4p-688, 0.0, 0x1.13099f1a6c397p-892, 0.0,
     0x1.8f9c7f1389133p-65, 0x1.de15deda45c78p-477, 0x1.52fad59142f59p-549, 0.0, 0.0,
     0x1.216b51a771dd6p-979, 0x1.47c368d557701p-691, 0.0, 0.0, 0x1.5c24753f2febcp-714,
     0.0, 0x1.48f43b1e63b58p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b17c0010ac66p-870,
     0x1.f8966635e9759p-110, 0.0, 0.0, 0.0, 0.0, 0x1.f6e130daeffeep-918, 0.0,
     0x1.612dd1d2624d5p-534, 0x1.bf22e86babcd8p-899, 0x1.592ea5154a75ap-231, 0.0, 0.0,
     0x1.65ff1c2c9bd0fp-976, 0x1.2c249bc8c73f2p-310, 0x1.1144d3bc022bdp-829, 0.0, 0.0,
     0x1.f2ff708793f6cp-145, 0x1.5e491bc51c24ap-526, 0x1.178c899990cebp-446, 0.0,
     0x1.c240be0253748p-133, 0x1.c859c13a6a237p-681, 0.0, 0x1.1c12f538e288dp-584,
     0x1.da460a9bee448p-353, 0x1.e5a9e1c7a4309p-265, 0x1.7a18504e47bc4p-148, 0.0,
     0x1.fcc1241a95afbp-654, 0.0, 0.0, 0.0, 0x1.0f4d664301df4p-710, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a91891cd893c4p-625, 0x1.4b8ccd16b05dcp-441,
     0x1.0e3ac147247d1p-60, 0.0, 0x1.cc9846204fa5ep-1015, 0x1.f0c9745b223b5p-41,
     0x1.475788be4e269p-52, 0x1.4a4c472bb0ae5p-145, 0.0, 0x1.3400676d9770dp-965,
     0x1.ab96045a8dc04p-308, 0x1.5bdeb6a835e15p-427, 0x1.808cb5b1a9f9bp-690, 0.0,
     0x1.bd8695f11754p-935, 0.0, 0x1.0d1944c282384p-702, 0x1.2ae4aa13aa445p-712,
     0x1.b41085279e719p-921, 0.0, 0.0, 0.0, 0x1.3cddf6f8deb2fp-338, 0.0, 0.0,
     0x1.6127779d229acp-120, 0.0, 0.0, 0x1.ee844016d8516p-183, 0.0, 0.0, 0.0,
     0x1.b463db2f5d1d9p-585, 0x1.f3ad4d5a8ab79p-912, 0.0, 0x1.89f06a68c4e0cp-637,
     0x1.5ce232bab7291p-524, 0.0, 0.0, 0x1.f09649bf2b452p-334, 0x1.7ec00d7a12f82p-73,
     0.0, 0.0, 0.0, 0x1.30751fe55ba56p-151, 0x1.fbcfd89935114p-440,
     0x1.951256d614a63p-602, 0.0, 0.0, 0x1.50d1f13182493p-381, 0x1.202a5fd614024p-400,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b6802339fcd6p-286, 0.0, 0.0,
     0x1.d0ffaa1c7e3cap-607, 0.0, 0x1.8fcc6387efd09p-523, 0x1.fe0d419b52633p-96, 0.0,
     0.0, 0.0, 0x1.c25b048290664p-406, 0.0, 0.0, 0x1.44812d468614ap-806, 0.0,
     0x1.5bc0603ddcd79p-494, 0.0, 0x1.42c85010581b2p-243, 0.0, 0.0, 0.0, 0.0,
     0x1.93abd9efbe2d4p-199, 0x1.8fd3d377f9941p-835, 0x1.fda7da0e22b81p-556, 0.0,
     0x1.f9527a029debfp-869, 0x1.6d829717ce5b2p-872, 0.0, 0x1.ec1ea0bf9c727p-555, 0.0,
     0x1.fae539548e7a4p-325, 0.0, 0x1.f49c964e80effp-489, 0x1.cd15f6039e742p-598,
     0x1.5194847f25eb6p-705, 0x1.1a325363fbdedp-471, 0.0, 0.0, 0x1.8d533f445fc1bp-351,
     0x1.6c09add9db96cp-999, 0.0, 0x1.069330b8ec504p-777, 0x1.bd45ac4e604b8p-544,
     0x1.8ba44b743107ep-54, 0.0, 0.0, 0x1.a40a621c56fe9p-433, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ecf735ea2e5d8p-961, 0x1.60b904b9e7d56p-762, 0x1.48ab9b3fec59ep-112,
     0x1.91cf8080e08f6p-294, 0x1.47879ef4599ebp-836, 0x1.bedcb43f7ddc7p-692,
     0x1.35ced92769f97p-739, 0.0, 0.0, 0.0, 0.0, 0x1.eec30b50bb519p-989,
     0x1.3ee0c1f0d1e49p-914, 0x1.8be480968e979p-820, 0x1.7a3105804d29ap-592,
     0x1.bfc5c07220f03p-461, 0.0, 0x1.694b033395a39p-177, 0.0, 0x1.84869f7e1ffb2p-616,
     0.0, 0.0, 0x1.4efb24a340a06p-386, 0.0, 0x1.c8a22eee84651p-381, 0.0, 0.0,
     0x1.213199a8d3bbbp-804, 0.0, 0.0, 0.0, 0x1.02c65fe4bd785p-601, 0.0, 0.0,
     0x1.53a2dd8ec91aep-837, 0x1.ad69e43f7f9f4p-12, 0.0, 0x1.136bb4d5bf0ffp-692, 0.0,
     0.0, 0x1.8046f63b94f9ap-239, 0x1.5dec6b95217d2p-424, 0.0, 0.0,
     0x1.4a9e794532076p-827, 0.0, 0.0, 0x1p0, 0x1.f1c1cd42a0adp-147,
     0x1.32630a074786dp-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa2b5f1a8393ap-115,
     0x1.44e776a6f8d09p-733, 0.0, 0x1.1df7b40cab422p-626, 0x1.c41511182ba66p-437,
     0x1.d2dd6181bed65p-537, 0.0, 0.0, 0x1.1e18880d5d01cp-899, 0.0,
     0x1.6d8251788be9dp-668, 0x1.2367db4ea926p-332, 0x1.567082d94e0c5p-786,
     0x1.3dcdaebfd68f8p-306, 0x1.09c02634c3613p-803, 0.0, 0.0, 0x1.e942d2d1ba0cdp-976,
     0.0, 0.0, 0x1.9e0fb4a23faf2p-840, 0.0, 0.0, 0x1.d6b20e645de1cp-776, 0.0, 0.0,
     0.0, 0.0, 0x1.98e0412e04d1ep-711, 0.0, 0.0, 0.0, 0x1.21af9146fb9bdp-886, 0.0,
     0x1.370f11c8a6685p-602, 0x1.725d98d84daf4p-722, 0x1.8d06cff00d16ap-156,
     0x1.318dbdd37bd7cp-873, 0x1.df9dca0189cep-681, 0x1.c0185443a4923p-501,
     0x1.07bdb1f0015e2p-722, 0.0, 0x1.1a9439e6229b1p-243, 0.0, 0x1.1164d6cd3070ap-928,
     0x1.0653889e888e5p-216, 0.0, 0x1.57e3b149496f2p-293, 0.0, 0.0,
     0x1.8dd1b29f1d102p-554, 0x1.4c668594ce3d9p-691, 0.0, 0.0, 0.0,
     0x1.ebfc918a4ae03p-522, 0.0, 0.0, 0x1.451030c72dc11p-556, 0.0, 0.0,
     0x1.f2a446fec8d05p-349, 0.0, 0x1.7171204798a37p-537, 0.0, 0x1.0cdc0da77d967p-235,
     0x1.f04675df920e2p-493, 0x1.d444c5974dccbp-6, 0.0, 0x1.bba7a7478ea38p-610, 0.0,
     0x1.033b5066b8e21p-417, 0.0, 0x1.4d85b16118cbcp-216, 0x1.a107b1552ed74p-224, 0.0,
     0.0, 0.0, 0.0, 0x1.0e1c24cc521f6p-481, 0x1.4d960f2b1ff78p-13,
     0x1.fd271cf7ca9c3p-584, 0x1.69ab925621fafp-536, 0x1.1e294bacb68d7p-32, 0.0, 0.0,
     0x1.ee82dbfebf573p-345, 0.0, 0.0
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
            tmp1 = Sleef_finz_coshd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_coshd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_coshd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
