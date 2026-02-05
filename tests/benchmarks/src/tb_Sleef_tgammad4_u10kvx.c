/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammad4_u10kvx.c --function Sleef_tgammad4_u10kvx \
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
     0.0, 0x1.ad54a2a0566d9p-892, 0x1.294cb0da50303p-155, 0x1.b6c3c39a54d8p-733, 0.0,
     0.0, 0x1.4a09951a29c55p-839, 0.0, 0.0, 0x1.02dc48d62d6aep-97,
     0x1.f81ab113df608p-698, 0x1.0fa90d5d031c4p-209, 0x1.ea5c0f1db3ef6p-441, 0.0,
     0x1.28b912f283476p-550, 0x1.bb20be1a100c9p-368, 0.0, 0.0, 0x1.8cc930002f5dap-284,
     0.0, 0x1.1d9b5ebb99f9p-934, 0.0, 0x1.9e00a1dd8d052p-716, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3bde982c4b8eap-765, 0x1.65ce71978a45dp-925, 0.0, 0.0, 0.0,
     0x1.bea5219937b28p-321, 0x1.694e592414591p-385, 0.0, 0x1.fc8e154125b47p-837, 0.0,
     0.0, 0x1.a0ce94b242673p-934, 0x1.6002fb4f9d228p-693, 0.0, 0x1.4f293c8985188p-415,
     0.0, 0x1.0599fab25aad8p-925, 0x1.4d3a553c967d7p-41, 0x1.354aa1d29c5efp-625,
     0x1.32f4e6e6eb4eep-341, 0.0, 0x1.c5ee6a732650cp-82, 0.0, 0x1.8fdbb5259d669p-300,
     0x1.0a6cb8ce66624p-747, 0.0, 0.0, 0.0, 0x1.cf30475b0ba9dp-601, 0.0, 0x1p0,
     0x1.bafcedb8f82bdp-242, 0x1.b31ca28773e34p-1007, 0x1.e82862bed7dfdp-289,
     0x1.786345211656ap-209, 0.0, 0x1.9378d9762600ap-642, 0x1.9f67ef59c5cfdp-835, 0.0,
     0x1.3f07684f8f1ccp-211, 0x1.835fc66dee3bap-278, 0x1.b1a1d891f3d3fp-392,
     0x1.bb8fa2be2dcffp-567, 0.0, 0x1.9be01878bb1cap-48, 0x1.663c00327b8a2p-513, 0.0,
     0x1.6362eb80629b1p-165, 0.0, 0x1.6265dfde0b93dp-101, 0x1.9174c9896b646p-855,
     0x1.dfcec72a9973ap-109, 0x1.8b35e6bd4fbefp-848, 0x1.f5d8a1e968c39p-908, 0.0,
     0x1.5bfc183d2e81ap-1013, 0x1.c052aef1628efp-958, 0x1.0b358d630afafp-163, 0.0,
     0.0, 0x1.e67c70db48cd8p-73, 0.0, 0.0, 0x1.1094274902d4ap-514,
     0x1.8b79feceaedd9p-969, 0x1.20dc5b527fd8bp-280, 0.0, 0x1.5e83baf26735cp-921,
     0x1.50d1db450cb1p-556, 0x1.78eeb45c9eccep-326, 0.0, 0.0, 0x1.c76b5ab3a713dp-840,
     0x1.cd500c7ddd8c5p-978, 0x1.f1c649aecae2ep-789, 0x1.7deaa569b1b55p-530,
     0x1.55298e583908ep-657, 0x1.fe7b28fd5359cp-72, 0.0, 0.0, 0x1.2a9b74805c051p-270,
     0.0, 0x1.399f79858395dp-845, 0.0, 0.0, 0.0, 0.0, 0x1.8c346df2f3cb8p-821, 0.0,
     0x1.35b9ed4351fa7p-736, 0.0, 0.0, 0.0, 0x1.67c82129749edp-225,
     0x1.515c105b181d2p-372, 0.0, 0x1.338d9f88c72b7p-701, 0.0, 0x1.929a679a8326ap-196,
     0.0, 0x1.e3b58a3fb0602p-631, 0x1.099f67039c0f3p-267, 0x1.d4d7bb7336f87p-641,
     0x1.3c19b972c492cp-635, 0x1.30be16f19795ep-730, 0.0, 0x1.a197b80e4e632p-71,
     0x1.82c59de1ac0cdp-786, 0.0, 0x1.b8050628a5efdp-60, 0.0, 0.0, 0.0,
     0x1.cbe9b108242dcp-731, 0x1.156dac4f5774fp-1015, 0x1.3de3694055412p-530,
     0x1.ae2da6fc9372ap-916, 0x1.6a4934660a8a3p-583, 0x1.02b37b862910ep-321, 0.0, 0.0,
     0x1.b3bba2d968d7ap-883, 0x1.aa641f673ea3bp-478, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bdac01116a34dp-356, 0.0, 0x1.36cd64506ba9ap-234, 0.0, 0x1.e8218911a7f6p-462,
     0.0, 0x1.dbc144c41426bp-189, 0x1.00ab948b8c691p-370, 0.0, 0x1.016c1601e2affp-185,
     0x1.903c4b45c3469p-36, 0.0, 0x1.67de90bec1f81p-701, 0.0, 0x1.c3ad685ded087p-597,
     0.0, 0.0, 0x1.3f89ac93389fcp-721, 0x1.d4978798c15ddp-950, 0.0,
     0x1.8ac1d73766d7ap-879, 0x1.49dc7bd96000dp-214, 0x1.a604e8f4e8b5bp-632,
     0x1.9bfe807af9702p-202, 0x1.003c62972f109p-298, 0.0, 0x1.7dde34092ec97p-289,
     0x1.bf4031394d96bp-123, 0.0, 0x1.3afa69939ae94p-786, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.513d80fbb9d77p-708, 0.0, 0x1.537471efd79bep-195, 0x1.ca63f44d72551p-199,
     0x1.43c3399e1a1cp-488, 0x1.3c4dad9445687p-974, 0x1.1ebed2af25b16p-895, 0.0,
     0x1.bf04d8796869ep-526, 0x1.1b9caf79a33ep-863, 0.0, 0.0, 0x1.b049393495ffep-1015,
     0.0, 0x1.b684800346318p-642, 0x1.cbb3280328aa4p-841, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f900a8aefd185p-974, 0x1.739fc9382ea2cp-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.037c8ff6e3a34p-911, 0.0, 0x1.bed46601b6b5bp-733, 0x1.eae7783ce4729p-515, 0.0,
     0.0, 0x1.df4e06f79304cp-361, 0.0, 0.0, 0.0, 0x1.4d74b08f4d329p-295, 0.0, 0.0,
     0x1.71f9a9ae48c62p-161, 0x1.c454f1b606045p-188, 0.0, 0x1.14839066b81d1p-758, 0.0,
     0.0, 0x1.51828769b51f7p-678, 0.0, 0.0, 0x1.63359a76fef54p-926, 0.0, 0.0, 0.0,
     0x1.c9868d04682d8p-155, 0.0, 0x1.cc05b9f87369fp-812, 0.0, 0.0,
     0x1.c89a20c7b0188p-505, 0x1.a96bd04ec406cp-969, 0.0, 0x1.4bad649b83739p-996,
     0x1.dd01d13901868p-59, 0x1.ddc57dc6b7cf9p-389, 0x1.5d67fbc3d51a4p-680, 0.0,
     0x1.079c2566f1a02p-443, 0.0, 0.0, 0x1.8872ffffbb669p-558, 0x1.927b3be2507a9p-6,
     0x1.89ce648188e46p-774, 0x1.9ad87af092de3p-624, 0.0, 0.0, 0.0,
     0x1.16ff39399dec2p-857, 0.0, 0x1.06f379c99ff45p-580, 0x1.121a9230046d9p-19, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.edd3ae940f72ep-596,
     0x1.d328efb5ae2a3p-889, 0x1.f587f86b066e2p-293, 0.0, 0x1.da8adfe7d50f4p-39, 0.0,
     0.0, 0x1.0f700db53d335p-874, 0x1.679d02d61e5fbp-590, 0x1.1b599870f4071p-14, 0.0,
     0x1.d086846d8cc96p-316, 0.0, 0x1.1a4c9b4586aa2p-1017, 0.0,
     0x1.044d411a8df22p-546, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4822938a1ea5p-688,
     0x1.8c012dd87f5c2p-205, 0.0, 0x1.a600cf69885bep-869, 0.0, 0.0, 0.0,
     0x1.f76baebdd0983p-664, 0.0, 0x1.b6d69f077385cp-979, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bfc61a74d0e9p-445, 0x1.dd2207cd4b21bp-375, 0x1.491d5d612bff5p-192,
     0x1.eeb8f97589b07p-975, 0.0, 0x1.018c6cd68f495p-435, 0.0, 0.0, 0.0,
     0x1.3bc662295177cp-466, 0x1.bd05d936462aap-627, 0x1.1e3bc9c46985ep-861,
     0x1.b7f8e09a32163p-151, 0x1.3c0d4e8909a23p-562, 0.0, 0x1.f4c93ce302ff8p-21,
     0x1.c8449b1c721f4p-812, 0x1.ffc8fdb001a3ap-1006, 0x1.ef3d2f5bea0ddp-720, 0.0,
     0x1.dcf135f78257p-958, 0x1.d3419b1a3a68fp-261, 0x1.a5307a71d7d06p-516, 0.0,
     0x1.d2356ef2f8976p-689, 0x1.403cbc1600ce6p-217, 0.0, 0.0, 0x1.94bc8498cfe79p-712,
     0x1.756bd905a11dcp-760, 0.0, 0x1.6667c1c190b9ap-430, 0x1.b292eb9711bcbp-857, 0.0,
     0.0, 0x1.44f1ac89c2af7p-718, 0x1.039d3cd0c6d52p-243, 0.0, 0x1.6cd9747fcfec7p-267,
     0.0, 0.0, 0x1.a070848004783p-688, 0.0, 0x1.3400fd70b7175p-322,
     0x1.62bca0a857463p-314, 0x1.062ab00bb9c8fp-642, 0.0, 0x1.b07052a11fd68p-137,
     0x1.827e2bd48f1a8p-428, 0x1.533668958b8a4p-371, 0x1.f4e414bc297d4p-86,
     0x1.e34ca6dd1d496p-944, 0x1.db5b7743c79fdp-31, 0.0, 0.0, 0x1.444ff58209712p-1007,
     0x1.2ea7d8b2a89bbp-626, 0.0, 0.0, 0x1.81aeda7095481p-326, 0x1.0811d7d9c2279p-346,
     0x1.c957e26d31b79p-288, 0.0, 0x1.55b3e166e6431p-60, 0.0, 0x1.e0b8172f54421p-984,
     0x1.abbe914bda29ap-305, 0x1.8071d1b9b1e93p-984, 0x1.79f04021f759cp-324, 0.0,
     0x1.c1510471bc01ep-992, 0x1.f8504af1c111p-122, 0x1.d9d2f60184069p-211,
     0x1.edc1339c01f72p-729, 0.0, 0x1.941c4e0910438p-151, 0.0, 0.0,
     0x1.546cb5aef7e55p-299, 0.0, 0x1.a1b438a4220e3p-457, 0x1.010282044d859p-638, 0.0,
     0x1.1a41945571072p-357, 0x1.9e081320ae3f1p-43, 0.0, 0.0, 0x1.8dcd93bf8c373p-978,
     0x1.18e14e7f30c0dp-431, 0x1.76cef89e935cbp-961, 0.0, 0x1.4878b0dbe4523p-519, 0.0,
     0x1.662d88a281135p-882, 0x1.8e3d103df41e1p-491, 0.0, 0.0, 0x1.d68250f261a8cp-874,
     0.0, 0x1.475ca461af2eap-187, 0x1.306d1b41fa71dp-286, 0x1.d94c372a8f026p-955,
     0x1.cac2390d24cd2p-127, 0x1.d17d2aadca8bep-238, 0.0, 0x1.11230d78defd5p-731, 0.0,
     0x1.d493d425d724fp-512, 0.0, 0x1.033e34bc7f769p-346, 0x1.e5fc01a44219ep-93,
     0x1.34c9a1b81379p-540, 0x1.ec8cafa09494p-878, 0.0, 0x1.28b5943d195d6p-781, 0.0,
     0.0, 0.0, 0.0, 0x1.743853bb09555p-630, 0.0, 0x1.dcb2a633a0f23p-200, 0.0,
     0x1.919f7dbb5dc1cp-563, 0x1.2b8ed47d0e3e8p-518, 0x1.b56754ec2fb74p-957,
     0x1.ad7dd4296d927p-425, 0.0, 0x1.6146b00e527ebp-739, 0x1.d94c3b49e2b0ep-345, 0.0,
     0x1.df145fe5ec658p-442, 0x1.d8b953b9ceb19p-311, 0.0, 0x1.87bb721960736p-395, 0.0,
     0.0, 0.0, 0x1.13d3bc607f246p-1018, 0.0, 0x1.0aedb25f73402p-737,
     0x1.5f45f11a973b5p-146, 0.0, 0.0, 0x1.662f3776c165fp-3, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2ea330c54616dp-965, 0x1.c19a8d7cfc4ap-60, 0.0, 0.0, 0.0,
     0x1.fba32864d8f33p-824, 0x1.384c059e30a31p-336, 0x1.b90beb7900c59p-983,
     0x1.6c37ec416427bp-885, 0.0, 0.0, 0.0, 0x1.b493c7d06d5cap-160,
     0x1.85d733b3fefd7p-69, 0.0, 0.0, 0x1.843377907d69cp-255, 0.0, 0.0, 0.0, 0.0,
     0x1.8eaa44c562ca9p-231, 0.0, 0.0, 0x1.e6ec234b787fep-298, 0x1.e1cbe710ba5fp-14,
     0x1.0386500076bf5p-520, 0.0, 0x1.1f59a9cdf0093p-586, 0x1.49d5a227b37b3p-654, 0.0,
     0x1.8e151e1a0b2ebp-145, 0.0, 0x1.8d3ddb55869ecp-740, 0.0, 0.0, 0.0, 0.0,
     0x1.0342637c09f05p-373, 0x1.4a7b2771131c8p-407, 0x1.4b0fd5b727c2cp-785, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cdf7edb98ef4fp-920, 0x1.139d2bccbea9bp-255,
     0x1.35a3d3dd0e3e3p-979, 0.0, 0x1.009bd931e56cp-992, 0x1.ca0a2433ffbcbp-307,
     0x1.e9d1449202e1bp-148, 0.0, 0.0, 0x1.9e0ddcf47bea8p-1021, 0.0, 0.0,
     0x1.a534bc681f76p-693, 0.0, 0.0, 0x1.214494f629968p-704, 0x1.6e8e96ef129f7p-120,
     0x1p0, 0x1.ee3295a1bd947p-623, 0.0, 0x1.a3c10b8636d9ep-290, 0.0, 0.0,
     0x1.da53da89f37ddp-623, 0x1.1629716ed1c33p-782, 0.0, 0.0, 0.0,
     0x1.0eadbee024fb8p-758, 0x1.3bf32c4fa9ea6p-332, 0x1.f74aff9ce2ccep-575, 0.0,
     0x1.91d2c925cc1adp-516, 0.0, 0.0, 0.0, 0.0, 0x1.c93c66b24c843p-372,
     0x1.73522da2f1dcep-1008, 0.0, 0.0, 0x1.66d6d9c919772p-270, 0.0, 0.0, 0.0,
     0x1.eba657da8762bp-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11cb5116d4e57p-268,
     0x1.6f8d7feec3aefp-189, 0.0, 0.0, 0x1.e9683ccf4fb74p-198, 0x1.ce3c65e45808p-453,
     0x1.53f5f873179ep-382, 0x1.f903a1a3f2edp-676, 0.0, 0.0, 0x1.11d50f0ad8ddp-955,
     0.0, 0x1.013c4e8346347p-1018, 0.0, 0x1.4733789d896c6p-997,
     0x1.95a6ba7f582c6p-388, 0.0, 0.0, 0x1.521a6c3cc9953p-443, 0.0, 0.0, 0.0,
     0x1.cf55a30e31d88p-640, 0x1.dc1e67bc7d0f8p-518, 0x1.1012df3b14296p-919, 0.0, 0.0,
     0x1.9749b969f558bp-838, 0x1.69a8295e8a101p-1004, 0x1.ae79ed50d2f31p-878, 0.0,
     0.0, 0x1.0303f3ed745b1p-660, 0x1.cef3757c5a8a4p-233, 0.0, 0x1.3b45507ca4759p-299,
     0x1.e08aa7738ee4ep-801, 0.0, 0x1.60e5c2f73fdd7p-573, 0x1.a7f027934c60ep-152, 0.0,
     0.0, 0.0, 0x1.fe9595cafdedep-187, 0x1.d0f16e51520eap-326, 0.0,
     0x1.ef316d62d5717p-130, 0.0, 0x1.5929147a5a21ep-362, 0x1.64948730ff549p-807, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bcd2a906005ep-818, 0.0, 0x1.5515bdd6e8732p-825,
     0.0, 0.0, 0.0, 0x1.fdcd02706f7edp-345, 0x1.0f8dcfd22d6a9p-661, 0.0,
     0x1.1f1515e11a9aap-309, 0.0, 0.0, 0.0, 0x1.33aeeaf110a37p-655, 0.0,
     0x1.d122bb55c6838p-884, 0x1.1ba907d06d8afp-216, 0x1.731ad7b9a56cfp-183,
     0x1.721677f7ef46bp-809, 0.0, 0x1.7394fd991cf71p-868, 0x1.c955633373d1bp-1018,
     0.0, 0x1.985721d5db05p-813, 0x1.5cc3ba22c12f1p-320, 0x1.f3792e9a6e1f8p-492,
     0x1.e666399cdc05ep-764, 0.0, 0x1.da0beba6cc85dp-942, 0x1.55342b049941p-636, 0.0,
     0x1.bae22562709efp-996, 0x1.4d1b493962648p-800, 0x1.0002d1052dccdp-548, 0.0,
     0x1.d7ee49be6fc07p-164, 0x1.62fff27362772p-308, 0x1.2471f85087058p-55, 0.0,
     0x1.5896c4e76fa6bp-784, 0.0, 0x1.50b3949f13fa2p-452, 0.0, 0x1.7b30e0370c8c6p-747,
     0.0, 0x1.cfb6de4460d2bp-371, 0.0, 0.0, 0x1.2fdf70839d43ap-513,
     0x1.460ea8d56353ep-391, 0x1.8150b01dda63cp-253, 0.0, 0.0, 0x1.3e3728e069fe7p-250,
     0x1.698833bd12977p-202, 0.0, 0x1.d02629d3d0c4bp-914, 0.0, 0.0,
     0x1.b79cbcdb3fe9ap-481, 0x1.6d760689688adp-170, 0.0, 0.0, 0x1.0b91c8100fc63p-734,
     0x1.3800f1e668f0ep-84, 0.0, 0x1.b96bd91173c63p-135, 0.0, 0x1.8d0a4ea288a21p-494,
     0x1.559c4a21ecc9bp-760, 0x1.91ca99f9ede91p-875, 0x1.0edf79cdb6dc3p-969, 0.0,
     0x1.be18a2edde17cp-288, 0x1.8cda87d5c3d6p-610, 0x1.61f46990a3469p-95,
     0x1.c2043eb034b69p-418, 0x1.24c6d43b29fb3p-668, 0x1.342223a9192a4p-213, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.56a9cd5a6270bp-167, 0.0, 0.0, 0x1.790a9ccb893eep-750, 0.0,
     0.0, 0.0, 0x1.c6bb0c18c6ap-601, 0.0, 0x1.c9f09635fb8eap-12,
     0x1.1b222b51015e8p-294, 0.0, 0x1.cd1307ce5b8dfp-286, 0.0, 0x1.3491e16551bcdp-144,
     0x1.84052c58d63a6p-428, 0.0, 0.0, 0.0, 0x1.3ccfcc10de0edp-64,
     0x1.80ba91c3b8b24p-753, 0.0, 0x1.3163ada3536cp-354, 0.0, 0.0,
     0x1.0ad865a9bef3p-35, 0.0, 0x1.2e125bff78501p-399, 0.0, 0.0, 0.0, 0.0,
     0x1.dd6f50498591bp-457, 0x1.d2a9154ff99afp-61, 0.0, 0x1.16d34a2c6e3f9p-624,
     0x1.13b924ac1b05fp-625, 0x1.6d3100e1ecdf1p-257, 0.0, 0.0, 0x1.42a12eceafd61p-165,
     0x1.e0be15fb47775p-158, 0x1.971b76319502bp-236, 0.0, 0.0, 0x1.44525ff32d112p-660,
     0.0, 0.0, 0x1.e8879deb4bc47p-964, 0x1.362fdc9c015a7p-863, 0.0,
     0x1.8914cb2dbfb7fp-269, 0.0, 0x1.e784e1ae1b391p-873, 0.0, 0.0, 0.0, 0.0,
     0x1.e4439c0ac8db3p-905, 0x1.b82f6a0f2b5d6p-316, 0x1.f5f8230c46e04p-354, 0.0,
     0x1.260466944d763p-433, 0x1.59a39ba456f23p-518, 0.0, 0x1.21d79f108102fp-279,
     0x1.7451459401cp-804, 0x1.7417e1834bd19p-822, 0.0, 0x1.d357707fa86c3p-221,
     0x1.0676006b52846p-737, 0.0, 0x1.e88fcb22c8514p-188, 0.0, 0x1.96be88e52f871p-853,
     0.0, 0.0, 0.0, 0x1.ebc93d81c4ccep-890, 0x1.e8e853356d5a9p-496,
     0x1.89960d57cfb4ap-699, 0.0, 0x1.e62e3997c9802p-162, 0x1.af7e132ab3bc6p-125, 0.0,
     0x1.5bff115b7412ep-497, 0.0, 0x1.e7b60b2cf9462p-239, 0x1.55dd909559f76p-982,
     0x1.d83b327415ab4p-972, 0.0, 0.0, 0x1.c17a44fa7fefap-681, 0x1.1115f4293916fp-101,
     0.0, 0x1.30593604a5f43p-940, 0x1.c00cc9b6ab837p-706, 0.0, 0x1.8f6336007292bp-961,
     0.0, 0x1.71d3e124b33dap-947, 0x1.5e2c3c03114b1p-23, 0x1.f5eeda48bb4cdp-604, 0.0,
     0.0, 0.0, 0x1.c0a4ab9e561b1p-482, 0x1.57d518fe3c1f9p-906, 0.0,
     0x1.ed6ab07f0166dp-91, 0x1.e5ff0afedf77cp-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.800a8bea16dc8p-770, 0x1.0125f466871e5p-174, 0x1.168353febbd34p-97, 0.0,
     0.0, 0x1.15fc86ca35fdp-889, 0x1.1f048b67ac79fp-200, 0.0, 0.0, 0.0,
     0x1.65b6892e48f31p-66, 0.0, 0.0, 0x1.e3c8ede1496b8p-558, 0.0, 0.0, 0.0, 0.0,
     0x1.c5da626594102p-188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f1e4a19fa637p-18, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0961a63fb426ep-121, 0x1.fc92a695c8685p-852,
     0.0, 0.0, 0.0, 0.0, 0x1.952919270efb9p-145, 0x1.7d39c1039f194p-931,
     0x1.9aa3ba15ab53ep-552, 0x1.2b3e79deec038p-450, 0x1.a0ad9f97622afp-775, 0.0,
     0x1.f829af415f041p-306, 0x1.9bee31339c909p-595, 0.0, 0.0, 0.0,
     0x1.bb0e32933501cp-727, 0.0, 0x1.acb6bb0878debp-666, 0x1.59267e768e4ccp-415, 0.0,
     0x1.487454eaeca05p-497, 0x1.ffae63879f694p-8, 0x1.053409499fc2p-843,
     0x1.1d0361ec87042p-631, 0.0, 0.0, 0.0, 0.0, 0x1.7657969a06ea1p-20, 0.0,
     0x1.be09bf2fba744p-783, 0x1.164af4f979125p-630, 0x1.08d53c9a9daf9p-495, 0.0, 0.0,
     0x1.6057af6babc01p-362, 0.0, 0.0, 0.0, 0.0, 0x1.f9252809242dbp-8, 0.0, 0.0, 0.0,
     0x1.a8f618800937ap-350, 0x1.99efe513fd7cbp-712, 0.0, 0.0, 0x1.a336289613f8bp-85,
     0.0, 0x1.b9e224180416dp-746, 0x1.94c0bb546e4e3p-902, 0.0, 0.0,
     0x1.8c1e21ab6bfd6p-264, 0x1.4eee782fe9e04p-924, 0x1.8e0a227df1d03p-32, 0.0, 0.0,
     0.0, 0.0, 0x1.d4804184a3bfdp-483, 0.0, 0x1.496414ba14ff4p-993, 0.0, 0.0,
     0x1.5cd69c99c7173p-762, 0x1.ab1554d2ffdfbp-714, 0x1.c55bd799271bbp-628,
     0x1.269a7c6f4f864p-706, 0.0, 0x1.47d294939e04p-89, 0x1.4fa29c562b51p-273, 0.0,
     0x1.55bbe31566d2fp-107, 0.0, 0x1.23f42111663cbp-543, 0x1.9a7a035681d6cp-353, 0.0,
     0x1.ea97d93afbd5dp-257, 0x1.4a7c2f65f21a8p-577, 0.0, 0.0, 0.0,
     0x1.6760a91b983d3p-808, 0x1.81f2740d0afd5p-38, 0.0, 0x1.6a04049dea9cdp-771,
     0x1.fb97efe4f231cp-550, 0.0, 0.0, 0.0, 0x1.abb5decf1fe7ep-444,
     0x1.e4df6638d30e5p-56, 0.0, 0.0, 0.0, 0x1.e77b5b3aa640bp-1007,
     0x1.fa9be2bfe778cp-774, 0.0, 0x1.41a6ad548c0c8p-357, 0x1.8f1e7cc7ede7p-709,
     0x1.a6c86f67d3e2ep-565, 0x1.36ee91e99ae62p-455, 0.0, 0x1.4b0c4ba338ebp-804,
     0x1.6d80a9a5e6eap-1013, 0.0, 0.0, 0.0, 0x1.be9befef85b83p-919, 0.0,
     0x1.e4cea9fb1e151p-289, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc5a0cd192ea4p-516, 0.0,
     0x1.182a008ebb4b9p-985, 0x1.e49239b5eab6ep-342, 0.0, 0x1.0ad3a185546bep-493, 0.0,
     0x1.24c7f6183519cp-537, 0x1.c6a5135a9ba9ap-886, 0x1.1190e2387ba1ep-959,
     0x1.898f521af608dp-41, 0x1.94ada9e6d1603p-889, 0x1.98861d3b68f6cp-905,
     0x1.65e04b544b91dp-31, 0x1.621d17542b973p-795, 0.0, 0.0, 0x1.df44f48475489p-469,
     0x1.5ebe5ae8124adp-30, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_tgammad4_u10kvx(tmp0);
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
    printf("Sleef_tgammad4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tgammad4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
