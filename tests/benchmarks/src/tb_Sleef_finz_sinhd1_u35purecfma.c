/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd1_u35purecfma.c --function \
 *     Sleef_finz_sinhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.743000afe6effp-296, 0x1.6ed2a42a2f9eep-954, 0x1.09f87c9d21c3p-313,
     0x1.4aed65e0e768ap-829, 0.0, 0x1.8dd29062bb06bp-430, 0.0, 0.0, 0.0,
     0x1.dcacc8eb6de05p-1006, 0x1.c93a1e6579c73p-880, 0.0, 0x1.2cd683e5e372fp-594,
     0x1.20a4178ec3e2cp-105, 0x1.3cea1aef5ac6ep-159, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.321a8f4cd7bbfp-255, 0.0, 0.0, 0x1.e600234313799p-251, 0.0,
     0x1.98635eb8e3097p-819, 0.0, 0x1.68e1568128938p-983, 0.0, 0x1.5b9e0b13eb9a6p-585,
     0.0, 0x1.345a149ca5bdp-576, 0x1.f5fcb36cfc997p-168, 0.0, 0.0,
     0x1.323c628ff20afp-197, 0x1.744e01248d89ap-7, 0.0, 0x1.73856aff1709bp-1014, 0.0,
     0.0, 0.0, 0.0, 0x1.57f3ec1062bfp-216, 0.0, 0x1.2a7d5c8318ed1p-253, 0.0,
     0x1.19d15a17e9e0cp-486, 0x1.03b74d622d506p-60, 0.0, 0x1.1036195dbe2ep-303, 0.0,
     0.0, 0x1.af9a761902174p-47, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f9ce0d42f044p-874, 0.0, 0.0, 0.0, 0x1.875d1562ed0cep-520, 0.0,
     0x1.fb1440047742dp-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.872aec48c21aep-768, 0.0,
     0.0, 0x1.2505590df2e45p-73, 0.0, 0x1.b1f2d337a7249p-32, 0x1.95ee7b87eaf23p-280,
     0.0, 0x1.7b7242960c59bp-45, 0x1.c57b570120a5ep-226, 0x1.62bcd96899a4ap-364,
     0x1.2cfe5599c9785p-547, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d751df357d16dp-222, 0.0,
     0.0, 0.0, 0x1.dede8e7d50269p-361, 0.0, 0x1.27beb94432651p-141,
     0x1.4266d6a52ace5p-640, 0x1.d6a77ae7a3f5dp-730, 0x1.e52488c9553c9p-682,
     0x1.a40a3ab12e53cp-386, 0.0, 0.0, 0.0, 0x1.31fdf1383699fp-700,
     0x1.64d3379a7d5cdp-367, 0.0, 0.0, 0x1.14ed5126fea8p-38, 0.0,
     0x1.8b08b35704228p-629, 0.0, 0.0, 0x1.f25f6fe8b132p-795, 0.0,
     0x1.16cb12a907eabp-210, 0x1.5ef4a96a6585ep-581, 0x1.5aa79c4a2767cp-1008, 0.0,
     0.0, 0x1.4270df846121ep-596, 0x1.8573924445186p-893, 0x1.f6a9fb56c55d2p-978,
     0x1.ace887904c4ffp-343, 0x1.1f2cadd6eebc1p-114, 0x1.cecf13c56f674p-526,
     0x1.169f25787dec6p-178, 0x1.1f9c292253ae2p-989, 0.0, 0x1.079b84eb71698p-9, 0.0,
     0.0, 0x1.56f539e9e5cccp-515, 0.0, 0x1.346aba56c803ap-234, 0.0,
     0x1.d0b34e2d8d147p-566, 0.0, 0.0, 0x1.b47199ddff071p-794,
     0x1.792bf3e8d20f2p-1012, 0.0, 0x1.24b91bc0175b5p-785, 0x1.052494ad40918p-990,
     0.0, 0x1.8f254a3765ec9p-515, 0x1.43cd3cc000d7ap-528, 0.0, 0x1.2b984080d0aa5p-399,
     0.0, 0.0, 0x1.4e1ba30717c86p-809, 0x1.69acf40a0c2bep-744, 0.0,
     0x1.225571ebe1eeap-732, 0x1.e934be80193dcp-853, 0x1.c3e0636b8114p-803,
     0x1.846bd9b5abd74p-603, 0.0, 0x1.0b442155f28bbp-773, 0.0, 0.0, 0.0, 0.0,
     0x1.b9d29e6232d86p-320, 0.0, 0x1.206ee919d5ccp-691, 0x1.d44f864d74a42p-87,
     0x1.0d5be69f07151p-873, 0.0, 0.0, 0x1.7b8444bcb750fp-624, 0.0,
     0x1.17402d210a21dp-44, 0x1.71a7908ad4ffdp-468, 0.0, 0.0, 0x1.0a9160d2daff3p-740,
     0x1.1f2f2b7367a5fp-184, 0x1.99683af5ffb2bp-58, 0x1.1cb17543bec8fp-894, 0.0, 0.0,
     0.0, 0.0, 0x1.727fa38511792p-162, 0.0, 0.0, 0.0, 0x1.713a03636d9f8p-431,
     0x1.f769ff3be34a9p-772, 0.0, 0x1.c575e5d8a985ep-178, 0x1.bbdb0c137349ep-876,
     0x1.6a99eb7ad38c2p-989, 0.0, 0x1.832c672d23788p-1014, 0x1.69116c9287e05p-10, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eea6e6d2e7625p-181, 0.0,
     0x1.7cba8e7cc936cp-721, 0.0, 0.0, 0x1.103570d37ca2dp-582, 0x1.fd3315802fd6ep-980,
     0.0, 0.0, 0x1.c902601ae6bfbp-209, 0x1.655fe75fb0bc4p-887, 0x1.00a1b486125e7p-235,
     0x1.7d049fdad9576p-456, 0x1.31bf729fe8c45p-979, 0.0, 0x1.b871f6d7a744fp-409,
     0x1.e5b643e6115b6p-945, 0.0, 0x1.db9c5eba8a244p-596, 0x1.2c0a72a987306p-98, 0.0,
     0.0, 0x1.38be4f298055ap-317, 0x1.7d67622ac7009p-1002, 0x1.885c4aec45f94p-342,
     0.0, 0x1.19f24d95c9bc1p-747, 0x1.67a26b5e2983p-136, 0.0, 0.0, 0.0, 0.0,
     0x1.5c0d81e5a321fp-430, 0.0, 0x1.5719b2bb81d95p-146, 0.0, 0.0,
     0x1.cb090a145f2d1p-148, 0x1.af8e059002738p-540, 0x1.07d3dc4de4b44p-927, 0.0,
     0x1.a063ec70e3835p-730, 0.0, 0x1.34acf708a9767p-75, 0.0, 0.0,
     0x1.8c15881fcca49p-286, 0x1.3f091efbc4c97p-707, 0.0, 0.0, 0.0, 0.0,
     0x1.7bf73546341a8p-287, 0.0, 0x1.4bd5ad736c7e1p-62, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8945a04add7ebp-882, 0.0, 0.0, 0x1.fd10870bb003cp-752, 0x1.8a64da9c895a8p-409,
     0.0, 0.0, 0.0, 0x1.17966cea49d99p-311, 0x1.58d18ac22225p-678, 0.0, 0.0, 0.0,
     0x1.9bb7396172d27p-850, 0.0, 0x1.cef68e422b7afp-736, 0x1.1b5fcbc093efap-1004,
     0.0, 0x1.27fabc9216a03p-973, 0x1.180d558d28845p-815, 0x1.4f4a2e7b3d01ep-943,
     0x1.ebf401d3a1f01p-409, 0.0, 0.0, 0x1.c1f3550af457ap-428, 0x1.40c422e3ca368p-919,
     0x1.39e101a21bff1p-691, 0x1.bde5d2af6ddf5p-554, 0.0, 0.0, 0.0,
     0x1.23b96e0a7e9f8p-362, 0.0, 0x1.0e53471f649b8p-454, 0.0, 0.0, 0.0,
     0x1.8257a9a398027p-937, 0x1.30407a94c492ap-848, 0.0, 0x1.0b7251d1f3edep-963,
     0x1.228c19a07162bp-89, 0.0, 0x1.dc5d4dbbb925fp-826, 0x1.95740e51e095dp-73, 0.0,
     0x1.a827b76cb57b8p-852, 0x1.1477bc74ab0edp-987, 0.0, 0x1.3db20cfd883e6p-348, 0.0,
     0x1.ac9001523ba15p-188, 0x1.0ca87bcddda75p-122, 0.0, 0x1.4e295eb751167p-980,
     0x1.57f540462978ep-634, 0.0, 0.0, 0x1.b9d9e3b58428bp-804, 0x1.739ad45d89292p-321,
     0x1.42d6836fb2774p-55, 0x1.13fecea052c36p-872, 0x1.bd571bb26818ep-973,
     0x1.f7c8cb41aeb21p-674, 0.0, 0.0, 0x1.ad4a42165a003p-333, 0.0,
     0x1.5b3500c7cab27p-395, 0x1.2e82000bd85f5p-176, 0.0, 0x1.4facfcd7532ecp-935, 0.0,
     0x1.ddb202001e0d2p-987, 0.0, 0x1.7423f53d9578dp-718, 0x1.518c2b247501dp-765, 0.0,
     0.0, 0.0, 0x1.89ba84c42f97cp-371, 0.0, 0.0, 0.0, 0.0, 0x1.9212ef8b5a602p-188,
     0.0, 0x1.55f1a27e484a1p-495, 0.0, 0.0, 0.0, 0x1.ef95fcb198232p-532, 0.0,
     0x1.df98467bd6d9dp-539, 0x1.ca76728ebc389p-141, 0.0, 0x1.39f774f9cf0d7p-5, 0.0,
     0.0, 0.0, 0x1.f370b631cca12p-416, 0x1.11e907aaa97fcp-420, 0x1.fdb778da654a6p-710,
     0.0, 0.0, 0x1.9de408ad2cf5dp-680, 0.0, 0.0, 0.0, 0x1.8e59a5e7088ccp-98, 0.0,
     0x1.aeeff5dd87f5p-334, 0x1.0e0b30f2a7939p-98, 0.0, 0.0, 0x1.3bb9a0d7b4768p-274,
     0.0, 0.0, 0x1.844f6cf72437p-930, 0x1.51890d21ff567p-156, 0x1.6b4653c37e8fbp-945,
     0.0, 0x1.c8683bc423a0dp-973, 0x1.d8227fee367ep-914, 0.0, 0.0,
     0x1.6515e72c4926dp-798, 0x1.5bb6e8b08f6e1p-189, 0.0, 0x1.30710460f70c5p-29,
     0x1.3776e918cca63p-222, 0x1.55ee7bd353af7p-613, 0x1.2f64833cbb3d7p-282, 0.0,
     0x1.985b6a2b77903p-236, 0.0, 0x1.6ce4105631813p-19, 0.0, 0.0,
     0x1.1bafdcdcbe5afp-617, 0.0, 0.0, 0x1.8ce7396cbe62ep-493, 0x1.f79bb3e24e524p-523,
     0.0, 0x1.26e45ed843d5p-570, 0.0, 0x1.b29356a67058bp-446, 0.0, 0.0, 0.0,
     0x1.9c037cdde89edp-152, 0x1.626c00cdd1febp-564, 0x1.b610b6d7b02b5p-248,
     0x1.a75bbd4ddf751p-578, 0.0, 0x1.f3027583cde67p-734, 0x1.c2c579a93c64cp-393, 0.0,
     0.0, 0x1p0, 0.0, 0x1.55c7bdaf55dfp-822, 0x1.401246d974a15p-137,
     0x1.b15bdf3b11243p-799, 0.0, 0.0, 0x1.583e5f0e4638dp-855, 0x1.29f2597c9b498p-909,
     0x1.ed459803fc9dap-313, 0.0, 0.0, 0.0, 0x1.629b55099fda4p-246,
     0x1.9292b049143p-356, 0.0, 0x1.cf91891ec2609p-506, 0x1.08f714816e025p-282, 0.0,
     0.0, 0.0, 0x1.1d2f1e5e32961p-748, 0x1.b14e0aba3eb78p-639, 0.0, 0.0, 0.0, 0.0,
     0x1.ed5289688b3ffp-614, 0x1.8fa0b8e65c252p-531, 0.0, 0x1.316fa09204069p-897,
     0x1.56efd319607abp-635, 0x1.2e570c456a796p-515, 0x1.80e621523713ep-161, 0.0, 0.0,
     0x1.6c4d144f09056p-475, 0x1.e2467aea25e11p-661, 0.0, 0x1.0a0e2c77ae9dep-267, 0.0,
     0x1.110c9f75d581bp-901, 0.0, 0.0, 0x1.614c92894138ep-571, 0x1.c22d1ca0ed3e4p-774,
     0x1.eadebf72810bdp-871, 0x1.fb00a51908259p-139, 0.0, 0x1.132a91c2c6538p-243,
     0x1.eefb29722f918p-605, 0.0, 0x1.f616284bf60d8p-676, 0.0, 0.0,
     0x1.a5d6ff0114a65p-65, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19fc984edd073p-904, 0.0,
     0.0, 0x1.f10df7a26926ep-910, 0.0, 0x1.de46d912c5632p-134,
     0x1.de007e394d444p-1016, 0.0, 0x1.2fcb7fb3da778p-98, 0x1.2bc17543d2fb5p-750, 0.0,
     0.0, 0x1.86f1df169eb3p-64, 0x1.485dc73475578p-5, 0.0, 0x1.96afb99fadb6cp-717,
     0.0, 0.0, 0.0, 0x1.41277b88f6301p-246, 0.0, 0x1.67444f0d94667p-281, 0.0, 0.0,
     0x1.9ef612288002dp-852, 0x1.850eda9662c3ap-80, 0x1.5235bc2ea5327p-529, 0.0, 0.0,
     0.0, 0.0, 0x1.929ae5fe4871dp-1007, 0.0, 0.0, 0x1.4910d8cfba14cp-259, 0.0,
     0x1.0c884caac289ep-202, 0.0, 0x1.180380a1b74e8p-208, 0x1.7d0498971503ep-643,
     0x1.d660251467c7ep-213, 0x1.a308284e61d53p-257, 0x1.3b49b980abf3bp-229,
     0x1.2b544cc041c36p-188, 0.0, 0x1.d0184ebf4cd07p-874, 0.0, 0x1.c2aac93d361c9p-137,
     0.0, 0x1.c02dab60c4de3p-601, 0.0, 0x1.383f980c8e514p-455, 0x1.84bd1d9af4f68p-135,
     0.0, 0x1.3b5af3bcc59dbp-939, 0x1.f3f896732cb2ep-97, 0x1.2dda9c55feaabp-696,
     0x1.3a14dcf578a7bp-856, 0x1.2d691e706039p-957, 0.0, 0x1.297dd2a5bc9dbp-817,
     0x1.68c0e8164640fp-990, 0x1.f3cf58f94e84ep-232, 0x1.e122d0ec8f297p-681, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d5110bb88fc9p-675, 0x1.6e47036d559f1p-813,
     0x1.8dabb5814af8bp-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9fcabadd6a888p-836, 0.0,
     0x1.34ee141d4ad33p-369, 0.0, 0x1.73f7fcb4e05bbp-741, 0x1.a6dd0daa6c592p-856, 0.0,
     0x1.01e4f949faf6cp-538, 0.0, 0.0, 0x1.d91c32b85fc6bp-720, 0.0,
     0x1.80dc8b9e53cddp-426, 0.0, 0x1.8bf5129ca7349p-239, 0x1.f5e9eae637c7ep-452, 0.0,
     0x1.d1f0abf547706p-21, 0x1.fd2856f96bcd5p-347, 0.0, 0.0, 0x1.bf3873046b829p-972,
     0x1.74e80b507d5fdp-387, 0.0, 0x1.20021c81d5cc4p-900, 0x1.0fa43f3280771p-729,
     0x1.1203a0fcb0104p-901, 0.0, 0x1.93b2354f6f2ap-559, 0x1.2077b9ae71518p-66, 0.0,
     0x1.c8654b8be1764p-651, 0.0, 0x1.77fa66d6b4f95p-979, 0.0, 0x1.bed0cff256625p-538,
     0.0, 0.0, 0.0, 0x1.67d2d684792e6p-975, 0x1.51f268fd81829p-865, 0.0, 0.0,
     0x1.70f39beb5f839p-732, 0x1.455265f07a06bp-478, 0.0, 0.0, 0x1.0c6284a2aec0fp-212,
     0.0, 0.0, 0x1.824ef4b2f8632p-18, 0.0, 0x1.b14e2ffeaeb4dp-285, 0.0,
     0x1.c2fab632f1913p-718, 0x1.c8d771686e5c2p-782, 0x1.7a654050c9a71p-641, 0.0, 0.0,
     0.0, 0.0, 0x1.e21f29504ef0fp-224, 0.0, 0.0, 0x1.ebc58ef631e25p-278,
     0x1.b21a3c9e5555p-159, 0.0, 0.0, 0x1.25045a340f4f3p-711, 0.0, 0.0,
     0x1.515d5fa4aba5bp-179, 0x1.deb245c588d74p-5, 0x1.6c8f3ea66d00bp-469, 0.0, 0.0,
     0x1.27dddf10f9632p-823, 0.0, 0x1.0c29656d4aa07p-316, 0.0, 0.0, 0.0, 0.0,
     0x1.b11396e91efd5p-187, 0x1.1666cfeff764fp-208, 0.0, 0x1.9096d56ab8eadp-279, 0.0,
     0.0, 0.0, 0x1.2808bbd315e49p-800, 0x1.50ce4780fadd5p-491, 0x1.2fdc125c011ep-615,
     0x1.c39c75e9a8985p-969, 0x1.6da6fd0ee4893p-256, 0.0, 0.0, 0.0,
     0x1.cb5538ee7d756p-159, 0x1.b7e9202af61a1p-559, 0.0, 0x1.4ca5e183672ffp-469, 0.0,
     0.0, 0x1.b97c0110b8daep-555, 0x1.c2d32d6624161p-13, 0x1.45a2afec7e5dbp-264, 0.0,
     0.0, 0x1.350dadaa413fap-192, 0x1.77f83364f95a6p-566, 0.0, 0x1.2dae3846c3ce7p-290,
     0.0, 0x1.01a04b023ae9fp-112, 0.0, 0x1.d0646a1848689p-835, 0.0,
     0x1.975971e825f29p-759, 0x1.4c70205a3dd29p-176, 0.0, 0.0, 0.0,
     0x1.4227b370235e9p-422, 0.0, 0.0, 0.0, 0x1.6f958eea7d4f1p-483,
     0x1.d3d5ff27a22ap-861, 0x1.36c3286f128abp-844, 0.0, 0x1.884b511e85d1cp-262,
     0x1.60147310295bcp-457, 0x1.974995e1fd7edp-936, 0x1.97e0871f38f87p-925, 0.0,
     0x1.383d6559959e5p-93, 0x1.50541ccee2dc6p-514, 0.0, 0x1.733cda07700f3p-977, 0.0,
     0x1.3f42e16ad316fp-990, 0.0, 0.0, 0x1.7a4acdb3da71dp-858, 0x1.b416fa2358013p-791,
     0x1.7740cbadf3792p-114, 0x1.b157cf0acb553p-885, 0.0, 0.0, 0.0, 0.0,
     0x1.625611396a5bdp-542, 0x1.03eb1637ee20ap-766, 0.0, 0.0, 0x1.e822111c4062ep-57,
     0x1.fe714f0c5d0a4p-593, 0x1.46a71a1e08edap-766, 0x1.92d25211307f9p-507, 0.0,
     0x1.ff7c79c6ac776p-807, 0.0, 0.0, 0.0, 0.0, 0x1.5f1bc0ca30e8cp-92, 0.0, 0.0, 0.0,
     0x1.fecd692082419p-698, 0x1.c714d089e1548p-976, 0.0, 0x1.88ad140e589b5p-185, 0.0,
     0x1.2a9fc96dd8e01p-81, 0x1.d50c0ec1e1583p-810, 0.0, 0x1.15af7f38648ep-328,
     0x1.a3a43a2c913e4p-816, 0.0, 0x1.230933b4dce45p-463, 0.0, 0x1.f26c8a1413236p-968,
     0.0, 0x1.e8f3d777d9442p-468, 0x1.ceff4c9038d1p-669, 0x1.628363e20532fp-189,
     0x1.7e6a13c050e9fp-911, 0.0, 0x1.b64ce3351daa5p-6, 0.0, 0.0, 0.0,
     0x1.8fa4a5e28d27cp-187, 0.0, 0x1.93ad93ba5f167p-865, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b46869a75b9cp-141, 0.0, 0.0, 0x1.46ce30ace6836p-1015,
     0x1.c0d669aa24114p-603, 0.0, 0.0, 0x1.45c7294cb4856p-1011, 0.0,
     0x1.ef969028f6fb8p-668, 0.0, 0x1.1722b2518e63fp-532, 0x1.fb0d40c4c0899p-349,
     0x1.6cce684b1ee44p-724, 0.0, 0x1.cffa7c86bb8b6p-699, 0x1.3b43033a3e193p-620, 0.0,
     0x1.10893c5554abp-179, 0x1.7a04bd93ff40dp-4, 0x1.d44d3e9d753dap-704,
     0x1.572b152e5ab84p-876, 0.0, 0x1.59d10306e745ep-277, 0x1.34a13b727e3cep-822, 0.0,
     0x1.b8291674857e8p-71, 0x1.d54865a454f9dp-914, 0.0, 0.0, 0.0, 0.0,
     0x1.a573372d83f3ep-444, 0x1.0f912d2b16cb1p-711, 0x1.859a2c2c3dd53p-338,
     0x1.104e7e6f92466p-115, 0.0, 0.0, 0x1.722095ce5b9ddp-507, 0x1.670f24dc778ddp-714,
     0x1.b892635beddb1p-244, 0x1.ec4078236ad16p-532, 0.0, 0.0, 0.0, 0.0,
     0x1.79890e554b083p-143, 0x1.de556d122535dp-316, 0x1.88edfd1751b8dp-782, 0.0,
     0x1.bf35816883e75p-148, 0.0, 0x1.ca53b2b908693p-646, 0x1.1e63d1b5922dfp-270,
     0x1.fcf64b5d92cdcp-969, 0x1.93778abaa2e63p-85, 0x1.b0f7fd0c0e503p-786,
     0x1.59056b9acdcf8p-508, 0.0, 0.0, 0.0, 0.0, 0x1.e453698e1a25p-730, 0.0, 0.0, 0.0,
     0.0, 0x1.da4a29e769743p-203, 0x1.a3c4420822dd8p-851, 0x1.7d15f97afd141p-533, 0.0,
     0x1.fb2d6619cfef4p-209, 0x1.ef27924a6e9e7p-319, 0.0, 0x1.9774876eb5953p-191, 0.0,
     0x1.7b6262b935442p-816, 0x1.f61c860e19455p-612, 0x1.0fe17cccba705p-846,
     0x1.c705b6e2ecdcap-469, 0.0, 0x1.5a83d039a7df1p-744, 0x1.91b34dabe7bcbp-995, 0.0,
     0x1.76738bff331a9p-849, 0x1.03a5887983878p-319, 0x1.7e376c351df17p-920,
     0x1.4a18ff0f040c3p-658, 0x1.1e9ea17800f6ap-239, 0.0, 0x1.214e94ac72b8cp-227, 0.0,
     0x1.3fe0551f0c56cp-962, 0.0, 0.0, 0.0, 0.0, 0x1.8c0b0115bede1p-319,
     0x1.2d08c204162dbp-217, 0.0, 0x1.fea5871328b74p-523, 0.0, 0x1.f8469ccb72f9p-690,
     0.0, 0.0, 0x1.68c70bdecb87bp-72, 0x1.88895864a0753p-904, 0x1.5a6216c879b1fp-939,
     0x1.c565866031a08p-181, 0x1.456a6a9a40227p-290, 0.0, 0x1.f3f7db6fa3e83p-568, 0.0,
     0.0, 0x1.0c418046e03d4p-783, 0x1.0959931b1de81p-276, 0x1.7b831a82f6f65p-17,
     0x1.294c75699ec68p-991, 0.0, 0x1.057667d635d22p-824, 0x1.5217437ea887p-584,
     0x1.492db37461bbap-224, 0.0, 0x1.a2158f480c41fp-1018, 0.0,
     0x1.31fc635b51c48p-935, 0x1.e1e14f55087f6p-533, 0x1.ce319827b1a3dp-775, 0.0,
     0x1.932924ceb6408p-290, 0x1.da0495c76ae02p-284, 0x1.916b49d137b14p-783,
     0x1.9d71cc244513cp-41, 0.0, 0.0, 0x1.0911c7d47843fp-537, 0.0,
     0x1.5ac2fdf1fc631p-128, 0x1.bb978fca8af92p-541, 0.0, 0x1.c60e413e6a87ap-398,
     0x1.6081b56d53e0dp-375, 0.0, 0.0, 0x1.c6d9adc76f1ebp-648, 0x1.1016438a27066p-690,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c08e7187352c4p-245, 0x1.dd4ef9a43feb2p-1, 0.0,
     0.0, 0x1.12f131f0b524ap-102, 0.0, 0.0, 0.0, 0x1.35b594ca9c7bep-325,
     0x1.a1d785f2de0d2p-64, 0x1.1c451cf1cbab4p-427, 0x1.b897274d3b316p-822,
     0x1.83cffd0a4560cp-588, 0x1.bb349651df2dfp-100, 0x1.f46ba73fa85ap-522, 0.0,
     0x1.eb1b435abb67ep-539, 0.0, 0.0, 0.0, 0x1.8597dae0f5da4p-839, 0.0,
     0x1.94ab09bbb9c63p-541, 0.0, 0.0, 0x1.82e21bb85cc96p-322, 0.0, 0.0,
     0x1.f8477ca6a58fap-828, 0.0, 0.0, 0x1.f212fff3b59d5p-941, 0x1.10dd9d8e5b987p-49,
     0x1.8c07deddc5c7ap-178, 0x1.d7f0aeb762b81p-252, 0x1.43ce80c5460d8p-608,
     0x1.d405d9e6244cep-677, 0.0, 0x1.92d554996dcefp-583, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ff2fcab0c3da6p-66, 0.0, 0x1.cff58d9cbbe26p-127, 0.0, 0.0, 0.0,
     0x1.e41d553e7adb2p-35, 0.0, 0x1.bb2f4826682fbp-590, 0x1.54d6765706599p-949, 0.0,
     0x1.4f5da8f2cbc07p-703, 0x1.09e18f663ee73p-93, 0.0, 0x1.8d5b126b9a64ap-221,
     0x1.17816ece6dbdp-501, 0.0, 0x1.0fd8024aa8cc5p-416, 0.0, 0.0,
     0x1.638a01675e977p-674, 0x1.7e57563cabb9dp-766, 0x1.e0c213ce22445p-42,
     0x1.57e493bc7ca3fp-872, 0.0, 0.0, 0.0, 0x1.1a6fc7764e4d3p-1016,
     0x1.6e36504e4b4ebp-743, 0x1.cea65ed0a9a24p-18, 0.0, 0x1.b484e797895e4p-359, 0.0,
     0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_sinhd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sinhd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
