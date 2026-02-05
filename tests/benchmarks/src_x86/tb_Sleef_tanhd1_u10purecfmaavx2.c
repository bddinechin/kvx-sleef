/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd1_u10purecfma.c --function \
 *     Sleef_tanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.d8a127b75d06bp-197, 0x1.b5ee43198e16p-966, 0.0,
     0x1.c4462024639c2p-729, 0x1.e4f511a391c42p-601, 0.0, 0x1.c3df8213f0109p-223, 0.0,
     0.0, 0x1.d9bf91c5d1679p-147, 0.0, 0x1.336078045f8b3p-98, 0.0, 0.0,
     0x1.571d45e97e0abp-428, 0x1.b9dc88f050f3cp-43, 0x1.fa8288770ee97p-778,
     0x1.5b7a0c184e493p-735, 0.0, 0x1.3f039bff0ddb5p-191, 0x1.ededabe9b5617p-132, 0.0,
     0.0, 0x1.6bc1255937185p-554, 0.0, 0x1.af2bf42fa018ap-772, 0x1.d160eec23974ap-904,
     0.0, 0.0, 0x1.d04a719e3886p-56, 0.0, 0.0, 0.0, 0.0, 0x1.c37160a1c71edp-320, 0.0,
     0x1.485ee162d0504p-658, 0x1.67b62707560e5p-785, 0x1.eff4db00d902cp-844,
     0x1.e86962ef7133fp-920, 0.0, 0.0, 0x1.f918a208fea29p-592, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9b1aa7c196b21p-129, 0x1.af3919dfeaf06p-98, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f2d57e1df3842p-898, 0x1.53835d69bb2a4p-18, 0x1.4bdbe24adea67p-497,
     0x1.f325522710d9ap-81, 0x1.7d34f9ba6e3cp-480, 0.0, 0x1.4af6a1d842ff5p-933, 0.0,
     0x1.6180a57376cedp-737, 0.0, 0x1.36eb2bebdc62ap-1006, 0.0,
     0x1.159951f746755p-517, 0x1.d5f469675471p-715, 0x1.d0f48109abacdp-674,
     0x1.34a9441943789p-243, 0x1.309e88c0102bap-642, 0x1.3866547b9a1a8p-896,
     0x1.3fdae2f3e315ep-214, 0.0, 0x1.32ae4374fa0d2p-45, 0.0, 0x1.839f62a817b33p-276,
     0x1.83c60913993adp-610, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6893188c9fb85p-525, 0x1.c11bfbed7bcc6p-173, 0x1.39433d8899db3p-376,
     0x1.10fe408c23b63p-399, 0.0, 0x1.5b245f5a31874p-327, 0x1.15b5eeb35d41bp-683, 0.0,
     0.0, 0.0, 0.0, 0x1.7429a6cd81c5cp-852, 0x1.ada72235aec01p-759, 0.0,
     0x1.1854c312f8f54p-306, 0.0, 0x1.408521ece43f2p-601, 0x1.e12715af89cd3p-308, 0.0,
     0x1.b01144ba4b3c8p-350, 0x1.0f5973b15e8dp-79, 0x1.98df709c782a7p-11,
     0x1.53e3b33dc40f1p-898, 0x1.d0f32bc298396p-864, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4398f6067698cp-327, 0.0, 0.0, 0x1.b94f975aaaee4p-555, 0.0, 0.0,
     0x1.85d6382b6d6cbp-403, 0x1.c0a4ad6c32849p-915, 0x1.2677ebc1551a2p-454,
     0x1.e1a3b2aa60e97p-742, 0x1.e87c826e44954p-392, 0.0, 0.0, 0.0,
     0x1.57f939700bf17p-271, 0x1.adf331653ed7cp-499, 0.0, 0x1.a22554b687a6fp-74,
     0x1.794f54f023ae7p-234, 0x1.fc4d58ba19942p-301, 0.0, 0x1.e1b3a2554f79ep-822, 0.0,
     0x1.533d883c5f32dp-712, 0x1.84b0971b7b89fp-660, 0x1.2fab43ee3cd3ap-964,
     0x1.0d866e1863bb4p-247, 0.0, 0x1.e2ec9ed619186p-247, 0x1.10ae17c699496p-764, 0.0,
     0.0, 0.0, 0x1.e195e524f068cp-109, 0.0, 0x1.3b8ce42bf818dp-653,
     0x1.d62c3a9188446p-45, 0.0, 0x1.34c3d3ed1ce8cp-414, 0.0, 0.0, 0.0,
     0x1.4966bc1f09373p-76, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d7e98afa229ap-368,
     0x1.2c137de06d88bp-814, 0x1.6505b1c5f13a6p-711, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.695ac1be7d573p-215, 0x1.c1a9750cfbc99p-247, 0x1.c2860ce8c8ad3p-747,
     0x1.cd3b9e5cbdf1fp-102, 0x1.6c75ae68a4adp-1, 0x1.2ec1770516f0cp-781, 0.0,
     0x1.d4fd87adafefap-896, 0.0, 0.0, 0.0, 0.0, 0x1.b15e5e2baf734p-14,
     0x1.1b17bc4ebd2d2p-676, 0x1.bc000fa317bb4p-552, 0x1.0d299c7f6b00fp-184,
     0x1.83a00e88b7fbp-973, 0.0, 0x1.fb79455e0f793p-112, 0x1.4bc6ca02caca7p-880,
     0x1.0e1be47b6cc29p-198, 0.0, 0.0, 0x1.109a3ba039619p-994, 0x1.60cffc6b31302p-457,
     0x1.eb2fc2d1d8e0ap-145, 0x1.7f58b63dfd0b7p-906, 0.0, 0x1.17919c50b58c4p-521, 0.0,
     0.0, 0x1.df94a14312bcfp-638, 0x1.3fee1258d5bb6p-420, 0.0, 0.0, 0.0,
     0x1.66d500bb0fb7bp-630, 0.0, 0x1.3ff7662e83c0ep-503, 0.0, 0.0, 0.0,
     0x1.232a4459aef72p-159, 0.0, 0.0, 0.0, 0x1.d4b8ed942c358p-273, 0.0,
     0x1.6764ab73b3577p-981, 0x1.e452cafe8fcf9p-729, 0x1.c3da8c1bfa43fp-639, 0.0, 0.0,
     0x1.35eeedc5096dfp-237, 0x1.eb70cfbcf5a1fp-184, 0x1.f22acf32a53dep-556,
     0x1.4e264d5ee3789p-611, 0.0, 0.0, 0.0, 0x1.830c236ba28dp-764, 0.0, 0.0,
     0x1.b95aed7f44218p-498, 0x1.8395300b1da48p-213, 0.0, 0.0, 0x1.d0d61fe7c366bp-809,
     0x1.9d33cb69594f4p-655, 0x1.345ed41eab9b3p-283, 0.0, 0x1.9d054362387d7p-937,
     0x1.5cca4ea4ac6bcp-46, 0x1.e8564a720ee98p-545, 0.0, 0.0, 0.0,
     0x1.58c5a54c8d35bp-78, 0x1.0b24fc0949fe3p-758, 0.0, 0.0, 0.0,
     0x1.7bfc837c06e55p-666, 0x1.e153e03f86be3p-84, 0.0, 0x1.e5c32bb0eef07p-548,
     0x1.d5f723fa6a23cp-730, 0x1.7077e3e7acdfap-371, 0.0, 0x1.5c3adc21c9b46p-738,
     0x1.30542a0d86d0cp-67, 0.0, 0x1.a8c9047323d9bp-806, 0.0, 0x1.91d2d48da397cp-941,
     0.0, 0.0, 0x1.9ee06037ce7d5p-17, 0.0, 0x1.761e04d911246p-797, 0.0,
     0x1.0b328533f5c6ap-262, 0x1.14ddd07256fc9p-694, 0x1.ed6a35ec5ad9dp-757, 0.0, 0.0,
     0.0, 0.0, 0x1.a1e4e53b83f11p-351, 0x1.def1d3039b944p-893, 0.0,
     0x1.3b368f6c99e46p-8, 0x1.923f1d3eaf56ap-231, 0.0, 0x1.080e7bafb0ac2p-57,
     0x1.76af1a4044b57p-276, 0.0, 0.0, 0x1.e72ea5cdfb10bp-1010, 0.0, 0.0,
     0x1.e6bae1dd5a1d5p-717, 0x1.5dae7f80eafcep-587, 0.0, 0.0, 0x1.6cdc1c9bde625p-711,
     0x1.67308df133657p-991, 0.0, 0.0, 0x1.6c2a98629466dp-481, 0.0, 0.0,
     0x1.4ba4e45fdf131p-994, 0.0, 0x1.ce9bd48d52d7ap-503, 0x1.4c500d7544a65p-218, 0.0,
     0.0, 0x1.a22a3383e5923p-978, 0.0, 0.0, 0.0, 0x1.5fd470cf4ab16p-193, 0.0, 0.0,
     0.0, 0.0, 0x1.cb72b2e2c6846p-909, 0.0, 0x1.1189bec92fe39p-472,
     0x1.51c8734042a31p-403, 0x1.35f087f28a294p-525, 0.0, 0.0, 0.0, 0.0,
     0x1.3d557c65ba1fap-41, 0.0, 0.0, 0.0, 0.0, 0x1.ffc0e6d08d47bp-107, 0.0, 0.0,
     0x1.abc5a8a5ee92cp-983, 0x1.33a4a86fe8722p-219, 0x1.9df7c6e0ba762p-320,
     0x1.4d72757ead1fap-33, 0x1.9a3209d0b3b4fp-859, 0x1.1b48019c8fc66p-481, 0.0, 0.0,
     0.0, 0x1.da8a7e8b8fc6ap-553, 0x1.6e84d327c1244p-423, 0x1.5ac46cdacf7e9p-211, 0.0,
     0.0, 0.0, 0.0, 0x1.b04e7e4bbb84ap-161, 0.0, 0x1.9b696d8efe536p-94,
     0x1.430b40a6fa58ep-780, 0x1.633e8fa094b6dp-283, 0.0, 0x1.1346ae38fab71p-726,
     0x1.3a8d329871769p-687, 0x1.08706a5c901b9p-603, 0x1.032fb2fc38e04p-769, 0.0, 0.0,
     0.0, 0x1.40e5522a9eefp-348, 0x1.b6598613249bap-665, 0x1.c7a802e866acdp-711,
     0x1.2470aa3fb7828p-220, 0.0, 0x1.553a6a16c63f9p-281, 0.0, 0x1.aa4cfecda314dp-183,
     0.0, 0.0, 0x1.fe594ca545c05p-509, 0.0, 0.0, 0x1.7985cb952aea5p-588, 0.0,
     0x1.d5a89a31ccd58p-96, 0.0, 0.0, 0x1.b16d75a5ce8fap-971, 0.0, 0.0,
     0x1.254cddda0c07p-488, 0.0, 0.0, 0x1.4e1677b3d6442p-112, 0x1.926dd92b42b09p-654,
     0x1.d849f5032fbd8p-758, 0.0, 0.0, 0.0, 0x1.f424f95ed5c05p-738,
     0x1.e6f228be6d76ap-241, 0.0, 0.0, 0x1.623c1e7f6122fp-423, 0.0,
     0x1.5de24c7b79d19p-375, 0.0, 0x1.a70b5979d2128p-364, 0.0, 0x1.d427d02c89581p-223,
     0.0, 0.0, 0x1.e71c34c311516p-527, 0.0, 0x1.1cb2542878addp-721,
     0x1.740718874a2e2p-524, 0x1.53fa72026fa3ap-513, 0x1.617c9e4e071b5p-779, 0.0, 0.0,
     0.0, 0x1.657e9c8e1b24cp-572, 0.0, 0x1.18e257ccee5e1p-865, 0.0, 0.0,
     0x1.f05244c4d9dfcp-958, 0.0, 0.0, 0.0, 0x1.c1fe1bec96944p-620, 0.0,
     0x1.49640af55e828p-894, 0x1.d6c2bdc0f5996p-714, 0x1.399eb5ea23f8p-453,
     0x1.6327f71d859abp-416, 0x1.217310f3cab55p-41, 0x1.5c730790d5316p-242, 0.0, 0.0,
     0.0, 0x1.c62a4710cdb0fp-945, 0x1.54eb0ee79ea05p-845, 0x1.a7467317cb383p-896, 0.0,
     0x1.334cd661aeb6fp-327, 0x1.3289ec196949ap-893, 0x1.addcb21ff969dp-110,
     0x1.3885335713d76p-185, 0x1.e972627e50c83p-454, 0.0, 0x1.a803c4f01072cp-242, 0.0,
     0x1.3eb8db35f5126p-743, 0.0, 0.0, 0x1.cfa3c14c561a7p-532, 0.0, 0.0, 0.0, 0.0,
     0x1.3d80591a6126bp-428, 0x1.4fbe8766f159p-812, 0x1.829fc89918888p-8,
     0x1.2522f0cf79b75p-426, 0x1.79a059eb431fap-495, 0.0, 0x1.bd77e73fb2fbcp-918, 0.0,
     0x1.9d10e033b1f06p-885, 0x1.6d31f8f913ea1p-46, 0x1.bfad740b8d43cp-393, 0.0,
     0x1.e387e85cd22a6p-572, 0.0, 0x1.b6b5c96434b1dp-264, 0x1p0,
     0x1.77c4f05e1445ap-522, 0.0, 0x1.2606eeabd9198p-715, 0.0, 0.0,
     0x1.8521bc17da67p-142, 0x1.9ab2d77e2cc29p-912, 0.0, 0x1.cebfb759b8552p-341, 0.0,
     0x1.2f21e8186a8bdp-625, 0.0, 0x1.944a072328a85p-995, 0.0, 0.0, 0.0,
     0x1.5b7c3efbdfaa5p-251, 0x1.5f654bf816fdep-4, 0x1.356976c32fca9p-160, 0.0, 0.0,
     0.0, 0.0, 0x1.17eacc387e9c3p-60, 0.0, 0x1.93b7e333208a4p-281, 0.0, 0.0, 0.0, 0.0,
     0x1.26934306f77e9p-803, 0.0, 0x1.b5632f18a0da9p-118, 0x1.7769f056fbec2p-779, 0.0,
     0.0, 0x1.9a51c19e9f91cp-157, 0.0, 0x1.64a9f63c3bff8p-758, 0x1.b055fb9d94f51p-122,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dc228cd92547p-1012, 0.0, 0x1.3fe80d9fce35dp-51,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f954d0939f0d7p-604, 0x1.8d4706df17c72p-169, 0.0,
     0.0, 0x1.13dd405d4fb8fp-395, 0.0, 0x1.b8670a5ed8c74p-415, 0x1.ae68a6c37ec2ap-164,
     0x1.eaecb2279384bp-398, 0.0, 0.0, 0x1.a7f896519165fp-809, 0x1.7a1f542dade9ep-189,
     0.0, 0.0, 0.0, 0x1.d989863796411p-686, 0.0, 0x1.b0d35eeeaccfdp-182,
     0x1.724a2a758fce3p-974, 0.0, 0x1.e459260ffc10ep-233, 0x1.703a75a0278cap-177,
     0x1.a1ea17e6b005dp-336, 0.0, 0.0, 0.0, 0.0, 0x1.f6bdd0678215bp-176, 0.0, 0.0,
     0x1.10803a872ab37p-146, 0x1.ae5f8d869487dp-179, 0.0, 0x1.5aa64d256b345p-643,
     0x1.570a8b61bf53cp-146, 0x1.d12da00e8d441p-493, 0.0, 0x1.104bceed8fefep-895,
     0x1.8a0689f6fcc03p-115, 0.0, 0x1.73b577014f5cfp-545, 0x1.a9d40b7322d58p-349,
     0x1.34dd3e088543dp-930, 0.0, 0.0, 0x1.92d7c686f8b05p-337, 0.0, 0.0, 0.0,
     0x1.ba39e2c8e7bdp-862, 0.0, 0.0, 0.0, 0.0, 0x1.8e897aeb3625ep-328,
     0x1.24fbaf2f18321p-980, 0x1.f42d03d96756dp-390, 0.0, 0x1.39e5308c0a6b8p-777, 0.0,
     0.0, 0x1.5b25ca6230efdp-181, 0.0, 0x1.0d1160e73c4f9p-331, 0x1.943122a69e371p-508,
     0x1.2b866bb307c5bp-456, 0.0, 0.0, 0x1.118c1abdc158ep-431, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d28903f77a6d8p-190, 0x1.40eb423443053p-303, 0x1.3bb49b4428cap-689,
     0x1.8e2ef66143a05p-587, 0.0, 0x1.c4d359f131c58p-390, 0.0, 0.0, 0.0, 0.0,
     0x1.76c61ede17a6ap-366, 0x1.577a95ef03ebcp-795, 0.0, 0x1.a30d13482efbfp-396, 0.0,
     0x1.73e7cfad8ee4cp-478, 0.0, 0x1.4c78ba5e989c3p-712, 0x1.cba26c0ff9bbdp-740, 0.0,
     0x1.654b7d8c2551ap-357, 0x1.b1f55f42069c3p-417, 0x1.a7e415460786bp-603, 0.0,
     0x1.30bd2833025e2p-874, 0.0, 0.0, 0x1.1ea3ba0061e54p-929, 0.0,
     0x1.3c32548bac514p-872, 0.0, 0.0, 0x1.c7c120bfa758cp-431, 0x1.db18099e1572fp-388,
     0x1.92be1e54a46c2p-505, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.25cb1cdc971c5p-399, 0x1.557fc394032f1p-561, 0x1.31d2779fb85dp-607,
     0x1.92bb5e6149c1cp-156, 0.0, 0x1.3ae3faeb39625p-250, 0x1.303603c90ec8cp-907,
     0x1.926469d6c17a3p-179, 0x1.b684d86002e58p-866, 0x1.8ffdc52b58338p-444, 0.0, 0.0,
     0.0, 0x1.c03005df8091cp-79, 0x1.910046a30351cp-957, 0.0, 0.0,
     0x1.341d12b45474cp-819, 0.0, 0.0, 0.0, 0x1.940017835425dp-486,
     0x1.ae6e17d4276cp-526, 0.0, 0.0, 0x1.3a9ec18554d51p-915, 0.0,
     0x1.64666a3485182p-910, 0.0, 0x1.bf1817a1424bap-800, 0.0, 0x1.cea1a6d295349p-723,
     0.0, 0.0, 0x1.c04757f7ecd8p-203, 0x1.724f2a2d1a66cp-470, 0x1.2ca9840bf390ap-631,
     0x1.2647732bfa0e7p-372, 0.0, 0x1.05b2c94eae934p-582, 0x1.e12247f63e3ap-450,
     0x1.e6feba9ebd7f7p-734, 0.0, 0x1.a644254ac5bafp-881, 0.0, 0.0,
     0x1.97f3fa1e94166p-475, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71040809fb3e9p-987,
     0x1.1b2d1df4d83fdp-691, 0.0, 0x1.5fc3ca94fdf67p-50, 0.0, 0x1.5b0797e872cddp-648,
     0.0, 0.0, 0.0, 0x1.77b52f17162c8p-518, 0x1.3c6d4b18a4278p-808,
     0x1.6dfd6c30fd27dp-32, 0x1.fc6cbb677dd45p-608, 0x1.35ba716266754p-691,
     0x1.96f5c89fe19a6p-686, 0x1.a209fcc905516p-859, 0x1.8f5d2c6eb7f8dp-614,
     0x1.bf71f0b271708p-19, 0x1.32b788dfe15c9p-416, 0.0, 0x1.f8290e0effcbbp-938, 0.0,
     0.0, 0x1.7b9a8729c3e3fp-613, 0.0, 0.0, 0.0, 0x1.4f7360f8bf4f1p-193,
     0x1.3c30a3b64d2c8p-330, 0x1.5a9bcd5a4ba9ap-20, 0x1.f1015a8b1a3d9p-780, 0.0, 0.0,
     0.0, 0x1.d91157a33fe1ap-876, 0x1.419be0929df9ap-871, 0x1.0fa7c38efef4bp-491,
     0x1.5747a488c916ep-603, 0.0, 0x1.39d99082a64bp-218, 0x1.b4ff5f137e3d9p-64,
     0x1.c1048c9165c73p-719, 0.0, 0x1.24f79fc9dc0e2p-964, 0x1.a6c728502c1b1p-805,
     0x1.19f25d368729dp-1021, 0x1.7dd9d59ee714cp-933, 0.0, 0x1.e38752c97f45cp-624,
     0x1.b8645562ac1f4p-908, 0.0, 0.0, 0.0, 0x1.3e4c2ff1ff7f3p-487,
     0x1.13a57af141b72p-123, 0x1.777810b6987eap-207, 0.0, 0.0, 0x1.998f903d04974p-248,
     0.0, 0.0, 0.0, 0x1.c7bdc5dba40c5p-797, 0.0, 0.0, 0x1.7c06e6bbd3654p-451, 0.0,
     0.0, 0x1.d102ff5aec16p-424, 0.0, 0x1.a1da93799ab1dp-970, 0x1.28a5762e8025p-833,
     0x1.a2b7e727ee2a6p-879, 0x1.896a0da7dddep-925, 0x1.c62755d0330c2p-248, 0.0,
     0x1.bbec5b64b215p-753, 0.0, 0.0, 0.0, 0x1.57523da2b5d44p-527, 0.0,
     0x1.86bea953aee6dp-489, 0x1.393383955f2d1p-605, 0x1.abae1b425e603p-420,
     0x1.0ac309d1564d4p-547, 0.0, 0x1.80cb347f18647p-37, 0x1.d1b885ab30077p-107,
     0x1.edbcea261527cp-904, 0x1.dc7ca484afce9p-751, 0x1.72106b083f22ep-234,
     0x1.a956dd1e506f7p-500, 0x1.dbfc54a58e971p-210, 0.0, 0.0, 0x1.400c47c4da6a7p-703,
     0.0, 0.0, 0.0, 0x1.66b95a56b4a99p-75, 0.0, 0.0, 0.0, 0.0, 0x1.42b6e33e8664dp-270,
     0.0, 0.0, 0x1.b0116cf379c8p-34, 0.0, 0.0, 0.0, 0x1.a1a2d1d3c48dfp-649,
     0x1.c9a328a50cd6dp-978, 0x1.107058b818dd2p-429, 0x1.ce6587c528ea9p-767,
     0x1.45ed8d69e95a2p-67, 0.0, 0.0, 0x1.2f58353c94623p-238, 0x1.a7f85c08d23b3p-459,
     0x1.fd6e33ceef2bfp-593, 0x1.325cc96488d2ep-555, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d9ca58564aebep-73, 0.0, 0x1.b6019536c02a9p-271, 0x1.2297e74c5226ep-937, 0.0,
     0.0, 0.0, 0.0, 0x1.1beca29c686abp-708, 0x1.913e4d92f7675p-537,
     0x1.8c70693350886p-855, 0.0, 0.0, 0.0, 0x1.4420bce85586fp-489,
     0x1.4dfe7680824c6p-876, 0.0, 0x1.594c310d661dp-817, 0x1.dc55278d98adfp-219, 0.0,
     0x1.98320a5268a62p-824, 0x1.a1ab0e0cdbb33p-542, 0x1.3a9becb1ac651p-146,
     0x1.815468e40e55ap-411, 0.0, 0x1.362e199319c74p-749, 0.0, 0x1.3bc1b9905d46p-697,
     0x1.7ca90cfa3ea71p-472, 0.0, 0x1.2b55023f8da71p-1017, 0x1.b2a3e90b365d2p-110,
     0.0, 0x1.46680fba8afcp-364, 0x1.96794abb92efp-113, 0.0, 0x1.91f8b3b1cc726p-852,
     0.0, 0x1.9b18ba20135a6p-640, 0.0, 0x1.ed087fa1dd6fbp-755, 0x1.78c6f5c8f95d8p-812,
     0.0, 0x1.2724d40a97cbap-970, 0x1.59ab8eeee29a6p-693, 0x1.0e8eb87c210b7p-902,
     0x1.3c673cf6beffep-194, 0.0, 0x1.0076725a6e0dap-563, 0x1.5efceee31bc11p-256,
     0x1.79292664b653ep-532, 0x1.d2eafff403b03p-511, 0.0, 0x1.e07aac78c09fp-552, 0.0,
     0x1.2c03ff4ea7aa2p-813, 0.0, 0x1.c0a14eadda258p-287, 0x1.d4429ce10961fp-835,
     0x1.e80776499c24ep-697, 0.0, 0.0, 0x1.a304f8ae6e3edp-121, 0.0, 0.0,
     0x1.44e3bb086b22p-540, 0.0, 0x1.4a9cfba53f42p-107, 0x1.0939190e6edcep-314, 0.0,
     0x1.b2ba6aa4fedcbp-249, 0.0, 0.0, 0x1.4323309b229dep-541, 0x1.f11b749d7d271p-778,
     0x1.37a4f46df3a97p-3, 0.0, 0x1.b98c0608201efp-851, 0.0, 0.0, 0.0,
     0x1.cb1525cbf8e99p-595, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.534b50201462ap-690,
     0.0, 0.0, 0.0, 0.0, 0x1.8d5b004eee857p-20, 0.0, 0.0, 0x1.35a7139665b93p-645, 0.0,
     0.0, 0.0, 0.0, 0x1.017cc5f43ce24p-1011, 0.0, 0x1.89571e6d8d678p-477,
     0x1.a7a1c6fa8ed68p-902, 0.0, 0x1.2b524083d8b12p-833, 0.0, 0x1.c98dd8e8a5754p-878,
     0x1.2c15bf9e63875p-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c559491381e7ep-613,
     0x1.4338261b37b85p-317, 0x1.9b4deec4dfab6p-466, 0x1.647d210721b03p-847,
     0x1.a3bc10f018bddp-973, 0x1.244460256e353p-461, 0x1.9293742bdd595p-330,
     0x1.8154a34cc5c23p-325, 0x1.fb98d21602c2fp-435, 0x1.09d8ea618c084p-752, 0.0,
     0x1.e5b9253c49389p-826, 0.0, 0x1.ed60cd92d4958p-988, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e9ba9856c67b8p-371, 0x1.a9fef6f5ade14p-971, 0x1.0e317a90f6cebp-300,
     0x1.c28fc6d6a3f4bp-552, 0.0, 0.0, 0x1.3d84076969142p-130, 0x1.45ec65c80f7fcp-451,
     0x1.afd1e0c1179f4p-165, 0x1.3fca5cc2d1385p-365, 0.0, 0.0, 0x1.528f530a5a667p-576,
     0x1.c85bec4c287cp-417, 0.0, 0x1.5037a3af947bp-73, 0.0, 0.0, 0.0,
     0x1.0403fcc0a6d56p-967, 0.0, 0.0, 0x1.8970beeff42a9p-309, 0.0,
     0x1.0fe314fa26c63p-907, 0.0, 0x1.ec0780de5411bp-331, 0x1.6030c4e7c2d7p-960,
     0x1.3b4f1d1930364p-468, 0.0, 0.0, 0.0, 0x1.d2a7c6f74d154p-100, 0.0,
     0x1.a2e693c6acc3dp-838, 0x1.24553b2da4dffp-28, 0x1.30917d5cde888p-887, 0.0,
     0x1.dba254412bd4cp-469
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
            tmp1 = Sleef_tanhd1_u10purecfma(tmp0);
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
    printf("Sleef_tanhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
