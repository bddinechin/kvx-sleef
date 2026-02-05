/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10d2_u10avx2128.c --function \
 *     Sleef_finz_log10d2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.147aa127430acp-626, 0x1.a7745df8f8342p-990,
     0x1.cba77e4deea06p-972, 0x1.1a90834b7eb1dp-752, 0.0, 0x1.42e6635b6007ap-542, 0.0,
     0.0, 0x1.179f826bd4732p-212, 0x1.0d8b87e739a82p-954, 0x1.bbf56be7d8458p-515, 0.0,
     0.0, 0x1.55cf911a4a1cep-396, 0.0, 0x1.c6bb5d8eaf65bp-362, 0x1.c7c210fbb5ddp-919,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bee5b44e507c6p-472, 0x1.9597780b685ffp-726,
     0.0, 0.0, 0x1.bc49254e69cc8p-999, 0x1.b799c6c9199e1p-640, 0.0, 0.0, 0.0,
     0x1.ae0f11850c386p-785, 0.0, 0.0, 0.0, 0x1.0cae4412a5ddap-765,
     0x1.28b75cd853fa5p-838, 0x1.e67fb7e3acbd1p-35, 0x1.7259c01e74d6dp-269, 0.0,
     0x1.63a406209e449p-1010, 0x1.de2e7fbf7a221p-800, 0x1.1c06936ce7433p-766, 0.0,
     0x1.d58f1c23af9cfp-427, 0x1.dff954ff93dcp-7, 0.0, 0x1.a44df438e94fep-213, 0.0,
     0.0, 0x1.098f0b9fff448p-387, 0.0, 0.0, 0x1.c9e082753bf26p-251,
     0x1.d118d91f7fff3p-853, 0.0, 0x1.b05f88e836b5fp-939, 0.0, 0x1.35badf301b5fbp-1,
     0x1.96c9ed01c787ap-937, 0x1.ffeb2ed8baaccp-736, 0x1.0e3f75bb0250bp-572,
     0x1.e717c9bb59e8bp-941, 0.0, 0x1.724e91357e8dep-972, 0x1.fa71e82a1bf96p-778,
     0x1.ebfcbd7e3fe05p-648, 0x1.54eb89d0a5b92p-784, 0.0, 0.0, 0x1.9bbe252ac17ecp-9,
     0.0, 0x1.c7f392aee729ap-682, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ce8a753214eep-726,
     0x1.30e187838c48dp-149, 0.0, 0.0, 0.0, 0.0, 0x1.85f5ea0ef7187p-484, 0.0,
     0x1.b8c52a0ee2ad1p-844, 0x1.7ce051862bd19p-422, 0.0, 0x1.61a579fde14dbp-279,
     0x1.6803bb02835fp-910, 0.0, 0x1.6465d365aa4efp-852, 0.0, 0.0,
     0x1.d229d297475ecp-948, 0.0, 0.0, 0.0, 0x1.9442c7eb130cep-99,
     0x1.aeb342d4fbf76p-108, 0x1.980665dfc1659p-852, 0.0, 0x1.10088483826e9p-543, 0.0,
     0.0, 0.0, 0x1.456e0b4bc71acp-699, 0.0, 0x1.3eef105c9dcep-379,
     0x1.6ccf7ffd9b54p-369, 0.0, 0x1.7d8c4c38dd669p-520, 0x1.c0df814d426adp-1006, 0.0,
     0x1.05e1045dfa1afp-930, 0.0, 0.0, 0x1.d0be5e8edd599p-953, 0x1.bb3a1267f2ccbp-856,
     0x1.4010d0e08c70bp-766, 0.0, 0.0, 0.0, 0x1.924fce4716a28p-924, 0.0,
     0x1.16a56daf5107fp-259, 0.0, 0x1.c051e952cf622p-121, 0x1.334c936b25e55p-154, 0.0,
     0x1.7272460346a29p-625, 0x1.6d3ed0d49b4b9p-548, 0x1.8193baea9f56cp-345, 0.0, 0.0,
     0.0, 0x1.f91536cf9f0f3p-254, 0x1.c1ce1a8e60eedp-717, 0x1.bb1e50d2fa42p-613, 0.0,
     0.0, 0.0, 0.0, 0x1.22e81633b64ebp-415, 0x1.92384d72f7c68p-619,
     0x1.d4b21e85cfdc6p-673, 0x1.22cab50d48bbfp-27, 0.0, 0x1.2a5dba2627d02p-44, 0.0,
     0.0, 0x1.092282934098cp-158, 0.0, 0.0, 0.0, 0x1.cd170103c4c15p-300, 0.0,
     0x1.76a4c9731c7f1p-379, 0x1.9dd675682a264p-912, 0x1.c51f5d1acfa97p-928,
     0x1.39aca1e20f803p-832, 0x1.59af2f4e0c16p-625, 0.0, 0.0, 0x1.f9ef0a96e025ep-198,
     0.0, 0x1.db82eaa256fbfp-81, 0.0, 0x1.ec617446ff95cp-317, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0836d495fffb9p-564, 0.0, 0x1.61f4818b1cc7bp-955, 0x1.3735f24d449e5p-984,
     0x1.b6b0b771a0c86p-362, 0x1.5230cd03081c9p-815, 0x1.f1636e60dd2cep-443,
     0x1.4fe6cd5f843bp-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.834bc707739a2p-382, 0.0, 0.0,
     0x1.2adf9832f9e7cp-120, 0.0, 0.0, 0x1.4d592e48bc8f2p-585, 0x1.723436a9d58b5p-111,
     0x1.8cc6a1692733ep-634, 0x1.5923a10c5e93dp-847, 0.0, 0.0, 0.0,
     0x1.d1a69d36a3f8dp-651, 0x1.52946c3a80f84p-559, 0.0, 0x1.4a9c624a494dep-663, 0.0,
     0x1.2b17193042cfbp-274, 0x1.84a586a7c4deap-885, 0.0, 0.0, 0x1.836a3165a0f29p-651,
     0.0, 0x1.28b9fc12cacbfp-925, 0.0, 0.0, 0x1.07992a4d939ebp-264, 0.0, 0.0,
     0x1.36a23bd975c1bp-606, 0.0, 0x1.f5d79a1a18617p-546, 0x1.9c7e6614d56fap-527,
     0x1.9322d92c64b71p-336, 0.0, 0x1.eeeba008dee22p-681, 0x1.ba140ee40f096p-68, 0.0,
     0.0, 0x1.d56d6ea224f87p-242, 0x1.f8178899e4fe4p-778, 0x1.24fda5a80d5bap-10, 0.0,
     0x1.ae2409467aa8bp-653, 0x1.b66b7672d0e87p-976, 0x1.f3d5e1e94b81p-512, 0.0, 0.0,
     0.0, 0x1.bedf6d3fef02ap-874, 0x1.cb5d928de7fe9p-760, 0x1.886d6a1268eaap-28, 0.0,
     0.0, 0x1.b3d2fb6090e42p-776, 0x1.986e4d4e99b1bp-32, 0.0, 0.0,
     0x1.a21821144ef34p-355, 0x1.036d0243ae123p-820, 0x1.0f45a432a7ecep-679, 0.0,
     0x1.cde0bc02bf84dp-962, 0x1.4941e1ea1bff8p-351, 0x1.c51b21af5fda8p-998,
     0x1.0add951566323p-323, 0.0, 0x1.cd9c7939c4a06p-856, 0.0, 0.0,
     0x1.4a1f63b98abb2p-82, 0.0, 0x1.a234526ac1a11p-615, 0.0, 0x1.5abaf15b152a7p-89,
     0x1.1afd3e60b2c81p-505, 0.0, 0.0, 0.0, 0x1.53c87f4f4b0f9p-666, 0.0, 0.0, 0.0,
     0x1.d4e86ba517f22p-881, 0.0, 0x1.c1e62e96ac90fp-51, 0.0, 0.0, 0.0, 0.0,
     0x1.1f16fc307b50fp-697, 0.0, 0x1.c5521deaec959p-303, 0.0, 0.0,
     0x1.13bfc6e7df09ep-621, 0x1.6a604bf9b727dp-542, 0x1.cf852ba5aa7f4p-945, 0.0,
     0x1.0c6ec5f1412f6p-340, 0x1.0a7e141ce1e19p-522, 0.0, 0.0, 0x1.eff93b37cad05p-335,
     0.0, 0.0, 0x1.497f77ad268dfp-931, 0x1.c700e6d6d4da5p-689, 0.0,
     0x1.624eece461d61p-249, 0x1.209e6bc608983p-565, 0.0, 0x1.f8822facfdceep-874, 0.0,
     0x1.d1f93510515eap-811, 0.0, 0.0, 0.0, 0x1.83de206e54e4cp-392,
     0x1.199b13ec355dap-427, 0.0, 0x1.9b3709e741b29p-32, 0.0, 0.0, 0.0,
     0x1.b0c16549d5ce4p-321, 0.0, 0x1.bb09d3a8c5477p-612, 0x1.dd4b53af3c3adp-239,
     0x1.0681076a6d1efp-395, 0x1.da268a4d826efp-678, 0x1.11caeca86566p-626, 0.0, 0.0,
     0.0, 0.0, 0x1.aae9980b9d836p-818, 0x1.c7757459f3cc3p-271, 0x1.a9893844a9cb6p-93,
     0x1.b8c06541cb135p-167, 0x1.9b6a11743a284p-11, 0.0, 0.0, 0x1.43da3e63d89c4p-268,
     0.0, 0x1.6f2321df30f6dp-379, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.20e162d2f3f7dp-513,
     0.0, 0x1.5c58846e702b1p-528, 0x1.abf2a530c8546p-111, 0x1.a8f1239ede7dfp-264, 0.0,
     0x1.2a36f8e77dce1p-810, 0.0, 0x1.b34d2239cd8cbp-719, 0x1.76efc2611da73p-907,
     0x1.a5f77ca6a9b83p-855, 0.0, 0x1.5465d941f3331p-57, 0.0, 0x1.cc6835b60a413p-432,
     0.0, 0.0, 0x1.03634f091209cp-179, 0x1.e875345777325p-993, 0.0,
     0x1.a7a0cec8a6adep-369, 0x1.f36a05367a893p-799, 0x1.18ab0a041bbc7p-414,
     0x1.0a7d0074ee1c4p-919, 0x1.e85ba24879a22p-937, 0x1.de9b8a841c52ap-443,
     0x1.e63fc039a03bap-933, 0.0, 0x1.19dfa52ac525p-705, 0x1.ed0fe8f27e669p-484, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9e1e65a0023f8p-338, 0.0, 0.0, 0.0,
     0x1.1bd4a3d5bff03p-668, 0x1.d1e34aa698556p-832, 0x1.fe638c84f7e42p-260,
     0x1.85b584d303844p-165, 0.0, 0x1.a4439ca70d8ebp-557, 0x1.e41109f464916p-983,
     0x1.a501ff3d54803p-855, 0x1.25df44c17dc56p-15, 0.0, 0.0, 0x1.ad36c177d2d6bp-221,
     0.0, 0x1.48e1af7deb503p-282, 0.0, 0x1.5df93ada5e8ep-656, 0.0,
     0x1.7d4f001b93b87p-184, 0.0, 0.0, 0x1.d851afd0c7d64p-966, 0.0, 0.0,
     0x1.d5132a966763cp-951, 0.0, 0x1.362b02ae99f37p-966, 0.0, 0x1.6cd25163b67a1p-138,
     0.0, 0x1.a2ced74c86fe7p-282, 0.0, 0x1.d2879c22eb712p-427, 0.0, 0.0, 0.0, 0.0,
     0x1.faf2118ae5403p-907, 0x1.461edc9713a3bp-781, 0.0, 0x1.6778e0e72fb81p-482, 0.0,
     0.0, 0x1.9a528a9d784e3p-209, 0x1.98a392be7cbfbp-299, 0.0, 0.0, 0.0,
     0x1.4277cd9902ed9p-531, 0x1.820ac77993fb7p-887, 0.0, 0x1.d67c98bdfff3bp-797,
     0x1.65ac28a48b75ep-63, 0.0, 0.0, 0x1.c13503ca6ac35p-44, 0.0,
     0x1.2e94822e80ba7p-659, 0x1.5b7807c6f4809p-760, 0x1.b54208005c2cbp-574, 0.0,
     0x1.664e6651102f3p-185, 0.0, 0x1.3eb44c6f24e36p-735, 0x1.3d09d1670d68p-82, 0.0,
     0.0, 0x1.06a94929dcce5p-575, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.513ee799e2068p-418, 0.0, 0x1.a968850899839p-589, 0.0, 0.0,
     0x1.5aa635ee6e8fdp-109, 0x1.082de9532897p-6, 0x1.7ad1b9ebff6e9p-140,
     0x1.1fc11ed2f400ep-922, 0.0, 0.0, 0.0, 0x1.d93440ead8eabp-750, 0.0, 0.0,
     0x1.05134afdce761p-910, 0.0, 0.0, 0x1.e83577cae2fe2p-127, 0x1.390ac6d94e199p-404,
     0x1.599e414cd18a4p-627, 0x1.5546643245a32p-621, 0x1.8d4a69ef87b87p-483, 0.0, 0.0,
     0x1.0dd9b2c896fa4p-483, 0x1.3a73010c7e289p-1005, 0x1.57ebe72d85b2fp-734, 0.0,
     0x1.7e2fe8143f62p-19, 0x1.f10bfd58ca7bp-564, 0.0, 0x1.163c9ccbb19bap-492,
     0x1.9b05ebbe97f1ep-395, 0.0, 0.0, 0x1.a81fbcc38e3c3p-891, 0x1.5bf8dad4a3e56p-353,
     0.0, 0x1.8f7177c5c75a3p-516, 0x1.34c628fc2ceaap-681, 0.0, 0.0,
     0x1.4351098353d09p-214, 0x1.73d29c41c6a6fp-648, 0x1.d503625a076f4p-982, 0.0,
     0x1.2e2e52b150772p-10, 0x1.bb88577d9b6aep-384, 0x1.42ea57a3ca1c7p-793, 0.0, 0.0,
     0x1.09250ec1925cdp-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.81932a7ffccc5p-973, 0.0, 0.0, 0.0, 0.0, 0x1.c05093e6621ecp-257, 0.0,
     0x1.440cce52ecbf9p-796, 0x1.b69f656d3b6f2p-91, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.31244a3a3e864p-322, 0.0, 0x1.a6dfa878b1b71p-712, 0x1.bef4f418fa6efp-916, 0.0,
     0.0, 0x1.b046eeb7de9a4p-866, 0.0, 0.0, 0x1.a07ba864a9318p-261,
     0x1.b296462d22e41p-841, 0x1.a2143d1b23b36p-711, 0x1.36f8e3344f1c2p-258,
     0x1.ac61e581a15c5p-464, 0x1.79985af40531cp-141, 0.0, 0.0, 0x1.7dc801d838a1cp-294,
     0.0, 0.0, 0.0, 0x1.5ca69525c274ep-437, 0.0, 0x1.55b545905d9e4p-381, 0.0, 0.0,
     0.0, 0.0, 0x1.84b3b2478f587p-889, 0x1.acac7de7ce37fp-61, 0.0, 0.0,
     0x1.95fe624b4571ap-950, 0.0, 0x1.535f536d37e6cp-800, 0.0, 0.0,
     0x1.a6512a3c9a5cap-21, 0.0, 0.0, 0.0, 0x1.573377520d29ap-573,
     0x1.73d9ec732152cp-708, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca6ae1fa0d64bp-507, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00e3606657049p-700, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.801bd1ab3a9f5p-756, 0.0, 0.0, 0x1.f3b0289f9af2dp-70, 0.0,
     0x1.6672a47e16932p-599, 0x1.fdcf3eda31bbcp-167, 0x1.db22f2453f69ap-933,
     0x1.37de42d9f7b77p-422, 0x1.39247ba686e62p-359, 0.0, 0x1.00cfec168f3f4p-742, 0.0,
     0x1.ec4678ea3276bp-328, 0x1.a2329d3311709p-403, 0x1.1a92ffb7de543p-950, 0.0,
     0x1.5ad9e252b2001p-203, 0x1.a3c958c40bc6dp-614, 0.0, 0x1.eacd3ee45e095p-398,
     0x1.1e7dbadcd5625p-535, 0.0, 0x1.d9e64458b7089p-715, 0.0, 0.0, 0.0, 0.0,
     0x1.214b394e05044p-877, 0x1.ca3b2428c178dp-259, 0x1.ffc0a9e7273a8p-849, 0.0, 0.0,
     0.0, 0.0, 0x1.3bc9e8100f2d7p-286, 0.0, 0x1.41bab0a636329p-730, 0.0,
     0x1.650d43254842ap-319, 0x1.8fa53db5dfff4p-233, 0x1.e34c22d9f09dap-68,
     0x1.c0ed29fd9f89cp-227, 0.0, 0x1.b53e2a5612a16p-805, 0.0, 0x1.de5662c3d1196p-152,
     0.0, 0.0, 0.0, 0x1.a5e8790e12897p-345, 0.0, 0.0, 0.0, 0.0,
     0x1.57d6bf6ac4affp-950, 0.0, 0.0, 0.0, 0x1.bb69ace90804bp-519,
     0x1.0788daacd26fdp-985, 0x1.bfda907a690ap-773, 0.0, 0x1.3658d9b5476bfp-488,
     0x1.cdb177370299dp-239, 0x1.f6b981c24f667p-294, 0.0, 0x1.01f4f36b27b1fp-937, 0.0,
     0.0, 0.0, 0x1.411ad6ca74c72p-751, 0x1.f469107bf92e2p-972, 0.0, 0.0,
     0x1.2f8294064c69dp-80, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74c071468ad93p-104, 0.0, 0x1.1116a61b23ce3p-620, 0x1.6b6dfe0f98b6cp-769,
     0x1.2dc1813c8ef1bp-715, 0x1.a76c89a949b08p-65, 0x1.922156d9f764dp-932, 0.0, 0.0,
     0x1.23c7a6dd0975fp-146, 0x1.0b1fd59090c62p-242, 0x1.815b641a0bbd3p-435, 0.0,
     0x1.ef73428bae6a4p-680, 0x1.e1a64dc6f12e2p-777, 0x1.86490703ecc36p-101,
     0x1.184923e2f2aacp-166, 0x1.c547fce5e618dp-521, 0.0, 0x1.44e12c4cbff9p-392,
     0x1.a1ad2499c2763p-634, 0x1.0b6fbeb7d5314p-314, 0.0, 0x1.6d19fe84ca3c4p-501,
     0x1.aa8f7f6f72455p-970, 0x1.80ca08ed06213p-474, 0.0, 0x1.de084c7e1822dp-718, 0.0,
     0.0, 0x1.dce0d804199c8p-845, 0.0, 0.0, 0x1.d34f24d6c0301p-298, 0.0,
     0x1.0b6370c3848ap-157, 0.0, 0x1.8e72a3af8948dp-399, 0.0, 0x1.508e4b31bf1cdp-478,
     0x1.515cfa8efe45ap-146, 0x1.795d70c6a41b2p-851, 0.0, 0.0, 0.0, 0.0,
     0x1.c6b17f7a3b3cdp-339, 0.0, 0.0, 0x1.7a07f77d16afep-65, 0x1.7bae8e6cfb607p-11,
     0x1.0410e8117979cp-743, 0x1.992f8a43ec862p-558, 0x1.e52a52196813ap-900,
     0x1.fd10bf64a0f03p-342, 0.0, 0x1.192d242652c14p-135, 0.0, 0x1.86620b62df5c7p-529,
     0x1.da8eabea4cad8p-218, 0x1.e9d336bd457bbp-968, 0x1.c0d7abc9c5f7p-415,
     0x1.0260d142fae68p-73, 0.0, 0x1.090203f96c94dp-158, 0.0, 0.0, 0.0,
     0x1.0d3a9c8e31919p-842, 0x1.0e1d96ced0ca4p-405, 0.0, 0.0, 0.0,
     0x1.55a29498b99b4p-662, 0x1.be2735b1da489p-341, 0x1.7ffc7357ac267p-200, 0.0, 0.0,
     0x1.ee01312635841p-168, 0.0, 0.0, 0x1.d5502127a7269p-266, 0.0,
     0x1.dc111b98fbe49p-417, 0x1.491974d68229fp-318, 0x1.47befee39a746p-146, 0.0,
     0x1.1c3b66c117742p-235, 0x1.7302f014ba2e7p-922, 0x1.a9bd9afd4b216p-529, 0.0, 0.0,
     0x1.c8c714bde806ap-735, 0.0, 0.0, 0.0, 0x1.d2a9531ec4318p-196, 0.0,
     0x1.5314712a6493cp-637, 0.0, 0x1.1dcb2cef654f3p-560, 0x1.280c96fd493b8p-374,
     0x1.4dbd94d116dfbp-411, 0x1.ed48d1e32780ep-470, 0.0, 0.0, 0x1.e6180c9b5a77ep-228,
     0.0, 0.0, 0.0, 0.0, 0x1.9ec84739e4849p-517, 0.0, 0.0, 0x1.ff836f2ae201ap-337,
     0x1.ff2429478db9fp-778, 0.0, 0x1.dc6507cd4da31p-962, 0.0, 0.0, 0.0, 0.0,
     0x1.1b61be945dd01p-162, 0.0, 0x1.09cf72ab34e09p-1012, 0x1.424fed1440352p-139,
     0x1.30c59212ec32ap-72, 0.0, 0x1.e301f77c4a7fcp-739, 0x1.86818009f76a7p-497,
     0x1.fef91d1a8e0b1p-164, 0.0, 0x1.9bec7a36043bbp-57, 0x1.6811be8a8509dp-1021, 0.0,
     0x1.0511a321977e6p-931, 0x1.c6e7e79c84102p-297, 0x1.142e6831e8c08p-361, 0.0, 0.0,
     0.0, 0x1.778e1f3987f2p-858, 0.0, 0x1.10baf1e8ffc2fp-319, 0.0, 0.0, 0.0, 0.0,
     0x1.68ff122e59b99p-537, 0.0, 0x1.0c2acc980a5e3p-975, 0x1.4debe7f27d09ep-672,
     0x1.d0298d4ce4f12p-47, 0x1.d1adc1140abdfp-659, 0x1.059bcf84fb74fp-901, 0.0, 0.0,
     0x1.76337c569b979p-445, 0.0, 0x1.f31110f3c4894p-414, 0x1.8a26829c7cfb5p-614,
     0x1.38fad9cf61989p-524, 0x1.df040229ce7acp-151, 0x1.96c1e397cf08cp-1004, 0.0,
     0.0, 0x1.13a889574a5cp-803, 0x1.dedff8c2b9045p-57, 0x1.2be999ac2886dp-157,
     0x1.219d4b4044fc8p-1002, 0.0, 0.0, 0x1.bc43d72892058p-992, 0.0,
     0x1.b974d22976999p-321, 0x1.d0a5a448425eap-890, 0x1.d0c5c66f66652p-335, 0.0,
     0x1.d17fbbc908946p-612, 0x1.7df92a940f2b7p-351, 0x1.490817a23163ap-169, 0.0,
     0x1.b0a74da87d894p-157, 0x1.fec43a9b88ebp-853, 0.0, 0.0, 0.0, 0.0,
     0x1.2bf2531744844p-678, 0.0, 0x1.43c7a0a42e3afp-990, 0.0, 0x1.dd459dfb5c585p-959,
     0x1.7659749c7fd38p-789, 0.0, 0.0, 0x1.df2f4979cc327p-331, 0.0, 0.0, 0.0,
     0x1.78bf9ab448b9ep-252, 0.0, 0.0, 0.0, 0.0, 0x1.0908e2deca5d7p-586, 0.0,
     0x1.6d78448a93c6dp-364, 0x1.613a88a6b8ab4p-792, 0x1.c6de63aee8efp-446,
     0x1.e5a69214811eep-268, 0x1.70c853560310bp-567, 0.0, 0x1.89bb18d9a7572p-553, 0.0,
     0x1.cfaef79b3a779p-20, 0x1.5cc602de2d262p-775, 0.0, 0.0, 0x1.108ce5a903544p-399,
     0x1.3a541f1ff1178p-257, 0.0, 0x1.a14d4ee92e0d2p-867, 0.0, 0.0,
     0x1.49a5aaaabe8f5p-534, 0.0, 0x1.e6ac75d5751b6p-633, 0x1.19d8203d41912p-290,
     0x1.4ee9409b452fap-270, 0x1.a39efed13442cp-917, 0x1.9851edc42a115p-327, 0.0, 0.0,
     0x1.3d711d7a586e9p-777, 0x1.62782c2a8bad9p-368, 0.0, 0.0,
     0x1.35ea1296419c5p-1015, 0x1.d789fe37cffecp-287, 0x1.1739b4d743946p-718, 0.0,
     0.0, 0x1.aa7e1a2b2b1e4p-994, 0x1.3fd336cff5a27p-574, 0x1.ee38fe7a0a0c2p-225, 0.0,
     0x1.5e777ef3ccb49p-639, 0x1.51524da710251p-177, 0x1.175811386049dp-292,
     0x1.aecf632118ee3p-867, 0x1.06647bb20be3p-246, 0x1.730d3d46ec74cp-917,
     0x1.1d1f3ce3024f4p-313, 0.0, 0.0, 0x1.d07b707abcc04p-919, 0.0, 0.0,
     0x1.03dc581ee6411p-999, 0x1.2776b119336dep-324, 0x1.611b2ffb5049ap-954, 0.0,
     0x1.f35f84a47c141p-758, 0.0, 0x1.06d28e7f31106p-913, 0.0, 0x1.6f173933560cp-593,
     0x1.d201aec7f46d3p-327, 0.0, 0x1.a0b7e3da5d36ep-426, 0x1.ae771dd6dc659p-34, 0.0,
     0x1.56398ae89f01ep-1016, 0x1.006dcab1a129p-848, 0.0, 0x1.0fa6b095c4799p-496, 0.0,
     0x1.b673fb33258fp-289, 0x1.57125be5b516p-1003, 0x1.b5527a8e35fdap-975, 0.0, 0.0,
     0.0, 0x1.942e210d8c217p-512, 0.0, 0x1.b4e8a46e776ddp-451, 0x1.027ef5091f1bp-490,
     0x1.82e49c7f3562dp-982, 0x1.72cde993ba136p-576, 0x1.6a28c5a5ad4edp-664,
     0x1.5d1cda082b08dp-890, 0x1.488732c3cd32cp-376, 0x1.c824f1c3bf7c8p-389,
     0x1.e52dd44cc3ab3p-398, 0x1.1e93df836375cp-687, 0.0, 0x1.b17277ec7a7bap-59, 0.0,
     0x1.46df793418167p-514, 0.0, 0.0, 0.0, 0x1.84c1aff4b08c7p-925,
     0x1.0e1a0a94ce8f6p-677, 0x1.0c4f816dc417dp-4, 0x1.668cd5fb72447p-321,
     0x1.e8787a2d0e368p-263, 0.0, 0.0, 0x1.61802eccd74fdp-643, 0.0,
     0x1.9b4317238f385p-131, 0x1.593a5fcf56ce2p-611, 0x1.f78270f2af38dp-974,
     0x1.f350327b03f64p-140, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe5c23b238376p-420,
     0x1.8db814ffda239p-728, 0.0, 0.0
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
            tmp1 = Sleef_finz_log10d2_u10avx2128(tmp0);
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
    printf("Sleef_finz_log10d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log10d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
