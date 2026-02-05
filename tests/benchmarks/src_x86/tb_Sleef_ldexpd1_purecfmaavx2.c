/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ldexpd1_purecfma.c --function Sleef_ldexpd1_purecfma \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary64,int32 --precision double --bench --no-embedded-bin --target \
 *     x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.b255cd7c890d3p-795, 0x1.53d1c2a966cebp-43, 0.0, 0.0, 0x1.a66c421c325bdp-970,
     0x1.79c984c259537p-134, 0x1.cb3b65969da4p-739, 0.0, 0.0, 0x1.603b9e8a44694p-1009,
     0x1.1dd8a505c95a7p-676, 0x1.c7954de9d570bp-378, 0.0, 0x1.ed62efa2854ecp-69,
     0x1.51fc1e5afca11p-506, 0x1.2a184d9f67b1dp-250, 0.0, 0.0, 0.0, 0.0,
     0x1.fa40796958dd8p-515, 0.0, 0.0, 0x1.90b677a7a2p-369, 0x1.bbd02e1aac707p-424,
     0x1.8a448a925a1bp-606, 0x1.2eafea63c7967p-345, 0x1.3ee77296d87d6p-521, 0.0,
     0x1.8176fa16470dcp-870, 0x1.503d52697d6fep-501, 0.0, 0x1.cc0eb68666a8p-451, 0.0,
     0.0, 0x1.c155338c41b59p-157, 0x1.cc9dbdc6bc2f6p-797, 0.0, 0.0, 0.0, 0.0,
     0x1.4200a0b9bb4e8p-536, 0.0, 0x1.57d282311e3a7p-242, 0.0, 0x1.e23b622a7d1edp-758,
     0x1.04d92f5a10271p-517, 0.0, 0x1.7a49effeff5f3p-909, 0.0, 0x1.de20a5ebe456ep-868,
     0.0, 0x1.f64384491ab31p-654, 0x1.ae9b7d643042ep-626, 0x1.2f262461c4c25p-85,
     0x1.8818e3670959ep-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5429181bcc125p-65, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c89d18b7abddfp-953, 0.0, 0x1.b4e1422cdf50cp-925, 0.0,
     0x1.e49586a42e393p-914, 0.0, 0.0, 0x1.b74903f9eabd8p-499, 0x1.82e18e50c6434p-455,
     0.0, 0.0, 0.0, 0x1.63cb8d9ed2a58p-242, 0x1.af6e47e870e28p-96, 0.0, 0.0,
     0x1.789fd71e921abp-512, 0.0, 0.0, 0.0, 0x1.6c6bcd292cdd9p-343,
     0x1.8b9424ab3cb04p-534, 0x1.0e92a16325514p-23, 0.0, 0.0, 0.0, 0.0,
     0x1.b685daa5033dfp-423, 0.0, 0x1.015c08d2b4f85p-978, 0x1.1984741c10daap-772,
     0x1.c82b4584d4041p-103, 0x1.7665734f82942p-526, 0x1.067d80b9a3556p-856,
     0x1.c17a4931079edp-953, 0.0, 0.0, 0x1.5a3e0a3e7e9p-264, 0x1.2b5d8f0cbe5e3p-387,
     0x1.97c5183f6469ap-596, 0x1.0dd7c1018c0dp-826, 0x1.4572316f77307p-875,
     0x1.6553afc94b28ep-508, 0.0, 0.0, 0.0, 0.0, 0x1.d46834c3df69dp-324,
     0x1.ac0691cf0ec9cp-67, 0x1.8d2d9c5f10095p-368, 0x1.99b47893ab5d7p-854,
     0x1.67ee7b796182bp-834, 0x1.43ae75fae075bp-761, 0x1.a3fcc6f728761p-735,
     0x1.1283a98c9f003p-578, 0x1.3c8aaabc47f1ep-118, 0.0, 0.0, 0x1.6109d38f1839p-384,
     0.0, 0.0, 0.0, 0x1.e3a975cc86e9dp-920, 0x1.d9472107cf8afp-529,
     0x1.412560a440602p-765, 0.0, 0.0, 0.0, 0.0, 0x1.19a39838a329cp-565,
     0x1.160c0181621bp-51, 0.0, 0.0, 0.0, 0x1.01a154064ef4fp-811, 0.0, 0.0,
     0x1.5ec9820d2a4acp-485, 0x1.c4aa57dd426a2p-313, 0x1.7fe5c11380c06p-905,
     0x1.97b36ae7375e7p-90, 0x1.e1609a873770dp-478, 0.0, 0x1.4ae594113ee8cp-834,
     0x1.a11f717b20a63p-209, 0.0, 0.0, 0x1.8169c96515bacp-106, 0.0,
     0x1.a4851357ad0e7p-396, 0x1.106343f0e6effp-514, 0.0, 0x1.d017af6476014p-741, 0.0,
     0x1.ec26e3df1b86ep-362, 0.0, 0x1.03ab2f4489f4cp-935, 0x1.8cfa4fa4fc958p-1006,
     0.0, 0.0, 0x1.d1ed71fb7f93dp-587, 0x1.75509f3f78addp-86, 0.0,
     0x1.50feaa83a4eeep-829, 0x1.e36e55d299ce2p-163, 0.0, 0x1.1e7ac7b02ca02p-891, 0.0,
     0x1.99f8bb171dd38p-259, 0x1.d1f6d827c2ee2p-267, 0x1.dfb70b68444fbp-281,
     0x1.587ce673a303ap-624, 0x1.b675588da7ebbp-286, 0x1.47bde310291f1p-532, 0.0, 0.0,
     0x1.4a6576329f2b3p-972, 0.0, 0.0, 0.0, 0x1.95aa4c8cda55bp-71, 0.0, 0.0, 0.0,
     0x1.7f0a8548402a7p-653, 0x1.b5b8d21f4b91cp-721, 0x1.8fb925fc7795dp-324,
     0x1.71a189cbd806cp-880, 0.0, 0.0, 0x1.05deb197e4838p-776, 0.0, 0.0,
     0x1.956508124d04fp-851, 0.0, 0.0, 0.0, 0x1.1f7f13fc5ce82p-876, 0.0,
     0x1.eeca2d4e39754p-467, 0.0, 0x1.e9ab023d81521p-90, 0x1.b369199146d04p-439,
     0x1.518e5369cc4cdp-555, 0.0, 0x1.f944d6185a4f6p-517, 0x1.ab69f3bd4e61ap-773, 0.0,
     0.0, 0x1.73786d7532f65p-992, 0x1.dde1eed876cdcp-839, 0x1.87d7428bd2e26p-708,
     0x1.f958410f544a7p-496, 0.0, 0x1.2ce089de8134p-753, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da54e1b14b49ap-507, 0.0, 0x1.087fac3f9053cp-985, 0x1.0155370b4ce01p-865,
     0x1.00e89b0627a3bp-800, 0.0, 0x1.6c20e33d39b7ap-186, 0.0, 0.0,
     0x1.ce7c498b58312p-487, 0.0, 0x1.6f3e9f309df24p-552, 0.0, 0.0, 0.0,
     0x1.13d9fe352cbecp-618, 0x1.300c4e0d3b2dcp-408, 0.0, 0.0, 0.0,
     0x1.8833868991766p-437, 0.0, 0.0, 0.0, 0.0, 0x1.aa0a4e1174131p-804,
     0x1.5f8145b72eb8bp-426, 0.0, 0x1.13628a0aa8083p-426, 0.0, 0x1.a48bd83551657p-896,
     0x1.ac8e2bc579126p-36, 0x1.5feed9fc85195p-264, 0.0, 0x1.217edc09ab3d8p-89, 0.0,
     0x1.2b5223c07a3fp-921, 0x1.36d08f046ebcep-98, 0x1.a4bd9edcd43b4p-296, 0.0,
     0x1.e60f6cfd3e6f5p-962, 0.0, 0.0, 0x1.8f501a5c29e48p-509, 0.0, 0.0,
     0x1.25a8f7b145811p-121, 0.0, 0.0, 0x1.5c148af4fb4a8p-448, 0x1.10e28947df3bfp-242,
     0x1.748f796e8225ap-459, 0x1.71d9f8488d1d4p-335, 0.0, 0.0, 0.0, 0.0,
     0x1.406e462a55531p-198, 0.0, 0x1.adf608bdbef93p-367, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0a3d1ef2613bdp-464, 0x1.7f7a6911dfb71p-461, 0.0, 0x1.5f373d48e1abap-937, 0.0,
     0x1.a6a855d56551bp-515, 0.0, 0.0, 0.0, 0x1.e69943812ab64p-901,
     0x1.05fbfe03e89b4p-798, 0x1.6e31f2f78df2fp-437, 0x1.5f0b6f6bdf356p-436, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f4c8aa44a8e3p-213, 0x1.a511a05dd81b8p-138, 0.0,
     0x1.188d9da87f408p-331, 0x1.1dd8fae5c1ddbp-754, 0.0, 0.0, 0x1.b63974fe9e3adp-204,
     0x1.3b34b297b8e94p-57, 0x1.768ad1544ad61p-352, 0x1.51bcb6adf3219p-65, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2fd842885fa72p-674, 0x1.5ec31b5d5a1c5p-37,
     0x1.e6e4b1f6fa2cdp-691, 0x1.0588cf5a219a7p-228, 0.0, 0x1.907955369813p-488, 0.0,
     0.0, 0x1.ed3eb1562e1afp-163, 0x1.5c63b026b805ep-27, 0.0, 0.0,
     0x1.d32fdbc0d4e7ep-431, 0x1.387dc5edc4b97p-929, 0x1.53a46834e5aa2p-299,
     0x1.1755e3b31f168p-830, 0.0, 0.0, 0.0, 0x1.70efb3e2adb6bp-229, 0.0,
     0x1.c7bc7cca8a1a1p-549, 0.0, 0x1.a024f08c0d356p-30, 0x1.d7cf3aa73ccap-926,
     0x1.c25fdd8199dfcp-91, 0.0, 0x1.85c55d3a43818p-993, 0x1.b5d9689a968p-865,
     0x1.e427fa9c5d996p-684, 0.0, 0.0, 0x1.a8cdff67bd17fp-456, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2b6a454a11637p-111, 0.0, 0.0, 0x1.e225ac2a3661cp-359,
     0x1.402d417b99dfcp-73, 0x1.70f64deb66333p-983, 0x1.bd451d2236dd6p-968,
     0x1.d192963d1a7b6p-38, 0x1.10c5d757be7b7p-898, 0.0, 0x1.ae0a9082f6cccp-473, 0.0,
     0x1.d1c86e3eafa36p-271, 0.0, 0x1.0205252f8b707p-983, 0.0, 0.0,
     0x1.a48b417616b31p-90, 0x1.d7d137a6c7ab1p-672, 0x1.9530b94762e0fp-904,
     0x1.318d4e407becbp-972, 0x1.2f68afe1335e5p-666, 0x1.bfedc084c0026p-882,
     0x1.2f52cf49edd4ap-202, 0x1.f9eb767eb4c97p-452, 0.0, 0x1.9e834c17e0f08p-6,
     0x1.42ec35dcbe801p-187, 0x1.f4d1be61a873ep-666, 0.0, 0x1.6de4ae7b1b9ffp-978, 0.0,
     0.0, 0x1.e29b848fa1decp-513, 0x1.2bb2db632f4ddp-200, 0x1.443fea63379b4p-896,
     0x1.bd90cb2e16f11p-129, 0.0, 0.0, 0x1.5368a09878f39p-175, 0x1.384a0d9108fbep-533,
     0x1.3fc4232f46381p-75, 0.0, 0x1.cd0a5745ed41p-243, 0x1.dec39b7a706ap-274, 0.0,
     0x1.955406552463ep-72, 0.0, 0.0, 0.0, 0.0, 0x1.e15f469f44b84p-361, 0.0,
     0x1.fb8719ed48882p-399, 0.0, 0.0, 0x1.622af050f2d95p-449, 0.0, 0.0, 0.0, 0.0,
     0x1.471845e817445p-553, 0.0, 0.0, 0.0, 0.0, 0x1.7d45e492a08bdp-693,
     0x1.4e1388f46ed87p-389, 0.0, 0.0, 0.0, 0x1.c62898601c42fp-577,
     0x1.35371bae2c2cbp-440, 0.0, 0x1.d405475a1b8a8p-806, 0.0, 0.0, 0.0,
     0x1.6622b2a84832p-541, 0x1.27ab9872611fp-275, 0x1.59fd2b95cf1a8p-756, 0.0,
     0x1.45eddcdb92c63p-404, 0x1.5c11783262373p-260, 0x1.47f8e30567a45p-158,
     0x1.06bc010b41dafp-933, 0x1.4a8b98dc530a3p-144, 0.0, 0.0, 0.0,
     0x1.56f75c7a687ddp-114, 0.0, 0.0, 0x1.54664ec1baed7p-135,
     0x1.2970f969dfb38p-1002, 0x1.06c9cc9e51bd5p-677, 0x1.98506942bcb1fp-699, 0.0,
     0.0, 0x1.16bdf88d9bf84p-804, 0.0, 0x1.afe5b8636295ep-124, 0.0, 0.0,
     0x1.8b07960fd2b1fp-575, 0.0, 0.0, 0.0, 0.0, 0x1.8aae3cf822979p-831, 0.0,
     0x1.b7e5b4693ccd2p-896, 0x1.f068671df0c03p-816, 0.0, 0x1.a1128ad7cef54p-779, 0.0,
     0x1.d881de0ae72e4p-598, 0x1.f3caa5a11b963p-757, 0x1.d1a59e76f61e1p-479,
     0x1.7f4150fe96f8cp-231, 0.0, 0.0, 0.0, 0x1.7d67e723d218ap-772,
     0x1.f877f6c0a665dp-227, 0x1.698bdf24ebf27p-471, 0x1.99ed976d398p-127, 0.0,
     0x1.212128d13159cp-171, 0.0, 0.0, 0.0, 0x1.50531f651b204p-1001,
     0x1.f446d0895809p-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5995f0bfaa9fdp-135,
     0x1.7f9c67fb440bep-364, 0.0, 0x1.1ac931123b8b4p-617, 0.0, 0x1.f2d759f24adafp-611,
     0x1.81c731f48f7b8p-996, 0.0, 0x1.e7c4de902a9bdp-920, 0.0, 0x1.1051ce90f36d9p-348,
     0.0, 0.0, 0.0, 0x1.94ee4f372f844p-487, 0x1.6c46862dbdd8ap-867, 0.0, 0.0,
     0x1.a7b925be2b0bfp-32, 0x1.72dbbf3b5ae05p-357, 0x1.094f36572afb1p-900, 0.0,
     0x1.67df5fa70dc52p-706, 0x1.5ef8bb8db8644p-912, 0x1.6101ea9d52a58p-775,
     0x1.93b0ef9cd97bap-148, 0.0, 0x1.957a93765b5e5p-282, 0x1.f5743bdfc67afp-597,
     0x1.414833f92c33ap-573, 0x1.2a58e1b1c0aebp-395, 0.0, 0x1.ffad3363e67c1p-592, 0.0,
     0.0, 0x1.093631408a596p-224, 0.0, 0.0, 0x1.da27ebf2bde3ep-374,
     0x1.403db7381c6d2p-338, 0.0, 0x1.38ae15ff6882ap-368, 0x1.e18c654b78ac9p-879,
     0x1.52709730554afp-791, 0.0, 0.0, 0x1.002f327a0d276p-231, 0x1.077c530aa9796p-490,
     0.0, 0.0, 0x1.580de6b8c2359p-60, 0x1.3d65b852f3c1ap-754, 0x1.bc05b7c812d8ep-902,
     0.0, 0x1.0aa8ce5692236p-582, 0.0, 0.0, 0x1.d511296f1c641p-416,
     0x1.f466b78026f19p-224, 0x1.56cbe8323d0c1p-864, 0.0, 0x1.3519c52ca40eap-254,
     0x1.351d4607aa284p-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5887497cb7f07p-184, 0x1.db1fdbde27f1p-774, 0.0, 0.0, 0x1.7442dba34584ap-188,
     0.0, 0x1.d19877bc36495p-678, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52a063f8b4f5ep-591, 0.0, 0.0, 0x1.22a3e2328c188p-496, 0.0, 0.0,
     0x1.a9543ff527dd9p-582, 0.0, 0.0, 0.0, 0.0, 0x1.f1a256a11e7d9p-26, 0.0, 0.0, 0.0,
     0x1.b70c58f1bcde3p-382, 0x1.e7d88c699286dp-873, 0.0, 0x1.5da532ce114dep-270,
     0x1.368b38e7cdc61p-909, 0x1.f4916db67e11p-658, 0x1.09809c1a14647p-681,
     0x1.386ef7f4ec173p-199, 0.0, 0.0, 0x1.f992e7472e11fp-53, 0x1.515bb0fd8d33fp-479,
     0x1.b1f9cd584a84p-327, 0x1.88951f3e24b08p-892, 0x1.1f80f8317e35ap-855, 0.0,
     0x1.a842866a41871p-752, 0.0, 0x1.544da8d97627p-161, 0.0, 0.0, 0.0,
     0x1.63322609a6487p-419, 0.0, 0x1.9b5d529928444p-966, 0x1.0ac7d54ec0aabp-496,
     0x1.46723a70691cdp-437, 0.0, 0.0, 0x1.652390c524f53p-815, 0x1.805aec98fb52p-951,
     0.0, 0x1.f4683bed7856dp-330, 0x1.96adab11643eep-318, 0x1.5bb703c0ae92p-248,
     0x1.237046daa06b2p-943, 0.0, 0x1.94647be04847p-785, 0.0, 0x1.9f9bc498a7bf5p-976,
     0.0, 0x1.13679877ad20ap-604, 0.0, 0.0, 0x1.a894c0db46f99p-217,
     0x1.a1f4f4ca7c4afp-896, 0.0, 0x1.d373de631a446p-758, 0x1.922a314ec3438p-37, 0.0,
     0x1.22dcf60cc9d99p-1006, 0.0, 0x1.5a46db1f2799ep-112, 0x1.a84643d3b3c0ep-242,
     0.0, 0x1.2c5d39c8fb7eap-883, 0x1.b1e8a2f8e7038p-802, 0.0, 0.0, 0.0,
     0x1.9ae2fb51ca89dp-588, 0.0, 0.0, 0x1.83f1504b78a2bp-179, 0.0, 0.0, 0.0, 0.0,
     0x1.3b8d22292d948p-878, 0.0, 0x1.848cb4d393415p-704, 0x1.8711d647224c4p-987,
     0x1.911175b2f9e61p-752, 0x1.8c0e54a548256p-629, 0x1.02429b23cd996p-812,
     0x1.2f0ebcc6b6ff9p-724, 0x1.c76d80731b35ep-729, 0.0, 0.0, 0.0,
     0x1.01e837aefc794p-267, 0x1.b656f8c62e17ap-335, 0x1.fbed71d859303p-842,
     0x1.b403d15936d71p-844, 0x1.64841a5cefc7dp-893, 0x1.ce9abcf1d938ap-432,
     0x1.cbc014227ae5fp-94, 0.0, 0x1.8203d203ae276p-116, 0.0, 0.0,
     0x1.3981ba45294abp-653, 0x1.cfc2902eb56fdp-388, 0.0, 0.0, 0.0,
     0x1.4ac7e391e8969p-775, 0.0, 0x1.d68585e291266p-428, 0x1.59f6e336984fbp-378,
     0x1.4ccbf4dee1886p-579, 0.0, 0.0, 0x1.2a9334d1a7037p-694, 0.0, 0.0,
     0x1.07d9b5866d017p-825, 0x1.a253df629b03ep-286, 0.0, 0x1.eb0b84eb8693dp-474, 0.0,
     0x1.9827075dea3bbp-294, 0.0, 0.0, 0x1.06bcf6ea1021dp-633, 0x1.e9ef33dc48d96p-520,
     0x1.ce8ad37f5354ep-900, 0.0, 0x1.6fa7655fa67dp-764, 0x1.bfa117c66a3a8p-999, 0.0,
     0x1.30c6e1268addep-412, 0x1.c6c2b1a733f28p-418, 0x1.f2c17f5788a3dp-832,
     0x1.3e2a232bda2f1p-867, 0x1.5145070d9ecb5p-109, 0x1.b95e15c51a5e2p-521, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0ab43d6a658cp-783,
     0x1.5d19eac369028p-173, 0x1.f5d1127ef08fdp-343, 0.0, 0.0, 0x1.04fa023c2346p-815,
     0x1.66c7bccd8605ep-35, 0.0, 0.0, 0x1.fa3ae8faa4e4fp-730, 0x1.65d47094c95e6p-269,
     0.0, 0.0, 0x1.384163410ac21p-786, 0.0, 0.0, 0x1.6161711d4bf9ep-755,
     0x1.cee7b7e05a64bp-449, 0x1.0fc6d286493ccp-232, 0x1.e754b91bf4f14p-122, 0.0,
     0x1.f0c03c1ab043p-324, 0.0, 0x1.88d74fc541e3p-407, 0x1.bafe7a6698c95p-931,
     0x1.a24dfeaa7d90ep-839, 0.0, 0x1.73e80172ca973p-837, 0.0, 0x1.8cf80297d59e8p-265,
     0x1.cb6087978df5p-241, 0.0, 0x1.1ef9a41c77aa1p-535, 0x1.661b0748b69dcp-708,
     0x1.8f42aa54ff106p-578, 0x1.8a9e09d36179p-551, 0.0, 0.0, 0.0, 0.0,
     0x1.87f4ac503508fp-211, 0.0, 0x1.e6501ddd7ba59p-734, 0x1.9e12ef237e1d6p-116, 0.0,
     0x1.90277bbcf2484p-364, 0x1.8c48678397d5cp-1005, 0x1.d394c8f4b5ed2p-967,
     0x1.5e06672d8622ep-894, 0x1.14c14f49382a4p-302, 0x1.30d7e8aaae00dp-729, 0.0,
     0x1.70596319c19bcp-19, 0x1.b291aa0bdd20ep-700, 0.0, 0.0, 0.0, 0.0,
     0x1.79b2318912b0ap-50, 0x1.b72853ce67db9p-511, 0x1.ccd2f37138a15p-896,
     0x1.b7fb516053c53p-749, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c215f30bfd386p-260,
     0.0, 0x1.9c9f71ce7c7b7p-705, 0.0, 0x1.f52319bab3794p-413, 0x1.4f1e398d9baeap-593,
     0.0, 0x1.6af67fb345aa5p-199, 0x1.65e93e56aa172p-775, 0.0, 0.0,
     0x1.4ddab5aa04f1cp-165, 0x1.fbffc1eefaad9p-957, 0.0, 0.0, 0x1.d0ea8b0c1ef41p-553,
     0.0, 0x1.4622a84d21041p-963, 0.0, 0.0, 0.0, 0x1.86080b97ec3cfp-281, 0.0, 0.0,
     0x1.1edcfac8d308dp-726, 0x1.01b01a294c2a2p-440, 0.0, 0.0, 0x1.dea367fcb1844p-831,
     0.0, 0.0, 0x1.47ac4c8ae3c6fp-847, 0x1.24c23a1c4740cp-593, 0x1.fb33538727426p-797,
     0.0, 0x1.edc0f2b305e83p-137, 0.0, 0x1.d34b7d5abac28p-964, 0.0,
     0x1.aaecc615ddc79p-993, 0.0, 0.0, 0x1.c57c0fc7cb6a2p-157, 0x1.6b32a4c1ee98fp-351,
     0x1.6eb3e0ff3a5a8p-981, 0x1.4f15a2802b053p-469, 0.0, 0x1.bc3ba8f7c7d1p-38, 0.0,
     0.0, 0.0, 0.0, 0x1.ec954126a899ap-154, 0.0, 0.0, 0.0, 0x1.e17a75ea89c66p-793,
     0x1.9795386bb6d6dp-666, 0x1.4dc60249902c3p-673, 0x1.0df63b21c92e8p-577, 0.0, 0.0,
     0x1.f953b80f87e2p-899, 0.0, 0x1.9f07ae0c84c7ep-222, 0.0, 0.0,
     0x1.9d4b2bc4f4967p-889, 0.0, 0x1.d2a2083a16241p-668, 0.0, 0x1.ffa0be6e30721p-353,
     0.0, 0x1.4e4ec1e6f0c98p-378, 0x1.438f9f6d0b1c5p-789, 0.0, 0x1.a922f047c58f4p-532,
     0x1.f9e0c4189d13ap-116, 0.0, 0x1.9a8fd189b9129p-84, 0x1.e18a93ca0625dp-123,
     0x1.f7f0ab1afde84p-453, 0x1.f5fad51d76656p-41, 0.0, 0.0, 0x1.cd3dce7452dd1p-793,
     0x1.233e2de84b237p-373, 0.0, 0x1.6d3fc79a4f9ep-498, 0.0, 0x1.d655f9e82fc4ap-339,
     0x1.6cf48301bd376p-838, 0.0, 0.0, 0x1.81afb4da3d7bbp-286, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4b160c8ff010fp-964, 0x1.caab431715bf6p-209, 0x1.ef98bb6c074c4p-145, 0.0,
     0.0, 0.0, 0.0, 0x1.a123ba4a7d3ep-572, 0.0, 0.0, 0.0, 0x1.fbab59d8d47fep-318,
     0x1.ee5953f0572bep-698, 0x1.7933e279d9ae7p-194, 0x1.ecf38d757d634p-658,
     0x1.c163265d6673dp-981, 0.0, 0.0, 0x1.44eafaaa120cbp-1017, 0x1.8ccd9d4957adp-700,
     0.0, 0x1.40d3f036723c7p-471, 0.0, 0.0, 0.0, 0x1.5e2dc17b737fep-136,
     0x1.e84142b5c13f3p-624, 0x1.e1384d5416297p-190, 0.0, 0x1.95d930229a851p-1010,
     0x1.9712ae2ff826cp-558, 0x1.9faff9a0bb64fp-900, 0.0, 0.0, 0.0,
     0x1.aedece4b79871p-476, 0.0, 0.0, 0x1.c5fdeaa858ce8p-564, 0x1.3d359acb4e7edp-330,
     0x1.fb9abf37f8b35p-412, 0.0, 0x1.414245c71c681p-137, 0.0, 0x1.2d1d50ebd93cbp-425,
     0x1.08a4fe7552aa7p-803, 0.0, 0.0, 0.0, 0x1.078dce53f0f7ep-288, 0.0,
     0x1.ab89a49dcf951p-737, 0.0, 0x1.2723758eb6697p-51, 0.0, 0x1.4583d4e33db0bp-82,
     0.0, 0.0, 0.0, 0x1.f0b0260ab4602p-806, 0.0, 0x1.f44a7282ccd0fp-621, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.88d52cfdc3c13p-329, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7adef01f632ap-637, 0x1.9bcb007e21f43p-294, 0x1.2eb2132603254p-318, 0.0,
     0x1.d1a90fba6ef0bp-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a2980a3ce05p-725, 0.0,
     0.0, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1001]  = {
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1)
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
            int32_t tmp1;
            double tmp2;
            double tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_ldexpd1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_ldexpd1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ldexpd1_purecfma bench acc %la\n", global_bench_acc);
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
