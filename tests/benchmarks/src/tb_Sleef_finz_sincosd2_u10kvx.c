/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd2_u10kvx.c --function \
 *     Sleef_finz_sincosd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.aed593900b03bp-121, 0.0, 0.0, 0x1.ff997255a7becp-522, 0.0, 0.0,
     0x1.fad03dd7c270bp-300, 0x1.a0e309021cb3dp-526, 0x1.16162bfa7d687p-244, 0.0,
     0x1.f4f8c1de40ab2p-738, 0.0, 0.0, 0x1.53ffc0319b8a6p-1001,
     0x1.d33d36fe197bep-937, 0x1.0fa09248e95abp-657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a0ac8e177575p-772, 0.0, 0x1.65cd2a3de3cddp-576, 0x1.abd52daa79974p-365, 0.0,
     0x1.8f2451df68ba6p-197, 0x1.76b03d5ba783ap-443, 0.0, 0x1.5f63d31ce411bp-1008,
     0x1.4deaf47ad43fep-614, 0.0, 0x1.a123ef5149f0ep-885, 0x1.142fff04907fcp-333, 0.0,
     0x1.5701feec6a185p-34, 0.0, 0.0, 0x1.dcc0af5796b5p-717, 0.0, 0.0,
     0x1.85f11a93ad156p-827, 0x1.9a594729613c2p-26, 0.0, 0.0, 0x1.6d02720e7bd8p-450,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e9fe5103b13p-92, 0.0, 0.0, 0.0, 0.0,
     0x1.49d9624d6c643p-55, 0.0, 0x1.86fc8bcf4eed3p-387, 0x1.f799669cca711p-115,
     0x1.6262d81df555fp-215, 0x1.5729095f779f9p-249, 0x1.38817a92f8d14p-564,
     0x1.1c3f39779249bp-529, 0.0, 0x1.661dd58b79bfbp-817, 0.0, 0x1.d8ad6c6fa1fa6p-382,
     0x1.ae1d93b8e1932p-781, 0.0, 0x1.094ac372682b1p-984, 0x1.8994d6d8fb09fp-227,
     0x1.dfb2b7c833ea2p-322, 0.0, 0x1.aa01eb40e07ddp-726, 0x1.5b6f757b9aef3p-715,
     0x1.f24fcf3e027b7p-399, 0x1.1228bad409991p-680, 0.0, 0.0, 0x1.d987af39f56f4p-911,
     0x1.b2c462a5b7cffp-279, 0x1.31216f0e61616p-296, 0x1.c7ae4e4cbcb9dp-34,
     0x1.9bf5c7eedd903p-824, 0.0, 0x1.b0d30315b2825p-586, 0x1.34d821dd245cep-835, 0.0,
     0.0, 0x1.59ef0d89fddbfp-392, 0x1.0766979615b1dp-80, 0.0, 0.0,
     0x1.3e91393ea7d7fp-706, 0.0, 0.0, 0.0, 0.0, 0x1.6c82fb01a4723p-501,
     0x1.186cb1b833e7ep-282, 0.0, 0x1.39fe20efa7e08p-506, 0x1.20367953aee89p-985,
     0x1.f8ae3dc63e08ep-931, 0x1.9b51bcc3b2d94p-398, 0x1.a244fa5fb6695p-486, 0.0,
     0x1.4335cc56f76d7p-21, 0x1.7417084a773fcp-546, 0.0, 0x1.6396ea6f43b07p-558,
     0x1.6e967baccd8f5p-65, 0x1.e55273b6dba85p-270, 0x1.12064fa1a24afp-606, 0.0,
     0x1.0e9af0632d593p-377, 0.0, 0x1.6784aa8079a78p-242, 0x1.0dff63238d2b3p-540, 0.0,
     0x1.5b6fee6efbbdfp-141, 0x1.894326f416ef8p-956, 0.0, 0.0, 0.0,
     0x1.285d3e5b8ace7p-548, 0x1.0409cf28d670ap-350, 0.0, 0x1.3a577b26cf7cbp-582, 0.0,
     0x1.176a2ce3d458p-540, 0.0, 0x1.41cdf3a7667b3p-593, 0.0, 0x1.d57db6f4ad657p-377,
     0x1.b913653ebeeeep-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c9758f6fef401p-558,
     0x1.295b53d02e4e3p-161, 0.0, 0.0, 0x1.6bbed8db0c321p-876, 0.0,
     0x1.367408e1b5c55p-810, 0.0, 0x1.102e9f6b58cbap-828, 0x1.127651501aeaap-582,
     0x1.c483667a0d18dp-730, 0x1.1cafb463a5433p-713, 0.0, 0x1.987e5517b2807p-324, 0.0,
     0x1.436ef1cbdba6ap-375, 0x1.25ed147780c5ep-411, 0x1.1fcf8bfabf55p-836,
     0x1.28b5766e61ea3p-44, 0.0, 0.0, 0.0, 0x1.e27ab94ba001cp-280,
     0x1.1958d2c221b7fp-857, 0x1.9faec8324c8b7p-413, 0x1.432d7c91b550ep-323,
     0x1.b0c2e40692c99p-652, 0x1.09073c2bf5f2dp-633, 0.0, 0.0, 0.0,
     0x1.34acb9ef21a56p-224, 0x1.11d4f43898d5p-204, 0.0, 0x1.9f5fca9834bb1p-322, 0.0,
     0.0, 0x1.5bdb70f7cd576p-471, 0x1.fd00b6dc8cb7fp-25, 0.0, 0x1.2a914a1c7d122p-362,
     0x1.71f41ed169597p-252, 0x1.d2f35dee9ac0cp-996, 0.0, 0x1.17e295e4868ebp-953, 0.0,
     0.0, 0x1.a2576049b9eb2p-111, 0x1.592bbcc586fdep-550, 0.0, 0.0,
     0x1.ad2f9bd004c6fp-883, 0.0, 0x1.b0108df9e1edbp-449, 0.0, 0.0,
     0x1.e3bcd5174a31bp-197, 0.0, 0x1.647615d64b785p-781, 0x1.92c8e0d77d2d8p-306,
     0x1.dd7c6367412c2p-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6f283f0fa71afp-426, 0.0, 0.0, 0x1.3daec02c4f2a3p-597, 0x1.9e58e47df9763p-686,
     0.0, 0.0, 0x1.a48ce0d5a7672p-250, 0.0, 0.0, 0.0, 0x1.1e124cc94a145p-55, 0.0,
     0x1.a8c7569343e9p-756, 0x1.f51d97cefd656p-983, 0.0, 0x1.4018b2cfc4ca5p-472,
     0x1.9eafff3ec1508p-195, 0.0, 0x1.9e6a88b77037cp-999, 0x1.f40f041a74bap-537, 0.0,
     0.0, 0.0, 0.0, 0x1.d2299cfc5d96bp-78, 0.0, 0x1.055f74fbfd587p-995, 0.0,
     0x1.bc2a9e3a8f5ccp-519, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4832b32df639bp-495, 0.0,
     0.0, 0.0, 0.0, 0x1.9d500e31e0fa8p-944, 0x1.727d34dd99472p-691,
     0x1.b2f89c8ba5c66p-1020, 0.0, 0.0, 0x1.ebdf347d4bf4ap-210, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.29db400de94ddp-764, 0x1.dce7d2d0cf9a4p-582, 0x1.ed9ae8aa68437p-354,
     0x1.e46b63e23ff7cp-206, 0.0, 0.0, 0x1.6411edd351d96p-285, 0x1.50df0ab020dbep-67,
     0.0, 0x1.3fc41b6b00a77p-239, 0.0, 0.0, 0.0, 0x1.967ea89d39bbdp-948, 0.0, 0.0,
     0.0, 0.0, 0x1.99329f2e96668p-937, 0x1.59fc54401ed09p-743, 0x1.da153a51abcd4p-652,
     0.0, 0.0, 0.0, 0x1.eea23d2f5872p-920, 0x1.b9a5e647d32dap-160, 0.0,
     0x1.6928cf5b017fep-875, 0x1.aa9b66ffd8c8p-227, 0.0, 0.0, 0.0, 0.0,
     0x1.47fa0033200a5p-128, 0x1.c3c112032eab9p-93, 0x1.c5e484e465fa3p-553,
     0x1.62c2c7465fb0ap-289, 0.0, 0.0, 0.0, 0.0, 0x1.8c2e26e6e9932p-665, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8aab887b36b43p-174, 0x1.c6eb1975e55a8p-659, 0.0,
     0x1.6cad3c976dbap-997, 0.0, 0x1.f718686652859p-731, 0x1.2faaab1b0321fp-23, 0.0,
     0.0, 0.0, 0x1.f11e3d99155d7p-977, 0.0, 0x1.1629435a8b41p-240,
     0x1.0f39a54ca668ep-970, 0x1.93960d6cdedeep-1014, 0.0, 0.0,
     0x1.2d74c9e741208p-609, 0.0, 0x1.71a1524f43fedp-817, 0x1.5e000e910b7cp-841, 0.0,
     0.0, 0.0, 0.0, 0x1.fe7c821aeb65cp-550, 0x1.983fd5fcfaeb3p-607, 0.0, 0.0, 0.0,
     0.0, 0x1.8a7547d1c07aep-520, 0.0, 0x1.e3ad72e2f6f73p-412, 0x1.3345f333c3ef8p-569,
     0x1.36d7b9f2cf86fp-252, 0x1.eddff06a9c9p-107, 0.0, 0.0, 0x1.68eea504ca6f8p-659,
     0.0, 0.0, 0x1.d3d1fe0d3fda8p-536, 0x1.ca87146c018dfp-985, 0x1.7408edb9a24d8p-795,
     0.0, 0.0, 0x1.28b5291b627ap-689, 0.0, 0.0, 0x1.561e997bf7c72p-91, 0.0, 0.0,
     0x1.46048812808b8p-622, 0.0, 0x1.bd108e50ced4cp-534, 0x1.f02e60d9082d8p-1009,
     0x1.0024ac8f0faecp-961, 0x1.58ec35b041d64p-591, 0.0, 0.0, 0x1.44644b4f04e95p-461,
     0.0, 0x1.4cbd170f32915p-192, 0x1.af37ebfc9752fp-112, 0.0, 0.0,
     0x1.12ac8e41bbcf9p-647, 0x1.7903ebb2b365dp-965, 0x1.89f979fa6ba54p-341, 0.0, 0.0,
     0x1.c1e5ffaa25225p-900, 0x1.0c9d6da7d053cp-635, 0.0, 0x1.cf58d8d738b8dp-887, 0.0,
     0x1.5305e66c78a1cp-802, 0.0, 0x1.56f54f5d93db1p-988, 0.0, 0x1.c339e82ad57b1p-253,
     0.0, 0.0, 0.0, 0x1.949fd4614ebf5p-484, 0.0, 0.0, 0x1.8e4ca849d1d55p-490, 0.0,
     0.0, 0.0, 0x1.e2f078a7a488bp-880, 0.0, 0.0, 0.0, 0x1.99cb40ed0abfcp-640,
     0x1.0a66a4e09709ep-307, 0.0, 0.0, 0x1.10a6eca794136p-331, 0.0, 0.0,
     0x1.bc557a6291366p-919, 0x1.d56fd943cad73p-842, 0.0, 0.0, 0.0, 0.0,
     0x1.776422e95f908p-547, 0.0, 0x1.b1e5c3f2c3be3p-552, 0x1.52b81e5fbdd15p-528,
     0x1.5576a1a113b2bp-425, 0x1.1008b2096e773p-365, 0x1.21277b20762f5p-243,
     0x1.5099485ba8455p-241, 0x1.19fb66207d0b2p-314, 0.0, 0.0, 0x1.4c6edfe1b20d1p-45,
     0x1.a5d257c4882aep-922, 0x1.7471e5512c4d2p-667, 0.0, 0x1.fba5d6d339dc1p-397,
     0x1.abb9e75c201afp-33, 0.0, 0.0, 0.0, 0x1.20174db44d3c5p-1,
     0x1.590a3762c7356p-259, 0x1.3adc30ae347f1p-938, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.782b7f2a5ca4cp-443, 0x1.ad144117cc817p-943, 0.0, 0x1.a3422c77f7d55p-188,
     0x1.87c2cd603a48fp-33, 0.0, 0.0, 0x1.283e90ff5c3fbp-854, 0x1.995ec6fae116dp-597,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1db675b8f21b4p-888, 0x1.4518dd9bd55dap-892,
     0x1.909d9735a5342p-197, 0x1.856d07eb3f926p-701, 0x1.a3fc3d0066ca3p-855, 0.0,
     0x1.b42eb60d6e8f1p-14, 0.0, 0x1.5612a1da0e274p-922, 0x1.7acb40be7ee9fp-386, 0.0,
     0x1.e5db1b20ba65fp-861, 0.0, 0.0, 0x1.481a6de4fb49p-676, 0x1.24fd5a6421816p-903,
     0.0, 0x1.9c1d1b2fac51ep-697, 0x1.9d57b98747297p-689, 0.0, 0x1.e67ffb9d5e64bp-727,
     0.0, 0.0, 0.0, 0x1.4efc9072d0945p-319, 0.0, 0x1.eca7d37949ba8p-636, 0.0,
     0x1.52d5f75e347a1p-436, 0.0, 0x1.45fe3c0bbbddcp-205, 0x1.d8ec2fc1bb7e8p-571, 0.0,
     0.0, 0.0, 0x1.0a582ff5e527ep-226, 0x1.c48ebb1cb332ep-837, 0.0, 0.0,
     0x1.a6ecd38174b16p-72, 0x1.ca0314c0bdfa1p-602, 0x1.c333dda00578ap-145,
     0x1.bfdb5e0dce386p-372, 0x1.3ee616512c7e6p-623, 0x1.31237861beee4p-563, 0.0, 0.0,
     0x1.9f8956fd5fa6ap-706, 0.0, 0x1.955be1836136cp-934, 0.0, 0.0, 0.0,
     0x1.8e277b67bc911p-784, 0x1.074147a929589p-748, 0x1.cd218fa90b12ep-755,
     0x1.e45a1b9df7928p-255, 0x1.d36892ae7deedp-973, 0x1.517a8ac48217ap-568,
     0x1.024428e6bf02cp-223, 0.0, 0x1.0984af8c94385p-418, 0.0, 0.0,
     0x1.909b0435629a8p-123, 0x1.be53725ade004p-245, 0.0, 0x1.f863430f96a8p-287, 0.0,
     0.0, 0x1.5c76a931b269cp-15, 0.0, 0.0, 0.0, 0.0, 0x1.04f4b292a340fp-48,
     0x1.33cc67f79aabbp-486, 0.0, 0.0, 0x1.e013cd623d2c4p-82, 0x1.c180550e20b53p-3,
     0x1.5aeabf12c129ep-765, 0x1.ac560778b3a66p-402, 0.0, 0.0, 0.0,
     0x1.5cb41cecafc0fp-967, 0.0, 0x1.2881494169e5ep-329, 0x1.bc49b4a1ab98cp-266,
     0x1.0da6101ed36edp-197, 0x1.7019187171e0fp-700, 0.0, 0x1.179f3c37fa816p-595,
     0x1.c2a92217848b8p-324, 0x1.93a1474222515p-564, 0.0, 0x1.1c25f3ae715bdp-940,
     0x1.524420eaa2aedp-810, 0x1.44f6f94c6586fp-966, 0.0, 0.0, 0x1.0708dace7cdbfp-959,
     0.0, 0x1.b6551ca568491p-653, 0x1.a4f3037cfd2cp-432, 0x1.9377cc701e7fp-709,
     0x1.f54e814f7af5fp-1003, 0x1.ddd543068637bp-72, 0.0, 0.0, 0.0,
     0x1.8905472ebddd7p-625, 0.0, 0x1.970251dff2232p-513, 0x1.42e82cebb6587p-419,
     0x1.22b43f68ffa7dp-891, 0x1.b158d18c77a85p-920, 0x1.04549ef93c94fp-411, 0.0,
     0x1.5d1944fc96258p-966, 0.0, 0.0, 0.0, 0.0, 0x1.252ffd9f0bdcp-534,
     0x1.91ceded8385b7p-479, 0.0, 0.0, 0.0, 0x1.0289ad03e8524p-130,
     0x1.6fc21cfd8ef37p-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1d8b31f253cep-621, 0x1.0aa0b072e0cdep-338, 0.0, 0.0, 0x1.d570ada029691p-814,
     0.0, 0x1.489fd03204f08p-210, 0x1.07300df065c99p-952, 0.0, 0.0,
     0x1.b9e08e7a3402fp-616, 0.0, 0.0, 0x1.a0e8a5fecc54ap-75, 0.0, 0.0, 0.0,
     0x1.594a1a8de126bp-11, 0x1.4305975909392p-562, 0.0, 0.0, 0x1.fcb4b265afe7ep-968,
     0x1.1dd8b7432350fp-257, 0x1.615d07c64819ap-39, 0x1.5aaa306605fbbp-961,
     0x1.260dba47e0813p-861, 0.0, 0.0, 0.0, 0.0, 0x1.475e77e192515p-492, 0.0, 0.0,
     0.0, 0x1.b72c4ed459c0fp-571, 0.0, 0.0, 0x1.e49a215298944p-592,
     0x1.a7f1a9026a6d1p-194, 0x1.0ba6309c1d88bp-187, 0.0, 0x1.2060cc4cf5c12p-280, 0.0,
     0x1.45629f0884cf3p-942, 0.0, 0.0, 0x1.7310eefc16cd7p-468, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cd9ff88eeeb97p-798, 0x1.a2a905340aadp-515, 0x1.a98c603e45863p-905,
     0x1.fa20c448358f6p-329, 0.0, 0x1.46e61247c7ab8p-1, 0x1.096251e3ca3f1p-718, 0.0,
     0.0, 0.0, 0x1.6834cf4780bb4p-109, 0.0, 0.0, 0.0, 0x1.6ea50a482b1f4p-549,
     0x1.215ef35a5b572p-665, 0x1.469a861e712fcp-147, 0.0, 0x1.5e2b38c0e3956p-259,
     0x1.81008fa08b211p-859, 0x1.bcb72ca4b2cd9p-969, 0.0, 0.0, 0.0,
     0x1.5a55468a1b173p-618, 0.0, 0x1.ef42fa41d98ecp-91, 0x1.9866b463d026dp-750,
     0x1.9738b96a23961p-244, 0x1.441e9fc1f00fdp-542, 0.0, 0.0, 0x1.34948164762b3p-437,
     0.0, 0x1.f01829d4312fap-686, 0x1.463f83b695549p-461, 0.0, 0x1.c78f785c8ee53p-848,
     0x1.5168c1c68df13p-16, 0.0, 0x1.70268473d5509p-118, 0.0, 0x1.2a98a7fa8c3eap-630,
     0.0, 0.0, 0.0, 0.0, 0x1.fdb6b781f4baep-494, 0.0, 0x1.c59c18e62ffa2p-629,
     0x1.94c27175cc52p-667, 0.0, 0.0, 0x1.8122350416749p-951, 0x1.2a5f49d775fd4p-792,
     0.0, 0x1.ae950c3f483efp-621, 0.0, 0.0, 0.0, 0x1.f911cc5baba68p-169,
     0x1.b95de3b3920d3p-596, 0x1.892927c1db954p-637, 0x1.1e9d65b866b0bp-599, 0.0,
     0x1.039f7b521c1fap-238, 0x1.ac649dffa6b6ep-896, 0x1.82af81eed4573p-423, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9d38bf826e39ep-85, 0x1.b81778bfcf026p-831, 0.0,
     0x1.ea19372ae3e79p-353, 0.0, 0x1.77d3c2833415p-374, 0.0, 0x1.5ea738832b03p-751,
     0.0, 0x1.b3b7baaf14ba8p-483, 0.0, 0x1.bb5525efcb2ecp-770, 0.0,
     0x1.b375314e5c827p-193, 0.0, 0x1.fcd0f103633cbp-276, 0x1.4d15e93663a1cp-217,
     0x1.847af0bd8daadp-851, 0.0, 0.0, 0x1.fbc30352085eap-91, 0x1.881c65f52a30ap-998,
     0x1.751804047c3cep-75, 0.0, 0.0, 0x1.64ec4f5b827d7p-685, 0.0, 0.0,
     0x1.73ee7f6c65f59p-204, 0x1.d98bbaf9c6d35p-342, 0.0, 0x1.aed0a502d93bap-96, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d6a188c19d44ap-244, 0.0,
     0.0, 0x1.984205373dadfp-6, 0x1.f585e9f7c6fa9p-526, 0x1.db2c82a06027bp-232, 0.0,
     0.0, 0x1.bdc1edd0537a4p-597, 0x1.7b57865c7b92p-357, 0.0, 0x1.bac632e5bcffbp-510,
     0.0, 0.0, 0.0, 0.0, 0x1.a0c7549fbf095p-179, 0.0, 0x1.071e1f547af2ep-309, 0.0,
     0.0, 0x1.c47bedd32dd59p-1002, 0.0, 0x1.280a7767441d6p-664,
     0x1.61a9c62b88fdfp-820, 0x1.3690c921d938bp-280, 0x1.88f1af0fae816p-540, 0.0,
     0x1.5038c00288102p-616, 0.0, 0.0, 0.0, 0x1.9b61833478065p-73,
     0x1.b5d4e0c989024p-273, 0.0, 0.0, 0.0, 0x1.272b76770c664p-407, 0.0, 0.0,
     0x1.2861b11735e72p-47, 0x1.fb543c9b5741fp-20, 0.0, 0x1.a5071ab52c484p-135,
     0x1.ab29f229c0a7dp-296, 0.0, 0x1.bd7013e77309dp-425, 0x1.24570ae264e01p-386,
     0x1.856a3823b2913p-804, 0.0, 0.0, 0.0, 0.0, 0x1.246c139799aa3p-352,
     0x1.a223da56eb5f2p-98, 0x1.917835b08baeap-877, 0x1.70a538a010451p-675, 0.0,
     0x1.846dfd25e2b86p-55, 0.0, 0.0, 0x1.af8e4335e9ac8p-703, 0.0, 0.0, 0.0, 0.0,
     0x1.ed84ffdd9de1bp-348, 0x1.24e94fe5bc13ap-615, 0.0, 0.0, 0.0,
     0x1.a7cdb2798518bp-757, 0.0, 0.0, 0x1.9e6ce2446e54fp-306, 0x1.7219f59de6c7ep-442,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9abdff2770dabp-1007, 0.0,
     0x1.389f7ec511e9ep-689, 0.0, 0x1.9ca25efc37ef8p-266, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f151d16235713p-996, 0.0, 0x1.ece8f9a9a135bp-64, 0x1.68047573af1eap-566,
     0x1.84009510449bep-129, 0x1.6f26958f6b483p-430, 0.0, 0x1.d7337f2b7aacbp-991, 0.0,
     0.0, 0.0, 0x1.e717bdb576a83p-142, 0x1.32c50ce13364dp-362, 0.0,
     0x1.d9a149742128cp-631, 0x1.ea15c5f44c041p-289, 0.0, 0.0, 0.0, 0.0,
     0x1.21b6c1b74f03p-505, 0x1.d1f1bdef95c09p-564, 0x1.31c2dca1c57e9p-552, 0.0, 0.0,
     0.0, 0x1.8eae54b45ca92p-105, 0.0, 0x1.c86947d9bcdabp-877, 0.0,
     0x1.4f177063b3fbbp-901, 0x1.1da0a48a8d069p-785, 0.0, 0.0, 0.0,
     0x1.8b6917579b131p-287, 0x1.8f3d434791d82p-800, 0x1.d110521000006p-503,
     0x1.b506fe35c0da9p-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c2cc040eb41p-582,
     0x1.1eb40d63a686ep-920, 0.0, 0x1.e3d345cff282fp-970, 0x1.3124ea90e6f02p-851,
     0x1.2d126747a9ef8p-493, 0.0, 0x1.9d0f6fae40f4dp-436, 0x1.b19455525e21bp-317,
     0x1.ea3976c037f5bp-433, 0.0, 0x1.05f2633cc65afp-812, 0x1.a4b72da7456cep-480,
     0x1.ed20ddff86a3p-442, 0.0, 0x1.c9a7a3e60152ap-130, 0.0, 0x1.dc87c62a1ad6p-872,
     0.0, 0.0, 0.0, 0x1.15346f4d96007p-247, 0x1.102e7f70b6eb9p-944, 0.0,
     0x1.e0424466bd87ep-796, 0x1.8d1a0edbb8f2ep-409, 0x1.0ef323fc826a9p-562,
     0x1.06efddf8ba71ap-51, 0.0, 0.0, 0x1.d87e1c5e336fap-643, 0.0,
     0x1.2ea4bfb3098e8p-341, 0.0, 0x1.7dce7702f7392p-653, 0.0, 0.0, 0.0,
     0x1.ed2a5369e1d99p-710, 0.0, 0.0, 0x1.368b80cc49877p-90, 0x1.bc2606a5a859ap-581,
     0x1.9db5da5f766afp-95, 0x1.a1446c75a42d5p-820, 0.0, 0x1.9ec6a7267cf3ep-68, 0.0,
     0x1.74eea0f1ccd5p-918, 0.0, 0x1.4d79592c23b14p-615, 0.0, 0x1.1cb91415a0bafp-570,
     0x1.889615456c6bep-324, 0.0, 0x1.95579e035b132p-934, 0.0, 0x1.acf2885204d1cp-49,
     0.0, 0.0, 0x1.2d587a4226583p-492, 0x1.b5a250bb3d6eap-267, 0x1.091149a2fa0ap-351,
     0.0, 0x1.03e4ee7931821p-868, 0x1.e09d88eb5e68fp-495, 0.0, 0.0,
     0x1.f14e41dd97397p-934, 0.0, 0x1.70414b2df507dp-119, 0.0, 0.0, 0.0, 0.0,
     0x1.cdf0b2aa77aadp-357, 0x1.305e1c9c5177ep-535, 0.0, 0x1.ed61c81e99c07p-1013,
     0x1.6bcb7cf127314p-23, 0.0, 0x1.6095be82026d2p-190, 0.0, 0x1.895a38c113adfp-713,
     0x1.02faa46fcaa43p-633, 0x1.16c35669bfcbp-765, 0x1.b880cad55c761p-837,
     0x1.45118587cf0eap-933, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincosd2_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd2_u10kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
