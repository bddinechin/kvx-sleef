/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d1_u35purecfma.c --function \
 *     Sleef_log2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.d496a1fd33185p-800, 0.0, 0x1.7bc4e0749a8d2p-515,
     0x1.ca3c12aece59cp-197, 0.0, 0.0, 0x1.82f8b8eb79f72p-622, 0.0,
     0x1.de4b31c8e0b0bp-708, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.47c873d31b2ccp-978, 0x1.19146ca295e9fp-98, 0x1.ef486185c6ed9p-461,
     0x1.48520f71feff4p-149, 0.0, 0x1.c41c603fdeeecp-548, 0.0, 0x1.17de341efd6eap-147,
     0.0, 0x1.e8ba39550f389p-624, 0.0, 0.0, 0x1.5e101eaf6e96bp-366,
     0x1.9e4402710115ap-177, 0.0, 0x1.fb70f911982a2p-508, 0.0, 0.0,
     0x1.f4654869c315fp-1015, 0x1.9a1789bcc22aap-817, 0.0, 0.0, 0.0, 0.0,
     0x1.adb5672983884p-307, 0x1.04f73f9d23c72p-631, 0x1.cec8f406fd867p-492,
     0x1.fe462b24223dap-149, 0.0, 0x1.991613cd2d3bap-904, 0x1.3abdb9b79160dp-422, 0.0,
     0x1.780e73e95240cp-29, 0.0, 0.0, 0.0, 0.0, 0x1.68d6280168c4bp-860, 0.0, 0.0,
     0x1.1b758b08a5e77p-58, 0x1.5edd5061c37bp-189, 0x1.50a9fa1594c49p-362, 0.0,
     0x1.470035952c0e8p-461, 0x1.10f076d06445fp-960, 0x1.03ace49a2f5bfp-293,
     0x1.04ee981ead9cep-419, 0.0, 0x1.f3b5c2b12f416p-842, 0x1.12eb6425ae941p-215, 0.0,
     0.0, 0x1.6ce5348bfa3f2p-460, 0x1.12b92347d2b5p-738, 0.0, 0.0, 0.0,
     0x1.f27fc78131e4p-362, 0.0, 0x1.0181d11af4361p-639, 0.0, 0.0,
     0x1.12a0e14201985p-651, 0x1.aa6cb85868549p-285, 0x1.736003dd5dd34p-458,
     0x1.4a2f5f5f599c9p-647, 0x1.9e0610b7060eap-674, 0.0, 0x1.0a2142c1e12e8p-118,
     0x1.cdb7cf214d01bp-711, 0x1.e0316526d0c7bp-771, 0x1.41deed4da3c14p-259,
     0x1.f2ba2b9e55117p-367, 0x1.3530f72ac6765p-665, 0x1.ab59f1b1cb97p-566,
     0x1.c1e9fbb601aa7p-726, 0.0, 0.0, 0.0, 0x1.ccbd2a855df67p-769, 0.0,
     0x1.6e55c71348d59p-773, 0x1.2607b65886b08p-568, 0.0, 0.0, 0x1.4e9039bf293b3p-458,
     0x1.5e61e42eacdfcp-884, 0x1.dc269f6533534p-742, 0x1.2edea2ba02ac6p-838,
     0x1.b70feb809c42ep-538, 0x1.8e8cd43538fc6p-166, 0.0, 0.0, 0x1.4dd6c7a36d40bp-135,
     0.0, 0.0, 0x1.048b0fd08f3a3p-733, 0.0, 0.0, 0x1.a31747b55857dp-63,
     0x1.71caf2af201b1p-409, 0x1.a75bae3ab3864p-331, 0x1.21f3bdd97f9a2p-714, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c93564acfc4cp-991, 0.0, 0x1.2c04e20602391p-203, 0.0,
     0x1.018765f7120dep-519, 0x1.4a07858c26be4p-625, 0x1.e1bd5eeea43d3p-364,
     0x1.b4313e1aaa52dp-717, 0x1.3465140726766p-757, 0.0, 0x1.a1f019c941025p-158,
     0x1.f3b133cdc6356p-281, 0x1.214bfd71b52f2p-593, 0.0, 0.0, 0x1.9e2edb94fecc6p-708,
     0.0, 0x1.af45ee98bc3e2p-710, 0x1.9db5c60afce75p-52, 0.0, 0.0,
     0x1.00d9517d1a723p-298, 0x1.b89e503e3a17fp-100, 0x1.d827deac55927p-722, 0.0,
     0x1.0c9c578e372ebp-357, 0.0, 0x1.72f7d86b5bc36p-623, 0.0, 0.0,
     0x1.a16e6b498752dp-859, 0x1.fc0b9c45d668p-762, 0.0, 0x1.054541b4c9de8p-83, 0.0,
     0.0, 0x1.d5a22ed090bbdp-338, 0x1.7565bb3e1b9d4p-349, 0x1.bb19d50d61f3ap-964,
     0x1.5495d96760e44p-350, 0x1.c47750470193bp-609, 0.0, 0x1.226751b140bd2p-347,
     0x1.cf018efe409ap-266, 0.0, 0x1.ee7533f41d363p-629, 0.0, 0.0, 0.0,
     0x1.23ef05048685ap-384, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76d1a1b269976p-982,
     0x1.d6f46df692c4fp-741, 0x1.a945bcf9fc6a4p-152, 0.0, 0x1.a678755159815p-465, 0.0,
     0.0, 0x1.cd5a494af9a04p-135, 0x1.79b6170855052p-693, 0x1.ff2c9877ebab4p-545, 0.0,
     0x1.0f7706c1caceep-749, 0x1.0a6f334f5a35ep-977, 0.0, 0x1.e9fba8c96b44ap-51,
     0x1.d919087398532p-840, 0x1.33489ef3c7d57p-702, 0.0, 0.0, 0.0,
     0x1.8d4630eda69bap-917, 0.0, 0x1.39803b5367d35p-350, 0.0, 0.0,
     0x1.a4b42e6a892e6p-484, 0x1.36d49a94be074p-441, 0.0, 0x1.f9272786a7a79p-764,
     0x1.74797a5f74de8p-562, 0.0, 0x1.f857a3c94a9c7p-593, 0.0, 0x1.4559ebab41efep-605,
     0.0, 0.0, 0.0, 0.0, 0x1.9288f25d2bdb5p-476, 0x1.e6e54437fad89p-601,
     0x1.e711a36e1a678p-763, 0x1.dfb9270305ac2p-34, 0x1.c5b290675d6e6p-725,
     0x1.def0c0239b73ap-663, 0.0, 0x1.359eb2a93b32ap-473, 0x1.be090819bb755p-510,
     0x1.edfe0a4541965p-947, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffce143b86db6p-739,
     0x1.f4abb899d2d0ep-293, 0x1.9a042d86f63e2p-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ead5030a4535p-95, 0.0, 0x1.dc81d235e9552p-93, 0.0, 0.0,
     0x1.ab79bfc219b45p-545, 0x1.43130e87d2879p-913, 0x1.dc950f8755f2fp-257, 0.0, 0.0,
     0x1.dc20af2f3c99cp-716, 0.0, 0.0, 0.0, 0x1.639a6c88ca34cp-12,
     0x1.1ff91b315f46ap-85, 0x1.a9559fb43ae0dp-803, 0.0, 0x1.f12dd4a5ad7d9p-447,
     0x1.0a28d2838f535p-760, 0.0, 0.0, 0x1.629f83f12eb19p-653, 0x1.035b3336501a7p-64,
     0x1.9c589dc648786p-571, 0.0, 0.0, 0x1.ce068147ed37dp-254, 0x1.cd161205d9972p-62,
     0.0, 0x1.bce00d3bd48b1p-886, 0.0, 0.0, 0.0, 0x1.12e7c7c870749p-401, 0.0, 0.0,
     0x1.30e8e163dd0bfp-787, 0.0, 0.0, 0.0, 0.0, 0x1.94b769a195487p-139,
     0x1.e63180d6327c1p-282, 0x1.93a0c4f206dap-553, 0x1.261bf4792b3e4p-57,
     0x1.6ab81dfc6fc11p-229, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0f97b7920d5ep-857, 0.0, 0x1.1adda1e7df41dp-936, 0x1.a4d82062f1642p-150,
     0x1.556860925bb04p-645, 0.0, 0x1.5848cb340d5ffp-471, 0.0, 0.0,
     0x1.7fe9fb1a59a0ep-797, 0.0, 0.0, 0x1.501060a6aed4dp-59, 0.0, 0.0, 0.0,
     0x1.8710b2021a2p-395, 0.0, 0x1.a0be9dde5f759p-964, 0.0, 0.0, 0x1p0,
     0x1.0d2bb6df27a56p-969, 0x1.ecd8e41f2440ep-440, 0x1.77ac32d0f73ccp-606, 0.0,
     0x1.a0dc5817b8213p-321, 0x1.199b9448a3e22p-145, 0.0, 0.0, 0x1.99a3b3d97e333p-297,
     0.0, 0.0, 0x1.73642786c63d3p-247, 0.0, 0x1.eb18d1fac2d4fp-202,
     0x1.0a2efee7b1bedp-284, 0x1.dbde966c9c7c9p-486, 0.0, 0.0, 0x1.fc84ecda7cbdfp-266,
     0.0, 0x1.c80bba4106ee2p-794, 0x1.6b0d596955a83p-852, 0x1.a7bdd8b2247d4p-150,
     0x1.b2d8bfc5865cbp-46, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be1dff987a849p-830, 0.0,
     0.0, 0.0, 0x1.96270187b571p-525, 0x1.b0801817cf324p-418, 0.0, 0.0,
     0x1.5ec980fd32606p-333, 0.0, 0.0, 0x1.18d6d0fec2786p-944, 0.0, 0.0, 0.0,
     0x1.b87a52d42e22p-906, 0.0, 0x1.03ccf71a0c6c5p-933, 0.0, 0.0, 0.0,
     0x1.6440ead546f66p-203, 0.0, 0.0, 0x1.fdf527bc0a62cp-272, 0x1.ee66fb6c6324ap-995,
     0.0, 0x1.bbdf544fb8fcfp-464, 0x1.68b4c78e90efap-656, 0x1.470a2f74d11a8p-89,
     0x1.0256e3b7baf7p-598, 0x1.9b156b53c3f84p-419, 0.0, 0x1.78bd5be7e9bcbp-297,
     0x1.7472513233018p-948, 0.0, 0.0, 0x1.9b8b6cdd2bd08p-747, 0x1.55cadff773f87p-209,
     0x1.c7e7e89ad12abp-874, 0.0, 0x1.830dbe747cc6ap-886, 0x1.fe76296e7c489p-579,
     0x1.f64b75aedf9b5p-798, 0x1.7756e293b57cp-157, 0x1.a861fb468d34cp-445,
     0x1.24515ce545d64p-293, 0.0, 0.0, 0.0, 0x1.d77cd8f66c6f3p-645,
     0x1.fca20a6b2af01p-53, 0x1.07ed7ade05b27p-596, 0.0, 0x1.9eb585b397745p-736,
     0x1.5efc25471b177p-302, 0x1.82b55ce579f94p-403, 0.0, 0.0, 0.0,
     0x1.a046251e9d0dcp-844, 0x1.51c09e68c46bdp-1004, 0x1.a251a3c402858p-248,
     0x1.4fb88abcbe93bp-981, 0.0, 0x1.4052121abd986p-348, 0.0, 0x1.f5538a04ff8e7p-695,
     0x1.03b43dcdeb83cp-840, 0.0, 0.0, 0x1.5f09d982ec94ap-37, 0.0, 0.0,
     0x1.61c0fa93fab3cp-733, 0.0, 0.0, 0.0, 0.0, 0x1.749b6cacfd537p-541,
     0x1.a9dbe32c08c5cp-843, 0x1.f903221f608ffp-1005, 0x1.52cc59f1693f3p-432,
     0x1.8f80bbfc58fc3p-182, 0x1.365e21cc65998p-807, 0x1.8e3834c42080fp-367,
     0x1.e0725ce42e3ep-980, 0x1.7a19bae9de649p-186, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c5d8ba4ad108p-187, 0x1.63fc1b25a7d42p-292, 0x1.7e2a960b63492p-486,
     0x1.1ee25a3cdd9e6p-256, 0x1.86dbc20e02b82p-770, 0.0, 0x1.d29e48e39a331p-1014,
     0.0, 0x1.b4d56abc71b96p-69, 0.0, 0x1.1b580c9c15712p-117, 0x1.d05d2cf79d2d2p-142,
     0x1.8033174b1e081p-1, 0x1.76e3b9963eaa9p-918, 0x1.5f7384076bfcdp-289,
     0x1.60bbd2b627d4fp-871, 0x1.741d35729a94fp-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84311c2dc8b84p-939, 0.0, 0x1.8dc404a0d74ccp-1002, 0x1.e71fe05c9dab1p-891,
     0x1.0eb2d39ef4642p-519, 0x1.150433d019f3p-867, 0.0, 0.0, 0.0,
     0x1.d9c77a71beee4p-285, 0x1.93b54b886d8dbp-216, 0x1.85251409ab99p-988,
     0x1.7cd5e757747e7p-33, 0x1.b7469cbfb00dep-887, 0.0, 0.0, 0x1.7324b280461cep-615,
     0.0, 0x1.4748504c4320ap-216, 0x1.411d02ac7fd9ap-832, 0.0, 0.0, 0.0, 0.0,
     0x1.8b46acebb0302p-844, 0.0, 0x1.59e49a446c68fp-371, 0x1.f60820262e2c8p-758, 0.0,
     0.0, 0x1.c72b5eae52dd3p-394, 0x1.612c5ae7899c5p-824, 0.0, 0x1.536aff22d141fp-800,
     0.0, 0.0, 0x1.41f255e11fb5dp-823, 0x1.d3b87f41a432fp-493, 0x1.f711d326c82f4p-355,
     0x1.58b1a77a2de1dp-517, 0x1.f3af130aa3ad5p-26, 0x1.64a57a4f69b66p-937, 0.0, 0.0,
     0x1.fbd57d01b0672p-598, 0.0, 0.0, 0x1.0c2c6cf677224p-685, 0.0,
     0x1.1f85281b37984p-290, 0x1.dd7117f6937e4p-254, 0x1.bae782455983dp-545,
     0x1.0f77903e176b3p-777, 0.0, 0x1.e49d8656c14d7p-174, 0x1.9226972117487p-890, 0.0,
     0x1.f1614742557cap-187, 0x1.51c3bff42de7bp-248, 0.0, 0x1.698ce1be4f484p-657,
     0x1.d3c1db466c6c9p-249, 0x1.8995db120d3fbp-9, 0x1.aa9dcf9417147p-477,
     0x1.760aed55e7aa7p-554, 0x1.eeca21745e1fbp-173, 0.0, 0x1.de947d6322f59p-946, 0.0,
     0x1.5e5ebe4a16ab6p-659, 0x1.c4b0604d8fae5p-191, 0.0, 0x1.b75fed7d6721p-521,
     0x1.a14aa84a497a6p-604, 0.0, 0.0, 0x1.979a4acf15363p-431, 0.0,
     0x1.edb8097589a24p-749, 0x1.01ab97c11244p-889, 0x1.6ceb1b627274ap-391,
     0x1.e9eee1a7577c5p-269, 0.0, 0.0, 0.0, 0x1.f05e613f205b9p-504,
     0x1.6323c7c13392fp-115, 0.0, 0x1.2036f8d607f1ep-512, 0x1.f921bd116a472p-884,
     0x1.57781e54128a6p-797, 0.0, 0.0, 0x1.29afa9e394a54p-364, 0.0, 0.0,
     0x1.05e340578a7f7p-679, 0.0, 0x1.708a00c2319cap-517, 0.0, 0.0, 0.0,
     0x1.fcfec539f2e5cp-418, 0.0, 0.0, 0x1.15d8c4206c53ap-721, 0x1.314cd5f55f46bp-965,
     0x1.84a35c767878dp-98, 0.0, 0x1.f63311738bf85p-617, 0x1.5c9c7af562b42p-172, 0.0,
     0x1.c4b406a2d2b73p-721, 0.0, 0x1.9f95db612705fp-587, 0x1.19275e470661cp-113, 0.0,
     0.0, 0.0, 0.0, 0x1.a673503ed1a0ep-539, 0.0, 0.0, 0.0, 0x1.ef7e600fdfbf5p-317,
     0.0, 0x1.893af3a611653p-329, 0x1.2d983fd5b3bfbp-911, 0x1.104e7818137a8p-516,
     0x1.e1d1e7148b8c8p-833, 0.0, 0x1.b27683b3ffbdp-494, 0.0, 0.0,
     0x1.08254ecf8961cp-389, 0.0, 0x1.968804fcfe5a4p-904, 0x1.77150cba7430dp-517, 0.0,
     0.0, 0.0, 0.0, 0x1.c87cbdfeec0f5p-135, 0x1.bef92fa3a2abdp-993, 0.0, 0.0,
     0x1.c2dc942d15011p-242, 0x1.fbc847b7a5d48p-376, 0x1.4019bcc11a2eap-410, 0.0, 0.0,
     0.0, 0.0, 0x1.e995563360452p-352, 0x1.bf0009eb13634p-670, 0.0,
     0x1.0c794db34aa7ep-74, 0.0, 0x1.14b22d1a0b4bep-467, 0x1.1b23ebc602cf1p-483, 0.0,
     0x1.c3203e1ffa342p-210, 0.0, 0.0, 0x1.7519e06d09aeap-359, 0x1.80e819c457c64p-435,
     0.0, 0x1.65fc5ca03b983p-288, 0.0, 0.0, 0x1.0386b6047180ap-96, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1f3cd6509a141p-272, 0x1.4ca3361430a9bp-900, 0x1.dd9eb2d2a6bffp-400,
     0x1.6481a0ffee609p-173, 0.0, 0x1.89c4659819c14p-616, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.496a360aaeff4p-956, 0.0, 0x1.39ad19738f806p-679, 0x1.b6db5edd8b53cp-897,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24cae1cc9a1e8p-77, 0.0, 0x1.0fa03c3827172p-804, 0.0,
     0x1.1baa23db3bd11p-558, 0x1.be3756e3bb341p-661, 0.0, 0.0, 0x1.12c3885310b99p-431,
     0x1.3399dc78a841fp-812, 0x1.130bd468d80f5p-474, 0x1.28d9b7995b48ep-588,
     0x1.3a04a27937eb2p-885, 0x1.d6f62819981ffp-706, 0x1.4fa9e024f2acfp-719, 0.0, 0.0,
     0x1.7a359094b017fp-847, 0x1.1ddd2927ce64p-763, 0.0, 0.0, 0x1.4cab54b2c31a9p-213,
     0x1.f9fc7ac3cc84ep-951, 0x1.3af4361a2eeafp-139, 0.0, 0x1.e4f65d5f9e71ap-95, 0.0,
     0.0, 0x1.6db4226629e62p-690, 0x1.ea4aa563ab95fp-464, 0x1.537e419bab5c3p-856,
     0x1.97de5919e1f44p-606, 0.0, 0x1.ed59759cb4fdbp-83, 0x1.c303d0b7cbe94p-703, 0.0,
     0.0, 0x1.d81d32105a946p-843, 0.0, 0x1.7d73bee0a0d5fp-300, 0.0, 0.0, 0.0,
     0x1.b59a21c4ab9ddp-223, 0x1.1ad22fb71a274p-137, 0x1.0659078a449dbp-732, 0.0,
     0x1.0b1204f4f567p-462, 0x1.5d4d56ca7260ep-46, 0.0, 0x1.cb0824ecb4d38p-44,
     0x1.048f466b1974bp-42, 0.0, 0x1.63a7cb1c7bc33p-139, 0x1.98c4defb523ap-711, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0a4734c57c23cp-339, 0.0, 0.0, 0.0,
     0x1.b37126c83299ep-933, 0x1.1319eec54e797p-611, 0x1.f40a2abed237fp-295,
     0x1.4a1a7bc0d7b54p-476, 0x1.b8f39cf517dabp-9, 0x1.30ab1adab86b4p-242, 0.0,
     0x1.79f85d6511579p-438, 0.0, 0.0, 0.0, 0x1.00cd435c0c0cep-96, 0.0,
     0x1.3ec2af47be013p-216, 0x1.52274a344dc74p-56, 0x1.a45ccc4b30541p-369,
     0x1.526a7ef3bd165p-987, 0x1.4ed9267f46fa8p-847, 0x1.4151653d5b37ep-209,
     0x1.4d6c90a2e59b7p-367, 0x1.9f8a6a49d4bfap-216, 0.0, 0.0, 0x1.b5e2712e44944p-70,
     0x1.9ee4e760d2159p-875, 0.0, 0.0, 0x1.916debdbbe835p-578, 0x1.997b39968120ep-618,
     0.0, 0.0, 0.0, 0x1.61e487ea0e267p-601, 0x1.428ba4d6ee2e3p-968,
     0x1.b46ec8f0a9658p-279, 0x1.57f59ffe799c4p-100, 0x1.aa4d4338b93afp-639,
     0x1.f7701eb09158ap-595, 0.0, 0.0, 0x1.bc38594803865p-709, 0.0, 0.0,
     0x1.28b3150dfb8cdp-571, 0x1.1a5eff53f845ap-618, 0x1.10d2efd98a2aap-897,
     0x1.8783af9521085p-582, 0x1.162dca8588305p-18, 0.0, 0x1.b1db84d90f71ap-338, 0.0,
     0.0, 0x1.50892b0536959p-1009, 0.0, 0x1.f980023281532p-953,
     0x1.6354d4d43ede9p-801, 0x1.61cb3fd940d33p-530, 0.0, 0x1.79783bcd81b03p-452, 0.0,
     0x1.aeeb14a2759c9p-943, 0x1.2114d2b556a81p-221, 0.0, 0x1.b9f91aa577ebdp-167,
     0x1.e82115c740945p-31, 0x1.1d6f75c6eea37p-489, 0x1.3d6feaf32bf0fp-922,
     0x1.23c826e50533cp-374, 0.0, 0x1.c849f195ef081p-240, 0.0, 0x1.bf2fdd6b2086fp-105,
     0.0, 0.0, 0.0, 0.0, 0x1.bd5b0c2d4caf4p-70, 0.0, 0.0, 0x1.1d646b4e66024p-777,
     0x1.639c9830578bp-782, 0x1.fa5c681dedaffp-271, 0.0, 0.0, 0x1.1e25b1c1e2002p-823,
     0.0, 0.0, 0x1.cbf42aa8d622bp-95, 0x1.47d0458300f04p-687, 0.0, 0.0,
     0x1.30685f78dc63fp-742, 0.0, 0x1.c6bbe21322d13p-873, 0x1.a1cb2a60041a1p-771, 0.0,
     0x1.6ee9f7b6dd19p-761, 0.0, 0.0, 0x1.385e7ccd78df2p-908, 0x1.88642ad50602ap-289,
     0.0, 0x1.aeca376d257f6p-392, 0.0, 0x1.a20388c4180f4p-889, 0.0, 0.0,
     0x1.ccaec77da23f9p-15, 0.0, 0x1.12dc95e190371p-688, 0x1.92f16f2c9870cp-567,
     0x1.742c239038454p-538, 0.0, 0x1.754980a5e6decp-100, 0x1.b9bb49f5671ebp-711,
     0x1.ca2287cad217bp-422, 0x1.fdd6a3384d661p-401, 0.0, 0.0, 0x1.16fc849635668p-936,
     0.0, 0.0, 0x1.ccd5da0a3f92ep-627, 0x1.1093ed9719771p-777, 0.0,
     0x1.5c00cd4c3ab6ap-12, 0.0, 0x1.43634b22518c8p-664, 0x1.d7e041949d5c2p-959, 0.0,
     0.0, 0.0, 0.0, 0x1.ba346bc5b7417p-378, 0x1.d88e47f7194d4p-755, 0.0, 0.0, 0.0,
     0x1.2441a2f6e5043p-292, 0x1.7e45ef80f80e3p-300, 0.0, 0x1.8e3da53ba36c7p-25, 0.0,
     0x1.de7c1bd256157p-794, 0x1.0c637b90bba54p-470, 0.0, 0x1.58f37b518467dp-323,
     0x1.25422dda04d32p-529, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a1746d3cd4965p-929, 0.0, 0x1.000b8b035d74fp-893, 0x1.cb66383d01ff2p-684,
     0x1.41bb530e47503p-884, 0x1.29f28277a9b2p-542, 0x1.0b666204a05b5p-225, 0.0,
     0x1.c8757ea0f1aaap-723, 0x1.ab43215786afbp-664, 0.0, 0.0, 0.0,
     0x1.1c97ca8d5afc8p-845, 0x1.7f1b306ace066p-213, 0.0, 0x1.f5b8cd47a2824p-1010,
     0.0, 0.0, 0x1.5888b8fa2585cp-99, 0.0, 0x1.8dd15413ade51p-276,
     0x1.53b390935a1b3p-100, 0.0, 0.0, 0.0, 0.0, 0x1.378ee813cf20dp-944,
     0x1.db7c6095f2d4cp-184, 0.0, 0x1.286b6e3bb1989p-752, 0.0, 0x1.c1348a85e1013p-784,
     0x1.32949ea8b17fap-987, 0x1.a5976c5eddba9p-114, 0x1.9915d5f9ed9cep-909, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7e73cda1d3afap-1018, 0.0, 0.0, 0x1.5543fa12f24a1p-790,
     0x1.1ad84245a48a6p-705, 0.0, 0.0, 0.0, 0x1.a2fe7338dca45p-436, 0.0, 0.0,
     0x1.b4f42c4020c66p-469, 0.0, 0x1.04526740236cap-634, 0.0, 0x1.b016931d9f0f4p-515,
     0x1.cf290b49a16bfp-1007, 0x1.745be87317ebep-496, 0.0, 0x1.978b8bde33d54p-287,
     0.0, 0.0, 0x1.e21358c22d1cap-631, 0.0, 0.0, 0x1.1c355c1413f5fp-589,
     0x1.13e5ee58cf87ap-392, 0.0, 0x1.5fc221628db44p-694, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1e24452f398bap-964, 0x1.4e37e3f243387p-904, 0x1.f58ad480fe3f8p-653, 0.0,
     0x1.f4d3ac4ec1d7ep-179, 0x1.fb8efcda69d68p-144, 0.0, 0.0, 0x1.51f8df082b169p-957,
     0.0, 0.0, 0x1.6cf9d596f293cp-288, 0x1.c886ae8493e2p-633, 0x1.a620e5712a82bp-526,
     0.0, 0x1.3b3e384f1576ap-427, 0.0, 0x1.d921fd1ab16f5p-695, 0x1.b6063a6ead7bp-237,
     0x1.b226ea4d62633p-483, 0x1.5a5c4e549b809p-129, 0.0, 0.0, 0.0, 0.0,
     0x1.e9331d4314ceep-20, 0.0, 0.0, 0x1.caea905a592aap-335, 0.0,
     0x1.4811fb3dc3a6p-464, 0.0, 0x1.3c2c26ca7ae77p-137, 0x1.0296d6ee34c76p-532, 0.0,
     0x1.648862c8d330ap-471, 0.0, 0.0, 0x1.79be35d186a7ap-998, 0x1.c8ee2b2b330e3p-362,
     0x1.5018011db4b58p-229
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
            tmp1 = Sleef_log2d1_u35purecfma(tmp0);
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
    printf("Sleef_log2d1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
