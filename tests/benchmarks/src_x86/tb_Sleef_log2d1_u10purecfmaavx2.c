/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d1_u10purecfma.c --function \
 *     Sleef_log2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.a3f5fea29898ep-818, 0.0, 0.0, 0x1.845578bd0ac6ep-351, 0.0, 0.0,
     0x1.f3b9a1b8a0204p-908, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f482ac5eaeda8p-386, 0.0,
     0x1.cefaf34753b7p-837, 0x1.910b1196d4379p-205, 0.0, 0x1.c881a4bf1af23p-795,
     0x1.d010c863484bp-331, 0x1.7396d8478913p-446, 0.0, 0.0, 0x1.b501c1a537fafp-18,
     0.0, 0x1.a530999f1af1ap-283, 0.0, 0x1.f7e27df45bc77p-14, 0x1.a8d64c5655591p-337,
     0x1.fbfadfa039c09p-184, 0x1.e01a3190a2eebp-151, 0.0, 0x1.ed90be409aa5ap-186, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccfcd13c730a2p-513, 0x1.b9b396e24f563p-136, 0.0,
     0.0, 0x1.db3ec5e75611ap-483, 0.0, 0x1.63b63c7f88649p-362, 0.0, 0.0,
     0x1.96301b9fc77e1p-833, 0x1.5a9568854b29ep-992, 0.0, 0x1.ca201c9b5b261p-587, 0.0,
     0x1.d7bc5e7be382fp-551, 0.0, 0x1.23fc809cf01fcp-962, 0x1.8921872e18776p-941,
     0x1.b80d6db2364acp-963, 0x1.b8b408edf96eap-89, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71868631a6d6fp-803, 0.0, 0.0, 0x1.29ee327140346p-434, 0.0, 0.0, 0.0, 0.0,
     0x1.df4826900601fp-922, 0x1.bf536ce257aap-495, 0.0, 0x1.75811242073bep-439,
     0x1.89aecb7120887p-835, 0.0, 0x1.f96bb7ecaa63cp-729, 0.0, 0x1.2d4178ef6fc98p-86,
     0x1.e2b5b035ec0cp-1007, 0x1.fb19e2500a9fap-80, 0.0, 0x1.9142a4957ab88p-616, 0.0,
     0.0, 0x1.7482efba984e3p-842, 0x1.2d2b38c443381p-463, 0.0, 0x1.003ac72167cf2p-221,
     0x1.2c25fa5e3300ap-460, 0.0, 0.0, 0.0, 0x1.6a2517a47caa4p-216, 0.0, 0.0, 0.0,
     0x1.255a49985100dp-522, 0x1.3e7f822e1f7f5p-293, 0x1.bc682e464a39ep-34, 0.0, 0.0,
     0.0, 0x1.9da8e2112c149p-681, 0.0, 0.0, 0x1.a4b790d421c35p-521, 0.0, 0.0,
     0x1.32c4393066568p-242, 0.0, 0x1.88fe009755554p-1012, 0.0, 0.0,
     0x1.d824852c11031p-811, 0.0, 0.0, 0x1.7a073f49fd204p-795, 0x1.214905287666cp-76,
     0.0, 0x1.a470e372aedaep-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5672118ef705p-771, 0.0, 0x1.e25213bcada32p-1012, 0.0,
     0x1.746c125a946d3p-374, 0x1.0ee0abb10b1aap-256, 0x1.ffeba5d3d847ap-592, 0.0, 0.0,
     0x1.0e25acf11be7fp-360, 0.0, 0.0, 0.0, 0.0, 0x1.7a964edea56bdp-498, 0.0, 0.0,
     0.0, 0.0, 0x1.633a81f5ad14dp-432, 0x1.bc7ed30d363cfp-909, 0x1.2e692643e7c55p-628,
     0.0, 0x1.30b6add3aa3p-757, 0x1.cf451a079d591p-626, 0x1.98fdf0e4c2794p-806, 0.0,
     0x1.d42df874222acp-849, 0x1.1f3120877175bp-670, 0x1.0b05bb09df262p-839,
     0x1.006b742fc1378p-530, 0.0, 0.0, 0x1.a7453921d1aaap-787, 0.0, 0.0,
     0x1.c8f7aedd6899cp-670, 0x1.446bb12bc33fap-220, 0.0, 0x1.9fae8de0d641p-923,
     0x1.b7ba92ae29579p-699, 0.0, 0x1.59c2a7f3b59edp-635, 0x1.9095b2079e0a2p-692,
     0x1.698348e7274b6p-385, 0.0, 0x1.28e46ff5456ep-192, 0.0, 0x1.1b03ac481a7c6p-1,
     0.0, 0x1.1cf9ee00c4d59p-753, 0.0, 0x1.5cee0c3ba9e33p-463, 0.0,
     0x1.36c9739d0d191p-384, 0x1.14ae9c89c27dep-463, 0x1.0a9146e054c5bp-707,
     0x1.e8f94c0a2b887p-916, 0.0, 0x1.774db9c1d634ep-348, 0.0, 0x1.9ae00026eb1c7p-626,
     0.0, 0x1.9a26e2e86c3cp-68, 0.0, 0x1.9f7c4f547a145p-680, 0.0,
     0x1.a1713726d9736p-387, 0x1.160aa2386793ap-83, 0x1.589622d7c9623p-350, 0.0, 0.0,
     0.0, 0x1.fd0f9c9eaf64dp-916, 0x1.eed5e502c5937p-651, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0955fb415e3p-204, 0x1.bbd3abf509583p-302, 0.0, 0.0, 0x1.43d9c5d195eccp-226,
     0x1.88777dc740938p-186, 0.0, 0.0, 0x1.c113279919be4p-741, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3962c915f27e3p-600, 0x1.cd85850671b9p-697, 0.0,
     0x1.b13b2069eb43fp-672, 0.0, 0x1.a9c807846ba5p-161, 0x1.cd4111b8895d7p-1006,
     0x1.4a87dc7489f5p-566, 0x1.a521447461f6p-451, 0.0, 0.0, 0.0, 0.0,
     0x1.04d8761d46a15p-108, 0.0, 0.0, 0.0, 0x1.ed0ed7ea2fc93p-838, 0.0, 0.0,
     0x1.89ae2ec81ebbdp-72, 0.0, 0x1.fe82aa3fe2868p-316, 0x1.8306d8673221bp-390,
     0x1.7068e5f7ea544p-137, 0x1.e638a12c9b7ddp-678, 0.0, 0x1.d0a4828e0c7fep-205,
     0x1.845e48e6ebbc8p-800, 0.0, 0x1.d60bef1f41055p-239, 0.0, 0x1.1dc2d7de1cd04p-952,
     0.0, 0x1.837512dcecb05p-182, 0x1.b24ea5bc910f6p-870, 0x1.376278e96c72ep-679, 0.0,
     0x1.1969f6cb85612p-366, 0.0, 0x1.84ca79ebf339fp-290, 0.0, 0.0, 0.0, 0.0,
     0x1.31327de02edc8p-467, 0.0, 0.0, 0.0, 0.0, 0x1.c9c4b20f8354fp-636,
     0x1.871672f45663ep-184, 0.0, 0x1.40e7fe92b6e19p-863, 0x1.6d3e4c1016ab9p-759, 0.0,
     0.0, 0x1.3579d4aec0e6cp-752, 0x1.ba45dd5ce7f4p-485, 0.0, 0.0,
     0x1.da6adc683e793p-867, 0x1.29b3bcb05d009p-675, 0x1.deeaf62de47b8p-62,
     0x1.4030b0e50e1dap-891, 0.0, 0x1.7607d0591a7c6p-79, 0.0, 0x1.355380f11b95ep-439,
     0.0, 0.0, 0x1.2ad74d5873609p-235, 0x1.8adbf111aaa0ep-857, 0x1.4376409ca7787p-905,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5adaa328909aap-866, 0.0, 0x1.f8e864e8ccf61p-878,
     0x1.717778c13aa5ap-644, 0.0, 0.0, 0.0, 0x1.16d72ef34d057p-210, 0.0,
     0x1.9f72981ae6a36p-883, 0x1.53c221195f2eep-674, 0x1.b12b5e493ededp-1012,
     0x1.18c59927043f7p-509, 0x1.fbe7a366e5a6p-917, 0.0, 0x1.6244fa3855409p-799,
     0x1.5fa1b7f013a35p-648, 0.0, 0.0, 0x1.6f1bb791b50dbp-920, 0x1.fac1816a688c3p-587,
     0x1.fcf9fc4465aacp-216, 0.0, 0x1.19d72f38b8b13p-273, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6683a9fb8754fp-996, 0.0, 0x1.09b0af5389427p-133, 0.0, 0.0, 0.0,
     0x1.62b6d2ca03c21p-588, 0x1.6756a57fb99d5p-410, 0x1.add18cd01e1f4p-561,
     0x1.a06a4a092aff9p-1015, 0x1.ad834a7bea22dp-85, 0x1.d1c8f29a493f9p-365,
     0x1.5ce4b05df7531p-886, 0x1.2a2f5d41f8d21p-883, 0.0, 0x1.87a329d3a2efap-725, 0.0,
     0.0, 0x1.b92c4a24c6f8bp-248, 0.0, 0x1.e974ae7d00d5ep-714, 0x1.a6b60af55a6fp-263,
     0x1.98a55b5843b74p-1002, 0.0, 0x1.aefb06170e62ep-671, 0x1.436b9cbca5d24p-996,
     0.0, 0.0, 0.0, 0.0, 0x1.189fd7aad5c1bp-315, 0.0, 0.0, 0.0, 0.0,
     0x1.659ca731936cbp-522, 0x1.fefff85d303a5p-641, 0.0, 0x1.a31ac8122966fp-485, 0.0,
     0x1.ae1beec04f437p-900, 0x1.a706ee099e709p-908, 0.0, 0x1.f530d43a2050cp-909, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.136c0c4e5df3bp-227, 0x1.1d7e249dcd495p-584, 0.0,
     0x1.8e21fa6d3357bp-442, 0.0, 0.0, 0x1.205a2173209fp-195, 0x1.2a5a62db4166cp-943,
     0.0, 0x1.9246c99498706p-332, 0.0, 0x1.3edaeb7f3ffcdp-944, 0.0, 0.0, 0.0, 0.0,
     0x1.a72b1fae75132p-56, 0x1.ba129670e161cp-791, 0.0, 0.0, 0x1.682a7b2fe788p-197,
     0.0, 0x1.47b30d30c7d29p-886, 0x1.92aa8ca2120cp-922, 0.0, 0.0,
     0x1.f1a0aaece7f3dp-758, 0.0, 0.0, 0x1.cbd4b972dda79p-742, 0x1.498f973345c58p-14,
     0x1.896dcef44a945p-290, 0x1.21bb3dc1924e9p-975, 0x1.caaedae92a034p-229,
     0x1.bda738d2f51c7p-74, 0x1.006ab9036badap-189, 0x1.52ee5ad358598p-623, 0.0,
     0x1.2ec83264e97c4p-555, 0x1.03e3ea45c622bp-424, 0x1.46749ccf4fbc4p-787, 0.0,
     0x1.dfb8c2638de79p-718, 0x1.f6777382bd271p-351, 0.0, 0.0,
     0x1.3226c9197a743p-1005, 0.0, 0x1.060a226eb7d85p-506, 0x1.5886ba30b959ep-429,
     0.0, 0.0, 0x1.09caaec495c3bp-112, 0x1.687c92dcfad1bp-62, 0x1.29d161b4cfe7fp-59,
     0.0, 0x1.714e16f5f7f27p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.606f00f39de7ap-316, 0.0, 0x1.127d6ac60b95bp-748, 0x1.ae7d030b3ab02p-482, 0.0,
     0.0, 0.0, 0x1.15022acd7793dp-282, 0.0, 0x1.30ee09407c53fp-1011, 0.0,
     0x1.81591056dda54p-654, 0.0, 0x1.cd7d6e7f31538p-559, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0a530e7e4f712p-622, 0x1.a664e8493e966p-266,
     0x1.ded529a63d657p-662, 0x1.e1a731843768dp-630, 0x1.27ebc765a8205p-886, 0.0,
     0x1.0c0fffd84187ap-598, 0x1.58b81be23747p-469, 0.0, 0.0, 0.0,
     0x1.21cf2efbe8588p-717, 0x1.525708dc9af6bp-573, 0x1.ea763526c2239p-680, 0.0,
     0x1.f239bf952f521p-717, 0x1.28038b01e2842p-753, 0.0, 0.0, 0x1.8b3493a196244p-71,
     0x1.2b6030f6242ddp-570, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1b678d0aa43ep-1010,
     0x1.b03c15df4ea5ap-820, 0.0, 0x1.92375d38f6294p-339, 0.0, 0.0,
     0x1.753416e1838f9p-217, 0.0, 0.0, 0.0, 0.0, 0x1.733c5f568cb3dp-875, 0.0,
     0x1.d4ee5f2191827p-810, 0x1.8d1778f507e7fp-464, 0x1.39aebaf096e2ep-662, 0.0,
     0x1.da9305c02ef67p-947, 0.0, 0.0, 0x1.3c435867286d9p-680, 0x1.65df5f424f403p-692,
     0x1.630ea34fd4139p-258, 0x1.798c734f2601bp-643, 0x1.32db772355344p-1001,
     0x1.fa2d90350e73dp-818, 0x1.56c783f1720f6p-861, 0.0, 0x1.46a11e365a242p-823, 0.0,
     0x1.a51bc4aba356cp-698, 0x1.17e8a97374e4fp-728, 0x1.5d64f9ca0b15ep-640,
     0x1.462476a130535p-355, 0.0, 0.0, 0x1.f38d52a17ceep-5, 0x1.de9fd55a5ca81p-940,
     0.0, 0x1.1fa505be31834p-978, 0.0, 0.0, 0x1.5f58be2cb1552p-478,
     0x1.671f390a6708ap-78, 0.0, 0x1.8a62721687e74p-982, 0x1.55c8e45ab9509p-554,
     0x1.d960aa60db228p-999, 0x1.207826eb9b55fp-237, 0x1.707453c8702f8p-265,
     0x1.eef70800ebc42p-919, 0.0, 0x1.3250cdc76188fp-738, 0x1.58d90e07b4523p-450,
     0x1.62406b94397d8p-667, 0.0, 0.0, 0.0, 0.0, 0x1.94e3e272c6e17p-865,
     0x1.8e7d5a9202b1ep-622, 0.0, 0x1.460e00256d83ap-405, 0x1.5d4c6aca25d6ap-515,
     0x1.2b349433d620ap-85, 0x1.03f8989b82ae6p-759, 0x1.4c394bb61017p-674,
     0x1.24d79f41cc067p-376, 0x1.0c02c2d5678b9p-890, 0x1.e02941ccc3dddp-418,
     0x1.04a23d0dddf0dp-477, 0x1.b0a7cbefe180ep-450, 0x1.f3a601a9f8a66p-689, 0.0,
     0x1.8fff4de19a77bp-56, 0x1.43181d4371523p-189, 0x1.5ca96c05903f6p-468, 0.0, 0.0,
     0.0, 0x1.4658799ffae58p-107, 0x1.21f9bd509db6ep-476, 0.0, 0x1.b53915ece5d55p-93,
     0.0, 0.0, 0x1.da06155814c6bp-427, 0x1.fcd3112d86189p-11, 0.0, 0.0, 0.0,
     0x1.34d340d31085dp-234, 0.0, 0x1.47103b32af58p-748, 0.0, 0x1.2f1d1b52ea6dap-786,
     0x1.5502d1d1d3ff7p-274, 0.0, 0x1.7ee835d06cfa1p-45, 0x1.425e46e550699p-857,
     0x1.141b09ca7a22ep-643, 0.0, 0x1.330667d10c28fp-159, 0.0, 0x1.aeca4d177811ap-330,
     0x1.89c3dc487d5e7p-289, 0.0, 0.0, 0.0, 0.0, 0x1.1fcf59b7dc40cp-742, 0.0,
     0x1.7a191908e93c9p-454, 0x1.24a7f41acad76p-473, 0x1.fa77a88ae201p-356, 0.0, 0.0,
     0x1.74f38b462a118p-899, 0x1.a01aa7f336ff3p-673, 0x1.8b4a0c3601758p-567, 0.0, 0.0,
     0x1.ec84e6d6996ap-168, 0x1.0b6c3c5b051cap-626, 0.0, 0.0, 0x1.86520a58a761cp-863,
     0x1.d9edcc338180cp-991, 0x1.8c7219c30b678p-399, 0.0, 0.0, 0.0,
     0x1.2ab11df561911p-213, 0.0, 0.0, 0x1.276f7817802d3p-831, 0x1.e5476bac244d5p-175,
     0x1.f4e41808a245cp-572, 0x1.a00b0f708b9e4p-515, 0x1.5dd9b8dd78f4dp-127,
     0x1.09371b8bf43cep-610, 0x1.70970ab71dedp-528, 0x1.10dd9870e0eb8p-736,
     0x1.6849f2b69d338p-298, 0x1.ee6f676c6370cp-371, 0x1.63f82595cdb08p-565,
     0x1.b76f4cd0f51b6p-129, 0.0, 0.0, 0.0, 0x1.184ff45c59b3dp-976,
     0x1.601a91ebbd25bp-176, 0x1.6c598aebc39abp-787, 0x1.f5be4cc5781a9p-45, 0.0,
     0x1.45ea5ca735928p-848, 0.0, 0.0, 0.0, 0x1.037b69b0a7b14p-204, 0.0,
     0x1.129f85fe4103dp-10, 0x1.2fdce837ac365p-895, 0.0, 0.0, 0x1.062353a3084ap-462,
     0x1.b53f10b91d9bep-660, 0.0, 0.0, 0.0, 0x1.269cc6aeef347p-809,
     0x1.0e860b136ef06p-358, 0x1.9833e9d665e07p-265, 0.0, 0x1.1e0747092f3bep-142,
     0x1.b5f5910c87733p-410, 0x1.82bcdb66156a1p-369, 0.0, 0.0, 0.0,
     0x1.1abcea0945384p-717, 0x1.e2dba40e86008p-299, 0x1.8212a29512b46p-702,
     0x1.27519394a28cp-166, 0.0, 0x1.51a7cf66dffe7p-244, 0x1.20fccda97e8edp-370,
     0x1.f1963517f18b3p-779, 0x1.a7a35d3de22fep-206, 0.0, 0.0, 0.0, 0.0,
     0x1.72e71572432a4p-104, 0.0, 0x1.c90f3a36b9ddfp-30, 0.0, 0.0, 0.0, 0.0,
     0x1.3af84f33558ebp-149, 0.0, 0x1.310a8cc2b1d4cp-275, 0x1.590c4583bd314p-744, 0.0,
     0x1.243a5a55e1ebdp-818, 0.0, 0x1.d89ea784a2a93p-988, 0.0, 0.0,
     0x1.c1398fef8456ap-816, 0x1.52e297e942b74p-63, 0x1.090d4e60f050dp-1015,
     0x1.fea0ad6ddff9bp-951, 0.0, 0.0, 0x1.3151e051fec04p-543, 0.0,
     0x1.7bd14545c8dp-223, 0.0, 0.0, 0.0, 0x1.1cea3b1bc25bp-129,
     0x1.d9cac816fa437p-548, 0.0, 0.0, 0x1.b919f9f533c84p-640, 0.0, 0.0,
     0x1.e52b74416d5d1p-791, 0.0, 0.0, 0x1.89c89755354d5p-543, 0x1.441c6f628e253p-283,
     0x1.9fbfd4520e567p-27, 0x1.187ec3e1c1922p-54, 0.0, 0x1.6279cb9d51cddp-948,
     0x1.e77c448e337a1p-117, 0x1.73f487cbb7f57p-810, 0x1.bb93d5880ae01p-200,
     0x1.9b6e4d8932d36p-658, 0x1.3ddc71c2aabfp-641, 0x1.c9f5715f2b04ap-991,
     0x1.ad402283b7349p-551, 0x1.2000621197023p-555, 0x1.dbc8bd0ba8cd1p-62,
     0x1.639ab7af6004ep-765, 0.0, 0.0, 0.0, 0.0, 0x1.bcd7807267741p-381,
     0x1.4efdbfbb8a209p-974, 0x1.267b2ab884793p-692, 0.0, 0.0, 0x1.5ddbe3937ffc2p-166,
     0.0, 0.0, 0.0, 0x1.18b56a3aa4443p-596, 0x1.d544c3cb2c5a3p-722,
     0x1.cab0f4d4b4ac2p-201, 0x1.5238445ae6eecp-486, 0x1.bc6992c476a65p-879, 0x1p0,
     0x1.8993f2ef09341p-675, 0.0, 0.0, 0.0, 0.0, 0x1.1cfa9da9fc59ep-544,
     0x1.41af100c6b6d3p-698, 0.0, 0.0, 0x1.8db3fc9a7ab6p-955, 0.0,
     0x1.413d8e766c704p-485, 0.0, 0x1.bb9d231553717p-162, 0x1.a69d2688e62e6p-453,
     0x1.c4a1fad8d95e2p-130, 0x1.e99a5939c9b93p-708, 0x1.8cac6eb818276p-255, 0.0, 0.0,
     0.0, 0.0, 0x1.865b2ea0674dbp-640, 0x1.070e1cbbab03ep-33, 0.0, 0.0, 0.0,
     0x1.939406f021429p-898, 0.0, 0.0, 0.0, 0x1.e85ce6c3ef63bp-462, 0.0, 0.0, 0.0,
     0x1.7e7a2d008819dp-214, 0.0, 0.0, 0.0, 0x1.9ded502a57e23p-435,
     0x1.aa9a67b668e41p-565, 0x1.63c8e0d0b7f11p-523, 0x1.f74f1fb624b44p-911,
     0x1.fcba4d8a14746p-183, 0x1.7e0b46e9ec12bp-1008, 0.0, 0.0, 0.0, 0.0,
     0x1.af1f6ccb675e6p-68, 0x1.b737da44aab7fp-538, 0x1.366067cbed9dbp-388, 0.0,
     0x1.f9ada30aa3187p-666, 0.0, 0.0, 0.0, 0x1.924fef3bc2b85p-342,
     0x1.a5b9c4f3ae911p-561, 0.0, 0x1.c7f9cc63b159ap-941, 0x1.f1fa75514b809p-120, 0.0,
     0.0, 0x1.a768a446056fep-238, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bde8533e7387cp-339,
     0.0, 0x1.ea25557a14111p-36, 0x1.eb6c0a05d0d2bp-896, 0x1.b5cbc66ea4d5bp-1021,
     0x1.77e1db24b62e9p-363, 0x1.e4dcb416fc29ap-56, 0.0, 0x1.7d30cb8e86417p-68, 0.0,
     0.0, 0.0, 0.0, 0x1.42cad293e4e8ap-738, 0.0, 0x1.b0ba859ad5392p-223,
     0x1.ce31cb996df89p-264, 0x1.93eadbdbaf637p-644, 0.0, 0x1.4b883e6bb21f6p-231, 0.0,
     0x1.a5bc453cb98a6p-689, 0x1.eebdf11d59a15p-34, 0x1.c036091f8c059p-445,
     0x1.e33acfa97d7d3p-944, 0x1.a693f31df54e4p-723, 0.0, 0.0, 0x1.6a114100e66efp-741,
     0x1.383f1dd6c6354p-96, 0.0, 0.0, 0x1.87f32d425462cp-401, 0x1.ea43af7fad82cp-419,
     0x1.40e0c5dbdca13p-963, 0x1.728ed1cd38c9ap-971, 0x1.a232dfd48bf6bp-515,
     0x1.2598637ef1bfdp-873, 0x1.e0c21270f26bp-717, 0.0, 0.0, 0x1.3867de89aca4p-626,
     0x1.4b850ffcecde1p-259, 0.0, 0.0, 0x1.18d3d8b78edefp-79, 0.0,
     0x1.b8830ab0fce81p-199, 0x1.a01c1d3a08d3dp-417, 0.0, 0x1.e26b82454fe41p-672, 0.0,
     0x1.89b9d125897d4p-713, 0.0, 0x1.4bf9ed6a0607fp-551, 0x1.21a1c9a53cd5p-106, 0.0,
     0.0, 0.0, 0x1.e845fbda2946cp-183, 0x1.b6aa3f0825012p-496, 0x1.c21c13d4a506ep-891,
     0x1.34463fc239a2cp-248, 0.0, 0.0, 0.0, 0x1.0a7c07085317fp-129, 0.0, 0.0, 0.0,
     0x1.247bd14ef6bd9p-845, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.346eaa071aec3p-369, 0x1.a356ab611988cp-435, 0x1.3ffca87750278p-549,
     0x1.dc158b576826ap-648, 0x1.05e9a38a9598ep-549, 0x1.53623c322ca9cp-648,
     0x1.95d5da54b515fp-399, 0.0, 0x1.4d568d4b7318cp-519, 0x1.cc5a68508ba68p-155, 0.0,
     0x1.5a3a53cf7dfc3p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c315fc4fad36p-380,
     0.0, 0x1.a35c70c28f54cp-999, 0x1.8e8b444bd070fp-594, 0.0, 0.0,
     0x1.554b805a4efb2p-858, 0.0, 0x1.ed2b2379ec4a7p-434, 0.0, 0.0,
     0x1.ff1fce0fd44b6p-502, 0x1.eff36e13c417dp-556, 0.0, 0.0, 0.0, 0.0,
     0x1.977c820c12c0dp-844, 0x1.f5011b0e8c4c8p-761, 0x1.2a1c8d112aebap-501, 0.0,
     0x1.117c5bb93277cp-505, 0x1.4c56ee9a24bdcp-866, 0.0, 0x1.6b3b9656b8634p-831, 0.0,
     0.0, 0.0, 0.0, 0x1.e93c051b4602bp-15, 0x1.0196c861e1a85p-909,
     0x1.d6002b9e44864p-718, 0.0, 0x1.4592daa29fdcep-438, 0x1.3669029db1227p-81, 0.0,
     0x1.bbb56c9a0faeap-190, 0.0, 0x1.9ed2149dd9c77p-800, 0x1.754d2cf009fe4p-613,
     0x1.d695d9dbb0f46p-990, 0.0, 0.0, 0x1.1f05329ca2ce6p-148, 0x1.f25175cffff54p-558,
     0.0, 0.0, 0.0, 0x1.e044fea26e95bp-216, 0.0, 0x1.7b1f99fd2b4ddp-189,
     0x1.8e53a333ee312p-262, 0x1.c8648b2185aebp-25, 0.0, 0x1.36976ba2c800dp-48,
     0x1.7a61c4f2675ccp-158, 0x1.ef910add762f8p-25, 0.0, 0x1.877ed5afc20e9p-631,
     0x1.426114a71dc94p-246, 0.0, 0.0, 0x1.ba634c4d6d8d6p-722, 0x1.ee3c050bbe76p-274,
     0x1.d8ba564bbf22p-149, 0x1.f0429dcdf41fep-535
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
            tmp1 = Sleef_log2d1_u10purecfma(tmp0);
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
    printf("Sleef_log2d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
