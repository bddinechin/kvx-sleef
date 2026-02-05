/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ilogbd4_kvx.c --function Sleef_finz_ilogbd4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 4 --function-input-vector-size 4 --precision int32 \
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


static const ml_int4_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
static const ml_int4_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.074ae6624cc1bp-270, 0.0, 0.0, 0x1.e482c14137e19p-534, 0.0, 0.0, 0.0,
     0x1.4e667f3b956f4p-567, 0x1.599a40cd17c4fp-949, 0x1.11002c11fbaa5p-688,
     0x1.e7645970d8ba6p-782, 0.0, 0.0, 0.0, 0x1.9a6d6904fad59p-963, 0.0, 0.0,
     0x1.0ad6ba14f06b9p-92, 0.0, 0.0, 0x1.bbaa60552805fp-908, 0x1.c744e21f464f3p-940,
     0x1.0956465c93a3fp-426, 0x1.e602b43d11604p-912, 0.0, 0.0, 0x1.07b79596bb6cdp-12,
     0.0, 0x1.e2896e31c862bp-100, 0x1.9057e36ac1069p-986, 0.0, 0x1.9e56b0104d54p-775,
     0x1.52e3aaedc99f1p-72, 0x1.f79cff8612014p-853, 0.0, 0.0, 0x1.37c253c4c324bp-852,
     0x1.6a35d3f412d73p-886, 0.0, 0.0, 0.0, 0.0, 0x1.40e32c1ac2d85p-224, 0.0,
     0x1.16d481786e4b9p-295, 0.0, 0.0, 0x1.cbb274336beep-756, 0x1.c9f148111530cp-684,
     0x1.608cab6c84dd9p-1010, 0.0, 0.0, 0.0, 0x1.1a5565e28fcfep-122,
     0x1.9f203544bb7e1p-402, 0x1.102d177d4e1d4p-49, 0.0, 0x1.1e8455f311de2p-49, 0.0,
     0.0, 0.0, 0.0, 0x1.e8ea971d41be1p-990, 0.0, 0.0, 0x1.b23d8f7dc7ed3p-667,
     0x1.238cdd5a183b4p-624, 0.0, 0x1.7531910886ce9p-787, 0x1.02d03ea6d0eb2p-690, 0.0,
     0x1.14c8ad761fc86p-693, 0.0, 0.0, 0.0, 0x1.17ee03a31850ep-676,
     0x1.f111139f366d7p-698, 0.0, 0.0, 0.0, 0.0, 0x1.243a9505323d4p-48,
     0x1.d6a00391f7271p-1001, 0.0, 0.0, 0x1.3ae2a33ebcaep-716, 0x1.badf2db83dad6p-365,
     0x1.d13819003a1d9p-482, 0.0, 0x1.12914cc3d9313p-578, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ccb845cce2fb7p-292, 0x1.007bdfaddf77ap-373, 0x1.54c03a95dbd2dp-462,
     0x1.da710ac92b30fp-708, 0x1.29d03bd2ae60ep-102, 0.0, 0.0, 0.0, 0.0,
     0x1.343f73cb3b548p-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5233a9c523a91p-157, 0x1.daa7eda0f4af6p-508, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c582ba618a996p-662, 0.0, 0.0, 0x1.689b29c1308e2p-653, 0.0,
     0x1.38a1b4894efap-149, 0x1.7f9724074d4d6p-672, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1d1ce4b3b1f0ep-237, 0.0, 0.0, 0x1.9b442231b4d9p-794, 0x1.86b9f7fbcfaeep-360,
     0x1.7655ceb559557p-147, 0.0, 0x1.96154a8791f64p-636, 0x1.2055e9a2881cep-848,
     0x1.a14cee5b829b4p-967, 0x1.cc6e69cf0783ep-955, 0x1.d7832d051a4e8p-704,
     0x1.3bb7b29655629p-31, 0.0, 0x1.c2763a5d03b53p-990, 0.0, 0x1.c7aefc9662b9fp-138,
     0x1.1de2fe4b54a9bp-83, 0x1.8075daa449df9p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2656c8edd3e7cp-784, 0.0, 0x1.0fc9cd05ec95cp-301, 0.0, 0.0, 0.0,
     0x1.875a37326e256p-16, 0x1.bdf606d73c541p-733, 0x1.9af2d20c534b1p-508, 0.0, 0.0,
     0x1.9bca19640a23fp-848, 0.0, 0x1.b456913607c1cp-780, 0.0, 0x1.bc2e70ffd8135p-550,
     0.0, 0.0, 0x1.9efdd91e876f9p-162, 0.0, 0x1.8c2eca817976p-928, 0.0,
     0x1.0df2c635a2211p-978, 0.0, 0x1.da5ddd6273438p-853, 0x1.17961bc5c3aeep-68, 0.0,
     0x1.94506d7e06f67p-703, 0x1.49888b40b4243p-386, 0.0, 0.0, 0.0, 0.0,
     0x1.be87f7b9707d4p-310, 0.0, 0x1.2b4bb6c6a468ap-121, 0x1.62ccdaef0ba96p-493,
     0x1.8ae87ee8498cp-477, 0x1.e8f15c90deeacp-556, 0x1.d9ff44d06b5ffp-417, 0.0, 0.0,
     0x1.d4f4b92f23db6p-845, 0x1.192026680479cp-620, 0.0, 0.0, 0x1.db7b99ad1d05cp-647,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89af45b290059p-231, 0.0, 0.0, 0.0,
     0x1.9c2a0782cb14ap-49, 0x1.718a5a00ce4adp-83, 0.0, 0.0, 0.0, 0.0,
     0x1.32febc5d05874p-71, 0x1.eb7ae73898d45p-589, 0x1.14bfe1065fc8bp-768,
     0x1.5da636c5eb767p-772, 0.0, 0x1.d905da3ae24f3p-979, 0.0, 0x1.bbc5842dab768p-490,
     0x1.68c16e3b8c872p-932, 0x1.d8359278f16cdp-910, 0.0, 0x1.f4f4dbd3d281dp-218,
     0x1.779e0aa4ce06fp-161, 0x1.50f24043a0dc3p-497, 0.0, 0.0, 0.0,
     0x1.316619613aa6bp-475, 0x1.7794d9f599195p-959, 0x1.9cda144495762p-79,
     0x1.12b38c44edf6bp-770, 0.0, 0x1.004de8fd376c2p-755, 0x1.0fa5a1d50c9dbp-806, 0.0,
     0.0, 0x1.1c416bf6af3fcp-463, 0.0, 0.0, 0.0, 0x1.5ceb7172b8445p-801,
     0x1.2d4fdaaae22c2p-590, 0.0, 0.0, 0.0, 0x1.1c0cb568b610cp-84, 0.0,
     0x1.4bee5d998483ep-58, 0x1.8ed77ff4e0395p-219, 0.0, 0.0, 0.0, 0.0,
     0x1.24f9f77a24e42p-990, 0.0, 0x1.c3a3a005f89e6p-586, 0x1.06d57db5876c9p-294, 0.0,
     0x1.acf3c954fb126p-565, 0.0, 0x1.938d77825fbe3p-242, 0x1.77bc4a318b365p-698, 0.0,
     0.0, 0.0, 0.0, 0x1.2a3347faf34ecp-72, 0x1.348d8af636b3dp-932,
     0x1.7cb2e09081a58p-390, 0x1.1c5a5a523b434p-838, 0x1.bb86615c377e3p-882,
     0x1.a85967481b156p-162, 0.0, 0.0, 0.0, 0.0, 0x1.5c1e2287fc48dp-820,
     0x1.23603db72b18cp-500, 0.0, 0.0, 0.0, 0x1.9860d9970b62fp-755, 0.0, 0.0, 0.0,
     0x1.64e86a817463dp-187, 0x1.cffec88d86556p-816, 0x1.b87060c8f29f1p-890,
     0x1.5388697034d3cp-381, 0.0, 0.0, 0.0, 0.0, 0x1.f36667119acfdp-354,
     0x1.0a0dc25829126p-840, 0.0, 0.0, 0.0, 0.0, 0x1.9baee43a0076bp-100,
     0x1.86f1790b4a86ep-852, 0x1.97a0ced24aceep-5, 0x1.c8cefda287dep-462,
     0x1.639362fc67632p-337, 0.0, 0.0, 0.0, 0.0, 0x1.30ae4dd894a52p-285, 0.0, 0.0,
     0x1.1b3f39431abfcp-276, 0x1.90b33a3de3248p-24, 0.0, 0x1.ccb6b412896a8p-402, 0.0,
     0.0, 0x1.7e42d513f0618p-70, 0.0, 0.0, 0x1.2102ff97612cap-764, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e6651b1756ba2p-214, 0.0, 0x1.f756c3f267207p-325, 0x1.cf5f46138300fp-647,
     0.0, 0x1.5c5e07098a56bp-495, 0.0, 0x1.3890e91ad61eep-476, 0x1.508619df92a6bp-398,
     0.0, 0x1.d85a309c8c10fp-538, 0x1.b3ee3b38ad134p-564, 0x1.59a109a7b60b7p-695, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.16b91c70dd7fep-453, 0x1.a14f1058015afp-146, 0.0,
     0x1.9e2e3f233ae3ep-831, 0x1.40623d986aea5p-531, 0x1.9244cc4122064p-786,
     0x1.4317036c8b42bp-147, 0x1.d5e6d2a98c067p-177, 0.0, 0.0, 0.0,
     0x1.a6411d30f4e43p-36, 0.0, 0.0, 0.0, 0.0, 0x1.f55fc35d5c211p-667, 0.0, 0.0,
     0x1.269ac6c6b86e6p-207, 0.0, 0x1.c46ca671fac18p-169, 0x1.f01fe72ce35afp-441, 0.0,
     0x1.23e594171a7cep-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b4f84c86ae49p-889, 0.0, 0x1.e43673fad148ep-1012, 0.0, 0.0, 0.0,
     0x1.10edf46901bacp-430, 0x1.ecb6c5fb445afp-29, 0.0, 0.0, 0.0,
     0x1.84414f65ceddfp-208, 0.0, 0.0, 0.0, 0x1.32005eb57cd99p-729, 0.0, 0.0, 0.0,
     0x1.d8fcbfd62e38ep-21, 0.0, 0.0, 0x1.9a6c2c054eb2ep-693, 0.0,
     0x1.a58dc980ccce1p-958, 0x1.00fb36e7a251fp-181, 0.0, 0.0, 0.0, 0.0,
     0x1.789841f76b375p-441, 0x1.9b300b9759fap-759, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6fb4f924df7bp-552, 0.0, 0.0, 0.0, 0.0, 0x1.d51ce7833ca61p-1000, 0.0,
     0x1.321a9802beb84p-624, 0.0, 0.0, 0x1.23711f486fe2ep-517, 0.0,
     0x1.b45a50ed9ededp-298, 0x1.7a3e6628d9223p-291, 0.0, 0.0, 0.0,
     0x1.ed9aadd23e6bp-738, 0x1.d1030b258bf7p-304, 0x1.39c02368e185ap-747,
     0x1.328987dac17bfp-143, 0.0, 0x1.ca09b63f74c57p-498, 0.0, 0.0,
     0x1.fc652f0dfc5c3p-104, 0.0, 0x1.27467fdb6967ep-926, 0x1.9305d0161f85cp-505, 0.0,
     0.0, 0.0, 0.0, 0x1.278d8c560840fp-419, 0x1.d5123ca7b9e21p-535,
     0x1.a56c42e470c44p-986, 0.0, 0.0, 0.0, 0x1.fccb3af4621e3p-64, 0.0, 0.0,
     0x1.aac359218f37fp-674, 0x1.fc3a8f071fab4p-950, 0.0, 0x1.00904119cd198p-515, 0.0,
     0x1.0756405045a86p-894, 0x1.7710ac3f4a083p-31, 0.0, 0.0, 0x1.c2f6a0163440bp-554,
     0x1.a03e5d56eca6bp-84, 0x1.c39873dd66d2p-987, 0x1.a9cdd54d5f197p-268, 0.0, 0.0,
     0.0, 0x1.35cbe3fcb32d3p-999, 0x1.75bea3bccd895p-482, 0.0, 0.0,
     0x1.c5790fe38ffe3p-414, 0x1.564d0ae306073p-128, 0.0, 0x1.a9463753067f1p-754, 0.0,
     0x1.8e1fdd11db35fp-275, 0.0, 0.0, 0.0, 0.0, 0x1.e5c8d5c8e7288p-848, 0.0,
     0x1.c44c662cc883fp-735, 0.0, 0x1.06515500572f6p-773, 0x1.cf6683b6bf68ep-344,
     0x1.80273575f5483p-799, 0x1.7f6cbe05e6251p-514, 0x1.e9e090b2097p-902,
     0x1.fc236b6da760cp-101, 0x1.947bb103883d7p-1011, 0x1.9ac556539e8f4p-198,
     0x1.d48983b047488p-34, 0.0, 0.0, 0.0, 0.0, 0x1.5fda2a860758fp-836, 0.0, 0.0,
     0x1.6ffbe39614ac6p-252, 0.0, 0x1.bddbe44652361p-305, 0x1.bb0354f9cb63bp-892, 0.0,
     0x1.cfb1d0efce62bp-998, 0x1.ff8c3c401677fp-902, 0x1.7a7f848941a79p-815,
     0x1.04b86d472036p-465, 0x1.a8026af7b9dd8p-148, 0.0, 0x1.d906a94e3cf34p-1006, 0.0,
     0.0, 0x1.9f8bf8f63dbeap-907, 0x1.10fbf986ba85p-307, 0.0, 0x1.09df5d2bb95a4p-887,
     0x1.24ff8268f5f7fp-780, 0x1.a06a7c40ac9b9p-787, 0.0, 0x1.9f84fb92cc494p-596,
     0x1.665e35d9debb9p-759, 0x1.20973b6946f1ap-171, 0x1.11eae8cfb4b96p-582,
     0x1.1d5e634cdadb1p-548, 0.0, 0.0, 0x1.61a226beea7f3p-904, 0x1.c343fb01dfd86p-79,
     0.0, 0x1.017fcef064eb8p-778, 0x1.3787337ae77b2p-600, 0x1.4799461734d14p-619, 0.0,
     0.0, 0x1.08747d2716a6ep-599, 0x1.449e590533e38p-970, 0x1.d5cb2000679d3p-163, 0.0,
     0x1.7704da3862bc5p-653, 0x1.4efcc4ec6539ap-75, 0.0, 0x1.400f3c2a9c31ap-595,
     0x1.59b619dbb3969p-700, 0x1.32aa9644bef5fp-136, 0x1.7a61980a18b19p-554, 0.0, 0.0,
     0.0, 0x1.ae82b4acf794bp-688, 0x1.6bf89377764a8p-918, 0.0, 0x1.50b83c6b69567p-166,
     0x1.5f2b4b7142e69p-159, 0.0, 0x1.dab3b34e98404p-104, 0x1.da22f93b06d02p-96, 0.0,
     0x1.3e5ca2c60c017p-269, 0x1.bdb38df7d23bfp-135, 0x1.e5d26785b1acep-182,
     0x1.c5b3ff7dd1be6p-6, 0.0, 0x1.3978b6f49371dp-607, 0x1.820de07eec1eap-406,
     0x1.7420c0738ff86p-397, 0x1.deaed585d04a7p-325, 0x1.37e6069061401p-995,
     0x1.c49842ab9e41bp-875, 0x1.4038c8f3b5da2p-61, 0.0, 0x1.f2e6ccbcede32p-267,
     0x1.08d1e1959c27ap-503, 0.0, 0.0, 0.0, 0x1.5b96a74dc7c9fp-872, 0.0,
     0x1.a625b56771f25p-166, 0.0, 0.0, 0x1.f452c70ce5c29p-357, 0.0, 0.0, 0.0, 0.0,
     0x1.ec04804e31b8cp-963, 0x1.1f560940381d1p-27, 0.0, 0.0, 0x1.167751d10f3eep-924,
     0x1.1ed451e4375d4p-161, 0x1.814876452a65fp-564, 0x1.ae90767ad7a85p-10, 0.0,
     0x1.ab6c6caf6110ep-195, 0.0, 0.0, 0x1.a915af9c9ed89p-559, 0x1.2bf8391f31544p-721,
     0.0, 0x1.d05b500be07e5p-531, 0x1.262c1e59e786ap-596, 0.0, 0x1.9b3082970d5bfp-511,
     0x1.960b08667323cp-872, 0.0, 0.0, 0.0, 0.0, 0x1.1de1a9ffaaf15p-265,
     0x1.f879d939ce6f5p-459, 0.0, 0.0, 0x1.bc8020033b677p-28, 0.0,
     0x1.561c954ffe477p-452, 0x1.98bed22eaabap-985, 0.0, 0x1.0b086f2b1923cp-933,
     0x1.2a060faa48c51p-95, 0x1.a846fcb94aa55p-100, 0.0, 0.0, 0x1.d6f1dbd32e2c5p-494,
     0x1.006ebd6f5fcfep-335, 0x1.a53f8b217eb46p-821, 0x1.40c55cd319c25p-543,
     0x1.f48aa56a82a41p-517, 0.0, 0.0, 0x1.640063ae371fdp-1019, 0.0, 0.0,
     0x1.7affb3f22a251p-745, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cc70bcbed2f9p-943, 0.0,
     0.0, 0.0, 0.0, 0x1.2a4f0bbb6ea0ap-868, 0x1.be23802144c56p-574, 0.0, 0.0, 0.0,
     0.0, 0x1.be8926803c9dcp-340, 0x1.8aa3ffb539586p-549, 0x1.0620e00b378fep-272, 0.0,
     0.0, 0x1.f2f3f3646d872p-272, 0x1.83d45475db442p-640, 0x1.1b092c32463f4p-984,
     0x1.0279c1bf6e762p-668, 0.0, 0x1.27f83c5a2f5e2p-625, 0x1.56c36d3f72df6p-54,
     0x1.22772ec0d96c2p-402, 0x1.4221d86eac0edp-361, 0.0, 0x1.f0d6a325ceafep-53, 0.0,
     0.0, 0x1.d3fcba31c0be2p-270, 0x1.21068a768a7d3p-499, 0.0, 0.0,
     0x1.e8d846780d3fdp-659, 0x1.54fc2d2ad959ep-301, 0.0, 0x1.e1fab2609b47dp-890,
     0x1.6e80a4d88ee84p-699, 0.0, 0x1.1cf5625eedcc8p-868, 0x1.73aedee6e6939p-748,
     0x1.9ad90ca403631p-712, 0x1.5173dcc4e449fp-960, 0x1.2138adc5905eap-274,
     0x1.e17e7d49bef8bp-295, 0.0, 0x1.2cd13c6243dd5p-825, 0x1.27e07a4e31435p-493,
     0x1.90ca5205d78ep-568, 0x1.d24d5fbdf25d1p-830, 0x1.7a513fc6a0a79p-744, 0.0, 0.0,
     0x1.32512ec12e241p-949, 0x1.0469a7af14006p-885, 0x1.f56669371a406p-360, 0.0,
     0x1.fa8e40f9fd245p-796, 0.0, 0.0, 0.0, 0.0, 0x1.b3534f7380a4ep-221, 0.0, 0.0,
     0x1.183a35e8923c5p-196, 0x1.2cc2cf2614ec8p-627, 0x1.9a3e917a135e4p-372,
     0x1.9ca29ed6bb126p-610, 0.0, 0x1.91996eacc2a77p-122, 0.0, 0.0,
     0x1.f47e7bc46d8c6p-657, 0x1.2ee78eafa6e09p-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2b5e47335e9bp-808, 0.0, 0x1.a6fcbb5f13eabp-157, 0.0, 0x1.58b337ef68fd4p-217,
     0x1.c66a0a34acdc6p-992, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12723f9a48e49p-45,
     0x1.91a885b9e4c03p-974, 0x1.3d81e54e8aeb4p-1022, 0.0, 0x1.1ec2a96c2fefp-918, 0.0,
     0.0, 0.0, 0.0, 0x1.0a2cb7d862f2bp-275, 0.0, 0x1.a650cf69c8aabp-380, 0.0, 0.0,
     0.0, 0.0, 0x1.9e3277825a4cep-819, 0.0, 0x1.875e1d164f3fap-104,
     0x1.5c99b32c5c664p-228, 0.0, 0.0, 0.0, 0x1.89e4638b79cd2p-151, 0.0,
     0x1.d8d85489e137fp-774, 0x1.3936e65e95633p-838, 0x1.65bad7abb359fp-754, 0.0,
     0x1.31883395cab8bp-1022, 0.0, 0.0, 0.0, 0x1.b404a6a3f5187p-391, 0.0, 0.0,
     0x1.bcade31479691p-344, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e953adbfaa05p-172,
     0x1.237088aadeap-736, 0.0, 0.0, 0x1.967adc78b0463p-728, 0.0, 0.0, 0.0,
     0x1.f4127ae7dac81p-769, 0x1.b2db8f2b19eeep-472, 0.0, 0.0, 0x1.200d337116893p-571,
     0x1.3786ce098cb9dp-530, 0.0, 0.0, 0x1.0ba6be71883c2p-683, 0.0,
     0x1.74530f918341bp-746, 0x1.d6a34e102837fp-856, 0x1.83f43ca3de481p-792,
     0x1.422c38cf53761p-345, 0x1.428d78d9e0e1ep-58, 0x1.6538bbed8d712p-593,
     0x1.a306772e9308fp-72, 0.0, 0.0, 0.0, 0x1.967455f46726ep-386, 0.0, 0.0, 0.0,
     0x1.f5fd268f6863dp-699, 0.0, 0x1.d7d0c5d7f2fbfp-544, 0.0, 0.0,
     0x1.382516f24acbdp-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb84dbbf10e42p-18,
     0x1.c4775424a96b2p-829, 0x1.e771c85cc3ebap-698, 0x1.8447a8f464bcp-707, 0.0, 0.0,
     0x1.1f599c04ef0f8p-121, 0.0, 0.0, 0x1.96455f668403ap-279, 0x1.9935e5a44c9f7p-38,
     0.0, 0.0, 0x1.f9783e1a65e4ep-528, 0x1.4ddbe99736e6bp-441, 0.0, 0.0, 0.0, 0.0,
     0x1.56f7b93fc791ep-775, 0x1.d96a1a5266227p-1004, 0x1.cc91cd5c89decp-466,
     0x1.46262464df24dp-171, 0x1.80f39b317826ep-892, 0x1.942132f7cf2bbp-13,
     0x1.74122fc26f70fp-442, 0.0, 0.0, 0x1.962d903feea14p-625, 0.0,
     0x1.725a94b31c7bp-409, 0x1.8179fad4528aep-903, 0x1.f0a32565ea0fap-686,
     0x1.b083cc8552bdfp-986, 0x1.125fd8ca6e153p-592, 0x1.2764aa093a30ap-928, 0.0, 0.0,
     0x1.536aa5f465597p-999, 0x1.95b8a66f15b04p-648, 0x1.c763a534eade8p-521,
     0x1.1b4a6bd75b04fp-983, 0x1.9cd207307d49p-287, 0.0, 0.0, 0.0,
     0x1.271a80673c276p-53, 0x1.d8054762a3b6dp-368, 0x1.6aca7fe8890b2p-424, 0.0, 0.0,
     0x1.4d0762161bf97p-498, 0x1.bbcb86b5e6002p-403, 0x1.5a7a5346e934bp-736,
     0x1.ef0309d326b3cp-238, 0x1.dc097f372d09ep-350, 0x1.42c793cbd09eep-257,
     0x1.1931b8ff201b5p-587, 0.0, 0x1.c165ea165d60ep-440, 0.0, 0x1.85d9f27ae3824p-379,
     0x1.c76ba13fa1eap-708, 0x1.2e987718679ffp-657, 0x1.b687e26d7092p-180, 0.0, 0.0,
     0.0, 0x1.4b2e44f6df68p-197, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bae0fabdc99a4p-287,
     0x1.b544c57a1ef51p-886, 0.0, 0x1.d93fb94268629p-681, 0.0, 0.0, 0.0,
     0x1.4a73093c8c2b4p-1019, 0x1.999c745342a2p-498, 0.0, 0x1.1d8d76f59c97fp-885,
     0x1.ee0ee8a9c83efp-782, 0x1.2a7e477ebe968p-16, 0x1.b102a73573cadp-265, 0.0,
     0x1.0027c585b88c4p-783, 0x1.416ffb8c98bf9p-357, 0x1.834c45faea994p-894,
     0x1.d2fb9f950b24ep-116, 0x1.d2c9124e27e5p-329, 0.0, 0.0, 0.0,
     0x1.abd35f68fae1cp-197, 0.0, 0x1.b9753b67dec3dp-1012, 0x1.808cb438ed3b6p-883,
     0x1.4878d7542617p-925, 0x1.09e9e5b9c5394p-900, 0.0, 0.0, 0x1.6a90ecffe43b4p-678,
     0x1.c5190dd9c7f9p-342, 0.0, 0x1.c085d6e25112bp-142, 0.0, 0x1.9fd3e1bd19c3cp-13,
     0x1.10a1e6a3b8964p-858, 0.0, 0x1.b0fe85f94ae0dp-435, 0.0, 0.0,
     0x1.f4c3314fdfe9p-580, 0x1.6d5f1bfbbf6e6p-680, 0x1.385d2313f272ap-424,
     0x1.04ef19b133b07p-756, 0x1.5aed8a5411e52p-509, 0x1.7971f3de31665p-755, 0.0,
     0x1.974a59be78cdp-472, 0.0, 0x1.dece8d26d0e06p-733, 0.0, 0.0, 0.0, 0.0,
     0x1.3d9cb166e578cp-105, 0.0, 0x1.d8a075a95c5dfp-393, 0x1.58b8312791076p-162, 0.0,
     0.0, 0.0, 0x1.4661334987b2fp-667, 0.0, 0.0, 0x1.db55e53853119p-631,
     0x1.ce3ecdea96aeep-285, 0x1.0adc131b096e6p-470, 0x1.dc7c67ea790c2p-174,
     0x1.a7c304931b40fp-90, 0.0, 0x1.27258ab5d6257p-47, 0.0, 0x1.72f92f9cbe778p-742,
     0.0, 0x1.8e3769fa20233p-513, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.585ab65662de4p-882,
     0.0, 0x1.f8bc512a41243p-611, 0.0, 0.0, 0.0, 0x1.900c7ff752706p-693,
     0x1.49e99d737d82ep-507, 0x1.aa6ecb62dae16p-996, 0x1.7e11ea0cdcdefp-967, 0.0, 0.0,
     0x1.4b154e95f7e96p-688, 0x1.e378bd182b4e2p-130, 0x1.aca29258702d7p-444
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int4_t global_bench_acc;
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
        ml_int4_t local_acc;
        int32_t i;
        ml_int4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_int4_t tmp1;
            ml_int4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_ilogbd4_kvx(tmp0);
            memcpy(((ml_int4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
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
    printf("Sleef_finz_ilogbd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_ilogbd4_kvx bench acc [%d, %d, %d, %d]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
