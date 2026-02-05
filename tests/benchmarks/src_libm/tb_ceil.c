/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_ceil.c --function ceil --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.4e48cb407d1d1p-927, 0x1.20e40e5a8b4dbp-419, 0x1.9b94a9df84cc7p-87,
     0x1.29cf82764a04ep-499, 0.0, 0.0, 0x1.39ccd8b49229dp-845, 0x1.cfc37df1cdf61p-735,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9ed58ef5e589p-716, 0.0,
     0x1.ce6cc11017825p-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d82f0bd9523bp-419, 0x1.5a7e88235d5e2p-715, 0.0, 0x1.f74e44ad331dcp-614, 0.0,
     0x1.b9490f8aeff3fp-712, 0x1.459e6ff361855p-85, 0.0, 0x1.af3b8c80e6ebep-810, 0.0,
     0x1.47c54c05d8027p-934, 0.0, 0x1.4a249fc2b032p-50, 0.0, 0.0, 0.0,
     0x1.ce31a6c8a6bf7p-582, 0x1.bcf606966790ap-126, 0.0, 0x1.f7ce9ddeb1fb6p-295, 0.0,
     0.0, 0.0, 0x1.a91cbb93ed493p-147, 0.0, 0.0, 0x1.ff180c07cbc07p-43,
     0x1.b3e4ad0f40e94p-384, 0.0, 0x1.8a275b98b87c6p-634, 0.0, 0x1.c07d96179c472p-783,
     0.0, 0.0, 0.0, 0x1.aa621f8dcbac1p-179, 0x1.c52dcb24882fdp-635,
     0x1.ef84c04d51311p-917, 0.0, 0.0, 0x1.1ba322e0adff6p-533, 0.0,
     0x1.cb036eb6985b4p-372, 0x1.7d8e9db62c83fp-447, 0.0, 0.0, 0x1.04375f3b6c413p-854,
     0.0, 0.0, 0.0, 0.0, 0x1.684b2d3f3e84p-73, 0x1.b7327af99c5b9p-484,
     0x1.3d470c42813c4p-839, 0.0, 0x1.bc94d4923d19fp-359, 0x1.64b20ac2f3717p-633,
     0x1.304655de48623p-153, 0x1.8de6bb3110c44p-215, 0x1.ea00d4a026458p-52, 0.0, 0.0,
     0x1.e317a51b80882p-216, 0.0, 0.0, 0x1.605abdc529bc9p-709, 0x1.beca3f2814639p-258,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02a9b2118011fp-583, 0x1.7917ae8cbd742p-348,
     0x1.248638860667bp-798, 0.0, 0.0, 0x1.bb3e95e2d22b3p-506, 0x1.e238014c66f18p-178,
     0x1.5a2009d6e4d74p-676, 0.0, 0x1.e1494292fa9f6p-394, 0x1.fdc336b8892e5p-402, 0.0,
     0x1.3c1aa131a0511p-186, 0x1.fbc959cf1b961p-956, 0x1.5a399bca2591p-229, 0.0,
     0x1.437d1a134378cp-232, 0x1.3dd8aff218603p-777, 0.0, 0x1.29769579c1d9fp-905, 0.0,
     0x1.c06a482027edep-732, 0x1.659378f76ab31p-412, 0x1.5c1e0db3f67a6p-812, 0.0,
     0x1.2adb6831dd72cp-605, 0x1.a3452276a6c28p-114, 0.0, 0x1.f446c3a4c8f17p-889, 0.0,
     0x1.a24b7da016909p-268, 0x1.a3160a9f2cc6ap-121, 0x1.b78cb147fbf84p-506, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ba77335ca3bfdp-936, 0.0, 0.0, 0.0, 0x1.2e3234d53a49bp-426,
     0.0, 0x1.56562ea490acbp-48, 0x1.23d91d00f974ep-890, 0x1.ed6351a37a1b8p-825, 0.0,
     0x1.92137771a24a9p-635, 0.0, 0x1.59cc3965daeeep-174, 0x1.693d640f7cc97p-650,
     0x1.23920c11eb8f1p-203, 0x1.75d6d77406a52p-329, 0x1.d299024e3e339p-665,
     0x1.0374cf3026093p-70, 0x1.9440003d63b67p-135, 0.0, 0.0, 0x1.b7bf38f8d860dp-509,
     0.0, 0.0, 0x1.0ea8a7a9fc893p-353, 0.0, 0.0, 0x1.588ddc6853f61p-380,
     0x1.12540dc6e53f7p-745, 0.0, 0.0, 0x1.c4d0aa7edf26bp-329, 0x1.fa20f5dd351ccp-932,
     0.0, 0.0, 0x1.dc482262a2dc7p-757, 0x1.517e63b6a109bp-810, 0x1.109b89ceda05ap-209,
     0x1.0d3e50f6398cfp-326, 0x1.5578d1087056bp-798, 0x1.4df6d875458a8p-205,
     0x1.140371260275cp-13, 0.0, 0x1.8bf4c35147ab8p-240, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ce57f1a5b2feap-503, 0x1.af9d011cf591ap-676, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.34228c67e17d6p-728, 0x1.ca1eede556a4ep-125, 0.0, 0.0, 0.0,
     0x1.3198df90640b3p-252, 0x1.873154c18bd2bp-684, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bb92af905416ap-479, 0.0, 0.0, 0.0, 0.0, 0x1.58e4fa54ad003p-96, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bc6ef47552dbep-966, 0.0, 0.0, 0.0, 0x1.22cc3875892bp-614,
     0x1.cbc9185e5090ep-843, 0.0, 0x1.33533e5287c3cp-432, 0x1.887b991d69a19p-324,
     0x1.64eeaa351366ap-905, 0.0, 0.0, 0x1.126fec061a0adp-905, 0x1.fc6227ac1761dp-81,
     0.0, 0x1.a4abf821ab51fp-237, 0x1.1e9a871ccff09p-925, 0.0, 0.0, 0.0, 0.0,
     0x1.19de8b198d02ep-614, 0.0, 0x1.ae293832e4368p-65, 0.0, 0x1.931291d6f890fp-672,
     0x1.f48cead4ab5c2p-440, 0x1.3abfc05dee0a1p-608, 0.0, 0x1.ca03a8bac8d9dp-47,
     0x1.578071ad52483p-635, 0x1.6ece6688724cap-146, 0x1.9e82266b1c3fep-311, 0.0,
     0x1.04279d755ceeap-469, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0d39a64f47dc4p-425, 0.0,
     0.0, 0.0, 0x1.9f0ac9853faa5p-118, 0.0, 0x1.8be335c2dcad9p-587,
     0x1.06e6e1546ca92p-134, 0.0, 0.0, 0.0, 0.0, 0x1.25d1c3f5e77d7p-68, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.037ce14e6b138p-178, 0.0, 0x1.650525a5107cp-197,
     0x1.906fc30a4ae44p-691, 0x1.540d5c403f467p-536, 0x1.9acaa524b9c39p-303, 0.0, 0.0,
     0.0, 0x1.565e90fb953ffp-921, 0x1.2742c0291ee95p-13, 0x1.0abf08e25b952p-587,
     0x1.e392f790d29d5p-361, 0.0, 0.0, 0x1.86b02c18a596fp-1001, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.56430940227aap-295, 0.0, 0.0, 0x1.c365e63e5c713p-991,
     0x1.469920398705ep-168, 0x1.920da0fae6445p-342, 0.0, 0.0, 0.0, 0.0,
     0x1.995cb747a6715p-880, 0x1.0209096eedd2ap-137, 0x1.11703a3326e42p-673, 0.0,
     0x1.6737bb4b52432p-537, 0x1.10d02b78f7b7bp-142, 0x1.98611f9d67bbp-759, 0.0,
     0x1.8f2bf32b0fb7ap-44, 0x1.de9043797575cp-168, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.29ad18e2bc237p-423, 0x1.1cd8f3afe207ep-278, 0x1.5edc49eaf0e82p-867,
     0x1.cbcb6b6fb2fap-535, 0x1.5b03afba93e15p-775, 0x1.451d9b26bb75dp-445, 0.0, 0.0,
     0x1.9c3fb1ffec0bap-294, 0.0, 0x1.9655faf3f7bb2p-901, 0x1.320c27a33f58dp-101, 0.0,
     0x1.0293430c63a53p-919, 0x1.a1d4b21e8731ap-594, 0.0, 0x1.c7f795856692ap-813, 0.0,
     0.0, 0x1.422cde30e96bap-408, 0.0, 0.0, 0x1.a85844229e925p-460, 0.0, 0.0,
     0x1.0dd5c25e0b19fp-380, 0x1.13a195ffc8181p-339, 0x1.7c69367c2400bp-460, 0.0, 0.0,
     0x1.d5c65784bc3acp-173, 0.0, 0.0, 0x1.f5e8a56a717cap-694, 0x1.94b87bb38ae59p-336,
     0x1.3cdc27a9586aep-170, 0x1.6ef59cd2c3d2fp-461, 0x1.98ae50c325a72p-21, 0.0, 0.0,
     0.0, 0x1.0f39a96f1ab32p-973, 0x1.94e44be8e2281p-119, 0x1.1e1075feb31cp-153, 0.0,
     0x1.77950d5ecf258p-825, 0.0, 0.0, 0.0, 0.0, 0x1.915c1439efde2p-434,
     0x1.e23b756ad6bp-744, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a10c870647f9p-906, 0.0,
     0x1.1ffc412083ff6p-372, 0.0, 0x1.4b7c7426bcfeep-116, 0.0, 0.0,
     0x1.3ba670781d0ccp-461, 0.0, 0x1.4a66f4d44e468p-464, 0x1.0893f720d2ee7p-393,
     0x1.639c0d7636507p-118, 0.0, 0x1.946a1c13e0846p-411, 0x1.c5cdcdb3d4425p-889,
     0x1.8618c2ce44376p-35, 0x1.f11da157556d8p-271, 0x1.291e9747a1541p-422,
     0x1.a4a5a7a26fe69p-867, 0.0, 0x1.ceb7cca4c4c38p-695, 0.0, 0x1.8c7db844f7effp-984,
     0.0, 0.0, 0x1.3266e8fb115b8p-588, 0x1.1b638dafd8bfp-191, 0x1.9c9232165c3d2p-495,
     0x1.90fd3f0ba82cbp-913, 0x1.42bd749620fcfp-676, 0x1.9613b5f7bd559p-651,
     0x1.7883b9a13b9ap-966, 0.0, 0.0, 0x1.d54ba2cb3f936p-732, 0x1.dbb8a604deea4p-891,
     0.0, 0x1.47b9f4af493c3p-246, 0x1.14a4cf3b58c78p-783, 0x1.32d33d4ed7415p-546, 0.0,
     0x1.9e3a9b87c4f84p-11, 0.0, 0x1.65ef8e7bc9e0fp-419, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2bce5f4e8ad87p-384, 0x1.0e0c8a2f13189p-696, 0x1.2b727c60203f2p-428, 0.0,
     0x1.915b02fd5f4efp-587, 0.0, 0x1.c0c8d03a1179p-97, 0.0, 0x1.e4df00da4964dp-314,
     0.0, 0.0, 0x1.19b5b8fc81344p-367, 0.0, 0.0, 0.0, 0.0, 0x1.9b47d75b45621p-242,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.50cf77b82b40ap-583, 0x1.b9d7386a597c8p-668,
     0x1.a041658dee9efp-64, 0x1.982d3702cbacep-106, 0.0, 0x1.933301b33d38ep-454, 0.0,
     0.0, 0x1.aba4dd303f104p-196, 0.0, 0.0, 0.0, 0.0, 0x1.97722b6cfef1ap-579, 0.0,
     0x1.b200d70e9bc4p-451, 0.0, 0x1.a0f9d93f9bedap-304, 0.0, 0x1.edf42eb628945p-443,
     0x1.3fdbd4dcbe664p-491, 0x1.fcc61fcfcbd52p-637, 0.0, 0.0, 0.0,
     0x1.dba28de0169a3p-116, 0.0, 0.0, 0x1.e3a9802e7bddcp-549, 0.0, 0.0,
     0x1.d38d6df2fc404p-615, 0x1.d63d14115ac06p-40, 0x1.e350cff6abdb3p-69,
     0x1.14fd9845a66b9p-457, 0.0, 0x1.daf4111eb3ab2p-722, 0x1.ed9dd5ed716d2p-339, 0.0,
     0x1.56bc0178c1d3bp-324, 0x1.e8b41c592664p-607, 0.0, 0x1.2785ef201049cp-712, 0.0,
     0x1.8414f1bd0374fp-911, 0x1.11db81b61048ap-365, 0x1.bec1446c7c97ap-656, 0.0,
     0x1.0d0143c93b19cp-412, 0.0, 0x1.1745b248db596p-423, 0.0, 0x1.9807d103089ecp-131,
     0.0, 0x1.9623d5ae34d0fp-383, 0.0, 0.0, 0x1.3a41678319889p-782, 0.0,
     0x1.a6eb8705c361ap-935, 0x1.25da0411835dbp-894, 0x1.8f3ad426f8002p-264,
     0x1.f75d2ece90c36p-312, 0x1.31840b56499f9p-723, 0.0, 0.0, 0.0,
     0x1.4f7402e3943c1p-377, 0x1.816f84f7ef707p-952, 0x1.0a14c015178b4p-92, 0.0, 0.0,
     0.0, 0x1.b750462f893b6p-542, 0x1.fa0a6f1bb09cfp-134, 0.0, 0.0,
     0x1.862b63662534p-483, 0.0, 0x1.9346d59a5141dp-167, 0.0, 0x1.b7c6c0a77f196p-547,
     0x1.b0e9f5f0dd6ecp-279, 0x1.a5138a2926ccap-134, 0x1.4b9db354b5a7cp-555,
     0x1.363be5fdd165p-184, 0.0, 0.0, 0.0, 0x1.8b12976e45e51p-232,
     0x1.240eb1d417f6bp-821, 0.0, 0.0, 0.0, 0x1.babae8f3d2118p-505, 0.0,
     0x1.30484e4a77144p-386, 0.0, 0x1.218ed5f8bd9d9p-943, 0.0, 0x1.0dea80824505fp-172,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0671a0d1d335fp-636, 0.0, 0.0,
     0x1.9189821e9c6a5p-324, 0x1.e3793f7c8f61p-566, 0x1.43362b2e0543dp-599,
     0x1.e9e897f11e1adp-210, 0.0, 0.0, 0x1.9f385fe022cd8p-966, 0.0,
     0x1.4e8dc6467df34p-120, 0x1.8e9ffd28ebdcdp-87, 0x1.c1a4147c42c27p-650, 0.0,
     0x1.d94a6017293b2p-336, 0x1.d9300add82ad5p-291, 0.0, 0x1.77319283c541cp-305,
     0x1.ef7c21095a18ep-680, 0.0, 0x1.5e038eed9bedep-796, 0.0, 0.0,
     0x1.072e34217afa9p-602, 0.0, 0x1.9439d143e298dp-606, 0.0, 0x1.9171305ca5174p-892,
     0.0, 0.0, 0x1.2ab6da1c42ddp-68, 0.0, 0.0, 0.0, 0x1.5e8c13b0f7624p-942, 0.0,
     0x1.788ae566fbd12p-440, 0x1.8c1bfaf2b912p-989, 0x1.fb6670fd50c7ap-363,
     0x1.d3954a5509431p-314, 0x1.9f56424bb0426p-865, 0x1.dd3e1167e01f8p-143, 0.0,
     0x1.8b8ef171fbffp-635, 0x1.a05ef3e56fc25p-35, 0x1.3d6e7e18cb5e4p-596, 0.0, 0.0,
     0.0, 0.0, 0x1.a84b335d3f7b5p-328, 0.0, 0x1.243b8a673b236p-111,
     0x1.bc61e2f7dbefcp-182, 0x1.1f32b17152b6p-387, 0x1.ea58cb686f37cp-929,
     0x1.6f902cbf044c6p-305, 0.0, 0x1.44d9eb6dc38d8p-57, 0.0, 0.0,
     0x1.0e365f8541f27p-675, 0.0, 0.0, 0.0, 0.0, 0x1.32110f11874ecp-692,
     0x1.91932b3483241p-184, 0.0, 0x1.a4fa7306f0dc1p-81, 0.0, 0x1.f95d35501567ap-983,
     0.0, 0x1.502c1b72e5c05p-271, 0x1.0bda2cfe6ffe6p-691, 0.0, 0x1.842d7f49bd72dp-581,
     0.0, 0x1.b8ef2a10ba2f4p-987, 0x1.92259d85cfcc9p-821, 0x1.f16d7674992b6p-948, 0.0,
     0.0, 0x1.b5ab7147efcb8p-912, 0x1.da8924764e571p-403, 0x1.76c73e9072869p-190, 0.0,
     0.0, 0x1.6f44b1ff37e82p-756, 0.0, 0x1.8166ff8217727p-149, 0.0,
     0x1.b998ebb9965edp-521, 0x1.97bad44329ab1p-64, 0x1.94220f3d4c27p-132, 0.0, 0.0,
     0x1.b5155a42ce742p-125, 0.0, 0.0, 0.0, 0x1.94f503352cd23p-771, 0.0, 0.0,
     0x1.86cad238510f2p-242, 0.0, 0.0, 0.0, 0x1.aa2efa185bbf5p-447, 0.0,
     0x1.7de164406bcfdp-188, 0x1.2ebb4fa36f339p-180, 0.0, 0.0, 0.0,
     0x1.b8868977d25bcp-824, 0x1.30f42eb8da649p-299, 0.0, 0x1.6af3af5bcaea8p-581, 0.0,
     0x1.6545baf4a6e63p-814, 0x1.813d59bbc4a31p-283, 0x1.5add5c37b04b3p-222,
     0x1.ecf79a10f8049p-452, 0.0, 0x1.beab810fe9aap-452, 0.0, 0.0,
     0x1.afe1f96a4bb28p-1005, 0.0, 0x1.8871a9460b7f5p-475, 0.0, 0.0,
     0x1.65cefefa22118p-814, 0.0, 0.0, 0x1.0994d21af4d76p-287, 0.0, 0.0,
     0x1.6d272dc06d455p-729, 0x1.dd8a1e58b6e9dp-433, 0x1.14f527ba8e2ffp-223, 0.0,
     0x1.8ac54977da9f5p-743, 0.0, 0x1.43c6d5169ad2p-949, 0.0, 0.0, 0.0, 0.0,
     0x1.4303d686dd576p-804, 0x1.74e39914c1228p-522, 0x1.75cbeb107e1c8p-45,
     0x1.2b25c3b0e6c5bp-150, 0x1.fa4c4c4dae4f3p-925, 0x1.767558b3814fap-796, 0.0,
     0x1.e0bb7c0abfac2p-844, 0.0, 0x1.fa84dcd28d48fp-337, 0x1.e09c851e95d9fp-55,
     0x1.dfce110e9a198p-530, 0x1.2f2e3ba718bf1p-340, 0.0, 0.0, 0.0,
     0x1.6d667da4984fdp-520, 0x1.2a725c7fda5cfp-336, 0x1.01575ef807403p-555,
     0x1.bb897e162831fp-905, 0.0, 0x1.83ae2a404dec2p-212, 0x1.2aee8ec8352c6p-762,
     0x1.f97a40eee7a35p-250, 0x1.b1efa033781acp-650, 0.0, 0.0, 0x1.4cc4f40f36c83p-920,
     0x1.34e9d1dac0e22p-498, 0x1.1544d65a59ebbp-361, 0.0, 0.0, 0.0, 0.0,
     0x1.0b1db5ffd76a9p-144, 0.0, 0.0, 0x1.8f9556cf3cf63p-671, 0.0,
     0x1.406c99342da86p-421, 0x1.63608e783204ap-897, 0x1.1fe5d4f9d549dp-773, 0.0,
     0x1.9c186e7762adep-947, 0x1.f7bdd425c5d33p-309, 0x1.5df052fdc13adp-550,
     0x1.53a55603e2621p-990, 0.0, 0.0, 0x1.428775f383851p-446, 0.0,
     0x1.89323134323fap-34, 0.0, 0x1.242318468ed53p-302, 0x1.d6b7d292e813p-1009, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.27b55e568529ep-220, 0x1.92fc34139dce9p-607, 0.0,
     0.0, 0.0, 0x1.c25d248323f53p-1021, 0.0, 0x1.6bd455ff6eb93p-88,
     0x1.985be0e950965p-347, 0x1.8397f18d2c4a1p-545, 0.0, 0x1.02fa0940e63efp-80,
     0x1.78208124c055dp-566, 0.0, 0x1.e2ce4a372bd21p-912, 0.0, 0.0, 0.0,
     0x1.54a54c1ffe38bp-872, 0x1.5a07dd87f5827p-268, 0x1.8257bffb29e28p-320,
     0x1.d20bc71d786edp-936, 0x1.ff291e871b7a4p-399, 0.0, 0x1.b52366adb7c8cp-29,
     0x1.c5d422aad2e8cp-703, 0.0, 0.0, 0.0, 0x1.d488221079994p-265, 0.0, 0.0,
     0x1.851bd9f8b8286p-370, 0.0, 0.0, 0.0, 0x1.e15e52d677d8cp-927, 0.0, 0.0,
     0x1.982e5d10888cp-912, 0.0, 0.0, 0x1.587e4ce2e92d9p-510, 0x1.0487f85406b15p-664,
     0.0, 0.0, 0.0, 0x1.148928d346347p-789, 0x1.d2d617e0557fdp-447, 0.0,
     0x1.eb356bda2b54ap-236, 0.0, 0x1.89511aef1e84cp-494, 0.0, 0.0,
     0x1.80b3bb5ad597dp-777, 0.0, 0x1.ef1aff9ae7a51p-338, 0.0, 0x1.3da4522e81184p-58,
     0x1.55a7449aba3f9p-271, 0.0, 0x1.816c8a85fb3ecp-1015, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5344cb5184d8bp-959, 0.0, 0x1.8fa4b8b5da04bp-279, 0.0,
     0x1.5c55629d50607p-227, 0.0, 0.0, 0x1.dc583c0d2182cp-837, 0.0,
     0x1.743f2605d6abcp-793, 0x1.7aec62eddcac1p-409, 0x1.8d35662760322p-245,
     0x1.d3a1fa59ae682p-78, 0x1.bdd9e38f9f119p-401, 0.0, 0x1.80c6197ab15cbp-399, 0.0,
     0x1.7ff6ace41c48dp-443, 0.0, 0.0, 0.0, 0x1.d9f560ced16fcp-109, 0.0, 0.0, 0.0,
     0x1.ee452fde49059p-884, 0.0, 0x1.b672efd97b4a2p-219, 0.0, 0x1.fb002fe4cd0fp-7,
     0.0, 0x1.39c87d06d1f28p-1022, 0.0, 0x1.c72f938ba0499p-395,
     0x1.987e1ada2fe18p-553, 0.0, 0.0, 0.0, 0.0, 0x1.aa83e692e0d5dp-470, 0.0,
     0x1.9c70d010b8a34p-1018, 0.0, 0x1.b4a9ef172514bp-341, 0x1.7208c35d8ac97p-623,
     0.0, 0.0, 0.0, 0x1.a39da6bfb1f83p-30, 0x1.9b98a4bac1df9p-246, 0.0, 0.0, 0.0,
     0x1.a2dcc2b877ce4p-195, 0x1.3ca88e7dcb22bp-848, 0x1.4379cbcbf9358p-506,
     0x1.1d6121600b227p-650, 0x1.7b91c5eae208ap-95, 0.0, 0x1.3ab806bf71cd9p-903, 0.0,
     0x1.b72bf662426dap-134, 0x1.98bf8cb058462p-5, 0x1.051241d188368p-375,
     0x1.efe578d9355bdp-699, 0.0, 0x1.838c22d06a6f9p-898, 0.0, 0x1.8118e452a80adp-531,
     0.0, 0.0, 0x1.bb8bc73ba21dfp-568, 0x1.4bfe6fbeed21dp-171, 0.0, 0.0, 0.0,
     0x1.aaf496b14dbdcp-240, 0.0, 0x1.b609dac708253p-5, 0.0, 0x1.c51d8e630415dp-958,
     0x1.a809b4e32fa0fp-570, 0x1.11ae134978604p-376, 0x1.9d2d6a9d68eb8p-839,
     0x1.042cd9bf63f84p-843, 0x1.47356b1f1d9d5p-471, 0x1.68833441c1abap-201, 0.0, 0.0,
     0x1.b751dca99208ap-649, 0.0, 0.0, 0.0, 0.0, 0x1.133d2baa13b88p-519,
     0x1.42603af7df81ep-53, 0x1.5253604107558p-637, 0x1.eb4051c15130bp-942, 0.0,
     0x1.e8201d8742b67p-87, 0x1.a4f2496a1e942p-69, 0x1.f9b3e04c8c98p-479,
     0x1.42bca72e4bd6p-844, 0x1.701ded951f9bp-247, 0.0, 0.0, 0.0,
     0x1.ff8f333f984adp-307, 0.0, 0x1.1b340a7687decp-963, 0.0, 0.0, 0.0,
     0x1.754fbac2ff78ep-669, 0x1.6ca5079d1cbd6p-242, 0.0, 0.0, 0.0,
     0x1.da22b43d552bdp-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14b4d5ff5fc09p-890,
     0.0, 0.0, 0x1.c50c48801e794p-350, 0x1.f38fcec0386e3p-906, 0.0, 0.0,
     0x1.6021fc4d4edcp-44, 0.0, 0x1.21d061cd4023fp-192, 0.0, 0.0,
     0x1.beab1dd4d10fp-409, 0.0, 0x1.3ab67ba5b31b1p-723, 0x1.09fb923d3908cp-661,
     0x1.c512212b30a96p-781, 0x1.55d1c2f94f1bp-781, 0.0, 0.0, 0x1.c5d585983defp-168,
     0.0, 0.0, 0.0, 0x1.91736c6dba544p-926, 0x1.158559287e056p-904,
     0x1.c998ee036f57cp-191, 0x1.a214677f5d2dep-752, 0.0, 0.0, 0.0,
     0x1.9a70926de566dp-94, 0x1.c38dadec1f5bfp-345, 0x1.d4eff53de92c5p-575, 0.0, 0.0,
     0x1.1fe8bfa90cb32p-468
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
            tmp1 = ceil(tmp0);
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
    printf("ceil %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("ceil bench acc %la\n", global_bench_acc);
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
