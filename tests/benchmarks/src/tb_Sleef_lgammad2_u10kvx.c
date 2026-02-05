/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammad2_u10kvx.c --function Sleef_lgammad2_u10kvx \
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
     0.0, 0.0, 0x1.8712c392f8009p-1006, 0x1.27db8d41d9c89p-104,
     0x1.217818800bbe1p-738, 0.0, 0x1.d94a2ff3678ddp-27, 0x1.ee5713e01147dp-808,
     0x1.f9e5765d9ff06p-897, 0x1.a039740c3c7b5p-1, 0.0, 0x1.8af952606ba61p-774, 0.0,
     0x1.d7578de9dd589p-604, 0.0, 0x1.d1f42d8dac415p-835, 0x1.641f68da9360ap-630,
     0x1.85f4d7b5a0a47p-527, 0.0, 0.0, 0.0, 0.0, 0x1.246446a1f90e4p-789,
     0x1.11dcf1e82c95cp-333, 0.0, 0.0, 0.0, 0.0, 0x1.d4e2496e46c5ep-582,
     0x1.6928182691076p-644, 0x1.5b0767a5b1054p-747, 0.0, 0.0, 0x1.e8d0f86426ae1p-594,
     0.0, 0x1.dda61e4aaee6ep-781, 0.0, 0.0, 0x1.36abd18d6684bp-955,
     0x1.e85c597f3964dp-889, 0.0, 0x1.5f9280d388966p-915, 0.0, 0x1.625e446710d5fp-737,
     0.0, 0x1.02f30df61c4f8p-200, 0x1.bd343b7ef95dap-713, 0x1.b5dca0b337673p-767, 0.0,
     0x1.bae84fcf0b556p-146, 0x1.cf3ff0104086cp-178, 0x1.166f960fe66bap-367, 0.0,
     0x1.3051e52e780a7p-378, 0x1.2084e13b91178p-953, 0x1.11c168b93c0a6p-1022, 0.0,
     0x1.b585fbee65643p-266, 0x1.755fad5bb69c5p-60, 0.0, 0.0, 0.0,
     0x1.9744c84c32a02p-935, 0x1.45586cea6a17cp-825, 0.0, 0x1.43bbe37e651f6p-882, 0.0,
     0x1.26d4406b4b40ep-574, 0.0, 0x1.2b893bb2e4aaap-994, 0x1.25cf601ae09c6p-172, 0.0,
     0x1.7067b729a243ep-416, 0.0, 0.0, 0.0, 0.0, 0x1.61c2e06aba7b7p-368,
     0x1.8a7706290b4fcp-785, 0x1.96d628b8f111bp-506, 0x1.701a999411d21p-75,
     0x1.37ad265f58782p-863, 0x1.f154912ad0104p-857, 0.0, 0x1.ac8bf1fa99a69p-140,
     0x1.b0d5b91f6844p-31, 0.0, 0.0, 0x1.76dc35ec67573p-69, 0.0, 0.0, 0.0,
     0x1.08fb46e97679ep-345, 0x1.f10a7b3223dbp-1007, 0x1.f59f56a289251p-325,
     0x1.2f13a2d09fbcep-473, 0.0, 0.0, 0x1.0e8c03cdfd0abp-746, 0x1.97b95ce024a1ap-62,
     0.0, 0x1.a9be08fda7646p-793, 0x1.3a010171fcccfp-549, 0x1.86f5e60b917ep-940, 0.0,
     0x1.e7faa74bd5b16p-780, 0.0, 0.0, 0x1.3caad4b2132bbp-449, 0.0,
     0x1.23634e29737c4p-134, 0.0, 0x1.f52e93b8d5d6dp-665, 0x1.600f05b892f65p-416, 0.0,
     0x1.f5e7e0f4f69d5p-253, 0.0, 0x1.d2d63895c0975p-689, 0.0, 0.0, 0.0,
     0x1.a4cf740e38ec5p-547, 0.0, 0x1.982fdb2be249ep-281, 0x1.c8577a59f39f3p-751,
     0x1.7da2d7c8077bdp-507, 0.0, 0x1.318abf36463f3p-481, 0x1.3f0698c445d59p-494, 0.0,
     0x1.a443cff53928p-745, 0.0, 0.0, 0.0, 0.0, 0x1.c572286a5fae6p-1005,
     0x1.ec2640a68334ep-524, 0x1.3fe8af5e139b4p-915, 0.0, 0x1.c99a7654aaff2p-352, 0.0,
     0x1.e44f67dda9708p-795, 0x1.b65259bfa655p-329, 0x1.a16ba309532e4p-730,
     0x1.1a26ba509273dp-306, 0.0, 0.0, 0.0, 0x1.586d533178e17p-95, 0.0, 0.0,
     0x1.6766fc1fef41bp-14, 0.0, 0.0, 0x1.76e43e704a351p-816, 0.0,
     0x1.b4b834287ec8p-433, 0x1.c0c1a6c7b9e86p-324, 0.0, 0x1.2974a53baa909p-527, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b538c797311bp-320, 0x1.d1c1ee9898cbep-179, 0.0,
     0x1.3a0e44a190631p-342, 0x1.26cd9e0fa09fap-423, 0x1.98f7a046e9215p-628,
     0x1.4da0c2ba153ffp-823, 0x1.9f042bb1e4eafp-998, 0x1.f874eb0e3bd8cp-584, 0.0, 0.0,
     0.0, 0.0, 0x1.4cf9e9173637dp-823, 0x1.d03544366c538p-623, 0.0, 0.0, 0.0,
     0x1.2533c59549025p-815, 0x1.f6f23f083b69ap-144, 0.0, 0x1.e7d2deea41e48p-995, 0.0,
     0x1.d32688b36cc32p-343, 0x1.c26cd9069cf75p-770, 0x1.0ed52fe24cc11p-689, 0.0,
     0x1.4652be8dc7669p-951, 0x1.8d242470b156p-952, 0x1.6cdb500ca2f53p-818,
     0x1.f8b3e8244ea67p-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce049412d21bdp-618, 0.0, 0x1.07b1220b78e38p-737, 0x1.1e05c162584bep-439,
     0x1.653fa0dd4e3e9p-1005, 0.0, 0x1.7810816fbd92ep-536, 0.0,
     0x1.e8897a9d29cccp-396, 0x1.185b449e6cdffp-678, 0.0, 0.0, 0.0,
     0x1.dfeae7117def7p-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f228ab9f7b836p-236, 0.0,
     0x1.1c5a173e987f8p-536, 0.0, 0.0, 0.0, 0x1.ac7c2f7c020c9p-515,
     0x1.6b1a224b6592ep-471, 0.0, 0.0, 0.0, 0x1.d972edaef226bp-569,
     0x1.fae07844e4d37p-414, 0.0, 0.0, 0x1.af87d1251a0afp-71, 0.0, 0.0, 0.0,
     0x1.9f9c829765a27p-615, 0x1.d58f0d4bc75c8p-831, 0.0, 0x1.c3424359f20e7p-672,
     0x1.4fe75fb5f9f7p-305, 0x1.e2683a4c967adp-853, 0.0, 0.0, 0.0,
     0x1.9f53d68299715p-954, 0.0, 0x1.683c35aa7837ep-180, 0.0, 0x1.21eecab17e6fdp-489,
     0x1.54847e87c2c76p-179, 0x1.bc5d46c33d557p-471, 0x1.4f667a59d039p-314, 0.0,
     0x1.f5206c324a264p-894, 0.0, 0x1.7418145e6aa0bp-904, 0x1.93fc311184946p-131,
     0x1.971ca2436ab53p-999, 0x1.205ebef1489dap-788, 0x1.aea589522468p-882, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.34aa9432ff0c1p-427, 0x1.2551dd9927727p-188, 0.0,
     0x1.93719a8f969efp-146, 0x1.733afd2c65886p-65, 0.0, 0x1.2efbff3b7d99cp-694,
     0x1.6b0b3fd782272p-656, 0x1.d7a10a5e114dep-316, 0.0, 0.0, 0x1.51677cb14844dp-780,
     0x1.f459bad3de196p-527, 0x1.e270ce614d4c4p-101, 0.0, 0.0, 0.0, 0.0,
     0x1.0ed4bfab79982p-31, 0x1.1db55f8904e01p-567, 0x1.a32f0262a5a5fp-245, 0.0,
     0x1.24b36ef9c8e48p-647, 0x1.2622ae6b45ce7p-950, 0.0, 0.0, 0.0, 0.0,
     0x1.f3267066eaf03p-839, 0x1.e1a92562dc53ep-412, 0x1.59d08531ce98bp-829,
     0x1.5c44de2a663fap-182, 0.0, 0.0, 0x1.ada03b02019c3p-470, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e1640f9fa31dap-80, 0.0, 0x1.5455cf87e7d79p-422, 0.0, 0.0, 0.0,
     0x1.35e0e3518389fp-134, 0x1.246c96b9c93e1p-963, 0x1.8934f32d04be9p-269,
     0x1.a390efd1d3775p-184, 0.0, 0.0, 0x1.96161c0e7e526p-529, 0.0,
     0x1.08c65dfdbb31ep-451, 0.0, 0.0, 0.0, 0x1.a2190376a62c5p-363, 0.0,
     0x1.8590e3c2d657cp-639, 0x1.10af0ea031e6bp-644, 0.0, 0.0, 0.0,
     0x1.f0e8b1eb65111p-610, 0.0, 0x1.04792ca194c64p-791, 0x1.df31a4189ce6cp-381,
     0x1.2424cb297451ap-956, 0.0, 0.0, 0.0, 0x1.eaaed17679c2dp-975, 0.0, 0.0, 0.0,
     0.0, 0x1.b2f7e1810285ap-463, 0.0, 0.0, 0x1.ee462388f0d3ap-299, 0.0,
     0x1.c2ed1dad31a7ap-930, 0x1.4c29788488d18p-781, 0x1.e573c5d7617a6p-339,
     0x1.de23290287f3fp-806, 0x1.066665dd9184cp-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3d6e7d2740b9p-931, 0x1.b07b463d743a1p-798, 0.0, 0x1.0456bae62538cp-343,
     0x1.b8b1c743491bp-807, 0.0, 0.0, 0.0, 0.0, 0x1.097f1d2ecd78p-717, 0.0, 0.0,
     0x1.1b64755fcfa42p-694, 0x1.88676672e480dp-547, 0x1.55969882ef52cp-547,
     0x1.b6e57d6a39454p-378, 0x1.e34666e8fa6f3p-864, 0x1.75e9311906042p-335,
     0x1.25a4eb461dd7ap-943, 0.0, 0x1.e478a96b1469ep-684, 0.0, 0x1.d3489eb2f6593p-46,
     0.0, 0.0, 0.0, 0.0, 0x1.4670b979bd463p-203, 0x1p0, 0.0, 0x1.37cd8e19da522p-770,
     0x1.1b20dd1fa978cp-440, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a84e2a7eb78c2p-344,
     0x1.c404c627c1ed3p-262, 0.0, 0.0, 0.0, 0x1.cecd0f67b106fp-546, 0.0, 0.0, 0.0,
     0.0, 0x1.f4d4b59537646p-221, 0.0, 0.0, 0.0, 0x1.522e98d55ef63p-440, 0.0,
     0x1.fd6b7a383d2b7p-274, 0.0, 0.0, 0.0, 0x1.5c242f81d4a69p-492,
     0x1.850a01851f629p-121, 0x1.b06a708ff2c04p-548, 0x1.4229df219be4fp-633,
     0x1.9b08e16b9a6a1p-392, 0x1.f977125678814p-439, 0.0, 0.0, 0.0, 0.0,
     0x1.1f466abcff50fp-596, 0.0, 0.0, 0.0, 0x1.67642d0f09ffbp-649, 0.0,
     0x1.20f73a5c385ccp-877, 0x1.79b576a7f3844p-67, 0.0, 0.0, 0x1.932d9bc68d86p-349,
     0x1.c66f309881dbcp-516, 0.0, 0x1.e9048cf08105ap-556, 0.0, 0.0, 0.0, 0.0,
     0x1.fe3b6ae6e07dp-686, 0x1.546289c4c9c0dp-228, 0.0, 0.0, 0.0,
     0x1.95e9a38a35198p-137, 0x1.c67280015601dp-834, 0.0, 0.0, 0x1.3936a7d35f765p-332,
     0.0, 0.0, 0x1.1d756b79fd8f4p-263, 0.0, 0.0, 0.0, 0x1.2d376177c5d5dp-657,
     0x1.1309e0ec82de3p-926, 0x1.d42dfa13a386cp-932, 0x1.0ac38409de11ep-765,
     0x1.cd8396912ec5cp-758, 0.0, 0.0, 0.0, 0x1.799b2c1aeea3cp-124, 0.0,
     0x1.301a6113b9544p-982, 0x1.cfad9c698700cp-700, 0.0, 0x1.c84c6a5c1eedp-797, 0.0,
     0.0, 0x1.27236e9037acbp-674, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0199a2c8d1721p-800, 0.0, 0.0, 0.0, 0x1.688714e852405p-139,
     0x1.99855717bf819p-281, 0.0, 0.0, 0.0, 0x1.145b2d4d60d51p-149, 0.0,
     0x1.396b43c38f676p-549, 0x1.f221f02b187bdp-892, 0x1.300c9032c8331p-407,
     0x1.e3020098725a6p-716, 0.0, 0x1.a29d32aa06bd3p-790, 0.0, 0x1.1881583857354p-1,
     0.0, 0x1.29dfec73a6983p-918, 0x1p0, 0x1.13a9fb8f780cap-852, 0x1.e9e2201f08d67p-5,
     0x1.e544d89fc3303p-74, 0x1.055ee0cafed7bp-129, 0x1.bc3eba19f917fp-579,
     0x1.a4bdd7e1c4707p-281, 0x1.adc3077c74db3p-498, 0x1.07ea90cf93932p-811,
     0x1.54fd2f68544bfp-1008, 0.0, 0.0, 0x1.e5a39153371e4p-385, 0x1p0,
     0x1.43d22fcd6c187p-761, 0.0, 0x1.4b3f15465014dp-703, 0x1.7d6fb07569b27p-608,
     0x1.f79111f5df812p-919, 0x1.15d45e227bdcp-541, 0.0, 0x1.bcdaea5e010e5p-18, 0.0,
     0x1.197bc63ce30c9p-971, 0x1.b1c0c4e92d1eap-235, 0.0, 0x1.20296ee7ed498p-669, 0.0,
     0x1.9b1b3ad567c41p-356, 0x1.5d0ef51951574p-890, 0.0, 0x1.0f73ccf596458p-420,
     0x1.86d5d884e6527p-879, 0.0, 0x1.8992c2df168acp-643, 0x1.b8cdc2b5fc98ap-924, 0.0,
     0x1.9aa027e15e4b6p-924, 0x1.dc244762c232cp-389, 0.0, 0.0, 0x1.9f1a6c09fcabep-813,
     0x1.383dcf97f19b2p-640, 0.0, 0x1.794a1f30244dap-27, 0x1.52bdb5b516971p-388, 0.0,
     0x1.5972553b88485p-194, 0.0, 0x1.91fb475365909p-325, 0x1.a0deb801f338ap-977,
     0x1.1f9bb2169fa51p-533, 0.0, 0x1.2230d432a39d9p-481, 0x1.b7a0e35792bd4p-503,
     0x1.9556d98fb22d3p-510, 0x1.13459833ebfd7p-806, 0x1.c4e7e8012d121p-320,
     0x1.29c3dcf202dc5p-749, 0x1.135f35661b826p-606, 0x1.c750bccd742b1p-897,
     0x1.b024b9baa5d34p-469, 0x1.c70746fe546cap-189, 0.0, 0x1.e7c98fd339c0ap-368, 0.0,
     0.0, 0x1.6f331df80d28ap-353, 0x1.6201cf3d350b6p-959, 0x1.c954d95be310cp-484,
     0x1.f54afd75089e3p-518, 0.0, 0x1.57be2793e35d3p-853, 0.0, 0.0, 0.0,
     0x1.aaed5425ed7d3p-244, 0.0, 0.0, 0.0, 0x1.6b45e4f9917e6p-684, 0.0,
     0x1.0cca124e0504bp-207, 0x1.5cea30cfff5cep-719, 0.0, 0x1.4c63a160a343fp-352,
     0x1.2d6e749b1f53cp-987, 0x1.e7efa85d0d58dp-206, 0x1.8d09d134b31d3p-217,
     0x1.9392a8725f67bp-140, 0.0, 0.0, 0.0, 0x1.fd7a4508e3f1ep-420,
     0x1.9647e4ca8c9d5p-750, 0.0, 0.0, 0x1.98b7cd72c1c7cp-734, 0.0, 0.0,
     0x1.3be56e4291372p-114, 0.0, 0.0, 0.0, 0x1.3b6a78c66dbf5p-16, 0.0,
     0x1.ccfeeb1315845p-468, 0x1.ed4fcea3d0ac4p-507, 0x1.ca9fc24872abbp-401, 0.0,
     0x1.45129de351b2p-644, 0.0, 0x1.2f0eaba182ae8p-390, 0.0, 0x1.917211fc6bd75p-48,
     0x1.b92ae9419ea82p-781, 0.0, 0.0, 0.0, 0.0, 0x1.5d2f26652daa8p-613,
     0x1.8cc4ac860c46ap-870, 0.0, 0.0, 0x1.1ac37fa52f232p-51, 0x1.d1d999b858297p-975,
     0x1.4a2adaa43f434p-808, 0x1.b30a1d63382d9p-589, 0x1.3e34125e6abd4p-461, 0.0,
     0x1.95edec13aa4bdp-545, 0x1.b6eb4ceaca4bbp-735, 0.0, 0.0, 0x1.4f9a0b4fbdb34p-983,
     0x1.36f3e70e0c28dp-716, 0x1.b5f8ef455de3cp-106, 0x1.0c49cdb67c659p-687, 0.0, 0.0,
     0x1.bc5128a1a324bp-557, 0x1.e0f2a6c241cc7p-26, 0.0, 0x1.d8b5fabcdda12p-218,
     0x1.0fbb044cb0952p-892, 0x1.9d6c3831b6743p-433, 0x1.cc8fe67abe0ecp-900,
     0x1.b79c255053aeap-763, 0.0, 0x1.98ee1ab62e22fp-963, 0.0, 0x1.4126521dc570dp-375,
     0.0, 0x1.dbce63fd8ecafp-449, 0.0, 0x1.dadb12f09e2fcp-886, 0x1.3e0833b360ce3p-827,
     0x1.df26ac6662093p-905, 0x1.f19b4d9b7507ap-487, 0.0, 0.0, 0x1.68602f5f30a9ep-676,
     0.0, 0x1.fb4a1591a6e4p-485, 0x1.681f71e3a271ep-974, 0x1.f80b6f9cff07cp-696,
     0x1.9e3277e9f51b3p-240, 0.0, 0x1.313aaf0dbdd4bp-169, 0x1.6ab13c5befa4cp-921,
     0x1.d21238623b1f3p-78, 0x1.23a232a05ea6bp-950, 0x1.718c194131018p-243, 0.0,
     0x1.cca2de44b3449p-565, 0x1.04b91dac074e6p-406, 0x1.5a2190a17f144p-731,
     0x1.a21ffc50fbf4ap-100, 0.0, 0x1.0338dd4bc02bcp-592, 0x1.23f71a0bf3459p-682,
     0x1.1237ff808fbfap-650, 0.0, 0.0, 0.0, 0x1.1b948c83d47c6p-407,
     0x1.ec6d33abb5123p-248, 0.0, 0.0, 0.0, 0.0, 0x1.75fa26fcb829cp-1006, 0.0, 0.0,
     0x1.549fd2d724357p-295, 0x1.be7127696d369p-204, 0x1.4ad1719738dc2p-13,
     0x1.eb1b18e32c338p-378, 0.0, 0.0, 0x1.2f531ded06058p-204, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.43b96bb3b697fp-16, 0.0, 0x1.98da1b52d0439p-882, 0.0, 0.0,
     0x1.ffbb78518088p-918, 0.0, 0.0, 0.0, 0x1.9c5a8c35931f1p-781,
     0x1.8dea36a2a0e8ep-864, 0.0, 0x1.60e04a66f42dp-39, 0.0, 0x1.5f273b73afc91p-791,
     0.0, 0.0, 0x1.58ab06e9573afp-835, 0.0, 0x1.79688622127bdp-477, 0.0, 0.0,
     0x1.abcc28c603548p-725, 0.0, 0x1.b663583127983p-855, 0x1.1c3d2304b5cdbp-461, 0.0,
     0.0, 0x1.78ef5090bb08ep-721, 0.0, 0.0, 0.0, 0x1.481a91fa42a5bp-908,
     0x1.457e4c99a7f68p-758, 0.0, 0.0, 0x1.22288cd5ae547p-485, 0.0, 0.0,
     0x1.c05c63ed29fb1p-333, 0.0, 0x1.aaf9eaaeeafd1p-493, 0x1.c9fdd07da4a82p-906,
     0x1.86056b99e375dp-1013, 0x1.35ec07a8ea456p-247, 0x1.2bf04c739006cp-128,
     0x1.672f0866a985ap-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.003537abb36e6p-393,
     0x1.76b038866f32p-178, 0.0, 0.0, 0x1.c89a281e7b73cp-373, 0x1.92d4f78a29a41p-236,
     0.0, 0.0, 0x1.0f8b75a3f7333p-67, 0x1.2e877fa35b9cp-944, 0x1.70c0caf44098cp-977,
     0x1.9eb822acf111ep-669, 0x1.35be67f8289e2p-224, 0x1.ce44c47ead191p-324, 0.0,
     0x1.cc6e5bf77f34cp-233, 0x1.d0f7aaeaf6c6cp-591, 0.0, 0.0, 0x1.28674cf02ec3ap-625,
     0x1.26dbdec9b4c88p-754, 0.0, 0.0, 0.0, 0x1.aa6e481ef2905p-254, 0.0,
     0x1.e3fe1480c8d45p-416, 0x1.65966e685eb58p-434, 0.0, 0x1.50803d2bff1b9p-552, 0.0,
     0x1.7a2a52fc4d378p-14, 0.0, 0x1.ed7f695adad4cp-336, 0.0, 0x1.6448a3726dd5fp-975,
     0x1.0c6c5dc3c0b36p-334, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11fe6a7ede493p-42,
     0x1.2472715f570ddp-289, 0.0, 0.0, 0.0, 0.0, 0x1.864bf8bf9d617p-543,
     0x1.ed60f635fc2ffp-513, 0.0, 0x1.e3dde1ad9473cp-912, 0.0, 0.0,
     0x1.58c16b27469fep-512, 0.0, 0x1.e1994f50f56edp-414, 0x1.c621c9b5c8efbp-383,
     0x1.988741f6bd46ep-540, 0.0, 0.0, 0.0, 0.0, 0x1.3c778146c2f3ep-979,
     0x1.21349d6b63cf5p-584, 0x1.0e419239f944dp-162, 0x1.02736149bf28fp-524, 0.0, 0.0,
     0.0, 0.0, 0x1.ef12a402731cbp-701, 0x1.dea67f256cdd4p-675, 0x1.37fc63bd9a12ep-777,
     0.0, 0x1.59cd50a072523p-980, 0x1.95ef0f512763ep-259, 0x1.d3c3facaa3048p-803, 0.0,
     0x1.a77c2bfd8e711p-96, 0x1.6c97d0c3fc436p-770, 0x1.f24238485d168p-308,
     0x1.eabd3e295af66p-316, 0x1.161cb18af8889p-987, 0.0, 0.0, 0x1.6a5f463dff95p-650,
     0.0, 0.0, 0.0, 0x1.37ebd1564828fp-642, 0x1.55227e137c3c1p-58, 0.0, 0.0,
     0x1.573bc19a75033p-480, 0.0, 0x1.19419fcdae00fp-676, 0x1.a3579e9b5f46cp-239,
     0x1.4a622d10d72c7p-689, 0.0, 0x1.362fccde9da58p-876, 0.0, 0.0,
     0x1.9b189bcd297ddp-108, 0.0, 0x1.132f2fb261d7ep-630, 0.0, 0.0,
     0x1.28eed229c3014p-140, 0.0, 0x1.0e495676940f1p-1009, 0.0,
     0x1.4dcc2da2422e2p-999, 0x1.5f6d194016f41p-517, 0x1.4a5c400e6b66dp-630,
     0x1.000dd184ab594p-984, 0.0, 0x1.a756ecd2c98bap-18, 0x1.aaa6dae545231p-888,
     0x1.d1352a737637bp-719, 0x1.7082f4b9fe31ep-783, 0.0, 0.0, 0.0, 0.0,
     0x1.6866324978abep-14, 0.0, 0.0, 0x1.ee3e5f22a61a6p-303, 0.0, 0.0, 0.0,
     0x1.22c6486be91dp-274, 0.0, 0.0, 0x1.0bffce74a27ebp-457, 0.0, 0.0, 0.0,
     0x1.aaf43da3374abp-442, 0.0, 0x1.71dcfe3faebaap-366, 0x1.2d83734941017p-1010,
     0.0, 0x1.2b86cf2558be2p-45, 0.0, 0x1.d6b9054b30842p-878, 0x1.d0e9460632fa9p-216,
     0x1.40814ca37fc3dp-87, 0.0, 0.0, 0x1.42dc0ac76df2bp-301, 0x1.087ebd5b578a5p-588,
     0.0, 0x1.f55c21549a712p-770, 0x1.638787343491cp-147, 0.0, 0.0,
     0x1.6d1311b0996a5p-295, 0.0, 0.0, 0x1.7a35ae8c6b3aap-752, 0x1.de645551310c2p-609,
     0x1.53b5bc3b5e3edp-218, 0.0, 0.0, 0x1.ef52f1ffb23b2p-135,
     0x1.c48a9d5850663p-1020, 0.0, 0.0, 0.0, 0.0, 0x1.b0a194460f61fp-522, 0.0,
     0x1.1df20a3a50dd7p-116, 0.0, 0.0, 0.0, 0x1.2061ead946c59p-432,
     0x1.9e2722be0d6ddp-838, 0.0, 0.0, 0x1.c5b4e18ebf3d4p-951, 0x1.6fd152a467bb4p-173,
     0x1.991e4096c4f6ap-2, 0.0, 0x1.8a440e2061c9ap-733, 0x1.11fc56dae99c5p-675,
     0x1.83f4cd069347dp-471, 0x1.90d3e5d64826ep-568, 0.0, 0x1.028cc5c8dbe0dp-623,
     0x1.229478f1a12ddp-809, 0x1.383ab63e290e8p-169, 0x1.7cea0cc818947p-322, 0.0,
     0x1.e15cdb82f0dc5p-289, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da5c5f3fdeddap-811, 0.0,
     0.0, 0.0, 0x1.74c947212fd81p-674, 0x1.0183e28f0dcecp-1, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.91e182b80e346p-53, 0x1.a80c4daacea4ap-553, 0.0, 0x1.a2a7f1b2169f6p-158,
     0x1.dcea382726069p-725, 0.0, 0.0, 0.0, 0x1.29aef31dacdb4p-268,
     0x1.70087aa6b01dp-29, 0x1.04bcbc86faaf2p-628, 0.0, 0x1.29f08cd60ac9cp-601,
     0x1.12371c987d426p-313
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
            tmp1 = Sleef_lgammad2_u10kvx(tmp0);
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
    printf("Sleef_lgammad2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_lgammad2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
