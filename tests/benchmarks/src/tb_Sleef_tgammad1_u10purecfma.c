/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammad1_u10purecfma.c --function \
 *     Sleef_tgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.755ca71189c9ep-16, 0.0, 0x1.387c75f9bf706p-679, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3e6baa3e4de1ap-539, 0x1.9b09002ba78d6p-514, 0x1.561940a357cb3p-545, 0.0,
     0x1.7c81a9938990dp-585, 0x1.004ba0e77a04dp-337, 0x1.a2290f10a400ep-679, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8117ac1119684p-144, 0.0,
     0x1.928b7159fea25p-626, 0x1.08e408b1a7566p-504, 0.0, 0.0, 0.0, 0.0,
     0x1.efb5e730724d3p-201, 0x1.8e24bdafdaf5ep-852, 0x1.88406f7d29b19p-497, 0.0,
     0x1.cdb98b47a320dp-479, 0.0, 0.0, 0x1.d08ee5e2ceb4bp-641, 0.0, 0.0, 0.0, 0.0,
     0x1.e18f1cbaeb7dep-793, 0.0, 0.0, 0x1.fe1a1ccb052d8p-19, 0x1.7e9387a0ca9ebp-654,
     0x1.d1cf0c6310b26p-737, 0x1.7716cda6e661ap-970, 0x1.cc20e3c0f492bp-406,
     0x1.9bfc903609266p-670, 0x1.2034c692949cap-364, 0.0, 0x1.3c22b81e55d41p-93, 0.0,
     0x1.a9895f61c6d2bp-363, 0.0, 0.0, 0x1.53bc0e751cee5p-465, 0x1.5e58507bf3892p-719,
     0.0, 0.0, 0x1.ec35650a47157p-413, 0.0, 0.0, 0.0, 0.0, 0x1.b69631b6d3496p-692,
     0.0, 0x1.344b6d9714158p-259, 0.0, 0x1.648fa717bddeep-885, 0x1.fc0ea2646973ap-332,
     0x1.d702c672309fcp-233, 0.0, 0x1.155c3f5d2affcp-88, 0x1.48b069116536ep-817,
     0x1.9cba0da81206fp-424, 0.0, 0x1.7950b3a99804ap-389, 0.0, 0x1.4cb219472283fp-222,
     0x1.fc53def836f49p-405, 0.0, 0x1.69c1a75bb4b9p-411, 0x1.e41bc3b0e9b69p-323,
     0x1.34580029b2ed4p-874, 0.0, 0x1.d1d176d1bb975p-89, 0x1.11679bd1b78dbp-844, 0.0,
     0.0, 0x1.b5756a06a2dfdp-733, 0.0, 0x1.384478c410e7fp-184, 0x1.fd2571f4fcbeap-267,
     0x1.a73463af918c2p-334, 0x1.a31a0b545a8e4p-631, 0.0, 0x1.19862371d410fp-628, 0.0,
     0x1.257c496209f27p-261, 0x1.35887c6c489c6p-144, 0x1.be24320a4e705p-478,
     0x1.c91aeea105f47p-141, 0.0, 0.0, 0x1.8414d9c28dfcp-838, 0x1.ae0a685c42686p-245,
     0.0, 0x1.89d8b0ff6f909p-285, 0.0, 0.0, 0.0, 0x1.f7f56d474edccp-829,
     0x1.d038194d19685p-629, 0.0, 0x1.3b244f10b5603p-87, 0.0, 0.0, 0.0,
     0x1.8152af0073657p-522, 0.0, 0x1.d88bbb03e3961p-305, 0x1.6495770b37badp-868, 0.0,
     0.0, 0x1.e2fbec4b13d01p-179, 0x1.ede73ee05edfbp-578, 0.0, 0x1.a0a4c268d4436p-645,
     0.0, 0.0, 0x1.ada4be2d3d554p-940, 0.0, 0.0, 0.0, 0x1.b70c8de6aa7f6p-946, 0.0,
     0x1.3730fb5b28c7dp-366, 0.0, 0x1.561efaa2e80c4p-738, 0x1.2eeb8fdc66874p-308,
     0x1.b4d6840e41b2dp-492, 0.0, 0x1.259d014134d76p-245, 0x1.6cae95b158529p-697,
     0x1.130b0277ef083p-937, 0.0, 0.0, 0.0, 0x1.de289588476eap-473, 0.0,
     0x1.9ac34ec674bdbp-611, 0.0, 0.0, 0.0, 0x1.ee44bd8e04fd4p-948,
     0x1.89ebfafe3d1a6p-730, 0x1.648affa11b1c9p-824, 0x1.dfa905f72e686p-34,
     0x1.ad5007cda2ef2p-981, 0.0, 0x1.ddbe58167d719p-280, 0x1.2c533d3d0c92ap-560, 0.0,
     0.0, 0.0, 0x1.29a648cd5bf6fp-531, 0.0, 0x1.55c190f3e0a61p-834,
     0x1.e7c20cca33fd9p-203, 0x1.2fa6e95a6f5bap-804, 0x1.851b85ede22a5p-621,
     0x1.eacc268d0e858p-855, 0.0, 0x1.00a04b2986ff9p-869, 0x1.ab02eeb5c905fp-318, 0.0,
     0x1.2a60289cec1d3p-567, 0.0, 0x1.4f5c957a4a5ddp-216, 0.0, 0.0,
     0x1.544d3cdaeefa9p-554, 0.0, 0x1.9243e2299738dp-232, 0x1.a0af39a5a231cp-74, 0.0,
     0x1.c94c76f625399p-295, 0x1.69aa64a8d2526p-407, 0x1.7edd67e820b8dp-167, 0.0,
     0x1.ffa8d41d8537p-710, 0x1.327e522f91646p-1010, 0.0, 0.0, 0x1.e8e5dde5ef062p-395,
     0.0, 0x1.8338e4113381ep-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09d949bb28aaep-302,
     0.0, 0x1.04585841b9af5p-554, 0.0, 0x1.e2138ef64613fp-806, 0x1.85889639a18a4p-708,
     0x1.8a0371cdae327p-264, 0x1.ab180c3a9994ap-772, 0x1.9dc696e9da6e3p-514, 0.0,
     0x1.304667d072a07p-150, 0x1.74329469ce40ep-312, 0.0, 0x1.e223db21ce267p-340, 0.0,
     0x1.e23ceca85c38p-644, 0.0, 0x1.900fb35050282p-184, 0x1.9782acbf8676bp-671, 0.0,
     0x1.9633ba35a6a0bp-427, 0x1.6239241a0bab9p-402, 0x1.741771947370cp-567, 0.0, 0.0,
     0.0, 0x1.68180251cf96p-627, 0x1.5a8100a4ff9f5p-213, 0x1.ebfa4e3ff42a9p-709, 0.0,
     0x1.870a96c4c4bf1p-202, 0.0, 0.0, 0x1.64f08ec665239p-945, 0.0, 0.0,
     0x1.62c796f0ab319p-376, 0.0, 0x1.f1a925b3aeba6p-170, 0x1.aed635b477c81p-497, 0.0,
     0.0, 0x1.60ee9939d2c3bp-153, 0x1.d1cca329aee6ep-312, 0.0, 0x1.e0c99466c372ap-103,
     0x1.4376bdf4969d7p-625, 0.0, 0x1.8accff2889d27p-596, 0.0, 0x1.7c64922a7fa0dp-309,
     0x1.dabb4e85f41e6p-792, 0.0, 0x1.12ac41466e6a5p-888, 0x1.6b214feab50d1p-135,
     0x1.9e82545836372p-144, 0x1.a5f5de0deff0ap-874, 0x1.a737c5778ceacp-663,
     0x1.d9188da7c172bp-12, 0x1.19b74000c05afp-84, 0x1.76901fed71fc4p-716, 0.0,
     0x1.f5c8b60573b2ep-1003, 0.0, 0x1.6e1f7133645cbp-5, 0x1.99acb11579c5fp-657,
     0x1.dfe95ce749531p-809, 0x1.88299a54b5ccdp-1014, 0.0, 0x1.ff63dc9dd5ee4p-145,
     0.0, 0x1.b3c2dd2ad10eap-413, 0.0, 0x1.d280e195d568cp-726, 0x1.93b4584f921d6p-561,
     0.0, 0x1.fbcdd4b077d94p-1020, 0x1.cdc1bfd360737p-900, 0.0,
     0x1.45e0b6b56710fp-785, 0.0, 0x1.1d47c527bad35p-753, 0.0, 0.0,
     0x1.2fc7362971d9cp-636, 0x1.51535b24e5b46p-912, 0.0, 0x1.8600c0e56d141p-398,
     0x1.6d6db6be10f1ep-316, 0x1.f1be2dc887e9ap-1015, 0x1.7463076f80377p-448, 0.0,
     0.0, 0.0, 0x1.5c03acb10ffe5p-531, 0.0, 0.0, 0x1.9336e24ab41b2p-131,
     0x1.c83feac78514p-645, 0.0, 0x1.9267f676b70e7p-56, 0.0, 0.0, 0.0,
     0x1.4d4bfe65193ddp-235, 0.0, 0x1.7ccdcb7d3da7ep-990, 0.0, 0x1.232c2ab862191p-919,
     0x1.cbb07706b3a14p-793, 0.0, 0x1.c4f259d2047a4p-337, 0.0, 0x1.266054be73faap-837,
     0.0, 0.0, 0x1.cf023b687805bp-215, 0x1.9d9bb23da5d71p-386, 0x1.c6d97fb87c0d5p-434,
     0x1.584dacb39abe1p-703, 0.0, 0x1.ef985dc5318bap-137, 0x1.1d2f403352253p-664,
     0x1.c3c95dcfe1b9fp-422, 0x1.d6679146c42b8p-75, 0.0, 0.0, 0.0,
     0x1.d047812b17af8p-865, 0x1.254102f1c1792p-86, 0x1.81c8c86fcfda7p-71,
     0x1.de8395ffb8f86p-149, 0x1.52cb7416cc5dcp-474, 0.0, 0x1.599456037e5ap-423,
     0x1.d7e7048743147p-524, 0x1.315c0792e198cp-429, 0.0, 0x1.5df4cbc5ae769p-173, 0.0,
     0x1.4b8f86462f90bp-2, 0.0, 0x1.68f1be8d1e649p-233, 0.0, 0x1.cc5e762df4886p-27,
     0.0, 0.0, 0.0, 0x1.a2068e5ad8b9bp-1014, 0.0, 0.0, 0x1.c7615ca3defadp-567,
     0x1.cec40d2e371dbp-833, 0.0, 0.0, 0x1.3e677cc63538cp-519, 0x1.31e5f8a3359e7p-705,
     0.0, 0x1.0d2527ccaeb5cp-941, 0x1.cb89039ba6354p-615, 0x1.b7efd43980ddap-516,
     0x1.16c4bb7b5c9fp-436, 0x1.75e7eec72a894p-423, 0.0, 0x1.16e370d207a25p-936,
     0x1.0a62bc542dd25p-906, 0.0, 0.0, 0.0, 0x1.f65c46d2d7d9ep-233, 0.0,
     0x1.cc6757f3a0ed1p-64, 0.0, 0x1.4edbe146580c8p-517, 0.0, 0x1.22e9efe69caf9p-141,
     0.0, 0.0, 0x1.f289726ca893ep-856, 0.0, 0.0, 0.0, 0x1.10ed916a4679p-725,
     0x1.7fe6bf00838edp-387, 0x1.3bacaf5c15849p-771, 0.0, 0x1.fb91d4daf04b1p-138, 0.0,
     0x1.025f51654ced5p-590, 0.0, 0.0, 0.0, 0x1.f32dfcf8065d7p-406,
     0x1.52197a8b80da2p-873, 0.0, 0x1.d8355cf87745fp-867, 0.0, 0x1.efccea294f86cp-366,
     0.0, 0x1.73e38bc9b285cp-675, 0x1.99ec1213892fp-906, 0.0, 0x1.9fffed4795ee3p-17,
     0.0, 0x1.fab99f0ed3ccdp-436, 0x1.d60bed3cc910fp-69, 0x1.b5c607f4dd20ep-326,
     0x1.b5ff257ec4902p-711, 0.0, 0.0, 0x1.284710c209ccbp-555, 0x1.6b725ed14ce05p-63,
     0.0, 0x1.23e7e5d954d4dp-748, 0.0, 0.0, 0x1.55b5713be372ap-520, 0.0,
     0x1.14403c59823d9p-865, 0x1.d000f0a47c52ep-852, 0x1.43967505fe32dp-378,
     0x1.aab66033e495fp-1019, 0x1.454e49fcabb07p-791, 0.0, 0x1.ec2b25288e9c9p-893,
     0.0, 0x1.dac29ef487639p-720, 0.0, 0x1.b82da31db506fp-841, 0x1.8bda35aadaac5p-820,
     0.0, 0.0, 0x1.3dc3ac239c57ep-122, 0x1.cdba0baac9aep-133, 0.0,
     0x1.d80ba5c513573p-509, 0x1.777940256e37cp-129, 0.0, 0.0, 0.0,
     0x1.fe47cbea1e8d4p-69, 0.0, 0.0, 0.0, 0x1.6f1d3dd6c9d3dp-817, 0.0,
     0x1.15f4c55dc90efp-459, 0x1.2cbf617848a94p-537, 0.0, 0.0, 0.0,
     0x1.a18b8c71267a2p-252, 0x1.ae0600f8ba358p-566, 0x1.ae3d7c154026cp-283,
     0x1.15b1ff54dc3abp-178, 0.0, 0x1.62885dde31e0ep-984, 0.0, 0.0, 0.0,
     0x1.9c0ea2cd019abp-926, 0x1.5566c76dac831p-871, 0.0, 0.0, 0.0,
     0x1.ea8f24b3f731bp-66, 0.0, 0.0, 0x1.4646aab78a029p-830, 0.0, 0.0, 0.0,
     0x1.d3af4460af9efp-401, 0.0, 0x1.e422b00b65d39p-817, 0x1.7280b6c8441c6p-100,
     0x1.8372415cd7aedp-932, 0.0, 0x1.164d3ae3bf4d1p-131, 0x1.0824178f18dp-454,
     0x1.c93a6d9eda354p-720, 0x1.2bcdc94183fabp-249, 0.0, 0.0, 0x1.4e5f1f28d3c58p-907,
     0x1.27e9a2db8fb82p-300, 0x1.a38d0a1e2d183p-279, 0x1.583a0fc1d084bp-739, 0.0, 0.0,
     0x1.5072b6f919032p-102, 0x1.dbaaff4b389c5p-148, 0x1.14c06bd06dafep-270, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.96a0d87aca73fp-238, 0x1.78aa766bb49dp-530, 0.0,
     0x1.b5764d690930cp-708, 0.0, 0.0, 0.0, 0x1.3d402dc795371p-36, 0.0,
     0x1.5d124cafc8a1fp-488, 0x1.5d20dc4edb6a9p-581, 0x1.d198d48ad0f16p-995, 0.0,
     0x1.6f6f25f52a9dap-659, 0.0, 0x1.39538f61f57adp-578, 0.0, 0.0, 0.0, 0.0,
     0x1.c24539ac1a954p-830, 0.0, 0.0, 0x1.418b8194f6b43p-314, 0.0,
     0x1.966649eeff571p-397, 0x1.832b86f0a5243p-496, 0x1.6373999fa8799p-883, 0.0,
     0x1.f7dc691236895p-711, 0x1.338e5a22f8017p-876, 0x1.942bc279c8255p-423, 0.0, 0.0,
     0.0, 0.0, 0x1.86f02befaaca1p-581, 0.0, 0x1.f91c20a123441p-772, 0.0,
     0x1.e94a3863604dbp-986, 0.0, 0.0, 0x1.3f41a0f3e716dp-638, 0x1.a102dc2cd8602p-917,
     0x1.b07f68d3ad85bp-470, 0x1.688f9c75cc36fp-688, 0.0, 0x1.2d7dd5c4a2dd7p-620, 0.0,
     0.0, 0x1.6e5137ff0255ap-597, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.149de44e3b66bp-98,
     0.0, 0x1.b3183d229a141p-911, 0x1.616c0fe785eedp-677, 0.0, 0.0,
     0x1.eb204bea7e246p-140, 0.0, 0.0, 0.0, 0.0, 0x1.183ee1ee866c2p-452, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e2cce53ac1bep-297, 0.0,
     0x1.34f796a1ecaaep-125, 0x1.d3d9a4ec134dap-638, 0x1.ad9360c4eaadep-455,
     0x1.bad48f6dd9a69p-86, 0.0, 0.0, 0x1.3b195c87269c7p-866, 0x1.f1f46b3cd3f0bp-275,
     0x1.dc748ade80a41p-311, 0x1.218f1a2f3d35fp-927, 0x1.eff94393edc7bp-442, 0.0, 0.0,
     0x1.d3edb8329cb0ep-731, 0.0, 0x1.a4ddc02829c32p-166, 0.0, 0.0,
     0x1.c0353238d26e3p-9, 0.0, 0x1.6c74a5d3c65efp-587, 0.0, 0x1.8248bee968657p-680,
     0.0, 0x1.411f3549fe338p-618, 0x1.5bf07d24c178cp-272, 0.0, 0.0, 0.0, 0.0,
     0x1.2e2bfa8d213c3p-60, 0x1.ca739a50ab303p-88, 0x1.e23cbfd03fc7p-1008,
     0x1.a5064c76f2781p-218, 0.0, 0.0, 0.0, 0x1.d7ef9f6198238p-575, 0.0, 0.0, 0.0,
     0x1.a9e9d4c665565p-84, 0.0, 0x1.f615ff883c7dap-798, 0.0, 0.0, 0.0, 0.0,
     0x1.92e60d921e37p-907, 0.0, 0x1.875638c05cb11p-870, 0.0, 0x1.446e6ae4eeccep-752,
     0.0, 0.0, 0.0, 0x1.f9e8fdfc2057fp-887, 0x1.695db3ab5e9efp-748, 0.0,
     0x1.f0a92637d0fa4p-994, 0.0, 0.0, 0.0, 0x1.94fca9347e7a4p-991, 0.0,
     0x1.b90f5c20603dap-688, 0x1.02bbfa5048fbbp-656, 0.0, 0.0, 0x1.355dc2ccceaabp-55,
     0x1.cbcf6ea5069abp-327, 0x1.e46ddc0c3533ap-473, 0x1.cae8a9d94577ap-770,
     0x1.5f90d6add61a2p-487, 0.0, 0x1.e48daeefe5526p-219, 0.0, 0x1.3fc39cce1604ep-511,
     0.0, 0x1.4b04576fdd69fp-592, 0x1.03ba6d2dc5ca6p-407, 0.0, 0x1.9628f9332e63fp-845,
     0x1.bc987449cf87ep-295, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bcf3e7d999e99p-89,
     0.0, 0x1.0e7a9f1932aefp-85, 0.0, 0.0, 0.0, 0x1.4213d526d397dp-318, 0.0,
     0x1.baf9b5e0de348p-119, 0x1.8be1052d44223p-537, 0.0, 0.0, 0x1.3c1c5bea10fe5p-976,
     0.0, 0x1.53961a59c3c37p-699, 0.0, 0x1.7ac7f0a1d8937p-37, 0.0,
     0x1.6a160c05b681p-317, 0.0, 0.0, 0.0, 0x1.ee42db58c1cb2p-400,
     0x1.25787549bc0c4p-541, 0x1.5745e1cf33822p-922, 0x1.4de3fd7a98851p-979, 0.0, 0.0,
     0x1.9e88913389d17p-120, 0.0, 0.0, 0.0, 0x1.41d2e60b6056p-123,
     0x1.e22ecdd3f6cf1p-409, 0.0, 0.0, 0.0, 0.0, 0x1.72854e3f6d766p-947,
     0x1.a155e49a94418p-13, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b49f882db977dp-731,
     0x1.597992f75f22ap-900, 0x1.d55205e6420fp-223, 0.0, 0x1.c2de185f68986p-83, 0.0,
     0x1.36b00df1305e5p-174, 0.0, 0x1.60355147f2a5ap-32, 0.0, 0x1.7c631f5f74606p-901,
     0.0, 0.0, 0x1.1965cb776de82p-960, 0.0, 0.0, 0.0, 0x1.0570f7fb16a45p-799, 0.0,
     0.0, 0.0, 0x1.26d9628050699p-937, 0.0, 0.0, 0x1.87533597db323p-608, 0.0,
     0x1.f06eb14bd203ep-630, 0x1.ba4a83b4514f2p-718, 0x1.5122ac6d4532fp-912, 0.0, 0.0,
     0x1.5eac6432f8d26p-427, 0x1.17a9d45e7bdbcp-276, 0x1.ed936c41e89e9p-577,
     0x1.8e3407bd40aedp-245, 0x1.b5d358a900299p-741, 0x1.714da1075de83p-62,
     0x1.63cb58e4c1a03p-916, 0x1.e47b4d5e38e45p-660, 0x1.a621cb4aabd2bp-685, 0.0,
     0x1.8ff55a1e1f0f8p-1013, 0x1.45ae218e41627p-204, 0.0, 0.0, 0.0,
     0x1.9a7207c0f77adp-638, 0x1.863886c1c0504p-805, 0x1.b4d7949e3b541p-859,
     0x1.d4b72d3d138ecp-565, 0x1.3eab86fe06e5bp-321, 0x1.ebded08ca2ee4p-333, 0.0,
     0x1.58865fe5b7a76p-562, 0x1.746b2c6cfe164p-911, 0.0, 0x1.a34ce7399c8f6p-621, 0.0,
     0.0, 0x1.1ae4bdb177dbdp-787, 0x1.80f33d8b47b69p-728, 0.0, 0.0,
     0x1.0ad16a2d8ca7ep-209, 0.0, 0x1.5ce8ce20ca89ep-221, 0.0, 0x1.95ade4a7cb702p-545,
     0.0, 0.0, 0x1.af3dbffa6424fp-130, 0x1.7423a2ee0bb1ep-659, 0.0, 0.0,
     0x1.aac073217a157p-84, 0x1.d992dafebf23bp-915, 0.0, 0x1.42ceee855302cp-932,
     0x1.846eb6f0fd3a9p-638, 0.0, 0x1.f88a8f8fcf033p-867, 0x1.5fe9c346a4346p-101, 0.0,
     0.0, 0.0, 0.0, 0x1.6de37021d09d8p-568, 0x1.aeff9d70666e5p-243,
     0x1.f9daed7613c21p-241, 0x1.5239fd399c62ap-330, 0x1.6adde422919c6p-529,
     0x1.701919e6d7e1fp-419, 0.0, 0x1.9536b8b1cf429p-783, 0.0, 0.0, 0.0,
     0x1.f81c5735185c1p-215, 0x1.1e4140503a6b8p-282, 0x1.d775c0000b2cep-966, 0.0, 0.0,
     0.0, 0.0, 0x1.09e6a62f5bcbap-641, 0.0, 0x1.2af5ad17e0743p-316, 0.0,
     0x1.8f5839c960d5ap-106, 0.0, 0x1.d8d82ebc70bf4p-313, 0x1.ef11274dba9e9p-271, 0.0,
     0.0, 0x1.3714269b797fbp-570, 0x1.c74475b645e1fp-107, 0.0, 0x1.14488b778194ep-98,
     0x1.d0ac51b3a03d9p-882, 0x1.9c24bdf7c9b45p-349, 0.0, 0x1.b2d614e28d61cp-202, 0.0,
     0x1.1d9320dd1bd4bp-105, 0.0, 0x1.e2fce4248b52p-914, 0x1.416d741468343p-765,
     0x1.9ebbed146294bp-942, 0x1.a1c0865104d2ap-357, 0x1.a75ae0fe5daap-865,
     0x1.98103d1442528p-697, 0.0, 0x1.cc2e4f86fd642p-765, 0.0, 0x1.b03ceb3a9b546p-683,
     0x1.89d3d75f2db49p-350, 0.0, 0x1.0dd620c0ce106p-701, 0x1.2709023b3a221p-726,
     0x1.2fa5fe83403c7p-296, 0x1.ba3845bfae291p-420, 0x1.13964faeae3e1p-289,
     0x1.75cc4eac06a9bp-538, 0.0, 0.0, 0x1.a57ab91aa9f62p-696, 0.0,
     0x1.fc654096c823bp-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c00cf50cf5ddp-598,
     0x1.040c724784075p-282, 0x1.9a5fe0335eaf3p-428, 0.0, 0.0, 0.0,
     0x1.e83ebe8eec99dp-970, 0x1.625b2fa1a985ap-535, 0x1.2a5d7e933340dp-139,
     0x1.b09a2e8dfaf32p-701, 0x1.f949cbb7b28eep-338, 0.0, 0.0, 0x1.ba48b4511f571p-776,
     0x1.4c81b7bf57c87p-611, 0.0, 0x1.6aa5667c559a2p-553, 0x1.bd343fc185647p-309, 0.0,
     0.0, 0x1.1926b77391f3p-433, 0.0, 0x1.8aeaad13ba7dep-432, 0x1.0ccf1e4397cf5p-827,
     0.0, 0.0, 0.0, 0.0, 0x1.2ef680326bf57p-404, 0x1.4631aec5b126fp-947, 0.0,
     0x1.f0d068a139a8ep-300, 0x1.770be4cd0e941p-20, 0x1.d0984dc93c7eap-1020,
     0x1.e6ad6b9ea40b9p-818, 0.0, 0x1.ae4914c7d2296p-140, 0.0, 0.0,
     0x1.680ddddd763c1p-811, 0x1.175c7344691e8p-673, 0x1.cbcb800b8950dp-719,
     0x1.c496a2dad30dap-314, 0x1.ccfcea095a192p-266, 0x1.ac3cf98184b41p-480,
     0x1.2a7ce650546c3p-898, 0x1.84f28634bf89ap-954, 0.0, 0.0, 0.0,
     0x1.82cf66caffb29p-780, 0.0, 0.0, 0.0, 0.0, 0x1.746e27b8a1bd5p-432, 0.0, 0.0,
     0x1.d3152f903ba14p-821, 0.0, 0x1.37f7ac839b6b5p-63, 0x1.5f25dbf1a0657p-40,
     0x1.63dcdc30bfe44p-232, 0x1.8032db2844b7ep-790, 0.0, 0x1.c10853d5d5b95p-520, 0.0,
     0x1.03a802bf1b3p-889, 0.0, 0.0, 0x1.893654924068ep-739, 0x1.58f2c0338ae42p-726,
     0x1.a6a4fecd6920cp-468, 0x1.430f55fbc9175p-766, 0x1.3cfcf8197315p-565, 0.0,
     0x1.858d3bd8e7a06p-520, 0.0, 0x1.1d14dde14d0cfp-267, 0.0, 0.0, 0.0,
     0x1.fa4529d91d3fbp-775, 0x1.0b04407afc038p-443, 0x1.c1f9f4a6e35f4p-967,
     0x1.ce05373650521p-675, 0x1.9e405725e3b53p-910, 0.0, 0.0, 0x1.ba6fecbd06899p-567,
     0.0, 0.0, 0x1.26dab6eb8c44cp-557, 0x1.3b307219fa7fbp-880, 0.0, 0.0,
     0x1.82baf233480f4p-942, 0x1.2ef64196b0f73p-991, 0x1.4742f366dd48p-499, 0.0, 0.0,
     0x1.270f82108da39p-993, 0.0, 0x1.cb542447b6d8dp-839, 0x1.145b9f1022118p-205, 0.0,
     0x1.4640362d1669bp-684, 0x1.3a81305134dc3p-903, 0x1.e5658499ff45cp-570, 0.0,
     0x1.391024c8558e1p-213, 0x1.6fba72fd1cc0ap-9, 0.0, 0x1.34fc1ae169233p-226,
     0x1.9eaadf9f6ef5bp-290, 0x1.f009116f56d52p-863, 0.0, 0.0, 0.0,
     0x1.47ceb323542fep-48, 0.0
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
            tmp1 = Sleef_tgammad1_u10purecfma(tmp0);
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
    printf("Sleef_tgammad1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
