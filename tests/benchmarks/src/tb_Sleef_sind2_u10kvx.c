/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind2_u10kvx.c --function Sleef_sind2_u10kvx --headers \
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
     0x1.bf1deda069fcp-287, 0.0, 0.0, 0x1.1140ae6a729a5p-503, 0.0, 0.0,
     0x1.e3119dd75c7b2p-445, 0.0, 0.0, 0.0, 0x1.147ff3e8fc90cp-42,
     0x1.28d0b5840ee9p-732, 0.0, 0.0, 0.0, 0x1.6bfe0a8dcd149p-424, 0.0, 0.0, 0.0, 0.0,
     0x1.d4ee16c659608p-504, 0x1.279b3af420fc4p-428, 0.0, 0x1.16f20437368ecp-811,
     0x1.f800945eeea6dp-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c155373a3805p-572, 0.0,
     0.0, 0x1.4467629723bb4p-427, 0x1.fd74d7384a35p-844, 0.0, 0x1.2d50502e0ac11p-149,
     0x1.8a94ed64a481cp-469, 0.0, 0x1.cd44a12abfdcbp-850, 0.0, 0.0,
     0x1.7192f18b49e9cp-662, 0x1.9792f9b5489f8p-280, 0.0, 0x1.56fe634d83fc6p-708,
     0x1.0c1a4b92ed651p-325, 0.0, 0x1.1f111aeccaf98p-891, 0.0, 0x1.ab7d6f153660bp-272,
     0x1.f8d38bd08faep-481, 0x1.2a67f362d6f5dp-30, 0x1.2de85525dd1b7p-641, 0.0,
     0x1.cb2eee8615519p-81, 0.0, 0x1.43f160618cd7bp-256, 0.0, 0x1.1f12b82323b6bp-495,
     0.0, 0x1.6c9ce01089907p-321, 0x1.dafdfef3ef0aap-436, 0.0, 0x1.c7eb759d9b923p-343,
     0.0, 0x1.8516798879bcp-71, 0.0, 0x1.00cf11a99b551p-447, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1424c561c81efp-487, 0x1.0c0b8b6509067p-308, 0x1.f03beeb5ba256p-292, 0.0,
     0x1.6a8aa7a47aa22p-235, 0x1.0fe1a5f0bd787p-581, 0.0, 0.0, 0x1.02085991cac77p-398,
     0x1.99450b6a42ce3p-473, 0.0, 0x1.4275af4c96c3bp-878, 0x1.18becba26e056p-682, 0.0,
     0.0, 0x1.908056653ccd9p-774, 0.0, 0.0, 0x1.ee2ede43734c4p-191,
     0x1.19662fc188b82p-1003, 0x1.7fcccb2c34246p-771, 0x1.38285296fc272p-103,
     0x1.9d87354ad0b55p-890, 0.0, 0x1.fa429bf7fe067p-123, 0.0, 0.0,
     0x1.2581d7563e34dp-978, 0x1.5ed7440868536p-131, 0.0, 0x1.a4c2426375118p-282,
     0x1.9beff64ac04dbp-952, 0x1.ef40d20a0c958p-597, 0x1.7be3989de1fc9p-568, 0.0, 0.0,
     0x1.9b7144fd2637p-462, 0x1.88866931dc214p-29, 0x1.5c06107b38adep-208, 0.0,
     0x1.6064a3615c0adp-311, 0.0, 0x1.afa101bc6c7d1p-306, 0x1.889043c2965f4p-852, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4679c2b7b4f0bp-115, 0x1.cff55e3f79be7p-496,
     0x1.c92f2d8a18bd9p-628, 0.0, 0.0, 0.0, 0x1.4276d7b06696ep-680, 0.0,
     0x1.6e6711a77fc99p-359, 0x1.158cbee5e574dp-642, 0x1.2027d00c6392fp-608, 0.0,
     0x1.062f7505fa76ap-848, 0x1.c8ececd37033ep-247, 0.0, 0x1p0,
     0x1.c53a4e783ed42p-890, 0x1.ce9e1328310e3p-305, 0x1.55e06967e3361p-537,
     0x1.507bdf35cb6cdp-124, 0.0, 0x1.4fd4105bfbb08p-836, 0x1.6efb6918141d8p-381,
     0x1.1ba35a0bfa67ep-727, 0.0, 0x1.15d5d9343464bp-614, 0.0, 0x1.34c97e2e1fd6bp-447,
     0x1.c4e843309aabdp-113, 0x1.82eb71ed339fp-540, 0x1.761500a3abe61p-503, 0.0, 0.0,
     0x1.297e87eddf644p-566, 0.0, 0.0, 0.0, 0x1.1033f8709f892p-808, 0.0, 0.0,
     0x1.33d8e72051b83p-803, 0.0, 0.0, 0.0, 0.0, 0x1.687a58bd84c6ep-108, 0.0,
     0x1.9407e3151e23bp-113, 0.0, 0x1.ec5d48d8d2e8fp-409, 0.0, 0.0,
     0x1.d6cd65c210d7p-386, 0.0, 0x1.a5d7cde7a1113p-267, 0.0, 0x1.7ebb66eaec4cfp-98,
     0x1.fd689815d78bfp-984, 0.0, 0x1.2f88e2910d817p-979, 0x1.b4a257048d2f4p-970,
     0x1.c94518d618644p-1003, 0x1.06133ae70e72cp-203, 0x1.633a5f3bb3e8dp-495,
     0x1.354e6ae81f212p-971, 0.0, 0.0, 0.0, 0x1.b80ffa171e8c4p-411,
     0x1.d8d2907fcfe0ep-202, 0.0, 0x1.c9dcb7f197a61p-469, 0x1.db7c2d5740ea5p-341, 0.0,
     0x1.aa238439d5e3ep-758, 0x1.0cc208a3a94cdp-869, 0.0, 0x1.64da1e2e7c173p-216, 0.0,
     0.0, 0.0, 0.0, 0x1.7ba2b2abe56b8p-167, 0.0, 0x1.689163a51ff5cp-176,
     0x1.da6938ab068eep-802, 0x1.f336842a3fc27p-298, 0x1.ee96770102d11p-709, 0.0,
     0x1.c6854a0ccaf4ep-12, 0.0, 0x1.fcce86f6bbca9p-871, 0x1.399a055b8878bp-673, 0.0,
     0x1.3ea6969d37d0dp-852, 0.0, 0.0, 0x1.6a7577df4a09bp-211, 0x1.21d4a87d6c24fp-741,
     0.0, 0x1.dade31553b745p-813, 0x1.0462e98501762p-847, 0x1.47f748349e242p-936, 0.0,
     0.0, 0x1.da37320f31aap-645, 0x1.ebcccc6c38949p-668, 0.0, 0x1.17fba76d0fb71p-968,
     0x1.6169b3a1254dbp-307, 0x1.5fb65319f0a9p-814, 0x1.4a24b58d98906p-155,
     0x1.99bca3d51d6a7p-930, 0.0, 0x1.719462651d1c9p-703, 0x1.e2350f438bca7p-735, 0.0,
     0x1.05bc72d1aab0bp-80, 0.0, 0x1.89515df6e6ea6p-376, 0x1.dc9d4c54601d2p-398, 0.0,
     0.0, 0x1.447f164a8e4b6p-747, 0.0, 0x1.64ed05d03125dp-984, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9dc8f2ed4fd0fp-48, 0.0, 0x1.f8c53c12ba52cp-809, 0x1.a65ace0bcdb37p-1000,
     0x1.cd75793bd42cbp-847, 0.0, 0.0, 0x1.f2f24d46af91ap-998, 0x1.e00d3ca3c2e11p-231,
     0x1.7bd26bb5d49d3p-111, 0x1.27ff5edfdbfc4p-891, 0x1.f7ab3a50a8b01p-103,
     0x1.f46ef2bbc0eaap-662, 0.0, 0.0, 0.0, 0x1.90dd838ea1a8ep-1017, 0.0,
     0x1.2bb1875c1eacap-670, 0.0, 0x1.ffd078b2bc355p-1017, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e4c77a7e33ecap-200, 0x1.96a865e1c4b9ep-775, 0.0, 0.0, 0.0,
     0x1.b6f619d644952p-690, 0x1.2249c0cdb0d5cp-82, 0x1.f572e8f96599cp-908, 0.0, 0.0,
     0x1.04dad975a494fp-551, 0x1.75c82eca8a70dp-902, 0x1.0ecdeebb945a5p-853,
     0x1.6131004ba3b8p-332, 0.0, 0x1.3a48d4cf7ba71p-694, 0.0, 0x1.4e87e5abe6f0cp-49,
     0x1.c146a00c3535ap-849, 0x1.ecb77a5aae023p-844, 0.0, 0.0, 0x1.74ea74f364cbcp-895,
     0x1.b3b7b8275ef9fp-225, 0.0, 0.0, 0x1.f1ce8f372ce73p-1005,
     0x1.8cccd82f6bb5dp-874, 0x1.2f762b8dcbc14p-280, 0.0, 0x1.29c0e4482d59bp-310, 0.0,
     0x1.503733727cc6ep-846, 0.0, 0x1.e496802c1f478p-818, 0x1.86fc56e13c751p-765, 0.0,
     0x1.e32d0b1fafa38p-720, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45da489f514c4p-120, 0.0,
     0x1.af330d3111e3bp-351, 0x1.09cbfd4daf725p-902, 0.0, 0x1.c3524360296dbp-441,
     0x1.8a1c8b05faa5p-219, 0x1.aab77e3234293p-648, 0x1.23b617111258dp-634, 0.0, 0.0,
     0x1.dbc66cfd31073p-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30aba1191db26p-238, 0.0,
     0x1.110084f744797p-723, 0x1.33c4504a9c40bp-64, 0.0, 0.0, 0.0, 0.0,
     0x1.b272d689fadd7p-163, 0.0, 0.0, 0x1.a25a7553f4bb2p-834, 0.0, 0.0,
     0x1.ef77ff47004c2p-398, 0.0, 0.0, 0x1.b39767106730ap-567, 0.0, 0.0, 0.0,
     0x1.2a0e2bacb0755p-698, 0x1.5ecb7aaa6dda2p-792, 0.0, 0.0, 0x1.1ef7ee893830dp-117,
     0.0, 0.0, 0.0, 0x1.1eb824e6e6f83p-208, 0x1.50ba1966984e8p-713,
     0x1.782e99399b18ep-864, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42343e4a199d5p-91,
     0x1.27dc52ef1cabcp-985, 0.0, 0.0, 0.0, 0.0, 0x1.ab2f46c1656ecp-748, 0.0,
     0x1.c324899ea2f7fp-389, 0.0, 0x1.32a05117b29b8p-280, 0.0, 0.0,
     0x1.4f65696b41db5p-724, 0x1.2b1b6ae8e92ebp-349, 0.0, 0x1.d08ad5fa22936p-83,
     0x1.514092d2e54dp-986, 0.0, 0.0, 0x1.042528e4e121ap-748, 0x1.5c1e765a1cee7p-563,
     0x1.7d7b116f1430ap-689, 0x1.5baef2dc1341bp-825, 0x1.3318c15feb94p-844,
     0x1.ac531cce2fa55p-775, 0x1.9b9bf7805c3e2p-771, 0x1.8421578d0b365p-767, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c667d5b5742p-272, 0x1.596da3c95d8e2p-237,
     0x1.807b93adfbd36p-144, 0.0, 0x1.86a0557c02bafp-550, 0.0, 0x1.7e99402851845p-236,
     0.0, 0x1.b865e6d672ab7p-217, 0x1.bb864668764bep-81, 0.0, 0.0,
     0x1.d63a0d693985fp-995, 0.0, 0x1.1e005aea77e33p-1016, 0.0,
     0x1.e5cbc7644403ap-700, 0x1.698ae6e3a863ep-693, 0x1.bede71aa294fep-744,
     0x1.f57f55f5f08c2p-253, 0x1.2742850446672p-840, 0.0, 0x1.a7735335c1b59p-901,
     0x1.4d4d5a1192c33p-521, 0x1.34e3c19da69a4p-519, 0x1.68d0e2a9af866p-165,
     0x1.355bc155cb4fp-577, 0x1.0d6d9858eda56p-807, 0x1.3793772328acbp-66, 0.0,
     0x1.0231ae7018d85p-203, 0.0, 0x1.afe87132afd21p-710, 0.0, 0.0, 0.0, 0.0,
     0x1.92d71ca77b8aep-3, 0x1.b571e33f55b05p-548, 0.0, 0.0, 0x1.c985cbe36f91p-676,
     0x1.294f60ce7551cp-889, 0x1.d1927b3a91204p-806, 0x1.f9490f5e7436ap-650,
     0x1.2a61a3464f69ap-901, 0x1.8f393b916f2c9p-419, 0.0, 0.0, 0x1.8e820af3de422p-18,
     0.0, 0x1.1f1bff3c69076p-667, 0x1.e2943019ead9cp-435, 0.0, 0.0, 0.0,
     0x1.b13a86024388p-799, 0.0, 0x1.df01c23b92717p-581, 0x1.2f87635263c32p-1012, 0.0,
     0.0, 0x1.ac656f81b9b11p-411, 0x1.3fb06813d636ep-625, 0x1.885731528c54dp-947,
     0x1.4156b598c0ce4p-28, 0x1.21d223dd3c4ep-42, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a83dc91f13dap-412, 0x1.c741e2100f6c8p-359, 0.0, 0.0, 0x1.a75406357db33p-407,
     0x1.851d29cd0edfp-215, 0.0, 0.0, 0x1.3503b599ad236p-506, 0x1.86d2f15f1579bp-103,
     0x1.90ae1f5d6a736p-775, 0.0, 0.0, 0x1.645c563ba10fcp-20, 0.0, 0.0,
     0x1.efac52d5c71a4p-463, 0x1.4f82ad01cdbfcp-380, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eae407f109c2fp-698, 0.0, 0x1.1186248d35ae9p-568, 0.0, 0x1.2444b21f1f87cp-165,
     0.0, 0x1.d1193ce661c0dp-635, 0x1.da9ae747e4033p-105, 0.0, 0x1.5e1d98db58e09p-428,
     0x1.13e177f67af0fp-544, 0.0, 0x1.e60dfed7ad269p-343, 0x1.93d911ee5ae53p-34, 0.0,
     0x1.f7fa56a08a5b2p-235, 0x1.b0f7f40f2f812p-851, 0.0, 0.0, 0x1.06532991e70d6p-511,
     0x1.88ad38385dbb1p-924, 0.0, 0x1.9aa51e40f19b4p-313, 0.0, 0x1.2690e591f7f91p-450,
     0.0, 0x1.757431cf273f5p-115, 0.0, 0x1.39b0f7d0f3b83p-310, 0x1.16cfd7f223467p-594,
     0x1.bc76e1524d05bp-137, 0x1.51d830d436128p-883, 0x1.d856eeac85e7cp-142,
     0x1.5ce4fb97e90c4p-566, 0x1.083a430f31229p-74, 0.0, 0x1.cbb8f85b2d0adp-358,
     0x1.602c5df7f08b7p-602, 0x1.18fd9fcf13b24p-97, 0x1.5bfe1efe85263p-880, 0.0,
     0x1.ff63be9daf3bfp-631, 0.0, 0.0, 0.0, 0x1.66449a8749dedp-858,
     0x1.a976a55deb323p-454, 0x1.acc1f480759bdp-191, 0x1.b05c0880e91eap-761,
     0x1.20783c8995bcp-421, 0x1.eb6aaa3c03d12p-299, 0.0, 0.0, 0x1.ffa496555ba6fp-126,
     0x1.1553cab127b27p-19, 0x1.d3019d61f3477p-1015, 0x1.1863bde482155p-473, 0.0, 0.0,
     0x1.4a168baae17f1p-869, 0x1.23cf2e7a7b8dbp-230, 0x1.3ad470b9fee72p-648,
     0x1.70b73d6864d21p-149, 0.0, 0x1.5ac7c3cffe81dp-478, 0.0, 0x1.d118c4d4b2e5bp-439,
     0.0, 0x1.de245e39bedd1p-773, 0x1.e0326ee411663p-639, 0x1.43e7af42020a3p-641,
     0x1.76101d65379c1p-967, 0.0, 0x1.15fd30004f3e1p-812, 0x1.0b7d6cfd86c94p-443, 0.0,
     0x1.017d282bd829p-977, 0.0, 0.0, 0x1.c3f405627003cp-426, 0x1.9175a501b2f16p-117,
     0.0, 0.0, 0.0, 0x1.d5b5ad536653fp-226, 0x1.5107babdf36cdp-955, 0.0,
     0x1.790c53802736ap-104, 0x1.78ec4bdce8b9p-106, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1441e14fa6322p-94, 0x1.b4fc684c72894p-864, 0.0, 0x1.6c5aa79b573d8p-823, 0.0,
     0x1.40390c805858cp-266, 0x1.d8becede6c565p-29, 0.0, 0.0, 0.0,
     0x1.c149a8bb798a4p-895, 0x1.8a99a2377a71dp-648, 0.0, 0.0, 0x1.3c06a64f9b2e7p-581,
     0x1.1bfd329c965fcp-645, 0x1.cc11c63cafbddp-180, 0.0, 0x1.8a0126e72611fp-329,
     0x1.82570c3685a9ap-540, 0x1.f91b47fb6ed86p-531, 0.0, 0.0, 0x1.19d0fe9b58018p-728,
     0x1.12b47fe9c9cdep-190, 0x1.f1af772886797p-823, 0.0, 0.0, 0x1.d4ba95610a789p-121,
     0x1.ff95c63266044p-684, 0x1.0909a4eef1b98p-131, 0.0, 0.0, 0x1.8d7c373ee7aa2p-942,
     0x1.0f3cbe9d371c2p-479, 0x1.7c89caf138039p-312, 0x1.a73992b5537c6p-620,
     0x1.3da57e668c58bp-127, 0x1.b4800a54d828ep-449, 0x1.b14d01f566843p-640,
     0x1.316142c691e01p-878, 0x1.d291bdaa32f1bp-612, 0.0, 0.0, 0x1.334cbb3bf18cbp-775,
     0x1.3dc1edc6bb6c2p-463, 0x1.40ae270ed1ca6p-903, 0.0, 0x1.4b11ead819a2cp-430,
     0x1.79a880ba572b8p-433, 0.0, 0.0, 0x1.026e7a255de71p-1013, 0.0,
     0x1.1a5e20f2fc3cdp-67, 0x1.f46581c0c0a3ap-977, 0x1.4bf89cf6c507dp-523,
     0x1.fd85e683a181ap-105, 0.0, 0x1.01713e5c900c6p-637, 0.0, 0.0,
     0x1.7f341b0e06ca2p-982, 0x1.6f905b2db4f42p-784, 0.0, 0.0, 0.0,
     0x1.bc4435a3150e9p-116, 0.0, 0.0, 0.0, 0x1.834493f4c1ef9p-996,
     0x1.45aee9d717b6ap-53, 0x1.7c06fba22d57ap-386, 0x1.25bbd7238fa74p-728, 0.0,
     0x1.39514c7eb1208p-978, 0.0, 0.0, 0x1.fcf69dab0c1ffp-481, 0x1.eeb258fe0e73cp-521,
     0.0, 0x1.831256d5dd6e5p-592, 0.0, 0.0, 0x1.f1345c658d0f9p-915, 0.0, 0.0,
     0x1.ed09347e2d61dp-287, 0.0, 0.0, 0x1.561aac08b69b2p-403, 0.0,
     0x1.10cb93c483d23p-652, 0x1.95c7c21082e8ep-255, 0.0, 0.0, 0x1.1c506e5f352f8p-572,
     0x1.643acaf5e6d5p-710, 0x1.c908930d7438fp-332, 0.0, 0.0, 0x1.cbe499be1dafp-674,
     0.0, 0.0, 0x1.5362948111c7cp-874, 0x1.e1bcb6837d5cfp-224, 0x1.cdf4f9bf7e607p-891,
     0.0, 0.0, 0x1.6f97ea9c3894dp-766, 0x1.0dbec3cacc106p-196, 0x1.8d69edac5275dp-863,
     0.0, 0.0, 0x1.9e1df9162aefcp-861, 0.0, 0.0, 0x1.5a318dc5396f5p-295,
     0x1.3735f16f05461p-403, 0.0, 0.0, 0.0, 0x1.3a6c2abf7c21ep-848,
     0x1.699342ee48366p-718, 0.0, 0.0, 0.0, 0.0, 0x1.3f164c2d4b3ap-76,
     0x1.602bf7f1b5a5ep-167, 0.0, 0x1.bab4f90541be8p-239, 0.0, 0.0,
     0x1.6403a1d4b4b31p-298, 0.0, 0x1.2b527df56fafcp-892, 0.0, 0x1.79d1ff1289a17p-854,
     0.0, 0.0, 0x1.92677dd727c1bp-837, 0x1.6f01ce86fdc72p-742, 0x1.1d89cb1e0072ap-268,
     0.0, 0.0, 0x1.2dd507ee8631dp-463, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.032ac0be3e384p-929, 0.0, 0x1.f7637951d3aa6p-756, 0x1.6b21ab4a3011fp-303,
     0x1.0ad831d412146p-325, 0x1.40971e9eec1c4p-663, 0x1.db7b1dd407b0dp-115, 0.0,
     0x1.d30066406637fp-719, 0.0, 0.0, 0x1.649174a0a2825p-242, 0x1.d42c429cc0b57p-617,
     0.0, 0x1.ed82c516d1b57p-982, 0.0, 0.0, 0.0, 0.0, 0x1.8861836fba391p-131,
     0x1.e4395435d499p-555, 0.0, 0x1.93a305a490442p-754, 0x1.9b7b6743de324p-538,
     0x1.ce7b9e4adb68p-410, 0.0, 0.0, 0x1.f53a2bfb894d6p-578, 0.0,
     0x1.b62513fd55fe6p-21, 0x1.69b5c8afa5dddp-433, 0.0, 0x1.ed7e3cf1462bfp-18,
     0x1.0479f2588f554p-780, 0x1.63477c5e46c0cp-319, 0x1.0511f76e3467dp-369, 0.0, 0.0,
     0x1.91a310df621dfp-926, 0x1.478bbfbc0a315p-617, 0x1.c63a126964dbap-782, 0.0,
     0x1.469549341588dp-983, 0x1.215da65750b25p-948, 0.0, 0.0, 0.0,
     0x1.c4417279d2109p-163, 0.0, 0x1.60cf7c9c53847p-256, 0x1.883e2d53a762ep-333, 0.0,
     0x1.5e29489533d11p-325, 0.0, 0x1.99af0049d76efp-452, 0x1.77a9418c90bffp-595,
     0x1.95985aebd3d04p-973, 0.0, 0x1.2f160f639a371p-566, 0x1.1ace69a6c9c18p-345,
     0x1.de821dac939cep-564, 0.0, 0.0, 0.0, 0x1.93dbdd179765fp-385,
     0x1.3effbc6696a94p-247, 0x1.25e5348fc6711p-140, 0x1.ce6b555b78089p-461, 0.0, 0.0,
     0x1.2c12c62e24606p-236, 0x1.56b205d616246p-782, 0x1.39a764eb3070cp-509,
     0x1.2a4fd1cd47db3p-468, 0x1.a1025eb9a9425p-871, 0x1.437bbc721a0bbp-837, 0.0, 0.0,
     0.0, 0x1.2266ceef0cf9fp-240, 0.0, 0x1.9aef2b54b771dp-579, 0x1.86d2bd276a5ecp-978,
     0.0, 0.0, 0x1.56f954c1b530fp-397, 0x1.3bb3958b82417p-771, 0x1.deb00311a589bp-288,
     0.0, 0x1.15360a43df28fp-753, 0.0, 0x1.201561de24563p-367, 0x1.fa2db56d10446p-450,
     0.0, 0x1.6dcd56ed9bc5p-631, 0x1.5604b2bd27ff8p-861, 0x1.d787489279324p-214, 0.0,
     0x1.1d2c7fdb86f74p-598, 0.0, 0.0, 0x1.5a08b315bba68p-966, 0x1.b9dcd24ac0f5cp-188,
     0.0, 0x1.a97b8c9bff362p-543, 0.0, 0x1.f293d9d047e2bp-243, 0.0, 0.0, 0.0, 0.0,
     0x1.14cdbbbed65ccp-580, 0.0, 0x1.704d7fc59015cp-949, 0x1.9d5c83558b1e1p-189,
     0x1.49c997113e8bap-801, 0x1.2af7389c7da07p-886, 0x1.46fdbf513d2aep-863,
     0x1.d4f3334f8cae7p-850, 0.0, 0.0, 0.0, 0x1.c8aecdda74e3bp-839,
     0x1.e550a370070c8p-341, 0.0, 0.0, 0x1.e9e8ae927ee8ep-531, 0x1.e277ccca27cc6p-625,
     0.0, 0x1.5808351bfcd47p-857, 0x1.2a6a22d04058fp-754, 0.0, 0.0, 0.0, 0.0,
     0x1.def809a09fae7p-861, 0.0, 0x1.46f0093d41763p-409, 0x1.a321ab30374f3p-188,
     0x1.1812ec39abf6p-644, 0x1.eb332ad9912fp-537, 0x1.eba797644b05p-537, 0.0, 0.0,
     0x1.4783da7253bcdp-381, 0.0, 0x1.d6c880c3e7c7ap-972, 0.0, 0x1.68a6d2236ba48p-928,
     0x1.8b7bf88b0c972p-125, 0.0, 0.0, 0x1.ee23a64d0b20fp-539, 0x1.2df5c636f80c5p-720,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc953ba6fee88p-180, 0.0, 0.0,
     0x1.0c8c12ddb4605p-621, 0x1.ef70486a58175p-42, 0.0, 0x1.43d996a5a0eb4p-150, 0.0,
     0x1.a91b7f91f9524p-255, 0.0, 0.0, 0x1.3e9cc86389b9fp-34, 0x1.25fadb6054968p-113,
     0x1.4934708b998c1p-398, 0x1.91a380766b8dp-908, 0.0, 0x1.69bd5e986b78ap-1022,
     0x1.7b0c7aa172c5ap-914, 0.0, 0.0, 0x1.57ed5f81cdb1p-72, 0.0, 0.0, 0.0,
     0x1.d0f9b86cfae02p-88, 0x1.c02508f0637a8p-470, 0.0, 0x1.f9f666d9b0b01p-236, 0.0,
     0x1.b9d819b503b9fp-182, 0x1.75c3f2f7ed772p-938, 0.0, 0.0, 0x1.08b53a48729c9p-961,
     0x1.14e06c16059f8p-806, 0.0, 0x1.2635ccf3f9859p-214, 0.0, 0.0,
     0x1.9038b70d0c123p-234, 0x1.44d41c215eb86p-439, 0x1.cca342ad83af7p-168, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0c21bc386d85bp-899, 0.0, 0x1.85853c25b821cp-593, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8a02bab55cdedp-629, 0.0, 0.0, 0.0, 0.0,
     0x1.f4f3c687ae5bcp-501, 0.0, 0.0, 0.0, 0.0, 0x1.d3bbc362730ebp-850,
     0x1.f8ab1e901e93ap-906, 0x1.53d177a6deddap-214, 0.0, 0x1.fa1c0264c13bp-536,
     0x1.41cbfd876fad7p-988, 0.0, 0x1.bf50e7e95ae76p-61, 0x1.4d1fa7ebb6b91p-394, 0.0,
     0.0, 0x1.b22db99ab17dcp-856, 0.0, 0x1.9a2e39f17bff2p-86, 0x1.192dc6abc307cp-253,
     0x1.bc789422e0b7bp-995, 0.0, 0x1.b0d8a7221499ap-357, 0.0
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
            tmp1 = Sleef_sind2_u10kvx(tmp0);
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
    printf("Sleef_sind2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sind2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
