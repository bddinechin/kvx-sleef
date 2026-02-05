/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospid1_u05purecfma.c --function \
 *     Sleef_cospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0x1.f12bf67a51803p-948, 0.0, 0.0, 0x1.bb79ca5a13d0bp-854,
     0.0, 0.0, 0x1.96c3849523499p-654, 0.0, 0.0, 0x1.f41d0613c50dp-216, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f73013a90edeep-383, 0x1.63e95c099d9dbp-472, 0.0, 0.0, 0.0,
     0.0, 0x1.dbc519fedc2fbp-933, 0.0, 0x1.24cbe67a0310ep-873, 0x1.5f0edaacb3468p-211,
     0.0, 0x1.72af8f2e3bd6p-794, 0.0, 0.0, 0x1.35433195d5c98p-720, 0.0, 0.0,
     0x1.6aa0c7fafaacp-138, 0x1.56f78b149d0e2p-710, 0x1.832ae6f2d06e5p-947,
     0x1.273abecb75507p-759, 0.0, 0x1.e0ddcfdc9799p-697, 0x1.b937d925df538p-930, 0.0,
     0.0, 0x1.e2b045611952p-81, 0x1.4f604503ce8b3p-134, 0.0, 0.0, 0.0, 0.0,
     0x1.0bc42aa868b3bp-948, 0x1.eb0cd1a294739p-253, 0x1.e8a9f3dd9e9d4p-624,
     0x1.079d81949ec86p-202, 0x1.cbb25b585707p-697, 0x1.ed1ef3461e57cp-83, 0.0, 0.0,
     0.0, 0.0, 0x1.e649e8d22391dp-509, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8af14fac5658p-878, 0.0, 0x1.c8a83a60c300fp-975, 0x1.65ec4acc9d084p-769,
     0x1.1c7a99ea09767p-728, 0.0, 0x1.e43178b75327ap-362, 0x1.1d7a6504b9107p-313, 0.0,
     0x1.f42efa55fb8d7p-585, 0.0, 0.0, 0.0, 0x1.602a3107d3825p-596,
     0x1.18f456623fb22p-267, 0x1.c6a12edcd23adp-839, 0.0, 0.0,
     0x1.23cff4fc84555p-1001, 0.0, 0.0, 0.0, 0x1.739eefc3c1776p-78,
     0x1.33ad0b9a9d34dp-516, 0.0, 0x1.3f1e9533c6e1p-505, 0.0, 0.0,
     0x1.577210df6f351p-24, 0x1.d169f8e2337c9p-643, 0x1.b6f4c1682390bp-157,
     0x1.cd7a7a5fc3438p-583, 0.0, 0.0, 0x1.ccdfeab9dd75cp-117, 0.0,
     0x1.3a9fefcb03e4fp-615, 0x1.c490a21f6aa0cp-531, 0x1.ce266f957ce8fp-435,
     0x1.b9ddbb453efd2p-942, 0.0, 0x1.9d5837cfbe9b8p-893, 0x1.f91f88a8392adp-183, 0.0,
     0x1.3fef664058783p-354, 0x1.7aef9ad308578p-86, 0.0, 0x1.8a1ae2c148ebdp-901,
     0x1.0bd73a71a76ep-550, 0x1.a550e730763edp-414, 0x1.afc0fb629590bp-821,
     0x1.dea836bcc8859p-553, 0.0, 0x1.0f48c1d9d655dp-162, 0.0, 0x1.1da25bf2599ddp-549,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c10f8ad8be617p-81, 0x1.b7823e05dae51p-303, 0.0, 0.0,
     0.0, 0x1.0c4772cd52693p-822, 0.0, 0x1.39333118ec7adp-954, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.00ebc0cf867f6p-77, 0.0, 0x1.d50ebe7a2661p-817, 0.0,
     0x1.53a7222d1a94cp-201, 0.0, 0x1.cdf66017bb905p-874, 0.0, 0x1.01005cd70e318p-868,
     0.0, 0.0, 0x1.4185b09b3d961p-227, 0.0, 0.0, 0x1.3e9fe5fc98b9p-207,
     0x1.82ec555d20762p-595, 0x1.b6f581dddb322p-220, 0x1.317731611944fp-276, 0.0,
     0x1.1881ffc7474adp-29, 0x1.1c4d7ed09dbd8p-610, 0.0, 0.0, 0.0,
     0x1.423216a32f7afp-792, 0.0, 0.0, 0x1.228d94dc7ebcbp-445, 0.0,
     0x1.0ad214f293695p-197, 0.0, 0.0, 0x1.5b4fb558e631bp-373, 0x1.e137b7d3c424ap-335,
     0x1.04d903a715695p-780, 0x1.b9059b912fb7ap-344, 0.0, 0x1.84284bc8037dep-965, 0.0,
     0x1.a3137606076b4p-641, 0x1.8e70eee3bae87p-140, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.670674bd5c98ap-445, 0.0, 0x1.32f6958da5177p-24, 0x1.2b0f6015f8a07p-12,
     0x1.b4f8712556408p-663, 0x1.509d27544eb3fp-587, 0x1.3273dc52369e6p-368, 0.0,
     0x1.8d46d670ad8c4p-828, 0.0, 0.0, 0.0, 0.0, 0x1.fba29e7a123d6p-689,
     0x1.658ea88154b8bp-996, 0x1.037baa242cf66p-550, 0x1.9398a4d346762p-459, 0.0, 0.0,
     0.0, 0.0, 0x1.53e0b92c9d99ap-480, 0x1.ac9e2274cda59p-903, 0.0, 0.0,
     0x1.ff8b67817297ap-568, 0x1.657ac0a7b6594p-14, 0.0, 0.0, 0x1.ad0357c7d207bp-10,
     0x1.d930450c3420bp-475, 0x1.433304c7f7133p-247, 0x1.b07b7ec039508p-270,
     0x1.6d4ccec8e6bb2p-121, 0.0, 0.0, 0x1.3ba6fc1cd35cdp-772, 0.0,
     0x1.b4d0b704005d1p-551, 0x1.98b190e7ea9e6p-819, 0.0, 0x1.f2bb9f6b7cbfcp-730,
     0x1.e5a4ddabcdad7p-921, 0.0, 0.0, 0.0, 0x1.8291b66427829p-22, 0.0,
     0x1.3f2d67cc9cc86p-670, 0x1.5f21375aacf13p-467, 0x1.4b8e4e00a04b9p-234,
     0x1.d2c8681ba41eep-910, 0x1.823bf4f4de08cp-858, 0.0, 0x1.05935c02186bp-602,
     0x1.b55a7913e601fp-953, 0.0, 0.0, 0.0, 0x1.d1fa835ed20dep-62,
     0x1.e519890e46a9p-463, 0x1.2e6998d93d70ap-690, 0x1.6a6c3815a0018p-223, 0.0,
     0x1.01cf760688e3dp-791, 0.0, 0.0, 0.0, 0.0, 0x1.3338027b88749p-686, 0.0, 0.0,
     0x1.51180af06fe17p-998, 0.0, 0.0, 0.0, 0x1.0a6bfc92510d1p-423,
     0x1.b3afedc230a49p-865, 0.0, 0x1.3ec6fa980bba3p-604, 0.0, 0.0, 0.0, 0.0,
     0x1.e63a66be0a888p-693, 0.0, 0x1.ebc864a3723acp-541, 0x1.cc67d8b2cd8cp-9,
     0x1.7e9f48cd3ea18p-903, 0x1.77c6234cac1b9p-81, 0x1.487fe1de611cp-23,
     0x1.f43fff356f5ffp-195, 0x1.8191621926ebbp-898, 0.0, 0.0, 0x1.274c44b8ca096p-754,
     0x1.9013d9d073168p-830, 0x1.d9b88236a3ab1p-8, 0.0, 0x1.5a3abd0009f3fp-368,
     0x1.db52fbfe6a476p-164, 0.0, 0.0, 0.0, 0x1.293c3813ec617p-626,
     0x1.e9a02ad8c7eddp-12, 0.0, 0x1.99c43ef6b52a4p-100, 0x1.30a62b59e13ebp-77,
     0x1.519812b382af6p-892, 0x1.d9ccd9db0fea7p-194, 0x1.38876b3a06022p-41,
     0x1.70e42c4b698cbp-652, 0x1.fa7583c49632ep-699, 0x1.db45d1b2b66e1p-216, 0.0, 0.0,
     0x1.e00c7eb53eb52p-133, 0.0, 0x1.bfd1591baf76dp-558, 0.0, 0.0,
     0x1.3789ac6679935p-403, 0x1.2a54100738e9p-425, 0x1.3446908b3181cp-984, 0.0,
     0x1.77782fbcffe7dp-382, 0x1.c3b45813ddc1fp-224, 0.0, 0.0, 0x1.cc8e46ea406b4p-278,
     0.0, 0x1.0e6d6aec1e864p-239, 0.0, 0x1.a3ca5458c0e2ep-794, 0.0, 0.0,
     0x1.c3b6a12b93efp-938, 0x1.b36af9b0c9e41p-58, 0.0, 0.0, 0.0,
     0x1.21fae23e7fac4p-143, 0x1.8c6cd659fe012p-753, 0x1.e200a98904d4fp-830, 0.0, 0.0,
     0x1.b6208478704ffp-104, 0x1.1c7116b94960dp-248, 0x1.3a5725e52b29bp-698, 0.0, 0.0,
     0.0, 0x1.d34c10ef10a53p-333, 0x1.5fa64f362ef31p-103, 0.0, 0x1.1a48dcc7f4d2bp-227,
     0x1.3e88ced207f98p-969, 0x1.895320edd85cap-184, 0x1.4b7c7c2f2adecp-39, 0.0,
     0x1.515cccb47baa7p-994, 0x1.55a7ee0071f3cp-98, 0x1.99367f6780637p-78, 0.0,
     0x1.7c88431368a75p-437, 0.0, 0.0, 0x1.2d14339942487p-743, 0x1.e06905c6b1f45p-807,
     0x1.bf9c21ef39e6dp-711, 0x1.468f6a1a1eac5p-219, 0.0, 0.0, 0.0,
     0x1.61c39412b3105p-574, 0x1.55982cf5070d5p-39, 0x1.c0ee7bf408fecp-434, 0.0,
     0x1.07cd3f1a00adap-58, 0.0, 0x1.f14dd160345f3p-508, 0.0, 0x1.e370af711192ep-780,
     0.0, 0x1.1e08d60ab776ap-412, 0.0, 0.0, 0x1.8ca534b462187p-123,
     0x1.7f36675551583p-678, 0x1.b7f38fb7f3181p-669, 0.0, 0.0, 0.0, 0.0,
     0x1.5ac7ff35e7b8dp-362, 0.0, 0.0, 0x1.6ffc0705345c3p-1003, 0.0, 0.0,
     0x1.2b3d5eba549edp-619, 0x1.e9913d0a3b887p-325, 0x1.4e721d6a24808p-24,
     0x1.c64ae67a57039p-75, 0x1.755a459c3418dp-650, 0x1.d60515fb289ccp-399, 0.0,
     0x1.e75efa76802a2p-930, 0.0, 0x1.638ddfd241442p-244, 0.0, 0x1.33b85623b34b5p-151,
     0x1.9858742b9a0a6p-199, 0x1.66ffe9f49d81fp-620, 0x1.a07b196a90f24p-321,
     0x1.c880a176609f8p-828, 0.0, 0x1.3d1f0db24e0b3p-96, 0.0, 0x1.2c8e5de30523ap-17,
     0.0, 0.0, 0x1.f6e8f611ca94bp-178, 0x1.ec57e4c4f9637p-830, 0x1.7766a3dc7259ep-470,
     0.0, 0x1.f565809359c4bp-792, 0x1.968beb4c5116fp-106, 0.0, 0x1.accd28fc2067p-707,
     0.0, 0x1.77a9dec43b5a8p-719, 0.0, 0x1.8eed4e6afccb4p-779, 0x1.04edeadc0ce28p-450,
     0x1.96f4d737745b8p-824, 0.0, 0x1.d1c4ca49f17b9p-156, 0x1.dacd35d902d9cp-745, 0.0,
     0.0, 0x1.0ee2fac1335d6p-449, 0.0, 0.0, 0.0, 0x1.3b01cba769e56p-786, 0.0,
     0x1.f1fcd47ab2423p-998, 0.0, 0.0, 0x1.0600355534759p-824, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.769bd5c2bcb6ap-130, 0.0, 0x1.ea7b1513e4f22p-173, 0.0,
     0x1.31b1cb4802eb9p-640, 0x1.5f72aa5ebf1f1p-413, 0.0, 0x1.f0c071046cbd8p-596,
     0x1.5d1c6ded93ad9p-321, 0.0, 0x1.dca78aeea26dbp-374, 0x1.4591915303522p-534,
     0x1.883f27e153a5dp-181, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa18434eff03bp-135,
     0x1.30ea56e5db597p-318, 0x1.928077473bef9p-386, 0.0, 0.0, 0x1.55cb6be607405p-124,
     0x1.3d3d9d4e15208p-307, 0.0, 0x1.da2430e4e3295p-751, 0.0, 0x1.1f6e849ab94a8p-122,
     0x1.8b9c7a42dc60cp-91, 0x1.e4d11f2dd2b0dp-706, 0.0, 0x1.51e47aef06054p-929,
     0x1.fb9d82bf34e49p-752, 0x1.62d6ebc0a89a8p-1005, 0.0, 0x1.9b471a883b7d9p-887,
     0x1.321dbefbc07d8p-585, 0.0, 0x1.0659fd7f50fbfp-819, 0.0, 0x1.4c134f97c1bb4p-593,
     0x1.ac098611e45a2p-282, 0x1.7e218c1177bd5p-617, 0.0, 0x1.137d6243106ap-509, 0.0,
     0x1.78dbbe2436482p-487, 0.0, 0.0, 0x1.314d44a2ecd27p-808, 0.0, 0.0,
     0x1.c699d163b72e7p-98, 0.0, 0x1.dc2abd32cc696p-666, 0x1.5ac66d16895b4p-573,
     0x1.7f29084a21916p-337, 0x1.d9cb570f4be4bp-2, 0x1.d22242713613p-376,
     0x1.e661a108d7602p-114, 0.0, 0x1.7babdaadbbfc9p-365, 0.0, 0x1.ed12b73aae56fp-564,
     0.0, 0.0, 0.0, 0x1.664ae339c0585p-334, 0.0, 0.0, 0.0, 0x1.9b28cd787e4adp-951,
     0x1.6ea7bd8756275p-281, 0x1.0fb550ac7fcafp-515, 0x1.10af0e2963742p-232,
     0x1.bdbaf5db69e38p-245, 0x1.09bfbe091ac41p-10, 0x1.12fa62833382cp-910, 0.0,
     0x1.49a129be5c17dp-488, 0.0, 0.0, 0.0, 0.0, 0x1.9e2a52ea6c83cp-871,
     0x1.d7658d3ddb9bfp-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64645a0d3484ep-172, 0.0,
     0x1.d55173bff9947p-922, 0x1.deae344ed111ep-938, 0x1.0d4e2b0910423p-809, 0.0,
     0x1.6776f0529fb5dp-252, 0x1.90ed179029587p-578, 0.0, 0.0, 0.0,
     0x1.deba0656f37ebp-923, 0x1.7d57deb27c40cp-311, 0.0, 0.0, 0.0,
     0x1.69c394a39cbf2p-479, 0.0, 0.0, 0x1.9f324ea0faa7dp-126, 0.0,
     0x1.e7237eb32f5d4p-894, 0x1.4ac5daa66a65ep-739, 0.0, 0x1.1e6d5499a655bp-976, 0.0,
     0.0, 0.0, 0x1.11808f5a5fb36p-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.bce0ff5a37f5bp-1001, 0x1.0b7f8ca69851ep-701, 0.0, 0.0,
     0x1.03e98be573d96p-291, 0.0, 0x1.443cb9691b48cp-176, 0.0, 0.0,
     0x1.01485e71ce7bbp-373, 0x1.52ed8b6c5523bp-406, 0x1.90583b3ca07f2p-957,
     0x1.c8237e6d83654p-374, 0x1.0fc3a0c4421aep-698, 0.0, 0x1.a0b190a873435p-366, 0.0,
     0x1.0e3a918619227p-774, 0.0, 0.0, 0.0, 0.0, 0x1.33119b663b3a3p-559,
     0x1.71b8e36d1c93bp-807, 0.0, 0x1.94d8eddc1e6d5p-351, 0.0, 0x1.35c0bd76689bep-502,
     0.0, 0.0, 0x1.2d3f619f857c7p-216, 0x1.b623ce095ba6ap-254, 0x1.146c874b479e4p-588,
     0x1.b6ef742d251fbp-266, 0.0, 0x1.32f78c195343ap-491, 0.0, 0x1.dd445b147829ep-213,
     0.0, 0x1.cfbef1006b6e6p-922, 0x1.5cb4f6a380f21p-688, 0.0, 0.0,
     0x1.3742803991272p-504, 0.0, 0.0, 0x1.763365bec4019p-323, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.390fe049775e3p-361, 0.0, 0.0, 0x1.6c61d4fae419bp-563, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c96d0dfffe464p-365, 0x1.8fcece2f253f8p-426, 0.0,
     0x1.30a48d0f3d128p-425, 0.0, 0x1.7b24063a1545dp-566, 0.0, 0.0,
     0x1.5ae08e14a09bbp-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a94e5e036587p-815,
     0x1.f5ba225f4cb35p-252, 0x1.998064ad4347cp-25, 0x1.d20e9464348bbp-7,
     0x1.196a0fc43f37bp-1001, 0.0, 0x1.6184d1e3a3c0cp-868, 0x1.92fe130a4e1fcp-632,
     0x1.80063c2071329p-860, 0x1.a802f93027fb8p-208, 0.0, 0x1.d853385aa7aafp-888, 0.0,
     0x1.61fca3773b0fp-498, 0.0, 0x1.cab0e9e313661p-57, 0x1.073fc911a9531p-134,
     0x1.3882c30b0c4c2p-60, 0x1.e1e9f5c4c5af7p-707, 0x1.6270efae15c9ap-290,
     0x1.f149879a59f6cp-274, 0.0, 0x1.b28b49dec1ce9p-462, 0x1.8dc4d8049f2e6p-392,
     0x1.2c75e15106d09p-128, 0.0, 0x1.5ef53a4c1d4b2p-382, 0.0, 0.0,
     0x1.ea9f6f59ffffdp-552, 0x1.e78b55ad903bep-933, 0.0, 0.0, 0x1.4df97ccf1e79dp-768,
     0.0, 0.0, 0x1.127a00bada343p-889, 0.0, 0x1.213024ce39c28p-14, 0.0,
     0x1.919e0b7df4b96p-312, 0.0, 0.0, 0.0, 0.0, 0x1.b9a4b9fec1bd2p-318, 0.0,
     0x1.f440c08985bc4p-142, 0.0, 0x1.111c2f675a04cp-551, 0x1.ceceb3a8c9562p-892, 0.0,
     0x1.9ef08d97d7816p-197, 0x1.95bd1edb26dbbp-100, 0x1.dc5789343aafbp-652, 0.0,
     0x1.da8d62fcc0ca6p-889, 0.0, 0x1.87ca8a37c3e54p-47, 0x1.60c84ebf55bacp-560, 0.0,
     0.0, 0x1.6175a5bf53421p-123, 0.0, 0x1.3f1127886e57fp-908, 0x1.fa01446a91167p-668,
     0x1.b4e40ffaa5864p-360, 0x1.24f424358c1c5p-121, 0.0, 0.0, 0x1.c9a4ea26dafedp-475,
     0.0, 0x1.e165082888dadp-351, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0bd81952b9a6p-338, 0.0,
     0x1.7ee5a630f52edp-239, 0.0, 0x1.ade38bb8765e1p-446, 0x1.8979610ccd85cp-695, 0.0,
     0x1.3ef1dc7603a14p-679, 0x1.e21ba6ed196f3p-149, 0x1.04d1b8bea7785p-389, 0.0, 0.0,
     0x1.d4fe3a2fa947p-902, 0x1.1699a733ff6d9p-221, 0.0, 0.0, 0x1.e5c4b68f500c5p-816,
     0x1.af1a5ff1a919ep-670, 0x1.5c9695314574bp-758, 0.0, 0x1.7e359735cd2b7p-906,
     0x1.52b8a1266080ep-272, 0x1.6973c8bc6241p-490, 0x1.f272ff35969a4p-6,
     0x1.187f03b386704p-1007, 0.0, 0x1.7ecde5f8ab835p-68, 0x1.3c84d80327052p-401,
     0x1.d933d872cc9b1p-227, 0.0, 0.0, 0x1.060ef38973e2bp-860, 0.0, 0.0, 0.0,
     0x1.9df536afc77ffp-387, 0x1.57a0d4bf3c39dp-918, 0x1.7f3b9b9355f4p-112, 0.0, 0.0,
     0.0, 0.0, 0x1.2ecbc79bec99ap-516, 0x1.cbad83dc2ec1cp-470, 0.0, 0.0, 0.0, 0.0,
     0x1.d9bb448749cfcp-900, 0x1.ebc41c209d206p-897, 0x1.066cbf822fcadp-21, 0.0,
     0x1.1640925f93db2p-282, 0.0, 0.0, 0.0, 0.0, 0x1.ef8d20f7f32c5p-424, 0.0,
     0x1.7ab0b31d434f5p-264, 0x1.6344a72a70a2dp-152, 0.0, 0.0, 0x1.fd4576c217f38p-53,
     0x1.8c3ca192ba9b6p-422, 0x1.e159b9fa8b368p-834, 0x1.cc3be85a0885cp-184, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6b8e7f49ce079p-621, 0x1.277aa6926792cp-85,
     0x1.5b89ce3e93276p-378, 0.0, 0.0, 0.0, 0.0, 0x1.248577b186022p-863,
     0x1.60b457c115487p-998, 0.0, 0.0, 0x1.1764040bf3c8cp-473, 0.0, 0.0,
     0x1.a593b2dafdefep-651, 0.0, 0.0, 0.0, 0x1.7c63fd4652ae8p-211,
     0x1.3279d4c3973a4p-33, 0x1.d97ff2e5dac83p-326, 0.0, 0.0, 0.0,
     0x1.abfdaf179cd28p-444, 0x1.c85a2cf802861p-1001, 0.0, 0x1.10821f89804e7p-421,
     0.0, 0x1.25ef8b45d91dap-560, 0x1.03251aa766bacp-502, 0.0, 0x1.93bbca2207da2p-225,
     0.0, 0.0, 0.0, 0x1.389e54bf0d8p-66, 0x1.7f41c5ba7073dp-227,
     0x1.a703d686580c7p-64, 0x1.04d66606e12cbp-953, 0.0, 0x1.fb697f1c4e211p-817,
     0x1.a4bce2c91ca16p-976, 0.0, 0x1.50f1be434f3p-550, 0.0, 0x1.81af5d1ffa3ebp-437,
     0x1.5b22e87aa3ceap-200, 0.0, 0x1.37be30567bd8cp-387, 0.0, 0x1.60520e6d2b6ep-989,
     0.0, 0.0, 0.0, 0.0, 0x1.95459fdc710c4p-432, 0x1.3c907795458a4p-413, 0.0,
     0x1.5b5c19d38da2fp-516, 0.0, 0.0, 0.0, 0x1.e88433d634988p-681,
     0x1.10ada8b40535fp-62, 0.0, 0x1.162ab3ea5515ap-179, 0.0, 0.0,
     0x1.0858d5c3c69d7p-788, 0.0, 0.0, 0.0, 0x1.b2d5aaf973053p-304, 0.0, 0.0, 0.0,
     0x1.32635152b251p-790, 0.0, 0x1.8c6b2ce154f8fp-1017, 0.0, 0x1.622b2e5b1d5cdp-957,
     0.0, 0x1.9e9b5200980b3p-783, 0.0, 0x1.aa87d695a5c62p-92, 0.0, 0.0,
     0x1.ea4f76cce1be5p-999, 0x1.aa916b194df83p-177, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33eeb6e684465p-942, 0.0, 0x1.bd2480623b7bfp-776, 0x1.ab273713dbac4p-773,
     0x1.d527c84faadc7p-645, 0.0, 0x1.37fffdfa42cc3p-599, 0x1.946f2e63767f3p-185,
     0x1.c28e610c38108p-218, 0.0, 0x1.be209a29c609dp-557, 0.0, 0x1.e5ef6a997206p-60,
     0x1.aa14e9c442e6cp-327, 0x1.a1a95372576d9p-924, 0x1.00655de3c1912p-929,
     0x1.53860baef5e5ep-405, 0.0, 0x1.d12c51d1dac6dp-757, 0.0, 0.0, 0.0,
     0x1.2c0547bd14297p-493, 0x1.2f7566c46e03dp-806, 0.0, 0x1.bd98aec878bfcp-609, 0.0,
     0.0, 0.0, 0.0, 0x1.90b668f160adfp-100, 0.0, 0x1.c225df12338e7p-59, 0.0,
     0x1.a53da8ddda892p-269, 0.0, 0.0, 0x1.3846fcc3dba28p-570, 0x1.a3a5e262484bep-916,
     0x1.1671b0c58158fp-571, 0x1.60d4b72343e71p-39, 0.0, 0.0, 0.0,
     0x1.f3f1d3f4693b4p-1021, 0x1.9101f1fde6391p-505, 0x1.58089bc487704p-249,
     0x1.de55aef1eb409p-115, 0x1.f3b6387e996f3p-525, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a45cd4fa89ed6p-236, 0.0, 0x1.c14b404ad7b8fp-519, 0x1.2c5556f9fc96p-892,
     0x1.ba48fc3c1ebdp-262, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c65fa22e0916p-894, 0.0,
     0.0, 0.0, 0.0, 0x1.c63e980a89e6bp-747, 0.0, 0x1.c63b416287685p-623, 0.0,
     0x1.8dd426ee2b94cp-89, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2e60ea9560bbp-27,
     0.0, 0.0, 0x1.f485f44430071p-272, 0.0, 0.0, 0.0, 0x1.a2426d28b11b4p-24, 0.0,
     0x1.9ee95aba2003ap-600, 0x1.ba67b5ff0e8bfp-625, 0x1.ca390e489fd2dp-696
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
            tmp1 = Sleef_cospid1_u05purecfma(tmp0);
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
    printf("Sleef_cospid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cospid1_u05purecfma bench acc %la\n", global_bench_acc);
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
