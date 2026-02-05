/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd1_u35purecfma.c --function \
 *     Sleef_finz_sincosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.ce4f99d76590bp-605, 0x1.6df1fcd08abffp-704,
     0x1.a13e2a289ec6ep-799, 0.0, 0.0, 0.0, 0x1.16b086a58d2p-191,
     0x1.97d876e5d1889p-1000, 0x1.1346d090647a6p-607, 0x1.949d315571ac3p-154, 0.0,
     0.0, 0.0, 0x1.eb118f8c3d324p-209, 0.0, 0.0, 0.0, 0x1.5da4aaa74c7c3p-637,
     0x1.14858e7e6f87cp-648, 0x1.80b811909351bp-167, 0x1.e476fd3b3cec3p-260, 0.0,
     0x1.5c95b6a606d18p-588, 0x1.94871b798404ep-104, 0.0, 0x1.2888ac73980b5p-636,
     0x1.ebb738259fe26p-200, 0.0, 0x1.4df1e52b28ce2p-573, 0.0, 0x1.70f6bdc60ebcp-318,
     0.0, 0.0, 0.0, 0x1.53cc18a5ac143p-767, 0.0, 0x1.80e1f436e343dp-983, 0.0,
     0x1.989f9f3506873p-332, 0.0, 0.0, 0.0, 0x1.4048692636db3p-778,
     0x1.c0e83e82628a3p-737, 0.0, 0.0, 0x1.4348659ba9f38p-264, 0.0, 0.0,
     0x1.e358100fe9a6ap-502, 0x1.20637b3b49987p-382, 0.0, 0x1.a77dad56871eap-364, 0.0,
     0.0, 0.0, 0.0, 0x1.874d97795ba56p-504, 0x1.08a4d9d6d4d45p-934, 0.0, 0.0,
     0x1.c0809df0aa338p-662, 0x1.2ff67e4512bedp-318, 0x1.f9bb953f9b927p-343, 0.0, 0.0,
     0x1.a9071f999dc69p-386, 0.0, 0x1.68b5709f5f05fp-858, 0x1.50ff278a053f2p-476, 0.0,
     0x1.3c069bd7d9cep-190, 0x1.04ec1e141f8aep-447, 0x1.f64ad254cd244p-760,
     0x1.eaf8bd589a12p-613, 0.0, 0.0, 0.0, 0.0, 0x1.775e533963453p-18,
     0x1.0db1b5cc7f56ap-842, 0x1.85127b4acf3b1p-497, 0.0, 0.0, 0x1.524d90a96837ep-550,
     0x1.bd7be15fbfd42p-708, 0x1.341f93cd0959p-405, 0x1.c22511a23553bp-452,
     0x1.4ad898e90d5e7p-212, 0x1.05333d949263bp-787, 0.0, 0.0, 0x1.2ee4641072e84p-222,
     0x1.003d44407f703p-954, 0x1.a2f0f3f6e494p-470, 0x1.185f3f8c7b868p-134, 0.0,
     0x1.51f008ba5bfcep-242, 0.0, 0x1.65159d95926cfp-508, 0.0, 0.0,
     0x1.8ffe71b8a6851p-407, 0.0, 0x1.67ace03da8ed2p-1014, 0.0,
     0x1.5d42f5dc85ccfp-112, 0x1.5cec5f5f87d14p-678, 0.0, 0.0, 0.0,
     0x1.fef848eabc8afp-666, 0.0, 0.0, 0.0, 0x1.b33a533bd73cbp-368, 0.0, 0.0, 0.0,
     0x1.5ee94e10d3e85p-285, 0.0, 0x1.9ecf7c054ff78p-507, 0x1.50783f92dc69ep-685, 0.0,
     0x1.fe42596f1654ep-496, 0x1.7c161ee9a6a1ap-490, 0.0, 0x1.a352bbe9a4371p-464,
     0x1.2e373cf0de12ap-64, 0x1.3e8be45a2a71ap-479, 0x1.a806a571d4eedp-957,
     0x1.21290810e417p-925, 0.0, 0x1.0476ad7d633bfp-668, 0x1.c0105379343a1p-1012,
     0x1.f87b011998beep-671, 0x1.9631457acc835p-781, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a31460e0fbda9p-357, 0.0, 0x1.0e98098ad39c4p-1, 0x1.b88c69c365929p-400, 0.0,
     0.0, 0.0, 0x1.3255993e25937p-8, 0x1.6de22b98ae25bp-7, 0.0,
     0x1.53a2076c844c6p-447, 0.0, 0x1.a7f70239f22c1p-16, 0x1.4858e6ee63dfbp-691,
     0x1.4219318c866eap-449, 0x1.12d7e3119d772p-937, 0x1.3e1e6f9af4a62p-621,
     0x1.c8d635a3cb79ep-34, 0.0, 0.0, 0x1.2218fb4835466p-400, 0.0,
     0x1.5e20ef989676fp-52, 0x1.9ebe220b542cap-91, 0x1.24526eb1c209bp-299, 0.0, 0.0,
     0.0, 0x1.2817ee6f45a69p-463, 0x1.258d0f0eee1dep-551, 0.0, 0.0, 0.0, 0.0,
     0x1.eafa43013c896p-182, 0x1.3b7fc70c663b7p-279, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5ae7ea30add63p-663, 0x1.5ec93e41fb847p-288, 0.0,
     0x1.7d54318a26736p-405, 0x1.2943d7a83445cp-797, 0x1.61db923e65657p-505, 0.0, 0.0,
     0.0, 0.0, 0x1.3ae194135e033p-675, 0.0, 0x1.aea81a7616d1ap-693, 0.0,
     0x1.5da96f15cccf7p-434, 0x1.805d361d28e9cp-856, 0.0, 0.0, 0x1.5491dfaec2e28p-760,
     0.0, 0x1.757f51b7afd02p-915, 0x1.6cf689fab4b7ap-836, 0x1.ed18ac8b0db9dp-577, 0.0,
     0x1.5c5e88475c706p-897, 0.0, 0x1.0a1597a00545cp-76, 0.0, 0x1.abd63d2d775d9p-68,
     0x1.7f79a0ff412ffp-951, 0x1.b9d7e67cc32aap-701, 0x1.70e8039459eb7p-893, 0.0,
     0x1.bf25b1fffbb63p-266, 0x1.d0d4ab8c4c82bp-1000, 0.0, 0x1.6cd1dc45267ffp-488,
     0.0, 0.0, 0x1.b54c83678c542p-351, 0x1.c3d93b3e5a11ap-76, 0x1.e21920db9671ep-1005,
     0x1.c7ddbdfc6a528p-704, 0x1.28f03a7f340dfp-841, 0.0, 0x1.5ee7954ff81c1p-14, 0.0,
     0.0, 0x1.0e3c7e405f696p-157, 0.0, 0.0, 0x1.e3a9724ee5a1fp-679,
     0x1.f7c31fea60497p-901, 0x1.6d04829e70735p-15, 0.0, 0.0, 0x1.f89e9d8765132p-528,
     0x1.d078c052d15fep-163, 0x1.9a84f3e4b6cep-438, 0x1.f19a158ad411cp-188,
     0x1.2c62c06a5b77ep-1016, 0x1.1b818b1e64cdcp-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee2aee0d5aacfp-108, 0x1.914ec737ee7c9p-687,
     0x1.464b31024edf9p-524, 0.0, 0x1.958ef3b817f53p-168, 0.0, 0.0,
     0x1.c601680eb5cf4p-584, 0x1.94c9e07bfbc5ep-423, 0x1.d468e0371837bp-99,
     0x1.a2266b90dd299p-597, 0.0, 0x1.f349a8dfa6133p-962, 0x1.59585af4bf64fp-547, 0.0,
     0.0, 0x1.ec5728a58fd53p-579, 0x1.1797e9949752p-555, 0x1.b5c778c4421dfp-33,
     0x1.247f90c40533dp-42, 0x1.8690f9aba2a5dp-144, 0.0, 0.0, 0.0,
     0x1.cee2f4b41b481p-552, 0x1.eb6f923fcb0dap-52, 0x1.72cd12d0ac781p-252, 0.0,
     0x1.0b68b6234c6aap-458, 0x1.e653576511d36p-464, 0x1.30ed67f5f6829p-794, 0.0,
     0x1.778db8ddd249cp-18, 0x1.6b1d6f9628bc9p-122, 0x1.d9b8968781778p-622,
     0x1.d3cf25efeac4cp-718, 0.0, 0.0, 0x1.dfda9b308a212p-377, 0.0,
     0x1.bc309fdea61ffp-899, 0x1.1be70c068e617p-440, 0x1.0463214770aa7p-789,
     0x1.e3c61f65ec3dp-669, 0x1.9091a8801b8e7p-608, 0x1.ced8ddb4ca3a9p-820,
     0x1.9634b11f18f2cp-145, 0x1.ae14b0f1248abp-324, 0x1.0aef163e32e0ap-856,
     0x1.d7ad3d2d8e316p-466, 0.0, 0x1.ac9a5211f6f7ep-937, 0x1.101930867e497p-684,
     0x1.d31c1764ba531p-402, 0.0, 0x1.bb3fb1d6f0684p-752, 0x1.eef823b152cfp-136, 0.0,
     0x1.1c7b1a664a085p-823, 0x1.79ba2e6c9ab45p-768, 0.0, 0x1.cfe3e1c565856p-228,
     0x1.23506f1e00aeep-937, 0.0, 0x1.f70de7f3af6f5p-431, 0x1.0ca585afd0fcep-765,
     0x1.408fdd856b387p-480, 0x1.1f2a246f73751p-193, 0x1.d3ae5d1c2f3p-480, 0.0,
     0x1.a7920634f7214p-719, 0.0, 0.0, 0x1.a477a2896e7a3p-165, 0x1.25a22361a6455p-187,
     0.0, 0x1.13688ea5b26b3p-974, 0.0, 0.0, 0x1.506a471d7cdaep-195,
     0x1.c4d1d67130822p-60, 0x1.53986fdbde119p-397, 0x1.e75874ae23526p-425, 0.0, 0.0,
     0.0, 0x1.09087d6f350f7p-942, 0.0, 0x1.4e9ce29bb8903p-214, 0x1.1e235e31b4255p-889,
     0.0, 0x1.15876c8db3951p-986, 0x1.3b8e491a1b7bdp-993, 0x1.04c10d6d7d77dp-701, 0.0,
     0.0, 0.0, 0x1.d9252280f03d6p-511, 0.0, 0.0, 0.0, 0.0, 0x1.4c30102eea50ep-31,
     0x1.2be3e58e8b393p-133, 0x1.0588cf07aecc3p-967, 0x1.c8ce2bc197fb8p-448,
     0x1.dab1ec7ba039ap-809, 0x1.3d25d7780ff56p-106, 0.0, 0x1.59fa9101a2dc4p-632,
     0x1.584c8711ad0e7p-853, 0x1.3dfadd532669p-87, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70be64e874894p-735, 0x1.eb16305b9bf6bp-9, 0.0, 0x1.5dc800ec01d99p-915,
     0x1.6cede10ff5cfbp-681, 0.0, 0.0, 0x1.7a610d116a4a1p-105, 0.0,
     0x1.49b56bb514e66p-257, 0x1.084d183298ea5p-858, 0x1.a6f9b5edbdbap-901, 0.0, 0.0,
     0.0, 0x1.2ca719aee48ebp-722, 0x1.496c453ac9848p-79, 0.0, 0x1.9ca160ff5c665p-139,
     0.0, 0x1.92405cb613452p-923, 0.0, 0x1.5fe18625f9206p-375, 0.0,
     0x1.4b52d0e2c17b4p-719, 0.0, 0.0, 0x1.a6a7471b22979p-625, 0.0,
     0x1.bc5768867d8b5p-756, 0.0, 0.0, 0x1.6c1435854ecc2p-699, 0x1.858954d3a5ceep-743,
     0.0, 0.0, 0x1.23b939a9ec3c2p-875, 0x1.9881a3f6b6c3cp-360, 0.0,
     0x1.71c4eac8aba9ap-824, 0x1.478e0ef46303ap-430, 0x1.b6a946e1d9489p-510,
     0x1.55763cd2d6ad7p-689, 0.0, 0x1.4e175a862a54bp-322, 0.0, 0x1.5e3dbb1701702p-866,
     0.0, 0x1.9e1810b48e5d5p-986, 0.0, 0x1.00f3110654d3cp-775, 0x1.d23fd16f97212p-816,
     0x1.3ce11231d7057p-540, 0.0, 0.0, 0.0, 0.0, 0x1.64cb53c3dc2f9p-468,
     0x1.702c13ce9d727p-711, 0.0, 0.0, 0.0, 0x1.ba24abc56a1aep-425, 0.0, 0.0,
     0x1.d419583ffe4edp-529, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf21c5e3eff0ap-263,
     0.0, 0.0, 0.0, 0x1.d269a29463db1p-970, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.286654898a0b2p-844, 0.0, 0.0, 0x1.334028bb1bc35p-117, 0x1.213975e041be5p-154,
     0x1.b5c623f5825b5p-122, 0.0, 0x1.c5c39c952f5dp-333, 0.0, 0x1.eed139bee2e3cp-323,
     0.0, 0.0, 0.0, 0x1.95a26190c85cfp-861, 0x1.d7dafdcafb814p-952, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bfb28767b14ddp-459, 0x1.327a5486e68b7p-905,
     0x1.b704a106cb61p-865, 0x1.5bd5c51e0bf48p-500, 0x1.2c98d20e99289p-199, 0.0, 0.0,
     0.0, 0x1.0237570b52d12p-271, 0x1.42afe5dd2a39dp-20, 0.0, 0x1.1112eeadc968ep-888,
     0.0, 0x1.b5bb71f2af71cp-71, 0x1.2ba52ab8e0cadp-668, 0x1.823510d0fe798p-481, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93e24262e516fp-634, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1a0a182903b77p-323, 0x1.35d752a160d9bp-957, 0.0,
     0x1.aef011c920859p-468, 0.0, 0x1.0d09a21902a8ap-956, 0.0, 0x1.6489141925e99p-612,
     0x1.78a86a9fa0bf8p-775, 0.0, 0x1.857689a3d2afcp-345, 0.0, 0x1.028008b944c2ap-2,
     0.0, 0x1.4bc87c61cb92p-577, 0.0, 0.0, 0.0, 0.0, 0x1.f4b4d5b52774ap-747, 0.0,
     0x1.51209f00e855ep-990, 0x1.fd745a257576ep-855, 0x1.6b6c86fb88d0ap-11, 0.0,
     0x1.69cca6b202b2ep-917, 0.0, 0x1.6bab2e91ad20dp-345, 0x1.25f38bdca1827p-486,
     0x1.a72fd23499989p-302, 0.0, 0.0, 0x1.8667ff69c5802p-221, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5206c998c9484p-659, 0.0, 0x1.fe415ebc97b49p-54, 0x1.862ae25691c07p-173,
     0x1.aacc27cf0c982p-988, 0.0, 0x1.df204894c83b7p-296, 0x1.b5b9af957c3c9p-421,
     0x1.20e8a3e049ed9p-342, 0x1.a16b30991e951p-978, 0.0, 0x1.1976a27a70b1ep-95, 0.0,
     0.0, 0x1.2ed8265b39d99p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a84fdc488088p-323,
     0.0, 0x1.3d062f1767c91p-423, 0x1.14322b713f4aep-20, 0.0, 0x1.9fa00cbfdff13p-108,
     0x1.8aa2be58698fep-620, 0x1.22df6571e3ecap-880, 0x1.992cb1908be5bp-49,
     0x1.972ef0c6a90bp-794, 0x1.e31a026de2688p-775, 0x1.4668638954821p-876, 0.0, 0.0,
     0.0, 0x1.f5225fe79fbbfp-1002, 0.0, 0.0, 0x1.2a0574db7bcb2p-696,
     0x1.f0f8cf8004c5p-682, 0.0, 0.0, 0x1.c97c128c67dc2p-950, 0x1.41b7a20c933ecp-117,
     0x1.8b3fba0cd103cp-425, 0.0, 0.0, 0x1.5f66675fa861cp-394, 0x1.bba63db5a4b42p-883,
     0.0, 0x1.d164d57d9332cp-163, 0x1.6f630ec2a6ac4p-363, 0x1.ccc1893ca377dp-106, 0.0,
     0x1.49db65b7e3126p-554, 0x1.faef55c4ec631p-318, 0x1.98836ccead2afp-777,
     0x1.0687379b1dc27p-834, 0.0, 0.0, 0.0, 0x1.4a9ec0482e24bp-56,
     0x1.5af8ee709a3f7p-768, 0x1.9ae48bd1655ap-647, 0x1.b01c115adaeap-784,
     0x1.c34fc818d19b8p-368, 0.0, 0.0, 0.0, 0x1.66f7243369044p-955, 0.0, 0.0,
     0x1.39cc571366afbp-326, 0.0, 0x1.ee06f1749f49bp-545, 0.0, 0x1.d7efae9cb38aap-812,
     0.0, 0x1.c2a229d96dc3ap-468, 0x1.049155dd4391bp-714, 0x1.bea1cb03bbcfcp-69,
     0x1.891e37ef2b7acp-826, 0.0, 0.0, 0.0, 0.0, 0x1.55dda8bb1341ep-628,
     0x1.6ea1e9dc606b8p-328, 0.0, 0x1.259cb36ad44dcp-114, 0x1.dd7eb99390affp-534,
     0x1.a394eaf97fa57p-155, 0.0, 0.0, 0x1.9aa8e237a369fp-563, 0x1.46edd2a30addbp-868,
     0.0, 0.0, 0x1.c3a8f01d35b93p-95, 0x1.ea7b603b44eaap-153, 0.0, 0.0, 0.0,
     0x1.97b0546a89e95p-393, 0x1.2d789e0db889bp-252, 0x1.9193b999cddb3p-477,
     0x1.fe65a7f2e28dfp-530, 0x1.e71ca160fc922p-593, 0.0, 0.0, 0.0, 0.0,
     0x1.7586c324d8b17p-464, 0.0, 0x1.aa283b374e5f9p-546, 0.0, 0x1.c319262d84c9dp-593,
     0.0, 0.0, 0x1.dbd55e6ab4524p-595, 0x1.1519ce4d316eap-938, 0x1.a3761dd4ba056p-536,
     0.0, 0.0, 0.0, 0x1.628c16ea1c7c8p-106, 0.0, 0x1.89ddeb2d3de94p-267, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8d1d7394e83bfp-636, 0.0, 0.0, 0x1.8635e4773c204p-379, 0.0,
     0x1.8460240828dcp-31, 0.0, 0x1.d27053f8e52cap-602, 0.0, 0x1.e2e3b414a2f98p-535,
     0.0, 0.0, 0x1.c621345c31786p-956, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79fa19e2274dap-490, 0.0, 0x1.31cf57cd048aep-663, 0x1.5180f09f6b0bfp-284,
     0x1.1e1b05c391d5dp-654, 0.0, 0x1.7c319b1e04c15p-443, 0.0, 0.0,
     0x1.2cd45347b458ap-334, 0.0, 0.0, 0.0, 0.0, 0x1.8cea70ae45f01p-643,
     0x1.633bccdfd6f68p-651, 0x1.a9f8ddb2b065ep-824, 0x1.9aa805f36a755p-718, 0.0, 0.0,
     0x1.d8f0757d117b5p-152, 0x1.aeef3043f5b9fp-43, 0x1.b4adbabe60bcdp-561, 0.0, 0.0,
     0.0, 0x1.53df66acd5cbdp-679, 0x1.1a238746f9cbp-862, 0.0, 0.0, 0.0,
     0x1.37926235e97c2p-57, 0x1.9b3db5dc18d9p-15, 0.0, 0x1.6ef69c1e05dadp-217,
     0x1.5964d4da2dfa9p-999, 0x1.56b74ca9fc169p-475, 0.0, 0x1.8c84b524f699ep-899, 0.0,
     0x1.5185796e876edp-883, 0.0, 0.0, 0.0, 0x1.acaa40d78e49bp-932, 0.0, 0.0, 0.0,
     0x1.e0d3f90a06a4fp-622, 0.0, 0x1.18152a6db4d4cp-172, 0.0, 0x1.5b92857746963p-254,
     0.0, 0x1.7858ccd324357p-877, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d963cc0bc8c6p-980,
     0.0, 0.0, 0.0, 0.0, 0x1.1039a6b7392ep-194, 0.0, 0.0, 0.0, 0x1.8329d85da4abdp-826,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.864f475d7497ap-543, 0x1.bcd98e2f9cb92p-627,
     0.0, 0.0, 0x1.1edd58b9839d8p-796, 0x1.05f9cb691c587p-530, 0.0, 0.0,
     0x1.f1e961bb6a856p-380, 0x1.d0029c0769036p-586, 0.0, 0.0, 0.0,
     0x1.6c206768c6f6fp-557, 0x1.25a1688a57dadp-35, 0x1.001106a8c49fbp-643, 0.0, 0.0,
     0x1.bbf03a118863bp-68, 0.0, 0.0, 0.0, 0.0, 0x1.dfb7e2edd9727p-1015, 0.0,
     0x1.97d16a71607e4p-231, 0.0, 0x1.268ee4997ff2bp-872, 0x1.e9af4b8b67637p-562, 0.0,
     0x1.7fdbf7bcb3dfdp-974, 0x1.ba05139e676cap-152, 0.0, 0.0, 0.0,
     0x1.7416f51b132f8p-226, 0.0, 0x1.5619c7a1539cp-394, 0x1.9bdf615bb45adp-734,
     0x1.4fa9b46cff325p-109, 0.0, 0.0, 0x1.a04303c185cbcp-861, 0x1.54735c5ed58b4p-247,
     0.0, 0.0, 0x1.b8acdd22d470dp-257, 0x1.3e8341d7bbacp-148, 0.0, 0.0,
     0x1.f2981cacf8d6p-923, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a55b49411614bp-772, 0.0,
     0x1.af4080dd0784ap-953, 0x1.9c44ab6e807dcp-865, 0x1.c2727c20fd241p-192, 0.0, 0.0,
     0x1.9148ff25e5fa6p-64, 0.0, 0x1.4f4bf6649e5a4p-706, 0x1.e24295d9795d1p-221,
     0x1.ebbfffdd8f2bbp-836, 0.0, 0x1.d72e1c535bb99p-994, 0x1.3c8fbff581f5p-976, 0.0,
     0x1.414e9cea45828p-67, 0x1.809e9b3a9d471p-474, 0x1.1acbbbb04cfe9p-264,
     0x1.d4aacb8da3dbp-860, 0.0, 0x1.f2dc1c58fe7b5p-605, 0.0, 0.0,
     0x1.0a35870797689p-243, 0x1.dd5a7c7096666p-620, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a1f04e90c58bp-865, 0.0, 0x1.3274d23efe4c8p-680,
     0x1.a5ce8efd00275p-774, 0.0, 0.0, 0x1.e3c3d645eae3ep-313, 0.0,
     0x1.181aa497e4546p-414, 0.0, 0x1.e33cbacdd8624p-782, 0.0, 0x1.9d33c5a613472p-131,
     0x1.24404ed83146fp-489, 0x1.6a610bb113a9p-116, 0.0, 0.0, 0x1.debd370c9570ap-723,
     0.0, 0x1.656343fe6ba4p-659, 0.0, 0x1.22197676b233dp-7, 0.0, 0.0,
     0x1.ae3192784bba2p-862, 0x1.57564dcdeaf4p-92, 0.0, 0x1.cbb96b50b278ap-896, 0.0,
     0.0, 0.0, 0x1.001820d9f5501p-157, 0.0, 0.0, 0x1.5f79c710d9796p-355,
     0x1.c4faa7a5d9ecap-514, 0x1.bc9d8ce6c6d8fp-53, 0.0, 0.0, 0x1.8098e3d0a965cp-574,
     0x1.db7a6c425c948p-874, 0x1.2d218ad26aeb9p-455, 0.0, 0.0, 0.0, 0.0,
     0x1.59002a413883bp-346, 0x1.b9e7fd41f269p-678, 0x1.23d963639e004p-942, 0.0,
     0x1.57df84114811p-284, 0.0, 0x1.884c19805bbd5p-398, 0.0, 0.0,
     0x1.a209422c7c675p-142, 0x1.466d284e784cap-488, 0.0, 0.0,
     0x1.5bc2d48fed287p-1015, 0x1.0808f4a57b237p-607, 0x1.20ee44d90268bp-864, 0.0,
     0x1.76f02f5dd2cd7p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.235f8d966ddbbp-362, 0x1.f27386c5ed948p-977, 0x1.7b445fe9a46d2p-235,
     0x1.fcdbd9f9d798ep-786, 0.0, 0x1.c4926e4f0d243p-248, 0.0, 0.0, 0.0,
     0x1.a5b3632aa4e15p-150, 0x1.e754c527da22cp-709, 0x1.251987372d0edp-228, 0.0,
     0x1.ac22999ac0635p-497, 0.0, 0.0, 0.0, 0x1.973509a9d1dedp-258, 0.0, 0.0, 0.0,
     0.0, 0x1.12b5ad5f9f957p-184, 0x1.8012ae7108e23p-555, 0.0, 0.0,
     0x1.e4dacaae9fa6ap-922, 0.0, 0.0, 0x1.99e74a7c0ab77p-691, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.532eba20f728bp-443, 0x1.e2a3f048eacabp-201,
     0x1.4774facd65f6bp-508, 0.0, 0x1.211ca48985b14p-112, 0.0, 0.0,
     0x1.f3dea37868b36p-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.355f2412dbddbp-531,
     0x1.716b11ed66426p-103, 0.0, 0.0, 0.0, 0x1.351de921555f9p-867
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosd1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_sincosd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosd1_u35purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
