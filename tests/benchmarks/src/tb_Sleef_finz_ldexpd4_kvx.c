/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ldexpd4_kvx.c --function Sleef_finz_ldexpd4_kvx \
 *     --arity 2 --headers sleef.h,ml_support_lib.h --input-formats \
 *     binary64,int32 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.f8c58efaa80f6p-670, 0x1.632db6b273b84p-878, 0x1.06e641c059497p-883, 0.0,
     0.0, 0.0, 0x1.17eed6bd2b1adp-973, 0.0, 0.0, 0x1.5158edbe86592p-155, 0.0, 0.0,
     0x1.e9c5d74a5119fp-290, 0.0, 0x1.a652de897555dp-758, 0.0, 0.0,
     0x1.5ebb3a8cc30c7p-957, 0x1.0edaccecd29dep-750, 0.0, 0x1.4ed428ee228bfp-64,
     0x1.42d47b8867bf3p-10, 0x1.6bc8f898a0e34p-22, 0.0, 0.0, 0.0,
     0x1.ebd8a93e5569bp-124, 0.0, 0.0, 0.0, 0x1.1db072a9f52f9p-914, 0.0,
     0x1.9f25de728e03ap-237, 0.0, 0.0, 0x1.2ff01131f5d1ap-430, 0x1.100e1bcf748a2p-634,
     0.0, 0.0, 0x1.9df23a91a6a47p-180, 0.0, 0.0, 0x1.97615e9a322aep-206,
     0x1.282674ac46396p-14, 0.0, 0.0, 0.0, 0x1.c1503440061fap-382,
     0x1.f1079ae28f1cep-331, 0x1.73f61197188c4p-879, 0x1.c131674ab7c32p-854,
     0x1.9e72f0d3d4309p-582, 0x1.511099735e698p-586, 0x1.1088a2b1958a3p-320, 0.0, 0.0,
     0x1.5940e608f2c5dp-663, 0x1.12d8895d1e0bbp-305, 0.0, 0x1.20cb480301babp-493,
     0x1.57b1f1568813ep-581, 0x1.5ea821338b863p-575, 0.0, 0x1.296f44e7cf9ccp-870,
     0x1.15206800fcb28p-650, 0x1.5011049c11a7fp-461, 0x1.ce93dc1b8a67ep-153, 0.0, 0.0,
     0.0, 0x1.8b0d2724fd828p-302, 0.0, 0x1.eb2d48f31c119p-810, 0.0, 0.0, 0.0, 0.0,
     0x1.1e1355572b2e4p-966, 0x1.7a11156ac2bf6p-243, 0.0, 0x1.e2e8d7b04521dp-360, 0.0,
     0x1.042cfa3d21092p-930, 0x1.ad3f9e75fe54bp-777, 0.0, 0.0, 0x1.89a13f2596b1p-206,
     0x1.66f62e9fad9f2p-399, 0x1.f4aef0717d36p-303, 0.0, 0x1.19d1e098fbbbap-153,
     0x1.05bcbdfeb93f7p-141, 0x1.df61285fcbb5p-814, 0.0, 0x1.1c8f3afd49bbdp-193,
     0x1.d987a0acd616dp-109, 0x1.064117d52e328p-306, 0.0, 0.0, 0x1.396f43f7bb0b8p-614,
     0x1.9e4e40ae2f38p-582, 0.0, 0x1.c4d1bb4388799p-1016, 0x1.8723cd3b24fbep-828, 0.0,
     0.0, 0.0, 0x1.c64b9c1c7b71ap-323, 0.0, 0.0, 0.0, 0x1.424ea0e4f45bap-860, 0.0,
     0.0, 0x1.d931620ccd6adp-52, 0.0, 0.0, 0x1.6a7868ffcbdacp-195, 0.0,
     0x1.b192aa8acbf73p-913, 0.0, 0.0, 0.0, 0.0, 0x1.f3a39748b0f1ep-601, 0.0,
     0x1.67d5da8b5d751p-472, 0x1.f8868810f56fcp-676, 0x1.fee1a6c77b9cep-799, 0.0,
     0x1.fccf06c3c3fe2p-667, 0.0, 0.0, 0.0, 0x1.1efc308361e42p-827, 0.0, 0.0,
     0x1.310bfd0917251p-607, 0x1.7082e43bcbdb5p-552, 0x1.c3e5c6873cab8p-413,
     0x1.089400d2a0edbp-427, 0x1.be8ad87b205bcp-101, 0x1.05bea15510722p-453,
     0x1.def675872db5bp-910, 0x1.b6859a43d8677p-990, 0.0, 0x1.4771fe80d1901p-382, 0.0,
     0.0, 0x1.b2e273e3d9ef7p-571, 0.0, 0x1.d1d75ddf2261ap-468, 0.0, 0.0, 0.0,
     0x1.a69095e57a11ap-351, 0x1.da5ee3c3ba80bp-341, 0.0, 0.0, 0.0,
     0x1.210907a304d73p-693, 0x1.b5f439bf7019bp-582, 0.0, 0x1.675ee7c40b077p-321, 0.0,
     0.0, 0.0, 0.0, 0x1.7660392d21495p-129, 0.0, 0x1.93f50f326f0d8p-632, 0.0,
     0x1.1188742b9a7f4p-616, 0x1.d8f28f9031d9dp-292, 0.0, 0.0, 0x1.00874b57d6042p-217,
     0x1.61d7da7e759a8p-226, 0x1.30b48eef1bfcap-396, 0.0, 0.0, 0x1.ce51c5c7766b1p-17,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3830f6c7585cp-791, 0.0, 0x1.868b45ff25a7ep-174,
     0.0, 0.0, 0.0, 0.0, 0x1.17c8950424666p-821, 0.0, 0x1.d6fc277127094p-97, 0.0, 0.0,
     0x1.e5a4b85b3119cp-635, 0x1.7e9584ab7e051p-64, 0x1.43f4df8c7e7ddp-260,
     0x1.917ae26298a36p-775, 0.0, 0x1.e85dc8cc8eb7bp-815, 0.0, 0.0, 0.0,
     0x1.1bf59b62a1142p-204, 0.0, 0x1.f51956d9cd3f3p-4, 0x1.cc9773b64c6fbp-30,
     0x1.e342e1cefd698p-694, 0x1.e9243dd3cc6e6p-849, 0x1.7b3b08a7ace5ep-648,
     0x1.19dae36de67e9p-147, 0x1.99be6f9880f86p-440, 0x1.fe6e6a545239p-214,
     0x1.2a39af64afa1ep-609, 0.0, 0.0, 0x1.87f4738633382p-676, 0x1.2fb10ffce58bcp-576,
     0.0, 0x1.91085491561aep-873, 0.0, 0.0, 0.0, 0x1.c81c389f6d955p-217,
     0x1.474a885938b09p-991, 0x1.3b4ce4c034b81p-692, 0.0, 0.0, 0.0,
     0x1.3ed59dc88a8ffp-381, 0x1.250b8e1c983d8p-395, 0x1.f905bde9c0dc1p-992, 0.0,
     0x1.0473665916f62p-772, 0.0, 0x1.99ec61d84b1d5p-934, 0.0, 0x1.6fa2eb6443701p-385,
     0x1.79a0aeff1c7e4p-36, 0x1.075f727522cf5p-509, 0.0, 0.0, 0.0,
     0x1.bb1369db9d2bp-163, 0.0, 0x1.18fc99a06c448p-43, 0x1.03883465336ap-812, 0.0,
     0.0, 0x1.e65d9d894fca4p-862, 0.0, 0.0, 0.0, 0x1.c35fc82cc1de8p-908,
     0x1.dd38c0b695b3bp-467, 0x1.db7d364fef90cp-965, 0.0, 0x1.c9f87125e1fddp-873,
     0x1.07c6db1f214eep-157, 0x1.4008ebd308f31p-838, 0.0, 0.0, 0.0,
     0x1.72b565e1a5954p-517, 0.0, 0.0, 0.0, 0.0, 0x1.e53cbb54ec292p-762,
     0x1.1a73ac0101183p-241, 0.0, 0x1.e3906c2e3b2dfp-48, 0.0, 0x1.6713c3309692bp-697,
     0x1.e93f3f4067ff8p-858, 0x1.066fd2b1e99d8p-515, 0x1.d32df424f41f3p-401,
     0x1.6425e88c4d4edp-318, 0.0, 0x1.8f9edb177b252p-132, 0.0, 0x1.7a997af90b76bp-628,
     0x1.293d25939ed24p-968, 0x1.fd4242146b341p-477, 0.0, 0.0, 0.0,
     0x1.c57646ce3687dp-419, 0x1.249a352c0b6f6p-592, 0x1.189a165c45cdap-234,
     0x1.b4b8b3a6ddd23p-606, 0x1.8947d2711654bp-1006, 0x1.ae87273c20e63p-767,
     0x1.dc2c821e7fc8cp-778, 0.0, 0.0, 0x1.09dbac8f2090fp-751, 0x1.40918d266c996p-149,
     0.0, 0x1.299dd07b2124cp-498, 0.0, 0x1.154a3df522a17p-1013, 0.0,
     0x1.94f97a6ac7d5bp-604, 0.0, 0x1.3c2ba7d70b68ep-208, 0x1.f8fa0f34601d4p-202, 0.0,
     0x1.61e6dfa71ff6dp-223, 0x1.ca4801dd3ceaap-551, 0.0, 0x1.eef42c910f338p-425,
     0x1.50ea23aeef60ep-333, 0x1.28299af977e0cp-54, 0.0, 0x1.5cd264208bd3dp-4, 0.0,
     0.0, 0x1.48593657a82eap-435, 0.0, 0x1.bf1dace4bf0dfp-80, 0x1.2c74b6f76ad5ep-322,
     0.0, 0x1.3119c28482f19p-841, 0x1.2504a979523c5p-968, 0.0, 0.0, 0.0,
     0x1.7e7c4f61f8b9p-958, 0x1.7a1df7e524a1fp-616, 0x1.9c52f7772fd4cp-315, 0.0, 0.0,
     0x1.666d18f62dd0ap-432, 0x1.5bfaf909d3483p-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e9ba204bedeb8p-856, 0x1.91117d0571cfep-842,
     0x1.1ea898e4dac9ap-317, 0x1.eddff163c6ee5p-726, 0x1.5d13fb892bbecp-408, 0.0,
     0x1.0c46d2a3f7639p-446, 0x1.ab5b5b7b5fbcbp-483, 0.0, 0.0, 0.0, 0.0,
     0x1.a5d08cfe09a0cp-697, 0x1.a5ba0cc439c89p-848, 0.0, 0.0, 0x1.300357043de45p-341,
     0.0, 0x1.ce8c55f4ba631p-448, 0x1.d1e05f662eadcp-512, 0.0, 0x1.dbab044eb1aa9p-798,
     0.0, 0.0, 0.0, 0x1.d41c86c936801p-778, 0.0, 0x1.6d810d908381cp-115, 0.0, 0.0,
     0.0, 0x1.ae7b849fbb716p-280, 0x1.d535ca9b5eb3ap-586, 0x1.b822dbefbb6dep-111, 0.0,
     0x1.01589ad73722ep-158, 0x1.ad7bbfa7076bdp-520, 0x1.2600bf10e9adap-518,
     0x1.1c8e9f1d0de43p-263, 0x1.c98cba96b7ebdp-136, 0x1.80890cd25f37cp-645, 0.0,
     0x1.6c7b64225b131p-824, 0.0, 0x1.180bd4956eba5p-13, 0.0, 0x1.7d7d7e0281125p-80,
     0.0, 0.0, 0x1.d4bc5a4004ad1p-508, 0x1.4cc865b86f8dp-730, 0x1.c0db9c8726043p-4,
     0x1.312d9fdb02eadp-960, 0x1.886332fa39e39p-309, 0x1.6d816c558f77p-285,
     0x1.049681b58e065p-379, 0.0, 0x1.96b45d686c644p-754, 0x1.e9b01b1e09983p-257,
     0x1.b14c1993fafcep-179, 0.0, 0.0, 0x1.0f19089133a19p-184, 0.0,
     0x1.a6889e98d8b7dp-176, 0.0, 0.0, 0x1.ec23669c7e35cp-901, 0.0,
     0x1.7ba3a3d8ade98p-951, 0x1.a32d46f0e141fp-149, 0.0, 0.0, 0x1.f2e008bcd4cf2p-256,
     0.0, 0.0, 0x1.a49ee15507267p-1006, 0.0, 0.0, 0.0, 0.0, 0x1.0cce3ddbfd8f2p-996,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66dea9febbf1p-379, 0.0, 0x1.7479f2b3cc3b3p-962, 0.0,
     0x1.7bcf8f31a1fp-76, 0.0, 0x1.bdba9b73ee168p-109, 0.0, 0x1.848e6e121299cp-550,
     0.0, 0.0, 0x1.4bd79cf93f416p-282, 0x1.14c1e3c640421p-194, 0.0,
     0x1.947a789f3ac02p-452, 0.0, 0.0, 0x1.c3a8eef96a81fp-432, 0x1.e184072809c98p-27,
     0x1.4828b76b397c1p-386, 0x1.6cbae1cd9cff7p-971, 0.0, 0.0, 0x1.afc8f6cf208dp-636,
     0.0, 0x1.c3b6ac05009a3p-665, 0x1.f5ef7c488857ep-1013, 0.0, 0.0,
     0x1.871d39557d229p-256, 0.0, 0x1.3b5b3adbb4b38p-118, 0.0, 0.0, 0.0, 0.0,
     0x1.103128ff4b66p-670, 0.0, 0x1.7cf1b21866b57p-38, 0.0, 0x1.55a6b9de1469p-701,
     0.0, 0.0, 0.0, 0x1.5c17c2e99a62cp-338, 0.0, 0x1.d71fd60313651p-705, 0.0, 0.0,
     0.0, 0x1.691d0dfaf94f4p-347, 0x1.e571fe6c29c82p-690, 0.0, 0x1.e049772245654p-977,
     0x1.5fac0f2b14078p-785, 0.0, 0x1.dd00b036bef68p-632, 0.0, 0.0, 0.0, 0.0,
     0x1.592ba8ee9ab61p-184, 0.0, 0.0, 0x1.bceef0df09dep-31, 0x1.df15d0b4d2ad1p-678,
     0.0, 0x1.dfc32617d6af4p-895, 0x1.d8f70fb8b2d4fp-533, 0x1.f1f9da65af7dp-94, 0.0,
     0x1.3b04997a04a81p-459, 0x1.a49e35077652p-251, 0x1.939969a9b92c8p-219, 0.0,
     0x1.244fec81a9eb5p-222, 0.0, 0x1.80cf903c4c713p-126, 0x1.dd12e074a50b6p-1017,
     0x1.e9aba43e5125p-157, 0x1.bbadf54efdf7fp-307, 0x1.b38690ab40c8p-636,
     0x1.f8adf844dc30cp-64, 0x1.86ad6a48d671dp-365, 0.0, 0.0, 0x1.86317868b0c42p-761,
     0x1.8ebf4cdb4a646p-742, 0x1.af9f8dafd5d78p-393, 0x1.4d3bd7583b1f1p-103, 0.0,
     0x1.718defd17e5bep-762, 0x1.b5b877a9f6712p-32, 0.0, 0x1.2bb522b045101p-259,
     0x1.c0f19a845daa4p-678, 0x1.d83c51d10fbfep-886, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.badf7a627f2cbp-315, 0x1.1f2be643626e4p-907, 0.0, 0.0, 0.0,
     0x1.59c4090251cb4p-665, 0x1.3700ae7b16fdap-827, 0.0, 0x1.9485636097e8ep-884,
     0x1.2ee12fd780699p-1006, 0.0, 0x1.5fa3cae854511p-304, 0.0, 0.0,
     0x1.2c111e13d0d34p-902, 0.0, 0x1.d8ba2eda1d43p-436, 0.0, 0x1.440441b1b2c4dp-283,
     0x1.93b207cc9756ep-888, 0.0, 0.0, 0x1.8f71f6a6c3f94p-400, 0x1.269bf23d00c52p-433,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90ccb5aab73b7p-925, 0x1.7d49bfd151d68p-280, 0.0,
     0.0, 0x1.22f10cf9ce31dp-243, 0.0, 0x1.f93928d057494p-129, 0x1.7a309902afe8dp-182,
     0x1.7b68346044d5cp-267, 0x1.b62780248f32ap-464, 0x1.5d7f58a06cb54p-838,
     0x1.c5c1df1805aa3p-167, 0.0, 0x1.acdc7e514aa55p-534, 0.0, 0.0,
     0x1.5e5858e4311e6p-996, 0.0, 0.0, 0.0, 0.0, 0x1.ce0bc9e553327p-793, 0.0,
     0x1.505d5d060b724p-113, 0x1.3783e81f5b553p-649, 0.0, 0.0, 0.0,
     0x1.438cd834566e3p-947, 0x1.1119e72328ea4p-886, 0x1.d229870710b04p-148, 0.0,
     0x1.44b1fd203503ap-467, 0x1.f3a7769f4f566p-164, 0x1.0ff2d97bcf3abp-162, 0.0,
     0x1.bb296eff5339dp-928, 0x1.4f64406717997p-83, 0.0, 0x1.4d01b32581306p-516,
     0x1.dc92055b48255p-507, 0x1.cfa75737aade4p-934, 0x1.6060ca7fef611p-400, 0.0, 0.0,
     0.0, 0x1.69ec7a0d8801fp-309, 0.0, 0.0, 0x1.94e52eb04d8fdp-65, 0.0,
     0x1.8cb077f07bc72p-626, 0x1.7600cc1f5097fp-282, 0x1.7aea6d5147c2ap-159,
     0x1.52de81d41434fp-1009, 0.0, 0x1.4af7bad79b5cap-921, 0x1.f12850a81387ep-788,
     0x1.4a43e1115c209p-99, 0.0, 0x1.63ca4a6e5671ap-169, 0x1.72c646ae297b9p-56,
     0x1.5578292122a43p-788, 0x1.da1fe8c6f3698p-514, 0.0, 0.0, 0.0,
     0x1.6a655963441e9p-558, 0.0, 0.0, 0x1.774f04e2d7f06p-51, 0.0,
     0x1.688579e8f9897p-623, 0.0, 0x1.7ab7577feb1f9p-186, 0.0, 0x1.96dfa82e05f71p-255,
     0.0, 0.0, 0x1.33e32df7f8fddp-741, 0x1.64fec1592159cp-305, 0.0, 0.0, 0.0, 0.0,
     0x1.d3d415b2b754ap-970, 0x1.f4eeb2381cfdp-381, 0.0, 0x1.e699551c25de1p-474,
     0x1.d58a4a037b2d7p-766, 0.0, 0.0, 0.0, 0.0, 0x1.e4b237a2b2a42p-426,
     0x1.58c24973e37e3p-719, 0x1.92e5798d9e295p-686, 0.0, 0x1.5a8d61ee6819ap-737, 0.0,
     0x1.b245619856f85p-139, 0.0, 0.0, 0x1.f0ef3ec97a37p-379, 0.0,
     0x1.3ba831046179p-877, 0x1.7f1c90ff81155p-472, 0.0, 0x1.d6034a115e8fcp-632, 0.0,
     0.0, 0x1.2588836624d71p-875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a1c1056fa10ap-715, 0x1.e7789a9e88a1ap-81, 0.0, 0.0, 0.0,
     0x1.37e477c5a8879p-132, 0.0, 0.0, 0.0, 0x1.cb154af26f393p-762,
     0x1.975e6d96fc36ap-961, 0x1.cf26461cff9dfp-953, 0x1.e0b2b70956afap-909, 0.0, 0.0,
     0x1.981c73dfc1833p-274, 0x1.21a27727a98dfp-128, 0.0, 0x1.f90f3ac4ff228p-995,
     0x1.aa0a5495e963fp-278, 0.0, 0.0, 0x1.902f13c655135p-268, 0x1.edc2a474f1d13p-62,
     0x1.1d47813ef79abp-527, 0.0, 0x1.e1a4b8c951239p-157, 0.0, 0.0,
     0x1.de90205083836p-593, 0x1.8246c513510ep-780, 0x1.8944cc282b6d2p-140,
     0x1.949a6a473d1e1p-560, 0.0, 0x1.edaebf5f2398p-608, 0x1.b4ffb5f3884a7p-713, 0.0,
     0.0, 0.0, 0x1.22d3ba1febfb8p-318, 0.0, 0.0, 0x1.9b72f030fbed3p-561, 0.0, 0.0,
     0x1.da1868921c1b6p-562, 0.0, 0.0, 0x1.07fafc86b9ec2p-243, 0.0, 0.0,
     0x1.807c13678bee8p-297, 0.0, 0x1.6e488b1cf324cp-873, 0x1.26e644eed620ap-741, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.017445d242c8cp-336, 0.0, 0x1.ab352711949f2p-998,
     0x1.e4fee525b9c62p-111, 0x1.bf9864f310816p-632, 0x1.5c97a47a40e16p-290, 0.0, 0.0,
     0x1.025a617a9ecd8p-723, 0x1.f67531c2b0bafp-334, 0x1.bacd663b3578bp-825, 0.0, 0.0,
     0x1.841900ca0eb28p-640, 0.0, 0.0, 0x1.a9a8809e94265p-510, 0x1.52556a66e3439p-746,
     0.0, 0x1.1ee3226d1d457p-994, 0x1.6a22d22671a32p-563, 0.0, 0x1.0998d7e8abb18p-731,
     0.0, 0.0, 0.0, 0x1.a2d93d089e584p-1008, 0.0, 0.0, 0x1.6f5679335ba47p-313, 0.0,
     0x1.416b4fad7c979p-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c36e06564096ap-630,
     0x1.47394be7c9cbdp-185, 0.0, 0.0, 0x1.69ae4fff6cbc9p-492, 0.0,
     0x1.504ca0f43fd16p-135, 0x1.1dcb45db8cacbp-96, 0.0, 0x1.e8f02fbe41b34p-839, 0.0,
     0.0, 0.0, 0x1.e5b4cc355da51p-291, 0x1.f1fa364845b0cp-592, 0.0,
     0x1.49409d2b31b86p-427, 0.0, 0x1.2336d1f126f5cp-439, 0.0, 0.0, 0.0,
     0x1.6b927b5d3989cp-730, 0.0, 0x1.bb0c25a113bp-704, 0x1.3b62d6fe70cd5p-459, 0.0,
     0.0, 0.0, 0x1.6c46112927666p-254, 0.0, 0.0, 0.0, 0x1.ee3a6936eb37ap-767, 0.0,
     0x1.9fdc6cf2f3278p-646, 0.0, 0.0, 0x1.df792771e5f36p-87, 0.0,
     0x1.94caeb5552281p-23, 0.0, 0.0, 0.0, 0x1.88099e50397aap-932,
     0x1.197d1dd9381a4p-192, 0.0, 0.0, 0.0, 0x1.98a77971b940fp-455,
     0x1.53cd4f93f6f6p-805, 0.0, 0x1.eb8d203db6194p-561, 0x1.5562a827f26eap-461, 0.0,
     0.0, 0x1.f5f7a31c41c64p-575, 0x1.7bd32fb362f5dp-862, 0.0, 0.0,
     0x1.80b01a7d499acp-151, 0x1.86a92c78620d9p-383, 0x1.d6952b5a91de4p-976,
     0x1.cee16b13555bap-18, 0.0, 0x1.be83936120fd6p-786, 0.0, 0.0, 0.0,
     0x1.58886a55240e8p-128, 0x1.307b95ac0f599p-576, 0.0, 0x1.8d63309473873p-320,
     0x1.fab29207b3f03p-945, 0x1.4073581a82c8cp-680, 0.0, 0x1.d108f6f994f6dp-256,
     0x1.13580e5e6c3c4p-113, 0x1.8cf605a149ccbp-627, 0x1.4183467b599c9p-715, 0.0,
     0x1.fd52aeb4561f4p-973, 0.0, 0.0, 0x1.7c9c4ca7c9423p-754, 0.0, 0.0, 0.0,
     0x1.ad37b5872cd64p-382, 0x1.dd27baa59778p-853, 0x1.03b2ca5d1d15p-830,
     0x1.ccb8ab544b4ddp-109, 0x1.661c3ed27bd82p-250, 0.0, 0x1.a756f1751de26p-666, 0.0,
     0x1.e415c602b16d9p-33, 0x1.848ce8c5dca9dp-604, 0.0, 0.0, 0x1.c6a5aa13f2ecep-582,
     0.0, 0.0, 0.0, 0x1.fba88ee09bb09p-715, 0x1.3dd024cbdc83bp-676, 0.0,
     0x1.78cc5f2aba57ap-324, 0.0, 0.0, 0.0, 0x1.fdf0f4f751234p-497, 0.0, 0.0,
     0x1.7561f41eddb9ep-442, 0.0, 0x1.da11471445764p-557, 0x1.6548519d1ec4fp-823, 0.0,
     0x1.6d5fe2812d441p-393, 0x1.67894da63e04bp-29, 0.0, 0.0, 0.0,
     0x1.f634c0523253dp-450, 0x1.386642e58205cp-287, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2247ac3dea974p-160, 0x1.51f94e6199fecp-913, 0.0, 0x1.31f9306768ffcp-120, 0.0,
     0.0, 0x1.0e8a329cbd493p-277, 0x1.99b8d8d0feb98p-196, 0x1.55d6cc6a070fdp-84,
     0x1.5c6f17ee4f549p-386, 0.0, 0.0, 0x1.2c7c6206fa0c3p-19, 0x1.3f6fce99fb36bp-482,
     0x1.cbf8cf6d8e134p-857, 0.0, 0x1.81520387b0516p-234, 0x1.fde3d7f99237dp-85,
     0x1.bb4194fdfd4ap-618, 0x1.8a4d801859868p-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e51008af4b1dp-398, 0x1.a5be56481399bp-890, 0.0, 0x1.564e3a54f843ep-431,
     0x1.2b91437b03ba2p-394, 0x1.5760849ff7313p-740, 0.0, 0.0, 0x1.66bdd15871625p-549,
     0.0, 0x1.c7d8203724375p-445, 0x1.e6de8f861a5d2p-234, 0x1.a1d21edda162ep-1019,
     0.0, 0.0, 0x1.dbc908e754b25p-101, 0.0, 0.0, 0x1.9caf507a7be7bp-761,
     0x1.1be47552dcabep-60, 0x1.ac6a09a288e9cp-602, 0x1.eaa18e3201382p-830,
     0x1.2a7b35f0e7ecp-971, 0.0, 0.0, 0x1.d3f2dd382dc44p-320, 0.0,
     0x1.f9bf3a8cc5ff8p-321, 0.0, 0x1.f4a71d962ba24p-94, 0x1.27dc8ee7d4f34p-767,
     0x1.ffb54159866ebp-513, 0.0, 0x1.423c2d9d0c337p-593, 0.0, 0.0,
     0x1.ef728ce6ca4a4p-902, 0x1.dbdf84f920f91p-918, 0x1.e2d0335fe8d31p-122,
     0x1.b99330944cfd1p-654, 0x1.08aa886d30aeep-216, 0x1.0bc7cd97d83a5p-811,
     0x1.b8e2f7cf14334p-301, 0.0, 0.0, 0x1.1875d29781871p-517, 0x1.2531e91e8dbd4p-190,
     0x1.8c5736e6448e6p-691, 0x1.bc4b09e602b8dp-194, 0.0, 0.0, 0.0,
     0x1.fbf3d6add6911p-979, 0.0, 0.0, 0x1.206918776ac34p-657, 0.0,
     0x1.2fe93ac8f58cp-378, 0x1.b7c715fc6ddebp-825
};
static const int32_t external_bench_wrapper_input_table_arg1[1004]  = {
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1)
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
            ml_int4_t tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            int32_t tmp4;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            memcpy(&tmp1, ((ml_int4_t*)(external_bench_wrapper_input_table_arg1+ i)), 16);
            tmp2 = Sleef_finz_ldexpd4_kvx(tmp0, tmp1);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp2), 32);
            tmp3 = local_acc + tmp2;
            local_acc = tmp3;
            tmp4 = i + INT32_C(4);
            i = tmp4;
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
    printf("Sleef_finz_ldexpd4_kvx %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_ldexpd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
