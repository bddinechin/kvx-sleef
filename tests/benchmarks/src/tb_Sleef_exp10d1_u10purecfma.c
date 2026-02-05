/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d1_u10purecfma.c --function \
 *     Sleef_exp10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.140b3be4c58acp-998, 0.0, 0x1.90622d95f5ec4p-592, 0x1.ef8b13bfb381dp-490,
     0x1.f76663c5de2fep-836, 0.0, 0x1.d49c10ea79e29p-961, 0.0, 0.0,
     0x1.6c6fc8baa3943p-638, 0x1.8f1c533e758b4p-890, 0.0, 0.0, 0.0, 0.0,
     0x1.4f2a75326c02cp-836, 0x1.346b255bbc7f1p-629, 0.0, 0x1.287a4eb289174p-13, 0.0,
     0.0, 0x1.e17c61ecf7f6bp-786, 0x1.0cf80ddd08b9cp-50, 0.0, 0.0, 0.0,
     0x1.3469d168ca32ap-158, 0x1.bd1987b9ce9bbp-559, 0x1.0b84e1bab07b4p-808,
     0x1.02ad4fb0ec2dcp-292, 0x1.28d11f9c7266fp-820, 0x1.3ef1b63a84698p-906, 0.0, 0.0,
     0.0, 0x1.24a6a3b576793p-367, 0x1.faddcd8a19da4p-505, 0x1.4f39a0e5e0761p-238,
     0x1.9ed6b3d1939ecp-500, 0.0, 0.0, 0.0, 0x1.41975ee4b1c97p-991, 0.0, 0.0,
     0x1.3a1ecca45a151p-299, 0x1.6146e875bdba1p-948, 0x1.1d7412e777b58p-537,
     0x1.cb961ebfb34bap-307, 0x1.4a079c521e262p-25, 0.0, 0x1.6f7c94fda15cep-220,
     0x1.00ca10db71e2p-209, 0x1.cb878df6a6525p-194, 0x1.f0b889bd98814p-759, 0.0, 0.0,
     0x1.cebcf4e186915p-649, 0x1.e5389e52ed3f6p-573, 0x1.b5b886ef0c3a1p-346,
     0x1.a5738e169552dp-585, 0.0, 0x1.9a2ebc985f51p-565, 0x1.4ce16140f8ed1p-513, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8c64ed4e57913p-606, 0x1.c269756197078p-145, 0.0,
     0x1.6d5d38345e2f5p-191, 0.0, 0x1.5beabf0cae17fp-288, 0.0, 0.0,
     0x1.f8269f201a16p-517, 0x1.a554f7e114bc5p-870, 0x1.01fe674c75cbbp-793,
     0x1.5954b27e14e18p-115, 0x1.ed815d41bd165p-348, 0x1.fefa60b037593p-734,
     0x1.653418b8763e2p-999, 0.0, 0.0, 0x1.8cb7af7186a31p-708, 0.0,
     0x1.cfab3a9ec65f3p-850, 0x1.19a4b58db904dp-876, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eff675fa87d5dp-557, 0x1.49e7707c4ab9cp-383, 0.0, 0.0, 0x1.d072f938338ddp-41,
     0x1.608ea5e72542bp-426, 0.0, 0x1.58c07bb8b8aa8p-596, 0x1.a88bfe67a4bfap-827, 0.0,
     0x1.055582b243454p-885, 0.0, 0x1.8e4a163c3b21dp-634, 0x1.28614339ecbd2p-656,
     0x1.1be7051fb4681p-91, 0x1.a5bad4f47916bp-620, 0x1.bb61562fc44bcp-448, 0.0, 0.0,
     0x1.3670cfc37ad03p-680, 0x1.5891c0643902dp-823, 0x1.525b22c87019cp-637, 0.0, 0.0,
     0x1.e2873e36e6bacp-946, 0.0, 0.0, 0x1.489040f065ad1p-290, 0.0,
     0x1.de67545440f2dp-932, 0x1.bd0fa6058aef8p-177, 0x1.b69e7cefd93d5p-470, 0.0, 0.0,
     0.0, 0.0, 0x1.354f8fe424574p-233, 0x1.8d5bf345e610cp-130, 0x1.29eec529f857dp-169,
     0x1.79e0d530212fcp-699, 0x1.9e5ab939202e8p-30, 0x1.e0d02401b08ebp-511,
     0x1.c607264ff06cdp-163, 0.0, 0x1.3c5ee2a8648f8p-636, 0.0, 0.0,
     0x1.5fbae14bf8fabp-664, 0.0, 0.0, 0x1.8971e1d4036b4p-74, 0.0,
     0x1.89fffdb1a1d45p-254, 0x1.95cd193dd076ep-320, 0x1.fe340f8e8c406p-929, 0.0,
     0x1.fc7176dba6c13p-351, 0.0, 0.0, 0.0, 0x1.de83ca68af90bp-678,
     0x1.a01cd16ad9d42p-501, 0x1.3261a03e45443p-280, 0x1.834611b36d3ddp-413, 0.0,
     0x1.e38b553afe90bp-46, 0x1.1b496ce8d8809p-903, 0x1.4503dac17fbe4p-712,
     0x1.340e077448ebdp-671, 0.0, 0x1.7c1321a69421ap-98, 0x1.7a06e3262df9dp-228,
     0x1.838811b88f0abp-491, 0.0, 0x1.ddac9ee54afe3p-714, 0.0, 0x1.ee90e23ceb931p-891,
     0.0, 0x1.4d6731897b66ep-311, 0x1.a1519aa62a531p-315, 0.0, 0.0,
     0x1.0588cd25a31f3p-419, 0x1.4cbb9392e3a6ap-209, 0x1.a833dd89908b6p-631, 0.0, 0.0,
     0x1.c4a5022b1b219p-288, 0.0, 0.0, 0x1.38201cbbb473ep-575, 0x1.939c5f3263f64p-136,
     0x1.3d8ecbafb9a6ep-435, 0.0, 0x1.3874790c0abb5p-364, 0x1.07a1323b14a37p-774, 0.0,
     0.0, 0.0, 0x1.00a082085c30fp-1003, 0.0, 0x1.c0182cf1e1b5fp-529,
     0x1.0fc88fdba3deep-90, 0.0, 0.0, 0.0, 0x1.90344f7387f11p-866, 0.0, 0.0,
     0x1.96c50d92f2d4fp-295, 0x1.fa260367b1a61p-69, 0x1.ed521a87896b9p-713, 0.0, 0.0,
     0x1.94b6f01f20b34p-325, 0x1.06fdd614bbf43p-498, 0.0, 0x1.83ef87c30f85dp-46, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af8673fe3d438p-574, 0x1.288e5e2f7c29p-924, 0.0,
     0x1.e54f1e7b87494p-812, 0x1.4e587dfc48f9ap-708, 0.0, 0.0, 0x1.128f9956f9834p-429,
     0x1.bf7a731b02abfp-215, 0.0, 0x1.7fbc1732e851cp-886, 0x1.e320ac8b9bb92p-901, 0.0,
     0.0, 0.0, 0x1.3f7b74073fff7p-293, 0.0, 0x1.479627c86fap-969, 0.0, 0.0, 0.0,
     0x1.9693d09ea537bp-329, 0x1.ee8445b04b791p-361, 0.0, 0.0, 0.0,
     0x1.d7b1b034b064cp-745, 0.0, 0x1.749a955f1e385p-955, 0x1.8419d9e4501a5p-255, 0.0,
     0.0, 0.0, 0x1.32b307ba92e01p-91, 0x1.7270b6fcff8e8p-681, 0.0, 0.0, 0.0, 0.0,
     0x1.5c77ef45e489fp-828, 0x1.da5f9a422422dp-720, 0x1.82936a9d9a9bcp-407,
     0x1.0d1b8e0cfb44bp-615, 0x1.b2e92702bb15ep-540, 0x1.1840ae7aa4313p-50, 0.0, 0.0,
     0x1.95bb0b147b43dp-798, 0x1.2e288fd14a4b7p-920, 0.0, 0x1.f8416a79da287p-966, 0.0,
     0x1.da91ebc00d13fp-705, 0.0, 0.0, 0.0, 0x1.69c3d6d0d8a6dp-567,
     0x1.982b71c588ad7p-501, 0x1.4c18b6f878f8cp-790, 0.0, 0.0, 0.0,
     0x1.e17174f6a2684p-759, 0x1.fa2b51e3f2fbap-699, 0x1.ad9d2916c8fcbp-692,
     0x1.a1eaf3ee908a5p-235, 0.0, 0x1.6ba37bef56a19p-330, 0x1.2a1e960393f54p-678, 0.0,
     0x1.4c8649c1bbf36p-464, 0x1.a31e45b41f736p-355, 0.0, 0x1.a034b5ea7e12p-736, 0.0,
     0x1.01418709c9dddp-854, 0.0, 0x1.cec3ff1530937p-990, 0.0, 0x1.8d0523bf8533dp-202,
     0.0, 0x1.301c28b0ccb4ap-876, 0.0, 0x1.b484af3d44f7fp-238, 0.0,
     0x1.db75127a5aa82p-411, 0x1.03f549c753392p-878, 0x1.cd236541a3b5fp-599, 0.0,
     0x1.223de8260934dp-744, 0x1.79c815e24e3b1p-401, 0x1.e6d2a47074d09p-946,
     0x1.18a308c2b0843p-703, 0x1.b27e930fdcb78p-714, 0x1.cfb353d38e1edp-662, 0.0, 0.0,
     0x1.2bb0c432405d4p-703, 0x1.871055bb3b4ffp-402, 0x1.608e4521e1dabp-971, 0.0, 0.0,
     0x1.8f8be91262d0ap-473, 0x1.d02cbe9a8ec9fp-712, 0x1.88600dd2a00aep-542, 0.0, 0.0,
     0.0, 0.0, 0x1.82156ef671cbap-898, 0.0, 0.0, 0x1.b95d5b1545e03p-214,
     0x1.8adf1f89d3f4ap-849, 0.0, 0x1.caed82f7c8188p-633, 0x1.28a71e53214ep-568, 0.0,
     0x1.16ef8c312a613p-721, 0.0, 0x1.f08f02a26443ap-87, 0.0, 0x1.8c23fe83101edp-849,
     0x1.2e8eb9b7a7f9bp-322, 0x1.05e816043e73ap-795, 0.0, 0x1.c0bd54328432ap-841,
     0x1.b66ab9f640e05p-1015, 0x1.15c30e81979adp-119, 0.0, 0x1.f043292616cf9p-790,
     0.0, 0x1.1473bbd581319p-155, 0x1.4933cf2de717fp-104, 0x1.1fbc519a4394ap-446, 0.0,
     0x1.421ed96014e3dp-333, 0x1.713b54f93c8bfp-410, 0x1.e18319f68e92p-452, 0.0, 0.0,
     0x1.77a9ddd2ae11dp-889, 0x1.3585f564ba3ccp-928, 0x1.872c96db6be5p-237, 0.0,
     0x1.ef86885d15393p-118, 0x1.dfc53af003ec8p-482, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.817bdb8fe026bp-255, 0x1.ebee02752f086p-430, 0.0, 0.0, 0x1.63eb3b4c1d536p-209,
     0x1.591941588d86bp-307, 0.0, 0.0, 0x1.e35b75b7ca2b1p-14, 0x1.e4c8b9baaa8d6p-170,
     0.0, 0.0, 0x1.3aeae084f11bcp-754, 0x1.d413046041b0dp-819, 0.0, 0.0, 0.0, 0.0,
     0x1.0996e5f67964ap-150, 0x1.70aaa19c1eea2p-657, 0.0, 0x1.2b842ffb7c9c6p-149, 0.0,
     0x1.732ae0a5b48c6p-433, 0x1.35c6218cc24e7p-729, 0x1.bf6eca030e33dp-395, 0.0,
     0x1.c5be42613e4a7p-378, 0.0, 0x1.028f5dc6cb4b9p-202, 0x1.701b24e95de31p-324, 0.0,
     0x1.a13ba56a62b7ap-1022, 0x1.027afeefaf859p-211, 0x1.3f151d423b75ap-885, 0.0,
     0.0, 0.0, 0.0, 0x1.0d966aca00107p-723, 0x1.f3a66b0f833c4p-74, 0.0,
     0x1.2ed9cbfcd17e3p-299, 0x1.a88bdc5cef364p-89, 0x1.53d21b054b218p-212, 0.0,
     0x1.61fe181ff3a4ep-481, 0x1.5b949e4045adfp-3, 0.0, 0x1.6f06e421437e5p-331,
     0x1.8c5d9f5053554p-283, 0x1.e19df11864aa5p-750, 0.0, 0x1.ccfa22b32b854p-987, 0.0,
     0.0, 0x1.ce6104218fd2bp-121, 0x1.a8c95e8e37b7ap-700, 0x1.41b96a6db8243p-690,
     0x1.3e8ad5adfd579p-589, 0x1.aae8e5e12f1c2p-440, 0x1.d921fb45033d8p-479,
     0x1.deca400d4cd6p-322, 0x1.e2c4b6cec1c88p-468, 0x1.90d3c7a183fb2p-996, 0.0,
     0x1.b79507e4d4bc3p-279, 0x1.825deaeffe503p-866, 0x1.7ca61557f3a18p-22,
     0x1.8e8fe80bbafebp-577, 0x1.631f6801cd5d9p-314, 0x1.ebb81a41cf9acp-59, 0.0,
     0x1.8eee558f216edp-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4614c7528a9dbp-928, 0.0,
     0x1.e8939292ca832p-584, 0.0, 0x1.66ad0d54a8d79p-459, 0x1.51fc514d780c6p-991,
     0x1.b7bde7486e44ep-305, 0.0, 0.0, 0x1.5aa4a0d6c6ef4p-726, 0x1.4de64d860ef1fp-826,
     0x1.d8248cc016079p-443, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.baaf396ccc3bdp-405, 0x1.34cafd913d725p-962, 0x1.db1f71475725ap-665,
     0x1.380556bc0bf36p-532, 0.0, 0x1.624c8f2671a1fp-999, 0x1.4c19ee7afc796p-800, 0.0,
     0.0, 0x1.df6b535e61312p-794, 0.0, 0x1.dc333b359f151p-138, 0.0,
     0x1.1a1fa29eda14ep-705, 0x1.b33e8feb9feaap-544, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c07f59b08ddd3p-299, 0.0, 0.0, 0.0, 0x1.bb63c061fa9ccp-221,
     0x1.53cb39da08bd6p-671, 0x1.0ce173f2446cdp-773, 0x1.c0cb7de04601cp-933,
     0x1.a6f7bc7dee8dcp-429, 0x1.46b130b6468b9p-886, 0x1.debcfcb460f64p-649,
     0x1.fd0c384dee122p-174, 0.0, 0x1.67e6c6787c53cp-217, 0.0, 0.0,
     0x1.debcf1c413158p-870, 0.0, 0x1.2bf6734b9352cp-28, 0.0, 0x1.fd6bafc136d31p-213,
     0.0, 0.0, 0x1.e1351f5584562p-222, 0.0, 0.0, 0x1.e34b25975ab4cp-671,
     0x1.1384cc9c738e9p-153, 0x1.64d213432f862p-841, 0x1.46824dac9df4ep-65,
     0x1.c6eda0444436fp-617, 0.0, 0.0, 0x1.71505a2c18ee6p-336, 0.0, 0.0,
     0x1.0c8f70671cdap-117, 0.0, 0x1.b15fea243ae58p-27, 0x1.665f3b271b364p-386,
     0x1.bc7d635565258p-990, 0.0, 0x1.ebf3e83a5449dp-507, 0.0, 0x1.f37ebee266de6p-929,
     0x1.f9208c8b802cdp-315, 0.0, 0.0, 0x1.06411d83ed2cdp-576, 0x1.e308078a8c982p-486,
     0x1.e35cfede646e6p-185, 0.0, 0.0, 0.0, 0x1.383dcc6805c36p-696,
     0x1.bfce24ca757acp-484, 0.0, 0.0, 0.0, 0x1.53458e5808b67p-870, 0.0,
     0x1.35e595d43d9e5p-714, 0.0, 0x1.454160bef6078p-865, 0.0, 0.0,
     0x1.f27c6b31a08adp-123, 0x1.4ee76d462eb5ap-103, 0.0, 0.0, 0x1.b7bd567c2df46p-989,
     0x1.d812a838e007cp-118, 0x1.beabf031c02e6p-537, 0.0, 0x1.515eacb8c886fp-555,
     0x1.d5d45630eb5c8p-118, 0.0, 0x1.0372a07ecaa9bp-898, 0.0, 0x1.c34cf9e5d592bp-89,
     0.0, 0.0, 0.0, 0x1.aaaaa7ac0752ep-739, 0x1.55827eeda1d98p-722,
     0x1.1f3a63dac84e2p-376, 0.0, 0x1.9798724537ec8p-369, 0.0, 0x1.8eb57cbc2f4e1p-487,
     0x1.5698b21e0f31ep-878, 0.0, 0x1.cc74330a4111dp-342, 0x1.acdcbef041923p-357,
     0x1.b2a8377fdf20bp-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac24537df44b6p-302,
     0x1.d97c62395b0b8p-712, 0x1.0a4d033bfe5d8p-373, 0.0, 0x1.5e35ed92f969ap-445,
     0x1.8eeca9ccf7d11p-358, 0.0, 0x1.f3dc4b5e0113p-938, 0.0, 0x1.0d1408c6f5468p-944,
     0x1.e00aa58b95baep-234, 0x1.29e7502ccf513p-367, 0x1.77266460c204ep-16,
     0x1.29fe3ca3fe41dp-1006, 0.0, 0.0, 0x1.00819ed70495bp-80, 0x1.687a80a0ea059p-590,
     0.0, 0.0, 0.0, 0x1.53e89cf847079p-712, 0x1.e0bda5e1e9233p-269, 0.0, 0.0,
     0x1.e0be2ccef1ff4p-644, 0.0, 0.0, 0.0, 0x1.0e115ab06846bp-497, 0.0, 0.0, 0.0,
     0x1.bb73934d74acbp-892, 0x1.f282846929a81p-440, 0x1.a7f4b70f9d0cbp-628, 0.0, 0.0,
     0x1.1afd6106bf739p-372, 0.0, 0x1.1b284b90a50ffp-159, 0.0, 0x1.ece5a9bde6ca3p-255,
     0x1.e6996463ad05p-624, 0x1.3b7dd4800ee9p-671, 0x1.0c19c62620b49p-534,
     0x1.6f8d5204b358cp-75, 0x1.d20a078020c01p-397, 0.0, 0.0, 0x1.250bef1f8f59bp-586,
     0.0, 0.0, 0.0, 0.0, 0x1.88c0d83945cc8p-589, 0.0, 0x1.385fb8c6a1431p-99, 0.0, 0.0,
     0x1.174fafc4ecbc3p-236, 0.0, 0.0, 0x1.e353c7449c2e2p-43, 0x1.11fab868bd6dcp-893,
     0.0, 0.0, 0x1.01c68886727a1p-1017, 0.0, 0.0, 0.0, 0.0, 0x1.bb452d58cd97bp-557,
     0x1.8be1a6ce3ce74p-495, 0.0, 0.0, 0x1.3d127046fdc93p-174, 0x1.f65a7536b6d74p-784,
     0x1.87548ef38ad4ap-507, 0.0, 0x1.45c4131f3fb02p-997, 0x1.8dcf8cd4a1684p-935,
     0x1.6f85dbced5594p-633, 0.0, 0x1.fe9c58b879e7ep-298, 0x1.a28c292931f9p-344, 0.0,
     0.0, 0x1.1c7322821b93dp-283, 0.0, 0x1.7bd20771b2077p-569, 0.0,
     0x1.3cec5914041ap-182, 0.0, 0x1.37620b3efa252p-314, 0.0, 0.0,
     0x1.2e63b5db57b7cp-338, 0x1.bbb01c9fdb5b2p-454, 0.0, 0x1.4a61c20d9c27bp-522, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e2f9a23a50beep-309, 0.0, 0.0, 0.0, 0x1.00e93f36fd42bp-99,
     0x1.5e234c2e4e80bp-955, 0x1.285aecca1977fp-306, 0.0, 0x1.2a7eca85867f7p-612, 0.0,
     0x1.eb89d5abd973cp-472, 0.0, 0.0, 0x1.d59e830ea8eedp-8, 0x1.7755a1995b8c6p-430,
     0.0, 0.0, 0.0, 0x1.2e4c0c5113ab7p-516, 0x1.3cf5e59ce4666p-82,
     0x1.d79586680733fp-968, 0x1.765d65030eaf8p-104, 0x1.a25120b458e6ap-91,
     0x1.1d5c263a7ed66p-57, 0.0, 0x1.5033483e3c3dcp-207, 0x1.e2fd076072ap-592, 0.0,
     0x1.db7b784b1793cp-700, 0.0, 0.0, 0.0, 0x1.0ef8f0b0e0b4p-918,
     0x1.d9b0953a3cee1p-489, 0.0, 0.0, 0x1.e21199366ad09p-1000, 0.0,
     0x1.4ddfa9793d7d6p-123, 0.0, 0x1.5992e431c47d9p-928, 0x1.fe6d58d4de0fcp-503, 0.0,
     0x1.a36e8ca18b08fp-326, 0.0, 0.0, 0.0, 0x1.8ebc5e1d83a15p-530,
     0x1.0d5c7d114d827p-457, 0.0, 0x1.0fc0461708c34p-154, 0.0, 0.0,
     0x1.4ee3d2a70ac24p-73, 0x1.a4e1a0327a21ep-38, 0x1.70327be241ebfp-856, 0.0,
     0x1.98ba405b35674p-475, 0x1.ecf44f33237dfp-783, 0x1.f841666288048p-105, 0.0, 0.0,
     0x1.246823de6ecccp-552, 0x1.130371731e99p-190, 0x1.892fd4fa57423p-678, 0.0,
     0x1.6b6d2f5241b8p-120, 0.0, 0x1.50d6669478a81p-688, 0x1.3b4717f6fbbe2p-180,
     0x1.b08c2bdf7d5fap-711, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.765f01a618375p-479, 0.0,
     0.0, 0.0, 0x1.56a0bd7b30b0bp-771, 0x1.04a2bfe12b279p-250, 0x1.7752b106f7dd4p-975,
     0.0, 0.0, 0.0, 0.0, 0x1.ea7fdd02df712p-310, 0x1.07f845e53543ep-412, 0.0, 0.0,
     0x1.31218291d8a1cp-30, 0x1.27a6c775b7b2cp-338, 0.0, 0.0, 0x1.cdb5424d327b8p-446,
     0x1.8e7e3f5e8c011p-684, 0.0, 0x1.48f88a3378204p-308, 0x1.0770673ac212p-428,
     0x1.e293c69e5b55fp-432, 0x1.c2df1ccabaa2ep-1015, 0.0, 0x1.b0b285e24bab8p-735,
     0.0, 0.0, 0.0, 0x1.f5d55f34d0885p-676, 0.0, 0.0, 0x1.1f9b70d3bc8f8p-1002, 0.0,
     0x1.dd53601acc585p-593, 0x1.a1efd2955d562p-723, 0.0, 0.0, 0.0,
     0x1.3afb5f70fe26bp-579, 0.0, 0x1.e27f1f6d4a631p-1008, 0.0,
     0x1.60ef18fb84104p-435, 0x1.c645a0785f646p-904, 0.0, 0.0, 0x1.5b225ddf099abp-503,
     0x1.15e413a9ce04fp-847, 0.0, 0x1.334599d518e14p-140, 0.0, 0.0, 0.0,
     0x1.bf56ea02cb441p-956, 0x1.948dd30893d69p-352, 0.0, 0.0, 0x1.03087a5bd4873p-757,
     0.0, 0x1.e4efeb71e65b1p-317, 0.0, 0.0, 0x1.f31a6c6ccb05cp-44,
     0x1.3d84d4054b025p-665, 0x1.c188ca31c3b48p-198, 0x1.c853d99fff3bcp-276, 0.0,
     0x1.99f1c701901c2p-803, 0x1.8799915ed2a4ep-130, 0x1.2b1876688ba4dp-893,
     0x1.e704d8265be9cp-800, 0.0, 0.0, 0.0, 0.0, 0x1.bbf5422105c56p-262,
     0x1.9fdd58bab9054p-195, 0.0, 0.0, 0.0, 0x1.107bf688a6c1ap-915,
     0x1.887af4ad2ece1p-916, 0.0, 0x1.2033bc8c75c63p-195, 0.0, 0.0, 0.0, 0.0,
     0x1.250573969683fp-136, 0.0, 0x1.b38b6b66886d4p-707, 0x1.25e8bfe09eefbp-695,
     0x1.bb59e3dfe5ba4p-764, 0x1.ef3485a169794p-599, 0x1.e1b8121987827p-937, 0.0, 0.0,
     0x1.567d8441e89ap-728, 0.0, 0x1.16b2cc3466cbcp-323, 0x1.f639e5096797cp-85, 0.0,
     0.0, 0.0, 0.0, 0x1.2d72208cbb8f2p-381, 0x1.91ee03bf675e1p-820, 0.0, 0.0,
     0x1.f268490adbe75p-999, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.396f88d1eac35p-671, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d826fcac39fcp-218,
     0x1.2fa731581cd12p-322, 0x1.de3c5fd4fe44fp-93, 0.0, 0x1.06dd32703a2aep-722, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.172a10a121233p-515, 0x1.0fb4794a44bf5p-240,
     0x1.af5dc78727f48p-778, 0x1.7bcb0b7b73f7cp-523, 0.0, 0.0, 0.0,
     0x1.0b635baa63762p-378, 0.0, 0x1.0766a4256bce1p-284, 0.0, 0x1.9f2543a5ead0dp-184,
     0x1.21d1217da7291p-1006, 0x1.b8d3f42f2f3f9p-466, 0x1.5a79057e7ca0fp-328, 0.0,
     0.0, 0x1.79507bb44e83ap-696, 0x1.fec7f97a8f2fcp-937, 0x1.a0ee37d44749cp-958,
     0x1.4a5423ded1425p-471, 0x1.eee701b3dcdf6p-800, 0.0, 0.0, 0x1.27676a6324a54p-982,
     0.0, 0.0, 0x1.1718d50aa8b29p-160, 0.0, 0.0, 0.0, 0x1.c773487d261fp-26,
     0x1.729641da0e4eep-587, 0x1.b050d796b0689p-477, 0x1.6c9dc7f82042ap-234,
     0x1.723131e8bc1d9p-1004, 0x1.02639409fbe67p-919, 0x1.4037585a76dc6p-1001, 0.0,
     0x1.d6f05d1b8299ep-1008, 0.0, 0.0, 0.0, 0.0, 0x1.4d4ba4b22f9ebp-822,
     0x1.a9ffa9c818437p-973, 0.0, 0.0, 0.0, 0x1.65d9a1a618fdep-410, 0.0, 0.0,
     0x1.54cb6f319760ap-62, 0x1.109031cca3ca6p-770, 0x1.2f6cfab21d6a7p-563, 0.0, 0.0,
     0x1.4076ad700fbfap-16, 0.0, 0.0, 0x1.ac611bdd075b9p-413, 0.0,
     0x1.007145356d6dp-262, 0.0, 0.0, 0.0, 0x1.1d271f5725c1ep-553, 0.0,
     0x1.9895867d83f12p-833, 0.0, 0x1.391615b52a40cp-54, 0.0, 0x1.a625e131e3effp-375,
     0.0, 0x1.63134ff9d085bp-927, 0x1.c086e9f7f95b9p-256, 0x1.53977ccef3028p-627,
     0x1.9f32eef172daap-732, 0x1.e3527ace64ae8p-388, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6e95614ae683bp-675, 0.0, 0x1.35500fb1aaf11p-60, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_exp10d1_u10purecfma(tmp0);
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
    printf("Sleef_exp10d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
