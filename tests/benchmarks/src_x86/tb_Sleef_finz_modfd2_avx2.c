/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modfd2_avx2128.c --function Sleef_finz_modfd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0.0, 0x1.6028efbd742e3p-478, 0.0, 0.0, 0.0, 0.0, 0x1.3394c0d0b00f6p-36,
     0x1.eabb2c3f0c013p-253, 0.0, 0.0, 0x1.ca8398ac87abap-802, 0x1.8b7a009a9879ep-620,
     0.0, 0x1.aa985e9032b78p-116, 0x1.6b037358ac843p-155, 0x1.9a01e3495916dp-860, 0.0,
     0x1.e0fd8f18a4061p-55, 0.0, 0x1.cabe23b8b5251p-378, 0x1.89431e6ffa734p-46, 0.0,
     0.0, 0x1.6534c003300ffp-790, 0x1.ed89af9589503p-51, 0x1.442ebb83e96e1p-498, 0.0,
     0x1.f0fb3681d3041p-560, 0x1.4e15e83c557fap-647, 0.0, 0x1.f3b513999a123p-712,
     0x1.7b92295ac1075p-441, 0.0, 0.0, 0x1.1d004faff214fp-939, 0.0, 0.0, 0.0, 0.0,
     0x1.bf25e10f7bb24p-636, 0x1.0cc93f163c51p-508, 0x1.7f2b801ed758ap-535, 0.0, 0.0,
     0x1.d1d929d35a925p-762, 0x1.64f3e203c497dp-973, 0x1.1e2580b9afb48p-925,
     0x1.bcc057b9bfeaep-1020, 0.0, 0x1.7a923502bf1edp-33, 0x1.ddf1d586932b1p-1010,
     0x1.a41f3b12ef1b7p-906, 0.0, 0.0, 0x1.033243edbfa4cp-543, 0x1.ff70337c14151p-743,
     0x1.7428c3acc5c3ap-119, 0.0, 0.0, 0.0, 0.0, 0x1.c39885c5edd79p-23, 0.0, 0.0,
     0x1.0dc530425f2f8p-632, 0.0, 0.0, 0x1.203f2f49b3e26p-666, 0x1.946939e214032p-735,
     0x1.c9efb0552b4dbp-941, 0.0, 0.0, 0.0, 0x1.cbd84e2f0a4d4p-428,
     0x1.9ae094228a06cp-844, 0.0, 0x1.995e1745064b9p-682, 0x1.6ace3f8f3a6c4p-241,
     0x1.ae1ac79fb852bp-708, 0x1.a3efd54a43e83p-646, 0.0, 0.0, 0x1.09254babc66f6p-768,
     0x1.ae9a280963f56p-150, 0x1.396b25e0dbd03p-460, 0.0, 0.0, 0.0,
     0x1.44eb4389ba1b2p-553, 0.0, 0.0, 0x1.c2c67396c422dp-642, 0.0, 0.0, 0.0,
     0x1.0cae778a6f548p-567, 0x1.35b1518136008p-586, 0x1.a04406bd05dap-886,
     0x1.483441fba1e7dp-568, 0.0, 0.0, 0.0, 0x1.44039eafaf112p-616,
     0x1.68d99d2775391p-590, 0.0, 0x1.84e2bca5852bap-670, 0x1.8d04eb8fcac89p-770,
     0x1.7747e6a40b8cfp-720, 0.0, 0.0, 0.0, 0x1.b5b60873ba25fp-992,
     0x1.67a9765b6c3e7p-683, 0.0, 0x1.6e8fbbc4cfbe9p-753, 0x1.79b336fdec646p-610,
     0x1.df435dd3c11aep-709, 0.0, 0x1.f86324060cfb3p-63, 0.0, 0x1.f911109373702p-78,
     0.0, 0x1.d0282bf326c94p-120, 0.0, 0.0, 0.0, 0x1.70986636ff05ep-703, 0.0, 0.0,
     0x1.13631073d725bp-409, 0.0, 0.0, 0x1.3476418787471p-223, 0.0,
     0x1.9856a8baaa76ap-500, 0.0, 0.0, 0.0, 0x1.c00c63d058ba7p-926,
     0x1.a6abf283c8019p-700, 0.0, 0x1.afcc76b4074b2p-60, 0.0, 0.0,
     0x1.d2c515c645b1p-118, 0x1.2fe0ca71ae437p-738, 0.0, 0x1.63e8cb784d5a5p-3,
     0x1.f7668bd890287p-969, 0x1.84d201cd84fcep-327, 0x1.7202c32b2bbbcp-701,
     0x1.2c39bb8a88e45p-58, 0x1.64d2e0ad0383fp-479, 0x1.5d39f655dd551p-627, 0.0,
     0x1.61fa82e9954e3p-615, 0.0, 0.0, 0.0, 0x1.f9a8b08031c7p-784,
     0x1.376d1d755682cp-1001, 0x1.019f03c5353e7p-137, 0x1.725aa8fd5de57p-184,
     0x1.7423e923001bcp-485, 0x1.f8462ce29f48p-356, 0.0, 0x1.213cedc90afeep-462, 0.0,
     0x1.0a7224ab363adp-105, 0x1.b66ceeeae2265p-991, 0x1.3c25c1a0cb1c5p-863, 0.0, 0.0,
     0.0, 0x1.3c785aa599063p-240, 0.0, 0x1.3ed75641c464fp-964, 0x1.ada82cb1be17fp-897,
     0x1.0e70586133304p-849, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca6715847bdcep-726, 0.0,
     0.0, 0.0, 0.0, 0x1.a5c70e9ad90bap-525, 0.0, 0x1.571ee6d8c6b24p-824,
     0x1.ae4444d76845p-60, 0x1.e0be3a2dc3744p-584, 0.0, 0.0, 0x1.8e38f34dbebap-373,
     0.0, 0.0, 0.0, 0x1.ffe3d62193f4fp-326, 0x1.fd4cf257ad1abp-79, 0.0,
     0x1.3d3a6a42ca323p-663, 0x1.05481dd7ce0bcp-1001, 0x1.af7db2bf9cb16p-664,
     0x1.55cc33245ba3ap-184, 0x1.1600c2ff68aafp-540, 0x1.8b81888f0ab35p-546,
     0x1.341a3aa282441p-582, 0x1.85b83371659ebp-56, 0x1.e02111a9f5051p-448,
     0x1.e9d5b38bd4179p-991, 0x1.4231d3d49989p-346, 0x1.f0eb3825e4eadp-856,
     0x1.a2038c8b3df2cp-928, 0x1.d9a7bb0a3f4aep-491, 0x1.ba6a34a2ce6d9p-486,
     0x1.05167e62b15c5p-982, 0.0, 0x1.16026d57a02e5p-998, 0x1.aa9f922adb1e8p-593,
     0x1.113aea385729cp-754, 0x1.37cc6a6c94cb5p-329, 0x1.499de8bc035b7p-478,
     0x1.0018c9a1abfdap-753, 0x1.acafdf4ae268cp-749, 0x1.ffd33c0f93a3bp-802, 0.0, 0.0,
     0.0, 0x1.72729aad50bap-171, 0.0, 0.0, 0.0, 0.0, 0x1.e5ffaae8c0bf2p-170, 0.0,
     0x1.753644c2750dap-790, 0x1.9b5a4367377c7p-180, 0x1.0084ecd71f2cdp-956,
     0x1.c998cdc426ac8p-147, 0.0, 0.0, 0x1.c0df8e8f8902bp-139, 0.0,
     0x1.9e5b79e212701p-995, 0x1.0a92e50390413p-52, 0x1.4d89a6d082035p-749, 0.0, 0.0,
     0x1.4c068f3d1b6a7p-470, 0x1.589f844444e19p-448, 0.0, 0.0, 0x1.25a848185a324p-13,
     0.0, 0.0, 0x1.632630ebbec2ep-50, 0.0, 0.0, 0x1.a9f44c6c97489p-463,
     0x1.937fe104eac1ep-198, 0x1.85e58a5aebed5p-917, 0.0, 0x1.0b18fa9ca28c3p-432, 0.0,
     0x1.8f1cf0833005bp-241, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55fdea656bdabp-630,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5977925e75f1p-254, 0.0,
     0x1.a28ae227309cep-469, 0x1.83b970caa66fp-555, 0.0, 0x1.d02e03cbb7f03p-671,
     0x1.63bbebb7d8f9ep-710, 0x1.81dd822156109p-799, 0x1.7c36914d7233p-299,
     0x1.79beaffa77633p-84, 0.0, 0x1.cf49691c5fc5bp-493, 0x1.fa06f6009d64ap-622, 0.0,
     0x1.40e8a6743692fp-738, 0x1.6f8df805453dp-133, 0.0, 0x1.6c598a8cbc3b8p-109,
     0x1.0ef4b79bb98b8p-354, 0x1.ac909d653c821p-798, 0.0, 0x1.3d52f4ed52709p-486,
     0x1.0f80bd30c278ep-297, 0.0, 0x1.cd0e0f81a9ed6p-612, 0x1.56ad9357f8a7cp-935, 0.0,
     0x1.20999faad433bp-559, 0x1.236704c231223p-433, 0x1.bef09ab5eedfap-247,
     0x1.284a5da9ab9fep-272, 0.0, 0.0, 0.0, 0x1.43446e984d138p-595,
     0x1.6afb59732e321p-614, 0.0, 0x1.663cdef2a9e07p-110, 0.0, 0.0,
     0x1.e231c4c435201p-543, 0x1.3d979bdf3c915p-551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d359e93f729fp-531, 0.0, 0x1.4407cb1ed6717p-315, 0.0, 0x1.6a4b80e04fcp-824,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e46d116663819p-804, 0.0,
     0x1.9f2e1eb413f8fp-543, 0x1.7ae071446c56dp-372, 0.0, 0.0, 0x1.5f0dfce06b758p-764,
     0.0, 0x1.cd3010091428fp-672, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.923e3b8692be6p-379, 0x1.d69aebaf93893p-383, 0x1.1da2bbf950524p-575, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4a15ad368c513p-862, 0x1.eb07ceff3efd7p-149, 0.0,
     0x1.01118f4cc21cap-891, 0x1.5e6adfd5d0eadp-39, 0.0, 0.0, 0.0, 0.0,
     0x1.239b0364df668p-918, 0.0, 0x1.2d6640e335253p-67, 0.0, 0.0,
     0x1.979e3a6ffc01cp-864, 0.0, 0x1.240463fdd52fp-933, 0x1.637a48ed06b61p-447, 0.0,
     0x1.d4135bd02ca81p-540, 0.0, 0x1.051e897e2346ep-519, 0.0,
     0x1.e1dcfed00be36p-1014, 0x1.0a19c5a9dd41ap-40, 0x1.a376e367a1d23p-616,
     0x1.f2858c9543d6bp-166, 0x1.e245ac8ce60ffp-486, 0.0, 0.0, 0x1.e950ab0f57eb2p-175,
     0.0, 0x1.7b07644ae1704p-124, 0.0, 0.0, 0x1.c7452e5e55b3cp-45, 0.0,
     0x1.473ab4ea9d138p-670, 0x1.1663157ba92a1p-653, 0x1.e998cea29ad67p-2,
     0x1.3a79fa4452f26p-343, 0.0, 0.0, 0.0, 0x1.0a923cdfaf97ep-117, 0.0,
     0x1.214a16c02800ap-651, 0x1.a11d47439b7b1p-423, 0.0, 0.0, 0x1.a010f8f21cd56p-176,
     0.0, 0x1.0380ff86154f4p-513, 0x1.776b0a804cc99p-904, 0x1.948ce1b89ec8dp-185,
     0x1.fe1b088d05fcp-682, 0.0, 0x1.c18b0c2ce68bfp-546, 0x1.170f71170286bp-348, 0.0,
     0x1.e37edcdfba0dp-111, 0.0, 0.0, 0.0, 0x1.5280f8eccd562p-228, 0.0,
     0x1.3e9ebfefa13cbp-464, 0.0, 0.0, 0x1.ce39061125aacp-760, 0.0, 0.0,
     0x1.892faaf21b83dp-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15e95657577a7p-519,
     0.0, 0.0, 0.0, 0x1.829f985798b5ap-853, 0.0, 0.0, 0x1.5bdf81dce3bc4p-477,
     0x1.340cc605aae7bp-941, 0.0, 0x1.10f7dfdb5592dp-931, 0.0, 0x1.8f744f1884e6ap-262,
     0x1.f54198a9a3f31p-65, 0x1.bb88f81e94ffap-618, 0x1.85c68cdeea67ap-423,
     0x1.98edeee84762ap-100, 0x1.e4837ffe35ef7p-582, 0x1.8bc4d16d301c9p-979,
     0x1.dfa102379c2a3p-207, 0x1.9b34d59ad7dddp-638, 0x1.5df843c9a00b4p-689,
     0x1.d9f4668143761p-495, 0.0, 0.0, 0x1.1501a0ca78c34p-651, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8ec96b83dcc3bp-963, 0x1.571c21570a16bp-364, 0x1.dfec2dc51b1cep-345,
     0x1.fbeb312c12913p-956, 0x1.464e339841898p-642, 0x1.8390dfec5eae7p-218, 0.0, 0.0,
     0x1.9ce5a08880311p-581, 0x1.769b33b6cce04p-98, 0x1.76387cc24a7bbp-574,
     0x1.9aefea991aa26p-122, 0x1.ecd0524d88399p-246, 0x1.b65789babf26ap-786,
     0x1.0527bcbd131b8p-712, 0.0, 0x1.6580a90c8b9f6p-225, 0x1.cb455553c7176p-62, 0.0,
     0.0, 0.0, 0x1.6d99ca7cef44ep-319, 0x1.5217b4532397p-331, 0x1.ed7ecfb765fbfp-715,
     0.0, 0x1.20b29eab2fef4p-191, 0x1.ae34adb7f3c47p-50, 0x1.28e972e05a8ep-82,
     0x1.181568c86c20ap-606, 0.0, 0.0, 0x1.be94b9532d882p-114,
     0x1.11d2afc6fc25ep-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1967baa85e794p-717,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4fc417db7f0b1p-383, 0x1.36928e34e5c78p-996,
     0.0, 0x1.b40993c75f303p-661, 0.0, 0.0, 0.0, 0.0, 0x1.dba58418e8a2bp-87, 0.0, 0.0,
     0.0, 0x1.4d017d0ca195cp-655, 0.0, 0x1.802b116159aa2p-136, 0x1.31e08d30895bep-257,
     0x1.2c70bf7b845a3p-145, 0.0, 0.0, 0x1.5abf2e36c8072p-384, 0x1.e2af30a25be9cp-521,
     0.0, 0.0, 0x1.bd21b3c70ccbcp-662, 0x1.fa8594d56225ep-665, 0x1.48e6eadf6ddf4p-86,
     0x1.0855c571659fdp-943, 0x1.045813bb63461p-588, 0x1.11354294d0356p-454, 0.0, 0.0,
     0.0, 0.0, 0x1.a0f160237c68bp-233, 0x1.c3ffb007775e9p-208, 0.0,
     0x1.9bb263809a941p-888, 0x1.dcd48e4eee46dp-241, 0x1.c139db753550fp-872, 0.0,
     0x1.a0e41f84cdd54p-386, 0.0, 0x1.fa325e3d48069p-22, 0x1.aa9d3e5a470a4p-475, 0.0,
     0.0, 0x1.6cc150566506fp-557, 0x1.f92422d4fd7b7p-420, 0x1.c7c25f44dca04p-753, 0.0,
     0x1.48d0a4ef808bap-909, 0.0, 0.0, 0x1.4e4ac881f2a01p-792, 0x1.a565ab15ba951p-23,
     0x1.0e68f73fdfd6ep-591, 0.0, 0.0, 0.0, 0x1.d4afca93748bp-533,
     0x1.65255833cd907p-272, 0.0, 0x1.23ad6caceaa3cp-869, 0x1.1c47751cb844p-343, 0.0,
     0.0, 0x1.b292c67a6169dp-461, 0x1.4c251217db714p-962, 0.0, 0x1.e84eaccc18eebp-751,
     0.0, 0.0, 0.0, 0.0, 0x1.19383edd51496p-133, 0.0, 0x1.539a136a1a04cp-146, 0.0,
     0x1.5ea78dfbcad56p-118, 0.0, 0.0, 0.0, 0.0, 0x1.e5a36bbf3c752p-450,
     0x1.446de237aecf4p-1015, 0.0, 0.0, 0.0, 0x1.42946bb036339p-435,
     0x1.ad6216377eb09p-192, 0.0, 0x1.6fc975dcb996bp-172, 0x1.a0cd95dca6703p-840,
     0x1.478b36f4c302cp-160, 0.0, 0x1.f0e8f2f7f2d28p-356, 0x1.6c5f14a91061bp-41,
     0x1.a58fc35a6a57fp-934, 0.0, 0x1.950b4950b922bp-376, 0.0, 0.0,
     0x1.6f597eccacb3p-231, 0x1.bbf5d151698b4p-233, 0.0, 0.0, 0x1.624f2842f075ep-970,
     0.0, 0x1.3af852eba56a1p-708, 0.0, 0x1.2e352ea8431a1p-489, 0x1.0ffd78588fdf7p-12,
     0.0, 0.0, 0x1.7395c1de4f5c9p-62, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f74e643b9c882p-707,
     0.0, 0x1.b3763bb83d325p-753, 0.0, 0x1.2f16e5cb91accp-588, 0x1.a390e033ef6f5p-670,
     0x1.88766fae6f00fp-304, 0.0, 0.0, 0x1.dc94cdbfcb271p-970, 0x1.24f176723c472p-977,
     0x1.d1bb969185c8p-312, 0.0, 0.0, 0x1.9ed72a9e883d9p-576, 0x1.4d01371636b43p-245,
     0x1.baf350f76f13dp-750, 0.0, 0.0, 0.0, 0x1.6740a54025652p-842, 0.0, 0.0,
     0x1.cf5a2b1731a57p-488, 0x1.0aafcfe9e13d9p-683, 0x1.0603618a9fcddp-90, 0.0, 0.0,
     0.0, 0.0, 0x1.a3e24f9ac6d4p-38, 0x1.8deae3525cc78p-473, 0.0,
     0x1.1821f2deafb8p-718, 0x1.c1b5ef19157bcp-116, 0.0, 0.0, 0.0,
     0x1.3faf1d7334d07p-999, 0.0, 0x1.8ffc4386ce03bp-82, 0.0, 0.0,
     0x1.4b82c6c9cde6ap-379, 0.0, 0x1.ca12254d6aecp-3, 0.0, 0.0,
     0x1.89d74a4c2cae7p-975, 0.0, 0x1.9d95ccf08476ap-197, 0.0, 0x1.cdbf85698a8d5p-651,
     0.0, 0x1.e2e5c464304a6p-120, 0x1.546aeb06554c8p-127, 0.0, 0x1.0846e6eceebd1p-658,
     0x1.e2eacb92b97b2p-73, 0x1.4a7bab0b294adp-324, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b5d1b20cf83ap-150, 0x1.283d609deee8fp-796, 0.0, 0.0, 0x1.2c7d657b08e85p-230,
     0.0, 0x1.6f7c205afa3cbp-54, 0x1.9dccd37669e07p-201, 0x1.9d48198fc5b54p-787, 0.0,
     0x1.2c531fd68438fp-1, 0x1.cdee2d43eea74p-198, 0.0, 0.0, 0x1.0f301f33a3b79p-735,
     0.0, 0x1.1698fe9c47282p-242, 0x1.9c9ca895e6cf3p-296, 0.0, 0.0,
     0x1.b5a698441535ep-931, 0.0, 0.0, 0.0, 0.0, 0x1.d83903c38769dp-454, 0.0, 0.0,
     0x1.2d6180526d7f9p-834, 0.0, 0.0, 0.0, 0x1.6dee466292fcdp-856,
     0x1.e7524191a9f58p-128, 0.0, 0x1.a29a8f207384cp-159, 0x1.ff3ae584b7dccp-558,
     0x1.bb567c970efefp-765, 0x1.420c1a8c505e9p-872, 0x1.5b1ea1416f2d7p-841,
     0x1.f82ad0d70fa6bp-815, 0x1.ea34f51834b79p-685, 0.0, 0x1.c2daadc749163p-1015,
     0.0, 0x1.5fbd4a84cfa6ap-308, 0.0, 0.0, 0.0, 0.0, 0x1.734a014303bccp-46, 0.0,
     0x1.09779988715bcp-504, 0.0, 0x1.36430fa128a53p-783, 0.0, 0x1.644fdfe43c693p-569,
     0x1.3374263a89c27p-18, 0x1.c286f2be06355p-338, 0x1.fb73fb5cad549p-364, 0.0, 0.0,
     0x1.22e15c7059695p-293, 0.0, 0.0, 0.0, 0x1.af6fa734041f5p-887, 0.0, 0.0, 0.0,
     0.0, 0x1.a9e9a7bf680dbp-95, 0x1.8d12329f1fccbp-26, 0.0, 0.0,
     0x1.a3a5a371c9e27p-44, 0x1.f39da99f83699p-994, 0.0, 0x1.c03dcf1df4f92p-720,
     0x1.1d27c6c146246p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.169d303ea5d0bp-54,
     0x1.5d9fe1a30969ap-957, 0.0, 0x1.ee054259d26b4p-561, 0x1.7744283f28efep-837,
     0x1.9d3f76d7d07cp-362, 0.0, 0x1.707ead066c835p-496, 0.0, 0x1.70c0a05483c9cp-60,
     0x1.ceb37a38df121p-320, 0.0, 0x1.59d0f802b83f2p-101, 0x1.54a446957c3d6p-265,
     0x1.83e141b7be1efp-1001, 0x1.64c6e9f65905dp-1022, 0x1.dcf0b09d9f40bp-346,
     0x1.1b7379c799603p-116, 0x1.3a535bde2ce04p-9, 0.0, 0x1.c6a16bfc5fd8p-1019,
     0x1.3eb5cfa2eba14p-590, 0x1.ba412e353d606p-1003, 0x1.85dfb2f7c000bp-688,
     0x1.7b52dcf148318p-471, 0.0, 0.0, 0x1.41f111bae9ecep-656, 0x1.5b21eaab68b0ep-196,
     0.0, 0x1.4784e6b307997p-221, 0x1.6f8a85af4bb6p-1021, 0x1.7bf6f7d655722p-550, 0.0,
     0x1.11513f5699017p-31, 0x1.da3af7a634f8ep-695, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e388d6ec2169ap-92, 0.0, 0x1.312d77110c1b6p-33, 0x1.00c860fffb42ep-779,
     0x1.8f62688b4bb26p-446, 0x1.ce0d4c74ba24bp-996, 0.0, 0.0, 0.0,
     0x1.6443c6ec8831ap-346, 0.0, 0.0, 0.0, 0x1.1f2055afdb134p-363, 0.0,
     0x1.d027eff63fa5ap-55, 0x1.f81b79d96908ep-250, 0x1.33061cf641d7dp-326,
     0x1.e5b929cfeef15p-767, 0.0, 0.0, 0x1.6c1636e0bcf68p-667, 0.0,
     0x1.c5d34595aae82p-882, 0x1.e5637d13c2fa5p-97, 0x1.03786f9f612c2p-807,
     0x1.bc20ab2d485c2p-597, 0.0, 0.0, 0.0, 0.0, 0x1.c590e0e562f6bp-508, 0.0, 0.0,
     0x1.6638e4205d11p-166, 0x1.50d200ea615d8p-78, 0.0, 0x1.150809e37ab1ap-692,
     0x1.ab73a4f6367fcp-404, 0.0, 0.0, 0x1.7c2f8b7171ce7p-427, 0.0,
     0x1.66634ac49e40ap-663, 0x1.ce05e8d0f99p-141, 0x1.73372f396c6fdp-344, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a0ce5196d0b8bp-720, 0x1.d4629d8318cb6p-137, 0.0, 0.0,
     0x1.d12774f9d95fbp-764, 0x1.a2ab9742481d2p-288, 0x1.d0fb9c96e3142p-417,
     0x1.bce8b6a92ed0fp-906, 0x1.a9434165b3d1ap-941, 0.0, 0.0, 0x1.464fbbcaed50dp-630,
     0x1.d6bf56d1b1cc7p-567, 0x1.29886007e8ef8p-392, 0.0, 0.0, 0.0, 0.0,
     0x1.f3889c22bce89p-968, 0x1.aed24633e2266p-210, 0x1.7002ee1a1db45p-667,
     0x1.b9676b9a34de2p-288, 0.0, 0.0, 0x1.47210a6eeb65bp-253, 0.0,
     0x1.162ca7ab72678p-59, 0x1.5ea4d7bbae863p-1013, 0.0, 0.0, 0x1.d13a41418511ep-651,
     0x1.9e6c0bc820edfp-1002, 0x1.d9a7abf612042p-877, 0.0, 0.0, 0x1.bf1baf5efdf4p-78,
     0x1.efba893c9d818p-578, 0.0, 0.0, 0x1.1950b978c79fep-1005, 0.0,
     0x1.df63b6d1ae8a2p-18, 0.0, 0x1.2c69555512368p-561, 0x1.f6ad7ad2d13afp-847, 0.0,
     0x1.bad409ca35ea4p-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b23caa680f756p-971,
     0x1.85b498e6f1f83p-889, 0x1.a54604aeacc02p-164, 0.0, 0x1.f674b60ef01e6p-440, 0.0,
     0.0, 0x1.1841fa8b2c516p-174, 0x1.3a9cdf7e1f341p-400, 0.0, 0x1.ef61fb568e803p-86,
     0.0, 0.0, 0.0, 0x1.36cdc52c1cbdep-574, 0.0, 0.0, 0.0, 0x1.209139cb567c5p-538,
     0.0, 0x1.50b5d0b916c94p-113, 0.0, 0.0, 0.0, 0x1.719ad60cec00cp-124, 0.0,
     0x1.8f55b568eebfep-570, 0x1.93af00dd34738p-219, 0.0, 0x1.815e15cff583dp-315, 0.0,
     0x1.a8fd8e3677ec7p-826, 0x1.c02751fe316f5p-907, 0.0, 0x1.1c424ebb17c04p-670,
     0x1.2ad10587e326bp-71, 0.0, 0.0, 0x1.b2b262570eeb3p-286, 0.0, 0.0, 0.0, 0.0,
     0x1.805c02bd1d907p-388, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76b79c75c0d56p-499,
     0.0, 0.0, 0x1.0b76aaa3ff9ebp-888, 0x1.919c3a0017188p-744, 0x1.846e132fe6527p-656,
     0.0, 0x1.89e5d5615dc0bp-145, 0.0, 0.0, 0.0, 0x1.cae414a06c154p-1006,
     0x1.5f2a3ed5e7dedp-375, 0.0
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
            tmp1 = Sleef_finz_modfd2_avx2128(tmp0);
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
    printf("Sleef_finz_modfd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_modfd2_avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
