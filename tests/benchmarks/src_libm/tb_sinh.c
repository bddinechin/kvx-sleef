/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_sinh.c --function sinh --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.d80b1cb0ae813p-122, 0.0, 0x1.f446326531bc4p-32,
     0x1.4072111b09554p-533, 0.0, 0.0, 0.0, 0x1.1a554f3fd0513p-19,
     0x1.ba2f41d4a9fa4p-282, 0.0, 0x1.c294add590bp-351, 0x1.dec67ffd2392ep-290, 0.0,
     0x1.6155687207a5fp-986, 0x1.0e1f66e53106p-508, 0.0, 0.0, 0x1.937bfdbc3b00cp-916,
     0x1.95c4615d00ff6p-633, 0x1.b785060265c6ep-373, 0x1.1110c6a610d28p-867, 0.0,
     0x1.e9dc0f099c939p-858, 0.0, 0.0, 0x1.6d550beb28d2ep-982, 0x1.a7ff37d1c6d37p-175,
     0x1.d50fbc2e6fcf1p-471, 0x1.ff91e9c2f6b71p-762, 0.0, 0x1.e4b1cbb09d7fcp-897, 0.0,
     0x1.dc2674f1720a1p-281, 0x1.51734e95cbde7p-630, 0.0, 0x1.ea4c8693fdf38p-482, 0.0,
     0x1.2a250991944edp-447, 0x1.4a2476ea6efe6p-164, 0x1.9db5ae8edd7ep-76, 0.0, 0.0,
     0.0, 0x1.7c6aaca4984e2p-355, 0x1.f6500a7f39c0cp-444, 0.0, 0.0,
     0x1.a0005ca067d32p-681, 0x1.4576570b54f6bp-330, 0x1.4855748e9a80dp-525, 0.0,
     0x1.042057f606a8p-70, 0.0, 0.0, 0x1.77f517f7988dbp-386, 0x1.e071cf5b194b8p-730,
     0.0, 0.0, 0.0, 0x1.8d8812fb5f939p-22, 0x1.541e9f792bf8bp-577, 0.0, 0.0,
     0x1.041dc9ce49913p-349, 0x1.0fc4e1911e901p-143, 0x1.2869038bd8546p-709,
     0x1.665d63d90eb97p-433, 0.0, 0x1.86cd7431671eap-288, 0x1.05b893af126cdp-736,
     0x1.efa2abdfc5f3cp-166, 0x1.9206003f266acp-365, 0x1.cc7f748e37221p-984,
     0x1.e70e3903a620fp-39, 0.0, 0x1.c4f57bbb0b002p-71, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.752d51317c329p-679, 0x1.dec47c872d382p-620, 0x1.c37bcb3c9c2c6p-293, 0.0,
     0x1.9b905a80738d6p-541, 0.0, 0x1.cd793e6f8f5e9p-814, 0x1.b8043ec096f34p-908,
     0x1.0ccff5cd5e005p-958, 0.0, 0.0, 0.0, 0x1.efb5901753c2dp-169, 0.0,
     0x1.0f32fe3f95cefp-942, 0.0, 0x1.3457a03bcc6afp-962, 0x1.2fe55df517815p-845,
     0x1.990b893b38337p-153, 0.0, 0.0, 0x1.f9ea6eb0950dap-689, 0x1.301ee86fddfdfp-667,
     0.0, 0x1.8aad76fd1a715p-452, 0x1.795926930966ap-882, 0.0, 0.0,
     0x1.1ee9b45d7f6bfp-452, 0.0, 0.0, 0x1.d8db918e64b41p-478, 0.0, 0.0,
     0x1.151820616818fp-864, 0x1.3dba912d050eap-784, 0x1.0d30639cb694dp-333, 0.0, 0.0,
     0.0, 0x1.f1a1f6902e392p-702, 0x1.169967f247bddp-333, 0.0, 0.0,
     0x1.ad6c3edea22bbp-432, 0x1.c8305483e6d7ap-597, 0.0, 0x1.a3d6bb6a60065p-386, 0.0,
     0.0, 0x1.7b82e41c67607p-878, 0x1.3f440e9394e53p-235, 0x1.68136bbcaefc6p-472, 0.0,
     0x1.fdb8fc4954e87p-87, 0.0, 0.0, 0.0, 0x1.d58e67ada85efp-492,
     0x1.9357bf91a3d1ap-809, 0x1.01c622a1ba9ffp-372, 0x1.be7a6285d4d11p-79,
     0x1.86fd4c3c92c83p-775, 0x1.ac91c854b62a3p-449, 0x1.e087f72757558p-356, 0.0, 0.0,
     0x1.7d4f93d4e299dp-1020, 0.0, 0x1.a02214156ab3dp-920, 0.0,
     0x1.69713103c1538p-738, 0x1.cac852dba3a6cp-209, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e3eafe13f9d9dp-167, 0.0, 0.0, 0.0, 0x1.40b3bb3fd056cp-377,
     0x1.e38335bdb3788p-604, 0.0, 0.0, 0.0, 0x1.f5af2ebad214ep-83, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b46608d7958fdp-939, 0x1.f568314d40708p-628, 0.0, 0x1.ea412b8a1b0a3p-445,
     0x1.5ade57be8a7f6p-844, 0.0, 0.0, 0x1.d5c9d4e13ca05p-60, 0.0,
     0x1.b9d4d5231a0c5p-638, 0.0, 0.0, 0x1.8d06f6f6a9d0fp-828, 0.0,
     0x1.d06b07e91c472p-699, 0.0, 0.0, 0.0, 0x1.1138a55082cb4p-289,
     0x1.4a7d30bb104f5p-723, 0.0, 0x1.fc32017a20553p-795, 0.0, 0.0, 0.0, 0.0,
     0x1.efdb97a43f165p-43, 0.0, 0x1.967fa88822f38p-100, 0x1.d8f92eb1c1fb5p-441, 0.0,
     0.0, 0.0, 0.0, 0x1.d78dccf92738p-995, 0x1.84c59e1aeadd6p-742,
     0x1.4e2cd9d9dd96cp-703, 0.0, 0.0, 0.0, 0.0, 0x1.81b88f74d488ap-936, 0.0,
     0x1.5be97e9ac5298p-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b3903dccf57c3p-746,
     0x1.70d5bbd333ab6p-337, 0x1.b32e5e56c9b81p-1009, 0x1.74748f9a29eap-663,
     0x1.92b3d4a2ce3cfp-885, 0x1.3f866a84221c7p-237, 0x1.71cfdae7a8fa5p-532,
     0x1.5e6dbc59a8ec4p-4, 0.0, 0.0, 0.0, 0x1.47b355353ea9dp-111,
     0x1.8fd61fc27ececp-249, 0x1.8c27ddf4a6aeep-710, 0.0, 0.0, 0x1.9807144bf8126p-287,
     0.0, 0x1.7d137188aebbp-49, 0.0, 0.0, 0x1.1d717ff3b018ap-587, 0.0, 0.0, 0.0,
     0x1.e52b8794832acp-891, 0.0, 0x1.ed98d72f747f9p-1001, 0x1.fb1c034573366p-795,
     0x1.32894ccf5da9ep-924, 0x1.5d300bc2ef30bp-342, 0x1.06c65206d52edp-360,
     0x1.99c7519c41192p-515, 0x1.f4a516cd30a4ep-876, 0x1.702c3f1f44074p-106, 0.0,
     0x1.2925759cd1f62p-681, 0.0, 0x1.5754522456588p-559, 0x1.fbcdd6181033bp-133, 0.0,
     0x1.9423b8252f23fp-530, 0.0, 0x1.f50a291a2a15bp-770, 0x1.d4a04fbaace4cp-492, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d2988c975ad5p-779, 0x1.1bb6d40294c05p-367,
     0.0, 0x1.a5729548ec2e5p-1, 0x1.82521105fbcbcp-375, 0x1.df5f4eb82bac8p-975,
     0x1.e4bc17acc3ee7p-733, 0x1.74953d82edbp-995, 0x1.8524204dbddc8p-255, 0.0,
     0x1.b7324c3080d7ap-753, 0x1.b9875a2b6fbdbp-692, 0x1.5a825dc9f634dp-274, 0.0, 0.0,
     0x1.2258d112ec6adp-994, 0x1.4fd0396a53413p-433, 0x1.dea6a3e16e392p-382, 0.0, 0.0,
     0x1.ae4d2a3987c3fp-173, 0.0, 0.0, 0x1.712305b8f067ep-60, 0x1.94b87b0e5edb9p-685,
     0x1.aac9fa14042efp-140, 0x1.bd0c61ee36f6bp-717, 0.0, 0.0, 0x1.27bfa25c6ffabp-835,
     0.0, 0x1.40e7e5900dc42p-63, 0x1.1dc5fb940014ep-910, 0.0, 0x1.e5f084f8ac888p-29,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57affb1474fc9p-645, 0x1.e97061223f043p-650,
     0x1.632d8e323516fp-743, 0.0, 0.0, 0x1.fe16a51f90709p-743, 0.0, 0.0,
     0x1.17114d88fed7p-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a4d953f2e9757p-140, 0x1.b653a951db911p-669, 0.0, 0x1.9a59a2a79b352p-280,
     0x1.788a03c4cce25p-417, 0.0, 0.0, 0x1.afd2f22a98f04p-345, 0x1.dce855838a9f3p-464,
     0x1.5ecffe7f60c91p-317, 0x1.e5bd69b11b46cp-923, 0x1.4b70a3375e74ap-809,
     0x1.7e20f9597d356p-180, 0x1.710fd142dfcf6p-257, 0.0, 0x1.de48cdcc1a0eap-502,
     0x1.d7535f1787fcap-634, 0.0, 0x1.90ee6dc760176p-541, 0.0, 0x1.54c5f51cd1587p-752,
     0.0, 0x1.fed4e4c57addcp-197, 0x1.e73905d84717cp-21, 0x1.b0e51cf41eb11p-444,
     0x1.97431d341bcap-627, 0x1.95146b38da766p-223, 0.0, 0x1.be5f573cbd7e2p-857, 0.0,
     0.0, 0x1.b33525cb75d0ep-618, 0x1.b04b0b6bffb4ep-664, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0877311a6de8bp-679, 0.0, 0x1.b0eed0a8287ecp-72, 0.0, 0.0,
     0x1.fd6c930f25cd7p-666, 0x1.c37e0299531d2p-575, 0.0, 0x1.33cec7b6fdf1cp-462, 0.0,
     0x1.c9082d0a8806bp-97, 0x1.c5880c2da00fep-137, 0.0, 0x1.1d4000fa3cbabp-405,
     0x1.623373b0e74f2p-797, 0x1.b231b619570a6p-469, 0x1.00322b81120bfp-1002, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.34bf2626b72d9p-811, 0x1.6e95d42ec3236p-835, 0.0,
     0x1.82255626ff52p-241, 0.0, 0.0, 0.0, 0.0, 0x1.f5ab0d9f78cap-758,
     0x1.b8ed7bb012c21p-607, 0x1.4ff2d92a65986p-711, 0x1.e115653ea6a15p-954, 0.0,
     0x1.1c81986486fc1p-584, 0.0, 0.0, 0x1.9b44bcb406256p-460, 0x1.292b48b5dd41bp-991,
     0.0, 0x1.68062a6755596p-472, 0x1.d7f19524a05f9p-746, 0.0, 0.0,
     0x1.7c4073aa53548p-684, 0x1.0edd5fb291p-627, 0x1.cf9f34550806dp-14, 0.0, 0.0,
     0x1.af7f3d5cf9352p-59, 0.0, 0.0, 0.0, 0x1.b84ed4c1ab84ep-240, 0.0, 0.0, 0.0,
     0x1.10a4e3fac6451p-99, 0x1.bebf881d831d6p-54, 0x1.3f01b49440f35p-66,
     0x1.1d5f6fc5ae073p-627, 0x1.12c137316cb2p-926, 0.0, 0.0, 0x1.6e76e50328a6ap-701,
     0x1.14202559a4ea6p-168, 0x1.a0c2601366719p-255, 0.0, 0.0, 0.0,
     0x1.a6ef46e1c8b38p-136, 0x1.c84fd8ffdd2d3p-680, 0.0, 0x1.1d552d54540b8p-516,
     0x1.0deb6fde264e2p-250, 0.0, 0x1.5e866b4e0c6a2p-213, 0x1.f034fb648020bp-854, 0.0,
     0.0, 0x1.0fffaef4d2328p-783, 0x1.9e757ec82a453p-318, 0x1.61653b4cd4f4bp-472,
     0x1.1720adfb6fcf7p-593, 0.0, 0x1.60d79b70a0354p-706, 0x1.cd4cf5e2edc7bp-730, 0.0,
     0.0, 0x1.d1e51763a2df2p-200, 0.0, 0x1.ea46da49e477fp-710, 0.0,
     0x1.512a240cdd21cp-479, 0.0, 0x1.f16394969ddf7p-403, 0.0, 0.0,
     0x1.6f5e35f400d2ep-26, 0x1.3c82ae7572387p-34, 0x1.22acfab609c1cp-194, 0.0, 0.0,
     0.0, 0x1.d2f04400bc86bp-850, 0.0, 0x1.a6c987b066015p-29, 0x1.6aab574e257efp-748,
     0x1.4dce61e67f60cp-320, 0.0, 0x1.c355fe5f0346dp-596, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.db26433e387b8p-572, 0x1.899af267d7738p-723,
     0x1.40835659cd731p-599, 0.0, 0.0, 0.0, 0x1.fab1cc468b994p-735,
     0x1.d6cd628b313bap-339, 0.0, 0x1.97073da707f9fp-579, 0x1.2847aa8029d92p-308,
     0x1.ca9ea7a6ef7b4p-997, 0x1.94dfc92ed6547p-339, 0.0, 0x1.188c6afe8ee45p-817,
     0x1.bb10a2d0f629ap-515, 0.0, 0x1.f40edfe9fe2fbp-904, 0x1.4efdf45ff3651p-501,
     0x1.babdfd7f3bff8p-692, 0x1.5e8e9a314039bp-92, 0.0, 0x1.c2bd64b502b24p-989, 0.0,
     0.0, 0x1.af3ec7784e962p-663, 0x1.315b5b1739b4bp-640, 0.0, 0x1.6d26bfa833187p-422,
     0.0, 0.0, 0x1.2a45939d17a95p-55, 0x1.4ea9dde087ccep-412, 0x1.dfd577a7422d1p-984,
     0.0, 0x1.8baa96c3f1988p-11, 0x1.c32cd35c6210dp-766, 0x1.dc3d351ce7cdfp-329,
     0x1.0614ac1990947p-618, 0x1.b4f91dfe1b8f1p-335, 0.0, 0x1.ed3344d8174cp-737, 0.0,
     0.0, 0.0, 0x1.835b0a2ec38b4p-441, 0x1.e94c2c8ef465p-262, 0.0, 0.0, 0.0,
     0x1.1015c3ea08ef7p-680, 0.0, 0x1.78fc6dc7fccd9p-387, 0.0, 0x1.888964bc138dep-734,
     0.0, 0.0, 0x1.8e74818d3c7fap-135, 0x1.260ef5a13cfa4p-680, 0x1.f0ca7f6e6a28dp-403,
     0x1.5c01ac9a68fecp-490, 0.0, 0x1.2efc7ebc73bb8p-599, 0.0, 0.0,
     0x1.ca9508a6fe097p-658, 0.0, 0.0, 0x1.b2e9f4b1c129dp-381, 0.0, 0.0,
     0x1.6d5fb669cf07ap-634, 0.0, 0.0, 0x1.c0a0592e46fafp-927, 0x1.48135cecb96ap-1008,
     0x1.0f17d0426b05fp-818, 0x1.ca69851ffb1cbp-448, 0x1.7e0c85f0a5e17p-717,
     0x1.db5d8699c10dbp-402, 0.0, 0.0, 0x1.90beadee1d05ep-1009, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12f6223d8730bp-407, 0x1.e48f8f24329e7p-900, 0.0,
     0x1.57f09039fc585p-563, 0x1.113093550229ep-316, 0.0, 0.0, 0x1.1d49e7cda3564p-605,
     0.0, 0x1.98aa3ed9a9302p-196, 0.0, 0x1.51540d15b5c28p-843, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dead7a489bb8ap-20, 0.0, 0x1.eabcedc4a4569p-556, 0.0,
     0x1.b2b70cfa32144p-93, 0x1.c17a995ea7a59p-276, 0x1.fa66db5b39176p-283,
     0x1.2ccfb1fc4f235p-40, 0.0, 0x1.58c1a055d0dcbp-363, 0.0, 0.0,
     0x1.47c4dc4db9f86p-239, 0.0, 0.0, 0x1.508191a1ca61fp-582, 0x1.1420e9ab6c5dcp-336,
     0x1.1bd23e22ea3cbp-640, 0.0, 0x1.aae0d70162d8ep-769, 0.0, 0x1.cd86ab8a7d237p-752,
     0x1.35723880b0beap-786, 0x1.d37acd3defa6ep-672, 0.0, 0x1.a71f3e8be4e1p-366, 0.0,
     0.0, 0x1.9995fc6f8fdcap-415, 0.0, 0x1.9c7cf7a1d6ba2p-411, 0.0, 0.0, 0.0, 0.0,
     0x1.f32f4e50588b4p-255, 0x1.8c706d28b43e7p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.95619fcd30c77p-342, 0.0, 0x1.312ccc82fba8fp-424, 0x1.1b38acdc2e2cep-491, 0.0,
     0x1.e66c17f90328p-496, 0x1.36724e1022b3fp-847, 0.0, 0x1.7ad27f36d08e4p-304, 0.0,
     0x1.0e287f0d554f1p-488, 0x1.74e8a50d82bcdp-9, 0x1.e22c4d38744d5p-972,
     0x1.1051a249dc7fap-786, 0x1.f19115c7cf94ap-568, 0.0, 0x1.8010909f18df3p-263,
     0x1.920204b4bfc27p-101, 0.0, 0.0, 0x1.ffa019fc7ea2ap-857, 0x1.b0c35bd589f77p-448,
     0.0, 0x1.4fa4efa966388p-612, 0x1.b3b078988d7b2p-439, 0x1.c12c060fc4c5cp-970, 0.0,
     0.0, 0x1.ddd43b363b31ep-655, 0.0, 0.0, 0x1.fdc3a45f5a22p-212,
     0x1.817f151ef02a2p-459, 0.0, 0.0, 0x1.c68846a8e51d7p-862, 0.0, 0.0, 0.0,
     0x1.1cf43f1a1b40ep-365, 0x1.18da1b67289b7p-372, 0x1.62dd1c5ab1d46p-176,
     0x1.9bd666f87faep-535, 0.0, 0.0, 0.0, 0x1.4dd997a85c2cdp-422, 0.0, 0.0, 0.0,
     0x1.a7a7798258951p-555, 0.0, 0x1.b9181e1099e5p-461, 0x1.07f4c506987c5p-780,
     0x1.98f38694c933dp-662, 0.0, 0.0, 0.0, 0x1.2a662c7c1ff3p-563,
     0x1.2349114e43f87p-349, 0x1.ed27ba0061ed6p-863, 0.0, 0.0, 0x1.0c816fec88d24p-8,
     0x1.67ba9a6fcba92p-161, 0x1.cf81d9cb4682bp-840, 0.0, 0.0, 0.0, 0.0,
     0x1.05fca89076199p-900, 0x1.d1af0d2ee9faep-684, 0.0, 0.0, 0.0,
     0x1.39adf3e519369p-946, 0x1.5163e55a45de9p-228, 0x1.5610328757272p-925, 0.0, 0.0,
     0.0, 0x1.6e2d608fbf35bp-332, 0x1.38ce0304b7197p-525, 0x1.791ca12f55021p-203,
     0x1.7242c6542af03p-185, 0x1.66c7c86bfec5ap-635, 0x1.93ce957f888f2p-285, 0.0,
     0x1.12ec010fc6391p-282, 0.0, 0x1.d0629f0d7e4dep-574, 0.0, 0.0, 0.0,
     0x1.3ad925581b852p-437, 0.0, 0x1.4b8dfa080bcd4p-547, 0x1.7eeaebfd61aefp-373, 0.0,
     0x1.5353c7e05b3f6p-418, 0x1.10d4af93fe766p-14, 0x1.d011ad4d7d036p-236, 0.0,
     0x1.5f44ebaf4ab55p-177, 0.0, 0x1.9f7bce14018a5p-71, 0.0, 0x1.48cad3f2e938bp-314,
     0x1.ae8c315096542p-665, 0.0, 0x1.e85e87ad1501ap-994, 0x1.af357d441db29p-84, 0.0,
     0.0, 0x1.c9ada01d8b262p-324, 0.0, 0x1.c7903fe8dec13p-90, 0.0,
     0x1.ec4bfab6de64p-190, 0x1.af811316f6df8p-991, 0x1.d6434df80d9a5p-302,
     0x1.6d580301a2db4p-25, 0.0, 0x1.75882d120f83ep-639, 0.0, 0x1.1b7da73d280b4p-870,
     0x1.c72a2210afbd1p-314, 0.0, 0x1.db8229ff506a4p-422, 0.0, 0.0,
     0x1.7bb7509b725f7p-622, 0x1.e624bc661f09ap-692, 0.0, 0x1.b42628f6dfe5ap-408,
     0x1.96181d32fe565p-21, 0x1.79c98f88e3eeap-197, 0x1.bdb405811567dp-943, 0.0, 0.0,
     0.0, 0x1.5ab23a4faf216p-246, 0x1.32bbde231f7e5p-737, 0.0, 0.0,
     0x1.39207579ba9e3p-944, 0.0, 0.0, 0x1.5575b8e4638fep-1011, 0.0,
     0x1.f8687188a1289p-577, 0x1.c771b8873b18ap-54, 0x1.a44c7e389e57dp-275, 0.0, 0.0,
     0.0, 0x1.2cb30123f5dp-709, 0x1.339c7041b4cadp-884, 0x1.20189acfabc3dp-437,
     0x1.291c911516e34p-879, 0x1.938d86a97c4cep-505, 0.0, 0x1.2852c69e2a0e2p-492, 0.0,
     0.0, 0x1.e7d65813f8208p-168, 0.0, 0.0, 0x1.09270b49f67f7p-395,
     0x1.fefb8b0cf84bbp-625, 0.0, 0.0, 0x1.0b3669b987492p-704, 0.0,
     0x1.df835ec31caf2p-425, 0x1.449ec2968a1ep-847, 0.0, 0x1.6696ea81f2eep-910,
     0x1.3ca4975938989p-240, 0x1.72a0ef298de12p-83, 0x1.b13cf9aa79013p-81, 0.0,
     0x1.8547f7a6636aap-391, 0.0, 0.0, 0x1.8141076e42ecp-771, 0.0, 0.0,
     0x1.6dd2f71645391p-283, 0.0, 0.0, 0x1.a0330611a0ef9p-606, 0x1.827d3f611ee9ap-602,
     0x1.aa6f0bfae2cdp-510, 0x1.fcf96023c4becp-369, 0x1.f630eacf20316p-1001,
     0x1.7d48ccc13322bp-418, 0x1.83ab6b981442dp-803, 0x1.632f517e0ede9p-539,
     0x1.abb22ede797e4p-873, 0.0, 0.0, 0.0, 0x1.d75d208c16c15p-90, 0.0,
     0x1.088d3120bc909p-232, 0x1.7e2fc046ee05p-873, 0.0, 0x1.2bed1779ec9ebp-835, 0.0,
     0x1.605333368abaap-480, 0.0, 0.0, 0.0, 0x1.03d21f0012a57p-303,
     0x1.eef19873f8c6fp-998, 0x1.f03b39562a2dap-852, 0.0, 0x1.60a136ae5dba2p-909,
     0x1.d1f0b820363d3p-693, 0.0, 0x1.5e616a4c60102p-213, 0x1.ff454e639fd44p-220,
     0x1.c6d97473182fbp-922, 0.0, 0x1.8eeba43be2d1fp-565, 0x1.1d736e327b0f9p-521,
     0x1.59cdce51c0319p-325, 0x1.fb99a99871aefp-880, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed4089d8bd249p-962, 0x1.0a8dc0b9a143cp-895, 0.0, 0.0, 0.0, 0.0,
     0x1.10567c192c5b3p-321, 0.0, 0x1.6a05a5434498ap-719, 0.0, 0.0, 0.0,
     0x1.8354b4e563076p-425, 0.0, 0.0, 0.0, 0x1.371002f9f1b24p-426,
     0x1.45c7290f6c2bep-873, 0x1.3452ec17f60d1p-1019, 0x1.4ae3882f855abp-203,
     0x1.f2818d2862c99p-672, 0.0, 0.0, 0x1.048e2adfac65dp-662, 0.0,
     0x1.0bf40184a58edp-276, 0x1p0, 0.0, 0x1.272a33615faffp-469, 0.0, 0.0,
     0x1.d13e672647de5p-880, 0x1.14f153ea1c2d2p-358, 0.0, 0x1.9e29ccd989965p-38,
     0x1.923584954e068p-835, 0.0, 0.0, 0.0, 0x1.a5a7ecefc7037p-798,
     0x1.01a4de32e7d8cp-158, 0.0, 0x1.c4fb91da5857bp-918, 0.0, 0x1.b47ab9bca290ap-830,
     0x1.95ed5e0b87254p-83, 0x1.2f81d8362818fp-63, 0x1.1e1917158cf9cp-929,
     0x1.02f99689f831fp-865, 0x1.2c43284fd2955p-363, 0x1.a4f22b868a285p-814,
     0x1.54223372f72d8p-380, 0x1.9dab226ce6ecp-73, 0.0, 0.0, 0.0,
     0x1.834a02578c445p-541, 0.0, 0x1.9464b40fb6cb6p-145, 0.0, 0x1.61bc901c25ed5p-336,
     0.0, 0.0, 0x1.b2dcab7d5ebdep-256, 0.0, 0x1.93d6ecc16334dp-264, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ff2f25996a02cp-769, 0.0, 0x1.70490a214c082p-678,
     0x1.f61edfb7ed0cap-555, 0.0, 0x1.756bda064e9d2p-880, 0.0, 0.0,
     0x1.6cdabe913f913p-869, 0x1.c6bd7435fb12p-616, 0.0, 0x1.77fe93950895ep-799,
     0x1.f5035b187dadfp-474, 0x1.89b6e8c97f772p-916, 0.0, 0.0, 0.0, 0.0,
     0x1.b19845e8fe236p-578, 0.0, 0x1.55d350599a861p-674, 0x1.120f65ddeaad1p-414, 0.0,
     0.0, 0.0, 0x1.6a298e6989b57p-542, 0x1.07f28bb098d64p-793, 0x1.be724ef068869p-510,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35f0d88a3b7f2p-968, 0x1.ab92b3157f1ccp-642,
     0.0, 0x1.06ee18adafd74p-510, 0x1.86df48a2ea764p-562, 0x1.89ebd829fc851p-265, 0.0,
     0.0, 0x1.403757f4d696fp-895, 0x1.f4969aa45aaeep-265, 0x1.f40df76338b8p-467,
     0x1.1626f5f83a758p-290, 0.0
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
            tmp1 = sinh(tmp0);
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
    printf("sinh %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("sinh bench acc %la\n", global_bench_acc);
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
