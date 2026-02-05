/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd1_u10purecfma.c --function \
 *     Sleef_sinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ff593c95d68e1p-979, 0.0, 0x1.1014a543ef82cp-900, 0.0, 0.0, 0.0, 0.0,
     0x1.d568e490e176fp-609, 0.0, 0x1.65326385ec913p-384, 0x1.ca3e292684d38p-515, 0.0,
     0.0, 0x1.d717302dea245p-685, 0.0, 0.0, 0.0, 0x1.cd8d7442651c9p-828,
     0x1.c31c0fd6d26f7p-59, 0x1.edd3e06db2556p-159, 0.0, 0.0, 0.0,
     0x1.ae2e6a5bede0cp-176, 0x1.987ca259d1be8p-136, 0.0, 0x1.34e2ce1f0bd73p-46,
     0x1.87b0a3289730bp-761, 0x1.3a983c88ef70ap-421, 0x1.f8f029e758cacp-1006,
     0x1.472aed4e00f2ap-880, 0.0, 0.0, 0.0, 0x1.c8990c01f7482p-1011,
     0x1.11bebec84a1eep-826, 0x1.3dae6b4a4fa38p-988, 0x1.6e6950066fd12p-823,
     0x1.6ebb54cdb18dbp-3, 0x1.aa6c10cbe0babp-466, 0.0, 0.0, 0x1.161e419858541p-234,
     0x1.48fb35cc12607p-477, 0x1.f1b5bfb234184p-716, 0.0, 0.0, 0x1.09978701a6ba2p-9,
     0x1.50ced9e625204p-534, 0.0, 0x1.8b0991daab2c4p-795, 0x1.ca44e3077acb1p-653, 0.0,
     0x1.f97f20e105a2bp-433, 0x1.273aaa72d96b1p-531, 0x1.5aae32017bfcbp-739,
     0x1.91565bbd3f9a5p-175, 0x1.a0f792c38ba88p-512, 0x1.0c73d5ab876cp-625, 0.0, 0.0,
     0.0, 0x1.d442ec23c7da6p-402, 0.0, 0.0, 0.0, 0.0, 0x1.e642e380d2d9dp-962,
     0x1.57a89f2a6da62p-732, 0x1.9bbd376b4f0ecp-483, 0.0, 0.0, 0x1.a2f25da54f93ap-56,
     0x1.5df0f81c87cffp-365, 0x1.dfe311bec07c9p-659, 0x1.7931ddbb65be2p-451,
     0x1.5fda3caffbb34p-297, 0x1.654ddc362cb74p-798, 0x1.1c546983c64ffp-356, 0.0,
     0x1.493f8aca03ae2p-303, 0.0, 0.0, 0x1.14203a44eba2fp-975, 0x1.c9cae27e12785p-737,
     0.0, 0x1.c5fd148c40145p-944, 0.0, 0.0, 0.0, 0.0, 0x1.a16a04dbbfddbp-642, 0.0,
     0x1.210f02b32a0a1p-941, 0x1.e8995d71398ap-805, 0x1.c2b6874295f0fp-879, 0.0,
     0x1.03e837b71286ep-569, 0x1.508e26e61dd93p-239, 0.0, 0.0, 0x1.0533e4d20ae63p-527,
     0x1.c7b5414dbb22bp-885, 0.0, 0x1.18dd5e9ee7348p-156, 0x1.6200a45a05c4dp-932, 0.0,
     0x1.a226c7d954353p-663, 0x1.75da51c4d74c7p-719, 0.0, 0x1.652ebe9e13264p-170, 0.0,
     0x1.dce5699f859ddp-414, 0x1.ccbf6a1bba4f8p-682, 0.0, 0x1.1adb813131e0ap-476, 0.0,
     0x1.be1aa593954d8p-516, 0x1.f8a57cc96d823p-689, 0.0, 0.0, 0x1.84814a0d40186p-864,
     0x1.10968227b72b7p-337, 0x1.513141b7e4bd1p-247, 0x1.d42a53c7fa3d1p-1010, 0.0,
     0.0, 0x1.c143901c364e9p-246, 0x1.16bb27c5de37fp-1018, 0.0,
     0x1.52343a183d257p-274, 0x1.ba6901b3cb0a6p-736, 0.0, 0.0, 0.0,
     0x1.2e1c0ae73ab82p-826, 0x1.c3d68b1d52436p-791, 0.0, 0x1.ca065a4fbc144p-921,
     0x1.d05f9825fea52p-551, 0.0, 0x1.6c0b4e736aae6p-777, 0x1.b43acb472d509p-160,
     0x1.244fc3885872ap-743, 0x1.fb2ffd8d5d8a4p-778, 0.0, 0.0, 0x1.22a576e879412p-703,
     0x1.9e125cb76f0c1p-253, 0x1.cddf6c4751126p-357, 0x1.4f2fe0674e976p-724, 0.0,
     0x1.ad78b2e8ae66ap-837, 0.0, 0x1.36b16d3bcaf52p-722, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2926fbb5caeaep-582, 0.0, 0.0, 0x1.e80203b7f1f16p-528, 0.0,
     0x1.da1aacc417b42p-502, 0x1.b3018aed2d2b7p-162, 0.0, 0.0, 0.0,
     0x1.2403795ea2b2fp-369, 0x1.9bea3401addbap-388, 0x1.5e15d1662bc36p-944,
     0x1.8e9f50d1500b7p-373, 0x1.8442025ab932dp-549, 0x1.06931ec325528p-543,
     0x1.f7d84997cff6bp-493, 0.0, 0x1.04c5e2b844d8ap-548, 0x1.43d743533f1eep-605, 0.0,
     0.0, 0.0, 0x1.c4f51dfe262d4p-756, 0x1.f7bc8481a3badp-359, 0x1.a20c62809df84p-114,
     0x1.34b9583570663p-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2cb8de213748p-304, 0x1.d23ad7ed38ff4p-474, 0x1.83c2b306e6849p-905,
     0x1.70a6fd1f3a77fp-194, 0.0, 0x1.2e4479f56bb18p-103, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.eaa961db0390fp-9, 0.0, 0x1.e616aa2468088p-636,
     0x1.ab2d3893099a7p-670, 0x1.11d65e3a9c13cp-835, 0x1.b077ebd41dd78p-630, 0.0, 0.0,
     0x1.ad0d04102c0aep-797, 0x1.a3a535f53e39ap-576, 0x1.e158745b5c67ap-731,
     0x1.bddb9b86a7582p-62, 0x1.ae6442b515716p-831, 0.0, 0.0, 0x1.3897d9742dcep-29,
     0.0, 0.0, 0x1.aded78cee85f1p-618, 0x1.43950e693ff8p-90, 0x1.d62f7d37c62bfp-152,
     0.0, 0.0, 0.0, 0x1.42e4b7c9790ecp-103, 0x1.e3ba9318af1efp-216, 0.0,
     0x1.c2809f594ce3fp-38, 0.0, 0x1.758e2d3e02ec9p-907, 0.0, 0x1.8bd8f93de8933p-218,
     0x1.225ffd00ca925p-937, 0.0, 0x1.dc2fe1ccef392p-81, 0x1.bd37d9dbe3055p-67, 0.0,
     0.0, 0x1.4757795844ae3p-820, 0.0, 0x1.83cce861c892cp-937, 0.0,
     0x1.93851ef82d93cp-570, 0x1.6eea75f11e40dp-662, 0x1.58a581b906d3fp-533,
     0x1.9eecd061aeb8fp-1017, 0.0, 0.0, 0.0, 0.0, 0x1.eb22e762622dbp-203, 0.0,
     0x1.a83da15ab1ce9p-905, 0x1.74e14d089dcd5p-571, 0.0, 0x1.6944a5bfd6391p-258, 0.0,
     0x1.403b9e9c147f3p-382, 0.0, 0x1.1b03176c3fb64p-256, 0x1.4c88731d25975p-187,
     0x1.a1787cf95b5b1p-840, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f3d6b060c842p-405, 0x1.24663e7f15062p-823, 0x1.b7a675456bd34p-939, 0.0,
     0x1.070a80232a79bp-361, 0x1.fdbd4b2503c3cp-398, 0.0, 0.0, 0x1.1418896ec755cp-519,
     0.0, 0.0, 0x1.79f3a8ca6c404p-261, 0.0, 0.0, 0x1.2ca2bba6134f1p-74, 0.0, 0.0,
     0x1.34a3259bde9cbp-1007, 0.0, 0.0, 0.0, 0.0, 0x1.d6b41239a2a1cp-420,
     0x1.0c371cbcfdbf4p-247, 0.0, 0.0, 0x1.af6821be55cd9p-365, 0.0,
     0x1.7173015e8609fp-96, 0.0, 0x1.0c1831356411fp-299, 0.0, 0.0, 0.0, 0.0,
     0x1.666c3499dc4b2p-285, 0.0, 0x1.32828634390cfp-247, 0x1.97ea35c02db54p-163,
     0x1.94e27a1d022d7p-525, 0.0, 0.0, 0x1.9836786cb5302p-348, 0x1.aa259a552eee1p-883,
     0x1.09804619ea408p-656, 0x1.2a416f17f84a2p-483, 0.0, 0x1.abb6a0e2a40bcp-460, 0.0,
     0x1.67af8bedb883ap-702, 0x1.38021fd03cb06p-721, 0.0, 0.0, 0x1.36320d3c9e2c6p-530,
     0x1.8e0137ae98609p-239, 0x1.515117fff5eb2p-368, 0x1.b0191ab5a15bfp-488,
     0x1.cf4e0b58b6622p-567, 0x1.ecd727f458f8cp-178, 0.0, 0.0, 0x1.a542ffd00f5d5p-145,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d998b356c1cd3p-814, 0.0, 0x1.c571ece4d053bp-966,
     0.0, 0.0, 0.0, 0x1.825763ed7e1b3p-33, 0x1.528532ba8ada7p-690, 0.0, 0.0, 0.0,
     0x1.7e8cba2205152p-949, 0x1.70dd1a3c77e51p-814, 0x1.7d8a8f1f8d64bp-765,
     0x1.bd4353b38af8ep-973, 0x1.bd3880cb849abp-422, 0.0, 0.0, 0x1.d2d4d8bf278b3p-571,
     0.0, 0x1.50d58c630e26dp-725, 0x1.93a57884e56e5p-363, 0.0, 0.0, 0.0,
     0x1.214948f4c99a7p-550, 0x1.dca5617f5313cp-564, 0x1.afbc70206c632p-139,
     0x1.bd156eac72d74p-890, 0.0, 0.0, 0.0, 0.0, 0x1.8a7703300d3edp-524,
     0x1.369873aaff261p-956, 0x1.fde460e958aa3p-503, 0x1.448cf77c67f74p-363,
     0x1.9e0f74fe03ab3p-951, 0x1.09411fc58fc91p-825, 0x1.da6d0de065df9p-342, 0.0,
     0x1.750fc1c268b21p-624, 0.0, 0x1.a9e8c6d8c09d6p-773, 0.0, 0x1.e618107ee881dp-45,
     0x1.f801bf659b4bdp-42, 0.0, 0x1.72f395a8c0d24p-300, 0x1.1345796b8a992p-39, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.55bff3b16a20cp-272, 0.0, 0.0, 0.0,
     0x1.24649a16216d5p-321, 0.0, 0x1.f2d9b7a310ad4p-152, 0x1.db7b614f79492p-225, 0.0,
     0.0, 0.0, 0x1.02ed294c0460ep-1004, 0.0, 0.0, 0x1.28ce53e630776p-431,
     0x1.19d9a7e49a01dp-339, 0.0, 0x1.8f2ff9397aae9p-292, 0x1.bb046cb7ab016p-334,
     0x1.04b1d14d8bf78p-104, 0.0, 0x1.e7eb6aad167cep-890, 0.0, 0.0,
     0x1.f3297da31df9ep-75, 0.0, 0x1.fe4b6b4c76f5bp-221, 0.0, 0.0, 0.0, 0.0,
     0x1.ade79375f0954p-409, 0x1.04c7588e07793p-270, 0.0, 0x1.cd68608f2f97fp-612,
     0x1.1b149298cb261p-42, 0x1.584bc202d5b87p-259, 0.0, 0x1.7568e22891efcp-137,
     0x1.01e36c6da4077p-639, 0x1.f82b398fa617dp-386, 0x1.856f8d3310cb3p-100,
     0x1.5a687f08a2286p-890, 0x1.1ab2b3c5e1cfcp-253, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.887649c8f83d4p-751, 0x1.ca3682db53cfbp-310, 0x1.8ecd925fa83cp-962, 0.0,
     0x1.7fc7a3560d64ep-904, 0.0, 0x1.3e6267f7689e7p-262, 0.0, 0.0, 0.0,
     0x1.3b06ffadd85f2p-435, 0x1.be00b069de607p-447, 0x1.866d45a5974d9p-276,
     0x1.9d7be3c0497fap-409, 0.0, 0.0, 0.0, 0x1.7843f08d645fcp-177, 0.0, 0.0,
     0x1.70456e799c119p-533, 0.0, 0x1.a4c19065bf21ep-361, 0x1.5a69b3f84569cp-587,
     0x1.0a6b97511295fp-485, 0.0, 0x1.28b17d105798p-790, 0.0, 0.0,
     0x1.5009500e8a031p-272, 0.0, 0.0, 0x1.8547529d9b23dp-545, 0x1.5c5785042cf45p-980,
     0.0, 0.0, 0x1.017e8cd76e8bbp-208, 0.0, 0x1.98feb7bf570b8p-1002,
     0x1.4d2b741f5c098p-277, 0.0, 0x1.da4df78b44d3dp-990, 0x1.4a24cedef93b1p-392,
     0x1.074e8d0bf54acp-982, 0.0, 0.0, 0x1.cc08272be2b1dp-36, 0x1.a1092e8e9c11bp-346,
     0x1.0ca96f01d8469p-128, 0.0, 0.0, 0x1.25d0af801205bp-905, 0x1.a2d35de9a7434p-265,
     0x1.d9870484ed78ap-198, 0x1.927505efaf78cp-775, 0x1.985030c0398adp-652,
     0x1.59bdb68fe1055p-299, 0.0, 0.0, 0x1.9744db7c05165p-121, 0x1.5c1d71c673b05p-26,
     0x1.e1221d0f4964ep-57, 0.0, 0.0, 0.0, 0x1.64199267e4311p-533,
     0x1.8993e478f7eap-7, 0.0, 0x1.a4c8a9a03c502p-491, 0x1.9e40541a688e9p-857,
     0x1.ddd40f7fd6fddp-726, 0x1.b5aa4a3bc845dp-734, 0.0, 0.0,
     0x1.fd5451d12b83ap-1022, 0.0, 0.0, 0x1.4dc9908b5e5dap-464, 0x1.3d2f0341a73c7p-42,
     0x1.d0fa031000d2fp-828, 0x1.569320fd3e40bp-56, 0.0, 0x1.34889e41b11cdp-65, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.25d283cfd0046p-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.06145364ad62ap-156, 0x1.935731ee698dp-468, 0.0, 0x1.41eae1e58541fp-386,
     0x1.7c2d4582c6b73p-598, 0.0, 0.0, 0x1.d285dfc600502p-251, 0.0, 0.0,
     0x1.988dbf0d2849dp-827, 0.0, 0x1.9e3641d8d79p-626, 0.0, 0.0,
     0x1.74e5e76e1a5fap-126, 0x1.a63d7be4a6699p-607, 0.0, 0x1.25e670a24976ap-546,
     0x1.17a69054a06f8p-518, 0x1.887d3ff89f82dp-480, 0.0, 0.0, 0x1.b58f9ef9c44cdp-967,
     0.0, 0.0, 0.0, 0x1.371f5d53c5dccp-652, 0x1.ff89eb69a134fp-972, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fbb820ed7a64fp-85, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c675ef5fdd72p-151, 0.0, 0.0, 0x1.8abe0183d91aep-420, 0x1.d7faf88ec0adap-778,
     0x1.67b64dd6317p-765, 0.0, 0x1.04aaacdb4947dp-612, 0.0, 0.0, 0.0,
     0x1.db8aea528772bp-337, 0x1.b0a13bf8d7b2ep-520, 0.0, 0.0, 0.0,
     0x1.9947fc65e64f8p-347, 0x1.f7350f9555acap-555, 0x1.d07ee5c31b59p-933, 0.0, 0.0,
     0x1.29410d3eac3bp-197, 0.0, 0x1.40a7465ec3b93p-905, 0.0, 0x1.724583bb5abdbp-315,
     0.0, 0x1.e0484d9f4ce4ep-543, 0x1.998e1870ed06ap-710, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f81c1cd003c9cp-296, 0x1.79658337338b5p-923, 0x1.eae4313a7aa3ap-868, 0.0,
     0x1.df113b438a884p-898, 0x1.6ad03bee55e2ap-431, 0x1.0704676985507p-316, 0.0,
     0x1.910fb5e812494p-849, 0x1.ba8cab76c285fp-350, 0.0, 0x1.3780a340ba962p-568,
     0x1.ab056712618ebp-975, 0x1.6ef62a458f167p-823, 0.0, 0x1.d7faad7a9bef6p-497,
     0x1.66c350007eb1dp-643, 0.0, 0x1.a57fd9c8ee686p-987, 0x1.f57024e5da6f1p-989,
     0x1.cb1b3284e350ap-477, 0x1.16c5e53b0adbbp-546, 0.0, 0x1.279fd17273756p-882,
     0x1.59e0447fe628p-964, 0.0, 0.0, 0.0, 0.0, 0x1.72bcc8c1be951p-527, 0.0, 0.0, 0.0,
     0.0, 0x1.3d087c81521cp-47, 0.0, 0x1.74751f890406ep-704, 0x1.f50cfc4349c01p-724,
     0x1.6b8e1cf2ac00ap-815, 0.0, 0x1.5996bf463626bp-310, 0x1.42484f639c674p-745,
     0x1.c41e9face4776p-183, 0x1.4a37f8bdaffe5p-24, 0.0, 0x1.68f97e7fd6a4ep-608, 0.0,
     0x1.7dec751277929p-122, 0x1.f37363b5cd70fp-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22f2e6c59ec4dp-109, 0x1.62cd8860f46cdp-98, 0.0, 0x1.3d74583228deep-605,
     0x1.b1d07e8c77525p-189, 0x1.2b7b379826b07p-732, 0.0, 0.0, 0x1.de898c6450edbp-459,
     0.0, 0.0, 0.0, 0.0, 0x1.5e2995bea125bp-329, 0x1.e1cb41853962cp-920, 0.0,
     0x1.b4ae94c46814fp-506, 0x1.8b544889a15d6p-321, 0x1.cd28d540119ffp-638,
     0x1.605d083d99189p-733, 0x1.ba45a7943c083p-821, 0x1.7d57ade752f5bp-242,
     0x1.2d0f45215bebfp-53, 0.0, 0x1.45d7958e8587fp-429, 0.0, 0.0,
     0x1.08c2331cd987bp-443, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.546d9f3cf2128p-366, 0.0,
     0.0, 0x1.b1051b4382513p-398, 0.0, 0x1.84b56e4d4cdbcp-492, 0x1.bf66c414586f1p-738,
     0x1.72a0aac71295bp-894, 0x1.795259cff4bbep-191, 0x1.129324cc8e936p-356, 0.0, 0.0,
     0.0, 0.0, 0x1.b3848f19c6f51p-418, 0x1.4414aa60c7d87p-975, 0x1.91ce07579fbc2p-780,
     0.0, 0.0, 0.0, 0x1.26243bb194b1ap-815, 0.0, 0.0, 0x1.d732cb0ccbd22p-955,
     0x1.8a64515123aa4p-794, 0x1.d92a4b44bc0c9p-501, 0x1.ed664a7a12854p-180,
     0x1.c52206f8ea985p-925, 0x1.7f6508ba03833p-151, 0.0, 0.0, 0x1.7a97ba9a9c0d9p-92,
     0.0, 0x1.129011c55166p-617, 0.0, 0.0, 0x1.80c6539ea0879p-232,
     0x1.64c253d6a88f4p-632, 0x1.e7756162b32e1p-76, 0x1.4d8efbe040247p-343,
     0x1.5660ab4b01107p-842, 0.0, 0x1.9bb85b575d876p-1000, 0x1.8097c7b2bbee9p-358,
     0x1.fc9155fd36d9bp-773, 0.0, 0x1.b1c0993891eb7p-1010, 0.0,
     0x1.69b419d99fbd5p-233, 0.0, 0x1.8a88d34d954adp-528, 0x1.9d4b65f859a28p-19, 0.0,
     0x1.fceacb197e9edp-436, 0x1.b19fcfbd3aa0ep-967, 0x1.033a0838f8136p-90, 0.0, 0.0,
     0.0, 0.0, 0x1.a6f7b832383ebp-169, 0x1.695fc8f10739fp-975, 0.0, 0.0,
     0x1.6f96f9851e577p-992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7a56f9d92e1fap-405, 0x1.4d3d133a73eb4p-480, 0.0, 0x1.c15b9b685e2adp-606,
     0x1.1cdeb68c75969p-784, 0.0, 0x1.dc949340f86dp-334, 0x1.cd8c27a8f0093p-919, 0.0,
     0x1.68dd49bb31a42p-434, 0x1.762abb506d2d3p-41, 0.0, 0.0, 0x1.4bdf13afde21cp-880,
     0x1.5eb2772d7fb3dp-399, 0x1.af94e9f0595fp-123, 0x1.ca484c8758615p-299, 0.0, 0.0,
     0.0, 0x1.e0f0bd50d92e7p-813, 0.0, 0.0, 0x1.b03a1c971fd66p-745, 0.0,
     0x1.7b48257222ee5p-950, 0.0, 0x1.6e7ed2be0c5aap-361, 0x1.483580e84fc89p-700, 0.0,
     0.0, 0.0, 0x1.34551447c4278p-876, 0x1.c8a9c06231d11p-702, 0x1.258cd231ea2d8p-338,
     0.0, 0x1.30951d0fd3293p-76, 0.0, 0x1.df5d585df5cfdp-497, 0x1.2016c810b9471p-326,
     0x1.6ef61881231bbp-299, 0.0, 0.0, 0.0, 0.0, 0x1.6cade935dba8ap-223,
     0x1.4fb9642361982p-188, 0x1.9fbf5effcd321p-816, 0.0, 0x1.c28e4ca3f75dap-444,
     0x1.76d7269f62933p-494, 0.0, 0.0, 0x1.8bd275deb41bp-378, 0x1.b5aeec74df2abp-721,
     0.0, 0.0, 0.0, 0x1.96026fdf98a5bp-909, 0x1.2e322123d13d6p-9, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8bce45b16cb72p-721, 0x1.6536522f66595p-144,
     0x1.be243fc8e9c84p-568, 0x1.6f2f814dfb764p-357, 0x1.79b947bdd8159p-526,
     0x1.cc95b9f0cc3c7p-180, 0x1.d5a6846d17b41p-983, 0.0, 0x1.6c597ec54d277p-444,
     0x1.d4bd8379a09aep-448, 0.0, 0.0, 0x1.a93732d80242dp-433, 0x1.7531ffa972c8bp-917,
     0x1.46c11c3f16746p-334, 0.0, 0.0, 0x1.15dbfb519bdc4p-381, 0.0, 0.0,
     0x1.f0e46207b2ee8p-412, 0x1.6ff4ebdcf7885p-801, 0x1.2f3c3ed76c181p-418,
     0x1.3a85285c1540ep-418, 0.0, 0.0, 0x1.f5f7a3a9bcc24p-389, 0.0, 0.0,
     0x1.ce183a88cd092p-895, 0x1.da7dcf7d825p-259, 0x1.2b1046d577d9cp-103,
     0x1.4a476a8ba189fp-434, 0.0, 0.0, 0.0, 0x1.b8a861e53bb46p-387, 0.0, 0.0, 0.0,
     0.0, 0x1.e3307e91c590fp-809, 0.0, 0x1.da1bc913fae63p-399, 0.0,
     0x1.248e261bc68aep-372, 0.0, 0.0, 0x1.782db318b3f6bp-343, 0.0,
     0x1.63d61eceff47ap-83, 0x1.be2553c4b74d7p-256, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.143fddb83bc61p-762, 0x1.b94d6690215adp-88, 0x1.e2810a4a1e1dcp-877,
     0x1.ad41a340e205ap-252, 0x1.99f8118415d0cp-558, 0x1.964deb04f37d4p-500, 0.0, 0.0,
     0x1.7490294dcef1dp-411, 0x1.fd3df4267d224p-806, 0.0, 0x1.ea47ad3a56c1fp-142, 0.0,
     0x1.e7228368c3d75p-544, 0.0, 0x1.b64bbd871caap-158, 0.0, 0x1.5d4115a21ae91p-94,
     0x1.ab269d6c19bb9p-518, 0x1.f4d5d110da1c7p-912, 0.0, 0.0, 0x1.6176f9f042586p-537,
     0x1.a49618d3a403dp-589, 0x1.13deda341066p-604, 0.0, 0x1.e9ec4d0747edep-554, 0.0,
     0.0, 0.0, 0x1.a966f29da053bp-755, 0x1.e61c6a2d3c159p-402, 0x1.b748022195dfp-959,
     0.0, 0.0, 0.0, 0x1.72f59ab0b04e1p-494, 0x1.306e7ee9d342ap-169, 0.0, 0.0, 0.0,
     0.0, 0x1.f5b3f2aee021cp-520, 0x1.2415904e353aap-745, 0.0, 0.0, 0.0, 0.0,
     0x1.959d626a83d18p-602, 0.0, 0.0, 0.0, 0x1.b867669e76807p-401,
     0x1.297e5a3d3d829p-577, 0.0, 0x1.acf92a9921d1bp-103, 0x1.509ef1099c32p-992, 0.0,
     0x1.db2768067583p-385, 0.0, 0.0, 0.0, 0x1.2368e4b5dc6bep-100,
     0x1.42cbe7ce5c2f2p-986, 0x1.d48d562aa1db2p-93, 0.0, 0x1.f0e3db5b2ddbap-690,
     0x1.6a6aae2e338e4p-232, 0x1.8a1405c18defdp-828, 0.0, 0.0, 0x1.0b37fa18ce863p-442,
     0.0, 0.0, 0x1.cc264c8cebfa5p-285, 0.0, 0x1.4f6e757ad1763p-838,
     0x1.ba6693c7e8c6ep-109, 0.0, 0x1.d5060d170446bp-8, 0x1.05b9a284423adp-882, 0.0,
     0.0, 0.0, 0x1.38cfb19dbe25bp-147, 0.0, 0x1.4b7a5d253fadp-267,
     0x1.cfd36b941b353p-626, 0x1.280b923dfd312p-455, 0x1.4dc9add777673p-200
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
            tmp1 = Sleef_sinhd1_u10purecfma(tmp0);
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
    printf("Sleef_sinhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
