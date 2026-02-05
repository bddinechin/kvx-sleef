/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospid2_u05avx2128.c --function Sleef_cospid2_u05avx2128 \
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
     0.0, 0.0, 0.0, 0.0, 0x1.8e6c3d02fb224p-320, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b3fa6e57419dp-904, 0.0, 0x1.4f7d62ab65eap-116, 0x1.419786c4cdbbbp-489,
     0x1.5137e9fe880f1p-352, 0x1.e551be74d4a37p-436, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87eb615439619p-695, 0.0, 0x1.5f661e832d43bp-982, 0.0, 0.0,
     0x1.cfea34b679c2fp-279, 0.0, 0.0, 0x1.aef840ae8b712p-212, 0.0,
     0x1.0434c53241077p-85, 0.0, 0x1.6d62ddc20982ep-610, 0x1.0e3e6d04378a2p-987, 0.0,
     0x1.bd1c8a4dc6783p-950, 0.0, 0.0, 0x1.7073faf63bcb1p-97, 0.0,
     0x1.605cd7636d05ep-704, 0.0, 0x1.eb646fbaa9b57p-791, 0x1.1d14bb2eb7ce6p-140, 0.0,
     0.0, 0x1.27f3206186dfp-145, 0x1.20dc2446a487p-410, 0x1.45779815e1713p-1019, 0.0,
     0.0, 0x1.12c7f9cf4aa94p-77, 0.0, 0.0, 0x1.8dc93bcff3863p-93,
     0x1.9e83fb1be44a9p-747, 0.0, 0x1.89ec3ceacc419p-944, 0x1.6547abc7424fep-870, 0.0,
     0x1.c123ebae7ca6ap-391, 0x1.073986175d4f7p-737, 0x1.e19f1e5f6c353p-73,
     0x1.71e8f2bccd692p-464, 0.0, 0.0, 0x1.0eb1c1fb51c03p-164, 0x1.12726b3c7a372p-947,
     0.0, 0x1.81059793241fdp-35, 0x1.55172da897c0cp-619, 0.0, 0x1.661a30c948f39p-819,
     0.0, 0x1.d7584e615332cp-331, 0x1.17ffa6fdc5a9fp-63, 0x1.79903adc5d08cp-871,
     0x1.32697bceddb76p-234, 0x1.2c68e653472e3p-881, 0x1.b187bf86cfc3dp-466, 0.0,
     0x1.31c7e97910744p-27, 0.0, 0x1.1f9489f8c9f25p-799, 0.0, 0.0, 0.0,
     0x1.ebd17bc31ac12p-859, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47f81f397807ep-19, 0.0,
     0x1.522252faf43fep-729, 0.0, 0x1.ba7333e89265ep-74, 0.0, 0.0, 0.0, 0.0,
     0x1.b5873c72cee28p-173, 0x1.a59f66fd26175p-677, 0.0, 0x1.6684311a55b38p-126,
     0x1.5ceb04f3c93d7p-654, 0x1.f803e7a6cd5d7p-772, 0.0, 0.0, 0x1.c1407ba3654a5p-952,
     0x1.f9aa7e686b217p-820, 0.0, 0.0, 0x1.ee8158547a9b2p-529, 0.0,
     0x1.64311e5a0d133p-702, 0.0, 0x1.3b6176f3eb09bp-906, 0.0, 0x1.30d0d7151ecfp-825,
     0.0, 0.0, 0x1.cc78b230748a8p-790, 0x1.e1ec8c0ebaae5p-926, 0.0, 0.0, 0.0,
     0x1.89340032180a6p-218, 0.0, 0.0, 0x1.dfaf40245e948p-874, 0x1.5c3308e8ad111p-253,
     0x1.3f050aee11abep-479, 0x1.01bb1bfde1cf2p-509, 0.0, 0.0, 0x1.2c41df1224f65p-716,
     0x1.e414221a4b248p-782, 0.0, 0x1.ce23361ad4aafp-898, 0x1.f0d14b7d779c3p-8, 0.0,
     0x1.ae78a6c9c7e26p-612, 0.0, 0x1.0e047e3b04e58p-969, 0x1.7b80424a9af6fp-245,
     0x1.997880905a51ap-200, 0x1.369056c7b8d8ap-328, 0x1.92423a5855c3ep-875,
     0x1.02dfb0fd4699ep-748, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0x1.5a397ec660e98p-827,
     0x1.aedc690694b01p-489, 0x1.856a956352175p-715, 0.0, 0x1.366d1b3b49163p-995, 0.0,
     0x1.60bf6676b6577p-467, 0x1.7d4e75e3b9eccp-334, 0x1.196e8a0150cb1p-222, 0.0, 0.0,
     0.0, 0x1.0e6f688d6e98ap-462, 0.0, 0x1.75542eebdb96ap-560, 0.0, 0.0,
     0x1.f34f2cbef1838p-544, 0x1.01e137d747c42p-153, 0x1.c5c22f8d016cap-52,
     0x1.62d9308b46d31p-263, 0x1.aefaa8e77bf84p-101, 0.0, 0x1.b6bd411fc4718p-286,
     0x1.7e869dbf3648ep-245, 0x1.8e0db66f57855p-521, 0x1.f232b32567313p-967, 0.0, 0.0,
     0x1.4d4551fbf59cdp-805, 0.0, 0x1.69b417e1046adp-648, 0x1.fcceef02c0a87p-50,
     0x1.4ceb1ec009a78p-928, 0x1.e818dfc838c0ap-957, 0.0, 0x1.dff7f2f1d61b5p-92,
     0x1.1b613b9c69fd2p-833, 0.0, 0x1.c85fa462f1c28p-419, 0.0, 0x1.ce9e0a3f572cdp-556,
     0.0, 0.0, 0x1.e78ea82b580dep-615, 0.0, 0.0, 0x1.2e69a4b0a7961p-965,
     0x1.eb4c805f74ee8p-309, 0x1.42da4a3ab652ap-485, 0.0, 0x1.c4de135b15c66p-259, 0.0,
     0x1.4ec3fedc7499fp-786, 0x1.eefd4b3c8ae28p-51, 0.0, 0.0, 0x1.408eea2eebaf8p-1003,
     0.0, 0x1.dd0ca97b82c1cp-285, 0.0, 0.0, 0.0, 0x1.5dc6d465b8bb6p-977,
     0x1.07dca282cd844p-300, 0x1.9c6febd13bcf4p-23, 0.0, 0x1.64af8c7fe1b61p-165,
     0x1.3b37b03e013d6p-428, 0x1.2978490239db9p-43, 0.0, 0.0, 0x1.2cbe774c6cc0bp-61,
     0x1.e75ea04571f7ep-509, 0x1.97a9411008707p-604, 0x1.c782a7ad2ccc4p-576, 0.0,
     0x1.ac9533f425e7dp-171, 0x1.864cd9b8d73f7p-280, 0x1.9a55f2bd4ca2p-810, 0.0,
     0x1.bee5cfd34539dp-716, 0.0, 0x1.feb9190c8444p-208, 0.0, 0x1.f0cb572812192p-706,
     0.0, 0x1.91f0a35a250f3p-613, 0.0, 0x1.ce3bea84f6e1ep-908, 0x1.590c444afcf18p-523,
     0.0, 0x1.71ef8c7fd495dp-659, 0.0, 0.0, 0x1.689918d400df1p-42,
     0x1.1dd389489a60ap-803, 0x1.58749a400a40fp-879, 0.0, 0.0, 0x1.a839d7fc366e4p-312,
     0.0, 0.0, 0.0, 0x1.3c5d60cb706ebp-532, 0.0, 0x1.efcfb733ff8d2p-71, 0.0, 0.0, 0.0,
     0.0, 0x1.01cd80841564p-106, 0x1.78b8046e373bep-670, 0.0, 0.0,
     0x1.6945e23893f02p-957, 0.0, 0.0, 0x1.1c39ed0fbb7b3p-659, 0x1.9526df55457ddp-790,
     0.0, 0.0, 0x1.394eb506bff18p-590, 0.0, 0x1.beeb30b71afc9p-190, 0.0, 0.0,
     0x1.bb2d058b7371ap-830, 0x1.03897bd7b0cbp-88, 0x1.ec1d0ba746c09p-283, 0.0,
     0x1.1cdc3bd78504fp-192, 0.0, 0x1.65d94d3ab8916p-396, 0.0, 0x1.1e788abce6533p-956,
     0.0, 0x1.e660698739894p-27, 0.0, 0.0, 0.0, 0x1.ad8ccca173c3cp-695, 0.0,
     0x1.a097765704e1ep-385, 0.0, 0x1.218de8c60a1cap-539, 0x1.c9b99c5f80db1p-720,
     0x1.fc6bcb7eeef9fp-656, 0.0, 0x1.ee657facc6494p-251, 0.0, 0.0,
     0x1.22e86f11098c8p-313, 0x1.bcafde3e25be2p-514, 0x1.70df06cf9f833p-790,
     0x1.575193cc0e3c3p-610, 0.0, 0x1.cb62c4a8805cap-679, 0.0, 0.0,
     0x1.4be37d8c81526p-552, 0x1.6f0b6667a0d81p-553, 0.0, 0x1.481efc1ededa3p-35, 0.0,
     0.0, 0x1.013a7c353b443p-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1de849129ab28p-137,
     0.0, 0.0, 0x1.abc78c4e10f71p-806, 0.0, 0.0, 0.0, 0.0, 0x1.e57bd869ddcc1p-823,
     0x1.0cd7989239655p-376, 0x1.a46661e0b5e45p-940, 0.0, 0.0, 0.0, 0.0,
     0x1.b3d5845b92b94p-254, 0x1.41c9005c8a66dp-57, 0.0, 0x1.ff6b5dd1b03d9p-509,
     0x1.adb29307edc5fp-406, 0x1.0c67b6c790f6bp-432, 0.0, 0x1.b03bc793750c9p-37,
     0x1.2d2e59015d197p-363, 0.0, 0x1.69dd40e9cabe2p-442, 0.0, 0.0,
     0x1.307e2b4b78a31p-787, 0x1.16d08eb194d3bp-23, 0.0, 0x1.32239717d7895p-15, 0.0,
     0.0, 0x1.e915386681aap-847, 0x1.0f194c3f67e86p-379, 0.0, 0x1.56dc5bc93491ap-301,
     0x1.d518437eb5fccp-628, 0x1.4771fee11d1fdp-408, 0x1.616fcf5424feap-802, 0.0,
     0x1.f69916fac5a48p-589, 0x1.a3f6ca4f228e2p-731, 0.0, 0.0, 0x1.4761b09d85272p-667,
     0.0, 0x1.280bea6c7f061p-597, 0x1.4f458b5118ab7p-896, 0.0, 0.0,
     0x1.f75286bd08d7cp-786, 0.0, 0.0, 0x1.1e4a9b35792b9p-117, 0x1.8c4f76c326387p-117,
     0x1.5374190095b64p-740, 0x1.c2bf48b665498p-421, 0.0, 0.0, 0.0,
     0x1.b6393cd99830ep-413, 0x1.9ba7b60537f8cp-256, 0.0, 0.0, 0.0,
     0x1.ecfb2d7c4cc71p-541, 0x1.b819482a168e3p-237, 0x1.f9fb76ecc31fp-493,
     0x1.6da4b328b3beep-433, 0.0, 0.0, 0x1.aeca77dc7bdd3p-220, 0x1.d0257d7407639p-315,
     0x1.c35765a88449p-999, 0.0, 0.0, 0.0, 0x1.23a2962cb925bp-28,
     0x1.3f0ac6ed4fea6p-501, 0x1.a1f8138d92bd3p-990, 0.0, 0.0, 0x1.e3b10bf334745p-944,
     0x1.216fa440faa79p-584, 0x1.acd4f1b90d534p-17, 0x1.8a708f7bfc07p-408,
     0x1.4a4387fb2475p-699, 0x1.6309ed03e866ap-214, 0x1.e117fa91d0959p-511,
     0x1.ba3b708c9cc4bp-239, 0x1.ed384aa82d3a4p-395, 0x1.5aec2ab6440a7p-669,
     0x1.e76f59b61dc2bp-142, 0.0, 0.0, 0x1.306fcea058678p-250, 0x1.2903f91c4a348p-378,
     0.0, 0x1.4c8d608af197dp-757, 0x1.8d67a8d22a6a4p-846, 0.0, 0x1.67f24aef82e68p-32,
     0x1.b1a7bdeacdd3fp-199, 0.0, 0.0, 0.0, 0.0, 0x1.972af13c1fb76p-942,
     0x1.7cee9d25ba95p-380, 0x1.b8471bd1f7967p-36, 0x1.670fd0835b6dp-762, 0.0,
     0x1.15d2f044dc0d3p-616, 0.0, 0.0, 0.0, 0x1.84f347b7c253cp-860,
     0x1.5a6a0111ace96p-961, 0x1.24a2519b51bcp-262, 0.0, 0x1.508bcd9f92844p-42,
     0x1.59a3c841ad504p-809, 0x1.344775b32e2e3p-297, 0.0, 0x1.04a1eed054ee5p-635,
     0x1.2c2926db1e21ap-286, 0x1.de965e55d7a35p-806, 0x1.406c4f89344d5p-413,
     0x1.bd811d1a40527p-133, 0.0, 0x1.7b2c906be51a6p-568, 0.0, 0.0, 0.0, 0.0,
     0x1.7144ea744f904p-551, 0.0, 0.0, 0.0, 0x1.e4056cc617594p-186, 0.0, 0.0,
     0x1.36dffb235fee2p-57, 0.0, 0.0, 0.0, 0x1.d8e473f0b82fep-811, 0.0,
     0x1.e7ed6895781dbp-226, 0.0, 0x1.255f1c15fb943p-542, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.759e843fb8a2p-854, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1763edf88d9d2p-574, 0.0, 0x1.cea04733f6e12p-42, 0.0, 0x1.84fb1ea43faf7p-610,
     0x1.8959502c0d9edp-220, 0x1.c47be4b7c7165p-526, 0x1.19975807f89abp-562,
     0x1.2d9da047404bep-65, 0.0, 0x1.ab9c3fff0d678p-193, 0x1.a93df4c4f385cp-420,
     0x1.47ebf9477a1c4p-398, 0.0, 0x1.7560f01374b52p-562, 0x1.9b5d30547e2b5p-711,
     0x1.051bd058ca661p-286, 0x1.e4877e268bd3cp-888, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9d444d7c83f36p-538, 0.0, 0.0, 0x1.3210dc528baf3p-806, 0.0,
     0x1.f28cadc8d54bp-523, 0.0, 0.0, 0.0, 0x1.67ac18a6ae2dfp-105, 0.0, 0.0, 0.0,
     0x1.4f983310db577p-75, 0x1.f5c7ab8ae8249p-317, 0x1.185120c082d97p-357, 0.0, 0.0,
     0x1.7ae778e78a1f2p-305, 0x1.080a6a38635ebp-483, 0.0, 0.0, 0x1.0ea74ab632f27p-491,
     0x1.605aa6fcb60f9p-971, 0x1.a135d5e711568p-465, 0.0, 0x1.e833c04eb0addp-221, 0.0,
     0x1.12d266473ea43p-422, 0x1.ae354c9e7f16cp-558, 0.0, 0.0, 0x1.376e25fe49648p-566,
     0x1.50c7428550cb9p-975, 0.0, 0.0, 0.0, 0.0, 0x1.5450b5930eea7p-244, 0.0, 0.0,
     0.0, 0x1.df975b25131a8p-14, 0.0, 0x1.7faeb63c818b2p-92, 0.0,
     0x1.28e28f0899881p-796, 0.0, 0.0, 0.0, 0x1.e942f9801ff28p-263, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.48f2e6915e678p-94, 0x1.340d21bb12829p-285, 0.0,
     0x1.880f34552923dp-471, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d46105fd13dap-464, 0.0,
     0x1.e00dc697a07f4p-328, 0x1.d39861bfd19acp-671, 0x1.6481ed97d678fp-998,
     0x1.da35f535fec0ep-888, 0x1.fc73e4a677b7fp-964, 0.0, 0x1.df60784273762p-841,
     0x1.35b9efdd1eb33p-157, 0.0, 0.0, 0x1.931f27ccbdfep-337, 0x1.8d18c7f8b6d1cp-17,
     0.0, 0.0, 0x1.f6ac5695e7d83p-881, 0x1.9ac0048dede92p-30, 0.0, 0.0,
     0x1.db8974b01443p-48, 0x1.e15ac24f17fap-448, 0x1.7e1008de92a4p-935, 0.0, 0.0,
     0x1.6e5a1a2c3dd17p-695, 0.0, 0.0, 0x1.a25cf935582e9p-571, 0x1.1013f0e158204p-713,
     0x1.5e95ccea1ee17p-995, 0.0, 0x1.caec12d73782p-411, 0.0, 0.0,
     0x1.7e4356c78747cp-260, 0x1.b027d198cfe6ep-356, 0.0, 0.0, 0x1.263c39d5230d2p-107,
     0.0, 0.0, 0x1.704df94eda108p-374, 0x1.0fdc1ec0fe24cp-899, 0.0,
     0x1.ae08776e63c7bp-191, 0.0, 0.0, 0x1.d08e236f09546p-498, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a6aaa2b558fc1p-614, 0x1.ef132419cbf9ap-446, 0x1.ce1cdf4103fe7p-935, 0.0,
     0.0, 0x1.e800e40c3b84ap-969, 0x1.c4c5f241a6dd1p-864, 0.0, 0.0, 0.0,
     0x1.197e6475e0f4fp-732, 0x1.95fdb127208eep-330, 0x1.2bedb53b7dfbp-497, 0.0,
     0x1.1b16c28039447p-266, 0.0, 0x1.22b55ed4bd437p-915, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13afb1b8a76f7p-854, 0x1.20c2632c1e903p-965, 0.0, 0.0, 0x1.25a475dfe631dp-157,
     0x1.256f3b7e3dfc8p-675, 0.0, 0.0, 0.0, 0x1.7faf3202c2443p-588,
     0x1.d489be2c2dc13p-420, 0x1.c673da3f88b3ep-122, 0.0, 0x1.92693cd28a413p-560,
     0x1.d9d987b38157bp-525, 0.0, 0.0, 0.0, 0.0, 0x1.0368a8797a7c3p-1015,
     0x1.f1ea36723c738p-31, 0.0, 0.0, 0x1.39e6da1b94bf5p-74, 0.0,
     0x1.286c48135808cp-925, 0.0, 0x1.4e6c693c0310ep-245, 0x1.2db7f1f29103ap-657, 0.0,
     0x1.7006674457f6cp-833, 0.0, 0x1.1b89f3fcb2955p-132, 0.0, 0x1.be8fbb1f726ffp-207,
     0.0, 0x1.9e9aea0ebdecep-436, 0x1.ec101f16d3114p-756, 0x1.c11bbb603d847p-292,
     0x1.a1be8190b8d2bp-195, 0.0, 0.0, 0x1.73cddc39a8ecap-870, 0x1.b598405ebe4eep-895,
     0x1.a5ca59f513effp-367, 0.0, 0.0, 0x1.877c59762d695p-175, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6469891aa984p-926, 0.0, 0.0, 0x1.b84b76312b74fp-233,
     0x1.2f15c14b9e64cp-494, 0.0, 0.0, 0.0, 0x1.bb923cb4e7542p-15, 0.0,
     0x1.c9c9657c4897ap-191, 0x1.755b086dc1dc4p-46, 0.0, 0.0, 0x1.4ed164dcc428ep-372,
     0x1.d1caa2eca942ep-866, 0x1.360a55fc60694p-911, 0.0, 0.0, 0x1.ff581e2b9be93p-437,
     0x1.d8f323dd5ab11p-246, 0x1.27c0e6a0432d6p-655, 0x1.7afd6d5dc3167p-329,
     0x1.72321e39be82ap-777, 0.0, 0.0, 0x1.0cc27f16b8a2cp-243, 0.0,
     0x1.bdc18145e8a66p-640, 0.0, 0.0, 0x1.93f431194798ep-716, 0.0, 0.0,
     0x1.95505ac862734p-603, 0.0, 0.0, 0x1.3ce965ac64481p-804, 0x1.4a25bf163394cp-98,
     0.0, 0.0, 0x1.aa9708ad002b2p-283, 0x1.408c439573c94p-854, 0x1.f2eba14076509p-24,
     0x1.d22735955559ep-100, 0.0, 0x1.00f24e592ac78p-342, 0.0, 0x1.4ac67f59038f4p-534,
     0.0, 0x1.69247494dbf9ep-538, 0.0, 0.0, 0x1.a659b495b653fp-93, 0.0,
     0x1.88510fb145c44p-444, 0x1.bdd8d30386002p-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.43c7820efd898p-889, 0x1.c4fce4668c7a4p-687, 0.0, 0x1.3d38df786dbe2p-558,
     0.0, 0.0, 0x1.63d6031b5f469p-595, 0.0, 0.0, 0x1.9ac2939ecf49dp-708, 0.0, 0.0,
     0x1.9ec682cff3c16p-126, 0.0, 0.0, 0.0, 0x1.163aacb89b1c1p-658,
     0x1.dfc93d252d0dfp-793, 0.0, 0x1.ff3639f2ff5eap-861, 0x1.f7b90590846ffp-820,
     0x1.86d713676f9eep-648, 0.0, 0x1.d1a7c93b54518p-943, 0.0, 0x1.462c8c79efac2p-4,
     0x1.7b2a7068bbd67p-1022, 0.0, 0x1.62bf2bf20b0d3p-355, 0.0, 0.0,
     0x1.790de8d8ad1e6p-659, 0.0, 0x1.a777b725dc6d5p-985, 0.0, 0.0,
     0x1.cf3c3e1a1f85bp-278, 0.0, 0.0, 0x1.3027beeff333fp-24, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ee1e745af077p-920, 0.0, 0.0, 0x1.b87b310de6832p-345, 0x1.58241cb6c8bd4p-956,
     0x1.d068e0df88ecap-21, 0.0, 0.0, 0.0, 0.0, 0x1.a32d7abd0658bp-145, 0.0, 0.0,
     0x1.4c342b15719fep-393, 0x1.81f1e467f6382p-261, 0x1.ef4c1c67d9a5bp-742, 0.0, 0.0,
     0x1.6b1dc84d5ab7cp-377, 0x1.701d01accc7f4p-675, 0.0, 0x1.78d1e1600fb18p-382, 0.0,
     0x1.f094a4141f446p-181, 0.0, 0x1.9322514a07b95p-874, 0.0, 0.0,
     0x1.24a5f18cd55bdp-586, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86e81b419ee3dp-561,
     0x1.c89d056ca7f79p-938, 0.0, 0x1.b6e337b1dc506p-495, 0.0, 0.0,
     0x1.e9ae31796e9ffp-956, 0.0, 0.0, 0x1.80e86a03dd8ddp-12, 0.0,
     0x1.89adedc89f53bp-689, 0x1.7c9173cbb45f2p-996, 0.0, 0x1.3c344f4d93dd4p-118,
     0x1.f9275f0a6a526p-244, 0.0, 0x1.94a34f00c1173p-82, 0x1.4dd70d32e19a4p-766, 0.0,
     0.0, 0x1.0e4b867ef6c92p-288, 0x1.00b6491476915p-663, 0x1.43cc17833b1cap-908, 0.0,
     0.0, 0.0, 0x1.1520cc23e3ecdp-163, 0.0, 0.0, 0x1.c59df72544d43p-809, 0.0, 0.0,
     0x1.2e671d17b8b07p-330, 0.0, 0x1.55b1bb530c4a3p-506, 0x1.13ae936b6fd09p-444, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c9b79ee31901p-214, 0x1.ff0b853925126p-514,
     0x1.b823245bc4578p-637, 0.0, 0x1.a58d3bf24ba9fp-1011, 0x1.fa0dd1fddceddp-73, 0.0,
     0x1.29034036ab92ep-68, 0.0, 0.0, 0x1.1a067c44db0cbp-729, 0x1.3d5875048aee3p-252,
     0x1.c9750efe51b8ep-686, 0.0, 0.0, 0x1.5f4802596700cp-621, 0.0, 0.0, 0.0, 0.0,
     0x1.9cbf653cab5e2p-532, 0.0, 0x1.a378923606fb5p-182, 0x1.38d4050dc9908p-344,
     0x1.7ab4eba63556fp-210, 0x1.9f139a3d32f69p-167, 0.0, 0x1.88d52c0ff5532p-14, 0.0,
     0.0, 0x1.7418353bb404p-268, 0.0, 0x1.f83331b11f15cp-636, 0.0,
     0x1.63fd705f47147p-217, 0x1.272633f96c8c9p-835, 0.0, 0.0, 0x1.2cfb6298122e7p-331,
     0x1.5c1ff55aa6062p-115, 0.0, 0.0, 0.0, 0.0, 0x1.dc9a7b7832bffp-13, 0.0,
     0x1.e93f907aab331p-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f9fc3038bb7p-297, 0.0, 0.0,
     0x1.68271db2d0e6p-336, 0.0, 0x1.70306ad6cccebp-626, 0x1.22eb1ad55f74dp-579,
     0x1.f28d5bfa77e2ap-350, 0x1.b35f17874bcbcp-399, 0x1.e08af8fc990bcp-304,
     0x1.39de8d65b2172p-646, 0x1.316cf17adf08fp-739, 0.0, 0.0, 0.0, 0.0,
     0x1.320002a87ffccp-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8831c97d451f1p-914,
     0x1.0e8d3b26eb9f2p-865, 0.0, 0.0, 0x1.d764bf7afd715p-30, 0x1.c4875e69e472bp-723,
     0x1.f45c700f62f2dp-163, 0.0, 0.0, 0x1.28ee7f9e6583fp-578, 0x1.a25a392a45469p-54,
     0.0, 0.0, 0x1.4cecaa684d121p-380, 0.0, 0.0, 0.0, 0x1.6de556dd2deb6p-309, 0.0,
     0.0, 0x1.ea7d0a9e698b1p-305, 0.0, 0.0, 0.0, 0x1.79329af91a253p-207
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
            tmp1 = Sleef_cospid2_u05avx2128(tmp0);
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
    printf("Sleef_cospid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_cospid2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
