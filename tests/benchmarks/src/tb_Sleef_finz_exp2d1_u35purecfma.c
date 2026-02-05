/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d1_u35purecfma.c --function \
 *     Sleef_finz_exp2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.d3b31d073dfa2p-987, 0x1.de9683506515dp-585, 0x1.dcbe965025bdap-346, 0.0,
     0x1.dea050fde7b01p-846, 0.0, 0.0, 0x1.d37f1021dfd24p-976, 0.0, 0.0, 0.0,
     0x1.b4a9d2fe3a20bp-385, 0x1.63fed7bacaf14p-358, 0x1.957d8ae578f57p-437,
     0x1.39e28455743d9p-266, 0.0, 0.0, 0x1.65af4146a4f39p-239, 0.0, 0.0, 0.0, 0.0,
     0x1.ad8f2a7097bf2p-683, 0x1.1021ddd23a8ebp-181, 0x1.f8dd0db766a4p-703, 0.0, 0.0,
     0.0, 0.0, 0x1.7ceb368dcbe62p-588, 0.0, 0.0, 0x1.e293e684ffadap-155,
     0x1.442772e233e9ep-932, 0.0, 0x1.a47ea3fb20df9p-39, 0x1.3ea44dc7d11e8p-388,
     0x1.309f5befac637p-520, 0.0, 0.0, 0.0, 0x1.9a5f39bdfa74p-696, 0.0, 0.0, 0.0, 0.0,
     0x1.7c2b17c056f8p-960, 0x1.a8ce444328d6bp-227, 0x1.adbe9a32c9c82p-185, 0.0, 0.0,
     0x1.93750791ced81p-900, 0x1.dd2cc5fe42eeep-414, 0.0, 0x1.44294abb032c8p-693,
     0x1.e8abc80cb808cp-798, 0.0, 0x1.7ad442e3c31a8p-969, 0x1.167f71088df2dp-154,
     0x1.e80c8aea26c23p-787, 0x1.d0bb5aa910cf7p-925, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f339dcffa64d3p-290, 0x1.788fe418fb1eep-199, 0x1.734e115f946c6p-52,
     0x1.02b1cd187ca55p-829, 0.0, 0.0, 0.0, 0.0, 0x1.d0c0729222f4bp-179, 0.0,
     0x1.399fc39e95c2cp-150, 0.0, 0x1.dd2905b33f6cep-442, 0x1.38aa098869a8bp-88, 0.0,
     0x1.b74b6df309d12p-402, 0x1.69ea33f044fd7p-993, 0x1.ad4202e1dbd3fp-717,
     0x1.00cd081b8cd7bp-318, 0x1.0e9f2f6420f33p-115, 0.0, 0.0, 0.0,
     0x1.3b1c891fe1691p-150, 0.0, 0x1.805d52f6e6ebcp-72, 0.0, 0.0,
     0x1.8913bf70a2d61p-59, 0.0, 0.0, 0.0, 0.0, 0x1.877892f7c6b84p-579,
     0x1.286c0eb8ddaecp-127, 0.0, 0.0, 0x1.223df047867d1p-155, 0x1.f721f0299ec6p-641,
     0x1.18e925bcfacaep-299, 0.0, 0x1.ff858b586e436p-706, 0.0, 0.0,
     0x1.1f3c2ce2b41e1p-758, 0x1.67fcca8a8989bp-841, 0.0, 0x1.5de3a63485461p-206,
     0x1.98141ba36682bp-655, 0x1.e0660df6e50ep-927, 0.0, 0x1.44e03bd6ff98ap-241, 0.0,
     0.0, 0.0, 0x1.e854911dceaffp-480, 0.0, 0.0, 0x1.6d6edf1df19cep-536, 0.0, 0.0,
     0x1.d47e805b4f7dep-410, 0x1.ab7802f028784p-805, 0.0, 0.0, 0.0,
     0x1.02d36441ab60ap-634, 0x1.bc19d650292dep-538, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e5a5a72cf822p-491, 0.0,
     0x1.b4f83fc075ed4p-510, 0.0, 0.0, 0x1.be566f85dc98ap-247, 0.0, 0.0, 0.0,
     0x1.b9136c7592d7p-192, 0x1.03d4640f8d1b5p-661, 0.0, 0x1.c3a9450cfdeb6p-151, 0.0,
     0x1.ab6dfb6c825b6p-117, 0x1.90b6736d725f8p-461, 0.0, 0.0, 0.0, 0.0,
     0x1.cd18cf72e616ap-871, 0x1.a2ddbe780cf8bp-942, 0x1.de19dd022313dp-196, 0.0,
     0x1.e6294050c938fp-181, 0.0, 0x1.059eba98584a5p-373, 0x1.6d461e8a11038p-1004,
     0x1.7f2834edf760fp-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d10c38d891dbp-285, 0.0,
     0.0, 0x1.dd2fc69f2653fp-56, 0x1.2339f16e74f91p-259, 0x1.e3edc5ebdf375p-664, 0.0,
     0x1.516b60690a244p-665, 0.0, 0.0, 0x1.6eee2310e3976p-664, 0x1.06924ddba271p-495,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b10675ca13e7fp-627, 0x1.2b2d76f90b477p-59,
     0x1.29c64cc76191ep-484, 0.0, 0x1.66b7854fcdeccp-1004, 0x1.12b34a03eae05p-570,
     0x1.b65b942c7f38fp-706, 0x1.fe1d9dd03d5b5p-538, 0x1.96de1598880eap-947,
     0x1.e4f72fb0fec71p-993, 0x1.c29bc1ed0fe29p-727, 0.0, 0x1.c7def41994807p-563, 0.0,
     0.0, 0x1.5f0614a21e54ap-545, 0.0, 0.0, 0x1.56ebd53e48906p-181, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.be764e15f146ep-189, 0x1.0422300f423bp-97, 0x1.d93d906b9decbp-571,
     0.0, 0x1.90a26ff7481e2p-751, 0.0, 0x1.476b36fb58fbbp-139, 0x1.f587e63fcd448p-592,
     0.0, 0.0, 0x1.a81ab2739cd68p-494, 0.0, 0.0, 0x1.899d21f7631ap-817,
     0x1.1c71f0cbb7813p-814, 0.0, 0.0, 0.0, 0.0, 0x1.0ec484983442cp-435,
     0x1.d330370610c01p-894, 0x1.0ed3b45a428dcp-709, 0.0, 0.0, 0x1.76322c0679293p-117,
     0x1.0197a1d73bc04p-624, 0x1.c57c57752d06ep-505, 0x1.86ec455f9c60bp-990,
     0x1.7cc3878d4ec19p-806, 0.0, 0x1.09781464a0dp-766, 0x1.52dcc90eb2082p-223,
     0x1.c92371b73fa4ep-483, 0.0, 0.0, 0x1.4593bdb3216bbp-461, 0x1.fb6dc79280a56p-764,
     0.0, 0.0, 0.0, 0x1.68ce5421110d1p-140, 0.0, 0x1.1678e27fea8dap-563, 0.0, 0.0,
     0x1.218bd10e3aa37p-467, 0.0, 0x1.0c636c0749badp-231, 0x1.ee565bc5e9b6dp-370, 0.0,
     0x1.3e00590108a69p-68, 0.0, 0x1.3d933a603d0ecp-440, 0x1.0dc315ed3cc09p-518, 0.0,
     0x1.1ba76b28a926dp-522, 0x1.f073d612ddb16p-178, 0.0, 0x1.3163cf2f1ec47p-650, 0.0,
     0.0, 0x1.b762656bc189ap-576, 0x1.044fa50d68d93p-613, 0x1.6df24026a39ecp-499, 0.0,
     0x1.b61a64675a90dp-705, 0x1.0d76f6a69aee9p-615, 0.0, 0.0, 0x1.76d2ac31f5911p-476,
     0.0, 0x1.75d0eb3ca88b8p-891, 0.0, 0.0, 0x1.aaf93421b44f9p-838, 0.0,
     0x1.0ce162e1ff548p-839, 0x1.d1be096592d3p-139, 0.0, 0x1.523602559e46ap-1015,
     0x1.af7dea6116052p-898, 0x1.19ada0b6e1136p-499, 0x1.8a8b248840a02p-11,
     0x1.de53474889b4dp-370, 0x1.07cc115110296p-555, 0x1.cf8e82fe305cep-699, 0.0,
     0x1.ed8c8ee6c38eap-984, 0x1.3775769c5c32fp-616, 0.0, 0.0, 0.0,
     0x1.42fafa4d26a8ap-699, 0x1.706c3f768ef44p-50, 0.0, 0x1.e0e6043b6ac6cp-367, 0.0,
     0x1.2a768ea58023cp-397, 0.0, 0.0, 0.0, 0.0, 0x1.35576547a8c5bp-54,
     0x1.b34464a66fddbp-161, 0x1.e8511515fb44fp-698, 0x1.2da931d2dc35ep-629,
     0x1.8f496497ca302p-222, 0x1.76fbfd253be58p-288, 0x1.cb6a3579f3fdap-304,
     0x1.e1f98eb71dfe1p-973, 0x1.0297a16b9b665p-720, 0x1.6a604bef39d36p-205,
     0x1.385704b228215p-365, 0x1.c6d7530adcba4p-848, 0.0, 0.0, 0.0,
     0x1.946ff950575ddp-435, 0x1.d2374cba430d1p-945, 0.0, 0x1.58015a63cbc7ep-594, 0.0,
     0x1.68ac34b02d3a1p-259, 0.0, 0.0, 0.0, 0x1.2e8452aa512ap-591, 0.0, 0.0, 0.0,
     0x1.1c9b0a91b0e3fp-707, 0x1.6a66a86c19613p-10, 0.0, 0.0, 0x1.b1bce9b00cbd7p-682,
     0.0, 0x1.8149f26e3c685p-839, 0x1.8bd70d918eeafp-9, 0x1.61267f559ee3cp-536,
     0x1.6a197105fa0d3p-759, 0.0, 0x1.c4f00a0ab650cp-1003, 0x1.b16e4f3d2e03p-675, 0.0,
     0.0, 0x1.a012dca773e61p-416, 0.0, 0.0, 0.0, 0.0, 0x1.a2cc8f56ec405p-419, 0.0,
     0.0, 0.0, 0x1.47d4c327aec7bp-596, 0.0, 0.0, 0.0, 0.0, 0x1.fff6045433716p-915,
     0x1.9a2600adc789ap-298, 0x1.af281ada65457p-821, 0x1.747516bc846d9p-948,
     0x1.000de54e7f218p-501, 0x1.17e0e12948dfbp-404, 0.0, 0x1.30f7f86321261p-479,
     0x1.7547bd1d0756ep-999, 0.0, 0x1.1458a1ae392bbp-368, 0x1.85c9513089303p-240,
     0x1.6c104f36f2dc4p-632, 0.0, 0.0, 0x1.2ad3adf8acd18p-548, 0.0, 0.0, 0.0,
     0x1.1eac7a3901792p-980, 0x1.0e50a1cf45807p-525, 0.0, 0.0, 0x1.43fcc0debf6e6p-854,
     0x1.df840b4c6ab21p-97, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1d482705886dp-773,
     0x1.7e486e7307b08p-754, 0.0, 0.0, 0x1.56759c15c77b6p-113,
     0x1.430471c3b878ep-1013, 0x1.27ac445607b93p-389, 0x1.1849f2e04daccp-466,
     0x1.44d8a4bd73f1ap-869, 0x1.996771ffb5f73p-804, 0.0, 0x1.d46c43514a875p-925, 0.0,
     0x1.6c21ee33d7d46p-473, 0.0, 0.0, 0x1.31f2ae8270c34p-953, 0.0,
     0x1.3efaa4fdc0c22p-733, 0.0, 0.0, 0x1.4760e3470fa96p-334, 0.0, 0.0, 0.0,
     0x1.40b8ad03310dap-1003, 0x1.4a6bc31234e9ap-658, 0x1.7799273e5c282p-496,
     0x1.cb4225b571078p-974, 0.0, 0x1.279474772f4b8p-861, 0x1.0c26816970165p-211,
     0x1.dc93abe8886ep-755, 0x1.de8db5c8484aep-655, 0.0, 0.0, 0.0,
     0x1.2d309e3cedf24p-811, 0.0, 0x1.fbbd25ea62175p-988, 0x1.6a13e27a19e78p-289, 0.0,
     0.0, 0.0, 0x1.16e89000d1564p-177, 0x1.18aee83586bbdp-380, 0.0,
     0x1.b21e41f59ce4fp-451, 0x1.b54881c6caea6p-809, 0.0, 0.0, 0x1.6a715c2d90476p-441,
     0.0, 0x1.dac055c62dcc4p-132, 0.0, 0.0, 0x1.1c800b73acc26p-547, 0.0,
     0x1.885266516c756p-744, 0x1.9ade5104d969ap-271, 0.0, 0x1.2790730f55684p-225,
     0x1.0889d271df009p-355, 0x1.0cb91cea56d75p-342, 0.0, 0.0, 0.0,
     0x1.876ff28113babp-102, 0x1.b735418a5a0fbp-100, 0.0, 0.0, 0.0,
     0x1.78686ed397dcdp-592, 0.0, 0.0, 0.0, 0.0, 0x1.48daf7e44c95cp-593,
     0x1.f1e6dc4752f7fp-345, 0x1.9145ac7ae4be3p-756, 0x1.1fc4f6f3c4c8ap-782,
     0x1.c0d27df012fd1p-701, 0.0, 0x1.d7e5ed9ed3c82p-401, 0x1.2412e9bf02d35p-51, 0.0,
     0x1.83771c2f3fda6p-540, 0x1.672260d2b0ad4p-346, 0.0, 0x1.fc180bf5bf46bp-542, 0.0,
     0x1.506d8920f5e2cp-772, 0x1.7373df00682a5p-966, 0.0, 0.0, 0x1.5e63ce42e6fdep-187,
     0x1.5e6c910a66da5p-953, 0.0, 0.0, 0x1.59031a8554cf9p-923, 0x1.439e50a1c12dcp-14,
     0.0, 0x1.c7c28caef5ca7p-583, 0x1.3b4c920800265p-898, 0.0, 0x1.6969a8bcfa128p-468,
     0.0, 0.0, 0x1.df740f93d4363p-11, 0x1.741a903553753p-821, 0.0,
     0x1.917db7f26745ap-967, 0x1.7c2536dd572ap-262, 0x1.133e7894b46e9p-670, 0.0,
     0x1.6489b0b84a815p-312, 0x1.9930d503cae23p-753, 0x1.bcbfdee1ab697p-278, 0.0,
     0x1.eed59f24d79b3p-137, 0x1.2eef7bdb6a11ap-576, 0.0, 0x1.96d9765d6aecbp-579,
     0x1.7dc4add8ae153p-651, 0.0, 0x1.3c7b1cbeb9348p-755, 0x1.3b39f595d9947p-302,
     0x1.7187ec19e16d8p-286, 0.0, 0x1.d3b900c06e096p-977, 0x1.9b96a7e9bc3e1p-755, 0.0,
     0x1.211d7f975bfefp-616, 0x1.36c18b2748bap-42, 0.0, 0.0, 0.0,
     0x1.aae19e34681a3p-170, 0x1.98be3085122d9p-691, 0.0, 0.0, 0x1.241aa8e856009p-824,
     0.0, 0.0, 0.0, 0.0, 0x1.a621fb399d275p-797, 0x1.a0d19621ce18ep-653,
     0x1.58554514e0d24p-904, 0x1.015a3a5d13289p-307, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9ae4c9079131p-258, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c130cd33ba771p-1007, 0x1.91e83a37b0581p-308, 0x1.3b152a6abe9ecp-29, 0.0, 0.0,
     0.0, 0x1.9ab7da60b315p-397, 0.0, 0.0, 0x1.249cc4a9d4b34p-820, 0.0,
     0x1.ec0f9cca6f826p-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f18a908d4be1bp-650,
     0x1.5e7e354cec6ap-207, 0.0, 0x1.680a848db8aa9p-51, 0.0, 0x1.8023751e2a2cep-419,
     0x1.2c87a33f0a13fp-635, 0.0, 0x1.a6fdd96fbc88ep-261, 0.0, 0x1.118cf6e68abd3p-641,
     0x1.7ff75f838c058p-687, 0.0, 0x1.899b9d91199e7p-655, 0.0, 0x1.9f1177c07ecfcp-939,
     0x1.edd89ce473c7dp-933, 0.0, 0x1.5387eb10a9fccp-200, 0.0, 0.0,
     0x1.4d33bc5a05455p-76, 0x1.643f5ec87e623p-566, 0.0, 0x1.99160587c9f3ap-390,
     0x1.385b20cc8357ap-264, 0x1.0cd0c23ee379dp-87, 0x1.51d7b32f413f3p-965, 0.0,
     0x1.ca0d4cb441343p-417, 0.0, 0.0, 0x1.54de9f737b5a4p-333, 0.0,
     0x1.ccd72286cfd4ep-633, 0.0, 0.0, 0.0, 0x1.31091f0b45509p-120, 0.0,
     0x1.5b776de2a7657p-142, 0x1.4d86849bf22ccp-210, 0x1.4f8ccb378759ep-697, 0.0, 0.0,
     0x1.66c989be44edfp-212, 0x1.65014cccecb96p-972, 0.0, 0x1.a03eb381335b3p-4, 0.0,
     0.0, 0x1.c3d0fa4a8deccp-664, 0.0, 0.0, 0x1.1d829320fc18dp-58, 0.0,
     0x1.e2b53072e66e2p-448, 0.0, 0.0, 0.0, 0x1.2933c9b0ecfcp-603, 0.0, 0.0,
     0x1.b7f3370800abcp-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41bc999d83f27p-823, 0.0,
     0x1.85c8d18bccef7p-358, 0.0, 0x1.043e86c49e5ecp-984, 0.0, 0x1.66981289586d5p-207,
     0.0, 0.0, 0.0, 0x1.2c11807ac9464p-743, 0.0, 0x1.3c85b3d17014fp-613,
     0x1.2de8236dc6171p-819, 0x1.4268bd610e464p-388, 0x1.3bedc190884f9p-738,
     0x1.59af4f193a282p-581, 0.0, 0x1.ca520f421d0f2p-763, 0x1.ad508e4b9a10dp-961,
     0x1.fb1ae2c00725ap-615, 0.0, 0.0, 0x1.974dc4e6fbe8p-545, 0x1.b933975f5e917p-970,
     0.0, 0.0, 0x1.59c6cfee0f6a5p-216, 0x1.7bd23320efa02p-654, 0.0, 0.0, 0.0,
     0x1.d6837a3997f59p-551, 0x1.503258cdbd818p-672, 0.0, 0.0, 0x1.93d57b0adcadep-488,
     0x1.46a6d970c93c4p-658, 0.0, 0x1.723c4937d9c69p-418, 0x1.023e8433ff815p-211, 0.0,
     0.0, 0x1.292b814e87c23p-501, 0x1.2f6329c39414cp-218, 0.0, 0.0, 0.0, 0.0,
     0x1.edebac665176p-773, 0x1.d710b9cb74c6dp-739, 0.0, 0x1.6c613b0a44d4ep-813, 0.0,
     0.0, 0.0, 0x1.687d051352c83p-68, 0.0, 0x1.329c33a4ab476p-488,
     0x1.97ab4d2e5be93p-484, 0x1.45314df4ba14dp-591, 0.0, 0.0, 0x1.89a5ac782d624p-912,
     0x1.50afcb74f6547p-576, 0.0, 0x1.4149406ab23abp-337, 0x1.ca95fc6ea74c2p-948,
     0x1.6bb4619786619p-403, 0x1.78dbbec59900dp-232, 0x1.5e8705cb851c6p-185, 0.0,
     0x1.2e370786b996bp-134, 0.0, 0x1.74ec51c8969cep-181, 0.0, 0x1.5d0a704f89e19p-3,
     0x1.cc8425f22d58bp-170, 0x1.78d00d6dac021p-728, 0x1.db683b89fea2ep-887, 0.0,
     0x1.0a5f6eaeb1932p-576, 0.0, 0x1.1948ebf5edf99p-47, 0.0, 0.0, 0.0,
     0x1.c9f829a37f88fp-942, 0.0, 0.0, 0.0, 0x1.cf907a484fb87p-491, 0.0,
     0x1.c4b9b7f19e8c2p-86, 0x1.8d9c502c6f892p-899, 0.0, 0.0, 0x1.1314b350e9063p-12,
     0x1.0b2d8ad0c2939p-956, 0.0, 0.0, 0.0, 0x1.f38dd01bba0a8p-373, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.832daa3d987fcp-86, 0x1.c72e780e29f15p-133, 0.0, 0.0, 0.0,
     0x1.557a2a9232621p-38, 0x1.18107f5e6c5cdp-11, 0.0, 0.0, 0.0,
     0x1.3cdaf8dc46cc1p-29, 0x1.a3baae1504351p-216, 0x1.b543a236e4a3p-669,
     0x1.5c280f6d93911p-192, 0.0, 0.0, 0x1.a625a47bd7c82p-335, 0x1.18aca5610982dp-512,
     0x1.5794d963a69e1p-734, 0x1.c9308acb9d74ap-648, 0x1.b26670be63fc5p-897,
     0x1.8656390d3e699p-616, 0x1.e0d2727ab047bp-486, 0.0, 0x1.a927a02cb844ep-603,
     0x1.4e03a34d5b905p-36, 0.0, 0x1.b58bdb7f180d7p-108, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9a8485b3d34dap-339, 0x1.cb3b5b94b7c79p-689, 0x1.da7bd6890c7cap-922,
     0x1.3074d785b4a12p-382, 0.0, 0.0, 0x1.a848e95029c41p-342, 0.0,
     0x1.8814ec542d06ep-64, 0.0, 0x1.a99fc37966e21p-661, 0x1.a257acd722b49p-327, 0.0,
     0.0, 0x1.e14308a08fa77p-657, 0.0, 0x1.1fa5fdb4a5761p-520, 0x1.772dbf440af54p-966,
     0x1.f546d21cf0224p-563, 0x1.9a321000cd1dep-374, 0x1.535003c196cb4p-622,
     0x1.08751be00c8dcp-610, 0x1.9ad710f7b9d06p-768, 0x1.f1622ee8295f5p-166,
     0x1.fb83a441f4c76p-424, 0.0, 0.0, 0.0, 0x1.8737c26356729p-511, 0.0, 0.0,
     0x1.3e3c0e8dd60d4p-986, 0x1.b0ea9b474b27fp-498, 0.0, 0x1.937b28342d45bp-42,
     0x1.592dd3e72d3bep-170, 0x1.24619dc6ed7b5p-180, 0x1.bbee2d8edd37cp-454, 0.0, 0.0,
     0x1.cd48566101909p-646, 0x1.0d3ec2cf4b013p-201, 0x1.9c6ede7ddeba2p-100,
     0x1.58c0f7de30a5ep-381, 0x1.baad83434b264p-109, 0x1.6d23cd779ae84p-309, 0.0, 0.0,
     0x1.190cc97535fcfp-637, 0x1.4c8a3cc42e969p-407, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.39fa92ce144d1p-620, 0.0, 0.0, 0.0, 0x1.0b0a501120215p-270, 0.0, 0.0, 0.0,
     0x1.a7c167e463bb9p-58, 0x1.ac6cc901ba4p-229, 0.0, 0.0, 0.0,
     0x1.1f3803d006c7p-273, 0.0, 0.0, 0x1.ec5be66df913bp-45, 0.0,
     0x1.c1ea6760d0ae6p-259, 0x1.4cb654f3c0db7p-377, 0x1.65dccbad9e6a6p-99, 0.0, 0.0,
     0.0, 0.0, 0x1.d23d64187b294p-917, 0x1.1f0b06c176338p-788, 0.0,
     0x1.a5147cec5b49ap-955, 0.0, 0.0, 0.0, 0x1.450195e41379fp-923,
     0x1.33daecbe57df7p-606, 0x1.0f6739e0d37ep-333, 0.0, 0.0, 0x1.74579bf294d21p-615,
     0x1.52d4f24802ff5p-415, 0x1.89a984a8e8facp-26, 0x1.c4e9bf10f2565p-150, 0.0,
     0x1.b8e7862e7f0dep-713, 0x1.425d6b43bfb2dp-426, 0.0, 0x1.8f1f2c974f64p-324, 0.0,
     0x1.04dc27894c097p-144, 0x1.b801335181b6p-630, 0.0, 0.0, 0x1.f56274db26b3fp-999,
     0x1.2e2d56d849221p-964, 0.0, 0x1.ba0729b4ad99cp-62, 0.0, 0x1.b52d1934d76b5p-344,
     0x1.6e8ec654dc4ep-53, 0.0, 0x1.99f108a9a6f05p-224, 0x1.0af029ce1cb11p-1018,
     0x1.873c31a1d3983p-575, 0.0, 0.0, 0x1.95efbf853b07bp-100, 0.0, 0.0,
     0x1.d2ac482e6e18fp-950, 0.0, 0.0, 0x1.811c54d41c9fdp-779, 0.0,
     0x1.57d2401ca0e16p-59, 0.0, 0x1.94dbbba84ca18p-196, 0.0, 0.0,
     0x1.6624c0e6ce923p-771, 0x1.526ac92e05daap-772, 0.0, 0x1.18b8c57cb5cb5p-446, 0.0,
     0x1.87950da1b90dap-915, 0.0, 0x1.1dbb2d87df6a6p-905, 0.0, 0.0, 0.0,
     0x1.c8cae8b84a4fp-648, 0.0, 0.0, 0.0, 0x1.f9d9a7d66e736p-234,
     0x1.9c4d49f0578d4p-928, 0.0, 0.0, 0x1.e0a14fee38ac8p-935, 0.0, 0.0, 0.0,
     0x1.d483a1bffb90cp-141, 0x1.d7b2a9db0da4ap-342, 0x1.b090a63094adcp-684, 0.0, 0.0,
     0.0, 0x1.28cc2df52b5e5p-333, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0404e92fec35p-143, 0.0, 0x1.1233e62b262c5p-798, 0.0, 0x1.3d8b03244637ap-871,
     0.0, 0.0, 0x1.1c99e087b08c6p-375, 0x1.1c0f281e85d9ep-88, 0.0, 0.0,
     0x1.9fa87ff2d6cf1p-603, 0.0, 0x1.5f5dcc150c43fp-515, 0x1.87b1c0ee1122p-645, 0.0,
     0.0, 0.0, 0.0, 0x1.f8c180429e471p-668, 0.0, 0.0, 0x1.354eb2ad2b6c9p-299, 0.0,
     0.0
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
            tmp1 = Sleef_finz_exp2d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp2d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
