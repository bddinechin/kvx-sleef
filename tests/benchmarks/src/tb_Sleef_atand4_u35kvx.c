/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand4_u35kvx.c --function Sleef_atand4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.6ef038fb1e5a1p-406, 0.0, 0x1.32f799dab76ebp-50, 0x1.09f113a480098p-911, 0.0,
     0.0, 0.0, 0x1.a0db682bf97bcp-667, 0x1.a756d40d5fd2dp-346, 0.0, 0.0, 0.0,
     0x1.f7d167ccd51aep-160, 0x1.56fcbbd6675c9p-977, 0.0, 0x1.25aecc2d6aee2p-619, 0.0,
     0x1.ede0cc59bd4d6p-295, 0.0, 0.0, 0.0, 0x1.cbb3cf0c8c6f1p-915, 0.0,
     0x1.318102bedfec1p-464, 0.0, 0x1.c8205086173eap-228, 0x1.193321fe48487p-525,
     0x1.4e092c33821f1p-864, 0.0, 0.0, 0x1.9655c319ba75ep-180, 0.0,
     0x1.c8a76f3716277p-796, 0.0, 0x1.b9ebdf23a1afdp-572, 0.0, 0.0,
     0x1.e5c7a1e1c267cp-522, 0x1.80eda2370e67ap-957, 0.0, 0.0, 0x1.f6c4fda53affep-506,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab6e76dc80b91p-814, 0x1.16ed7eb4863c9p-218, 0.0,
     0.0, 0x1.67a66242e692p-561, 0x1.14f584913a04p-241, 0x1.686e20f2b769ep-269,
     0x1.0f511e7d2dc9ap-190, 0x1.bbd2ac1612134p-231, 0x1.7041c26ee48abp-994, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b3aca80ac332p-862, 0.0, 0.0, 0x1.79d28eac2ea91p-665,
     0x1.2d5b266e2aa2cp-150, 0x1.a960e3cf1e64cp-598, 0.0, 0x1.825f016d12875p-1013,
     0.0, 0x1.33717fa9d8addp-154, 0x1.c8923b9f283bdp-425, 0x1.57f0ca624c22ap-694,
     0x1.62e93a18b2642p-586, 0x1.a222bd5dfaeebp-655, 0.0, 0.0, 0x1.a0afebf1dfe18p-117,
     0x1.e95f96e625f36p-563, 0x1.04e3b79c78c51p-303, 0x1.f576d3716aa6dp-301,
     0x1.f977d3edcd4a8p-840, 0.0, 0.0, 0x1.ed0230c19b8e3p-750, 0x1.d5a42ffe1e21bp-877,
     0x1.ccfceaf815c26p-284, 0x1.fda0e4808c093p-48, 0.0, 0.0, 0x1.49cea069e050ap-844,
     0.0, 0.0, 0.0, 0x1.fbaf22d7fa735p-337, 0.0, 0.0, 0.0, 0.0, 0x1.67fb474b578e7p-95,
     0x1.35fa481d3901ap-89, 0.0, 0x1.00e7e5fafc197p-799, 0x1.02528208290c9p-714, 0.0,
     0.0, 0x1.a304b00096a9fp-628, 0.0, 0.0, 0x1.280085d5116f2p-471,
     0x1.c0b3260093dbfp-49, 0x1.37a553232cb1dp-994, 0.0, 0x1.b4f900907e534p-323,
     0x1.8d337508a0168p-106, 0x1.12cbc219ed3d7p-181, 0x1.7e758187ff35cp-747, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bde3450f29cb8p-182, 0x1.2a2515edf36bap-229, 0.0, 0.0,
     0x1.5b91afce5217p-218, 0.0, 0x1.cc8aa704703ccp-22, 0.0, 0x1.0d6b2ffa1b7fcp-18,
     0x1.49502a2f73e55p-865, 0.0, 0.0, 0.0, 0.0, 0x1.166aa73286b05p-780,
     0x1.a41ffe479decbp-611, 0.0, 0x1.6d3e94c95af24p-885, 0x1.d802c0d6c1411p-582,
     0x1.3934e903c3b23p-3, 0.0, 0x1.13ba664fff4a7p-377, 0x1.c3e1f49af756fp-128,
     0x1.e6caaf41fbbbfp-846, 0x1.b32a52b245b52p-567, 0.0, 0x1.ec0d2f48de4f1p-129,
     0x1.3de3500ac370bp-203, 0.0, 0.0, 0x1.e6d0e17d28824p-434, 0x1.b586f8f7d02fbp-920,
     0.0, 0.0, 0x1.b91ffc68829cfp-115, 0x1.e816fed677c4ap-605, 0x1.ad1b57c53f4f1p-621,
     0.0, 0x1.2d45d67697e76p-298, 0.0, 0x1.76fda5447d189p-496, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a1622c40b63dep-763, 0x1.669ff033d0513p-456, 0.0, 0x1.1aeb9cf716428p-439,
     0x1.afbe6b2de13e3p-407, 0x1.c39a2d78705f3p-446, 0x1.5fe4381e66b56p-4, 0.0, 0.0,
     0.0, 0x1.98c3f6a46699cp-998, 0.0, 0x1.179064b08701fp-973, 0.0,
     0x1.a3fdb6ba25254p-392, 0.0, 0.0, 0x1.7340ebd8d74edp-584, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ed6a42efc9813p-696, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b3000f5a1b84p-468, 0.0, 0.0, 0.0, 0x1.2c14d269eb55p-717,
     0x1.8051df6d98734p-223, 0x1.997d0c97d268cp-534, 0x1.90f7a1774a03cp-398, 0.0, 0.0,
     0.0, 0x1.15042cb6c264bp-976, 0.0, 0.0, 0.0, 0x1.2bc1aed762f84p-219, 0.0,
     0x1.26566e609e657p-478, 0x1.97b4076081e33p-239, 0x1.35b8b32aa03f9p-623, 0.0,
     0x1.5f3295722483dp-684, 0x1.1f4ab6dc61cb3p-520, 0.0, 0.0, 0.0,
     0x1.63df307adec1dp-620, 0x1.81622115f872fp-753, 0x1.2cb9978024e66p-821,
     0x1.ceb59cfb37481p-457, 0.0, 0.0, 0.0, 0x1.923bc09807c91p-757, 0.0, 0.0, 0.0,
     0x1.7b3b62300e548p-728, 0.0, 0x1.c196250870cadp-138, 0x1.4d8f01a43c996p-631,
     0x1.8e6a1ad9ca555p-75, 0.0, 0.0, 0.0, 0x1.e46385f99c77bp-484,
     0x1.8a27bb3ea6c71p-644, 0.0, 0x1.048b773f90807p-899, 0x1.611a0f67e6ffdp-438, 0.0,
     0x1.93b6942fb27e8p-872, 0x1.98996686949dep-283, 0x1.779ae91b304f3p-771, 0.0, 0.0,
     0x1.4c3d92b05afd3p-980, 0x1.d94b3b7d2d553p-198, 0.0, 0x1.a7de9bff9e839p-891, 0.0,
     0.0, 0.0, 0x1.c172403cbc5c4p-541, 0x1.1d8ee5344ba85p-431, 0x1.349c30cebf0aap-352,
     0x1.03a6d16666c36p-223, 0.0, 0.0, 0x1.e11239dc7c8adp-882, 0.0,
     0x1.3aa65a445fabcp-838, 0x1.8c051e38c8e13p-454, 0x1.2240a2b172e63p-568, 0.0,
     0x1.1b0546c030da3p-330, 0.0, 0x1.f8b880ca5926fp-522, 0.0, 0.0, 0.0,
     0x1.d0796c4b14149p-1003, 0.0, 0x1.1b5576f35ddf5p-698, 0x1.4ef82d7ff3577p-116,
     0.0, 0x1.460d906566bcfp-762, 0x1.4ac21f12cc39ap-930, 0.0, 0.0, 0.0, 0.0,
     0x1.f61d7c932a4dfp-894, 0x1.a8c77288e9605p-1011, 0x1.86c8a21d323c4p-67,
     0x1.393862134e97p-750, 0.0, 0.0, 0x1.e7e9770cc1ec3p-936, 0.0, 0.0, 0.0,
     0x1.a458c0e69519ep-991, 0.0, 0x1.c107b723066adp-806, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1ad011d96fcdfp-94, 0x1.6187c75a6e5bap-193, 0x1.6a8b3acb95c6dp-481, 0.0,
     0.0, 0x1.c8f0f10eef9eap-775, 0x1.5369cb325e315p-145, 0x1.3618097e0e023p-276,
     0x1.a5bcfea2ce36fp-364, 0.0, 0.0, 0.0, 0.0, 0x1.9c0f223777728p-541, 0.0, 0.0,
     0.0, 0x1.1aabaf0e7e9dap-216, 0.0, 0x1.3a1ca022eab2fp-390, 0.0, 0.0,
     0x1.1f90824753c5ap-105, 0x1.5a24833920d99p-876, 0.0, 0.0, 0x1.eb55ea73107d2p-129,
     0.0, 0.0, 0.0, 0x1.f575e56a22d6p-1008, 0.0, 0.0, 0x1.b4f518d6b4dfp-433,
     0x1.7fd5f91c98861p-68, 0x1.4e8bbe66083ep-798, 0x1.7a3db3f980078p-244, 0.0, 0.0,
     0x1.adef46e56b6adp-633, 0.0, 0.0, 0.0, 0.0, 0x1.31f7d9c0ac089p-126,
     0x1.93eb7b7e90d55p-101, 0x1.dba768b7f3b2cp-226, 0.0, 0x1.d5b8413683a18p-724,
     0x1.f102eb2030747p-417, 0x1.dc7d7b64cdp-847, 0.0, 0x1.7d313e3cb49dfp-379, 0.0,
     0.0, 0x1.8f665a21fd44p-920, 0x1.1d4973605db11p-741, 0x1.947a675727a0dp-85,
     0x1.3aa46d29189d7p-723, 0.0, 0.0, 0.0, 0.0, 0x1.288df4a30fbb8p-774, 0.0, 0.0,
     0x1.b446bc8831bd1p-191, 0.0, 0x1.0cb7823f438eap-312, 0.0, 0.0,
     0x1.3502badde6eeap-807, 0x1.82780e3efddc8p-1014, 0.0, 0.0,
     0x1.dea3e7f9e9422p-971, 0x1.f0e34d6e3455cp-132, 0x1.f3827c0dd63cfp-968,
     0x1.6819ee3332969p-960, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b422fd901ff1p-774, 0.0,
     0.0, 0x1.38e3d3a420827p-367, 0.0, 0.0, 0.0, 0x1.27c07e33c603bp-365, 0.0, 0.0,
     0x1.4c85818c0c346p-604, 0x1.d0cf863d75c11p-628, 0x1.063d239eea328p-1007,
     0x1.025c309ffde2dp-74, 0x1.aac3683919a13p-173, 0.0, 0x1.a8da61e393835p-57, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65eb26fd81249p-439, 0x1.add8a760b4078p-64,
     0x1.a3c9d39dc3dfcp-789, 0.0, 0x1.7c6d3bebef931p-866, 0.0, 0x1.c5c095a2459e7p-255,
     0.0, 0x1.7ac7ff644578ep-820, 0.0, 0.0, 0x1.f861af29cd4ecp-820,
     0x1.aa7b100778b7fp-127, 0x1.8665cc3383178p-243, 0.0, 0x1.42ad3f8ea0473p-450, 0.0,
     0x1.ca0218e95b6c3p-1009, 0x1.2ebb6100d7e67p-227, 0x1.33706455e07ap-484, 0.0,
     0x1.668756571f19bp-225, 0x1.b95985db60bf6p-318, 0.0, 0x1.34794e73e4102p-823,
     0x1.125898673a776p-890, 0x1.b59d24cbf6ab4p-389, 0.0, 0.0, 0x1.c823186c9ff86p-671,
     0x1.fa05b1b6f0616p-133, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cae5a58c061dp-949,
     0.0, 0.0, 0.0, 0x1.5c89f6dd33bd3p-329, 0x1.f33d860d90d8ap-69,
     0x1.a820385b7873ep-24, 0x1.7bd21872d838dp-386, 0x1.ed6bed445af72p-588,
     0x1.23b2103ad873ap-681, 0.0, 0x1.2ce4fd9a0888p-1017, 0x1.ef6da9ab8f958p-944, 0.0,
     0x1.f233e1669865ep-442, 0x1.b716d5e434eb5p-788, 0x1.7482a9833c80fp-538,
     0x1.09c3aac716193p-951, 0x1.ce08d96f83401p-324, 0x1.3d970769ea9bcp-610, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dfd9fad2ae2f3p-457, 0.0,
     0x1.58f2ba79d5f05p-263, 0x1.8f940b0fbd58fp-691, 0.0, 0.0, 0.0,
     0x1.233bbd1501e9bp-135, 0.0, 0x1.ceba1cfb4c997p-347, 0x1.6b49683b4b5f8p-403,
     0x1.82d5f1eed4b7bp-772, 0x1.a497c566490c8p-492, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1f36c0bc3cef2p-1, 0x1.77074d02e18f7p-583, 0.0, 0.0, 0.0,
     0x1.6877a587abdap-116, 0x1.2a1f4a93915bcp-644, 0.0, 0x1.9c667758027b8p-281,
     0x1.4d0fb6d4483abp-99, 0x1.b8850f7f5ededp-214, 0.0, 0.0, 0.0,
     0x1.33fcb6e035a33p-893, 0.0, 0.0, 0.0, 0x1.97dd16d4a785bp-577, 0.0, 0.0,
     0x1.9909c4ae3b847p-188, 0x1.5a20ac9da53fbp-823, 0.0, 0x1.61c4318b111f9p-695, 0.0,
     0x1.c7dddf8d59532p-735, 0x1.3f4124bfce8a8p-181, 0x1.3f5a55a94fdebp-763,
     0x1.eddb80334719p-995, 0x1.32c4dca2c8c3ap-816, 0.0, 0.0, 0.0,
     0x1.4ba4230954943p-178, 0.0, 0x1.c29a03c0e3b18p-536, 0x1.f98d4a65a750ep-880,
     0x1.422ee550c3c86p-696, 0.0, 0.0, 0x1.c8a47d2719cc2p-72, 0.0, 0.0,
     0x1.ea8b66e56016dp-77, 0x1.d53c9fc690ee5p-251, 0.0, 0.0, 0x1.1d27821f86cd5p-782,
     0x1.d395209f6d79dp-38, 0.0, 0x1.1cc35b215f95fp-238, 0x1.1bb4310a73713p-195,
     0x1.87d1cf4e1b9f5p-46, 0x1.90efb5342c38cp-735, 0x1.b787aa9cdb85dp-60, 0.0,
     0x1.cbdcb5d7df7b7p-303, 0.0, 0x1.b2460f8649b45p-166, 0.0, 0x1.ae7e6b7c3d9b8p-629,
     0x1.bcfbca5293b4fp-23, 0.0, 0x1.149a44db54d57p-654, 0x1.ecd40e93a99c2p-387,
     0x1.cbbaba3762b2fp-233, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.edeb8e384b056p-575,
     0x1.97e6d5b99764bp-943, 0x1.77db0306f3643p-791, 0x1.3ec318cff8159p-196, 0.0, 0.0,
     0.0, 0.0, 0x1.b092b5ebeea1ap-182, 0.0, 0x1.60d9206236704p-928, 0.0,
     0x1.f3e751ce884bcp-951, 0x1.67079bffa48c8p-153, 0.0, 0x1.3f720c689e3f1p-503, 0.0,
     0.0, 0x1.9375408795f64p-856, 0.0, 0.0, 0x1.16b2da64bdf95p-610,
     0x1.e5647934f6853p-361, 0x1.f72b87b767966p-705, 0.0, 0.0, 0x1.492e3cef753f3p-35,
     0x1.44c0c24df51fep-690, 0.0, 0x1.d9b14bd487dc7p-758, 0.0, 0x1.300016d4b2835p-765,
     0x1.c0d5cf099029fp-661, 0x1.3efe09c055697p-302, 0x1.1b6c3fe6db0cbp-775,
     0x1.db771c31e54b9p-132, 0.0, 0.0, 0x1.23a8ee7d2b513p-76, 0x1.0de24c3db4e4dp-18,
     0x1.2ef64241961bfp-450, 0x1.8f616f73e4115p-341, 0.0, 0.0, 0x1.25cbcce71f5ap-725,
     0x1.d3a7f351f69bp-224, 0.0, 0x1.e861d3ae6826bp-502, 0.0, 0.0,
     0x1.7d0c34c467f7dp-745, 0x1.d0154af8634e4p-924, 0x1.111379882a1bcp-332,
     0x1.d24c1839f14b6p-456, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77b38cf7f0329p-315,
     0.0, 0.0, 0.0, 0.0, 0x1.b79f7e5d15a5p-931, 0x1.86d3fe2e9287ap-904,
     0x1.b978df71d2364p-583, 0x1.b5f01eeb62ee1p-926, 0x1.56062086839efp-643, 0.0, 0.0,
     0.0, 0x1.1e19a58cfcb38p-237, 0.0, 0x1.f67087ac1d171p-426, 0x1.5a1319632d5b8p-192,
     0x1.8da3910ee8f0cp-751, 0x1.9d7097d50af22p-831, 0x1.58b67528e2277p-740,
     0x1.e7ab3dbd593bep-537, 0x1.36810233c09efp-614, 0x1.099202fa23ecp-504, 0.0,
     0x1.32f2e3a0b86bfp-41, 0.0, 0x1.79ea93d415709p-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a552909a1e5fep-746, 0x1.4a620406e65cfp-469, 0x1.9f73e4ce9026ap-845, 0.0, 0.0,
     0.0, 0x1.047cbdfb05d03p-592, 0.0, 0.0, 0.0, 0x1.296763ffe9597p-989,
     0x1.a9d1cb2a5c4a4p-404, 0x1.df5f6fa828e17p-161, 0.0, 0x1.54b1fc5bf39f4p-410,
     0x1.9b6636cae513p-765, 0.0, 0x1.b841c5c4cd699p-702, 0.0, 0x1.f43522310aa17p-460,
     0.0, 0.0, 0.0, 0x1.bc6b9efff2ab5p-761, 0x1.ae12c0de629bbp-253,
     0x1.28d2c82fd80b5p-104, 0x1.8b361a745e87bp-872, 0.0, 0.0, 0x1.d667130eb8f1fp-195,
     0x1.522a376357df5p-692, 0x1.7ace43da6cbddp-542, 0x1.94854ba48a27bp-696, 0.0, 0.0,
     0x1.d0a69380fdf55p-844, 0x1.d58a1247c2194p-583, 0.0, 0x1.d8243d65eb0fap-768, 0.0,
     0.0, 0.0, 0.0, 0x1.b25daeff659e4p-466, 0.0, 0x1.e2d786e753d46p-138, 0.0,
     0x1.7322a1a50a9c8p-594, 0.0, 0x1.9b37c21f3c282p-527, 0.0, 0x1.25a5f1cf04136p-412,
     0x1.41270635eb4d2p-287, 0.0, 0.0, 0.0, 0x1.cb087abfa6d98p-175,
     0x1.be02a77e2433cp-698, 0x1.4c4d4875bb256p-782, 0x1.516dcf8b4ad43p-118, 0.0,
     0x1.feb955f3dc0abp-322, 0.0, 0.0, 0x1.99813e39b795dp-882, 0x1.e61c0fbe5aa1p-451,
     0.0, 0.0, 0x1.eb9fe6348e3e3p-1004, 0.0, 0x1.70c8446044e75p-122, 0.0,
     0x1.1247d31d9a012p-891, 0x1.ba384e434962fp-420, 0x1.89038eea59e1cp-907, 0.0,
     0x1.abb7dc040735p-897, 0.0, 0x1.bcb629e284267p-500, 0.0, 0.0,
     0x1.b665e11f181c8p-760, 0x1.bc26cd6598661p-48, 0x1.a38698435f898p-820, 0.0,
     0x1.26229d8c25d8bp-1003, 0.0, 0x1.a63f2623a7257p-508, 0.0, 0.0,
     0x1.ef973d0372d4bp-541, 0x1.250f3cb4e95abp-967, 0x1.682e80ef095efp-1,
     0x1.6ee72ca9b20d7p-467, 0.0, 0.0, 0x1.54f8dad3bf632p-240, 0x1.61e637dffc44p-123,
     0x1.3d402f8fc131bp-965, 0.0, 0x1.e3f33e966e3bbp-174, 0x1.3a11a3ecfdb9p-832, 0.0,
     0.0, 0x1.80a3fa387b71p-83, 0x1.81c84214f38bbp-196, 0x1.7d83f6b09a0c9p-908,
     0x1.7355a4d855b6ap-985, 0x1.b5db09fa67b62p-124, 0x1.3f7b0a325ba7p-297,
     0x1.6dab29fdc8651p-674, 0.0, 0.0, 0x1.2db0895357d69p-1020,
     0x1.2b8b4e06ceebep-1009, 0x1.ef02b20d1e368p-54, 0x1.0f226a3c74434p-197,
     0x1.3922c4866b776p-194, 0x1.c5e902f454f7ap-675, 0x1.811266d645ff4p-827, 0.0, 0.0,
     0x1.042be77d073f2p-476, 0.0, 0.0, 0.0, 0x1.5feb0b99d05d6p-849,
     0x1.0fb41383d5afcp-920, 0.0, 0x1.8e64c57d8e13p-442, 0.0, 0x1.be68b41dc3f67p-129,
     0.0, 0x1.173d1d5b431f2p-323, 0.0, 0x1.94446a38baaa6p-394, 0x1.0586367db004p-961,
     0.0, 0.0, 0x1.2a873f988b563p-311, 0.0, 0.0, 0.0, 0.0, 0x1.b660701a1bc5bp-109,
     0x1.be5dba571a33ap-886, 0.0, 0x1.7aba1ae2ec0bbp-821, 0.0, 0x1.b4d8649007d3fp-174,
     0.0, 0x1.589d834397544p-32, 0.0, 0.0, 0x1.7941865f8d3f8p-247,
     0x1.db2949bd0fcd3p-879, 0x1.5d46b4b1e32a5p-557, 0.0, 0x1.1150c4aa73115p-899, 0.0,
     0.0, 0.0, 0x1.26bbeb09e6df4p-483, 0.0, 0.0, 0x1.445526ded9b13p-196,
     0x1.13071f6fba229p-192, 0.0, 0x1.33ae9adc3e806p-1000, 0.0, 0.0,
     0x1.c36d594c486f6p-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.323e2d7efa0a9p-666, 0x1.c6c957fe70009p-691, 0x1.76c6f7a69fb7ep-454,
     0x1.425d7350bbb22p-1001, 0x1.6518197f1b397p-574, 0.0, 0.0,
     0x1.994f7d4dc7ca4p-654, 0.0, 0x1.22d644f7809fap-75, 0x1.4dcd236a5b645p-772,
     0x1.3e0d06503f60bp-497, 0x1.c6cc80391f2c1p-59, 0.0, 0x1.be9d7341c7d85p-161,
     0x1.faad2b5c5fbfdp-346, 0.0, 0.0, 0x1.f50f7364d5a5bp-267, 0x1.e003f3091898fp-954,
     0x1.fd99ac5649448p-945, 0.0, 0x1.26a9e11207033p-178, 0.0, 0x1.ca541c84e653p-63,
     0.0, 0.0, 0.0, 0x1.6f8c018ab8fb4p-68, 0.0, 0x1.cfb09ef070bfdp-242, 0.0,
     0x1.be516f1e6f3eap-564, 0x1.40a919bb4678fp-461, 0x1.442a68ea723edp-792,
     0x1.fea352fcdcab6p-234, 0x1.3e05dcee3ee6ap-717, 0.0, 0x1.04a3ac2a8c6e6p-359,
     0x1.27062e9b318bcp-807, 0.0, 0.0, 0x1.440324fa9d1a5p-575, 0.0,
     0x1.031d608d2688bp-632, 0.0, 0x1.d14e30db22822p-992, 0x1.39e64c4fcf27ep-890,
     0x1.f53c901ea95fp-304, 0x1.99af63e4e9d93p-113, 0.0, 0x1.fcb8fb749e9aap-267, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6f9a8ce304c83p-577, 0.0, 0x1.97d5c45eadc49p-681,
     0x1.f1c8a60c8fd2fp-741, 0x1.af9571f04ba8fp-655, 0.0, 0x1.e55fc8d702187p-605, 0.0,
     0.0, 0x1.ed0739f4bd0c3p-418, 0.0, 0x1.fde9f9d67cc48p-777, 0x1.d96c4cf7fbf52p-161,
     0.0, 0x1.5db1f7e94613ap-221, 0.0, 0.0, 0x1.5b7d5647ec34bp-506, 0.0, 0.0,
     0x1.6f858c7516079p-343, 0x1.060791dfb67bdp-431, 0x1.8f9ef93f3c0f7p-884, 0.0,
     0x1.6e38a9529c7aap-842, 0x1.500a7715d531ep-146, 0.0, 0.0, 0.0, 0.0,
     0x1.a6a7e0e45d75cp-23, 0.0, 0x1.c6a6e30d57cc4p-114, 0x1.780c44b3196eap-74,
     0x1.2685174abc42p-419, 0.0, 0x1.9d43f82d349a1p-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f7f81f5856bf6p-943, 0x1.7fab1cabed611p-234,
     0x1.7525e79902984p-670, 0x1.d8c4048452a31p-332, 0.0, 0x1.19c4067bb17e6p-528,
     0x1.a6816ba95142bp-857, 0.0, 0x1.9974148af1623p-233, 0x1.ba937e0f93c1p-207,
     0x1.cebf7a421270dp-785, 0.0, 0x1.b9e470b639e23p-243, 0x1.b0b0e81d16c8ep-736, 0.0,
     0.0, 0.0, 0x1.0a12d65ae543ap-312, 0.0, 0.0, 0.0, 0.0, 0x1.71862c16d3c2fp-466,
     0.0, 0.0, 0x1.358cfa4408e1dp-672, 0x1.4f4cf1b0baa44p-736, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.150ccf1664c3ep-414, 0x1.43032434d868dp-817, 0.0,
     0x1.41dafc747a189p-528, 0x1.fe7d2868e6c01p-557, 0.0, 0x1.a59bc535b502ep-990,
     0x1.8128a81ee1914p-816, 0.0, 0.0, 0x1.3148f74a6792p-793, 0x1.501b82671cc8bp-140,
     0.0, 0x1.fb6eebd64e7c8p-1002, 0.0, 0x1.80f2e8b14ff9dp-243
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
            tmp1 = Sleef_atand4_u35kvx(tmp0);
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
    printf("Sleef_atand4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_atand4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
