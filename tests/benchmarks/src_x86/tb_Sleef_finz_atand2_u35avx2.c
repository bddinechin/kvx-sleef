/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand2_u35avx2128.c --function \
 *     Sleef_finz_atand2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.980e470a3a3ffp-398, 0x1.48807d907c092p-171, 0x1.d74cda5626da5p-942,
     0x1.1b1f9927ea8c9p-886, 0.0, 0x1.3c4f5d6272d7ep-464, 0.0, 0x1.13f7c59b567a4p-554,
     0x1.8e0444b1550fap-981, 0x1.2ae5245db9095p-769, 0.0, 0.0, 0x1.1171ccd0d9a3fp-859,
     0x1.e199e32d1e48bp-329, 0x1.5321f9437ceacp-662, 0x1.0f98f369d1292p-212,
     0x1.3ee20eed6c84fp-788, 0x1.6f69f9241ef51p-419, 0.0, 0.0, 0.0,
     0x1.7a45457df1d1dp-759, 0.0, 0x1.05053b80bc009p-837, 0x1.943ad45641da6p-330,
     0x1.02dda0a23ad4p-788, 0.0, 0.0, 0.0, 0x1.0eb343a84a239p-682,
     0x1.1478b75249047p-424, 0.0, 0.0, 0.0, 0x1.851c6613d3901p-626, 0.0, 0.0,
     0x1.7326bdf2f5f13p-234, 0x1.2fa3a1ddb8071p-517, 0x1.ac0496d35e344p-912, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c9bae40b05a54p-758, 0.0, 0x1.e6aac651fa658p-8, 0.0, 0.0,
     0x1.6847554a64372p-896, 0.0, 0.0, 0x1.1feba763f9599p-342, 0.0, 0.0,
     0x1.f2510f65b136p-872, 0.0, 0.0, 0x1.0ff7b39aaf975p-261, 0x1.46f904b467b54p-676,
     0x1.9cdd3c94e2f1fp-409, 0.0, 0x1.3d950bc7ecf9fp-618, 0.0, 0x1.7c8ce242d1746p-958,
     0x1.11d735565269bp-340, 0x1.5460b64609c7fp-510, 0x1.9e34e68c480ecp-547, 0.0,
     0x1.7e80c67508844p-852, 0x1.6a93c60ca2513p-115, 0.0, 0.0, 0.0,
     0x1.7ea0105551b43p-815, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7dc9cae12993p-646, 0.0,
     0x1.5efb57c471a66p-286, 0x1.c798f4cfa5a4ap-960, 0x1.eadaf5ae676cap-561, 0.0,
     0x1.c87c5a3ae3b5p-281, 0.0, 0.0, 0x1.dc0e51c5798bep-461, 0.0, 0.0, 0.0,
     0x1.e4c97e2de8cbp-955, 0x1.fc26c5d76b046p-329, 0.0, 0x1.b3af81e1cbfdep-221, 0.0,
     0.0, 0.0, 0x1.2438bdd27c955p-617, 0x1.95f77e758e9d8p-569, 0x1.3f62108af8e56p-631,
     0x1.d20ff685e9f1cp-895, 0.0, 0.0, 0.0, 0x1.26a2d8d9b44b8p-509, 0.0,
     0x1.84b350104ed66p-48, 0.0, 0x1.61b46b41fe14dp-776, 0.0, 0x1.5ba89f42d1c9dp-473,
     0.0, 0x1.429fd5537d1ebp-416, 0x1.c7b6696b6ef5ep-113, 0.0, 0x1.9854e80cb97bp-237,
     0x1.12d40a86fc93bp-32, 0x1.d2d4d919a29e5p-88, 0.0, 0.0, 0.0, 0.0,
     0x1.a9ff89dbd15ap-268, 0x1.47ab7537e34ecp-412, 0x1.aa5fb2f1a1f47p-864, 0.0,
     0x1.171abe5bd39eap-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f0bb72c6bddp-789,
     0x1.0d1c68ef70f2bp-775, 0x1.787c1765a20dfp-458, 0.0, 0.0, 0x1.eb05bf9996c4ep-307,
     0.0, 0.0, 0x1.4349a0073b121p-1009, 0x1.fdc2f4fa48244p-653, 0.0, 0.0, 0.0,
     0x1.b52064679a46ap-328, 0.0, 0x1.660058a362899p-122, 0x1.99775cfe98d24p-128, 0.0,
     0.0, 0.0, 0x1.fb52c38651bf1p-565, 0x1.c9350e414bfbbp-90, 0.0, 0.0, 0.0, 0.0,
     0x1.6361fa9665b3cp-752, 0x1.021666d520753p-50, 0.0, 0x1.69f8ee745f81fp-345, 0.0,
     0x1.ba11fcdd3eb37p-846, 0.0, 0x1.ab9d46f6c0d48p-243, 0x1.a8183186b4c4p-781, 0.0,
     0.0, 0x1.00845f3e5661bp-610, 0x1.adc05451cf37cp-32, 0.0, 0x1.c1ffcd11bb06cp-611,
     0.0, 0x1.eb5c68bcd7096p-883, 0x1.fd788d5ef9604p-844, 0x1.25db3bfa1d911p-59,
     0x1.278b78518619fp-118, 0x1.74ccde86170ecp-822, 0x1.1a8491b3ab826p-321, 0.0, 0.0,
     0x1.083e9f563086ep-813, 0x1.7924046b7c8d2p-749, 0x1.e3ddb1cca21cfp-115,
     0x1.dd0ba4eacabfp-17, 0.0, 0x1.39b77d89cfbddp-941, 0.0, 0.0, 0.0, 0.0,
     0x1.7f34dfa662e5bp-907, 0x1.ee4860ce448d2p-13, 0.0, 0.0, 0x1.3a3ab464436c2p-193,
     0x1.06933065e71e2p-480, 0x1.342765b60ad63p-792, 0x1.261426b4f5da5p-657,
     0x1.63fb43fd50615p-952, 0x1.7e6308f00f9e1p-634, 0.0, 0x1.c92f14d286c5bp-384,
     0x1.f98cd552c8e1dp-972, 0x1.d63d13876a9dap-872, 0.0, 0.0, 0.0,
     0x1.632227d62c6c3p-527, 0.0, 0.0, 0x1.0aa7d21fffc37p-629, 0.0, 0.0,
     0x1.28b071f884533p-451, 0.0, 0.0, 0x1.e8d9aec187de3p-32, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98f789bca0738p-581, 0.0, 0.0, 0.0, 0.0, 0x1.d2edd381a30e5p-397,
     0x1.7da4a63d344efp-826, 0x1.e6d5dfb781f7fp-191, 0x1.1e27efa7d905p-275, 0.0, 0.0,
     0.0, 0x1.8a6a479a4a812p-265, 0x1.7fa3d5a9d1492p-591, 0x1.bf6043557ab77p-351,
     0x1.5d9a69e2a3b0ap-664, 0x1.caefa2ed4fb8bp-593, 0.0, 0.0, 0x1.a2b93cb72b451p-105,
     0.0, 0x1.5ef804f2a4318p-622, 0x1.203df4d3a1c1p-428, 0.0, 0.0, 0.0,
     0x1.3a3214fcf5a02p-159, 0.0, 0.0, 0x1.0bdbdaa2ed8e1p-308, 0.0,
     0x1.89bf98c789f4bp-677, 0.0, 0x1.1567b2823aa27p-317, 0x1.6851bd56cce24p-972,
     0x1.3984ff0b5cf5ep-859, 0x1.d047ad52eeb93p-972, 0.0, 0x1.e9510e7385eedp-605,
     0x1.05391cd477fa3p-391, 0x1.3e97f6890fe84p-837, 0x1.fd5da9fe85db1p-649, 0.0,
     0x1.052e7ed13e3b2p-320, 0x1.3c48f89cf2c7ap-448, 0x1.112eb05e3cc4dp-760, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.27764b8b6fbbbp-375, 0x1.e25d276bbcee1p-808, 0.0,
     0x1.a43dbb96dac29p-31, 0.0, 0x1.91b01774990aep-441, 0x1.50453bc0b159bp-74,
     0x1.55247f905a739p-219, 0x1.a0653081385bcp-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e39cc78ff126dp-791, 0.0, 0.0, 0x1.d4ee5e57d9498p-143, 0.0,
     0x1.a5a1cf5a9a4e6p-769, 0x1.f0713068bb3e7p-187, 0x1.2d239c7b3a142p-208, 0.0,
     0x1.1c5ee8c861db8p-271, 0x1.7b66ef42049a7p-610, 0.0, 0x1.8fbbddabf7101p-777,
     0x1.b3cc3afba4ed4p-405, 0.0, 0x1.46bbe24ba99cep-667, 0x1.718bfd74e0f2cp-796,
     0x1.2de0dd807ce3p-867, 0.0, 0.0, 0x1.b91882374c982p-172, 0.0, 0.0, 0.0, 0.0,
     0x1.ea09a4daf2807p-560, 0.0, 0.0, 0x1.5cd87e8409ddcp-501, 0.0,
     0x1.eaec0763962e4p-289, 0x1.040d0ec953c39p-6, 0x1.5ecab6efc375ep-672, 0.0,
     0x1.519a3387f5223p-584, 0.0, 0.0, 0x1.d1007340b4612p-725, 0x1.96c197e864636p-414,
     0x1.e0c95537d53aep-128, 0.0, 0.0, 0x1.adeb7940fd0e3p-894, 0.0,
     0x1.36f14e7e1213ep-747, 0.0, 0.0, 0.0, 0.0, 0x1.faf12005197eap-544,
     0x1.79a02dbd08904p-626, 0.0, 0.0, 0x1.07684edadb98cp-514, 0x1.eb3890015351fp-434,
     0.0, 0x1.cf9fa163d3a62p-923, 0x1.545bff5f4ee9bp-898, 0.0, 0x1.7a74903a26663p-388,
     0.0, 0.0, 0x1.ba8a45e57ed2ep-85, 0x1.6eae9f3ea8a4cp-836, 0.0,
     0x1.d52b6208948cap-658, 0x1.878f1c248b7ddp-414, 0x1.3df20b5b16f79p-758, 0.0, 0.0,
     0x1.99f3899509939p-805, 0.0, 0.0, 0.0, 0x1.fa6d6d0442266p-618, 0.0, 0.0,
     0x1.362164797d01ep-744, 0x1.86622c089bea5p-549, 0x1.c4620f944620bp-698, 0.0,
     0x1.336d07a88661cp-219, 0.0, 0x1.9be92bbd8f068p-122, 0.0, 0x1.60446068f2e9dp-667,
     0.0, 0x1.bb66307eba38fp-907, 0.0, 0x1.ceaade3e67d59p-857, 0.0,
     0x1.7df97398d6709p-632, 0x1.9b74b68801732p-951, 0x1.47880a1b75a8cp-667,
     0x1.a22beb62d84eep-285, 0x1.62ee80d7a9f33p-602, 0x1.62cfb163341abp-123,
     0x1.2310481985232p-342, 0x1.f35f0048dac77p-1015, 0x1.226d5abf01325p-1010,
     0x1.3d173a49bac78p-916, 0.0, 0.0, 0x1.db1d8dc3ff47fp-955, 0.0,
     0x1.d0620716de951p-391, 0.0, 0.0, 0x1.17faf3c3eb4c9p-730, 0x1.e7141678ef7edp-1,
     0.0, 0x1.f6a43e3a4acabp-218, 0x1.2d89fc887c1a8p-952, 0.0, 0x1.fbdadd3055c5cp-502,
     0x1.2fd5b50f5b503p-499, 0x1.ce303d6bd992fp-901, 0.0, 0x1.63dba77ec3c37p-584, 0.0,
     0.0, 0x1.15e97103eeb8cp-920, 0.0, 0.0, 0.0, 0x1.ab5f00dd52849p-308, 0.0,
     0x1.a781e2d04395p-384, 0x1.946b948ed52a3p-805, 0.0, 0.0, 0x1.e7849fd9eb919p-460,
     0.0, 0.0, 0x1.a646f6806d79cp-765, 0x1.a4a6d277eae1dp-271, 0x1.e91cf02c62008p-764,
     0.0, 0x1.9317e282c02e6p-805, 0x1.a60286b279163p-563, 0.0, 0x1.9b7716a7fa9a8p-687,
     0x1.e48fe175c0bap-909, 0.0, 0.0, 0x1.5bd16077f5952p-784, 0.0, 0.0, 0.0,
     0x1.086e07cb86767p-280, 0.0, 0.0, 0x1.f4e03d60465c9p-175, 0x1.b24f87bab8d38p-970,
     0x1.534055b8c7777p-872, 0.0, 0x1.c768f015e878bp-142, 0x1.547fdbdd41b19p-335, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11977e9fb7976p-668, 0.0, 0.0,
     0x1.f0db9e527a10cp-704, 0.0, 0.0, 0x1.19ca6496bb709p-371, 0x1.33251835ac43ap-196,
     0x1.e01883f3815bcp-420, 0x1.9b9c92cfd4608p-765, 0.0, 0.0, 0.0,
     0x1.2aec549d1aa83p-321, 0.0, 0x1.63baa8f1edb2p-679, 0.0, 0x1.9c241d62780e6p-599,
     0.0, 0.0, 0.0, 0.0, 0x1.4e6df7ba9225dp-461, 0.0, 0x1.0b3082e3efba6p-249,
     0x1.a742581bfc513p-487, 0x1.2acf24a9ceb5ap-413, 0.0, 0x1.481560d2588c8p-61, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.794642ffb54cep-741, 0.0,
     0x1.a25177da236dcp-615, 0x1.77a8b40fc192fp-816, 0x1.0fc3603d9e201p-580, 0.0, 0.0,
     0.0, 0.0, 0x1.17e3d02c181a2p-179, 0x1.b7a74447f3e05p-317, 0x1.6d35a82cdfadfp-50,
     0x1.5a62dcedec322p-661, 0x1.6a4c33000c7f2p-546, 0x1.4c4a6ff6f012fp-430,
     0x1.a4acaa26d2ebdp-378, 0.0, 0x1.923cb929d6687p-415, 0.0, 0.0, 0.0,
     0x1.512ff5f169be3p-591, 0x1.2209d49deb545p-898, 0.0, 0.0, 0.0, 0.0,
     0x1.d9c06942920a6p-47, 0.0, 0x1.d8ebf90c4a331p-514, 0x1.14155a5944cabp-149,
     0x1.94d9c0b327955p-493, 0.0, 0x1.77efdf051d88bp-560, 0x1.4a243005b3c1bp-271, 0.0,
     0.0, 0x1.5fa4383f520dfp-998, 0.0, 0.0, 0.0, 0.0, 0x1.26a4c89154a2fp-124, 0.0,
     0.0, 0.0, 0x1.cc34ab5e038dap-945, 0x1.181d576a7d8a6p-658, 0x1.b4471e1a31fdep-389,
     0x1.37af8b9dc102ep-559, 0x1.a66ba7dbe63ffp-682, 0x1.d1f20846268c8p-212,
     0x1.76bd0106c479fp-555, 0x1.cce12dff66bbfp-121, 0.0, 0x1.939cad6aeb5b2p-581,
     0x1.70c99994f8e0cp-379, 0.0, 0x1.f26484bc1e5f6p-817, 0x1.eebef562fad7ap-184, 0.0,
     0x1.4d2fb071e8c49p-840, 0x1.43e3221f1832ep-91, 0.0, 0x1.5566c0cdf0511p-939, 0.0,
     0.0, 0.0, 0x1.f4e42062bfdddp-222, 0x1.b9545916e8af2p-848, 0.0,
     0x1.557d23f1f749ap-425, 0x1.9dc53e3ec1cd2p-716, 0x1.6c352b70d8cbbp-106, 0.0, 0.0,
     0.0, 0.0, 0x1.7bcdcd53c3eep-847, 0x1.b88cdcb45fb8dp-151, 0x1.3a2a7611f02c3p-430,
     0.0, 0.0, 0.0, 0.0, 0x1.9b23b4a573f0bp-1017, 0x1.5a36945762669p-626, 0.0,
     0x1.697674d5ef616p-614, 0x1.e39d054a0f217p-855, 0.0, 0x1.46984b53a049ap-503, 0.0,
     0x1.33f0ff9f45348p-473, 0x1.09cc3824b4e32p-609, 0.0, 0x1.59df3ca1e8cf5p-32,
     0x1.c53486951835bp-648, 0x1.832c005fdff3cp-594, 0x1.8b7f5a6ad1573p-881,
     0x1.cf6c36c060d8p-815, 0.0, 0.0, 0.0, 0.0, 0x1.3bb22b8f2c034p-286,
     0x1.0b1c594353f97p-338, 0.0, 0x1.25cc2a0a894cap-435, 0.0, 0.0, 0.0, 0.0,
     0x1.85e50cc17b7c6p-934, 0x1.a57edf6df4845p-213, 0.0, 0x1.7d222e08e6b8p-624,
     0x1.c1f5e9e07dc5ep-590, 0x1.d5ba21374fa93p-414, 0.0, 0.0, 0x1.df24711c98e07p-995,
     0x1.c0d501123c55dp-665, 0x1.60f83f15360ep-29, 0x1.9d893f818aa06p-818,
     0x1.02dcd9d853b63p-1014, 0x1.761961280f2fep-388, 0.0, 0.0, 0.0, 0.0,
     0x1.b3d7fed385a1bp-636, 0x1.6225d4dba7e4cp-931, 0x1.19a5853d6eaa8p-553,
     0x1.ee3cd193cbe9ep-285, 0.0, 0.0, 0x1.adb4dcf3e1e06p-986, 0x1.7426414dfd2b1p-411,
     0.0, 0.0, 0.0, 0x1.a5f2ac552b80fp-567, 0x1.e0c1ae0e31f1bp-837, 0.0, 0.0,
     0x1.644783c77ec8p-475, 0x1.0383d7834fecbp-544, 0.0, 0.0, 0.0,
     0x1.7ac583c40d9ccp-77, 0x1.ac7f009316d9p-963, 0x1.50cc2d619bd74p-37,
     0x1.4df18017550eap-182, 0x1.87e7457dbc62bp-64, 0x1.ce7716dd4e08ap-765, 0.0,
     0x1.bb4781c73b85ep-487, 0x1.bc796cc6d5b1ap-32, 0x1.ce330d888560fp-831,
     0x1.af52509be2798p-393, 0x1.c6720813cc55cp-312, 0.0, 0x1.7bd402a7bd349p-141,
     0x1.02088d60b9905p-44, 0.0, 0x1.5335a5179c83p-804, 0.0, 0.0,
     0x1.cf949899dff06p-33, 0x1.8139906cbbf3cp-191, 0.0, 0.0, 0.0,
     0x1.848faf541e77fp-913, 0x1.6daf0ed26528ap-197, 0.0, 0.0, 0.0, 0.0,
     0x1.fcbb95146ed73p-627, 0.0, 0.0, 0.0, 0x1.bd1f56ef0790dp-932,
     0x1.95ba6710e5a4fp-875, 0x1.ce80a1453b0c7p-93, 0.0, 0x1.c8dc9ebead505p-505,
     0x1.a4b95edf048a1p-317, 0x1.2b2bea0c0c57ep-163, 0x1.4b37687126fc2p-631, 0.0,
     0x1.48ab8b56300ebp-400, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.208c1bd1c7864p-54,
     0x1.b04e881c48cc7p-451, 0x1.fffbddcd4c433p-134, 0x1.d414eb58c279fp-584,
     0x1.f6a50409ca183p-711, 0x1.29eb10296fd66p-921, 0x1.52e80d3ac6f74p-356, 0.0,
     0x1.7c53a1dd94d3fp-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eba8bfc71a50ap-616, 0.0,
     0x1.745eb155991a2p-401, 0.0, 0.0, 0x1.95ea02e82d53dp-310, 0x1.67170add37d5ep-536,
     0x1.67781a17232fap-837, 0.0, 0x1.5664412916047p-606, 0.0, 0x1.3a0bb025613e4p-148,
     0.0, 0x1.49feb30f96e1dp-285, 0.0, 0.0, 0.0, 0x1.36e43e4e7f4aap-601,
     0x1.17c6f724b79b6p-12, 0x1.e967a88aab1ecp-190, 0x1.07e52f32894dp-350, 0.0, 0.0,
     0.0, 0.0, 0x1.a91ae4fada3b7p-262, 0x1.f2d1928acc597p-786, 0x1.af64bad7770f7p-282,
     0.0, 0.0, 0.0, 0x1.f8a24366f6a87p-376, 0x1.de834973c9471p-644,
     0x1.ebba74aec9732p-682, 0.0, 0.0, 0x1.d48edf18c17efp-392, 0.0,
     0x1.04dc7c09a11e1p-82, 0x1.3c3cc29c5f471p-131, 0x1.ea4fcd87a062bp-201,
     0x1.3e8782fb38f78p-910, 0x1.d768d7d51f9bap-881, 0.0, 0x1.2ca9c24ef498ap-287,
     0x1.1e0f22f5105c1p-920, 0.0, 0.0, 0x1.102e083370bfcp-797, 0x1.54b4b680e3ae7p-529,
     0.0, 0x1.df9628454a38p-561, 0.0, 0x1.82856fabe201fp-783, 0x1.61dcbba60363fp-839,
     0x1.18ef1f387ad43p-87, 0.0, 0x1.e309dc9f796bdp-362, 0x1.cf7e4a5e96c88p-151,
     0x1.cd27c22123943p-37, 0.0, 0x1.12fd6b1d350cp-600, 0x1.303570b5cde43p-223,
     0x1.3322bc97254cfp-424, 0x1.89382113dbe52p-151, 0x1.328e4eaa34ab5p-624,
     0x1.e3b317db92d5p-70, 0x1.e4a457defb8acp-154, 0x1.973870ed53ad8p-538,
     0x1.06322074fe865p-921, 0.0, 0.0, 0.0, 0x1.c5c8b7636df48p-718,
     0x1.f51f179f3c259p-104, 0.0, 0.0, 0.0, 0x1.2ec9f8ab50024p-823,
     0x1.3dd2c114511c6p-861, 0.0, 0.0, 0x1.14fddec77518p-555, 0.0, 0.0,
     0x1.19ad28bcdef09p-187, 0x1.276ef5b570f94p-215, 0.0, 0.0, 0.0,
     0x1.cb21f65614dacp-862, 0x1.94217368e0cfcp-336, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.370fdb13c2b01p-781, 0x1.1195a5ad73597p-357,
     0x1.c3ad244834342p-975, 0x1.7c6ed0d865892p-901, 0x1.b8743237c0b24p-634,
     0x1.7b3d442c12478p-310, 0x1.8e8b780d172eap-801, 0x1.6181ca9cd8847p-166, 0.0, 0.0,
     0x1.d4e74e2617c66p-599, 0.0, 0x1.03af4171a7761p-444, 0.0, 0.0,
     0x1.7f7fbdce5bfc3p-645, 0.0, 0.0, 0.0, 0.0, 0x1.b91ddee19eb9ep-121,
     0x1.1197572f07163p-103, 0.0, 0.0, 0x1.f89d1b011fcc7p-336, 0.0,
     0x1.8f60c2eb8126p-482, 0x1.f12ecac4dd79ap-875, 0x1.dbdd51afc588dp-341,
     0x1.f2b4fe043138fp-603, 0.0, 0.0, 0x1.54c27d01cd02p-473, 0.0,
     0x1.89622ee082561p-762, 0x1.fe507c376fb8bp-289, 0.0, 0x1.d8d497cd858ep-484,
     0x1.3171ec6506539p-941, 0x1.c1d34a07a8022p-522, 0x1.37cd5e7d4e9b3p-960, 0.0,
     0x1.88c4c387855b1p-380, 0.0, 0.0, 0x1.792b8e8f88bep-297, 0x1.34c3133a1d939p-345,
     0.0, 0.0, 0x1.4e8b66a39f7ecp-320, 0.0, 0.0, 0x1.b390d231dc6bcp-356,
     0x1.3d44fe128c64ap-226, 0.0, 0x1.a903161627224p-190, 0.0, 0x1.910491c184e12p-176,
     0.0, 0.0, 0x1.6337928b1d2f7p-110, 0x1.f7cc1d1c2fbcbp-946, 0x1.b73c40ba0c5d7p-522,
     0x1.f10e5ff1f1debp-864, 0.0, 0.0, 0x1.9237b88b31b9fp-178, 0.0, 0.0,
     0x1.cfafa19ab552cp-648, 0x1.f9eb0bed19d1p-404, 0x1.b160aac5d3affp-805, 0.0,
     0x1.1f011504e4345p-716, 0x1.7546238934736p-143, 0x1.95cd12ea5def5p-101,
     0x1.66145448ae5fap-533, 0x1.a81e8198bd09ep-736, 0x1.8cdf7239709e7p-800,
     0x1.05ff700decd1dp-203, 0x1.5ebbdcd22eba8p-913, 0.0, 0x1.9955c08c583ecp-249, 0.0,
     0x1.3a2023ce3a343p-1008, 0x1.9eb3ddda440e9p-821, 0.0, 0x1.ad9d84fb12527p-288,
     0x1.b2b194ac05213p-395, 0x1.1603464a84729p-648, 0.0, 0x1.ea26145e881aep-720,
     0x1.579b9b00f4b1dp-175, 0.0, 0x1.1dd68d92714fap-571, 0x1.b20f174af7c35p-309,
     0x1.cd8c0e9e4088ep-3, 0x1.82fb2d70ea213p-909, 0.0, 0.0, 0x1.8f3a3510f40b3p-694,
     0x1.c0297d6a17cf5p-738, 0x1.fedb3f41e7625p-537, 0x1.284ee1bd016a4p-989, 0.0,
     0x1.ed2d4374d19ebp-438, 0.0, 0x1.f8b2c1ed9200dp-456, 0.0, 0x1.ec9ff0c39fabcp-532,
     0x1.6798cd2dab5a8p-475, 0.0, 0x1.8feabb10f9766p-310, 0x1.b32c826ed993fp-310,
     0x1.747b3fb0ddbdep-941, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14d4ea82a2046p-263, 0.0,
     0.0, 0x1.b5d2828131bfcp-552, 0.0, 0x1.94fa1a125703p-430, 0.0, 0.0, 0.0,
     0x1.a8428c88bc8b3p-945, 0x1.0f9828984e0f2p-514, 0.0, 0.0, 0x1.c889b80abe552p-831,
     0x1.a008114e41ad8p-867, 0x1.9799fea94672cp-76, 0.0, 0x1.53354c1e4b127p-718, 0.0,
     0x1.0f70258b39d48p-186, 0.0, 0.0, 0x1.90cf9c7765b09p-322, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.36eebacd62ab7p-982, 0x1.70af85273edd5p-321, 0x1.328365ef125fcp-796,
     0x1.5689df3b1edcp-899, 0.0, 0x1.d4ec5791e5812p-302, 0x1.943577eae985fp-919,
     0x1.e9328b8997534p-733, 0x1.3457211935ff5p-565, 0.0, 0x1.ff8bfc0f07ab3p-38,
     0x1.f3365c30b5edbp-961, 0.0, 0.0, 0.0, 0x1.69262cba9d44dp-799,
     0x1.537a179da6a53p-759, 0.0, 0x1.1b1db44c2d992p-853, 0x1.cb252072d1004p-402,
     0x1.2ea5cec104cabp-961, 0.0, 0.0, 0.0, 0x1.5122e3972f8dcp-400,
     0x1.a82441724f6cbp-929, 0x1.8fad9e7607f81p-30, 0.0, 0x1.e12227ed77719p-752,
     0x1.2a37c9e45445ap-726, 0x1.5ffb5b6ed873ep-956, 0.0, 0x1.2795d65703274p-206,
     0x1.0d1cf4d3df1e8p-279, 0.0, 0x1.1e3c25b3318b1p-378, 0x1.d41ddb1da01aep-489,
     0x1.4d5e43af1c3c5p-992, 0x1.de8bc3d32c20fp-424
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
            tmp1 = Sleef_finz_atand2_u35avx2128(tmp0);
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
    printf("Sleef_finz_atand2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atand2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
