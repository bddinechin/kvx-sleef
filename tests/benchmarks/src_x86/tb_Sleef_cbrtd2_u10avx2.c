/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd2_u10avx2128.c --function Sleef_cbrtd2_u10avx2128 \
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
     0x1.f6853794e390ap-39, 0.0, 0x1.002b3d8aaad4p-446, 0.0, 0x1.163b00897adf2p-128,
     0x1.0008e68e5e41fp-212, 0x1.4656ac07fd685p-952, 0.0, 0.0, 0.0,
     0x1.bdf245d0e6061p-607, 0.0, 0x1.7bc50ed7fa3a5p-912, 0.0, 0x1.db8e5c21942ffp-227,
     0.0, 0x1.52437a573bed9p-751, 0x1.eae64469fc11ap-639, 0.0, 0x1.04aa049d2d266p-730,
     0x1.8cdaa350c0f31p-891, 0.0, 0.0, 0x1.d8dfd87310368p-799, 0x1.f56e92a559f68p-371,
     0.0, 0.0, 0.0, 0.0, 0x1.1ca575c6df69bp-1011, 0x1.7aecd18a0170ep-444,
     0x1.c48b28be2996dp-774, 0x1.b8db9d066c362p-118, 0.0, 0x1.c5145cbd17435p-781, 0.0,
     0.0, 0x1.d318ba5c52afap-874, 0x1.ac1407b64559fp-667, 0x1.b614b8c203fd8p-207, 0.0,
     0x1.f9661837e0e83p-562, 0.0, 0x1.cab66aa9039b8p-697, 0x1.3361d14999062p-697, 0.0,
     0x1.4ae0f6857baf4p-338, 0.0, 0.0, 0.0, 0x1.d7235760719dfp-990, 0.0, 0.0,
     0x1.f5ccf78d86f8fp-216, 0x1.27571db6b0fe2p-524, 0.0, 0x1.6d77539ba0214p-911,
     0x1.e6be0ba5a2494p-188, 0x1.6589cdbe3ded6p-143, 0x1.4214f9e23c32dp-951, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.857024a419fb5p-475, 0x1.e73324d1627dep-773,
     0x1.937b50fd213a1p-873, 0.0, 0.0, 0x1.8795a5c02d186p-773, 0.0,
     0x1.e5d3b766293f2p-331, 0.0, 0.0, 0x1.da17c22be8ed1p-126, 0x1.88b1dc6ee2372p-794,
     0x1.4e989f97328eap-741, 0.0, 0x1.d8e01181ecc9ep-171, 0.0, 0.0, 0.0,
     0x1.58af22b90ad33p-557, 0.0, 0.0, 0.0, 0x1.bf746107beebfp-779, 0.0, 0.0,
     0x1.eea1ba35578e7p-446, 0x1.c6dcbc780522p-915, 0x1.5adc50b0c5b1p-213,
     0x1.b2b16fa39d9bcp-58, 0.0, 0.0, 0x1.e1d3fa7d25e22p-269, 0.0,
     0x1.8ff6475201c3fp-543, 0.0, 0x1.2111fb6157a0bp-717, 0.0, 0.0,
     0x1.2739f42c6a7dap-233, 0x1.29d1f655fde19p-81, 0.0, 0.0, 0.0,
     0x1.821719c1fadafp-673, 0x1.cafbec4de577bp-756, 0x1.53ddf4ab5b6fep-939,
     0x1.0a6d41241da26p-39, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e758e185c4bep-375,
     0x1.e63695c37c399p-498, 0.0, 0.0, 0.0, 0x1.a557bf6423c5cp-709,
     0x1.e5dda88fd5792p-703, 0x1.9a384eaf9891ep-606, 0x1.6c60ee063885ep-190,
     0x1.7520707d3bcb2p-639, 0.0, 0x1.910b521f2d904p-287, 0x1.e5dae817394a5p-579, 0.0,
     0.0, 0x1.35505b7235e6fp-439, 0x1.391219df9d2p-88, 0x1.d2a1d80972efdp-16, 0.0,
     0.0, 0.0, 0.0, 0x1.0ebfb6ef9e36dp-266, 0.0, 0x1.687748a33a01fp-304, 0.0,
     0x1.037f9e2d39783p-84, 0.0, 0x1.309f276a7f965p-772, 0x1.6f60bb49b363bp-107,
     0x1.11d64615d8bf1p-11, 0x1.cff1a5a4da903p-436, 0.0, 0x1.7dc50ac4c3ca7p-825,
     0x1.09aa405309d15p-539, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f36168f7db599p-445,
     0.0, 0.0, 0x1.72f925eaa9621p-25, 0.0, 0.0, 0.0, 0x1.f3c140dfdb5c7p-956, 0.0, 0.0,
     0.0, 0x1.701e35a462095p-224, 0x1.5397a50ad3abbp-133, 0x1.d3e154fea0c3ep-762,
     0x1.ec27aa01bbf3ep-543, 0x1.bba9220e6f8fep-458, 0x1.0301dc0fdb44fp-504, 0.0, 0.0,
     0.0, 0.0, 0x1.ae7f68df39b15p-27, 0x1.307bf81ecde35p-886, 0.0, 0.0,
     0x1.69f8318c82e92p-67, 0.0, 0.0, 0.0, 0x1.56ac1cec1ce66p-24,
     0x1.f3dc777be8d55p-591, 0.0, 0.0, 0x1.a65c0ebb39397p-566, 0x1.5d5bcb970ab76p-294,
     0x1.8eeafd8effd73p-539, 0x1.2e846d10a8834p-337, 0x1.1ac1273eadbeap-186,
     0x1.1b76299fa8ac2p-978, 0x1.72cfdef08bc5ep-857, 0.0, 0.0, 0.0,
     0x1.9c86c53809e38p-770, 0x1.11f0757afff8bp-130, 0x1.0838f540f7689p-341, 0.0,
     0x1.6e06c454a185dp-119, 0x1.a1a23fc817b33p-419, 0.0, 0x1.053e92e2b7f56p-45,
     0x1.17f1267dc3286p-231, 0.0, 0.0, 0x1.06520dd4a8fabp-503, 0.0,
     0x1.eecb5b35a22p-864, 0.0, 0.0, 0.0, 0x1.0df79a92f701ap-839,
     0x1.9abb42d46153p-826, 0x1.b688abfb2584bp-852, 0x1.6ed140682165dp-253,
     0x1.2b6475542121ep-770, 0x1.794ca4e171429p-564, 0x1.c510d5e1f93d3p-755, 0.0, 0.0,
     0x1.23ea76321b48cp-784, 0.0, 0.0, 0x1.a110f20a0052dp-167, 0.0,
     0x1.03f4b2a0cde7ep-306, 0x1.cfc5a3a26afdbp-307, 0.0, 0x1.a8e70e1c91dfep-748,
     0x1.bf4bef978f8c5p-579, 0.0, 0x1.86de7b2668801p-796, 0.0, 0.0, 0.0,
     0x1.f454178ba1d4p-76, 0x1.71eadef36cb5dp-287, 0x1.632d8e7a628abp-913, 0.0,
     0x1.23ab8d3b78869p-418, 0.0, 0.0, 0.0, 0x1.053e6c4c46b17p-517, 0.0,
     0x1.2b45a41d86232p-504, 0.0, 0.0, 0x1.0e83d3feaa78ep-320, 0.0,
     0x1.d15f63b83aaeap-4, 0.0, 0.0, 0.0, 0x1.0f658a5f153c6p-179,
     0x1.c92c3adff869ep-553, 0.0, 0.0, 0.0, 0x1.b463ea73b429fp-761,
     0x1.af75dc37529aap-663, 0x1.b0ef86bdd930bp-473, 0x1.7f8151652f94bp-564,
     0x1.413e9c5e27ec1p-624, 0x1.a96f147913d53p-843, 0x1.4f8decf687e76p-225,
     0x1.4f571f8182389p-999, 0.0, 0.0, 0.0, 0x1.077ff6c37a97dp-491, 0.0,
     0x1.149013d7bfac6p-109, 0.0, 0x1.e8425dc990ae1p-92, 0.0, 0x1.58f5cf52c881dp-335,
     0.0, 0.0, 0.0, 0.0, 0x1.ee7dfc5dccep-738, 0.0, 0x1.b261b4300a71fp-684, 0.0,
     0x1.1755780178f1ap-311, 0.0, 0x1.5ed945fda1228p-354, 0x1.a57b291bdf71ap-486, 0.0,
     0x1.c7a3c6c983ca9p-288, 0x1.1217bfe3c65adp-549, 0.0, 0x1.614c6a6047f23p-58, 0.0,
     0x1.7c990e93b455ap-128, 0x1.c962abb593395p-17, 0x1.b5159140ec27p-743,
     0x1.24eb3f8ed516ep-627, 0.0, 0x1.fafa5fba32b39p-103, 0x1.8cbbc5586c261p-110, 0.0,
     0x1.f80fdb045afccp-266, 0x1.ec69fb173eea7p-957, 0.0, 0.0, 0.0,
     0x1.a6a5990ae657ep-749, 0.0, 0x1.fa0d0a034ea88p-909, 0x1.00c3590759496p-603,
     0x1.b5ef1b2359a1ap-499, 0x1.86a2c1551b693p-939, 0x1.ff40523b95bf9p-855, 0.0, 0.0,
     0x1.62571c44f2121p-590, 0.0, 0.0, 0.0, 0x1.bc1a087dfb0cep-730, 0.0, 0.0,
     0x1.d37e59f0ac7bep-174, 0x1.ffa54644b2bffp-313, 0x1.e2643590398e6p-240,
     0x1.2839d8774c8a8p-823, 0.0, 0x1.740bf12d455f9p-190, 0x1.460cac1f9c03fp-215,
     0x1.1f3d79411b3a9p-962, 0x1.ce200b574703ep-892, 0x1.396057a620c8cp-892,
     0x1.ad9d31e75113dp-9, 0x1.12cba5a8938adp-599, 0.0, 0x1.64b8257a5b7dep-331, 0.0,
     0x1.16bc645ae4ff9p-665, 0.0, 0x1.084f27739a853p-1001, 0x1.bf6f55ab4dd33p-241,
     0x1.a12e2d3a1e7a1p-961, 0.0, 0.0, 0x1.3d2aa12ccecaap-346, 0x1.08702dc18a6fdp-79,
     0.0, 0.0, 0.0, 0x1.c252430ef884p-337, 0x1.e04681f84557dp-19,
     0x1.611dacc00d8d9p-331, 0.0, 0x1.1635bee1c864bp-270, 0.0, 0.0, 0.0,
     0x1.55a696dba19a8p-261, 0x1.65bb1a2a1de53p-840, 0x1.eaee1f670722fp-594, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.912d7370f65c5p-810, 0x1.b233ccd9b731ep-713, 0.0,
     0x1.f6444390b8068p-455, 0x1.48758a3a43a06p-255, 0.0, 0x1.ad26c36fc8102p-159,
     0x1.ec9dd6eff42bfp-845, 0.0, 0x1.a75db48145d59p-307, 0.0, 0.0,
     0x1.8e44cc7f0e5a5p-551, 0.0, 0.0, 0.0, 0.0, 0x1.b4f504bf5fa4bp-736, 0.0, 0.0,
     0x1.f14c5959c47d3p-618, 0.0, 0x1.521e308b7ee05p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2785673039352p-954, 0.0, 0x1.3777abe2e227bp-677,
     0x1.6d533babcb7f3p-367, 0x1.b22ba079eed66p-205, 0.0, 0x1.d1485aead7caep-998, 0.0,
     0.0, 0.0, 0.0, 0x1.a730beda8121dp-240, 0x1.6b182114f0179p-402,
     0x1.8e26e956da545p-706, 0.0, 0.0, 0x1.e4881acc1181bp-692, 0x1.86bce2b3979ep-701,
     0x1.2d9909c1cf06dp-261, 0x1.3173ccd5a6698p-470, 0x1.606e4de0e52c9p-606, 0.0, 0.0,
     0x1.8c8c2f1959ddbp-901, 0x1.239b62c7363f2p-530, 0.0, 0x1.b3371e8fee8c8p-447, 0.0,
     0x1.1e9428e40e3ep-446, 0x1.851b35e96050bp-611, 0.0, 0x1.04b842fd5e24ep-555,
     0x1.f2e116767b999p-390, 0.0, 0.0, 0x1.626d8814438e1p-623, 0x1.7afded1c7a5b6p-464,
     0x1.217ab8d581498p-463, 0.0, 0x1.6fa8ab875ee48p-726, 0.0, 0x1.e41496ae745b9p-621,
     0.0, 0x1.31980dca663cfp-831, 0x1.630bbfa99c72ap-825, 0.0, 0.0,
     0x1.de122ccd9702bp-453, 0x1.edbb9a2cab1f2p-20, 0.0, 0x1.fe30e8812456dp-945, 0.0,
     0.0, 0x1.f9876ed29fcc5p-948, 0.0, 0.0, 0.0, 0x1.63623c0cac51bp-561, 0.0, 0.0,
     0.0, 0.0, 0x1.92b2348825ec5p-728, 0x1.cc90271313824p-626, 0.0, 0.0, 0.0,
     0x1.e3f8703566e9p-122, 0.0, 0.0, 0x1.bb637bf30795dp-415, 0.0,
     0x1.fd297115d64f3p-411, 0x1.285108dc3bb16p-129, 0x1.9690595f902fep-885,
     0x1.734eb2e8533ffp-729, 0.0, 0.0, 0.0, 0x1.a9029534c0c59p-577, 0.0, 0.0,
     0x1.6b6bfb1f76705p-744, 0.0, 0x1.9a2f3643194a9p-462, 0x1.73e4005fd6946p-560,
     0x1.aab8a2fe63724p-613, 0x1.d186a835b31a3p-120, 0.0, 0.0, 0x1.de4228cdd8b07p-890,
     0x1.4021a72a9f1ap-263, 0x1.7611dea5c87abp-431, 0x1.496c1717f0dedp-68, 0.0, 0.0,
     0x1.c424b7b7ba268p-974, 0x1.01b8fd2671ff7p-882, 0x1.2589856cf3319p-525,
     0x1.5221626f2726ep-805, 0x1.6bfdd373e5315p-616, 0x1.55608b72fa565p-95, 0.0,
     0x1.8c9af4a3b7409p-595, 0x1.a971f34beccbbp-1015, 0.0, 0x1.366e38ac1da7fp-913,
     0x1.acd11aa84f39bp-150, 0.0, 0.0, 0.0, 0x1.3990a9cb08c44p-612,
     0x1.0e4e110802a96p-806, 0x1.c3613973aaf2cp-67, 0x1.ac3c6f90e1dfcp-912, 0.0,
     0x1.d9af8eb8291edp-178, 0x1.93e8d1ad5b1e4p-345, 0x1.907149859570cp-740, 0.0, 0.0,
     0x1.0ee59dd236af9p-574, 0.0, 0x1.b77d771a90629p-745, 0.0, 0x1.25a39a2ec9939p-796,
     0x1.19593fe4068efp-489, 0.0, 0x1.c6f12b9f9ed17p-846, 0x1.0fa40b01c33f2p-738,
     0x1.2ab075e5a467ap-37, 0x1.b63001a07b00dp-700, 0x1.34a1f140b81e1p-248, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ad5f0e8f947cp-1016, 0.0, 0.0, 0.0,
     0x1.ccbe17df4b402p-398, 0.0, 0.0, 0.0, 0x1.b287f9f6b902p-963, 0.0, 0.0, 0.0,
     0x1.c595d302894ddp-144, 0.0, 0.0, 0x1.30a2959522da7p-605, 0x1.d32bfd3faec97p-499,
     0x1.4071ee8354748p-879, 0x1.11cc9dbab3143p-767, 0x1.ec0a9d7b0e476p-4,
     0x1.76d673d3917aap-279, 0x1.b815c188ac27dp-780, 0x1.2ee77b1612a47p-461, 0.0,
     0x1.64bbd2dd273bfp-53, 0.0, 0x1.3d871b8036a38p-407, 0x1.601246dcabde5p-129,
     0x1.0f0f1c7729a96p-661, 0.0, 0x1.a48903b8974dp-311, 0.0, 0.0,
     0x1.02e8d57138aa5p-412, 0x1.fccca404ca9f6p-979, 0.0, 0x1.7d8bbce2de2bfp-390, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.67dcee9cedd64p-356, 0.0, 0.0, 0.0,
     0x1.d75844bfe250ap-534, 0.0, 0.0, 0x1.4543b28f1cf8dp-764, 0.0, 0.0, 0.0,
     0x1.3922b97a0d755p-514, 0.0, 0x1.4d6dfde78ba1cp-757, 0x1.940757bc49096p-758, 0.0,
     0.0, 0.0, 0.0, 0x1.c9cb2b6460d62p-278, 0x1.4a2595863757bp-499, 0.0, 0.0,
     0x1.aa227bd4df6bdp-380, 0x1.9d1a044290377p-219, 0x1.b2118743acbcap-588, 0.0, 0.0,
     0.0, 0x1.03976da430661p-854, 0.0, 0.0, 0x1.a6691d723766fp-663,
     0x1.332e7887129a2p-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9501c318f09b8p-331,
     0x1.49804e2775035p-926, 0.0, 0.0, 0.0, 0x1.5274437ab5581p-685,
     0x1.5953293ad666ep-603, 0x1.33a6eb483ea2p-747, 0.0, 0x1.b8d35c3e8fdefp-440,
     0x1.b78297ab6cbbp-75, 0x1.a683454f8e47ep-551, 0x1.17a9fc8eb8effp-386, 0.0, 0.0,
     0x1.1f5023a9f3159p-656, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2151b9dc40c2p-716, 0x1.f774305af2fb4p-179, 0x1.68748988f4419p-977, 0.0,
     0x1.3359701e8b7e8p-814, 0.0, 0x1.c96f6a88b5a06p-268, 0x1.74d2c96dbbbf8p-970, 0.0,
     0.0, 0x1.e1ff3adc2251cp-917, 0.0, 0.0, 0x1.082b6748ecd69p-242, 0.0, 0.0,
     0x1.9efceccc34b62p-261, 0x1.794cd7303df04p-831, 0x1.460f0b89a9f2fp-71, 0.0,
     0x1.743d0ed30e83ep-789, 0.0, 0.0, 0.0, 0x1.810b89d62caecp-505, 0.0, 0.0, 0.0,
     0x1.d6b65e0001143p-177, 0.0, 0.0, 0x1.3fbe7f43b672fp-322, 0.0,
     0x1.abc71c6c5f7d8p-883, 0.0, 0.0, 0.0, 0x1.a2d8d38e09f61p-956,
     0x1.d987a33e20648p-98, 0.0, 0.0, 0x1.fe981057ef7a3p-235, 0.0, 0.0, 0.0,
     0x1.3f10af231b45ep-526, 0x1.c6de40c4ae5b8p-744, 0.0, 0x1.dd28cddb7904bp-744,
     0x1.2fb2a07bb2022p-196, 0x1.ba6a8195b1ebdp-951, 0.0, 0.0, 0.0, 0.0,
     0x1.c52091e74230bp-104, 0x1.4522d8cd5be52p-742, 0.0, 0.0, 0x1.2446a94c80469p-867,
     0x1.07cb617cb5c44p-165, 0x1.5fc2bcbe0b68ep-220, 0x1.35c3ef68e8795p-402, 0.0, 0.0,
     0x1.7c202104b224ap-1015, 0x1.7606e54873e9ep-104, 0x1.f53ac17d984efp-209,
     0x1.105caee05f166p-69, 0x1.039269cce23fbp-466, 0x1.1880732ddcb05p-56, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9377bdba229bep-278, 0.0, 0.0, 0x1.9fdf68bfc47d9p-962,
     0.0, 0.0, 0.0, 0.0, 0x1.385ac6b1ee9bp-280, 0x1.71e202c4fc16bp-240, 0.0,
     0x1.514385b95c6bcp-819, 0.0, 0x1.ddd96529da2fep-50, 0x1.6a583b3b117ccp-831, 0.0,
     0x1.2325908072dbdp-309, 0x1.542127c2b72eap-399, 0x1.12edec8ecdb2cp-745,
     0x1.54e977c898887p-443, 0.0, 0x1.ede7074167e74p-910, 0.0, 0.0, 0.0,
     0x1.92398f67ae01fp-338, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d87f20921416p-163,
     0x1.3b3e6819f7a18p-877, 0.0, 0.0, 0x1.b81249f077f3ap-732, 0x1.429e673d9ab63p-923,
     0.0, 0x1.23b43f84d5f0dp-661, 0x1.ba85d2805ebdep-369, 0x1.bd6263080b8e5p-365,
     0x1.b53c0768114a2p-508, 0x1.7cb69edbcc37fp-196, 0x1.4328b762b971bp-859,
     0x1.a202d383eae63p-877, 0x1.8cd2e40385caep-579, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d946bee468601p-146, 0.0, 0x1.ff775e1881296p-647, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34cf721925f4bp-700, 0x1.964a10ebcfd88p-14, 0.0, 0x1.837bddedcbed9p-546, 0.0,
     0.0, 0x1.91e0e290cee7ep-787, 0.0, 0.0, 0.0, 0x1.5d8115f6238fbp-467, 0.0,
     0x1.1118d13867e07p-308, 0x1.ad7b345f2f76cp-985, 0x1.dfb640df1fff1p-18, 0.0, 0.0,
     0.0, 0x1.a62cd0ef35de2p-473, 0x1.bfedea002b558p-776, 0.0, 0x1.0e3ac299a8767p-818,
     0x1.344efa2f33262p-463, 0.0, 0.0, 0.0, 0x1.d7f08f834d7e2p-389,
     0x1.360bc44732be7p-736, 0.0, 0x1.c7cd8feaa6642p-680, 0.0, 0.0,
     0x1.fdc2b05b52c0dp-658, 0x1.e61d8c72d5ca2p-210, 0x1.91e5918200ce2p-237,
     0x1.2f500b7d4a5p-97, 0x1.7d2e840648ep-1019, 0.0, 0.0, 0x1.c427783a89742p-907,
     0x1.1518554ab349fp-805, 0x1.879ded3bb7412p-817, 0x1.ff4d726f41da3p-469,
     0x1.4d88a72623a08p-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b6c3359611502p-255, 0x1.324beaebf7205p-356, 0.0, 0x1.339a2a7720faep-926,
     0x1.41c5bc7a2fba2p-66, 0x1.0f7bae49da8d8p-291, 0x1.6c2e272ad4ea2p-735,
     0x1.14c9cffb6841fp-580, 0x1.502c69d560d38p-880, 0.0, 0.0, 0x1.a04bfb8f0303bp-586,
     0.0, 0.0, 0x1.bc159179cd857p-475, 0x1.31e7686535295p-704, 0x1.42a342ba367f3p-641,
     0x1.2c3796bc2331ep-997, 0x1.6a996c9c89d4fp-579, 0x1.0a1cb59996964p-914, 0.0,
     0x1.97da2f344a036p-672, 0x1.075cb6bb8d1e4p-866, 0x1.8b18c7d1fa87p-39,
     0x1.1bc43cad40526p-900, 0.0, 0x1.f599748b47111p-110, 0.0, 0x1.05765a90cc6cp-394,
     0x1.a0e279f840bd5p-998, 0.0, 0x1.f6a81bd9e246ap-553, 0.0, 0x1.5af1a090dfba4p-930,
     0.0, 0.0, 0.0, 0.0, 0x1.efeea81ef8e31p-147, 0.0, 0x1.57aa1c6135249p-192, 0.0,
     0x1.39a28437a85a4p-786, 0x1.598f89b5b7977p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.f6b7663b284ecp-272, 0x1.850f60f04d12ap-192, 0x1.585916a80d2a9p-156, 0.0,
     0x1.d2e452d50a9e8p-844, 0x1.49a32bc194d72p-915, 0x1.e99c085c316bdp-972, 0.0,
     0x1.95a642dc2ee1dp-574, 0.0, 0.0, 0.0, 0.0, 0x1.0d651db25d19cp-525, 0.0, 0.0,
     0.0, 0.0, 0x1.5e77fde20e62bp-350, 0.0, 0x1.8a63611de15b2p-108,
     0x1.c53e935c17eb5p-263, 0.0, 0.0, 0x1.c5585c12df3c3p-555, 0.0, 0.0,
     0x1.cee0dd6b6a14bp-929, 0.0, 0x1.0400e494d6cd2p-194, 0x1.dedbf7a5a258p-536, 0.0,
     0.0, 0.0, 0x1.7de6e9eded3ap-188, 0.0, 0.0, 0.0, 0x1.661d10e8eaa7cp-1008,
     0x1.7ef6aa00d2d26p-384, 0x1.f4f987e205889p-573, 0.0, 0x1.693b06d88056ep-991,
     0x1.33bf8e2d684e5p-47, 0x1.e23bcd25bf61bp-264, 0x1.8ad52c0ce0a54p-264,
     0x1.c9ce90becf384p-574, 0.0, 0x1.b77fa730b323fp-7, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee26a0f39040bp-508, 0x1.316da43679e56p-322, 0x1.52c461efc0bc6p-972, 0.0,
     0x1.2fe3b624690d6p-987, 0x1.86b797f36ad83p-849, 0.0, 0x1.9f20266b9a51bp-101,
     0x1.bb0878889d4b3p-494, 0x1.d8dd9dc58a41p-512, 0x1.6f78ce2356e32p-423,
     0x1.4aebd202e7e3bp-76, 0.0, 0x1.8b1022a6afa9p-350, 0.0, 0.0,
     0x1.f9780b7bf4654p-139, 0x1.0da126c6f5e63p-962, 0.0, 0.0, 0x1.520bf4d7247efp-499,
     0x1.54eda3041ed58p-12, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec88dedca497ep-794,
     0x1.707818eaa1528p-496, 0.0, 0.0, 0.0, 0x1.e3bf079aee72ep-570, 0.0,
     0x1.e4743a4aa4ff9p-93, 0x1.c71148b184b4dp-762, 0.0, 0x1.3bc786f5f35e2p-310,
     0x1.166c749cf9ba4p-993, 0.0, 0x1.d369dbbc74e0dp-893, 0.0, 0x1.e2a008a625e48p-874,
     0x1.aab70aef35283p-153, 0.0, 0x1.c1d23adf5c729p-238, 0.0, 0x1.f3c591e085a45p-275,
     0.0, 0.0, 0x1.bb3ecff528ddbp-40, 0.0, 0x1.a11eb16c07197p-815, 0.0
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
            tmp1 = Sleef_cbrtd2_u10avx2128(tmp0);
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
    printf("Sleef_cbrtd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cbrtd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
