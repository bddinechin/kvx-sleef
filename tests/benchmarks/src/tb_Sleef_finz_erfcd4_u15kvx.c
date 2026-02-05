/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcd4_u15kvx.c --function \
 *     Sleef_finz_erfcd4_u15kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.2af69a930edc8p-221, 0x1.9ebc2c58f373ap-666, 0.0, 0.0,
     0x1.f1fa3d879cc73p-855, 0.0, 0.0, 0x1.d9be5e63cc59dp-372, 0x1.98ec01373d247p-502,
     0x1.163285603045p-602, 0x1.2fe1bd4f6edb7p-588, 0x1.126ee90b88cfap-891,
     0x1.6816de2010193p-150, 0.0, 0.0, 0x1.2732a8e00d144p-110, 0.0, 0.0, 0.0,
     0x1.c613d1ce38236p-389, 0x1.2668986f26306p-869, 0x1.c527cdb81390ap-733,
     0x1.293f9a589d1fcp-865, 0x1.9383d8e8fa4c1p-701, 0x1.2302a4cbe48c4p-346,
     0x1.35f18cc59a9e7p-442, 0x1.f1166bb26680ep-277, 0x1.eb7d091613da2p-433, 0.0, 0.0,
     0x1.79d6aff502aaap-729, 0x1.c1b5e83497b3dp-996, 0x1.63516a9f4273dp-999,
     0x1.746b08a72a762p-878, 0.0, 0.0, 0x1.add7d7cef666dp-970, 0.0,
     0x1.b2e337c62177fp-563, 0x1.511bcd5dd89e9p-978, 0.0, 0x1.9b89c9fb5fe6fp-202,
     0x1.a1875e146072ap-534, 0x1.e9338166d4227p-533, 0.0, 0.0, 0.0,
     0x1.b59e317925f95p-244, 0x1.086cb19459f9cp-158, 0x1.e1ed4ac464c9ap-895, 0.0,
     0x1.9e4719d3591f5p-933, 0x1.ae782f1ab0cccp-909, 0.0, 0x1.bc98f9bd195eap-624,
     0x1.3c70320df88dbp-427, 0.0, 0.0, 0.0, 0x1.edf1763a99dabp-773,
     0x1.5b48a65e21be4p-133, 0.0, 0x1.632b6a0cbd5ebp-384, 0.0, 0x1.d901c419075c5p-845,
     0x1.7dc22d3965ec6p-394, 0x1.747975edaf2cp-707, 0.0, 0.0, 0x1.b63288ca21221p-982,
     0x1.e9f43b5d48a91p-318, 0x1.97bcbd387c1e1p-65, 0x1.344bf3fa59e5fp-787, 0.0, 0.0,
     0x1.67ea315602d7p-172, 0x1.a65352b3b33b1p-302, 0x1.1ea0cdd208b38p-324, 0.0, 0.0,
     0x1.0439cc1f4cb4p-791, 0x1p0, 0.0, 0x1.c7ef87afe262cp-431, 0.0, 0.0, 0.0,
     0x1.682cffe9824cdp-801, 0x1.78905d21035c8p-187, 0x1.c9dc776e955dp-792, 0.0,
     0x1.153e65c06af02p-294, 0.0, 0.0, 0.0, 0.0, 0x1.50e428389d05cp-480, 0.0, 0.0,
     0x1.f3b705c313b3p-59, 0x1.231673a2564e6p-363, 0x1.5af176e92f031p-642,
     0x1.fcfb77f48af73p-239, 0x1.db05c98c9d0f3p-234, 0.0, 0x1.220af198ebea7p-148, 0.0,
     0.0, 0x1.0c1972192c907p-605, 0.0, 0x1.59cd6454ed4bdp-718, 0x1.650df97a2fc1fp-326,
     0.0, 0.0, 0.0, 0.0, 0x1.81b8ac39532ecp-749, 0.0, 0x1.672dca1b7ea16p-463,
     0x1.c8f384f16ea9fp-441, 0.0, 0.0, 0.0, 0.0, 0x1.8fa66187774f3p-384,
     0x1.eb1b0edb1575dp-4, 0.0, 0.0, 0x1.bd7dac0e1428fp-829, 0.0,
     0x1.660e23b9577b7p-634, 0x1.d34b7a13b78ebp-221, 0.0, 0.0, 0x1.8438b5acb30eep-910,
     0x1.9313ba89cf5d2p-788, 0x1.a86ef0c1c707p-458, 0.0, 0x1.0264acfc169ccp-235,
     0x1.53ecde7259e18p-761, 0.0, 0.0, 0.0, 0x1.f87bc32032785p-666, 0.0,
     0x1.be1ebff7e714cp-679, 0x1.c2f783580fc76p-410, 0.0, 0.0, 0x1.06a042b511df2p-537,
     0.0, 0x1.0fe34f651386p-978, 0.0, 0x1.26da2c4f0eba4p-262, 0x1.08755bbeebcf2p-148,
     0.0, 0x1.7c4763b69953ap-369, 0.0, 0.0, 0x1.dfae7c7eb17a5p-543,
     0x1.34797b361c62dp-120, 0x1.d7438c898725p-994, 0x1.31b1ceb7e373bp-728,
     0x1.373f99e75071bp-85, 0.0, 0.0, 0.0, 0.0, 0x1.7bc8f028d5a94p-224, 0.0, 0.0,
     0x1.0740837b6bca3p-309, 0.0, 0.0, 0.0, 0x1.a7beb59202c55p-1009,
     0x1.722614b00fdfap-846, 0.0, 0x1.8bac5cdeadd75p-656, 0x1.44f0d1f494f4p-400, 0.0,
     0x1.75869ae2bb01ap-294, 0.0, 0.0, 0.0, 0.0, 0x1.3082f4c5cbaf4p-273,
     0x1.b35da76e9cd6ap-894, 0.0, 0x1.12039b48bb1d1p-70, 0.0, 0.0,
     0x1.b7763181b9c0bp-114, 0.0, 0.0, 0.0, 0.0, 0x1.9868fa03d462ap-54, 0.0, 0.0,
     0x1.e6aed4ee8ab9p-354, 0x1.c7c514fd8ca5dp-600, 0x1.a28aa070b5b6p-855,
     0x1.f1587d12f70e8p-688, 0.0, 0.0, 0x1.f389a80c3977bp-561, 0x1.bf16d140f94a7p-572,
     0.0, 0.0, 0.0, 0.0, 0x1.80cab1866f802p-207, 0.0, 0x1.71b32c96906b3p-937, 0.0,
     0.0, 0.0, 0x1.806b107d7cb32p-5, 0.0, 0x1.7f1187b05b2b1p-562, 0.0,
     0x1.7d338da45d37cp-38, 0x1.1e765129c3c83p-189, 0x1.f7bcd14a796f3p-224,
     0x1.6bdb57b92ad01p-353, 0.0, 0x1.852f5c69a711ap-178, 0x1.be18d864bd284p-913,
     0x1.9ce4dc6546442p-246, 0.0, 0x1.b8f50a7a6c1f6p-162, 0x1.0e99015ee156ap-499, 0.0,
     0x1.c5f304edca805p-153, 0.0, 0.0, 0.0, 0x1.422d3ecd7a0bcp-25,
     0x1.d0a057685b50bp-786, 0.0, 0x1.a83047c6157c7p-122, 0x1.f0c567885f98cp-683,
     0x1.8a49628663397p-292, 0.0, 0.0, 0x1.a7a5e902e42d4p-346, 0.0, 0.0, 0.0,
     0x1.e31cf1f1b6428p-112, 0.0, 0.0, 0.0, 0x1.6c8918ed9004p-480,
     0x1.9bcda8002fa61p-449, 0.0, 0.0, 0.0, 0x1.d21217e4e75bcp-697, 0.0, 0.0,
     0x1.aaa375a8d6de2p-949, 0x1.7f50e73dbb093p-340, 0x1.5832f3f9a1488p-889, 0.0, 0.0,
     0x1.7a9c360b94ef5p-547, 0.0, 0x1.98f5365d7ff8ap-11, 0x1.526b0ec85a68ep-270, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.11ad67aafca65p-652, 0.0, 0.0, 0.0,
     0x1.64166668b80ddp-156, 0x1.941ff4a22af09p-594, 0.0, 0.0, 0x1.4e70b207f89e3p-370,
     0.0, 0x1.2ba01c5b2af2cp-277, 0.0, 0x1.df98c743447cap-274, 0.0, 0.0,
     0x1.210985660d673p-905, 0x1.59762fe20f27cp-410, 0.0, 0x1.1f7bbcfd94e63p-585,
     0x1.387bfa600a2f4p-411, 0x1.0c917c4206f98p-93, 0.0, 0x1.fe1b461c4efb3p-639,
     0x1.479fee577f626p-63, 0.0, 0x1.ac1b0a09aec25p-710, 0x1.20a46c574f4a8p-962,
     0x1.ef75e82a666b9p-485, 0x1.3811c3c0f6bc9p-326, 0.0, 0x1.a889a5b0b9466p-55,
     0x1.1320717d63215p-914, 0.0, 0x1.17948f796cc2cp-996, 0.0, 0.0, 0.0,
     0x1.031f278b5c2cdp-909, 0.0, 0x1.7a711cea56688p-45, 0x1.3fd969ea29de9p-1001, 0.0,
     0.0, 0.0, 0x1.faf9c245fe22dp-191, 0x1.67e31da6b0cb9p-954, 0x1.345a3bab55bc2p-127,
     0x1.7b90faaa193dp-435, 0x1.e107228b9b6c1p-312, 0x1.0a5cf05745381p-338, 0.0,
     0x1.ee87d581b373ep-402, 0x1.bbf0584389529p-248, 0.0, 0x1.7061c74f59f9ep-1006,
     0.0, 0x1.b05534b267ed1p-118, 0.0, 0x1.2922a9c9eaf49p-215, 0.0,
     0x1.2bc5590336f76p-644, 0.0, 0.0, 0x1.d363c2c59952fp-1009, 0.0,
     0x1.43e8e8e443022p-326, 0x1.94695e8a3ffb8p-196, 0.0, 0.0, 0.0,
     0x1.cfda68ea02475p-221, 0.0, 0x1.dcd96ea1938f4p-537, 0.0, 0x1.cc5243b489459p-985,
     0x1.4581efecb2e99p-824, 0x1.6208d776e593bp-130, 0.0, 0x1.010aa3d0c6fedp-201,
     0x1.0575ec5550cdp-432, 0.0, 0.0, 0x1.3c2e2c3c3140ap-27, 0x1.4966f4fbb28p-910,
     0x1.8b84677cf3243p-137, 0x1.c74c00e056989p-41, 0x1.39dfb0dd65551p-763, 0.0,
     0x1.cca797401989ep-912, 0.0, 0.0, 0x1.029bfd84f0f92p-811,
     0x1.0b2daf0eca094p-1015, 0x1.1aa3090a71663p-683, 0.0, 0.0, 0.0,
     0x1.8f37df14a45bbp-793, 0x1.87799b4a40ca9p-894, 0.0, 0x1.3d8615d16748p-106,
     0x1.d693b8416afa1p-496, 0.0, 0.0, 0x1.0bdab32f97c21p-1005, 0.0, 0.0,
     0x1.d68febdfc10ddp-753, 0x1.c32389081a9b7p-564, 0.0, 0.0, 0x1.3b484ade11d7p-243,
     0.0, 0.0, 0x1.72afb070b0dcep-159, 0x1.7f399927d9824p-200, 0x1.a52a09bab9cc6p-666,
     0x1.f8d9e9c4bba9dp-910, 0x1.e5852bf8c2b38p-665, 0x1.2662761458211p-79,
     0x1.3ede249433a4ep-489, 0.0, 0.0, 0.0, 0x1.1db93da4b7025p-247, 0.0, 0.0,
     0x1.b67d612ccf67bp-597, 0.0, 0.0, 0x1.fa2a903815e79p-153, 0x1.92348fd665078p-941,
     0.0, 0.0, 0.0, 0x1.92c8938d08e66p-292, 0.0, 0x1.7eb7ab0fcefcep-252,
     0x1.f5ae4bf131766p-387, 0.0, 0x1.b0953e24ba22ep-958, 0x1.e642791ca190ap-753,
     0x1.1b2cd75ee17a7p-220, 0x1.cdb385aad1647p-874, 0.0, 0x1.3bec464a003e9p-123, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d8f04460fdeafp-612, 0.0, 0.0,
     0x1.34fa6af57a557p-479, 0.0, 0.0, 0x1.d5748530649c5p-553, 0.0, 0.0, 0.0, 0.0,
     0x1.0a8cd8bb14135p-680, 0x1.930cb1723e728p-252, 0x1.4fd38bd273061p-203, 0.0, 0.0,
     0.0, 0.0, 0x1.5087412b0c89bp-732, 0x1.636d3f0de50ccp-621, 0.0,
     0x1.b4de7c3e9739cp-403, 0.0, 0.0, 0x1.6092beadd71adp-844, 0x1.705437cad4c81p-657,
     0.0, 0.0, 0x1.30750464abe3ep-300, 0.0, 0.0, 0x1.f16732ea49d23p-266, 0.0, 0.0,
     0.0, 0.0, 0x1.cb9c17c7fc75ap-291, 0x1.2bfbac3038cc5p-32, 0.0, 0.0,
     0x1.bb33d80ef6a93p-923, 0x1.d52dd2e151f4fp-821, 0.0, 0.0, 0x1.6e29973758f26p-542,
     0x1.326b48e29b367p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.218875480552p-604,
     0x1.8428a08844efep-561, 0.0, 0.0, 0x1.817ca4fd3fa8p-35, 0x1.e9217ec4de68p-399,
     0.0, 0x1.16a86146f21bfp-285, 0x1.d9ae73d199609p-661, 0.0, 0x1.da72914c8c9c7p-706,
     0x1.f21ea6058d7bfp-560, 0.0, 0.0, 0x1.1da8b3f663314p-692, 0x1.4728a0ed6e8d4p-764,
     0x1.3f167291017fp-636, 0.0, 0x1.af80c5d52516dp-741, 0x1.4818d6b277fcp-855,
     0x1.75ea6fff51275p-82, 0.0, 0x1.a713544fd7ce6p-64, 0.0, 0x1.3b36e9b311bf3p-913,
     0x1.a1d329b6dfd46p-702, 0x1.6ac07defab578p-291, 0x1.994b55413c9cfp-220, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f573631e01f8p-535, 0x1.52207587311aap-395,
     0x1.c211e607b00ffp-613, 0x1.745137ea9694p-83, 0x1.66e1d541c4a7p-624, 0.0, 0.0,
     0.0, 0x1.5b5c602e3838fp-307, 0.0, 0.0, 0x1.9a1385dc95a45p-312,
     0x1.bd2f95350c35fp-668, 0x1.34cf5348a282ap-924, 0x1.04ec41ce2fa27p-240, 0.0, 0.0,
     0x1.7baf844e503dep-959, 0x1.a7c3f7bdad65p-85, 0x1.2653d90c41b81p-242,
     0x1.829a41cce63d2p-455, 0x1.abcea82d65649p-509, 0.0, 0.0, 0x1.ce71154dcc89bp-103,
     0.0, 0.0, 0.0, 0.0, 0x1.2e4e82be1c286p-492, 0.0, 0x1.4166c0cc6d588p-57, 0.0, 0.0,
     0x1.aa0e4cb0e5117p-201, 0x1.6702e763112e9p-422, 0x1.1bb49d7681b54p-7, 0.0,
     0x1.b5da3fc13651fp-142, 0.0, 0.0, 0x1.745133308e3b9p-85, 0.0,
     0x1.bf7426e818c53p-108, 0.0, 0.0, 0x1.536fcff778733p-263, 0x1.c958a4625ef94p-26,
     0.0, 0x1.b42004d3a145ap-307, 0x1.a3eb11969f2c2p-275, 0.0, 0x1.04a6c9f2aff7dp-727,
     0.0, 0x1.c72e16ab329b6p-140, 0x1p0, 0.0, 0x1.d7851138499dfp-323,
     0x1.126934f82aadcp-281, 0x1.7bddd24fa4e0fp-500, 0.0, 0.0, 0x1.355a4a713a27dp-255,
     0.0, 0x1.e374effbce27cp-462, 0.0, 0x1.1dab861050805p-420, 0.0, 0.0, 0.0,
     0x1.4dbb0c8cfae74p-457, 0x1.486e4a291130dp-319, 0.0, 0.0, 0x1.8846fd57fe773p-310,
     0.0, 0x1.82b5f1b56e269p-351, 0x1.0ac789011629bp-689, 0x1.0795a1fcbc98ep-35, 0.0,
     0.0, 0.0, 0x1.9e4a04e22820ep-662, 0x1.af5324ae6577ap-659, 0x1.1714536e2975ep-66,
     0x1.ee18832110494p-169, 0x1.02b73cd6d0814p-750, 0.0, 0x1.b11cd5fd99699p-849, 0.0,
     0x1.675237259cd26p-63, 0x1.d71ef16a7e942p-776, 0x1.b6fd8ad1598f5p-761, 0.0, 0.0,
     0x1.aa56e5456da1ap-733, 0x1.b639e6890a84dp-270, 0x1.1cb0d8408376bp-306,
     0x1.d6dfc2ca8d7f9p-192, 0.0, 0.0, 0x1.386caca481e87p-1018, 0x1.7ce89efa5e19ep-62,
     0.0, 0x1.40fc15c9dff74p-584, 0.0, 0x1.6d731ff7872f4p-802, 0x1.87c02c6684ec5p-847,
     0.0, 0.0, 0.0, 0x1.df5a2398a7b1cp-432, 0.0, 0x1.9fed900392b2ap-439,
     0x1.257b454997f7fp-976, 0.0, 0x1.2b8c285640cb9p-32, 0x1.38c6c1d354acp-826,
     0x1.22652dba15466p-2, 0.0, 0.0, 0x1.d101b955652bcp-718, 0.0, 0.0, 0.0,
     0x1.dcfe37fc34e61p-450, 0x1.ba2343f0931b3p-99, 0x1.f8de0b3214d1cp-279,
     0x1.2bd800148116bp-378, 0x1.2ac78f17c0f05p-969, 0.0, 0.0, 0x1.53a2bf79c69fap-768,
     0x1.8c6bd29bf6d1ep-765, 0x1.79aeaea182996p-359, 0x1.b8ec36d8f1af1p-952, 0.0,
     0x1.6f9471010a29p-332, 0.0, 0.0, 0x1.806efb38556fp-1014, 0.0,
     0x1.041a606bcfe33p-137, 0.0, 0x1.17717d73e2938p-312, 0.0, 0.0,
     0x1.004a3b743611ap-824, 0.0, 0.0, 0.0, 0.0, 0x1.94b589a39f86p-693, 0.0, 0.0,
     0x1.b4d6c2e35c777p-2, 0x1.2f3087c71db1fp-188, 0x1.da4b16b33ee6ap-919,
     0x1.e68ae106f4d02p-3, 0.0, 0.0, 0.0, 0x1.051bf60051409p-1011,
     0x1.c1afaafd3c6c9p-356, 0x1.55e5a1e7d6473p-911, 0.0, 0.0, 0x1.301d93cc3624bp-768,
     0.0, 0.0, 0.0, 0.0, 0x1.1c665055d6c65p-734, 0.0, 0.0, 0x1.16861564e6e5bp-109,
     0.0, 0.0, 0.0, 0x1.d642b681a6125p-668, 0.0, 0x1.3f5716abf762ap-166,
     0x1.58261efa0cf3fp-623, 0x1.b54dd012c6d87p-532, 0x1.99bbbbb9bd3a9p-542, 0.0,
     0x1.f8beacce36e9dp-431, 0.0, 0.0, 0x1.fe87a9ce8c2bfp-583, 0x1.2a04fc209edc7p-986,
     0.0, 0x1.35adc43bef081p-335, 0.0, 0x1.c0d802b198c96p-340, 0x1.651a1d25be9cbp-799,
     0.0, 0.0, 0.0, 0x1.5e6584a2b564dp-750, 0x1.ed6a22c5caf3p-95, 0.0,
     0x1.c67b7f6212ec3p-786, 0.0, 0.0, 0x1.2e74b2dbad00cp-764, 0x1.65b5a822a7609p-172,
     0x1.4ff1f3986b5fbp-33, 0.0, 0x1.f4a3d46c21dd8p-602, 0.0, 0x1.b31c648502919p-133,
     0.0, 0x1.a6eb3bbefe18ep-422, 0x1.c856f4b1576e7p-603, 0x1.3a091b5796163p-354, 0.0,
     0.0, 0.0, 0.0, 0x1.3484dbd83fba7p-997, 0x1.81c9550946b11p-910,
     0x1.5b73ecdbb869bp-220, 0x1.76f638da456bap-117, 0x1.b403ed9c59b99p-560, 0.0, 0.0,
     0x1.77d0192c7f17ap-992, 0.0, 0x1.b09d359f152dfp-990, 0x1.710964d9a3e12p-60, 0.0,
     0x1.ebfc4e36e2fe4p-411, 0x1.9d559a954391dp-57, 0x1.c6c4788600621p-954, 0.0, 0.0,
     0x1.af051c07e8f0ap-181, 0.0, 0x1.2f13a4fb116a8p-764, 0.0, 0x1.87987af11674ap-658,
     0.0, 0x1.cdad1a3d29766p-450, 0.0, 0x1.987cf22e29fb8p-64, 0x1.4ee04c7f08f45p-328,
     0.0, 0x1.38e78be26ad4ap-150, 0x1.b97681dc66ecbp-295, 0.0, 0x1.b18f3932373dbp-947,
     0x1.c26f6ff307773p-91, 0.0, 0.0, 0.0, 0x1.0b1089f3cb55cp-754, 0.0,
     0x1.bbc665c726de3p-880, 0x1.af6f9ef97b2d9p-890, 0x1.393ba8a252d5dp-273,
     0x1.d5a190a11d6bap-978, 0x1.15e4ac9a9b7f6p-370, 0x1.75e629011f75cp-366,
     0x1.1d7f6c6100da7p-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf67ae041494dp-365,
     0x1.0ea5651e2036cp-317, 0.0, 0x1.abcf11fcf522cp-812, 0x1.e63a63a9fba52p-986,
     0x1.298538ef4d3b3p-430, 0.0, 0x1.155f7bf54a877p-20, 0.0, 0.0, 0.0,
     0x1.258df8e8557p-3, 0.0, 0.0, 0x1.2cef8149f6745p-930, 0.0, 0x1.4e76609cdea3p-757,
     0.0, 0x1.f33f73d860c0ep-134, 0x1.f94e1e7652356p-838, 0x1.6cfaf5a491504p-108,
     0x1.d98f2b733e3d2p-649, 0.0, 0x1.fdc24b2034f01p-362, 0x1.78d9f7086c05fp-32, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b2c537c961ad5p-996, 0x1.3f0a32108acedp-250, 0.0, 0.0,
     0.0, 0x1.0b6a53116d3e7p-794, 0x1.1aee4d9c3dcabp-185, 0.0, 0x1.fc2ec0f2e3a71p-563,
     0.0, 0.0, 0x1.bee216619ef78p-393, 0.0, 0x1.f2f7ec741d772p-523,
     0x1.7daa220892596p-615, 0x1.d77f48d1900d7p-585, 0x1.e494f250da189p-54,
     0x1.c1dc4722c22f1p-700, 0x1.6d93df1fbb0d4p-663, 0x1.11b5c9639df91p-426,
     0x1.1c4bec0894426p-393, 0.0, 0.0, 0x1.12f4a10e7a9dep-749, 0x1.2375ec7c3609dp-418,
     0.0, 0x1.f5a26bbd0e986p-124, 0.0, 0x1.3ac72b97d175ap-982, 0.0,
     0x1.a8e3218ab4d15p-154, 0.0, 0.0, 0.0, 0x1.dc90d89c668f2p-813, 0.0, 0.0,
     0x1.6db69069fca34p-854, 0x1.d609334759302p-519, 0.0, 0x1.ddbfb37058f98p-464,
     0x1.d52a27a870e9fp-1006, 0x1.2a32f9eadbf82p-118, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58d6840d8cb3bp-728, 0x1.32da8495ff38cp-748, 0.0, 0x1.1f2fddb522ca6p-472, 0.0,
     0x1.3497fe01610f3p-232, 0x1.49357404343ccp-240, 0x1.671a0c1cb7555p-10, 0.0, 0.0,
     0.0, 0x1.2e5fbe72e36e2p-194, 0x1.7875b55535557p-901, 0.0, 0x1.bafc8577cae29p-464,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f74b87dba416p-270, 0x1.5ca0a53355dfp-530,
     0x1.a4351d9bb7a4ep-567, 0x1.114ed74945f26p-119, 0x1.ef3c84c47e24bp-995,
     0x1.f9a85d3106646p-817, 0x1.edb48d4aeb76ep-696, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caf9c98b9d58bp-508, 0x1.7c241ed64b495p-549, 0.0, 0x1.5977004cb418cp-816,
     0x1.de42322963d7cp-349, 0x1.17d70730619e1p-343, 0.0, 0.0, 0.0,
     0x1.1491a26316fe1p-813, 0x1.eb7411f0ec7c7p-563, 0x1.31b156bc42bbbp-563, 0.0,
     0x1.957c16645c8f1p-875, 0x1.ffd1333e9692fp-839, 0x1.e5d9560525ff4p-345, 0.0, 0.0,
     0x1.237e0f3ec4497p-789, 0x1.77703b51b2606p-261, 0x1.dd1edbef03826p-77, 0.0,
     0x1.422736c73b9ddp-415, 0x1.410916b12ec8ep-607, 0x1.4d8f016b2a9abp-260,
     0x1.e25310b7b085fp-107, 0.0, 0x1.641441ff2852p-982, 0x1.7c2784f440e5dp-1001,
     0x1.7c7edffd9058ep-671, 0x1.373ca0c1bb5ddp-935, 0x1.5aa2d572dfbf3p-706, 0.0, 0.0,
     0x1.a3e559c1b5bfep-534, 0x1.dcbb0dad95f2dp-607, 0x1.8effadbfffe7p-473,
     0x1.bb38e03902e66p-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd0f567bfcbc4p-416,
     0x1.ed86244c07be9p-924, 0.0, 0x1.2c1a79575fb41p-18, 0x1.481979723fef8p-677,
     0x1.193bc55f87325p-674, 0.0, 0x1.1bd3b74cc04eep-100, 0.0, 0x1.de823a84476bfp-371,
     0x1.dc7aafde61ae5p-753, 0x1.ce5fc63391c78p-898, 0.0, 0x1.7a8264f452104p-906, 0.0,
     0x1.b9bc9aa89320dp-487, 0.0, 0x1.8310a14bc3132p-843, 0.0, 0.0, 0.0, 0.0,
     0x1.a16537fa6f107p-900, 0x1.841ae25fda5cap-685, 0x1.b0f6d26a4bad5p-384,
     0x1.59447d81f8321p-1004, 0x1.9f7ddde65f117p-807, 0x1.2cd8c08fa9a72p-180,
     0x1.a4b4f179d188cp-941, 0x1.dbab943fb858cp-533, 0x1.b74498a170b0ep-790, 0.0, 0.0,
     0x1.32084ca4f268dp-598, 0.0, 0x1.2177029e1175dp-671, 0.0, 0.0,
     0x1.09969628a64a7p-725, 0.0, 0x1.96e262010edf4p-441, 0x1.bab9cabf402b6p-250,
     0x1.881b76562086dp-339, 0x1.e132d86b866b5p-570, 0x1.ed87b6e5aa4c3p-781,
     0x1.f11ca1330497dp-942, 0.0, 0.0, 0x1.6cb683c09829dp-501, 0x1.9650f7d145963p-41,
     0x1.32dc4bdf45f9cp-347, 0x1.d950a74a38fadp-749, 0.0, 0.0, 0x1.329b015a5d945p-3,
     0x1.af8153592c044p-304, 0x1.2f8ea6d71b181p-154, 0.0, 0x1.8c85e795f881ap-989,
     0x1.d7196c7489918p-331, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_erfcd4_u15kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_erfcd4_u15kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_erfcd4_u15kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
