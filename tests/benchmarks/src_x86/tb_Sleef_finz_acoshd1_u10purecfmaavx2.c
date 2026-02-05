/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshd1_u10purecfma.c --function \
 *     Sleef_finz_acoshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.b323f4d842e22p-863, 0x1.e116ffe75c74ap-84, 0x1.5929b0ee4f61fp-735, 0.0,
     0x1.c97313d2963edp-775, 0.0, 0.0, 0.0, 0x1.444aea5b01287p-44, 0.0,
     0x1.4c17be0b9740ap-520, 0x1.48b60697bed58p-239, 0.0, 0x1.01e62d6b36d2ap-317,
     0x1.85e6705a243e8p-930, 0.0, 0x1.1d1627045d5ddp-522, 0x1.ce59cb02c304ep-517,
     0x1.b31475674303cp-168, 0.0, 0.0, 0.0, 0x1.96eee0da480f7p-721,
     0x1.209048903c025p-519, 0x1.cc5ce1476f2d6p-576, 0.0, 0.0, 0.0, 0.0,
     0x1.286d11dc0f77bp-249, 0.0, 0x1.90fb451b715a1p-459, 0.0, 0x1.83af9884a7ae4p-664,
     0x1.c1f20cce7af8p-591, 0.0, 0x1.2a0902c83e6b4p-208, 0x1.a4a702a27adebp-788, 0.0,
     0x1.1524d6ef694d1p-351, 0.0, 0x1.8c8c6c25441dep-305, 0.0, 0.0, 0.0,
     0x1.9bf117d26e12ep-800, 0x1.01ca153d8f4a8p-125, 0x1.817334d150c1ep-599, 0.0,
     0x1.345d71169b1bep-569, 0x1.332e5de8f4587p-917, 0x1.a0398072552fcp-232,
     0x1.2fd7968b0e22fp-642, 0x1.a5b8b16a687bap-492, 0.0, 0x1.12db743d1a39fp-576, 0.0,
     0x1.eceba4551e638p-733, 0x1.86ab1984e9c4ep-837, 0x1.4e0deda371cf9p-887, 0.0,
     0x1.8405072775917p-244, 0.0, 0x1.a7192cfde8507p-617, 0.0, 0x1.97dc6f1c85189p-613,
     0.0, 0x1.ac2e1256e9606p-393, 0x1.85551bfe55da9p-580, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fadf948bc774ap-568, 0x1.996405d905b37p-514,
     0x1.e1b123c79fdb5p-1009, 0x1.4f6666f3ac217p-917, 0x1.c59540cf1fd7p-78, 0.0, 0.0,
     0x1.020086ef34349p-817, 0x1.125de994b9b24p-252, 0.0, 0x1.72df47b439671p-474, 0.0,
     0x1.6045782a8eb6dp-645, 0.0, 0x1.84cc58c3505d3p-270, 0x1.41f77a526263dp-644, 0.0,
     0.0, 0x1.0ad42f4ef02edp-816, 0x1.57fd30e6e30d2p-960, 0x1.e63c093600bdep-420,
     0x1.589e33cc4dd4cp-88, 0x1.3a3a17f639c0ap-385, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1fb1ad982c08p-945, 0x1.bc441a6925c8cp-405, 0.0, 0x1.6a404d98e99ecp-157, 0.0,
     0x1.4293062e132p-396, 0.0, 0x1.5351f9b593a41p-206, 0x1.f4deb96d8ff9dp-460,
     0x1.416b2c9b322c3p-679, 0x1.a5f5b3f6a83b4p-991, 0.0, 0.0, 0.0, 0.0,
     0x1.8228eb8f06c9ep-684, 0x1.5ea7e1ca0f525p-774, 0x1.c37067dc8ea79p-390,
     0x1.6ccb3f57a8c17p-523, 0x1.4a54fd88242e9p-471, 0.0, 0.0, 0x1.fb195d571ce12p-933,
     0.0, 0.0, 0.0, 0x1.0c1458a3fdfc8p-346, 0.0, 0.0, 0.0, 0x1.8d031f0ebfadp-3, 0.0,
     0x1.812f454ebf802p-891, 0x1.d24ee3d40a77dp-519, 0x1.74f030f8d38p-404, 0.0,
     0x1.d4bec11fceefbp-270, 0.0, 0x1.24d81207e95dp-677, 0x1.07d96ae660708p-765, 0.0,
     0.0, 0x1.a4b48e63a03bp-273, 0x1.831c291cc21bfp-583, 0x1.898104a72f768p-259, 0.0,
     0.0, 0x1.eab7ae27742b8p-341, 0x1.fe4da853e3263p-835, 0x1.429232e4ee114p-954, 0.0,
     0x1.9add5e9ac1335p-290, 0.0, 0.0, 0.0, 0.0, 0x1.65168d8d28c6p-594,
     0x1.36c8d1d50f677p-288, 0.0, 0x1.7576441527585p-731, 0x1.3ed036e216e84p-506,
     0x1.1ef6c8ac8b631p-577, 0x1.cfe75f6409d34p-977, 0.0, 0.0, 0.0, 0.0,
     0x1.b9764da3b6424p-724, 0x1.180d04c3c6c3p-139, 0x1.68902c1292097p-266,
     0x1.7997b68780f72p-482, 0.0, 0x1.19468f3c0f56fp-430, 0x1.eedc475b907d5p-414, 0.0,
     0x1.3c25f680d091fp-215, 0x1.bd7554e8e3697p-1007, 0x1.88d485e16b12ep-509,
     0x1.8c28d04b8d6c4p-364, 0.0, 0x1.361c2f1476b6fp-824, 0x1.df60864cea449p-772,
     0x1.e73afcac87979p-495, 0.0, 0x1.440cd120b1c15p-69, 0x1.069f6317f57f3p-995, 0.0,
     0.0, 0x1.9c7d429e79101p-220, 0.0, 0x1.c39ac202ce3d2p-239, 0.0, 0.0,
     0x1.0be51e903e16bp-803, 0.0, 0x1.a6d5bb7e51867p-116, 0.0, 0x1.ca6dc17f727ffp-946,
     0x1.6e5b7fb1c9453p-332, 0x1.17125bd7c5316p-607, 0x1.526969b010435p-823,
     0x1.710b958252d88p-360, 0.0, 0x1.2fef9e9d0cc5p-699, 0.0, 0.0,
     0x1.4c760eef7a015p-426, 0x1.52a558fc9dcafp-961, 0.0, 0.0, 0x1.e21ab0d575024p-912,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de1572fa39f82p-207, 0x1.41d6d80b0e71ap-303, 0.0,
     0.0, 0.0, 0x1.a74f36b0b9b8p-471, 0x1.3f742b3ce05edp-584, 0x1.cc92f211e1ed5p-576,
     0.0, 0.0, 0.0, 0x1.1b6dc9f6a4565p-701, 0x1.64e993f19438p-912,
     0x1.ade700034c5dbp-112, 0.0, 0.0, 0x1.84ce6b72735b1p-574, 0.0,
     0x1.43c30b0d6994dp-965, 0x1.2297a19475783p-392, 0.0, 0.0, 0.0,
     0x1.fd38159f8b5edp-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5abe60eff8898p-598,
     0x1.aeaf021aea22p-569, 0x1.0a79f186eafa5p-57, 0.0, 0.0, 0.0,
     0x1.eb87165f27e9fp-995, 0x1.cc47c79d0bf81p-351, 0x1.8cf20a1659d5fp-272, 0.0,
     0x1.a2b6e6c85052bp-790, 0x1.e25c621769985p-69, 0x1.9273f9649dfe4p-274, 0.0,
     0x1.78bf9cd55518bp-398, 0x1.6342cf44298c5p-176, 0.0, 0.0, 0.0,
     0x1.3a4cc7158a53ep-473, 0x1.339af653e73d2p-859, 0x1.4c38f68f57c78p-706,
     0x1.0168a058fefep-329, 0.0, 0.0, 0.0, 0x1.b1855da5178cap-491, 0.0, 0.0,
     0x1.de3da37ab503dp-635, 0.0, 0x1.5ab4c4fde087dp-443, 0x1.7fa8904dd2f51p-126, 0.0,
     0x1.cda8c83464992p-995, 0.0, 0x1.eb139996b8df1p-204, 0x1.cc688abbdf4c3p-702, 0.0,
     0x1.34b1c2e0e7e4dp-89, 0.0, 0.0, 0x1.8d30a231e66b3p-638, 0x1.30a60ce61326p-926,
     0x1.50e0079f0358ep-371, 0.0, 0.0, 0x1.0b3a3dba446f6p-1022,
     0x1.e73d770147f0bp-937, 0x1.adaa21d7e6ecap-175, 0x1.1c43a2d8e3d04p-304,
     0x1.310ba65636f63p-481, 0x1.94168fd623349p-141, 0.0, 0.0, 0.0,
     0x1.5be8beb806b86p-711, 0x1.444dc29669559p-666, 0x1.0be22a497220ep-712,
     0x1.e480295a2438fp-885, 0x1.7e538625ba805p-967, 0x1.d50f52d7a0481p-898,
     0x1.34cb1c5ee9a44p-179, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb7a52151fb3dp-665,
     0x1.fdc55735eaa1bp-715, 0x1.f35da79508b26p-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.794e526697fbcp-849, 0.0, 0.0, 0x1.d1825a6e80823p-528, 0.0,
     0x1.a4a869adf334dp-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.172bee584d5afp-95,
     0x1.b28217d5752b4p-388, 0.0, 0x1.7460250c5f7d2p-528, 0.0, 0x1.4001a4ccb319cp-868,
     0.0, 0x1.9f79f4248b663p-678, 0.0, 0.0, 0.0, 0x1.2f6c0201727bfp-135, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43a95ff028e2fp-435, 0.0, 0.0, 0.0, 0.0,
     0x1.5fbe54544c811p-461, 0x1.693bdee1ec16ep-603, 0.0, 0.0, 0x1.29bdb872252ccp-399,
     0.0, 0x1.de85022d716cp-684, 0.0, 0x1.9e4608d1f47f7p-982, 0.0, 0.0,
     0x1.d2e4bd15d28e4p-983, 0.0, 0x1.3132005507f7ap-195, 0.0, 0x1.4035c6cd84699p-620,
     0x1.7d3e3dd47546cp-94, 0.0, 0x1.07e633e11c60bp-262, 0.0, 0x1.d11893a1231b2p-233,
     0.0, 0x1.e3e5f64b0b343p-814, 0x1.6de03f3c19895p-783, 0.0, 0.0,
     0x1.54896ebf07e9cp-605, 0x1.7ee890ac66148p-406, 0x1.739489578695cp-733,
     0x1.8850808ccd135p-214, 0.0, 0x1.bb16e3fc79c4bp-197, 0x1.c28590620ce32p-955,
     0x1.673faf1813361p-585, 0.0, 0.0, 0x1.0b949ff9fc459p-515, 0.0, 0.0, 0.0,
     0x1.28e06da1e448dp-28, 0x1.9133452d2737dp-436, 0x1.ea16c52b20b1cp-22, 0.0,
     0x1.605f847cacdacp-539, 0.0, 0.0, 0.0, 0x1.83313f2e94afdp-449,
     0x1.27ed2e8f9d85p-478, 0x1.1e0315da39649p-651, 0x1.a6bfabfe44d5cp-814, 0.0,
     0x1.3179fbad87e31p-6, 0x1.16af7cc8694dp-806, 0x1p0, 0.0, 0.0,
     0x1.b1e4a47a834cp-425, 0.0, 0x1.dba3fee4b57adp-403, 0x1.fab37c670d296p-870,
     0x1.dc39511313a26p-574, 0x1.9bed844526cefp-9, 0.0, 0.0, 0x1.3a0414fb201b1p-740,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.420795c5ae009p-237, 0x1.4291b7618f617p-741, 0.0,
     0.0, 0.0, 0x1.ee424bfe85cap-991, 0x1.3a3688dc1b238p-410, 0.0,
     0x1.6a73189dd0c39p-100, 0x1.06431dd1ad61ap-840, 0.0, 0x1.f6d6127a0ea6dp-920, 0.0,
     0.0, 0x1.c6fe7e74bd90fp-132, 0.0, 0.0, 0x1.e2dd5f2a8af9fp-261,
     0x1.f65f7da3a4536p-33, 0x1.95574b9fa6ef6p-293, 0x1.bb8744bb4482cp-772,
     0x1.41598795a86cbp-989, 0.0, 0.0, 0.0, 0x1.7afba63a4f0e3p-623, 0.0,
     0x1.0276700c2aa0ep-636, 0.0, 0.0, 0x1.1ac65933fc624p-164, 0x1.3c390ba31c25fp-188,
     0.0, 0.0, 0x1.4d66bda7f3fbap-196, 0.0, 0x1.5ddbb8a10a2a8p-33, 0.0,
     0x1.13e217461399p-789, 0x1.bbf0ce9256fcdp-971, 0.0, 0.0, 0x1.5efb742eda14fp-139,
     0.0, 0.0, 0x1.bffaf8f8387dap-586, 0x1.671d10cebbcccp-929, 0.0,
     0x1.3b76c5a41ed2dp-749, 0.0, 0.0, 0x1.29f51466c83d4p-55, 0.0, 0.0, 0.0, 0.0,
     0x1.64e5b5962630bp-371, 0.0, 0x1.2aff4d5e5055p-889, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8724ad6e8a312p-404, 0.0, 0x1.f028f7f55547fp-398, 0.0, 0x1.dedce482551e7p-614,
     0x1.821afeeac9b7dp-202, 0.0, 0x1.6fe4b50134a46p-450, 0.0, 0.0,
     0x1.4dc63bbb9f5dep-498, 0.0, 0.0, 0x1.d15000b5f9e37p-394, 0.0,
     0x1.974e17cb3b99dp-681, 0x1.915d0efd6acp-567, 0.0, 0x1.6f792e8b48a91p-722,
     0x1.da5487c94cb17p-105, 0x1.76125f4db441dp-133, 0.0, 0x1.3d9dbbd872e9ap-456, 0.0,
     0x1.c2a56768fbe81p-142, 0.0, 0x1.5f24705b582a3p-910, 0.0, 0x1.c7f7b94c5c0d6p-563,
     0x1.35f62caa5ef44p-87, 0x1.924801566ff79p-216, 0x1.11462c4e93f73p-384, 0.0, 0.0,
     0x1.51933d68af77ap-170, 0.0, 0x1.2c056eda1b45p-830, 0.0, 0.0,
     0x1.4e1aaeaeef58ap-913, 0.0, 0.0, 0x1.8f5e72e28dc66p-171, 0x1.2af1368af090ep-508,
     0x1.d4a76ca407b8p-936, 0x1.f79e5a9264b2ap-419, 0.0, 0x1.c646819e84c7ep-748,
     0x1.092b11cd00d62p-532, 0x1.5bcf453d5135ep-359, 0.0, 0x1.d7bb65c438f5cp-872, 0.0,
     0.0, 0.0, 0x1.7c9811f3d6706p-30, 0.0, 0.0, 0x1.00c423ac9c24p-678, 0.0,
     0x1.adbc142f01aecp-522, 0.0, 0x1.733544160b7ddp-230, 0.0, 0x1.354cedd9d086cp-696,
     0.0, 0x1.aed9251cfdd56p-687, 0x1.845aa6bcb51d6p-781, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.30cd714f359e2p-632, 0x1.d65a36e66fc5bp-85, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aff0d902cef23p-406, 0x1.00fe66c38b6e8p-531, 0x1.d83bdc4b68172p-43, 0.0,
     0x1.9818465db15e5p-840, 0.0, 0x1.1bc685e94b099p-537, 0.0, 0x1.ab6289c5b12bfp-472,
     0.0, 0.0, 0.0, 0x1.29a6dc53e7152p-923, 0.0, 0.0, 0.0, 0.0,
     0x1.dfaab3686521cp-803, 0x1.aa3447fbb9b4ep-773, 0x1.e3f4e8d0e9232p-936,
     0x1.db647ee6616a4p-211, 0.0, 0x1.46fd2078f60e8p-725, 0.0, 0x1.526fe6ccdf375p-498,
     0.0, 0.0, 0.0, 0x1.a17b9f775e0a4p-992, 0x1.e6fd010527e89p-975,
     0x1.ab2ac8ddc47d9p-967, 0x1.ed8afb5d925bbp-954, 0x1.afdfa094f1297p-352, 0.0,
     0x1.9d661d7f364e7p-279, 0x1.85e83dcddbd17p-342, 0.0, 0x1.9b243d79bf05ep-328, 0.0,
     0x1.e50550b839972p-712, 0x1.ba5b7e06a03b1p-9, 0x1.69a51efc5ce1p-434,
     0x1.11bc35e33eb39p-24, 0.0, 0x1.49b6f7dec9b09p-711, 0x1.816f97917df5cp-387,
     0x1.f36e6e6172b7p-755, 0.0, 0x1.2c80e4a6efe5dp-869, 0.0, 0.0,
     0x1.69f23af0a01f5p-349, 0x1.9239915fe49acp-405, 0x1.6e4d37867545ep-634,
     0x1.a0b83f96fb67p-226, 0x1.a71d190ea2483p-299, 0x1.8551023f59378p-351, 0.0, 0.0,
     0x1.559efff8db155p-11, 0x1.7d95edc0a7857p-877, 0x1.04f8f3bcd9903p-881, 0.0,
     0x1.b12e5967c531fp-695, 0.0, 0x1.4818367f4f65fp-393, 0x1.9418794a0f13dp-871, 0.0,
     0x1.6fc23f3df494dp-759, 0x1.87b5f365b7cd5p-782, 0.0, 0.0, 0.0,
     0x1.420c3627b283ap-769, 0.0, 0x1.b5d84df40d587p-307, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.eb26ab853f201p-487, 0.0, 0x1.73a38a976b8d8p-248, 0x1.39d814d3e981cp-672,
     0x1.7859239b74129p-616, 0.0, 0x1.edded91352b0cp-749, 0.0, 0.0,
     0x1.434301800e88ap-506, 0x1.8774a3dbdb796p-760, 0.0, 0.0, 0x1.c6dd8e04efa1bp-943,
     0x1.7560d377bb03ap-323, 0.0, 0x1.b92983b5c3246p-29, 0.0, 0.0, 0.0, 0.0,
     0x1.c276111f7eca7p-402, 0.0, 0.0, 0.0, 0x1.df6f8766d3e61p-774,
     0x1.89edfa8844551p-357, 0.0, 0.0, 0x1.3f711772d73abp-219, 0x1.213934e7e6d8ep-799,
     0x1.4041f551511fdp-805, 0.0, 0.0, 0.0, 0x1.f82e9076cc2d1p-813, 0.0, 0.0,
     0x1.07619e4ad1939p-118, 0.0, 0x1.554c985c6d0fep-855, 0.0, 0.0, 0.0,
     0x1.ce353365b2f8bp-652, 0x1.63664d934cd53p-132, 0x1.91c67e32e429fp-899, 0.0, 0.0,
     0x1.2b9db328e4844p-331, 0x1.403f9833e84d4p-918, 0x1.e8f44be267596p-805, 0.0, 0.0,
     0.0, 0x1.c81b6c6089d39p-726, 0x1.3ae73a91b1a6bp-794, 0x1.c95f9fcc5ffefp-483,
     0x1.67276a3d2a6ccp-368, 0.0, 0x1.74b773af72e55p-303, 0x1.c4a50181b25c2p-729,
     0x1.c45decb52406ep-418, 0x1.639b819dfd34ep-467, 0x1.576617cb36c1fp-543,
     0x1.d6d2835f3848ap-639, 0.0, 0x1.b3a8c465763c2p-121, 0.0, 0.0,
     0x1.8c241ddd129e7p-398, 0x1.f912279977fa9p-156, 0.0, 0.0, 0x1.608b56f2200e1p-794,
     0x1.745e6bdb02e0dp-163, 0.0, 0.0, 0x1.79870816210dcp-824, 0x1.5ea67bc515c9dp-805,
     0x1.21edac5c4381cp-38, 0.0, 0x1.f2bfc97bcd18ap-86, 0x1.100df9f4a592ap-639,
     0x1.8c576d5ab37a1p-669, 0.0, 0.0, 0x1.658c09bb892f1p-483, 0.0, 0.0,
     0x1.674beeb026ca7p-364, 0.0, 0.0, 0.0, 0x1.cf0a706e6918fp-375, 0.0,
     0x1.e48c9a9161ecbp-742, 0.0, 0x1.83c1350d0089ep-533, 0.0, 0.0, 0.0,
     0x1.facbcee12b155p-522, 0.0, 0.0, 0.0, 0x1.9a9b60c7c2893p-379, 0.0,
     0x1.bb531cbb8a3c7p-223, 0.0, 0.0, 0.0, 0.0, 0x1.95066c70e1024p-818, 0.0,
     0x1.96a299fe05528p-291, 0x1.02a479ae30075p-189, 0x1.5746df4211d0dp-269,
     0x1.f7482136b45b8p-66, 0x1.5edd25616ccdbp-268, 0x1.41452b890590ap-784,
     0x1.f9cc477a807a5p-501, 0.0, 0.0, 0.0, 0x1.6db41d1cb5d31p-684, 0.0,
     0x1.40f963420c6e3p-579, 0.0, 0.0, 0x1.0d1929d35de4bp-596, 0x1.fbd477d65bddap-561,
     0.0, 0x1.54eee202010dcp-348, 0x1.9cc8bcdb86fbdp-949, 0x1.b3c711fad8092p-60,
     0x1.ff2929d01ed6p-639, 0.0, 0x1.2c4ee418ff25cp-939, 0x1.54202edd9dbd3p-984, 0.0,
     0x1.7a3bdb8ee79e8p-916, 0.0, 0x1.f9002701acd52p-74, 0x1.2168db2f14279p-377,
     0x1.44fed6b7c45p-826, 0.0, 0.0, 0.0, 0x1.fcb77fd368c5ep-454, 0.0, 0.0,
     0x1.9e4286531c4d9p-88, 0.0, 0.0, 0x1.401f07db0269dp-465, 0.0,
     0x1.1bdfe1876f3p-643, 0x1.241a6afd9c223p-1014, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4df39d439334fp-187, 0x1.d431d6422a5ap-388, 0.0, 0x1.9e46a5e922a9ep-644,
     0x1.3e80b995f5882p-831, 0.0, 0x1.90a677353f509p-180, 0x1.289b4d097ac47p-735, 0.0,
     0x1.c3197f480be58p-880, 0.0, 0.0, 0x1.d5fa3d94a6c2ep-63, 0x1.70c55a81372c2p-723,
     0.0, 0x1.6f74302a61829p-539, 0.0, 0x1.b67c718bcdc11p-712, 0x1.693fb47695561p-79,
     0x1.7526bad8b1c6bp-900, 0.0, 0x1.4650e1bc482acp-810, 0x1.fee7e2869030ap-719,
     0x1.5a02cb1eaf6bdp-196, 0x1.6598d3b98fe29p-104, 0.0, 0.0, 0x1.fa9d3fbda325bp-429,
     0.0, 0.0, 0.0, 0x1.0495de8da0a9cp-791, 0x1.3957a1ce31a61p-308,
     0x1.966525b855bacp-91, 0x1.8d683ed327e16p-321, 0.0, 0x1.36b15d66cfa9cp-798,
     0x1.3ea378dac43aep-283, 0.0, 0.0, 0.0, 0x1.9635bb63878a6p-411, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d3187d3786bbdp-328, 0x1.d498e0bccf558p-615, 0x1.3f550c86db9c6p-68,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47bce0a06e40cp-518, 0x1.98a66ad42bd88p-249,
     0x1.83dbbc1328ce5p-408, 0.0, 0x1.9b4a25232d8d9p-699, 0x1.06265b5ed7003p-867, 0.0,
     0.0, 0.0, 0.0, 0x1.c191f08860729p-980, 0.0, 0x1.152d278a8bb98p-525, 0.0, 0.0,
     0x1.93cb3cfdb3adp-262, 0.0, 0.0, 0x1.50df3334d67b5p-556, 0x1.58f7d304d170ap-255,
     0.0, 0x1.9300e005fc6a7p-309, 0x1.48e778b121541p-795, 0x1.d9cba633fe966p-481,
     0x1.8212c8ead754p-223, 0.0, 0.0, 0x1.28b11707d8b89p-980, 0x1.ff0fe289264cdp-157,
     0.0, 0.0, 0x1.e0a4dcfb3916fp-194, 0.0, 0.0, 0x1.137839f5155b2p-316, 0.0, 0.0,
     0x1.bb26bc2574305p-396, 0x1.9917129bedb4cp-623, 0x1.144370e91f077p-189, 0.0, 0.0,
     0x1.ec33488f8b6edp-529, 0x1.a1526fdd447a3p-532, 0x1.10c61d6949845p-147,
     0x1.279351cecb3b3p-188, 0.0, 0x1.efe58e8c00c79p-578, 0x1.658755a0411b5p-411, 0.0,
     0.0, 0.0, 0.0, 0x1.ba54489046924p-202, 0.0, 0x1.62580ae2eceffp-810,
     0x1.cdd8b6cb954c1p-765, 0.0, 0x1.d8f16f21f3c69p-925, 0.0, 0.0, 0.0,
     0x1.bebdb851fb8bbp-316, 0x1.920aa8844dfe6p-320, 0x1.b9f8e5ed92fb4p-653, 0.0,
     0x1.3e597694edf12p-860, 0.0, 0.0, 0.0, 0.0, 0x1.acda2140d3f33p-612, 0.0, 0.0,
     0.0, 0.0, 0x1.ad3097c8d7414p-425, 0x1.2bdaa0f1c50f3p-662, 0x1.9839aa33073f7p-225,
     0.0, 0.0, 0x1.8639940985bf7p-601, 0x1.088b4aef193f4p-202, 0.0,
     0x1.5e11847711cb7p-170, 0.0, 0x1.1d213b6b1650fp-239, 0x1.bb3cdb8f49e05p-135,
     0x1.f13809d74a5cfp-137, 0.0, 0x1.1e9f6bc638b47p-607, 0x1.585a4e4835915p-598,
     0x1.f0a84ec8115aap-818, 0x1.3dc2b1703a961p-977, 0x1.d10304acd483cp-70, 0.0,
     0x1.462f729c657c3p-173, 0x1.41638c62f6be5p-921, 0.0, 0.0, 0.0,
     0x1.bbe47ea014474p-831, 0.0, 0x1.2a8419f2df965p-566, 0.0, 0x1.bb38a547b6c63p-118,
     0.0, 0.0, 0x1.7e56a647448e7p-334, 0x1.e4c5868e4bfdp-840, 0x1.746188f90c64bp-333,
     0x1.b99bacc5308ccp-154, 0x1.0d33bfc6002c3p-210, 0.0
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
            tmp1 = Sleef_finz_acoshd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acoshd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acoshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
