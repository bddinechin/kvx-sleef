/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd1_u35purecfma.c --function \
 *     Sleef_tanhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54732b99c1429p-12, 0.0, 0x1.4698ccd6096a5p-386,
     0.0, 0x1.9ec25d03761b6p-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb4cd48ebc219p-112,
     0.0, 0.0, 0x1.26a7f36359895p-939, 0x1.abf795f94135bp-953, 0x1.2839d2383264cp-837,
     0.0, 0x1.62529dd70a295p-358, 0x1.5f66a34c1605p-200, 0x1.db6cd4300f76cp-497,
     0x1.3b8a1e2e0f558p-815, 0x1.4d63552631782p-562, 0x1.e6c33fbd8658bp-44, 0.0,
     0x1.79967690939e8p-709, 0x1.2a983c72a679bp-416, 0x1.b3d831fcd1e57p-181, 0.0, 0.0,
     0x1.a765d1813a7f2p-875, 0x1.3a7562c37848ep-304, 0.0, 0x1.dd535862874d7p-186, 0.0,
     0x1.94ba17c061ef5p-803, 0x1.6aca9d302e039p-524, 0x1.fdd658d882d79p-484,
     0x1.f93bbe88f39b3p-544, 0x1.de3a710eb39aep-876, 0.0, 0x1.d22f22ae86a9ap-345,
     0x1.cbaf0707f002p-276, 0.0, 0x1.56f7a6510d3e6p-255, 0x1.b30f16ff5b0e5p-810, 0.0,
     0x1.53e7feee08499p-237, 0.0, 0.0, 0x1.51db5b338aa23p-934, 0x1.6f548480c7799p-380,
     0x1.bde6c9804d352p-86, 0x1.3bf844ca89c52p-312, 0x1.05ce9c1d2c034p-429, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9ad55135aac79p-677, 0x1.0b184ded9d444p-563,
     0x1.afc5aa2fad01dp-403, 0x1.5b0fc98a55b1ep-707, 0x1.e8c3ca7f311cap-766, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e230bb2bfb6a9p-194, 0.0, 0x1.2465d4d2226e8p-824, 0.0, 0.0,
     0x1.ce9ea257d79efp-797, 0.0, 0x1.d99e6d1cb3f3bp-88, 0x1.a806a83295e0bp-590, 0.0,
     0x1.9c58fe574565cp-735, 0x1.7a01e308e526ap-277, 0.0, 0.0, 0x1.37b314151a5cap-353,
     0x1.c68852eea148cp-341, 0.0, 0x1.0f6b59b6e4302p-453, 0x1.352f5bfeebae9p-13, 0.0,
     0x1.d99d7f95d2c05p-760, 0x1.c4d5e35d997dp-170, 0x1.d029679ef96aep-1017,
     0x1.9499fcb42d40dp-246, 0x1.4cb49d6898a1p-996, 0x1.4dbb4a8ba2c21p-813,
     0x1.769baa43ce0fp-48, 0x1.8269599be48d4p-118, 0.0, 0x1.f8336cf95ad9fp-312, 0.0,
     0.0, 0.0, 0.0, 0x1.40cdd6684e62ep-757, 0x1.46f469402a49bp-22, 0.0,
     0x1.4de219650357ap-181, 0.0, 0.0, 0x1.4f1a8e1d46389p-897, 0.0,
     0x1.dc67712c7585p-328, 0.0, 0x1.592add2c3f92dp-661, 0x1.f2d067a389918p-211, 0.0,
     0.0, 0x1.0442c9e6272e5p-491, 0x1.337f70c37f6e8p-36, 0x1.a3f5025c74984p-427, 0.0,
     0.0, 0.0, 0x1.d8a2565231663p-92, 0.0, 0x1.e4bdcf1fb2d55p-203, 0.0, 0.0,
     0x1.9b6c2b9b98be8p-382, 0.0, 0.0, 0x1.2f3a0c75ab5cbp-875, 0.0,
     0x1.76e29ee88eb6ap-193, 0.0, 0x1.f790584802fd5p-10, 0x1.a4cebe6dc6994p-523,
     0x1.24df961abe55fp-220, 0.0, 0.0, 0x1.f55a4290b881p-351, 0x1.1cb08e1689297p-102,
     0.0, 0.0, 0x1.487897426af1bp-1008, 0.0, 0.0, 0x1.f87913737597ep-834, 0.0,
     0x1.db186ebcd2732p-781, 0x1.954549afffd4cp-248, 0.0, 0.0, 0x1.1ac408e26ccfap-296,
     0x1.79cba9d9337f3p-904, 0.0, 0.0, 0x1.4bd64ffedf8aep-875, 0x1.e3722bbcf6b0ep-599,
     0x1.39b4a4fcf4f62p-687, 0.0, 0.0, 0x1.bfb9aaa0cd9f2p-407, 0.0,
     0x1.d5774d89ba281p-154, 0x1.d40c71ce3324ep-16, 0x1.865919b35683bp-571, 0.0,
     0x1.3dd26d50c1617p-186, 0x1.4b65e6f2d402ep-338, 0.0, 0x1.c7727715a97c5p-833, 0.0,
     0x1.30547ff8e31c9p-816, 0x1.bba17c3973734p-347, 0.0, 0x1.8a1ba9a7cee13p-621,
     0x1.042d8b3cb85a1p-125, 0.0, 0x1.d40b6a98e3596p-193, 0x1.8d24bed47312cp-187, 0.0,
     0x1.567d58c90c42bp-415, 0.0, 0x1.22271233cfe8ep-155, 0.0, 0.0, 0.0,
     0x1.7ebeabd6eac79p-250, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a61afc2b1095bp-895,
     0x1.e7f1face1d127p-224, 0.0, 0.0, 0x1.64fa963b5e9e9p-484, 0.0, 0.0,
     0x1.69f8b483274p-897, 0.0, 0x1.33e9af387f4fbp-218, 0x1.fb65ffbd720d8p-736,
     0x1.9246c3dec212cp-928, 0.0, 0.0, 0.0, 0x1.6b106e908a8f2p-849, 0.0,
     0x1.640a978481e1ep-725, 0x1.f52c877a17fe3p-899, 0.0, 0.0, 0x1.c5068617b401dp-165,
     0x1.04ca32430c53p-761, 0.0, 0x1.c99eb77baf054p-932, 0x1.c378f4fc45234p-549,
     0x1.2a43d480da2a1p-640, 0.0, 0x1.68001571d23a2p-755, 0x1.c245ff11388d2p-978,
     0x1.6ce7a9d875e83p-636, 0x1.c43b89834a816p-313, 0x1.ee10df05d1fbp-722,
     0x1.548a93b15cd0fp-711, 0x1.875ff7515149bp-828, 0x1.f1dd0869b9b3p-241,
     0x1.962a771cfa912p-508, 0.0, 0.0, 0.0, 0.0, 0x1.6631e0ea32e7ap-106, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4d8014da5692p-782, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c4cb4f66b4f71p-684, 0.0, 0x1.24af1f2bc0a01p-220, 0x1.1927737f5dep-200,
     0x1.6334f67b59223p-839, 0.0, 0x1.0cc5a21d2a5c3p-75, 0.0, 0x1.56fb9bb4da611p-999,
     0.0, 0x1.940d91b2d0a02p-622, 0x1.c5fa1e3a31861p-656, 0x1.60124af3820cdp-125,
     0x1.b35035502b263p-411, 0.0, 0x1.890754dadb91ap-363, 0x1.cf5dfdf6aada7p-19, 0.0,
     0.0, 0x1.47c3af199593ep-753, 0.0, 0x1.ac8f03c091342p-446, 0.0,
     0x1.f39fc13af2faep-846, 0x1.701b60dd17211p-645, 0.0, 0x1.32a3d851f9bfdp-534,
     0x1.13db618810497p-991, 0.0, 0.0, 0x1.1a8eb22bc98a8p-340, 0x1.b170cbfc0e4f3p-854,
     0x1.7bf6cbcfef9f3p-100, 0x1.8a9138de3754fp-373, 0.0, 0.0, 0x1.79b8b5999e06ap-634,
     0x1.13ce121dda8d7p-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba8ced43394aap-233, 0.0,
     0x1.c4ab37d7d80b2p-804, 0x1.a8bbf55e43514p-792, 0x1.b18e48511e727p-976,
     0x1.6a2a4cd4c43ep-68, 0x1.b872f75477ac3p-891, 0x1.fe1fa6708d1b2p-1003,
     0x1.ab1c647624b7bp-184, 0.0, 0x1.7f2920df23b9cp-17, 0x1.cd257fad49e6fp-153, 0.0,
     0.0, 0.0, 0.0, 0x1.35a257dacf2bp-371, 0.0, 0x1.49ab952f4ed9bp-658, 0.0, 0.0, 0.0,
     0x1.51db2e8342271p-762, 0x1.6f38ede15f4a3p-376, 0.0, 0.0, 0x1.a4b5e12e82286p-14,
     0.0, 0.0, 0x1.a3cd68b2bce0ep-239, 0.0, 0.0, 0x1.c5ab5715254dp-43, 0.0, 0.0, 0.0,
     0x1.2ce43cf022a1cp-333, 0.0, 0x1.708d4d3af765ap-943, 0.0, 0x1.f2647f575042cp-868,
     0.0, 0x1.d6c6378d276bcp-253, 0x1.f6f2ab6a0c5cbp-305, 0.0, 0.0, 0.0,
     0x1.b9aeaa515b341p-830, 0.0, 0.0, 0x1.505fe3ba805bp-876, 0.0, 0.0,
     0x1.123f67445ce0bp-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5509cfac92b02p-935, 0x1.3061335cb9c0dp-788, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17f25980941c9p-581, 0.0, 0.0, 0x1.554ca1a725a81p-833, 0.0, 0.0,
     0x1.5105abee36f8dp-383, 0.0, 0.0, 0.0, 0x1.d8dadcc908278p-981, 0.0,
     0x1.44d47c4462813p-202, 0.0, 0x1.e47e9b99a17b3p-612, 0x1.3d3bbf6f3c1f9p-701,
     0x1.56daee1ebcd65p-380, 0x1.efc1dac9e4be7p-524, 0.0, 0x1.560090c60aae3p-175, 0.0,
     0x1.a978fc0b02c3cp-157, 0.0, 0.0, 0x1.c0ca346fb7222p-400, 0x1.83e9b865c0afep-652,
     0x1.5382f3961fbc7p-735, 0.0, 0x1.78c5054414261p-732, 0x1.987e2bdb765p-396,
     0x1.7782ddfa63b31p-376, 0.0, 0.0, 0.0, 0x1.365706d5a5209p-793, 0.0,
     0x1.9296e2a66ac29p-962, 0x1.1a8f6f25771efp-945, 0.0, 0x1.97d895e9528dap-344,
     0x1.4aa2663e25ab5p-902, 0x1.20f445d0dce1ep-613, 0x1.86ce7e72b3111p-426, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.63eba1bbd4cfdp-168, 0.0, 0x1.fd7b963fc9427p-947,
     0x1.c3a70ad80a9cfp-165, 0x1.43fb60f83f80bp-1021, 0.0, 0x1.9b242d40e358bp-687,
     0x1.31701197b8d4dp-675, 0x1.30b9cb8ceec2bp-385, 0x1.734bf1ae9a476p-316,
     0x1.9067347bfa607p-691, 0x1.4ee21eaf6108cp-623, 0x1.b2ff2c526dd77p-541,
     0x1.06a9dc89ac236p-992, 0x1.395929184ee93p-385, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d584ce210806p-388, 0x1.0d6736cc9ab63p-26, 0x1.2ac61732c4289p-649, 0.0,
     0x1.fbe3edb0e5af6p-893, 0x1.2c25878462481p-623, 0.0, 0x1.dbebd63886bbap-211, 0.0,
     0x1.96d086232bc24p-670, 0x1.85ccd66bb84bep-767, 0x1.fb8eeba918b89p-388,
     0x1.e7ccd7312d6b7p-537, 0.0, 0.0, 0x1.5cd8392d121abp-838, 0x1.032d56ca99dd2p-340,
     0x1.c03ef05504901p-44, 0.0, 0.0, 0x1.54233916b0162p-956, 0x1.fe1a0a945ae74p-767,
     0.0, 0x1.919adac717507p-878, 0.0, 0x1.18ec124581e4ap-389, 0.0,
     0x1.4682404cd802ep-533, 0.0, 0x1.3258deec71e55p-77, 0x1.cadd21907616ep-965,
     0x1.e438260f70232p-292, 0x1.0573344103b09p-575, 0.0, 0x1.0772ff6e5b176p-467, 0.0,
     0x1.a64a091849357p-590, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e89e85708954p-507, 0.0, 0x1.2770aeaf01f9bp-281, 0.0, 0.0,
     0x1.ee8e9f36374f8p-326, 0x1.9f5326fa8530bp-59, 0x1.6426fb88c0bcap-368, 0.0, 0.0,
     0.0, 0x1.e1f835623c32dp-251, 0.0, 0.0, 0x1.d017a944e71f7p-751,
     0x1.221639011099fp-548, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.457b83b561f93p-959,
     0.0, 0x1.20f3a946f332bp-624, 0.0, 0.0, 0.0, 0x1.0f52e43b43237p-1016, 0.0, 0.0,
     0.0, 0x1.ef0dd78a9e3a9p-641, 0x1.785031520c604p-185, 0.0, 0.0, 0.0,
     0x1.9499bb04f160ep-513, 0.0, 0x1.6e5268bbbf2f9p-774, 0.0, 0.0, 0.0, 0.0,
     0x1.f905ab1044803p-474, 0x1.79a60be887708p-529, 0.0, 0x1.3b510a4799a73p-722, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.59db60f7c7bc4p-854, 0.0, 0x1.0fac052683eefp-900,
     0x1.52013a2ca93f7p-556, 0x1.a89cc3e69151dp-404, 0x1.84e0c893e4c07p-342, 0.0,
     0x1.15e6f592dfe17p-967, 0x1.6cc7f627ba66ep-783, 0x1.135da2aac5d4ep-721, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.65c52bc84109ep-466, 0x1.f20fa0511037p-740,
     0x1.3197ed136c258p-999, 0x1.b3df0f650fb69p-47, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c209c2b20d88ep-884, 0x1.20cf119a88338p-210, 0x1.b2066f431c032p-89, 0.0, 0.0,
     0x1.9890e152871d1p-807, 0.0, 0x1.010d91a5488a1p-44, 0.0, 0x1.e9c1978246f44p-845,
     0.0, 0.0, 0x1.5539dbf0d2bbdp-143, 0.0, 0.0, 0.0, 0x1.5147e16b3e14ep-504, 0.0,
     0x1.c671e73d87ccap-212, 0.0, 0x1.2d5796b69630cp-870, 0x1.59cfad68f6c98p-17, 0.0,
     0.0, 0.0, 0x1.a346c2d190e6cp-309, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a1ec40bbf8962p-687, 0x1.f2c8a5cb18236p-727, 0x1.5215dce7acfa1p-55, 0.0,
     0x1.ca1b7da9be448p-752, 0x1.31d3993fbcdeap-320, 0x1.e4d6a680a9bc6p-539, 0.0, 0.0,
     0.0, 0x1.0b5ba103e823dp-462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98ae70b9c9befp-801, 0x1.c3c8085308435p-501, 0.0, 0x1.c5ee128efd2dep-223,
     0x1.e25464fa72174p-340, 0.0, 0x1.c0978ed6e31p-482, 0x1.01058216a82cfp-94,
     0x1.c5030cf4568ebp-379, 0.0, 0x1.0c3c1f300b5a3p-342, 0x1.429eb88fe65aap-580,
     0x1.589aba5b0b42dp-406, 0x1.8e006c0c31383p-789, 0x1.81c07e50bfa7dp-576, 0.0,
     0x1.4b91b5535518p-541, 0.0, 0.0, 0x1.7d5843cafed93p-756, 0.0,
     0x1.b42a5c3192625p-960, 0.0, 0x1.c023db1e578ep-780, 0x1.dcf09abc670e1p-914, 0.0,
     0x1.6fd6c65f51c62p-405, 0x1.b723653cf4647p-813, 0x1.274a94e864b91p-359,
     0x1.c6dd4296839e8p-978, 0x1.8c6a1d4625c8p-869, 0.0, 0.0, 0x1.361af22c31e6cp-546,
     0.0, 0.0, 0x1.6233488f78022p-878, 0x1.8b23e0ce508b3p-1013, 0.0, 0.0,
     0x1.9c67dc5045b07p-663, 0.0, 0.0, 0.0, 0.0, 0x1.cda6189356aa1p-609, 0.0, 0.0,
     0x1.63c8d635d3632p-400, 0.0, 0x1.a4e2a09ba96aep-1021, 0.0,
     0x1.5646912418dd4p-376, 0x1.ae8c96d6aef0cp-548, 0x1.cbea8fb03046ep-15, 0.0,
     0x1.0bd8c367e11f2p-284, 0.0, 0.0, 0.0, 0.0, 0x1.ca16f80029444p-679, 0.0,
     0x1.d9ad23599bf0cp-266, 0x1.4c4b3ee834b74p-366, 0x1.972414ddf75fap-746,
     0x1.a1bdf9a9392e3p-583, 0.0, 0x1.afb8a506a24d1p-699, 0x1.5e194645a97c4p-367,
     0x1.d7b873d8b9562p-183, 0.0, 0x1.f4dc86ec4c2e9p-167, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.19baf1efa01c3p-689, 0x1.9196c3421929ep-58, 0.0, 0.0, 0.0,
     0x1.0a19fec249134p-255, 0x1.1c164e627258dp-930, 0x1.0de8dc68cd2f1p-563, 0.0,
     0x1.953a65189a5e9p-487, 0.0, 0x1.e077d85882811p-426, 0x1.751b6b23a4879p-285,
     0x1.553faa18f1409p-961, 0x1.39b1e08028438p-1017, 0x1.3ee0396a81d49p-822, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5733956836decp-596, 0x1.fbe74bb4e71f8p-539, 0.0, 0.0,
     0x1.c05f8d8ab58c9p-821, 0x1.16204752d605cp-351, 0x1.ca1a9b71be3b3p-519, 0.0, 0.0,
     0x1.f4d2e3566f79ap-561, 0x1.4a08149b84a05p-486, 0.0, 0x1.08b30c89a4c45p-818,
     0x1.f6df680e4bb21p-41, 0x1.231f6f9e44c8ap-721, 0.0, 0x1.8ec97e180b6a7p-698, 0.0,
     0x1.04170a53b5204p-952, 0x1.e4553f614763fp-474, 0.0, 0.0, 0.0,
     0x1.e0d7cb98e14f2p-1017, 0.0, 0.0, 0.0, 0.0, 0x1.3f0c4dbfb37abp-834, 0.0,
     0x1.5f265b624dbfbp-637, 0x1.e9ef82a23067ep-838, 0.0, 0x1.d0a94218e9f2bp-175,
     0x1.81884c1b3a333p-711, 0x1.3dc72eb605252p-629, 0.0, 0x1.ddc17bb877205p-937,
     0x1.7f1247b2edbacp-466, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.153d9fa47b3fep-608, 0.0,
     0.0, 0x1.9694f6cf3e805p-188, 0x1.6fc5beaf8b4e1p-330, 0x1.23052c7b6e78cp-158, 0.0,
     0.0, 0x1.61f624bba7fbdp-287, 0.0, 0x1.92790f96dd52cp-437, 0.0,
     0x1.eff57111dcdap-12, 0x1.ab9fb6d085cf4p-707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35c1881a1dcc6p-998, 0x1.b169efd0aab61p-184, 0.0, 0x1.23b7f9dd5df9dp-269,
     0x1.d8f46c1f61a3dp-361, 0.0, 0x1.ea083e499d02bp-750, 0x1.372ae2287179bp-362, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b9a8a2553576p-197, 0x1.ddbb7863b3502p-673,
     0x1.83b728836a698p-289, 0x1.c40c3b1d5fad5p-689, 0.0, 0x1.fea933c40bc63p-821,
     0x1.5053e62e04749p-790, 0.0, 0x1.73d6d112da782p-915, 0x1.f6c1db5d43d2bp-997, 0.0,
     0x1.534389149d03p-1017, 0.0, 0x1.b176d04d3949dp-751, 0x1.3826a0d4431aep-631, 0.0,
     0x1.3425220e43e6ep-965, 0x1.72e5d5569d581p-690, 0.0, 0.0, 0.0,
     0x1.4c799b9c4f2bap-800, 0.0, 0x1.9b7e4ae2a60e8p-1022, 0.0,
     0x1.5e0ed4441c361p-302, 0.0, 0.0, 0.0, 0x1.80fef4b1b968dp-962, 0.0, 0.0, 0.0,
     0x1.ee5e7c683ec14p-225, 0x1.f10085383028ep-354, 0.0, 0x1.874befb0db224p-247,
     0x1.312d07a8e1161p-844, 0x1.0de538029d5fap-444, 0x1.8a314a304fe28p-905,
     0x1.8663894cacd88p-232, 0.0, 0.0, 0x1.164856834d778p-579, 0x1.7dafb14a6558ap-515,
     0.0, 0.0, 0x1.5ea4282d862c9p-199, 0.0, 0.0, 0x1.3f0ee9517debbp-893,
     0x1.88bfd3acdce5bp-98, 0x1.ae2147d657a2p-340, 0x1.a85861c5308d3p-442, 0.0,
     0x1.b862690f17d1dp-172, 0x1.9a941ac5a074ep-136, 0x1.3384271cc3b2p-265,
     0x1.86cf9ca2284d9p-606, 0.0, 0.0, 0x1.e6117dda260dp-275, 0x1.3a360a9debf7ep-805,
     0.0, 0.0, 0x1.6b4e9347bfc04p-867, 0.0, 0.0, 0x1.122418160004p-123,
     0x1.f6f66abbe5bp-882, 0.0, 0x1.34a8db6488d4p-274, 0.0, 0.0, 0.0,
     0x1.f4cd9454677d3p-427, 0.0, 0x1.b74bb16ee169ep-477, 0x1.be114b560186cp-830,
     0x1.801eb2358e0a6p-407, 0x1.0058f846b1e92p-307, 0x1.bc1067db6c855p-143,
     0x1.5be2eb12375dp-13, 0.0, 0x1.4f7ae376801fp-164, 0.0, 0x1.068d74f2dde57p-646,
     0.0, 0.0, 0.0, 0x1.de275444083a4p-57, 0.0, 0x1.774d11f446843p-183, 0.0,
     0x1.084b820895d57p-998, 0.0, 0x1.c87367a363d1ap-738, 0.0, 0x1.5bf888e0eb8f8p-181,
     0.0, 0.0, 0x1.e73bee2acb7f6p-539, 0.0, 0x1.5e95c62e9b4f2p-962, 0.0,
     0x1.885ad8b9adc61p-954, 0.0, 0x1.3210dc884b85bp-893, 0.0, 0x1.efc297c434048p-248,
     0x1.47bb30ccd1b99p-421, 0.0, 0.0, 0x1.09a5a67fb5f75p-907, 0x1.ebf3b416e505fp-46,
     0x1.0f9cadd92c42ap-440, 0x1.fd2fba1ee9302p-588, 0x1.a5d6bf977ceb2p-699,
     0x1.8546928be30d7p-166, 0x1.b35f0652d83f2p-352, 0x1.60f3cd391efb8p-477, 0.0,
     0x1.1940d02f308f9p-294, 0x1.d6c91402e3ce7p-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.432fc533b2f4cp-221, 0.0, 0.0, 0.0, 0x1.d499d6d08c828p-195, 0.0, 0.0,
     0x1.33216000c073fp-972, 0x1.c2a885fe8725ap-11, 0x1.727c92e9257c5p-308, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1e2c5c4249a4p-741, 0.0, 0.0,
     0x1.a5a0d8d8a592cp-659, 0x1.fe633ef6ab7cdp-200, 0x1.4dcdf6baacaaap-905,
     0x1.3a17eaa74e981p-514, 0.0, 0x1.4ad630da16d07p-605, 0.0, 0x1.8870fd867f622p-413,
     0.0, 0x1.a5ec354cb20ddp-20, 0x1.01bc4af09c62ep-811, 0.0, 0x1.6b4c3934b52c2p-283,
     0.0, 0.0, 0x1.76dcece810087p-79, 0.0, 0.0, 0x1.d77b3bec3ca4ep-589, 0.0, 0.0, 0.0,
     0x1.58be32fe0cc36p-693, 0.0, 0.0, 0x1.d953a5b4422e6p-39, 0x1.ff602b70afb3dp-848,
     0.0, 0x1.73820b55d7e86p-436, 0x1.cc791f5675f0ep-65, 0.0, 0.0,
     0x1.15d4e3985b85ap-465, 0x1.49d21eb9b9486p-419, 0.0, 0.0, 0.0,
     0x1.22f1154049171p-497, 0.0, 0x1.4255ad794b829p-513, 0.0, 0.0,
     0x1.d8c599b46fcbep-149, 0.0, 0x1.591cac7d74b82p-972, 0.0, 0.0,
     0x1.a625d9d133a24p-97, 0x1.16ba96806194dp-964, 0x1.7721e21611d8cp-364,
     0x1.f94b79cbe57dp-30, 0x1.98c1ee78a41d2p-962, 0x1.49f819b694ce4p-882, 0.0,
     0x1.46c4ef21eb45bp-84, 0x1.a1cb34cbc56cdp-270, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33d480a8945abp-651, 0x1.0e09b89f664a1p-586, 0.0, 0.0, 0.0,
     0x1.07cd7f57a79fcp-857, 0x1.9037bb71f5239p-225, 0x1.8e26a03bbde37p-104
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
            tmp1 = Sleef_tanhd1_u35purecfma(tmp0);
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
    printf("Sleef_tanhd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
