/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd2_u10kvx.c --function Sleef_sincosd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0.0, 0x1.f856ee30a949fp-75, 0x1.368d1de78725bp-560,
     0x1.5aee6399f3baap-346, 0.0, 0x1.140e0e0c29a79p-741, 0.0, 0x1.693577dd90613p-974,
     0.0, 0.0, 0.0, 0x1.06549432f68bcp-337, 0.0, 0x1.b9c04e2217a6cp-830,
     0x1.17e8f83655d4p-850, 0x1.371c537c6c43bp-919, 0x1.ab10bbeae21bbp-726, 0.0,
     0x1.6676e47b63ca7p-793, 0x1.438b2456cb456p-398, 0x1.e54825ad32d34p-857, 0.0,
     0x1.9cca500cf2e84p-313, 0x1.1d75db06ea32ap-28, 0.0, 0x1.c2e81c7ae7233p-502,
     0x1.2c7c65af4404ap-802, 0.0, 0.0, 0x1.e8ac2292f276cp-481, 0x1.d35c012c2b73bp-710,
     0.0, 0.0, 0.0, 0x1.da1d749e48f48p-901, 0.0, 0x1.34f21e6905582p-506, 0.0, 0.0,
     0.0, 0x1.fb23c0574da76p-642, 0.0, 0x1.ad759043185b4p-749, 0x1.2b209473fc1e9p-626,
     0x1.ca4a62ea4e558p-126, 0.0, 0x1.f290a35097c1cp-477, 0x1.30ace5fa00195p-666, 0.0,
     0.0, 0x1.1bc1ba5aed0eap-456, 0.0, 0x1.42e85da99fe9ep-1008,
     0x1.2ec6397d29a8ep-877, 0.0, 0x1.05340113436d6p-143, 0x1.68ad6e3731f28p-666,
     0x1.c8e6ba6f88efp-402, 0x1.cc14bb157abbep-152, 0.0, 0x1.c2a2975276ap-1022, 0.0,
     0.0, 0x1.9357d5f5323a3p-278, 0.0, 0x1.460ea038ae1e5p-97, 0x1.a8e71239d203dp-78,
     0.0, 0.0, 0.0, 0x1.9bc8e7461b173p-248, 0x1.2d080a9177cfbp-214,
     0x1.5fcbee6385a8dp-135, 0x1.6b62932e87e93p-880, 0.0, 0x1.0275dabc18db9p-976,
     0x1.ca83cd2efcd73p-748, 0.0, 0x1.8249367396317p-373, 0.0, 0.0,
     0x1.5c9e2387bf41bp-157, 0.0, 0x1.7db2f2a7d88c4p-827, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4e1358e509e9ap-970, 0x1.4c173d305fdd7p-472, 0.0, 0x1.8b0d1317bb422p-128, 0.0,
     0x1.02b32a3894189p-42, 0.0, 0.0, 0.0, 0x1.6e43f2791907fp-18,
     0x1.0cf412c6554f3p-726, 0.0, 0.0, 0x1.cfd3ad6c3ef34p-594, 0.0, 0.0,
     0x1.96a1b38424551p-426, 0x1.118971d25cf89p-247, 0.0, 0.0, 0.0,
     0x1.cee3f766b006fp-545, 0.0, 0x1.5817cf0fb327p-859, 0.0, 0x1.5f46ec2d49707p-157,
     0x1.54f1e9fb2c1a7p-627, 0.0, 0x1.63b8a139590a4p-350, 0.0, 0.0,
     0x1.c883e9ed83df4p-293, 0.0, 0.0, 0.0, 0x1.7a69d087fcb08p-301,
     0x1.75896eabb4739p-850, 0.0, 0x1.3a8376a04b8ffp-195, 0.0, 0x1.061a607523fe5p-866,
     0x1.024046872d74cp-294, 0x1.6ea7a5cd92721p-468, 0x1.e5315b066c38ap-421, 0.0, 0.0,
     0x1.9abb6b2cd88f8p-783, 0x1.b112598dec634p-648, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6eb9739e77f3bp-533, 0.0, 0.0, 0.0, 0.0, 0x1.4b9fbe2fee5a2p-385,
     0x1.b830ba67c8725p-479, 0x1.4a34aa173a7f1p-717, 0x1.bd59e4419b02ap-596, 0.0, 0.0,
     0x1.de9912402ddaap-1002, 0.0, 0x1.78a80918b8db4p-449, 0x1.82b4316f10273p-16, 0.0,
     0x1.55eb2b8dd45ddp-562, 0.0, 0.0, 0.0, 0.0, 0x1.553aa484dbd29p-948,
     0x1.e6ab7d61c6ca1p-457, 0x1.e98ae92ee6a38p-890, 0.0, 0x1.e3dc2f1c9d2fcp-36,
     0x1.df91a2038b3aap-369, 0.0, 0x1.ed53d1972dfddp-664, 0x1.2dc19efeb4398p-380,
     0x1.a86e5e85b532p-452, 0.0, 0.0, 0x1.f58fdfb984f99p-53, 0x1.4f7318b780088p-365,
     0.0, 0.0, 0.0, 0.0, 0x1.0c6ffae91d38bp-8, 0.0, 0x1.ad01311f2dcep-830, 0.0, 0.0,
     0x1.180425df5d1ebp-403, 0.0, 0.0, 0x1.37696520560d9p-268, 0.0, 0.0, 0.0, 0.0,
     0x1.3822ab9d40492p-186, 0x1.0d305e2bff886p-425, 0x1.02fe0b4e7979ap-481,
     0x1.276647a504594p-121, 0x1.76d0ed1e7a753p-933, 0x1.ad2c6388ba594p-101, 0.0,
     0x1.b01fa8ba5f75cp-835, 0x1.e5cc6364c14e3p-359, 0x1.baeea65392a9fp-121, 0.0,
     0x1.ca8876707aae8p-965, 0x1.e57ae112ee044p-203, 0x1.a3dc956ded91bp-962, 0.0,
     0x1.1e32ba73612bcp-369, 0.0, 0.0, 0x1.6f4e092a63091p-469, 0.0,
     0x1.682ba3d13efffp-730, 0.0, 0x1.91a9afb133a38p-358, 0x1.a6da156258873p-985, 0.0,
     0.0, 0x1.68c935001aa12p-836, 0.0, 0x1.e336622653a18p-624, 0x1.f316f52135afdp-468,
     0.0, 0x1.1b115d83dbb1ap-627, 0x1.3349b9e80dee5p-62, 0.0, 0x1.f4d70a3916c53p-314,
     0x1.aaa34eb66c266p-518, 0.0, 0x1.adc9758f06c21p-730, 0x1.ab2b0c9df8119p-564, 0.0,
     0.0, 0.0, 0.0, 0x1.8533387d6d331p-584, 0x1.00aba08b2b3cap-233, 0.0, 0.0,
     0x1.f5f140b304d52p-346, 0x1.a89556723bbc4p-320, 0.0, 0.0, 0x1.57ccfda5344e4p-505,
     0x1.c5a5bb917cf26p-760, 0x1.bc3258b8d5543p-686, 0.0, 0x1.d816a1bd6d89dp-35,
     0x1.6232b374eb5eap-653, 0x1.e5ab400107672p-760, 0.0, 0x1.8ac145993e44dp-951, 0.0,
     0x1.015346dfddb56p-682, 0x1.0e817c2250d36p-1012, 0x1.6ac59b057395p-74,
     0x1.a419cb063c20ap-153, 0x1.b5580adf24009p-821, 0.0, 0.0,
     0x1.899925186f1ecp-1007, 0.0, 0x1.2b2c93336ae02p-276, 0x1.b75bdc41b7d07p-779,
     0.0, 0x1.d98bec6fb5b9p-617, 0x1.a86d87035a139p-504, 0.0, 0.0, 0.0,
     0x1.1cd57abff16a3p-491, 0x1.11edb84fa9096p-688, 0.0, 0.0, 0.0,
     0x1.64bb059512736p-937, 0.0, 0x1.dc5df479dacffp-698, 0.0, 0x1.8a5437065cfb7p-597,
     0.0, 0.0, 0x1.f2c6fd84cfee2p-1000, 0.0, 0.0, 0x1.9193378348bffp-246, 0.0, 0.0,
     0.0, 0x1.c69d246b2f7a9p-760, 0.0, 0.0, 0x1.3e885cc340ec3p-977, 0.0,
     0x1.084eee8f371d6p-68, 0.0, 0x1.e559d36f3396ap-981, 0.0, 0x1.a1f35d482f5fbp-29,
     0.0, 0.0, 0.0, 0x1.650240e861ec4p-5, 0x1.358e621fb8f33p-751,
     0x1.34841cf508122p-768, 0x1.eec2457f77f7p-125, 0x1.a477d4ba78186p-651, 0.0,
     0x1.a25125810e22fp-181, 0.0, 0.0, 0x1.fb0d9b8cb9b56p-10, 0x1.4603d6938cdbep-799,
     0.0, 0.0, 0.0, 0x1.1e1bdda817cfcp-657, 0x1.2d996e50f67b8p-874,
     0x1.d22fb4e80720dp-609, 0x1.7da5dd6bd3e86p-658, 0.0, 0x1.0125b24846b04p-417, 0.0,
     0x1.64fcd64f9cca4p-113, 0x1.cf3882d90eccp-1007, 0x1.b8534c44d46c7p-658,
     0x1.2bdac36ab04acp-969, 0x1.52374b99a4b98p-381, 0.0, 0x1.df485115469ep-987,
     0x1.60af47cebc62ep-615, 0.0, 0.0, 0x1.6b936371fc02ep-185, 0.0,
     0x1.0f8457521a23fp-976, 0x1.a512b804e8ac2p-129, 0x1.132543ad4aa1p-228,
     0x1.3d8f5398d843p-969, 0x1.94c15dbc6baa2p-782, 0.0, 0x1.2997c0041cc35p-985,
     0x1.70c330168c2ccp-234, 0.0, 0x1.07cffaa1fceb8p-567, 0.0, 0x1.62bbc022387cbp-461,
     0.0, 0x1.e3872f1a28196p-936, 0x1.83b3559d9565p-843, 0x1.8f348da75c9b9p-304,
     0x1.32f90009301f3p-829, 0x1.47d59f590694cp-447, 0x1.56c53fff64a07p-101,
     0x1.1c2e882f394f2p-24, 0x1.b03b87d75ec6bp-215, 0x1.c3e2edecf6d87p-441, 0.0,
     0x1.5dc20424a479ep-464, 0.0, 0x1.c8c34c8adb724p-990, 0.0, 0x1.b31af15a0f7p-995,
     0.0, 0.0, 0x1.0a94822ae99a4p-816, 0x1.f0d3470b9b6b1p-110, 0x1.35b31fcc35286p-826,
     0x1.0d698e8266d8ap-559, 0.0, 0.0, 0.0, 0x1.d5a624c0de461p-837,
     0x1.1ecc199d9983ap-948, 0x1.629897cc14cb4p-562, 0.0, 0.0, 0.0, 0.0,
     0x1.582e81dfb21ap-337, 0.0, 0x1.7d71831d5744cp-873, 0.0, 0x1.c261f0c5deb93p-1012,
     0x1.06ce7dc5a4855p-297, 0.0, 0.0, 0.0, 0.0, 0x1.6d3f731fe65acp-895, 0.0,
     0x1.15ec84c0e852bp-45, 0x1.258142c6773a7p-291, 0x1.a17824033bf87p-503, 0.0, 0.0,
     0.0, 0x1.7865b75173271p-892, 0x1.927c118f39d55p-932, 0x1.d7d47ad470fdp-984,
     0x1.5ca7ada4a058ep-140, 0x1.97e4f461eec8p-468, 0x1.108efca95c121p-994,
     0x1.dc4a2405caa82p-1009, 0.0, 0x1.38128d1604cdep-466, 0x1.cd8d6d30fa5cbp-997,
     0.0, 0x1.bd44cde0174b1p-545, 0.0, 0x1.c6dd4c05f876bp-756, 0.0,
     0x1.9885bdc4e3d9bp-556, 0.0, 0x1.db9a9929ea2a4p-477, 0x1.30d366ca2e76dp-614,
     0x1.a71afe31a5944p-957, 0x1.0cf9b8e340b3ap-294, 0.0, 0.0, 0.0, 0.0,
     0x1.2fc902c3c4da1p-393, 0.0, 0.0, 0.0, 0.0, 0x1.460d770cfa8cdp-675, 0.0, 0.0,
     0.0, 0x1.f563c08a37847p-756, 0x1.88739e9bbc15ap-131, 0x1.89521c6b552aep-34, 0.0,
     0x1.7d7bb609bb3b6p-44, 0.0, 0x1.f5a6a5652a91dp-410, 0.0, 0.0, 0.0,
     0x1.558f25406dfb7p-59, 0.0, 0x1.8e56b1dd654edp-236, 0.0, 0x1.3576a7ab43f8ap-585,
     0.0, 0x1.429ace41cad7cp-391, 0.0, 0x1.873138b9f2353p-676, 0.0, 0.0,
     0x1.7267e8640683fp-864, 0.0, 0x1.7b3f76f479329p-152, 0x1.8964201571407p-930, 0.0,
     0x1.16f3ca35d9f64p-793, 0x1.4da09d9f92429p-334, 0x1.55cb9f9cafc15p-553, 0.0, 0.0,
     0x1.b03c194db885ep-620, 0x1.bd109fc61bf36p-517, 0x1.915c718bde61fp-207, 0.0, 0.0,
     0x1.8827c78afe28ap-635, 0.0, 0x1.8c1325b6bb8d3p-265, 0x1.d0ff3085ecb5ap-945, 0.0,
     0x1.80a0535792a92p-359, 0.0, 0x1.30d585932fc5dp-640, 0x1.096b37a0a48c5p-912,
     0x1.fc7a87639f273p-650, 0x1.6b57d151d5304p-412, 0x1.fcd375b39de9dp-866, 0.0, 0.0,
     0x1.f77baad207fa7p-459, 0.0, 0x1.5cb5b8425357cp-317, 0.0, 0x1.456f11b551b0ap-879,
     0.0, 0x1.19dd53da46264p-569, 0x1.6a62d246e858p-559, 0x1.3719972ef42f6p-352,
     0x1.8ffb2204fdba8p-149, 0x1.680a4648c3835p-681, 0x1.dd2e7f5cee8ap-197, 0.0, 0.0,
     0.0, 0.0, 0x1.d3015d7c00fa2p-348, 0.0, 0.0, 0x1.c74e4e28bc4ecp-592,
     0x1.6a0c8e38c20c2p-507, 0x1.e4a3a6620dddp-299, 0.0, 0x1.14edd3ba63f4ap-916,
     0x1.417a2ae28ad81p-132, 0.0, 0.0, 0x1.c06bc8b3f583ap-422, 0x1.a8cbadcbeeb1p-310,
     0.0, 0.0, 0x1.fe8afae4de3c5p-426, 0x1.906662ccbded7p-401, 0x1.6100eb60d392fp-598,
     0.0, 0.0, 0x1.81a01cbb35405p-644, 0x1.7b4ca6f6d9a47p-179, 0.0,
     0x1.e9719e9328ba2p-902, 0.0, 0.0, 0x1.7d670d7a34749p-97, 0.0,
     0x1.b3f8fe39bbafdp-201, 0x1.1a56926938274p-706, 0x1.5b8f4e6e3da7bp-386,
     0x1.4ba202d2a378dp-338, 0.0, 0.0, 0.0, 0.0, 0x1.48761cc6d0bbep-458, 0.0,
     0x1.db9f95266f357p-361, 0.0, 0.0, 0.0, 0x1.df7701af6a502p-455, 0.0, 0.0, 0.0,
     0.0, 0x1.1537d92c3c717p-188, 0x1.9cd0be7f450a3p-875, 0.0, 0.0, 0.0,
     0x1.95f941f5c8a8ep-646, 0.0, 0.0, 0x1.8054a248d47b1p-780, 0.0, 0.0,
     0x1.ca0824a6676afp-75, 0x1.852deb665e31fp-79, 0.0, 0x1.e2f4c85812215p-313,
     0x1.8852b04411bc4p-849, 0x1.d74027589a0fp-912, 0x1.6cf386341b735p-272, 0.0, 0.0,
     0x1.7f50fff87820cp-235, 0x1.20a260d6537b9p-716, 0x1.1b81386483966p-311, 0.0, 0.0,
     0x1.ba16d9d0730a8p-318, 0.0, 0x1.6b8d65b842ebdp-650, 0x1.6600fa113802fp-764, 0.0,
     0x1.37d10046d64d9p-815, 0.0, 0.0, 0x1.6d5fc233c927ap-626, 0.0,
     0x1.c222a3caf6366p-806, 0.0, 0x1.5f30d8e6d0ffdp-840, 0x1.b1c0c0d0d61a7p-211, 0.0,
     0.0, 0.0, 0x1.1e4b20488382ep-994, 0x1.153a407827a4dp-104, 0x1.373f785951958p-540,
     0.0, 0.0, 0.0, 0.0, 0x1.8a7c62369382ep-554, 0x1.93628f6dd53ddp-242, 0.0, 0.0,
     0x1.25fbc994e9aaep-283, 0x1.6b25297abd12ep-915, 0x1.45520fb9eba38p-902, 0.0,
     0x1.9426cfc02281cp-862, 0.0, 0x1.f5a49c942f481p-161, 0x1.55adee307f49ep-696,
     0x1.f76e92e1552c1p-817, 0x1.8ab1cba60f044p-479, 0x1.3e730e72f9dd2p-124, 0.0,
     0x1.4b1267f07284p-583, 0x1.f3ad50c958743p-886, 0x1.994373f82c0bfp-348, 0.0,
     0x1.384c38f37ef6fp-1012, 0.0, 0.0, 0.0, 0x1.2d1c5b8d688d2p-809, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fddbf365e9ca8p-117, 0x1.a593c60e29e7cp-474,
     0x1.10cd96269f2f9p-835, 0.0, 0x1.0631ec3131e36p-986, 0x1.61a64e0839beap-357, 0.0,
     0x1.4239c64cdb52dp-196, 0.0, 0.0, 0.0, 0.0, 0x1.95ebaec3fe8a7p-326,
     0x1.b57b5e111f193p-891, 0.0, 0.0, 0x1.7572049ab1f4dp-394, 0x1.7b049d9ca3b8fp-726,
     0x1.b63708bd94953p-1017, 0.0, 0.0, 0x1.35a6522f04ffcp-524, 0.0, 0.0, 0.0,
     0x1.d69ad1dfccefdp-887, 0x1.3972e967f16c3p-734, 0.0, 0.0, 0x1.d646d2cd2db12p-56,
     0x1.e6a53b5c8bcdp-987, 0x1.73a88872dc1d2p-346, 0.0, 0.0, 0x1.858d8b9cec2b7p-240,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f95fc1d59e49p-612, 0x1.38dad2d30533ep-857,
     0x1.d90b3558cf36p-953, 0x1.fe3c08884487ep-499, 0x1.d279f31848633p-481, 0.0,
     0x1.d2348bc9da572p-298, 0.0, 0.0, 0.0, 0x1.5488f91dc348p-69,
     0x1.f6eb848d78583p-348, 0x1.89bc68f4802a7p-240, 0.0, 0x1.e2147961ea82fp-102,
     0x1.0c53bfd941042p-424, 0x1.fd29dc173cd22p-1021, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.755f5052b4332p-398, 0x1.53f8dd9fee445p-140, 0x1.4b892570759bcp-757,
     0x1.a1cfe0f7e1eb5p-412, 0x1.3b6d9a69c03fep-10, 0x1.6f98ed8c21e36p-111, 0.0, 0.0,
     0.0, 0.0, 0x1.5e946f06574f5p-658, 0.0, 0.0, 0.0, 0x1.e6885da997c73p-686, 0.0,
     0.0, 0x1.0fe56e390da5ap-688, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bff8f00f011cap-563,
     0x1.307153103eddfp-661, 0.0, 0.0, 0x1.fd73272c6c1afp-871, 0x1.6d39836ce8763p-89,
     0x1.c77aad837f88cp-597, 0x1.d19895f3d992p-991, 0x1.944bffe8dd96ep-89,
     0x1.ccd0a367fec5ep-1012, 0x1.781a9eb73434ap-1002, 0x1.8a959badba48p-810,
     0x1.6824596560bbcp-514, 0.0, 0x1.753e3d4f29a1ap-610, 0x1.b55be2ca72ed3p-219, 0.0,
     0x1.f92982f2f19ecp-584, 0.0, 0x1.7a8eb78d24c2ep-445, 0.0, 0.0, 0.0, 0.0,
     0x1.5a970ae3b2f18p-635, 0x1.9cee60ad85343p-401, 0x1.c5cc72631bbb5p-292, 0.0, 0.0,
     0x1.cf9e9fda2ccadp-455, 0.0, 0x1.9648bae9cd28ap-970, 0.0, 0.0,
     0x1.8afb890fb149fp-665, 0x1.b9fdd71eaa88cp-530, 0x1.c91e5624203a5p-545,
     0x1.b87f2ab40028fp-898, 0x1.08a991bbdfa11p-639, 0x1.2d4c1e82841bcp-4,
     0x1.f1723f2dda30ap-36, 0x1.ebdba03f02ccbp-495, 0x1.6e47161c5524p-901,
     0x1.deadae42b3cbfp-192, 0.0, 0.0, 0.0, 0x1.a3b4c111bc7dbp-236,
     0x1.3358f083141aep-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f967282754fb2p-623, 0.0, 0x1.9492bbc17400ap-85, 0x1.d5b0ae6541897p-161, 0.0,
     0x1.69ecffb117d6fp-318, 0.0, 0.0, 0x1.5e165184436fdp-985, 0x1.10bec1ae7d80dp-122,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f72a3113ebf61p-613, 0.0,
     0x1.27265fb680ff4p-470, 0x1.fb87f39adcd24p-309, 0x1.b3ea9691df4b5p-801, 0.0, 0.0,
     0x1.5e17f1698d439p-985, 0.0, 0x1.15068ae2b2b12p-326, 0.0, 0.0,
     0x1.bf801bd24551ap-826, 0x1.9dc57fcabbcdap-174, 0x1.07213628ff8a8p-874,
     0x1.8e5f107b1374bp-654, 0.0, 0x1.9899b3569a2fap-147, 0x1.96eb1171aec41p-80, 0.0,
     0.0, 0x1.8464bbf40c0c1p-459, 0x1.ff7d95ca721f8p-858, 0.0, 0.0,
     0x1.c0de71acfded2p-1016, 0x1.0d60b00c069e6p-537, 0.0, 0.0,
     0x1.f63bc5194cc29p-728, 0.0, 0x1.6365e22569a2ap-203, 0x1.1b7a4e7365bebp-312, 0.0,
     0.0, 0x1.22d2d56751074p-268, 0.0, 0.0, 0x1.61726f7f44d79p-179, 0.0,
     0x1.41e824adea278p-215, 0.0, 0x1.c17ab24c7fe0cp-416, 0x1.b16a42d259829p-460, 0.0,
     0x1.4bcaf7d064317p-798, 0.0, 0.0, 0x1.8253dfb096902p-872, 0.0, 0.0,
     0x1.5659471d78782p-994, 0.0, 0.0, 0x1.8a56b671bfbd2p-233, 0.0, 0.0,
     0x1.96376ffffe341p-939, 0x1.45e6f93693e53p-940, 0x1.f53a21acc3a3dp-520, 0.0,
     0x1.c72597b520f51p-199, 0.0, 0.0, 0.0, 0x1.c54e3063eda37p-1020, 0.0,
     0x1.ef0d5d06982eap-930, 0.0, 0x1.2aa7efb427e43p-731, 0x1.e75e50db7a042p-241, 0.0,
     0x1.cebfe372c7abdp-305, 0x1.81d5b0aa39b78p-93, 0x1.71a78bf3a3db6p-465, 0.0,
     0x1.52c0aa999715dp-249, 0x1.b833c5b41ce4dp-95, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87f2101f4c469p-803, 0x1.690769f811ffbp-985, 0.0, 0x1.f3148f7358defp-529, 0.0,
     0.0, 0.0, 0x1.3c545fe53324ep-483, 0x1.37c2ff3537d2fp-770, 0x1.f9cef184a44d5p-534,
     0x1.7d470a345293bp-832, 0x1.eabe0d85d0019p-608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52875fca5a9dap-248, 0x1.f9e535e39ab83p-891, 0.0, 0x1.110ebbe1f99fdp-502,
     0x1.17ae1b3ab2b44p-980, 0.0, 0x1.035736d66ee0fp-295, 0.0, 0x1.e379e8aa9c502p-872,
     0.0, 0x1.8aecb3cf8f38cp-664, 0x1.c484ff39da421p-893, 0.0, 0x1.43bbdce26468bp-344,
     0.0, 0x1.d0c70ead93db2p-840, 0x1.77b280546aafap-356, 0x1.d91ac82e6a7abp-431, 0.0,
     0x1.f134a718bb7a9p-592, 0x1.ecf8a87164361p-938, 0x1.8c9fedbf7124p-119,
     0x1.f71d1adbe2fbap-405, 0x1.0e0689f04d082p-46, 0.0, 0.0, 0.0, 0.0,
     0x1.d544a2c1f7b76p-8, 0x1.d7733d45fe57p-884, 0.0, 0.0, 0x1.c36d8f31928a1p-25,
     0x1.158167a37a72bp-723, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1cb208d93601dp-126, 0.0,
     0x1.fd2eaa9340fdcp-356, 0x1.ae13d1d16c996p-167, 0.0, 0x1.65534b6f20237p-359,
     0x1.7e93887385668p-980, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3530874b1aap-101,
     0x1.0ece6131c17ecp-651, 0.0, 0x1.0a7dd7f43f5a5p-469, 0.0, 0x1.34f6dd0a034dfp-156,
     0.0, 0.0, 0.0, 0x1.bbeeb6b6632bp-297, 0x1.3b3ffe55381a3p-127,
     0x1.dd608f7f51f3p-248, 0.0, 0x1.7d398ee2bec7ap-122, 0.0, 0x1.0ae5f3cf84a45p-806,
     0x1.48dd8b127516p-650, 0x1.c090acd09178bp-169, 0x1.2c1017633ce07p-464,
     0x1.deab63858ad82p-716, 0x1.b9b748a2f9eb1p-531, 0x1.307e5f552d6d3p-432, 0.0,
     0x1.d7a79d06f0556p-842, 0x1.db2487c91d784p-537, 0.0, 0.0, 0.0,
     0x1.8a86475d88d6bp-994, 0.0, 0.0, 0x1.6c1a0861cbd65p-715, 0.0,
     0x1.3532fddcf267ep-581, 0x1.59c4293e4cd85p-887, 0.0, 0x1.2e31795c3cdebp-436, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5e0646736e8b3p-729, 0.0, 0.0, 0.0,
     0x1.c175e2b7f8192p-894, 0.0, 0x1.a44aed8f8df5bp-622, 0x1.5b1578d9b6519p-958, 0.0,
     0x1.029fc879115dcp-987, 0x1.c77e8bd95f85bp-38, 0.0, 0.0, 0.0,
     0x1.3b4b3ad52c84dp-45, 0.0, 0x1.fc59c629921ffp-620, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosd2_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd2_u10kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
