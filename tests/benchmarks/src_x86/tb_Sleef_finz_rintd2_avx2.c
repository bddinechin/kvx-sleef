/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_rintd2_avx2128.c --function Sleef_finz_rintd2_avx2128 \
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
     0x1.07be5bbb639eap-439, 0.0, 0x1.a6b67246b61a9p-929, 0.0,
     0x1.8b66fc0f112a4p-257, 0x1.4d474edf31a6ap-484, 0.0, 0x1.ae505b839e566p-335, 0.0,
     0x1.0a81c63a6cb51p-429, 0.0, 0.0, 0.0, 0.0, 0x1.186b7b5207516p-867,
     0x1.6b1818116f7c8p-854, 0x1.fdb8993ab5686p-499, 0.0, 0x1.f03799eb87104p-152, 0.0,
     0.0, 0x1.d72f3c1331a63p-791, 0x1.27b74ce5a8dd6p-888, 0.0, 0.0,
     0x1.6bb37c192314fp-867, 0x1.ac55fd3c38a24p-427, 0.0, 0x1.2583cc77bbae1p-224,
     0x1.08d67b7df1238p-346, 0x1.dbd6987fe8777p-798, 0x1.6e14d54799118p-143, 0.0,
     0x1.2a84472c0a4a3p-995, 0.0, 0x1.aa85335f9a8ddp-701, 0x1.d3781ec54bf58p-89, 0.0,
     0x1.1b8d3c403f39p-106, 0.0, 0x1.0e19654221b73p-648, 0.0, 0.0,
     0x1.367c6ef565402p-89, 0x1.1065cd4a728c3p-565, 0x1.3c0160be25befp-856, 0.0,
     0x1.fe36f809e7373p-965, 0.0, 0.0, 0.0, 0x1.329cc92820ee1p-499,
     0x1.34e67d08d553p-826, 0x1.311f2555c8914p-881, 0x1.1ebee3f54d666p-151,
     0x1.913c58a38ba24p-165, 0.0, 0.0, 0.0, 0x1.a99ffa936aec2p-338,
     0x1.8a48c8b2699a1p-316, 0.0, 0x1.fd5d8e4bcb19fp-664, 0x1.68c25375241bfp-970, 0.0,
     0x1.1df9faf303e23p-728, 0x1.b57eefa9e9eeep-585, 0.0, 0.0, 0x1.90c182efe320ap-836,
     0.0, 0x1.915c75a4038a3p-291, 0.0, 0.0, 0.0, 0x1.29c910a759ac1p-258,
     0x1.6d410090f89ap-345, 0x1.3311f5a42770ap-283, 0.0, 0.0, 0.0,
     0x1.a3cd53305c6c5p-813, 0.0, 0x1.9db09aa6ecee8p-826, 0.0, 0.0, 0.0, 0.0,
     0x1.13eba50dfc0f4p-359, 0.0, 0x1.29c940931d4f3p-492, 0x1.a79f9855b0465p-265,
     0x1.ffb79d9740fe6p-447, 0x1.864ec806379abp-460, 0.0, 0x1.2a617a944ba16p-414, 0.0,
     0x1.e98eceb95aac8p-124, 0.0, 0.0, 0x1.6b445c838752bp-674, 0x1.18eee2d47a0b4p-705,
     0.0, 0x1.da55e8a9e3521p-333, 0x1.c6ae72888ba8ap-206, 0x1.b8e4939091e69p-143, 0.0,
     0x1.0f8d66e5adaffp-439, 0.0, 0x1.ee35c14ba8aa5p-108, 0x1.9694206910515p-573, 0.0,
     0x1.5bfecc17134bap-991, 0.0, 0x1.523ff27e3cbf8p-916, 0x1.36fbd298ab22p-415,
     0x1.39b4ed176b2fap-66, 0.0, 0x1.233db6453fd79p-1005, 0.0, 0x1.60f84c396ad2cp-799,
     0x1.b83656197755ep-973, 0.0, 0x1.d5a54224fb53fp-435, 0x1.64b83cf91f08ep-503, 0.0,
     0.0, 0.0, 0x1.54b4983ec8ba1p-602, 0x1.3bb92cabbbce3p-937, 0x1.cb919971d94bp-876,
     0x1.93c287b0dea91p-594, 0x1.b776d7423ed24p-252, 0.0, 0.0, 0x1.a9c0ab071a2cp-18,
     0.0, 0.0, 0.0, 0x1.379c635280d2bp-993, 0.0, 0.0, 0x1.1bbdeccab7537p-647,
     0x1.8de49b9a7d831p-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cdcf56ad1f84ap-350,
     0.0, 0.0, 0.0, 0x1.2e7395945d8d2p-366, 0.0, 0x1.5c8725f762328p-66,
     0x1.67f679a08c22ep-765, 0x1.3eb301672f836p-997, 0.0, 0x1.84058fc7f0652p-995,
     0x1.79be2902e5421p-206, 0x1.058272e7b661dp-968, 0.0, 0x1.da4ac89d2b13bp-280, 0.0,
     0x1.31e54682b2b21p-804, 0x1.7abc63455bd8cp-556, 0.0, 0.0, 0x1.7f4e221cbd9ebp-991,
     0.0, 0x1.395e2712842dep-739, 0x1.8d7db6ca4a25fp-35, 0.0, 0.0,
     0x1.f4fb5679f43cbp-705, 0x1.96dede3767781p-606, 0x1.63c0f6879f279p-363,
     0x1.d2a6c58a9069ep-384, 0.0, 0.0, 0x1.74d5269ad2bp-345, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e9461b3f00989p-312, 0x1.8e7a508dc50a8p-748, 0x1.e68179f89db63p-170,
     0.0, 0.0, 0.0, 0.0, 0x1.5e714af7c42a2p-596, 0.0, 0x1.c75445ecf7d44p-705,
     0x1.a622d24ba12dbp-539, 0x1.cbc6cdff2db6p-906, 0x1.fc011b0e49f36p-370, 0.0,
     0x1.4526ce6ee9f71p-404, 0.0, 0.0, 0.0, 0.0, 0x1.122e3730fffddp-709, 0.0, 0.0,
     0x1.ddc84399c2a05p-54, 0.0, 0.0, 0.0, 0x1.3d46a9ea5b347p-205, 0.0,
     0x1.9862ec3496c49p-485, 0.0, 0x1.c0e71941afb08p-885, 0x1.055095f4f08f2p-237,
     0x1.923ba9320a9fdp-666, 0.0, 0.0, 0x1.0e9b7e2733e66p-308, 0x1.2c80de7d9fe14p-573,
     0.0, 0.0, 0.0, 0x1.e3447424d5a7bp-696, 0.0, 0.0, 0.0, 0x1.968b30f33f317p-326,
     0x1.eef26930c028dp-355, 0.0, 0.0, 0x1.5f2c3b82c322ap-578, 0x1.aa43047e7598ep-236,
     0.0, 0.0, 0.0, 0x1.70f33877afbabp-572, 0x1.916463cb54aafp-583,
     0x1.2e53556161127p-697, 0.0, 0x1.549d7776d0501p-938, 0.0, 0.0,
     0x1.a0c227ef69f3p-862, 0.0, 0x1.2fd308d06b2a1p-18, 0x1.be128df1bd0dp-324,
     0x1.40ac214b033e3p-250, 0x1.5b65faf31b4c1p-35, 0.0, 0x1.a34e66f9ff1a2p-755,
     0x1.89aefb46dca99p-280, 0.0, 0x1.05c900b87842ap-23, 0x1.333e38206ee5cp-62, 0.0,
     0.0, 0x1.5b6f5e38a56e9p-982, 0.0, 0.0, 0x1.64c817ddc6003p-364, 0.0,
     0x1.8045446f3cc4dp-969, 0x1.d7edc9883a09ap-618, 0.0, 0x1.9dd54f4e79883p-330, 0.0,
     0.0, 0.0, 0x1.13f4264d506b3p-80, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.562ea6b9c0a8dp-514, 0.0, 0.0, 0x1.a67846f6daf98p-945, 0.0,
     0x1.421c1f95a1f2dp-403, 0x1.15b0c0d1efa3p-963, 0.0, 0.0, 0x1.80abea22d1eb1p-995,
     0x1.d24a6e81ba4f9p-376, 0.0, 0.0, 0.0, 0x1.2a5535b3cbc9ep-236,
     0x1.d456995496d8cp-499, 0x1.2a565aa92d742p-202, 0x1.2abb95b93df95p-998, 0.0,
     0x1.41c15fb9e6ac7p-547, 0.0, 0.0, 0x1.25074dbc7b995p-234, 0x1.ba0f2ba095747p-644,
     0.0, 0.0, 0x1.47bcaec6ff83fp-280, 0.0, 0x1.a7b3afb5c7878p-17,
     0x1.fedb1f1baf5b6p-684, 0x1.6b76f396baafp-320, 0x1.00e39a191f2c8p-606, 0.0, 0.0,
     0.0, 0.0, 0x1.c90d12baf03a5p-54, 0x1.4182553a0aba6p-638, 0x1.425c4b37a8008p-148,
     0x1.8b869a31f0c1bp-763, 0.0, 0.0, 0.0, 0x1.8079589ddca36p-612,
     0x1.bff6be244c0fep-436, 0.0, 0x1.3e7d0ec8366fdp-416, 0.0, 0x1.c752451e0833cp-26,
     0x1.a72b91cc94837p-115, 0.0, 0x1.1688535ac3f47p-428, 0x1.051eddbd79ea3p-50,
     0x1.f7251e7fd9c35p-275, 0.0, 0x1.91fffefe0193p-694, 0.0, 0x1.354439f86a55ap-833,
     0x1.9b7acc14458e8p-14, 0x1.4791c14c951p-813, 0x1.f2455b5bb5d2dp-481,
     0x1.3b17b28896198p-459, 0x1.e1bccb638d14cp-11, 0x1.69d33ad77b1cep-228,
     0x1.991a63105ccf8p-748, 0x1.c048965268565p-543, 0x1.bd1974ec6ce26p-977,
     0x1.74c826b4aac3ap-253, 0x1.3a13b0742f8f7p-519, 0x1.c5eb227dde90ep-779, 0.0,
     0x1.0551d6d3d44aep-767, 0.0, 0.0, 0.0, 0x1.9bf503345d08bp-234,
     0x1.25e57b3f28739p-172, 0x1.d5a51d9c02e7dp-190, 0x1.06ef0f7dce0e5p-829,
     0x1.0e9e176dd496cp-179, 0x1.9d2e42f9a5854p-106, 0x1.efce462332feep-963, 0.0,
     0x1.e65a6dabc46ffp-954, 0x1.869d63983c711p-125, 0x1.e7454810b4284p-475, 0.0,
     0x1.0d4b89ba15334p-285, 0x1.903a789cad6a9p-457, 0x1.76785187b7788p-111,
     0x1.334f1a2b1baaep-513, 0.0, 0.0, 0x1.6bf3ed26d6e36p-547, 0x1.3dcc16fa3d03p-938,
     0.0, 0x1.e41a345153d39p-323, 0.0, 0.0, 0.0, 0.0, 0x1.287ddf9f9fed7p-669, 0.0,
     0x1.944d71f5d8a45p-376, 0.0, 0x1.5ec69a7f23b8p-246, 0.0, 0x1.f8d68a369acbap-863,
     0x1.bb6ac91a44753p-37, 0x1.4149c8f2c3899p-270, 0x1.960b499edbfb3p-290,
     0x1.b6090c8b40b63p-807, 0x1.f57f596d97ff7p-546, 0x1.dec7f3cf25375p-802,
     0x1.e959ef82c696fp-836, 0x1.21d0e27d7ca93p-47, 0.0, 0x1.59b28dde45ee3p-128,
     0x1.6df938c12ee12p-1022, 0x1.850d7eedb89acp-51, 0.0, 0x1.7693c6fc96056p-239,
     0x1.0aaacf4385711p-97, 0x1.8cda71c39a7d2p-981, 0.0, 0x1.1a3cd5971141dp-340, 0.0,
     0.0, 0.0, 0x1.2ce1acfb512fcp-830, 0.0, 0x1.d90fb59d50189p-567,
     0x1.1d323c53d7d0fp-701, 0x1.ea3399c0576f5p-1003, 0x1.0de10f64d5d58p-76,
     0x1.9015b9e6ec4eep-354, 0x1.758b59780e24bp-799, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11696c346f751p-480, 0x1.d91f7b66d7d06p-740, 0x1.22dae2579c08cp-353, 0.0, 0.0,
     0x1.4e7330497cbbbp-805, 0x1.bc22d3250a383p-448, 0x1.8d773bb0bb089p-489,
     0x1.938e1fa2a967p-907, 0.0, 0.0, 0x1.dfca46a8e9e72p-903, 0x1.f0ad33281eeefp-142,
     0.0, 0x1.aef1de879f9cep-1014, 0x1.c65f8312d55a4p-719, 0.0,
     0x1.9c83d0af9fe33p-627, 0.0, 0.0, 0x1.762fd9bac5a42p-233, 0x1.cf3c422cc421dp-792,
     0.0, 0.0, 0.0, 0x1.d3a6191714281p-489, 0x1.7143a9507795ap-501,
     0x1.ab10b5f747523p-602, 0x1.02ee446ffef98p-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0163b11f46704p-703, 0x1.fbd8dd0b45f44p-34, 0x1.7b01be9d0401ep-939,
     0x1.28d297d0e15afp-388, 0x1.cf64f57ce3a12p-149, 0.0, 0x1.a66d0ce15f69ep-895,
     0x1.c21945d080c09p-280, 0x1.205bca7cfbdbbp-396, 0.0, 0.0, 0x1.fcb26045275aep-499,
     0.0, 0.0, 0.0, 0.0, 0x1.3be986a7f95f1p-946, 0x1.92d749191c626p-355, 0.0,
     0x1.654cf29f53a91p-259, 0x1.e03971e8bbdd3p-665, 0.0, 0.0, 0x1.3a442b86976d5p-715,
     0.0, 0x1.dc89d8621d582p-591, 0.0, 0x1.4ed8cae3c4c71p-211, 0.0,
     0x1.beccf907c4ac7p-952, 0.0, 0x1.9933e297f778fp-650, 0x1.4a94355469844p-451, 0.0,
     0.0, 0x1.50051cf717568p-578, 0x1.983d166c5cb7bp-283, 0x1.212d61932ee9p-114, 0.0,
     0x1.e58cf72ef4013p-993, 0x1.c4edb764c94eep-237, 0x1.576d333ba9969p-631,
     0x1.ecef72921585fp-226, 0.0, 0x1.b797f7aa58f2fp-729, 0x1.2f7553f0037a2p-999,
     0x1.7e282ad3aaf61p-681, 0x1.99b6c7d1f8e6dp-826, 0x1.ac94ad2faa03bp-472,
     0x1.978332130d8b1p-761, 0.0, 0x1.d1f47d5da3557p-518, 0.0, 0.0,
     0x1.7ef76fbfdb983p-707, 0.0, 0x1.9846155054705p-995, 0.0, 0.0, 0.0,
     0x1.8d084911b611p-31, 0x1.2501b0d2ae281p-290, 0x1.6654fad54de66p-78, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62a53ed977b22p-795, 0x1.0cf65498333d1p-407,
     0x1.ad596580eb00fp-971, 0.0, 0x1.a139ceb381e1dp-520, 0.0, 0.0, 0.0,
     0x1.64454d2d09d33p-137, 0x1.463b1047720c2p-899, 0x1.6fd8923e50a09p-186, 0.0,
     0x1.64f93f8aa4f82p-21, 0x1.cde8045407cbbp-589, 0.0, 0x1.1db2f68fd25c6p-374,
     0x1.cdc8433a2a2d6p-462, 0.0, 0x1.b40790adbe893p-767, 0.0, 0.0,
     0x1.29ef337922cb4p-516, 0.0, 0x1.b254838172ee4p-69, 0x1.547ac11338a04p-800,
     0x1.204f65aaf2831p-484, 0x1.665a5e4ac2f21p-310, 0.0, 0x1.e220de616c9a9p-915,
     0x1.96d91bd124c53p-875, 0.0, 0x1.265dab1d47bb9p-86, 0x1.c0f81ff0c62c3p-470, 0.0,
     0x1.ace4e61a1e8aep-59, 0x1.66b4185819ae7p-107, 0x1.054f93b633558p-689,
     0x1.f2e12d1bb02ap-171, 0x1.97d102e6d2e2fp-541, 0.0, 0x1.750fa5fd030b8p-978,
     0x1.f0cbbe502dddp-690, 0.0, 0.0, 0x1.6e209eff210d1p-226, 0.0,
     0x1.d532bcc758ac9p-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05541adfaf441p-90,
     0x1.00dcd8a1a9aeap-737, 0.0, 0x1.5af5400efe44ep-18, 0.0, 0x1.7ddecc8a58099p-906,
     0.0, 0x1.d94ee01320a04p-289, 0.0, 0x1.fb6194a986199p-290, 0.0,
     0x1.762dfd153f528p-403, 0.0, 0x1.9aad23679a259p-211, 0.0, 0x1.31d2d1abfbb0fp-373,
     0.0, 0x1.20af4f5ceb2fdp-708, 0.0, 0.0, 0x1.c4e94fa9a059cp-720, 0.0, 0.0, 0.0,
     0x1.54ae6bf553cbfp-598, 0x1.06cd40da9e515p-607, 0x1.af276f4d33a34p-845,
     0x1.8596ac2fda9d4p-532, 0x1.da5340bd26c8cp-606, 0x1.bf03fdca02246p-887, 0.0, 0.0,
     0x1.afdf736d7c831p-729, 0x1.543122dec1992p-500, 0.0, 0x1.5b494300dddccp-205, 0.0,
     0.0, 0x1.1c7152a21a033p-945, 0x1.cd50b6068ab56p-101, 0.0, 0.0,
     0x1.95312f741675dp-701, 0x1.b016fa28ba6b9p-844, 0.0, 0x1.fe876e2e9f11ep-13, 0.0,
     0x1.89d944000cc38p-570, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.788f17c107f3cp-902,
     0x1.5067a52ab7e01p-652, 0.0, 0x1.ca6cfce226a76p-670, 0.0, 0x1.382b3241c0e44p-205,
     0.0, 0.0, 0.0, 0x1.a0c5b9ed36367p-163, 0.0, 0x1.7ee61741ebe83p-59,
     0x1.1bf62e11c0851p-419, 0x1.267080bcc8f2p-296, 0.0, 0.0, 0x1.0d7348476af99p-725,
     0.0, 0.0, 0x1.b87e200bbcb4p-585, 0x1.c9e8628df8946p-798, 0x1.40bbb92c371eep-297,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0cb609a032d5p-789, 0.0, 0.0,
     0x1.340aa943b62e8p-124, 0x1.01e703b17a41dp-288, 0x1.730d5131b9fe4p-539, 0.0, 0.0,
     0x1.102e67a6afdebp-787, 0.0, 0.0, 0.0, 0x1.1b6f031d57385p-790,
     0x1.9b4bb14c54941p-245, 0.0, 0.0, 0x1.747447b451522p-319, 0x1.eac273a0f47b5p-947,
     0.0, 0.0, 0x1.ffa6b5b962858p-148, 0.0, 0x1.889bf8b67f1b3p-325,
     0x1.489eb05c52088p-450, 0.0, 0x1.fbc82a78448e2p-99, 0.0, 0x1.9e087a30a6916p-1017,
     0x1.e70418eb82084p-146, 0.0, 0x1.da29360e2f197p-552, 0.0, 0x1.9404dd442dc89p-69,
     0x1.084ff8d4cfda7p-260, 0x1.a2ffe5b1886d8p-1009, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9263a1e8d8958p-330, 0x1.99d305838b6d8p-465, 0.0, 0.0, 0.0, 0.0,
     0x1.682227ea17483p-33, 0.0, 0.0, 0.0, 0x1.6ad7182515379p-243, 0.0, 0.0, 0.0, 0.0,
     0x1.25924b813453dp-12, 0.0, 0x1.b8a6a9ed2cb9ep-516, 0x1.48dae7eb20b11p-534,
     0x1.9485357bed972p-482, 0.0, 0.0, 0x1.88a853a20bfc9p-236, 0x1.25556962005a4p-858,
     0x1.c5d0967b02f74p-592, 0.0, 0x1.288d080df8bp-846, 0x1.a7c98c12122dap-354,
     0x1.74848fabb9bfep-305, 0x1.18d65e1682efep-709, 0x1.be02bb14a1f9ep-13, 0.0, 0.0,
     0x1.170fbec6ea4c4p-582, 0x1.33663d4a69e7bp-357, 0x1.9450b0a08dd18p-683, 0.0,
     0x1.69a8a8fac3076p-634, 0.0, 0.0, 0.0, 0.0, 0x1.1b1db8e9b8e0cp-151, 0.0,
     0x1.72185a7848c9fp-722, 0x1.b3e37f08b593p-125, 0x1.ba672063928fep-880, 0.0, 0.0,
     0x1.fa389a3669535p-331, 0.0, 0x1.eb5eb9e3796b5p-877, 0.0, 0x1.61eadd2d0c557p-445,
     0.0, 0.0, 0x1.f89b3357f04cbp-926, 0x1.7624cbe7fda54p-725, 0.0,
     0x1.ab31ed6fc7114p-432, 0x1.4ab8f41c0d5d1p-214, 0x1.e03fe1b3b4aa8p-621,
     0x1.865a276a47db4p-34, 0x1.ea5c05a05cfabp-36, 0.0, 0x1.1e6707755bb5fp-746,
     0x1.04c666581dd8dp-570, 0x1.dda6e63995b62p-353, 0.0, 0x1.71f55a2c012e7p-85,
     0x1.f4f238e3bfd13p-339, 0.0, 0.0, 0.0, 0x1.3bb76fa84c62p-336, 0.0, 0.0,
     0x1.e1b3b6f187264p-927, 0.0, 0.0, 0.0, 0x1.573f4b5c3e805p-959, 0.0,
     0x1.62544e6412069p-296, 0.0, 0x1.274793b98b7dp-411, 0x1.10a33c448f7e8p-425,
     0x1.02c442e50084fp-361, 0x1.0aa2fa0e35d6ap-836, 0x1.00341e449744fp-257,
     0x1.5e04964e0a80cp-975, 0.0, 0.0, 0x1.5a3885bcde52cp-239, 0.0, 0.0, 0.0, 0.0,
     0x1.c9c678042a66dp-621, 0x1.751597669fe1fp-393, 0x1.17b4f61c0cf99p-928, 0.0,
     0x1.603a169e5d531p-773, 0.0, 0.0, 0.0, 0x1.116c7082244a4p-299,
     0x1.c9f9b431d5055p-535, 0x1.7268d338d90f6p-368, 0.0, 0x1.20df87546a11bp-60,
     0x1.ea5f4a1d1a565p-673, 0x1.2b270b872e537p-954, 0x1.02d2e8c4a8bedp-577,
     0x1.6e557d7d30ea5p-410, 0.0, 0x1.3a0958c55f222p-822, 0x1.bd9eaa7cec98ap-126,
     0x1.460d960165aebp-71, 0.0, 0.0, 0x1.aa533fb031e07p-147, 0x1.7eff7385a65cap-283,
     0.0, 0.0, 0.0, 0.0, 0x1.6015abde935bap-605, 0x1.25c03527654abp-803,
     0x1.87f775f8cf2c5p-652, 0x1.fa928b82d9a7p-506, 0.0, 0x1.dce453b6127acp-704,
     0x1.19496aafb5547p-205, 0x1.1c107dd4b5e9cp-809, 0x1.c2505d319f492p-994,
     0x1.2bd3587356eb1p-545, 0x1.6099c7533e725p-893, 0.0, 0.0, 0.0, 0.0,
     0x1.391fd1bbdfd04p-179, 0.0, 0x1.3568dd25839acp-801, 0x1.228e519661b82p-115, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1be5c6dc6b3b5p-397, 0x1.8ce19c8965a4p-540, 0.0, 0.0, 0.0,
     0x1.dcbef0f877655p-58, 0x1.a944838bae41ap-561, 0.0, 0.0, 0x1.90a1e56af7accp-59,
     0x1.a39a884a256f3p-993, 0x1.20fde83f866d9p-786, 0.0, 0x1.bc7b0c924818dp-239,
     0x1.967879f4c9ac9p-270, 0x1.93e33478fc74dp-45, 0x1.5840074c6627ep-971, 0.0, 0.0,
     0x1.a92598aa96f41p-452, 0.0, 0x1.a9121e1b6eefp-636, 0.0, 0.0, 0.0,
     0x1.a9eaf9d94c954p-279, 0.0, 0.0, 0.0, 0.0, 0x1.01f5f21a377fcp-819,
     0x1.ae03ce7381294p-149, 0x1.670537ece4e7bp-648, 0.0, 0x1.85851f040aa1ep-211,
     0x1.ae4ed1893350fp-500, 0.0, 0.0, 0x1.d89838d2728a6p-681, 0x1.959a64764befcp-463,
     0.0, 0x1.49d645cde1ba7p-1011, 0.0, 0.0, 0.0, 0x1.0e32f3e7548cfp-314,
     0x1.b940876780d69p-608, 0.0, 0.0, 0x1.70f0e30eaf0cfp-623, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.80cfea5856f56p-200, 0.0, 0x1.fb0f645bb5648p-320,
     0x1.e7926a07f624ap-398, 0x1.3f33ea2bd4fadp-857, 0.0, 0x1.2e10a6f5cf7bfp-918, 0.0,
     0.0, 0x1.f16a853ef96f2p-210, 0x1.be035bdf96a35p-206, 0x1.5921e215a78b4p-242, 0.0,
     0.0, 0.0, 0x1.49d31c255d33ap-862, 0x1.a19919e80c8b3p-245, 0x1.fc0d6c53b0735p-217,
     0x1.ead938fb7aa66p-980, 0.0, 0x1.315a82c62684p-735, 0.0, 0.0, 0.0,
     0x1.048fc60c1ecdp-187, 0.0, 0.0, 0x1.2a4cce477fc65p-422, 0x1.92eccce5b4aaep-32,
     0x1.fd0ab5217af9fp-989, 0x1.bf6d36503d72p-706, 0x1.8fbd58653abf6p-666,
     0x1.e9afe1f0ebb8cp-287, 0.0, 0.0, 0x1.8a06e2fd3846ep-138, 0.0, 0.0,
     0x1.22431c290e84p-475, 0.0, 0.0, 0.0, 0x1.eefa74d8f750fp-650,
     0x1.3e148d9cd7d4ep-803, 0.0, 0x1.6fbc03f1f7a9fp-959, 0.0, 0.0,
     0x1.03eaf253cad59p-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ed15a7679b5dp-821, 0x1.fa97e7a9a7a23p-30, 0.0, 0.0, 0x1.1afef14a58f68p-980,
     0x1.4104bd821d8c6p-137, 0.0, 0.0, 0x1.5e1f3a4b587c3p-138, 0x1.c5444cb27761bp-360,
     0x1.0d41741291eadp-881, 0.0, 0.0, 0.0, 0x1.fbaf162248d9bp-905, 0.0, 0.0,
     0x1.6474c24107887p-638, 0.0, 0.0, 0x1.683dec73de534p-472, 0x1.037d6523e3e41p-840,
     0.0, 0.0, 0.0, 0.0, 0x1.69035ef0ba0e2p-644, 0.0, 0x1.0f61acdd9f922p-541, 0.0,
     0.0
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
            tmp1 = Sleef_finz_rintd2_avx2128(tmp0);
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
    printf("Sleef_finz_rintd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_rintd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
