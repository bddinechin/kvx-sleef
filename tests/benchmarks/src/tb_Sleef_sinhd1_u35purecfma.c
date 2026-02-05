/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinhd1_u35purecfma.c --function \
 *     Sleef_sinhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.51046fe55e0fcp-930, 0x1.294afcb5bccb2p-485, 0x1.70763e987e592p-551,
     0.0, 0.0, 0x1.10695b2776275p-895, 0x1.61fd5801ea40ep-96, 0x1.7e761445091d7p-30,
     0x1.650a20ac1fa8bp-548, 0.0, 0.0, 0x1.37e9ff2bfc67p-208, 0x1.2aa560e1e2d1ap-283,
     0.0, 0.0, 0x1.ce2b6d24e424p-363, 0x1.753743d94ee51p-362, 0x1.a87471cf924fap-990,
     0.0, 0x1.156efe6ad37c7p-5, 0.0, 0.0, 0.0, 0.0, 0x1.3032b0f443dc3p-321,
     0x1.ee61cfd38df94p-586, 0.0, 0x1.5354dff6b011dp-787, 0.0, 0x1.102b446ab409ep-508,
     0.0, 0x1.6d3c75a337b07p-79, 0x1.536f9e5f86adbp-12, 0x1.9c8a3919e298dp-713,
     0x1.9f4fa5f34e7c4p-72, 0x1.0fabffb3d3b22p-177, 0x1.26add38a4f0bp-661,
     0x1.9324433e327efp-241, 0x1.27fb52244fc73p-207, 0.0, 0.0, 0x1.3e71cea327a4ap-417,
     0.0, 0x1.46dbb67e3d836p-213, 0x1.6f0ab8a531833p-148, 0x1.e32d107d8fbf2p-200,
     0x1.c77e3df5e97aap-578, 0x1.0fcd5989b92f4p-441, 0.0, 0.0, 0x1.53301e6dd8f9ap-15,
     0x1.0f4aa818f067cp-232, 0.0, 0x1.8294856bfafdep-990, 0.0, 0x1.7cfac766ff005p-223,
     0x1.2253d89ba0365p-911, 0x1.a8556068d1706p-219, 0.0, 0x1.c803b7b65d8cp-815,
     0x1.738cf359bbdc1p-639, 0x1.6f1c0d2a52ec2p-229, 0.0, 0.0, 0.0, 0.0,
     0x1.3f518c83f495dp-549, 0.0, 0.0, 0.0, 0x1.ce5918f8aff21p-521,
     0x1.1c82ff1a4c23ap-963, 0.0, 0.0, 0x1.d076061c0a9b7p-74, 0x1.0f1afc8ecaf91p-928,
     0x1.293ff5ed5378dp-777, 0x1.49b29889d62b1p-322, 0.0, 0x1.375096daea352p-824, 0.0,
     0x1.12ba71a440f1cp-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b48d6e7899533p-323,
     0x1.9dda8a939cee4p-277, 0x1.ce6d96ce11881p-704, 0.0, 0.0, 0x1.4b1e57449dbe9p-200,
     0x1.80ac20aa809f1p-315, 0.0, 0x1.ab52997bb91cfp-219, 0x1.653b311da277fp-834,
     0x1.fb500f4b4290cp-315, 0.0, 0.0, 0.0, 0x1.40abc110b0636p-887, 0.0, 0.0,
     0x1.28ff6942a9fc7p-772, 0x1.ad9ed58c8138dp-650, 0x1.8c0d374d65f3ep-433, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.387f89cd7daabp-1020, 0.0,
     0x1.57f4ea1a9510ep-805, 0x1.4c7186dcf1c9cp-55, 0x1.a9bf2bf2fc7efp-1016, 0.0, 0.0,
     0.0, 0.0, 0x1.cd8fbfb08da4ep-121, 0.0, 0.0, 0x1.341a706d7228cp-523,
     0x1.011362f3729e3p-433, 0x1.840d7d45490f8p-843, 0x1.92aa4147362p-837,
     0x1.d26baf5587999p-357, 0.0, 0x1.44a7b4aec46c6p-862, 0.0, 0.0,
     0x1.02cb3848ce44ep-690, 0x1.20bb199e96c1p-598, 0.0, 0.0, 0x1.5d850ec03430ep-251,
     0.0, 0x1.532f36bd88ce3p-42, 0.0, 0x1.9c549633c00b6p-93, 0.0,
     0x1.aaf77f3ad57f5p-741, 0.0, 0x1.d2056dc42cf6dp-229, 0.0, 0x1.5fd27cf27a8c8p-831,
     0x1.da77e188bea9fp-406, 0x1.39b9bd7d18d2bp-497, 0x1.6f430b9f93556p-366, 0.0, 0.0,
     0.0, 0.0, 0x1.5c875253e0112p-938, 0x1.1455c58b18798p-24, 0.0, 0.0,
     0x1.742cb346af697p-125, 0.0, 0x1.2feec4bf907fbp-881, 0.0, 0x1.124683f109de4p-785,
     0x1.335161ced08ecp-752, 0x1.f8d9669443008p-900, 0.0, 0x1.8d14e9dea3b35p-792,
     0x1.7e267489abb02p-908, 0x1.9e13b4e38db3p-801, 0.0, 0x1.46d98f7875ac3p-261, 0.0,
     0.0, 0.0, 0x1.dbe1d7cb69c4cp-755, 0.0, 0.0, 0.0, 0.0, 0x1.5c39673f717ecp-358,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.609b6fd66a001p-709, 0.0, 0.0, 0.0, 0.0,
     0x1.ac841785956a8p-48, 0.0, 0x1.a130c802be278p-559, 0x1.6fb6048ba50abp-702, 0.0,
     0.0, 0x1.de175367d70f9p-716, 0x1.21ccf8395d443p-102, 0x1.a8d7dd38170a2p-626, 0.0,
     0.0, 0.0, 0x1.4494e53a02558p-900, 0x1.b493d6589a6cap-718, 0x1.33f3c4e0f0547p-739,
     0x1.de33f0a420c49p-415, 0.0, 0x1.9365750fd30b7p-828, 0.0, 0x1.47e120a315138p-631,
     0.0, 0.0, 0.0, 0x1.6c54dfe56f1b4p-663, 0x1.f037c421c4d67p-232,
     0x1.4f44e70c79595p-30, 0x1.cdbbeb5262099p-179, 0x1.e39ef0f9e2787p-348, 0.0, 0.0,
     0x1.8c88930f3ed1bp-747, 0x1.1ef191f0b3b41p-477, 0x1.15f76d276e95dp-930,
     0x1.9f71328137d5dp-294, 0.0, 0.0, 0.0, 0x1.3b6d6e5774afp-474,
     0x1.5d84e9f897f4cp-183, 0.0, 0x1.f3c2985e26277p-592, 0x1.d9269b3dc429ap-833, 0.0,
     0x1.990df9c8c34cap-237, 0x1.09d0766e29403p-674, 0.0, 0x1.7d86868d3d016p-1019,
     0x1.e5e5d95c74909p-489, 0.0, 0.0, 0x1.33fa4117b5e58p-137, 0.0, 0.0, 0.0, 0.0,
     0x1.79cee6ff0c57fp-22, 0x1.ca10cbed1d9a4p-563, 0x1.73608a51b49p-561,
     0x1.3b85b870ac554p-817, 0.0, 0.0, 0.0, 0x1.f3211e85dccc8p-119, 0.0,
     0x1.f0d03ab3bcb85p-133, 0x1.eaadde1e68d5ap-410, 0x1.2802190a925a3p-689, 0.0, 0.0,
     0.0, 0.0, 0x1.ab4aee7095917p-220, 0.0, 0.0, 0.0, 0.0, 0x1.bdc5c8b392964p-353,
     0x1.3eb3a7f18d78p-831, 0.0, 0.0, 0x1.19bfe5c9f6f2ep-185, 0.0, 0.0, 0.0, 0.0,
     0x1.024299eeb900bp-865, 0x1.b442acd7a0ebfp-769, 0x1.7b163e65db093p-199, 0.0, 0.0,
     0x1.4cce16868309dp-172, 0x1.145b632384c1p-582, 0.0, 0x1.dc3d604f50609p-651, 0.0,
     0x1.005df53a6483dp-112, 0.0, 0.0, 0x1.7b4e00769d57ap-575, 0x1.2846a29df6dcep-175,
     0.0, 0x1.b80699bf261f5p-529, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83c8eeaf0653cp-276,
     0x1.a7c34b2662d74p-795, 0x1.9ac60778b867ep-93, 0x1.4c5f27b8fa41p-228, 0.0,
     0x1.c9ff06e75d289p-724, 0x1.ea3ebe9f6905dp-359, 0x1.7f7ec5c1ad6c2p-73, 0.0,
     0x1.496dd99d70935p-843, 0x1.390dafa4c3ec6p-233, 0.0, 0x1.219af2a0edd1fp-809,
     0x1.756f831c836fbp-803, 0.0, 0x1.95af8f3b66d2fp-492, 0.0, 0.0, 0.0, 0.0,
     0x1.d0edb4ead8ab3p-796, 0.0, 0.0, 0.0, 0x1.89ef1b78769a2p-961,
     0x1.0021d20cce975p-511, 0x1.72d212e5d8508p-863, 0.0, 0x1.0e48c7e44fbfcp-655,
     0x1.d9999f63c94ecp-776, 0x1.ebd23271778a2p-600, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a2d005431621p-669, 0.0, 0.0, 0.0, 0x1.38793235a6705p-612, 0.0, 0.0, 0.0,
     0x1.97227f9995c6fp-949, 0.0, 0x1.9878d75a868d8p-183, 0x1.8aa73e902ddbep-272, 0.0,
     0.0, 0x1.33990b482030dp-218, 0x1.d52700ca97adfp-961, 0x1.1e2897e1bbe61p-577, 0.0,
     0.0, 0x1.53d74a4754b0ap-559, 0.0, 0.0, 0x1.18e0b00475b54p-66,
     0x1.41cd24f0e113cp-628, 0.0, 0x1.f04ead9674815p-772, 0.0, 0.0,
     0x1.dc8b101bc7e0cp-289, 0x1.d85c0263020bdp-286, 0x1.c1da9387cc638p-651, 0.0, 0.0,
     0.0, 0.0, 0x1.dc3b0de6f75e1p-60, 0x1.37e28b1a67741p-911, 0x1.6c1370861f77dp-444,
     0.0, 0.0, 0x1.97d9e19617a5bp-880, 0x1.8c088a4c9e71ap-18, 0x1.e5f3d4761aa46p-2,
     0x1.5e7be7e6a5df9p-781, 0.0, 0x1.8f9b5587b951ep-2, 0x1.ea8b8ffec99e5p-69, 0.0,
     0x1.2440876500156p-752, 0.0, 0x1.e7e4b82d72478p-347, 0.0, 0x1.fafb68a7ce502p-175,
     0.0, 0x1.2c6bbda882015p-664, 0x1.4fce91d9e308cp-696, 0.0, 0x1.ad4b7abd70ce1p-318,
     0.0, 0x1.0c2a87239796dp-218, 0x1.802b6f0bce0afp-413, 0x1.018176620f45ep-551,
     0x1.5d64e26f194a8p-693, 0x1.d076fa2bf627fp-310, 0.0, 0x1.7d5113b036742p-72, 0.0,
     0x1.c6ae1bfe7e91bp-813, 0x1.01cc70e95829cp-336, 0x1.49bb15280d8b5p-66, 0.0, 0.0,
     0.0, 0x1.ba22d7efe8df5p-181, 0x1.de72d8e2298ffp-307, 0.0, 0x1.f26e8de470437p-502,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a10c2a4e6693ep-676, 0x1.01809a89a1542p-296, 0.0,
     0x1.f72817c988788p-611, 0.0, 0x1.e26beef5dcd29p-74, 0.0, 0x1.e55d1a2b22bb2p-702,
     0x1.a725807f9792fp-691, 0x1.16f38ae1f65ccp-312, 0.0, 0x1.ccb6781b5c34cp-211,
     0x1.2ffa2b969bd8bp-863, 0.0, 0.0, 0.0, 0x1.036a87406c79p-806,
     0x1.11ac209354b44p-117, 0x1.a790b93eee6c1p-716, 0x1.5f5fbe32061eap-274,
     0x1.9b0ea8e1c1ef7p-621, 0x1.848e5dd5db2dcp-96, 0.0, 0.0, 0.0,
     0x1.8e11c5d8d9c71p-294, 0.0, 0x1.073812f5f2c4fp-168, 0.0, 0x1.bf2b111a52f53p-767,
     0.0, 0.0, 0.0, 0.0, 0x1.3ccc14acb0025p-172, 0x1.7a05517a7f439p-103,
     0x1.91a2d417d2569p-950, 0.0, 0.0, 0x1.93b40c6b5c0f3p-534, 0.0,
     0x1.a88a0504d081dp-1013, 0x1.b2371a10ff7c3p-258, 0x1.14fd758aeaaefp-322,
     0x1.94292487a3209p-449, 0x1.fe8c0fe340f9ep-223, 0x1.351e37b99c3a6p-484, 0.0,
     0x1.450256f0efc7fp-1000, 0x1.eb56a4c710728p-221, 0x1.1c96913fb9f0dp-766, 0.0,
     0.0, 0x1.80fd89817eab4p-862, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c46ca1e2daf25p-498,
     0.0, 0x1.960ceceaa2991p-293, 0.0, 0x1.5bdb814d8bdf6p-124, 0.0,
     0x1.1faf07bdfc9fcp-79, 0x1.7b07fd0e85d5bp-147, 0.0, 0.0, 0x1.37db9bc564eadp-280,
     0.0, 0x1.2336c2cfa97ep-886, 0.0, 0.0, 0.0, 0x1.ead2ac992326fp-499,
     0x1.645afdc826b98p-686, 0.0, 0.0, 0x1.f1d747f6f7e0ap-846, 0x1.627673b3d2d19p-195,
     0.0, 0x1.edb559bfb012fp-1015, 0.0, 0x1.f023c2f8b23b9p-337, 0x1.c3a56dff6c514p-95,
     0x1.f19cc90e8ad6p-966, 0.0, 0x1.e2423a2408c09p-581, 0x1.99983ce64b935p-407,
     0x1.4d592bc408758p-869, 0x1.ddd21f8835826p-215, 0.0, 0x1.592a5843397fep-874, 0.0,
     0x1.e343220d0107p-980, 0x1.bb0795548c6b6p-155, 0x1.6d0575f4c6f47p-903, 0.0,
     0x1.0177160625c21p-324, 0x1.3b3a32968a1e3p-401, 0x1.fbc90debe0379p-977,
     0x1.491c71e34090fp-28, 0x1.0f09c8386cc4bp-36, 0x1.e47a3cbdd3788p-585,
     0x1.49759b63327dep-936, 0x1.07c148d31e604p-981, 0x1.59d994e8599c6p-374, 0.0, 0.0,
     0.0, 0.0, 0x1.cefe9fd8fe216p-247, 0x1.0ac1a2b2fc76bp-314, 0.0, 0.0, 0.0, 0.0,
     0x1.d50f3605fdc59p-589, 0x1.071a8757a5c6dp-492, 0.0, 0x1.dc7d16e812008p-125,
     0x1.20e73b5a054e2p-728, 0.0, 0x1.8211db752a4c4p-398, 0.0, 0.0, 0.0, 0.0,
     0x1.f70d8782e212dp-115, 0x1.3d8a4ba47a8b4p-738, 0x1.43e468ed67235p-667,
     0x1.2ebc3644756f5p-671, 0.0, 0.0, 0x1.080d139d2658fp-613, 0.0, 0.0,
     0x1.b7ce14f9337dp-948, 0x1.77d1f7e037de4p-203, 0.0, 0x1.d92e9615d24b2p-921, 0.0,
     0x1.3a8b07bcfc52ep-600, 0.0, 0.0, 0x1.e4dbef17081cap-537, 0.0, 0.0, 0.0,
     0x1.67ae7047afc0ap-416, 0x1.68f3e3de95eb9p-337, 0x1.6ca303d9b735dp-155,
     0x1.52e889725281dp-110, 0x1.54d0df3d7c2bep-94, 0x1.13b071d77b93ap-15, 0.0,
     0x1.ebf972619d219p-889, 0.0, 0.0, 0x1.57a992e95ab6fp-660, 0.0,
     0x1.9409a99533d27p-256, 0.0, 0x1.4ff7043c04e16p-42, 0x1.e2a2d0c98557ap-974,
     0x1.77a0a94f98196p-816, 0.0, 0x1.c3cf3b34ede84p-432, 0.0, 0.0,
     0x1.97d10f38e343bp-129, 0.0, 0x1.a306c9b7581e1p-749, 0.0, 0x1.a2efae2e9b9bap-494,
     0x1.1c7b71834a575p-825, 0.0, 0x1.13963e8849ebfp-841, 0.0, 0x1.d02aa9752c232p-376,
     0.0, 0x1.473dddb72cdf7p-740, 0.0, 0x1.f80641c3e0524p-73, 0.0,
     0x1.b6c197a15e0dbp-690, 0x1.a8b004d7e7f33p-254, 0x1.d69812f47d813p-548, 0.0,
     0x1.531d19db2207ap-694, 0.0, 0.0, 0x1.83931423564f9p-960, 0.0, 0.0,
     0x1.7de526f6bb7b9p-70, 0.0, 0.0, 0x1.e3cdaeccedc5dp-600, 0x1.b3f1bc64f5ef3p-530,
     0x1.5346221669c7bp-436, 0.0, 0.0, 0x1.2b4320a87f60cp-481, 0x1.80b9d5bccf769p-628,
     0x1.e8d24a2427557p-42, 0x1.1236545931b41p-426, 0.0, 0.0, 0x1.5a0ad9f25ed35p-73,
     0x1.9d3139a4e9c16p-530, 0x1.a45e7864c59d7p-417, 0.0, 0.0, 0x1.4c897bd146861p-53,
     0x1.a13b0a1d9cf7cp-702, 0.0, 0x1.32b1b07a7f4c4p-725, 0x1.9c50d0cc123f7p-812, 0.0,
     0.0, 0x1.857b62d28ee22p-298, 0x1.b7e42c1fcefeep-9, 0.0, 0.0, 0.0,
     0x1.cf566af52c44dp-762, 0.0, 0x1.b90415be59338p-303, 0x1.3288faab71734p-423, 0.0,
     0.0, 0.0, 0x1.e1c2addf2dd93p-272, 0x1.1f95fabaf18efp-527, 0.0, 0.0,
     0x1.160d2368961cbp-455, 0.0, 0.0, 0x1.bc20df368e169p-734, 0.0,
     0x1.91b1493e370e5p-268, 0x1.7d18dbb260115p-479, 0.0, 0.0, 0.0,
     0x1.04e8e6ce37c2fp-153, 0.0, 0.0, 0.0, 0.0, 0x1.fe88983fe3f91p-981, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.aa5396d58504ep-678, 0x1.2b05d52bb2ce3p-650, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a1cf2e18b55b2p-877, 0x1.20ad759f902e1p-827, 0.0,
     0x1.003dfbe7645cbp-883, 0x1.5266ffa66fc6fp-437, 0x1.ae1e41fa5b25dp-463, 0.0,
     0x1.fe5b234abab84p-651, 0.0, 0.0, 0x1.3c64635899a5dp-711, 0x1.6fbae2e72f0e8p-484,
     0x1.5716d4c62fa5p-441, 0.0, 0.0, 0x1.cab1121e50e7cp-799, 0.0, 0.0, 0.0, 0.0,
     0x1.2845770b9ba85p-874, 0.0, 0.0, 0.0, 0.0, 0x1.3f57ef2e4523bp-456,
     0x1.6275c6f9b313fp-45, 0.0, 0x1.21552d59c2e21p-609, 0x1.99da6441754b6p-624, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.74ed6b86fdfccp-150, 0x1.95dd476f6663dp-793,
     0x1.5cd6feb78ed23p-246, 0.0, 0.0, 0.0, 0x1.f51e579c1d1f5p-7, 0.0,
     0x1.1ff1e3bf1ebe9p-145, 0.0, 0x1.5b2d528eac0b1p-489, 0x1.574ad6c913bd2p-368, 0.0,
     0x1.527e4e6292c7dp-108, 0x1.95ef02e78e241p-81, 0.0, 0.0, 0x1.683bcb4b8df58p-955,
     0.0, 0x1.41a6a5fc99b8cp-634, 0.0, 0.0, 0x1.756155a02bc89p-610, 0.0, 0.0,
     0x1.3f9fa00b84012p-937, 0x1.fe38c997ba043p-851, 0.0, 0x1.f1fd0c13a9ac3p-650,
     0x1.d70052e57af1bp-461, 0.0, 0x1.9f1f4b926adeap-723, 0x1.655a34b4ebb62p-385,
     0x1.6401748c3e361p-766, 0x1.019bbc7b3178bp-622, 0.0, 0.0, 0x1.1e2838bacc76bp-777,
     0.0, 0x1.94f7fdd9492c2p-392, 0.0, 0x1.b52220c3822abp-497, 0x1.c3416dcd284c1p-928,
     0.0, 0x1.7dba03deba499p-587, 0x1.4605f26a1f685p-203, 0.0, 0.0,
     0x1.24df1e7f37e4ap-764, 0x1.c245efb486aeep-485, 0x1.7908718c60bep-156, 0.0, 0.0,
     0.0, 0x1.ebc5890371b62p-100, 0x1.71293013ce2abp-218, 0x1.f926f86c7f2efp-719,
     0x1.2f0f06abd5346p-80, 0x1.44c70c58e8592p-96, 0x1.252c5b7111311p-170, 0.0,
     0x1.9a8b6cfd78294p-163, 0.0, 0x1p0, 0.0, 0x1.f86a1676c3de1p-368, 0.0, 0.0,
     0x1.0b83d31391008p-995, 0x1.37b9ff8b6239fp-948, 0.0, 0x1.979d828ca9ccfp-395, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.74b2e86da2d28p-20, 0.0, 0.0, 0x1.0c2fc008b4562p-495, 0.0,
     0.0, 0.0, 0x1.62fb20d1961ebp-334, 0x1.8c832ff0740fep-617, 0x1.10c0e5265c803p-901,
     0x1.e075944662b54p-928, 0x1.f2ba26d0d3399p-270, 0.0, 0.0, 0.0, 0.0,
     0x1.e14795655720ep-59, 0x1.b5323bcb2183dp-224, 0.0, 0x1.46f3e25bef293p-935,
     0x1.5f0378462bcfbp-81, 0x1.290f4d0197959p-867, 0.0, 0x1.2b3ef3ea7de8ap-458,
     0x1.783837c100a08p-618, 0x1.3c2b76b958f9fp-779, 0.0, 0x1.6daa6c6627301p-139,
     0x1.a1f8d25097ac1p-740, 0.0, 0.0, 0x1.837efe21005f1p-191, 0.0,
     0x1.d8731b5e25e51p-781, 0.0, 0.0, 0x1.600e032081ac5p-3, 0.0, 0.0,
     0x1.1dee91e225fb9p-924, 0x1.c529364f6c3fcp-447, 0.0, 0.0, 0.0,
     0x1.e12a4bc9fa109p-16, 0.0, 0x1.275d360ceca16p-180, 0x1.2aa80a5e4258ep-775, 0.0,
     0.0, 0.0, 0x1.8b812718babdcp-84, 0.0, 0x1.45fd08aab1614p-273,
     0x1.cfbeee57062e5p-742, 0.0, 0.0, 0x1.7dfabfb45af4dp-996, 0.0, 0.0,
     0x1.8748da2fdc541p-943, 0.0, 0x1.9e4699b29e041p-325, 0x1.aee6d4d780074p-446, 0.0,
     0x1.7d4bbfd59142fp-273, 0x1.7c569097f0fb6p-462, 0x1.62c0c5e515b23p-878,
     0x1.f30adb9136012p-530, 0x1.22814066e0e9dp-566, 0.0, 0x1.6992c1d0234a6p-218,
     0x1.0979414624e02p-954, 0x1.b9c99b0f12ef9p-436, 0.0, 0.0, 0x1.d452505154665p-270,
     0.0, 0x1.36de8b7366b92p-905, 0.0, 0x1.65bccc3ad7a55p-1007,
     0x1.697fa5bb5bccdp-784, 0x1.aa25c55122ea7p-448, 0.0, 0x1.e74e781171408p-335,
     0x1.6adeb2a7c9ad1p-290, 0x1.9776a776f474dp-661, 0.0, 0.0, 0.0, 0.0,
     0x1.00727d70c0ce5p-856, 0.0, 0x1.3d73659189f4cp-386, 0.0, 0x1.2a73ef6176e8fp-731,
     0x1.9d1868d558247p-529, 0x1.2d42795c0a7d1p-892, 0.0, 0x1.53b2a47bcd90fp-679,
     0x1.53e43058ce79p-413, 0x1.5fb6855ca66bep-650, 0x1.6028ef395dc81p-285, 0.0,
     0x1.4c579c6495cffp-386, 0.0, 0x1.140d6efbcef4dp-847, 0.0, 0.0,
     0x1.c23bbdab93806p-262, 0x1.91131dfb7c1cfp-854, 0x1.01f0816491b5p-296,
     0x1.2291a9a722113p-437, 0.0, 0x1.a683fd07f6723p-883, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.26aa5eed99876p-1010, 0x1.a9d493066f87cp-803, 0.0,
     0x1.f0e6a6526f4ebp-702, 0.0, 0.0, 0.0, 0x1.a50fda8db5d4fp-560, 0.0, 0.0, 0.0,
     0x1.6ac7306aa35c2p-548, 0x1.a0724dee3b8c9p-454, 0.0, 0x1.0e8b17438cda5p-729,
     0x1.b9d2daa012b95p-28, 0.0, 0.0, 0x1.2a60078904b61p-342, 0x1.5d13894ed20afp-938,
     0x1.da9af64c13d55p-371, 0.0, 0.0, 0.0, 0x1.c6b32bc0cd92ap-1018,
     0x1.3d1597216e9dp-837, 0.0, 0.0, 0.0, 0x1.d77210605526ep-1019,
     0x1.a3673b723ca1p-990, 0.0, 0.0, 0x1.f37fc669ccf01p-347, 0x1.d56d83411cdbcp-790,
     0x1.c09d5b3c892bep-48, 0.0, 0.0, 0.0, 0x1.7cd364426fc1p-112,
     0x1.cc87f4af74563p-418, 0x1.d3513cea8af64p-857, 0x1.839bb49daddc8p-699,
     0x1.ab0f78a1d8f3p-309, 0.0, 0.0, 0x1.66180a4493f25p-283, 0.0,
     0x1.4d0f8ebd35dap-253, 0.0, 0.0, 0.0, 0.0, 0x1.b40a288fb5811p-356, 0.0,
     0x1.a764b3d94628ep-981, 0.0, 0x1.8b4afaf346f88p-920, 0.0, 0x1.d8fee11f05d66p-548,
     0.0, 0x1.c72a1cbb2f84fp-984, 0x1.f30b4d5c921e6p-333, 0.0, 0x1.a10d2e35e5932p-861,
     0x1.677cd515901ffp-190, 0.0, 0.0, 0.0, 0x1.535bccfd8c005p-42, 0.0, 0.0,
     0x1.b25e8f9cd0783p-823, 0.0, 0x1.71a7b7ef0a35cp-318, 0x1.b33a355ecda9p-509, 0.0,
     0x1.aef6b13d7a912p-309, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_sinhd1_u35purecfma(tmp0);
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
    printf("Sleef_sinhd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
