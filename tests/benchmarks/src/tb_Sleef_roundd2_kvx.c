/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundd2_kvx.c --function Sleef_roundd2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.f2272abd52a62p-63, 0x1.313b49000a8d4p-132, 0x1.9fe53b31acc55p-663,
     0x1.f112214e417edp-1005, 0.0, 0x1.0e557d3ba1e34p-264, 0.0,
     0x1.93332fe15842cp-650, 0.0, 0.0, 0x1.1bda5b42b96e1p-823, 0x1.4a5b4a097d004p-505,
     0.0, 0.0, 0.0, 0.0, 0x1.aeadd852f7d08p-790, 0.0, 0x1.69031b852f7e6p-359,
     0x1.ef29699b49afcp-14, 0.0, 0x1.6fe00266bfa33p-264, 0.0, 0x1.ebecfd63ec965p-322,
     0x1.cf96c0c04bb55p-131, 0.0, 0x1.376b4b83a1bb2p-263, 0.0, 0.0,
     0x1.8ac81f50ac31fp-596, 0x1.307d93e940415p-1014, 0x1.2b2514f304c0cp-110,
     0x1.aad98ebb659d6p-858, 0.0, 0x1.517bf88f268b5p-240, 0.0, 0x1.e3f65ced171ccp-617,
     0.0, 0.0, 0x1.002254ca672f3p-250, 0.0, 0x1.82ec4d708e781p-421,
     0x1.f631f0f14af48p-191, 0.0, 0x1.f844ea64324d7p-866, 0x1.b062ef05d212fp-291, 0.0,
     0x1.b9d4632b440c7p-213, 0.0, 0.0, 0x1.23f1c7be52d7ap-681, 0.0,
     0x1.80e95d15a81abp-846, 0.0, 0x1.399680592697cp-592, 0.0, 0.0, 0.0, 0.0,
     0x1.9c2a0ab22d661p-433, 0.0, 0x1.0e206fd1bb281p-469, 0x1.0c131975007c2p-523, 0.0,
     0.0, 0x1.0e94f489a50afp-518, 0x1.fdb280d5e2295p-797, 0x1.19364692a3cd7p-599,
     0x1.10d55828b008ap-712, 0.0, 0.0, 0x1.18656a7424782p-155, 0.0, 0.0,
     0x1.41c6850c7f948p-275, 0x1.6811061431cfcp-847, 0x1.2c50acbe17421p-841, 0.0, 0.0,
     0x1.dbe9ecf0b0f2cp-710, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35f63597a37d5p-288, 0x1.e0d7822c1a1dfp-628, 0.0, 0x1.bf32b8ceb404dp-978, 0.0,
     0.0, 0x1.7021af81c8e3ap-277, 0x1.8d085065d8c99p-118, 0x1.9b2efefa0e3e1p-578,
     0x1.f8360159a9adp-184, 0x1.a5fdd42f4f4fap-331, 0x1.6315a66c31b9p-903, 0.0, 0.0,
     0.0, 0x1.fc36dfa531a3cp-800, 0x1.0799f1a7053cdp-312, 0x1.97ef6b6bd912ep-80,
     0x1.b883af8613d5p-43, 0x1.e52d4282afca1p-792, 0x1.5b27a026bd9ffp-569, 0.0, 0.0,
     0x1.9b048295b2c21p-278, 0x1.15a7ef3db8b4dp-217, 0x1.c244961bfee8ap-452,
     0x1.8b2fdd1e55bf9p-300, 0x1.a8e62da18d118p-436, 0x1.67859b578851ep-858, 0.0, 0.0,
     0.0, 0x1.d142c65a35ffap-980, 0x1.9b5d130edd4p-603, 0.0, 0.0,
     0x1.13ed2ed4eeb42p-305, 0x1.381dba47617f1p-581, 0.0, 0x1.678f057b30466p-6,
     0x1.3fb664d229fa9p-737, 0.0, 0x1.cbffbc1d23eap-943, 0x1.b7d5837d0b165p-270, 0.0,
     0x1.457f17b03a9e6p-220, 0x1.ee66c18debd19p-357, 0x1.371cee055712ap-2,
     0x1.1e169c45eabf5p-367, 0x1.8963101a5a517p-643, 0x1.f20762b18a6e5p-424,
     0x1.a27cdaf482eeap-567, 0x1.557ff6e630903p-606, 0.0, 0.0, 0x1.0fdabe67a3811p-585,
     0x1.0fdabb14cbfd7p-724, 0x1.a806c95ee6fb4p-16, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb04db83a705bp-354, 0x1.d38283d091fbp-716, 0.0, 0x1.f7dca0177a377p-25,
     0x1.b7a77e90d0cdap-752, 0.0, 0.0, 0.0, 0x1.eb5b7ca546d01p-1017,
     0x1.f22af93871309p-772, 0.0, 0x1.e0c2625ffd408p-244, 0.0, 0x1.77bde0e73e63cp-602,
     0x1.83b799495e072p-956, 0x1.61b9ab8f7200cp-144, 0x1.c970b33681b5cp-573,
     0x1.e232bf793b4f6p-582, 0.0, 0.0, 0x1.e5f34dbd48a43p-878, 0x1.250d6eb4329b1p-109,
     0x1.4dd09694ca0e8p-308, 0.0, 0.0, 0x1.ecb3cd2f73c6ap-652, 0.0,
     0x1.7f9b7efb64646p-284, 0.0, 0.0, 0.0, 0x1.bda1e5db2dfd5p-215, 0.0,
     0x1.e8dc1e054b267p-293, 0.0, 0.0, 0x1.e0be6b83b13fbp-675, 0x1.d457bb6be1d04p-854,
     0.0, 0.0, 0x1.65599429bd81ep-1021, 0.0, 0x1.bcccc9277d391p-913,
     0x1.f60f5b1659018p-98, 0.0, 0x1.177915207dc05p-208, 0.0, 0.0,
     0x1.8a2354bf1c79ep-493, 0.0, 0.0, 0x1.5b274f90b7098p-649, 0.0, 0.0, 0.0, 0.0,
     0x1.60258f0db2874p-904, 0.0, 0.0, 0.0, 0.0, 0x1.9f726ed163cebp-758,
     0x1.1035b1edb6c6p-363, 0x1.4ac3f35e31d29p-185, 0.0, 0.0, 0x1.41e0a626497e8p-569,
     0.0, 0.0, 0x1.998b40e00f906p-963, 0x1.f831a129f6bb4p-778, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.803d09708d2p-918, 0.0, 0x1.f4b7bbdfea715p-908, 0x1.6dd17f3f1deafp-818,
     0.0, 0x1.03f0c04bc130bp-697, 0x1.f96f4ff9b2b0ep-869, 0.0, 0x1.8cda94dfc4925p-588,
     0x1.1d646fbc5ded2p-308, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc8ee245ffb05p-702,
     0.0, 0.0, 0x1.c05cfe312b68p-155, 0x1.63d66355ee98bp-829, 0x1.b879a5d1e6effp-519,
     0.0, 0x1.89d830ff537efp-205, 0x1.b5aba6860d0e9p-31, 0.0, 0.0,
     0x1.acd09fd3fc4a7p-423, 0.0, 0x1.b699bbfa964edp-487, 0x1.5743b62d3ffcep-175,
     0x1.c9a4f3f28c9aep-147, 0.0, 0.0, 0x1.200663258fc3cp-413, 0.0, 0.0, 0.0, 0.0,
     0x1.ef70085979195p-776, 0.0, 0.0, 0.0, 0x1.37b0bce9ab715p-598, 0.0, 0.0, 0.0,
     0x1.df4091c9e3525p-311, 0x1.2ac5fa6c28c4ep-553, 0.0, 0x1.2f27e6a1a7ae8p-869,
     0x1.e8ace63a27941p-77, 0.0, 0.0, 0x1.79ee3fd6cfb81p-309, 0x1.ffdf1417c9067p-231,
     0x1.5caf2eb17cd7bp-859, 0x1.5b7aa24f85f59p-327, 0x1.d4dc499051678p-491, 0.0,
     0x1.e5bcc65d3eafcp-250, 0.0, 0x1.fe3e3d4f87055p-358, 0x1.d6270f9cd07fp-839, 0.0,
     0.0, 0x1.8b76beb8bb7eep-755, 0.0, 0.0, 0.0, 0.0, 0x1.3d54c2c8779dbp-992,
     0x1.7e9fd379ab26p-593, 0x1.9b69bd6008488p-251, 0.0, 0x1.f718fe6b69bb3p-149, 0.0,
     0x1.9149ba60f16d8p-127, 0x1.200c8be72fa5ap-626, 0x1.fcc1c64e9da6ep-124,
     0x1.d0d1c2990a865p-975, 0x1.94590d9a7ebc3p-75, 0.0, 0.0, 0.0, 0.0,
     0x1.fe43202566375p-932, 0x1.1e407d2bccaep-963, 0.0, 0x1.ee91a8cd9a53ap-758, 0.0,
     0x1.14ec6cc30d159p-232, 0.0, 0x1.d48fb3e3e414fp-115, 0.0, 0x1.aa2710dc56abcp-626,
     0.0, 0x1.4b783ed53012cp-412, 0.0, 0.0, 0x1.634fb88bbf89ep-150, 0.0, 0.0,
     0x1.444e596623547p-455, 0.0, 0.0, 0.0, 0x1.cac37aa86e436p-231,
     0x1.0dfe8a371fd08p-277, 0x1.8bc48399ca0fap-282, 0x1.e7f33007f0293p-213, 0.0, 0.0,
     0.0, 0.0, 0x1.b0a1c7bb672c4p-306, 0x1.1bf66327f36a5p-632, 0.0, 0.0,
     0x1.b26d8d82d13f9p-569, 0.0, 0x1.818a2af738cfcp-466, 0.0, 0x1.b8d361f1b5ad3p-224,
     0.0, 0.0, 0.0, 0x1.c2f1b6621abbep-504, 0.0, 0.0, 0.0, 0.0,
     0x1.eddd6752dfa8bp-975, 0.0, 0.0, 0x1.c63d71f5e532bp-77, 0x1.52b7bc45a4677p-952,
     0x1.d349b50f96bcep-991, 0.0, 0x1.5005e60c15e69p-742, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.30ad477c955ep-315, 0x1.e066f7f0b2bb6p-802, 0x1.ab205f1d964bdp-887,
     0x1.ca1fd9989190ep-68, 0.0, 0.0, 0x1.d5684b69aed72p-664, 0x1.d9399c2b2e954p-812,
     0x1.0dc3718bb6f81p-100, 0.0, 0x1.1160dccf45cd3p-67, 0x1.1c1538e72def3p-10,
     0x1.c6047e4ede4f4p-943, 0x1.90c25386978ecp-195, 0x1.a9824ec2afa8cp-945,
     0x1.1b09e5f12436p-13, 0.0, 0.0, 0x1.862b63c66897dp-218, 0.0,
     0x1.15215fd047ed7p-810, 0.0, 0x1.23d02e282cdbep-298, 0.0, 0x1.de7273d7c77d7p-780,
     0x1.d397c43667782p-26, 0.0, 0.0, 0x1.f04bd47fce9bdp-825, 0.0, 0.0, 0.0,
     0x1.09ff25236a0f1p-557, 0.0, 0.0, 0.0, 0x1.ae7153c3927bep-83, 0.0, 0.0,
     0x1.86f431718b058p-1004, 0x1.4f492ad795636p-481, 0.0, 0.0, 0x1.47ac7baca5b65p-51,
     0x1.867a0a266d2b9p-672, 0.0, 0.0, 0.0, 0x1.6de8e6497ca0fp-5,
     0x1.6ecff2a5d5a3cp-237, 0x1.ff4fba66a4173p-991, 0.0, 0.0, 0.0,
     0x1.e62e3abebb00ep-504, 0x1.b90bc00e93895p-871, 0x1.c02d677c6a32dp-365,
     0x1.48659d46876f5p-63, 0x1.9b9e3cb8cc087p-673, 0.0, 0.0, 0.0,
     0x1.a9dba4e9f34ecp-983, 0x1.b4bd3c2d226f1p-893, 0.0, 0.0, 0x1.50be6e6fabf76p-781,
     0x1.fe5acc89febacp-195, 0.0, 0x1.fd8be7d7f6fbcp-56, 0x1.04a2ad623d443p-230,
     0x1.dde86b53c385cp-137, 0x1.419f3357e3235p-499, 0x1.f5592f31b8ee9p-274, 0.0, 0.0,
     0x1.e04d54cbba72fp-56, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75b9b857542b3p-750,
     0x1.f4bc50cceeebbp-506, 0.0, 0x1.62fe66260a76ep-294, 0.0, 0.0,
     0x1.1803a48f1a125p-569, 0.0, 0.0, 0x1.eae8a6481a1f4p-745, 0x1.8cc5a16fa8ac3p-352,
     0.0, 0x1.e9a855aab38edp-486, 0x1.f44e15395e4b8p-874, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d00f06c8ca45p-53, 0.0, 0.0, 0.0, 0x1.f98185071e3afp-233, 0.0, 0.0, 0.0,
     0x1.960893f4bb59ap-80, 0x1.178c6cf4d62a1p-127, 0x1.cd89f9c5dce8ap-955, 0.0, 0.0,
     0x1.d1da784e8a147p-983, 0x1.ae2b4a6f4de18p-66, 0x1.b223d08fc6f23p-136, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1e8059102b3abp-308, 0.0, 0.0, 0x1.521d22d3c98f6p-966,
     0.0, 0x1.bd246c6a57deep-141, 0.0, 0x1.f601a1c2aad87p-741, 0.0,
     0x1.62b5b44b056a7p-617, 0.0, 0x1.d2e8ab9469d2fp-209, 0.0, 0.0,
     0x1.34988b17738c6p-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ac1f800ca30ap-731,
     0.0, 0x1.541cdce91c255p-766, 0x1.2d6c7cc2166c5p-892, 0.0, 0.0, 0.0,
     0x1.fa690f83fbb33p-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19e57c1891f47p-672, 0.0,
     0x1.e732f8e2cab96p-261, 0.0, 0.0, 0x1.5411f16bb7591p-220, 0x1.e0902a14364a3p-278,
     0x1.6bd5adab4dc51p-882, 0x1.ee0415825f0b1p-890, 0x1.fb0949e5bd748p-16,
     0x1.c9f8ca26d93b2p-927, 0x1.37e378fa44ac1p-486, 0x1.6036e7cba2eb8p-658, 0.0,
     0x1.e3654e7ad5fe6p-320, 0x1.e68ace9f66493p-622, 0.0, 0x1.764a6bd74599fp-656,
     0x1.0910dacbdaa5fp-577, 0x1.db4b2168d57c3p-710, 0x1.c20f4da738724p-409, 0.0,
     0x1.569ea7861e1d3p-207, 0.0, 0.0, 0.0, 0x1.b96b2060b136fp-780, 0.0,
     0x1.a82b7ad7c0cd2p-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0e4a31296f45p-313, 0x1.edf04fd495677p-768, 0x1.d601758a6d226p-88, 0.0, 0.0,
     0.0, 0x1.c01878bbf3659p-333, 0x1.a6440a17bc8a2p-682, 0.0, 0.0, 0.0,
     0x1.ad9e74c67cdd8p-780, 0x1.95a6ee31782a2p-503, 0.0, 0x1.ba2d774ede3f6p-834, 0.0,
     0.0, 0x1.c3ac793e91a63p-913, 0.0, 0.0, 0x1.4f45dfe6ce14fp-19,
     0x1.5bee797386b68p-910, 0.0, 0x1.2fac035040633p-446, 0.0, 0.0, 0.0, 0.0,
     0x1.244748270ee3p-675, 0.0, 0.0, 0x1.23afcbf5b8354p-917, 0x1.d34bdc7281826p-581,
     0.0, 0.0, 0.0, 0.0, 0x1.afcb15589620ep-363, 0.0, 0.0, 0.0,
     0x1.2753629318eefp-697, 0.0, 0.0, 0x1.343ce883381cp-465, 0x1.ab7340e2d5ce4p-711,
     0.0, 0.0, 0x1.c111a2e50b63ep-257, 0x1.0351ea9cb2a03p-770, 0.0, 0.0, 0.0,
     0x1.5b0d700ff2541p-919, 0x1.2737c683419c8p-757, 0x1.a71d224dbeb17p-781,
     0x1.9d01a2755879dp-571, 0.0, 0x1.0a8a1f1c1710dp-371, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dac948bf0e279p-938, 0.0, 0x1.588356706fd0ep-709, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c391d6af39d7p-246, 0.0, 0x1.69717aa02ec06p-723,
     0x1.c566652336ed6p-557, 0.0, 0x1.290c970b2c958p-927, 0.0, 0x1.73c4e87d0cbdp-824,
     0.0, 0x1.46a539ed5d708p-632, 0.0, 0x1.e5e45e74672bep-643, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d931cffce086p-254, 0.0, 0.0,
     0x1.36577b6aa4146p-234, 0.0, 0.0, 0x1.9e06d5b9de493p-923, 0.0,
     0x1.01681b4d09b72p-746, 0.0, 0x1.27baccd568349p-511, 0.0, 0x1.fba6902eb27b4p-253,
     0.0, 0.0, 0x1.0f2c15b1b1d1ep-447, 0.0, 0.0, 0.0, 0x1.2b1a805be41f7p-712,
     0x1.3a301ef80c1ccp-1000, 0x1.e4a2e5718aa58p-93, 0x1.a72b68718de81p-441, 0.0, 0.0,
     0.0, 0.0, 0x1.fa4d635314b47p-341, 0.0, 0x1.b05005410d3f1p-335,
     0x1.919b8f766e95dp-882, 0.0, 0x1.def495bac4a23p-312, 0.0, 0x1.3a0604894b9c4p-807,
     0.0, 0x1.4925ab9773459p-108, 0.0, 0.0, 0.0, 0x1.dbaafce476ca1p-727, 0.0, 0.0,
     0x1.25c9ad9522658p-948, 0.0, 0.0, 0.0, 0.0, 0x1.36fabe2eabaf8p-807, 0.0,
     0x1.8b0932ede331cp-131, 0.0, 0.0, 0.0, 0.0, 0x1.520946cc4fcedp-796,
     0x1.2e32c40a1ad3ep-53, 0x1.ccc17e791db02p-785, 0.0, 0.0, 0.0,
     0x1.5350af417b6d4p-145, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b6c944cf269f4p-762, 0x1.6a5258f49e0d3p-499, 0x1.8df56c502d544p-366,
     0x1.c6ea600a5992p-392, 0x1.173698b1ecc2p-1001, 0.0, 0x1.f6c46102050fcp-838, 0.0,
     0.0, 0x1.3bb115bd75832p-693, 0x1.5ffaf91e1c5ecp-870, 0x1.a042397ac38f8p-361,
     0x1.1024fe1abb70bp-88, 0x1.8befca3c53152p-173, 0.0, 0x1.9e3cefd98554p-389,
     0x1.b50b71fb431b1p-622, 0.0, 0.0, 0.0, 0x1.7d40391f9a54bp-816,
     0x1.fb96bccd5bd82p-651, 0.0, 0.0, 0x1.1b5bea0d40bb4p-346, 0x1.50f1b331b0521p-188,
     0x1.6a540a3f80313p-942, 0.0, 0x1.857b85684a896p-128, 0x1.86e9ae62cf302p-378,
     0x1.597bf0e4f43fbp-634, 0x1.6ba0ef9de2488p-549, 0x1.8357084f9c04ap-539,
     0x1.3e946ff6c2473p-788, 0.0, 0x1.3f9a8de763fbep-366, 0x1.042e165c37e62p-975,
     0x1.5acf3f43155f4p-624, 0.0, 0.0, 0x1.0b09149f55acp-497, 0.0, 0.0, 0.0,
     0x1.9f181882dde92p-193, 0.0, 0.0, 0x1.b3f01bb6fc479p-910, 0.0, 0.0,
     0x1.fa2889f81f66dp-252, 0.0, 0x1.0b6dac2c49bf8p-320, 0x1.fe2bf859ae614p-995, 0.0,
     0.0, 0x1.79bbad8ccf7fap-20, 0x1.56aeba54f2f3ap-973, 0.0, 0x1.14f55d145c9e1p-126,
     0x1.3ee89503d387ep-744, 0x1.e8853402c72e8p-143, 0x1.fbc7faf4f4342p-638,
     0x1.9887c47a5a561p-304, 0x1.fafbb055f1f8ap-171, 0x1.0c02650ba186dp-1008, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3962249f5506fp-508, 0x1.6105910b20913p-608,
     0x1.481102069238ap-793, 0x1.cc924e45ba8fbp-787, 0x1.ea19821eda5c9p-234,
     0x1.d56135384755p-97, 0.0, 0x1.6df9320f52d87p-420, 0x1.67732e57212bep-930, 0.0,
     0x1.942600c1b84c6p-638, 0x1.ad33feab43b4ap-487, 0.0, 0.0, 0x1.1aff5700ed4dbp-798,
     0.0, 0x1.5d822edc11de3p-671, 0x1.e3483f322d9a4p-944, 0.0, 0.0,
     0x1.2ba734a2747fp-188, 0.0, 0x1.ddb4ec57937c1p-210, 0.0, 0.0,
     0x1.35c1c3ae6d32dp-584, 0.0, 0.0, 0.0, 0x1.14cf248a70a66p-248, 0.0,
     0x1.d2d2a76380683p-40, 0x1.296ad5273e883p-392, 0x1.d04555e1d1d4ep-277,
     0x1.c6b7621dd8f7bp-510, 0x1.102c449818e12p-882, 0x1.007be64ca7b5ep-696, 0.0,
     0x1.418438b9b8304p-167, 0x1.c8d7d12d1bcap-476, 0x1.60850324ae296p-955, 0.0,
     0x1.5cfb1237db32fp-757, 0.0, 0.0, 0x1.a9663887aaedbp-78, 0x1.762ec25e7a2acp-533,
     0.0, 0x1.4c6c96a2b071p-128, 0x1.c02be4cdfbe72p-464, 0x1.8cddc26c14258p-977,
     0x1.5347fab264647p-702, 0x1.d3bbfdaa2db06p-546, 0.0, 0.0, 0x1.dc7596e0ebb0dp-737,
     0.0, 0x1.e211bf076c089p-63, 0.0, 0.0, 0.0, 0x1.d1fe92988595ep-1010, 0.0,
     0x1.e851d83ba6341p-480, 0x1.44d56e3e3d1c4p-533, 0x1.8fec7c457633cp-457,
     0x1.8c47c8a2a9f2bp-126, 0x1.5f6bae1d53694p-135, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ae24b9e1de23cp-110, 0.0, 0x1.4d4faedec69c3p-643, 0.0,
     0x1.3fe652718d14ap-485, 0.0, 0x1.1e2db6e0ced0ap-615, 0x1.c160f09101721p-637,
     0x1.b35b93b8f8fe1p-786, 0.0, 0x1.57916505d175dp-380, 0.0, 0x1.0ca66d96e3b1cp-404,
     0.0, 0x1.44fe73c2550dbp-189, 0.0, 0.0, 0x1.916f003a03057p-482,
     0x1.a90ef4e390f83p-912, 0x1.c2d2aea073108p-785, 0x1.c89f3db8a45b3p-8, 0.0, 0.0,
     0.0, 0.0, 0x1.96d24690db082p-846, 0x1.b5f6a806ef817p-174, 0.0,
     0x1.173461b9307dcp-801, 0x1.27b656b8182fbp-669, 0x1.06be4cf867a3cp-687,
     0x1.53472fd4c664p-917, 0x1.16df3e235629cp-667, 0.0, 0x1.0af1ab8bd0ef4p-89,
     0x1.b74827bfabf0ap-825, 0.0, 0x1.e08666f47976ap-123, 0.0, 0x1.e51f638516755p-407,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.734c66f0bb711p-346, 0.0, 0.0,
     0x1.8ea37fc5350bep-876, 0.0, 0.0, 0x1.b6e8e56c6c6e2p-887, 0.0,
     0x1.b44c946ea7a32p-890, 0.0, 0.0, 0x1.ee9c609c863d4p-885, 0x1.ba74fbc931d5fp-637,
     0x1.6324dfb5a17fcp-335, 0.0, 0.0, 0.0, 0x1.b8e187a90335bp-662,
     0x1.37c0b4408067ap-322, 0x1.b8c086fabbd49p-860, 0x1.0ba9a765c4c1dp-12, 0.0,
     0x1.5ae4d488ae72fp-183, 0x1.d083aa4e6143p-57, 0x1.2dafbc89b47abp-991, 0.0, 0.0,
     0x1.93aa9bdaaef08p-71, 0x1.a7f03ffb36399p-159, 0x1.0c85f018258adp-721, 0.0, 0.0,
     0.0, 0.0, 0x1.45467a5aa425dp-559, 0.0, 0x1.eb4b62f637097p-278,
     0x1.565141246cd3bp-141, 0x1.8607c0251f12bp-282, 0x1.a9f04f6a53541p-5, 0.0, 0.0,
     0x1.f8b4436c0d425p-64, 0x1.75c57a4aaf12ap-687, 0x1.cbaff9efd937ep-677,
     0x1.0f6a33590669ep-54, 0x1.c6813afd027ccp-970, 0x1.db9b74bcce708p-971,
     0x1.74d91f89e0774p-1015, 0x1.f4e6f298b0966p-611, 0.0, 0x1.dcf271ab4c60fp-412,
     0x1.e36a3100a357dp-241, 0x1.a658b612d38fp-682, 0x1.18c7659d27f92p-125, 0.0, 0.0,
     0x1.c3e034252c7d8p-722, 0.0, 0.0, 0.0, 0x1.fb3c816e1c666p-606, 0.0, 0.0,
     0x1.e1372736cb0eap-818, 0.0, 0.0, 0.0, 0.0, 0x1.c47d7dafc179cp-327,
     0x1.9da45c9d58a68p-624, 0.0, 0x1.c0a7b4b676c5fp-585, 0.0, 0x1.a302e450caa8cp-81,
     0x1.2d364f89a5bf6p-365, 0.0, 0x1.24042dbc847f5p-357, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_roundd2_kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_roundd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_roundd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
