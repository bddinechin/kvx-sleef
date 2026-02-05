/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d2_u35avx2128.c --function Sleef_log2d2_u35avx2128 \
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
     0.0, 0x1.3d946f13e0ff5p-427, 0.0, 0.0, 0x1.3f36ae653a7fdp-890,
     0x1.186c2abe1a3b6p-379, 0.0, 0x1.2046eebc0107fp-63, 0x1.890a7da54fcap-647, 0.0,
     0.0, 0x1.4e902136c8001p-661, 0x1.4792cab476beep-741, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f47b5085d768cp-595, 0x1.98a5866d4a5d5p-710, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2d83511eb5e89p-838, 0x1.4365a2d3408d8p-696, 0x1.b15757a35e881p-471, 0.0, 0.0,
     0x1.275de9d9554e3p-118, 0x1.9aceadbdb8fe9p-836, 0x1.ca739725c7664p-135, 0.0, 0.0,
     0.0, 0x1.67f41badf57f7p-788, 0x1.292dbf2f9e0d8p-359, 0x1.e9d0270e083d7p-305,
     0x1.5730c7057f1a8p-686, 0.0, 0x1.c8f30d7854f7ap-1011, 0.0, 0.0, 0.0, 0.0,
     0x1.f6360b6a2be4cp-30, 0x1.4d48c9f0d70b3p-922, 0x1.e488c4e049337p-875,
     0x1.c49face1e8d1fp-304, 0.0, 0.0, 0x1.2dcc24d160e09p-875, 0x1.a0ce4b0bcebfbp-607,
     0x1.9997574571b2bp-686, 0.0, 0.0, 0.0, 0x1.ba701c0ca98d1p-90, 0.0,
     0x1.cb710d4870eb2p-200, 0.0, 0.0, 0x1.689e3f964e24bp-863, 0x1.275ae0aa4ba91p-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab49cdb0e0879p-630, 0x1.fd76874f1944p-21,
     0x1.bd6b72e1f3465p-291, 0.0, 0x1.9a03312a7177ep-225, 0x1.6389c664825f4p-107,
     0x1.33f98d996796dp-471, 0x1.116d902b34a8ap-562, 0x1.e022a0480d471p-797,
     0x1.bb4fc881b269p-959, 0x1.5eb012b5c2643p-928, 0x1.6826fc5f99ef7p-799,
     0x1.550de98fdbd9p-81, 0.0, 0x1.e028a409c808fp-265, 0.0, 0.0, 0.0,
     0x1.5640af0b7874ap-217, 0x1.2cbcf749c7d04p-123, 0x1.90a236d6795a3p-464, 0.0,
     0x1.ec4b4b0405143p-400, 0.0, 0x1.efd10e32324aap-670, 0.0, 0.0,
     0x1.add5f50a9d27cp-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cfe0046056b5fp-225, 0.0, 0x1.9249f6574b85ep-321, 0.0, 0.0, 0.0, 0.0,
     0x1.bb32b6f3d0e5dp-635, 0x1.9a01b3b25e208p-980, 0x1.6c10a17d57fabp-53, 0.0,
     0x1.8b8765798b5ecp-1010, 0x1.ded59710f0c2ep-791, 0.0, 0x1.6349f1c998474p-410,
     0x1.34a1c539327a2p-943, 0x1.e5c93b5fa4396p-353, 0x1.85c02d57d4481p-336,
     0x1.9f8f3037a588dp-921, 0.0, 0.0, 0.0, 0x1.9e1914a806bb6p-755,
     0x1.f96fe2f6fe5ecp-543, 0.0, 0.0, 0x1.b053e9de901aep-988, 0.0, 0.0, 0.0,
     0x1.37d446beb6b05p-170, 0x1.12f4424b2dc79p-776, 0x1.e62fad45ec3cdp-631,
     0x1.1a18a08e7cc5bp-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.27f03bcacbf33p-288, 0.0,
     0.0, 0x1.5b358a5594b9ap-831, 0x1.e01d1e847e655p-806, 0x1.71dc4718a17f8p-557, 0.0,
     0.0, 0x1.39efe5810ca27p-607, 0.0, 0.0, 0x1.dcee4956e31a1p-976,
     0x1.346e52c817087p-705, 0x1.95d09d09b7f2bp-596, 0.0, 0x1.17c5f13a378p-561,
     0x1.39eeedca686dap-164, 0.0, 0x1.a7af314e8c215p-724, 0.0, 0.0,
     0x1.b07fdde59b40bp-705, 0.0, 0.0, 0.0, 0x1.ad7943d21ed63p-103,
     0x1.f38d0207b6cd9p-147, 0x1.e0aba9aca885p-920, 0x1.10cd73f0ebc8dp-49,
     0x1.acff54364145cp-82, 0.0, 0.0, 0x1.93b82749d09b1p-755, 0.0,
     0x1.8854e25f18fd6p-993, 0.0, 0.0, 0x1.52c7723253d32p-284, 0.0, 0.0, 0.0,
     0x1.8b32a1faf5d53p-678, 0.0, 0.0, 0x1.bf8e391da1795p-872, 0x1.3d358958c0c65p-988,
     0x1.1ab052ad209ap-166, 0.0, 0x1.d5b6e06b2f7bep-307, 0.0, 0x1.0480230404728p-947,
     0.0, 0x1.e1586b1845ebbp-468, 0x1.dd05da72b6082p-300, 0x1.a2733f37cac2ep-785, 0.0,
     0.0, 0x1.f73045112a1f3p-784, 0x1.f5a0f6f4334d5p-855, 0x1.3d814ffed14e2p-605,
     0x1.42ee9565a1522p-511, 0.0, 0x1.a3445c5893857p-108, 0.0, 0.0, 0.0, 0.0,
     0x1.42a6cf2a19de2p-196, 0.0, 0.0, 0x1.a9c0ef6467e7dp-78, 0.0, 0.0, 0.0,
     0x1.bd5a83621e46cp-345, 0x1.7a588ef6c49a6p-960, 0x1.6c72d3eab65bp-1011,
     0x1.8008f5a40fdaap-979, 0.0, 0x1.3e99abf406fe6p-413, 0x1.4e868f60a4ae6p-327, 0.0,
     0.0, 0x1.34a13215c810ep-752, 0x1.9ce82e8e3b27p-413, 0.0, 0x1.a84b2a919c785p-2,
     0x1.b5fd765e6536ep-264, 0.0, 0x1.83e5932d9150cp-607, 0.0, 0x1.a72790023d4eep-336,
     0.0, 0.0, 0x1.9f98550e6cdf7p-568, 0x1.1ec03bf82f8dep-168, 0x1.5eb28001c25cfp-178,
     0.0, 0.0, 0.0, 0.0, 0x1.96a55b28f0c2ep-794, 0x1.7ba2f586639aep-354,
     0x1.41463fdd55f15p-888, 0.0, 0x1.448a7cf343b9p-327, 0.0, 0x1.83b8879321815p-467,
     0x1.c2d84bc95a24bp-840, 0x1.6fc80acdd4be6p-948, 0x1.de95b52610b3cp-650, 0.0,
     0x1.4aa237a0eb343p-764, 0.0, 0x1.b456f6725a84cp-408, 0.0, 0.0,
     0x1.6fec3ddf845f3p-328, 0.0, 0x1.5181fccca7f4p-486, 0x1.656b9f76b5341p-117, 0.0,
     0.0, 0x1.3969ced5c70d4p-175, 0.0, 0.0, 0.0, 0x1.7abd3734a85b5p-364,
     0x1.11f1ff8236938p-475, 0x1.43f35d7db8ecdp-892, 0x1.bb7ba721df0dap-265, 0.0, 0.0,
     0.0, 0x1.494e6533126bbp-104, 0x1.38f493fd70c04p-343, 0x1.75dd6cbebe08cp-343,
     0x1.c1755244cb0ecp-943, 0x1.a589288201611p-663, 0.0, 0x1.92233dc002b6cp-542,
     0x1.2044990c28757p-572, 0.0, 0.0, 0.0, 0x1.0d5034ffe3ef6p-591, 0.0, 0.0, 0.0,
     0x1.bb7d5deb149ddp-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d4f5e9e19d65p-694,
     0x1.66e55abd0a23fp-469, 0.0, 0.0, 0.0, 0x1.8befb28fe2287p-36, 0.0,
     0x1.6328e6705b1bp-291, 0x1.e56a0fa1c5f86p-176, 0x1.772e6ec9ccf0ep-943, 0.0,
     0x1.fa5ae50cfc014p-33, 0x1.5e958b6b3c991p-427, 0.0, 0x1.b1d913a3410acp-840,
     0x1.ba643e6677f5dp-540, 0x1.b9091ffe3cfebp-31, 0x1.fa2c34c6ce486p-396, 0.0, 0.0,
     0x1.ba3c5da487c7bp-227, 0.0, 0x1.42b57e7ba64cfp-297, 0x1.3c29a517d800bp-728,
     0x1.4493165eea359p-121, 0.0, 0x1.cbf02b959ec7bp-110, 0x1.371863acf4e27p-199, 0.0,
     0x1.6d0cf1d7df349p-363, 0x1.78d036ef7bc96p-763, 0x1.3d07a9dc352a9p-280, 0.0, 0.0,
     0x1.40df9504d5e2fp-629, 0.0, 0.0, 0x1.1d35c760e4396p-162, 0.0, 0.0, 0.0,
     0x1.f9b5a773b17e6p-361, 0.0, 0x1.9466600eac35p-674, 0x1.a4283dbd2a61ep-543, 0.0,
     0x1.9afe1c7a78725p-239, 0x1.bed028164388cp-1014, 0.0, 0x1.c1fdeac6fff49p-254,
     0.0, 0x1.45deaf001a21ep-818, 0x1.fd150b6476642p-786, 0x1.b7cc8e26f95ecp-761,
     0x1.78f64cda5f084p-683, 0.0, 0.0, 0.0, 0x1.65bdd2cd4571ap-168, 0.0, 0.0, 0.0,
     0.0, 0x1.c608a09950c68p-183, 0.0, 0.0, 0.0, 0x1.fba7950a97479p-718, 0.0,
     0x1.a63253b6a0854p-1010, 0x1.8cf1a79258c56p-463, 0.0, 0.0, 0.0,
     0x1.9603573db0c22p-995, 0x1.777951dc32b21p-474, 0x1.6b9f904195e5fp-40,
     0x1.0cc43591e9ab5p-654, 0.0, 0x1.2e85f2bcac06dp-745, 0x1.235b77c7922c1p-326,
     0x1.00b2ded40c6afp-666, 0x1.2057fa85a887p-586, 0.0, 0.0, 0.0,
     0x1.a23208386bb62p-160, 0x1.195212da79e0cp-432, 0x1.66f769e733d9ap-849, 0.0, 0.0,
     0.0, 0x1.7c7dcac1365afp-764, 0x1.1e3e098d3c4p-324, 0.0, 0.0, 0.0,
     0x1.ae768b2a3bedfp-41, 0x1.775aa250a9581p-1014, 0x1.d785aefed3075p-932, 0.0, 0.0,
     0x1.a755b5d72c465p-867, 0.0, 0x1.4cb20580d4d26p-625, 0.0, 0.0, 0.0,
     0x1.20d777afd0414p-683, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e7b32b7d3c7dp-907,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.841dffd6a287fp-181, 0.0, 0x1.40bf39a49bc62p-236,
     0.0, 0.0, 0.0, 0.0, 0x1.caef09b56302ep-651, 0x1.0ac046565507cp-865,
     0x1.b719635015244p-198, 0.0, 0.0, 0x1.2754b335b083dp-606, 0.0,
     0x1.e3643741087cp-4, 0x1.f7a50d2a72ca7p-97, 0.0, 0x1.7957cc204bc4bp-416,
     0x1.3746480d06ef4p-687, 0x1.29762132dfa67p-740, 0.0, 0x1.af452bf5f77c3p-1014,
     0.0, 0x1.16636c38f603ep-44, 0.0, 0.0, 0.0, 0.0, 0x1.6f735d8de3b9p-627, 0.0, 0.0,
     0.0, 0x1.7c05c64154485p-765, 0x1.3898c10d4338ap-81, 0.0, 0x1.b3d3b83449289p-189,
     0.0, 0.0, 0.0, 0x1.c7d5461083bd9p-573, 0.0, 0.0, 0.0, 0x1.f6c4ee21e289bp-342,
     0.0, 0x1.2e2edf0be886ep-208, 0x1.2b6bccf5b39adp-156, 0x1.eb74b3b7312fp-1010,
     0x1.6025f85f4f537p-274, 0x1.5eff0437d9b6fp-137, 0x1.3756ce81dcb14p-231, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b44e2290726cp-995, 0x1.f9846ed2a2fd5p-595,
     0x1.158296a044c9ep-381, 0.0, 0x1.cf6862676adc6p-962, 0x1.71a7aa20b6185p-260,
     0x1.8bd0d358f9e54p-715, 0x1.2ba5077e0e092p-740, 0.0, 0.0, 0x1.017a620f08a42p-872,
     0x1.fb0be8bf2a7a2p-451, 0.0, 0.0, 0x1.e4e5bbb4ef395p-245, 0x1.04173ee7108cfp-138,
     0.0, 0.0, 0.0, 0x1.4cd698eedc30fp-450, 0x1.522da4de5b28bp-847,
     0x1.ec42193ad5b02p-986, 0x1.13861295c1e7bp-941, 0x1.c610dd152aabcp-367,
     0x1.287a37db65163p-425, 0.0, 0.0, 0x1.7283b0481443p-677, 0x1.2619a682bcb84p-577,
     0x1.ca32c685ec3cbp-740, 0.0, 0x1.3e6e6992e3d6dp-972, 0x1.eccbbd1964c36p-252, 0.0,
     0x1.794922a0f2ea3p-71, 0.0, 0x1.fcc16ee0753d4p-700, 0x1.e2d9a7238d508p-185, 0.0,
     0.0, 0x1.2166f9cb71764p-130, 0.0, 0.0, 0x1.93f4187d638cep-713,
     0x1.53765f5d8a78dp-426, 0x1.f692984930b8bp-843, 0x1.68266862cabdbp-1014,
     0x1.0fbb970497b6p-592, 0.0, 0x1.9d8becd10beaap-644, 0.0, 0.0,
     0x1.28f7bdbca5477p-27, 0.0, 0x1.9a55275f55249p-365, 0.0, 0x1.0ebfaa13e2e12p-756,
     0.0, 0.0, 0x1.7e169dcc13fcp-466, 0.0, 0x1.ed7508f29b57bp-222, 0.0, 0.0, 0.0,
     0x1.6012aa1eb29f7p-92, 0x1.14bb0da1c3c11p-912, 0.0, 0x1.744cf763495ebp-385,
     0x1.3ba48b2fdfd44p-53, 0.0, 0x1.fdec737ed9184p-567, 0x1.811b1e712c334p-744,
     0x1.f4fdd1d813b63p-501, 0x1.efebb7c79566p-167, 0x1.514a9b240bf1bp-665, 0.0,
     0x1.8eb3c3b94fd85p-363, 0x1.c5e2f1dcfe4b7p-466, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8e1e366352508p-457, 0.0, 0x1.eda8236a2597p-420, 0x1.1d809202b2527p-787,
     0x1.8108622eee826p-185, 0x1.8ea4f1f24a427p-302, 0.0, 0x1.90f53c77a9a62p-541,
     0x1.bf25224fdbd4ap-44, 0.0, 0.0, 0x1.083ec23a1202ap-930, 0x1.30c75bdbdc2ddp-746,
     0.0, 0x1.18577b556a542p-21, 0x1.14f3fc77de818p-717, 0x1.f8ed6dd0827abp-616,
     0x1.0e29612abc815p-725, 0x1.d40165496978dp-801, 0.0, 0.0, 0.0,
     0x1.eb9a4169ca204p-747, 0.0, 0.0, 0.0, 0.0, 0x1.8a892f59fd6c1p-772,
     0x1.011a9c9b3338bp-320, 0.0, 0x1.72a3900f6f37fp-353, 0x1.5ad764217aa9dp-545,
     0x1.c98c6b15ae98fp-658, 0.0, 0x1.5714201a72d5ep-791, 0.0, 0.0,
     0x1.6c8cd7f29201fp-303, 0x1.33185c65d44e6p-75, 0.0, 0x1.1226fb7974441p-954,
     0x1.3fbeb19a6bcd7p-614, 0x1.98c9beb787114p-337, 0x1.1d9ea66baba9bp-72, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ec45cff73530cp-586, 0.0, 0x1.e4b8c9c4459f2p-516, 0.0,
     0.0, 0.0, 0.0, 0x1.ec8ab548085b7p-859, 0x1.8338d630d25c5p-557,
     0x1.136bfb9c57d0dp-491, 0.0, 0x1.89172e222b83fp-281, 0x1.c07b3580f3528p-474,
     0x1.e2b7e4d08de8fp-673, 0.0, 0x1.ca22da86fbeecp-441, 0x1.0124b9ca9a89p-508, 0.0,
     0.0, 0x1.e239edbae9485p-877, 0.0, 0x1.dec89c3c5f582p-85, 0x1.ecebcf2382af5p-809,
     0x1.57c6bd505756p-125, 0x1.19868d8afe872p-384, 0x1.d8ccad3a58155p-36, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdb41a620c7d7p-984, 0x1.153aab531e587p-337,
     0x1.3594274b61c0bp-794, 0x1.0395e3d97d2dbp-101, 0.0, 0.0, 0.0, 0.0,
     0x1.1ea130ea42a3ep-530, 0.0, 0.0, 0.0, 0x1.0d5979e857c6ap-286,
     0x1.36eccaaae8d19p-639, 0.0, 0x1.8916e9103f439p-875, 0x1.1160ee7e7cfd6p-666, 0.0,
     0x1.692a9e1ec7b14p-233, 0.0, 0x1.fcf021fe071bfp-974, 0x1.27c56509cb495p-952,
     0x1.bcd7ae16c6172p-917, 0x1.80fc518849e46p-833, 0x1.395c74a023e3ep-962,
     0x1.8702680c42ad2p-702, 0.0, 0x1.522997849dd3cp-366, 0.0, 0x1.043cf8c695e0fp-275,
     0.0, 0x1.22892d1535258p-921, 0.0, 0.0, 0x1.9214dcfc2ce6ap-501,
     0x1.d582e4f0708d8p-500, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f63698ae9d36p-827,
     0x1.cef5e53441a2dp-241, 0x1.b5938a1d3f26fp-361, 0x1.2ffcc4305e25cp-587,
     0x1.472de5dcfde4ep-109, 0.0, 0.0, 0x1.06d59cf80a8c1p-35, 0.0,
     0x1.3af474cbe865fp-447, 0.0, 0x1.ea7e81829a5e1p-202, 0.0, 0x1.f3f3e4d1a457cp-812,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4e3d7af60e88p-93, 0.0, 0x1.56b1e4f2ab949p-310, 0.0,
     0x1.9360e48eaaa28p-1009, 0.0, 0.0, 0x1.8cdf811fdb9bbp-652,
     0x1.59df8548e52f3p-645, 0x1.5c543477f834bp-969, 0x1.b8b90f5203cedp-785,
     0x1.402c4f8b9d0d1p-550, 0x1.b9f0a8773d5f3p-376, 0x1.fcafb861da948p-212, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c5228dc57aa6ap-331, 0x1.ed136f4829dcap-1008,
     0x1.47ff50552b387p-153, 0x1.0a0b075e9c6b1p-626, 0x1.461974a6b5f3cp-986,
     0x1.dc6057dd13411p-303, 0.0, 0x1.1bcd62720adacp-351, 0x1.40d554bc9421p-398,
     0x1.9a230f97d16cfp-7, 0.0, 0.0, 0x1.49e917e69f41dp-451, 0x1.1302edc81ca0dp-1012,
     0.0, 0x1.46cdc74f8d692p-25, 0x1.5bd9a4fc7932ap-632, 0.0, 0x1.598d41400ac3bp-477,
     0x1.a497a394d6d18p-581, 0.0, 0x1.c5d4e0aaf93a5p-266, 0x1.b3800b8c6eba8p-866,
     0x1.a03eddd3b14ebp-905, 0x1.b05739bf5c7bcp-690, 0x1.0e270cdcc2b02p-369,
     0x1.780ac2ff4ec3dp-549, 0.0, 0x1.34ab8d0c7e7f2p-546, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.72711c68bf746p-588, 0x1.3691cd678fdf3p-931, 0.0,
     0x1.edbf130ffaa83p-919, 0x1.7277c99723aa8p-569, 0.0, 0x1.f6aecd8b01953p-314,
     0x1.1e141b556e909p-105, 0.0, 0x1.1f39d9b17cc04p-577, 0x1.31f15b9576dadp-957,
     0x1.d1ca56bbf851dp-554, 0.0, 0.0, 0.0, 0x1.f454872718301p-1009, 0.0,
     0x1.62ec0fdbbe8bp-14, 0x1.85997b46eb65bp-446, 0x1.a7098b50afd91p-21,
     0x1.1b12173ae3ef4p-53, 0x1.225e6967fcf26p-243, 0x1.3bd1c4be18eb6p-11,
     0x1.b8ed84d16b5c3p-387, 0x1.666756b791e8cp-211, 0x1.d0eb01dfe6161p-589, 0.0,
     0x1.f0964c140cf62p-495, 0.0, 0x1.b9422a928074p-1006, 0.0, 0x1.df06a7f7645c1p-223,
     0.0, 0.0, 0x1.e8dd09e7fac42p-694, 0x1.feae2f8d8462fp-302, 0x1.432545d3a9efap-985,
     0x1.9727d84b1be64p-392, 0x1.12be5f076ffedp-786, 0.0, 0x1.3bd0934d2c078p-191, 0.0,
     0x1.732f891fcb72fp-231, 0x1.9d7269de91f36p-503, 0x1.0c8de6c3c6a1cp-760,
     0x1.5176571a29ed8p-137, 0.0, 0x1.d6d995d8f44afp-972, 0x1.52146bb92e316p-331,
     0x1.272b821a50c4cp-679, 0x1.29c47da3d1d05p-489, 0x1.8b7b4253da2aep-638, 0.0, 0.0,
     0x1.3b055e9716993p-264, 0x1.6b3f9d7c5defap-319, 0.0, 0x1.b2c7cddfc4e07p-973,
     0x1.b9b53b4ae5019p-180, 0x1.96077203886e8p-581, 0.0, 0.0, 0x1.794bec7267e67p-403,
     0x1.75a4793cb2e46p-954, 0x1.0333f51af348ap-877, 0x1.029b30d139942p-662, 0.0,
     0x1.d2282ad9de2aap-244, 0x1.858b1b4b1dab5p-810, 0x1.3f5e5a0c9fa47p-231,
     0x1.6c23bbd8a7c3cp-283, 0.0, 0.0, 0x1.f66571dbf986ep-358, 0x1.ddbbcb9b3c209p-86,
     0x1.fdfe0c58c7e38p-1008, 0x1.51a80ac98ce02p-975, 0x1.dd0ab472c93cfp-460, 0.0,
     0.0, 0x1.91f1bb4140e25p-460, 0x1.b61054109726p-198, 0.0, 0.0, 0.0,
     0x1.0055e960cfd65p-234, 0x1.2d0968b5a804cp-828, 0x1.86d435c3afdc1p-117, 0.0,
     0x1.8b3e57df913bbp-242, 0x1.e281c459dae91p-553, 0x1.0a5d3e3e6974ep-612, 0.0,
     0x1.fcb9921b3e692p-740, 0x1.76a8c9560d717p-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d251e90a5b98p-807, 0x1.9e5868ec8e433p-337,
     0x1.14a724d6386c1p-226, 0x1.5311eba88b37dp-669, 0.0, 0x1.8d37e2ba96a92p-416, 0.0,
     0x1.3c1975684eff4p-191, 0.0, 0.0, 0.0, 0.0, 0x1.fa233a47dd4bdp-438,
     0x1.694936bc470fap-421, 0.0, 0x1.3542d7a3b2934p-660, 0.0, 0.0, 0.0,
     0x1.459389cd7be71p-225, 0.0, 0.0, 0x1.58c1dd33e2dfp-593, 0.0,
     0x1.fb46d105da841p-417, 0x1.b7a2e3088f51p-319, 0.0, 0.0, 0x1.9e6faf07bf072p-494,
     0.0, 0.0, 0x1.d73873cabcafep-264, 0x1.adffb7efac814p-263, 0.0, 0.0, 0.0,
     0x1.6f6a69ebb75e2p-792, 0.0, 0x1.80c98b54cb3afp-485, 0.0, 0x1.7a2602efb660fp-549,
     0x1.e489da101d65bp-906, 0.0, 0x1.69f0b0d087199p-678, 0.0, 0x1.9069dc85b0f76p-71,
     0.0, 0x1.3978e69c3eb69p-901, 0x1.13a154dc4135dp-69, 0x1.23093df0653d8p-573,
     0x1.e309844629d1ap-708, 0x1.d1e9bf3d684d7p-95, 0x1.88812b963bec1p-1001, 0.0,
     0x1.c044b55d95915p-440, 0x1.0ea21c2e1bca6p-472, 0.0, 0x1.a716aa9d72cc6p-587,
     0x1.deb09c23e03e9p-800, 0x1.bd4435f48c28p-380, 0x1.4d1734d0062d8p-627,
     0x1.76a3bce5dcc1ep-741, 0.0, 0.0, 0.0, 0.0, 0x1.6d177585dd75cp-986,
     0x1.7c8919e36f6bbp-761, 0x1.41dcc491f0dacp-691, 0x1.a9612e74f3015p-585, 0.0, 0.0,
     0x1.02417e008b511p-769, 0x1.11a1f5d9d2164p-265, 0x1.0fc1914cf56a3p-486,
     0x1.fe36913482202p-229, 0x1.73ede231f4502p-561, 0.0, 0x1.1778de43dcecep-711, 0.0,
     0.0, 0.0, 0x1.59ac90f24b7e6p-1014, 0x1.4564e1fa53e04p-234, 0.0,
     0x1.f97561cead09fp-455, 0x1.be997b1f0fd1bp-833, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02c540c8845c4p-887, 0x1.5ae416eaf5e7bp-495, 0x1.cad214d9434cfp-767, 0.0, 0.0,
     0x1.a80f4f949a519p-294, 0x1.cc79fd461a931p-304, 0x1.d312bed1588eap-32,
     0x1.2d7f298274053p-289, 0x1.dd4c2b4db6c09p-900, 0x1.4b14091f71efep-116,
     0x1.a4559a84480e9p-325, 0.0, 0x1.16ded662f45e6p-327, 0x1.6d4fc471d6b12p-887,
     0x1.53657e760a896p-3, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77c5e00bd36cep-649,
     0x1.ce1c96b8feadap-229, 0.0, 0x1.df5a9368c8d9ap-972, 0x1.76d90b8b5ddbp-876,
     0x1.48c96318ad8a9p-555, 0x1.5b2ad2df90604p-485, 0x1.6d9bd58142939p-762,
     0x1.612c61e6eee2fp-418, 0x1.3492631637ed8p-121, 0x1.f507eb48b00a8p-199,
     0x1.e65fa9069aee5p-1005, 0x1.e076df1a1e9d2p-931, 0x1.d2409a7c6160dp-935,
     0x1.c886dc877948p-871, 0x1.d52238e65c51fp-940, 0x1.f5f42c5e762e8p-210,
     0x1.ef823a315c689p-500, 0.0
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
            tmp1 = Sleef_log2d2_u35avx2128(tmp0);
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
    printf("Sleef_log2d2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log2d2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
