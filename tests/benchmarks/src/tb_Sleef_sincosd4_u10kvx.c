/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd4_u10kvx.c --function Sleef_sincosd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.93393ccce4f21p-243, 0x1.e574be0506981p-586, 0x1.0192e27012782p-191,
     0x1.199223229958dp-909, 0.0, 0.0, 0x1.edf646630dfbdp-986, 0.0, 0.0,
     0x1.503a2b09bdddep-999, 0x1.5daf149d8650ap-754, 0x1.12a186db256ep-299, 0.0, 0.0,
     0x1.060f2b2096fe5p-619, 0.0, 0.0, 0x1.4d737b78ef387p-548, 0x1.f77f95b9c86b5p-368,
     0.0, 0.0, 0x1.b7d00e7b49f91p-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.480fd46843ac5p-613, 0.0, 0.0, 0x1.424efecb38c44p-738, 0x1.cf0927c54071dp-677,
     0x1.c5a2464b78d9cp-732, 0x1.5dfbe6a8a40c7p-886, 0.0, 0x1.142a0f75d19ebp-423,
     0x1.b838ca37716a7p-682, 0x1.f54713f5e7eb2p-709, 0.0, 0x1.0cbd4598bbc8fp-870, 0.0,
     0x1.ae40489154335p-718, 0x1.b6d56e7afa6d8p-983, 0.0, 0.0, 0x1.93006fade0523p-563,
     0x1.f86919cf0501fp-911, 0.0, 0x1.494b5390dd5bfp-323, 0x1.2e45702d191bp-753,
     0x1.ecb8b524ddb97p-906, 0x1.9fef236e2b6e1p-682, 0.0, 0x1.12dce9be35c51p-659, 0.0,
     0.0, 0x1.2c53bc5cd9c88p-599, 0.0, 0x1.86c15547ed6acp-877, 0.0,
     0x1.9f80df44e03f6p-771, 0.0, 0x1.11846754d46b7p-440, 0.0, 0.0, 0.0,
     0x1.0e57eeae840b4p-899, 0x1.6ba254a098143p-534, 0.0, 0x1.9387b34385307p-457,
     0x1.a94048ecdd96bp-924, 0.0, 0x1.a5468510317c8p-772, 0x1.63aa9f38da0aep-913, 0.0,
     0.0, 0.0, 0x1.f12e4b6317a45p-731, 0.0, 0x1.31888cacb0376p-932,
     0x1.c5c146e435a42p-847, 0.0, 0x1.2810f07a4bb48p-145, 0.0, 0.0, 0.0,
     0x1.1dd82ac4c88f5p-872, 0x1.e0b3d3a7c3bfp-545, 0x1.5ba8e60181402p-31, 0.0, 0.0,
     0x1.650ef002397d2p-865, 0.0, 0x1.56c9da81463c3p-317, 0x1.adc30811dde81p-620,
     0x1.3696521bcb548p-68, 0.0, 0.0, 0x1.d1766b7b1d30bp-137, 0.0, 0.0,
     0x1.0a47a0b38eb9cp-701, 0x1.fe6837a600c16p-682, 0.0, 0.0, 0x1p0,
     0x1.3f08aeae80691p-85, 0x1.609606977d8bp-881, 0.0, 0x1.aae89e16b37aap-152,
     0x1.ce35157d0c8acp-626, 0x1.73ca3291f1eabp-388, 0.0, 0.0, 0x1.fed2b21fa7bcdp-127,
     0x1.d7ffde875d5e4p-397, 0.0, 0x1.d4ad6086dc704p-217, 0x1.a6dfbb39e6d5ep-379, 0.0,
     0.0, 0.0, 0x1.d78d852210062p-379, 0.0, 0x1.744cab8707d7ap-427,
     0x1.06cb7b4ec637bp-695, 0.0, 0x1.37a1fac11e454p-186, 0x1.2d3af5af09affp-120, 0.0,
     0.0, 0.0, 0x1.7fc3408adc3a5p-356, 0.0, 0x1.bcd047e54c495p-98,
     0x1.01c1ff969a872p-361, 0x1.e32c17ec34febp-812, 0x1.648c0ab07a404p-380,
     0x1.86c141721e31p-405, 0x1.cc181dd394f76p-549, 0x1.c29d18683489p-696, 0.0,
     0x1.991a1b86cc213p-667, 0.0, 0.0, 0x1.fa2f48294a146p-245, 0.0, 0.0, 0.0, 0.0,
     0x1.538d0e6599ed9p-296, 0x1.8f0d0f6dd1cb3p-213, 0.0, 0.0, 0.0, 0.0,
     0x1.70c417cfeaa7fp-580, 0x1.26c0597e5b2f1p-391, 0x1.77451883859f5p-239,
     0x1.b568aa0044e72p-228, 0x1.f82f7e400d3f2p-876, 0x1.726c63937ce14p-586, 0.0,
     0x1.8a6c02789d56ap-441, 0x1.38ae3620d215p-368, 0x1.d349bafe501fp-918, 0.0, 0.0,
     0x1.d8ad67c6359e6p-528, 0x1.27ec1bfe90c32p-799, 0x1.8edb5cbb11735p-545, 0.0, 0.0,
     0x1.ccfaa10fae1b5p-864, 0x1.4d5917eef4183p-242, 0x1.bd21603e720dp-860,
     0x1.ef9ab4b02b50dp-1005, 0x1.b1596fccf4d25p-700, 0.0, 0x1.8caa4883ff49p-336, 0.0,
     0x1.b6527123b5c1dp-83, 0.0, 0.0, 0x1.41d3cb0c1a661p-591, 0.0,
     0x1.a79a66a6cf3bcp-801, 0x1.c01e9dc9c2eeap-540, 0.0, 0.0, 0.0,
     0x1.0d46bf5c28fd8p-816, 0.0, 0x1.d64e02ad66c05p-240, 0x1.5e9812869d65dp-304,
     0x1.c92b08d6cc3e8p-289, 0.0, 0.0, 0.0, 0.0, 0x1.a661f8e0c5ea5p-653,
     0x1.1f934c8b3f0cfp-541, 0.0, 0x1.af67f35c9dab9p-364, 0x1.7d40408152bfep-305, 0.0,
     0x1.77d3efb8f487cp-592, 0x1.54f911955987ep-247, 0x1.1e470892e34dfp-625, 0.0,
     0x1.91d2601b596eap-84, 0x1.6f5f2fce4071dp-877, 0.0, 0x1.8137d670929d4p-596, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.382893acb8042p-699, 0x1.5b64d081772ccp-467,
     0.0, 0x1.7d0e91fa089abp-106, 0x1.7bb538edfad8ep-335, 0x1.57a53bfb243c5p-365,
     0x1.4ccc4eab3065p-138, 0.0, 0.0, 0x1.115e7913a323ep-549, 0x1.3a659d4afa654p-977,
     0x1.231ab930442c9p-353, 0.0, 0.0, 0.0, 0x1.dc62fc8652632p-806,
     0x1.eb8bec87fb01cp-440, 0x1.23132aebca91fp-1000, 0x1.ae51138c1858ep-80, 0.0,
     0x1.dc769b538bdeep-454, 0.0, 0x1.76e3e6552fc98p-524, 0.0, 0.0, 0.0,
     0x1.3133a79ef7d0fp-267, 0.0, 0.0, 0x1.20af6e54b3808p-788, 0x1.3566ac438e9a2p-598,
     0x1.0f16850728552p-802, 0.0, 0x1.c6d522c9cb19dp-7, 0.0, 0x1.6edaa17b51822p-500,
     0.0, 0.0, 0x1.053d737b4da05p-711, 0.0, 0x1.66edb06297cfp-446, 0.0,
     0x1.f9b93caed6094p-43, 0.0, 0x1.1c1543224d8cbp-165, 0x1.2228e1a17a65dp-868,
     0x1.03c5d48c79029p-967, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9712b85cc568p-398,
     0x1.938b5f96d5153p-798, 0x1.a34211b11f885p-660, 0x1.ae77b8167ef83p-670, 0.0, 0.0,
     0.0, 0x1.4faaf4578c0f5p-434, 0x1.6551b270461dcp-196, 0x1.55e07834af0f1p-361, 0.0,
     0.0, 0x1.279462ac91bd6p-789, 0.0, 0.0, 0.0, 0x1.c78134b5c727ap-743,
     0x1.6fdb2c03337c4p-121, 0x1.40533851ba994p-244, 0x1.534cd99bff1fp-51,
     0x1.850f075805b6p-159, 0x1.b5e371a98ce7dp-391, 0.0, 0.0, 0x1.58a861511ad2cp-262,
     0x1.1bd3c326f9846p-362, 0x1.f5722ea7b90f8p-693, 0.0, 0x1.6de79d962cacfp-707,
     0x1.cb5d630c77a75p-743, 0x1.c3e98cc319916p-223, 0.0, 0x1.ab816fac751edp-73, 0.0,
     0x1.55baf7b91af7p-225, 0.0, 0.0, 0x1.3d21ea8fcf43fp-773, 0x1.a6513f9c66d4ap-650,
     0.0, 0.0, 0.0, 0.0, 0x1.4e24714836278p-477, 0x1.7b10cb0fbf457p-965, 0.0,
     0x1.5c384552acca8p-910, 0.0, 0x1.46d8c2fe022adp-461, 0x1.ee109b8c27bc9p-820,
     0x1.cf930b01ac9cdp-467, 0.0, 0x1.356d649e1cc9cp-135, 0.0, 0x1.0f35010a2e39ap-167,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed01ee705ab09p-154,
     0.0, 0x1.cae2b847d9428p-349, 0.0, 0x1.601b87bab2c38p-207, 0.0,
     0x1.44fb0ca975093p-181, 0x1.dbc95e2a0d81ep-383, 0x1.94f126aaebc4dp-686, 0.0, 0.0,
     0.0, 0.0, 0x1.399675e58066p-1006, 0.0, 0.0, 0.0, 0x1.9ac2a4da38299p-861,
     0x1.db14dc33fb029p-843, 0x1.00a26183cd60bp-779, 0x1.429e28c6a2631p-808, 0.0,
     0x1.65fd03d5bbb7p-233, 0.0, 0.0, 0.0, 0x1.3213f718cc8acp-183,
     0x1.38d2227388ce4p-407, 0.0, 0x1.451c60bf62226p-443, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df99c4254e54ep-662, 0x1.ce14c397a3a99p-67, 0x1.f15ccf52634cdp-571, 0.0,
     0x1.f165c84a7f84dp-240, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86e009767c585p-567,
     0x1.6754eb7b39a3bp-539, 0x1.55f90e8754454p-316, 0x1.4d14c4ae1411ep-33,
     0x1.edcdbfb3e4b58p-422, 0.0, 0x1.e9d7c51f031ebp-676, 0.0, 0.0, 0.0, 0.0,
     0x1.99d6ace680674p-257, 0.0, 0x1.42320c0ff1529p-902, 0.0, 0x1.914dfdba2aee6p-606,
     0.0, 0x1.25d5238af5f2fp-999, 0.0, 0.0, 0x1.c9af3de2f81ddp-541,
     0x1.197c888de8a66p-1001, 0x1.703ab8bcc6a16p-1006, 0x1.f3b1615e1b297p-570,
     0x1.ea789e57f24c8p-593, 0.0, 0.0, 0x1.a0e21b71b0481p-775, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8e38cb1f75be4p-570, 0x1.6b7cfe85fc232p-673, 0.0, 0x1.81bea09b9010bp-185,
     0.0, 0x1.8ba031ce80893p-902, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cf9d032de265ep-155, 0.0, 0x1.bb7fcad230128p-441, 0.0, 0x1.3c05d7b49cf0ep-993,
     0.0, 0.0, 0.0, 0.0, 0x1.55a12d74ea489p-112, 0.0, 0.0, 0.0, 0.0,
     0x1.e782beba0dedp-63, 0x1.3dd42a993c46p-306, 0x1.5cd7854c3b9fap-304,
     0x1.8ee557a697c0cp-864, 0x1.7859a76e3cf7bp-75, 0x1.fb5a5c1bbaeacp-881,
     0x1.cbf53257b20f5p-933, 0.0, 0x1.d67a1d53b5e06p-845, 0x1.5b99f77d59c57p-1017,
     0.0, 0x1.6013ccd470c46p-244, 0x1.ab22a4353438ap-402, 0.0, 0x1.696983d5d35f4p-201,
     0.0, 0x1.6b131282805ccp-31, 0.0, 0x1.8e9528671db5fp-692, 0x1.d820cb1c784d6p-881,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4214154f85a9p-428,
     0x1.63cd1abdac78p-733, 0.0, 0.0, 0.0, 0x1.ae274dddda63cp-557, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.95c2a92cfa918p-509, 0.0, 0x1.a803297c3c5f3p-497,
     0x1.a7e06db1eb12ap-544, 0.0, 0x1.4788b6a99a971p-594, 0x1.63f20ac55db38p-529,
     0x1.db523bf3a1c31p-115, 0x1.879610b5cf8f4p-874, 0.0, 0x1.c486b21a2b0ccp-492,
     0x1.bb39bfbdc75c8p-551, 0.0, 0.0, 0x1.faa0fd5484604p-932, 0.0,
     0x1.bd614d5457e6cp-602, 0x1.8b898ed396719p-763, 0.0, 0x1.ff718c91e6cb2p-433,
     0x1.a82e8b9a1ee86p-90, 0x1.97d1e4111acc7p-438, 0x1.99601cd1f228ap-242,
     0x1.648669403b387p-718, 0.0, 0x1.911f445b41145p-473, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.afe8ac22b131ap-900, 0x1.fbbe4775ce30ap-312, 0x1.9429c6d1072edp-19,
     0x1.38efec931e5f9p-251, 0.0, 0x1.aa706e938d3fdp-54, 0x1.f04c5102181ddp-998,
     0x1.70b1eeae9d2e8p-520, 0.0, 0x1.cc44486c1c965p-56, 0x1.c1e2c7aeab0a2p-731,
     0x1.145ad5f40ca4bp-587, 0.0, 0x1.e50c40427a3aap-479, 0x1.e46f31fe64b71p-848,
     0x1.050c3897279d3p-987, 0x1.4df3e1210eac1p-484, 0x1.e90fbff3027aap-470, 0.0,
     0x1.c130de1d2d54p-992, 0x1.4cb66594b8a3cp-915, 0.0, 0x1.92d07d81f8087p-1002, 0.0,
     0.0, 0x1.4828830a6d775p-166, 0.0, 0x1.c35d722725cb2p-412, 0x1.263cf9147c4fp-970,
     0x1.193c175d42e87p-15, 0x1.f8c5e409807f3p-339, 0x1.d1cbbc4043728p-868,
     0x1.31ac520e3abcdp-48, 0x1.52b44b65511a3p-250, 0.0, 0.0, 0x1.2882df271dec9p-160,
     0.0, 0x1.6eab6e3e63924p-372, 0x1.f4418d65955dfp-106, 0x1.46d8af53705b1p-565,
     0x1.1545e90771676p-121, 0x1.3f7e2e80c4ebap-221, 0x1.fe34dd1597p-353,
     0x1.db4055a890118p-815, 0.0, 0.0, 0x1.c00f2c4619132p-860, 0x1.cc9cc692fe89dp-225,
     0x1.267ad2fcf205dp-754, 0x1.8d76e1431059ep-104, 0x1.2e909efd6b3fdp-502,
     0x1.3b2c00584046ep-304, 0x1.bb8d44a763669p-287, 0.0, 0.0, 0.0,
     0x1.6ce356ff7bbfap-406, 0x1.3eb39e97cb085p-574, 0.0, 0.0, 0x1.4cd0d8c92d4dfp-412,
     0x1.8c7129fdcdd46p-934, 0x1.2b11e0688ffc9p-474, 0.0, 0.0, 0x1.bab5b95ce00fbp-396,
     0x1.33f03c3b4ff07p-171, 0.0, 0.0, 0.0, 0x1.0a62453b7b63dp-347, 0.0, 0.0,
     0x1.dafe2f43f820ep-472, 0x1.cdb24f3aff16p-527, 0x1.6d1ddd901b51ap-263,
     0x1.40cd5138f2556p-777, 0x1.5902a81bce9bfp-131, 0x1.46de5094859bfp-541,
     0x1.f0073880bb3edp-854, 0.0, 0x1.c625e4e9483c5p-144, 0x1.5b632780795b2p-923,
     0x1.5fe5f6ba12807p-584, 0x1.091a952ce86bfp-631, 0.0, 0.0, 0x1.0d894d6b6db88p-630,
     0.0, 0x1.f7e4cae2c2a3fp-994, 0.0, 0.0, 0.0, 0x1.6bf812efce3c2p-858,
     0x1.6886c98c05b32p-948, 0.0, 0.0, 0.0, 0.0, 0x1.340de232f84bfp-289, 0.0,
     0x1.4ecb9e1a6e8d6p-199, 0x1.02e99d6034998p-435, 0x1.bd7aeccbdc18cp-970,
     0x1.796e00b9a7c08p-764, 0x1.a54f4ed1bbee2p-456, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.0bc7889d5938ep-558, 0x1.6897b9a86212ep-343, 0x1.493b29016a262p-477, 0.0, 0.0,
     0x1.df3f075ad61a2p-588, 0.0, 0x1.57ae06e7868a7p-700, 0x1.86787f5836892p-197,
     0x1.77b64a233f049p-573, 0x1.fdb7510f14fddp-623, 0.0, 0x1.043b2bc59a1fap-836, 0.0,
     0x1.6946b19ca6445p-947, 0.0, 0.0, 0.0, 0x1.a88381f3a571ap-868, 0.0, 0.0,
     0x1.1f056faf0c317p-31, 0.0, 0x1.ec7d60d62feacp-118, 0.0, 0.0, 0.0,
     0x1.eb4f7426119bdp-773, 0.0, 0.0, 0x1.5c910a8aa1a98p-681, 0.0, 0.0,
     0x1.c35e36933c26cp-870, 0x1.3824d0aecf7ep-517, 0.0, 0x1.612cbc1024a21p-834, 0.0,
     0.0, 0x1.960f5ad0f808cp-303, 0x1.ca3048487eb5fp-497, 0x1.f1affde4b4021p-185, 0.0,
     0x1.650cac803e065p-124, 0.0, 0.0, 0.0, 0.0, 0x1.9eaac1cf72a28p-979, 0.0, 0.0,
     0x1.7be3add1d6b3cp-986, 0x1.e5553e79193a5p-455, 0.0, 0x1.607fccccec3e1p-372,
     0x1.81aa7f60b5b3ep-265, 0x1.07b2db4afda63p-581, 0x1.df775362889d6p-916,
     0x1.65cefbdb038bfp-706, 0.0, 0.0, 0x1.3dad105b34a6dp-966, 0x1.6417120d273cdp-989,
     0.0, 0x1.55f15066f8332p-765, 0x1.ed13c7e60ff0cp-366, 0.0, 0x1.5a24a51423a96p-971,
     0x1.c6b904abb60ebp-841, 0x1.49b999c832125p-204, 0.0, 0x1.a369438108bfp-1012,
     0x1.4f9373a302f37p-684, 0x1.23fe32381f0bfp-930, 0x1.f5bbe6cadf2edp-279, 0.0,
     0x1.243f04cbd9abfp-979, 0x1.601ee32c10dd7p-1022, 0.0, 0x1.9a5b7bab4a5fcp-172,
     0.0, 0.0, 0x1.ff16a180c3b17p-269, 0.0, 0x1.f454b2c3a629fp-369, 0.0,
     0x1.abf79afb148b1p-45, 0x1.a1c36cd51fe8ep-630, 0.0, 0.0, 0x1.46402a6a910dcp-683,
     0x1.5aecf9348a184p-157, 0x1.226d6fbef873fp-887, 0.0, 0x1.b47c26e03b2dcp-538, 0.0,
     0.0, 0x1.ed98edb2820a4p-639, 0.0, 0x1.9567e298b3883p-159, 0.0, 0.0, 0.0,
     0x1.4f03b476aa399p-418, 0x1.ebd2b5f437be1p-438, 0.0, 0.0, 0.0,
     0x1.6dcdeffef1c57p-564, 0x1.160e51d7da30cp-745, 0x1.4bd530fea58bbp-187,
     0x1.2830c3ff4259ep-334, 0.0, 0x1.ea70f02ad0217p-926, 0x1.dda079f279bfap-960, 0.0,
     0x1.f0a62c91026bap-459, 0x1.830b24a62413fp-2, 0x1.96b08f97955d8p-881, 0.0,
     0x1.c211fa4265a32p-860, 0.0, 0x1.2b2b7dde828fep-803, 0x1.59fa13a4d204fp-904, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.217d07c1bb0eap-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.24e0455bbf3f5p-391, 0x1.ad2be6c84e424p-824, 0.0, 0x1.a024f1b8d480bp-231,
     0x1.57c558816e173p-1009, 0x1.efcbd809f3341p-656, 0x1.c26a98f6a710dp-488,
     0x1.060b952e33135p-148, 0.0, 0.0, 0.0, 0x1.fb3c970a4167ap-100, 0.0,
     0x1.94e0009efe6p-45, 0.0, 0.0, 0x1.d4b18376b678ep-57, 0x1.8f4839a27ce8p-102, 0.0,
     0.0, 0x1.bb8a08f537a92p-757, 0x1.0a20608e9522ep-469, 0.0, 0x1.9a191ca399192p-953,
     0.0, 0.0, 0x1.5259da0c455f6p-541, 0x1.4130b2e62c43ep-795, 0.0,
     0x1.f2c2b3028419dp-898, 0x1.c0148907b8f98p-412, 0x1.4e2da4c2aa1bp-145,
     0x1.4d8013e1c7c3bp-825, 0.0, 0x1.e388ab7b8fc0cp-517, 0x1.1948c528f114fp-833, 0.0,
     0x1.2f0476520a835p-718, 0.0, 0.0, 0x1.4e85b69fd08a4p-290, 0x1.5029f66185b29p-750,
     0x1.7ff03011f17f5p-498, 0x1.ff0b0f87b0837p-270, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c2772d5993a6p-35, 0x1.bcf808fc04a12p-107, 0.0, 0.0, 0.0,
     0x1.3d7b4a1e4d5b3p-954, 0x1.44079bafc622fp-699, 0.0, 0x1.3e8293fae1897p-753, 0.0,
     0x1.845ad539f3428p-711, 0x1.eafe94a6ab1dap-227, 0x1.5142f1cee825dp-954, 0.0,
     0x1.f09fb4bdb4ee8p-69, 0.0, 0.0, 0.0, 0x1.a9f1592188af2p-759,
     0x1.7e8628e4abca4p-216, 0x1.6f126b9211e92p-86, 0x1.1503b05613283p-281,
     0x1.cd118322ee1d9p-879, 0x1.2dbea594aa37cp-334, 0x1.a760a5cd5b3edp-447, 0.0,
     0x1.5d21fc0e4661fp-817, 0x1.c9cb89d629ebbp-919, 0.0, 0.0, 0.0,
     0x1.d46ad18e83513p-995, 0.0, 0.0, 0x1.661423fca6c8cp-372, 0x1.25c7b96b204fbp-768,
     0x1.8df56a78999ddp-230, 0.0, 0x1.be87ce9c1bbe1p-490, 0x1.611fedcb08404p-335, 0.0,
     0.0, 0x1.deed99689d25bp-698, 0.0, 0.0, 0x1.8ab983a5349f9p-150,
     0x1.a485526c5bbd2p-510, 0.0, 0x1.da33c7d24d364p-695, 0x1.b5a8ed0742b2fp-287, 0.0,
     0.0, 0x1.7692225375be4p-987, 0x1.16d6d59d6a5ap-386, 0x1.29f8d95e8f2dbp-800, 0.0,
     0.0, 0x1.07ea6948d17e1p-905, 0x1.189bd3539265ap-732, 0.0, 0.0,
     0x1.4ee6a085cb5e7p-234, 0x1.11e9a60fd3447p-725, 0.0, 0x1.cdbecfbbd10a8p-178, 0.0,
     0x1.89babdea6dae7p-971, 0x1.e86d62b97b8cfp-848, 0x1.39f9bf4f7c1b9p-690, 0.0,
     0x1.c7201b7a5ed73p-946, 0.0, 0x1.5f6e6c145aecep-996, 0.0, 0.0,
     0x1.e3bb14beae868p-954, 0.0, 0.0, 0.0, 0.0, 0x1.90fc1d3f3ceb9p-547, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.551b6c3c74aebp-35, 0x1.8f858964972f8p-701,
     0x1.5f8a7872cc515p-270, 0.0, 0x1.406f4e3a0a1c9p-530, 0x1.22396cbcfc185p-899,
     0x1.efbd9d923294dp-313, 0.0, 0.0, 0.0, 0x1.3a502becaccccp-736,
     0x1.76534fcbfab7cp-983, 0.0, 0x1.8c4890cd4c03fp-624, 0.0, 0.0,
     0x1.0d49d6d98d2e2p-749, 0.0, 0x1.4ece75676a754p-716, 0.0, 0x1.577854552ab39p-242,
     0.0, 0x1.4de1a0f2ec377p-750, 0.0, 0.0, 0.0, 0.0, 0x1.52fb5ad7a6fa9p-956,
     0x1.2fe2f64e1856bp-732, 0x1.43a8a9fef4a5cp-220, 0.0, 0x1.9e582f9fb7c76p-686,
     0x1.872e8329e11dap-870, 0.0, 0x1.a87741291f5b4p-959, 0x1.b44c72c8db9fbp-429,
     0x1.a56c3deabdc45p-224, 0x1.717c712db3526p-837, 0x1.46b6de5c09cafp-514, 0.0, 0.0,
     0.0, 0x1.8c470c74ca251p-1004, 0.0, 0.0, 0x1.8dec8c6adba1cp-659, 0.0, 0.0,
     0x1.73a2335229d01p-424, 0.0, 0.0, 0x1.4ddc1852c7c8cp-154, 0x1.c566a12d428e2p-463,
     0x1.938ec3405afcep-628, 0.0, 0.0, 0.0, 0.0, 0x1.84d286891e46ep-71,
     0x1.56b551ed88e9cp-229, 0x1.954dfc25fdc6bp-297, 0.0, 0x1.a4aeefd3f66e5p-568,
     0x1.7939e71ca1556p-503, 0.0, 0x1.128c8390acd84p-975, 0.0, 0.0,
     0x1.797fc514d04ddp-683, 0.0, 0.0, 0.0, 0x1.807621a889a43p-200,
     0x1.6c0eee2742858p-818, 0.0, 0x1.c736b4a5b8e4fp-61, 0.0, 0.0,
     0x1.70cc553682f91p-959, 0x1.029a49618896p-891, 0x1.11eccfe61ad18p-783,
     0x1.933d289d048a4p-726, 0x1.6b80bdd7aef77p-1008, 0.0, 0x1.9855350263d55p-369,
     0x1.023c2c17bcf86p-712, 0.0, 0.0, 0x1.2769f844ce0ccp-1008, 0.0, 0.0,
     0x1.c8d60c623ac73p-906, 0.0, 0x1.bc23d127c98e2p-641, 0.0, 0x1.13c9ee3389fc1p-283,
     0x1.3890171320126p-775, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_sincosd4_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd4_u10kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
