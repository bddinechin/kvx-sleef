/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind1_u10purecfma.c --function \
 *     Sleef_finz_asind1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.a5db1b695754ep-120, 0.0, 0x1.f293f9db05a0ep-171, 0.0, 0.0, 0.0,
     0x1.8930d90c27002p-743, 0.0, 0x1.32809b6ad2ef2p-21, 0.0, 0.0, 0.0,
     0x1.80774ad4c4aa8p-656, 0x1.26acf7e62f55fp-430, 0x1.f63dd93c82ecap-309, 0.0, 0.0,
     0.0, 0.0, 0x1.d2f199e3d9808p-228, 0x1.7197a97bf707cp-955, 0x1.ac18dd6829d4fp-901,
     0x1.00a4f788a161dp-616, 0.0, 0x1.4c85f271cdfcbp-549, 0.0, 0x1.7bba285ed1ebep-815,
     0x1.a21116c17b73bp-440, 0x1.37573e067fefbp-770, 0x1.3f3c679078614p-209,
     0x1.3b93592fdd726p-687, 0x1.cf5277ebe9d4fp-421, 0.0, 0.0, 0x1.f6f0527715a3bp-292,
     0x1.26f210b12313dp-245, 0.0, 0x1.230e387f329fep-480, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d48a61bc2dfe7p-564, 0x1.fc2675588e81ap-366, 0x1.426ad17a1037dp-336, 0.0, 0.0,
     0x1.5de2e4cfadbe9p-505, 0.0, 0x1.76bd910f1c552p-235, 0x1.4fb0a4b6b286ap-933, 0.0,
     0x1.0ebdda537a2a8p-837, 0x1.0d755414efe71p-410, 0.0, 0.0, 0x1.b434fde8cb0cdp-431,
     0x1.bdf24942240e1p-271, 0.0, 0x1.4cbbe15053df4p-395, 0.0, 0.0,
     0x1.6d12a1c68d276p-695, 0x1.76a9179097e74p-311, 0x1.a02a6c6b5c5fcp-1012, 0.0,
     0.0, 0x1.2c8f8ab68dacep-137, 0.0, 0x1.543188fb3d1cp-406, 0.0,
     0x1.604225a4f6723p-719, 0x1.aabdc0202e27bp-872, 0x1.923cf274ba615p-852, 0.0,
     0x1.bcdc2113b7763p-8, 0.0, 0.0, 0.0, 0x1.82f76e0e08891p-669, 0.0,
     0x1.689d36998743fp-454, 0x1.2b31d1bc1d16ap-735, 0x1.9c0f53421431ap-841,
     0x1.a391b0c439aa7p-31, 0.0, 0x1.44b5167a878d3p-726, 0x1.cbd1d25f57b9ep-822,
     0x1.296b2a7685f9fp-441, 0x1.91e11ea372dbbp-188, 0x1.3aeccfe3fe134p-393, 0.0,
     0x1.51d8f41b1beddp-751, 0x1.a399f26315bc4p-105, 0.0, 0.0, 0x1.13b57745c717p-537,
     0x1.8b820ea8ff532p-980, 0x1.7038ba9175a7cp-64, 0.0, 0x1.30f47b81dbbafp-413,
     0x1.d3de3ea06b1b9p-36, 0.0, 0x1.5fa0ddd25aa99p-795, 0.0, 0x1.5e140b5c7524dp-795,
     0.0, 0x1.afc4b6cf8d12fp-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66f37cf461697p-912,
     0x1.c339415199875p-781, 0x1.89c9dabced09ep-546, 0x1.58598350580ebp-692,
     0x1.b098cc421b646p-502, 0x1.3bca79f60a5acp-1013, 0.0, 0.0,
     0x1.3c86ce0a07e3cp-294, 0x1.973a88d1504eep-564, 0.0, 0x1.888f365fb6ac3p-920, 0.0,
     0.0, 0x1.acf8d79929a82p-939, 0.0, 0x1.ac12dc003ef82p-737, 0.0,
     0x1.1e83b1523ebf5p-745, 0x1.92279c58fbe36p-12, 0x1.021664b9401f6p-357,
     0x1.476ae62db418dp-501, 0.0, 0x1.a5b317c7381dbp-647, 0x1.7f3ed54d5684ep-992, 0.0,
     0.0, 0.0, 0.0, 0x1.9ee9216f5347p-429, 0.0, 0.0, 0.0, 0.0, 0x1.ccb6b213f7fa6p-93,
     0x1.ded81473dd636p-876, 0.0, 0x1.f54d0ac2ebfabp-715, 0x1.939a9c6ece285p-582, 0.0,
     0x1.7eabd55a7dcadp-639, 0.0, 0x1.75196497f173p-113, 0x1.d553754cd57efp-495, 0.0,
     0x1.369591d818998p-241, 0x1.451ac09fe245p-98, 0.0, 0x1p0, 0x1.9fcfb98d84cfbp-843,
     0x1.2d5cea2931a63p-629, 0x1.a5d3acdb1457cp-54, 0x1.eb136fbba27a3p-333,
     0x1.ac8dc223cde35p-115, 0x1.ffbbb629813f6p-964, 0.0, 0.0, 0.0,
     0x1.f0aa300cf7008p-220, 0x1.b95c04bdd08cp-149, 0.0, 0.0, 0.0,
     0x1.51ba2e5126bb4p-709, 0x1.acc64dcc5d303p-955, 0.0, 0x1.9b2120596b31ap-398, 0.0,
     0x1.9528d7bceebb3p-748, 0x1.5fc4939c63e88p-372, 0x1.2746dc0e2626cp-719,
     0x1.2d8dfafee2445p-965, 0.0, 0x1.8a5705f3b5a3p-860, 0.0, 0.0, 0.0, 0.0,
     0x1.8efa4094fc805p-637, 0.0, 0.0, 0.0, 0x1.40448067ad417p-564, 0.0, 0.0,
     0x1.da6561e32abc2p-627, 0.0, 0.0, 0.0, 0.0, 0x1.8f4809c81d81fp-432, 0.0, 0.0,
     0.0, 0.0, 0x1.1d6f853050e28p-230, 0x1.8fed7f0a41123p-393,
     0x1.dad55721b06b6p-1017, 0x1.cf3a3666455ecp-195, 0x1.3e20307eee4cap-80, 0.0,
     0x1.68240074193d7p-571, 0x1.6dd2754f5e28p-390, 0.0, 0x1.ae8fdb77e347dp-145, 0.0,
     0.0, 0x1.a019f868ad14dp-28, 0.0, 0.0, 0x1.b80a715375395p-16,
     0x1.c82f0f5f8d686p-974, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4ab2c522bce8bp-497, 0.0, 0x1.35580511196p-643, 0x1.0df36d478c037p-4, 0.0,
     0x1.23ba813d4775p-748, 0x1.0389470c56624p-659, 0.0, 0x1.e63c918db78cep-939, 0.0,
     0x1.4f0b9ef460726p-721, 0.0, 0x1.1ee16e578b2b1p-404, 0x1.c10c9d3e40a03p-542, 0.0,
     0x1.44729d97c309p-68, 0x1.7ea198b97d575p-220, 0.0, 0.0, 0x1.7ec025b8a7ac9p-58,
     0.0, 0x1.ec14384131a74p-962, 0.0, 0.0, 0x1.aaf06f9e41cb9p-627,
     0x1.4f8360990b042p-911, 0.0, 0x1.bee677c0bba55p-705, 0.0, 0x1.7781e0b5b1615p-601,
     0.0, 0x1.d090dba6adcd1p-138, 0.0, 0.0, 0.0, 0x1.e75b2831cccfep-864, 0.0, 0.0,
     0x1.8020a7e823e9ap-819, 0x1.e6c2de4ab72adp-85, 0x1.c6cf7412c8c7fp-789,
     0x1.8d2fb69f1ac62p-448, 0.0, 0.0, 0x1.0765213e84515p-649, 0.0, 0.0, 0.0,
     0x1.877271e38a5b6p-676, 0x1.76bba0f2ec54bp-187, 0x1.5c7bad696321ep-396,
     0x1.889b746d5b3fcp-983, 0x1.210d8a613fbc4p-412, 0.0, 0.0, 0x1.efbbdb24522a5p-603,
     0.0, 0.0, 0x1.a29f212d06b43p-823, 0.0, 0.0, 0x1.f0a8b2e673752p-806,
     0x1.93939caf1d222p-796, 0.0, 0.0, 0.0, 0x1.8b7b23c03f446p-594,
     0x1.0aaa9bb0e3676p-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bede66a19a54fp-906,
     0x1.43e070e9fc572p-980, 0x1.0e63b9f5911fdp-883, 0.0, 0x1.39735bb637591p-124,
     0x1.c85c77455f78p-881, 0x1.e858308a81e03p-108, 0.0, 0x1.67c3dca8f9e9cp-594, 0.0,
     0x1.cdb9f9d8fea1p-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21ae9a279a6c2p-997,
     0x1.0dbd2100434d2p-775, 0.0, 0x1.866c459578c9p-729, 0x1.884499804cabbp-823, 0.0,
     0x1.bf99d2abb67ecp-235, 0x1.4ee7e138323a6p-709, 0.0, 0x1.e67471768c4ddp-340,
     0x1.3f7290ba5d1d9p-102, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87d795947c6p-407, 0.0, 0.0,
     0x1.ce4f86f387172p-865, 0x1.bc66554f40762p-508, 0x1.e599e24f0e99ep-612,
     0x1.19116fc903437p-669, 0.0, 0.0, 0x1.769bccc255bddp-874, 0.0,
     0x1.74baf115534ap-644, 0x1.f78d47dd91693p-575, 0.0, 0x1.6920819786bc2p-336,
     0x1.eb675fd69cc7fp-407, 0.0, 0.0, 0x1.e67ef64f9fd81p-962, 0x1.1c0db64c6b6bep-703,
     0.0, 0.0, 0x1.575106cdfbcf9p-325, 0x1.96fb45e59f55fp-860, 0.0,
     0x1.179632676b158p-831, 0x1.e0535bc3ecec2p-75, 0x1.26667ca9856p-81,
     0x1.b602059552eb3p-719, 0.0, 0x1.d46b29344b144p-894, 0.0, 0x1.045aff52e44bdp-651,
     0.0, 0x1.de1c24986ba2ap-932, 0.0, 0x1.d8fdd97494f2dp-637, 0.0, 0.0,
     0x1.8a81ff26de9afp-791, 0.0, 0.0, 0x1.323791a59a914p-32, 0.0, 0.0,
     0x1.8ac64a461be76p-405, 0.0, 0x1.61b90d22e04f9p-282, 0.0, 0x1.e0ba9bd24ff32p-188,
     0x1.631a43e29d7c9p-368, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4cb0d76fb4123p-957,
     0x1.d8facff8b90dfp-566, 0.0, 0.0, 0.0, 0x1.c2c5fb276a8f7p-568, 0.0,
     0x1.7d2e10feb32dcp-631, 0.0, 0.0, 0.0, 0.0, 0x1.f1d62746c4d8ep-320,
     0x1.7c6c3cc8852bbp-295, 0x1.a841def8658a3p-594, 0x1.fff8c123a4679p-827, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e43e6328220eap-661, 0x1.75b7c6d122524p-73, 0.0,
     0x1.1c51a82b7ebd2p-770, 0.0, 0x1.babf50b5fa5d2p-859, 0.0, 0x1.a8c91f0e91fc1p-310,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a8a52ed77ca5p-529, 0x1.28b96dc8a5a4cp-984,
     0.0, 0.0, 0.0, 0x1.f230096fb5f14p-1016, 0x1.1c574279d0ee6p-207, 0.0,
     0x1.842084873842p-520, 0.0, 0.0, 0.0, 0.0, 0x1.33c1c39cddb07p-637,
     0x1.c50f4c0095af7p-240, 0x1.fe192550b1471p-147, 0x1.40951cefc1507p-638,
     0x1.041de5ad447e3p-571, 0x1.654de69cf0a6bp-373, 0x1.b696325e338b4p-655,
     0x1.b55d528be419cp-87, 0.0, 0.0, 0.0, 0.0, 0x1.62419ff3fa96ap-158, 0.0,
     0x1.c2203e1961805p-905, 0.0, 0.0, 0x1.4e71a980118efp-726, 0.0,
     0x1.7a96347cb6ff7p-96, 0x1.361037ccba44cp-538, 0.0, 0x1.8db5aee3c0e64p-905,
     0x1.a8da93b230c12p-124, 0.0, 0.0, 0.0, 0x1.331fc6c4952b1p-334,
     0x1.1165ed009ca12p-790, 0x1.060c506ffed82p-1003, 0x1.114f75cb5ce4cp-844, 0.0,
     0x1.89b92513f3ffap-47, 0.0, 0x1.51a8152cce9d9p-816, 0.0, 0x1.7ee8859284ceap-229,
     0x1.493cca0a6bd21p-422, 0.0, 0x1.fae93020b4a77p-327, 0.0, 0x1.184971c2fcf13p-765,
     0.0, 0.0, 0x1.65c5404b41164p-487, 0.0, 0.0, 0.0, 0x1.8e1afd7d73c82p-803, 0.0,
     0.0, 0x1.79e842e4ed9b2p-160, 0.0, 0.0, 0.0, 0.0, 0x1.f2c50d4dfb96bp-951, 0.0,
     0.0, 0.0, 0x1.ab245bf96288fp-468, 0.0, 0x1.64f01e100da75p-59,
     0x1.5e3ab076688cap-938, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c37c0c1ebd11p-17,
     0x1.93cc38301a526p-209, 0x1.9280f43f963c5p-863, 0.0, 0.0, 0.0,
     0x1.2d1322fbea504p-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.102dfc4973b6bp-891,
     0x1.4b7832602a729p-536, 0x1.c01d0fad0cbap-645, 0x1.3157902af6ed8p-1021, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.176b0246b8b2ep-100, 0x1.cda7ec2a57841p-856, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.852eafda897cfp-371, 0x1.c57b137056c22p-566,
     0x1.3c6de81c6f049p-4, 0x1.5618f419b3414p-29, 0x1.5214785d15607p-957,
     0x1.bb8e73f721324p-97, 0x1.c9e698fcdef26p-935, 0.0, 0x1.721ace37b0812p-459,
     0x1.a2f84d78bc97ep-534, 0.0, 0.0, 0.0, 0x1.ae84c14114dc2p-919,
     0x1.29f14ab55e548p-648, 0.0, 0x1.55e50f1ef2a1ep-956, 0.0, 0x1.f3099e11c6c47p-989,
     0x1.952c3b1fefacp-1013, 0x1.53a2cea6a7a7dp-929, 0x1.da232d59f08a1p-230, 0.0, 0.0,
     0.0, 0x1.603019263adb1p-1011, 0x1.07dad0465d054p-78, 0x1.9c684db86767ep-634,
     0x1.03067bf6113dep-759, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9123a53f5317ap-581, 0.0,
     0.0, 0.0, 0x1.4df141c12369dp-630, 0.0, 0x1.eaeaf287ef39bp-690,
     0x1.443eece53efc4p-315, 0.0, 0.0, 0x1.66ab66e003282p-867, 0x1.05c5f0359d8e7p-268,
     0x1.913d6e8ebb0a1p-876, 0.0, 0x1.8aeb061e1945ap-460, 0x1.f3ca8e1de5877p-239, 0.0,
     0x1.a7130e8a2501ap-1003, 0.0, 0x1.b6b2f5613265cp-623, 0.0, 0.0,
     0x1.781c787d0cfebp-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a686a2b74463p-133, 0.0,
     0.0, 0x1.9ff3a9d9f840dp-778, 0.0, 0x1.41961b68b985cp-778, 0x1.d60d0380509eep-141,
     0.0, 0x1.1c1bba0329e1fp-21, 0x1.17bb4964fe5b1p-268, 0.0, 0x1.eb05cd922e8a4p-948,
     0.0, 0.0, 0x1.cf7685b53dd5bp-211, 0.0, 0.0, 0.0, 0x1.e297a3e8dfe5ep-356, 0.0,
     0x1.5f7abc7edb3ffp-445, 0.0, 0.0, 0x1.6a427381278a2p-544, 0x1.3b1b80624a16ap-745,
     0x1.6e66a0c092949p-115, 0x1.c607f4030e3cp-543, 0.0, 0x1.60c7b3ad2667fp-308,
     0x1.02c8b202e342p-749, 0.0, 0x1.b38924d7875d7p-303, 0x1.c80a9efbe5e87p-911, 0.0,
     0.0, 0.0, 0x1.bf0fd6f5e9404p-372, 0x1.82edaa2d2faafp-788, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c42c8ef23ae7p-204, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6321a61f19ffcp-801, 0x1.269736524102cp-203, 0.0, 0x1.8097fd9f55dccp-846, 0.0,
     0.0, 0x1.ab3691e5b2b38p-385, 0x1.7ecf187c51461p-838, 0x1.2b8464cec440bp-877, 0.0,
     0.0, 0.0, 0x1.57b30d62c0f13p-922, 0x1.d482a3bdbd5fcp-958, 0.0, 0.0,
     0x1.70ac1beb7a943p-662, 0x1.c8e7f007d0162p-339, 0x1.d5c655bf09423p-1003,
     0x1.2414261c6697bp-936, 0x1.59d17e96de566p-455, 0x1.4b5b6564f8ce9p-905, 0.0, 0.0,
     0.0, 0.0, 0x1.ecb629f62dd5ap-440, 0.0, 0x1.11e19e60d911p-964,
     0x1.8d4b827804108p-939, 0.0, 0.0, 0x1.8333de556703cp-774, 0x1.ecdd4834a5278p-811,
     0x1.e252c89884ce8p-723, 0x1.ae65893f19959p-1018, 0x1.9907da3059a3ap-863, 0.0,
     0x1.8a546b5490ad6p-686, 0x1.71aa2dc4c699dp-799, 0.0, 0x1.653c28fac55eep-164, 0.0,
     0x1.1e5a49c81834p-321, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.27f5045a2902ep-120, 0.0,
     0x1.ff34baedadc3p-959, 0.0, 0x1.368291058dbd2p-149, 0x1.fc50880b65ce4p-195, 0.0,
     0.0, 0x1.f4020d6f59208p-124, 0.0, 0x1.f3a8fe06fdeedp-514, 0.0, 0.0, 0.0,
     0x1.e5d694b927e47p-159, 0x1.f7ae974ba45cap-904, 0x1.c438e7cb5ca6fp-649, 0.0, 0.0,
     0.0, 0x1.ecfdf35da6d8dp-106, 0.0, 0.0, 0.0, 0.0, 0x1.d8768b22bf1afp-308,
     0x1.20e5946e9ad19p-888, 0.0, 0x1.f820d6280b73cp-938, 0.0, 0.0, 0.0, 0.0,
     0x1.fd01df9da4cd4p-38, 0.0, 0.0, 0x1.ea5b5836d384bp-510, 0x1.84e52d8eb18d6p-875,
     0x1.b4d8ea448a506p-279, 0.0, 0x1.a736fa0e486a3p-771, 0.0, 0x1.40644aa216551p-799,
     0.0, 0x1.c76e54c4f4868p-133, 0.0, 0x1.5eb114800bf81p-833, 0.0, 0.0,
     0x1.fcb303306943ep-668, 0x1.35b143302dac9p-14, 0.0, 0x1.23e83f58e63d5p-521,
     0x1.70da4560cf63ap-66, 0.0, 0.0, 0.0, 0x1.57860d2f145a8p-381, 0.0, 0.0, 0.0,
     0x1.960b8c6dc3f8ap-883, 0x1.4d5758bab0d3bp-929, 0.0, 0x1.2057ed46f8389p-274,
     0x1.5fb016c71780cp-826, 0x1.5f47853a5a799p-450, 0x1.7021ed5ae8384p-806, 0.0,
     0x1.f12d5d4716768p-24, 0.0, 0x1.132a66e080708p-453, 0x1.502dab8ec5171p-573,
     0x1.0a6d4cfa0c8cdp-519, 0.0, 0x1.8ae4c79e1432dp-234, 0x1.c59d70e28f027p-78, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c0f7c8d7a65ddp-983, 0.0, 0x1.30f8ef75d1f1dp-210, 0.0,
     0.0, 0.0, 0.0, 0x1.59222ef0402dep-108, 0.0, 0x1.f4286b56d2484p-303, 0.0,
     0x1.b38167a298dfcp-39, 0.0, 0x1.09e2c740935f6p-309, 0x1.efea63af56e29p-154,
     0x1.c3ed051569741p-393, 0x1.f324dd4b2d38cp-802, 0x1.745226d8ec721p-549,
     0x1.b01f7d1961d7ap-73, 0.0, 0x1.b717277bd1cf7p-336, 0x1.ecd2429263574p-230,
     0x1.9a7f913aa2dc1p-636, 0x1.d1207080a2eb4p-840, 0.0, 0.0, 0.0,
     0x1.f5aaee06263dep-559, 0x1.27eaf4f9d4427p-351, 0.0, 0.0, 0x1.8fedc1e05f34p-677,
     0x1.593d54a497c1bp-516, 0x1.d8ffa5c2f9419p-1015, 0x1.efc31e46afb67p-514, 0.0,
     0.0, 0x1.0d58615be45a1p-395, 0.0, 0.0, 0x1.48fe880be8011p-616,
     0x1.9890068549b91p-14, 0x1.d39391826d7b1p-937, 0.0, 0x1.c28bbc625bcp-611,
     0x1.790a494f1fea2p-706, 0.0, 0.0, 0.0, 0.0, 0x1.91f9102d97e27p-597, 0.0,
     0x1.420b2aa1d119bp-636, 0x1.43d32dd7be1b9p-185, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8dc317dff85ecp-673, 0.0, 0.0, 0x1.a752870f0b98cp-343, 0x1.5ec20555657dcp-423,
     0x1.0a44a4b186ecp-1017, 0.0, 0.0, 0x1.a059ccbc7d39ap-168, 0.0,
     0x1.d739a190cd26ep-689, 0.0, 0x1.1516648da16a8p-417, 0.0, 0x1.14ba00bf4d249p-509,
     0x1.4ab7f89ffaa41p-342, 0x1.f39bddb7809bap-509, 0x1.fb624b0b70e2bp-806,
     0x1.5aa219213b28ep-990, 0x1.6272886ce4f5dp-925, 0x1.86873bce00271p-358, 0.0, 0.0,
     0x1.e230841a778dfp-226, 0.0, 0x1.82dadbf2f49e6p-576, 0.0, 0x1.d98af607af319p-158,
     0.0, 0x1.73f97e1f1c72ap-113, 0x1.a77d4dbd8599dp-928, 0.0, 0.0, 0.0, 0.0,
     0x1.3b943d7e975e2p-561, 0x1.df9962e56de55p-12, 0.0, 0.0, 0x1.6e11135ed0617p-4,
     0.0, 0x1.69d7ac5184978p-708, 0x1.54304a2a72386p-714, 0x1.06218c12bf14ap-839, 0.0,
     0.0, 0x1.c3eb0e949f582p-832, 0.0, 0x1.b96cafb093d2ep-6, 0.0, 0.0,
     0x1.8d292e4cbdd79p-901, 0x1.ccf8d2b29012bp-117, 0.0, 0.0, 0.0,
     0x1.9fabd90c32f19p-811, 0x1.4be9dc87db82dp-838, 0x1.23609b685b037p-796,
     0x1.b4a91e8831d6ep-907, 0.0, 0.0, 0x1.827c00564d5dfp-867, 0.0,
     0x1.8d23e722c937bp-62, 0x1.2e6a78ddad234p-409, 0.0, 0.0, 0x1.2e202547be031p-222,
     0x1.cb3fc6a2370dcp-56, 0x1.60a37738607ebp-848, 0x1.305ef90f243dfp-872, 0.0,
     0x1.9f7eefd41d676p-360, 0x1.a3fa672b9147cp-43, 0x1.82728cafa3ae2p-954,
     0x1.2535e2ee69d61p-987, 0.0, 0x1.75cfb03022838p-721, 0x1.5d64fa39aaa48p-52, 0.0,
     0.0, 0.0, 0x1.57f1f0c868425p-160, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a7fdbda7ebf8p-240, 0x1.60bfc17ad884p-538, 0x1.1c500980474eep-472,
     0x1.1e0509e294a72p-760, 0x1.4d788b3b3a316p-619, 0x1.6758a47820a62p-971,
     0x1.bc0ea8db16e07p-473, 0.0, 0.0, 0.0, 0x1.fe14ee0b976b8p-119, 0.0,
     0x1.986a4ebd67aeep-266, 0.0, 0x1.1338f84b64495p-622, 0x1.122bdd81b4662p-820,
     0x1.e9fe698aec7e3p-925, 0.0, 0.0, 0.0, 0x1.03445d833ef0fp-278,
     0x1.9a1fd80269b5dp-954, 0x1.13b591489411ep-92, 0.0, 0.0, 0.0,
     0x1.00f7fdb939102p-876, 0.0, 0.0, 0x1.c72367166a692p-292, 0x1.d9b07ba6fcd4p-11,
     0x1.60e434ff0c03bp-412, 0x1.eb9a79240e22p-833, 0x1.38edef5bfb207p-281, 0.0, 0.0,
     0x1.eb116381baddfp-527, 0x1.3b9f461f5de42p-414, 0.0, 0x1.013628092ce56p-282, 0.0,
     0x1.0fbebc0163d1dp-818, 0x1.b955e78ef07f5p-723, 0x1.f688c7705e90ap-295,
     0x1.6dfda95a883a8p-340, 0.0, 0x1.2c2c1d2efbb83p-793, 0.0, 0x1.2c1887926bb29p-296,
     0x1.6a675690f2f54p-154, 0.0, 0.0, 0x1.66b5766185f67p-634, 0x1.03ee1c0562398p-464,
     0x1.80ce772d782cbp-795, 0x1.5b6ee052ff136p-477, 0x1.07a27551525dcp-663, 0.0, 0.0,
     0.0, 0x1.806f2730d1018p-386, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_asind1_u10purecfma(tmp0);
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
    printf("Sleef_finz_asind1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asind1_u10purecfma bench acc %la\n", global_bench_acc);
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
