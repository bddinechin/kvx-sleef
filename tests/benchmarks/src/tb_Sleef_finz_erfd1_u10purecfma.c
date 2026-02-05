/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfd1_u10purecfma.c --function \
 *     Sleef_finz_erfd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7836e6041d79p-1018, 0.0,
     0x1.9412bf472451fp-954, 0x1.d6f818059d035p-410, 0.0, 0.0, 0x1.8b20b737f1c6dp-179,
     0x1.4d4202a14ca0cp-997, 0x1.220da10953514p-940, 0x1.4d27f042d0b77p-204, 0.0,
     0x1.f65479ef8450bp-69, 0.0, 0x1.131d427332fap-774, 0x1.88f5bf37eba7p-189, 0.0,
     0.0, 0x1.4e4e5912bbc0fp-214, 0.0, 0.0, 0x1.5b61123a6e741p-402, 0.0,
     0x1.b96104687e3e8p-247, 0x1.304fb1afd8f19p-689, 0x1.7ed36dce9afdbp-33,
     0x1.c6f1bbf24ed6cp-32, 0x1.77af15fb45ee2p-379, 0.0, 0.0, 0.0, 0.0,
     0x1.8d8750bb10948p-1018, 0x1.41526f8f68ad6p-109, 0.0, 0x1.578c44fafa1e6p-385,
     0x1.724ebe7d99665p-808, 0.0, 0.0, 0.0, 0x1.8bd5171defd21p-347,
     0x1.d3929094c95bbp-575, 0x1.aa283f6fd8baap-213, 0.0, 0x1.f37a4225369d8p-16, 0.0,
     0x1.57f8d133cae62p-335, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4430b2fd5187p-871,
     0x1.0f1db768bcdf1p-652, 0x1.50974ba02ba7ep-962, 0x1.2cf2c5ce061c2p-635,
     0x1.7198079005303p-223, 0x1.627c82bc82fdap-205, 0x1.d407f05e6f31dp-43,
     0x1.3180f721fb6eep-158, 0x1.5af3f8cd2479fp-36, 0.0, 0.0, 0.0,
     0x1.c0fe3d2395e77p-984, 0x1.ea441b77732f3p-911, 0x1.87b634aedc979p-445, 0.0,
     0x1.840dc26d68956p-8, 0.0, 0.0, 0x1.dd134865501b9p-86, 0.0, 0.0, 0.0, 0.0,
     0x1.87cec5cb943a3p-619, 0.0, 0.0, 0x1.30c6263e7a9dap-399, 0.0, 0.0, 0.0,
     0x1.1f78fd2253c9p-190, 0.0, 0.0, 0.0, 0x1.f0ba7dcc1c74bp-523, 0.0, 0.0,
     0x1.7e2037c06e772p-166, 0x1.833438485422p-928, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d05036983f9bp-822, 0x1.3a51b545047a3p-228, 0.0, 0.0, 0x1.9891ff921aa16p-398,
     0x1.b45e96487f5fcp-408, 0x1.7fd803dce8404p-12, 0.0, 0x1.d152b88a80b09p-223, 0.0,
     0.0, 0x1.da3be85065f15p-690, 0x1.8f740dc0bf248p-456, 0.0, 0.0,
     0x1.b80c764062b79p-218, 0.0, 0x1.a6167d7a35714p-222, 0.0, 0.0,
     0x1.937e4e6c84f8bp-482, 0.0, 0x1.005ea1f06f0bep-879, 0x1.0ecce7bbe506fp-529,
     0x1.ca345d84adccdp-298, 0.0, 0x1.19bc18a784103p-190, 0x1.53db74a952376p-816, 0.0,
     0x1.1bad0b06fc1d5p-1019, 0.0, 0x1.99c30809afb3ep-635, 0x1.d8a3782b6e942p-423,
     0.0, 0.0, 0.0, 0.0, 0x1.c7a376156c194p-313, 0.0, 0x1.20a5699bc5c0bp-586,
     0x1.9eb8ab4577d48p-480, 0x1.e0907e3ca79dfp-483, 0x1.924ccf2ac1a2ap-836,
     0x1.172d90341a488p-1008, 0.0, 0x1.b773b04f45e8p-30, 0x1.4a7c63f53b33ep-302,
     0x1.9daeee94c18bfp-382, 0x1.04240e0f21037p-996, 0x1.b778cc9803a7p-758,
     0x1.b467bfb85db3ap-534, 0x1.c58912440a6dp-469, 0.0, 0x1.279f242be8685p-281, 0.0,
     0.0, 0x1.955f495c5f252p-807, 0x1.4c229efb19a82p-994, 0.0, 0x1.c11eeb5e62b29p-221,
     0.0, 0.0, 0.0, 0.0, 0x1.bb14e2098fa97p-198, 0.0, 0x1.274922848bfa9p-280,
     0x1.a780af8ccfd8cp-327, 0.0, 0x1.631fdc706e66dp-825, 0x1.8cea20bf9a803p-412, 0.0,
     0.0, 0.0, 0x1.76456c27fbcfp-40, 0x1.99d6b95e49ea5p-477, 0.0,
     0x1.cb3c633414e51p-931, 0x1.63822235b9054p-321, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd6f1d4cc89ccp-363, 0x1.89adce3ccc421p-419, 0.0, 0x1.969f3e0952e91p-487, 0.0,
     0x1.473993b30d4a9p-116, 0.0, 0.0, 0.0, 0x1.127b2d714eb84p-791,
     0x1.023332284ebcep-842, 0x1.4afd69f144d76p-171, 0x1.1cbcf76b15b2dp-720,
     0x1.720c38efcf056p-96, 0.0, 0x1.ded51b2e8cec1p-86, 0.0, 0.0,
     0x1.2005cf3a2b886p-1002, 0.0, 0.0, 0.0, 0x1.e3c5099df4dadp-630, 0.0,
     0x1.2a2cc06498cc4p-485, 0x1.16ac5510f14e6p-478, 0.0, 0.0, 0.0,
     0x1.6f197ff78ad41p-873, 0x1.b21ae23a4f4d4p-820, 0x1.917c0289c94bp-860, 0.0,
     0x1.debe5e05faba7p-730, 0x1.76a23f7453f67p-73, 0.0, 0.0, 0.0, 0.0,
     0x1.f70092c0832ep-935, 0.0, 0x1.e3fb4f237977ap-387, 0x1.39b517ef4c4dfp-807, 0.0,
     0x1.f57c9df2a3ba1p-75, 0x1.56903a962a814p-444, 0.0, 0x1.b902680f130a3p-1009, 0.0,
     0.0, 0.0, 0.0, 0x1.dd2aef2d2d1dbp-995, 0x1.58d602531e721p-460,
     0x1.9cc444d00d37dp-519, 0.0, 0.0, 0x1.611a652973942p-125, 0x1.d869ac56732e2p-419,
     0x1.0d151cb294c36p-409, 0x1.c6b501dc1ea52p-753, 0.0, 0.0, 0.0,
     0x1.02a7c3d73a587p-323, 0.0, 0.0, 0.0, 0.0, 0x1.b463a7f387df7p-593, 0.0,
     0x1.93320b3f72593p-406, 0.0, 0x1.152d77add27f3p-703, 0x1.21db86b6d2335p-57,
     0x1.ccbb23d938d75p-302, 0x1.b66a43e2393b2p-327, 0.0, 0x1.113d220e8f8f6p-38,
     0x1.6d4320c2ea3dp-7, 0.0, 0.0, 0.0, 0x1.50ab877e179d4p-714, 0.0, 0.0,
     0x1.894f90ac41e05p-36, 0x1.01c1c22a05614p-390, 0.0, 0x1.c440be411d192p-999,
     0x1.28690c399ed47p-873, 0.0, 0x1.e511313594a24p-572, 0.0, 0.0,
     0x1.61554985f7b74p-428, 0x1.a9fccf87b9684p-918, 0.0, 0x1.f342847dba0cbp-732, 0.0,
     0x1.e520ff5acdfe8p-75, 0x1.6cf5a71d00f03p-273, 0x1.1f4a36af2f4fep-112,
     0x1.2c180bf24c361p-320, 0x1.6950c0b8d5ee6p-356, 0x1.f1cc66d22a268p-968,
     0x1.9505ecea089dbp-914, 0x1.7fe0244ccae6bp-973, 0.0, 0x1.f3c2b8eeeab5ap-205,
     0x1.070f5aa828384p-999, 0x1.174d1d0eb9e11p-810, 0x1.6307108f2fcd4p-48,
     0x1.7ffc6f397e8b7p-693, 0x1.e4b138309b541p-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4f7a8041e216cp-281, 0x1.0fae86cb2a17p-48, 0x1.a11c722c073a8p-892, 0.0, 0.0,
     0x1.24e979d1e10fep-99, 0.0, 0.0, 0x1.03363053ec834p-142, 0.0, 0.0,
     0x1.d3d88e5b0c87dp-934, 0.0, 0x1.54a968052709bp-798, 0.0, 0.0,
     0x1.7bed223ddf93dp-459, 0x1.b73e5322ec803p-104, 0x1.9ef0be2b3d7fdp-559, 0.0, 0.0,
     0x1.136e61a2084ffp-174, 0x1.a6d00fdc1ef4fp-446, 0.0, 0.0, 0x1.93b1d0641378p-33,
     0x1.5e535a41188a7p-921, 0x1.15dcd06829c13p-243, 0x1.4c760595a241ap-809, 0.0,
     0x1.8ff9339d86753p-164, 0x1.13d4c042a92e1p-685, 0.0, 0.0, 0x1.88c824e0ed0f4p-96,
     0.0, 0x1.9e9ecb61b71eap-689, 0x1.456d6e35a0decp-22, 0.0, 0.0, 0.0,
     0x1.d1bcd97b1c859p-332, 0.0, 0.0, 0.0, 0x1.2cfd50e9573cp-802, 0.0,
     0x1.12b87d28075c3p-506, 0x1.7553ff5265c18p-354, 0x1.ad598259dbdcap-294, 0.0,
     0x1.7e546da82007bp-120, 0x1.1311bb2e35c36p-908, 0x1.05fef91580c86p-708,
     0x1.9afdb0216a911p-551, 0x1.bc9d00e5a7a7ap-697, 0x1.6206a5e3cd2afp-132, 0.0, 0.0,
     0.0, 0x1.2e065ab68a287p-62, 0.0, 0.0, 0.0, 0x1.c3e056829f1abp-557, 0.0,
     0x1.97c7407bee56p-567, 0x1.6e38c8f393d58p-715, 0.0, 0x1.9287defe0daafp-229,
     0x1.664ef203ce601p-765, 0.0, 0x1.48b289a3d64d7p-736, 0x1.56420d8096147p-907,
     0x1.1848d8c19c892p-647, 0.0, 0.0, 0x1.e93d454bf44b8p-695, 0x1.6d5c45751a47ap-944,
     0.0, 0x1.0cc5da1e2f39bp-422, 0x1.05ef50a21a216p-3, 0.0, 0.0, 0.0, 0.0,
     0x1.1f6d45b9dded7p-489, 0.0, 0.0, 0x1.44726685c903dp-716, 0x1.4d07ca76f5e0fp-149,
     0x1.54e44775fa479p-974, 0.0, 0x1.2f16430665088p-550, 0.0, 0.0, 0.0, 0.0,
     0x1.8ed89f717d619p-635, 0.0, 0x1.0933015a7e0a6p-382, 0.0, 0x1.88bf76aaede09p-902,
     0x1.4cea98d027fd5p-590, 0.0, 0x1.88aac32d772bdp-489, 0.0, 0.0,
     0x1.57be63f1fb41ap-983, 0x1.6bef22fcede23p-339, 0.0, 0x1.1cdb287af7d7fp-60, 0.0,
     0x1.4945604f8faa5p-815, 0.0, 0x1.3b1aa025f8ccbp-314, 0x1.f11681ebfd32p-575,
     0x1.b3621a544fdc4p-476, 0.0, 0x1.5615e7584e9dbp-704, 0x1.890ab23cbd4f3p-661, 0.0,
     0.0, 0x1.75338434238ecp-788, 0x1.71a271fcd0006p-161, 0.0, 0.0,
     0x1.1810c4862244fp-199, 0.0, 0.0, 0.0, 0x1.dc56ba9d53811p-966, 0.0,
     0x1.7d1316ed80fd1p-356, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8afe7393c4913p-829,
     0x1.cf38b1ccffa52p-48, 0x1.8d0133bb66e58p-955, 0.0, 0x1.b1d6244f0a448p-131, 0.0,
     0.0, 0x1.90f8b063ec9ep-633, 0.0, 0x1.cd86ae50bce6cp-400, 0x1.7d60bfcb384b5p-852,
     0x1.310a2ab5e8099p-916, 0.0, 0x1.4922f76a4ac3ep-965, 0.0, 0x1.ca37acb08f58ep-601,
     0x1.42777e0ad8511p-667, 0.0, 0.0, 0x1.550c64c531e0fp-147, 0x1.26e7700dce2p-616,
     0x1.4ce826a498b04p-710, 0x1.6cbdab544e629p-214, 0x1.d56cf486d1355p-746, 0.0, 0.0,
     0x1.c538ed0807d08p-740, 0.0, 0x1.06e7a5bfe7126p-544, 0.0, 0x1.bb7105870be9p-990,
     0x1.bdf56ec4d214p-270, 0.0, 0.0, 0.0, 0x1.4571f638f03f5p-462, 0.0,
     0x1.48018ac41c139p-599, 0.0, 0.0, 0x1.f5d4881332843p-161, 0x1.7b7d298a35564p-321,
     0.0, 0.0, 0.0, 0x1.ad5eac2e1817bp-264, 0x1.fa52511bcc3cap-554, 0.0,
     0x1.50fbccb411bbep-849, 0.0, 0.0, 0.0, 0.0, 0x1.1b29e5af07055p-828, 0.0,
     0x1.4b4c91a50a222p-536, 0x1.aa36366c32fdfp-1020, 0.0, 0.0, 0.0,
     0x1.6e0957ad6b68fp-756, 0.0, 0x1.2d9d598f0fbfbp-635, 0.0, 0x1.dc714f7ccbef9p-432,
     0.0, 0.0, 0x1.34d712429ac8p-869, 0.0, 0x1.14f53ce5d0557p-884, 0.0, 0.0, 0.0,
     0x1.43b84f502fd12p-341, 0x1.36199f3810fbcp-28, 0.0, 0.0, 0.0,
     0x1.d67895ae87735p-516, 0x1.b52452c1abd2bp-447, 0x1.80ec9a3c7b0f5p-70,
     0x1.51bb4b7dcaa45p-916, 0x1.e28656394e721p-183, 0x1.c9dbe57298726p-342, 0.0,
     0x1.f1b0f353723adp-216, 0x1.46ec5af033dc1p-437, 0x1.3666bb94d49b5p-63, 0.0,
     0x1.303b59c70b2f2p-796, 0.0, 0x1.44da8b4543304p-393, 0.0, 0x1.4a524ead91cbdp-105,
     0.0, 0.0, 0x1.57e1d255193f6p-730, 0x1.fd6c3789ae8ecp-91, 0.0, 0.0, 0.0, 0.0,
     0x1.9fdd58c6bb92cp-661, 0.0, 0.0, 0x1.3de9b0b0de5cp-74, 0x1.38f143a475658p-461,
     0x1.d979b0f0f2a35p-36, 0.0, 0.0, 0x1.48ff00abe7a25p-263, 0x1.cd9dfb3749a44p-79,
     0.0, 0x1.71e45f949cb46p-155, 0.0, 0.0, 0x1.954b62eb9cbccp-219,
     0x1.9b452764e2f8bp-151, 0x1.d5754f367c17fp-817, 0.0, 0x1.d59d62af6ce34p-530, 0.0,
     0x1.cad8cd6b14c2cp-474, 0x1.f69db4890518ap-677, 0x1.41659dc110128p-734, 0.0,
     0x1.51875c8430591p-34, 0.0, 0.0, 0.0, 0x1.7c59b4b0c09dep-848,
     0x1.85c407e9db53cp-833, 0x1.057b19363d81ep-233, 0.0, 0.0, 0x1.7eb70a67a5379p-996,
     0x1.7cf832c09bd24p-561, 0.0, 0.0, 0x1.8d34aed27b9cp-428, 0.0,
     0x1.3f03eed392df6p-906, 0.0, 0x1.dc8ebfa0d3b41p-462, 0.0, 0.0, 0.0,
     0x1.6620dd9508b0cp-759, 0x1.e49a90833bb4dp-163, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c507c902a0275p-372, 0.0, 0.0, 0x1.2af9bf40a265bp-258, 0x1.46f66f9cc871dp-382,
     0.0, 0x1.2fa20fef6be07p-574, 0x1.e2964386b3ba6p-195, 0x1.307b1a79cc514p-510,
     0x1.6fff74123c4d2p-49, 0x1.48bc8aff03361p-660, 0.0, 0.0, 0.0,
     0x1.1e871089c0163p-1016, 0.0, 0x1.914ee6fd80484p-771, 0.0,
     0x1.7c8156ac9ae7fp-437, 0x1.6618e1fde8357p-735, 0.0, 0x1.95ca9065bc9bcp-220,
     0x1.1687dc802521p-735, 0.0, 0.0, 0x1.edadaa826163ep-673, 0x1.d810e1a682da3p-163,
     0x1.1bf7de09bb076p-304, 0.0, 0.0, 0x1.34b6ee189ca2ap-903, 0.0,
     0x1.6994b8faa2543p-723, 0.0, 0x1.4528a42f1f72ap-416, 0x1.ab358c78b4e83p-453, 0.0,
     0.0, 0x1.72f4617643e5ep-581, 0x1.f250c53823d5p-204, 0.0, 0x1.491f75dc01f23p-85,
     0x1.50bba0b714a8ap-297, 0x1.ac5a860ba1c37p-397, 0.0, 0x1.3c446806fcb4p-960, 0.0,
     0x1.d0f38c4e50a7ap-360, 0.0, 0x1.25ff1860481cdp-263, 0.0, 0.0,
     0x1.3298a8f2a25e8p-702, 0.0, 0x1.09ddd04c2586dp-1004, 0.0,
     0x1.a9da21a67b8b7p-860, 0x1.7c78de8302f85p-755, 0x1.1ebd0bd91fff5p-11,
     0x1.4474c6055ab56p-763, 0x1.7d4de7f3e23d5p-530, 0x1.83bb609f8ec14p-694,
     0x1.54d5bb7805a8bp-709, 0x1.40aad35633184p-11, 0x1.a7656502a74cbp-550,
     0x1.207f1ec2905bep-999, 0x1.0ef1b169da973p-387, 0x1.dc12afcc2d6acp-374, 0.0,
     0x1.39e54d4333eb7p-728, 0x1.4804ab0372072p-46, 0.0, 0.0, 0x1.384fa69dbe1cdp-561,
     0.0, 0x1.b2c7462261044p-139, 0.0, 0x1.3aa4feeb04542p-120, 0.0, 0.0,
     0x1.cb4a3642ba20dp-146, 0x1.12ddf088111e1p-47, 0.0, 0.0, 0x1.28c85fa8b8ac2p-596,
     0x1.3854771273787p-926, 0.0, 0.0, 0.0, 0x1.6d7da21659959p-743, 0.0, 0.0,
     0x1.4bd1b2f1c6e07p-309, 0x1.3e30fbb076637p-921, 0.0, 0x1.bdc99edacd37ap-164,
     0x1.aef27cef778ep-826, 0.0, 0.0, 0.0, 0.0, 0x1.2ce8ab97f28bap-111,
     0x1.6f6bd350b4172p-180, 0x1.0908f4699ebe7p-767, 0x1.89915a6734f1p-578, 0.0,
     0x1.68b644540ab5cp-202, 0x1.4c63294532864p-726, 0x1.c023de7cce442p-819, 0.0, 0.0,
     0.0, 0.0, 0x1.a9e07812e5efap-533, 0.0, 0x1.ea16207bf6ad4p-1013,
     0x1.baa7e461b13b9p-567, 0x1.597a17d0df965p-206, 0x1.f7d90b1b27abp-707, 0.0,
     0x1.7c79da3bda96ap-474, 0.0, 0x1.08ce7a5f1ed5fp-589, 0x1.c022ee1cf3174p-872,
     0x1.195098e72d091p-801, 0x1.fc8ea894ecdd1p-389, 0.0, 0.0, 0.0,
     0x1.cf9b1c44ee133p-798, 0.0, 0x1.c75983d06363p-990, 0.0, 0.0, 0.0,
     0x1.f35dd4a3df87bp-165, 0.0, 0x1.acc86a060da24p-731, 0.0, 0x1.fdd36558a7657p-996,
     0.0, 0.0, 0x1.7b7c47e16b35fp-465, 0x1.1499a4e8a1b02p-402, 0x1.b9af1e6539952p-490,
     0.0, 0x1.7ffe5b8832239p-501, 0.0, 0x1.7869e3d6363e6p-804, 0x1.77ffb163bc53ap-258,
     0.0, 0x1.cd7e1abd2c198p-617, 0x1.635ef27af7e4cp-571, 0x1.dfc55ad862fc3p-712,
     0x1.bff1f55a68704p-482, 0.0, 0.0, 0x1.f0fb120e14abep-910, 0.0,
     0x1.50cce3dd641b3p-885, 0.0, 0x1.9f16a2e4113d8p-663, 0x1.0b137f7de509ap-418,
     0x1.3f145eddcce67p-122, 0.0, 0x1.8c10a944cc3f4p-441, 0x1.edb5a94db111cp-446,
     0x1.12ae36dd320acp-766, 0x1.4ac31c6b8571ep-305, 0.0, 0x1.444f946e62579p-402,
     0x1.eccc640c796f3p-326, 0x1.d20d7b6fbe15ap-160, 0x1.61ad09d107902p-36, 0.0, 0.0,
     0x1.3eaca00e0266ap-84, 0x1.a1910eb358c34p-182, 0x1.b8c564b4e1e8dp-154,
     0x1.ff5006259b3c4p-282, 0x1.c84d5c0bd817fp-825, 0.0, 0.0, 0.0,
     0x1.758bfaa503f59p-855, 0x1.de58365406188p-856, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b9e8dfe2c1ap-319, 0x1.188a7a4eede63p-343, 0x1.d5048c97bab96p-784,
     0x1.1849b98c3119dp-568, 0.0, 0x1.2c57d3d88a437p-272, 0x1.76f51f2e4145p-838,
     0x1.88210ebbe982fp-411, 0x1.e0dcc091b1e32p-605, 0x1.682cef726cd88p-692,
     0x1.4865e631a063ep-485, 0x1.863a5cd5d3ed7p-462, 0.0, 0.0, 0.0,
     0x1.00a15877ba3f5p-413, 0.0, 0.0, 0x1.a8a10bbd7aa96p-857, 0.0, 0.0,
     0x1.36eca4f981f8cp-794, 0x1.6375af5d1ab12p-259, 0x1.9be972cf308a1p-760,
     0x1.1a3f9962834c5p-343, 0.0, 0x1.97d9f5ee709e5p-261, 0x1.92396e098ed12p-779, 0.0,
     0x1.a68c1033690dcp-513, 0.0, 0x1.28e55e77d541p-581, 0.0, 0x1.d33487b0560a2p-200,
     0.0, 0x1.160d15803e161p-533, 0.0, 0.0, 0.0, 0x1.2e1d440f58cc9p-850,
     0x1.eb59f99989e0ap-891, 0x1.0fb7c849c5108p-925, 0x1.0f3496a475578p-655,
     0x1.ee4904f29b04p-905, 0.0, 0.0, 0x1.af572cbfc55dbp-1019, 0x1.5fa208ac7d0ffp-130,
     0x1.388e383d604cap-83, 0.0, 0x1.ecff1b1f2ebaap-371, 0x1.865cf558878d1p-223, 0.0,
     0.0, 0x1.620058eb424b7p-599, 0x1.eaca7de7609a7p-924, 0x1.62b2f48594ca9p-341,
     0x1.8dc4493fa6b6bp-396, 0.0, 0x1.b75d975992883p-13, 0x1.c8644aa590846p-74,
     0x1.3b94fa16fc5f8p-539, 0x1.e9e5c31768084p-362, 0.0, 0x1.4b955347147a2p-187,
     0x1.64fd751ac812p-471, 0.0, 0x1.59c04470b9e55p-2, 0x1.c0bf2e3e1bb2cp-79,
     0x1.00120fb9be0c8p-170, 0.0, 0x1.dca5a257369c1p-522, 0.0, 0x1.67a13f59fb4bbp-354,
     0x1.cbee5ad2aa771p-502, 0x1.5b55c769d3ffdp-806, 0.0, 0x1.778162f1a2a29p-95, 0.0,
     0.0, 0.0, 0.0, 0x1.92f565d12ebb8p-284, 0.0, 0x1.4e7c181dd8cafp-127,
     0x1.0107d84b3b4c4p-918, 0x1.0a2da004d822cp-917, 0x1.32ab0af80a8ccp-988,
     0x1.85b55ee517124p-909, 0x1.0a5b67f409009p-1, 0x1.c538bdb94eefp-389,
     0x1.893b97d2d1eep-596, 0x1.c87ea50341a68p-946, 0x1.93c3f8af7df6ap-332, 0.0,
     0x1.22f1da34b6b7ep-140, 0x1.60f6c5944fc3ep-623, 0x1.80a5417763eeap-250,
     0x1.9c708d68677a4p-967, 0x1.82e5c59f5ff85p-551, 0x1.e52166ec5d2a5p-945, 0.0,
     0x1.ba104f9bf4ac2p-366, 0.0, 0.0, 0x1.6557b95a5a5fep-844, 0x1.3897bf33d8617p-344,
     0x1.194c0ae4cf494p-988, 0.0, 0.0, 0x1.95ff45dfa52dcp-439, 0.0, 0.0,
     0x1.76770abf80558p-744, 0x1.608e49f8aa403p-781, 0x1.ffd11a3e8540dp-327, 0.0,
     0x1.4db41e119b964p-161, 0.0, 0.0, 0x1.c02c85edc0e2ep-73, 0x1.90d746eed0189p-272,
     0.0, 0.0, 0.0, 0x1.c1c02cd5de78bp-524, 0.0, 0.0, 0x1.44361400e9805p-951,
     0x1.bf0982b6d8da8p-306, 0.0, 0.0, 0x1.5742c619a4117p-526, 0.0, 0.0, 0.0,
     0x1.3446879d1aac1p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.631d554eada52p-59, 0.0, 0x1.2a3dd0445ca69p-306, 0.0, 0.0, 0.0,
     0x1.c8d8c5face696p-193, 0x1.9fdf16f65c3bbp-809, 0.0, 0.0, 0.0, 0.0,
     0x1.52de91025a64dp-65, 0.0, 0x1.b00d7a75b4085p-850, 0x1.aa2fc4a9efcecp-532, 0.0,
     0x1.4fcbce7f10aa5p-98, 0x1.f4d2ee710dafap-269, 0.0, 0x1.fa73da90274c1p-689, 0.0,
     0x1.4a637b592f6b4p-637, 0x1.c9a3a1212963cp-959, 0.0, 0.0, 0x1.957e17782cf4p-877,
     0.0, 0.0, 0.0, 0x1.26631cfac4b62p-532, 0.0, 0x1.99b3af0bdc982p-962, 0.0, 0.0,
     0x1.1571d5e39e75ap-618, 0.0, 0x1.66f980ab5ba69p-418, 0x1.51d0a691b3fbcp-582,
     0x1.37169be47553cp-315, 0x1.93b62877ddd1p-774, 0x1.a9406938cadb2p-474, 0.0, 0.0,
     0.0, 0x1.d68cf1567b0a1p-360, 0.0, 0x1.bbfc6798bf16ap-438, 0.0, 0.0,
     0x1.fe6d0c46529edp-253, 0.0, 0x1.2a8da75379a47p-994, 0x1.6461ecf171663p-240, 0.0,
     0.0, 0x1.e9ad7264aaa9dp-686, 0x1.2f33506a83a64p-843, 0x1.9a9d79991bc31p-140,
     0x1.029615872929dp-546, 0.0, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_erfd1_u10purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_erfd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfd1_u10purecfma bench acc %la\n", global_bench_acc);
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
