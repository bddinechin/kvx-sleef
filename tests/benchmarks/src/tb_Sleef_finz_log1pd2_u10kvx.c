/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pd2_u10kvx.c --function \
 *     Sleef_finz_log1pd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0x1.9d5ce14153792p-1001, 0x1.a7d2c808dceb9p-761, 0.0, 0.0,
     0x1.28c6a5811035bp-473, 0x1.530bbf0fc2cecp-309, 0.0, 0x1.57c1c18782f5cp-690, 0.0,
     0.0, 0.0, 0.0, 0x1.4437a0cb2e0ebp-837, 0.0, 0.0, 0.0, 0x1.53c02c028a211p-159,
     0.0, 0x1.91dfb004435d3p-609, 0.0, 0.0, 0.0, 0.0, 0x1.d9471932b697bp-361,
     0x1.112078a8770dcp-276, 0x1.e2324195eb807p-754, 0.0, 0x1.b64b599236443p-289, 0.0,
     0.0, 0x1.5b49e3ec47f78p-1002, 0.0, 0x1.c7fcb06ecc205p-579, 0.0,
     0x1.c70baec3e9374p-477, 0.0, 0.0, 0.0, 0.0, 0x1.4ae461761548ep-139,
     0x1.8e05b917e972cp-786, 0.0, 0x1.394b91ea46567p-281, 0x1.467cf74607e9ap-816,
     0x1.55a6d63a59b73p-706, 0x1.34c5454d3acd9p-246, 0x1.93f37ab3f5162p-459,
     0x1.2c8fa2420a8d6p-475, 0x1.ccfe3d5eb65ebp-491, 0x1.2f409497c6e2ap-231,
     0x1.e0b20c219edd7p-300, 0.0, 0.0, 0x1.0540a13a79dbfp-659, 0x1.a3b884203753cp-757,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c5cbeca340b2p-152, 0.0, 0.0,
     0x1.eb3b6a99f56f2p-276, 0x1.7ad399add0211p-361, 0.0, 0x1.54d1e84d1ae3cp-511, 0.0,
     0x1.0b5eefbb56f68p-194, 0x1.46fe79c7d161cp-541, 0.0, 0.0, 0x1.be5340d7b76d3p-69,
     0x1.cd0ae9efb2568p-380, 0x1.d6dc22e82b791p-713, 0.0, 0.0, 0.0, 0.0,
     0x1.c212994e00f6cp-568, 0x1.c6f7d18c2612bp-502, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11452edb1aa37p-757, 0x1.ccfc8c6e8fc0cp-950, 0.0, 0x1.017514f8d4dcp-374,
     0x1.cd3da717d633dp-917, 0x1.da510df344f9dp-217, 0.0, 0.0, 0x1.e456ddf8a32acp-766,
     0x1.79434393d2e0fp-333, 0.0, 0x1.15449958cb318p-378, 0x1.3be5bcf328bbap-377,
     0x1.97688fa6fd3ep-325, 0x1.59bac05e8ce3p-286, 0x1.742041adf52dep-818, 0.0,
     0x1.5a0f456b56316p-516, 0.0, 0x1.f3b94c317d57cp-117, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6a41f72d2918dp-293, 0.0, 0x1.d510a669e46f5p-396, 0.0, 0x1.de9e7e55b0f12p-298,
     0x1.2387ea4425dc8p-136, 0.0, 0x1.59ec5af546cp-329, 0.0, 0x1.baa40329f2134p-247,
     0x1.a29d41259e304p-363, 0x1.f0d5793a379b3p-158, 0.0, 0x1.e764195796e6p-984,
     0x1.a84f29fb2a8cep-191, 0.0, 0x1.30e2a6e88ab19p-601, 0x1.101e9ba4e1fb2p-471, 0.0,
     0x1.cc5992cb91e67p-724, 0x1.9ffa97e480409p-984, 0x1.6ea53a248205bp-251, 0.0,
     0x1.135fa1e05727fp-88, 0x1.588cd3f84a168p-160, 0.0, 0x1.ada3fe2f02dd5p-647,
     0x1.358ce3dec500cp-36, 0x1.08b76a4e8ea53p-81, 0.0, 0.0, 0.0,
     0x1.2027057dfe36fp-423, 0x1.7a5bcd8b70c26p-723, 0x1.454313fb95e12p-777,
     0x1.e2b0327f57c33p-601, 0.0, 0.0, 0x1.09c2d418ae8b6p-456, 0.0, 0.0, 0.0,
     0x1.f834e1fc58bfap-955, 0x1.732aead9446a6p-315, 0x1.69dd353620558p-685,
     0x1.45e459590ef1fp-337, 0.0, 0x1.7b1fd4d27c91p-543, 0x1.d1d44fadb5054p-28,
     0x1.8785bf43896a7p-587, 0.0, 0x1.304ecb1790d2ep-420, 0.0, 0x1.955831f9b9384p-23,
     0x1.d766df50d05ffp-575, 0x1.80879193b6b8cp-689, 0x1.d1917d01668bdp-143, 0.0, 0.0,
     0x1.7c9c641d8daeep-322, 0.0, 0.0, 0.0, 0x1.b275340dfde9fp-943,
     0x1.568dbddfc455p-513, 0x1.04ab078026a09p-58, 0x1.1619bd4c3d3cp-277, 0.0,
     0x1.54cbdb2532745p-303, 0x1.34dc8384b216fp-6, 0x1.378bcf7809796p-4, 0.0,
     0x1.071ebc8765803p-836, 0x1.217d12f2f26a9p-453, 0x1.5a34ef572b13ep-47,
     0x1.c49dee8460048p-756, 0x1.5d5947d9c6ef3p-273, 0.0, 0x1.d431807dd8278p-19, 0.0,
     0x1.4decc45759468p-600, 0x1.fec33c466d4f4p-806, 0.0, 0x1.585689e1428a7p-149, 0.0,
     0.0, 0x1.6d6ae579c7059p-593, 0.0, 0.0, 0x1.028f33ef1ce8ep-73,
     0x1.cd56bba8c1cb4p-577, 0.0, 0.0, 0.0, 0.0, 0x1.b0fe21bd9275fp-628, 0.0,
     0x1.d8aca8e93e4f1p-151, 0x1.99a7590014e71p-80, 0x1.34cf3471afb81p-66, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cf08a03da186bp-139, 0x1.5350877bb27e8p-246, 0.0, 0.0,
     0x1.45657612626b3p-995, 0x1.53d31cd90d351p-705, 0x1.060e45617b89bp-81, 0.0,
     0x1.ef63e813a9624p-831, 0x1.8949656dad1ebp-422, 0.0, 0.0, 0.0, 0.0,
     0x1.2632799ce4631p-212, 0.0, 0x1.93406ca68b756p-315, 0.0, 0.0,
     0x1.47b7375de2109p-550, 0x1.a55bf49825d0ep-686, 0.0, 0x1.cef3f6f839eaap-468,
     0x1.3052a346b43b3p-567, 0.0, 0.0, 0x1.fb830be54292fp-501, 0x1.ffeeba8b7965fp-220,
     0x1.59f5271d3e20bp-200, 0.0, 0.0, 0.0, 0x1.b435cea1717a6p-55, 0.0, 0.0,
     0x1.e2ead5e8b1546p-5, 0x1.5863f65dfe9c8p-478, 0.0, 0.0, 0.0,
     0x1.2de3b9fc2fa43p-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e03f7fa2b277p-810, 0.0,
     0.0, 0.0, 0.0, 0x1.70d216141878dp-221, 0.0, 0.0, 0x1.1e011eda71ec1p-139, 0.0,
     0.0, 0.0, 0.0, 0x1.f08745030b257p-253, 0.0, 0x1.25a568036fe62p-924, 0.0,
     0x1.2f99e7906ecb6p-335, 0x1.3b35c0e5f8f9p-170, 0x1.9535a9fe3a41ap-970,
     0x1.2c0d567ccf9f5p-887, 0x1.bfdca6ca0ef9cp-668, 0.0, 0.0, 0x1.ce8c36d381855p-594,
     0x1.b47431611b02bp-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.283867cd88c44p-103,
     0x1.147e3a7ef6413p-865, 0x1.a803dee095bb6p-418, 0x1.6fdc1b136fc2fp-572,
     0x1.32375263fca8p-740, 0.0, 0x1.93aa7ef6d6db3p-428, 0x1.508e6a14dc496p-501,
     0x1.4b20b81436fafp-700, 0x1.83cba11ac25bcp-1003, 0x1.3c5739c9d97c7p-643,
     0x1.0418981de816ap-742, 0.0, 0x1.94c580912e16p-609, 0.0, 0x1.2f6fd8b665e7bp-614,
     0.0, 0x1.b542eb1fa2245p-695, 0x1.a550af1c21a3ap-757, 0x1.08a2df93e617ap-61, 0.0,
     0.0, 0x1.4ea05895b87bap-993, 0x1.897097671624fp-793, 0x1.459fc7976a4c5p-632,
     0x1.a4b44e63022a4p-893, 0x1.275e6d3e4c6cp-892, 0x1.0c5e3ce8c9dbap-662,
     0x1.4f5ac5ef908f9p-274, 0.0, 0x1.50bc69700b167p-859, 0.0, 0x1.ad6d6e4a468ecp-155,
     0x1.56f5b5eebd2d4p-29, 0x1.c3daa0e7a3382p-290, 0.0, 0.0, 0.0, 0.0,
     0x1.fe3429135f87dp-691, 0.0, 0.0, 0.0, 0x1.fd64a7f445c18p-912,
     0x1.771a2d1fbb77ep-385, 0.0, 0.0, 0x1.2d0d3da91e926p-681, 0x1.958366c44552p-664,
     0.0, 0x1.d0c90f12fa014p-250, 0.0, 0x1.2635ff2d56cb6p-323, 0x1.137412995eadep-189,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ebde796136c39p-60,
     0x1.e273ab564e77cp-179, 0.0, 0.0, 0x1.80040d1b5b664p-175, 0x1.5ebb3825b52fep-17,
     0.0, 0.0, 0.0, 0x1.9097304b9ee4ap-629, 0x1.cb7b55c9cae4dp-494, 0.0, 0.0, 0.0,
     0x1.ff7554853fcb6p-588, 0.0, 0x1.20840b1d846c9p-904, 0x1.ceee3d9c171e1p-1000,
     0x1.03cb021c86b43p-996, 0.0, 0.0, 0.0, 0.0, 0x1.5893af386275ep-268,
     0x1.82bd129b8b937p-125, 0.0, 0.0, 0x1.9689d52e74b32p-33, 0x1.4e0aac8a56b47p-819,
     0x1.2dd2702ea84e5p-612, 0x1.fd33f0a3f9f99p-200, 0x1.2510b72e7d071p-268,
     0x1.ed485b6d8606p-8, 0x1.a7b13d64854fcp-902, 0x1.e0e6efa1d1fd7p-457,
     0x1.1eab203548441p-891, 0x1.44d49391121dap-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40509f73bca92p-507, 0x1.35e06667d7dbp-397, 0x1.647f6fb450afap-1006, 0.0, 0.0,
     0x1.2f5998cef9cfp-588, 0x1.616376cbb1df1p-182, 0x1.3a66e17321e59p-229, 0.0,
     0x1.a37eed6ddaf08p-72, 0x1.2ade9dd9db42dp-503, 0.0, 0.0, 0x1.2c5a345ec96b3p-239,
     0x1.145cb5a3fb46fp-861, 0x1.351aa26ee0677p-525, 0x1.662bdfa458944p-458,
     0x1.7fa5982545f81p-288, 0.0, 0.0, 0x1.3dbb708322c1dp-637, 0.0,
     0x1.90410d85c77cbp-424, 0.0, 0.0, 0x1.d377bcf57c4b5p-909,
     0x1.236b5e68bd313p-1022, 0x1.f9e04c75cd827p-667, 0.0, 0x1.7505af533108bp-834,
     0x1.cc567b1b9a83dp-849, 0.0, 0x1.d238b1ae7fbaap-87, 0.0, 0x1.025675fb90945p-262,
     0.0, 0x1.5cfc76c9de95bp-266, 0x1.12dc9ec48c8f5p-485, 0.0, 0x1.ddd34901e931dp-689,
     0.0, 0.0, 0.0, 0.0, 0x1.73ec60d48110ap-796, 0x1.71cb16189ca69p-178,
     0x1.67ee20857ee02p-142, 0x1.a06083949c601p-134, 0x1.da8751527bb43p-84,
     0x1.d3bb0ded2b583p-648, 0.0, 0x1.6f9b2b5ce3584p-748, 0.0, 0.0,
     0x1.bc96e644a5977p-631, 0x1.ad130e0fc8c95p-291, 0x1.50d9befc0176ep-531, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.25389dc981b7ep-284, 0x1.558706361de6bp-985, 0.0,
     0x1.5db29c90329e6p-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31311a63d2a97p-623,
     0x1.bf80ae4038242p-433, 0.0, 0.0, 0x1.dddfd66b8fd17p-84, 0x1.a90376486009bp-208,
     0x1.015fc504c6408p-79, 0.0, 0x1.4ff7687279a1cp-463, 0x1.ce66ac78eab7dp-997,
     0x1.e8bd51ebe9ac8p-545, 0x1.63a4175de26bdp-420, 0x1.1e52b1ad54e03p-786, 0.0,
     0x1.11241747b0671p-792, 0.0, 0.0, 0x1.e5293532d11f8p-571, 0x1.448524fe68c69p-335,
     0x1.99e390c6d1597p-910, 0.0, 0x1.a2f9965566c22p-266, 0x1.f8b6d7fc39efep-282, 0.0,
     0.0, 0.0, 0x1.c4eef5c678ed1p-522, 0x1.df9c8dc097ff6p-150, 0.0,
     0x1.60456be64ae5dp-523, 0.0, 0x1.3287e69194a7ap-399, 0.0, 0.0,
     0x1.37d51ee0e3996p-245, 0x1.cfb51d27ba85bp-481, 0.0, 0.0, 0x1.c2a44c0b4017dp-515,
     0x1.67b5a58924b17p-679, 0.0, 0x1.72dabbcaca133p-250, 0.0, 0.0,
     0x1.26020ad8378f1p-227, 0.0, 0.0, 0x1.a36eb857d562p-508, 0.0, 0.0,
     0x1.a4e0bfb47ca7dp-380, 0x1.8482ca5d66e53p-151, 0x1p0, 0x1.60fef0fff0b74p-1003,
     0x1.af0d48d9a55c9p-150, 0.0, 0x1.1d9e2d4f4b2c8p-212, 0.0, 0x1.66fc7eca49893p-620,
     0.0, 0x1.37b21643e8f8p-794, 0x1.16260c1137f8p-210, 0x1.06f8b23469f33p-324, 0.0,
     0x1.f459b24b147d6p-529, 0x1.323dad88223b3p-297, 0.0, 0.0, 0.0, 0.0,
     0x1.7c668288b26b9p-177, 0.0, 0x1.e6494d52d19b3p-778, 0x1.2d1c2e533d06cp-473,
     0x1.5986bd6f57488p-954, 0x1.ca89148201593p-78, 0.0, 0.0, 0x1.db20abb53099fp-69,
     0.0, 0.0, 0x1.5fe2236092c42p-577, 0.0, 0x1.121fb385b8fc5p-925, 0.0,
     0x1.e07c2dc19e80ep-494, 0.0, 0x1.87d34ec1bb211p-697, 0x1.d1b8a4bd505f2p-972,
     0x1.66c748b1af8f9p-231, 0.0, 0x1.3fd53634a008bp-374, 0x1.a4fe7a87074c6p-8,
     0x1.56c46a64aced5p-385, 0.0, 0x1.0088344e8ebep-285, 0.0, 0.0,
     0x1.f562c5e82effep-473, 0.0, 0x1.1d1960f558536p-593, 0x1.2d65f872b2411p-153, 0.0,
     0.0, 0x1.1caf65a3ec8abp-859, 0.0, 0.0, 0.0, 0x1.56c058cf95feap-321, 0.0,
     0x1.c78e64733c7a6p-942, 0x1.a14ab5da4eb1cp-129, 0x1.eff7901ea9f5dp-39,
     0x1.c7518329cd623p-334, 0.0, 0x1.ff064e1103b36p-299, 0x1.48d76f1367329p-738,
     0x1.294ce5033a7c8p-494, 0x1.c25eaf34f663ap-271, 0x1.ae88f20ffb026p-1008,
     0x1.1f08dbd0bdeb5p-475, 0.0, 0x1.3b7db75a73dd7p-848, 0.0, 0.0,
     0x1.0ce0bb3696163p-334, 0x1.e53959856252ap-725, 0.0, 0x1.da92b6bf7d308p-610, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.80493c1211659p-1016, 0.0, 0x1.19cb583445b5ep-719, 0.0,
     0.0, 0x1.d9b1799baf8fp-488, 0x1.8cac333002e9p-950, 0x1.926dea7702372p-109,
     0x1.f64703835ec4ep-430, 0.0, 0x1.18ce9d4d69126p-868, 0.0, 0x1.94e717dd4efa8p-805,
     0x1.6198d84d6e34fp-94, 0x1.f94a675f7d4b6p-631, 0.0, 0.0, 0.0,
     0x1.eb2dd31c53f04p-506, 0x1.285dc5502c5c4p-784, 0x1.9c8b91927691p-266,
     0x1.374b71a60c6d1p-998, 0.0, 0.0, 0x1.8ff2c8f85b0cep-903, 0x1.c3ef9c2bfe98ep-239,
     0x1.59cfec2286e99p-666, 0x1.1a9e7fbef3717p-1017, 0x1.116ffcaf10c82p-122, 0.0,
     0.0, 0.0, 0.0, 0x1.68b4a713ae67fp-6, 0.0, 0.0, 0.0, 0x1.0517a032d1574p-141, 0.0,
     0.0, 0x1.c479a25b157e1p-36, 0x1.a15877954f7b1p-694, 0x1.ea7bba3547729p-707, 0.0,
     0.0, 0x1.8416f934ee886p-191, 0x1.e484befbf90bap-549, 0x1.9157e6af539e2p-687, 0.0,
     0.0, 0x1.799ee0bbe6f81p-645, 0.0, 0x1.54bf5818b8771p-125, 0.0,
     0x1.0a91697d91e3ep-598, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44de9a5fbd63ep-69,
     0x1.7904a8bca7d13p-461, 0.0, 0x1.4cac275040732p-815, 0x1.54e653385b513p-532,
     0x1.cb0b39d401c3p-367, 0.0, 0x1.8dabcfa6a5af9p-690, 0x1.2c8d222455b24p-849,
     0x1.2fe7c7ad84d98p-803, 0x1.f959394aa193fp-458, 0.0, 0.0, 0x1.a14a168763723p-149,
     0.0, 0.0, 0x1.7b22f9bb966adp-373, 0x1.9c80b8486e16p-459, 0x1.ecb49449e4129p-588,
     0.0, 0x1.bfd5f64500fcfp-917, 0x1.51a2c8aad532bp-370, 0.0, 0.0,
     0x1.318a1defdf643p-10, 0.0, 0.0, 0.0, 0x1.f1e47dd31dc11p-108, 0.0, 0.0,
     0x1.498ed8eeb952bp-456, 0.0, 0x1.782990463581ep-31, 0.0, 0.0, 0.0,
     0x1.c480125561cf8p-900, 0x1.70e0f2a214487p-360, 0.0, 0x1.b66dd4f088917p-1004,
     0.0, 0.0, 0x1.6a3ff286c11cdp-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2987018788074p-555, 0x1.ede00b45937cp-752, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.930db1186fdaap-26, 0.0, 0x1.4fb29046f3badp-584, 0.0, 0.0,
     0x1.2aba1a36e920dp-551, 0x1.699190b885e7ap-135, 0x1.3857fe5afe487p-727, 0.0,
     0x1.30f0270a752d4p-442, 0x1.e3d95c1e453bdp-726, 0.0, 0.0, 0.0,
     0x1.dc1206e19e985p-509, 0.0, 0.0, 0x1.94bada649694bp-92, 0.0, 0.0,
     0x1.2042e659e305cp-893, 0x1.d0ea0f8fae6b1p-170, 0x1.ef12f281a49e1p-316,
     0x1.05e2b7320be05p-101, 0x1.e7b50f02c0e3fp-50, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08b409b2f2fafp-247, 0x1.84d34380b7f06p-232, 0.0, 0.0, 0.0, 0.0,
     0x1.918ac9497db1fp-338, 0.0, 0x1.346b3d84e59acp-8, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9fba82360cc1cp-430, 0.0, 0.0, 0x1.44f994aa8e6c3p-856, 0x1.53efa62118999p-564,
     0x1.f672c50b4b249p-641, 0.0, 0.0, 0x1.0b9a1e42b6587p-64, 0x1.d678ba75c2f11p-690,
     0x1.0993bc873e634p-422, 0x1.e771cfc3bce2dp-948, 0x1.e722ea89b9595p-317,
     0x1.cf27af39c10b9p-365, 0x1.040d1a02b07aap-198, 0x1.f1a99a3bfb3e7p-50,
     0x1.930242bf0cc5ep-218, 0.0, 0.0, 0.0, 0x1.48ef5cbce6a9p-808,
     0x1.2d2d5e2df95eap-502, 0x1.a5c869c8b2353p-644, 0x1.a7b8f085b78c4p-1001, 0.0,
     0.0, 0.0, 0x1.01e3a279a6c9cp-490, 0.0, 0x1.18c20eecd4e5ep-141,
     0x1.f96d85c4b1042p-441, 0.0, 0x1.f2a611273c4f9p-303, 0.0, 0.0,
     0x1.1e431de6f55f5p-686, 0x1.d25b576d82bfdp-872, 0.0, 0.0, 0x1.a3dff72c7dcbdp-715,
     0.0, 0.0, 0.0, 0x1.0954129b20fc7p-798, 0x1.0027d759fefb6p-960, 0.0, 0.0,
     0x1.91b3595e0bcd3p-205, 0.0, 0x1.61bf74939793ep-552, 0.0, 0.0, 0.0, 0.0,
     0x1.c7562646c91aep-796, 0.0, 0x1.b4b5a04dc2059p-63, 0.0, 0x1.15b56f3982233p-495,
     0.0, 0x1.82e4138269d3p-333, 0x1.5086bcbc7ddd2p-469, 0.0, 0x1.a180a17d6fabcp-329,
     0x1.f94e53061e328p-257, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.633124ca769ffp-150,
     0x1.406fc5740552ap-254, 0.0, 0x1.849d321566a7p-133, 0x1.877a1da794cd2p-277, 0.0,
     0.0, 0x1.8b7433bfb8828p-724, 0.0, 0.0, 0x1.69f59bf7cd575p-99,
     0x1.4bd6d3421743cp-321, 0.0, 0.0, 0x1.172cf60eaa515p-342, 0.0, 0.0,
     0x1.73c9eb81a7b9ep-401, 0x1.2554ac9beb2b6p-496, 0x1.e85e243934b5ap-959,
     0x1.495b7fc1b52aep-118, 0x1.cac58dffb1694p-45, 0x1.2fe26addf6a66p-265, 0.0, 0.0,
     0.0, 0x1.8632ff661fb04p-481, 0.0, 0x1.1c0c0ca061c57p-466, 0.0, 0.0,
     0x1.16b72d8f11f72p-798, 0x1.2a469e0bdc256p-280, 0.0, 0x1.607018e612e1ap-677,
     0x1.a93e4e368f325p-285, 0.0, 0x1.c55fe35a03548p-201, 0.0, 0x1.f38d663ad7e4ep-38,
     0.0, 0x1.57d410cc56d1ep-633, 0x1.56195c5ad43a4p-126, 0.0, 0.0, 0.0,
     0x1.2d02b4f73444ep-603, 0x1.ba5f1da9a5394p-758, 0.0, 0x1.1258faf136a32p-693, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.81e07ad1770e9p-141, 0.0, 0x1.635fc755eac29p-654, 0.0,
     0.0, 0.0, 0.0, 0x1.9b6f5c303d1dep-859, 0.0, 0x1.38c72f68e71b1p-397, 0.0,
     0x1.0901d60dedbcap-652, 0.0, 0.0, 0x1.363b016f0dba9p-687, 0x1.6daa069509df2p-349,
     0x1.a90e9203e5f24p-924, 0x1.d62ecceacedcep-93, 0.0, 0.0, 0x1.19fa355f28671p-193,
     0.0, 0x1.126205ed1ef15p-398, 0.0, 0x1.219f51b9b6041p-185, 0.0, 0.0, 0.0, 0.0,
     0x1.fb89f6d3f76a7p-30, 0x1.01ee1e5126cfep-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.86d28d403aef6p-947, 0.0, 0x1.1cf3f87b79c17p-419, 0x1.200220aeb176p-661, 0.0,
     0x1.3d337ac774f24p-375, 0x1.d1152d5ede1b6p-172, 0.0, 0.0, 0x1.e1049d12169ep-227,
     0.0, 0x1.0775ebac7ba4ap-744, 0x1.b7ec692adb038p-476, 0.0, 0x1.cb2db521c4f3dp-714,
     0x1.43cf8d12d598ap-615, 0x1.9742a7317f5fbp-443, 0.0, 0.0, 0x1.9daaface51e32p-505,
     0.0, 0.0, 0x1.3262c493ff353p-18, 0x1.801b348421182p-921, 0x1.31d2611d8fc5fp-827,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b09efa62d6d8p-421, 0.0, 0.0,
     0x1.ecfb8712e5053p-767, 0x1.5e159723ed338p-119, 0x1.9f6dc0c3242b1p-905, 0.0,
     0x1.8973425331dddp-911, 0x1.881d0cd318228p-15, 0x1.f9de62927cde9p-583, 0.0,
     0x1.2326f0802f458p-357, 0.0, 0x1.25f68f5977759p-940, 0x1.79ed6cc5d5a8bp-98,
     0x1.81dbf9ea8427ap-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e180452a4c418p-405,
     0.0, 0.0, 0.0, 0x1.25ebecef417fp-950, 0.0, 0x1.b97f0c0950b14p-590, 0.0,
     0x1.bc7c905483e4bp-241, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e98bc11672a3cp-385, 0.0
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
            tmp1 = Sleef_finz_log1pd2_u10kvx(tmp0);
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
    printf("Sleef_finz_log1pd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log1pd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
