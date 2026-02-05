/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expd4_u10kvx.c --function Sleef_finz_expd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.35ebef79d57efp-485, 0x1.24bfebd7ae4e1p-110, 0x1.c43e99be540ccp-50,
     0x1.6aa5ed5e6d59ap-111, 0x1.446344c956236p-39, 0.0, 0x1.7141cac158aefp-204, 0.0,
     0x1.13c54a1352075p-378, 0.0, 0.0, 0.0, 0x1.b70bb8eebca0dp-345,
     0x1.1b7657d6d5302p-642, 0.0, 0x1.d7cf73f7e5583p-624, 0.0, 0.0, 0.0,
     0x1.e1d79f9efafeep-579, 0x1.475be47a83651p-463, 0.0, 0x1.9606e07bc269fp-947, 0.0,
     0x1.457cf7711e8c7p-333, 0x1.6624e7cafdf48p-175, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d2ba4961f93ap-637, 0x1.b184bcda0be47p-1021, 0x1.32f5bf8bb898p-749, 0.0,
     0x1.7c81102dfd05ep-242, 0x1.13b34375ecb2dp-670, 0x1.f54a66efe3afdp-506, 0.0,
     0x1.86e5575e9127ep-890, 0x1.a58221b87ee82p-483, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f60ed673ba0fep-705, 0x1.e8ad4e8e1a6f6p-658, 0.0, 0x1.9b941f6b8d9eap-877,
     0x1.ab67644bc2872p-958, 0x1.db44894afa9fap-150, 0.0, 0.0, 0x1.e6001eb562633p-106,
     0.0, 0x1.1d6e91b7bf9a6p-655, 0.0, 0.0, 0x1.db8ca4a266f0ep-55,
     0x1.d58a7b1a4b516p-512, 0.0, 0.0, 0x1.4f655b3f4a8aep-605, 0x1.180c2e0ca5482p-5,
     0.0, 0.0, 0.0, 0x1.0dda24c5fba5p-530, 0.0, 0x1.c4bea04b48613p-62, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e012f2cd253adp-44, 0.0, 0x1.076f36e637b9dp-807,
     0x1.7408526f5c8d3p-217, 0.0, 0.0, 0x1.5ba27e62a03d7p-585, 0x1.96533185ec507p-489,
     0x1.56d334434ad7p-533, 0x1.10396e0957de7p-181, 0x1.36ffba921cfb5p-833,
     0x1.72c1aaca8a7b7p-987, 0x1.d86f7d805efffp-1002, 0.0, 0x1.552ab7573a94dp-76, 0.0,
     0.0, 0x1.2d8d20647f345p-862, 0.0, 0x1.66474dd28e552p-669, 0.0, 0.0, 0.0,
     0x1.4885b21546f97p-72, 0.0, 0x1.7eea7d282c6dbp-460, 0x1.a473f293a4018p-888,
     0x1.a3e5afb021a4fp-1003, 0.0, 0.0, 0.0, 0x1.9570c32a421bdp-464,
     0x1.94f7e4d4aba1bp-751, 0x1.a65c783b766acp-180, 0.0, 0x1.ddc7fd8429b8ep-593, 0.0,
     0x1.d9f3d1bd6604cp-41, 0.0, 0x1.ad0e9338175a7p-65, 0x1.0bc5250b9bc43p-940,
     0x1.ffc114519ba8dp-474, 0x1.23df4bda858b9p-465, 0.0, 0x1.5cc7605bd98abp-649, 0.0,
     0.0, 0x1.7ad79ef8939bbp-946, 0.0, 0.0, 0x1.f928bcc8c81c3p-286,
     0x1.3b206c8094d63p-578, 0x1.b8e45ea5dddddp-951, 0x1.d62c51a447445p-83,
     0x1.0f6e45ef3c3a6p-214, 0.0, 0.0, 0x1.e58be4a69c22cp-962, 0x1.07a8404af9facp-25,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fef53f228aaf8p-817, 0x1.ef81fd4cfc58p-400,
     0x1.1da82e34eb5c4p-954, 0.0, 0.0, 0x1.4287a8f81bf2fp-208, 0x1.b3138693639ep-170,
     0.0, 0x1.68ac99dc0f59p-207, 0x1.375ab4c9e756bp-138, 0x1.429734baffdebp-546,
     0x1.f7152360a8141p-951, 0x1.a3ba87e080562p-772, 0x1.418b9c9033a3cp-676, 0.0, 0.0,
     0.0, 0.0, 0x1.6cbf9140c7337p-273, 0x1.f8dedf1ab5f2ap-799, 0x1.141fc52621751p-106,
     0x1.d7bc5a8226226p-372, 0.0, 0x1.37077af0655a5p-604, 0.0, 0x1.c7ada1aa96c04p-275,
     0x1.595903c206c52p-651, 0.0, 0x1.dab46cd1a1f85p-704, 0x1.a16f32906aa91p-684,
     0x1.b4ccf6220f176p-159, 0x1.97362e6d90c1dp-633, 0x1.8f8ad6a08c394p-946,
     0x1.8b2ba50a845b2p-538, 0.0, 0.0, 0x1.ee71a6294052fp-456, 0.0, 0.0,
     0x1.80796ce2ef64ep-788, 0x1.f39ef0150855bp-525, 0x1.33c3c5d8da91ep-472,
     0x1.323da10678ae5p-223, 0x1.0815c5a20a1bep-796, 0x1.42b83026f4beap-803,
     0x1.7be5f5d084869p-85, 0.0, 0.0, 0.0, 0x1.3b0fc6bfd19c2p-788,
     0x1.bda68a27f038fp-815, 0x1.1f8e286f73b07p-108, 0.0, 0x1.2c849a69d3299p-690, 0.0,
     0.0, 0.0, 0.0, 0x1.832c3fe46abf7p-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.affd4e14fd3efp-456, 0x1.65be23b79e378p-397, 0x1.d2f72efe21478p-726,
     0x1.d73b8b9df491bp-398, 0.0, 0x1.1f8bcf2ac54fp-183, 0x1.a0a4e1b9959dfp-486, 0.0,
     0x1.3f09c82fb47d9p-1000, 0.0, 0x1.2bc6aef1893fbp-317, 0.0, 0.0,
     0x1.f3484ed7fe442p-52, 0.0, 0x1.87dde024a6f8bp-688, 0x1.8c809ac0a9aebp-693,
     0x1.e00a1248f2133p-883, 0x1.5fb5fb098f356p-10, 0.0, 0x1.fa89187b18b1dp-313,
     0x1.024af86f67f61p-862, 0x1.3403cce1585d1p-992, 0.0, 0x1.98c74b8dae8bdp-623,
     0x1.a3132c3f6c165p-535, 0x1.8e5de4c6365f3p-724, 0.0, 0x1.a45b4d62b6196p-647,
     0x1.e88c1d6fc76dcp-924, 0x1.3d58639de98ffp-98, 0x1.7fae7e6023f91p-640,
     0x1.aef85725f30cap-671, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82ed31fa5b816p-634, 0.0,
     0.0, 0x1.73ef95e935a86p-470, 0.0, 0.0, 0x1.5b4b706429518p-640,
     0x1.efda8b88799b1p-494, 0.0, 0.0, 0.0, 0x1.0ffd6b755c51bp-418,
     0x1.ad7dc3e5a91bdp-528, 0x1.0d35d04c37c6fp-587, 0x1.030ce42b71858p-208, 0.0,
     0x1.bb3a01b0e8324p-356, 0.0, 0x1.c3b319535a00bp-329, 0x1.f0697f58ef2f3p-629, 0.0,
     0.0, 0.0, 0x1.81c610131d8e1p-39, 0x1.72646a5f90baep-747, 0.0,
     0x1.a4c760b7db68cp-427, 0.0, 0x1.f515474a6653fp-95, 0.0, 0x1.2e02f882b81d9p-581,
     0x1.49dc0c4416e4bp-191, 0x1.4ecd1e26f66bcp-92, 0.0, 0.0, 0x1.d775cdafd0001p-735,
     0.0, 0.0, 0x1.62ce78679a69ep-876, 0.0, 0x1.713336e736c86p-611, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1f080d06fda1ap-874, 0x1.1be4ff8d5db7bp-460, 0.0, 0.0,
     0x1.d9ec2a2abf7b5p-580, 0x1.7b325471431f3p-680, 0x1.2c70addfddc8p-456,
     0x1.29beed61d1933p-579, 0x1.c0ccc02f9319fp-207, 0x1.53865a791f3f8p-23,
     0x1.7c4ce290db3d6p-343, 0.0, 0.0, 0x1.08a71faf22b7fp-633, 0x1.0e98cf6251652p-822,
     0x1.b145a783d0fa1p-413, 0x1.2df98a45f2d76p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0366fd1d1aa65p-607, 0.0, 0.0, 0x1.8ee65ea510a3ap-821, 0.0,
     0x1.7338de8107ae6p-42, 0.0, 0x1.684bb86ee52b4p-444, 0.0, 0x1.1aa0239887fc7p-687,
     0.0, 0.0, 0x1.9acaf9954579cp-67, 0.0, 0x1.47e429b7285adp-518, 0.0, 0.0, 0.0, 0.0,
     0x1.adf0d4860c9b2p-467, 0x1.fd3f300d4d5f4p-70, 0x1.41831ef2be871p-823,
     0x1.df5df6f622e29p-184, 0x1.7204399b2665bp-162, 0x1.92c6812a8d1acp-124,
     0x1.e34152daeca04p-224, 0x1.0ea4e8dbe13efp-243, 0.0, 0.0, 0.0, 0.0,
     0x1.ec5ce216b8265p-62, 0.0, 0.0, 0x1.3a42d63ea2522p-102, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4ff683053bfb4p-545, 0.0, 0.0, 0x1.e258733a7a947p-695, 0.0, 0.0, 0.0,
     0x1.ed6cf94502702p-845, 0.0, 0x1.ad0c896346549p-245, 0.0, 0x1.3501801bf8055p-803,
     0x1.1c6bf2a7f125fp-834, 0x1.946f1b84fa8b4p-206, 0.0, 0x1.b29dd7a7dd434p-841, 0.0,
     0.0, 0x1.bb02fed412bfp-997, 0x1.dbb5384cb3e99p-860, 0.0, 0x1.ce5dbba55e874p-1015,
     0.0, 0x1.d408e85cad4afp-134, 0x1.7e71e720a729cp-686, 0.0, 0x1.e0ed49226376ep-145,
     0x1.92863b2f44a2dp-862, 0.0, 0x1.cd84a5a7f3538p-657, 0.0, 0.0, 0.0,
     0x1.abd6d4d9b4d2bp-1013, 0.0, 0x1.aeea149bc56a7p-219, 0x1.765e2cc9155c8p-435,
     0x1.f69f849d574d9p-403, 0.0, 0.0, 0x1.94a15cd2ed8a2p-792, 0.0,
     0x1.300458ba31db8p-856, 0.0, 0x1.568daf3d0f141p-521, 0x1.8c88cc52d248ap-879, 0.0,
     0.0, 0.0, 0x1.fc5d3bb055da6p-683, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8ff5a24a507cp-389, 0x1.18dd4de4cffe7p-844, 0x1.5717594ec1008p-441, 0.0,
     0x1.8bf66f073c827p-304, 0.0, 0.0, 0.0, 0.0, 0x1.0f5bcbc21a3dfp-971, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.973a446381279p-221, 0x1.d5deb46595af2p-595, 0.0, 0.0,
     0.0, 0.0, 0x1.1565ee63ff422p-584, 0.0, 0x1.3313e2e0b0b65p-225, 0.0,
     0x1.88ac4d2f03775p-559, 0.0, 0x1.53c226f1d3ce8p-383, 0.0, 0.0,
     0x1.49740363d9a95p-662, 0.0, 0x1.832d8ca667246p-469, 0x1.c83e62df2475fp-92,
     0x1.8f4c52d555322p-111, 0x1.def903e97c377p-764, 0x1.67a260c7183acp-449,
     0x1.cd31ff163bf91p-953, 0.0, 0.0, 0x1.51cb571cde1a9p-321, 0.0,
     0x1.4372e655ab1c5p-573, 0x1.2b56e1af581eep-540, 0.0, 0.0, 0.0,
     0x1.c2f4fa95dfe9fp-37, 0x1.a1879cc00b5adp-766, 0x1.0e622cecda422p-445,
     0x1.a03fbfe2cca3bp-615, 0.0, 0x1.78b870c52966ep-978, 0x1.e48dba304d966p-673,
     0x1.bba6d71d272fdp-463, 0.0, 0.0, 0.0, 0x1.f648a42917be1p-121, 0.0, 0.0,
     0x1.27b469fc3b74p-745, 0.0, 0x1.40407c67aed8bp-72, 0x1.452f9236b994ep-110,
     0x1.4bd59c626b7f9p-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0adadeb7f577dp-888, 0.0,
     0.0, 0x1.f1b2e45263ed1p-596, 0.0, 0x1.0691a620296c5p-623, 0.0, 0.0, 0.0, 0.0,
     0x1.cc41acd53650ap-611, 0.0, 0x1.07bc4a2a70e88p-871, 0x1.eee3499136359p-928, 0.0,
     0x1.51d0a03ef6411p-924, 0.0, 0x1.80cb8e7fd9a6ap-639, 0.0, 0.0,
     0x1.b502fe2fed67ep-935, 0.0, 0x1.28679397190c8p-829, 0.0, 0x1.990a5d3115bbp-830,
     0x1.9bba955403a46p-588, 0.0, 0.0, 0x1.8eb7dd68bd0afp-429, 0x1.827e86572caa3p-778,
     0x1.a5a7c5a4fad5bp-137, 0.0, 0x1.b5a18c1b94d72p-98, 0x1.3eed2691ef328p-725,
     0x1.31ab7dc097cc5p-908, 0.0, 0.0, 0.0, 0x1.32959c7cbf815p-311,
     0x1.54efcbe9a4ec7p-986, 0.0, 0x1.b25dfad96ead4p-344, 0.0, 0.0, 0.0,
     0x1.fd0a5c5bc81fdp-779, 0x1.fcba3b9cd6fedp-997, 0.0, 0x1.2c3903a60274bp-706, 0.0,
     0x1.65425e6f9f32p-556, 0x1.cb9fe20f3f8dfp-645, 0.0, 0x1.1f9269488b572p-101, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8f9a0391d9e76p-637, 0.0, 0.0, 0x1.13d6324d6bd51p-502,
     0x1.46b03db2cdd56p-941, 0x1.079e547d1a5afp-308, 0x1.901ce0554ef2fp-201,
     0x1.bc61232fdef74p-110, 0x1.dfaa3b5646262p-617, 0.0, 0.0, 0.0,
     0x1.bd8ef96ba31a6p-802, 0x1.66a10c368569fp-231, 0x1.98ba0cdd576dep-560, 0.0,
     0x1.d06f399c496e1p-638, 0.0, 0.0, 0x1.2e349218c60cbp-275, 0.0, 0.0,
     0x1.eb04b948fbcafp-619, 0.0, 0.0, 0x1.2c5ad3167ca2ap-256, 0.0,
     0x1.e7ef95152a9e3p-272, 0.0, 0x1.71a863a046a9bp-681, 0.0, 0.0,
     0x1.8af9d22f2506cp-343, 0x1.63245ffc3405bp-310, 0x1.ed536119c51ddp-698, 0.0,
     0x1.9779e2c226981p-285, 0x1.91cb7775d8df4p-980, 0.0, 0.0, 0.0,
     0x1.575e35e9bc336p-164, 0.0, 0.0, 0x1.d8a68176d51fap-728, 0.0, 0.0,
     0x1.99797808863cep-976, 0x1.79fc2a2628222p-247, 0.0, 0x1.2ed2b38444c99p-70,
     0x1.525be6a472a34p-982, 0x1.021f2491a8262p-410, 0x1.4f105ab45700cp-583, 0.0,
     0x1.15bcf4dbca9efp-31, 0x1.cf32b0df100e9p-910, 0.0, 0.0, 0x1.8df0d9d7a0331p-322,
     0x1.450de9b1836f8p-426, 0x1.d53c44b847e69p-392, 0x1.3bcff562dd54bp-964,
     0x1.2256993d558e3p-178, 0x1.ba00c5cabedbap-865, 0x1.08f38645c8c88p-789,
     0x1.2bb5013dda8b3p-652, 0x1.659b947241758p-957, 0.0, 0.0, 0x1.35c3391b12f79p-928,
     0x1.a254ecc632e3fp-181, 0.0, 0x1.97689419504cp-316, 0x1.eb48310d7cf0ep-15, 0.0,
     0x1.c25222b3675c6p-992, 0x1.cf00d675ccd1cp-715, 0x1.5b45784a35216p-819,
     0x1.87e4bef55e28ap-635, 0x1.6e30a97ce1c42p-401, 0x1.297dc707017dp-413,
     0x1.45c8066aa7d6ep-880, 0.0, 0.0, 0.0, 0x1.f6e232830bdb7p-930, 0.0,
     0x1.96ade789d2c38p-520, 0x1.1d77a631e5d5ep-785, 0x1.72c493a347bc8p-534, 0.0, 0.0,
     0.0, 0.0, 0x1.359af328e543fp-279, 0.0, 0.0, 0x1.b7565491ec2eep-769, 0.0, 0.0,
     0x1.8b0266e1a282ap-876, 0.0, 0.0, 0.0, 0.0, 0x1.a678461dc73efp-40,
     0x1.852c6b4de40ccp-355, 0x1.0ecd7e3757d41p-753, 0x1.08d5141a97d0fp-631,
     0x1.ce728415ac171p-877, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a0d520b7bc62p-806,
     0.0, 0.0, 0.0, 0x1.24e75fe439bc4p-587, 0.0, 0.0, 0.0, 0.0,
     0x1.b06b007669f27p-476, 0x1.d4ac59d4728b3p-915, 0.0, 0.0, 0x1.c856f9364325fp-282,
     0x1.ce5a3af8ce5ecp-492, 0x1.7be9e3dd73355p-377, 0.0, 0x1.57b04aa2b26f3p-796, 0.0,
     0x1.006ab85f3eb21p-965, 0.0, 0.0, 0x1.56c52b7dea2e5p-815, 0x1.82b0f0febaeap-769,
     0x1.0f35c1bf292adp-871, 0.0, 0x1.0b9cc24e6c34bp-147, 0.0, 0x1.a5a6dfc48083ep-966,
     0x1.3952c22286defp-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81f91ed412719p-103,
     0x1.4300fdd7d3498p-812, 0.0, 0x1.c37538e7a8b34p-216, 0x1.ae88764bd8f9p-992,
     0x1.1373a111336e9p-409, 0x1.c5f0e7f6e6116p-880, 0x1.7e9c477652aa9p-199, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7f99d1fea9c95p-392, 0x1.4a31e730e9241p-352,
     0x1.956668820f9c1p-192, 0.0, 0x1.9c5132bc5879ap-646, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0caa3998cf1edp-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.527cb2b78c44ap-219, 0.0, 0x1.95a4e4ec690a2p-509, 0x1.14d852889cc82p-656, 0.0,
     0x1.32c0a3d43b7fap-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.14441dcdd08ep-168, 0x1.944cded22b5ffp-647, 0x1.eb67873772fb5p-966, 0.0,
     0.0, 0.0, 0.0, 0x1.be9439e2af021p-553, 0.0, 0.0, 0.0, 0.0,
     0x1.6f9e2083606d2p-741, 0x1.e3c58b92bbf13p-263, 0.0, 0.0, 0.0, 0.0,
     0x1.a6f9008a91c5dp-757, 0.0, 0.0, 0x1.ca012ce55b425p-780, 0x1.62dcbafd467cfp-756,
     0.0, 0x1.cdeba8b873ef2p-826, 0x1.8db22677dfd2bp-959, 0x1.2ecd8965d676ap-291, 0.0,
     0x1.20a0fddbbe5dp-678, 0.0, 0x1.ac85e5b9d57e9p-17, 0.0, 0.0,
     0x1.43fc877659457p-876, 0x1.5f590c7a230f6p-44, 0.0, 0x1.d917594e8ade3p-466,
     0x1.dbf8884ec1252p-107, 0x1.c55fe0a3c916bp-14, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22a089a1b9eb5p-742, 0x1.67a003aaa2b23p-712, 0x1.352127af27e7ep-69, 0.0,
     0x1.404e42d24392dp-869, 0x1.647390a0446b8p-602, 0.0, 0x1.a35da99fcb6c4p-36,
     0x1.47eda36720f7bp-873, 0.0, 0.0, 0.0, 0x1.0f23701da0f12p-731, 0.0, 0.0,
     0x1.574e391bcffp-513, 0x1.551d13d14c1adp-73, 0x1.a97185fe82be1p-408, 0.0,
     0x1.5ad0f3b94c8a9p-425, 0x1.21ffe191008e1p-25, 0.0, 0x1.e5f6488e428dp-421, 0.0,
     0.0, 0x1.40b7eefb889c3p-107, 0x1.503a81a66b0b7p-646, 0x1.7d3a380743a57p-253,
     0x1.c72a07bfb9474p-280, 0.0, 0.0, 0x1.04e1630f47e67p-636, 0.0, 0.0,
     0x1.4d0a5baecd322p-653, 0.0, 0.0, 0.0, 0x1.455fe53a29193p-85,
     0x1.2c22fc931d65fp-16, 0.0, 0x1.46a8b43c2cf6dp-14, 0.0, 0x1.15979e92bc559p-805,
     0.0, 0.0, 0x1.a2584fb85d4f8p-318, 0.0, 0.0, 0x1.0446434776712p-670,
     0x1.05c4a61b1bd8fp-238, 0.0, 0x1.fb7e8cbd969e5p-892, 0.0, 0x1.c84a980ecfa63p-709,
     0.0, 0.0, 0x1.8b667d157851bp-39, 0.0, 0.0, 0x1.604420d6def53p-322, 0.0,
     0x1.f1487dbd0c30bp-6, 0.0, 0.0, 0x1.54116283bde05p-915, 0x1.26a9fbe936766p-861,
     0.0, 0x1.79ee6667c8da2p-970, 0x1.cbf7d68c24bdep-769, 0.0,
     0x1.394c73edf0779p-1003, 0x1.e5ed39e4a6fcbp-542, 0x1.3cd7339d9c691p-317,
     0x1.d0182a4bf15e7p-1009, 0x1.17d0fd9f53117p-574, 0x1.7b8e75e7bec9cp-55,
     0x1.defae825a82a2p-65, 0x1.8c402a6fd9ceap-800, 0x1.dc8e18f1f6b0fp-593,
     0x1.696b8f4818fbcp-183, 0.0, 0x1.ed8aa1441d75ap-291, 0x1.fea1f57fbb84cp-982,
     0x1.55011693af7e2p-952, 0.0, 0.0, 0.0, 0x1.838acbeb85d99p-501, 0.0,
     0x1.2e0b35bd3ce8cp-1018, 0x1.0ea5ee96c71bdp-455, 0.0, 0x1.ef3d1551aa139p-76,
     0x1.767eb3461854ep-551, 0.0, 0x1.2799463e9c154p-415, 0.0, 0x1.2e3be2fba5c32p-825,
     0.0, 0.0, 0x1.35b44528d6db4p-17, 0x1.b456d041d525fp-889, 0x1.1a58325a8f959p-737,
     0.0, 0x1.8fb954aa675a7p-800, 0.0, 0x1.7cd6e2fe7931p-728, 0.0,
     0x1.b9b6d2afb33cp-814, 0x1.242f82b8a7e4cp-33, 0x1.190047d313d96p-903, 0.0,
     0x1.09df5d08fd5dap-170, 0.0, 0.0, 0x1.376362c5f747p-137, 0x1.6cf2652ede126p-411,
     0x1.a6add6dd1cf9ap-802, 0.0, 0x1.b8da5c7f587a6p-699, 0x1.ae08ff3232792p-890,
     0x1.93c7f9d20da83p-150, 0x1.2916dc3413d9ep-689, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22df0d97fe67cp-606, 0.0, 0x1.d0f133ff8cd9ep-467, 0x1.47d007caab79cp-943,
     0x1.0814bc1f9c613p-969, 0x1.fb1d348454d2fp-851, 0.0, 0.0, 0x1.03ace783b01dap-238,
     0.0, 0.0, 0.0, 0.0, 0x1.6dbad08cf8a33p-699, 0x1.bc7e68856664cp-622,
     0x1.d29de91707f21p-118, 0x1.b8ae0d5795b0dp-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0e0d863e385ap-343, 0x1.15643cdc69a16p-288, 0.0, 0.0, 0.0, 0.0,
     0x1.3c06b2c925a6bp-531, 0x1.7201e84133ec4p-437, 0.0, 0x1.6317e7c48811bp-825, 0.0,
     0x1.a757e0dc8f3a7p-593, 0.0, 0.0, 0x1.f028873dc353fp-312, 0x1.323b1a3fddfbcp-659,
     0.0, 0x1.3635a5644e1b2p-815, 0.0, 0x1.9dd5eeecf8693p-389, 0.0,
     0x1.730b987d2a74dp-732, 0x1.9951cac7f2bd8p-331, 0x1.75132dfb6a117p-21, 0.0,
     0x1.1acaa07ce83c2p-232, 0x1.bd8e341784d33p-402, 0.0, 0.0, 0.0,
     0x1.f0f01c2fabdf4p-473, 0x1.79a60af20510ep-673, 0x1.ce390e5bf7cbdp-44, 0.0,
     0x1.c4cf4ddef6eb8p-571, 0.0, 0.0, 0.0, 0x1.74946cfe81eefp-737, 0.0, 0.0,
     0x1.b628f02c5adbfp-412, 0.0, 0.0, 0x1.63e39f6df1913p-521, 0x1.36273a5356c0fp-711,
     0x1.025f6eca7f518p-108, 0.0, 0x1.f3dd036046a26p-897, 0.0, 0x1.1c9418f3c8928p-344,
     0.0, 0x1.115edf6a7beb8p-987, 0x1.5163b6a04f6fcp-888, 0.0, 0x1.8fcd5a84f2486p-683,
     0.0, 0x1.11d88563b3443p-997, 0.0, 0x1.2a5095b39392fp-790, 0x1.2c48bb3ce29e4p-2,
     0x1.f1cc698c2ae4ep-123, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_expd4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_expd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_expd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
