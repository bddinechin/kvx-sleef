/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind4_u10kvx.c --function Sleef_asind4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.86ece9fa7438fp-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc9a604589343p-398, 0.0,
     0x1.9fee2aa54c417p-887, 0x1.90e138baee2c1p-893, 0x1.c38ce956ba95ep-247, 0.0, 0.0,
     0.0, 0.0, 0x1.460c679a0faa3p-172, 0x1.95d1b2b781b63p-288, 0x1.91c90e966174bp-617,
     0.0, 0.0, 0.0, 0x1.0ef790588d5e2p-130, 0x1.0d533c4119503p-550, 0.0,
     0x1.f43aa06ae2163p-321, 0x1.62824ff9c4089p-154, 0.0, 0x1.bcd3773c0b169p-380, 0.0,
     0x1.2cf51d8c76693p-171, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.edc25a1bc317ep-919, 0.0,
     0x1.8700e1fedffb4p-252, 0.0, 0x1.80ee35de9edfep-960, 0x1.45038e9b9ffd6p-515, 0.0,
     0.0, 0.0, 0x1.1ff53e8ff9bd7p-1021, 0.0, 0x1.5bb7764afb8f8p-913,
     0x1.ba52879ef3e13p-319, 0x1.0801ed9b87d11p-608, 0.0, 0.0, 0.0,
     0x1.0f5a37e12ff34p-82, 0.0, 0x1.cc7390872d88ep-448, 0.0, 0.0, 0.0,
     0x1.8ce3bfc729845p-490, 0.0, 0.0, 0x1.f76b47455a6f6p-435, 0x1.dd3f2731b9fcfp-172,
     0x1.d7941260ee41dp-599, 0.0, 0.0, 0.0, 0x1.51b8f4463c7cdp-77, 0.0, 0.0, 0.0,
     0x1.976a5d17c58a9p-660, 0.0, 0.0, 0x1.a2ea2c424a8aap-55, 0x1.4402ef7a70305p-365,
     0x1.baaa91570a74fp-15, 0x1.21ad9b44e61ecp-430, 0.0, 0x1.72ba13bff883ep-98, 0.0,
     0.0, 0x1.3337ebb117cb9p-648, 0.0, 0.0, 0.0, 0.0, 0x1.1f2812ccef33fp-316, 0.0,
     0.0, 0.0, 0x1.c57482a95f781p-571, 0.0, 0x1.449b7699547f9p-104, 0.0, 0.0, 0.0,
     0x1.c56a6a910c5a9p-451, 0x1.c18b404e2e2a1p-310, 0.0, 0.0, 0x1.2ee358ac4b0ffp-587,
     0.0, 0x1.4e0d86746bcacp-558, 0x1.d9bfc4aed1c3bp-53, 0x1.ecd09e5fe028p-141,
     0x1.1d815fafeba91p-499, 0x1.957814b3b22d3p-289, 0x1.15196872db42p-584, 0.0,
     0x1.7dc6c2c62d33p-671, 0.0, 0x1.1c24ddd58ba98p-428, 0.0, 0x1.0643d6fed8232p-202,
     0x1.d841e6946d87fp-144, 0.0, 0x1.5f74a70ee8cc8p-334, 0.0, 0.0, 0.0, 0.0,
     0x1.1a377327c902ep-998, 0x1.aaf41b9dd2528p-628, 0.0, 0x1.4a295f303353fp-469, 0.0,
     0.0, 0.0, 0.0, 0x1.3b1c3efae1227p-543, 0x1.3ee9761055cc2p-267,
     0x1.0fc5463cda25dp-439, 0.0, 0x1.8dce9772de873p-252, 0x1.de41f09a2ca19p-4, 0.0,
     0.0, 0x1.ec3dfca99ffa2p-458, 0.0, 0.0, 0x1.6e612424f7ecdp-558,
     0x1.c4a09e3f9fc48p-233, 0x1.6b81ffb06a86ep-596, 0x1.28c33514f5fc4p-574,
     0x1.b8743276bb8dbp-776, 0.0, 0x1.31a0915b7d3aap-597, 0x1.88c08e1621d17p-1017,
     0.0, 0x1.955d15dd3413fp-659, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.005c9e640e04dp-916,
     0x1.2075c281a6dap-193, 0.0, 0x1.910070e462646p-445, 0.0, 0x1.9efbf093ce687p-348,
     0x1.699eb9a63b35cp-432, 0x1.34c65bbe20637p-368, 0.0, 0.0, 0x1.90c45d4b45726p-251,
     0.0, 0.0, 0.0, 0x1.b300911c3748bp-733, 0x1.9024095e12541p-878,
     0x1.07f1b6d711e98p-17, 0x1.0cc59c08d010bp-622, 0.0, 0x1.572746f756f04p-646, 0.0,
     0x1.5fa0e190554c1p-806, 0x1.395d8836cf8bap-306, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f793c85351b3cp-271, 0x1.f884ab35c8d8p-9, 0.0, 0.0, 0x1.5f6b6a4af1f34p-208,
     0.0, 0x1.8fd72a55b979ap-309, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.179c8446d97dap-15,
     0x1.539a41f1daa1fp-286, 0.0, 0.0, 0.0, 0x1.43845af890865p-454,
     0x1.aefe7cb9dbd4ap-537, 0x1.b639b62e78401p-752, 0x1.1d43fe8f11f9dp-355, 0.0, 0.0,
     0.0, 0x1.bcc07278231a7p-648, 0x1.980f09bab6bafp-132, 0x1.4da32d4830f7ap-643,
     0x1.beebd08b00e9bp-525, 0.0, 0.0, 0.0, 0.0, 0x1.77ca173cf6a3dp-300, 0.0,
     0x1.072ae0fa4c3cep-293, 0x1.0266b80045abdp-724, 0x1.aea8d027c85a2p-935, 0.0, 0.0,
     0.0, 0.0, 0x1.03adff17cfb5cp-883, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.964b233f78ff9p-964, 0.0, 0x1.3acc6950165a1p-605, 0x1.a0ded9271d5c4p-757,
     0x1.faed4fcdb56fep-278, 0.0, 0x1.dfff96b567f08p-517, 0x1.82bc82622f38dp-896,
     0x1.6865a1d8a9cd1p-7, 0.0, 0x1.2cb04682788f2p-824, 0x1.145cbfacfdb7ep-26,
     0x1.a6225272b398p-398, 0.0, 0.0, 0x1.1789a47f09d01p-389, 0.0, 0.0, 0.0,
     0x1.8d2101723a209p-89, 0x1.fd202d295cfbep-942, 0x1.49ecbe61d7db5p-989,
     0x1.e768199553fdcp-931, 0.0, 0.0, 0x1.b62538b5bae2bp-40, 0.0, 0.0,
     0x1.c2392b11e5d0bp-148, 0.0, 0x1.429205230020cp-95, 0.0, 0.0,
     0x1.6de576d669fep-899, 0x1.99db76943462dp-354, 0x1.7839eba41cecp-736, 0.0, 0.0,
     0x1.9f4f41df2eap-952, 0.0, 0.0, 0x1.dd8aa08ca13cp-78, 0x1.e09f76d0be8a8p-9, 0.0,
     0x1.b431b2ae8b4e8p-585, 0.0, 0.0, 0x1.4739f2c72fbaep-932, 0x1.f3291e2b7c019p-356,
     0.0, 0.0, 0.0, 0.0, 0x1.b41b2e3ab4d84p-10, 0x1.283e1cd2e9fb7p-379,
     0x1.0a270ffc445ccp-564, 0x1.f5e8715d7b193p-585, 0x1.e0c9fed965a9p-66,
     0x1.c853ee4e0d2bap-227, 0x1.2a1c214a518d4p-787, 0.0, 0.0, 0x1.b27a6c8174473p-527,
     0x1.96286b5c3e013p-405, 0.0, 0x1.1c3d1103913c7p-487, 0.0, 0x1.55a3408dcf6aep-397,
     0.0, 0.0, 0.0, 0x1.ac7506fdf839bp-887, 0x1.5663746dfd31fp-1008, 0.0,
     0x1.9d27c3a3f6ba4p-992, 0.0, 0x1.ef22847ca00e6p-821, 0x1.43dffe5101c7p-717,
     0x1.b2341a92c16d6p-566, 0x1.eef8b380ea333p-438, 0x1.b0b21ffd83644p-310, 0.0,
     0x1.775c69ff3f8e9p-841, 0x1.5e0402ed80dd8p-33, 0.0, 0x1.5047c1ec910d1p-1021,
     0x1.bbc12985d298fp-183, 0x1.2c78e9ce052c4p-910, 0.0, 0.0, 0x1.39901ce3977f4p-438,
     0.0, 0x1.84cc8c9b293bep-766, 0.0, 0x1.c2223be222adcp-589, 0.0,
     0x1.046c38472d0cbp-792, 0.0, 0x1.a7fe720e7b1bcp-689, 0x1.de6b3804c081dp-677, 0.0,
     0.0, 0x1.41f6cc1ea2c6ap-718, 0x1.5bc93036ceb58p-436, 0x1.c628137f8c5bp-726, 0.0,
     0x1.792eb1e53cc9fp-321, 0x1.da7a1843319d5p-909, 0.0, 0.0, 0x1.4f696825e0ac3p-68,
     0x1.4eb639abaecc6p-129, 0.0, 0.0, 0.0, 0x1.acb2a4add87bp-139,
     0x1.cf6941964c21ep-203, 0.0, 0.0, 0.0, 0x1.da90ae82af04dp-123,
     0x1.44571eadd12fp-110, 0.0, 0x1.ac030b6845206p-645, 0x1.f9852567de3cp-112, 0.0,
     0.0, 0x1.2220128ee88aap-872, 0x1.500848f9bb3ddp-169, 0x1.dadbd9e128d2bp-153, 0.0,
     0x1.b2d288a465ad3p-394, 0.0, 0x1.bf7505b1ec03fp-750, 0.0, 0x1.142b4a9993dp-325,
     0.0, 0x1.7b6271c27e469p-465, 0x1.b5bed6a2c613p-567, 0.0, 0.0,
     0x1.725d178a75dfbp-510, 0x1.bdf923cb19bbcp-276, 0.0, 0.0, 0x1.fa7bebd613b56p-280,
     0x1.14ce354e40a6p-179, 0.0, 0.0, 0.0, 0x1.29c0c59da603dp-338,
     0x1.0e9289675dabp-886, 0x1.6a5d210ec78c3p-531, 0.0, 0x1.c4b6fdacdd8ep-804, 0.0,
     0x1.b2bf0c9a365d1p-75, 0.0, 0.0, 0x1.df631a78ffe47p-303, 0x1.403713923d219p-875,
     0x1.5adb08b6a4013p-993, 0x1.8a7d13432b91p-537, 0x1.7ed131cbdba2dp-536, 0.0,
     0x1.a6f3b2f5cbdep-740, 0x1.e363270bd3e15p-982, 0.0, 0.0, 0x1.87165c5ef24b1p-831,
     0x1.73e41724ac4c1p-189, 0.0, 0.0, 0.0, 0.0, 0x1.835a67549c68ep-607, 0.0, 0.0,
     0x1.51cb958d3b047p-916, 0x1.151e149132833p-513, 0.0, 0.0, 0.0,
     0x1.6f596361050e2p-113, 0x1.56c2c13bcbcd3p-582, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cc080fc3d56e6p-466, 0.0, 0.0, 0.0, 0x1.318f622fd8649p-64, 0.0,
     0x1.b54f58453ca7ap-620, 0x1.9bf5d36a60d72p-475, 0x1.58c23c74cf917p-204,
     0x1.c09428aa47a0dp-911, 0.0, 0.0, 0.0, 0x1.d7fd0f0cfaa77p-613, 0.0,
     0x1.c001e58dd0e3ep-347, 0.0, 0x1.8142d2127c264p-691, 0x1.28b904bdb9eeep-958,
     0x1.ddb5a8711607cp-815, 0x1.f73a744b15961p-362, 0x1.2d3f1733a3013p-197,
     0x1.298fbab2f6523p-825, 0.0, 0.0, 0x1.d6b755b5170d3p-906, 0x1.0764e9e29840cp-356,
     0x1.e33389ada0511p-971, 0x1.dd0636da83b2dp-516, 0x1.3c97893c5c2e9p-675,
     0x1.58b6ca8c53591p-572, 0x1.63e33cf67623cp-150, 0x1.a16e552e6ca09p-295,
     0x1.0def774bf40d3p-116, 0x1.28f60b037e1c7p-258, 0.0, 0x1.b101a0a20d78cp-509,
     0x1.84e8a69b951fp-19, 0x1.191c425728173p-735, 0.0, 0x1.0b27a3638a802p-505,
     0x1.978a9d44110ccp-490, 0x1.aa76a6ed5c3acp-776, 0x1.823e2fd50cba6p-513, 0.0,
     0x1.f2a255f7a6de2p-44, 0x1.23895cda965b7p-533, 0x1.ab8c39a675db2p-714,
     0x1.b8c4cd38909ccp-12, 0x1.782f33e818998p-650, 0x1.0906ffc6247e7p-978, 0.0,
     0x1.af178ab8a965p-469, 0.0, 0x1.a1d5d4590e988p-457, 0x1.e4407383dfac4p-726, 0.0,
     0x1.f3c04620a7179p-909, 0.0, 0x1.c71e20a392b47p-642, 0x1.a531cd8f57134p-1011,
     0.0, 0.0, 0x1.e0608f0a26d54p-773, 0.0, 0.0, 0x1.274d300fd7201p-724,
     0x1.2b4ab2d4e8337p-574, 0x1.ff8c422d4e455p-454, 0.0, 0.0, 0x1.bda9503391881p-366,
     0x1.283d2eb6c32e1p-568, 0x1.273d3f637f0c6p-1015, 0.0, 0x1.20d0511697aeep-393,
     0.0, 0.0, 0.0, 0x1.d63669dc769a2p-34, 0.0, 0x1.6fc4df63d1dbp-273, 0.0, 0.0,
     0x1.9a640ed5c82bap-179, 0.0, 0x1.6df1ffcb03a1p-112, 0x1.ff45a50fcfda4p-932,
     0x1.e40b68cd57e3ap-416, 0x1.ec8ac83ef3896p-286, 0.0, 0x1.1bb759ea8e33fp-260, 0.0,
     0x1.3b703babb4282p-1005, 0.0, 0.0, 0x1.5908469efd831p-348, 0.0,
     0x1.ca29adab5a8f2p-173, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9f8c8810926cp-726,
     0x1.2ba03ba2d545cp-83, 0.0, 0.0, 0.0, 0x1.12975193eab7bp-817,
     0x1.b8d009004633ep-201, 0x1.55c23818861a6p-561, 0x1.1c2d4cc6915dap-213,
     0x1.ba8b6a33337c8p-794, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e17ca423c9662p-34, 0.0, 0.0,
     0.0, 0x1.492369b920ac4p-955, 0.0, 0x1.c78c1aee8e06ep-22, 0x1.8c60e8dbdf348p-433,
     0.0, 0x1.6d78620bc6d56p-132, 0x1.a264cb87ab644p-165, 0.0, 0x1.8401181a6be3fp-294,
     0.0, 0.0, 0.0, 0.0, 0x1.1debdf24436c3p-383, 0x1.87c2d4a803a2bp-745,
     0x1.cc6bb13530959p-615, 0.0, 0.0, 0x1.1e70672ca1ef3p-383, 0.0,
     0x1.e3668d8c2352cp-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f048c9306b2b1p-248, 0.0,
     0x1.04aa12d5b24b4p-208, 0.0, 0x1.9b280494aac0bp-787, 0.0, 0.0,
     0x1.c4016595dc763p-568, 0x1.f294a57038062p-858, 0.0, 0.0, 0.0,
     0x1.7c1f27ae1e45dp-167, 0x1.5a1c272c5b404p-42, 0.0, 0x1.254a35999fb01p-34, 0.0,
     0.0, 0.0, 0x1.c37b12e377bf8p-402, 0x1.2f96ec65c296fp-201, 0.0,
     0x1.f5fdca4aceac8p-950, 0x1.4980506b1046p-115, 0.0, 0.0, 0.0,
     0x1.0e884f347c6f5p-192, 0.0, 0.0, 0x1.d5ab55f0a37fap-151, 0x1.3ebf033431b0fp-358,
     0x1.426f3a176668fp-797, 0x1.7e7877618c1a6p-462, 0.0, 0x1.32267ae3388d6p-830,
     0x1.79330fa670b0fp-190, 0.0, 0x1.bf0eb86828eedp-587, 0.0, 0x1.f90a1f0c93acdp-582,
     0.0, 0.0, 0.0, 0.0, 0x1.e5b1e7b31621p-307, 0x1.13ea59c3d96eep-197, 0.0, 0.0, 0.0,
     0x1.577b8b120acf1p-698, 0x1.404e611304965p-138, 0.0, 0x1.8583a91a9b90fp-926, 0.0,
     0x1.9ebaa3bfbcf33p-265, 0x1.ed40bc23aab4ep-859, 0x1.ec45860e47866p-331,
     0x1.7a4b69c339481p-496, 0x1.0e497095cd06cp-64, 0x1.65f46a4016238p-542, 0.0,
     0x1.0bf137d27efd4p-608, 0x1.1432f8687710cp-992, 0x1.c85acaef4dd29p-278,
     0x1.a406a695886ccp-136, 0x1.b335508ce0f0ap-595, 0.0, 0x1.fa0a1eba4a185p-879,
     0x1.cbad0c0f17024p-379, 0.0, 0.0, 0.0, 0x1.b3785347bbbf3p-347,
     0x1.f04404d69ad88p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd1c6f879bc3cp-229, 0.0, 0.0, 0.0, 0x1.bca90624a6ba2p-959,
     0x1.47bd7086ef7acp-870, 0x1.03d146bfb5ddfp-601, 0.0, 0x1.819967c7524f2p-877, 0.0,
     0x1.492c390067758p-262, 0x1.316ff91aac018p-206, 0x1.8e351ddd85f47p-56,
     0x1.692ab8d532311p-582, 0.0, 0.0, 0.0, 0x1.f80b2998914c6p-194,
     0x1.32bcdae4de503p-300, 0.0, 0x1.95fc62aa0e839p-200, 0.0, 0.0,
     0x1.df09b638a5dep-40, 0x1.b74603467ece1p-671, 0x1.bc31f21044989p-498,
     0x1.cde5110f703adp-280, 0.0, 0x1.9f24f7d93e1cbp-231, 0x1.fb5bed418552cp-953, 0.0,
     0.0, 0.0, 0x1.4629f2bdec4cfp-421, 0x1.efa8eeada268fp-314, 0.0,
     0x1.7485f07238014p-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9107f23b702e3p-348,
     0.0, 0x1.5c6cac8e109fdp-468, 0x1.e5f14fed6d19p-218, 0.0, 0x1.96c727f8a6cbdp-821,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7ae06cb04b87p-993,
     0x1.006fc2632d62cp-370, 0x1.d1429a190273ap-218, 0.0, 0x1.5f73c4be21b5fp-388,
     0x1.13eeb8b36fd6dp-943, 0x1.41ce7f7a71063p-1001, 0.0, 0x1.aec69cc1801bfp-406,
     0x1.b9513fe15281dp-143, 0.0, 0x1.7038214c1e719p-1014, 0x1.5e51c70a27f7dp-984,
     0.0, 0x1.3f83eb9db7fa7p-302, 0x1.ec4332435887ap-73, 0.0, 0.0,
     0x1.d3c30e83eef61p-814, 0.0, 0x1.f62ffe1487678p-772, 0.0, 0x1.e6e3a43d93e7fp-710,
     0x1.2b735e2432807p-842, 0x1.aa5e2a5d28a3p-476, 0x1.cfc54262640eap-135,
     0x1.5b6564d14e787p-838, 0.0, 0.0, 0x1.43c725876f6dcp-742, 0x1.52fcdfb7c1bf4p-863,
     0.0, 0x1.d123ebe9baa48p-953, 0x1.252961af8575p-246, 0x1.af16d536de3b8p-674, 0.0,
     0.0, 0x1.6fd2ebf3fb88fp-735, 0.0, 0x1.9edd2f9410d87p-771, 0.0,
     0x1.9cb4250839e05p-264, 0x1.4f2a6f64129dcp-188, 0.0, 0.0, 0.0,
     0x1.971ce83359296p-987, 0x1.b0b1f40cefbdep-1014, 0.0, 0x1.5deaf030eb1aep-854,
     0x1.9a16872652851p-267, 0x1.8b2c042b7ae37p-550, 0.0, 0.0, 0x1.fe2dae99911a2p-122,
     0.0, 0.0, 0x1.e01ac7251401cp-350, 0x1.427524be17f95p-290, 0.0,
     0x1.cbcfa090973f5p-213, 0.0, 0.0, 0.0, 0x1.245bd3e1215ffp-56,
     0x1.16f3098241804p-773, 0.0, 0.0, 0.0, 0x1.ef1fd4b465674p-886, 0.0, 0.0,
     0x1.945638bff23b1p-210, 0.0, 0x1.33bc254dd7dffp-323, 0.0, 0x1.7edac1cc9dfbcp-419,
     0x1.fb520e47a127p-981, 0x1.2b88c29a05ae1p-518, 0x1.22ed32a06ad6ep-889, 0.0, 0.0,
     0x1.e615941f7fb47p-975, 0x1.b327fa042310dp-119, 0x1.8935c3a7a98a5p-238, 0.0, 0.0,
     0x1.93deadd77ceebp-907, 0.0, 0x1.4a6e1527a2741p-611, 0x1.0aed0f6dcae76p-493,
     0x1.a42446a195188p-387, 0.0, 0x1.bf669f5423146p-172, 0.0, 0x1.51b44f3529724p-446,
     0x1.af6e83ab4b793p-757, 0x1.c970c87af3bc4p-399, 0.0, 0x1.ec2b48342599bp-238,
     0x1.81c997a106356p-943, 0.0, 0.0, 0x1.1b920faa9c9c3p-17, 0x1.766a28c1b3e58p-570,
     0x1.5bab3ad7a3039p-46, 0.0, 0.0, 0x1.503101b561b6ep-49, 0.0,
     0x1.8c237c24f0037p-824, 0x1.f3dd1a79dce07p-574, 0x1.02fc4fe04d972p-191, 0.0, 0.0,
     0.0, 0x1.d009ff0ad0aebp-800, 0x1.7a936d9bf5d7bp-775, 0x1.bef0158022802p-1001,
     0.0, 0x1.aaded68ecc783p-921, 0x1.1bf52cd4e9fbap-630, 0x1.dc035cb4bc4a5p-935, 0.0,
     0x1.b2e5d3f789ec7p-487, 0x1.0b4dfb6e83e79p-83, 0x1.763d2f7c26b2ap-746,
     0x1.55e2fd2730b17p-917, 0x1.5c0e9b6565536p-552, 0.0, 0x1.c937da1744dfap-633,
     0x1.1e6754ec0b0b2p-81, 0.0, 0.0, 0x1.7c09fa9f20d1cp-996, 0.0, 0.0,
     0x1.408580d815fb3p-841, 0x1.3d723319afb3fp-753, 0.0, 0x1.af800090057acp-974,
     0x1.9b6577d9a9c09p-905, 0x1.dbc4a5fc8dadp-402, 0x1.053980a2760c5p-862,
     0x1.2b4b5a065b68ap-295, 0x1.aa383661871e3p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.93a76edec8ebbp-178, 0.0, 0x1.691188f3c68ffp-205, 0x1.9e424e8166f74p-1004,
     0x1.cf4bec248295ap-984, 0.0, 0.0, 0x1.c9a5a57b889adp-28, 0x1.ac5d211df9d4fp-353,
     0x1.6e9f02dfb28a7p-706, 0.0, 0x1.32a97f8db1c36p-628, 0.0, 0x1.a51b81900721fp-446,
     0x1.a06bdb2336098p-458, 0x1.9c143b747719p-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.67af93b58a32ap-78, 0.0, 0.0, 0.0, 0x1.b96b2e27a9679p-64, 0.0,
     0x1.5f50cc5b317b1p-736, 0.0, 0.0, 0.0, 0.0, 0x1.d710f22a9071ap-321,
     0x1.946608c335f0ap-216, 0x1.8bc441339286ap-781, 0x1.83857ea225b55p-208,
     0x1.5f61c07a7f7c3p-855, 0x1.1bb43993fa0dbp-160, 0.0, 0.0, 0.0, 0.0,
     0x1.633215fa1c0e8p-482, 0x1.fe5a107a16b34p-159, 0x1.250ed64d1845cp-893,
     0x1.e579946f8dfdap-309, 0x1.7c3e193de616p-601, 0.0, 0.0, 0.0,
     0x1.b085fd5f2594dp-76, 0x1.b28e2dabe035fp-684, 0.0, 0x1.8dbdd8fefed94p-125, 0.0,
     0x1.08664175e7259p-151, 0.0, 0.0, 0x1.af7ecbce17639p-675,
     0x1.df8e85cfd7ee1p-1000, 0x1.012f95f7be2c2p-25, 0.0, 0.0, 0.0,
     0x1.8e235ad8cc036p-129, 0x1.58ead9e2a8e6fp-879, 0x1.c846a67a94eeep-711,
     0x1.b1c5998eca62p-631, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53786ae95bd4ap-30,
     0x1.b5dee72a0ad4dp-863, 0.0, 0x1.df2f2620a6c04p-992, 0x1.5bcb8aa68f39cp-326,
     0x1.01d6f7b66155fp-766, 0.0, 0x1.38529d4d4212bp-576, 0x1.51c5d0f2d9406p-618,
     0x1.7d053c0a00badp-903, 0.0, 0.0, 0.0, 0x1.1cdf70e52a356p-956,
     0x1.7e7106b6c92d5p-72, 0x1.c27b168fc822ap-454, 0x1.7ead33384315fp-747,
     0x1.9ad0f65fccc6cp-256, 0x1.b1b0181a50c3fp-626, 0x1.a40f641145093p-358, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1e6f77a09cd9cp-25, 0x1.4d80b7824d12fp-641, 0.0,
     0x1.3a0e3a5832f3p-355, 0.0, 0x1.1766889610bbfp-417, 0.0, 0x1.0528bb2999baap-40,
     0x1.3f43ce59a5192p-610, 0x1.21075c0d05119p-594, 0.0, 0.0, 0x1.0faf4ae061d25p-603,
     0.0, 0x1.194a62f5c02bp-873, 0x1.8e160475f8461p-554, 0.0, 0x1.48325c0ae873dp-78,
     0x1.12885a9e659fp-816, 0.0, 0x1.b716216914a0dp-533, 0x1.667855b930fdbp-733, 0.0,
     0.0, 0x1.33f71edfe01b9p-611, 0.0, 0.0, 0x1.a04d1ac328493p-568, 0.0, 0.0,
     0x1.805297cbe28d6p-283, 0x1.0ade20ec1943ap-817, 0x1.9e092786f3a44p-582, 0.0,
     0x1.862debf5afc39p-363, 0x1.abdc59321b251p-624, 0x1.e0daaf476fdf4p-205,
     0x1.20c5e99ec0d42p-368, 0x1.c7a918cccabd7p-206, 0x1.0c26c0a069685p-241
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
            tmp1 = Sleef_asind4_u10kvx(tmp0);
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
    printf("Sleef_asind4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_asind4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
