/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand1_u35purecfma.c --function \
 *     Sleef_finz_atand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.ee2c3464ff4fep-624, 0.0, 0.0, 0x1.ee2f7dad11ecdp-21, 0x1.0222367e2d444p-40,
     0x1.62dbcbb1e79b7p-233, 0x1.60a28b1bad8b4p-552, 0x1.f7a1f60e79a82p-964, 0.0, 0.0,
     0x1.ab3b507739005p-497, 0x1.c0d3cf8408e78p-315, 0x1.ba2b190767b98p-973, 0.0, 0.0,
     0.0, 0x1.88b1c9220a2fcp-887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.654736fb7d662p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.821ed94f2288bp-857,
     0x1.114aa12e341b3p-615, 0x1.c1f48caf59cdcp-677, 0.0, 0.0, 0.0, 0.0,
     0x1.44d5df0234fdfp-827, 0.0, 0.0, 0x1.04bab7f97212ap-680, 0x1.c550f77d44751p-27,
     0.0, 0x1.99d306978181bp-336, 0.0, 0.0, 0.0, 0.0, 0x1.e2ec7642934b9p-657,
     0x1.77afc66d2a53cp-707, 0.0, 0.0, 0.0, 0.0, 0x1.63756e2463e01p-547, 0.0, 0.0,
     0.0, 0x1.2f4b50fadd15ep-11, 0.0, 0.0, 0x1.d37ca608d9e9bp-821,
     0x1.d48b179753e78p-742, 0.0, 0x1.fad5dca57007ap-443, 0x1.0ad5ae820d813p-720, 0.0,
     0.0, 0.0, 0x1.c54efe7e1f367p-104, 0.0, 0.0, 0.0, 0.0, 0x1.866110058cd32p-663,
     0x1.b20e29ca7d5ap-987, 0.0, 0x1.d94f60dbcb426p-620, 0x1.bac40ff144112p-136,
     0x1.bad380806b2d1p-166, 0x1.67ce8b1489abbp-198, 0.0, 0x1.0012bc0a29d18p-200, 0.0,
     0x1.aa56297a2231p-263, 0x1.b82f00e8e8e0dp-961, 0x1.4a9706a082c09p-891, 0.0, 0.0,
     0x1.e7ebbd121e92dp-32, 0x1.62e583dd75337p-307, 0.0, 0x1.f63504dc6c7f4p-130, 0.0,
     0.0, 0x1.68ea59b4377ccp-894, 0.0, 0.0, 0.0, 0x1.83d275fefbbcfp-207, 0.0,
     0x1.c4cd38c7469d9p-1009, 0x1.b0126ae1bbb8cp-422, 0.0, 0.0,
     0x1.e56be4d84954bp-707, 0x1.5859f795c85b4p-750, 0.0, 0.0, 0x1.ed75ff8088a52p-863,
     0.0, 0x1.2b7ebdbb953e1p-143, 0.0, 0x1.6abe9afa7beb4p-762, 0.0, 0.0, 0.0,
     0x1.ba5a0893ef3f9p-279, 0.0, 0.0, 0x1.975d50a600136p-877, 0x1.f7a25196a4b09p-820,
     0x1.5b15eaf6c8d5ep-276, 0x1.0be5db822b2f8p-173, 0x1.19bfee9da01a6p-1011, 0.0,
     0x1.8ab80b7c994b3p-229, 0.0, 0x1.73462a972a334p-755, 0x1.ae3d23dbe9d4ap-159, 0.0,
     0x1.4b6d568ed939ep-103, 0x1.8a7c45996a145p-950, 0.0, 0x1.07463a5cff73cp-278,
     0x1.f5e5588e269d1p-682, 0.0, 0x1.e97b2bc9d060bp-24, 0x1.5d41688f42f25p-526, 0.0,
     0.0, 0x1.6e688b13c5fa1p-908, 0.0, 0x1.4373525421d5bp-1012,
     0x1.f0e9dfdeada14p-197, 0.0, 0.0, 0.0, 0.0, 0x1.67239ea1b51e3p-897,
     0x1.6b7fda3774df9p-965, 0.0, 0.0, 0x1.1da2c10562ba3p-605, 0x1.88bdfaf0ef82p-957,
     0x1.72231eb6f419dp-637, 0.0, 0x1.0e7395baacfafp-478, 0x1.414e525cbb0c4p-508,
     0x1.8207ac088cc95p-360, 0x1.539713aeef16dp-778, 0.0, 0.0, 0.0,
     0x1.84456b9c258dap-860, 0.0, 0x1.5f70b57b54e61p-156, 0.0, 0x1.c3ead1fa86821p-298,
     0.0, 0.0, 0x1.4d7eb8ae331e1p-123, 0x1.4181b76ba6ed3p-146, 0x1.b6929f16a32a6p-705,
     0.0, 0.0, 0.0, 0x1.7420647bbcf8bp-641, 0x1.8587ba1219a81p-930,
     0x1.4d15dcc32038dp-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bf0311434d61p-570,
     0x1.9ab8c620913fcp-644, 0x1.109cedaab2416p-499, 0x1.46c249973acc6p-436,
     0x1.590770dd128dbp-199, 0x1.e8db9c0ea7c3dp-182, 0x1.ccf26932f87f1p-177, 0.0, 0.0,
     0x1.8605d5c5b7034p-858, 0x1.a0aa329fd5be8p-816, 0.0, 0x1.a10c9f6c6ab0fp-718,
     0x1.4f6eeabd56d78p-488, 0.0, 0x1.69effd5e50874p-76, 0x1.4b2fa35e5c44cp-354,
     0x1.761a2c70e953bp-900, 0.0, 0x1.38e32a1dd8ea3p-680, 0x1.c6027eec95d41p-44,
     0x1.24f567528da8ap-911, 0.0, 0x1.11fec205ae569p-438, 0.0, 0.0, 0.0,
     0x1.0e922cc28cfe4p-653, 0x1.70eaeec312cf6p-924, 0.0, 0.0, 0x1.647157960526cp-293,
     0x1.238f169a02a6cp-206, 0x1.6c4c7484657abp-401, 0.0, 0x1.bc0754584b4ep-248, 0.0,
     0x1.be9c7c1de354dp-784, 0x1.ef780e29f255fp-409, 0x1.10c4edd49c061p-813, 0.0,
     0x1.4bbce55c9c705p-904, 0.0, 0.0, 0x1.ee771867e540fp-240, 0.0, 0.0, 0.0,
     0x1.ed974bb76282fp-1004, 0.0, 0x1.7b902295b0855p-969, 0x1.57b02e290d6b8p-224,
     0.0, 0.0, 0.0, 0x1.a3f7abb34671bp-278, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aa92e9a2a88d6p-676, 0x1.a5b2081c4ed7fp-533, 0.0, 0x1.e96e359ba77eap-859,
     0x1.0f1cc3527ee11p-313, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff3cfac19cab3p-718,
     0x1.a024708d69b14p-474, 0.0, 0x1.a6ec591e09164p-291, 0.0, 0x1.a7a9ae16fb2d7p-269,
     0x1.a5a4e01838bfep-63, 0.0, 0x1.6b1488648400cp-938, 0.0, 0x1.8ef646966390cp-422,
     0.0, 0x1.536efad2f4c34p-162, 0x1.7c50a2f22fed7p-585, 0x1.7587981c55535p-248, 0.0,
     0x1.7412cd2d3c0d1p-327, 0.0, 0x1.ead841b22b195p-333, 0x1.74eef630fe51ap-617, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.da376497796a6p-887, 0.0, 0x1.f3ab671f9af11p-1004, 0.0,
     0.0, 0.0, 0x1.ccd9f5beb1992p-893, 0.0, 0.0, 0x1.5b5aab0331731p-774,
     0x1.130e577878d83p-339, 0x1.c66022b4bbce4p-327, 0.0, 0.0, 0.0, 0.0,
     0x1.8faa0ea8b83cp-77, 0x1.538548000cf26p-551, 0x1.56f6fa2d14ed3p-254,
     0x1.32e55c242dc3dp-333, 0.0, 0x1.37b2aed84a49ep-459, 0x1.a4cb04882cbc7p-696,
     0x1.3c9e99817558dp-980, 0.0, 0x1.6278de60b78e3p-573, 0.0, 0x1.a1e3c5c749b7fp-640,
     0.0, 0.0, 0x1.b9108ce19a299p-968, 0x1.a86aca4b60887p-457, 0x1.ade9fc0c18609p-678,
     0x1.c4c45483d46aep-619, 0x1.4b69b2ca2d50bp-751, 0.0, 0.0, 0.0, 0.0,
     0x1.6354474c35f24p-782, 0.0, 0.0, 0.0, 0x1.0a49a0ae56aacp-860, 0.0, 0.0,
     0x1.2ba0a8edc8677p-299, 0.0, 0x1.7d38e1955564dp-190, 0x1.02ede739f8c3fp-561, 0.0,
     0x1.adc4c382f2e0ap-199, 0.0, 0.0, 0.0, 0.0, 0x1.edd60e88b8ce7p-267, 0.0, 0.0,
     0x1.6e196018fbb25p-386, 0.0, 0.0, 0.0, 0x1.812cb89022431p-760, 0.0,
     0x1.a23f8171bc586p-88, 0.0, 0x1.da590b5dc0873p-19, 0.0, 0x1.11cbca2eb5fb2p-11,
     0x1.bb1740496a77cp-733, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.675c4c52fd785p-953,
     0x1.b6c8b8f27debbp-819, 0x1.4de8f7fec69c1p-592, 0x1.1a06a5dfb192bp-586,
     0x1.d5ce46e6fd0edp-1, 0.0, 0x1.3a3c7f41ba8cp-323, 0x1.4826c4ac5a5dep-211,
     0x1.c5bfe0b1cb6e5p-275, 0.0, 0x1.de29407b3c09bp-515, 0.0, 0x1.236a709b9a917p-960,
     0x1.d14c2e7e16c7ep-404, 0x1.0da38eaf56565p-729, 0x1.947329df97dcbp-885, 0.0, 0.0,
     0.0, 0x1.94a88bb824e3dp-712, 0x1.3fb8c74be697fp-417, 0.0, 0.0,
     0x1.15e2661750a79p-903, 0.0, 0.0, 0.0, 0x1.c82b1299921f7p-579,
     0x1.aabfae1ba50cep-361, 0x1.ec73b0f493847p-251, 0x1.6d31d47d106c3p-862, 0.0, 0.0,
     0.0, 0x1.bcf06536941fdp-298, 0x1.19e5391d18c6dp-188, 0x1.99712fbe5da96p-101,
     0x1.e7070d0e02024p-479, 0.0, 0x1.39a84a29142d7p-51, 0x1.f59a582ee612ep-51, 0x1p0,
     0.0, 0x1.5b8f213412fb6p-537, 0x1.133f06f4c9eb2p-199, 0x1.b135bd5995045p-966,
     0x1.9942d2672f31dp-99, 0.0, 0.0, 0.0, 0x1.6921b2e22b52p-373, 0.0,
     0x1.56dc0fe3bec7ap-713, 0x1.a1967d42e8d95p-728, 0x1.df78b868b383p-71,
     0x1.c774f7a5693f1p-947, 0.0, 0x1.7ddde17b1f432p-969, 0x1.20ee3015d2722p-136,
     0x1.8a2046bc4e8ccp-187, 0x1.9f38aefb876c5p-282, 0.0, 0.0, 0.0,
     0x1.4f2d3fe35a1d9p-792, 0x1.cdf1bfdbba39dp-288, 0.0, 0x1.7119d48eb4984p-749,
     0x1.1adee2cf2554ap-148, 0x1.e728f86e827fdp-121, 0.0, 0x1.26d176e1c112ap-634, 0.0,
     0.0, 0.0, 0x1.b036a3b6081bbp-694, 0.0, 0.0, 0.0, 0.0, 0x1.97f3a64f2d989p-872,
     0.0, 0.0, 0x1.3ae5f24d72083p-34, 0.0, 0x1.d749e7788ebddp-205, 0.0, 0.0,
     0x1.d8004dfed640ep-910, 0.0, 0x1.06194a3ab5abdp-80, 0x1.e0bda30a1853ep-439, 0.0,
     0.0, 0x1.6fb3ac3ce16fap-671, 0.0, 0x1.b7c0f94fa2931p-161, 0.0, 0.0,
     0x1.a196f52f5550dp-639, 0.0, 0x1.086dc8b0442a2p-426, 0x1.48eec6aca469bp-970,
     0x1.e2a530a28e267p-522, 0.0, 0.0, 0x1.9f1072c535fd2p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.2fb436cb0ee54p-726, 0x1.ef8604405a3eap-364, 0x1.0b97ce387127ep-332,
     0x1.93f8386ecc2dbp-588, 0.0, 0x1.209740341c7bap-429, 0x1.bd29b9faae32fp-457,
     0x1.81df3da09ad71p-67, 0.0, 0.0, 0x1.57e1f2d40b01bp-123, 0x1.ae08921799352p-99,
     0.0, 0x1.39a247fe1c77dp-58, 0x1.3e2703edc303fp-545, 0.0, 0x1.b2e25457a6262p-753,
     0x1.dfa34be7aa029p-414, 0x1.bb939f911cfcdp-533, 0x1.a2aaef96030b6p-763,
     0x1.31989947fac32p-741, 0x1.fbdc3a0d0cf2p-567, 0.0, 0.0, 0x1.2eeb5ddb5ba9ap-729,
     0.0, 0.0, 0.0, 0x1.97b9d9a95f962p-370, 0.0, 0x1.468e8cebf09e4p-152, 0.0, 0.0,
     0x1.3c21b54144664p-167, 0.0, 0x1.d327e2b284879p-523, 0.0, 0.0, 0.0,
     0x1.74a59ddc9d735p-247, 0x1.d4090c3e1006ep-495, 0.0, 0x1.e770416a181f8p-999,
     0x1.9c1a65c56ae9cp-946, 0.0, 0x1.60301d27ff1b8p-157, 0x1.7bab4ab2834efp-481, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.892b4986b0101p-299, 0x1.9da0049426bbp-274,
     0x1.c95d3d640bee2p-767, 0x1.646310b3992ccp-996, 0x1.e9c6622cf4efap-128, 0.0,
     0x1.bd0e97e887c8dp-854, 0.0, 0.0, 0.0, 0.0, 0x1.e339b6e36630ap-162,
     0x1.305a030a85fd5p-140, 0x1.d1e4ba6028d9dp-629, 0.0, 0x1.dac57264cdc9cp-26, 0.0,
     0x1.28ecb79b5066ep-426, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61a96d229805ap-371, 0.0,
     0x1.5cface941f6c3p-553, 0x1.e0bd43da9d2a8p-996, 0.0, 0.0, 0x1.a420e8c500f93p-11,
     0x1.fb71e2b95097p-487, 0x1.cbd9928db0b74p-405, 0.0, 0.0, 0x1.d486da2f74773p-740,
     0.0, 0x1.75a495d3a6befp-784, 0.0, 0x1.508f864956c69p-409, 0.0, 0.0,
     0x1.c1f64fe69deb4p-732, 0.0, 0.0, 0.0, 0x1.79f2bb748938dp-438, 0.0, 0.0,
     0x1.ec46905fc5b7dp-682, 0x1.3153c9a74f93ep-548, 0.0, 0x1.2ab90a4c16712p-324,
     0x1.2fccf85d7f443p-104, 0x1.2477184f8a48fp-422, 0.0, 0.0, 0x1.9ae05a706451ep-345,
     0x1.079e81043da37p-521, 0.0, 0x1.140ccb071f753p-87, 0.0, 0.0,
     0x1.1e7fb13e3400ap-364, 0.0, 0x1.98560d8371bcep-748, 0.0, 0.0, 0.0,
     0x1.3c2f628e6cd45p-995, 0x1.1b1992dc02585p-392, 0.0, 0x1.7e4f29d1152ffp-263,
     0x1.68b0458518e14p-538, 0.0, 0x1.420c763d05f6ap-851, 0.0, 0.0,
     0x1.00bb14dfa3e8dp-279, 0x1.5d3f69dcaeac2p-827, 0.0, 0.0, 0x1.306823b0bef4dp-478,
     0x1.46527bb73d14ep-916, 0x1.71f4541156f8p-831, 0.0, 0.0, 0.0, 0.0,
     0x1.0f6830540ebe2p-918, 0.0, 0x1.fafecbc3d6f29p-841, 0.0, 0x1.a8747e849288ep-407,
     0x1.ac6a7b4207435p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5e3a581de314p-392, 0x1.dcdbe5233de54p-576, 0x1.6a90ea6e5591ep-335, 0.0, 0.0,
     0.0, 0x1.9f4c3d0d0b47dp-163, 0.0, 0x1.56c04b7f205fap-80, 0.0,
     0x1.a5ad0ade9ad7fp-476, 0.0, 0.0, 0.0, 0x1.777fa6f470517p-376, 0.0,
     0x1.36360514296edp-610, 0x1.8337801afd01fp-662, 0.0, 0x1.b569c9830f49fp-508, 0.0,
     0x1.3f8276469cc7ap-589, 0x1.4b2e1c71f690ep-41, 0x1.015e21f283866p-574, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8c6bac9402057p-935, 0x1.fa6eaed2a0e44p-330, 0.0,
     0x1.c9a02fcb9f2f3p-132, 0.0, 0x1.361995c8340ddp-886, 0.0, 0x1.06bbf357cfa46p-306,
     0.0, 0.0, 0x1.faf9dda68342dp-258, 0.0, 0.0, 0x1.69352f48f14a8p-711,
     0x1.6e27249b9aee6p-344, 0x1.52c56b2fcacf7p-239, 0.0, 0.0, 0x1.328aa0d88512ep-234,
     0.0, 0.0, 0x1.6cc7c8f21adc9p-7, 0x1.5ee2620555483p-781, 0.0, 0.0,
     0x1.39af0919305ap-574, 0.0, 0x1.ba5bf22f21c4ap-664, 0.0, 0.0,
     0x1.ad43933dca065p-152, 0x1.2cc34dad5f98dp-294, 0x1.53eae72815d89p-873,
     0x1.7eb8482a36302p-133, 0.0, 0.0, 0x1.d10bc28d565fep-389, 0x1.635c9e58a1cdap-816,
     0x1.1660e9ff73bbep-990, 0x1.63464fb4e5d24p-578, 0.0, 0.0, 0x1.0a454bf5dbbe6p-37,
     0x1.277a0e6116cdbp-455, 0.0, 0.0, 0x1.e7915abf13a1dp-53, 0.0,
     0x1.b90ddffbc4132p-899, 0.0, 0x1.95852f93490c6p-171, 0x1.81e3c04fd22c5p-354, 0.0,
     0x1.bcd3b706027p-924, 0x1.365937de02e23p-936, 0x1.6fbcffaf77bddp-933, 0.0, 0.0,
     0.0, 0x1.8e1acdfda0b07p-144, 0x1.50eb9ec8027c7p-223, 0x1.3b25e2609cd2p-176, 0.0,
     0.0, 0x1.9abd6c1f75738p-969, 0x1.3f5e51f8d8ed3p-981, 0x1.481a68971c148p-847,
     0x1.7d781cc952c08p-654, 0.0, 0.0, 0x1.08cff2bbb845bp-294, 0.0, 0.0,
     0x1.e11c9e030ff23p-442, 0.0, 0x1.8c02edde98fa6p-188, 0.0, 0.0,
     0x1.bac4e031c297dp-448, 0.0, 0x1.be48c7efb92b4p-24, 0.0, 0x1.0f6681dce25f4p-806,
     0x1.b958541c6ee8p-3, 0.0, 0x1.9efb6885744c1p-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b7860882efdb1p-953, 0.0, 0.0, 0x1.7c2cff25417c4p-99, 0x1.8c5d50bf24b37p-860,
     0x1.3c1790ed1a925p-216, 0.0, 0.0, 0.0, 0x1.c8d0be26fb357p-692, 0.0,
     0x1.f8178a3492421p-556, 0x1.646964d47c6c5p-137, 0.0, 0x1.5b05799506d1ep-1004,
     0.0, 0.0, 0x1.bd96bc1fa7673p-377, 0x1.67601edea5f6fp-809, 0x1.61cdaa6ef8411p-106,
     0x1.2872a56f57143p-165, 0.0, 0x1.45a2698bf7dd1p-493, 0.0, 0x1.b87d80d79b315p-32,
     0.0, 0.0, 0.0, 0.0, 0x1.6293810e5cc8fp-352, 0x1.d64d67ce0db96p-884, 0.0, 0.0,
     0x1.b12ea63f41094p-782, 0.0, 0x1.3ad92ef05e714p-325, 0x1.ac857ed50ca48p-53, 0.0,
     0.0, 0x1.34473e7ec29d5p-1020, 0.0, 0.0, 0x1.6b4be07c3204ep-279, 0.0, 0.0,
     0x1.eae1dbb0399d9p-485, 0.0, 0x1.c595cc54b78afp-818, 0x1.a60788d988489p-356,
     0x1.efb0cfb1409c8p-610, 0x1.bea9fe91e95e8p-166, 0x1.e2b6e3592e79p-818, 0.0, 0.0,
     0x1.eb5e57daa1e1cp-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22410c690853ap-143, 0.0,
     0.0, 0.0, 0.0, 0x1.869ac3faf50e3p-101, 0x1.185645a1d5fb5p-388,
     0x1.ef4f2c10ba0acp-864, 0.0, 0x1.05e599077c834p-838, 0x1.f77af155fa12cp-160, 0.0,
     0.0, 0.0, 0x1.00122422cc2a1p-963, 0.0, 0x1.1c364841e1bf6p-57, 0.0,
     0x1.1251171e9ed51p-331, 0.0, 0.0, 0x1.2b70e6a77ddbep-439, 0x1.0e05e8ac2bde6p-940,
     0x1.69c6a37a17b8ap-281, 0x1.32c32cab9fc66p-609, 0.0, 0x1.9acc8551ae1efp-129,
     0x1.cc956ccc7393bp-398, 0.0, 0x1.93de4883bfd1bp-195, 0.0, 0.0,
     0x1.a0eec33ab3efbp-84, 0x1.e0db028e602fdp-427, 0x1.f21a051ceefe7p-989, 0.0,
     0x1.63a6f14e6c66cp-880, 0.0, 0x1.8e7733d723485p-895, 0x1.ba9f447dcac53p-595,
     0x1.c4bd7fe3df211p-543, 0x1.97a7d3845b312p-475, 0x1.6fac1bd98a37cp-204,
     0x1.f791a658759cbp-296, 0x1.208fdf21f308bp-904, 0.0, 0x1.1412e091048adp-379, 0.0,
     0x1.0e4008d1765eep-319, 0.0, 0x1.714ff130f289ep-754, 0x1.d42f8ca284fcap-198,
     0x1.2baef15c0b461p-294, 0.0, 0x1.e52e7d8e7d667p-844, 0.0, 0.0,
     0x1.56e496c904072p-292, 0.0, 0x1.bde045d6cf64dp-842, 0.0, 0x1.a76acaa5bc209p-648,
     0.0, 0x1.a0caf5d6f39bfp-600, 0x1.dc76c7588a403p-742, 0.0, 0.0,
     0x1.d00ca8bd4212ep-346, 0x1.406c487ee8a3ep-775, 0.0, 0x1.988b50b5afc77p-81,
     0x1.07e8f25fcd68dp-646, 0.0, 0.0, 0.0, 0x1.dbfc55b015777p-267,
     0x1.aafd4b9561ecep-394, 0.0, 0x1.4f887a91239f5p-231, 0x1.87eff02374d18p-794, 0.0,
     0.0, 0x1.c96644a0a59fdp-714, 0x1.2fac6975dac77p-416, 0.0, 0.0,
     0x1.760107255374bp-649, 0.0, 0.0, 0.0, 0.0, 0x1.08d7b6f523237p-737, 0.0,
     0x1.8d06d429fbed4p-48, 0x1.3839f427da109p-917, 0x1.834d984eb4e02p-609,
     0x1.3d2ba374a657fp-482, 0x1.bea0367ba773fp-57, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.198f49bf186e7p-372, 0x1.0ee0f93964514p-73, 0.0, 0.0, 0.0, 0.0,
     0x1.3180b0c565c5cp-565, 0.0, 0.0, 0x1.6d547dd78701p-329, 0x1.a854b2cc7c947p-831,
     0x1.64a9e550fcdb6p-734, 0.0, 0.0, 0x1.bbb4fa62ed5d4p-537, 0x1.141549c894892p-634,
     0x1.11a66e37c6b28p-1007, 0x1.41bece63ed64fp-515, 0.0, 0.0, 0x1.c422eb066babp-477,
     0x1.931d83615362fp-57, 0x1.4320cfa526689p-229, 0x1.f30cde47bdef6p-828, 0.0,
     0x1.933807d5f9febp-997, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c6342ccacc18cp-642,
     0.0, 0.0, 0x1.cb8c03760f50cp-996, 0x1.23d9d7ca5ac39p-37, 0x1.eebaf193de785p-155,
     0x1.f218b7b8b864bp-430, 0.0, 0x1.51e8afe8137f2p-298, 0x1.003759aa10f0fp-715, 0.0,
     0.0, 0x1.2f02bc9f1c2d5p-710, 0x1.fd389e8cfac4p-640, 0.0, 0.0,
     0x1.c2a0176affa7bp-53, 0x1.56949dc27028dp-18, 0x1.59d68333bb2f3p-848, 0.0, 0.0,
     0x1.c8a4a77708e8bp-836, 0x1.ee7facede8befp-886, 0x1.e675f956ef315p-628, 0.0,
     0x1.d131b8c3b5ccap-1008, 0.0, 0x1.5c720ba565d3ap-679, 0.0, 0.0, 0.0, 0.0,
     0x1.2579be51bef02p-500, 0.0, 0.0, 0x1.c557e60e3cb84p-836, 0x1.35a3d5626dcabp-51,
     0x1.077662d6ba99cp-259, 0.0, 0.0, 0.0, 0x1.4c023af56c1ccp-628, 0.0,
     0x1.b6482795365e7p-719, 0.0, 0x1.eaa7900e7f35bp-521, 0x1.23ea802cb754ap-480, 0.0,
     0x1.5b28fae52b6fbp-773, 0.0, 0x1.e30ac9d0db62bp-569, 0x1.4797a7e877a14p-926, 0.0,
     0.0, 0x1.631fda3f210adp-48, 0x1.4d93b1a7351dcp-69, 0.0
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
            tmp1 = Sleef_finz_atand1_u35purecfma(tmp0);
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
    printf("Sleef_finz_atand1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atand1_u35purecfma bench acc %la\n", global_bench_acc);
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
