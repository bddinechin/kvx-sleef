/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammad2_u10avx2128.c --function Sleef_lgammad2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.4b35501da755bp-75, 0x1.4257a7fff8fbep-934, 0x1.2bcbd3de0b10fp-231,
     0x1.af289acf88f28p-358, 0x1.f29c95b7689abp-729, 0x1.8cd99275ffd6ep-649,
     0x1.4cacf0d528d94p-168, 0.0, 0.0, 0x1.86da771435507p-206, 0x1.7b1957abb01a2p-871,
     0.0, 0x1.c7e84aee816dbp-841, 0x1.d1000da42be8dp-993, 0.0, 0x1.f9f5aae643c27p-944,
     0x1.72d9fb84adda3p-119, 0.0, 0x1.1b0cf240edaf8p-99, 0x1.f46f2c93f9e56p-787,
     0x1.c5b144dd40a38p-280, 0x1.3c5bba7f30486p-387, 0x1.b16794ef897edp-425,
     0x1.60892829ff889p-388, 0x1.79aa477646f87p-966, 0x1.75a1f81b70d63p-871,
     0x1.66c8a37b915dep-883, 0.0, 0x1.efc3b83563fe5p-1018, 0x1.bdf18ec054a62p-968,
     0.0, 0.0, 0x1.0cbc4c510cd25p-7, 0.0, 0x1.b9cb1144e6c23p-252, 0.0, 0.0,
     0x1.723a5c24a4b0cp-475, 0.0, 0.0, 0.0, 0x1.a1db6bfab99ddp-330,
     0x1.04f950d01d58fp-750, 0x1.c23951944eae6p-703, 0x1.f40ba3a365968p-815, 0.0,
     0x1.09158a549bb6p-608, 0x1.7ce2b23d95e91p-623, 0.0, 0.0, 0x1.f8859c87afab3p-935,
     0x1.915673f44a60ep-403, 0x1.8b7ae4f59ca3fp-1012, 0.0, 0.0,
     0x1.3de1cff262bc9p-859, 0.0, 0x1.fada92bd88c73p-762, 0x1.f53c3fce49a48p-126, 0.0,
     0x1.2e222641afc3ap-174, 0.0, 0.0, 0x1.810ca2ee68cap-944, 0x1.338242a287e48p-331,
     0x1.72bea5045f4fap-835, 0x1.81618e8754afdp-621, 0.0, 0x1.7628ef248fd4ep-192,
     0x1.314dbef377eb3p-60, 0x1.339633036da34p-491, 0x1.d989c0788406ep-232,
     0x1.1dd1d17ef4197p-154, 0.0, 0x1.c598c960e03f3p-548, 0.0, 0.0, 0.0,
     0x1.ede1266ee94c7p-473, 0x1.fe17a305a5b1dp-273, 0.0, 0x1.591d50b44e995p-776, 0.0,
     0x1.45bc24b045b34p-745, 0x1.b15b30af2e52fp-481, 0x1.933efa51f695fp-838,
     0x1.1785a1ef7ede8p-555, 0x1.1f3dfc373055ep-1004, 0.0, 0.0,
     0x1.f0cca7f25d741p-313, 0x1.a87cde53fe96fp-387, 0x1.5e8c365ee2b99p-341,
     0x1.23b5b33af36e9p-492, 0.0, 0x1.714822d90bbefp-884, 0x1.7caa109a7c2b1p-595,
     0x1.8f33306505626p-685, 0.0, 0.0, 0x1.b8b353d69a898p-299, 0x1.68e7ba74a10bap-646,
     0.0, 0x1.7639805caffd7p-381, 0.0, 0.0, 0.0, 0.0, 0x1.ff402d329b72bp-808, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.df3e797a462b6p-826, 0.0, 0x1.71882ce599d7bp-95, 0.0, 0.0,
     0x1.092dd88d581cp-285, 0x1.9b9c8ab75ea38p-154, 0.0, 0.0, 0x1.1e16a726f5519p-815,
     0.0, 0.0, 0x1.63474465d922cp-435, 0.0, 0.0, 0.0, 0x1.d450858461fe3p-901, 0.0,
     0.0, 0x1.24e7a4c08c3fbp-426, 0.0, 0x1.4baeebf12c938p-246, 0.0,
     0x1.8ae1bacdab6b8p-380, 0x1.d1a791ede6ebbp-104, 0x1.99ad6aab55ea4p-59,
     0x1.1cb8673a7ca29p-981, 0x1.83bd1ea6a309bp-14, 0x1.7edd32d240a81p-719, 0.0,
     0x1.f472abcc4bc2bp-306, 0.0, 0x1.ab992a935f7e7p-318, 0.0, 0x1.c0b8b45283903p-541,
     0.0, 0.0, 0x1.25df831b9cd9fp-944, 0.0, 0x1.d1f1f99d4cdc9p-794,
     0x1.536d62d20f5a5p-799, 0x1.f42abd43a8e7cp-225, 0.0, 0x1.5393193c9ec86p-798, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.04ab4790928a2p-509, 0x1.1eb0ff7428dd7p-189,
     0x1.2e58a4f938561p-898, 0x1.5ccc5f3ef572dp-245, 0.0, 0x1.2f0fabd3a984cp-990, 0.0,
     0.0, 0x1.f878964e1d338p-560, 0.0, 0x1.02d3b82238b29p-480, 0x1.94f34cf93fd75p-860,
     0x1.31855d9401d2dp-110, 0.0, 0x1.94687d955dd7ep-665, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51194ec9c3756p-396, 0x1.c5060c3070a02p-924, 0.0, 0x1.5f6db5de6d433p-457,
     0x1.fd4482137d9aap-162, 0.0, 0x1.21fae52883cecp-797, 0x1.f94e49dab9837p-573,
     0x1.12b23a9817f7ep-643, 0x1.e181d6a56f7acp-284, 0.0, 0x1.c8f0b504f8c9dp-527,
     0x1.baef2cfcf2af3p-619, 0.0, 0.0, 0.0, 0x1.469a74d4e08e5p-576, 0.0, 0.0,
     0x1.c4ac7f1245538p-934, 0.0, 0.0, 0.0, 0.0, 0x1.b27573e0b11b8p-736, 0.0, 0.0,
     0.0, 0x1.d6892269aeea6p-1020, 0x1.e0ff05dad38c3p-95, 0x1.4b184eb896ae7p-134, 0.0,
     0x1.cac6ced0e787p-500, 0.0, 0x1.41a0f71583e9dp-650, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cc6cfb68e16e1p-856, 0x1.c335cebdb1777p-52, 0x1.c125040b73cf7p-1,
     0x1.332d864ac501bp-437, 0.0, 0x1.97881ef8b14ecp-829, 0.0, 0.0, 0.0, 0.0,
     0x1.8e8dac36e653dp-99, 0x1.7d87def2e8db9p-323, 0x1.886797441d56ep-61,
     0x1.d1f5b2ed4964cp-738, 0x1.ad504e361cc27p-842, 0x1.a91d31874b49fp-348, 0.0,
     0x1.4e903496184a3p-220, 0x1.6a2dadd0c19f9p-758, 0.0, 0x1.6085d41a8be9cp-332,
     0x1.337f693ef5e54p-723, 0.0, 0x1.75ff7d9e18346p-371, 0.0, 0.0, 0.0,
     0x1.6e2fd09cd5ed8p-687, 0x1.e85000176ea3ap-214, 0.0, 0.0, 0x1.32f82555d14dp-318,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0cc7d2170d126p-835, 0.0, 0.0,
     0x1.a8fea275f4d42p-231, 0.0, 0.0, 0.0, 0x1.ddb094e6c4ca2p-830, 0.0,
     0x1.2180d2fb308d7p-598, 0.0, 0x1.1194ac2863327p-213, 0x1.f144427280dafp-415, 0.0,
     0x1.4d1227557267cp-823, 0x1.220e9a312bdefp-526, 0.0, 0.0, 0x1.aed1aabe3ad0fp-913,
     0x1.9dff35746e8dbp-114, 0.0, 0x1.d6098a4f8788cp-174, 0.0, 0.0,
     0x1.25d2641390c4ep-248, 0.0, 0x1.08d88d0ca6c01p-884, 0.0, 0.0,
     0x1.bd19386aa934cp-963, 0.0, 0x1.46a3cd3f8c5dep-987, 0x1.ab621e45ea4ebp-810, 0.0,
     0x1.07dbd974a8914p-805, 0.0, 0x1.3c70ad876d9c2p-83, 0.0, 0x1.bdd1eea8c09b8p-946,
     0.0, 0.0, 0x1.45c8dcbcd26aep-888, 0.0, 0x1.f0d10b1abfa92p-268,
     0x1.9a30acc7808b4p-529, 0.0, 0.0, 0x1.9fdab5d4b79a5p-316, 0.0,
     0x1.04116a5cf3df2p-1007, 0.0, 0x1.a6465ba062ff7p-713, 0.0,
     0x1.25f568d73080fp-315, 0x1.ff3dd59eeee52p-843, 0x1.caa84a243043p-166, 0.0,
     0x1.c993c1bc25cecp-1010, 0.0, 0.0, 0x1.8a43e91512d22p-534, 0x1.3bcb2e7a02829p-95,
     0x1.9a417972d9575p-822, 0x1.d6a286aed582ap-638, 0x1.ca88f8a4ac256p-280,
     0x1.9dd01f8d0095fp-136, 0x1.ca59884453f8ap-202, 0x1.5f2027adeb8aep-477, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ac587232d6814p-185, 0.0, 0x1.dda1f326e585dp-661,
     0x1.a9fcde3374c9cp-495, 0x1.23d6270100026p-909, 0.0, 0.0, 0x1.7485b4155a274p-621,
     0.0, 0x1.2fb064873de4p-295, 0.0, 0.0, 0.0, 0x1.e3b8b65e0422p-460, 0.0,
     0x1.da8993edad5c2p-31, 0.0, 0.0, 0x1.6f8acf9b80e5fp-239, 0x1.0c9ac442fbb6ap-331,
     0x1.659a9c2f84e8p-38, 0x1.4f2745c2bb61bp-685, 0.0, 0x1.d574a605180fbp-808, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.50c004b261a03p-801, 0x1.347e65e1e7ff1p-470, 0.0,
     0x1.0f441789e9de9p-250, 0.0, 0x1.ddc0ef316b09fp-935, 0.0, 0.0,
     0x1.2dae8373618d9p-622, 0x1.a97e35f048c24p-656, 0.0, 0.0, 0.0,
     0x1.9ca75bdb32974p-316, 0x1.028a529a1991ap-152, 0x1.b5ffd06e3e6b9p-523, 0.0,
     0x1.464673affaea2p-517, 0x1.6b99e7532f9a5p-700, 0.0, 0.0, 0x1.ec04fe3b49da5p-936,
     0x1.e81e0b539c992p-971, 0.0, 0x1.2b22409606a71p-775, 0x1.568785336453p-935,
     0x1.87a0d5f8896cap-426, 0.0, 0.0, 0.0, 0.0, 0x1.f3b21a5ce2263p-653, 0.0, 0.0,
     0.0, 0.0, 0x1.14d73ad8ddd69p-767, 0x1.957cac8ff5355p-252,
     0x1.494b25bb6bccep-1005, 0.0, 0.0, 0x1.51d00761c88fep-549,
     0x1.8124ff97bf5cap-594, 0x1.4af1505cab5e1p-464, 0.0, 0x1.0f751a757543ap-86, 0.0,
     0x1.7990fcc09cb1ep-832, 0.0, 0.0, 0.0, 0x1.a68c737db504bp-153, 0.0,
     0x1.903654e76e24p-588, 0.0, 0x1.8134f9b946123p-534, 0x1.3aead5511b44fp-97,
     0x1.4c371cf027f57p-204, 0x1.7bb5bdbe2e11bp-731, 0x1.5663b8d8851a6p-828, 0.0,
     0x1.0ad4976c82c93p-466, 0.0, 0x1.017608aa6c1d3p-761, 0.0, 0.0,
     0x1.95a9727cff229p-918, 0x1.e6af2cf000515p-491, 0x1.0998acd4498bp-527, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0369edc1155e7p-593, 0x1.b95328abf9482p-610,
     0x1.5920fc7ec450ap-569, 0x1.3a5ce42b34535p-683, 0x1.0458340b769abp-162, 0.0,
     0x1.ee1c442691962p-353, 0x1.26e8a0da7a0eep-190, 0x1.acc3627a70da2p-979,
     0x1.9c2727d892b1ap-294, 0x1.575104f2c5869p-881, 0.0, 0.0, 0.0,
     0x1.d75518b35597dp-625, 0.0, 0.0, 0x1.056247c9955a8p-750, 0x1.7529aa1ffcf7cp-469,
     0.0, 0.0, 0x1.c08a7108fecfbp-531, 0.0, 0x1.8f0061e222af4p-596, 0.0,
     0x1.3e3da9e91402dp-459, 0x1.d1409e5a45904p-757, 0.0, 0x1.d1cc42317b4dep-904, 0.0,
     0.0, 0.0, 0x1.96b8f98c9ca06p-234, 0.0, 0x1.64e35ff732a26p-711,
     0x1.bfa7f5febc0f6p-575, 0x1.e18596693eaa1p-569, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9231ccf869a4p-660, 0.0, 0.0, 0x1.eaa2787332ccp-418, 0x1.e28773096ea04p-396,
     0.0, 0.0, 0x1.1aa26eb090dcfp-451, 0.0, 0x1.d963a8eb1662cp-675, 0.0, 0.0, 0.0,
     0x1.b6daefe7400eep-632, 0x1.1fe9ae0dd6cep-827, 0.0, 0x1.cab9d75cde29dp-888,
     0x1.fed42d751ff2bp-443, 0.0, 0.0, 0.0, 0x1.0445088830359p-680, 0.0,
     0x1.6137625e4d329p-524, 0x1.d06fd2f5932eap-235, 0.0, 0.0, 0.0, 0.0,
     0x1.8a84c876ee02dp-77, 0.0, 0x1.b418b9b5c3c9bp-377, 0x1.98aa40d7c08adp-553,
     0x1.9ecb86349234bp-693, 0x1.30b83833061f1p-381, 0.0, 0x1.a97f0bb0ce76cp-476, 0.0,
     0x1.569de3c8c7cebp-421, 0x1.934c401f2f88p-670, 0.0, 0.0, 0x1.03abcd1207f69p-921,
     0.0, 0.0, 0x1.c15a7676695ep-470, 0x1.b23391a6d4f71p-758, 0x1.4797bb3e9a85ep-880,
     0.0, 0.0, 0.0, 0x1.8280750bb222fp-528, 0x1.e3845301f4c2ap-72,
     0x1.dd275387fdfbdp-46, 0.0, 0.0, 0x1.dd784306cce5bp-673, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2f4d90680f28p-303, 0.0, 0x1.0d7f937d8fb56p-184,
     0x1.267ae6a23b74ep-607, 0x1.27e805e18f652p-116, 0x1.e62492a83d86bp-433,
     0x1.47c374f9886bcp-686, 0x1.6e56247d6bc8bp-534, 0x1.4b676f08da83bp-200,
     0x1.e9948d7be1576p-570, 0x1.90dd6421c62b3p-913, 0.0, 0.0, 0.0,
     0x1.7a6e5ffa47dcep-796, 0x1.f6bbbbf3c4908p-659, 0x1.8b0ce2bebcc38p-838,
     0x1.a37b70842bc45p-866, 0.0, 0x1.46fd53d76a06p-1020, 0x1.52963443807dcp-1013,
     0.0, 0x1.35bb44dbb1e6dp-505, 0.0, 0.0, 0x1.83d5f191e160ap-502,
     0x1.756dc705f79ebp-699, 0.0, 0.0, 0x1.0e0e24382ea54p-479, 0.0, 0.0,
     0x1.0e00941fd24d7p-44, 0.0, 0.0, 0x1.9d08e358394acp-441, 0.0, 0.0, 0.0,
     0x1.b7fd2712f8612p-541, 0x1.5600a3a30e62p-570, 0x1.4c4804c24de73p-1002, 0.0, 0.0,
     0x1.778bbc14a232bp-85, 0x1.4b23a7027a308p-818, 0x1.371d614904072p-409, 0.0, 0.0,
     0.0, 0x1.1262c1e5cf9d3p-323, 0x1.4d0b149916b6ap-856, 0x1.bd1f66a513e68p-128,
     0x1.b23b849bb653fp-683, 0x1.9fd4c2c613393p-123, 0x1.9c75e7d107d42p-350, 0.0, 0.0,
     0.0, 0x1.7e1143b395d2cp-32, 0.0, 0x1.5e39786aaf8e6p-875, 0x1.43690287d74p-887,
     0x1.09463913789cp-391, 0.0, 0.0, 0x1.90175a1e398a2p-494, 0.0,
     0x1.de6121d5bd356p-558, 0x1.3a87f6235177ap-165, 0.0, 0.0, 0.0, 0.0,
     0x1.628801e03cce5p-577, 0x1.1db00ff551736p-549, 0x1.20f53af84a54p-14, 0.0,
     0x1.f2202dfdd0177p-494, 0x1.a3807eedc1ed3p-31, 0.0, 0.0, 0x1.9938b929f066cp-173,
     0.0, 0.0, 0.0, 0x1.a8d78fed7a492p-825, 0x1.cde07ec2ee3e2p-217,
     0x1.2d4ba9b833e6ap-159, 0x1.7269307c23195p-463, 0.0, 0.0, 0.0,
     0x1.df71f2f10d24ap-284, 0x1.bf4b3e04a42eap-198, 0.0, 0x1.ca5f1f6143ae7p-216,
     0x1.c839d1e42f412p-238, 0x1.202ac1dc6e757p-603, 0x1.bc77dc45c4489p-774, 0.0,
     0x1.1dceff5ceebc5p-402, 0.0, 0x1.7dc5578b7b991p-623, 0.0, 0x1.67ca2af130a8ep-151,
     0.0, 0x1.8578af0c68cb6p-919, 0x1.dad57f3090e71p-274, 0x1.0e40f36020eebp-1015,
     0x1.4bc98e145b339p-930, 0.0, 0x1.325f9ae2e39f6p-763, 0.0, 0x1.78af8593b48a9p-73,
     0x1.2f19b2d23ebcbp-221, 0x1.b508422cf2b4fp-1013, 0.0, 0x1.453a3620bc4fp-38,
     0x1.052420061fe5dp-637, 0.0, 0.0, 0x1.7679250c597c9p-919, 0x1.0b2360b048937p-981,
     0.0, 0.0, 0x1.97a958185e959p-502, 0.0, 0x1.d9e75b9bc953p-465,
     0x1.13e49412838d9p-720, 0.0, 0.0, 0x1.5fe048e5f80b2p-404, 0x1.1282800ff08fap-947,
     0x1.a4b09c57b58b4p-543, 0.0, 0x1.edbd078bf60ffp-600, 0.0, 0.0,
     0x1.572135dda28e7p-449, 0x1.1e864c10eb9adp-765, 0x1.19685b6e57aa3p-157, 0.0, 0.0,
     0x1.b2ef9df41a1ecp-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db82006350efdp-536, 0x1.8c344716a7641p-806, 0x1.8a3ad98fdf598p-1014, 0.0,
     0.0, 0x1.960951e00d2d4p-501, 0.0, 0.0, 0x1.c6cbe96f3631cp-27, 0.0, 0.0, 0.0,
     0x1.c62615dace44ep-236, 0.0, 0.0, 0x1.d3b6e946e73f6p-391, 0.0,
     0x1.8563bd6cd30a9p-400, 0x1.bdfc197d0a489p-947, 0x1.96f55cbd8655bp-152,
     0x1.7f110e369ad86p-244, 0.0, 0x1.0734a2abb16bfp-661, 0.0, 0x1.7dd5f2a9ed9dbp-90,
     0.0, 0.0, 0x1.5e21c71a626b2p-745, 0x1.eabd6ca99e415p-229, 0.0, 0.0, 0.0,
     0x1.97f60781ab7dap-847, 0.0, 0.0, 0x1.b7b7b234c7137p-576, 0.0, 0.0, 0.0,
     0x1.06aa86b9808d9p-832, 0x1.4fd72e948c331p-278, 0.0, 0.0, 0.0,
     0x1.6d845eb715289p-404, 0x1.1dd4bb478645fp-685, 0x1.615baa8a4a745p-737,
     0x1.a0e24d05847a1p-323, 0x1.0395e7e80637cp-119, 0x1.30c2ee5855f1dp-688, 0.0, 0.0,
     0.0, 0x1.5219e18625032p-1010, 0.0, 0.0, 0x1.66c4a0ca5aeacp-977, 0.0,
     0x1.438ed62322b53p-76, 0.0, 0x1.543eba109714ap-443, 0x1.96cfe744c384ap-294,
     0x1.15f73742cd1b1p-246, 0x1.26922b1fbd278p-447, 0.0, 0x1.9b21ca30be02p-622,
     0x1.e588d11c34c41p-920, 0x1.b2fe08f8688cap-1014, 0.0, 0.0,
     0x1.287db1a16eb02p-416, 0.0, 0x1.3ca83b7851b64p-765, 0x1.d4b18597dcd14p-25, 0.0,
     0.0, 0.0, 0x1.73304fecc259fp-568, 0.0, 0x1.1acfcafe5bfecp-925, 0.0, 0.0, 0.0,
     0x1.a19228654d5ddp-103, 0.0, 0.0, 0x1.79e746565ebafp-597, 0.0, 0.0,
     0x1.226c3120091bep-259, 0.0, 0.0, 0.0, 0x1.3e126dba27a32p-682,
     0x1.19a770e9d25bdp-267, 0.0, 0x1.f9de5c02d8c28p-268, 0.0, 0.0, 0.0,
     0x1.638e6e718c71ep-153, 0.0, 0.0, 0.0, 0x1.5fcfbc002ecdbp-427, 0.0, 0.0,
     0x1.168e7419bc5d1p-451, 0.0, 0x1.aae6fdd548313p-970, 0.0, 0.0, 0.0,
     0x1.d1fcc63adf998p-772, 0.0, 0x1.e60ff6bb9413p-476, 0x1.abd17277f6e8cp-797,
     0x1.93b60ea8ac657p-40, 0.0, 0.0, 0x1.f81e8c199efa7p-853, 0.0,
     0x1.04157bc873d97p-242, 0.0, 0x1.af01580ffba48p-128, 0.0, 0x1.a4323401acc2ap-740,
     0.0, 0.0, 0x1.fb9510e40a867p-454, 0x1.ff68f45f33771p-77, 0x1.365b0c9222abp-643,
     0x1.458bc399d289ap-108, 0x1.a30147dfc4005p-612, 0.0, 0x1.40505b4e1b1e3p-268,
     0x1.3e592c4f27129p-972, 0.0, 0x1.59f704ac7a4efp-193, 0x1.dba7732d607c1p-594, 0.0,
     0x1.9e8dd55872309p-876, 0.0, 0.0, 0x1.76a02be31dc5p-837, 0x1.adcb3675fc20cp-715,
     0x1.c205b60764c09p-357, 0.0, 0.0, 0.0, 0x1.2b3c1b1c0f1d1p-1015,
     0x1.a436bbf2dd89ap-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.638af44a06c66p-16,
     0x1.128e8171e05b5p-128, 0x1.d6c1bce63801ap-608, 0.0, 0.0, 0x1.c74eea420aeabp-182,
     0x1.a6e3f1641d269p-758, 0x1.ea9b15e5047f4p-774, 0.0, 0x1.0ef4e13deaf3fp-800, 0.0,
     0.0, 0.0, 0.0, 0x1.9f440c1cd2fe4p-265, 0.0, 0x1.a32834358cf3bp-503, 0.0,
     0x1.480c271bfdd65p-900, 0x1.db2272467b377p-527, 0x1.817c7c92e3c41p-454,
     0x1.5a7ee67f3db59p-183, 0.0, 0.0, 0x1.91be0744e9cb2p-869, 0x1.6e5f279328acfp-798,
     0.0, 0x1.e3c55a8a3b352p-878, 0x1.552f3862aa9cfp-965, 0.0, 0.0, 0.0, 0.0,
     0x1.4b679739cb91fp-401, 0x1.11d791fd5995ap-450, 0.0, 0x1.87787e1cef4b5p-586, 0.0,
     0.0, 0.0, 0.0, 0x1.e1c3422033528p-242, 0.0, 0x1.ddce0735ba082p-73,
     0x1.2655dda8069b4p-150, 0.0, 0x1.ba86093c9f50dp-635, 0x1.039093beb4638p-505, 0.0,
     0x1.761d7d47ddd46p-184, 0x1.2cf450997861ap-444, 0x1.20c87df58ef2p-247, 0.0, 0.0,
     0.0, 0.0, 0x1.baa9ef8c5c974p-652, 0x1.49efe86068c81p-653, 0.0, 0.0, 0.0, 0.0,
     0x1.c4e6d25c3733dp-447, 0.0, 0.0, 0.0, 0x1.1599ae901f3a3p-759, 0.0,
     0x1.b1378becf7f29p-415, 0.0, 0x1.0f51b7c37bd8bp-472, 0x1.a6ecd636d70a2p-282, 0.0,
     0.0, 0x1.063aa590ef13ep-732, 0.0, 0.0, 0.0, 0.0, 0x1.7543ad36727ap-446,
     0x1.5990197cf105fp-789, 0.0, 0.0, 0x1.3abbb35d3d074p-931, 0.0,
     0x1.f1a5cfe22b8c4p-206, 0.0, 0x1.6973a487a8396p-84, 0x1.86d8c32947605p-721, 0.0,
     0x1.1846fa30dc745p-666, 0.0, 0x1.31cac0a30b3acp-2, 0x1.231c38a38fd4dp-481,
     0x1.870904dfd610cp-942, 0.0, 0.0, 0.0, 0.0, 0x1.b76202222b927p-621,
     0x1.e357b3cbe1085p-383, 0x1.2c189c7f6c4d7p-222, 0x1.1ba0a3dc4494ap-110,
     0x1.01b36dc01d8fap-77, 0x1.d5c212c503b52p-220, 0.0, 0x1.a3e8f9a9483f3p-682,
     0x1.4985f3f8f3a48p-409, 0.0, 0.0, 0x1.3744437572cb3p-68, 0x1.f3140250bcc53p-966,
     0x1.b6c34df56d102p-884, 0.0, 0x1.9681f6558864fp-662, 0x1.32f69b82ec9abp-460, 0.0,
     0.0, 0x1.90437f11dc7c2p-678, 0.0, 0x1.2ec72051d844bp-413, 0.0,
     0x1.c27f2175a837fp-953, 0x1.83754756696b9p-483, 0.0, 0x1.894ecd4091233p-868, 0.0,
     0x1.72b59c0e8db6p-963, 0.0, 0x1.41a8e129ff74ap-902, 0.0, 0x1.545d018d5a1f5p-103,
     0x1.34e51e9100c47p-866, 0.0, 0.0, 0.0, 0x1.0d4ac4cf533bep-505, 0.0, 0.0,
     0x1.c3a7c22d43cfp-383, 0x1.ccd7bfade4fd3p-258, 0.0
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
            tmp1 = Sleef_lgammad2_u10avx2128(tmp0);
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
    printf("Sleef_lgammad2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_lgammad2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
