/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind1_u35purecfma.c --function \
 *     Sleef_finz_sind1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.a1058376f5384p-916, 0.0, 0.0, 0.0, 0x1.4300a4428764ap-529, 0.0,
     0.0, 0.0, 0x1.6743452370951p-732, 0x1.3dcc13d4edabep-191, 0x1.c309f1f9e80c1p-723,
     0x1.007831c64b9cdp-396, 0x1.14dca76c59603p-480, 0.0, 0.0, 0.0,
     0x1.89e89e2522ff8p-490, 0.0, 0.0, 0.0, 0x1.7cbe44dff3517p-272, 0.0, 0.0,
     0x1.5c30f4b2ee1abp-611, 0.0, 0x1.858c52b1afb43p-320, 0.0, 0x1.2181928bea3f7p-966,
     0.0, 0x1.462711bfa928p-123, 0x1.c95998499e531p-1011, 0x1.e9b98916bdc35p-659,
     0x1.cc4be03d7444ap-113, 0x1.c6f11e2226cf5p-150, 0.0, 0.0, 0x1.fee84828f014fp-105,
     0.0, 0.0, 0x1.81bed36053ae8p-574, 0.0, 0x1.947a1f443a4abp-816, 0.0,
     0x1.7b62ac7b51d5ep-479, 0x1.7ffa990bebf86p-852, 0x1.f74bac5eb4887p-807, 0.0, 0.0,
     0x1.d682f3cd1fbccp-252, 0x1.f52bdd4ccbc4dp-143, 0x1.9e3dfe237bdafp-60,
     0x1.38fe972881321p-538, 0x1.3f11e76c78832p-179, 0.0, 0x1.7582c1d4dbcc6p-124, 0.0,
     0.0, 0.0, 0x1.06d2f1f39d797p-828, 0.0, 0x1.e313cdeaf22b1p-857, 0.0,
     0x1.3d4ae7a4dd5ep-345, 0.0, 0x1.616df71e2e2fep-853, 0.0, 0x1.bde122c30d79fp-936,
     0.0, 0x1.466486f82538ep-476, 0.0, 0.0, 0.0, 0x1.b0084a353f9e6p-712,
     0x1.76e19d663abe8p-251, 0.0, 0x1.61c79084ef296p-542, 0.0, 0.0, 0.0,
     0x1.1f46ac6c48ebep-761, 0.0, 0x1.06efe11a08af3p-130, 0.0, 0x1.d25fc6afef1c7p-87,
     0.0, 0x1.38f56e77dc65fp-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.773d7c69810c9p-743,
     0.0, 0x1.449569a62d21cp-178, 0.0, 0x1.7aac72166fd39p-1005, 0.0, 0.0,
     0x1.032ab12179eddp-440, 0x1.dd902a5e42dccp-129, 0x1.2c1eec86d0357p-718,
     0x1.b84ede07cb723p-674, 0.0, 0x1.3c8634628c6acp-9, 0.0, 0.0, 0.0,
     0x1.72144974014dp-792, 0x1.fc2a19c8115a7p-531, 0x1.fb14d55c27b33p-407,
     0x1.c67dcd864f70cp-235, 0.0, 0x1.491e222a2d34dp-523, 0.0, 0.0, 0.0,
     0x1.fe3c99ae8d0ebp-225, 0x1.eee0cfd020dfp-929, 0x1.9e1a7f9aca4d1p-505,
     0x1.d17481ecab4acp-736, 0x1.9eeb3ac0030bfp-681, 0.0, 0x1.5f00e07d61bd4p-603,
     0x1.e3bde1f9e4887p-413, 0.0, 0.0, 0.0, 0x1.d431a95218992p-172, 0.0, 0.0, 0.0,
     0x1.a42d690ce36b8p-809, 0.0, 0.0, 0x1.72c4719c3d4cp-472, 0x1.328e3e2398189p-847,
     0x1.bbb72f0473ff3p-536, 0x1.640da330afd5bp-174, 0x1.f4dc3a75155e1p-816, 0.0,
     0x1.f4ef530a3ec69p-732, 0.0, 0x1.83a9bbf96bbdfp-327, 0.0, 0.0,
     0x1.e4c6b466e37f1p-560, 0x1.0b30f94b018bbp-124, 0x1.3b14ff4a188cdp-928,
     0x1.f9ae6075ec282p-794, 0x1.d8242f2793714p-406, 0x1.c4694438c33d7p-45, 0.0,
     0x1.e3cb33dce9427p-81, 0x1.741f6246a6e87p-948, 0.0, 0x1.dea8f8fa2a015p-722,
     0x1.f1b40f00b9985p-192, 0x1.f0a95c1b9f841p-173, 0x1.c6b4c233c9932p-1022,
     0x1.b3f2d8c47a769p-485, 0.0, 0.0, 0x1.dc3bb8202d0dap-47, 0x1.40b31ce99df82p-678,
     0.0, 0x1.55b48545979bcp-533, 0x1.247ba23a81e7dp-682, 0.0, 0.0,
     0x1.c5c3a18252b07p-294, 0.0, 0x1.1ea4346bcb636p-858, 0.0, 0.0,
     0x1.9b3425d1ce9a3p-8, 0.0, 0x1.96f375b109b4cp-904, 0.0, 0x1.2f511ba07af01p-245,
     0x1.27af591c0d4c6p-228, 0.0, 0.0, 0x1.33cdbd1e72001p-955, 0x1.0e79b6fb3ecc3p-425,
     0.0, 0.0, 0x1.ceec36e50d0dp-875, 0x1.d16c288fd8e34p-351, 0x1.679bdff8c0391p-643,
     0x1.fd5897b59a2ebp-658, 0x1.e95da9f49ac3cp-352, 0x1.04d9c91bc8fb4p-72,
     0x1.5ff18fb34a6f5p-602, 0x1.99c9720d0e127p-289, 0x1.c08759589cf07p-880,
     0x1.f8a3608921e59p-403, 0x1.eb9287b1748d1p-959, 0x1.c450e0df20d5dp-238,
     0x1.842d78fe8cc1dp-307, 0.0, 0.0, 0x1.8433fdad74dfap-66, 0.0, 0.0,
     0x1.e1b559789e6b7p-278, 0.0, 0.0, 0.0, 0x1.0dcf46a9ca486p-598, 0.0,
     0x1.5029b5863f49bp-807, 0x1.26063d353d056p-515, 0x1.e43a839227ba6p-238, 0.0,
     0x1.22a2a0c58afb5p-944, 0x1.877a791d3a37ap-1022, 0.0, 0x1.3aefa4f9a6c8p-238, 0.0,
     0x1.a2fbc34665a72p-1019, 0x1.ca94fdb559d8ep-1013, 0.0, 0x1.8b55a34354e2cp-474,
     0x1.112fe066a68e1p-754, 0x1.55a1ad21ced58p-753, 0x1.ab4d6abdfecbp-176,
     0x1.a32acdc8a77cep-343, 0.0, 0x1.bf977a8a24a71p-823, 0.0, 0.0,
     0x1.2e2a7fa099cc4p-924, 0.0, 0x1.3032534b6e50bp-679, 0x1.c8e3de97bb4fep-581,
     0x1.4a6a9fa9d76bep-304, 0.0, 0x1.b39824cd7b846p-624, 0x1.7c8d53e705d9bp-641,
     0x1.c3d59d45ca872p-617, 0x1.c0d510fd8ee55p-624, 0.0, 0.0, 0x1.6be57a92c4adbp-337,
     0x1.a7eb4d78b7e15p-181, 0.0, 0.0, 0.0, 0.0, 0x1.921b21a386e8dp-200,
     0x1.e226987cee241p-5, 0.0, 0x1.d4ccc5cd883fbp-274, 0x1.0dd54ca96e592p-559, 0.0,
     0x1.4247610dc35ep-999, 0x1.5565a4b9863cp-632, 0.0, 0x1.ed7569075a52ep-436, 0.0,
     0.0, 0x1.acf65a8de7a5cp-94, 0x1.090bc76db470dp-1001, 0x1.98310b7202cbbp-642,
     0x1.27c712caf4bf4p-760, 0.0, 0.0, 0x1.6d855e2ca0929p-410, 0x1.565f1f26b8b19p-995,
     0.0, 0.0, 0.0, 0x1.f07730f178c05p-588, 0.0, 0.0, 0x1.60b7d70ac324ap-631,
     0x1.b23c2bd351b7dp-304, 0.0, 0x1.9e1181ec34a74p-345, 0x1.8a0425e9f06dap-675, 0.0,
     0.0, 0x1.1ba51dca26537p-592, 0.0, 0x1.a7ed9f7bb468cp-246, 0x1.cdd86bf062ae6p-390,
     0.0, 0x1.fcb565f8e3d4ap-521, 0.0, 0x1.6cd679736fd25p-551, 0x1.024324c031477p-448,
     0x1.effa3e59c82cep-564, 0x1.52e6dba56376cp-1013, 0x1.583039bb23f6dp-844,
     0x1.4cbe6cc27c97cp-645, 0x1.64d585cad42ecp-272, 0x1.b9a84f005ae2ap-923, 0.0, 0.0,
     0x1.fd182ba4b4a53p-146, 0x1.b85a5a7428b18p-175, 0x1.c600b7ce5ba67p-195, 0.0,
     0x1.ff4df3683ee3cp-494, 0.0, 0x1.0e72f132cd2c7p-601, 0.0, 0.0,
     0x1.89952dfd3a9d5p-307, 0.0, 0x1.413bee6773479p-332, 0x1.c6dbea6d21d23p-155, 0.0,
     0x1.eaaf1196f5c99p-449, 0x1.140e7c7572ca6p-944, 0x1.1bdcecfe1792p-290,
     0x1.1a7a89b689aa9p-339, 0.0, 0x1.da6488fa21867p-755, 0.0, 0.0,
     0x1.e4dc4c426ae7bp-668, 0.0, 0.0, 0x1.7f87670744de2p-237, 0x1.6a1a7ac1c4ce7p-983,
     0.0, 0x1.2247a0d625a1ep-269, 0x1.17530c257cf9bp-18, 0.0, 0.0,
     0x1.e2d4d6018063bp-629, 0x1.792be79d9a636p-472, 0x1.e423014362d62p-625,
     0x1.40127076d410fp-470, 0.0, 0.0, 0x1.e6095cf8b699ap-608, 0.0,
     0x1.f353f7eb7c92ap-678, 0.0, 0x1.e529eed9474f1p-806, 0.0, 0x1.693c850e2d9fcp-844,
     0x1.1e9e50248366ep-69, 0x1.ffd4fcbbb7d43p-803, 0.0, 0x1.4c914ec780761p-395, 0.0,
     0x1.3f880db1dacbap-898, 0x1.6fef680b0ff4cp-826, 0.0, 0x1.bde6d0e0b1ccbp-61, 0.0,
     0x1.0f84bb1671c86p-993, 0.0, 0.0, 0x1.8b6b8c4c65b7dp-479, 0x1.24b0a64a932f5p-870,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0c476ae50f85p-238, 0.0, 0x1.0c3bbafa21e6cp-10, 0.0,
     0.0, 0x1.a6388c9b52c05p-65, 0x1.6f3d52e5f58p-949, 0x1.a54d00c3459b9p-13, 0.0,
     0.0, 0.0, 0x1.165356f70c418p-996, 0x1.71df191a5a809p-29, 0.0, 0.0, 0.0,
     0x1.faaae758b565bp-105, 0x1.6eef3fb6666f8p-119, 0x1.b51051588280cp-204, 0.0,
     0x1.e903c37ad2ec5p-365, 0.0, 0x1.e2a1528834cb2p-441, 0x1.db6de662d5b5p-453,
     0x1.2405687f5d17ep-973, 0.0, 0.0, 0x1.b0fe93765c566p-166, 0x1.d9b52365ee171p-371,
     0.0, 0.0, 0x1.cddd595ef5e92p-551, 0x1.00764c9558facp-206, 0x1.3b361d7cb08bfp-287,
     0.0, 0x1.5d096137ea3a6p-911, 0x1.3060897b808d4p-559, 0x1.83fbe34dfb589p-831,
     0x1.65096b8ce90a7p-208, 0.0, 0.0, 0x1.d662cc29c75e9p-1009, 0.0,
     0x1.75b545ce29997p-563, 0.0, 0.0, 0.0, 0.0, 0x1.b9eb56993638dp-828,
     0x1.b08b3f5aa2e08p-339, 0x1.dbb57b71231c3p-148, 0x1.12527bb9baf36p-618, 0.0, 0.0,
     0x1.a1e45f1f15bffp-809, 0.0, 0.0, 0.0, 0x1.6e00cf83a99fcp-681,
     0x1.c0e2933c9faa2p-19, 0.0, 0x1.284c79e3fb24ap-366, 0x1.9f5747b41e935p-28, 0.0,
     0.0, 0.0, 0x1.312e45278d925p-149, 0x1.6c30b2a0000eep-432, 0x1.92c46e3a2482ap-94,
     0x1.0b48cacbd3b8p-564, 0x1.ac98106a2ff9bp-614, 0x1.8039f97737d62p-573,
     0x1.8f18e269a58b2p-987, 0.0, 0x1.159c07e420395p-939, 0.0, 0.0, 0.0,
     0x1.299da198d4394p-293, 0.0, 0.0, 0.0, 0.0, 0x1.588ac15e13bf4p-660,
     0x1.a87e812a06b6ap-260, 0x1.4fe4ea341ff83p-599, 0x1.0935b0f3c72efp-445,
     0x1.d22523dfda957p-529, 0x1.b0cbbcfc12649p-874, 0x1.d73ee15a8d8e2p-948, 0.0,
     0x1.cee0a8614af34p-314, 0.0, 0.0, 0x1.2fda1010a4c5cp-140, 0.0,
     0x1.08f93daafea11p-571, 0x1.94ea780f8c8bep-906, 0x1.13504e687484bp-571,
     0x1.676370819dabap-431, 0x1.e9f1e08b0c521p-743, 0.0, 0.0, 0.0,
     0x1.6dae9f5531b18p-938, 0x1.0ceb862e3d7a4p-828, 0x1.1a6c16e987f2cp-980,
     0x1.7a3caec2c60acp-412, 0.0, 0.0, 0x1.4e690b6166561p-1016, 0.0,
     0x1.bd62bdf1e2ba7p-872, 0.0, 0.0, 0x1.318ad68a2bc5fp-546, 0x1.e87e9ba009cfap-75,
     0.0, 0.0, 0.0, 0x1.f963560214331p-194, 0x1.047d4d987e31p-338, 0.0,
     0x1.5d10a8f2198fbp-591, 0x1.d39a849258ac4p-43, 0.0, 0x1.61ccfb2dc5d6dp-218, 0.0,
     0x1.227ed7e921ec9p-801, 0x1.9f07fec880764p-319, 0x1.a901acacd91b2p-768, 0.0, 0.0,
     0x1.938bfa7b84cb5p-766, 0x1.a9306d953524dp-787, 0x1.ad9fa8cae947ep-108, 0.0,
     0x1.963e7949e1eaep-256, 0.0, 0.0, 0.0, 0.0, 0x1.96011b4f27fc1p-230,
     0x1.ed85fa98f3bedp-663, 0.0, 0.0, 0.0, 0.0, 0x1.0de6ef3dae4e4p-815, 0.0, 0.0,
     0x1.c3fafc3f1c311p-47, 0.0, 0.0, 0x1.586928e26f7a2p-185, 0.0,
     0x1.21d750f83c02dp-473, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d21d15653d02p-77,
     0.0, 0x1.d82d02c9d964bp-200, 0.0, 0.0, 0x1.a8136729e3ce7p-457,
     0x1.46041b753ecf3p-148, 0.0, 0x1.141d18b6adff8p-787, 0.0, 0x1.6f90098f425bcp-55,
     0.0, 0x1.48b2cffbf3ca9p-1, 0x1.9dc860959a995p-524, 0x1.82188c8a3d221p-214,
     0x1.61fa9fef67d4dp-1022, 0x1.33079499124c5p-813, 0.0, 0x1.76fb08171658ep-351,
     0.0, 0x1.e5d4fd7fe7743p-280, 0.0, 0.0, 0x1.127fc66c8e309p-655, 0.0,
     0x1.244a4373f0ff9p-804, 0x1.d2ba79a1cc114p-560, 0x1.cf291f5e6c57p-13, 0.0,
     0x1.8db57244e5a9ep-285, 0x1.2580243652797p-174, 0.0, 0x1.d840a2c3436a6p-26, 0.0,
     0.0, 0x1.a860d382fccafp-26, 0x1.e5eb4bbff39b1p-893, 0x1.3c596e8580c2dp-9,
     0x1.5d280bd21d7c5p-593, 0x1.3ab400b4be31cp-941, 0x1.850257b75a113p-627,
     0x1.948336cbaffa3p-511, 0x1.8ce67e8a300dbp-594, 0.0, 0x1.511db243ed0abp-813, 0.0,
     0x1.eb28102118693p-529, 0.0, 0x1.e99fe9156f617p-987, 0x1.0624a05a5451fp-1006,
     0x1.4714d4ad6f53ap-686, 0.0, 0.0, 0x1.8a148fb3bf65fp-116, 0.0,
     0x1.ab4f716396e3ep-900, 0.0, 0x1.0bcf315bd3628p-567, 0x1.8df9b69bc2f46p-128,
     0x1.e93067cf0c18ep-828, 0x1.d4dfd07eefa04p-440, 0.0, 0.0, 0x1.f541a8963d9dcp-295,
     0x1.fd322f8c1adfcp-66, 0x1.31e157d98d18ep-763, 0x1.49cae41253619p-688,
     0x1.5a267e277b6cp-566, 0.0, 0x1.8b48b7ef19172p-304, 0x1.8026363f1cc43p-109, 0.0,
     0.0, 0x1.e47a1e037fcc5p-201, 0.0, 0x1.ae85d26a7a041p-325, 0x1.3621bd7b2d95p-547,
     0.0, 0x1.2b6a28936c455p-319, 0x1.74c7202cf2a53p-276, 0x1.64bc9dcd95b2dp-1012,
     0x1.cac5a002381cap-363, 0x1.e9fe35fff01bbp-204, 0.0, 0x1.e51bbdfb373cdp-668,
     0x1.853ef4aa1327cp-527, 0.0, 0.0, 0.0, 0x1.8e8dad19c9fc7p-877,
     0x1.4473a0d090f5ep-226, 0.0, 0.0, 0x1.51a6851e79537p-849, 0.0,
     0x1.728b150cb5f6p-186, 0x1.2de5ca7cfc8a9p-371, 0x1.8e01b7a83e0cfp-326, 0.0, 0.0,
     0x1.7d495cf54a89ep-681, 0x1.c72abdd337a8bp-939, 0x1.ebfc6c4dc0f8bp-257, 0.0, 0.0,
     0.0, 0x1.a925e17a11fd5p-601, 0x1.2fc8d6e842eddp-309, 0x1.6371f7166571dp-172, 0.0,
     0x1.50455eb9e1a8ep-865, 0x1.fc8b86c1199bdp-987, 0x1.6533e16c24c69p-848,
     0x1.2631756499df5p-966, 0x1.d7e11045cd588p-339, 0x1.e12503cee1325p-611,
     0x1.c9efbbe3e481ep-102, 0x1.14f8da3523664p-758, 0.0, 0x1.a65699b5bb19ep-120, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4227f2313bf9p-956, 0x1.48f8e183a2f99p-1003, 0.0,
     0.0, 0x1.f0b6264614ad9p-307, 0x1.56667ccd695fep-999, 0x1.72e4eec7f882dp-74,
     0x1.0e765da091894p-259, 0x1.ce02d46873c95p-159, 0x1.c47f32fe569c4p-329, 0.0,
     0x1.19cda5d73e464p-772, 0.0, 0x1.bb84eaa5ed63cp-958, 0.0, 0x1.69fd6b399280ap-417,
     0.0, 0.0, 0.0, 0x1.999b239e8e60ap-319, 0.0, 0.0, 0.0, 0x1.b197805596695p-1015,
     0.0, 0x1.1e95e6274bf2p-823, 0x1.c86c9471f5f72p-148, 0.0, 0.0,
     0x1.18d23294e4d4fp-518, 0x1.596a722148d35p-538, 0x1.1ba452fdae4b1p-411, 0.0, 0.0,
     0.0, 0x1.e51c6b8b1c117p-813, 0x1.5a0e3e6d00192p-42, 0.0, 0x1.60125677e2b57p-989,
     0x1.da9b06c868405p-163, 0x1.be41efd3d72c5p-420, 0.0, 0x1.51aa3c64ee025p-811, 0.0,
     0x1.1e4c1b098e567p-420, 0x1.e54389e0d54bcp-729, 0.0, 0.0, 0.0, 0.0,
     0x1.2219b901fca4bp-921, 0x1.1247d69fb93e7p-464, 0.0, 0x1.ad2f37fb65edp-848,
     0x1.41821243c0754p-229, 0.0, 0x1.631d5f1223e8fp-236, 0x1.33dcec66faa8fp-964, 0.0,
     0x1.df48307c131bbp-1022, 0x1.e2493879d7a48p-731, 0.0, 0.0,
     0x1.09f5602f9f9fcp-932, 0.0, 0.0, 0x1.a620be8e236cbp-758, 0x1.9a8bd43fe194p-967,
     0x1.1a344fa6ec9bbp-643, 0.0, 0.0, 0.0, 0.0, 0x1.88880bc8c963ep-535,
     0x1.c971276097376p-121, 0x1.d74af5dffee73p-695, 0.0, 0.0, 0x1.533793c05ea75p-158,
     0x1.52a11a684a9abp-940, 0.0, 0.0, 0.0, 0x1.bacb834fee2c6p-691,
     0x1.8d47ae8655c74p-160, 0.0, 0x1.1384f2caae8dfp-874, 0.0, 0.0,
     0x1.818617ad65d53p-125, 0x1.d7e8fc6167345p-943, 0x1.87e99b23433fap-114,
     0x1.0b411b68f2e6p-257, 0.0, 0.0, 0.0, 0x1.3257c41886766p-483,
     0x1.10ebe6e9d897bp-467, 0x1.c66ef33316cbdp-836, 0.0, 0.0, 0x1.e39163f55f978p-74,
     0x1.75315d90e4117p-175, 0.0, 0.0, 0x1.16b573e03b6bap-704, 0.0, 0.0,
     0x1.ccd30b6cf9396p-320, 0.0, 0.0, 0.0, 0x1.d82f328f6d3bap-276,
     0x1.71f7098714cbep-288, 0x1.0d88ad7ad8f38p-241, 0x1.f279522f48bf2p-468,
     0x1.5800c7ca94f86p-951, 0x1.62a4129b22502p-619, 0x1.83d4fa1bfe638p-603, 0.0, 0.0,
     0x1.150b3a391c6cap-464, 0x1.7a0d515e5864cp-891, 0.0, 0x1.d4a84d5247f53p-496, 0.0,
     0x1.e700c7397f56dp-173, 0.0, 0x1.5c71db48afd3p-119, 0.0, 0x1.3187a7b82951p-129,
     0.0, 0.0, 0x1.32f15a48a24ep-822, 0.0, 0x1.1265f160cf5acp-39, 0.0, 0.0, 0.0,
     0x1.7e80a0b61d25ap-640, 0.0, 0.0, 0x1.26633ee3aa53ep-5, 0x1.c9e6b222fbf04p-155,
     0.0, 0x1.373a0bbd85f6ap-832, 0.0, 0.0, 0x1.aedb32b1527ffp-82,
     0x1.294c2dd29909bp-413, 0x1.d16006df45419p-689, 0x1.e59346247f81ep-211,
     0x1.679ff766508b4p-343, 0.0, 0.0, 0.0, 0x1.813eccd44b6cbp-1005, 0.0,
     0x1.2278e8e812afap-673, 0.0, 0.0, 0x1.aa9b6b85f933fp-814, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.313f10c7fd195p-902, 0x1.03731eecd2119p-37, 0.0, 0.0,
     0x1.3a04fcd71ff7ep-398, 0.0, 0.0, 0x1.a83f7157ef7fp-69, 0x1.e2e67b52c03c7p-114,
     0x1.efb5f8789461p-428, 0.0, 0.0, 0.0, 0x1.59131c2b67fc4p-69,
     0x1.921936f7726a3p-915, 0x1.c49c18d3ff558p-541, 0.0, 0x1.51c81a73d1a56p-549, 0.0,
     0x1.56d39c7cfb473p-900, 0.0, 0.0, 0x1.22f9cce812fb7p-562, 0x1.519a8ae0b8d75p-926,
     0x1.1ac8ee3135154p-427, 0x1.386a737dd5437p-923, 0.0, 0x1.5b0419bde08dbp-175,
     0x1.925d327d81e37p-37, 0x1.3f82ea075957cp-491, 0.0, 0x1.e961cd085f5d6p-133,
     0x1.ce5b12e180238p-622, 0x1.ad31fee7a7e9p-197, 0.0, 0x1.af7716bb18c3bp-85, 0.0,
     0x1.aa47098be6e27p-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cba2709a09bp-694,
     0x1.d0ccf32a0bc0ep-779, 0.0, 0x1.3498775082f81p-378, 0x1.2d4bdd3c97a49p-705, 0.0,
     0x1.0cd7285a7a9edp-192, 0x1.65e4e4035eb39p-749, 0.0, 0.0, 0.0,
     0x1.61424285c6bf5p-711, 0x1.4256f61d92a4fp-1000, 0.0, 0x1.336a153ce689ap-374,
     0x1.47e1ba97fbcdfp-444, 0x1.06ba5c51bf219p-75, 0x1.fc6314fbb59d4p-727, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e45eddb9dfa1p-533, 0x1.39e728677070fp-853,
     0x1.69c469f34becdp-787, 0.0, 0x1.deb085410e683p-894, 0.0, 0.0,
     0x1.6b76735ff8a5fp-1020, 0x1.4d28ae5a86899p-804, 0x1.9e9bd190147d7p-77, 0.0, 0.0,
     0.0, 0x1.d8b06d63c2f8cp-690, 0x1.e37f68364d606p-646, 0x1.699595f752957p-679, 0.0,
     0.0, 0.0, 0.0, 0x1.8f64433badacdp-106, 0.0, 0x1.dccbccd8984f8p-797, 0.0,
     0x1.f45878ca9272bp-169, 0x1.6630ea932ff94p-987, 0.0, 0.0, 0.0,
     0x1.309f13c8cca9ap-825, 0.0, 0.0, 0x1.e0d2f567a7b9ep-945, 0.0, 0.0,
     0x1.93646ffd0ebbcp-706, 0x1.2f869705b129dp-291, 0x1.f52ecf193e66ep-333, 0.0,
     0x1.103261beab309p-780, 0.0, 0.0, 0.0, 0x1.17f9926a54061p-79,
     0x1.31e6e36f799e9p-888, 0.0, 0x1.05866e4e107d8p-123, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7176864c9e413p-341, 0.0, 0x1.3f4338a3f64c1p-818, 0x1.23a44a7b5121ep-462,
     0.0, 0x1.d537742794d79p-514, 0x1.88ffa63390b17p-1003, 0.0,
     0x1.08536fc82ee49p-730, 0x1.9d7249dc92bb4p-845, 0.0, 0.0, 0x1.92ab38c3e9f06p-337,
     0x1.ef2712e4afa6ap-32, 0x1.46bb310aee707p-937, 0x1.50cdae70ff916p-919,
     0x1.8db3ff1ff5cc4p-849, 0.0, 0x1.e769194b8f507p-237, 0x1.a7e6623fc4567p-432, 0.0,
     0x1.afb23490445d4p-601, 0x1.1f5fe0f927fa1p-460, 0.0, 0x1.8c187902aa262p-743, 0.0,
     0x1.b5c28eaf1f2fap-542, 0x1.8d3e88751be08p-155, 0.0, 0x1.0d3679e659933p-244, 0.0,
     0x1.142af9e0571a1p-47, 0x1.a9db49c316196p-667, 0.0, 0.0, 0x1.d1d09ebb7c102p-853,
     0.0, 0.0, 0x1.8dbc8c365cb6fp-853, 0.0, 0x1.bf5f63a488cc4p-710, 0.0,
     0x1.37656e716bb7bp-266, 0.0, 0.0, 0.0, 0x1.63664bb245b48p-709, 0.0,
     0x1.2c4be40333419p-902, 0.0, 0x1.1f1f3beb7c779p-145, 0x1.1526d20a30097p-643, 0.0,
     0.0, 0x1.9a7f2701a8624p-182, 0.0, 0.0
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
            tmp1 = Sleef_finz_sind1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sind1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sind1_u35purecfma bench acc %la\n", global_bench_acc);
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
