/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floord2_avx2128.c --function Sleef_finz_floord2_avx2128 \
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
     0.0, 0.0, 0x1.1c33a03e9f404p-94, 0.0, 0.0, 0x1.a61deb560fb95p-386,
     0x1.eb6ccf5f5e726p-779, 0.0, 0x1.5659872fbe2c3p-244, 0.0, 0x1.f6c33f6aac035p-75,
     0.0, 0x1.6f0b7eb69b35dp-456, 0x1.3eb9d49398b69p-232, 0.0, 0x1.b273f8f1828e1p-557,
     0.0, 0x1.625f625b20dbbp-898, 0.0, 0.0, 0x1.5e0795b7dff46p-58,
     0x1.fb10252dfde79p-249, 0.0, 0x1.4556618eaf214p-262, 0.0, 0.0, 0.0,
     0x1.3c7a9c9a8d98cp-393, 0.0, 0x1.f3b9404f8270dp-540, 0x1.ac1dd7e5e18c3p-971, 0.0,
     0.0, 0x1.412a0098490d2p-517, 0x1.af42885482d07p-342, 0x1.cb53b11efc3dcp-343, 0.0,
     0.0, 0.0, 0x1.e17e38ceb67b6p-518, 0x1.08e30c925b7e1p-973, 0x1.02fa415179239p-353,
     0x1.9fe91db92213ap-720, 0.0, 0x1.8baf7cb741137p-902, 0.0, 0.0,
     0x1.df72c5c13d8bcp-656, 0x1.efbdfece1a122p-417, 0x1.c46956c26c6f3p-848, 0.0, 0.0,
     0x1.78ccdab952448p-445, 0x1.c5f147d16f7e6p-372, 0.0, 0.0, 0.0,
     0x1.689ebe979d8dcp-70, 0.0, 0.0, 0.0, 0.0, 0x1.e18ffe5f7f33ap-17,
     0x1.b6ee4a8211f59p-486, 0.0, 0x1.708b773fe4e4bp-736, 0.0, 0.0, 0.0,
     0x1.aaad573941648p-300, 0x1.318d0ecdd6127p-972, 0.0, 0.0, 0x1.25f686d794d0ap-747,
     0.0, 0.0, 0.0, 0x1.18154f43e532ep-465, 0.0, 0x1.a30a439eaeb91p-123, 0.0, 0.0,
     0x1.7ac22420b971ep-861, 0.0, 0x1.d9a9ee761a5ecp-403, 0.0, 0.0,
     0x1.847f1d12dcd03p-591, 0.0, 0x1.0ee751d01a35fp-459, 0x1.c5a374f827145p-365, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7fc8b315f1fap-292, 0x1.8c1a40c93efc5p-809,
     0x1.1193ae9d17d6bp-1022, 0.0, 0x1.00f28aa9709edp-11, 0x1.7663c55741268p-592,
     0x1.460e0cd06e388p-419, 0.0, 0.0, 0x1.5617dbf691395p-820, 0.0, 0.0,
     0x1.116f2e7d802f6p-380, 0x1.1982869559223p-66, 0x1.98cf5ab746041p-973, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d4c8c5d5484ddp-424, 0x1.1f664f93068e8p-80, 0.0,
     0x1.7cb94f2d59bf2p-595, 0.0, 0.0, 0x1.9ae620f3c215dp-514, 0.0, 0.0, 0.0, 0.0,
     0x1.f1f1c6620c71ap-363, 0x1.07b20a712958ep-140, 0.0, 0.0, 0x1.2e4e46484caaep-722,
     0x1.482afaee6dbf6p-668, 0.0, 0x1.93468ead3774cp-398, 0.0, 0.0, 0.0, 0.0,
     0x1.3f7383c7ff46ap-104, 0.0, 0.0, 0x1.7910116083f01p-471, 0.0, 0.0, 0.0, 0.0,
     0x1.f559624e20047p-168, 0x1.8700ec7823f7ep-96, 0.0, 0x1.25b931d4f3e43p-96,
     0x1.f953f3eef16efp-808, 0x1.7db1cfaf73ccep-759, 0x1.2332c61dcf8e3p-290, 0.0,
     0x1.ae1f03ff05652p-885, 0x1.a58f6667d76efp-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b0ebd339052b9p-899, 0x1.959e9621a331ap-605, 0x1.6c6ae830e11f8p-489,
     0.0, 0x1.726d1a2f46391p-906, 0x1.cfca47ac62166p-337, 0x1.19ed7bb00a58cp-484,
     0x1.8e6e749e6c727p-301, 0x1.083c5ca27b3a4p-147, 0x1.535a2e7b43fd1p-73,
     0x1.0cf33801b3db8p-981, 0.0, 0.0, 0x1.1c3ba3c5577afp-869, 0x1.e997c8aaacfa5p-101,
     0x1.03900cf8ecefap-688, 0.0, 0x1.f0f11ea18fb47p-351, 0.0, 0x1.d458bb2815927p-656,
     0x1.d48770318a053p-1, 0x1.3332411af141cp-638, 0x1.a0d4f27bd7f6p-741, 0.0,
     0x1.7ce4c1aafc35fp-536, 0x1.3cf2dac011aacp-374, 0.0, 0x1.027e975287d8ap-647,
     0x1.f19a8488e2567p-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f24a4cbfc111p-712, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1db893deef1ep-227, 0.0, 0x1.c39f69a86eb56p-348,
     0.0, 0x1.453b55b25e4d2p-797, 0x1.54ed5f7a94951p-773, 0.0, 0x1.d95b517af800ep-198,
     0.0, 0x1.5dec7aeccdfcep-408, 0.0, 0x1.5aba47b291596p-548, 0x1.e94ec6e97532bp-497,
     0x1.eb05c2f8cde4p-420, 0x1.8768dcaa49fbbp-406, 0.0, 0x1.ece3bd8be4359p-729,
     0x1.6e30212090893p-888, 0x1.c83d1327a9bf7p-223, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.37989ec419b1p-664, 0.0, 0.0, 0x1.67c1e240626cdp-26, 0x1.ebde72c1de12ap-240,
     0x1.350422e598829p-952, 0x1.cde795dfad959p-58, 0x1.684eb2f2565ddp-364, 0.0, 0.0,
     0x1.d7981deb0be17p-745, 0.0, 0x1.b8dbd121f77eap-828, 0.0, 0.0, 0.0, 0.0,
     0x1.ff1c58883004bp-396, 0x1.a7af750a72f75p-583, 0x1.7b8aa7dc09ecep-233,
     0x1.cca502e482a18p-280, 0x1.90c7e1473b36fp-59, 0.0, 0x1.e7dd6a16d3402p-1003, 0.0,
     0x1.e7d05bb7a8ae8p-723, 0.0, 0x1.fb68acf626f35p-53, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58ae28044241ep-863, 0x1.cb4909848547fp-157, 0x1.299cb78d1651fp-552, 0.0, 0.0,
     0.0, 0x1.656107cca5292p-77, 0.0, 0x1.df38f7039262dp-365, 0.0,
     0x1.1d3d535c8e155p-59, 0x1.091a07f08b16fp-978, 0.0, 0x1.0214e7a7b9e36p-215, 0.0,
     0x1.cb830ae6c24b1p-894, 0x1.8931459d10253p-913, 0x1.4bdd693b3e94ep-708,
     0x1.884a91da3ea4p-455, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.608158122de06p-894, 0.0,
     0.0, 0x1.15e892b054ef6p-323, 0.0, 0x1.b8e8e365fd7a4p-517, 0x1.c526d7d96b592p-583,
     0x1.5f283789a807dp-791, 0.0, 0x1.eca1b0d91eb19p-87, 0x1.75cf3bc5cfc07p-670,
     0x1.8968c7cd428c8p-444, 0x1.a1e4fa08492d5p-1022, 0.0, 0.0,
     0x1.ce493f91aa926p-702, 0.0, 0.0, 0.0, 0.0, 0x1.c3728789c7408p-860,
     0x1.a10db35b0dab5p-22, 0x1.540e1afe559b1p-215, 0x1.0fc0ab4eac86bp-567,
     0x1.7fd98955380c6p-833, 0x1.cb8c5167d3f55p-406, 0.0, 0x1.3be0c2789754cp-956,
     0x1.f91547d98dbcep-587, 0.0, 0x1.d77666c7a9016p-339, 0x1.ce0611988212cp-68,
     0x1.dbe8ab894006ap-6, 0x1.362863d46b9f7p-25, 0.0, 0x1.b888dc530f4d9p-337,
     0x1.0cd46e4e97138p-937, 0x1.5a960a8ab7648p-414, 0x1.3ac8d7468172dp-408, 0.0,
     0x1.3555e444f0344p-381, 0.0, 0.0, 0x1.877bb77a458d1p-208, 0.0,
     0x1.0fb003c077a3ep-1014, 0x1.963a2254121d1p-557, 0.0, 0x1.297f0674a7991p-245,
     0x1.56c306d90d322p-398, 0x1.ec10cf2ea0372p-903, 0x1.912cd4d85bf54p-677, 0.0, 0.0,
     0x1.17becbc0034f4p-57, 0x1.36dca3f37c6aap-366, 0.0, 0.0, 0x1.141ccc518b5dbp-450,
     0.0, 0.0, 0x1.5dd3a35290dp-793, 0x1.3ef5c15eb2ad3p-5, 0.0,
     0x1.cb95996843b37p-402, 0.0, 0.0, 0x1.198903ec7d1f7p-300, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.db47d34e9ca0ep-86, 0x1.c6dc95bd20f77p-681, 0.0, 0x1.738ddc06b1503p-1010,
     0.0, 0.0, 0x1.23ec757592783p-705, 0x1.0a4c22935836fp-259, 0x1.a73b5ddebc0edp-522,
     0x1.bd1af37507eb3p-310, 0x1.b99d5e3b80377p-599, 0.0, 0x1.f89dde7aba11bp-447,
     0x1.f19b6787307f7p-352, 0.0, 0.0, 0x1.44803faf874b1p-905, 0x1.5d6847be69366p-959,
     0x1.109c1ce498deep-982, 0x1.742d4ec7140d5p-235, 0.0, 0.0, 0x1.e7f9dfa3f0abdp-567,
     0.0, 0x1.606ecfe27913dp-237, 0.0, 0x1.bd7bb50c39b4p-183, 0x1.e175a910ec24ep-786,
     0.0, 0x1.2febc4dd661b4p-298, 0.0, 0x1.9aaedf664e969p-1000, 0.0, 0.0, 0.0,
     0x1.40a81e5a380dcp-868, 0.0, 0x1.53701d68280b6p-95, 0x1.16cf74838594dp-424, 0.0,
     0.0, 0.0, 0x1.97a989b4bc486p-1015, 0x1.da607a7f744dp-942, 0x1.43d06bbe093fep-988,
     0.0, 0x1.b94208757d63ap-254, 0.0, 0x1.3404f4a1d308ep-666, 0.0,
     0x1.2c6250111f84dp-17, 0.0, 0.0, 0x1.9bedbe37f38bap-961, 0.0, 0.0,
     0x1.64cccd8cc8ac4p-627, 0.0, 0x1.22c188ec0496ap-589, 0x1.bbf3a4e2ad3c6p-336,
     0x1.dd65e538b744fp-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf7b4e76874ccp-482,
     0x1.5058ef4cea412p-49, 0x1.5b23c4b3b43d1p-321, 0.0, 0x1.13aa3cb88bc7p-225,
     0x1.0f55de2a29536p-327, 0.0, 0.0, 0.0, 0.0, 0x1.6bc10292d64e9p-678,
     0x1.0d02a3d599e12p-578, 0.0, 0x1.cd4da083b36ap-88, 0x1.88375488d0b4ep-790, 0.0,
     0x1.d7feece9920bep-414, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40cb7a7db8932p-887,
     0.0, 0.0, 0x1.d150d4e5cb468p-195, 0.0, 0.0, 0x1.215a2c28b5149p-258,
     0x1.ad13814d7cdd7p-533, 0x1.0ac100aa93b84p-794, 0x1.26f01e0a8e73ep-725, 0.0, 0.0,
     0.0, 0x1.9bf3238ae379ap-124, 0x1.e101ac0ac390cp-609, 0.0, 0.0,
     0x1.8a8dd7909b2b1p-927, 0x1.709bb8a41e45fp-976, 0.0, 0.0, 0x1.009a0dc362df8p-739,
     0x1.9c5282aa3bb33p-307, 0.0, 0x1.ad17462bb6566p-52, 0x1.75f387fa60a42p-392, 0.0,
     0.0, 0.0, 0x1.2910c4e1e3a62p-859, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.67b3506d60d06p-707, 0x1.561dfb2932b12p-843, 0x1.b51f4aec9d763p-15,
     0x1.3b2b168ab083ap-740, 0x1.07bb07c4afbc1p-42, 0.0, 0.0, 0x1.ca3a92dfc5a0ep-683,
     0x1.fb4ce4a395f93p-120, 0x1.c4bfe80bb0ef5p-359, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40f90beab1efbp-266, 0.0, 0.0, 0x1.9f0af33a2e297p-557, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b5124bd9664a6p-737, 0.0, 0x1.c7a7120f5d2a2p-174, 0.0,
     0x1.1c715d81f6946p-17, 0.0, 0x1.5c3712ca3f722p-444, 0.0, 0x1.0bcd43c10bc44p-456,
     0x1.f3b1591f46a3fp-982, 0.0, 0x1.edfa350d369f2p-638, 0x1.6a159bc9a11b3p-548, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1406c7fe8923ep-630, 0.0, 0.0, 0.0,
     0x1.73b1f5e61b759p-917, 0.0, 0.0, 0.0, 0x1.8fa5a9ff4aaa8p-973, 0.0, 0.0,
     0x1.a85a55fdbd12p-652, 0x1.93fa9aecc5f2cp-867, 0.0, 0.0, 0.0,
     0x1.564792b0fd2cap-818, 0x1.c636adedc51c7p-324, 0x1.f12286c39f437p-1021, 0.0,
     0x1.12791b81dbd64p-963, 0x1.b011a8f526bb8p-743, 0x1.9b36ca20d9d3fp-435, 0.0, 0.0,
     0x1.0fcd7e0eab708p-965, 0.0, 0.0, 0.0, 0x1.3269c4650df15p-951, 0.0, 0.0, 0.0,
     0.0, 0x1.f3b291fbf8dbcp-745, 0x1.06fc055b9adebp-413, 0x1.77e469d366517p-155, 0.0,
     0x1.9d45584dfcc51p-724, 0x1.9da5e6b514e65p-47, 0x1.bb0bde158a334p-571,
     0x1.fd56c280f92bap-627, 0.0, 0.0, 0.0, 0x1.189c43bf6770dp-937, 0.0,
     0x1.896165d27ca5fp-899, 0.0, 0.0, 0x1.e6fe3543fd5a6p-125, 0.0, 0.0, 0.0,
     0x1.3d37cf4c68806p-750, 0x1.15ecaea5e62fdp-225, 0x1.dd01c5c55f8edp-189,
     0x1.051563b7df9d4p-987, 0x1.fc619f98b8dcep-129, 0x1.04d3cca4b557ap-96, 0.0, 0.0,
     0.0, 0x1.a2e89cc035244p-1018, 0x1.c2cca8f1ce593p-290, 0.0,
     0x1.4f17f1b96f65ap-113, 0.0, 0.0, 0.0, 0x1.4be028a1518f5p-453,
     0x1.b4872729e8b57p-588, 0x1.56c07c4829b42p-663, 0x1.d57ae516b2a47p-751, 0.0, 0.0,
     0x1.ae75178d60352p-692, 0x1.91a4268019409p-373, 0.0, 0x1.b926544462702p-261,
     0x1.9213bbcc5020ep-990, 0x1.2fae66fa88ff2p-859, 0x1.4fe19351db442p-975, 0.0,
     0x1.f6c27b775d4ddp-813, 0.0, 0.0, 0x1.3e25715f706a7p-278, 0.0, 0.0, 0.0, 0.0,
     0x1.7160e563f8617p-689, 0x1.29ba346299813p-849, 0x1.4100b7c092506p-544, 0.0, 0.0,
     0.0, 0x1.30f95268b98cp-804, 0x1.347a396143965p-1015, 0.0, 0x1.975b1d24ccd7fp-972,
     0x1.55605f76cb937p-875, 0.0, 0.0, 0x1.666a70c1b60a4p-627, 0x1.31cfd7b89b334p-827,
     0x1.80e249c7f4866p-339, 0.0, 0x1.edf5dbddbd89bp-414, 0.0, 0x1.e2eadf734f1adp-693,
     0.0, 0.0, 0x1.058c2ff13ba88p-835, 0x1.cd1aed6c9100bp-138, 0x1.38e0079150bbap-289,
     0x1.41048c5d032ddp-480, 0x1.f7aebddf286f1p-143, 0x1.54f0461ddc2a6p-785,
     0x1.9a8ff60500ae9p-601, 0x1.3a247de62426ap-152, 0x1.600d4686ac8ap-959, 0.0,
     0x1.3412bc26e1311p-815, 0.0, 0.0, 0x1.f8f53f7afd034p-925, 0.0,
     0x1.badcc163c305fp-243, 0.0, 0x1.c87ead171e945p-150, 0x1.74550150640cbp-120, 0.0,
     0x1.683ea23e2463p-233, 0x1.975ffed57cc8ap-322, 0.0, 0x1.84696acce2d9ep-1009, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cfa5c383071a4p-614, 0x1.0df2f4377f5dbp-109,
     0x1.cc3c6b674dab3p-319, 0.0, 0.0, 0x1.1791618b1aff6p-281, 0x1.fb3a1b80c7f9ep-792,
     0.0, 0.0, 0x1.e1a1816a5099ap-753, 0x1.740f3ebce6c1cp-754, 0.0,
     0x1.9e3bcdb3b2685p-509, 0x1.c8769d311a0afp-871, 0.0, 0x1.550814957124ap-941, 0.0,
     0.0, 0.0, 0.0, 0x1.17a48d20ce6a7p-438, 0x1.1fed69dce1b6ep-143,
     0x1.92705bd9fe5dfp-152, 0x1.ee155e5a230cp-611, 0.0, 0x1.e3f57d58f7dd2p-331, 0.0,
     0x1.e141087668807p-692, 0x1.6d8d4d6cdd7e9p-914, 0.0, 0.0, 0.0, 0.0,
     0x1.d1bd7829617a4p-321, 0.0, 0x1.225faa102fce3p-799, 0.0, 0x1.c913e8829b47cp-284,
     0x1.c89a9eadde1a5p-199, 0x1.ce92e38480085p-928, 0x1.0c870c5cb2784p-196,
     0x1.df9864e00d3f5p-607, 0.0, 0x1.754a870a1a539p-1020, 0.0,
     0x1.7a0faa6391f55p-720, 0x1.701f2038a11a9p-832, 0x1.a25c13c2bec39p-975, 0.0, 0.0,
     0x1.881f2441029cp-586, 0.0, 0.0, 0x1.aee24e32e275ap-865, 0x1.cd2c126fc257ap-278,
     0.0, 0.0, 0.0, 0.0, 0x1.bc8b20977e47p-92, 0.0, 0.0, 0.0, 0x1.2084e0511bc68p-315,
     0.0, 0x1.8775e3c1a0aeap-174, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca49320bb62a6p-839,
     0x1.deb0c3efb2ca8p-533, 0x1.d6af4f6ba28e7p-937, 0x1.e1e11e05c526fp-91,
     0x1.599766a51ae01p-685, 0.0, 0x1.b04f59fffc738p-433, 0x1.751f6d755cbp-686,
     0x1.f314689ec0924p-169, 0x1.af5dde582ae09p-84, 0x1.548289580d391p-977, 0.0,
     0x1.e3272ccf80618p-597, 0.0, 0x1.8ee8aeebd75e5p-915, 0.0, 0.0,
     0x1.1db27b95ef0f3p-472, 0.0, 0.0, 0.0, 0x1.38f5ac4b08989p-253, 0.0,
     0x1.0ea77b374cc16p-439, 0x1.a5ae0156243c1p-38, 0.0, 0x1.58b94ff0a219fp-784,
     0x1.565a70ac4270ap-353, 0.0, 0x1.15a9037c23706p-524, 0.0, 0.0, 0.0, 0.0,
     0x1.14c23698121dbp-937, 0.0, 0.0, 0x1.dca78cc49c61ap-539, 0.0,
     0x1.941f93fcdbfaap-845, 0.0, 0.0, 0x1.8c58cf4503b52p-804, 0x1.e9d3dc500437dp-568,
     0.0, 0.0, 0.0, 0x1.3e7d981811fc4p-958, 0.0, 0.0, 0.0, 0x1.0a2623909c323p-1011,
     0x1.37471bc799854p-492, 0x1.69bb6c0e0b663p-122, 0.0, 0.0, 0x1.5dbb8d530598bp-820,
     0x1.d1a493b12834ep-171, 0x1.8e91cac706d7ep-910, 0.0, 0.0, 0x1.9a720e47019ecp-949,
     0.0, 0x1.4cc9f34f40141p-837, 0.0, 0x1.6a70a36264767p-92, 0x1.5370c2a50b469p-653,
     0x1.735707d6edf8ap-686, 0x1.4201888b2e8a1p-325, 0x1.ad36ef1f69d74p-75,
     0x1.8b7c57ea61a16p-594, 0x1.a6a22e05cb442p-185, 0.0, 0x1.8c3b9cd8f27d9p-1009,
     0.0, 0.0, 0x1.fed5b23a2e39p-139, 0x1.73fe52a2df5f5p-341, 0x1.5e6b0297da7c4p-310,
     0x1.285b1c975bd58p-882, 0.0, 0x1.daff17a936384p-336, 0x1.4771a4f3f383p-208, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84c99380d61e3p-603, 0x1.4c44f5dae9476p-850, 0.0,
     0x1.3aaccb21f1f86p-236, 0.0, 0x1.b5a473704bbccp-307, 0x1.86435552f80b8p-619, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f4260ef6ee6ep-57, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0b059ff996393p-606, 0.0, 0x1.fa1b320b6a1cdp-854, 0.0,
     0x1.551b9abf02bb7p-159, 0x1.05465cda06b9fp-339, 0x1.080d706fecfc6p-515, 0.0,
     0x1.e9711d257a3b7p-624, 0.0, 0.0, 0.0, 0.0, 0x1.ef336292606aep-417, 0.0,
     0x1.ebe160e0301f9p-489, 0x1.7a16245f4b003p-602, 0x1.1b71c8f0a7795p-274,
     0x1.9de459e51c7b9p-768, 0.0, 0x1.326b893c46289p-204, 0x1.a64c873d7d44ap-5,
     0x1.cdfcc160e07b6p-771, 0.0, 0x1.658a77c11961cp-551, 0.0, 0x1.47e4b0d969635p-22,
     0x1.634fa33b31a89p-1009, 0x1.eda3fce783f8bp-763, 0.0, 0x1.365df13a2aad2p-457,
     0.0, 0.0, 0x1.a62f85d62a605p-890, 0.0, 0.0, 0.0, 0.0, 0x1.4aea630324fe8p-209,
     0x1.dd3fa4a1e075bp-649, 0x1.dfddaff1a4953p-553, 0x1.d6fc3b79f0d5ep-33,
     0x1.6d4b272cb0454p-432, 0x1.be9b2d488fb87p-199, 0.0, 0.0, 0.0,
     0x1.46bfbeef096cdp-257, 0x1.338929fec9a91p-191, 0x1.132c5c67bf8dep-961,
     0x1.9030117edbee6p-852, 0.0, 0x1.827baaf7270aap-994, 0.0, 0.0, 0.0, 0.0,
     0x1.9f37205d23722p-97, 0x1.2e7c69e18f23bp-265, 0.0, 0x1.f7df2f975bd86p-915,
     0x1.1a992e10b3b5ep-423, 0x1.d787aad72a6d5p-105, 0x1.4bc6d87831366p-109,
     0x1.6ec5395147d45p-201, 0x1.bb0dd5fda3d1p-610, 0x1.82f75d7169addp-852,
     0x1.4b1e22447524cp-742, 0.0, 0.0, 0x1.1eba03fa6f8bep-379, 0.0,
     0x1.ef3dbcaa56661p-584, 0.0, 0x1.41630e6a61471p-240, 0x1.c82e5ea3c35ebp-875,
     0x1.07f90da323089p-153, 0x1.06d67740aa1dap-79, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f0ae1dfc74446p-612, 0x1.261d79774e435p-149, 0.0, 0x1.036810201b691p-134,
     0x1.1507817d85353p-897, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2c428a765c3bp-421,
     0.0, 0x1.33c8510aa87ddp-322, 0.0, 0x1.ad54de22d98fep-151, 0x1.117a7f2b1a42ep-711,
     0x1.4135938e1c66cp-488, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4ff2fde85103p-351,
     0.0, 0x1.143f7ee7b0d54p-815, 0.0, 0.0, 0x1.542ee9c90fb9cp-790, 0.0, 0.0,
     0x1.b1cbdd1087ed2p-543, 0.0, 0.0, 0.0, 0.0, 0x1.b103015c9fee5p-834,
     0x1.1499d87f33479p-539, 0.0, 0.0, 0x1.14cfece48492fp-712, 0x1.fc8074b2ccf7cp-55,
     0.0, 0.0, 0x1.126220608d807p-726, 0.0, 0x1.ae874bab988f9p-523, 0.0,
     0x1.46288309bbf03p-634, 0x1.2f784fde9d98dp-143, 0x1.b422e92696375p-938,
     0x1.b37d4987276b6p-760, 0x1.9fe8c604ee6afp-585, 0.0, 0.0, 0x1.3c2485746032dp-858,
     0.0, 0.0
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
            tmp1 = Sleef_finz_floord2_avx2128(tmp0);
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
    printf("Sleef_finz_floord2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_floord2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
