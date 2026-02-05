/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd2_u10avx2128.c --function Sleef_sincosd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.7beb8a8b29069p-379, 0.0, 0x1.a36904bb81893p-251, 0.0,
     0x1.afaf1428934a2p-541, 0x1.60ee55c656cadp-785, 0.0, 0.0, 0x1.e45fc725eed22p-34,
     0.0, 0.0, 0x1.d798e3e6f7d27p-27, 0x1.7c57bf9ace78bp-425, 0.0, 0.0,
     0x1.0501eba5833a5p-115, 0.0, 0.0, 0x1.0259aacd7b55p-389, 0.0,
     0x1.42b50ff3e1125p-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d4a115c407b39p-113, 0.0,
     0x1.ef76999fdf042p-367, 0.0, 0.0, 0x1.5d33ed433413p-35, 0x1.071a416ea4d36p-832,
     0x1.5059520dbe51ap-873, 0.0, 0.0, 0x1.64ff4ba43b418p-897, 0x1.92534575b85bp-285,
     0.0, 0x1.e26c28be7c218p-252, 0.0, 0x1.695c03f585571p-464, 0x1.cb5098c045e51p-614,
     0.0, 0.0, 0x1.d954f52488dc1p-969, 0x1.5e4296b34e456p-586, 0x1.c4b4f8b766b57p-252,
     0.0, 0x1.4477718ff9874p-704, 0x1.1292144a8ce69p-364, 0x1.37c926c8ba5bfp-555,
     0x1.dcc82980c9c2bp-902, 0.0, 0x1.b1e775779314dp-124, 0.0, 0x1.b23996c624cc2p-952,
     0.0, 0x1.83f2c5a63a677p-668, 0x1.7d66918b1ccb3p-101, 0.0, 0.0, 0.0,
     0x1.c15490cd37dccp-953, 0x1.fb4589732ee1bp-55, 0x1.bd3f962d6530ap-572,
     0x1.245f1fda222e8p-724, 0x1.a904e5e03ea6ap-789, 0x1.21442b9529e49p-841,
     0x1.37822df1e53c4p-351, 0x1.dfdf2dbcfcc3bp-946, 0.0, 0x1.44344f7580948p-117, 0.0,
     0.0, 0.0, 0x1.aee5cb570ae19p-322, 0.0, 0.0, 0x1.739582863cdf8p-585,
     0x1.c25023ef366eap-156, 0x1.d0abd185996a2p-656, 0.0, 0x1.fadd48f0921fdp-982, 0.0,
     0.0, 0x1.20dccecf8fb39p-747, 0.0, 0x1.df289a5a6a955p-603, 0x1.eb70a9af7b0d5p-936,
     0x1.4bb2de31a411bp-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d89eaf85a50fp-469,
     0x1.bef4a10022fcp-700, 0.0, 0x1.69ea5f9ff8f23p-283, 0x1.4123d11746826p-309,
     0x1.a310a2ae4f167p-404, 0x1.1d46fef909ef7p-368, 0x1.0377446f5ad3fp-912,
     0x1.b7d2b40057e4p-518, 0.0, 0x1.28c6036c5990bp-858, 0.0, 0.0,
     0x1.d16ff64394834p-838, 0x1.3a5744854063p-742, 0x1.67a9a0fdca173p-964, 0.0, 0.0,
     0x1.5c696b1c251e7p-47, 0.0, 0.0, 0.0, 0x1.442997a7a120ep-360,
     0x1.ca9b89181c3a9p-245, 0.0, 0.0, 0x1.67c0d52e59c1ap-981, 0x1.cf531ee36652fp-552,
     0.0, 0.0, 0x1.59e5de9c4f157p-210, 0.0, 0x1.a1aec47c696f1p-917,
     0x1.fdfaaf7672465p-281, 0x1.5298d55a491fcp-480, 0.0, 0.0, 0.0, 0.0,
     0x1.93d4ddb5fe291p-853, 0.0, 0.0, 0x1.1e66f6b05789bp-479, 0x1.09ad4db6a0ea2p-816,
     0x1.85e3a92869ap-351, 0.0, 0.0, 0x1.fe1afc743b0a8p-78, 0x1.7dea0866c2ad5p-988,
     0x1.478ecb0c34384p-751, 0.0, 0x1.ee00567232c01p-78, 0x1.c575d22c78c24p-757,
     0x1.4dba594cd5c52p-362, 0.0, 0x1.e5adfab3fedb5p-388, 0.0, 0.0,
     0x1.eaeb0165e4421p-940, 0x1.4e119d647a267p-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.867cf2ee5e4f7p-941, 0.0, 0.0, 0.0, 0.0, 0x1.c44c3f35b9ac1p-545, 0.0,
     0x1.513062c3d11cfp-588, 0x1.27dd85dc203b1p-369, 0.0, 0x1.9db408286d276p-1009,
     0x1.5accfdde65984p-464, 0x1.55d712891e348p-242, 0.0, 0.0, 0x1.a1d8c6af850dbp-690,
     0.0, 0x1.5f6ee8edb9b65p-164, 0.0, 0.0, 0.0, 0x1.b72fd95abc835p-1003, 0.0, 0.0,
     0x1.d8c94755bbfa3p-172, 0.0, 0.0, 0.0, 0x1.e1538bb8696b4p-524, 0.0, 0.0, 0.0,
     0x1.05c1df67b2c9bp-379, 0x1.ef794583a1d5ep-640, 0x1.a1a1d2a87b411p-688, 0.0, 0.0,
     0x1.3acc294f8a255p-582, 0x1.f9050fb3b8efp-606, 0x1.991ee4f9ae1fbp-69, 0.0, 0.0,
     0x1.94e8ad20e8dd6p-465, 0.0, 0.0, 0.0, 0x1.7bfe1f807f76cp-504,
     0x1.250a1d2c10908p-913, 0.0, 0x1.d908370204e4bp-918, 0x1.e5eaf5e468dcap-670, 0.0,
     0.0, 0.0, 0.0, 0x1.d8a05266d6a31p-476, 0.0, 0.0, 0x1.8b0dbe8cf33e9p-703,
     0x1.7f1be20e5ee17p-848, 0x1.2ff8edfd14921p-540, 0.0, 0x1.3cfa8db73b457p-763,
     0x1.bbca7ee04fdf8p-497, 0x1.3555bb6c5fcfcp-774, 0.0, 0x1.9ba60aae3d5fdp-874, 0.0,
     0.0, 0x1.d4fa8609ba898p-134, 0x1.15529191d82dbp-468, 0x1.29ca4c88d9efep-700,
     0x1.39098dc1233f3p-437, 0x1.a60598281823ep-22, 0.0, 0x1.d0f9d35a6c112p-589, 0.0,
     0x1.aa3470941df0fp-445, 0.0, 0.0, 0x1.d8274719f0e22p-360, 0x1.d88cb940107fp-548,
     0x1.158fc049c1e0cp-872, 0x1.04e8c59a63c08p-560, 0.0, 0x1.662614990cc0dp-865,
     0x1.ddc364f7643e1p-665, 0.0, 0x1.411a583c6cdc6p-1019, 0.0,
     0x1.660294d5d7d6bp-643, 0.0, 0.0, 0x1.1e2e86bd159f5p-400, 0.0, 0.0,
     0x1.edb44e52639bcp-685, 0x1.ee9ea15ac0e69p-175, 0.0, 0x1.11498a6f9fe52p-323,
     0x1.18a16cf0795a7p-121, 0.0, 0x1.27d3ff18569f4p-827, 0x1.df03930feca6fp-886,
     0x1.d2a895af17f6fp-431, 0x1.3e4931a59e625p-780, 0x1.31f529924eed3p-241,
     0x1.24b9e88310a91p-768, 0x1.0611b1f317a1fp-359, 0x1.c48c3b4298bffp-109, 0.0,
     0x1.62744a72bc04p-723, 0.0, 0x1.59f6554e376a1p-566, 0.0, 0x1.2adce2fc11f6p-984,
     0x1.43967654ee0f4p-678, 0.0, 0.0, 0x1.811afbe73796fp-618, 0.0,
     0x1.f3be451101c8ep-99, 0x1.11c51b60e9857p-318, 0x1.f30632c3a5dedp-700,
     0x1.faf093dcdbdcp-257, 0x1.eef448456a9c2p-84, 0.0, 0.0, 0.0,
     0x1.ede5b54874a44p-722, 0.0, 0x1.d778682743c41p-3, 0x1.f689409b9cdcfp-713,
     0x1.4183e8bf6d306p-929, 0x1.c9e3ad89aeaf1p-500, 0.0, 0.0, 0.0,
     0x1.0a522040b37b7p-1006, 0x1.4f3886e863bc8p-784, 0.0, 0x1.587bc4d000e0bp-986,
     0x1.ec929a8193c24p-786, 0x1.5ac8b62301bd7p-295, 0x1.f116522f43c06p-890,
     0x1.c59f18b719907p-315, 0.0, 0x1.4cee17af5b0c8p-389, 0x1.fe6f4c6a6ef99p-846, 0.0,
     0x1.df1a1340aac59p-394, 0x1.147febf449e45p-571, 0x1.9e8e20e8b21aap-176,
     0x1.917d40857aa1bp-314, 0x1.0d2ba6c64392fp-604, 0x1.1723024c49ca2p-491, 0.0, 0.0,
     0x1.5af9648ff9747p-730, 0x1.4ceb836ffe3fep-482, 0.0, 0x1.4316f3ecda569p-824, 0.0,
     0x1.73c1441dfb78dp-992, 0x1.9b8d550bf157ap-973, 0x1.3b827351458d7p-598,
     0x1.d5be332e1759cp-77, 0x1.62b5d61b7d569p-95, 0.0, 0x1.92c486d6feceep-953, 0.0,
     0x1.ed895c1fd9972p-448, 0.0, 0x1.a5ea15f8cf2ap-828, 0.0, 0.0,
     0x1.99bd6810a0859p-78, 0x1.4702a01dddcc2p-891, 0.0, 0x1.f86db2c4423e7p-929,
     0x1.152d0c1bfe551p-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e3b5cf52e3f06p-982, 0.0, 0x1.8b1f209e3b067p-930, 0x1.cd640e7be4a3dp-970, 0.0,
     0.0, 0.0, 0x1.c0486ca8dd0bp-795, 0.0, 0x1.74cdf1fe0ff76p-268,
     0x1.2efd272c52479p-400, 0x1.c8d3a95293493p-239, 0.0, 0x1.8c73a15efe723p-718,
     0x1.4127a4c976216p-977, 0x1.9c29322b0d60cp-81, 0x1.ee9fbb9405c3p-102,
     0x1.06eb94ab50e48p-72, 0x1.a4c9db4ddeaf4p-655, 0.0, 0.0, 0x1.7c81a792afaf1p-237,
     0.0, 0x1.28da7e56a4cbcp-393, 0.0, 0x1.484fce4f5ee1cp-240, 0.0,
     0x1.ebdd70ca2c093p-563, 0.0, 0.0, 0x1.169b0c46c0f1bp-1021, 0.0,
     0x1.cf444ab30e0adp-147, 0x1.3007035ccef7ep-543, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb5293665c508p-422, 0x1.97f322834dbd4p-225, 0.0, 0x1.e2ad4e93e755ep-230,
     0x1.4923d06bd33f9p-579, 0x1.b1e39aa553178p-206, 0.0, 0.0, 0.0, 0.0,
     0x1.2a2af3b2d2e8ap-58, 0x1.e539ea1849ee6p-350, 0x1.d63d1a9af1594p-116, 0.0,
     0x1.182c022a46c5bp-251, 0x1.234941cdb2572p-754, 0.0, 0.0, 0.0, 0.0,
     0x1.e64fae954998dp-882, 0.0, 0x1.a4de2b300e62ep-230, 0.0, 0x1.a95a292164efbp-689,
     0x1.3d542a0c5bd39p-1009, 0.0, 0.0, 0.0, 0x1.892d35620a2fdp-205, 0.0,
     0x1.335fe5e1b6e39p-369, 0.0, 0.0, 0.0, 0.0, 0x1.83dd40e781e2ep-843,
     0x1.e1f0bed5bef34p-653, 0x1.c557090a7ea85p-26, 0.0, 0x1.05e181dc69cefp-354, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cd6f2f75c74ddp-532, 0.0, 0.0, 0.0,
     0x1.ee6e2fefc1d15p-793, 0.0, 0.0, 0.0, 0.0, 0x1.c42bfa3ae9ae9p-315,
     0x1.b7266fa7c4377p-534, 0.0, 0.0, 0.0, 0x1.751d6471b863cp-915, 0.0,
     0x1.63f846fb8f178p-914, 0.0, 0.0, 0x1.7a778e081fbccp-95, 0x1.9d56a59c4e73p-95,
     0x1.840cad0675806p-591, 0x1.d45cc47cb620dp-25, 0x1.c2e37b3b577b2p-149,
     0x1.6ad1d124c71a4p-850, 0x1.3dba559d15d81p-390, 0x1.59e167a2e6bdep-194, 0.0, 0.0,
     0x1.853c443fb708ep-782, 0x1.7808cb095f571p-433, 0x1.429b41303b9a7p-772,
     0x1.9ee8a12c2b211p-430, 0.0, 0.0, 0.0, 0x1.41931b8e92d7ap-783,
     0x1.38adae8a8e30bp-349, 0.0, 0x1.e6a5dec268d9fp-930, 0x1.f5e906f06798ap-861, 0.0,
     0.0, 0.0, 0x1.cd119b02ac561p-985, 0.0, 0x1.d62947adec709p-524, 0.0, 0.0,
     0x1.fac2638f07dd2p-774, 0.0, 0x1.fd12f13912dbcp-923, 0x1.83b9b1634f769p-112,
     0x1.4cc4b17a20dc3p-571, 0.0, 0.0, 0x1.73822c7885513p-635, 0.0, 0.0,
     0x1.1467dc2b07bc7p-518, 0x1.2e9738bbd4c26p-109, 0x1.caafc8bcf813ep-444,
     0x1.4634fbf8dfef7p-186, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70b7697669682p-272,
     0x1.6a0099a353cc5p-554, 0x1.061fb079f086fp-54, 0.0, 0x1.55aedaed35ecbp-453,
     0x1.9e4afe3e234eap-756, 0x1.b160db41ab694p-960, 0.0, 0x1.5e5239717b63fp-802, 0.0,
     0.0, 0x1.eb752314026bfp-198, 0x1.466f9f9b3bc52p-742, 0.0, 0x1.fba0c9b9e20c4p-407,
     0.0, 0x1.958512c5849bfp-80, 0.0, 0x1.bf0da3603b398p-720, 0x1.86a7a1b3ddb55p-79,
     0x1.8b098e1804413p-656, 0.0, 0.0, 0x1.ddf270f85859cp-370, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a160fae710df5p-806, 0x1.f641b3a147be6p-705, 0x1.40200c4902c35p-954,
     0x1.2a1cb1b3dbe63p-643, 0.0, 0x1.2ed09c400fc79p-735, 0x1.a7d450faeef1ap-76,
     0x1.d21bbe8fc12ebp-406, 0.0, 0x1.f570d1a07e0e1p-726, 0x1.fb66ef47bb3d3p-841,
     0x1.fdc66f9c34a45p-482, 0x1.3b9553238150ep-532, 0x1.c1bb2bd93f317p-458,
     0x1.4213bd4bcf056p-167, 0.0, 0.0, 0x1.52105d2be6953p-1005,
     0x1.2c3fd517ac90cp-182, 0x1.643d21d7289b6p-737, 0.0, 0x1.ffee410e6db85p-570,
     0x1.a4f7b975e3e24p-698, 0.0, 0.0, 0.0, 0.0, 0x1.bf3103a826592p-781, 0.0,
     0x1.785f1734ca4acp-901, 0x1.c5e3558811fb6p-703, 0x1.f05e8eb6c2d79p-840,
     0x1.f5d350ce2622ep-780, 0.0, 0.0, 0x1.9a5c4b21fb309p-396, 0x1.8238366cacd5fp-76,
     0.0, 0.0, 0x1.a31ddf956273fp-20, 0x1.05f0d79db0684p-952, 0x1.c50d6170db77fp-64,
     0.0, 0.0, 0x1.5f9e22b28006ap-530, 0x1.5235641ecae5ep-163, 0x1.d8eb0e2a3addbp-123,
     0x1.ef90e467a9766p-57, 0x1.96b7dd5a694e2p-669, 0x1.0a948e2a2f28fp-6, 0.0, 0.0,
     0.0, 0x1.9bb73b1cf2555p-232, 0.0, 0x1.81f165f1d8b6p-611, 0x1.76fed5b77d67p-640,
     0x1.92d5fd5dfef48p-488, 0.0, 0x1.f9fa0363ee70dp-733, 0.0, 0x1.ad4d8247d5d1p-553,
     0.0, 0x1.dbcdb11b04d4ep-448, 0x1.26b0c307ee0f8p-972, 0x1.44ce8c9593455p-906,
     0x1.7a2dcfbb1d9d4p-488, 0.0, 0x1.9fa31dc18b75bp-66, 0.0, 0.0,
     0x1.da2472214dcd9p-545, 0.0, 0x1.ec876cb551ee9p-739, 0.0, 0x1.248e5f5d71354p-376,
     0x1.b74a5411dbce1p-888, 0.0, 0x1.a15edc3eabbffp-117, 0x1.7a243167a3c87p-404, 0.0,
     0.0, 0.0, 0.0, 0x1.60e335b76d64bp-151, 0.0, 0x1.49f11da2b1677p-527, 0.0, 0.0,
     0.0, 0x1.6249ca3bbbc16p-533, 0x1.35eaa6c1b8e45p-728, 0.0, 0.0, 0.0, 0.0,
     0x1.ed2e11d26c2bep-1021, 0.0, 0.0, 0x1.5f556be3e6d8ep-923,
     0x1.b07cc74e9902cp-804, 0.0, 0x1.3082c9f69d93ep-164, 0x1.357ee23fc68dfp-489,
     0x1.508559a1a9a02p-78, 0x1.9acec62e9fba3p-374, 0.0, 0.0, 0x1.c08d063568af7p-878,
     0.0, 0.0, 0x1.0e0a014198cabp-298, 0.0, 0.0, 0.0, 0x1.f4294b36d95fp-928, 0.0,
     0x1.cb72cc02070bfp-960, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7076902aa86cp-382,
     0.0, 0.0, 0x1.2d7a684ded74cp-112, 0x1.25bc3e59b7795p-371, 0.0,
     0x1.e2a8147a6e262p-344, 0x1.89b4de24b13e8p-663, 0.0, 0.0, 0.0, 0.0,
     0x1.cc93b5aeb2133p-337, 0x1.6475df07e223p-734, 0x1.06440b87de224p-665, 0.0, 0.0,
     0.0, 0x1.5a31236aac32cp-957, 0.0, 0x1.0e1ddfb7d532p-333, 0x1.db695b77c343cp-631,
     0.0, 0x1.aebaded062ca3p-603, 0x1.8a3301d0470f5p-844, 0x1.fb519e7f88c0ep-287,
     0x1.238a705c1e3b2p-727, 0x1.b4c227b13c8dap-700, 0.0, 0x1.14de3bdd7e488p-109, 0.0,
     0x1.86441e28040ffp-273, 0.0, 0.0, 0x1.d0d5c20c39a42p-481, 0.0,
     0x1.c027fbb2c99ccp-120, 0x1.131e6b05a8482p-402, 0.0, 0x1.54d0e06a53172p-90, 0.0,
     0x1.d024e0e384014p-1020, 0.0, 0x1.2e63d0fa805ap-463, 0.0, 0x1.826ad6dcf5653p-455,
     0.0, 0x1.6790607bb24e6p-48, 0.0, 0x1.c57fdbb6020e6p-924, 0x1.c82affb837c8fp-866,
     0.0, 0x1.a506ba88b4d0bp-87, 0x1.0aac1d2983c3ap-572, 0.0, 0.0, 0.0,
     0x1.0ba5c083c27f1p-776, 0x1.2eb834cf45d79p-285, 0x1.eea970eb5c65ap-597, 0.0,
     0x1.6a1964a9c8452p-931, 0x1.a0565edd2c1efp-1016, 0.0, 0x1.a799e8b3fdebcp-999,
     0x1.6064b138b8d25p-9, 0.0, 0x1.cde2347384aa9p-499, 0x1.8ded49acbc83ep-270, 0.0,
     0.0, 0x1.7fede5c7cb38bp-774, 0x1.12aa91cb1628p-112, 0x1.92122b4fea8f1p-789, 0.0,
     0x1.a08cd9ddf07ecp-81, 0x1.ba659a4730523p-887, 0x1.c81355b78acb9p-780, 0.0, 0.0,
     0x1.f4fe692b7309ap-318, 0x1.832cfa8271dd2p-335, 0x1.fe746aa182401p-245, 0.0,
     0x1.1eea0e53bc3eep-116, 0.0, 0x1.aa2e6b9154008p-645, 0x1.1df1da0cf13d5p-61,
     0x1.7ae500c3b5e6cp-573, 0x1.35f976b710598p-963, 0.0, 0.0, 0.0,
     0x1.ce4491ec519c2p-427, 0x1.d026af7b3e933p-25, 0.0, 0.0, 0x1.e5c3ec1ca8623p-677,
     0x1.f9251fb36b5a5p-111, 0x1.0de175167e2efp-188, 0x1.9a000a0375d41p-344,
     0x1.189317cfdc6f1p-967, 0.0, 0.0, 0x1.ebe4a670f088p-40, 0.0,
     0x1.cd39f5057eeedp-202, 0.0, 0x1.2b5994d004faap-561, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d5f98bcfe79dp-687, 0x1.c3d64adccec4cp-793, 0x1.7ea4df8623723p-1020, 0.0,
     0.0, 0.0, 0.0, 0x1.d0e24a0f395fep-751, 0.0, 0.0, 0x1.1e7d3bc954e73p-796, 0.0,
     0x1.04f822e69d94fp-176, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48638c896ed2cp-958,
     0x1.2631a0e7a362ap-128, 0x1.48299892ee17ap-759, 0x1.e6b58c58387d3p-324, 0.0, 0.0,
     0.0, 0x1.7d41ed4179ebbp-80, 0x1.2c0c5340c248cp-970, 0.0, 0.0,
     0x1.181856fc22c7dp-704, 0.0, 0.0, 0.0, 0x1.fdf0545f0064ep-491, 0.0,
     0x1.c59625172bf1dp-1001, 0x1.56c1090fdef41p-974, 0.0, 0.0, 0.0, 0.0,
     0x1.f6175bb6f846bp-612, 0x1.f43c81d9406f3p-83, 0x1.a96aac3a4d704p-190,
     0x1.77c6189ac1a76p-272, 0.0, 0x1.098deaf3b9e0bp-930, 0x1.16e78c9199cfp-691,
     0x1.fdc40dd92940ep-521, 0x1.278032a1e6a9bp-950, 0.0, 0.0, 0x1.cde37315e9ce6p-629,
     0x1.88085773ae484p-889, 0x1.25e02c81e2631p-96, 0.0, 0x1.246c6b2ef3018p-431,
     0x1.f5e5b8fd4c32bp-106, 0x1.e7bbe939eb805p-496, 0x1.21207760871a1p-224, 0.0,
     0x1.c522a0b229d36p-173, 0.0, 0x1.dd7b83e17d20ep-770, 0x1.2c0c8bebfb137p-701, 0.0,
     0x1.296db6f04ac4cp-989, 0x1.5f1b05c11db62p-92, 0x1.c88a707b0b2d4p-76,
     0x1.ef09ea2647a85p-804, 0.0, 0.0, 0x1.367db39f7a874p-270, 0x1.321b94389598dp-460,
     0x1.e65a88035157ep-639, 0x1.914548ef4237cp-278, 0.0, 0.0, 0.0,
     0x1.37b9a63de3f2ep-194, 0x1.b350a00ff9d0dp-84, 0x1.ddac1b880ca72p-655, 0.0, 0.0,
     0x1.f1b3c035c17b2p-542, 0x1.8134f7c3d621ap-122, 0x1.6bb8edfb73eaap-618,
     0x1.a7e9e87b7dec6p-118, 0.0, 0x1.7a3f2f1d74883p-961, 0x1.689195e196a56p-733,
     0x1.7c6b55f7bd89dp-227, 0.0, 0x1.7aeec753ca405p-470, 0x1.394c8e1b934a1p-83,
     0x1.5ac05868b396dp-287, 0.0, 0x1.24bfa186c41bfp-4, 0x1.391534b204facp-34,
     0x1.06f0328dfd728p-939, 0x1.3b8346b988805p-199, 0.0, 0.0, 0x1.d2848551f9012p-893,
     0.0, 0x1.2ed51e6f1e14cp-19, 0x1.ac9f3343dd607p-131, 0.0, 0.0,
     0x1.6f5f4553c4537p-463, 0.0, 0.0, 0x1.10ad7cc9a8d5p-708, 0.0, 0.0,
     0x1.cab814c03af7fp-490, 0.0, 0x1.2ec8664a82cb2p-331, 0.0, 0x1.36c3c4fc00c1cp-992,
     0.0, 0x1.d192b94283a2ap-432, 0x1.c41e48ff385fdp-364, 0x1.c7b641afd22b7p-227, 0.0,
     0x1.55f23bc7117c8p-558, 0x1.f4970569cd36bp-14, 0x1.695a0c1510bc7p-744,
     0x1.f2721bba9265fp-466, 0.0, 0.0, 0.0, 0x1.f878848f4db91p-478, 0.0, 0.0, 0.0,
     0.0, 0x1.ca6cd2019572p-99, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49c6a6f2c3009p-50,
     0x1.b30d9a41deaf6p-422, 0x1.66902e40f545fp-817, 0x1.909107da419f7p-697,
     0x1.1f26188ab1a6dp-561, 0.0, 0.0, 0.0, 0.0, 0x1.4c5f7ba210486p-381, 0.0,
     0x1.bb4215e988637p-803, 0x1.e20d2ad7ff72p-779, 0.0, 0.0, 0x1.3a2faeb913335p-260,
     0x1.705097ad872edp-601, 0x1.68e328a173192p-790, 0.0, 0.0, 0.0,
     0x1.92cd6477f0458p-980, 0x1.dbcffbf33ee88p-1019, 0x1.e71a4b5465adbp-626,
     0x1.ba5f4d9c6a36bp-542, 0.0, 0.0, 0.0, 0.0, 0x1.192f8d85f8f3ep-427,
     0x1.8ee24309d37fp-980, 0x1.edee3e79a7ebp-29, 0x1.f5d832cdc516ep-614, 0.0, 0.0,
     0.0, 0.0, 0x1.0eeb76dfc4f7dp-850, 0.0, 0.0, 0x1.0b03d01dee023p-472, 0.0,
     0x1.8e5721192be0ap-730, 0.0, 0.0, 0x1.d9f6bf9697b7ap-265, 0x1.1d2e431f101adp-906,
     0x1.55f8102892d46p-817, 0x1.1f8c29ec3e026p-856, 0x1.80482b0631cd8p-199,
     0x1.03d1d08d72a28p-361, 0x1.8c6723546e39p-813, 0.0, 0x1.2651402b80946p-224,
     0x1.17f767fb46b91p-264, 0.0, 0.0, 0.0, 0.0, 0x1.c488f2cccaeb3p-905, 0.0, 0.0,
     0x1.251922df2199cp-269, 0.0, 0x1.29927ca2db8aep-183, 0x1.a2a7080c57764p-111, 0.0,
     0x1.39c9b0b36236ep-625, 0.0, 0x1.78b17c1a12455p-71, 0.0, 0x1.4c96955f62d9dp-97,
     0.0, 0.0, 0x1.0296f10cb57c9p-199, 0.0, 0x1.5e92e7440a5cfp-497,
     0x1.345ec566770a7p-101, 0.0, 0x1.b5a2a7c3a5e0dp-586, 0x1.7c84341e663c9p-922, 0.0,
     0x1.c239dba61fbbbp-339, 0x1.03d3b4b89d9fap-125, 0x1.b6e9e129a2e27p-182, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosd2_u10avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd2_u10avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
