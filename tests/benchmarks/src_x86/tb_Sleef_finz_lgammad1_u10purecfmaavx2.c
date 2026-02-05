/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_lgammad1_u10purecfma.c --function \
 *     Sleef_finz_lgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.89dcb6299b6ecp-291, 0x1.9579dec5148fep-154, 0.0, 0.0, 0.0,
     0x1.e2cdbb8b809eep-334, 0.0, 0.0, 0x1.40670da802a76p-78, 0x1.83d8fdf70799cp-442,
     0x1.ac9ffa235686dp-117, 0x1.1a8f3e0b1658ep-747, 0.0, 0.0, 0x1.fc6a1814a8eb3p-719,
     0x1.290691c4bc838p-152, 0.0, 0.0, 0x1.b2966ec14413ap-87, 0.0,
     0x1.80b19c4285bbbp-902, 0x1.afcd1542bc50cp-29, 0x1.59069351f1706p-856,
     0x1.e8d9be69b242ap-485, 0x1.3a15c0d7ab98bp-320, 0.0, 0.0, 0x1.b727ad189c7e9p-384,
     0x1.fe868b041516cp-607, 0x1.3e2f4ec5cfcdbp-837, 0x1.b36cd50922b66p-486, 0.0, 0.0,
     0x1.b933346074868p-924, 0x1.8c9bb309cab4cp-29, 0.0, 0.0, 0x1.a52675fd12925p-459,
     0x1.5f2ef6eb3a569p-489, 0.0, 0x1.e9a6f51777c3fp-5, 0x1.378767db41461p-508, 0.0,
     0.0, 0x1.700434239578cp-322, 0x1.0d19792e8b32fp-426, 0.0, 0x1.eb3c9de37ac77p-875,
     0.0, 0x1.ed161dfdfe89dp-775, 0.0, 0.0, 0.0, 0.0, 0x1.a7b54ff3bccep-362,
     0x1.ee5bfb608e47cp-969, 0.0, 0x1.3684eb107223cp-187, 0x1.5e3c98ca931ccp-844,
     0x1.8ac3e578336b9p-856, 0.0, 0x1.689a34bba872ap-292, 0x1.c2a55cf3e0376p-382, 0.0,
     0.0, 0.0, 0x1.91beb0b79cc3cp-596, 0.0, 0x1.7ae7e163d4598p-142, 0.0,
     0x1.338ab7bd1ff61p-539, 0x1.df5d08588bdddp-998, 0x1.b1d93a8231aabp-617,
     0x1.48b484aa7b843p-527, 0x1.a39324513c951p-621, 0.0, 0x1.285b2767739e9p-480,
     0x1.47f9b3cded2c7p-253, 0x1.2206631287e71p-7, 0x1.2513d47a894bbp-491,
     0x1.ae7b2e677c56dp-304, 0.0, 0x1.3a6ac032c590fp-594, 0.0, 0x1.6b65b2e32eee1p-226,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e233aef6554fp-941, 0x1.a654338301ad7p-153,
     0x1.0ebef071f0dd7p-746, 0.0, 0x1.0eb07684d7d1bp-839, 0x1.14e064b2b2561p-858, 0.0,
     0x1.1ec5b219a810ep-853, 0x1.2fe20bf5ed405p-852, 0x1.804d6101425f6p-287,
     0x1.09d3668fa528ep-947, 0x1.3364852ff05fep-663, 0x1.d5139cfd41ceap-207,
     0x1.068bef03d06cbp-807, 0.0, 0x1.2221e6c924ffdp-550, 0x1.3d7c88723f7a5p-526, 0.0,
     0.0, 0.0, 0x1.65e8c9b778d01p-654, 0x1.ffdf5520fef76p-977, 0.0,
     0x1.03ee379dab0a4p-488, 0x1.6614aa3d0f32ap-824, 0.0, 0.0, 0.0,
     0x1.c4c740df20273p-488, 0x1.62aaa128290c7p-609, 0x1.19cb7a78d5c9ep-587, 0.0,
     0x1.45163f43690bcp-365, 0x1.357a14a3b2642p-597, 0.0, 0.0, 0.0,
     0x1.8e84e5cae7e48p-873, 0x1.381e9f99671f9p-522, 0.0, 0x1.456a450c97429p-553,
     0x1.a7f0abcc49705p-482, 0.0, 0.0, 0x1.5c8ac4b5dd4d7p-116, 0.0,
     0x1.135d942e97166p-697, 0x1.bfa980dba3594p-445, 0.0, 0x1.e61183a75dc8ap-712, 0.0,
     0.0, 0x1.a591d3ec374p-634, 0x1.a594c8ea9da7bp-940, 0.0, 0.0, 0.0, 0.0,
     0x1.8c620b6efd6bcp-775, 0x1.ab42e624e21fap-855, 0.0, 0.0, 0x1.38b9ca8f50f6dp-753,
     0x1.04dc8f2080c9p-394, 0x1.3b520afd3c57dp-1002, 0x1.76b04fee3a50cp-752,
     0x1.a74fc6dc37c7p-549, 0.0, 0.0, 0x1.a8126cf5fd0b7p-146, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.62198432c81e3p-495, 0.0, 0x1.96e3d9dba1f5cp-141, 0x1.865e60dd12f9bp-737, 0.0,
     0x1.2323a66253801p-25, 0.0, 0x1.54695c0b18993p-136, 0.0, 0.0,
     0x1.05243aa35cc47p-341, 0.0, 0x1.796fccb7b7d71p-591, 0.0, 0.0, 0.0,
     0x1.fc7147a505a01p-1, 0x1.12a0df29dde78p-876, 0.0, 0x1.8cd01e725b4e1p-244,
     0x1.8090f5924a464p-812, 0x1.e756ad1532397p-707, 0x1.ab77ae29d1e1bp-731, 0.0, 0.0,
     0.0, 0x1.62c05ffbfb3bdp-946, 0.0, 0.0, 0x1.7c2c511a858eap-215,
     0x1.6628a325a5287p-841, 0.0, 0.0, 0.0, 0.0, 0x1.dc239bfda4cb3p-691,
     0x1.ba29f4f6295e5p-50, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f145bfbde98f3p-136, 0.0,
     0x1.7718c3df193a2p-127, 0x1.20d589781b1e9p-1020, 0.0, 0.0,
     0x1.b56735abce426p-215, 0.0, 0.0, 0x1.fa31778f7b586p-687, 0.0,
     0x1.132dbd818a2c9p-23, 0x1.c84b90a7d2374p-565, 0x1.02dce0e3ee57ep-652, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dbb7fe0788596p-41, 0.0, 0x1.720eecd6e9f62p-987, 0.0,
     0x1.2132792a11119p-742, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a6db4c1a5b5cdp-655,
     0x1.eb48e1cdc2e49p-487, 0.0, 0.0, 0x1.2efb091a98983p-730, 0x1.c3c649f482525p-673,
     0.0, 0x1.f84d9dd4c4303p-100, 0.0, 0x1.1eaa653c4ee35p-364,
     0x1.85bf6e7c214d4p-1014, 0x1.a7c2527804f16p-47, 0x1.f6ee96eb4ea2ap-89,
     0x1.a957412000e4cp-434, 0.0, 0x1.bb0fe72c7979bp-1005, 0x1.47d89cebacfc2p-604,
     0x1.ce08e60052d92p-116, 0x1.751eccf9eb1ffp-189, 0.0, 0x1.55e4e5f1b530cp-728,
     0x1.193f7e3d4ecfp-496, 0.0, 0.0, 0.0, 0x1.f74207a1022f7p-551,
     0x1.5c16ec80bb046p-888, 0.0, 0.0, 0x1.60f434d29dc3ep-747, 0x1.0b7c1ee29eedbp-572,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23c4981d91215p-812, 0.0, 0.0, 0.0, 0.0,
     0x1.0a480123b80ep-901, 0.0, 0x1.44ca19ec6d98bp-1, 0.0, 0x1.c77abe7f1cff3p-905,
     0.0, 0.0, 0x1.bc3d87e37b04dp-308, 0x1.42e6f4279d132p-462, 0x1.4018f4b1aa078p-386,
     0.0, 0.0, 0x1.7cccf8a37a59fp-923, 0x1.d757f6352c5ccp-76, 0x1.da7feac681ddep-539,
     0x1.bec6b77b57f79p-723, 0.0, 0x1.a04bb438ba481p-907, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cb12fe558eeb2p-33, 0x1.9ce36189736cap-33, 0.0, 0x1.99acd1efacc99p-412,
     0x1.8b1cfcff4dc3ep-626, 0.0, 0.0, 0x1.8912fb4802b3bp-871, 0x1.0061311351e99p-452,
     0.0, 0.0, 0.0, 0x1.e2c05b4c4158fp-930, 0x1.5472ae09df58cp-301, 0.0, 0.0, 0.0,
     0x1.a58e607d4d15bp-477, 0x1.181ba17a751cdp-911, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11bda3a279e4bp-819, 0.0, 0.0, 0x1.e43933e46452ap-372, 0x1.f5d668bc0c49ep-785,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b8e718ea8807ap-244, 0.0, 0x1.c94a0e717cce7p-425,
     0.0, 0x1.6ec3ba244b5dep-853, 0.0, 0x1.7f695ab4171d9p-713, 0.0, 0.0, 0.0, 0.0,
     0x1.08d3f166625d4p-517, 0.0, 0.0, 0.0, 0x1.53ad23b6d82dcp-900,
     0x1.3f36c8ba36b09p-296, 0x1.45c2280839139p-130, 0.0, 0x1.a0945ba902897p-438, 0.0,
     0.0, 0x1.fdffe3293383cp-366, 0x1.8cc4ae6dd6732p-754, 0x1.ee6724f2b6c06p-400, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ae8222804f33ep-831, 0.0, 0x1.e2208ad447d1bp-802,
     0x1.b09a789238045p-363, 0x1.a821ac3f99373p-819, 0.0, 0x1.67496e8ab6f88p-966, 0.0,
     0.0, 0x1.82faa7e493ef8p-717, 0.0, 0x1.3ffed20f688a4p-217, 0x1.a13d1bf956754p-476,
     0x1.86d8b3237bf06p-307, 0x1.4b20c32f37a5fp-400, 0.0, 0x1.3889dc985af4ep-100,
     0x1.db5e94c50528cp-303, 0.0, 0.0, 0x1.2e23c2f15a82dp-291, 0x1.f4d620a1ed2dep-834,
     0x1.1f739b6917b55p-62, 0.0, 0x1.c98648388fba4p-222, 0x1.ebdb13a19b9a2p-899,
     0x1.cdb3c92cbeddap-744, 0x1.a27b56ca8598p-134, 0.0, 0.0, 0x1.d09d9f34a30b8p-716,
     0x1.a4a012a7d2d2ap-740, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f61756b426f21p-462,
     0x1.a271c9d0d924bp-717, 0.0, 0.0, 0.0, 0x1.f44c5468ad1e7p-385, 0.0, 0.0,
     0x1.d18c321e3b60ap-1017, 0x1.60d951f552c2ap-922, 0.0, 0.0,
     0x1.5857d65e4bfa4p-700, 0.0, 0x1.fe56472385316p-125, 0.0, 0x1.49c99b1c2f426p-523,
     0x1.f1d648caf4a14p-467, 0.0, 0x1.1e13c9616b27p-196, 0x1.4f494ef9afed5p-712, 0.0,
     0.0, 0.0, 0.0, 0x1.5483963447db9p-742, 0x1.6887a6f62368dp-626,
     0x1.d51575da47c1bp-171, 0.0, 0x1.a6e6613f681a1p-891, 0.0, 0x1.c51f73ab494f7p-280,
     0x1.f1432ad7df491p-279, 0.0, 0.0, 0x1.74cebde172af9p-940, 0.0,
     0x1.d33f60df12576p-488, 0x1.8ecc99ae4877dp-612, 0.0, 0.0, 0x1.3e5b81fe7f306p-690,
     0.0, 0.0, 0x1.499577318906dp-167, 0.0, 0.0, 0.0, 0x1.6dcd236f2ba48p-434,
     0x1.eebca409ba335p-701, 0x1.c32203a62fd9ep-28, 0x1.19d3464bae4cp-365, 0.0,
     0x1.6996ace57139ep-547, 0x1.4aa5ab35a6feep-623, 0x1.c328f976ee289p-998,
     0x1.cb5c13f37a56fp-1014, 0.0, 0.0, 0.0, 0.0, 0x1.ecde4d65ea2dcp-63, 0.0,
     0x1.2a22a4f38f5eap-945, 0.0, 0x1.84798910ed4f9p-466, 0x1.7ee48dcadab62p-741,
     0x1.7b4e1cd0c65p-433, 0.0, 0.0, 0x1.577726ee2fc8bp-790, 0x1.57e150002f0a6p-204,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49a1dadf3c8e2p-189, 0.0, 0.0,
     0x1.f18968cd74e8dp-950, 0x1.10d6f68ef6544p-574, 0.0, 0.0, 0x1.2a730a60acb24p-258,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f944a09e1671p-376,
     0x1.ba9850574419ep-652, 0x1.c868653dfe21p-903, 0.0, 0.0, 0x1.cc1125d282bf1p-324,
     0x1.74265ed0a270ap-416, 0.0, 0x1.8c08bb3b82cf6p-766, 0x1.7af56426446b3p-784,
     0x1.51ce86ba88f99p-284, 0.0, 0.0, 0x1.7f6fd9acbc083p-887, 0x1.4467d34df3cf1p-316,
     0x1.19c7092302babp-924, 0x1.f630d65aec8cp-360, 0x1.dbf304d9c7ea2p-590, 0.0,
     0x1.73595f0c234f1p-778, 0x1.deecd41b18d5cp-953, 0.0, 0.0, 0x1.613d1640b3acdp-844,
     0.0, 0.0, 0x1.0a176667ab7ebp-601, 0.0, 0.0, 0x1.e5b1575bfd19bp-690,
     0x1.5f518dcb68475p-762, 0x1.4d3a9a07aa3b8p-305, 0.0, 0x1.845ee1df33b9ep-734,
     0x1.529b0c36e99e7p-499, 0.0, 0x1.7d5272421883ap-545, 0x1.a689ab0be141cp-752, 0.0,
     0.0, 0x1.66d5abb9bf4bcp-757, 0.0, 0x1.02fb6b74d5bddp-390, 0.0,
     0x1.6f0b0ffc89637p-832, 0x1.ce2cd97a60243p-937, 0x1.db5f23b5734d9p-200,
     0x1.a66e694ac1901p-389, 0x1.1047421ac95c6p-800, 0x1.82717f9a6fb1ep-298,
     0x1.86810df02656p-989, 0.0, 0.0, 0.0, 0x1.f684faca28cacp-326,
     0x1.e75e849288a49p-909, 0x1.74f9a526a6cddp-145, 0x1.b5a96c594da2fp-557, 0.0, 0.0,
     0.0, 0x1.61e376660b717p-578, 0.0, 0.0, 0x1.4b0df93d2f667p-327,
     0x1.737f39fd373e2p-236, 0.0, 0x1.e12e1bc4faaa3p-202, 0x1.6b886e8772d15p-734,
     0x1.89ded0f6c98ccp-641, 0.0, 0.0, 0x1.f4b2b8f902cb5p-485, 0.0,
     0x1.bfdd4d79e268bp-156, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.478d87ad13853p-374,
     0x1.3c4ce6f40ec9bp-2, 0x1.b912d5ce9b12fp-343, 0.0, 0x1.c76b2cf64b022p-498,
     0x1.a6e0216c6d0ap-239, 0.0, 0x1.6386f5a481673p-988, 0x1.41fe385eb170ap-882, 0.0,
     0x1p0, 0.0, 0.0, 0x1.1cda320fb4d5ep-338, 0x1.0b40b66da6d6fp-799, 0.0, 0.0, 0.0,
     0x1.b16fd66a40e59p-464, 0.0, 0x1.8c36b177422fep-625, 0.0, 0.0, 0.0,
     0x1.43b680924be3ap-1001, 0.0, 0.0, 0x1.38df74a926f3ep-63, 0.0, 0.0, 0.0, 0.0,
     0x1.43c12d7815a2dp-624, 0x1.da49da12fcf47p-450, 0.0, 0.0, 0x1.b2745e2a0762p-552,
     0.0, 0x1.4a1b141c749cap-538, 0.0, 0.0, 0.0, 0.0, 0x1.b353f3706117ap-123,
     0x1.1a4b30d3c68dfp-873, 0.0, 0.0, 0x1.84ca9485770e3p-856, 0x1.6150d25ed0653p-852,
     0.0, 0x1.edf4392e1a85fp-491, 0.0, 0.0, 0x1.d8276ec65b37bp-698, 0.0, 0.0,
     0x1.95def5b3deb7ep-225, 0x1.5c1e7f0078abp-996, 0.0, 0x1.b0baed89181p-14, 0.0,
     0.0, 0.0, 0x1.94b5f1ee05363p-312, 0x1.4237ee6ad67dep-25, 0x1.7d0935aa473a9p-480,
     0x1.56cc4d739bb5bp-406, 0.0, 0.0, 0x1.4406c9c7cb99ap-890, 0x1.19df7fde8a0f5p-692,
     0.0, 0.0, 0x1.b8a6c1f55ca09p-590, 0x1.acc4710c62baap-681, 0x1.12a227ec5552ap-682,
     0.0, 0x1.d86c6636e4c68p-979, 0.0, 0x1.c729c6f0e102fp-104, 0.0,
     0x1.e7097e281c33p-849, 0.0, 0x1.cf441c3fc4867p-141, 0x1.87781bca10e21p-312, 0.0,
     0.0, 0.0, 0x1.cb5ff4c456367p-40, 0.0, 0x1.2c160d190bb5ep-958, 0.0,
     0x1.5555d3cfc8c41p-898, 0x1.5929cb417e3e7p-380, 0x1.92270cd29a875p-369,
     0x1.0ced844244fp-824, 0.0, 0.0, 0x1.3987aa0ba679cp-52, 0x1.ebeca3d2d67ffp-905,
     0.0, 0.0, 0.0, 0x1.81ccd65e4a938p-937, 0x1.1ab68c105af6p-78,
     0x1.a8854994bf022p-755, 0.0, 0.0, 0x1.267ec36d294a6p-845, 0x1.483dcaf422289p-170,
     0x1.5dde91f3909a3p-996, 0x1.72975cb1d288fp-886, 0x1.7b7b2c2df415fp-991,
     0x1.bbac9cbc64ea9p-686, 0x1.46e86fddc1272p-395, 0x1.71a17632442dep-877, 0.0, 0.0,
     0x1.fd210deb4c8fdp-908, 0x1.032af602ca605p-347, 0x1.bb192184fea3ep-719, 0.0, 0.0,
     0x1.1b9b91ae706cdp-360, 0.0, 0x1.398ccc3b9133cp-510, 0.0, 0.0,
     0x1.9fe22dab4f20ap-68, 0x1.4983ddcbe85d5p-26, 0x1.aced357f77998p-683,
     0x1.0201125b63186p-591, 0x1.befa852e581e8p-31, 0x1.7a078f49807c9p-556,
     0x1.ae3848336d35bp-1020, 0x1.e4e8bf5717d6bp-372, 0.0, 0x1.2f6294dadae79p-352,
     0x1.84e1bdab7ef76p-165, 0x1.d566ac6cca074p-707, 0x1.d87b52c0961fap-414, 0.0,
     0x1.69258d15c6f5fp-989, 0.0, 0.0, 0x1.3b0d6ac67195fp-797, 0.0, 0.0,
     0x1.b0a222c6b558cp-535, 0.0, 0x1.12647835e273ap-990, 0x1.4ffdf90199739p-124,
     0x1.04476b7384c91p-933, 0.0, 0x1.ac5908b20cdap-393, 0.0, 0x1.e310ffcc4b7ecp-464,
     0.0, 0.0, 0x1.acdf76d85d71ap-945, 0x1.04223e6be94c8p-354, 0.0, 0.0, 0.0,
     0x1.1818b21b22581p-910, 0x1.da2c3fd3df93bp-570, 0.0, 0x1.dbb48af9c0b6bp-299, 0.0,
     0.0, 0x1.fbcdfcdf8168bp-113, 0.0, 0x1.f429028b5c3d4p-117, 0.0, 0.0,
     0x1.5e99b8082d20fp-783, 0x1.f86bd3a0aca24p-381, 0.0, 0.0, 0.0,
     0x1.c2f07b679fc11p-121, 0x1.06d4b52958173p-132, 0x1.4e213a48b0f21p-340, 0.0, 0.0,
     0.0, 0x1.3fc09056589f3p-997, 0x1.954c0c9dfcc98p-840, 0x1.9324187a9a0f4p-765,
     0x1.2b976a53a1355p-626, 0x1.59aaba741f38dp-58, 0x1.90ff54784eb89p-670, 0.0,
     0x1.e608ca35892f3p-441, 0x1.4f547021d86bep-80, 0x1.b6cc87b6e5f08p-753,
     0x1.6766170b27b24p-694, 0.0, 0.0, 0.0, 0x1.b61c010b1e3cep-308, 0.0, 0.0,
     0x1.7b8ab7125184ep-455, 0.0, 0x1.b9a26300cbdf4p-616, 0.0, 0x1.d2c41de925084p-222,
     0.0, 0x1.91c2b07d036cp-532, 0x1.c81f7cadc9093p-565, 0.0, 0x1.11a9ca6cf5788p-914,
     0.0, 0x1.6f42e81530274p-22, 0.0, 0.0, 0.0, 0x1.57aa58aad0cd1p-503,
     0x1.ebf640c35631fp-717, 0x1.51decf97801ep-130, 0x1.9c3be7bb54eb8p-217,
     0x1.0ea34733fb905p-896, 0x1.62e195f279c28p-392, 0x1.19556b746a2dbp-763,
     0x1.a776c95cc5cacp-862, 0x1.24d45c3999d18p-116, 0x1.2f861bddd27a2p-75, 0.0,
     0x1.fa1bf9af0761ep-144, 0x1.dade15ea109edp-561, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a713f14e1790dp-264, 0.0, 0x1.be9b05133dd5cp-361, 0x1.21743f07a2c1cp-460,
     0x1.f3969234864d8p-451, 0.0, 0.0, 0x1.6014df47bc383p-446, 0.0,
     0x1.b9014240151afp-856, 0x1.a5393167d79f7p-538, 0x1.c5d9edf077b03p-295, 0.0, 0.0,
     0x1.fd3b08cbb3f8cp-803, 0.0, 0x1.54d4a93ee5509p-102, 0x1.7a7bfbe6fef8ap-853, 0.0,
     0x1.db1847211e6acp-641, 0.0, 0.0, 0.0, 0x1.19e6c5c9333ddp-55, 0.0, 0.0,
     0x1.b1c72ebb48dbp-76, 0.0, 0x1.d41c30e4c56ffp-59, 0.0, 0.0,
     0x1.80016c10a83e1p-606, 0x1.e156054cbbaa4p-607, 0x1.a17c0c7f3f109p-918,
     0x1.0cf6a48562aaep-373, 0x1.6e339074a8219p-767, 0.0, 0x1.abcd75325937p-643, 0.0,
     0x1.9e5ae251c399fp-706, 0x1.23c7669dfe889p-422, 0x1.09af458ae5bb4p-213, 0.0, 0.0,
     0.0, 0.0, 0x1.82a7969164743p-946, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7327f5768971p-1013, 0x1.5616cc127adf8p-33, 0x1.69faf6c7af229p-598,
     0x1.d5a8f79bbc34p-400, 0.0, 0.0, 0.0, 0.0, 0x1.e7b6ce4aac0cp-602, 0.0,
     0x1.1681a3dce8955p-605, 0.0, 0x1.3a453dbe0126dp-608, 0.0, 0.0, 0.0,
     0x1.8226704d3a3c5p-695, 0x1.fc180a4fea3ccp-394, 0.0, 0.0, 0.0,
     0x1.a3925ba8e50c8p-556, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26de82af1ead4p-885,
     0x1.ecd649f5e39adp-276, 0.0, 0.0, 0.0, 0x1.b76f172a68d5bp-164, 0.0,
     0x1.63a2ac96ce599p-875, 0x1.c148a7e840e56p-330, 0x1.9486f592dd2f6p-894,
     0x1.5ea2cbfded4f3p-704, 0.0, 0x1.b38b72e07b416p-819, 0.0, 0.0, 0.0, 0.0,
     0x1.1a29e5bdaef47p-499, 0.0, 0.0, 0x1.da074943d2afdp-940, 0.0,
     0x1.5333a5c85f384p-393, 0x1.1d83323216ae5p-395, 0x1.8a84a1164c58ep-623,
     0x1.3a0177433f424p-642, 0x1.2ae87f14ee984p-10, 0x1.e25c0bc692c5p-472, 0.0,
     0x1.733aa678ef4e4p-730, 0.0, 0x1.3ef2840659288p-913, 0x1.9ce9a9e091bacp-689, 0.0,
     0x1.37752e1588ccep-994, 0x1.53a52683d4d5ap-857, 0.0, 0.0, 0x1.aa91068bd50f5p-718,
     0.0, 0x1.23abdecaa04f8p-417, 0x1.fe81eb157e7d6p-286, 0.0, 0x1.48333cad640edp-832,
     0.0, 0x1.d22703340b5bfp-712, 0.0, 0x1.2385840c6719fp-318, 0.0, 0.0,
     0x1.21a9c86292d8p-111, 0.0, 0.0, 0.0, 0x1.3ca0b0a7168dep-804, 0.0,
     0x1.ce437a33bda99p-631, 0x1.7757ef4b6f31cp-161, 0.0, 0.0, 0x1.26016b43b39b4p-864,
     0.0, 0.0, 0.0, 0x1.bb282bf7391b5p-528, 0.0, 0.0, 0x1.c65b1ba8cb59dp-113, 0.0,
     0x1.6d5f42e846a55p-213, 0.0, 0x1.d1bb83709e7f9p-161, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.21a08443326eep-168, 0.0, 0x1.173791366863ap-397, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.81bb01edb3801p-547, 0x1.4e5362c7c78adp-535, 0x1.8ef724daf12e8p-158,
     0x1.81fc8e6afd595p-213, 0.0, 0.0, 0x1.9bdbb95e04459p-881, 0.0, 0.0,
     0x1.b28b6edc2841ep-378, 0.0, 0.0, 0x1.2c9d342aedfeep-747, 0x1.614769aded354p-692,
     0.0, 0x1.7d79431b52b77p-693, 0x1.df7b39f69cca1p-732, 0.0, 0x1.ea1bfade93d65p-902
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
            tmp1 = Sleef_finz_lgammad1_u10purecfma(tmp0);
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
    printf("Sleef_finz_lgammad1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_lgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
