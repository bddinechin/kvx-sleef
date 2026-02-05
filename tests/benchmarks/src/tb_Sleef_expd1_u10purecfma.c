/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expd1_u10purecfma.c --function Sleef_expd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.7534459d80345p-366, 0.0, 0x1.dda67652d8e8ap-532,
     0x1.bec6940a04b9ep-307, 0.0, 0x1.717464b7c785dp-400, 0.0, 0.0,
     0x1.cbe593ac1def2p-185, 0x1.8e9b48d9b33a4p-659, 0.0, 0x1.c944d1d0981a5p-352,
     0x1.e796a8b42df44p-877, 0x1.6a62dde05a24dp-761, 0.0, 0.0, 0x1.1717913ee1befp-450,
     0.0, 0.0, 0x1.2bdc14ef2516cp-29, 0.0, 0x1.5e3cd6e389bd1p-940, 0.0,
     0x1.7afdced71e042p-301, 0.0, 0.0, 0x1.15945a07668eep-640, 0x1.6876540b3a12dp-979,
     0x1.b5dd08579b869p-326, 0x1.12da9ebe61426p-314, 0x1.107d2b60a1cddp-810,
     0x1.19a06ded13f2ap-139, 0.0, 0.0, 0.0, 0x1.3a2cbd8d0918dp-354,
     0x1.e74112c35c796p-570, 0.0, 0.0, 0x1.7bbbad6a2fa02p-1011,
     0x1.eb3d4a2b863b7p-422, 0x1.8ec1ed2048f51p-876, 0x1.8405ea5ddae42p-428,
     0x1.2a3ed23ed3257p-316, 0x1.35a72c2788fcbp-742, 0.0, 0x1.6ea1b566c4cf5p-585, 0.0,
     0x1.5e94c28200d97p-532, 0x1.563a6e199028cp-340, 0.0, 0x1.09096a4a26c05p-221,
     0x1.d90e51778aa8bp-961, 0x1.5341245b331eep-967, 0.0, 0.0, 0.0,
     0x1.21f178d26a69ap-730, 0x1.b227f5aada572p-759, 0.0, 0x1.5a126b4c96dddp-594, 0.0,
     0x1.f260e7cab5187p-1007, 0.0, 0.0, 0x1.733e5d4703e08p-3, 0x1.07a0bdd66b047p-654,
     0x1.c85c861cb8b24p-815, 0x1.f568f50103ab4p-974, 0.0, 0.0, 0.0,
     0x1.ab1b4ae6b618dp-271, 0x1.d965ba0aee451p-379, 0x1.1b23eb267b003p-381, 0.0, 0.0,
     0x1.fe3f959b6d256p-230, 0x1.2297daf0cc94p-48, 0.0, 0x1.b370004094309p-144,
     0x1.fa9ef7b7d4705p-278, 0x1.001b2351d5b1ap-991, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0ecd8ed12ee3p-820, 0x1.fceef915f3926p-509, 0x1.79e97789aa54ep-880, 0.0, 0.0,
     0x1.56bb1135a4be4p-468, 0.0, 0x1.aacd0656c1f6ap-165, 0.0, 0x1.f27f8e7039eecp-353,
     0.0, 0x1.435b5fa06aef5p-175, 0.0, 0x1.e2c0d7665ee66p-391, 0.0, 0.0, 0.0, 0.0,
     0x1.1eefcc30a4c23p-29, 0.0, 0x1.d70316cb2172dp-1003, 0x1.6e448fc5a4f79p-52, 0.0,
     0x1.92e734c72f1d5p-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9204e178d097dp-621, 0.0,
     0.0, 0.0, 0x1.d9f40d797cf81p-594, 0x1.5fda9fd960211p-302, 0.0, 0.0, 0.0,
     0x1.9da95b1be1c2ap-718, 0x1.a51c62de8e3e9p-197, 0.0, 0.0, 0x1.8f5395808e2cdp-273,
     0x1.9b7bd2d7ea58bp-535, 0x1.495ff7747112cp-361, 0.0, 0x1.d008298d3f56bp-1008,
     0x1.9145a3e9bf23ap-402, 0.0, 0.0, 0x1.67a20c9aac7e2p-644, 0x1.a0b74f3de8358p-896,
     0.0, 0x1.a31356fc97269p-389, 0x1.22daedf8a7352p-365, 0.0, 0x1.4f15fe26cf12fp-519,
     0x1.ebc91b8a4b043p-768, 0.0, 0.0, 0.0, 0x1.039a510e88a2dp-94, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d39937e56be89p-836, 0x1.2de500ff797bp-983, 0.0, 0x1.15006a0fc91b8p-943,
     0.0, 0.0, 0x1.eabc51d8b931p-708, 0x1.5ee29533e918fp-200, 0.0,
     0x1.18f412cbd7148p-106, 0x1.8550bfb1bfe97p-832, 0.0, 0x1.fe0957f8b7b37p-635, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7876c1ea36439p-458, 0x1.e679ec15660e6p-979, 0.0,
     0x1.211819de248f1p-940, 0.0, 0x1.4d1a1de35d43fp-385, 0.0, 0x1.f1a4c57dc31f9p-661,
     0.0, 0x1.b36e0e9aeca9ep-49, 0x1.c36f2e2f42982p-983, 0x1.8d557257ae2a7p-316, 0.0,
     0x1.aefb1a77cb62cp-57, 0.0, 0x1.9fdada058dcdcp-425, 0.0, 0x1.539d32afa54fdp-904,
     0x1.a61dabfcd7e27p-60, 0x1.fddb093316cf6p-31, 0.0, 0x1.5f754c506e586p-610, 0.0,
     0x1.30236865051dcp-334, 0.0, 0x1.1da37392a07ap-83, 0.0, 0.0,
     0x1.3411d5fd1eaa4p-438, 0.0, 0.0, 0.0, 0x1.c01b41ea391d8p-850, 0.0,
     0x1.87fcc109bd09fp-14, 0.0, 0.0, 0x1.659407c4ad4bdp-17, 0.0,
     0x1.d136c112bce3cp-545, 0.0, 0x1.09fac115c1a7p-261, 0x1.56fe570bce17bp-374, 0.0,
     0x1.9cdda8142aab1p-816, 0x1.1a93e06f48eep-461, 0x1.a41062b3ab8ecp-523, 0.0, 0.0,
     0x1.678ff16042034p-86, 0.0, 0x1.1557b95374594p-641, 0x1.3c29fd67fb5a1p-450, 0.0,
     0.0, 0x1.d5cbcc7e8fde3p-225, 0.0, 0x1.d84bd0d46cafcp-431, 0.0, 0.0, 0.0, 0.0,
     0x1.daefdd082a0b2p-912, 0x1.5e0ca0396a06dp-196, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.67ea36548fa07p-375, 0.0, 0.0, 0.0, 0x1.1e771ebb8bda1p-924,
     0x1.8300337bb216cp-811, 0x1.28593c6d836fp-573, 0x1.c87b8fb6ebd32p-244, 0.0, 0.0,
     0.0, 0.0, 0x1.306cb1418eb7p-948, 0.0, 0x1.e5012dcf7a6e8p-927,
     0x1.3da99c236652p-551, 0x1.7fdaccf19dc97p-321, 0x1.c35cc4b931d4cp-402,
     0x1.a6b9b23615bd8p-499, 0.0, 0x1.2667dda0f54e4p-477, 0x1.df22e00aa8009p-347,
     0x1.b013ef47f0cfbp-100, 0x1.b6a1d6eadf1e2p-688, 0.0, 0x1.dce7f3c4e461fp-609,
     0x1.859c7de356a39p-824, 0.0, 0.0, 0.0, 0x1.2918d4bb26a83p-765, 0.0, 0.0,
     0x1.f33128eb3bf8ap-135, 0.0, 0x1.e6be2bf800e24p-274, 0.0, 0.0, 0.0,
     0x1.a84910e535805p-162, 0x1.654d1aa0c2d53p-821, 0.0, 0.0, 0x1.ec7ef468c141fp-961,
     0x1.5bed041b3f921p-664, 0x1.e884efe0f1a9cp-952, 0.0, 0.0,
     0x1.05b3193c7b842p-1013, 0.0, 0.0, 0.0, 0.0, 0x1.5061b1719ceffp-678, 0.0,
     0x1.7dc3149eeeaf1p-474, 0.0, 0.0, 0x1.29349dca6e5e9p-827, 0.0, 0.0, 0.0,
     0x1.0bc9eaf5c53d1p-542, 0.0, 0.0, 0.0, 0x1.203f8377855c8p-776, 0.0, 0.0,
     0x1.82cc4bae30416p-445, 0x1.eaaf8ebb3fe37p-865, 0x1.4d6c1d8192725p-124,
     0x1.c0af7d1445099p-384, 0x1.aef13489b6123p-225, 0x1.46109327195e6p-315,
     0x1.3df453848c84bp-775, 0x1.0637959c969bcp-1012, 0x1.63168bbe673ffp-54,
     0x1.855944b2c688cp-436, 0.0, 0.0, 0.0, 0x1.9a4c37a90eccep-614, 0.0,
     0x1.e0455fc1eb835p-200, 0x1.ba0c5e0fc8781p-331, 0x1.b68a26c1460ecp-130, 0.0, 0.0,
     0x1.d4bb1c182ca71p-431, 0x1.4515c5aa47435p-838, 0.0, 0.0, 0.0,
     0x1.0f13037284e07p-648, 0x1.78ad49ec7ab03p-587, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8506f1c5a4ccp-354, 0.0, 0x1.d48e54dce2288p-745, 0.0, 0.0, 0.0, 0.0,
     0x1.5a5501ed4162bp-634, 0.0, 0x1.14a1215984aa3p-266, 0.0, 0.0,
     0x1.4ed8862b01296p-155, 0.0, 0x1.1ca9ee3333759p-142, 0.0, 0x1.04a88be01e575p-740,
     0.0, 0x1.cc6a1157ca4fdp-341, 0.0, 0.0, 0x1.59678d314af04p-36,
     0x1.ad38872c27ed1p-282, 0x1.357dfbf8e0fc8p-1022, 0.0, 0.0, 0x1.fbca010083f51p-14,
     0x1.3bca9262b20cap-841, 0.0, 0x1.12b186c56654p-53, 0x1.be207be1f90fdp-476,
     0x1.e416c398c73f5p-942, 0x1.eac8b2a1f0ae1p-697, 0.0, 0x1.b4b0f9e810b76p-355,
     0x1.47e87c374632ap-759, 0x1.d123d32719556p-663, 0x1.66f9542b834ep-889, 0.0, 0.0,
     0.0, 0x1.c0ea3da9084f5p-781, 0.0, 0.0, 0x1.1a362489bee7cp-913, 0.0,
     0x1.a8011dd110ea7p-581, 0.0, 0.0, 0.0, 0.0, 0x1.aec24c6d5fc45p-214,
     0x1.53eb759d05e45p-789, 0x1.4ac5c3898aa12p-446, 0.0, 0x1.def1291c4ff11p-857, 0.0,
     0.0, 0x1.ba9ce0b4e89b4p-602, 0x1.e3879ed88a2d5p-578, 0x1.282354c5649dp-873,
     0x1.25d32020fd58bp-775, 0.0, 0x1.a0cf18c71792p-611, 0x1.7850f17e2529fp-779,
     0x1.ce5153e9f78aap-295, 0x1.b5e22117618adp-417, 0x1.52e120241367dp-526, 0.0, 0.0,
     0x1.0095bdf9e79a9p-227, 0.0, 0.0, 0x1.856a1b732ce62p-160, 0x1.ef6eac8f67fc2p-148,
     0.0, 0x1.877897aff7ab4p-540, 0x1.1d7372c0dced6p-638, 0.0, 0x1.fd01f3e991896p-880,
     0.0, 0x1.ac08a4db272cfp-221, 0.0, 0x1.d18f86e14a40cp-548, 0x1.a8e9f31187173p-236,
     0.0, 0.0, 0x1.6e6100d4007ap-406, 0.0, 0x1.8a667d413192ep-812, 0.0,
     0x1.79a5f4e96ff04p-698, 0x1.8142dd0fab7dbp-670, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06f01cfb2cd9fp-901, 0.0, 0x1.38da38c77c451p-200, 0x1.5de2a4460e8e8p-733, 0.0,
     0.0, 0.0, 0.0, 0x1.5d916703aa52p-971, 0x1.6a6622810c9b1p-674,
     0x1.782265def66bbp-120, 0.0, 0.0, 0.0, 0.0, 0x1.12d688fc4dd84p-799, 0.0, 0.0,
     0x1.a43c210954513p-508, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0aad86388d678p-262,
     0x1.5df359b2ad743p-946, 0.0, 0x1.d265523aac50dp-344, 0.0, 0x1.fb9efe0774bf9p-789,
     0x1.a15be88df6791p-213, 0x1.133488d5942aep-770, 0x1.550de04b476fdp-868, 0.0,
     0x1.6681cff4c6af1p-197, 0.0, 0x1.bf475a7db14c8p-797, 0x1.9b6ac38af4ddfp-485,
     0x1.33a89d0abc9dp-720, 0.0, 0x1.6843a7d76573bp-370, 0x1.2386e168e32b1p-188,
     0x1.2f8a7ccc1b5e5p-830, 0.0, 0x1.61c7ea1baef4bp-32, 0x1.b6c0277ad06a1p-371,
     0x1.5f512512b89adp-1017, 0.0, 0.0, 0x1.ccc19a51cb474p-423, 0.0, 0.0, 0.0,
     0x1.876869dd821a6p-499, 0x1.e748ca3165431p-12, 0x1.d088819b3ac49p-574, 0.0,
     0x1.cc6f606e7dfacp-906, 0x1.f9bcfaa1cefb1p-644, 0x1.1369804ebbfe4p-873, 0.0,
     0x1.d13a2fc473579p-176, 0.0, 0x1.1c22bc1706653p-384, 0x1.32471b8c2529cp-586,
     0x1.971bef8988901p-914, 0.0, 0x1.bfe0ce4c2e3b6p-561, 0.0, 0x1.b4e666a85c4d8p-463,
     0x1.4ec855558e87p-46, 0.0, 0.0, 0.0, 0.0, 0x1.d099f738f726bp-28, 0.0, 0.0,
     0x1.ba71bdcebdabfp-244, 0x1.f8e923ebe16f9p-620, 0x1.fbd0e6d2ed63ep-702,
     0x1.136103453789dp-763, 0.0, 0x1.3f77d823fb2a5p-778, 0x1.09c2b38322937p-145, 0.0,
     0.0, 0x1.2c6c5a05b0e18p-446, 0x1.e4ccecb7c3779p-463, 0x1.7f198b580e11bp-759,
     0x1.d20c770e6d6b1p-994, 0x1.5bdb4e32a4bc3p-370, 0x1.7a340d31b5e16p-20, 0.0, 0.0,
     0x1.4d83a1f74f1f6p-63, 0x1.7d0e203e776aap-768, 0.0, 0.0, 0.0,
     0x1.68df548833effp-350, 0.0, 0.0, 0.0, 0x1.214d5564ecfc2p-309, 0.0, 0.0, 0.0,
     0x1.05ff4497155a5p-502, 0.0, 0x1.76da65c4641a4p-257, 0x1.ce39a4c8935eap-431, 0.0,
     0x1.4554a5ba73b3fp-271, 0x1.a1a1bf3f05bfap-769, 0x1.81e16fe11cc32p-832, 0.0, 0.0,
     0.0, 0.0, 0x1.64ab3281f3358p-404, 0.0, 0x1.cb0e0323a3f9cp-860, 0.0,
     0x1.da19d1a020253p-894, 0.0, 0.0, 0.0, 0x1.f71169d50d38bp-182, 0.0, 0.0,
     0x1.245eecac46da1p-94, 0x1.4368204a2fd68p-191, 0.0, 0.0, 0.0, 0.0,
     0x1.41826aad5ae18p-854, 0x1.e95ed9384c17cp-781, 0.0, 0x1.9af52617bb4eap-492, 0.0,
     0.0, 0x1.872e43459fd6ap-792, 0x1.419349b26b1a3p-618, 0x1.900145b62a518p-580, 0.0,
     0.0, 0x1.fc00cba7b2f3ap-947, 0.0, 0x1.0de83ebfadf23p-498, 0.0,
     0x1.42d2c3dbfa4acp-919, 0.0, 0x1.8d5a1187618b1p-591, 0x1.34d4d5bbf7c9bp-747, 0.0,
     0.0, 0x1.7a214c303badap-822, 0x1.2c316e881ee68p-71, 0x1.8f379093a245dp-631,
     0x1.25f3aeada8651p-25, 0x1.3fa6c80cc367ep-188, 0x1.f58e94b3d90c4p-175,
     0x1.b1f1538a5a8f7p-166, 0.0, 0.0, 0.0, 0x1.14043af9c7c4bp-414, 0.0, 0.0, 0.0,
     0x1.6931d26ffa1f5p-576, 0.0, 0.0, 0.0, 0.0, 0x1.39ce2ca3dc64ap-613,
     0x1.28d84e3c80911p-159, 0.0, 0x1.bf26d3dfcfdc8p-992, 0x1.9fea04a138f92p-34,
     0x1.f41a30e1a1126p-315, 0x1.225286772f2b6p-92, 0x1.8c5ed479a227dp-734,
     0x1.13121f8a50b6bp-842, 0.0, 0x1.b0cf8727c4f3cp-407, 0x1.b8a6f920d11e1p-464,
     0x1.876d8444ce59cp-562, 0x1.cb2b43e367ce7p-147, 0x1.b41d071de00bep-945, 0.0,
     0x1.86de776cbe07ep-259, 0x1.2d1b379afb3b5p-690, 0x1.d17eb31aeefc7p-477,
     0x1.3a337bd7c6415p-286, 0x1.da0f9c139525p-739, 0.0, 0x1.8ec59163c54f9p-726,
     0x1.2e9667aca4b96p-829, 0.0, 0.0, 0.0, 0x1.c93eff3252613p-946,
     0x1.98fa8c693ef21p-41, 0.0, 0x1.0304f013b8c42p-679, 0.0, 0.0, 0.0, 0.0,
     0x1.e4063cf79e04bp-633, 0.0, 0x1.bc228590da572p-535, 0x1.0f3004d9e8c34p-859, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.18334343163f1p-966, 0.0, 0x1.60075cd4e3743p-768, 0.0,
     0x1.43e43a11a1b18p-624, 0.0, 0.0, 0x1.a534ac8a6be87p-883, 0.0,
     0x1.5597ca2057513p-727, 0x1.fad9a4059984p-635, 0x1.6d4e3def256dap-364,
     0x1.c20b94bb19ea9p-131, 0x1.27d0e8435d18cp-139, 0x1.a9dd07f08f267p-528,
     0x1.e3fcc593f1c36p-195, 0x1.4c7c885f5627ap-464, 0.0, 0x1.e29808a87692fp-235, 0.0,
     0x1.5da3380ef0f66p-63, 0.0, 0.0, 0.0, 0x1.befd39b5ea509p-523, 0.0, 0.0,
     0x1.aeb8663591aap-743, 0.0, 0.0, 0x1.cf2ba2df23f35p-889, 0.0, 0.0, 0.0,
     0x1.44702b479a5ffp-272, 0.0, 0.0, 0.0, 0.0, 0x1.e7cd207e4e869p-42, 0.0,
     0x1.cde569f66543ep-965, 0x1.a2dbaa281f866p-12, 0.0, 0.0, 0x1.4ecb425cd60cfp-432,
     0.0, 0x1.552e96ac52ac9p-798, 0.0, 0.0, 0x1.4fb129de893cbp-815,
     0x1.80a02d96a422bp-610, 0.0, 0.0, 0.0, 0x1.8a997361a451ap-937,
     0x1.50821d2b3c4a6p-548, 0.0, 0x1.08e99bc70e3f9p-465, 0x1.862644b14726cp-10,
     0x1.416ad775eff4dp-75, 0x1.f0f735e7f7c9ap-263, 0.0, 0.0, 0.0,
     0x1.1a0f9cc77b8c7p-108, 0.0, 0x1.1761b52761eb2p-1015, 0x1.2db497d76fa26p-338,
     0.0, 0.0, 0x1.b9c91f3836c07p-803, 0x1.e9a6e313140adp-339, 0x1.ebd765cc3dc35p-466,
     0x1.82b83c3519aeep-559, 0.0, 0.0, 0x1.2a822272dd031p-305, 0x1.62ed82767b244p-523,
     0.0, 0x1.9a096f47832cdp-183, 0.0, 0.0, 0.0, 0x1.89c349b2bb071p-540,
     0x1.d89573f8b8613p-59, 0.0, 0x1.3bcf449aae109p-590, 0x1.94bcdb1f7a1bfp-211,
     0x1.eb2585b3dfff4p-637, 0.0, 0x1.71da2a521b799p-582, 0x1.31869e5301b6p-378,
     0x1.6bb429bb8aa48p-423, 0x1.8f29866dc4543p-389, 0x1.831c8980cf717p-894, 0.0,
     0x1.0878bd369c8cap-453, 0x1.afbcd468e1a94p-514, 0x1.57d2166092da7p-948,
     0x1.b287b3e0cee1ep-828, 0x1.518dca8e2d504p-710, 0x1.d092b4b95d31p-803, 0.0, 0.0,
     0.0, 0x1.899aecf12e83fp-369, 0x1.8c8119bec35c4p-322, 0.0, 0.0,
     0x1.7b4c47f9f6c96p-694, 0.0, 0x1.3a52a035d0f1ap-488, 0.0, 0.0, 0.0, 0.0,
     0x1.421520a5fb25bp-689, 0x1.e55e238a4894ap-496, 0.0, 0.0, 0x1.c4c968b4ef721p-255,
     0.0, 0.0, 0x1.07a2e1c0c62d6p-855, 0x1.ffaba2c2b472ap-422, 0x1.f6af31b8b016dp-533,
     0x1.6051c6c7edc01p-579, 0x1.9c35e25dc6335p-821, 0x1.60e93d956ddf9p-946,
     0x1.857330cd4356fp-637, 0x1.adc2f764263b7p-659, 0.0, 0.0, 0x1.3443515c59b43p-945,
     0x1.69cb84d50bf66p-148, 0x1.40c56312cbf2fp-920, 0x1.3d73846fe60bbp-386, 0.0,
     0x1.46e80eac62e4ep-396, 0.0, 0.0, 0x1.4b21eb69d4e78p-107, 0x1.549f07d0bdfeap-209,
     0x1.a07d8cad6a398p-105, 0x1.4e87667e2b24fp-672, 0x1.0f36de867ead3p-853,
     0x1.81a5b43d125edp-863, 0.0, 0.0, 0x1.a149b7d393283p-1006, 0x1.9ddd07e975f0ep-70,
     0.0, 0x1.23ec75a7496cp-997, 0x1.16b77c2bd3fd8p-677, 0.0, 0x1.8fa7cb82d213dp-626,
     0.0, 0.0, 0x1.623addda7cc76p-997, 0.0, 0.0, 0x1.f7018ae0a0033p-49,
     0x1.c91a67550f791p-983, 0.0, 0x1.5e740aecc3766p-300, 0x1.1ba8589005d51p-941,
     0x1.39d2d9cc8cb49p-352, 0x1.c6dcf48997857p-567, 0.0, 0.0, 0x1.68f7dfd238693p-921,
     0.0, 0x1.0cc38607e57e5p-388, 0.0, 0.0, 0.0, 0x1.5b396076e4048p-914,
     0x1.3cf86d675d085p-143, 0.0, 0.0, 0.0, 0x1.de66cba6bbc8fp-718,
     0x1.cda4a0829082p-193, 0.0, 0.0, 0.0, 0x1.ab9604ed85d5ap-480, 0.0, 0.0,
     0x1.24d85766e08c9p-950, 0x1.eca8aa7b4c7dcp-73, 0.0, 0.0, 0.0, 0.0,
     0x1.9f56d74e3aeddp-142, 0x1.4486004219ba9p-965, 0x1.b305cc4da2665p-448,
     0x1.129fb806e15d2p-116, 0.0, 0.0, 0x1.1e2550fba91fdp-394, 0.0,
     0x1.fb809c5950173p-380, 0.0, 0.0, 0x1.749b9a056df2fp-213,
     0x1.4a60e9a5ca5efp-1010, 0.0, 0.0, 0x1.469a639cbf972p-173, 0.0, 0.0, 0.0, 0.0,
     0x1.a4208663198a9p-94, 0x1.500774832cb78p-764, 0.0, 0x1.0e4e48bf8f38dp-435,
     0x1.c5a60f519abbp-397, 0.0, 0x1.b6bf2e0bc21b9p-112, 0x1.04d1e4b142481p-595,
     0x1.efd81ae0dc309p-21, 0.0, 0x1.35067de57cf76p-308, 0.0, 0x1.9d58741fe79bbp-379,
     0x1.4cec2b86a15f6p-650, 0.0, 0.0, 0x1.458ec89fbfd9cp-878, 0.0,
     0x1.70a2af84d86bp-733, 0x1.8f2ed8b6ba0bfp-417, 0x1.798b60fbaab69p-662, 0.0, 0.0,
     0x1.a6e64fb6ea9bbp-603, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d2401f602474p-674,
     0x1.6f080cbe39e25p-58, 0x1.2adbe6a19e71p-734, 0.0, 0x1.fe7b1dba44462p-777, 0.0,
     0.0, 0x1.1d57855d35ee3p-415, 0.0, 0.0, 0x1.e57307bac83fbp-989,
     0x1.f7b4b6be9020fp-925, 0x1.c281519d0fd6p-116, 0x1.205a5650185ecp-131, 0.0, 0.0,
     0x1.9c855f9490fb3p-376, 0.0, 0x1.0007921b5b64ap-970, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed63dd428068dp-459, 0.0, 0x1.6da3c3ae685dbp-646, 0.0, 0.0, 0.0,
     0x1.6a69239defb4cp-648, 0.0, 0x1.0880818d9a0a5p-450, 0.0, 0.0,
     0x1.141d62b28105fp-607, 0x1.9787bd0416f95p-778, 0.0, 0.0, 0x1.3c8d541816737p-280,
     0.0, 0x1.cac770d611ae4p-247, 0x1.234c09f6768d5p-336, 0.0, 0x1.c77903b54c093p-527,
     0x1.9db93b63238cbp-504, 0x1.57c1a2965d8ffp-445, 0.0, 0x1.d19b6ca40b96dp-754, 0.0,
     0x1.50268f1a5d0dp-844, 0x1.759dd235ec56cp-560, 0.0, 0x1.176fba8fe6f94p-1007,
     0x1.f473911771f05p-120, 0.0, 0x1.52772a63fa763p-898, 0.0, 0x1.e9855be9ce2d9p-505,
     0x1.b2f7272913df7p-41, 0x1.58b8efe468334p-106, 0x1.2d4941443a8b2p-328,
     0x1.2a40e1af39673p-248, 0.0, 0.0, 0.0, 0x1.318fb6efa2fc8p-913,
     0x1.4f2b5f619dd5bp-46, 0.0, 0x1.1c80e2240e4b4p-623, 0x1.7eb03f689a737p-1016, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ad38b6ea20ffp-22,
     0x1.9ec6baf417eafp-141, 0.0, 0.0, 0x1.c371a6dd7610ap-235,
     0x1.e2cc9c2e2721ap-1010, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_expd1_u10purecfma(tmp0);
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
    printf("Sleef_expd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expd1_u10purecfma bench acc %la\n", global_bench_acc);
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
