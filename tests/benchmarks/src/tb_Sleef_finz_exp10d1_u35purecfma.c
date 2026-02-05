/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d1_u35purecfma.c --function \
 *     Sleef_finz_exp10d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.1ce23d69cc8afp-320, 0x1.cd545f52be94fp-204, 0x1.3e8395f5ae273p-28,
     0x1.1e24c2461896p-730, 0x1.8b4156434b926p-215, 0x1.629c86df8ce3dp-544, 0.0,
     0x1.d5d4287120f1p-83, 0x1.9f5d0610b5825p-327, 0x1.7114a5800b598p-969,
     0x1.dcaa46cb33321p-809, 0.0, 0x1.77f7d7412843cp-502, 0.0, 0x1.40bd0e989f2f7p-630,
     0.0, 0x1.fcef4960881dap-1003, 0.0, 0x1.7b8ea12803871p-782, 0.0, 0.0, 0.0,
     0x1.2fe8b32037d0fp-336, 0x1.ea481b2096f69p-87, 0x1.930aa1c107fd9p-858, 0.0, 0.0,
     0x1.1c400d33b6aa5p-767, 0x1.d2ebd2a8a6411p-844, 0.0, 0x1.fc6d95376d134p-772,
     0x1.56893b547273ap-668, 0.0, 0.0, 0x1.bcb2c1d81d159p-33, 0.0, 0.0,
     0x1.52c81d479bd24p-619, 0.0, 0x1.d3aadbe27917ap-435, 0.0, 0x1.c55b4295ba93p-589,
     0x1.6f65598ff840ep-834, 0.0, 0.0, 0.0, 0.0, 0x1.76d8913cc286ap-47,
     0x1.4bf23a0a18341p-236, 0x1.cf07c2ffca737p-228, 0.0, 0x1.a96f76c58f66fp-843, 0.0,
     0x1.df076afe3b43dp-12, 0x1.5b060402564fbp-646, 0x1.038f1bfed9c1ap-969,
     0x1.241448c70016bp-10, 0x1.09b50fc227b11p-323, 0x1.36792289c2977p-949,
     0x1.0fdefd2ed349dp-274, 0.0, 0x1.982e20e97736bp-145, 0.0, 0x1.e787e74215949p-253,
     0.0, 0x1.913f5fee98f36p-571, 0.0, 0.0, 0x1.f65067d9f6b75p-782, 0.0,
     0x1.a2456596b1899p-988, 0x1.b2fd4ebb9f22bp-258, 0x1.011f35313ebcdp-347, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d406a21c5e952p-84, 0.0, 0.0, 0x1.9e5d5c222bd63p-1010,
     0x1.33ba662e2fd18p-673, 0x1.19f76da789364p-501, 0x1.9575864cc8772p-308,
     0x1.09dd79fa9d852p-142, 0.0, 0x1.91f2f982c234p-287, 0x1.439660c9e252ap-884,
     0x1.606b083ef2d58p-299, 0x1.66e9c5241bfa1p-312, 0x1.8bc1406d324f5p-336, 0.0, 0.0,
     0.0, 0x1.22f424dc45a63p-570, 0x1.e20a0cbbf740dp-801, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.088038851d2d2p-286, 0x1.348e546e395cbp-1018, 0.0, 0.0,
     0x1.a4ab673ef0352p-941, 0x1.01588c087ba71p-378, 0.0, 0x1.d738fc774c468p-852,
     0x1.dcc9ba091d4bfp-871, 0x1.a2dfe8a0a546p-141, 0x1.7b399539182ddp-878,
     0x1.12c339abf879fp-680, 0x1.b49d914cd5d08p-428, 0.0, 0.0, 0x1.c699763dd5b72p-21,
     0x1.a87a0bd8ec9c2p-577, 0x1.c242a18b366dcp-103, 0.0, 0.0, 0.0, 0.0,
     0x1.427054724e1e4p-1003, 0x1.d12edf9e8f93p-45, 0.0, 0x1.e4cb3c6c10deep-821, 0.0,
     0.0, 0x1.c2f5dfd98f896p-316, 0.0, 0x1.fcebe84ee123fp-200, 0x1.15e3325c39ae6p-413,
     0x1.a4c309a9a1082p-290, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8145019f133fp-916,
     0x1.bcecf6a533951p-459, 0.0, 0.0, 0.0, 0.0, 0x1.7e757e3ed945ep-206, 0.0, 0.0,
     0x1.c75f291a4fd74p-679, 0.0, 0.0, 0x1.570455f6dc56dp-18, 0x1.cf6eb4a1fa94p-529,
     0x1.6ab3411438884p-450, 0x1.c903127cb73f2p-107, 0.0, 0x1.d289b22ac47bap-896,
     0x1.5c7c0757b8735p-307, 0.0, 0.0, 0.0, 0x1.caf48eb43ed29p-762, 0.0,
     0x1.365c545455708p-205, 0x1.3898322a272e3p-592, 0x1.10ef190371743p-911, 0.0,
     0x1.dfb707c46a3ap-617, 0x1.cad18ee018edap-796, 0.0, 0x1.acaa6c451a89p-37,
     0x1.7f4c06472eb5dp-110, 0.0, 0.0, 0x1.57fa91044e0f9p-402, 0x1.2852f959ebadfp-887,
     0x1.f1ea389b795f9p-888, 0x1.10750594f1284p-520, 0.0, 0x1.b96ef9a3753f1p-234, 0.0,
     0.0, 0.0, 0x1.70b4973b17814p-784, 0.0, 0x1.aa88d02d373a8p-88, 0.0, 0.0, 0.0, 0.0,
     0x1.f9a5f4f5423c3p-576, 0.0, 0x1.e11b1978f3291p-518, 0x1.3ed775dbef214p-741,
     0x1.f2d149515c62p-970, 0x1.24068292788f9p-414, 0.0, 0.0, 0x1.639b5fde9f92p-383,
     0.0, 0x1.74ccbf5697defp-244, 0x1.fe5f7165a0bafp-931, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc1eabc1d63c5p-941, 0x1.1b8a0482b806fp-641, 0.0, 0x1.27cac8efe2f0bp-989,
     0x1.04e54ee770194p-329, 0x1.8709324d3a81p-543, 0.0, 0x1.f25e76de62503p-965,
     0x1.37177ec222efdp-265, 0.0, 0.0, 0x1.e09b0cdce118ap-115, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5a26f3e9d3b18p-515, 0.0, 0x1.8b851bf6773a8p-31,
     0x1.2b1d137da170ep-439, 0x1.94ac7cff268bbp-390, 0.0, 0.0, 0.0,
     0x1.23198c7030d47p-368, 0x1.69c2baf2bfcadp-710, 0.0, 0.0, 0x1.b218efd66c38fp-827,
     0.0, 0.0, 0.0, 0.0, 0x1.9f9695d88b33dp-706, 0x1.5352058a7d974p-1013,
     0x1.ca6455cce591fp-599, 0.0, 0.0, 0.0, 0x1.6263d5ff95c28p-189, 0.0, 0.0,
     0x1.4333ec80241b1p-440, 0.0, 0x1.d65d2e4d1d8c6p-713, 0x1.e642f920287ffp-398,
     0x1.12117b31f8004p-267, 0.0, 0x1.e3115716c819ep-870, 0x1.0d2f3867d60cap-21,
     0x1.798335bb0d7e1p-471, 0.0, 0.0, 0x1.5e03fcb689933p-372, 0.0, 0.0,
     0x1.7b5140fd3c1cep-376, 0x1.f5d82c23ef4fap-774, 0x1.d4efe14b7db65p-75, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.013b7c79fbbb7p-665, 0x1.8ac4a7669f6a5p-131,
     0x1.a0df82c99c0f6p-672, 0.0, 0.0, 0x1.d6e8540c026ap-4, 0.0,
     0x1.d8c8b4a426d82p-149, 0x1.2bcb3ceda3effp-446, 0x1.bba4f8d49da52p-660,
     0x1.887883c35b689p-317, 0.0, 0x1.0eabf91afe92p-336, 0x1.dd045ab409e6bp-279, 0.0,
     0x1.9d02d4aadb53ap-787, 0x1.ff9eeaa7e63a4p-350, 0.0, 0.0, 0.0,
     0x1.057642ee60853p-647, 0x1.3cc3be912f348p-383, 0.0, 0x1.b1fc77984e105p-434,
     0x1.8c0bbd4c1847bp-498, 0.0, 0.0, 0x1.fa8767c7aa442p-731, 0x1.0528b5efb2c83p-458,
     0x1.ea242995d6dfep-409, 0x1.3e6023e89410fp-278, 0.0, 0x1.69a994bb5931fp-506, 0.0,
     0x1.db149d7014fe1p-498, 0x1.0635b1cb5e72ep-657, 0.0, 0x1.feed80911af4fp-1019,
     0.0, 0x1.7d258b62520acp-157, 0.0, 0.0, 0x1.1d6ffd907b348p-732, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fafe95377e3c4p-323, 0x1.50edcb32af669p-936, 0x1.c6fa440806626p-861,
     0x1.636d01a10fdacp-57, 0.0, 0.0, 0x1.dd2bbfa6cc192p-567, 0x1.73206ea42708dp-579,
     0.0, 0.0, 0x1.323b8d4880fbdp-42, 0x1.d17edb8bee3adp-130, 0x1.715fe25baf965p-714,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c96a69f7353d5p-995, 0.0,
     0x1.bcb992ae587cbp-902, 0x1.6138b3b90ce8bp-624, 0.0, 0x1.09263b5068a0ep-506,
     0x1.d2eecd0a39e65p-44, 0x1.ccdd144b43f37p-283, 0.0, 0x1.e57a506cf5ba1p-658,
     0x1.56133164866d7p-774, 0.0, 0x1.4dce75364ec27p-175, 0.0, 0.0,
     0x1.8b2b163e7219bp-942, 0.0, 0.0, 0.0, 0.0, 0x1.b936ea9bd148dp-361, 0.0,
     0x1.abb53d6673e9cp-152, 0.0, 0x1.33abaf76c206ep-182, 0x1.e2c4f8d31f3e7p-573,
     0x1.2d08dfccee31p-153, 0.0, 0x1.4e3318c189e33p-132, 0.0, 0.0,
     0x1.4f7c961b86654p-871, 0.0, 0.0, 0.0, 0x1.f8d54a6d11db2p-607,
     0x1.4e78aaf632bb4p-146, 0.0, 0x1.bb0dbc7fb1714p-1005, 0x1.7d855d6eae77bp-775,
     0.0, 0.0, 0x1.486f23e3d18f1p-966, 0x1.315b9476525dep-677, 0x1.9c385413d1e32p-136,
     0.0, 0x1.87ff520520ee5p-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a7645af916316p-50, 0x1.428fd9dbd5e54p-647, 0.0, 0x1.810a8555459a7p-68, 0.0,
     0x1.6927806aef50ep-259, 0.0, 0x1.73e798f822625p-577, 0x1.0977b1537bc7fp-728,
     0x1.9a820dca769e4p-162, 0.0, 0x1.7eec83ea14193p-136, 0x1.940c5674aa92fp-607,
     0x1.786bbd645bda4p-16, 0x1.17fd617c1f344p-60, 0x1.dc1a24ba88f46p-320, 0.0,
     0x1.439356c559b15p-925, 0.0, 0x1.99c07c0c53307p-332, 0x1.1ad85640bad04p-607,
     0x1.369ce66acafe9p-780, 0.0, 0.0, 0x1.17ec28937697bp-153, 0x1.4ad6388eb2632p-110,
     0x1.61778682e06acp-541, 0x1.1ec5ed9aa93abp-999, 0.0, 0x1.9af8bb2da7553p-1005,
     0.0, 0.0, 0x1.094cae1f44811p-702, 0x1.ea1bf027839e5p-512, 0x1.a328c48b17d0ap-97,
     0.0, 0x1.b24777de3d7a5p-192, 0.0, 0.0, 0x1.7cf1765683e57p-544,
     0x1.e9c862daa454dp-506, 0.0, 0.0, 0x1.bdaf708349cep-122, 0x1.db336abb3ed5dp-1021,
     0x1.c373400a4907dp-159, 0.0, 0x1.42b746d11d897p-970, 0x1.cb8fb0ea0e679p-779, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e71afe6997025p-307, 0x1.1427cd5859b15p-84,
     0x1.a2c9e0aaa7d0cp-383, 0.0, 0.0, 0x1.763fd1282eeaap-591, 0.0, 0.0, 0.0,
     0x1.9ab5b7aa33ce1p-197, 0x1.6d7df97a6346cp-532, 0x1.5f5cd5fd465dep-65, 0.0, 0.0,
     0x1.cbbee5cff8f2dp-209, 0.0, 0.0, 0x1.cac3a1e42dd1dp-810, 0.0, 0.0,
     0x1.ef8d64d6f3fcfp-368, 0.0, 0x1.e7b86594e7e54p-654, 0.0, 0.0,
     0x1.8321bd84b38e6p-387, 0x1.13e0fc8818205p-761, 0.0, 0x1.657383b5c0fc8p-892,
     0x1.46f59ee372737p-38, 0.0, 0x1.44f1843e70c66p-918, 0.0, 0x1.6c4d817731a6ap-145,
     0.0, 0.0, 0x1.57b4d5ae25309p-698, 0x1.0663cb21fd335p-881, 0x1.c2048f5a8b10fp-312,
     0x1.6175e766bfb6bp-932, 0x1.b0146e249cda8p-814, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b7ea2cc3cf93bp-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.061650c2042b8p-126, 0.0, 0.0,
     0x1p0, 0.0, 0.0, 0.0, 0x1.badf2efb2a0dfp-290, 0x1.6cd699d499e71p-726,
     0x1.a88c1825bdd38p-631, 0x1.c91b2e830d338p-859, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0,
     0x1.b67777b142a22p-724, 0.0, 0.0, 0x1.3fa693e458514p-944, 0x1.afdde4f8b49e1p-506,
     0.0, 0.0, 0x1.15794fb362eb7p-826, 0.0, 0.0, 0.0, 0x1.0f424ad8906ecp-423,
     0x1.756d167d194dbp-51, 0x1.833bc2cf8f396p-51, 0.0, 0.0, 0.0,
     0x1.44c45559448ccp-663, 0.0, 0x1.9c6703eef679cp-324, 0.0, 0x1.5f057c723e6b5p-76,
     0.0, 0.0, 0.0, 0.0, 0x1.22fa7e50b47dcp-64, 0.0, 0x1.18eb2f1cbf658p-819,
     0x1.86d469cf99812p-245, 0.0, 0x1.35a8a324a6e04p-980, 0.0, 0.0,
     0x1.43a653e7ea146p-89, 0.0, 0x1.a69fe673f1b09p-687, 0.0, 0x1.fdfdeccfb09bap-803,
     0.0, 0x1.7f3bc2680da09p-502, 0x1.8721e34941cf4p-300, 0.0, 0x1.b1d738061c511p-178,
     0x1.e014fd3ad00fbp-901, 0.0, 0.0, 0x1.90dedcc76a6dep-396, 0x1.3be8965baf02fp-677,
     0.0, 0x1.99690d87a433dp-45, 0x1.6ff4c1f0ba32fp-1007, 0.0, 0x1.3729f9326423ap-31,
     0x1.a8f204b29ec2cp-296, 0x1.24f86b6878cdbp-609, 0.0, 0x1.08ac1acf878c3p-982,
     0x1.db9546f3ff2eap-719, 0x1.9b52f1c35ab4cp-4, 0x1.c667d1b04df0dp-149, 0.0,
     0x1.b4d9364092ffdp-926, 0x1.5ebf77e6f788bp-546, 0.0, 0x1.a330994aff292p-204, 0.0,
     0x1.0419504739a83p-485, 0.0, 0.0, 0.0, 0x1.413a616489edep-970,
     0x1.5fe072cdbf308p-608, 0.0, 0x1.bb9ae325acf87p-530, 0.0, 0.0, 0.0,
     0x1.f600357beb99fp-852, 0x1.5ed14f4421617p-179, 0x1.564ec98099a77p-328,
     0x1.2395125960b78p-664, 0x1.093e223acc087p-501, 0x1.543a25287e855p-46,
     0x1.1cc3620c8f085p-769, 0x1.57a543ea213cap-6, 0.0, 0x1.2d50c4e740432p-418,
     0x1.9f19bcb70e3d4p-40, 0.0, 0.0, 0.0, 0x1.10dc4bfa5fcb2p-247,
     0x1.22decdcab5a73p-581, 0x1.a402f25b80516p-507, 0x1.4105e5e8e2c52p-443, 0.0,
     0x1.141009ecd0fb4p-255, 0.0, 0x1.8ce8a7889bd5ap-39, 0.0, 0x1.6568a531391ccp-134,
     0x1.06a8703f41fd3p-814, 0x1.1e372019adeccp-223, 0x1.ce4259706d019p-349, 0.0, 0.0,
     0.0, 0x1.08738c3d9631ap-279, 0.0, 0.0, 0.0, 0.0, 0x1.1467f352020c7p-770,
     0x1.fbc28cf65acbdp-732, 0.0, 0.0, 0.0, 0x1.3c043b6e06fc3p-243,
     0x1.105973496b6dep-69, 0x1.1d87ae538b2a1p-408, 0.0, 0x1.c86b4ef3d5b6bp-697, 0.0,
     0x1.86e1345ca35b8p-900, 0.0, 0x1.f2ed6bda0f72ep-669, 0.0, 0.0,
     0x1.4744e63e3c796p-247, 0.0, 0x1.10def20ca0e35p-382, 0.0, 0x1.457e3b3dcd403p-17,
     0.0, 0.0, 0x1.a8cd5b02caa6p-688, 0.0, 0x1.b72bbc4a2bee9p-473,
     0x1.2fb9b9fdc47d5p-951, 0.0, 0x1.098c60e9db04bp-980, 0x1.1798e377313d7p-175, 0.0,
     0x1.895afe5dfb404p-645, 0x1.c103c8a4c508p-455, 0x1.e8da17c2040c2p-539,
     0x1.f0b394b1da7b2p-764, 0x1.f94e35bd1ff1ap-968, 0.0, 0x1.583cb59cc1f05p-458, 0.0,
     0.0, 0x1.cd882cf9a2879p-433, 0.0, 0x1.f7169cf7ad6dp-661, 0.0,
     0x1.4d8885043cb5fp-223, 0.0, 0x1.db3868edb14e6p-140, 0x1.0ae30a9ba8d61p-160, 0.0,
     0x1.3596dde6db85cp-920, 0x1.1dc79d66c7af3p-864, 0.0, 0.0, 0x1.6aa1cadbfaf6fp-548,
     0.0, 0.0, 0.0, 0x1.595d27a5b8696p-19, 0x1.e05c7222c3e37p-858,
     0x1.96a32224b721fp-231, 0x1.297cff7e04beap-115, 0x1.b67ee2ec7bcd6p-868, 0.0,
     0x1.1efbf442c3563p-490, 0x1.32cf319dfcffdp-778, 0x1.236d8112e87acp-433,
     0x1.d0856695f64bap-998, 0x1.a0f72bad41aadp-706, 0x1.d54d530362dddp-269,
     0x1.58ecc9e5f47d1p-93, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3fbe83e6bdcp-15,
     0x1.0dda893e538cdp-51, 0.0, 0.0, 0x1.d61bd8006928cp-428, 0x1.8e29da0630634p-239,
     0.0, 0x1.196b4f41b1ef9p-358, 0x1.479fd06c21779p-1020, 0.0, 0.0, 0.0,
     0x1.6b6b124b1c9bfp-1017, 0x1.83f0b48396465p-505, 0x1.61700e54d2249p-501, 0.0,
     0x1.8b920645c1e46p-735, 0.0, 0.0, 0x1.7249abb23cc0dp-377, 0.0, 0.0, 0.0,
     0x1.3bf595af2736dp-689, 0x1.9c0c0523f2391p-655, 0x1.2964c9496c49bp-77,
     0x1.7a8ed7bf73c9fp-525, 0.0, 0x1.c335cd44ec185p-130, 0x1.af9d16ab23ee9p-752, 0.0,
     0.0, 0x1.19cce702a52a9p-59, 0x1.d0ed9391113cap-119, 0x1.3e2999248af1cp-561, 0.0,
     0x1.893157dc82aeep-42, 0.0, 0x1.89fab79fa7ac6p-132, 0.0, 0x1.1aa8e2faac898p-744,
     0x1.1212ed4d1757ap-631, 0x1.d20661e20aa32p-457, 0x1.0d6e581810306p-919, 0.0,
     0x1.e17fb3a80a43fp-90, 0x1.c07a7c496ab45p-970, 0x1.1748d4838f922p-778,
     0x1.fa2cde9414fd4p-865, 0.0, 0.0, 0x1.24f2ddf515d22p-966, 0x1.5dce8658a1417p-177,
     0x1.95b5fb5501853p-234, 0.0, 0x1.2854565d9104fp-855, 0x1.50122c279051ap-857, 0.0,
     0x1.f250652ea129bp-694, 0x1.d26657e4f5514p-233, 0x1.20d1a22a4ba2ap-872,
     0x1.1720f388f658cp-684, 0.0, 0.0, 0x1.c64011bc02811p-343, 0.0,
     0x1.25fd6ba684f11p-556, 0x1.3ab04872677a9p-71, 0.0, 0x1.41fe92b43f493p-353,
     0x1.439bc34c07f75p-960, 0.0, 0.0, 0x1.83e09c1e8a97ep-307, 0x1.989cb37938174p-488,
     0.0, 0x1.4299cf5412c5ep-932, 0.0, 0.0, 0x1.1c73d074dda5ap-61,
     0x1.de28093bb27d2p-500, 0x1.d54cd74803b43p-444, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce0e7abe73308p-130, 0x1.2af8501776f64p-543, 0x1.0fd86b00e1985p-133,
     0x1.e6806ac9b3d82p-448, 0x1.1a5810d4593d9p-803, 0x1.309e7e31c655ep-907, 0.0, 0.0,
     0x1.9ac41664b2c6ap-130, 0.0, 0.0, 0.0, 0x1.713334bf5801dp-592,
     0x1.e0a90a95e357fp-413, 0x1.33c28371e5e9p-884, 0.0, 0x1.65c32e2ed1ebp-214, 0.0,
     0.0, 0.0, 0.0, 0x1.6dd4b41d9784ap-127, 0x1.aacf7baac8aeap-476,
     0x1.bccf5b48362f8p-889, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58efc2ae6f019p-967,
     0x1.8bb65bb86e34fp-859, 0x1.c27c66fdcf5f7p-735, 0x1.db9ec13b835p-690, 0.0, 0.0,
     0x1.09dcca8341663p-27, 0.0, 0x1.c6faa9d7ea97p-757, 0.0, 0.0, 0.0,
     0x1.983c98f910a59p-532, 0x1.b582b16c3810bp-57, 0x1.03b46d40b3909p-520, 0.0,
     0x1.9cfb822d5356bp-721, 0.0, 0.0, 0.0, 0x1.c0c6159c6f7e6p-812,
     0x1.d0172341cc798p-887, 0.0, 0.0, 0.0, 0x1.a694bfd40fe1p-838, 0.0,
     0x1.2a1ec06a6eb0dp-821, 0x1.120d4bb664495p-310, 0x1.9d83f61a19a1dp-239, 0.0, 0.0,
     0.0, 0.0, 0x1.edbe2a2ba4e7cp-805, 0.0, 0x1.d4ea4fb57f82p-2, 0.0,
     0x1.4c968e6e26aa3p-901, 0.0, 0x1.ff433ed6be554p-779, 0x1.0958b3fbc25bcp-805, 0.0,
     0.0, 0.0, 0.0, 0x1.dcb4acdbf158bp-465, 0x1.a39bc9b8fe956p-351,
     0x1.f71e84a1d6907p-61, 0x1.7f922bb6c1db1p-7, 0.0, 0x1.fccaa4f41b3b3p-934, 0.0,
     0x1.c65e07104f45bp-718, 0x1.136e5d207259ep-621, 0x1.a6b302996d84bp-664, 0.0,
     0x1.022dbfbc6f991p-644, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.534e3be6250e8p-236, 0.0, 0x1.52d755deba428p-926, 0x1.1780155b07093p-713, 0.0,
     0.0, 0.0, 0x1.4977da5db8008p-1018, 0.0, 0x1.f1e68de1b4a1bp-804, 0.0,
     0x1.4e4012a9d3c39p-321, 0.0, 0x1.fc4539ffd3bf8p-605, 0.0, 0.0,
     0x1.710db8d625c52p-799, 0.0, 0x1.fe2630a4ca3edp-676, 0.0, 0x1.2157f718664a4p-264,
     0.0, 0.0, 0x1.f199325e08dbbp-338, 0x1.13a0cdd84505p-92, 0x1.ac456ef11a3e6p-292,
     0.0, 0x1.c5c891dd7ab6ep-432, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.938f97f8a80cap-614, 0.0, 0.0, 0.0, 0x1.3143eb2f8f938p-882,
     0x1.51ad4b519dc1dp-621, 0.0, 0.0, 0.0, 0x1.5b4bc10b98424p-790,
     0x1.120928b74a03fp-1000, 0.0, 0.0, 0x1.e28a9d21a7099p-804,
     0x1.fc815c4b3868bp-744, 0x1.780d31219c1f1p-312, 0.0, 0.0, 0x1.fbf8250fc9114p-960,
     0.0, 0x1.0777d40734818p-984, 0.0, 0.0, 0.0, 0.0, 0x1.c36aed43cce6p-456, 0.0,
     0x1.8e9c4ef8bac8fp-899, 0x1.fb03079dcc352p-105, 0.0, 0.0, 0x1.e0778338d7445p-210,
     0.0, 0x1.f5823fa5f4b3fp-480, 0x1.5898930863ad6p-208, 0.0, 0.0, 0.0,
     0x1.800af6d2f4c44p-807, 0.0, 0x1.fdf7b590baff8p-613, 0.0, 0x1.2c773e67f3f03p-287,
     0x1.7da9f859b8619p-828, 0.0, 0x1.caff178190ea1p-618, 0.0, 0x1.85a43d4bd8053p-245,
     0x1.f6b4771459042p-945, 0x1.9a45b67c37e44p-952, 0x1.0677ff3c85769p-82, 0.0, 0.0,
     0x1.56ed8e0e9ed89p-150, 0x1.10b838d88fdf1p-750, 0.0, 0x1.d83482de624fep-791,
     0x1.b55998bb21fep-885, 0.0, 0x1.09727be794ff8p-636, 0x1.ac2a324ed407p-539, 0.0,
     0x1.a0aa6a47131fep-738
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
            tmp1 = Sleef_finz_exp10d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp10d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10d1_u35purecfma bench acc %la\n", global_bench_acc);
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
