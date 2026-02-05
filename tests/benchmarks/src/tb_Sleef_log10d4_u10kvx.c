/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10d4_u10kvx.c --function Sleef_log10d4_u10kvx \
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
     0.0, 0x1.57e39f587895fp-216, 0.0, 0.0, 0.0, 0x1.29047326019b9p-495, 0.0, 0.0,
     0.0, 0.0, 0x1.9214b08438205p-731, 0x1.7e4134f88286cp-372, 0.0,
     0x1.e702da1ac5e1ap-498, 0.0, 0x1.6c1b81fd2035ep-257, 0.0, 0x1.0f30a29d88bd1p-743,
     0x1.53a1476cb70c2p-173, 0.0, 0x1.f6c0a65d23dfp-13, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.72f29737931f3p-455, 0.0, 0x1.6582f5455763p-328, 0.0, 0.0,
     0x1.cc63cb69d0904p-656, 0.0, 0x1.690ff5ac68f56p-455, 0x1.80c7d54484892p-687,
     0x1.93777a3f799dep-218, 0x1.04ad6a2623956p-361, 0.0, 0.0, 0x1.87b07e08496afp-226,
     0.0, 0x1.95637b974cb69p-519, 0.0, 0.0, 0x1.1723c66341d58p-21, 0.0, 0.0, 0.0, 0.0,
     0x1.a56ad267eec53p-353, 0x1.96b5cc9c1e0c9p-858, 0.0, 0x1.61413a78408b9p-507,
     0x1.2c0f8e6fa2c7dp-761, 0.0, 0.0, 0x1.f014aa3a53301p-1001, 0x1.f0f202603781p-387,
     0.0, 0x1.7fa247dfccdd4p-137, 0.0, 0x1.6cacca2bd64aep-2, 0.0,
     0x1.84d584a788801p-674, 0x1.b979f29b3f015p-115, 0.0, 0x1.dd1b6fc041c7ep-63, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cefa8baab19bfp-351, 0.0, 0x1.966b8be46a1afp-413, 0.0,
     0x1.94ed279540c5fp-339, 0x1.690011b0004e8p-181, 0x1.ce66c3c80b01fp-174, 0.0, 0.0,
     0.0, 0x1.e86346b4d1c3ep-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.912ffa10459bfp-847,
     0x1.cbc2ad22df6b4p-205, 0.0, 0x1.4278a6e226a0ap-795, 0.0, 0.0,
     0x1.ebdf1efc6a4d7p-137, 0x1.f98b559980d0ap-731, 0x1.33770944b3514p-562, 0.0, 0.0,
     0.0, 0.0, 0x1.ff64b5b826515p-281, 0x1.4947fd299da0ap-731, 0.0,
     0x1.8935c49faaac5p-55, 0x1.393418e785c1p-20, 0.0, 0x1.39e921664d018p-675, 0.0,
     0x1.fcecab84b6f15p-319, 0x1.d61d8e6d98efdp-579, 0x1.2993148863476p-666,
     0x1.e4c2e0001edefp-222, 0.0, 0.0, 0x1.52edc9425494ap-950, 0.0,
     0x1.5a1b7161e8ebap-614, 0x1.fb7abd8e9d8fep-465, 0.0, 0.0, 0.0,
     0x1.3d07ea59de18bp-259, 0.0, 0.0, 0x1.f7b4db3ccadfcp-977, 0.0, 0.0, 0.0,
     0x1.35a6f25e17a98p-683, 0.0, 0x1.57bf09a429d6ep-139, 0x1.3396dea16d448p-808,
     0x1.b410e860fccd7p-358, 0x1.ca91fff9705e6p-110, 0.0, 0x1.00bc54e579e0fp-159, 0.0,
     0x1.d2b9924c95debp-991, 0.0, 0.0, 0.0, 0.0, 0x1.f91022f7ed9cp-1010, 0.0, 0.0,
     0.0, 0x1.fe78158b1cc0bp-607, 0.0, 0x1.8bf61df5edeb6p-210, 0x1.1a6ced230ad5dp-266,
     0.0, 0x1.d8d7dfcd3f2c1p-823, 0.0, 0x1.997622d989514p-11, 0x1.5a06c36064762p-139,
     0.0, 0x1.f6eb90a2147d6p-871, 0.0, 0x1.35e3ca0d0b62ap-915, 0x1.3a5dac3cf2a6fp-121,
     0.0, 0x1.af27e2d01d81ap-262, 0x1.86d94a9292401p-828, 0.0, 0x1.068c56eaa13e4p-410,
     0x1.fca0b74c32df9p-256, 0.0, 0x1.84f7580fb51bbp-680, 0x1.5e88120d94bdbp-388, 0.0,
     0x1.24cd37dc9a07fp-32, 0x1.4d16bc610e65fp-944, 0.0, 0x1.74656c192dc6ap-188,
     0x1.3ef236cc75edcp-1006, 0.0, 0.0, 0.0, 0x1.c45e1b1e580bdp-484, 0.0,
     0x1.1eff455b2e1fep-481, 0.0, 0.0, 0.0, 0x1.947bb8e302c0ap-151, 0.0, 0.0,
     0x1.4414d74f00415p-973, 0x1.ce36dde211dd8p-595, 0.0, 0.0, 0x1.cc0cb8bffea24p-849,
     0x1.8d6b490ea79dep-21, 0x1.b4e5823f66329p-795, 0x1.ee3ccdfd80549p-943,
     0x1.60cc7f62a4d95p-808, 0x1.3977246111557p-243, 0.0, 0.0, 0x1.611a68cc4fc6dp-581,
     0.0, 0x1.e688c2f263faep-420, 0.0, 0x1.54311706cceffp-745, 0x1.3ceb62ddde1cdp-925,
     0x1.a3b5ac383a026p-590, 0x1.74e95f1073707p-775, 0.0, 0x1.8c2750c0f76fdp-893,
     0x1.54ac12a85d4d9p-792, 0x1.9d8dd3847f85dp-772, 0x1.3b77a93bf05a4p-929,
     0x1.2432278fa8b31p-897, 0x1.25d9e86ec3fe5p-548, 0x1.20171654d1e7dp-19,
     0x1.72d948f9f73f3p-418, 0x1.3aa692b24dc7dp-297, 0.0, 0.0, 0.0,
     0x1.ed66dc4579c2ap-119, 0.0, 0x1.39da00727a99dp-645, 0x1.adf61f14e3702p-342, 0.0,
     0x1.d007ccd346c8dp-789, 0x1.a76f8850c96d1p-518, 0x1.d86146ca346b8p-769, 0.0,
     0x1.e1a22b729422p-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b78b33605c7fp-930, 0.0, 0.0,
     0x1.121fe509de582p-325, 0x1.f4cdf62d341e1p-633, 0.0, 0x1.f278c2db0fbbdp-641,
     0x1.e6b61ce331bffp-977, 0.0, 0.0, 0.0, 0x1.c3a0b227028d4p-1000,
     0x1.f4cec3dfaef4p-8, 0x1.dc749664cd128p-753, 0.0, 0.0, 0.0,
     0x1.a7706b8cb95d2p-755, 0x1.478d396e7b51ap-27, 0.0, 0.0, 0x1.267053185a007p-226,
     0x1.423547d2db63p-838, 0x1.018591762bb29p-62, 0.0, 0.0, 0.0,
     0x1.0f95eb8d8d42dp-279, 0x1.bdd8688d6c3b5p-262, 0.0, 0.0, 0x1.94ea8eeaf357fp-385,
     0.0, 0x1.d1163dc51c265p-734, 0x1.0376b1d511fa2p-85, 0x1.b91f8528456cep-100, 0.0,
     0.0, 0x1.d82f7a162ad2ap-270, 0x1.f5299f3503a74p-266, 0.0, 0x1.0d0828c1f604fp-829,
     0.0, 0x1.001fd9c845cf5p-978, 0x1.cfaa965a45fb3p-67, 0.0, 0x1.5804c581a7ea1p-34,
     0.0, 0x1.5944709cd179cp-475, 0x1.b0a2a5b78ab37p-33, 0.0, 0.0,
     0x1.08f4f8fa08bb9p-322, 0.0, 0x1.be13c06dba10bp-88, 0x1.431f6bed63e99p-666, 0.0,
     0x1.df223042abab7p-988, 0x1.4d7377552e76dp-25, 0.0, 0x1.a8b8e67e277edp-219,
     0x1.d7da7c271e65fp-587, 0x1.99580b1ef423bp-678, 0x1.7c6535bd4fcd2p-808, 0.0,
     0x1.19168800128a6p-497, 0.0, 0x1.37586fb58d8cp-359, 0.0, 0.0, 0.0, 0.0,
     0x1.cea0f11711ca1p-948, 0x1.fea0a97f9ae82p-599, 0x1.3dda6e3533111p-168, 0.0,
     0x1.ef5f0f31245dp-912, 0x1.2356b05d99e12p-432, 0x1.edd6aaf4b464cp-802, 0.0, 0.0,
     0.0, 0x1.afe8c68610846p-414, 0x1.e4dcab201692cp-598, 0x1.cf588a5600db5p-256,
     0x1.8c052368760f4p-832, 0x1.28fe444ae94e9p-1003, 0x1.d66b1ee9b4652p-953,
     0x1.7397e8d1391a8p-623, 0.0, 0x1.90cef90df2904p-492, 0.0, 0x1.2b315559685cap-678,
     0x1.b00333142c7ddp-776, 0.0, 0x1.e78df7dde4459p-568, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4d62ec057acfap-228, 0.0, 0.0, 0x1.3e7df98f0c683p-529, 0.0,
     0x1.a20bfa7568a96p-614, 0.0, 0x1.a4eb4a469b942p-667, 0.0, 0.0, 0.0, 0.0,
     0x1.33a1442911c36p-764, 0.0, 0x1.024f23843b7dap-459, 0x1.8d6551aecc1c3p-52, 0.0,
     0.0, 0x1.6842446d2ca99p-305, 0x1.50b98e5a1566ap-277, 0.0, 0.0,
     0x1.f0b39e5eeaa7dp-759, 0x1.8b743cc8e9644p-51, 0x1.6f806838ebbf5p-205, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c5106e007b4b3p-811,
     0x1.1d13203f1cfcep-386, 0.0, 0x1.c855b8ba2a2d1p-56, 0.0, 0x1.f7e02de0c7b11p-1022,
     0x1.34044b5d7ad71p-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2737f95134368p-842,
     0x1.d09aa6b5c9d19p-785, 0.0, 0.0, 0x1.d07e2936120fbp-70, 0x1.0c596913a2647p-355,
     0.0, 0x1.3f4dffe70afcdp-779, 0.0, 0.0, 0.0, 0.0, 0x1.63fb0544115a9p-245,
     0x1.2645e0f0252ebp-883, 0x1.91d29767b4dbep-359, 0x1.c22919e39cb6bp-699, 0.0,
     0x1.840e5f504efd8p-563, 0.0, 0.0, 0x1.3f6c9a0ff0101p-398, 0x1.1212392ae8c24p-432,
     0x1.13d4e7895cf33p-909, 0.0, 0.0, 0x1.e7208391b5d7fp-422, 0x1.ef30f8d5d26f2p-368,
     0.0, 0x1.84200cd0ec815p-236, 0x1.60e2df860f67ep-769, 0.0, 0.0,
     0x1.93a95b6586befp-695, 0.0, 0.0, 0x1.c27eb34c6ba67p-152, 0.0,
     0x1.5020b0ecf275ap-957, 0.0, 0x1.5b72c172986cap-366, 0x1.63bd7d23a5582p-215,
     0x1.71cfa213c24b9p-495, 0.0, 0x1.1516b562cc56p-732, 0x1.655590af4f991p-682, 0.0,
     0.0, 0x1.5f36237cf4fc7p-957, 0.0, 0x1.06b82cc614904p-769, 0.0,
     0x1.bb96fece8603ap-609, 0.0, 0.0, 0x1.6c00b2e957691p-954, 0.0,
     0x1.94767a77d1949p-997, 0x1.6b265fca9e371p-521, 0.0, 0x1.c2c0e4092bb7p-115, 0.0,
     0x1.ad64165b1c296p-88, 0.0, 0x1.aafe6879b5cccp-259, 0.0, 0x1.e65524490c477p-102,
     0.0, 0x1.a5fcdbf56fd38p-945, 0.0, 0.0, 0x1.5a74f2539c1d4p-634,
     0x1.5e64691d2d16ep-720, 0x1.0df52aae0fb47p-197, 0x1.907d6897af381p-466, 0.0,
     0x1.fca39c3ea434cp-981, 0x1.6a8e82eac8573p-661, 0.0, 0x1.df872e0d33d64p-914, 0.0,
     0x1.bbe7bd1d5f2ffp-819, 0x1.15c088dfb8cfdp-232, 0x1p0, 0.0, 0.0,
     0x1.4c0076ab066a9p-868, 0x1.0c102a5a6ecbdp-177, 0.0, 0x1.981ec6bd69d8dp-969,
     0x1.4debb58a77352p-163, 0.0, 0x1.011f1bfaade33p-169, 0.0, 0.0,
     0x1.25d34c9d1668bp-153, 0x1.b2fd18d906785p-808, 0x1.4f6bae5ba3248p-788, 0.0,
     0x1.af492b55f31abp-751, 0x1.cc66256982cbdp-85, 0x1.ce7fac8a41051p-508,
     0x1.05c82a9a8d8dap-265, 0x1.607b2d3f88fb4p-989, 0x1.089aef3ca02bp-860,
     0x1.434c864bc7422p-918, 0x1.f46dbc5fccb2cp-104, 0x1.df4bff553fb3bp-567, 0.0,
     0x1.63903e764966ap-73, 0.0, 0x1.d4f985b255678p-700, 0x1.76195dd654231p-681, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ac6de655920a3p-746, 0.0, 0.0, 0x1.e1978e4b1eb2cp-710,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d28e3665a4a13p-818, 0x1.145584e9f49c7p-127,
     0x1.320ff16f967e5p-161, 0.0, 0.0, 0.0, 0x1.91f7d89eab125p-280, 0.0,
     0x1.42f5fea476e42p-874, 0x1.0818b4761fe17p-716, 0x1.1a7b3b10097e9p-286, 0.0,
     0x1.4deccb175f57ep-892, 0x1.d93a1b012c91ap-775, 0x1.d1dbe11de500ap-381,
     0x1.f894fc74a2a29p-792, 0.0, 0x1.d9a6730ce606ap-499, 0x1.910b93e226595p-477,
     0x1.7c83559fe9189p-937, 0x1.ad2fdfb86fb59p-522, 0.0, 0.0, 0x1.81d04678c48b7p-723,
     0.0, 0.0, 0x1.9bade916db2d5p-592, 0x1.78b10e76dbedfp-315, 0x1.05ff146c214c8p-83,
     0.0, 0x1.a6725e353754dp-329, 0x1.0f864f6594c09p-399, 0x1.0dba8231e9337p-675, 0.0,
     0x1.eca49af19ea2p-726, 0.0, 0x1.9876da2416477p-470, 0x1.46551b82e552ep-839,
     0x1.e496c26d22ac9p-72, 0x1.49e66c0119893p-411, 0x1.6d11b554d2fcbp-453, 0.0, 0.0,
     0.0, 0.0, 0x1.b42f794174cafp-677, 0.0, 0x1.3dce61f7fb2f8p-677, 0.0,
     0x1.a6bc52286e9a7p-757, 0.0, 0.0, 0.0, 0x1.c1e39377d5732p-723, 0.0,
     0x1.2afafba045333p-612, 0.0, 0x1.1e4e4cfb4b7e9p-632, 0.0, 0x1.78bc5e0750c9fp-43,
     0.0, 0x1.d8c421b39f2dap-771, 0x1.b048eccef1afbp-348, 0.0, 0x1.010914d5ac588p-804,
     0x1.51c4e04bc232dp-507, 0x1.31ce464fc2204p-34, 0x1.ec437be056489p-774, 0.0, 0.0,
     0x1.cd0efbadcd319p-950, 0.0, 0.0, 0.0, 0.0, 0x1.e2a760e3e49a9p-851,
     0x1.3dad003f57b2p-35, 0.0, 0x1.af0d85a933cb7p-97, 0x1.6494e2c66f8e8p-438, 0.0,
     0x1.ce24f3984482ap-36, 0.0, 0x1.994f4794f15f9p-877, 0.0, 0x1.a4cd2b4c8b2dep-542,
     0x1.a7ba592430cf7p-555, 0.0, 0x1.85a1cdfc49997p-976, 0.0, 0.0,
     0x1.6a8be2085d04ap-156, 0.0, 0x1.67c3acc9cc09ep-325, 0.0, 0x1.6fef648e85e42p-57,
     0x1.3bf0bbd14eb5ep-1001, 0.0, 0.0, 0.0, 0.0, 0x1.98885641f1a28p-418, 0.0, 0.0,
     0.0, 0x1.a29b9455b9bep-807, 0x1.e6e69e47ea583p-539, 0x1.f2e99afce0b54p-943, 0.0,
     0.0, 0x1.b14eb5e083482p-742, 0x1.7d03c3aeebea5p-216, 0x1.c82e4bb98a0cap-107,
     0x1.b7965a9965ea6p-521, 0.0, 0.0, 0x1.490a219540937p-908, 0.0,
     0x1.30cb461a10299p-271, 0x1.710010778b214p-968, 0.0, 0.0, 0.0,
     0x1.9dc996622c8b5p-637, 0x1.b40f6647b4e6cp-28, 0.0, 0.0, 0.0,
     0x1.7e2409cf08dd9p-500, 0.0, 0x1.59e568e56a2cap-987, 0.0, 0x1.6aefa3238ffe8p-140,
     0x1.7ce597aee44fap-194, 0.0, 0x1.d2ba04df24046p-853, 0.0, 0x1.884ce0c957158p-745,
     0x1.fa238e8306f69p-466, 0.0, 0x1.3a371b006f22fp-339, 0.0, 0x1.e09445d5385b1p-890,
     0x1.dfa4fe9c736c4p-729, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.afa21c543084ap-11,
     0x1.e201ab9f54d98p-44, 0x1.c3b2d2bf675d6p-888, 0x1.a7e55e46d9254p-539, 0.0,
     0x1.297458c467a7bp-708, 0x1.c9f12dbf5b889p-745, 0.0, 0x1.8adbbb23ad06ap-74, 0.0,
     0x1.126a80c16f6adp-264, 0.0, 0x1.8e215219bc071p-849, 0x1.4e43e42351c9cp-1010,
     0.0, 0.0, 0.0, 0.0, 0x1.5620e722c6747p-295, 0.0, 0x1.5cbb14c7cede4p-180,
     0x1.4407168a40817p-511, 0.0, 0.0, 0x1.1966f5d499194p-368, 0x1.907280dd93c6cp-858,
     0.0, 0.0, 0x1.03b9b1deb691ap-842, 0x1.6f829a344179p-132, 0.0,
     0x1.932a9f3c2e68cp-617, 0.0, 0x1.54b62cc39dbdbp-965, 0.0, 0.0,
     0x1.622a0d51bf14ap-586, 0x1.3d8c839d63583p-740, 0x1.6c7e9112948f3p-863, 0.0,
     0x1.f3ff4fdadb33ap-855, 0.0, 0x1.57685961a7322p-412, 0.0, 0x1.f8b837c472eb3p-443,
     0.0, 0x1.7373d65ecced7p-499, 0.0, 0x1.eea5a38bea1f5p-410, 0.0, 0.0,
     0x1.74c97ff7bfb9fp-60, 0.0, 0x1.9b0e7074ce7b5p-633, 0.0, 0x1.d61ff45b61889p-719,
     0.0, 0.0, 0.0, 0x1.eaa84c9d815efp-979, 0.0, 0x1.874571ac3bbe9p-179,
     0x1.266781807dc3ep-966, 0x1.59a9eedf2ab73p-40, 0.0, 0x1.a7b6559474ff4p-573,
     0x1.a23d19bff4852p-49, 0x1.a9fb0b03873cfp-239, 0x1.37279be091986p-586,
     0x1.57bea4c602ff6p-41, 0x1.8db4e791d5738p-502, 0x1.01c5a0640819fp-230, 0.0, 0.0,
     0.0, 0x1.dd2ef4cc3183ep-730, 0.0, 0x1.45dec777faca1p-452, 0x1.342b7f5bb0cb3p-297,
     0x1.18fc009dde077p-356, 0x1.fe2233a427fb7p-453, 0.0, 0.0, 0.0,
     0x1.5f8e9bf3977a5p-207, 0x1.68c873268d84bp-652, 0.0, 0.0, 0x1.2b08a6ffa581fp-694,
     0x1.24d67399f995p-749, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c01d982b04d7p-729, 0x1.930da67ad0d98p-848, 0.0, 0x1.82b514f808864p-38, 0.0,
     0.0, 0x1.971d3f3ac18d4p-976, 0.0, 0.0, 0x1.0f6be5d0ef91ep-808,
     0x1.6be059887ddd3p-625, 0.0, 0.0, 0.0, 0.0, 0x1.7e94ff05b5e25p-208,
     0x1.da1ade5327534p-596, 0x1.b1cc1f080117fp-266, 0x1.4d78fdc092c0bp-110, 0.0,
     0x1.c6558a3b3ad54p-859, 0.0, 0.0, 0x1.d8830cb1864ddp-74, 0x1.987055d881ff6p-748,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.521f708d69616p-35, 0x1.7fd29cb11417cp-152,
     0.0, 0x1.c75727123ce3ep-129, 0.0, 0x1.9bf4f072f087ep-419, 0.0,
     0x1.80ed043170e1cp-344, 0x1p0, 0x1.014636427019bp-433, 0.0,
     0x1.895be08f29778p-320, 0.0, 0x1.8dfd7ee4417a8p-211, 0.0, 0x1.3616e4635999dp-631,
     0x1.ba7a8c67ab859p-742, 0.0, 0.0, 0x1.312d77e00d0bp-1004, 0.0, 0.0, 0.0,
     0x1.9b814c82b641p-850, 0x1.9d409d97b00f7p-994, 0x1.37bbc67230131p-973,
     0x1.1a7c545e2dad7p-1015, 0.0, 0x1.69dc63306d65fp-831, 0x1.c88284414211dp-821,
     0x1.3fa83ea561e58p-476, 0x1.90ae94a6f31cdp-19, 0x1.5eccc8902980ap-948, 0.0, 0.0,
     0x1.b6aede09d58cfp-728, 0.0, 0.0, 0x1.60b2fe5d778b8p-490, 0.0,
     0x1.aa848142ddfe5p-312, 0x1.707ecbe1f6ec1p-510, 0.0, 0x1.ad8e76d695146p-415, 0.0,
     0.0, 0.0, 0.0, 0x1.d9a9900826c44p-314, 0x1.ccacefa1c293cp-97,
     0x1.86c9907aa3d7dp-179, 0.0, 0.0, 0x1.cfe7c66dee7ecp-185, 0.0,
     0x1.b832d3c778b21p-925, 0.0, 0.0, 0x1.84f4e086bf512p-757, 0.0, 0.0, 0.0, 0.0,
     0x1.8fcdbc255163dp-219, 0.0, 0.0, 0x1.2d334fa801ebbp-213, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a0668383ddc4cp-800, 0x1.1dadcff4894d5p-588, 0x1.959cab1da3dbep-557, 0.0,
     0x1.aa92b08b7898bp-460, 0x1.937c50f6f69dfp-261, 0x1.afcdb79460c16p-996, 0.0,
     0x1.2c16d1e520274p-702, 0.0, 0x1.6df8d7fbf5d7cp-96, 0.0, 0.0,
     0x1.d7902cd0a4358p-832, 0.0, 0.0, 0.0, 0x1.22f88aac7648bp-437,
     0x1.c15b92e1d518ap-624, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c38966481912bp-75,
     0x1.2b1c12c745a96p-31, 0x1.f090d5c2c2e4ap-805, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a3be7171c39dp-862, 0x1.4ac75e67c2cd3p-936, 0.0, 0.0, 0.0,
     0x1.d2c35c82e349fp-406, 0.0, 0x1.a014a07b6cd1ap-436, 0x1.073f2ac24475cp-15,
     0x1.46aa5bde07ef3p-944, 0.0, 0x1.4c397f6206284p-378, 0x1.abff1ba72e2dbp-461,
     0x1.3e6d3343f631dp-55, 0.0, 0x1.7081f12ae10bdp-971, 0x1.0aa15bbdfe874p-906, 0.0,
     0x1.c64e1135d5326p-123, 0x1.ee3a0876824c8p-156, 0x1.b423457945878p-193,
     0x1.01a615de7ff38p-904, 0x1.7c38091745073p-937, 0.0, 0x1.1a7d4759c3eb7p-341, 0.0,
     0.0, 0x1.1cf5961a83ba3p-750, 0x1.ddf8690e6204ap-510, 0x1.976698d46f6f9p-1000,
     0x1.9590c4ba5791ep-121, 0.0, 0.0, 0.0, 0x1.e37dae2fe5d2fp-452, 0.0, 0.0,
     0x1.a5427da1dd76ep-225, 0.0, 0x1.c59ad32e6ebcap-103, 0.0, 0x1.9bc3887fb6697p-412,
     0x1.c767d8f4df76cp-450, 0x1.80a9b19ad65e9p-570, 0x1.0484d5844bd81p-125, 0.0, 0.0,
     0x1.3731cc96231b1p-918, 0.0, 0.0, 0x1.dff4b881423a1p-396, 0.0,
     0x1.8c2d751c61e8ep-53, 0x1.17e6733cdb4d7p-950, 0x1.aebf41bc82819p-839,
     0x1.b93943312a6cp-840, 0x1.fa87e484461a6p-855, 0.0, 0x1.ead4f3993d94p-348,
     0x1.cb8ebc2a2ee8p-144, 0.0, 0x1.b21e77e3fbfeep-565, 0.0, 0.0, 0.0,
     0x1.e1bf2f01341a1p-445, 0x1.dfabdafe65836p-290, 0.0, 0.0, 0x1.8d2b2addc1777p-719,
     0.0, 0x1.c4b7769b2922ap-293, 0x1.df12642d41381p-700, 0.0, 0x1.f4f5b8d153c3cp-666,
     0x1.24f9ebde9a707p-772, 0.0, 0.0, 0x1.4377319f5b8fdp-663, 0.0,
     0x1.1ee3fc6efb59bp-668, 0x1.93d3ec1c4822ap-564, 0x1.656b4bc9d319cp-980, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.94c6fec6a1e95p-891, 0.0, 0.0, 0.0, 0x1.c42021f2295a4p-317,
     0.0, 0x1.0b7a820effb5cp-203, 0x1.8b792fd28460ep-1020, 0.0, 0.0, 0.0, 0.0,
     0x1.53ea65f4e393bp-301, 0.0, 0x1.0afdc691bffb2p-417, 0.0
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
            tmp1 = Sleef_log10d4_u10kvx(tmp0);
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
    printf("Sleef_log10d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_log10d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
