/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acoshd4_u10kvx.c --function \
 *     Sleef_finz_acoshd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.7e964359c3631p-435, 0x1.2cada32e2ed2ep-428, 0x1.87b2d44bbc5c7p-559,
     0x1.0e08e24b7c8d5p-486, 0x1.5a679d1a3084p-201, 0.0, 0.0, 0.0,
     0x1.0336513ea0b49p-76, 0x1.40de41b250f9dp-655, 0x1.70ded8f6d397dp-309,
     0x1.74482e941382ep-482, 0x1.467a8f0cb0d6cp-792, 0x1.df09b32b5771ap-519,
     0x1.f7ba9ec2349dep-481, 0x1.2e3a6d000c7b6p-177, 0.0, 0x1.47bfcd56215e9p-859,
     0x1.e3c9454bb8b6dp-659, 0.0, 0.0, 0x1.0f96d1e86793ap-929, 0x1.035fddb6c1675p-636,
     0x1.54e92c068139p-645, 0.0, 0x1.82090273ac96fp-171, 0.0, 0x1.a2802faa1e3cfp-881,
     0x1.0c42a76ebcd24p-155, 0.0, 0x1.3595e0edce192p-627, 0x1.a5bde1c33d97p-803,
     0x1.42356131573ep-510, 0.0, 0.0, 0.0, 0x1.ebd3737b1586bp-645, 0.0,
     0x1.0b125cb6c7131p-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f603475c2f02p-942, 0.0,
     0x1.0b880443850eap-393, 0x1.2b3fa00666febp-223, 0x1.a4d5b93fce436p-118,
     0x1.4377ab288e498p-281, 0.0, 0.0, 0.0, 0x1.12b1215e02a6p-206, 0.0, 0.0, 0.0, 0.0,
     0x1.c68f8ce44a718p-113, 0.0, 0.0, 0x1.f83ffcd0e1c83p-860, 0.0, 0.0,
     0x1.42475a2adc9dep-19, 0.0, 0x1.6e336b8c7a0fap-290, 0x1.321c8acdfbcdbp-19,
     0x1.b666216b286c7p-479, 0x1.0cad5889d48b9p-39, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6c99963365cbp-392, 0x1.754747169a5ebp-812, 0x1.341a5ab3def28p-686,
     0x1.56fa21090b517p-101, 0x1.443c4a69c8a07p-986, 0x1.c65a24e51955cp-371,
     0x1.e5b3dc1e01cc8p-366, 0x1.77fc8f51cf90ep-281, 0.0, 0.0, 0.0,
     0x1.4e2100cb0b141p-27, 0x1.fc8ca73fe4934p-401, 0x1.8b0b6435927dap-685, 0.0,
     0x1.ff03dbc1f7bbap-398, 0x1.4cbbd434b346ap-640, 0x1.9bd158a69d7c5p-874,
     0x1.133512b55e4a5p-153, 0x1.7673ffa717f84p-135, 0.0, 0.0, 0x1.ac83c9c6b921fp-184,
     0.0, 0.0, 0.0, 0.0, 0x1.6128393932362p-853, 0.0, 0x1.ff31ef520621ep-920,
     0x1.08298bf2aa0b2p-794, 0x1.228b57c03d48fp-300, 0x1.27b471ff90fbbp-222,
     0x1.5e86d7fd56c9cp-164, 0x1.8cf423ccf6ddep-981, 0x1.c6b2b8260996bp-66,
     0x1.c7a82fbf5b2f2p-708, 0.0, 0.0, 0.0, 0x1.c0f970bb0ce57p-999, 0.0, 0.0, 0.0,
     0x1.08afc99698819p-826, 0x1.2a6037ae4d795p-561, 0x1.bad65a8156414p-494, 0.0, 0.0,
     0x1.e4340f5c40d74p-951, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71a6d1187e5a1p-438, 0.0,
     0x1.5d39a8b0ff6abp-209, 0.0, 0x1.e8592b8f191fp-537, 0x1.d7ea94edc6293p-32,
     0x1.c2e7851dec2abp-843, 0.0, 0x1.c6214774c8148p-937, 0x1.1b57ab8e26434p-615,
     0x1.40879b9b411f1p-676, 0.0, 0.0, 0x1.424ea1708c5e3p-471, 0x1.0f4650aa06152p-34,
     0.0, 0x1.e01fbe92042cp-300, 0x1.3d7b4e37c5a0ep-87, 0x1.733266099f849p-868,
     0x1.2d1769dd7d2f9p-872, 0x1.71592220ec747p-312, 0x1.7c4d95d87ede6p-551,
     0x1.76ff6fa8de4b7p-410, 0.0, 0x1.6064e3fe66c78p-51, 0x1.8121863e98f64p-543, 0.0,
     0.0, 0.0, 0.0, 0x1.c97364479cd8ep-76, 0x1.add31580d2c9bp-960,
     0x1.716956d317835p-137, 0.0, 0.0, 0.0, 0.0, 0x1.53f5d536fef4dp-573,
     0x1.cfe9415179967p-967, 0.0, 0.0, 0.0, 0x1.7b71a839a754p-157, 0.0, 0.0, 0.0,
     0x1.b4afed9c9611ep-912, 0x1.00dde1d0e4b66p-215, 0.0, 0x1.f005affc817f4p-765, 0.0,
     0.0, 0.0, 0.0, 0x1.dc2accf2ffcb3p-63, 0x1.b0827b3456f6dp-514, 0.0,
     0x1.e96116b3ee05cp-706, 0x1.ecbbf4e9c24cep-702, 0.0, 0x1.3483d8c4afddcp-473, 0.0,
     0x1.0df192e2285ddp-701, 0.0, 0.0, 0.0, 0.0, 0x1.1cb23a359baecp-782, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9b847e425a2f9p-467, 0x1.40814df318b89p-565,
     0x1.bebe05954392p-738, 0.0, 0.0, 0.0, 0x1.3cb3aedf428c1p-519,
     0x1.a820d66439315p-948, 0.0, 0.0, 0.0, 0.0, 0x1.cd01489b1af9ap-1009,
     0x1.8baf428d148f3p-730, 0.0, 0.0, 0.0, 0x1.c0d61873f54bep-704, 0.0,
     0x1.3d2e86742c459p-547, 0.0, 0.0, 0x1.197618f6024f4p-618, 0.0,
     0x1.b7e32e79b4089p-983, 0x1.50fd921195d87p-223, 0.0, 0.0, 0x1.dca305da8d87dp-461,
     0.0, 0x1.7f46d1f275a96p-387, 0.0, 0x1.38a3d37f6d821p-26, 0.0, 0.0,
     0x1.e6340a800475cp-114, 0x1.b829d99abb6fep-183, 0.0, 0x1.9d6e469f89b32p-346,
     0x1.e70974508b999p-662, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2ef1269251f5p-98, 0.0,
     0.0, 0x1.85bfabe87dbd1p-262, 0x1.7510226874f63p-649, 0.0, 0x1.04ac0f21e73c1p-173,
     0x1.3d9f8d02c0bbcp-756, 0x1.03c087c66484cp-54, 0x1.781f497ceb55cp-394, 0.0, 0.0,
     0.0, 0.0, 0x1.7556b82a0cc9p-676, 0x1.1cf447de55ee2p-455, 0x1.c1148022eb74ep-613,
     0.0, 0x1.b2fed846f2008p-3, 0x1.f8b9b57f36539p-886, 0x1.500e9ba4e1517p-478,
     0x1.bcc5eaafc50fap-357, 0x1.4a95d24396141p-850, 0x1.91f5ee8e9bc78p-418,
     0x1.a2bf5f3b481b5p-31, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af1979fbb470dp-769,
     0x1.7865daf6c0646p-923, 0.0, 0x1.2e4f8d9ed1be3p-356, 0.0, 0.0, 0.0,
     0x1.6765427b50f47p-496, 0x1.a5c221faf7936p-798, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a984606df9f7fp-988, 0.0, 0x1.f814d3c16e8edp-319, 0x1.a184c7271b51fp-241,
     0x1.2260444e05e32p-570, 0.0, 0x1.f05383eb0b563p-18, 0x1.38dd87b927225p-725, 0.0,
     0x1.aab233cbe7a0ep-336, 0x1.9357c5651141p-848, 0.0, 0.0, 0x1.66c3159914351p-759,
     0x1.c9a912e69ea71p-862, 0x1.4f4931560ba33p-585, 0.0, 0.0, 0.0, 0.0,
     0x1.1481c3f4ece9fp-386, 0.0, 0x1.aa19c910b93e5p-398, 0x1.2c6562bd74bd7p-549, 0.0,
     0x1.7a1960ef4ed19p-492, 0.0, 0.0, 0.0, 0x1.59bd4d3097d48p-13, 0.0, 0.0, 0.0,
     0x1.96c45eaa5ca8p-122, 0x1.1f72aa4dcdf1p-807, 0.0, 0x1.d4356288c488fp-398, 0.0,
     0x1.2f4d967b53b26p-366, 0.0, 0x1.f69d321a5fd07p-491, 0.0, 0x1.fc4927611cf5ep-726,
     0x1.d9c6bd698fb95p-229, 0x1.ba4878d19f5dfp-256, 0.0, 0.0, 0.0,
     0x1.3884be70cbe91p-428, 0.0, 0x1.dfa55cd128f58p-671, 0x1.1d89ec8036facp-74, 0.0,
     0x1.03a942afcf56p-490, 0x1.4bf1c2e4a168fp-295, 0x1.f8b6df4d11388p-554,
     0x1.a457efa1a0818p-448, 0x1.7de7a25df9142p-972, 0.0, 0x1.ee4910ac39a43p-141, 0.0,
     0.0, 0x1.094c1b8aa663bp-508, 0x1.054fc215750c2p-54, 0.0, 0x1.5e29b470da85p-387,
     0.0, 0.0, 0x1.7a1e79da8a193p-616, 0x1.5ea6cd5925be9p-791, 0.0, 0.0,
     0x1.7de031311015cp-956, 0x1.c3fcf0228aa0ep-152, 0x1.6f25b272a4a77p-916, 0.0, 0.0,
     0.0, 0.0, 0x1.e0703004fb0d1p-148, 0.0, 0.0, 0x1.a139c7b494779p-68, 0.0,
     0x1.89306524353c9p-209, 0x1.9d67e0cf203e4p-73, 0.0, 0x1.ad2f3dc55c1c7p-264, 0.0,
     0x1.d7793edaa328bp-267, 0x1.cffa35c5471fp-446, 0.0, 0x1.5d736c0adbc33p-776, 0.0,
     0x1.40dfa2fefbe61p-849, 0x1.4cabc10c9dbc7p-952, 0.0, 0.0, 0x1.bda73649c1997p-262,
     0x1.4e983487df098p-88, 0x1.caf9d1137a8e8p-99, 0x1.b4f85b0044e06p-196,
     0x1.99c3075daf222p-871, 0.0, 0x1.6223ffff12882p-57, 0.0, 0.0, 0.0, 0.0,
     0x1.f982e8a1c2fd8p-829, 0.0, 0x1.82cd389d9fdafp-270, 0.0, 0x1.46cd886909678p-450,
     0.0, 0.0, 0.0, 0.0, 0x1.d4d5ec88c720dp-402, 0.0, 0.0, 0.0, 0.0,
     0x1.5240cf2e1d291p-444, 0.0, 0x1.d32cc98c53026p-807, 0.0, 0.0, 0.0,
     0x1.159d505156ef3p-683, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9034e6b85ab9p-1,
     0x1.795991b1aa8efp-983, 0.0, 0x1.6df44a364287ep-867, 0x1.07a76ed073fcep-544, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0abb6d86c61dp-380, 0x1.4163e3582c2f2p-631, 0.0,
     0.0, 0x1.6af8e6cd24cbep-589, 0x1.744dd740945dap-354, 0x1.d97fde29009d5p-209,
     0x1.ee9dc9a523f1cp-112, 0.0, 0.0, 0x1.c2465da3fa395p-68, 0.0,
     0x1.f43ed1de2df57p-341, 0.0, 0.0, 0.0, 0.0, 0x1.cbca06a6d0534p-758, 0.0,
     0x1.0319f9b51671dp-723, 0x1.02eab6136f55fp-285, 0.0, 0.0, 0x1.45a08c52eb9bdp-178,
     0.0, 0.0, 0x1.17cfa352c4a02p-943, 0x1.335f841381b12p-647, 0.0,
     0x1.290048a235483p-841, 0x1.39a729d16e324p-118, 0x1.e8fddedb92a4ep-817, 0.0, 0.0,
     0x1.e7758ea611051p-837, 0x1.9afdda4194c6dp-442, 0.0, 0x1.8cc1967095148p-657, 0.0,
     0x1.885be4270873cp-828, 0x1.3d5d334c5253p-216, 0.0, 0x1.6b08941176477p-293,
     0x1.7ec3235ad6841p-653, 0.0, 0.0, 0.0, 0x1.080fd9697c3bcp-201, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9b60c6c6846cdp-309, 0x1.e0cc11858291p-406, 0x1.4547e77238afdp-758,
     0.0, 0.0, 0x1.f4155e0a2c2aap-955, 0x1.343edc6484ba7p-196, 0x1.9bcccca5c6667p-924,
     0x1.1503d63ba0dffp-851, 0x1.c402b60135c72p-932, 0x1.69e75af5bd999p-378, 0.0, 0.0,
     0.0, 0x1.ef25510f623d7p-749, 0x1.f4382c10b55e5p-32, 0x1.25a05062b2927p-149,
     0x1.ae4f5541527a7p-872, 0.0, 0.0, 0x1.6719989023924p-448, 0.0,
     0x1.48be5d3f633c2p-930, 0x1.2dadd4c4dcd3fp-357, 0.0, 0.0, 0.0,
     0x1.84fcd738a338p-405, 0x1.bd6910b78226p-213, 0x1.bca68300598ddp-351,
     0x1.3e72428ec124cp-63, 0x1.5cdcb5a9ac1f3p-281, 0x1.5fa35e3ba848p-31,
     0x1.a891b6e6d67e5p-1013, 0.0, 0.0, 0x1.360fb75f13d43p-968,
     0x1.f356264f1d5a6p-701, 0x1.41d34fd226991p-306, 0.0, 0x1.fad5ec2f0e6c9p-712,
     0x1.c52b15ee79b5p-132, 0.0, 0.0, 0x1.2be052b67061bp-121, 0.0, 0.0,
     0x1.92e3f2dfb4773p-868, 0x1.1636b02d68da8p-122, 0.0, 0x1.1364fb8d2bc79p-304, 0.0,
     0.0, 0.0, 0x1.ed8b8df50945dp-805, 0x1.de6c3ab0b9eccp-88, 0.0,
     0x1.be08404fc1ddap-661, 0.0, 0x1.deac52bd348c4p-1005, 0x1.d5351db204091p-868,
     0.0, 0x1.b6e124b71d7cap-502, 0x1.c03fe048ae863p-905, 0.0, 0x1.07ba2ed73d215p-350,
     0.0, 0x1.65e7d1002bf47p-671, 0.0, 0.0, 0.0, 0x1.c3c707bec1209p-930, 0.0,
     0x1.0a1f62ba41575p-321, 0x1.d602cd039c5b7p-534, 0x1.10bddea0da317p-198, 0.0,
     0x1.36efecb6493ecp-18, 0x1.1482aedc666aap-42, 0.0, 0x1.49db47971b7ffp-586, 0.0,
     0.0, 0x1.74d41187cef8fp-552, 0.0, 0.0, 0x1.90e5fe528a7e4p-823,
     0x1.e12b4c57ebc5bp-977, 0x1.39a0d8ae52f35p-559, 0x1.6af1e046fb13dp-979, 0.0, 0.0,
     0.0, 0.0, 0x1.a8d23f6d85926p-144, 0x1.f8016e8a6648bp-505, 0.0, 0.0, 0.0,
     0x1.cad42a2c8bb3ap-379, 0x1.b17be50984753p-568, 0.0, 0.0, 0x1.56589ca6ecd61p-428,
     0x1.1b4de33a933fep-941, 0x1.1bbbfc378fb6ap-807, 0.0, 0x1.2e749608a2dbbp-64,
     0x1.c717879e90c94p-23, 0.0, 0.0, 0.0, 0x1.9debfcf8eed5cp-902,
     0x1.27ad580caad5fp-958, 0.0, 0x1.7181f4f60a194p-721, 0.0, 0.0,
     0x1.2c298346668eep-577, 0.0, 0x1.aae3df37ca723p-864, 0.0, 0x1.7136d7deb2a83p-717,
     0.0, 0.0, 0x1.f9a668463f021p-123, 0x1.504dea242801p-966, 0x1.5940f90b45662p-957,
     0.0, 0x1.e24deaa874c02p-693, 0.0, 0x1.b570491cd89a7p-816, 0x1.e88e36126dc19p-709,
     0x1.b9d20ca4103adp-793, 0.0, 0.0, 0x1.6ba31986a54d7p-955, 0x1.71bf748ad1decp-408,
     0x1.997352bf801f3p-987, 0x1.81705d55a2548p-409, 0x1.bae8c19556d66p-413,
     0x1.81dd126ea3708p-658, 0x1.acf88c404c4d5p-242, 0.0, 0.0, 0.0, 0.0,
     0x1.8d9ac67abc07ap-486, 0.0, 0x1.31e17edb969c8p-53, 0x1.7b1c2e4002ab9p-109,
     0x1.dea19934c6203p-462, 0x1.f7b8c1a609973p-609, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a30a42f794a6ep-851, 0x1.8a02ea92c58bap-513, 0.0, 0.0, 0x1.f5e019a842ac9p-670,
     0x1.338f9cb3d4929p-489, 0x1.dfe014962edp-653, 0x1.c5daa8797a731p-986, 0.0,
     0x1.a84ae824213ffp-744, 0x1.6ade521855cdp-876, 0.0, 0x1.23a5d2238cbep-895, 0.0,
     0x1.36da330ad519ep-102, 0x1.8ac0c287b2b7ep-968, 0x1.d9f94109a101p-180,
     0x1.61066dad5ec58p-847, 0x1.fb78531b5ad07p-478, 0x1.87e45989c37b9p-714,
     0x1.e31b471047a01p-280, 0.0, 0.0, 0x1.fab6c64885264p-227, 0.0,
     0x1.28b38a70236dap-413, 0x1.560f770a28553p-664, 0x1.25677e93c6f94p-696, 0.0,
     0x1.9062e3457ffd2p-883, 0.0, 0x1.289339c3ae2fp-67, 0x1.72dae2fd01f1bp-986,
     0x1.8da4d1c3294d5p-385, 0x1.97cfc47f95695p-667, 0.0, 0x1.cdd46d77e8a77p-772, 0.0,
     0.0, 0x1.b878957b55dbdp-426, 0x1.ab39bafdb501dp-1015, 0.0,
     0x1.c8f43623d608dp-892, 0x1.d154180a54684p-765, 0.0, 0.0, 0x1.690070a3dc2d7p-99,
     0.0, 0x1.48c458cb2c32fp-377, 0x1.735b811c1dac3p-205, 0.0, 0.0,
     0x1.2be89b958ef1cp-306, 0x1.c406503c43854p-932, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.edc1c4dc3c659p-373, 0.0, 0x1.fabb3ad4daaedp-386, 0.0, 0.0, 0.0, 0.0,
     0x1.cec3fde559c02p-681, 0x1.faa562ccdf213p-707, 0.0, 0x1.140f56d0105f2p-425,
     0x1.01c71f53de28dp-416, 0x1.a7013831bb0a1p-849, 0.0, 0x1.9323cfea53065p-726,
     0x1.cdf69aea88a07p-52, 0.0, 0x1.d65f1e6d7d566p-176, 0x1.0e680adf7c2b2p-812,
     0x1.b0f52cfeddf19p-842, 0.0, 0.0, 0x1.ccd78d447d5c2p-191, 0x1.ee36fa9a5e6a3p-473,
     0.0, 0.0, 0x1.6f35f6c22a5adp-60, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.755d5b7bd4323p-379,
     0x1.77b4d9b4a47bcp-245, 0x1.0536008af2b2bp-646, 0.0, 0.0, 0x1.f273819865fa6p-55,
     0.0, 0x1.967e9f87895cdp-501, 0.0, 0.0, 0x1.346998b527c69p-589,
     0x1.625774b7057e6p-819, 0.0, 0x1.d6f650d23d364p-1000, 0x1.1b62694e008bcp-589,
     0x1.69fada51e3c05p-939, 0x1.21e5dbdeed3f3p-978, 0x1.5a2934a9244b5p-317,
     0x1.a4a8e0d8f2cbap-202, 0x1.8c5037dad722p-822, 0x1.cb61acd5113bp-342, 0.0,
     0x1.f15698544fcadp-16, 0.0, 0x1.71ef6a2061031p-931, 0.0, 0x1.31832fbd36903p-531,
     0x1.45cdb2baf60f8p-321, 0x1.6df106f5f3d33p-985, 0.0, 0x1.f28a8ea2608f6p-437, 0.0,
     0x1.d16a215def3c5p-374, 0x1.c2ba74dda7e6ep-553, 0.0, 0x1.60cd2bd18baacp-164, 0.0,
     0x1.9a4c5e52684a7p-596, 0x1.950e9984ab8bap-397, 0.0, 0x1.1da54b1c4a1p-651,
     0x1.2c8577970c939p-567, 0.0, 0x1.fa9dbc4e3944fp-702, 0x1.dd4dc28fa7bdcp-897, 0.0,
     0x1.b04e9b957bcf2p-791, 0x1.2bbd6339759aep-1008, 0x1.01175a61c974bp-477, 0.0,
     0.0, 0.0, 0.0, 0x1.9b4e9ca96117p-471, 0.0, 0x1.fd45c19e71d1cp-869,
     0x1.55244a087f68ep-121, 0.0, 0.0, 0.0, 0.0, 0x1.f11ba9b05405fp-475, 0.0,
     0x1.050f4ca1de0fep-902, 0.0, 0.0, 0x1.d390f8227ec43p-664, 0.0,
     0x1.d24b6464931a7p-123, 0.0, 0.0, 0.0, 0.0, 0x1.d6bd5419e5b64p-504, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b6d43e0494d1ep-82, 0.0, 0x1.e20eaad8eadeap-138,
     0x1.753403fb18c3dp-893, 0x1.a0e7b326f9602p-836, 0x1.e8f87768b3fd9p-448, 0.0,
     0x1.04c4a50a2a60cp-367, 0.0, 0x1.0ea65c74169ddp-772, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.79193a0e42804p-931, 0x1.3c1ed702a0d21p-221, 0.0,
     0x1.0c0b65d5283ecp-369, 0x1.2f844dcc76c9p-533, 0.0, 0x1.e5532db3c6d52p-835, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.aa9698ad29b0ap-314, 0x1.79f362108a216p-203,
     0x1.073b40bb80a63p-541, 0x1.dcbc7389d1adep-144, 0x1.19d6c21504348p-8, 0.0,
     0x1.5ac0dc187eda3p-706, 0.0, 0.0, 0x1.07211b54224b1p-463, 0.0, 0.0,
     0x1.402466dd5618bp-671, 0x1.644ac67413741p-484, 0.0, 0x1.120636bc969ddp-603,
     0x1.617f832a7c405p-363, 0.0, 0.0, 0x1.14ea4c17ca5b9p-780, 0.0, 0.0, 0.0, 0.0,
     0x1.4aac2ef5e49eep-330, 0x1.4f3332fd1b17ep-508, 0x1.699c60f3762c8p-24, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f3149ee6d823p-522, 0.0,
     0x1.b9c09225a8508p-485, 0x1.08549aeaabe7ap-332, 0x1.3e6fa3cdd7d2ap-406, 0.0, 0.0,
     0x1.3c484c81ec309p-903, 0x1.8cb2a7bf1419p-219, 0.0, 0x1.fec0f7f591d23p-484, 0.0,
     0x1.8576569f2eaf4p-611, 0x1.55777ffd9b90fp-294, 0.0, 0x1.c58b99cb4fdp-976, 0.0,
     0x1.dddb707ec6a0bp-128, 0.0, 0.0, 0.0, 0x1.39b17b274ecdfp-440,
     0x1.be99e3cb5f172p-761, 0x1.42324239fd715p-708, 0x1.b5e1963f76d9cp-896,
     0x1.be7894f6a7d8p-438, 0.0, 0x1.30f3ce8c26e7dp-355, 0x1.57638be58e916p-32, 0.0,
     0.0, 0.0, 0x1.45a74531a2b9bp-613, 0.0, 0.0, 0x1.248a9959d6655p-401,
     0x1.221610dd59dc7p-344, 0x1.768c713cb4a53p-703, 0x1.a224245d13149p-690,
     0x1.4a687c9f89b61p-892, 0.0, 0x1.9f5f49612201p-837, 0.0, 0x1.f186852f5c804p-475,
     0x1.bf116fa292fbbp-904, 0.0, 0x1.4e5cbb006367cp-786, 0x1.bb227533ad523p-551, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.264976e40a21p-368, 0.0, 0.0, 0x1.945e4e48e6db4p-683,
     0.0, 0.0, 0x1.d93354b6b2445p-300, 0.0, 0.0, 0x1.d91cf7c79c726p-327,
     0x1.16a62ebef2d81p-977, 0x1.cf23b9b6a659p-787, 0.0, 0.0, 0x1.9188af0578e7p-234,
     0.0, 0x1.337cc08da88b6p-863, 0x1.31aaffd2f423ap-639, 0.0, 0x1.6e79ec43060e3p-650,
     0x1.693ea6ac7f8aep-337, 0x1.f5432a0464d53p-608, 0.0, 0.0, 0.0, 0.0,
     0x1.92baae16b2be9p-574, 0.0, 0.0, 0.0, 0.0, 0x1.5ef8c03d65bbfp-41,
     0x1.dfb76cd3793b5p-250, 0.0, 0x1.df69cb5257394p-865, 0.0, 0x1.8fb386bd64b96p-782,
     0.0, 0.0, 0x1.2139ecd5b1dcfp-414, 0x1.75ff8454bb7e9p-80, 0x1.f058dfd8079f8p-809,
     0x1.75db8d06f4b89p-80, 0x1.e371b9cf47facp-761, 0.0, 0.0, 0x1.b348ecff9be3p-618,
     0.0, 0x1.ddc6dd5ab68a6p-487, 0x1.410ca304e50a8p-856, 0x1.13db6ed51c45ep-151,
     0x1.ccbb705ede766p-637, 0x1.6a2a1654e7aa9p-49, 0x1.53b114d32350cp-896, 0.0, 0.0,
     0.0, 0x1.b0920456a18e6p-572, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_acoshd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_acoshd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_acoshd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
