/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ceild1_purecfma.c --function Sleef_ceild1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.fbed038a89a0ep-777, 0.0, 0.0, 0.0, 0.0, 0x1.527d2b65510cp-91,
     0x1.34bf9d7479e3bp-595, 0.0, 0.0, 0x1.859e8cbd25274p-761, 0.0, 0.0,
     0x1.ed62ecd677e99p-255, 0x1.83eaadda763e2p-1008, 0.0, 0x1.fcc51a19c23adp-754,
     0.0, 0.0, 0x1.c7e524a8a3dd9p-83, 0x1.38f3597195849p-497, 0x1.506ce59e5f2c4p-52,
     0x1.725c0cc533f6ep-271, 0x1.da925309884d5p-971, 0x1.efe59a9607dc8p-251, 0.0,
     0x1.84a9663b7cf9cp-999, 0x1.401d4f1b1220ap-425, 0x1.d833179935734p-381, 0.0, 0.0,
     0.0, 0.0, 0x1.a089f248327d7p-947, 0x1.38bec3e5b1be7p-836, 0x1.16b506123008p-370,
     0x1.fbb1ba3374dc1p-777, 0x1.5fadf14addd7ap-190, 0.0, 0x1.4a8b9e3b068ebp-242, 0.0,
     0.0, 0.0, 0.0, 0x1.5eece79ae2116p-192, 0x1.c1e365ed616bcp-346, 0.0,
     0x1.3b8a229c2e3a3p-367, 0.0, 0x1.e660f4b60034dp-342, 0x1.a7b2501c650dfp-592, 0.0,
     0.0, 0.0, 0.0, 0x1.8d386fd6282d3p-819, 0.0, 0x1.eb41f7c096154p-725, 0.0, 0.0,
     0.0, 0x1.56796b79a263cp-408, 0.0, 0.0, 0x1.915109ff0dff7p-416,
     0x1.f198cc4c10c7ap-870, 0x1.0fbbb7af33d85p-94, 0x1.811be568040fdp-441,
     0x1.8209e81b18995p-143, 0.0, 0.0, 0x1.a0e74803a869fp-764, 0.0,
     0x1.6f00943e7cfe2p-287, 0x1.5144b85284b34p-888, 0.0, 0x1.9fb6b3358a25fp-651,
     0x1.b5bbdc868ec5fp-538, 0.0, 0x1.309e75fc93c9fp-253, 0.0, 0.0,
     0x1.41e02c75f94c1p-768, 0x1.691ad0ee8ccb7p-246, 0x1.03f21c54befcfp-636, 0.0,
     0x1.68a9542a1f5d6p-374, 0.0, 0.0, 0x1.db4f0e2aa6943p-343, 0.0,
     0x1.8fa639625af22p-265, 0x1.49b6bf6dc7c1bp-240, 0x1.9e1325927a241p-653, 0.0,
     0x1.f113488d9823cp-926, 0.0, 0.0, 0x1.bf19ce34ab1cep-822, 0.0, 0.0, 0.0,
     0x1.8a3c7dab93803p-26, 0x1.24d9c6504ac3bp-765, 0x1.068f02fc60663p-80,
     0x1.21794422ccdbbp-744, 0.0, 0x1.426055645b5d8p-742, 0x1.367275fa43ba3p-701, 0.0,
     0.0, 0.0, 0.0, 0x1.5122a46ec8edfp-583, 0x1.02f67d8ce770fp-508,
     0x1.9084f43c49d77p-721, 0.0, 0x1.98fdfc37ae414p-549, 0.0, 0.0, 0.0,
     0x1.fc3d894d7ecdfp-430, 0.0, 0x1.1682c55fd9fcbp-411, 0.0, 0x1.3087a0be01be3p-668,
     0.0, 0.0, 0x1.5d616b96aace2p-604, 0.0, 0x1.0bc7496a6c5d8p-503, 0.0,
     0x1.7c56ff79dca7bp-274, 0.0, 0x1.3b0f99de711d7p-18, 0.0, 0x1.3ead4ccc04306p-398,
     0x1.09bcf9af5c94fp-529, 0.0, 0x1.f14c7401d7e52p-989, 0x1.1a94c1a935e4ep-678,
     0x1.56d24d004f4a9p-110, 0.0, 0x1.a1303fbafa331p-401, 0x1.d9da964b5e1e4p-910,
     0x1.9141ebc8f2b8dp-36, 0.0, 0.0, 0x1.f589e07f65ec6p-680, 0x1.17b16b2244b2dp-43,
     0x1.532838fe6a4d5p-492, 0x1.6d5341489a8c9p-980, 0x1.549f1ec27e756p-732,
     0x1.33bc14ad2358p-80, 0x1.7539aa464a2d1p-234, 0.0, 0.0, 0.0,
     0x1.08b22e192cc5p-470, 0x1.81c4c895b306p-275, 0.0, 0x1.7bed432b459fap-431, 0.0,
     0x1.09f5f4fbff8b2p-297, 0.0, 0x1.a71394d172113p-10, 0.0, 0x1.3801651e05abp-898,
     0x1.0e4b673804149p-339, 0.0, 0.0, 0x1.00b500f03bca9p-89, 0x1.63261f67624c6p-661,
     0x1.cd144de664355p-414, 0x1.ee5e57009b1fep-456, 0x1.b27d4f58d0a7ap-821, 0.0,
     0x1.50445b25ebfdbp-623, 0.0, 0.0, 0.0, 0x1.e7f8a4c8fcacfp-12,
     0x1.37d3e7f641e51p-923, 0.0, 0x1.488e1116c73c2p-458, 0.0, 0.0, 0.0, 0.0,
     0x1.58d19ff072c4cp-285, 0.0, 0x1.133540e4ab77p-781, 0.0, 0x1.0738b210157b6p-478,
     0.0, 0.0, 0x1.0a13131c414e2p-228, 0.0, 0x1.1aa13e720ed7cp-625, 0.0,
     0x1.724fcd79bb2acp-947, 0x1.2d7c2031763fp-204, 0.0, 0.0, 0.0,
     0x1.1d9044555ce11p-720, 0x1.2c75ca2f6bf0ap-797, 0.0, 0.0, 0x1.912136574905ap-630,
     0.0, 0.0, 0x1.1c68a8243a975p-478, 0.0, 0.0, 0x1.0a6ef0c246407p-352,
     0x1.81b2c1810ab18p-342, 0x1.16f38649d86e1p-71, 0.0, 0.0, 0.0,
     0x1.b24be7efa76efp-477, 0.0, 0x1.565e1be9b6bddp-719, 0.0, 0x1.1f6b8da1824e9p-179,
     0.0, 0x1.61d22c18e638fp-417, 0x1.346cfe09b643p-385, 0x1.a4bddc1bca062p-981, 0.0,
     0.0, 0x1.e603836d1732dp-502, 0x1.8145f5d9253e3p-555, 0.0, 0.0,
     0x1.35614f47ca7ecp-855, 0x1.aaa00c1b8514p-679, 0.0, 0x1.0c7799e9c1312p-404,
     0x1.7efdb9adc3118p-7, 0.0, 0x1.959b96ecea27fp-654, 0x1.16ce57ba1c011p-561,
     0x1.f7c64ada7b542p-3, 0x1.451feb9a81ef9p-141, 0x1.2c55efe24c157p-706, 0.0,
     0x1.f2df6e82afd2cp-724, 0x1.d74695bcfec22p-782, 0.0, 0.0, 0x1.73dd60e31d5f8p-694,
     0x1.6948525a9cb7p-734, 0x1.2663c461a07b5p-532, 0x1.cac3765583bfp-121,
     0x1.964ba04b72f79p-749, 0.0, 0.0, 0x1.266ee8dd7208bp-401, 0x1.033f67fec2b61p-161,
     0x1.f67eeb04f4723p-835, 0.0, 0x1.7ce7029a32be7p-354, 0.0, 0x1.d8f7f6d1d6ad1p-409,
     0.0, 0.0, 0.0, 0x1.d9b86b03c463ap-573, 0.0, 0x1.e60305993dcfdp-163, 0.0,
     0x1.17a92c918e6f5p-193, 0.0, 0.0, 0.0, 0.0, 0x1.24088272a4f8cp-246, 0.0, 0.0,
     0.0, 0x1.eb08a3af1ea4ap-360, 0.0, 0.0, 0.0, 0.0, 0x1.e58e8c7e3cdc8p-430, 0.0,
     0.0, 0.0, 0x1.9270e16927583p-50, 0x1.600469c97be4bp-739, 0x1.fff6d3584d1f7p-722,
     0x1.2a5c984e62694p-249, 0x1.f6d09991ce6d3p-763, 0x1.a92d6ec5c6d2ap-797,
     0x1.153b79eaa038fp-249, 0x1.1df2242b75753p-416, 0x1.f99ad8c65f6a5p-551, 0.0, 0.0,
     0x1.0292cbe794c3dp-383, 0x1.c78777f82e2bdp-297, 0x1.f1006d6320b24p-203,
     0x1.c76cf24e2975ap-260, 0x1.0402d23f68d5cp-423, 0x1.cd5f3956f0249p-609, 0.0,
     0x1.3ded46e7ca6e8p-860, 0x1.862d1fcdd50e6p-958, 0x1.a2af28fc34349p-133, 0.0,
     0x1.116c6d4b459bp-355, 0.0, 0x1.dd497eea4f606p-232, 0.0, 0x1.4dd32b6194f9ep-112,
     0.0, 0x1.5a82b53735e87p-353, 0.0, 0x1.3e362e27e53a6p-662, 0x1.2b80081bccb65p-890,
     0x1.c8586dea89bep-50, 0.0, 0x1.2426717ac9a28p-923, 0.0, 0.0,
     0x1.34a8ddc56c003p-55, 0.0, 0x1.4198d9502a242p-69, 0x1.096bbb88ee816p-407, 0.0,
     0x1.764bb5a313ceep-314, 0x1.c79d9ebe64c15p-972, 0.0, 0x1.0faf7678e059ap-945, 0.0,
     0x1.a70a95f40647ap-520, 0x1.760ec6b5323dcp-256, 0.0, 0x1.c2928bbe152dfp-214,
     0x1.37428b6463842p-136, 0.0, 0x1.75918134ae9b5p-635, 0.0, 0.0,
     0x1.6befa8dddfe0dp-48, 0x1.9cf98c6151b19p-571, 0x1.a530e3400928p-707,
     0x1.856c41aca2ac3p-874, 0x1.a41104efc23b2p-44, 0.0, 0x1.f321bbc29a1c2p-750,
     0x1.171cec3a12bb7p-574, 0x1.639bb6e80ap-615, 0x1.21ee9e3b798b5p-376, 0.0, 0.0,
     0x1.c4cfea557c1cap-1022, 0.0, 0.0, 0.0, 0x1.125b86e5cb58p-513,
     0x1.20d768ab2382cp-254, 0x1.7ef782a78b33ap-483, 0.0, 0.0, 0.0,
     0x1.2633d68a4e523p-918, 0x1.3815fe8905234p-881, 0x1.0137b153b605fp-202,
     0x1.0ea19eed00a77p-861, 0x1.8e8c41117d0f1p-520, 0x1.5abe7da4eb116p-401, 0.0, 0.0,
     0x1.6df8603a2bb1fp-860, 0x1.8b0ca61669503p-588, 0x1.e2e29928dbfb8p-131,
     0x1.58e0c72509fcdp-8, 0.0, 0x1.47d6a111b3f96p-876, 0.0, 0x1.ccac6fab672ap-633,
     0x1.43ed84087f1bp-893, 0x1.d065274212069p-277, 0x1.51085824059d6p-972, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a62d24ee18924p-446, 0x1.0f57047ca6dfap-100, 0.0,
     0x1.02806a9b16071p-574, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f3493d3c982ap-174,
     0x1.41b39ca20a3d8p-224, 0.0, 0x1.8ae4ff13f638p-344, 0x1.fde93a5f51a23p-12, 0.0,
     0.0, 0.0, 0x1.d7e641ce7e383p-714, 0.0, 0x1.9d9747154f097p-988, 0.0, 0.0,
     0x1.1c78c0f89bce4p-715, 0.0, 0x1.fd7514c523ec6p-584, 0x1.47b09c6ce15cfp-168,
     0x1.8654c97ddc763p-45, 0x1.33708fbc12beep-809, 0.0, 0x1.110a17b4a19acp-72,
     0x1.fc07c2bfa419dp-268, 0x1.cb3e839a1706p-94, 0.0, 0.0, 0x1.f957fd1ef6a9bp-799,
     0.0, 0x1.6228ca6367923p-71, 0.0, 0.0, 0x1.5ed829ca6fdc6p-268, 0.0, 0.0,
     0x1.dae1ae019eed3p-893, 0x1.d72cbfc212219p-6, 0.0, 0x1.70af44eda7a83p-643, 0.0,
     0x1.0016a8f58c7cbp-328, 0.0, 0x1.bd271f6a1ca83p-751, 0x1.e47726bd98d02p-538, 0.0,
     0.0, 0.0, 0x1.b811e48b1a3f8p-712, 0x1.5cb0e8d03a7abp-60, 0x1.3419683540a0fp-116,
     0x1.0d2ed2d36bb01p-822, 0.0, 0x1.ca758e46fdb3fp-943, 0x1.e90f040ddedc1p-989, 0.0,
     0x1.42724861e3e6ap-507, 0.0, 0.0, 0x1.83cd864873c2ep-263, 0x1.d41332a780865p-241,
     0x1.b63a6202deabp-518, 0.0, 0.0, 0.0, 0.0, 0x1.e1a4b9054c95p-133, 0.0,
     0x1.2c2a67bd56ac8p-560, 0x1.a4b77d00c441cp-931, 0.0, 0.0, 0.0, 0.0,
     0x1.dbc46b35d3e7cp-503, 0x1.a9fa12e0a21f7p-137, 0x1.8c704e800ee2dp-758,
     0x1.2f952040fd4ap-934, 0x1.43250c447a4d9p-945, 0.0, 0.0, 0.0,
     0x1.accac6395c519p-41, 0x1.9e52fa69eb672p-548, 0x1.33fcb5fe7b11ap-1014, 0.0,
     0x1.94a7411f4a8a6p-144, 0x1.2e8af83312a8cp-362, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c3cbf42655e1p-483, 0.0, 0x1.a3dfaafe206a7p-102, 0x1.5d8ab127ecc3p-748,
     0x1.2e223e13b7de4p-4, 0x1.daa060265aeddp-57, 0.0, 0.0, 0x1.a9ae55e2ea87bp-657,
     0x1.02fab2473fc3bp-273, 0x1.c82573a2a6863p-823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8b932108dad2ap-451, 0x1.cab11265d2e4p-875, 0.0, 0x1.1a4a74a5bba5ep-221,
     0.0, 0x1.6384d939463b2p-52, 0.0, 0.0, 0.0, 0x1.e5b94df9b8b9cp-970, 0.0,
     0x1.0978d4c355c7dp-655, 0x1.5b88b85e0f83bp-37, 0.0, 0.0, 0.0,
     0x1.1e77b4cf0b0cdp-662, 0.0, 0x1.e6084b8947484p-136, 0.0, 0x1.7b3afa5d3078ep-298,
     0x1.6dd370150a16cp-580, 0x1.1d197504a6c7fp-656, 0.0, 0x1.7b29a46b4ac9dp-872,
     0x1.0bbb30ea4bcfbp-293, 0x1.66df2a4e12de9p-1013, 0.0, 0x1.829750e7682b7p-500,
     0.0, 0.0, 0.0, 0.0, 0x1.7ca913ea0f269p-432, 0.0, 0.0, 0.0, 0.0,
     0x1.a5cf766c2ddd8p-164, 0x1.03e27b1c72a4bp-295, 0.0, 0.0, 0x1.0df4afb95a101p-142,
     0x1.e67d63903ac8fp-476, 0x1.b75101f0f2163p-375, 0.0, 0.0, 0x1.e118a9854f187p-510,
     0x1.9ee2095f063fep-578, 0.0, 0.0, 0x1.2e284e6d5cf72p-560, 0x1.f8b8560fbbf1ap-663,
     0.0, 0.0, 0x1.8beb77187d496p-740, 0x1.b06ebb90f90b8p-896, 0.0, 0.0,
     0x1.d926fd78c381p-426, 0.0, 0.0, 0x1.51a2bae3c1da3p-930, 0.0,
     0x1.84d549cbef0d2p-368, 0x1.fd1eecc8b24e5p-350, 0x1.b258a8bb9959p-211,
     0x1.69d931450e5c8p-424, 0.0, 0x1.8b550495cefeep-564, 0x1.eedb103db043ep-867, 0.0,
     0x1.05e94586dca2fp-924, 0x1.b65ff0c912b6p-933, 0.0, 0.0, 0.0,
     0x1.dcc3530ca0f6ap-414, 0.0, 0.0, 0x1.527a9d006f6cp-563, 0.0,
     0x1.4331c719ae072p-723, 0.0, 0x1.1803e03ba45c2p-225, 0.0, 0x1.0f4305b7debd7p-362,
     0.0, 0.0, 0x1.93326408dd379p-340, 0.0, 0x1.d54fe8553187bp-640, 0.0,
     0x1.9a0ffb4b8fa5cp-12, 0x1.3881e29083894p-474, 0x1.401bfff9e025p-927,
     0x1.4b94502999273p-733, 0.0, 0x1.f71ef1bdd2767p-966, 0.0, 0.0,
     0x1.5446b64202a3p-925, 0.0, 0.0, 0x1.6b4cc9daf92bfp-980, 0x1.5eeec50ab928p-88,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.392e0d9bd0053p-671, 0x1.7a696fdde18fbp-609,
     0x1.fbf68db6e046ap-793, 0.0, 0.0, 0.0, 0x1.8b82053942c2dp-1006,
     0x1.d01fd41813d8ap-807, 0x1.1c9250e0c2383p-555, 0x1.cfa58ba5c3be6p-633, 0.0, 0.0,
     0.0, 0x1.202aa07a580eap-483, 0x1.129962bf46cb4p-389, 0x1.ccaa8fb4f2e58p-439,
     0x1.a2ae735692077p-749, 0.0, 0x1.281e376816d89p-823, 0x1.2802e6798d86ep-266, 0.0,
     0.0, 0x1.69e528132cd97p-294, 0x1.fadcfd8bd1acbp-724, 0x1.be27a0296d0c7p-243,
     0x1.e697374e14e54p-628, 0x1.e8e5bc9477e2ap-516, 0x1.5ae7cb39bcf7p-264,
     0x1.a3aa861b2d5dep-5, 0.0, 0.0, 0.0, 0x1.942fbe71e49e5p-312,
     0x1.13aa5836b56b2p-944, 0x1.9155a8eb6a1f7p-719, 0x1.73582446696dfp-858, 0.0, 0.0,
     0.0, 0x1.e24830a98b0a2p-784, 0x1.0cee7f19a8e72p-795, 0.0, 0.0,
     0x1.7eae20baa65e3p-139, 0.0, 0x1.f87cf0f418814p-26, 0.0, 0.0,
     0x1.d4e58a04cbd9cp-469, 0x1.877154bb4c6f2p-682, 0.0, 0.0, 0x1.90139f6dc9588p-926,
     0.0, 0.0, 0.0, 0.0, 0x1.02f1bba020b3ep-256, 0x1.ac81cc09fb9abp-281, 0.0,
     0x1.ac4a8b3bf0dbfp-59, 0x1.0ac3a280091f2p-861, 0.0, 0.0, 0x1.516ec66f3badbp-618,
     0.0, 0x1.3cf24c16529d5p-876, 0x1.dd6077a1bdf4dp-918, 0.0, 0x1.8a363886e85acp-922,
     0.0, 0x1.1217915c650c2p-582, 0.0, 0.0, 0x1.711b82128dff8p-207,
     0x1.be2c358982d75p-589, 0.0, 0.0, 0.0, 0.0, 0x1.d1f8132b978ep-18, 0.0,
     0x1.8e84d234bf081p-611, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.71526c817c5fp-10,
     0x1.f2c9cb0c87b19p-395, 0.0, 0x1.284607fc4556dp-793, 0.0, 0.0,
     0x1.58a7135d95ea3p-606, 0.0, 0.0, 0x1.268da81d3c3d2p-657, 0.0,
     0x1.9d439c0114848p-404, 0.0, 0x1.809bb0ab4f43dp-205, 0.0, 0x1.e758928e00d34p-499,
     0x1.247811d83767dp-371, 0.0, 0.0, 0x1.9e7c36ac70b07p-763, 0x1.b5ad171793be9p-266,
     0.0, 0.0, 0x1.37289f498e68bp-357, 0.0, 0.0, 0.0, 0x1.9df2e3af4d488p-1006,
     0x1.b433128df1f4cp-703, 0x1.fbc8659be7ap-962, 0.0, 0.0, 0x1.b5fab4af69e69p-430,
     0.0, 0.0, 0x1.f06e3b497cdaep-298, 0.0, 0.0, 0x1.6c647c62c3316p-79,
     0x1.c0bfe01c0fc15p-659, 0x1.8fa7c6fb7a586p-517, 0x1.2b930f0f40372p-932,
     0x1.fbb008a84d6fcp-309, 0.0, 0x1.62dfb72824da5p-964, 0x1.f1cf06551d266p-106, 0.0,
     0.0, 0.0, 0.0, 0x1.e437110e2ff73p-364, 0.0, 0.0, 0x1.d8849536a307ep-146,
     0x1.bcc619dce3452p-127, 0x1.abb04b7c777dap-138, 0.0, 0x1.af03228507ea9p-760,
     0x1.7333b2cde5ee5p-780, 0x1.a2eed78cc1ae7p-226, 0.0, 0.0, 0.0,
     0x1.c0d41e492c13ep-322, 0x1.cb8eb45a3d9e1p-544, 0.0, 0x1.1ed809977d0f3p-182,
     0x1.1c90d7d19dap-345, 0x1.d27eb33a5f6c8p-340, 0x1.39bd16cb64c1p-873, 0.0,
     0x1.8eb856a3835d7p-374, 0.0, 0.0, 0.0, 0x1.ea265ae196a2fp-610,
     0x1.0fb487e57b5cep-864, 0.0, 0x1.ef6882bdc4599p-232, 0x1.fc73e64e684d9p-139, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5a21409f43cc3p-293, 0x1.7b41cc8a521c1p-406,
     0x1.cb752f9002404p-310, 0x1.7153a9d51cfd9p-1010, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5fd0036ba77d9p-614, 0x1.71f95dcd216d5p-261, 0.0, 0x1.bbff5ac0e629fp-757,
     0x1.299e5a9d64f4p-690, 0x1.3dc3767dc68bap-429, 0.0, 0.0, 0x1.23eaed7b45a5ap-217,
     0x1.d3908f4fe54d6p-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff002e8a8fa1cp-249, 0.0,
     0.0, 0x1.d67b237751b2bp-260, 0.0, 0x1.20ec6190bdf83p-115, 0.0, 0.0, 0.0, 0.0,
     0x1.f2d9427afcd91p-914, 0.0, 0.0, 0.0, 0x1.63a58bc5be965p-514,
     0x1.cc297cad909bfp-616, 0x1.899ef4166c019p-737, 0x1.5cb88cb0d2cbfp-832, 0.0, 0.0,
     0.0, 0x1.010b3b8930a8ap-795, 0.0, 0.0, 0x1.bb99d76299cebp-859,
     0x1.c6cb78364b507p-2, 0x1.51ece301c7864p-849, 0x1.befc630ee6ad2p-802,
     0x1.3977e782a0344p-794, 0x1.b0eed8e237a47p-322, 0x1.cbbe9b9e4d404p-969,
     0x1.9b96b231c159p-381, 0.0, 0x1.1a71b8f3296e2p-177, 0x1.627d28fba388cp-702,
     0x1.ed131f8d52015p-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34ed19f0fd7adp-141,
     0x1.ded0aee685ebp-478, 0x1.cc50a2cef4179p-816, 0.0, 0.0, 0.0,
     0x1.6882afb784da6p-189, 0x1.0fd053aa511a8p-1, 0.0, 0.0, 0x1.626bf4e047f4cp-998,
     0x1.30837048cd3fep-559, 0x1.6558b9036bbd4p-7, 0.0, 0x1.258b3de62cd68p-56, 0.0,
     0.0, 0.0, 0x1.3bd295ea650d3p-6, 0x1.0a388c7bb5b79p-809, 0.0, 0.0,
     0x1.90896addb2543p-241, 0x1.05307efdec40fp-776, 0x1.e9fc4ef4aca7ep-925, 0.0,
     0x1.c0efeea4df44fp-707, 0x1.cbb20b141f9f1p-44, 0x1.7abc3cf887d86p-803,
     0x1.5bbc239a5fe76p-70, 0x1.6ebe79995297bp-233, 0.0, 0.0, 0.0, 0.0,
     0x1.744fa55341cd3p-58, 0.0, 0x1.b363e5ef7cabfp-848, 0.0, 0x1.808adea68ff0dp-289,
     0.0, 0.0, 0.0, 0x1.db73fd8bc5c4ap-609, 0x1.128cda71dd534p-228,
     0x1.1d63601d55ac6p-125, 0.0, 0x1.4f40c0d5bc893p-403, 0x1.e55a651e9301cp-562,
     0x1.1f8de8957ac97p-717, 0x1.b6acbfb6d7559p-341, 0.0, 0x1.ca3897d6e7fccp-968, 0.0,
     0x1.95aaf09e3fd34p-669, 0.0, 0x1.610684c17e228p-526, 0.0, 0x1.586a620b891d2p-971,
     0.0, 0x1.a15a5b16e213p-564, 0.0, 0.0, 0x1.143470f59cf5cp-765,
     0x1.09d422a79bad8p-917, 0x1.b92141401b4fbp-655, 0.0, 0x1.2df5b548900bdp-582,
     0x1.378b125bde667p-918, 0x1.1c290d712f4bp-742, 0.0, 0.0, 0x1.972d7fdc1d6d1p-983,
     0.0, 0x1.9b4a3011b5927p-519, 0x1.617172c2aff4bp-322, 0.0, 0.0, 0.0,
     0x1.e4118a0433825p-510, 0x1.7d76e5fe0525ap-356, 0x1.3ca42e31f4f52p-520,
     0x1.43016e241ee03p-732, 0.0, 0.0, 0.0, 0.0, 0x1.8b53cafee6795p-595,
     0x1.ff3143653f283p-719, 0.0, 0.0, 0.0, 0x1.508581eb2cd5bp-890,
     0x1.b1a654eb8f088p-260, 0.0, 0.0, 0x1.b7f00a2c9bea6p-905, 0x1.35804d3e19db3p-567,
     0x1.a706a58d8fe56p-382, 0x1.b1b6aa35d0d45p-463, 0x1.3b4d8db2ba448p-323,
     0x1.82f13fc802a09p-419, 0x1.afc85ddd11747p-887, 0x1.d9c00b7ec2216p-993, 0.0, 0.0,
     0x1.59d8f41d3ffc2p-909, 0.0, 0.0, 0x1.3a4ead7a3501ep-58, 0.0,
     0x1.0150188b1c1f9p-521, 0.0, 0.0, 0.0, 0.0, 0x1.b31fcc6d831d3p-279, 0.0, 0.0,
     0x1.d8b4da678d77ep-7, 0.0, 0.0, 0x1.c93b05628bdddp-422, 0.0,
     0x1.f6066a3fbe74ap-538, 0.0, 0x1.4d1ca2d3d5885p-942, 0.0, 0.0,
     0x1.0d7c21a478999p-79, 0.0, 0x1.b50d993d84ba8p-360, 0x1.082a91401c511p-649, 0.0,
     0x1.5163df53253c9p-992, 0.0, 0.0, 0x1.9b50bb990b9a3p-551, 0x1.33adc31e45f8dp-614
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
            tmp1 = Sleef_ceild1_purecfma(tmp0);
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
    printf("Sleef_ceild1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ceild1_purecfma bench acc %la\n", global_bench_acc);
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
