/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintd1_purecfma.c --function Sleef_rintd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.6b8d758a87142p-633, 0.0, 0.0, 0x1.0bf6b8c5cef1dp-904, 0.0,
     0x1.b63b19bebf206p-588, 0x1.cd2eeee1a7a6ap-817, 0.0, 0.0, 0x1.964476ff5c256p-531,
     0x1.89ab1959689e3p-768, 0x1.b7d78fba8588ap-738, 0.0, 0.0, 0x1.455dbf8b3b49cp-509,
     0.0, 0.0, 0x1.5c492971993f4p-157, 0x1.a1767da54fbb1p-690, 0x1.4d7e0db0170bfp-442,
     0x1.4c7d1110a7849p-429, 0.0, 0x1.1f71546716e85p-808, 0x1.7e6d7a1630697p-588, 0.0,
     0x1.454a8883ba977p-789, 0.0, 0x1.302def251c902p-850, 0x1.30182e143469p-863,
     0x1.8cde429eed8fap-342, 0x1.370d0e9af4cbfp-42, 0.0, 0.0, 0x1.f8bd3a01e5f69p-345,
     0.0, 0x1.f69fb143f9473p-165, 0.0, 0.0, 0.0, 0.0, 0x1.502fd40a3816ap-66, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6505dff28ec11p-298, 0x1.dfb1a33617055p-63, 0.0,
     0x1.f84bdbabf93ebp-325, 0x1.a4b0d58a0bdb8p-792, 0.0, 0.0, 0x1.7c70c1790338fp-388,
     0.0, 0x1.12b0266b4d279p-237, 0x1.795540bf707d9p-7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d20350cf68936p-468, 0x1.72bc9a69f3d3ep-709, 0.0, 0.0,
     0x1.902bae01fc217p-685, 0.0, 0.0, 0x1.517aec86957f6p-807, 0.0, 0.0,
     0x1.a15f102281306p-427, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78a68e94f9adfp-878, 0.0,
     0x1.477928fd693d3p-920, 0x1.12f21849670c2p-438, 0.0, 0.0, 0.0,
     0x1.853c3b98ef0d6p-218, 0.0, 0x1.fae248078f6c1p-856, 0x1.de66e2d2e54bfp-286, 0.0,
     0x1.f94536363333cp-283, 0.0, 0x1.447a6fe71f082p-126, 0.0, 0.0,
     0x1.d1f16e6cd55d9p-836, 0.0, 0x1.19e6ad642e1f7p-839, 0.0, 0.0,
     0x1.42725fd79d0fp-258, 0.0, 0x1.5f4229503be8ap-451, 0.0, 0x1.195568159bfc2p-978,
     0.0, 0.0, 0x1.5c4ed3b4bcfa4p-441, 0.0, 0.0, 0x1.68061c059ef5fp-373, 0.0,
     0x1.428ec902938bdp-310, 0x1.9abd0a15a7046p-485, 0x1.f41dad5ec8b4ep-670, 0.0,
     0x1.672ea4e25959p-515, 0x1.225c9d3542fd8p-797, 0x1.1ee0890b8edcfp-194,
     0x1.5aef92becb88dp-772, 0x1.77d56910816bp-689, 0.0, 0x1.535cfed1f3a72p-893, 0.0,
     0x1.53a945bb9bfb5p-955, 0.0, 0.0, 0.0, 0x1.258d4cf276e19p-538, 0.0,
     0x1.0451107035d74p-472, 0.0, 0x1.045c722335b66p-222, 0.0, 0x1.7dc2c7d89ed1fp-233,
     0.0, 0x1.e32b53626f90bp-528, 0x1.35ca3b6abb79p-1019, 0.0, 0x1.cdd5dfbf1e84fp-287,
     0x1.1b6f70f6a7afep-271, 0.0, 0x1.dfdbcd892648ep-242, 0.0, 0.0, 0.0,
     0x1.6e55fe14b1334p-62, 0x1.dc0068d82c599p-791, 0x1.8baba776c3e41p-852, 0.0,
     0x1.f5c7ef049647ep-88, 0.0, 0.0, 0.0, 0x1.edfbcc8caaddp-367,
     0x1.b626a134b589ap-755, 0x1.d5510a8bb9f07p-993, 0.0, 0x1.eab42dc599ff6p-850,
     0x1.d771fe7b78bccp-331, 0x1.4fa6af6767bedp-463, 0.0, 0.0, 0.0,
     0x1.be008b61fba87p-1016, 0x1.d7dfd7d8dfea1p-399, 0.0, 0.0,
     0x1.825a681dadf5cp-130, 0.0, 0x1.20175167441bep-975, 0x1.c861921818aafp-678, 0.0,
     0.0, 0x1.ed051351c95fcp-679, 0x1.e993fcc68d7bfp-668, 0.0, 0x1.21c79b271ec2bp-976,
     0.0, 0x1.b8536066cd61p-69, 0.0, 0x1.602848d63431cp-73, 0.0,
     0x1.fe003e8feff39p-946, 0x1.1e31b138eb453p-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f42d5e0e36f13p-236, 0x1.4f622fc0e3211p-768, 0.0, 0.0, 0x1.1b78e02ddbe96p-407,
     0.0, 0x1.9a0d03f3428e9p-94, 0x1.920f1b1bc3324p-662, 0x1.c95f1237911cep-121, 0.0,
     0x1.3d864153bdf74p-725, 0x1.b545d7decca5bp-802, 0x1.c9e9eb89cd49p-2,
     0x1.a4284f35ce2c1p-742, 0.0, 0.0, 0.0, 0.0, 0x1.48e9cc2f89895p-699, 0.0, 0.0,
     0.0, 0x1.dbbbb5ff22168p-124, 0x1.1a98327017a1fp-699, 0x1.d1e6906fd7d55p-130,
     0x1.0dfcef22ae029p-771, 0.0, 0x1.0f637232e05e4p-817, 0x1.96a232a295aafp-916, 0.0,
     0.0, 0.0, 0x1.e5bdda8d94edap-962, 0x1.e32c97d3bc2a2p-364, 0.0, 0.0,
     0x1.d9eb0b44352bp-193, 0.0, 0x1.8b06bda293c87p-48, 0x1.19c5bd39c289p-549,
     0x1.aadda6be4881bp-955, 0.0, 0x1.8a085c62dff74p-657, 0.0, 0x1.8a67bd00cfe5dp-696,
     0.0, 0.0, 0x1.591c8f8179e3cp-608, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.330b52102285ap-561, 0.0, 0x1.02935fb4a94bp-248, 0x1.92684f62fe953p-302, 0.0,
     0.0, 0x1.274dc730f94bap-649, 0x1.1b9320f39af17p-746, 0x1.45d0a658d006dp-682,
     0x1.56a8ba1b75351p-280, 0.0, 0.0, 0x1.3b25e3094de12p-200, 0x1.9d4de23c83656p-484,
     0.0, 0x1.cfb02c3a29737p-741, 0.0, 0x1.3db12c8d2017fp-121, 0.0, 0.0, 0.0,
     0x1.4c9ad3a3aee43p-743, 0x1.e022bac0fe826p-300, 0x1.7baa834fa673p-256,
     0x1.854d3ecb1d8e6p-787, 0x1.ac17689a3bc65p-158, 0x1.26464404ba481p-918, 0.0, 0.0,
     0.0, 0.0, 0x1.fd4e504f43cd7p-491, 0.0, 0x1.fa1ade903692fp-648, 0.0,
     0x1.5efeaa42dae07p-967, 0x1.9b16eaa478e18p-405, 0.0, 0.0, 0x1.56b9961905322p-718,
     0.0, 0x1.0e279c0884066p-424, 0x1.78e4b49e00d6dp-103, 0x1.f81cbe19239ebp-741,
     0x1.5794d5450b2eep-246, 0x1.f37f342e838c3p-939, 0x1.636f7ad87232cp-608,
     0x1.4edff76140604p-348, 0.0, 0.0, 0x1.23e641767d98ap-327, 0x1.1e6f59b640111p-600,
     0x1.8e133bdfb136fp-115, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa6d294627c7dp-813,
     0x1.c2f46db3bf26bp-972, 0x1.60fb4bb103a46p-545, 0.0, 0.0, 0x1.13610802978d2p-576,
     0x1.419c863382e5p-108, 0x1.b179a71b24868p-650, 0.0, 0x1.f2a5bc3e8eb21p-153, 0.0,
     0x1.a90a0facc5b9p-131, 0.0, 0x1.5a680059cdef4p-487, 0x1.94fa46ed44077p-177, 0.0,
     0x1.ae833e5af1279p-19, 0.0, 0x1.611033165ab6bp-758, 0x1.9cb14aeb96765p-706,
     0x1.b42906f5a5681p-373, 0x1.a4a00c153c46dp-710, 0.0, 0.0, 0x1.4528fb6e09d57p-768,
     0.0, 0x1.9792131a9a56bp-95, 0.0, 0.0, 0.0, 0.0, 0x1.519c9c8425d54p-873, 0.0,
     0x1.bdd72d5b007d4p-529, 0x1.fd13d15663ee9p-362, 0.0, 0x1.15fb462b41564p-88,
     0x1.b2d62fb62328cp-491, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.993b8c264cfb5p-768, 0.0,
     0x1.a8cc6bb5fa2fdp-707, 0x1.d2e85f905d373p-148, 0.0, 0.0, 0.0, 0.0,
     0x1.3828d3ccb8055p-910, 0.0, 0x1.8a9485707173bp-311, 0.0, 0.0,
     0x1.32f8b2bf8f1f5p-347, 0x1.6c578e6a1bec9p-163, 0.0, 0.0, 0.0, 0.0,
     0x1.bb33d87ea7e12p-264, 0x1.4f832c875c8f9p-890, 0.0, 0x1.4cdfb6e306faap-137,
     0x1.2dd049413c7afp-187, 0.0, 0.0, 0x1.586531434fbe5p-145, 0x1.6eb757a0864b7p-360,
     0x1.0bfc27db5e38dp-776, 0x1.e20f1a02a08f5p-68, 0.0, 0x1.93dc709b07173p-687,
     0x1.41b8df425e7c5p-1004, 0.0, 0x1.c7c718bba2191p-274, 0.0,
     0x1.f499563bc183dp-558, 0x1.af6d5adc3d18bp-149, 0.0, 0.0, 0x1.e4ca851b1934p-290,
     0x1.35b25ff9986c9p-120, 0.0, 0.0, 0.0, 0.0, 0x1.72ba1b57f8b1bp-712, 0.0, 0.0,
     0x1.2e919ff54d2e6p-634, 0x1.c0bf673e121d5p-1017, 0.0, 0.0, 0x1.0985d3c0c7c1fp-87,
     0.0, 0.0, 0x1.2aa107cabfdd9p-491, 0x1.21305d0cf010ap-672, 0.0,
     0x1.88bfab634ab9p-764, 0.0, 0x1.a13ccc5ac6ee2p-670, 0.0, 0x1.6d67b562c26f6p-378,
     0.0, 0.0, 0x1.e29cb77fa027bp-201, 0.0, 0.0, 0.0, 0x1.57ea931d9ed59p-82, 0.0, 0.0,
     0x1.99a9cf1112a84p-42, 0x1.766b9ffe0fe4fp-905, 0x1.095ff6b3d3c55p-585,
     0x1.7cd26f589e9bfp-520, 0.0, 0.0, 0.0, 0.0, 0x1.00f42bfc8a4d4p-488, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc058c5abf6c8p-75, 0.0, 0.0, 0.0, 0.0,
     0x1.f99b3e2b52f2ap-386, 0.0, 0.0, 0x1.0f8e85491570cp-1015,
     0x1.a94f28cb6d00bp-691, 0.0, 0x1.7d3d799022925p-271, 0x1.9afc5fef84c0cp-81,
     0x1.47f11236e05a3p-118, 0.0, 0x1.89333ccb6bb24p-812, 0.0, 0.0, 0.0, 0x1p0, 0.0,
     0x1.11a847640cc7bp-942, 0x1.02c513edf154bp-755, 0x1.cc03072d3fcb1p-846,
     0x1.8f6a9db79979ep-773, 0x1.15fd3f1b9222bp-276, 0.0, 0x1.c69eb9a655afcp-111,
     0x1.7f36b952d01afp-422, 0.0, 0x1.ad6934cda588bp-381, 0x1.3bbf737c5af04p-762, 0.0,
     0x1.943e8dfd58f03p-536, 0x1.0f6a790b48b47p-657, 0.0, 0x1.8073784c33ddap-457,
     0x1.85a91e2b8e47fp-583, 0x1.4757fc615e456p-738, 0x1.8521a025fe5b9p-609,
     0x1.10e7b1aded873p-598, 0.0, 0.0, 0x1.2da62187345bap-891, 0x1.d6318b819dd9fp-946,
     0.0, 0x1.7de0ca5ed656ap-824, 0x1.f6a405b3de9ecp-577, 0.0, 0.0, 0.0,
     0x1.8fa4a07edc1edp-976, 0x1.eada07d2bf1bdp-179, 0.0, 0.0, 0x1.76eded0cb8c1ap-242,
     0.0, 0x1.b5c12c77fd99ep-523, 0.0, 0x1.9b96ed0de265dp-185, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.470f9dc56199cp-608, 0x1.18ea42962dfb5p-574, 0x1.42afb5b2f23f4p-753,
     0.0, 0.0, 0.0, 0.0, 0x1.53cd850bd3d1bp-723, 0.0, 0.0, 0x1.693a5013a8a19p-735,
     0.0, 0.0, 0.0, 0x1.24b89986c61f2p-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c78bec2a4769p-571, 0.0, 0.0, 0.0, 0x1.b32636b39ab56p-165,
     0x1.5f0fc7ec27ac3p-102, 0x1.fc15b80adfc1ep-311, 0.0, 0x1.eb824d21f5516p-705,
     0x1.69ceba4c0e1b6p-747, 0.0, 0x1.517855ab17023p-668, 0.0, 0x1.60062a2a769bp-779,
     0x1.3c3c47e3e6f16p-272, 0.0, 0x1.c8b2ba2e1b86fp-34, 0.0, 0x1.222777b671d5ep-40,
     0.0, 0x1.0f423cd3918aap-688, 0.0, 0.0, 0.0, 0.0, 0x1.564d3fb1dfb93p-80,
     0x1.b1c2be23febcep-1006, 0.0, 0.0, 0.0, 0x1.d0e116e30b26bp-943,
     0x1.ac804b993fcfcp-704, 0x1.a7d800633edc7p-262, 0x1.ba83075af9654p-581,
     0x1.48a20485d3ae7p-599, 0.0, 0.0, 0x1.b704a837b88bfp-304, 0x1.4abb9748c5d24p-541,
     0.0, 0.0, 0x1.1063b38f8a53bp-743, 0x1.6518b9d64c54cp-233, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d29f8fafe994ep-265, 0x1.76a2a7a4a9d81p-987, 0x1.13b2eb804f646p-891, 0.0,
     0.0, 0x1.2c207d2edbcdcp-916, 0x1.952289bf8e4c2p-466, 0x1.c7c885505dc7ap-408,
     0x1.4abd61e705173p-912, 0.0, 0x1.0d70749ad4e36p-468, 0.0, 0x1.82e4f20b016c3p-228,
     0.0, 0.0, 0.0, 0.0, 0x1.ed549a9983797p-563, 0x1.2995442a6c566p-780,
     0x1.b0e2878a0e30dp-148, 0.0, 0.0, 0.0, 0x1.56e082f8b2a5dp-98,
     0x1.ef0a9ec9f9295p-825, 0x1.388a3432d04aap-81, 0.0, 0x1.8b08faef8b7fcp-173,
     0x1.792ccad8c1443p-193, 0.0, 0.0, 0.0, 0x1.013502481bbe8p-220,
     0x1.6130581d4f9b4p-693, 0x1.efc225c46e992p-579, 0x1.743ecb5665f71p-407,
     0x1.82bf3b97885f8p-437, 0x1.1ea45d531f36ap-582, 0.0, 0x1.3cf06ecbf700dp-275,
     0x1.540c816500291p-294, 0.0, 0x1.db91e4fddc30bp-953, 0x1.9587379f511eep-963, 0.0,
     0x1.cf9882520b26p-317, 0x1.89403bf2e81c5p-523, 0.0, 0x1.b28b77cc8b6bcp-802,
     0x1.562568d00f214p-675, 0.0, 0.0, 0.0, 0x1.58c61070e1f9ep-185, 0.0, 0.0,
     0x1.95c10b599c1bep-211, 0x1.ec812b6a766a6p-420, 0.0, 0.0, 0.0,
     0x1.8fbc9e9001df1p-130, 0x1.b05e1f77e9fd8p-904, 0x1.b401edb3c8682p-802,
     0x1.ab8ad2830ab14p-219, 0.0, 0x1.9713b08ebc0e1p-277, 0.0, 0x1.7a280cb4e022cp-895,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee524203e5fdap-498, 0x1.db3f495073a9cp-1022,
     0x1.a4216df114a18p-361, 0.0, 0.0, 0x1.dace0e9882e2fp-899, 0x1.a32bb413d7f8dp-196,
     0.0, 0.0, 0x1.90645378f4b36p-166, 0x1.dde73de29e94dp-362, 0.0,
     0x1.9cd377c840b62p-549, 0x1.21b0b57da86f3p-414, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ff618f0d68ap-362, 0x1.db23f23cbc94ep-473, 0x1.ee96d46789453p-970,
     0x1.30a2fb8e5d977p-564, 0x1.163b4b1381188p-545, 0.0, 0x1.fc69b946658f7p-161,
     0x1.7c04bd12014efp-420, 0x1.b8e3575f796dfp-629, 0x1.7c05fa9862395p-673, 0.0,
     0x1.e1456278babd6p-358, 0x1.e5e9fbc229d6ap-687, 0.0, 0x1.4f30d12bcc945p-450, 0.0,
     0.0, 0x1.86cd353c27394p-628, 0.0, 0.0, 0.0, 0x1.28a3d7d411bf6p-626,
     0x1.cb24c81a0014fp-359, 0.0, 0x1.c178d0164365bp-248, 0.0, 0x1.314cb9f8a50d2p-985,
     0.0, 0.0, 0.0, 0x1.6d118ee14781bp-883, 0.0, 0x1.ae594e0bc75e3p-237,
     0x1.0df9561fe3fadp-850, 0.0, 0.0, 0x1.0a639fd741bd9p-793, 0x1.8719bc13ecffap-397,
     0.0, 0.0, 0x1.79c5eab45d43ep-831, 0x1.496e090adac1bp-711, 0.0,
     0x1.1fbebe62657b3p-549, 0x1.ca3d7f45f31e4p-128, 0x1.e4900d61e7767p-59, 0.0, 0.0,
     0.0, 0.0, 0x1.52c2fa399d54dp-218, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7986812fa6758p-773, 0x1.018edb1319d91p-913, 0x1.1a823073f758dp-96, 0.0, 0.0,
     0.0, 0x1.6d2341b23a0d4p-662, 0x1.ef018810f78b2p-55, 0.0, 0x1.16a0575df8986p-346,
     0.0, 0x1.29d8b1ca3a949p-389, 0.0, 0x1.911487d5a46cp-873, 0.0,
     0x1.c12c46cfe821ep-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b25e642d28b5dp-879, 0.0, 0.0,
     0.0, 0x1.c6aa6b0f436aap-935, 0x1.d8a99db1f4b35p-794, 0.0, 0.0,
     0x1.42f55cadd117bp-608, 0.0, 0x1.d953801b1cc79p-165, 0.0,
     0x1.073cc6ddc71e6p-1003, 0x1.4bad29f41326p-368, 0.0, 0.0, 0x1.7d4acd3546868p-83,
     0.0, 0x1.bf0c5d6503f81p-852, 0x1.5e19e617380c6p-20, 0.0, 0x1.74ae132bad8bap-303,
     0.0, 0.0, 0.0, 0.0, 0x1.0cccbec2e8fcep-813, 0x1.2a99ce77cdecdp-402, 0.0,
     0x1.a32793e572a77p-477, 0.0, 0.0, 0.0, 0x1.491ae4164074fp-213,
     0x1.a178efa57b21dp-571, 0x1.3201f8846000bp-676, 0.0, 0x1.dcd5aac2fbb99p-22,
     0x1.074a542e8109p-521, 0x1.e5add10a947p-783, 0x1.f181848f0f4cbp-281,
     0x1.8ad30a217e562p-772, 0x1.4a0413d9fd2edp-155, 0.0, 0.0, 0x1.b29db52fa4d82p-641,
     0x1.f18fd6ee8dbd7p-504, 0x1.634384a5f2c5ap-796, 0x1.a3498b26b32a9p-850,
     0x1.5d56bb7a1b225p-666, 0.0, 0.0, 0x1.0a97c44cc3d3dp-93, 0x1.4b16ad9349cfep-1007,
     0x1.fd921f184e599p-263, 0x1.d2dd12b176fdbp-963, 0x1.015f21fd50eabp-380, 0.0, 0.0,
     0x1.0baa6e9399517p-452, 0x1.efefd22c5dacfp-927, 0.0, 0.0, 0x1.59334097ebde4p-945,
     0.0, 0.0, 0.0, 0x1.588e1134004e4p-778, 0.0, 0.0, 0.0, 0x1.f804d9a0fd7b4p-929,
     0x1.4c6ea3279666ap-237, 0x1.8698a4c6d2ca2p-666, 0x1.568b53704163bp-469, 0.0, 0.0,
     0x1.81bf0a82767c4p-992, 0.0, 0.0, 0x1.4c6eb3d41090ap-745, 0x1.8d3d1a3659a8bp-557,
     0.0, 0x1.57f2aa7e8e9c1p-91, 0.0, 0x1.4210f7d839b2ep-28, 0.0,
     0x1.2d79c5d04605ap-792, 0.0, 0.0, 0x1.7291fa36d10ccp-925, 0.0,
     0x1.a1e1044c61474p-530, 0x1.42c22dfa767e4p-219, 0x1.45551ca6bf525p-873,
     0x1.5d8950ac41932p-897, 0x1.adae63bb9ef2ap-476, 0x1.5e4f47ade0ef9p-370,
     0x1.e4ee941fc338cp-762, 0x1.475ad89711a37p-745, 0.0, 0.0, 0.0, 0.0,
     0x1.ea10ae2117bb9p-1013, 0x1.edeb808ad9ddep-961, 0.0, 0x1.37d4ae556b063p-267,
     0x1.0cb58216e80edp-359, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12f86b44e27e7p-168,
     0x1.1ff556ed3791fp-509, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1fb924a7a427ep-179, 0.0, 0x1.99c8fa90c2d54p-807, 0x1.cba18e3b2d438p-887, 0.0,
     0.0, 0.0, 0x1.aff1807e40b51p-305, 0x1.e64ca45ec6923p-356, 0.0, 0.0, 0.0, 0.0,
     0x1.4b0ad5e57b2dep-957, 0x1.9f4fd07cd645cp-572, 0x1.269114f79727dp-731, 0.0, 0.0,
     0x1.651bc4924c383p-642, 0x1.b1b002d968f16p-22, 0x1.ec865ca6b5052p-185,
     0x1.6e536b6b947c4p-978, 0x1.7914a9c8435eap-406, 0.0, 0x1.d97bfaf5e052bp-369,
     0x1.1209d488f795ap-585, 0.0, 0x1.6de459fa93532p-976, 0.0, 0.0, 0.0,
     0x1.571828eeb036bp-616, 0.0, 0x1.6170c95b9b838p-1008, 0.0, 0.0,
     0x1.ddcb83cc18f2dp-345, 0.0, 0x1.ba0d146ae863p-706, 0x1.f7c9c3e7c5256p-698,
     0x1.3609f6a0426dfp-109, 0.0, 0x1.bbc833098ad8bp-548, 0.0, 0x1.2cdf2987950acp-464,
     0.0, 0x1.c85f95323b253p-208, 0.0, 0.0, 0x1.af7f1d7e53c8bp-556,
     0x1.f9094f136cbap-253, 0x1.2b609cf6ab752p-304, 0x1.c996c2b98c0e8p-952, 0.0,
     0x1.0e84109c1e912p-434, 0x1.8145409283bdbp-534, 0x1.7e41ecad0ff2dp-330, 0.0,
     0x1.b52146fb36347p-361, 0.0, 0x1.fed64f6748e7p-372, 0x1.3daf1056a94fdp-142, 0.0,
     0x1.8f44e90c1423fp-826, 0.0, 0.0, 0.0, 0x1.a4d142d2ef319p-782,
     0x1.2bdf7e1f84f7ep-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a29a8ea0c24p-309,
     0.0, 0.0, 0x1.e132375b4a8a4p-574, 0x1.1856ff4e50bbcp-777, 0.0, 0.0, 0.0,
     0x1.520b599b05c9bp-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2826caa512072p-448, 0.0,
     0x1.03580d77dfe31p-860, 0x1.41e78a16eed7fp-171, 0.0, 0.0, 0x1.12e2ce7b17a6ep-684,
     0.0, 0.0, 0x1.5cbf319303aa7p-761, 0.0, 0x1.02797a797792ep-675,
     0x1.c3f04a81a6db6p-44, 0x1.18c663977f1f6p-780, 0x1.e6bd99334fddbp-840,
     0x1.70d8dfb10e6b1p-969, 0x1.aadfb7db8cca5p-984, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9dc3a5eda4f48p-426, 0x1.26d80538ead78p-718, 0.0, 0x1.e9571d9af97b7p-769,
     0x1.24023fa526221p-328, 0.0, 0x1.3e7aec9e780f7p-476, 0.0, 0x1.dbd57c63465a8p-592,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb388384a8cccp-372, 0.0
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
            tmp1 = Sleef_rintd1_purecfma(tmp0);
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
    printf("Sleef_rintd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_rintd1_purecfma bench acc %la\n", global_bench_acc);
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
