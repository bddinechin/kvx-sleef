/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd2_u35kvx.c --function Sleef_logd2_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.59ed536291789p-308, 0x1.947a757213571p-648, 0x1.e8a9609c28565p-76,
     0x1.3ddf2409ef4b5p-408, 0x1.eca55fa45deaap-531, 0x1.46a833b3f8b3bp-1000,
     0x1.f9d0685c31f0cp-586, 0x1.ef01455b1d7a9p-430, 0x1.6c12b499abb3dp-921,
     0x1.d183eea943447p-509, 0.0, 0.0, 0.0, 0.0, 0x1.7a4e58541de1ep-990, 0.0, 0.0,
     0x1.ad8218096f433p-891, 0.0, 0.0, 0x1.27450cde67895p-632, 0.0,
     0x1.e76336a52b732p-951, 0x1.5a8ee10a79a11p-309, 0x1.bfc11c162f4a5p-798, 0.0, 0.0,
     0.0, 0.0, 0x1.73670ad93a218p-237, 0x1.575af4a1ac2d4p-1012, 0x1.5fec26ffad12dp-96,
     0x1.e80a7a69bf6fcp-882, 0.0, 0.0, 0.0, 0x1.b5c4bb32edd8p-829, 0.0, 0.0, 0.0,
     0x1.bc851a57403acp-753, 0.0, 0.0, 0x1.09b988cec243fp-916, 0.0,
     0x1.a87ab0b82e801p-333, 0.0, 0.0, 0x1.829687da3d6b2p-59, 0.0, 0.0,
     0x1.6c635d9fc7021p-912, 0x1.748b1a3f88312p-973, 0x1.4f4a9ea799933p-702,
     0x1.1d5bc263b6662p-171, 0.0, 0.0, 0.0, 0x1.d88a315b5af17p-582, 0.0,
     0x1.cb1374b76515dp-1004, 0x1.9373b163bc957p-972, 0x1.a0ac2ea0bd908p-596, 0.0,
     0x1.0e984c6e86996p-909, 0.0, 0.0, 0x1.685449cc44175p-34, 0.0,
     0x1.5ea44753fc068p-850, 0x1.168b54d75c804p-500, 0.0, 0.0, 0x1.91d4a88de36dp-476,
     0x1.7f2456520fd1ap-885, 0.0, 0x1.be8b274546872p-743, 0.0, 0.0,
     0x1.5b29478377b59p-614, 0.0, 0.0, 0.0, 0x1.07f96b6889447p-813, 0.0,
     0x1.04278e103d14dp-23, 0x1.cab2f1fb4d9f2p-157, 0x1.474a7adaae759p-823,
     0x1.001ef5e96f73dp-526, 0x1.c7abe2454a3dap-817, 0x1.799e95eca57e4p-108, 0.0,
     0x1.90cfaa84471a8p-51, 0x1.5e3dc45d90393p-879, 0.0, 0.0, 0x1.0caa22e16dfe4p-683,
     0.0, 0x1.98ac674eb9cf8p-204, 0.0, 0x1.dc2a396185ce9p-872, 0.0, 0.0,
     0x1.b909294cb7133p-26, 0.0, 0.0, 0x1p0, 0x1.4edbf46a9d48bp-335, 0.0,
     0x1.15efae68cd998p-669, 0x1.0eb3895550359p-727, 0.0, 0.0, 0x1.85d0c3c88a71p-80,
     0x1.700d91d32b746p-967, 0.0, 0.0, 0x1.647fbb4ab1b49p-801, 0x1.be0b8cb0f567cp-384,
     0x1.96274dd756a8fp-501, 0.0, 0.0, 0.0, 0x1.43ad91dcd6609p-261, 0.0, 0.0,
     0x1.34cb7e35182adp-651, 0.0, 0.0, 0.0, 0.0, 0x1.e912a5d21897ap-702, 0.0, 0.0,
     0.0, 0x1.77e139a7c99f3p-706, 0.0, 0x1.6e1ab278279b2p-408, 0x1.f48dbfee7170ap-772,
     0.0, 0x1.f5262233d7f69p-531, 0.0, 0.0, 0.0, 0.0, 0x1.a89ee3e3fbc89p-288,
     0x1.bb34f8d65972cp-212, 0.0, 0.0, 0x1.ffd6079992779p-199, 0x1.7ba61c8aa37bcp-692,
     0x1.060a2e11acde3p-204, 0.0, 0x1.38f18c2aab414p-884, 0x1.f96064c775cdap-911,
     0x1.2e2b3f7162a85p-863, 0x1.8a34f4e3d4ed2p-864, 0x1.3868596ce28dep-473,
     0x1.1860b58535fc8p-634, 0x1.9d39af0f8a2c7p-243, 0.0, 0x1.2f058d2c97f36p-545,
     0x1.1087438a81638p-581, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.745e507f812b7p-963, 0.0,
     0x1.19efda022c56bp-580, 0x1.d535adeb67cefp-261, 0x1.9b0665aaf913bp-717, 0.0, 0.0,
     0x1.33ec77f32b09dp-918, 0.0, 0x1.eeef853f59554p-570, 0.0, 0.0,
     0x1.b947108c41686p-207, 0x1.aa0d9b646f8b9p-153, 0.0, 0.0, 0x1.1cefba55a5133p-660,
     0x1.fee8c511b523ap-509, 0.0, 0.0, 0x1.cc9da7af1e872p-744, 0x1.3aa9c3e8e9829p-377,
     0x1.6472e3c12b209p-508, 0.0, 0.0, 0.0, 0x1.d27f0ed464273p-573, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3986db42b3944p-515, 0x1.f98517ee3dfc5p-671, 0.0, 0.0,
     0x1.276567ee5294cp-197, 0.0, 0x1.2f5ef67d97a0ep-880, 0.0, 0x1.b00c677a6d604p-242,
     0.0, 0x1.f8491fb8ed18fp-870, 0x1.278b37bb22124p-906, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7043cb4309e8dp-861, 0x1.e55a50358fac9p-190, 0.0, 0x1.d805fc4e228e4p-631, 0.0,
     0.0, 0x1.b91c81916feb3p-487, 0x1.ef2288bb1f3d9p-385, 0x1.9edfe04102a8bp-723, 0.0,
     0x1.3bbed88db4414p-849, 0x1.fb36a6a32578bp-7, 0x1.ed5e5c33a8666p-214,
     0x1.f5501399a765bp-57, 0x1.6800df24cc8ccp-698, 0.0, 0.0, 0.0,
     0x1.9d6715bea431ep-917, 0.0, 0.0, 0x1.024bb4cd4ca58p-666, 0x1.bf07a120a5973p-720,
     0.0, 0x1.f43a2ca376ee6p-376, 0.0, 0x1.99c060e094507p-944, 0x1.960e0d54ab03bp-13,
     0.0, 0.0, 0x1.4ce1e7ad5726dp-303, 0.0, 0.0, 0x1.a750ce17c59f9p-961, 0.0, 0.0,
     0x1.7e6261801a701p-883, 0.0, 0x1.1f08ca2825535p-622, 0.0, 0.0, 0.0,
     0x1.27c469b0f4b6cp-126, 0x1.7efd5b10e12a9p-704, 0x1.a3e6ec57cb45fp-880, 0.0,
     0x1.9a21bf20429fcp-946, 0.0, 0.0, 0.0, 0x1.5419a4df9cf4dp-845, 0.0, 0.0,
     0x1.19b7427330881p-609, 0x1.b4efff94c4c11p-322, 0.0, 0.0, 0x1.06b7ac0dde617p-505,
     0.0, 0x1.1c961dee37eadp-902, 0x1.a31e4100780dcp-690, 0.0, 0.0, 0.0,
     0x1.ff7a17fc2eac6p-610, 0.0, 0x1.b4f7516b7e7ep-188, 0.0, 0.0,
     0x1.424d86f13898dp-108, 0.0, 0.0, 0.0, 0.0, 0x1.b60e17094b208p-431, 0.0,
     0x1.6771128e8d5f1p-18, 0.0, 0.0, 0x1.4b42a3aaa5dep-456, 0.0, 0.0, 0.0,
     0x1.67e32385400dfp-686, 0.0, 0.0, 0x1.009583e7f071ap-104, 0x1.8d3eb1d2ce51dp-632,
     0.0, 0.0, 0x1.6ae6ace12ce3ep-195, 0.0, 0.0, 0x1.289cff72c27c3p-459, 0.0,
     0x1.db459e730f061p-631, 0.0, 0x1.5ebe78d76e3c9p-492, 0.0, 0.0, 0.0,
     0x1.085a54e06c21cp-166, 0x1.950ea19e64842p-72, 0x1.96420ec1d6181p-815,
     0x1.6feeb2033bf88p-98, 0x1.55f92e9862e0fp-997, 0.0, 0x1.8c78f866d0f8fp-712, 0.0,
     0.0, 0x1.1300f217eefa8p-225, 0.0, 0.0, 0x1.18cf1d1e40637p-93,
     0x1.eb012965b344p-645, 0.0, 0.0, 0x1.8525b59340824p-549, 0x1.a9af59767a537p-881,
     0.0, 0x1.b54c31e45ed32p-165, 0.0, 0.0, 0x1.f2fb9b602d73ep-92, 0.0,
     0x1.decb3416051bp-331, 0x1.beb3a0639c7a7p-225, 0x1.8c1bb7bb50a25p-938,
     0x1.31709ddd6d9c2p-736, 0x1.7d2d5fae26779p-44, 0.0, 0x1.e7761ad4a6331p-903, 0.0,
     0x1.c70467a745b92p-652, 0x1.e62e346f41538p-637, 0.0, 0.0, 0x1.50f6e1caedc43p-324,
     0x1.6acc0c72e0509p-383, 0x1.235dd33a37bc8p-28, 0x1.bad388f1ca6a1p-120, 0.0,
     0x1.300760513d66bp-468, 0x1.69d7b0aff5a3cp-708, 0x1.fccad879d9879p-807, 0.0, 0.0,
     0x1.44d9f1d1e1ce1p-808, 0.0, 0.0, 0.0, 0.0, 0x1.07de20a124a06p-995,
     0x1.6f37b6e1c04a7p-348, 0x1.1abdcdd97a4eep-600, 0x1.cb59efead32ddp-225, 0.0,
     0x1.d2bf0af1797f3p-820, 0.0, 0x1.61ac5b178c38bp-884, 0.0, 0x1.2e01a3a7b0f55p-619,
     0x1.6b8fe43b187ecp-152, 0.0, 0x1.e38ff8ef6394bp-911, 0x1.e4ec9dbede84ep-36,
     0x1.f85ba45904b39p-1003, 0.0, 0.0, 0.0, 0.0, 0x1.7ffead62c31bcp-995,
     0x1.0fc6b9458d088p-738, 0x1.648b3a4c55f94p-367, 0.0, 0.0, 0.0,
     0x1.e7629e000e711p-1005, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fcab5dfd24c41p-377,
     0.0, 0.0, 0x1.b70ec68e19fb4p-58, 0x1.10ff9e1a803c8p-124, 0.0,
     0x1.7dc2dd86ee185p-197, 0x1.e869976bddbbap-890, 0.0, 0.0, 0.0,
     0x1.745f31b3e2a4ep-273, 0x1.f54ba3b2e3098p-2, 0.0, 0.0, 0.0,
     0x1.1ffa813c6a14cp-477, 0x1.ede4c42cf6339p-311, 0.0, 0x1.2df5f83cb7db2p-899,
     0x1.d93ad98336dd5p-656, 0x1.8c9c83f3d2ccp-188, 0.0, 0.0, 0x1.6de8a1a7c45cep-448,
     0x1.d54f35c263981p-991, 0.0, 0.0, 0x1.edca452414799p-740, 0.0,
     0x1.8dbf10a89d266p-953, 0.0, 0x1.ae953a64e5f3p-700, 0.0, 0.0, 0.0,
     0x1.93147cf896458p-747, 0x1.52edd074309aap-349, 0.0, 0x1.ab4c3db4e1ec3p-664,
     0x1.84ff4a11aa7abp-151, 0x1.cecdee73d0b5p-419, 0.0, 0.0, 0x1.2457bce751139p-315,
     0x1.d801d374b60cbp-933, 0.0, 0x1.07e252cb95923p-926, 0x1.f04266a512d44p-855,
     0x1.b382c68642377p-27, 0.0, 0.0, 0.0, 0x1.28223699a6c2ep-573,
     0x1.565fcc7393d91p-56, 0x1.3f163cbe5d39p-168, 0.0, 0.0, 0x1.9d565ffed1e5bp-1007,
     0x1.e635c9bb54759p-128, 0.0, 0.0, 0x1.7fa8a7a9a5c9dp-962, 0x1.bee0d45d1278p-983,
     0.0, 0.0, 0.0, 0x1.f1ab9e30da23ep-302, 0x1.9c4f0d5911ab1p-814, 0.0,
     0x1.cfdd9a4e0c6e2p-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ffa086ba15a49p-756,
     0x1.cb3d30096b3cp-612, 0.0, 0x1.5368d92b0d78fp-290, 0x1.a0a5a894eba2bp-836,
     0x1.e0fe8c6b02124p-568, 0x1.74c82bdab71c9p-115, 0.0, 0x1.eac371a109065p-564,
     0x1.03ca6295bc68fp-81, 0.0, 0.0, 0x1.4d81223552a39p-284, 0x1.f8e795328fb76p-47,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.373c9db78f93cp-840, 0x1.301bf8f616d48p-684,
     0.0, 0.0, 0.0, 0x1.90cab7e1ed32cp-406, 0x1.90767e5fde337p-791,
     0x1.113550094996cp-177, 0x1.50ebaa0f83dc5p-552, 0.0, 0.0, 0.0, 0.0,
     0x1.555b0ca3d4d02p-139, 0x1.5506cbcb4a4b7p-104, 0.0, 0.0, 0.0,
     0x1.f39a296ae6e66p-258, 0x1.21b7c96d6bdacp-57, 0x1.ea1d5495f7e57p-234, 0.0, 0.0,
     0.0, 0.0, 0x1.9a857f5d28adep-832, 0.0, 0x1.83144ecc30bdcp-807, 0.0,
     0x1.e75114c001adap-306, 0.0, 0x1.726ebd0728e7ap-271, 0x1.861433bce8e3ep-71,
     0x1.b5b6f1a08a818p-468, 0x1.b56ad55f31bc3p-244, 0x1.d05f9e721cf22p-111,
     0x1.0578c01e7566bp-440, 0x1.be34dd2c3fc13p-108, 0x1.962fc043415ecp-689, 0.0,
     0x1.95ddf7092e589p-708, 0.0, 0.0, 0.0, 0x1.1e14b82bfe239p-11,
     0x1.58632ecd8b10ep-699, 0.0, 0x1.04b45b1907e68p-139, 0x1.e2cc77b2ce4efp-7,
     0x1.50cc77bca6801p-169, 0x1.8dd24c0e101e5p-235, 0.0, 0.0, 0x1.780d61b2a39d4p-740,
     0x1.a0de74c83b096p-234, 0x1.d982e21959e96p-591, 0x1.7fa52f4b89a1fp-331, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a2534a8cc17dcp-581, 0x1.a59e64a64b80dp-13,
     0x1.bda3f1b6ca9c3p-407, 0x1.149e818d19264p-432, 0.0, 0x1.951682cc1075dp-53, 0.0,
     0.0, 0x1.fb3f5d98141ffp-371, 0.0, 0x1.48cfb3aedf4edp-419, 0x1.0bc7259bf841bp-126,
     0x1.ddf754e4c6a4fp-451, 0.0, 0.0, 0x1.800558982a8fep-708, 0x1.91bee68e97366p-704,
     0.0, 0.0, 0x1.ae7794d4cc784p-565, 0x1.9b79257506631p-460, 0.0,
     0x1.f0bb5fc34a164p-570, 0x1.a64f3a375eeefp-509, 0x1.904c8dc588005p-342, 0.0, 0.0,
     0x1.7501f664444e5p-217, 0.0, 0x1.0fe59b8f51be3p-501, 0x1.a194a89ed396dp-465, 0.0,
     0.0, 0x1.5c6f5a2a1cdp-151, 0x1.5288a0fc7c379p-26, 0x1.f6904bc97323dp-431, 0.0,
     0x1.228cfc2d20869p-128, 0.0, 0.0, 0.0, 0x1.94defc5da23c2p-894,
     0x1.5df82db426fc5p-611, 0x1.60ecfb94bc528p-91, 0.0, 0x1.2287a243f392ap-395, 0.0,
     0.0, 0x1.eab4d335b9855p-608, 0.0, 0x1.d52002a629b5bp-221, 0.0,
     0x1.19a9c60d91c8ep-435, 0x1.93db74a31920cp-782, 0x1.e793b5bbd3607p-607,
     0x1.317b07c3a858p-534, 0x1.0ac9c041fa026p-537, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b623d6b7e07f4p-663, 0.0, 0.0, 0.0, 0x1.bb4af5890b77fp-705, 0.0,
     0.0, 0.0, 0.0, 0x1.bcf0129f3352bp-732, 0x1.4d0e36a695c24p-323, 0.0,
     0x1.ff59c3f7523cbp-103, 0.0, 0x1.51df88756bc62p-420, 0.0, 0.0,
     0x1.6747ba6953c8bp-753, 0x1.f16f4a5193d9cp-383, 0.0, 0x1.840050d395971p-327,
     0x1.e89d426d2cf8p-668, 0.0, 0x1.cbb0f0ba43d1bp-58, 0x1.b3d6212b2d75fp-909, 0.0,
     0.0, 0x1.3d3bc8788c84p-937, 0.0, 0.0, 0x1.44b26faefcb3cp-79, 0.0, 0.0, 0.0, 0.0,
     0x1.8d0f3f00b1babp-521, 0x1.56b151741f007p-856, 0x1.03b6ddb7f5f4dp-262,
     0x1.6a25c449043a2p-950, 0.0, 0.0, 0x1.be15c97efaf4ep-439, 0x1.e6a33248a0f93p-217,
     0x1.56ba6048497e6p-921, 0.0, 0.0, 0x1.4a1fd66299734p-428, 0.0,
     0x1.8d3c90cee7768p-333, 0x1.9d99a772f5be4p-910, 0x1.23bdb99835cc8p-267,
     0x1.e47dbf74c0965p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e17d747d33d9p-24,
     0x1.c26f823bbafacp-737, 0.0, 0.0, 0.0, 0x1.8597decabe39p-282, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.76d375dd78dd8p-514, 0x1.1fc53fa266b9bp-607,
     0x1.c01871c6eaa1p-662, 0x1.63ce3765a0dedp-612, 0x1.5176e858c23edp-984, 0.0,
     0x1.87af9d3e44715p-321, 0x1.9caf3d92b4909p-244, 0x1.201696a482af7p-235,
     0x1.4a6f11d527f45p-869, 0x1.32c582aec594fp-593, 0x1.f71872c4ef584p-828,
     0x1.f37525b2346c2p-545, 0.0, 0x1.132aeef07cef3p-480, 0x1.a42961cbf1be5p-323, 0.0,
     0x1.add06b2946759p-33, 0.0, 0.0, 0x1.57a072bf34d48p-555, 0.0, 0.0,
     0x1.6e8c5e2d3b398p-982, 0x1.b19cc5117144p-370, 0x1.0406a67f19338p-954,
     0x1.28b3827b7ee38p-339, 0.0, 0.0, 0x1.62d47000f8705p-721, 0.0, 0.0, 0.0,
     0x1.332a12316753ap-986, 0.0, 0x1.07b3794b3e1cap-417, 0x1.54894cfce87e2p-739,
     0x1.42db722633a8fp-512, 0.0, 0.0, 0x1.3c24f5f5f61e9p-396, 0.0, 0.0,
     0x1.be6a02e118ecp-24, 0x1.9439dcff8f283p-799, 0x1.d84cf650dc858p-949,
     0x1.19eed497d5475p-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d02f46b93be3p-568,
     0.0, 0x1.7e75d401b9b2cp-735, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3c2bd61da802p-18,
     0x1.71b9dfa5ba932p-750, 0.0, 0.0, 0x1.458f321732cbap-545, 0.0,
     0x1.751b780974758p-469, 0x1.a329457785c54p-504, 0.0, 0x1.49dbcb1c810f1p-582,
     0x1.da2e23d23ba0ep-34, 0x1.a9da7cea92d3bp-496, 0.0, 0x1.b53fce0a79f09p-298, 0.0,
     0.0, 0.0, 0x1.48edfef322a99p-1016, 0x1.f9630929783f8p-1013,
     0x1.faa2535118022p-152, 0.0, 0x1.82cc2e8b7da36p-592, 0.0, 0x1.1ce1543ee17fdp-850,
     0.0, 0.0, 0.0, 0x1.0072d2a75c967p-953, 0x1.38b1730de6cc2p-483, 0.0,
     0x1.5df53128c139ap-388, 0.0, 0.0, 0.0, 0x1.fb5f028c21d8dp-313, 0.0,
     0x1.39687e12ced8bp-778, 0x1.e414dca630e45p-368, 0.0, 0.0, 0x1.9cdbe41cb57p-608,
     0.0, 0x1.5e33c1d27f3fap-805, 0.0, 0.0, 0x1.06ac760c30f33p-585, 0.0,
     0x1.0a04dbccf6958p-576, 0x1.2a0c0779fdcbbp-888, 0x1.a85a75b5ac55dp-1015,
     0x1.66e0da0baf1ap-222, 0x1.cddc6a408afd9p-936, 0x1.e02ddf1a1f695p-12, 0.0, 0.0,
     0.0, 0x1.ff9b78e483034p-1007, 0x1.bbfba948d4954p-863, 0x1.1792b6bcc4969p-628,
     0.0, 0.0, 0x1.b5ee96d83f9acp-692, 0x1.5aa7185c6be41p-606, 0.0, 0.0, 0.0,
     0x1.66ea5c82133a1p-459, 0x1.dbf0400c5a724p-953, 0x1.af23b4c07eb32p-275,
     0x1.bd0f61f947022p-338, 0x1.68c3c0471ca46p-806, 0x1.b5b740e014d54p-774,
     0x1.9d43f622faafcp-903, 0x1.a537ec3dee525p-66, 0x1.a25bdc4269c4bp-639,
     0x1.af2478e7b0e07p-442, 0x1.47fff85158fd4p-42, 0.0, 0x1.7419419c31423p-566, 0.0,
     0x1.b162dd698be26p-323, 0x1.066eb33859d14p-874, 0.0, 0x1.76d9f3dea51b6p-627, 0.0,
     0.0, 0.0, 0x1.9d12ac6ae22bcp-559, 0.0, 0.0, 0.0, 0x1.0418e3d350926p-407,
     0x1.f3794163ada34p-231, 0x1.1c16e4786d21p-524, 0.0, 0.0, 0.0,
     0x1.2f8197936eb73p-852, 0.0, 0x1.fae34831172bep-517, 0x1.27b1dd1591351p-170,
     0x1.4cc7f5a52c90ep-369, 0.0, 0.0, 0.0, 0x1.f7e35ef334b5cp-105,
     0x1.9a7ab089b2829p-708, 0.0, 0x1.dadf9a0ae990ep-413, 0.0, 0x1.4e0584e69d904p-791,
     0.0, 0x1.206da283b777cp-4, 0.0, 0x1.9abd20a07f955p-86, 0.0, 0.0, 0.0,
     0x1.3d3c16d9e34eep-598, 0.0, 0.0, 0x1.608f88f82d3d6p-222, 0x1.469896dae6132p-506,
     0.0, 0x1.8dcde746ff0b6p-538, 0.0, 0.0, 0x1.c8411a2d3283fp-489, 0.0, 0.0, 0.0,
     0x1.f5d2285baa4cfp-479, 0.0, 0x1.f4ad2d37c75aap-829, 0.0, 0x1.26daec8e0323p-248,
     0.0, 0.0, 0x1.418674d6ab91ap-823, 0x1.1dc18452d97adp-364, 0.0,
     0x1.2f67301f21e9fp-852, 0.0, 0.0, 0.0, 0.0, 0x1.95ee5195de4d9p-889, 0.0, 0.0,
     0x1.24d5525713717p-733, 0x1.a4752a8944342p-899, 0x1.c7f8f24fd7068p-179, 0.0, 0.0,
     0x1.449e2eddb0f6dp-839, 0x1.b7be3bfb8eebap-282, 0.0, 0x1.fbc128f9ffad9p-597,
     0x1.1e52f5d198895p-963, 0.0, 0.0, 0x1.f2382bc9a5b56p-866, 0.0,
     0x1.dad983fa6cd41p-611, 0x1.c4702f4c6caaap-235, 0.0, 0.0, 0.0,
     0x1.80cc91014f3bfp-664, 0.0, 0x1.68bae7b11baf4p-786, 0x1.c290f90e9b0bp-107,
     0x1.838c0734daabp-368, 0x1.a7cbd3f90af7cp-602, 0x1.37585ef3f6042p-872, 0.0, 0.0,
     0x1.6272f4f534b8bp-655, 0.0, 0x1.a2f7abe7f25dap-616, 0.0, 0.0,
     0x1.178405a84a6e3p-452, 0.0, 0x1.07d9953558f6p-514, 0.0, 0x1.4626e7af41ad3p-446,
     0.0, 0x1.638cd40a4b09ap-551, 0.0, 0x1.d5c70187c1dd5p-548, 0x1.e85e2a531ea15p-117,
     0.0, 0.0, 0.0, 0x1.044f7576ef868p-123, 0.0, 0.0, 0x1.fde54896a4859p-102, 0.0,
     0x1.4d9c26d867f2ep-460, 0.0, 0.0, 0.0, 0x1.4fd0f38c1ddbbp-618,
     0x1.2c13cb64eb2d5p-347, 0x1.8cd920ce85e62p-303, 0x1.c21ff57e821e4p-691,
     0x1.6e22bc037b719p-281, 0x1.50515eb28bdb3p-293, 0x1.db02ab79c458dp-434,
     0x1.0e647b9802f5dp-67, 0.0, 0.0, 0x1.70903744ddce4p-673, 0.0, 0.0,
     0x1.7585b559a17e1p-426, 0.0, 0x1.11de7c7d58505p-487, 0x1.4e4508912ab9p-7,
     0x1.48ad61c726c73p-639, 0.0, 0x1.b71bdf5cd866ap-551, 0.0, 0x1.ffb08d3d881c1p-527,
     0x1.d3a90c9db8534p-421, 0.0, 0x1.b511b867862e8p-817, 0x1.9b1f3339c681fp-862, 0.0,
     0x1.630f2f663d43bp-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ffc963b15c03p-813,
     0x1.9aad05591ba8p-49, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_logd2_u35kvx(tmp0);
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
    printf("Sleef_logd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_logd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
