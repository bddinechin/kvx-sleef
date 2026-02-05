/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd2_u35avx2128.c --function \
 *     Sleef_finz_sincosd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.14d687cfe5cd8p-244, 0.0, 0x1.1fad357c24daep-185, 0.0, 0.0, 0.0,
     0x1.d6bb8abc57078p-754, 0.0, 0.0, 0x1.6a217bf8c0087p-1015, 0.0, 0.0, 0.0, 0.0,
     0x1.6b0662e6b8cd5p-548, 0x1.419e38af84042p-269, 0x1.14506389627eep-230, 0.0, 0.0,
     0x1.8d4cdfc383ep-771, 0.0, 0.0, 0x1.28de9a1c28904p-885, 0.0, 0.0,
     0x1.71750b257fa62p-806, 0x1.ede38728991ebp-296, 0x1.285368d22ecf7p-837,
     0x1.624e8b9df2cdbp-894, 0x1.d248ec6f62af6p-809, 0.0, 0x1.161fab3f217bcp-304,
     0x1.15983d75fa11ep-270, 0x1.d0d5b50a93914p-31, 0.0, 0x1.7d80263209127p-255,
     0x1.53f353f7a1b64p-499, 0x1.a0581b132b71p-623, 0.0, 0x1.2a6ec887e742cp-513,
     0x1.de184edde45p-468, 0.0, 0.0, 0x1.80477ffae1a27p-829, 0x1.732bc021eaecp-673,
     0.0, 0.0, 0.0, 0x1.7548fa4267ca6p-45, 0.0, 0.0, 0x1.f879c145ce071p-82,
     0x1.e1a9c4bd69eb8p-718, 0x1.282545743eb3ap-888, 0x1.e0644464b8b7ap-808,
     0x1.3e4fad2bd83c3p-905, 0.0, 0.0, 0.0, 0.0, 0x1.0e783a134abd7p-43,
     0x1.b0f81bf6fafc7p-7, 0x1.62df99beacf51p-613, 0.0, 0x1.5fa3bc61a9dd2p-943,
     0x1.8150bf02c3734p-987, 0x1.69bb5377fbe26p-520, 0x1.dae1a46d83188p-314,
     0x1.e0d7d70cdadfep-278, 0x1.323a0c7d29513p-469, 0x1.02af0a1f1767ep-858,
     0x1.9f72aa8cd7fc2p-571, 0.0, 0x1.eadda81da0e55p-258, 0x1.2bd51a90bb47dp-621,
     0x1.aa5f74a9c93f1p-834, 0x1.ec60c9b2295b8p-974, 0.0, 0.0, 0.0,
     0x1.fc28d397211b5p-829, 0x1.423f82c773f9ep-625, 0.0, 0x1.bc9f415b30233p-20,
     0x1.41e55aaf3c7ap-419, 0.0, 0x1.5b52289fbdcecp-260, 0.0, 0.0,
     0x1.6fe9bdfb4482ep-57, 0.0, 0x1.d1e9d05d12fe7p-498, 0.0, 0.0, 0.0, 0.0,
     0x1.8b5fc17e7ec78p-394, 0x1.76edd38fce6adp-342, 0.0, 0.0, 0.0,
     0x1.2b5f5ff1f0bb4p-486, 0x1.76078b4faed74p-910, 0.0, 0x1.82545b0db1b6cp-912, 0.0,
     0.0, 0x1.293cb726b609ap-46, 0.0, 0.0, 0.0, 0.0, 0x1.1ac54a5de42c8p-872,
     0x1.4a32abc3aac0bp-910, 0x1.decf7c0bb4053p-258, 0.0, 0.0, 0.0, 0.0,
     0x1.2ebc0f64ca513p-896, 0.0, 0x1.dee58ae1fddcfp-671, 0x1.c11579b1702c9p-502, 0.0,
     0.0, 0x1.8cbad4a0d8eacp-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45f21c684f513p-550,
     0x1.f7026f842df48p-551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2eff7cf929ecp-594, 0.0, 0.0, 0.0,
     0x1.711f34c8a794cp-635, 0x1.456e68ef28501p-652, 0.0, 0x1.805b5cbcbf777p-950,
     0x1.855fe111d3d82p-639, 0.0, 0.0, 0.0, 0x1.6566399151121p-619,
     0x1.885928b3d523ap-858, 0x1.19a0d4b7bacb6p-255, 0.0, 0.0, 0.0,
     0x1.86efb1174d9f6p-749, 0x1.814951b2a7966p-378, 0.0, 0x1.5d953e4d3abc4p-368,
     0x1.608e1baa38e2p-94, 0x1.41fc3347098e5p-762, 0.0, 0x1.28a8d2455342ap-719,
     0x1.f94e0f235f7a5p-883, 0.0, 0.0, 0.0, 0.0, 0x1.cadd39fdd3b2fp-131,
     0x1.86c93a382f4b7p-709, 0.0, 0.0, 0.0, 0x1.d279d3628e691p-132, 0.0, 0.0,
     0x1.f9a908d26f1fep-811, 0.0, 0.0, 0x1.33b8e95426fb6p-841, 0x1.3de384276877fp-667,
     0x1.ea8fc0fe95525p-481, 0x1.f9aeb77acdcaep-389, 0.0, 0x1.1182931be2912p-600, 0.0,
     0.0, 0.0, 0x1.0dc46278ad05bp-274, 0x1.ba2ad4e0021c5p-198, 0x1.60791dab7576dp-497,
     0x1.e95307b7b8c66p-832, 0x1.f46e0f5804f5ep-743, 0x1.1af39484f70c7p-338,
     0x1.c72f8727ee6fap-98, 0x1.355bb45de1e61p-118, 0x1.47f7b1e22316ap-598, 0.0, 0.0,
     0.0, 0x1.c192d0a95956dp-996, 0.0, 0x1.f5a7440ce442dp-748, 0.0, 0.0,
     0x1.30ab63f5fa1c2p-945, 0x1.370cee8ce35f2p-462, 0x1.abc20950abbbbp-372, 0.0,
     0x1.b33d704d1cf78p-706, 0x1.54ca43266b5c5p-591, 0.0, 0x1.b7d7df14ca3b1p-131,
     0x1.c051bfb2bea75p-480, 0x1.d7f9c0ab42c49p-111, 0x1.33d1cf7283a44p-107, 0.0, 0.0,
     0x1.c24ed867114f9p-469, 0.0, 0.0, 0.0, 0x1.ef23c9e173603p-949, 0.0,
     0x1.4925621666cb1p-386, 0.0, 0.0, 0x1.64b98a679a27dp-826, 0.0,
     0x1.38029f90d148fp-322, 0.0, 0.0, 0.0, 0x1.dc6d32594068dp-668, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fc90305dad3f1p-984, 0x1.e36dcb6f297dep-285, 0.0,
     0x1.9da9bc64f151fp-124, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.146b92ba5229dp-630,
     0x1.5ebaea696a0c1p-517, 0.0, 0x1.54166610d3e46p-469, 0.0, 0x1.e2370e1c3871cp-263,
     0.0, 0x1.b4372338af6cp-660, 0x1.8f4efacbaaef3p-156, 0x1.55ddad1adf5c7p-816, 0.0,
     0x1.a500f5bbe49a8p-184, 0.0, 0x1.6459a5148e375p-193, 0x1.35e936d28118cp-40,
     0x1.ded257ede030dp-626, 0.0, 0x1.a4cd463733131p-288, 0.0, 0x1.f13a5ad67f62ep-653,
     0.0, 0x1.061cca7b91f1ep-87, 0.0, 0x1.658ef1b70ae0fp-423, 0.0,
     0x1.8d6638b7408ep-189, 0.0, 0x1.9e0e702a70f86p-222, 0.0, 0.0,
     0x1.64507338743b6p-48, 0x1.41082aae402ddp-593, 0.0, 0x1.8294ff39c67dfp-411,
     0x1.be0fb6175692fp-10, 0x1.e9346af4d537cp-804, 0.0, 0.0, 0.0,
     0x1.c07f8ad69990fp-96, 0x1.b37072f21bf9ap-955, 0.0, 0.0, 0.0, 0.0,
     0x1.ae67090bcccbap-326, 0x1.06908ad41b229p-434, 0x1.81a6cd31c33ecp-85,
     0x1.7bc1bf0b9c4c8p-164, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2ab892b616fcbp-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5e9910f68c86p-826, 0.0, 0x1.78af8303ba6ecp-39, 0x1.61766ce65d814p-506, 0.0,
     0.0, 0x1.f5e17b868cb7cp-949, 0x1.07738203e46ddp-923, 0.0, 0.0, 0.0,
     0x1.ac36c027fab2ap-183, 0.0, 0.0, 0.0, 0x1.39174b599d64fp-79,
     0x1.74bb8b9cd6e11p-849, 0.0, 0x1.e2f5a61589fd7p-611, 0x1.3dcf2a27db4a8p-801,
     0x1.c9db17d19fcf2p-599, 0.0, 0x1.a1970776e2795p-828, 0.0, 0x1.e4eb037eed728p-628,
     0.0, 0x1.253ebdd6f0b5cp-201, 0x1.b1d2f36b13885p-289, 0.0, 0.0,
     0x1.2c8b8aadc8e9ap-166, 0.0, 0.0, 0x1.59e4c4f7a7aa9p-958, 0.0, 0.0, 0.0,
     0x1.95d53238a7fe7p-325, 0x1.e79835fc5c427p-48, 0x1.f3d7b2f70559p-615, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.94129c3ac0d4cp-908, 0x1.b8ccc741f66d3p-126, 0.0,
     0.0, 0x1.82a9729809ab8p-553, 0.0, 0.0, 0x1.7340476a175fp-796,
     0x1.65e10770de23ep-813, 0.0, 0x1.86722258383f9p-490, 0x1.42b0e46f0035ap-222, 0.0,
     0x1.5b4a80e30b23dp-382, 0.0, 0x1.63d91e14e21f2p-322, 0.0, 0.0,
     0x1.5cf37597cc818p-979, 0x1.863257a97cfdbp-86, 0.0, 0x1.ef9ed17e8bffp-660, 0.0,
     0.0, 0x1.234c34c31571p-883, 0.0, 0.0, 0.0, 0.0, 0x1.1d1b3a3e584c7p-579,
     0x1.bab1f85685dd3p-395, 0x1.338b005144779p-522, 0x1.c5249ac905382p-881, 0.0, 0.0,
     0.0, 0x1.22f66248daeedp-123, 0.0, 0x1.9ba296a98e66p-132, 0.0, 0.0, 0.0,
     0x1.8934e7102260ep-815, 0x1.6818c5045d238p-681, 0.0, 0.0, 0.0,
     0x1.3188e5b3305ccp-631, 0x1.f07450bb1a984p-280, 0x1.8a65998451434p-955, 0.0,
     0x1.95fc41be19586p-845, 0.0, 0x1.1e41c3b48224ap-234, 0x1.c6a515e26636p-921, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e971cbd221cdfp-18, 0.0, 0.0, 0.0,
     0x1.6d4fd1fb88467p-166, 0.0, 0x1.71c786dabbb8cp-510, 0x1.44c98070d16fdp-236,
     0x1.d424a9319529ap-846, 0x1.103da15a43a59p-630, 0.0, 0x1.aee4ceeb9eadp-701, 0.0,
     0x1.d362cb4a9d3f2p-394, 0x1.a1896d535fa68p-529, 0x1.f9b8361e9722ep-13,
     0x1.1953c05fe6407p-532, 0.0, 0x1.7a429e83b7ffp-150, 0x1.569b3a4f4bf98p-491, 0.0,
     0x1.889861c9bb2cbp-280, 0.0, 0x1.4095654b66c99p-451, 0x1.46902645b18f3p-625,
     0x1.4b5fad39e46c3p-128, 0x1.8e959f68001dp-173, 0x1.f67c2554d7524p-715, 0.0,
     0x1.27a69a52eb34p-801, 0.0, 0.0, 0x1.6c919a6ff9379p-787, 0.0, 0.0,
     0x1.e9575744f2a88p-635, 0x1.4350714a19119p-305, 0x1.a30b12d9da6c2p-398, 0.0,
     0x1.ae4339413f66cp-651, 0x1.fe31ab0d40fefp-1007, 0x1.580c34c574a97p-991, 0.0,
     0x1.2506f00beeccbp-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2edfce4ac64a3p-829, 0x1.0f6ee3de73f84p-151, 0x1.c10bce40d400dp-489,
     0x1.47f0b4f9538abp-608, 0.0, 0x1.6be7dda7eedc7p-368, 0.0, 0x1.6de5a2a10f046p-722,
     0x1.c9661031f1969p-339, 0.0, 0.0, 0x1.732f56b275dcdp-322, 0.0, 0.0,
     0x1.312377712fe1ep-511, 0x1.96bd1905a4484p-252, 0.0, 0.0, 0x1.d0c2db8842a18p-990,
     0x1.f3c33a52d81b1p-321, 0.0, 0.0, 0.0, 0x1.eb4f9bc1e5bb3p-974,
     0x1.93ff5fd576fffp-601, 0x1.b9945160fcc7cp-1015, 0x1.8f9ee74cb762p-603, 0.0,
     0x1.bc6011c62ad2ep-527, 0x1.43440b3626e3bp-692, 0.0, 0x1.9edb1844510dep-802,
     0x1.f13650c9a4f94p-687, 0x1.1a4305b068305p-699, 0x1.94f606a21dfdap-49, 0.0, 0.0,
     0.0, 0.0, 0x1.f269fe01406acp-166, 0x1.2837bdddea64ep-826, 0.0,
     0x1.6e52a5effb37fp-62, 0.0, 0.0, 0.0, 0x1.9339de7d3d896p-823, 0.0, 0.0, 0.0,
     0x1.88922585594a9p-104, 0x1.a9ba66008f824p-904, 0.0, 0x1.2604ad8add274p-382,
     0x1.8d263ab54994fp-905, 0x1.2be8a17431106p-883, 0x1.887e5ad67cbd8p-217, 0.0,
     0x1.0a2e128812597p-861, 0x1.58737cf31d908p-3, 0.0, 0.0, 0x1.140434d29959cp-401,
     0.0, 0x1.c8967728505aap-435, 0.0, 0x1.718312968151cp-921, 0x1.a1d7375eb263cp-235,
     0.0, 0x1.a48e12caf27c1p-751, 0x1.2f2e683eb513cp-708, 0.0, 0.0, 0.0, 0.0,
     0x1.b52dbda443821p-931, 0x1.2853af3d2c8c9p-751, 0x1.3ec940077577ap-242,
     0x1.130b026008a8fp-246, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a963fb3f7184p-152, 0x1.4157c44d6b822p-360, 0.0, 0x1.ee0402a04c02cp-302, 0.0,
     0x1.f83da23b281f3p-7, 0x1.50ffcaad51a88p-95, 0x1.0dbb8430a0933p-206, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ecf698e3387a9p-367, 0.0, 0x1.41be66f1aba6fp-635,
     0x1.d2d64b439ad7dp-83, 0.0, 0.0, 0.0, 0x1.bf1c1b429fe32p-800,
     0x1.15f509db0f7aap-739, 0.0, 0x1.a733c70ba84afp-817, 0x1.1611781dcb41ep-508, 0.0,
     0.0, 0x1.a8a856b006483p-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f79a8edb6140ap-468,
     0x1.211b6c503f064p-24, 0.0, 0x1.20b2c64b45c69p-41, 0.0, 0.0, 0.0, 0.0,
     0x1.23302cf83a64ep-462, 0x1.369fd70bd3a44p-415, 0x1.99ad62ff115a1p-101,
     0x1.668de914a1517p-466, 0.0, 0x1.5fbdb40e7b68fp-912, 0x1.ccd6a3dd94627p-683,
     0x1.5dd2d655a3ad8p-906, 0.0, 0x1.666dddedcd74dp-621, 0.0, 0.0,
     0x1.badb5c615df66p-171, 0.0, 0.0, 0.0, 0x1.f8a3b642d2444p-603, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6c06019be7bdep-563, 0x1.3a2d780d9b49p-999,
     0x1.36da9d0459c86p-682, 0x1.bcfebf8550fa2p-669, 0x1.ba95da80aa166p-709,
     0x1.c71ecca56fdbap-492, 0x1.d391797d6d3f1p-1015, 0x1.d323aadb9da75p-945, 0.0,
     0.0, 0x1.618931bbd9ee8p-727, 0x1.dd2c1d11fb1e1p-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.45d791e476f9fp-176, 0.0, 0.0, 0.0, 0.0, 0x1.17e0abe9bbf3bp-317, 0.0,
     0.0, 0.0, 0.0, 0x1.9d64abed58b7bp-676, 0x1.e6284d8a662d9p-112,
     0x1.031b5b754fec1p-695, 0.0, 0x1.7af6fcaca8e21p-421, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.97712236d881bp-864, 0x1.d50a26fadb48ep-321, 0.0, 0.0,
     0x1.5c433f3ac4355p-449, 0.0, 0x1.bb1309bf1823bp-427, 0x1.fbdf6ef5a13d2p-373, 0.0,
     0.0, 0x1.caa4167c8742bp-22, 0x1.e7c11445c8402p-423, 0x1.bf1c24ad3c3e5p-802,
     0x1.f39a94e1dbca6p-896, 0.0, 0x1.fc95938a14a42p-156, 0x1.d3f3d5025d80fp-755, 0.0,
     0.0, 0.0, 0.0, 0x1.8ef6e6b72d17fp-291, 0.0, 0x1.84fc7e33a72b2p-456, 0.0, 0.0,
     0x1.2b2dc58096264p-606, 0x1.582d2c04794d1p-561, 0x1.6187845401827p-304,
     0x1.5053179e6ccf1p-193, 0.0, 0x1.454b362d24493p-789, 0.0, 0x1.bbee916fe2894p-516,
     0.0, 0x1.b6f6789f19c62p-289, 0.0, 0x1.6ebdfa55be441p-898, 0x1.c727ac7ae2db9p-245,
     0.0, 0x1.a5737e9bcfd44p-448, 0x1.b0b2970a6a68ep-109, 0x1.c40f87cb34099p-927,
     0x1.bb6e7156d80c8p-697, 0.0, 0.0, 0.0, 0x1.98683e71d66dfp-736,
     0x1.f0f7a352eb15bp-474, 0x1.1a6fb20b6d39bp-1003, 0x1.6ab4a7fd00456p-738,
     0x1.f062c25a00d1bp-498, 0.0, 0x1.0d8b8a0ecd1cbp-621, 0x1.279fb09860385p-81,
     0x1.2da552cdb5d2fp-413, 0x1.fab90f63c38f1p-878, 0x1.580d19deba7afp-873, 0.0,
     0x1.a61c5a5fb8251p-964, 0.0, 0x1.e11d5cc2da283p-495, 0x1.cd9547911fa13p-364,
     0x1.727c354c901e5p-565, 0x1.da8a185d99c8ap-799, 0x1.e1ddab9771e74p-249,
     0x1.897780095bd2dp-948, 0x1.509a926278e5bp-317, 0.0, 0.0, 0.0,
     0x1.bec82e8326ba8p-884, 0x1.2c554a47f47acp-332, 0x1.5b667a9a42277p-555, 0.0,
     0x1.d4a37838233dcp-34, 0x1.88a7d60b93f2bp-774, 0.0, 0x1.c08ff6fc573c1p-561, 0.0,
     0.0, 0.0, 0.0, 0x1.4b44d8463269fp-330, 0.0, 0x1.43da0e52035f2p-51,
     0x1.206ba54b8a569p-156, 0x1.3324253001a5ep-285, 0.0, 0.0, 0x1.1f65e3c38b869p-822,
     0x1.27b852554fadfp-349, 0.0, 0x1.5ebb5b6479d79p-645, 0.0, 0.0,
     0x1.4f87710da547bp-744, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4156692317865p-191,
     0x1.d3149782f617ep-438, 0.0, 0.0, 0x1.736c7f841464bp-170, 0.0, 0.0, 0.0,
     0x1.5dc2c60cf7415p-242, 0x1.283b35868faabp-49, 0x1.15bd2b8941284p-407, 0.0,
     0x1.8c9d7951cf274p-389, 0.0, 0x1.98a9605a68ccp-599, 0x1.03188063c984dp-436,
     0x1.4f348159dc537p-220, 0.0, 0x1.24c618f45ca3ap-921, 0.0, 0.0,
     0x1.8c7045c913f53p-962, 0x1.336de7789b3fdp-735, 0x1.7cb1690b6598bp-742, 0.0,
     0x1.24b1c74c5aecap-988, 0.0, 0x1.d56e1cd54e28dp-968, 0.0, 0x1.9ad8467ad800fp-380,
     0.0, 0x1.81dc1bcc14082p-883, 0x1.4d07a15d910e6p-811, 0x1.e229936cde9fap-517, 0.0,
     0.0, 0x1.9679dc5d9982p-158, 0x1.8fd67174a092bp-971, 0.0, 0x1.1eddfba251754p-229,
     0x1.cddbfc135ca36p-179, 0.0, 0x1.00526f3a4d7e8p-654, 0x1.b5c8a6fcbd95p-701,
     0x1.b1a850d1e8f87p-767, 0.0, 0.0, 0.0, 0.0, 0x1.858b32a4b9688p-427, 0.0,
     0x1.e7bdd14ced63cp-67, 0x1.6c216212adb5bp-534, 0x1.7bd540f63a6acp-404,
     0x1.b075d326ce383p-340, 0.0, 0.0, 0.0, 0x1.827ca9047c53p-708, 0.0, 0.0,
     0x1.e137fe72e76ffp-864, 0.0, 0x1.29a5bb0f77a6cp-177, 0.0, 0.0, 0.0,
     0x1.9aee24ec90c75p-30, 0.0, 0.0, 0x1.d35bf21ce2a6fp-641, 0x1.658f272471427p-772,
     0x1.912820e6dad47p-478, 0.0, 0x1.92e2ea4ba9c32p-574, 0x1.d23898d34782fp-449,
     0x1.a3aec5627002bp-601, 0x1.16e77123dfd94p-634, 0x1.0cde2435ea799p-448, 0.0, 0.0,
     0.0, 0x1.267006a096d34p-167, 0x1.bb74823fd7b8ap-519, 0x1.770b46790a354p-478, 0.0,
     0x1.9a6c73c3a3174p-475, 0x1.2d29979ecf0ffp-397, 0.0, 0x1.f94ab1b021bd2p-800,
     0x1.a18a69c990357p-970, 0.0, 0.0, 0x1.34dd99422999ep-595, 0x1.1d4652ea6f1b2p-901,
     0x1.6d8d320503b36p-524, 0x1.486a54b9733a9p-550, 0x1.f36784059f14p-375, 0.0, 0.0,
     0x1.b1eed5a59d52dp-547, 0x1.8ec9023b2441bp-368, 0.0, 0x1.d3787ff93dbfcp-947, 0.0,
     0.0, 0x1.fe1056417b3ddp-153, 0x1.744db94950226p-439, 0.0, 0x1.7d05225147c7cp-653,
     0x1.6a468bea2b73ap-610, 0x1.21797b72e86d4p-603, 0.0, 0x1.2350333c4f66ep-659,
     0x1.1fad2eafdfaa2p-802, 0x1.86a04ff22349p-848, 0.0, 0.0, 0.0,
     0x1.308f9eff2c6a8p-692, 0x1.d77ca601f79dap-117, 0.0, 0.0, 0.0, 0.0,
     0x1.40c0a769abcd4p-784, 0x1.6691c67238e59p-786, 0x1.ff726bbee2d84p-383, 0.0,
     0x1.883b43266bde9p-203, 0x1.0210e63b1b066p-1016, 0.0, 0x1.f3a8008863898p-77, 0.0,
     0.0, 0x1.4bff5b78a1f48p-3, 0.0, 0.0, 0.0, 0.0, 0x1.abdb65a05145dp-964, 0.0,
     0x1.975bc3dc79035p-888, 0x1.f548889db685fp-845, 0x1.60180be8b69ffp-723, 0.0,
     0x1.7534fe5ea5fb5p-916, 0.0, 0.0, 0x1.cfef38f306f03p-785, 0x1.b516d6a3574bap-743,
     0.0, 0x1.5dd92d489fc2dp-560, 0.0, 0x1.21973031cd2c9p-621, 0.0,
     0x1.348db629abe04p-499, 0x1.4103c5598a704p-682, 0.0, 0.0, 0.0,
     0x1.64444b5dad523p-3, 0x1.7c4ecf86c8f2fp-210, 0.0, 0.0, 0x1.3188638aed11ap-179,
     0x1.cfe6aa7bc31e4p-593, 0.0, 0x1.59df654064d33p-60, 0x1.18df67311a6b9p-856,
     0x1.7150d85f59763p-741, 0.0, 0.0, 0x1.2bb52d984c544p-428, 0x1.559c2d68ef65p-226,
     0x1.e6e90833a7d88p-809, 0.0, 0x1.d49acf12a8637p-194, 0.0, 0.0, 0.0, 0.0,
     0x1.2bfa4acd7e2e5p-77, 0.0, 0x1.ee1398296b173p-603, 0x1.7b0ba818923b2p-340,
     0x1.fdfd278016254p-644, 0.0, 0.0, 0x1.93e722aa9f01dp-151, 0.0, 0.0,
     0x1.c954d20711acap-544, 0.0, 0x1.78f6272360948p-864, 0.0, 0.0, 0.0, 0.0,
     0x1.05450c35ad27dp-673, 0.0, 0.0, 0.0, 0x1.170c853a60b9cp-545, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4fcc99aaa79aap-269, 0x1.9a573f344b609p-588,
     0x1.1801ef90f005bp-56, 0x1.7f5e7e1d84ef5p-808, 0x1.3ad1b2155dd9fp-873, 0.0,
     0x1.262dad1174cd4p-924, 0.0, 0.0, 0.0, 0.0, 0x1.8451a15944639p-485
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
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
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosd2_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd2_u35avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
