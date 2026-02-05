/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintd2_kvx.c --function Sleef_rintd2_kvx --headers \
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
     0.0, 0x1.6c90551ea3bcap-84, 0.0, 0x1.ef3a27291d704p-513, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.eac3ac44454eep-229, 0.0, 0x1.a13a2abbbdfeap-460, 0.0,
     0x1.347bf23ff6e67p-137, 0.0, 0x1.8b1bb4a2c6898p-42, 0.0, 0x1.9b15c134d247ap-111,
     0x1.0d383818505p-380, 0x1.6b0fef369450bp-63, 0.0, 0.0, 0x1.ed87e1200e25ap-334,
     0.0, 0x1.2607905a96be3p-323, 0x1.7500bf75d7f36p-555, 0x1.d6e48c972b802p-192,
     0x1.f9ab921ba03a8p-775, 0x1.a07194ca2c86p-886, 0x1.5d1fd5d1fd0fcp-708,
     0x1.f58f3e2b3971dp-495, 0.0, 0x1.fd0250f55a0f4p-76, 0.0, 0.0, 0.0,
     0x1.b6fc86fd48901p-625, 0x1.0e67a92e3716ep-826, 0.0, 0x1.4b4200553e80bp-597,
     0x1.4b3ab99006ba3p-713, 0x1.e1b7218307db9p-366, 0.0, 0x1.70fe4cd1c8cb8p-938, 0.0,
     0.0, 0.0, 0.0, 0x1.c89ccbbbcdfc7p-369, 0x1.d786e533170f7p-831, 0.0, 0.0,
     0x1.6856a413d96bfp-633, 0.0, 0x1.0c300d06ef6ep-806, 0x1.7bf1e6b29def2p-532,
     0x1.348fba62e36fcp-302, 0x1.18404814d681ap-275, 0.0, 0x1.054337c55f2ccp-724,
     0x1.e83e0d107eacep-556, 0.0, 0x1.c98e13e82072p-827, 0x1.38d631af3ee8cp-754, 0.0,
     0.0, 0x1.bb487b8432cebp-843, 0x1.08dd569f3403ap-288, 0.0, 0x1.be631e3ae825ep-456,
     0x1.2b4f90ac495f5p-755, 0.0, 0.0, 0x1.0d55f000b48dep-960, 0.0, 0.0, 0.0,
     0x1.5a03e8c76b475p-624, 0x1.7b83bbd30d3p-387, 0.0, 0x1.2ec74fa9bc276p-858, 0.0,
     0x1.58d5c660769eep-251, 0.0, 0x1.e656fff45742bp-609, 0x1.464297b078201p-755,
     0x1.bdf74fb462d81p-767, 0x1.b4caf364e4a75p-958, 0.0, 0x1.d2e2472cea85dp-836,
     0x1.f869b1c787a5ap-633, 0.0, 0x1.6a740fd955fb1p-853, 0.0, 0.0, 0.0,
     0x1.962c0b749db5ap-697, 0x1.cc002682034a4p-96, 0x1.c45c01f1b4c72p-919, 0.0, 0.0,
     0.0, 0.0, 0x1.bdb30394fc5dap-852, 0x1.dca2593319147p-396, 0x1.33d6c86faf802p-479,
     0x1.2001c3ce340b7p-355, 0.0, 0x1.dbb36ef9e946fp-195, 0.0, 0.0, 0.0,
     0x1.0edb2d94a81fdp-437, 0x1.2d44253b5e438p-806, 0x1.bc7730404fa52p-275,
     0x1.ab610ace3842ap-273, 0.0, 0.0, 0x1.5368f8425007ap-936, 0.0,
     0x1.6411093b2e25bp-536, 0.0, 0.0, 0x1.8f7d2d93edd7fp-444, 0.0,
     0x1.969c4c6f142aep-539, 0.0, 0.0, 0.0, 0x1.aa8e10b411eaep-193, 0.0, 0.0, 0.0,
     0x1.28653d9ec9e66p-451, 0x1.b9684ea4e6a94p-948, 0x1.5f4795f6db08fp-696,
     0x1.50392f054f179p-704, 0x1.11e7eedbc05acp-163, 0x1.fb974c40030d6p-482, 0.0, 0.0,
     0.0, 0x1.1dbe75a5243e3p-138, 0.0, 0x1.113625196d76ep-204, 0x1.a39c84c2abd29p-627,
     0.0, 0x1.dabe430f0c1d7p-648, 0.0, 0.0, 0.0, 0x1.1a5333b9060dcp-7, 0.0, 0.0,
     0x1.1073908167b9bp-536, 0.0, 0x1.f61052eb29b6p-436, 0.0, 0.0,
     0x1.00505dafb4f7bp-825, 0x1.b791b381d06e1p-169, 0.0, 0x1.dd018142aa363p-688, 0.0,
     0x1.50089cd7f76d5p-682, 0x1.93da4fc425cbp-45, 0.0, 0.0, 0x1.e4290e5a083a7p-405,
     0x1.c0c39b1e8b8e5p-530, 0.0, 0.0, 0.0, 0x1.9eefb2f951e6p-722, 0.0,
     0x1.d7bd036a2badfp-98, 0.0, 0x1.a21a4ea964fdcp-686, 0.0, 0.0, 0.0,
     0x1.8b42f0adbd711p-200, 0.0, 0x1.29cb0861a68p-278, 0x1.3f8bbedea9c97p-242,
     0x1.dbb808a66fc9p-669, 0.0, 0.0, 0x1.7717588532c4ep-324, 0.0,
     0x1.7958114372a78p-969, 0.0, 0.0, 0.0, 0x1.7bc4b44afbbd8p-318,
     0x1.a5e94a46ecf11p-694, 0x1.5ae986ab00bdfp-483, 0.0, 0x1.1499c2dc93932p-688, 0.0,
     0x1.4bbb62a79ee8ap-616, 0.0, 0.0, 0x1.306fb5866c3dbp-413, 0.0, 0.0, 0.0,
     0x1.5c712d46e441cp-16, 0x1.9eadf09f37e51p-444, 0x1.4d606a330520ap-493, 0.0, 0.0,
     0x1.b2db9defe5ebp-1020, 0x1.bfc82311f7e82p-224, 0.0, 0.0, 0.0,
     0x1.98eeb273ccb2fp-806, 0x1.2008c5ca768fcp-589, 0.0, 0x1.daa61e038d03ep-912, 0.0,
     0.0, 0x1.db9a8bd16f348p-648, 0x1.058a804e6b52p-765, 0.0, 0x1.9c1a9542e47b7p-590,
     0x1.1b0dcf8673d27p-451, 0x1.e006fd912430cp-549, 0.0, 0.0, 0x1.9aa246c794e57p-628,
     0x1.20911ec918a2ep-224, 0.0, 0x1.3c59a092b353fp-539, 0x1.f284c1e1521d6p-843,
     0x1.8f4851622655dp-993, 0.0, 0x1.5a5a263bd0747p-664, 0x1.a7ce2c300a6e7p-282,
     0x1.58adbd925eb35p-252, 0x1.be8fc9945de3p-1003, 0.0, 0x1.d7224a21a791fp-843, 0.0,
     0x1.f4c1abe95ce0fp-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7464a7de7b252p-182,
     0x1.d9964507c80bdp-656, 0x1.4744675f8ccabp-289, 0x1.ee04cdede1758p-449,
     0x1.88cb5c54bc122p-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e0027808b00ebp-169, 0.0,
     0x1.0a15fa8b26fdep-809, 0x1.0702ea1b61675p-667, 0x1.0f17c3487e95ap-575,
     0x1.37101be3a5f69p-991, 0.0, 0x1.3981e5aa6aaacp-275, 0.0, 0.0,
     0x1.474e873a3025ap-543, 0x1.382eff66dc0afp-411, 0.0, 0.0, 0x1.caca96e1a683ap-601,
     0x1.be42b0da1f8ep-627, 0x1.78db98ae5e16dp-664, 0x1.ec4e044544887p-770, 0.0,
     0x1.b469539291c9dp-582, 0.0, 0x1.b531e09b19f02p-929, 0.0, 0.0, 0.0, 0.0,
     0x1.9774af69f315ap-896, 0x1.f9fc427f58d64p-299, 0.0, 0x1.15f6f312f2a84p-454,
     0x1.7da8e5a5efe0bp-66, 0x1.82ed2951207c9p-703, 0.0, 0x1.45fed4cf028b8p-613, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.202179d8d5af9p-169, 0x1.45c3a60c68aadp-765,
     0x1.5cfd9b81a2aeep-662, 0x1.b560373fcbf24p-1022, 0x1.e78f252efe4e6p-65,
     0x1.48275e82afff7p-120, 0.0, 0.0, 0x1.6ad87120985f5p-288, 0x1.107191fc6a3cep-108,
     0x1.6ca2027796ef1p-873, 0x1.1c007d8c30c94p-261, 0x1.14fe075f5c136p-115,
     0x1.020f4d594f7d7p-500, 0.0, 0.0, 0x1.f0f7be70e983ep-108, 0.0, 0.0,
     0x1.fd21ba6d9ce8bp-929, 0.0, 0.0, 0x1.10f3aedd4fe4ep-881, 0x1.7912cba4d3d7cp-72,
     0x1.1429b485aff2ep-497, 0.0, 0x1.07a4449d9b81cp-482, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b86c8256ace7p-1020, 0x1.9e1a575260947p-485, 0x1.e42611742d198p-718,
     0x1.286f50e4610bdp-106, 0.0, 0.0, 0x1.616160f38af37p-179, 0x1.d4a7defacf071p-715,
     0x1.919edd0bbec69p-314, 0.0, 0.0, 0x1.443a4706c5ccfp-155, 0x1.db8f75a1c8aebp-51,
     0x1.65579a82e69a4p-664, 0.0, 0.0, 0.0, 0x1.6dc75423d9708p-727,
     0x1.e26f346606a5cp-640, 0.0, 0.0, 0x1.6df8e14f37fd5p-519, 0.0,
     0x1.10422a4443566p-123, 0x1.fef8736d9b367p-984, 0.0, 0.0, 0.0,
     0x1.af8c8d35ee3b6p-583, 0.0, 0x1.fbb4584776826p-564, 0x1.9940b9099e4edp-614,
     0x1.181a01b3d6cadp-601, 0x1.5c3883a9b35b9p-844, 0.0, 0.0, 0.0,
     0x1.0dd6dd2282467p-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82c92b20773ap-233, 0.0, 0.0,
     0x1.e1178ca04a5f6p-782, 0x1.2d3d48c1fb188p-928, 0x1.a5252fb9029c1p-962, 0.0,
     0x1.8983776940696p-263, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29f28c86d104ep-791, 0.0,
     0x1.1cf6b50b21dfcp-600, 0.0, 0x1.d3bf6f6588aacp-570, 0.0, 0x1.a65bd2c3f83a4p-3,
     0.0, 0x1.d710d0c01470fp-581, 0x1.0514eff5b59f1p-642, 0.0, 0x1.7bae224059b64p-623,
     0.0, 0x1.ed94bfb7e3b05p-649, 0x1.cb3ff2892d3f5p-603, 0.0, 0x1.83db18dc16296p-696,
     0x1.3e7caa44a6bep-136, 0.0, 0x1.d14991b53ae0bp-523, 0.0, 0x1.9d03b93bbe39ep-878,
     0x1.ef7344b256cd2p-821, 0.0, 0.0, 0.0, 0x1.7bfd23c785cbfp-463,
     0x1.f5252cdfdd561p-601, 0x1.9838abe6e03e6p-288, 0.0, 0x1.bb452b08ba995p-245,
     0x1.d20b646ba1c02p-889, 0.0, 0x1.6184b7d32efb6p-814, 0x1.18f908f252e7p-127,
     0x1.24855030d88bfp-692, 0.0, 0x1.c008a0594f71p-167, 0.0, 0.0,
     0x1.fc70915bf9ec8p-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b8c9f0c0df6d2p-286,
     0x1.5fad4cd622c63p-697, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78d51fcb8d657p-410, 0.0, 0x1.93504921a4e9ep-407, 0.0, 0.0, 0.0,
     0x1.2d3e3f89dff72p-115, 0.0, 0.0, 0x1.4b56ae7110331p-423, 0.0,
     0x1.fff97b2ccbca7p-45, 0.0, 0x1.82b7b6da2616fp-364, 0x1.d095004c54677p-625,
     0x1.118a4f5dc21p-733, 0x1.91c4e86e2bc53p-721, 0.0, 0.0, 0x1.4883d242cd3b8p-169,
     0.0, 0.0, 0.0, 0.0, 0x1.576b78c3b2034p-71, 0.0, 0.0, 0x1.a4daaaeccef01p-429,
     0x1.4f01f838e4113p-512, 0.0, 0.0, 0x1.4167ea15babaap-238, 0x1.6ecc11088b1f1p-329,
     0x1.2374cb8513eacp-38, 0.0, 0.0, 0.0, 0x1.0d598008abedap-835, 0.0, 0.0,
     0x1.3142dc08e0eb4p-634, 0x1.c8888da0a7dfep-764, 0.0, 0.0, 0x1.c30da0c652154p-814,
     0x1.55508c9ef88f7p-432, 0.0, 0x1.3024bb60d7a47p-655, 0.0, 0x1.614d77ed8efacp-912,
     0.0, 0.0, 0x1.85a3b4be80e49p-744, 0.0, 0x1.9a565e058c2f3p-680, 0.0, 0.0,
     0x1.c73220943574fp-761, 0x1.790aa556027a3p-405, 0x1.22152b14af4c6p-896, 0.0,
     0x1.fb4c0cfde073bp-353, 0.0, 0.0, 0x1.8d35405ab7b71p-47, 0x1.dd87acfb9d48cp-825,
     0x1.c4057460daca7p-393, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.488f0f9680c1fp-580,
     0x1.6637c1e0a694dp-148, 0.0, 0x1.3d093c6bebd84p-59, 0x1.59420492a4c7bp-988,
     0x1.2a92c73afc9b5p-907, 0.0, 0x1.ed9dd73253f8p-804, 0.0, 0.0, 0.0, 0.0,
     0x1.4bdeb9d6179c2p-906, 0x1.bf5d9e4ebfd1ap-576, 0x1.676c8ba73b8c2p-522, 0.0, 0.0,
     0.0, 0.0, 0x1.b516a676e4a69p-1017, 0.0, 0.0, 0x1.f0f8b9f3b6ff7p-25, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f1075b31fbf26p-479, 0.0, 0x1.e6429e347aeeep-27,
     0x1.4dafc0d78e321p-468, 0x1.cf18334212563p-974, 0x1.70e488d1d78cfp-295, 0.0, 0.0,
     0x1.ceb129bbfb7d3p-56, 0.0, 0x1.32ff9ea410b8ep-373, 0.0, 0.0, 0.0,
     0x1.ca1b70b161245p-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f669682caf7bp-175,
     0x1.484f78f4a4c6dp-73, 0.0, 0.0, 0x1.85f9fbed9d417p-371, 0x1.f2f1426857fa3p-252,
     0.0, 0x1.69dfa83b59215p-744, 0.0, 0.0, 0.0, 0x1.bd622ebdaa6c8p-178, 0.0,
     0x1.5755d3f7e2edep-800, 0.0, 0x1.fdb2c2429ce74p-541, 0.0, 0.0,
     0x1.81a8aa6bd9166p-735, 0x1.7c85ae013dac8p-458, 0.0, 0.0, 0x1.e85dbd6d5acp-942,
     0x1.1d9ad92ae4e19p-67, 0.0, 0.0, 0.0, 0x1.fd68c932795c8p-328, 0.0,
     0x1.671efcdc41c85p-533, 0x1.3da824a26c9f2p-870, 0x1.a74978e633c8bp-810,
     0x1.95c947b9eb095p-698, 0x1.d4ea4550bdbd7p-60, 0x1.72cc378b69ab9p-576, 0.0, 0.0,
     0.0, 0x1.5a895537ccdd4p-564, 0x1.6c650b65504d3p-557, 0.0, 0x1.26130b7934de2p-131,
     0x1.30eab795f9a83p-980, 0.0, 0x1.3934bdc4108bep-568, 0x1.48cb4b7b7e02ap-388, 0.0,
     0x1.f3f6a9f6dc677p-921, 0.0, 0x1.7dbc2ced393a9p-323, 0.0, 0.0, 0.0, 0.0,
     0x1.65645e623b37bp-664, 0.0, 0x1.0c4448b75b881p-90, 0x1.1ea31e1fca9ecp-621, 0.0,
     0x1.cb9975550842bp-308, 0.0, 0x1.aa9481a5c195fp-215, 0.0, 0.0,
     0x1.9cf5f1a6bfd6fp-822, 0x1.2ce0427bd8ddep-1013, 0x1.4c2b383ebefb6p-285, 0.0,
     0x1.9c934e5edebdfp-53, 0x1.441d4bc7222ffp-925, 0.0, 0x1.af8bdcdcf3515p-909,
     0x1.18bcc0b4322bbp-558, 0.0, 0.0, 0x1.c3300c0ee4a3fp-314,
     0x1.ab7377c3c1a84p-1009, 0x1.ebe7d56665ef7p-793, 0x1.9c998bf4566d2p-66,
     0x1.2eae0fe8a1942p-782, 0.0, 0.0, 0x1.3199a7a783715p-88, 0x1.bda17075420dap-876,
     0x1.0dd08b2504962p-59, 0.0, 0.0, 0x1.cfe53959f5df3p-412, 0.0, 0.0,
     0x1.a40a02a3623d5p-650, 0x1.584194dccd0fcp-172, 0x1.b16f4fd49b33cp-432, 0.0, 0.0,
     0x1.04bff24079de4p-598, 0x1.6fac01b020374p-621, 0.0, 0x1.6594fa3a5072cp-140, 0.0,
     0x1.0dcb24cbe0849p-62, 0x1.eadab36b304c7p-681, 0.0, 0x1.983474606f8cep-657,
     0x1.f26bf759e2e1cp-470, 0.0, 0x1.a173c26421c59p-591, 0x1.a3610476a065p-761,
     0x1.23e4688c13024p-382, 0x1.a75485c2b94fbp-386, 0.0, 0x1.2db0cb3171469p-296,
     0x1.52706a0b77497p-706, 0x1.e5c2454900f6ep-233, 0.0, 0x1.aae954acb01ffp-872,
     0x1.30823cec24e73p-31, 0x1.f171e66a5349ap-807, 0.0, 0.0, 0.0,
     0x1.c16e4fea6f4c8p-727, 0x1.3c7028de28d33p-709, 0.0, 0.0, 0x1.1b1b4ef848f83p-355,
     0x1.30ffd0edc1d32p-385, 0.0, 0.0, 0x1.8f3073937e5ddp-851, 0x1.e6278bf37a6a6p-936,
     0x1.265c52391c699p-98, 0x1.d4b5fbfc098cp-201, 0.0, 0.0, 0.0,
     0x1.58e6e0799515cp-587, 0x1.f1750b09bfa3ep-57, 0.0, 0.0, 0x1.ff0bd1005751ap-195,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f6f5eb53271ap-295, 0.0, 0.0, 0.0, 0.0,
     0x1.9df7bea497c27p-841, 0x1.b920cb6bf6b1fp-665, 0x1.92d91ffb06085p-675, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1d9819222e725p-46, 0.0, 0.0, 0x1.99df1fc7530dfp-808, 0.0,
     0x1.2d00815098c48p-122, 0x1.4bbe4b8ecc0a8p-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b0dbecd2197d7p-918, 0x1.ab4d95e25c7cfp-628, 0x1.2cef5a85cee1ep-683,
     0x1.18e295502a194p-472, 0x1.fb65ae6d282bcp-82, 0.0, 0x1.897eabec38ab8p-810, 0.0,
     0x1.738ab01433bfdp-166, 0.0, 0.0, 0.0, 0.0, 0x1.a50cd0bce4cb1p-105, 0.0, 0.0,
     0x1.6446619556abep-795, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.928c8a24388a5p-944,
     0x1.567b5d111399cp-892, 0x1.72ad792b0436fp-802, 0x1.515d173d0a692p-614, 0.0,
     0x1.8ad56e23c1668p-136, 0x1.d123ec40ed652p-179, 0.0, 0.0, 0.0, 0.0,
     0x1.85bb4ba919892p-802, 0x1.f38ff5031607cp-296, 0.0, 0x1.cf51c600da59ep-582, 0.0,
     0.0, 0x1.aa1c91d7ca01cp-847, 0.0, 0x1.38b0a82801b69p-781, 0x1.0840070d7c241p-468,
     0x1.f1b93e344c825p-177, 0x1.4f3b9419eb2f4p-506, 0.0, 0.0, 0x1.960c0187a7c94p-136,
     0.0, 0.0, 0x1.d391902a0aaccp-164, 0.0, 0.0, 0.0, 0x1.fefa87d83f8c3p-985,
     0x1.454264b05a2d1p-353, 0.0, 0x1.b837581a7869p-271, 0.0, 0.0,
     0x1.9ff56ab519b95p-328, 0.0, 0.0, 0.0, 0.0, 0x1.e1f19a2884483p-990,
     0x1.9cf2e9c2d8865p-678, 0.0, 0.0, 0x1.8badbd1178bd1p-505, 0.0, 0.0,
     0x1.4c568304bcee4p-687, 0.0, 0.0, 0x1.dc06309b37e71p-438, 0.0,
     0x1.f3ea2eafbc7fap-156, 0x1.5ebc016365615p-797, 0x1.e320bfd69c491p-528, 0.0,
     0x1.0cdc2635163a3p-962, 0x1.9af1dd3e67a1bp-902, 0.0, 0x1.9e755517db4bep-693, 0.0,
     0.0, 0x1.7e27ddf3a4cddp-502, 0x1.06e7e27197b9dp-822, 0x1.deca87b2dcb46p-837, 0.0,
     0.0, 0x1.646bc4cfc483dp-175, 0x1.12dab8ba82deap-380, 0x1.f2a24501e2866p-752, 0.0,
     0x1.eb6b5801b566dp-823, 0.0, 0.0, 0x1.47d465beddbb6p-794, 0x1.bd7ae5124b0f7p-992,
     0x1.d3d271ceed426p-936, 0.0, 0x1.48bfdb300f4f6p-837, 0.0,
     0x1.e3c0a89ae8c68p-1007, 0.0, 0x1.498b39498d6dap-660, 0.0, 0.0, 0.0,
     0x1.934de7758dfa9p-707, 0x1.b1159caf5d2c5p-976, 0.0, 0x1.d6d4cd4930633p-500, 0.0,
     0.0, 0x1.01a7df613e237p-931, 0x1.01f16b21149ccp-83, 0x1.e67d22352e0f6p-204,
     0x1.91b0616968a2cp-307, 0x1.87f78236db77dp-156, 0.0, 0.0, 0.0,
     0x1.6467bf5f783d6p-891, 0.0, 0x1.9e867086ff7b2p-225, 0.0, 0x1.2eb0886c668a3p-620,
     0x1.cc8d7a7f5adc2p-924, 0x1.5ab91b1a26839p-272, 0.0, 0.0, 0.0,
     0x1.aed88461cb5fcp-388, 0x1.5ba51fcebfa7p-643, 0x1.11ec6a552c587p-544,
     0x1.180379bb4e448p-993, 0x1.1bc466fad4bf2p-984, 0.0, 0x1.fe0ad14f250ffp-832, 0.0,
     0.0, 0.0, 0x1.7c86689dd7ee2p-351, 0x1.db8e64f08d0ecp-81, 0.0, 0.0,
     0x1.abb4462aebc44p-368, 0.0, 0.0, 0x1.f18949bc09ffep-495, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a7b0dd56a59c5p-888, 0.0, 0.0, 0x1.86db43731918ep-924,
     0x1.e2e45038e174ap-171, 0.0, 0.0, 0x1.68e7fd6576889p-723, 0.0,
     0x1.9349d6d009aa6p-243, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb6fd0f3e2fb1p-338, 0.0, 0x1.067229cbc1775p-386, 0.0, 0x1.573ba1c5ef2a7p-441,
     0x1.c27f09cca0e36p-839, 0x1.f8a7170591519p-292, 0.0, 0.0, 0.0,
     0x1.cd53f4aaa7084p-66, 0.0, 0.0, 0.0, 0x1.147b7db5a5ddbp-832, 0.0,
     0x1.1e4539c54b99bp-745, 0.0, 0x1.6ffbbd1abf0cbp-793, 0x1.30cae978ae775p-865,
     0x1.1f6d00f37644fp-792, 0.0, 0x1.673643c88d0bbp-722, 0x1.0e110b3fcc3ap-292,
     0x1.4d29cec0605d8p-564, 0.0, 0.0, 0.0, 0x1.713fda99502a2p-552, 0.0,
     0x1.6a0d45526d43ep-284, 0x1.7465c722b6252p-182, 0.0, 0x1.b420d71c406a7p-9, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bb8b033f2d61p-984, 0x1.a798d055f1decp-375,
     0x1.d338e1f56e3f6p-976, 0.0, 0.0, 0.0, 0.0, 0x1.3113799f2a595p-557, 0.0, 0.0,
     0.0, 0.0, 0x1.ae07b9e61b4c4p-340, 0x1.f74ed2a62c3d6p-137, 0x1.0f5b5113f440dp-752,
     0.0, 0.0, 0x1.72c9fa4df8f59p-947, 0.0, 0.0, 0.0, 0x1.878323518d32bp-643, 0.0,
     0x1.d07c222c9367bp-556, 0x1.e071cbc1d927fp-63, 0.0, 0x1.ecd24e335c0fcp-78,
     0x1.3270c8fd4ab4p-813, 0.0, 0x1.67280d4b5a03fp-901, 0.0, 0.0,
     0x1.b732ef548b60fp-617, 0x1.07746e12da916p-360, 0x1.1c7ca09686361p-435, 0.0, 0.0,
     0.0, 0.0, 0x1.801862621448fp-583, 0x1.f620ffa6f6313p-21, 0.0
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
            tmp1 = Sleef_rintd2_kvx(tmp0);
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
    printf("Sleef_rintd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_rintd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
