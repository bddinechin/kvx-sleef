/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_atan.c --function atan --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.4440ac1178a54p-556, 0.0, 0.0, 0x1.9eff96a369212p-120,
     0x1.eb19e7cac3c06p-259, 0x1.91b0c0f8121a3p-958, 0x1.f856e89869cffp-785,
     0x1.6e11d4b9ed8ap-519, 0x1.1b6201306c52dp-972, 0x1.d6c77732f8ed1p-963,
     0x1.ea68131a98ea1p-802, 0x1.461b939ca713cp-804, 0x1.1bf2ef12b5687p-509, 0.0,
     0x1.69877d3072ab2p-146, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0619a50810a08p-550, 0.0,
     0.0, 0x1.8eac966bb90e4p-568, 0.0, 0.0, 0.0, 0x1.50bc5283738b8p-727,
     0x1.aa700b0f9071dp-396, 0x1.0d70ff0606709p-912, 0.0, 0x1.7c1762e7f52fep-846, 0.0,
     0.0, 0x1.b1ceee8dca5ap-575, 0x1.778a98820e852p-556, 0.0, 0x1.4a7eb33afb36ep-523,
     0.0, 0.0, 0x1.237bbcfea6115p-315, 0.0, 0.0, 0x1.f44ec34d3cfaap-707,
     0x1.f50dde75c108dp-376, 0.0, 0.0, 0x1.d7070e6f2c8bap-769, 0x1.81805cea52711p-52,
     0.0, 0x1.d3027e1b7c843p-132, 0.0, 0.0, 0.0, 0x1.12d6eb08d094p-449,
     0x1.5a2ac1a6a8c71p-649, 0x1.fb51adac29e98p-625, 0x1.959c774bc6b36p-557,
     0x1.3034b3cd0f65p-536, 0x1.7e9da2d376b41p-308, 0x1.2b1a257614004p-180,
     0x1.fcbc6242bc4e1p-545, 0x1.29492625ade13p-972, 0x1.e9137caedb83ep-686, 0.0, 0.0,
     0.0, 0x1.b0098460dc69fp-154, 0.0, 0.0, 0x1.28a1d6be131bp-61,
     0x1.b624f611f4293p-727, 0.0, 0x1.e6f93cb3adc29p-433, 0x1.e533f24cc688cp-645, 0.0,
     0.0, 0x1.e20c358559b89p-437, 0x1.4091d91416ce4p-844, 0x1.6c216d9534acdp-685, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3529138729784p-1004, 0x1.0ac5f6c26886p-819,
     0x1.10926ab89af6p-584, 0.0, 0.0, 0x1.e1ae4b93182f8p-290, 0.0, 0.0,
     0x1.5595ae8d200fcp-1004, 0x1.5af56a83a05dfp-28, 0x1.5e417ae7ac6e8p-245, 0.0, 0.0,
     0x1.641e5fca230f1p-1005, 0x1.f04613c6b629ap-485, 0x1.c48dece33c0f7p-56,
     0x1.161dbaa87563p-106, 0x1.f1b666098950fp-178, 0.0, 0.0, 0x1.9213041583e94p-512,
     0x1.560e0e958233p-682, 0.0, 0x1.e470386239322p-728, 0x1.ff9ae104b5e3cp-772, 0.0,
     0x1.1cd37e0a5cbe1p-397, 0x1.8eb849c0cfcdbp-362, 0x1.7c468b25e3922p-291,
     0x1.e51204d72c05p-686, 0x1.e0f3feb7ebe46p-1001, 0x1.dfc9892074a44p-409,
     0x1.cab6defbc6d9bp-25, 0x1.ac8f428b4e6c2p-604, 0x1.a0467a0e13badp-540, 0.0,
     0x1.913d9c8b4732ap-918, 0.0, 0x1.21f9a45dd2d69p-73, 0.0, 0x1.7f11589762f1cp-487,
     0x1.8356dc35209cfp-369, 0x1.3f180ad200bdbp-523, 0.0, 0x1.93475be5837a8p-670,
     0x1.f0381f18bf7d1p-80, 0x1.e92f0cb6b8171p-880, 0.0, 0x1.29c0d11c60b58p-811, 0.0,
     0x1.a67b9373ec745p-531, 0x1.1dae5418bf0cfp-74, 0x1.40b287fd711d2p-261, 0.0, 0.0,
     0x1.9031336eb4b21p-680, 0.0, 0x1.55ff4bd7e9fep-130, 0x1.b52aafb1d096dp-75,
     0x1.948b1c6bc25fap-129, 0.0, 0.0, 0.0, 0x1.40ab87ccf0aafp-21,
     0x1.369e6142cb061p-76, 0.0, 0x1.20695f5713f53p-1000, 0x1.93c2fd388339cp-541,
     0x1.a7c41b08dc02ep-10, 0x1.4e2180f8ce5cep-932, 0.0, 0.0, 0x1.1a974549d4146p-475,
     0.0, 0x1.78cf74218d76dp-953, 0x1.e9aecd42c4ce5p-676, 0.0, 0.0,
     0x1.7e199b874b397p-350, 0.0, 0x1.8d0c2309d2d8p-737, 0.0, 0.0, 0.0, 0.0,
     0x1.a9171cdf7a0acp-340, 0.0, 0.0, 0.0, 0.0, 0x1.fdf2bced75507p-604,
     0x1.4320b36397859p-947, 0.0, 0x1.b61414d5f878ep-1018, 0x1.808047bf5fffap-185,
     0.0, 0.0, 0.0, 0x1.e2eb92a769ab7p-355, 0.0, 0x1.c0ab0c3d44029p-580, 0.0,
     0x1.82bfc2c6af7c9p-369, 0.0, 0.0, 0x1.838fd9eb0cddcp-248, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.42d1e25a9f80ap-568, 0x1.4e8776e6de2acp-975, 0.0, 0.0, 0.0,
     0x1.73631961214b4p-792, 0x1.acd12fbec3898p-140, 0.0, 0x1.f04b429fc531dp-407, 0.0,
     0x1.6730f018a5a49p-146, 0.0, 0.0, 0x1.1f94f89e68dbcp-179, 0.0, 0.0, 0.0, 0.0,
     0x1.866366e5b2019p-598, 0.0, 0.0, 0.0, 0x1.704188c2d1bp-294,
     0x1.d552cf3029783p-793, 0.0, 0.0, 0x1.1262152b7a8ep-314, 0.0, 0.0, 0.0,
     0x1.b5f741eae5efcp-906, 0x1.7e5d205d4604ep-618, 0x1.42cfe2001fd41p-904,
     0x1.9e562806b35ep-811, 0x1.8e003ce887b6ap-503, 0.0, 0.0, 0x1.47432eb4e3836p-226,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ecfd155534199p-629, 0.0, 0.0,
     0x1.7cf41b637790dp-516, 0.0, 0.0, 0x1.a0900a1a0b9eap-872, 0x1.374b64f6b26fcp-845,
     0.0, 0x1.d44c463ba75b1p-495, 0x1.0baf9c362f8d6p-123, 0.0, 0x1.d9b50eed77a17p-186,
     0x1.fbaa54ce77dd5p-688, 0x1.8720ecaa5fb2fp-130, 0.0, 0x1.5b831ab6498fbp-437, 0.0,
     0x1.e677b142239e2p-821, 0.0, 0x1.4f5d5ff227633p-183, 0x1.cd7e318dd35b6p-293,
     0x1.7a65cffd6b659p-164, 0x1.8346e7db0bbb9p-425, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7288af9e4758p-760, 0.0, 0x1.651bf51206e5ep-577, 0x1.10fec6004c07p-147,
     0x1.9c5074fadea14p-42, 0.0, 0x1.10ec0bf2213ep-608, 0.0, 0.0, 0.0,
     0x1.270bc31a40efp-587, 0.0, 0x1.4d6f8800e1824p-355, 0.0, 0.0, 0.0, 0.0,
     0x1.7ce1b683cb5b2p-485, 0x1.f060dead98c3fp-721, 0.0, 0x1.b38e2a2496446p-437, 0.0,
     0x1.e5a359923419dp-779, 0x1.136c149b914eep-182, 0x1.71e01b8fc23bfp-732,
     0x1.2cf0a736840efp-684, 0x1.67fc6dd216cb6p-289, 0x1.44f004f902d9p-744,
     0x1.9a2bc4af81b63p-211, 0x1.87da52901ccbdp-632, 0.0, 0.0, 0x1.b787d8b024abdp-214,
     0x1.86cfce8a9f788p-539, 0x1.ce1ec7b7184ep-86, 0.0, 0x1.8300764fc72b4p-454, 0.0,
     0x1.6712947469aa5p-793, 0x1.acf1a049a33b4p-584, 0x1.7553bf61dd221p-638,
     0x1.cbf8075b3b5e5p-345, 0x1.46d4224c1949p-987, 0x1.7a0f5e3c03a9cp-930,
     0x1.7ca567d14c33dp-971, 0.0, 0x1.5f52ad52f1879p-447, 0x1.79c6d3fe2dc6bp-541, 0.0,
     0x1.94e6e0101e053p-227, 0x1.42c00ec16e4bfp-638, 0.0, 0x1.11170d362952ep-768,
     0x1.870380b769f69p-850, 0.0, 0.0, 0.0, 0x1.7d6cac6e2ce3ap-13,
     0x1.3d166f025fb65p-222, 0x1.9e79470518297p-834, 0x1.b99fd28145601p-205, 0.0,
     0x1.171bc6c58abbfp-762, 0x1.8725d1f5f451dp-861, 0x1.3c7a73ab73725p-89,
     0x1.78e23c448d6acp-458, 0x1.3ebf07e883018p-908, 0x1.e367ca99feac7p-39,
     0x1.715ac6275d29p-164, 0.0, 0x1.1b0ab56e12a53p-143, 0x1.a56b6dbc7028cp-180,
     0x1.57d8359dec39ep-438, 0x1.b0e1811e4bf85p-38, 0.0, 0.0, 0.0, 0.0,
     0x1.daf5c9c9ecd2ap-263, 0x1.08357a7461ba9p-846, 0.0, 0.0, 0.0,
     0x1.9a9489fd5b676p-174, 0x1.85a4b8d02e029p-817, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.662b52e41e20bp-220, 0x1.5dd4ea015d776p-568, 0x1.7d2c855f4a61ap-125, 0.0, 0.0,
     0x1.558fad491bcb1p-839, 0x1.4df5ee102bbdcp-959, 0.0, 0.0, 0x1.892bc61fcde78p-672,
     0x1.376d0e1e046aep-765, 0x1.0ed90c8e6d7c4p-693, 0.0, 0x1.f5ea9b222664fp-258,
     0x1.f6fc908f7795p-178, 0.0, 0.0, 0.0, 0x1.eb4507b42ab62p-639,
     0x1.e7ad4246b31b1p-788, 0x1.a93fc24a12393p-825, 0.0, 0.0, 0x1.ed1eae45bd917p-559,
     0.0, 0.0, 0x1.93dd9e7dc4a0fp-618, 0.0, 0.0, 0.0, 0x1.ea37a5544abe6p-404,
     0x1.ae5600d609d44p-156, 0x1.27ac218a7d24bp-56, 0.0, 0.0, 0x1.edcd7162b2ac3p-133,
     0x1.5c8e399fa0ee2p-223, 0.0, 0.0, 0.0, 0.0, 0x1.1d47bb3c79aaap-425, 0.0, 0.0,
     0x1.fcee03f5ef5f5p-21, 0x1.b6a8c9476893dp-285, 0.0, 0.0, 0x1.286319111514cp-661,
     0.0, 0.0, 0x1.25949749de81bp-929, 0x1.5ba91ffa9c26p-79, 0x1.b4387a996c5cfp-1010,
     0x1.b2c77cd8ee592p-178, 0x1.24067bd8a56cp-12, 0.0, 0.0, 0x1.453f9ffe1eeb5p-587,
     0.0, 0x1.95d604daa2a81p-990, 0.0, 0x1.4a56960416e2p-382, 0.0,
     0x1.75bd402dfc829p-12, 0x1.f7ed4bec57f42p-746, 0.0, 0x1.a3e6d037e7eb3p-824,
     0x1.ee868e981435ap-487, 0.0, 0x1.00899f221b9cbp-857, 0x1.6e0f6fd313192p-346,
     0x1.33c6cdc3525dp-134, 0.0, 0.0, 0x1.969d5f4bb4c0fp-667, 0x1.ce18d28fe211ap-511,
     0.0, 0x1.3489ba4a027b3p-286, 0x1.b4cac03ef3a71p-951, 0x1.51e79caf4abf5p-426, 0.0,
     0.0, 0x1.ea08b22bd8333p-166, 0.0, 0.0, 0x1.ac607ec50872dp-408,
     0x1.3ceaf8e59f511p-221, 0x1.b6ad031a8b7cp-187, 0.0, 0.0, 0x1.d4d3556fdfa16p-990,
     0.0, 0x1.3f239636d0963p-788, 0x1.389cb3d0205f7p-832, 0.0, 0x1.9183f5223e04fp-707,
     0.0, 0x1.3b6339cad33dbp-552, 0.0, 0x1.dc1916b32e9fp-472, 0x1.cab773d225bbap-307,
     0x1.dcc95f7a7cf23p-991, 0.0, 0.0, 0.0, 0x1.f3ef9ccc119d4p-848, 0.0,
     0x1.f406102447d07p-475, 0.0, 0.0, 0x1.f322306a97222p-217, 0x1.fa27df8182483p-110,
     0.0, 0.0, 0x1.f380b81e4587ep-983, 0.0, 0x1.a16f87853a04fp-608, 0.0, 0.0, 0.0,
     0x1.0bb1b435b8238p-379, 0.0, 0.0, 0.0, 0x1.60933585d9ef8p-593, 0.0,
     0x1.c2136b506021bp-599, 0x1.97fe886139aaep-574, 0x1.8bf738a4ec0fcp-774,
     0x1.13cb290e3a578p-668, 0.0, 0.0, 0.0, 0.0, 0x1.318c4266c92b6p-360,
     0x1.58e3238341617p-720, 0x1.a8028f5798356p-573, 0.0, 0x1.1d13cb435bfe8p-582, 0.0,
     0x1.7815c0838e819p-653, 0.0, 0.0, 0.0, 0x1.f436ea76da98fp-836,
     0x1.c37decec4ea99p-399, 0.0, 0.0, 0x1.4430719e817bfp-871, 0.0, 0.0,
     0x1.da2d0f7e0f315p-299, 0x1.3e1138c27d127p-764, 0.0, 0x1.c9d325ceef8a9p-895,
     0x1.0aca71df18b48p-74, 0x1.95741ca60a63bp-173, 0x1.65733916e042ep-701, 0.0,
     0x1.3b5d52268e877p-766, 0.0, 0x1.3ff790640a16fp-180, 0x1.e4fcef4321635p-394,
     0x1.acb9039631988p-75, 0.0, 0.0, 0x1.e18717b3de5c6p-812, 0.0, 0.0,
     0x1.0031984e1fa14p-720, 0x1.1487cd33a6a6ap-467, 0.0, 0x1.653790f14696ep-284,
     0x1.c42045268cfb3p-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0a851e86808cp-52,
     0x1.5148f99c0671dp-974, 0x1.892db68eebac9p-737, 0.0, 0x1.365f3b55390ddp-448,
     0x1.8ffa2f273a5bcp-858, 0x1.319e807636191p-253, 0x1.1a4eca775eb8p-552, 0.0,
     0x1.3a875342b0c0fp-6, 0.0, 0x1.8b37d325f9d6p-115, 0.0, 0x1.23c2ca6818f5bp-370,
     0.0, 0x1.cbbe4e00afa42p-204, 0.0, 0.0, 0x1.d4c99ebac8955p-38,
     0x1.ae6c6a40ccdd3p-836, 0x1.01a5bbb4d967ep-261, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cf188cc77cb49p-556, 0.0, 0.0, 0.0, 0x1.fe05e0736c327p-300, 0.0,
     0x1.ab69d89f1a3d4p-812, 0.0, 0.0, 0.0, 0.0, 0x1.03e37cd0ca251p-178, 0.0,
     0x1.7069eb1f02759p-815, 0.0, 0.0, 0x1.91cf9df4ecc69p-300, 0x1.020a5dfad2c19p-872,
     0.0, 0x1.e7a91681af7ffp-783, 0x1.59bddef863cc1p-454, 0x1.7db71580c712cp-275,
     0x1.7a4eb5cad1731p-412, 0x1.cd57bbc6e90b2p-610, 0x1.7865e8e1a894p-522, 0.0,
     0x1.ad2179bdd74f4p-23, 0x1.f659209e6b4abp-73, 0.0, 0.0, 0x1.f53570070973cp-832,
     0x1.dd2e902922a68p-323, 0x1.328ae5945012bp-527, 0x1.4c7ff76f9e341p-311,
     0x1.3efd1b6c82d71p-173, 0.0, 0x1.43d55e414ca41p-395, 0x1.f2e661c27f289p-231,
     0x1.251982fae74cfp-307, 0x1.8c82b29331d4fp-423, 0.0, 0x1.32e6d15c697b6p-334, 0.0,
     0x1.6c4aed27c8e7fp-129, 0x1.f5568c9700606p-972, 0x1.aeda6fc83307p-522, 0.0, 0.0,
     0x1.0ba2cb4883e78p-408, 0.0, 0.0, 0x1.927898d86de8p-567, 0.0,
     0x1.1fdac2aad47bap-993, 0.0, 0.0, 0.0, 0.0, 0x1.636f425a4d2b3p-601, 0.0, 0.0,
     0x1.87da96081df1ap-1014, 0.0, 0x1.bd8a78ba4e766p-521, 0.0,
     0x1.214cfc07780c5p-539, 0.0, 0x1.49bdbcd268e09p-671, 0x1.54bec648b1841p-873,
     0x1.bcb4cd68e902cp-855, 0.0, 0x1.45d87319ec506p-784, 0.0, 0.0, 0.0, 0.0,
     0x1.d70e8ba147cep-641, 0.0, 0x1.8045cd945c8e7p-502, 0x1.afa03422724e9p-256, 0.0,
     0x1.b1acbd8887906p-460, 0.0, 0x1.b5f8444575c87p-260, 0x1.d7cd5257fc5a7p-949,
     0x1.38fb79a6c972cp-958, 0.0, 0x1.77176bcaeb179p-480, 0x1.daadbe82954e4p-752,
     0x1.b43e9533be86cp-696, 0x1.97ccf5d704c51p-132, 0x1.25eaeb020b9cfp-652, 0.0,
     0x1.4f09fe9555fc3p-135, 0x1.5a3d26f31deep-992, 0.0, 0.0, 0.0,
     0x1.acf055a0583b1p-780, 0.0, 0x1.4e2d5d1bac42bp-628, 0.0, 0x1.141d2854587bbp-194,
     0.0, 0.0, 0.0, 0x1.47a370b4cdf24p-62, 0.0, 0x1.88b46089ce88dp-327,
     0x1.0517632ed50d9p-38, 0.0, 0.0, 0x1.bb155b5ae01dcp-777, 0x1.7f678726ef6c6p-902,
     0x1.f4cb0fb34bfddp-191, 0x1.5d9b1327cf216p-353, 0.0, 0x1.11e9e28a5d189p-511, 0.0,
     0.0, 0.0, 0x1.57497d7c1da3dp-737, 0.0, 0.0, 0x1.c3c743e6045dp-262,
     0x1.ecf623049875bp-543, 0x1.640024a21172p-846, 0.0, 0x1.c55966c9a06d6p-508, 0.0,
     0x1.336eea814931ap-399, 0x1.56a55b45a1d5fp-694, 0.0, 0x1.26a3906447d59p-374,
     0x1.8bf4c25912e9fp-760, 0x1.66504b32dbfcp-355, 0.0, 0.0, 0x1.ead7d8d6f4badp-979,
     0.0, 0.0, 0.0, 0x1.d5007c9c61351p-764, 0x1.51a7d0dc99015p-881,
     0x1.71b00f9d74f74p-767, 0x1.27f8debf85323p-426, 0.0, 0.0, 0.0, 0.0,
     0x1.621eaf08fa7ep-29, 0.0, 0.0, 0x1.1a0935ca264c7p-680, 0x1.42ee7ea7dc81cp-528,
     0.0, 0x1.8eec4e3405387p-924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ff215b02eee7p-242, 0.0, 0.0, 0x1.dcd53c5f2b66ap-311, 0x1.4006900371b9ep-215,
     0.0, 0.0, 0x1.e3cd5c9461912p-917, 0x1.5e051499a1cabp-461, 0x1.9f2c6a8f2657p-526,
     0.0, 0.0, 0x1.141b48f01ef36p-668, 0x1.a8726c1e0e7cp-617, 0x1.d30458bf440d2p-162,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.486f795d457dep-521, 0.0, 0x1.19feee2e6dc22p-610,
     0x1.e3dd6b46df258p-550, 0x1.237934ae82a12p-674, 0.0, 0x1.2d3cdb9c657cbp-58, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b39a3adf428f6p-120, 0.0, 0x1.876b2738208b4p-866, 0.0,
     0.0, 0x1.03602832f3492p-556, 0x1.2b32f67d5aa4dp-982, 0x1.fa4df3779aebep-724,
     0x1.6f7abf0804442p-740, 0.0, 0.0, 0x1.6e1dce7b62886p-400, 0.0,
     0x1.a8bd7c71ef79dp-928, 0x1.0f3681f3c747ep-1003, 0.0, 0.0, 0.0,
     0x1.67caac3efc3c1p-302, 0.0, 0.0, 0.0, 0x1.d90a093e2e8p-161,
     0x1.79f76a190471ap-686, 0.0, 0x1.130819ea41a0ep-528, 0.0, 0.0, 0.0, 0.0,
     0x1.1a2e81d5a33cbp-282, 0x1.254b2d5564782p-663, 0x1.427b433f7dd8fp-190, 0.0, 0.0,
     0.0, 0x1.c31f537f4b6bdp-548, 0x1.3e02b405187fbp-519, 0x1.42fd618907108p-650, 0.0,
     0x1.e08001288f9c1p-43, 0x1.e2cbd32e11306p-860, 0x1.e3f2e1b20d099p-370, 0.0, 0.0,
     0x1.0c5d87153d6abp-118, 0x1.7d168f17830ccp-727, 0.0, 0.0, 0.0,
     0x1.0ac2f1dcbc9fcp-883, 0x1.bd473f9db7a4cp-799, 0.0, 0x1.722dcc7bc9414p-778,
     0x1.8ca5fef8af107p-859, 0x1.f23566976e774p-289, 0x1.c9a5ba3f17444p-786,
     0x1.3e82cadddc6cap-966, 0.0, 0.0, 0x1.47f32c537071fp-355, 0x1.5a4f968f8aeb6p-138,
     0.0, 0x1.912217dfb508ep-432, 0x1.627f96e24d807p-336, 0x1.ef6fff8006c37p-566, 0.0,
     0x1.8c564b032c2e2p-736, 0x1.8260ed3633697p-490, 0.0, 0x1.b68a5f9d924fbp-855,
     0x1.5a4642e247bb3p-535, 0x1.fe6363b5d5908p-738, 0x1.3af08775fea31p-1012, 0.0,
     0.0, 0.0, 0x1.6e28d1d3b40c1p-802, 0.0, 0.0, 0x1.68415abef464p-997,
     0x1.af8a02901492p-533, 0.0, 0x1.4573c376a8ed4p-606, 0x1.cdefb19d95cb9p-586, 0.0,
     0.0, 0x1.17c01378114e5p-754, 0.0, 0.0, 0.0, 0x1.4b9051a460b84p-878,
     0x1.ff484b6671e56p-760, 0.0, 0x1.2b70186829872p-448, 0x1.6b14b878a7c6p-506, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d082e525a6c2p-616,
     0x1.0a53405427949p-397, 0x1.1a2fcf81c2fefp-445, 0.0, 0x1.ff7edabe8fe88p-845,
     0x1.0a999710b173p-192, 0.0, 0.0, 0x1.d56b5ccd1d7efp-229, 0.0,
     0x1.e79072dec8454p-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.955dbc8f7d0f4p-619,
     0x1.eb35fc7d346f8p-63, 0x1.9d459904dba34p-813, 0x1.0a51e69d75a2cp-120, 0.0,
     0x1.bedd5cfca710ep-254, 0x1.5b671363610e8p-883, 0x1.cc32098bb9f71p-234, 0.0, 0.0,
     0x1.b21b09d7133e6p-155, 0.0, 0x1.f9ce552c3c83fp-602, 0x1.d4a752cd056f8p-554,
     0x1.42f1039ed04a6p-517, 0x1.67281382b68d4p-371, 0.0, 0.0, 0x1.c0b94edd2db8ap-990,
     0.0, 0.0, 0.0, 0.0, 0x1.3c659ea6fa9ddp-865, 0x1.488b3e01979f3p-832, 0.0, 0.0,
     0.0, 0x1.e24669c493446p-774, 0.0, 0x1.a68d29492a748p-196, 0x1.1e1a240f0a7acp-673,
     0.0, 0x1.6f5f4388ee45ep-110, 0x1.5c9d23d0a50d7p-629, 0.0, 0x1.7ee98790253c8p-61,
     0x1.8fd9d696cdb72p-577, 0.0, 0.0, 0x1.5b905f3d29408p-62, 0.0, 0.0,
     0x1.c0d332f2e62e7p-404, 0x1.de3bca7d87eb1p-659, 0.0, 0.0, 0x1.68a75dd74c044p-815,
     0x1.502d197621a51p-720, 0x1.7d1a89854811ap-196, 0x1.26634861bbae6p-325, 0.0, 0.0,
     0.0, 0x1.5a0dc2522e1e7p-798, 0x1.6580d1b3576dp-459, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d54811a43853ap-31, 0x1.c6ea81d21dadap-395, 0.0, 0.0, 0.0,
     0x1.3f70ae489048bp-707, 0x1.c8915bb1cc7e8p-251, 0.0, 0x1.9af7ef0fc3eaep-189,
     0x1.85c5c4bc17279p-434, 0x1.ea4928d7c55f1p-634, 0.0, 0x1.f05bbedb5b34dp-36,
     0x1.ed8286995e0cep-881, 0.0, 0x1.4cc2050bc8651p-578, 0x1.3f28605700531p-818, 0.0,
     0.0, 0x1.8db5be01cd3c7p-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e59b78742048p-204,
     0x1.58a68be1b0935p-644, 0x1.6948f04f21939p-685, 0.0, 0x1.ee23a2f2604dap-502,
     0x1.2af4402728af3p-562, 0.0, 0.0, 0x1.8a876e3038fe9p-61, 0.0,
     0x1.40ad8157a07bbp-697, 0x1.a8ddb6ecd4202p-224, 0x1.6094b15a80d53p-116,
     0x1.7dad4f84731aep-763, 0.0, 0x1.76fd246290471p-937, 0.0, 0x1.57a1a09cf8127p-521,
     0x1.89a3612e69094p-28, 0.0, 0.0, 0x1.0f6ba4dd17338p-11, 0.0, 0.0,
     0x1.39c9396db5a4p-364, 0x1.28d3cf3ef12ecp-385, 0x1.9c9afcf27a5fp-705,
     0x1.95212039585f6p-381, 0x1.59c4634457be5p-835, 0x1.4bdb4342f8f65p-212, 0.0
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
            tmp1 = atan(tmp0);
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
    printf("atan %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("atan bench acc %la\n", global_bench_acc);
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
