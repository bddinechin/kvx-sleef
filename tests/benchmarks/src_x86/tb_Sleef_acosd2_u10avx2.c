/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd2_u10avx2128.c --function Sleef_acosd2_u10avx2128 \
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
     0.0, 0.0, 0.0, 0x1.6d9455a00cc1dp-672, 0x1.475884dbefff2p-220,
     0x1.bad785ac91ec4p-876, 0x1.7f4f7f69fdb46p-235, 0x1.1776dcad0f8fap-441, 0.0, 0.0,
     0.0, 0x1.73cb9fb06d2e3p-683, 0x1.c4a9d5d4787c4p-461, 0x1.ad4d4bb01ce85p-742, 0.0,
     0.0, 0x1.dd16ab95ea4a6p-384, 0x1.bf0a5c911261ep-649, 0.0, 0.0, 0.0, 0.0,
     0x1.4c0274eed6a2fp-432, 0x1.a5f8c04427eefp-98, 0.0, 0x1.86c5752aac7d3p-689,
     0x1.fff04b3e77df9p-38, 0.0, 0.0, 0x1.a1ad5953bd2b5p-488, 0x1.a0a1c6a15b9e1p-823,
     0.0, 0.0, 0x1.d5783840d717cp-908, 0x1.2cb3ee61f2f5bp-536, 0x1.41f5052c92fd4p-665,
     0x1.7646a61e688c2p-133, 0.0, 0.0, 0x1.f68730d078913p-958, 0.0,
     0x1.842c602458d56p-71, 0x1.39c3fddc94e7ap-545, 0x1.f259be0164473p-663,
     0x1.90b5f74127c42p-447, 0.0, 0x1.881a796cfe15ep-340, 0x1.9721921ea50f3p-197, 0.0,
     0.0, 0x1.a7ce82be851cbp-518, 0x1.e405874f8a8d4p-960, 0x1.7ae1535ccfd8fp-631, 0.0,
     0x1.57f2edd81d8a8p-874, 0x1.8636eb05ca488p-467, 0.0, 0x1.8372b6fd768d3p-965,
     0x1.a8201f31844afp-137, 0.0, 0x1.cd74e8087b04dp-228, 0.0, 0.0,
     0x1.6eb74353ee08bp-735, 0x1.053fe500bee62p-526, 0x1.39e44818ad7bep-66, 0.0, 0.0,
     0x1.4474d707eda4bp-1018, 0.0, 0.0, 0x1.808ad184d929bp-1001, 0.0,
     0x1.714a23b09e352p-323, 0x1.cfc7b15251766p-422, 0x1.a3b428d6ce48fp-1000,
     0x1.2f3f1ce7f62c5p-153, 0x1.8e46e471fdabdp-374, 0.0, 0.0, 0x1.17cac2c09b456p-845,
     0x1.573b82dc9d616p-376, 0.0, 0.0, 0x1.90e5d7b9eabf8p-923, 0x1.8bc9ad8be7516p-548,
     0x1.090c98a5ade57p-796, 0.0, 0.0, 0x1.aac1c38caa93p-153, 0.0,
     0x1.8c076c83d751dp-874, 0x1.8261b7a928fd1p-685, 0x1.116ff038078fep-193,
     0x1.8b9f5cc95e69p-1019, 0.0, 0.0, 0x1.12b01e6b25561p-142, 0.0,
     0x1.62015ebd355bap-528, 0.0, 0x1.a05b1e2fa95a7p-207, 0x1.84cc2703c9c1ap-70, 0.0,
     0x1.2d158acf8eb97p-490, 0.0, 0x1.febbddf51d8bcp-410, 0x1.6b3f421fabc93p-668, 0.0,
     0.0, 0x1.e103761fe9c27p-363, 0.0, 0.0, 0.0, 0x1.7734c8a3e7ad1p-6, 0.0, 0.0,
     0x1.7993e804f30f8p-943, 0.0, 0.0, 0x1.31f03ba3d2422p-601, 0x1.c1279b6794a31p-428,
     0x1.48acf6fc2b86p-760, 0.0, 0x1.05798ab6be276p-193, 0.0, 0x1.d070622b22497p-934,
     0x1.b4bfba47b20f6p-731, 0x1.ca8e27928eafbp-394, 0.0, 0.0, 0.0,
     0x1.ba094b24cad8ap-739, 0.0, 0x1.e9dd1cae5cb8ap-200, 0x1.a9a8704f859c9p-769, 0.0,
     0.0, 0x1.b05324e704a62p-673, 0.0, 0.0, 0x1.2085a9fdbd558p-461, 0.0, 0.0,
     0x1.31619ffcfa3dfp-109, 0x1.3ab00031d7cc7p-405, 0.0, 0.0, 0x1.82fb51249f5e3p-214,
     0.0, 0.0, 0.0, 0x1.84fbc3a2522e8p-457, 0x1.49de4aff90789p-123, 0.0,
     0x1.f4c74e888b3dbp-559, 0.0, 0x1.9670c0df24092p-630, 0x1.20a5fc8afb8ccp-25,
     0x1.fe0458ae9dc36p-924, 0x1.8ceba33ae2d4p-678, 0.0, 0x1.35eaf0850cda8p-28, 0.0,
     0x1.a71b9193a9f45p-296, 0x1.b2ec69022b67dp-682, 0x1.d2c21c92793fbp-655, 0.0, 0.0,
     0x1.f641d1679399ap-652, 0x1.a851441f0bebcp-979, 0x1.e6dfde2bad856p-205,
     0x1.6081c316ac789p-26, 0.0, 0x1.a8da0af6421d3p-248, 0x1.be5ef0a4f09f5p-871, 0.0,
     0.0, 0x1.4ab6075eda907p-502, 0x1.706671771c66ep-644, 0x1.71eaef0cc23c5p-598, 0.0,
     0x1.31bb8e944c286p-121, 0x1.30bd3fcaf8f3ep-12, 0x1.f09b313270fdbp-144,
     0x1.e498672eceb9ep-240, 0.0, 0.0, 0.0, 0x1.2386474f6927dp-649, 0.0, 0.0,
     0x1.a51c64b58c7fbp-272, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b09893c7a25d8p-116,
     0x1.e14f847fcdb16p-833, 0.0, 0x1.6c32021ab01e2p-809, 0x1.4d11d4d7fcf95p-263, 0.0,
     0x1.aa5575138626p-43, 0x1.6e2e6a4bb3802p-849, 0.0, 0x1.a742bf6ab4fb1p-641,
     0x1.531f0c5128f27p-171, 0.0, 0x1.6cd4e593b40fdp-213, 0x1.5ea3640daa54cp-690,
     0x1.315c6f3d84cd6p-658, 0x1.e8315fac1d3e9p-945, 0x1.594ca0f2810bp-67, 0.0, 0x1p0,
     0x1.e96556c4a7aa7p-652, 0x1.3c4860ccd28ecp-139, 0.0, 0x1.b82f26159adbep-242,
     0x1.d48d3027c649fp-599, 0x1.26c05180a8f91p-821, 0.0, 0.0, 0x1.6eb32d7a1a9afp-290,
     0.0, 0x1.37bb1100d1034p-288, 0x1.5e9c67b8bb09p-719, 0x1.abfab1ea80937p-895, 0.0,
     0x1.28133e7f60ee3p-199, 0x1.7223a52e66b8bp-675, 0x1.c1dccc89f9601p-876,
     0x1.427c267de4f8cp-188, 0.0, 0.0, 0.0, 0x1.29344efd53a2p-283, 0.0,
     0x1.49fe42b42a2ebp-442, 0x1.aac6a370bda19p-595, 0.0, 0.0, 0x1.13a81d5a2d90bp-990,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43eaf2d808f82p-937, 0x1.7baab9e907cbap-437,
     0x1.90cefbb7483c5p-316, 0x1.14874571df6a8p-255, 0x1.84d245cb241bep-571,
     0x1.5692919648751p-18, 0x1.258c6460b9896p-254, 0x1.04b5b68b908b8p-1012,
     0x1.1af44aa00b583p-930, 0x1.7f2f3feddc232p-849, 0.0, 0.0, 0x1.d3b84abd45c48p-689,
     0.0, 0x1.9b07967079295p-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9b25830ea3cc8p-300,
     0.0, 0.0, 0.0, 0x1.34605eb99868ap-1007, 0x1.649eda470bb0ap-177,
     0x1.f0d9e8eb840f6p-340, 0.0, 0x1.8641e62a24866p-406, 0x1.d9ee55ded9678p-107, 0.0,
     0x1.61ae977a41e3fp-679, 0x1.bad31f0b6133ep-500, 0x1.9ba683b85dcd6p-437, 0.0,
     0x1.ee8a538e096fap-909, 0.0, 0.0, 0x1.ae6b737840072p-440,
     0x1.80aa557b9da7fp-1013, 0.0, 0x1.6887f80f2ff37p-782, 0x1.cb1e46e18d164p-243,
     0x1.e2e37e22e2f15p-358, 0x1.f4bc4881d4448p-71, 0x1.f13523524ac9p-786, 0.0, 0.0,
     0x1.b8187e119b57ep-250, 0x1.b18fb529217dcp-936, 0.0, 0.0, 0.0, 0.0,
     0x1.59df803c0b30cp-892, 0x1.94361b042b3a5p-275, 0x1.4ddd208b24a68p-8, 0.0,
     0x1.35268c934a0b5p-735, 0.0, 0x1.05e30cfd9559ep-646, 0.0, 0x1.850367c61eafbp-655,
     0.0, 0.0, 0.0, 0x1.dd43875e58503p-844, 0.0, 0x1.4baea6d25923bp-741,
     0x1.8de08f70ea5e5p-838, 0.0, 0.0, 0x1.814f98a4e80fep-41, 0.0,
     0x1.fa14e9958e8b3p-621, 0.0, 0x1.4dd13ff230d39p-718, 0x1.81038117ff998p-730, 0.0,
     0.0, 0x1.1aadd1b5e1dd4p-943, 0.0, 0x1.e05fee8aef49fp-352, 0.0,
     0x1.9fe2744a244e9p-1000, 0x1.b510f3ef9983p-646, 0.0, 0.0, 0.0,
     0x1.1e9b0e47b9621p-559, 0.0, 0.0, 0.0, 0.0, 0x1.d0ad06aef26e6p-716, 0.0, 0.0,
     0.0, 0x1.423f29961c145p-180, 0x1.32113efa5cfcdp-901, 0x1.928287c0b1608p-727,
     0x1.4a9912de43333p-710, 0x1.2fb4fda603622p-441, 0x1.a349df16035ecp-170,
     0x1.7e642e9ae7bd3p-50, 0.0, 0.0, 0.0, 0x1.e37813c4ed998p-345, 0.0, 0.0,
     0x1.67367a3be0873p-522, 0x1.f8c63f69db6d3p-774, 0x1.09aecd1fd89c9p-680, 0.0,
     0x1.ba0410e0a4c1ap-196, 0.0, 0.0, 0x1.1613c6f336d18p-889, 0.0,
     0x1.22a1923b14979p-720, 0.0, 0.0, 0.0, 0x1.3ed8f2dd0b7f5p-1003,
     0x1.37ea457eb7998p-806, 0x1.b61d0b7eb82b2p-333, 0.0, 0x1.2d81a9443e904p-825, 0.0,
     0x1.c0011178561dap-507, 0x1.ac98bba94efc3p-896, 0x1.cea218983eeebp-610,
     0x1.94a37ec06a99ep-568, 0.0, 0x1.92c6293992df1p-836, 0x1.255252b938847p-130,
     0x1.8aa39f14be7acp-724, 0.0, 0x1.25f27d9a70cddp-615, 0x1.8462292fafaa9p-159, 0.0,
     0.0, 0.0, 0x1.9b556d915eaf2p-211, 0.0, 0x1.49a0d5128eb79p-761, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bb6b7c746346ap-953, 0x1.375fc68f814b7p-363,
     0x1.4134f636a157cp-411, 0.0, 0x1.de22a98c6caf1p-298, 0x1.eba456b97a0fdp-292, 0.0,
     0x1.12c744fb5f4dcp-395, 0x1.dd567525af08dp-811, 0.0, 0x1.ed6bfecdfdecbp-456,
     0x1.eb49144e2ad68p-866, 0x1.0bcb9d8a1904dp-147, 0x1.f1e3cfd1cc46fp-269,
     0x1.ba39fe8efd6p-646, 0.0, 0x1.258bc159039c7p-578, 0x1.48f762e079b6p-724,
     0x1.78c4eef98313dp-824, 0x1.c16a5c6266b43p-256, 0x1.0dbcf9a74d1ccp-841, 0.0, 0.0,
     0x1.ad026db5cc966p-942, 0x1.540cfd93fa802p-153, 0x1.f6bd90580a7bp-916,
     0x1.15a9a10f01a04p-123, 0.0, 0.0, 0.0, 0x1.0f0f3d21723edp-345, 0.0,
     0x1.184e206badb04p-683, 0x1.4cb65a3fed29dp-131, 0x1.b6a04a768193fp-367, 0.0, 0.0,
     0x1.b4a3ca377ce3dp-116, 0.0, 0.0, 0x1.70f1cb92f2aa8p-502, 0x1.1708333d12227p-789,
     0x1.1cee258775462p-924, 0x1.cf92eafc718bp-256, 0.0, 0x1.60cc64d9117f5p-96,
     0x1.3ccae3971374cp-166, 0x1.1439aaa44661bp-276, 0.0, 0.0,
     0x1.c20b3c5ec5fbcp-1014, 0.0, 0.0, 0x1.39fd02a23ca7p-227, 0.0,
     0x1.ca34551a9b397p-594, 0.0, 0.0, 0.0, 0x1.6d0b71ae973c8p-795,
     0x1.c10726e4631fap-833, 0.0, 0x1.f66337601555ap-481, 0x1.038850ab22b36p-82, 0.0,
     0x1.f80b5b1b1d28cp-450, 0x1.d3f78c530b355p-266, 0x1.a19c455003ff5p-359,
     0x1.47ef107353091p-11, 0x1.a582aa3a3792ep-743, 0x1.7677f72fc023ep-251, 0.0,
     0x1.1b59f1ebe154cp-28, 0x1.137a0ad8155bcp-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bcc791eb16cep-329, 0x1.9ca80a2d42d17p-71, 0x1.e084ad4fd6011p-220, 0.0,
     0x1.2317ab640a862p-336, 0x1.b3171b52c9485p-410, 0.0, 0.0, 0x1.53681a958c62cp-479,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.75c5b021e0ec4p-45, 0x1.5b56930b34109p-640,
     0x1.0b83a88f8c576p-912, 0x1.2d041621c26acp-132, 0.0, 0.0, 0.0,
     0x1.6a5ae6b1ab721p-268, 0.0, 0.0, 0.0, 0x1.792a171d544dcp-193,
     0x1.27467f06e69e8p-133, 0x1.88ac52785e7f4p-111, 0.0, 0x1.d164327f679d5p-77, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.487c42937a33ap-801, 0.0, 0.0, 0.0,
     0x1.7635c0a43da66p-453, 0.0, 0x1.747bfb159af8ap-798, 0x1.40527b45f6f23p-814,
     0x1.3e6732c40eb2cp-898, 0x1.73be1c65a0e71p-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65a5149391a15p-769, 0.0, 0.0, 0x1.c7fe02243284bp-494, 0.0, 0.0, 0.0, 0.0,
     0x1.29272a18e64b5p-550, 0.0, 0x1.1d3651e9a4f43p-706, 0.0, 0x1.b280ef2bdbd9fp-506,
     0x1.ea8f40ac5c04dp-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0c7b466e5011p-561, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5da6f4aca3619p-37, 0x1.0b2d8dd920f35p-132,
     0x1.8b50617e5edep-575, 0x1.7770c874a3b33p-671, 0.0, 0x1.3712cd9353b2fp-426, 0.0,
     0.0, 0x1.ce4935358ec99p-504, 0x1.b6e03e0cd0972p-715, 0x1.62a6b1d09daa5p-106, 0.0,
     0x1.ab2969f997d3p-368, 0.0, 0x1.8a337e2682052p-942, 0.0, 0x1.ed1a263a4f63cp-981,
     0.0, 0.0, 0x1.48354eecba1f7p-560, 0x1.c2148f8b9bc11p-798, 0.0,
     0x1.e9884935d0c4dp-777, 0x1.52b0e64047c4p-938, 0x1.c5afd29bbcd85p-794, 0.0,
     0x1.17773df7b5e0fp-610, 0x1.03ee2b198b671p-794, 0x1.07279265f63d7p-555, 0.0, 0.0,
     0x1.8d5b5c21e2828p-553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25c2a698322cep-624,
     0x1.1a39548eda2bfp-562, 0x1.fb33e91cfea3fp-537, 0.0, 0x1.66ab659b55fc4p-702,
     0x1.f61183fe2d8e6p-443, 0.0, 0.0, 0.0, 0x1.75c01838f4905p-640, 0.0,
     0x1.c5a9333ea4dd1p-394, 0x1.4f2ccd8cc907dp-672, 0.0, 0x1.4028b8bc7e90dp-886,
     0x1.90adb7b8eadedp-674, 0.0, 0x1.cc3e9e6b6c91ap-344, 0x1.681308372e858p-381,
     0x1.dbf9b0633d3dfp-752, 0.0, 0.0, 0.0, 0x1.b826d32d7b8c2p-909, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a25c9fe00cc9dp-560, 0.0, 0.0,
     0x1.dce83c41332e6p-79, 0x1.0595cc2451fadp-439, 0x1.95743427ca4c3p-728,
     0x1.ba3352a67813fp-24, 0.0, 0.0, 0x1.c319e7f95737dp-690, 0.0, 0.0, 0.0, 0.0,
     0x1.8a6cec4f848c2p-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.23d2e24ed66b3p-733, 0.0,
     0.0, 0x1.4e5dbb2f1037ap-1014, 0x1.5072602399e52p-113, 0.0, 0.0, 0.0,
     0x1.3f965d145f7ebp-13, 0.0, 0.0, 0.0, 0x1.38f6afc876f25p-738,
     0x1.048946ef17adp-888, 0x1.3ba067a62406ap-140, 0.0, 0x1.c71f42755a0d7p-180, 0.0,
     0.0, 0x1.ab738948b4a71p-255, 0x1.08bfef2fd22dep-661, 0.0, 0x1.8d0ea2a53ab37p-335,
     0x1.4dd4bd1d4d3e1p-932, 0.0, 0x1.1cbea1d603eep-492, 0x1.1449004f92bd8p-19, 0.0,
     0x1.4c091c9bcac5p-670, 0x1.64fdccd5e0af8p-188, 0.0, 0x1.7ffffef2bad15p-162,
     0x1.4ddf9f2e3d456p-594, 0.0, 0.0, 0x1.be43050941cefp-464, 0.0, 0.0, 0.0, 0.0,
     0x1.83b874539116ep-381, 0.0, 0.0, 0.0, 0.0, 0x1.4b8c944e47392p-988,
     0x1.9f11cc98a0b6p-675, 0.0, 0.0, 0.0, 0x1.382e58f68ce94p-831,
     0x1.3f75184056595p-36, 0.0, 0x1.73d9db774fc0cp-740, 0.0, 0.0, 0.0, 0.0,
     0x1.ed01237910bdep-626, 0x1.e052ad13a71fep-684, 0x1.d6bb73f3a5aebp-14, 0.0, 0.0,
     0x1.43e5c22cce251p-806, 0.0, 0.0, 0x1.9376df1bdd69bp-123, 0.0, 0.0, 0.0,
     0x1.f0291a2b5d4d7p-686, 0x1.57161be46fea6p-133, 0.0, 0.0, 0x1.71f9167f7968ep-990,
     0x1.845e8677c7172p-443, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.70bbfb21c76e8p-890,
     0.0, 0x1.1e355abf4ef48p-72, 0x1.e6392a3593b0ap-543, 0.0, 0.0, 0.0, 0.0,
     0x1.1269b63ec1d36p-811, 0x1.77adc002f7266p-860, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1550887c53f2p-479, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.198d7c8f07f12p-29, 0.0,
     0x1.476c6e0af0a26p-498, 0x1.21ce537f8684bp-106, 0x1.84783b95e51c9p-63, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.420fac95c7fcep-318, 0x1.413249d818cf8p-161,
     0x1.be032738304bep-192, 0x1.da486f942fd5dp-849, 0.0, 0x1.a831781b63ca5p-675,
     0x1.62a4577d8ee5ep-289, 0x1.a5017f415fb2cp-809, 0.0, 0x1.df92d60a58632p-51,
     0x1.84688b02dfb27p-61, 0.0, 0.0, 0.0, 0x1.cff9a7d1a7b14p-941,
     0x1.a499b9dd081a2p-562, 0.0, 0.0, 0.0, 0x1.75145e336c19dp-379, 0.0, 0.0,
     0x1.988bc29c04f98p-316, 0.0, 0x1.ba940c7eb4792p-853, 0.0, 0.0, 0.0, 0.0,
     0x1.dcf6ba2d18b06p-703, 0x1.d53834c720a6fp-414, 0x1.a0815b3b4507dp-350, 0.0, 0.0,
     0x1.88494424c9b7cp-787, 0.0, 0.0, 0.0, 0x1.9721680bf8859p-304,
     0x1.a9f0d69d36629p-522, 0.0, 0x1.0c47c4e747601p-342, 0.0, 0x1.e5ac5df9a2427p-71,
     0x1.7850536e90dbep-123, 0.0, 0x1.8dfad70dd1594p-863, 0x1.83398c8a34fb5p-183, 0.0,
     0x1.2aa005bb09ffbp-323, 0.0, 0x1.a624a612ed523p-849, 0x1.ebc2cabdba8bbp-459,
     0x1.4868c6d472038p-5, 0.0, 0.0, 0x1.7f5fc75d9d343p-526, 0x1.63d2eca95f8b2p-467,
     0x1.01555248bb55dp-447, 0x1.e6f57b3b677f1p-76, 0x1.8ff662a01cd6cp-827, 0.0, 0.0,
     0.0, 0.0, 0x1.5bef4a695dc84p-57, 0x1.a0cef79de3cbp-430, 0.0,
     0x1.7c348ab7a00b1p-714, 0x1.2613116a94f73p-404, 0x1.8b0d56d29009bp-135,
     0x1.2d5a0ea29edaep-299, 0x1.2313bc5240305p-324, 0x1.7a608f9bbbcf1p-154, 0.0, 0.0,
     0x1.6ddee294d29bfp-236, 0.0, 0.0, 0x1.80cd0e81b3087p-197, 0x1.e7b1ba112909ap-487,
     0x1.ebe8f1f07bb61p-699, 0x1.38df04fc02329p-124, 0x1.f64e4490a26dep-152,
     0x1.4008a2934fa5fp-187, 0.0, 0x1.f933dfce4e7b1p-917, 0.0, 0x1.e6c5d498b9736p-886,
     0x1.c420707b92fc7p-808, 0.0, 0.0, 0.0, 0x1.4a3d547dd9ed6p-966,
     0x1.cbf79e2a904f8p-290, 0x1.9351dc6c664b9p-576, 0.0, 0.0, 0x1.7e8b817c3e99cp-780,
     0x1.581a14c2994f3p-892, 0x1.88b7e36b16048p-29, 0.0, 0x1.51054c602a1c1p-330, 0.0,
     0.0, 0.0, 0x1.f7e1b70a9f9c9p-358, 0x1.1c516994e2681p-302, 0.0,
     0x1.2e689d246a2bcp-883, 0.0, 0x1.3c22655758bd1p-391, 0.0, 0x1.2ca854ba35245p-790,
     0.0, 0.0, 0x1.2ff469120da8bp-154, 0.0, 0.0, 0x1.dd897ddbfd70ap-533,
     0x1.d1a342a499621p-671, 0x1.57cc295db9b63p-255, 0x1.0b7593da3ce0fp-918, 0.0,
     0x1.9b82b29e03297p-209, 0.0, 0x1.7339a030fff02p-373, 0x1.c72844dd1d84ap-256,
     0x1.b48f066a8aacbp-380, 0x1.42f27d2a04cb7p-301, 0x1.e6bdc930d53f6p-478, 0.0, 0.0,
     0x1.9923717d6a6f9p-732, 0.0, 0x1.c6603c3f53804p-39, 0x1.689d0d119eb8cp-609, 0.0,
     0.0, 0x1.9cc3b5f49f142p-951, 0.0, 0x1.2224e75baaec6p-294, 0x1.d923c78aa3898p-874,
     0.0, 0.0, 0x1.c3e74c390584ep-679, 0x1.2cd4f4e59e79ap-384, 0.0, 0.0,
     0x1.fdd3d001655e9p-518, 0.0, 0x1.bb81cce93d9d5p-944, 0x1.6f001e85b68a5p-134,
     0x1.9bf2f25148fp-566, 0.0, 0.0, 0x1.3ab324a84ea0ep-657, 0.0,
     0x1.add302859c624p-12, 0x1.df3d8dd7be3e1p-608, 0.0, 0x1.02de581d77817p-516,
     0x1.367dc080c74e1p-520, 0.0, 0x1.31ac0fba7033bp-827, 0x1.7bcf6340277dbp-36, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fdad68338ce88p-528, 0x1.8756638268973p-840, 0.0, 0.0,
     0x1.26cde39f2fe93p-326, 0x1.4f54d8cbb647fp-142, 0.0, 0.0, 0x1.e752a0a34f18dp-610,
     0x1.d3a3119fd6e5bp-924, 0x1.52a5ced3d94cdp-941, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.12da3a251aa8cp-211, 0.0, 0x1.4a136425c01ddp-690, 0x1.c57d805b1351bp-912,
     0x1.1cbb5af485133p-858, 0.0, 0.0, 0.0, 0x1.ed2e3225113b7p-329, 0.0, 0.0,
     0x1.3b122a92f840bp-25, 0x1.11ec52d2d0d25p-584, 0x1.c15273fcf63a5p-28, 0.0,
     0x1.38ae2619e5a4bp-900, 0.0, 0.0, 0x1.72435d63d3ef2p-441, 0.0,
     0x1.d006a7b503775p-1000, 0x1.4a33e55c35fb7p-223, 0x1.621e568373362p-1015, 0.0,
     0.0, 0x1.5c2b45b57c70bp-869, 0x1.41e82055c902cp-613, 0x1.658a81b79ff95p-180, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7a72f513f7c7bp-231, 0.0, 0x1.70fb53fa10176p-663,
     0x1.25495d550ff6bp-112, 0x1.9c0c30085d8b8p-15, 0.0, 0x1.a8f2a8da5db48p-705,
     0x1.a92e6bcb68c71p-221
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
            tmp1 = Sleef_acosd2_u10avx2128(tmp0);
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
    printf("Sleef_acosd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acosd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
