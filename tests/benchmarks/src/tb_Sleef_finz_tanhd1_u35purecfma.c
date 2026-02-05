/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd1_u35purecfma.c --function \
 *     Sleef_finz_tanhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.94df090f17a0ap-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d4fef42718a7p-808, 0.0,
     0x1.b4f7da58915a8p-374, 0x1.3548ea86f7faep-403, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.67ad385b0cfd2p-42, 0x1.a4dcc9b2499dcp-29, 0.0, 0x1.2aeb6c470570fp-596,
     0x1.f2fc74488a37bp-487, 0x1.327430fd6766bp-163, 0x1.4d4298c0fc3e2p-683, 0.0,
     0x1.85027f08e125fp-36, 0x1.5455a5c2ca24ep-613, 0x1.1ace40178033ep-369, 0.0,
     0x1.58cb3d450b351p-741, 0x1.a5688223a07a2p-906, 0.0, 0.0, 0.0,
     0x1.da17ca58df0d3p-737, 0x1.892c8ed8bcfacp-379, 0x1.fac9045fcf243p-623, 0.0, 0.0,
     0.0, 0.0, 0x1.99d1b422924cap-926, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce79c81cf1398p-679, 0x1.e94365bd6559p-662, 0x1.f53fef11d4edfp-33, 0.0,
     0x1.cb61d2d0f40cbp-888, 0.0, 0x1.6768a646f69eap-489, 0.0, 0.0,
     0x1.48b89a22c2a38p-221, 0.0, 0x1.2bac8cce3db2ap-761, 0.0, 0x1.b043908ed8408p-549,
     0.0, 0x1.bc785b1b14d87p-614, 0x1.2b58bc6c97ec3p-874, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a8fba0c7620b4p-864, 0x1.7683f5ed1c9b4p-672, 0x1.3050de50c7232p-980, 0.0,
     0x1.0aa6e7d013433p-263, 0.0, 0.0, 0x1.c412bee084b26p-319, 0.0,
     0x1.25facea3e20b1p-388, 0.0, 0x1.2081732a77c1ap-603, 0x1.07fcb366d92ccp-803,
     0x1.bde4384bfbd1p-599, 0.0, 0.0, 0.0, 0x1.de201598d399p-413, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0fb4fa6e06416p-75, 0x1.f391082c78815p-748, 0.0,
     0x1.39c23d289ae16p-897, 0x1.efb1b5f21fb4cp-337, 0.0, 0x1.80e6319c2144cp-799,
     0x1.3af2b65369b9ep-880, 0x1.691c3711768d9p-832, 0x1.1df7426b9ed89p-534,
     0x1.6c3a9a827a45bp-761, 0x1.4fb1b8969ca9p-999, 0.0, 0x1.14dc485027a04p-444, 0.0,
     0x1.3e926db4f2c96p-725, 0.0, 0x1.fe9cc7de23fbcp-189, 0x1.264224a6facdbp-752,
     0x1.48cf18348cacfp-780, 0x1.213b3f57f2edbp-866, 0.0, 0.0, 0.0,
     0x1.f0ab1079852b6p-292, 0.0, 0.0, 0.0, 0x1.75570b003fcefp-761,
     0x1.0d2b02fb4bcd7p-248, 0x1.738093946e49dp-862, 0.0, 0.0, 0.0,
     0x1.b031830abd51fp-579, 0x1.f4cd1ffc7aec1p-768, 0x1.44cbd196b9aedp-609, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.058bff43463ddp-302, 0.0, 0x1.0129e2017831cp-698, 0.0,
     0x1.2b71cc0a3f85ap-599, 0x1.8ee543121337ep-529, 0.0, 0x1.b1dbfbfbb9532p-110,
     0x1.d879c81c3363p-997, 0x1.a3dc9f5e025f2p-78, 0.0, 0.0, 0x1.3453e8ceed2cbp-10,
     0.0, 0.0, 0.0, 0x1.0aa4c9b776231p-118, 0x1.15f63aff7a3dfp-375,
     0x1.f25e92d8ea40ep-680, 0.0, 0.0, 0x1.f60260efa2a3p-752, 0.0, 0.0, 0.0,
     0x1.ff607dfca422ep-795, 0.0, 0.0, 0x1.ab02550d392bfp-577, 0.0,
     0x1.ab6b5625462dbp-1015, 0.0, 0.0, 0x1.423d94a18c416p-359, 0.0, 0.0,
     0x1.f44d10fc587abp-520, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21455f058d66bp-369,
     0x1.b05e991ebd1b8p-812, 0x1.f81c88eecf155p-766, 0x1.0e0571fd56e43p-626, 0.0, 0.0,
     0.0, 0.0, 0x1.52840842b49d4p-48, 0x1.ccc5dccd95eap-482, 0x1.2e0cbe161b4a4p-565,
     0x1.19891a2f7eb01p-611, 0.0, 0x1.d81f5bcd03cap-817, 0x1.4f3f86ffe5f6p-617, 0.0,
     0x1.a035601c0b153p-1000, 0.0, 0x1.162e08a826473p-461, 0x1.5a68e77fcb3d1p-58, 0.0,
     0x1.04fb1d2469172p-238, 0x1.15c5400078ef2p-645, 0x1.72ff1875a4093p-396,
     0x1.2407a46dd568bp-617, 0x1.07c8db419ab3fp-377, 0x1.d9ae811458401p-960, 0.0, 0.0,
     0x1.ad71231539b62p-233, 0x1.69fd188f76ecap-869, 0x1.a7eea26cf542ap-549,
     0x1.303c7957680f3p-441, 0x1.1ac30f2da875bp-174, 0x1.4da1b6c3e904ep-852, 0.0,
     0x1.4fe86f2d74ed5p-73, 0x1.2385a33afda89p-494, 0x1.28b35b264eee2p-352,
     0x1.f0c1f9cf0ad19p-817, 0x1.f530b6fb40f02p-229, 0.0, 0x1.e246e84059d76p-150,
     0x1.45abec942c676p-966, 0x1.bd026900ccc7p-74, 0x1.6439307affa8p-316,
     0x1.53641db41f262p-997, 0x1.a2b4989af078ap-586, 0.0, 0x1.a93bac532f1f6p-807,
     0x1.50787fe98a245p-948, 0.0, 0x1.c930884961abdp-586, 0x1.603444018e296p-867,
     0x1.aeed2593ecbcbp-246, 0x1.b73893c4db108p-411, 0x1.ab9b338d94ffcp-119, 0.0, 0.0,
     0.0, 0x1.1c5b5fa8156fbp-688, 0.0, 0x1.cc10ff24e40d4p-91, 0x1.8c16ff7544dbbp-610,
     0x1.af6b738f334e2p-84, 0.0, 0.0, 0.0, 0.0, 0x1.1bc2a15b2980ep-470, 0.0, 0.0, 0.0,
     0x1.816ace74a5fa7p-976, 0.0, 0x1.fd1ef980b25a8p-213, 0.0, 0.0,
     0x1.605292c18020ap-445, 0.0, 0.0, 0x1.824af5a9ac8a2p-607, 0.0,
     0x1.67d46e4965bbcp-113, 0.0, 0x1.e9a37f85a9ac8p-381, 0x1.b993c3825f55bp-285, 0.0,
     0x1.3caa389c4b1cbp-703, 0x1.537d38fe70665p-725, 0x1.426507e45740dp-658, 0.0, 0.0,
     0x1.c13e06e668a9cp-988, 0x1.ed6b9382b624cp-848, 0.0, 0x1.00c028e7ea51bp-959, 0.0,
     0.0, 0x1.2d113501a0301p-209, 0x1.e6beb7bcec33dp-565, 0x1.951ca765f8e9bp-487, 0.0,
     0.0, 0x1.d7ef1bacedee7p-59, 0.0, 0x1.5dbf1d39af94ep-988, 0x1.7353e408d654ep-684,
     0.0, 0.0, 0.0, 0x1.f38c78abfbe2dp-982, 0x1.534ccc15971cep-496,
     0x1.33a08142e213cp-548, 0.0, 0x1.06840e405d7e5p-490, 0x1.0a9279e21d065p-372,
     0x1.6f712d3744b6p-1002, 0.0, 0x1.fe33a483bc7b6p-15, 0x1.77e5c57fbdc02p-883,
     0x1.5c0a5c284dce2p-891, 0x1.bccdb86494278p-190, 0.0, 0.0, 0.0,
     0x1.73f633e10097ep-593, 0.0, 0.0, 0x1.696d25ed9b56cp-475, 0.0, 0.0,
     0x1.bfa0ca3e40fffp-24, 0.0, 0x1.9c937b30853d5p-724, 0x1.e6da43c6f6cbdp-946,
     0x1.036883a92b621p-810, 0x1.a267c3f36fbeap-612, 0x1.cf78786030956p-227, 0.0, 0.0,
     0x1.e4a6c9d0ddf72p-521, 0x1.7f37601ef2026p-453, 0x1.c840eb803f928p-694, 0.0, 0.0,
     0x1.bc8f0f91dd4ap-638, 0x1.26d55dca3c20ap-198, 0.0, 0x1.737517af67089p-150, 0.0,
     0.0, 0x1.b238c5562e919p-747, 0x1.f9acf57fc766p-48, 0.0, 0x1.c39ba7e76f6ecp-615,
     0.0, 0x1.7322b4cd5dfeep-106, 0.0, 0.0, 0x1.f67599d440d2ep-235, 0.0,
     0x1.0290e152addb1p-233, 0.0, 0x1.64867d28abf5cp-240, 0x1.c5117c4aeeca3p-312,
     0x1.dfe387d8babbap-517, 0x1.c79219b2ad858p-381, 0x1.64c6544833832p-359,
     0x1.ca56bd43f87f5p-915, 0.0, 0x1.1dcad028c8d1cp-417, 0.0, 0x1.8bbed93723c07p-246,
     0x1.5fa5088f0b149p-541, 0.0, 0.0, 0x1.a84623209bef8p-931, 0.0,
     0x1.0296f9c4cb1e9p-782, 0x1.c4308cace1069p-118, 0.0, 0.0, 0x1.90b29f02cd1f4p-483,
     0x1.2bb3dc8aa1e9ep-171, 0.0, 0x1.262c673eb3bfcp-616, 0.0, 0x1.4ec7ba40567a7p-174,
     0x1.6cd9feeabc618p-537, 0.0, 0x1.966d17a7c7c69p-81, 0.0, 0.0,
     0x1.825f431fd4021p-473, 0.0, 0x1.bdd355fe579b4p-115, 0.0, 0.0,
     0x1.ec3179ca657cfp-534, 0x1.b09bf60282098p-637, 0.0, 0.0, 0x1.a3b74dd1e0fb1p-721,
     0.0, 0.0, 0x1.c6afa5d320b1bp-169, 0x1.f1363a09d592cp-473, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5ff7c262b8595p-499, 0x1.05f539b15503ap-152, 0x1.c9d7d42fa42e3p-517,
     0.0, 0.0, 0.0, 0.0, 0x1.94266d003e2abp-796, 0.0, 0x1.8af965ce526e7p-633, 0.0,
     0x1.39dd3daf33aep-410, 0.0, 0.0, 0.0, 0x1.c366fadc771b7p-124, 0.0, 0.0, 0.0,
     0x1.90893b8f1c5cap-401, 0x1.c3c733e015709p-189, 0x1.d84c53f9aa723p-902, 0.0,
     0x1.725080f838626p-358, 0x1.a2cc6df9b08cbp-892, 0.0, 0.0, 0.0, 0.0,
     0x1.ef4fe8a4887a9p-773, 0x1.1dc7497a34b7p-57, 0.0, 0.0, 0x1.fd2613698fc6dp-617,
     0x1.24b112a1ec0dcp-36, 0x1.62618ca0d687ep-681, 0x1.a0db2e9b97c97p-217,
     0x1.32b0a3b3637acp-302, 0x1.9b08838b849f6p-959, 0x1.e861f9a779f6cp-238,
     0x1.23179ee40f521p-92, 0.0, 0x1.0183e6de8561ep-855, 0.0, 0.0,
     0x1.b36703fce243dp-640, 0x1.df02d72df733cp-338, 0x1.c9ca7065d0f61p-819, 0.0,
     0x1.6f9ae2ce0ecdfp-359, 0.0, 0x1.edfabae0b9f8bp-957, 0.0, 0.0,
     0x1.fdf0f15ea163fp-943, 0x1.dcf50584a6c0dp-418, 0x1.19a9113dc68f9p-69, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9fd32ad1f0648p-396, 0.0, 0.0, 0x1.258dfef44677dp-422,
     0x1.be6cf59236b1fp-780, 0.0, 0.0, 0.0, 0x1.19264d2e46231p-621, 0.0, 0.0,
     0x1.9dccc5d1905f7p-934, 0.0, 0.0, 0.0, 0x1.474a17c09903dp-863, 0.0, 0.0,
     0x1.06131b83add25p-861, 0.0, 0x1.a2542a6377629p-633, 0.0, 0.0,
     0x1.bd4ff1d411fddp-453, 0.0, 0x1.31e28b79a93ddp-297, 0.0, 0.0, 0.0,
     0x1.e982667777a05p-703, 0x1.b93c4ee925368p-811, 0.0, 0x1.f4fec65cd9786p-621,
     0x1.f52c19e62cccap-555, 0x1.fb825963a9bbep-23, 0x1.7a502acf2f008p-994,
     0x1.4ae444d5f5b94p-129, 0x1.01734ed0b4b15p-900, 0x1.296f71839aac8p-311, 0.0,
     0x1.a3bcb9e06d98fp-198, 0x1.676252b61a801p-259, 0.0, 0.0, 0x1.fe326097e319dp-847,
     0x1.9c288d4404c8fp-339, 0.0, 0.0, 0.0, 0x1.d280fa8a4ae44p-487,
     0x1.8743605704109p-677, 0x1.e4131a5f54942p-764, 0x1.12357ecb77c08p-12, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c17a0fe02c216p-167, 0x1.6c522057dc7cp-106, 0.0,
     0x1.3a2ee79da62d5p-819, 0x1.6f6abca6b38c7p-43, 0x1.65bfb726bf1efp-91,
     0x1.90d65c09c658dp-326, 0.0, 0x1.25555475bcc8ep-216, 0x1.56ce0cc3b115dp-73, 0.0,
     0.0, 0.0, 0x1.9ee7d5118191fp-205, 0x1.51935a1473982p-472, 0.0,
     0x1.3cb852b013256p-696, 0.0, 0.0, 0x1.677006b3aea0ep-88, 0.0,
     0x1.e33c986331ce8p-12, 0.0, 0.0, 0x1.8b19a2038810bp-873, 0.0,
     0x1.1c4947e8629fap-191, 0x1.3acae3c2dc7f8p-829, 0.0, 0.0, 0x1.558c4c896e718p-517,
     0.0, 0.0, 0x1.881693cbd8c6cp-921, 0x1.36cfea1418642p-932, 0.0,
     0x1.577931e9546b4p-880, 0.0, 0.0, 0x1.aff39a789e0dp-357, 0.0,
     0x1.020fafdb1bc68p-69, 0.0, 0x1.6abf640e3d20bp-895, 0x1.3f1621dbcc455p-461, 0.0,
     0.0, 0x1.ec3d244adda79p-318, 0.0, 0.0, 0.0, 0.0, 0x1.531999b62b26fp-144,
     0x1.3e9db560e2b7bp-670, 0.0, 0.0, 0x1.b8595ad61c759p-924, 0.0,
     0x1.f0cb768493098p-1010, 0.0, 0x1.956ddb1ae3108p-50, 0x1.64ebcbd81401ep-251, 0.0,
     0.0, 0x1.bc59c7218bfd8p-63, 0x1.6b4defabe838cp-181, 0x1.65b581901a564p-122,
     0x1.d56ac8bfd58b5p-104, 0x1.d538bfb409934p-1016, 0x1.2b3030033b39dp-540,
     0x1.e412e4babcb31p-823, 0.0, 0x1.2cd7017ac35e4p-981, 0.0, 0.0,
     0x1.29d7b3b890687p-943, 0.0, 0x1.4015cf9b37bbap-723, 0x1.1e40f4a5abebbp-174, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26a29ebb98319p-1020, 0x1.f47fa7b47b655p-564,
     0x1.518a2ee9069bep-291, 0x1.e770a22c59b14p-133, 0.0, 0x1.06e0a4a289e53p-517, 0.0,
     0x1.4d10b09de588ap-160, 0x1.7c9d6d00df96bp-255, 0x1.4bf2fdbfed8e7p-330, 0.0, 0.0,
     0x1.59bb29f519e91p-466, 0x1.dcae4863c54fcp-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.65ae891e1819fp-512, 0.0, 0.0, 0x1.c0793b706432bp-260, 0.0, 0.0, 0.0,
     0x1.877be89b65cf7p-976, 0x1.b363113652b8ap-724, 0.0, 0.0, 0x1.189999561fb4cp-741,
     0x1.642060c747abep-811, 0x1.855ef77284e73p-509, 0x1.1755f5200cae5p-625,
     0x1.8be205be9e69cp-722, 0x1.c87ed9f8b2227p-980, 0x1.32d727805ef03p-548, 0.0, 0.0,
     0x1.66eaf7126904fp-299, 0.0, 0.0, 0x1.6a9b102d45a84p-937, 0x1.78e431c8a56d5p-989,
     0.0, 0x1.701d186851832p-710, 0.0, 0x1.ab056da226481p-339, 0x1.583f89d150349p-551,
     0x1.c2e9d0e752612p-938, 0.0, 0x1.0ccea5a2a0746p-379, 0x1.e628dac0c872p-483,
     0x1.2c97136af5684p-675, 0.0, 0x1.620be6213351fp-647, 0.0, 0.0,
     0x1.b9b2c68052d7fp-415, 0.0, 0.0, 0x1.afe6e5cb71095p-254, 0x1.670cedfac129ap-36,
     0x1.50ab2219706f3p-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c1f08333f815p-3, 0.0,
     0.0, 0x1.e129901786adcp-76, 0x1.afc4758e34b78p-243, 0.0, 0x1.654c1c425bb13p-109,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f62d03ef76d7fp-500, 0.0, 0.0, 0.0,
     0x1.aace0905af83bp-946, 0.0, 0x1.dd2eef26aefcbp-194, 0.0, 0x1.afe0339ef80cfp-134,
     0x1.13d00db0121b2p-863, 0x1.cdd266080a7bp-7, 0x1.5c45ea46964bcp-728, 0.0,
     0x1.2893d96cb447p-938, 0.0, 0.0, 0x1.aa1be8197191bp-550, 0x1.b6626df3d7769p-915,
     0x1.94805bf1682a8p-477, 0x1.4a126a0331752p-76, 0.0, 0x1.f373820d3d1p-831,
     0x1.f26168f5b67b3p-776, 0.0, 0.0, 0.0, 0x1.99cdc68755acdp-968, 0.0,
     0x1.66cc6a5309f1bp-320, 0.0, 0.0, 0.0, 0.0, 0x1.80c42aa93a499p-968, 0.0,
     0x1.b4a08db67fe6dp-655, 0.0, 0x1.91e8de9e84334p-61, 0x1.178daa4daf972p-96, 0.0,
     0x1.0daf585ad4015p-933, 0x1.8cc3978f1fe76p-227, 0x1.0132f6c4e75d7p-547, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6652c4f56563dp-186, 0.0, 0.0, 0x1.97ad4ff5f5518p-169, 0.0,
     0x1.3c40339201a2ep-961, 0x1.4cf3c9d1a62bbp-160, 0x1.b061ffa2019e2p-637, 0.0,
     0x1.a9a386e7bd64p-831, 0.0, 0x1.d16b9a0394867p-290, 0x1.b4f6de6cc5141p-808,
     0x1.83ac6bc92d5f9p-82, 0x1.0a99db7b4587bp-960, 0.0, 0x1.f5db4b14bf554p-578,
     0x1.4eace30652fb2p-275, 0x1.9a0e358cb905dp-945, 0x1.0766f9b26699cp-893,
     0x1.cba759bfa0653p-517, 0.0, 0x1.d988aa11bf01ep-535, 0x1.27880349a885dp-34, 0.0,
     0x1.c48256ba0459dp-711, 0x1.6f2a3f0f48497p-65, 0.0, 0.0, 0x1.6e36fcb267eb6p-432,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92e2f0ad72d88p-1003, 0x1.13dcb1f747fa2p-89,
     0x1.746b11cd5c57dp-771, 0.0, 0.0, 0.0, 0.0, 0x1.811578853013ep-823,
     0x1.f40c12869b7c6p-36, 0x1.c736890ed929ap-925, 0x1.71cd757bc8ed6p-779,
     0x1.4dadd7a707115p-27, 0x1.81b909c515f08p-743, 0x1.7c529b137b1bep-818,
     0x1.584f6933f91bdp-192, 0x1.f62d38584fb51p-699, 0.0, 0x1.dd5e1cc22f163p-303,
     0x1.2d58425e40b71p-255, 0.0, 0.0, 0x1.961146248139p-767, 0.0, 0.0,
     0x1.d0152082ca391p-127, 0.0, 0x1.dd708fc10ca2cp-518, 0x1.39950711343c3p-613,
     0x1.1545aa9a08c58p-540, 0.0, 0.0, 0.0, 0x1.c4b4ac6375a6dp-300,
     0x1.5f82242153ff9p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b43f3922c7cbp-728, 0.0,
     0x1.94860f8f620edp-769, 0.0, 0.0, 0x1.b5ed38d9c9502p-488, 0x1.cfc7e9aace8ecp-442,
     0.0, 0x1.1da3f640ba332p-419, 0x1.b58f03abb3f0ap-833, 0.0, 0x1.183ee09abba2ap-354,
     0.0, 0x1.013832090ab49p-993, 0x1.4492bbf28889ep-859, 0x1.9e87b6453ed5cp-755, 0.0,
     0x1.babb59f839edcp-56, 0.0, 0x1.275262c8f680ap-488, 0x1.2c6cbdd350ap-601,
     0x1.732808663cffp-963, 0.0, 0x1.ded6d9ff4ae74p-98, 0.0, 0x1.f18991ffa10f5p-389,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f162c80da2aep-791, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3ae34b966a74dp-504, 0x1.b0e849349c5d9p-974, 0.0, 0.0,
     0x1.0b552d1c42b61p-880, 0x1.cad92f4fb4412p-578, 0x1.4596f3301086dp-685, 0.0,
     0x1.6fed378f5d179p-694, 0x1.bd5e385da23c8p-587, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a83b83089ecf9p-996, 0x1.d2a5d86d2b6dep-699, 0x1.ef779331a0488p-865,
     0x1.177ee0f61f52ap-378, 0x1.4f286007eb75p-31, 0x1.78f96f1ed95ep-871, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c3752a693c7e6p-723, 0x1.37dd6365eaf99p-125, 0.0, 0.0,
     0x1.ce8449c98e0a9p-971, 0x1.4af3e547a91c3p-327, 0.0, 0.0, 0x1.03e11a8ddb5c5p-388,
     0x1.be757d7862771p-589, 0.0, 0x1.a7dc056db1fcap-372, 0x1.7786b90a4ffe4p-83,
     0x1.f723de261a787p-260, 0x1.84c7d1f37b778p-246, 0x1.c734342d9ea1fp-805,
     0x1.597edcba5dc2cp-513, 0.0, 0.0, 0x1.54f59b4d8c9bbp-116, 0x1.f9a2e46145415p-806,
     0x1.a614f4a1c085cp-605, 0x1.4cbe10213ff6bp-594, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.333818291cde2p-256, 0x1.a2275cfcc0ce7p-927, 0.0, 0.0, 0.0, 0.0,
     0x1.c306632d1ec4bp-427, 0x1.2fd8b1b37733cp-485, 0.0, 0x1.b927a8e131d0bp-901, 0.0,
     0.0, 0x1.e2d2742b5c139p-544, 0.0, 0.0, 0.0, 0.0, 0x1.f490d835ba685p-1010,
     0x1.dc5118da33768p-43, 0x1.aa1bb48542acp-34, 0.0, 0x1.9f4ff2f8c52b6p-155, 0.0,
     0.0, 0x1.73893eff3ae64p-286, 0.0, 0x1.0bdb071334feap-520, 0x1.ea764258ccf9dp-515,
     0x1.1d8f9607d09b1p-521, 0.0, 0.0, 0x1.df823f09299d5p-324, 0.0,
     0x1.dfec92d307e6ep-328, 0.0, 0.0, 0x1.7c84f96c266c4p-483, 0x1.e55e218de75fcp-148,
     0x1.e520522cbb5edp-360, 0.0, 0x1.470e59e549c6fp-905, 0x1.f1e3055f4c0f7p-778,
     0x1.da5910392b495p-860, 0x1.7282f8e0af30cp-309, 0x1.4a3856076c532p-717,
     0x1.f851ac9fb1038p-520, 0x1.7e34ee61192b1p-722, 0x1.5da6f460fb6c6p-246, 0.0,
     0x1.7c7d4b30be87cp-173, 0x1.d85c00dcbd27p-886, 0x1.7bf0a3dcac681p-985, 0.0,
     0x1.28fb64c1decd6p-194, 0.0, 0x1.803ebb1f94161p-317, 0.0, 0.0,
     0x1.1ddd0c6fbabd5p-451, 0.0, 0x1.c2d448f8d23cfp-242, 0x1.d8eb654ac49ffp-748,
     0x1.3cdc4c74e4188p-295, 0x1.6b08d2161f10cp-292, 0.0, 0.0, 0.0, 0.0,
     0x1.b696ac30a83b3p-917, 0x1.aa7998c0b0cc4p-89, 0x1.22987b998e9e7p-824,
     0x1.3d468555c6694p-153, 0.0, 0x1.1ceaca2a9fa75p-213, 0x1.f9c14326e66ddp-189, 0.0,
     0.0, 0x1.2628ec134435ep-691, 0x1.5a0f0517fd09p-304, 0.0, 0x1.97cbeadc5e745p-832,
     0x1.75add093b5b2p-245, 0x1.58b3fe30318acp-1009, 0x1.a3f7d1413a74ep-701, 0.0,
     0x1.b8ca021bc803ep-838, 0x1.1ebd9ce28e2c6p-390, 0.0, 0x1.0a8e0d996803fp-571,
     0x1.b083dbe7eb117p-478, 0x1.b3ad19eeeb9b7p-561, 0.0, 0.0, 0.0,
     0x1.ff416d73ac50ap-236, 0.0, 0x1.d31102783b66ep-242, 0x1.98196400e3935p-479, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_finz_tanhd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tanhd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
