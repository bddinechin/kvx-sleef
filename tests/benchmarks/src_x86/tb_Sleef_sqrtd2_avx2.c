/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_avx2128.c --function Sleef_sqrtd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.10c434a2ab65fp-219, 0x1.aa1b0e1c64438p-274, 0.0, 0.0,
     0x1.63a48b018d4c1p-425, 0.0, 0x1.14e7942fa28fp-841, 0x1.7dcb83bfe3bb3p-482,
     0x1.42eb9d655af1dp-366, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39a6c9be797a5p-492,
     0x1.102557f52079bp-472, 0x1.e5bf230c06a5p-4, 0x1.a171a88b2bc03p-410,
     0x1.04e7904b03a77p-697, 0x1.b8a0a44010934p-10, 0.0, 0.0, 0x1.ca5e8ef8674f4p-468,
     0x1.c763b39ef507bp-747, 0x1.0faa9afb2297p-135, 0.0, 0.0, 0x1.6ba683f254fedp-853,
     0.0, 0.0, 0.0, 0x1.1b82f336cb67ep-412, 0x1.4d75107cc3ae5p-354, 0.0,
     0x1.40531dd61fab9p-943, 0x1.08a126097bf38p-62, 0.0, 0.0, 0x1.37def27a6c41dp-89,
     0x1.bf7d66dcd7e4cp-89, 0.0, 0x1.8b95bc813bec2p-461, 0.0, 0.0, 0.0,
     0x1.316580319b52ap-299, 0x1.004bc7e8f45b8p-30, 0x1.d2d8f3655ff0fp-323, 0.0, 0.0,
     0x1.3992328296d1fp-604, 0x1.a0b52192cefe4p-94, 0x1.f229a1b8563a2p-246, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1e67683533a5dp-719, 0x1.bd5ef5bdc782fp-786,
     0x1.752d124f0a395p-762, 0x1.cd9cd8fe6c22ap-855, 0.0, 0x1.1b52aea85b42p-69, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0ef9693c2ee5p-644,
     0x1.6949c90b92131p-674, 0x1.cb8d72375b54p-703, 0x1.d233cf752a789p-399, 0.0, 0.0,
     0x1.c0a9ea43845bap-793, 0x1.e4f95705c5cc9p-393, 0x1.741d849c59687p-360, 0.0,
     0x1.7149b79571358p-612, 0x1.971f66910315cp-56, 0x1.2853e77539054p-149,
     0x1.917143be1f5bfp-729, 0.0, 0.0, 0.0, 0x1.e7bdc30fce15ep-270,
     0x1.bd17e4ec7b45ep-427, 0.0, 0.0, 0.0, 0x1.876810bf3109p-989, 0.0,
     0x1.c6e9acac157aap-429, 0x1.677c1c316772ap-841, 0x1.e828d61084b5fp-93,
     0x1.c415a9502927ap-279, 0.0, 0x1.607d668defcaep-103, 0.0, 0.0,
     0x1.d7d28bb4ab69cp-549, 0x1.b46a177cc7fc4p-724, 0x1.825c748d9c053p-799,
     0x1.c3a12bea921cfp-1021, 0.0, 0.0, 0.0, 0x1.9e55f2e04ad3ap-556,
     0x1.e369a2ee2105cp-868, 0x1.ea2f875671a2dp-973, 0.0, 0x1.95896c669712p-85,
     0x1.6862093e3dcc9p-64, 0.0, 0x1.e519f59489e8dp-84, 0.0, 0.0, 0.0,
     0x1.c04f062f7f209p-50, 0.0, 0x1.8e582a5c5d79p-909, 0.0, 0x1.f3b1da5a6da91p-570,
     0.0, 0.0, 0x1.f1d27ecf7363fp-872, 0.0, 0.0, 0x1.3f22bd55ddafap-44,
     0x1.65560148f90cfp-368, 0.0, 0x1.53b8a1d151f41p-88, 0.0, 0.0,
     0x1.94c388f3392aap-546, 0.0, 0x1.35e9e3fb0dbc2p-521, 0x1.1d5c103fcd156p-433, 0.0,
     0.0, 0.0, 0x1.8e96cb759beafp-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1155a0fe20fbep-928, 0x1.821355e3ef95dp-682, 0.0, 0.0, 0.0,
     0x1.f0d444168ad9fp-46, 0x1.aabc8ab7c349cp-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.339a35cd13906p-364, 0x1.f39d4b8040529p-554, 0x1.40d14f85bad1p-656,
     0x1.9b161b81acaa7p-723, 0.0, 0x1.6d210622c2f5dp-884, 0x1.2972877bb4aadp-70,
     0x1.ad54b8e7de44ep-727, 0.0, 0.0, 0x1.dcc965508ed19p-439, 0.0,
     0x1.a05e304bd9fd7p-903, 0x1.657d002ade31dp-499, 0.0, 0.0, 0x1.59e689e0bde68p-90,
     0x1.8cd7444a17c7bp-207, 0x1.3154757c5f9ebp-863, 0.0, 0.0, 0x1.387d6e510ff2cp-937,
     0.0, 0x1.cde44365e4aa8p-983, 0x1.65f25958b1e36p-891, 0x1.f4eabf18e3713p-865, 0.0,
     0.0, 0.0, 0x1.f4a117b3afa86p-656, 0x1.f7c66922b7dcp-608, 0.0,
     0x1.d5274f95a6334p-614, 0x1.eb8f10b37a41bp-103, 0.0, 0.0, 0.0, 0.0,
     0x1.6d13dcc657ef1p-655, 0x1.03a5bbe8fc32ep-276, 0.0, 0.0, 0x1.9cff717f79361p-907,
     0x1.6a1026924e87fp-180, 0x1.a29716935dbp-988, 0.0, 0.0, 0x1.a7623a826f2e7p-492,
     0.0, 0x1.73fb1921492a9p-632, 0.0, 0.0, 0x1.b10bc4e8d51c4p-739,
     0x1.459f8b35825b5p-759, 0x1.ac2ad3bb5b30fp-791, 0x1.71bf9dd31ca85p-667, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.040077615f9b5p-117, 0.0, 0x1.fc962e00f13bfp-887, 0.0,
     0x1.6e08673fbcca9p-589, 0x1.fc35768b8c3bp-266, 0.0, 0x1.dbedfe5200edp-328, 0.0,
     0x1.135ea6cb698fdp-361, 0x1.f5a16ba098df6p-139, 0.0, 0x1.4da392655dae7p-60,
     0x1.111fca6a5c855p-700, 0x1.c0cb90b5ab952p-983, 0.0, 0.0, 0.0,
     0x1.42c50bc3e7415p-977, 0.0, 0.0, 0.0, 0x1.c5370fea66a0fp-634,
     0x1.004692dd57832p-20, 0x1.25932b4728252p-694, 0x1.b209d8b5ef71ep-352, 0.0, 0.0,
     0.0, 0.0, 0x1.b1c73389a1e37p-704, 0.0, 0.0, 0x1.badf4cc59bb78p-830, 0.0,
     0x1.ba134967a061ap-943, 0.0, 0.0, 0.0, 0.0, 0x1.133ead78892dfp-905, 0.0,
     0x1.880298909382bp-590, 0.0, 0.0, 0.0, 0x1.abe974c42ce04p-876, 0.0,
     0x1.794509846ae22p-1003, 0x1.2ed15d0f0b5a7p-232, 0.0, 0x1.8f0650c0225cp-937, 0.0,
     0.0, 0x1.3796a1cedf1dp-700, 0x1.942446b11bc55p-828, 0.0, 0x1.924cbbf1bff25p-876,
     0.0, 0.0, 0.0, 0x1.3cc22cb2e1f3p-571, 0x1.973ff1f01348bp-725, 0.0, 0.0,
     0x1.a9f3cdf50bb61p-912, 0.0, 0x1.d08d11eb074fp-875, 0x1.80d46e62b004ap-67, 0.0,
     0x1.8be3d3fe4a971p-3, 0.0, 0.0, 0.0, 0.0, 0x1.9c623bb6f5ec8p-1020,
     0x1.e6bfab3f701a3p-957, 0x1.dabc2e5ca1809p-756, 0x1.bc71d76519a96p-235,
     0x1.690e9c32e99d4p-426, 0x1.941c57012e0fp-641, 0x1.a3417777120d2p-549,
     0x1.a183a786c91aap-1, 0x1.7179a297889e3p-506, 0.0, 0x1.76e10345d3dddp-383,
     0x1.fd49a1bc8b324p-74, 0x1.d973469d40c2bp-694, 0x1.5744945c02fedp-350, 0.0, 0.0,
     0x1.cfe3686b49508p-125, 0.0, 0.0, 0x1.2d6f21cab409ep-921, 0.0,
     0x1.f043e275c70d2p-923, 0.0, 0.0, 0.0, 0x1.3e823debd76d6p-51, 0.0, 0.0,
     0x1.1d4c14ef8886p-766, 0x1.3d2ba75c71a11p-741, 0.0, 0.0, 0x1.41a4a9f4eb70dp-183,
     0x1.d18e5048df1f8p-722, 0x1.0cbcb21443ec7p-557, 0.0, 0.0, 0x1.1eda321db04acp-298,
     0.0, 0x1.6cf4de60c74c2p-801, 0x1.f91b8abfe2e53p-835, 0.0, 0x1.ed396498e1117p-425,
     0.0, 0.0, 0.0, 0.0, 0x1.d3a47eeec4a22p-795, 0x1.bbace280f9bc6p-851,
     0x1.78674113f733ap-325, 0x1.b9f829fe741d2p-164, 0.0, 0.0, 0x1.4f66344c460e2p-923,
     0x1.8191567ab566ep-253, 0.0, 0x1.2f9a879e39421p-301, 0.0, 0x1.ca98b21f838f1p-92,
     0.0, 0x1.5af43abf8c05ap-955, 0x1.80df1590bd8dep-595, 0.0, 0x1.4e0a73d2f5313p-889,
     0.0, 0.0, 0x1.99d31cfe5a588p-310, 0x1.72920163d3782p-772, 0.0, 0.0,
     0x1.49e437c5a0cfp-697, 0.0, 0.0, 0.0, 0.0, 0x1.a9b620fd3053ep-652,
     0x1.ec4b102d15e28p-728, 0x1.a25b9a1659954p-980, 0.0, 0.0, 0x1.3c5a87e156207p-354,
     0.0, 0.0, 0.0, 0x1.a084d51dbce0ap-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.657d7695a9a11p-66, 0x1.fb4a84b41940cp-1003, 0x1.14ba683c5bd9p-152,
     0x1.6871b646bff81p-469, 0x1.de62a97901698p-126, 0.0, 0x1.f6ebe147a9807p-596,
     0x1.b8db2fee7139p-121, 0.0, 0.0, 0.0, 0x1.8c3d3bc8ba057p-38,
     0x1.ebeb67cc15e56p-51, 0x1.d961624fbaae3p-724, 0x1.8159f51551472p-280, 0.0,
     0x1.3cec50e546252p-591, 0.0, 0x1.44488dbb42c8ep-89, 0x1.1d4f2c0237d18p-275, 0.0,
     0x1.2b29fe5d88a3ep-19, 0.0, 0x1.7c87b91f83bccp-26, 0x1.a01ac3595364bp-410,
     0x1.50da4cf125f0dp-68, 0x1.821ea3e204435p-857, 0.0, 0x1.9703b89f1a8f3p-940, 0.0,
     0.0, 0.0, 0x1.70280f74dfe54p-188, 0x1.b5504591fa795p-799, 0x1.3e351bee54cp-187,
     0x1.7177c77c295afp-219, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b04d99379c02p-491, 0x1.67a4465c7ee8ap-200, 0.0, 0x1.052c2cc419f46p-776,
     0x1.0f52991cf6d61p-305, 0x1.64abebd545fc4p-539, 0.0, 0.0, 0.0, 0.0,
     0x1.897568889433bp-180, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.371ac92a9ad63p-951,
     0x1.a0bbca11ab2e5p-1000, 0.0, 0.0, 0x1.589c29113432fp-738,
     0x1.eaec1ce8a1739p-999, 0.0, 0x1.117922139233p-847, 0.0, 0x1.c579dd0f1c8a6p-592,
     0x1.f2ae8fab3a613p-524, 0x1.76d290d108266p-156, 0x1.f01e4a2ac428cp-301, 0.0,
     0x1.963a524cf3d82p-139, 0x1.07556df4f183p-958, 0x1.0ee7807a64a5fp-154,
     0x1.8f1c52bb29f6dp-521, 0.0, 0.0, 0.0, 0x1.d75b4498efd9cp-383, 0.0,
     0x1.b3a0ce6aa533cp-681, 0.0, 0x1.bbbacf8cc5646p-856, 0.0, 0x1.5836ca1df7199p-598,
     0.0, 0x1.a26cf25cf956cp-207, 0x1.9e887820ef1f8p-67, 0.0, 0x1.28f168f539435p-117,
     0.0, 0.0, 0.0, 0.0, 0x1.affc48408b54dp-91, 0x1.5897b77fbdf7bp-287, 0.0,
     0x1.89946323b197ap-817, 0.0, 0x1.c7494e056029bp-192, 0.0, 0x1.b33362a2d7367p-248,
     0x1.a71d23ebd9e97p-549, 0.0, 0.0, 0.0, 0x1.40d16b91d1baep-697, 0.0, 0.0,
     0x1.b1a900436e25fp-590, 0x1.e20c666fb7c53p-985, 0.0, 0.0, 0x1.2e1a5f4186d88p-666,
     0x1.1c2c3779bde15p-47, 0x1.114fe4eb61ba9p-605, 0.0, 0x1.a92c93a72bc13p-267, 0.0,
     0x1.e8098eb68c5d3p-994, 0.0, 0.0, 0x1.4d0260df0be83p-244, 0x1.b0fc1788efe66p-619,
     0.0, 0.0, 0x1.1527ba74cd08p-250, 0x1.4c39a99ad9625p-408, 0.0, 0.0,
     0x1.4c629f667b2d9p-161, 0x1.5f133c0c595p-999, 0.0, 0.0, 0.0, 0.0,
     0x1.03a0f38054006p-980, 0.0, 0x1.92d93b5ba2221p-199, 0x1.f514f734d8652p-893,
     0x1.f8cfe832d395p-464, 0x1.407b8e66bd368p-743, 0x1.15fb1e13456edp-484, 0.0,
     0x1.0e07b8a5c65fcp-1, 0.0, 0.0, 0.0, 0x1.700b0c48019d6p-845, 0.0,
     0x1.9e556e3a7c816p-27, 0.0, 0.0, 0x1.4d5c911676168p-313, 0.0, 0.0,
     0x1.3790e19d09632p-594, 0x1.f5acdc3b802c7p-936, 0.0, 0x1.d9a70623092f5p-682, 0.0,
     0.0, 0x1.44176854880a9p-517, 0.0, 0.0, 0.0, 0.0, 0x1.1f76843f28a22p-791, 0.0,
     0.0, 0x1.2b4f8db81f9a9p-558, 0x1.02799ac216338p-631, 0.0, 0x1.79e605f6eb3acp-543,
     0.0, 0.0, 0x1.dcf55901bda6ap-887, 0.0, 0.0, 0.0, 0x1.41b0be99cfc66p-274,
     0x1.86fd0374154ebp-1007, 0x1.3bff7e25b811ap-476, 0x1.bc901ea9d97e2p-815,
     0x1.7dd0b06f4e832p-955, 0.0, 0.0, 0.0, 0.0, 0x1.ea1f72da2beap-922,
     0x1.0cf02f411d00bp-554, 0x1.6172557ba6186p-500, 0x1.6fd824a9bb04p-647,
     0x1.b72d864bfbd5fp-496, 0.0, 0x1.eeec7c17ad33bp-740, 0.0, 0x1.c5b9e67091e62p-624,
     0.0, 0.0, 0.0, 0x1.c50ed07949816p-921, 0x1.124af900ecef6p-717, 0.0, 0.0, 0.0,
     0.0, 0x1.63914c5834b44p-365, 0x1.329480cd8196ep-486, 0.0, 0.0, 0.0,
     0x1.14b03b561e428p-412, 0x1.ee126ccd9cc66p-580, 0x1.dc61793814a7p-214, 0.0,
     0x1.c708eb13dd8dfp-942, 0.0, 0.0, 0x1.a8713c1404666p-380, 0x1.beea1cdcf673dp-933,
     0x1.409a8d4c0bf09p-759, 0.0, 0.0, 0.0, 0.0, 0x1.a2da5f2c4d6eap-468, 0.0, 0.0,
     0x1.8a21b39505182p-444, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d133f6a39fdf3p-437,
     0x1.973d6e6817f29p-575, 0.0, 0.0, 0.0, 0x1.e3fe66526e38dp-31,
     0x1.6fd7e2ff7ca9cp-835, 0x1.59d395574e3d8p-880, 0x1.1383e4daee601p-256,
     0x1.66a0e5beea77p-942, 0.0, 0x1.117bf3e1c8e31p-898, 0x1.e32b7c2a7144p-982,
     0x1.467d3afcdb6aap-959, 0.0, 0x1.897a6ea7fc8e9p-455, 0x1.519a236b5c305p-45,
     0x1.ebcbd5f72f788p-468, 0x1.6716102ea9e06p-650, 0.0, 0x1.4e854c409c017p-53, 0.0,
     0x1.3fe11afdc19e4p-787, 0.0, 0x1.865c608521599p-851, 0.0, 0x1.95c67040f8a27p-124,
     0x1.2bcc44acd8737p-678, 0.0, 0x1.c67dca1204ba4p-208, 0.0, 0.0,
     0x1.894de9264bd86p-165, 0.0, 0x1.322f166cef6c6p-430, 0.0, 0x1.7a2d614de5dbdp-435,
     0.0, 0.0, 0x1.5ab91956f3357p-222, 0.0, 0x1.a5f8ffac4f2c9p-960,
     0x1.00241825f637fp-826, 0x1.ff32e8e09cdc2p-415, 0x1.1882d6d668dc2p-748,
     0x1.26bbf15a10301p-248, 0x1.04e67388a15ddp-847, 0x1.abd81099b41bap-963,
     0x1.1e39e47ec6634p-931, 0x1.4a33ea84e8195p-216, 0x1.e74623d6de85dp-888,
     0x1.5b5ec93719336p-593, 0.0, 0x1.076c7c58cf6c6p-865, 0.0, 0x1.c1ad8ba42b2ap-844,
     0x1.b4e9192eed342p-518, 0x1.28e7d3c37e1a8p-730, 0x1.bb20260858a88p-923, 0.0, 0.0,
     0x1.82d31dad4bf23p-699, 0.0, 0.0, 0x1.443b4e074c7cdp-733, 0x1.27366e93f76ccp-333,
     0.0, 0x1.b53a447ab0de1p-872, 0x1.a26ece68507c6p-524, 0x1.ceb2e5287f5b3p-383, 0.0,
     0x1.bfce40cab5573p-944, 0.0, 0x1.7746755e0184p-613, 0x1.dcaab8ac8d4cdp-201, 0.0,
     0x1.c310779c58867p-958, 0.0, 0x1.a6771f0fd6eb1p-581, 0.0, 0x1.0be924b97ca3cp-900,
     0.0, 0x1.09e473efe3963p-145, 0x1.d9e2598a7a8c8p-472, 0.0, 0x1.ec47d3093d7eap-17,
     0.0, 0x1.82ac97d2d22dbp-541, 0x1.488afee91a84ep-847, 0x1.32551571206bdp-384,
     0x1.55005c202c38bp-962, 0x1.bdd36f1bf7e06p-827, 0.0, 0.0, 0.0,
     0x1.dddea50c2b3acp-611, 0.0, 0x1.07d1caf4bb1ecp-47, 0.0, 0x1.8d2d8d775fda8p-595,
     0x1.f59bd3ebd7364p-440, 0x1.daa7860c56232p-898, 0x1.2f9a147b6d85bp-511, 0.0, 0.0,
     0x1.2d13a4325ee7ep-465, 0x1.7d7aeaa195bcp-843, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b1b8f66328a5fp-344, 0.0, 0.0, 0.0, 0x1.9e9d6fdfc02ccp-592,
     0x1.ae535e85cf90ap-529, 0x1.0b8db430b8301p-819, 0.0, 0x1.c47bcacb178cep-606, 0.0,
     0.0, 0.0, 0.0, 0x1.973a300c23b73p-842, 0.0, 0.0, 0x1.2c887e7fb5eb3p-773, 0.0,
     0.0, 0x1.2564b1e0f3dp-409, 0x1.2df64e3a9b93cp-800, 0.0, 0.0,
     0x1.a54a3d28ce742p-745, 0x1.48940af5290afp-756, 0x1.f52910cb15d14p-417,
     0x1.9c317c63e08e9p-249, 0.0, 0.0, 0x1.8093f62896f55p-866, 0x1.af3bfdd34c682p-380,
     0x1.5cdd9018a58f9p-614, 0.0, 0x1.82caf1de718c3p-707, 0x1.5e5867821105bp-198,
     0x1.2e5c876077dfbp-624, 0x1.dfa4d6758eddcp-480, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c6599d083d6ep-295, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2a8282938918p-688,
     0.0, 0x1.1015bd17bdf01p-343, 0x1.46caf41633e1bp-807, 0x1.becaea1d48883p-757, 0.0,
     0x1.dfe8e92cd3dbbp-907, 0.0, 0x1.68b7ed9214034p-83, 0x1.12c75378ce801p-336, 0.0,
     0x1.ee379cbfadbccp-727, 0x1.f228696929a74p-153, 0.0, 0.0, 0.0, 0.0,
     0x1.12b38d04466f2p-706, 0x1.9e22161224be9p-245, 0.0, 0x1.ec98b2d292f0ap-191, 0.0,
     0.0, 0x1.3b30ff2167dc1p-126, 0x1.3f573e260926dp-561, 0.0, 0x1.a2a3d5867719bp-797,
     0x1.ce66737386a33p-52, 0.0, 0.0, 0x1.9b1bd11a08f65p-615, 0x1.c4e3719a119dcp-334,
     0.0, 0.0, 0x1.b1b992e0ca124p-576, 0x1.5cadb82f1b59dp-884, 0x1.6df22732c3819p-941,
     0x1.4b4ce2b8f5fdcp-970, 0x1.3eed9cf02f999p-648, 0x1.b4319292759a8p-933, 0.0,
     0x1.23f6b49795964p-817, 0x1.dac866aba39a2p-171, 0.0, 0x1.a071b3760647ap-48, 0.0,
     0.0, 0x1.6e681ec6afeb9p-963, 0.0, 0x1.c713e53f2954ep-44, 0.0,
     0x1.2f13680c606d2p-1004, 0.0, 0x1.beeda17bd79ep-181, 0x1.f902d0ae5feb6p-375,
     0x1.59fecd6d548fap-413, 0.0, 0x1.84395925dd934p-518, 0.0, 0x1.246aa79d5d824p-892,
     0x1.83b80c4fee303p-1, 0.0, 0x1.98f4417e53106p-804, 0x1.6d50651a72591p-988, 0.0,
     0.0, 0.0, 0.0, 0x1.284817f1af73ep-417, 0.0, 0x1.a16897dac6b13p-892, 0.0, 0.0,
     0x1.a51369766df91p-682, 0.0, 0x1.2749af3924bd5p-992, 0x1.72bb6e19e3191p-218, 0.0,
     0x1.dd762df6ef00ap-837, 0x1.1df77782f6b13p-312, 0.0, 0x1.ad4618ca4176ap-74,
     0x1.195740feb3587p-691, 0x1.9381bc91f050dp-669, 0.0, 0x1.9512f0eef87cdp-669, 0.0,
     0.0, 0x1.538c0e813fdb9p-437, 0.0, 0x1.3c4910da24eadp-693, 0.0,
     0x1.41d032be19f5ep-966, 0.0, 0.0, 0x1.82a4d44dad805p-348, 0x1.ef68cdd87098ap-336,
     0x1.ada641d782713p-157, 0.0, 0.0, 0.0, 0x1.77a498294c1e5p-911,
     0x1.689f480e3b28dp-245, 0x1.bdef4fa526d1p-656, 0.0, 0.0, 0x1.73fb6c3c414c5p-769,
     0x1.63045e7b9da2dp-808, 0x1.872a0ddf82d9cp-663, 0x1.0f2af335ecf98p-8, 0.0, 0.0,
     0.0, 0x1.846ed6d2a280cp-293, 0x1.79a87730febf8p-108, 0x1.e9e7cd60d94a8p-631, 0.0,
     0x1.4315e67459492p-1004, 0.0, 0x1.c5b7af57f375ap-188, 0x1.56ac6db776626p-296,
     0x1.1bb8482e62574p-248, 0.0, 0x1.c88cfdb201c7p-958, 0.0, 0.0, 0.0,
     0x1.e003799be02bbp-323, 0x1.7eca712ac07dcp-970, 0x1.592b901301a07p-575,
     0x1.990faa6b75ea9p-537, 0x1.d6e81f335f8f5p-444, 0x1.a5188053c49d5p-105, 0.0,
     0x1.b6ed5c109db5ap-906, 0.0, 0.0, 0x1.735c2fa6b666p-220, 0x1.f2edd54d482dep-395,
     0.0, 0.0, 0.0, 0x1.16dda9e9da938p-45, 0x1.1dfc230c52392p-593,
     0x1.60cab4e7800fcp-393, 0x1.f4e7eb7415011p-151, 0x1.5b3268479ae68p-425, 0.0,
     0x1.03c8cefc61b03p-518, 0x1.b32f6c3111865p-279, 0x1.954ecca6610aap-895,
     0x1.052dd57f26181p-630, 0.0, 0x1.640412e2a165bp-224, 0.0, 0.0, 0.0,
     0x1.8bcbd3bd9db1ap-91, 0x1.6d69ebd7b6661p-964, 0x1.5cd46af8f88b9p-322,
     0x1.1196d073d78f6p-828, 0x1.4892a8285bd5dp-809, 0x1.901bfeb1ddbc3p-904,
     0x1.1d58c0d358adcp-991, 0x1.5868b6752ab59p-994, 0.0, 0.0, 0x1.609de745a0ca2p-818,
     0x1.ccb4d8fd3fa92p-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca455b566213ep-836, 0x1.502c7a1430a65p-874, 0x1.708b24ad07fe2p-789, 0.0,
     0x1.33adaf3c230f2p-334, 0.0, 0.0, 0x1.ce580bac029f3p-738, 0x1.ed418b0a36a57p-560,
     0.0, 0x1.744dc2babc89fp-964, 0.0, 0.0, 0x1.f4cbad024b4b5p-831,
     0x1.a5f3e802751f9p-953, 0x1.36e52eb25a52dp-755, 0.0, 0x1.5e171fba6b2cp-26,
     0x1.7c3a7d868affap-597, 0x1.814a2c38b8169p-638, 0.0, 0.0, 0.0,
     0x1.ba67597c199d5p-971, 0.0
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_sqrtd2_avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sqrtd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
