/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncd2_avx2128.c --function Sleef_finz_truncd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.bcb49cc73bf9ap-781, 0.0, 0x1.b276ce316c7abp-669, 0.0, 0x1.cac9f83ccf825p-94,
     0.0, 0.0, 0.0, 0.0, 0x1.b92ccd7046184p-1009, 0.0, 0.0, 0.0,
     0x1.4308160b382f1p-776, 0.0, 0x1.3ac28d7f0d592p-826, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f24d82ccd848ep-527, 0x1.cba25e26d8c52p-618, 0x1.317cbbb014e81p-610,
     0x1.2e0128b1e402dp-877, 0.0, 0.0, 0.0, 0.0, 0x1.da567d171af03p-752,
     0x1.751866680b30ap-521, 0.0, 0x1.9c46f96f1056ep-303, 0.0, 0.0, 0.0, 0.0,
     0x1.adba54503cdc6p-332, 0x1.041eec69506dfp-12, 0.0, 0.0, 0x1.e53ac4f833574p-374,
     0.0, 0x1.ceac52005c272p-208, 0.0, 0x1.e83bce007edd5p-455, 0x1.02d445d7edd41p-808,
     0x1.e20310785ef79p-162, 0x1.50d5affdb3f2bp-896, 0x1.c1d05c02da4d5p-930, 0.0, 0.0,
     0.0, 0x1.c9b959d4a8517p-791, 0x1.f232e2a6288f1p-622, 0.0, 0x1.360d966e51491p-471,
     0.0, 0x1.a0dd369669792p-968, 0.0, 0x1.8ce55852f4c95p-869, 0.0, 0.0, 0.0,
     0x1.7c2dac2a55aafp-359, 0.0, 0.0, 0.0, 0.0, 0x1.dd33a1e7a268ep-917, 0.0, 0.0,
     0.0, 0x1.03fa051baaa03p-762, 0.0, 0x1.82d605e55b354p-727, 0x1.dad566356dd39p-815,
     0.0, 0x1.c4dfc4f75ba84p-562, 0.0, 0x1.7c39ef37ed32cp-450, 0x1.8ed423fda82bbp-938,
     0.0, 0x1.dfc2e3429146p-550, 0x1.fd31cf92c5df3p-563, 0.0, 0x1.a40d7e904c3d5p-676,
     0x1.3af2e35d4cfa7p-782, 0x1.eaa67962e8e41p-977, 0.0, 0x1.6df5c5b266d09p-497,
     0x1.b5082c253c335p-251, 0.0, 0x1.878fe5e7d7d5ep-388, 0.0, 0.0, 0.0,
     0x1.cfcc42543a4edp-732, 0.0, 0x1.981998fbaec7dp-1001, 0.0, 0x1.26ffc653c538p-268,
     0.0, 0.0, 0x1.12257bfbdfb26p-160, 0x1.b0ff824937233p-753, 0.0, 0.0, 0.0,
     0x1.f19ebc74bbcdbp-244, 0x1.c71e76d525bfap-1016, 0.0, 0.0, 0.0,
     0x1.40b7a39d3cf45p-776, 0x1.674e838ba3b6p-26, 0x1.8b8942db969cep-813, 0.0, 0.0,
     0.0, 0.0, 0x1.828f2cb2d8706p-920, 0.0, 0x1.08c01c54ed8cep-578,
     0x1.a6297fa008f9dp-838, 0x1.f12a9c8ab7051p-301, 0x1.aadc286180d71p-247,
     0x1.ecbf3667d2121p-319, 0.0, 0x1.6fefdd71c826dp-610, 0x1.b74f9c3aaa1aap-367, 0.0,
     0.0, 0.0, 0.0, 0x1.a48202da31e7p-410, 0x1.31b20a5fc1b6ep-620, 0.0,
     0x1.70eb563c08658p-541, 0.0, 0.0, 0.0, 0x1.3c01e12d7aa2dp-312, 0.0,
     0x1.a6ce2218038dp-126, 0x1.e5e13d08ae59ep-347, 0.0, 0.0, 0x1.d431f752bff22p-950,
     0x1.b09bd3332b367p-99, 0.0, 0x1.34c7d96e747c2p-518, 0x1.b7111864f5af7p-508,
     0x1.e0a6fe0215c9bp-311, 0x1.614b58ea55b98p-847, 0.0, 0x1.d1311613256e9p-1002,
     0x1.2ae4d5b85fd0dp-828, 0x1.16aa6fad039adp-209, 0.0, 0.0, 0x1.22564a105d19fp-950,
     0.0, 0.0, 0.0, 0x1.9acbd4dde37f5p-846, 0x1.15a52531c4428p-227,
     0x1.11f2c0bfbf5p-357, 0.0, 0x1.7c2080b14835ep-827, 0x1.89cb62ba66d95p-434, 0.0,
     0x1.e923a52cf75c9p-460, 0.0, 0x1.073a567027e96p-443, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8f4b06f43115dp-113, 0.0, 0x1.c5ece5d68be1bp-906, 0x1.35e1918c931f3p-167,
     0x1.33f45b28a8bfbp-560, 0.0, 0.0, 0x1.8e966526fcf16p-940, 0.0, 0.0,
     0x1.ed0120a337641p-880, 0.0, 0.0, 0.0, 0.0, 0x1.5d2754c3d5be1p-843,
     0x1.d2ed9dc7abba6p-536, 0x1.e0a61da8432a2p-337, 0.0, 0.0, 0.0,
     0x1.4242d8c3320e2p-120, 0x1.85dc0d6a34c61p-490, 0.0, 0x1.7a0abfcfb4756p-599, 0.0,
     0x1.a5511e3a19abep-720, 0.0, 0.0, 0x1.3b1cea22a3c33p-1012, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3d6b75ef4a675p-797, 0.0, 0.0, 0x1.d9aa31fb15cbdp-418, 0.0, 0.0,
     0.0, 0.0, 0x1.504b5bdbc1a52p-287, 0x1.902c296678f16p-516, 0.0,
     0x1.328ce2b06262ap-187, 0x1.56e9bb3530ad8p-64, 0.0, 0x1.ad01634226fd8p-900, 0.0,
     0.0, 0x1.7a77848a93d46p-655, 0x1.bc1616cc787bcp-799, 0x1.f4f31288a3e8ep-484,
     0x1.52172f3f4b997p-801, 0.0, 0.0, 0x1.90e33f7da1894p-836, 0x1.b865368f8393ap-855,
     0.0, 0x1.71d2ebde4f8c9p-788, 0x1.83693b26aba9dp-178, 0x1.654a8f087d03ap-718,
     0x1.12707daa4be28p-489, 0.0, 0x1.768d2fbb800eep-861, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8567a7b9f2073p-129, 0.0, 0x1.fd277936eaccp-222, 0.0,
     0x1.ce174ee53b76p-149, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0aff4500178dep-410, 0.0,
     0x1.014628203d1dcp-970, 0x1.e56e949efc4e4p-139, 0.0, 0x1.f37eab959877ap-160,
     0x1.db412a03bf87p-381, 0x1.db5c07af83d6bp-1017, 0.0, 0.0, 0x1.8b20570512b28p-857,
     0.0, 0x1.3a92652ddd1d3p-947, 0.0, 0x1.62a79714594f2p-604, 0.0, 0.0, 0.0,
     0x1.35e1f3cd402d4p-791, 0.0, 0.0, 0.0, 0x1.bfa9910dd2c43p-791, 0.0,
     0x1.4b29fce42df98p-993, 0x1.8ef2180b7c69ap-295, 0.0, 0x1.62619b1312d3ep-789,
     0x1.f4f56260d95c4p-562, 0x1.68a50f27c93d6p-703, 0x1.9a816329d54d2p-885, 0.0, 0.0,
     0x1.38e32e208dda7p-202, 0x1.30bcbc930c9c5p-263, 0.0, 0x1.1e4b245106adap-426,
     0x1.bcde47040ba68p-461, 0x1.fe31e88732558p-336, 0x1.7ca5c84494319p-498,
     0x1.06312141e792p-678, 0x1.042c35bf30652p-819, 0x1.5308a6b48765ap-886,
     0x1.f1c75c2c4e6b1p-797, 0.0, 0.0, 0.0, 0.0, 0x1.d695aac30a6c2p-986, 0.0,
     0x1.50cdd10c492b6p-178, 0x1.b0199eada172cp-248, 0x1.5677decc96e56p-445, 0.0, 0.0,
     0.0, 0.0, 0x1.51baa98ebf67bp-484, 0x1.17546f907a9bcp-611, 0.0, 0.0, 0.0,
     0x1.a14ea9cef4001p-893, 0.0, 0x1.0655b38b5326bp-339, 0x1.dc5d1a347e654p-796, 0.0,
     0x1.39f5057cc23e6p-911, 0x1.0405eb4ebb9f7p-646, 0x1.0ccc8542dc482p-727, 0.0,
     0x1.0b6c4f0c3a85dp-86, 0.0, 0x1.b5489c87ae436p-999, 0.0, 0.0,
     0x1.a918ecfdf4882p-74, 0x1.9ec13f4f67fdcp-103, 0x1.1dd64c5cd02dcp-542, 0.0,
     0x1.3c38d8923c4fep-572, 0.0, 0.0, 0x1.dfe692dc03c6ap-957, 0.0, 0.0,
     0x1.8dcf4c048e4c4p-820, 0x1.5fe57211bd97cp-401, 0x1.43360ca11371ap-711, 0.0, 0.0,
     0x1.fcfadc908612dp-608, 0x1.14bf99dfb707fp-910, 0.0, 0.0, 0.0,
     0x1.7823a74b16489p-54, 0x1.dd18578f312e4p-919, 0x1.444c9965ee179p-387, 0.0, 0.0,
     0x1.317694dc5f38dp-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c780d6a6a084p-604,
     0x1.038f022bd54acp-299, 0x1.24c8106686a3ep-605, 0.0, 0.0, 0x1.7981d069224d2p-319,
     0x1.9d9416a6f57dfp-974, 0x1.f273b377d421fp-765, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.09717835eabbap-108, 0.0, 0.0, 0x1.bc3dd800f3168p-576,
     0x1.7a76e6c7f7cfap-157, 0x1.59bbbb89a852fp-679, 0.0, 0x1.caa509ed86db8p-617,
     0x1.e7f927a1f27b4p-637, 0.0, 0x1.22a54c8ee906dp-382, 0.0, 0x1.a17eafe21a306p-894,
     0.0, 0x1.fc015e64de1bdp-791, 0x1.afc03ec299a1bp-603, 0x1.1bd518b6a39d9p-744, 0.0,
     0.0, 0.0, 0x1.b295f0dfd3a69p-364, 0.0, 0x1.65d86ceb0d33cp-580, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9694d9ceb58a3p-918, 0.0, 0.0, 0.0, 0.0, 0x1.aa0c93cab8e32p-55,
     0.0, 0.0, 0x1.05acce2aaac91p-96, 0x1.0a14e6d8442c1p-848, 0.0, 0.0, 0.0,
     0x1.79339d6fb291p-402, 0x1.45a9b96ddd2ecp-971, 0.0, 0x1.2e0d9a8f0d036p-710,
     0x1.b2ab479443953p-1021, 0.0, 0.0, 0x1.4a3daaeef4b42p-1005,
     0x1.b6a5d263cbfddp-889, 0x1.4d5b3ce2f9b2dp-125, 0x1.36d25fa708f87p-693, 0.0,
     0x1.e8a4d9f276db6p-723, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c720375e2797p-525, 0.0, 0.0,
     0x1.872f02263f746p-868, 0x1.10eaa71c46074p-868, 0x1.262da3297498cp-90,
     0x1.93973a6fa34a1p-33, 0.0, 0.0, 0x1.fe2750ea4ccb4p-59, 0x1.f91ca9c060e4bp-654,
     0x1.78dd085db3aeap-203, 0x1.5f28cc0dfa041p-169, 0x1.3c77397cd4045p-725,
     0x1.8314f34ad9267p-778, 0x1.cc1912dda81b1p-450, 0x1.c7cca40be672p-316,
     0x1.28ee5b7c55abbp-914, 0x1.f4f1d270bfd1cp-540, 0x1.580d93c6466ffp-268, 0.0, 0.0,
     0.0, 0.0, 0x1.1c27cce323c41p-408, 0.0, 0x1.75cc67ede4d12p-46, 0.0,
     0x1.513b33e64882bp-877, 0.0, 0x1.6bcb49b4185f7p-265, 0.0, 0x1.e882b075ce8d9p-508,
     0x1.10052c23b5e67p-587, 0.0, 0.0, 0x1.8e1fef4e6f683p-733, 0x1.54202eaee9598p-311,
     0x1.cd36db5ab5e86p-137, 0.0, 0x1.1c2000d4ceadep-169, 0x1.3d6ff196860c3p-508, 0.0,
     0x1.9a4c6e0bfeb39p-824, 0x1.056de23203a7bp-964, 0.0, 0x1.333dffe91fd4cp-602, 0.0,
     0x1.4c38e1ced4cccp-544, 0.0, 0x1.e80a1769dad16p-960, 0x1.8a1ac0323ec1bp-867,
     0x1.46774247748a2p-433, 0.0, 0x1.8281fbb77e156p-104, 0.0, 0.0, 0.0,
     0x1.f76675ccb3cf3p-460, 0x1.8dbeda6456de3p-675, 0.0, 0x1.b7468c33be963p-819, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1906d8dff5382p-227, 0.0, 0x1.82b6e658e3fcep-212,
     0x1.f09f48b6bbc83p-325, 0x1.d7891d21d74aep-297, 0x1.67548f7f43408p-550, 0.0,
     0x1.cf5e0ee7fa809p-785, 0.0, 0x1.efd733795248ep-398, 0x1.26f2c245377e2p-722,
     0x1.2e3effec63254p-366, 0x1.ea2993d0ed9dap-696, 0x1.80ea5acb2284dp-520, 0.0,
     0x1.6211f1808cd84p-199, 0x1.1e9fa2007b65cp-549, 0x1.70df7a5a53b16p-787,
     0x1.df5ad15302ea8p-543, 0.0, 0.0, 0x1.9921f0622d68bp-332, 0.0,
     0x1.a5c255e271f71p-154, 0x1.c71171771ab91p-509, 0.0, 0x1.2ab4d03d25d05p-190,
     0x1.a815cb0be1851p-91, 0x1.7e4b1d9adfa0ep-117, 0x1.30c5887bc553p-304, 0.0, 0.0,
     0x1.d580bbd6a8becp-755, 0x1.1af931371ac6p-631, 0.0, 0.0, 0.0,
     0x1.3a8d524125a8p-852, 0x1.52584c74d1dd4p-721, 0x1.a97d742be3fbcp-544,
     0x1.f143edc109494p-975, 0.0, 0x1.2fb974e084a2bp-832, 0.0, 0x1.01fbf4bccfe7dp-802,
     0x1.29c713cc6a9e9p-992, 0x1.59742a7c85c08p-175, 0x1.e6484d2b5629dp-489,
     0x1.80fff96e05111p-627, 0.0, 0x1.c97b7e516a2b5p-370, 0.0, 0.0,
     0x1.e9d1bfceebe6dp-330, 0.0, 0.0, 0x1.b99ef17da02fep-98, 0x1.a91e38ef8137fp-842,
     0x1.3701fc94d05dp-950, 0.0, 0x1.e651ccf08a3a9p-759, 0.0, 0x1.41b804b85f08dp-611,
     0x1.f2c0099565ecep-917, 0.0, 0.0, 0.0, 0x1.1c873344dd5c6p-708,
     0x1.0288971c86c15p-980, 0x1.95a5e4d5c168bp-415, 0.0, 0x1.b84670e07ebd1p-423,
     0x1.e968be431d739p-945, 0x1.0262059e8d975p-141, 0x1.7062bb458cab5p-330, 0.0, 0.0,
     0x1.f99f6039dd164p-627, 0x1.f46ae3039c07dp-922, 0x1.b41ce19ad8b9ep-482,
     0x1.a262ff553a497p-67, 0x1.593da27a2a602p-817, 0.0, 0.0, 0.0,
     0x1.402f3898dd44ep-840, 0x1.3d53aa8374ccdp-199, 0x1.5f012249648d5p-13, 0.0,
     0x1.4d61bb2c7627fp-731, 0x1.da445c33dc78dp-889, 0.0, 0.0, 0.0,
     0x1.f9a0acfbe92ccp-128, 0x1.d417689881b9dp-315, 0.0, 0x1.5743b2f078dcep-929, 0.0,
     0.0, 0x1.3857105435691p-606, 0x1.fe3df691933d3p-903, 0.0, 0.0, 0.0,
     0x1.93d38f5dc718dp-541, 0x1.221a0f5fbf93cp-597, 0x1.38707b3989ab2p-866,
     0x1.93a0004c35e0ap-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.effcd635cc48fp-95, 0.0,
     0x1.370f4be56c0bep-778, 0.0, 0.0, 0.0, 0.0, 0x1.16963928ab96dp-23, 0.0, 0.0,
     0x1.2c4ad1b149933p-675, 0.0, 0x1.841241755f9aap-84, 0.0, 0.0, 0.0, 0.0,
     0x1.9f76a2728e2cbp-488, 0.0, 0x1.bf8501a2fcc0dp-396, 0x1.29642d22bc823p-275, 0.0,
     0.0, 0.0, 0x1.0a8309e6611bdp-551, 0x1.8009128876fd1p-213, 0.0,
     0x1.d6ba8729b99bbp-202, 0x1p0, 0.0, 0x1.3324292611798p-726, 0.0,
     0x1.5e305814b6912p-312, 0x1.b7705648f3ce4p-668, 0x1.374c2c17ef23bp-98,
     0x1.a42af5d9218d4p-401, 0x1.b4d475cf15782p-557, 0.0, 0x1.f86756c484f03p-329,
     0x1.20b428e5c0abep-395, 0.0, 0.0, 0x1.8ee5e683e3613p-819, 0.0, 0.0,
     0x1.c506a17447022p-32, 0x1.ff3f6a70a70bdp-161, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.788821bb1fee5p-150, 0x1.1592dc6427389p-131, 0.0, 0x1.9d25e54021fe1p-878,
     0x1.abb73381b6bb9p-776, 0x1.88783a08edbccp-245, 0.0, 0.0, 0x1.9b730d87befc6p-236,
     0.0, 0.0, 0.0, 0x1.cd00f398e4133p-36, 0.0, 0x1.4d38dc7b4f18fp-658,
     0x1.1db88a268c2b1p-757, 0.0, 0.0, 0x1.69dcd7cbeac1fp-208, 0x1.ce9ef9ff2b67p-138,
     0x1.923090457f4bep-556, 0x1.9b5d8a7d8a0fp-188, 0x1.572baf296d865p-76, 0.0, 0.0,
     0x1.a6737b12e3163p-707, 0.0, 0x1.dc8f6f008d72ap-276, 0x1.039d22cec8d78p-885, 0.0,
     0x1.8f051fb2abcd6p-919, 0x1.3ed8961a7a116p-561, 0x1.8364d6356e70bp-831, 0.0,
     0x1.17f13a24137cp-613, 0x1.68362345fcb21p-454, 0x1.4c9eaf1803885p-579,
     0x1.8122464837d17p-52, 0x1.20db9cb713da3p-219, 0x1.efb0c409cc631p-715, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.14a2239bf9e1ep-328, 0x1.08e6d61811b4p-262,
     0x1.31515087a7a75p-733, 0x1.d50d741413942p-461, 0.0, 0x1.8a37ecfd4b615p-429, 0.0,
     0.0, 0x1.271e8f7a97dd2p-945, 0x1.5ebb95962ac29p-976, 0.0, 0x1.165c624507bf8p-174,
     0x1.808156fb5288ap-300, 0.0, 0x1.3b5b3bc8b734bp-381, 0x1.f44355c0a779bp-805, 0.0,
     0x1.c4cd08b6d340bp-157, 0x1.45aaa2dc0b65p-688, 0.0, 0.0, 0.0,
     0x1.abb1fb803a95p-407, 0.0, 0.0, 0x1.66aacbd1263a5p-193, 0x1.dcf0b4a8b7764p-1004,
     0.0, 0x1.abd1d61defdb3p-891, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6448bb420f4cep-499,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.947792d098811p-783, 0.0, 0x1.cdae543c45decp-531,
     0x1.9711ce47c9877p-684, 0x1.d50eb45345171p-446, 0x1.f243e11c2c246p-929,
     0x1.770d950d625f2p-563, 0x1.7dc37b59b7c7ep-944, 0.0, 0.0, 0x1.763b4b2d649afp-348,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51d449f96ae06p-619, 0x1.70758b1dfc78ep-139,
     0.0, 0x1.86673f33663bdp-850, 0.0, 0.0, 0x1.4b716edb6caf9p-821, 0.0, 0.0, 0.0,
     0.0, 0x1.dc599130a8fafp-932, 0x1.bd43967497b74p-262, 0x1.55b30bcf74deep-558, 0.0,
     0x1.9180b5dc84372p-493, 0x1.efd83510a940dp-765, 0.0, 0.0, 0x1.4a8fc9a7769cep-529,
     0x1.5cbad480f01abp-1016, 0.0, 0x1.2d11670be73b7p-9, 0.0, 0.0, 0.0, 0.0,
     0x1.8edba6d91b484p-508, 0x1.deca8775d3506p-175, 0.0, 0x1.36c2c22d50adap-755, 0.0,
     0.0, 0.0, 0x1.95e39d7f90503p-234, 0x1.0757e61a06dbap-572, 0.0,
     0x1.8eac7b2690283p-569, 0x1.e7ba04afe3b26p-410, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74f233c63179p-987, 0x1.7db04a5798301p-340, 0.0, 0.0, 0x1.d125a8229278fp-419,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60ee200a2b5f5p-122, 0x1.609015d38c6f1p-271,
     0x1.bf7613e1bc71p-665, 0.0, 0.0, 0.0, 0.0, 0x1.d22150b684ae2p-407,
     0x1.02656a1578ea2p-152, 0x1.fd40265331dd6p-56, 0.0, 0x1.e3919147f0f56p-726, 0.0,
     0x1.1a96fb92ffc75p-440, 0.0, 0.0, 0.0, 0x1.ad55de26f6128p-410,
     0x1.130b852ffd7cdp-54, 0x1.d6671e86d8f55p-622, 0.0, 0x1.17501098ede2p-74, 0.0,
     0x1.76e89f854799p-967, 0x1.bdda6685b0bc2p-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2040903d225bp-519, 0.0, 0x1.52a1c6d9e201p-952, 0x1.f305ceacc5d18p-196, 0.0,
     0.0, 0x1.3dbe6e15ed521p-348, 0.0, 0x1.6c5a9a46771f9p-4, 0.0, 0.0,
     0x1.4e7e8c8b5a5c9p-209, 0x1.b41e664a67d7fp-427, 0.0, 0.0, 0x1.6d7a763815b94p-11,
     0x1.c4f5d2af5fbb6p-990, 0x1.03b2387277164p-895, 0x1.f24b5377e8627p-816, 0.0, 0.0,
     0x1.d29d69b39cb3fp-180, 0.0, 0.0, 0x1.39221adbbc492p-526, 0.0, 0.0, 0.0,
     0x1.42f25c80d54b7p-742, 0x1.5cb8cbf688d9bp-746, 0.0, 0.0, 0x1.7f59b3c0abf8ep-891,
     0x1.38606273a0237p-252, 0.0, 0.0, 0x1.c008f933a6acp-841, 0x1.d933df46cd6c7p-598,
     0x1.8d955ab685c98p-644, 0.0, 0x1.a8754e295e00dp-636, 0.0, 0.0,
     0x1.f5387333563p-415, 0.0, 0x1.69c6e3e676b65p-996, 0x1.c1a92cfe00872p-204, 0.0,
     0.0, 0.0, 0x1.e37aae2c62fc8p-709, 0.0, 0.0, 0.0, 0x1.7fa0d954b341ap-341, 0.0,
     0x1.104d121cfb83ep-800, 0x1.f6781d397f9dp-127, 0x1.2d12fec47166dp-383,
     0x1.dc64308932073p-1006, 0.0, 0x1.a97bdc9d2424ep-178, 0x1.2b12912d5625ap-472,
     0.0, 0x1.e15fbfa8a47dbp-361, 0x1.b9fa3276bdb69p-121, 0.0, 0.0, 0.0,
     0x1.0032aeec40e17p-586, 0x1.8a42c56317d18p-998, 0x1.7486bf0e777c2p-329, 0.0, 0.0,
     0.0, 0.0, 0x1.2c8c233b93026p-804, 0.0, 0x1.205ddfb6a4e0ep-701,
     0x1.eeca925a125d7p-116, 0.0, 0.0, 0x1.21bc8db15b372p-542, 0.0,
     0x1.58814057593c6p-20, 0x1.8ab780d5ff62cp-345, 0x1.a0429e93efd59p-393, 0.0, 0.0,
     0.0, 0x1.d6577e8520dabp-859, 0.0, 0.0, 0.0, 0.0, 0x1.6f42c0a1db3dep-966, 0.0,
     0x1.75a288bf19244p-68, 0.0, 0x1.5073051056307p-158, 0x1.641129a4061f1p-134,
     0x1.221606613fb34p-942, 0.0, 0x1.e2af83aae5ef9p-798, 0.0, 0.0, 0.0,
     0x1.b646521814004p-720, 0.0, 0.0, 0x1.d23cf2aee09fp-668, 0x1.0298a88057ap-352,
     0x1.e9eb5d439484ep-504, 0.0, 0x1.831403f5f61f1p-445, 0x1.cd97e8d253fbp-932,
     0x1.1197c344df77cp-917, 0x1.f6eca2a21fc29p-119, 0x1.bcafe788cbc47p-425, 0.0, 0.0,
     0x1.61b2158463f36p-631, 0.0, 0x1.70ff90e70525p-182, 0x1.f87dc21589d08p-606, 0.0,
     0x1.b553e5dc68fcdp-756, 0x1.aceb1e927d0b3p-345, 0x1.f9335764e51a9p-683,
     0x1.fe5cace22617ap-814, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_truncd2_avx2128(tmp0);
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
    printf("Sleef_finz_truncd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_truncd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
