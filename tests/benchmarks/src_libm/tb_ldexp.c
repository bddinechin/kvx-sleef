/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_ldexp.c --function ldexp --arity 2 --headers \
 *     math.h,ml_support_lib.h --input-formats binary64,int32 --precision \
 *     double --bench --no-embedded-bin --target kv3
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
     0x1.a44b8b71de31p-84, 0x1.f9f36b49dd67dp-180, 0.0, 0x1.1afc2ed0072bep-72,
     0x1.cde420417185bp-214, 0x1.706506d4bbda4p-880, 0.0, 0x1.d010514bfe896p-84,
     0x1.e52cad629ea1cp-640, 0x1.0963f72e46ad9p-513, 0.0, 0x1.c0b3c43ded1afp-733, 0.0,
     0x1.9c47f202457f1p-242, 0x1.48b9cb2d577d7p-825, 0x1.b6357321b4fe7p-785, 0.0,
     0x1.3c16a8f2bc8bp-275, 0.0, 0x1.322c392517bfep-743, 0x1.77e6128409b1p-305,
     0x1.28db62b83084bp-616, 0x1.7459cd75f9628p-20, 0x1.1145dbf7790bep-299, 0.0, 0.0,
     0.0, 0x1.d5f5bf2546981p-25, 0.0, 0.0, 0x1.917e21088afb3p-878,
     0x1.a665befa05be9p-306, 0.0, 0x1.951eda807961bp-22, 0.0, 0.0, 0.0,
     0x1.22903f04b67c5p-658, 0x1.598ca8d847f84p-911, 0x1.415d7c93e58bp-256, 0.0, 0.0,
     0x1.965a92941205bp-387, 0.0, 0.0, 0x1.9b659e6879a2ap-13, 0x1.eea951eee4e68p-169,
     0x1.57f45f5bb440fp-314, 0x1.90567aad139fep-812, 0x1.e479c4346750fp-16,
     0x1.d5fb817939833p-258, 0.0, 0.0, 0.0, 0x1.c9f734bbccea6p-284, 0.0, 0.0, 0.0,
     0x1.ef371488cc9bep-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a598c751c5649p-840, 0x1.eba9692fbfc6ep-571, 0.0, 0x1.691c013890d97p-403, 0.0,
     0.0, 0x1.bbbaba7f6b399p-120, 0x1.d5a202f1f6c58p-860, 0.0, 0x1.ddfb0abb988ffp-392,
     0x1.98b4da487274fp-622, 0.0, 0.0, 0x1.cf59a4edea382p-86, 0x1.f8fa2f1ff6d01p-741,
     0x1.bfc06b3fc3fep-909, 0.0, 0.0, 0x1.590a4324948b6p-930, 0x1.f6f8e4c50808ep-757,
     0x1.58ca7ded8de21p-101, 0x1.56309e654ec4p-886, 0.0, 0x1.ddf281ff274ebp-629, 0.0,
     0x1.52b61bf581e28p-197, 0x1.0727473b81abdp-333, 0.0, 0x1.ae12edb10d339p-491,
     0x1.33a09ac2618bap-725, 0x1.ccccaef18e2b7p-969, 0x1.95e07df417ec7p-789, 0.0,
     0x1.c679284d7bc4fp-708, 0.0, 0x1.4f4a384cdad43p-747, 0x1.832a779b99fafp-635, 0.0,
     0.0, 0.0, 0x1.1cc11c971494p-721, 0.0, 0x1.382f787a00352p-744, 0.0,
     0x1.445e1ff337e83p-557, 0.0, 0.0, 0.0, 0.0, 0x1.b9011cd3dd568p-23,
     0x1.c2dc9fa1e1ddep-865, 0x1.183db54ae2026p-242, 0x1.417c01b2c476bp-505, 0.0,
     0x1.bca24deb820b7p-36, 0.0, 0x1.4d87fc1cb46fdp-594, 0x1.8b80b1293c14p-769, 0.0,
     0x1.34e11e7c72fdfp-828, 0.0, 0x1.051b385ec58d1p-182, 0.0, 0x1.7173a460f20fap-339,
     0x1.8e01cd15bd20bp-1010, 0x1.7b208eb510995p-115, 0.0, 0x1.7c3bfd7103c15p-893,
     0.0, 0x1.14d3bb3c327a9p-544, 0.0, 0x1.38bb2d9be52cp-955, 0.0, 0.0,
     0x1.7770c344e3debp-347, 0.0, 0x1.559170ab407b4p-633, 0.0, 0.0, 0.0,
     0x1.709f9020bf815p-269, 0x1.065e11c97efa8p-882, 0x1.69bbd3c713cbcp-338,
     0x1.740314a501a93p-357, 0.0, 0x1.b1716ec5e63fp-834, 0.0, 0x1.68a17c8447777p-334,
     0x1.be151654a267fp-4, 0.0, 0x1.de8acb70668b6p-824, 0.0, 0x1.8acdf9914ffc8p-599,
     0x1.52417a7375332p-641, 0x1.28e0e393f73a2p-873, 0x1.8619f472c6877p-639, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1d599fc54351p-455, 0x1.0ad36f5a1d9bcp-898, 0.0,
     0x1.8cc361f5584f1p-501, 0.0, 0.0, 0x1.fb6498deeae71p-508, 0.0,
     0x1.2f21095eeb4e4p-1022, 0.0, 0.0, 0.0, 0x1.0d1d17703fb4dp-241,
     0x1.1224632e6be64p-917, 0x1.2406780f829c4p-268, 0x1.5d2a6c52aeeddp-234,
     0x1.c45ffe5f3545bp-871, 0x1.939430490e36ap-8, 0.0, 0x1.932a1a70e4f7fp-385,
     0x1.0c06bb2c5dfc2p-636, 0x1.a26dcd70a4fe3p-447, 0x1.c8ed06ab17857p-1007,
     0x1.9c9eec06cf179p-977, 0x1.5e9be8f47a905p-277, 0.0, 0x1.1288aa1b39233p-338, 0.0,
     0x1.59de662c4e434p-685, 0x1.6ca4e2beb45c6p-528, 0x1.b7427b8d5efa4p-894,
     0x1.c9fc1c6089ee2p-951, 0.0, 0x1.74ace3c927cd6p-579, 0.0, 0x1.0913eaa9e3c7ep-24,
     0.0, 0x1.5e650aa0e1abp-266, 0.0, 0x1.73f312229b06ep-557, 0.0, 0.0, 0.0,
     0x1.868d159bc1966p-208, 0.0, 0.0, 0x1.d0cb0ad55639fp-231, 0x1.4d9dfc5f671e1p-903,
     0x1.527a71e600094p-675, 0x1.fa47f8726673fp-63, 0.0, 0.0, 0.0,
     0x1.9de22225828a4p-582, 0.0, 0.0, 0x1.b20a42b12d6fcp-161, 0x1.a3a81200001b5p-39,
     0x1.26efc5c6c9e51p-4, 0.0, 0x1.67fb22d67bed6p-921, 0x1.a728e329c7fcdp-245,
     0x1.0f820861551a4p-456, 0.0, 0x1.a61cede1df323p-720, 0x1.39ea564101f5dp-887, 0.0,
     0.0, 0.0, 0x1.5a8806566497bp-777, 0.0, 0x1.035c2bfa9a44fp-152, 0.0,
     0x1.5ad9f08b2a1cdp-788, 0x1.8d7d86c1c485fp-635, 0x1.74eab9ca916c7p-351, 0.0, 0.0,
     0.0, 0x1.0464ca6ccc89fp-411, 0x1.e2e977cb2d2p-740, 0x1.7c32e0089841dp-172, 0.0,
     0.0, 0x1.0710dc596243cp-732, 0.0, 0.0, 0x1.15cd49ccc3ef4p-340,
     0x1.a4246d279cad4p-946, 0.0, 0.0, 0x1.90262194f9a9cp-616, 0.0, 0.0,
     0x1.c9029b403a559p-522, 0x1.f1d6de556414dp-999, 0.0, 0.0, 0.0,
     0x1.21375100f2adap-786, 0x1.e7ffa55e502ffp-318, 0.0, 0x1.cff1fa45fc3dbp-224, 0.0,
     0.0, 0x1.0004c42eadaaep-84, 0x1.a8c12468082e9p-803, 0x1.83c116f1e5cdap-6,
     0x1.38c5933e32dc9p-373, 0x1.8017927d8685ep-650, 0.0, 0.0, 0x1.ae0c71ec8877p-677,
     0x1.c243f2595fbp-626, 0.0, 0.0, 0.0, 0x1.a8b6ebd66c1ccp-707,
     0x1.3c8856071edf1p-910, 0x1.cdd06b1c8fadbp-846, 0.0, 0x1.8c63bb71acf3p-649, 0.0,
     0.0, 0.0, 0x1.71b21fe519c8ep-469, 0x1.b9f5e56e21d14p-226, 0.0, 0.0,
     0x1.1b25a26c5e10cp-459, 0x1.e9a404d34d22p-385, 0x1.1ac748e78055p-234,
     0x1.f8ad90e7e3771p-125, 0.0, 0x1.fcb323564c08p-620, 0x1.72b1c4fe65d3ap-527,
     0x1.15b9ab3904439p-373, 0.0, 0x1.b78c51db1b717p-90, 0x1.7829ff828ae09p-528, 0.0,
     0.0, 0x1.7be9d145535dep-129, 0x1.1ba612bb1bc75p-617, 0.0, 0.0, 0.0,
     0x1.c09f217374385p-479, 0.0, 0x1.65051eda6d898p-796, 0x1.740eed4f97dc6p-537, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ae30e397bf007p-187, 0.0, 0.0, 0.0, 0.0,
     0x1.b862b95909889p-553, 0.0, 0x1.87d89a06ef502p-155, 0x1.87c5f8b5ead6bp-938,
     0x1.a557a61bdc0d3p-61, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a36cb445b20f2p-733,
     0x1.1eba27fc3ce8ep-189, 0x1.a07eba4e0bbb2p-106, 0.0, 0x1.b3a42105cc006p-745,
     0x1.9fe292744e265p-114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.220f11442344p-301,
     0x1.23118fdf9d623p-113, 0.0, 0x1.045eb6bc44752p-631, 0x1.4fc84555bf62fp-738,
     0x1.3eb91abc40208p-1020, 0x1.9c59e6b9711f6p-688, 0x1.a531e7b9d913bp-4, 0.0,
     0x1.4cc582f0d01e4p-155, 0.0, 0x1.eb8e837a2ed7fp-512, 0.0, 0x1.2a336b003b5e5p-865,
     0.0, 0x1.430d19fdf9e5dp-249, 0x1.a2cd52427b6adp-290, 0.0, 0x1.bb9d5284a01cep-885,
     0.0, 0.0, 0x1.113aafc08b62p-533, 0.0, 0.0, 0x1.f7bb83ce46936p-708, 0.0,
     0x1.d5ee8daffb86ap-834, 0.0, 0.0, 0.0, 0.0, 0x1.6eb37ed06ae27p-199,
     0x1.9b6930d9876fbp-706, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c769d99ef65p-880, 0x1.5163253351776p-1021, 0.0, 0.0, 0.0,
     0x1.cb5b43880f376p-501, 0.0, 0x1.99b382beb285dp-927, 0.0, 0x1.a7d3ee411c6f3p-493,
     0x1.03779f645bc9fp-16, 0x1.94c3741860f66p-485, 0x1.c0ce8671e438dp-793, 0.0, 0.0,
     0x1.bf224bf383588p-476, 0.0, 0.0, 0x1.7ce3fafc08429p-261, 0x1.2a3ccb60cfdbap-474,
     0.0, 0x1.93655fefe09abp-970, 0x1.929bb706d7644p-44, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.48cd0a0d51be1p-846, 0.0, 0.0, 0x1.ee70e563cfbf8p-189, 0.0, 0.0,
     0x1.cf622a04e07c6p-908, 0.0, 0.0, 0x1.fd036218cb555p-440, 0.0, 0.0, 0.0, 0.0,
     0x1.9535344cae57p-213, 0.0, 0.0, 0x1.7470a348d9107p-680, 0x1.5c11ef77c49eap-482,
     0.0, 0.0, 0.0, 0x1.d9d439abf64a2p-421, 0.0, 0x1.e6364c48ff0fdp-964,
     0x1.6a37887f82d93p-839, 0.0, 0.0, 0.0, 0x1.bc24f7eab8478p-925,
     0x1.e21a3040152e3p-652, 0.0, 0x1.e3f281b1f7deap-1016, 0x1.e3869aff771dbp-839,
     0x1.e0f51e3ef9dfp-847, 0x1.af4f19a60713dp-349, 0x1.1d7aca823b2e4p-918, 0.0, 0.0,
     0x1.d2af9adc4a85fp-583, 0.0, 0.0, 0x1.48c8fb7ff5062p-261, 0.0, 0.0,
     0x1.96d4406b805d5p-1002, 0.0, 0x1.f9d44d8577062p-857, 0.0,
     0x1.6ebe57125ac95p-109, 0.0, 0x1.7bf6be93fcc79p-790, 0x1.5e561d62ea356p-908,
     0x1.bf5bd9304ea07p-571, 0x1.8f94172099703p-103, 0.0, 0.0, 0.0,
     0x1.756b0e66e50d8p-589, 0.0, 0x1.0132740dcdcdep-492, 0x1.7152b982a0964p-604, 0.0,
     0x1.6e4f12a927305p-863, 0x1.3bfafef00b48ep-994, 0x1.8bbbb32dcb2f4p-813, 0.0,
     0x1.7f4236fac1ae1p-679, 0x1.005007b5ebf0bp-594, 0x1.81fb789d096b2p-737,
     0x1.bb090a0fa2d9ap-286, 0x1.75a40a5b2a987p-178, 0x1.51c10991bd2edp-292,
     0x1.4bb5ce9e8e4c9p-1001, 0.0, 0.0, 0x1.61d8d07da0087p-602,
     0x1.d99e0280f2e36p-650, 0x1.5a5f6a47a0a06p-21, 0x1.b018255940e35p-174, 0.0,
     0x1.3dd01498f8674p-96, 0x1.773896aadfeb6p-878, 0x1.8d7d9caf74a08p-507,
     0x1.275edc295f8f9p-83, 0.0, 0.0, 0x1.41b35cd4c6d26p-327, 0.0,
     0x1.22acae53b5beap-192, 0x1.4f1f4401142edp-433, 0x1.46653d3c0c96dp-878,
     0x1.27311fcec4d1dp-433, 0.0, 0.0, 0x1.ab060fcf819e2p-481, 0x1.8d9c07ecb23d9p-19,
     0.0, 0x1.8ad3d3b24486ep-118, 0.0, 0.0, 0.0, 0x1.fcba7a7cee673p-557,
     0x1.5ad0aa8a50c95p-345, 0x1.6ed81cf63facbp-26, 0.0, 0.0, 0.0,
     0x1.446c5ca68eadp-105, 0.0, 0x1.c0d30425c2f3cp-110, 0x1.e530611f3b52dp-585,
     0x1.fd3e744a4305ap-734, 0x1.594c9b99f5a99p-188, 0.0, 0.0, 0.0,
     0x1.8efe9748e4fd6p-753, 0x1.aae8c799a1fcfp-148, 0.0, 0x1.13c6101e25c3dp-30, 0.0,
     0.0, 0x1.9a207faf35234p-85, 0.0, 0x1.b11a46959a37dp-225, 0.0,
     0x1.e2817864fc26p-55, 0x1.ad4ed40a269dap-252, 0x1.cab1b24b3d378p-644,
     0x1.6e28ed88bddddp-741, 0x1.430cab4be019ep-504, 0x1.0434826b981afp-883, 0.0,
     0x1.f20911ff51f37p-328, 0x1.de90539b68d9bp-659, 0.0, 0x1.7d2b2cc78628ap-966,
     0x1.45e929f721494p-287, 0x1.ee5399aa13b16p-377, 0x1.c3e405dcd61ep-1011, 0.0, 0.0,
     0.0, 0.0, 0x1.9229f30a0a643p-687, 0.0, 0.0, 0.0, 0x1.c6a939bdb7b67p-248,
     0x1.938f8bb17f7a3p-249, 0x1.adb99f6101332p-190, 0.0, 0.0, 0x1.69c366002ac35p-370,
     0.0, 0x1.7b409dfc08b25p-285, 0x1.91c1331df54b4p-875, 0x1.ad5ddab3c605dp-751,
     0x1.afd0739d57956p-959, 0x1.7b48ebeefc327p-783, 0x1.f880fa14dd0ccp-533,
     0x1.89c9723e0a0a8p-270, 0x1.f36e677bb58fep-517, 0.0, 0x1.7077c170deab2p-619, 0.0,
     0x1.5b9d23c97bf99p-63, 0.0, 0x1.784e67473cd47p-736, 0.0, 0x1.b7ec54b6b7479p-596,
     0.0, 0.0, 0.0, 0x1.45918c4fce737p-919, 0x1.1c692b535f12bp-384, 0.0,
     0x1.8f57833f5727dp-651, 0x1.faf1cd45214f7p-504, 0x1.a2a1166516b29p-914, 0.0, 0.0,
     0x1.785e1c6cffdbdp-155, 0x1.fc164f1589cbep-989, 0.0, 0.0, 0.0,
     0x1.fa5b150c8cce5p-702, 0.0, 0x1.2a98367ba939fp-166, 0x1.101b574d84549p-214,
     0x1.312f7fdf7ff96p-604, 0x1.fa8379dddc11ap-195, 0.0, 0.0, 0.0,
     0x1.5e4d5cfb4e1f9p-512, 0x1.2c23bdcf0de86p-842, 0.0, 0x1.e8a36d0654668p-806, 0.0,
     0x1.abe6b0a8c3d32p-526, 0.0, 0.0, 0x1.025001babd858p-270, 0x1.d7f2da3d322f8p-82,
     0x1.2a14c11396a76p-647, 0.0, 0x1.4e257620eb52ap-189, 0.0, 0x1.b87aa2754f044p-194,
     0.0, 0.0, 0x1.a09de609c248ep-619, 0x1.df2eb3211ec14p-199, 0x1.a6aa29584192p-989,
     0.0, 0.0, 0.0, 0x1.01445fd3856bdp-725, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec3c1e090f51cp-134, 0.0, 0x1.d3071fe921ff1p-1020, 0x1.a209f3915b142p-486,
     0.0, 0.0, 0x1.84c6e8b0c0b76p-135, 0.0, 0.0, 0.0, 0x1.7ef9457a461c1p-561, 0.0,
     0x1.204f33a6e586fp-633, 0x1.c527ea20fdca7p-333, 0x1.ac71a272cdc0bp-303,
     0x1.aa4a694633668p-819, 0x1.e5559b0138391p-830, 0x1.76dc95be0071cp-890,
     0x1.ad7aff22440a7p-901, 0x1.4157975f798bbp-450, 0.0, 0.0, 0.0,
     0x1.be11c18505e76p-489, 0.0, 0.0, 0.0, 0x1.b4137ded07dd7p-296, 0.0, 0.0, 0.0,
     0x1.39489c626b837p-964, 0x1.f47948477c0c6p-464, 0x1.0a427161c2973p-620, 0.0, 0.0,
     0.0, 0.0, 0x1.783d9b64c3bd1p-170, 0.0, 0.0, 0x1.45617c2903dafp-359,
     0x1.f6410f7e4f241p-979, 0.0, 0x1.434064b4c9481p-709, 0x1.1a7c2a2e6f7cfp-802, 0.0,
     0x1.2460142bdfc85p-659, 0.0, 0.0, 0x1.1bbe75ef3f8e5p-942, 0x1.2e8d255b8bd14p-851,
     0x1.59796bc04128p-315, 0.0, 0x1.977c1c0819e46p-77, 0x1.0a71f9fe6f5f8p-551, 0.0,
     0x1.7b6459c454722p-284, 0.0, 0x1.cd736910ce87fp-87, 0.0, 0.0,
     0x1.3a20e51149d5fp-575, 0.0, 0x1.1d0be7dee1054p-885, 0.0, 0x1.ffcf537a585f7p-226,
     0.0, 0.0, 0.0, 0x1.3e76c3195508ap-848, 0x1.7c20f3b84a3aep-368,
     0x1.b50902ca3e333p-73, 0x1.b53f3759d0f4fp-183, 0x1.de3f96d403f41p-328,
     0x1.312e7d7b5c1b8p-770, 0x1.9848b9deb6827p-579, 0.0, 0.0, 0x1.673a29a4f0bf6p-902,
     0.0, 0x1.53594e7a96178p-272, 0.0, 0x1.6b0a7f6a4eb8dp-46, 0x1.2a7bcea3a6efcp-485,
     0x1.8dc56342a3eadp-217, 0.0, 0x1.7ad68a0e6329ep-1008, 0x1.27f5723a7e82cp-187,
     0x1.d4975afa0a17ap-859, 0.0, 0x1.123a8aef37177p-491, 0.0, 0.0,
     0x1.d5012dff7f294p-916, 0.0, 0.0, 0x1.530a2caab090dp-374, 0x1.f37d74b4fdfbdp-574,
     0x1.8d12d3a97fc79p-691, 0.0, 0x1.e61258e4e55edp-339, 0.0, 0.0, 0.0,
     0x1.0658f5ad77ae3p-994, 0x1.a30ec8d945c2ep-739, 0.0, 0x1.73a03166ba37dp-1011,
     0x1.3d2fbd01794ccp-265, 0.0, 0.0, 0.0, 0x1.6ada80fc67a64p-6,
     0x1.524a39a10edfp-700, 0.0, 0x1.3c9f9bc746dcdp-410, 0x1.10e200f40afc7p-357, 0.0,
     0x1.6b0719248b9cbp-766, 0x1.0a48924fcc66cp-940, 0x1.28fbe8c886b81p-25,
     0x1.9dbf5e3480dfdp-497, 0x1.9d1709916786ep-336, 0x1.39d3173e68e4bp-623, 0.0, 0.0,
     0.0, 0x1.a07944eead256p-864, 0x1.a9e3857831416p-820, 0.0, 0x1.302c461db7c19p-720,
     0x1.cfc622be01487p-391, 0x1.9353da2d691c7p-791, 0.0, 0.0, 0x1.fd63a6b0d541bp-57,
     0.0, 0.0, 0x1.355cb6f2701efp-92, 0x1.84bf79e7ff663p-851, 0.0, 0.0, 0.0,
     0x1.f13ad6228be96p-137, 0.0, 0x1.6e0f8757507ddp-794, 0.0, 0x1.44ed78974d85p-820,
     0.0, 0x1.ac4bec40b0f8dp-383, 0.0, 0.0, 0x1.ea53c1a02c0d9p-697,
     0x1.a0a5623edc62bp-78, 0x1.9dce80d5b7b4ep-733, 0x1.861bc8503e743p-244, 0.0,
     0x1.61e7d509e7b09p-31, 0.0, 0x1.911ffcae212ecp-575, 0x1.dd178ac62bfbp-509, 0.0,
     0.0, 0.0, 0.0, 0x1.ee162368105efp-269, 0.0, 0x1.5104534288786p-132, 0.0,
     0x1.37135c0074edbp-583, 0.0, 0x1.dead315f29af4p-612, 0.0, 0x1.91c8e91d20a95p-451,
     0x1.6a941a875f7d1p-648, 0.0, 0.0, 0x1.2ea4010119351p-704, 0x1.587f062b1e6b7p-671,
     0x1.a85dc1d12a0acp-642, 0.0, 0.0, 0x1.fd9d562fe7b4p-461, 0.0,
     0x1.562e265e2901bp-464, 0x1.59f28d40109fcp-150, 0x1.8240edd9a34efp-385,
     0x1.de20d036e41c6p-751, 0x1.792f01862f5d1p-497, 0x1.fc98341658068p-218,
     0x1.300613022418ep-185, 0.0, 0.0, 0x1.41c0b0b1d8cf4p-159, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c9c317de5e94fp-883, 0x1.ae17ab3192151p-860, 0.0,
     0x1.1b32de6ba1cb6p-153, 0x1.4b0528f0c9e55p-981, 0x1.78c37ef4b1858p-262,
     0x1.84f0b039f013ap-391, 0x1.d67c988012392p-701, 0x1.6ffe775e73e6bp-311, 0.0,
     0x1.dd1e325deada2p-302, 0x1.e8904342b45c6p-949, 0x1.6dad07ead5cadp-73, 0.0,
     0x1.80c4bc755c2eap-472, 0x1.286a72579a281p-635, 0x1.b79aa1bccff7ep-133, 0.0,
     0x1.344b8e02f920cp-284, 0x1.2bc8c7ba28c63p-187, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.556d0b163e328p-988, 0x1.4cb8590ffdd35p-54, 0x1.22f730335212bp-91,
     0x1.f6af08248844dp-282, 0.0, 0.0, 0x1.00e12deb3f421p-678, 0x1.bf26d031ad165p-423,
     0.0, 0.0, 0x1.a95b88c7567b3p-571, 0x1.9235930b7a3adp-272, 0x1.050ef71f4972ap-416,
     0x1.c1302ea1a7621p-18, 0x1.0376c5930c277p-271, 0.0, 0.0, 0x1.7f1bbe24279c6p-492,
     0.0, 0.0, 0x1.d9a2d2adf60e8p-422, 0.0, 0x1.715df7e004f22p-150,
     0x1.1a863eb4ebe48p-770, 0x1.e9139a0c736cdp-885, 0.0, 0.0, 0x1.c1e49b2d54b72p-225,
     0x1.841ad4ee38176p-123, 0.0, 0x1.b6054d0cdb7d6p-928, 0x1.8f64ac733ceep-142, 0.0,
     0.0, 0x1.c4647500b2121p-633, 0.0, 0.0, 0x1.332e5dab68b4ap-258,
     0x1.f940b1fba0cbap-922, 0x1.597287deaa177p-266, 0.0, 0x1.3b6ad08ecf25p-294, 0.0,
     0x1.2bf2c0f0df9dbp-483, 0.0, 0x1.3bf74044457e5p-661, 0x1.e3f2070c6189cp-911,
     0x1.e4f3ffbf2e582p-942, 0.0, 0.0, 0x1.a883fe96d5512p-733, 0.0, 0.0, 0.0, 0.0,
     0x1.e4a48e85ecd75p-542, 0x1.843053853c97bp-845, 0x1.e3f393acddc3cp-775,
     0x1.8b7c268570308p-870, 0x1.97bd9ad5d65dap-824, 0.0, 0x1.25b7769b76ab4p-982,
     0x1.2cbc36a3650ap-640, 0.0, 0x1.e00978faab7d9p-364, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8ad2efe6174bp-518, 0x1.e7cfd032f9236p-781, 0x1.2bb69b59cadb8p-732, 0.0,
     0x1.07dd50c85c8d9p-343, 0.0, 0.0, 0.0, 0x1.b9c368d5404a5p-984, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f5570d470bc9dp-870, 0x1.760cb17af517ep-984,
     0x1.aa1f74d814c19p-758, 0x1.52f36bcb93bbdp-617, 0.0, 0x1.57ec709988c09p-350,
     0x1.e9dedc12e19ebp-937, 0.0, 0.0, 0x1.6cc3a656510edp-486, 0x1.babfeff0f0919p-719,
     0.0, 0.0, 0.0, 0x1.9dad169a1b409p-686, 0.0, 0.0, 0.0, 0x1.8d0376c90f03dp-649,
     0x1.0f6c3f65b5588p-885, 0.0, 0.0, 0.0, 0x1.09fc4a0312479p-464, 0.0,
     0x1.df04b297f755fp-526, 0x1.ed528653fd859p-805, 0.0, 0x1.ddbdd59d62fc1p-971,
     0x1.71dbd22c2e6d2p-594, 0.0, 0x1.7d1b944f43196p-619, 0.0, 0x1.ad007cd62d0a4p-329,
     0x1.9723d8c7aef1ap-882, 0.0, 0.0, 0.0, 0x1.2cfe5eb19ddefp-194
};
static const int32_t external_bench_wrapper_input_table_arg1[1001]  = {
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0)
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
            int32_t tmp1;
            double tmp2;
            double tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = ldexp(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("ldexp %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("ldexp bench acc %la\n", global_bench_acc);
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
