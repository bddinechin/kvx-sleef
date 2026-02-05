/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp2d1_u10purecfma.c --function \
 *     Sleef_exp2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.caa13e7dfff77p-114, 0x1.0f6d096d1d9f2p-654, 0.0, 0.0,
     0x1.2d2f98b13ddccp-100, 0x1.c7d03ce5eef8fp-206, 0x1.dcf4923bef6e3p-228,
     0x1.1124c4d25c4d7p-351, 0x1.1401513866761p-200, 0x1.32b5c888ccdc2p-570,
     0x1.8cc1c70552f5bp-559, 0x1.1289a16e789bp-184, 0x1.7001623f3d76fp-474, 0.0, 0.0,
     0x1.099022dd7e263p-281, 0.0, 0.0, 0.0, 0.0, 0x1.cbddd4b098413p-600, 0.0, 0.0,
     0.0, 0x1.d89fd6b2d4753p-97, 0.0, 0x1.fdcfb5a1d458cp-667, 0.0,
     0x1.5dd2cfa721748p-996, 0.0, 0.0, 0x1.028f74eb86d25p-312, 0x1.cbb41706b994fp-935,
     0x1.b5b7740becd98p-273, 0x1.3490512b9246bp-636, 0.0, 0.0, 0.0,
     0x1.919bc3b90eddcp-419, 0x1.6f66badee2814p-115, 0x1.004d5dab11c37p-149,
     0x1.b766038b13202p-294, 0.0, 0.0, 0x1.9e04ed30ad777p-994, 0x1.afe6594d447efp-577,
     0x1.6811f9f070677p-898, 0.0, 0x1.b983def0d8e39p-431, 0x1.748e34e61dd43p-964,
     0x1.bd17409d144a8p-272, 0.0, 0.0, 0x1.80512fce97efep-343, 0x1.0a0b2c4a05133p-993,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ee606e8722a1p-1017, 0x1.8dc60a6677882p-404, 0.0,
     0x1.0b64ba73b6782p-105, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c20a9b3e89459p-325, 0.0,
     0x1.b8ef18e1b8092p-844, 0.0, 0x1.6cbc91f0ac91ap-265, 0x1.6f186f73339d9p-662,
     0x1.8fa9a551c437dp-230, 0.0, 0.0, 0x1.ba0e72d8bd4e9p-106, 0.0, 0.0,
     0x1.f195cca6c9227p-439, 0x1.f9bacb4fdc84cp-163, 0.0, 0.0, 0.0,
     0x1.947df11187c58p-453, 0x1.ac788bbd6dc1ep-493, 0.0, 0x1.c1e73f5f4e415p-612,
     0x1.b980cb0987c04p-276, 0x1.904a84b475e9p-1003, 0x1.c779e3206855fp-899, 0.0,
     0x1.f452bb95e34cfp-156, 0x1.ea5b9415eb24dp-997, 0x1.7ef886df66fa3p-83, 0.0,
     0x1.63e4adefd0c11p-145, 0.0, 0.0, 0x1.72822a66b89a5p-904, 0x1.1c189e77b59b3p-423,
     0.0, 0x1.81132d4f11dc9p-825, 0x1.87fd72da15ab1p-441, 0.0, 0x1.8ee3526c304f4p-156,
     0.0, 0x1.32b5c674f2041p-485, 0x1.aceef443cd869p-482, 0x1.a74ec81e92a53p-355,
     0x1.aae97c055c741p-751, 0.0, 0.0, 0x1.24dca758da23bp-354, 0.0, 0.0,
     0x1.7993aef27a4a1p-167, 0.0, 0.0, 0x1.db776e95dd74dp-456, 0.0, 0.0,
     0x1.960643bdbb162p-434, 0x1.76e4de7af9f95p-300, 0.0, 0x1.389418d6e7ef1p-447, 0.0,
     0.0, 0.0, 0.0, 0x1.2f0a86c150478p-657, 0.0, 0.0, 0x1.fa6376e1b0793p-422,
     0x1.432b8e6f53e52p-990, 0x1.5ccd4d6a9422bp-248, 0.0, 0.0, 0x1.ac58f72d100b5p-763,
     0.0, 0x1.360850a9a7577p-647, 0x1.07e5a1627b664p-1000, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3268897b1d07p-107, 0x1.2bd273237d2fap-566, 0.0,
     0x1.88daa518db6ecp-420, 0.0, 0.0, 0x1.ad2a38f80079dp-287, 0.0, 0.0, 0.0,
     0x1.4108eb5a015d1p-617, 0.0, 0.0, 0x1.85f33da3c6cefp-530, 0x1.f1a9761ff7535p-862,
     0x1.aa981e0ad4357p-655, 0.0, 0.0, 0.0, 0x1.fa285ca902306p-917, 0.0,
     0x1.5d260d46cb16ep-308, 0.0, 0.0, 0.0, 0x1.918ea250d0d01p-16, 0.0,
     0x1.51be5b46dd05bp-113, 0.0, 0x1.6d4cf1cd5adf1p-15, 0.0, 0x1.7632d7dc8577fp-53,
     0x1.81552f038f143p-293, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.351843c25750cp-937,
     0.0, 0x1.7174235c1bcd1p-733, 0x1.d1b531c5c7b8p-645, 0.0, 0.0, 0.0,
     0x1.64df099823061p-962, 0x1.d5c3b1b4a8a98p-788, 0x1.6df1b0a0479dp-793,
     0x1.20482aa33747p-591, 0x1.07c4591736c5p-243, 0x1.2e2c8c8e51c45p-924,
     0x1.9b04b883a1bd9p-740, 0x1.9b6f904a2cf8bp-49, 0x1.d6225d894fbebp-300,
     0x1.288ac207c4a7bp-680, 0.0, 0x1.c60f2321bede2p-304, 0x1.456aa0ec10e5p-770,
     0x1.3d981c222c883p-473, 0x1.00bdcc9b33009p-470, 0x1.5a17c20c15eb3p-305,
     0x1.99b84aa085a03p-636, 0x1.fbe939a1d1f8cp-469, 0x1.094f04faef9eap-95,
     0x1.5999fc60d8d76p-977, 0.0, 0.0, 0.0, 0x1.21b0a4bef74a2p-537,
     0x1.de0f3b160794ep-636, 0.0, 0x1.9a4b282c9c266p-160, 0x1.57245b201c63fp-446, 0.0,
     0x1.69cf10b9d043bp-678, 0.0, 0.0, 0.0, 0x1.112305379b5cdp-661,
     0x1.4c39a6079b25fp-187, 0.0, 0.0, 0x1.c8d81a501ccbfp-230, 0.0, 0.0,
     0x1.fcbc94b0dbe17p-561, 0x1.a0571e0f6ffbdp-750, 0x1.4d1b44fa24447p-176,
     0x1.501a99b1a4a8dp-344, 0x1.00a557fd7bcd1p-399, 0x1.6a2c96ca20a7ep-604, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.afd8632cdd917p-857, 0x1.f744be78b5b96p-543,
     0x1.137625e016c6fp-354, 0x1.b88c73c1d4fc1p-538, 0.0, 0.0, 0x1.c8c01169e0fap-936,
     0.0, 0x1.52b4a65a91e89p-486, 0.0, 0.0, 0x1.a793699efba74p-774,
     0x1.53051c9c6fd89p-936, 0.0, 0x1.7a303e4696816p-591, 0.0, 0.0, 0.0,
     0x1.487ecda73667ap-639, 0.0, 0.0, 0x1.51e6897a69dc3p-1002, 0.0,
     0x1.3da42042960c6p-687, 0x1.2d8687114c291p-530, 0.0, 0x1.04c1fee45a52bp-12, 0.0,
     0x1.6f01d8c853dbdp-674, 0x1.9f730995ecc83p-224, 0x1.88df323ca737bp-796, 0.0, 0.0,
     0x1.0cd3ed0d57b68p-737, 0x1.b8d8255aafb8cp-279, 0.0, 0.0, 0.0, 0.0,
     0x1.54f1ef46b1e1cp-730, 0.0, 0.0, 0.0, 0.0, 0x1.638ff292c4eeep-132, 0.0,
     0x1.36eef5d8c3a4dp-327, 0.0, 0.0, 0.0, 0x1.8c46bd6a5246ap-298,
     0x1.2b8de920e2721p-595, 0.0, 0.0, 0.0, 0x1.6251943b8a316p-610, 0.0, 0.0,
     0x1.f78fdc41bdfaep-445, 0x1.87dadb1cef8b4p-860, 0x1.ea3b53716e06p-143,
     0x1.f77900b8107f9p-971, 0x1.c596fbf6532d1p-299, 0.0, 0.0, 0x1.6216ef54b1a2bp-172,
     0x1.78644803c0daep-334, 0x1.89d48cbf2e967p-198, 0x1.3b43633c4e84dp-137, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.78a263d791ec5p-267, 0.0, 0.0, 0.0, 0x1.5dcaba103ea61p-948,
     0x1.91e6a5098c43cp-7, 0x1.0be9a4579c94p-84, 0x1.a7d218fbfd859p-247, 0.0, 0.0,
     0.0, 0x1.9917c0de77907p-27, 0x1.ab08065a00198p-142, 0.0, 0x1.7fcbde3d17086p-842,
     0x1.8e7701a8bd27cp-858, 0.0, 0x1.6ca0cad6eecf3p-16, 0.0, 0x1.f64aca0ff7b62p-643,
     0.0, 0x1.bcfa8fb4930f9p-65, 0x1.da2aacd1024a8p-283, 0x1.725581cbe9a79p-98,
     0x1.1d44a2d92541ap-869, 0.0, 0.0, 0x1.229b87f3ccbf3p-475, 0x1.fd2d0d07834f5p-876,
     0.0, 0.0, 0x1.d55fc2f8103f5p-375, 0x1.3415d5ac7005dp-92, 0x1.92713f01d833p-928,
     0.0, 0.0, 0x1.3e5e6a8aa5f72p-645, 0.0, 0x1.477f52a68acb1p-780,
     0x1.87d8e129d045ap-931, 0.0, 0.0, 0x1.b9e2a8cb5d74p-941, 0.0, 0.0,
     0x1.f45e492c81978p-208, 0x1.8068f641a4257p-882, 0.0, 0x1.232d3ccaac0f7p-737,
     0x1.da387d28246afp-694, 0.0, 0x1.dbe868d011a93p-993, 0x1.b323939ed5e27p-892, 0.0,
     0.0, 0x1.1a2b2d790dd99p-843, 0x1.fda41bf9c2f06p-453, 0x1.c262ff0aa1cf3p-544, 0.0,
     0x1.3139f4e752419p-742, 0.0, 0.0, 0x1.42444de74eb35p-722, 0x1.82168d9e8df0dp-56,
     0x1.8e468522a5ba6p-645, 0.0, 0.0, 0.0, 0.0, 0x1.781bcf645eb84p-238,
     0x1.f5682dcb35565p-997, 0.0, 0.0, 0.0, 0x1.7c07337fef894p-980,
     0x1.27d122d84b263p-951, 0x1.59c377f44883dp-701, 0x1.2b1daa918d63bp-971,
     0x1.d624e235bf228p-405, 0.0, 0x1.cce11e052317dp-741, 0.0, 0x1.9e8c98eb44674p-669,
     0.0, 0.0, 0.0, 0x1.da3eab320ecdp-540, 0.0, 0.0, 0.0, 0x1.fad5f9b6aa0dfp-60,
     0x1.9a02360fc107cp-644, 0x1.9acc0df28e5bp-915, 0x1.fad2060c01cd7p-288,
     0x1.fea8ed9bbe114p-708, 0.0, 0x1.97976ea252f17p-553, 0.0, 0x1.80b27cfa7ece6p-601,
     0.0, 0.0, 0x1.68e1c8deb25f8p-849, 0.0, 0x1.edc15216a8a0dp-341,
     0x1.3ec60993ce088p-764, 0.0, 0.0, 0.0, 0x1.e82f538c87703p-1000,
     0x1.507c0fc4683dfp-184, 0.0, 0.0, 0.0, 0x1.ca61ca3389ad8p-659, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6ba0375d8fcecp-47, 0.0, 0x1.c41ce6750d1e5p-48, 0.0, 0.0,
     0x1.de1f51b71b769p-184, 0.0, 0x1.29bbabffeb82cp-433, 0.0, 0.0,
     0x1.11f2ac7bdcf87p-278, 0x1.0c019f1847857p-84, 0x1.b2de6eb873fcfp-82, 0.0,
     0x1.9408bc7f50d52p-961, 0.0, 0x1.f84d49033b3b4p-91, 0x1.c7faedd335d5bp-408,
     0x1.7b41bb35178e2p-912, 0.0, 0.0, 0.0, 0x1.c7e106a86dab8p-666, 0.0, 0.0, 0.0,
     0x1.2b79c46818d84p-51, 0x1.e3e8acbfb68d4p-366, 0x1.8b4c67ea14114p-792, 0.0, 0.0,
     0x1.64ac5de0ae665p-940, 0x1.f91131c65dccap-195, 0x1.b96be5a6bfa37p-736,
     0x1.869d17619da43p-26, 0x1.30d822d5737dcp-770, 0x1.d0262a84a1c87p-210, 0.0, 0.0,
     0x1.7900faa080cc9p-313, 0x1.1185fd181aa11p-421, 0.0, 0.0, 0x1.b58ec34fba77fp-510,
     0x1.d6ab036dcd0eep-268, 0.0, 0x1.051aaf41bc7f9p-785, 0.0, 0x1.2930e0bd42495p-803,
     0x1.c000aa620bc7ap-520, 0x1.69d6b0637cd0dp-1005, 0x1.cc23d17d90f17p-461,
     0x1.1539f503ac0e4p-967, 0.0, 0x1.a843278c69321p-159, 0.0, 0.0, 0.0,
     0x1.a1b312dbb472ap-80, 0x1.ab31f05964d18p-670, 0.0, 0.0, 0.0,
     0x1.aaa0b3717a74ep-29, 0x1.3852cd3d12234p-960, 0x1.7ffe8189dc6e3p-179, 0.0,
     0x1.f2b9cf23c5e0cp-990, 0x1.e1b1e8bd3ea73p-385, 0x1.c05893d5be7f9p-374, 0.0,
     0x1.8e65a9325066fp-871, 0.0, 0x1.b9c8e200f4742p-151, 0x1.9daf7b52790c1p-213, 0.0,
     0.0, 0x1.08758f2f19f8bp-574, 0.0, 0.0, 0.0, 0x1.aa2f2021bc9f3p-354, 0.0, 0.0,
     0x1.cde0284d9b7f2p-971, 0x1.bcd1120b8b5d3p-929, 0.0, 0x1.725b74f8b5ed7p-786, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55f9b611e39fep-10, 0x1.974662da5200cp-17, 0.0,
     0x1.4a1f81b3623dfp-396, 0.0, 0x1.b5df8f9d6aec2p-123, 0.0, 0x1.79b3fb59f107fp-843,
     0x1.59e409ae24266p-194, 0.0, 0.0, 0.0, 0x1.e72c711c5ddb9p-691, 0.0, 0.0,
     0x1.8a2d855acb2eep-588, 0.0, 0x1.ae945da547ba8p-273, 0.0, 0x1.83ec26e8db50cp-579,
     0.0, 0x1.5b3aeeda6446cp-950, 0.0, 0.0, 0.0, 0.0, 0x1.16fdd7fbacc13p-677,
     0x1.c08be20638e97p-677, 0.0, 0x1.6399ac2be93d3p-977, 0x1.4557d1f188d1cp-845, 0.0,
     0.0, 0x1.2d409538629bep-71, 0x1.440a64ff0998bp-240, 0.0, 0.0, 0.0,
     0x1.d56b83a5ba87cp-599, 0x1.5253ec3683dep-122, 0.0, 0.0, 0.0,
     0x1.be25c0f56a2d2p-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44c4140c1e019p-217,
     0x1.2f70e2551e23p-937, 0x1.cac07f0bc00fcp-264, 0x1.c0a790dc88babp-396, 0.0, 0.0,
     0x1.b60f0d26cd1fep-726, 0x1.99fb846e30c81p-449, 0x1.6dce37df72a8cp-1018, 0.0,
     0.0, 0x1.967402be9b605p-787, 0x1.c148473aeee9cp-219, 0x1.19a7e8d70768cp-890, 0.0,
     0.0, 0.0, 0x1.bc757c425e217p-573, 0x1.f1fcd0193d3a7p-218, 0.0,
     0x1.1fe92c034d111p-878, 0x1.8d5c56fa02ec4p-298, 0x1.bb1d46c7e6433p-956,
     0x1.8829e08b01511p-984, 0x1.fececcae7b0e4p-833, 0.0, 0x1.1239ca8b3a786p-72, 0.0,
     0.0, 0.0, 0x1.322f9c6b62dbdp-461, 0x1.b9e61ca29d461p-780, 0x1.f49066896d37dp-825,
     0.0, 0x1.0ce86f58d2e8p-585, 0x1.01af4657ff179p-1015, 0.0, 0.0,
     0x1.cf6813ac49aa5p-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc19f92fe586bp-618, 0.0,
     0x1.005cf677027d2p-641, 0x1.234cef95c374ep-485, 0.0, 0.0, 0x1.7925ad07fe09ap-252,
     0.0, 0x1.082c7ce627978p-234, 0x1.29d710082fdcfp-698, 0x1.3bbef10d27d14p-353, 0.0,
     0x1.9ee447617cbd6p-1013, 0x1.e62d850afcfb5p-842, 0x1.30f4d4b675085p-957,
     0x1.1ac0ba6b5eea3p-389, 0.0, 0x1.84b18e5011292p-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89786eb2f1ee6p-97, 0.0, 0.0, 0.0, 0x1.f90b9a07ffc99p-630,
     0x1.359ae3c05cfd1p-342, 0.0, 0x1.3a20d508316c1p-528, 0x1.a4b488e446bcep-948, 0.0,
     0x1.c5d1f6d3896a1p-531, 0x1.f7e67db6cd9d1p-175, 0.0, 0x1.5529d19d89f57p-780, 0.0,
     0x1.529b7a6a53317p-993, 0x1.a7d5652b82e04p-704, 0.0, 0x1.ec4688c09940ep-148, 0.0,
     0.0, 0x1.9ef7637e5d049p-269, 0x1.97ae4d252b93ap-423, 0.0, 0x1.77d54cb22f097p-128,
     0x1.49a936dcdb6d5p-657, 0.0, 0.0, 0x1.4ca1231d2263dp-673, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.af13ac449c7dcp-471, 0x1.07177d0a28743p-734, 0x1.f5f896b3689cfp-268, 0.0,
     0x1.bb27b471946bap-497, 0x1.a2cddcacbae39p-657, 0.0, 0x1.3ae7c34ac3bc8p-504, 0.0,
     0x1.48c15fd6ee2c5p-497, 0.0, 0.0, 0x1.546e9804465f4p-94, 0.0,
     0x1.3a739ae12247fp-1018, 0.0, 0x1.32d4ce7bad71p-138, 0.0, 0x1.beafb4fe44b0bp-139,
     0x1.987aa824f33cep-829, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.69d4f1109965cp-637, 0.0, 0x1.34fdbcf6db3ecp-612, 0.0, 0x1.569a793fb50f7p-415,
     0.0, 0.0, 0.0, 0.0, 0x1.bed02602353p-194, 0.0, 0x1.db14150d438a8p-313, 0.0,
     0x1.5b7e50832e7p-944, 0.0, 0x1.bb3ac7c7eeb9p-453, 0x1.8987dbe0ae258p-119, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a061f81a0d3afp-799, 0.0, 0x1.9b3036a4fe20fp-928,
     0x1.2447ae2c9f095p-682, 0x1.beb86be875d0ap-416, 0x1.5b681eba56ebp-622, 0.0, 0.0,
     0.0, 0x1.7a6c19eafac54p-680, 0.0, 0x1.b138e4535b208p-965, 0.0, 0.0, 0.0,
     0x1.1622feb683e11p-570, 0x1.2e06947d43b28p-418, 0.0, 0x1.12edb85a9c63fp-546, 0.0,
     0.0, 0.0, 0x1.083bfae35f557p-109, 0.0, 0x1.f9fb7afc5bf3bp-642, 0.0, 0.0,
     0x1.ff077d74b7edp-847, 0x1.27d79fea74541p-36, 0.0, 0x1.2ec104b484c3dp-150,
     0x1.b2a7fc6352b2bp-583, 0.0, 0x1.551510ca48398p-773, 0.0, 0x1.dacb2d857b795p-479,
     0.0, 0x1.5b2ceb6c9b0d4p-91, 0.0, 0x1.5ef38437a6dd2p-921, 0x1.f87c7c389d8c9p-19,
     0.0, 0.0, 0x1.3b0a605f49042p-580, 0x1.afdbddae0519p-959, 0.0, 0.0, 0.0,
     0x1.9419dbfa26f1ap-361, 0x1.2676b6ed3ac17p-95, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cdfc2f79c3c4fp-7, 0x1.fea234003e9d9p-89, 0x1.53cc1bd89a524p-626,
     0x1.c30ed43d07391p-664, 0.0, 0x1.11e4b4100debap-851, 0.0, 0x1.3e134b0e17de7p-366,
     0.0, 0.0, 0x1.82e2d64b1b906p-330, 0x1.c33d4763fd7e3p-421, 0.0,
     0x1.4e40614e66199p-783, 0x1.a38e10f576426p-575, 0x1.713c8ef689a0cp-608, 0.0, 0.0,
     0.0, 0x1.e7dfee6078c32p-415, 0.0, 0.0, 0.0, 0.0, 0x1.09b2a983792bep-290,
     0x1.604c54350d60dp-861, 0x1.398dcb224acb1p-820, 0x1.e5168d475f523p-33,
     0x1.9b2e12c9055f4p-674, 0x1.77fc7e44998aep-625, 0x1.687090ea7b04bp-899,
     0x1.c03944b71e3d3p-739, 0.0, 0.0, 0.0, 0x1.f7578686f0498p-296,
     0x1.650651f08500bp-140, 0x1.28425042ddb93p-832, 0.0, 0x1.4bf1b7098ca51p-601, 0.0,
     0.0, 0x1.54cd53cb36cc8p-738, 0x1.7b7ca5c1c6b8bp-32, 0.0, 0.0,
     0x1.34e1786041a0ap-663, 0x1.0bc4da6f0caa3p-10, 0.0, 0.0, 0x1.2d02ca2496e58p-929,
     0.0, 0x1.a70e154acc1ap-208, 0.0, 0.0, 0x1.d0a3264a26758p-583,
     0x1.c1f6892281703p-135, 0x1.70eef0af0cf06p-466, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.50178852c1741p-415, 0.0, 0x1.36f877d212d9ep-652, 0x1.570e8426fbac9p-430, 0.0,
     0x1.377d8c9c34e87p-643, 0.0, 0.0, 0.0, 0x1.68ba962b4bf59p-745,
     0x1.6c9afd0419f52p-886, 0x1.f538f47c42456p-761, 0.0, 0x1.9a70b9f0afa19p-92, 0.0,
     0.0, 0x1.7eb60963b17c8p-80, 0x1.e54bd0f26a792p-691, 0.0, 0.0,
     0x1.a54492575a3dap-740, 0x1.b553f16c252ap-694, 0x1.49921ffe549efp-962,
     0x1.62eddd6573424p-141, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cfc47fdad2032p-101,
     0x1.71c2cef655eb6p-209, 0x1.abc413bee0193p-719, 0x1.c9f999f841f5fp-11,
     0x1.568610b0383fep-1008, 0.0, 0.0, 0.0, 0x1.ab5948a71f3ep-389, 0.0, 0.0,
     0x1.a2e0133e47d77p-858, 0.0, 0x1.3f4182e5add07p-306, 0.0, 0.0,
     0x1.e090fc5b51956p-623, 0x1.df324cd3e6c36p-70, 0.0, 0x1.5d33d22135ad8p-712, 0.0,
     0.0, 0x1.69101a1913ab9p-397, 0.0, 0.0, 0x1.6f43a651279ddp-501, 0.0,
     0x1.5d068f3d63085p-607, 0.0, 0x1.58524912ccfecp-340, 0x1.5ecdca00b4915p-632,
     0x1.59115a35c0efap-728, 0x1.ede31ac27757ap-232, 0.0, 0.0, 0x1.bff6f10a129c8p-91,
     0.0, 0.0, 0.0, 0.0, 0x1.e2f97ffae0de5p-705, 0.0, 0x1.9d86f96486905p-61,
     0x1.39ce34043d788p-14, 0x1.d1d01255cd06ep-990, 0x1.6857ee3602326p-284, 0.0, 0.0,
     0x1.543fee179842p-250, 0x1.ca81aadd9fd25p-467, 0x1.c4b4358f4b1e2p-274,
     0x1.b016540290bb4p-45, 0x1.86ce64b19ade7p-747, 0.0, 0x1.41523ece17156p-725, 0.0,
     0x1.396f7f79c5afep-196, 0x1.82d5e4bbf30cp-736, 0x1.11351e30ccc25p-70, 0.0,
     0x1.c36b5eae4f86dp-579, 0x1.e85455748df29p-944, 0.0, 0.0, 0.0,
     0x1.079380d8339b8p-87, 0.0, 0.0, 0x1.57dfb82a2de3ep-941, 0x1.8c48d26925f83p-190,
     0.0, 0x1.00c14c27926d1p-737, 0.0, 0.0, 0x1.4dc14cc246824p-69, 0.0,
     0x1.1634b3b6fc929p-78, 0x1.92b224836f52ap-907, 0x1.0114c408c0673p-54, 0.0,
     0x1.89ee640a161d3p-690, 0x1.eb5a3da299632p-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a48d4521025afp-512, 0x1.cf3127255b3a6p-526, 0.0,
     0x1.2c7d3c99392eap-756, 0x1.5599671983012p-549, 0x1.c3318760b0431p-245, 0.0,
     0x1.8fcefdf14d9c9p-394, 0x1.860f4ebb0ec79p-1000, 0x1.7c4ce7cdd25f9p-385,
     0x1.39b4678f94efcp-915, 0.0, 0.0, 0.0, 0x1.9dae868ae44e4p-293, 0.0, 0.0, 0.0,
     0.0, 0x1.e707eb412fa11p-833, 0x1.3f836c7a9fd77p-603, 0x1.26e58f0969f8fp-61
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
            tmp1 = Sleef_exp2d1_u10purecfma(tmp0);
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
    printf("Sleef_exp2d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_exp2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
