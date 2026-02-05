/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asinhd1_u10purecfma.c --function \
 *     Sleef_finz_asinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.4967aab74d5ffp-523, 0.0, 0.0, 0.0, 0.0, 0x1.b59bf890ca523p-549,
     0x1.7e55f796c9253p-976, 0.0, 0.0, 0x1.db692ea6fef5dp-633, 0x1.f9922f3f962f2p-469,
     0x1.eca3d65478d1cp-990, 0x1.516207a2ec26ep-443, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8dc4fdc25798p-528, 0.0, 0.0, 0x1.c19cc249bfcbfp-998, 0x1.02a11c4b00eep-235,
     0.0, 0.0, 0.0, 0x1.8ee2af703d2d3p-670, 0.0, 0x1.e3336d9094456p-603, 0.0,
     0x1.37731036a06b1p-990, 0.0, 0x1.5b5035798483ep-263, 0x1.975ed9430dea2p-292, 0.0,
     0x1.1cadc1ade8107p-920, 0.0, 0.0, 0x1.e582d40208f3bp-483, 0.0,
     0x1.534ffb81e05afp-310, 0x1.565b0233bf79dp-582, 0.0, 0x1.5c208ede455f8p-167,
     0x1.85194b456bb34p-940, 0x1.0f529bf598a51p-77, 0x1.5238bc93666f1p-502,
     0x1.10ac265991033p-231, 0.0, 0.0, 0x1.bcf9f4a6c12bfp-701, 0x1.705cbb43a562dp-535,
     0.0, 0.0, 0x1.27d05f8e6ee08p-209, 0x1.b257fd22634c8p-666, 0.0,
     0x1.1fb95bd658e85p-797, 0x1.a8f9f0269d585p-679, 0x1.77a10ce23c363p-877,
     0x1.9153ca3cb0b17p-31, 0x1.bcec54985e9bcp-67, 0.0, 0.0, 0.0, 0.0,
     0x1.bd7199c3f5e9ap-745, 0x1.d4d559e55d5e4p-460, 0.0, 0.0, 0.0,
     0x1.c772648a25112p-625, 0x1.19617d027a42ep-988, 0x1.c7948a29afe8bp-87,
     0x1.c45f3be43338dp-698, 0.0, 0x1.213e845f545c1p-605, 0.0, 0x1.d4ecbcf0ace79p-795,
     0x1.353c1d030789ep-404, 0.0, 0.0, 0x1.3abfd2e4e79eap-51, 0.0, 0.0, 0.0,
     0x1.29b02dbb1fe2dp-689, 0x1.c7b73fe467cffp-857, 0.0, 0x1.2ecfd6c7e3332p-346,
     0x1.fabf0f3a2d72ap-966, 0.0, 0.0, 0.0, 0x1.5d4458bacbe77p-190,
     0x1.cc36fe4a05c0dp-827, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d0b4993d240dp-35, 0.0, 0.0,
     0.0, 0x1.59058c5a6eacdp-553, 0.0, 0.0, 0x1.d416c19e53406p-169, 0.0,
     0x1.830529826ad99p-408, 0x1.38db807f023edp-820, 0x1.7ffe325ac38bdp-689,
     0x1.5e4b95f3da65ep-364, 0x1.49c51534a803fp-703, 0.0, 0x1.0f4b1ba66282ep-943,
     0x1.ce657ac229b9cp-517, 0.0, 0.0, 0.0, 0x1.6926f3a972b7p-417,
     0x1.f4e51e5119daep-115, 0x1.59da2e8096f4cp-654, 0.0, 0x1.9ac20e6094401p-164,
     0x1.3aa45896f1abap-898, 0x1.f909f22ded288p-700, 0.0, 0x1.be7d6f3cac83dp-199, 0.0,
     0x1.bb40ce47dbff3p-877, 0.0, 0x1.d9d5e7b8f36f2p-993, 0x1.33354717d0d7dp-336,
     0x1.499fde58ff6c3p-211, 0.0, 0x1.2ffd3dcb67239p-122, 0x1.1ed421126e58fp-228,
     0x1.c39ccba3f2799p-347, 0x1.b31baf6b3af62p-166, 0.0, 0.0, 0.0,
     0x1.c56bc7701002p-703, 0x1.9119998ba5c9bp-189, 0.0, 0x1.b8d76f6c4d62fp-779, 0.0,
     0x1.de10ff9521da1p-847, 0x1.1f84ac3b18a55p-1000, 0.0, 0x1.7c39e5ed083a9p-688,
     0x1.a626bbc92abf7p-825, 0x1.94514d630f3c2p-121, 0x1.2a04bf830b70ap-795, 0.0, 0.0,
     0x1.e073e74831593p-450, 0x1.0663580a5605cp-794, 0x1.463408e7998b3p-285,
     0x1.df370c1dee66fp-988, 0x1.83139fc4fb563p-358, 0.0, 0x1.ca1979d71e271p-391, 0.0,
     0x1.9802d62d30a18p-901, 0x1.7a993e497efc2p-978, 0x1.c23038dc067a3p-414,
     0x1.f15e9e7d31c6cp-824, 0.0, 0.0, 0x1.eed2678aa5573p-322, 0x1.da113fb0a19e5p-188,
     0.0, 0.0, 0x1.45cbb9e9cf376p-679, 0x1.80eae0ba45e3dp-849, 0.0, 0.0, 0.0, 0.0,
     0x1.e274110bfc851p-578, 0.0, 0.0, 0.0, 0x1.4517c054f9fadp-529, 0.0, 0.0, 0.0,
     0.0, 0x1.281a9044cbc24p-28, 0x1.ad6d7c44eceafp-111, 0x1.206277c6174bcp-858,
     0x1.71b924ee86197p-254, 0.0, 0.0, 0x1.ce97464a68d23p-653, 0x1.0df524e3a1e1p-644,
     0.0, 0x1.5f95437be2719p-791, 0.0, 0x1.31f04134913c6p-818, 0x1.e309a1ad04096p-110,
     0.0, 0x1.428373785c4b8p-408, 0.0, 0.0, 0.0, 0x1.cdeb21c564841p-717, 0.0,
     0x1.235b38a3f29a2p-857, 0x1.01d40447b2f39p-745, 0x1.00354b3c24354p-387,
     0x1.c5a4e3ffc9f56p-822, 0.0, 0.0, 0x1.2e989af992617p-419, 0x1.9c987b5ee7b54p-112,
     0.0, 0.0, 0.0, 0.0, 0x1.2fcdf3d0eebd6p-419, 0x1.7d34d304b131bp-346,
     0x1.d5400516f4fe6p-483, 0x1.c38cb85a4e8dbp-480, 0x1.426125d6885acp-774,
     0x1.3e29be3d3261p-188, 0.0, 0x1.7b86766326b64p-572, 0x1.60f8dab1cdc95p-357, 0.0,
     0x1.0425d24fb1d46p-787, 0.0, 0x1.ac6343bdb4f4dp-396, 0.0, 0.0, 0.0, 0.0,
     0x1.c1f0a5353608dp-452, 0.0, 0x1.84d1f8c5d3a3p-412, 0x1.42b01c202fd3bp-313,
     0x1.aabed6483d47cp-129, 0x1.4e13036c743f3p-707, 0.0, 0x1.f3b9d500e67fcp-896, 0.0,
     0x1.ba68436eb6f6bp-753, 0.0, 0x1.c39af878602b3p-999, 0x1.f524852127209p-467,
     0x1.da71b0003bdabp-650, 0x1.583e1dac519c2p-679, 0x1.0c97954d0ffb7p-500, 0.0,
     0x1.61b1510f778a4p-474, 0.0, 0x1.7747f108e85dp-798, 0.0, 0.0, 0.0,
     0x1.938328668f547p-975, 0x1.18de2f108a104p-473, 0.0, 0.0, 0.0,
     0x1.9eaf26dcdef33p-207, 0.0, 0.0, 0x1.0a1adadbf6eaap-201, 0x1.c4cda7d826a73p-695,
     0x1.6e8be70d8b2a7p-831, 0x1.7e09182e2b558p-942, 0x1.31740faad403cp-921, 0.0,
     0x1.1b76aa3a5236dp-575, 0.0, 0x1.3febfb78fbf68p-145, 0x1.71f4d4b8a1b5fp-619, 0.0,
     0.0, 0.0, 0x1.17bed51a30892p-316, 0.0, 0x1.650ddb2627c75p-495, 0.0,
     0x1.11c430b8fdc8ep-297, 0x1.7fbe7f7116983p-782, 0.0, 0.0, 0.0,
     0x1.b6e991d1e9c45p-118, 0x1.ec2eb3f9dca0ap-273, 0x1.324c71518fbbap-263,
     0x1.48be51d2baef3p-322, 0x1.d7105c815c0a4p-789, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7ff4a3e6b5587p-1002, 0x1.b5b917d67e696p-193, 0.0, 0.0,
     0x1.f8dc5d7d6cc39p-839, 0x1.768d33f5b3764p-368, 0x1.4dc5c60cd7f1ap-455,
     0x1.6c14e9ce9b7fep-432, 0.0, 0.0, 0.0, 0x1.517e10efa71b6p-170, 0.0,
     0x1.ca7eb7cc725fcp-927, 0.0, 0.0, 0x1.060ce30bf36fep-349, 0x1.89f3c5449d9adp-213,
     0x1.9cd72775c104dp-128, 0x1.8080a45a98a18p-265, 0x1.a6c0285142289p-721, 0.0,
     0x1.c2d51920119eep-375, 0.0, 0x1.0d74fb4e86f77p-64, 0x1.47194b0abe84dp-105,
     0x1.b31e45a899bf6p-530, 0.0, 0x1.e90809ea9a83p-532, 0.0, 0x1.1fb0f66570bdp-783,
     0x1.2c3a6dfc31082p-696, 0.0, 0x1.2b2d73b9ac8bp-953, 0x1.f762ed9e27488p-353, 0.0,
     0.0, 0.0, 0x1.07b6d38a7926ap-5, 0x1.96f4c30110577p-535, 0x1.9fb424b732e52p-426,
     0x1.c82ac46fe585dp-320, 0x1.dce1b167c3e28p-299, 0x1.1f7b13b14731dp-129, 0.0, 0.0,
     0.0, 0x1.0566cd95912ecp-174, 0x1.e5f8462ea6ec3p-551, 0.0, 0.0, 0.0, 0.0,
     0x1.ce29a945dfdf8p-596, 0.0, 0x1.3a5caed686a4dp-988, 0.0, 0x1.e4fcddb7d08e5p-750,
     0.0, 0x1.74e5f0ace74f9p-1005, 0.0, 0.0, 0.0, 0x1.638b8d6b740b9p-742,
     0x1.bdff793379d32p-28, 0.0, 0x1.8e4c7b1596fb7p-855, 0.0, 0.0,
     0x1.4995011ca79d5p-22, 0x1.c6ad3c5fea9dp-621, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.adb1eb7cc4cefp-869, 0x1.7e772bbe95334p-613, 0.0, 0.0, 0.0,
     0x1.784438457d255p-539, 0x1.3b573da23569ap-772, 0x1.1893fa34039e3p-615,
     0x1.86dd6cc985602p-38, 0x1.c662e2122fd63p-720, 0.0, 0x1.2397ce54940dbp-164,
     0x1.5dde533b858d1p-916, 0x1.70cb710553afdp-523, 0x1.4c770b5e0b47p-854, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1dfbd8adb3abp-583, 0x1.69099f0ea42d7p-48, 0.0,
     0x1.9a805545d8707p-996, 0.0, 0.0, 0x1.7a48b5b1cb168p-856, 0x1.5898c26e5b399p-20,
     0x1.a4e2b6f08d923p-866, 0x1.b3ac0d5955bf7p-979, 0x1.2d7ad8d4f4429p-589, 0.0, 0.0,
     0.0, 0x1.1cb25c8350aa8p-550, 0x1.026aa98a4dcfdp-39, 0.0, 0.0,
     0x1.9dc24943008cfp-100, 0.0, 0.0, 0x1.f0f50f43b7b4ep-904, 0.0,
     0x1.f84d772f8a28dp-520, 0x1.833056692c6a8p-892, 0x1.cb2f2994c47bcp-247, 0.0,
     0x1.c1a4538e7d99bp-396, 0x1.4badb672124a5p-409, 0.0, 0x1.bc06f145ff481p-122, 0.0,
     0x1.453c69497b349p-393, 0.0, 0x1.0fc40b308c9e2p-179, 0x1.b0fe1a8b4e0afp-749,
     0x1.31c4b46660aa3p-908, 0x1.3f633e5ee3711p-804, 0x1.f2552d05a339dp-811, 0.0, 0.0,
     0x1.b976fec47685p-571, 0x1.cd38c7396f046p-473, 0.0, 0x1.37a85d0a74dccp-946, 0.0,
     0x1.d440f987301efp-923, 0x1.c8bbcf1809849p-318, 0x1.f80671eb9bf4ep-282,
     0x1.c6096c0490651p-29, 0.0, 0.0, 0x1.940fe02d5d5b1p-759, 0.0,
     0x1.91cb4420d6382p-722, 0.0, 0.0, 0.0, 0x1.8d9079173fac1p-310,
     0x1.97dda5a8eda0ap-652, 0.0, 0.0, 0x1.751d201faf739p-687, 0x1.9e43403134b46p-467,
     0x1.9f995914b6fdep-321, 0x1.319e89caac382p-395, 0.0, 0.0, 0.0, 0.0,
     0x1.242f330558dd2p-1022, 0x1.0eeabc9810f28p-748, 0x1.b7e403ab4cefbp-278,
     0x1.018fb67f55753p-790, 0x1.2f157aeec6006p-363, 0.0, 0x1.87dd256f53f58p-895,
     0x1.0a73a00e37827p-588, 0x1.a9f38e889e3fdp-352, 0x1.afab3292cf0dbp-84,
     0x1.4b883da8e1a9dp-58, 0.0, 0x1.3934282d07885p-735, 0x1.62f0eeea2543cp-957,
     0x1.7d46007a6dddep-238, 0x1.c3efd71fbeca8p-39, 0.0, 0x1.8e00074a2ac52p-800,
     0x1.1ae224019579cp-681, 0x1.42c30f7ce297bp-361, 0.0, 0.0, 0.0,
     0x1.7258432181e42p-658, 0x1.d43bdb51d59e5p-215, 0.0, 0.0, 0x1.0f9e639b26aa5p-444,
     0x1.dae0469ae2dbdp-660, 0x1.cfb31e5955e46p-97, 0x1.02826b366e60bp-176,
     0x1.f6c0c920705fcp-45, 0.0, 0.0, 0x1.98d69bb9f9529p-363, 0x1.2fd24982f0b66p-421,
     0.0, 0x1.de98c054ddcd4p-96, 0x1.f587bdc39c3b3p-397, 0.0, 0x1.aba1e7b6096d6p-844,
     0x1.d063461683644p-789, 0x1.14e6ad7e61ap-924, 0.0, 0.0, 0.0,
     0x1.755384563e4f9p-67, 0.0, 0x1.2b5f1a1e4eb1fp-293, 0.0, 0.0,
     0x1.40f18a32b43bfp-413, 0.0, 0.0, 0.0, 0x1.c447facfb4eep-625,
     0x1.b05e35371655fp-854, 0.0, 0.0, 0x1.f1e238369e237p-113, 0x1.144d25a03d925p-625,
     0.0, 0.0, 0x1.14575266dc8adp-583, 0.0, 0x1.8342af5541eebp-770,
     0x1.ea83a422b4aa7p-86, 0x1.e1a88c03d89c9p-973, 0x1.659ab836931b8p-710, 0.0,
     0x1.77e4dd054a473p-869, 0.0, 0x1.b56059a855bc5p-953, 0x1.d0bdd7e702ac9p-574,
     0x1.5437f0c95ff8ep-1012, 0x1.7e891b234c10dp-1011, 0.0, 0x1.dfb7de1638bd9p-595,
     0x1.29ac41677f20ap-543, 0.0, 0x1.527e4b423dc24p-477, 0.0, 0x1.409ce2c45eb18p-958,
     0.0, 0.0, 0x1.783b8191d5db1p-685, 0.0, 0x1.885637cea95dfp-864, 0.0,
     0x1.ebd1819643b64p-693, 0x1.4fb10358ee3a5p-813, 0x1.fd66d21ff4aa4p-238,
     0x1.d1ff7ef22bd91p-894, 0.0, 0x1.3bed360282f4ep-939, 0x1.e883a12e5ebcdp-187, 0.0,
     0x1.a4daf6a671f3p-24, 0x1.5d8b424645da2p-189, 0.0, 0.0, 0x1.60fcd494cc491p-304,
     0x1.ecbd26bfbf005p-653, 0x1.28f5c5d2d0d14p-643, 0.0, 0x1.d865236f2143ap-748, 0.0,
     0.0, 0x1.7c9f9beff547ap-719, 0x1.87e37fdd42b27p-137, 0.0, 0.0, 0.0, 0.0,
     0x1.19d8740f47dc5p-132, 0x1.2c2a80915141cp-213, 0.0, 0x1.4d597adf6306cp-760,
     0x1.effb57cb2ee29p-45, 0x1.0172bd0645ac2p-15, 0.0, 0.0, 0x1.49678e8e4d7c6p-235,
     0x1.43d457d056d4fp-115, 0.0, 0.0, 0.0, 0.0, 0x1.29f9859f99b5ep-404, 0.0,
     0x1.7183aeb5c1899p-543, 0x1.66e6e535c6848p-177, 0.0, 0x1.6121352570428p-113,
     0x1.3e37ff5be62adp-3, 0x1.4d95b7d22ddc7p-100, 0.0, 0x1.0ccc8e6fbc9c4p-752,
     0x1.3e2bb9f0087b8p-953, 0.0, 0x1.e150e7d366f1ap-893, 0x1.e31c0fae72b8p-340, 0.0,
     0.0, 0.0, 0x1.bad992dd78d2ep-307, 0.0, 0x1.98a1e9646d9aep-470, 0.0,
     0x1.bc7604d5c9bd7p-513, 0x1.1a35c5e0673b2p-884, 0x1.4adcc66f9ebep-885,
     0x1.07972a2602d79p-963, 0x1.9afa22826b655p-550, 0.0, 0x1.79c493340fb46p-298,
     0x1.784ea546bb9cdp-440, 0.0, 0x1.69d7d27162a9ep-421, 0x1.88938f33d6ddfp-832, 0.0,
     0.0, 0x1.809e0e329cdb2p-467, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fe846e872c1bp-338, 0.0, 0x1.29b547d1b1239p-877, 0.0, 0.0,
     0x1.0fb2d1f8200dcp-52, 0.0, 0x1.451b79da147eap-624, 0x1.d7d2e97f6a5c3p-971, 0.0,
     0x1.4e9373619bafbp-832, 0.0, 0x1.ad56da3d5c34dp-446, 0x1.4f407ae78b71ap-88,
     0x1.b2fe38238cd27p-545, 0.0, 0x1.dad1c66d8944fp-538, 0.0, 0.0,
     0x1.9fed5ad9834aep-930, 0x1.4469a5865c0ccp-553, 0.0, 0x1.e4375b2f4d2fcp-286,
     0x1.f89c9925e0b73p-726, 0.0, 0.0, 0.0, 0.0, 0x1.485ffc03a9c3fp-747, 0.0, 0.0,
     0x1.aea44d96b4b72p-36, 0x1.7007e2261a8e3p-594, 0.0, 0.0, 0x1.24f4ebb382b68p-646,
     0x1.82ee526c7aa39p-392, 0.0, 0.0, 0.0, 0x1.a065a798a8e59p-863, 0.0, 0.0,
     0x1.80c94144a5967p-43, 0x1.988e49a6116ap-327, 0x1.100673e3c3ac7p-15,
     0x1.f9fe15576551ep-468, 0.0, 0x1.9a1ed0980ecbep-350, 0x1.1a246d0a77e7bp-1, 0.0,
     0x1.47023ab5bcd57p-648, 0.0, 0x1.979983cd3b64cp-554, 0x1.d1e8c7dd13577p-699,
     0x1.d620bafad09fbp-127, 0x1.202738c59e4a9p-866, 0x1.6fc38a4ff0b4ap-579,
     0x1.57b125527e43ep-877, 0x1p0, 0x1.c385b2eeff1cap-1005, 0x1.e344e984723a1p-637,
     0.0, 0x1.567eb4606842p-220, 0x1.8374a3baccc1cp-291, 0x1.91b25a3e27bcep-840, 0.0,
     0x1.82d2c943be9c2p-912, 0.0, 0x1.a6be44f9167f2p-384, 0x1.0110c3c4908efp-88,
     0x1.95d0124399945p-610, 0.0, 0.0, 0x1.17fdfe846fe5cp-913, 0.0, 0.0, 0.0, 0.0,
     0x1.2987993abb984p-611, 0x1.265fe78d24d76p-901, 0.0, 0.0, 0.0, 0.0,
     0x1.571d6c1c7bbdap-563, 0.0, 0x1.d15bf7ca8f991p-105, 0.0,
     0x1.e36a955dafe75p-1020, 0x1.fc154ca4f2b8fp-508, 0.0, 0.0, 0.0, 0.0,
     0x1.e6eb3bda8d2f8p-747, 0.0, 0.0, 0x1.5d9480888f5dcp-971, 0.0, 0.0,
     0x1.ac0d5638ca1c2p-910, 0.0, 0.0, 0x1.4f5d328a72946p-584, 0.0,
     0x1.27f77a19f9a41p-230, 0.0, 0.0, 0x1.ee2ce6fb2f168p-238, 0x1.342ff492f299cp-678,
     0.0, 0.0, 0.0, 0x1.a87d80c0e48d9p-650, 0x1.9725e04005b9cp-701, 0.0, 0.0, 0.0,
     0x1.af8d5d8dd2beep-72, 0.0, 0.0, 0.0, 0.0, 0x1.58d3724cb96efp-143, 0.0,
     0x1.3b31b1937c13p-28, 0x1.3687d7c58e95ap-808, 0x1.52c2031fee97ap-891,
     0x1.512a8b7f2fa99p-875, 0.0, 0x1.b2bc3c05257d7p-178, 0x1.44587c5e90624p-61,
     0x1.05f7178925cddp-374, 0.0, 0.0, 0.0, 0x1.dfc0a8b7c9d17p-866,
     0x1.e950d056de51cp-366, 0.0, 0.0, 0.0, 0.0, 0x1.f6ae355248f1p-901, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b15647555a2e2p-150, 0.0, 0x1.c70e0bb08bff3p-203,
     0x1.938f9fbd29bbap-295, 0.0, 0x1.c62445507f7f9p-836, 0.0, 0x1.d75b6f4790cd2p-210,
     0.0, 0.0, 0x1.6cc7f31612c45p-997, 0.0, 0.0, 0.0, 0x1.618a27808b77dp-188, 0.0,
     0.0, 0x1.99143fea8b458p-79, 0.0, 0x1.35ff04e0a4a6ep-472, 0.0,
     0x1.ab854d1d92721p-829, 0.0, 0.0, 0x1.1ec57a19b5ff2p-126, 0x1.9d84102315df2p-911,
     0x1.a7bb017fa5c8ep-26, 0x1.9a234171c407ap-700, 0x1.53f72f176249cp-788, 0.0,
     0x1.b7ac1fce9dbc8p-298, 0x1.e5d8e343f3783p-435, 0x1.d4ec920056d35p-22,
     0x1.a29277e1b7258p-873, 0.0, 0x1.2a8a6ac25b9fep-902, 0.0, 0x1.730a521a6634fp-60,
     0x1.c81f5083f15c8p-507, 0.0, 0x1.f486e71ba4b41p-808, 0.0, 0x1.d39ad4692da95p-924,
     0x1.5bb388b37db6dp-190, 0.0, 0x1.dc5049eada02ep-848, 0x1.aa2344509e8bdp-682, 0.0,
     0.0, 0x1.c6ab77d444338p-517, 0x1.b1858e606bf79p-265, 0.0, 0x1.6e3faa8e72a6p-490,
     0.0, 0.0, 0.0, 0x1.f83064fed86f3p-900, 0x1.5c2fb0e587a3cp-689, 0.0, 0.0, 0.0,
     0.0, 0x1.d25257cfa4a6ep-163, 0x1.62871bcd43fd4p-403, 0.0, 0.0,
     0x1.bf7471c898b11p-924, 0.0, 0x1.50f0ce0bf6999p-792, 0x1.c400b3a9f8fdap-1003,
     0x1.64a651fcb4131p-890, 0.0, 0.0, 0.0, 0x1.df0968045418fp-639, 0.0, 0.0,
     0x1.a9c26e4ad3ec8p-110, 0.0, 0.0, 0.0, 0x1.eb97525e24fe7p-24, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.206f5bd90a3ap-53, 0.0, 0x1.5abf7e20a60aep-662, 0.0, 0.0, 0.0,
     0x1.9a53aceda9399p-677, 0x1.d680b1a1da79ap-281, 0x1.897c5bba99c5p-329,
     0x1.668de2e54bf5p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99f62e885087cp-152, 0.0,
     0x1.56cbb747fd1e6p-599, 0x1.13ef451ab5671p-833, 0.0, 0x1.cd93afe14cf8cp-369,
     0x1.294cf094279c6p-284, 0.0, 0x1.8d6fa53f49905p-598, 0.0, 0x1.b4f66c7540d54p-321,
     0x1.e0cd26a04d306p-159, 0.0, 0.0, 0.0, 0x1.f2a1a3726e276p-267,
     0x1.2f77282314ec6p-668, 0x1.116bcba33ac72p-19, 0x1.13e67762ab478p-542,
     0x1.c0192f7d6feb7p-43, 0x1.11100ff9fc6f8p-1008, 0.0, 0x1.c14d07cd114cep-784, 0.0,
     0x1.8300077864f22p-240, 0.0, 0.0, 0x1.0efa02b9cfeccp-397, 0.0, 0.0,
     0x1.bed6b3f6323bap-311, 0x1.3674f5c8726d5p-483, 0x1.2007844115c5cp-638,
     0x1.225251c44f7f7p-477, 0x1.f35a54a078235p-761, 0x1.30774e5c02702p-686,
     0x1.439ef78abb873p-25, 0.0, 0.0, 0.0, 0.0, 0x1.377f12bea3cccp-663, 0.0,
     0x1.c4f9b69b5e296p-944, 0x1.6ba08c48a18adp-539, 0x1.56299b2db2d2p-935,
     0x1.154f4cfe80a71p-878, 0.0, 0x1.dbd3646984b86p-911, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.696d4fb7082bfp-287, 0.0, 0.0, 0x1.a926a398e1b54p-903, 0.0,
     0x1.928c4fe29b7f7p-719, 0.0, 0.0, 0.0, 0.0, 0x1.e908dd4d2c6b8p-438,
     0x1.fe285284a1eb8p-184, 0x1.716ec8244e7e3p-716, 0x1.4eeb176d62385p-477, 0.0, 0.0,
     0.0, 0x1.e51787a7c0febp-95, 0x1.7c5016dbbaf3bp-463, 0.0, 0x1.87f1cba1fab2cp-475,
     0.0, 0x1.f847a9d6c726dp-679, 0.0, 0x1.738477c9e2fd5p-844, 0.0, 0.0,
     0x1.73357669c5ca6p-303, 0.0, 0x1.1f552d62603e6p-477, 0x1.39f70c7e85bcdp-532, 0.0,
     0x1.21406f8388fap-848, 0.0, 0x1.bcf23bf3f68c9p-27, 0.0, 0x1.41287bf15c649p-374,
     0x1.52225a3d273f9p-207, 0x1.90573eab10d7dp-491, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b55ffc8971f74p-990, 0.0
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_asinhd1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_asinhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
