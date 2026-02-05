/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ilogbd1_purecfma.c --function \
 *     Sleef_finz_ilogbd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.987fa424785bcp-119, 0x1.ffcf87c90ae0ep-711, 0.0, 0x1.b05f61082ea9p-451,
     0x1.0c7ec367abc68p-326, 0x1.a8b85cf76067cp-252, 0x1.2c5bc21d300ebp-53, 0.0, 0.0,
     0.0, 0x1.6950370d3b3a1p-210, 0x1.d9d181724e3d4p-23, 0.0, 0.0, 0.0,
     0x1.478eddc0bf2e1p-779, 0.0, 0x1.2249734a6f1a4p-870, 0.0, 0.0,
     0x1.3a54a49880b9cp-767, 0.0, 0x1.2360cfc4824b6p-1010, 0.0, 0.0, 0.0,
     0x1.b00ee415681a8p-623, 0x1.b0430a832947bp-66, 0.0, 0.0, 0.0, 0.0,
     0x1.3e78986b1afc4p-175, 0x1.3de90c0a0e18bp-911, 0.0, 0.0, 0x1.9ae4af8056e28p-771,
     0.0, 0x1.6cf7be4af2025p-816, 0x1.7809af994c7c7p-237, 0x1.0878003d04d63p-703,
     0x1.19cc2862e9cf1p-640, 0x1.c26307307c965p-113, 0.0, 0x1.8c1644adbbd1bp-629,
     0x1.49d31515efa29p-892, 0x1.d49adaa00f728p-495, 0.0, 0x1.e7aaa76629b7fp-930,
     0x1.dc54f5bb4687cp-805, 0.0, 0.0, 0.0, 0x1.3fa75e3a56738p-808,
     0x1.4ac50d142dc1ap-997, 0.0, 0.0, 0.0, 0x1.1e79572aff3c8p-921,
     0x1.74d5622b6b876p-494, 0x1.48a70eb52af85p-979, 0x1.67b44682eb2d6p-777,
     0x1.f3141c3581f2p-969, 0x1.fb1d02df85db9p-630, 0.0, 0x1.17d8f097db42dp-752,
     0x1.ab60230d61d36p-474, 0x1.b42a51f7d93b2p-212, 0.0, 0x1.c7f5392afa547p-167, 0.0,
     0x1.db682e02f633fp-269, 0.0, 0.0, 0.0, 0.0, 0x1.4112d9ada2558p-421,
     0x1.287266f2dd09dp-659, 0.0, 0x1.25374ca9950bap-549, 0.0, 0.0, 0.0,
     0x1.bf8d990b77f34p-393, 0.0, 0.0, 0x1.4ac6e77f775b5p-568, 0x1.fc5eeaeb03aadp-21,
     0x1.8e4d3a4a81ccdp-158, 0.0, 0x1.bb628ff79d14ep-543, 0.0, 0.0,
     0x1.619818a24e462p-1013, 0x1.cd33be6c7a03ep-73, 0x1.73d4449fc611ep-771, 0.0, 0.0,
     0.0, 0x1.e6756e5b94af9p-412, 0.0, 0x1.4d90362a162fdp-131, 0.0, 0.0,
     0x1.92e26db88d257p-816, 0.0, 0x1.441a54afc790bp-130, 0x1.a8a7df4ec039ap-30, 0.0,
     0.0, 0.0, 0x1.441aabe002c8bp-441, 0x1.3fb316906a537p-819, 0.0, 0.0, 0.0,
     0x1.fb2d2eb4c0c92p-579, 0.0, 0x1.23b7be1216d48p-429, 0.0, 0x1.5b6d679879cb2p-889,
     0.0, 0.0, 0x1.a39e19d21e301p-565, 0x1.c0d9a6ad8a978p-31, 0x1.e6a27ba5984f1p-946,
     0x1.2181bc38506fap-125, 0.0, 0.0, 0x1.6be2d1d82818p-580, 0.0,
     0x1.78309d21b713bp-287, 0x1.8088f847fbf4bp-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.506288075ca0ep-857, 0.0, 0.0, 0x1.5425d61ec456bp-798, 0.0, 0.0,
     0x1.561a42b79a2bap-21, 0x1.4bfd0fcf60ffbp-100, 0x1.568a002ef48ccp-450,
     0x1.867b79b3efd4ep-271, 0x1.3458cad72fd01p-839, 0.0, 0x1.e1ad7c57d67ep-591, 0.0,
     0x1.3cb9879933292p-896, 0.0, 0x1.059d45d94c643p-317, 0x1.ab6f3871ccf78p-329, 0.0,
     0x1.515eeecf30bd4p-1007, 0x1.a26b2d11941e8p-755, 0.0, 0.0, 0.0,
     0x1.fbba7e2a7059ap-327, 0x1.59cb62e0f3f2cp-179, 0.0, 0.0, 0.0,
     0x1.9aeeea7b680ep-132, 0.0, 0x1.caec455ca831ap-55, 0.0, 0x1.0b4200e60cefap-977,
     0.0, 0.0, 0x1.79df5f342bfcfp-850, 0x1.7901dc1b4040dp-756, 0.0, 0.0,
     0x1.e96d60b8e8528p-770, 0.0, 0x1.e6e0bdb2a9c89p-149, 0.0, 0x1.3cbfa19247cdfp-947,
     0.0, 0.0, 0.0, 0.0, 0x1.f7f4f125c991cp-432, 0.0, 0x1.2f01de3d83673p-922,
     0x1.0c3484fbe2051p-482, 0.0, 0.0, 0x1.5c558988e506fp-594, 0x1.5842da2ad9213p-955,
     0x1.340b4e76e4064p-646, 0x1.3bd5f8641583cp-809, 0x1.45dcd2a84b038p-339, 0.0, 0.0,
     0x1.40e00ded38af2p-755, 0x1.6a328e2c24f35p-377, 0.0, 0x1.0adf12e4a5096p-31, 0.0,
     0.0, 0.0, 0x1.93dff8d162564p-313, 0.0, 0.0, 0x1.e65260c255739p-202,
     0x1.1d43839f39e5fp-707, 0.0, 0x1.4f74bf21b7361p-527, 0.0, 0x1.b3a1acb72fa74p-284,
     0.0, 0x1.de4ea60788a87p-629, 0.0, 0.0, 0x1.5a9477f2a330fp-823,
     0x1.266387996a748p-7, 0.0, 0x1.574ec35762858p-818, 0x1.1ef67fcdf9425p-649, 0.0,
     0x1.a23cc3dd85c06p-736, 0x1.1cbb1632fc5f7p-137, 0x1.d7e01e34b8be6p-311, 0.0,
     0x1.7a5ccfe4a52e8p-703, 0x1.6b4c0f1855454p-830, 0x1.b060844880376p-804,
     0x1.7f364d79b4479p-839, 0.0, 0.0, 0.0, 0x1.a529f9b3b13a5p-622,
     0x1.17c5af7fb0ec7p-791, 0.0, 0x1.cc438f4333661p-1014, 0.0, 0.0,
     0x1.e9bcf07aaa143p-376, 0.0, 0x1.5c139d492fb32p-463, 0.0, 0x1.09ff34140b959p-594,
     0.0, 0x1.4eb411ba9551bp-971, 0.0, 0x1.da062c84152e2p-388, 0x1.8b9ebc08163f2p-705,
     0x1.b7d89e671897dp-772, 0.0, 0.0, 0.0, 0x1.20c153604211ap-887, 0.0, 0.0,
     0x1.ecb4ee8536eb1p-109, 0.0, 0.0, 0x1.e34e29a32b091p-193, 0x1.1682777373ecep-182,
     0x1.f0df0f1707b26p-429, 0x1.daa2709899f74p-460, 0x1.5ac2f5bba01ep-107, 0.0,
     0x1.30b9f21506abep-329, 0x1.6df96d7b48d6p-714, 0.0, 0x1.659e5d5acbb87p-481, 0.0,
     0.0, 0.0, 0.0, 0x1.c6e6ac44cc63dp-746, 0.0, 0x1.b5dfb6099c57p-815, 0.0, 0.0,
     0x1.9f7c610b7725fp-649, 0x1.9f11f8086d731p-495, 0.0, 0x1.b6efb234cdc6dp-926,
     0x1.110a2df39316ep-88, 0x1.a78e377c7018ap-190, 0.0, 0.0, 0x1.3e803afe8cc17p-448,
     0x1.15412cda51b01p-542, 0x1.32d0febdcc065p-853, 0.0, 0x1.69f0179c71c7ep-72,
     0x1.e050d88838af1p-302, 0x1.3decdc094a02dp-244, 0x1.69ce4718b15a4p-423, 0.0, 0.0,
     0x1.a0d664db355a1p-974, 0.0, 0.0, 0x1.a5d0b0f2a812p-310, 0x1.78d1c3562a60bp-874,
     0.0, 0.0, 0x1.b050aa738499p-468, 0x1.4b6d3a00b58b8p-545, 0.0, 0.0,
     0x1.af5aef57404ccp-414, 0x1.068f0341982b9p-769, 0x1.048e53cae90a8p-699, 0.0,
     0x1.b0537c550e749p-16, 0.0, 0x1.f16718f89ff8p-4, 0x1.77b7acd5c670bp-153,
     0x1.752910d42984dp-621, 0x1.3a87f3c3bb1bbp-239, 0x1.86543391e794fp-276,
     0x1.9e4f57fc18736p-307, 0x1.be6bef816f36fp-274, 0.0, 0x1.bf158f92fb987p-599, 0.0,
     0x1.f76fb4167fd57p-1020, 0.0, 0x1.6f0a3176b6fbep-512, 0x1.f99c2ef4d9633p-219,
     0x1.11df5ecce87b4p-605, 0x1.c2effef27f17dp-944, 0x1.a014642f7094ap-800,
     0x1.8a58037b2c13p-674, 0.0, 0x1.d1b717f16c382p-881, 0x1.ce20ac6c8bba8p-971,
     0x1.88af6109e847fp-691, 0x1.d5d37a6074876p-606, 0.0, 0x1.bbb6fae3705fbp-733,
     0x1.bca122348d6d3p-283, 0x1.43a70bea4b623p-906, 0.0, 0.0, 0x1.17527608c4eeep-916,
     0.0, 0x1.9d645c31032abp-274, 0.0, 0x1.ad13cdce5b6f3p-231, 0x1.539fc18822695p-293,
     0.0, 0.0, 0x1.5307c12d6d8d7p-542, 0.0, 0x1.fd59482aa17acp-235,
     0x1.265b500bd7d27p-980, 0x1.bac8cabc7b5b6p-801, 0x1.a70041753fd26p-473,
     0x1.b1a551fd15d48p-699, 0x1.c7eaa2b5c51abp-942, 0x1.d143dfa04b35dp-700,
     0x1.56bf84d4fbe16p-587, 0x1.0bb519040b163p-336, 0x1.a254a2402c209p-485, 0.0, 0.0,
     0x1.4e70c37089d68p-508, 0.0, 0.0, 0.0, 0x1.0898b9a8ba7d3p-580, 0.0,
     0x1.7283239f78ad8p-316, 0x1.d078ca1ece03ap-754, 0x1.b63c5c1dd5beep-681,
     0x1.2b2fdc4684502p-341, 0x1.6bdacb7052d2p-822, 0.0, 0.0, 0.0,
     0x1.7171b11ce43b4p-945, 0x1.e9384ff38525fp-398, 0x1.f482f7c66d58cp-988,
     0x1.9a4c30707bd2bp-874, 0.0, 0x1.cda6efca6bdp-45, 0.0, 0.0,
     0x1.2ab88cb31d647p-39, 0x1.ab6202d61fd0bp-397, 0.0, 0x1.9e2d121fe31bp-469,
     0x1.0e3f1eb058de2p-122, 0x1.3281a41120341p-453, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac838db5e118cp-159, 0x1.55bd4478b1512p-78, 0.0, 0x1.97d68c404a817p-107, 0.0,
     0x1.70c5e5b36f764p-397, 0x1.a17cbbbc9d87ap-344, 0x1.f3c5db923fbbp-838,
     0x1.2b4ba7f5c8a76p-685, 0.0, 0x1.06315063058d6p-353, 0x1.18225d6b3dee6p-542,
     0x1.ba9f71616a544p-370, 0.0, 0.0, 0x1.22cac75bd1d27p-366, 0.0, 0.0, 0.0,
     0x1.31ff84338b3aep-205, 0x1.bd29df8d2d8d9p-167, 0x1.963b5649bdf9p-539, 0.0, 0.0,
     0.0, 0x1.8fd65ad51b975p-410, 0.0, 0x1.520b1b9e210f7p-506,
     0x1.2ba92ec26503fp-1016, 0.0, 0x1.128cfd17ae5f2p-592, 0.0,
     0x1.e7f1e8a9ffc42p-716, 0x1.135b699f7b618p-439, 0.0, 0.0, 0x1.9087c1752bb44p-908,
     0x1.81e849c998eccp-330, 0.0, 0x1.27b76333fbc24p-570, 0x1.123c17bdc8e41p-612, 0.0,
     0.0, 0x1.c57cba1fafab4p-383, 0x1.471544e71c985p-543, 0x1.5124214519899p-640,
     0x1.84a0f639ffa82p-620, 0x1.54d476643cdf1p-468, 0x1.951f597591edp-36, 0.0,
     0x1.6e923d12ae863p-11, 0x1.5817d1c945d6p-590, 0x1.f90a21c64c4f9p-1003,
     0x1.dfadb83801413p-404, 0x1.325d47a02e13dp-561, 0.0, 0x1.e44f233f9ad5ap-2, 0.0,
     0.0, 0.0, 0.0, 0x1.0018983160e1ep-171, 0.0, 0x1.672986a5de7e7p-802, 0.0,
     0x1.5292851f4a59bp-70, 0.0, 0x1.352ae9314ca3ap-12, 0x1.25a6e98d3087p-199, 0.0,
     0.0, 0.0, 0.0, 0x1.42026bb708749p-168, 0x1.4da0fbc75dd95p-871, 0.0,
     0x1.1b8ae90cabf21p-24, 0.0, 0.0, 0x1.f5758310eab25p-451, 0.0,
     0x1.7b0debdf70b68p-437, 0x1.818806e26bddbp-438, 0x1.116e631aac73dp-318,
     0x1.0f00c4ebe1cdfp-806, 0.0, 0x1.df40fe3d4885dp-654, 0.0, 0x1.c2784281ca32ep-406,
     0.0, 0x1.940820f3f8194p-925, 0x1.ce39dc0ecea8p-352, 0.0, 0x1.92b34e43d0d44p-785,
     0x1.675ec15892d46p-249, 0.0, 0x1.b2703da0ccbbbp-287, 0.0, 0.0,
     0x1.9f7ce522b4676p-586, 0x1.09771c96ba67ap-395, 0x1.6755be463538fp-964,
     0x1.d3c89eff9e768p-86, 0x1.b0278ff35bf65p-349, 0x1.4073725291783p-997, 0.0,
     0x1.68d8569a5fab9p-604, 0.0, 0.0, 0x1.3afa846974b39p-215, 0.0,
     0x1.3c207a932ba5p-864, 0x1.a05dabc63944dp-27, 0x1.f9a560bf27136p-56, 0.0, 0.0,
     0x1.fffaf18c97a23p-276, 0.0, 0x1.d27fad57bd5aap-287, 0.0, 0.0, 0.0,
     0x1.4074a3268ce04p-312, 0x1.8ccc9dec12b73p-739, 0x1.d834fad3386b2p-472, 0.0, 0.0,
     0x1.b3503911b8232p-999, 0.0, 0x1.811f1ceafaa39p-760, 0.0, 0.0,
     0x1.d9474b2bd3a95p-301, 0.0, 0x1.b0930e2258956p-948, 0x1.9b808bddb5bffp-558, 0.0,
     0x1.eb6d45bbfb23ap-437, 0x1.3db1c580d5682p-956, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a655b078353a8p-880, 0x1.466d9dec19da8p-361, 0.0, 0.0, 0.0, 0.0,
     0x1.929b9b50790c1p-697, 0x1.f2c2626e762a8p-306, 0x1.8bd990de9d6f6p-275, 0.0, 0.0,
     0x1.6c2819bc67bcep-195, 0x1.60517a9424d93p-199, 0.0, 0.0, 0.0,
     0x1.172a5e53fd91bp-135, 0.0, 0.0, 0x1.425046a138567p-983, 0.0,
     0x1.3ae24085d735fp-973, 0x1.388ea749f005fp-750, 0x1.2b5b465284036p-9, 0.0, 0.0,
     0x1.09c3a5869c6bbp-825, 0x1.860b3ebbcea2fp-319, 0.0, 0.0, 0x1.d7f64a58d84f2p-991,
     0x1.361701f2c775ep-905, 0.0, 0x1.358018ed479dcp-584, 0x1.bfb6629951285p-608, 0.0,
     0x1.50f908b90d3f7p-11, 0.0, 0x1.df73f21820aaep-966, 0.0, 0x1.50e8fcf84d55bp-635,
     0.0, 0x1.3a1287ce3f086p-204, 0.0, 0.0, 0x1.a74a4406d1f5bp-453, 0.0, 0.0,
     0x1.a21bb0618cb8p-504, 0.0, 0x1.217454158cb09p-250, 0x1.89e793ca531d5p-277, 0.0,
     0x1.7b488612eb76ep-751, 0x1.d07f5fd84ac7cp-746, 0x1.38a6e44bf3883p-460,
     0x1.22a69c264e2a5p-545, 0.0, 0.0, 0x1.aaf2ebd5736f1p-809, 0.0,
     0x1.56f5f65abf079p-652, 0.0, 0x1.a7542d5edfdb7p-774, 0x1.f3ad81ccfa393p-785,
     0x1.e1d2fa765e1e4p-319, 0.0, 0.0, 0.0, 0x1.61f17f5a91807p-595,
     0x1.92430597362c8p-311, 0.0, 0x1.a9151cbbb8563p-946, 0x1.278d780184ba8p-838, 0.0,
     0x1.050e4dcf7ce11p-630, 0x1.0332ec552d63bp-361, 0.0, 0x1.d260987b9ec05p-603, 0.0,
     0x1.4450d6b014f31p-218, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7702f53c2a2bp-330,
     0.0, 0x1.502664803420cp-953, 0.0, 0.0, 0.0, 0.0, 0x1.5a3d9fe381867p-600,
     0x1.4905383a11871p-1011, 0x1.aaace18ff24a7p-815, 0.0, 0x1.7658793fa7c1bp-299,
     0x1.ee98d53dbd627p-606, 0x1.508128a22416fp-1006, 0.0, 0x1.ad46f54a787ap-551,
     0x1.81217c23e43b5p-769, 0x1.9a64f7d33f21ep-721, 0.0, 0.0, 0x1.ba56cb54b1697p-908,
     0x1.4ad788191456dp-1016, 0x1.de988015694e5p-876, 0.0, 0x1.5466c7089c4afp-697,
     0.0, 0x1.d7bfd355ac266p-996, 0.0, 0.0, 0x1.c59ac4b6c8927p-950, 0.0,
     0x1.9e2a3e710d6aep-599, 0x1.027d70d521004p-202, 0x1.f2fc5ca1fb7ccp-667,
     0x1.a339f78176439p-366, 0x1.c53e0572fd5a5p-613, 0.0, 0x1.8fca4568fddfap-887,
     0x1.5d85b1f22b103p-423, 0.0, 0x1.d81f7f351b91bp-950, 0.0, 0.0,
     0x1.7094de7c68e73p-269, 0x1.d49c877db17b8p-840, 0.0, 0x1.a355239e2f979p-917, 0.0,
     0.0, 0x1.831451103c363p-567, 0.0, 0.0, 0.0, 0x1.a204262424b2bp-356,
     0x1.5453e1d35f021p-850, 0x1.2fcabc814fa6ep-57, 0x1.22d2041b45da6p-725,
     0x1.d4425cad89687p-709, 0.0, 0.0, 0.0, 0x1.95d7320364f69p-645, 0.0, 0.0,
     0x1.ebe26ede087p-888, 0x1.b501c9c3472ecp-665, 0.0, 0.0, 0.0,
     0x1.cc98b9d2dd4c8p-229, 0.0, 0.0, 0x1.4f4fb7ad3913cp-482, 0.0, 0.0,
     0x1.53c4f828478a9p-297, 0x1.db31d84cb672cp-968, 0x1.b4c9b298589d8p-796, 0.0,
     0x1.73c5b90edcf51p-43, 0x1.71e943d384162p-935, 0x1.f225f90ae6ac4p-983,
     0x1.2e7d818f3f3f9p-294, 0.0, 0.0, 0.0, 0x1.0ed31f1e5f3d4p-499, 0.0,
     0x1.ee66a0d9aa873p-710, 0x1.ad59cd0b3523fp-934, 0.0, 0x1.4a11efd1600b7p-822,
     0x1.518af6dc53ee7p-522, 0x1.34ad0c950c23ap-817, 0x1.4262ad20bd3fep-186, 0.0, 0.0,
     0x1.af39ad36e74f9p-477, 0.0, 0x1.e60b145519aadp-298, 0.0, 0x1.90a4f1eb3e991p-19,
     0x1.f33e4719466a1p-372, 0x1.e82659b93641ep-492, 0.0, 0x1.5daf9ffe042b2p-789,
     0x1.cbed73bf157cp-423, 0.0, 0x1.fc3cd0305c226p-871, 0x1.c64648943b9b5p-590,
     0x1.dad5a95da410bp-644, 0.0, 0x1.d98262d811e01p-132, 0.0, 0.0,
     0x1.e5e8f66b0f571p-163, 0.0, 0x1.a7d782d3c39fbp-338, 0x1.85a0e37f90dddp-385, 0.0,
     0x1.9bdefcfca7c37p-666, 0x1.663f0059623e7p-644, 0x1.a95d01b85f5ep-633, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.88c57a588b016p-768, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.28f664c87657dp-712, 0x1.492707a3fe7a3p-697, 0x1.5fda84f712d04p-329, 0.0,
     0x1.00d7609fb1fcep-281, 0.0, 0x1.e3ef5e2a0f4aep-195, 0x1.8104a13ce4c24p-420, 0.0,
     0.0, 0x1.058759e9851cdp-711, 0x1.59ae4532391e5p-557, 0x1.87b42ed1b492fp-634, 0.0,
     0x1.63aa6735da7c9p-540, 0x1.cd5d218ce383bp-116, 0x1.5cd5ceebf5746p-591,
     0x1.1c9b1fcfc4646p-26, 0.0, 0.0, 0x1.9b3e5ce577e0fp-332, 0.0, 0.0,
     0x1.577f64e51d2bbp-659, 0x1.9c442446e3b9cp-526, 0.0, 0.0, 0x1.28e3e2e319e44p-989,
     0x1.dc4f8fe3c5b61p-514, 0x1.14db1c1d940ecp-781, 0x1.b3a6b6ab0027p-856, 0.0, 0.0,
     0.0, 0x1.6a1c74505a9f6p-615, 0.0, 0x1.e36884cbce161p-569, 0.0, 0.0, 0.0,
     0x1.d98af75913864p-608, 0x1.2054f7c88a52fp-801, 0.0, 0.0, 0.0,
     0x1.d0578efcf0cd2p-183, 0.0, 0x1.c5eccc866429bp-389, 0x1.a0d1e6c53018dp-770, 0.0,
     0x1.502f29b49375bp-769, 0x1.e62e070764261p-597, 0x1.8bae8e7c144f7p-300,
     0x1.483c350356a17p-319, 0x1.e7714e8a3b079p-229, 0x1.902b4edcaa588p-332,
     0x1.3f1ce7d44c489p-422, 0x1.12b1dd26db99p-525, 0.0, 0x1.ff52c961a5347p-693,
     0x1.53189c9dbd118p-316, 0x1.e98f14e7904d9p-240, 0x1.06780ef29dbcp-812, 0.0,
     0x1.046d30c2a860ep-181, 0x1.05c2524484e37p-434, 0x1.144b1f1659357p-306,
     0x1.5a6e0696d1b1ap-439, 0.0, 0.0, 0.0, 0x1.f9b457914d76bp-69,
     0x1.6b26410f8cca2p-459, 0x1.3c00caea191c3p-1004, 0x1.e907db8cf2c84p-794,
     0x1.1a15f8314aaf5p-898, 0x1.c2baa8e318706p-567, 0.0, 0.0, 0x1.cdf185d6585f8p-461,
     0x1.bc47e3cb6736ap-981, 0.0, 0x1.4f0f1a3380e47p-443, 0.0, 0x1.b31b964e96233p-468,
     0x1.22e13a563c10ep-280, 0.0, 0x1.ee09f8f08e5ddp-693, 0x1.6774322160d3cp-708, 0.0,
     0x1.44f6eadebb37cp-743, 0.0, 0x1.e6ecd07941eb4p-40, 0x1.de7f537c2a193p-817, 0.0,
     0x1.a5fb6883c74e8p-63, 0x1.e0e7d2c815a1p-52, 0x1.47b8bb40d2834p-877,
     0x1.117697bb14d8bp-259, 0x1.5063f066ec132p-243, 0.0, 0x1.e03c4703f0c7dp-973,
     0x1.602845299fbe1p-587, 0.0, 0.0, 0.0, 0x1.3af754aac5114p-413, 0.0,
     0x1.5a16db28efd3fp-19, 0.0, 0x1.5015ef28b0d5bp-589, 0.0, 0x1.1350d6b2f5f83p-740,
     0.0, 0.0, 0x1.06efd8e97ba73p-539, 0x1.e4d920b5fa685p-349, 0.0, 0.0, 0.0,
     0x1.df495e2c69025p-517, 0.0, 0x1.04f0d2c2ac085p-620, 0x1.01df986539e81p-389,
     0x1.eee018171a251p-448, 0.0, 0.0, 0x1.f99862b5cf601p-268, 0.0,
     0x1.c9e6cd1be697dp-588, 0.0, 0x1.e3faf556b9197p-718, 0x1.109b7acf91c6ap-183, 0.0,
     0.0, 0.0, 0x1.116e0cedf082ep-206, 0.0, 0.0, 0x1.c986b86dc6039p-437, 0.0,
     0x1.498b9785f9228p-393, 0.0, 0.0, 0x1.82b3e4ece8a84p-427, 0x1.410d16d5d9facp-713,
     0x1.a64d9bf8b79ap-212, 0.0, 0.0, 0.0, 0x1.1f57f7a66e45cp-743, 0.0,
     0x1.53d64e64c6ad5p-671, 0x1.be7be9aec2a1cp-88, 0x1.0f0ab9c8d5e75p-318,
     0x1.7042f0b2fae9bp-952, 0x1.a34e910fd9fep-48, 0.0, 0x1.98a87d7629fbfp-298,
     0x1.886d55ff461c5p-760, 0.0, 0.0, 0x1.3b4a893dad45fp-354, 0.0, 0.0, 0.0, 0.0,
     0x1.ddcc8b5ec766p-98, 0x1.feb4a00cdbf64p-739, 0.0, 0.0, 0.0,
     0x1.6c3d683002f74p-770, 0.0, 0.0, 0x1.8890a39fdf48ep-430, 0x1.d7d39a6914cbcp-314,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3079e3dfa8469p-1018,
     0x1.ad02741b10cc6p-536, 0.0, 0x1.8fb442269d9bep-974, 0.0, 0x1.3b48d5a9b2c61p-275,
     0x1.09960a45a880bp-446, 0.0, 0.0, 0x1.3d259583ab307p-39, 0x1.54aac18f31246p-241,
     0.0, 0x1.c298687a1e351p-899, 0.0, 0.0, 0.0, 0.0, 0x1.fdc40f6d04058p-165, 0.0,
     0x1.b43ef5dc56523p-127, 0.0, 0.0, 0.0, 0.0, 0x1.507f8cec9b426p-931,
     0x1.1bb523bef7249p-988, 0x1.33d2bc98e251cp-945, 0.0, 0x1.5bd4a37db91d8p-409, 0.0,
     0.0, 0x1.016ea390630f9p-519, 0.0, 0x1.547ba95e93688p-171, 0x1.e5c912d69cba3p-579,
     0x1.b5bdd06caafa2p-741, 0x1.658d1e798d8eep-437, 0x1.4f454fe9fe215p-41,
     0x1.f17aa5c17f09bp-49, 0.0, 0x1.11156741b963ap-614, 0x1.e0e48037a0951p-156,
     0x1.3d9703cacac51p-430, 0x1.2e1885c099f07p-191, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = INT32_C(0);
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_ilogbd1_purecfma(tmp0);
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
    printf("Sleef_finz_ilogbd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ilogbd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
