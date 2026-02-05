/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncd4_kvx.c --function Sleef_truncd4_kvx --headers \
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
     0x1.d5771e6f3ba39p-959, 0.0, 0.0, 0x1.97e915e6768e9p-214,
     0x1.fc01a34cbc428p-756, 0x1.e8fb0f73fa904p-199, 0x1.5fa2095a19d02p-807,
     0x1.51972def93a46p-850, 0.0, 0x1.d7ff2ebaa25d5p-845, 0.0, 0x1.38d1af71bc955p-886,
     0.0, 0x1.5d770275f5585p-309, 0.0, 0x1.6e73e27cd73f6p-996, 0.0,
     0x1.e90c47b905f43p-121, 0.0, 0x1.bd835cc9b994p-546, 0.0, 0x1.b10080af7c39ep-754,
     0.0, 0x1.e155eb20390a3p-985, 0x1.892f9005743ebp-677, 0x1.968932dad79adp-217, 0.0,
     0x1.afbde38eb4aa5p-142, 0.0, 0.0, 0.0, 0x1.66220ae55f3e7p-397,
     0x1.17f94758dd96ap-357, 0x1.1c79007650df3p-807, 0.0, 0x1.d666323fb19cp-400,
     0x1.197b1a3d5ee51p-484, 0.0, 0x1.80bcc4f6c42ccp-824, 0.0, 0x1.50cc81252c7ddp-415,
     0x1.db461c6a232e3p-530, 0x1.1684836788b4dp-351, 0.0, 0x1.361b38d553935p-270,
     0x1.ecd8c481f640ep-579, 0x1.51556d49710bep-622, 0.0, 0x1.f83fa8afb988fp-37,
     0x1.98cea809af272p-154, 0x1.15fe2f566d519p-440, 0.0, 0x1.aadae69236ae8p-270, 0.0,
     0.0, 0x1.c0bd915cf517dp-665, 0x1.ec49d39eb9d88p-301, 0x1.befaca00ce255p-520,
     0x1.60b497a769b52p-320, 0.0, 0x1.2ebfe917ef6f5p-645, 0.0, 0x1.f267c20846b3fp-344,
     0x1.0dd0d7ba14398p-524, 0.0, 0.0, 0x1.1bf7bae0d5aebp-183, 0.0, 0.0, 0.0, 0.0,
     0x1.bde31aa70ae02p-555, 0.0, 0x1.a9070423964ddp-807, 0x1.de5952605ffep-49, 0.0,
     0.0, 0.0, 0x1.871cfa6ffa273p-228, 0.0, 0x1.616d340db3fbfp-104, 0.0, 0.0,
     0x1.45b968b76d177p-869, 0x1.94c6868306f7cp-209, 0x1.97759228373ep-589, 0.0, 0.0,
     0x1.6e8c3a6e0bf73p-544, 0x1.5aa27c760c54fp-675, 0x1.6d09083348c3dp-558,
     0x1.67919d505ef97p-344, 0.0, 0x1.71696af013a76p-212, 0x1.ebcb61424c84cp-906, 0.0,
     0.0, 0.0, 0x1.9a44f25933ed9p-446, 0.0, 0.0, 0.0, 0x1.be0a943057718p-676,
     0x1.9dfe2f6cab0d1p-389, 0.0, 0.0, 0x1.f187510614e3fp-201, 0x1.1b0572cd917adp-659,
     0x1.0762123914b65p-464, 0.0, 0x1.dc0853f05be2dp-124, 0.0, 0x1.e60e98b91189cp-504,
     0.0, 0x1.566bc1a906342p-307, 0x1.b2af3c858a79cp-399, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88209dfb13e25p-728, 0.0, 0x1.1d15ea4c07b67p-539, 0x1.3ff29487c37dbp-188, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39e61415439c9p-40,
     0x1.5fa25396405a6p-1020, 0.0, 0x1.2e0f8cffe8908p-1, 0x1.dc8b969306293p-43, 0.0,
     0x1.108b571ef873p-685, 0x1.f5b45d02b42e9p-660, 0x1.def5c1c6a7402p-229,
     0x1.4421dc12cee67p-168, 0x1.829854815890ap-1006, 0x1.d972bb8b1c346p-819,
     0x1.1d7b7c0714382p-739, 0x1.151220d88295cp-961, 0x1.fb6f06fc0bd2ep-14,
     0x1.96b3303fe49bcp-202, 0x1.bfc1a0ad4c80dp-734, 0.0, 0x1.9430af1920594p-88, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5fe8509aa7e28p-125, 0x1.db6f6d61a4d2bp-124, 0.0,
     0.0, 0.0, 0x1.2f69514df09e1p-571, 0.0, 0.0, 0.0, 0x1.15b52dcee913cp-399, 0.0,
     0x1.35269265183c1p-220, 0x1.5fb958b314bb5p-916, 0x1.ac04a8800ab56p-711,
     0x1.f20888385a65bp-291, 0.0, 0.0, 0x1.ec8c065c061d7p-873, 0x1.a1504a17409c6p-820,
     0.0, 0x1.1bec891565859p-801, 0x1.ae09cefd28397p-779, 0.0, 0.0, 0.0, 0.0,
     0x1.99cbe40bd5639p-978, 0x1.03c445bdf3731p-329, 0x1.39104f3f9d20fp-460, 0.0,
     0x1.932225a845939p-493, 0.0, 0.0, 0.0, 0x1.fd7fcb327acdcp-433,
     0x1.4f3be0a333185p-186, 0x1.aa51e1a7f6e42p-487, 0x1.a2b97939339b3p-834, 0.0,
     0x1.08d536344d29dp-523, 0x1.19193f1f09caep-158, 0.0, 0x1.6eea2784c8738p-135, 0.0,
     0x1.be173804c520cp-953, 0x1.cb3639bc5a7b8p-850, 0x1.cae509f828aa9p-824, 0.0, 0.0,
     0x1.cfb5b06a1bebbp-744, 0.0, 0.0, 0x1.09854e32c94c4p-5, 0.0, 0.0,
     0x1.657058c074f9fp-699, 0x1.68cacde6c7bb2p-408, 0x1.9cf6e970e46bfp-127,
     0x1.e2335e5af50a1p-541, 0x1.81b168cb1753ep-761, 0.0, 0x1.5fd3eed1dd09bp-214, 0.0,
     0.0, 0.0, 0.0, 0x1.5ed08e1e9f0f9p-513, 0x1.8b6c38d27dde1p-912,
     0x1.47d6e2ca3e1a4p-412, 0x1.932780ecfd147p-135, 0.0, 0.0, 0.0,
     0x1.7482c4eb9b7fap-666, 0.0, 0x1.84ed03b3ad59fp-942, 0.0, 0.0, 0.0,
     0x1.66f46df2aa367p-936, 0x1.8521710e6372ep-659, 0x1.e593bd8cfc5b9p-673,
     0x1.27ab5c0942664p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a6a9be918d6ap-950,
     0x1.55ab16210aff4p-738, 0.0, 0.0, 0x1.87d8e38d7bbcdp-68, 0x1.3fd7fa63a91a1p-227,
     0.0, 0x1.250bbb9f20fdp-463, 0.0, 0.0, 0.0, 0.0, 0x1.748f862e7fcd2p-174,
     0x1.39d07cfa0bdb3p-1000, 0.0, 0x1.d65a1a3418e06p-340, 0.0, 0.0,
     0x1.aefbfe1287098p-962, 0x1.fb79b289e6103p-888, 0.0, 0.0, 0.0, 0.0,
     0x1.32030fd05ea81p-811, 0x1.2525e98794e47p-283, 0x1.00cd5783a208ep-49, 0.0, 0.0,
     0.0, 0.0, 0x1.87f9c7382ba0bp-685, 0x1.568994b4b5756p-912, 0x1.edf80b609094p-959,
     0x1.975e1c7ab8c19p-310, 0x1.e70c0ef73438ep-95, 0.0, 0x1.9c6381dcff9p-101,
     0x1.d57ac3a16a8f3p-486, 0x1.1161a90feea5bp-661, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17833f3c64ce9p-497, 0.0, 0.0, 0x1.d167c463e7dafp-595, 0.0,
     0x1.006785fa403b8p-782, 0x1.b02029281b898p-225, 0x1.912a5d31cb079p-90,
     0x1.261471d4d64bfp-714, 0x1.ec92ba6b8fb51p-778, 0x1.28e85d5f5f2eep-835,
     0x1.73d592b6420d9p-1004, 0.0, 0x1.24c9802597ae5p-957, 0.0,
     0x1.c7f00a7dab6f2p-344, 0.0, 0.0, 0.0, 0x1.64bd165cfa544p-948, 0.0,
     0x1.7dbad6a600849p-964, 0x1.c6fb87535e19fp-171, 0.0, 0.0, 0x1.22c0fb3a4c81ep-144,
     0x1.9e953445ab592p-1017, 0.0, 0.0, 0.0, 0x1.1bfa5c12eab68p-500, 0.0,
     0x1.5a8f3d99fe98p-217, 0.0, 0x1.c47a586bf535ep-1010, 0.0, 0x1.aff14c5912c0fp-923,
     0x1.82d9c2094d68ap-979, 0.0, 0x1.65ca5d8e6dd9cp-865, 0.0, 0x1.c76f03ac822bep-493,
     0x1.b2a32a7e8af5dp-734, 0x1.aa756b9916794p-514, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1121a35475cb4p-27, 0x1.53c98d4753378p-752, 0.0, 0x1.f4745c5fef93p-584, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.37efa7dbf1fep-535, 0.0, 0.0, 0x1.c93189aee928cp-1005,
     0.0, 0.0, 0x1.923dd01bf9082p-29, 0.0, 0.0, 0x1.194f86e1aa707p-607,
     0x1.47090607b8036p-46, 0x1.69b147cd52d6cp-411, 0x1.309a47985af92p-387, 0.0,
     0x1.e7a17efe43f9bp-78, 0.0, 0x1.5a30016665cbfp-1012, 0.0, 0x1.79e0454cc8808p-585,
     0.0, 0.0, 0x1.06da42150996p-232, 0.0, 0x1.eeba326df1f33p-29,
     0x1.3dc0e3d5e8d08p-281, 0.0, 0.0, 0.0, 0x1.f23c5bf6061e8p-174,
     0x1.f57c8bbe0133p-213, 0.0, 0.0, 0x1.0a7872a37039ap-418, 0x1.c9e59cf079e8ap-986,
     0x1.30994270ffabcp-401, 0x1.66edb1fa6a1ap-162, 0x1.89036c04c4734p-875,
     0x1.1a8da8d990cbap-26, 0.0, 0.0, 0x1.5bd01e592039p-862, 0x1.c5882095e3efep-396,
     0.0, 0.0, 0x1.602f59dd6d071p-788, 0x1.def56e8d0e91dp-389, 0.0, 0.0,
     0x1.9b5707d6c8cfbp-568, 0.0, 0x1.efc283b275d2ep-567, 0.0, 0x1.793df8282713cp-260,
     0.0, 0x1.d0913a8f052c9p-560, 0.0, 0.0, 0.0, 0x1.f561a6c61fe7ap-806, 0.0,
     0x1.b16fdbb9eeedfp-87, 0.0, 0.0, 0x1.3f2379b2a456p-142, 0x1.16fe25d2fb5p-804,
     0x1.231479113c743p-645, 0.0, 0x1.47c19f5e2cce8p-978, 0x1.38930ba4bdfeep-768, 0.0,
     0.0, 0.0, 0x1.b93f5b4b6ba56p-232, 0x1.c9ac61d21e1b1p-621, 0x1.04ed72712abffp-555,
     0x1.052dea0e7336ap-286, 0.0, 0x1.69f0703c82aaap-377, 0x1.d2c05c3dbb87bp-887, 0.0,
     0x1.001cf3d8e2fc5p-345, 0x1.23d4463e779a2p-529, 0.0, 0.0, 0x1.de61bf7d7cb34p-409,
     0.0, 0x1.23b6a838abc44p-759, 0x1.201daae090c0cp-253, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0426ec5d7856cp-630, 0.0, 0.0, 0x1.e479b70bbc739p-592, 0.0,
     0x1.3b5cdaaeb952ep-332, 0.0, 0x1.f09d2ddef78c2p-464, 0x1.fe0d813410f23p-176, 0.0,
     0.0, 0x1.9d449c862d857p-637, 0.0, 0x1.ff0cc5fbd5fb9p-292, 0x1.7e73590296823p-722,
     0.0, 0x1.90d0e2c6bf208p-47, 0x1.fcfc9a64f8833p-796, 0.0, 0x1.274d3c11c7975p-346,
     0x1.3d49ac2291d2cp-987, 0.0, 0x1.4099872803e4ep-919, 0x1.df9df5767f807p-191, 0.0,
     0x1.f60b17bd51565p-104, 0x1.fb55bcf35d73ap-939, 0x1.2fc638a66ace2p-639,
     0x1.52500a645b132p-722, 0.0, 0x1.c46c0cf6d5bddp-399, 0x1.ac4df8af51c22p-6, 0.0,
     0.0, 0x1.6179376f3bbbep-597, 0.0, 0x1.c39b0631a9a9p-772, 0.0,
     0x1.c1d499867ab87p-462, 0.0, 0x1.ae0cbf2414461p-100, 0x1.fb06875541d25p-617, 0.0,
     0x1.a8def535d8944p-63, 0.0, 0x1.996e5c643acffp-153, 0x1.10e5a564851d5p-670,
     0x1.af51f891f481bp-524, 0x1.c55ccba1f61f2p-1000, 0.0, 0x1.f37efc0b01623p-84,
     0x1.d87495ce28bc7p-172, 0x1.e59a8c182016fp-45, 0.0, 0x1.e1dbbfdbc9df8p-450,
     0x1.241ac42f010a7p-248, 0x1.5983026c0c4p-639, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e005976392172p-768, 0.0, 0x1.9892d45a5978ap-360, 0.0, 0x1.f3ed9b0af7dd2p-504,
     0x1.4ce95d18f9a6ap-108, 0.0, 0.0, 0.0, 0x1.d1c3b10ca7d42p-953,
     0x1.03f82ec72d3aep-670, 0.0, 0x1.a23e7a2a4d905p-352, 0x1.f5d2d355f5493p-488,
     0x1.24f0726efb725p-614, 0.0, 0.0, 0x1.d0132cef5b268p-756, 0x1.6d5a5f78f953bp-667,
     0x1.915720345ea69p-754, 0x1.ad29e50a427ddp-979, 0.0, 0.0, 0x1.9c78d99faf249p-397,
     0.0, 0x1.1be68b2915f63p-981, 0x1.d2e480995ffbcp-525, 0x1.02a7f48e4ea2cp-764, 0.0,
     0x1.f2ce4967d23f3p-755, 0.0, 0.0, 0x1.97046a6dbb6adp-863, 0x1.e55ea8b49b4b6p-857,
     0.0, 0x1.6834ed77dea7cp-216, 0.0, 0.0, 0x1.b2a9c21cbab3p-852, 0.0,
     0x1.1ee9bad0e1c73p-121, 0.0, 0.0, 0x1.c3a918aa54dd4p-820, 0.0, 0.0,
     0x1.800fa9dbfffafp-97, 0.0, 0x1.bd2036e7defb4p-147, 0.0, 0x1.55f9c9fca7b9dp-708,
     0.0, 0x1.e482c40ed676ap-827, 0.0, 0.0, 0.0, 0x1.08524d751054cp-469,
     0x1.ea830378f5fd4p-191, 0.0, 0x1.8a7b0056233d4p-850, 0.0, 0x1.920a300c551e4p-643,
     0.0, 0.0, 0x1.1c038b78c546p-927, 0x1.14a25c43f299cp-230, 0.0,
     0x1.74b6a7388bfbep-991, 0x1.b468afca596c3p-830, 0.0, 0x1.107d8e95ec7c5p-96,
     0x1.32d25258d26eep-705, 0.0, 0.0, 0x1.218057faf385fp-98, 0.0,
     0x1.4f0176dd54ec5p-54, 0.0, 0.0, 0x1.1ed83f5c4bdd4p-878, 0x1.18daf36c531dp-896,
     0.0, 0x1.6124fa3c02815p-150, 0x1.3f7a041d7267cp-421, 0x1.d22ad58f62922p-510, 0.0,
     0x1.633ef8dd0f8a6p-827, 0x1.40dae0472e78fp-681, 0.0, 0x1.777f4c76cac71p-826,
     0x1.2f9849af7deb5p-1004, 0.0, 0x1.1c72bcebd243ep-167, 0x1.b64e56ff96aa2p-510,
     0.0, 0.0, 0x1.05320d289b8a9p-709, 0x1.6bcd79fd3c56cp-301, 0.0,
     0x1.0454aa1e1f572p-168, 0x1.13575dd3ab28ap-725, 0x1.f86aaf88e80d7p-405, 0.0,
     0x1.cfa4a704f08e7p-252, 0x1.d619aa716a9a7p-635, 0.0, 0x1.be3b7d4989dcdp-373,
     0x1.a67cd75a81335p-932, 0.0, 0x1.d825b47b965e2p-116, 0.0, 0.0, 0.0,
     0x1.6519f687c3d7bp-482, 0.0, 0x1.5c46c19787b63p-624, 0.0, 0.0, 0.0, 0.0,
     0x1.7e750f108a7aep-244, 0.0, 0.0, 0x1.45ca78dfb94a6p-913, 0.0, 0.0,
     0x1.a608c11c82a48p-771, 0x1.47c24e152706dp-901, 0.0, 0.0, 0x1.51dea14234cdcp-224,
     0.0, 0x1.aab34a6bd8a5bp-408, 0.0, 0.0, 0x1.a00c243983711p-852, 0.0,
     0x1.e23038af0f938p-243, 0x1.7be7f77e73cdap-624, 0.0, 0x1.97e3265259267p-64, 0.0,
     0.0, 0x1.9df8eab6b9218p-539, 0.0, 0.0, 0.0, 0x1.a64414438cefp-303, 0.0,
     0x1.45b727a4500a8p-495, 0.0, 0x1.03d25ff2868d7p-815, 0.0, 0x1.1f66f88ab2ae2p-328,
     0x1.61ba61b2bfe86p-922, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.54f4b86ec1a91p-43,
     0.0, 0x1.7fa6765b7f87p-459, 0.0, 0.0, 0.0, 0x1.75fa6ac560343p-842, 0.0,
     0x1.67c53ea7dbf6ap-994, 0.0, 0.0, 0.0, 0x1.95f506d07425cp-970,
     0x1.e4aac5a36a737p-56, 0x1.19034edf4b009p-529, 0x1.bcb2a3c235f48p-625,
     0x1.2208eef1880dep-77, 0.0, 0x1.367bccb02c7c3p-483, 0.0, 0.0, 0.0, 0.0,
     0x1.22ff024dc2521p-5, 0x1.87dbd13beb20bp-884, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fb36befdb6009p-167, 0.0, 0x1.52def0b53753ep-1003, 0x1.7c0eb64413a65p-802,
     0x1.2805f8dd5878p-293, 0.0, 0x1.c0a5ddf426204p-932, 0x1.4f8be9f977c6p-246,
     0x1.23a30c15c46b5p-436, 0x1.b3e7692ed9c6p-827, 0x1.20112af2e85a9p-799,
     0x1.67a0014548c38p-346, 0x1.8e20d94b5564fp-860, 0.0, 0.0, 0.0,
     0x1.894e455f749e2p-58, 0x1.2af9658abaa93p-268, 0x1.08461f90aacb1p-656,
     0x1.d82ddbe56f189p-27, 0x1.c68058050cda1p-377, 0.0, 0.0, 0.0, 0.0,
     0x1.9c354cb52735bp-587, 0.0, 0.0, 0x1.794958a4c00aap-717, 0x1.f1667d59a5a82p-555,
     0x1.413e8c9b32e55p-461, 0x1.53823edd2b0fp-423, 0x1.d3b6f88fa1e73p-188, 0.0,
     0x1.585151809320ep-532, 0.0, 0.0, 0x1.f8981ac733008p-1003,
     0x1.1a17d9a3ab8f2p-388, 0.0, 0x1.afd7163d2eab7p-61, 0x1.c2a241074db88p-910,
     0x1.d66813067aec4p-59, 0.0, 0.0, 0.0, 0.0, 0x1.dfbaf51751287p-975,
     0x1.18605af695131p-474, 0x1.52cf4931686d9p-709, 0.0, 0x1.00db6f20e960cp-521,
     0x1.4f168b2f659f7p-129, 0x1.b7acd595279fbp-160, 0.0, 0.0, 0x1.22c612b74ee13p-825,
     0x1.4febc43b9df6fp-366, 0.0, 0x1.6834db8a34d5ap-724, 0.0, 0.0, 0.0,
     0x1.27ae6693b4593p-809, 0x1.25b3b0bef580dp-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2a79512b4829p-282, 0x1.a01001978f15ep-896, 0x1.6d2c162e3395cp-649,
     0x1.5dc8eb67704aep-690, 0.0, 0x1.b07b0a042fd7ep-515, 0.0, 0x1.be4503569ebc3p-956,
     0x1.f635926bda4a2p-430, 0x1.3483f8cfcce5ap-883, 0.0, 0x1.a535e533aa5c8p-666, 0.0,
     0.0, 0.0, 0x1.2bd5126073ab4p-74, 0.0, 0x1.5bb68444b74d6p-177,
     0x1.71f236bc2f076p-366, 0.0, 0x1.af77f49047971p-936, 0.0, 0.0,
     0x1.9a7797fd0b72fp-916, 0x1.b877ba904d298p-390, 0x1.4279017ec8a2fp-642, 0.0, 0.0,
     0.0, 0x1.2bcfb3c25fec3p-915, 0.0, 0x1.cc68c73d3cf63p-426, 0x1.d4fb824af0df2p-21,
     0x1.4f8a930363e8p-737, 0.0, 0.0, 0x1.3517642aeba8dp-788, 0.0, 0.0,
     0x1.a58ae2b60466p-647, 0x1.02f9e7f78279cp-945, 0.0, 0.0, 0x1.2213ce54a2ec7p-717,
     0.0, 0.0, 0.0, 0x1.8ce55b7b87bf4p-642, 0x1.cbf67d78b1b87p-500,
     0x1.251e691e356b8p-911, 0.0, 0x1.01c2d32ad1255p-612, 0.0, 0x1.23e0ca12fbee7p-60,
     0.0, 0x1.aafee189105a6p-50, 0.0, 0.0, 0x1.93f212f149c63p-785, 0.0, 0.0,
     0x1.9dc84a3c52c0ep-626, 0x1.6b4bb6437e6c7p-609, 0x1.a4ea2eb5f787dp-111,
     0x1.76bcc30cad04bp-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08e49e67a19dap-437,
     0x1.f357c6a726355p-975, 0x1.08976eb49bf4ap-218, 0.0, 0x1.93637d6ea5492p-406,
     0x1.af7dad0bbd3a3p-320, 0x1.301f97f241826p-911, 0.0, 0x1.f117c088f9544p-98,
     0x1.3701414866124p-946, 0x1.4c0fc71080ef5p-689, 0x1.eb54189b802b2p-1002, 0.0,
     0x1.e387b789ab49ep-52, 0x1.29a8d3a821e74p-913, 0.0, 0x1.9ced94315ea8dp-420, 0.0,
     0.0, 0x1.c6c3ecd2c99ffp-337, 0x1.e052cf25dec06p-119, 0x1.a93467929bb75p-809, 0.0,
     0x1.2c47ebedcd04ep-341, 0.0, 0x1.7da6503f8c2a8p-936, 0.0, 0x1.0e151aa3248d5p-190,
     0x1.9a6dec182cd16p-552, 0x1.e435d49338c1ap-625, 0x1.83a31b7e51b13p-544,
     0x1.3f1735f5405bbp-147, 0x1.0cc0b35b76cbdp-890, 0.0, 0x1.52ad9d89734dcp-352, 0.0,
     0x1.4b9e644c08f62p-793, 0x1.eb009570467ecp-584, 0.0, 0x1.fd3e1a3aa0e3bp-845,
     0x1.d9efa330f98e2p-429, 0.0, 0x1.a186e2d6af392p-327, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4367a1bdda6adp-692, 0x1.36bdf024da5e9p-354, 0x1.c411140973874p-914,
     0x1.cab8afa6c6583p-994, 0.0, 0x1.d4994d1182f69p-86, 0x1.ac7c6493b1fbep-61,
     0x1.ca729f8f8fd26p-903, 0.0, 0.0, 0x1.0bd61e76297a8p-490, 0.0,
     0x1.07beb88a53009p-882, 0x1.b2ab1dad2e4b1p-443, 0x1.2232d24d5b49fp-223, 0.0, 0.0,
     0x1.0d4dcb276ad2p-209, 0.0, 0.0, 0x1.faa63d666f2c7p-37, 0.0, 0.0, 0.0, 0.0,
     0x1.a5706dff8aebep-241, 0x1.2fcad65ad128dp-874, 0x1.84aea51e86f91p-483, 0.0,
     0x1.663e61419c285p-464, 0.0, 0.0, 0.0, 0x1.acd388f40714bp-939,
     0x1.0b9035fe1848bp-411, 0.0, 0.0, 0.0, 0x1.cdd86166bd6edp-758,
     0x1.f53700f7ad92fp-163, 0.0, 0.0, 0x1.c7e2110bee17cp-930, 0.0,
     0x1.1e8cfca8c934bp-457, 0.0, 0.0, 0x1.56da9b0424adp-523, 0x1.9677aca4b24acp-706,
     0x1.2ccabcd182bcfp-256, 0x1.9f383e315a13bp-114, 0.0, 0.0, 0.0,
     0x1.467b1f651c2cep-834, 0x1.3929a85d9edc9p-270, 0x1.6f3f079652baep-523, 0.0,
     0x1.b78eef10fb989p-508, 0x1.67224a6eafa41p-490, 0x1.5d0341b9da129p-737,
     0x1.914d7906256abp-682, 0x1.5c22699b53666p-494, 0.0, 0.0, 0x1.7bb4de0b34384p-467,
     0x1.bb528f7df69d2p-976, 0.0, 0.0, 0.0, 0x1.38152b90598a5p-807, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7943ec36b5a2fp-118, 0.0, 0.0, 0x1.b80e01692c9c1p-644,
     0x1.82e3d13f6b191p-402, 0x1.ef29480768fbep-235, 0.0, 0x1.8f3b7a7e3e388p-973,
     0x1.2533aefd762a5p-598, 0.0, 0.0, 0.0, 0x1.afcaa965d8389p-532, 0.0,
     0x1.963f56c502383p-39, 0.0, 0x1.66c9b08499877p-242, 0x1.b60e90c6883b8p-407,
     0x1.f738217f06c15p-570, 0.0, 0.0, 0x1.58a1887ecb53dp-362, 0.0, 0.0,
     0x1.6f393371cbcb2p-959, 0.0, 0x1.965b19cc7c2e7p-316, 0.0, 0x1.a51c0f6651f97p-730,
     0.0, 0x1.b2f99975f643fp-15, 0.0, 0x1.352ea26aaa249p-832, 0.0, 0.0, 0.0,
     0x1.d8a6263b708c7p-951, 0x1.d128dbcaccbf3p-823, 0.0, 0.0
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
            tmp1 = Sleef_truncd4_kvx(tmp0);
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
    printf("Sleef_truncd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_truncd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
