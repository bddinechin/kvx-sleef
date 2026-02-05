/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundd4_kvx.c --function Sleef_finz_roundd4_kvx \
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
     0x1.2b2d9e9b7b9b1p-87, 0x1.b8e3151594e16p-102, 0.0, 0.0, 0.0,
     0x1.b116627fa286ep-163, 0x1.16007df547f41p-571, 0.0, 0.0, 0x1.f333f961b6cfep-29,
     0x1.7ba02bfe8a29fp-781, 0.0, 0x1.039622da41587p-841, 0.0, 0.0, 0.0,
     0x1.be10efb9ae251p-1001, 0x1.d788d44af2052p-955, 0.0, 0.0, 0.0,
     0x1.82cc7d24bc0a7p-762, 0.0, 0.0, 0x1.67969e95722a2p-1003,
     0x1.0f396f35900b5p-740, 0x1.02faac5b5955fp-331, 0.0, 0.0, 0x1.cf568e966e26ep-961,
     0x1.cbf2a3c38b10ap-780, 0x1.b2567cc488068p-625, 0x1.106424a0408d6p-356,
     0x1.1d738a67fc3fep-109, 0.0, 0.0, 0.0, 0x1.af7d8c0b569d3p-871, 0.0, 0.0,
     0x1.57543bb2e079dp-712, 0.0, 0.0, 0x1.135016f0a6b02p-945, 0.0,
     0x1.f820e26753253p-364, 0x1.f5a40ef4bd9cep-21, 0.0, 0x1.a881f56a46e69p-414, 0.0,
     0x1.33e6d677e4a94p-352, 0.0, 0.0, 0x1.8cc6aad19e048p-227, 0x1.302803bf4737p-159,
     0.0, 0.0, 0x1.b7a74d4014d2fp-64, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0,
     0x1.b85ebbc51ccp-448, 0x1.3a53bba66230fp-908, 0.0, 0x1.c70264a2b381bp-304,
     0x1.d9541e2429dfep-163, 0.0, 0x1.6d00528cbb7cp-766, 0.0, 0.0,
     0x1.f20ec3767c7d8p-370, 0x1.192eadef61b8fp-353, 0.0, 0.0, 0.0, 0.0,
     0x1.05b0999ecf9ep-835, 0.0, 0x1.e8265aa27e95p-176, 0.0, 0x1.e20e7c27a4485p-88,
     0x1.b6552a7ca1ddep-411, 0x1.9c2e9b281a532p-644, 0.0, 0x1.e59e2e2f65d76p-458,
     0x1.4ee15acd2a8a3p-627, 0x1.da276c1ebf422p-598, 0.0, 0.0, 0.0,
     0x1.1ab437421680bp-423, 0.0, 0x1.9976e3ca12647p-74, 0.0, 0x1.a66983343729ep-445,
     0.0, 0x1.3184059e9558cp-943, 0x1.4a9f4ad381dcdp-68, 0x1.b1be9bb44f8a2p-182, 0.0,
     0x1.79d8575961e5p-470, 0x1.19045837328e8p-104, 0.0, 0x1.c354a8dec3906p-641, 0.0,
     0.0, 0.0, 0x1.7e32005de239p-194, 0.0, 0.0, 0.0, 0.0, 0x1.1d6acc747a39ep-428, 0.0,
     0x1.eb62cfde85f93p-196, 0x1.898a91d50122fp-328, 0x1.d26542a28b069p-252, 0.0,
     0x1.86f143c27ccc3p-356, 0x1.f878f3ff70112p-128, 0x1.d5e316594d0e3p-254,
     0x1.83505dbc10966p-151, 0x1.fa82a0582927fp-657, 0x1.0cafad04ea5bdp-365,
     0x1.74ef670a1f8dap-138, 0.0, 0.0, 0x1.90866198d49a1p-572, 0x1.478cffdcdaad3p-576,
     0.0, 0.0, 0.0, 0x1.cf8ddfb591f5bp-451, 0.0, 0.0, 0.0, 0x1.e9d9c78be097p-602,
     0x1.b74583a8a2e99p-945, 0x1.0b303720e81ap-181, 0x1.316ea51daf0a2p-989, 0.0,
     0x1.34d3b6f8483e2p-965, 0x1.2b806587288dfp-590, 0.0, 0x1.e5162d4196dd1p-898, 0.0,
     0x1.de55e5b2ad9bbp-946, 0x1.f475bb1a9cd1ep-824, 0x1.c45c8a64f7972p-921,
     0x1.c9deed417f38ep-714, 0x1.a26bd124873f1p-126, 0x1.16d8b02ffd749p-869,
     0x1.90e78765af67bp-434, 0x1.08736254da3d9p-540, 0x1.79518a1117b93p-871,
     0x1.10488d3354415p-265, 0x1.32d11e2470511p-699, 0.0, 0x1.62c5fd68d01a6p-161, 0.0,
     0x1.84292535c7f24p-415, 0x1.87277f64f82b4p-385, 0.0, 0.0, 0x1.6f4b1004d2f2p-235,
     0.0, 0.0, 0.0, 0.0, 0x1.950562fa39c3dp-722, 0x1.284251aed45edp-68, 0.0,
     0x1.62d9d7718493ep-489, 0x1.87c72f5808ae6p-825, 0x1.f660cff9f5b02p-1016, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e937a7d312f48p-674, 0.0, 0.0,
     0x1.16fe9a7d0ebc8p-593, 0x1.fbb3eec12019bp-828, 0.0, 0x1.2cab817083c4bp-1007,
     0x1.396a5f1d626ccp-387, 0.0, 0x1.550a7f1292246p-513, 0x1.6dc3bf2241ba7p-691, 0.0,
     0x1.cfccffbcf385fp-733, 0x1.066a1da607d55p-519, 0x1.dedf190a7639bp-812, 0.0,
     0x1.e2fff3ac8b935p-450, 0x1.b7802d6a5c556p-61, 0x1.b9ee2bb28786bp-314, 0.0,
     0x1.b44b446ad8168p-907, 0.0, 0x1.bb949d959b8b1p-258, 0x1.148d85f058a1dp-283,
     0x1.2e27e7ae2346fp-361, 0x1.5ff724365d77fp-400, 0x1.ccc2ebaee817fp-991, 0.0,
     0x1.d538b828e255bp-307, 0x1.9961e844453a3p-36, 0.0, 0.0, 0x1.205683dd95ee8p-275,
     0.0, 0.0, 0.0, 0x1.e7def20d53256p-595, 0x1.e530c74492573p-423, 0.0, 0.0,
     0x1.b21761a23d821p-575, 0x1.6b43490099248p-589, 0x1.32bed31cedcp-15, 0.0,
     0x1.591d1704c0ee1p-703, 0.0, 0.0, 0.0, 0x1.f1eaa3a7896efp-754,
     0x1.f113e1cd1814ep-11, 0x1.138e6b6e3c99p-481, 0.0, 0x1.4e4c99b699a3fp-324,
     0x1.aa9aab9b30bp-33, 0x1.e67fd73c8cfaap-905, 0x1.4f727804f862fp-584, 0.0,
     0x1.db7d864c58597p-912, 0x1.cbaa0cbc52fcep-105, 0x1.94455c17e5fd7p-421,
     0x1.775796acb8cbep-15, 0x1.2240f6da257ddp-300, 0.0, 0.0, 0x1.32d0f5e3aea7ep-737,
     0x1.4640ab5d3617p-726, 0.0, 0x1.c02cc5fa660ep-548, 0.0, 0x1.d6f185bf31832p-587,
     0x1.5a9661fd5faddp-590, 0.0, 0x1.adfd35b1b6da7p-985, 0x1.6b6314ac13164p-146, 0.0,
     0x1.4d227aaaab446p-402, 0.0, 0.0, 0.0, 0x1.199e70394e585p-353,
     0x1.93d5116358a2ep-578, 0x1.73a8e349b7824p-86, 0x1.c3b44a95a0b73p-73, 0.0, 0.0,
     0x1.d752639243837p-161, 0.0, 0.0, 0.0, 0x1.6003b099fd0e5p-959,
     0x1.2cf71daf6edb5p-427, 0x1.f599d4e5ba47ep-423, 0.0, 0x1.6d7ca4d89bc03p-562, 0.0,
     0.0, 0.0, 0x1.270e62f4be779p-179, 0x1.9a87f5a664b18p-685, 0.0,
     0x1.a69a1060b4e5ap-979, 0x1.65ab2b5b0dc82p-734, 0.0, 0.0, 0.0,
     0x1.520837da581d2p-614, 0x1.caf7fc9ccd3f8p-870, 0.0, 0x1.6119eb758c582p-219, 0.0,
     0.0, 0.0, 0x1.109d514e0c17p-599, 0x1.ebe06846da523p-600, 0.0,
     0x1.2b9d6862f98afp-820, 0.0, 0.0, 0x1.53517a562df05p-491, 0x1.4e97068740f61p-586,
     0.0, 0x1.ef5746fe842e2p-834, 0.0, 0.0, 0.0, 0.0, 0x1.d30c827e92d1cp-409,
     0x1.1ce19cf076cb8p-622, 0x1.def7d4e8ba1d2p-138, 0.0, 0x1.d48be2db874a4p-295, 0.0,
     0x1.69ec1c79fb7ccp-953, 0x1.5eff2da48e1eep-132, 0.0, 0x1.d88ac15ee99b9p-546, 0.0,
     0x1.97612bd638df3p-851, 0x1.149442be27378p-171, 0.0, 0.0, 0.0, 0.0,
     0x1.9485a8927ddf2p-816, 0.0, 0.0, 0.0, 0x1.a19eb702dc5dap-482, 0.0,
     0x1.6fe6f52880971p-835, 0x1.44f42079a3f3dp-585, 0x1.07a7080490c43p-414, 0.0, 0.0,
     0x1.5ca485f8c22afp-184, 0.0, 0x1.d3ef4f6b4f852p-937, 0x1.e629fdcc67986p-686, 0.0,
     0x1.e5f02880ba991p-13, 0x1.1e0da52d4e39cp-728, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.62b318bd4bb14p-565, 0x1.39f02ec36812cp-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7398577a093cep-667, 0.0, 0x1.0dc89941be475p-756, 0x1.c68e4bff0ba08p-878, 0.0,
     0.0, 0.0, 0x1.0fc4f1c947cdbp-30, 0.0, 0.0, 0.0, 0x1.2d0c539d99dd3p-1019,
     0x1.85a46e3acfed2p-44, 0.0, 0.0, 0x1.b6d3032a645cdp-259, 0x1.516ba0c1fb9dep-228,
     0.0, 0x1.f3ed1aa62890fp-294, 0x1.9be673425942dp-357, 0.0, 0x1.c1360b1f1eaedp-468,
     0x1.3a01a74f6d906p-1004, 0x1.54c45ecb49639p-512, 0x1.7778dde828e59p-48,
     0x1.1e046e7860987p-30, 0x1.d84db568846c8p-58, 0x1.ba72f7649e70ep-790, 0.0,
     0x1.a669bc8746afcp-161, 0x1.e146af274ee6dp-873, 0x1.bfded75d57e31p-233, 0.0,
     0x1.2a5af12e6257p-743, 0.0, 0.0, 0.0, 0.0, 0x1.be48fdf62f6d9p-491, 0.0,
     0x1.d4620810a818p-737, 0.0, 0x1.4da50d96088abp-91, 0.0, 0.0,
     0x1.3bd1728c5c5e6p-596, 0.0, 0.0, 0.0, 0.0, 0x1.5387fd6451311p-550,
     0x1.e8e424ba3602p-338, 0x1.011799bffdf01p-331, 0.0, 0x1.76baa7511915dp-425,
     0x1.900cf3782152bp-717, 0.0, 0.0, 0.0, 0x1.e6771bf0be276p-428,
     0x1.5b52db6cb1afep-433, 0x1.c01eeefcdd8e9p-802, 0.0, 0.0, 0.0,
     0x1.4a6e0c8c18996p-987, 0x1.98df9ae66387dp-464, 0x1.1f081a5329e3ep-347,
     0x1.7090f98f57a49p-312, 0x1.b23584d12e02fp-67, 0.0, 0x1.4a88ec18fbc77p-462,
     0x1.0434f1963124ap-897, 0.0, 0x1.bbc389b9a5cc2p-96, 0x1.baab950dc2e84p-456,
     0x1.2a6d4aeaed913p-464, 0.0, 0.0, 0.0, 0x1.651350eac7675p-495,
     0x1.d0279da688951p-741, 0.0, 0x1.2f4807aaff446p-569, 0.0, 0.0,
     0x1.8db434aa93d4fp-69, 0.0, 0.0, 0.0, 0.0, 0x1.c80d4a87c93ebp-308, 0.0,
     0x1.72134e9770628p-225, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68c84fc43aa4p-820, 0.0,
     0x1.38ee940a9e153p-125, 0x1.c528d0754e048p-6, 0.0, 0.0, 0x1.442053623e904p-71,
     0x1.72066ed86b5e7p-381, 0x1.c2229a5010b1fp-740, 0.0, 0.0, 0x1.a096642c2c57cp-457,
     0x1.3bfb684cff1b1p-699, 0.0, 0.0, 0.0, 0x1.233a416e381c8p-153, 0.0,
     0x1.75bb3d68cff2fp-256, 0.0, 0x1.1c1a28887f509p-422, 0x1.f6b01f88f8fe3p-155,
     0x1.b5396b6c089b1p-848, 0.0, 0.0, 0x1.d36668993529ap-1022,
     0x1.7615ae0c37b9fp-672, 0.0, 0x1.eeddc7a82c4a6p-174, 0.0, 0.0,
     0x1.75d19b435114fp-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a00a83ed9132p-92, 0.0,
     0x1.7a13236de1647p-857, 0x1.ca3ca3588dd06p-741, 0x1.c50279de513bp-784, 0.0,
     0x1.d224639f2ab1fp-771, 0x1.05d72ae3abd13p-478, 0x1.2f230b22b5d29p-63, 0.0,
     0x1.55e4ac6350b2bp-833, 0x1.925321d657445p-1018, 0x1.543946f067b47p-867,
     0x1.fd59d72d5772cp-511, 0.0, 0.0, 0.0, 0.0, 0x1.f0b93b09a2d78p-207, 0.0, 0.0,
     0x1.df3f873ea95f2p-258, 0.0, 0x1.118590afe1943p-117, 0.0, 0.0,
     0x1.c5c1e6a292e31p-393, 0x1.ea99bc95cc5aap-915, 0.0, 0.0, 0x1.48c04bd9d6a2bp-750,
     0x1.2e68a670021eap-131, 0x1.b86b17837f87ep-244, 0.0, 0.0, 0x1.8b1c6893e4aa8p-747,
     0.0, 0x1.763c25eeb716ep-407, 0x1.d62e95e30d7afp-1002, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5fb6edcb81cf2p-218, 0.0, 0x1.87d052291d8bfp-715,
     0x1.f4e1926cbd3a6p-714, 0x1.c8cae396dfcb2p-411, 0.0, 0.0, 0x1.670b1f255da1cp-603,
     0.0, 0.0, 0x1.fb865b149a01fp-832, 0.0, 0x1.6addfb31c1de2p-654, 0.0, 0.0,
     0x1.1a3b7b810325cp-2, 0.0, 0x1.7c6c5165bf5aep-562, 0x1.1f533a3ae3acbp-177,
     0x1.6283512bc9f0dp-705, 0.0, 0.0, 0x1.44500175011ap-345, 0x1.82c5439c1b331p-480,
     0x1.aecafbc7a3f11p-754, 0.0, 0x1.ea7036320a1a2p-657, 0.0, 0.0,
     0x1.54b9ce79d1d7bp-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f20ad571ecap-120, 0.0, 0.0,
     0.0, 0x1.6aa94e01812b7p-894, 0.0, 0.0, 0.0, 0x1.a3aed9e9c54abp-719,
     0x1.aaf626c39acccp-781, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b12c77e0e1b01p-72,
     0.0, 0.0, 0.0, 0.0, 0x1.51562d21d1411p-193, 0.0, 0x1.cad1ff96638d7p-230,
     0x1.4339d8ca8ada4p-504, 0x1.07288dff487bdp-634, 0x1.131d82f60f23ep-809, 0.0, 0.0,
     0x1.f586ac7fd44bbp-956, 0.0, 0x1.2dbd781b93bd7p-238, 0x1.b88785e8445dbp-565, 0.0,
     0x1.b77db127c6585p-608, 0.0, 0.0, 0x1.37099655d7b2cp-246, 0x1.e1b45f479d2f1p-307,
     0x1.f35f9d35660b8p-408, 0.0, 0.0, 0.0, 0.0, 0x1.e0a6a0c24fab2p-833, 0.0,
     0x1.ad435615b2447p-12, 0x1.82a6f13835896p-278, 0x1.b1c027165666fp-609,
     0x1.e50c40c69791dp-365, 0x1.2f6e0452a7154p-634, 0.0, 0x1.ec4fe13b83c95p-657, 0.0,
     0.0, 0.0, 0x1.e78c901136f17p-498, 0.0, 0x1.0bca7bb97d8d8p-774,
     0x1.8b8df751fa3b7p-784, 0.0, 0x1.30c05ef07103bp-2, 0x1.e821585e86324p-309, 0.0,
     0.0, 0x1.b5ffea3006df4p-989, 0.0, 0.0, 0x1.2900d58671402p-62,
     0x1.ca0d089f94158p-614, 0x1.91231dcc31b41p-641, 0x1.a8fc60997c83bp-203,
     0x1.341a6892ffcb6p-888, 0.0, 0.0, 0.0, 0x1.45e63c44fc11bp-449, 0.0, 0.0,
     0x1.431dcd6f6c6ap-18, 0x1.f13973e6da4fap-70, 0.0, 0x1.4038a72c002fap-196, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5b46ee433a58p-52, 0x1.cf7eb95f77f36p-800,
     0x1.5b5d2499efcc9p-68, 0x1.681b5309dc431p-744, 0x1.bfd7c89532528p-749, 0.0,
     0x1.6a4804148dabp-551, 0x1.bb2175fffd93ep-750, 0x1.062e8bd9feb8p-116, 0.0,
     0x1.6283eed21bfcbp-135, 0x1.cc450b2e6aad1p-576, 0x1.826a1220c0936p-607, 0.0,
     0x1.1438651193afdp-222, 0.0, 0.0, 0x1.2686403f4f7bap-993, 0x1.97be3f22f7576p-172,
     0x1.73d2e1a033f2cp-213, 0x1.3fadd05ada684p-98, 0x1.922b7eb8a647cp-720, 0.0, 0.0,
     0x1.c70d4992935b6p-385, 0.0, 0x1.4dfe9698a7039p-550, 0.0, 0.0, 0.0, 0.0,
     0x1.c450ad98fc92cp-934, 0x1.6a5fec81ab137p-22, 0.0, 0.0, 0.0,
     0x1.3ea2bd8cdcaacp-902, 0.0, 0x1.4b5802b162b2ep-977, 0x1.9c8bd768140e2p-624,
     0x1.ae19050051a95p-842, 0.0, 0x1.72f13a4e10c5bp-232, 0x1.9d23fd980c977p-549,
     0x1.a18971f08a0bfp-472, 0.0, 0.0, 0x1.7f032bb052807p-488, 0x1.48a3f9ceea168p-601,
     0.0, 0.0, 0.0, 0x1.1296bed72103ap-4, 0x1.4c283fef3fe89p-741,
     0x1.3ca0fc2510a11p-568, 0x1.e9a35b08ba5b5p-919, 0x1.8fba6a42b129dp-442, 0.0, 0.0,
     0.0, 0x1.2e4400b4ba0b9p-336, 0.0, 0x1.6a840eb8531ccp-641, 0x1.450df402c6aa1p-264,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf1329a29ce34p-686, 0.0, 0.0, 0.0,
     0x1.76cd967e2e075p-967, 0.0, 0x1.535d1f7969545p-1016, 0x1.a6cd6c2483882p-385,
     0.0, 0x1.96dd62094c39fp-848, 0x1.1354784bb2a9fp-763, 0x1.bedde4eba86c1p-851, 0.0,
     0x1.ea26e7804e14ap-953, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b90373000b7ep-333,
     0.0, 0x1.de9466f2080fap-325, 0x1.0aa33eed282d8p-746, 0x1.d5ce208517cb8p-168, 0.0,
     0x1.b083f18445037p-1019, 0x1.58626d689cf12p-148, 0x1.63d1d5d4a6848p-251,
     0x1.cc2c39ee8bb89p-742, 0.0, 0.0, 0x1.f1ef402faf7b2p-292, 0x1.576625b6c90acp-223,
     0x1.7d3c43c57ae8cp-695, 0x1.e74fe7c6711eep-28, 0.0, 0x1.50814dbff6189p-981,
     0x1.1574286105883p-872, 0.0, 0x1.c2165714f287dp-790, 0.0, 0.0, 0.0,
     0x1.afe3194099ed4p-344, 0x1.559b3ee5187a5p-822, 0x1.25d1e1f9a424fp-205, 0.0,
     0x1.7ac8ed00e0827p-33, 0.0, 0x1.56adca4dad6d9p-756, 0.0, 0x1.0ec7cdabf0707p-635,
     0.0, 0x1.71320d02143d3p-823, 0.0, 0x1.7341bce4f8d6ep-187, 0x1.96e7f984e2c57p-726,
     0.0, 0.0, 0x1.d530c584aff4fp-191, 0x1.cb65588d74e77p-425, 0.0, 0.0, 0.0,
     0x1.558f214fd11a7p-115, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7406f6ef308e1p-530, 0.0,
     0.0, 0x1.4ddad58e4ebd9p-682, 0.0, 0x1.62d6d4c27523p-495, 0x1.f6d2f46d7a156p-919,
     0x1.46d05bb538cacp-77, 0.0, 0.0, 0x1.68c65961bbfc3p-521, 0x1.630b0f1072ab7p-248,
     0x1.994fc7838eacp-31, 0.0, 0.0, 0x1.e11609ff4ebfbp-883, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cce52c3351156p-999, 0x1.fff94140532bep-741, 0.0, 0.0,
     0.0, 0x1.f3cfe6bb6b7p-454, 0x1.13ccb37582ef5p-161, 0.0, 0.0,
     0x1.d187d70231e6cp-201, 0.0, 0.0, 0x1.2a2b98d4c68e6p-229, 0.0, 0.0, 0.0,
     0x1.1d80462899bf1p-667, 0x1.25ec91b862b09p-119, 0x1.8692e909b717fp-610,
     0x1.e084820304f9ep-547, 0x1.fb27eada22f0bp-499, 0x1.050ee3291ad8bp-614, 0.0,
     0x1.ad1758f930308p-964, 0x1.0890e839fe3bbp-1020, 0x1.89fb55b8aa36bp-661, 0.0,
     0x1.e5deb8f05872cp-834, 0.0, 0.0, 0.0, 0.0, 0x1.927ff87af8208p-170, 0.0,
     0x1.ac9562294a9cp-357, 0.0, 0.0, 0.0, 0.0, 0x1.dfc8bb6c688e3p-264, 0.0,
     0x1.2a7ae81c5d329p-640, 0x1.b5086219fab72p-746, 0x1.738153a47e8e4p-710, 0.0, 0.0,
     0.0, 0.0, 0x1.395e95a2066cep-593, 0.0, 0.0, 0.0, 0x1.abed1f4013e4cp-316,
     0x1.e98b7ee48a6b5p-174, 0.0, 0.0, 0.0, 0.0, 0x1.158f03ebdeebep-282,
     0x1.10db496e37376p-817, 0.0, 0x1.7c0230bac4519p-594, 0x1.d4a201196f152p-366,
     0x1.01056a9b7c8c8p-438, 0.0, 0.0, 0.0, 0.0, 0x1.ae47c65fbfb4p-487,
     0x1.1bdfbd5c0e165p-501, 0x1.a7829ae9a9308p-207, 0x1.f5df6d0b4960dp-87,
     0x1.67ba0dd68ddefp-470, 0.0, 0x1.3ade876d28e06p-951, 0.0, 0.0,
     0x1.6c182f2799587p-365, 0x1.e7a51e14d95a6p-372, 0x1.6eebb1f5ff0cap-583,
     0x1.c4d191b3c506ap-479, 0x1.c20dcb2e6fb25p-293, 0x1.467761adcae5dp-170, 0.0,
     0x1.3398c20cd8a3ep-835, 0.0, 0x1.54c4b70681948p-219, 0x1.8ac2beac2c18ep-609,
     0x1.477d33365c173p-451, 0.0, 0.0, 0x1.f452b3a473a53p-709, 0.0,
     0x1.cde27f387edd1p-397, 0x1.bd03686410bdap-134, 0.0, 0x1.10ff8fc84a94bp-380, 0.0,
     0x1.ad58265f02947p-423, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.292502bac9fefp-287,
     0.0, 0x1.334f1c696ad99p-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7004b0bb2d3dp-467,
     0.0, 0.0, 0x1.1d23deb26a8a8p-892, 0.0, 0x1.d2575b7cf9eb3p-682, 0.0, 0.0,
     0x1.7c8d6cdd39c7bp-77, 0x1.3bc2c54fea2cfp-607, 0x1.45f16310eece9p-818, 0.0,
     0x1.a7466818e244bp-860, 0.0, 0.0, 0x1.31c29e7a80f63p-953, 0x1.b17c4a1b7c80dp-811,
     0x1.bf6438f46b273p-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbe5273982f95p-547, 0.0,
     0x1.7cbef6d9f28d4p-686, 0.0, 0x1.443bf35ef3955p-128, 0.0, 0.0, 0.0,
     0x1.b2b73e730b59cp-618, 0x1.f2cbd9431c90dp-941, 0.0, 0x1.efa29d965c284p-599, 0.0,
     0x1.fd62cbd52856ap-179, 0x1.012650b1be26fp-362, 0x1.6afd52e1d847ap-740,
     0x1.c80ec6a2f72f4p-757, 0.0, 0x1.f43724648f02ep-696, 0.0, 0.0, 0.0,
     0x1.ff6c42d601d4ap-107, 0x1.4828aa125c632p-172, 0x1.2f45b5118b528p-494, 0.0, 0.0,
     0x1.e45b2302ff04fp-76, 0.0, 0x1.c0c2727fd9e4fp-562, 0x1.6ced9608cbe23p-405, 0.0,
     0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_roundd4_kvx(tmp0);
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
    printf("Sleef_finz_roundd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_roundd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
