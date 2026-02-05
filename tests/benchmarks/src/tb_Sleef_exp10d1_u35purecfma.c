/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d1_u35purecfma.c --function \
 *     Sleef_exp10d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.de3417d2a413p-569, 0x1.3c3a18294f65ep-166, 0.0,
     0x1.66bc15a8372bp-353, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f071b99f1969ap-190,
     0x1.fec8f6a4bec7dp-164, 0.0, 0x1.7ac264c50c0c1p-585, 0x1.565f42747e976p-94, 0.0,
     0x1.0d859ab76d217p-471, 0x1.5629d36c75eb1p-355, 0.0, 0.0, 0x1.67759785fcfp-474,
     0x1.664ca6c9426c9p-585, 0.0, 0x1.c72066af77906p-813, 0x1.d7f0f024f9947p-711, 0.0,
     0x1.ac6ee0ad7c675p-503, 0.0, 0.0, 0.0, 0x1.dd14745712318p-734, 0.0, 0.0, 0.0,
     0x1.21f950665b3eap-744, 0.0, 0.0, 0x1.2182b4b9929a8p-267, 0x1.372e5092cb37ep-575,
     0x1.92c4145654518p-656, 0.0, 0.0, 0x1.a5899a57e9938p-965, 0x1.22f2c7c855cdcp-235,
     0.0, 0.0, 0.0, 0x1.68f4ab995c92p-741, 0x1.d6b60340fb321p-54, 0.0, 0.0,
     0x1.351e0e360a47fp-299, 0x1.0b89bdc1c72bdp-1015, 0.0, 0.0,
     0x1.2d80b5103113fp-283, 0.0, 0.0, 0x1.61de0267c31dap-659, 0x1.e11349529ed2fp-384,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9fe4cf172c9bp-878, 0.0, 0.0, 0.0,
     0x1.955fb2fbc3c7ep-202, 0x1.2f41c839d5a77p-520, 0x1.a227ab89dd9aep-945, 0.0, 0.0,
     0x1.fcf08bd1289dbp-796, 0.0, 0x1.d59c3f4391a67p-867, 0.0, 0.0,
     0x1.4f5a104e552bap-760, 0.0, 0.0, 0.0, 0.0, 0x1.9f42f31ef500fp-153,
     0x1.cfd0f662e2346p-768, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.617b9743e7dd4p-548,
     0x1.26eb3056e118bp-340, 0x1.00a835974cf83p-660, 0x1.2d4a3ab186bc1p-298, 0.0,
     0x1.f4e9bf98cc50fp-392, 0x1.623e32dd2ab9p-29, 0.0, 0.0, 0x1.9f8b4229848f7p-261,
     0x1.4242cbb2e0389p-110, 0.0, 0x1.64ce61a27dd1dp-551, 0x1.2a4f864ee7339p-123,
     0x1.25b006b837485p-27, 0x1.60d2e5bf5f063p-662, 0.0, 0.0, 0x1.c00b640c54313p-769,
     0.0, 0.0, 0.0, 0x1.ecb66a28c8a1ep-676, 0x1.a592991fc0e2fp-491,
     0x1.cdd71547a0987p-914, 0x1.d3a0baf5ee1cdp-829, 0.0, 0.0, 0x1.3b3b16856eb95p-489,
     0.0, 0.0, 0x1.4d530768449cep-794, 0x1.d99a85a68dbfp-462, 0.0, 0.0, 0.0, 0.0,
     0x1.6d92c62d056dcp-454, 0x1.35a85094b37c3p-209, 0x1.b561a4ffd6952p-900,
     0x1.be93ecc52c6a7p-370, 0.0, 0.0, 0x1.74b6064f57acdp-433, 0.0,
     0x1.e35da2dddbb84p-112, 0.0, 0x1.c614e0e6291dcp-91, 0x1.31d6f88c09b89p-308, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.505ac337497c7p-725, 0.0, 0x1.60997fa11feabp-1009,
     0x1.72834d5989f0fp-947, 0x1.ac2da681e0373p-91, 0x1.b0cd82ebaf08ap-917, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba480e9206e8dp-156, 0.0,
     0x1.9d24a6525afdbp-31, 0x1.e387ce4cf6cbdp-113, 0x1.1820523298c8fp-535, 0.0,
     0x1.e881ad1dd729cp-872, 0.0, 0.0, 0.0, 0x1.7c6217f4914a3p-961, 0.0, 0.0, 0.0,
     0x1.856e56637be25p-333, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc0254dd81473p-559, 0.0,
     0.0, 0.0, 0.0, 0x1.4daf7245f2133p-385, 0.0, 0x1.465b83ce50a5bp-457,
     0x1.0c8e26396300dp-142, 0.0, 0.0, 0.0, 0.0, 0x1.d6abb09a1448ap-962, 0.0,
     0x1.594993b8d187fp-856, 0x1.e6c271cfcf799p-700, 0x1.e3b04e4fb0518p-859,
     0x1.18cff649bec35p-318, 0x1.83e0a3ff0a6cep-450, 0.0, 0.0, 0x1.da5e1b5183b78p-970,
     0x1.0e753c2d31d45p-945, 0.0, 0x1.7efd31a08fa81p-994, 0.0, 0x1.b862afdc6512bp-77,
     0.0, 0.0, 0x1.6e6cab606421fp-166, 0x1.3475351990edcp-316, 0x1.60385351da6d4p-650,
     0x1.d54156f173a7dp-391, 0.0, 0x1.4ccc97f1c4369p-255, 0.0, 0x1.06e2ab788cb9fp-598,
     0x1.7445c754f48c8p-296, 0x1.1817852d4585bp-1007, 0x1.dcdf9186abb7p-172, 0.0, 0.0,
     0x1.b8a7d1aea7decp-68, 0x1.fdd373c4e26cep-893, 0x1.135e24a3c2bb8p-1017, 0.0, 0.0,
     0x1.bed643b5c60a1p-478, 0.0, 0.0, 0.0, 0.0, 0x1.7303321f978e1p-846,
     0x1.a5d0746f0c366p-573, 0x1.89a8c93562e51p-168, 0.0, 0x1.8bd823c686cacp-664,
     0x1.7cb576484f47p-491, 0x1.dc5d7520dd8bap-76, 0.0, 0x1.8bcd6de8c9762p-158,
     0x1.0f3bf39fa7132p-259, 0x1.a4c85231c6e08p-340, 0x1.2dfe124f47041p-788, 0.0, 0.0,
     0.0, 0x1.152136739adb6p-361, 0.0, 0.0, 0.0, 0.0, 0x1.037b7d042f274p-424,
     0x1.879b80a625f1bp-33, 0x1.07d38687f066p-799, 0.0, 0.0, 0.0, 0.0,
     0x1.a3303b519837ep-246, 0.0, 0x1.f34627e9f7149p-956, 0x1.23d802f3de854p-58, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.71c575cbc3a09p-50, 0.0, 0x1.92d74b7c65d39p-213, 0.0,
     0x1.a24068f02b106p-1011, 0.0, 0.0, 0x1.5490f02f34703p-950,
     0x1.cf3cf507a81f5p-288, 0x1.c242497908f1ep-161, 0.0, 0.0, 0x1.cc5a6a333b5e4p-636,
     0.0, 0x1.2957badd04669p-499, 0.0, 0.0, 0.0, 0.0, 0x1.5b4d113f5438dp-163, 0.0,
     0x1.be9123406ebbep-790, 0x1.a7cb3930a975dp-597, 0x1.df51b0bc52409p-257, 0.0, 0.0,
     0.0, 0x1.3cac259d67e15p-792, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.493682d0809b6p-92,
     0x1.8125f1d54ad95p-869, 0.0, 0.0, 0.0, 0x1.8cda281b409dcp-215, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c080b9c79d086p-359, 0x1.7fbb6d74b7e4p-838, 0x1.1e79661b987eap-669,
     0.0, 0x1.d164dfdc7de36p-589, 0x1.94906bc38bc59p-318, 0x1.7726d1b6b572ep-645, 0.0,
     0x1.052c33f48cc84p-418, 0x1.5df11ff26819dp-304, 0x1.1e86d56662b7bp-629,
     0x1.fd743ea4ba88fp-693, 0x1.e15afaa678788p-756, 0x1.5f1d81338379bp-274, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e7b4b901a4d1bp-907, 0x1.30137ac0807e3p-614,
     0x1.c702b4573e36fp-104, 0x1.751509300bda7p-866, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e6d47b8f9e27p-225, 0.0, 0x1.770a719737261p-445, 0.0, 0x1.ead6b7755ff11p-221,
     0.0, 0.0, 0x1.0f691ffdcd0dbp-968, 0.0, 0x1.42f1b18fd4894p-909, 0.0,
     0x1.bf73671003585p-563, 0.0, 0.0, 0x1.5312f4a065d5fp-561, 0.0,
     0x1.81cb68fa3f8d6p-35, 0x1.48b4587b5052p-392, 0.0, 0x1.37a43f541be77p-885, 0.0,
     0.0, 0.0, 0x1.f6d192dfd596bp-746, 0x1.aecf960b4ff6fp-269, 0x1.8565c032f6284p-315,
     0.0, 0.0, 0.0, 0x1.1e94658c1beefp-118, 0.0, 0.0, 0.0, 0x1.2bbab4a3f5e8p-10,
     0x1.41cad49d2179bp-11, 0x1.c0a044ee6146ep-776, 0.0, 0x1.f035d52c4b0e8p-579, 0.0,
     0.0, 0.0, 0.0, 0x1.5a3f6bbb476f6p-374, 0.0, 0x1.f8812aa8de7e8p-360, 0.0,
     0x1.0dbdd85c4482bp-207, 0.0, 0x1.c0bb02d2c5ff3p-20, 0x1.8d20652b4b87fp-954,
     0x1.05a29980f25e5p-450, 0x1.b31415dd4023ap-862, 0x1.6d04f8df0177dp-607, 0.0,
     0x1.a4f6519c00ffdp-197, 0x1.5fdfce6013bbcp-5, 0x1.74881e3ee2acbp-254,
     0x1.13670d3ce5964p-179, 0x1.9ffe9655f130fp-482, 0.0, 0.0, 0.0, 0.0,
     0x1.9f729243ec235p-490, 0x1.80f4d91d1dbb3p-796, 0x1.e49b512d15054p-785, 0.0, 0.0,
     0x1.a79a78b6cb036p-697, 0.0, 0x1.0a16ad3de7a7ap-909, 0x1.e7f05bfe5c429p-631, 0.0,
     0.0, 0.0, 0.0, 0x1.8d4fe47e7dedap-502, 0.0, 0x1.77aa0463e05bep-555,
     0x1.ae517fa503587p-725, 0.0, 0x1.fe05053d0996dp-502, 0x1.ba4a32d0ceafap-534, 0.0,
     0.0, 0x1.1521ef05ec7ep-882, 0x1.0b8d3b3b4a17ep-833, 0x1.efe242114de63p-624, 0.0,
     0x1.a0a63543962abp-274, 0.0, 0.0, 0.0, 0x1.8fc4bd074c3bep-515,
     0x1.b0b811e48c82dp-632, 0x1.2d9f7e9f0938cp-706, 0.0, 0x1.2f649579635a1p-684,
     0x1.8f64446296211p-77, 0x1.f187659d45631p-828, 0.0, 0x1.de10b983ba814p-754,
     0x1.56065ee29fa5dp-247, 0.0, 0.0, 0x1.a48b8899bd864p-988, 0.0,
     0x1.ba9c50c23bd19p-445, 0.0, 0.0, 0x1.0ba3da26d6d39p-803, 0.0, 0.0, 0.0,
     0x1.b09b5dcbeb661p-667, 0x1.544dbb38715d2p-102, 0x1.dce4d2b3e116p-239,
     0x1.7d6763d71fc3cp-96, 0.0, 0.0, 0x1.3763f0fcd271ep-440, 0x1.05f56310e07cdp-366,
     0.0, 0x1.e9e836025eedp-463, 0.0, 0x1.ee572e5fc0b82p-359, 0x1.484632d8d57ep-751,
     0x1.fcab89e7c534ep-59, 0x1.40e3e9a990401p-615, 0x1.ba98365d2e784p-980, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d6adc8f7c2a56p-837, 0x1.108ae16f2892dp-159, 0.0, 0.0,
     0x1.3dcf7748e4b3bp-198, 0.0, 0.0, 0x1.e878b85b7c9b4p-443, 0x1.82f5e4b6cd2d3p-978,
     0.0, 0x1.5fc4a839cdcd3p-637, 0x1.3922440658fd7p-453, 0x1.5b2863b976e5ep-721,
     0x1.7a9fc5fc9e497p-1017, 0x1.e33efe74488d5p-58, 0x1.f22ec8ac9ecb9p-244,
     0x1.047644e88c105p-774, 0x1.89d2e4d65942ap-785, 0.0, 0x1.d2ff06c971e69p-102,
     0x1.288135cb18db8p-719, 0.0, 0x1.8c0a7be482d69p-706, 0x1.3abe4ecdfe9ffp-387,
     0x1.bf031c7ee5611p-484, 0.0, 0x1.e63eda3cc5df4p-878, 0x1.deeda997c71fdp-844,
     0x1.3e97d9c17afbdp-579, 0x1.5a4d4ad478287p-404, 0x1.7e5f9ef5d0eacp-932, 0.0, 0.0,
     0.0, 0x1.c3b287cb2ea77p-881, 0x1.a4b6c6caa415ep-542, 0.0, 0.0,
     0x1.abfcc516cc749p-373, 0x1.8616683bf9ffp-695, 0x1.5131d93510ba8p-516,
     0x1.e186ecee9fcfdp-859, 0x1.ce45e8620d327p-707, 0x1.f0c38b18d66fcp-921,
     0x1.e6f25430feca1p-133, 0x1.2073c595f5772p-946, 0x1.939ec8a0e13afp-20,
     0x1.1bc874628ea98p-519, 0x1.4d8c50045453dp-101, 0x1.71f3ca09d5633p-324, 0.0,
     0x1.662439fb219b8p-487, 0x1.9bdee60f12c4dp-775, 0.0, 0x1.d7dac25df7b52p-330, 0.0,
     0.0, 0x1.65ac9f7ffa2f4p-2, 0.0, 0x1.9110ea9a56d4bp-554, 0x1.b3b4cc8b4285ap-494,
     0.0, 0x1.93cc6c05d4b75p-699, 0x1.d55d1b7f1058fp-543, 0.0, 0.0, 0.0, 0.0,
     0x1.2f56f3776f364p-101, 0.0, 0.0, 0x1.5f5918513e003p-184, 0x1.16b14ab7e1b2fp-873,
     0.0, 0.0, 0x1.f128b20e2813cp-17, 0x1.579b17a0dcb7bp-555, 0x1.73955670baf0ep-620,
     0.0, 0x1.1072524c61885p-241, 0x1.68e79276e9b37p-119, 0x1.5f26f3beefae7p-655, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.587ef92b37cc3p-45, 0x1.52f0ce277387dp-25,
     0x1.8d6be6b0a9816p-39, 0.0, 0x1.ac91b8d2f8746p-798, 0x1.94a0e7d8d979p-511,
     0x1.378bc75c1f5e6p-42, 0x1.36735301308ccp-725, 0.0, 0x1.73bde219bca59p-789,
     0x1.eb003c9fdd351p-414, 0.0, 0.0, 0.0, 0x1.1f067664f4b72p-7,
     0x1.83930ff887394p-302, 0.0, 0x1.880254ab7d589p-736, 0x1.9a842610f3bbbp-311,
     0x1.811dba3fa30f5p-594, 0.0, 0x1.7e2dc55efaba1p-24, 0x1.f8e46cc3132ep-739, 0.0,
     0.0, 0.0, 0.0, 0x1.76ea7c865efd7p-193, 0.0, 0x1.10e3b3183da86p-302, 0.0,
     0x1.aef3391717caap-181, 0.0, 0x1.0f1ddeb6397d1p-370, 0x1.159516ab6ba6ap-705,
     0x1.126d3ffa0fb4cp-559, 0x1.dd3b07d05b039p-385, 0.0, 0x1.638fadd778212p-936, 0.0,
     0x1.3246cf6ce0f88p-570, 0.0, 0.0, 0x1.47b6e7ef75741p-310, 0x1.dcc8ef1aab223p-70,
     0.0, 0.0, 0x1.c22b376f0f2b2p-999, 0.0, 0x1.f7adf39f20b09p-364, 0.0,
     0x1.25a79d7830984p-63, 0.0, 0x1.8ca4766469f55p-537, 0.0, 0.0,
     0x1.71fa27e97ff5bp-708, 0.0, 0x1.e62613e63733dp-701, 0.0, 0.0,
     0x1.17f968a4bd20dp-430, 0.0, 0x1.523b1d0a183a3p-248, 0.0, 0.0,
     0x1.9c2d42c68c26dp-577, 0.0, 0.0, 0x1.5b0288ea68aeep-226, 0.0, 0.0, 0.0, 0.0,
     0x1.6f9119bd8993cp-1014, 0.0, 0x1.0e928bd154283p-510, 0x1.0ae07c9edf9fp-913, 0.0,
     0x1.6054a634035fp-762, 0x1.e99a45616542bp-670, 0.0, 0x1.81299588b6dcap-711, 0.0,
     0.0, 0x1.9befda91d7f5ap-738, 0x1.00e6f2e12d052p-620, 0x1.a91e5c3d06cf2p-520, 0.0,
     0x1.89415c43626c2p-996, 0x1.43c1b2a5d44f1p-28, 0x1.a5226d57d39b5p-810,
     0x1.656192c1c7f91p-63, 0.0, 0.0, 0.0, 0x1.b827c36ef9735p-23,
     0x1.eb72168491d4dp-947, 0x1.0602b44a61351p-230, 0x1.65d8a2307c0adp-425, 0.0, 0.0,
     0x1.4853d4944bfedp-1013, 0.0, 0.0, 0.0, 0x1.a6ece466b088cp-631, 0.0,
     0x1.abcb5e1f3f45cp-428, 0x1.59a94877ed7ffp-856, 0x1.4cade62ab1e63p-866, 0.0,
     0x1.6ca333bf14a3fp-176, 0.0, 0x1.3c37f0c292df3p-224, 0.0, 0x1.7fdd84eaa043dp-40,
     0.0, 0x1.e3ac152b67403p-883, 0.0, 0.0, 0x1.ebedcd90aefffp-686,
     0x1.9be20e9763fc4p-369, 0.0, 0.0, 0.0, 0x1.1d2258402bf01p-138, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8a4ac4a558cb4p-409, 0x1.294e5c00ac568p-797, 0x1.f7a12e32b14ecp-256,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17a409ea9d4ddp-863, 0.0, 0.0,
     0x1.307a87370c495p-193, 0x1.4fdcab184fe29p-329, 0x1.4e7e668d3462cp-446, 0.0, 0.0,
     0x1.5740134590a49p-889, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f055d37d94112p-425, 0x1.dd61a12b8206ep-59, 0x1.815ad075d8a47p-773, 0.0,
     0x1.b0d3dafb8b139p-49, 0x1.dd0bc10e2bad6p-943, 0.0, 0x1.8d9501d354627p-694,
     0x1.017e086997b74p-662, 0.0, 0x1.3cd2bd3a620cbp-118, 0.0, 0x1.dc8daf64fc815p-990,
     0x1.1ce2a40118d8p-570, 0.0, 0.0, 0x1.c1ab850bdf9e1p-283, 0.0, 0.0,
     0x1.cf49a66ff3cbcp-896, 0x1.ddfca9dc06507p-607, 0.0, 0.0, 0x1.4ad5cca61accfp-301,
     0.0, 0x1.de57a87df9aaep-683, 0x1.7f360c82f025fp-441, 0.0, 0x1.e46b242ba21aap-399,
     0.0, 0.0, 0x1.2466e9445c715p-569, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e2e852f648936p-852, 0.0, 0.0, 0x1.1cb4efa7981c9p-485, 0.0, 0.0, 0.0, 0.0,
     0x1.74849bd80f107p-32, 0.0, 0x1.295a2552c07bfp-487, 0.0, 0.0, 0.0,
     0x1.36c5a9f7efe8bp-529, 0.0, 0x1.4a993f42ba004p-323, 0x1.a03f8a6c481e2p-815, 0.0,
     0x1.26f8a44e6c9b6p-1019, 0.0, 0.0, 0x1.0556442d8ff3dp-585,
     0x1.dfc43f35ddc9fp-706, 0x1.345ea82abd814p-415, 0.0, 0x1.65054e1493e9dp-333,
     0x1.9e6e998b5fd9cp-198, 0x1.69cd1688cfca5p-243, 0x1.0173142f4143cp-895,
     0x1.c9820a92745cbp-226, 0x1.b330b7472bb5fp-703, 0x1.92ac22c548953p-23,
     0x1.7a804fcbd73b4p-886, 0x1.9e89e4f338987p-47, 0x1.d65b84ce21cb1p-452,
     0x1.510feda49e08dp-839, 0.0, 0.0, 0.0, 0x1.da09ccbb50d26p-755,
     0x1.6fedf8186bddfp-190, 0x1.9d5a953793522p-718, 0.0, 0x1.2de094935c6d3p-156, 0.0,
     0.0, 0.0, 0x1.4f4c21371860cp-50, 0x1.d3c886a3ff638p-809, 0.0,
     0x1.cd6692d45c08ap-326, 0x1.9275b7fef798p-721, 0.0, 0x1.ef49df1c8f202p-408,
     0x1.59060085f28a7p-638, 0.0, 0.0, 0.0, 0x1.850e2f8172267p-209,
     0x1.627df80e9dbb8p-821, 0x1.bc7fb8f867729p-468, 0.0, 0x1.255e0f40feac7p-443,
     0x1.3695be1d59f2bp-612, 0.0, 0x1.98e7e8e63d023p-962, 0x1.ee6662f3b9e83p-825, 0.0,
     0.0, 0.0, 0x1.14b3c35d96befp-608, 0x1.391c98be4ad94p-528, 0x1.41d8f3a32c81dp-599,
     0.0, 0.0, 0x1.daab007086d57p-926, 0.0, 0.0, 0x1.6a9045e788a54p-188, 0.0,
     0x1.51f1170c1c077p-30, 0.0, 0x1.c71108c0a9cc7p-297, 0x1.9a5e1157addcep-136,
     0x1.fbe0f1365829bp-134, 0x1.916b9081445cp-1004, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a3a3f3c5c1f5p-315, 0.0, 0x1.34f7ce0c5d181p-279, 0x1.205bc2330fff5p-838,
     0x1.c472d2d2a14b3p-147, 0x1.41ecf5d186bc8p-843, 0x1.bdd9563fd5851p-754, 0.0,
     0x1.7c6147bae1762p-843, 0.0, 0x1.9cd25ed04af22p-722, 0.0, 0x1.14e4105278bc8p-128,
     0.0, 0.0, 0x1.828125fde151p-980, 0.0, 0.0, 0x1.3f6f3a2807b37p-810,
     0x1.4c86fc8dee8d5p-646, 0x1.4dc0310fff173p-893, 0.0, 0.0, 0x1.f01c1ff30f196p-395,
     0x1.613fdcde5254ep-479, 0.0, 0x1.b534fbe937dd8p-900, 0.0, 0.0, 0.0, 0.0,
     0x1.275eb82a7f349p-701, 0.0, 0x1.68b6d713b3d74p-264, 0.0, 0x1.d62c5da6c103ep-822,
     0.0, 0x1.ff37ae16cc5cap-574, 0x1.8524e23e8c30cp-478, 0x1.fff88101c5ddap-778,
     0x1.9ba2a91456989p-852, 0.0, 0.0, 0.0, 0.0, 0x1.a495896712bccp-305,
     0x1.46bb32e6c0a4ap-611, 0.0, 0.0, 0.0, 0x1.3fd7818b11104p-858, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a777bb5705c5ap-921, 0.0, 0.0,
     0x1.8be186b359a3fp-562, 0x1.9731ab74dba0dp-138, 0.0, 0.0, 0x1.67300e0cf4f2bp-426,
     0.0, 0.0, 0x1.9a07e142f7de7p-160, 0x1.5a2c68d152037p-40, 0.0, 0.0, 0.0, 0.0,
     0x1.585b7b3e8542cp-625, 0.0, 0.0, 0.0, 0.0, 0x1.b9b34de3dd602p-966, 0.0,
     0x1.297718e708a59p-231, 0x1.8407c1513faa2p-633, 0.0, 0x1.552942dd5d468p-601, 0.0,
     0x1.16c12790fe46bp-486, 0x1.0c8a0b27d5c1ap-879, 0x1.9abed62212299p-737, 0.0, 0.0,
     0.0, 0x1.8855a689edb0dp-290, 0x1.108bf6493271ep-746, 0.0, 0x1.de6dd7b7415bbp-382,
     0.0, 0.0, 0x1.774b01b7ebc61p-48, 0x1.a969cce1f2f3dp-193, 0.0, 0.0,
     0x1.cad5de827c2c4p-1000, 0.0, 0x1.d2bc4c9d9782ap-51, 0.0, 0x1.9681352745f49p-863,
     0.0, 0x1.0283ef9473045p-304, 0x1.91714284bd7dep-605, 0.0, 0.0, 0.0,
     0x1.dd568ed0ba358p-377, 0x1.003d6385b1744p-466, 0.0, 0x1.89654be196989p-459, 0.0,
     0.0, 0x1.0b3ac5b764dc6p-122, 0.0, 0x1.a1423e291a2e1p-773, 0.0, 0.0, 0.0,
     0x1.daf415d0f1ccap-227, 0.0, 0.0, 0.0, 0x1.1ec8689f52cb5p-9,
     0x1.5f994125c0be1p-682, 0.0, 0x1.c1bd4abd9d763p-827, 0x1.ff79e3c2fc4cfp-572, 0.0,
     0x1.9c507056585b7p-500, 0x1.3c0470262f93ep-898, 0x1.b10f6e465d127p-876, 0.0,
     0x1.05088442a61dcp-447, 0.0, 0.0, 0.0, 0.0, 0x1.c63c8cd851734p-33
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
            tmp1 = Sleef_exp10d1_u35purecfma(tmp0);
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
    printf("Sleef_exp10d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp10d1_u35purecfma bench acc %la\n", global_bench_acc);
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
