/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd2_u35avx2128.c --function Sleef_finz_cosd2_u35avx2128 \
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
     0.0, 0.0, 0x1.8e74bd592f024p-904, 0.0, 0.0, 0x1.b0a3f6f62f65dp-753, 0.0, 0.0,
     0x1.52bd8be2144c7p-668, 0.0, 0x1.5565596debf8fp-648, 0.0, 0.0,
     0x1.1d32d66edafc1p-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd1e58143e5b7p-699,
     0x1.c1c8ce7130a55p-666, 0x1.81db6404c4bd9p-1, 0x1.d54b4dd6b80fbp-327, 0.0, 0.0,
     0.0, 0x1.da2fed265e675p-939, 0.0, 0x1.2ebbe16f0cd99p-657, 0x1.e8e2b833622cdp-90,
     0.0, 0x1.63fa47aad9c5bp-907, 0x1.6552f8b576466p-22, 0.0, 0x1.f0cad59dbec8ep-947,
     0x1.66b5490d690f3p-302, 0.0, 0.0, 0.0, 0.0, 0x1.f3cd6ee967e5ep-101,
     0x1.1e57ef8dbc282p-253, 0.0, 0x1.d2aced00112fap-649, 0x1.ae3c7dffe63a8p-1010,
     0x1.aee4cd8883e89p-791, 0x1.910a60c48de55p-1007, 0x1.7659b0dee203cp-848, 0.0,
     0x1.e4eee3839478ep-33, 0x1.f5f7c1f293275p-699, 0.0, 0.0, 0.0, 0.0,
     0x1.3dbba73175cbbp-426, 0.0, 0x1.e0c08bf86195ap-163, 0x1.0514d20ad04e4p-28, 0.0,
     0.0, 0.0, 0x1.7b37b9b7a7ea4p-296, 0.0, 0x1.15c3ca4ff923cp-998,
     0x1.e0aad852f0d75p-504, 0.0, 0x1.3adcde8b3e7a6p-407, 0x1.9b41e00789e27p-461, 0.0,
     0x1.299556294b827p-10, 0x1.7ec674741811ep-60, 0.0, 0x1.465989345937dp-649, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.389908386f16dp-111, 0x1.1c132af42c7f2p-541,
     0x1.304c4adeca0c1p-884, 0.0, 0.0, 0.0, 0.0, 0x1.103d679d1435ap-613, 0.0, 0.0,
     0.0, 0.0, 0x1.be49ecc661812p-459, 0.0, 0.0, 0x1.6fc3352566af7p-65, 0.0,
     0x1.da827cc9f41c4p-865, 0.0, 0.0, 0x1.4f29efb8cf7e3p-342, 0x1.a3530f207c1f3p-230,
     0.0, 0x1.4561801a43852p-1018, 0x1.0831ea785b105p-932, 0.0, 0.0, 0.0,
     0x1.414336e389ac3p-442, 0x1.b5ad245429f18p-906, 0.0, 0x1.6a4940799c79p-464, 0.0,
     0x1.b068b1e825828p-941, 0.0, 0.0, 0.0, 0x1.66a78fbb2c95bp-314, 0.0, 0.0, 0.0,
     0.0, 0x1.13b1a110f4268p-987, 0x1.6d44cec092819p-353, 0.0, 0x1.82a3d2757dab1p-108,
     0x1.9f3028aa089a8p-443, 0x1.9ebdf00803e7ap-940, 0x1.ce215d007f8dfp-680,
     0x1.fdce990d91cf5p-68, 0x1.2ba490f89f1a3p-318, 0x1.22466eb4e494cp-567,
     0x1.28d9f176aec17p-219, 0x1.24f2055e75bc3p-1012, 0x1.f56480467c6ep-300, 0.0,
     0x1.957b6d54c351ep-352, 0x1.af48e7f9874cep-785, 0x1.05df3ab8fefb2p-845, 0.0,
     0x1.5cf778a84f354p-220, 0.0, 0.0, 0.0, 0x1.8265e29646aa3p-793, 0.0, 0.0,
     0x1.5cd4b02c2c441p-591, 0x1.f23820abd190bp-865, 0x1.7b58a2c590a1ep-336, 0.0,
     0x1.eb20c28944c49p-455, 0x1.726b62d483fddp-21, 0x1.849b5f902edd3p-452, 0.0,
     0x1.1b8edf806e66cp-200, 0x1.599507b91ceefp-893, 0x1.925e4f452e742p-5, 0.0, 0.0,
     0.0, 0.0, 0x1.54d5dcda4cdffp-929, 0.0, 0x1.067a7ebae6caap-536,
     0x1.7e4244846e447p-335, 0.0, 0x1.2e425441d1eap-902, 0.0, 0.0,
     0x1.28cbce369b91cp-503, 0x1.4a3945faa488ap-835, 0x1.4bb2d599d11c1p-155, 0.0,
     0x1.9391a5ed98cc7p-103, 0.0, 0x1.05e316690fe6bp-133, 0x1.647d4df591d0cp-527, 0.0,
     0x1.90af029935baep-996, 0.0, 0x1.e0bfae3d5e0dap-575, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e608a6df0a655p-597, 0.0, 0.0, 0x1.4bd372a7400aep-516,
     0x1.2456de328feefp-258, 0x1.607201b265dadp-506, 0.0, 0x1.e0ecd801e8cp-871, 0.0,
     0x1.46b5f91df7516p-273, 0x1.fbbf503640909p-723, 0x1.6d7ffc5ca1f9ap-281, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a31e88cd4d161p-152, 0x1.1d4b6b3d3bfb7p-1014,
     0x1.452be75a52057p-157, 0.0, 0.0, 0x1.7b90a0be25c42p-5, 0x1.baf99b402a997p-200,
     0.0, 0x1.9547b521c1b75p-91, 0.0, 0x1.0d7ff0b766453p-410, 0.0,
     0x1.1faeea365974ap-909, 0.0, 0x1.e30f637d3e03ep-239, 0.0, 0.0, 0.0,
     0x1.67eead0493ebcp-327, 0.0, 0x1.d6ad83273cc0cp-332, 0.0, 0x1.a40b55fe75dd1p-764,
     0.0, 0x1.777b0f30be219p-890, 0x1.69bc65fe5e5bp-978, 0.0, 0x1.1cbdc2d840344p-886,
     0x1.6c06a259749c1p-695, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ae9a5cca7a8fp-432,
     0x1.2aaa0ad1ce067p-626, 0.0, 0x1.68bf719e120b3p-409, 0x1.b8417e3dd559cp-543, 0.0,
     0x1.28b5ef1278f19p-596, 0.0, 0x1.5a038e241aa0fp-910, 0x1.58716d056539p-625,
     0x1.a3c05272ea34dp-35, 0x1.3f96d71fedf16p-747, 0.0, 0x1.268d41dfe4909p-350, 0.0,
     0x1.1f883749605b2p-368, 0.0, 0x1.46ff5569a661p-631, 0.0, 0.0,
     0x1.feeb22e166b12p-739, 0.0, 0.0, 0.0, 0.0, 0x1.0f40aa025017ap-645, 0.0,
     0x1.a2b8afc1cc843p-933, 0x1.9ea664015922bp-466, 0x1.26fe51608466ep-859,
     0x1.c88f51990b0b5p-157, 0x1.090e988ac5645p-263, 0x1.36ed54995e4b6p-330,
     0x1.d7749fb2f749ep-64, 0.0, 0.0, 0.0, 0.0, 0x1.ab43125b5a42fp-49,
     0x1.371018f68b04ap-1004, 0.0, 0x1.acf4e3f051075p-651, 0x1.7fb1a4e9b1139p-198,
     0x1.c76a5434e7f05p-350, 0x1.9b8fa18aaa6f6p-324, 0x1.d2963a3db7cefp-777,
     0x1.c7be70b02cfa3p-567, 0.0, 0.0, 0x1.6363733703ebbp-440, 0x1.9fb89c7fdf8b8p-348,
     0x1.aa526f20ec391p-1001, 0.0, 0x1.a81e4681dc728p-134, 0x1.83955b2978883p-354,
     0.0, 0.0, 0x1.d19b5fc955f2p-975, 0.0, 0x1.a7576a6f9336ap-703,
     0x1.11449d44ff005p-654, 0.0, 0x1.5e1f4266677fcp-688, 0x1.9969364babad3p-751, 0.0,
     0x1.31a23dee6cd86p-358, 0.0, 0x1.608d198b97783p-242, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b6ebbec3c4effp-987, 0.0, 0.0, 0x1.cd3253191115p-528, 0.0,
     0x1.d44358d35cbffp-223, 0.0, 0.0, 0x1.a821e71a933p-917, 0.0,
     0x1.4d228ecb0389p-532, 0x1.0ee85406cd045p-24, 0x1.35d1de6c88d6ap-484, 0.0,
     0x1.b4aa4d685536p-26, 0.0, 0x1.0b27ab873b099p-566, 0.0, 0x1.be8c3d7012d6fp-213,
     0x1.6f6d89135ce88p-423, 0x1.e1224beda337bp-522, 0.0, 0.0, 0x1.acb5f6e1362c4p-560,
     0.0, 0x1.26d2c12bfb539p-562, 0x1.7be3a230f78a4p-21, 0.0, 0.0,
     0x1.138277e140d6p-49, 0.0, 0x1.2be191c23a85p-891, 0x1.d9e0b5df3288fp-929, 0.0,
     0.0, 0.0, 0x1.b9067d3bdf06fp-643, 0.0, 0x1.75af7bad4796cp-293,
     0x1.86d1c97d075fap-550, 0x1.c12603304dea2p-636, 0.0, 0.0, 0x1.46d0c00072eb1p-240,
     0x1.25aaa67037e23p-675, 0.0, 0.0, 0x1.fb0e041d1baap-877, 0x1.2a3cc0e165312p-804,
     0.0, 0x1.65fc2bb602483p-503, 0x1.d19c7ee1ea47p-175, 0x1.7067506c84f0dp-303, 0.0,
     0x1.03f44c4c23484p-9, 0x1.1ffdb7836eb89p-814, 0x1.ce222429f829dp-667,
     0x1.a5a840b5ce32fp-396, 0x1.b7ffac68359a4p-945, 0.0, 0.0, 0x1.722426f6338e1p-949,
     0x1.8f062cf7c3a09p-55, 0x1.d0d643f4c3635p-643, 0x1.8ddd5bb81ecdcp-573, 0.0,
     0x1.e1c1b0f075be5p-678, 0x1.b8e856243b99ap-180, 0.0, 0.0, 0x1.1a98fda6b2f22p-602,
     0x1.92b36fca6f27cp-169, 0.0, 0.0, 0x1.fafce4ee8fdd3p-552, 0.0,
     0x1.8a35556ee2e1ap-291, 0x1.2432b24ddf65bp-671, 0.0, 0x1.b273f000f9e9cp-161, 0.0,
     0x1.818aa8df6a563p-72, 0.0, 0.0, 0.0, 0x1.165f213447ef9p-57, 0.0,
     0x1.c4463628e97b2p-493, 0x1.a585913342af5p-836, 0x1.0f9f1607eacdbp-892, 0.0,
     0x1.9b299767559e9p-327, 0x1.6bf09662bd149p-537, 0x1.1701d5061b35fp-48,
     0x1.b0ad39d15bf7p-97, 0.0, 0.0, 0x1.5680a6e91ebe8p-240, 0x1.c58f0de5566dep-74,
     0x1.3cf12a049b20cp-148, 0.0, 0.0, 0.0, 0.0, 0x1.622ea5147cc87p-242, 0.0, 0.0,
     0x1.7459eea74b6bcp-435, 0x1.dd7bb28e18f42p-807, 0x1.9da1e4d376bb8p-804,
     0x1.f487231c71c03p-658, 0.0, 0.0, 0x1.047bead8dcb37p-718, 0x1.6963371938c4fp-657,
     0x1.52bd0b106cb4fp-871, 0.0, 0x1.8d77e129ea31fp-583, 0.0, 0x1.1149da78ab7a7p-563,
     0.0, 0x1.1086b6b73481bp-115, 0.0, 0.0, 0.0, 0.0, 0x1.c1c078b91b4e6p-63,
     0x1.8b613d0a969f5p-211, 0x1.2245d28b3c97p-852, 0x1.4e4c73f1e5cbap-763,
     0x1.41348fa634863p-539, 0.0, 0.0, 0x1.c56de5d1fd903p-133, 0.0, 0.0,
     0x1.fc6ab36fa5354p-33, 0.0, 0x1.440cb2a8f57ddp-888, 0.0, 0.0, 0.0, 0.0,
     0x1.c59ff0a2dc0dep-738, 0.0, 0.0, 0.0, 0x1.a87d66f5d7f1cp-332,
     0x1.5959b2a0340fp-840, 0.0, 0x1.80f0d01f3f8b7p-522, 0x1.6ab6d5e655b94p-788,
     0x1.c2d5200977f79p-157, 0.0, 0.0, 0.0, 0x1.92afe65b7359ep-295,
     0x1.428d58b1e7dfep-447, 0x1.2b838a2955e09p-273, 0x1.1bee2a18d930ep-610, 0.0,
     0x1.7faa6489727cp-1015, 0.0, 0x1.cba2319cac33fp-117, 0.0, 0.0,
     0x1.d7d27df8b88ffp-299, 0x1.9a85ca1c05e31p-775, 0x1.580ed7b584b66p-164,
     0x1.ff3efc7b8ce73p-536, 0x1.50ea5df28b22ap-438, 0.0, 0x1.aba5aa5893c77p-777, 0.0,
     0x1.867b3f7644ee8p-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45fe88e04413cp-1007,
     0.0, 0.0, 0x1.c92b226f30149p-535, 0x1.873baceff6ae5p-956, 0x1.289f085180d22p-438,
     0.0, 0.0, 0x1.72b7b1ed28a0ap-866, 0.0, 0x1.be8f527dcea4cp-467,
     0x1.98ecb171dc39ap-686, 0.0, 0x1.a43fca0a364d5p-102, 0.0, 0.0,
     0x1.12434b3e179c8p-284, 0.0, 0.0, 0x1.fb78713cd4af1p-38, 0x1.c25982333dac5p-225,
     0.0, 0x1.d6eb61eb70b9ap-395, 0x1.3ade85ed0bc27p-895, 0x1.aab747f8958e3p-963, 0.0,
     0x1.f0b3a6e2ec31bp-807, 0.0, 0x1.84450df5441e4p-235, 0x1.67a5edbaa573ep-2, 0.0,
     0x1.de5019bc6c8e9p-975, 0x1.24bf8dadf718dp-81, 0x1.d0eed625226a8p-994, 0.0, 0.0,
     0x1.98ce1659f116bp-420, 0.0, 0x1.8e1ff19453d08p-404, 0x1.ec1fba2239f3ap-70, 0.0,
     0.0, 0x1.e8622f176dfd1p-505, 0.0, 0x1.474cf3c3fd756p-335, 0.0,
     0x1.ae36cb83546f5p-612, 0.0, 0.0, 0x1p0, 0x1.bd6bec69576f7p-606, 0.0, 0.0, 0.0,
     0.0, 0x1.8aae929ad7323p-653, 0x1.15138e27662f6p-832, 0x1.210217630b406p-66,
     0x1.89ee9aa2cbb11p-79, 0x1.b08ff95931b15p-112, 0x1.4adadc5b3727dp-141,
     0x1.b6f87e9b6be6fp-824, 0.0, 0x1.e1cd286bd2e99p-272, 0x1.2144d64fdff5dp-816, 0.0,
     0.0, 0.0, 0x1.97ba129974894p-699, 0.0, 0.0, 0x1.73b67f701b891p-170,
     0x1.643158e67c597p-221, 0x1.58d500b766e62p-213, 0.0, 0x1.a7193c155424cp-306, 0.0,
     0x1.c7d8bbbd8860ap-799, 0.0, 0x1.79fea16b01dedp-572, 0.0, 0x1.2be8772562fadp-934,
     0.0, 0x1.39be4d802ec51p-207, 0.0, 0x1.e50c848c47eeep-536, 0.0, 0.0,
     0x1.4ab5eca86ca29p-555, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0d9ec5043e7bp-584,
     0x1.d0d3795a84275p-453, 0x1.c4c75e8f9d52p-289, 0.0, 0.0, 0.0, 0.0,
     0x1.73d88b76ddd8fp-2, 0.0, 0x1.8b1e08a17d775p-8, 0x1.d680d3919f28ep-315,
     0x1.47ae4ab17c832p-619, 0.0, 0x1.925a2f4b58bf5p-324, 0.0, 0.0, 0.0, 0.0,
     0x1.1cc2a364e77a4p-397, 0.0, 0.0, 0x1.1ada440621d56p-1005, 0.0,
     0x1.62a31cf0ab67fp-888, 0.0, 0x1.23d0e72edd926p-951, 0x1.cd8a9596450a1p-480, 0.0,
     0x1.517cdac8085acp-852, 0x1.246e3f87dc45fp-552, 0x1.245ee5e8b46cap-652,
     0x1.4c812650fe346p-333, 0x1.0e79065265697p-270, 0x1.7d7aaad382e38p-886,
     0x1.a37c6ce3140f6p-159, 0x1.991a6bb3fef33p-896, 0.0, 0x1.b84fb3733937p-359, 0.0,
     0.0, 0.0, 0.0, 0x1.d1f760a04e4e6p-931, 0x1.8d71e4f4b6d91p-12, 0.0,
     0x1.5483364a8ba47p-696, 0x1.1cf9da7f3b99fp-873, 0x1.e57e342ee6754p-346,
     0x1.2cff4768c6353p-423, 0.0, 0x1.c50bb667349a8p-868, 0x1.b3aa28a35831bp-337,
     0x1.d3d7bfdc141b7p-569, 0.0, 0.0, 0.0, 0x1.701839f7ce74bp-287, 0.0,
     0x1.6d84978f3998fp-783, 0x1.aac2bd81c5a03p-866, 0x1.e6dd1f435ea99p-306, 0.0,
     0x1.6affdeb733b5dp-174, 0x1.3a18e4d50b6a5p-1018, 0x1.4b5fa0694b35p-378,
     0x1.7e51ddd9d1d15p-486, 0.0, 0x1.a31cfb025b285p-596, 0x1.e079faf5d1fb3p-584, 0.0,
     0x1.bf48953b48f9fp-852, 0.0, 0.0, 0.0, 0x1.99907d156fd44p-966, 0.0,
     0x1.a000f36b0ba67p-901, 0.0, 0.0, 0.0, 0x1.9d915188890a3p-137, 0.0, 0.0, 0.0,
     0x1.f782cf752c772p-69, 0.0, 0.0, 0x1.872ec37610e75p-655, 0x1.1f094823a1c81p-496,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49a81c4a29683p-978, 0.0,
     0x1.4f7399f5470c5p-697, 0.0, 0x1.fe46a97beb7b6p-336, 0.0, 0x1.08b3af478a353p-800,
     0.0, 0.0, 0x1.62888a99ac43ep-170, 0.0, 0.0, 0x1.0faf1f1262326p-499,
     0x1.6f6a4483efbf8p-786, 0x1.0bfa0549724f9p-908, 0x1.7926fe072750bp-765,
     0x1.9de9283356476p-162, 0x1.d6df78a49f513p-254, 0x1.1d6c839f02b4bp-329,
     0x1.a026b332bcedcp-650, 0.0, 0.0, 0.0, 0.0, 0x1.1c31b412d6121p-924,
     0x1.bf55b449583c8p-323, 0x1.f292d89e40fedp-249, 0x1.53f1806984f2bp-922,
     0x1.c7437705c6508p-6, 0x1.4856c7d47b475p-41, 0.0, 0.0, 0.0, 0.0,
     0x1.3ef7644a42674p-883, 0.0, 0x1.c41f38abfa2ddp-744, 0.0, 0x1.d4f420084755ep-46,
     0x1.eb26e04cece71p-271, 0.0, 0x1.99a2cc34051e5p-730, 0.0, 0x1.d02bb85d5ea6dp-598,
     0x1.072dc3b12e3a8p-578, 0.0, 0x1.93930a8bb0bfdp-463, 0.0, 0.0,
     0x1.9203170c01acep-667, 0.0, 0.0, 0x1.5c94b5d57a5cep-740, 0x1.4eb5ccc8e7bc7p-79,
     0.0, 0.0, 0x1.e83441c48da66p-411, 0x1.dc56b1d982feep-879, 0x1.7975c69b6eaa9p-672,
     0.0, 0.0, 0x1.26ccfdea647d5p-318, 0x1.e8b467e496508p-684, 0.0, 0.0, 0.0,
     0x1.e55367edfb6f7p-54, 0.0, 0x1.e761bc177ad72p-729, 0.0, 0.0,
     0x1.833338a3c8b8p-159, 0.0, 0x1.ab1c6a26ebf2fp-205, 0x1.ef6271646e629p-126, 0.0,
     0x1.ee085ab5e36d8p-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4262126a1dca4p-50,
     0x1.c2ab86296e6a7p-829, 0.0, 0.0, 0.0, 0.0, 0x1.8416bf71cd025p-392, 0.0, 0.0,
     0.0, 0.0, 0x1.a2acb0fc58887p-210, 0x1.7fb4f3879b861p-856, 0x1.52cd189073535p-658,
     0.0, 0x1.2d677853b3153p-260, 0.0, 0.0, 0x1.ed841697572b7p-143, 0.0, 0.0, 0.0,
     0x1.47baa3a06069ap-295, 0x1.05e415458d273p-942, 0.0, 0.0, 0.0,
     0x1.7a549c49bf92cp-745, 0x1.097d4fb0e84fcp-360, 0.0, 0x1.5b3b6e8e4f7eap-566, 0.0,
     0x1.3840d38e597e5p-208, 0x1.ddb8790632e71p-139, 0.0, 0.0, 0x1.b885bc705eb5ep-162,
     0x1.8284fb483c8a5p-192, 0.0, 0x1.62af4383c7c77p-804, 0x1.2d24c1161401ap-698,
     0x1.fb4f764d9fbe1p-269, 0x1.fb9cf8ff549b6p-534, 0.0, 0.0, 0.0, 0.0,
     0x1.216a25667d7ap-59, 0x1.8f4b339ad4b5cp-666, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9ce18c8e235ap-784, 0x1.124c311b5711ap-376, 0.0, 0.0, 0x1.0d01387c0a93fp-937,
     0.0, 0.0, 0.0, 0.0, 0x1.045008a4df85dp-562, 0x1.36a99f403b096p-651,
     0x1.0f40776690231p-639, 0x1.78229096ccf4bp-541, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6c5bdd7f98a7p-545, 0.0, 0x1.959d7f050616ep-720, 0x1.05d43f52ae604p-956,
     0x1.94f7c6ac63891p-43, 0x1.5941eb6bb78cp-347, 0.0, 0x1.e708c79083c82p-12, 0.0,
     0.0, 0x1.ba924811e172ep-705, 0.0, 0x1.e5400f484f92bp-926, 0.0,
     0x1.61de165ed86dbp-183, 0.0, 0.0, 0x1.dacb826e17584p-172, 0x1.d95da0c66d272p-291,
     0.0, 0.0, 0x1.2c2ac0666cec4p-351, 0.0, 0.0, 0.0, 0x1.6c34c733b2836p-413,
     0x1.0899af3ad2b63p-595, 0x1.b6fa20d88f45bp-935, 0x1.5aaa883beb1cdp-32, 0.0,
     0x1.a12d159d742a6p-508, 0x1.9b333bf6b104ep-564, 0.0, 0x1.ce701e618cdbcp-116,
     0x1.457930125e8bap-990, 0x1.5c224d26f08abp-111, 0x1.72e70c8afdfd3p-66,
     0x1.eaa33170eb6e2p-483, 0x1.8cc02f69f968dp-940, 0x1.50319623db5b3p-34, 0.0,
     0x1.697be848e633fp-483, 0x1.433893aa7d82ep-348, 0x1.64c2cdd707d9cp-776, 0.0,
     0x1.036a43e9a3f26p-542, 0x1.f4c7be0cdfdbcp-613, 0.0, 0x1.8a0a66fb42028p-98,
     0x1.70ddebc71d3c4p-754, 0.0, 0.0, 0x1.6dfa53c945e7ap-875, 0x1.a1b14a8926fddp-43,
     0x1.45ffcb0521ef1p-414, 0.0, 0x1.204853bbe864p-187, 0x1.eae755c62f3f2p-960,
     0x1.744fbd540a68ep-371, 0.0, 0x1.ec0418997a45bp-463, 0.0, 0.0,
     0x1.c602f3a9d89eep-220, 0.0, 0x1.484a3b2bea202p-352, 0x1.ae65d7be4cae4p-227,
     0x1.3fae579582dc8p-731, 0x1.6c00e012648aep-48, 0x1.f79e6a28571fbp-555, 0.0,
     0x1.36382ee1011a8p-477, 0x1.68626873a4a62p-1007, 0x1.fe68b10b68caap-177,
     0x1.aae84ec3e671fp-528, 0x1.f2959d7cffb24p-817, 0x1.f822b4ac6cc75p-534,
     0x1.94c3e1429484fp-932, 0.0, 0x1.24e90544897eap-662, 0x1.3fe991fd882b4p-476,
     0x1.5cf478c1aa82ap-758, 0.0, 0.0, 0x1.c2b3a7364ac7ep-310, 0x1.b3f19a3b2eec5p-74,
     0x1.b7c85e66a99p-105, 0x1.1faf22dd505b8p-392, 0.0, 0x1.28a0cc4899148p-302, 0.0,
     0x1.2345e726312b1p-749, 0.0, 0.0, 0.0, 0x1.623e75451bd5cp-194,
     0x1.fb93e981d0557p-829, 0x1.8d7e9081410ffp-945, 0x1.b3fcc00da12d8p-45, 0.0,
     0x1.628bac2ddecbep-956, 0x1.6bd2bd0a0f0c2p-853, 0x1.470fcdbe3019dp-419, 0.0,
     0x1.0bb68f5ddc41p-314, 0x1.3d47d80dccae3p-621, 0x1.a574f537db85ep-908,
     0x1.a0a4dc5bcc872p-40, 0x1.cc7cb457d3eb5p-666, 0x1.673f611bdad86p-275,
     0x1.a34a438192d5ap-1004, 0.0, 0x1.49bb5de00f39ap-226, 0.0, 0.0, 0.0,
     0x1.6aaa8ad573863p-608, 0.0, 0x1.fd88ad6f03422p-710, 0x1.ea5966351993cp-795,
     0x1.d1987873217d7p-164, 0.0, 0x1.ec8305677c41ap-882, 0x1.1021ebf9efddcp-310, 0.0,
     0.0, 0x1.34aca784dcb5bp-793, 0x1.b05731fe2b757p-125, 0x1.796ed9501ac6dp-747,
     0x1.22a489e955187p-837, 0.0, 0.0, 0x1.5bbddb9324b2bp-934, 0x1.e1807e64427d1p-998,
     0x1.8606c5e2693e9p-137, 0x1.9ac1463fc5eb6p-393, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6759aa12ccd26p-266, 0x1.19a8761021722p-759, 0.0, 0.0, 0x1.cbc8ed510b621p-269,
     0.0, 0x1.5845ec06c6adep-586, 0.0, 0.0, 0.0, 0.0, 0x1.d5725ecd6ae46p-719, 0.0,
     0x1.f6413c1d7a9f6p-153, 0x1.aeab8c9a82224p-198, 0x1.1ed2ec3e89a0ep-115,
     0x1.fb05977932e1ep-535, 0x1.5e6ba8224158bp-617, 0.0, 0x1.ca0771f3b4ff2p-871,
     0x1.46c48af560c09p-643, 0x1.2fbf80ac6f18p-329
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
            tmp1 = Sleef_finz_cosd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_cosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cosd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
