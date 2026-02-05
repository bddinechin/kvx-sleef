/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_u35avx2128.c --function Sleef_sqrtd2_u35avx2128 \
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
     0.0, 0.0, 0.0, 0x1.5ef49b339a87bp-674, 0.0, 0.0, 0.0, 0.0,
     0x1.5462b1bf50ebdp-45, 0x1.c8a57042f750ep-374, 0.0, 0x1.5e61e7edbe5f6p-468, 0.0,
     0x1.dc2e7aa66ff9p-754, 0x1.addcb63ae8557p-854, 0x1.b213eb66f38efp-968,
     0x1.c13abcdcf70c3p-993, 0.0, 0x1.d85e4751eb9ecp-606, 0.0, 0x1.46688f9ca541bp-792,
     0x1.50639f8ae785fp-127, 0x1.a58764276d00cp-895, 0x1.194d70254c004p-775, 0.0, 0.0,
     0x1.25cc6dd3c9152p-203, 0.0, 0.0, 0x1.5cb30939be10dp-517, 0x1.a9afe7abdc18bp-518,
     0.0, 0.0, 0.0, 0.0, 0x1.0e58bb118c853p-423, 0.0, 0.0, 0x1.5990ccd44fac8p-905,
     0.0, 0.0, 0x1.79478b7d01546p-202, 0.0, 0.0, 0x1.fc39bce6e7163p-602, 0.0, 0.0,
     0x1.0fb6f56793d13p-879, 0x1.0be472fdafd29p-352, 0.0, 0.0, 0x1.44093f5ba49bbp-784,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1929898102c9cp-367, 0.0,
     0x1.d0625aa4f9eep-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1da58f2359f96p-411, 0.0,
     0x1.f0cb4f6ba59bp-856, 0x1.290508699fef7p-670, 0x1.95d3196a22026p-766,
     0x1.270d377227f3ap-840, 0.0, 0x1.9e04a7452743ep-164, 0x1.9cad1e33c6dc7p-509, 0.0,
     0x1.0b2882450aa4ap-840, 0x1.6891400a66921p-663, 0.0, 0x1.f814b9e5c52ebp-997,
     0x1.05925d6dc37cp-58, 0x1.f98a2a089bdb9p-303, 0x1.8dd0108910839p-655, 0.0,
     0x1.0f8822595947ap-988, 0.0, 0.0, 0.0, 0.0, 0x1.c388213999234p-1001,
     0x1.0999781c5b7b5p-653, 0x1.8e3bea848129p-676, 0x1.7a16861facf49p-180, 0.0,
     0x1.e98e71069354p-236, 0x1.da8298c40553cp-189, 0x1.c041c61f5ceaap-406,
     0x1.cc4e0bfc4e4aep-139, 0x1.934fe926b1ap-184, 0.0, 0.0, 0x1.d7a19e6d30733p-596,
     0.0, 0x1.108bb18a5a6f6p-131, 0.0, 0x1.c8e0db6116ba8p-721, 0.0, 0.0,
     0x1.61c43aaf66a0bp-806, 0x1.93603dd9ac39bp-940, 0x1.bc6b50b213873p-103, 0.0, 0.0,
     0.0, 0.0, 0x1.8a07dce9b7ed4p-344, 0.0, 0x1.8143fde38a1b5p-279,
     0x1.32b32d185f3edp-765, 0x1.8c5d61bcd9b3fp-779, 0x1.23040a9ccfdcfp-662,
     0x1.e82727928e9f2p-763, 0x1.f8d16411cf458p-776, 0x1.0bd0c8784b64bp-402,
     0x1.4b31eb748bb74p-934, 0x1.9d06bee928d81p-544, 0.0, 0.0, 0.0,
     0x1.2549ef63a38d1p-581, 0.0, 0.0, 0.0, 0x1.5e53be5b858edp-1011, 0.0, 0.0, 0.0,
     0.0, 0x1.e8c6a77d144fp-257, 0.0, 0.0, 0.0, 0x1.a36a38c240d84p-800, 0.0,
     0x1.3c0377d57a9b5p-119, 0.0, 0x1.c374e98989bddp-925, 0.0, 0x1.ab9c71c00e34fp-178,
     0x1.102ca23b6af53p-239, 0x1.4c94803dab8c3p-142, 0.0, 0.0, 0.0,
     0x1.c0e39574b44c5p-658, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8df1ec75076a5p-787,
     0x1.f408c8ad9c07ep-190, 0.0, 0.0, 0x1.621a8e0f8306p-1010, 0x1.0d847a1db4661p-255,
     0x1.b3349df0379e2p-988, 0x1.f59e8214e293ep-519, 0.0, 0x1.2638a5ec178b9p-54, 0.0,
     0.0, 0.0, 0x1.84141cb1e15ep-438, 0x1.22f07e65a0e22p-8, 0x1.5acebcd22a752p-507,
     0.0, 0.0, 0x1.e71d776eda8acp-878, 0.0, 0x1.7668719bff335p-924,
     0x1.c55129505622bp-44, 0x1.9b8150864d3b6p-779, 0.0, 0x1.e932f7123882ep-959, 0.0,
     0.0, 0x1.de08cef53c258p-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ab23c81508a51p-834, 0.0, 0.0, 0x1.8e0537e833255p-55, 0x1.dacf60f265c13p-408,
     0x1.f857bbc434643p-293, 0.0, 0x1.09a8fd750ad91p-621, 0.0, 0x1.581e281b84759p-459,
     0.0, 0.0, 0x1.de68dc3c40d2ep-713, 0.0, 0x1.8c0a4216ddf62p-688, 0.0,
     0x1.416f40142f14ep-753, 0.0, 0x1.bd6b342e23c03p-984, 0.0, 0.0,
     0x1.775577862d994p-629, 0x1.6b4ef3f86dafdp-218, 0x1.b69ce8b80b173p-216, 0.0,
     0x1.17343b7e098f5p-631, 0x1.8c9ec1cab4362p-106, 0x1.5a69d46a8c982p-191, 0.0,
     0x1.e1890e7ad6b56p-611, 0.0, 0x1.078f0a2306ffdp-946, 0x1.e2a21cc1f17dp-646, 0.0,
     0x1.d70d3fb927d28p-269, 0x1.6fe44706ca0fdp-73, 0x1.95ac3745c60dep-411,
     0x1.e9ae5fa0ed96fp-109, 0.0, 0x1.15fa559ad9216p-517, 0.0, 0.0,
     0x1.099b2b1ee7988p-860, 0x1.c4b2e0178ad03p-839, 0x1.ca936780a2ecbp-969,
     0x1.c3414010a984ep-51, 0.0, 0.0, 0x1.680cf10dfe4d3p-976, 0x1.e6ed3199cc13ep-86,
     0x1.c4904c158a765p-701, 0x1.242d6ef06199fp-959, 0.0, 0.0, 0x1.bc482b98d131bp-752,
     0x1.f49f8e74bb71dp-469, 0x1.3a3368437958cp-759, 0.0, 0x1.16867a990715p-548, 0.0,
     0x1.55e3e6b540e0cp-846, 0.0, 0x1.95efb85a96a05p-793, 0x1.9673ba48e1353p-248, 0.0,
     0x1.fc56af34b01e1p-468, 0x1.d5b6f7656e2a4p-631, 0.0, 0.0, 0.0, 0.0,
     0x1.856939769e6a4p-412, 0.0, 0.0, 0x1.7d3fda0aed63cp-967, 0x1.8148da37ac992p-7,
     0x1.c87928f384475p-230, 0x1.497e37f64fb5cp-41, 0x1.6d37ac804fe27p-1018,
     0x1.a1dd0dc9bab63p-984, 0x1.1a7991d17881cp-842, 0.0, 0.0, 0.0,
     0x1.afd7ece8c7834p-254, 0.0, 0x1.36fce8540159dp-919, 0x1.628225a282174p-636, 0.0,
     0x1.cdddba13d5adfp-886, 0.0, 0x1.ccbdda42aff44p-856, 0x1.e0ed975557509p-387, 0.0,
     0x1.34848d382d0cap-969, 0x1.23b7b2991097p-326, 0x1.41e88c91346fbp-863, 0.0, 0.0,
     0x1.60575dfe1d87cp-764, 0.0, 0x1.c72dc1cae3be8p-711, 0.0, 0.0,
     0x1.3933742970e9fp-148, 0x1.d20f14d795c4bp-433, 0.0, 0.0, 0.0,
     0x1.ee1771125ca81p-113, 0.0, 0.0, 0x1.b12621ef77888p-488, 0x1.9f7c94491f4c7p-823,
     0x1.38385d32f533cp-121, 0x1.b5a4e0847e32fp-769, 0.0, 0x1.ec0cd80170573p-70, 0.0,
     0.0, 0x1.796e7d91bc8c2p-574, 0x1.9c4a06f1dceb8p-973, 0x1.41d13e6d27cbep-545, 0.0,
     0.0, 0.0, 0x1.4a48d05352cd4p-356, 0.0, 0.0, 0x1.cb683e350baa4p-141,
     0x1.1c99a8b7a2cc4p-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f4a5d43c5f44p-348,
     0x1.4592328913da3p-578, 0.0, 0x1.8129272c3a771p-848, 0x1.cb81f5ffc1f36p-264, 0.0,
     0x1.102a28f7f6ec1p-591, 0.0, 0x1.4635851eb5225p-354, 0.0, 0x1.cf9069ecfe329p-823,
     0.0, 0x1.70d1b9b9a6541p-795, 0x1.de5b37df660d6p-994, 0.0, 0.0,
     0x1.5bd1c2dcc6c81p-627, 0.0, 0.0, 0x1.5bb3839dd4b47p-302, 0.0,
     0x1.462e96db011a1p-277, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b2625c93af79p-460, 0.0,
     0.0, 0x1.22f46bf19fd4cp-594, 0x1.5bd2246b273ffp-965, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d34b07d56b2f1p-545, 0x1.60c557ee3b66p-421, 0x1.73874b74502dfp-286, 0.0,
     0.0, 0.0, 0x1.cd8d168a86639p-410, 0x1.39e715fe9379ap-970, 0.0, 0.0,
     0x1.40d1371187fdap-205, 0x1.86a5f6148755cp-623, 0x1.8da6b7504b7acp-681,
     0x1.87ea53028d65fp-150, 0x1.938e47181bd77p-778, 0x1.0e7a3d647b00dp-258, 0.0, 0.0,
     0.0, 0x1.f042f90ea00a2p-1016, 0x1.7dc1558eda12ap-215, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a9bd5cba3ed59p-384, 0.0, 0x1.0a5328a2d5222p-647,
     0x1.4c8a81cb05145p-937, 0x1.a310a72015424p-547, 0x1.d131331ba89bap-327, 0.0,
     0x1.c524845fd4881p-247, 0x1.fa2b2ab727583p-147, 0x1.b5452657ee3e3p-157, 0.0,
     0x1.d6b5c19b65f73p-901, 0x1.2f451aaab9cf6p-803, 0x1.72ded4de41b39p-957, 0.0,
     0x1.97fbb5ea9b03p-993, 0.0, 0.0, 0.0, 0.0, 0x1.f136a90e46e41p-192, 0.0,
     0x1.a550b544cf619p-793, 0x1.d379ab24b45f5p-85, 0x1.3fc4eb9215d5p-893, 0.0,
     0x1.7873461e2fd5cp-731, 0.0, 0x1.a79c8536f71a1p-726, 0x1.15ada48b61309p-653, 0.0,
     0.0, 0x1.f8cf7a8896dd6p-42, 0.0, 0.0, 0x1.8a7854a21541p-174,
     0x1.7df2aeec5d776p-326, 0x1.d30552eb84236p-319, 0.0, 0.0, 0.0, 0.0,
     0x1.d5e948abc1d11p-112, 0x1.0102e79f4a0d2p-929, 0.0, 0x1.d2b247b561a27p-803,
     0x1.05f4a8240eb08p-339, 0x1.e387142bee838p-959, 0.0, 0.0, 0x1.286a434699d38p-718,
     0x1.070d124e34dep-464, 0.0, 0x1.78dddde7c7839p-1010, 0x1.28abace4a5fddp-685,
     0x1.30f101f1dcb7bp-954, 0x1.7d57ffcfc9d32p-792, 0x1.03cf8fa77f761p-937, 0.0,
     0x1.5ef212f055062p-330, 0.0, 0.0, 0x1.df542b3624425p-393, 0x1.f6fd2253a27edp-633,
     0.0, 0x1.601e43efb67b3p-732, 0x1.74c8f9e27b3b1p-148, 0.0, 0.0, 0.0,
     0x1.c7b1f25fd31fp-916, 0x1.2fc7e2add7eecp-750, 0.0, 0.0, 0.0, 0.0,
     0x1.f3c58b1a2606dp-166, 0.0, 0.0, 0x1.2700f3c70760dp-381, 0x1.6b6f02a08412ep-468,
     0.0, 0.0, 0x1.329943834f7b4p-766, 0x1.a02b5d83697a7p-240, 0x1.44f54d45a1d29p-526,
     0.0, 0.0, 0.0, 0.0, 0x1.545cf4e8c7ee8p-387, 0.0, 0x1.d6d8e7c55e5eap-397, 0.0,
     0x1.ff2561f837182p-733, 0.0, 0.0, 0x1.cfb6993f96f16p-967, 0.0, 0.0, 0.0, 0.0,
     0x1.be60fe170a43ap-399, 0x1.de1941350acddp-532, 0x1.f5ed5a8f3ca64p-171, 0.0, 0.0,
     0x1.0e2a93f95ff73p-274, 0.0, 0.0, 0x1.f2e90441b169bp-820, 0x1.21edd1627bb24p-528,
     0x1.4f1035a2a539ap-417, 0.0, 0.0, 0.0, 0x1.8d6c146f5edf8p-156, 0.0, 0.0,
     0x1.d423b5dad8426p-843, 0x1.8fece07faef0bp-324, 0x1.bd4e805fd6fecp-690,
     0x1.9194d09857b5cp-820, 0.0, 0x1.1c17126cb806fp-513, 0x1.a830a070d7eb5p-915, 0.0,
     0.0, 0.0, 0x1.5df778c70555ep-1010, 0x1.d8e15045aedbbp-86, 0x1.c72f66dd1ff06p-334,
     0.0, 0x1.bc6630e69706ep-748, 0x1.f9fde63a1a3b6p-332, 0.0, 0.0, 0.0,
     0x1.27acceb49b0c7p-564, 0x1.8891b5b4a79bbp-466, 0.0, 0x1.2ac011bf5983p-690, 0.0,
     0.0, 0x1.549cf21b28417p-911, 0x1.e82e5ca09799cp-369, 0x1.8949ee971be3bp-725,
     0x1.29507187ebbffp-449, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a90c4fc162807p-478,
     0x1.c0f3977ab7224p-655, 0x1.1cd58932f9d5p-247, 0.0, 0x1.deca9ddb87684p-752,
     0x1.754da0b557926p-358, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ccfa0fb489b8p-775, 0.0,
     0.0, 0x1.2de6bd4af3361p-904, 0.0, 0.0, 0.0, 0x1.d57e1d394c0e2p-736,
     0x1.7a495f9ed0cb8p-305, 0.0, 0x1.8233cf41dbb33p-737, 0x1.682b619ab087p-556,
     0x1.0bfaa099249e4p-555, 0.0, 0x1.7da6e5116817bp-566, 0.0, 0x1.b9b675f5509e3p-112,
     0.0, 0.0, 0x1.a9e3886c57baep-500, 0x1.66ff37731333cp-727, 0.0, 0.0,
     0x1.c124f4de76f14p-82, 0x1.53ae0856458b8p-286, 0x1.c3dd965163d2ep-391, 0.0, 0.0,
     0x1.e6610df66a42bp-677, 0x1.bb6178e02a502p-745, 0.0, 0.0, 0x1.5f2ea8399e06cp-8,
     0.0, 0x1.03f567db8f82ep-664, 0.0, 0x1.a89fc4a0fb595p-747, 0x1.57cebaaabbd32p-737,
     0x1.63be8738e4c58p-369, 0x1.8917a252bf8fap-953, 0.0, 0x1.3efd00889e76p-528,
     0x1.13b8b1fc58f03p-787, 0x1.5ca7e95b0c3a4p-103, 0x1.5f1cb2d1e677cp-632,
     0x1.76179f1276e51p-327, 0.0, 0.0, 0.0, 0x1.c6e4fe18570f5p-30, 0.0, 0.0, 0.0,
     0x1.1ac85beaab045p-857, 0.0, 0x1.3374184ff22fep-775, 0x1.2c21cd97dfdb9p-515, 0.0,
     0x1.5a1799273635cp-813, 0x1.a9ed789dbc9b8p-79, 0.0, 0x1.43c77215e344cp-965, 0.0,
     0x1.9d55bb9931ee3p-881, 0.0, 0.0, 0x1.80b7f2862a54fp-62, 0x1.f7d9d08083264p-644,
     0x1.a7f5fb5933b0ep-48, 0.0, 0.0, 0.0, 0x1.b22300b6c3a4bp-293, 0.0,
     0x1.2e727f66f7591p-646, 0.0, 0.0, 0x1.8ae4d2304c5c8p-295, 0.0,
     0x1.decb47746028bp-762, 0x1.0918fe4a553ccp-1004, 0.0, 0x1.24fce635b42d7p-321,
     0x1.087f801b5dee6p-745, 0x1.c334c31053d11p-233, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82c2eb8b35ed3p-986, 0x1.cc07726cc23eep-991, 0x1.12337135fdb82p-771,
     0x1.bf741fea65005p-430, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8eeda4ae2e32fp-615, 0.0, 0.0, 0.0, 0x1.354c7a7da781dp-596, 0.0, 0.0,
     0x1.5089c8d60fe57p-565, 0x1.3a3545f92a8f3p-171, 0.0, 0x1.f1ce5044acd5ap-996, 0.0,
     0x1.7e6eb5ae4ff8bp-880, 0x1.94a7ce1059b46p-87, 0x1.0ab73edd23eaap-488,
     0x1.c8c261258049cp-226, 0x1.a0ba47858ab1ap-457, 0x1.fc90e6f1c0d39p-92,
     0x1.28f869041f097p-224, 0x1.2c32db00d096p-983, 0x1.f7e22a3b8ecc2p-248,
     0x1.4c3ca4b35e2b5p-233, 0x1.5b6a683fa840cp-247, 0x1.f8f3a777b0fd5p-691, 0.0, 0.0,
     0.0, 0x1.3f8750b5bbbb2p-796, 0x1.1b710b7595e9dp-558, 0.0, 0x1.c7b570ca2c59fp-978,
     0.0, 0x1.c043ab40ab422p-96, 0x1.4bcb3b998683fp-412, 0.0, 0.0,
     0x1.c1100ea9f1e1cp-724, 0x1.f567ec3e643e6p-406, 0.0, 0x1.71d03b798ae6p-630,
     0x1.09ae8c3263c49p-770, 0x1.446e04007e394p-777, 0x1.d03192c4bd977p-23, 0.0, 0.0,
     0x1.592becfe82cb7p-465, 0x1.1ceb7e35a9aep-145, 0x1.636b15869a83cp-800,
     0x1.df1cb9de63e76p-917, 0.0, 0x1.898e57d4524e6p-107, 0.0, 0.0, 0.0,
     0x1.3c0af6b669c38p-1, 0x1.f82be54ae847p-151, 0.0, 0x1.16b313d174c12p-83, 0.0,
     0x1.2d6b2835178c5p-382, 0.0, 0x1.2ba1b81f1f669p-858, 0.0, 0x1.6a6b1d4f1dbc3p-539,
     0x1.f16f97e86ee5p-289, 0.0, 0.0, 0x1.f969f4ff43448p-487, 0x1.ba70f483cc5e8p-885,
     0x1.2084c41590e64p-175, 0x1.1cefc02a32789p-989, 0.0, 0x1.6607b868e01c4p-493,
     0x1.527846be0ff0bp-625, 0.0, 0x1.c705389179c3ep-878, 0.0, 0x1.250279a1db752p-377,
     0.0, 0x1.32793919b3b76p-131, 0x1.1be269c04cb2ep-622, 0.0, 0.0, 0.0, 0.0,
     0x1.11c24f815e6afp-48, 0.0, 0x1.c94dc0a95701fp-644, 0x1.0342dd001bf24p-667,
     0x1.ec5c20cc817fep-123, 0.0, 0x1.85cf407d4c52p-373, 0x1.6f3c2f5e9547cp-721,
     0x1.77d0a9868b48dp-436, 0x1.dfda2a0849e94p-231, 0x1.6df0af2914ab2p-679, 0.0,
     0x1.1a1e9842058eap-224, 0.0, 0.0, 0.0, 0x1.7d08fbdcff842p-121,
     0x1.c066fbdd61cc2p-122, 0.0, 0.0, 0x1.a41f2fb6dbdd8p-977, 0.0,
     0x1.469b753bc1a2p-728, 0x1.55bc5c34100e9p-366, 0x1.a7d46380d2a9cp-797, 0.0, 0.0,
     0x1.f4ee6a041183ep-931, 0.0, 0x1.0cf97d446a558p-996, 0.0, 0x1.196c6b1793442p-114,
     0.0, 0.0, 0x1.3f03f6dc46fa1p-763, 0.0, 0x1.f7ac6fef3e536p-333,
     0x1.b291963161596p-385, 0x1.5571d448cdfafp-528, 0.0, 0.0, 0x1.a8b1efda849f4p-307,
     0.0, 0x1.c0bfe0427bfb6p-742, 0.0, 0x1.4e56fc05709b2p-55, 0x1.f6dd0f23c0423p-283,
     0.0, 0x1.077608b701964p-703, 0.0, 0.0, 0.0, 0x1.10a9c6add3dd4p-726,
     0x1.b6b468644427ap-619, 0x1.d6e50880f9ff6p-712, 0x1.be0f6155f7fd4p-349, 0.0,
     0x1.3c634ebd2e3d9p-901, 0x1.e478a97c8fa18p-984, 0x1.3ba3c7aed687cp-841,
     0x1.ebc5f57c5f53ep-1016, 0.0, 0x1.126ef539e4b1p-148, 0.0, 0x1.16cc87e35033bp-936,
     0.0, 0x1.9fea8221c3d94p-550, 0x1.b876baf86b2f3p-728, 0x1.6cc5ec37fc7d6p-387, 0.0,
     0.0, 0.0, 0.0, 0x1.9389ff2b30cp-800, 0.0, 0x1.66d85807d7c07p-289, 0.0,
     0x1.9c39ab54f3118p-60, 0x1.2c1a42550e39dp-431, 0x1.f285615ff4a08p-926, 0.0, 0.0,
     0x1.e2e24cf56f03p-913, 0.0, 0.0, 0x1.deadd62a5d542p-551, 0x1.4a89d5bd9fd24p-281,
     0.0, 0x1.78c041cb4c76cp-825, 0.0, 0.0, 0x1.b01784faed735p-232,
     0x1.fac08ca90650bp-391, 0.0, 0.0, 0x1.3ebd4340a1445p-462, 0x1.af62f52f35fffp-820,
     0.0, 0x1.9395b77422099p-51, 0x1.daf7cd80ed5b5p-222, 0x1.9629af3e6692p-481, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b13d2b5a461c2p-530, 0x1.5efe3858f4ap-105,
     0x1.e699a7f912137p-199, 0x1.48dfea8ad2d81p-977, 0.0, 0.0, 0x1.37458c61b46ap-302,
     0.0, 0x1.4c9d0e6c03e4dp-296, 0.0, 0.0, 0x1.5a640bee9a11bp-827, 0.0, 0.0, 0.0,
     0x1.fa9660b77e558p-202, 0x1.c05d50e183a06p-1007, 0x1.214da48279a85p-968,
     0x1.405290a4e7af9p-788, 0x1.804907f40c01dp-601, 0.0, 0x1.26d44d2c38595p-178,
     0x1.6b08beb6355ddp-1018, 0x1.6dbbf177fb276p-948, 0x1.b13a30963bfdep-330,
     0x1.d28fbf7bc8282p-144, 0x1.9a06967f84a9p-842, 0.0, 0.0, 0.0,
     0x1.5198cb6d556b5p-405, 0.0, 0.0, 0.0, 0x1.f6a98eff0d397p-731, 0.0, 0.0,
     0x1.870f34ca254a5p-906, 0.0, 0x1.be6b9ec741918p-166, 0x1.1bf0f8458f825p-794,
     0x1.6f11b5c8fd7fbp-195, 0x1.afe989b569a8p-458, 0.0, 0x1.f34f96fce755ep-518, 0.0,
     0.0, 0x1.227e31d4ac577p-872, 0x1.031737c132d46p-164, 0x1.dce66db71fdcfp-929, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d0e0a71387dcep-1000, 0.0, 0.0, 0.0,
     0x1.7824c23a2d9eep-789, 0.0, 0.0, 0.0, 0x1.258ec10d10dc9p-220, 0.0, 0.0, 0.0,
     0x1.dcddfee15baf5p-704, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5b376025a5c9p-622,
     0.0, 0x1.a0eebde687f84p-545, 0.0, 0.0, 0.0, 0x1.7066609264e47p-323, 0.0,
     0x1.99850aa450c6cp-187, 0.0, 0x1.3f79ed7a89e2bp-104, 0x1.441165bd15811p-669,
     0x1.f4adba71ec689p-343, 0x1.54997ec0a358cp-68, 0x1.64628aebf9bap-480,
     0x1.4225579a10e75p-53, 0x1.3cacd9dfc9a2fp-217, 0.0, 0x1.93cde67af1131p-979,
     0x1.49210ec1263adp-312, 0x1.55e7aa74d967dp-777, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c26bb2785082p-819, 0x1.56b7a014da927p-660, 0.0, 0x1.5951348f4740bp-284, 0.0,
     0x1.c5c7b31ac15f7p-139, 0x1.e63ab1b383726p-130, 0x1.3661a782749c8p-598, 0.0, 0.0,
     0x1.3f08c32c04f8fp-411, 0.0, 0.0, 0x1.6b3ed1332c35ep-709, 0.0, 0.0, 0.0,
     0x1.4ebd4bbbe97c8p-181, 0x1.c795fb72bf641p-99, 0.0, 0x1.0bb5b8d614d04p-748, 0.0,
     0.0, 0.0, 0x1.40592c6990f05p-300, 0x1.ec5e38b74a276p-889, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.31a13d4ebf62ap-223, 0.0, 0.0, 0x1.2a6c0f4830828p-764,
     0x1.d85fda73b259dp-946, 0x1.4ccba9376ae89p-879, 0.0, 0.0, 0.0,
     0x1.01ad594df0c54p-679, 0x1.d1e24bf0b382dp-277, 0.0, 0.0, 0x1.ab16b34818e62p-162
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
            tmp1 = Sleef_sqrtd2_u35avx2128(tmp0);
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
    printf("Sleef_sqrtd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
