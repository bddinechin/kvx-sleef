/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceild1_purecfma.c --function Sleef_ceild1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.6e7da42af7425p-6, 0x1.224df2dbe1df5p-797, 0x1.cf6c26cfc4a9bp-247,
     0x1.673039660334fp-145, 0.0, 0.0, 0x1.eb064a71476e9p-654, 0.0,
     0x1.165047289b11p-160, 0.0, 0.0, 0x1.f1b02946a93a1p-714, 0x1.45086b1f10f3ap-510,
     0x1.9e75d49b314bep-869, 0x1.633de354d1e42p-780, 0.0, 0.0, 0.0,
     0x1.1a8475a1d06a3p-38, 0x1.9bf6716c6ec9p-232, 0x1.672460dd13a93p-792, 0.0,
     0x1.3f6edfea99c0fp-661, 0x1.eafbf9a974a02p-325, 0x1.504dc39ddb7e4p-436,
     0x1.1d7bfe574388ap-127, 0x1.26a4d66f2a10dp-785, 0.0, 0.0, 0x1.9b1284602e406p-303,
     0x1.d4ba391ca1c4ap-947, 0.0, 0.0, 0.0, 0x1.aa564b8b554d1p-478, 0.0,
     0x1.3676264605a64p-530, 0x1.0f0327d7440a8p-460, 0.0, 0x1.5461257513cb6p-895,
     0x1.535e18fe921d3p-140, 0x1.bc3bb48ca212cp-619, 0.0, 0.0, 0x1.de2725d470009p-650,
     0.0, 0.0, 0x1.51c66c8af2f66p-3, 0.0, 0x1.65855344d8fbp-969, 0.0, 0.0,
     0x1.4f3b823d7346bp-916, 0x1.1f90e25d12ee4p-356, 0x1.55937a2b6c592p-930,
     0x1.67ffdb886eec4p-589, 0.0, 0.0, 0x1.814ff77399df6p-660, 0.0,
     0x1.76785504beae1p-317, 0x1.9bcb958ac7c5bp-138, 0.0, 0.0, 0x1.bc97e4a42368ap-727,
     0.0, 0x1.c79b48cc572dep-332, 0x1.7e18e4c4c22eap-821, 0x1.65ec513a9685ep-508,
     0x1.f3978ef70acbp-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d39efefe146cp-633,
     0x1.d7ea41e1c0fcbp-612, 0.0, 0x1.24e73bb0a7ef3p-558, 0.0, 0x1.fb6fe375b6d1fp-304,
     0.0, 0x1.6dbdbea1835acp-567, 0x1.4aa6990f79b2p-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2f9d41889502dp-213, 0x1.d4841e1f85e9ap-820, 0x1.e7ad45063c38bp-341,
     0.0, 0.0, 0.0, 0.0, 0x1.273a8015df7b6p-598, 0x1.335ef854271fdp-543,
     0x1.fd104c3966a6ap-960, 0.0, 0x1.b89b1535bcf26p-1013, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8c11e05c4bd7ep-259, 0.0, 0x1.0bf25e8608d7cp-998,
     0x1.21407a500dd47p-98, 0.0, 0.0, 0x1.3a20b5257de06p-422, 0x1.2f9af34749e0ep-730,
     0x1.5e522c4384f9p-961, 0.0, 0.0, 0x1.ecdd39b2dff7p-430, 0x1.f16050415c937p-952,
     0x1.c09492ef8be92p-790, 0.0, 0.0, 0x1.58bc336bf8403p-423, 0x1.9bb39e217f9b4p-375,
     0x1.cecd2aa640b53p-17, 0.0, 0x1.c53b40b19e685p-521, 0x1.50faaf9ff53bap-20,
     0x1.051050080c444p-127, 0.0, 0.0, 0x1.3592559d63dbp-876, 0x1.8208f04fcdea2p-864,
     0x1.9d45d9215b152p-158, 0.0, 0.0, 0x1.1df08b0c8b2d3p-928, 0.0,
     0x1.6efc557a73794p-664, 0x1.8c42a2e3fdec6p-379, 0x1.f174af8991788p-175,
     0x1.2988d64b62e8dp-547, 0x1.d44d18aaf48c2p-187, 0x1.abe17207fab23p-80,
     0x1.8faa0e7ee9331p-836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1819c479cd16cp-498, 0.0, 0.0, 0.0, 0.0, 0x1.0230f28593c88p-278, 0.0, 0.0,
     0.0, 0.0, 0x1.f48dd4ca1977fp-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.908baa28ac24fp-744, 0.0, 0x1.18e4c35164375p-954, 0.0, 0.0, 0.0, 0.0,
     0x1.c186ba7e8d721p-484, 0.0, 0.0, 0x1.78c9c68e670ecp-728, 0.0,
     0x1.619321b601376p-922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca59f04214c88p-379, 0.0, 0x1.541d2cec36d85p-549, 0.0, 0x1.e4bd213081c28p-819,
     0.0, 0.0, 0.0, 0.0, 0x1.e24dc94241dadp-555, 0.0, 0x1.be1af6632f4fep-267, 0.0,
     0x1.9666e41a861c8p-835, 0.0, 0.0, 0.0, 0.0, 0x1.98717ca2d1fc5p-191,
     0x1.c629a5cbfb4edp-575, 0.0, 0x1.648e42d3315b9p-259, 0x1.46b3e18cdf007p-788, 0.0,
     0x1.f4e48d327b4dap-219, 0x1.f0b7da74e026bp-437, 0.0, 0x1.9db97f562eed7p-531,
     0x1.e7fa8b33b1042p-498, 0x1.59d7b0e2d9803p-982, 0.0, 0.0, 0x1.fc42022899d4dp-396,
     0.0, 0.0, 0.0, 0.0, 0x1.acf427215aa5ap-586, 0x1.47bcf42d1f48fp-77,
     0x1.8707956c8a4b9p-347, 0x1.146be3181b3a3p-640, 0.0, 0x1.64f901121e229p-266, 0.0,
     0x1.ea85e7e505f6ap-538, 0.0, 0x1.f137988e02a08p-21, 0x1.891f24174869dp-654, 0.0,
     0x1.3afe029f158aap-673, 0x1.6f6a068bab705p-371, 0.0, 0x1.e1d90b424d559p-909,
     0x1.f99c4976963edp-150, 0.0, 0.0, 0.0, 0x1.f54bafe55222ep-929,
     0x1.85947b8b1527bp-362, 0.0, 0x1.28a388fd77463p-326, 0.0, 0.0,
     0x1.4a93253a8e9afp-420, 0x1.42f936c7b3342p-205, 0.0, 0.0, 0.0,
     0x1.a03f6e3e1f725p-971, 0.0, 0.0, 0x1.cab967e7dc0a5p-424, 0.0,
     0x1.4202e82168da9p-863, 0.0, 0.0, 0.0, 0x1.914e38cc05f63p-968,
     0x1.c6a62c797f6ddp-21, 0.0, 0.0, 0.0, 0x1.0449bf728e71bp-785, 0.0, 0.0,
     0x1.23b3563569901p-398, 0x1.bd487f536c994p-491, 0x1.d08db2cf09816p-782, 0.0, 0.0,
     0.0, 0x1.2a9597fb4f28ep-162, 0.0, 0.0, 0.0, 0x1.516f0bfb8a207p-291, 0.0, 0.0,
     0.0, 0x1.5062e7ab09c66p-592, 0.0, 0.0, 0.0, 0x1.c43a8a3d03b34p-822,
     0x1.643038a30007p-28, 0x1.cf7c7fa8b5278p-12, 0x1.ef1a4fe2210fap-778,
     0x1.daff01c2c3493p-174, 0x1.4af2f667a5313p-367, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a75d7a6bbc67dp-444, 0.0, 0.0, 0x1.dccd0c3d666dp-730, 0.0, 0.0,
     0x1.d9eee5b7df92fp-846, 0x1.73fca76e01b0cp-592, 0x1.c9539892b5b59p-702, 0.0,
     0x1.92dfa94920047p-512, 0.0, 0x1.faa313b70c502p-54, 0x1.78fe0151c763dp-553,
     0x1.30b34a6a01fep-443, 0.0, 0x1.4472835b903aep-383, 0.0, 0x1.2e6428a4b4ae1p-765,
     0x1.b3257442cea01p-782, 0x1.a1b7a546bfdabp-154, 0x1.485ca53d1d43ap-118, 0.0, 0.0,
     0.0, 0x1.fc0df2c61ae58p-209, 0x1.359bc5917f42cp-849, 0.0, 0x1.26a15c408e71ep-641,
     0.0, 0x1.f24cfba591433p-542, 0.0, 0x1.95025d686981ap-21, 0x1.cc264c18d928p-584,
     0.0, 0x1.48f0094c4ed99p-321, 0x1.966abfb66b083p-538, 0x1.31c95115fd4b6p-239, 0.0,
     0.0, 0.0, 0.0, 0x1.7a91aba6b255cp-285, 0.0, 0x1.3a50de3fb0665p-513,
     0x1.d7a2137307a19p-572, 0x1.49bf488c56e72p-86, 0x1.4e60a96cb2e08p-811, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a1400030be91p-879, 0.0, 0x1.9c8f7267f907p-90, 0.0, 0.0, 0.0,
     0x1.139e41da72b54p-184, 0.0, 0.0, 0x1.087f2f28c667ep-420, 0x1.5bc4047396ee7p-176,
     0.0, 0x1.10e0c3301b05ep-345, 0.0, 0.0, 0x1.f2bf115af4e2p-687,
     0x1.359b3d8c6743p-1009, 0.0, 0x1.18f8184fc6b26p-758, 0x1.76166000ddb5fp-813,
     0x1.6ff66fae53aa2p-61, 0.0, 0.0, 0x1.839bba3be0677p-877, 0.0, 0.0,
     0x1.c52dbecf2c525p-846, 0.0, 0x1.b055c331e57c6p-637, 0.0, 0.0,
     0x1.28cf38d242f6p-785, 0.0, 0x1.a832a9597a987p-650, 0x1.5163b9bb43ca6p-407, 0.0,
     0.0, 0x1.60e19a945da5ap-38, 0.0, 0.0, 0.0, 0x1.4f18caf18da47p-224,
     0x1.d83fead792472p-401, 0.0, 0x1.fcaee7a022bdbp-410, 0.0, 0x1.ab04747484384p-135,
     0x1.9bc280b4a646ap-684, 0.0, 0.0, 0.0, 0x1.5b828134d473fp-320,
     0x1.0863753b8bb46p-680, 0x1.7afbf2122921dp-610, 0x1.b53bbc9fafbb6p-318,
     0x1.208f31633f8f3p-263, 0.0, 0.0, 0.0, 0.0, 0x1.8c49a5acab298p-62,
     0x1.27d2fb53720a2p-370, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.767092123f3ep-558, 0.0,
     0.0, 0x1.dc16db54d4134p-723, 0x1.205dbabb48b67p-405, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.38a598fc42064p-996, 0x1.f9d208ba2d595p-742, 0.0, 0.0, 0.0,
     0x1.a328761f7bebdp-138, 0x1.a0bd2f6850567p-223, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8a96b86df56dbp-798, 0.0, 0.0, 0x1.9aeb72c7a0cf4p-61,
     0x1.5307672c830b1p-967, 0x1.60570c4c72cdp-248, 0.0, 0x1.31ec995f8ca93p-718,
     0x1.82f6682537704p-697, 0x1.c6d3c1ee167b3p-722, 0x1.7aeddd8ff900ep-618,
     0x1.f873feaf79567p-389, 0.0, 0x1.c5e38e6703e4p-48, 0x1.39a13137bad78p-753,
     0x1.c960474ac6bf8p-397, 0x1.dd1c8bb8450d3p-235, 0x1.ee47943d0f488p-269,
     0x1.40737b514268bp-323, 0.0, 0x1.0d2d963b6f65p-613, 0.0, 0.0,
     0x1.ae4c566dec527p-477, 0x1.fe38567664ca4p-691, 0x1.684c76852066p-542,
     0x1.e93d5931930b2p-915, 0x1.e3639a48157a8p-61, 0x1.79d6c61d2f7dp-1016,
     0x1.eb2d495e8d995p-395, 0.0, 0x1.553b5cc90a131p-613, 0x1.41260989d6247p-369,
     0x1.f3f8e7251886bp-942, 0x1.0f1419d57c06cp-812, 0.0, 0x1.4044c25eae633p-777,
     0x1.60c2de3468d8bp-927, 0x1.d3916b8263cebp-135, 0x1.76bdaabf79e84p-428, 0.0, 0.0,
     0x1.631c8144cdbdfp-859, 0x1.cd4152a594134p-33, 0.0, 0x1.e5b627d0cb2b6p-91, 0.0,
     0x1.5ab864e240531p-412, 0x1.4fc41f4a007b5p-279, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a3cdcc978bfdep-677, 0.0, 0.0, 0x1.8dda5351f2a5ap-616, 0x1.26ecfaf63ed4dp-122,
     0.0, 0.0, 0x1.1631d68a1a9a2p-413, 0.0, 0.0, 0.0, 0x1.874cb7bc3de87p-103,
     0x1.cc0da37bb4c5fp-390, 0x1.795db431e4bcp-711, 0.0, 0x1.6dd58f18b4257p-941,
     0x1.c6331136f2b76p-74, 0.0, 0x1.84aee689e9718p-189, 0x1.23740ce62259dp-220,
     0x1.bac31976382e4p-771, 0x1.3ff493c71c4dfp-945, 0x1.23604827f2302p-868, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.452c21f6e62ep-767, 0x1.407fc2150cfb3p-540, 0.0,
     0x1.4f9c5fa63d499p-615, 0x1.2db4eb1e9270fp-272, 0.0, 0x1.e0df2347df5b2p-757,
     0x1.913d9327b46cp-960, 0x1.8e3e29c06645dp-152, 0.0, 0.0, 0x1.17a0592bcaa6cp-974,
     0.0, 0x1.9ea1590227e4bp-666, 0.0, 0.0, 0x1.0aa2a7fd3e86cp-129,
     0x1.861bba47c8472p-329, 0x1.fd405c95576a8p-246, 0.0, 0.0, 0.0,
     0x1.9d612df70f63fp-231, 0x1.8a0cfdc6e1a22p-931, 0x1.31ed0589a784p-573,
     0x1.52acd7bf2f5c2p-538, 0.0, 0x1.497c20a22a755p-725, 0.0, 0x1.4d61085904031p-578,
     0x1.eee35dbadbef5p-402, 0.0, 0x1.631d6390d0a88p-964, 0.0, 0x1.ba167ffcd15e8p-196,
     0x1.c9c0578c08912p-691, 0x1.f3fe0d3cebbap-154, 0.0, 0.0, 0x1.054e13b2c7698p-958,
     0x1.126a84f1e885dp-690, 0.0, 0.0, 0x1.864f9f1291f47p-831, 0.0,
     0x1.c85a12293cc6ap-629, 0x1.72cd947234584p-9, 0.0, 0.0, 0x1.3085b1526891bp-446,
     0.0, 0.0, 0x1.4cacd09e319c8p-235, 0.0, 0.0, 0.0, 0.0, 0x1.17baa66000c8cp-284,
     0.0, 0.0, 0.0, 0x1.5a472b942e335p-176, 0.0, 0x1.ad0564a50f4f8p-386,
     0x1.81dae8ce70564p-381, 0x1.126c432981f0bp-707, 0x1.39a7737ac9074p-879, 0.0,
     0x1.b1b27c92bee8cp-750, 0.0, 0x1.dd331102e624ap-53, 0x1.f3732cfa74772p-706,
     0x1.47d61aa9d14fep-48, 0x1.1358b71848d61p-584, 0.0, 0x1.b9c7d7e440d5fp-742, 0.0,
     0.0, 0x1.cfb325d520a5ap-67, 0x1.0ccac801f28e4p-167, 0x1.407f05126a9a6p-125,
     0x1.2a17efbc649dep-425, 0.0, 0x1.17e24f97f4ffcp-51, 0x1.7a9abaa751446p-148, 0.0,
     0.0, 0.0, 0x1.f9e42ba80690ap-663, 0x1.028e49a181c1bp-958, 0.0, 0.0, 0.0,
     0x1.b7a4b4a37e3fap-227, 0x1.bc9ec9119a1p-13, 0x1.3236dcfd7762fp-829,
     0x1.4cc733acbcc64p-231, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5bd71368d2b7ap-697,
     0x1.5275b56c510fep-351, 0x1.d6bb940cf7da6p-866, 0.0, 0.0, 0x1.afa135e1b74c2p-250,
     0x1.92a7e6621d46bp-19, 0x1.0e6b4ed94de61p-264, 0.0, 0.0, 0x1.026ff6980f452p-353,
     0.0, 0.0, 0.0, 0.0, 0x1.82a114653b8c9p-40, 0.0, 0x1.4e1fbdc1390a6p-140,
     0x1.b83ddea857797p-291, 0.0, 0.0, 0.0, 0x1.2e1fe92496313p-1001,
     0x1.09da4a5c8a1afp-397, 0x1.47771f2c0c6c4p-903, 0.0, 0x1.ecbefdce778p-919, 0.0,
     0.0, 0.0, 0x1.eef4fd0d3393p-134, 0x1.0be047864fc0cp-413, 0.0,
     0x1.b73bd7381b827p-193, 0x1.5f40e6765a2cap-720, 0.0, 0x1.5a6004a6f2e34p-657, 0.0,
     0x1.010638a641bap-782, 0.0, 0x1.7f456b8fd7e05p-945, 0.0, 0.0, 0.0,
     0x1.968bf404aeae1p-576, 0.0, 0x1.9b32f05bb9422p-169, 0x1.4d55cdd2325f5p-937, 0.0,
     0.0, 0.0, 0x1.51cc9451ba068p-156, 0x1.30a1a5a4f9f88p-310, 0x1.622b02bf4a2abp-427,
     0x1.29f53327bedc4p-594, 0.0, 0.0, 0.0, 0.0, 0x1.c1ee037a1bff8p-918, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e785e5d22cb95p-726, 0.0, 0.0,
     0x1.4142870ff6127p-616, 0.0, 0x1.fa5b35ceb24ccp-840, 0x1.04452bb3aa827p-519,
     0x1.fbd2c896ed59ep-760, 0.0, 0.0, 0.0, 0x1.e5d65780d336ap-242, 0.0, 0.0,
     0x1.255451f5ad72dp-428, 0.0, 0.0, 0x1.22095f4b88443p-778, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8479bac695a29p-209, 0x1.0ebf5ef525d33p-245, 0.0, 0.0,
     0x1.b3adaad01b9e8p-649, 0.0, 0.0, 0x1.32ec006e7f17ep-649, 0.0,
     0x1.d72800012b461p-564, 0x1.86fe62cc76a56p-385, 0.0, 0x1.21cee6e2e0311p-426,
     0x1.2bb6c9009e1p-344, 0.0, 0.0, 0x1.34bbe0146ed3ap-838, 0x1.4bc0107d42aa8p-356,
     0.0, 0x1.b072849c27cfbp-532, 0.0, 0.0, 0x1.4a351cd77bbe5p-429, 0.0, 0.0, 0.0,
     0x1.0721ea9f18735p-326, 0.0, 0.0, 0x1.b0f3dc6c5e42p-647, 0x1.ef8974724d135p-462,
     0.0, 0.0, 0x1.c0b7db0f2b432p-278, 0x1.d513323cc2c4ap-456, 0.0,
     0x1.a016e355b42cbp-425, 0x1.10cb96bcb9576p-910, 0.0, 0.0, 0x1.6e8dc91bd59c3p-880,
     0.0, 0.0, 0x1.cbe15e4e39b3cp-16, 0x1.22d169367cf8cp-989, 0x1.6909dfa5aed7bp-807,
     0.0, 0x1.960bb45a1f332p-432, 0.0, 0x1.6f2b21ac2ae4ep-992, 0x1.0c80380d54753p-39,
     0.0, 0x1.64f9a9b21a89ap-855, 0x1.e89fe1b424648p-293, 0x1.86a903e5f5ddfp-606,
     0x1.77e99b7c48c1cp-605, 0.0, 0x1.d3db52a6c4dd1p-750, 0.0, 0.0,
     0x1.3028720cd1924p-569, 0x1.ef743dd925f28p-244, 0x1.694cdbfe65c19p-468,
     0x1.11580d4d55ee9p-961, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4deabbb70c7bep-990, 0x1.694f479c7983ep-364, 0.0, 0x1.87677126a9862p-781,
     0x1.03ca4dc867b4bp-996, 0.0, 0.0, 0.0, 0x1.2308e5d6fe3afp-724, 0.0,
     0x1.9c9acbba9d4f5p-363, 0x1.8c4045f762557p-450, 0.0, 0.0, 0.0,
     0x1.d41c5688a8e83p-951, 0x1.fbf23728e0875p-282, 0.0, 0.0, 0.0,
     0x1.b92c54991d1b6p-685, 0.0, 0.0, 0x1.9b97104620beap-617, 0x1.8829a5c544445p-929,
     0.0, 0.0, 0x1.507e17a294ceep-415, 0x1.7656058ddc198p-699, 0x1.c0eac907c3d15p-231,
     0x1.6d7f7520b777p-120, 0.0, 0.0, 0x1.3eea69d8adc9dp-1020, 0.0, 0.0, 0.0,
     0x1.91df57f7a69ecp-595, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8961d50188da2p-498,
     0x1.9449b0b773803p-651, 0x1.27398e7101f5fp-695, 0x1.484f7574b387fp-633, 0.0, 0.0,
     0.0, 0.0, 0x1.36636a99b96b2p-173, 0x1p0, 0.0, 0.0, 0x1.a76f161921b95p-145,
     0x1.59f1b068d0d1ep-213, 0x1.b57ddceb054d1p-661, 0x1.01592d040a657p-680, 0.0,
     0x1.d36b157a2d4cbp-524, 0.0, 0x1.e9026b1e7fd6ap-503, 0.0, 0.0,
     0x1.e0bbf095db9bdp-807, 0.0, 0x1.c4f8648b8593cp-458, 0x1.e43e936cce3bfp-644,
     0x1.7652460da1f23p-700, 0x1.66408d3314ddbp-784, 0x1.95799532bc9c2p-84,
     0x1.d6390ceb5717bp-732, 0.0, 0x1.2bdafd2a7e3f6p-563, 0x1.26330919401ecp-998,
     0x1.d2fe7a6488964p-26, 0x1.ff5b281fe798ep-407, 0x1.5eaceee5edf4cp-61,
     0x1.09ac67fcd1a74p-823, 0x1.eccda9619d51bp-627, 0.0, 0.0, 0.0,
     0x1.0c9db721fec0fp-91, 0x1.56a635fcfd6b3p-719, 0.0, 0.0, 0x1.d266a2871ed72p-697,
     0.0, 0.0, 0x1.f7452339f13bfp-762, 0x1.b20afc1c3f124p-508, 0x1.98dae94b5ec16p-474,
     0.0, 0.0, 0x1.efd08534aea3dp-498, 0x1.42041af050c0ep-539, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4073564eab9f6p-473, 0x1.49cc41a68ad48p-735, 0.0, 0x1.b563f2d17f698p-608,
     0.0, 0.0, 0.0, 0.0, 0x1.c2bff55dbb6d8p-399, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.baf83a1b2f3d8p-755, 0x1.3fb48ea545c7p-333, 0x1.de66105070366p-21, 0.0,
     0x1.78359ce1c6bb4p-372, 0x1.3e54bb027b195p-8, 0.0, 0x1.0dc2e0331820ap-244,
     0x1.eba0914d9a036p-502, 0x1.fcf87b5689987p-110, 0.0, 0x1.f2520b8da8243p-548, 0.0,
     0x1.c1831eda0e8c8p-474, 0x1.68ef02122f208p-945, 0.0, 0.0, 0x1.055aaa863f43dp-532,
     0x1.996829523e02cp-456, 0x1.6140c282560fdp-58, 0x1.1be471f9d24dbp-678, 0.0, 0.0,
     0x1.c93a8c70c64e4p-25, 0.0, 0x1.30d4104daf9dcp-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.236742ef5a86ep-109, 0x1.61d9f153b8eedp-2, 0.0,
     0x1.3752d02a47dfbp-976, 0x1.8c988a3e81906p-477, 0.0, 0x1.3d6362e8d0135p-670,
     0x1.686c1fc26086fp-448, 0x1.0633664ec4472p-755, 0.0, 0x1.470ae02797f3bp-31, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c4e1530ca163p-499, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fa874add209c3p-364, 0x1.8c0fbd12c75d5p-154, 0.0, 0.0, 0.0,
     0x1.501f40b107ab2p-137, 0.0, 0x1.6b55b4aef95ffp-572, 0.0, 0x1.355cfa7f036d7p-913,
     0.0, 0.0, 0.0, 0.0, 0x1.3faede21bd4dep-726, 0.0, 0.0
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
            tmp1 = Sleef_ceild1_purecfma(tmp0);
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
    printf("Sleef_ceild1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ceild1_purecfma bench acc %la\n", global_bench_acc);
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
