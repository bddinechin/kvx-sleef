/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_cos.c --function cos --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.8902162486a8cp-462, 0x1.ea9c91917432ap-472, 0x1.7ec47732c2309p-925, 0.0,
     0x1.c991d0e9a9231p-459, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c25e5496296c7p-913, 0.0,
     0x1.8dfa573d07c19p-150, 0x1.c05405ba84b0ap-595, 0.0, 0x1.a3a3934e32148p-688,
     0x1.fa1172787ec1dp-765, 0x1.4124f38eb7239p-545, 0.0, 0.0, 0.0, 0.0,
     0x1.5fb807de88ef3p-472, 0.0, 0x1.4ef08c024a84p-54, 0x1.6044633728ddfp-239,
     0x1.0fddc1c05cf9dp-223, 0.0, 0.0, 0.0, 0x1.e632573b524b6p-276, 0.0, 0.0, 0.0,
     0.0, 0x1.677cf14643451p-108, 0x1.dc48211816c07p-669, 0x1.37f8fa716ce32p-118, 0.0,
     0.0, 0.0, 0.0, 0x1.6d88ed6967b45p-342, 0.0, 0.0, 0x1.afeb127aa6837p-762,
     0x1.12a4aa3d4bd24p-103, 0.0, 0.0, 0.0, 0x1.abd921764598ap-401,
     0x1.dae31d04e5c44p-360, 0x1.829ccd02e8f19p-926, 0.0, 0.0,
     0x1.234df82f586aep-1013, 0.0, 0x1.f2cc31a8627cdp-153, 0x1.7ffeb13ed97a3p-386,
     0x1.6d54be8647c37p-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8aaf8867f74cp-954, 0.0,
     0x1.f60ada3678f05p-545, 0x1.667245e720bc1p-108, 0x1.bb4030424b2b8p-441, 0.0, 0.0,
     0.0, 0x1.595d392c414ap-854, 0x1.88ca62505bb8p-534, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c329537cc07e3p-455, 0x1.2ef8eb697f3abp-770, 0.0, 0.0, 0x1.3fa92eb25a474p-458,
     0x1.92dec781f226dp-903, 0.0, 0x1.51d487a249dddp-276, 0.0, 0.0, 0.0, 0.0,
     0x1.f9c23b5923653p-372, 0.0, 0.0, 0x1.5199ea2c6a485p-592, 0.0,
     0x1.f96d2364f01b5p-72, 0.0, 0x1.7fd5283695f0cp-198, 0.0, 0.0, 0.0,
     0x1.6d5ddffa5f313p-795, 0x1.1c205141bdb44p-286, 0.0, 0.0, 0x1.cae374ab0d003p-634,
     0.0, 0x1.f0bd597c1e929p-426, 0.0, 0x1.aed78b08ca842p-834, 0.0, 0.0,
     0x1.882834b963be9p-289, 0x1.c1d6bef88d16cp-425, 0x1.8f3a9cac4d4f1p-805,
     0x1.8bb40f1cb9941p-776, 0.0, 0x1.a9e8b75275eep-790, 0x1.a3b70586f8f7cp-695, 0.0,
     0x1.e781da48ea827p-135, 0x1.48929311d8956p-514, 0x1.5f68ab8a32523p-562,
     0x1.0c9c6e62dbf12p-540, 0.0, 0x1.30254d2ac6178p-999, 0x1.b77b5156773d5p-645, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec57ace72d1f4p-123, 0x1.aaec079647bffp-905,
     0x1.338ee32c994b7p-610, 0x1.7362762d4de4ep-1016, 0x1.69fe79cf394bp-775, 0.0,
     0x1.dce868f297665p-717, 0x1.5af8731bd1342p-381, 0.0, 0x1.ce215c42aa501p-1014,
     0x1.71e7af54fa6aep-389, 0x1.0561aa67b21efp-918, 0x1.451206ba1c05ap-332,
     0x1.df3d698bff96ap-138, 0.0, 0.0, 0.0, 0x1.71890697e0f95p-707,
     0x1.ff27ee594d418p-373, 0.0, 0x1.a16241f6632aap-920, 0.0, 0x1.d49f9d0c625ddp-878,
     0.0, 0.0, 0.0, 0x1.320872e6c6efep-34, 0.0, 0.0, 0.0, 0x1.e1ce1bdf9b7b5p-474,
     0x1.c8d7634ab0835p-348, 0x1.cb266a9df2982p-388, 0.0, 0.0, 0.0,
     0x1.92067bc6226f1p-284, 0x1.a61eb05d04162p-483, 0x1.0c4989d14f6eep-536,
     0x1.eaed6b2d6b707p-220, 0x1.d968bdda2d3cbp-44, 0x1.888e0f47b803bp-132,
     0x1.7569286889531p-269, 0.0, 0x1.a3283e2f4ecf3p-838, 0.0, 0x1.c5f2face2af4fp-236,
     0.0, 0x1.694219b40f819p-300, 0.0, 0x1.5e424bd9d566p-582, 0x1.3d9163892c1edp-923,
     0.0, 0.0, 0.0, 0x1.af5e2a2aa0e1fp-689, 0.0, 0x1.af9d0685224a2p-439,
     0x1.d4e94623cba3p-251, 0x1.1a6dc4515c2ecp-736, 0.0, 0x1.908020f37fcfep-13,
     0x1.45d1a4268650bp-221, 0.0, 0x1.e3ca7f04d098ap-914, 0x1.683919f40c149p-853,
     0x1.f110ebc3ca4e8p-67, 0.0, 0.0, 0x1.6a0cf89419c4ap-755, 0.0,
     0x1.5d9e5da1e8e6ap-251, 0.0, 0.0, 0.0, 0.0, 0x1.20933502779a2p-470,
     0x1.95c5bfd9497fep-403, 0x1.d7c71b67f6804p-765, 0.0, 0.0, 0x1.03e7fd1fba817p-643,
     0.0, 0x1.18931ed4e7dd7p-495, 0x1.50b1877754bap-886, 0x1.4149ca58e33dep-344, 0.0,
     0.0, 0x1.d5a9e59e8ef3cp-556, 0.0, 0.0, 0.0, 0x1.caf48ec9033e6p-354, 0.0,
     0x1.43a5ceb557c16p-896, 0x1.5ad1dc3b9f895p-218, 0.0, 0x1.b8e62e1bc2f01p-411, 0.0,
     0x1.4974506aad9bp-900, 0.0, 0.0, 0.0, 0x1.eda5540fd963ap-574,
     0x1.6dbfa7e7f03a9p-517, 0x1.52bd400558598p-594, 0x1.2a98929b799aep-988,
     0x1.67358e7958206p-999, 0x1.6b04cdc612376p-961, 0.0, 0x1.51caa122eacep-961,
     0x1.4f3394db52fcdp-240, 0.0, 0x1.62b77424111eap-967, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6e14e62f4693ep-446, 0x1.58660326d7717p-695, 0.0, 0x1.0a7f63c2fd571p-890,
     0x1.d1126374b069fp-989, 0.0, 0.0, 0x1.51d3e1cccb1f2p-332, 0x1.8fb8a5cd45587p-569,
     0x1.9a49fac8b7b6ap-682, 0.0, 0.0, 0.0, 0x1.b76379a98cf34p-812,
     0x1.619ff028933dep-875, 0x1.31abe6436f90bp-210, 0x1.68c4b6d164a0ep-891,
     0x1.51bd86085f071p-386, 0x1.fcafb8a9ef643p-1009, 0.0, 0.0,
     0x1.562cd60439d4cp-387, 0.0, 0x1.fccca6c93810ep-207, 0.0, 0x1.e1d10641555bp-282,
     0x1.9b264a54a04e4p-502, 0.0, 0x1.26a9749ae22edp-455, 0.0, 0x1.59c631a07ca0ap-646,
     0.0, 0x1.d3358f3e6ae48p-486, 0x1.f08353cad3f34p-971, 0x1.1bc49282c01fp-460,
     0x1.574390d85516bp-341, 0.0, 0.0, 0x1.d2e4300a5e1d9p-560, 0x1.67aad24cbfd5ap-156,
     0x1.624f7255b789ap-1015, 0x1.f6764d877d3p-199, 0x1.9e16f31dd6f8p-355,
     0x1.97dfe089274b6p-801, 0x1.169aaa6f4f41p-151, 0.0, 0.0, 0x1.83dee16c4ac27p-15,
     0x1.ceb221061c97cp-996, 0x1.423d962d69604p-707, 0.0, 0.0, 0.0,
     0x1.bac6bd1c52cd9p-959, 0.0, 0.0, 0.0, 0x1.d41c270d1bb45p-162,
     0x1.65f132948249bp-567, 0x1.882b92484ebfbp-3, 0x1.da5861f0fbcb9p-713, 0.0, 0.0,
     0.0, 0x1.abf4dc0b43a81p-434, 0.0, 0x1.4d68e0a25466p-702, 0.0,
     0x1.b27f1158e7351p-980, 0x1.9f6a600195536p-37, 0.0, 0.0, 0x1.34a1050dcbf59p-735,
     0x1.c0d6b8e557975p-839, 0x1.ae9166808fabap-564, 0.0, 0.0, 0.0, 0.0,
     0x1.ebe1ecccfee38p-100, 0.0, 0.0, 0.0, 0x1.89be730ce3a53p-142, 0.0,
     0x1.0301bb5a204aep-823, 0.0, 0.0, 0.0, 0x1.09e2a2617a26fp-807,
     0x1.f370bc08484b6p-739, 0x1.d3c743f82c24fp-876, 0.0, 0.0, 0x1.02f6888d9ebd9p-72,
     0.0, 0x1.eade3cac68ee3p-835, 0.0, 0.0, 0x1.7c1fa9c7ef222p-746,
     0x1.05588e7eb1042p-356, 0x1.3e28fe04dc8e9p-578, 0x1.9cc8f0f74075ap-910,
     0x1.644744577e869p-249, 0x1.c03a1dd4a881ep-302, 0.0, 0.0, 0.0,
     0x1.54ce5edf7441p-15, 0x1.5833ad83cedc2p-519, 0x1.c685a436bfc98p-119, 0.0,
     0x1.ea16dfa55bb2ap-204, 0.0, 0x1.3e207bca1b15bp-580, 0.0, 0.0, 0.0,
     0x1.c59c7cce8c878p-648, 0.0, 0.0, 0.0, 0.0, 0x1.4ff58a1d4f46ep-623,
     0x1.f85a85e8cfe75p-675, 0.0, 0x1.48a1bdd7339f3p-359, 0.0, 0.0, 0.0, 0.0,
     0x1.bbea030850675p-733, 0x1.1b33e86c06ea2p-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e92f020793bep-482, 0.0, 0x1.4a22c54657c8bp-586, 0x1.c758a79b3718fp-207,
     0x1.4e1463e1c6a07p-69, 0.0, 0.0, 0.0, 0.0, 0x1.2efa493e0a8cbp-359,
     0x1.1c4a907deaa2ap-157, 0x1.6ab9c081c5ef7p-929, 0x1.ae47b88469918p-309, 0.0, 0.0,
     0x1.3590ac9e5da55p-394, 0.0, 0x1.ab62792752f3fp-637, 0.0, 0.0,
     0x1.de59705284e4p-616, 0.0, 0x1.30857cfd7729p-677, 0x1.01f5a8344f6a2p-79,
     0x1.1bdd45e699c11p-446, 0x1.4b65867078977p-141, 0x1.7ad52887f330bp-881, 0.0,
     0x1.3578ca5fa981fp-707, 0x1.25dc4c57a2b08p-851, 0.0, 0x1.213d1d2c84133p-977, 0.0,
     0x1.3243574d7335fp-73, 0.0, 0x1.7108e5f21d98dp-134, 0x1.e2f303c166248p-890, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c65644263bf2p-191, 0.0,
     0x1.8557f393af461p-115, 0.0, 0.0, 0.0, 0x1.74ef03cc6ce1bp-756, 0.0,
     0x1.3c676103aac7dp-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a60c1d8fa3585p-784,
     0x1.fe580ee99d911p-44, 0.0, 0.0, 0.0, 0x1.f22ab13623c01p-630,
     0x1.005acb96aac5dp-339, 0x1.ec8d1cdec0624p-54, 0.0, 0.0, 0x1.81603ae81db7p-383,
     0.0, 0.0, 0x1.6e86602792b23p-463, 0x1.2888361fc2e7cp-959, 0x1.7c2ebb1702c0cp-356,
     0.0, 0.0, 0.0, 0x1.ccc03575a5ac3p-379, 0.0, 0x1.9097f3819a5c9p-10,
     0x1.17d1c42fb640ap-921, 0x1.2c0cbff20bb39p-774, 0x1.df7b5ed9d6d54p-585,
     0x1.756225df184b1p-576, 0x1.03f067994dc47p-353, 0.0, 0.0,
     0x1.ba510c082b598p-1001, 0x1.c77ccf63d5c9ap-300, 0x1.0f666f2a09eb3p-301,
     0x1.c3987093671dfp-870, 0x1.2ac2d4ceee047p-765, 0.0, 0x1.44354842b82f4p-808,
     0x1.4f29934217dp-674, 0.0, 0x1.f67d329b57bbcp-160, 0x1.b32d619313ce7p-237, 0.0,
     0.0, 0.0, 0.0, 0x1.dfaf485710df1p-1, 0x1.b9ef97ed80b99p-814,
     0x1.190708d132091p-468, 0.0, 0x1.cd833ef476e56p-295, 0x1.37bbe3c9f0af8p-1001,
     0x1.7e5b184d111b9p-355, 0x1.99b6852701281p-578, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8cb03d9cac944p-77, 0x1.25429f89b4818p-42, 0.0, 0x1.5d1edf9e4cee3p-829,
     0x1.e5e533cd8989ep-59, 0x1.75f2f4c3f9a2fp-163, 0.0, 0.0, 0.0,
     0x1.4fc499699408cp-894, 0.0, 0x1.11f15f12abaap-144, 0x1.59ff9782347p-428,
     0x1.f9c93feeb96fdp-855, 0x1.04524307ca3b3p-658, 0.0, 0x1.80ba48ff95ff5p-21,
     0x1.ff593729a68dp-1, 0x1.65186f1542c48p-56, 0.0, 0.0, 0x1.7cd31fdbc26bcp-901,
     0x1.bb2cceb0235d1p-458, 0x1.bd54984f7e3b2p-657, 0x1.5cea343508b5dp-294,
     0x1.083fb396a74cap-756, 0.0, 0x1.e830409b9a374p-129, 0x1.4c8f6af9a7f17p-999, 0.0,
     0.0, 0.0, 0.0, 0x1.d208d1c69715ep-980, 0x1.d01d3111fff51p-178, 0.0,
     0x1.8601cbef2b2b4p-713, 0.0, 0x1.a85fa7f4ab686p-840, 0.0, 0x1.8a1beb40c1eeep-781,
     0x1.b0a1922aeec89p-407, 0.0, 0.0, 0.0, 0.0, 0x1.a792c65e00cc4p-159,
     0x1.77199424d2915p-192, 0.0, 0x1.a273420a3300dp-626, 0x1.404578a2f9787p-481,
     0x1.5de11634b868ap-834, 0.0, 0x1.0ca93c4c46754p-685, 0.0, 0x1.4f8e35ccdae88p-779,
     0x1.3b4b604a55275p-682, 0.0, 0.0, 0x1.3535c704956f6p-656, 0x1.ef37af43fb99bp-724,
     0x1.0813b22527f3dp-806, 0x1.e1807859c0f3bp-746, 0x1.8ab87599de68fp-985,
     0x1.da380c7adf3f5p-247, 0x1.ecbf3daf3e88ep-64, 0x1.816d9c8651fa2p-625, 0.0,
     0x1.5ed236fc6b913p-949, 0x1.29bb9adb0533fp-526, 0.0, 0x1.f983983a4d11fp-894, 0.0,
     0.0, 0x1.1626d93d01523p-385, 0.0, 0.0, 0x1.dda2b37484c41p-552,
     0x1.8f7d7e27918d5p-325, 0x1.6370067853ecap-92, 0.0, 0.0, 0x1.62ccb357cb9acp-121,
     0x1.7d19f0c66569dp-708, 0x1.a1f287f064495p-554, 0x1.f4b98bf52f8dap-747, 0.0, 0.0,
     0x1.4042d83066b6p-644, 0x1.b555b8093e4f7p-732, 0.0, 0.0, 0.0,
     0x1.1da421dbb3c38p-691, 0x1.017715a0c85a3p-23, 0x1.fcdfa26e880b6p-67,
     0x1.f218e972e403dp-108, 0.0, 0.0, 0.0, 0x1.184625f2c1f0ep-114,
     0x1.a626e8aa723eap-372, 0.0, 0x1.8794a1e975cc9p-495, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52a73bc345743p-453, 0x1.f85ec0278c3ep-426, 0x1.1d059d7ad4214p-976, 0.0, 0.0,
     0x1.2143f0821cc71p-575, 0.0, 0x1.973e719c8804p-617, 0.0, 0.0,
     0x1.99836063bb40cp-156, 0x1.e1a78332e85f5p-715, 0.0, 0x1.2eb0f10e81dbcp-217, 0.0,
     0.0, 0x1.a5ce5d84943a1p-264, 0x1.4c3378a4eada1p-62, 0.0, 0.0, 0.0,
     0x1.977d4fdc140fap-843, 0x1.1ed795076ef8dp-495, 0.0, 0x1.c76b01abe88b4p-402,
     0x1.36b95da023d0ep-382, 0.0, 0.0, 0.0, 0.0, 0x1.7ed8538b0c574p-136,
     0x1.1082c71dc250bp-286, 0x1.79808f5138e1ep-905, 0x1.a22f1ae14d4e8p-838,
     0x1.19c758cc3e8aep-673, 0x1.370e2f9f58b89p-559, 0.0, 0x1.7ec010dbc8d99p-65, 0.0,
     0.0, 0x1.a3f3614036101p-373, 0.0, 0.0, 0x1.04d13923e7638p-54,
     0x1.a137d11a24d12p-296, 0.0, 0.0, 0x1.e3c20d1adca22p-682, 0.0,
     0x1.1e2a2181987c1p-59, 0x1.b4330702b873p-223, 0.0, 0x1.28a87a6f498e1p-644, 0.0,
     0.0, 0x1.80a89abeefa31p-278, 0x1.0e0c6a8fb5246p-236, 0x1.55878b730aab8p-388,
     0x1.aa54d023dc4d9p-830, 0x1.082aa39469572p-343, 0x1.e023a27025eecp-382, 0.0,
     0x1.a4d280c64028ep-1020, 0.0, 0.0, 0x1.fec5ed382b79cp-897,
     0x1.49fa1bdca79b4p-515, 0.0, 0.0, 0x1.fc3bb36b54cc5p-367, 0.0,
     0x1.c2ba2f43b9bd4p-682, 0x1.f2f3d2382b16dp-1008, 0x1.e97008fbc2966p-243,
     0x1.c7cbcaacaa7f7p-608, 0x1.b3dd2c136e1b7p-647, 0.0, 0x1.4f99637159851p-695,
     0x1.82c43c37540f2p-19, 0.0, 0.0, 0x1.d6755e0a43996p-492, 0.0, 0.0, 0.0,
     0x1.35ddd7b71af6bp-452, 0x1.8983bc1a00321p-900, 0.0, 0x1.90952dc9f05cdp-255, 0.0,
     0.0, 0x1.8103fdb7b21a7p-169, 0x1.f2cadee4f21aep-364, 0x1.dcafae4aa8e1fp-790,
     0x1.c1b5bbad022e8p-600, 0.0, 0.0, 0x1.b86f385f882ddp-861, 0.0, 0.0, 0.0, 0.0,
     0x1.f4e3217bbc094p-227, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.436ce18335fa8p-179,
     0x1.411788c91c828p-791, 0x1.1bd1dd6705a6p-904, 0.0, 0x1.ef06b40a93203p-146,
     0x1.10568468eab5bp-602, 0x1.e67c245e9ce26p-735, 0.0, 0x1.c483e0d19680cp-348, 0.0,
     0.0, 0x1.7c83d49c6d22bp-838, 0.0, 0.0, 0x1.bdfb0628af6ap-21, 0.0, 0.0,
     0x1.b38afaa738a0ep-312, 0.0, 0x1.86f6f7916f2fp-274, 0.0, 0.0,
     0x1.b220cf23d87dap-405, 0x1.8a4ea5e524024p-531, 0x1.a3239fd755d7dp-279, 0.0, 0.0,
     0.0, 0x1.9cea80a964a7bp-971, 0x1.72ba5a1eb0af2p-838, 0x1.ea78ef55857fap-796,
     0x1.cad0849232446p-558, 0.0, 0x1.4a55743ef660cp-488, 0.0, 0.0,
     0x1.d350acfc4d452p-399, 0x1.6acc4e002c53ap-717, 0.0, 0x1.66c1faa5c970fp-840,
     0x1.c6f522a16dcf3p-470, 0x1.7f8fc1ebe33ecp-524, 0x1.7566f469d83e9p-679, 0.0, 0.0,
     0x1.376cb120f3009p-958, 0x1.b76b88515490bp-758, 0x1.a79c466529af2p-299, 0.0,
     0x1.32c15ae1ae98bp-876, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c94a28a4bccd9p-691, 0.0,
     0.0, 0x1.7e2bad2ff02c8p-919, 0x1.54663675c2835p-12, 0x1.d558b6584bc55p-144,
     0x1.f739217090647p-4, 0x1.b5364e444bca7p-934, 0.0, 0x1.e74d18bdc00d8p-320,
     0x1.ec86c78545349p-852, 0x1.fa26375c4ad6ep-727, 0.0, 0x1.3845bcae5d9abp-234,
     0x1.e7edd27fa163ep-959, 0.0, 0x1.894cb97bdab8ap-713, 0.0, 0.0, 0.0, 0.0,
     0x1.db71b1bb458dfp-1013, 0x1.0bd615f3da532p-187, 0.0, 0x1.b42b45cb41963p-757,
     0.0, 0x1.246d5d95f23c7p-345, 0.0, 0.0, 0x1.cb081856e01f4p-586, 0.0, 0.0,
     0x1.c25e83f970d95p-401, 0x1.04affe115b901p-197, 0x1.c9226e33bca8fp-665, 0.0,
     0x1.3f4a749dc698bp-407, 0x1.ff66a3148baf7p-267, 0x1.d97f32515bb39p-192, 0.0, 0.0,
     0.0, 0.0, 0x1.f58768c534851p-721, 0.0, 0.0, 0x1.cce65d274ba84p-845, 0.0,
     0x1.1cf2caab57cfap-500, 0x1.7f78de8a3a8a7p-758, 0x1.5ebb2f301e814p-234,
     0x1.d2fabd8a6e0bp-647, 0.0, 0x1.66f8bd15238dbp-215, 0x1.b275d749342bcp-743,
     0x1.3be1fe2ce844cp-354, 0x1.b4093785ef8e8p-789, 0.0, 0x1.14390b796b6e9p-666,
     0x1.bcba6b2fc3331p-324, 0.0, 0.0, 0x1.9127f1cb86456p-217, 0.0,
     0x1.101dca328bf85p-242, 0x1.d5ca572332e05p-77, 0x1.06916a0da26fep-631,
     0x1.fc24aa62bdp-622, 0.0, 0.0, 0x1.dc40aafe2e13dp-782, 0.0,
     0x1.0bd25d5cc33e1p-870, 0x1.4ffb24682de1p-337, 0.0, 0x1.3e299895ed817p-138, 0.0,
     0.0, 0.0, 0x1.20ead06864b99p-492, 0.0, 0x1.6303b0605fd47p-228, 0.0,
     0x1.1d546d8544ac9p-531, 0.0, 0.0, 0x1.544ad1f45f66p-599, 0x1.0d16b86c210e5p-569,
     0.0, 0x1.8379dce30791bp-164, 0.0, 0.0, 0x1.3c3247a7062ebp-966,
     0x1.19ab3e89ee2ep-301, 0x1.2be243d49de28p-903, 0.0, 0.0, 0x1.c864c3271b54ep-332,
     0.0, 0x1.54b124b597287p-787, 0.0, 0x1.5f409950206f7p-826, 0.0, 0.0, 0.0,
     0x1.15d4b9e7904f4p-694, 0x1.633d252c84c4p-689, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.068f00bb182aap-257, 0x1.db9b67945fa48p-328, 0x1.ae7d7c074f807p-248, 0x1p0,
     0x1.172323bb5a738p-651, 0.0, 0x1.eed17c1411a9bp-881, 0.0, 0x1.fe1dad82a34ap-570,
     0x1.f0bb7c257c78fp-889, 0.0, 0x1.dc9c66b6304ffp-398, 0x1.89e89f523ded5p-956, 0.0,
     0x1.3415e94c75038p-310, 0x1.648c2ad2fad69p-773, 0.0, 0.0, 0.0,
     0x1.91bdcc28e9a32p-1012, 0x1.953c94977a56dp-881, 0.0, 0x1.bac7e6943a5f9p-255,
     0.0, 0.0, 0x1.a3f96645179a9p-411, 0.0, 0.0, 0x1.4a02b02609cc6p-681,
     0x1.501224a6662a2p-207, 0x1.a3a728eb1f203p-320, 0.0, 0x1.48f91308726d6p-788, 0.0,
     0.0, 0x1.382973624fcc7p-425, 0x1.c1f788d5ac51p-319, 0.0, 0x1.7a7dd2573bcep-161,
     0x1.2b006c010868ap-337, 0x1.e626848d518ap-371, 0x1.0dfbbc1e693e1p-638,
     0x1.7074975c6d173p-662, 0.0, 0.0, 0x1.0b981ba2f29dcp-628, 0x1.3bfc273968257p-626,
     0x1.3964f5a8340aap-427, 0.0, 0x1.3edaebb14677fp-877, 0x1.b941539e50c6ap-1008,
     0x1.c6279c058063ep-562, 0x1.08508bd375d81p-557, 0.0, 0.0, 0.0,
     0x1.659731b359a6ep-216, 0x1.02a10a18684e7p-9, 0x1.edd578e71c18ep-368,
     0x1.0de763195dcc6p-451, 0.0, 0.0, 0x1.2c6eea6a02cb1p-6, 0x1.578853cc9666ap-945,
     0x1.7806e93e1bfc9p-592, 0.0, 0x1.8e45b729a06ap-580, 0x1.687b1d16f88b3p-88,
     0x1.842095ca9535ep-377, 0.0, 0.0, 0.0, 0.0, 0x1.e46a1703e1b31p-175,
     0x1.7a413ec7978cap-10, 0.0, 0.0, 0.0, 0x1.16a13f2b9a836p-942, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d706a75177abdp-167, 0x1.13ec2849cc49p-195, 0.0, 0x1.b3a98caae741ep-637,
     0x1.a9efcc6c50765p-926, 0.0, 0.0, 0.0, 0x1.fffaf9bf320a9p-475, 0.0,
     0x1.27fcec2b12a88p-124, 0.0, 0x1.0396dea232d28p-323, 0.0, 0.0, 0.0
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
            tmp1 = cos(tmp0);
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
    printf("cos %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("cos bench acc %la\n", global_bench_acc);
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
