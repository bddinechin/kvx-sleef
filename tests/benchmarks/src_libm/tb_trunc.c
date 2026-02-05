/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_trunc.c --function trunc --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0.0, 0x1.2b3aa9ea2db3p-1013, 0.0, 0x1.a7567c7b3e018p-638, 0.0,
     0.0, 0x1.926acd4984477p-912, 0x1.0f4ecbdcccd79p-807, 0.0, 0.0,
     0x1.51b045375b66ep-728, 0.0, 0x1.f6f3f56884fe6p-626, 0.0, 0x1.8782187101235p-335,
     0.0, 0x1.9e2fdafeeb6b3p-303, 0.0, 0x1.54dbd0e935657p-251, 0.0, 0.0,
     0x1.c60fdd6151de7p-999, 0.0, 0.0, 0x1.d28331b8a31c9p-521, 0x1.98d6fda3c167bp-571,
     0x1.01a0c2185ff95p-223, 0.0, 0x1.7cf8606058b91p-744, 0x1.1fc40bd228d62p-890,
     0x1.fdeb39ead472fp-398, 0.0, 0x1.e4a0258c8d04bp-591, 0x1.67bb630016578p-892,
     0x1.1a21c0d52c4efp-260, 0x1.75d488aa0b74ep-200, 0x1.2c4318289b21p-409,
     0x1.00fbc4f2b0abcp-586, 0x1.83e8c45afd1a6p-751, 0.0, 0x1.3be0a862cdf83p-426, 0.0,
     0.0, 0x1.7c70c8599ce32p-470, 0.0, 0x1.710d1931c66bcp-618, 0.0, 0.0, 0.0,
     0x1.245f3ff73f552p-867, 0.0, 0x1.13ffa45fc5d02p-476, 0x1.178708095a19ap-991,
     0x1.4a43189c7b2e7p-748, 0x1.84e7ee890550bp-314, 0.0, 0x1.7601a3039a8fdp-820,
     0x1.99d67ed6998afp-691, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca6139497e30ep-183, 0x1.ec8792253f28dp-28, 0x1.2a078b64a16a2p-188,
     0x1.29abee045277ep-460, 0.0, 0.0, 0.0, 0.0, 0x1.de5e1bf749775p-459,
     0x1.217cd7a14e09dp-380, 0.0, 0.0, 0x1.a683a9b565c9ap-114, 0x1.9be9d7e457b85p-473,
     0x1.3a87806f23bdep-739, 0x1.2f371a74fd388p-205, 0.0, 0.0, 0x1.1acddf718911cp-588,
     0.0, 0.0, 0.0, 0x1.27bfcac6fc164p-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d9318e3f9aa05p-718, 0.0, 0x1.75d65c1859ee9p-644, 0x1.f28b116d3ef6ep-381,
     0x1.92bc5eb04f267p-856, 0x1.2cb7ac59f9a07p-129, 0x1.0cd3e7a5b853bp-955, 0.0,
     0x1.5c8ca69641069p-294, 0x1.e71117c2d66p-964, 0x1.b3b84c08be4f6p-522,
     0x1.cce7f29785a23p-892, 0x1.b16c868eb12d9p-709, 0.0, 0x1.a16a89f76283dp-360, 0.0,
     0.0, 0x1.02f87bbd4d936p-514, 0x1.05bea41cecbe8p-186, 0x1.4a3d108ecd45dp-430,
     0x1.1f1ed1443b12ap-566, 0x1.0751212672f9cp-785, 0.0, 0x1.c80dc35f29671p-820,
     0x1.1a0a71a8467f9p-486, 0x1.9627cf3b8089dp-762, 0x1.8d4cfd27a940ap-188,
     0x1.f366fb5da4a11p-54, 0.0, 0.0, 0x1.26969f9743824p-405, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d23d8e8926d8p-868, 0.0, 0x1.c9e2ca7c93277p-730, 0.0, 0x1.ded7123766a43p-912,
     0x1.9735593ad2e61p-202, 0.0, 0x1.7e5cdbe9bf8d1p-125, 0.0, 0.0,
     0x1.1e335987b77e8p-36, 0.0, 0.0, 0.0, 0.0, 0x1.cae0b1ef4eaf8p-854,
     0x1.2f8f502333607p-548, 0.0, 0x1.84792e7b5154dp-897, 0.0, 0x1.6bc615bda5b4ap-645,
     0x1.b0efb807f29cp-945, 0.0, 0.0, 0.0, 0.0, 0x1.77b7013afcb5p-492, 0.0,
     0x1.d50b7ab8e131dp-414, 0.0, 0.0, 0x1.fdf6acb548fcfp-1000,
     0x1.f9c4116c37615p-658, 0x1.5e32e33a0357dp-929, 0x1.da7ecad92103cp-643, 0.0, 0.0,
     0.0, 0x1.130b0961f5ae3p-127, 0.0, 0.0, 0.0, 0x1.6c5e92bd72002p-858,
     0x1.ff1ae14835d38p-1011, 0.0, 0.0, 0x1.35b070b1f4a26p-219, 0.0, 0.0,
     0x1.cbf951c9c126cp-99, 0.0, 0x1.919bc093c1d16p-626, 0.0, 0.0,
     0x1.9399692aa114p-552, 0.0, 0.0, 0x1.f3c8aca44b3f6p-180, 0x1.4fed370cb3899p-902,
     0.0, 0x1.1d1fc01bfbe18p-1015, 0.0, 0x1.356ff0fb4843ep-575,
     0x1.faa037c340d98p-1000, 0.0, 0x1.06bae47c8ab1fp-924, 0x1.a9e19732ce517p-119,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe16383acf318p-133, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.91fbad81ec33ep-469, 0.0, 0.0, 0x1.011937574265ap-759,
     0x1.0b574895b4c0cp-205, 0.0, 0.0, 0.0, 0.0, 0x1.04b9fb280bc87p-77,
     0x1.e84262199ca75p-797, 0.0, 0x1.550201d7dc179p-707, 0x1.28ab180849e4dp-794, 0.0,
     0.0, 0x1.a59b9804222f1p-735, 0x1.43dcd0271560cp-255, 0x1.ee7c7ef731d61p-320, 0.0,
     0.0, 0x1.8be9913c4bb9p-99, 0x1.a95deea1d6bdbp-46, 0x1.5c3359048fd8cp-543, 0.0,
     0x1.3b3492966e5b9p-263, 0.0, 0.0, 0x1.636270af1ba61p-775, 0x1.7bf98729e4e05p-511,
     0.0, 0.0, 0x1.7950c322d1559p-382, 0x1.4e00477d490d6p-991, 0.0, 0.0,
     0x1.d15c46962d034p-961, 0x1.3156879cc9ad8p-321, 0x1.0261a8897400bp-550, 0.0,
     0x1.df42982203e41p-12, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c82b292dcb2a4p-723, 0.0,
     0x1.c9c929edf4309p-289, 0x1.9092ad80a618cp-896, 0.0, 0x1.d6155453dca9bp-305,
     0x1.2285cd1e3a9a8p-236, 0x1.7527ce22bd9fcp-180, 0.0, 0x1.c3adfd2019026p-159, 0.0,
     0.0, 0.0, 0x1.7068536007917p-617, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5932f5742e37p-641, 0.0, 0.0, 0x1.dabf32beea9cdp-919, 0.0, 0.0,
     0x1.81ae4b8312083p-44, 0x1.74f9cf4ac1865p-494, 0x1.97984405019d4p-610,
     0x1.284c9337d463p-950, 0x1.d5eba98b90e9fp-548, 0.0, 0x1.b98121bf79f52p-93, 0.0,
     0x1.960eff448df2dp-759, 0.0, 0.0, 0x1.4f82928b68f7ap-591, 0x1.37c1b8b56ca05p-747,
     0.0, 0.0, 0.0, 0.0, 0x1.58ae65ab36092p-871, 0.0, 0x1.3be7d43436865p-884, 0.0,
     0.0, 0.0, 0.0, 0x1.fb73202defdbap-465, 0x1.e6d1943a7c862p-967,
     0x1.d3629fffec9c5p-575, 0.0, 0.0, 0.0, 0.0, 0x1.3913f61fe89abp-51,
     0x1.e8b2c467919c8p-777, 0x1.662bcd49c056dp-570, 0x1.f0521b333b5ep-387,
     0x1.b045d716091ebp-939, 0x1.ae45cb7f47b41p-842, 0x1.3378a5c7cc7f3p-823,
     0x1.82ffd875d0fbep-527, 0.0, 0x1.76b791107e13p-145, 0x1.0c9af12a50bcbp-261,
     0x1.84e0a5a49976p-798, 0x1.5a1e3a3c71463p-755, 0x1.e46d6ef12f5c7p-755,
     0x1.ff5f05521704p-689, 0.0, 0x1.218e71b806d5p-147, 0x1.f862eccbce867p-215, 0.0,
     0.0, 0.0, 0x1.ac5aa0b81f6cbp-1015, 0.0, 0.0, 0x1.3aa47aa667054p-913, 0.0,
     0x1.c235c4010c722p-750, 0x1.c26c7fe895581p-397, 0x1.914813bc62ecbp-911,
     0x1.bc0252f8c204ap-460, 0.0, 0x1.ef4ab4a23dc15p-860, 0.0, 0.0,
     0x1.6084a24edb0bp-808, 0.0, 0x1.18218af06d534p-765, 0x1.f96028128d164p-350, 0.0,
     0.0, 0.0, 0x1.ea4cebccb1dd2p-672, 0x1.fd28feed3a92bp-768, 0.0,
     0x1.e78e69d2300a5p-413, 0x1.985843cef7451p-719, 0x1.159b959cdf881p-431,
     0x1.f9a2b714184c7p-324, 0x1.05efad6f59fcp-53, 0.0, 0x1.9e0707b3a1d18p-510, 0.0,
     0.0, 0.0, 0x1.0bcfcebb7a221p-357, 0x1.0f46379b310c7p-880, 0x1.6f7833244e0b4p-752,
     0x1.bda1970ce770ep-766, 0x1.90843c52cd274p-725, 0x1.652aac5b70427p-654,
     0x1.0d9ddf418e672p-673, 0x1.9c5e668fe3708p-287, 0.0, 0.0, 0x1.2f9d8d65625b5p-628,
     0x1.ae0601280733fp-978, 0.0, 0.0, 0.0, 0x1.c960cc847fb7cp-558,
     0x1.cf4bfe1b099e5p-309, 0x1.0424d241844b3p-840, 0.0, 0x1.26452880c065bp-599,
     0x1.c1ef23632d09cp-298, 0.0, 0.0, 0x1.fa90edc399cd6p-360, 0x1.22d63cfa25d22p-576,
     0x1.8c369e358de2cp-348, 0x1.afc83adb3f3bdp-280, 0x1.f72e7715e44b3p-725,
     0x1.5681068494235p-426, 0.0, 0x1.b44585cb04b56p-622, 0.0, 0x1.d2deeb441a66ep-156,
     0x1.3385ab204cae8p-65, 0x1.ccc15b46ccf0fp-529, 0.0, 0x1.04e5b2c3ccd56p-752, 0.0,
     0x1.2562b7b1de4dap-469, 0x1.3edf83d60113cp-992, 0.0, 0x1.79923e3c50ed3p-938, 0.0,
     0x1.e6efe27282546p-660, 0.0, 0x1.abe6a6f6e7749p-913, 0x1.caa7299f3b9b6p-845,
     0x1.69c07bb5a13bep-349, 0.0, 0.0, 0x1.263241cb5d0cp-448, 0x1.5087aeef7d718p-439,
     0x1.7a9d5db62eedfp-484, 0.0, 0.0, 0x1.47e8444d5f7d4p-62, 0.0,
     0x1.da06d635114b7p-429, 0.0, 0.0, 0x1.5ebbb1a7d2a9dp-502, 0x1.77402bdc612c9p-512,
     0x1.8bfe9768efad2p-592, 0.0, 0.0, 0.0, 0x1.e6610df215eebp-676, 0.0, 0.0,
     0x1.5103355a86785p-142, 0x1.2cb29d10cd51ap-640, 0x1.efc082ead3521p-1021,
     0x1.ade45ecb6e463p-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54fc00f66eccep-226, 0.0,
     0x1.dca1a31dd5da9p-1005, 0x1.4ffe5e285ea5cp-83, 0x1.47c67df74723ap-275,
     0x1.2ec9f3918ea1ap-843, 0x1.5d4a9607b5bbp-983, 0.0, 0.0, 0x1.d9de9826fd2fp-919,
     0x1.8e9da51052deap-805, 0x1.67e8908a652fap-372, 0.0, 0.0, 0.0,
     0x1.a556a7872f3e8p-362, 0.0, 0.0, 0.0, 0x1.d105b8fe0374cp-25,
     0x1.caa293817bfe3p-509, 0.0, 0.0, 0x1.6cb20632dcaf7p-508, 0.0, 0.0, 0.0,
     0x1.6ff5ce485e2e5p-161, 0.0, 0.0, 0x1.631e8e991b8c6p-764, 0x1.64f176e602e21p-306,
     0x1.44463f1b8c3abp-1019, 0x1.e185d5ed13936p-951, 0.0, 0x1.3da29a886e578p-978,
     0x1.ad7deaf3c0cebp-396, 0x1.e06374c473a23p-21, 0x1.929feff04b938p-411, 0.0, 0.0,
     0x1.33457927f7d7p-781, 0x1.7eacc54ddb746p-592, 0x1.fb5044fd1235ap-47, 0.0, 0.0,
     0x1.576bef1afb25ap-109, 0x1.03e241a8accdfp-552, 0x1.008c74fd917f2p-388, 0.0, 0.0,
     0.0, 0x1.e977179b86695p-701, 0.0, 0.0, 0x1.09636a5fa5e05p-157,
     0x1.3b32582636c63p-119, 0.0, 0x1.d35f2758c395fp-914, 0.0, 0.0, 0.0,
     0x1.03a5f4a9f3fd2p-430, 0x1.78e39fa78c262p-362, 0.0, 0x1.2786f61c8bbd3p-695,
     0x1.17729eb82e2b5p-649, 0.0, 0.0, 0x1.dbb7de6d2e02p-136, 0.0, 0.0, 0.0,
     0x1.6f39049091e4ap-71, 0x1.2d3b0b0a785e8p-443, 0x1.f61914b7721b3p-28, 0.0,
     0x1.1d1f91bde07f4p-518, 0x1.fc8548bd19c0ap-141, 0x1.2a5fc1e6b811dp-361,
     0x1.ba5caf3cf3627p-298, 0x1.468bcfdb8c6fdp-574, 0.0, 0.0, 0.0, 0.0,
     0x1.4e105b155c6a9p-883, 0.0, 0.0, 0.0, 0x1.111f6a213026bp-700,
     0x1.d915b8a9da4ddp-969, 0x1.8ff6b71ee4247p-191, 0.0, 0.0, 0x1.dac577b2e1449p-64,
     0x1.7dd2dfa45d7c1p-598, 0x1.0751b2ae7ab52p-392, 0x1.c34c10a4e8091p-306, 0.0,
     0x1.462017b04850fp-561, 0.0, 0x1.0d6feece12921p-273, 0x1.fa55f2ad83012p-993, 0.0,
     0.0, 0.0, 0.0, 0x1.146a9470472c1p-253, 0x1.a050d9e000043p-393, 0.0,
     0x1.e4b3f98da74b7p-105, 0.0, 0x1.b3e4c23b1489bp-958, 0.0, 0.0, 0.0,
     0x1.d9469a259413bp-170, 0.0, 0.0, 0x1.9d31df4c12b3cp-817, 0x1.5c2160eb6af8p-331,
     0x1.04e17b4739f41p-375, 0x1.448f64ad0e8cep-283, 0.0, 0x1.3956ce20b2318p-713, 0.0,
     0.0, 0.0, 0x1.1bf54f56ef9cdp-329, 0x1.6a473227c8c8p-500, 0x1.23a13077af279p-840,
     0.0, 0x1.f0a3e6bde577dp-563, 0x1.e84bc99325903p-443, 0.0, 0x1.d0b6fbda41e73p-14,
     0.0, 0x1.2f65c649b75aap-824, 0x1.df8c34ff1501bp-333, 0x1.553feabd65d1ap-379, 0.0,
     0x1.c5668738ec937p-67, 0.0, 0x1.8c11b85e2594fp-614, 0.0, 0.0,
     0x1.42dfeacc1b845p-73, 0.0, 0.0, 0x1.fdcd11d9e461p-83, 0x1.a000f9db010c6p-413,
     0x1.267f199225c1p-278, 0x1.fb724f98317e1p-968, 0x1.93590ce080b52p-74, 0.0,
     0x1.36f022ca37844p-577, 0.0, 0.0, 0.0, 0x1.953f712c8105ep-591, 0.0, 0.0, 0.0,
     0x1.5abad169abc6ep-510, 0.0, 0x1.d2a01319bf912p-662, 0x1.21f040cfdecf8p-465,
     0x1.a99efc6506f4bp-715, 0x1.db65ef0c13255p-353, 0x1.545c873fa12fbp-642,
     0x1.2a635d040042bp-795, 0.0, 0.0, 0.0, 0x1.f535b53ffbdc8p-113,
     0x1.33fa6ae9e8163p-71, 0.0, 0x1.286b8d32d18abp-657, 0.0, 0.0,
     0x1.2521f5fdb2ba7p-269, 0.0, 0x1.3763374f3850dp-737, 0x1.c19459a77e8d8p-416,
     0x1.298339aa8948cp-1015, 0.0, 0.0, 0.0, 0x1.276daac3c79e2p-655, 0.0,
     0x1.98dc0fc196ab8p-1010, 0x1.87c8a3ddf9007p-903, 0x1.daabaf95fd7d4p-230,
     0x1.25b6c5fb6dc96p-859, 0x1.a76b65a10fd88p-367, 0x1.fd874d2fce1b2p-822,
     0x1.5d73ae3b88ccep-665, 0x1.a8467b6820dafp-235, 0.0, 0.0, 0x1.cef0c86f1a7c4p-735,
     0x1.c61f71d2322a9p-646, 0.0, 0x1.d6eb25141acf7p-129, 0x1.9aeda172018f5p-466, 0.0,
     0.0, 0.0, 0x1.6c35003f27ca2p-609, 0.0, 0.0, 0.0, 0x1.8595921e54ccfp-495, 0.0,
     0x1.6ac3c7c878d33p-527, 0x1.ff8642c041b94p-642, 0x1.0389ef479aff1p-755, 0.0, 0.0,
     0.0, 0x1.1353165d63573p-518, 0x1.35605846d1deap-668, 0x1.bbeb8e246506ep-640, 0.0,
     0.0, 0x1.a7294d20cbd25p-781, 0.0, 0.0, 0x1.aa3bfd200a56bp-527,
     0x1.7b39a05604f4ep-880, 0.0, 0x1.c788d3b4d483bp-706, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f3acbc516196p-493, 0.0, 0.0, 0.0, 0x1.fed5629cbc5c7p-826,
     0x1.745ef83db4fddp-414, 0.0, 0.0, 0x1.b5ad179d3121ep-427, 0x1.48e266cf3ab94p-438,
     0.0, 0.0, 0.0, 0.0, 0x1.74cc8c63a6303p-581, 0.0, 0.0, 0x1.06759fd67832bp-368,
     0.0, 0.0, 0x1.bd0bc6f35906dp-456, 0.0, 0x1.063eeb8cbfb47p-619,
     0x1.481a82391492bp-985, 0.0, 0.0, 0x1.b9c8844512d63p-1, 0x1.e9b874a50f83bp-83,
     0.0, 0x1.bd0efefbbc237p-978, 0x1.c39d83f929a66p-535, 0.0, 0.0, 0.0,
     0x1.86c997fd661aep-434, 0x1.74e51d079de62p-581, 0x1.341bfd239bd35p-778, 0.0, 0.0,
     0.0, 0x1.a43f7dae13418p-65, 0x1.202d6bcbf8b9bp-580, 0.0, 0.0, 0.0,
     0x1.e159d0f39e248p-642, 0.0, 0x1.b31a1f79c4e8dp-790, 0x1.7e89bfbe650d2p-660, 0.0,
     0x1.f4d00101f53f7p-972, 0x1.6c0c71358ca5ep-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c5c09fe9b1afap-1012, 0x1.805bd400da402p-485, 0.0,
     0x1.1d7b40346662fp-1008, 0x1.bf88affe2b63cp-477, 0.0, 0x1.cc9448e68c825p-878,
     0x1.679c3caa3da62p-65, 0x1.9c54d4fdbd293p-236, 0x1.a6892e5f038bfp-581,
     0x1.189093964083ap-629, 0x1.e3022c0cfe5ecp-85, 0.0, 0.0, 0.0, 0.0,
     0x1.d5e5673ca384ep-771, 0x1.797166b317961p-330, 0x1.4c5d01f203fc5p-422, 0.0,
     0x1.127c6d61274bcp-951, 0.0, 0.0, 0x1.54bc044a5e12cp-397, 0x1.15a37f0ef0f36p-287,
     0x1.f674890dd0551p-122, 0.0, 0x1.3daa8532fb20dp-362, 0x1.1239a20e69e22p-413, 0.0,
     0.0, 0.0, 0x1.3912cc5081915p-1005, 0x1.7e25182c7361dp-604, 0.0,
     0x1.75edc0c468d11p-349, 0.0, 0x1.402fd6445fe14p-907, 0x1.e4a4cc49b8c64p-98,
     0x1.dc82c1ee0e2e2p-615, 0.0, 0x1.4b3aa03bd573ep-752, 0x1.14ac19482e3aep-213, 0.0,
     0.0, 0x1.cae74df4aff4p-490, 0.0, 0x1.3e37bbd7ce64bp-933, 0x1.eb8d7c7739ec6p-107,
     0x1.7c9a705aee536p-400, 0x1.0e0a21bc46ed9p-707, 0.0, 0.0, 0x1.e365aff0804f9p-587,
     0x1.0b389329c8fd6p-521, 0x1.77fa35c57e1e5p-332, 0x1.0480b97f30ff5p-674, 0.0,
     0x1.de683c765b08fp-926, 0.0, 0x1.2ce1887a6b554p-91, 0.0, 0x1.89f906f80ffdap-220,
     0x1.c68d6b0043f82p-643, 0x1.f1231b8c275cfp-1008, 0x1.95f814c1896e7p-547,
     0x1.a469d2f72898dp-575, 0.0, 0x1.b5eabcf69931cp-20, 0x1.b3187314bc44dp-281, 0.0,
     0.0, 0x1.ce0eec6c2542fp-723, 0.0, 0x1.3f9f376ca7b45p-392, 0.0, 0.0,
     0x1.476ee3a7666f7p-571, 0x1.0fef8f7b0258bp-610, 0x1.7ced8a8cc03d5p-197, 0.0,
     0x1.dabc8451f11f4p-895, 0x1.303588d69b0dp-298, 0.0, 0x1.f042d80271ddfp-726,
     0x1.61771ab061ff6p-193, 0.0, 0x1.2990b3081b931p-430, 0.0, 0.0,
     0x1.e149344377a5cp-939, 0.0, 0x1.2fb3a2895c9c6p-241, 0x1.5a585b185edc9p-837,
     0x1.10b3721ff8d86p-35, 0.0, 0.0, 0.0, 0x1.19e0ffa19f3eap-968, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.69111735043ebp-124, 0x1.aa9be345569c1p-277, 0.0, 0x1.df3b72b734a0cp-360,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0cd7e3813c9p-513, 0x1.bd5671620e973p-512, 0.0,
     0x1.5c09dab7b0e1ap-100, 0x1.b9fe11d0012cp-163, 0.0, 0.0, 0.0, 0.0,
     0x1.220da8e83db2ap-827, 0.0, 0x1.4015757b8d518p-514, 0.0, 0x1.627c780efa4a3p-125,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fec737e5777c2p-769, 0x1.d81cccb83ee1p-711,
     0x1.e005f3da5e6cbp-903, 0.0, 0x1.4a6cc79d42d29p-615, 0x1.f7045c60142bap-440, 0.0,
     0.0, 0.0, 0x1.3cd7b6b75b2f7p-360, 0x1.a04e26a7d3e45p-327, 0x1.7a9c51d334c31p-132,
     0x1.e3ba765817df7p-82, 0.0, 0x1.499376571d93fp-318, 0x1.20234b43e51a3p-990,
     0x1.95319fb558a2ep-758, 0.0, 0x1.d50e2ae867723p-957, 0x1.1702cce6bd0eap-465, 0.0,
     0x1.20c1266e35d9fp-642, 0x1.6d4e5e4929a68p-589, 0.0, 0.0, 0x1.f2adf15a7196ap-511,
     0x1.76ec243139ebp-260, 0.0, 0x1.3898181fbe5ccp-223, 0.0, 0x1.351d1fac0b907p-511,
     0x1.68f572b001a18p-454, 0x1.204fd64c80bd6p-220, 0x1.e63d9c54d126fp-12,
     0x1.da83700522f5dp-71, 0x1.81403d57224e3p-283, 0x1.11bb07294441fp-598,
     0x1.99b644f4d7b0ap-858, 0x1.d487c20af71b1p-334, 0.0, 0x1.24b4318a5a85p-140, 0.0,
     0.0, 0x1.c1c40f35ad948p-949, 0x1.65129334bbea2p-824, 0x1.af5a5f913895ap-735, 0.0,
     0x1.7d10ba8af660bp-926, 0.0, 0.0, 0.0, 0.0, 0x1.7df94adc1ee71p-115, 0.0, 0.0,
     0.0, 0x1.2371c237e1b0cp-619, 0x1.5af9e9b94d308p-898, 0x1.af7dd95fb6335p-363,
     0x1.27a181190c837p-705, 0.0, 0.0, 0x1.ad76d77ea6a0fp-52, 0.0,
     0x1.bbf823bd49faap-167, 0x1.3a3acce17e652p-821, 0x1.7be7e3c7db564p-752, 0.0,
     0x1.7218d4a9349e7p-756, 0x1.85eefd46aa368p-142, 0x1.ef377dd5cffadp-946, 0.0,
     0x1.3c3305b79e94ap-593, 0.0, 0x1.3d1438cadc86bp-861, 0.0, 0x1.42a8901121a34p-355,
     0x1.7f0a624926d77p-265, 0x1.66c71a757acefp-998, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e889cfa4ff1f9p-358, 0.0, 0.0, 0.0, 0.0, 0x1.67d38c81e8effp-701, 0.0,
     0x1.aad776f0a2beap-402, 0x1.db54b101ab3c8p-810, 0.0, 0x1.4652cc70f1f5cp-485,
     0x1.d004bf582eabap-35, 0.0, 0x1.618bc80e9eb38p-934, 0x1.5ad3f1f0ede97p-966,
     0x1.1c00f00ad2294p-843, 0x1.b3cc167bbb70fp-823, 0.0, 0.0, 0x1.e0a4cc20b9ec9p-946,
     0x1.9e0f154161c13p-157, 0x1.fa6afa7b732b1p-572, 0.0, 0x1.8cd06838641e4p-743, 0.0,
     0x1.689053179898ap-497, 0x1.70f945e82fadbp-742, 0x1.853c404fbec34p-844,
     0x1.bd94435b16424p-653, 0x1.4ae5cc5f9833ap-807, 0x1.bed6e2e57c99ep-961, 0.0, 0.0,
     0.0, 0x1.becc866b0de84p-113, 0x1.09c3b2f73c143p-154
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = trunc(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("trunc %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("trunc bench acc %la\n", global_bench_acc);
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
