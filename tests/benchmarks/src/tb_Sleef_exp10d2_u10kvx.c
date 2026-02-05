/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d2_u10kvx.c --function Sleef_exp10d2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.0b68c6f238c2fp-625, 0x1.788a07e64ea77p-276,
     0x1.bf6457d187d34p-199, 0.0, 0x1.d92841836999ep-15, 0.0, 0.0, 0.0,
     0x1.2fcd3cf99f61bp-180, 0x1.7f432eaf8b429p-206, 0x1.3ba1dba61e44cp-416, 0.0, 0.0,
     0.0, 0x1.f335a3546d478p-615, 0x1.52423eee15e05p-480, 0x1.a52dbd28e44dep-234,
     0x1.35d273f8cd7d1p-841, 0x1.451c141dd3d11p-564, 0x1.ed175cf8d22a2p-588, 0.0,
     0x1.d847b8f479161p-967, 0.0, 0.0, 0.0, 0x1.30f6ca4732acp-369, 0.0, 0.0, 0.0,
     0x1.c58844f8931f3p-707, 0.0, 0x1.02135d651d567p-936, 0x1.ead19e8254f7ap-474,
     0x1.e5b9bd07650aep-818, 0x1.6c933ecfdead7p-291, 0.0, 0x1.8f02fb73ef79cp-844, 0.0,
     0.0, 0.0, 0.0, 0x1.350c74b453f0dp-337, 0x1.36a248821a327p-283,
     0x1.eafce63b8fc05p-570, 0.0, 0.0, 0x1.f69bb5a01559cp-476, 0.0,
     0x1.a8c0e10822832p-659, 0x1.9c4f3b04ecedp-277, 0.0, 0.0, 0x1.807df2ce9dfcp-436,
     0.0, 0x1.94ac8c737bb91p-598, 0.0, 0x1.3275442b778fp-975, 0.0,
     0x1.38c17cf66224dp-560, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cb483424d06bp-609, 0.0,
     0.0, 0.0, 0x1.2bf663d44dfdbp-752, 0.0, 0.0, 0.0, 0.0, 0x1.5f50e91a9f8bcp-903,
     0.0, 0.0, 0x1.5881637d34373p-234, 0x1.b4537ef98e3dcp-260, 0x1.45f617bd5c996p-235,
     0x1.54cf5d09b3735p-601, 0.0, 0x1.148d2c28f845fp-854, 0.0, 0.0,
     0x1.fdf66524ce7fap-336, 0.0, 0x1.f10828f678298p-733, 0x1.6347357507446p-756, 0.0,
     0x1.a378534f27d25p-295, 0x1.946b71af00c55p-78, 0.0, 0x1.35651b06dfa0dp-836, 0.0,
     0x1.2336fc4212aa5p-904, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69581cac278bp-578,
     0.0, 0x1.6d2461e83a7d6p-898, 0x1.f6db870bf994cp-182, 0x1.dab7368069bd2p-243, 0.0,
     0x1.0a82da4b8f99ap-638, 0.0, 0x1.5956bf42ef189p-109, 0x1.aae3f5a1de4cep-880,
     0x1.0a5f07eff8871p-642, 0.0, 0x1.9d8eb9cfa982ap-142, 0x1.f133dcc316464p-936,
     0x1.29ecfbb7cbac6p-527, 0x1.1891e7f1ac293p-514, 0x1.a793c8b3006a6p-823, 0.0, 0.0,
     0x1.eaa5fd2d8075dp-885, 0x1.226668df232acp-716, 0.0, 0.0, 0.0, 0.0,
     0x1.75da16f3b48b6p-680, 0x1.1dd243a8ce902p-701, 0x1.f6d4be961a834p-292, 0.0,
     0x1.9632e71f21e26p-591, 0x1.d9015507c582bp-747, 0.0, 0x1.ab4a9bcff7c4dp-958,
     0x1.1292c43975f47p-185, 0x1.da82a2629c19fp-96, 0x1.3cd321f0e9c7dp-792, 0.0,
     0x1.5bd6b72de65f1p-284, 0.0, 0x1.26c0459c30b1fp-436, 0.0, 0x1.eb2f6514c086fp-83,
     0.0, 0x1.7b0b2661b657p-847, 0.0, 0x1.770f15d114bcdp-847, 0x1.4375ce4aa3572p-384,
     0.0, 0x1.c5b3117cf275ap-881, 0.0, 0.0, 0.0, 0x1.152041edc06cdp-355, 0.0,
     0x1.b897a52e8fd13p-373, 0x1.502e6dd97e1dp-387, 0x1.a0d0bf4cca47bp-163,
     0x1.d02d09abead57p-16, 0.0, 0x1.e7502d42814c8p-419, 0.0, 0.0,
     0x1.e6176efe58542p-248, 0x1.a8db224cfb59ep-926, 0x1.a3afb6bf7432dp-689,
     0x1.acbda78a3adebp-685, 0.0, 0.0, 0x1.b12d9fedd81bap-971, 0.0,
     0x1.d85fa03b9582p-565, 0.0, 0x1.87b116be51d29p-214, 0x1.c20ae2a31825ap-491,
     0x1.e0a8619145fb4p-678, 0.0, 0x1.44a070c0c1a37p-1001, 0x1.a50e01615d8e3p-224,
     0x1.c218a715f5a24p-511, 0.0, 0.0, 0x1.f0c15e5aa5d9dp-510, 0x1.9375dad104184p-618,
     0x1.96ff1f4c784dfp-669, 0.0, 0x1.22d9396d3bdffp-965, 0x1.ea55aa5b7f176p-548, 0.0,
     0x1.9bef82a533cfap-969, 0x1.e561bdb9dd421p-363, 0.0, 0.0, 0.0,
     0x1.37e9535133599p-797, 0x1.3ebb21e53d9f9p-6, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1441587d679f2p-91, 0x1.883165718831bp-917, 0x1.88bdc3dcc518bp-971,
     0x1.4311cf07f75f9p-981, 0x1.40e256c947defp-342, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d555088f464e5p-387, 0x1.a08ca582e9edap-724, 0.0, 0.0, 0.0, 0.0,
     0x1.dd5253704e0cap-783, 0.0, 0.0, 0x1.42bd017bff729p-341, 0.0,
     0x1.11b073ec3029cp-363, 0x1.8fce917104cb5p-887, 0.0, 0.0, 0x1.8df0d8ec9a4c8p-460,
     0x1.d3f23bc73621dp-769, 0x1.bec3fe214ee0ep-842, 0x1.f19e006919f1dp-349, 0.0, 0.0,
     0.0, 0.0, 0x1.a7dc576bdebb3p-906, 0x1.a3e7072714979p-214, 0.0,
     0x1.c9279e60742a7p-245, 0.0, 0x1.c817d15268508p-985, 0.0, 0.0, 0.0,
     0x1.901d66c0b7f16p-411, 0x1.03a46cc2a0099p-964, 0x1.f05bc2ad55287p-917, 0.0,
     0x1.78dfa91deb6fdp-266, 0.0, 0x1.23db418e0be2fp-442, 0.0, 0.0,
     0x1.81d766967f51ep-959, 0.0, 0x1.faf7114fa1b31p-934, 0.0, 0x1.e0e9a57ad0909p-592,
     0x1.3c845c98617d5p-458, 0.0, 0x1.f018846cd81b5p-1020, 0x1.1bcda78b9370bp-245,
     0.0, 0.0, 0.0, 0x1.0f5db56a14a85p-374, 0.0, 0x1.c636e1fff81cap-747, 0.0, 0.0,
     0x1.63926f74f29b3p-412, 0x1.2d96e24df7058p-469, 0.0, 0.0, 0x1.7d3588f228f2dp-931,
     0x1.a17bb35be8e7dp-896, 0x1.eb6eadd662d75p-968, 0.0, 0x1.4fbf5cb4638adp-53,
     0x1.3910b97538b25p-48, 0.0, 0.0, 0x1.33c56d8ab74fbp-316, 0.0, 0.0,
     0x1.045da8562363ap-733, 0.0, 0x1.0307336bc1ab8p-872, 0x1.6a138f00dc85fp-413, 0.0,
     0.0, 0x1.6ea5c506e1eabp-644, 0x1.2064305684f33p-774, 0x1.6c7e293369691p-457, 0.0,
     0x1.af1f167afe3d9p-578, 0x1.0815262985ff4p-1017, 0x1.ad25b799b06ddp-164, 0.0,
     0x1.cba4bba178408p-952, 0.0, 0.0, 0x1.eee85f555ccfp-90, 0.0, 0.0,
     0x1.41ae0a6c7e52ap-30, 0.0, 0x1.d8bd319eb7b44p-371, 0.0, 0.0, 0.0,
     0x1.52b9721c2c1acp-6, 0x1.a1073444fabb8p-858, 0.0, 0x1.6070d163fb60ap-379, 0.0,
     0.0, 0.0, 0x1.d6dd0c39c76bap-313, 0x1.e1aa87c048f94p-797, 0.0,
     0x1.eb6663154506cp-848, 0.0, 0.0, 0x1.807f6c5c8bca2p-753, 0x1.079c2354f9d4p-971,
     0x1.aa2997563deeep-32, 0x1.55fa3edd0179fp-630, 0x1.adba23e8316dbp-370,
     0x1.4e51768287781p-41, 0x1.e218f89a34893p-287, 0.0, 0.0, 0x1.ab47b801bc687p-734,
     0x1.221dc94c2c085p-187, 0.0, 0.0, 0.0, 0.0, 0x1.714e94b1fd32bp-630, 0.0, 0.0,
     0x1.6c162e713208ap-856, 0.0, 0.0, 0x1.cb715b8bb3a34p-231, 0.0,
     0x1.01aad578b414p-730, 0x1.542460f06f99bp-577, 0.0, 0x1.34205420b606p-592,
     0x1.060573d0890efp-151, 0x1.495b4e44e0e65p-672, 0x1.ddf225fb525e2p-554, 0.0, 0.0,
     0x1.2e5e3dad87901p-475, 0x1.93601e77990e6p-451, 0x1.5ccb19cadcffdp-465,
     0x1.dc1b1d65a5506p-48, 0x1.ed4a24d1b23b8p-697, 0x1.fbd88e57c8612p-844, 0.0, 0.0,
     0.0, 0x1.1e0fc283177ffp-30, 0.0, 0x1.e30111e2e0bf4p-81, 0.0,
     0x1.24afe62d8c00ep-783, 0x1.bae26160a02ffp-23, 0x1.3ac5c1ec6b265p-647,
     0x1.18414bf385cf1p-248, 0x1.a81ea9faa8b37p-220, 0.0, 0x1.2ca5126852f5bp-574, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.601b6669a0538p-765, 0x1.e2a0a925edecep-522, 0.0,
     0x1.2289cc8e7a6f1p-419, 0x1.0521bf50fb2acp-448, 0.0, 0x1.0ef4b5cf8ffacp-436,
     0x1.ca1f7db4ef42ap-256, 0.0, 0x1.c3623a311a192p-130, 0x1.29d9493b660adp-571, 0.0,
     0x1.f174dcababb44p-238, 0.0, 0x1.f61d519fa1cd7p-779, 0.0, 0x1.08fd178412787p-852,
     0x1.181ca590dfe21p-350, 0x1.8fa3e4180bcdfp-465, 0x1.99d6a95810315p-512,
     0x1.d3f6a7d214e2p-793, 0x1.45f302d3cdc6bp-484, 0x1.07bd6c781bd26p-318,
     0x1.5036635d8720ep-999, 0.0, 0.0, 0x1.51bbd7b3ff362p-310, 0x1.821ec4d09ac71p-407,
     0x1.b753260326953p-29, 0.0, 0x1.9a59930757502p-60, 0.0, 0x1.2938b3c8cd273p-327,
     0x1.84a7ab53f4af6p-232, 0x1.ec5e3ff769f68p-311, 0.0, 0.0, 0x1.26e2c8a16542fp-76,
     0x1.09b4628922531p-652, 0x1.9e4b2ac306469p-179, 0x1.3de2b56b84374p-193,
     0x1.b84511cdaa9e4p-328, 0.0, 0x1.93d42dd9ab2ep-715, 0.0, 0x1.85a655de42fe4p-764,
     0.0, 0.0, 0x1.46738e12699d8p-742, 0.0, 0x1.b24983df40621p-360,
     0x1.5d4b28ff79c98p-908, 0.0, 0x1.cd27e10288e9bp-720, 0.0, 0x1.d2ee5e3a9cae1p-771,
     0x1.88d0a411400efp-73, 0x1.9376796a614c8p-145, 0x1.6a2ee1a5a30cfp-765, 0.0, 0.0,
     0x1.4bf91d5a3f92cp-922, 0x1.242852603ac1cp-970, 0x1.89543f2d5151p-322, 0.0, 0.0,
     0.0, 0.0, 0x1.01863c0517ff4p-359, 0x1.c20eaf94b6a58p-334, 0.0,
     0x1.4e28a3b0fcd22p-804, 0.0, 0x1.23ad99f67140ap-525, 0x1.9e2a7ef113a6p-566, 0.0,
     0.0, 0x1.a0fa9aadab233p-293, 0.0, 0x1.f69d4a04382d5p-959, 0x1.0ac9fe1724e4cp-270,
     0x1.333a18744bfdbp-215, 0x1.a338f0bcf677cp-779, 0x1.ec221206478e5p-676, 0.0, 0.0,
     0x1.537089fec44cfp-729, 0.0, 0.0, 0x1.c71c4c9e485b9p-768, 0x1.cfe2a852c4afbp-569,
     0.0, 0.0, 0x1.2ccb02486afb9p-971, 0x1.5eab32af7ed66p-881, 0x1.c96dcb5d534cap-437,
     0x1.e6a9b0dd8b034p-586, 0.0, 0x1.4db021d40e0b6p-845, 0.0, 0.0, 0.0,
     0x1.abb0e20ee454dp-468, 0x1.4a8c0fdf1d8a5p-566, 0x1.da6048eb631cp-567,
     0x1.f201aa6ca4242p-56, 0x1.16c3fce9f1fa6p-199, 0.0, 0.0, 0x1.7c71d6add916dp-20,
     0.0, 0x1.3e357bdf56c24p-72, 0x1.529e589ab7fc7p-876, 0x1.88b24a08c5a8fp-176, 0.0,
     0.0, 0x1.e84b739af6098p-614, 0x1.0eb52c494e1c1p-340, 0.0, 0.0,
     0x1.4363d4eec8afp-350, 0x1.585f28a5dfc2cp-713, 0x1.888cecc1068d9p-898, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.34a3e064733c6p-1018, 0x1.eff4b5bcb0a45p-465, 0.0,
     0x1.ae13ff0cce998p-497, 0.0, 0x1.79bb3c82a5b5cp-960, 0x1.291b372d5ef92p-174,
     0x1.5e044c725fa06p-972, 0.0, 0.0, 0x1.46d59107115e3p-303, 0.0,
     0x1.7ff8d9359c90cp-903, 0x1.c77fe04b0232ep-995, 0x1.4204f61569374p-854, 0.0,
     0x1.f9e7483386e1ep-361, 0.0, 0x1.007fde74fb203p-381, 0x1.74cb2eab5a6c7p-587,
     0x1.424e2c194caabp-831, 0x1.ef36f401588a6p-985, 0x1.8bc6754390dp-412, 0.0, 0.0,
     0.0, 0x1.3c89a98c3fc69p-875, 0x1.e0ddbe96fcffdp-686, 0x1.57c672361f265p-313, 0.0,
     0.0, 0x1.4837b788216a7p-82, 0x1.106f808941515p-184, 0.0, 0x1.3f4517f3d2d7fp-445,
     0x1.787f32a83b13ep-755, 0x1.31242088796bap-797, 0.0, 0.0, 0x1.d83ec788fc3a8p-545,
     0.0, 0x1.86083893d07fep-931, 0x1.a24ea5a2fa1acp-695, 0.0, 0.0, 0.0, 0.0,
     0x1.ea4a8bde56de4p-950, 0x1.eb420dba6bd9ap-650, 0x1.932d20af100eep-780,
     0x1.ccde90cb0a303p-148, 0.0, 0x1.4a9aacad918f8p-582, 0x1.f880e8c72d0dbp-865,
     0x1.6348b29b71637p-509, 0.0, 0x1.c3b019896d49fp-909, 0x1.b2e6bbddb64a7p-33,
     0x1.944167688d69p-266, 0x1.976fc0e865103p-453, 0.0, 0x1.7d671558ca6a3p-744,
     0x1.7609c392aea87p-563, 0x1.1a00383de2bc2p-776, 0.0, 0x1.73de521f0882dp-600,
     0x1.e6eb84e2ef516p-164, 0x1.18e98b4a50c8ap-35, 0x1.cf9013a856df4p-71,
     0x1.ec0bb8f31f16bp-269, 0x1.27a1bbf930f61p-142, 0.0, 0x1.39d1461b15d05p-958,
     0x1.699255e3fa171p-630, 0.0, 0.0, 0.0, 0x1.54fb0cfc53754p-464,
     0x1.afa7f1f17c3fdp-361, 0.0, 0x1.ea8da8ed2e79dp-303, 0x1.a7bbd790aa9acp-1021,
     0x1.f0a09f9df208bp-937, 0x1.9dc5d5e4d417dp-465, 0x1.323a88bc5f444p-428, 0.0, 0.0,
     0.0, 0.0, 0x1.c0d09545ceabfp-274, 0.0, 0x1.6afa123231838p-1022, 0.0, 0.0,
     0x1.770d11577c3c6p-423, 0x1.6a8fdadf90f94p-381, 0.0, 0x1.1c7fa622f247cp-516,
     0x1.1feef5c134b1ep-575, 0x1.456819ffc3df6p-904, 0x1.846310f8bf4aep-289, 0.0, 0.0,
     0x1.5dafd7af6fd48p-869, 0.0, 0x1.8113b7be7b915p-851, 0x1.117420c615a2ep-119, 0.0,
     0x1.5c623820e42a6p-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.054124367a7e8p-468, 0.0,
     0x1.bc4637509b274p-192, 0x1.9c94fa5bd84dep-24, 0.0, 0x1.36eaf80e8555cp-796, 0.0,
     0x1.8e4193a6698dep-383, 0.0, 0.0, 0x1.70c6d010af0eep-172, 0x1.6485e2623919fp-209,
     0.0, 0x1.434651928681ap-778, 0.0, 0.0, 0x1.6cab1a644c06ep-1018, 0.0, 0.0,
     0x1.e3fe72ce9aaadp-506, 0x1.324edfea412ap-493, 0.0, 0x1.663cd6d5576d9p-259,
     0x1.f409c9b65c3b7p-1007, 0x1.554a6354924p-390, 0.0, 0.0, 0x1.fec11a9fe2612p-601,
     0x1.61272fb70733ap-538, 0x1.05fe6d63d0c1ap-478, 0x1.415a8eda0a96dp-335,
     0x1.2c78b7683aecdp-983, 0.0, 0x1.d5134824f2eebp-807, 0x1.eec4911339318p-315, 0.0,
     0.0, 0x1.e57dcc0b321d7p-247, 0.0, 0x1.80f9a08dfa164p-581, 0.0, 0.0, 0.0,
     0x1.4684df02ab68ep-658, 0x1.20984e40608ffp-73, 0x1.fe9d2d2f402d5p-97, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fca09e062410fp-159, 0.0,
     0x1.c65b277db40dep-578, 0x1.12740539f58f9p-517, 0x1.a35ab486606ecp-303,
     0x1.16bb39805b61ap-378, 0x1.af64351b52d6cp-936, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.90d9d0a300705p-182, 0x1.50d494fad4d57p-848, 0x1.38f34096d14f3p-914, 0.0,
     0x1.ff2ce2fd159a5p-653, 0x1.32fe6d6f4566cp-473, 0x1.032ba032a29e9p-662, 0.0,
     0x1.d40b8164f3979p-885, 0x1.1773c9b6431ecp-99, 0x1.19610ccfa07d5p-135,
     0x1.dab3c1321d817p-217, 0.0, 0.0, 0x1.3a9865a34b5dap-412, 0x1.6195ad8220482p-70,
     0.0, 0.0, 0.0, 0x1.67cd87ad24b63p-220, 0.0, 0x1.3818d4d617fc2p-214,
     0x1.b72cb87e56726p-925, 0x1.f9e3d9b045e32p-518, 0.0, 0.0, 0.0,
     0x1.d8ebb537f8561p-63, 0x1.f97b877937e67p-308, 0x1.4de9aeec3a459p-890,
     0x1.70a0710d96d3p-384, 0x1.19ec0be8760d8p-863, 0x1.f4c2cf610192cp-750, 0.0, 0.0,
     0x1.749fc91fae55dp-419, 0x1.0cec2a0001a03p-543, 0x1.6a631cc191a0cp-449, 0.0, 0.0,
     0.0, 0.0, 0x1.72d9c79fe71bap-196, 0.0, 0.0, 0.0, 0.0, 0x1.7d7bbe71a14dap-382,
     0x1.68f0a38aee35fp-599, 0x1.6facf2eb823bbp-170, 0.0, 0.0, 0x1.e446fe9e89e04p-131,
     0.0, 0x1.36301dff0fb4bp-255, 0.0, 0.0, 0.0, 0x1.c426ea996ff29p-182,
     0x1.6a594eee5a41p-833, 0x1.a12146c21588ep-321, 0.0, 0.0, 0x1.e8e0386422cf4p-267,
     0.0, 0.0, 0x1.9ed1b9de11676p-847, 0x1.10badc6230bbcp-817, 0x1.94d8d17989f96p-512,
     0x1.94ee2a94bafa4p-252, 0.0, 0.0, 0.0, 0x1.893561fb038b8p-706,
     0x1.ec744dd3cf71p-154, 0x1.0ed91f424b9e4p-390, 0.0, 0x1.c1a1bdc2e20ap-506, 0.0,
     0.0, 0x1.c87a0df8c39fdp-820, 0x1.3dda351db2acbp-127, 0x1.011f6031cc623p-114,
     0x1.0db162671425ep-630, 0.0, 0.0, 0x1.c156d7eb252fdp-161, 0x1.3cbf3599e3687p-398,
     0x1.259574925f23fp-378, 0x1.ad82e61a46265p-293, 0x1.c7aa0a24de469p-547, 0.0, 0.0,
     0x1.c06080d865392p-200, 0x1.f58210f9aa6cdp-129, 0x1.829c4e3a2e06p-271, 0.0,
     0x1.5118fc7b8fbaap-484, 0x1.3405e25673096p-860, 0x1.e0f2088934ff7p-447, 0.0, 0.0,
     0.0, 0.0, 0x1.37644f565ceafp-504, 0.0, 0.0, 0.0, 0.0, 0x1.2b940d76c0a87p-1015,
     0.0, 0.0, 0.0, 0.0, 0x1.ac327218acf82p-638, 0x1.08c9001e3bb1ep-572, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.70cbbb026aea8p-145, 0x1.338afc61c8b0bp-55, 0.0,
     0x1.2568ec851460fp-253, 0x1.5979e1dcbe31p-186, 0.0, 0x1.be1cad7d35e85p-253, 0.0,
     0x1.07cb695654bd9p-56, 0x1.12324ce403e77p-276, 0.0, 0x1.d57825125c4d9p-194, 0.0,
     0.0, 0x1.9895da6bf6301p-678, 0x1.618564ae7dd57p-388, 0x1.47e3e7f8b496dp-274, 0.0,
     0x1.244431f8af70cp-729, 0.0, 0.0, 0.0, 0x1.cf6466c2d315p-311, 0.0,
     0x1.da2dd6066797cp-703, 0x1.16084cddcffc8p-697, 0.0, 0.0, 0.0,
     0x1.2e7c7dc4f94cep-587, 0x1.8cbbb1260753fp-531, 0.0, 0x1.83b5b2efc4e62p-988, 0.0,
     0.0, 0x1.3e7685a3ddf7bp-625, 0.0, 0x1.02903e2f562d3p-1018,
     0x1.b482a700851e9p-181, 0.0, 0.0, 0x1.362414966ed9ep-724, 0x1.f2dbbfd7efea1p-127,
     0x1.bfe692000cf7p-732, 0.0, 0x1.06bbe81e2747dp-563, 0.0, 0x1.2041943806bfep-887,
     0.0, 0.0, 0.0, 0x1.99e443cc03bf7p-752, 0x1.48dcf3727fe5p-212,
     0x1.ecf26f3ecf652p-51, 0.0, 0x1.23a76773a0c91p-736, 0x1.019982eb78d23p-354, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.414e26f8276c9p-295, 0.0,
     0x1.c9a39fab1015ep-1010, 0.0, 0.0, 0.0, 0.0, 0x1.ead244cc97a6bp-813,
     0x1.2ff863b92a4a3p-879, 0x1.10be9ab707584p-514, 0.0, 0.0, 0x1.baaf6ef925902p-868,
     0.0, 0.0, 0.0, 0x1.0df5dbe3f19c5p-421, 0x1.013d399bdad1dp-933, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1c2da831b1c18p-851, 0x1.1a41f3a821aeep-292, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a795f97879104p-849, 0.0, 0.0, 0x1.c22ad950f4de7p-368, 0.0,
     0x1.ebcc6b2db40eep-710, 0.0, 0.0, 0.0, 0x1.6591af4116aebp-680, 0.0, 0.0, 0.0,
     0x1.4cf7387dd53c7p-256, 0x1.3a154fe1d8495p-13, 0.0, 0x1.74128f4aeeaeap-768,
     0x1.2481579a433f9p-180, 0.0, 0x1.87213914bb77dp-933, 0x1.4c403f5135452p-818, 0.0,
     0x1.45375b7d8967ap-554, 0x1.68c8cb037ca5fp-530, 0.0, 0.0, 0x1.66808d57a763p-620,
     0.0, 0x1.1901ac88dc713p-146, 0x1.6859cda4906cap-801, 0x1.0cf7b592fa785p-137, 0.0,
     0x1.ce3823ee64d03p-982, 0x1.08150d92f79a9p-659, 0.0, 0x1.b60828f68b28dp-792, 0.0,
     0x1.903005d539cb4p-402, 0.0, 0x1.04c27f36b604bp-249, 0.0, 0x1.51dd2c8b421bp-259,
     0.0, 0x1.da8217e571566p-968, 0.0, 0x1.4dd0dac0d5441p-51, 0.0, 0.0,
     0x1.fe86f5bfea377p-38, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24572fcb7a8a3p-594, 0.0,
     0x1.0a94d6ee6f12dp-555, 0.0, 0.0, 0.0, 0x1.84a649151a9p-767, 0.0,
     0x1.db9d596f23393p-426, 0.0, 0x1.c8467da9d0af4p-493, 0.0, 0x1.a60baf2fdc04bp-986,
     0.0, 0.0, 0.0, 0x1.54c7f30a4140ap-749, 0.0, 0.0, 0x1.a230aca5fe3d2p-636,
     0x1.a9a3d60501c78p-11, 0.0, 0.0, 0.0, 0x1.8b2a198006ce7p-30,
     0x1.866bcb728d403p-972, 0.0, 0.0, 0x1.1ef9168cf859cp-951, 0x1.23d3f0bbaa75ep-36,
     0x1.4da7e9e5a5631p-48, 0.0, 0x1.e0e4190ec821ep-693, 0x1.a358d1f9e58fbp-395, 0.0
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
            tmp1 = Sleef_exp10d2_u10kvx(tmp0);
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
    printf("Sleef_exp10d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp10d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
