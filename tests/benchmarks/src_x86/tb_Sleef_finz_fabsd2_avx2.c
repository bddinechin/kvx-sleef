/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_fabsd2_avx2128.c --function Sleef_finz_fabsd2_avx2128 \
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
     0x1.0d93f291941dfp-15, 0.0, 0x1.692743e9bf0cep-71, 0.0, 0x1.c91f42a2b9807p-169,
     0.0, 0x1.6e0666344093ap-521, 0x1.a80eadb323776p-780, 0x1.d6ae15dd0eb11p-910,
     0x1.2201f941bce1ap-29, 0x1.b6f2a9f62e9cp-669, 0x1.8d97986965e5dp-505,
     0x1.43105fd2f502bp-832, 0.0, 0.0, 0.0, 0x1.0b9873bfabfebp-158, 0.0,
     0x1.82b47c3bce6ccp-614, 0.0, 0x1.94f3fd5f571ccp-284, 0.0, 0x1.505bcec43949dp-619,
     0.0, 0.0, 0x1.d4c3e2e876be3p-540, 0x1.58e1b65845568p-278, 0.0, 0.0, 0.0,
     0x1.5ce0f1cced503p-269, 0.0, 0.0, 0x1.7ec9b4c7e4bbap-821, 0.0, 0.0,
     0x1.110480fafd007p-742, 0x1.ec2b649735607p-554, 0x1.74ad6681f275p-632,
     0x1.31fa7d9ffb4f2p-98, 0x1.8345246d362dbp-539, 0.0, 0x1.b8e632ee3dec1p-1007, 0.0,
     0x1.13b791a237ad5p-163, 0.0, 0x1.7248422f23c95p-499, 0x1.e7531fdc526e6p-202,
     0x1.2dea21db96e25p-729, 0x1.e1837088709acp-401, 0x1.97adf17a448ffp-278,
     0x1.7fcfd7ed6247bp-232, 0.0, 0x1.2c4f9af235091p-207, 0x1.4989703a39235p-754,
     0x1.583334e1410b9p-103, 0.0, 0x1.654c5c57c372cp-547, 0x1.413bc691b9ddep-302, 0.0,
     0x1.27ad904bceec3p-713, 0.0, 0x1.cf08793d1e3e3p-198, 0.0, 0x1.f54fbdc17c77bp-775,
     0x1.f586337b6ebb2p-793, 0.0, 0.0, 0.0, 0x1.488f240026118p-753, 0.0, 0.0, 0.0,
     0x1.ba878229d7788p-797, 0x1.4569bf445c1a8p-394, 0x1.086ae9424c647p-593, 0.0, 0.0,
     0x1.5b2aaeb63cbb1p-860, 0.0, 0x1.83360855ffe9cp-224, 0.0, 0x1.531e38f3e0977p-832,
     0x1.2bac4449b3e91p-395, 0.0, 0x1.32f3277de142p-579, 0.0, 0.0,
     0x1.092895f9b2d3dp-432, 0.0, 0.0, 0x1.9b2a3023c345cp-18, 0x1.9a26bf1b56087p-644,
     0x1.718f9cb003bffp-1019, 0x1.1030de6961d72p-547, 0x1.b1b81398d3c41p-943,
     0x1.35ef5adce6c6bp-267, 0.0, 0x1.e72af188079c7p-559, 0.0, 0x1.512a09bc5d7c8p-838,
     0.0, 0.0, 0x1.cd8e00ebcd975p-509, 0x1.4249203e43113p-71, 0.0,
     0x1.b85e732d9533cp-929, 0x1.c92884f56df66p-954, 0x1.55d2edcb74e03p-271, 0.0,
     0x1.152bd297689ep-228, 0x1.f594c1731122dp-966, 0.0, 0x1.796457c42e77cp-592, 0.0,
     0x1.22659ec7708bcp-69, 0.0, 0x1.59bed9310e522p-1, 0x1.80ee15357ffc6p-704, 0.0,
     0x1.9a3adaa26f05bp-683, 0.0, 0x1.4f7beabab67bap-327, 0x1.6fbae5a97f6a7p-288,
     0x1.63846d92f5a3bp-911, 0x1.0f1775cbbb1e6p-979, 0x1.db97fed74a377p-1012,
     0x1.9da4bd70f59cbp-290, 0x1.eeb22134e15abp-249, 0.0, 0.0, 0.0,
     0x1.57a1dd2176e74p-543, 0x1.d0f39650d75b9p-59, 0x1.7afb803c2f9d3p-1016, 0.0, 0.0,
     0.0, 0x1.4e5ba388dca9ap-334, 0.0, 0x1.6c5a9770d53f7p-310, 0.0, 0.0,
     0x1.a54ff60f452b3p-916, 0.0, 0x1.ee4edd5cd8304p-985, 0.0, 0x1.dfe7e4d6a0055p-46,
     0x1.c3d48cd1b81cap-259, 0x1.0a5280b2f4d32p-207, 0.0, 0x1.ead6ddaa8a46p-666,
     0x1.1ac0d7a71d3bdp-135, 0.0, 0.0, 0x1.809e5589a15ep-290, 0x1.ae2eca673438ep-521,
     0.0, 0x1.32ed173c053d2p-271, 0x1.4d5a020c27779p-786, 0.0, 0x1.2047a57772788p-638,
     0.0, 0x1.5ddf383ae417bp-943, 0.0, 0x1.fb5015ca140e4p-850, 0x1.e5225a892ca9p-337,
     0x1.1979ddda0963fp-288, 0.0, 0x1.3e83a4204e04fp-864, 0x1.43c204be261cp-520,
     0x1.29b1d4137c38ep-200, 0x1.4f1939712d976p-829, 0x1.662593e810cb6p-1009, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c7236a900cfc1p-409, 0.0, 0x1.5dd51b67d3ac6p-517,
     0x1.de9e9641eb67ep-917, 0x1.9d90a4a3b083dp-367, 0.0, 0x1.4e06a62eab68dp-665,
     0x1.e0e7b2def755ep-873, 0.0, 0x1.bad4b99e05ff9p-283, 0.0, 0x1.1f8ab1522f436p-797,
     0x1.56cc3649cd066p-765, 0x1.d99504c6663ffp-550, 0.0, 0.0, 0x1.e8e6218e7a216p-268,
     0.0, 0.0, 0.0, 0x1.80cd7570532abp-380, 0x1.4d7a5135bcad7p-469,
     0x1.78b48317cdc36p-50, 0.0, 0.0, 0x1.f86224a5a7ecbp-237, 0x1.4efa29474ef9ep-165,
     0x1.071299e30f2p-164, 0.0, 0.0, 0.0, 0.0, 0x1.5d0ada1099875p-992, 0.0, 0.0, 0.0,
     0x1.5914e279113c4p-86, 0.0, 0.0, 0x1.866ad9e02f138p-712, 0.0,
     0x1.1e92564d09ed7p-518, 0.0, 0x1.9b7b9cc08f535p-537, 0x1.2167cd2111cd6p-877,
     0x1.c31808ca16931p-572, 0.0, 0x1.fb9dec78dfd19p-55, 0.0, 0.0,
     0x1.0e15a86123159p-406, 0x1.4446e8aad7fdfp-834, 0x1.5289bf925fd74p-1001, 0.0,
     0.0, 0.0, 0.0, 0x1.56f19af262da1p-920, 0x1.5e13634d3c8aap-903,
     0x1.250d006aefb9bp-482, 0.0, 0.0, 0x1.0c966756fa513p-824, 0.0, 0.0,
     0x1.465ae6d6c9777p-278, 0.0, 0x1.4249129569c8ep-28, 0.0, 0x1.92c07c02e83dep-954,
     0x1.e42ed895b237fp-278, 0x1.eaa4f363e494ep-918, 0x1.a017942a41fefp-323, 0.0,
     0x1.4bc1f19650c98p-990, 0.0, 0x1.e750a97eb48eap-592, 0x1.ceb29570733bp-153, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43583c152c8f2p-410,
     0x1.607575fc7799ep-65, 0.0, 0x1.b7059a0bf0df9p-816, 0x1.1855ce799044ep-2,
     0x1.d88ebb663f6acp-212, 0.0, 0x1.14dc5bcf84bebp-209, 0x1.ae652c6cf3a4dp-41,
     0x1.7319e2d68093p-380, 0x1.e44214052edc3p-243, 0.0, 0.0, 0x1.9aaa33128b981p-293,
     0x1.c9ebd147ff281p-631, 0x1.80d642cb549fep-117, 0x1.9087bc24f8bdep-102, 0.0,
     0x1.b041eaa60ef84p-221, 0.0, 0.0, 0x1.a0fb8f143de46p-6, 0x1.5d7e9105cf65fp-769,
     0x1.2476e50b80ec3p-988, 0x1.2051c53b6900ep-322, 0.0, 0.0, 0x1.336427ffe1eeap-675,
     0.0, 0x1.f050b1a85034fp-879, 0.0, 0.0, 0x1.95553a7456a5ap-218, 0.0,
     0x1.3219224b2cf76p-691, 0.0, 0.0, 0x1.be930c3b81081p-993, 0.0,
     0x1.55d9813fbd79dp-221, 0x1.9beed7e56ecafp-109, 0.0, 0x1.0cdf06427edc2p-359, 0.0,
     0x1.2abe7df4a3caep-9, 0x1.fdf8fc14aa6e6p-119, 0.0, 0x1.7eeebd562c643p-271, 0.0,
     0x1.fe22eb7453194p-153, 0x1.5f1086459b5dfp-369, 0x1.6f34ff082b722p-48,
     0x1.ce4c88ee1d9acp-828, 0x1.56f532dab5867p-546, 0.0, 0.0, 0x1.8f4ab865f359ap-225,
     0.0, 0.0, 0x1.c67a6009c04b3p-517, 0.0, 0x1.65984cb15b65cp-813, 0.0, 0.0,
     0x1.a210ace6b6f42p-796, 0.0, 0.0, 0x1.2461a897660bep-269, 0x1.a86d4e89fb26ap-768,
     0.0, 0.0, 0x1.10bc7b40a62ecp-64, 0.0, 0.0, 0.0, 0.0, 0x1.27efa0e0c00f3p-74, 0.0,
     0.0, 0.0, 0x1.ccf7f06b8e605p-10, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.171ab6bcd4583p-123,
     0x1.77ed2c13e4fp-447, 0x1.2045717abc20cp-164, 0x1.11b8d6764b85fp-880, 0.0, 0.0,
     0x1.eeba5ec0fc2e9p-9, 0x1.9f94ddaaf3e3p-492, 0x1.208c2a73dfd51p-333,
     0x1.f424252151804p-488, 0x1.888d54daf0163p-540, 0.0, 0.0, 0.0,
     0x1.6983b5d4f9543p-475, 0x1.f2c83b60e2bd3p-458, 0.0, 0x1.f96c2b255863ep-290,
     0x1.f755444cef468p-605, 0x1.04ef46cd28f8cp-665, 0x1.1c5d32c2f53ap-42,
     0x1.fb5a9600a7fc1p-493, 0x1.c4c34669560f1p-803, 0x1.6aacaf0bf312ap-572, 0.0, 0.0,
     0.0, 0x1.326b1b027a75dp-752, 0x1.448e84596d31cp-901, 0x1.4ece60cf65576p-934,
     0x1.75e8f6388a281p-113, 0x1.dc787a2b0c8dep-504, 0x1.b141b0a983486p-189, 0.0, 0.0,
     0x1.c4fdea8ce390dp-839, 0.0, 0.0, 0.0, 0x1.6d3f852ae5e57p-995, 0.0,
     0x1.7df5e8b9487c3p-624, 0.0, 0x1.c6efb6875c75p-795, 0.0, 0x1.735ea0f8064c1p-784,
     0.0, 0x1.649292df1906p-816, 0.0, 0.0, 0.0, 0.0, 0x1.c00fc1225116cp-897,
     0x1.6b8cb79c82a73p-464, 0.0, 0.0, 0x1.e9b06265a6ea3p-309, 0.0, 0.0, 0.0,
     0x1.e4260cc5ff427p-73, 0x1.59712cd18df3ap-578, 0x1.6d07f26bdd222p-263, 0.0, 0.0,
     0.0, 0x1.757f83d78007dp-82, 0.0, 0.0, 0.0, 0.0, 0x1.74d01234884c6p-522, 0.0,
     0x1.097913015e17cp-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9a054475e415p-55,
     0x1.b8754988b4695p-686, 0x1.98be925a52ab7p-119, 0.0, 0.0, 0x1.6a2aebf0d4c17p-169,
     0.0, 0x1.84594bbe5d519p-525, 0x1.74235c1cd140cp-458, 0.0, 0x1.e7076510da97ap-270,
     0.0, 0.0, 0.0, 0.0, 0x1.232a34c298dd7p-541, 0.0, 0x1.2e5c53fb34483p-604, 0.0,
     0x1.4960d6eae07cep-373, 0x1.3e17b97f36855p-292, 0x1.543e4e62ce8f4p-844,
     0x1.35eaaa2e1b4ebp-103, 0x1.a53c03053f091p-486, 0x1.1122dba08baep-552,
     0x1.9463dd0ec03fdp-489, 0x1.a65e545b65d61p-837, 0x1.55d7486b4429bp-880, 0.0,
     0x1.ab13998d0d04dp-337, 0x1.7cda5e4ddfdc5p-161, 0.0, 0.0, 0x1.5ebecd9515985p-539,
     0x1.10c8d3085af29p-120, 0x1.7b0708da6a0aep-997, 0x1.5993ae7f49f45p-146,
     0x1.5d99244ee773bp-412, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a44c5ab51b74p-195, 0x1.c84839d79a039p-173, 0.0, 0x1.98f0f3da1f45bp-2,
     0x1.d1f5b04282925p-249, 0.0, 0.0, 0x1.a5fe7a480fa42p-949, 0x1.acda221e4af45p-823,
     0.0, 0x1.32036da21443cp-752, 0x1.b4007bff182a4p-464, 0x1.f7a53b26f6f78p-901, 0.0,
     0x1.799ab76dbaf05p-1005, 0x1.394ff99220299p-66, 0x1.560588cb53195p-580,
     0x1.206b36106b968p-589, 0x1.e05d3cd437558p-425, 0x1.fdf5f809ecca8p-36,
     0x1.ef9c7d0493bb8p-140, 0.0, 0.0, 0.0, 0x1.bc534e3370227p-797,
     0x1.8681cea4a29ap-1, 0.0, 0x1.4e267be1b3884p-93, 0.0, 0.0, 0.0,
     0x1.ae52dd34facc5p-170, 0.0, 0x1.f553555a91723p-915, 0x1.5b29d687108d2p-262,
     0x1.c60db349b78e3p-916, 0x1.8116521e8f799p-865, 0x1.708307e0b15eap-1014,
     0x1.82856353626f7p-235, 0.0, 0.0, 0.0, 0x1.1cad227ab0032p-756, 0.0,
     0x1.fe7ba1a41890fp-744, 0.0, 0x1.428f00a5d0691p-57, 0.0, 0.0,
     0x1.a75fae3e9fbf9p-389, 0x1.95d91495368c6p-77, 0x1.3751dcb4a2d8bp-516,
     0x1.49e40c081c4abp-17, 0x1.e3ba8d9396512p-891, 0x1.be3d77179557fp-863, 0.0, 0.0,
     0.0, 0x1.60dd8208687d8p-310, 0x1.f1359416f9728p-710, 0.0, 0x1.77a88d4bd5898p-515,
     0x1.16b4c50e14827p-888, 0x1.c911bbd68cc64p-67, 0x1.3c9a4f28d0977p-941,
     0x1.595903ebfb61ap-48, 0x1.9741355a0396cp-266, 0.0, 0x1.af8d5a863738cp-438, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13b171a588ecdp-834, 0.0,
     0x1.977e64d4bba91p-657, 0x1.67d29f2f5d24dp-980, 0.0, 0.0, 0.0,
     0x1.22aef230d032ap-266, 0.0, 0x1.0548d78ea5dfep-376, 0x1.b9e6ed0adfefdp-443,
     0x1.cf9e0e19be065p-110, 0x1.96523331dcfdap-450, 0x1.8409303d04748p-396,
     0x1.e427ed114dbf7p-180, 0x1.7665afd6e0883p-466, 0x1.c6a2430545b29p-756,
     0x1.91fe16f24d8cp-277, 0.0, 0x1.0ab1db6a42f8cp-321, 0.0, 0.0,
     0x1.f5696fbebc7f3p-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88821b01359f8p-606, 0.0, 0.0, 0x1.6a188a734989p-253, 0x1.255c244664e05p-492,
     0x1.d5559127a69b8p-788, 0.0, 0x1.0e4aabaefba4bp-312, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.40c028cf93c32p-951, 0.0, 0x1.5075a09294379p-743, 0x1.3ef40eafd7f7ep-187,
     0x1.7ff08aac8d5a2p-775, 0x1.86cc973954e6ep-756, 0x1.482d020fffd98p-601, 0.0, 0.0,
     0x1.cb15bcaafc903p-132, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75328af663d43p-413,
     0x1.48625bf6329f7p-790, 0x1.aac269eecc542p-908, 0.0, 0x1.bec41fbf32133p-25, 0.0,
     0x1.53525b5f8c299p-559, 0.0, 0.0, 0x1.d574c53f8e478p-739, 0.0,
     0x1.6b656d86f35e5p-641, 0x1.5cf30a053322ep-36, 0.0, 0x1.c610360cc1565p-73,
     0x1.039c7026dcda5p-376, 0x1.0158648aed251p-68, 0.0, 0x1.dd0c55d1abe82p-974,
     0x1.4facb42927074p-975, 0.0, 0.0, 0.0, 0x1.282788d645c6cp-894, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.449126c3321a1p-826, 0x1.36e48ad3d4a56p-214, 0.0, 0.0, 0.0,
     0x1.e8d42e4038c74p-805, 0.0, 0x1.3f2505bcc2512p-406, 0.0, 0x1.98e7016af3aep-236,
     0.0, 0x1.f65ace4a26b02p-554, 0x1.3fedeba9803c2p-561, 0.0, 0x1.638491246a62bp-548,
     0.0, 0.0, 0x1.7943a3ff860fp-703, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fbcae90b3fb9p-918,
     0.0, 0.0, 0.0, 0x1.e16e33b2dbfffp-271, 0x1.bfbfe35b1cffp-418,
     0x1.74fb020dc2de1p-93, 0x1.cc43af2d781f8p-120, 0.0, 0.0, 0x1.db100a90f954ap-427,
     0.0, 0.0, 0x1.21826dd5ab143p-510, 0.0, 0x1.585ce44b9b717p-479,
     0x1.5d01abe509dfdp-139, 0.0, 0x1.02932175b27acp-1004, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dfa39beb9e69dp-74, 0x1.858db0ff2d658p-205, 0x1.1e7d7337a463bp-851,
     0x1.3f4c2ab63e82ep-989, 0x1.91516a01a854p-859, 0.0, 0.0, 0x1.3369b5c5d13bcp-518,
     0x1.12eb77d54b834p-1006, 0x1.adccd2293d70ep-988, 0.0, 0.0,
     0x1.a1f14e56fb32bp-282, 0.0, 0x1.b27992eec8d18p-453, 0x1.4ee85452ac469p-801, 0.0,
     0x1.9d2df53f77f7bp-711, 0.0, 0x1.1a08ece16a625p-605, 0x1.202a5894de367p-421,
     0x1.17878b35fa58cp-205, 0x1.1498bc54986eap-395, 0.0, 0x1.0f8050356184p-680,
     0x1.074f4f4f08278p-208, 0x1.3a72031f234b6p-919, 0.0, 0.0, 0.0,
     0x1.4d6a197014f65p-581, 0.0, 0.0, 0.0, 0.0, 0x1.e7a2bf1d4c70dp-878, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a3819d17eed44p-549, 0.0, 0.0, 0.0, 0x1.8ddcd6dc6a12cp-218,
     0x1.509fbcec13fedp-438, 0.0, 0x1.0b271e83f7fe5p-22, 0.0, 0.0,
     0x1.1072416164f27p-522, 0.0, 0x1.8f58626ebb1ccp-732, 0.0, 0.0, 0.0, 0.0,
     0x1.8d4d6ae233f81p-328, 0.0, 0x1.0c6a86ba8a1bfp-552, 0.0, 0x1.25c5b52973a5ep-499,
     0x1.fdb1e0ff58c56p-162, 0.0, 0x1.04a1974157233p-962, 0x1.febb9930121b9p-832,
     0x1.465c358384675p-358, 0.0, 0.0, 0x1.8b919629f0fcap-253, 0x1.b5dfd1e2d0edfp-528,
     0x1.f476aedf7c252p-873, 0x1.9a3da311f3eabp-566, 0.0, 0x1.6b3f894080d3bp-901,
     0x1.dcae239f23f1cp-745, 0x1.e6987106cffb3p-262, 0x1.50971fa219cb6p-995, 0.0, 0.0,
     0.0, 0.0, 0x1.e148e6330ddc9p-772, 0.0, 0.0, 0x1.738d97bf438bfp-220, 0.0, 0.0,
     0.0, 0x1.69d3cf1986886p-893, 0.0, 0.0, 0.0, 0.0, 0x1.4d70974544486p-409,
     0x1.dd12a2a9ee4fbp-44, 0x1.86479a32d933ep-976, 0x1.34a3844d14163p-944,
     0x1.0bb9eba6154b2p-735, 0.0, 0.0, 0x1.8825c70216e2cp-909, 0.0,
     0x1.42f9314c57b0fp-198, 0.0, 0x1.33f2704fc77d6p-884, 0x1.3bfbe42615a16p-960,
     0x1.4ad2fd31e59a5p-115, 0.0, 0x1.d9b96eea2ad89p-945, 0x1.0897ef4d60e15p-995,
     0x1.c710017670822p-377, 0x1.d85917af7ba48p-460, 0.0, 0.0, 0.0, 0.0,
     0x1.dc665adf3563cp-846, 0.0, 0.0, 0.0, 0.0, 0x1.e076d20cfde72p-810,
     0x1.e0127c785a30dp-369, 0.0, 0.0, 0x1.41068bf20cf4dp-444, 0.0, 0.0, 0.0,
     0x1.b7364c8b95cdcp-33, 0x1.eb6c5b601c41dp-447, 0.0, 0.0, 0.0, 0.0,
     0x1.2dbeae6edad72p-745, 0x1.70f3ed740e54cp-475, 0x1.5a25cd58567ffp-355,
     0x1.e3bf0015906c2p-897, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8b7ed0a457ep-96, 0.0,
     0x1.63b0f636e8ac5p-985, 0x1.c977f14cc17ecp-418, 0x1.94661f9f9674p-163,
     0x1.e2b06677be8c2p-3, 0x1.2af6271286058p-863, 0x1.b115ad169947fp-682,
     0x1.084b9f2ace897p-729, 0x1.9873c0f84fe32p-365, 0.0, 0.0, 0x1.94160823d7eecp-221,
     0.0, 0.0, 0x1.dd8338da08633p-95, 0.0, 0x1.719772f3843e7p-471,
     0x1.c2723ffe6edd8p-552, 0.0, 0x1.73b78b6f4e05ep-300, 0x1.67feeaadfeacep-457, 0.0,
     0x1.92928ff8fcb7p-481, 0.0, 0.0, 0x1.3ce1e938d5f57p-720, 0.0,
     0x1.ed85254ba7921p-304, 0x1.1ec441e642f63p-260, 0.0, 0x1.1a7fc6ed87dbbp-829,
     0x1.5db9adabf7304p-623, 0x1.5f4eef84762dp-341, 0x1.b12e77a70611fp-486,
     0x1.c3072fc832e7cp-596, 0.0, 0x1.dda400e251cbap-577, 0.0, 0x1.498a3e252d2eap-834,
     0.0, 0.0, 0.0, 0x1.34abc4fe56192p-186, 0.0, 0x1.6ae4b6f854129p-480, 0.0, 0.0,
     0x1.9f793aa89cfb6p-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c90f629866ebp-1007,
     0x1.d48fbdf0f68c6p-904, 0x1.ab7a8994f8b09p-257, 0.0, 0.0, 0x1.e2bb6e605259ap-165,
     0x1.ee8a517cb1d84p-413, 0.0, 0.0, 0x1.8633ea4639223p-428, 0.0, 0.0, 0.0,
     0x1.724c5842d0544p-456, 0x1.7b4d0c90c2bebp-460, 0.0, 0x1.d16fa6175f1bdp-159,
     0x1.f9c30d4f5f1dfp-603, 0.0, 0.0, 0.0, 0x1.991bfdccc9e9cp-976, 0.0, 0.0,
     0x1.a82a7347b0128p-260, 0.0, 0x1.15eec7838e699p-666, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8f6881c97b0cp-167, 0.0, 0.0, 0.0, 0x1.deade17caa2dfp-617,
     0x1.c88ca4b0c8eb1p-894, 0.0, 0x1.a8bf072ecd084p-299, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a2f9c7233355cp-863, 0x1.715a2c5b4b27cp-617, 0.0, 0x1.251cd897671aep-559,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b5f70f5c92a8p-51, 0x1.20a6f32626b27p-865,
     0.0, 0x1.820837c8c3cb3p-919, 0x1.0aeb04082dde4p-67, 0.0, 0x1.b7b6bbaebb512p-2,
     0.0, 0.0, 0x1.7cc5e4754b3e5p-969, 0.0, 0.0, 0.0, 0.0, 0x1.dee241d8136d1p-189,
     0x1.45772decb0cfep-1002, 0x1.1d37ac7046c56p-651, 0x1.c11655cec726p-610, 0.0, 0.0,
     0x1.5cf8f6a86641dp-186, 0.0, 0x1.0efd4c2cc7b7ep-614, 0x1.81e3c6db1960fp-212, 0.0,
     0.0, 0.0, 0.0, 0x1.1ddbf6ed36216p-331, 0x1.72d6be6077d11p-458,
     0x1.ce5d577aca358p-647, 0x1.7c6c1cca22c19p-705, 0x1.523927391326ep-160, 0.0,
     0x1.d52d7e7c7e0e9p-372, 0.0, 0x1.ae2cedd276c01p-539, 0.0, 0x1.bfdc7d06b9594p-953,
     0x1.e7f889ffd36b3p-369, 0.0, 0x1.856788a0e6ffep-842, 0x1.a91f343252b67p-142, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5cad1dfd63919p-865, 0x1.4602747b7d695p-226, 0.0, 0.0,
     0x1.4ebc2021570c2p-427
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
            tmp1 = Sleef_finz_fabsd2_avx2128(tmp0);
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
    printf("Sleef_finz_fabsd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_fabsd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
