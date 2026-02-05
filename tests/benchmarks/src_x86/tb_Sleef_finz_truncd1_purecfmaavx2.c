/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncd1_purecfma.c --function \
 *     Sleef_finz_truncd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.05900cef10ee5p-34, 0.0, 0x1.eb389756e3158p-412, 0x1.9d75adef4a9cfp-752,
     0x1.60371899469bcp-140, 0.0, 0.0, 0.0, 0.0, 0x1.1d22136a56945p-561,
     0x1.ca02d29db51c8p-569, 0x1.eb0ab240c924dp-422, 0x1.125d746652e06p-522,
     0x1.99ff39948d2a6p-736, 0x1.249ffb9fd498ep-1022, 0.0, 0x1.d169c6754f154p-43,
     0x1.4d937832b383dp-103, 0x1.23cca722a3c2ep-247, 0.0, 0.0, 0x1.9f046ff7db7f3p-688,
     0.0, 0x1.03e5d8fd9798ap-736, 0x1.3f839b6cd9acdp-912, 0.0, 0x1.dd6ec56354504p-418,
     0.0, 0.0, 0x1.09d7eed43b61cp-947, 0x1.c4cc63ab9bc5dp-226, 0.0,
     0x1.b0c5b18746532p-820, 0x1.f5c1800b0b58cp-502, 0x1.c786fbc011804p-126,
     0x1.ecc754715b6e6p-771, 0x1.132724e9fc2d7p-599, 0.0, 0.0, 0x1.1c591b306b386p-766,
     0x1.f63084b43f3d6p-128, 0x1.98ec0f6c4226dp-854, 0x1.9d1c3ef497eddp-406,
     0x1.1d2a32f33f27p-58, 0x1.db9fe9241cfcfp-683, 0.0, 0x1.90f4e8d2642ebp-996,
     0x1.3a76d414bc97fp-937, 0x1.faa1a88152a29p-477, 0.0, 0.0, 0x1.3831169cede1p-772,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec8a76f1649dp-362, 0.0, 0.0,
     0x1.e270b50484e04p-576, 0x1.428a24f704b14p-55, 0.0, 0x1.5303e2f48c0f7p-136,
     0x1.0797134e6baacp-42, 0x1.2514f4074a3d2p-334, 0.0, 0.0, 0x1.b98761320f4d9p-343,
     0.0, 0x1.283a5936b2a1dp-978, 0x1.4cf95abf1f14ap-834, 0.0, 0x1.a8534d711dc9cp-892,
     0x1.58761aa2cf23cp-588, 0x1.2d6f318dd650bp-524, 0.0, 0.0, 0.0,
     0x1.bd93932402a78p-372, 0.0, 0.0, 0x1.c275c6cf3ab7dp-841, 0.0, 0.0, 0.0, 0.0,
     0x1.38d342927eb6fp-621, 0x1.0027156422d63p-494, 0.0, 0.0, 0.0,
     0x1.778dfadf7171cp-1015, 0x1.b55a843a13439p-596, 0x1.488c88345dd31p-333, 0.0,
     0x1.2d5349260a889p-434, 0x1.b1dab3ff7054bp-634, 0x1.d82fbb9f9cc3fp-46, 0.0, 0.0,
     0.0, 0x1.2d60d2f0591eep-112, 0.0, 0.0, 0x1.e2810e1760b36p-410,
     0x1.496936c57b151p-566, 0.0, 0x1.cf47765a87a96p-589, 0x1.475983092baf5p-713,
     0x1.78c7ee6c94392p-944, 0x1.d431d312967f1p-1020, 0x1.5d3c16bd1091ep-559,
     0x1.c6a0a11e345cfp-960, 0.0, 0x1.b6a2739be26d9p-194, 0.0, 0x1.b0be0d9aebe95p-46,
     0x1.06de6d0ac1ca4p-495, 0x1.625655fd05f13p-132, 0.0, 0x1.5d807e54b3bf6p-665, 0.0,
     0x1.b0560f27da107p-399, 0.0, 0x1.6bbf4d865cd78p-761, 0x1.70a649d7ffcb7p-4,
     0x1.8262f122e4f55p-822, 0x1.aff3a0238c0bfp-570, 0x1.44fdfb9586eb8p-355,
     0x1.ca3a4843fdea7p-536, 0x1.532cef8ee537cp-996, 0.0, 0x1.c3cb1cb673b4ap-420,
     0x1.bd1381839ec98p-473, 0.0, 0.0, 0x1.e3ce909ce6272p-285, 0x1.365b394f337f7p-743,
     0x1.1d6a3c9206248p-803, 0.0, 0x1.75db43b7e4454p-898, 0.0, 0.0, 0.0, 0.0,
     0x1.54faf3e72e529p-582, 0x1.32b4bfa74d385p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.ebab71c1c74a1p-581, 0x1.a79dd8038ebf4p-85, 0x1.4fe60f84dba09p-936,
     0x1.dcef2857d96c8p-856, 0.0, 0.0, 0x1.835da47082b23p-499, 0x1.f547149f02c15p-360,
     0.0, 0.0, 0x1.32bf0c3941178p-924, 0.0, 0x1.d3479cbd9593fp-368,
     0x1.2c4508617df51p-153, 0.0, 0.0, 0x1.f93e576c77eefp-277, 0.0,
     0x1.38b5cb31a99b8p-193, 0.0, 0.0, 0.0, 0.0, 0x1.941886c6e3446p-214,
     0x1.82bbabed1438dp-239, 0.0, 0.0, 0x1.f140f0b929d4p-484, 0.0,
     0x1.73404d258801ap-699, 0x1.1274ac8e42792p-582, 0.0, 0.0, 0x1.99adca3cd4511p-589,
     0.0, 0.0, 0.0, 0x1.430a02bd44b42p-319, 0.0, 0x1.d0204b229b2dbp-203,
     0x1.d895664e65604p-736, 0.0, 0x1.b3476beb638cbp-296, 0x1.d810c69464bc7p-909,
     0x1.7bac31bbe295p-751, 0x1.6c6dbffb9575cp-191, 0x1.ae55ef28b1a38p-927, 0.0,
     0x1.4a0aba591cf45p-721, 0.0, 0.0, 0x1.16a97045c275p-441, 0x1.a9d8e363ca6eep-110,
     0x1.16aab50ef754p-880, 0.0, 0x1.6b5d0134d55a7p-173, 0x1.281b76eab118ap-301,
     0x1.ffbc999ce6b3dp-61, 0x1.e33f72e757ca8p-146, 0x1.71ab78aa6e838p-224, 0.0, 0.0,
     0x1.5e495ae595366p-193, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb6f8d07ad4b6p-670, 0x1.9c2849b00bbbbp-895, 0x1.35c47c4e267f6p-6,
     0x1.cbde0de7cfcf3p-365, 0x1.50dc1d8a81ccap-363, 0x1.5e83a5e9186dcp-377,
     0x1.d974fb8a68fdcp-197, 0x1.2828134956c28p-845, 0.0, 0.0, 0x1.66575d0aa2a8ap-338,
     0x1.8638f3c3f48b6p-438, 0.0, 0x1.01c8762987b11p-153, 0.0, 0.0,
     0x1.cf94ba1d3ad33p-653, 0x1.edfdedf582a6dp-711, 0x1.dabd7a58dfb75p-670, 0.0, 0.0,
     0x1.e0fb920d38c32p-154, 0.0, 0x1.3f2695bb28cdbp-599, 0.0, 0x1.a1a3fe30a9599p-37,
     0.0, 0x1.f3bc304a29242p-1006, 0.0, 0.0, 0.0, 0x1.7c2ae6174385p-182, 0.0, 0.0,
     0x1.3f9aa24c9af0cp-902, 0x1.e2c2d3ed662e9p-468, 0.0, 0x1.b36f49eb2c3d2p-850,
     0x1.91f16d1ba823dp-36, 0x1.8749da508ddfep-429, 0.0, 0x1.18da263b2ffecp-579, 0.0,
     0.0, 0x1.6ef9876407ea7p-453, 0.0, 0x1.c0e1610653addp-438, 0.0,
     0x1.c3f4a77a334c4p-1020, 0.0, 0x1.b879fffa558ep-764, 0x1.6ec052fa0fd64p-227,
     0x1.3a367f85f985ep-319, 0.0, 0x1.20f486c4e5e06p-101, 0.0, 0x1.adf187540a53cp-631,
     0x1.20e62910f2c1ep-677, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34c0aee5fef68p-982, 0.0, 0.0, 0x1.369398f3a73e3p-103, 0.0, 0.0, 0.0, 0.0,
     0x1.ca728feb837eap-730, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11faf164dc7d9p-572,
     0x1.5e2ddfe44a0a1p-890, 0.0, 0x1.3113d7969f1f9p-290, 0.0, 0.0,
     0x1.551f4a045fd2dp-638, 0.0, 0x1.c68ee2d205773p-331, 0.0, 0x1.85e7c59e15042p-338,
     0x1.22a9bf9bc517ap-670, 0x1.f0de3889fbe02p-322, 0x1.f4febf48e6e4p-611,
     0x1.51e047a07bc06p-256, 0x1.2b205258ce218p-915, 0x1.9cdfd25e1637fp-834, 0.0, 0.0,
     0x1.b46673fe39eb2p-778, 0.0, 0x1.49c95b9f7e461p-94, 0x1.6c2d62fcc76a6p-325, 0.0,
     0.0, 0x1.7f4674be040dap-742, 0x1.d98e3a9f3d139p-809, 0.0, 0x1.8a9abeb18ee95p-739,
     0x1.4d7d756f530bbp-607, 0x1.c598bf32d359p-139, 0.0, 0x1.653e2a9e27ec1p-552, 0.0,
     0x1.1471393e3d4a2p-334, 0x1.c0790e4e60a58p-184, 0.0, 0x1.815920923f5c8p-878, 0.0,
     0.0, 0x1.f5eaef5e8d88ap-202, 0.0, 0x1.b2837b1af7488p-465, 0.0,
     0x1.0f28b8842ca6cp-387, 0.0, 0x1.6a65691c9e648p-728, 0.0, 0x1.807c5f885ce64p-850,
     0x1.90482451278cdp-887, 0.0, 0.0, 0.0, 0x1.36cb55f97c067p-59,
     0x1.3e957062c7507p-779, 0.0, 0x1.3e1c8428f31d5p-768, 0.0, 0x1.759c38129d3c5p-560,
     0x1.8bc762664fdfap-782, 0x1.ff0d55cfef21p-181, 0x1.107f809c7b595p-410, 0.0,
     0x1.2b76f1436ed32p-948, 0.0, 0.0, 0.0, 0x1.25a11dd735353p-26,
     0x1.4eded14ce3753p-867, 0.0, 0.0, 0x1.2de2ab19d549ep-398, 0.0,
     0x1.371488c32e5abp-201, 0.0, 0x1.de37a756dc449p-300, 0.0,
     0x1.20b341b4b9b5cp-1016, 0.0, 0x1.c77614b0dcf09p-913, 0.0, 0.0,
     0x1.b10138a614a16p-462, 0.0, 0x1.579b9db65963fp-751, 0x1.3e42a4c57dacep-48,
     0x1.4fe9c34ed5ccdp-532, 0x1.8f27fe953fdf6p-887, 0.0, 0x1.488343de9306ap-756, 0.0,
     0.0, 0.0, 0x1.1c05f2ec106eep-646, 0.0, 0.0, 0.0, 0x1.152992778b5acp-300, 0.0,
     0x1.f45902aebdc7ep-370, 0.0, 0x1.4296293c641d6p-626, 0x1.49a45b8d1aa61p-801,
     0x1.63b0951cc3055p-245, 0.0, 0x1.995adf891dd8bp-643, 0x1.59a19effa8d92p-389, 0.0,
     0.0, 0x1.51f03b87ac67bp-791, 0x1.d962502ae3bc8p-367, 0x1.9f1c856463b3cp-990, 0.0,
     0x1.1068b3dde1567p-762, 0x1.192daccfa9b23p-242, 0.0, 0.0, 0x1.c69120449dbbfp-224,
     0.0, 0.0, 0x1.2070f0303a30cp-597, 0.0, 0x1.19ddd2e73f607p-209, 0.0, 0.0,
     0x1.337645ea086dp-159, 0.0, 0x1.ec81b107c3c01p-852, 0.0, 0.0,
     0x1.705e583a4d0a9p-290, 0x1.ef906b6cd6079p-822, 0x1.e1a96a65174d3p-310, 0.0, 0.0,
     0x1.e7b73c74b3477p-932, 0x1.be6a8a297886fp-33, 0x1.bb0798e7d5e9fp-881,
     0x1.b0dc8ce455578p-315, 0x1.fe782c9e82dfdp-268, 0x1.d7936789d614ep-1,
     0x1.7fdc30e456cf2p-262, 0.0, 0x1.a969eb3f599cp-772, 0x1.58bf2ac905cb8p-728, 0.0,
     0x1.8c39b9aeb8f1p-574, 0x1.08a5db944c75p-341, 0.0, 0x1.adb9d7766bc21p-79,
     0x1.c52aaa6bd1ffap-485, 0x1.49449964f9fb8p-770, 0.0, 0x1.14a1adc606738p-926, 0.0,
     0x1.dc4ba8a77de84p-561, 0x1.80f5ecb1b0115p-256, 0x1.509c4a7a79aa5p-32, 0.0, 0.0,
     0.0, 0x1.b12f79ce53d73p-688, 0.0, 0x1.15917dbf1384cp-226, 0x1.6a60ea194b6dbp-69,
     0x1.bb11ec57d90e6p-627, 0x1.c54d518cfa256p-743, 0.0, 0.0, 0x1.510749a841652p-296,
     0x1.b10cda382bf33p-722, 0x1.23cbfe4ec4f9dp-982, 0x1.3ba01cf34386dp-606, 0.0, 0.0,
     0.0, 0x1.e9667f84f9accp-758, 0x1.e960a708b1c2fp-813, 0.0, 0x1.ed1ed25946254p-641,
     0x1.7172977a4ed49p-874, 0x1.c6cc4200fd127p-967, 0.0, 0.0, 0.0,
     0x1.28ff6a49d75cfp-746, 0x1.1c466ec985df4p-28, 0.0, 0.0, 0.0,
     0x1.ab643e3505f12p-483, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53508ba2c8848p-530, 0.0,
     0x1.f55984ce895e8p-787, 0.0, 0.0, 0.0, 0x1.c0ac6ee2e3238p-859,
     0x1.8ba95a9131279p-720, 0x1.9157b25b2b50fp-890, 0.0, 0.0, 0.0,
     0x1.ab6f3764fae85p-418, 0x1.3f48dc8282fe5p-478, 0x1.2f2f77ec18b7dp-230, 0.0, 0.0,
     0.0, 0x1.e0d7c736fc6bap-135, 0x1.6710636c7d2fep-245, 0.0, 0x1.d663cf12d2488p-467,
     0.0, 0x1.173b1110c43e1p-881, 0.0, 0x1.3b8e3f1644a11p-655, 0x1.b3f559b65c682p-139,
     0.0, 0.0, 0.0, 0x1.b0317ceb0506bp-268, 0.0, 0x1.f686c1a73a313p-400, 0.0, 0.0,
     0x1.b583e71b52a29p-663, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b4454c9116c05p-101, 0x1.fe5aa0fa93938p-729, 0.0, 0.0, 0x1.4bc0ab81f11aap-458,
     0.0, 0.0, 0.0, 0x1.aa5bfae553f98p-590, 0.0, 0.0, 0.0, 0x1.46ee3725f0c8dp-463,
     0.0, 0x1.7fa50db030464p-140, 0.0, 0x1.a213826b47189p-798, 0.0, 0.0,
     0x1.ec378391c65aap-822, 0x1.644f796fa0b3fp-643, 0x1.47c676a8dc714p-303,
     0x1.a227493b6a30dp-669, 0x1.fab18e40d6212p-931, 0.0, 0x1.a4d386a65138ep-698,
     0x1.3582150a754b4p-770, 0x1.e4007b5d9070fp-835, 0x1.bd8476a96b87ap-834,
     0x1.96f4807e3a39p-67, 0.0, 0x1.bcd5cc556b425p-1014, 0x1.2bacfe006734fp-907,
     0x1.9fb5a09990333p-610, 0x1.86fd99a577671p-8, 0.0, 0x1.3a631d4cfe4f8p-286, 0.0,
     0.0, 0x1.1b186dd9e5e8ap-894, 0.0, 0x1.b93f6087a066p-280, 0x1.b6f22ef162fdap-31,
     0.0, 0x1.cab7855173b28p-303, 0.0, 0x1.d7995481be883p-805, 0.0, 0.0, 0.0,
     0x1.3cb3bcd5dfeb7p-57, 0x1.da0f455fa80acp-560, 0x1.b81763ee4b8fcp-67, 0.0, 0.0,
     0x1.8a40b69949b4bp-302, 0x1.dfb1233e4da1ap-265, 0.0, 0x1.c5cd0959b70d7p-284,
     0x1.d0f341eeb58b5p-283, 0x1.fe60671a326c4p-507, 0.0, 0x1.61a8fa54f728ep-20,
     0x1.e200d91d70689p-897, 0x1.e85c3aaabfdcfp-92, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.139e55563bb3bp-134, 0.0, 0x1.ff02f482847e4p-858, 0x1.b9287c4e4210ap-178, 0.0,
     0x1.9f0c5af335c8cp-710, 0x1.c28d4a3bff7bfp-176, 0x1.c8a30722e3695p-401, 0.0,
     0x1.52d0cd4e1c1d1p-300, 0.0, 0x1.8a5a82834a1e3p-50, 0x1.52322aa0d7f7ap-164, 0.0,
     0.0, 0x1.bfe3583227054p-406, 0.0, 0.0, 0x1.5cb5864ff1b67p-896,
     0x1.daf5196c6b42ap-214, 0.0, 0.0, 0x1.677335f5e759bp-117, 0x1.62d453bd9608cp-65,
     0x1.21c1b6fdb4573p-545, 0.0, 0.0, 0.0, 0.0, 0x1.91cfc25e0b623p-358,
     0x1.b8725d12ca065p-730, 0x1.88bbca2a493c5p-137, 0.0, 0x1.fe6d2a5565a47p-485, 0.0,
     0.0, 0x1.e92f2c813a8f8p-516, 0x1.bf1691bf12b6ep-182, 0x1.d7dfcbb669beep-208,
     0x1.7931f721ba447p-240, 0.0, 0x1.3b70ab0845825p-410, 0x1.dde3c0a484129p-887,
     0x1.93950e2e4480ap-43, 0.0, 0.0, 0x1.37d44e98c4416p-770, 0x1.c3b32b357678fp-521,
     0x1.0fd199ece3d3cp-968, 0x1.0387cc3904483p-284, 0x1.5ab66378c11fbp-166,
     0x1.7ca8fd6abda4ep-170, 0x1.0d1910258c911p-452, 0.0, 0.0, 0.0, 0.0,
     0x1.b1d3f885a6de2p-802, 0x1.d15fd58ca4f34p-413, 0.0, 0x1.67ab2ad8bb44ap-491, 0.0,
     0.0, 0.0, 0x1.a5fab5d220f16p-339, 0x1.f5adc60378f85p-100, 0.0,
     0x1.8654e527c4f4ap-844, 0.0, 0x1.0277169e44346p-736, 0x1.6a83f6625ac6fp-354,
     0x1.c1e2abbd42775p-338, 0.0, 0.0, 0.0, 0.0, 0x1.d90235bdcca2p-121, 0.0,
     0x1.8f85078b7e938p-272, 0x1.1038d5d5a644bp-304, 0x1.778bee186422cp-65, 0.0, 0.0,
     0x1.057ce7c4402e5p-145, 0x1.b3599535845d9p-600, 0x1.39840292ea234p-313,
     0x1.df818db6bb3a1p-10, 0.0, 0x1.fb7b609e2907ap-145, 0.0, 0.0,
     0x1.92854e01b8fb1p-271, 0x1.8fada6bfa3d73p-217, 0.0, 0x1.b131bc3705acfp-261, 0.0,
     0.0, 0.0, 0x1.b829ecd71012bp-401, 0.0, 0x1.02464d36ae474p-626, 0.0,
     0x1.47066ae7731cbp-363, 0x1.bac1da8717a86p-226, 0x1.08d76cc02f98fp-910, 0.0,
     0x1.189af2a66b1a2p-841, 0x1.deb9fefee1913p-525, 0x1.77abd7a99eef1p-592, 0.0,
     0x1.58bfe8d9c7cd6p-824, 0x1.9af71dbaf7dfep-578, 0x1.ad356be11f11bp-1018,
     0x1.216905aba80d4p-904, 0x1.d26eb2ba9b8dcp-620, 0.0, 0x1.ef3ca126d000ap-53,
     0x1.c3e201a08b554p-855, 0x1.91d74ec360cefp-816, 0.0, 0x1.39fc290eaf886p-908, 0.0,
     0.0, 0x1.59fb075c0916fp-317, 0.0, 0.0, 0.0, 0x1.18fdc96e7d829p-520, 0.0,
     0x1.a8dcd8851c3b2p-695, 0.0, 0x1.6df64d0b81966p-467, 0.0, 0.0,
     0x1.b4243701d43d5p-439, 0.0, 0x1.d4854f690a8a8p-891, 0x1.9c16c4799f18ep-450, 0.0,
     0.0, 0.0, 0.0, 0x1.5cf4da55dc02bp-732, 0.0, 0x1.978a7b4736389p-385, 0.0, 0.0,
     0x1.f8600d6214eb3p-278, 0x1.755dbd2a39bfcp-452, 0.0, 0x1.19da11d53da06p-384, 0.0,
     0.0, 0x1.49a13b576a1b2p-183, 0.0, 0.0, 0.0, 0x1.309334f632d34p-496,
     0x1.4f175c00be937p-103, 0x1.38db93d455351p-552, 0.0, 0.0, 0x1.fa7999fb4e70cp-762,
     0.0, 0x1.e4419f4eb8f86p-846, 0x1.fb3b0f55e6e4cp-60, 0x1.c3f38d7cb6bb4p-731,
     0x1.fb6cbb1509f3p-499, 0.0, 0x1.032551c5e4516p-198, 0x1.283bb5db34952p-514, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.abdc5f69ffca1p-424, 0x1.194bde80482a3p-112,
     0x1.f938bed5d22f9p-221, 0x1.0e53f99d43fe3p-704, 0.0, 0.0, 0.0, 0.0,
     0x1.ba35b5278fecep-868, 0x1.1a52898e0a5ebp-253, 0x1.bf9cadf538843p-576, 0.0, 0.0,
     0x1.310408d794e15p-542, 0.0, 0x1.6ca5e34e11d23p-532, 0x1.75cf32b6b7fabp-503, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea649902b7ddp-661, 0x1.653058e99ab93p-16,
     0x1.41828987ba0aep-550, 0.0, 0.0, 0x1.555c12da72c48p-16, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e6acb9a2c7512p-412, 0x1.fc292f110d6e1p-483, 0x1.852158819812bp-719,
     0x1.397e76b411aa9p-449, 0x1.4b81987834fc1p-310, 0x1.ac705ff8e9362p-86, 0.0, 0.0,
     0x1.d767a5b56c7abp-612, 0.0, 0x1.b5e925e31a539p-556, 0x1.b020858e6d37cp-811, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8ea48e35e5595p-879, 0x1.504b5ab185997p-679,
     0x1.92575eee7d134p-767, 0x1.0c3637e7e8a5fp-658, 0.0, 0x1.34cee1376b10fp-330, 0.0,
     0x1.e26dd6f7752fp-236, 0.0, 0.0, 0.0, 0x1.ea1ee1fea5c47p-707, 0.0,
     0x1.d843cd06eeff7p-492, 0x1.41699f6802154p-487, 0x1.6ae74d3fb1185p-865, 0.0, 0.0,
     0.0, 0.0, 0x1.55534381f399p-669, 0.0, 0.0, 0x1.4702e2b56548dp-364, 0.0,
     0x1.f8a697db58d39p-303, 0x1.a4eaa02e89d2p-822, 0x1.66857009b9f79p-557,
     0x1.03849dd1536a9p-803, 0x1.ce81f42cf9cb3p-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.df2cbb4357aa8p-204, 0.0, 0.0, 0.0, 0.0, 0x1.ac76082ae021bp-315, 0.0,
     0x1.81bc0a3dbcb7p-256, 0x1.5fe2346a918f1p-453, 0.0, 0x1.4fc8c8728df7ap-542, 0.0,
     0x1.10c1b944bc5ddp-231, 0x1.dbc67d452aa1fp-691, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d498a7be1e881p-19, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9abf979c3c107p-1010,
     0x1.58525fb0b7602p-867, 0.0, 0.0, 0x1.58f140d97111ep-221, 0.0, 0.0, 0.0,
     0x1.22a13bf7b2836p-941, 0x1.3f4a346caac1p-648, 0.0, 0.0, 0x1.75841d71e6546p-269,
     0x1.d0192de4e8753p-122, 0x1.22443b6939e01p-269, 0x1.c3675a8bd666ap-486, 0.0, 0.0,
     0x1.0d37c4d3ad612p-317, 0x1.50aed27bc72bep-841, 0.0, 0x1.07b67684f86d8p-890, 0.0,
     0x1.8b5af264da313p-19, 0.0, 0.0, 0.0, 0.0, 0x1.666ad58f0eb6bp-448, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d28a35f6e83dcp-63, 0.0, 0x1.03717fa085133p-432, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.09762a32b6903p-698, 0x1.d7cb49e01bdbep-669, 0.0, 0.0,
     0x1.80cd1c7692976p-523, 0x1.80afd257629cap-301, 0.0, 0x1.90009c5bba39ap-108,
     0x1.da1a093afb97ap-780, 0.0, 0.0, 0.0, 0x1.b541eed7d1143p-568,
     0x1.eb428595c7efcp-681, 0.0, 0x1.6391066abc409p-528, 0x1.4f70e21e1faa7p-129, 0.0,
     0.0, 0x1.2e0815f7c8ac6p-134, 0.0, 0x1.9e7b4a1048517p-941, 0x1.494336288df69p-890,
     0x1.e279c942ead6p-8, 0x1.d2229830a78ecp-771, 0x1.6cb9943c4cfc9p-415,
     0x1.d1595d7f663d3p-157, 0.0, 0.0, 0x1.a025c8c0c3014p-521, 0.0,
     0x1.c2883c4b0d7cep-48, 0.0, 0x1.586ceb7471002p-499, 0.0, 0x1.56d22addb828fp-548,
     0x1.7f2216452deafp-194, 0x1.acf342880b059p-371, 0x1.0e7305cdbd9d9p-754, 0.0, 0.0,
     0.0, 0.0, 0x1.9560224a50a5ap-855, 0x1.aa991baf28e86p-540, 0.0
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
    
    global_bench_acc = 0.0;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
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
            tmp1 = Sleef_finz_truncd1_purecfma(tmp0);
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
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_truncd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_truncd1_purecfma bench acc %la\n", global_bench_acc);
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
