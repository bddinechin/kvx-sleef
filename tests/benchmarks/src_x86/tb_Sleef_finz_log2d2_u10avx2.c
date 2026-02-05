/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d2_u10avx2128.c --function \
 *     Sleef_finz_log2d2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.a07f6b51e37bp-517, 0x1.24f7970bc3e6bp-88, 0.0, 0.0, 0x1.b7213f172edbfp-1009,
     0.0, 0x1.7704d41ca4dc3p-346, 0x1.bfcf7ca3c619ap-694, 0x1.42dc92e599727p-593, 0.0,
     0.0, 0.0, 0x1.93ea0f30ffb5cp-222, 0.0, 0.0, 0.0, 0x1.41b27d9e0551p-919,
     0x1.1d39f1971bf4dp-642, 0x1.6ea5c631ab5fdp-242, 0x1.71f3437c44e8dp-529,
     0x1.d2ebc289ec2bcp-910, 0.0, 0.0, 0x1.882fb0cbaccfdp-688, 0x1.7e57d54dd103cp-708,
     0.0, 0x1.40d8e8fd3c3eap-258, 0.0, 0.0, 0x1.1afc139c9257ap-715,
     0x1.d57aa53307e14p-1002, 0x1.cec2fd132cc21p-639, 0.0, 0x1.faf43280594c3p-917,
     0x1.c51b82d113842p-18, 0x1.50c2a16ac7d57p-393, 0x1.bf242c98f2f71p-985,
     0x1.a9fe0f9227d6fp-193, 0x1.12a334d8b3aap-937, 0.0, 0.0, 0x1.ab84844cc30b5p-176,
     0x1.b0d63e1674c86p-192, 0.0, 0x1.6e07d6359c149p-406, 0.0, 0x1.a1b469a5ea18dp-67,
     0x1.b1d5dc8e6549dp-337, 0x1.9b89ebce4f9bfp-553, 0.0, 0x1.0a6d4c2640f94p-232,
     0x1.a43157ff6677fp-506, 0x1.5d39f19f4c5efp-861, 0x1.c51eb7791c6bcp-377, 0.0, 0.0,
     0.0, 0x1.59c65ab1d5cfbp-302, 0.0, 0.0, 0.0, 0x1.32f0547109885p-542, 0.0, 0.0,
     0.0, 0.0, 0x1.54bb69e463108p-811, 0.0, 0.0, 0.0, 0x1.b695a7ff71296p-834,
     0x1.eeb8250cd4985p-911, 0x1.588910daa0153p-772, 0x1.d24098c37f41dp-235, 0.0, 0.0,
     0.0, 0.0, 0x1.f8ee268768921p-967, 0x1.6f497d31bc72dp-98, 0x1.4852af548afcdp-515,
     0.0, 0x1.44fb2dcb8cef9p-734, 0.0, 0.0, 0.0, 0.0, 0x1.371209a6f8ff3p-92, 0.0,
     0x1.3aaa67644f9eep-470, 0.0, 0x1.f2c5a7dd051cap-365, 0x1.d441df092e919p-22,
     0x1.eb3610d792193p-860, 0.0, 0x1.ae02dbd05c6a1p-898, 0x1.2fd395264d683p-815,
     0x1.20d9134ea8da6p-725, 0x1.0f674809e4736p-670, 0x1.5710353e7d05bp-838, 0.0,
     0x1.af3e0cf584469p-431, 0x1.46d564ba57567p-259, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0a90fd168f10ep-37, 0x1.5af9103ad51d5p-116, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79f22b21b8485p-42, 0.0, 0x1.3358d06a581fcp-1000, 0x1.8843f2f62f58dp-991,
     0x1.593720afe276ep-739, 0x1.f13869efbe32p-856, 0x1.22be9a1ff4f3dp-920,
     0x1.3f41b77a30a69p-549, 0.0, 0.0, 0x1.9e9bf9c731e0ap-901, 0.0,
     0x1.9bc1f8ecd5098p-429, 0x1.7d406951af955p-838, 0.0, 0.0, 0.0,
     0x1.d7ee29c25db2fp-868, 0x1.56222e43be3bep-245, 0x1.87e00c130366bp-216,
     0x1.039c6a693c502p-443, 0x1.17b8119f11cdp-355, 0x1.ef5fe658b2f1fp-354, 0.0,
     0x1.fe501416c0112p-646, 0x1.7bacfbd30e7dcp-680, 0.0, 0.0, 0.0,
     0x1.982f8f0b84c69p-594, 0x1.0b8242a093094p-541, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71f7ac20e6674p-244, 0.0, 0.0, 0x1.6bd39e810ae05p-122, 0x1.0b8c1fda3629p-207,
     0x1.b6c6a9d250a0fp-878, 0.0, 0x1.c11a7b335a366p-183, 0.0, 0x1.697af16c0cceep-176,
     0x1.4728d80f9c2e4p-213, 0.0, 0x1.913bd9f3bed8fp-263, 0.0, 0x1.52987e6e64a6fp-199,
     0x1.9f4fe5d269b53p-655, 0x1.7c6e5fcf5bd25p-474, 0.0, 0x1.fe186051f1ebcp-208,
     0x1.40d7a39069c33p-748, 0.0, 0x1.699e41679f002p-746, 0.0, 0x1.18437e674a658p-518,
     0.0, 0x1.064a4a376c3c9p-463, 0.0, 0x1.20c52418a4be3p-520, 0.0,
     0x1.5dc00d953ea4bp-180, 0x1.3913218ef842p-389, 0.0, 0.0, 0.0,
     0x1.dcd8b25da44bfp-916, 0x1.71ef109f01074p-523, 0.0, 0x1.e1dbe1dfa811cp-295,
     0x1.759406add1643p-669, 0x1.3b22bc03cb4c2p-370, 0x1.46cb5c9f6524dp-12, 0.0,
     0x1.c1db9289910e9p-669, 0.0, 0.0, 0x1.912bc4b1bf00ep-222, 0x1.3cffdd6ddff49p-236,
     0.0, 0.0, 0.0, 0.0, 0x1.dffd8f9f1ed9fp-844, 0.0, 0x1.8d9769c3c9c3fp-452,
     0x1.4380015600a5cp-982, 0x1.eb3f9a50a1bf3p-394, 0.0, 0x1.ea99884391ba7p-12, 0.0,
     0x1.a17e4a81d795fp-948, 0.0, 0.0, 0.0, 0x1.54a3ecc911208p-12, 0.0,
     0x1.dde80bed64bdp-172, 0.0, 0x1.574023e34daa1p-490, 0x1.9aebeb029e51dp-37, 0.0,
     0.0, 0x1.422a5c6f48b34p-686, 0x1.28029fde9b643p-95, 0x1.c12e0f4ff3477p-156, 0.0,
     0x1.f09fef6a4976p-1021, 0x1.598f3e74fd7ddp-249, 0x1.22397bc3e46f1p-752,
     0x1.c261472612214p-815, 0x1.0f0345d739b6fp-279, 0.0, 0x1.f39b5a8eb89fp-694, 0.0,
     0x1.b06f2f0744746p-192, 0.0, 0.0, 0x1.a489c8f4243dap-807, 0x1.8ec5ff60a2a4ap-203,
     0.0, 0x1.275990f2bede7p-915, 0x1.74d60250a0d02p-24, 0.0, 0.0,
     0x1.e1819d1a79323p-183, 0.0, 0x1.301ce6dbd8a08p-219, 0.0, 0.0, 0.0, 0.0,
     0x1.0599d0725fb95p-986, 0x1.0e9732b9e5058p-187, 0.0, 0x1.76dd6d79964c7p-485, 0.0,
     0x1.48ca0bdd5c6bfp-524, 0x1.48ed39c9203d6p-498, 0x1.77a529c6c5bcfp-813,
     0x1.d86ee48517d45p-928, 0.0, 0.0, 0x1.d8dc0414182dp-706, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d544c0aa4b493p-149, 0x1.38cc1bc87333p-483,
     0x1.8d4e9289bd829p-491, 0.0, 0x1.111b7da3f5762p-301, 0x1.d9746f6ced6c9p-131,
     0x1.242ae733d9825p-230, 0x1.4e5f53b172324p-406, 0x1.0491176a2c894p-745,
     0x1.ebdeca38e78fap-235, 0.0, 0.0, 0x1.f9aa7fc4be99bp-804, 0x1.6c3040bfff041p-501,
     0.0, 0.0, 0.0, 0x1.2b97a5fed6afep-985, 0x1.d0cf117ad43dp-193, 0.0, 0.0, 0.0,
     0x1.15596a8a87d54p-321, 0.0, 0x1.110fd61fb6e67p-939, 0x1.62326ba453dccp-332, 0.0,
     0x1.2fc0e1a565799p-133, 0x1.a9aad5e369f74p-830, 0x1.da6829c9a4ca7p-527, 0.0, 0.0,
     0x1.95b5329723e47p-602, 0x1.3a8c1fd0e20b4p-456, 0x1.b4f52230d3c5ep-938,
     0x1.bb50d0f1d3d91p-282, 0.0, 0x1.99f77fcf2503ap-56, 0.0, 0x1.4561506868cb9p-176,
     0.0, 0.0, 0x1.1da235bb3980dp-417, 0x1.4680716f02887p-637, 0.0, 0.0,
     0x1.d6e047be71425p-913, 0x1.815367cf53b41p-921, 0.0, 0x1.ba601c5d1c03p-922, 0.0,
     0.0, 0x1.17df8807c4fffp-464, 0x1.b50693c956c71p-319, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a694827761708p-245, 0x1.cb5e8dd580e3bp-386, 0x1.52c519a6de809p-666, 0.0,
     0.0, 0x1.249ecf09dd886p-293, 0x1.c28b5f0d99b43p-341, 0x1.3a8aa22f6ef08p-429, 0.0,
     0x1.3c0a36fa8a3bfp-172, 0x1.9fc5c34766ab2p-812, 0x1.620b07cfb8bacp-23, 0.0, 0.0,
     0.0, 0.0, 0x1.fae965c160988p-210, 0x1.d04cd009a98dep-932, 0x1.29b221b8aa607p-126,
     0x1.ab5fea4b994c2p-194, 0x1.711a845f4c787p-347, 0x1.694f2806122a7p-239,
     0x1.38e104e484902p-799, 0.0, 0x1.2ea3a98136dep-326, 0x1.da996d2c08d51p-81,
     0x1.02486738ab484p-163, 0.0, 0.0, 0x1.b7e737c7232d5p-162, 0.0,
     0x1.820a050f2a7b3p-613, 0.0, 0.0, 0x1.1d13b8cfaaa0bp-405, 0x1.16bf2251b0e18p-313,
     0x1.6de63e5cfc48dp-549, 0.0, 0.0, 0x1.f47c4343c15c7p-200, 0x1.d38d1d698c37dp-382,
     0.0, 0.0, 0x1.5f80cf4ffa314p-345, 0x1.b40480f84b78bp-253, 0.0,
     0x1.bfedb7bf4f915p-963, 0x1.65973b7fac675p-595, 0.0, 0.0, 0.0,
     0x1.e1b72e597993dp-96, 0.0, 0x1.1cd814411dbfdp-682, 0x1.1633c80752a7p-158, 0.0,
     0.0, 0x1.2b722c82562ddp-229, 0x1.9e19d48a4e5ffp-972, 0x1.e35665187dbfp-283, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99812869515f6p-44, 0x1.01a87eeb18df8p-722, 0.0,
     0.0, 0x1.0db2ac7e8fb68p-953, 0x1.1ba2b4d502676p-251, 0x1.f08cf16bf759dp-105, 0.0,
     0x1.923162c8143e1p-583, 0x1.c5161ca36340bp-1013, 0x1.bcf45ccef140ep-968,
     0x1.8bf58c8d618a6p-13, 0x1.6bdd16e45ef66p-316, 0.0, 0.0, 0x1.a3e3bf46dd8cap-37,
     0.0, 0x1.a436088c05daep-289, 0.0, 0.0, 0.0, 0x1.b25abd719371cp-123,
     0x1.8ca4756429b5ep-125, 0.0, 0.0, 0.0, 0.0, 0x1.b5b7c1f776ecap-537, 0.0,
     0x1.88143bb863339p-869, 0x1.46a5fbad192f8p-717, 0x1.1f31ab03a9734p-591, 0.0, 0.0,
     0x1.42eb07c0c0a8p-188, 0.0, 0x1.5e9f38ac1a2ddp-866, 0x1.741c9608a07fdp-811,
     0x1.38cb475be2eb6p-299, 0.0, 0.0, 0x1.9b0dbacdf036ap-659, 0x1.39ce2aed44668p-3,
     0.0, 0.0, 0x1.220cf9d217485p-320, 0.0, 0x1.4476db229df04p-400, 0.0, 0.0, 0.0,
     0.0, 0x1.3b8b50db64c21p-541, 0.0, 0x1.732614abba0fdp-205, 0.0, 0.0,
     0x1.f77e707acf2f2p-688, 0x1.ff0b4005aeb6fp-770, 0x1.79795461f642ap-447, 0.0,
     0x1.8eb05bb0a02a8p-960, 0.0, 0.0, 0.0, 0.0, 0x1.612c303cbbe5cp-761,
     0x1.c28bb6fa6e63ap-459, 0.0, 0x1.0060cf7351fd3p-156, 0x1.6cb170b6fdf26p-934,
     0x1.0c101e82f47bap-436, 0.0, 0x1.1a6b2e253873dp-203, 0.0, 0.0, 0.0,
     0x1.a6372326cae02p-922, 0x1.1619377be5c0bp-524, 0x1.f33cbc841e18cp-927,
     0x1.6d8a78f9633fp-668, 0.0, 0x1.5416366d5e40cp-610, 0.0, 0x1.13bfe719393b9p-345,
     0x1.87393d019d3e9p-173, 0x1.a121979ef24c2p-26, 0.0, 0.0, 0x1.a9feb87891fb7p-450,
     0.0, 0.0, 0.0, 0x1.1ffa1e91de86ep-451, 0x1.11d1f9127e133p-294,
     0x1.70f900fffe20cp-113, 0.0, 0.0, 0x1.c40e7a3711f33p-779, 0.0, 0.0, 0.0,
     0x1.ce47e24b5e30ap-846, 0x1.6ae427678b181p-779, 0.0, 0x1.8139a1193dae9p-460,
     0x1.f9a82ccb81ca6p-909, 0.0, 0.0, 0x1.9e9dbb0faae36p-581, 0x1.b9bb543042537p-898,
     0x1.7e8f59a66f304p-582, 0.0, 0x1.e7d416cd0ab0ap-150, 0x1.7df26ed78f46cp-283, 0.0,
     0.0, 0x1.bd30425548776p-81, 0.0, 0x1.b789996aa9c16p-501, 0.0,
     0x1.779be9e133989p-359, 0.0, 0x1.6838fe083cc0ep-7, 0.0, 0x1.91a903dc4ae4fp-999,
     0x1.b5c1f558990fcp-1020, 0x1.9a7058c88eae6p-560, 0x1.de915ff34a599p-265, 0.0,
     0x1.82ad3bc2e0d4bp-725, 0.0, 0.0, 0x1.f1530f53ccbdcp-64, 0x1.50a9f985e7d2dp-777,
     0.0, 0.0, 0.0, 0x1.d1aa352b6b20bp-318, 0x1.847b273cb7b87p-576,
     0x1.fee24d04fb93fp-856, 0x1.a81a688d057a4p-630, 0.0, 0x1.f499a474d088fp-547, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf98a13af9b74p-105, 0x1.6d049a028f122p-582, 0.0,
     0.0, 0.0, 0x1.95259f7f58009p-704, 0x1.b6a3f0c3cb689p-180, 0x1.4db6529fa64ccp-910,
     0.0, 0x1.c78904c0e3e07p-122, 0.0, 0x1.8286e519445cap-590,
     0x1.4566ce0796c5dp-1020, 0.0, 0.0, 0x1.f1866e8f7c3c4p-659,
     0x1.8ca19f7481352p-698, 0x1.2708d8dec65bdp-601, 0x1.477b8bb9379dbp-531,
     0x1.1b60996333149p-471, 0x1.b6ed8bed30e2ap-118, 0.0, 0.0, 0x1.7f35fa1e451d9p-28,
     0x1.f2319d76f978bp-143, 0.0, 0x1.ca8cfbaa00ef3p-395, 0x1.1cdc151f21c8fp-949, 0.0,
     0.0, 0x1.82e7ec849e81ap-636, 0.0, 0x1.6daa880866de5p-768, 0.0,
     0x1.7d12af58e41e1p-847, 0.0, 0.0, 0x1.7090e378fc60ep-787, 0.0,
     0x1.9a191bd208417p-575, 0x1.94e7054f12d1dp-1019, 0.0, 0x1.717066217ec0dp-1003,
     0.0, 0.0, 0.0, 0x1.e2b4e88f0425ep-718, 0.0, 0.0, 0.0, 0x1.b2f2ae68f2fd9p-97,
     0x1.f5d447115191bp-110, 0.0, 0x1.a69340f0c6675p-347, 0x1.b3ff0b838ac28p-412,
     0x1.d2593f7ce842dp-298, 0.0, 0.0, 0.0, 0.0, 0x1.2bc2bcc0e899ap-642,
     0x1.f22ba4e6b79a7p-321, 0.0, 0x1.21111fd681e4ap-256, 0x1.0a3a20512c0ffp-504,
     0x1.bf09637124e53p-679, 0.0, 0.0, 0x1.048049cf371b9p-499, 0.0, 0.0,
     0x1.68302ed627a71p-150, 0x1.12e7b88e1717p-595, 0.0, 0.0, 0x1.4b953c72d4e8p-206,
     0x1.3b82ea481592cp-67, 0x1.c26a0c740f421p-582, 0.0, 0.0, 0.0, 0.0,
     0x1.7ee889cd9e6bp-688, 0.0, 0.0, 0x1.e7866a124682dp-284, 0.0, 0.0,
     0x1.3e3ad46c94261p-946, 0x1.e4370ee87621ap-594, 0x1.ffa4897ee8b59p-81,
     0x1.cd213ae1771f5p-804, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7119ec1760bbfp-21, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.209d6afd9c32cp-242, 0.0, 0x1.91197ee5e08dfp-506,
     0x1.aedd2ff231ef7p-968, 0.0, 0.0, 0x1.f760dd1800b94p-337, 0x1.bac77563e1377p-884,
     0.0, 0.0, 0.0, 0.0, 0x1.44ed7280304aep-747, 0x1.36cb7d4aeee09p-280,
     0x1.4a40a0cf0f29bp-749, 0.0, 0.0, 0x1.203e79fd26eaep-374, 0.0,
     0x1.0df0b7af6b913p-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ce9ec03babc7p-810, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80df1c9308a4p-68, 0x1.4997ee503644cp-330, 0.0,
     0x1.89bbc7366ac66p-512, 0x1.e160732298cc3p-83, 0.0, 0.0, 0x1.67a9ab79041e4p-407,
     0x1.ec6977212ae2fp-825, 0.0, 0x1.8f7708936adc8p-863, 0x1.4d8280dc488bfp-207, 0.0,
     0.0, 0.0, 0.0, 0x1.8027b08ad5511p-992, 0.0, 0x1.5cc160bc2a1dbp-485, 0.0, 0.0,
     0.0, 0.0, 0x1.a8f9ecd1c955p-727, 0x1.8f2f0c2a9c00cp-938, 0x1.761ae9a0908eap-165,
     0.0, 0.0, 0.0, 0x1.c2713dcea13d8p-784, 0.0, 0x1.7a624e71fe8c7p-354, 0.0, 0.0,
     0.0, 0x1.aa67902429be6p-849, 0x1.1d9f44e8741fap-536, 0.0, 0x1.71ba409b994b2p-145,
     0.0, 0x1.38ce672c90466p-989, 0x1.6b5c2a732c39dp-768, 0.0, 0.0,
     0x1.1c6e1aa9123ddp-547, 0x1.329769e94fccfp-122, 0x1.1ae67673dcdp-408,
     0x1.9df9829fe7e41p-318, 0x1.a1a1c0ee4bc0dp-750, 0.0, 0.0, 0.0,
     0x1.2bac8e2be02f4p-883, 0x1.a7a02386b3abbp-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.918c07bda3cffp-242, 0.0, 0x1.5324cd2bf2056p-435, 0.0, 0x1.fa23c312ea3cp-647,
     0x1.558ce4fbfa457p-496, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f947c387910ep-791,
     0x1.cbc0c8c30511bp-237, 0.0, 0.0, 0x1.e83e0576f1bc7p-512, 0x1.0ea05fa872e24p-434,
     0x1.86a23085416c1p-831, 0x1.2dc21f93dcf34p-62, 0.0, 0x1.b3f085ae819d6p-546,
     0x1.7f2334b0f0986p-357, 0x1.97b96e2194b53p-417, 0.0, 0x1.9551dc0109ab1p-1007,
     0x1.760e40c376ff3p-548, 0.0, 0x1.0c41398c45911p-46, 0x1.652a38eddb79ap-564,
     0x1.be2708830843cp-861, 0.0, 0.0, 0.0, 0.0, 0x1.cb563d51fd10bp-572, 0.0,
     0x1.05eea22757c85p-220, 0x1.8263712daca47p-170, 0.0, 0x1.d55dfe1c84622p-934,
     0x1.373f1de83e7eap-710, 0.0, 0x1.059cbf68b7bf6p-547, 0x1.845e34e298333p-931, 0.0,
     0.0, 0.0, 0.0, 0x1.653796b6c4849p-660, 0.0, 0.0, 0x1.fa548950e100bp-696,
     0x1.bc86676837a1ep-948, 0.0, 0x1.54ab4cfa2a897p-905, 0x1.58506cdd2e40ep-254,
     0x1.bd2081ed2ba9ep-762, 0x1.0105bef9bcd29p-774, 0x1.047b7e19e1d93p-276,
     0x1.84b4eb20a9f9ap-947, 0.0, 0x1.9fe99d348cff3p-957, 0x1.b48b062a8c86dp-708, 0.0,
     0.0, 0x1.0db3f428cf72bp-386, 0x1.393058a567c4cp-797, 0x1.83eeb06112409p-907,
     0x1.6bf039a194b4dp-103, 0.0, 0.0, 0x1.ebb00cf278c68p-864, 0.0,
     0x1.803d7a46338ap-127, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6e74d48fe535p-687, 0.0,
     0x1.27dd2c9c0bd9dp-676, 0x1.e96dae60c41d4p-903, 0x1.409ba73bfd13dp-85,
     0x1.a6256ca99affbp-901, 0.0, 0.0, 0x1.c4bc9d9fb489cp-558, 0.0, 0.0,
     0x1.4c42891cb564bp-947, 0.0, 0.0, 0.0, 0.0, 0x1.bde80a170374ep-417,
     0x1.7067e45f6706bp-816, 0x1.a390afd8a19fdp-61, 0x1.a9dcd01439dd2p-683,
     0x1.62de1ec1560a7p-57, 0x1.1fd0c433dfbe9p-232, 0.0, 0.0, 0.0,
     0x1.d4a07f0b6b27bp-905, 0x1.126faade06485p-1020, 0x1.388ae0a6bb171p-714,
     0x1.b8356e0c2e662p-747, 0.0, 0x1.137901e546ce7p-924, 0.0, 0.0,
     0x1.ae2f8437dfac3p-80, 0x1.0112b6bf3a21bp-707, 0x1.3ed9793db6d54p-835,
     0x1.a02c9daebf9bcp-535, 0.0, 0x1.f2c3d937c400dp-51, 0.0, 0x1.d6c8a3375530cp-18,
     0.0, 0x1.29a9c76e88373p-804, 0x1.c48b99f88628fp-947, 0x1.705e4893089cbp-503,
     0x1.cdc7fdaa831c5p-794, 0x1.c74bd1b06a00cp-326, 0x1.e7619aece35f8p-945,
     0x1.30d90671ee7bdp-420, 0x1.a9a47b01b0fe2p-866, 0x1.91af5b9d96dabp-812, 0.0, 0.0,
     0.0, 0.0, 0x1.e7f8347d38d34p-297, 0.0, 0.0, 0x1.3de0e30fd2dbfp-7,
     0x1.c8a20b6d35112p-179, 0.0, 0x1.d4e316520fc13p-835, 0.0, 0x1.050f7eec3cc7p-319,
     0.0, 0x1.0c50aaf334b5ep-311, 0x1.2c900830ba55ep-38, 0x1.c3ecdd6eb6866p-717, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7cc53581a992cp-831, 0.0, 0.0, 0x1.bb59c98a4c627p-81, 0.0,
     0x1.642f83f7314bep-353, 0.0, 0x1.0561663099aa4p-855, 0.0, 0x1.20a71090a7d46p-331,
     0.0, 0.0, 0.0, 0x1.8951a0c6d481ep-272, 0x1.881d5581b6e08p-65,
     0x1.a423dc9b7a4f3p-558, 0x1.3f0e9b8b903acp-503, 0.0, 0.0, 0x1.24a8c432e6836p-683,
     0x1.3f90756540a0fp-87, 0x1.9f1aaca458946p-460, 0.0, 0x1p0, 0x1.05d47d83af88p-110,
     0.0, 0x1.dba7d9d92b351p-994, 0.0, 0x1.3347f0af28391p-559, 0x1.556f5ee0de522p-958,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b910bb49e0eep-603, 0.0,
     0x1.da6e6c1097c82p-459, 0x1.a6a19433fc892p-355, 0.0, 0.0, 0x1.8d0a3e71f69c6p-198,
     0.0, 0x1.e1a9af2caf606p-3, 0.0, 0x1.428c7f17e85b3p-42, 0x1.7b0416e498e34p-370,
     0.0, 0x1.5ab3a03185684p-563, 0.0, 0.0, 0.0, 0.0, 0x1.d5312e5b6923ap-373, 0.0,
     0x1.0610c2f202e61p-666, 0x1.41baaafdcb56fp-88, 0x1.3337e2ee77b7cp-793, 0.0,
     0x1.d9e77b0818599p-838, 0x1.4bf6ece55b415p-665, 0.0, 0x1.f1baf47e6ab1fp-313,
     0x1.073fd5c8056f3p-518, 0.0, 0.0, 0.0, 0x1.4f5600d8f9bd9p-874, 0.0, 0.0,
     0x1.4fbc83569bafap-142, 0x1.40e84930f385bp-531, 0x1.b9e3e69c74b18p-137, 0.0,
     0x1.9030629201742p-733, 0x1.6b5093a06da6dp-149, 0.0, 0x1.a360503f13c6p-142, 0.0,
     0x1.2e49b3fbc743bp-884, 0.0, 0.0, 0x1.35bdab269221dp-857, 0.0,
     0x1.98b7ed2989fdep-847, 0.0, 0.0, 0.0, 0x1.86940bf37d97ap-298,
     0x1.c8aa12e38d45ap-467, 0x1.866b0f9ee3a17p-945, 0.0, 0x1.fdd3baaed03d5p-814, 0.0,
     0x1.e39673c83ebcap-983, 0.0, 0x1.4fb4777d92c45p-964, 0x1.21cf5ada8dbaep-421, 0.0,
     0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_log2d2_u10avx2128(tmp0);
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
    printf("Sleef_finz_log2d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log2d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
