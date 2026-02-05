/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ldexpd2_kvx.c --function Sleef_ldexpd2_kvx --arity 2 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64,int32 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.3885cf9d1447fp-701, 0x1.3243f89373564p-719, 0x1.b64c4647fa003p-702,
     0.0, 0x1.bf9e8310228fdp-101, 0x1.e90b7ba9a9ce8p-602, 0.0, 0x1.d91c50831ed3bp-895,
     0.0, 0.0, 0x1.8e60a6048b7c9p-39, 0x1.8af77c290e75ap-113, 0.0, 0.0,
     0x1.6108b09048553p-160, 0.0, 0x1.715bd38ce07a5p-796, 0.0, 0x1.3a60750c1a8ecp-396,
     0x1.1b4c529148876p-545, 0x1.cae7bd09b2987p-641, 0.0, 0x1.f459dde12275ap-977, 0.0,
     0x1.c859437e036cep-129, 0.0, 0x1.346235cf65069p-276, 0.0, 0.0, 0.0, 0.0,
     0x1.15ba4b61afbf9p-366, 0x1.de366b35ce3a3p-719, 0.0, 0x1.176369660c97fp-77, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.666cd4a935c77p-529, 0x1.bbf7b8c887715p-604,
     0.0, 0x1.ba961079396d4p-275, 0x1.14511224035eep-74, 0x1.6ec80df53c7fap-1022, 0.0,
     0.0, 0.0, 0x1.6a07edf3ad6bbp-719, 0.0, 0.0, 0.0, 0.0, 0x1.8500b7d60702p-569, 0.0,
     0.0, 0x1.1651142a79c0fp-1008, 0x1.d11c641a3dae5p-182, 0x1.2941c5eec5c98p-53,
     0x1.3f955c2441b44p-650, 0x1.4beb41f86ca3ap-426, 0x1.2ce574c06e009p-614,
     0x1.3e7399ce5d55ap-810, 0x1.e5ba0527365c3p-966, 0x1.6544be4b029e3p-831,
     0x1.2ae01144642cap-677, 0x1.49db1c78e7593p-47, 0.0, 0x1.12f3fe3a3cc14p-878,
     0x1.8fe1419cc20c9p-751, 0x1.65befe29885fp-477, 0x1.def8d19af8fd8p-562, 0.0, 0.0,
     0x1.9f176e5d66cfep-433, 0x1.1bf4d63b1970fp-628, 0x1.0764dbef56171p-201, 0.0,
     0x1.f636198481ac4p-663, 0x1.25986a7185ab5p-783, 0.0, 0x1.d7406fe662d7cp-693, 0.0,
     0x1.83ddde87ed77ap-794, 0x1.862ca5ea31b48p-143, 0x1.6ba20d2310e19p-990, 0.0,
     0x1.0e6aadb697335p-226, 0x1.e4e8a313c4ec9p-302, 0x1.924a81edf8322p-437, 0.0, 0.0,
     0.0, 0x1.6b2fa5fb02a9dp-767, 0.0, 0.0, 0x1.129e9c79bb95bp-235,
     0x1.ee02f8a30d97ap-779, 0x1.a4a3e6b976b31p-824, 0.0, 0.0, 0x1.0d9fecc89efb6p-342,
     0.0, 0.0, 0.0, 0x1.39035ab41b866p-705, 0x1.9a071b7bd1e4p-570, 0.0, 0.0, 0.0,
     0x1.ddcc171b43464p-455, 0.0, 0x1.c34bbc7b66bbdp-643, 0x1.1042d56da4175p-240,
     0x1.6b17d8b274826p-592, 0.0, 0.0, 0x1.c399317bf1a18p-885, 0.0, 0.0,
     0x1.c509e0ceb7f5bp-765, 0x1.05869679212c1p-877, 0x1.c194a08f33b38p-998, 0.0,
     0x1.ea3ba72e799e7p-416, 0x1p0, 0.0, 0x1.19577a20caddbp-599,
     0x1.c373989862e47p-132, 0.0, 0.0, 0.0, 0x1.c6715a8d88609p-8,
     0x1.5a71337e39313p-479, 0.0, 0.0, 0.0, 0x1.5ad1a18e681dbp-1003, 0.0,
     0x1.4b84e1bcaf6f9p-665, 0.0, 0x1.f7af7bc3ae7aap-158, 0x1.becfd8b7eb55dp-564,
     0x1.dc118765197ebp-966, 0x1.9e4952717b86ep-540, 0.0, 0x1.49d9937368eddp-985,
     0x1.979b46aebb0d4p-504, 0.0, 0x1.49cb2e178930bp-519, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0b35605390564p-72, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac7314b1884b1p-528, 0.0, 0x1.d9a92ce987b66p-32, 0x1.9ae166e13a33fp-486, 0.0,
     0.0, 0.0, 0x1.84fb84d8df462p-876, 0x1.237be578669bep-991, 0x1.79945e0912ae5p-710,
     0.0, 0.0, 0x1.7a2a320b672b5p-614, 0.0, 0.0, 0.0, 0.0, 0x1.75fd7e04b2545p-974,
     0.0, 0x1.35a65f8686172p-481, 0x1.c9c90773c612ap-172, 0.0, 0.0,
     0x1.cba9341f578b7p-398, 0x1.4390e4e4ff053p-897, 0.0, 0.0, 0x1.333f8e5a159dap-324,
     0.0, 0x1.51c89a74fc1edp-845, 0.0, 0.0, 0x1.a5d4969d6db67p-194, 0.0,
     0x1.36af5846047f9p-260, 0x1.d8ea6a3cb677ap-621, 0x1.2655a51b736aep-229, 0.0, 0.0,
     0x1.4ca35153c2d3ap-627, 0x1.e8b64e9f072b7p-212, 0x1.d2187b1cb1c01p-387,
     0x1.a31ba0b416543p-68, 0x1.73a31f4bd6f3cp-249, 0x1.2f1a8b30a60f5p-755,
     0x1.7c4a02025bcbp-826, 0.0, 0x1.5d8146537ff73p-684, 0x1.de0adf973a2a8p-208, 0.0,
     0.0, 0.0, 0.0, 0x1.5c4b60dd6c5fbp-532, 0.0, 0.0, 0.0, 0x1.7b070884fcc2ap-1013,
     0.0, 0.0, 0x1.89bcd4d794edbp-1006, 0.0, 0.0, 0.0, 0x1.a9ade47a83fd5p-542,
     0x1.54511aad29524p-953, 0x1.2d13b53189971p-83, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.acfe1510c0b6ep-623, 0.0, 0x1.738c062b3a691p-101, 0.0, 0x1.d060a9a5d41c6p-280,
     0x1.441bec1b51b44p-140, 0.0, 0.0, 0x1.5539009efbdb6p-60, 0x1.eb43e69f452efp-528,
     0.0, 0x1.9d59b79f13ebdp-286, 0.0, 0x1.89cf431ccf33ep-659, 0.0, 0.0,
     0x1.47ee5786a957p-855, 0x1.1b75242aaa279p-698, 0.0, 0.0, 0x1.34574ed8b9b75p-321,
     0x1.665fcc6b4ced6p-87, 0.0, 0.0, 0x1.cdd60606b0f0bp-1015, 0x1.4242047dea099p-516,
     0x1.1831b000556d3p-843, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bfef0e2d36576p-371, 0.0,
     0.0, 0.0, 0x1.750931286d935p-181, 0.0, 0x1.7e618964240b2p-162,
     0x1.161ebb38d6f19p-448, 0.0, 0x1.1aeb34f453522p-438, 0.0, 0x1.7942f4e1baafap-787,
     0x1.31de50d15537cp-751, 0.0, 0x1.a131a420a5001p-409, 0.0, 0.0,
     0x1.0898b0ace84ccp-454, 0.0, 0.0, 0.0, 0x1.c14fbd9bb29b9p-702, 0.0, 0.0,
     0x1.7513eb89c1354p-715, 0x1.2c5fcca6e8548p-573, 0x1.441e594a79bd1p-361, 0.0, 0.0,
     0.0, 0.0, 0x1.4e283940e146ap-647, 0x1.2b42ac3ce64c2p-867, 0.0,
     0x1.7ae244a1ac5dp-684, 0.0, 0.0, 0.0, 0.0, 0x1.f7231811d7ebbp-634,
     0x1.1f5af7da681bep-300, 0.0, 0x1.8763b81cfb79fp-877, 0.0, 0x1.edc826d06e545p-533,
     0.0, 0.0, 0x1.078a88d4fddc5p-965, 0x1.02b76591d6122p-26, 0.0, 0.0,
     0x1.0cb39eee961e7p-343, 0x1.68a45bf5a2795p-216, 0.0, 0x1.2e017fe7d8528p-706,
     0x1.3b76ffa0232c7p-626, 0x1.f7e06001e61bdp-866, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.79dc49fd1946fp-627, 0x1.54c26fdee0432p-470,
     0x1.91393e2dea25bp-72, 0x1.8a67b139e8aefp-34, 0x1.0ee8a47ed79ebp-5,
     0x1.a449ddd0997f5p-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf7d2f3168df9p-694,
     0x1.182505b093a63p-66, 0x1.4b946dc4b5c9ap-368, 0.0, 0x1.4bd506662af77p-992, 0.0,
     0x1.5f7cc255ba4a4p-615, 0.0, 0x1.36909a6fbc584p-380, 0x1.067986b2b49c1p-519, 0.0,
     0.0, 0.0, 0x1.afc45c82461cfp-791, 0.0, 0.0, 0x1.85ae545ed60bap-745, 0.0,
     0x1.3f604675a68b8p-16, 0x1.65b76cef487cep-236, 0x1.e4b4e4f310b31p-791,
     0x1.52d5ba58e3e1ap-801, 0x1.cb0ea75ea3e35p-507, 0x1.636a795f7375cp-843,
     0x1.57f8029aa5f17p-659, 0.0, 0x1.0c94a9bc87b55p-918, 0x1.af567d7f16317p-687, 0.0,
     0x1.c3e833953fa5bp-739, 0.0, 0.0, 0.0, 0x1.69b4248215425p-952, 0.0, 0.0, 0.0,
     0.0, 0x1.d6652b55165e9p-780, 0x1.0be31a6f46262p-827, 0x1.77bfd0db9f65fp-781,
     0x1.ce2f74ea1311ap-253, 0x1.c5e906cc47ff5p-728, 0.0, 0.0, 0.0,
     0x1.b63628ffbd7e7p-809, 0x1.f67bd1c772507p-87, 0.0, 0.0, 0.0, 0.0,
     0x1.c9ca822fc7581p-192, 0x1.7317ae8b09d0cp-290, 0x1.adc5a679b51dcp-549, 0.0, 0.0,
     0x1.dce0c9a7a1282p-78, 0x1.cd67f35d57baep-846, 0x1.497c6b888c0b2p-897, 0.0, 0.0,
     0x1.d20e4929548f8p-114, 0.0, 0x1.b25afd579dc15p-160, 0x1.4a604c589dc6p-943, 0.0,
     0x1.c31d6420a580cp-91, 0.0, 0x1.79e06e8102a6fp-519, 0x1.77daa0438272p-170, 0.0,
     0x1.c868b7f9baf09p-899, 0.0, 0x1.78ca407128373p-128, 0.0, 0x1.3c753157f4fdfp-193,
     0x1.cb2427184d543p-136, 0x1.2fcb4b85b9fb2p-388, 0x1.16f4eb7432c4bp-270, 0.0, 0.0,
     0.0, 0x1.e93796ce4399p-589, 0x1.980d88d83db2ep-57, 0.0, 0.0, 0.0,
     0x1.0c9e80959f05dp-691, 0.0, 0x1.1d2f5a18bfe54p-266, 0x1.a32171a42e2c1p-239, 0.0,
     0x1.66ae75ad3ccddp-270, 0.0, 0.0, 0.0, 0x1.33fe6671704dcp-804,
     0x1.1ea2f9627e3b2p-564, 0x1.3e074d6b4fd1dp-950, 0x1.27a58f6a0c1fp-999,
     0x1.bd365df6386d2p-524, 0x1.e7f87f8c62b36p-459, 0.0, 0x1.873fa5495be4ep-808, 0.0,
     0x1.56960eab539dep-741, 0x1.92cc47db93666p-376, 0.0, 0.0, 0x1.df33dc3073534p-654,
     0x1.46ff75c4c9655p-39, 0.0, 0x1.bf5f21e11d0d6p-593, 0x1.0fbcc0409c069p-327, 0.0,
     0x1.7b8ff0fd55d86p-552, 0.0, 0.0, 0x1.7ddfb0e76a585p-608, 0x1.327fb8bf3ac7p-243,
     0.0, 0x1.88984d8012779p-92, 0.0, 0x1.28c7a1be3d15p-916, 0.0,
     0x1.424e2b1b957e5p-976, 0x1.29f245514ae58p-11, 0x1.aafc9e7434624p-404,
     0x1.0b568b35ddffap-679, 0x1.f05eb9658c121p-82, 0x1.1e15c27a0cdfcp-950, 0.0,
     0x1.b329f97861b54p-348, 0x1.9ad2db0b8d15bp-181, 0x1.ebda0fd33d08cp-79, 0.0,
     0x1.4d6cd226012e2p-671, 0x1.97e57cdd2f67fp-526, 0.0, 0.0, 0.0,
     0x1.e80d61db564fep-997, 0.0, 0.0, 0.0, 0.0, 0x1.3bb8b918ea19ap-655,
     0x1.290362fe05207p-762, 0x1.e1d292d643e5dp-393, 0x1.291c28c8d7018p-823,
     0x1.01ba9af778cdbp-84, 0.0, 0x1.b7aa67d4c3be8p-585, 0.0, 0x1.24452fc9d479dp-364,
     0x1.1ee2cf5444e87p-785, 0.0, 0.0, 0x1.9f4d5293e07a9p-831, 0.0, 0.0,
     0x1.d13ee782e1c1p-350, 0.0, 0.0, 0.0, 0x1.9238399423207p-223,
     0x1.1631004eebaa6p-416, 0x1.7d027343bfd27p-577, 0.0, 0.0, 0.0, 0.0,
     0x1.de8a71b5d374fp-305, 0.0, 0.0, 0x1.159c1637d8c5ep-979, 0x1.48ba60529d92fp-731,
     0x1.049f83d6f682ep-822, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d112bc2cfc27p-480, 0.0,
     0x1.3a25333b004d5p-343, 0.0, 0x1.a22daa8216805p-522, 0x1.a317d3e714369p-291, 0.0,
     0x1.143aa838a7ce1p-487, 0.0, 0x1.910bc48e26046p-546, 0x1.8c0d6866a4dafp-421,
     0x1.40efe2ab27943p-422, 0.0, 0x1.e5bd79272a8cep-863, 0x1.a7376993cfe69p-994,
     0x1.205d161285e0ep-631, 0.0, 0x1.f43e92977decbp-289, 0x1.ad3d1ff554d42p-203,
     0x1.728b0468a9f6ap-664, 0x1.012ae3e3f26afp-514, 0.0, 0x1.aa6d1a61d5571p-83,
     0x1.806f3c471308fp-384, 0.0, 0x1.aefab036d7c8p-672, 0x1.db41ae0a908bap-731,
     0x1.8ae3b161a4daap-165, 0.0, 0x1.ab342ebf438efp-791, 0x1.4bcb9a53f2bbdp-102, 0.0,
     0.0, 0.0, 0.0, 0x1.8278b2c8618a6p-965, 0x1.d0b74a86e3d8cp-290,
     0x1.ca6433d65b97p-926, 0.0, 0.0, 0x1.418e58e82ffap-817, 0.0,
     0x1.b8d6a4b78262ep-816, 0.0, 0.0, 0x1.14cf1b477f113p-426, 0.0,
     0x1.ebe5317915fe6p-934, 0x1.f604019b3248bp-925, 0.0, 0x1.151d4bb5c1dfap-299,
     0x1.ce3efb80af03cp-283, 0.0, 0x1.d96c3327d8759p-247, 0.0, 0x1.33fd98048076ap-407,
     0.0, 0x1.c54db661d49a3p-374, 0.0, 0.0, 0.0, 0x1.338e702889232p-366, 0.0, 0.0,
     0.0, 0x1.43863d53e5729p-613, 0.0, 0.0, 0x1.32812c3483c42p-361, 0.0,
     0x1.e838d7ef38faep-861, 0x1.52adca26cabd1p-535, 0x1.8341d1bf73abbp-101,
     0x1.065fa9158004ap-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52214867c16ffp-733, 0.0,
     0x1.f22b6a4cb4de5p-345, 0.0, 0.0, 0.0, 0x1.7b9958ac24ffdp-959, 0.0, 0.0,
     0x1.caafaa8279052p-25, 0x1.c5912c24970e1p-258, 0x1.8eeb8abd0021fp-736,
     0x1.9e586124009dep-278, 0x1.9ebebb8487a54p-359, 0x1.a2f12761e2dcp-463,
     0x1.f2812218b98d8p-380, 0x1.44d9e88903d41p-453, 0x1.150fc84c2a768p-95, 0.0, 0.0,
     0.0, 0x1.8a807508c6663p-163, 0x1.42b21d19e6a1p-697, 0x1.7f0eae263dd3ep-850,
     0x1.1fa0b7de9059fp-457, 0x1.a83947580c9ddp-188, 0.0, 0.0, 0x1.e39f641a71e35p-472,
     0x1.d46079ed7f042p-265, 0x1.faebe5bb288e8p-357, 0.0, 0x1.bd88db2585f36p-414, 0.0,
     0x1.a0bf6c7f3b93ap-843, 0x1.ea981fdc6e0dap-720, 0x1.4bc04f9943693p-264, 0.0,
     0x1.7e9ff75e9189ep-708, 0x1.10fddb0ee6508p-623, 0x1.5c03eeaa95b2dp-471, 0.0,
     0x1.357ee4996a256p-729, 0.0, 0x1.4a25cced71981p-311, 0x1.66ea230b39a77p-927, 0.0,
     0.0, 0x1.6ad0323509abap-238, 0.0, 0.0, 0.0, 0x1.84faaafced3acp-154,
     0x1.5ec7e7f2809c4p-211, 0x1.e29270ccc170fp-412, 0x1.17a9411b4f2dbp-661,
     0x1.5a5390d08eb4bp-579, 0.0, 0.0, 0.0, 0x1.abb2da5e120f2p-622, 0.0,
     0x1.38263bafe40d9p-614, 0x1.8bd69104ec034p-911, 0x1.e7d085066055bp-560,
     0x1.bf65be2ba0677p-5, 0.0, 0.0, 0.0, 0x1.815fe5dd1369p-152,
     0x1.07f83876efe21p-976, 0.0, 0x1.cfd65fecf3b39p-4, 0x1.bdc1d1f0a86e8p-124,
     0x1.71ade5a3e0b31p-658, 0x1.16094b46ad38ep-545, 0.0, 0.0, 0x1.63954d6d9b269p-409,
     0x1.bae402fd3d9ap-731, 0.0, 0x1.8774cd6161064p-600, 0x1.da8d7a7b08cabp-579,
     0x1.07f45a4a44865p-303, 0.0, 0.0, 0.0, 0.0, 0x1.2ac6f304cbc69p-791, 0.0,
     0x1.946b62cb02752p-710, 0x1.83ca72b83661fp-783, 0x1.d358083795d5ep-636, 0.0, 0.0,
     0x1.ba576cde7e992p-832, 0x1.143ec2b9b8c38p-362, 0.0, 0x1.572b60ad40f0fp-90,
     0x1.89fcb1247bd0ap-1020, 0.0, 0.0, 0.0, 0x1.65f8fad409306p-814, 0.0, 0.0, 0.0,
     0x1.0425da64590cep-308, 0x1.68e3117cb431ep-124, 0.0, 0x1.f77dc30701dffp-701,
     0x1.852df334f15d9p-108, 0.0, 0x1.9c8d34a9a0164p-715, 0x1.2ab2b675c9e0fp-893,
     0x1.68665bab0b0a1p-215, 0x1.78ec0080c4e72p-498, 0.0, 0x1.60509cd96f557p-235, 0.0,
     0x1.bbc6edb4d74bdp-425, 0x1.79bebf3dbfc83p-472, 0x1.a4c623fc59bbdp-974, 0.0,
     0x1.979d9507862adp-773, 0x1.c2a4cbaf44d5dp-551, 0x1.65dee87be0ae7p-771, 0.0, 0.0,
     0x1.b3f8718d4d261p-141, 0.0, 0x1.6022cb0983306p-317, 0x1.c4510f5caebe1p-702,
     0x1.3afc04e2c1f76p-194, 0.0, 0x1.76f3e73bf52f8p-526, 0x1.94d5fd8849b88p-222, 0.0,
     0.0, 0x1.232c0060ef392p-187, 0x1.40276fed73adcp-880, 0x1.7d6d5a18ef1cep-1020,
     0.0, 0x1.ea33fcf686837p-910, 0x1.c39164507ecacp-375, 0x1.9c96b119f4767p-271, 0.0,
     0.0, 0.0, 0x1.6142d756e2f8p-255, 0.0, 0.0, 0x1.da3fb7f4187bep-754,
     0x1.97ace7a20ffd3p-902, 0.0, 0x1.962f34e4327b8p-542, 0.0, 0x1.6996de7e87227p-662,
     0x1.3ab241cc97f0dp-9, 0x1.ee32d64e93482p-646, 0.0, 0x1.72bd96da2a5f5p-886, 0.0,
     0x1.3614877857b2dp-50, 0x1.5b6b0c516c84dp-100, 0.0, 0.0, 0x1.7c482d07bdaf5p-228,
     0x1.defb90f6fe63cp-1012, 0x1.dc9a8bf43395p-403, 0x1.cca2ffd4eda81p-521, 0.0,
     0x1.dc3ebee3a9093p-871, 0x1.edfeedc017bcbp-445, 0.0, 0x1.30c416290747fp-466, 0.0,
     0x1.740eb16e6e2bap-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84f5b20e71c04p-324, 0.0,
     0x1.883d911a0ecd4p-806, 0x1.c352a231b5029p-495, 0x1.ae315f0dbc467p-440,
     0x1.610d6b2dc3b4fp-255, 0.0, 0x1.62bfbb452a54dp-973, 0.0, 0x1.27cdc51f04ca2p-796,
     0x1.8c9beefa26551p-288, 0x1.f0ceab631872bp-336, 0x1.27806cb52b4d5p-567, 0.0,
     0x1.ef191cfa58f91p-13, 0x1.646e48bc1fba4p-311, 0.0, 0.0, 0.0,
     0x1.651548827e5c6p-582, 0x1.76915ce0fdb81p-570, 0x1.c3dd33be09c38p-640,
     0x1.fd7059aa823c7p-184, 0x1.9ba36bdb5715ap-573, 0x1.9cb515a9c7096p-248,
     0x1.801747d4c84d9p-36, 0.0, 0.0, 0.0, 0x1.e353c461c2f0cp-689, 0.0, 0.0,
     0x1.82fcba838b192p-1007, 0x1.f9be73f5f09a2p-188, 0x1.6bc2427cb9c0fp-738, 0.0,
     0x1.5724bc9edae44p-126, 0x1.145870a896972p-905, 0x1.6f27eca12fe29p-181,
     0x1.3c288b51c4224p-757, 0x1.9f1db8573a0bdp-143, 0x1.6b5b481f52386p-265,
     0x1.af588c811e558p-628, 0x1.41a24895b7fcfp-414, 0.0, 0x1.3cf30f4e199d7p-770,
     0x1.e3da410b61c38p-697, 0.0, 0.0, 0x1.4e5e8acf80bb7p-178, 0x1.e5e53c09b65edp-673,
     0.0, 0.0, 0.0, 0x1.ed0a4375c6a8ap-289, 0x1.a009ebcf7c07fp-116,
     0x1.8f2915de5d41bp-149, 0x1.d764705284165p-663, 0x1.5432d00ca071ep-746, 0.0,
     0x1.f04cde5101ef7p-100, 0x1.ea8e878cbdb8fp-44, 0.0, 0.0, 0.0, 0.0,
     0x1.bcdca05997cddp-281, 0x1.ef120f925a4e5p-307, 0x1.aa1cd05be2a54p-1018, 0.0,
     0x1.36b307f5484f5p-726, 0x1.693ac567d75c9p-700, 0x1.7ac2571664c74p-1017, 0.0,
     0x1.b99a057f0be17p-381, 0x1.fd1376f60747cp-255, 0.0, 0.0, 0x1.57c338704720ep-548,
     0x1.67f3a29a91117p-712, 0x1.c38f12cdcf154p-202, 0x1.045c0f9bc331ap-739,
     0x1.dc9ec3a4a93f2p-106, 0.0, 0.0, 0x1.9ca3c5736188ap-1017, 0.0,
     0x1.c25ee999eff15p-427, 0x1.7a7209a9fe387p-528, 0.0, 0.0, 0x1.8ba6f6f5f7d36p-4,
     0x1.3be03c867d313p-16, 0.0, 0x1.bf9d9bd98541bp-388, 0.0, 0x1.ccefd7e69e7d2p-708,
     0.0, 0x1.036af89272bd7p-927, 0x1.608f60cb88f68p-63, 0x1.d8692492b7806p-816, 0.0,
     0.0, 0.0, 0x1.bf1fafbc4c427p-930, 0x1.42a528840fe2ep-311, 0.0, 0.0,
     0x1.8f0e76274e1fep-319, 0x1.72870e1b62fe2p-153, 0x1.ac60639e89f79p-172, 0.0,
     0x1.1d887ae9f3a9bp-737, 0x1.52d35a51f5468p-168, 0.0, 0x1.10e6565037888p-176,
     0x1.ad0ccc2d86683p-530, 0.0, 0.0, 0x1.67e203a61a732p-578, 0.0, 0.0,
     0x1.db02c7f61e23fp-347, 0.0, 0.0, 0x1.b509dc5ad6d51p-498, 0.0,
     0x1.038e1b4102385p-398, 0x1.7078ff238e01cp-332, 0x1.5033db2612eb7p-737,
     0x1.a897d1ea4decdp-780, 0.0, 0x1.01a346c8abfc6p-835, 0x1.539b766776cbdp-544, 0.0,
     0.0, 0x1.3ecc95240c3f9p-588, 0x1.32c47b552a44bp-6, 0x1.686a869989a1fp-194,
     0x1.c339cca84d829p-886, 0.0, 0x1.80e887486998fp-368, 0.0, 0.0,
     0x1.d15d0f192d0ebp-913, 0.0, 0x1.14d7257729201p-123, 0.0, 0.0, 0.0,
     0x1.66f1a95a5c4ap-878, 0x1.0d944620167e1p-10, 0.0, 0.0, 0x1.6b0ab6b3c317fp-994,
     0.0, 0x1.d81001d25adb5p-506, 0x1.a8cb7729ef635p-532, 0x1.767c5bcfe60bdp-104, 0.0,
     0.0, 0.0, 0.0, 0x1.6cfbe46130b5p-619, 0.0, 0.0, 0x1.fa782dbedb5e3p-843,
     0x1.844140e2e3caap-643, 0x1.e9b34e1dd92bap-927, 0.0, 0x1.0056d6aead5dbp-91, 0.0,
     0.0, 0x1.30e8e18bbf899p-159, 0x1.baa4802dbaa7bp-210, 0x1.d604d83d2e3ebp-757, 0.0,
     0x1.c1c8c32520152p-769, 0x1.e22d1e2784fbfp-33, 0x1.c23c24f887ea7p-539,
     0x1.3c066dd28c654p-59, 0x1.2ef090616bf02p-152, 0x1.61ef31a18564fp-620,
     0x1.f6279fc7ef5ap-815, 0.0, 0x1.6a7b397438c12p-489, 0.0, 0.0,
     0x1.23a97184abcb7p-933, 0x1p0, 0x1.c41924c4d8db6p-358, 0.0,
     0x1.c4dd2da4a0148p-723, 0.0, 0.0, 0.0, 0x1.b2cd3f4ead1cdp-338,
     0x1.fa3fa918937e3p-877, 0x1.6548df7acce5p-866, 0.0, 0x1.caac6b2b97276p-223, 0.0,
     0.0, 0.0, 0.0, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1002]  = {
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)
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
            ml_int2_t tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            memcpy(&tmp1, ((ml_int2_t*)(external_bench_wrapper_input_table_arg1+ i)), 8);
            tmp2 = Sleef_ldexpd2_kvx(tmp0, tmp1);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp2),  16);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(2);
            i = tmp4;
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
    printf("Sleef_ldexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_ldexpd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
