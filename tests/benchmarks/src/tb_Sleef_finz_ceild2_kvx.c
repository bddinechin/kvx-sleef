/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ceild2_kvx.c --function Sleef_finz_ceild2_kvx \
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
     0.0, 0.0, 0.0, 0x1.4b9016a6e09abp-237, 0x1.c0f3e5549a77ap-116,
     0x1.92e9b2263cdb8p-761, 0.0, 0x1.a622c96fb41fep-742, 0.0, 0.0, 0.0,
     0x1.57a8a26d7387cp-38, 0.0, 0x1.3da676e4e721fp-988, 0x1.f351df8da3f66p-842, 0.0,
     0x1.7adcf0661c5c9p-101, 0.0, 0.0, 0.0, 0x1.909d29e952e73p-373, 0.0, 0.0,
     0x1.876fec52f438ep-62, 0.0, 0.0, 0x1.4c1a575e55106p-627, 0.0,
     0x1.9c334b1f183e3p-865, 0x1.8e856f9fd287fp-18, 0x1.e756f8224bb09p-457,
     0x1.efe37084df13bp-447, 0.0, 0.0, 0x1.224c82035ba21p-503, 0x1.f838214269866p-489,
     0.0, 0.0, 0x1.c76d4c4a3e18ep-852, 0.0, 0x1.f9cbf30c2511ep-912,
     0x1.617b74b36c3p-757, 0x1.e09eecac3931ep-374, 0.0, 0x1.6c7f51b4a2d44p-137,
     0x1.d5ff627990bfap-144, 0.0, 0x1.c654dd1068552p-948, 0.0, 0x1.f5885bc89c9b7p-471,
     0x1.803d665ad1486p-948, 0.0, 0.0, 0.0, 0x1.1395f098b0428p-979,
     0x1.b280b9c3a6944p-682, 0.0, 0.0, 0x1.8e7e9ec2ec1e8p-724, 0.0, 0.0,
     0x1.ce3a489e3b30ap-860, 0x1.c4f51d213a3f5p-258, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4fa5a9595972bp-421, 0x1.1e66e0cee8ae2p-626, 0x1.d50c6d6cfc7ddp-470,
     0x1.8f9c1460d2148p-76, 0x1.91a3f2a21cc2cp-810, 0x1.42045fa8d8d07p-633, 0.0,
     0x1.82f1bfc415f38p-76, 0x1.caa4a3efe8056p-246, 0x1.fdaac03c342a4p-62, 0.0,
     0x1.8c420997c234ep-338, 0.0, 0x1.b3f684f36f59dp-426, 0.0, 0x1.e3958631fa973p-820,
     0.0, 0x1.14aab122db84ep-551, 0x1.f7f7dd33fe29cp-57, 0x1.ea2b4e859ecb1p-493, 0.0,
     0.0, 0.0, 0x1.7185beaf5f8fbp-52, 0x1.7db32df4db46fp-496, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e8347e8d9b24ap-831, 0x1.9a8e059f6f3c6p-697, 0x1.b217e0b96c547p-205,
     0x1.d5b241e5ead2bp-318, 0.0, 0.0, 0x1.60af5f809f184p-770, 0x1.5eb8efef6dc2ep-884,
     0.0, 0.0, 0x1.6dc23f9effff6p-581, 0x1.e54ecd5a29675p-99, 0.0, 0.0,
     0x1.a15b4599f4884p-874, 0x1.c43b662b89dacp-650, 0.0, 0x1.99af3f94cb4bep-686,
     0x1.73157ce1a9d0dp-130, 0x1.053461d1adb0ep-558, 0x1.3950a4e8fee13p-545, 0.0,
     0x1.4d62da45ef3bep-410, 0x1.fb026e9e931e7p-516, 0.0, 0x1.bf66865f25cc7p-886, 0.0,
     0.0, 0x1.7e9dc6708ea48p-359, 0.0, 0.0, 0x1.7d07738163ce2p-594, 0.0,
     0x1.9fb16aee3e3ap-746, 0.0, 0x1.5ae2408e03b9dp-572, 0.0, 0x1.948f38e6ad89p-265,
     0x1.b788d90a2d69ep-334, 0x1.2acb4760dee8dp-708, 0.0, 0x1.f5df81594c71ap-70, 0.0,
     0x1.8d2633ec4da47p-516, 0.0, 0x1.66f901cac15d4p-882, 0.0, 0x1.27e579d73d3c7p-203,
     0.0, 0.0, 0x1.bd620589239f7p-429, 0.0, 0x1.d63858b7ee55dp-797, 0.0, 0.0,
     0x1.bf6699086d346p-50, 0.0, 0x1.8982792563a77p-644, 0x1.4899deb03cb82p-824,
     0x1.489250641a31ep-806, 0.0, 0.0, 0x1.be70db6993e61p-442, 0x1.77d30431fed98p-9,
     0x1.aad5ed7deaf4bp-958, 0.0, 0x1.93ff93099e4e7p-517, 0x1.ba84961b0776p-653, 0.0,
     0x1.ce3cf7ee1cf97p-393, 0x1.4c9166064db1bp-199, 0.0, 0.0, 0.0,
     0x1.a705f4f6e6459p-971, 0x1.f8ef1d576f497p-974, 0x1.d47faed21aa33p-137,
     0x1.6bdf73a05c9b8p-748, 0x1.1494b1516c61dp-997, 0.0, 0x1.1c0b2ad355072p-347,
     0x1.ce9edcd70ba6ep-294, 0.0, 0x1.77d1342fc2d7dp-448, 0x1.73bb34c812434p-583,
     0x1.29cf9f728bc11p-871, 0.0, 0x1.c46a830e10874p-336, 0x1.51bc48054cfc1p-765,
     0x1.ae0b1fcb4c191p-682, 0.0, 0.0, 0.0, 0x1.7934bae306f8bp-545, 0.0,
     0x1.48bed5358488bp-428, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b26452a3959ecp-361,
     0.0, 0.0, 0.0, 0x1.4b43fd5e9142dp-922, 0x1.e4128b506970cp-573,
     0x1.7287cfbd71177p-250, 0x1.3e605c3eae415p-602, 0.0, 0x1.6cd46572f99bep-432,
     0x1.efc5076564bf3p-311, 0.0, 0x1.c66ad2fa343e3p-458, 0.0, 0.0, 0.0,
     0x1.a390c67571708p-747, 0.0, 0x1.4493f739bd7fp-642, 0.0, 0x1.5b9b1d9df30b2p-182,
     0.0, 0x1.2a66e3d3c7a9ap-261, 0x1.aa9877025f6b9p-270, 0x1.bb8508db156e9p-751,
     0x1.5960b29396a48p-53, 0x1.e5f773059e82bp-255, 0x1.d948786314c62p-472,
     0x1.804acd06770a9p-48, 0.0, 0x1.2f73fccb2bc91p-553, 0.0, 0x1.fd6edb5d1ec81p-184,
     0x1.54f6329d47e4dp-67, 0x1.af6d2c08130a2p-87, 0.0, 0x1.2306de305d209p-603,
     0x1.896e65c460f74p-388, 0x1.1917c39d14048p-76, 0x1.fe0140d134b88p-700, 0.0,
     0x1.18e70d1ce58bfp-620, 0.0, 0.0, 0.0, 0.0, 0x1.da62838f31143p-462,
     0x1.d208ee78cd2dfp-874, 0.0, 0.0, 0x1.c0e8e2ff43c29p-451, 0x1.b1b19f067c7a8p-978,
     0.0, 0.0, 0.0, 0.0, 0x1.523ffbdfc2971p-549, 0.0, 0x1.e053cd20f699ap-566, 0.0,
     0x1.ff2a8e4156f0bp-111, 0x1.6018651e9a277p-15, 0x1.c63cbc58f37dfp-93, 0.0, 0.0,
     0.0, 0x1.d4eb00e805e34p-23, 0x1.9d2e8c4f991dap-728, 0.0, 0.0,
     0x1.95137ee595c61p-984, 0x1.a9d3e43c8f097p-542, 0.0, 0x1.d8b0594122321p-560, 0.0,
     0x1.c5bc73af5fe01p-542, 0.0, 0x1.4c291351a1e84p-639, 0x1.a2329e1dbcac1p-977,
     0x1.ad4b237fe5ce1p-691, 0.0, 0.0, 0x1.495d33b0afb04p-698, 0.0, 0.0, 0.0, 0.0,
     0x1.b5782cd0b963ep-546, 0x1.02f9acba2e27ap-293, 0x1.eeae6f5f321b9p-19, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2fbdcf6bd6907p-628, 0x1.ad2cba45c933bp-1017, 0.0,
     0x1.7d01fb87301e1p-395, 0.0, 0x1.4c54abc338b99p-283, 0x1.e4fc1c213bf1ap-285, 0.0,
     0x1.60fd2e5e5efecp-33, 0.0, 0x1.20795323076e7p-451, 0x1.4edc5fdb6981cp-826,
     0x1.65c8fe5b6caa8p-397, 0x1.7973755d0ac17p-39, 0.0, 0x1.47c75ad71ddbep-401,
     0x1.c86d252d557bp-809, 0x1.5a62a9350c521p-634, 0.0, 0.0, 0.0, 0.0,
     0x1.8967594b5c58p-502, 0x1.3b276ef5b9e54p-881, 0x1.cc74de2c33546p-993,
     0x1.346d91301bfc2p-242, 0.0, 0.0, 0x1.fa467c9173098p-993, 0x1.8cc88e3422549p-899,
     0.0, 0x1.99d1704ae6979p-514, 0x1.8ae5b5be11bbp-663, 0x1.71af63c53b4f2p-143, 0.0,
     0x1.6cd1453088e32p-114, 0.0, 0x1.a61d3209ffe4ep-437, 0x1.386f5028ba8b9p-460, 0.0,
     0x1.62ec3cba63316p-567, 0x1.8703715ed5623p-931, 0.0, 0x1.664a2ba14e7a6p-214, 0.0,
     0.0, 0.0, 0x1.e7fcca4edb6d3p-210, 0x1.7af9e0c8ce098p-732, 0x1.c334c1a54c9f8p-761,
     0x1.623ccde93389p-319, 0x1.135842b43a42dp-307, 0.0, 0.0, 0.0,
     0x1.7abf1f9fb71dep-706, 0.0, 0.0, 0x1.4f0059db2bca3p-248, 0.0, 0.0,
     0x1.82cf829c087d6p-960, 0x1.74c32a49275c7p-239, 0x1.743fa4d0974f1p-484, 0.0,
     0x1.4c5f9a7210abdp-970, 0x1.0dbeecce25d07p-487, 0.0, 0x1.f9534465c879p-160, 0.0,
     0x1.e54bb2cf7b811p-729, 0x1.9ae0f737c9d33p-914, 0.0, 0.0, 0x1.1757bc8d10ac4p-523,
     0x1.5c792eda1cf65p-83, 0.0, 0x1.6e4c95646d127p-93, 0x1.421615ce81dd7p-216,
     0x1.5b11ccc25898p-943, 0.0, 0.0, 0x1.0044b138446e5p-17, 0.0,
     0x1.f404581097ed5p-824, 0x1.b47b76fd8f3bdp-748, 0.0, 0x1.e9849388aeaffp-985, 0.0,
     0.0, 0x1.63d3fff7492dbp-147, 0x1.34b44d5114c7p-213, 0.0, 0.0, 0.0,
     0x1.bc65d778423ddp-402, 0.0, 0.0, 0x1.f6c361f3bb347p-717, 0x1.f7499ff0b3a21p-61,
     0.0, 0x1.a2a8b5f30a464p-274, 0x1.806959f024a26p-830, 0.0, 0.0, 0.0,
     0x1.a0cee13e53f81p-350, 0.0, 0x1.6e2d3a49d8f75p-187, 0x1.223321e04b55ep-251,
     0x1.58a55906747ebp-999, 0.0, 0x1.c9254bf5d1f1bp-618, 0.0, 0x1.0192d25205a7p-351,
     0.0, 0x1.acd5086cdf9ebp-172, 0.0, 0.0, 0x1.7168df163b05ep-509,
     0x1.7458b90e7c4bp-635, 0.0, 0.0, 0x1.c0d1865915b45p-836, 0x1.7f9aba3804bddp-61,
     0x1.f54f77e3e0fd2p-459, 0.0, 0x1.edbe8b3a91ebbp-375, 0x1.96e29b13ab053p-971,
     0x1.eb4039d6907e5p-997, 0x1.613008451b53dp-186, 0.0, 0x1.1c270ca483151p-85, 0.0,
     0.0, 0x1.f9b89f2e5200ap-624, 0x1.65f8401e368f5p-793, 0.0, 0.0, 0.0,
     0x1.1e4fb17ef337cp-631, 0x1.bb318ec250978p-669, 0x1.2325eb9ccf436p-884,
     0x1.a4500a3ae85dap-380, 0.0, 0.0, 0x1.7a181a23e1588p-898, 0.0,
     0x1.ab44c5b6d1284p-563, 0x1.121a722748ee3p-482, 0.0, 0x1.be08559df85c7p-67,
     0x1.210ebd23e4b47p-442, 0.0, 0.0, 0x1.9064cadfc68bp-276, 0x1.bbcd8ffe126dep-663,
     0.0, 0x1.8fb901956d926p-851, 0x1.7e55f7becba01p-927, 0x1.6878c6ffc28adp-419,
     0x1.e03aaadae5f8dp-65, 0x1.a4a651c72ffaap-611, 0.0, 0x1.79c2f39790595p-131, 0.0,
     0.0, 0.0, 0x1.68ecdf1008cfap-568, 0x1.de13c05993a7fp-398, 0x1.8df7356547e97p-76,
     0x1.c4c38fa53504ap-509, 0.0, 0.0, 0x1.da65d4d60d177p-377, 0.0,
     0x1.2a5b5f79d7201p-450, 0x1.899fdfbea6cadp-998, 0.0, 0x1.bb5e49421383ap-346, 0.0,
     0x1.52c1439d13325p-447, 0x1.12e319db2c55fp-819, 0x1.83a23cacd470fp-738, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.43b88308ba365p-223, 0x1.dc6b53648e6p-1013, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4eaf47e54873ep-239, 0x1.7c2e99d8de05cp-531, 0.0,
     0x1.c0bdb3939555cp-688, 0.0, 0x1.65632dc4cb0aep-378, 0.0, 0.0, 0.0, 0.0,
     0x1.bc8da1f419dacp-384, 0.0, 0x1.59288a42ee9dcp-85, 0.0, 0x1.da3af651543d2p-432,
     0x1.a6f5e3e46d054p-149, 0x1.b4ff9171159b9p-65, 0x1.8651cdf791c94p-740,
     0x1.a310daf7a34cap-97, 0x1.7ad8a8eb29383p-165, 0x1.39b2b646e5e2ep-334,
     0x1.cc0c187f564c6p-951, 0x1.15670c429dfa8p-801, 0x1.740e23d4b9d51p-248, 0.0, 0.0,
     0.0, 0.0, 0x1.451ecf06e3519p-106, 0x1.8df218b9a8e23p-675, 0.0, 0.0, 0.0,
     0x1.06ee180315fe1p-139, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69dc285d1cb7ap-980,
     0x1.f9a2f136a1ad9p-549, 0.0, 0x1.6be84f19cb992p-521, 0x1.d5c261ae1e8b8p-144,
     0x1.4d5807ccc02b2p-451, 0.0, 0.0, 0.0, 0.0, 0x1.4079980d186b2p-908, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9c3a6d8b3b161p-663, 0.0, 0.0, 0.0, 0x1.f7910b339113p-185, 0.0,
     0.0, 0x1.2cc12cf8656d8p-969, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ea6fa6960a87p-857, 0.0, 0.0, 0.0, 0.0, 0x1.2392091d76085p-927, 0.0,
     0x1.0f8a40cec8e53p-362, 0.0, 0.0, 0x1.c8ad154ca0821p-627, 0x1.f5ca05cc1961cp-271,
     0x1.a885c8d00a804p-962, 0x1.2b8dd5a91e728p-889, 0.0, 0x1.3bfa0a68d9ae1p-814, 0.0,
     0.0, 0x1.1d50572aa150fp-755, 0.0, 0x1.c05774cd1da99p-199, 0.0, 0.0,
     0x1.acdb7b884d54cp-867, 0x1.bcd91dfe27d51p-133, 0x1.3fb1f7e714dbep-438,
     0x1.e2ed68fb41f4cp-987, 0.0, 0.0, 0x1.7ebbfdc475bd9p-548, 0.0, 0.0,
     0x1.b61b2cf10c612p-881, 0x1.34f637967fb4p-921, 0.0, 0x1.3fc75e2e9c367p-819,
     0x1.4440aa1c340ap-693, 0.0, 0x1.7f084e7c22e17p-206, 0.0, 0x1.58f6ff3e73dbdp-956,
     0.0, 0x1.8a7e477795c29p-324, 0.0, 0.0, 0.0, 0.0, 0x1.bbe72fba28686p-520,
     0x1.f6311a2618d47p-250, 0x1.e1807399ea3d4p-440, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af8f45ed0a42bp-372, 0x1.1996d4cbbdc4p-267, 0.0, 0.0, 0.0,
     0x1.3be7cdfb008ddp-798, 0.0, 0.0, 0.0, 0.0, 0x1.4b3375d99548ep-534, 0.0,
     0x1.1a35f85619f8cp-723, 0.0, 0x1.586b42cd6e304p-379, 0.0, 0x1.c5c68419a309ap-162,
     0.0, 0.0, 0.0, 0x1.ece3fa35c89f2p-484, 0.0, 0x1.d528cf357a393p-664, 0.0, 0.0,
     0x1.cec800562403dp-945, 0x1.1ac681d1d28dfp-464, 0x1.3068d319d53e5p-105, 0.0,
     0x1.891d031eb6ad8p-400, 0x1.25e6b66d04da9p-146, 0.0, 0x1.71ae3a03d4cep-798,
     0x1.c4b169225684ep-718, 0.0, 0x1.8f98d6158a3f4p-679, 0.0, 0x1.8c23ed8f360afp-448,
     0x1.8bd8b1874aaa2p-31, 0x1.5fb25ce7bdc13p-698, 0.0, 0.0, 0x1.3f815465b19d6p-628,
     0x1.0fdcf365219afp-12, 0x1.9e08d404b0e71p-246, 0x1.f4b5b552cb17ap-296,
     0x1.d1f3f2de1b24fp-561, 0x1.c3f9ef34de9d5p-330, 0.0, 0.0, 0x1.321b5ed50a2f9p-572,
     0.0, 0x1.7a5d36216636dp-463, 0.0, 0x1.89c32059712dep-789, 0.0, 0.0, 0.0, 0.0,
     0x1.560f900a575cap-71, 0.0, 0.0, 0.0, 0.0, 0x1.60cc039ef5ba9p-843, 0.0, 0.0, 0.0,
     0.0, 0x1.de6a7013beec9p-336, 0x1.2f2bcabc01058p-935, 0.0, 0.0, 0.0,
     0x1.0df988faae55ap-509, 0.0, 0x1.9b42fb91446a5p-203, 0.0,
     0x1.e62f7623003b2p-1016, 0.0, 0x1.7117a3fe0a08p-842, 0.0, 0.0,
     0x1.980f39e2166c2p-708, 0.0, 0x1.28ba58e99d4cdp-733, 0x1.5cb8a46b72fa1p-407, 0.0,
     0x1.9e7dcdfff999ep-627, 0.0, 0x1.aea295db6ec81p-482, 0.0, 0.0, 0.0,
     0x1.80a344927ca8fp-600, 0x1.be048e5f66042p-721, 0.0, 0x1.32bfeafdbc69ep-447,
     0x1.9c0e671bb34bfp-452, 0x1.4f542883f6258p-94, 0.0, 0.0, 0x1.f49ba27562eaep-834,
     0x1.c99d010669b53p-445, 0.0, 0.0, 0x1.96a097d1896dfp-462, 0.0,
     0x1.bd2f05649954ap-331, 0.0, 0x1.dc4ad73042a39p-797, 0.0, 0.0, 0.0, 0.0,
     0x1.c935eb2c89474p-161, 0.0, 0.0, 0.0, 0x1.c61d3af2318bbp-1005,
     0x1.95f48fabcda18p-111, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bb2cdc0eae89p-377, 0.0,
     0.0, 0x1.ea4357bd4b657p-397, 0.0, 0x1.9cb24a1d9b003p-154, 0.0, 0.0, 0.0,
     0x1.bc389cf1ef00fp-519, 0x1.a0a6ee6365b4bp-638, 0.0, 0x1.95d17aa4e4597p-43,
     0x1.0d980819d68f5p-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9e69b880ccep-794,
     0x1.f59a6f368cb15p-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bae620585b66dp-979, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.aa5a77af6eb9ap-256, 0.0, 0x1.4bbc4a61eda8ap-1005,
     0x1.56815b66db569p-29, 0.0, 0x1.cc6121a7edf5ap-26, 0x1.ff369dd7e0d2p-636,
     0x1.2e1ea8c61647cp-611, 0.0, 0x1.9ab0bcc0459b2p-273, 0.0, 0.0,
     0x1.deedcb6e83496p-535, 0x1.367b725cce692p-484, 0.0, 0x1.601c82dbbc72dp-611, 0.0,
     0x1.2292e7dde5e05p-581, 0x1.1d4120f2e693bp-184, 0.0, 0x1.2c1f4ba3b75a6p-707,
     0x1.4305c62b1adcdp-339, 0.0, 0x1.1665d3a83f8bap-63, 0x1.b0d3e128a13b7p-41, 0.0,
     0.0, 0x1.2445f10e48132p-203, 0.0, 0.0, 0.0, 0.0, 0x1.3979c7b82a586p-60, 0.0,
     0x1.f832c1b94397p-180, 0x1.91d8c3af42026p-755, 0.0, 0x1.f473cc03d0445p-823,
     0x1.4ff0ada40e4d3p-913, 0.0, 0x1.b384bced09bb3p-530, 0x1.5a2a5d3dc4904p-730, 0.0,
     0x1.446517aaf3d66p-663, 0.0, 0x1.971722ba000f3p-975, 0.0, 0.0,
     0x1.a8674f929a26cp-156, 0.0, 0.0, 0.0, 0.0, 0x1.de2579da62215p-951, 0.0, 0.0,
     0.0, 0x1.b0d12f03d2c7bp-1001, 0.0, 0.0, 0x1.5ca8fdb5c0d54p-153,
     0x1.80607d4455d4bp-160, 0.0, 0.0, 0.0, 0x1.df48addd9ac06p-703, 0.0, 0.0, 0.0,
     0.0, 0x1.e7fc8d852d0f5p-859, 0x1.27bfeb3ff274cp-452, 0.0, 0.0, 0.0,
     0x1.87ad52f79f564p-514, 0x1.5545fcc5e1635p-355, 0x1.874c2ea3de94ap-875, 0.0, 0.0,
     0.0, 0x1.f83fad72cf23ep-648, 0.0, 0.0, 0x1.c4c5f50de1cb6p-723, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5909386885f8p-635, 0x1.a07569ae7746bp-100,
     0x1.6d4c941ed0003p-152, 0x1.ed2c8115d55c7p-233, 0.0, 0.0, 0.0,
     0x1.f949e445ce7cfp-481, 0x1.00199a18e26eep-501, 0x1.cb2a385f691b4p-157,
     0x1.295cee0e97269p-263, 0x1.6635ee1e73ep-287, 0.0, 0x1.8776caedfafd5p-42, 0.0,
     0.0, 0x1.c031eb0e040b4p-600, 0x1.dc128a30cee19p-548, 0.0, 0x1.e7433487a501cp-878,
     0x1.621afb64c6106p-377, 0.0, 0x1.7dd9dc33fa3c5p-196, 0.0, 0x1.da17d1be59924p-67,
     0.0, 0x1.7f9b2b9c79e32p-167, 0.0, 0.0, 0x1.5cd506cd535d7p-929, 0.0,
     0x1.30818a2aa023ep-503, 0x1.949a9ff189179p-863, 0.0, 0.0, 0x1.fc5c309a08505p-989,
     0.0, 0x1.95201f78e1bd9p-643, 0x1.6ef14bb4faf34p-240, 0.0, 0.0,
     0x1.738d46623f1aep-108, 0x1.7afc18d114a3cp-172, 0.0, 0.0, 0x1.9c3afd89d0e71p-865,
     0x1.d0a4d7269b702p-636, 0x1.37a3f45f8039dp-677, 0.0, 0x1.d294b55b7757cp-913,
     0x1.fbc2667f4fe1dp-297, 0x1.c2588b6017ef9p-892, 0.0, 0.0, 0x1.58d7fe5804415p-252,
     0.0, 0.0, 0x1.dcbdc0c8135b5p-738, 0.0, 0x1.ea27bc0bb7fcp-6,
     0x1.a85bcdc0f9a9ep-539, 0x1.ce154e446ffa3p-107, 0.0, 0.0, 0.0, 0.0,
     0x1.7eeb86de597a7p-268, 0x1.54c68b03c952dp-434, 0x1.bbdc48e60c8e6p-217,
     0x1.06368ab97e1e8p-957, 0.0, 0.0, 0.0, 0x1.059b14f264d37p-539, 0.0,
     0x1.f3dd724d7f02ap-571, 0.0, 0x1.f5b8828d38d59p-109, 0x1.8c461670f9f3ap-760, 0.0,
     0x1.33a18a4d52a4bp-557, 0x1.08ac0e93c411ap-390, 0.0, 0.0, 0x1.b0b29c20a52c5p-693,
     0.0, 0x1.1c9124e4f8bdp-41, 0.0, 0x1.387b24dcc7c3dp-924, 0.0, 0.0,
     0x1.c58e7b88a1683p-595, 0x1.21649564cf911p-685, 0x1.74893090fa01fp-399,
     0x1.44f81e1ddf451p-517, 0.0, 0.0, 0x1.034b4b90ca863p-833, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ae085a21c70f7p-687, 0x1.7c52f0b519401p-765, 0.0,
     0x1.73b4af4b35542p-933, 0.0, 0x1.6468730c274c8p-783, 0x1.3d0e3794f8e76p-22,
     0x1.412750edf91edp-705, 0.0, 0x1.addaf25705bf2p-299, 0x1.8031957cbed1dp-301,
     0x1.553e5f3d9b3d6p-224, 0x1.c2b2fd1a55f64p-863, 0x1.3004179cb7eebp-781, 0.0, 0.0,
     0x1.fe650c1600e86p-212, 0.0, 0.0, 0x1.87c9f2819e905p-440, 0x1.ba494934b4045p-188,
     0x1.786a88f8c701cp-469, 0x1.1cf7166c988bdp-678, 0x1.5659942245036p-767,
     0x1.c3a6093394b17p-740
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
            tmp1 = Sleef_finz_ceild2_kvx(tmp0);
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
    printf("Sleef_finz_ceild2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ceild2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
