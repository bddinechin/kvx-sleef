/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand1_u10purecfma.c --function \
 *     Sleef_finz_atand1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.2539843151742p-154, 0x1.fb61cf512023ep-950, 0.0, 0.0,
     0x1.c07f0172c4c6p-85, 0.0, 0x1.1d365b67fb3c1p-823, 0x1.90f82989492b7p-595,
     0x1.f1a8a750aafe9p-381, 0x1.ce6cb8dbdaab6p-753, 0x1.eb08702cb093fp-109,
     0x1.ac1f11e0fe0fep-892, 0.0, 0.0, 0.0, 0x1.fb416e203ca5p-804,
     0x1.41fe36c675343p-97, 0x1.231d83f35a326p-247, 0x1.dba3e98cefb34p-147,
     0x1.234942dad2c07p-476, 0.0, 0x1.1ba3faab8a94ap-755, 0.0, 0.0,
     0x1.1e1ba2b379f5p-130, 0x1.da6453b8ed7fbp-1019, 0x1.92465d19ab3c1p-169,
     0x1.ebad1dbf91607p-1007, 0.0, 0.0, 0.0, 0x1.168daccb4d2efp-936, 0.0, 0.0,
     0x1.dd231cf068aaap-346, 0.0, 0.0, 0.0, 0x1.f2f6ceab8068ap-808, 0.0,
     0x1.8a10494a1d0b7p-879, 0.0, 0x1.fee66827f4708p-305, 0.0, 0x1.cc631aa9886aap-988,
     0x1.589b2ce7be65fp-310, 0x1.8ade9b491d4abp-783, 0.0, 0x1.ae62cf1dc5309p-201, 0.0,
     0x1.31acb6436d993p-756, 0.0, 0x1.dc9b2885bde9cp-311, 0x1.6e295b98f2d87p-342, 0.0,
     0x1.6fdc58a21a10ep-592, 0.0, 0.0, 0.0, 0x1.78e01c9e0958bp-357,
     0x1.8ec206e81ecf5p-945, 0.0, 0.0, 0.0, 0x1.1fa733f23502cp-978, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1b66942ce0817p-227, 0.0, 0x1.0c303ae33cc28p-555, 0.0, 0.0,
     0x1.8b864fd82f6bap-988, 0x1.f60abb94b3d09p-373, 0.0, 0.0, 0x1.96dda8404e19ap-528,
     0.0, 0.0, 0.0, 0x1.9ddbd68ea327dp-493, 0.0, 0x1.3d8450459cebap-690, 0.0, 0.0,
     0.0, 0.0, 0x1.21cbd7681b202p-81, 0x1.be57e0f6247ep-501, 0x1.4c6a9f9253678p-745,
     0x1.5a0044587d56cp-842, 0x1.9189a69052d67p-132, 0.0, 0.0, 0x1.c1926c6976757p-58,
     0.0, 0.0, 0x1.767514f1a62dbp-561, 0x1.4c839cc290f69p-372, 0.0,
     0x1.c15cef64ab5ebp-324, 0.0, 0x1.d02ce8bfd41e7p-851, 0x1.122c6608d0d24p-334,
     0x1.02761ead061f2p-142, 0.0, 0.0, 0.0, 0.0, 0x1.3520c99670673p-867,
     0x1.430cfc5f682c8p-979, 0.0, 0x1.60b39b0969f4dp-634, 0x1.7eaf0066db1bp-22, 0.0,
     0x1.7a322de7c60e8p-1001, 0x1.22e937901aeebp-809, 0x1.4407aa523add4p-200,
     0x1.565af9fc920ap-856, 0x1.924d7912c90c6p-981, 0x1.3f546fbf09533p-722, 0.0,
     0x1.2be443c0a6dcap-48, 0x1.9fe4d48f83b78p-805, 0x1.8c58d95522addp-967,
     0x1.81873d62fea97p-403, 0x1.b58b555674d9ep-342, 0x1.11c58de6de53cp-832,
     0x1.4f359dab2a954p-732, 0.0, 0x1.769c8e46812dfp-560, 0.0, 0x1.4eadc16c99bf1p-28,
     0x1.36164a5eece98p-299, 0x1.90d733ff74746p-104, 0x1.9643e5e2fade6p-368, 0.0,
     0x1.8dca0f8ae8d7dp-417, 0.0, 0.0, 0x1.14498ad0713dp-174, 0x1.ebe2319c27eaep-679,
     0.0, 0x1.8289928520da3p-581, 0.0, 0x1.25416a4182b31p-699, 0.0,
     0x1.29059938189bap-91, 0x1.783ab86b3365dp-178, 0x1.8b0586eda871cp-886,
     0x1.f2614022fdf11p-904, 0.0, 0.0, 0x1.63afdb210d1c2p-255, 0x1p0,
     0x1.c700c4cd99a8ep-459, 0x1.d2e90544b346bp-491, 0.0, 0.0, 0.0, 0.0,
     0x1.ef2438f4c622cp-194, 0x1.317ba4c5d5764p-515, 0x1.f326c81078146p-180, 0.0, 0.0,
     0x1.cda6591a95e71p-442, 0x1.c6ea60fc14a05p-766, 0.0, 0.0, 0.0, 0.0,
     0x1.ba94c55229edp-770, 0x1.b7dd417804d44p-736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f4b59c53fd986p-180, 0.0, 0x1.fa1b564fc0eefp-685, 0.0, 0.0,
     0x1.790d52a4fa137p-146, 0x1.294e2726cfe25p-59, 0x1.985c99b4d3bdbp-616, 0.0,
     0x1.7620c405799fap-492, 0x1.3daf99c34f7bfp-9, 0x1.a59e8a21592ebp-841,
     0x1.2d1bcd0dadbe5p-642, 0x1.962f1befa09c5p-497, 0.0, 0x1.939a51bab6e6dp-218, 0.0,
     0x1.ea457a1cf1043p-85, 0x1.67bfd38989b2cp-742, 0.0, 0.0, 0x1.54ba20b2577f4p-120,
     0.0, 0x1.461c510c1874ep-61, 0.0, 0x1.2067a5af8e182p-897, 0x1.3875097ff5119p-781,
     0x1.7082e9bad9337p-180, 0.0, 0x1.f02f41d3afd9fp-632, 0x1.a3b7bf350bc41p-777, 0.0,
     0x1.7456d0fb97c2ep-315, 0.0, 0x1.71e0a5089720ep-644, 0.0, 0x1.298b96581a0ccp-854,
     0x1.b5819cb1b4dc3p-893, 0x1.45ca3d3ea6aep-324, 0x1.bfb3a8b1ca9a2p-4,
     0x1.670b2a89b6364p-985, 0.0, 0x1.a583d7fb507e3p-750, 0.0, 0x1.bb88bfba6e274p-198,
     0.0, 0.0, 0x1.3c1b7f1fb1a75p-729, 0.0, 0.0, 0.0, 0x1.c83414f5c51e1p-160, 0.0,
     0.0, 0x1.03830803faa37p-597, 0.0, 0.0, 0.0, 0.0, 0x1.51d69ca3f0e57p-667,
     0x1.0d6bb6ed7cae7p-802, 0.0, 0.0, 0.0, 0.0, 0x1.b7cbf33cca948p-18, 0.0, 0.0, 0.0,
     0x1.138b98310fdffp-697, 0x1.d8380efc66b91p-218, 0.0, 0x1.ad5d3cb1a4d03p-12, 0.0,
     0x1.f95390c9fa7d2p-570, 0.0, 0x1.70b65e3f748c2p-686, 0x1.77c53ec79d537p-536, 0.0,
     0.0, 0.0, 0x1.71e3edd2d5f76p-761, 0.0, 0x1.235c64014a677p-407, 0.0, 0.0,
     0x1.7fbfa7c845f81p-364, 0.0, 0x1.bd328409cb5dbp-923, 0.0, 0.0,
     0x1.d4c9412cb1eedp-1019, 0x1.74aeea2583fb6p-1016, 0.0, 0x1.0dbc9e1d840d5p-1,
     0x1.7bdc2609c63edp-674, 0x1.022dda4996195p-634, 0.0, 0x1.d2b081333031bp-202, 0.0,
     0x1.36b397c11fd3bp-881, 0x1.354ff6dbaf4d7p-195, 0x1.e36ff3afd436fp-228,
     0x1.700cbf80ef6c8p-855, 0.0, 0x1.d0904cf7cacc4p-296, 0x1.e0c127caf28c7p-326,
     0x1.bfa8e754d48a9p-710, 0x1.b361a442e0527p-970, 0.0, 0x1.1d0d96a2c9214p-86, 0.0,
     0.0, 0.0, 0x1.efddf6d7ff4a2p-77, 0.0, 0x1.2e0307cea24d9p-240,
     0x1.02a83cb39a3a2p-604, 0.0, 0x1.4fbfcd1fbbc11p-814, 0.0, 0.0, 0.0,
     0x1.94b2fb634d8acp-792, 0x1.77df23c6c0b69p-635, 0.0, 0.0, 0x1.a224d800daa8ep-124,
     0.0, 0x1.f98f484660d24p-4, 0.0, 0x1.986cd54080b79p-936, 0.0,
     0x1.dd7dc1d95d9b9p-729, 0x1.aad5f16dc42c9p-304, 0x1.0f116e0c7cb29p-905, 0.0,
     0x1.0354222493b8ap-228, 0x1.ee9753fd755fdp-757, 0x1.510d6264d8caap-762,
     0x1.0cd3c750483a8p-1018, 0.0, 0x1.81d4dfc7bce6p-624, 0x1.5305c4a54b429p-302,
     0x1.a7284cdffe5a3p-853, 0.0, 0.0, 0x1.cac45385389d1p-427, 0x1.67afd860a9ea4p-240,
     0x1.d59a7cd211135p-169, 0x1.84be4204dbffp-433, 0.0, 0.0, 0x1.2eb355576183bp-870,
     0x1.e04889ac490c8p-323, 0.0, 0x1.4e704d4d71037p-288, 0x1.8630b70670ee9p-613,
     0x1.9c76ac5e87143p-270, 0.0, 0.0, 0x1.8171df7e4cb2cp-649, 0.0, 0.0,
     0x1.b5e065c5b472cp-892, 0x1.6a2a73bfee17ep-76, 0.0, 0x1.32167d85c123dp-258, 0.0,
     0x1.baa07730aa8dfp-981, 0.0, 0x1.6d54bb9a7116cp-600, 0x1.55350d55bc3f4p-91,
     0x1.2e26051f13b86p-792, 0.0, 0x1.f623cdf26bfc6p-126, 0.0, 0x1.107f161af09d8p-876,
     0.0, 0x1.9954305e7b36p-825, 0x1.b905119a6989fp-53, 0.0, 0x1.07bd862c9e859p-385,
     0x1.17516da873ea8p-869, 0x1.d315cd06f1a15p-209, 0x1.0672c78fe7c34p-789, 0.0,
     0x1.cee1459378898p-487, 0.0, 0x1.04af11be58095p-575, 0.0, 0x1.1b0e6af852b6bp-639,
     0x1.4b23a92d2a9e4p-44, 0x1.3fefec69fd3eap-164, 0x1.b3e1738f503a5p-529, 0.0,
     0x1.ee78a7b8d6654p-279, 0x1.bb10ea8973568p-754, 0.0, 0.0, 0x1.5246c1b3907a8p-55,
     0x1.58e805ca5c13p-175, 0.0, 0.0, 0x1.45bf5f6341985p-417, 0x1.da198b30aeaa6p-550,
     0x1.ba03afa139da7p-1016, 0.0, 0x1.13c05918b3806p-642, 0x1.0d50cfb2cb1e6p-488,
     0x1.aa337d15d414ap-309, 0.0, 0.0, 0.0, 0x1.32a36602bc625p-438,
     0x1.6f71b6ea5f241p-882, 0x1.bd9c968cf269ap-804, 0.0, 0x1.03519dbcf1c02p-75,
     0x1.abefddf4491bp-606, 0x1.ee0f3754f2c93p-773, 0x1.03ade76724797p-517, 0.0,
     0x1.7d95dd474204bp-765, 0.0, 0x1.db0e3647811a1p-334, 0x1.890f39c44e1ffp-293, 0.0,
     0x1.0269fbca1a64ep-600, 0.0, 0.0, 0x1.7d16e8112202fp-480, 0.0,
     0x1.7cf35ade47a2p-915, 0x1.0402674cd7ccp-692, 0x1.d895ce88ec3c5p-223,
     0x1.3464d7cd4cc4ep-183, 0.0, 0x1.e06cba8979d6cp-128, 0.0, 0.0,
     0x1.88fc8567ca7f4p-228, 0.0, 0x1.575b0cffde4e2p-967, 0x1.d3858b1a70b0cp-164, 0.0,
     0x1.0b878e3ad29aap-177, 0x1.b84ac7bc4095ap-344, 0.0, 0x1.8e2fe9e5fb09p-766, 0.0,
     0x1.dbe9b8ceab788p-340, 0x1.c4217ac6ee235p-536, 0x1.983bd7edb8944p-611, 0.0,
     0x1.27c91690d871ap-436, 0.0, 0x1.aebf947a45e41p-279, 0.0, 0.0,
     0x1.9c2282a2d36bap-272, 0.0, 0.0, 0x1.ce95049e48af3p-937, 0.0,
     0x1.ad3f151d27046p-596, 0.0, 0x1.b80f8d57a3f28p-230, 0.0, 0x1.791c52c236ffcp-502,
     0.0, 0.0, 0x1.39f3c317d65fep-261, 0.0, 0.0, 0.0, 0x1.18c5b1fa60ae6p-582, 0.0,
     0x1.a50e152353dcap-402, 0.0, 0x1.d6e33f2aaf15cp-91, 0x1.5e1b49c56f7f5p-603, 0.0,
     0.0, 0.0, 0x1.1d44fdf8428f2p-472, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.09b89be0b215ep-254, 0x1.e70e258da55d1p-722, 0.0, 0.0, 0x1.9556407c065d1p-566,
     0.0, 0.0, 0x1.ab281e5dc224ep-793, 0.0, 0.0, 0.0, 0x1.3094cdf904e1ap-778, 0.0,
     0x1.b9d9be8e1a1a7p-453, 0x1.6d73bb23d6ac8p-849, 0x1.f4d457b6b1384p-754, 0.0,
     0x1.77073ee6a85f8p-56, 0x1.fbfee61b0ffd9p-56, 0x1.4f18ec0064152p-601,
     0x1.93d35a9204e2p-641, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.502b359a120cep-550, 0.0,
     0x1.d2a8b8e1809c6p-108, 0x1.5075d2c284f5bp-148, 0.0, 0x1.be095554cc24dp-305,
     0x1.c98393a4bff6dp-52, 0.0, 0.0, 0x1.032edcd9b1ad3p-709, 0x1.14313cc5abe24p-709,
     0.0, 0x1.2309ef0aab168p-213, 0.0, 0.0, 0x1.04d93ff7e89d8p-621, 0.0,
     0x1.79d4d56fe7ab6p-208, 0.0, 0.0, 0.0, 0x1.37c216bd74e9bp-370,
     0x1.8bddcd6f33c6fp-829, 0x1.c0dbacebd5813p-116, 0x1.b1a7e211658b2p-608, 0.0,
     0x1.45f92b7ec9a4dp-344, 0x1.7da019bf1458fp-524, 0x1.b4d1aaca30a6dp-27, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.262ac8e67aad4p-1021, 0x1.21a7a8dd43312p-113, 0.0,
     0x1.a6019e51dcc62p-201, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f441b11a7e1f6p-717, 0x1.9f83c3979d918p-823, 0x1.10d109d680048p-227, 0.0,
     0x1.37f0564c289c7p-344, 0x1.bad4334dd3884p-691, 0.0, 0.0, 0x1.23b0f0a58777cp-922,
     0x1.04d6a3d3094a5p-35, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da244fb84d7c4p-140, 0x1.cd0253e4ef7e7p-485, 0.0, 0.0, 0x1.c07bbcaea6afdp-219,
     0.0, 0x1.14e645ccee41ep-575, 0.0, 0.0, 0x1.389af7e99e936p-202, 0.0,
     0x1.8b82fd6e3b743p-651, 0x1.9ba704fc5f5bep-464, 0.0, 0x1.d735c00f7606dp-287,
     0x1.cf6fb39285327p-781, 0x1.5d0dd0d9d5aep-437, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9a419285f32cp-786, 0.0, 0.0, 0.0, 0.0, 0x1.93bd35fa0a81dp-431, 0.0, 0.0,
     0x1.f8f48a2046b14p-708, 0x1.15bc2acf01c54p-649, 0.0, 0x1.2018e611df06p-1000,
     0x1.b9e80a38d03bp-222, 0.0, 0x1.8189ba06798c9p-623, 0.0, 0.0, 0.0, 0.0,
     0x1.0ce52ee8a377ep-77, 0x1.9282ec484ef24p-344, 0x1.9751855e3886ep-697, 0.0,
     0x1.94965255e4399p-719, 0x1.0cf4b385270b6p-43, 0.0, 0.0, 0.0,
     0x1.001f8b9d7f8a8p-522, 0.0, 0.0, 0x1.ec4025e7f1b15p-977, 0.0, 0.0,
     0x1.b993182ff541bp-681, 0.0, 0x1.931e794722165p-384, 0.0, 0.0,
     0x1.e646a92e075f9p-777, 0x1.017045387584dp-87, 0.0, 0x1.1b25747546a0dp-945, 0.0,
     0x1.a8dbe04cb2a9p-652, 0.0, 0x1.3cc04cb44ed1fp-464, 0x1.b9ded90eb704cp-996, 0.0,
     0x1.6caeb4ea14c17p-727, 0.0, 0.0, 0x1.883cc82783e38p-1, 0.0,
     0x1.608530ec0dd11p-471, 0x1.caf54d4b3dc0bp-433, 0x1.7b9cc6de43dbp-443, 0.0, 0.0,
     0.0, 0x1.3c5cc011a0fa6p-918, 0.0, 0x1.a1b49a212553fp-22, 0x1.4d68df19a5045p-742,
     0x1.3acd5ed0ad9cp-514, 0.0, 0.0, 0x1.9f627a8c10db4p-902, 0.0,
     0x1.b0af7fed3760ep-110, 0.0, 0x1.118ac698a91f6p-1019, 0x1.5b1dbd4056626p-907,
     0x1.3c88f268d6fcdp-410, 0x1.f9c401d72dc4fp-352, 0x1.7da62ba97b8e5p-821, 0.0,
     0x1.90a41b37d3789p-707, 0.0, 0.0, 0x1.16379aacdb5dep-470, 0x1.47e2f305bb6e8p-103,
     0.0, 0x1.fb5dfdedaec3ap-760, 0x1.7292cc2e9456bp-1004, 0.0, 0.0, 0.0,
     0x1.db4162f6304fcp-598, 0x1.438552bee356ep-230, 0x1.11d77cb1e805dp-799,
     0x1.25bde9ff1e359p-503, 0.0, 0x1.5dcdca28ca854p-27, 0.0, 0.0,
     0x1.1bc597f1d71a9p-722, 0x1.09e8e11aef305p-862, 0x1.b423cc79791f9p-97,
     0x1.bf5d89fef84fp-430, 0.0, 0x1.9ccc2852300dfp-917, 0x1.11c91f52708aap-951, 0.0,
     0x1.6066323f13754p-346, 0x1.8557244bf35a1p-376, 0.0, 0x1.c6853b331203ap-1022,
     0.0, 0.0, 0x1.51e40c9b15facp-391, 0x1.49a5b6a3fb961p-227, 0.0, 0.0, 0.0, 0.0,
     0x1.156a6bdda4edep-357, 0x1.f836a8b59d74fp-890, 0.0, 0x1.3880167e7a271p-154, 0.0,
     0.0, 0.0, 0x1.f9dcb57552b0cp-550, 0x1.be6f2d1e3ffeap-272, 0x1.bd6169f5c3f18p-700,
     0.0, 0x1.ac3e71debd3cp-284, 0x1.7c3157c28f7ebp-600, 0x1.0d319956ce95dp-1001,
     0x1.f7ff2b22f6b24p-994, 0.0, 0x1.9b9f04884e3cep-901, 0.0, 0.0, 0.0,
     0x1.676c4248f400bp-584, 0x1.12053d42c79c9p-169, 0.0, 0.0, 0.0,
     0x1.eebaceea95e3ep-161, 0.0, 0x1.60e71df6e2811p-500, 0.0, 0.0, 0.0,
     0x1.8d98226f277e5p-94, 0.0, 0x1.cf4d2b9161c06p-491, 0x1.fa4125dca7f15p-221,
     0x1.f2f9196858496p-627, 0.0, 0x1.8f54bd61db918p-37, 0.0, 0x1.2b656b4239421p-990,
     0x1.86a8737902bd3p-160, 0.0, 0x1.b73f39872b58fp-111, 0.0, 0.0,
     0x1.d3b0604efcdcfp-52, 0x1.019e7fa2e8744p-180, 0x1.103c97bc705d4p-972, 0.0, 0.0,
     0.0, 0x1.b919563d326eep-188, 0x1.feac119014e3bp-314, 0x1.bb46992c0379fp-856, 0.0,
     0.0, 0.0, 0x1.9021a64465c51p-205, 0.0, 0x1.895a65aab07e3p-585,
     0x1.b6c9d586e2da6p-693, 0.0, 0x1.522f2e9a789b1p-209, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.adc0bee5bcfcfp-775, 0.0, 0x1.9ed9c1f6fea16p-75, 0x1.a57e7c1659ad7p-991, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da8a79d2e1dd2p-599, 0.0, 0x1.ea39cdae73989p-401,
     0.0, 0x1.ba6d18513d682p-332, 0x1.69aa671ab32edp-598, 0x1.e51fcbd8880aap-626, 0.0,
     0.0, 0x1.27f227ee4376p-982, 0x1.1c00170a947e6p-97, 0x1.58e389e2288afp-119,
     0x1.44de038da7145p-868, 0.0, 0.0, 0.0, 0x1.931a2090f0303p-754,
     0x1.d72901e557174p-363, 0x1.4a271d1b3473fp-621, 0.0, 0.0, 0.0,
     0x1.4f5aa0e7327eap-207, 0.0, 0x1.60e24772c056fp-803, 0x1.1780424e9180dp-575,
     0x1.b6414b910bc0ap-950, 0x1.fe1ee9ecaa1c6p-12, 0.0, 0.0, 0.0,
     0x1.c5dae16486d31p-131, 0.0, 0x1.c6cabdb75f387p-980, 0x1.8ec030b56c2a7p-105, 0.0,
     0x1.e161ef249c3c8p-53, 0.0, 0.0, 0x1.6df43eae5ff0dp-843, 0x1.8310d82470a48p-727,
     0.0, 0x1.a2de9e8a4bdf6p-86, 0x1.a1a08e1de8e59p-587, 0.0, 0.0, 0.0,
     0x1.eb5ff1795068p-976, 0.0, 0x1.b8550ea63020fp-999, 0.0, 0x1.cc940cc51529p-406,
     0.0, 0.0, 0.0, 0x1.76524a1780bb7p-907, 0.0, 0x1.e9a0907f7fd0bp-439,
     0x1.c1b9d2863cdbdp-877, 0.0, 0x1.a73f527d4ec62p-471, 0x1.5166445734e75p-453, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db3fd0ef9d19bp-406, 0x1.741b3e3969bdap-279,
     0.0, 0.0, 0x1.095c901992c3fp-523, 0x1.7fa3850c816bcp-455, 0x1.56a9f335eba7dp-676,
     0x1.905cfd8081131p-969, 0x1.bd02255356f33p-987, 0x1.b0be8dda48676p-309,
     0x1.c519d8ff3dc0ep-942, 0x1.2f16edc1e6c1bp-448, 0.0, 0.0, 0.0,
     0x1.69574111808fap-417, 0.0, 0.0, 0.0, 0x1.21d8bdecbb6ffp-139, 0.0, 0.0, 0.0,
     0.0, 0x1.e3e99eb211275p-740, 0x1.313f088e2ce97p-31, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4303aef68a44bp-192, 0.0, 0x1.01673a05a4829p-543, 0.0, 0.0, 0.0,
     0x1.0ec517fdba3f9p-596, 0x1.4e8816d6d0f5dp-975, 0.0, 0.0, 0x1.a39a1d39f80ap-342,
     0x1.e235922f2ce6dp-441, 0.0, 0.0, 0x1.3a02236a7881ep-71, 0.0, 0.0, 0.0,
     0x1.c62458eadb2b7p-775, 0.0, 0x1.d42d5beb9134fp-439, 0.0, 0x1.2e0160b82b916p-386,
     0.0, 0.0, 0.0, 0x1.40cf7c302485ap-674, 0x1.e4899e637cafcp-231, 0.0, 0.0,
     0x1.1a046d5f01802p-622, 0x1.d874eb65d7d17p-149, 0.0, 0x1.2df8f3a53dff1p-257,
     0x1.1f9c330c139e3p-600, 0.0, 0x1.9ba8ffffa73ep-923, 0x1.478564b60a09ep-396, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.454b2a10e9ba6p-495,
     0x1.f4be2d9a06cfap-714, 0x1.8e1c2ca24a8d4p-1008, 0x1.d81e154de49dfp-275, 0.0,
     0.0, 0.0, 0x1.3a85727e1023ap-752, 0.0, 0.0, 0.0, 0x1.0ee9e22899224p-149,
     0x1.14e4e749383c3p-50, 0.0, 0x1.9685a77b52663p-425, 0x1.865522a8cd502p-230,
     0x1.d7097c4bc7c5ap-1013, 0.0, 0.0, 0.0, 0x1.06c4a64904aa3p-759,
     0x1.63657220eb60dp-244, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.497c42899cca2p-542,
     0.0, 0.0, 0.0, 0x1.fe540ff1f2973p-989, 0.0, 0.0, 0.0, 0.0, 0x1.83e575dc9779p-354,
     0x1.dc8bd07ab0997p-565, 0.0, 0.0, 0.0, 0x1.db364608d64ep-813,
     0x1.0a26d7a58df15p-479, 0.0, 0x1.512b595547bd2p-995, 0x1.08f20144fe26ep-45, 0.0,
     0.0, 0.0, 0.0, 0x1.41eacded44bfep-900, 0.0, 0x1.e230f450c34f4p-21,
     0x1.ae59a01cbcd4ep-589, 0.0, 0x1.033ee1f7fefabp-182, 0.0, 0.0,
     0x1.f4d4ae0ed1671p-953, 0.0, 0.0, 0x1.7adc4fe56a1cp-704, 0.0,
     0x1.7923223cc19b7p-545, 0.0, 0x1.875c3ccde9eb4p-684, 0.0
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
            tmp1 = Sleef_finz_atand1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atand1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atand1_u10purecfma bench acc %la\n", global_bench_acc);
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
