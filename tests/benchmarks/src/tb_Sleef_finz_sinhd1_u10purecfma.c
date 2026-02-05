/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd1_u10purecfma.c --function \
 *     Sleef_finz_sinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.46ec2392f48bbp-484, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3b6046320b1f7p-246, 0.0, 0x1.fcb103b7d93dbp-527, 0x1.b8118ecf8dc5cp-383,
     0x1.854b71b7cd1d9p-910, 0.0, 0.0, 0x1.939691c9030fbp-141, 0.0,
     0x1.4ffdbdc0a1a4ep-43, 0x1.212156908e7f5p-361, 0.0, 0x1.12b66ce3fe459p-154,
     0x1.cf07cdeee1aefp-141, 0.0, 0.0, 0x1.5e40b2e377244p-340, 0.0, 0.0, 0.0,
     0x1.119e3f7f8892cp-293, 0x1.d9857be59f3f6p-254, 0x1.b3795c48d5c7ap-776,
     0x1.78c4a384fa0afp-670, 0x1.c4080d9ccc1c4p-329, 0.0, 0x1.9a28aab751cc6p-521, 0.0,
     0.0, 0.0, 0x1.423139ee0c7a1p-855, 0.0, 0x1.51d034ce72f1ep-223, 0.0, 0.0,
     0x1.df0a446a417b5p-465, 0.0, 0x1.b03172e9cdd7fp-355, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d863220c83afp-308, 0.0, 0x1.ceb400bdf71c6p-376, 0x1.70db7a1088b02p-1014,
     0.0, 0x1.c1fea2459b2f3p-495, 0x1.a32a28eed31cap-276, 0x1.2adcf86e5f867p-873,
     0x1.dc23a363d6464p-858, 0.0, 0x1.e791298d46f19p-175, 0x1.3fb0aa79c5b59p-198,
     0x1.c722839cd22fap-89, 0.0, 0x1.fa99ed48e0b65p-268, 0x1.7e83791ecb806p-924,
     0x1.cec2b2523c4dcp-404, 0x1.99ca785bd1a29p-277, 0.0, 0x1.4229fc28514a2p-888,
     0x1.bd057d1a3f99cp-177, 0.0, 0x1.6842c4533ee0dp-992, 0.0, 0.0,
     0x1.3cc15873f8412p-973, 0x1.f1ec31f0b6b6fp-26, 0x1.0e3aaf06b541dp-163, 0.0,
     0x1.f256dad4aaa57p-219, 0.0, 0x1.8a031ae4b36f4p-187, 0x1.73cbe3e591505p-642,
     0x1.316f8b054ca2p-134, 0.0, 0.0, 0x1.a42f5806b4b93p-427, 0x1.f20438cc1791dp-851,
     0.0, 0.0, 0.0, 0.0, 0x1.a05d2cfd0124cp-644, 0x1.50dbbd443b77ep-422, 0.0, 0.0,
     0x1.5198036861d7ap-909, 0x1.0fdb60861fb54p-605, 0x1.43070910f6476p-981,
     0x1.9a155b7bf51aap-235, 0.0, 0x1.ace57ec30700dp-541, 0.0, 0.0, 0.0,
     0x1.a6808b656e9d4p-48, 0.0, 0x1.49989f6ebd323p-554, 0x1.d6f4bcefa2647p-500, 0.0,
     0x1.99bc4094c08d5p-295, 0x1.acec9197b9672p-103, 0x1.dffbab69562c7p-226, 0.0, 0.0,
     0.0, 0x1.15831919050a7p-392, 0x1.5872bae1b5f0cp-221, 0x1.4c2589b6051d2p-110, 0.0,
     0x1.946e056728928p-902, 0x1.67b87a78344a4p-445, 0x1.f3224280b027ep-185, 0.0,
     0x1.bd55f43da4746p-937, 0x1.b9681130aeb1ap-779, 0.0, 0x1.9091469c338fp-398,
     0x1.fe71e1efa617ep-647, 0.0, 0.0, 0.0, 0x1.1438fdfd98819p-846,
     0x1.8fe4126137b7fp-313, 0x1.744811a5c66bfp-723, 0x1.2cce1756bb41bp-807,
     0x1.12bb5b1d92467p-654, 0x1.e76b79f67eeb1p-787, 0x1.883a8547bab4bp-780, 0.0,
     0x1.cd733140972p-110, 0.0, 0x1.b61990d042c93p-427, 0x1.6824d4ffc5a47p-799, 0.0,
     0.0, 0.0, 0x1.895239b7d0bc6p-253, 0.0, 0x1.bbe7209c6e0c8p-34, 0.0,
     0x1.6a577498b2686p-938, 0x1.38acd0d7a7a75p-859, 0x1.5dc1dbd17f213p-984,
     0x1.9e0cfd2c964f9p-738, 0.0, 0.0, 0x1.ef83c2d03368ap-796, 0.0,
     0x1.777c517b74e1ep-601, 0.0, 0.0, 0.0, 0x1.46c73e9bd86f4p-371,
     0x1.00e4c4802d064p-279, 0x1.75786e24368c9p-937, 0x1.b4d48c3e7b9a6p-234,
     0x1.8953b3be87e0ep-364, 0.0, 0.0, 0.0, 0.0, 0x1.98e03041821ep-222, 0.0, 0.0, 0.0,
     0x1.00d0f190f6571p-812, 0.0, 0x1.efeaa6c1ce64bp-819, 0.0, 0x1.501b64c70f4adp-593,
     0.0, 0.0, 0.0, 0x1.324b908fe50b8p-432, 0x1.f5f7032272a98p-140, 0.0, 0.0,
     0x1.4e3bc23f34c1dp-292, 0.0, 0.0, 0x1.4fd67e8090245p-226, 0.0,
     0x1.a64fa1858abadp-115, 0x1.1bc6a683ac75cp-224, 0x1.2dedc67eba472p-520,
     0x1.0dc8b9e7783d2p-420, 0x1.77cbca175548p-356, 0x1.f63bf9d59d3cp-1002,
     0x1.247c74d103428p-509, 0x1.da575bba9fb21p-291, 0x1.c6d1e925d0bbbp-142, 0.0, 0.0,
     0x1.4da80b577922ap-908, 0.0, 0x1.a3cc9ecf3a66cp-85, 0x1.b5c759f5b3a33p-191, 0.0,
     0x1.c3af1510f6f93p-383, 0x1.4ab7f61e7c279p-163, 0x1.b1f18aa7ee4afp-277, 0.0, 0.0,
     0x1.f723b3294a7c8p-409, 0.0, 0x1.07a31582a37c4p-466, 0x1.dd4beb0550325p-706, 0.0,
     0x1.74e28d7f79445p-569, 0.0, 0.0, 0x1.7238340383373p-113, 0x1.6328d7dc7296bp-336,
     0x1.bfee50ac0a8fbp-380, 0.0, 0.0, 0x1.012886e64c35dp-264, 0x1.3d3ffc1332841p-916,
     0x1.1cb532a93c8f7p-442, 0x1.dc4702572a65bp-263, 0x1.b94bff4d7abf6p-811,
     0x1.231e1b55bb598p-545, 0x1.e4930439a8cadp-810, 0x1.ce24650cdc33bp-817,
     0x1.18790103f833cp-952, 0x1.4c0ed1ebfeb62p-412, 0x1.84dd8a23cdaaep-430, 0.0,
     0x1.b9c3bd6607c99p-1004, 0.0, 0.0, 0x1.e73b30db84908p-727,
     0x1.8cec07938ac2dp-236, 0.0, 0x1.2112088df43a1p-898, 0.0, 0x1.d65de3a3a6838p-346,
     0.0, 0.0, 0.0, 0x1.9543339c684ap-239, 0.0, 0x1.238828efdaeb4p-187,
     0x1.28525f9d964dfp-575, 0x1.be79b5a559434p-712, 0x1.fb2012fa21c2cp-585,
     0x1.5fb114a079e69p-87, 0x1.1728579fe07a3p-430, 0.0, 0.0, 0x1.b467d619a6389p-179,
     0x1.0f5884d05c6fcp-304, 0x1.e0ac9ca3dbcaep-434, 0x1.55f918ddbe7f6p-207,
     0x1.174e472d6fc73p-756, 0x1.2da0000bec031p-845, 0.0, 0x1.4236defc6a22bp-813, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.36b3caca0f5b7p-786, 0.0, 0.0, 0x1.79df44b66cefbp-486,
     0.0, 0x1.a9d81e86437aap-691, 0x1.ab0af629becdp-553, 0x1.02e2b7a1cd636p-66,
     0x1.f0bc831d3cc0fp-281, 0x1.89aff57a7cbb4p-96, 0.0, 0x1.4d8f5cdc19f56p-572, 0.0,
     0.0, 0x1.ebfebaf8c5ed3p-824, 0.0, 0x1.4e56ef79356aap-1004,
     0x1.15cb4f5244afep-242, 0x1.522a33d7b51e6p-47, 0.0, 0x1.d837b036f8e42p-200,
     0x1.08f2e90b59bf7p-774, 0x1.f29eced1b109ap-182, 0x1.4a1915e177092p-663,
     0x1.68c0e125ceaf5p-715, 0.0, 0x1.006c27c4cc459p-557, 0x1.5059d7821aad9p-445, 0.0,
     0.0, 0.0, 0.0, 0x1.eda2890135e8cp-82, 0.0, 0x1.f5dae40e5948p-46,
     0x1.3d13c850ca07bp-326, 0x1.04f707afb7055p-406, 0.0, 0x1.41fb71387084dp-388,
     0x1.a5f6a9c61a782p-388, 0.0, 0.0, 0x1.d675533cbdc89p-379, 0.0,
     0x1.a3b826ac7ec6ap-325, 0x1.43de4e5940dfbp-782, 0x1.6a54c4ca57216p-226, 0.0, 0.0,
     0x1.86539c364e44dp-261, 0.0, 0x1.afd7a648a310cp-950, 0.0, 0.0,
     0x1.45792cab2af6ep-199, 0.0, 0.0, 0.0, 0x1.52ff75450857fp-110,
     0x1.9576b06f790adp-708, 0x1.95dbbb7c15d74p-403, 0x1.1b19b64a02d47p-156,
     0x1.d00ae8c5977eep-715, 0.0, 0.0, 0.0, 0x1.a7862ea9bfc96p-129, 0.0, 0.0,
     0x1.52e464710c494p-355, 0.0, 0.0, 0.0, 0.0, 0x1.b19148c0d86cdp-295, 0.0,
     0x1.013067a4d1738p-841, 0.0, 0x1.11ec214ea7ed3p-730, 0x1.f04edfdce891cp-748,
     0x1.73bc126e2d75cp-363, 0.0, 0x1.58bec0edbe83cp-126, 0.0, 0.0,
     0x1.052bec36783e9p-576, 0x1.7500ebd583c06p-589, 0.0, 0x1.b54e58bcd468bp-411, 0.0,
     0x1.e7dabaf84db2fp-252, 0x1.fd5f30c34e8f6p-486, 0.0, 0x1.6b78d326cb8c6p-753, 0.0,
     0x1.57afb6fe9e1a6p-926, 0.0, 0x1.a96cc2279d45fp-277, 0.0, 0x1.d1a262db1affap-631,
     0x1.d295239a502d8p-828, 0.0, 0x1.18bb79d53a74fp-831, 0.0, 0.0, 0.0,
     0x1.d67ee8c8ba9ap-765, 0x1.07d987ab4e8adp-11, 0x1.d0e5d76c5f88bp-389, 0.0, 0.0,
     0.0, 0x1.8bd7de62e12e7p-276, 0x1.ea06941b7b51dp-496, 0.0, 0x1.f8522518f0d65p-600,
     0x1.6ba5a7fe4ffa9p-956, 0.0, 0x1.112b9c47feec2p-937, 0x1.a9e56f2071aa7p-862, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a89a914b8e1bp-743,
     0x1.d33685bcad6bep-806, 0x1.4849c8cc1a03p-764, 0.0, 0x1.cd800535ff671p-426,
     0x1.28c683d1c4838p-974, 0x1.949cf2e33be56p-690, 0.0, 0x1.76c4b23529a95p-641,
     0x1.78a33b65dd6ddp-588, 0.0, 0.0, 0x1.8e1fb88b0625ep-267, 0x1.b83b01a98174bp-429,
     0x1.28b153b03569ap-246, 0.0, 0.0, 0x1.b2a56eac691c8p-622, 0x1.fcfb007d1b8fap-631,
     0x1.b1247e1c6b95bp-260, 0x1.30cc0b193f0f9p-955, 0.0, 0.0, 0x1.9ab9d7761e9ecp-883,
     0.0, 0x1.42fd68c5df471p-556, 0x1.dee689584c12ep-110, 0x1.c3e80f33b0ee3p-198, 0.0,
     0.0, 0x1.20ecec0374aa3p-769, 0.0, 0.0, 0x1.c08e12e0a9ae4p-710, 0.0,
     0x1.35af471af6353p-134, 0x1.5964c5af12c58p-351, 0.0, 0.0, 0.0,
     0x1.597b738eb8087p-241, 0.0, 0.0, 0x1.7500f08d29d6bp-328, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.46277daa252e5p-146, 0.0, 0x1.5f6819cb8ab7ap-74,
     0x1.7ec598e695e5fp-202, 0.0, 0x1.24139e01b1dc6p-883, 0x1.7f87b6598460bp-484,
     0x1.0c545b48fb3c6p-839, 0.0, 0.0, 0.0, 0x1.076e45a7c15dcp-442,
     0x1.a22f6b3aafdaap-134, 0x1.fa9268c424434p-820, 0x1.d7c277b72a0a1p-686, 0.0, 0.0,
     0x1.92219fe9955e2p-574, 0x1.f12779d9641fep-601, 0.0, 0.0, 0.0,
     0x1.22996f617183dp-222, 0.0, 0x1.59a4688dd6976p-613, 0.0, 0x1.7970e2e19b92dp-770,
     0.0, 0.0, 0x1.be0abd53b2e1ap-571, 0x1.76ce7d30a379bp-82, 0.0,
     0x1.1502b1a2a3f69p-153, 0x1.bf299c3eff646p-874, 0x1.1cd871a2e1623p-159,
     0x1.f7b7a5b897872p-524, 0x1.d4551023a35cap-880, 0.0, 0.0, 0.0, 0.0,
     0x1.90479ff8b5cfep-769, 0x1.be04eefd53859p-502, 0x1.7cb32050aa38dp-284, 0.0, 0.0,
     0.0, 0x1.d8d689923690cp-747, 0x1.430a4e6037af5p-929, 0x1.d884e2c6b406dp-275, 0.0,
     0.0, 0.0, 0x1.75a7036ae42b4p-515, 0.0, 0x1.3c2b5220da6a9p-741,
     0x1.ad2af2f819e6fp-581, 0x1.983e6ed79bdc2p-727, 0.0, 0x1.07b25ad1a65acp-509, 0.0,
     0x1.7060f78f775cp-237, 0x1.337bebef03963p-187, 0.0, 0x1.b0a79184574c4p-331, 0.0,
     0x1.52a5f544dd7c1p-559, 0.0, 0x1.ed39cbd7ef924p-711, 0.0, 0.0, 0.0,
     0x1.398020f09994ep-26, 0x1.441dae3b1d2eap-895, 0.0, 0.0, 0x1.5241e7ace3bb1p-560,
     0.0, 0x1.af6d18114db05p-203, 0.0, 0.0, 0x1.a32b756b5faa2p-178,
     0x1.03dd265fbf109p-574, 0x1.21e8be40b04ecp-619, 0.0, 0.0, 0x1.f333d962fcedap-725,
     0x1.faaf750515088p-781, 0x1.a6e66fdfe6c19p-438, 0x1.be290fb24de68p-156, 0.0,
     0x1.db3b1a1ae2248p-662, 0x1.1bc72002da6efp-746, 0x1.a251019b2284p-156, 0.0, 0.0,
     0.0, 0x1.08b86aaed1736p-198, 0.0, 0x1.915aad4af7f3p-614, 0x1.db9f945287335p-982,
     0.0, 0.0, 0x1.6b037cfb6aac2p-128, 0.0, 0.0, 0x1.fef09ce8843f7p-409, 0.0,
     0x1.08ff33c1ed7d4p-503, 0.0, 0x1.ae24b98d299ep-966, 0.0, 0x1.578da1a88646cp-403,
     0x1.e8406e195dbbfp-369, 0.0, 0x1.58a11a38815ffp-445, 0.0, 0.0, 0.0, 0.0,
     0x1.9488a89b47054p-601, 0x1.da271be747723p-942, 0x1.f897cd543145cp-833, 0x1p0,
     0x1.b7eb0a11f1779p-390, 0x1.dd84b423b3402p-110, 0.0, 0x1.2a9ea653f00cp-333, 0.0,
     0.0, 0x1.311474c7c0794p-688, 0x1.3fd2bd0faa479p-731, 0x1.c00b6d3197a32p-705, 0.0,
     0.0, 0.0, 0.0, 0x1.10f119faf95fap-528, 0.0, 0x1.b75f1e297e60fp-907, 0.0,
     0x1.76593fb9f4503p-783, 0.0, 0x1.deaf01ecb827ap-549, 0x1.4aa221e636346p-49,
     0x1.9c4f062d281dbp-871, 0.0, 0.0, 0x1.01c3bdafa991bp-753, 0x1.7a5d91d5f0516p-176,
     0x1.b6e8fe1f199b3p-503, 0x1.c5ba67f3477a6p-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.c9bd859ff1bc2p-612, 0.0, 0.0, 0.0, 0.0, 0x1.8177279c5497dp-315,
     0.0, 0.0, 0x1.d9aac586ef363p-731, 0.0, 0x1.fdefb03d2ea92p-377,
     0x1.c4567433055bcp-571, 0.0, 0.0, 0x1.99e3be9a161bp-321, 0x1.b5e5f893f546p-430,
     0.0, 0x1.2cbfdf7b04e7ap-4, 0.0, 0.0, 0.0, 0x1.60761bbb4132p-447, 0.0,
     0x1.edf9dadc924b7p-715, 0.0, 0x1.da6323e88f2fbp-122, 0x1.b4db28e675ffcp-429, 0.0,
     0.0, 0x1.ee513b4cca29ap-481, 0.0, 0x1.4ca94612dafc2p-168, 0.0, 0.0, 0.0, 0.0,
     0x1.638bac266daap-299, 0.0, 0x1.883763b97ceecp-441, 0.0, 0.0, 0.0, 0.0,
     0x1.c4b8a3383aa74p-630, 0.0, 0.0, 0.0, 0x1.f96e735bab20ep-142,
     0x1.1984273e697bep-101, 0.0, 0x1.af79b7a1db43p-744, 0x1.97c61bbe923ap-517,
     0x1.21992f3cfc966p-579, 0.0, 0x1.c6314c346263dp-505, 0x1.599ed311df744p-688, 0.0,
     0.0, 0.0, 0x1.cf9c109349c05p-247, 0.0, 0x1.6b2f1fb5f007bp-458,
     0x1.6d44472d72479p-312, 0x1.0abca63669da8p-890, 0x1.82b45f14e048ap-545, 0.0, 0.0,
     0.0, 0x1.40da65e1f42cap-231, 0.0, 0x1.51c67e96c5f06p-713, 0x1.d7393640868b3p-108,
     0x1.087bd28d23acfp-958, 0.0, 0x1.dd5b7cc5200bfp-909, 0.0, 0.0, 0.0,
     0x1.b4c77e22f0949p-383, 0x1.fe0b7497c2f8cp-626, 0x1.fe8c049ab699dp-323,
     0x1.117a91907869bp-152, 0x1.1bf7a278554f9p-813, 0x1.8e95956f536cap-23, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2841ccb70d91ap-859, 0x1.345877548dccep-511,
     0x1.c8959faa07905p-973, 0x1.f92fdc5f8fa8dp-596, 0.0, 0.0, 0.0, 0.0,
     0x1.776e0a17c982dp-16, 0.0, 0x1.c0cc99c99e135p-404, 0x1.41f6a6462cfap-487,
     0x1.5805b73d9eb5cp-792, 0x1.c0af846b7d2a4p-380, 0x1.0adf879749c87p-353,
     0x1.97a1fc69547eap-524, 0.0, 0.0, 0.0, 0x1.df7d8799e7217p-216, 0.0,
     0x1.fd3f9286e2686p-3, 0x1.a97c868084e65p-982, 0x1.a753e7d27fa04p-931,
     0x1.bc0fa2eba6c39p-264, 0.0, 0.0, 0x1.61f0c4eb6b284p-285, 0x1.0bc898bc2417fp-775,
     0.0, 0x1.4d43ae31d4e1bp-519, 0x1.d97805e107193p-450, 0x1.9b9474adb76e7p-289,
     0x1.5f85afa92d6d3p-750, 0x1.198571ef00d6ep-426, 0x1.3aeb3ebf90552p-953, 0.0, 0.0,
     0x1.8bf1f84ab5cf4p-543, 0x1.6cf0f4de97c1dp-238, 0x1.ea231e25955d8p-49,
     0x1.a7c8f7b4eceacp-180, 0x1.dc2b0ccc91059p-230, 0.0, 0x1.e714a65b25a73p-332, 0.0,
     0.0, 0x1.f472e378095d5p-124, 0x1.0503413e8cb02p-664, 0.0, 0.0,
     0x1.52725401cc8cap-488, 0x1.231faa897d075p-525, 0.0, 0.0, 0x1.5a79c12a59f59p-714,
     0.0, 0x1.de457b29d231cp-414, 0x1.9b57234a30f22p-764, 0x1.d6543e597b213p-511,
     0x1.fa754d8636d6dp-568, 0x1.b0acabbe72ecep-18, 0.0, 0x1.745d1ba1ae0b3p-1004,
     0x1.ceaa5985db75bp-594, 0x1.e777266a2cb52p-841, 0x1.3874233b0c72dp-477, 0.0,
     0x1.bf37e9d647041p-181, 0.0, 0.0, 0x1.57b56114267b6p-814, 0x1.383c85971301cp-228,
     0.0, 0.0, 0.0, 0.0, 0x1.505f5da429cffp-894, 0.0, 0x1.e234e8924ee4bp-690,
     0x1.e619eb87bc5f6p-15, 0x1.d2c14c01576cap-222, 0x1.0e720309c5d7dp-813, 0.0, 0.0,
     0x1.24b6d5412bcdfp-171, 0.0, 0.0, 0x1.e220d3da359e5p-97, 0.0,
     0x1.68206fe03d908p-301, 0x1.cb096db7ec14ep-911, 0x1.eb46896b58593p-272,
     0x1.e20b78f5f4704p-125, 0x1.f8b0ab70daff4p-13, 0.0, 0x1.d9a20228a7a3bp-597,
     0x1.6bba1dac8d735p-642, 0x1.eed244b5b3fbdp-595, 0x1.6dc2d56fddec4p-114, 0.0,
     0x1.c8fa150f8b1p-231, 0.0, 0.0, 0.0, 0x1.fab7ec99afa49p-367, 0.0,
     0x1.9e28dba78c1e8p-807, 0.0, 0x1.8bebb0e33d6d9p-432, 0x1.6b8cec2c6ad57p-963, 0.0,
     0x1.2cd5d7e5fe13p-389, 0x1.69bb7db099aa3p-827, 0.0, 0.0, 0x1.fdeeed3cd627ep-420,
     0x1.b2f70b6cfa7a7p-127, 0.0, 0x1.173f0521fe6f7p-906, 0x1.e2bb50909d21fp-158, 0.0,
     0x1.6ef1bba763d2ep-495, 0x1.734667d0c4d91p-30, 0.0, 0.0, 0x1.f7573649a4559p-888,
     0.0, 0.0, 0.0, 0x1.045cf76623868p-392, 0.0, 0.0, 0x1.35b6e6c84df54p-487, 0.0,
     0.0, 0x1.509735eb19ba5p-137, 0x1.5a433bfdb7466p-251, 0.0, 0.0, 0.0, 0.0,
     0x1.c53f936ad832p-707, 0x1.955201d581efp-928, 0.0, 0.0, 0.0, 0.0,
     0x1.41bbc7cbe08cp-625, 0x1.e00a586b5f94fp-610, 0.0, 0x1.439268b7636ecp-873, 0.0,
     0.0, 0x1.e9bdc1ead4b9cp-1020, 0.0, 0.0, 0x1.ba4d597cf79b6p-974,
     0x1.d1c8f861d590bp-600, 0.0, 0x1.55d845f5ca57p-182, 0.0, 0.0, 0.0, 0.0,
     0x1.509288e6d37c9p-245, 0x1.c4ec4e9e5670fp-771, 0.0, 0.0, 0.0,
     0x1.7c881e351dd65p-446, 0x1.610c4986a3a7ep-45, 0.0, 0.0, 0.0, 0.0,
     0x1.59d56a90cf00dp-725, 0x1.b96a6c348531cp-106, 0.0, 0.0, 0x1.5b2aa048b4f77p-242,
     0.0, 0.0, 0.0, 0.0, 0x1.93086478d3c4ep-954, 0x1.0bb0322edae8p-965, 0.0, 0.0,
     0x1.6e957528cf639p-925, 0.0, 0x1.785c7eb8d2928p-841, 0x1.3227626811f6ep-302, 0.0,
     0x1.bf95db4050214p-421, 0.0, 0.0, 0x1.051893580a7f5p-994, 0x1.73048d27c7035p-965,
     0x1.ad444f7d2787dp-645, 0.0, 0x1.58e3a10c106c3p-525, 0x1.278fc3b9e6b67p-474,
     0x1.0b22bf1cae4ccp-664, 0.0, 0.0, 0x1.b7c60446125cfp-68, 0x1.fff2cb297ea3dp-553,
     0x1.2289528a94195p-649, 0.0, 0x1.7cfb6e794ac5fp-736, 0.0, 0x1.1f7132ab70bfbp-664,
     0x1.d8c4862f2bb52p-431, 0x1.de612430a4328p-826, 0.0, 0x1.bc10c241f8fc8p-205,
     0x1.4f9d2d90a5631p-98, 0.0, 0.0, 0.0, 0x1.44bdfae3197ap-397,
     0x1.b94e9407d2461p-305, 0x1.1e83ce9190c0fp-291, 0.0, 0.0, 0.0,
     0x1.8cb8e0ac253a3p-418, 0x1.6377e5f054b79p-9, 0x1.e507bdcc58181p-877,
     0x1.06b5efa9d7dd9p-673, 0.0, 0x1.67dad64072d81p-944, 0x1.68a04ccef2f99p-719, 0.0,
     0x1.5c5d78f914be8p-798, 0x1.1b2096994511p-105, 0x1.92ed2b329f7e8p-826,
     0x1.b6fb54ad5b6d2p-59, 0.0, 0x1.6ab837373e5f7p-496, 0x1.8a1d8788057a1p-770,
     0x1.f2d17f121e661p-502, 0.0, 0x1.8a51c8d3d73bfp-532, 0.0, 0x1.0c686b9f841cap-612,
     0.0, 0.0, 0x1.34ad81664790ep-772, 0x1.49ad7b303b1a3p-770, 0x1.c6eede05cc7f8p-251,
     0x1.f67d0646f6c3dp-596, 0x1.a6795bb6cba7fp-839, 0x1.a1385af3ae656p-565,
     0x1.f35a4a2d207ffp-159, 0.0, 0x1.def3dd1a336eep-490, 0x1.61fe07d3f0e2dp-162,
     0x1.a5b71e550f36ap-327, 0.0, 0x1.370b9e497f43bp-871, 0x1.cd33a39d4c2d5p-792,
     0x1.998cbd9637b2dp-471, 0.0, 0x1.a50bbde5e7a6fp-397, 0x1.2ff3c0e2df075p-331,
     0x1.9fecb13ac9f1ep-556, 0.0, 0x1.fd587afcb1342p-573, 0.0, 0.0, 0.0,
     0x1.7342f1cce30d1p-302, 0x1.a29a67bc1b8bdp-464, 0.0, 0.0, 0x1.e2c6a72e43059p-48,
     0.0, 0.0, 0.0, 0.0, 0x1.9ea8397055542p-124, 0x1.395ddbf0223b3p-471,
     0x1.da5ff2db8fd03p-355, 0x1.c1dfc4d61e214p-948, 0.0, 0x1.3578261f5c81ep-725,
     0x1.d3500a6e3e02bp-746, 0x1.5175981b4420ap-999, 0.0, 0x1.424ef683d9c92p-140, 0.0,
     0x1.53838e08d8331p-764, 0.0, 0.0, 0.0, 0.0, 0x1.fed240c09d47dp-22
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
            tmp1 = Sleef_finz_sinhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_sinhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
