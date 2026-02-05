/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceild4_kvx.c --function Sleef_finz_ceild4_kvx \
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
     0x1.2c4be72abecd8p-1010, 0.0, 0x1.c42805306a1p-588, 0x1.ab88f27009075p-539, 0.0,
     0.0, 0x1.e0f8ec09711e3p-778, 0.0, 0x1.72113b2bca7f4p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.67f402bd7dc5ep-207, 0x1.874d36bd4dc76p-751, 0x1.ae59b1ff0fb91p-971, 0.0, 0.0,
     0.0, 0.0, 0x1.121f02b7ecd4ap-361, 0x1.e3a4840a8cc92p-855, 0.0,
     0x1.8fc7ac6ea37e8p-398, 0.0, 0.0, 0x1.d2f1c4e825c4cp-527, 0.0, 0.0, 0.0,
     0x1.4b37bb8a80a5ap-849, 0x1.e971a973cd0d8p-407, 0.0, 0x1.5cd3e69684fd5p-400,
     0x1.b9e640a89f2b8p-769, 0x1.7f616a745720dp-600, 0.0, 0.0, 0x1.e6bc73753787bp-337,
     0x1.24f05b5a20cdfp-899, 0.0, 0x1.8e7c779db1a4bp-49, 0.0, 0.0,
     0x1.1fedba00a7bf8p-939, 0x1.251718ab71a46p-367, 0.0, 0.0, 0.0, 0.0,
     0x1.79c2b6940cdbbp-198, 0x1.6b38b9ae88a79p-423, 0.0, 0x1.30c059ccf35cfp-291, 0.0,
     0.0, 0.0, 0.0, 0x1.a03dbf8d88dc7p-769, 0x1.e005883bfc6efp-909,
     0x1.3b12c5249155cp-352, 0x1.740e5670f7ff8p-531, 0x1.332152ecf90f2p-777, 0.0,
     0x1.6658a618e0456p-49, 0.0, 0.0, 0x1.bd2a4d746d095p-525, 0x1.abb1bc7af5fadp-897,
     0x1.15403353af5b3p-153, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe0257c1371f6p-544, 0x1.ee8888e0d2f0ap-379, 0.0, 0.0, 0.0,
     0x1.86372bab2558p-219, 0.0, 0x1.1cb55089a87b3p-295, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72fda2b0b4dfcp-460, 0x1.f9c1d4071ea3cp-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.de4e8be1edfadp-934, 0.0, 0x1.64fd0a15b9f2ap-625, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3a6385ca4adf2p-703, 0.0, 0x1.f9a65806b225fp-562, 0x1.5a6d3881f9de1p-84,
     0.0, 0.0, 0.0, 0x1.c9726c0f3dfe2p-393, 0.0, 0x1.c7fa83154ea93p-283, 0.0,
     0x1.b09a1a8fc39b9p-362, 0.0, 0x1.21fdd8e15290dp-439, 0x1.38b367b740edep-352, 0.0,
     0.0, 0x1.65b81cb92b2dbp-420, 0.0, 0x1.36726da42054dp-769, 0x1.9f9221f69c7fep-793,
     0x1.42051db8cef15p-629, 0.0, 0.0, 0x1.1a948112f7922p-645, 0.0,
     0x1.7e151a1c08ff5p-432, 0.0, 0x1.e18a3f1f7861cp-560, 0x1.09f15ecb7e543p-182, 0.0,
     0x1.3c7fe44b5ffap-229, 0x1.4eb76189f29e8p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.f112febb54e07p-34, 0x1.e262eb720118cp-489, 0.0, 0x1.f1b8db55a9dddp-182,
     0x1.426aca0e3a30fp-423, 0.0, 0.0, 0.0, 0x1.49f5e55431187p-270,
     0x1.2066b437ecf31p-438, 0.0, 0.0, 0.0, 0x1.1749b05ffbd02p-578, 0.0,
     0x1.1e44c0ad4b1efp-271, 0.0, 0x1.12f38479fae19p-290, 0.0, 0x1.00562985317b5p-802,
     0x1.332f4bc7ec645p-900, 0x1.60773b9b769eep-295, 0x1.ce747da78fd72p-522, 0.0,
     0x1.26d77665bb304p-270, 0.0, 0x1.a3380b826b414p-77, 0.0, 0x1.08a60a09d2cedp-547,
     0x1.6bf60df3db29p-135, 0.0, 0x1.5729a388c635fp-689, 0x1.1c25e43f4d914p-533,
     0x1.5a4b5ebe06141p-380, 0.0, 0x1.3e4ef683068c5p-885, 0.0, 0.0, 0.0,
     0x1.1af40806fdd55p-41, 0.0, 0x1.2fda5a874425p-243, 0x1.a09f62591bb1cp-413,
     0x1.807a8c904e2e9p-898, 0.0, 0x1.c5080ccaf3b5ap-852, 0.0, 0x1.d0bde9e1185edp-621,
     0.0, 0x1.45e1547b98a14p-256, 0x1.00452f34d7051p-888, 0x1.121be4d3b1c36p-287,
     0x1.09bea589f9dbp-824, 0.0, 0.0, 0x1.9e3e5af55e4d5p-274, 0.0, 0.0,
     0x1.33d5731ee2e52p-614, 0.0, 0x1.4860de1d34f0cp-329, 0x1.861b04c3926b6p-768,
     0x1.75fdd9aaa163fp-882, 0x1.7a188dba828b8p-158, 0x1.c166311896518p-338, 0.0, 0.0,
     0.0, 0.0, 0x1.6600a997f03bbp-907, 0x1.3fdffac03a67ep-374, 0.0,
     0x1.81e6aa9448371p-186, 0.0, 0x1.41ad6db296297p-579, 0x1.a2032eee11fcap-8,
     0x1.8da297b539fd3p-626, 0.0, 0.0, 0.0, 0.0, 0x1.528237c2f0ea1p-748,
     0x1.19babb3265c2p-1018, 0.0, 0x1.fca1d2e3fee4p-28, 0x1.03be1184984fep-533, 0.0,
     0.0, 0.0, 0.0, 0x1.8dd3a61cec50ep-545, 0x1.60c39cce0c779p-1019,
     0x1.552be058f256ep-112, 0.0, 0.0, 0x1.32ae67e0c2667p-1005, 0.0,
     0x1.4aaa14a0df36p-715, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba1ae1d9d1d7cp-273, 0.0,
     0.0, 0.0, 0.0, 0x1.01a382f84d02bp-848, 0x1.610bc87a97b15p-576,
     0x1.7b6898cc8023fp-37, 0.0, 0.0, 0x1.e6f039bde52e1p-497, 0.0, 0.0,
     0x1.dfefe52307779p-518, 0x1.c27670f5e429bp-974, 0x1.af19fbf19818ap-497,
     0x1.d7405c568fb1bp-838, 0.0, 0.0, 0x1.53d2c4be0edf9p-187, 0x1.1cb55a0ad9aa4p-126,
     0x1.61bbb7063bd3ep-968, 0.0, 0x1.6a108dedc996ap-7, 0.0, 0.0, 0.0,
     0x1.cab03478951aap-330, 0.0, 0x1.eb50a8cf99f9bp-132, 0x1.2258d911de4e9p-910,
     0x1.b1f83656b74e5p-40, 0.0, 0.0, 0x1.5559b330ccc51p-510, 0x1.69c09e7be575fp-644,
     0.0, 0.0, 0x1.3d00a6dadc3d3p-213, 0x1.795abbd9388p-345, 0.0,
     0x1.e5498477631d9p-646, 0.0, 0.0, 0x1.8511dc749efc6p-812, 0x1.3c0889dbf1916p-813,
     0x1.11031866b384ap-217, 0.0, 0.0, 0x1.6bdb7bab22e66p-926, 0.0, 0.0, 0.0, 0.0,
     0x1.12244fb74190fp-55, 0.0, 0x1.92359e25170c3p-615, 0x1.9bab3f2c7c03bp-718, 0.0,
     0.0, 0.0, 0x1.870306cb65e3dp-830, 0.0, 0.0, 0x1.e59b1f8d08a56p-81, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f59fca6479d1p-584, 0x1.2e45a4cad3f31p-354, 0.0, 0.0,
     0x1.dc889838717c3p-597, 0x1.e6400e0110bebp-602, 0x1.df47242375e1bp-763,
     0x1.78812046c4de6p-187, 0.0, 0x1.59c1efbf27e77p-828, 0x1.f3fcd45e60ac8p-280,
     0x1.0efe40fd3401ep-77, 0x1.97b149778dd35p-414, 0x1.b5f60f52a7fafp-748,
     0x1.1b83a01e01dabp-388, 0x1.6196629f3e246p-810, 0x1.e6974417d07d5p-614, 0.0,
     0x1.1c6a2a87ddd9ap-222, 0.0, 0.0, 0.0, 0.0, 0x1.747e03cce8133p-311,
     0x1.3444d301277acp-589, 0x1.51d7196f71f79p-797, 0x1.0fa0d71e62bacp-212, 0.0,
     0x1.4d74c57092e55p-224, 0x1.8a124cdfc06b4p-697, 0.0, 0.0, 0x1.7e9c5972f1ddp-206,
     0.0, 0x1.3518960397e89p-207, 0x1.7975e4a8b385dp-295, 0x1.ce07c730582f6p-209,
     0x1.58df51da98e91p-862, 0x1.b7f203bf3d7fbp-397, 0.0, 0x1.0ee4aa860a66dp-157,
     0x1.d13eb39a7db9ap-59, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d4021aacd009p-721, 0.0,
     0x1.c65ffed2c9e65p-604, 0.0, 0x1.77c0110d159dbp-893, 0x1.f4c527e05185bp-475,
     0x1.dfb7ef1f8f5p-123, 0.0, 0.0, 0x1.f061fe37d2233p-313, 0x1.6ffb558b2eefp-521,
     0x1.f9b19b41908f1p-298, 0x1.3029cfa5d7102p-654, 0.0, 0x1.c08d6f5c20bd1p-255, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92851d40a0701p-592, 0x1.3ac4c7b4a07edp-296, 0.0,
     0x1.c837d210cf061p-825, 0.0, 0.0, 0.0, 0.0, 0x1.40207ab2fc684p-712,
     0x1.6f346b631ccbap-336, 0.0, 0.0, 0x1.5914ddec96073p-323, 0x1.d89626e7200a6p-622,
     0.0, 0.0, 0x1.6ed6eee45b496p-79, 0.0, 0.0, 0x1.86a6af88ba566p-203, 0.0,
     0x1.ee212b076d953p-401, 0.0, 0x1.d82e3abade7f6p-821, 0.0, 0x1.1b1ad69acb2dap-88,
     0x1.3111257c2ff7dp-522, 0x1.183ac2d403dcp-39, 0x1.bcd940f436fa5p-185,
     0x1.8e4d2fcd9af84p-889, 0.0, 0.0, 0x1.9b2f8683d5e8bp-758, 0x1.ab5455ff697ep-880,
     0.0, 0x1.21298a5f90aa2p-281, 0x1.b42cc016cd7b5p-436, 0.0, 0x1.b4bb73603ff89p-39,
     0.0, 0.0, 0x1.0968c89acef86p-882, 0x1.56640e166b872p-34, 0x1.569ff45ccc4b2p-142,
     0.0, 0x1.c85da2d0e0805p-596, 0.0, 0x1.39beb91be7bcdp-329, 0.0,
     0x1.5be5f875ac1a6p-657, 0x1.0fb8b0976509ap-56, 0x1.9d521d7bbd2a6p-466, 0.0,
     0x1.0b54a4d477a08p-788, 0.0, 0x1.ff503b11fa75fp-480, 0x1.15ae1a873f877p-701,
     0x1.1d629e270970dp-33, 0.0, 0x1.759dc63dcd3e7p-3, 0x1.70777f869cc27p-320, 0.0,
     0x1.52f8ae84b8f3ap-699, 0x1.1bbcf30b8de51p-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8b04dc569f873p-179, 0.0, 0x1.4a759697825a5p-888, 0.0,
     0x1.9304779e1bb88p-70, 0x1.6b89b04edd431p-172, 0x1.3e12718e8d123p-675,
     0x1.8ef1854bbeafap-423, 0x1.4f76b137d77d7p-135, 0.0, 0x1.ddec03c070b46p-694, 0.0,
     0.0, 0.0, 0.0, 0x1.95afe45c29672p-431, 0.0, 0x1.96951b497a7f2p-448,
     0x1.aa02cfa8d88a3p-959, 0x1.463bf6f1d97f7p-144, 0.0, 0x1.213065142594dp-630,
     0x1.d578e62e1d7acp-135, 0.0, 0.0, 0.0, 0x1.af9ed718ac5fbp-563,
     0x1.85e99720b9c5dp-603, 0x1.76392d148221cp-799, 0.0, 0x1.dc3271f9e2b87p-188,
     0x1.9d7a3c6b8f4d5p-768, 0x1.ab46e3d3e1df8p-857, 0.0, 0.0, 0x1.858bba9256bb1p-8,
     0.0, 0x1.575b2bbd94a0fp-240, 0x1.d297fd3ec70d1p-627, 0.0, 0x1.6025ce3c908ebp-241,
     0.0, 0x1.7d23de901ca85p-25, 0x1.a3dbe8a918b9dp-449, 0.0, 0.0, 0.0,
     0x1.1223b5e8a2d78p-133, 0.0, 0.0, 0x1.56b5807d0e794p-15, 0.0,
     0x1.ea72b7aeba409p-866, 0.0, 0x1.9933a55d152cap-537, 0.0, 0x1.fd9d7439c0e09p-238,
     0x1.a5c1aae514a8fp-917, 0.0, 0x1.524faeaa0d253p-33, 0x1.e959db70485fdp-181, 0.0,
     0x1.d1e556935b02cp-828, 0x1.ae5b790711003p-843, 0.0, 0x1.92c536ed12d1p-678, 0.0,
     0x1.beb3d261b72f8p-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17325972578f5p-935,
     0x1.b361ce8f53c4p-150, 0x1.961d43c63f48ap-500, 0x1.c392ed7ad7237p-481, 0.0, 0.0,
     0x1.55f4315314236p-956, 0.0, 0.0, 0x1.6093def771471p-369, 0x1.048f019ca41p-654,
     0.0, 0x1.d690769049c25p-212, 0.0, 0.0, 0x1.cd4cc6b5e4c05p-793, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3c36345330277p-193, 0.0, 0.0, 0x1.f384d1a1724f1p-826,
     0x1.25017012c9bc9p-41, 0.0, 0x1.a968dcf7bfd42p-227, 0.0, 0x1.838b5da794c76p-272,
     0x1.cc3b1cb2e3a3p-954, 0x1.9946807fc1aefp-675, 0x1.c0094000351eep-519, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed2661725771ep-996, 0x1.76d7ab10b0995p-233, 0.0,
     0.0, 0.0, 0x1.ff156bb73e702p-490, 0.0, 0.0, 0.0, 0x1.78f898ce3c925p-781, 0.0,
     0.0, 0x1.0f0d99702a17ep-168, 0.0, 0.0, 0.0, 0x1.847448cff3e2ap-810,
     0x1.608fd03fb9076p-259, 0x1.80ea463f057b5p-133, 0x1.e555314e78458p-814, 0.0,
     0x1.2662562040746p-918, 0.0, 0.0, 0x1.38fb4c32f8294p-408, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a82d64f82929ep-223, 0.0, 0.0, 0x1.3c518842761c5p-506, 0.0,
     0x1.d74a98bb0e53ep-216, 0.0, 0.0, 0.0, 0x1.54c52234d9168p-774,
     0x1.575519ce1bf06p-799, 0x1.e057290d6acfp-359, 0x1.b490c59bf70fcp-144,
     0x1.0f00b20f1269dp-573, 0x1.0e3afb5dab49ap-919, 0x1.357360e66efdfp-934,
     0x1.f589db996b6fp-22, 0.0, 0x1.56775b0fc0e58p-155, 0x1.31a7e04bc1725p-267,
     0x1.b0291f3a48de4p-741, 0x1.7cce6ae3bd3f9p-537, 0x1.9e104a3a4aae8p-205,
     0x1.b3814239f0b8ap-816, 0x1.5c84841d82cecp-266, 0.0, 0.0, 0x1.2e76cb0cdbd89p-850,
     0x1.1522bb9b533bep-791, 0x1.588e8f0a3fe5ap-535, 0x1.300e761bbdc64p-201,
     0x1.ac56965886fa3p-262, 0x1.c61ed82f63f97p-267, 0.0, 0.0, 0.0,
     0x1.4cf96fabbce98p-764, 0x1.57bbb68b91ef2p-433, 0x1.a5e82711af6edp-711, 0.0,
     0x1.9515d53e3ec6fp-963, 0.0, 0.0, 0.0, 0x1.f6a809c4aca1ap-888, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a83040be4bbeep-1013, 0x1.832e20c20a21cp-138,
     0x1.a60ba569db35bp-909, 0.0, 0x1.d56047fa5019cp-875, 0.0, 0.0, 0.0,
     0x1.0969cc46e59cap-812, 0.0, 0.0, 0x1.daa93a5252d5p-458, 0.0,
     0x1.d8b7dba28c093p-401, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6e2ada62192ebp-761, 0x1.789bb17a174ffp-800, 0x1.1779d35b05ecap-143, 0.0, 0.0,
     0.0, 0.0, 0x1.bd28f93c49265p-33, 0.0, 0x1.92c127e46b94ap-410,
     0x1.c78bd238d8123p-601, 0x1.4c188731c20c3p-94, 0.0, 0.0, 0x1.9ca259d99a2bp-286,
     0x1.038a0957ee6c9p-737, 0x1.44812efe814d7p-976, 0x1.42d99cf32962ap-169,
     0x1.dc39b876a7684p-148, 0x1.60db976e34f6bp-766, 0.0, 0.0, 0.0, 0.0,
     0x1.4eec4b5ad2f1bp-107, 0x1.b0dba82d930edp-348, 0x1.94a25555bc878p-572,
     0x1.06a3703297283p-121, 0.0, 0x1.53d0906b43f0cp-419, 0x1.427e933ed1033p-184,
     0x1.e70602e2d2867p-44, 0.0, 0.0, 0.0, 0.0, 0x1.fcd6a21397189p-259, 0.0,
     0x1.fe32f8b98953cp-904, 0.0, 0x1.7b1495e3a491fp-276, 0.0, 0.0, 0.0, 0.0,
     0x1.c7048a7e71483p-162, 0x1.2d64d0d84c7b3p-961, 0x1.c38e596c9ace5p-981,
     0x1.7c9ca51df1e4fp-857, 0x1.bd052594e6ba2p-632, 0x1.85f9a206621a6p-308,
     0x1.f1de9bda514cep-640, 0.0, 0x1.13d8cec0c0fbp-837, 0x1.ea83498a9ece3p-430,
     0x1.9d77646ed2b29p-88, 0.0, 0.0, 0.0, 0x1.e1b2d151d377dp-364,
     0x1.55224f49984c2p-73, 0x1.91314cfe6b02fp-920, 0x1.043ac82d4d842p-664,
     0x1.815634b25e09cp-831, 0x1.6c271347ed6fdp-639, 0.0, 0x1.4594a720207e8p-516,
     0x1.c39f807fd43ffp-149, 0x1.dcf1b2d353f78p-968, 0.0, 0.0, 0x1.4bef7f681cac6p-987,
     0.0, 0x1.c761d2cb1860dp-590, 0.0, 0x1.73e9594a3a758p-320, 0x1.c256a30f63fa8p-500,
     0.0, 0x1.1ce429f4cb2f9p-366, 0x1.33a347b2ddb6bp-138, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2d076af6afbfep-12, 0.0, 0x1.00b7bbaeb1aefp-776,
     0x1.f624fcfcdf0cfp-1016, 0.0, 0.0, 0x1.2ef9f9fa6f4b3p-433, 0.0,
     0x1.047476fb50935p-760, 0.0, 0x1.c9a1f97fab157p-779, 0.0, 0x1.479191dca4969p-286,
     0.0, 0x1.02abb520d6d4dp-1015, 0x1.07b323b7dab22p-311, 0.0,
     0x1.4243fbd72622fp-931, 0.0, 0x1.b53fcebe0ac3dp-646, 0.0, 0.0,
     0x1.4d0b219f9bf68p-252, 0.0, 0x1.da62ad3753117p-182, 0x1.f3d1a114bc6bep-6,
     0x1.a4f4c702784f6p-438, 0x1.5b53b6d82664fp-288, 0.0, 0x1.86c170d9d6a5cp-313, 0.0,
     0.0, 0x1.9b609b03c958ep-615, 0.0, 0.0, 0x1.3fd5575c269e8p-355,
     0x1.2abdfdaa13e17p-701, 0.0, 0.0, 0x1.d67d75ad4cdc2p-693, 0x1.fb9df449e5488p-751,
     0.0, 0.0, 0.0, 0x1.af94a5dff374bp-400, 0.0, 0x1.7c00148e22ac8p-243, 0.0, 0.0,
     0.0, 0.0, 0x1.5c33c75cbc0afp-162, 0x1.668bba7a7e565p-692, 0x1.b905f80d2a0c3p-993,
     0x1.d82dbfe90701bp-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26754467b01fp-788,
     0.0, 0x1.96165d16200a3p-46, 0x1.f45c1fbdea288p-945, 0x1.ddb9dcf98292cp-517,
     0x1.5fa5ad63ca479p-544, 0.0, 0x1.33fa4f9df9b7dp-427, 0.0, 0.0,
     0x1.812cd7f0f0a64p-196, 0x1.86b46d47087ap-694, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b7af8b9bd56bp-670, 0x1.6db8fb1338792p-546, 0x1.b931396d14d84p-398, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.82b92bec9b053p-438, 0x1.05a7e375339d6p-573,
     0x1.946512043f515p-884, 0.0, 0x1.657290cc5c5dap-78, 0x1.d2a8d212753c2p-302, 0.0,
     0.0, 0x1.13d4b2deefffap-729, 0.0, 0x1.9a598a9861c53p-101, 0.0,
     0x1.ecb45104749bep-808, 0.0, 0.0, 0.0, 0x1.dc1e88cb1b976p-619, 0.0, 0.0, 0.0,
     0x1.584a4fecb0efep-53, 0x1.9121245e4ce04p-197, 0x1.16de27d4f1fcfp-948, 0.0, 0.0,
     0x1.81f2162eedb51p-816, 0.0, 0x1.9c71919462ef3p-193, 0.0, 0x1.27a6a77706aeep-901,
     0x1.9a83100196815p-547, 0x1.f1bcc13a14c52p-851, 0.0, 0.0, 0.0, 0.0,
     0x1.6bb8cac789c4bp-598, 0.0, 0.0, 0x1.f750e9164c5c9p-651, 0.0, 0.0, 0.0,
     0x1.7b69dbac7f766p-138, 0x1.8c75bc7c6c0a4p-512, 0x1.681a350117b92p-343, 0.0, 0.0,
     0.0, 0x1.ca8caa0ce8932p-148, 0.0, 0x1.bb9cad1010337p-796, 0x1.26778baa3890cp-881,
     0x1.3eaf2f2ff9384p-338, 0.0, 0x1.8807ecefbbb8ap-746, 0.0, 0.0,
     0x1.2e2a7625af0b2p-966, 0.0, 0x1.1b3ff236640e7p-554, 0.0, 0x1.1a0e09ef7924fp-582,
     0.0, 0x1.159e5da525cc9p-615, 0x1.f921e1a6e17c1p-38, 0x1.6d306d86c0798p-514,
     0x1.53a5b8eed82d5p-480, 0x1.d6d602e3a5612p-486, 0.0, 0x1.93412660db2d4p-740,
     0x1.4d136a874e2b4p-153, 0.0, 0.0, 0.0, 0.0, 0x1.42f8b29c2e14bp-1012, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.587c51fbd279p-573, 0x1.5f60205791216p-873, 0.0,
     0x1.176ca2f6abd0bp-180, 0.0, 0.0, 0.0, 0x1.53a3b6c7f7f8p-833,
     0x1.c830c3f4648ffp-72, 0.0, 0.0, 0x1.ce0002d226faap-299, 0x1.f79959d78bd75p-821,
     0.0, 0x1.0c9c504b3dba1p-111, 0.0, 0x1.fb0265a2fb685p-456, 0.0, 0.0, 0.0,
     0x1.6041d36c15705p-991, 0.0, 0.0, 0x1.dfd34ff15c737p-734, 0x1.5bed46538f2d2p-803,
     0x1.147711d421cb3p-755, 0x1.0f2e600a73bb1p-116, 0.0, 0x1.033201c42f95bp-511, 0.0,
     0x1.9fdd8f9fa7c8p-835, 0x1.88c511dd0bdadp-383, 0x1.5df98c36e5a44p-972, 0.0,
     0x1.7c01187e0d041p-549, 0.0, 0x1.fc7f3c70334d2p-348, 0.0, 0x1.737d98dc884d8p-711,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4069b31c8ded5p-104, 0x1.ed4e7d4ee9c9p-165, 0.0,
     0x1.c7f50e9ec36bap-583, 0.0, 0x1.15fd9a00b7501p-969, 0.0, 0.0,
     0x1.692d8ab1f4dfap-905, 0x1.2ed0d547b55f4p-341, 0.0, 0.0, 0x1.0a5737286744fp-387,
     0x1.fab5d9914db77p-752, 0.0, 0.0, 0.0, 0x1.183fea1b87fd6p-1017,
     0x1.e67f9795a581ep-643, 0x1.ea7660026b33ep-961, 0x1.c28a357fc7a58p-53,
     0x1.f060ad34b1397p-770, 0x1.6f414f9a73336p-519, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_ceild4_kvx(tmp0);
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
    printf("Sleef_finz_ceild4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_ceild4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
