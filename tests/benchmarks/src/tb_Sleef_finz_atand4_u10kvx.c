/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand4_u10kvx.c --function \
 *     Sleef_finz_atand4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.b1a3aa5645647p-277, 0.0, 0.0, 0.0, 0x1.ab5953017e7a1p-589,
     0x1.ba4e2d2e6c857p-971, 0x1.94838c8859666p-1007, 0x1.e297ac9b095f1p-247, 0.0,
     0.0, 0.0, 0.0, 0x1.8d6ec1fe02b86p-226, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1a7a646a64dep-563, 0.0, 0x1.2b54d3a2ec37dp-553, 0x1.4afa2870c9dbdp-421, 0.0,
     0.0, 0.0, 0.0, 0x1.70731abf56c5cp-996, 0.0, 0x1.e3af536da1e54p-826,
     0x1.11a6f0315bea3p-853, 0.0, 0.0, 0x1.ae6a84378ef25p-850, 0x1.51f5faae55f2bp-675,
     0.0, 0x1.8c10610b28da2p-169, 0x1.ddfc4b6f08f76p-334, 0x1.2f5280034a774p-694,
     0x1.60213c1bb5c4bp-793, 0.0, 0.0, 0.0, 0.0, 0x1.9b5f7bc17c32dp-421,
     0x1.c74ad987b5c5ep-507, 0.0, 0.0, 0.0, 0.0, 0x1.badec416bb449p-919, 0.0, 0.0,
     0.0, 0x1.212a4c5dd1cb8p-519, 0.0, 0.0, 0.0, 0.0, 0x1.9bc3f97f9a8acp-800, 0.0,
     0x1.fddbca291e4a2p-1003, 0.0, 0.0, 0.0, 0.0, 0x1.0d90520a24aebp-569, 0.0, 0.0,
     0x1.1d704276f8a81p-1022, 0x1.720b7da0d5ebcp-658, 0x1.b5dea139a96fap-638, 0.0,
     0.0, 0.0, 0x1.183f8055bf52bp-320, 0x1.dc2752094e068p-797, 0x1.1a165d16f013ep-698,
     0x1.1978453636919p-136, 0.0, 0.0, 0x1.16436c23a9d7dp-929, 0.0, 0.0,
     0x1.3fa06d7290ebdp-653, 0x1.150aeaaf083eep-345, 0x1.3b291ebeb09a9p-435, 0.0,
     0x1.dc6c31a869353p-359, 0.0, 0.0, 0x1.b617313eac246p-577, 0x1.4adfe40b867a3p-259,
     0x1.dbdce971fa91dp-40, 0x1.238520a86033cp-112, 0.0, 0x1.10285436c82a5p-790, 0.0,
     0x1.d0373f29e5fdcp-1017, 0.0, 0x1.5df4fd54191bep-114, 0.0, 0.0, 0.0,
     0x1.31684a4c2f945p-860, 0.0, 0.0, 0.0, 0.0, 0x1.9e4cebf340486p-349,
     0x1.432e7d988dbc9p-870, 0.0, 0.0, 0x1.78f4ae8677da4p-768, 0x1.b984d2a62a986p-948,
     0.0, 0.0, 0.0, 0x1.ed173c2e8b76ap-266, 0.0, 0.0, 0x1.453e906d900fbp-822, 0.0,
     0x1.98aec81f087eep-762, 0.0, 0x1.c2e13d8c7fdap-778, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.725692786d11cp-95, 0x1.5af2335723378p-243, 0x1.f8e0da29b141bp-276, 0.0, 0.0,
     0.0, 0.0, 0x1.abfe3f63b29c8p-127, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b188e4dc4d57p-570, 0x1.f284d8e4ad521p-493, 0.0, 0.0, 0.0,
     0x1.6b08b1366c3dp-363, 0x1.15684efd5c827p-808, 0x1.89b9b8d01945ep-791,
     0x1.6f0ee46726085p-96, 0x1.2b362be06dce3p-193, 0.0, 0.0, 0x1.f45dd5f5da139p-1009,
     0x1.bc0486829ff1cp-624, 0.0, 0x1.ef4787477805bp-1011, 0x1.7f52b1580f01ap-534,
     0.0, 0.0, 0x1.2011ed60b0e79p-682, 0.0, 0x1.3d563b0c2b3c3p-238,
     0x1.7c2f8383950ddp-285, 0.0, 0.0, 0x1.01f4ddfce2defp-744, 0.0, 0.0, 0.0, 0.0,
     0x1.4246768b0cce4p-88, 0.0, 0.0, 0x1.fd2562e249926p-765, 0.0,
     0x1.bdc80417ef2b4p-660, 0x1.6dccc158a99aep-573, 0.0, 0.0, 0x1.003e027f266bep-463,
     0x1.2645dc9938df9p-63, 0x1.0cb4efe42b637p-532, 0.0, 0.0, 0x1.6452a113621d9p-858,
     0.0, 0x1.0cdb9fb3b96f8p-244, 0.0, 0.0, 0x1.2aedaa1c7c25dp-535, 0.0,
     0x1.6e40c9cd29cbcp-131, 0.0, 0.0, 0x1.58449c26e2ae4p-622, 0x1.f40000fbb0ed7p-565,
     0x1.b449b095ba679p-317, 0x1.f32be1d4fd64bp-879, 0.0, 0x1.f701afcddf4f1p-651,
     0x1.458e8696945ebp-35, 0.0, 0x1.8b08a5a79077cp-91, 0x1.3bb41880af4edp-609, 0.0,
     0x1.e3b5050038e4bp-280, 0.0, 0x1.29dd03a67655cp-839, 0.0, 0x1.fe29653abb91fp-595,
     0.0, 0x1.08d50d7ec959bp-541, 0.0, 0x1.8f63218d18b8fp-465, 0x1.e992d1c21a998p-433,
     0x1.85909306915e8p-109, 0x1.478eaf4e1f426p-45, 0.0, 0.0, 0.0, 0.0,
     0x1.e526d0405f32dp-491, 0x1.544ae5542b449p-330, 0.0, 0x1.51d118eede95fp-599, 0.0,
     0x1.aa8a9baf29769p-996, 0.0, 0x1.4176bdb999785p-440, 0x1.5cea270dbf039p-108,
     0x1.17a94ff5e07ddp-189, 0x1.790c8b1f109f9p-509, 0x1.aa9ff15323fa4p-2, 0.0, 0.0,
     0x1.54365fdeb0a07p-985, 0.0, 0.0, 0x1.2905543862a0cp-74, 0.0,
     0x1.6040387e22f87p-6, 0x1.6c329f7790a7dp-798, 0x1.040ebdd8c89abp-192,
     0x1.948e8a91c4077p-47, 0x1.1bbb0be21638fp-404, 0.0, 0.0, 0x1.f6da53e9e9ebdp-530,
     0x1.b03ce3fff51c3p-440, 0.0, 0.0, 0x1.b3cc453ffd178p-464, 0.0, 0.0, 0.0, 0.0,
     0x1.d4b1c11e15166p-1013, 0x1.2d7e605f62051p-400, 0.0, 0.0, 0.0,
     0x1.8b79e3a0d965dp-168, 0.0, 0x1.79c4bebeecf21p-458, 0.0, 0x1.c656c90dcd56bp-701,
     0x1.5d8a232c4a961p-887, 0x1.323a0c9e9319fp-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0ad1e488c29e7p-786, 0.0, 0x1.6d28bba9f0c72p-285, 0.0, 0.0,
     0x1.abc067b5b8082p-766, 0x1.5d51b9d58e87dp-536, 0x1.7868926e4d8bbp-519,
     0x1.d2cc8f7cdec7cp-1015, 0x1.f7b9c748fe61ep-971, 0.0, 0x1.279cce0921e27p-242,
     0x1.e0debcde00e29p-373, 0.0, 0x1.b52d217c0dfep-852, 0.0, 0x1.60367ff6b2577p-181,
     0.0, 0.0, 0x1.f464266b85546p-360, 0.0, 0x1.edc83e63c0728p-426, 0.0,
     0x1.98bb8738282eap-309, 0x1.8e8b8bfd3610fp-198, 0x1.4fbbcac623a71p-755,
     0x1.bb5804881e20bp-865, 0x1.65516160d7768p-946, 0.0, 0x1.2f97af27ebe6p-948, 0.0,
     0.0, 0x1.3f2f6f1aed4e4p-717, 0.0, 0.0, 0.0, 0x1.81d7f5d781c5fp-547,
     0x1.81d5f37821785p-837, 0.0, 0x1.f38b74a5ca5a5p-550, 0.0, 0.0, 0.0,
     0x1.04face768a08bp-705, 0.0, 0.0, 0.0, 0.0, 0x1.660712e46e6a4p-354, 0.0, 0.0,
     0x1.fa38f6d9a2cb1p-911, 0x1.f9d4549e1cb3ep-296, 0.0, 0x1.0882ae0319edap-1010,
     0x1.844f478863a92p-945, 0.0, 0.0, 0x1.c7dc6939981b9p-135, 0.0,
     0x1.d8a152f442842p-499, 0.0, 0x1.b71874ffd60b9p-516, 0.0, 0.0, 0.0,
     0x1.3b4a67613f189p-630, 0.0, 0.0, 0.0, 0x1.75ae359ec617ap-530, 0.0,
     0x1.7f0cbec1d3cc8p-938, 0x1.b95911b16e8acp-107, 0x1.067ede5557a2dp-345, 0.0, 0.0,
     0x1.43a813fdd4807p-1020, 0.0, 0x1.b14e0f77055bp-892, 0x1.838e6b0b0f3fdp-887, 0.0,
     0.0, 0x1.2e31d66057ba7p-940, 0x1.21dfdbeae4897p-1013, 0.0,
     0x1.ed8efe6f17eecp-527, 0x1.99d1fb58e49f4p-489, 0.0, 0.0, 0x1.ccda7e1cc272ep-975,
     0x1.ac6ffc87fb3d9p-733, 0x1.21ff75436ec28p-357, 0.0, 0x1.d14cda2f32128p-331,
     0x1.5b314a0ee8102p-533, 0x1.21b5b0d82a97dp-713, 0.0, 0x1.44b705a97cd2fp-811,
     0x1.63e26eb7603d3p-526, 0x1.09c2fd2496a76p-782, 0.0, 0x1.2fa4ea03d836ep-830,
     0x1.01ccccd4b2bc9p-474, 0.0, 0x1.b540e92c4b076p-86, 0.0, 0.0, 0.0,
     0x1.033e0d176fe16p-907, 0x1.3c5b5dc2ef7cbp-151, 0.0, 0.0, 0x1.321e2edffbc71p-790,
     0.0, 0.0, 0.0, 0x1.f4b941f3013eap-696, 0.0, 0x1.c5317899bfdb5p-782, 0.0, 0.0,
     0x1.1e0e9e89ba1dap-348, 0.0, 0x1.f2ce659cc1f66p-434, 0.0, 0x1.9d63304471b47p-762,
     0x1.265cdaec994cp-417, 0x1.04fee01d78cd6p-304, 0x1.372468a495f49p-978,
     0x1.0a1719548d1cdp-935, 0.0, 0.0, 0x1.104d9a4a3a28bp-382, 0x1.bb364e03de47fp-30,
     0x1.f2b488ad18093p-338, 0.0, 0.0, 0x1.86239bb7d8d2dp-510, 0.0,
     0x1.8c44892ff2eb6p-471, 0x1.77bb41fddc406p-490, 0.0, 0x1.f21e5ead963e1p-464, 0.0,
     0.0, 0.0, 0x1.588aa6a60c875p-262, 0x1.6e8a6d7cb3525p-1022,
     0x1.b72dc01835d38p-414, 0.0, 0x1.bbf5aa4a306dep-437, 0.0, 0x1.408037ffac8e5p-654,
     0.0, 0x1.2706089adb45ap-202, 0.0, 0x1.fd583df286ab6p-895, 0.0, 0.0, 0.0, 0.0,
     0x1.6a99314939e7ap-55, 0.0, 0x1.1dbdaf382ee81p-960, 0x1.4434a1bd783c8p-750, 0.0,
     0.0, 0.0, 0x1.8cefb15086eb6p-1022, 0.0, 0.0, 0x1.fa6f925fa8334p-214,
     0x1.3c1b8460857f4p-55, 0.0, 0x1.97b5501c8cc42p-494, 0x1.5f161cf9c6481p-200,
     0x1.a8fc7fc6c887fp-799, 0x1.ee0df91e4f29ap-295, 0x1.8174511cf23b1p-111,
     0x1.6dbce6b5a4375p-636, 0.0, 0x1.9683f3f08213p-847, 0x1.300fe77801843p-304, 0.0,
     0.0, 0x1.351b396988936p-487, 0.0, 0.0, 0x1.7c056f349f48p-418,
     0x1.0a3efda1daef7p-557, 0.0, 0.0, 0x1.5a49efd783c85p-10, 0.0, 0.0, 0.0,
     0x1.6381d5709d5d4p-438, 0.0, 0x1.236cbf959393dp-251, 0x1.b97894acb8e9p-211,
     0x1.5cac0095acc38p-946, 0x1.c62a3b95c1348p-866, 0.0, 0x1.8f0bddbd51fcbp-675,
     0x1.549decbd5dd91p-645, 0.0, 0x1.555df3aedba23p-619, 0.0, 0.0,
     0x1.4a457bc0b1e0ap-436, 0.0, 0.0, 0x1.4c85033f8ea4cp-926, 0x1.013262b8e836dp-282,
     0.0, 0.0, 0x1.003df50b15014p-213, 0.0, 0x1.2b1439e855459p-385, 0.0,
     0x1.be5591be2fbb3p-525, 0.0, 0.0, 0x1.2bd9b59d6a116p-47, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db9b872c042ccp-923,
     0x1.25bf07e0d12d1p-933, 0.0, 0x1.e0c3ad11d8801p-757, 0.0, 0.0, 0.0, 0.0,
     0x1.281c96ba8619dp-28, 0.0, 0.0, 0x1.f8515bbdac0c2p-906, 0.0, 0.0,
     0x1.cd3155bf099cap-304, 0x1.0f13f30541545p-45, 0.0, 0x1.bca8434c022a6p-283, 0.0,
     0x1.3ce305c8695eap-50, 0.0, 0x1.fc79904e0a49dp-785, 0x1.d8eab9fb80f49p-72, 0.0,
     0.0, 0x1.87714556ed59p-226, 0.0, 0.0, 0x1.8edce61890a89p-898,
     0x1.2fdd1cdcbc189p-451, 0.0, 0x1.06be4a61c80cfp-258, 0.0, 0x1.fb90e68e8a1b3p-311,
     0.0, 0.0, 0.0, 0.0, 0x1.f0d00a5c1c4d9p-554, 0x1.8eb90a20f824cp-745, 0.0,
     0x1.2b6c60484d008p-1, 0x1.0fc007341d12ep-910, 0x1.928b226d6dfdcp-651,
     0x1.3164631ac933ap-131, 0.0, 0x1.1621e522bad6fp-284, 0x1.04b96945600fp-762, 0.0,
     0.0, 0x1.71a7f3f7c4c7bp-972, 0.0, 0x1.76d9aead09765p-508, 0.0,
     0x1.fbf6a2ae6057p-1010, 0x1.fbf3c5085bedap-655, 0x1.ac853a893b6a8p-559, 0.0, 0.0,
     0x1.f4bae1162fa0ep-697, 0.0, 0.0, 0x1.9424b1fe0c9e8p-197, 0.0, 0.0,
     0x1.021b40c8d7d2ap-665, 0x1.4426e541137f8p-90, 0x1.16a8a9f282d76p-994, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9d8e8fcca307ep-784, 0.0, 0.0, 0.0, 0x1.c2ce27bfddddap-567,
     0.0, 0.0, 0x1.0b4a243626ccdp-32, 0.0, 0.0, 0x1.b646a37ad62fp-760, 0.0, 0.0, 0.0,
     0x1.3174e4af30f46p-496, 0.0, 0.0, 0x1.5be01acb0d016p-262, 0.0,
     0x1.fe375e080490bp-714, 0.0, 0.0, 0x1.41efcdd7631d9p-425, 0.0,
     0x1.1f1f3d4c5962ep-319, 0x1.2c47779c4e88fp-982, 0x1.588c10209abe9p-971,
     0x1.98bd6ed2b6113p-756, 0.0, 0.0, 0x1.3da5a8c46ed6fp-791, 0x1.bdbc5d3d7b273p-941,
     0.0, 0.0, 0x1.77677bd1fe84fp-323, 0.0, 0.0, 0x1.50a240657c4fbp-553, 0.0,
     0x1.d848b83b6a278p-698, 0.0, 0.0, 0.0, 0.0, 0x1.6abd4855f53f8p-841,
     0x1.bd45003ae87c3p-219, 0x1.86eb1d28e694ep-678, 0.0, 0.0, 0.0,
     0x1.d3b06d2d6987ap-51, 0x1.0ae6070fc32c9p-438, 0x1.12c32f942bd43p-978, 0.0,
     0x1.9e788d34808a4p-771, 0.0, 0x1.92d3ab504d47fp-164, 0.0, 0.0, 0.0, 0.0,
     0x1.4081d9d3407a4p-89, 0x1.49ff7400c902ap-944, 0.0, 0.0, 0x1.a7b9871e08b81p-632,
     0.0, 0x1.0b873d42eb308p-213, 0.0, 0.0, 0x1.7cff59f3f70fbp-452,
     0x1.53a7d63d6e2e6p-928, 0x1.7e9e1807d736ep-774, 0.0, 0.0, 0x1.762335e76e077p-284,
     0.0, 0x1.3aa1ac91b7e3ap-804, 0.0, 0.0, 0x1.5ce07a96a1d14p-177, 0.0,
     0x1.1877810d44a93p-10, 0.0, 0x1.4e63cc7358d98p-853, 0.0, 0.0,
     0x1.06ea9c028364ap-491, 0x1.379c9550e4099p-510, 0x1.21e72b9c667adp-208, 0.0,
     0x1.74746bd54ddddp-246, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8e280faf9e2bp-51, 0x1.56586dcd4e6b7p-280, 0x1.678d3316f7cfbp-617, 0.0, 0.0,
     0x1.8e8641c1ae161p-779, 0x1.c4896c79f06cap-207, 0x1.550ea0b08d7aap-321,
     0x1.675f9cbe4bcfp-204, 0.0, 0.0, 0.0, 0x1.a3b532929c264p-15,
     0x1.9b17e2816fe32p-411, 0x1.7f767ac75e64bp-354, 0.0, 0.0, 0x1.1d6cef96e36c8p-97,
     0.0, 0.0, 0x1.1c5a390778093p-261, 0x1.af76619084724p-924, 0.0,
     0x1.5640f94557851p-934, 0x1.4bf39f273ca7p-246, 0.0, 0.0, 0x1.3cd4c4c12aab9p-847,
     0x1.4f58f4ce4d13p-53, 0.0, 0.0, 0x1.7e458d3304205p-607, 0x1.789f92660996bp-876,
     0x1.f32b68de069d4p-148, 0.0, 0x1.32725eadd5cfap-802, 0.0, 0.0, 0.0,
     0x1.42ccc89699d7ap-692, 0.0, 0x1.c09d90f16a906p-512, 0x1.38c0704b9b8f8p-23, 0.0,
     0x1.5bd11708a6dd8p-373, 0x1.026c5235b3d76p-995, 0x1.c29f37e8f5cecp-837,
     0x1.320db2a513a3dp-432, 0.0, 0x1.84dbe29ac0dd7p-837, 0.0, 0x1.a44a080f63cc6p-514,
     0x1.f13b2bf78ff09p-548, 0x1.daab2eb0e7573p-299, 0.0, 0.0, 0.0, 0.0,
     0x1.dd99c1e5212d9p-887, 0x1.1107d2235aeabp-548, 0x1.f982588e18af1p-125, 0.0,
     0x1.d606584b3045bp-860, 0x1.9b002cb1eac2dp-30, 0x1.f4275b45af51cp-535, 0.0, 0.0,
     0x1.9b27d780aadbep-456, 0.0, 0.0, 0.0, 0.0, 0x1.562c688513616p-290, 0.0, 0.0,
     0x1.c432e41e7ef9ep-286, 0.0, 0x1.1c019817a55c3p-71, 0.0, 0x1.470cac971eafbp-475,
     0.0, 0.0, 0x1.9e75cffab89acp-851, 0x1.bb8b34ace5695p-827, 0x1.3847efaf79549p-661,
     0.0, 0.0, 0x1.9415396743f77p-755, 0x1.2abeee72477c1p-844, 0.0,
     0x1.65ae5a38e60d5p-658, 0x1.b0ccc1c4c159bp-815, 0.0, 0.0, 0x1.1c4ca86d61ccp-953,
     0x1.253005ef74d9p-79, 0x1.887ccee969bc8p-1022, 0x1.2eb4b2886a275p-780, 0.0,
     0x1.562499999249bp-230, 0x1.b1c1512981322p-521, 0x1.1fb918bb01e19p-136,
     0x1.7c72f04b6155p-370, 0x1.0c4aa5fa6fbecp-317, 0.0, 0x1.5f587fcbebfb4p-1017,
     0x1.22018b07b7135p-880, 0.0, 0.0, 0.0, 0x1.4fd6ff514d435p-328, 0.0,
     0x1.7a5e8f4819cf1p-431, 0x1.8f9f61ff591ecp-653, 0x1.bba65d246e98p-268, 0.0, 0.0,
     0x1.a27b15035c66dp-267, 0x1.1ea08e44a783bp-215, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97a5d8e50bdfep-11, 0.0, 0.0, 0.0, 0x1.72e3e87b5e0e2p-507, 0.0,
     0x1.7387f2da803aap-422, 0x1.e30c87c3f93f7p-90, 0.0, 0.0, 0x1.771548f39f291p-271,
     0.0, 0.0, 0x1.2314db4283184p-324, 0.0, 0.0, 0.0, 0.0, 0x1.3b104382dddfdp-687,
     0x1.6a6976151fe8ep-932, 0.0, 0.0, 0x1.47fd8ddd79928p-440, 0x1.a53ff9d448bb3p-569,
     0.0, 0.0, 0.0, 0.0, 0x1.00ea93bb37515p-885, 0x1.b02635aa98015p-638, 0.0,
     0x1.383e571de392cp-483, 0.0, 0x1.5bc8de79cbfd2p-172, 0.0, 0.0, 0.0,
     0x1.4c836f4557c4fp-250, 0.0, 0.0, 0.0, 0.0, 0x1.8828cdefabe59p-417, 0.0,
     0x1.0b1b27ab69082p-169, 0x1.4da1f51667511p-924, 0x1.09da424e3917p-18,
     0x1.fa869f5e0becp-90, 0x1.d736efec110bcp-990, 0.0, 0.0, 0x1.952148a045ae4p-89,
     0x1.8c3bdb7089eb4p-968, 0x1.d9d7cd77ab00ep-40, 0.0, 0.0, 0x1.8e2faf657b797p-755,
     0x1.0ba8ce5670c5ap-819, 0.0, 0x1.bfc2d55946d0dp-728, 0x1.74421d9edc5acp-144,
     0x1.541065d6fb9bep-64, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a8a0f4b5364abp-162, 0.0, 0.0,
     0.0, 0x1.72d80576e451cp-662, 0.0, 0.0, 0x1.5c23725f98c8cp-276,
     0x1.0e5059c88d231p-136, 0x1.fa3e290eb1a66p-701, 0x1.de2025c95bc01p-518,
     0x1.21c76e771cbf9p-468, 0.0, 0.0, 0.0, 0x1.a16a7565f9b0ep-704, 0.0,
     0x1.a78cc24f503d8p-769, 0.0, 0x1.f0b5a2603fdd1p-979, 0x1.c533e89f72b19p-76,
     0x1.bb3011284871fp-889, 0.0, 0.0, 0.0, 0x1.d49bb3d9ca4d5p-622, 0.0,
     0x1.1a07a2a850a5bp-623, 0x1.769fe8702e77cp-558, 0x1.4b9c536a66476p-199, 0.0, 0.0,
     0.0, 0x1.258630e0d391bp-1002, 0.0, 0x1.cf70beefff91bp-142, 0.0,
     0x1.6f48cdda91d46p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16107368140f6p-933, 0x1.7cba2f8692041p-259, 0x1.e4127b9263635p-401,
     0x1.07f00b5483d26p-666, 0.0, 0x1.cefb769cbda45p-943, 0x1.0a3f1937873f1p-816,
     0x1.d0d3487e14d19p-377, 0.0, 0.0, 0.0, 0.0, 0x1.c7351592cd8eep-357, 0.0,
     0x1.785e6d542cd3cp-782, 0.0, 0.0, 0x1.3d359b1c0d642p-500, 0x1.3d0bd910a8f15p-605,
     0.0, 0x1.b4c754dcc5d38p-746, 0x1.ceda86d0d2fap-343, 0.0, 0x1.56bb9112cefa7p-35,
     0.0, 0x1.d66e0519f6e7ap-694, 0.0, 0.0, 0x1.15f4ec41c20b1p-607,
     0x1.66b2a09ed9eb1p-838, 0.0, 0.0, 0.0, 0.0, 0x1.12d53fc9f596p-315, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.76f4df6e56012p-531, 0x1.ada6caa401c94p-509, 0x1.16199308bfb9ep-720,
     0x1.ae48b4df43dcfp-929, 0x1.dcf4423dfdc1cp-570, 0x1.283e10bb4d39p-687, 0.0,
     0x1.d92398ccd4d53p-53, 0.0, 0.0, 0.0, 0x1.9a6417d5f0d6ep-83, 0.0, 0.0, 0.0, 0.0,
     0x1.4e23bf667bb13p-516, 0x1.2de140ae9f8c3p-559, 0.0, 0x1.eb908ac197ccbp-56,
     0x1.b8715dc183d85p-612, 0x1.283252dcbca7cp-852, 0.0, 0x1.56741fd1f10cep-427,
     0x1.c9433caf6d6f5p-969, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c478a1c0b46dp-297
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
            tmp1 = Sleef_finz_atand4_u10kvx(tmp0);
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
    printf("Sleef_finz_atand4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atand4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
