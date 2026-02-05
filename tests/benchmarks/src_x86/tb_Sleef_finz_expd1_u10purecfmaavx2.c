/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expd1_u10purecfma.c --function \
 *     Sleef_finz_expd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.969341f938fa1p-424, 0x1.639300c793fb6p-41, 0x1.7dfad1420f4cep-724,
     0x1.398847245beep-531, 0x1.4cd0a9bda803fp-501, 0x1.d510e9f4daf8bp-228, 0.0, 0.0,
     0x1.65cac87f0e8adp-872, 0.0, 0.0, 0.0, 0.0, 0x1.5c5ed077ad544p-291, 0.0, 0.0,
     0.0, 0x1.736c11864d058p-549, 0x1.a6c9aca3fe05bp-791, 0x1.b601b7a200b0dp-937, 0.0,
     0.0, 0.0, 0x1.af6fec52b8528p-841, 0.0, 0x1.a274ca042f7ep-226, 0.0,
     0x1.ee3d6ddf862a5p-875, 0x1.4da7c47111e2ep-202, 0.0, 0x1.a6b2460b3b8b9p-890, 0.0,
     0x1.a6d20c30f2e64p-947, 0.0, 0x1.0c427012764aap-608, 0.0, 0.0,
     0x1.e6dfa3079043ep-734, 0x1.50ac6143e62f6p-414, 0.0, 0x1.37c6941b48335p-280, 0.0,
     0x1.3592b95dc1345p-188, 0.0, 0.0, 0x1.f187259a67fcp-536, 0x1.2481bcb19b49fp-517,
     0.0, 0x1.69983dc758b86p-557, 0x1.10fd483a61c6p-207, 0x1.12f20e431f834p-537,
     0x1.adc5f615a5a1dp-735, 0.0, 0.0, 0.0, 0x1.bcddeaa6b1eacp-362, 0.0,
     0x1.31041ca5f830cp-806, 0.0, 0x1.e30e346bbe4afp-102, 0x1.1e3f287925c36p-652,
     0x1.8e178b98702f8p-52, 0x1.3a409f8002df7p-790, 0.0, 0x1.fd2a560ab52dep-809,
     0x1.1f3e2f263d9b9p-115, 0.0, 0.0, 0x1.b4e0ceba00d8ep-959, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.151d236ea44f4p-350, 0x1.76ac95248699dp-374, 0.0, 0.0, 0.0, 0.0,
     0x1.7760813268bd8p-275, 0.0, 0.0, 0x1.17625c9bccdf5p-795, 0x1.c1bcbd2c4b30ep-766,
     0x1.56c25f413c377p-317, 0x1.097d817ec5fa8p-158, 0.0, 0x1.e52821760619ap-777,
     0x1.d5b5954c98261p-528, 0x1.a9e79760931bbp-626, 0.0, 0x1.c5b13c8a937ddp-787, 0.0,
     0x1.8234805fbe214p-763, 0.0, 0.0, 0x1.a6bb0c9d35e69p-879, 0x1.b09e0ded80c06p-378,
     0.0, 0.0, 0x1.98ffb0460dcbbp-257, 0.0, 0.0, 0.0, 0x1.1608135315dfap-981, 0.0,
     0.0, 0.0, 0x1.27d7974fdc8d7p-347, 0.0, 0x1.8102cb56d2cdfp-803,
     0x1.8c021b9957964p-900, 0x1.da3b37ee1490ap-502, 0.0, 0.0, 0.0,
     0x1.25819720e43dfp-449, 0x1.4349b1f61c861p-260, 0.0, 0x1.61a226bc68ee1p-572,
     0x1.48578125cefc6p-763, 0x1.207b25b8d8faap-673, 0x1.d9b6fda48e9fap-593, 0.0,
     0x1.998a72799edcap-765, 0.0, 0.0, 0.0, 0x1.cf696f30f104bp-420,
     0x1.f5cdcf52b3ce4p-760, 0.0, 0x1.3cd754b17d764p-241, 0x1.990246e418309p-62,
     0x1.c6c2abe2979d2p-701, 0.0, 0x1.dfb80fe4a5f66p-75, 0.0, 0x1.734d4c49ee453p-77,
     0.0, 0.0, 0.0, 0.0, 0x1.49923690776e3p-168, 0x1.0a3f363768f71p-69, 0.0,
     0x1.d2e3cc7c5b92dp-834, 0.0, 0x1.67e2cff361579p-879, 0x1.9264d2ae04eep-360,
     0x1.c817b8d5ad086p-180, 0x1.6ccfa41b00637p-153, 0x1.eadb08bdf38cap-429, 0.0,
     0x1.dc2eb9cf4b102p-665, 0.0, 0.0, 0x1.d440a375397efp-254, 0x1.258501b36d0e5p-879,
     0x1.5a27575e1cc27p-33, 0x1.90703057e94e5p-632, 0x1.3ead5bd9f6dbap-395, 0.0, 0.0,
     0.0, 0x1.17649e0f27d6dp-104, 0x1.6006d0874dc8p-935, 0x1.8cf24577e49c7p-519,
     0x1.e0e0bcedbf42fp-739, 0.0, 0x1.4f08da7dcb6f3p-664, 0.0, 0x1.5e8fcf2a7ee13p-892,
     0.0, 0.0, 0x1.d725578ef9eb4p-741, 0.0, 0.0, 0.0, 0x1.4a5e7bf6abf78p-466,
     0x1.2a1df65736ea1p-716, 0x1.f3518ac6b3f84p-394, 0x1.bd6fe93e39b5fp-81, 0.0,
     0x1.df86512c11084p-524, 0x1.a3efdb30f0e9ap-595, 0x1.0c798d58d0b94p-179,
     0x1.bc4ff4658599p-427, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a70feb03692e8p-297, 0.0,
     0x1.0991bd8b0309fp-43, 0.0, 0.0, 0x1.948d25b8bb2f2p-286, 0.0, 0.0,
     0x1.d859fdffe9a26p-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0bbcea6e893ffp-718, 0.0, 0.0, 0x1.71959834709ap-173, 0.0,
     0x1.c291897863b89p-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84c5ca330de81p-584, 0x1.498bcb8b211cbp-269, 0.0, 0.0, 0x1.180742ae7bb23p-664,
     0x1.a4f32cbb2b46fp-786, 0.0, 0x1.453c48ae98f0ep-128, 0x1.d3ccc468b252p-427, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae1a19fa7b9ap-557, 0x1.4d876fd84acf9p-1003, 0.0,
     0.0, 0x1.e8e26ccb8328fp-987, 0x1.f9ac68eb212dfp-135, 0.0, 0x1.67db76da8c565p-461,
     0.0, 0x1.51441461cbc5bp-825, 0.0, 0x1.690fddca1b86ep-828, 0.0,
     0x1.71723bd91dbc2p-1014, 0x1.44101bd8db6c4p-616, 0x1.35d2313a6a0d2p-757, 0.0,
     0x1.133da97d920e7p-610, 0x1.e513ab242ca67p-468, 0x1.7ce3c9b9e5c76p-621,
     0x1.77e2fd00c5e24p-53, 0x1.bdcb5271bfe9dp-967, 0.0, 0x1.baae5215bd434p-526,
     0x1.ef207bab9dfb1p-203, 0.0, 0x1.7649703ff39fep-102, 0.0, 0x1.c246e266277a3p-770,
     0.0, 0.0, 0x1.e3894af69d27cp-584, 0x1.84868fa8774d8p-282, 0x1.a417273738ebep-99,
     0x1.bf0beb2f7ede9p-772, 0.0, 0.0, 0x1.be88fe3e92396p-815, 0x1.8a16cdf11d7d2p-451,
     0.0, 0.0, 0x1.8e3e3739ae588p-918, 0.0, 0.0, 0x1.1c2ec51918bd9p-136,
     0x1.9824fa3e3e948p-21, 0.0, 0.0, 0x1.053ca4a331a61p-60, 0.0, 0.0,
     0x1.0d9445f8992c8p-450, 0.0, 0.0, 0x1.3b998cc8b4b29p-323, 0x1.9423adbdd86cdp-292,
     0.0, 0x1.441491509b883p-560, 0.0, 0x1.46c3359944a52p-635, 0x1.cc2d9b28b1048p-849,
     0x1.6e205e1e17428p-873, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.306c92660b5f3p-749, 0x1.96c0c9d0c968dp-890, 0x1.9ac81c6c5921dp-268, 0.0, 0.0,
     0.0, 0x1.ef65da1c5c27dp-802, 0.0, 0x1.976f338874084p-673, 0x1.684cdc011cb6ap-402,
     0.0, 0.0, 0.0, 0x1.54b3fe8a23a34p-200, 0x1.5d5e515080076p-217,
     0x1.f6151ac2a8c25p-71, 0x1.6337e37116dc6p-776, 0x1.f0ec411dd7d9cp-485,
     0x1.ea4c5862c820fp-919, 0x1.72d7b684b48d8p-712, 0x1.0762ab5295fbdp-699,
     0x1.f1758feb75a2bp-469, 0.0, 0x1.a3c2f99fbea88p-189, 0x1.fe96c925852f1p-620, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b5d5f883b352p-807,
     0x1.e0357940c7297p-612, 0.0, 0x1.53d0cb6932c0fp-495, 0.0, 0.0, 0.0,
     0x1.cf0d88730a373p-70, 0.0, 0x1.358799ca7a8f6p-474, 0x1.7bef07b2566d9p-138, 0.0,
     0.0, 0x1.aff9ffcc7fe1dp-477, 0.0, 0x1.4bdb70c13ceefp-71, 0.0, 0.0,
     0x1.fedeb090f0ce5p-278, 0.0, 0.0, 0x1.83f14d1b9f0c9p-897, 0x1.2579d81ddab6ep-49,
     0.0, 0.0, 0.0, 0.0, 0x1.7174e5e31dccbp-99, 0.0, 0.0, 0x1.e21a19b03550dp-941,
     0x1.b91e19a38a65dp-538, 0x1.dacde869e374ep-66, 0.0, 0x1.c09d16b9259d2p-327,
     0x1.3cd721ac3a903p-757, 0.0, 0.0, 0x1.9b62ad49715d8p-518, 0x1.57e96cc29ac7p-371,
     0x1.c5ff4bcbf3244p-264, 0x1.1fa57ae64ca08p-505, 0x1.7ea6512ff9764p-870, 0.0,
     0x1.e38f14c80de95p-959, 0x1.e71555aff73abp-481, 0.0, 0x1.5f008da6c4442p-848,
     0x1.279e0a8b8d2f5p-228, 0x1.495bc8b5d66dp-435, 0.0, 0.0, 0x1.1e0db9cee85e9p-81,
     0.0, 0x1.6fd7b3c627c04p-375, 0.0, 0x1.8b5cbf42847f2p-689, 0.0, 0.0,
     0x1.cb097c0856e18p-115, 0.0, 0.0, 0x1.10f4d8a42f028p-75, 0x1.a8103157946bfp-727,
     0x1.497debd41f8p-502, 0.0, 0x1.86e503a15b933p-14, 0.0, 0x1.2a64e32fdc5e5p-554,
     0x1.88d16d6ee7ea2p-747, 0.0, 0.0, 0.0, 0x1.96a19fbe0526ep-1017,
     0x1.06e828cee50b3p-444, 0x1.712a4a620a11ap-993, 0x1.701664f4cd6f2p-320,
     0x1.e1f175b3c2888p-559, 0x1.b9c09b96d777ap-871, 0.0, 0.0, 0.0, 0.0,
     0x1.c813b328c5904p-298, 0.0, 0x1.5dad1b0eb226cp-862, 0.0, 0x1.88269677b7354p-308,
     0x1.e91459290750dp-337, 0x1.570ae7523c7d1p-19, 0x1.513f5f8f19e1p-591, 0.0,
     0x1.6dc22b7ade129p-904, 0.0, 0x1.0d5fe2a4719f8p-637, 0x1.53778cc9f4ebp-385, 0.0,
     0x1.31019d7595eddp-727, 0.0, 0.0, 0.0, 0x1.41e0223baacfep-1018, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9aaf10ae2ba0fp-262, 0.0, 0.0, 0x1.8562995311dadp-594,
     0x1.b3966387dc17p-196, 0.0, 0x1.793112b1bda7bp-148, 0x1.e9507b542f654p-348,
     0x1.51d19cdb0989bp-256, 0.0, 0.0, 0.0, 0x1.6fe0500bc53fdp-340,
     0x1.8c9389feab6e1p-231, 0.0, 0x1.18f4accfb38dbp-4, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed1b6e4554eb6p-571, 0x1.7ee2284df37d3p-40, 0.0, 0.0, 0.0,
     0x1.02bd520365afp-588, 0x1.af926911609a3p-583, 0.0, 0.0, 0x1.538f7cc6aae28p-433,
     0.0, 0.0, 0x1.29be419844f81p-708, 0x1.d3bd1752ea6efp-646, 0x1.4165616d5cc9ep-770,
     0x1.90bfc08902be1p-774, 0.0, 0.0, 0.0, 0.0, 0x1.131ab49b26536p-821,
     0x1.c43c558d612abp-117, 0.0, 0x1.75e4386fdc3ecp-930, 0x1.e3973cf6bd3e4p-921, 0.0,
     0x1.c4fe3f9a32c22p-748, 0.0, 0x1.94e0ec8ecd4bap-12, 0.0, 0x1.5ae3cf97feef3p-64,
     0x1.778ddfcfa9b7p-869, 0.0, 0.0, 0x1.3fd7b3a930251p-583, 0.0,
     0x1.23e6be91f9a77p-136, 0x1.edbd559add1bep-457, 0.0, 0x1.75eb8705487b4p-132,
     0x1.cbcc054030eb3p-774, 0.0, 0.0, 0.0, 0x1.e801ce8c87197p-691, 0.0,
     0x1.628343f6619f5p-878, 0.0, 0.0, 0x1.71435e2ff857bp-147, 0.0, 0.0,
     0x1.4aa90c4aa7c0bp-874, 0x1.fad68591f6a01p-629, 0x1.03b137c1553a5p-411,
     0x1.c83328a8d1b74p-608, 0x1.f292ac4385d04p-379, 0.0, 0.0, 0.0,
     0x1.a5601d72617cap-244, 0.0, 0x1.1f86ce6f03cc8p-27, 0x1.1c1930fcda36fp-57, 0.0,
     0x1.586f18d48f518p-606, 0.0, 0x1.33e48e39b7e9p-387, 0.0, 0.0, 0.0, 0.0,
     0x1.b989552993513p-503, 0.0, 0.0, 0x1.e9627d1044912p-973, 0.0,
     0x1.bca9a630fb524p-835, 0x1.8f63d4dfcb237p-403, 0.0, 0.0, 0x1.ccd3f8ff85ed2p-366,
     0x1.eea84d159dac4p-171, 0x1.f36b4b80d0e51p-933, 0.0, 0.0, 0.0,
     0x1.9e56b42a371a1p-858, 0x1.3d07514e99407p-572, 0.0, 0.0, 0x1.a0ca44dd00878p-196,
     0.0, 0x1.937755cfb9105p-480, 0.0, 0x1.72d498d8a15d2p-900, 0x1.bb0453be9cc8fp-381,
     0x1.dea0bcf529ab4p-774, 0x1.d056d30a486f5p-175, 0x1.9bd1850053c9ep-626,
     0x1.623b0eedc95c4p-818, 0.0, 0x1.4523d22dc4c6ep-57, 0.0, 0x1.4c868f3247453p-760,
     0x1.5d58da9b07762p-245, 0.0, 0.0, 0.0, 0x1.21bbffdaebbf6p-461, 0.0, 0.0,
     0x1.3ca28e2893d1p-521, 0x1.4c5497893a6dap-98, 0x1.e1ccbf7ac3de2p-44, 0.0, 0.0,
     0x1.a5dbb03ea2631p-428, 0.0, 0.0, 0.0, 0.0, 0x1.51c7c87bac01bp-632, 0.0,
     0x1.8b8af82db2035p-163, 0x1.a561eaff949edp-134, 0.0, 0.0, 0x1.21b1b56fae621p-607,
     0.0, 0.0, 0x1.563b05c6fb776p-133, 0.0, 0.0, 0x1.f7ef8dc6f24e3p-92, 0.0, 0.0,
     0x1.7dc1b1a8789cap-185, 0x1.1fbf7f49e7029p-230, 0x1.efb04e58cad96p-440,
     0x1.7a8433dfdbf3ap-345, 0x1.1401c9a8f84fdp-441, 0x1.8c5aa3b73f294p-941,
     0x1.6b67745d769eap-845, 0x1.050a9530e821cp-934, 0x1.8defb94248165p-39, 0.0,
     0x1.7d4e1c6ad5f94p-130, 0.0, 0x1.cc5fe0dd03a85p-624, 0.0, 0.0,
     0x1.7d7322613d3aap-650, 0.0, 0x1.d32311f2cd37cp-581, 0.0,
     0x1.01c75c20bbb6dp-1008, 0.0, 0.0, 0.0, 0.0, 0x1.2ce9548483807p-952,
     0x1.b123693244cdbp-376, 0x1.712e2c0d35aap-603, 0.0, 0x1.d83f8c9eee837p-269,
     0x1.03a2bf4223f93p-51, 0x1.43fbc520c5d4p-744, 0.0, 0x1.ce2263a781268p-816,
     0x1.dd877555113eap-82, 0x1.947dd732ea219p-797, 0.0, 0.0, 0x1.10de5304e6aa8p-262,
     0.0, 0.0, 0x1.155420f012745p-957, 0.0, 0x1.3ad9408af2e5fp-250, 0.0, 0.0,
     0x1.d740fa71309e4p-329, 0.0, 0.0, 0.0, 0x1.9e8b192903b02p-188, 0.0, 0.0, 0.0,
     0x1.b481f6015dbbp-690, 0x1.a8a02cf4439ecp-685, 0x1.571ed9e0af92fp-571,
     0x1.97391cf47520cp-832, 0x1.50c03d6bccdb3p-792, 0x1.529197c87d42bp-233,
     0x1.e0fb6b81691e9p-299, 0x1.21c22aa3d77d2p-283, 0x1.24d136e94fb4bp-539, 0.0,
     0x1.7a06626068d08p-757, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed44e5a705eecp-386,
     0x1.86d6525958eb6p-633, 0x1.b1bcd0820de29p-923, 0.0, 0.0, 0.0,
     0x1.6989f064a7511p-323, 0.0, 0.0, 0.0, 0x1.ec13d4b5ca332p-77, 0.0, 0.0,
     0x1.e6a7f57b43c08p-944, 0x1.c7a439ed8f445p-627, 0x1.7f56f99dd4d08p-945, 0.0, 0.0,
     0.0, 0x1.794d692bf0f7fp-751, 0x1.e6bcdcbade0e3p-682, 0x1.c6d7452544e56p-1018,
     0x1.ea1872a63c76fp-756, 0x1.8fe9bf63b2034p-320, 0x1.716da722439cdp-796,
     0x1.80c94a55131d5p-689, 0.0, 0x1.f4bd2348a24c8p-787, 0.0,
     0x1.407734d4b855bp-1002, 0x1.b0e7e0ef318d8p-997, 0x1.0b654194ebf97p-800, 0.0,
     0x1.12462e05e4d8p-622, 0x1.fdfb5c697f99cp-109, 0x1.aced48b93f477p-151,
     0x1.86535d1273d4bp-731, 0x1.b452cd7c4ac5cp-535, 0.0, 0.0, 0x1.2f031910b929dp-298,
     0.0, 0x1.22a930db716aap-920, 0x1.884089b157769p-432, 0.0, 0.0,
     0x1.1723f0920c762p-826, 0x1.6c1edf67a81f5p-383, 0x1.0464c158a2e51p-414,
     0x1.a95777ca194bep-477, 0.0, 0.0, 0.0, 0.0, 0x1.84afeda32f50ap-462,
     0x1.1ca51bce0314cp-508, 0.0, 0.0, 0.0, 0x1.f534a15627a91p-430, 0.0,
     0x1.41553bd2193bep-230, 0.0, 0x1.3142bfe6c19c9p-494, 0x1.65191bb972eb8p-591, 0.0,
     0x1.5644f62a38b07p-516, 0x1.2187afb29842dp-1002, 0x1.36b8518364b42p-909, 0.0,
     0.0, 0x1.9897386de878cp-605, 0x1.25297076d955fp-278, 0.0, 0x1.7b7bd553fe0d2p-520,
     0x1.19e4077f4eb8cp-803, 0.0, 0x1.7cc5e5b702f7bp-655, 0x1.01d75d3615e76p-297,
     0x1.e951069ffc16fp-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.996867ad4542cp-570, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0cec4df10c7bp-604, 0x1.82c4779bcc15bp-220, 0.0,
     0x1.354b2453422bfp-960, 0.0, 0.0, 0x1.dd9c5fbcf8158p-629, 0x1.bcefd5736ebb4p-523,
     0x1.3b4de96de3cdbp-124, 0x1.ff55cc34061d8p-861, 0x1.779f7a37dd218p-807,
     0x1.0121c4ff09537p-575, 0x1.f12727a04a58ep-692, 0x1.afaa78c10b22ep-845, 0.0,
     0x1.8bfa778f0d1f9p-202, 0x1.7218f99c21cf8p-732, 0.0, 0x1.2835c00a723ebp-748, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.22a12f6f49d59p-484, 0x1.aee7ac632094ap-375, 0.0,
     0x1.98900b910c344p-207, 0.0, 0x1.e15ece6c8583ap-595, 0x1.8b4e66865a7e1p-100, 0.0,
     0.0, 0x1.8b8decc9de05bp-997, 0.0, 0.0, 0x1.e0e3711f0e8ccp-382, 0.0, 0.0,
     0x1.5f81b4d6bf4c8p-268, 0.0, 0.0, 0x1.5335e1e1d2c9p-257, 0x1.8fb89e455dd26p-186,
     0x1.c5fd8bba27161p-848, 0x1.d365f4e7f05fdp-24, 0x1.a5a066b0a2c8p-339, 0.0,
     0x1.3c72892f9d873p-40, 0.0, 0x1.ee1f7834b199ap-933, 0x1.1755c6138fbfcp-868, 0.0,
     0x1.e468185e8eda6p-721, 0.0, 0.0, 0x1.54642c0f3da6dp-547, 0.0, 0.0, 0.0,
     0x1.984c27cb7d53dp-9, 0x1.96df3c923621ap-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34ae3c2171ca1p-735, 0.0, 0.0, 0.0, 0x1.f13654555de33p-555, 0.0,
     0x1.bdc7187970c13p-435, 0x1.3a3f981fb7747p-637, 0x1.c96d1467376b8p-116, 0.0,
     0x1.7027cc57842e7p-855, 0.0, 0x1.1ae481df1e3a9p-31, 0x1.c716d35456fa8p-629,
     0x1.d9a6895b06ep-150, 0x1.6150d10ddc1f8p-34, 0x1.d46999de9e3a6p-499, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0be374f41da68p-2, 0x1.e0af7be85b261p-945,
     0x1.9a1d96b39eb84p-976, 0.0, 0x1.9b3dac870d7bdp-376, 0.0, 0.0,
     0x1.64d46da2fe30ap-691, 0.0, 0.0, 0.0, 0.0, 0x1.3538d3504e0ep-325, 0.0,
     0x1.831a7d1ee48d9p-657, 0x1.8f61484e4a3c5p-735, 0.0, 0.0, 0.0, 0.0,
     0x1.40ea1ad04ef65p-29, 0.0, 0.0, 0x1.8e568e1ddafe7p-259, 0.0, 0.0, 0.0, 0.0,
     0x1.7781478838768p-731, 0.0, 0.0, 0x1.1b3df8b998c0ep-566, 0.0,
     0x1.afaec104b4bf3p-252, 0.0, 0x1.da7f3843b1637p-276, 0x1.bd9b080b2e3e5p-691, 0.0,
     0x1.84d21938b27fep-795, 0.0, 0.0, 0x1.035632406d78ep-608, 0x1.0e71f678c8c5cp-895,
     0x1.252cdf696544p-66, 0x1.78270a8b0b57p-497, 0x1.3b9f04067ed22p-789, 0.0, 0.0,
     0x1.4bcee57bcffdbp-565, 0.0, 0x1.6167418035a41p-701, 0.0, 0.0,
     0x1.11ddf6d5826d3p-528, 0.0, 0.0, 0x1.913eab2cd547fp-884, 0x1.a2733eb66b01dp-799,
     0.0, 0x1.e5123806f7848p-883, 0.0, 0.0, 0x1.0077eeb15fe33p-399, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.56f69675e069dp-180, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.456525434aa8ep-358, 0.0, 0.0, 0x1.0ece7c39a4d16p-978, 0x1.79c128c7c661dp-511,
     0x1.320f402d6a119p-237, 0.0, 0.0, 0.0, 0x1.36ab27079e997p-347, 0.0,
     0x1.0aad3f6ba5efbp-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b509a2207f348p-52, 0.0, 0.0,
     0x1.c3f6947004a36p-733, 0.0, 0.0, 0x1.9368a7e06ec89p-776, 0x1.0761b96dd34bbp-995,
     0.0, 0x1.273ac25f964dep-168, 0.0, 0x1.5da5c8a9bee6p-644, 0.0,
     0x1.8d7af0792bfcp-608, 0.0, 0.0, 0x1.596132e18a098p-509, 0.0,
     0x1.0e418ab301fffp-804, 0.0, 0.0, 0x1.9eb28359af63fp-562, 0.0,
     0x1.381e6d449aaeep-426, 0x1.be0221ce87b28p-695, 0x1.da905726d818ep-601,
     0x1.65e187150c668p-207, 0x1.adbc7df6b1f8bp-294, 0x1.5c735f17a8696p-364,
     0x1.2eb0c7134d1a8p-440, 0x1.36999a7838ebcp-972, 0.0, 0x1.9bc1bef41364fp-154,
     0x1.8527f3c013f65p-334, 0.0, 0.0, 0.0, 0x1.05ab91ec64c81p-337, 0.0, 0.0, 0.0,
     0x1.d37399cfc6b3p-750, 0x1.521556092f0e1p-1012, 0.0, 0.0, 0x1.f0fa037f8cca5p-575,
     0x1.9c552e905dac3p-417, 0.0, 0x1.73d1709cd8b4ep-242, 0.0, 0x1.ad4614d68ffd8p-556,
     0.0
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
            tmp1 = Sleef_finz_expd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expd1_u10purecfma bench acc %la\n", global_bench_acc);
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
