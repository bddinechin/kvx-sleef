/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammad1_u10purecfma.c --function \
 *     Sleef_lgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.4f770df087b59p-720, 0.0, 0x1.3f66fac4c0a1dp-692, 0x1.0459dcf92f852p-515,
     0.0, 0.0, 0.0, 0x1.579abfbe306aap-504, 0.0, 0.0, 0x1.e21ebfc0a87acp-285, 0.0,
     0.0, 0x1.bcb110937020ep-974, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.541bedec50f0ep-23, 0x1.5305f0a37e23p-92, 0x1.e95bcde72de2ap-276,
     0x1.97dcc445c7d28p-790, 0.0, 0x1.05380b9ab96dap-557, 0.0, 0.0,
     0x1.538dd28c6f7a7p-551, 0.0, 0.0, 0x1.97ea7733cbcdep-602, 0x1.438c7f78b3fa7p-995,
     0.0, 0x1.82daf24521851p-282, 0x1.0a80725693b43p-125, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3d0d4d559a9cp-104, 0.0, 0.0, 0x1.0a29611ffaa9ap-637, 0.0, 0.0,
     0x1.87a339e4f82fap-933, 0x1.37d3d43af3331p-694, 0.0, 0x1.71aeaba8edbb3p-154,
     0x1.ba01855dc5331p-345, 0x1.5c951545b8307p-67, 0x1.d8fb87093dd48p-639, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.77b47a91ee1b7p-233, 0.0, 0x1.6bb11441d505dp-793,
     0x1.c958725b0cb1ap-541, 0.0, 0.0, 0.0, 0.0, 0x1.ff2ce27379ae6p-51,
     0x1.4ab094fd856aap-948, 0x1.94282483777b5p-859, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b1891120968cp-587, 0.0, 0.0, 0x1.e4d6401b4c25bp-141, 0.0, 0.0,
     0x1.61ac679fe8805p-621, 0x1.71036d6bd222fp-424, 0.0, 0x1.be5c8b0619ecbp-541,
     0x1.44699a76a0036p-693, 0x1.952835027ebb5p-833, 0.0, 0x1.269c57b7951c8p-696,
     0x1.e01c77468d6e4p-241, 0.0, 0x1.cc26f328e592dp-672, 0.0, 0x1.85d71e5195f5ep-857,
     0.0, 0.0, 0.0, 0x1.fcc07551fd24bp-671, 0.0, 0.0, 0x1.3e593d4f46c07p-667,
     0x1.5521bb819fefbp-613, 0x1.59bebc9302fb4p-312, 0.0, 0.0, 0.0,
     0x1.413dcc5272d95p-395, 0.0, 0x1.6be7149c205ap-389, 0.0, 0.0,
     0x1.805dba2bf2fa3p-52, 0x1.d10587e9f38a9p-518, 0x1.db9ace7bf3766p-186,
     0x1.3ef0df525cc43p-889, 0x1.5a07fcecac781p-523, 0x1.5397da3252c23p-22,
     0x1.a24e953335c61p-651, 0.0, 0.0, 0.0, 0x1.5b919d2f4ebd9p-224,
     0x1.fa577f398762cp-157, 0.0, 0x1.5da1a140ad258p-549, 0x1.3c384f8e42395p-287,
     0x1.7a0a50d363b88p-543, 0x1.a04583d61cb4p-205, 0.0, 0.0, 0x1.5a7971d9d9209p-221,
     0.0, 0x1.2504097d8c2e2p-334, 0.0, 0x1.1617b493b2a73p-801, 0.0,
     0x1.bd0539f6d5a9fp-53, 0.0, 0.0, 0x1.d3aed056d330ap-388, 0x1.e959c1075ed29p-47,
     0.0, 0.0, 0.0, 0x1.80ad7fb8f87eap-189, 0.0, 0x1.4a0cf6c380d91p-175, 0.0,
     0x1.86c2ba2da0cd3p-104, 0.0, 0x1.3b0cd6ff02d12p-443, 0.0, 0.0, 0.0,
     0x1.da59abe478477p-889, 0.0, 0.0, 0x1.eb0aa158939ecp-1008,
     0x1.d587a7ec4b202p-534, 0x1.35775d5aac6fep-941, 0x1.96f7d50e96d2p-737,
     0x1.bf20aab35e115p-880, 0x1.33d642aad471dp-818, 0x1.5c1e209f5c7b1p-81,
     0x1.78253fa49896ap-780, 0.0, 0.0, 0x1.b822de73bd32bp-865, 0x1.718f144c4cb8ep-217,
     0x1.352c22f79d0f5p-862, 0x1.2f3c1959a5a4bp-394, 0.0, 0x1.ac8b1a72d613p-648,
     0x1.1c0a0533a396p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.645d71eaa4c2cp-99,
     0x1.663998978210fp-343, 0.0, 0x1.beae2ef96dd14p-859, 0.0, 0.0, 0.0,
     0x1.3baf8d3f811f5p-366, 0.0, 0.0, 0.0, 0.0, 0x1.7f64dd0c6284bp-661, 0.0, 0.0,
     0x1.2327a5a8b1392p-936, 0x1.afb7165b8a90ep-560, 0x1.ef3138792bbb3p-321, 0.0,
     0x1.5108ee53f93b2p-947, 0.0, 0x1.f0d2b7d145865p-449, 0x1.55345a589c327p-607, 0.0,
     0.0, 0.0, 0x1.6310e7919dcbep-214, 0.0, 0x1.6a85530f3760cp-972, 0.0,
     0x1.c5a03ec30b56p-965, 0.0, 0.0, 0.0, 0.0, 0x1.0cdf4db84e4dbp-949, 0.0, 0.0, 0.0,
     0.0, 0x1.d45c70cbffc8ap-404, 0x1.478a42875c394p-348, 0.0, 0.0,
     0x1.39f91dcb59d91p-332, 0x1.c073143324796p-701, 0.0, 0x1.4895394314f5ap-604,
     0x1.70917e909096bp-579, 0x1.c7d265624923fp-992, 0x1.6a8010d49d56p-834,
     0x1.6ed0ad4b0d29ep-431, 0x1.b82f33bb16ad5p-686, 0.0, 0.0, 0x1.a27e6153762d7p-507,
     0x1.b015bb835ea6ap-390, 0.0, 0.0, 0x1.f98b742105bbep-129, 0.0, 0.0,
     0x1.9c092c2991104p-368, 0.0, 0x1.96db5f42123fbp-87, 0x1.13fa72c30d412p-398,
     0x1.ded78e6b0ba12p-668, 0.0, 0x1.037de753278ebp-862, 0x1.56ef7d2abc6a5p-404, 0.0,
     0.0, 0.0, 0x1.0b337d3b9b625p-39, 0.0, 0x1.b9785b34f7fb9p-692, 0.0,
     0x1.cb990dc016bddp-236, 0x1.ebba07846ed17p-35, 0.0, 0x1.b58159bc0fd47p-804, 0.0,
     0x1.a474742a88f9ap-734, 0x1.9b297c8ee5339p-669, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5b3726f38734p-686, 0.0, 0x1.d7c20abd3a7c5p-892, 0.0, 0.0, 0.0, 0.0,
     0x1.807523119c2cbp-249, 0x1.d53e1fca492ep-510, 0x1.47e4f4eb079bdp-545, 0.0,
     0x1.1abc663402a8ep-905, 0.0, 0.0, 0x1.202e1972c9affp-938, 0x1.0c7ede3062eafp-810,
     0x1.4b8f3da96417dp-164, 0.0, 0x1.eb826c0eee852p-105, 0.0, 0x1.762861d44f63cp-42,
     0x1.7df249bc59b32p-244, 0.0, 0x1.9ac7f55e98b29p-1005, 0.0, 0.0, 0.0,
     0x1.76e6c9ffdc54ep-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b52685d77c674p-743,
     0x1.b7cfce240705fp-791, 0.0, 0x1.698fe109add04p-903, 0.0, 0x1.1dc9291fb9793p-458,
     0x1.325bd5967a3f6p-709, 0x1.8a3de51df7f33p-228, 0.0, 0.0, 0x1.6ed35c6b874d9p-843,
     0.0, 0.0, 0x1.2d3029f8fb039p-681, 0.0, 0x1.5b6a769e6a10cp-868, 0.0,
     0x1.56b1dc1e7e10fp-1022, 0.0, 0.0, 0x1.b489f2716d313p-553,
     0x1.e8bc375c64cffp-385, 0x1.7d5091d6328afp-629, 0.0, 0x1.b286c2cdda25bp-319,
     0x1.c5e70d1701b5cp-308, 0x1.92af39be35d29p-750, 0x1.ef4287c760f7bp-276, 0.0,
     0x1.ac53e912d749ap-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28d70e312442dp-557,
     0x1.16ed2e1c2ebfdp-268, 0.0, 0x1.f6a657ab12c1cp-972, 0x1.a09c395fd33bbp-1010,
     0x1.186c24327f9d3p-120, 0.0, 0.0, 0x1.4b626aaace2ecp-633, 0.0, 0.0,
     0x1.57c7a1f08f07cp-156, 0.0, 0x1.1439c012e7fc9p-46, 0.0, 0x1.11953a7f6cc0ap-485,
     0.0, 0x1.3aa803e079012p-262, 0x1.2e68988c5db1dp-831, 0x1.d64a35f13e0fep-816,
     0x1.47249b9fcfe23p-321, 0.0, 0.0, 0.0, 0.0, 0x1.5c5be52330997p-306, 0.0,
     0x1.ecc8d4e2efc7bp-259, 0.0, 0.0, 0.0, 0.0, 0x1.71e69c473f0fap-196, 0.0, 0.0,
     0.0, 0x1.bef2fbd2668cdp-332, 0x1.bcb4431f91678p-626, 0.0, 0.0,
     0x1.2f968fb771bfep-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2eca1723fcd4dp-910, 0x1.597db3581c2b4p-788, 0x1.2513061b704fdp-134,
     0x1.cceb441f9bd34p-791, 0x1.283080c6f8621p-561, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a6d5db7757adp-345, 0x1.60ed0046f2293p-561, 0.0, 0x1.d614a6d9093c9p-313, 0.0,
     0x1.d723f8d112a86p-279, 0x1.2170ad8ac35bep-985, 0.0, 0.0, 0.0,
     0x1.2cbf4b17537fep-61, 0x1.9f342b3f75a5fp-108, 0x1.ddf4c9817b3ebp-638, 0.0, 0.0,
     0x1.090443562ac6fp-920, 0.0, 0.0, 0.0, 0x1.59fa256838107p-415,
     0x1.6ce2738b96d05p-731, 0x1.ae74e0eff4889p-1008, 0.0, 0x1.f3ce10e97806fp-952,
     0x1.0ab69f4b4b02bp-967, 0.0, 0x1.625cb222d1ecep-117, 0.0, 0.0,
     0x1.0a22846f96254p-977, 0.0, 0.0, 0x1.020ecbe59dea4p-545, 0x1.5d74e9ac89badp-47,
     0x1.47b84039349b6p-230, 0x1.c20043df2c55cp-952, 0.0, 0.0, 0x1.84ea39e52bb84p-270,
     0x1.22b8825dd345cp-283, 0.0, 0.0, 0.0, 0.0, 0x1.b61d3545facc5p-703, 0.0, 0.0,
     0x1.31d5d7ebf5c21p-738, 0.0, 0.0, 0.0, 0x1.c84df7889898dp-791, 0.0, 0.0,
     0x1.e2f01f573da42p-962, 0x1.e326d58c4b75fp-485, 0x1.c93439e3cb94fp-541,
     0x1.6dd122ba392e1p-17, 0.0, 0.0, 0x1.d64d998590fe3p-689, 0.0, 0.0, 0.0,
     0x1.c29765a295109p-251, 0.0, 0x1.abb8905ea9898p-973, 0x1.7ea947da1c56bp-625,
     0x1.4e82c8be53743p-587, 0x1.8a56e5635bf7bp-444, 0.0, 0.0, 0x1.a18b91d7b65a7p-691,
     0.0, 0.0, 0.0, 0.0, 0x1.ae71b32d219f3p-886, 0.0, 0.0, 0x1.75546add8118bp-81, 0.0,
     0.0, 0x1.f0f5b69a385dfp-76, 0.0, 0x1.0bc72d52f659p-343, 0.0, 0.0, 0.0,
     0x1.84f9e046040c9p-730, 0x1.0f827d894127cp-514, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ad4fb46b7c61p-502, 0.0, 0x1.08df1de815da9p-289, 0x1.669fcb0fe58edp-657,
     0.0, 0.0, 0x1.565acbf93779cp-309, 0x1.30c68c1d8a8bdp-386, 0x1.4f48923d5266cp-220,
     0x1.ee6b6a8007abbp-659, 0x1.f076af72ce2d5p-894, 0x1.2279e64673936p-328,
     0x1.9d634b52d368ep-300, 0.0, 0x1.593e95a0f54b6p-197, 0x1.e121d8dd81256p-821, 0.0,
     0x1.bce554c12be8ep-382, 0x1.96ada80e87cep-900, 0x1.a81bba063724ap-737, 0.0, 0.0,
     0x1.0714012b2472fp-566, 0.0, 0.0, 0.0, 0.0, 0x1.dd33c8e48e266p-970,
     0x1.ba7e373fc50acp-960, 0x1.4a4b5483161b3p-851, 0x1.f204bd5003668p-193,
     0x1.1be3a65d11854p-744, 0.0, 0x1.8c475c0839db9p-329, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.44310b7c5bb81p-89, 0x1.a45e3a8bfdaf2p-460, 0x1.497672f465a62p-188,
     0x1.68d4cba279cd1p-174, 0.0, 0x1.341382df8ee25p-375, 0x1.f6d62373f31e1p-662, 0.0,
     0.0, 0x1.61c68f575fa38p-60, 0.0, 0x1.b416bea4cf7bdp-618, 0.0, 0.0,
     0x1.e9dcf08d428a5p-900, 0x1.b12427978fde3p-236, 0.0, 0.0, 0x1.f5fd01a6b5e7cp-905,
     0.0, 0x1.556cc1bf192a9p-248, 0.0, 0.0, 0x1.4697341fa03cap-833,
     0x1.bbf817bdda846p-407, 0.0, 0.0, 0.0, 0x1.638a9311c1049p-237, 0.0, 0.0,
     0x1.6e12ad1da3d0fp-536, 0x1.785ff6c267617p-808, 0.0, 0.0, 0x1.e1801bcf91b57p-197,
     0x1.7cd9f51ea3208p-920, 0.0, 0x1.81706df8e3e5dp-289, 0.0, 0x1.45aadfe47faf6p-865,
     0x1.7106f81115feep-518, 0.0, 0x1.c93105c3abec7p-55, 0.0, 0.0, 0.0,
     0x1.123063ff47844p-923, 0x1.3c08c5924f149p-453, 0x1.9e765d3435506p-84, 0.0, 0.0,
     0x1.4eb83ea0c538ap-983, 0x1.19e5ca960e958p-819, 0.0, 0.0, 0x1.46cd90b919868p-954,
     0.0, 0x1.c41f0100a09c5p-78, 0x1.32b0d75a931bp-636, 0.0, 0x1.c404d8208f02ep-560,
     0.0, 0x1.a5a810fceaf56p-675, 0x1.66d0d9da986eap-948, 0x1.8d889d2e9adf5p-182,
     0x1.54020efd91328p-151, 0.0, 0x1.5fa52adbf5fa4p-716, 0.0, 0x1.9ccec0487053p-282,
     0x1.876a6f4a50bc5p-65, 0.0, 0.0, 0x1.a451c3db35973p-49, 0.0, 0.0,
     0x1.10e0dc67c91acp-271, 0.0, 0x1.72a03d7a240f3p-875, 0.0, 0x1.6f7190c014536p-385,
     0.0, 0.0, 0x1.024118db8f93bp-1006, 0.0, 0x1.6ef08e657ed98p-822, 0.0,
     0x1.ae5bc26f4a373p-793, 0x1.f00596d0ed962p-61, 0.0, 0x1.fa0ff3d4e301bp-284,
     0x1.1969c942295a8p-741, 0.0, 0.0, 0x1.0140d6faaf77bp-171, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.068b8003ff1d6p-266, 0x1.418fb6b69d27ep-910, 0x1.db77837ac5941p-458,
     0x1.b4e9a61dfc29bp-182, 0x1.21870be56aa26p-378, 0x1.2c320c59bb9cbp-873,
     0x1.ff3756f22bd82p-227, 0x1.2328e7b38725dp-801, 0x1.af5232f4c9e26p-355, 0.0, 0.0,
     0.0, 0x1.6e5a2c2fae227p-581, 0x1.7fa23444fa04ap-820, 0.0, 0x1.01af650f7877p-949,
     0x1.8ba7bd65eefaep-239, 0.0, 0.0, 0x1.4ce3a9e88665p-887, 0x1.3b16ea0bcf667p-742,
     0x1.dd4335d1d36c3p-430, 0.0, 0x1.183bcf0bfa419p-623, 0.0, 0x1.76443bd3857fp-242,
     0x1.5b2eff4bc7fefp-662, 0.0, 0.0, 0.0, 0.0, 0x1.c486002ce9a5ap-1007,
     0x1.e09b2e007b89cp-954, 0.0, 0x1.6a76efb49646cp-428, 0.0, 0.0, 0.0, 0.0,
     0x1.e40fe60e5d002p-693, 0.0, 0x1.2ec8fcacc1abp-409, 0.0, 0x1.439dc6f718731p-355,
     0x1.c3cb3c5abbd32p-28, 0.0, 0x1.baee84eebd96ep-491, 0.0, 0.0,
     0x1.e7a1f0084217fp-824, 0x1.9a20e95acb539p-913, 0.0, 0.0, 0x1.97ccf0383183dp-383,
     0.0, 0x1.57898cb41f693p-703, 0x1.5362d7d42b75fp-226, 0.0, 0x1.55ed518479cdp-19,
     0x1.8bf111a9f2effp-572, 0.0, 0x1.ceea233adccccp-994, 0.0, 0.0, 0.0,
     0x1.da48e32df411bp-264, 0.0, 0x1.b29dcf0b0583fp-602, 0x1.91c9e9304c554p-498,
     0x1.79ee04e4d206p-55, 0x1.076ea5ba6303ap-791, 0x1.87a96cd6b50d5p-894, 0.0,
     0x1.7a858df917e72p-1007, 0.0, 0x1.b190c9beca05cp-882, 0.0, 0.0, 0.0,
     0x1.4d92e6633f808p-843, 0x1.26171e92df403p-599, 0x1.4d70aace60525p-737,
     0x1.34848d97308dap-416, 0.0, 0x1.770e70e1abaa8p-454, 0x1.21d909b25b561p-441,
     0x1.b0e4e111fba79p-460, 0x1.92fd1e9cd57b2p-269, 0x1.bd808e71871b4p-883,
     0x1.aeb4b19bcd9b9p-867, 0x1.df25066268a59p-861, 0x1.84b16a4613971p-278, 0.0, 0.0,
     0.0, 0x1.f47a239e4450bp-18, 0x1.c45fb0be57024p-882, 0.0, 0x1.be5d3b7b436e3p-823,
     0.0, 0x1.5bc42bb27a1a6p-877, 0x1.d0b4c6879d9b6p-337, 0x1.7d32d3d185744p-636, 0.0,
     0.0, 0.0, 0x1.0a02b490cc089p-251, 0.0, 0x1.0c19243372965p-8,
     0x1.e5759cf398269p-962, 0x1.d8ee1c216a477p-850, 0.0, 0.0, 0x1.a3aa7ce0c937ap-48,
     0x1.d89ba31f7c3ecp-637, 0x1.6c5dc79a84759p-1011, 0.0, 0x1.13c9151bbddd5p-987,
     0x1.cd14cf165787fp-254, 0x1.fbf418c86188ep-277, 0.0, 0x1.580eae4fb6f3bp-986, 0.0,
     0x1.aafaadd537489p-448, 0x1.18cdd26e1f38p-692, 0.0, 0x1.1602943778cb1p-10, 0.0,
     0.0, 0.0, 0.0, 0x1.55b713c65010fp-207, 0x1.726a1746135bap-685,
     0x1.7607aecb4072bp-200, 0.0, 0.0, 0x1.6d01447c4989ep-744, 0x1.ce02993769537p-947,
     0x1.d1c250cb325ebp-1012, 0x1.1b7f19628d0a9p-46, 0x1.13c4a17054088p-276, 0.0, 0.0,
     0.0, 0.0, 0x1.d95f60783c5c8p-233, 0x1.824954b36271ap-781, 0.0,
     0x1.188358288fe29p-667, 0.0, 0.0, 0.0, 0.0, 0x1.6024506a4640cp-870, 0.0,
     0x1.d24d60c119753p-837, 0x1.81b82db8bccddp-686, 0.0, 0.0, 0.0, 0.0,
     0x1.01f28ef8decccp-443, 0x1.ec1891b901bd2p-737, 0.0, 0.0, 0.0,
     0x1.c78a4d9dc3b16p-535, 0.0, 0x1.dd08283a9d3c5p-299, 0.0, 0.0,
     0x1.64e533e0c9089p-318, 0.0, 0x1.48ef9d33a4abcp-86, 0x1.93a66e6cb37eep-242, 0.0,
     0.0, 0x1.c5fd18909fe73p-908, 0.0, 0x1.d28d12855dc04p-852, 0x1.8c99397b370a6p-72,
     0.0, 0.0, 0x1.2f05c1126ed71p-78, 0x1.7a74b04670a12p-701, 0.0, 0.0, 0.0,
     0x1.ec3d4fa206791p-561, 0.0, 0x1.2e91167166b03p-371, 0x1.958c3c25dbe57p-801,
     0x1.f9bbb5ad769ap-658, 0x1.8ae3f0ae0b38bp-732, 0.0, 0x1.e7e2d8ec4263ep-530, 0.0,
     0x1.bdef9062e4b8bp-1000, 0.0, 0x1.a6ef2342479ap-68, 0x1.388d3a7c99748p-759, 0.0,
     0.0, 0x1.957a065e28308p-311, 0x1.08078d47fa829p-442, 0.0, 0x1.6a5761ff2d55ap-467,
     0x1.457f6930f8a49p-140, 0x1.c7e4841a42996p-940, 0x1.ce533d735f66dp-51, 0.0, 0.0,
     0x1.a29aae321da6dp-122, 0.0, 0.0, 0x1.e953d195b2209p-500, 0.0, 0.0,
     0x1.f041e7282ff0ap-376, 0x1.a00c7507d3d1ap-528, 0x1.8aa51043b485ap-587, 0.0, 0.0,
     0x1.019fb245a2b64p-499, 0x1.d7a9c6df4a9b3p-481, 0x1.1d0dde36a6d75p-165,
     0x1.dead61db81289p-133, 0.0, 0.0, 0x1.b1d915edadad8p-706, 0.0,
     0x1.9c8b981cc1797p-300, 0x1.51e0c9b65dfb1p-971, 0.0, 0.0, 0x1.8aaaf6690469fp-947,
     0.0, 0x1.c4ebb1dfd43ccp-448, 0x1.de6f2040a0e33p-591, 0x1.21b6361810e8p-450, 0.0,
     0x1.3aa3303f30039p-159, 0x1.3623162b14611p-957, 0x1.e5e6d67b6e526p-548, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa2039bdd2308p-788, 0.0, 0.0, 0x1.7814ced1923b6p-394,
     0x1.4a7fd3859f88cp-964, 0.0, 0x1.15d0d25bc62f5p-995, 0.0, 0x1.6422074eca7adp-475,
     0.0, 0x1.dc3d7edbc5b77p-108, 0x1.58034a77943ffp-564, 0x1.b52bebc293856p-58,
     0x1.e2b23cb86d2fep-203, 0.0, 0.0, 0x1.0df0aee1bc625p-441, 0.0,
     0x1.b8bda4fe3e3e5p-476, 0x1.86ee14dcec26fp-281, 0x1.36e2ea990fa41p-310,
     0x1.bd36c597bb05dp-280, 0x1.a8cb3cc1aa0cp-567, 0.0, 0x1.de30112b11384p-500, 0.0,
     0.0, 0.0, 0x1.544374d2e07d2p-963, 0.0, 0x1.c52b004e543ecp-980, 0.0,
     0x1.096f40ce12932p-85, 0.0, 0x1.5ba891306010fp-5, 0x1.5793b295ab601p-155, 0.0,
     0.0, 0.0, 0.0, 0x1.132e81408c0d5p-654, 0x1.3d45faa749b57p-683, 0.0, 0.0,
     0x1.6dd4e3f3a4f54p-651, 0x1.77203de21fc6ep-120, 0x1.bdbc1aea2e19fp-357,
     0x1.d5eb3b657479fp-525, 0x1.a200fb7121816p-21, 0x1.8ea2e677081c5p-544, 0.0,
     0x1.981d9bd0a65cap-726, 0.0, 0x1.67a250df0cdeap-71, 0.0, 0.0, 0.0,
     0x1.6e2b7efe0534cp-836, 0.0, 0x1.f121bb2a1e81ap-17, 0x1.674372fff2efcp-893,
     0x1.1099d91900cc7p-384, 0.0, 0.0, 0x1.3654ead174445p-102, 0x1.b299950835f24p-936,
     0x1.cce8e3de8f4f6p-759, 0.0, 0x1.11c4af9f6b5cap-871, 0x1.6147fca25fb79p-411,
     0x1.ee13f5800b1ddp-233, 0x1.c971a34a4ff54p-451, 0x1.516f6ba6539bcp-47,
     0x1.ff7c49fce4e2cp-452, 0x1.2f84a09becaa4p-1012, 0x1.d04efac37a34bp-810, 0.0,
     0.0, 0.0, 0x1.f54126dde7c7dp-928, 0x1.fb4170c584cecp-102, 0.0, 0.0,
     0x1.008c320ad36c7p-161, 0x1.68d03269d67f6p-461, 0.0, 0.0, 0x1.26be5e4c6e47bp-565,
     0x1.5a7d174eaeceep-836, 0.0, 0.0, 0.0, 0.0, 0x1.9631fc9f0f378p-62,
     0x1.d2be9986186efp-381, 0x1.6884e121482a3p-112, 0.0, 0.0, 0.0,
     0x1.fdc25644bb793p-1003, 0x1.2d008a8268effp-689, 0x1.02134d8140e1cp-85, 0.0, 0.0,
     0x1.f59891bee9c76p-958, 0x1.40faeae4baa0bp-43, 0x1.98f3df3aacb97p-69,
     0x1.6f622411d674ep-761, 0x1.02d1b054bbce2p-544, 0x1.bd6d62275ef87p-609, 0.0,
     0x1.2578508993071p-197, 0x1.9f888de169b94p-707, 0x1.b242d904889d1p-97, 0.0,
     0x1.98936790312afp-788
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_lgammad1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_lgammad1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_lgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
