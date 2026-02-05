/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d1_u35purecfma.c --function \
 *     Sleef_exp2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.655b479799285p-451, 0x1.c6cddb8ab4076p-672, 0.0, 0x1.e8514d3e7db8ap-422,
     0x1.8a0c9df4ca31dp-346, 0.0, 0x1.0d4044e68e78ep-675, 0x1.27fb02ea2ac67p-609, 0.0,
     0x1.a387ae32fae67p-26, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9dc6e003325bp-79,
     0x1.7a0563601d23fp-223, 0x1.6d21da7dbfdecp-776, 0.0, 0x1.eb942d255247dp-196, 0.0,
     0.0, 0.0, 0x1.4069f9677581ap-938, 0.0, 0.0, 0.0, 0.0, 0x1.a5658002d50bbp-676,
     0.0, 0x1.400d202a6873fp-218, 0x1.ea550360a1406p-458, 0x1.9d51ef4b679c2p-230, 0.0,
     0x1.2ae12c427fd78p-325, 0.0, 0.0, 0.0, 0x1.47413a65e61fap-617, 0.0, 0.0,
     0x1.b10d289460679p-140, 0.0, 0x1.17acbfd866c93p-194, 0.0, 0.0, 0.0,
     0x1.b3198098403f1p-415, 0.0, 0x1.e2161d91fa4c3p-815, 0.0, 0.0, 0.0, 0.0,
     0x1.3722a867cc11cp-809, 0x1.a269feb63b84p-757, 0.0, 0.0, 0.0, 0.0,
     0x1.b8bb215ee9b1dp-808, 0x1.18c8f322b3888p-530, 0x1.d981947308099p-234, 0.0, 0.0,
     0.0, 0.0, 0x1.836172597c706p-514, 0x1.60ac167eb5586p-63, 0.0, 0.0, 0.0,
     0x1.b4049f9509e7ep-36, 0x1.f9cac0e0ac859p-596, 0.0, 0x1.4e8365cbbb0e9p-10, 0.0,
     0.0, 0x1.9d7722468cf39p-24, 0x1.c2462eadaf8d8p-305, 0x1.5bc2b68b60bcdp-671, 0.0,
     0.0, 0x1.7d41accaf4f9ep-767, 0.0, 0x1.9759776e3e93bp-974, 0.0, 0.0, 0.0, 0.0,
     0x1.f4bdbfe770966p-376, 0x1.9cb261bd54beep-362, 0x1.951fa952ca709p-837,
     0x1.192f2bb8a126fp-895, 0.0, 0.0, 0x1.c74936dfd7688p-991, 0x1.d20e04665ad1p-993,
     0.0, 0.0, 0x1.ea48aba46c68bp-60, 0.0, 0x1.c7524f5dbae3dp-196, 0.0,
     0x1.77fae85137626p-560, 0.0, 0x1.18eb5e62b831p-910, 0.0, 0.0,
     0x1.5dc271993d2d1p-65, 0.0, 0x1.575ebf3b8a0cep-514, 0x1.4bac1c8fed218p-85, 0.0,
     0x1.f0a1ac18adf6ep-269, 0x1.6d5092057d336p-889, 0.0, 0x1.8f30e8b73c0c4p-745, 0.0,
     0x1.4de0414cf95f3p-320, 0x1.c806b44c11f56p-871, 0x1.24a752240d969p-160, 0.0,
     0x1.6edeb78858244p-387, 0.0, 0.0, 0.0, 0.0, 0x1.b18bef17da21ep-407, 0.0,
     0x1.284c2f3fbdc97p-600, 0x1.3f3f0e9802238p-237, 0x1.b06950f5cf44ep-110, 0.0,
     0x1.ff47f74beabbp-351, 0.0, 0.0, 0.0, 0x1.69424d20df96p-855,
     0x1.df70b5a9e24b4p-489, 0.0, 0x1.bb048716703e8p-859, 0x1.aa0f886507018p-419, 0.0,
     0x1.c51b30ee7fcb4p-284, 0x1.65e8bd889c048p-467, 0.0, 0x1.af9626ba2e205p-201,
     0x1.57cc2cc1d7b6ep-44, 0x1.88f4ef7e3e36cp-643, 0.0, 0x1.efeac6e5dfe45p-387, 0.0,
     0x1.e64ae02811da2p-842, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.313d78d65407p-688, 0x1.8c5612a220cbfp-453, 0x1.4c4302f5c1b97p-446,
     0x1.f75e38f62f0e9p-202, 0.0, 0x1.cf8c04da1f3dcp-407, 0.0, 0x1.286743dd4dcb9p-619,
     0.0, 0.0, 0.0, 0x1.e05b366f77aa7p-660, 0x1.75d7b46893d6ap-134,
     0x1.a43c6041c6483p-431, 0.0, 0x1.7e2fede0c1fb5p-20, 0.0, 0x1.3844d6a6fea34p-753,
     0x1.b14ef40624854p-181, 0.0, 0.0, 0x1.195a0062c1a53p-409, 0x1.a773611e1cba7p-262,
     0.0, 0.0, 0x1.46fc301730fa6p-264, 0x1.86a44d029acd5p-950, 0.0, 0.0, 0.0, 0.0,
     0x1.7abbb3ecf1f14p-162, 0.0, 0.0, 0.0, 0.0, 0x1.c72bb3ab9bd06p-375, 0.0,
     0x1.ecb09b3cca7bep-353, 0.0, 0x1.cb4819d596005p-8, 0x1.b6aef3b489fd8p-960, 0.0,
     0x1.75b806f38dc16p-791, 0.0, 0x1.fc6ea88530cd6p-397, 0.0, 0.0, 0.0, 0.0,
     0x1.5e594d589ec49p-618, 0x1.368ae1afec6dp-36, 0.0, 0x1.999ebcf5a73a2p-884,
     0x1.a8c002e7c4b36p-770, 0x1.39b744139d347p-527, 0.0, 0x1.7e998372dd45fp-252, 0.0,
     0x1.0414605bd60dbp-587, 0.0, 0x1.9ab22e1914ab1p-558, 0.0, 0.0, 0.0,
     0x1.e4de42fbbff2bp-793, 0x1.7ed8209aa4041p-104, 0x1.71446418eb155p-426,
     0x1.f86920fc509b2p-314, 0.0, 0x1.b9c157067e8bbp-580, 0x1.6890179dcdd34p-490, 0.0,
     0x1.8977df65bee01p-211, 0x1.9a3a667ca2f04p-656, 0.0, 0x1.720659db8a94bp-398, 0.0,
     0x1.a08ec37a33961p-869, 0x1.911862df9febfp-30, 0x1.109139aa04e9p-4,
     0x1.dfa38cd845edfp-348, 0.0, 0x1.0dd2952c39966p-933, 0.0, 0.0, 0.0,
     0x1.5252c8a6f9432p-319, 0.0, 0x1.d823e1ebf567dp-363, 0x1.71e15348911b6p-583, 0.0,
     0.0, 0.0, 0.0, 0x1.974ec7bf8df3ep-620, 0.0, 0.0, 0.0, 0x1.02367d9120b31p-437,
     0.0, 0x1.3687f4b915e9bp-862, 0x1.e184d8f352234p-733, 0.0, 0x1.65a8d0013e75cp-721,
     0.0, 0x1.7925d6a4e9011p-940, 0.0, 0x1.fb1d7a6665cb8p-433, 0x1.7487a5c5054cap-427,
     0x1.b2adf976070e7p-400, 0.0, 0.0, 0.0, 0x1.330bf4a652275p-188, 0.0, 0.0,
     0x1.cc974d95e5c5cp-910, 0.0, 0.0, 0.0, 0x1.99ecda3dc97d9p-454, 0.0, 0.0, 0.0,
     0x1.e3cf74779c37bp-254, 0x1.726fe60191387p-858, 0.0, 0x1.be7767d37ee71p-147,
     0x1.5ff66160df9a2p-417, 0.0, 0x1.dc7ca7577ba4ep-331, 0.0, 0.0, 0.0,
     0x1.911dec7fb7fe2p-276, 0x1.122c36ef8f598p-611, 0x1.57dd370d20859p-701,
     0x1.46ad18ba8cd8ep-840, 0x1.24f4458d56b3bp-587, 0x1.bf3e4aa4d4881p-534,
     0x1.e5ce57b43dc3p-182, 0x1.c0b9fc7527cbdp-452, 0x1.d500b5092218p-42, 0.0, 0.0,
     0.0, 0x1.d43a7d48e7407p-535, 0.0, 0x1.109c44a4a5a18p-271, 0x1.f1ac0ff49f685p-57,
     0x1.ca82d9de8a059p-849, 0x1.ccd9677330c1fp-566, 0x1.97392e67fb8efp-64,
     0x1.43f07f8e6f03bp-991, 0x1.ec7cc675339cep-871, 0.0, 0x1.2dfc67eb996ap-599,
     0x1.480b16d64a886p-663, 0x1.ee164c2359257p-365, 0.0, 0x1.963eeffe44253p-981,
     0x1.8c2569a6a1d04p-230, 0.0, 0.0, 0x1.394f83ea363d8p-687, 0.0,
     0x1.267458f9bafd2p-43, 0.0, 0x1.d303d6433b053p-171, 0x1.0ae40da6c44e2p-812,
     0x1.323966d51135ap-921, 0x1.36341e017de9ep-350, 0x1.2380a6321d7f5p-710,
     0x1.069f510559313p-8, 0.0, 0.0, 0.0, 0.0, 0x1.c3cfd8954ac6dp-59,
     0x1.6cbf10c8b777p-406, 0x1.9ccba37c95f33p-327, 0.0, 0x1.68cec777b2dc8p-637,
     0x1.b996cb6c08259p-472, 0.0, 0.0, 0x1.b0b415f0af82fp-176, 0.0, 0.0, 0.0,
     0x1.62ef6a68b2649p-675, 0.0, 0.0, 0.0, 0x1.6ca01420d4e55p-266, 0.0,
     0x1.d08cd43ceef05p-90, 0.0, 0.0, 0x1.589882bbdc556p-833, 0x1.62f586ff1404dp-729,
     0.0, 0x1.de1d8a34b40bap-477, 0.0, 0x1.bfa2784933a4bp-371, 0.0,
     0x1.2989f88f4d783p-963, 0.0, 0x1.bb4567fa54fbfp-640, 0x1.3a4f555e99b9ep-937, 0.0,
     0.0, 0.0, 0x1.3c3172582613cp-288, 0.0, 0.0, 0x1.6bd9043c56ccbp-800, 0.0, 0.0,
     0x1.3d60cfb4093cp-976, 0.0, 0.0, 0.0, 0x1.60fabd0f3b7c4p-299, 0.0, 0.0, 0.0,
     0x1.875e9a65183a1p-504, 0x1.ed3d12b2f5de1p-681, 0.0, 0.0, 0.0, 0.0,
     0x1.15d9866d60f79p-78, 0x1.7f4753851d8acp-41, 0x1.11c6e90435a34p-158,
     0x1.e50d6936d7f7ap-556, 0.0, 0.0, 0.0, 0x1.b56f8d7e22f9fp-457, 0.0, 0.0, 0.0,
     0x1.5808a2d06d4a1p-739, 0x1.1f5faa29335a7p-726, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.48a147b7883e8p-709, 0.0, 0x1.88aabca40f5dap-731, 0.0, 0x1.480b6fd2ce607p-996,
     0x1.e51271f295f25p-639, 0.0, 0x1.4ce27f238b8d9p-675, 0.0, 0x1.91747124f2103p-196,
     0x1.3b3362cf7f136p-466, 0x1.2114f7a47d991p-620, 0x1.8dfef92877578p-82,
     0x1.1b3860dfdfdcep-318, 0.0, 0x1.ee5f72536c18bp-232, 0.0, 0x1.7ba5f876c2c2p-800,
     0.0, 0x1.022929c4eb908p-804, 0x1.a93eb1848f277p-686, 0x1.f3f7b9aff889ep-463,
     0x1.70ea565495414p-257, 0.0, 0.0, 0x1.9feee8952acp-432, 0x1.78760fecd786fp-295,
     0x1.a076f81d89c72p-206, 0.0, 0x1.a24a36473a8e5p-491, 0.0, 0x1.cc304314f8c9p-525,
     0x1.5044eb0c7bd1dp-597, 0x1.42ad5ef16ef16p-333, 0.0, 0.0, 0x1.50b44370ea4fep-544,
     0x1.606ca42f1183p-792, 0x1.3016fd6f028f6p-297, 0x1.a8ce2ab5533e1p-451,
     0x1.9f2ffecc5ba9dp-835, 0x1.52305c848593dp-84, 0.0, 0.0, 0x1.f575c00efd74dp-358,
     0.0, 0.0, 0x1.a7ca345f2a53dp-671, 0x1.1e66d21ad51cfp-484, 0x1.04e47b409b646p-204,
     0x1.ce482bd494ffbp-354, 0x1.c0734e1fe66ccp-700, 0x1.323df178c4453p-387, 0.0,
     0x1.d340b967f3b3p-902, 0.0, 0x1.34a482a2451d4p-261, 0x1.2160b7de54139p-901, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.56fc7986b07fdp-605, 0x1.9152e772d18c4p-635,
     0x1.3e5b7a86e0434p-315, 0x1.bc21ce0089c02p-709, 0x1.c7c6adb599567p-403, 0.0, 0.0,
     0x1.ac227c5384447p-5, 0x1.933ff8cdebefap-545, 0x1.24189fee8be6fp-333, 0.0, 0.0,
     0.0, 0.0, 0x1.a35794e0d034p-549, 0x1.a37d8d0e32febp-142, 0.0, 0.0,
     0x1.e9c6ce1bda8p-657, 0.0, 0.0, 0x1.a9aab4088ac38p-541, 0.0,
     0x1.7623c3b498f43p-908, 0.0, 0x1.3b1fa915ba4c9p-719, 0.0, 0.0,
     0x1.84e8477fea373p-223, 0x1.f0524f9eeef2ap-985, 0.0, 0x1.7828b837ad78ep-670, 0.0,
     0x1.4d6b052865377p-230, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bc929ca26c1ap-662, 0.0,
     0x1.fc22fb8378433p-903, 0x1.fd68200bad5d1p-557, 0.0, 0.0, 0.0,
     0x1.5af3a1d7bb60bp-713, 0x1.1e460aec1e25ap-827, 0.0, 0.0, 0x1.f342642a2f1c2p-632,
     0.0, 0.0, 0.0, 0.0, 0x1.81fe6ddddca6ep-348, 0x1.2957c5b6713f2p-57, 0.0, 0.0, 0.0,
     0.0, 0x1.4425ac4a13b19p-100, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4aa3f90a66adbp-45,
     0x1.025e4e06d4c5ep-322, 0.0, 0.0, 0x1.910a24b85c1f8p-43, 0.0,
     0x1.6ccae2cec0956p-915, 0x1.4f4c07942c22p-660, 0.0, 0x1.443b6744a8411p-632,
     0x1.cd66015772937p-86, 0.0, 0x1.de277104dfdc4p-656, 0x1.7286ae0c46379p-340, 0.0,
     0x1.b275c67aa3ca4p-52, 0.0, 0x1.0965fa00c2772p-944, 0x1.842f8ac40dbfap-793,
     0x1.46e0fa779465p-211, 0.0, 0.0, 0.0, 0.0, 0x1.63f87b88b6cc9p-370,
     0x1.30ef388ef443ap-36, 0.0, 0x1.f0177d4b4ad3ap-520, 0x1.73b6b70921133p-405,
     0x1.4c27435191f95p-853, 0x1.6abbe765b9e21p-1021, 0.0, 0x1.8411e3ce843b3p-563,
     0x1.10eee4b05cbd5p-17, 0x1.2ac17e0fd20dfp-543, 0x1.1e3a8ca3f2a71p-220,
     0x1.210c0ac5125f6p-16, 0.0, 0.0, 0x1.cce4ae778fbf2p-427, 0x1.9bcf3ab0345e1p-851,
     0.0, 0.0, 0.0, 0x1.75323eafdb797p-511, 0x1.caff1e9dd945ap-133, 0.0,
     0x1.42787f299d1a1p-9, 0.0, 0.0, 0.0, 0x1.e2edcd2095376p-444, 0.0,
     0x1.42e8f78506b58p-716, 0x1.aa9be3edbb2dfp-475, 0.0, 0x1.2872fcf3c13f2p-518, 0.0,
     0x1.701bb81a1ce87p-342, 0.0, 0x1.b3af380851693p-191, 0x1.af79aa18cd1e9p-824,
     0x1.39280926be306p-141, 0.0, 0x1.dc852bb004a29p-13, 0x1.99935312f7ebep-41,
     0x1.bf449e14a32fep-737, 0.0, 0.0, 0x1.069fad9ef7a46p-736, 0x1.78d2ffa1bed66p-112,
     0x1.f5335343ae188p-306, 0x1.cd2e76b781b09p-731, 0.0, 0x1.4daa24c62675ep-383, 0.0,
     0.0, 0.0, 0x1.229c033bcab07p-409, 0.0, 0x1.69d6708f965ep-627, 0.0,
     0x1.4d091bcc7a048p-480, 0x1.85de15b6e394ap-954, 0.0, 0.0, 0x1.63bc00057be6ep-998,
     0x1.e5f9436a8f51ap-935, 0x1.adeb4f2a8a671p-727, 0.0, 0x1.c77273f468ee2p-1017,
     0x1.12f3ffd2c209cp-180, 0.0, 0.0, 0x1.3f25dc99afec9p-158, 0x1.0cd43210d47c3p-35,
     0.0, 0x1.3ecbfc47dc837p-909, 0.0, 0x1.95549326c073cp-115, 0x1.b7907a2305f07p-760,
     0x1.f8b50d2720ea6p-656, 0.0, 0x1.7d63c35e7c99fp-264, 0x1.2234a2811caap-167,
     0x1.75bfed45e5047p-975, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f311087fc32dcp-26,
     0x1.015b4c2f563ccp-972, 0.0, 0.0, 0x1.c0e75d8835323p-296, 0.0, 0.0,
     0x1.572aef20d9f78p-860, 0.0, 0x1.c1567939ce2dp-555, 0.0, 0.0, 0.0,
     0x1.4b8dc51b706c8p-273, 0.0, 0x1.f80ec6a7aa671p-307, 0.0, 0x1.cb7a1d8a5326ep-325,
     0.0, 0.0, 0.0, 0x1.00477bc878438p-987, 0.0, 0.0, 0x1.b5d5626bd0f39p-274,
     0x1.af63040dbded5p-138, 0x1.0e91212f252fp-409, 0x1.780291817fb04p-150,
     0x1.5354ea21fe0b3p-874, 0x1.9c5d4a0cc714bp-956, 0.0, 0x1.489f60d3d0d13p-7,
     0x1.2529888677572p-225, 0x1.f0edc985118efp-865, 0.0, 0x1.3efb56f4e992fp-346, 0.0,
     0x1.b9cd2e2f6b29cp-224, 0x1.cad46c6e016e4p-38, 0x1.3964c00e7b82p-323, 0.0, 0.0,
     0x1.c154744859d71p-491, 0x1.e57fcae2d7cf4p-571, 0x1.e23ddbc8dea56p-890, 0.0,
     0x1.14e3aad08505ep-824, 0x1.b52eb4223e3ebp-434, 0x1.b74360748c8c1p-368,
     0x1.77ded3a043016p-787, 0.0, 0x1.2d8801446fb0cp-659, 0.0, 0x1.13a3715b5baa3p-508,
     0x1.a50b9d88709edp-801, 0x1.8da2770fcef82p-911, 0x1.e58c94085f26dp-634, 0.0, 0.0,
     0x1.c3dfda3523ee6p-573, 0x1.9eaf562de090ep-144, 0.0, 0x1.1e92ebefba01bp-1009,
     0x1.db514fa349e1cp-996, 0x1.b020139fa3be4p-974, 0.0, 0.0, 0x1.04d12e68c7cb4p-730,
     0x1.e36ebe7ccb297p-757, 0x1.b8d75d81be71ep-85, 0.0, 0x1.951050c7fb9fap-476,
     0x1.cedfa6dad3656p-525, 0x1.15b438bf67915p-672, 0.0, 0.0, 0x1.f9db4c98aa82fp-749,
     0x1.f1be2db779eafp-158, 0.0, 0x1.15fe467583f6bp-418, 0.0, 0.0,
     0x1.d35c623a33028p-1016, 0.0, 0x1.fb3878132652p-221, 0.0, 0x1.ec9148a43c7ep-864,
     0x1.9f90e241919dap-774, 0x1.8adfa2ee7bdep-710, 0.0, 0x1.2275f5016907bp-3, 0.0,
     0x1.ea009d3a462ebp-870, 0x1.431d4d3a9d282p-973, 0x1.4e22117a48a0fp-1005, 0.0,
     0x1.c76ede5d1f53cp-448, 0.0, 0.0, 0x1.9a3557f0ec45bp-543, 0.0,
     0x1.5877232fea8b4p-399, 0.0, 0x1.df6df3b263d3cp-257, 0x1.1a508dea3c668p-255, 0.0,
     0.0, 0x1.6cafd40ced576p-639, 0.0, 0x1.f054c9528820fp-790, 0x1.13508bd64823dp-991,
     0.0, 0.0, 0.0, 0x1.72762b3082dbcp-138, 0x1.88df3b1f264c7p-265,
     0x1.e1ec50e73f79fp-862, 0x1.f26844510a869p-536, 0x1.9858fbb5a1c2cp-548, 0.0,
     0x1.8d02342daf818p-42, 0x1.6e5f5c8e111b6p-507, 0x1.70493688d13c9p-666,
     0x1.b5f69e83b2803p-101, 0.0, 0.0, 0.0, 0.0, 0x1.d173aac5085f6p-491, 0.0, 0.0,
     0x1.a54c20bafd7c7p-796, 0x1.d81ca8cd013cp-128, 0.0, 0.0, 0x1.ce12adcf82e9dp-32,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c216c7b134f9dp-551, 0x1.de15646b34e1dp-542,
     0x1.3795282d9eba5p-191, 0.0, 0.0, 0x1.9b516ccb089c2p-662, 0x1.49904cd71f1b1p-121,
     0x1.3f4badf8f8955p-560, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87653915038b5p-847, 0.0, 0.0, 0x1.f41d479f2c1ffp-866, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d3a3b08114ec6p-125, 0x1.62b3bca27e13bp-194, 0x1.742ca8bcb1b76p-743, 0.0,
     0.0, 0.0, 0.0, 0x1.5778c5188ecf5p-581, 0.0, 0x1.03738ce6a787dp-352,
     0x1.03bb99632eb57p-678, 0.0, 0.0, 0x1.8798a0c264091p-800, 0x1.e40aac35c724bp-860,
     0.0, 0.0, 0.0, 0x1.1937b6c55d1ep-383, 0x1.5e60579c6c67fp-201, 0.0,
     0x1.c11ca9e6b4694p-175, 0.0, 0x1.dcd4cf9621bb8p-692, 0x1.b73abad2e4ae6p-120, 0.0,
     0.0, 0.0, 0.0, 0x1.faab05a4261d7p-440, 0x1.1bf7757590ae2p-553, 0.0, 0.0, 0.0,
     0x1.5b48eefc13748p-482, 0.0, 0x1.df97b70b014a4p-431, 0x1.966493708fd8ep-841,
     0x1.db751f27940a1p-985, 0x1.5c014811c327cp-430, 0x1.fede0dd181422p-641,
     0x1.9589a7843517dp-159, 0.0, 0x1.f85a9712f604ep-436, 0x1.68fa0432d9fc6p-64,
     0x1.68ca3b34baf9p-669, 0x1.10aee230c6a0ap-35, 0.0, 0.0, 0x1.24e9b95ac1f88p-12,
     0.0, 0.0, 0x1.78796cf0d3debp-124, 0.0, 0.0, 0x1.d55c8a8fdf883p-189,
     0x1.c135e89e03013p-942, 0x1.85c24164a2e6p-638, 0x1.0ca47eac1ae4ap-354,
     0x1.f3de3cf4fd393p-230, 0x1.e8d4e4781075ap-934, 0x1.b7a2f0495b407p-29,
     0x1.6ba46819ab0dbp-184, 0.0, 0x1.61ca474f61e9ap-840, 0x1.9de652fd46c38p-569,
     0x1.33b6630f0769ap-307, 0x1.8f9b730b61c4fp-87, 0.0, 0.0, 0x1.aeb298ffb638ep-40,
     0.0, 0.0, 0.0, 0.0, 0x1.db9785579e8a9p-967, 0.0, 0x1.57e0e1150aa65p-568,
     0x1.dec04dfd42b47p-356, 0x1.4a7c57ea2f621p-805, 0.0, 0x1.8436a1ad7c44cp-952,
     0x1.728f9386eb0ffp-632, 0.0, 0x1.092c29283cde7p-450, 0x1.4d308b8a95c5bp-272, 0.0,
     0.0, 0x1.204c62c5be1dfp-974, 0.0, 0.0, 0x1.430c2a15ed87p-241, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.58fbdacd28d65p-513, 0x1.79660342d71e3p-632, 0.0, 0.0, 0.0, 0.0,
     0x1.f3409d5d785e2p-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4145d15936c4fp-81, 0.0,
     0.0, 0x1.067883502aaa5p-34, 0x1.fad976bbcaf7p-157, 0.0, 0.0,
     0x1.4d9dbcd433f51p-299, 0x1.1b1b07e94f373p-275, 0.0, 0x1.955f6694608b2p-1002,
     0x1.64546539dd81ap-413, 0.0, 0x1.cf4d515e4d4e3p-698, 0.0, 0x1.6b45c0c15df12p-25,
     0x1.01f6fd5b6b153p-621, 0x1.323b9ab36526p-277, 0.0, 0.0, 0.0, 0.0,
     0x1.9445091a9a6b3p-693, 0.0, 0x1.16a2d3c2fb6c6p-800, 0x1.68a44f3205934p-693,
     0x1.3debcb10d134ap-899, 0.0, 0.0, 0.0, 0x1.f9eb02cefe02ap-500,
     0x1.8ce549008a7e8p-344, 0.0, 0x1.217171e927c87p-872, 0.0, 0x1.a0edbb7ea8a71p-312,
     0.0, 0x1.057add3984041p-556, 0.0, 0x1.09878b815e0c8p-803, 0x1.3a8c37426a78dp-712,
     0.0, 0.0, 0.0, 0x1.e49892f04ebd4p-224, 0x1.71324f61539d4p-750,
     0x1.b4ae38b55c9e4p-260, 0.0, 0x1.dedb46295cebbp-280, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08d49cd5a161fp-552, 0x1.b01a313a0aa12p-131, 0.0,
     0.0, 0x1.04196173c9effp-824
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
            tmp1 = Sleef_exp2d1_u35purecfma(tmp0);
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
    printf("Sleef_exp2d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
