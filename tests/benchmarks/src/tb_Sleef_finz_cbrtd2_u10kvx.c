/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd2_u10kvx.c --function \
 *     Sleef_finz_cbrtd2_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0x1.bd97546586fa2p-246, 0.0, 0.0, 0.0, 0.0, 0x1.31365a8386b97p-712,
     0x1.f4fb13d819b77p-569, 0.0, 0.0, 0.0, 0x1.9ed8a20f7def1p-676,
     0x1.4ab1c2aaaff2fp-886, 0x1.02ede30bd8ba3p-897, 0.0, 0x1.69d61f79cfaf3p-604, 0.0,
     0.0, 0.0, 0x1.b3a5ce5eb887bp-787, 0.0, 0x1.b87a97e0a0715p-712, 0.0, 0.0, 0.0,
     0x1.b62857ed01c19p-931, 0x1.1b84fb0dd7193p-884, 0.0, 0.0, 0x1.1b6b57a9cd7d6p-282,
     0.0, 0.0, 0.0, 0x1.b5f421c07aae4p-101, 0x1.db1bd832811fdp-545,
     0x1.390f41a23cf5bp-141, 0.0, 0x1.6ffe8cb5bd8e2p-77, 0.0, 0.0, 0.0, 0.0,
     0x1.8f8f040409202p-218, 0x1.ff18e13a48db4p-569, 0.0, 0.0, 0x1.1eb62beec68f9p-987,
     0x1.7909ea295babdp-548, 0.0, 0x1.ea76c9fae0ac4p-243, 0x1.9a258c5048f5fp-429, 0.0,
     0x1.47e93cbfb10ap-781, 0x1.2374c6ac743fep-745, 0x1.d3afa4cad282p-327,
     0x1.54758a2f011efp-517, 0.0, 0.0, 0x1.b929e994c9044p-72, 0x1.a4765b3bb184p-67,
     0x1.52480443341dfp-906, 0x1.32faab2164655p-900, 0x1.4dac417c9799fp-670,
     0x1.8b05ed67242ccp-197, 0x1.d6181f19695e7p-873, 0.0, 0x1.ce85dfe26dab1p-272, 0.0,
     0x1.19e01169912fbp-405, 0x1.685bb2dae9111p-9, 0x1.27fce882d5ca2p-521, 0.0, 0.0,
     0x1.dcc479c53facep-876, 0x1.73c6eff30cc59p-851, 0x1.f60ae70714021p-611,
     0x1.0a608511de9a2p-313, 0x1.daa5e64d9f6bdp-838, 0.0, 0.0, 0x1.8f30ae53564e9p-227,
     0.0, 0.0, 0.0, 0x1.1bf06e433c9adp-139, 0.0, 0.0, 0x1.15b98fdd5796bp-799, 0.0,
     0.0, 0x1.9b1650aba3acbp-908, 0.0, 0.0, 0x1.710f92fb5857dp-179, 0.0,
     0x1.f5091febf2324p-768, 0.0, 0.0, 0.0, 0.0, 0x1.559a3d64a795fp-227, 0.0, 0.0,
     0.0, 0x1.254c3e6dbbb62p-672, 0x1.f3407704c5739p-541, 0x1.63d61844d88eap-709,
     0x1.d283f0d579e09p-810, 0.0, 0.0, 0.0, 0x1.eae33bfd76653p-815,
     0x1.f11b9487b8c08p-604, 0.0, 0x1.2a8c43488d68ep-210, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.96e8893dafc13p-842, 0.0, 0x1.84f6774ce2641p-298, 0x1.347def814ae44p-349,
     0x1.ceb9f9753cb15p-238, 0.0, 0x1.654efba8c6938p-247, 0.0, 0x1.b98db9f79a7b6p-708,
     0x1.e712f2e874b94p-762, 0.0, 0x1.6ef2a9bd302d4p-793, 0.0, 0.0, 0.0, 0.0,
     0x1.dd71134b388c5p-868, 0x1.d7aaeec6cabf7p-263, 0.0, 0x1.60c72e7d704b2p-391,
     0x1.2278d9870531fp-173, 0.0, 0.0, 0.0, 0.0, 0x1.aac51e6d82c3cp-94,
     0x1.17626011ae57ep-770, 0x1.3f23fd1b7cba9p-529, 0.0, 0x1.d65a654db50a3p-1002,
     0x1.a07ac36cb1ea3p-856, 0x1.51d26c6504e2dp-460, 0x1.69fe17ab529ebp-61,
     0x1.aeca37bdba8e5p-712, 0.0, 0x1.6dfd2e2e99001p-431, 0.0, 0x1.f14fb740b49cep-579,
     0.0, 0x1.62815c87b10fdp-960, 0.0, 0.0, 0x1.16c0d303f23a6p-61,
     0x1.9ef9a882a733fp-365, 0.0, 0.0, 0x1.b1770fd4187d4p-426, 0x1.6fc68ae02a1dep-993,
     0x1.0d7c4fb6cafdbp-1020, 0.0, 0.0, 0.0, 0x1.e105c8856cb12p-276,
     0x1.d43a5b21f2b04p-163, 0x1.a124234dc3121p-6, 0.0, 0x1.9b430cd2bfc66p-687, 0.0,
     0x1.0c3085abc5d4ap-939, 0x1.2cc626687c321p-759, 0.0, 0.0, 0.0,
     0x1.31e8073191019p-475, 0.0, 0x1.00157975bc01fp-499, 0x1.77aaf33e1bc23p-163,
     0x1.25a5ae7f31b68p-918, 0.0, 0x1.f3259fd200525p-446, 0.0, 0x1.c74d681d74f76p-458,
     0x1.4a4ee97655e1dp-541, 0.0, 0.0, 0x1.77693df62c1bdp-729, 0x1.f712ce84a7d0cp-79,
     0.0, 0.0, 0.0, 0x1.42604574a8982p-887, 0x1.1c3d1b51f9cecp-684, 0.0, 0.0, 0.0,
     0.0, 0x1.9a4e1064c4c83p-680, 0x1.8eea606755fe1p-250, 0x1.04e77f8bc292p-688,
     0x1.4c4b0ba053b2cp-542, 0.0, 0x1.f3796f4730f05p-208, 0x1.9139f92610a12p-457,
     0x1.045eb00b75a28p-843, 0x1.df0d4b4f22f8ep-753, 0.0, 0.0, 0.0,
     0x1.0e29e639d799fp-800, 0x1.e94f609399d71p-940, 0.0, 0x1.38e63ba774ecbp-800,
     0x1.99efffde0ed75p-347, 0.0, 0x1.307c991c52c54p-179, 0.0, 0x1.17243b460ed52p-318,
     0.0, 0.0, 0.0, 0x1.5fb698a3d0434p-260, 0.0, 0x1.6efb373d1c666p-230,
     0x1.f538e40c2a46p-894, 0x1.1a2b30900b656p-260, 0.0, 0x1.36185b83c1911p-640, 0.0,
     0.0, 0x1.cbfaded9694adp-172, 0x1.b0eb2a9e0dap-240, 0.0, 0x1.fb5cd89fe1f23p-717,
     0.0, 0x1.9ea27e0a77a04p-754, 0x1.5469ce09cbb6p-253, 0x1.c59a8190c4b8bp-366,
     0x1.7fec928f0f1f7p-215, 0x1.5dd747e10f19dp-857, 0x1.93a0a680f5a72p-665, 0.0, 0.0,
     0x1.36b3a6b5101bap-685, 0x1.d288182ee248cp-823, 0.0, 0x1.1b61e7bf3faafp-496,
     0x1.f27c44770b2b8p-999, 0x1.5caea863fc115p-845, 0x1.bdb1f5040ca1ep-244,
     0x1.5f6e84f0f5f86p-842, 0x1.3f57fd540fdc2p-594, 0.0, 0.0, 0.0,
     0x1.09eca5930cbc6p-776, 0.0, 0.0, 0.0, 0x1.c1ddb81f6aab1p-74, 0.0, 0.0,
     0x1.d4a53d2ce3012p-626, 0.0, 0.0, 0.0, 0x1.e873180db7208p-347, 0.0,
     0x1.aa7bde833df21p-307, 0.0, 0x1.3504fe551c29ap-832, 0.0, 0x1.6dac41e249a91p-938,
     0.0, 0x1.82a1eac194826p-156, 0x1.0ed93f76e93bfp-892, 0.0,
     0x1.d71cb5a3273bcp-1016, 0x1.351a0e19858f9p-360, 0x1.85c5998e9f9cdp-644,
     0x1.ed9e0320186dap-783, 0.0, 0.0, 0x1.6d85faf4a8115p-409, 0.0, 0.0, 0.0,
     0x1.ea84acee81affp-166, 0.0, 0.0, 0x1.46c9550b3294ap-525, 0.0, 0.0,
     0x1.57b85e9a85ef4p-202, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7ec793eb8749p-900, 0.0,
     0.0, 0x1.0c9f37e470f43p-489, 0x1.de7cd15fa12e3p-118, 0x1.84f537d7b59e4p-823,
     0x1.2330421f0f338p-485, 0x1.616e51db5ca1dp-721, 0.0, 0.0, 0.0,
     0x1.2ecc60c387c9ep-648, 0.0, 0.0, 0.0, 0x1.0233ad08d00f2p-91, 0.0,
     0x1.3d9f7a5e03e8ep-111, 0x1.a1f1fdf031e93p-958, 0.0, 0x1.ef47f38a5b82fp-340,
     0x1.e0d484ddc1564p-496, 0x1.656756e1599ep-5, 0x1.19cd3d7fdfb79p-514, 0.0, 0.0,
     0x1.8a78b350e50e9p-55, 0x1.3f90edd19020dp-25, 0x1.74e84df7c0facp-501, 0.0,
     0x1.9c3e21dd3b55fp-734, 0x1.5abdb9397b882p-758, 0x1.58a9a382555fp-138, 0.0,
     0x1.ad08e08810627p-549, 0.0, 0x1.3059f31d25453p-110, 0.0, 0.0,
     0x1.c8aacca07ad9cp-201, 0.0, 0.0, 0x1.a5ed2575e4d52p-5, 0x1.950804ddf1f0ap-991,
     0.0, 0x1.e8fbe880d4d53p-912, 0x1.114f48d991adcp-69, 0.0, 0x1.ff6bd84e38e41p-590,
     0x1.1a69bc73a280dp-49, 0.0, 0.0, 0x1.5217f475a0c63p-63, 0.0,
     0x1.077f05b087121p-319, 0.0, 0.0, 0.0, 0x1.901722a98ec29p-377, 0.0,
     0x1.dae393510c61bp-954, 0x1.5cd0818296b86p-814, 0.0, 0.0, 0x1.a092d7a3ab0e3p-688,
     0x1.ceec593de18fp-674, 0.0, 0.0, 0x1.00ee2508cd84cp-87, 0.0, 0.0, 0.0, 0.0,
     0x1.ced1e5ff76e3cp-984, 0.0, 0.0, 0x1.5a2c33d75bd92p-807, 0x1.cd8423576048p-216,
     0.0, 0x1.6aa365088eb2cp-366, 0.0, 0.0, 0x1.bdaf3997a634dp-210, 0.0,
     0x1.6970dd6d5a01p-1018, 0x1.9059ff8adb0c8p-240, 0.0, 0x1.e5b627dd1a269p-928,
     0x1.dfe3dea0dac32p-427, 0x1.feaab6f067efap-635, 0x1.2295b1224261ep-499,
     0x1.888c12e4010a9p-672, 0.0, 0.0, 0x1.a088b2727ca2dp-785, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.087ce9d0b9fd5p-799, 0.0, 0.0, 0x1.0b8c9250541ap-200,
     0x1.ec87f7e09b5cep-878, 0.0, 0x1.e09d7a28b3a9dp-470, 0x1.639dd35aa785ap-847,
     0x1.fb45712829a8fp-416, 0.0, 0x1.ecde87cb6e737p-78, 0x1.01e7977845716p-648,
     0x1.7d0c967f8f821p-187, 0x1.1d9d7531efce3p-522, 0x1.ac6e536fce063p-904,
     0x1.b0a0e99de7c97p-34, 0x1.6c7554af903d6p-205, 0x1.ed52a4bd2181cp-206, 0.0, 0.0,
     0.0, 0.0, 0x1.d7fdea7d44b92p-746, 0.0, 0x1.fbea991d12361p-363,
     0x1.587b734446726p-295, 0.0, 0x1.2e10af55c6bbp-451, 0x1.037d06d272ee7p-1006,
     0x1.0799e70b59051p-19, 0x1.e8efe25f69f4p-836, 0x1.9906d78f6d0bap-860, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f27a962d8251cp-452, 0.0, 0x1.ad63dd9d5823dp-837,
     0x1.7f7709016bedp-70, 0x1.bc76b0a964299p-343, 0.0, 0x1.fc40ff7c5ca17p-803, 0.0,
     0.0, 0x1.a073f64f23352p-701, 0x1.692c5893aba6p-202, 0.0, 0.0, 0.0,
     0x1.4f3317e3300fbp-290, 0x1.36bdc29c2d522p-66, 0x1.4c40e01089224p-516,
     0x1.36bf0183bfbf5p-476, 0.0, 0x1.08e63bafcdf4fp-318, 0x1.061fffcbef9b4p-748,
     0x1.20317197d15fcp-864, 0.0, 0x1.6898880422f2dp-437, 0x1.728adfb0da842p-939, 0.0,
     0.0, 0.0, 0.0, 0x1.b881b9cdbd697p-425, 0x1.cbbc093989b38p-421,
     0x1.a818d4007049dp-64, 0x1.5989652d88a73p-807, 0x1.8f31966a69bcep-956, 0.0,
     0x1.edc60b4fd0f53p-753, 0x1.fddbf93c2896ep-183, 0x1.82dd79f3c7a9p-656, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7020cf28582b1p-186, 0.0, 0.0, 0.0,
     0x1.7c7c82e814b54p-826, 0x1.6ffbf821a2195p-235, 0x1.9a191557ee38fp-952,
     0x1.4479795260021p-7, 0x1.c1963a54bd9c4p-459, 0.0, 0.0, 0x1.5ff4064bf692ap-66,
     0.0, 0x1.51f567b712e1ap-531, 0.0, 0x1.eb5c0edf40366p-57, 0x1.ca6d2e70beeaap-177,
     0.0, 0.0, 0x1.a4ad493617fdbp-149, 0.0, 0.0, 0x1.9e44619ccc0f5p-820,
     0x1.67d081a360eb4p-265, 0x1.dc25bd2d8dfdcp-972, 0x1.8dbae2f07a7bep-635, 0.0, 0.0,
     0.0, 0x1.1f1ff882e752bp-618, 0.0, 0x1.53ce5603ba469p-230, 0x1.1bdb80882d287p-662,
     0.0, 0x1.0368fa29cbe9ap-971, 0.0, 0.0, 0x1.1a858191d4d11p-54, 0.0, 0.0,
     0x1.c5090bb24a27ap-35, 0x1.8069bfbbd6e54p-410, 0.0, 0x1.20674ce898055p-506, 0.0,
     0x1.69b1dac352c41p-590, 0.0, 0x1.7c3493d9e0369p-735, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fe536a31d8167p-108, 0.0, 0x1.d29761cafafbcp-319, 0x1.81cd8f55ebd0fp-49,
     0.0, 0.0, 0.0, 0x1.48de3e2f47db9p-924, 0x1.038862d6b3d1bp-260,
     0x1.bd46bf24e6086p-512, 0x1.83151ca7e747dp-450, 0x1.55923303dbaeep-283,
     0x1.fb249936b373bp-394, 0.0, 0.0, 0x1.46a73d6b17862p-735, 0x1.c522688543508p-212,
     0x1.2146a8aeff638p-341, 0x1.3ed798887e42ap-204, 0x1.58725ff1eb9a1p-918,
     0x1.9680a3b68a211p-488, 0.0, 0.0, 0x1.248fad879b10dp-164, 0x1.1ce852f9ac1f9p-428,
     0x1.645a77febc382p-241, 0x1.5da3f4e893594p-148, 0.0, 0x1.abc4fccda6776p-197, 0.0,
     0x1.d23d875b4dfadp-430, 0.0, 0.0, 0x1.f3bc04f9ddcedp-671, 0.0, 0.0, 0.0,
     0x1.24fb8d689f2b7p-41, 0x1.061ae062fc44p-1011, 0x1.69ac603842f22p-635,
     0x1.742bfaf829863p-219, 0.0, 0.0, 0.0, 0x1.3174d76853756p-855, 0.0,
     0x1.e92dd60f3704cp-628, 0.0, 0.0, 0x1.e0d61afa9e412p-746, 0x1.1c7df24c6e7a2p-528,
     0.0, 0x1.fdd4993200123p-422, 0x1.4065e0eb2e13dp-178, 0x1.cb6b1b021815p-599, 0.0,
     0.0, 0x1.c8aafb4cc8b03p-475, 0x1.ec2b588393e15p-329, 0x1.12b2fcf6e69dep-767,
     0x1.1f31ef65d4da9p-858, 0.0, 0x1.31db4389827ccp-632, 0.0, 0.0,
     0x1.53cbe258fcda4p-1012, 0.0, 0x1.fcd9e4220ddb3p-850, 0.0, 0.0,
     0x1.6b1c4c092dc29p-876, 0x1.f48d08be19ce4p-401, 0.0, 0.0, 0x1.abf337bbb8c65p-658,
     0.0, 0x1.65eda1fa2e4fcp-795, 0x1.9d38c2b6e792p-319, 0x1.e0496aeef9d8ap-810,
     0x1.2515aa2bf7c88p-473, 0x1.806180589b2bdp-496, 0x1.789475edad8b7p-733,
     0x1.7d4174df8836bp-331, 0x1.b74463be9ee39p-3, 0x1.cda4e4bc55f9fp-873,
     0x1.a0fc7b15b95a9p-676, 0x1.2831e89172303p-917, 0x1.4851ba095af4dp-746, 0.0,
     0x1.0a60eb3b2ab52p-264, 0.0, 0x1.0c59311389d28p-184, 0x1.59f44f230182ap-603,
     0x1.04f5a41d89931p-651, 0x1.10dbc15a613a5p-215, 0.0, 0.0, 0.0,
     0x1.5b2a3d5f93eb9p-752, 0.0, 0x1.50cabea9d5dedp-968, 0x1.f94fd94ecf20fp-786,
     0x1.e0570b7a1d3c1p-174, 0.0, 0.0, 0.0, 0x1.c90d382f7b5p-860, 0.0, 0.0, 0.0, 0.0,
     0x1.9ded6ca33090dp-460, 0.0, 0x1.17ac665a99b8ep-900, 0.0, 0.0, 0.0,
     0x1.6b7df81e4c731p-856, 0.0, 0.0, 0x1.f56ae1e5d59acp-335, 0x1.05846e726c1c3p-968,
     0x1.f3168aca8d5fap-657, 0x1.c0a8213a85e56p-494, 0.0, 0.0, 0x1.a1f7ca63132a4p-353,
     0.0, 0x1.c07198b199fd2p-342, 0.0, 0.0, 0.0, 0x1.00d750e9c221ap-334,
     0x1.def24b6f0b645p-87, 0x1.9c43824f17cf5p-789, 0x1.c5203d7d690c9p-761, 0.0,
     0x1.306467319986bp-642, 0x1.c722778e9ffe7p-44, 0x1.10db988b79e13p-791,
     0x1.80ab3d7781ef3p-906, 0.0, 0x1.a2c597c697de7p-689, 0x1.de9330af25bcep-644,
     0x1.ff7f02ad7f396p-404, 0x1.64ef64792da2cp-367, 0.0, 0.0, 0x1.96d7193cdc2f6p-323,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.856e22dcf861ep-380, 0.0,
     0x1.b64dd364d33bbp-459, 0x1.30590439fca3ep-673, 0.0, 0.0, 0.0,
     0x1.ca2e26249762ap-365, 0x1.d75e9368926fp-611, 0x1.df872224f3f9cp-411,
     0x1.4494816e0afd9p-925, 0x1.586f21ad944a3p-289, 0.0, 0.0, 0.0, 0.0,
     0x1.00c2a61cfa146p-346, 0.0, 0.0, 0x1.2650d3bf268c5p-1004, 0.0, 0.0,
     0x1.e5211eb6b5fb1p-481, 0x1.335362023f07fp-594, 0.0, 0x1.375f291b50826p-613, 0.0,
     0x1.dd5483b2289efp-686, 0x1.22cc0ad82966ep-863, 0x1.ad44a7d703e12p-1018, 0.0,
     0x1.50d6e4aacc182p-782, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13043f0646607p-103, 0x1.a8af47e7589a5p-974, 0.0, 0.0, 0x1.28bdffa39aa59p-74,
     0x1.e8891bba36e2ep-818, 0.0, 0x1.867c42232c3d1p-117, 0.0, 0x1.c57fa6a346921p-687,
     0.0, 0.0, 0x1.20045216f159cp-742, 0x1.b1bf2c241a0ebp-922, 0x1.028deb18c83ecp-150,
     0x1.93e65f139a05dp-163, 0.0, 0.0, 0x1.96dc7ff09f87bp-784, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.920c9baeaba8fp-1002, 0.0, 0.0, 0.0, 0.0, 0x1.959753d62ca34p-110, 0.0,
     0x1.d3e39e652f3acp-959, 0x1.58c49a10f55e2p-473, 0x1.adcebd0542f0dp-436, 0.0,
     0x1.a85ab399d436bp-519, 0x1.8aa40c2e71113p-805, 0x1.cc64414b289bdp-48,
     0x1.39a1dc27fecbfp-826, 0x1.d37c088efbf4p-705, 0.0, 0.0, 0.0,
     0x1.164ee12308611p-847, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df3dc96a80eadp-664,
     0.0, 0.0, 0.0, 0.0, 0x1.2a566ed93c4e3p-390, 0x1.d48ada9a6a74fp-327,
     0x1.dbf6a446c97f1p-357, 0x1.de875fc500d56p-149, 0x1.02f9c5d1f8599p-644,
     0x1.fb9d5f7ba153ep-952, 0.0, 0.0, 0.0, 0x1.439d32f0f7ddfp-604, 0.0,
     0x1.846d4a2acdae1p-740, 0.0, 0.0, 0.0, 0x1.acbc5eb06d388p-643,
     0x1.565bf54ef81b6p-828, 0.0, 0.0, 0.0, 0x1.8c8a5e7cb982ap-574,
     0x1.776cce22c0319p-96, 0.0, 0x1.f0d5b8bed3a35p-308, 0x1.564c84841a345p-225, 0.0,
     0x1.c250c2772a06p-413, 0.0, 0.0, 0x1.65c231e8107e5p-602, 0x1.30f914267a42ap-994,
     0.0, 0.0, 0.0, 0x1.d5676fbe4cc16p-518, 0x1.cea3802936a22p-1003,
     0x1.a99f6b18b74efp-950, 0x1.09544489d90a7p-501, 0x1.89019073844acp-742,
     0x1.f626af444735ep-876, 0x1.97f4b845c3bf3p-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.920a885846ee5p-852, 0.0, 0x1.fe19a370efdbcp-501, 0x1.0d3c3becbdb21p-344, 0.0,
     0x1.74179b101ef1p-799, 0x1.0f9f80eb65ceep-257, 0.0, 0x1.80b9bb7bcd1a7p-99, 0.0,
     0.0, 0x1.e8c40c13b4df3p-854, 0x1.4e049f4645d78p-68, 0x1.9ad32f2d7d675p-1022,
     0x1p0, 0x1.6a64a15eaa051p-213, 0x1.1d5591c3b8a3ap-933, 0.0,
     0x1.b1378b090d153p-55, 0x1.3538262bfd664p-803, 0.0, 0.0, 0.0,
     0x1.94a2326ed8eadp-632, 0x1.bc92d321edf9ap-989, 0.0, 0.0, 0.0, 0.0,
     0x1.3b8381c4cf679p-40, 0x1.156175b4847fdp-648, 0.0, 0.0, 0x1.dbd9ead5ce671p-916,
     0x1.9f572db295cb7p-608, 0.0, 0x1.e4129e0eda45ep-407, 0.0, 0.0, 0.0,
     0x1.f21a40bd3b036p-529, 0.0, 0x1.218046f967319p-534, 0.0, 0.0,
     0x1.6c3c97f8c6ff4p-925, 0x1.1b4b9990ec5dep-714, 0.0, 0.0, 0x1.cc2284b411984p-938,
     0.0, 0.0, 0.0, 0x1.169688d5bd47ep-5, 0.0, 0.0, 0x1.ebf2540e02c13p-562,
     0x1.4a1ec32faef2dp-675, 0.0, 0x1.5a06122d85f86p-737, 0x1.bcc09ed055404p-14, 0.0,
     0x1.dff31a6073774p-794, 0x1.732d8aae5209bp-700, 0x1.c529bd9908ebfp-369, 0.0,
     0x1.1eb9f7bd3107ap-1, 0x1.fb345aec00827p-65, 0x1.9fcea013f0927p-901, 0.0, 0.0,
     0x1.dc9ae5c8cbaaep-380, 0x1.8ab872706c51cp-309, 0x1.074b808fbad26p-658,
     0x1.25d94a9666043p-460, 0.0, 0x1.79e6bbfb3de59p-173, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.84d32e691f146p-751, 0x1.dea349698e43p-437, 0.0, 0.0, 0.0, 0.0,
     0x1.34c24a9a5bc4p-331, 0x1.da238eb13fb0fp-804, 0.0, 0x1.e30ad7461852ap-705,
     0x1.81e612cca156fp-15, 0x1.bf5ab805609a9p-242, 0.0, 0x1.ab018156701ddp-8, 0.0,
     0x1.df9c046e59af7p-660, 0x1.0e355009d7f37p-509, 0x1.666850dba05f5p-223,
     0x1.108e6ec9e7f89p-18, 0x1.b993228a075cbp-968, 0x1.4c03e9c6f059ap-681, 0.0, 0.0,
     0x1.b4e1bedaa705fp-302, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a07ef618db0d8p-842, 0x1.5536ed4335b3bp-406, 0x1.2ea7070a90b4ap-898, 0.0,
     0x1.f79adbd20a4b5p-845, 0x1.8009f5c4e197bp-186, 0x1.bcee533a10afp-299, 0.0,
     0x1.f1767ad0f5ac5p-74, 0x1.9d73fc50e2702p-666, 0.0, 0x1.1e5f800d6814ap-1002, 0.0,
     0x1.1580c61e0ba5bp-300, 0.0, 0x1.731e75db2cc64p-978, 0.0, 0.0,
     0x1.12344fc244903p-413, 0x1.35228971bd4e8p-58, 0.0, 0.0, 0x1.7fe673da5a9d9p-518,
     0.0, 0x1.0654c82e9d86bp-496, 0x1.3c73323a84754p-892, 0x1.fcd6ae08d4734p-383,
     0x1.ad711b0a5b703p-412, 0x1.ea59cc1ed9281p-229, 0x1.d7e60888c3103p-480, 0.0,
     0x1.78d66d4c70d37p-156, 0x1.6ea847ffa45eap-157, 0.0, 0x1.a7f8df71ee53ap-698, 0.0,
     0x1.842976febb3b1p-809, 0.0, 0x1.f57209515370ap-404, 0.0, 0x1.47c867ca0e6d7p-247
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
            tmp1 = Sleef_finz_cbrtd2_u10kvx(tmp0);
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
    printf("Sleef_finz_cbrtd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
