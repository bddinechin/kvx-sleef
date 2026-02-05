/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsd4_kvx.c --function Sleef_fabsd4_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.4c852b7b94f3cp-430, 0.0, 0x1.c8a5491504884p-911, 0.0, 0.0,
     0x1.db65ac828a88dp-293, 0.0, 0.0, 0.0, 0.0, 0x1.2bda9728212e6p-649,
     0x1.acd522d214357p-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89c72559df4e8p-764,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94700efaa9b4bp-70, 0.0, 0x1.5d383029c1b0bp-3, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3aba1e2e00639p-454, 0x1.0a0e8ab5ab601p-287, 0.0,
     0.0, 0x1.543bf39f7b49fp-65, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b1140af37238p-973, 0x1.eeb42c778d61ap-188, 0.0, 0.0, 0.0,
     0x1.dbabe2353b5c6p-294, 0x1.56fcebe175678p-37, 0.0, 0.0, 0x1.51a5ee0d869dep-881,
     0x1.232e1c776774bp-816, 0.0, 0.0, 0.0, 0x1.309d6731f33dap-621, 0.0, 0.0,
     0x1.9d01f71dc3385p-342, 0.0, 0x1.3c48423085554p-435, 0x1.00b81fd9fa257p-881, 0.0,
     0.0, 0x1.768fddb45fe2cp-694, 0x1.dbb9b0f84be75p-654, 0x1.a5165d204db87p-804, 0.0,
     0x1.57f53233f0c15p-756, 0x1.f07e5de887a81p-981, 0.0, 0.0, 0.0, 0.0,
     0x1.9cacaa29c6631p-216, 0x1.fadac5ebed481p-750, 0x1.8d39385e522eep-686,
     0x1.a0db2c283a7e8p-572, 0x1.37635332ce64fp-954, 0.0, 0.0, 0.0, 0.0,
     0x1.deeae7f61029bp-88, 0x1.cce56ea0897f4p-10, 0x1.b57a792f9f86bp-315,
     0x1.68e43161a1514p-922, 0x1.b8f7d00665653p-172, 0.0, 0x1.c18a5cdcbbdaap-636,
     0x1.a0690fd88c409p-580, 0.0, 0x1.392cdb2fee164p-237, 0.0, 0x1.6f90ce57b8657p-550,
     0.0, 0.0, 0x1.092ce2a1e8454p-714, 0x1.cc672671d7aa4p-221, 0x1.15542a32fcdc1p-585,
     0x1.bfa7050c9fef3p-967, 0x1.dc1048625d58fp-331, 0x1.3b45e7bd3c2fap-514,
     0x1.979ac0b42239ap-605, 0x1.538813ef6bd76p-166, 0.0, 0x1.db0e0338d5ff4p-442,
     0x1.0df8f0448040ep-64, 0x1.493af124ccd4bp-223, 0.0, 0.0, 0x1.077bec6c5ec19p-713,
     0.0, 0x1.7c0cbd87a86eap-191, 0x1.cc40a3fba0e84p-88, 0.0, 0x1.d0ba66011ccep-81,
     0.0, 0.0, 0x1.e5930942b4ccbp-1008, 0.0, 0.0, 0.0, 0.0, 0x1.288d6f64f5b3cp-360,
     0.0, 0.0, 0x1.027ab0c16ae24p-255, 0x1.6cbf253d7f1bp-372, 0x1.f678baec73265p-82,
     0x1.5afb2f0162e6ep-997, 0.0, 0.0, 0x1.b90db1e37cd66p-706, 0.0, 0.0,
     0x1.c8e839eeee43ap-845, 0.0, 0.0, 0x1.5f7986faa9d92p-443, 0x1.e95ba4aba1556p-923,
     0x1.1ab401f876221p-54, 0.0, 0.0, 0x1.a5a52b5a50b33p-88, 0x1.646dda43b8c2fp-21,
     0x1.443277c40faa7p-379, 0.0, 0x1.8d32cdb907517p-603, 0x1.4728870d9f363p-340, 0.0,
     0x1.e5f0873fc94b2p-273, 0x1.c70b437829f8dp-425, 0x1.4c57919c17c9ap-361,
     0x1.128d61ebbce58p-721, 0.0, 0x1.f1a49c2632344p-796, 0.0, 0x1.ef8c41ed562aep-840,
     0x1.630a48e730e02p-205, 0.0, 0x1.bb049bf27ebd8p-399, 0x1.edc299bc90644p-493, 0.0,
     0x1.321ea1df2c668p-169, 0.0, 0.0, 0.0, 0.0, 0x1.7ad6e6413bb81p-466, 0.0,
     0x1.ab0d5d7037da2p-621, 0.0, 0.0, 0.0, 0x1.8628ed7e3143ep-852,
     0x1.695b212d109d6p-898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4534a6605c032p-275, 0.0, 0x1.dfb9a2bfaad27p-997, 0x1.06cf9706bdcefp-700, 0.0,
     0x1.feb5df36db366p-773, 0.0, 0.0, 0.0, 0.0, 0x1.09e18eabfecfap-330,
     0x1.90ff85ce107b2p-639, 0.0, 0.0, 0x1.abfcb8399decfp-610, 0.0, 0.0,
     0x1.d38f4f3cf186cp-655, 0x1.eb3eab7885e44p-395, 0x1.1a34c61c8795bp-301,
     0x1.730269a45b3f9p-367, 0.0, 0.0, 0x1.f5b12ad1308b7p-307, 0.0, 0.0, 0.0,
     0x1.ea05dcce440a8p-405, 0x1.f4f757016216ap-357, 0.0, 0x1.34308beb9cf92p-126, 0.0,
     0.0, 0.0, 0.0, 0x1.a0b95ab4849dbp-80, 0.0, 0x1.228a2a95b3314p-226,
     0x1.bd58a63bdc552p-373, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e12e06c75849p-182, 0.0,
     0.0, 0x1.96c26e5c137efp-357, 0x1.75adf0939e2eep-349, 0.0, 0.0,
     0x1.528135c64760ap-191, 0x1.e2f760900cd13p-408, 0.0, 0.0, 0.0,
     0x1.8196b491ff402p-617, 0.0, 0x1.ad59654dfdacbp-255, 0x1.7564d6ac337e2p-131, 0.0,
     0x1.430c9a417f9a4p-654, 0.0, 0x1.4d715466559acp-1020, 0.0,
     0x1.5847aa8cc6f46p-104, 0.0, 0x1.4adb5eb46894dp-785, 0.0, 0.0, 0.0,
     0x1.cc703f2476d3dp-81, 0x1.78e318aac70bap-904, 0.0, 0x1.12d663683cd23p-209,
     0x1.c8223925bf6bap-961, 0.0, 0.0, 0.0, 0x1.d01ca467e8bb3p-501, 0.0,
     0x1.769c31f5019eap-468, 0.0, 0x1.93c7bea7338f4p-177, 0x1.0e60aa2b54e59p-182,
     0x1.a1da332c61d88p-662, 0.0, 0.0, 0x1.3f9b558cf20a9p-424, 0x1.1396c8ea84679p-890,
     0x1.a4829c3a2c73ep-68, 0.0, 0.0, 0x1.ac4bb6769eafp-953, 0x1.c3bc21e7b067cp-590,
     0x1.5dfc03be5e122p-855, 0.0, 0x1.e936bcf492581p-579, 0.0, 0x1.6cf7b63d06e0fp-845,
     0.0, 0x1.57031eeecd6d4p-329, 0.0, 0x1.de4e82cca2e5dp-426, 0x1.c34bf21347eb8p-118,
     0x1.03c37c4536215p-679, 0x1.bb62e6bf9eb27p-339, 0x1.5285e75d878cfp-754,
     0x1.ee0eb802d54b4p-14, 0.0, 0.0, 0.0, 0x1.2a696d49c86d2p-1005,
     0x1.8430a5a5e5583p-315, 0.0, 0x1.ac48bab1289fep-528, 0.0, 0.0,
     0x1.007e129f68deap-777, 0x1.f897bec3d62c6p-408, 0.0, 0.0, 0.0,
     0x1.6119c03232e78p-931, 0.0, 0x1.70b0ad84088e7p-453, 0x1.5a06a8427450ep-685, 0.0,
     0x1.0279972a96bf5p-302, 0.0, 0x1.2f81614666fcap-115, 0x1.4a8a753b7e398p-334,
     0x1.8b12d253db90bp-486, 0x1.fa9ad3ad48797p-897, 0x1.d96c0719f2891p-266, 0.0,
     0x1.9c4fba82cce27p-601, 0x1.19acb45a458b5p-314, 0.0, 0x1.748c160c1a296p-941, 0.0,
     0.0, 0.0, 0.0, 0x1.91809e6e01082p-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.250766dbf39e6p-343, 0x1.b04337abaf21ep-749, 0x1.68a9f850b2e71p-973,
     0x1.9b732b4932591p-187, 0.0, 0.0, 0x1.1ac45f97dcd6p-653, 0.0,
     0x1.7869ebd306575p-478, 0.0, 0.0, 0x1.d648d55ba69fap-964, 0.0,
     0x1.f652a83b82f1p-488, 0.0, 0.0, 0x1.957fa5d6e3393p-106, 0.0,
     0x1.2b0bb18b0c54dp-787, 0x1.5d20e6539fa39p-887, 0x1.d281b55136b02p-88,
     0x1.341d65798babcp-866, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.01724d6f31c91p-242, 0.0,
     0x1.1bef10411f781p-637, 0x1.35c206161002fp-631, 0.0, 0x1.812da6c2a74e9p-491, 0.0,
     0x1.1d945a2de2b44p-171, 0.0, 0.0, 0.0, 0x1.c91e2e232e6f1p-431, 0.0,
     0x1.73fc4450870c6p-894, 0x1.47a46ff8d35afp-267, 0.0, 0x1.1bbd3c102ddc3p-347,
     0x1.afbb8892bd231p-157, 0x1.01e0e7ddb2d5bp-519, 0x1.e1e9fd12e340bp-904,
     0x1.b86668212518cp-746, 0.0, 0x1.d67331cd2bf6ep-932, 0.0, 0.0,
     0x1.3766e463f5998p-748, 0x1.e66c7f7aa609fp-497, 0x1.7462ec326056ep-320,
     0x1.1df728514b045p-741, 0x1.d6e7a1ba640b4p-260, 0.0, 0x1.11af7ee504903p-901, 0.0,
     0x1.d70b1e0668697p-798, 0x1.6ae8f370e515bp-142, 0x1.99919fb791ep-815,
     0x1.c82b43e44806fp-767, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0941cd2f26e7ap-297, 0.0,
     0x1.16b4135703d94p-19, 0x1.97d3e863e07dp-55, 0.0, 0.0, 0x1.cfb68ac2fe574p-610,
     0x1.1f3ac9a85ceep-911, 0x1.a9c990a92593bp-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55e8eed4d19d1p-437, 0x1.2b50dc7e360ffp-955, 0.0, 0.0, 0.0,
     0x1.aebed180a2376p-533, 0x1.0526702cd9968p-464, 0x1.04d1539c1972fp-45,
     0x1.94c0b055e2523p-620, 0x1.14a2b2209912ap-337, 0.0, 0.0,
     0x1.dbf360bd1ff5cp-1019, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.143cc0552a01bp-370,
     0x1.8f9ea08b45be3p-840, 0x1.f28d64a894794p-221, 0x1.a73eeea037beap-374,
     0x1.35157042944a7p-827, 0x1.2b9cd6045736ep-48, 0x1.a345022a11fa3p-953, 0.0,
     0x1.077ab35e97e6ep-356, 0.0, 0.0, 0x1.de395b21a3b75p-302, 0x1.475d1cd42216p-601,
     0x1.5fde8e385a0cbp-634, 0x1.804f1d5a1686dp-333, 0x1.aed068464d9c4p-637,
     0x1.792dabb567c6fp-709, 0.0, 0x1.b742274720445p-842, 0.0, 0.0, 0.0, 0.0,
     0x1.4027763453d25p-84, 0.0, 0x1.4d729fddfc7e2p-605, 0.0, 0.0, 0.0,
     0x1.17434f0e23276p-97, 0.0, 0x1.9953c540d72b1p-138, 0.0, 0x1.d87f06c221f0dp-14,
     0x1.f9ff3b3b5fa22p-53, 0x1.1a1628093edap-574, 0.0, 0.0, 0x1.cd099c1fe20dfp-768,
     0.0, 0x1.275cbdcd073ecp-749, 0.0, 0x1.08711c9e7913p-27, 0x1.12388c251ee1p-749,
     0x1.19110cc718b4bp-253, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e848c25e8b0e6p-498, 0.0, 0.0, 0.0, 0.0, 0x1.38504dd935821p-671,
     0x1.b71eadef652fap-657, 0.0, 0x1.a6db77e570325p-887, 0.0, 0.0, 0.0,
     0x1.3619aa5e42d11p-202, 0x1.965fe5ad7fccep-530, 0x1.3ec77a53fd583p-813,
     0x1.eed1679d7917bp-382, 0.0, 0.0, 0.0, 0.0, 0x1.96abbd756d36cp-916, 0.0, 0.0,
     0x1.9bca5015e0243p-958, 0x1.53c402d79ef2bp-150, 0x1.dbe976b1a8a75p-318,
     0x1.8c3f471abd95p-351, 0.0, 0.0, 0x1.561f45a142c16p-418, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a189fc0a0744ep-886, 0.0, 0x1.40150849eff71p-410, 0x1.6b599cf57fa03p-994,
     0x1.a7c5c3e53b492p-381, 0x1.b096ff6a7b222p-229, 0.0, 0.0, 0.0,
     0x1.60b2b3622e571p-966, 0x1.15559b88933e2p-22, 0.0, 0x1.3cd39e0fd999fp-387, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ff6e3ef9c2fb2p-792, 0x1.cca84aacaab53p-33, 0.0,
     0x1.964a6ef25c9ecp-683, 0.0, 0x1.11c553bd5cap-731, 0.0, 0x1.d38d5300d69b4p-742,
     0x1.db58ee6b1afccp-758, 0x1.891ec124de91p-698, 0.0, 0.0, 0.0,
     0x1.461b9324bdf3ep-38, 0x1.41a3a74ae17dbp-662, 0x1.119601939975bp-318,
     0x1.52cb7ebf45cfcp-826, 0x1.df12e9911a3f9p-705, 0.0, 0x1.3f3d312093287p-469,
     0x1.c21eb148d502p-761, 0.0, 0x1.8ab6e5180f685p-816, 0x1.e0b006268228bp-462,
     0x1.196df6c15a888p-643, 0x1.126486daab17p-689, 0x1.c429ceff24b79p-410,
     0x1.f284fc2843c53p-971, 0.0, 0.0, 0.0, 0x1.9dbde58dbf101p-17, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.79fcd4d48892cp-532, 0x1.37be90a3f65fep-30, 0x1.5282fe7d07f48p-596,
     0x1.185a22f75c4f3p-495, 0.0, 0.0, 0.0, 0x1.5aae74a338bc3p-928,
     0x1.5fda244fb42a2p-599, 0.0, 0.0, 0.0, 0x1.674d142cd5bdap-927,
     0x1.53994698fb319p-32, 0.0, 0.0, 0x1.5d89f4e4d28bfp-560, 0.0, 0.0,
     0x1.44f131adb0442p-985, 0x1.f2fdb3f98d433p-373, 0.0, 0.0, 0.0,
     0x1.ac3c06359214fp-302, 0.0, 0x1.c52f5ce7797b5p-85, 0.0, 0x1.3dc515301948ap-743,
     0.0, 0.0, 0x1.7801cb53a634ep-627, 0.0, 0.0, 0x1.084eae006861ap-915,
     0x1.8bd7530d12f97p-290, 0x1.3ff88cc04a4c3p-247, 0.0, 0x1.38f63d4bee6afp-726, 0.0,
     0x1.3866e16977a8p-776, 0x1.b6d86968eb67dp-437, 0.0, 0x1.b9ba7b84ad70ep-192, 0.0,
     0.0, 0.0, 0x1.96a380924cb6dp-978, 0.0, 0x1.8c590ebdac432p-791, 0.0, 0.0,
     0x1.9addeacae4be1p-745, 0.0, 0.0, 0x1.2d44682b8509ap-44, 0x1.3454ea3c6fd3bp-731,
     0.0, 0.0, 0x1.98cf32c5a3096p-403, 0.0, 0x1.aea88e92d00eap-326,
     0x1.6324b839861c4p-595, 0x1.0db81c1cfca7p-911, 0.0, 0.0, 0x1.474b141c5a347p-299,
     0x1.8262908e17235p-452, 0.0, 0.0, 0x1.ec39c57fc284bp-90, 0x1.d081cef7e22ecp-132,
     0x1.de7e9d5c5820bp-283, 0.0, 0.0, 0.0, 0x1.0a347c7e1a14bp-690, 0.0, 0.0, 0.0,
     0.0, 0x1.744e75a61f527p-115, 0.0, 0x1.36be5d641cfdbp-972, 0x1.e7e1655bf5d2p-143,
     0.0, 0x1.4f16c41594d5bp-824, 0.0, 0.0, 0x1.9d8b934cf1b5ap-329,
     0x1.8a2ed48daeda2p-443, 0x1.3792631053131p-550, 0.0, 0.0, 0x1.151c77429fc7ap-87,
     0.0, 0x1.fcf3eeed3c6a9p-251, 0.0, 0.0, 0x1.21d8238a1ed5fp-120,
     0x1.64d184d232a9dp-902, 0x1.c37e368fb7ec5p-156, 0x1.a2a2b27d45001p-43, 0.0, 0.0,
     0x1.90d586b4cb203p-907, 0.0, 0.0, 0.0, 0.0, 0x1.b19e3149812aep-871, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cad738cb67081p-622, 0.0,
     0x1.bbc0a8392f863p-413, 0.0, 0.0, 0x1.0e61a91a4acap-636, 0x1.dc53cd80b3e4ap-285,
     0.0, 0x1.6b8f16210dd13p-15, 0x1.b5dec549516b6p-890, 0x1.45fda012a2d37p-844, 0.0,
     0.0, 0x1.d87a489205ddap-968, 0x1.7aeadaded588bp-872, 0.0, 0.0,
     0x1.6b801cea6157p-1007, 0.0, 0.0, 0x1.fd1517924945bp-268, 0x1.fdefdafa41c27p-30,
     0x1.22dfde640174ep-354, 0x1.3a3129433c454p-458, 0.0, 0.0, 0x1.12bc1fec00fbcp-519,
     0.0, 0.0, 0x1.b71c58862c3aap-595, 0x1.84c23abb5e045p-963, 0x1.43cf9abed426cp-910,
     0x1.bb67521307589p-406, 0x1.38a3f9b6c14f7p-1, 0x1.5ac1c030b260ep-198,
     0x1.dac557f50e4d7p-331, 0x1.7bcaf32733e1fp-77, 0x1.7f0fe80e0a787p-599, 0.0, 0.0,
     0x1.6bba7a01a3df8p-470, 0x1.145a1db9fd056p-957, 0.0, 0.0, 0x1.ecaa86c86c794p-957,
     0.0, 0x1.6343312750982p-430, 0x1.ab0480f830d2ep-617, 0x1.915e80a9f7e0dp-556, 0.0,
     0x1.7e86069d86d6fp-465, 0x1.1dfae4e761166p-190, 0.0, 0.0, 0x1.5f0f053ad3d4p-479,
     0x1.def909a07833p-284, 0x1.327c18c42d817p-664, 0.0, 0.0, 0x1.d4da36b2d1023p-43,
     0x1.c2fc6fb04f63cp-886, 0x1.67fa4b7cee548p-34, 0x1.6489ef7fe7dcep-12, 0.0,
     0x1.a7f4fda8fbd4ep-399, 0x1.e81320a73e669p-401, 0x1.aa196eb3cf8dp-975, 0.0,
     0x1.fef7c44589733p-520, 0.0, 0.0, 0x1.e7c5d2dd2f96dp-446, 0.0, 0.0,
     0x1.bf5fe1ba8d5d5p-654, 0x1.ed1c21b5c68d7p-106, 0.0, 0x1.f8d29ace2d9ecp-685,
     0x1.608046efed26cp-85, 0.0, 0.0, 0.0, 0x1.fa0dbc352f7ccp-920, 0.0, 0.0, 0.0,
     0x1.fb7b0e7896492p-408, 0x1.7c19d09c574afp-228, 0.0, 0x1.66cfcb042b459p-960, 0.0,
     0x1.5f865e5ff13e7p-930, 0.0, 0.0, 0.0, 0x1.f724d95e7106ep-945,
     0x1.4ede0b78389f2p-713, 0x1.a8dbdf4c7e02bp-453, 0x1.bef05dd762643p-607,
     0x1.25c3b6c72aa77p-649, 0x1.127bd6e6499d7p-998, 0.0, 0x1.bc1c3d96634aap-951, 0.0,
     0x1.26010fb2358fep-355, 0x1.ac57df9e64481p-852, 0.0, 0.0, 0x1.01b5abc0892aep-773,
     0x1.00155dc866ab1p-632, 0.0, 0x1.50dd0169f242ap-253, 0.0, 0x1.886ed4ec2c542p-395,
     0.0, 0.0, 0.0, 0x1.290fd1bebef87p-584, 0.0, 0x1.cfe90d752e6dcp-766, 0.0,
     0x1.81b3900f28252p-247, 0x1.c4f859727ee69p-998, 0.0, 0x1.a6ccf8c6778e4p-193, 0.0,
     0.0, 0x1.70a984b12f948p-538, 0.0, 0x1.02989ad69af8cp-844, 0.0,
     0x1.cbdef1c4241f2p-699, 0.0, 0x1.6361d561a1577p-731, 0x1.c5a5c87c693a2p-524,
     0x1.cd0cd535380a3p-101, 0x1.0fd5986721225p-23, 0x1.7de2be09dbdefp-345,
     0x1.8ef3e54026461p-531, 0x1.44471f2bb9279p-186, 0x1.fe1e890888d62p-503, 0.0,
     0x1.0f0918c2f9e1fp-22, 0.0, 0.0, 0x1.80a1b363290a3p-986, 0.0, 0.0,
     0x1.aa6b8734e8088p-60, 0x1.6d1841a48a7ccp-22, 0x1.5b45889edf9dp-694,
     0x1.2ba9a68c4ad72p-377, 0x1.d1409a2276ef9p-265, 0x1.f8b44f18a4ea6p-44,
     0x1.a6c97cfa98bc3p-563, 0x1.b7a88abb09652p-512, 0x1.6fcab856c2125p-853, 0.0, 0.0,
     0.0, 0x1.d823f21c70985p-164, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.773a93bf99b92p-555, 0x1.fe9aa85bc918bp-750, 0x1.2c7a7ca6c5fd2p-565,
     0x1.1c01e6d017c63p-63, 0.0, 0.0, 0.0, 0.0, 0x1.9bcb5a8337c33p-941, 0.0,
     0x1.5e45a96ee7c6ep-376, 0x1.9bc16fee35cf7p-187, 0x1.23931b494e3edp-535, 0.0, 0.0,
     0.0, 0x1.2ce3ceee670d1p-110, 0.0, 0x1.35ee49f20c0c1p-3, 0x1.281edc7444d84p-486,
     0x1.6d7d28a64a271p-859, 0.0, 0.0, 0x1.df800d69458c2p-111, 0.0,
     0x1.8b0c655ba6d19p-606, 0.0, 0.0, 0.0, 0.0, 0x1.a45ba8200ab6bp-460,
     0x1.f0c6004b02fb5p-345, 0.0, 0.0, 0x1.34fca79015976p-97, 0.0, 0.0,
     0x1.73d7569a398eep-791, 0.0, 0.0, 0x1.46d333980f444p-354, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b2e3905471073p-487, 0.0, 0.0, 0x1.fd2a3947fef34p-204, 0.0,
     0x1.b16d0068b6638p-947, 0x1.6e68a11e08cf8p-894, 0.0, 0x1.25c27d973db6dp-165,
     0x1.5f137828fe5e2p-705, 0x1.55d0be88ef8f3p-902, 0x1.a76d120d9c84fp-673,
     0x1.c67caf7b183p-579, 0x1.cce6f7155cf48p-368, 0x1.2997ac22fcadfp-101,
     0x1.f3e44c8f73a1cp-932, 0x1.9ce47ed689a05p-273, 0x1.daad0ffea8d7ap-257,
     0x1.cedda5b31cfebp-457, 0.0, 0x1.ec8d0187833d4p-876, 0.0, 0.0, 0.0,
     0x1.f76a7fed5a9dep-259, 0.0, 0.0, 0.0, 0.0, 0x1.f1d69cafe429bp-230,
     0x1.88978882fd162p-789, 0x1.5875aaf5e668fp-765, 0.0, 0x1.a1b5b0c12bb89p-382,
     0x1.70a68d79ee8ap-162, 0.0, 0x1.f86da59744553p-538, 0.0, 0.0,
     0x1.0d02cced941bdp-973, 0x1.49443385fc831p-639, 0.0, 0x1.3852aa44095fcp-511, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.147c44371351fp-347, 0.0, 0x1.4cdb27378cfefp-263, 0.0,
     0.0, 0x1.727d28d0c5e05p-899, 0.0, 0.0, 0.0, 0x1.87636cdbac908p-450,
     0x1.0a06fb2bdd263p-388, 0x1.bd17442056259p-1022, 0x1.34365ca43ad3fp-262,
     0x1.9d9e3eec0f6e5p-151, 0x1.20cdb95981a9dp-49, 0.0, 0x1.c893ca4d5fc71p-815, 0.0,
     0.0, 0.0, 0x1.42b0f490a80c9p-992, 0x1.c066cc64c0251p-697, 0x1.3c7cc8d98467bp-618,
     0x1.120bb6172a60ap-285, 0x1.9f6afdfe1b70ap-786, 0x1.32377493bc063p-278,
     0x1.58f5d1b0c4a4cp-804, 0x1.0e46bc0ba4ddep-602, 0.0, 0x1.d66d7d5d36a9p-930, 0.0,
     0x1.7593e49790459p-798, 0.0, 0.0, 0x1.5affa89684124p-649
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
            tmp1 = Sleef_fabsd4_kvx(tmp0);
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
    printf("Sleef_fabsd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_fabsd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
