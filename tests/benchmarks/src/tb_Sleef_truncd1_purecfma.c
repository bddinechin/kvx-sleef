/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncd1_purecfma.c --function Sleef_truncd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.ddf119e899b74p-64, 0.0, 0.0, 0x1.b45324c4db095p-122,
     0x1.1dece2dc7b68cp-592, 0x1.d3217bfec8b83p-395, 0x1.b3dac7cb4b455p-196,
     0x1.d970c34707675p-639, 0x1.ad0c50bdc1f6fp-663, 0x1.88828eabb1865p-679,
     0x1.77dace04a82eep-611, 0x1.756583e1c2012p-378, 0x1.c1193ca3e3c0cp-288, 0.0,
     0x1.9e7af5e507b1ep-962, 0x1.173faaf8efcc4p-824, 0x1.e2ed700bf6748p-350, 0.0,
     0x1.68ec01d757769p-167, 0.0, 0x1.e622288270b7fp-201, 0.0, 0.0,
     0x1.99d0512152298p-310, 0x1.5637481fb9688p-939, 0.0, 0.0, 0.0,
     0x1.9fe65dbaf44ecp-866, 0x1.59268d0c411a8p-658, 0x1.29d012d69934fp-353, 0.0, 0.0,
     0.0, 0.0, 0x1.19069f4cba9cp-34, 0x1.317b9976cce5fp-692, 0x1.7306138ba639cp-569,
     0x1.1eb7552278608p-453, 0x1.cdf529173f05cp-807, 0x1.90621cff5a3f4p-732, 0x1p0,
     0x1.845d685c4861cp-984, 0x1.8720af84c9022p-614, 0x1.d69ebfe15bc2ep-881,
     0x1.82018c00ccca5p-720, 0x1.31e20646eb7e7p-50, 0.0, 0x1.d1aea23449a6p-640,
     0x1.cf09d4757e824p-232, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0x1.3a491f1671d08p-527,
     0x1.2a31d9ed59945p-362, 0.0, 0.0, 0.0, 0x1.36abbd299322dp-814, 0.0,
     0x1.e4d1dd28a8a3fp-719, 0.0, 0.0, 0x1.aa5f906e5c366p-632, 0.0,
     0x1.f10b7d223f916p-86, 0.0, 0x1.ae585ebcede54p-888, 0x1.134a2057a55b5p-94,
     0x1.797e579d3fdc4p-80, 0x1.20f6c5b3b1a09p-401, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bc5f5181711c9p-42, 0.0, 0x1.89fb78c90c8e1p-623, 0.0, 0x1.58268e590ea9ep-995,
     0.0, 0x1.bf8e27f06569bp-853, 0.0, 0.0, 0.0, 0x1.681a3574999bcp-796, 0.0, 0.0,
     0x1.fc607652c1901p-478, 0.0, 0x1.6908c7a12382ap-99, 0x1.9c10426bb666ep-120, 0.0,
     0.0, 0.0, 0.0, 0x1.a3b6626dafc3dp-141, 0.0, 0.0, 0x1.943d5c824befep-384, 0.0,
     0.0, 0.0, 0.0, 0x1.fcdcf9d32c067p-775, 0.0, 0x1.3260ad2b24253p-397, 0.0, 0.0,
     0x1.500ab8dda105bp-382, 0.0, 0.0, 0.0, 0.0, 0x1.182b31f9fa636p-790,
     0x1.deef7fc5c87c4p-291, 0.0, 0.0, 0.0, 0x1.2f8f6c1d509e7p-117,
     0x1.765671592c46ap-706, 0x1.bbd152557026dp-209, 0.0, 0.0, 0x1.534f81535be11p-111,
     0x1.f8c666ea48b68p-611, 0x1.ad7d3943ad585p-623, 0.0, 0.0, 0x1.eff86d328bd52p-120,
     0x1.31d725dd7bd9cp-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9157d26b1ce79p-54, 0x1.501c0af7b2985p-53, 0.0, 0x1.4c3597c0a2f67p-574, 0.0,
     0x1.456be13d8f0a3p-726, 0.0, 0.0, 0x1.2a2520a676d75p-579, 0x1.1e4771a0123c1p-441,
     0x1.250a535284986p-513, 0.0, 0x1.867dad448c64p-532, 0.0, 0.0,
     0x1.660a7580ef188p-216, 0x1.2a583756b4d61p-581, 0x1.ee1a120233fe4p-478,
     0x1.c299dd1286ee6p-862, 0.0, 0x1.dd3df334c5107p-499, 0x1.24abfd1adbebbp-450,
     0x1.18fad8a06ce2fp-937, 0.0, 0.0, 0x1.4c1606f52ca57p-289, 0.0, 0.0,
     0x1.3c572d093ee23p-507, 0x1.e2c7b7735264cp-814, 0.0, 0x1.2182b13b7569ap-489,
     0x1.114a4b080af25p-13, 0x1.45aba0771fa38p-422, 0x1.d7bf03093a7f4p-536,
     0x1.89e3aa392225bp-403, 0x1.a858945ee945ap-314, 0.0, 0x1.a7871b3cbd25p-164, 0.0,
     0.0, 0x1.7658639189149p-15, 0.0, 0.0, 0.0, 0x1.6844b8e3ef4acp-257, 0.0, 0.0,
     0x1.19c82aa39a9a9p-774, 0.0, 0x1.de1af05bb1b2dp-248, 0.0, 0x1.db99e91e42b2p-989,
     0.0, 0.0, 0x1.944d40265801p-150, 0x1.49f505b774d4p-54, 0x1.448b9e8d5a584p-711,
     0.0, 0.0, 0.0, 0x1.c9d59765f5249p-429, 0.0, 0.0, 0.0, 0x1.e3cd964053ddep-921,
     0.0, 0.0, 0x1.82f56cb45b7dfp-781, 0x1.188fa523fc27ep-391, 0x1.ff9c6e37021p-736,
     0.0, 0x1.7bbfe79cb5e6bp-436, 0.0, 0x1.355afc078c723p-674, 0x1.76f2074f2a7dp-65,
     0x1.1f5cd51a3d613p-772, 0.0, 0x1.ab1e10170aefp-531, 0x1.6569c3b1fd1aap-892, 0.0,
     0.0, 0x1.7eb364bf2ea07p-303, 0x1.0c0efaa6996b3p-130, 0.0, 0.0,
     0x1.78234f70a1cb9p-394, 0.0, 0.0, 0x1.e17cb62e2f0eap-43, 0x1.37b511c061c63p-703,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53c6cdb033be4p-281,
     0x1.bac974c345595p-591, 0x1.0b52056fce4b2p-178, 0x1.b49cbf0f4a16bp-870,
     0x1.3032e47e2b4e9p-40, 0x1.ce4e69863d78p-936, 0x1.3c04906066222p-35,
     0x1.e8dcb7eb37163p-506, 0.0, 0.0, 0.0, 0x1.756ee90fe519p-911, 0.0, 0.0,
     0x1.974061a635b59p-564, 0.0, 0x1.00451b392a5b8p-712, 0x1.904c6e1a7e15fp-489, 0.0,
     0.0, 0x1.6953f0be1cdf8p-521, 0x1.7e43b6b3ec8dcp-353, 0.0, 0.0,
     0x1.1d1e9d8c85244p-720, 0.0, 0.0, 0.0, 0x1.99e73829c4782p-337, 0.0, 0.0,
     0x1.08e41b4c546cbp-369, 0.0, 0x1.e564775e8333cp-133, 0x1.f423362473839p-285, 0.0,
     0.0, 0x1.8ddc774c47403p-637, 0.0, 0.0, 0x1.2dedb0e7fb5e9p-895, 0.0, 0.0, 0.0,
     0x1.67203472716dep-821, 0.0, 0x1.d56227e7e059ep-651, 0.0, 0.0,
     0x1.03e2f5aeb2847p-254, 0.0, 0.0, 0x1.40963ddc5e831p-673, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6c07006530168p-949, 0.0, 0x1.6a41b49e0298ap-512,
     0x1.b1bb9ef3be5fep-611, 0.0, 0x1.6c466ba996acp-981, 0.0, 0.0, 0.0, 0.0,
     0x1.a8f6a499a1955p-616, 0x1.3826ec67d4dc2p-545, 0x1.8a483f0fbb82ep-690, 0.0,
     0x1.1e74086e5102fp-146, 0x1.28156d9e2afbdp-708, 0x1.5227ee3f5b384p-436,
     0x1.e807456ea290dp-608, 0.0, 0x1.2454af568cdb1p-663, 0x1.c6aa8da4e0d7fp-538,
     0x1.d45e6df6f9156p-140, 0x1.b3c58101acc12p-847, 0x1.e3824e344063p-337,
     0x1.7d670325d22dfp-202, 0.0, 0.0, 0x1.403775c2dbc1bp-886, 0x1.ac23428345af8p-383,
     0.0, 0x1.3abe8e74af9a9p-987, 0x1.cc1563ecf45ebp-198, 0.0, 0x1.140dffe95bcfp-295,
     0x1.0a5a150b24af5p-388, 0x1.5614a41662a7ap-944, 0x1.290eff18014dp-589,
     0x1.97c3a7835198fp-569, 0.0, 0x1.7a0961629056ep-416, 0x1.69805cb5f633p-6, 0.0,
     0.0, 0x1.5666bcbe518a9p-462, 0x1.418cca66ccb8cp-215, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc6882433ed5bp-931, 0.0, 0.0,
     0x1.8e7f87c3e8138p-682, 0.0, 0x1.5e545d9b74ed3p-475, 0.0, 0.0, 0.0,
     0x1.0413bff48ad93p-579, 0x1.0fb4f134d2d11p-897, 0.0, 0.0, 0.0,
     0x1.0454be2138d4bp-123, 0.0, 0x1.b043de587bb2ep-526, 0.0, 0x1.cba024f089038p-90,
     0x1.b407e429918b2p-413, 0.0, 0.0, 0x1.f9045a3ce3b69p-54, 0x1.cccec08b1a416p-322,
     0.0, 0x1.3dfe3db0a2dedp-909, 0x1.b6f73de6a2651p-880, 0.0, 0x1.7e58cc049f7ep-620,
     0.0, 0.0, 0x1.daa4d977bd988p-767, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.30f81d3842117p-703, 0x1.25c87363218ebp-457, 0.0, 0x1.1994bb510a0f6p-338,
     0x1.4c220cc6e591p-956, 0x1.8d1ee98dba2b3p-299, 0x1.0094699bf4826p-696,
     0x1.a3f18dccb836ap-1002, 0.0, 0x1.c3b6f0c931c69p-317, 0x1.209f916c1d1a6p-169,
     0x1.8362dbcca52adp-847, 0.0, 0.0, 0x1.a13c1f563b3dcp-552, 0.0, 0.0, 0.0,
     0x1.4a1648aed594cp-950, 0x1.59d9808d640e3p-394, 0x1.756b03c856d74p-927,
     0x1.edb19207d6a51p-629, 0.0, 0.0, 0.0, 0x1.d8475162cde85p-119, 0.0,
     0x1.0845acdc16b3bp-18, 0.0, 0x1.8df032dffe3ecp-461, 0.0, 0x1.4ed6e9eb8b631p-144,
     0x1.38ecaba06f8c8p-178, 0.0, 0x1.8e1e71de42cd2p-274, 0.0, 0.0,
     0x1.bce6342716f21p-190, 0.0, 0x1.15a9718130fa4p-966, 0.0, 0x1.4a51af2f259c3p-931,
     0x1.cb16dc162221ap-1013, 0.0, 0x1.58be3004214ep-782, 0x1.2ce0b4f0ebafep-799, 0.0,
     0x1.bfa5d6892dc61p-252, 0.0, 0.0, 0.0, 0x1.425e7a86a34f9p-410,
     0x1.039def171f4cp-1012, 0.0, 0x1.3f0cba85cbf12p-42, 0.0, 0.0,
     0x1.4ce52693fddcp-272, 0x1.1c782dded9573p-771, 0.0, 0x1.eeb2aade937f4p-441,
     0x1.a26733d4ddae7p-198, 0x1.01b9c45dc2b66p-669, 0.0, 0x1.4e3a6568aaed3p-166, 0.0,
     0x1.070b40e354828p-51, 0x1.7be85f281d789p-997, 0x1.9e13cfc8ebf3cp-311, 0.0,
     0x1.fb65d6fc36dcbp-189, 0.0, 0.0, 0.0, 0x1.4315a5a702fa8p-211, 0.0, 0.0, 0.0,
     0x1.3eddb7ff5d22fp-186, 0x1.9f6452cf0789ep-662, 0x1.f2fe3fd36d4b8p-183, 0.0, 0.0,
     0.0, 0x1.16087f9996167p-860, 0x1.03c66c01bfc6ap-951, 0.0, 0.0,
     0x1.52a7a63d1a8dbp-340, 0x1.663082f1ce754p-832, 0.0, 0x1.6e462e199c5abp-201,
     0x1.70efa850976c3p-194, 0x1.8ec19c39b6bd8p-712, 0.0, 0.0, 0x1.78469d5d89fa9p-243,
     0.0, 0.0, 0.0, 0.0, 0x1.396c61a8e4978p-656, 0.0, 0x1.7f5330e751d1p-639,
     0x1.b2eae597e75c7p-166, 0.0, 0x1.3d74ea2cac98ep-912, 0.0, 0.0, 0.0, 0.0,
     0x1.6c6392161edccp-626, 0x1.0ca077e456129p-338, 0.0, 0x1.1b81a2dff74ep-372, 0.0,
     0x1.f790b98e24d82p-460, 0.0, 0.0, 0.0, 0.0, 0x1.029da96e389b3p-603,
     0x1.3a100311448a3p-715, 0.0, 0.0, 0x1.274033441313cp-202, 0x1.65e2ae85b8ed7p-452,
     0x1.e1a51a7a68fbdp-727, 0.0, 0x1.a3698fcfef688p-562, 0x1.d38ca7c7876fdp-893, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48aada9c6f594p-570, 0x1.e19b05f5df535p-111, 0.0,
     0.0, 0x1.18a91b0713155p-403, 0.0, 0.0, 0x1.1ba8310c22d26p-829, 0.0, 0.0,
     0x1.f72511b1cf271p-897, 0x1.8b7fe59117b09p-687, 0x1.e9d5ff6dfd04ep-701, 0.0, 0.0,
     0x1.242eb5fb7f934p-1007, 0.0, 0x1.e2119044c7721p-147, 0.0, 0.0,
     0x1.3e68e63ae53d9p-117, 0.0, 0.0, 0.0, 0x1.c876c87bd0a4bp-40,
     0x1.eddaa8931e51ap-686, 0.0, 0.0, 0x1.a13fe83901d6fp-312, 0x1.a5f29f0031a69p-44,
     0x1.3dd3b0f7e20b6p-778, 0x1.8e2805eb20d67p-918, 0.0, 0.0, 0.0, 0.0,
     0x1.95cfa67172e5cp-912, 0.0, 0.0, 0.0, 0x1.fee252bd3b7ep-795, 0.0, 0.0, 0.0,
     0x1.46e6a28ea8b88p-240, 0x1.eb3ce8908a40ep-420, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4598d5ae8eb69p-808, 0x1.c20f059a059dcp-308, 0x1.427af896ee1d4p-62, 0.0, 0.0,
     0.0, 0x1.b6435bd5a31f5p-1003, 0x1.16f462c7a37bep-911, 0x1.5b208d31d8a79p-87,
     0x1.55e74182e3d1cp-143, 0x1.c8626d2b75327p-447, 0x1.f9af20ce6427bp-352, 0.0, 0.0,
     0x1.adebcb416591bp-8, 0x1.a1ebab94d55cep-676, 0x1.7f3507a7e0d11p-711,
     0x1.1dbacd3fd459ep-364, 0x1.36f68705fb608p-611, 0.0, 0.0, 0x1.4c3e880966894p-367,
     0.0, 0.0, 0x1.bf74fb0086f65p-954, 0x1.fbfa030e3f4e3p-359, 0x1.ff1e2e5f01832p-349,
     0x1.7c02620c041e6p-223, 0.0, 0x1.8edbfc576dc0dp-487, 0x1.7ab2a0e2865abp-499,
     0x1.a1d745fc6c88bp-900, 0.0, 0x1.38c302e192f3p-750, 0.0, 0x1.5577bc088c91fp-904,
     0x1.16144fc324d14p-719, 0.0, 0x1.d2bbde478b0bp-656, 0.0, 0.0, 0.0,
     0x1.ec59e431a90f8p-51, 0x1.604a73137e3d3p-721, 0x1.4906b8b456be6p-193,
     0x1.de5ef175b7245p-746, 0.0, 0x1.a743f7165de56p-648, 0x1.230535aca1a97p-756, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7a6923001b64p-725, 0.0, 0x1.9f8aa9b5e8982p-1001, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9034ab7d727d4p-941, 0.0, 0.0,
     0x1.c2ede50bcd28p-752, 0x1.a4e6df6156a1bp-736, 0x1.44b4caddc11d8p-858, 0.0, 0.0,
     0x1.7bf8fcad9634p-301, 0.0, 0x1.0ef6ecca7d7ap-119, 0.0, 0x1.529f4e8408f4bp-43,
     0.0, 0x1.0df9d4b995064p-403, 0.0, 0.0, 0x1.19d5f6ed64059p-643,
     0x1.e6c21ebbab2f1p-544, 0.0, 0.0, 0.0, 0x1.8dfbb612c1b38p-968, 0.0,
     0x1.7264746d87e5ap-2, 0.0, 0.0, 0x1.dc9233816d206p-462, 0.0,
     0x1.5ee4287fb9ed4p-492, 0.0, 0.0, 0x1.8845877128409p-77, 0x1.d5c86c45e506bp-866,
     0.0, 0.0, 0.0, 0x1.b935525fcffb8p-28, 0x1.77978a0caf5d9p-574,
     0x1.f0a1edd5f5b8ep-471, 0x1.de374be85b4bp-216, 0x1.e2b50d4bd8f3dp-303, 0.0,
     0x1.8a63615ba6db9p-55, 0.0, 0.0, 0x1.28796fea4a405p-292, 0.0,
     0x1.083d253a8c4f3p-133, 0x1.a885d08166d6p-631, 0x1.ef5ca7427034p-465, 0.0,
     0x1.1972d695d3badp-299, 0.0, 0.0, 0x1.5fa0e8fb879bap-976, 0.0,
     0x1.fc57fe3e5e2b9p-43, 0x1.3fa44ce1b7d0fp-482, 0.0, 0.0, 0x1.29ac5de2ce534p-866,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc1a433f5488cp-915, 0.0, 0.0,
     0x1.aefcb6397628cp-557, 0.0, 0x1.146a9b833611fp-327, 0x1.17a3ef22d6867p-371, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4dfd736e821cp-47, 0x1.9c3ff4fc9530bp-235, 0.0,
     0x1.a98c484001df2p-770, 0x1.02f0e825bb28ap-657, 0.0, 0x1.9c224276b6d11p-852,
     0x1.e0f45c5530063p-740, 0x1.7eb7b91a9ec04p-556, 0.0, 0x1.23c00b0d04d3dp-147, 0.0,
     0.0, 0x1.b5ebd2029d3dep-700, 0x1.02e26c0138d06p-807, 0.0, 0.0,
     0x1.fae62792511aep-409, 0.0, 0.0, 0x1.8b6bf63c2dbd8p-289, 0.0, 0.0, 0.0,
     0x1.094b86a3d1ebdp-46, 0x1.e9fb7b960b2d5p-936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d21bfb5b981cp-821, 0.0, 0x1.ee7e5bf00b80fp-210, 0.0, 0x1.647935bf2b887p-2,
     0.0, 0x1.bb8100fc36ae9p-583, 0x1.b57c41eb7c642p-480, 0x1.431292ad1e20cp-578,
     0x1.0e1e56a262205p-651, 0.0, 0x1.8678bbb509bc2p-920, 0.0, 0x1.1b0f362dafd2ap-323,
     0x1.1622a5be77b2ep-650, 0x1.cbd797d2e567fp-197, 0x1.ab737a91cc406p-731, 0.0,
     0x1.380ae6f4eed47p-413, 0x1.e60844339156cp-745, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac4527e456a94p-684, 0x1.6080d44d09328p-63, 0x1.2267dfd8306cbp-437, 0.0,
     0x1.91d6ef5852166p-798, 0x1.208897373dbc3p-115, 0x1.27ef7e3261cb5p-185, 0.0, 0.0,
     0x1.c8af52b0f7dep-291, 0x1.054bb52759c5fp-377, 0x1.8a0aeb1ef88b8p-508,
     0x1.e761e342f2c8ap-88, 0x1.bbeade5e2f512p-178, 0x1.cd66f794e6557p-447, 0.0,
     0x1.e7090ee8faba6p-832, 0x1.df191d140ca96p-467, 0.0, 0.0, 0.0,
     0x1.c38d3d3cadb16p-362, 0.0, 0x1.39f655e7a7acbp-167, 0.0, 0.0,
     0x1.30398d360216fp-1006, 0.0, 0x1.2318cc59187fcp-703, 0.0,
     0x1.3546bddc2d9bfp-733, 0.0, 0.0, 0x1.c96dffb103e5p-818, 0x1.6c0525b52f413p-976,
     0x1.807243fd85e34p-929, 0x1.a307fbd9fb901p-727, 0.0, 0.0, 0x1.29dcc80063c06p-236,
     0x1.b2d27e82f19aap-836, 0.0, 0x1.380660c76243dp-636, 0.0, 0x1.f7342f0ca059cp-405,
     0.0, 0x1.b800ea2ff6ffdp-693, 0.0, 0x1.a396431f9ee04p-111, 0.0,
     0x1.63f63f321be97p-563, 0.0, 0.0, 0.0, 0x1.ffb343a5a97f5p-14, 0.0,
     0x1.622a908678664p-187, 0x1.d61780b68874fp-134, 0.0, 0.0, 0x1.828b444bf2d95p-425,
     0x1.108d4634df9c8p-52, 0.0, 0.0, 0x1.9b2c126c545b6p-190, 0x1.1784c89c7642p-398,
     0.0, 0.0, 0x1.a32ecd4b08bb2p-157, 0x1.d59cbcad41bc3p-359, 0.0, 0.0,
     0x1.4b1600414c6eep-450, 0x1.d52bd6cc10c2fp-835, 0.0, 0.0, 0x1.49200611d6119p-728,
     0x1.1171ad9fb908bp-534, 0.0, 0x1.00ed57575d887p-109, 0x1.015acf6d44cd4p-536, 0.0,
     0x1.af53d2524756p-440, 0.0, 0x1.c693595990ef4p-293, 0.0, 0.0,
     0x1.b09bb609e81b7p-93, 0.0, 0.0, 0.0, 0.0, 0x1.348ed32163ap-275, 0.0, 0.0,
     0x1.fa522e7148253p-158, 0.0, 0.0, 0x1.84e3e2773e3bfp-626, 0.0,
     0x1.063299bbe7f14p-269, 0.0, 0.0, 0x1.32e307cbcbdacp-167, 0.0, 0.0,
     0x1.bfc7d3ce9dfe3p-291, 0.0, 0x1.8f51fc2bd3f76p-880, 0.0, 0x1.e7276c72d1b26p-708,
     0.0, 0.0, 0x1.2f843ad462ee2p-7, 0x1.7770a7e89f8a8p-757, 0x1.eb29e1d6db57bp-735,
     0x1.ca1b2b857507fp-742, 0.0, 0.0, 0.0, 0x1.122a09ccafe2p-354, 0.0, 0.0,
     0x1.ece959af810dp-21, 0x1.03795d1c26d6p-820, 0x1.b33298b576cccp-1022, 0.0, 0.0,
     0x1.8fb7c67793eb7p-108, 0.0, 0.0, 0.0, 0x1.7867bb6b37f43p-758,
     0x1.6df80da05958fp-75, 0.0, 0.0, 0.0, 0x1.3332d7c73ccb2p-202, 0.0, 0.0,
     0x1.bfad0f1aea093p-400, 0.0, 0.0, 0x1.2b7823760654ap-594, 0.0,
     0x1.123014fe4a419p-670, 0.0, 0x1.94560c895ef94p-246, 0.0, 0.0,
     0x1.fa00394ff825dp-394, 0.0, 0.0, 0x1.74ccf312f1dbp-969, 0.0,
     0x1.efba0b9cd94a4p-262, 0.0, 0x1.ec6427c88142ap-655, 0x1.db1cc7cc0124cp-909,
     0x1.8ff526b3e4ea4p-365, 0x1.2a49ed365fccdp-557, 0x1.14f7471cc1ce6p-605,
     0x1.0f260daf8050dp-918, 0x1.2b62bf88843dep-277, 0x1.887350df68512p-4, 0.0,
     0x1.4224403adff85p-515, 0x1.dc725ddf89df3p-509, 0x1.ee6a3778efc7bp-428,
     0x1.acd758831708dp-428, 0x1.7064c82085b65p-928, 0x1.a9fe511835dc2p-941,
     0x1.57b05f6a8678fp-582, 0x1.843d6dbc1ebe3p-188, 0.0, 0.0, 0.0, 0.0,
     0x1.1bdbfb714d63ep-243, 0.0, 0.0, 0.0, 0x1.e1d601ace93acp-455,
     0x1.ddf357c9cf6e8p-504, 0.0, 0.0, 0x1.6905a6d5a30eap-278, 0.0,
     0x1.f8cdef9ea4542p-551, 0x1.0ee49fdf5165cp-613, 0.0, 0.0, 0x1.ee5b5c49e95edp-415,
     0x1.eb2156000c89cp-634, 0x1.3b6ee1fdd729dp-258, 0x1.eff1e72c8ab51p-134, 0.0,
     0x1.326ceb533b739p-560, 0.0, 0x1.a8ef1d7e06bacp-920, 0x1.76aa25b146928p-982,
     0x1.e85370d02698p-8, 0x1.e6da2d6ba42acp-808, 0.0, 0.0, 0x1.94faed76a4788p-472
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
            tmp1 = Sleef_truncd1_purecfma(tmp0);
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
    printf("Sleef_truncd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_truncd1_purecfma bench acc %la\n", global_bench_acc);
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
