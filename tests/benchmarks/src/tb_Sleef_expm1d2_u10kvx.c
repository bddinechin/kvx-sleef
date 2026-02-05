/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1d2_u10kvx.c --function Sleef_expm1d2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.171f13c3ed0c2p-105, 0.0, 0.0, 0.0, 0x1.f8d886ac50b24p-450, 0.0,
     0x1.a7e659fb28f52p-6, 0x1.6437af704adb7p-929, 0x1.b16f92aa6f2bbp-301,
     0x1.9b1cd9d0984e4p-157, 0.0, 0.0, 0.0, 0x1.58924aab7fe75p-309,
     0x1.ca8bcd4c903a9p-934, 0x1.7ded8b2329edep-132, 0x1.7d64c6c6c7871p-1014, 0.0,
     0x1.c07732b3491aap-296, 0.0, 0x1.11e0c0b320ac7p-368, 0x1.e7c1d945f6016p-40,
     0x1.d047f875e724ap-449, 0x1.a2285865e6603p-440, 0x1.b5ea03824f9dbp-806, 0.0,
     0x1.7de7cb700e30dp-49, 0x1.ef98baf16b239p-357, 0.0, 0.0, 0.0,
     0x1.5dfe3863375a4p-25, 0.0, 0.0, 0x1.b466186569213p-80, 0.0, 0.0, 0.0,
     0x1.c4bbebce2022fp-864, 0x1.eafa3d9c8995bp-775, 0x1.52fcb03b3a431p-131,
     0x1.b84477b1f5839p-380, 0.0, 0x1.53caff1342135p-483, 0.0, 0.0, 0.0,
     0x1.7934531eea036p-734, 0x1.b4a9d64a0388p-306, 0x1.3558e051ec999p-671,
     0x1.4a65ba435d99dp-918, 0.0, 0x1.f3ac342b591a3p-268, 0x1.29a8c31b2213ap-103, 0.0,
     0.0, 0x1.fe4e81af2a9e2p-883, 0.0, 0.0, 0x1.b93aca655fc55p-700,
     0x1.0c2ab0db54138p-509, 0x1.270d030bdecc8p-346, 0x1.9e3b71a5e59dep-219,
     0x1.c2884e00b7615p-596, 0x1.95abe9c0f07edp-414, 0x1.40293ce3846eap-699,
     0x1.8e24013d0981ep-912, 0x1.b6ff861689012p-920, 0x1.38f5e63612bb5p-605, 0.0,
     0x1.6b6ee246f7049p-546, 0.0, 0x1.45760eeca3975p-725, 0x1.dec771e74da4ep-529,
     0x1.794049adcd6b4p-82, 0.0, 0.0, 0x1.527b6951c0ad5p-355, 0x1.efb6d4cf8403dp-867,
     0x1.30267e64ba6adp-941, 0x1.ca248d4cf11b9p-376, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.80b8a97b04a32p-501, 0x1.8481a9aa83388p-6, 0.0,
     0x1.5f4e9600e8716p-490, 0x1.08e95c54ca5c1p-423, 0.0, 0x1.28d2c05dce7a8p-352, 0.0,
     0.0, 0x1.a29fb1dcfc745p-557, 0x1.4285a48819e74p-428, 0x1.20ec7eebd0506p-878, 0.0,
     0.0, 0.0, 0.0, 0x1.b64ea319ac5dfp-80, 0x1.f87a0b67bb5f7p-659, 0.0, 0.0,
     0x1.c6a14d2a0615ap-222, 0x1.4193e04b85deep-190, 0.0, 0x1.b8dec5390276dp-840,
     0x1.c85e340e0a2c2p-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed72a2679a3aep-906, 0.0, 0.0, 0x1.0e2bff570843ep-928, 0x1.7e0a3c7cff4a2p-392,
     0x1.4870b600bb544p-68, 0x1.e6ff52820e606p-653, 0x1.bc0cdb041e6d4p-418, 0.0,
     0x1.174caf27a1d95p-485, 0x1.7be345601bb39p-212, 0.0, 0x1.63abb17101a01p-703,
     0x1.6319142fead33p-355, 0x1.5913f2879f6a9p-685, 0.0, 0x1.a0f074ee062b9p-127, 0.0,
     0.0, 0.0, 0x1.9581f5beea2bep-979, 0.0, 0x1.4d378ab5f3f4cp-492, 0.0, 0.0, 0.0,
     0x1.533e404a9fa36p-505, 0x1.ca60d25a99d2p-562, 0.0, 0.0, 0x1.32f9271709a65p-748,
     0x1.957149ec841dcp-269, 0.0, 0x1.3af5de28274d8p-897, 0x1.ff59d75fab6b1p-83, 0.0,
     0x1.552d3bb566ffcp-762, 0.0, 0x1.4df854cc51a1ap-1016, 0.0,
     0x1.df3e55ed37f41p-132, 0.0, 0x1.99db756205bb9p-842, 0x1.9b223e9fbcca3p-341, 0.0,
     0.0, 0x1.ac8f8d21c70fp-768, 0x1.87cd148806eedp-901, 0x1.ac4b58c60c09dp-585, 0.0,
     0x1.30590e6ca2271p-447, 0x1.06afac1dffcdp-284, 0x1.7c7f7e0f1c324p-759, 0.0, 0.0,
     0.0, 0x1.e95b11e66af44p-315, 0.0, 0x1.8a2b08e13305bp-462, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ab8d1bd9cfbb9p-35, 0.0, 0x1.00737040ea9cdp-644, 0.0,
     0x1.5b8da51e22f6cp-419, 0x1.c26dd62fc9cccp-969, 0x1.9702ee7d5ed93p-644, 0.0,
     0x1.f52c53b410deep-150, 0.0, 0x1.aef33b8de0c4dp-425, 0x1.1e4b8ca6a6af1p-575, 0.0,
     0x1.6481a79774e8ap-535, 0.0, 0x1.404ee4e908881p-919, 0x1.998b002fb417bp-57, 0.0,
     0x1.526882bf60737p-509, 0.0, 0.0, 0.0, 0x1.fd1c0770af68dp-405, 0.0,
     0x1.43d5024b580dp-135, 0.0, 0x1.3b0ec6a2d9ce2p-969, 0x1.9bd0ce9c03566p-505,
     0x1.17201e656553fp-520, 0x1.630b019bb47b8p-690, 0x1.ef6d5a9125e73p-200, 0.0, 0.0,
     0.0, 0.0, 0x1.83bf9e69b0c3cp-527, 0x1.06906cea38212p-840, 0.0, 0.0,
     0x1.dec5a28a5abe6p-553, 0x1.7c430247f3deap-151, 0.0, 0.0, 0x1.9c4ab6329e53p-882,
     0x1.dd6819358bd83p-388, 0x1.9e5e17460b5d3p-820, 0.0, 0x1.99d1ba932185fp-449,
     0x1.8a4620a83aaf1p-786, 0.0, 0.0, 0.0, 0x1.3a66d207469b6p-355, 0.0,
     0x1.4e7e0d7ee1a64p-97, 0.0, 0.0, 0.0, 0.0, 0x1.72937474ba014p-238,
     0x1.190476e099865p-58, 0.0, 0.0, 0x1.9854a16167bf1p-67, 0.0, 0.0,
     0x1.1e932c0766029p-876, 0x1.04afad34d2281p-386, 0x1.93c141b9f4e6dp-724,
     0x1.526918636348bp-612, 0x1.65419f69f998fp-124, 0x1.6054e575344f3p-811,
     0x1.cbb51511154f8p-394, 0x1.e16614ada1936p-785, 0.0, 0x1.6d02aabd9926fp-878,
     0x1.d98dbf1358dc9p-636, 0x1.2d57247627568p-186, 0x1.d3232eb8bbf49p-43,
     0x1.9a07b50f3d926p-42, 0.0, 0x1.c1ddd59fa4de1p-590, 0x1.e137fa5cd667dp-252,
     0x1.f34a2f885d08ep-89, 0x1.55b91c3d0315ap-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87f8cb10471d4p-831, 0.0, 0x1.380929893429ap-62, 0x1.d3962c57bc78fp-657, 0.0,
     0x1.23121bb7240e1p-563, 0.0, 0.0, 0.0, 0x1.7d8f497e5b866p-288,
     0x1.1cb9dd582c6d7p-955, 0x1.af30adecd83d7p-339, 0x1.1920846459e8ap-108, 0.0,
     0x1.c2bc73eaf10bfp-592, 0x1.be634393f10e8p-50, 0.0, 0x1.230d5a34e422fp-880, 0.0,
     0x1.b653174f79d93p-768, 0x1.0ff8ceacacee3p-250, 0.0, 0x1.cede3c85752efp-1005,
     0x1.118c1b8e5b898p-492, 0x1.c51a32b1d5e82p-213, 0x1.faceec2c45e9dp-552,
     0x1.14167550700c2p-450, 0.0, 0.0, 0.0, 0x1.35064572bfb55p-103, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e39f689ba86fap-130, 0.0, 0.0, 0x1.399b995c214b4p-195,
     0x1.f6db6462b3892p-162, 0.0, 0.0, 0x1.d1334a3cb80b6p-637, 0.0,
     0x1.7cf89bf60ca12p-605, 0.0, 0x1.a1e5af78304b2p-1002, 0x1.4cb439c76c827p-534,
     0x1.7270f97541a14p-709, 0x1.86fe07bb27eb4p-707, 0x1.4248012922e9dp-574, 0.0,
     0x1.4a1934bd0826p-333, 0x1.4a312eb801ceap-503, 0.0, 0.0, 0.0,
     0x1.ed0a6ae8c1d3dp-251, 0x1.755d77106e08ep-144, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2cb91167f281fp-770, 0x1.2a9075617b17p-953, 0x1.81a0f8a79bd55p-588, 0.0,
     0x1.7d52c6dc68b39p-258, 0x1.f9300ef97140cp-340, 0.0, 0.0,
     0x1.1525856b96f9bp-1017, 0.0, 0.0, 0x1.18267d707baedp-829,
     0x1.7ae82d59f7a71p-201, 0x1.0ae56aaed04c1p-650, 0x1.5d8145193507bp-263, 0.0,
     0x1.4654bd40998f7p-219, 0.0, 0.0, 0x1.0749a8be4e819p-850, 0.0,
     0x1.1fbf56bb40d67p-972, 0x1.6907d1b977be9p-849, 0x1.0c3529e29f572p-81, 0.0,
     0x1.191cca29ec1c5p-512, 0.0, 0x1.c08b7f60f7d69p-581, 0x1.f6a979297810ep-522, 0.0,
     0x1.7bd07a896c28p-488, 0.0, 0x1.626a3c538c284p-212, 0.0, 0x1.c56ead2736223p-657,
     0.0, 0x1.38cf9db3b010ep-289, 0x1.e3a4ab46d08ebp-930, 0x1.22dd50a2ed251p-136,
     0x1.0cb99bd61615dp-432, 0x1.2842cb24a2016p-494, 0x1.b40b8fc95198ep-149,
     0x1.17a702fd23ab5p-235, 0x1.0f2862753f1d9p-682, 0x1.882a59e3a9b94p-709,
     0x1.6d05ec981626fp-911, 0x1.5751649c7a294p-389, 0x1.d57677966965ep-741,
     0x1.e8b5f94bc881ap-183, 0x1.a298ca5512092p-19, 0x1.e7f58d6fcd05bp-888, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.00f54f1f37529p-184, 0.0, 0x1.400a088c2874fp-280, 0.0, 0.0,
     0x1.acf3f22921c73p-905, 0.0, 0x1.814e87c2545d4p-725, 0x1.be49185834577p-987,
     0x1.531612aa301bp-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b705ed4ee444p-505, 0.0, 0.0, 0.0, 0.0, 0x1.93ebfb73696b9p-432,
     0x1.5dbf0a5916bcap-110, 0.0, 0.0, 0x1.edea1975ff55bp-358, 0.0, 0.0,
     0x1.7f624732381eep-139, 0.0, 0.0, 0x1.a06ab0df368dfp-164, 0x1.b76b4623bd2b4p-116,
     0x1.e5bdf51d067cfp-79, 0x1.158c56452e6d3p-353, 0x1.856fdf0354588p-473, 0.0,
     0x1.881d8abaf57c9p-346, 0.0, 0.0, 0x1.a848892920068p-790, 0x1.123103df92cdep-860,
     0.0, 0x1.3b1d348cffe26p-921, 0x1.d70b478ac3f98p-11, 0.0, 0x1.bb5939627f562p-119,
     0.0, 0.0, 0x1.c06c714a3445p-381, 0x1.061d088b20488p-916, 0.0, 0.0, 0.0,
     0x1.b8d6dbd467a83p-383, 0.0, 0x1.647ed48f43395p-486, 0x1.1623ac8a7ac68p-741,
     0x1.5b37cfa947948p-212, 0.0, 0.0, 0x1.cabf025c5e039p-168, 0x1.d372b68a9206ep-269,
     0.0, 0x1.085a9150b2ddfp-651, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2256552de7008p-862,
     0.0, 0.0, 0x1.716cd43554696p-835, 0x1.cd9e9b880b627p-8, 0.0,
     0x1.9c6d33a0aee29p-641, 0x1.ba5697549bc76p-496, 0.0, 0.0, 0x1.dc9f3575598ecp-987,
     0x1.a29f8ebaadd55p-853, 0.0, 0x1.82e1ba04ca052p-794, 0.0, 0.0,
     0x1.6b90cc1536efep-795, 0.0, 0x1.f8edd772e3533p-541, 0x1.60821e2db99cbp-259, 0.0,
     0x1.23dfcdfefa722p-51, 0x1.561c19e85d7cdp-602, 0x1.464666121954bp-355,
     0x1.62bd8fa36d73dp-274, 0x1.bd3ccd3ff17eap-330, 0x1.751d0131f97c9p-778, 0.0,
     0x1.eb7f3290f7856p-266, 0.0, 0x1.7ab22a56115b7p-704, 0.0, 0.0, 0.0, 0.0,
     0x1.d14898d95307dp-704, 0x1.943f080974518p-739, 0x1.0dcdd13af6dfcp-457, 0.0, 0.0,
     0.0, 0.0, 0x1.17a64c2aba614p-419, 0x1.338a7a85fea0ap-794, 0x1p0, 0.0, 0.0,
     0x1.f31875591302dp-143, 0.0, 0x1.64c2aa719ac8cp-216, 0.0, 0x1.40f21ecfa7c92p-793,
     0x1.0cb335e075dc5p-282, 0x1.43b854e266f98p-207, 0x1.f7abf5ab8cd91p-875, 0.0,
     0x1.11be110174ac5p-986, 0.0, 0x1.0fc72cbe9e3aap-990, 0x1.35ffc28331955p-417, 0.0,
     0.0, 0x1.a5c48d80a039ep-5, 0x1.1cebbe70f6371p-451, 0.0, 0x1.5c4007d5ceea8p-400,
     0.0, 0.0, 0x1.c3576b5ba348ep-1004, 0.0, 0.0, 0.0, 0x1.04fa3e693e2a3p-323,
     0x1.ea8bcdad095f4p-191, 0x1.7c4f66f9f15f8p-254, 0x1.929728ef77483p-697,
     0x1.f1ff860b13335p-434, 0.0, 0.0, 0.0, 0.0, 0x1.8e72a534ec3c9p-922, 0.0,
     0x1.8cb35d0da5284p-889, 0.0, 0x1.d675e6b2e1354p-15, 0x1.41ce2a8c98483p-879,
     0x1.cd818ce190e4p-696, 0.0, 0.0, 0x1.9bc2ee5237f6bp-833, 0x1.bfe839a393406p-161,
     0x1.16106221acba9p-393, 0x1.57096f2517db9p-135, 0.0, 0x1.df8b006ee057ap-429,
     0x1.17fabec20deb5p-579, 0x1.2dc7ca2c6f6p-388, 0.0, 0.0, 0.0,
     0x1.ec868e2b87968p-399, 0x1.5ce8d0bf33419p-857, 0x1.74725c2d11601p-357,
     0x1.df496b377d7a6p-249, 0.0, 0.0, 0.0, 0x1.cf8e6208f5ecap-902, 0.0,
     0x1.0828c95968272p-249, 0.0, 0x1.06112b97e272bp-1021, 0x1.e0903457c1e8dp-66,
     0x1.c6775006fc9d9p-378, 0x1.e1902233273c3p-1013, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d2dccfb837f79p-1012, 0x1.d70e5473020fep-933,
     0x1.e7bcfca72ff76p-367, 0.0, 0.0, 0.0, 0x1.2876138301398p-496, 0.0, 0.0, 0.0,
     0x1.d635a4166935dp-753, 0x1.b3a5b42dade63p-74, 0x1.89f5a0646cf2dp-442,
     0x1.e404b84ced7cep-455, 0x1.57f791eaf39f7p-966, 0.0, 0.0, 0x1.598a30231d13ap-496,
     0.0, 0.0, 0.0, 0x1.c0a34e7447382p-1021, 0x1.f6004d558dcc6p-633,
     0x1.07f22152d835ap-650, 0x1.10f5e21c7ccedp-298, 0x1.4ca847cd5e7c6p-375,
     0x1.92a0597d6540fp-897, 0.0, 0x1.e902382da438fp-352, 0.0, 0.0, 0.0,
     0x1.6aad9ae8b71e7p-180, 0.0, 0.0, 0.0, 0.0, 0x1.af39559e1795ep-872,
     0x1.83a11681b95a5p-12, 0.0, 0x1.2577712358f81p-616, 0x1.d3fa24f971facp-745, 0.0,
     0.0, 0x1.6f17f5e90bd53p-961, 0.0, 0.0, 0x1.e0817d73a9988p-213,
     0x1.3cbb451e74f62p-445, 0x1.d37c5638dd279p-883, 0.0, 0x1.ccebb08e9e86fp-429, 0.0,
     0.0, 0x1.e97f1926a9ea2p-535, 0.0, 0.0, 0x1.ff8fa204544adp-227,
     0x1.695e4954ed1bfp-459, 0.0, 0.0, 0.0, 0x1.67f095a0b40dbp-700,
     0x1.470e1c6e6b7b8p-426, 0x1.08fc3688bfa9cp-611, 0x1.3d09c04940172p-67,
     0x1.70d1625551ba4p-386, 0.0, 0.0, 0.0, 0x1.ad8ceb99381fp-328, 0.0, 0.0,
     0x1.02874b2f6b01cp-511, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce90bccec779fp-558, 0.0, 0x1.301fac1201cecp-363, 0.0, 0.0, 0.0,
     0x1.f63a72f395083p-16, 0.0, 0x1.22c074a980824p-288, 0x1.c0c9a425c73b8p-934,
     0x1.9c55b1fb9608bp-672, 0.0, 0x1.b64f1acfbd034p-878, 0x1.f2fbc86de796p-639, 0.0,
     0x1.2192c90585dfap-182, 0.0, 0.0, 0x1.988682862090ap-403, 0x1.e1c942a67b205p-872,
     0.0, 0x1.b4f9e27fa2e24p-863, 0x1.0f597555cd91ap-742, 0.0, 0.0, 0.0,
     0x1.0c5e17708de4p-66, 0.0, 0.0, 0x1.5cd7c27817a5cp-590, 0x1.efaaf38a6d073p-450,
     0x1.689c0ac22efbap-77, 0x1.6639010a025cbp-717, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d8883b73784p-441, 0.0, 0x1.a658fb343caf2p-867, 0.0, 0x1.64576205ee945p-1021,
     0x1.481fdf44cd1acp-586, 0.0, 0x1.1bd5148b0daeep-650, 0x1.f7baaa21fe7a6p-712,
     0x1.e6608c2d9191cp-293, 0.0, 0.0, 0x1.adf65d5d42ff7p-753, 0.0, 0.0,
     0x1.12976b44df8aep-656, 0.0, 0x1.18aa5f24d3686p-279, 0.0, 0.0,
     0x1.f9f16cbee45d5p-463, 0.0, 0x1.f331f7a694053p-243, 0x1.04b234cda1d93p-214,
     0x1.c99606b0ea57bp-426, 0.0, 0.0, 0x1.c9723040950b4p-511, 0x1.90cfd0ad2ba7bp-397,
     0x1.36508f8fef6ap-165, 0.0, 0.0, 0.0, 0.0, 0x1.89042f477491bp-401, 0.0, 0.0,
     0x1.7d84a036ce42ap-52, 0x1.c58b86f2d9807p-574, 0x1.29fcd4d4e209p-417, 0.0, 0.0,
     0x1.51e69a343f82dp-196, 0x1.696b701b0905cp-72, 0x1.fb967c88200cep-862, 0.0, 0.0,
     0x1.dba0a27063fa1p-632, 0.0, 0x1.594225ab889cbp-20, 0.0, 0x1.79b733769d70dp-257,
     0x1.7f35d8472086cp-635, 0x1.8968044097aap-579, 0x1.5ae53a55646f6p-1012, 0.0,
     0x1.b66e9621ad27bp-437, 0x1.9704162169906p-119, 0x1.5174313cdc2f8p-320, 0.0, 0.0,
     0x1.5acab34f415a7p-190, 0.0, 0x1.bb03db8ee5095p-435, 0.0, 0.0,
     0x1.a21625cf5879ap-99, 0.0, 0.0, 0x1.778d4ac8f050ep-846, 0.0, 0.0,
     0x1.1f0d87e34e649p-76, 0x1.d283e81f7b60ap-215, 0.0, 0.0, 0x1.ba29b90d465f3p-910,
     0x1.f563b67e08eecp-585, 0x1.c58e425dabf45p-819, 0.0, 0.0, 0x1.8c05a9a33e0eap-890,
     0x1.45d5737eb0a0dp-526, 0x1.e43aed68f3445p-899, 0.0, 0x1.39dd308da470ap-573,
     0x1.89aad1c9f6423p-702, 0.0, 0x1.0196c6599949p-144, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc0235814cb22p-266, 0x1.11d4609759429p-326, 0x1.7d9bee6fc4332p-301,
     0x1.b04f1febecc52p-236, 0.0, 0.0, 0.0, 0.0, 0x1.4fe5d53beaae3p-553, 0.0,
     0x1.58bb3252b2686p-812, 0.0, 0x1.6794c77e49fe8p-391, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5130b7f3613a7p-963, 0.0, 0x1.2b91b5887d6f5p-324, 0x1.7dfb6252a02acp-1017,
     0.0, 0x1.87ee9fc26e3ebp-749, 0.0, 0.0, 0x1.9c33f260cdeccp-351, 0.0, 0.0,
     0x1.9aed11ca83ffdp-149, 0.0, 0.0, 0.0, 0.0, 0x1.3a4fcb3d974b1p-912,
     0x1.862de403b578ap-1013, 0x1.1ec913e6dea63p-1013, 0x1.fc3cf8aee7cc8p-833, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3bbffafe8b0fp-884, 0x1.d17fb1e0e3854p-900, 0.0,
     0x1.4bc1d12b01ae1p-330, 0x1.58a7ce8ceb648p-720, 0x1.a56cc706574dbp-511, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c7c4db4a78634p-320, 0.0, 0.0, 0.0, 0x1.e7cd0c8ebfb13p-282,
     0x1.ac81547a975d1p-304, 0x1.61e988959f0ap-655, 0x1.f2572c56558d3p-922,
     0x1.c50187b7acc34p-721, 0.0, 0x1.19705a94aadd8p-332, 0x1.4b361b47789ecp-524, 0.0,
     0x1.a98137deafd0fp-156, 0x1.626795910d515p-630, 0x1.4e2d80a9b1688p-379, 0.0, 0.0,
     0x1.8088e91dc6a07p-903, 0x1.aa4a1e1c05cp-344, 0x1.aca0d4d61b952p-249,
     0x1.c10c54d01a762p-650, 0x1.2a6ee5ae104f2p-295, 0.0, 0x1.89cc9a8dc481fp-624,
     0x1.2c228cd9f09dcp-26, 0.0, 0x1.6d94a017cf7p-605, 0x1.f279526e8fce8p-848,
     0x1.8005568713126p-511, 0x1.15733da450c3fp-234, 0.0, 0x1.ee0fcd65f07d5p-401,
     0x1.03a5bb4389696p-51, 0x1.b1e2f6d02e223p-111, 0.0, 0x1.09947dfc39542p-609,
     0x1.6783d6b88491dp-8, 0.0, 0.0, 0x1.4c15ae61c5ac5p-295, 0x1.240ff7b44f155p-896,
     0x1.9c2f9216452dcp-968, 0x1.298cbbf40461cp-215, 0x1.6ca047e88960bp-862, 0.0,
     0x1.900cc54053087p-680, 0x1.5fa7406685ba6p-924, 0x1.590b7e5d9ea8fp-836, 0.0,
     0x1.3973f3afd48fdp-522, 0.0, 0.0, 0x1.791e37a85eb3cp-321, 0.0,
     0x1.ce6153de29086p-126, 0.0, 0.0, 0x1.3b895fac0947p-1017, 0.0, 0.0,
     0x1.16cbedcf00943p-208, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2e4e92187a3dp-255,
     0x1.51f7002726ffp-642, 0.0, 0.0, 0x1.9e5b901fc2ab7p-495, 0.0,
     0x1.e096f60783f14p-723, 0x1.711c0f6b8b046p-760, 0.0, 0x1.e84dceb2c4e84p-876, 0.0,
     0x1.e1de944fe53fap-229, 0.0, 0x1.6640f45f6e6dap-760, 0x1.e65386c4a5887p-139,
     0x1.1159f194250b6p-335, 0x1.c438df6fb8586p-516, 0x1.741427d05a431p-502,
     0x1.3c8bcfea46e21p-556, 0x1.d3d7d71046b57p-260, 0x1.8bbb68b8145a3p-475,
     0x1.2c1f018d06a46p-718, 0x1.c829834dd1e5cp-808, 0.0, 0x1.bbd7f4b587f79p-909,
     0x1.fd76ea720c398p-88, 0.0, 0.0, 0.0, 0.0, 0x1.f48d0b706187bp-43, 0.0,
     0x1.1a99171480ff2p-250, 0x1.ba5525518a00cp-571, 0x1.d08ed71062a6dp-142,
     0x1.46bc742a05abfp-186, 0.0, 0.0, 0.0, 0x1.4593e206d90c8p-665, 0.0, 0.0,
     0x1.b5c81c2d23542p-876, 0x1.c9569d46b5a81p-223, 0.0, 0x1.1ffd464fe3722p-441, 0.0,
     0.0, 0.0, 0.0, 0x1.3d50528970f11p-465, 0.0, 0x1.e5590b529936ep-46, 0.0, 0.0, 0.0,
     0.0, 0x1.4ad213be76b56p-104, 0x1.90242ea417e0fp-164, 0x1.3b3a93d998ea3p-1010,
     0x1.c90b54f82c43dp-374, 0x1.1c866b8f8b5bap-666, 0x1.2ca0c68c59b71p-836,
     0x1.80d6ec76f8f38p-682, 0x1.3774c59d8a5f6p-555, 0.0, 0x1.8b15d3856fb6ap-927
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
            tmp1 = Sleef_expm1d2_u10kvx(tmp0);
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
    printf("Sleef_expm1d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_expm1d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
