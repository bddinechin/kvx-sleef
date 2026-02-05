/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d2_u10avx2128.c --function \
 *     Sleef_finz_exp2d2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0.0, 0.0, 0x1.bd63bb03ecd6bp-968, 0.0, 0x1.4767038176e0ep-511, 0.0,
     0.0, 0.0, 0x1.481c37e6efc75p-116, 0.0, 0x1.44b4a65c17294p-221, 0.0,
     0x1.6c15885d5b00cp-263, 0x1.25f830a47e1fp-193, 0.0, 0.0, 0.0,
     0x1.461e8c7e6d5f1p-701, 0.0, 0.0, 0.0, 0x1.920a2c306ed7ep-619, 0.0,
     0x1.44110d127a905p-767, 0.0, 0x1.015d9051d3f49p-184, 0.0, 0x1.0ae310a4313f1p-189,
     0.0, 0x1.8e217775c2b92p-694, 0x1.8f19ffcd5c1d4p-105, 0.0, 0.0,
     0x1.0faecade1a032p-350, 0.0, 0x1.21a34831d1a8p-722, 0.0, 0x1.c07e6c5571d39p-554,
     0x1.3643fac210b0cp-238, 0x1.806533a6b3ec3p-459, 0x1.014139e355c3p-259,
     0x1.31e21675634e3p-177, 0x1.b4dc955d0478p-7, 0x1.66dadb939721dp-72,
     0x1.10c3f8fc130cep-690, 0.0, 0x1.1081d87dfff75p-618, 0x1.ea531533ca45ep-352, 0.0,
     0x1.f641d383b2c2p-801, 0x1.35c0bcc5848f5p-992, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.616f6fa1c192p-84, 0x1.9562e6046764bp-334, 0x1.a0a70f87b0b15p-320,
     0x1.17f7347ca9abfp-945, 0x1.69a3c5dfab1abp-212, 0x1.5988a66935222p-897,
     0x1.7b02ca99e6a4bp-746, 0.0, 0.0, 0.0, 0.0, 0x1.d366738aefe33p-49, 0.0,
     0x1.800a0e6b2f38fp-47, 0.0, 0.0, 0x1.2fc0cc4dc8b4bp-442, 0.0, 0.0,
     0x1.b7798537830ddp-255, 0.0, 0.0, 0x1.a42437411575ep-287, 0x1.c101b0f1f3b6dp-48,
     0x1.6ec03f4313476p-396, 0x1.3824d177d3f86p-272, 0x1.a01996d62639bp-817, 0.0, 0.0,
     0.0, 0.0, 0x1.47deb4dfc0fc5p-29, 0x1.4454bb31f9ddfp-841, 0x1.87c909eebbdedp-648,
     0x1.9d8812e311353p-214, 0.0, 0x1.4c4d11dfe1861p-811, 0.0, 0x1.cd9b80b508878p-990,
     0x1.1b4561622354fp-385, 0x1.c12b272db2f6fp-146, 0.0, 0x1.2b029994a024fp-481, 0.0,
     0.0, 0x1.e4244d35b041cp-529, 0x1.1cac167a717ddp-726, 0.0, 0.0, 0.0,
     0x1.81adbab9432fep-453, 0.0, 0x1.20d2316532d13p-31, 0.0, 0x1.cb34c5b812e1bp-290,
     0.0, 0.0, 0x1.59f51f61efd0dp-1019, 0.0, 0.0, 0x1.73e78d4d01e1bp-976, 0.0, 0.0,
     0x1.e7135b63a72a5p-430, 0x1.52c0008aa952cp-935, 0.0, 0x1.d6fc1c430707ap-617, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.081b1c76a44eap-360, 0.0, 0.0, 0x1.846dd93b047a3p-799,
     0x1.18b7e079f6158p-347, 0x1.33b5d07296e2p-704, 0.0, 0x1.f22badb48f74ep-617,
     0x1.ac8a9758fe18bp-161, 0x1.4792c405c2a1p-245, 0x1.788a1d374f249p-1013, 0.0, 0.0,
     0x1.f7592d0e78f69p-307, 0.0, 0.0, 0.0, 0x1.57343479f346dp-838,
     0x1.a73a17304d75ap-1014, 0.0, 0x1.1be9348e5f808p-231, 0x1.88453a84a6338p-770,
     0.0, 0.0, 0.0, 0x1.02d450073b199p-782, 0x1.d9e2aa588c91fp-390,
     0x1.9c1c4fbc728eep-160, 0.0, 0x1.cb797e22442ccp-903, 0x1.ec7eb08775d6cp-97, 0.0,
     0.0, 0x1.18b7be20383c8p-465, 0.0, 0x1.ef4555e8dd3bbp-919, 0.0, 0.0, 0.0, 0.0,
     0x1.f2a14e6c8ba54p-317, 0.0, 0x1.cb362426c7ea6p-380, 0.0,
     0x1.2ae68abb678bdp-1016, 0x1.b4bb5e44bdc54p-845, 0.0, 0x1.aa6269b32b5f2p-881,
     0.0, 0x1.1151d4f6030ffp-139, 0x1.486b4809e400bp-569, 0.0, 0.0,
     0x1.9071c73593e69p-617, 0.0, 0x1.2c1a16ff41aa3p-781, 0.0, 0x1.b51794d406f43p-133,
     0.0, 0x1.083c573da90a3p-725, 0x1.e0f6fe576eb91p-168, 0.0, 0.0, 0.0, 0.0,
     0x1.9cf7fa4fed313p-930, 0x1.6f0de09c93589p-570, 0.0, 0.0, 0x1.1c3acf436dca4p-689,
     0x1.567fa3ed65078p-224, 0.0, 0x1.ef82666476f77p-949, 0x1.a8c21db96f01dp-265,
     0x1.ede987e8f4a93p-509, 0x1.94e56b3a7f1a8p-815, 0x1.affa2fbb5b0dp-337,
     0x1.2cfb8f4317bccp-718, 0.0, 0x1.6edec7671e567p-930, 0x1.7bd7dd7d27095p-1017,
     0x1.8ab9b012bbf4bp-596, 0x1.bfd91a70cb4eep-74, 0.0, 0.0, 0.0,
     0x1.f1d053919c6cap-515, 0.0, 0x1.2fc823b99f109p-92, 0.0, 0.0,
     0x1.85ea02b88b4bdp-101, 0x1.04b68c85b27b9p-705, 0x1.b702ddf73205bp-949,
     0x1.de0925aade7d5p-125, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aaae3471ca9ecp-967, 0.0,
     0x1.4515d55191bbfp-374, 0.0, 0.0, 0.0, 0x1.69a125ebf88fdp-356,
     0x1.10085f19059a8p-819, 0.0, 0x1.38f3ad978e879p-935, 0x1.3b48bf8dd9342p-156, 0.0,
     0x1.f478bf39340e9p-204, 0.0, 0.0, 0x1.40a422774481cp-756, 0x1.1f52be86698a7p-3,
     0x1.3fe3b7cefc9a1p-509, 0.0, 0x1.dc6ae85f31fbep-711, 0.0, 0x1.a2fd5e131e22p-955,
     0x1.8b4ca16112b35p-543, 0x1.e02efcfcc0b8ep-473, 0x1.de954eedd3815p-97,
     0x1.5b994d2d00da2p-129, 0x1.2a30c861710dep-627, 0x1.c8c2885f36bc2p-478,
     0x1.2599bb5d3d58dp-337, 0x1.2802e5d45f08bp-296, 0.0, 0x1.e8dd783aa05eap-485,
     0x1.a50af39f0c574p-462, 0x1.14a0602ffbe23p-163, 0.0, 0x1.7d31f7737d81ep-845,
     0x1.381e8fb0e70b3p-777, 0x1.d54526c649145p-428, 0.0, 0x1.2836d6bcbc95dp-965, 0.0,
     0x1.16cf0e093fd2cp-483, 0x1.9afe51143a8d8p-693, 0.0, 0x1.80b034b80860cp-1007,
     0.0, 0x1.0a45892a7524bp-428, 0x1.9d2f987f29d9ep-310, 0.0, 0.0,
     0x1.c67566a96ccd5p-604, 0x1.8579ee8f39d82p-222, 0.0, 0.0, 0x1.4f17261c7d19dp-423,
     0x1.1b39956761a29p-685, 0x1.613ca935331bdp-566, 0.0, 0x1.ffaab01623718p-80,
     0x1.42e333112b18p-794, 0x1.fd7d0ccb89c0ap-909, 0x1.b8f382bacc263p-201,
     0x1.ef1e46087ddb5p-786, 0.0, 0x1.45e997241725fp-546, 0.0, 0x1.d760b492a61fcp-537,
     0.0, 0.0, 0x1.f2c0ae814a713p-574, 0x1.bfade4227e88fp-238, 0.0,
     0x1.ff5f7f71f049cp-891, 0x1.f38220cc195e1p-766, 0x1.4f3bace6a6327p-852,
     0x1.b438cb88d2d86p-419, 0x1.b8a592ef02c6ep-961, 0x1.680649a5962f7p-917,
     0x1.30e8a176b427bp-714, 0x1.d2ec1a1889617p-282, 0x1.a51adeab29a53p-669, 0.0, 0.0,
     0.0, 0.0, 0x1.c88226103d0bp-673, 0x1.545b615b9d6dp-19, 0x1.44a386dda5ccep-651,
     0x1.91567e32f8e19p-315, 0.0, 0.0, 0x1.944520ddd732fp-291, 0x1.ade5439189924p-363,
     0.0, 0.0, 0x1.b7d87309baea3p-1008, 0x1.5c528c9753197p-233, 0.0,
     0x1.3b72a35c3a23bp-66, 0x1.875415bd2e925p-690, 0.0, 0.0, 0x1.4c5bae3df45fbp-480,
     0.0, 0x1.4f3af65d4f7a9p-331, 0.0, 0.0, 0x1.835092952b52p-342, 0.0, 0.0,
     0x1.b7eaaab52ccebp-931, 0.0, 0x1.80af33909451cp-460, 0x1.38992dfe515e3p-229,
     0x1.4d4823e57664fp-486, 0x1.b0dc15dacb164p-762, 0x1.3112f30d0ad64p-283, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ab615401a8788p-129, 0x1.831bec462c296p-54, 0.0,
     0x1.2e1106ff87d64p-223, 0.0, 0.0, 0x1.f4688943c0008p-802, 0.0, 0.0, 0.0, 0.0,
     0x1.4aee6c95d729fp-321, 0x1.3fe25a0f420fbp-585, 0x1.eb79be62e8444p-1004, 0.0,
     0.0, 0.0, 0x1.191eec12e4268p-451, 0x1.6b4e382067b4fp-449, 0.0,
     0x1.6ee968d28a4adp-706, 0.0, 0.0, 0x1.92a1ca83aa6c4p-480, 0.0,
     0x1.b62383b26a54p-598, 0.0, 0.0, 0.0, 0x1.d1b6d8ec795ffp-98,
     0x1.e85a8e751615ap-936, 0x1.1e93a3a489058p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6143b83b233f2p-1022, 0.0, 0.0, 0.0, 0.0, 0x1.f63618247d51cp-696,
     0x1.e4b086135c5eap-531, 0x1.4ba441792fbd8p-690, 0.0, 0x1.de4f696fc1697p-896, 0.0,
     0x1.540aab2ef9177p-145, 0x1.6cd8b3e162d18p-338, 0.0, 0x1.ecc72a23375c5p-1010,
     0.0, 0x1.36cb97d3b13f3p-2, 0.0, 0.0, 0.0, 0x1.e5c1b485d08fap-694,
     0x1.15186e9f4bdb5p-977, 0x1.ca2824edfb1fdp-794, 0x1.20d6ca8d7a8ebp-760,
     0x1.734e0f3eea0e5p-416, 0.0, 0x1.36e5e5d541538p-613, 0.0, 0x1.4378d4cce3474p-731,
     0x1.cf8b7ff217a19p-738, 0x1.d6d445e740522p-953, 0.0, 0.0, 0x1.8ec2aa2172306p-894,
     0x1.ab99d1907d0f1p-88, 0.0, 0x1.5fdfd2cb2a596p-22, 0x1.9d31474c4351cp-129, 0.0,
     0.0, 0.0, 0x1.d44630ffb22b7p-548, 0.0, 0x1.e99d28e0e61cbp-305,
     0x1.84d5defd528ddp-355, 0x1.1fc76bc9cae66p-989, 0x1.d2097051841f4p-724, 0.0,
     0x1.0b5cc499394ebp-125, 0.0, 0.0, 0.0, 0x1.e39d3f49e25cep-1018,
     0x1.16b996c41ddc8p-549, 0.0, 0x1.756e786bab873p-629, 0x1.8d407f5e0047p-29, 0.0,
     0.0, 0.0, 0x1.1e1877591815ep-779, 0.0, 0x1.71c335b1a0d75p-67, 0.0,
     0x1.bcb02b4c2b9bap-59, 0.0, 0.0, 0x1.38f213b61a67ap-256, 0.0,
     0x1.938d2a70859eep-397, 0.0, 0x1.8d29454085344p-71, 0.0, 0.0,
     0x1.4eed327b1a5e4p-511, 0.0, 0.0, 0x1.7962b61c6206ap-23, 0x1.fad9a68e239e3p-353,
     0x1.a9e7be6494d7dp-825, 0x1.e767b66d6590bp-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ae5dd761e711p-420, 0.0, 0.0, 0.0, 0.0, 0x1.f2827ba994711p-106,
     0x1.490f333a02ea8p-981, 0.0, 0x1.a8eb88e71c14fp-69, 0.0, 0x1.b2b23fb59492ep-372,
     0.0, 0x1.94b975e869d9ap-723, 0x1.6c221144b13fbp-875, 0x1.cd9eb11d2c2f6p-737, 0.0,
     0x1.dd5ca37ce8b31p-923, 0.0, 0.0, 0.0, 0.0, 0x1.5309b40148994p-459, 0.0, 0.0,
     0.0, 0x1.88061f9ced69ep-584, 0x1.38da799acb6b3p-1009, 0x1.2e7bcf0834159p-971,
     0.0, 0x1.ae7d4011b8214p-533, 0.0, 0x1.513560fd7ef39p-281, 0x1.77babd4ee8ad3p-246,
     0.0, 0x1.a6b4d8d73a23dp-260, 0x1.c6bfd1c9ca75bp-446, 0x1.3589251462b54p-480, 0.0,
     0.0, 0x1.a345a20d5aa8p-829, 0x1.0f6b6cce9971fp-672, 0x1.3d1d7f7219f18p-38,
     0x1.cd8f2e35c2037p-415, 0x1.706c9bb72a1bbp-488, 0x1.687f3e975eff3p-528, 0.0, 0.0,
     0.0, 0x1.eb5f76254fc1fp-37, 0x1.646179859941dp-910, 0x1.51df1bea7c3c6p-37, 0.0,
     0x1.593aa1582de12p-360, 0.0, 0x1.8670b1b0a9943p-314, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bf1fab599c4cp-7, 0x1.65c33827ced64p-302, 0x1.111dc13b4b156p-53,
     0x1.a7f9018473086p-592, 0.0, 0x1.7d4774d805d9ep-965, 0x1.7917665fe014ep-570, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fcef67ed2f33cp-733, 0x1.33e55db4a84c3p-669, 0.0,
     0x1.7edd19542d312p-237, 0.0, 0x1.cf37acba81194p-799, 0.0, 0x1.ce4d735e59bdap-632,
     0x1.f1839746e92ffp-637, 0.0, 0.0, 0.0, 0x1.6d639d9973283p-606,
     0x1.6a0f56106b86dp-38, 0x1.3f65afd2b8f98p-357, 0.0, 0x1.b01e8934c50ccp-833,
     0x1.37cb6fc6ae824p-684, 0.0, 0x1.b9d02f20ee0edp-922, 0x1.e2cf1a0a256c1p-695, 0.0,
     0x1.f96c00408a883p-286, 0x1.3c8171588998p-592, 0.0, 0.0, 0x1.8062341385befp-528,
     0x1.11fa3ff012994p-474, 0x1.14315b38e0013p-686, 0.0, 0x1.eee0ce21edfebp-79, 0.0,
     0x1.11f02129b7d0fp-38, 0x1.d82869c5d9163p-228, 0.0, 0x1.955d2bdfec622p-249,
     0x1.f01c8c7a33374p-518, 0x1.c7634822e6639p-188, 0.0, 0x1.598704c42d1a4p-631, 0.0,
     0x1.75329f5c1864bp-514, 0.0, 0x1.c427d26968d22p-178, 0x1.12ba7f93585b1p-387, 0.0,
     0.0, 0.0, 0x1.aab1940cd067ap-307, 0x1.f24fc4c9570efp-837, 0.0,
     0x1.49abaa451afcdp-879, 0x1.5363342787d7dp-65, 0.0, 0.0, 0x1.9de4a723924a2p-38,
     0.0, 0.0, 0x1.e183c899bc183p-737, 0x1.b104513520db7p-141, 0x1.bc2808f076768p-361,
     0.0, 0x1.51a7929e5187ap-992, 0.0, 0.0, 0.0, 0.0, 0x1.4c6add1518192p-594, 0.0,
     0.0, 0x1.fa329405faf5fp-313, 0x1.59689adc2e9b4p-229, 0.0, 0.0, 0.0,
     0x1.9f6e33d922b7fp-439, 0.0, 0.0, 0x1.f9c1a47f26f52p-125, 0.0,
     0x1.0739e778918e3p-463, 0x1.ec61f029d54d9p-619, 0.0, 0x1.941cc94a9aa77p-575, 0.0,
     0.0, 0x1.ccddd01187bcbp-637, 0.0, 0.0, 0x1.e3d1c0feda8e8p-279,
     0x1.0fd8ca863306ap-191, 0.0, 0x1.bc28e75f05922p-485, 0x1.e5ea391564612p-154,
     0x1.7e224ddc5ec5p-887, 0.0, 0.0, 0x1.40b18bd31fa61p-68, 0.0,
     0x1.b2701dc6901d6p-646, 0x1.ec9f88fe7e918p-903, 0x1.1fd8f1e8fbd76p-474, 0.0,
     0x1.eacba07a78203p-850, 0.0, 0x1.620aa31c8d0cp-134, 0.0, 0x1.09a2089b8aa61p-1006,
     0.0, 0.0, 0x1.dc1e910fe6cdp-760, 0x1.3d63e1a77a3c3p-736, 0.0,
     0x1.3439018337d71p-580, 0x1.5ac8036bc50ep-945, 0x1.865d8b480d99p-513, 0.0,
     0x1.d9572b0e21e44p-797, 0x1.fb3bcb5bdc01bp-30, 0.0, 0.0, 0x1.ba26a282f3859p-640,
     0.0, 0.0, 0x1.c41d86d52983p-870, 0x1.84df36a29e3dep-399, 0.0,
     0x1.f304b881f2566p-1002, 0.0, 0x1.c4aaa05c82bb2p-470, 0.0, 0.0, 0.0,
     0x1.854de1ec430ddp-428, 0.0, 0x1.1b54bca712ac7p-7, 0x1.1e783743139dbp-137,
     0x1.2a75ac30269ffp-73, 0x1.10ef5e1d3bc2bp-570, 0x1.1c34839e97e4bp-966,
     0x1.5a2c2552c801dp-115, 0.0, 0x1.dc9ed2e91c326p-486, 0.0, 0x1.42ee4d8250fc6p-648,
     0.0, 0.0, 0.0, 0.0, 0x1.3a1887520ccf4p-199, 0.0, 0x1.d57a2258bb815p-62, 0.0, 0.0,
     0.0, 0.0, 0x1.9534fd1468e4cp-321, 0.0, 0.0, 0x1.2617017fe47b8p-296, 0.0, 0.0,
     0.0, 0x1.fba4a2f41dac6p-526, 0x1.a42b6309eb963p-643, 0x1.328674ec5010ap-889, 0.0,
     0.0, 0.0, 0x1.c6c984fdd78e9p-517, 0.0, 0.0, 0.0, 0x1.1fa98d7f820b6p-633, 0.0,
     0x1.743fa96b5365fp-326, 0.0, 0x1.3e143faf9c1bbp-51, 0x1.4e9eef3933329p-813,
     0x1.e7a66e06d3aefp-310, 0x1.2802a5aa355ecp-508, 0x1.2a231a817cab8p-9,
     0x1.dabb7c60d6fa6p-81, 0.0, 0x1.26c7c5c553bf5p-652, 0.0, 0x1.803c22b5c46b1p-874,
     0x1.8de3d93bfd788p-125, 0.0, 0.0, 0.0, 0x1.f069c62b9efbfp-172, 0.0, 0.0,
     0x1.9df750a9df1cap-912, 0x1.c4bd2d24bec53p-858, 0x1.19cf3aa1dc51fp-181,
     0x1.acf6d4fa3c0c2p-756, 0x1.3a92eb6efccp-997, 0.0, 0x1.72da2484bdf27p-341, 0.0,
     0.0, 0x1.16f5abe2d26a1p-435, 0.0, 0.0, 0.0, 0.0, 0x1.13b13347858fep-976, 0.0,
     0.0, 0x1.13c15e7380aa9p-320, 0.0, 0.0, 0x1.3836b09ed17ecp-746,
     0x1.75c12900950a8p-258, 0x1.e5ef41c46ff1bp-305, 0.0, 0.0, 0.0, 0.0,
     0x1.ae236f92691c7p-9, 0x1.72b83ac7f7d5p-244, 0x1.27061572dda0bp-134, 0.0, 0.0,
     0x1.7e3d69b3b2c54p-435, 0.0, 0.0, 0x1.c980ca24c60b7p-220, 0x1.cfeb727b9c6cep-344,
     0x1.7cd874e3bcd21p-405, 0.0, 0.0, 0x1.199b29cd3eb82p-35, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e03d62c6d936ap-234, 0x1.993751261263fp-478, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2373a77f153p-815, 0.0, 0.0, 0x1.25cd477c205bdp-537, 0x1.70cc55efa5297p-237,
     0.0, 0x1.9719bd94e7324p-484, 0x1.40e79b07b2087p-799, 0x1.46346a7d20fecp-538,
     0x1.dd594b53d518fp-453, 0x1.d022428cb2111p-878, 0.0, 0x1.24b90a22f9b6p-535, 0.0,
     0.0, 0.0, 0.0, 0x1.4d098ece4c82fp-919, 0.0, 0x1.8fd062a354058p-982,
     0x1.572b56d0da44ep-685, 0x1.8e1c9fa4a3d8bp-429, 0x1.ad2a3e6979c68p-715,
     0x1.00a8efe3ef343p-680, 0.0, 0.0, 0x1.a5f68b9df7191p-655, 0x1.5e0ff94d2e162p-840,
     0x1.5efabaa7801ap-603, 0.0, 0x1.8f483f480f1e9p-303, 0x1.ae5eb2c7588d4p-688,
     0x1.8721fc821aa54p-716, 0.0, 0x1.1f82da964bf5cp-435, 0x1.d843b611b0cefp-33,
     0x1.ac1e659c6fbcap-844, 0.0, 0.0, 0x1.294e04d73583cp-817, 0.0,
     0x1.406f104329414p-579, 0x1.5d95a4f12c783p-205, 0.0, 0.0, 0.0,
     0x1.d81d682fdb21fp-999, 0.0, 0x1.1cf81213717p-667, 0.0, 0.0,
     0x1.1fd255894bc8ep-937, 0x1.0fe4bbef31d7dp-954, 0x1.22760e1204895p-927, 0.0,
     0x1.e03e38f743a8fp-329, 0x1.0f478767b7543p-570, 0x1.62180f28d49ddp-334, 0.0,
     0x1.3c3fcb56c964fp-217, 0.0, 0x1.a1394ef07daap-871, 0x1.a5907dbd0fc2fp-904,
     0x1.00a13bb864904p-181, 0.0, 0.0, 0x1.f1fbaf2d74b24p-155, 0.0, 0.0,
     0x1.b0e5cc63e1ff2p-213, 0.0, 0x1.ce0b1b32e6cb3p-442, 0x1.9276527118346p-989, 0.0,
     0x1.0c52ff8e0acdfp-495, 0.0, 0.0, 0.0, 0x1.aa9a874d96918p-368, 0.0, 0.0,
     0x1.aab50cb74429p-317, 0x1.76a2b09a731a7p-87, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c6a4475b7015p-449, 0.0, 0.0, 0.0, 0x1.241534f7581f2p-499, 0.0,
     0x1.d1f15b85660a6p-188, 0.0, 0x1.a8b0ca07f49e7p-329, 0.0, 0.0,
     0x1.88fbf7678c21bp-359, 0.0, 0x1.f48cd16d393bfp-765, 0x1.d5607df03f0f3p-532, 0.0,
     0.0, 0x1.b577aa09fae1bp-260, 0x1.dbfdda47c7682p-145, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a13dd53e3099p-254, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9a768780882dp-882, 0.0,
     0x1.9f77f8903e38ap-696, 0.0, 0x1.9396b302bc006p-374, 0x1.2c5e5546d6173p-289, 0.0,
     0x1.99392a0bf3d7fp-1019, 0x1.11054fe50743fp-781, 0.0, 0x1.7423f7116307ep-877,
     0.0, 0.0, 0x1.ea4dd3e55313p-308, 0.0, 0.0, 0.0, 0x1.6235113e250f3p-366,
     0x1.0b58ff8387f8ap-549, 0.0, 0.0, 0x1.24f84fc17b1d3p-259, 0x1.caec9e702bc2cp-228,
     0.0, 0.0, 0x1.9140a58862d2ep-31, 0.0, 0x1.19e2d40bc53b4p-673, 0.0,
     0x1.f2eb548c668bp-166, 0.0, 0x1.806972fcf6308p-776, 0.0, 0.0,
     0x1.baa79fe7da659p-70, 0x1.73c09eb4dfaeep-169, 0x1.51fd8428acbe3p-104,
     0x1.76fda91d3c958p-591, 0x1.a81a835a19ba9p-637, 0.0, 0x1.6f1d7f9f4f607p-50, 0.0,
     0.0, 0.0, 0.0, 0x1.01500c8cdc5d6p-666, 0.0, 0x1.4a941332eac55p-1020, 0.0,
     0x1.45344fbae432ep-535, 0.0, 0x1.2e9e3a5e47584p-17, 0x1.a4214d4f3808cp-305, 0.0,
     0x1.b0c469dc4c832p-462, 0.0, 0x1.00d3d3e275725p-957, 0.0, 0.0,
     0x1.acb459b7c73c7p-48, 0.0, 0x1.640b066917c02p-947, 0.0, 0.0, 0.0,
     0x1.d79996c5bb53bp-701, 0x1.012eebbbd480bp-424, 0.0, 0.0, 0.0, 0.0,
     0x1.3363148bcccdfp-301, 0.0, 0x1.8490c2f114a55p-783, 0.0, 0x1.f17394403d131p-910,
     0.0, 0x1.ca07a63aa8ec8p-116, 0.0, 0x1.b0b6ab8d0cb41p-662, 0x1.5214acd2b9bcep-9,
     0.0, 0x1.75dfeacdff274p-365
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_finz_exp2d2_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_exp2d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp2d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
