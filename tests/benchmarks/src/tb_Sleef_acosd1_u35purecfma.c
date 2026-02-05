/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd1_u35purecfma.c --function \
 *     Sleef_acosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.db4f8eeff58e2p-916, 0x1.48b22d3e2cbc8p-49, 0x1.67d9579299a98p-756, 0.0,
     0x1.d3cc3aed4400ap-740, 0x1.400a999cd79f9p-961, 0x1.e6a494747fc6cp-63, 0.0, 0.0,
     0.0, 0x1.2a56526e8c131p-368, 0x1.7de68ae7e0a68p-170, 0x1.3d435e6c2a3d9p-31, 0.0,
     0.0, 0.0, 0x1.f8302a8a145b2p-74, 0x1.2b49981996462p-300, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b4fc9c1d426f5p-642, 0.0, 0x1.074bad22b5d7ep-73, 0x1.da88d691d3ba1p-612,
     0x1.bc43af85fade5p-793, 0x1.0ca1a32410553p-1015, 0.0, 0x1.d3755a936bd47p-38, 0.0,
     0.0, 0x1.c896f725a98b2p-798, 0x1.b0be23561f519p-483, 0x1.ef02724b483a2p-650, 0.0,
     0x1.0163df625cb28p-354, 0.0, 0x1.daf7b534fd03p-945, 0x1.4a5ad5ed1e096p-135,
     0x1.c201884931502p-973, 0x1.252a97ed05a4cp-861, 0x1.47ccfe0bdc4dap-488,
     0x1.1edce5c49d1d5p-252, 0.0, 0x1.52ef5896fca42p-399, 0x1.ddbdac5afbf71p-25,
     0x1.dd719ec1c4bbcp-908, 0.0, 0.0, 0x1.f4ba3dbe7d1dbp-286, 0.0,
     0x1.46de9c7a2404dp-613, 0x1.90e788baf620dp-831, 0.0, 0x1.4c8d1a7a4cae6p-854,
     0x1.7d4aa96904c64p-407, 0.0, 0.0, 0x1.87ef96cc43827p-888, 0x1.eb5b18a6691c8p-542,
     0.0, 0x1.5871b0c9a762dp-379, 0.0, 0x1.5ec8474c3b936p-203, 0x1.16a381efb5efdp-573,
     0.0, 0x1.566b66da4f8dcp-175, 0x1.20834e16f42c4p-351, 0x1.9f9b33bca8a51p-972, 0.0,
     0.0, 0x1.373e44285ac4ap-815, 0x1.1967eabad45dap-116, 0.0, 0.0,
     0x1.40f4af241570dp-856, 0x1.9b11750053d72p-814, 0.0, 0x1.f4baa670ce58ep-904, 0.0,
     0x1.41fd22cb3488dp-637, 0x1.5cf595385e252p-173, 0.0, 0x1.055134ceaf03dp-282,
     0x1.c7ef7a27b554ap-113, 0.0, 0x1.a56d74a35031p-680, 0x1.d354facb63857p-938,
     0x1.3d3f4b9139b3ap-353, 0.0, 0.0, 0x1.99c1f6c70b1edp-102, 0.0,
     0x1.6661f044b1dd8p-830, 0x1.64f400b0e1444p-425, 0x1.33f75b8d3b84dp-715, 0.0, 0.0,
     0.0, 0x1.3762468db74bap-254, 0.0, 0x1.7b9a7f8a4050dp-499, 0x1.fc7aee13aade3p-848,
     0.0, 0x1.3b8568d45bf64p-404, 0x1.1b74b5e4f386ap-535, 0x1.94e8a219c91bep-795,
     0x1.244fd5d997ae7p-230, 0x1.5716d6fc6ffddp-777, 0x1.ed8eaf860fd0bp-887,
     0x1.aa2fab47ecdccp-815, 0.0, 0x1.5348e28b3dff8p-477, 0x1.791c252dc651ap-916, 0.0,
     0x1.5d3db47f4eca2p-732, 0x1.886127b04136ap-838, 0x1.335f79cab5116p-363, 0.0, 0.0,
     0x1.6d1d0d8976347p-761, 0.0, 0.0, 0x1.35fd0f64e3473p-687, 0x1.ce3643a8a3a73p-756,
     0.0, 0.0, 0x1.20061ec3d1bbap-102, 0.0, 0.0, 0.0, 0x1.26cf57b66eafdp-61, 0.0, 0.0,
     0.0, 0x1.7c1ac2308c2ecp-472, 0.0, 0.0, 0x1.c53ba597bd0d1p-405, 0.0, 0.0,
     0x1.f5a2eb52dfd7fp-571, 0x1.117c7ce9a2124p-80, 0.0, 0.0, 0x1.81d849f7e33c7p-278,
     0x1.121858840b9fep-605, 0x1.7e386e156305dp-50, 0.0, 0x1.54e4ee507904p-160,
     0x1.475120f5b480bp-230, 0x1.f0b4937571e64p-351, 0x1.3f6de786849d5p-649, 0.0,
     0x1.1486ae845ad95p-41, 0.0, 0x1.2f1ac36e9ac5dp-133, 0x1.02e270e24a5d3p-246, 0.0,
     0.0, 0.0, 0.0, 0x1.6185a7dc68635p-839, 0.0, 0x1.01cc309186d16p-377,
     0x1.c8508aa315842p-109, 0.0, 0x1.dc45588cb5946p-758, 0.0, 0x1.18b06f6806785p-799,
     0x1.6c125f322305cp-156, 0.0, 0.0, 0.0, 0.0, 0x1.e05cc58e92805p-656,
     0x1.f0b188c4ce451p-1009, 0.0, 0x1.bef5fc18b2c08p-345, 0.0,
     0x1.5ed904db4cd36p-444, 0x1.830fd540f45a1p-725, 0x1.dba4de869a257p-127,
     0x1.dbcb888bf71e3p-474, 0.0, 0x1.d98c4be429999p-573, 0.0, 0x1.957e76da2e5aep-201,
     0.0, 0.0, 0.0, 0x1.5d334f79fed76p-428, 0x1.b53ee73323b8dp-251,
     0x1.06c30ccc47b28p-562, 0.0, 0.0, 0x1.92fb1879b3518p-810, 0x1.6b398bd14daacp-581,
     0.0, 0x1.e043a38ef6105p-201, 0.0, 0.0, 0.0, 0x1.5b34e73f0f1e7p-484, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f9c725dbd90c5p-252, 0x1.bd9530377bfcfp-632, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f0d9ae47f06bep-552, 0.0, 0.0, 0x1.4b87255441347p-943, 0.0,
     0x1.89a11926858f5p-883, 0.0, 0.0, 0x1.8fac35e3de209p-304, 0.0,
     0x1.a3c1ba642a09ep-517, 0x1.92c97f556b3a7p-1019, 0x1.f40d2b9191f69p-1010,
     0x1.3ec60cf5e6daep-697, 0x1.20d6bcee4de21p-891, 0.0, 0.0, 0x1.e8229463e11bbp-799,
     0x1.65be043f9f61ap-822, 0x1.43f943ccf753ap-608, 0x1.b456680ad7d47p-736, 0.0, 0.0,
     0x1.227260065d2d4p-5, 0.0, 0.0, 0x1.f3e9ffc2c45aap-691, 0x1.8069ea3ac55fp-128,
     0.0, 0x1.e89b6688cede1p-1013, 0x1.88cbe9d595dbp-92, 0x1.617e00cadde82p-739, 0.0,
     0.0, 0x1.c94ca82c72a3dp-200, 0x1.0f09141354ba4p-262, 0.0, 0x1.dda2737e9dcd7p-750,
     0.0, 0.0, 0x1.2910af86de644p-947, 0.0, 0.0, 0.0, 0x1.ab174f6d85d5fp-942, 0.0,
     0x1.9d93bbee8bedbp-496, 0.0, 0.0, 0.0, 0.0, 0x1.5cb75fe7db1f4p-270,
     0x1.93a7b4c53736fp-162, 0.0, 0x1.e86193311eb7ap-352, 0x1.3707eeb1cfe15p-111,
     0x1.7a2bc84300845p-657, 0.0, 0x1.6c0c179a75b6p-1012, 0x1.aac5447720a9p-640,
     0x1.dcefba6bcba8dp-673, 0.0, 0.0, 0x1.d8e22301af96fp-609, 0x1.3c268609c03fcp-414,
     0x1.867bb6c4c7c7p-708, 0x1.0b414078aaf04p-856, 0.0, 0.0, 0x1.1bd17839ec751p-983,
     0.0, 0x1.6a25930605321p-290, 0.0, 0x1.c8339318658fep-119, 0x1.6d20d4d51407bp-230,
     0.0, 0.0, 0x1.b6365338f3eadp-112, 0x1.47770badf671p-440, 0.0, 0.0, 0.0, 0.0,
     0x1.567277291c03cp-804, 0x1.e0d33d12cc19fp-927, 0.0, 0x1.c0312af03a97dp-332, 0.0,
     0x1.363c451cfdddbp-723, 0.0, 0.0, 0x1.b76c945a8d0acp-624, 0.0, 0.0,
     0x1.cb14591279962p-962, 0x1.6c412ca6139d3p-198, 0.0, 0x1.3fe1ef599372cp-340,
     0x1.533f4a223754cp-409, 0x1.489da81da286dp-493, 0.0, 0.0, 0.0,
     0x1.ea36fc51da8ccp-8, 0.0, 0x1.c64ed98dff5e2p-824, 0.0, 0x1.d1bdcd228c678p-300,
     0.0, 0.0, 0.0, 0x1.ec18ceb6724cep-417, 0x1.288df9a9e3e1cp-951,
     0x1.3d0044fddd1acp-769, 0.0, 0.0, 0x1.b590ddf63c298p-444, 0x1.70902ef42f5e8p-720,
     0x1.9fe369b4bd48cp-81, 0.0, 0x1.a9af99a17d2fap-791, 0x1.c3a28aafaa5ap-594,
     0x1.ba56d860f17b6p-928, 0.0, 0x1.92de90c888e42p-271, 0x1.34ac3f44b2eddp-1017,
     0.0, 0x1.6be182477dc0ap-576, 0x1.3441685ab7479p-1013, 0.0, 0.0,
     0x1.2c6774b470e46p-767, 0x1.a9bb282fdfd85p-452, 0.0, 0x1.8ef357b2fb753p-838, 0.0,
     0x1.c6a8a1d966019p-393, 0.0, 0.0, 0.0, 0.0, 0x1.3c779800af6b5p-315, 0.0, 0.0,
     0.0, 0x1.8aa6ad8a5a171p-953, 0x1.e186bd0fe0378p-66, 0.0, 0.0,
     0x1.6723b1b17dd86p-138, 0.0, 0.0, 0x1.29cd110404b4p-1007, 0x1.6334a5ae5db36p-429,
     0.0, 0.0, 0.0, 0x1.eadcc88a44445p-102, 0.0, 0x1.af31358ed15f1p-942, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7386f01f5bf01p-265, 0x1.b2245bc3babc9p-850, 0.0,
     0x1.7af80dba81e6p-51, 0x1.8978a98a4bd86p-692, 0x1.02ca42918bdebp-215, 0.0, 0.0,
     0.0, 0.0, 0x1.cc43b4965597bp-340, 0.0, 0.0, 0x1.51d46523f0456p-504,
     0x1.d76a1ed5f2c79p-643, 0x1.aa100a518e545p-30, 0x1.af266c6142b4ep-153,
     0x1.1ff029eb94a56p-556, 0x1.f96330871a1b4p-780, 0x1.11731c29cf549p-284, 0.0, 0.0,
     0.0, 0x1.fb56b126b69b2p-887, 0.0, 0.0, 0.0, 0x1.96c51b3878fc9p-566, 0.0, 0.0,
     0x1.ddca4a96630b5p-435, 0x1.22176333fc5afp-51, 0x1.29a4d177136d5p-836,
     0x1.c9aa8a689f59bp-649, 0x1.1e50c1cba4533p-597, 0x1.5175f5cbe42b2p-587, 0.0, 0.0,
     0x1.c782061f286fap-421, 0x1.1ee188ae33333p-811, 0x1.a8440ac37583ep-97,
     0x1.779488b8f02eap-63, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0696d45b3c8cp-587,
     0x1.a4e35ef77d875p-812, 0x1.a9e2b83ba884p-526, 0.0, 0.0, 0x1.89092ece35c69p-222,
     0x1.a0ee6b747086ap-988, 0.0, 0x1.714c066929e76p-776, 0.0, 0x1.cc9418db7d72bp-171,
     0.0, 0.0, 0.0, 0x1.c0daafb45fd9ap-416, 0x1.9f16eec0c75afp-178,
     0x1.f81f1b1511779p-818, 0.0, 0.0, 0.0, 0x1.2c546450eabf7p-66, 0.0, 0.0,
     0x1.41ea73be2df9dp-293, 0.0, 0x1.9596c7012aa49p-139, 0x1.13b3016ee6efap-57, 0.0,
     0x1.ea05d98eebb3dp-139, 0x1.48ecfe1784f99p-644, 0x1.d61370c3daddcp-154, 0.0, 0.0,
     0.0, 0x1.38e85a6d4b809p-532, 0.0, 0x1.0fd8cdf14cc7ep-455, 0.0, 0.0, 0.0, 0.0,
     0x1.3296e73e61854p-712, 0x1.5c759c3be389ap-793, 0.0, 0x1.c9f299deba48ap-700,
     0x1.1add567dee49fp-363, 0x1.1a4c2f2931e04p-367, 0x1.814d3d161e5cfp-822,
     0x1.b474f67913fefp-581, 0x1.3234d960d8c6p-695, 0x1.733096cf151c4p-740,
     0x1.0a59adc346c71p-78, 0x1.9505dd792b6aap-14, 0.0, 0x1.6fc5c1d853f77p-643,
     0x1.154e90945de8cp-691, 0x1.200c8c44eb6ddp-685, 0x1.818d954d23a7cp-638, 0.0,
     0x1.111184cca0393p-701, 0x1.611fd560e1227p-787, 0.0, 0x1.567897f23785cp-272,
     0x1.fb59e44345ea9p-841, 0.0, 0x1.157ddc350ad5dp-704, 0x1.ee96b7d9ec2bbp-528,
     0x1.7ac368610d28fp-579, 0x1.4db58b82e930bp-975, 0x1.370e9a7f33cf7p-167, 0.0,
     0x1.bb7f516194b27p-496, 0x1.0e1b93c3d9b26p-322, 0x1.5b1ed7cba91e9p-994, 0.0, 0.0,
     0x1.82252e253d4aep-921, 0x1.229833991d5dbp-302, 0x1.6df71147e2fcp-684, 0.0,
     0x1.f8c933d0057bfp-983, 0x1.68de76bd4ceeap-764, 0.0, 0.0, 0.0,
     0x1.122d2d92c4b12p-663, 0x1.c336776f56a7ep-875, 0x1.cb77ff050900ep-975, 0.0, 0.0,
     0.0, 0.0, 0x1.fa8a19c4c21b5p-617, 0.0, 0x1.e3d68865ff813p-495,
     0x1.f231b3e979c9p-738, 0x1.33affe025bec9p-668, 0.0, 0x1.19f0df72d8ba1p-80, 0.0,
     0x1.76b4e89f4306ap-60, 0x1.80e42575be2ccp-35, 0x1.bb1f7327bc51dp-613,
     0x1.a4a6a40c2dd3bp-869, 0x1.d885ba280fcaep-105, 0.0, 0.0, 0x1.59780f00b5feep-134,
     0.0, 0x1.9f2ab3569c566p-457, 0x1.741470cb9e2eep-444, 0x1.ac496f9649ea2p-345, 0.0,
     0x1.c7bed71956e2p-813, 0x1.743b4a6befafcp-605, 0.0, 0.0, 0.0,
     0x1.bc182b451e443p-265, 0x1.ed2b533638aep-150, 0x1.da32e0a962089p-706,
     0x1.53f6bc6fe657fp-386, 0x1.25f7cbb70a86bp-837, 0x1.b4590ed798ffcp-651,
     0x1.52a9a0eeb632bp-832, 0x1.110b9725c01bdp-831, 0.0, 0x1.0d4b746bdf65bp-690, 0.0,
     0x1.76e0c0b2f59ddp-171, 0.0, 0.0, 0.0, 0x1.c19ec5793391ap-755, 0.0,
     0x1.48f8976dec09p-352, 0.0, 0x1.2ce34484e4acep-203, 0x1.100f42a571a5bp-511, 0.0,
     0x1.6130184c46f65p-858, 0.0, 0x1.63283d97e001p-579, 0x1.dad2570b0a311p-357, 0.0,
     0x1.d52e26acc63b7p-518, 0.0, 0x1.743ca93fe5f99p-432, 0x1.db56fdc5652b5p-284,
     0x1.c92c7eab65355p-441, 0x1.0917a163dfdbdp-33, 0.0, 0x1.5a82fa3c28b2ap-15, 0.0,
     0x1.4f8efc58415f4p-142, 0.0, 0.0, 0.0, 0x1.d9154f95751d6p-932,
     0x1.31ebcb7370077p-507, 0.0, 0.0, 0.0, 0x1.4a8827c1c91d8p-181, 0.0,
     0x1.049e72c237541p-318, 0x1.eb142cdc04d4bp-239, 0.0, 0.0, 0x1.55a498e839d0ap-445,
     0.0, 0.0, 0x1.059157f07b127p-131, 0x1.2da6a48efed44p-571, 0.0, 0.0, 0.0,
     0x1.da9ba703683a9p-869, 0x1.eb3926e1a2881p-499, 0x1.8b426ef0b1c17p-967, 0.0,
     0x1.f1abb95ace58dp-948, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dfca9dc36205cp-331,
     0.0, 0x1.8311018a72892p-528, 0.0, 0.0, 0.0, 0x1.ebaea20982829p-693,
     0x1.ab69aa74151c3p-895, 0x1.3bd789743bfd1p-871, 0x1.c49c42f2ae4e7p-344,
     0x1.4867a9fd47253p-923, 0x1.1e7b49fcb4c16p-306, 0x1.a75fba4d488c9p-181, 0.0, 0.0,
     0x1.67aed29b6b455p-305, 0.0, 0x1.8b42c1836c031p-17, 0x1.455c482b672a5p-621,
     0x1.c36c9eff09b33p-488, 0x1.583b11b5d4193p-796, 0x1.316f9f3a5d963p-336,
     0x1.4e5dd41f30813p-718, 0x1.ff8fbff96bc59p-586, 0.0, 0x1.52b8509fd8bd7p-246,
     0x1.8dd35a62d23bdp-761, 0.0, 0x1.62a3d78edb117p-143, 0.0, 0.0,
     0x1.813d6ecbeff53p-514, 0x1.f8161bcb8f3aap-827, 0x1.1a3857cea17cfp-374, 0.0, 0.0,
     0.0, 0x1.1334f6445929ap-207, 0x1.c992b3988cf17p-606, 0x1.dad0aaa2f7ae2p-825, 0.0,
     0x1.db6651228f498p-713, 0x1.2c51d181e213p-96, 0x1.c800ec6fa9a7fp-86, 0.0, 0.0,
     0x1.3e17cd47a8281p-740, 0.0, 0x1.c783caacfac6fp-61, 0.0, 0x1.e7b4ea98296acp-654,
     0.0, 0.0, 0.0, 0.0, 0x1.d766e037b0ae4p-414, 0x1.d98f5e16f17bbp-457, 0.0,
     0x1.9e31d97125ffcp-790, 0x1.7c80ec04827c5p-9, 0.0, 0.0, 0x1.9e742d6abc2a6p-377,
     0.0, 0x1.cc9f6b1e7dce5p-549, 0x1.01c15dd850bb4p-810, 0x1.08996a23df427p-251,
     0x1.891bd3c487f01p-698, 0.0, 0x1.2056d9167fef8p-436, 0.0, 0x1.1ff97585e0fc3p-658,
     0.0, 0x1.08aa43034662ap-601, 0.0, 0x1.66f73beb74c6cp-562, 0x1.fd6d723f4b5eap-67,
     0x1.f7b97d742d65fp-100, 0x1.ac2a29674bd42p-286, 0.0, 0x1.16dde735a7a7ep-482, 0.0,
     0x1.db62572dd67fep-434, 0.0, 0.0, 0.0, 0.0, 0x1.2ae3a420a0c43p-628,
     0x1.67379d040797ap-302, 0x1.edee577ef5f3bp-537, 0x1.82762d05b7e26p-213, 0.0,
     0x1.37c4b3fa35cbep-9, 0.0, 0x1.250b58e49fc25p-435, 0.0, 0.0,
     0x1.6436d8b656553p-327, 0.0, 0x1.a50c906f2e9ddp-753, 0x1.084b9952986b4p-437,
     0x1.2f6705c9fa2d4p-620, 0x1.0c227ce5ca454p-345, 0x1.fd72eadd8d6c1p-108, 0.0,
     0x1.12e220d59d51ep-904, 0.0, 0x1.4be740751954ap-832, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.90083b27dc44ep-846, 0.0, 0.0, 0x1.5aaffbbbe9c67p-911, 0x1.9b30d8e1011dep-323,
     0x1.ca62a293746ebp-184, 0.0, 0.0, 0x1.f4bbabe426d29p-451, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5e8491342303dp-329, 0x1.1d059a4fd4276p-989, 0.0, 0x1.5a928c9527c9p-302,
     0.0, 0x1.ee0ca707c2eccp-1016, 0x1.471c9c61b05cbp-976, 0x1.189c71a850afep-706,
     0.0, 0.0, 0.0, 0.0, 0x1.7ce795c86e61bp-722, 0.0, 0x1.5a8866830cf8ep-153, 0.0,
     0.0, 0.0, 0.0, 0x1.e456774b8d035p-275, 0x1.d56cb7414117dp-926, 0.0, 0.0,
     0x1.00d405ded90d4p-610, 0x1.5851bcdb5e8fep-732, 0.0, 0.0, 0x1.b86ef3ddfae16p-340,
     0.0, 0x1.487c134688867p-137, 0.0, 0x1.7156fda50842p-597, 0x1.78a4d3bf79eep-657,
     0.0, 0x1.b79c99dc3baa1p-737, 0x1.83e5d5c273f07p-173, 0x1.9d5b602d533e6p-285,
     0x1.7da50ebacb0dep-663, 0x1.0aeee79bd8d25p-253, 0.0, 0x1.8bae2faf0ae87p-336, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f038e0a6dd758p-807, 0x1.f2d2968eeb3f9p-877,
     0x1.ecead16ec11f2p-341, 0.0, 0x1.3b5a1fc985bbfp-593, 0.0, 0.0, 0.0, 0.0,
     0x1.79be9d005c0afp-445, 0.0, 0x1.3f5c460b34373p-625, 0x1.587347561416fp-609, 0.0,
     0.0, 0x1.62b7564b5f1bep-366, 0x1.33f09c108bdf2p-360, 0x1.e91d985dda4abp-649,
     0x1.8a95ec11a948cp-835, 0.0, 0.0, 0.0, 0x1.41ea10cc14803p-749, 0.0, 0.0,
     0x1.c9ebe0c518fep-544, 0x1.951ae8bbde005p-62, 0x1.42b5a3d1a1a97p-805, 0.0, 0.0,
     0.0, 0x1.d84b2feb557a6p-771, 0x1.9bcabb2a75ec4p-986, 0x1.e90cd4a4a607ep-250, 0.0,
     0.0, 0x1.b1bd6e1538358p-390, 0.0, 0x1.6768fcc98bfdfp-859, 0.0,
     0x1.ab041f7cc294p-538, 0.0, 0x1.4dfefc09b131dp-15, 0x1.90281550bd82fp-334, 0.0,
     0.0, 0x1.0b3ee7de95722p-549, 0.0, 0.0, 0x1.7a9eb2ef4de6fp-1004, 0.0,
     0x1.8471c170ee0e9p-917, 0x1.1f6475c291802p-599, 0x1.ae85e5679de4fp-494,
     0x1.8efd46b396b08p-880, 0x1.9275c49b442b7p-44, 0x1.712f1954f5408p-308,
     0x1.d2fed5aacd854p-722, 0x1.ab18cc7bd44f3p-87, 0.0, 0.0, 0.0,
     0x1.8d036d0bb6ed2p-314, 0x1.0cd44229b9bfcp-150, 0x1.9b4420fcf6957p-405,
     0x1.378def75bc54bp-708, 0x1.59a77fa112d14p-380, 0x1.6c3391643c8d2p-929, 0.0, 0.0,
     0.0, 0x1.d0054e10fc32ep-169, 0.0, 0x1.738216239a85fp-920, 0.0,
     0x1.7e29f8e8e7fdap-916, 0x1.f91a8b4bcd983p-722, 0x1.e67850e4013ffp-895, 0.0,
     0x1.9fcd5e2fe0473p-161, 0.0, 0x1.d4cb0f439f545p-135, 0x1.6b98f27f852d9p-478,
     0x1.dcdb4d0e92d7ap-199, 0.0, 0x1.0d8d74f07a86cp-342, 0x1.f86025a456d33p-168, 0.0,
     0.0, 0x1.500a9cbe35661p-897, 0x1.5e85116156092p-326, 0x1.e9d1a25e72877p-436, 0.0,
     0x1.16c438d36d0c1p-953, 0x1.471c57d01827p-383, 0x1.be174b60e93dfp-827,
     0x1.6eadf445ffe15p-649, 0x1.a1c251780d0b1p-345, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e05a91a916537p-204, 0.0, 0x1.9133d05835209p-723, 0.0, 0.0,
     0x1.838234bb0442cp-549, 0.0, 0.0, 0x1.06ca4cb8664d5p-275, 0x1.2d6235aa0d092p-416,
     0.0, 0x1.13ff313b87cabp-319, 0.0, 0x1.c824d8f97ba31p-616, 0.0, 0.0,
     0x1.41c37ff2d84cbp-44, 0x1.a3dbea8f1be45p-190, 0x1.68c5edda307a4p-733,
     0x1.4b4229105cd22p-96, 0x1.9ebc374add82fp-173, 0.0, 0.0, 0.0,
     0x1.c3dcb2416b521p-378, 0.0, 0.0, 0.0, 0x1.39ae98bad460cp-184, 0.0,
     0x1.d7d5b2662376p-175, 0x1.63f323abfd72ep-599, 0x1.763c409cac35p-985,
     0x1.d61d40f34cc23p-202, 0x1.ea1dee9490b4ep-127, 0x1.63357b35d66a8p-826,
     0x1.3b0b68d76dfbfp-69, 0x1.9cd744d8e0cd1p-362, 0x1.9acee847def58p-575, 0.0,
     0x1.4780f29698dc2p-195, 0.0, 0x1.3ce10f360e3e8p-1019, 0x1.69e18f488fccbp-745,
     0x1.60cc5ce623d59p-9, 0x1.e9a40aebd9ea3p-574, 0x1.5cea7a107c179p-727,
     0x1.53d975f1f9bp-203, 0x1.e3def81d13375p-576, 0x1.736e215260e39p-707,
     0x1.7490493c3e47ep-834, 0x1.44c9e3ff3281ep-133, 0.0, 0.0, 0x1.b1555f2e6b379p-342,
     0x1.743867a50d301p-337, 0.0, 0.0, 0x1.53d4171c63015p-221, 0.0,
     0x1.4b76e3ec1b765p-556, 0x1.20a70d693c564p-665, 0x1.32c92cf10944dp-835, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dcf2e32c240b5p-86, 0.0, 0.0, 0x1.6df038bfa1bafp-722, 0.0,
     0x1.0ed6ee93dcc08p-177, 0.0, 0.0, 0x1.3943638408685p-781, 0.0, 0.0,
     0x1.898f17f5c5b83p-785, 0x1.fa70ef8847936p-569, 0.0, 0x1.bba08673ec018p-692,
     0x1.607226d374d69p-638, 0x1.255bda1e2034ap-947, 0.0, 0.0, 0.0,
     0x1.e3f8d835c67ddp-954, 0x1.8b2cf3c122885p-365, 0.0, 0.0, 0.0,
     0x1.60956857e14a8p-805, 0.0, 0.0, 0.0, 0.0, 0x1.8ae23f90cc979p-904, 0.0, 0.0,
     0x1.f918527c0dca7p-782, 0.0, 0.0
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
            tmp1 = Sleef_acosd1_u35purecfma(tmp0);
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
    printf("Sleef_acosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
