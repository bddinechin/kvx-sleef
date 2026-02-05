/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammad2_u10kvx.c --function Sleef_tgammad2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.8eefdca2582d1p-675, 0x1.e207cccd4e645p-715, 0.0,
     0x1.6dc4b4930ae51p-977, 0.0, 0.0, 0.0, 0.0, 0x1.78d37d27a0d99p-520, 0.0,
     0x1.2b0f73e4121ffp-148, 0x1.23b366ded9604p-974, 0.0, 0x1.288fdfc51eb5fp-190, 0.0,
     0.0, 0x1.5387d74f6a489p-610, 0x1.6c9312050ba2ep-953, 0.0, 0x1.61a471d6065d7p-492,
     0x1.cf0fc207bf01bp-825, 0x1.78115e8bd293cp-174, 0x1.a26c0670bb0bp-311,
     0x1.376116e97250bp-127, 0x1.c65a2aad01d7ap-25, 0x1.7e2f07bf7893bp-234,
     0x1.82810476e94a8p-447, 0.0, 0x1.6feef4c50d73p-891, 0x1.480059ed8202fp-139, 0.0,
     0.0, 0.0, 0x1.20fc054efcef1p-519, 0x1.9dc9b28ed787bp-647, 0.0,
     0x1.ec660d1ecfdf5p-828, 0.0, 0.0, 0.0, 0x1.3abb54a90cbd2p-578, 0.0, 0.0,
     0x1.19b8a087d5a4p-612, 0.0, 0x1.c87b132bc1f86p-270, 0x1.6e9de5617acd8p-446,
     0x1.a16f4811bd48dp-945, 0x1.f7e966b783529p-610, 0x1.1e54fe016e603p-475, 0.0,
     0x1.1177715778271p-624, 0.0, 0x1.6ab5eafd65dffp-129, 0.0, 0.0,
     0x1.4288d78ba0592p-548, 0x1.3899973f3ded8p-154, 0x1.54043e587a7e4p-903, 0.0,
     0x1.ee7764d03a40ep-1011, 0x1.e027caea45819p-745, 0x1.5ff7476242824p-49, 0.0,
     0x1.cd420b3f8067ap-819, 0.0, 0.0, 0.0, 0.0, 0x1.b2167fa332cf1p-519,
     0x1.57051eb5005afp-983, 0.0, 0.0, 0.0, 0x1.d3eafc213023ap-269, 0.0, 0.0,
     0x1.64c7a92730b8dp-896, 0.0, 0x1.14d08897db48dp-664, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a1840ad39251dp-473, 0x1.c227ee0049469p-587, 0.0, 0.0, 0x1.acd07094f493p-844,
     0.0, 0x1.cce8f6a6ba14dp-634, 0x1.b967109a90556p-465, 0.0, 0.0, 0.0, 0.0,
     0x1.6ddf94751b04dp-917, 0x1.b564cb1ad3c53p-274, 0x1.a20b32348ed97p-291,
     0x1.83e9e07f646b5p-776, 0.0, 0x1.44b9b43e541dcp-305, 0.0, 0x1.09e3cc8e2202bp-158,
     0.0, 0x1.d1390c732f0b4p-303, 0.0, 0x1.add971ea0fbdap-680, 0x1.f3d2373840effp-725,
     0.0, 0.0, 0x1.d4db32a2b1e66p-245, 0.0, 0.0, 0.0, 0.0, 0x1.d4263382cf7cbp-283,
     0x1.b5cd21aa13a6ep-121, 0.0, 0x1.5d42985cfc7fp-447, 0.0, 0.0,
     0x1.57ac554fa857bp-375, 0x1.4e6cbd90efbaep-212, 0.0, 0.0, 0x1.8ebacd65024c8p-406,
     0x1.08c8edfdb55a5p-840, 0.0, 0x1.63eea3a096221p-984, 0x1.e51d6662ce427p-550, 0.0,
     0.0, 0x1.0eca1fe5de17p-576, 0x1.8756fdd97a17p-875, 0x1.bb00981a3bbf8p-989, 0.0,
     0x1.7a4e7a3445abbp-21, 0x1.80c716f09c699p-24, 0.0, 0x1.b0fd6bb046f93p-321,
     0x1.2f32f32b0b7dp-302, 0.0, 0x1.6ac07ec8e67a9p-365, 0x1.e4e94b6c8d963p-231,
     0x1.8bd146be64799p-766, 0.0, 0.0, 0.0, 0x1.574b2740bbecp-687,
     0x1.963b1ba8ca739p-516, 0.0, 0x1.73df3327106aep-204, 0.0, 0.0,
     0x1.cece4cb47a4b7p-926, 0x1.211b17bfa827p-249, 0x1.48e4592771b72p-148,
     0x1.ac7d143e50455p-600, 0.0, 0x1.62e32fcf78a06p-778, 0.0, 0x1.5de5358c6f6d8p-168,
     0x1.290f4c8d7f3bep-569, 0.0, 0x1.ddae8dbe56c62p-175, 0x1.dc76d703be751p-639, 0.0,
     0.0, 0x1.cd924e7bd689bp-439, 0x1.7d1fcc32f8893p-849, 0.0, 0.0,
     0x1.3b8060b3a7211p-549, 0.0, 0.0, 0x1.2fa52cd6f5b9p-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.03b4226a3eccep-590, 0.0, 0x1.83ab91320c91bp-910, 0.0, 0x1.a5e8f4b0be8abp-25,
     0.0, 0.0, 0.0, 0x1.59dc1ae6e6cacp-125, 0.0, 0x1.51ff02ac54bd6p-421, 0.0,
     0x1.9d7530aad5205p-63, 0x1.6460e40a321a8p-430, 0x1.1419bfa622f1fp-687,
     0x1.5315dc0ef7d08p-611, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f03b0124fbap-388, 0.0,
     0x1.4bfcb111021aep-876, 0x1.03a4cf8ad27ddp-792, 0.0, 0.0, 0.0,
     0x1.7c2d1ab2d7b08p-30, 0.0, 0x1.594d0406b32fdp-699, 0.0, 0x1.fe779b526bf37p-71,
     0.0, 0x1.8df3337be3be8p-586, 0.0, 0x1.42eeb191581c4p-494, 0x1.8818f94c0443ap-835,
     0.0, 0.0, 0x1.5d5386d717558p-847, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ac1654036445p-773, 0x1.7c83ad26fd7fap-98, 0x1.50d4ccf776837p-166,
     0x1.95f20872eb06bp-242, 0.0, 0.0, 0x1.11f88e808f7abp-698, 0.0, 0.0,
     0x1.d5b49446cb46fp-94, 0.0, 0.0, 0x1.f06c4bb3ba1d5p-297, 0.0, 0.0, 0.0,
     0x1.29fd2e6243b1fp-506, 0x1.1d081f6e6143fp-985, 0x1.4c8219dd963bbp-37,
     0x1.f6d4d4dde108fp-42, 0.0, 0x1.6467be986f4a9p-177, 0.0, 0x1.0824cfb128091p-524,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da6cf77d4061ep-613, 0.0, 0.0, 0.0, 0.0,
     0x1.ffb26d795e881p-822, 0x1.5bf468e448bc9p-497, 0x1.8c61897bcb7e4p-170, 0.0, 0.0,
     0x1.4bb1e7e52dec3p-986, 0.0, 0.0, 0.0, 0x1.f218c976719b9p-61,
     0x1.14c145e5ddc42p-38, 0.0, 0.0, 0x1.454bc65d8a894p-618, 0x1.0c9a9272f69d4p-228,
     0x1.ed1b77346eaeep-1012, 0x1.befd64aa26515p-5, 0x1.3a59ea433aa8dp-899, 0.0, 0.0,
     0.0, 0x1.7a9a67a80ebccp-560, 0x1.609b5a2b20327p-880, 0x1.7607570fea5cbp-655, 0.0,
     0.0, 0x1.fea218025c641p-829, 0.0, 0.0, 0.0, 0x1.09e1e70139a5p-217,
     0x1.66adf2c896febp-194, 0.0, 0x1.f48b69b8dc5b7p-424, 0x1.ee6970287c992p-90, 0.0,
     0.0, 0.0, 0x1.83f29224d1a72p-647, 0x1.9c9984f775832p-190, 0x1.a957b80c3ebc1p-506,
     0.0, 0.0, 0x1.70231385133dbp-257, 0.0, 0.0, 0x1.6a29013919763p-898,
     0x1.e1bf41b04c1d6p-865, 0.0, 0x1.7b89a8469b224p-644, 0.0, 0x1.90800e3e70579p-876,
     0x1.1ad864fff325dp-423, 0x1.2b21d870bf823p-10, 0x1.598092d917447p-712,
     0x1.25310331172b3p-617, 0x1.e89d36de15464p-335, 0.0, 0.0, 0x1.e1f342126208cp-672,
     0x1.354452970577ep-467, 0x1.cf6cdaad907b8p-474, 0x1.f327bfc535c06p-707, 0.0, 0.0,
     0x1.2e1f62c5bc0f4p-859, 0x1.8ad85eb478595p-652, 0.0, 0.0, 0x1.8b948834660ddp-76,
     0x1.def1dfa8416ap-384, 0.0, 0.0, 0x1.5d304e6a7c77ap-173, 0x1.7c7a7030e7a2p-767,
     0x1.48e36893f3945p-427, 0x1.f25877a51ba9ep-567, 0.0, 0x1.71ddd034a9205p-582,
     0x1.15842804d620ap-495, 0x1.3e908beda4575p-214, 0.0, 0.0, 0x1.3c36265c89273p-967,
     0x1.d0274635b1146p-825, 0.0, 0x1.00fa3007e16b2p-193, 0.0, 0.0,
     0x1.450e0b87df3b3p-174, 0x1.d1c1d80621e39p-430, 0.0, 0x1.1d5eb934f7dfbp-25,
     0x1.d48f8de5d0051p-508, 0.0, 0.0, 0x1.cce335a6ee067p-813, 0.0, 0.0,
     0x1.75e70e31bdcabp-480, 0x1.a15f88472b43fp-980, 0.0, 0x1.d269b56791a96p-614,
     0x1.fb3a622c5a62bp-970, 0.0, 0x1.d7ff1c3d057bp-419, 0x1.50ae418ee73a6p-38,
     0x1.50dfca1c4b4cdp-468, 0x1.5b209a4c62c61p-712, 0x1.dbd8dd81e77ddp-792, 0.0, 0.0,
     0x1.cb0d06d8b703ap-174, 0.0, 0x1.e23a3dbae5f92p-939, 0x1.98d91c812f8a1p-478,
     0x1.dba0724ab8663p-1000, 0x1.4263726e15367p-46, 0x1.d378e516c3d6ep-662,
     0x1.d7060938d0af3p-1012, 0.0, 0x1.0afdc8058b39cp-805, 0x1.435fddcfd2722p-159,
     0.0, 0x1.42ebaff5bbe8p-16, 0x1.0ceeeddcf59e8p-95, 0.0, 0.0,
     0x1.44b858a88d401p-207, 0.0, 0.0, 0x1.c09c21149c756p-387, 0x1.933a0feed9b0ap-504,
     0.0, 0x1.e1c99a9f2c252p-68, 0x1.4e1f5855aa966p-519, 0x1.e8bca24dfaf04p-362,
     0x1.215979eff84b6p-609, 0.0, 0.0, 0.0, 0x1.df082f7e459f8p-33,
     0x1.648e1d77240d1p-999, 0x1.1f35d501421e9p-198, 0x1.20e4f0acf5cabp-154, 0.0, 0.0,
     0x1.e4f02cff23107p-194, 0x1.50b5fa1a29c56p-159, 0.0, 0x1.eda8691c546d5p-924,
     0x1.4e79eb6cbffa2p-699, 0x1.59a5cc67785d8p-492, 0.0, 0x1.cff836290c814p-459, 0.0,
     0x1.a1a0491bbd5b6p-392, 0x1.0e8af12e33de4p-180, 0x1.ccfefbb56947dp-756, 0.0,
     0x1.82e43fb8e5e79p-94, 0.0, 0x1.0676a8440d457p-496, 0.0, 0x1.cbedb89a61cfcp-814,
     0.0, 0x1.80063597274edp-458, 0x1.c93d461c06095p-393, 0x1.5fd34b393a916p-602, 0.0,
     0x1.b34c59b5ebaeep-919, 0x1.f44d6d4e8e282p-521, 0x1.205fe2a17f169p-629, 0.0, 0.0,
     0x1.88890a7edd1c9p-183, 0.0, 0.0, 0.0, 0x1.0101cfa2cb034p-889,
     0x1.887d709e3b416p-331, 0x1.025d380751039p-338, 0.0, 0x1.5b191362e4ed7p-980, 0.0,
     0.0, 0.0, 0x1.f2f39228e2699p-423, 0.0, 0x1.02ab2a48de29dp-650,
     0x1.2f75a190e3e36p-741, 0x1.5729254f47b7ap-312, 0x1.8acdf48ddcab2p-513, 0.0,
     0x1.63fe16adc93d2p-118, 0.0, 0.0, 0.0, 0x1.15b0ac2b05513p-29,
     0x1.d30ea51af8ff4p-562, 0x1.94b44e1830c42p-514, 0x1.46f25e53bd143p-493, 0.0,
     0x1.8524ddc4e014dp-660, 0.0, 0x1.699c8bade96d5p-166, 0.0, 0x1.f38bf682ce385p-824,
     0.0, 0x1.cffcac45a81fep-138, 0.0, 0.0, 0x1.0ef979cbefef2p-179,
     0x1.56e508f729464p-832, 0x1.22768dd040c69p-824, 0.0, 0x1.1cef5e3f9b02fp-666, 0.0,
     0.0, 0x1.4ed6f111d6d45p-407, 0x1.14e9d927b75dep-656, 0.0, 0.0, 0.0,
     0x1.51dacb726ec49p-606, 0.0, 0x1.39c8b22f9209dp-649, 0.0, 0.0,
     0x1.509575bf33b6bp-419, 0.0, 0.0, 0x1.35f505cf4559fp-969, 0x1.4c857d7c07cc4p-423,
     0x1.045b92af71eaap-787, 0.0, 0.0, 0x1.e09294a4934c4p-501, 0.0,
     0x1.619bd887a261fp-71, 0.0, 0x1.244cd0312abf1p-715, 0x1.4427216bd8eb5p-445,
     0x1.941c0ceeb7e64p-115, 0.0, 0.0, 0.0, 0x1.046405050d80bp-34, 0.0,
     0x1.7c956f9b7da6bp-776, 0x1.361cdee386f5p-1008, 0.0, 0x1.ef33903a51a42p-542, 0.0,
     0.0, 0x1.f3418cd9a272bp-893, 0.0, 0.0, 0.0, 0x1.cbc028c62526ep-317, 0.0, 0.0,
     0x1.e33e899c2948bp-160, 0.0, 0x1.85a767a334b48p-627, 0x1.96b0cbf5a168p-481,
     0x1.70d3caf3bc324p-426, 0.0, 0x1.94d4a1f43f5f7p-827, 0x1.e4f9b41762f53p-71,
     0x1.2e6e6a9920927p-111, 0.0, 0x1.3419347fa7af6p-250, 0x1.14043daf9991ap-651,
     0x1.8edc4e2b64c1fp-712, 0.0, 0.0, 0.0, 0x1.5fb22dec5e6f3p-188,
     0x1.b7f5f84aa4343p-372, 0.0, 0x1.996d30603ca23p-630, 0.0, 0x1.b18f66f337a41p-783,
     0x1.f91a5c0c1a965p-694, 0.0, 0x1.fa56a76b28e4ep-301, 0x1.8083af4960a23p-819,
     0x1.40290709cd904p-30, 0x1.818a22048ca59p-789, 0.0, 0x1.47fa2b40727fdp-560,
     0x1.ff129b14ef8c6p-501, 0x1.3a84df668a501p-891, 0x1.76a1462d0063dp-964, 0.0,
     0x1.0d40e7b849029p-307, 0.0, 0x1.099bf4b5fcf69p-78, 0.0, 0x1.00dc18dec9588p-211,
     0.0, 0.0, 0x1.22876bf5d4a6bp-607, 0x1.54faa385df3ebp-907, 0x1.b68a20d9a916bp-423,
     0.0, 0x1.10bc27b32f509p-168, 0.0, 0x1.2c8592ea5a01fp-790, 0.0, 0.0,
     0x1.5989adb20fbdap-123, 0x1.d3080a6c0023cp-287, 0x1.fa55ac8c03aedp-566,
     0x1.3522ab733e1d7p-423, 0x1.32c3fbd2a300dp-31, 0x1.0b559add91393p-232,
     0x1.ff35b74e65a95p-658, 0.0, 0.0, 0x1.e5c200205ce9fp-967, 0x1.84f9fb9914d61p-889,
     0x1.f72c66105d0bep-954, 0x1.7ec574cec644bp-469, 0x1.7c941505e6941p-132, 0.0, 0.0,
     0.0, 0x1.f16e15f2706afp-912, 0.0, 0.0, 0x1.dde5015e22973p-179,
     0x1.648ea20fea6e4p-574, 0x1.dd796468467c7p-173, 0x1.e5c1d7b35b3ap-389, 0.0, 0.0,
     0x1.55495a5e2cd65p-381, 0x1.a5d3f68995f56p-635, 0.0, 0x1.b9ea7ee2e296ap-424,
     0x1.2b2984626bc06p-426, 0x1.dfaed7a45f9d4p-346, 0x1.ee6f0ed353a3ep-19,
     0x1.c94a213159d33p-486, 0.0, 0.0, 0x1.9399a517e900ep-144, 0.0, 0.0, 0.0, 0.0,
     0x1.541da811fcf8p-673, 0.0, 0x1.92cb0299a285dp-524, 0.0, 0.0, 0.0,
     0x1.bdbd21b51cf06p-738, 0x1.55668064d1ecbp-742, 0.0, 0x1.a8b283638fad3p-801,
     0x1.ed02ca9722041p-895, 0x1.d4e62334d1f68p-434, 0.0, 0.0, 0x1.d3bbba6005f49p-873,
     0.0, 0x1.d492344c98598p-488, 0.0, 0x1.2f269c423a04bp-42, 0x1.fd53a3991d3c6p-964,
     0.0, 0x1.358084e762a4ap-645, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8224ec124ed2p-163,
     0x1.75499af219d52p-793, 0.0, 0x1.e53bb1193fd2p-608, 0x1.cdfed28d0b2cdp-869, 0.0,
     0.0, 0.0, 0x1.d78469cda06bfp-349, 0.0, 0.0, 0x1.62db9efb13bb7p-138,
     0x1.4c7439cc45d8ap-791, 0.0, 0.0, 0x1.4540aba3566f8p-538, 0.0, 0.0,
     0x1.daf03191a8d0dp-830, 0.0, 0x1.793a10217d494p-765, 0x1.66df95bd1b78ap-948,
     0x1.31211d15e8e8dp-841, 0.0, 0.0, 0.0, 0.0, 0x1.6abe7ce4fdffep-373,
     0x1.2cb64da48517cp-880, 0.0, 0x1.3ba58ae796a07p-459, 0x1.50d18b515388p-743,
     0x1.61829db96869bp-355, 0x1.bb2921a487391p-158, 0.0, 0x1.da44734c2b397p-173,
     0x1.a0f6805b443a3p-176, 0x1.7f77dbbd437c8p-168, 0x1.63016a32b83b7p-1000,
     0x1.dd3073371a40cp-147, 0x1.2e76290c1ebp-471, 0x1.9e38aadc74763p-432,
     0x1.b93b7d85d0adp-42, 0x1.62c1c2c70950fp-101, 0.0, 0x1.0b9f1b723921dp-275, 0.0,
     0.0, 0x1.606466726a15dp-951, 0.0, 0x1.fa1f0f92c09a2p-794, 0.0, 0.0,
     0x1.761b9c720c21dp-113, 0x1.f68b0ce111e92p-687, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5183de932619dp-182, 0x1.6f6f277c0297ap-278, 0.0, 0.0, 0x1.ee15059ea93a9p-236,
     0x1.e54e7a1692d56p-729, 0.0, 0x1.29c06ce5fd3a3p-427, 0x1.ad87582f888a5p-570,
     0x1.3a3e73fb89c7cp-483, 0.0, 0.0, 0x1.bb7542fa541ebp-1011,
     0x1.73a11a1a82f0bp-514, 0.0, 0.0, 0x1.47b48b6ee3863p-479, 0.0, 0.0, 0.0,
     0x1.663d41a8ef0cfp-567, 0x1.c3c2125beb6fep-98, 0.0, 0x1.0c58b0294ce74p-954, 0.0,
     0x1.de42da149754fp-941, 0x1.3589603a2f95p-978, 0.0, 0.0, 0x1.a71dcc9502696p-252,
     0.0, 0.0, 0x1.fe402afe20a36p-274, 0.0, 0x1.d19bc60c4a144p-829,
     0x1.3a720fb58deb9p-506, 0.0, 0.0, 0x1.ba3ef4d419d51p-353, 0.0,
     0x1.c4a6715d9a126p-779, 0x1.64c72ef759bd3p-976, 0.0, 0.0, 0.0,
     0x1.2a47749ae9012p-817, 0.0, 0.0, 0.0, 0.0, 0x1.4b1977da91d3dp-522,
     0x1.956698d25a0d4p-837, 0x1.7e0e05fa79c7ep-557, 0.0, 0x1.da5343c99c1e7p-67,
     0x1.3af88fbab20a8p-235, 0x1.cfadb65713efcp-471, 0.0, 0x1.ec91f98178eeap-367,
     0x1.9b03690d167dbp-838, 0x1.51cfcfd96a24p-318, 0x1.04674ae75ab21p-894,
     0x1.422563ec3c768p-427, 0.0, 0x1.3e210250fc1b8p-21, 0x1.26049fef83463p-216,
     0x1.bbe29ca26db7p-439, 0x1.6f00ad628a675p-15, 0x1.fa11838b8d35fp-872, 0.0,
     0x1.d79ce5c7a15e1p-249, 0x1.f618ac202d337p-61, 0x1.62f78e875d93ep-48,
     0x1.6ab6dd55b6ab1p-307, 0.0, 0x1.c48667b652724p-383, 0x1.175b69d94d5ebp-349, 0.0,
     0x1.6e80d7a18e3bap-205, 0.0, 0x1.0ddccfaac00e2p-458, 0.0, 0.0, 0.0,
     0x1.312381d5e5b6fp-623, 0.0, 0.0, 0.0, 0x1.46daeb25bd4p-370,
     0x1.0a4f514a5de96p-835, 0.0, 0.0, 0x1.d03e06a431f62p-501, 0x1.d1e7acd7244d3p-321,
     0.0, 0.0, 0.0, 0x1.4eb66f72330dp-427, 0.0, 0x1.bd1ceeb3bd513p-746,
     0x1.e9c11bf55264fp-201, 0.0, 0x1.d4c2c231a0c92p-907, 0.0, 0x1.7b68a857db9bcp-280,
     0.0, 0.0, 0x1.a2de06c60ad0ep-953, 0.0, 0x1.a24b089e64ea2p-305, 0.0,
     0x1.6a75d78bfce7p-697, 0.0, 0x1.b10c0aea8d50dp-468, 0.0, 0x1.426d71a1d391ep-464,
     0x1.3ff3b8ac93795p-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06741a0382357p-528, 0x1.7ff6064641759p-24, 0x1.f8b0c1bf76314p-996, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e29c7f72682c2p-239, 0x1.2621d2504c19dp-764, 0.0,
     0x1.21045a8dc45e4p-383, 0x1.c500b0d723a2p-190, 0x1.6d5d3084a0927p-719,
     0x1.0821ac658258p-900, 0x1.ff30bfdb3ba1bp-515, 0.0, 0.0, 0.0, 0.0,
     0x1.555ee7a88985bp-740, 0.0, 0.0, 0x1.cd0856d0935fcp-818,
     0x1.e5cc0f4e7f353p-1011, 0x1.23e29a31b195ep-965, 0x1.23c28c1b8d752p-575,
     0x1.5c219889517acp-234, 0.0, 0.0, 0x1.7143a91952cedp-250, 0x1.62ca36cfaaa78p-448,
     0x1.3f4af983356fbp-429, 0x1.c758832d1d9cp-276, 0.0, 0x1.5bdf2e11df22cp-442, 0.0,
     0.0, 0.0, 0.0, 0x1.3a25b54f3ac2ep-102, 0.0, 0x1.810b3bb807d74p-946, 0.0, 0.0,
     0x1.9016f2f00e9ebp-477, 0x1.345863f37e3a7p-268, 0x1.3c1a12bb64024p-305,
     0x1.b907c01f62618p-771, 0x1.a4c776b17eed3p-20, 0x1.ca70b5d4e4ad7p-646, 0.0,
     0x1.288b80e188556p-866, 0.0, 0.0, 0x1.2e1b382070c01p-62, 0x1.3efd52ea5c777p-24,
     0x1.22d765eb1bd2ep-370, 0.0, 0.0, 0.0, 0x1.1a11ac80049a7p-528,
     0x1.ccd92c3baae87p-284, 0x1.6bf9caef594b6p-27, 0.0, 0x1.8bc70a7966bb2p-405, 0.0,
     0.0, 0.0, 0.0, 0x1.d40124869c8adp-1, 0x1.e1b7596cc62abp-383, 0.0,
     0x1.aafc75ac21443p-918, 0.0, 0.0, 0x1.e8562fb9a985p-497, 0.0,
     0x1.179e75d9465cbp-117, 0x1.c7ca18170c809p-32, 0.0, 0.0, 0x1.c3bafb6875876p-593,
     0.0, 0.0, 0.0, 0.0, 0x1.5fb7d06dd7957p-99, 0.0, 0.0, 0x1.8a9db4b3954b4p-347,
     0x1.1a7e65801ef72p-421, 0x1.d834bdf84adc9p-414, 0x1.dc9c5be938382p-369, 0.0, 0.0,
     0x1.65a6ca9f28b84p-792, 0x1.0c7f8829b9565p-274, 0x1.c60505803cb8p-451, 0.0, 0.0,
     0x1.ad6ab34cb7be6p-735, 0.0, 0.0, 0x1.2a7bc8fb9a318p-380, 0.0, 0.0, 0.0,
     0x1.1f1c362fe0448p-903, 0x1.a2c12d65c666bp-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4071537fffc7cp-718, 0.0, 0.0, 0x1.7dbd90bf4253bp-670, 0x1.7e6bc709692fp-908,
     0x1.4430fd1874b5ap-697, 0x1.2ccfcf10a2a5cp-656, 0x1.f8552a5c56d53p-929,
     0x1.44a49f37b13adp-772, 0x1.a5f4474bce32fp-193, 0x1.818e167759f7ap-497,
     0x1.82010f70650e1p-197, 0.0, 0.0, 0.0, 0x1.bdfe0f29569c4p-169,
     0x1.a17e68f3622b5p-301, 0.0, 0x1.8508eaaa2a989p-579, 0.0, 0.0, 0.0,
     0x1.75f20381d32b7p-990, 0.0, 0x1.ca7233e73494dp-450, 0x1.515584358d40ep-918,
     0x1.ab9fb27b1ce0cp-79, 0x1.bcd53da2fc17dp-563, 0x1.8bc01c9882526p-521, 0.0,
     0x1.a1e5e8fa36f9p-922, 0.0, 0x1.67068db960856p-445, 0x1.beb943795b425p-376,
     0x1.73f8578ead9ccp-206, 0.0, 0x1.832b56812f9e5p-375, 0.0, 0.0, 0.0, 0.0,
     0x1.a68d8d008cdc6p-505, 0x1.286addf9a39f7p-58, 0x1.9cdd71b27ef4ap-34, 0.0,
     0x1.5200fcd376221p-893, 0.0, 0x1.166134212ae57p-437, 0.0, 0.0,
     0x1.650cc1d1a414cp-875, 0x1.137a73279a8f7p-395
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_tgammad2_u10kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_tgammad2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tgammad2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
