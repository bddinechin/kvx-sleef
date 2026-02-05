/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floord2_kvx.c --function Sleef_floord2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.83477f662c17ap-208, 0.0, 0.0, 0.0, 0x1.f28e568d92ccdp-981,
     0x1.fc8181e6cfbb5p-1004, 0.0, 0x1.9d9729c6705b6p-218, 0x1.b14b7954e3da1p-805,
     0.0, 0.0, 0x1.86e012e5cea86p-572, 0x1.b516e5c4b56e1p-823, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.422a14e178cc6p-490, 0x1.2766b9e9bedaap-140, 0.0, 0.0,
     0x1.f7ece48f07875p-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.225ea71c9ed5p-92,
     0x1.9e1c76682a5cdp-391, 0.0, 0x1.6de578483637p-883, 0x1.2a5b2efc27c76p-516, 0.0,
     0.0, 0.0, 0.0, 0x1.d9b5c6895965dp-649, 0.0, 0x1.acf94f9c2776bp-879, 0.0, 0.0,
     0.0, 0x1.b8d1ebadbcae3p-478, 0x1.364751469a5f4p-455, 0x1.77e7cad2af605p-649, 0.0,
     0x1.2964c4b0dfaf1p-475, 0.0, 0.0, 0x1.f23c47b618becp-562, 0x1.d075281063b8ap-785,
     0x1.3e1f295225a44p-193, 0x1.3a47b467f4f3p-693, 0.0, 0x1.4574ca7432e0bp-645,
     0x1.7e8ee896f602ap-653, 0.0, 0x1.3db16cf22bd91p-962, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b0ec48f2c893p-897, 0.0, 0x1.fc3dcf49d1f44p-960, 0x1.b781a487013f5p-613,
     0x1.76450cd305d9bp-690, 0.0, 0x1.d294be1be9b54p-824, 0.0, 0x1.6be9af154e1a1p-85,
     0.0, 0.0, 0x1.899c5c7763987p-970, 0.0, 0.0, 0.0, 0x1.c84185ce7bb3ep-991,
     0x1.60c0d559c8028p-21, 0.0, 0.0, 0x1.38e2e48a9de25p-184, 0.0,
     0x1.a93f9c030218ap-405, 0.0, 0x1.c26c5d24fee3bp-748, 0x1.3844d6928900fp-294, 0.0,
     0.0, 0x1.21c7f82b3aa7bp-948, 0x1.dd85386a58c29p-877, 0.0, 0x1.91f61ea9cdc92p-152,
     0.0, 0x1.392d20fcfa4e5p-579, 0x1.fe92adfddf0d2p-487, 0x1.af09e00d6c85fp-489,
     0x1.c6eb95bbdcd57p-1001, 0x1.538366a4a8357p-36, 0x1.3a59e972451dfp-361,
     0x1.58565289c262ep-864, 0.0, 0x1.8472796bb201fp-523, 0x1.c1207d22bdd4bp-52, 0.0,
     0x1.e986d0eadfb3p-712, 0x1.1874acbc7f4d9p-1004, 0x1.28f2ddffe5035p-931,
     0x1.5d0d02549dd43p-539, 0.0, 0x1.5904780062087p-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.926219836ae64p-661, 0x1.a27d72bcd075dp-60, 0x1.a7c5785be2d1fp-564, 0.0, 0.0,
     0x1.209c53e915486p-868, 0x1.5d065dd5abebfp-733, 0x1.05cca297868a3p-837,
     0x1.baca960f15b2ap-906, 0x1.8e796fbe4611dp-823, 0.0, 0x1.616044fb14f6dp-209,
     0x1.7dc5b4e389f43p-751, 0.0, 0.0, 0x1.8906afad6ec55p-747, 0.0, 0x1p0, 0.0,
     0x1.2b9f1b97c3a38p-886, 0x1.a97ee9990e4a8p-488, 0.0, 0x1.cb68d68876713p-172,
     0x1.f208a6cd51d9ep-261, 0.0, 0x1.746c0ba7df307p-974, 0x1.ea8823db20d67p-777,
     0x1.1d7e7f0e0251ep-670, 0.0, 0x1.3bce07f24486dp-303, 0x1.f646081131dd9p-941, 0.0,
     0x1.f8311a41471cap-563, 0x1.3e36b75e1d6efp-956, 0x1.b424352f212bap-230,
     0x1.bd3a0f371fe1ep-554, 0x1.091a50eccb47ep-624, 0.0, 0x1.82c112811d488p-638, 0.0,
     0x1.5a90d26c4fda2p-792, 0.0, 0x1.d6d4f8e94a4d9p-368, 0.0, 0x1.c16eab4ab3a1cp-745,
     0.0, 0.0, 0x1.efa99da7afba1p-29, 0x1.b3c1c26055556p-85, 0.0, 0.0, 0.0,
     0x1.f524c07115506p-638, 0x1.ebded9727bf55p-693, 0.0, 0x1.6dea8a3ce8e58p-389, 0.0,
     0x1.537780d502793p-761, 0.0, 0.0, 0.0, 0.0, 0x1.3d3489caf38e8p-461, 0.0,
     0x1.c1e5a68710b34p-833, 0.0, 0.0, 0.0, 0x1.15933043238ep-852,
     0x1.5d020794eedecp-230, 0x1.363d9d5abb642p-872, 0x1.80f221395748bp-624,
     0x1.9a8e09edfe44cp-987, 0.0, 0x1.608254f37079bp-800, 0x1.0e4244fd01c3ep-630, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f5d63d524d71p-248, 0.0,
     0x1.6011e5397f427p-745, 0.0, 0.0, 0x1.449fc49db1c34p-915, 0.0,
     0x1.524e682f08f9cp-350, 0.0, 0x1.d2b798ce8109p-296, 0x1.842a4fc3f349fp-397, 0.0,
     0x1.4995e7f910445p-1017, 0x1.a4e5bfcf668eap-422, 0x1.e5e30d3cb0b0dp-610, 0.0,
     0.0, 0.0, 0x1.fb5dc0ef07a9p-126, 0x1.b767299b80301p-988, 0x1.b5deb00df0b72p-416,
     0x1.929ea39cf55f1p-165, 0.0, 0.0, 0x1.6546a23000044p-285, 0.0,
     0x1.af58dcae822a8p-193, 0.0, 0.0, 0.0, 0x1.b65fe5bb3c4bdp-503,
     0x1.c78cc671fa591p-499, 0x1.c98edb5552feap-502, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.666dd52c35e53p-48, 0.0, 0x1.94ed7a4a7042p-453, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.36943d16c8f18p-803, 0x1.af08b1e80e653p-980, 0x1.a67df1bf2e8bdp-652, 0.0,
     0x1.1ffc967761577p-791, 0.0, 0x1.68f1f6a8bdb91p-899, 0x1.ca420bc9be73ep-474,
     0x1.b63f0a451a30ep-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e6cee065a19ap-391,
     0.0, 0.0, 0x1.c556cde523c24p-207, 0x1.901fae1e36334p-719, 0x1.42bd0f3902337p-166,
     0.0, 0x1.45d2b32f67256p-501, 0x1.dd47b174b3e3bp-490, 0.0, 0.0, 0.0, 0.0,
     0x1.00efbea087862p-983, 0x1.b8a3118c78e36p-1014, 0.0, 0.0,
     0x1.34f3faa2b3475p-472, 0x1.8551be640af19p-464, 0.0, 0x1.9e3339ee57f4cp-780, 0.0,
     0.0, 0x1.88ce4d83f444p-19, 0x1.0732e3f7f53c2p-192, 0.0, 0x1.d53801aa8723ep-322,
     0x1.57801ade91666p-970, 0x1.7cff1999ed23cp-798, 0x1.a8d998eb09875p-632, 0.0, 0.0,
     0x1.94a4e997b001dp-734, 0x1.1bbb615fd4732p-420, 0.0, 0x1.e689a4d78e93cp-109,
     0x1.4bdc0e4e35046p-379, 0x1.e3cbd4e84f14fp-237, 0x1.c6e752fd735d4p-891, 0.0,
     0x1.9e288b5217917p-137, 0x1.f5a73cbfc1918p-825, 0x1.f2b344e58b365p-781, 0.0,
     0x1.c2a17758972fp-232, 0.0, 0.0, 0x1.327c181951dfp-960, 0x1.5d37c0ceed31ep-527,
     0x1.fa8a21ae1cb8p-302, 0.0, 0x1.8cd68beb70d79p-845, 0.0, 0x1.5fc49e1866785p-180,
     0.0, 0x1.7c55add70712ap-505, 0.0, 0x1.3329e323de8c8p-681, 0x1.a6686f04f25e3p-965,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7634e226951cp-655, 0x1.5cc23ace88bc3p-338,
     0.0, 0x1.b57783a377fdbp-552, 0x1.8f27962d5bfe3p-666, 0.0, 0x1.33430d880eaa8p-76,
     0.0, 0.0, 0.0, 0x1.454d8536fc63p-710, 0x1.899b121721698p-683,
     0x1.59adbf12bb49p-50, 0x1.18dc1b90c26d4p-619, 0x1.33a4728fddfa9p-701, 0.0, 0.0,
     0x1.2aecb13eeb71fp-274, 0.0, 0x1.6e6fc81a5bd51p-704, 0.0, 0x1.483ba6346263dp-94,
     0x1.08eb4a4d0ec64p-985, 0x1.ceeccf786eddfp-142, 0x1.f9077bb0cfcacp-885,
     0x1.418df5db848c1p-453, 0x1.ea313ee97928bp-500, 0.0, 0x1.6ed8d31c971ccp-705,
     0x1.a749698faadebp-137, 0.0, 0.0, 0x1.0d021ef32b9afp-780, 0x1.8d3578fee4e6dp-229,
     0x1.926b79722413fp-129, 0.0, 0.0, 0x1.8bb8e345f6f87p-836, 0x1.90c8330e4bb5ep-880,
     0x1.c70b9ba7bd41ap-353, 0.0, 0x1.8d13d7a451928p-706, 0.0, 0.0, 0.0, 0.0,
     0x1.b2ceb9bd6e2d7p-755, 0.0, 0.0, 0x1.6b1f917306864p-813, 0x1.4b9e923d529e6p-390,
     0.0, 0x1.2e80050453b96p-538, 0.0, 0.0, 0x1.e066bc3befe9p-445, 0.0,
     0x1.640d0fc953fecp-765, 0x1.793ea1ea7be95p-349, 0x1.55c3ea642bb19p-815,
     0x1.a53bb8ef81cddp-1017, 0x1.40151be2be31ep-469, 0x1.6f3cf029c517ap-970,
     0x1.b806f81bbb4f1p-236, 0x1.738ac06aaa51p-94, 0x1.d985e2a506a42p-685,
     0x1.13e74eeb7ed05p-567, 0x1.b6a44a2c20efdp-794, 0x1.ead66bf8a433dp-344, 0.0,
     0x1.09eafe1e326c4p-929, 0.0, 0x1.281ca0ba128abp-199, 0.0, 0.0, 0.0, 0.0,
     0x1.3ec1e9232c463p-26, 0.0, 0.0, 0x1.31c837da2d017p-101, 0x1.2b3309e068b03p-661,
     0.0, 0x1.2e769bc84b378p-287, 0.0, 0x1.48c1c6e471e8cp-896, 0.0,
     0x1.cf1a69db7870dp-370, 0.0, 0.0, 0x1.5c1c66316c7b9p-588, 0.0,
     0x1.a419fb97be7bep-836, 0.0, 0.0, 0x1.efbb42cd3f673p-508, 0.0,
     0x1.26a26ee7d6f19p-956, 0x1.61ae9c9502f0ap-720, 0x1.21af6d181b03p-358,
     0x1.08785da461edp-729, 0x1.9d67c2d3468ap-1007, 0x1.971a9c443a0e1p-161,
     0x1.5b82bed082ff1p-120, 0.0, 0x1.a71fa47c93efbp-749, 0x1.9ac914375b1e3p-30, 0.0,
     0.0, 0.0, 0x1.ee04a524d8221p-242, 0x1.dd2ed91f5b1b2p-627, 0x1.b616f9f5ed81ap-277,
     0.0, 0.0, 0.0, 0x1.b4e3d80bca884p-243, 0x1.87ac7d67dbffdp-578,
     0x1.5043d15283098p-674, 0.0, 0.0, 0x1.2ff5aa162b28cp-907, 0x1.1aa6cad04dd52p-882,
     0.0, 0x1.efb03eaebfca9p-478, 0x1.074861db8eb16p-45, 0x1.d088310fced47p-248,
     0x1.2ce7eb1026fp-32, 0x1.708e058130efap-149, 0.0, 0.0, 0.0,
     0x1.a228c13e8cd6bp-950, 0.0, 0.0, 0x1.63cde2ea95e78p-820, 0x1p0, 0.0,
     0x1.d3345890960d2p-213, 0.0, 0.0, 0x1.286786d3958d6p-952, 0x1.f0b7329bb4177p-394,
     0x1.e9e1bc4df9c73p-178, 0x1.b28b5f22646ddp-435, 0x1.b1f8098680227p-531, 0.0,
     0x1.ade52f3080179p-370, 0x1.93cfed0272d8dp-193, 0x1.f6d6b9387d5c5p-860,
     0x1.08a7bd11aec7p-700, 0.0, 0.0, 0x1.877ede328c5b8p-159, 0x1.8a9b00e88ab6cp-500,
     0.0, 0.0, 0x1.3a0c65afde077p-253, 0.0, 0x1.b26518c113decp-583, 0.0,
     0x1.39c339cde687p-895, 0.0, 0x1.6c51db062c827p-813, 0.0, 0x1.e4033a6c837f4p-502,
     0x1.c1e3631edff4ap-474, 0x1.e79fdbb8e10f7p-410, 0x1.031e2935d2384p-166,
     0x1.22eb2f25d9c06p-632, 0x1.598b8bc25148fp-869, 0x1.c532c5006e268p-453, 0.0,
     0x1.e94823cb478e3p-267, 0x1.4c4bee4b35df4p-785, 0.0, 0.0, 0.0,
     0x1.686675ccac4a7p-667, 0.0, 0.0, 0.0, 0.0, 0x1.819b2c052cc05p-385, 0.0, 0.0,
     0.0, 0.0, 0x1.5c46d030fff77p-90, 0.0, 0x1.7d8fdfce97773p-161,
     0x1.9ee1a325d021ep-177, 0.0, 0x1.46c6b53201bddp-82, 0x1.1a35ca6f84c32p-109,
     0x1.25b26574fce26p-296, 0x1.8d21dc0b2a984p-105, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.53d363f538cdcp-747, 0x1.f8c0588e10964p-192, 0.0, 0x1.c5590016b2feep-536,
     0x1.5e731166b454ep-158, 0.0, 0x1.59cc32e645d7dp-53, 0.0, 0x1.46de656aa4599p-603,
     0x1.baec33b0d9e9dp-586, 0x1.6c6c1ef61ec6cp-138, 0.0, 0x1.9b38b95a96562p-628,
     0x1.19059942b4a1ep-904, 0.0, 0x1.9a560ceb56704p-216, 0x1.721ffe3a9f6f1p-68, 0.0,
     0.0, 0.0, 0x1.1a51df7d2e596p-236, 0x1.27ffdcde41ad1p-311, 0x1.f0988c1e4e6aap-390,
     0x1.2bbd8614399f9p-790, 0x1.0882b77315ec7p-331, 0x1.95dde31d3a141p-506,
     0x1.fc18c1453f81dp-140, 0.0, 0x1.5da6a1f58ab48p-306, 0x1.5fadd0e6cef7dp-909, 0.0,
     0x1.d04ed2d2fb706p-362, 0.0, 0x1.a57b75caa5e58p-93, 0x1.fdee6d33afd1ap-678,
     0x1.d99a3b6d561b2p-194, 0.0, 0x1.41d27d326ed91p-9, 0.0, 0x1.ace42b9c2523ap-230,
     0.0, 0.0, 0x1.13228e2683d86p-544, 0x1.0857ba416a27ep-79, 0.0,
     0x1.44d69a7b82d3fp-134, 0.0, 0.0, 0x1.1c8174a49aa05p-748, 0x1.5871e2e2cc8f3p-516,
     0.0, 0.0, 0x1.e5cf4bb3a8625p-568, 0.0, 0x1.8415d0849150dp-869,
     0x1.fe64878c59982p-810, 0.0, 0.0, 0x1.fcd52893f7225p-25, 0.0, 0.0,
     0x1.ddec4405ebb6cp-369, 0.0, 0.0, 0.0, 0.0, 0x1.f8bec22f1f135p-638, 0.0, 0.0,
     0x1.3632e39abc22p-336, 0.0, 0x1.a8dca9801eabep-398, 0x1.395e1575c2f7fp-374,
     0x1.857e7d1748248p-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93b2669aa4ddcp-58, 0x1.b27d1d9fa181fp-907, 0x1.7378184c3adc9p-4, 0.0,
     0x1.a34656ce0d66ap-236, 0x1.7d1660c4c890cp-591, 0.0, 0x1.16570bf2dd973p-237, 0.0,
     0.0, 0x1.c06ca312571dcp-615, 0.0, 0x1.aafb9cd25d378p-700, 0.0,
     0x1.9ebf4ffc2b814p-1008, 0x1.f854e21f45c19p-270, 0.0, 0x1.0af722682d08ap-263,
     0x1.f9f47a2a6764ep-33, 0x1.7da60cbdeba1ap-328, 0.0, 0x1.260ef598383f1p-256,
     0x1.fa37e9353844ap-923, 0x1.98a1f0e4caa6p-775, 0.0, 0.0, 0.0,
     0x1.8251064303abbp-781, 0.0, 0x1.fdcccf3aa7ef8p-496, 0.0, 0.0, 0.0,
     0x1.06a7311ee60efp-814, 0x1.0fb0064ffe19cp-143, 0.0, 0.0, 0x1.72477722845c8p-454,
     0.0, 0.0, 0x1.8ffffabde5edfp-636, 0.0, 0.0, 0x1.0af8bf907ddbfp-235,
     0x1.a8211a049e6d7p-777, 0x1.055bbfdb6a515p-511, 0.0, 0x1.b0fbef83dd87cp-627,
     0x1.ada27cca301e5p-98, 0x1.df033e6a3e14dp-506, 0x1.344396591176fp-473, 0.0,
     0x1.251312bc20858p-103, 0x1.9bf2cda094c9bp-120, 0.0, 0x1.e956b2a307d09p-353, 0.0,
     0.0, 0x1.a94050af5d55bp-866, 0x1.eb6c01811df7cp-776, 0x1.603a1ff223256p-168, 0.0,
     0x1.a7a65400aa76ap-47, 0x1.1e0d2d07f4d64p-476, 0x1.d5e6602d1e5d2p-446,
     0x1.a5e804b68115dp-301, 0.0, 0x1.3eebbe4c41a4dp-969, 0x1.67cf0e8d5dd6dp-847, 0.0,
     0.0, 0.0, 0x1.e7b32588bab17p-838, 0.0, 0.0, 0.0, 0x1.a4b3c41a71755p-132,
     0x1.b66d21f951a21p-509, 0x1.742413624ea4p-891, 0.0, 0x1.7d43c1a8f016bp-630,
     0x1.78afa90a464fbp-260, 0x1.6816050fc921bp-759, 0x1.0a2107460a805p-529, 0.0,
     0x1.04c019391dfe3p-292, 0.0, 0.0, 0x1.1623ff64b889fp-151, 0x1.bc4745420f221p-360,
     0.0, 0x1.ed38bbc5f0c5p-151, 0x1.ec6bb6d6a6917p-200, 0.0, 0x1.61185b13c6f33p-588,
     0x1.d40e3a56d7beep-868, 0.0, 0x1.3308e4b6d254ap-313, 0x1.5b156b0a95375p-24,
     0x1.ef3434f173241p-991, 0.0, 0.0, 0.0, 0x1.12f65c26159ffp-764,
     0x1.e1d546ee7f00ep-147, 0.0, 0x1.fcadfe3d94b92p-316, 0x1.fd5b7a1a22e1ep-969,
     0x1.0a4e42aa6b303p-6, 0.0, 0x1.caf69106c192ap-286, 0.0, 0.0, 0.0, 0.0,
     0x1.416dcd9afc912p-289, 0.0, 0.0, 0.0, 0.0, 0x1.b0a752937587bp-961,
     0x1.3d8ce455a5fa8p-283, 0x1.fbd6a3baee377p-556, 0x1.ce67dc9908b38p-676, 0.0,
     0x1.9b37db8994308p-377, 0.0, 0.0, 0.0, 0x1.8650a3176e919p-887,
     0x1.d192d4223a19dp-590, 0x1.14726400032b6p-918, 0.0, 0.0, 0x1.080169756db49p-251,
     0.0, 0x1.9ea074ececdfbp-15, 0x1.05cf9898f4ff1p-84, 0.0, 0.0,
     0x1.8d96d13b4f9acp-716, 0x1.c909e5ec10ad9p-845, 0.0, 0.0, 0.0,
     0x1.e97a2a772ad7cp-562, 0.0, 0x1.7b961d1199cf4p-195, 0x1.f47d53bb7b96cp-984,
     0x1.c8c7190b0e939p-707, 0x1.acb511349edc9p-715, 0.0, 0.0, 0x1.931604d65bd5cp-572,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69748825271c9p-929, 0.0, 0x1.b98a800b1d48fp-116,
     0.0, 0x1.8b2aed465913ap-875, 0.0, 0x1.75f6bbc0aabd4p-746, 0.0,
     0x1.bbbd9be724b0bp-312, 0x1.10778aa6a6e76p-89, 0x1.0d0babd2adde8p-366,
     0x1.284131098cccfp-859, 0.0, 0x1.00f3faf0161f9p-598, 0.0, 0.0,
     0x1.305547208b654p-614, 0.0, 0x1.39367b80799b6p-544, 0.0, 0x1.ba66b5a93884ap-172,
     0.0, 0x1.c981502a66ff6p-625, 0.0, 0.0, 0x1.f8094c8382b83p-341, 0.0, 0.0,
     0x1.0dd2a310184e8p-332, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e40598b8b742p-855,
     0.0, 0.0, 0x1.d4aa071550b2ep-779, 0.0, 0x1.46596740ce4c6p-528, 0.0, 0.0,
     0x1.402412d47b96bp-97, 0x1.877d8c60fbf6ep-420, 0x1.481deb5a5b18cp-822, 0.0, 0.0,
     0x1.d1b9a6cc3e6ddp-124, 0x1.3b4a2049a31c8p-721, 0x1.1d649bbc25c4dp-684, 0.0, 0.0,
     0x1.587da7fe349acp-1001, 0x1.6da34ffc4f11bp-824, 0x1.2f5b56824b79cp-375,
     0x1.606e1f30c1a5dp-870, 0x1.3c8ce9933e6cp-979, 0.0, 0.0, 0x1.6abcdd860406ep-505,
     0x1.8caf096e93d53p-812, 0.0, 0x1.ca0c7ff989cf3p-178, 0.0, 0x1.123fbfe4958dep-664,
     0x1.9b3fe637526aap-503, 0x1.f33c287f1e716p-230, 0x1.0417cf298a57bp-518, 0.0,
     0x1.1a11ff551704dp-50, 0x1.40a1b3ed41c6fp-414, 0.0, 0x1.92656fe6801edp-259, 0.0,
     0x1.134c7621636fbp-81, 0.0, 0.0, 0x1.c79c701113bf1p-452, 0x1.d839ece4e01fcp-514,
     0x1.4ef42dd861d5cp-844, 0.0, 0x1.dadd3d892a5f7p-262, 0x1.a40337a2a68f1p-349,
     0x1.0416eeae7d80bp-489, 0.0, 0x1.86e0cff1daedep-362, 0x1.793450e2b7915p-513,
     0x1.493aebdd40a59p-216, 0x1.145a11d06864ep-529, 0x1.6dc40d76baf9ap-896,
     0x1.c022ee93330abp-93, 0x1.9819d27602e27p-490, 0.0, 0x1.a8a03cbae482p-807, 0.0,
     0.0, 0.0, 0x1.fb98b55ce49e6p-402, 0.0, 0x1.37cb721223c5ap-748,
     0x1.953ceb8c99154p-33, 0x1.8dc231f90ed3dp-371, 0x1.b41a2304ea546p-396, 0.0,
     0x1.e87dc66bc01ap-646, 0x1.338e716986a03p-208, 0x1.a321e17a1e71ep-315, 0.0, 0.0,
     0x1.f8c5b0142c388p-869, 0.0, 0x1.6ec21b06396edp-134, 0.0, 0x1.74e87c6a2b4aap-793,
     0x1.aa1a8f99e98aep-266, 0.0, 0x1.4ddd68c0f46d8p-293, 0.0, 0.0,
     0x1.242db1f99ff12p-511, 0x1.80fff7c6d03e3p-249, 0.0, 0x1.d42775eb095fdp-931, 0.0,
     0x1.1822d8f9450e4p-921, 0x1.29fb6b94b1915p-282, 0.0, 0x1.1ed42dd636925p-563,
     0x1.b91e95337ff24p-813, 0.0, 0x1.6e7477f9fc326p-685, 0x1.519abbd40ce77p-770,
     0x1.c757dd3371a6bp-767, 0.0, 0.0, 0x1.c3d9714cfd7d4p-833, 0x1.1b4b1691e9ea3p-530,
     0x1.a12a81d3678e2p-242, 0x1.3719b51b955p-331, 0.0, 0.0, 0x1.bd1fb51887fefp-833,
     0x1.78594718c1ce2p-912, 0.0, 0x1.5539b4fd43964p-1002, 0.0, 0.0,
     0x1.e00631f8f2e41p-239, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c3d5914fda5cp-765,
     0x1.2846ed49f64f7p-8, 0.0, 0x1.02a2666a273c5p-614, 0x1.f8401ff2d9f89p-343, 0.0,
     0x1.5bfb7a8fb38ep-854, 0x1.88fc4d5325074p-960, 0.0, 0.0, 0.0, 0.0,
     0x1.c9e66b21a51cp-786, 0.0, 0.0, 0x1.51c043d1fda16p-1001, 0.0, 0.0,
     0x1.a8f56c3051a6p-962, 0x1.cdbe2f6628c6cp-679, 0x1.830e9332622aep-989,
     0x1.77703e82008f4p-736, 0x1.1fa2adb92bf5ap-375, 0.0, 0.0, 0x1.3cfeaf8bd966ep-399,
     0.0, 0.0, 0.0, 0x1.12c9c844de203p-1005, 0x1.e7ff96f77bafp-780,
     0x1.b22f5b9249a5cp-693, 0x1.18357c6b6ba95p-69, 0x1.4ae6303cc8e32p-479, 0.0,
     0x1.cab3325b7cdc6p-599, 0x1.89abddb77246dp-662, 0x1.6a89643509795p-302,
     0x1.25bca9669c438p-956, 0x1.5c8baf3c00bb9p-410, 0x1.50f2cb3e39e1fp-1006,
     0x1.09d86b3c49p-89, 0.0, 0.0, 0.0, 0.0, 0x1.c80a11fc6909dp-722,
     0x1.82861945d70fdp-625, 0x1.cc837bde63d7fp-222, 0.0, 0x1.871a261d06504p-252,
     0x1.198425731ca39p-907, 0.0, 0.0, 0x1.54fc23cf42889p-427, 0.0, 0.0,
     0x1.5124d5f9ccf95p-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f58300ee03523p-459, 0.0, 0.0, 0x1.40ad2f1f7ac31p-716, 0x1.bf64b4c00b46fp-833,
     0x1.8fe4560ea06cfp-966, 0x1.df06ea0801df1p-67, 0x1.3bf0114a2d855p-406
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_floord2_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_floord2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_floord2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
