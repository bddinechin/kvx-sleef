/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncd2_avx2128.c --function Sleef_truncd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.15da155132538p-180, 0x1.999aa9681bf7ep-621, 0.0, 0.0,
     0x1.35f12f67274efp-312, 0.0, 0.0, 0x1.a07e2079f4982p-808, 0x1.ff77b7fb8beb8p-637,
     0x1.0527fda241bf9p-593, 0x1.6369e842cb0abp-969, 0.0, 0.0, 0x1.4d27745cd4581p-451,
     0.0, 0.0, 0.0, 0x1.2ce9322d1022p-129, 0.0, 0x1.ae0c82e312e98p-833, 0.0, 0.0, 0.0,
     0.0, 0x1.030bed6874a32p-503, 0x1.581aef1bc947cp-97, 0x1.90976b3d3ddf8p-717,
     0x1.c48e8e804a069p-110, 0x1.9176671b76befp-764, 0x1.43cb7f43059e4p-634,
     0x1.2f0f6c62bfa1ep-280, 0x1.d6de370e56ff8p-360, 0.0, 0.0, 0.0, 0.0,
     0x1.f0c02fe3eb65ap-676, 0x1.43080b75ac21ap-701, 0.0, 0x1.73cd1e727f496p-784,
     0x1.6a18e5bb60583p-762, 0x1.3bc5beeedffa9p-484, 0x1.39117471ecaa4p-40, 0.0,
     0x1.b4de8e368df6ep-883, 0x1.c5d9ecfa8a80cp-978, 0x1.9e942faa7ebd4p-576,
     0x1.205c0664f7a7fp-362, 0.0, 0x1.5e8606b7137dbp-504, 0.0, 0x1.91d117a82bff4p-727,
     0.0, 0x1.e40a383296cdcp-950, 0x1.7bb72195bb313p-585, 0.0, 0.0,
     0x1.270b548fdcf97p-416, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a779296dc4dcp-142, 0x1.f870fa8467b31p-581, 0x1.f10322af5617dp-109,
     0x1.214297a043ebfp-1015, 0.0, 0.0, 0x1.c46dc09a2b5a9p-312,
     0x1.9c51d165673a8p-892, 0.0, 0x1.a8aabe7816d9fp-69, 0x1.c50068b27f70dp-731,
     0x1.ac9737109e43cp-611, 0.0, 0x1.1ed62e9b5cbbcp-31, 0x1.fbb2c30eddb25p-152, 0.0,
     0.0, 0x1.1eb4524a97753p-250, 0.0, 0x1.b42d56181401p-328, 0.0,
     0x1.ee54b33dd120ep-894, 0x1.73f59d973ce39p-259, 0.0, 0x1.558b6545c11fcp-294,
     0x1.8dca620b6f428p-576, 0x1.71800167c5476p-837, 0.0, 0.0, 0.0,
     0x1.8cd830b183f7cp-550, 0.0, 0.0, 0x1.e1c8d563f45e3p-305, 0x1.f4b154edce246p-335,
     0x1.5f97506b135f9p-55, 0x1.53b305fb42c23p-25, 0x1.12c15e6f567f2p-691, 0.0, 0.0,
     0x1.b0101f8dd7be9p-497, 0.0, 0x1.f9bed929f7388p-26, 0x1.42fd5f5f324ap-541,
     0x1.bb99c841ecc13p-549, 0.0, 0.0, 0x1.cb6c6be437176p-391, 0x1.2fdedb9d7645ep-423,
     0.0, 0.0, 0x1.3a7af8eecdbadp-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.93a8c0e261e2p-338, 0x1.3a498b0912b08p-512, 0.0, 0x1.1de563f1dcbe4p-221, 0.0,
     0x1.7ab01214162d3p-394, 0.0, 0.0, 0x1.eaf1659302becp-517, 0.0,
     0x1.d91b04d8d7af7p-734, 0x1.b124e112a0a57p-369, 0.0, 0x1.58689377c7406p-973,
     0x1.9ebfe09150c78p-812, 0x1.bac064772d1ddp-546, 0.0, 0.0, 0.0,
     0x1.8a32b4eb3dd2cp-427, 0x1.37228906840b4p-273, 0.0, 0.0, 0.0, 0.0,
     0x1.c0e678ffd8bb9p-289, 0x1.ffc3c35bfd5cdp-624, 0x1.d2131b7578c9fp-448,
     0x1.dba064d7f225ap-694, 0x1.482f411aab8c3p-576, 0.0, 0x1.387d933c53a13p-846, 0.0,
     0x1.c87f9df248871p-914, 0x1.b2d7030a9f4cdp-943, 0.0, 0.0, 0x1.188617d2eda9ap-984,
     0x1.22b19954abdafp-415, 0.0, 0x1.eb8d529c080fbp-945, 0.0, 0.0,
     0x1.7c033218414ebp-904, 0x1.616de8b91f275p-501, 0.0, 0.0, 0.0, 0x1p0,
     0x1.ad800043b131dp-430, 0x1.5df628cfac33cp-683, 0x1.86be684451f5cp-519,
     0x1.9e3993a56d5c7p-767, 0x1.10a2573770f7fp-264, 0x1.9830f18c8ed6cp-968, 0.0,
     0x1.5fd6d3c6040bdp-686, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c0a285b6da4dp-901, 0.0,
     0x1.6a78af1741361p-459, 0x1.debfc4188fa95p-892, 0.0, 0x1.e430d5aadfd16p-419,
     0x1.77d63e1955d7dp-61, 0x1.3a62860c64ffap-121, 0.0, 0x1.c025d1608ab54p-815,
     0x1.14f3ac13ffbb3p-444, 0.0, 0.0, 0x1.164183908b6a3p-567, 0x1.1e773cede0303p-91,
     0x1.4beb6b240a011p-364, 0.0, 0.0, 0x1.847256bfdecdfp-456, 0.0, 0.0,
     0x1.2f2ae5f0cd5c1p-334, 0.0, 0x1.11a06a3f5f463p-729, 0.0, 0.0,
     0x1.d21b173011c5bp-185, 0x1.ca56628f0f0cap-567, 0.0, 0x1.3e5085ddeef09p-967,
     0x1.bdaa76924c085p-475, 0.0, 0.0, 0x1.c73994d6abd27p-253, 0x1.a29d46224572ap-910,
     0x1.fc3fbf6d7b88bp-652, 0.0, 0x1.9586a15ee5b6ap-871, 0.0, 0.0, 0.0,
     0x1.9ba613a6bddp-111, 0.0, 0.0, 0.0, 0.0, 0x1.95a874407ca12p-729, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ed962be188135p-815, 0x1.ff447b6896fa4p-914, 0.0, 0.0,
     0x1.d6557493f213ep-1003, 0x1.46fff6e242228p-956, 0.0, 0x1.818c34b46d41p-6,
     0x1.f8b4cf1a609e5p-790, 0x1.77b48e678989cp-140, 0.0, 0x1.cfc480b0d528dp-992,
     0x1.216ae2079cc7ap-243, 0.0, 0x1.13436f96918d5p-793, 0x1.a98b575f2b901p-86,
     0x1.700d3735afbedp-967, 0.0, 0.0, 0x1.8ba67069540c9p-784, 0.0, 0.0,
     0x1.f6befba62c8efp-680, 0x1.97ab97c128e84p-24, 0x1.783c212878de2p-871,
     0x1.e1b970fa6d231p-854, 0x1.7b02a8bdae252p-727, 0x1.55c798c8b952fp-757, 0.0,
     0x1.c1f239f460b08p-500, 0x1.e5c62f84a2bb6p-1013, 0x1.a0dc4f80191ebp-570,
     0x1.ce4f90f0fb611p-380, 0.0, 0x1.acdd82553235ap-85, 0.0, 0.0, 0.0,
     0x1.22f403ab8e2bbp-514, 0.0, 0.0, 0x1.8cbac287af6bap-48, 0.0, 0.0,
     0x1.07895a9d91229p-547, 0x1.04849be2b5278p-112, 0.0, 0x1.6b030a70daf8p-397,
     0x1.a69da4438b2adp-125, 0x1.94ac521fd0398p-1015, 0.0, 0x1.5cfb0d59b61f7p-39, 0.0,
     0.0, 0.0, 0x1.adeaf25fb50dcp-789, 0.0, 0.0, 0.0, 0x1.f37961aa4d855p-333, 0.0,
     0.0, 0.0, 0x1.21c83495a939dp-1013, 0.0, 0.0, 0.0, 0x1.d0edc9c6f1332p-969,
     0x1.7493051b8a244p-422, 0.0, 0x1.98d479f4b6c3ap-175, 0.0, 0x1.76ac4134d416ep-535,
     0x1.1589181330195p-535, 0x1.91bfbb547c918p-724, 0x1.9a1d90b71acbep-908,
     0x1.2ee630e98541dp-852, 0x1.85c38f7237ed2p-414, 0x1.4a0fd2c29672dp-795,
     0x1.7f2d16f69b6dcp-424, 0x1.95ba769db9276p-587, 0.0, 0x1.de9a374fb71bcp-23,
     0x1.7f8ce9229d0dbp-939, 0x1.52884e6023df1p-125, 0.0, 0.0, 0x1.00a99fe6747fep-790,
     0x1.da9136fc7a608p-393, 0x1.9359f4aa00a68p-708, 0.0, 0x1.2bdff6c2a524cp-389,
     0x1.38629307720fbp-375, 0x1.ff88aff71f73bp-50, 0.0, 0.0, 0x1.478567b20e3e1p-997,
     0x1.13434e515fb95p-568, 0.0, 0x1.f4f950ba2648dp-95, 0.0, 0x1.0b67e99d83abfp-282,
     0.0, 0.0, 0x1.2cc614dea4e64p-736, 0x1.9d229968e4c4p-959, 0x1.5e466426d4dd6p-821,
     0.0, 0.0, 0.0, 0x1.591d014a3c7ddp-358, 0.0, 0.0, 0.0, 0x1.60f6b10060178p-982,
     0.0, 0x1.7f7f488656189p-120, 0x1.abe800ba59b86p-189, 0.0, 0x1.a6e1c89097cfap-325,
     0.0, 0x1.f9126a7c61bc7p-688, 0.0, 0x1.977604c9dca92p-258, 0.0,
     0x1.68ef956007067p-580, 0.0, 0x1.336fa91cbe97dp-475, 0.0, 0x1.dad55fde28168p-989,
     0x1.45e44b5330d98p-755, 0x1.77cdf7428b3d4p-996, 0x1.cd66cbf35f03fp-909,
     0x1.94de7f8bcc88p-606, 0.0, 0x1.384f4e9d92a79p-965, 0.0, 0.0, 0.0,
     0x1.bd5c949cd624ep-525, 0.0, 0x1.7aebac8cb15f3p-564, 0.0, 0.0, 0.0, 0.0,
     0x1.ce6081197b8e9p-430, 0.0, 0x1.dfff95f78d55p-555, 0x1.e6fe70157c733p-78,
     0x1.e1c60204c138ap-565, 0x1.6d0bd1201f6c9p-251, 0.0, 0.0, 0.0, 0.0,
     0x1.35c42323589d7p-461, 0x1.8b1bda4688b4cp-728, 0.0, 0.0, 0.0, 0.0,
     0x1.5b3101ae3c914p-810, 0.0, 0.0, 0.0, 0x1.d3b04898a4b6ep-364,
     0x1.eecfb588ba224p-158, 0x1.e9dcd805039c5p-631, 0x1.c7fc4f9232c61p-576, 0.0, 0.0,
     0x1.83214d77f40c3p-862, 0.0, 0x1.fdad8e703632ep-922, 0x1.ef6b41e5ae61cp-518, 0.0,
     0.0, 0x1.7907784f5dd2ep-245, 0.0, 0.0, 0x1.643ef6cbfa135p-932, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9cd26f0b6ac05p-924, 0x1.8d5f80f18bf66p-281, 0x1.65aeccd92b4b2p-185,
     0.0, 0x1.7e55576c976a4p-103, 0x1.ae22f04f2f593p-16, 0x1.ed7c937e8f9e5p-746,
     0x1.4a5fd75463e87p-183, 0.0, 0x1.31e1a97ad60eep-522, 0.0, 0x1.0fd716768db46p-571,
     0.0, 0x1.497e6711bdacfp-516, 0.0, 0x1.1d3d5a53b31b1p-288, 0.0,
     0x1.a9ac2809197f3p-1003, 0.0, 0x1.d9b01a257fd47p-977, 0x1.c7a139b74becep-6, 0.0,
     0.0, 0.0, 0.0, 0x1.c79228a4dd4c4p-650, 0.0, 0.0, 0.0, 0.0,
     0x1.89572b5b9d80dp-593, 0.0, 0.0, 0.0, 0x1.46ffb42d118abp-718, 0.0, 0.0, 0.0,
     0x1.387ac6117f446p-60, 0x1.c79306ffde8dbp-184, 0.0, 0.0, 0x1.4ff81fc852b8ap-914,
     0.0, 0x1.768d8a7281934p-374, 0x1.80ca2c9954f04p-445, 0x1.6dbbf093cf7adp-839,
     0x1.c76a1fbdec23p-847, 0x1.9935e0d5cdaf3p-66, 0.0, 0x1.97e1e037a4df7p-259, 0.0,
     0.0, 0.0, 0.0, 0x1.86b5ed3820144p-550, 0.0, 0x1.fa9f6a919dd6cp-26,
     0x1.ecfe5b8a805a7p-722, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91af269b0ff5p-330,
     0.0, 0x1.c59851ec34538p-731, 0x1.b018cf7f9bb29p-513, 0x1.d82cfcc3d6acep-325, 0.0,
     0.0, 0.0, 0x1.cf634a61b5f0ap-8, 0x1.2e20ef105c7c2p-141, 0x1.aede8e4d79fccp-353,
     0.0, 0.0, 0.0, 0.0, 0x1.c5395e31de9b4p-298, 0x1.4e03c5b7afbd7p-547, 0.0,
     0x1.d588ec0f347bap-559, 0.0, 0.0, 0x1.39e5b1707e902p-489, 0x1.391a9746e8449p-745,
     0x1.02aa537a642e3p-566, 0x1.7c15d42196424p-917, 0.0, 0x1.2463287479ff9p-282,
     0x1.5b2e1de5f4255p-621, 0x1.1e3c805a9b52cp-30, 0.0, 0.0, 0.0,
     0x1.67f911e2b5261p-543, 0.0, 0x1.b894000857778p-425, 0x1.3ab97b2bb4967p-658,
     0x1.8c2630c251265p-30, 0.0, 0.0, 0.0, 0x1.447a5e8d0d47bp-873,
     0x1.ce0b4891b8c9ep-599, 0x1.b3feadd874151p-118, 0.0, 0.0, 0x1.ff10e6a8bb38ep-362,
     0.0, 0x1.f67a1f616a2b3p-769, 0x1.e903960e5852bp-922, 0.0, 0.0, 0.0,
     0x1.82b865855ace3p-396, 0.0, 0.0, 0.0, 0x1.14ec90def1d5dp-402,
     0x1.51968213f79e3p-650, 0.0, 0x1.f2d232dc166b9p-632, 0.0, 0.0, 0.0,
     0x1.79ddfb4e4f001p-1016, 0.0, 0x1.3f7274f6bef77p-629, 0.0,
     0x1.f7bcf4464547cp-923, 0x1.0e05f50a8b671p-100, 0x1.86f5f45968b28p-480,
     0x1.fc138a5d7e779p-303, 0x1.f06daf3edc57cp-81, 0.0, 0.0, 0.0,
     0x1.f30c4dd9cd40bp-510, 0.0, 0.0, 0.0, 0.0, 0x1.8df044a2fd621p-270, 0.0, 0.0,
     0.0, 0x1.06a10a64ddca8p-699, 0x1.dd7e57e40d206p-564, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e916d6e318ce5p-483, 0x1.b704f8f47919fp-9, 0.0, 0x1.e93e913fe34b4p-357, 0.0,
     0.0, 0x1.869bdb97bfe41p-56, 0x1.63d5dd1ed3194p-849, 0x1.28b55116bce04p-106,
     0x1.3652a3477bfa5p-667, 0x1.02c6f98f92a64p-874, 0x1.dff071794c4ecp-415, 0.0, 0.0,
     0x1.4595104798476p-183, 0.0, 0x1.0eac9a0238fa5p-399, 0.0, 0.0, 0.0,
     0x1.d5cbfb3846d4ep-482, 0.0, 0x1.51c3630cc510fp-902, 0x1.0c45b4c77306ep-65, 0.0,
     0.0, 0.0, 0x1.99c041d8e537cp-354, 0x1.ea9f4eaebad3dp-21, 0.0, 0.0, 0.0,
     0x1.0ba30308ec60bp-763, 0.0, 0.0, 0x1.9e856ce4f29e8p-611, 0x1.80b587c465bebp-222,
     0x1.4b8e7d5711c5fp-711, 0x1.d4ff309d5c1f4p-43, 0.0, 0x1.3641a1dfa525ep-937, 0.0,
     0x1.ad5eeb5657ee8p-656, 0x1.1f32eec2e7d8bp-908, 0.0, 0.0, 0x1.a48b18d9cb3c9p-715,
     0.0, 0.0, 0.0, 0x1.c2e6e70c10e69p-523, 0x1.501f21479027fp-237,
     0x1.078643a931848p-33, 0x1.9cccb2ce5499bp-134, 0.0, 0x1.f57bd7f2ae3a8p-570,
     0x1.6278f526f7291p-508, 0.0, 0.0, 0.0, 0x1.c2c29af1f440ep-910, 0.0,
     0x1.82b6ddc755047p-235, 0.0, 0x1.d3dfaf19c3a41p-1013, 0.0, 0.0,
     0x1.9ddd7c07ce953p-438, 0x1.778d9f9f9710ap-127, 0x1.befe6d701b261p-63, 0.0, 0.0,
     0x1.d073a2f6d1a89p-365, 0.0, 0.0, 0x1.4ca347170ebcfp-302, 0x1.e4a05700a429dp-789,
     0.0, 0x1.47bb76b7d9ab2p-1006, 0x1.e6510ec24ab1fp-140, 0.0,
     0x1.58d6235272abfp-891, 0x1.8597938a7e36dp-57, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e391cc29b1fddp-561, 0x1.b48f7e78f5c6cp-969, 0x1.2cfc548ed1ebap-662,
     0x1.222503857d45ap-521, 0x1.faf85697ca8d1p-949, 0.0, 0.0, 0x1.9ea441d1cbae2p-641,
     0.0, 0.0, 0x1.2903037cf04dbp-799, 0x1.3418c9a59287p-186, 0x1.26ab884ac824dp-706,
     0x1.42cd9fa53c62fp-50, 0.0, 0x1.eb955e933c6dp-147, 0x1.9a7c29d02cfc4p-999, 0.0,
     0x1.bee467852aa42p-304, 0.0, 0x1.a3c7bb3614102p-215, 0x1.4eeade8f56444p-181, 0.0,
     0x1.ce3e633556745p-972, 0x1.342d379528a6p-313, 0.0, 0.0, 0.0,
     0x1.a0b732833657cp-25, 0x1.af768ed735f1p-334, 0.0, 0x1.8842d635abdabp-526,
     0x1.520b3e5cb2c9dp-315, 0x1.9ee20486c9cb3p-235, 0.0, 0x1.914df2bb92d1fp-587, 0.0,
     0x1.a04a97808228fp-331, 0x1.49439d051a204p-355, 0.0, 0x1.61c40c10df8b6p-311,
     0x1.7c3ee78857b2dp-770, 0x1.538e91e3acedp-953, 0.0, 0x1.1951adf674ba5p-635, 0.0,
     0x1.72bff671ae44bp-163, 0x1.0f21607d8ad76p-457, 0x1.a7283e04ae83p-424,
     0x1.4c3672a785e7fp-888, 0.0, 0.0, 0x1.c286743631747p-604, 0.0,
     0x1.0b5b2fc0b06bcp-425, 0.0, 0.0, 0.0, 0x1.ea15c1b10602ep-106, 0.0,
     0x1.95ec00ca5cb02p-35, 0x1.595369547a2dp-156, 0.0, 0x1.37409a841d57p-782, 0.0,
     0.0, 0x1.f091bbf8442acp-799, 0x1.d2d0327a6b8eep-306, 0x1.fdfd10d07c5d2p-873,
     0x1.a6e17bc5ac0b9p-127, 0.0, 0.0, 0.0, 0.0, 0x1.65f7ab3d75632p-136, 0.0,
     0x1.f6b7ae09b5c83p-74, 0x1.f626a9afbf996p-761, 0.0, 0x1.ae2f7686dece5p-732,
     0x1.2e8969b68d51p-982, 0.0, 0.0, 0x1.5c5fb9982aa53p-318, 0.0, 0.0, 0.0,
     0x1.10590078d9882p-883, 0x1.80e9623aadeb7p-411, 0.0, 0x1.b0c7ef1407b0bp-390, 0.0,
     0x1.026939cef1414p-1018, 0.0, 0.0, 0.0, 0.0, 0x1.cd7ecff0c178bp-567,
     0x1.3935b8347fcdep-508, 0.0, 0.0, 0.0, 0x1.41499b7185a8ap-298, 0.0, 0.0,
     0x1.448a0c684cc52p-155, 0.0, 0x1.bc8fceb5aa7cp-623, 0.0, 0x1.302ed89703f1ep-714,
     0x1.98c0348a0a8b5p-519, 0x1.ef13e52007e63p-837, 0x1.db29fecb38463p-979, 0.0,
     0x1.ee60fa1bb3773p-71, 0x1.7f4a5e2060ba7p-140, 0x1.3a44a4ec85d84p-942, 0.0, 0.0,
     0.0, 0x1.2627c1e4ac398p-510, 0.0, 0x1.342a7212b2b74p-101, 0.0, 0.0,
     0x1.9c2c17c5eb7adp-805, 0.0, 0x1.b56cd5663c6e4p-528, 0.0, 0x1.dd2f5d4bf7d7ap-444,
     0.0, 0.0, 0.0, 0x1.839861e7393f1p-996, 0x1.10fcd5d409c07p-753,
     0x1.1b47fbe415209p-21, 0.0, 0.0, 0.0, 0.0, 0x1.95b8df0c1db95p-314,
     0x1.7ec7caa457591p-806, 0.0, 0x1.d6ab3ce07d67cp-39, 0.0, 0x1.5ade81275445cp-233,
     0x1.bdde08c31a10dp-529, 0x1.cc37dd6b2b25ap-793, 0.0, 0.0, 0x1.36fb6ca20811p-432,
     0x1.72f382fdf8533p-227, 0x1.724f704a030fep-176, 0x1.0343e4f073b3p-934,
     0x1.616a36f0bbd8cp-259, 0x1.a5efdd244824ep-887, 0x1.4597783582345p-545, 0.0, 0.0,
     0x1.b9ecf3a989c45p-401, 0x1.b2590f7d96fb4p-521, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84f486aa75922p-162, 0x1.10fdc08581c91p-489, 0x1.d27ca344cbb2ap-617,
     0x1.f26b3c16b9f29p-300, 0x1.8a76635963b79p-693, 0x1p0, 0.0,
     0x1.e3ebe9a12b6afp-944, 0x1.a80b1f5ca003fp-183, 0.0, 0.0, 0x1.7d6b812308f1fp-202,
     0.0, 0.0, 0.0, 0.0, 0x1.db32e71534668p-511, 0.0, 0.0, 0.0,
     0x1.de9934e886275p-351, 0.0, 0.0, 0.0, 0.0, 0x1.9420bb39fe364p-138,
     0x1.fdfe629932839p-135, 0.0, 0x1.bd2b6c4094d32p-785, 0x1.87d1b0e5e97a6p-715, 0.0,
     0.0, 0x1.886b88bc7dd9p-63, 0x1.1a4efccd8197ap-80, 0x1.1de5acf8b76b3p-351, 0.0,
     0.0, 0.0, 0.0, 0x1.1be1cb282e7e3p-155, 0x1.82a3f9aaba912p-919, 0.0,
     0x1.3e6342d2b8996p-497, 0.0, 0.0, 0.0, 0.0, 0x1.d0665b882107dp-631,
     0x1.3370df4a41e31p-218, 0x1.0c606865f75ep-849, 0x1.9689ed30cd866p-70,
     0x1.28be0c209c259p-396, 0x1.8a8090edbd635p-625, 0.0, 0x1.dace1631a18b7p-782, 0.0,
     0x1.a29a6fec04c87p-468, 0.0, 0.0, 0x1.1df778739a7f5p-465, 0.0, 0.0, 0.0,
     0x1.032400b2b614ap-792, 0.0, 0x1.1e6a667f2f6dap-270, 0.0, 0.0,
     0x1.35ab0a57bd81dp-121, 0x1.a26899db0cc49p-676, 0.0, 0.0, 0.0,
     0x1.2736e48dcb37ep-946, 0x1.d6aa631274e07p-393, 0.0, 0.0, 0x1.7be7629ec5c91p-678,
     0.0, 0.0, 0x1.b3b069ae37893p-830, 0x1.f78184029aa18p-942, 0x1.90a63ca654765p-904,
     0x1.2948463f88dabp-319, 0x1.888abe3d76735p-12, 0x1.5972aebd9e4a3p-773, 0.0,
     0x1.dc6ee6eaff8cp-204, 0x1.2b408880b741ap-15, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee5b6b384c0c5p-52, 0x1.fd2ecf3ba306fp-736, 0x1.0b461fbce4162p-850,
     0x1.446d4524d1a6p-75, 0.0, 0x1.59632ed9f7248p-577, 0.0, 0.0,
     0x1.f68eed421284p-656, 0.0, 0x1.fd7df0b912182p-881, 0x1.769794decb1cep-194,
     0x1.2bf4d7e930721p-654, 0x1.c8ec90dcdf0dfp-597, 0x1.d6ac08bd274cbp-517,
     0x1.c307ecb7a849cp-28, 0x1.fd0ff4051cbe9p-724, 0x1.8d31d083f4e89p-555, 0.0,
     0x1.5f255c515745fp-15, 0.0, 0.0, 0x1.9de07e44e3ddp-406, 0.0,
     0x1.3e9cc0615ec41p-743, 0.0, 0x1.8847e487c0e15p-228, 0x1.d2cd81b7cacb8p-849,
     0x1.1121b81b16296p-39, 0x1.2098945c09a02p-355, 0x1.e226b474e8a26p-268,
     0x1.ed09c1c344452p-378, 0.0, 0.0, 0.0, 0x1.e28cb118dfd72p-577, 0.0, 0.0,
     0x1.12725f8dadba6p-369, 0x1.878a8d5ed8c99p-447, 0.0, 0.0, 0x1.62ecd34728e75p-25,
     0x1.0c6533cbd4bdap-159, 0.0, 0x1.f242c54140673p-450, 0x1.774d6b3edd59bp-455, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a7bb4580a944p-334, 0x1.8c312384d7868p-584, 0.0, 0.0,
     0x1.fbc08b3695e23p-294, 0.0, 0x1.406321b5bd2f5p-832, 0x1.bfeaa06ffe78bp-832, 0.0,
     0.0, 0x1.209764567c5ecp-181, 0x1.1d69982d820e6p-221, 0.0, 0x1.8237f12818e8dp-369,
     0.0, 0x1.81e249656cbd9p-519, 0x1.66784d383959dp-860, 0x1.2676e2e047edbp-150, 0.0
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
    
    global_bench_acc = external_bench_wrapper_cst;
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
            tmp1 = Sleef_truncd2_avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_truncd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_truncd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
