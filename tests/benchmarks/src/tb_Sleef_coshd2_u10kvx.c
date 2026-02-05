/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd2_u10kvx.c --function Sleef_coshd2_u10kvx \
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
     0x1.da41c0c5ee764p-234, 0x1.b1603195abd8ep-89, 0x1.3fa6d24952702p-884,
     0x1.2df1c76752ee7p-39, 0.0, 0x1.7a23df6fcadc5p-511, 0.0, 0.0,
     0x1.6bd0acdc68693p-634, 0x1.4c088d59f580dp-379, 0.0, 0x1.f9078d822268bp-381,
     0x1.bc8ed98d2ee58p-504, 0.0, 0.0, 0x1.45ef9d9ec050dp-382, 0.0, 0.0, 0.0,
     0x1.19bc834879b93p-275, 0x1.be062ddda7f93p-521, 0.0, 0x1.434b0087d64f3p-89,
     0x1.ec9a1712833f2p-423, 0.0, 0.0, 0x1.31dcdd925daccp-636,
     0x1.a44a77c0520ffp-1012, 0x1.a7f56eaa2f003p-401, 0x1.aa2a824f34388p-12,
     0x1.232767a99fb01p-338, 0x1.8df9dd7303c9p-570, 0x1.fd0be62a1634fp-908,
     0x1.5d8ee1f436704p-160, 0x1.cb327d0bbe6bap-509, 0x1.6335d25147c85p-452, 0.0,
     0x1.aca2323c78287p-900, 0x1.c5af53831196fp-555, 0x1.24b77df48249fp-861, 0.0, 0.0,
     0.0, 0x1.882ca67c0653p-68, 0.0, 0x1.2f1cbe3ad7e71p-316, 0.0, 0.0,
     0x1.5c77d658ead34p-676, 0.0, 0x1.6e455208e4e29p-914, 0x1.ddc6c5cf6f1dp-344,
     0x1.4e968a03ad9adp-438, 0.0, 0x1.909bd20050b21p-97, 0x1.ea59fa820e0fdp-788,
     0x1.3bb3e328ddbb1p-80, 0x1.b18f4be472b7bp-650, 0.0, 0x1.6197f8d4c2c68p-543, 0.0,
     0.0, 0x1.8bd31d4f23617p-366, 0x1.13299adea580bp-676, 0.0, 0.0,
     0x1.5a226e8de5a53p-59, 0x1.0ac0163bf5856p-67, 0.0, 0x1.57b1ec2538ce6p-55, 0.0,
     0.0, 0x1.2ff4249ffb7c9p-139, 0x1.7a744e7a905e8p-273, 0.0, 0.0,
     0x1.306d514743521p-37, 0x1.74a050d31faaep-285, 0.0, 0x1.1332ff199dba8p-426,
     0x1.66fced1df27e1p-794, 0x1.ccc3e588c3d98p-231, 0x1.7b4c019f081a8p-904, 0.0,
     0x1.c0cd4b4c92eeep-639, 0x1.39261ff8b414fp-344, 0.0, 0.0, 0x1.10c58019cc98ap-681,
     0.0, 0x1.4a6b946b194d5p-985, 0.0, 0x1.1378fe3cc760dp-918, 0x1.30759ed3ac96dp-139,
     0x1.c3e408656ed31p-293, 0.0, 0x1.04b9debf65ca7p-192, 0x1.c827d564fe166p-908,
     0x1.5e9c472640351p-759, 0.0, 0x1.9d71b4cb0cddfp-678, 0x1.e95154370946bp-87, 0.0,
     0x1.6b24c84de77b9p-533, 0x1.447ba04b035a8p-307, 0.0, 0x1.670e4c7af6fb7p-474, 0.0,
     0x1.f7a9ce166f45bp-17, 0.0, 0x1.0646b8e3e4d18p-806, 0.0, 0.0, 0.0,
     0x1.8a7ec3d9b118ap-289, 0x1.0600466ee67d2p-368, 0x1.34b50083f181ap-851,
     0x1.31b44bc1e82c8p-520, 0.0, 0x1.d2b7595916c85p-714, 0.0, 0.0,
     0x1.1396332c83fbcp-921, 0x1.7028f0efd58efp-682, 0.0, 0x1.095d729524549p-491,
     0x1.ec67b0ae5d15ep-277, 0x1.d086e69287801p-525, 0x1.1512a2d5994a9p-604,
     0x1.ca230a614f7e8p-783, 0.0, 0x1.898b6bd66124cp-139, 0x1.d72e57b474baep-88,
     0x1.07b816ace7744p-423, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b276ac85a790fp-942, 0x1.83debe6ba34aap-470, 0.0, 0x1.0a29cb5c1907ap-767,
     0x1.6f3dc8c2fcaffp-287, 0x1.7cdbb9a83560cp-66, 0.0, 0x1.9d577d77fff8ep-13, 0.0,
     0x1.cffa28638818dp-297, 0x1.b450a07988b5cp-607, 0x1.754a18b02e827p-927,
     0x1.bee0787111badp-384, 0x1.1c6fb74cca3dep-547, 0.0, 0x1.a4436a2320a15p-330,
     0x1.3efcd278b39edp-238, 0x1.bfa5b7b9671c9p-921, 0x1.73fa7d385ef96p-983, 0.0,
     0x1.67aa1b25f937ep-428, 0x1.da1651b4c5098p-78, 0x1.22fb3b9c4aca4p-989, 0.0,
     0x1.89c04386ba48p-834, 0x1.5f4c045046976p-278, 0.0, 0.0, 0.0, 0.0,
     0x1.9e0fc87bd50edp-255, 0.0, 0x1.7b85b82396586p-116, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dcde92c137ecbp-524, 0x1.4f4ee1f0136b9p-842, 0.0, 0.0, 0.0,
     0x1.ec2cdda280115p-9, 0x1.6fbb76b88820fp-1009, 0.0, 0.0, 0x1.0a56049120586p-404,
     0.0, 0x1.6eed7910d7669p-953, 0x1.69c570c2b1acfp-8, 0x1.f2fc01a4a35bp-366, 0.0,
     0.0, 0x1.274ec1dc82b62p-444, 0.0, 0x1.c99683e0a7326p-539, 0x1.9d1ad4c0ec407p-163,
     0.0, 0x1.740d56294baap-318, 0x1.dffec0b32a9d1p-452, 0.0, 0x1.6482cdb8bbc8dp-628,
     0.0, 0x1.737edf5c81608p-247, 0x1.a7916b830902bp-323, 0x1.2396a232a5c73p-371, 0.0,
     0x1.8e986e6479b92p-915, 0.0, 0x1.548a81320c185p-529, 0.0, 0x1.1dc4e79eb0402p-462,
     0x1.9ac0f802b5219p-695, 0.0, 0.0, 0x1.79bf80e0a4a8ap-117, 0x1.3cd48be76aaacp-15,
     0x1.bdf2206220e4fp-878, 0.0, 0.0, 0x1.de763bb41ff83p-440, 0x1.3cf7d8a4a6658p-249,
     0x1.472212eed0b44p-845, 0.0, 0x1.77d0ab563fcd8p-344, 0x1.38d8ebe83d4f1p-390, 0.0,
     0.0, 0x1.4e708d6b0473fp-649, 0.0, 0.0, 0.0, 0x1.e8dbad416e5cbp-483,
     0x1.1a912d3cabe39p-679, 0x1.73d0f203ae0c6p-826, 0.0, 0x1.332fc89db6868p-387, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.158c78a81d19dp-327, 0.0, 0x1.0b2ee1f5a575p-687,
     0x1.3ac8a501288d1p-772, 0.0, 0.0, 0x1.3292f21e9722cp-351, 0x1.c60c962d9a05cp-118,
     0.0, 0x1.bac1de0a4ac56p-658, 0.0, 0.0, 0.0, 0x1.071464ea0184bp-735, 0.0, 0.0,
     0x1.5f91d30c0a3e3p-770, 0x1.da7c83b14c402p-676, 0x1.2d1e59c7303a5p-77, 0.0,
     0x1.75a484e94f392p-521, 0x1.63e06ee6c9b92p-396, 0.0, 0x1.974db5a37f36ep-344, 0.0,
     0x1.a6bfb47e832b2p-607, 0x1.a40b634939f4p-360, 0x1.d3ac52aa8ce1ep-547,
     0x1.ee02de85a5befp-860, 0x1.ace55b93f6c18p-357, 0.0, 0x1.936fbae226abep-608,
     0x1.16d255a356a35p-310, 0.0, 0.0, 0x1.4ec21914530dcp-846, 0x1.f2c5ef48b593dp-543,
     0x1.f4f4f10de9513p-434, 0.0, 0.0, 0x1.5323ccc122f36p-1016, 0.0, 0.0, 0.0, 0.0,
     0x1.a6ca906255d78p-326, 0x1.78cc7dfb145a5p-410, 0x1.b3873e609dc89p-501,
     0x1.b0086801d98fp-625, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83cce92987f16p-288, 0.0,
     0x1.5c138e32ee10cp-282, 0.0, 0x1.021dca29457b4p-75, 0x1.b0236c4245f33p-178, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ee6782edec5dcp-56, 0x1.79d4ce6c9e0a1p-153, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1fccf759a1945p-288, 0x1.23f96333894ap-249,
     0x1.df4e3146f5fa5p-616, 0.0, 0.0, 0x1.9171fac5e9ed6p-246, 0.0, 0.0, 0.0,
     0x1.9efe5557904ebp-861, 0.0, 0x1.e08998d5901b8p-19, 0.0, 0.0,
     0x1.1a5c3b5b815f9p-295, 0x1.ba272e4244808p-269, 0.0, 0x1.cddb7726a38fep-595,
     0x1.2e56da1549e86p-758, 0.0, 0x1.6c5562d273353p-237, 0x1.2dbf425d0700bp-921,
     0x1.24b946a02850dp-6, 0x1.1b1d289cfa5cep-27, 0.0, 0x1.3952508c3d3d7p-338,
     0x1.772fb922b52ccp-22, 0.0, 0x1.5a3a9ddad1235p-827, 0.0, 0.0,
     0x1.747490de8369cp-260, 0.0, 0.0, 0x1.14d5a105d1f9p-246, 0.0,
     0x1.0771e62eb1542p-604, 0.0, 0.0, 0x1.90ff325c731cfp-596, 0x1.1d660fbf23ae5p-493,
     0.0, 0.0, 0x1.4c22c00ea2148p-270, 0x1.1bc45535da45bp-852, 0x1.219fe9864bd0fp-489,
     0.0, 0x1.d874eccecd3cfp-712, 0x1.12d50cbb93ccbp-559, 0x1.545b8a8229d6fp-1014,
     0x1.cb1838d2f19d2p-131, 0x1.0618c652cecd2p-6, 0.0, 0x1.839af365ecbd2p-312,
     0x1.3553024c6d745p-498, 0x1.36f1bcfdf7b16p-573, 0x1.b3b791f477a16p-987, 0.0, 0.0,
     0.0, 0.0, 0x1.c670511f097dap-295, 0x1.8fb2decc6a1e9p-644, 0x1.ad4af9e48377bp-826,
     0x1.750c8854c50c2p-428, 0.0, 0.0, 0x1.bb7f793f596e3p-987, 0.0, 0.0, 0.0,
     0x1.d347044cc817ep-862, 0x1.5cfa8b80723ccp-713, 0.0, 0x1.0c1da14f0ebafp-858,
     0x1.7edca3ba2a102p-661, 0x1.d5add7d4cd392p-225, 0x1.04b111355f814p-700,
     0x1.63b202805076p-667, 0x1.e1e00abcda651p-280, 0x1.83926f4cfbb6fp-548, 0.0, 0.0,
     0x1.47f9cd19926f4p-207, 0x1.e5e8ab3fca3ep-357, 0.0, 0.0, 0x1.c6c24f16514a8p-604,
     0.0, 0x1.1081f4a44bad2p-121, 0x1.bab438c6e468ap-668, 0.0, 0x1.9379b3532a1fbp-711,
     0x1.e2c017c9b7c24p-469, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bf989606b5bfp-750, 0.0,
     0x1.33019d0d38846p-355, 0x1.9f07271821d77p-930, 0x1.db5ddf1a92c8ep-155,
     0x1.9ab26902f16b8p-288, 0x1.20d89522a6542p-496, 0x1.99880f535e9a2p-351,
     0x1.fd172797ed291p-143, 0x1.5570a79dfbbe1p-295, 0.0, 0x1.e435671580f54p-383, 0.0,
     0x1.4021354656f19p-189, 0x1.b9452349aab7ep-9, 0.0, 0.0, 0.0,
     0x1.574ece0835d34p-335, 0.0, 0x1.15ef96cacad1ap-776, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f17bf99aa86a3p-472, 0x1.42736677f5afbp-435, 0x1.97f3d0476d1acp-1011,
     0.0, 0.0, 0.0, 0x1.c9c3bbbb6a791p-780, 0.0, 0x1.54fcf1cba86bep-419, 0.0, 0.0,
     0.0, 0x1.2d62855cfbfe8p-837, 0x1.e6419257db22p-897, 0x1.6137901fcc534p-299,
     0x1.833a9dba541efp-265, 0x1.99953bdf738fep-600, 0.0, 0x1.ec0783a1fdcaep-591, 0.0,
     0x1.dca26336ae563p-641, 0x1.f4461b12dc6dap-210, 0x1.1276637559cfcp-356, 0.0,
     0x1.f8dd83420d5d6p-264, 0x1.067779086c47p-428, 0.0, 0.0, 0x1.92c7e211c76fcp-130,
     0.0, 0.0, 0x1.a05364961f038p-850, 0.0, 0x1.f4a8f91f1bef4p-54,
     0x1.474a728e5b733p-371, 0x1.c9871775d5a01p-324, 0.0, 0x1.f93b6098d7a3bp-665, 0.0,
     0.0, 0x1.122bfcd43bbd8p-353, 0x1.01ee96786c1aap-599, 0.0, 0.0, 0.0,
     0x1.f4ff7acd5798cp-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b0a0522f8779p-255, 0x1.5fddd5679b6dep-430, 0.0, 0x1.28b814b49ca9p-948,
     0x1.e691b6fd7ce2ep-970, 0x1.b639c52334adp-335, 0x1.f3e890c30192ap-722,
     0x1.33e643371b948p-167, 0x1.027f8aae162b5p-587, 0x1.0b8e6c0ef721fp-544,
     0x1.185c9c39b3e3bp-264, 0.0, 0x1.71a948ed4ab54p-203, 0x1.7f46e3c869d11p-7,
     0x1.827a610a654efp-278, 0x1.0145ff38b27d6p-174, 0x1.a20ee6f967f24p-608, 0.0, 0.0,
     0x1.28e87a1b0eeb9p-502, 0x1.7d216cdfb6a74p-914, 0x1.04f466f668fdap-535,
     0x1.46a386c74cd72p-99, 0x1.35a17574b1785p-89, 0x1.008d90cb87434p-525,
     0x1.6c20042bf3399p-491, 0x1.58ea993859d06p-893, 0.0, 0x1.fea0bb03019b7p-550, 0.0,
     0.0, 0.0, 0.0, 0x1.bee4162e667b9p-372, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3cb22fa463facp-487, 0x1.de75ab3ff71d7p-955, 0x1.3dd7dfdaf0086p-296,
     0x1.d53e2122eb182p-306, 0x1.06f5fc82db782p-830, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.68f5f3c34951ep-609, 0.0, 0.0, 0.0, 0x1.c8ee27b201255p-895,
     0x1.8cfd7b2f1d192p-827, 0x1.65d15349f15abp-167, 0x1.e19b5eb5b5ea6p-1003, 0.0,
     0.0, 0x1.0718093f18299p-381, 0.0, 0.0, 0x1.bf3cab99bd0eep-456, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.56f5a676148dp-854, 0.0, 0x1.acfbe7b59c7e2p-922,
     0x1.9bf71afbfdcc7p-766, 0.0, 0x1.99b33c1c7ea2cp-362, 0x1.a85c9517c04edp-542, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.af1b0abb1ea36p-901, 0x1.e2383a084501ep-541, 0.0, 0.0,
     0.0, 0.0, 0x1.f2ab527e75065p-309, 0.0, 0x1.12339b6e9e941p-667, 0.0, 0.0, 0.0,
     0x1.536e1d52de695p-611, 0x1.2e4dfdaf44a1fp-163, 0x1.41393ecc8d8c8p-305,
     0x1.f9fcc3052e63bp-428, 0.0, 0x1.b3644560e80c8p-929, 0x1.93171197ca685p-932, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f0190660c489ep-334, 0x1.58b09482de0c6p-707, 0.0, 0.0,
     0x1.b37de584ee43dp-256, 0x1.b227f5c41f34cp-476, 0x1.1b1c93b7a74eap-702,
     0x1.20de3eefae776p-943, 0x1.21cba9d2350fep-261, 0x1.622eb38b22a01p-709,
     0x1.99792aa45b855p-382, 0.0, 0.0, 0x1.b6738dd7c6727p-800, 0.0, 0.0,
     0x1.1a5578886ce3ap-768, 0x1.28e7a12e32a92p-203, 0.0, 0x1.5eeb11291416p-682, 0.0,
     0.0, 0x1.6404fc152e4a1p-504, 0.0, 0.0, 0.0, 0.0, 0x1.ba3654400cfbfp-508, 0.0,
     0.0, 0.0, 0x1.f5fc33af03abdp-11, 0.0, 0x1.2cfbe71975744p-437, 0.0,
     0x1.5eeb764e2ea15p-430, 0.0, 0.0, 0x1.0c4f821a0e9e5p-983, 0x1.abe28a49b8941p-328,
     0x1.051f03160be0ap-693, 0.0, 0x1.ac09f734ae236p-779, 0.0, 0x1.7afab2ce121cfp-244,
     0x1.8792b7c2e0e22p-856, 0x1.293529cd0a3d7p-93, 0.0, 0.0, 0x1.34c836da3baf6p-596,
     0.0, 0.0, 0x1.c62211e2910a6p-400, 0.0, 0x1.1ad5f49d7dfe9p-106, 0.0,
     0x1.11c3dc840a89p-544, 0x1.6f5bd547902a6p-297, 0x1.a8a6404ddb7e3p-811, 0.0, 0.0,
     0x1.b1f572136291cp-667, 0.0, 0.0, 0x1.2c97e3c83a52bp-215, 0.0, 0.0,
     0x1.45f2acc91583dp-505, 0.0, 0.0, 0x1.47126dbe19342p-890, 0.0, 0.0, 0.0,
     0x1.bcd425cbdb4c5p-663, 0.0, 0x1.c77ae97339e19p-153, 0.0, 0.0,
     0x1.dcfaf8313e94dp-961, 0.0, 0.0, 0x1.3cb0bc767eca2p-645, 0x1.1f3550b624131p-763,
     0.0, 0.0, 0x1.44bbfd6d125aep-256, 0x1.98febdb26a3a1p-994, 0x1.b24f911600bfbp-584,
     0.0, 0.0, 0x1.ee1ffe0ef7e9ep-824, 0.0, 0.0, 0x1.19c4856ac9a8dp-638,
     0x1.46a758efec611p-657, 0.0, 0x1.cdcc7cda1772bp-985, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7f65e7c6f87b8p-526, 0.0, 0x1.d985edda238f6p-693, 0x1.a697c06b2ee37p-387,
     0.0, 0.0, 0.0, 0.0, 0x1.db200baf681a3p-305, 0x1.f469f668a95ddp-632, 0.0,
     0x1.2f2dce1cad69bp-511, 0x1.6ec255868a8f5p-831, 0.0, 0.0, 0.0, 0.0,
     0x1.2c4e247dabf7ap-1001, 0x1.1b4d070a08d99p-890, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b68957e0e64cp-994, 0x1.469613274020bp-992, 0x1.7225a01269fcep-1, 0.0, 0.0,
     0x1.7111a1229975cp-187, 0x1.15d248d651e2bp-487, 0.0, 0x1.b177294cf1408p-778, 0.0,
     0.0, 0x1.8e50fc48852e6p-87, 0x1.565464a57affp-197, 0.0, 0x1.aca86ddfb150bp-43,
     0.0, 0x1.6a53a34f61402p-999, 0.0, 0x1.b5fd3f6b16455p-206, 0.0,
     0x1.cbaae57bd9199p-64, 0x1.4fd894a5ef65ep-363, 0x1.a78a479cce791p-424,
     0x1.763c8fb2eb254p-564, 0.0, 0.0, 0x1.354a90c990c01p-970, 0.0, 0.0, 0.0, 0.0,
     0x1.fd765ec040a5bp-42, 0x1.41e39addc0daap-532, 0x1.3f64eb3cdf82bp-967, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ff63932fa9c5cp-21, 0.0, 0.0, 0.0, 0x1.cd24e08556ea8p-230,
     0x1.d1d73b9cbb16ap-208, 0.0, 0x1.e3c24727af22fp-624, 0x1.927f7faaba881p-299, 0.0,
     0.0, 0x1.13fc4689e0fbbp-325, 0.0, 0x1.890b19137f242p-343, 0x1.c3dec14708f15p-466,
     0x1.cc46a2638806p-417, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ae5da514f43p-503, 0.0,
     0x1.289847e8df8ep-416, 0x1.00e546589eb4ap-458, 0.0, 0x1.d4462b7eeb146p-569,
     0x1.af8a180150e8fp-483, 0x1.6fb6f5284a0fdp-238, 0x1.46d9c8451aa0dp-217, 0.0,
     0x1.c5ecd6cecd1a3p-741, 0x1.7b342903c9cb2p-957, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7810712c13866p-919, 0.0, 0x1.0824ddf650d5fp-973, 0.0,
     0x1.14a53cde998d3p-1011, 0.0, 0.0, 0.0, 0.0, 0x1.985233ac860d3p-794,
     0x1.90bedbded6bcap-457, 0x1.8022ec38922eap-324, 0x1.25cf9aac5b4e2p-423,
     0x1.557e5fb618f3ap-789, 0x1.9360830a5278bp-737, 0.0, 0x1.44ce528738305p-119,
     0x1.e0df7f81d583p-919, 0.0, 0x1.4d9c059eddc22p-507, 0.0, 0x1.524c70e1ff188p-295,
     0.0, 0.0, 0.0, 0x1.bb987589724adp-523, 0.0, 0x1.07614f18842a2p-637, 0.0,
     0x1.f8b873f3f745p-340, 0x1.c9d3e78dbd943p-421, 0.0, 0.0, 0x1.255e72d216aedp-380,
     0x1.95b7e203759d7p-446, 0x1.ec2e86121b8e5p-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aa1cab32d5fcfp-917, 0x1.6d0f5c7486dd1p-547, 0x1.ee406c4b8bf51p-1015, 0.0,
     0.0, 0x1.96213be086e3fp-746, 0.0, 0x1.f72d0eda54e24p-280, 0.0,
     0x1.4c5e61ec9d98bp-238, 0x1.7a1691ac5de31p-169, 0x1.a46dde548e556p-547,
     0x1.3cb4ee7f3b73bp-452, 0x1.405372bb36264p-839, 0x1.e4a27cb816859p-363,
     0x1.0e8ebbcd7f8edp-507, 0.0, 0x1.e8c9c2d8ae562p-791, 0x1.94ffebd6eabc9p-856, 0.0,
     0x1.b04256294eaf2p-532, 0x1.1390c22cc2e87p-763, 0x1.d35716dfc59cp-635, 0.0,
     0x1.42861330c03cp-854, 0x1.3bb0b28ac43e9p-185, 0x1.52a4d93ee9aeep-318,
     0x1.91a8c6763a514p-581, 0x1.625e284e31571p-876, 0.0, 0.0, 0.0,
     0x1.dc50f24161f83p-310, 0.0, 0.0, 0x1.7ea271589fe8bp-274, 0x1.44aba5b48e344p-521,
     0.0, 0.0, 0x1.60ea57c17a4eap-69, 0.0, 0x1.a4bd5c20cdca1p-979, 0.0,
     0x1.312031d2aa09cp-593, 0.0, 0.0, 0.0, 0x1.ea2f427340926p-308, 0.0, 0.0,
     0x1.a0c2d4dfcc48bp-138, 0x1.35ee2132513b3p-281, 0.0, 0.0, 0.0,
     0x1.3e6ecd5d30a64p-203, 0x1.0e88b7564723fp-679, 0.0, 0x1.ba08626f9b101p-810, 0.0,
     0x1.204433eca7adap-494, 0x1.3155722276c78p-252, 0.0, 0.0, 0x1.da1bf08323a94p-663,
     0.0, 0x1.52db5a12cd9ap-156, 0x1.ced131500e8a1p-578, 0x1.2f830a8d90e7bp-940,
     0x1.7413e14f6116p-907, 0x1.0a3c2f00c02cap-724, 0x1.e9148d118b35dp-772, 0.0,
     0x1.a95298ee034d4p-168, 0x1.bc215a2ef9c1fp-202, 0x1.0c714554dd6a6p-148,
     0x1.51dedd305fe0ep-106, 0.0, 0x1.cfb429f229645p-710, 0x1.ddcff974ad65p-878,
     0x1.fdf1e7c2ba885p-951, 0x1.503a2cda8a8a8p-146, 0x1.2926ed1e9ad12p-88,
     0x1.56fb9cd3a5238p-282, 0.0, 0x1.a920ba3194c32p-950, 0x1.3ac18caa9d0c7p-676, 0.0,
     0.0, 0x1.149e6f948ea2fp-271, 0.0, 0.0, 0x1.f6193e32884f5p-25, 0.0,
     0x1.16ff210a5955ap-554, 0x1.a86b966806d98p-222, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0,
     0.0, 0.0, 0x1.66ecfaceba65p-969, 0.0, 0x1.4e5078e1feb0ap-37,
     0x1.f5f5dda697bb1p-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db892356a5e37p-450,
     0x1.8008cbd1d0564p-72, 0x1.8cc4249caddb4p-651, 0.0, 0x1.04aabb0f4545fp-647, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b5840b8dbc1p-917, 0x1.f3d8eeb461b8dp-361, 0.0, 0.0,
     0x1.c51926a46c826p-329, 0x1.9b0a313fed46fp-888, 0x1.1097db2e045cp-505, 0.0,
     0x1.60a23e7d21155p-974, 0x1.d177644adeef8p-438, 0.0, 0x1.1c8e7210f5e1fp-900, 0.0,
     0x1.a7ad80e2b7af8p-962, 0.0, 0x1.37ef62d987b7cp-560, 0.0, 0x1.72bae1fac1142p-211,
     0x1.f7a23baa7fca4p-291, 0x1.999007eabf89bp-418, 0x1.8b419cd1aafafp-889,
     0x1.64e4e8ae81b4ep-316, 0x1.774ad76fa1831p-431
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
            tmp1 = Sleef_coshd2_u10kvx(tmp0);
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
    printf("Sleef_coshd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_coshd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
