/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d1_u35purecfma.c --function \
 *     Sleef_exp2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
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
     0x1.713a0932d035fp-1010, 0x1.9f04547c478ccp-428, 0.0, 0.0,
     0x1.1bae747f37a3bp-732, 0.0, 0.0, 0x1.e97d39b4a4974p-796, 0.0,
     0x1.90dd2b2da8f56p-5, 0.0, 0x1.c4ba6ee152beap-464, 0.0, 0x1.13625d86a9bf5p-967,
     0.0, 0x1.5d6d28cd5541fp-661, 0.0, 0.0, 0.0, 0.0, 0x1.3db488965ec6ap-1021,
     0x1.52a0f94e6657p-938, 0x1.1e1f6ea728843p-928, 0.0, 0x1.93aa13cce056p-242,
     0x1.72ca4f4a578cp-998, 0.0, 0x1.cca6fca787f2bp-282, 0x1.4adf89fa3884ap-582,
     0x1.38f7906f4b362p-97, 0.0, 0x1.aec516f136d52p-799, 0x1.6c7ddb9fd91dap-586,
     0x1.f2f6f49fabdccp-938, 0x1.3c9bb44fc797bp-983, 0x1.3e05e02b7133ap-684,
     0x1.98a161486996cp-96, 0x1.ea490f863358fp-138, 0.0, 0.0, 0.0,
     0x1.c555e1b124cf3p-689, 0x1.f605301b84445p-745, 0.0, 0.0, 0x1.ccf4adff071cfp-329,
     0.0, 0.0, 0x1.b6afa4abe9971p-855, 0x1.c7831a507f94fp-509, 0.0,
     0x1.ed395f8372e6p-503, 0.0, 0x1.b5a62b715ceb5p-913, 0x1.277cb05fe142ep-860,
     0x1.a4fac77df5407p-789, 0x1.84a9e6dad360dp-735, 0x1.30b760978bb54p-93,
     0x1.6443c73d2c383p-958, 0x1.f6e141d9266c9p-554, 0.0, 0.0, 0x1.65238fc2f8667p-16,
     0x1.0252bc27c058p-465, 0.0, 0.0, 0.0, 0x1.d7a4fa045c7c6p-623, 0.0,
     0x1.7582e3895ba32p-101, 0x1.916b32367af21p-365, 0x1.b045fa746537ep-75, 0.0,
     0x1.9cf727963e914p-88, 0x1.ee725c9e66134p-900, 0.0, 0x1.a4ec399f39482p-781,
     0x1.d112eeaf3ac19p-447, 0x1.5c02b59704678p-615, 0x1.88cf8b62580a1p-512, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f5659e543ac55p-653, 0x1.ae1afacb24a48p-879, 0.0,
     0x1.6c62d7c49e43cp-566, 0.0, 0x1.c2ffa54829dfdp-17, 0.0, 0x1.3b33ec781e6c1p-571,
     0.0, 0x1.d8de323ecdc9ap-683, 0x1.3ea551212a817p-114, 0.0, 0.0, 0.0,
     0x1.f7066d3f8c848p-1000, 0.0, 0x1.79be49956a8dap-656, 0.0, 0.0, 0.0,
     0x1.b5536eefe1e4p-251, 0x1.5e738b3010031p-776, 0x1.3a1bfecc503bap-207, 0.0,
     0x1.6beb61c081cacp-811, 0x1.1d2705de8c8f4p-574, 0x1.e61650740e903p-34, 0.0,
     0x1.bd0fb6a250ef4p-793, 0.0, 0.0, 0x1.aa141592c8c74p-354, 0x1.561ae32ac74d8p-117,
     0x1.e06a1ad4279b9p-145, 0.0, 0.0, 0.0, 0x1.75a238be673a6p-294, 0.0,
     0x1.605c9e6f1d8ebp-445, 0x1.f32333ad91b02p-364, 0x1.1b838c12b7f69p-242, 0.0, 0.0,
     0.0, 0x1.f54cf44fa4349p-813, 0.0, 0x1.2d225b5be9c66p-642, 0.0,
     0x1.1e4c3704e8f7cp-250, 0x1.79b96dd37a854p-968, 0.0, 0x1.30b455baf7136p-379,
     0x1.3ddcfae8cbda1p-223, 0x1.4a484821e3e97p-948, 0.0, 0x1.d6a8698199a69p-433, 0.0,
     0x1.25599ea8be2p-268, 0.0, 0x1.81ae5c653ca57p-1013, 0x1.064d413d738c3p-137,
     0x1.5243619549fc2p-775, 0.0, 0.0, 0x1.a5f7c7b49d82ep-876, 0.0,
     0x1.33c1ff4574199p-906, 0x1.f5561da154925p-834, 0x1.a0b819f023666p-210, 0.0, 0.0,
     0x1.a21ee6477babbp-814, 0.0, 0x1.4015ad8675d97p-572, 0.0, 0x1.281484c86275cp-960,
     0.0, 0x1.92004fa147b56p-57, 0.0, 0x1.7325d3b2d7727p-332, 0x1.600881c86aee5p-357,
     0.0, 0x1.213614236da73p-263, 0.0, 0x1.2413feb3fcd9bp-1021, 0.0,
     0x1.6f6eabca06856p-144, 0.0, 0.0, 0.0, 0x1.b47061c0857c6p-208,
     0x1.15ae6b5dbb58p-201, 0x1.7513e8dd0aa1ap-141, 0.0, 0x1.284c2d08996e8p-388, 0.0,
     0x1.500a68abb9d42p-522, 0.0, 0x1.0110de0a24981p-104, 0.0, 0x1.861f40b1a605dp-947,
     0.0, 0x1.5b4475d48c1a4p-387, 0.0, 0x1.33d876f965c55p-811, 0.0,
     0x1.f7022bdb4198ep-402, 0x1.a8f7f281cb7a6p-305, 0.0, 0x1.302881581ecap-308, 0.0,
     0x1.68c00aca4cd0cp-10, 0x1.dddb8360fa3edp-538, 0x1.87f76941721adp-116,
     0x1.0eeafe73fe603p-652, 0x1.f275843f5446ap-299, 0.0, 0x1.908bb20519925p-710,
     0x1.b9fcbdec18f4dp-456, 0.0, 0x1.17526fbf8938cp-741, 0.0, 0x1.c568388369fafp-436,
     0x1.7e4bd7c9acdcbp-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f2b40363c408p-900,
     0x1.e669c5e20f1f8p-806, 0x1.e04535f5cb3e2p-638, 0.0, 0.0, 0x1.82e9fdf6c84e1p-287,
     0.0, 0x1.4c3dd414b11a1p-749, 0.0, 0x1.fb31d7f4499ebp-177, 0.0,
     0x1.4c5bab242c313p-844, 0.0, 0x1.9e33756330225p-397, 0x1.a4c05eb6ac665p-611, 0.0,
     0x1.7d92da39078b7p-913, 0x1.315f8b49d26cep-117, 0.0, 0.0, 0x1.cce6038b86245p-732,
     0.0, 0x1.db501f494b246p-671, 0.0, 0x1.3711c38aaa1bbp-735, 0x1.88785fc0e8109p-970,
     0.0, 0.0, 0.0, 0x1.161ab30db31eap-832, 0x1.e4454cd3614c5p-130, 0.0, 0.0,
     0x1.6838790f4a104p-735, 0.0, 0x1.abbd43ff48cebp-138, 0x1.81dc14d26d562p-596,
     0x1.eefce3d3e172cp-944, 0x1.35286df7abfd8p-693, 0x1.0eb12eaf6a09p-4,
     0x1.2243dfa06f4a9p-269, 0.0, 0.0, 0x1.446c710b5e6dfp-601, 0.0,
     0x1.17a9f4b346befp-29, 0.0, 0.0, 0x1.802c02656deap-965, 0x1.880dbd66f4cabp-1003,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.889c1638a53f4p-149, 0x1.13e7999a5d309p-331, 0.0,
     0x1.a526a45e9e1eep-67, 0.0, 0.0, 0.0, 0x1.98970940ecf53p-919, 0.0,
     0x1.5fb0947b15378p-978, 0.0, 0x1.b5a990bff6606p-281, 0.0, 0x1.06f275ca6a97ap-781,
     0x1.57e9a359338d9p-13, 0x1.91228fc8f649p-610, 0.0, 0.0, 0x1.184c6b74a10ffp-477,
     0x1.52c963ae9ce5p-541, 0.0, 0.0, 0.0, 0x1.9e31961fcf455p-26, 0.0,
     0x1.39fc7c71029d7p-847, 0x1.acdd91de4f652p-945, 0.0, 0x1.786e59082a52ap-854,
     0x1.812f629398d68p-476, 0.0, 0x1.05c9a59d9e2fep-573, 0x1.3400ea91dbf89p-417,
     0x1.209a362724f12p-680, 0.0, 0.0, 0x1.ff14eadb43c3ep-620, 0x1.c4217369bcec3p-949,
     0x1.aa211a859db65p-888, 0x1.c86547ce2eeb6p-788, 0x1.6530f8045dffcp-906, 0.0, 0.0,
     0.0, 0.0, 0x1.482ba51c2e5b8p-662, 0x1.27bac85bcafc3p-867, 0x1.e36049a3c7a75p-862,
     0.0, 0x1.b8a290c93078ap-686, 0.0, 0.0, 0.0, 0x1.56c4b53c8fefap-525,
     0x1.5ba04863c7cadp-677, 0.0, 0x1.a091f1084f0f4p-32, 0.0, 0.0,
     0x1.f540ccaa317e6p-789, 0x1.042c5004e45c6p-756, 0.0, 0x1.55dc9081bf02ap-91, 0.0,
     0.0, 0.0, 0x1.1e2141e1d2198p-1013, 0.0, 0x1.9c179802e0187p-428, 0.0, 0.0, 0.0,
     0x1.2c20395fb19bep-77, 0.0, 0.0, 0x1.a61f556179823p-800, 0.0,
     0x1.3192005f5b338p-788, 0x1.5c1a4fb0b9c26p-459, 0.0, 0x1.d984486cd3629p-736, 0.0,
     0x1.1c10071f3b3acp-154, 0x1.8a9a7a1fd3e1bp-828, 0x1.93b76f26153bfp-689, 0.0,
     0x1.25d46dd815b08p-65, 0x1.d58926340ae2ap-933, 0x1.f3ffa00014549p-233,
     0x1.52bbfb5f2b80bp-478, 0.0, 0.0, 0x1.559761969fb69p-561, 0.0, 0.0, 0.0,
     0x1.df2cea68a363ep-886, 0x1.e6a02ded4ef82p-890, 0x1.b9cf6eb5d75c5p-506, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.847206ebb6c97p-716, 0x1.cffdaeb8736fbp-985, 0.0,
     0x1.16c0adea029a7p-274, 0x1.e8115683fcc65p-716, 0.0, 0x1.8ae8b7a74a3d9p-724,
     0x1.617f8b04aa022p-214, 0x1.18004a4f81d2p-765, 0x1.017703aa01e38p-27,
     0x1.b81748b84ed33p-555, 0x1.556a3251f326dp-981, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5abb512c2e3e9p-396, 0.0, 0.0, 0x1.52c68e238d95ap-572, 0.0, 0.0,
     0x1.c6f89742ec611p-904, 0.0, 0x1.db4960604a8aap-372, 0x1.2dcd059195bbep-46,
     0x1.23f21938d719fp-468, 0.0, 0x1.1c216ce47ee2p-534, 0.0, 0x1.306c24f675255p-902,
     0.0, 0x1.976f877d9153bp-233, 0.0, 0.0, 0.0, 0x1.303b67f1929a2p-797, 0.0,
     0x1.eb0d019da7545p-787, 0x1.f891b9f048056p-449, 0.0, 0.0, 0x1.5ec2abb75c585p-748,
     0.0, 0x1.ee82db855eef7p-815, 0.0, 0.0, 0x1.53e280e70832ep-799, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4ddd263e04ed6p-164, 0x1.70247a5e58a36p-811, 0.0,
     0x1.d13439772bf63p-101, 0.0, 0.0, 0x1.6004dba8de90bp-737, 0.0,
     0x1.df8da50a4b2a9p-187, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25bf62569f77ep-190,
     0x1.6784c160a0038p-3, 0x1.43a1d678f8b2p-118, 0x1.d76c45e094b7ep-935, 0.0,
     0x1.a03cac49a2b96p-370, 0.0, 0x1.e2eef0eb0fd8bp-626, 0x1.4f5ac434136d1p-349, 0.0,
     0x1.46add58d95f3fp-14, 0x1.f1a2509be8e82p-189, 0.0, 0x1.18600e85f38eap-988, 0.0,
     0x1.0822e6be5cee2p-938, 0.0, 0.0, 0.0, 0x1.a4d2df9d00b25p-83, 0.0,
     0x1.efd723b139e76p-1013, 0x1.b67dca65c96e7p-246, 0x1.1952d1dae7e74p-524, 0.0,
     0x1.3d7e76084b2d4p-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88437c7411081p-780,
     0x1.e795f747f61efp-61, 0.0, 0.0, 0.0, 0x1.3a50b5edd0b57p-323, 0.0,
     0x1.2679518fcef3p-948, 0.0, 0x1.dacb0df8c0f74p-248, 0.0, 0x1.b5d63caa07986p-891,
     0.0, 0.0, 0.0, 0.0, 0x1.07b587fa522e5p-228, 0x1.f212752004fd2p-490, 0.0,
     0x1.55e57c295a388p-873, 0.0, 0x1.1c282abd63d1fp-694, 0.0, 0.0, 0.0,
     0x1.3b524243aa11bp-111, 0.0, 0x1.3e9d241999de2p-505, 0x1.6dd5d5f8429ebp-660,
     0x1.73e8a307e5812p-781, 0x1.0547a6f596b0fp-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c1a7f13b9399ep-425, 0x1.731e49ef581e7p-817, 0x1.b2f55d4602244p-547, 0.0,
     0x1.9cfc3f45d3b99p-586, 0x1.b44a8e3a290f2p-669, 0.0, 0x1.5bc141bd825d6p-232,
     0x1.e08bdd8b45b54p-601, 0x1.96e0522dbf7b3p-573, 0.0, 0.0, 0x1.ce7ac73389bd7p-758,
     0x1.7a007f1413478p-581, 0.0, 0x1.98901d810db94p-509, 0.0, 0x1.823b5a13fc1d9p-660,
     0.0, 0x1.54b1b73e8900cp-35, 0x1.50c35c365ffdbp-250, 0x1.f1a6ebcd6d358p-801,
     0x1.80eb26d871673p-39, 0.0, 0x1.a68f2fd0fdeap-998, 0x1.20f6dd612cae1p-178, 0.0,
     0.0, 0.0, 0x1.b211c79b01b3cp-264, 0.0, 0x1.e70391e5aa005p-594, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8370f93a3ee72p-407, 0.0, 0x1.494807458adf7p-650, 0.0,
     0x1.447c253d8a7dbp-343, 0x1.c3ff9fa03d6bbp-144, 0x1.0c8813e037a0ap-1013, 0.0,
     0.0, 0.0, 0x1.acaef1ca8b8dap-340, 0.0, 0.0, 0.0, 0x1.dde1950fb85eep-963,
     0x1.ca7abc80c5cf8p-481, 0x1.aa4d0273a336p-378, 0x1.9725779af4a3fp-473, 0.0, 0.0,
     0x1.717784d17b01dp-276, 0.0, 0x1.b78b1a8487855p-180, 0.0, 0x1.d6e51e200306fp-90,
     0.0, 0x1.7fdbbaa028454p-789, 0x1.fa61d3527b5eap-806, 0.0, 0x1.dd451fbb0d0e1p-62,
     0x1.64911d723c836p-429, 0.0, 0x1.c5613c2713174p-885, 0x1.122e4aff86c8fp-850, 0.0,
     0x1.71d66281b8992p-214, 0.0, 0.0, 0x1.b3002dc4bc90ap-619, 0.0, 0.0,
     0x1.bcfef7305e2cap-670, 0.0, 0.0, 0.0, 0x1.858379061251fp-387, 0.0, 0.0,
     0x1.787b603f542b5p-67, 0.0, 0.0, 0x1.e1e1c40869299p-987, 0x1.edb7cf689ee21p-847,
     0x1.914ad277a1018p-128, 0x1.7f70587646ab3p-172, 0x1.fc3a70dc26182p-137, 0.0,
     0x1.7aa55c2386989p-660, 0.0, 0.0, 0x1.1293f6e4b2c19p-511, 0.0,
     0x1.1c6fdc0ba0904p-146, 0.0, 0.0, 0x1.b093ba5a3537dp-848, 0x1.b246d8789b888p-155,
     0x1.f6faa952255efp-1004, 0x1.a336daf624187p-404, 0.0, 0.0, 0.0, 0.0,
     0x1.8fad243c50b17p-910, 0x1.0d5e0703358bcp-230, 0x1.fc2519130b625p-796,
     0x1.5112365cc5e06p-956, 0.0, 0.0, 0x1.68c3219e98fd7p-123, 0.0,
     0x1.d091c7093575fp-161, 0.0, 0x1.8a8e730713039p-21, 0x1.084f145797bfap-632,
     0x1.c69010e83f1d1p-1015, 0x1.c9967bc79f8d5p-814, 0x1.2fcff6a242d6p-116,
     0x1.8ac837703c302p-94, 0.0, 0x1.dc5f1ea5893f2p-855, 0x1.b5e873ec489d4p-603,
     0x1.c47d092f25cc8p-48, 0x1.a9ebaab57da91p-532, 0.0, 0x1.c48884c37831ap-612, 0.0,
     0.0, 0x1.14442dda20cecp-974, 0.0, 0.0, 0x1.c072e13fb9922p-531, 0.0, 0.0,
     0x1.d49fbc89f7707p-717, 0.0, 0x1.20dacf8ffa843p-861, 0x1.a4445b10f947fp-993,
     0x1.680c3e419cd6ep-169, 0.0, 0x1.d6ddb1f363facp-949, 0x1.4578869fbac2ap-58, 0.0,
     0x1.92cc7e671eeeep-608, 0.0, 0.0, 0x1.4d79d199a8bbbp-476, 0.0,
     0x1.76f8d7c6d9d9ap-209, 0x1.2ee053f975639p-267, 0x1.a91d66cf08e16p-747, 0.0,
     0x1.87ce8f7f89deep-494, 0.0, 0.0, 0.0, 0.0, 0x1.3837a069c8ba4p-1011, 0.0, 0.0,
     0x1.b349678160668p-847, 0x1.8aee079d17591p-642, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.681a8f9054dacp-318, 0x1.d3e3a6b248486p-576, 0x1.ee0d2b0c3008dp-329,
     0x1.4470a6a056bf6p-972, 0x1.4ce4c6dd0831dp-890, 0x1.f73e2cbfcb684p-65,
     0x1.c745e3f95f915p-551, 0.0, 0.0, 0x1.67e09fee4a61bp-311, 0.0,
     0x1.f039b23cd69ccp-54, 0.0, 0.0, 0x1.3926523e49bdp-42, 0.0,
     0x1.9e14ba4be2047p-305, 0x1.f3fbd9041900ep-431, 0x1.e9582ea226b8fp-236, 0.0,
     0x1.f4006431553b5p-650, 0x1.d26bf7224ae15p-336, 0.0, 0x1.639dbfc574cccp-761,
     0x1.6b368042535bcp-778, 0.0, 0x1.d54cc56c3a7a5p-32, 0x1.8c7b18f88f32bp-150,
     0x1.a4a03e19d640fp-155, 0.0, 0x1.5165b394b6fdap-976, 0.0, 0.0, 0.0, 0.0,
     0x1.77cbaf1960a19p-884, 0.0, 0.0, 0x1.1d01461bc5a09p-754, 0x1.4aad4b7f84598p-34,
     0x1.6cc1a9d53f3cfp-848, 0.0, 0.0, 0.0, 0x1.e33f267e1e2afp-906, 0.0, 0.0,
     0x1.99ee489dcba89p-406, 0.0, 0.0, 0x1.4f9513e6638e3p-265, 0x1.eff51872904a4p-204,
     0x1.4f14569b0306cp-771, 0.0, 0x1.540149955e377p-903, 0x1.707ef931289e4p-601, 0.0,
     0.0, 0.0, 0x1.9a0ee2b5fbfcap-311, 0.0, 0x1.25a57f087f65ep-366, 0.0,
     0x1.cd9bf4572ad55p-763, 0x1.e993738dcbf42p-329, 0x1.fb88815aa1629p-89, 0.0, 0.0,
     0x1.7129c7346e4c7p-6, 0x1.96dadc57319b6p-727, 0x1.4faf11d3b56abp-657,
     0x1.cd52a61e96c5ep-270, 0x1.5bc7fb347e4p-744, 0x1.95a52ba99f0b8p-872,
     0x1.52226385997ffp-525, 0x1.402f4c78b4aep-228, 0x1.b1ff4fbc2517bp-274,
     0x1.0acd0f6934efp-140, 0.0, 0.0, 0.0, 0.0, 0x1.f0bc5652a7078p-440,
     0x1.3e9c3ec960c82p-943, 0x1.c10f2fd89fef8p-758, 0.0, 0x1.d14fe0bfd5f76p-1019,
     0x1.34a6b59d7df39p-850, 0x1.b7e4c1de5a4b1p-743, 0x1.00ae74d8e29abp-311, 0.0, 0.0,
     0x1.b197be7d1258dp-768, 0x1.464840c7653c5p-29, 0.0, 0.0, 0.0, 0.0,
     0x1.2a66ff7df396ap-34, 0.0, 0x1.a884ac1d8201ap-214, 0.0, 0.0,
     0x1.bc673b1faee08p-860, 0x1.6beb38bf37274p-437, 0.0, 0x1.15da8cbc54317p-484,
     0x1.0d180708738c7p-397, 0.0, 0.0, 0.0, 0x1.a0650e20d38d2p-456, 0.0, 0.0, 0.0,
     0x1.1ce9af2e25223p-317, 0x1.5b8ca40149606p-525, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1a56c5b22982p-648, 0.0, 0x1.af18420371153p-686, 0.0, 0x1.b01d999b441a8p-573,
     0x1.7508a2d06657dp-421, 0.0, 0.0, 0.0, 0.0, 0x1.7a74b9a858da4p-449, 0.0, 0.0,
     0x1.bdf268cbd645bp-867, 0x1.40b0279d2ea3dp-240, 0x1.1e5d934da4336p-121,
     0x1.270355d074962p-357, 0.0, 0x1.95811183e7992p-94, 0x1.fbb83db27637cp-855, 0.0,
     0.0, 0.0, 0x1.18dfb2966311bp-862, 0x1.e3a3b14dd19e8p-414, 0x1.59b251b2f658fp-862,
     0.0, 0.0, 0x1.bc442ac6cc559p-195, 0x1.cef4008ac4722p-472, 0x1.5f09f4ead535fp-53,
     0.0, 0.0, 0x1.926c181742302p-633, 0.0, 0.0, 0.0, 0x1.c864c00d9d613p-8, 0.0, 0.0,
     0.0, 0x1.6509eeac29a9cp-846, 0x1.81e8ad2c59a82p-559, 0x1.264ba16ba879ap-443, 0.0,
     0.0, 0x1.4b0e28c65cc11p-847, 0.0, 0x1.d5b4125c01bffp-237, 0.0, 0.0,
     0x1.5e893b14eeedbp-892, 0.0, 0.0, 0.0, 0x1.c29c7d7192bf3p-200,
     0x1.fb2f6392be852p-290, 0x1.132b9c3d21482p-485, 0x1.39af9f1b48e82p-992,
     0x1.95304590ca3e6p-980, 0.0, 0.0, 0.0, 0x1.9108e1cb952b5p-459,
     0x1.be8f900adb7bp-825, 0.0, 0.0, 0.0, 0x1.d90fe96a83399p-249, 0.0,
     0x1.6eedea0f7d79fp-271, 0.0, 0x1.72ef74e65a09cp-306, 0.0, 0.0,
     0x1.29e55248a7b67p-535, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.679ab10e26207p-688,
     0x1.c63bab0fafa62p-456, 0x1.fa1927ad2ef92p-312, 0x1.aa6a42a1f3732p-563, 0.0,
     0x1.a1c6727cb1b3ap-564, 0.0, 0x1.a8ed8b03732fdp-63, 0x1.453ce02c540d5p-157,
     0x1.902f70c99a02cp-708, 0.0, 0.0, 0x1.7f2dc698d961dp-46, 0x1.99ab868475751p-421,
     0.0, 0.0, 0.0, 0x1.d38cea9fbf1b4p-973, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b95d667a788bp-100, 0.0, 0x1.9acc3f8883fp-701, 0x1.64b7ddad119edp-810,
     0x1.8df255e19d40dp-261, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d14d3fb935b7p-63,
     0x1.87aa7ff9959d5p-661, 0x1.125ed1e49feb8p-858, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65ad9da315331p-873, 0x1.f19244dd52ac2p-299, 0.0, 0x1.314dfb9d58786p-566, 0.0,
     0x1.ea7314b91f69ep-972, 0.0, 0.0, 0x1.4ccb5ef29c607p-94, 0x1.feba59a12f555p-877,
     0x1.1f83cdb866731p-843, 0x1.45652d58cb9d1p-958, 0x1.c1aaaaf56ed11p-513, 0.0,
     0x1.156a29415b01fp-341, 0x1.856d88e1a49b2p-580, 0x1.72b40216e32d5p-72, 0.0,
     0x1.c40e707dcca9ep-213, 0.0, 0x1.06ce052d82803p-758, 0x1.f6d363b6beb0bp-888, 0.0,
     0x1.beb0f365787aap-452, 0.0, 0x1.76c6325f55f9ep-22, 0.0, 0.0,
     0x1.cdeefdf13bd4fp-685, 0.0, 0x1.f5ef0bbd9fa56p-426, 0x1.e43fd443acb8cp-929, 0.0,
     0.0, 0x1.8101784f79a82p-116, 0x1.be6a8d68ed358p-645, 0.0, 0x1.9911e09a2631fp-50,
     0.0, 0x1.cb65f5af693fp-907, 0.0, 0x1.18845562d1a9p-273, 0.0, 0.0, 0.0, 0.0,
     0x1.c1fbaa727af34p-509, 0.0, 0x1.0a212d79d87f1p-5, 0.0, 0.0, 0.0,
     0x1.462613187ce36p-919, 0.0, 0.0, 0.0, 0x1.280e47e37f9cep-25, 0.0,
     0x1.53b326351c0d8p-96, 0x1.f39a5cba934bcp-497, 0.0, 0x1.2daa63fbaf915p-509, 0.0,
     0.0, 0.0, 0x1.cf5117894863ep-374, 0x1.4788119c9d2aep-811
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_exp2d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
