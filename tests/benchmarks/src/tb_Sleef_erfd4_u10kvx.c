/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfd4_u10kvx.c --function Sleef_erfd4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0x1.46578b18cef49p-655, 0x1.fccbca071cb6fp-211, 0x1.cf1a10a13cb6ep-161,
     0x1.dffc76a8e022p-451, 0x1.1fe7cbd06afbfp-787, 0.0, 0x1.360517d74e62ap-900,
     0x1.f9665025fb892p-617, 0.0, 0.0, 0x1.c540ee7de6e6bp-373, 0.0,
     0x1.b09d5a1d806cap-359, 0x1.e84e404d29b75p-690, 0x1.b93ec986136bp-873,
     0x1.31a460dd91549p-341, 0.0, 0.0, 0x1.164067362fc29p-826, 0x1.e6634a9179cc5p-277,
     0.0, 0.0, 0.0, 0x1.01969305c251fp-439, 0x1.f19cf6de08098p-295, 0.0,
     0x1.f4ea6c86efc82p-666, 0x1.0cdd9807a6e2dp-280, 0.0, 0.0, 0x1.e73d725f6b221p-580,
     0.0, 0.0, 0x1.83b5527b3d80bp-113, 0x1.cfb62d359337cp-331, 0.0,
     0x1.c53bba5595ea9p-646, 0x1.70de5c04b780ep-487, 0x1.5c6b3b983b30dp-103, 0.0,
     0x1.18d71be8740bap-284, 0x1.fc644d311fc45p-969, 0.0, 0.0, 0x1.fa5b705822a8cp-663,
     0.0, 0x1.bbad2dcb70aa9p-386, 0x1.fc6cf4ac6459bp-253, 0x1.8f4d21ccfb82cp-721,
     0x1.bac8bdcb0680ap-265, 0x1.6392e102d2843p-903, 0x1.509293699325ap-931,
     0x1.06727792590cfp-309, 0x1.bb411b033cecfp-932, 0.0, 0x1.bcc29dfeb1053p-241,
     0x1.975be93b59b82p-453, 0.0, 0x1.2a633ef7febe2p-112, 0.0, 0x1.576445af5fe7ap-438,
     0.0, 0.0, 0.0, 0x1.631f0b31009bep-855, 0.0, 0x1.210b51e76bc87p-582,
     0x1.32b78f9efbcdfp-879, 0x1.8377790a7046cp-968, 0x1.955dd965c41fp-759,
     0x1.d855f12af4d99p-772, 0x1.6bf927b67de05p-1, 0x1.9d4c2383325ffp-518,
     0x1.957fe567204f1p-104, 0.0, 0.0, 0x1.e5432667b6a78p-824, 0.0, 0.0, 0.0,
     0x1.5b8f45b5f50eap-204, 0x1.a5a3f4bf5e371p-955, 0.0, 0x1.8b875ef01596cp-860,
     0x1.70865b52d5582p-730, 0.0, 0.0, 0x1.01cff21be1c88p-676, 0.0, 0.0, 0.0,
     0x1.9b51bfa437672p-907, 0x1.dd2c5cae37749p-552, 0x1.8b917a5d473fap-986,
     0x1.8faa3d9afdbfcp-625, 0x1.b45be895f254ep-570, 0.0, 0x1.e57b79fbc5109p-596,
     0x1.0d2e09987ddcap-794, 0.0, 0.0, 0.0, 0.0, 0x1.02c1ab00e60d5p-694, 0.0,
     0x1.7aff3e42b5176p-891, 0.0, 0.0, 0x1.0c7f759d8eabfp-534, 0x1.7a1eebc56a521p-954,
     0x1.c24d81c5f1806p-690, 0.0, 0.0, 0.0, 0.0, 0x1.787b8e83ffc4p-701, 0.0, 0.0,
     0x1.e4d7a71da6e32p-547, 0x1.2598159cec8cfp-329, 0x1.b67cb7092db3dp-876, 0.0, 0.0,
     0.0, 0x1.f76ccb3dfd1p-542, 0x1.20ec74488bfebp-129, 0.0, 0x1.f0383f31f621ap-565,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00ca7d1c66c29p-690, 0.0,
     0x1.33484f3fc71b7p-556, 0x1.2910830c53ddap-202, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65898c75436e8p-440, 0x1.461c749aec7f4p-465, 0x1.dad710f318f8ep-984, 0.0,
     0x1.a0580fc267963p-166, 0.0, 0x1.6c8dc11375c14p-693, 0x1.c56d9cc5ff5fap-790, 0.0,
     0.0, 0x1.97aab2b31245ap-813, 0.0, 0x1.15b258497c98ap-921, 0.0, 0.0, 0.0,
     0x1.42d5ad03d3999p-153, 0x1.6892c3e2a0e6dp-14, 0x1.802820d34f1fcp-696, 0.0, 0.0,
     0x1.33002b111c73dp-839, 0.0, 0x1.b04026c693514p-845, 0.0, 0x1.626b671d522c1p-793,
     0.0, 0x1.7247b2a45d7fp-707, 0x1.0c14a1a04b818p-525, 0.0, 0x1.ead0a57c7a2b6p-609,
     0.0, 0.0, 0x1.20f4dab99d1bdp-693, 0x1.9578fbca38521p-291, 0x1.088395095580fp-434,
     0x1.473872518663bp-273, 0x1.12b71fcc58544p-430, 0.0, 0.0, 0.0,
     0x1.b53ce405935b8p-520, 0.0, 0.0, 0x1.8e634819f9d47p-607, 0.0, 0.0,
     0x1.38a1dbc224199p-418, 0x1.82d7f1e277b61p-397, 0.0, 0.0, 0.0,
     0x1.8849baa8bc547p-739, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.131fe06b3c678p-396, 0.0,
     0.0, 0.0, 0x1.a977b1139594ep-696, 0x1.e5b70acc93342p-817, 0x1.998ba8d71e17fp-938,
     0.0, 0.0, 0x1.0f9b0f55b02c8p-535, 0x1.cedce73cbe765p-481, 0.0, 0.0,
     0x1.024baf10a5a9cp-650, 0.0, 0.0, 0.0, 0.0, 0x1.148bd0bfb5f21p-142,
     0x1.3812dcfc43062p-923, 0.0, 0.0, 0x1.4d0548048a302p-227, 0.0, 0.0, 0.0,
     0x1.b10f61a58f9bap-809, 0.0, 0x1.ed619eeab4518p-55, 0.0, 0.0, 0.0,
     0x1.0430b2c5f9908p-142, 0x1.131ca1787e048p-896, 0x1.d10c8aac13fcdp-40,
     0x1.7a7d4cfce9d98p-512, 0x1.2c8d4de3f3b7p-92, 0x1.e1ec8b3dd887ap-414,
     0x1.107e09986bf39p-872, 0x1.a6e0034fd49a1p-263, 0x1.2a8d76932df28p-778,
     0x1.656eed8417606p-101, 0.0, 0.0, 0.0, 0x1.311d9c55821aap-655,
     0x1.99074235387bep-762, 0.0, 0x1.0c4cf3e5c22ccp-649, 0.0, 0.0, 0.0, 0.0,
     0x1.ff941b1eb861fp-65, 0.0, 0x1.0447ec8e8e69dp-643, 0.0, 0.0, 0.0, 0.0,
     0x1.4d8249e52b0c2p-400, 0.0, 0.0, 0.0, 0x1.1b227c00dab37p-72, 0.0,
     0x1.ac96f603fdcfdp-85, 0.0, 0x1.9ef09be53f4f6p-397, 0.0, 0.0, 0.0, 0.0,
     0x1.1c2e834549d9bp-125, 0x1.979c0d5d3cb1bp-306, 0.0, 0x1.8587926f00664p-569,
     0x1.7a1acc38eb701p-842, 0x1.7303acfadff46p-252, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bfa03ed943742p-743, 0x1.a3f37bec0c318p-871, 0.0, 0x1.1665fa853990fp-123,
     0.0, 0.0, 0.0, 0x1.773e19c068e21p-860, 0x1.856af447240a5p-947,
     0x1.d22f826d160cp-364, 0x1.33ae31583abbep-411, 0.0, 0x1.db7f44aea2dfbp-535, 0.0,
     0.0, 0x1.6db83ad0a457dp-527, 0x1.2257b14198736p-303, 0.0, 0.0,
     0x1.72ebc492994bp-99, 0x1.e1559acd5cdp-876, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9dcd4a5827402p-341, 0.0, 0.0, 0x1.92f7e175929efp-779, 0.0, 0.0, 0.0,
     0x1.495240d6f80c9p-840, 0x1.999b09d7b06d4p-129, 0.0, 0.0, 0x1.efcd5656691fp-203,
     0.0, 0.0, 0.0, 0x1.cca6ded7182cbp-30, 0x1.cd63922dfb1dep-375, 0.0,
     0x1.fac6e624be21fp-722, 0.0, 0.0, 0x1.d7569dd3be489p-520, 0x1.c87bc94c90db3p-867,
     0.0, 0.0, 0.0, 0.0, 0x1.19805fb42bc82p-410, 0x1.fd300ef88ca3ep-362,
     0x1.b01c2f120b1b2p-300, 0.0, 0.0, 0x1.6d0f513a0896bp-332, 0x1.13776414aac8cp-254,
     0.0, 0x1.b610941a1650ap-681, 0.0, 0x1.35e359b373a1fp-173, 0x1.5ba4ba7c63c6fp-864,
     0x1.8d3e8bcd29ec6p-615, 0.0, 0x1.16ddc21e1d095p-554, 0.0, 0x1.a6c3f19593c2ap-687,
     0x1.18d22b1d19a82p-155, 0x1.be7ce1bf1449ep-477, 0x1.1596d17e6681dp-960,
     0x1.9735139176532p-273, 0x1.9358f096820c6p-318, 0x1.843e629adf81dp-410, 0.0, 0.0,
     0.0, 0x1.f4fdee24bc8f1p-302, 0x1.d81911713794bp-680, 0.0, 0.0, 0.0,
     0x1.644b9ccd76866p-70, 0x1.80eaf8edd470bp-70, 0x1.7b49674c2703bp-605, 0.0,
     0x1.3b7e07afbeba5p-872, 0.0, 0x1.d9dbc402b24a7p-612, 0.0, 0.0,
     0x1.81edb6fdb5f93p-300, 0.0, 0.0, 0.0, 0x1.6a0403f1870b7p-409,
     0x1.68584cb945672p-474, 0x1.087b0a96f793fp-534, 0.0, 0.0, 0x1.eed7a2aee4976p-560,
     0.0, 0x1.c1702fded7ddap-376, 0.0, 0x1.fd8deaed709eep-467, 0x1.676496cacee36p-163,
     0x1.0e825778bc97fp-377, 0.0, 0.0, 0.0, 0x1.96cff18a4fc6ap-357, 0.0, 0.0,
     0x1.bc050fac8733fp-349, 0.0, 0x1.ced2182e31aa3p-729, 0x1.6024976f2501p-574, 0.0,
     0x1.cee362845237ep-906, 0.0, 0x1.c5f00759ec12bp-511, 0.0, 0.0,
     0x1.7c13f1ce12793p-873, 0.0, 0.0, 0x1.ca3781970dc08p-632, 0.0,
     0x1.8419077cf5fd5p-421, 0.0, 0.0, 0.0, 0x1.b3effb31acc16p-462,
     0x1.73909251246eap-133, 0.0, 0.0, 0x1.e05ea1ccf49c6p-391, 0.0,
     0x1.2291194315127p-690, 0x1.28360e41b320dp-634, 0x1.31ba39e2fa1b3p-815,
     0x1.3d864ff4bf04dp-786, 0.0, 0x1.10a01c3bf94b4p-695, 0.0, 0.0, 0.0,
     0x1.044f43cbc9a52p-222, 0.0, 0x1.0b2a434a35267p-259, 0x1.3923a51e3db15p-145,
     0x1.a011dffce40b4p-511, 0x1.29ac1b43c0d49p-664, 0.0, 0.0, 0.0, 0.0,
     0x1.f85a58be47408p-76, 0.0, 0.0, 0x1.fca7a12ad60a3p-384, 0x1.115f2103bbef4p-36,
     0.0, 0.0, 0.0, 0.0, 0x1.8412eef7c9861p-678, 0.0, 0x1.cb661ba386755p-933,
     0x1.eaa23dff4bf68p-837, 0.0, 0x1.08e445f7a19ddp-143, 0x1.218094c0c11cp-436,
     0x1.028fb781f83c3p-1009, 0.0, 0x1.559799e44b133p-450, 0.0, 0.0, 0.0, 0.0,
     0x1.3fd646a4c96edp-533, 0.0, 0x1.a3bc38e59b3c6p-897, 0x1.2b550fad685dp-349,
     0x1.b79c6ecbe95e5p-77, 0x1.f08a3a0497e95p-436, 0.0, 0x1.7e5e495fb4749p-835,
     0x1.3a1425d87f3p-635, 0.0, 0x1.44b7d22f782d5p-147, 0.0, 0x1.7458aa7c9fb4bp-726,
     0.0, 0.0, 0x1.ccf35a95482ep-384, 0x1.0293dca2d846ep-266, 0.0,
     0x1.a90c3fb3001dp-687, 0x1.fb38a94515d5p-778, 0x1.2ff954113c4c7p-999, 0.0,
     0x1.1085fe6afaaaep-621, 0.0, 0.0, 0x1.320ce8f09f5f8p-867, 0.0,
     0x1.03c76f1da8f63p-602, 0x1.d64df55eb114ap-762, 0.0, 0.0, 0x1.c05210f8d4cd1p-758,
     0.0, 0x1.a7b58be9fab7p-529, 0.0, 0.0, 0.0, 0.0, 0x1.f4ad1576b584ap-794, 0.0,
     0x1.1be1aea07c157p-477, 0x1.803647f31bf9fp-356, 0.0, 0.0, 0.0,
     0x1.3ad939b06173cp-594, 0.0, 0.0, 0x1.016b1c5af5ffcp-641, 0x1.abb209cf30b6p-953,
     0.0, 0x1.a67918e739511p-824, 0.0, 0x1.db265e0d048cbp-410, 0x1.e6947e6804bc7p-208,
     0x1.d669ad2e30be5p-43, 0x1.489941af15a58p-101, 0x1.c8308d87b9c31p-104,
     0x1.64a4d611c8abcp-591, 0x1.8df4e5255f0ep-204, 0.0, 0.0, 0x1.1d3d07bb2250fp-996,
     0x1.64f9c60508b23p-73, 0x1.f1567fd9da522p-352, 0x1.dd87c3334989p-74,
     0x1.cf132ec0aec65p-1018, 0.0, 0x1.e22c267f4e9a7p-346, 0.0,
     0x1.6a3da523b45f4p-165, 0x1.3e80af514de0ep-849, 0x1.5317498e0508ep-531,
     0x1.b51514392b61dp-328, 0x1.ad127bb39314p-295, 0.0, 0.0, 0.0,
     0x1.3d3e22c4c87bep-901, 0x1.8b383a2ec18ecp-742, 0x1.5d44f37a47a88p-300,
     0x1.1521e1cc69644p-605, 0.0, 0x1.474d930350ec1p-313, 0x1.992f87c3e7f1cp-835, 0.0,
     0.0, 0.0, 0.0, 0x1.507fb13bac82p-1013, 0.0, 0.0, 0x1.d2a644dacf94dp-79,
     0x1.766ed1b297648p-116, 0x1.0006b199a504cp-55, 0.0, 0.0, 0.0, 0.0,
     0x1.7cebc874a882bp-15, 0.0, 0.0, 0x1.6906d41746879p-54, 0x1.950f1d5a4e77ap-608,
     0x1.6810c8ffeb7e1p-348, 0x1.dc66675ca56d3p-552, 0x1.da05edef6ba04p-76, 0.0,
     0x1.bbbec657406d5p-640, 0x1.23f801bf2b1e2p-116, 0x1.52b3eb0899c9ap-717,
     0x1.778a998807563p-873, 0x1.bb2395c420121p-139, 0x1.e35bf36bfc9c7p-531, 0.0, 0.0,
     0x1.97888b7b5d839p-627, 0x1.911d9439d8bf9p-764, 0x1.285bc14bab011p-486, 0.0, 0.0,
     0.0, 0x1.4db11821abef9p-994, 0.0, 0x1.35ea76a70497cp-163, 0.0, 0.0,
     0x1.a600529278735p-835, 0x1.576c9a6cab313p-136, 0.0, 0.0, 0.0,
     0x1.78b8e1b910c19p-999, 0.0, 0.0, 0x1.51f9f50807413p-109, 0x1.467ab651530c2p-880,
     0x1.75e0d22f1d256p-710, 0x1.df4742366d29cp-897, 0x1.835e4284412bcp-132,
     0x1.ea9a5d6446b29p-815, 0x1.e2d64ec9b7d48p-997, 0.0, 0x1.56753d5255555p-72, 0.0,
     0x1.7fc43c78c2f5cp-749, 0x1.5b7333254f837p-86, 0x1.9693618b69928p-316, 0.0, 0.0,
     0x1.7805e5b809d73p-711, 0.0, 0x1.566d8bee69de5p-350, 0x1.d015ca76d3828p-976, 0.0,
     0x1.76c203306265p-376, 0x1.3d9476b0d0d1cp-530, 0x1.f2087f01348e6p-776,
     0x1.a6325216d098dp-989, 0x1.b8dce8d75c4f9p-326, 0x1.9033b725d5ce2p-727,
     0x1.b8ccf683f5aa8p-475, 0.0, 0.0, 0x1.2ba708e8fd43fp-336, 0.0, 0.0, 0.0,
     0x1.ba1debbb4bfadp-990, 0.0, 0.0, 0.0, 0.0, 0x1.b0e4f881b415ap-472,
     0x1.ae9f646c2a0e6p-728, 0x1.23362eecd586p-705, 0.0, 0.0, 0x1.adfa453b380bfp-488,
     0.0, 0.0, 0.0, 0x1.8136f3243d9c3p-97, 0x1.ece539ff80f38p-657,
     0x1.1609bf41d7ff2p-36, 0x1.ec2932e0acb97p-563, 0x1.6065874ff8e0ap-691, 0.0,
     0x1.fbaf22e8922edp-401, 0x1.8f834c9add19dp-249, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.73455fec26f0ap-803, 0x1.4a1c268ebde09p-258, 0.0, 0x1.483b559583109p-968, 0.0,
     0x1.8f54d2c2fd062p-69, 0.0, 0x1.3d0c43e5be644p-928, 0x1.9de60ecd80d4bp-990,
     0x1.aee85b09e1df9p-594, 0.0, 0.0, 0.0, 0.0, 0x1.113ad3c0c162fp-857, 0.0, 0.0,
     0x1.80658ab4c1823p-251, 0x1.80387ef79fd68p-810, 0.0, 0x1.cbe2b3459468dp-322, 0.0,
     0x1.68e0c9a198d5ap-868, 0.0, 0x1.3239eb1717251p-405, 0.0, 0x1.91d2c78b961eap-760,
     0.0, 0.0, 0x1.b14c95ff80173p-547, 0x1.1df027b2e6d1ep-365, 0x1.eb4bd7aed731p-283,
     0x1.ad11e5c6d7b7bp-261, 0x1.17e596fa36a87p-29, 0x1.724299653d2b5p-108, 0.0, 0.0,
     0.0, 0x1.1b898024f5da2p-881, 0.0, 0x1.097cd87eba7cep-976, 0x1.7f10aa747c7c9p-25,
     0x1.a6c57de2a6eaep-376, 0.0, 0x1.c37616e08e659p-204, 0x1.642c47c74f94p-464, 0.0,
     0x1.dec5f55f3e70cp-479, 0x1.3e1d6e0311084p-38, 0.0, 0x1.ba5708d4e77c4p-28,
     0x1.7a627608f2bc3p-548, 0.0, 0x1.d5293f521d8d4p-956, 0x1.57ddec48fa476p-50,
     0x1.c278ca0df51ffp-548, 0x1.87d4159a13decp-85, 0.0, 0x1.520b511d45371p-240, 0.0,
     0.0, 0.0, 0x1.429d23b770558p-410, 0x1.c01026ee8438dp-279, 0x1.9cd00cc4f4ad5p-229,
     0.0, 0.0, 0x1.69db618f5e16ap-974, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc3c67d6d4943p-59, 0.0, 0x1.6c85f6ceaa71ep-1019, 0.0, 0x1.449af98cbe449p-750,
     0.0, 0x1.4300672a9a0afp-1009, 0x1.80e7f608f24e9p-998, 0.0,
     0x1.444861646c24ap-716, 0x1.c84c4da3ed306p-579, 0x1.8998917caf024p-634, 0.0,
     0x1.f99cb79e4f1eap-994, 0x1.c0bf03dc0b95ep-184, 0x1.20c6a8dc52722p-105,
     0x1.c5f6a9df79e91p-549, 0x1.02d033d82c6c6p-102, 0x1.4bf069e00b094p-235, 0.0, 0.0,
     0x1.4438b42504128p-16, 0.0, 0x1.74853f19aadbap-129, 0x1.89d3371f77a5ap-510,
     0x1.891e1e71f9f09p-558, 0.0, 0x1.bacffdd55e35bp-783, 0x1.c475f853c0984p-1016,
     0.0, 0x1.85f96a66d0b2ep-414, 0x1.c46151fdb51f4p-461, 0x1.5f2c5bf850179p-758, 0.0,
     0x1.b0cdfb8e9781dp-235, 0x1.1cfc9656c1a91p-720, 0.0, 0.0, 0.0,
     0x1.8089400193d7ap-981, 0x1.6adb0cce4cbdcp-738, 0.0, 0.0, 0x1.23ee638a831bdp-493,
     0.0, 0.0, 0.0, 0x1.051dc08a722e8p-566, 0.0, 0.0, 0x1.6cc044e379de3p-986, 0.0,
     0x1.66256674fc77cp-43, 0.0, 0.0, 0.0, 0x1.0397574323d38p-755,
     0x1.b330a5ee3a0a3p-568, 0x1.d35f48c2af4cp-274, 0.0, 0x1.6136e44d29eb5p-810, 0.0,
     0x1.162c32eb53689p-113, 0x1.900fb9133e7d8p-798, 0x1.88ea0d00550f6p-565,
     0x1.38460aaf86896p-954, 0.0, 0x1.d880f4b8e268ap-758, 0.0, 0x1.d4272f3b7d1a6p-550,
     0x1.4cbd0b2066ba5p-869, 0x1.8b80796ed83f6p-894, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd9eb13f47ae4p-255, 0x1.0a598eab027b4p-991, 0x1.d23009ea71791p-196,
     0x1.14fe08998a4b3p-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4166d7882b3fep-244, 0.0,
     0.0, 0.0, 0.0, 0x1.1f2a4db6f93dp-945, 0x1.314415bdfead9p-604, 0.0, 0.0,
     0x1.e030988860674p-846, 0x1.7ffbaf8ff6aa7p-1005, 0.0, 0x1.5fb855dc53eb4p-838,
     0x1.95fe0475f49c4p-317, 0x1.e90082a2b7eap-12, 0.0, 0.0, 0x1.a9a651b3d2d1ap-469,
     0.0, 0x1.c28bf4e97678dp-680, 0.0, 0.0, 0.0, 0x1.abb5079bf230ep-952, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9398cf6b82b55p-732, 0.0, 0.0, 0.0, 0.0,
     0x1.5717f9d09107dp-354, 0.0, 0x1.5118b190a28f2p-861, 0.0, 0.0,
     0x1.e7c54a00609eep-672, 0x1.e3446f717d3bdp-91, 0.0, 0.0, 0x1.331e2f847beb5p-712,
     0x1.ad5a259f4ff8bp-850, 0x1.0517f49c10b64p-1017, 0x1.70c0fb8ba01d7p-719,
     0x1.a9aa35d1de434p-254, 0x1.770cab832f6b4p-51, 0x1.b948ad21a89dcp-867, 0.0, 0.0,
     0.0, 0x1.bbc3c3ca7496p-478, 0.0, 0x1.fdf9b275cf0c2p-511, 0.0, 0.0, 0.0,
     0x1.f8d7355576215p-673, 0x1.adf296683c796p-697, 0.0, 0x1.52c1a2ad7cacbp-604, 0.0,
     0x1.9d7b4ee6e17e5p-829, 0x1.5dee6c8defdecp-876, 0.0, 0.0, 0.0, 0.0,
     0x1.91d8d6f3da8cap-138, 0.0, 0x1.6819fdc8c3db4p-222, 0.0, 0.0,
     0x1.ddef67b7b0badp-503, 0.0, 0.0, 0x1.04192a7f0cbf8p-376, 0x1.f0a4977b1f225p-372,
     0x1.0354f8f511892p-815, 0x1.8aa89fc1c3bb3p-532, 0.0, 0x1.64a63e906f4adp-26, 0.0,
     0x1.2841cabb044ep-327, 0x1.6bba465b20c79p-237, 0.0, 0x1.25baa797c13b4p-206,
     0x1.3777629a70868p-176, 0x1.160aba7b0ccc9p-271, 0.0, 0.0, 0x1.1233a7b8f82eep-315,
     0x1.3b0382a714bc4p-586, 0x1.8fded0d0b5b8cp-192, 0x1.5b9ae0835915bp-690, 0.0, 0.0,
     0.0, 0.0, 0x1.0af25b952339dp-68, 0.0, 0x1.acdd5bef90d0ap-840, 0.0,
     0x1.c12be75d19b9ap-385, 0x1.c8b9c9108591ep-270, 0.0, 0x1.5e05f79f56aefp-954,
     0x1.8afa37c2a0965p-148, 0.0, 0x1.2f5cba87acfd4p-989, 0x1.dffc64dc2dbf6p-15,
     0x1.158a848d64aa7p-55, 0.0, 0x1.32af9a36e6907p-678, 0x1.49ef38b23a985p-357,
     0x1.845b3d95cb5dap-528, 0.0, 0x1.7755c20ce987cp-790, 0.0, 0x1.77017f25213eep-921,
     0.0, 0x1.d579fc5ddbbcap-350, 0.0, 0x1.3799159c61b44p-153, 0.0, 0.0,
     0x1.c7f0383f7f033p-884, 0x1.3df2800b11555p-707, 0x1.01eef6ace53a4p-325,
     0x1.5908535cc1515p-764, 0.0, 0.0, 0x1.620acd5a6412bp-412, 0x1.2856dd50eb404p-412,
     0x1.a9759a1c3151bp-460, 0x1.ba9604b2fe847p-510, 0x1.bbb9806228d6bp-549,
     0x1.a5a9472bb1e54p-742, 0.0, 0.0, 0x1.b34477756d3d8p-144, 0.0, 0.0, 0.0,
     0x1.6dcae1f0df284p-684, 0x1.1e81d03b1cbeap-456, 0.0, 0.0, 0x1.192cd1f7f032dp-385,
     0x1.8c6231aef7fa1p-277, 0.0, 0.0, 0x1.e8fd556a91e31p-912, 0x1.a9750fce406c1p-767,
     0x1.88c4622712582p-433, 0.0, 0x1.36b052861f959p-775, 0.0, 0x1.deb7a18371836p-718,
     0.0, 0x1.609d4fb9fbba7p-512, 0x1.c27683115227p-255, 0.0, 0x1.d3652ed688c25p-724,
     0x1.5c1d2b063a9afp-601, 0x1.08efba1d7ca3p-397, 0x1.e4ebc37ffcf85p-991, 0.0,
     0x1.bdf61905e4ee3p-229, 0x1.af61c10c5ba72p-554, 0.0, 0x1.99763b4f83a4p-536, 0.0,
     0x1.261afc5cc5506p-329, 0.0, 0x1.750ebac23a6f2p-390
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
            tmp1 = Sleef_erfd4_u10kvx(tmp0);
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
    printf("Sleef_erfd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_erfd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
