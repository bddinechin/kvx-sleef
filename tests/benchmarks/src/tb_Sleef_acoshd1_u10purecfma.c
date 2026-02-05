/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshd1_u10purecfma.c --function \
 *     Sleef_acoshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.66baee42d68bdp-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c585c45e2ca3p-246, 0.0, 0x1.4f8bc51a40683p-452, 0.0, 0x1.0451492a49115p-201,
     0x1.11eb0ef186a64p-181, 0x1.191013ed75f5ap-677, 0.0, 0.0, 0x1.5f73df777291ap-174,
     0.0, 0x1.432d6dc6a4636p-936, 0x1.de3fbb6a81d87p-327, 0x1.70a7ef7a1380dp-339,
     0x1.a6c978a85bfe7p-168, 0.0, 0x1.3391dd4c8da19p-743, 0.0, 0x1.ca5caa8224751p-140,
     0x1.571920dbf2b72p-193, 0.0, 0.0, 0.0, 0x1.d6d007fddc392p-608,
     0x1.ee606d19c0d52p-190, 0x1.14ee676e32495p-118, 0.0, 0.0, 0x1.e6118f068d239p-147,
     0x1.ec0b8a37d2ecfp-335, 0.0, 0.0, 0.0, 0x1.c147be2d451abp-214,
     0x1.073c64e67a9c7p-192, 0x1.c6cd413e8bf11p-311, 0x1.ef7eef153d51dp-201,
     0x1.5aba08573d8fdp-974, 0.0, 0.0, 0.0, 0x1.7715ad2ed5c7cp-736,
     0x1.e2a1e4a9b0aep-767, 0x1.e7de90b52cf13p-23, 0.0, 0.0, 0.0,
     0x1.1f0def1f8f822p-692, 0.0, 0x1.ea3f64a57cb75p-873, 0x1.b6c2e9f94ba79p-439,
     0x1.267e8b80d788ap-982, 0x1.c38c979f70317p-389, 0x1.031a8f53f0d88p-367, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.466413b05e8dp-938, 0x1.2abcea0ceef0ep-217,
     0x1.7992cbae01c76p-921, 0x1.b50b2bbbe74a5p-204, 0x1.5b763f98544c8p-390,
     0x1.35d2529f60b7dp-233, 0.0, 0.0, 0x1.58416fd37cf8dp-12, 0x1.280663167034dp-547,
     0x1.a4883a30e5ae6p-338, 0x1.917dc9283f0fap-30, 0x1.1dd52cac6b83bp-345,
     0x1.ba9edae76656ep-182, 0.0, 0.0, 0x1.093a01536c6a2p-897, 0.0,
     0x1.b383081da1385p-574, 0.0, 0x1.50466c641f262p-646, 0x1.545f535162b5ap-100,
     0x1.5e50af1456524p-252, 0x1.f28eaa79b10f9p-560, 0x1.070126512812ap-17,
     0x1.94db17af43761p-1003, 0.0, 0.0, 0.0, 0x1.d81227b1d1f55p-678, 0.0, 0.0, 0.0,
     0.0, 0x1.46951ad8be331p-154, 0x1.87aead8c93997p-243, 0x1.971d8d8433bdfp-981,
     0x1.d9cd54e326042p-77, 0x1.0fb8296bc49bbp-831, 0x1.507cfa299d021p-50,
     0x1.b7080012b1971p-1021, 0x1.4d0ef5de2a47p-153, 0x1.13f04d2b0921p-439, 0.0, 0.0,
     0x1.a60ed1650b104p-380, 0x1.0f149306fb2p-846, 0.0, 0.0, 0x1.26a04404096f8p-940,
     0x1.683ff33398e98p-448, 0.0, 0x1.99948236d6583p-452, 0.0, 0x1.99434ae1d4c2fp-185,
     0.0, 0.0, 0.0, 0x1.80fb8c429214ep-315, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.265d695113ec7p-721, 0x1.5df4aef49bc25p-520, 0x1.2f809118a593bp-380, 0.0, 0.0,
     0.0, 0x1.c3d5c3145c3ecp-409, 0x1.500cead3a5d6ap-178, 0x1.14e4588ed75a9p-933, 0.0,
     0x1.45c526ef140e9p-576, 0x1.82e222c822166p-126, 0x1.6d9d11d677c76p-962,
     0x1.106765c3ab4e6p-123, 0.0, 0.0, 0.0, 0x1.1910296d39d1cp-962,
     0x1.d56c070144b52p-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1439a4b4b9a58p-917, 0.0,
     0x1.b34ae19ea157fp-610, 0.0, 0x1.a72f9e48ce737p-245, 0x1.2c83a73fcec4ap-325,
     0x1.01a86061efdd7p-247, 0x1.539934780548dp-716, 0.0, 0.0, 0.0,
     0x1.6e78d12dcb9a9p-687, 0.0, 0x1.2109943cbe927p-963, 0.0, 0.0,
     0x1.85c978ce1b8edp-1013, 0x1.97c6a426d72a1p-345, 0x1.aab22a1c1bb12p-119, 0.0,
     0.0, 0x1.04c74878174b8p-428, 0x1.b6c9ceff7c09fp-634, 0x1.aaf9060774257p-502,
     0x1.cf3f4c87ab2a5p-263, 0x1.aaa83e0a996cep-771, 0x1.2b706c5217cf9p-400, 0.0, 0.0,
     0.0, 0x1.26a5db2b3828fp-710, 0x1.dbba6c26a3ebep-278, 0.0, 0x1.dc29f21cab7c3p-744,
     0x1.27a870bddc991p-975, 0x1.68e95b7daeab7p-419, 0.0, 0x1.977c172d38947p-947,
     0x1.fee2584601007p-209, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c295e2b8f125p-459, 0.0,
     0.0, 0.0, 0x1.f9525c4cfdb41p-467, 0x1.885f57479bc8p-202, 0.0,
     0x1.d767169466793p-155, 0x1.becbc10b4c4aap-399, 0x1.954442f517542p-216,
     0x1.8fdf7cda56bfap-139, 0.0, 0x1.d1c3d1d99497ap-279, 0.0, 0x1.78b254e6a7b94p-361,
     0.0, 0x1.de60cb6c34afep-363, 0x1.4810c87906fcdp-3, 0x1.53037fe72a7adp-638,
     0x1.9194a9837af4ep-508, 0.0, 0.0, 0x1.bc94182f39211p-774, 0x1.80a4aa5158838p-258,
     0x1.373b2d84adb91p-770, 0x1.e66fb7f95fc37p-122, 0.0, 0x1.28c4de8897b77p-341, 0.0,
     0x1.c65b1008a85dp-152, 0x1.b21c6437d34f5p-305, 0x1.3ada48d812121p-103,
     0x1.c405712c9adbap-170, 0x1.ffef3817d24e5p-429, 0.0, 0x1.bd1569a09c71ep-827, 0.0,
     0x1.e23e195566519p-70, 0x1.d1342d7d6ea72p-520, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.91462499daccep-625, 0x1.18d1a20fb85dbp-677, 0x1.a5c4454841d4bp-679,
     0x1.eb81a52ff01b5p-634, 0x1.e0bcdbc01c568p-146, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3568c247ae74bp-441, 0.0, 0x1.7cbf45b859698p-1003, 0.0,
     0x1.68115ee41fd12p-17, 0x1.b33e026ef53ecp-259, 0.0, 0.0, 0x1.36118ae1e5218p-13,
     0.0, 0.0, 0.0, 0x1.a5465733b35c7p-698, 0.0, 0x1.ab98098ac3e73p-673, 0.0, 0.0,
     0x1.5850b77ed539bp-642, 0.0, 0.0, 0x1.dff85d8daf8d7p-275, 0x1.65c1d8cce9dbap-414,
     0.0, 0.0, 0x1.0a0f59ff35e26p-86, 0.0, 0x1.0bc6405c73092p-956,
     0x1.b6c353f7649e2p-827, 0.0, 0x1.2444aa65c215bp-117, 0x1.0b9f3f815def4p-789,
     0x1.2d76b17b8544p-339, 0.0, 0x1.1287f3d66c8d1p-375, 0x1.b047cad3cec5ap-794,
     0x1.8bfc7ec1aec99p-379, 0x1.d1f5d5929df0dp-819, 0.0, 0.0, 0x1.7782afb065c26p-743,
     0.0, 0x1.4d33994d16501p-818, 0x1.8b324410724acp-901, 0x1.f1507e0b3245ep-764, 0.0,
     0.0, 0x1.14e0f2f9c5182p-65, 0x1.eee02a2eeeb96p-206, 0.0, 0.0, 0.0,
     0x1.1d02ad3d0ed4fp-610, 0x1.d176bdfebd408p-838, 0.0, 0x1.df0a2f8c1df9ap-987, 0.0,
     0x1.6454e1d9677bp-638, 0x1.f7c8918c8158cp-963, 0.0, 0.0, 0.0,
     0x1.e8290cf8adc16p-424, 0.0, 0.0, 0.0, 0x1.036880097c89dp-438,
     0x1.24ae6f9499cecp-290, 0.0, 0.0, 0.0, 0.0, 0x1.a5daf45bbf7d6p-983,
     0x1.20a7287fb7a2ap-800, 0x1.a2e3fc5694dcap-994, 0.0, 0.0, 0.0, 0.0,
     0x1.8bbb6a2dd05c3p-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c31d84e64c7bp-964,
     0x1.0072f460bfff1p-667, 0.0, 0x1.449015d562578p-101, 0.0, 0.0,
     0x1.d77619687e66ep-34, 0.0, 0x1.77320d505aaafp-365, 0x1.1f82e0b4d4c2cp-927, 0.0,
     0.0, 0.0, 0x1.de828c7cb187dp-680, 0x1.c42a0138f39fcp-661, 0.0, 0.0,
     0x1.4c1949a84abfep-350, 0.0, 0.0, 0.0, 0x1.b0092e42c8332p-549,
     0x1.bc86ee5fe0cecp-845, 0.0, 0.0, 0x1.903fe39a792ap-584, 0.0,
     0x1.8cb157fbb5f15p-816, 0.0, 0x1.c8b9b546ebaa6p-1017, 0.0,
     0x1.24acfdc5bcc4bp-354, 0x1.838290dcfec5ep-518, 0x1.b62c444c467dbp-677, 0.0,
     0x1.b5e2f42c1e029p-768, 0x1.68ac7f09c6fd2p-574, 0.0, 0.0, 0x1.d2886a748dd78p-473,
     0x1.bf8c769f01169p-975, 0x1.a13eb133c8099p-69, 0.0, 0.0, 0.0,
     0x1.05a0bf4537eb7p-731, 0x1.3729f8a233bcdp-489, 0x1.111290d177c28p-353, 0.0, 0.0,
     0.0, 0x1.09768e12332ecp-883, 0x1.4876587b65334p-386, 0x1.8c3972eb6ff69p-595, 0.0,
     0.0, 0.0, 0x1.8ff07c3401f7fp-527, 0.0, 0.0, 0x1.f90e01dddbd35p-446,
     0x1.58ffa0b1441dbp-183, 0.0, 0x1.af7ce37e7179bp-270, 0x1.c08cede986154p-503, 0.0,
     0.0, 0.0, 0x1.b0de4db752419p-413, 0.0, 0x1.79c11c580ec6ep-671, 0.0, 0.0,
     0x1.a0ccd9b2bb952p-824, 0x1.86f4b9ce421e2p-492, 0x1.2dc3be3026812p-787,
     0x1.dd32c12b6ed6dp-743, 0x1.425d4c67705aap-1018, 0.0, 0x1.beba4cf4007b2p-342,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c87d2b2484bdp-876, 0x1.5b68454ea4e5p-297,
     0x1.c80804f4eee83p-275, 0.0, 0x1.d93375854027ep-28, 0.0, 0x1.5870cad7555ffp-520,
     0x1.2ac50010d1c34p-742, 0.0, 0x1.09800beb11ab5p-611, 0x1.e0bb880a5d5adp-968,
     0x1.7a353e1ebaed8p-937, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a18ab1b139e1p-337,
     0x1.67f6fc528c326p-982, 0.0, 0.0, 0.0, 0x1.a0ee4d2c28321p-302, 0.0,
     0x1.731dab810422fp-25, 0x1.6bb0b93df47bap-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b4278fc893d53p-36, 0.0, 0x1.2c50ab76cc121p-716, 0x1.d98de37e7ce8cp-712,
     0.0, 0.0, 0x1.c1e550c6d25e7p-683, 0.0, 0.0, 0.0, 0.0, 0x1.51e6bbe00d088p-656,
     0x1.ee62f72f9026p-915, 0.0, 0.0, 0.0, 0x1.4f492f41b31c3p-946, 0.0, 0.0, 0.0,
     0x1.37f5aaac7e4d5p-709, 0.0, 0x1.b130d6f581b45p-893, 0.0, 0x1.bc22f0472edf3p-378,
     0.0, 0x1.7717b3acb5897p-66, 0.0, 0x1.de17e9c08b012p-631, 0x1.8f328db7b965cp-611,
     0x1.ce9c804a2ac2ap-666, 0x1.bcfcd80f5ec23p-609, 0x1.2cf155485aca3p-677, 0.0, 0.0,
     0x1.fc54861b04c91p-420, 0x1.a6e44b0f95b8p-835, 0x1.431c0fdaa22eep-731, 0.0, 0.0,
     0.0, 0x1.7f919cdbcf707p-344, 0x1.a262537adcc28p-891, 0.0, 0.0,
     0x1.f585198045cb3p-692, 0x1.131d6587b172ap-515, 0x1.04013589b376fp-970,
     0x1.5446c37e7ac6p-386, 0x1.0c7644f291642p-604, 0.0, 0.0, 0x1.d8b8bb1899c3cp-297,
     0.0, 0x1.4f6a760167424p-544, 0.0, 0x1.57638982e9e4bp-998, 0x1.c7417a800681ep-334,
     0.0, 0x1.0b431db40c5p-559, 0.0, 0x1.e305f6b25799fp-378, 0x1.110326344f46cp-347,
     0x1.963636bcf9b96p-475, 0.0, 0x1.b15d1b843f221p-94, 0.0, 0x1.358d1555e181ap-914,
     0x1.ad271da3d818fp-312, 0.0, 0.0, 0x1.a4894b11e5541p-519, 0.0,
     0x1.843c968172a48p-813, 0x1.ca4350ee076d9p-376, 0x1.d8da820bc4a4bp-559, 0.0,
     0x1.ee2d9b3be9872p-51, 0x1.a491e03f5faadp-859, 0.0, 0x1.1f9570a1813f6p-453,
     0x1.c703ea8855525p-371, 0.0, 0.0, 0.0, 0x1.50b809013de5bp-867, 0.0, 0.0, 0.0,
     0x1.db88e834279dbp-113, 0.0, 0.0, 0x1.535dfa41b7949p-460, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bf57e2644f4adp-930, 0x1.296974da4267ep-108, 0.0,
     0x1.df9d359da0888p-1006, 0x1.8475f4c5b5d48p-649, 0x1.c9e57d82ead3fp-360,
     0x1.fc6b81cda45dap-218, 0x1.3def92047e17ep-545, 0x1.c7b2bda7961c6p-216,
     0x1.c03654c60c4bap-808, 0x1.975dbe32a0d4p-387, 0x1.833e9b6abd1b1p-155, 0.0, 0.0,
     0.0, 0.0, 0x1.076cb3ecb87b7p-809, 0.0, 0x1.fcf74b01d0163p-867, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb7bfd955a472p-798, 0.0, 0.0,
     0x1.1a15aa4464f5dp-864, 0.0, 0x1.5e47bb1a5e21ep-508, 0x1.9b06c112aedfcp-368, 0.0,
     0.0, 0.0, 0x1.0918059311dabp-639, 0x1.aba0ceda8034cp-799, 0.0,
     0x1.6ac3df458c897p-708, 0x1.13bd8ad376bcdp-234, 0.0, 0x1.e95ed3a750bbcp-929, 0.0,
     0.0, 0x1.af3fcc599afa9p-596, 0x1.d1d1f9903946ap-916, 0.0, 0.0,
     0x1.6630188c99016p-682, 0.0, 0.0, 0x1.1ce892dd7b335p-833, 0x1.661e75d188dc1p-546,
     0x1.3eba087772243p-497, 0x1.35e43071d717ap-722, 0.0, 0.0, 0x1.9fb05de87270dp-626,
     0x1.cdf49c8de94c8p-80, 0.0, 0.0, 0x1.c0f89a3e0381dp-503, 0.0,
     0x1.8b0f5d3e56f84p-922, 0.0, 0.0, 0.0, 0x1.a615a9fbc584dp-262, 0.0,
     0x1.5f8745050f589p-1008, 0x1.51697edf36c2p-962, 0.0, 0x1.96452dbd9476dp-990, 0.0,
     0x1.68c57944849bdp-448, 0.0, 0.0, 0.0, 0.0, 0x1.0a1b5dfcb2491p-828, 0.0,
     0x1.86c0a500b583ep-75, 0x1.95f33fc72d35ep-654, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35a2a8eadf3c3p-639, 0.0, 0x1.5d176748b864fp-336, 0.0, 0x1.66660f5c38e38p-292,
     0.0, 0.0, 0x1.7537f13b88175p-181, 0x1.713bbc1547e56p-902, 0x1.618eea2203fbcp-439,
     0x1.58f1266d03087p-273, 0x1.74de9196ddd1fp-730, 0.0, 0.0, 0x1.9e10fae82c5dap-335,
     0x1.79f7e73cbea4dp-917, 0.0, 0x1.963527dbe0e2dp-232, 0.0, 0.0,
     0x1.99a16e3457d52p-197, 0.0, 0.0, 0.0, 0x1.937830f8d5ee3p-433,
     0x1.fcba9fbb53759p-958, 0.0, 0x1.cf2977098da9p-131, 0x1.2ff3f153caba3p-521, 0.0,
     0.0, 0x1.ebad2ffc77e46p-339, 0x1.f575e21fbca52p-579, 0.0, 0x1.f96be54a977ecp-215,
     0x1.cac892ab565e3p-914, 0.0, 0.0, 0.0, 0x1.ebc4e1387969cp-228,
     0x1.8a9868134a796p-780, 0x1.369128c32a968p-270, 0.0, 0.0, 0.0,
     0x1.5bb3ccf8f2a52p-483, 0.0, 0.0, 0.0, 0.0, 0x1.e0e7fd781a208p-465, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8c649cfcb8449p-525, 0x1.da21ac32a5604p-736, 0.0, 0.0, 0.0,
     0x1.573bb3fc9425p-78, 0x1.8c2b8b46b7294p-352, 0x1.66f54f4bc82c8p-638,
     0x1.f2966167ad11bp-353, 0.0, 0.0, 0.0, 0.0, 0x1.014e87e379de1p-108, 0.0, 0.0,
     0.0, 0x1.522d6a69777p-853, 0x1.bc8b9b086d83bp-338, 0x1.aedf66f02e12fp-627, 0.0,
     0.0, 0x1.5f855eed4b1bdp-537, 0x1.4bd8f978530e3p-215, 0.0, 0x1.c77d678dcf315p-784,
     0.0, 0.0, 0.0, 0x1.e202ce05b230ap-868, 0.0, 0.0, 0.0, 0x1.8b00dcf82fdecp-506,
     0x1.1f298cb48a75ap-374, 0x1.b0645a0718738p-1003, 0x1.a086fe5767b68p-401,
     0x1.0bddbb493d5e8p-971, 0.0, 0x1.93f2014cb53a7p-502, 0x1.148ea70584004p-865,
     0x1.7f398e0eb2cebp-250, 0x1.4a47c0a704c6dp-28, 0.0, 0.0, 0.0,
     0x1.894e22232cfdbp-484, 0.0, 0.0, 0x1.f165963341cd9p-546, 0.0,
     0x1.1feabaf2d7ba8p-759, 0x1.3417d5a596de3p-490, 0.0, 0x1.71c1227bf2b73p-742, 0.0,
     0.0, 0x1.bfedfb662dad1p-207, 0.0, 0x1.0e7b4812241d7p-562, 0.0,
     0x1.e9eeb83ba6455p-87, 0x1.ff35aaab6bfc2p-307, 0x1.acd43e2425a0dp-156, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1e5fd7c4bc4e1p-409, 0x1.0c259d1f7bd86p-701, 0.0, 0.0,
     0x1.f901c57d47d3dp-418, 0.0, 0x1.218b7c117bbe7p-319, 0.0, 0x1.5c38783f467dcp-947,
     0.0, 0.0, 0.0, 0.0, 0x1.2d191c0bf0736p-102, 0x1.8e62ce7109707p-668,
     0x1.93ca890c93ee2p-799, 0x1.44c03e4eb9ad5p-456, 0.0, 0.0, 0x1.c775326c292e2p-505,
     0x1.d339a1470c99p-788, 0.0, 0x1.5f6e318f44bcdp-231, 0.0, 0.0,
     0x1.e0b2ea7bcf28dp-146, 0.0, 0.0, 0x1.0be4c522a8287p-979, 0x1.997eab679279p-482,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a74a384f0f319p-995,
     0x1.db54885040ddcp-923, 0.0, 0x1.cc7785aea3be8p-953, 0x1.d64aecc0337b1p-218, 0.0,
     0.0, 0.0, 0.0, 0x1.051c0ac0c8e8fp-349, 0.0, 0x1.294cfd27b9025p-594,
     0x1.07e5a5f3d70fbp-27, 0.0, 0.0, 0x1.22c6b457880b1p-728, 0x1.790687e2270bfp-543,
     0x1.9be944f18333bp-120, 0.0, 0x1.7d4b39a752299p-247, 0.0, 0x1.999161fcb6729p-397,
     0.0, 0.0, 0x1.993421e27268fp-115, 0.0, 0.0, 0.0, 0x1.de216a11098e9p-339, 0.0,
     0x1.adf838f033b93p-205, 0.0, 0.0, 0.0, 0.0, 0x1.070b48fb2da8cp-751,
     0x1.b1b5efa38549bp-41, 0x1.efe4e505a3092p-551, 0x1.58dce1f4d1909p-240, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1aebdb75529ep-198, 0.0, 0x1.c4c7387aa187bp-716,
     0x1.9fd953edb6e6bp-308, 0.0, 0x1.b6ebd38caaba2p-962, 0x1.715173279aafp-194, 0.0,
     0.0, 0x1.594be4e72b7f6p-179, 0x1.ce07baaaa3d4bp-108, 0x1.c73b18a0f14a5p-7, 0.0,
     0x1.9530f10fcd817p-308, 0.0, 0.0, 0.0, 0x1.e547dcaf86ff8p-45,
     0x1.45560ab7e2077p-50, 0.0, 0.0, 0.0, 0x1.705e3218e94bcp-662, 0.0, 0.0,
     0x1.94a2db51c8fe7p-171, 0x1.b435ec8ac849fp-1002, 0x1.35e5c92250f9cp-590,
     0x1.7bbae587a8aa3p-132, 0x1.3375cc97bac18p-343, 0.0, 0x1.8203ba65192c6p-367, 0.0,
     0.0, 0x1.deeb55815d0bep-391, 0x1.9b6bbb7f35d26p-10, 0.0, 0x1.042d5ce5d42e5p-112,
     0x1.4f9452504c5f8p-81, 0.0, 0x1.8a95411b69d56p-886, 0x1.257db30bef3ap-165,
     0x1.dfb1a8d02dbbap-527, 0.0, 0.0, 0.0, 0x1.c9997dfc8721cp-762, 0.0,
     0x1.e9243d09757aap-118, 0x1.2f8d89ca16d6bp-624, 0x1.9974558b64826p-146,
     0x1.d8f1d8f322baap-466, 0x1.776542841fe9cp-576, 0x1.04dbc7233560ep-225, 0.0, 0.0,
     0x1.891223c5720fep-874, 0.0, 0.0, 0x1.37e6da5aafb29p-585, 0x1.d1264e0ca44c7p-244,
     0.0, 0.0, 0.0, 0.0, 0x1.5747804ab164bp-333, 0x1.e7c3f27c9f6c2p-892,
     0x1.b9be5b0a44aafp-838, 0.0, 0.0, 0x1.2e1b527c601bfp-246, 0x1.d1ec33ea43e7bp-289,
     0.0, 0x1.8154e8f134c42p-141, 0.0, 0x1.e74056b5f3716p-296, 0.0,
     0x1.a8ad39a574269p-738, 0x1.4ec434b3cdd3ap-216, 0.0, 0.0, 0x1.3ae272be9d1f9p-70,
     0x1.fca0c076b5e16p-448, 0.0, 0x1.30ceb082a865bp-146, 0x1.c040ac2130d92p-114, 0.0,
     0.0, 0x1.2efd9e69a557ap-848, 0x1.f4d4545588f43p-656, 0.0, 0.0, 0.0, 0.0,
     0x1.32d9587bca669p-367, 0x1.368979cc20c27p-954, 0x1.0c28b87802ee5p-476,
     0x1.f1f9ae4eeda33p-329, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bca34de56fa28p-885, 0x1.a63112926db79p-537, 0.0, 0.0, 0.0,
     0x1.ab9782ac06affp-353, 0.0, 0x1.429545620298bp-577, 0.0, 0.0,
     0x1.16bb7c7c6ee16p-901, 0x1.499d2d13b25b2p-131, 0x1.5e48019e63713p-421,
     0x1.85972c6384062p-307, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.091681d1c12f5p-95,
     0x1.3b3610e88c3b9p-544, 0.0, 0x1.cbc632f3448dfp-276, 0x1.b940656e3bf9fp-106,
     0x1.084d2a7134a54p-787, 0.0, 0.0, 0.0, 0x1.fa6e71097b9bcp-978,
     0x1.247a4ac2a569ap-350, 0.0, 0x1.608ce7567e1eap-641, 0.0, 0.0,
     0x1.a7ba02ea2564fp-160, 0.0, 0.0
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
            tmp1 = Sleef_acoshd1_u10purecfma(tmp0);
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
    printf("Sleef_acoshd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acoshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
