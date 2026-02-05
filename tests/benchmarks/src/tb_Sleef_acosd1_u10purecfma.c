/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd1_u10purecfma.c --function \
 *     Sleef_acosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.2b88819731b46p-793, 0.0, 0x1.11ffbdf1736bdp-714, 0x1.ed1943c347f52p-838,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a298778f781b7p-981,
     0x1.70b9744fcd7c1p-986, 0x1.5af69932d0609p-627, 0.0, 0x1.4eabd229e3736p-355, 0.0,
     0.0, 0x1.b7e332fd747a3p-986, 0.0, 0x1.3a1e45ccf6f34p-511, 0.0, 0.0, 0.0,
     0x1.2b3fc25872f07p-513, 0.0, 0.0, 0x1.0dc7c18affc36p-25, 0x1.72d6354c5aa0fp-587,
     0.0, 0.0, 0.0, 0.0, 0x1.0b4e0d62aba12p-898, 0.0, 0x1.3c115eb2c47a3p-876,
     0x1.2f3bf27fd8a1ap-183, 0x1.10020e352cc3dp-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.214f447fd5e71p-642, 0x1.b06368ab6deaep-735,
     0x1.cf341d486f4b2p-255, 0x1.e1f23e4e1a48bp-408, 0x1.9802d7daaf02bp-985, 0.0, 0.0,
     0x1.c7a3ba46c7dbfp-204, 0.0, 0x1.0d36def218f7bp-321, 0x1.c4bb8cabc0807p-727,
     0x1.5797d15298a52p-760, 0x1.ad979fa23287dp-93, 0x1.c2de2ece6fb8p-434, 0.0, 0.0,
     0x1.cb07be7e80f4dp-493, 0x1.999d1784d83e2p-58, 0.0, 0x1.619d15f4f4a75p-694,
     0x1.475b59884a8f9p-747, 0x1.406a62712639ep-484, 0.0, 0x1.8459c327be635p-256, 0.0,
     0.0, 0x1.b5eea0f835908p-580, 0.0, 0x1.7aad150b64808p-85, 0.0,
     0x1.923c6178d01e2p-297, 0.0, 0.0, 0x1.30206d9cc02d6p-553, 0.0, 0.0, 0.0,
     0x1.99bc1ba7e99cbp-855, 0x1.7edb6cda19097p-369, 0x1.d519cd0f5c2c5p-408, 0.0,
     0x1.ab8985f2f1366p-23, 0.0, 0.0, 0x1.19552aa802c33p-507, 0.0,
     0x1.dec11bd2c44b5p-876, 0x1.9e0cd15741482p-32, 0x1.759e8b8a6eb28p-181,
     0x1.6a4b611568a61p-296, 0.0, 0.0, 0x1.8a26c5b3a4dbdp-899, 0.0, 0.0,
     0x1.fa20960149feap-727, 0x1.4ab6401b3ce56p-475, 0x1.45e256a85a9c2p-60,
     0x1.79f6dc249a072p-276, 0.0, 0.0, 0x1.d1d0f1a23ba7cp-709, 0x1.91b498cda9068p-131,
     0x1.16c5907ce8fa4p-940, 0x1.a2e9d743844e9p-399, 0.0, 0x1.6c1ee6efe618ap-964,
     0x1.25920233d3267p-605, 0x1.bb5623c6ed045p-486, 0x1.2fe1c582cf964p-899,
     0x1.9a8452c9c72bp-482, 0.0, 0.0, 0.0, 0x1.ba929c3ad1599p-799,
     0x1.91be5d779fa37p-300, 0x1.4d58df9e55532p-371, 0x1.07ab03906320ep-950, 0.0, 0.0,
     0x1.8f43e7b686d65p-394, 0x1.b1e6d050c70eep-704, 0.0, 0x1.106feddcdb25bp-627, 0.0,
     0.0, 0x1.9cc4a65aa1515p-470, 0x1.0e5b7f908d38ep-333, 0x1.5a715a3b5c29dp-155, 0.0,
     0.0, 0.0, 0.0, 0x1.689ed812f7c66p-651, 0.0, 0.0, 0x1.264128104fc03p-687, 0.0,
     0.0, 0x1.74bf86fa4c6acp-241, 0.0, 0.0, 0x1.f998a4350c2cdp-89, 0.0, 0.0,
     0x1.145dbffda37ccp-1018, 0x1.562eb32445cabp-191, 0.0, 0x1.2fb31d5099f0cp-35, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.46b0998c4e2b9p-271, 0.0, 0x1.61b4a784e8e87p-646,
     0x1.5f81b8791d4c2p-594, 0x1.bf7f25ca9c835p-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.694f374423a9dp-713, 0.0, 0.0, 0x1.7d0cd2ea514cp-411, 0.0,
     0x1.2b2301f620ea3p-1008, 0.0, 0.0, 0.0, 0x1.27fc4ed44afcap-981,
     0x1.50f3a7007dbfep-515, 0x1.997340285eaebp-969, 0x1.b994bc838e414p-1011,
     0x1.665b00e6105dbp-755, 0.0, 0.0, 0.0, 0x1.e46e6c4ec2d9ep-984,
     0x1.8401f2f340ffep-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a3602cbeacfap-83, 0.0, 0.0,
     0.0, 0x1.24647bf51c80dp-534, 0.0, 0x1.4cf8d8ff30698p-664, 0.0, 0.0,
     0x1.dde61e21459a9p-151, 0.0, 0.0, 0x1.d207df34a74fp-23, 0.0,
     0x1.fc8ec8b31f2ebp-496, 0x1.33f460f32c5abp-347, 0.0, 0.0, 0x1.bcbd58a952993p-136,
     0x1.00b556abc30edp-513, 0x1.6bc92730e43afp-88, 0.0, 0.0, 0.0,
     0x1.d218b42cb9679p-1008, 0.0, 0x1.68006c484501bp-946, 0.0,
     0x1.37d697f2d5831p-813, 0x1.5318b0beafc32p-414, 0.0, 0x1.5c36fd12ee664p-239,
     0x1.928d79b6c2b08p-323, 0.0, 0x1.bd5d24fc0487ep-470, 0x1.cf6076ce62bddp-895, 0.0,
     0x1.41e6d90a44ddap-558, 0.0, 0.0, 0x1.2a6398d6d6908p-767, 0.0,
     0x1.455981932ee4bp-233, 0x1.878d8c1c8d677p-873, 0x1.d5e39ee987cfbp-402,
     0x1.2ea773f78003bp-458, 0.0, 0x1.b93941a19de25p-383, 0.0, 0.0,
     0x1.a58ec82545523p-2, 0.0, 0x1.cf5a5d2aeb85ap-133, 0.0, 0x1.5ae852ab717a8p-779,
     0x1.e16c15541d7bp-322, 0.0, 0x1.ec049180ca189p-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3769431be282p-226, 0x1.e680dd544cc32p-566, 0x1.bf89806eb834bp-162, 0.0,
     0x1.deb6713250a09p-323, 0x1.2561868d30ec4p-617, 0.0, 0.0, 0.0,
     0x1.3e1bc770c9e04p-791, 0x1.3991c7baf2dddp-302, 0x1.4cbe0233f293p-286,
     0x1.00cdb32d47ecfp-558, 0.0, 0.0, 0x1.da4f2222b6a56p-2, 0x1.e893de2b81412p-937,
     0.0, 0x1.fe3c514f97856p-348, 0x1.c19c66d713759p-655, 0.0, 0.0, 0.0,
     0x1.b940e46c0fa86p-781, 0x1.2e44a1258b10ep-230, 0.0, 0x1.f5b84c477cc4fp-271,
     0x1.c4dd3f24bf8d4p-356, 0x1.70f95a5984d33p-273, 0x1.75a96aeb6692bp-302, 0.0,
     0x1.38adb21b297edp-133, 0x1.0ed4a98e2aee4p-560, 0.0, 0.0, 0x1.e650c35f82f0ap-978,
     0.0, 0x1.1e77980a761f9p-761, 0.0, 0x1.17ae6575abde5p-24, 0x1.11235169bf24fp-441,
     0x1.240870171c6afp-12, 0.0, 0x1.a42977f2500cfp-159, 0x1.f2d75ad93b5fbp-946,
     0x1.5977aa35c860fp-667, 0.0, 0x1.f36e02a4d1d0ep-340, 0x1.82d1aa0a52b2fp-988,
     0x1.bba239bf44a2cp-834, 0x1.75c40a7b1f5b9p-961, 0.0, 0x1.511505db00fc9p-388, 0.0,
     0.0, 0.0, 0.0, 0x1.877a145001627p-325, 0.0, 0x1.8929b6dd64c3p-785,
     0x1.76f9592f8a08bp-875, 0x1.31c57f71cf057p-487, 0x1.300cfa97bf29bp-944,
     0x1.318a2ca04ac94p-497, 0x1.303bf52958045p-561, 0.0, 0.0, 0x1.592dee0cfceeep-979,
     0x1.11a1d8f0b68c3p-151, 0x1.58f9bbfb9b24ap-270, 0.0, 0x1.0ac150f6eb59ep-955,
     0x1.4a9ef72a6a59ep-734, 0x1.5739a743c8c36p-440, 0x1.3d1c59bdaecadp-831, 0.0, 0.0,
     0x1.9a4a08eb69af7p-812, 0x1.d8f212b7b4308p-328, 0.0, 0.0, 0x1.72a5a7101088ep-16,
     0x1.29d3b4b13d501p-803, 0.0, 0.0, 0.0, 0x1.61eb6a6ea567dp-218, 0.0,
     0x1.3aa8fb59043eap-764, 0x1.0b51354b0defcp-385, 0.0, 0x1.d4b0ed0794575p-778,
     0x1.f1c010218dd76p-326, 0x1.f856f5c535073p-341, 0.0, 0x1.ba1a658b65149p-648, 0.0,
     0x1.8795eb3dc1b0fp-616, 0.0, 0x1.c705821e142dcp-436, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.23d9c5c8b6bc3p-708, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49a0578461184p-250, 0.0,
     0.0, 0x1.d60791a7c3a55p-666, 0.0, 0x1.749c8b7b6079cp-96, 0x1.78ffa7a2330fep-658,
     0.0, 0.0, 0.0, 0x1.8d2adb66e70fbp-554, 0x1.b2314bda46558p-763, 0.0, 0.0,
     0x1.73ee5e249f844p-88, 0x1.7e498ca545acp-576, 0x1.2580611a2b24fp-652, 0.0, 0.0,
     0x1.921a60416edadp-166, 0x1.a94ef5c0a4295p-307, 0x1.6807f356db31ap-896,
     0x1.110d56644fa1fp-633, 0.0, 0x1.819ad428efd6fp-1001, 0.0,
     0x1.a4f4562deaeb6p-596, 0x1.37d0f168d93c2p-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2470b1512c30ap-997, 0x1.487f6d75f2065p-951, 0x1.2aa53199e04d2p-639,
     0x1.077f2c2d99b33p-457, 0x1.6115478d2ad01p-76, 0.0, 0.0, 0x1.f315d14409b71p-963,
     0.0, 0x1.6b10f033ecc52p-934, 0x1.386f42c1aa324p-531, 0x1.a99c1b631ac82p-323, 0.0,
     0x1.d1d82dbdf15e5p-722, 0.0, 0x1.9503acb2c0abfp-98, 0x1.54261ad092c3ep-1022, 0.0,
     0x1.708adcee973dfp-620, 0.0, 0x1.d4db26fa5f193p-225, 0.0, 0.0,
     0x1.e0e7456602f01p-475, 0x1.1437465d9b448p-110, 0x1.a8161f17ddc82p-657, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.af65f15b5ce08p-920, 0.0, 0x1.6f7ca43fbbd56p-298, 0.0,
     0x1.6e90643f4c4a8p-272, 0x1.a64dc58f6a904p-804, 0x1.231789b0f36c2p-70,
     0x1.bb2cda1acff3cp-414, 0x1.279ef896a3296p-486, 0.0, 0x1.2aee2e9d76751p-491,
     0x1.71afda18cb9eep-837, 0.0, 0.0, 0.0, 0.0, 0x1.a652a729711fp-159,
     0x1.7b6712304e468p-484, 0.0, 0x1.c6d5756f3827p-834, 0.0, 0.0,
     0x1.ae9cae0fc2ec3p-310, 0x1.5b42ef46d2fafp-427, 0x1.6c382a24b7af9p-119, 0.0, 0.0,
     0.0, 0x1.91e3d1812cd8ap-831, 0x1.a194e195290f2p-605, 0x1.40322e0cff1fp-211,
     0x1.a2d7ef6e41604p-148, 0x1.a566b41f0947p-125, 0x1.ab5f7e711e06fp-986,
     0x1.cac6c5e248ae8p-471, 0x1.ef2d62e66aff9p-393, 0x1.ea7bc54ccb293p-323,
     0x1.e5ca4d6138d76p-958, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.104d985ac3abfp-597, 0.0,
     0x1.712688473dffdp-953, 0.0, 0x1.89585399609edp-749, 0.0, 0x1.9fcc859e656f3p-722,
     0x1.3b5431bfc2e27p-333, 0.0, 0.0, 0x1.f8fc73b80aadcp-399, 0x1.43422621d75ebp-967,
     0.0, 0.0, 0.0, 0x1.bbfd282dd0e18p-594, 0x1.548beccb3c521p-48,
     0x1.075faaff9bad2p-424, 0x1.e014147accd84p-2, 0.0, 0.0, 0x1.a79018c33518p-186,
     0.0, 0x1.54b86d94efbcfp-126, 0.0, 0.0, 0x1.06741f65f728p-429, 0.0,
     0x1.faed2cff47dfdp-700, 0x1.a46ea48a3dbb3p-70, 0.0, 0.0, 0x1.76b8ff4223351p-216,
     0x1.02719a16560dcp-995, 0.0, 0x1.e41deedbf4bdfp-573, 0.0, 0.0,
     0x1.dc96a753e05f4p-707, 0x1.2de1b83fc8967p-636, 0x1.4d32737d20bf8p-173, 0.0,
     0x1.d8fb14e5efb01p-46, 0x1.fce1dea1b993p-491, 0.0, 0x1.c486eaf893c87p-833,
     0x1.cae4931566804p-194, 0x1.75d42d843a524p-121, 0x1.6e0f6e6f3009ep-118,
     0x1.88155f2595811p-875, 0.0, 0x1.edc8ff634751dp-870, 0.0, 0.0,
     0x1.b541a75a42a6bp-972, 0x1.2319d84169a23p-335, 0.0, 0x1.ad44d0764b5cbp-470,
     0x1.47ff33cdbc44cp-786, 0.0, 0x1.94db6c1d48815p-925, 0.0, 0.0,
     0x1.14172df47c06ap-941, 0.0, 0x1.0e399f4a0beb3p-287, 0.0, 0x1.a573af2ac3f79p-930,
     0.0, 0.0, 0x1.1e01f9d83bb56p-719, 0x1.2b00df5c65517p-345, 0x1.2399cd5dc6b7fp-427,
     0x1.7affbaee2799cp-945, 0.0, 0x1.702bcfd9508c9p-13, 0.0, 0.0,
     0x1.aa9dab4351f4bp-258, 0x1.517a222c843b8p-419, 0.0, 0.0, 0x1.cd29450603f69p-635,
     0.0, 0.0, 0x1.7a34b8f81afbfp-769, 0x1.23e66ddea9a8ap-246, 0x1.b407cd82e7dp-771,
     0x1.b55b7a0841a3fp-762, 0x1.b66dd81b70907p-721, 0x1.8d77db645c26bp-840,
     0x1.d2ceac8ef36d1p-758, 0x1.2f5e39a72fb78p-101, 0x1.b425036c46b27p-422,
     0x1.e654bd2c04a69p-787, 0.0, 0x1.2326c3065407ap-334, 0x1.14ac62c11bf68p-960,
     0x1.4c80027be38bbp-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fea2921107b1ap-525, 0.0, 0x1.dff9044127a2cp-115, 0.0, 0.0, 0.0, 0.0,
     0x1.2a31c0f04d89bp-441, 0x1.e283f7c159848p-719, 0.0, 0.0, 0.0,
     0x1.9a814e599d382p-551, 0x1.decf01234712ep-554, 0x1.6aef16cfb7df3p-752, 0.0, 0.0,
     0x1.1f9a2e1fbe8c1p-243, 0.0, 0.0, 0.0, 0x1.6cf76e7893483p-268, 0.0, 0.0,
     0x1.bacb424e062aep-373, 0.0, 0.0, 0.0, 0x1.5cccee59fedc9p-632,
     0x1.8a4d2ac281b22p-383, 0.0, 0x1.1e87e4988b565p-169, 0x1.63bd2a4674315p-195,
     0x1.77de5f7ed11c6p-367, 0x1.36418300b068fp-261, 0x1.d531d4f1373bep-858,
     0x1.03818a43772eep-213, 0x1.235862d43f3b7p-504, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a260720f36f9p-151, 0.0, 0.0, 0.0,
     0x1.6a637cb32e936p-1003, 0x1.d674520d8accdp-152, 0.0, 0x1.717e39c309414p-83, 0.0,
     0x1.ead8a1cd812a9p-809, 0.0, 0.0, 0.0, 0x1.ea7833f6c8082p-804, 0.0,
     0x1.3cdc1c2d83005p-996, 0.0, 0x1.3f0b9b68d14d2p-944, 0.0, 0x1.48fbd200a5333p-658,
     0x1.d0a2a7f14f727p-643, 0x1.12a35c132ab96p-443, 0x1.ced8eb514dc09p-66, 0.0,
     0x1.14a0f311b4883p-553, 0x1.3f4205d8c543cp-108, 0.0, 0x1.b355f2be2afc9p-305, 0.0,
     0x1.7ac15641c6974p-631, 0x1.97323f3c98a24p-778, 0.0, 0.0, 0x1.d5982ed3a4c26p-671,
     0x1.5b183eeb11acp-537, 0x1.2b3cfb491eb7bp-106, 0x1.af12ab37d8bc6p-340,
     0x1.959d4ae05b6f7p-418, 0x1.bb15c117ab247p-918, 0.0, 0x1.7e6828cbfa031p-359, 0.0,
     0x1.01a308ab4c1e6p-502, 0x1.e4bea47310c07p-132, 0.0, 0.0, 0.0,
     0x1.fb4cbab1802adp-242, 0x1.45d00d470d66p-827, 0.0, 0.0, 0x1.b8124a564e694p-374,
     0.0, 0x1.3a986c94d2652p-703, 0.0, 0x1.564545b66a0abp-187, 0x1.b3d9ce969489ap-986,
     0x1.84fdc385d6074p-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19222aed181aep-713,
     0x1.2cc4ebc6cba09p-829, 0.0, 0x1.ffd4540c21ac3p-114, 0.0, 0x1.d50a9b5518deap-704,
     0x1.d0a8b689f9b56p-248, 0x1.cf5f878378bcep-791, 0.0, 0x1.069af7ee73318p-867, 0.0,
     0.0, 0x1.6deaa760e4773p-431, 0.0, 0.0, 0x1.cc4ef18d02d71p-379, 0.0,
     0x1.3f157586c4a03p-746, 0x1.b0c092ce69ce5p-372, 0x1.dff8f6a3a2e82p-1018,
     0x1.cfee443c88376p-769, 0x1.be264e6dff9edp-438, 0x1.3ceb25d848d5p-123, 0.0,
     0x1.a480cadc80c38p-964, 0x1.65a4c5ef75717p-760, 0.0, 0.0, 0x1.d91fbfbd06584p-598,
     0.0, 0.0, 0x1.e61962c7226b5p-323, 0.0, 0x1.01dce91bdc1cdp-367,
     0x1.593d66df6a0bp-252, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff75a6b602c4bp-772,
     0x1.07547244da208p-562, 0.0, 0x1.0defd4f27a052p-832, 0.0, 0.0,
     0x1.918ea77f7b794p-938, 0.0, 0x1.dba60dad1eac3p-740, 0x1.5d08060e4be4fp-820,
     0x1.ec4398360c997p-121, 0.0, 0.0, 0.0, 0x1.9866973b16553p-803, 0.0,
     0x1.b71ae0c19a388p-574, 0.0, 0x1.63509297e0ff1p-878, 0x1.5b9aece936b87p-569,
     0x1.0a42b5609123cp-830, 0x1.5745045da6337p-710, 0.0, 0.0, 0x1.355e81f5695c5p-341,
     0x1.fa7bace18efb9p-546, 0x1.274d4458321f4p-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6e065fba65af8p-659, 0x1.d80bd3f81a77dp-600, 0.0,
     0x1.ba5bd480d0846p-562, 0x1.92547c930260cp-653, 0.0, 0.0, 0x1.6c3a0ba88e94fp-567,
     0x1.9b66ffbc75d9cp-825, 0.0, 0x1.2182d6a57bd99p-31, 0.0, 0x1.ee039fd0d1b7ep-432,
     0.0, 0x1.b030d01e3f7dp-101, 0x1.5a93e124613d2p-252, 0.0, 0.0,
     0x1.4e182848f4062p-894, 0x1.501601bcdc1b8p-412, 0x1.f111a7d3abap-382, 0.0, 0.0,
     0x1.72c811213d9cep-578, 0x1.9d3cf4abeaf7fp-673, 0.0, 0.0, 0x1.94316a1193b12p-394,
     0x1.e5c3af663cdcfp-52, 0.0, 0x1.46ba5f90aed4fp-49, 0x1.fbf7a61352046p-637, 0.0,
     0x1.545c94ab5092bp-311, 0.0, 0x1.47b850dbaf327p-1019, 0x1.a3f9af540f03cp-952,
     0.0, 0x1.54d5f395bc00cp-895, 0.0, 0x1.4a526dbf3597ap-627, 0x1.21a732b868d73p-245,
     0x1.adcca6a9ca719p-75, 0x1.0d1947ee007cdp-402, 0x1.6956beac3e7cp-78,
     0x1.4100314ef9d6bp-357, 0.0, 0x1.2fd0e210d6dbep-486, 0.0, 0x1.ba685df8a446cp-939,
     0x1.2a2cf9b20b3f9p-335, 0.0, 0x1.0436446f7758p-724, 0x1.b23fe48f02fd4p-345,
     0x1.8a85daefb96edp-406, 0x1.892d683c0c5a2p-1004, 0x1.6d615c6d27479p-631, 0.0,
     0.0, 0x1.f6f84b00e8c17p-785, 0x1.591a7541c82d6p-952, 0x1.f25a5557fd45fp-482, 0.0,
     0.0, 0x1.6d8cec328fc44p-524, 0.0, 0x1.43e93f8749bcap-798, 0.0, 0.0,
     0x1.524168d027a48p-1009, 0x1.bc080324d187dp-711, 0.0, 0x1.889f9912b62dcp-272,
     0x1.2700f5aef1684p-556, 0x1.ef4da324cb064p-524, 0x1.d009c399b759bp-703,
     0x1.23025cc06355bp-1016, 0x1.db6153e51d317p-596, 0x1.5add163e54259p-593,
     0x1.5db5c20156cf5p-640, 0x1.4e03cbe0a7a6ep-323, 0.0, 0x1.3e48f792666cp-718,
     0x1.f1cf17e0bcc5dp-460, 0x1.e1ac84c8f0ecbp-953, 0.0, 0x1.c6b53aedd8798p-895, 0.0,
     0.0, 0.0, 0x1.a45c1d019b8dep-156, 0.0, 0x1.6839ce783b9ap-571,
     0x1.1e46858857b38p-440, 0.0, 0x1.787ae0e8ff64p-98, 0.0, 0x1.8bd2a20431da1p-119,
     0.0, 0x1.afafe88f4da22p-994, 0x1.7cf5296699d3dp-52, 0x1.f2aa0a26af85p-832, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.72466972a5e72p-870, 0.0, 0x1.5cab52b404c0ap-248, 0.0,
     0.0, 0x1.f470269b03549p-246, 0x1.97bb283cbb7d5p-940, 0.0, 0.0,
     0x1.0a441c9fe3349p-310, 0.0, 0.0, 0.0, 0x1.6be8fea3af1e5p-897,
     0x1.b7c187a8df6fap-5, 0x1.652b7de9b0948p-471, 0x1.eacd976452027p-578, 0.0, 0.0,
     0.0, 0x1.be13937308383p-843, 0x1.12ad23658d4fp-826, 0.0, 0.0,
     0x1.d01edee9872b7p-362, 0.0, 0.0, 0x1.68f61bb22354ap-249, 0x1.87b05ce540d27p-841,
     0x1.33e4830f31547p-568, 0x1.e4ca9b9e77a4cp-703, 0x1.dae96f9d1461dp-47,
     0x1.b24a9f3917fbdp-579, 0.0, 0x1.6b99512f81426p-871, 0x1.76bfe956ee3ecp-595, 0.0,
     0x1.7ce31491e6a56p-144, 0x1.2f0b19056af51p-312, 0x1.1c65fed039255p-537,
     0x1.e4f11999b5fffp-411, 0.0, 0x1.da313e9928093p-315, 0x1.ce627cfa485dap-538, 0.0,
     0x1.c87c25632f17dp-571, 0.0, 0.0, 0x1.13543c7c9d99cp-132, 0x1.64bbee867ef9ep-434,
     0x1.ae89079ac7546p-621, 0.0, 0x1.5f5b5b6931f95p-973, 0x1.855f728edb25ap-380, 0.0,
     0.0, 0x1.374c2a633ba5dp-115, 0.0, 0.0, 0.0, 0x1.e31f34b9beeb6p-919, 0.0, 0.0,
     0.0, 0x1.f6ab5dbc699c5p-742, 0.0, 0x1.acb2f226a09bep-544, 0x1.49993bf23c85cp-374,
     0.0, 0.0, 0.0, 0.0, 0x1.494f7ddf9020ap-669, 0.0, 0x1.43457080cfd45p-1012,
     0x1.a1bd84ddd5a32p-858, 0.0, 0.0, 0.0, 0x1.5ea6f57f20992p-518,
     0x1.bad4941906bc1p-555, 0.0, 0x1.0ef0a86568bf1p-1000, 0.0,
     0x1.fe17c43ce573ap-942, 0x1.bcbbafee16b57p-880, 0.0, 0x1.d7f9b0642edf4p-13, 0.0,
     0.0, 0.0, 0x1.0a26bd2126388p-788, 0x1.8ec1762cc75f4p-448, 0.0,
     0x1.028b8f6d604b3p-992, 0.0, 0x1.177a77a26776dp-348, 0x1.1a12ee8036d7bp-250, 0.0,
     0x1.1c5710dc21596p-859, 0.0, 0.0, 0x1.99222f646b0a3p-743, 0x1.ef142991a1c0ap-579,
     0.0, 0.0, 0x1.0bd59e5de577ap-674, 0x1.ba9e4c9d66c47p-209, 0x1.0e829d9626771p-727,
     0x1.0a34a0434b55dp-659, 0x1.83c572d811c78p-652, 0.0
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
            tmp1 = Sleef_acosd1_u10purecfma(tmp0);
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
    printf("Sleef_acosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
