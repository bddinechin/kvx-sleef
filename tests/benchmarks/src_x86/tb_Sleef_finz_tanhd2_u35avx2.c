/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd2_u35avx2128.c --function \
 *     Sleef_finz_tanhd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.8c5354b95f4e2p-839, 0x1.337ddb021831fp-958, 0x1.08d1e4306a91dp-1014,
     0x1.fed43b1c475bdp-574, 0x1.8689229606396p-201, 0x1.7dfffe07db622p-321,
     0x1.f355e344d0999p-371, 0x1.324d549e82b5ap-734, 0x1.bd5c02b0ae5fcp-291, 0.0, 0.0,
     0.0, 0.0, 0x1.4b29b594b8bd4p-145, 0.0, 0x1.fea3cae0b5b99p-98, 0.0, 0.0, 0.0, 0.0,
     0x1.f573524e78a2bp-472, 0.0, 0.0, 0.0, 0x1.4b27111c1d25p-184, 0.0,
     0x1.3f6a0138fbe86p-673, 0x1.b9235b1ff66acp-413, 0x1.c2cd8b9efdd3fp-386,
     0x1.253b7c2911244p-563, 0x1.1e287928b045fp-229, 0.0, 0x1.bfb7582a85018p-206,
     0x1.644883b8646c7p-510, 0x1.a078646a80fa9p-633, 0.0, 0.0, 0x1.6d462cbec6effp-24,
     0x1.1a14388eaf18ap-461, 0x1.b8133f625ebap-634, 0x1.a5d50e49bf857p-702,
     0x1.06edb1ba6efp-342, 0.0, 0x1.78281bf287ff1p-513, 0x1.3dea6761664e3p-13,
     0x1.c06530dd0b0d6p-194, 0x1.6360faf7e772p-824, 0.0, 0x1.ad7b87b0a505fp-853, 0.0,
     0x1.e2058bb982a5bp-955, 0.0, 0.0, 0.0, 0.0, 0x1.de0c370e5f6dbp-752,
     0x1.a0f9739e840cbp-232, 0.0, 0x1.cc754640ea0bfp-535, 0.0, 0.0,
     0x1.46c02e853fe5dp-431, 0.0, 0x1.43dfb57bdfe91p-177, 0.0, 0.0,
     0x1.87a5c6311fe17p-434, 0.0, 0x1.534a70d136cb7p-851, 0.0, 0.0,
     0x1.4234ee5afa69cp-395, 0.0, 0.0, 0x1.e36a959f47d7dp-119, 0x1.b902f68f94845p-275,
     0x1.f3a536b582834p-422, 0.0, 0x1.64824537b08f3p-56, 0x1.97ba4f738affap-115,
     0x1.cca2e8bcdad61p-127, 0x1.af60a02391564p-368, 0x1.83c9c9f7275d4p-353, 0.0,
     0x1.305520af2bba7p-141, 0.0, 0.0, 0x1.15ca702b86f19p-653, 0.0,
     0x1.e78a959bc95ffp-462, 0.0, 0.0, 0.0, 0.0, 0x1.0b976b60b4882p-117,
     0x1.d10b3c0bee6edp-976, 0.0, 0.0, 0.0, 0.0, 0x1.70bc67d2baf68p-70,
     0x1.8d173860c368dp-59, 0x1.27d7d6a86c7bp-479, 0.0, 0x1.cb6667318476dp-911,
     0x1.ab301e1c174dbp-486, 0x1.f29c1710727f1p-894, 0x1.32ec22084b35dp-280, 0.0, 0.0,
     0.0, 0x1.4acfcedc24d18p-279, 0x1.1c2328de59d41p-907, 0x1.c9830babf1684p-27,
     0x1.2fdfc242534cap-521, 0.0, 0x1.91a49873f4734p-137, 0x1.484f6507a25d1p-61, 0.0,
     0x1.c5e50c37156fp-455, 0.0, 0x1.3e785f758ad6bp-624, 0x1.d0e539ed229fap-4, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7b730586234e3p-663, 0x1.ea87b0fd31b2p-512,
     0x1.4ba93d0e1cf06p-360, 0x1.e7ff2693c5d6ap-12, 0.0, 0x1.2e7642b10e35dp-795, 0.0,
     0x1.f9c5a550e61bdp-839, 0x1.c7d429e59d35cp-819, 0.0, 0x1.8747cd643f91fp-83, 0.0,
     0.0, 0.0, 0.0, 0x1.598718b2e59acp-841, 0x1.f3601b6a4454bp-792,
     0x1.afffb51d4865dp-998, 0x1.425ed2ac9fbc3p-332, 0.0, 0.0, 0.0, 0.0,
     0x1.5b8802003ae17p-89, 0.0, 0.0, 0.0, 0x1.eafaa06bb53d6p-341, 0.0,
     0x1.4ce85c6c5eb14p-73, 0.0, 0.0, 0.0, 0x1.580350faacec1p-314, 0.0, 0.0, 0.0, 0.0,
     0x1.8b2a2a0d85366p-486, 0.0, 0x1.d5c649fda26dcp-1010, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ad7a8b08a85e8p-824, 0x1.2138369b0b0b5p-493, 0.0, 0x1.8568cd01256f6p-326, 0.0,
     0.0, 0x1.591157c299829p-193, 0x1.58b1ef04b15b5p-519, 0x1.b7f3db19dc5e4p-475, 0.0,
     0.0, 0.0, 0x1.3778eb7371b6fp-882, 0x1.b5480445e2p-688, 0.0, 0.0,
     0x1.20190bb2fc458p-10, 0.0, 0.0, 0.0, 0.0, 0x1.ebadcc891e669p-641, 0.0,
     0x1.768302d49a77bp-50, 0x1.90b3481fdd0c8p-676, 0.0, 0.0, 0x1.1cfcebf5cf7fap-450,
     0.0, 0.0, 0x1.6d1b3fd2c22e7p-1009, 0.0, 0.0, 0x1.0edbd4557efdap-80,
     0x1.b679d0ceaa1e1p-183, 0x1.2ca5737fbbba3p-389, 0.0, 0.0, 0.0,
     0x1.c635dcbab33p-702, 0x1.aeec02700be4ap-260, 0x1.1775d47e67fcap-803, 0.0,
     0x1.0392a1463189ep-447, 0.0, 0x1.0ee4734ee4719p-499, 0.0, 0x1.0fc562c3e7e6ep-938,
     0x1.9c13e9896f269p-910, 0x1.f249d87edf03fp-580, 0.0, 0x1.a4419f023eeefp-847,
     0x1.a70eedd276799p-355, 0.0, 0x1.675781eb109a3p-604, 0x1.54a353fc8ffdfp-529, 0.0,
     0x1.76de6e20d708bp-326, 0.0, 0.0, 0x1.7ac5eb264a06cp-741, 0x1.ba18d8b93b572p-308,
     0.0, 0.0, 0x1.395338d605949p-1010, 0.0, 0.0, 0x1.e7eb0d3f26163p-136, 0.0,
     0x1.f8e04cae8046dp-244, 0.0, 0x1.6ce7d53e9906dp-260, 0x1.e6fbfb08ab8d7p-609,
     0x1.6203c83574449p-137, 0x1.765dc6bcb7d72p-72, 0.0, 0.0, 0.0,
     0x1.0febc3b7a5016p-931, 0x1.a9aa0b65eeec1p-129, 0x1.54aa3fd9a9192p-168,
     0x1.902a353402902p-271, 0.0, 0x1.c3129af08c6b7p-248, 0.0, 0.0,
     0x1.38a7879983b73p-222, 0x1.5378676bab80bp-932, 0x1.b8212c9f2ce8p-235,
     0x1.674501c0e5844p-259, 0.0, 0.0, 0.0, 0x1.82b580b336ff4p-669,
     0x1.603110511c7b3p-60, 0x1.4320e487902dcp-424, 0.0, 0x1.006fd44095f16p-418, 0.0,
     0.0, 0.0, 0.0, 0x1.4383bab562115p-700, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4cc94dff285b9p-699, 0x1.f0f60d6aa595bp-918, 0.0, 0x1.dddb0a1d19497p-485,
     0x1.cb850d99e357ep-171, 0x1.866455d16e8efp-549, 0x1.e8c6a99c8b95ap-340,
     0x1.2178effe894cbp-731, 0.0, 0.0, 0x1.140a459709b1ap-747, 0.0,
     0x1.391f038eb8d4ap-501, 0.0, 0.0, 0.0, 0.0, 0x1.93599977ef992p-296,
     0x1.2c037f2a5cedep-585, 0x1.3d71a921f0172p-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4fd4476de559p-369, 0x1.401a41ca01ba2p-626, 0x1.0371bdb8b1478p-863,
     0x1.9b280f3e75eaep-740, 0.0, 0x1.9c1cdcaa6c64dp-560, 0x1.857e1b56ee7c6p-252,
     0x1.b4f310911e84ep-967, 0x1.74b0003634985p-44, 0.0, 0x1.c5988aede3a53p-863, 0.0,
     0.0, 0x1.717cb6c0d6c2bp-858, 0.0, 0x1.e22c31bd6ee23p-625, 0.0,
     0x1.afc88bdaeb9ffp-909, 0x1.a394eb7215843p-865, 0x1.24cda5423711ep-281,
     0x1.ab356671ebe24p-449, 0x1.aac88f332464ap-409, 0.0, 0.0, 0x1.1a8852a8085p-654,
     0x1.5ac45b0d0460ap-311, 0x1.9f69cd6f359f8p-695, 0.0, 0.0, 0x1.fafd5522caec5p-65,
     0.0, 0x1.5dac87d47965dp-942, 0.0, 0x1.ee192a53b7324p-1016,
     0x1.085e213b29ba1p-590, 0x1.47e137992f1b6p-445, 0x1.0ef341ddae427p-328, 0.0, 0.0,
     0x1.34dc017a32708p-368, 0.0, 0x1.2a9a37929f547p-1000, 0x1.7eb51e03ac6a7p-854,
     0.0, 0x1.52eeacf418d8cp-175, 0.0, 0x1.5ceee906be1e3p-990, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1b9eca903cb35p-863, 0.0, 0.0, 0x1.96489b9945db7p-829,
     0x1.6e90550247a96p-392, 0x1.37bed65c36899p-771, 0x1.2531566880fd2p-827,
     0x1.06a75e16591b7p-554, 0x1.c6ca502c4ffcp-489, 0x1.5e59355fd26a8p-967, 0.0, 0.0,
     0.0, 0.0, 0x1.ab3345408f338p-293, 0.0, 0.0, 0x1.9a048875d672ep-591,
     0x1.4232e3bcc254ap-505, 0x1.5e50800c3e05ap-782, 0x1.234225c419c4fp-498, 0.0,
     0x1.274894c758aa8p-895, 0x1.e2e62b549eb55p-63, 0x1.5b6297ed75b06p-813,
     0x1.fc3048fec41c8p-183, 0x1.4117006fe54d3p-306, 0x1.56d613f2864acp-857,
     0x1.25ba8f54f634fp-676, 0.0, 0.0, 0x1.0e5a3f475951cp-689, 0x1.04f94640aef14p-72,
     0x1.ff24168ff0711p-583, 0.0, 0x1.4227725e7d057p-761, 0.0, 0.0, 0.0,
     0x1.cd667d9c1f896p-287, 0x1.7cb8268f9cd7dp-201, 0.0, 0.0, 0x1.092d58a7dafd3p-22,
     0.0, 0.0, 0.0, 0x1.a353b5f36b528p-563, 0x1.5ca3bf136f467p-746,
     0x1.fdc5351f5acf2p-451, 0.0, 0x1.26f220024247ep-56, 0x1.84e8710316fd2p-330, 0.0,
     0.0, 0x1.0f891a8ca0b54p-141, 0.0, 0x1.23c249314734ap-691, 0.0, 0.0, 0.0, 0.0,
     0x1.8c45cf710a715p-892, 0.0, 0.0, 0x1.e4a453ec9e57ep-1021, 0.0, 0.0,
     0x1.13cbbcf53d8c5p-261, 0x1.20eb320f8a243p-96, 0.0, 0.0, 0x1.85c1f29727463p-88,
     0.0, 0x1.fa60953e64cf2p-264, 0.0, 0.0, 0x1.5e88ab54e6681p-560,
     0x1.5b589acbe4c09p-635, 0.0, 0x1.c6c073b7271f3p-755, 0.0, 0x1.ef477ad023d3ep-471,
     0.0, 0x1.51f05c3334821p-803, 0x1.1537fdcb56deap-493, 0x1.fc1b2be6deefdp-682, 0.0,
     0.0, 0x1.1ff13bf1b9512p-63, 0.0, 0.0, 0.0, 0x1.cfc31251abf72p-486, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b996942d3ecep-88, 0.0, 0.0, 0.0, 0x1.cfae5f483c935p-966,
     0x1.32983a082046bp-244, 0x1.de94aa9b9d753p-534, 0.0, 0.0, 0.0,
     0x1.e812fff619227p-589, 0.0, 0x1.6bf66d94eddc5p-944, 0.0, 0.0,
     0x1.a5797306f2a6ep-441, 0.0, 0x1.3a2f39fd2ff26p-275, 0x1.5cb379284da37p-482,
     0x1.c7c1268015f48p-236, 0.0, 0.0, 0.0, 0x1.ee62c04e402d5p-381,
     0x1.837dec4dd41f1p-605, 0.0, 0x1.02137b2d8ea85p-409, 0.0, 0x1.a0be95ecd396ep-359,
     0x1.3593a4dd25654p-989, 0.0, 0.0, 0.0, 0.0, 0x1.c8a11da4dd739p-616, 0.0, 0.0,
     0.0, 0x1.7e4009c5f0179p-33, 0x1.236820fec23d3p-562, 0x1.771f0bbaa2b9p-873, 0.0,
     0.0, 0.0, 0.0, 0x1.503bbb68ab9d2p-138, 0x1.ea6bbc36480b3p-577,
     0x1.d2e23757719d3p-37, 0.0, 0x1.4939a3ae80becp-587, 0x1.bb0bab64a84f2p-357, 0.0,
     0x1.413068ae41f37p-728, 0.0, 0x1.7122b43c1c97p-511, 0.0, 0.0,
     0x1.aa7feb7916bd1p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a15efaf5613bp-149,
     0.0, 0x1.172a41f02bbp-956, 0.0, 0.0, 0.0, 0.0, 0x1.f0800aaea8404p-443, 0.0,
     0x1.36ef115d77fadp-429, 0x1.014e14d5dac43p-172, 0.0, 0.0, 0.0, 0.0,
     0x1.8a262fc8cdc69p-708, 0x1.2fa2026b127fep-713, 0.0, 0x1.ca417922bc2dcp-173, 0.0,
     0x1.8d7268bdb2709p-401, 0.0, 0.0, 0x1.0dea9538e3f22p-410, 0x1.9abde60c95b5ep-14,
     0x1.1232ae1664514p-471, 0.0, 0x1.17a96829ebd65p-647, 0x1.e0afc8cde96bfp-45, 0.0,
     0.0, 0.0, 0x1.4680bf274a0bap-745, 0.0, 0x1.32ed510b949e6p-58, 0.0, 0.0, 0.0, 0.0,
     0x1.a6d3f1116d51cp-1016, 0.0, 0x1.a201f2865f3dfp-241, 0x1.d4a9d07f2e444p-407,
     0.0, 0.0, 0.0, 0x1.ed354dc75e5c8p-400, 0x1.9c51cdd1afa25p-502,
     0x1.3d98011b3bea4p-468, 0.0, 0x1.f4347b8d3ce22p-574, 0.0, 0x1.cc94ffc980ac3p-135,
     0x1.b2547834fe736p-828, 0.0, 0.0, 0x1.9c4e752af8491p-977, 0x1.bc833f94c042p-287,
     0x1.3c12a0118fc2fp-987, 0.0, 0x1.248f8bf8b15cbp-772, 0x1.1f2bb53635b1fp-459,
     0x1.ff54141f76a18p-272, 0x1.d0258bf0e34f6p-990, 0x1.ff9f185ac68dap-247,
     0x1.c4b6ce2579783p-26, 0x1.4f7973a31c54bp-508, 0.0, 0.0, 0x1.87a2956bd9fb1p-796,
     0x1.25fa3e65ce21fp-416, 0x1.f4aa2563d8489p-558, 0x1.1a4323290941bp-604, 0.0, 0.0,
     0x1.763dfad743cb3p-630, 0x1.e58e95a0920f8p-203, 0.0, 0x1.e48e71d8ebf7dp-279,
     0x1.005acbe9bb3d2p-954, 0.0, 0.0, 0.0, 0.0, 0x1.bccfcbca9e59p-403, 0.0,
     0x1.85d80678aa2b8p-548, 0x1.ed4ee89370071p-70, 0x1.cdbea709d8627p-316, 0.0, 0.0,
     0x1.c78ebb808b05p-576, 0.0, 0x1.e0445e04218e4p-271, 0.0, 0x1.f8fc05eb6a7e4p-120,
     0.0, 0.0, 0x1.9d697dcabf979p-53, 0x1.921f238547578p-990, 0.0,
     0x1.cdbb9112c1697p-70, 0x1.46beb24d34ec3p-261, 0x1.e624478525839p-957, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.50230ffdd3353p-713, 0x1.ce5b6cbcc5b5p-615,
     0x1.471002c1c0c0fp-9, 0x1.6ef13676c160cp-570, 0x1.4b39c5a2f53a9p-999,
     0x1.4185f2d7faa29p-500, 0x1.89ac9c2150065p-427, 0.0, 0x1.e24bd61ad3a8bp-207, 0.0,
     0.0, 0x1.290992d176a4dp-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6e985a1dabfa1p-405, 0.0, 0x1.7d90c0a1f4ba2p-486, 0x1.ddc3645ba5059p-702, 0.0,
     0x1.f46080110088dp-358, 0.0, 0x1.6410604acdc92p-86, 0x1.9e4509ae4c3c2p-777,
     0x1.ac65a6c08b31bp-988, 0.0, 0x1.af69b0d0db5c9p-227, 0.0, 0x1.2d20f09aeb766p-669,
     0.0, 0.0, 0x1.54dbbb92b0402p-965, 0.0, 0x1.4e7ff9557275ep-275, 0.0,
     0x1.98fb6692d66cdp-820, 0.0, 0.0, 0x1.188a8640d5515p-106,
     0x1.e5a7616bd12d2p-1000, 0.0, 0x1.d769eadc420b8p-67, 0x1.d0532f293b316p-588,
     0x1.5691dfef6b042p-1022, 0x1.326d040bb6952p-893, 0x1.cdc934ed8ae52p-369,
     0x1.f534574ffd4b6p-119, 0.0, 0x1.e061dec6745e3p-767, 0x1.d455f7e7fcd85p-984,
     0x1.3d71f5a40d7fdp-762, 0x1.36cd9a7a806c1p-213, 0.0, 0.0, 0.0,
     0x1.6fa6ab0ddcf18p-181, 0.0, 0.0, 0x1.dbdcc3b76e44ap-808, 0.0, 0.0, 0.0,
     0x1.98b2b1dc81f89p-415, 0x1.2a330d374105bp-422, 0x1.2a66cb4cb58c9p-938,
     0x1.0b5f04c505232p-454, 0x1.b1405b2d683cdp-737, 0.0, 0x1.b6e4fdb0067dbp-676,
     0x1.ad3e114fe1385p-44, 0.0, 0.0, 0x1.4e7523f28ba39p-871, 0.0, 0.0,
     0x1.2ca135281cbcp-391, 0x1.1ed2df1ab67fdp-742, 0x1.0dcc0e30e1a18p-843,
     0x1.8c4ef5767fa9bp-131, 0x1.f3196f5dcd4aap-229, 0.0, 0x1.f7bdd8e553e4cp-694,
     0x1.d77f8923f601ep-348, 0.0, 0.0, 0.0, 0x1.41935e9aa9887p-937,
     0x1.684ab7962510ep-949, 0x1.385f7ade994b6p-114, 0.0, 0x1.32e38a95e4a5bp-440, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ed787d45cec91p-337, 0.0, 0.0, 0.0,
     0x1.848dd55e04ab2p-466, 0x1.c917868dd409dp-8, 0x1.94fc393833b26p-134,
     0x1.175e4ca42bb95p-745, 0x1.05c43b4f5f7f2p-109, 0.0, 0.0, 0x1.fe7662415e525p-14,
     0.0, 0.0, 0x1.e2836bafc1da1p-183, 0.0, 0.0, 0.0, 0x1.ae198623034f3p-532, 0.0,
     0.0, 0x1.812cd6b1d704dp-894, 0x1.2f7c8f2ebd6a7p-50, 0.0, 0x1.3f526ae9d4cb7p-140,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe1dec9e551a2p-267,
     0x1.7ed2167b21a6fp-975, 0.0, 0x1.ede9b1626ee4p-145, 0x1.b31c901dccbfap-330, 0.0,
     0x1.4ea318d55a997p-251, 0x1.398ee56fa9846p-226, 0x1.1b8b353f10817p-297, 0.0, 0.0,
     0x1.c422a0ef42a7ep-814, 0.0, 0x1.25c49209be119p-342, 0x1.3676a01a0dff6p-627,
     0x1.325e3057d0504p-84, 0x1.1a8a07236e03p-929, 0x1.ddfdb08cd4265p-359, 0.0,
     0x1.002a1ac2bb513p-436, 0.0, 0x1.a47e78d1d0697p-1022, 0.0,
     0x1.fd1ed3b6ffeafp-380, 0.0, 0x1.f096c2eaa8666p-254, 0x1.a38a464cac01ap-187, 0.0,
     0x1.33a16e4af9bbep-346, 0.0, 0x1.8b91a9cc0ccb4p-908, 0.0, 0.0,
     0x1.6585791477a85p-203, 0.0, 0.0, 0x1.ecba801b3c851p-113, 0x1.4979d7065ef46p-694,
     0x1.a7213cca0b55fp-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f10289c2aae11p-477,
     0x1.680d9d9320434p-432, 0x1.b0656678a8de3p-520, 0x1.0497162fe8f5dp-746,
     0x1.669b945439db6p-599, 0x1.03cbf89bf794cp-8, 0.0, 0.0, 0.0,
     0x1.4a9a5ae19a60ap-493, 0x1.7ea1800e5024cp-804, 0x1.690ee5303bbc3p-74,
     0x1.271735b3e1199p-909, 0x1.339b4a4e1f52ap-107, 0x1.afc90de69fc21p-34,
     0x1.89b9378504e18p-95, 0.0, 0.0, 0x1.272683abfe6a3p-630, 0.0,
     0x1.d298a1d6fd4a7p-933, 0.0, 0.0, 0.0, 0.0, 0x1.0f8655bdbb5c3p-967, 0.0,
     0x1.a04ff16e8dcbp-455, 0x1.ebeab14f9fccfp-267, 0.0, 0x1.84c8b084b920dp-921, 0.0,
     0x1.69662c9bb803cp-667, 0.0, 0.0, 0.0, 0.0, 0x1.95bc07409ab22p-651,
     0x1.10972ad2cfd16p-295, 0.0, 0.0, 0.0, 0x1.22dd534b1d96bp-657, 0.0,
     0x1.ed9af308822bep-91, 0x1.c5a0cedcd4803p-815, 0x1.6ec33a37a0276p-217,
     0x1.44005633b9ccp-490, 0.0, 0x1.1c83b6032d916p-824, 0.0, 0x1.90fb89b6630efp-953,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdeb91219490bp-935, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1c81c0b594b8p-230, 0.0, 0x1.2d1b569f8da94p-1010, 0x1.507496659672dp-194,
     0.0, 0.0, 0x1.8d844da42cbcap-770, 0x1.412c97568797bp-581, 0x1.dfa073dd31d19p-315,
     0.0, 0.0, 0.0, 0x1.c1a9cd8887d76p-784, 0x1.372bbffd0a60bp-237, 0.0, 0.0,
     0x1.04139a4e79ad2p-395, 0x1.041d6b12a2c83p-822, 0x1.4f9301b0a14cp-105, 0.0,
     0x1.cb24900bd17bap-337, 0x1.e50308d6b3ee6p-644, 0.0, 0x1.ebf2797dfefdp-146, 0.0,
     0x1.9679127cb9a55p-918, 0x1.be5a192816c25p-487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddbeaf9e7b8b3p-831, 0x1.b286b8b33d709p-968, 0x1.895f8bcaa0846p-318, 0.0,
     0x1.6b3e22363828cp-956, 0x1.75839351a096dp-171, 0x1.61ef00f65a75bp-239, 0.0,
     0x1.5759e3ba363dbp-686, 0.0, 0x1.bb4a2bd018bdap-93, 0x1.fcece5041be59p-411,
     0x1.738f8deb8b402p-839, 0.0, 0x1.73106942bb363p-236, 0x1.911f4e98b8899p-343, 0.0,
     0x1.5a47b9a53b61p-138, 0.0, 0x1.80af40bbd107dp-698, 0x1.ac14bcb3622fp-547,
     0x1.28261bf9c1e6dp-610, 0x1.2fe21433ea653p-715, 0x1.e139b2b4e3ec3p-533,
     0x1.f59f9fcfece9p-456, 0x1.ac885b6963d84p-26, 0.0, 0x1.aeb4b6ebdbfccp-929,
     0x1.0f5e9f186c318p-589, 0.0, 0x1.396fa55ca49cp-987, 0.0, 0x1.d4fb7aef6678dp-1017,
     0x1.ad82efd91c777p-58, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d838b14c854fap-944,
     0x1.4872705c32927p-896, 0x1.c22b93342c429p-578, 0x1.ba3eb3b266e02p-59,
     0x1.ebc8cdfd4318bp-918, 0.0, 0.0, 0.0, 0.0, 0x1.16bccaecc25dbp-577, 0.0, 0.0,
     0.0, 0x1.ac771007275c5p-185, 0x1.a7416590d5487p-879, 0x1.7a82757c074fep-840, 0.0,
     0.0, 0x1.7c9de513a695cp-957, 0x1.371aa0342fa31p-852, 0x1.c25da5fd19df6p-134, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b514b922b17d2p-583, 0x1.8ef7a54e5a896p-125, 0.0, 0.0,
     0.0, 0x1.735d63a5fb084p-250, 0.0, 0x1.7d39648cdd7a2p-568, 0x1.8f07f7180abbfp-233,
     0.0, 0.0, 0.0, 0.0, 0x1.ce74378c6c6d3p-571, 0.0, 0.0, 0.0,
     0x1.b6ef35f9832efp-651, 0.0, 0x1.c14df3420b89dp-25, 0x1.5ac48943a604p-408, 0.0,
     0.0, 0x1.34989eeed3de1p-830
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
            tmp1 = Sleef_finz_tanhd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_tanhd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tanhd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
