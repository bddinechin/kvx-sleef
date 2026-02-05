/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1d2_u10avx2128.c --function Sleef_expm1d2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.3105397a68cc2p-664, 0x1.27edfb231673fp-52, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1d6af3a29ca7ep-344, 0.0, 0.0, 0x1.b060d0fa4ba01p-960, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7a8bbb471273ep-35, 0.0, 0.0, 0.0, 0x1.c47cf0632e7cfp-1000, 0.0,
     0x1.0306b92f7c81dp-463, 0x1.0f928aa70fe69p-625, 0x1.947ccb52f0c99p-356, 0.0,
     0x1.7b01c73b967e8p-901, 0.0, 0.0, 0x1.30ea0856afb15p-222, 0x1.e0264d646e12cp-739,
     0x1.53d160bea3608p-248, 0.0, 0x1.e53ea3e55eb4dp-851, 0x1.c02715f20dccap-605,
     0x1.cdcc3238ae08cp-486, 0x1.a47ed379006b6p-129, 0.0, 0.0, 0x1.a3ec97429196cp-548,
     0x1.41c44a2c706d8p-1011, 0x1.edc97f538dae1p-924, 0.0, 0x1.fa6b01242e03ap-360,
     0.0, 0x1.b064a1dcf5c12p-768, 0x1.292b721600e27p-857, 0.0, 0x1.96c2c8cb0696ap-966,
     0.0, 0x1.799f4b83efadbp-459, 0x1.f3eab1dfae1b1p-386, 0x1.e6f55939ea7b1p-755,
     0x1.10ac8660fb247p-224, 0x1.6451973333009p-703, 0x1.debfa5c62343ep-256, 0.0, 0.0,
     0x1.4028b10231a73p-988, 0x1.291fe4122a96bp-745, 0.0, 0.0, 0.0,
     0x1.0d1348ff285f2p-6, 0.0, 0.0, 0x1.ea0229cde95d6p-139, 0x1.91acb36821ac4p-639,
     0x1.23fb203c257cp-903, 0.0, 0.0, 0.0, 0x1.dacb2bc8080ffp-898,
     0x1.04bd38331a525p-1, 0.0, 0x1.9e3bc41260716p-123, 0.0, 0.0,
     0x1.e4ce950c2e648p-884, 0x1.2c5d80ce25c82p-129, 0x1.9f5bd44f525f9p-876,
     0x1.43ad4a407580cp-727, 0.0, 0.0, 0x1.e00d6e442b7d7p-494, 0.0, 0.0,
     0x1.85aae6f6749c2p-778, 0x1.22f9f102e4b36p-662, 0.0, 0.0, 0.0,
     0x1.f22b674b9f8c2p-752, 0.0, 0.0, 0x1.ef52e7e752885p-992, 0x1.6fc88ca4c8688p-257,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ae38a37f9f8ap-370, 0x1.8ea98a206b52cp-852, 0.0,
     0x1.edece2c091306p-64, 0x1.6e6a5d0c4c212p-981, 0x1.1f9a3df322f1p-542, 0.0, 0.0,
     0x1.779c8ddc9d457p-629, 0x1.6c2380d74f97bp-144, 0x1.20a0f7501a5e4p-144,
     0x1.34813861b156dp-19, 0.0, 0x1.d74ee32d69562p-766, 0x1.af858b1270738p-923, 0.0,
     0.0, 0.0, 0.0, 0x1.a6ff6e4853a53p-702, 0.0, 0x1.79f5be46ca957p-210, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.90d5ab05bbf9fp-968, 0x1.4a5f204e4bca9p-63,
     0x1.c595f6f2b206p-396, 0.0, 0x1.6f495852fd93ap-897, 0.0, 0.0, 0.0,
     0x1.95aceb48a8091p-908, 0.0, 0.0, 0.0, 0.0, 0x1.3b1e4bbcbb477p-821,
     0x1.4dce936431d64p-598, 0x1.135332feda234p-941, 0x1.fed4416a3dd01p-158, 0.0,
     0x1.acfad89a60b95p-105, 0.0, 0x1.724de06096173p-391, 0.0, 0x1.cd2b7d72e350cp-254,
     0x1.8baee53d158d4p-280, 0x1.f77d219630822p-179, 0x1.47958ac4aff1p-286,
     0x1.e5ef9ead0c938p-955, 0x1.b7d5fef87a8abp-878, 0.0, 0x1.1451f4e331423p-359,
     0x1.ebc73256bd9f8p-210, 0x1.208acf887029ep-615, 0x1.bb5e44e3bc869p-637, 0.0,
     0x1.c61682a53c51ep-962, 0x1.b319ad4edbbfp-931, 0.0, 0.0, 0.0,
     0x1.bb0c30276cf43p-524, 0.0, 0.0, 0.0, 0.0, 0x1.3d8167915ef2fp-303,
     0x1.1579fe71683a3p-624, 0.0, 0.0, 0x1.e037b94cbe16p-974, 0.0, 0.0,
     0x1.3bddf4de27b3p-557, 0x1.14e04c5464884p-360, 0.0, 0x1.8eea68592ab16p-978,
     0x1.108edcf9bc0cep-224, 0x1.91919447d19a6p-562, 0x1.84940a007b557p-403,
     0x1.0197b99661f03p-891, 0.0, 0x1.0d9bba792838ap-167, 0.0, 0.0, 0.0, 0.0,
     0x1.65b3a69547488p-678, 0x1.2abebd6e185cdp-146, 0.0, 0.0, 0.0, 0.0,
     0x1.cc442e2061dcep-81, 0.0, 0x1.ae9e0cd4e3716p-819, 0.0, 0x1.d11b6591d97c1p-541,
     0.0, 0x1.d1182a29985cbp-367, 0x1.72cc1fb05b4a1p-879, 0x1.1f2c990dff156p-849, 0.0,
     0x1.dd851edc378a8p-286, 0x1.ed77210323792p-398, 0.0, 0x1.d0c929c79aff9p-567, 0.0,
     0x1.9233b3ef0d0ep-911, 0x1.22a7747cf939dp-114, 0x1.94f6f333f2374p-862,
     0x1.30416bc9ab3f3p-432, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b1f9f14c1cddp-362,
     0x1.d402350b25084p-377, 0.0, 0.0, 0.0, 0.0, 0x1.193eb7349d041p-513,
     0x1.b30a338f861e9p-202, 0x1.8ad8f443e09acp-803, 0.0, 0x1.4f61b56411927p-734, 0.0,
     0x1.f3f19d8b9057cp-729, 0x1.2a119aa76ff84p-683, 0x1.483d1ac0f05dp-734, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.664e6e078f295p-22, 0.0, 0x1.5ced38b285c1fp-60, 0.0,
     0x1.cf4f9aea0c17ep-694, 0.0, 0x1.dcbce549d481bp-842, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.be589319fcd47p-311, 0.0, 0.0, 0x1.3289fb01e0171p-751, 0.0,
     0x1.6609d6f6a93bbp-1010, 0x1.134682f07db68p-527, 0x1.5743f639dc7dap-760, 0.0,
     0.0, 0.0, 0.0, 0x1.efbc1cfef0141p-402, 0.0, 0x1.dc8c0363a659ep-185,
     0x1.ddd7e9938071bp-346, 0.0, 0x1.6d51c8b685cc5p-148, 0.0, 0x1.0f07f0d85c233p-249,
     0.0, 0.0, 0.0, 0x1.519438d8a2dd7p-135, 0.0, 0x1.9dbd7fcc6d726p-437, 0.0,
     0x1.940411d229d43p-360, 0.0, 0.0, 0.0, 0x1.08a3ff8d7b594p-621, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9de27dc3cc6e8p-604, 0.0, 0.0, 0x1.1ee7393512434p-225, 0.0,
     0.0, 0.0, 0x1.08fae2fe3f10ap-51, 0.0, 0x1.c33d346ac5879p-362, 0.0, 0.0, 0.0,
     0x1.ce06e5288a274p-108, 0.0, 0.0, 0.0, 0x1.f026875b96c57p-677,
     0x1.9b86dfc88b64ep-29, 0x1.190ee5092e0fcp-88, 0.0, 0x1.9dace9d7dd26dp-17, 0.0,
     0x1.96bfca0fa8796p-214, 0x1.640a0297d1ff6p-191, 0x1.bdccff670bbffp-298,
     0x1.bf0e859cf1ecap-870, 0x1.817c3ba1d4e68p-566, 0.0, 0.0, 0x1.73530dbae035ap-939,
     0x1.2396c330a0ca6p-980, 0x1.537d848dfac32p-574, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8bfaea48adca5p-139, 0.0, 0.0, 0x1.8506b936da6b3p-346, 0.0, 0.0,
     0x1.2742b45a9ccefp-418, 0x1.c2ce6420f22d2p-885, 0.0, 0x1.1f2b7268262cfp-253, 0.0,
     0x1.572b9286e903bp-839, 0x1.7fccfbe163a3ep-241, 0x1.874da398a6536p-73, 0.0, 0.0,
     0.0, 0.0, 0x1.302b3152fda25p-977, 0.0, 0.0, 0x1.6ef8ccdf90d8cp-443, 0.0, 0.0,
     0.0, 0x1.0493b9325c46bp-787, 0x1.5c512d3f7f40fp-525, 0.0, 0.0, 0.0,
     0x1.ab16e5cf6668ep-133, 0x1.6be7a52be1eacp-770, 0x1.93bff476326f7p-258, 0.0, 0.0,
     0.0, 0.0, 0x1.75bb44c8d115ep-843, 0x1.503f2b3473b7dp-607, 0.0,
     0x1.c3f149904e378p-32, 0.0, 0x1.3de2b1643974cp-528, 0.0, 0.0,
     0x1.0546145b5092ap-815, 0x1.1b0ceb039224dp-346, 0x1.69bb9740717c3p-322, 0.0, 0.0,
     0x1.5a1c0be800dd9p-318, 0x1.269937bce1e9p-657, 0.0, 0.0, 0x1.1c911eb5bc049p-1007,
     0x1.57e5252013522p-199, 0x1.d1b08f42ffe24p-1000, 0.0, 0.0,
     0x1.00b3e0f9cec21p-926, 0x1.c1324abff5373p-638, 0x1.ddda504b2197ep-414,
     0x1.55c56d8bcb9ffp-986, 0.0, 0x1.cc667516d9756p-399, 0x1.48f7f1b7f97fep-966, 0.0,
     0.0, 0.0, 0x1.f16329e95cf86p-88, 0x1.88fe0957a3a4ap-242, 0.0,
     0x1.44c366e32de5bp-52, 0.0, 0.0, 0.0, 0x1.2051c7d5a50d4p-149,
     0x1.16790ae2f093cp-628, 0.0, 0.0, 0x1.c03ff9ce4c8f1p-116, 0.0, 0.0, 0.0,
     0x1.1840f48b3d321p-649, 0.0, 0.0, 0.0, 0x1.0de66719a7092p-508, 0.0,
     0x1.4a8d833f386fdp-726, 0x1.f44dec79b0c64p-570, 0x1.6763b70008099p-216, 0.0, 0.0,
     0x1.83668a47126d7p-703, 0x1.8b7fed2f5d1e8p-807, 0x1.294fffd6a47c6p-835,
     0x1.a669280e94f13p-981, 0x1.42c6f98563c2p-374, 0x1.0a93307bda93dp-674, 0.0,
     0x1.c435e977f73a3p-1010, 0.0, 0.0, 0x1.6761b8a3fd493p-866, 0.0,
     0x1.e23557fefe6f1p-930, 0.0, 0.0, 0.0, 0x1.9e4ffb910d19p-547,
     0x1.78786a5c317e3p-409, 0x1.c671414b85711p-337, 0.0, 0.0, 0.0,
     0x1.aefff0d6ab52ap-129, 0x1.695a5ebd4a852p-102, 0.0, 0.0, 0.0,
     0x1.a7c986dba70bdp-983, 0x1.0e771572cd945p-666, 0x1.850bb5ae3edc6p-782,
     0x1.c17063a1c9731p-436, 0.0, 0.0, 0x1.d311989ba846cp-65, 0x1.84f5e88fd273ap-437,
     0x1.af09be45b5beap-747, 0.0, 0.0, 0.0, 0x1.c3c40fc75a62ap-88,
     0x1.ff39f62ea1e57p-558, 0x1.8ff85c6487513p-1001, 0x1.dfc9596d41e23p-988, 0.0,
     0.0, 0.0, 0.0, 0x1.23baf647f2316p-516, 0.0, 0x1.6c63f65f3573ep-38,
     0x1.342069c4932fep-283, 0.0, 0x1.841758fe3c395p-109, 0.0, 0.0,
     0x1.0309c8f555667p-972, 0x1.f5b26c28abb6dp-688, 0.0, 0x1.b423086bb0e48p-818, 0.0,
     0.0, 0x1.bbb1172a5fd8cp-320, 0.0, 0.0, 0x1.842e55d01ab89p-386, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dd3076ac49645p-445, 0.0, 0x1.70c0ecdfe3fp-824,
     0x1.a8c08e0c4ec0fp-681, 0.0, 0.0, 0.0, 0x1.484eac1c40d4cp-516,
     0x1.c74d368d0de2cp-974, 0.0, 0x1.4ce1383035662p-586, 0.0, 0.0,
     0x1.2770676d34bbcp-176, 0x1.ada5f4721ea5ep-147, 0x1.4731ada78f636p-33, 0.0,
     0x1.3da1b8d1b689bp-795, 0.0, 0x1.4f626dee31903p-232, 0.0, 0.0,
     0x1.cab6a6987582ap-587, 0x1.bd57a526030e8p-875, 0x1.6525c73c8c714p-273, 0.0, 0.0,
     0x1.8de2299a27b66p-527, 0.0, 0.0, 0.0, 0x1.c813d92ff06c6p-384, 0.0,
     0x1.31501b087a66bp-409, 0x1.7cbfae143f1eep-361, 0.0, 0.0, 0x1.3ebf41ba66758p-568,
     0x1.0b1b72f04d8bbp-720, 0.0, 0x1.fcd2c647be2ccp-780, 0x1.aa80e888f4358p-875,
     0x1.20207e183163ap-407, 0.0, 0.0, 0x1.fcc5ae525ff76p-396, 0.0, 0.0,
     0x1.04b6f2e5ce986p-37, 0x1.ad6545590bcdcp-752, 0x1.e40c6d1f2d7cp-306, 0.0, 0.0,
     0x1.b18ba70ec483p-603, 0x1.db70c8775113p-847, 0x1.a502d354f4e65p-359,
     0x1.c4f77c5c161eap-674, 0.0, 0.0, 0x1.6b9ea661af023p-1022,
     0x1.17c58267b545fp-712, 0.0, 0x1.de744409ef301p-428, 0.0, 0x1.1b8d9c431b45fp-760,
     0.0, 0x1.ba422945ba72cp-706, 0x1.24e40f05af055p-470, 0x1.b5b4eea92b641p-821,
     0x1.860b83384fa8ap-351, 0x1.3f7fbe0598ba9p-1009, 0.0, 0.0,
     0x1.5ab574d5edf96p-843, 0x1.5809ac83c29cbp-316, 0.0, 0x1.4669a4a19c386p-180, 0.0,
     0.0, 0x1.5b64e34e48d54p-817, 0x1.7b7935ba63c88p-395, 0.0, 0.0, 0.0,
     0x1.a5714b7e463dp-863, 0x1.51d2af64f511ap-191, 0x1.6c56b0eba6f12p-19,
     0x1.ba2a6639f41dbp-390, 0.0, 0x1.9dd0cd818ba76p-573, 0.0,
     0x1.ea5a36815b5bap-1010, 0.0, 0x1.904112d57eea7p-285, 0.0, 0.0, 0.0, 0.0,
     0x1.d7ec2f93d109cp-884, 0.0, 0.0, 0.0, 0x1.030717be0ef1cp-162, 0.0, 0.0,
     0x1.2b5924cfa99c1p-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51e8312ea73a7p-922, 0.0, 0x1.66da113adb7fbp-455, 0x1.bc19e3354fbd1p-211,
     0x1.649537f3b7d33p-828, 0x1.01feca69a2317p-1007, 0x1.dfb4c566b1e53p-188,
     0x1.0ef448b227a0ep-1007, 0x1.621b7289fd482p-813, 0x1.a647ab50227f4p-756, 0.0,
     0x1.12118fc299007p-1010, 0.0, 0.0, 0x1.636b0eb2e06d8p-909, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f8bfdfa6fbb12p-348, 0x1.a01a8ffdf9cb4p-317, 0.0, 0x1.d4f1d6106c02fp-453,
     0x1.e08fcc1edae1bp-33, 0.0, 0.0, 0x1.606f2bc131a41p-336, 0x1.22d147ce641afp-884,
     0x1.499e390b70243p-174, 0.0, 0.0, 0.0, 0x1.ec4ba6bea3541p-694,
     0x1.26c2a82c0021ep-368, 0x1.4e24546917bafp-400, 0x1.f8db89b42503ap-457,
     0x1.959c900510f2ep-181, 0.0, 0x1.4f1f80159cb25p-850, 0x1.3dd863376c23ep-52, 0.0,
     0x1.7e67496c63e62p-488, 0x1.85c42a074edfcp-385, 0.0, 0x1.d43ac8274185ap-659,
     0x1.625ed009bcba5p-592, 0.0, 0.0, 0.0, 0.0, 0x1.efc891493b03p-939, 0.0,
     0x1.adbac55181abbp-952, 0x1.34d3c6d65378p-186, 0x1.76b7c004177d3p-116,
     0x1.ec52f6f261fcdp-811, 0.0, 0.0, 0.0, 0x1.c9e86cb5e83eep-80,
     0x1.e8f1b2a6b3a9cp-892, 0.0, 0x1.36fc50cfb84d3p-310, 0x1.d4e82c7d66424p-738,
     0x1.53d88d5e7d7bp-829, 0x1.ad1712a944b1cp-932, 0.0, 0.0, 0x1.20eece4ed8ffep-841,
     0x1.6df19baf3ff6ap-298, 0.0, 0.0, 0x1.6428d0df3549dp-657, 0x1.5a7890591dcbap-861,
     0x1.e7309c5686a6cp-302, 0x1.5fbd8e39f0cefp-664, 0x1.a037797aead23p-458, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.91ffcb279626bp-763, 0x1.051fa5feb09bcp-908, 0.0,
     0x1.49cbc2abc1a4bp-156, 0.0, 0x1.29d0269678eb2p-381, 0.0, 0x1.cff0b21053295p-694,
     0.0, 0.0, 0.0, 0x1.a3ada60e2843p-374, 0.0, 0x1.a9bfda96a2e8ap-672,
     0x1.4500b778c63dp-912, 0.0, 0.0, 0x1.282a615fc250ap-972, 0x1.ab2f048489ef7p-418,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e409674fd2d34p-871, 0.0,
     0x1.025868cfc5a4cp-240, 0.0, 0x1.a8f7af227cd4cp-69, 0x1.adc89d85a434cp-792, 0.0,
     0x1.6c29ccd391f3dp-493, 0.0, 0.0, 0x1.1d96be168b731p-431, 0x1.5b08aabb3a27bp-647,
     0.0, 0x1.e3b3c0f17f3aap-343, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1767a861dd53ep-59, 0.0,
     0.0, 0x1.2abf8a302cf05p-9, 0x1.5a674885b25f6p-385, 0x1.3843d2d610b9cp-350, 0.0,
     0.0, 0.0, 0.0, 0x1.028014eddb7fep-243, 0.0, 0x1.935388fcdbfc3p-811, 0.0, 0.0,
     0.0, 0x1.4175691241b41p-912, 0.0, 0x1.46383250cf539p-372, 0x1.9f9bf53ae1e0ap-946,
     0.0, 0.0, 0.0, 0.0, 0x1.a764cfe06c0b9p-122, 0x1.51ea2857abe6dp-74,
     0x1.809b83b42cf3cp-925, 0x1.ed192e4353738p-280, 0x1.8186ee0de4d8fp-457, 0.0,
     0x1.18fcb1891d66cp-516, 0x1.9b3f87a5fc6a7p-583, 0x1.2d3614aca15d9p-926,
     0x1.735c381a5cf75p-769, 0x1.d7a420924442ep-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.954d13368bc1dp-111, 0.0, 0x1.5bac45e557e23p-532, 0x1.11aff6282a0e3p-513,
     0.0, 0x1.99afa85152ab1p-428, 0x1.9a5b1558f6f3cp-378, 0x1.95a49ef7692bfp-841, 0.0,
     0.0, 0.0, 0.0, 0x1.407f13c9a9423p-827, 0x1.34a7b6b24edc9p-833,
     0x1.2ce2358e7e20cp-37, 0.0, 0x1.4c0ef344bd9f9p-211, 0.0, 0x1.22f54bc72a171p-66,
     0x1.720ae042f248fp-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33d8a031dc1bep-861,
     0x1.3855299e01253p-899, 0x1.2c70481ec77d4p-220, 0.0, 0x1.c0dbdda41cc14p-441, 0.0,
     0x1.bcc8362c59ee7p-632, 0.0, 0.0, 0.0, 0x1.6a5c441fd6ffbp-190, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d0501f9e10145p-927, 0.0, 0x1.227132d3976c6p-123,
     0x1.6214890c24dd5p-767, 0x1.493131bf328b5p-343, 0x1.48df8418e3098p-853, 0.0,
     0x1.30d619c4e5b62p-728, 0.0, 0.0, 0.0, 0x1.26c4d70569916p-137,
     0x1.ae82dcb1aada7p-748, 0x1.e3bc4ee2d2d3fp-336, 0x1.f12a9b3277a3dp-84, 0.0,
     0x1.e337615ac8b05p-899, 0x1.41db386db742ep-353, 0x1.6274301d6c3ccp-678,
     0x1.ad442af3b28fbp-231, 0x1.b72b92b1a8ff8p-212, 0.0, 0x1.028cf8faf21f1p-486,
     0x1.99f6020af84c9p-785, 0.0, 0.0, 0x1.037a9a7a9a7dbp-100, 0x1.04e7ae5df8a19p-372,
     0x1.ffe25368f934dp-559, 0.0, 0.0, 0x1.ee4a68987d17p-284, 0.0, 0.0, 0.0, 0.0,
     0x1.1e427fae312d6p-107, 0x1.bb3d48af1d55ap-177, 0x1.fc60353bbf51bp-950, 0.0,
     0x1.55ef8881404fap-628, 0x1.e5284c2b369bfp-559, 0x1.8ac5b97d4d958p-762, 0.0,
     0x1.b0c4ea6b48dcep-447, 0.0, 0.0, 0.0, 0.0, 0x1.d26901c558c5ep-621, 0.0,
     0x1.9348c54ee7aa6p-462, 0x1.956495db3505ep-501, 0.0, 0.0, 0x1.0c915d3dec8b6p-112,
     0x1.eb2e8bc954fd4p-943, 0x1.71ce26ee736d7p-671, 0x1.417af8f129f18p-622,
     0x1.bc5e45eee960fp-1010, 0.0, 0.0, 0.0, 0x1.099a7585adbb5p-48, 0.0,
     0x1.4130aab98b554p-697, 0x1.b226c05276866p-698, 0x1.aedd1cf748b63p-386, 0.0,
     0x1.4e0a1610ad8edp-336, 0x1.67cb8021451a9p-887, 0x1.fe0c5dfb1bfaap-735,
     0x1.fea4eb32fbf87p-609, 0x1.558a3aaf96fe5p-488, 0.0, 0.0, 0x1.4d5f80b08c9b5p-339,
     0.0, 0x1.30549ab44a9bdp-12, 0.0, 0x1.ec6e2954ef14bp-328, 0.0, 0.0,
     0x1.3c6ce40774283p-947, 0x1.e2bdcb872a17ep-183, 0x1.7812187dec10fp-323,
     0x1.e4976277cbcffp-207, 0x1.bc38bd8925e2ep-687, 0x1.e628b38400303p-125, 0.0,
     0x1.5b193c378f6d8p-589, 0.0, 0.0, 0.0, 0x1.82a71e2b242cep-62,
     0x1.6ca4f233acee2p-506, 0.0, 0.0, 0x1.6aed2fc888296p-424, 0x1.089b8d6a6ca24p-807,
     0x1.7d1bdcfd8633fp-82, 0x1.cc3b2557ff711p-529, 0.0, 0x1.ea6885bab45fap-402,
     0x1.d9876d6acfcd6p-374, 0x1.3faf161c68533p-822, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0ff03625dbe68p-142, 0.0, 0.0, 0x1.4b0c12b3c55fp-718, 0.0,
     0x1.95b922b92062fp-675, 0.0, 0.0, 0x1.7d101c7d0b60fp-1005, 0.0, 0.0,
     0x1.1b04dc8828647p-783, 0.0, 0x1.167b9de9ebadcp-82, 0x1.0c0c867c96e9bp-25, 0.0,
     0x1.08b4616fbb079p-945, 0x1.b658286ce7301p-785, 0.0, 0x1.24b4a46434c7ep-713, 0.0,
     0x1.b06fce25d411bp-1011, 0x1.eb9c06f0656efp-942, 0x1.546cbdc4ba68fp-897, 0.0,
     0x1.17476a4951cadp-450, 0.0, 0.0, 0x1.c22c21b9c0791p-115, 0x1.d88e3946513ccp-941,
     0.0, 0.0, 0x1.baaae0ccefeb3p-971, 0.0, 0x1.6b2e04d777437p-536, 0.0,
     0x1.349c7ad9d0122p-471, 0x1.d8fa0e78ea6bcp-140, 0x1.af0a2ead6f77bp-937, 0.0, 0.0,
     0x1.7fbc02eb68647p-150, 0x1.17cc0a86d7a8p-292, 0.0, 0x1.63cfa90ce11b2p-32,
     0x1.2c5f170114f11p-304, 0x1.f319c92e9d645p-6, 0x1.9b6e1cec9639ap-409, 0.0, 0.0,
     0.0, 0x1.640bd0f8fde88p-817, 0x1.1bb9b3e1106e5p-293, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0b9028b877bf6p-773, 0x1.d51b7cc827f4fp-319, 0.0, 0x1.5f548164240f6p-729,
     0x1.f0ec78e28277ep-885
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
            tmp1 = Sleef_expm1d2_u10avx2128(tmp0);
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
    printf("Sleef_expm1d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expm1d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
