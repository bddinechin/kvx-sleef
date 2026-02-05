/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand1_u35purecfma.c --function \
 *     Sleef_finz_tand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.bba76fbfd1465p-859, 0x1.0e70f77143502p-192, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b91a92e175897p-13, 0.0, 0x1.309be49488499p-720, 0.0, 0.0,
     0x1.891931c6944f2p-475, 0.0, 0.0, 0.0, 0x1.cc9a541ffe687p-641, 0.0,
     0x1.4ddaa43b5a326p-410, 0.0, 0x1.86812f2473601p-540, 0x1.1c334ca5030ccp-664,
     0x1.6e680ee2e067ep-323, 0x1.0b694f36b7881p-331, 0.0, 0x1.f0889669e6ad1p-911, 0.0,
     0x1.3e41b6cdb6a33p-288, 0.0, 0.0, 0.0, 0.0, 0x1.ab85a26fcfb0dp-744,
     0x1.b58a75bbaf5e3p-962, 0.0, 0.0, 0x1.ea62cacc071fp-942, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b30ace2419f8cp-631, 0x1.275507d1bcc8ep-140, 0x1.b9f8bef9f9294p-649, 0.0, 0.0,
     0.0, 0x1.5e155a6fcc6fdp-394, 0.0, 0.0, 0.0, 0.0, 0x1.17b2bb3c757dcp-14, 0.0, 0.0,
     0x1.ba92fda7608afp-621, 0.0, 0.0, 0.0, 0x1.4a0a896d22a8ap-814, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9ce248db23d7ap-309, 0.0, 0x1.af94094ebc0fcp-595,
     0x1.38cac498a9e96p-496, 0x1.f708279325cc1p-39, 0.0, 0.0, 0x1.cb26679a5a87p-916,
     0x1.5ef852ee5975dp-137, 0x1.c6f2e2b7a2b02p-621, 0.0, 0x1.d6db42c7a9bacp-237, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ce6c7430057bp-1003, 0.0,
     0x1.b06b8614a2df6p-8, 0.0, 0x1.5e7c21fe8f189p-666, 0.0, 0x1.322f47e1c2c0bp-209,
     0.0, 0x1.04a339581e704p-26, 0.0, 0x1.b6e94336c7263p-537, 0.0,
     0x1.ccec033a4559ap-348, 0x1.eb538859d7e87p-736, 0.0, 0.0, 0.0, 0.0,
     0x1.841953105201dp-200, 0x1.28a9a3da9b36cp-309, 0x1.c65175defbc53p-221, 0.0,
     0x1.c00e04ac0a6e8p-223, 0x1.48dd07aa2cd42p-767, 0.0, 0.0, 0x1.54318575b9d72p-299,
     0.0, 0.0, 0x1.502459bcadd1dp-618, 0x1.05a1785e4445ap-881, 0x1.e53477d444303p-987,
     0.0, 0x1.36b2de694c0f5p-34, 0x1.5d6e0e63c2214p-159, 0x1.f8b75d342a68ap-469,
     0x1.17754e52d74dap-469, 0x1.0aa8733e8ad7dp-940, 0.0, 0x1.8238378c8e2bbp-811,
     0x1.d5cc993916df3p-998, 0.0, 0x1.3187f023594a5p-532, 0.0, 0x1.1547d82d45d87p-791,
     0.0, 0.0, 0x1.c7ade06bb79afp-876, 0x1.49795f1b60ffdp-70, 0x1.b7c5fb1034bc3p-56,
     0.0, 0.0, 0.0, 0.0, 0x1.36e5caa49df22p-6, 0.0, 0.0, 0.0, 0x1.789631adb4dbp-554,
     0x1.e6ea0db420db4p-205, 0x1.ec8ac7b5d4e7ap-267, 0.0, 0.0, 0x1.43c5408da3b79p-890,
     0x1.e4b634d0d9db7p-530, 0x1.e7b105865f1b5p-532, 0x1.a089e51568174p-697, 0.0,
     0x1.0ef8fa015c066p-892, 0.0, 0x1.b1302d32ab6bdp-328, 0.0, 0x1.4c125217b2642p-363,
     0.0, 0x1.53d4f8b691533p-829, 0.0, 0.0, 0.0, 0x1.b47552cf23f61p-374,
     0x1.8dc4fa3180233p-548, 0.0, 0x1.bc6fd236914b6p-53, 0x1.182d5ed62ddd2p-967, 0.0,
     0x1.9e8b4d9ecbdc3p-82, 0x1.25a4269d273ebp-629, 0x1.6f0f0e0b37201p-513, 0.0, 0.0,
     0x1.ebdbab7bb8a7dp-248, 0x1.41c7c9c7c0e11p-672, 0.0, 0x1.3f9f03112217ep-496, 0.0,
     0.0, 0.0, 0x1.d9a01fac5b23p-390, 0.0, 0x1.e0d74043f2858p-574,
     0x1.ddb3b5a2f7b14p-1009, 0x1.64b54ec2ed7bfp-405, 0x1.74d692084d10dp-777,
     0x1.75ed7f41419aap-613, 0.0, 0.0, 0.0, 0x1.e464737fde0dap-92,
     0x1.38dfbe72fe587p-856, 0x1.2f1f85063e651p-632, 0.0, 0.0, 0x1.5c6627a7d7b46p-930,
     0.0, 0x1.f99be08516d5ap-344, 0.0, 0x1.8db8f25b7fc35p-818, 0x1.4317f7c5de7ebp-425,
     0x1.a82911e358254p-501, 0x1.3dfaa9664d7fdp-896, 0x1.699d52b1395cbp-952,
     0x1.717fb63246b41p-421, 0.0, 0.0, 0x1.024f379765a8bp-942, 0.0,
     0x1.dd47a4fb604fdp-298, 0x1.27e160f11bc22p-469, 0x1.7bb6ab94525fep-142,
     0x1.0f08836b2aba3p-489, 0.0, 0.0, 0x1.580a4b9f9396fp-541, 0x1.d9ea76e98244cp-63,
     0x1.e5f21dec95991p-802, 0.0, 0.0, 0.0, 0.0, 0x1.5d73ae27ecf24p-733, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.de90a84d05d76p-230, 0.0, 0x1.5b79a557bc601p-191,
     0x1.6f81d98774fe9p-790, 0.0, 0x1.ca6d46d65f2dap-132, 0.0, 0.0, 0.0, 0.0,
     0x1.e80cd7374d3bap-32, 0.0, 0x1.8ee8406736efdp-433, 0.0, 0x1.6e28b344b4a6p-235,
     0.0, 0.0, 0x1.c93efbacfe72ap-461, 0x1.3e99c47f573c2p-757, 0.0,
     0x1.6ed9d1e19a80ap-807, 0.0, 0.0, 0x1.92bb4bc2bff2ep-946, 0x1.69ef6649c13cfp-675,
     0x1.0a75400e03a6dp-593, 0.0, 0x1.c73fe4ac1759fp-720, 0x1.cce10bf72b86bp-964, 0.0,
     0x1.dfc75816a9c9dp-185, 0.0, 0.0, 0x1.312b584ea8029p-967, 0x1.ea50bc63948c9p-752,
     0x1.060ca9d873bbcp-372, 0x1.08ca876cadacp-100, 0x1.b81155d7d7cd8p-439,
     0x1.ef5625e5ca896p-662, 0x1.045be4a850819p-559, 0.0, 0x1.50de7a3cf596bp-833, 0.0,
     0.0, 0x1.6478bf1364259p-254, 0.0, 0x1.efa71d457e7a7p-538, 0x1.64590daea87b9p-875,
     0.0, 0x1.4ead7ec8665cbp-710, 0x1.7afc808b53f33p-226, 0.0, 0.0,
     0x1.88640ead8e973p-353, 0x1.5e0623d5f86b1p-19, 0.0, 0x1.12b5fcba09ce7p-116,
     0x1.c3493e222278fp-307, 0x1.39d62d69073cap-758, 0.0, 0.0, 0.0,
     0x1.f85d0cd8f0fe5p-880, 0x1.58e3ac59b768ap-386, 0.0, 0.0, 0.0,
     0x1.e95ec84df9b2ep-919, 0x1.5a7175817949ap-583, 0.0, 0x1.deadaca652295p-21,
     0x1.761318c1fba76p-809, 0.0, 0x1.154c96d77b7a9p-24, 0.0, 0.0,
     0x1.fb32f65ee6b7ep-425, 0x1.963a580a36e1ap-397, 0.0, 0.0, 0.0,
     0x1.923b9780a173cp-144, 0x1.db05526e75775p-380, 0x1.f30449501a332p-793, 0.0,
     0x1.faee8c612458ep-727, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9920f2abaec58p-922,
     0x1.711a85e1b98abp-412, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4b7b8fb2adc6p-573,
     0.0, 0.0, 0x1.e69655ffac7ccp-702, 0x1.d2df1c4b4f3eap-768, 0.0,
     0x1.702f648864413p-933, 0.0, 0.0, 0x1.c9a5fd8a8c6f9p-947,
     0x1.2930856ab78dbp-1021, 0x1.c420328d78b44p-706, 0x1.4278aa0f4adp-668,
     0x1.24fc7618dc588p-1004, 0.0, 0x1.c13da7bc35ea7p-822, 0.0, 0.0, 0.0,
     0x1.78e900740f5bcp-465, 0x1.4b5b96b12763p-950, 0.0, 0.0, 0x1.2ade9a0a19e1bp-126,
     0x1.ac0e681c211dep-169, 0.0, 0x1.e7d50c0f80f2p-824, 0x1.53629f61472a5p-6, 0.0,
     0x1.e94b26e4a1482p-870, 0x1.bbcefe57ab526p-475, 0.0, 0x1.78a1c9b1210d3p-14,
     0x1.301008c32fa16p-206, 0x1.0793da4489e14p-128, 0x1.7e875711ef71bp-552,
     0x1.5586da7d86e17p-706, 0x1.1957f476c53ddp-648, 0x1.2ae33cf0e22eep-242, 0.0, 0.0,
     0x1.ddcf4df503e69p-876, 0x1.72ec72e75fa6ep-809, 0x1.8a94f4726f9a6p-540,
     0x1.3fe8855bcb588p-724, 0.0, 0.0, 0x1.7b384f0734eeap-148, 0x1.fe17d72d5838ep-787,
     0.0, 0.0, 0.0, 0x1.a4b132a06cad3p-177, 0.0, 0x1.81ac38897830bp-553,
     0x1.692245068fbep-384, 0x1.7770e1aa4f764p-64, 0x1.ebc579e325e8ep-107, 0.0,
     0x1.75ba43cd02256p-39, 0x1.fc82534f1776cp-758, 0.0, 0.0, 0x1.603f444e5205ep-415,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1711571ec4452p-641, 0.0, 0.0, 0.0,
     0x1.93c2e989dd7d7p-31, 0x1.7c1c2e43275b5p-164, 0.0, 0x1.bf51ee14b42dep-383, 0.0,
     0x1.85c390852e017p-10, 0.0, 0.0, 0.0, 0.0, 0x1.f4ade244603dep-225, 0.0,
     0x1.1359d4ffec752p-442, 0x1.9e6b6ae690fb2p-379, 0.0, 0x1.03698546def7fp-733, 0.0,
     0.0, 0x1.c4d2f7f8469b7p-899, 0x1.8e2b846a5caadp-711, 0.0, 0x1.8bd7365ef1a11p-800,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.20a9dcd47eb62p-323,
     0x1.bfebff6042e3cp-67, 0x1.d8df8e18c1c1fp-982, 0x1.b6f7245e177cdp-837,
     0x1.5e6f4cb0caa8p-498, 0.0, 0.0, 0.0, 0x1.a1da3ded42c2cp-511,
     0x1.1f71525d245c1p-23, 0x1.9384e3729fa62p-465, 0.0, 0.0, 0x1.8219eaa9414d3p-507,
     0x1.1163a31ba4b42p-713, 0x1.66254dd67785dp-361, 0.0, 0.0, 0.0,
     0x1.b7a5d7b95ebb7p-737, 0x1.1594b55049444p-209, 0.0, 0x1.33e69a23d181p-525,
     0x1.b5262583212aep-382, 0x1.ec781a72f48bp-462, 0.0, 0x1.04faf2b32f2bp-19,
     0x1.0f7afd26c6fc6p-159, 0x1.5f72a014c6a0cp-334, 0.0, 0x1.41fd0f812e196p-272, 0.0,
     0.0, 0x1.c51a2bb02a323p-373, 0x1.9fcfca657a9c9p-564, 0.0, 0x1.2484fe3f06976p-905,
     0x1.4c5bd821cbc02p-213, 0.0, 0x1.4923d72dc89dbp-882, 0.0, 0.0,
     0x1.5c61082612148p-273, 0x1.356d018be0bc1p-717, 0.0, 0x1.479d5804c1216p-284, 0.0,
     0x1.25246d375ce7bp-164, 0x1.8ab60ced578b6p-836, 0x1.e33b95aa019a3p-100,
     0x1.29cd4adcc8b1bp-253, 0.0, 0.0, 0x1.985799e321039p-583, 0.0,
     0x1.fb4f476d72269p-135, 0x1.94f1e9e6dd68ap-119, 0.0, 0.0, 0x1.d41014ee81199p-375,
     0.0, 0x1.f6eb9e3a2f852p-355, 0x1.4ece0860c048fp-287, 0.0, 0x1.c84878a042ea3p-215,
     0.0, 0.0, 0.0, 0.0, 0x1.077c9db17e6c1p-541, 0.0, 0.0, 0x1.aba85105a088p-388,
     0x1.3bbcac1565761p-522, 0.0, 0.0, 0x1.843c27cdd59cep-786, 0x1.ec1b7bd17e29bp-106,
     0.0, 0x1.2daab91c98acep-909, 0.0, 0x1.50eff37958365p-332, 0x1.22915f031a6c6p-583,
     0x1.a14555e8c5647p-157, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d93242f41b8a4p-765, 0.0, 0.0, 0x1.1e89df95a03ecp-612, 0x1.97db76ead4b87p-649,
     0x1.2cf71180265cbp-428, 0.0, 0x1.e847f48edd255p-283, 0.0, 0x1.09302c1eb3e18p-664,
     0.0, 0.0, 0x1.21b266e1a3844p-921, 0.0, 0.0, 0.0, 0x1.9cf722538bdc6p-412, 0.0,
     0.0, 0x1.2b1291f54802ap-273, 0.0, 0x1.23e60bf1cc216p-53, 0x1.0aa39f8741728p-274,
     0x1.b56a933704f21p-400, 0.0, 0.0, 0.0, 0.0, 0x1.7b4ce7ad57e4dp-466, 0.0, 0.0,
     0x1.466cd2f80b448p-835, 0x1.7b656730f9addp-521, 0x1.272a6faec1992p-990, 0.0,
     0x1.117d2b027abf1p-674, 0x1.8075a0e8ab244p-968, 0.0, 0x1.11b0e7ebdd66fp-218,
     0x1.d5de329235f7p-23, 0x1.fa31cdf69a351p-751, 0.0, 0x1.922db4d6eed46p-450, 0.0,
     0.0, 0.0, 0x1.34bb1a5b60cdcp-453, 0x1.ad73401e7c429p-938, 0x1.903450b8c9199p-291,
     0x1.61afd71a534dbp-141, 0.0, 0x1.5613ff74b66e1p-443, 0x1.cc52ec33b48acp-233, 0.0,
     0.0, 0x1.3033a366d5601p-987, 0x1.07a220783148dp-697, 0x1.61be4d7179d78p-536,
     0x1.9ce938dfca4f6p-755, 0.0, 0.0, 0x1.99a65582b8c85p-917, 0x1.dfac32b150c72p-468,
     0x1.5a9c78187fc47p-559, 0.0, 0x1.82c065d5e5d4cp-384, 0.0, 0x1.fc34b5770b8ap-712,
     0x1.f93a50470e77bp-741, 0.0, 0.0, 0x1.db792f4338fccp-452, 0.0, 0.0,
     0x1.8e7da9a6de21fp-733, 0.0, 0.0, 0.0, 0x1.9695eeb6103e7p-1003,
     0x1.e292284c77e57p-837, 0x1.6e6f26da4f7a1p-785, 0.0, 0.0, 0x1.3dd5946c360efp-586,
     0.0, 0.0, 0x1.3d5594aef972ep-265, 0.0, 0x1.8dac63510474ep-471,
     0x1.79eeab860d45fp-23, 0x1.94acbb9671eaap-932, 0.0, 0.0, 0.0, 0.0,
     0x1.a8144e9698ca6p-784, 0.0, 0.0, 0x1.9c32051ee1bc6p-464, 0x1.3e47bddc29e77p-683,
     0x1.e6e17cd32a264p-28, 0x1.1f8bc5ca864ccp-221, 0.0, 0x1.7a636a4c8890bp-196,
     0x1.d947b890af22cp-492, 0x1.842872648bbbp-335, 0x1.4154878adf3b5p-517, 0.0, 0.0,
     0.0, 0.0, 0x1.9733763432b67p-465, 0x1.10580b5cd54c5p-14, 0x1.402e002d19bfp-411,
     0x1.6178f07a50996p-858, 0x1.6d0f006aaa351p-881, 0.0, 0x1.0dde0789f30f7p-220,
     0x1.220ffe6548a41p-473, 0x1.ef5b964d4bba3p-111, 0x1.f477c6f4955c7p-224,
     0x1.e06c75db04377p-24, 0.0, 0x1.d281a3eba707p-903, 0.0, 0x1.146cfe6f9cab4p-566,
     0x1.711a9e4e7ea14p-532, 0.0, 0x1.8296d53699945p-689, 0x1.02495d53bbfdap-794, 0.0,
     0x1.b64d6a983f996p-23, 0.0, 0.0, 0x1.a72bf1850e02bp-454, 0x1.83a31a5d04fabp-886,
     0.0, 0x1.f2f59e8d46ce8p-591, 0.0, 0.0, 0.0, 0x1.899e2801b90d5p-620, 0.0, 0.0,
     0x1.b31298f0dd8c3p-473, 0x1.8c4a0f3ee7d2ep-855, 0.0, 0x1.47c54b2d7a8b1p-47, 0.0,
     0x1.e8323df9cb7a4p-648, 0.0, 0.0, 0x1.25f46f1df82b4p-606, 0.0,
     0x1.e2b59b6e291cfp-970, 0.0, 0x1.9cd5d879ac599p-87, 0x1.5a67627101cf6p-725,
     0x1.2f9e82afcad64p-782, 0x1.e9f1b46cb3e7ep-299, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7e5d38801bfa9p-433, 0.0, 0.0, 0.0, 0x1.745d21c7bdebdp-766,
     0x1.f5312b92e2a8bp-892, 0.0, 0.0, 0.0, 0.0, 0x1.3468749c3f9ddp-214, 0.0,
     0x1.e953bbfa2624ap-661, 0.0, 0x1.58ef014af1c98p-577, 0.0, 0x1.15f1b9855d743p-90,
     0x1.b00d963f77fc5p-68, 0x1.27bf0ca948428p-343, 0.0, 0.0, 0.0,
     0x1.2f2f97ff33e23p-303, 0x1.3718e3ff499c5p-756, 0x1.d15bf7a54942p-31,
     0x1.b2c104f793083p-890, 0.0, 0x1.4a05fb6fc709p-180, 0.0, 0x1.bd30016744113p-943,
     0x1.09df251bd8953p-233, 0x1.f7a1ba3e03b67p-101, 0.0, 0x1.d3d48559bc4abp-683, 0.0,
     0.0, 0.0, 0x1.93fd3a7eb362ep-662, 0.0, 0.0, 0x1.5f4c136162932p-770, 0.0, 0.0,
     0x1.6cfd54b887795p-1017, 0x1.79364a98515a4p-431, 0.0, 0x1.0c4e6904d55e3p-1012,
     0.0, 0x1.2584509c56c4ap-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c3574c296d089p-23, 0.0,
     0.0, 0x1.592f9d1c7ed2bp-242, 0x1.62667a8c77a47p-350, 0x1.5a2df5db49b3ap-32,
     0x1.066d8438068ap-678, 0x1.c6de15473c898p-909, 0x1.59dcd9189cbap-560, 0.0,
     0x1.e215c0c09b01bp-754, 0.0, 0.0, 0.0, 0x1.51ebef9e83ec8p-744, 0.0, 0.0,
     0x1.da050302c892bp-526, 0.0, 0.0, 0.0, 0x1.43ba9d997aa62p-475,
     0x1.d09079a859fdfp-4, 0x1.570b8a03cd2d8p-86, 0.0, 0x1.ea9cd74533d8dp-564,
     0x1.21ec2e819a657p-734, 0x1.8bbe570941d12p-22, 0.0, 0.0, 0.0,
     0x1.d78bd345bd808p-743, 0.0, 0.0, 0x1.42c503a3d77ecp-700, 0.0, 0.0, 0.0,
     0x1.cfeb421a4cbafp-909, 0.0, 0.0, 0x1.4460545d8eee3p-15, 0x1.7ce5bc5c87055p-879,
     0.0, 0.0, 0.0, 0x1.e96d6e316a4e4p-910, 0x1.cd93625ef69b2p-286,
     0x1.7bc251e7c33a2p-664, 0x1.d8b4eb0f0f83cp-617, 0.0, 0.0, 0x1.c34f03612c6ddp-394,
     0.0, 0.0, 0x1.321e321acf03fp-788, 0.0, 0x1.b6af84e3188f7p-266, 0.0,
     0x1.3eee125fffb29p-191, 0x1.2fb1a47b5a3f6p-825, 0x1.e698aefb9c1ep-596, 0.0, 0.0,
     0x1.ca859ebcfc974p-964, 0x1.b95c2e79c510ap-992, 0.0, 0.0, 0.0, 0.0,
     0x1.512930a5bbcf8p-772, 0x1.e3694a161c26bp-264, 0x1.23548d6b77ed6p-739,
     0x1.e00e6a051958dp-357, 0.0, 0.0, 0.0, 0x1.ca8448f9a6f24p-477, 0.0,
     0x1.84b9fb458c41fp-482, 0.0, 0x1.16189d83e155p-320, 0.0, 0.0,
     0x1.aafd0f0f4fa97p-60, 0.0, 0x1.54406315509cap-836, 0x1.a132bb477980cp-827,
     0x1.af78daa1e6472p-75, 0x1.89de4908a3a09p-404, 0.0, 0x1.13799af1f7f5p-471,
     0x1.ef77eb28cb27cp-475, 0.0, 0x1.82528650c36e7p-649, 0.0, 0.0, 0.0,
     0x1.204ad6081533ep-282, 0.0, 0.0, 0.0, 0.0, 0x1.7cc4e541ccbb1p-592,
     0x1.5ce2c0c5cbbcdp-308, 0.0, 0.0, 0.0, 0x1.fd3e34d3aad6cp-159, 0.0,
     0x1.6c8a46a9e57fcp-619, 0.0, 0.0, 0x1.8fecfe6e3d3c7p-339, 0x1.f846f367a329fp-47,
     0.0, 0x1.a635f08d7bafbp-294, 0x1.5161ff1ff23d3p-685, 0.0, 0.0, 0.0, 0.0,
     0x1.b47e90378a9adp-1008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8fd978623c38bp-780,
     0x1.82931ba37970ep-389, 0x1.9f6a2435e91e1p-105, 0x1.6607f894e95b8p-709, 0.0,
     0x1.b34b95f908a1cp-359, 0x1.5be4460d1b70dp-1005, 0x1.8934a54473e96p-624,
     0x1.3ab9db1ede167p-748, 0.0, 0x1.b6de319a731c9p-133, 0.0, 0.0, 0.0,
     0x1.6875c00f4319fp-531, 0.0, 0x1.9095777255f33p-832, 0.0, 0.0,
     0x1.3e318661adbbap-464, 0x1.646a283ee1d42p-900, 0.0, 0.0, 0x1.7f3fc321f3472p-995,
     0.0, 0.0, 0x1.3a4403410c721p-647, 0x1.336520af8a8ccp-80, 0x1.fb35bcffdf8bfp-837,
     0x1.57dd50fc81c2cp-960, 0x1.8804a0484766bp-503, 0x1.7ff79b4e26157p-796, 0.0, 0.0,
     0x1.6e79d705c511bp-283, 0x1.b2ea51006dcefp-871, 0.0, 0.0, 0.0, 0.0,
     0x1.05b1d67cb4949p-481, 0.0, 0x1.e37408629e589p-873, 0.0, 0.0,
     0x1.9cdaa6ccbb5e4p-113, 0.0, 0x1.b2f72d6a9e149p-973, 0.0, 0x1.1d3ba50dfd971p-323,
     0.0, 0x1.f33a6af60c3ep-640, 0x1.b795f5c502033p-564, 0x1.664c95bcc574p-520,
     0x1.227f8260e3a6fp-463, 0.0, 0x1.a0ac99482a073p-994, 0.0, 0.0,
     0x1.06cccaeb0f987p-627, 0x1.bdfd3a2b810acp-937, 0.0, 0x1.de48f33730881p-19,
     0x1.75fbb2ffaf7bp-820, 0x1.51f3361208225p-151, 0x1.08bff31a30b32p-435, 0.0,
     0x1.b4a7161e3b823p-637, 0x1.360c969e4552ep-467, 0.0, 0x1.cf15e957e3de4p-87, 0.0,
     0x1.6c7838d548bbbp-304, 0.0, 0.0, 0.0, 0x1.48efa58e29a57p-759,
     0x1.d85966ca773b1p-324, 0x1.89b917bab845bp-619, 0x1.4cf60438c1b51p-533, 0.0, 0.0,
     0.0, 0x1.d375f8a3ee8cap-261, 0.0, 0x1.bc1b6062e6512p-888, 0x1.31cc0b5def914p-700,
     0.0, 0.0, 0x1.bf7c69a655bfap-680, 0x1.ff94214875267p-203, 0.0,
     0x1.22d89fc3e8c67p-993, 0.0, 0x1.eeaac891fe3a6p-64, 0x1.305a3e4431b33p-319, 0.0,
     0.0, 0x1.f813f34d1476dp-340, 0x1.0de52455c0e34p-248, 0x1.15aa4a3541829p-445,
     0x1.0d8a06ae81b2dp-539, 0.0, 0.0, 0x1.3c7a848539b74p-530, 0.0, 0.0,
     0x1.005f2fdc48964p-169, 0x1.1d04b9448bba7p-943, 0x1.1d2e70da27d51p-512,
     0x1.3ef9ad297ccc4p-227, 0.0, 0x1.bcd5f73ebd8e6p-783, 0x1.fe17811d39927p-95, 0.0,
     0x1.fe91680015285p-911, 0.0, 0.0, 0.0, 0.0, 0x1.e1fc04e985354p-245, 0.0,
     0x1.4e8bbaad4b5a3p-751, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_tand1_u35purecfma(tmp0);
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
    printf("Sleef_finz_tand1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tand1_u35purecfma bench acc %la\n", global_bench_acc);
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
