/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10d1_u10purecfma.c --function \
 *     Sleef_finz_log10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.075edfc541f0dp-33, 0x1.e3f02b9b81b97p-453, 0x1.e7fd687b2e7f7p-639, 0.0, 0.0,
     0.0, 0.0, 0x1.740d9fc68a564p-733, 0x1.54e54affe6d38p-436, 0x1.81ed0f9679d76p-923,
     0x1.b28d85e4768f9p-390, 0.0, 0x1.cc1ce8fc7058dp-544, 0.0, 0.0,
     0x1.88a83534cfd84p-572, 0x1.657e3c8acc924p-151, 0.0, 0x1.678d89d8a7584p-322, 0.0,
     0.0, 0.0, 0.0, 0x1.92e205006d0d1p-1005, 0.0, 0.0, 0x1.f5939ec05c069p-709,
     0x1.140bd7619b6c7p-43, 0x1.091e77d28f3f5p-805, 0.0, 0x1.6461ab65ad1b2p-397, 0.0,
     0x1.641288293aa17p-290, 0x1.cbb39e0b3df09p-637, 0x1.8cfbf451bca2ap-729, 0.0,
     0x1.c3c6bdee89f2cp-679, 0x1.1bc210f0ffa67p-311, 0x1.0511eb37036fdp-186, 0.0,
     0x1.1335232ea6a1bp-285, 0x1.9dac20425495ep-765, 0.0, 0x1.6df55d84ccf11p-552,
     0x1.3bed5cabf6d2bp-370, 0x1.d29666f640cafp-748, 0.0, 0x1.c2dd0f61afe19p-47,
     0x1.ca351697c7caep-609, 0.0, 0x1.31f8b05524168p-291, 0.0, 0.0, 0.0,
     0x1.1bfc704c109c4p-276, 0.0, 0.0, 0.0, 0.0, 0x1.9d8d500ac7bffp-846,
     0x1.aac7573a48822p-698, 0.0, 0x1.cce3567e41a9fp-184, 0x1.df3dc0d2edccap-848,
     0x1.b15b545981b79p-994, 0.0, 0.0, 0.0, 0x1.e6e09ed6cc5d6p-543, 0.0,
     0x1.2750d2ef6fb1ep-175, 0.0, 0x1.4fff46a5753d4p-724, 0.0, 0x1.a324301ed37bdp-328,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1803476cf2cdep-930, 0x1.e31699c4040adp-162,
     0x1.189421f31d4b6p-849, 0x1.6e7373e925a8ep-851, 0.0, 0x1.6b222d707dba5p-886, 0.0,
     0x1.dd68a86bb9959p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6c58b74bda0ap-808,
     0x1.5a91ca29bfb83p-123, 0.0, 0.0, 0x1.36ce78f363605p-347, 0x1.1a5b8fb046cd3p-695,
     0.0, 0.0, 0x1.3f1d85cb7d2f4p-296, 0.0, 0x1.f79e66b1d99c1p-380, 0.0,
     0x1.41bf3d1bfbf05p-64, 0x1.c7715e26cff54p-589, 0x1.1533ee347097bp-922,
     0x1.a8b8b9c6bab44p-555, 0x1.7866eb9ea6409p-862, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ae887093aaebp-51, 0.0, 0x1.da8fe5dad5f0ap-255, 0x1.46c85e2763f1cp-472, 0.0,
     0x1.afdd35c5c5265p-1016, 0.0, 0x1.484126236a047p-907, 0.0, 0.0, 0.0, 0.0,
     0x1.2b00ef163df2cp-830, 0x1.7895cf7813545p-893, 0.0, 0.0, 0x1.38be9cbd703ccp-260,
     0x1.b5e94a151e8ffp-435, 0x1.cd871f2b84a4ep-829, 0.0, 0x1.97aa6d4180b5ap-170, 0.0,
     0.0, 0.0, 0.0, 0x1.6e18fd588fcfp-805, 0x1.4dc8484c46c35p-841, 0.0,
     0x1.5e55a56ee791cp-122, 0x1.c389f80d3ffa8p-478, 0.0, 0.0,
     0x1.deba0b2733fc4p-1000, 0x1.2e5615d8808d8p-648, 0x1.4bdbacec2f104p-647,
     0x1.89cc4296c9c7cp-904, 0.0, 0.0, 0x1.2598663b72fd6p-831, 0x1.81ed09107de71p-94,
     0x1.281f69abb20ccp-930, 0.0, 0.0, 0x1.6abbe24d1c931p-82, 0.0, 0.0, 0.0,
     0x1.ed82c63b30322p-728, 0.0, 0x1.43ef102b1307fp-50, 0.0, 0x1.3ba66432f9591p-202,
     0x1.5be771aa2b189p-295, 0.0, 0.0, 0x1.47d8c0e6366c2p-109, 0.0,
     0x1.5b5c7a3bed2b3p-1000, 0x1.af3ec33061e94p-195, 0x1.a58b27da3cf7cp-579,
     0x1.1078850359871p-215, 0.0, 0.0, 0x1.46052c74ac3d1p-698, 0x1.c6f6a2fb2e551p-432,
     0.0, 0x1.80b6bff511bd1p-748, 0x1.6f778d9aeb484p-145, 0.0, 0x1.f03d2af033602p-710,
     0x1.90a6281ecd72p-913, 0x1.73063928e77c1p-718, 0.0, 0x1.44811a360e326p-358,
     0x1.75bbc743cfe3p-356, 0.0, 0x1.9ef49997c6483p-363, 0x1.80e1ba52a5913p-376, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.832b80bda6e1fp-904,
     0x1.5f2a89cf85598p-628, 0x1.8c8d053d9641ep-590, 0x1.155c303358d22p-872,
     0x1.d180c3b6034acp-288, 0.0, 0x1.2ac017e6034d3p-896, 0.0, 0.0,
     0x1.16ec4568c2927p-978, 0x1.5ad89f9c2b0b2p-166, 0.0, 0x1.4a3969210bbbfp-767, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4a1a15e9074d6p-834, 0.0, 0x1.0aad45f0755fap-315, 0.0,
     0.0, 0.0, 0x1.829fd4ec74f3p-649, 0.0, 0x1.ebfe87d6fdf53p-531,
     0x1.4558719a6eb21p-124, 0.0, 0x1.a6b7640e53586p-540, 0x1.7e54eec8ee0adp-565, 0.0,
     0.0, 0.0, 0.0, 0x1.ecdc8e4dcd7c7p-873, 0.0, 0x1.c58afc4285a35p-970,
     0x1.7c0efb9b6923p-205, 0.0, 0.0, 0x1.acdd485cc5122p-400, 0.0,
     0x1.4e5bd8940ef95p-145, 0x1.74e112b71afddp-819, 0x1.5d458ca4f91f6p-270,
     0x1.c30e1c6b8361cp-706, 0.0, 0x1.e42744ff10d88p-317, 0x1.0fb74103b7d73p-452, 0.0,
     0x1.1897fe1f8da51p-585, 0.0, 0.0, 0x1.b2d8b917f5b44p-928, 0.0,
     0x1.86e53e9118824p-765, 0.0, 0.0, 0.0, 0.0, 0x1.e5552fee55879p-242,
     0x1.74469a22aaafp-572, 0.0, 0x1.1b55f446fe376p-191, 0x1.396d64816007dp-811,
     0x1.59d27f14c4523p-1007, 0x1.1520da840c001p-263, 0x1.c13b457fd206fp-167, 0.0,
     0x1.5a47cce42ac58p-794, 0x1.bdd5e87ec6373p-426, 0.0, 0x1.5f4370ada58edp-355,
     0x1.45fa52d2bb79ap-621, 0x1.027380dc5ee8p-653, 0.0, 0x1.340d65be19392p-629,
     0x1.ee8fb9fda8c09p-195, 0x1.a7c0f9723ba94p-923, 0.0, 0x1.577d084e0f6b2p-92,
     0x1.7f618eff89fe8p-887, 0x1.95245372fbe32p-61, 0.0, 0x1.4cef9909c2d3ap-1002,
     0x1.6dfeb646bcd5dp-607, 0.0, 0.0, 0x1.5b635b4cbb2e1p-136, 0x1.56c0199511891p-585,
     0x1.36cb2d284b9f1p-874, 0x1.167e4baa68fb2p-252, 0x1.f75aed3e1c509p-261, 0.0,
     0x1.0bbc5bb97100ep-1019, 0.0, 0x1.a2324d6d3e08fp-467, 0x1.b81c13ff4a252p-746,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4b4e4408cf97p-785, 0.0, 0x1.e3d30c1a5e31p-447,
     0x1.ee5f1d5debdccp-414, 0x1.60c5f6143547p-792, 0x1.95f2d51e80152p-91, 0.0, 0.0,
     0x1.145b4b5d03aadp-57, 0x1.c13ab13565813p-23, 0.0, 0.0, 0x1.debfbf0bf141dp-279,
     0.0, 0x1.09e0cf9f608eep-259, 0x1.32a57cd83faf1p-578, 0.0, 0.0,
     0x1.038126d39ba68p-570, 0x1.7878aaa5cb3e4p-584, 0.0, 0.0, 0.0,
     0x1.05e5e62103e4dp-533, 0.0, 0.0, 0x1.f77e911c2a068p-167, 0x1.29ee259598a9ep-458,
     0x1.75eddde5044d5p-845, 0x1.22ffbd8d4c38ap-662, 0x1.57a64eddbf6cap-604, 0.0, 0.0,
     0.0, 0x1.65847c06c5b57p-589, 0x1.f5ab188cc433fp-177, 0.0, 0.0,
     0x1.b9aa49d77c859p-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.842eb0b120d6ap-674, 0.0,
     0.0, 0.0, 0x1.2cf2f6f5bc7f3p-477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ffdee42360ea9p-866, 0.0, 0.0, 0x1.45f819bb610ffp-796, 0.0, 0.0, 0.0, 0.0,
     0x1.9e0a474f17f56p-896, 0x1.2dac8c9f5465fp-899, 0.0, 0x1.684451612c34ap-907,
     0x1.8fb1601153d21p-752, 0x1.d77e6f493a57bp-4, 0.0, 0.0, 0x1.6df50842e56ccp-167,
     0.0, 0x1.de73d7b7a42c7p-461, 0x1.e3860200650cep-230, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.054990360dcd3p-405, 0x1.b976e7902b1bbp-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a711b0e39dd5p-256, 0x1.8b4f5366bae48p-606, 0.0, 0.0,
     0x1.1a0590f96ca24p-89, 0.0, 0.0, 0x1.7963b591eff3ap-411, 0.0, 0.0, 0.0, 0.0,
     0x1.fcedbc9f2e3ddp-611, 0x1.e352aaa14994dp-409, 0.0, 0x1.8b2e297200eabp-380, 0.0,
     0.0, 0x1.db4beda417908p-508, 0x1.038d5767ae4f7p-726, 0.0, 0x1.61cbabf9dc524p-826,
     0.0, 0x1.efa78a20081f6p-256, 0.0, 0.0, 0.0, 0x1.502024210ad2dp-710,
     0x1.2799a0a42d5e2p-400, 0.0, 0.0, 0x1.2938746a2dp-806, 0x1.9b3aedc804b6cp-491,
     0x1.0a1b766b32895p-267, 0x1.e02cfdb50926p-247, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9dbb7f751bdb7p-458, 0x1.5f9ae77a88d3bp-107, 0x1.ce7c8da68c374p-953,
     0x1.6f9c188795e3p-820, 0.0, 0x1.4643553d2c35cp-522, 0.0, 0x1.d30e4d26b52e3p-323,
     0.0, 0x1.97f6e282e25fdp-773, 0.0, 0x1.57f30ee484706p-352, 0x1.a9bea7bba3d63p-671,
     0.0, 0.0, 0.0, 0x1.2ab0224235fdp-772, 0x1.b296e817a353fp-795,
     0x1.f95ea0070ca63p-1007, 0.0, 0.0, 0.0, 0.0, 0x1.22a5693fa404p-826, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7744efc6b709cp-684, 0.0, 0x1.4092aa1cfe1ccp-947,
     0x1.d36e961648ed3p-119, 0x1.537a481ce2e5dp-769, 0.0, 0.0, 0.0,
     0x1.8636ad16da17ep-936, 0x1.775cef9639011p-664, 0x1.91a035f35e0e6p-663, 0.0,
     0x1.621417a7990ep-470, 0x1.23989a58f0c16p-882, 0x1.5bd2da81be915p-219,
     0x1.c2e2f5da2d42cp-107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5274bba018b5p-271, 0.0,
     0x1.1c35fb10fbf3cp-538, 0x1.88517b3e9eb19p-556, 0x1.01de2d59f6779p-632,
     0x1.5cb3df4d45921p-261, 0x1.85745474486d1p-343, 0x1.d6c42ea7261b3p-953,
     0x1.f4b775f05dcc1p-900, 0x1.865297b4bb8ddp-501, 0.0, 0x1.74eaf31c48a11p-684,
     0x1.62e50e10273ebp-612, 0x1.f2e886b36edfap-235, 0.0, 0x1.150eabec90f5dp-471,
     0x1.d040d5c562bb5p-623, 0.0, 0x1.ad48c8a8ba84fp-918, 0x1.95570875dbb6ep-446,
     0x1.7ebdb10625c92p-62, 0x1.bed2ab8ea4598p-15, 0x1.a1a8cff2bf1dap-147,
     0x1.b65c04600975bp-713, 0.0, 0x1.73f5c1a5e081bp-451, 0x1.7b5901614f955p-409, 0.0,
     0.0, 0.0, 0x1.360728bd7c676p-162, 0x1.cf69d69dddce5p-809, 0x1.6d50734f0f4dbp-643,
     0.0, 0x1.3817400d262d9p-394, 0x1.ab6e3e7ccad83p-132, 0x1.6ea3c9d89f65ap-700, 0.0,
     0x1.9ebfd6d14788ep-944, 0x1.f83ac0a16273ep-942, 0x1.d27b50eb4af39p-1001,
     0x1.9cd8eefd984acp-655, 0.0, 0x1.e09ac0c3a01eep-377, 0.0, 0.0, 0.0, 0.0,
     0x1.d60b276bdfeb1p-550, 0.0, 0x1.9a13fd05171f9p-334, 0.0, 0.0,
     0x1.889c7396f534cp-705, 0x1.ab7ae9d7c0dc3p-657, 0.0, 0.0, 0x1.440fc0a6d9232p-296,
     0.0, 0x1.1e9fdd9a44786p-51, 0x1.362ef7c71045fp-958, 0x1.706b99f94e402p-732, 0.0,
     0.0, 0x1.d4faa9a005115p-711, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.373aad8f426d7p-221, 0x1.346a314ee5f47p-958, 0.0, 0.0, 0x1.ab212a0d5d4a5p-556,
     0x1.745d123f147fdp-350, 0x1.2772c00857c35p-904, 0x1.983fc808b56cdp-617, 0.0,
     0x1.7070285d8f51bp-727, 0.0, 0.0, 0.0, 0x1.447d87aa0b611p-723,
     0x1.d2a543527f3cbp-145, 0x1.cbaf5fbb30d4bp-454, 0x1.582ad5e19a471p-885,
     0x1.d5474be25b8f4p-712, 0x1.e80022acc9208p-906, 0.0, 0.0, 0x1.d43e52841e3abp-131,
     0.0, 0.0, 0x1.9c57a4e1c3378p-771, 0x1.ae60184b955acp-54, 0.0, 0.0, 0.0, 0.0,
     0x1.9cd32836a21ccp-312, 0.0, 0x1.409f930e6e939p-46, 0x1.098dac79d9b49p-891,
     0x1.05720de1e302bp-765, 0.0, 0x1.94fc5df709b44p-738, 0.0, 0.0, 0.0,
     0x1.3798320960d41p-177, 0.0, 0.0, 0x1.759e36401cbe9p-347, 0x1.405169b7400aap-630,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.649fa3d7a072cp-342, 0.0, 0.0,
     0x1.7ad171bf5172ap-791, 0.0, 0.0, 0.0, 0.0, 0x1.d2c5fe05f7a54p-981, 0.0,
     0x1.b0d3702cf3121p-813, 0.0, 0.0, 0.0, 0.0, 0x1.f03ba1ac0f6ffp-578, 0.0,
     0x1.0f8f9612e485fp-90, 0x1.a7a7d4eb6e286p-249, 0x1.ac1fb0c74dea6p-127,
     0x1.b06abce7d297cp-526, 0x1.d27736349b524p-307, 0.0, 0x1.85bd7e50dca4p-331, 0.0,
     0x1.da419ab510aabp-65, 0.0, 0x1.b514f45dc470fp-251, 0.0, 0x1.f11088bf3f638p-686,
     0x1.b4857a29d9774p-516, 0.0, 0.0, 0.0, 0x1.9221a209b8815p-308, 0.0,
     0x1.cfc0964a2875ep-800, 0.0, 0.0, 0x1.39910fa27204dp-738, 0.0,
     0x1.ec7152dfe7259p-837, 0.0, 0.0, 0.0, 0x1.1146e085baeb2p-679, 0.0,
     0x1.3771d02034756p-902, 0.0, 0.0, 0.0, 0x1.db88f600d74cdp-575,
     0x1.7e46bb7cacf26p-284, 0x1.df9b826d487f3p-388, 0.0, 0x1.d05a355f6a20fp-284, 0.0,
     0.0, 0x1.4484f1e119735p-768, 0x1.ac40f3402aa32p-414, 0.0, 0.0, 0.0,
     0x1.a2eb4d32d916p-1011, 0.0, 0x1.40114e1ae5ffap-335, 0.0, 0.0, 0.0,
     0x1.fc3f1044fc4fbp-977, 0.0, 0x1.b2bee1f73b2f9p-252, 0.0, 0x1.bb7f161a782a5p-681,
     0x1.2bb065ec87a0ap-825, 0x1.dd936ca3754bbp-836, 0.0, 0x1.5d1f2308c7bffp-927,
     0x1.c9e05a7c8d96p-798, 0x1.4e4c1a16ccb1ap-761, 0x1.62d07dad09028p-631, 0.0,
     0x1.02e40accb4813p-955, 0x1.c81861c8c5c24p-730, 0x1.279d4ba492ce7p-648, 0.0,
     0x1.2f70164d8eacp-695, 0x1.757fa9ad34235p-577, 0x1.4313b64b23375p-157,
     0x1.8ba356b1e11a7p-465, 0.0, 0.0, 0x1.1d208c2a9b2f7p-82, 0x1.4ae03d0cdb3f5p-338,
     0x1.d55236e8222fbp-90, 0.0, 0x1.828074f7e6f31p-778, 0x1.bc0f4635e0b89p-562, 0.0,
     0.0, 0.0, 0.0, 0x1.02df747bee27ep-669, 0.0, 0x1.f4a95e822fc32p-673,
     0x1.c83e976fe4b7cp-364, 0.0, 0x1.9ba844e750389p-549, 0.0, 0x1.ba9f53af451e9p-744,
     0.0, 0.0, 0.0, 0x1.a99897bd8c355p-762, 0.0, 0x1.0553329896a02p-234, 0.0, 0.0,
     0.0, 0x1.f4f974220f624p-527, 0.0, 0x1.e9b6634f1e118p-448, 0.0,
     0x1.b6f76b98e6d05p-917, 0.0, 0x1.8664ab3da1e18p-743, 0.0, 0x1.257b28c8160f9p-93,
     0.0, 0x1.e07f96c165d83p-290, 0x1.a4ed304345ed8p-504, 0.0, 0x1.4aed4e2b1f53cp-793,
     0.0, 0.0, 0x1.29b36ac140338p-732, 0x1.0726252362cb4p-563, 0.0,
     0x1.de9d6570408ffp-630, 0.0, 0x1.6b19e7c249af5p-537, 0x1.42b219ec87392p-467, 0.0,
     0.0, 0x1.20e99f012683dp-844, 0x1.a0f094270816cp-142, 0x1.271533bda2562p-815, 0.0,
     0x1.9095410bea7afp-660, 0.0, 0.0, 0x1.ebe4320e93e8bp-319, 0x1.32c16e4157c06p-715,
     0.0, 0x1.330bbf22b5dap-906, 0.0, 0x1.74041f425b88ap-126, 0.0,
     0x1.c495e9842ae1ap-497, 0.0, 0.0, 0x1.b7ca477d54bacp-63, 0.0,
     0x1.bd7ba7ff2a5e8p-691, 0.0, 0x1.d83150a832acdp-401, 0x1.8e7fb041e4313p-666,
     0x1.f0209f832b96fp-732, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9859a46df507p-1000, 0.0, 0x1.10a050552ca4ap-656, 0.0, 0.0, 0.0, 0.0,
     0x1.440a0af344b01p-303, 0x1.0d6b34086a784p-823, 0x1.370e1471ed415p-19,
     0x1.67a59042333c6p-1021, 0.0, 0.0, 0x1.2e6a3ad54b7a9p-101, 0.0, 0.0,
     0x1.5174b782ab606p-330, 0.0, 0x1.f84ab3865dbf5p-888, 0x1.0d47870cf6265p-287,
     0x1.5b7796710e46fp-405, 0x1.d54926d511dd7p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.648a4684ddb1fp-601, 0.0, 0x1.4ba06befdea02p-860, 0x1.ad5fe961200c8p-92,
     0x1.719db64dbcb7dp-860, 0.0, 0.0, 0x1.3278eac66cb27p-429, 0.0,
     0x1.6839c8c90ae85p-265, 0.0, 0.0, 0x1.1e965f908fcddp-965, 0.0, 0.0, 0.0,
     0x1.99a0e282cc864p-343, 0x1.7abf149bb3f4cp-568, 0.0, 0x1.8b5519a3ae0cp-108, 0.0,
     0x1.71de5d6863deep-1010, 0.0, 0.0, 0x1.3f56b59e56f8bp-193, 0.0,
     0x1.8b6d4ac70e725p-372, 0.0, 0x1.175e5b9b649b4p-397, 0.0, 0.0,
     0x1.66e6b7609c4e5p-8, 0.0, 0.0, 0x1.054eee1994a69p-366, 0x1.ac5a48ecd5398p-366,
     0x1.a1c1f72a2f958p-109, 0.0, 0.0, 0x1.3588f4aa3ede6p-526, 0.0, 0.0,
     0x1.bafdd11f97e46p-663, 0x1.96cbceb0a024p-677, 0x1.6188308faa1e3p-254,
     0x1.43d99f3a7259p-868, 0.0, 0x1.de689f0391abep-409, 0x1.851e3c5960143p-618,
     0x1.5989f5141ea86p-508, 0.0, 0x1.dbe23b3abe414p-643, 0.0, 0x1.5c48f6c1016f8p-167,
     0x1.3d9e0c32e8b26p-39, 0x1.1f2ac2d9c785fp-894, 0.0, 0x1.d8c2247a65294p-510, 0.0,
     0x1.dd6e0c68eeb1p-639, 0x1.90197ad715befp-642, 0.0, 0.0, 0.0,
     0x1.3a21e777783e1p-556, 0.0, 0.0, 0x1.ad641c5d2024ap-575, 0.0,
     0x1.74bbd1bc690c4p-151, 0.0, 0x1.5d9474ac139ecp-313, 0.0, 0x1.0e4312cf01fd5p-427,
     0x1.5f626c1958cecp-430, 0x1.18e5f83264d49p-20, 0x1.815e1de7f8baep-905, 0.0, 0.0,
     0.0, 0.0, 0x1.6a494d9151bc5p-47, 0x1.37241b3e0ce22p-495, 0x1.2328f5ff3a41bp-514,
     0x1.bd33261ae5de3p-101, 0x1.994b2b950ff0ap-1011, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.96b98316c7e7ap-608, 0.0, 0.0, 0.0, 0.0, 0x1.d7cb3fef891dp-914,
     0.0, 0x1.f2a2c7c742d3ep-586, 0x1.e6b8d4bb3f473p-144, 0x1.17f926bc3b13bp-427,
     0x1.c3f30d26ff09fp-791, 0x1.68310a8790d15p-188, 0.0, 0.0, 0x1.8e5b0fa3f45fp-844,
     0x1.fe332e5f8afe3p-839, 0.0, 0.0, 0.0, 0.0, 0x1.18f59d6aadcffp-130,
     0x1.abaa2dab21754p-63, 0x1.032cc384e8763p-238, 0.0, 0x1.dd4140b19b8c7p-522,
     0x1.cf6899a449718p-434, 0.0, 0.0, 0.0, 0x1.5bfe45644f36bp-44, 0.0,
     0x1.6e12c9134aa2fp-435, 0x1.a6d3331d133eep-581, 0.0, 0.0, 0.0,
     0x1.d5d0699e08b92p-557, 0x1.1df6c89579fb4p-719, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.19308cae01582p-693, 0.0, 0.0, 0x1.1dc41c9e5fbf4p-472, 0.0,
     0x1.ba99d338c9611p-861, 0x1.f0f5e22293e14p-116, 0.0, 0x1.2030287f48ca7p-97, 0.0,
     0.0, 0.0, 0x1.161b5da169a33p-241, 0x1.79b20a6ade539p-769, 0.0,
     0x1.f3b6c6438c8a3p-529, 0.0, 0x1.ea798a1e1db01p-910, 0.0, 0x1.990be564d5d1cp-561,
     0x1.1ad958e9075b2p-397, 0.0, 0.0, 0x1.bd9115eed7747p-730, 0.0, 0.0, 0.0,
     0x1.3662ed23b66a3p-520, 0.0, 0.0, 0x1.f270ca6303458p-689, 0x1.1162f37664f4fp-388,
     0x1.7234266d74e37p-940, 0.0, 0.0, 0x1.03aff103a23a1p-105, 0x1.304ed1c2f95c9p-400,
     0x1.77d9c271639fbp-811, 0.0, 0.0, 0x1.041780089e593p-39, 0.0
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
            tmp1 = Sleef_finz_log10d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log10d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
