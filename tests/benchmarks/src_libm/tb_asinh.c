/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_asinh.c --function asinh --headers math.h,ml_support_lib.h \
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
     0x1.70f089f30a1ddp-40, 0.0, 0x1.00fb39078c4bbp-104, 0.0, 0.0,
     0x1.02b06051428d6p-552, 0.0, 0x1.91c2560843f5fp-251, 0.0, 0x1.01c954b315bfdp-796,
     0x1.96b2526c195c2p-774, 0.0, 0.0, 0.0, 0x1.ee9c730489509p-219, 0.0, 0.0, 0.0,
     0x1.0e674f9ed1dacp-337, 0x1.78169938dfa15p-609, 0x1.3d45a7d3cd706p-411,
     0x1.b02e60c7948e1p-947, 0.0, 0.0, 0.0, 0x1.bf90bd2ab0feap-255, 0.0, 0.0, 0.0,
     0x1.5a3f1627bf467p-259, 0x1.5bcf07f24f93bp-460, 0x1.fc56d63b8a756p-935, 0.0,
     0x1.61adbd5554979p-700, 0x1.5844a02fe495fp-139, 0x1.040c8f88c7ae7p-895,
     0x1.4f033b0ae48cbp-142, 0x1.044b1632644acp-955, 0.0, 0x1.8e2f0b8c053c4p-193,
     0x1.311450e6e093p-344, 0.0, 0x1.80607bce9c3a9p-230, 0x1.1b8c49263e77ep-840,
     0x1.c31a4034dc305p-904, 0.0, 0x1.37d2afb5a84bcp-1005, 0x1.dc7ba0766cc8ep-194,
     0.0, 0.0, 0x1.79714e2c8b188p-342, 0.0, 0.0, 0.0, 0x1.a71ac6e4e9c75p-162,
     0x1.0cf5d84463162p-214, 0.0, 0x1.0b2c1ad0b2b6bp-535, 0x1.07d18955821f2p-944, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.412f67260603dp-333, 0.0,
     0x1.db48b17932066p-655, 0x1.a7cb2b1c398fap-486, 0.0, 0.0, 0.0,
     0x1.9257d2697f1a2p-150, 0.0, 0.0, 0.0, 0.0, 0x1.18082f7daf1ebp-486,
     0x1.944f84f84d2cdp-985, 0x1.595649aa1ef04p-664, 0x1.f0cf73c466d81p-907, 0.0,
     0x1.41c2016f10dc8p-190, 0.0, 0x1.c0dbc1a99865ep-963, 0.0, 0x1.3336167d4f85p-653,
     0x1.5a6488191b184p-534, 0x1.29f824ad195bdp-412, 0.0, 0.0, 0.0, 0.0,
     0x1.5853e81e2329ap-57, 0x1.2f5385df35e1p-124, 0x1.6250c9beb4262p-838,
     0x1.ba4f3bc79f25p-63, 0x1.34b5445af6c01p-894, 0.0, 0x1.171e30f56cd2dp-388,
     0x1.77471dc220b55p-971, 0.0, 0.0, 0.0, 0x1.83bdebaa45aefp-604, 0.0, 0.0, 0.0,
     0x1.a6a9ce003291bp-370, 0x1.597c6fb5cd51p-186, 0x1.21d30a5934559p-704, 0.0,
     0x1.5ac4d38e344cfp-513, 0x1.27e06be09525cp-823, 0.0, 0.0, 0x1.f145139b00aacp-666,
     0.0, 0.0, 0.0, 0.0, 0x1.43dc10eaf53d5p-329, 0.0, 0x1.9c84b15543526p-680, 0.0,
     0x1.49209daeca3b6p-113, 0x1.47807c7844024p-858, 0.0, 0.0, 0.0,
     0x1.be7079d89e41p-344, 0.0, 0x1.93ce60b273a7ap-281, 0.0, 0.0,
     0x1.b3696ebb5549bp-1020, 0x1.1cd8051ba09dap-437, 0.0, 0x1.fb6d78c6ddd2fp-915,
     0x1.e0772a45bd891p-757, 0x1.fae04efa95caep-602, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2090cf850dec4p-33, 0.0, 0.0, 0x1.bb9ace90eb388p-264, 0x1.62140b130c3ccp-346,
     0x1.dbac4a9d2e49fp-227, 0x1.48727273e4d45p-907, 0.0, 0x1.2c8f992d9c519p-865,
     0x1.fd12197628e32p-1004, 0x1.22fdab2b440c8p-628, 0x1.6077145fd441p-502,
     0x1.ffcf61dc54c6cp-884, 0x1.37ebfa8008696p-770, 0.0, 0x1.007270b179f05p-38,
     0x1.53161d8001c7bp-838, 0.0, 0x1.623d173e5751ep-669, 0.0, 0.0, 0.0,
     0x1.af1abcbf58b4cp-432, 0x1.2d6bcefc2d5cbp-863, 0.0, 0.0, 0.0, 0.0,
     0x1.1762c8c1ddbdep-674, 0x1.ebc6e5c268c37p-801, 0.0, 0.0, 0x1.d9655111f6921p-429,
     0x1.a490a18b3c52p-543, 0x1.b09384f4aeb21p-778, 0x1.27a4b1e245a36p-817,
     0x1.b800751427869p-488, 0.0, 0.0, 0x1.8086be0eefb7dp-541, 0x1.bf5445fb5c5bdp-790,
     0x1.e5d8294c8f78dp-922, 0.0, 0x1.15f63927367f8p-214, 0.0, 0.0,
     0x1.eab1796a93ce2p-287, 0x1.6eca7805c79b1p-237, 0.0, 0.0, 0.0,
     0x1.d4b5c356b5a73p-112, 0.0, 0.0, 0x1.2ca220f0340e9p-450, 0x1.4c8125b17b4ddp-787,
     0x1.92fd17f39ddeep-341, 0.0, 0x1.1b090e18148bfp-511, 0x1.80eed4c1bebe1p-712,
     0x1.0123af08e7396p-599, 0.0, 0x1.f3876e8447dd5p-247, 0x1.88d7cb6e315b8p-740, 0.0,
     0x1.a74c4801dbb93p-43, 0x1.48d357493c8a2p-821, 0x1.65b8fedf23ef1p-570, 0.0,
     0x1.50da8b479f3aep-838, 0.0, 0x1.c5ae3bd894bb1p-57, 0.0, 0.0, 0.0,
     0x1.9584fe5ba5a7bp-333, 0.0, 0.0, 0.0, 0x1.15fd8eb588161p-535,
     0x1.2dcf16ce1695bp-301, 0.0, 0.0, 0.0, 0.0, 0x1.14ceb4ed2adebp-162,
     0x1.6af6910f81d33p-488, 0x1.07d97ed114815p-243, 0.0, 0x1.82da4039d250fp-689,
     0x1.22dd0dda0ba66p-424, 0x1.ae2745f6e4d28p-830, 0x1.1cc7898301d4bp-1011, 0.0,
     0x1.9b6b0b275759p-822, 0.0, 0.0, 0.0, 0x1.6dc53500543b3p-228,
     0x1.a9bba2b35b6b4p-695, 0x1.c201a3eb809fep-875, 0x1.dcc0c06bf1c42p-365, 0.0, 0.0,
     0.0, 0x1.acc35735927e8p-303, 0.0, 0.0, 0x1.f6c5ec7498d84p-638, 0.0,
     0x1.8ec69e3955d9bp-107, 0x1.8d1545f3dfc38p-656, 0x1.db3f26a1dfd5dp-1014,
     0x1.59c1610cac34p-358, 0.0, 0x1.d0b5dbb6517ep-591, 0x1.85a2965436687p-693,
     0x1.c9b99da0b3a43p-600, 0.0, 0.0, 0x1.4bfddcaaba879p-908, 0x1.3314f5896a5ecp-250,
     0x1.175a2e8061a7fp-522, 0.0, 0x1.78931e07b6731p-818, 0x1.d692897ba3103p-554,
     0x1.02fcd5769bf08p-616, 0x1.8118094141784p-177, 0x1.2867ee9bdc64bp-859, 0.0, 0.0,
     0x1.34d0b8a2488ap-89, 0x1.9aff021729eccp-879, 0x1.6e10c37db78bfp-6,
     0x1.fcc00cf9d1304p-642, 0.0, 0.0, 0x1.9f509f7eda133p-149, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1c4b04d97138bp-375, 0x1.8d6026dc49525p-427, 0.0,
     0x1.4a964d982713ap-57, 0.0, 0.0, 0.0, 0x1.7d98c16c359b3p-327,
     0x1.9db47f37c5299p-273, 0.0, 0x1.b450b572ff7e9p-463, 0.0, 0.0, 0.0,
     0x1.a0637041d6d86p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eec88348251ddp-244, 0x1.f5fde8e56692bp-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0d1ae051df666p-981, 0.0, 0x1.0fd3ffec6d6ep-988, 0.0,
     0x1.65b209757b174p-488, 0.0, 0.0, 0x1.d21761850dd9fp-449, 0.0,
     0x1.1b40d9318c7f2p-52, 0.0, 0x1.e2ec5667a870cp-161, 0x1.3ff70457286ecp-307, 0.0,
     0.0, 0.0, 0x1.26610b747af7dp-189, 0x1.1342f1f2de0c9p-220, 0.0,
     0x1.cb6e7486fe752p-6, 0x1.43575c0bf5e0ap-543, 0x1.bc25892dc03adp-218, 0.0, 0.0,
     0.0, 0x1.a527f2f5267b8p-600, 0x1.0df982a82c928p-561, 0.0, 0.0,
     0x1.2bb467b7ded7ap-631, 0x1.e37a36f6cb128p-173, 0.0, 0.0, 0x1.dd4b0c295ee49p-756,
     0.0, 0x1.51e9c09f5bec1p-613, 0.0, 0x1.1919b03d6449bp-211, 0x1.a3ea94e368722p-150,
     0x1.21741c7d2fb56p-770, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.222d55c52d0f1p-645,
     0x1.8242d105f2efap-873, 0x1.8e862b77ad348p-445, 0.0, 0.0, 0x1.cb507867c0438p-268,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4e7137be282p-492, 0x1.ed438ecd5cab3p-422,
     0x1.417bc5d65e3cdp-831, 0x1.f87fc6240db0ep-933, 0.0, 0x1.421384a4113p-806, 0.0,
     0.0, 0x1.59e1ae114210cp-510, 0.0, 0x1.a4aa49e4cef3dp-965, 0.0, 0.0,
     0x1.f09c836b3ed31p-736, 0x1.c0b4589e37d21p-566, 0x1.15dd6ac8aec9fp-599, 0.0,
     0x1.bb2155c63fc63p-226, 0.0, 0.0, 0.0, 0.0, 0x1.f7dfcd160bf49p-412,
     0x1.5a4e02fe5ff1fp-855, 0.0, 0x1.61d3053550febp-671, 0x1.dfa456f6aad6cp-406,
     0x1.aee0cfe3990e6p-57, 0x1.bb0a819f9aa87p-160, 0x1.c85d6daacc88ap-888,
     0x1.962b4f6f1fce3p-597, 0.0, 0.0, 0x1.39e2aedba6fabp-980, 0x1.303cd162b8c09p-879,
     0x1.367a8efe5e618p-735, 0x1.0cd4c34792532p-722, 0.0, 0.0, 0.0,
     0x1.6e7b198579106p-486, 0.0, 0x1.10b759cb86b8cp-107, 0.0, 0x1.71388d93aba5bp-469,
     0.0, 0.0, 0.0, 0.0, 0x1.194c978367232p-711, 0.0, 0x1.3bf2eaea91f7cp-244,
     0x1.76afb03471359p-329, 0x1.69b4f128c7989p-798, 0.0, 0x1.a937d33ef60e8p-590, 0.0,
     0.0, 0x1.3efb0438798fp-139, 0.0, 0.0, 0.0, 0x1.b53d3573034a3p-237,
     0x1.b340a5fc7fefep-685, 0x1.dbe0976374d39p-705, 0.0, 0x1.2200ea6c1070cp-230,
     0x1.02de080b1cbb8p-518, 0.0, 0x1.557b95f4a077cp-400, 0x1.c7a22f5cffedbp-847,
     0x1.88abd1264e56ep-870, 0.0, 0.0, 0.0, 0.0, 0x1.bf2c532b8067bp-960, 0.0, 0.0,
     0x1.4d9dec3d46bbep-748, 0.0, 0x1.c4a4173073b5bp-231, 0.0, 0.0, 0.0, 0.0,
     0x1.0933ebc424246p-543, 0.0, 0.0, 0x1.fb69a27c2ec06p-73, 0.0, 0.0, 0.0, 0.0,
     0x1.d028bb0bd270dp-687, 0x1.9e193800ac695p-793, 0.0, 0.0, 0.0, 0.0,
     0x1.38ce02c9460acp-846, 0x1.3d23c13bb32ffp-401, 0x1.1bd89929cf1c8p-38,
     0x1.1f197a8bff56p-950, 0.0, 0.0, 0.0, 0x1.477fbf9c8e089p-524, 0.0, 0.0,
     0x1.924e4fd4e4693p-922, 0x1.7de584674839dp-989, 0.0, 0.0, 0x1.5b7a8de840992p-525,
     0x1.a5f356fef138ep-884, 0x1.01665a0ac3c22p-567, 0x1.a6f0cf8e74283p-741, 0.0,
     0x1.83733699d167dp-259, 0.0, 0x1.440e0a6786e1bp-636, 0x1.d161330ffec71p-342, 0.0,
     0.0, 0x1.30a2be13d09f8p-378, 0x1.664a7bf8bdb23p-874, 0.0, 0x1.29f810774257dp-864,
     0x1.dfdd7856097ap-592, 0.0, 0.0, 0.0, 0.0, 0x1.46cf3e49aefd7p-153,
     0x1.f4e593d6c9b87p-96, 0x1.ca578a33c8121p-913, 0x1.496de18ea71f4p-697,
     0x1.687d038a73fc1p-592, 0.0, 0.0, 0.0, 0x1.918e51ec2ea43p-358,
     0x1.be0e67c4d2261p-313, 0x1.41531f7554da9p-181, 0x1.8b6c54282d044p-924,
     0x1.6479711e0aa1bp-491, 0x1.a1b9d6bc813cdp-485, 0.0, 0x1.d6cb6f0dd148bp-405, 0.0,
     0.0, 0x1.64f98d7f2195fp-90, 0.0, 0x1.2043315164036p-173, 0x1.ea443d2289282p-191,
     0.0, 0x1.469378f0a12bfp-666, 0.0, 0.0, 0.0, 0.0, 0x1.ba1b1e7774302p-607, 0.0,
     0x1.c608a7aef73cdp-59, 0.0, 0x1.2b3325820b647p-399, 0.0, 0x1.4156703011602p-985,
     0.0, 0.0, 0x1.808fce14fa406p-974, 0.0, 0x1.0c72c4b08c9a9p-422,
     0x1.00487a8ec87c5p-170, 0x1.4545915af795p-753, 0x1.0884624c2fb4cp-953,
     0x1.5524169de3cf9p-223, 0.0, 0x1.fa291c3672248p-959, 0.0, 0x1.afd176ede9cb8p-190,
     0x1.aa35feccd33c2p-957, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.498b9e0a0b2dcp-463, 0x1.6160d79ebc921p-225, 0x1.3b1a893994058p-118,
     0x1.64cd218cd01cbp-864, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c6eec8ded5dbp-23,
     0x1.02c1ac0f90b4p-222, 0x1.a3c66071b5a03p-321, 0x1.1514ab972fd0bp-276, 0.0,
     0x1.b424cee9be2f6p-835, 0.0, 0.0, 0.0, 0x1.482668c8b9dddp-339,
     0x1.87fa61aaf1709p-460, 0x1.50591919292efp-855, 0.0, 0.0, 0x1.cfcfa99b8cb17p-896,
     0x1.8be3693173648p-116, 0x1.1752c3ecbc953p-883, 0.0, 0x1.ae109ec527bdap-247,
     0x1.4dff78f322a55p-360, 0x1.d37cd3d211cfep-649, 0x1.304c5e851e882p-67,
     0x1.e3a3fd46c323ap-364, 0x1.5fa21f55d5841p-437, 0.0, 0.0, 0x1.4ab5b81de242dp-25,
     0x1.91ee022b15a4cp-876, 0.0, 0.0, 0.0, 0.0, 0x1.958a443e844d8p-145,
     0x1.6b38d8c20fbd3p-105, 0x1.3e4d5fb1d64f3p-958, 0.0, 0x1.f5581714f13d2p-809,
     0x1.d11f38a238612p-108, 0x1.c0fd6bf7a4843p-650, 0x1.a9eaadb5c9793p-625, 0.0,
     0x1.91463c05bae4fp-549, 0.0, 0x1.504eff82b0448p-590, 0.0, 0x1.401f54e4f841dp-393,
     0x1.ae25e79eac256p-403, 0.0, 0.0, 0x1.7b7bec31de594p-989, 0x1.33bb405451faap-68,
     0.0, 0x1.9b423c3d99d0dp-468, 0.0, 0x1.2d923f164fa1ep-878, 0x1.49e7c509c0a51p-878,
     0.0, 0x1.81cae2dcf6074p-527, 0x1.860935060da6cp-132, 0x1.4e30542ddcdd3p-181, 0.0,
     0x1.fde32c10514bep-738, 0.0, 0x1.459a72900d54p-777, 0.0, 0x1.0268635a3681fp-411,
     0.0, 0x1.ab315e98c0543p-749, 0.0, 0.0, 0.0, 0x1.aa924a0aefc2ep-738, 0.0,
     0x1.c318ce2da3c2dp-684, 0x1.ce0dd7eed5197p-402, 0x1.7ffad8813f67p-383, 0.0,
     0x1.845196ca9f4cap-793, 0x1.dba9403ce8c3cp-527, 0x1.d65e8af128a9p-215,
     0x1.c9cda0aaaa2c1p-753, 0.0, 0.0, 0x1.da4e09a789603p-777, 0x1.d7a70a5370bb6p-958,
     0.0, 0x1.6c5ec3126f1d1p-760, 0x1.e39767740a731p-626, 0x1.04b917bf4089cp-867,
     0x1.aa1b076e4407ep-244, 0x1.20627bfde293cp-632, 0x1.809272b10d4b8p-549,
     0x1.4e8bc4e6cc9afp-824, 0x1.acdc4ae071258p-18, 0x1.c801240ad24b4p-30,
     0x1.66762fe965e96p-221, 0x1.e3c2aa74185aep-541, 0x1.bc4b27b08fbb4p-114, 0.0,
     0x1.15323922aa528p-150, 0x1.253814919fff9p-3, 0x1.f62bd47d1d9c4p-377, 0.0, 0.0,
     0x1.ebf517405bca6p-42, 0.0, 0x1.1bc71c2bdb537p-99, 0x1.d04cc000f25cap-287,
     0x1.3e018e59f1098p-500, 0x1.ddbc97e6b132cp-503, 0.0, 0.0, 0x1.b99bde21d73e2p-885,
     0x1.6121fce946508p-264, 0.0, 0.0, 0.0, 0x1.001d61649a623p-545,
     0x1.788e1b3a88e2p-393, 0.0, 0x1.6a0869a43d7fcp-232, 0.0, 0x1.754b73c72b484p-337,
     0x1.c038715a667bp-1, 0x1.807234352478ep-341, 0x1.c621b70747131p-665, 0.0, 0.0,
     0.0, 0x1.ab738d2360db7p-190, 0.0, 0x1.6f6562e4420acp-960, 0.0, 0.0, 0.0,
     0x1.4ff388391fbc1p-693, 0.0, 0.0, 0x1.e676fbbe10f81p-391, 0x1.cc5bc4b5660acp-596,
     0.0, 0x1.07eeb8d5850c6p-565, 0x1.40c389439fd1ep-1005, 0x1.60b1f08435f15p-545,
     0.0, 0x1.b9a8ba2b11706p-101, 0.0, 0.0, 0x1.1a01fab601f8dp-310, 0.0, 0.0,
     0x1.59dac0d14095p-283, 0.0, 0x1.fc3c24f80eadp-716, 0.0, 0.0,
     0x1.13e7cf7c3d594p-491, 0x1.c53bfe41164fp-96, 0x1.85b8341cce9f3p-498, 0.0,
     0x1.93bfd980d13d3p-431, 0x1.eefd7e3eb4097p-156, 0x1.60f9f4e8181bp-575, 0.0,
     0x1.518455dbfada8p-749, 0.0, 0.0, 0.0, 0x1.288b09c0c0919p-390, 0.0,
     0x1.2476088647fc2p-435, 0x1.40377da9422cfp-749, 0x1.7057063bdf173p-77, 0.0, 0.0,
     0.0, 0x1.0e0f8951a4cddp-410, 0x1.58b8e9d424ed8p-88, 0.0, 0x1.6b4d405c356f3p-976,
     0x1.10718229e50f2p-262, 0x1.b77c13fd1a1c9p-83, 0x1.b3e48589aaccfp-459,
     0x1.f4f1a9896ef87p-501, 0x1.98666d654333fp-780, 0x1.fc2cf5c1d1e34p-54, 0.0, 0.0,
     0x1.7f01005057221p-419, 0.0, 0x1.f02ae0a0982b7p-79, 0x1.c38bc5b73652ep-394,
     0x1.203700892b357p-442, 0.0, 0x1.da662c5945696p-530, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.128a5d88a08e6p-677, 0.0, 0x1.d11c8f3d44ff5p-990, 0.0,
     0x1.c90e0571ad25p-724, 0x1.02a902229fefap-826, 0x1.d97dbe11a00e1p-806, 0.0, 0.0,
     0.0, 0x1.9a1782ceb34d2p-467, 0.0, 0x1.501cc28bef847p-345, 0x1.f8333a26bfcc5p-39,
     0x1.a6b81e5b24fe3p-775, 0x1.4aae8143843eap-394, 0x1.e441ef9f52595p-72,
     0x1.a2e593206e906p-606, 0x1.80f6708979fb5p-241, 0x1.45c80d667c00ap-661, 0.0,
     0x1.5be5021d49503p-541, 0x1.5c4f3bfbe5902p-127, 0.0, 0x1.01fcecc791959p-244,
     0x1.9da2e25982347p-880, 0x1.cbcc8433800afp-465, 0x1.1ebd47258b08p-813, 0.0, 0.0,
     0x1.0adb102c02d56p-186, 0x1.163b990412771p-1022, 0.0, 0.0,
     0x1.fe138cc8a271bp-465, 0.0, 0x1.69349c695f5cfp-527, 0.0, 0.0,
     0x1.53ad894bd0b5cp-419, 0.0, 0.0, 0x1.3d99660c3fee7p-713, 0x1.63d48a0fcbe8cp-555,
     0.0, 0x1.5f67ccf245d4cp-122, 0.0, 0x1.2c336021e67f7p-670, 0.0,
     0x1.525d4a636a50dp-928, 0.0, 0x1.ea0202a7660bcp-327, 0.0, 0x1.7723b75444baap-400,
     0x1.a728965c76453p-56, 0x1.1638d0184318bp-267, 0.0, 0x1.517d871c0db3p-769, 0.0,
     0x1.3af9f4aaaeaa9p-688, 0.0, 0.0, 0x1.c4001bb19e1d3p-658, 0.0, 0.0,
     0x1.bd82780394f71p-818, 0x1.f6052e1027dbfp-976, 0.0, 0x1.1d85c1aa925cep-386, 0.0,
     0x1.c08e2440e767dp-175, 0.0, 0x1.db75d50f5bb53p-239, 0.0, 0.0,
     0x1.96e00ddeeae6ap-145, 0x1.3a5c6d5737aa5p-823, 0x1.1064b0c5b66ep-518,
     0x1.0865c5f724a3dp-822, 0x1.7b9b62397f7aep-960, 0x1.f21329ffd3814p-915, 0.0, 0.0,
     0.0, 0x1.e76f2dc4e92e6p-394, 0.0, 0x1.874326c099547p-658, 0.0, 0.0,
     0x1.6cc393b8e063p-922, 0x1.246aa832bb614p-607, 0.0, 0x1.14e0ab4a04b82p-435,
     0x1.a8dd6c1f3ce5fp-1004, 0.0, 0.0, 0.0, 0x1.79d070f5a27f6p-505, 0.0, 0.0, 0.0,
     0x1.fad49f84598e2p-732, 0.0, 0x1.958f7354a5602p-593, 0x1.634d163d8c9d3p-994, 0.0,
     0x1.7a9d2719a8fefp-810, 0x1.76bde3d4e3b0dp-26, 0x1.52e2e3f980eadp-158, 0.0,
     0x1.89842bbe06733p-841, 0.0, 0.0, 0.0, 0x1.3b766517dcb5ap-71,
     0x1.b713aa847bf4dp-637, 0.0, 0.0, 0x1.4b0d4ddda0757p-755, 0x1.f6b84de85b0bep-726,
     0.0, 0.0, 0.0, 0.0, 0x1.583229f102badp-427, 0.0, 0.0, 0x1.0e14ea0f568d8p-701,
     0.0, 0.0, 0x1.e0b3840d1c2a8p-965, 0x1.9d2b5ceff7144p-889, 0.0, 0.0,
     0x1.7e6d857e25905p-429, 0.0, 0x1.fae6a9276b015p-116, 0.0, 0.0, 0.0,
     0x1.80329c6278c98p-405, 0.0, 0x1.9f205a623d627p-856, 0.0, 0x1.f769acfdc40b7p-163,
     0.0, 0.0, 0.0, 0.0, 0x1.afeb359483313p-690, 0.0, 0x1.e617556e4989p-819,
     0x1.9a87c2efda517p-258, 0.0, 0x1.d1278126e1034p-599, 0x1.65a4955fa01bbp-520, 0.0,
     0.0, 0.0, 0x1.2f7625d2cc744p-147, 0x1.d70fd4f3882b7p-1018, 0.0,
     0x1.acf53dfd3ef93p-893, 0.0, 0.0, 0.0, 0x1.77c84fbbe741dp-613, 0.0,
     0x1.c31b8f355eb73p-567, 0.0, 0x1.1a2b98d20302ap-959, 0.0, 0x1.24111904e5ec8p-368,
     0x1.6ef359150f404p-854, 0.0, 0.0, 0.0, 0x1.009a8d0a1dcb2p-247, 0.0, 0.0, 0.0,
     0.0, 0x1.277bd92d8ecc6p-161, 0x1.1ec4226356252p-828, 0x1.704119d1c916ep-40, 0.0,
     0x1.df802f9b2af96p-466, 0x1.7f51c8f1bb8ecp-521, 0x1.fde0d5f4205f2p-65, 0.0,
     0x1.4f206e5076d51p-299, 0.0, 0x1.8842fbe060898p-747, 0.0, 0.0, 0.0,
     0x1.f3a0cd1acabf7p-819, 0x1.4ef3e5a5ae9bep-238, 0x1.76f437106f04ap-1003,
     0x1.e20ee6c97a7e4p-807, 0.0, 0.0, 0.0, 0x1.971d3cdf4866cp-838, 0.0,
     0x1.b125b713f1483p-392, 0.0, 0x1.215ba8bfffae1p-519, 0.0, 0x1.0afd133a8b23bp-108,
     0.0, 0.0, 0x1.1937d43ccf612p-763, 0.0, 0x1.424dc46fbd788p-265,
     0x1.83ad8d92e5d59p-779, 0.0, 0x1.baf3eb1b7b5d2p-468
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
            tmp1 = asinh(tmp0);
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
    printf("asinh %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("asinh bench acc %la\n", global_bench_acc);
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
