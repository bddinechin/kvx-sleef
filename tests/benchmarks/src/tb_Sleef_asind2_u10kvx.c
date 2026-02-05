/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind2_u10kvx.c --function Sleef_asind2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.fa239eab3c806p-627, 0x1.62c4dc0c341dap-294, 0x1.713f5a9fcccabp-962,
     0.0, 0x1.67fbb67bb609dp-756, 0.0, 0x1.663041c632fffp-44, 0.0,
     0x1.bf03042612139p-933, 0.0, 0x1.15a62613c92e7p-71, 0.0, 0x1.59012aaf05bcep-784,
     0x1.d85ea9200889p-96, 0.0, 0x1.b0482b9da6543p-671, 0.0, 0.0, 0.0,
     0x1.a50410aea276ap-286, 0.0, 0.0, 0x1.e51304c889318p-771, 0.0, 0.0, 0.0, 0.0,
     0x1.adf6167bc48f5p-334, 0.0, 0x1.4adcad2435551p-458, 0.0, 0.0, 0.0,
     0x1.e081c4243de65p-940, 0.0, 0.0, 0x1.17a5cc4d9316ep-512, 0.0,
     0x1.cd88f37e1d50dp-723, 0.0, 0x1.d0a6af8d4a44fp-548, 0x1.532adc3552ca9p-285,
     0x1.f96b8accf0222p-549, 0.0, 0x1.6b7f100e6927ap-140, 0.0, 0x1.7aff05b21e17p-127,
     0x1.238fa579c5c9cp-745, 0x1.15ed6f7f4bcb2p-184, 0x1.0f06bcae5e0ecp-882, 0.0,
     0x1.1b3eb3a43bc64p-592, 0x1.3515e98d612dp-684, 0x1.203791803a3e5p-373, 0.0, 0.0,
     0.0, 0.0, 0x1.a51b3966def75p-478, 0.0, 0x1.bc49328a29997p-425, 0.0, 0.0,
     0x1.02899229a2c4cp-235, 0x1.71615d0a68b96p-269, 0.0, 0x1.ba65fcea0c484p-432, 0.0,
     0.0, 0.0, 0x1.83d0a4bbe72a1p-342, 0x1.9304bcf1eda67p-324, 0.0, 0.0,
     0x1.2ea4e5b74d1e7p-582, 0.0, 0x1.4d1c3c3cfaf84p-143, 0x1.1ad5974703cfp-437,
     0x1.c8e40d072fee7p-793, 0.0, 0.0, 0.0, 0x1.f90edefc0a92bp-758,
     0x1.a52bdd7cbceafp-260, 0x1.aabcdc98ca7eap-814, 0.0, 0x1.f6e5cade7f723p-500,
     0x1.95389685cb1efp-345, 0.0, 0.0, 0x1.0141ca39e0216p-11, 0.0, 0.0, 0.0,
     0x1.0bded265bc49cp-686, 0x1.70dc495b74c67p-441, 0x1.fc8dc92aa7fabp-622,
     0x1.924459c4e89c2p-735, 0.0, 0.0, 0x1.c422952a5b936p-891, 0.0,
     0x1.a758da890e9abp-8, 0x1.d1cf7e97b0975p-364, 0.0, 0x1.6269df9c9cf6fp-887,
     0x1.e5b9442defc42p-986, 0.0, 0x1.7d4e77f2c81d8p-392, 0.0, 0.0,
     0x1.8f9d3f592c9d5p-788, 0x1.185f2720bd2fp-697, 0x1.5d5a0b34feb24p-545, 0.0, 0.0,
     0.0, 0.0, 0x1.35a408ebfba3ap-115, 0x1.9879fc5da6d3bp-863, 0.0, 0.0, 0.0,
     0x1.c5e96a0b9d42dp-406, 0x1.993c0efb7a0f2p-131, 0.0, 0x1.a827eef97f0f5p-893,
     0x1.92464693f68b7p-36, 0x1.39328024dd968p-773, 0x1.1ce79151ab6c3p-25,
     0x1.020cdf799728p-235, 0x1.eb2a04e3c4497p-138, 0x1.ec3b0a79ca557p-852, 0.0,
     0x1.0c4eca26173dfp-454, 0x1.75a716e95af4ep-573, 0.0, 0x1.71caf66f27583p-410, 0.0,
     0x1.e613d56ca4276p-876, 0.0, 0x1.fa018c22304e6p-400, 0.0, 0x1.ec3ca478198cp-346,
     0x1.24dd28869f2a3p-353, 0.0, 0x1.3d746c8421698p-232, 0.0, 0.0,
     0x1.d56fcba199e5fp-152, 0.0, 0.0, 0x1.e2b721f5805a6p-726, 0x1.503dd24dd1c3bp-432,
     0.0, 0.0, 0x1.c19b9634dc50bp-952, 0x1.d67ade41e3997p-53, 0x1.8c6eadea5d4a8p-670,
     0x1.43bcef31f8901p-31, 0.0, 0.0, 0x1.947d6c7e17d25p-330, 0x1.bce32ede5d268p-648,
     0x1.d5899e8a5496fp-372, 0x1.564c480ac70c1p-230, 0x1.57caedff827e8p-648,
     0x1.0104ecaa88986p-527, 0x1.439aac656dd67p-533, 0.0, 0x1.4c4226cfc889bp-503, 0.0,
     0x1.cadbb9fc726c8p-535, 0.0, 0.0, 0x1.6c3a81cc84c76p-610, 0.0, 0.0, 0.0,
     0x1.07cc1fd0c02c1p-383, 0.0, 0x1.9512cbbcd1781p-704, 0.0, 0x1.f4ece20c741fbp-577,
     0.0, 0x1.367b7bac67f51p-414, 0x1.267737ba6422cp-800, 0x1.90bfc0b0d51dbp-755,
     0x1.1da5c729a0323p-532, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39e97c3244bedp-979,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77b5c1649a5cbp-940,
     0x1.d11bb058eed85p-497, 0x1.3ef3602cc3d8bp-741, 0.0, 0x1.00d8208c581b1p-783,
     0x1.fcb02a6e6a57bp-817, 0x1.decda6b4cd625p-416, 0.0, 0x1.9c2d8779258f5p-553, 0.0,
     0.0, 0x1.36772632bbb8fp-492, 0x1.e285dbfb0e22dp-364, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f0900df791da7p-149, 0x1.ce0244d3f4f07p-573, 0.0,
     0x1.00d0a4d157bc3p-665, 0x1.1cce5bcf8bdaap-79, 0x1.44289b3c48ff1p-219, 0.0,
     0x1.3ef34354bd0dep-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.63ac7d5eb1e16p-400, 0.0, 0.0, 0.0, 0x1.5975776f9e8dfp-862,
     0x1.f46706dc668cap-444, 0x1.8bcf477bf36a9p-702, 0.0, 0.0, 0x1.a4ab3dbc56d8ap-966,
     0x1.f46bae035d843p-482, 0.0, 0.0, 0x1.dce68a1746933p-860, 0x1.f054af9656d84p-290,
     0.0, 0x1.0575700cd04a8p-61, 0x1.50c1b1e8a6872p-512, 0x1.642b06b5eb0fep-472, 0.0,
     0.0, 0.0, 0x1.318235e05a9ccp-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.48bc5bbaca9f3p-554, 0x1.31df7d345dc88p-570, 0.0, 0.0, 0.0,
     0x1.12d2143760d4dp-764, 0.0, 0.0, 0x1.0a752cab7f2f1p-6, 0.0,
     0x1.3ed23ab2ff101p-614, 0x1.5db32825c2e8fp-150, 0x1.c894f3827126p-30,
     0x1.f7bcdc496fbdbp-888, 0x1.0a68d6b29eda5p-564, 0.0, 0.0, 0.0,
     0x1.a0ef69cbe1feep-273, 0x1.219f6c6a4b21ep-831, 0x1.2d75f6567c3ccp-452, 0.0, 0.0,
     0.0, 0x1.7afd3dff26ep-974, 0.0, 0x1.5ab1c594bb35ep-790, 0x1.206a1e77d5c39p-470,
     0x1.02f9644265b3bp-664, 0x1.94827ec7b36a7p-872, 0x1.51c7144439d33p-206,
     0x1.68980f090a76ap-75, 0x1.82f2adf0a23ap-164, 0.0, 0.0, 0x1.264840f4e6897p-990,
     0.0, 0x1.1a3cf9634732dp-149, 0x1.de983ce0255a2p-117, 0.0, 0x1.b8fe89c399a78p-904,
     0x1.420c9b9802995p-403, 0.0, 0x1.67247f06d7b9cp-618, 0x1.009aeac046d89p-285, 0.0,
     0.0, 0x1.add7a9a9ee9d9p-815, 0.0, 0.0, 0x1.c052ba2a9332fp-853,
     0x1.c7add2112a913p-829, 0x1.bf6134038deecp-40, 0.0, 0x1.04add9eff54d1p-202,
     0x1.a940ace305293p-156, 0.0, 0.0, 0.0, 0.0, 0x1.8603683d42914p-320, 0.0, 0.0,
     0x1.d4f73d3ea9e6ep-443, 0x1.1be4e765f11bfp-346, 0x1.6a785b6df7fabp-207, 0.0, 0.0,
     0x1.aeb606d658895p-47, 0.0, 0x1.7efd3a9e435bfp-870, 0x1.4079a43be9e5ep-337,
     0x1.8323f6abf7fd4p-970, 0.0, 0.0, 0.0, 0.0, 0x1.716c6ced1bcf8p-187,
     0x1.21c8c9aee7668p-847, 0.0, 0.0, 0.0, 0x1.759e20d929a99p-865,
     0x1.b6ef69de72e3fp-192, 0.0, 0.0, 0x1.8c81fddaaf23fp-759, 0.0, 0.0, 0.0,
     0x1.b5cb4c25f42b7p-790, 0x1.838ab190d6e3bp-875, 0x1.b952f6a1ea2c7p-240, 0.0, 0.0,
     0x1.fb1cffa87c71p-956, 0x1.357220154b0a6p-1012, 0x1.840302e20fa84p-849, 0.0,
     0x1.25134fdcfbc1ep-834, 0.0, 0x1.41a356e4b8dacp-939, 0x1.58ee94bc04158p-12, 0.0,
     0x1.511e79629796p-323, 0.0, 0x1.60f005d17fc3dp-615, 0x1.dcdb14d85e3fep-50, 0.0,
     0x1.a8ddbc7efe834p-794, 0.0, 0.0, 0x1.610e34fa8677fp-345, 0x1.6b18d4aef5f7fp-753,
     0.0, 0x1.b3991e3c95877p-208, 0x1.f9b95897dd17bp-83, 0x1.fe9cc14ef1b6ep-315,
     0x1.8b426fcd02daap-524, 0x1.fcba7548762eap-816, 0.0, 0.0, 0x1.42e29d14af6cp-933,
     0x1.f87d608d96e0bp-681, 0x1.92b384c7071b8p-945, 0.0, 0.0, 0.0,
     0x1.4f8e95e4be9e8p-401, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83629c416bf6fp-209,
     0x1.a179cef2a9a56p-136, 0x1.2cfbedfadf68ap-106, 0x1.fde3bd7e34ceep-777, 0.0,
     0x1.efb1cccc77ccep-331, 0x1.b273df348002p-691, 0x1.52da52768191dp-523, 0.0,
     0x1.4c0ce458c2b4p-13, 0.0, 0x1.71cd56356d3fdp-354, 0.0, 0x1.46455ee2c1a7p-256,
     0x1.0351de1bda54p-917, 0x1.0c8d58bb6dc6ep-436, 0x1.6ddd4beef4521p-44, 0.0,
     0x1.c573d0ee100d3p-978, 0.0, 0.0, 0x1.f5e985d6fc5b6p-287, 0.0,
     0x1.5c42c3681e4e6p-943, 0.0, 0.0, 0x1.23e4abaa6d929p-1021, 0.0, 0.0,
     0x1.b48d0175f6453p-839, 0x1.81704cf220aadp-850, 0.0, 0x1.2c6d3a122baf3p-483,
     0x1.aca6ccbbfca7ep-9, 0x1.4afd636adc429p-641, 0x1.8e04ff000085bp-841, 0.0,
     0x1.251d97ebfb285p-426, 0x1.856784534c845p-706, 0x1.89bcdb4524282p-872, 0.0,
     0x1.a0b6dd283fcd3p-764, 0x1.3ced60ce9f78ap-531, 0.0, 0x1.762c24c8bcf6fp-287,
     0x1.dbc506e093cc9p-854, 0x1.db22bfa2def0ep-952, 0x1.76ae9a6305db1p-816,
     0x1.070cec5d2597dp-721, 0x1.5fa3233d97c0ep-170, 0.0, 0x1.0b0e03e7eb45ep-194, 0.0,
     0.0, 0x1.458b8c39091edp-57, 0x1.dc013233e0d7p-599, 0.0, 0x1.123a630f8ec38p-597,
     0x1.b903731d5821dp-474, 0.0, 0x1.62961428cf0b4p-131, 0.0, 0x1.ab8feb87af3cp-963,
     0.0, 0.0, 0x1.fbfb18d5235f1p-578, 0.0, 0x1.766d77c57df61p-79, 0.0,
     0x1.66496a781b005p-1014, 0.0, 0x1.0a90743145013p-395, 0x1.f53906716c4cbp-379,
     0x1.240d8dfa81151p-708, 0.0, 0.0, 0x1.d8bc254498f5dp-444, 0.0,
     0x1.e94bbd47c12d3p-181, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa28867afcfedp-129, 0.0,
     0x1.db88cd1a22d44p-503, 0.0, 0x1.9fce2e80b1b45p-805, 0x1.2dabc4c4f10cbp-81,
     0x1.db5e74ff9fae7p-649, 0x1.e0f693e6ae90ap-676, 0x1.7d338ca11cd25p-732,
     0x1.13599ac0dcfb2p-358, 0x1.ae4052e1c8285p-976, 0.0, 0x1.141b6d03c3ddbp-555, 0.0,
     0x1.d24c85e09fde5p-385, 0.0, 0.0, 0x1.0e66ce36c57ddp-501, 0x1.158e645380c1cp-340,
     0x1.80fba01f514a4p-401, 0.0, 0x1.a686344ccb944p-774, 0.0, 0.0, 0.0,
     0x1.11661149e51dfp-559, 0.0, 0.0, 0.0, 0.0, 0x1.931ac4717b5p-229,
     0x1.89183de73cbafp-842, 0x1.acf7610182f3p-579, 0x1.3acc412d3d327p-268, 0.0, 0.0,
     0x1.1250b54c881a4p-985, 0.0, 0x1.2709b7cd90eb1p-590, 0.0, 0.0,
     0x1.4389796c8fcb6p-615, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5abd3aed3373dp-397,
     0x1.ac7db09cbf043p-439, 0x1.25bb890271e08p-642, 0x1.23426ddb1cb3ap-60, 0.0,
     0x1.b68cd22ae3445p-621, 0.0, 0.0, 0x1.417a963ce0dap-427, 0x1.027e596671af3p-337,
     0.0, 0.0, 0x1.67f3faeb623dep-384, 0x1.9425b625df799p-659, 0x1.83d9e7a099409p-831,
     0x1.a9183809316e6p-862, 0x1.4e640d111b6acp-792, 0x1.a497e0215aa26p-250, 0.0,
     0x1.c475a10848742p-904, 0.0, 0.0, 0x1.b418f23b86f0dp-38, 0.0,
     0x1.11163bcc91ca3p-356, 0.0, 0.0, 0x1.17aa262b12746p-871, 0.0,
     0x1.a39f23b73d231p-35, 0.0, 0x1.4f1a7e59158fp-239, 0x1.5c285a1015e28p-657,
     0x1.0c223c7a7b92cp-127, 0x1.7c7d7d2c5c70ap-92, 0x1.9637f8ea4867fp-470,
     0x1.c203cf8050951p-554, 0.0, 0x1.b5a45379a5c69p-883, 0x1.77ba9cf7006e3p-848, 0.0,
     0x1.cf9dfd184a809p-760, 0.0, 0x1.a774c76ce1a8dp-645, 0.0,
     0x1.72b5f4baec765p-1018, 0x1.9dbf5270d0a42p-575, 0x1.e844617a25355p-665, 0.0,
     0x1.0ce36012e59aep-819, 0.0, 0.0, 0x1.51596e6488866p-743, 0x1.1036151768ad1p-915,
     0.0, 0.0, 0x1.cfd6d022d4b1p-438, 0x1.d457a8db02139p-797, 0x1.3643a6d0f8d6ap-230,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd86ce0eddeb8p-358,
     0x1.754092edd02fbp-527, 0x1.d993a17678c81p-523, 0x1.b19e8d430c011p-316,
     0x1.ccdefb424611p-912, 0.0, 0x1.426e7f6ba2d9fp-711, 0x1.1fb530acde3d3p-405,
     0x1.c66f6218ada04p-532, 0x1.8c4dde09ce7a6p-860, 0.0, 0x1.cc3f06875865cp-193,
     0x1.4efae6d82ba7fp-11, 0.0, 0.0, 0x1.b63406a4f5877p-784, 0x1.949718446f69ap-180,
     0.0, 0x1.9182833c2c5e2p-895, 0.0, 0x1.03375e1e6b8ccp-945, 0x1.f6eda8c5ac18dp-346,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8f20974660abp-362, 0x1.578b44dea082ep-358, 0.0,
     0x1.2161ee116d7fbp-320, 0x1.aa6cff2622583p-109, 0.0, 0x1.7d2bd50c8ef28p-308,
     0x1.3550fc70c4831p-227, 0.0, 0x1.445b8d67e5866p-343, 0.0, 0x1.5c66efdee584p-857,
     0x1.84289b858d362p-137, 0x1.ce41ee5645b56p-280, 0.0, 0x1.ffbe626b44478p-589,
     0x1.e87a136faf47dp-444, 0.0, 0x1.cd339a35923abp-684, 0x1.c7fa510108b04p-680,
     0x1.9f9469704d6dbp-77, 0x1.e2f143d8f6f6ap-987, 0x1.451248be73302p-887, 0.0,
     0x1.e4d357631a7bfp-238, 0.0, 0.0, 0x1.ea7c0d43b3e75p-252, 0.0, 0.0, 0.0,
     0x1.f379fe4e6977dp-670, 0x1.ba4b3b4dbc8ccp-651, 0x1.f382371e1273ap-583,
     0x1.d64d2d475e6a6p-981, 0.0, 0.0, 0x1.3068838ca7f1fp-667, 0x1.e1c308db0b1f1p-919,
     0x1.1c4acbfbfd5a3p-699, 0x1.26a85cb82c62ep-498, 0.0, 0x1.c46499a4625e9p-459, 0.0,
     0.0, 0.0, 0x1.e13836196ed11p-984, 0.0, 0x1.5e201b8fd4238p-508, 0.0,
     0x1.5f75637479505p-140, 0.0, 0x1.831be130c96cep-632, 0x1.8a58808b8c9c9p-436,
     0x1.a5c6078c31b73p-711, 0.0, 0.0, 0.0, 0x1.d4d763ac74057p-917,
     0x1.98e688be38031p-777, 0x1.85df664d4e523p-194, 0x1.917dd58c84bc6p-226,
     0x1.b30836ed25c63p-318, 0x1.7bd1665690e02p-124, 0x1.45d8871aeee12p-11, 0.0, 0.0,
     0x1.504fa2d927447p-349, 0.0, 0.0, 0x1.0fefe9da67b7ap-947, 0.0, 0.0, 0.0,
     0x1.072fbe57cfc8dp-372, 0x1.2327366413a1p-175, 0x1.7022b33d14edcp-876,
     0x1.0191d6e9ebd97p-223, 0.0, 0.0, 0x1.92ddf6778c4cdp-996, 0.0, 0.0,
     0x1.d984f7ca88ab3p-726, 0x1.73c0dfd547ca5p-735, 0x1.f8f1cc13b3fe2p-333, 0.0, 0.0,
     0x1.0650b0e812b8dp-965, 0.0, 0.0, 0.0, 0.0, 0x1.5b63bf783c17ep-942,
     0x1.1eae75c97988ap-5, 0.0, 0x1.b66f85f5070f2p-325, 0x1.bb6ae73462b2ep-842, 0.0,
     0.0, 0x1.2e161d68f47bep-65, 0.0, 0x1.704003b97dd6bp-16, 0x1.335f18bf0d12ep-256,
     0x1.454e571d05c2p-956, 0.0, 0x1.83298363f1c49p-253, 0.0, 0.0, 0.0,
     0x1.150d4d3a3baf4p-580, 0.0, 0.0, 0.0, 0.0, 0x1.63bc3b710142ep-239, 0.0,
     0x1.3f63c7a0dc001p-358, 0x1.fbfa6ba350561p-198, 0.0, 0.0, 0x1.271e851824abp-256,
     0.0, 0x1.444dc0d514e56p-214, 0.0, 0x1.da4e3ccbd9454p-15, 0x1.fbdd0d3588f79p-365,
     0x1.c636b5859d147p-119, 0.0, 0.0, 0.0, 0x1.e45016861b7cbp-540,
     0x1.63bdab5b1cb5cp-164, 0.0, 0x1.1c99a04e6344dp-858, 0x1.841b06ae275f9p-63, 0.0,
     0x1.b16388c8d3be8p-1008, 0x1.f09f7fa27409cp-295, 0x1.289fe1c89be8bp-929, 0.0,
     0.0, 0x1.94b40a8eb6609p-638, 0x1.383a287215b02p-975, 0x1.e489bb644830dp-955,
     0x1.c9e56746e84efp-122, 0x1.4297cfca8f3f1p-826, 0x1.7277c483806d6p-924,
     0x1.22ac629091f03p-369, 0x1.bf28f3019d93ap-105, 0x1.cd05ae2b3e175p-475,
     0x1.9d6656ef708e9p-822, 0x1.05d1e1ee7d0f7p-784, 0x1.473797ed4c239p-883, 0.0, 0.0,
     0.0, 0x1.356eec51d0d39p-371, 0x1.ea06e71322c2ap-512, 0.0, 0.0,
     0x1.9efff87658b48p-748, 0x1.e22de6fa85e91p-145, 0x1.6e3379f0787c8p-443,
     0x1.2e4cae2235009p-618, 0x1.4e0e790dc4e17p-363, 0.0, 0x1.e4225d7aae06ep-426, 0.0,
     0.0, 0x1.b5fab31ec0994p-375, 0x1.7f0446e5fc6dcp-872, 0.0, 0x1.95251d5a6ec2ap-549,
     0.0, 0x1.fdb4ad1d9a8b6p-176, 0x1.6a6319c1bf2f2p-917, 0.0, 0x1.dd32d3fcf9dc5p-996,
     0.0, 0x1.1a94dfe000d19p-78, 0x1.04a62f10605efp-424, 0x1.d8f3496959874p-1012,
     0x1.1a13ea01f11c4p-114, 0.0, 0x1.6ede4fb012aabp-506, 0x1.95e8460f557dbp-356, 0.0,
     0x1.819048ca2089p-250, 0.0, 0x1.1933c43ef10e1p-514, 0x1.179d91f96b82dp-896,
     0x1.95306575cdf11p-600, 0.0, 0.0, 0x1.3a7780ce1312dp-176, 0.0, 0.0, 0.0,
     0x1.036a1a370d611p-777, 0.0, 0.0, 0x1.21602469ea299p-617, 0.0,
     0x1.510e92a3f9c45p-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03ecb7fbd5244p-20,
     0x1.cce54841c3792p-136, 0x1.399f7ec4ca7c8p-760, 0.0, 0.0, 0x1.caaf01c97995p-693,
     0.0, 0x1.bfd949387d1e9p-772, 0.0, 0.0, 0.0, 0x1.953e0ec6d2cc5p-25,
     0x1.44a8d523872bp-399, 0.0, 0.0, 0x1.1065145061c76p-621, 0.0,
     0x1.995d5795655ep-607, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.860b5031438fep-421, 0.0, 0.0,
     0x1.230f0109f6c97p-1009, 0x1.b70ae0f4968ddp-245, 0.0, 0x1.6eb18234c28eap-930,
     0.0, 0.0, 0.0, 0x1.476ac598b713fp-339, 0.0, 0.0, 0.0, 0x1.a96cba797b802p-322,
     0.0, 0.0, 0x1.032122f96e92dp-266, 0x1.c1c94d38e2211p-505, 0x1.f6d38d844d4eep-777,
     0.0, 0x1.1c68ef3b6536ap-925, 0x1.3dcd04b6b6bdep-812, 0.0, 0.0,
     0x1.bd85f0bf46123p-586, 0x1.d06596bbc7db1p-506, 0.0, 0.0, 0.0, 0.0,
     0x1.c964e80d7708cp-68, 0x1.61dc2e476fc57p-697, 0x1.2feee0d2284d9p-539, 0.0, 0.0,
     0x1.9df0a7d851bacp-609, 0x1.40123c2457777p-78, 0x1.627b310a772d8p-816,
     0x1.f357c4526dc1fp-553, 0x1.dcf90404de77cp-219, 0x1.c6b8a1c9b8271p-925,
     0x1.6d49a45836b3bp-341, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.91938548f44fep-150, 0x1.4bec7cb69043p-249, 0.0, 0x1.47904492a1644p-574,
     0x1.99ba926d6f9dbp-31, 0x1.c05d68d68e7a7p-240, 0x1.d5b75189e5152p-35, 0.0, 0.0,
     0x1.8225707a7f2cep-765, 0x1.18b073a3d885p-653, 0.0, 0.0, 0.0,
     0x1.7cf234d88fc59p-63, 0x1.9e7fd42fa47dcp-997, 0x1.9bfe92ab7c51ep-157,
     0x1.37714c813fde4p-961, 0x1.d4121e9593922p-599, 0.0, 0.0, 0x1.e1d309f71b715p-932,
     0x1.6d40e76a5c394p-24, 0.0, 0x1.8924120842dbcp-317, 0.0, 0.0, 0.0, 0.0,
     0x1.57071e5917803p-34, 0.0, 0x1.02d88170e9b8p-121, 0x1.ff4653b9d40dcp-109, 0.0,
     0.0, 0x1.f75f367ae00fcp-528, 0.0, 0.0, 0x1.32dc874cc4609p-969, 0.0,
     0x1.b3a72f663a558p-659, 0.0, 0x1.a3b3bfda81e24p-230, 0x1.6ad936ab1b126p-862,
     0x1.bc94d81da79d5p-86, 0x1.22550f0be58dcp-796, 0x1.e8823b011b4e2p-387,
     0x1.505bd3bd1eefap-633, 0.0, 0x1.0566ac193dc27p-431, 0x1.3b186b749b823p-100, 0.0,
     0.0, 0.0, 0.0, 0x1.00064d28ae03ep-845, 0x1.c3809aceb2b42p-699, 0.0, 0.0,
     0x1.ebd3194bff7e9p-710, 0.0, 0x1.85988b0058edcp-892, 0.0, 0x1.96e5437588113p-975,
     0.0, 0.0, 0x1.9552a990223f8p-986, 0x1.d1b3ffbada672p-129, 0.0, 0.0,
     0x1.881a49f20d81fp-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.adbab3d4e73d2p-136,
     0x1.59d451f63c721p-267, 0.0, 0.0, 0.0, 0x1.fb806dd2221a6p-699, 0.0, 0.0,
     0x1.296699dbeae3dp-658, 0x1.57acaaa1aef8p-717, 0x1.7b83299fb048fp-391,
     0x1.6ddfea5199e4p-244
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
            tmp1 = Sleef_asind2_u10kvx(tmp0);
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
    printf("Sleef_asind2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asind2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
