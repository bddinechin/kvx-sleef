/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpid2_u05kvx.c --function \
 *     Sleef_finz_sinpid2_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0.0, 0x1.321be695d151bp-792, 0.0, 0x1.a5637a3cfa77ap-34,
     0x1.ddf1616a1c9bcp-959, 0x1.af0c79201d9cfp-95, 0.0, 0x1.355b7cab25abp-560,
     0x1.f0b7bbe16da5dp-191, 0.0, 0.0, 0x1.b29cf0d764596p-850, 0x1.ea3b45b610a38p-387,
     0x1.4c19b0eadc02bp-776, 0x1.5b79d3774f9fbp-953, 0x1.c3f1973d4947ep-429, 0.0,
     0x1.76be3a9b3e28ep-305, 0.0, 0.0, 0x1.ee083091339e2p-50, 0x1.f936f1bce1892p-354,
     0.0, 0.0, 0x1.2d43ec107abb1p-454, 0.0, 0x1.5faeb12d242dp-994,
     0x1.dc3968826b188p-674, 0.0, 0x1.d283ff4fbfdb8p-406, 0x1.ac619a900a875p-266,
     0x1.b5d4f788d092dp-992, 0x1.3bf6d6f1cfb34p-85, 0.0, 0.0, 0x1.0c91d18c88aa3p-619,
     0.0, 0.0, 0x1.1208390a05be1p-77, 0.0, 0x1.ce53448aed04fp-882, 0.0,
     0x1.54f76fbcc264cp-829, 0x1.3e625574fd333p-184, 0x1.24e6d17fbaabbp-748, 0.0, 0.0,
     0x1.cd47829f68c16p-793, 0.0, 0.0, 0x1.8735b73af503dp-931, 0x1.4b3925c8909aep-704,
     0.0, 0.0, 0x1.94d6e91b38237p-1009, 0.0, 0x1.fd183bb74b7fbp-414,
     0x1.71dfc800fb0cbp-71, 0.0, 0x1.658accd52ff29p-22, 0.0, 0x1.cdca21e59f06p-362,
     0x1.b2526e6ff38a9p-905, 0.0, 0.0, 0x1.97c4edb7cf517p-57, 0x1.05b4ddeb119fdp-315,
     0x1.049e29717caafp-272, 0.0, 0x1.a5e5a5cc8359ep-172, 0x1.eb007eed86832p-197,
     0x1.0976fbd688b4bp-259, 0x1.668a8368476d3p-325, 0x1.c985e35f459f4p-791, 0.0, 0.0,
     0.0, 0.0, 0x1.1de5f8a7cdda6p-33, 0.0, 0.0, 0x1.47b191aad3563p-953, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.53358a9160045p-724, 0.0, 0.0, 0.0, 0.0,
     0x1.ba81757126d12p-32, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a557006962p-186, 0x1.7ca8c342acdb1p-367, 0.0, 0.0, 0.0,
     0x1.042a38e7d8447p-861, 0x1.0a7d1904ab073p-847, 0x1.b4f1c85a7c0a6p-758,
     0x1.654c8075c6839p-66, 0.0, 0x1.ddfd3a37d5795p-16, 0x1.6db505f9ab36bp-382, 0.0,
     0.0, 0x1.5b197bd0c2f66p-987, 0.0, 0.0, 0x1.048497fb31a8p-732, 0.0, 0.0, 0.0,
     0x1.a9bfe24289b1cp-31, 0.0, 0x1.ea69658a98292p-472, 0.0, 0.0, 0.0, 0.0,
     0x1.dfd07b35865d6p-915, 0.0, 0.0, 0.0, 0x1.9639e3b8a7ffbp-121, 0.0,
     0x1.d0981de76d8ccp-424, 0.0, 0x1.fab05560ee8a6p-921, 0x1.3887aece451dbp-977, 0.0,
     0.0, 0.0, 0x1.25335a2116addp-65, 0.0, 0x1.5887fc1e1759fp-706, 0.0,
     0x1.636e9789fa2a8p-14, 0x1.1fdcb5057bb6ep-895, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b38941b99e3ccp-602, 0x1.13387bcd8146dp-720, 0.0, 0x1.c2381e12b846ap-941, 0.0,
     0.0, 0x1.4d1707cade07p-810, 0x1.2046047401661p-40, 0x1.32f663b1824e8p-101, 0.0,
     0.0, 0x1.55b940a5857eap-647, 0x1.173f115a35557p-397, 0.0, 0.0,
     0x1.567748cc93f03p-162, 0.0, 0.0, 0x1.268718537d032p-544, 0x1.14414047baf7bp-306,
     0x1.8d12c60f15ac3p-665, 0x1.f813a6ed25563p-179, 0.0, 0x1.ee066fe58a0eap-946, 0.0,
     0.0, 0.0, 0x1.4ea6746e97714p-838, 0x1.86fa66b39686p-745, 0x1.edc9e619fe931p-833,
     0.0, 0.0, 0x1.7a6b116fb38fcp-344, 0x1.6bf6bbece586ep-336, 0.0, 0.0,
     0x1.1cfdb7500f6b9p-190, 0x1.fa183b67affb8p-257, 0x1.13fc6b039ab31p-465, 0.0, 0.0,
     0.0, 0.0, 0x1.61e0674a81a21p-923, 0.0, 0.0, 0.0, 0x1.d81378e1e5802p-74, 0.0,
     0x1.d214fb88a02fcp-121, 0x1.d81cc82645194p-749, 0.0, 0x1.e533ebf3d633ap-731, 0.0,
     0.0, 0x1.07a4bf167ae96p-648, 0.0, 0x1.5cf6afc18d478p-361, 0.0, 0.0, 0.0,
     0x1.e1073c4e75167p-688, 0.0, 0x1.76b50dcf1c63ep-241, 0x1.35b2c66eb7bcep-492,
     0x1.15196254b7dcbp-521, 0x1.c52ee13e77c11p-390, 0x1.2bbf75e4c460dp-1000, 0.0,
     0.0, 0x1.13289bd6a6b8p-372, 0x1.362a5e66153f2p-996, 0x1.7edb42292e681p-265, 0.0,
     0x1.48fed7b2b3f31p-670, 0x1.7d90f4def927cp-89, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d5e2a750b7d9bp-608, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c4fda7dd4be7p-151, 0.0,
     0.0, 0.0, 0x1.5e228f69278adp-57, 0.0, 0x1.3986a05952a05p-397, 0.0, 0.0,
     0x1.0047df9fb54b1p-199, 0.0, 0x1.a5ba8694caa66p-319, 0.0, 0x1.740b9e2e81d79p-21,
     0x1.0196b74a3ffc6p-360, 0.0, 0.0, 0x1.a33999706aeabp-164, 0.0, 0.0,
     0x1.758c34ea0cae5p-37, 0x1.e1a86fd0554a5p-594, 0.0, 0.0, 0x1.7543095a9d266p-378,
     0x1.cc590cf84d6e6p-593, 0x1.123d4ee72b70ap-503, 0x1.60d40f369c1c8p-570,
     0x1.3002cc2423eddp-909, 0x1.d98927353b07cp-320, 0x1.48765ad564732p-502, 0.0, 0.0,
     0.0, 0x1.b5235f4db9cb8p-443, 0x1.7072b3a25e228p-100, 0x1.763427ae48cc3p-663, 0.0,
     0x1.d2cc6aaddb50ap-934, 0.0, 0.0, 0.0, 0x1.572964aef11ccp-248,
     0x1.c418d9ff86ac6p-680, 0.0, 0.0, 0.0, 0.0, 0x1.24a8c41b9a903p-210, 0.0,
     0x1.e98430247f219p-264, 0x1.1d52bf072fa55p-308, 0.0, 0x1.bda01002a5f2bp-701, 0.0,
     0x1.7a005832e03b7p-269, 0.0, 0x1.8a2c1c412ba86p-70, 0.0, 0x1.a124ee4df8e37p-206,
     0x1.2571d5438f985p-1003, 0.0, 0x1.51393a2d8101fp-1003, 0.0,
     0x1.852e58f7bc5a6p-821, 0.0, 0x1.9760fa93666e7p-419, 0x1.e727498e890e8p-836,
     0x1.a931a5613903fp-551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e50e3a43de494p-199, 0.0, 0x1.94f9ada61c26dp-129, 0x1.0c55bbaa1bc3fp-586,
     0x1.ee96d7e00ec7fp-204, 0.0, 0.0, 0x1.990923965820cp-702, 0x1.98cc29e308797p-343,
     0x1.a177827a04ba9p-311, 0.0, 0.0, 0x1.4aa61c7eb5d72p-405, 0.0, 0.0, 0.0, 0.0,
     0x1.212b141f4236dp-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8fc561e1034cp-335,
     0x1.18b5437958374p-73, 0x1.b8d7d33be8eb6p-52, 0.0, 0x1.794d2666a2228p-301, 0.0,
     0x1.4e1ba6c10ce3ap-227, 0x1.385de323fe65dp-10, 0x1.229f8a688af1cp-31,
     0x1.2e451d393f814p-602, 0.0, 0x1.20fe124c39fbfp-461, 0.0, 0.0,
     0x1.1e6f3e1c510dp-255, 0x1.816fd65291f5ep-630, 0.0, 0.0, 0.0,
     0x1.a184741535683p-24, 0.0, 0.0, 0x1.b0bfbcc79936bp-399, 0.0,
     0x1.cfea9eebf01f8p-354, 0x1.8b10c830eb44ep-692, 0.0, 0.0, 0.0,
     0x1.b7c2753e77ac2p-370, 0.0, 0x1.c7632db87c55cp-953, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4bc7d0e764bb7p-383, 0.0, 0.0, 0x1.8f780b6408f75p-605,
     0x1.63b3771a82543p-109, 0x1.09105db069971p-950, 0x1.0c7ba61deaf55p-293,
     0x1.b56e2c8dfb3a3p-513, 0.0, 0.0, 0x1.ad0e46bbd9434p-322, 0.0,
     0x1.63db5cd4a002ep-470, 0.0, 0x1.b8bec2f9095a2p-412, 0.0, 0x1.d26a9fee0c922p-277,
     0x1.1f8d3b4a9d9cep-279, 0x1.021e585dd6b73p-324, 0.0, 0x1.52d4cf54d6865p-449,
     0x1.4a2663d5654e9p-663, 0.0, 0x1.3714b2dd3b304p-329, 0x1.06cb4c10bc6a8p-659,
     0x1.5f215ed6aafb9p-912, 0.0, 0.0, 0x1.50558c3fe3687p-117, 0.0, 0.0, 0.0,
     0x1.7f52dfdaa3646p-216, 0.0, 0.0, 0x1.efa5ba3266c4ap-599, 0x1.b4d6c13ce530dp-489,
     0.0, 0x1.416455751ce18p-897, 0x1.ce0274ffa19e6p-668, 0.0, 0.0,
     0x1.53515dda9f14bp-206, 0.0, 0.0, 0x1.b3a02c8ba9f49p-883, 0x1.8c23d617e018p-203,
     0.0, 0x1.c01cf1f0dcad3p-152, 0x1.71d5327fa7539p-366, 0x1.52e50a1339b0ap-746,
     0x1.589601f6ae255p-640, 0.0, 0.0, 0x1.189332419c9c7p-734, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fb0fa2f65c044p-194, 0x1.68f31cb4aa06bp-247, 0.0, 0.0,
     0x1.cffcf5144d88cp-725, 0x1.5ab781bea335bp-319, 0.0, 0.0, 0x1.b1e2ff1894decp-77,
     0.0, 0.0, 0x1.556d65b7457a3p-865, 0.0, 0.0, 0.0, 0x1.798147574153ap-449, 0.0,
     0x1.9cd5188fc0d6ap-214, 0x1.7ca2fafdffa52p-452, 0.0, 0x1.1afbbe5925249p-972,
     0x1.60b3b653839adp-25, 0x1.8ae3b39ed2732p-591, 0x1.c82185b12f5f5p-261, 0.0, 0.0,
     0.0, 0.0, 0x1.28ec54c6ada38p-713, 0x1.44489c118cf8bp-105, 0x1.027870eb39171p-336,
     0.0, 0x1.627adfe43238bp-65, 0.0, 0.0, 0.0, 0x1.2cb1912fa0c39p-657, 0.0,
     0x1.ed23d27b08672p-762, 0x1.2539bb10f0e8dp-727, 0x1.11ed1894f430ap-497, 0.0,
     0x1.746df5e2a482bp-368, 0x1.3abbd15a1c83dp-328, 0.0, 0.0, 0x1.f4b47122f7034p-387,
     0.0, 0.0, 0x1.93b3b18ccac2fp-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8529d8b354eap-338, 0x1.a8922359db88cp-371, 0x1.92d17efc303bbp-641, 0.0, 0.0,
     0x1.569d49d3ffeabp-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7d4a2836f006p-874,
     0x1.608c2663149ep-26, 0.0, 0x1.23a38dd6b0e3ap-783, 0x1.6e196ca17e37dp-987,
     0x1.160b171be4d77p-899, 0.0, 0x1.87dbaf49da443p-949, 0x1.0c04774dd4387p-208, 0.0,
     0.0, 0x1.70b4804451a7ap-997, 0.0, 0.0, 0.0, 0x1.02be34e08ab2p-434,
     0x1.203c2424631b9p-658, 0.0, 0.0, 0x1.71f7f6d52fbeep-900, 0.0,
     0x1.1df0b77d1030dp-829, 0x1.30b71075a3b46p-797, 0x1.7028886537b51p-1008,
     0x1.66bd82b2ed0ffp-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dea9e7f4e139cp-649, 0.0, 0.0,
     0x1.a1c6898a9b476p-72, 0.0, 0x1.8a0310c333933p-880, 0.0, 0x1.f661863f14773p-241,
     0x1.8d599d645a0aep-635, 0x1.78a3a2c728dffp-461, 0x1.076d0f8cd1601p-967,
     0x1.f1815b01fad64p-641, 0.0, 0x1.6d2a2e87d3f08p-1018, 0x1.227b8fa2ab922p-932,
     0.0, 0x1.7e1f8fc215b3cp-131, 0x1.9378379c5ae3cp-601, 0x1.72eaa893f37bdp-898,
     0x1.6ac520d76a2e1p-749, 0.0, 0x1.00a383b1d0c1ep-853, 0x1.65b6a4128bfc9p-574,
     0x1.579dbe233f686p-878, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe8b93613ff91p-895, 0.0,
     0.0, 0x1.40638076af111p-194, 0x1.b7cb7898dbc7ap-740, 0.0, 0.0,
     0x1.827049c7c3ebdp-53, 0x1.deeb47fb3bc53p-185, 0x1.9e8dfdab57d8ap-700, 0.0,
     0x1.a20cddfb1829ep-964, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb37c2421920ap-930, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84ed2d566358bp-545,
     0.0, 0.0, 0x1.972e073c6aaebp-529, 0x1.5cd4803c61999p-955, 0.0,
     0x1.f50f3ed1ad812p-960, 0x1.b1694689f7362p-698, 0x1.12f74097e8defp-760, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f40d20784b2ccp-418, 0x1.899cb457c1643p-174, 0.0,
     0x1.120b6df8b1868p-502, 0.0, 0.0, 0x1.9ea82e401f001p-714, 0.0, 0.0, 0.0,
     0x1.4c07dcd522dffp-992, 0x1.a1384755093ddp-646, 0x1.5de56d4b65c88p-71,
     0x1.199f1ab1c8b9ep-204, 0.0, 0x1.2ff473048c814p-842, 0x1.8530a2f7c0564p-136,
     0x1.0db13297d0126p-28, 0x1.55177131e958fp-134, 0.0, 0x1.19ce768a3a5e1p-310,
     0x1.cc7037034f52ep-716, 0x1.e43ab8f984181p-349, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5e65b362fe07p-143, 0x1.0b8e5e8911d7cp-302, 0x1.6a53b04f2d43ap-285, 0.0, 0.0,
     0x1.63498c629f4ccp-450, 0.0, 0x1.d55234e73befap-80, 0x1.ebadd42296528p-636,
     0x1.67d26a2790714p-19, 0.0, 0x1.230a109272d48p-61, 0x1.6342f7fb017c2p-761, 0.0,
     0.0, 0x1.feaa27632b9d8p-742, 0.0, 0x1.b0a8143b35d4bp-423, 0.0, 0.0,
     0x1.d0a84334d67b1p-120, 0x1.b40412c951be5p-170, 0x1.ed4ef5f810f98p-513,
     0x1.ceda92cf88af2p-861, 0x1.7111f6dd342fbp-548, 0x1.e162b0a2b6b67p-282,
     0x1.b021a145c6c27p-604, 0.0, 0x1.e66b920d7ae8ap-444, 0.0, 0.0, 0.0, 0.0,
     0x1.1d56294b7632cp-643, 0.0, 0x1.aee137ce24881p-652, 0.0, 0x1.78fd25e73c51dp-489,
     0x1.d6cc4dd005f79p-390, 0.0, 0.0, 0x1.ff87e2baea3d8p-487, 0.0, 0.0,
     0x1.7bbb7c94e9e01p-561, 0.0, 0x1.5185f0ee90b4bp-810, 0.0, 0.0,
     0x1.61c3ced95386ep-1002, 0.0, 0x1.2615e678c6a33p-804, 0.0,
     0x1.f16570fd74ddep-292, 0x1.9c3b14d60f6c9p-962, 0x1.81ee01151f989p-1,
     0x1.f6900fd898872p-1011, 0.0, 0x1.4a13c30679a47p-498, 0.0,
     0x1.46cb1602af16fp-265, 0x1.2275ec62e77dp-720, 0.0, 0.0, 0.0,
     0x1.87727466d4d9dp-829, 0x1.bbdb96a39b895p-1008, 0x1.3cabebc78ee1ep-142,
     0x1.ab8bf98940611p-242, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d88a4cfba937p-667,
     0x1.09b4ee78d29a9p-257, 0.0, 0x1.88d323681d182p-867, 0.0, 0x1.5bee29cbd670ap-189,
     0.0, 0.0, 0x1.0b405047a0eb1p-627, 0.0, 0.0, 0x1.85f4fdf5b9864p-396,
     0x1.2b89231b06141p-918, 0.0, 0.0, 0.0, 0x1.755000ea7d591p-223, 0.0,
     0x1.66f2388738ae5p-209, 0.0, 0x1.91cbc58574eeep-638, 0.0, 0.0,
     0x1.7b71d02056e09p-380, 0.0, 0.0, 0x1.0671a0f0b661bp-754, 0x1.de486e2461338p-24,
     0x1.07dd9f07bbedep-983, 0x1.6e3d2c741aa16p-453, 0.0, 0x1.c2aeb3f51fe33p-845,
     0x1.d59b66f335879p-608, 0.0, 0x1.071d7f2e95232p-556, 0.0, 0.0, 0.0,
     0x1.f58b3c7ca7091p-195, 0x1.48ae39f315c7fp-171, 0.0, 0x1.82bce4e6197e8p-539,
     0x1.801ed545abf05p-189, 0x1.93e881cc6e0f4p-615, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4b9c7db0ed8ap-780, 0x1.bec6bb0c8c39fp-915, 0.0, 0.0, 0x1.31e1d87936f81p-359,
     0.0, 0.0, 0.0, 0x1.61df108feee0ep-239, 0x1.861f2abcb1668p-924, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.83ea18cdaaf13p-766, 0x1.5405afaee82eep-264, 0.0, 0.0, 0.0,
     0x1.b5b8571106433p-724, 0x1.cfd55b7ae39a7p-416, 0x1.43320eaa04fd9p-741,
     0x1.734bcb43bb501p-179, 0x1.dcc179df4b1dap-704, 0.0, 0.0, 0.0, 0.0,
     0x1.f9013ba59b37ap-779, 0x1.9eac4ea577175p-610, 0x1.97848fddad8dp-242, 0.0,
     0x1.89b26ee05aa42p-559, 0x1.d3d7192811e34p-243, 0x1.19af5a60f81a2p-209,
     0x1.a65846dd04df8p-403, 0.0, 0x1.a74f815d265abp-130, 0x1.9098d3ea48cf6p-260,
     0x1.0319628ea38ep-821, 0x1.883d82642c76fp-213, 0.0, 0.0, 0.0,
     0x1.f68a4fc16442fp-40, 0x1.81b9f1aaeb30ap-389, 0.0, 0.0, 0x1.7a6b6bc0e2765p-582,
     0.0, 0x1.1546f0ac44727p-971, 0x1.02ebe301399e5p-796, 0x1.737a9363f8f32p-916, 0.0,
     0x1.3aa053d55b728p-220, 0.0, 0.0, 0x1.8f4fdbdaad8efp-662, 0.0,
     0x1.f534f3228fc13p-579, 0x1.52d6bf4c4a672p-890, 0x1.54423c171a497p-993,
     0x1.2d143fc65b4adp-584, 0.0, 0.0, 0.0, 0.0, 0x1.24d6de399a84fp-533,
     0x1.b7b68c14ddfe4p-28, 0.0, 0.0, 0.0, 0x1.9c67f917f36b7p-724,
     0x1.98d458e03004p-613, 0x1.e54da0509f8a9p-704, 0x1.2962aabf3e865p-109, 0.0, 0.0,
     0x1.5f1a82f523e43p-963, 0x1.bdf222a115f0cp-790, 0x1.7fb4f89cd3a71p-764, 0.0,
     0x1.c60fee51ebe6ep-224, 0x1.2db8a47a46105p-524, 0x1.daf48f681d993p-521, 0.0, 0.0,
     0x1.6802ed9c4419dp-57, 0.0, 0x1.8cf3f7213b5efp-178, 0x1.f1081ab8ff201p-109, 0.0,
     0.0, 0.0, 0.0, 0x1.3903b51bccc5ep-341, 0.0, 0x1.8ae70cc938db3p-220,
     0x1.3795af1a9daccp-733, 0.0, 0x1.56f95ce67ff2ep-24, 0.0, 0x1.9ff041b907398p-5,
     0.0, 0x1.c844937d7dd67p-688, 0x1.81153ac2e8aa3p-291, 0x1.7bb72e16ac901p-1021,
     0.0, 0x1.b31be0223b1bdp-764, 0.0, 0.0, 0x1.318d04a3940b6p-481, 0.0,
     0x1.5bc10754de255p-132, 0x1.3f4f26da5bc6ep-483, 0x1.bee908ef1609dp-680,
     0x1.4b66d958c95c6p-169, 0.0, 0.0, 0x1.9181df06eeeb7p-342, 0.0, 0.0,
     0x1.adb7f2ce4e8a3p-622, 0x1.b1be40cdb560ep-582, 0.0, 0x1.5aec9b8338cf5p-321,
     0x1.2e128ec9f1869p-747, 0x1.3d9200d1c7484p-67, 0x1.788536528f554p-1021, 0.0,
     0x1.00e9031ff4333p-69, 0.0, 0x1.3989a30570977p-203, 0x1.7220d10e6c7c7p-521, 0.0,
     0x1.72f46381e9a73p-284, 0x1.d2eab58ff53fdp-988, 0x1.907638422b6cep-235, 0.0,
     0x1.85cb00fc5c228p-55, 0x1.0f04db40e607p-419, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7efdb1105a6f4p-737, 0x1.a65991ab5b8e3p-453, 0.0, 0.0, 0x1.385dca99dda9dp-617,
     0.0, 0.0, 0x1.3c04d48a9c9bbp-207, 0.0, 0.0, 0x1.fd960cafb1ae2p-996,
     0x1.86601b542723p-740, 0x1.731e57b8a5418p-58, 0x1.2558dd404e3d8p-523,
     0x1.454fba8bcfd4bp-991, 0x1.1f254b20d129ap-240, 0.0, 0.0, 0x1.8c117485384e6p-593,
     0.0, 0.0, 0x1.837ccad481717p-224, 0.0, 0.0, 0x1.818077d03434p-379,
     0x1.820451d43d9dcp-356, 0.0, 0.0, 0.0, 0x1.81bea08a58da8p-128, 0.0, 0.0,
     0x1.4382bb7488679p-503, 0x1.29ba45f357c79p-697, 0.0, 0x1.8898e3fad96cep-669,
     0x1.866e4c3f3d3bbp-993, 0.0, 0x1.717414ce841c4p-639, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8b641045b872cp-650, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fbb77d5d2811p-884,
     0x1.50d3171ab9b33p-413, 0x1.9648fb7bb9de4p-41, 0.0, 0x1.9e3b3f2c113e2p-764,
     0x1.8b61f298a1388p-939, 0.0, 0x1.0e7c30ee50ef5p-212, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.456f1f73ff038p-850, 0x1.57518c10d1507p-449, 0.0, 0x1.63d0716e2567p-441,
     0x1.3ff704fb3008ep-521, 0x1.ce9c241106f01p-918, 0.0, 0.0, 0.0,
     0x1.37babe5d48688p-937, 0x1.85eb19c36f30cp-662, 0x1.7a97ebdef87e5p-631,
     0x1.7ddb0e20d6fa5p-125, 0.0, 0x1.23bb79a59bdcp-594, 0.0, 0x1.bd0ca21c6ec4ep-333,
     0.0, 0x1.c2bf7dad8a7cep-725, 0x1.f3f5d451eda5p-325, 0.0, 0x1.248910f65575cp-672,
     0.0, 0.0, 0x1.445b69f0d5166p-738, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sinpid2_u05kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sinpid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinpid2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
