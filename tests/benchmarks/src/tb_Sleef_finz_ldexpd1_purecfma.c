/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ldexpd1_purecfma.c --function \
 *     Sleef_finz_ldexpd1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64,int32 --precision \
 *     double --bench --no-embedded-bin --target kv3
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
     0x1.70385a0294859p-876, 0.0, 0.0, 0x1.7e4bd23cede5bp-241, 0.0,
     0x1.ee0f15c30103p-396, 0x1.31e0260717d6bp-18, 0.0, 0x1.3aba7d93d6c9bp-95,
     0x1.0474e4855d40dp-384, 0.0, 0.0, 0x1.0446e0b5ce978p-179, 0x1.4158c083f2f09p-480,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e74861eb10fb9p-38, 0.0, 0.0, 0x1.5de2239307d22p-50,
     0.0, 0x1.6cf6afe28d5ddp-749, 0x1.d31a5d27af574p-40, 0.0, 0.0, 0.0,
     0x1.7c9246f336d0dp-821, 0x1.84f79a5e4aa41p-400, 0.0, 0x1.d8264d8df66a8p-771,
     0x1.ff7f138d0c49ap-440, 0.0, 0x1.6ff40ebfb522p-506, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.16843759e482cp-894, 0x1.1a298630a778p-274, 0x1.479fe19e8652p-977, 0.0,
     0.0, 0.0, 0x1.f8e7e74e407f5p-520, 0x1.d647bfaeb3e11p-692, 0.0, 0.0, 0.0, 0.0,
     0x1.cda6f1bc06e8ep-274, 0x1.7fbb9c9cc1df2p-459, 0.0, 0x1.7e81cefc94146p-1004,
     0.0, 0x1.bdd2f474c3273p-971, 0.0, 0x1.b000382da0181p-872, 0.0, 0.0,
     0x1.6da6ab168f7edp-684, 0x1.9873f185df8dap-666, 0x1.cc1af5816fbcap-970,
     0x1.ac7cee2d35b95p-482, 0x1.25c4a0fab02d6p-548, 0x1.ac16ec4fdc0d5p-129, 0.0,
     0x1.9a725afe74169p-551, 0x1.61e546a9f3bedp-936, 0x1.9f08edb0d53b5p-500, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.feb613cc5caaep-149, 0.0, 0x1.0fe3d3d7d0d71p-383,
     0x1.12becf6f7e084p-822, 0x1.ac1f55aa86b4ep-882, 0.0, 0x1.601eee22ff9c8p-41, 0.0,
     0.0, 0x1.8e80e035d431cp-138, 0x1.78bf488363d8dp-972, 0.0, 0.0,
     0x1.86a460e3dac47p-893, 0.0, 0x1.520687494fcb8p-502, 0x1.2b931d0532179p-35,
     0x1.ab163a1cb4ec5p-796, 0.0, 0.0, 0x1.19dbc47cc1c4bp-722, 0x1.5597b122859a5p-480,
     0.0, 0.0, 0x1.fd3ef8cd2ff8ap-39, 0x1.469a28400b0bep-269, 0x1.d4458c385f5f1p-778,
     0.0, 0.0, 0x1.e20c69c94f0eep-921, 0x1.53cc5b07c930dp-846, 0x1.6d51a681bcc8ep-572,
     0.0, 0.0, 0.0, 0.0, 0x1.5e5a2b0d6045bp-602, 0x1.c5e92ef464a67p-874,
     0x1.4ae2930fb6393p-643, 0.0, 0.0, 0.0, 0x1.3d621e1c2f361p-420, 0.0,
     0x1.b80d651ddc68fp-824, 0x1.602f63d502938p-437, 0.0, 0x1.3eb2837226d72p-86,
     0x1.e9dd16fd9e439p-655, 0x1.6e0897b99d2dep-539, 0.0, 0x1.e0bb774a61186p-546, 0.0,
     0x1.e16078042a372p-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7f24dbb7f20adp-759, 0.0, 0.0, 0x1.cccf7f4d1a215p-683, 0x1.2e48f5228ba72p-323,
     0x1.ce0b575dab8cap-457, 0x1.898f4030ff212p-681, 0x1.9d7c4dfd906efp-473, 0.0,
     0x1.a8e7fb3b9d7bbp-575, 0x1.5b2a9d6d252f8p-874, 0x1.1952f1077b115p-901, 0.0,
     0x1.cf3f77411ed97p-328, 0x1.aad6a5c0056eap-373, 0.0, 0.0, 0x1.5cb721a2b7aedp-470,
     0.0, 0x1.212072a3b7c8p-921, 0.0, 0.0, 0.0, 0.0, 0x1.3d26bd19d4f45p-734, 0.0,
     0x1.03d13d057fdadp-462, 0.0, 0x1.0762f43db5808p-612, 0x1.879703c7b48fdp-364,
     0x1.07153124af8ccp-711, 0x1.1ebe049b35795p-976, 0.0, 0.0, 0x1.27a274bce5146p-767,
     0.0, 0x1.79a21a0c902cdp-471, 0x1.a78d6e8b44495p-491, 0.0, 0.0,
     0x1.b5d3e2269fafap-23, 0x1.737333b3fc3ffp-508, 0.0, 0x1.d744884075deap-651,
     0x1.a6dafee4bedeap-743, 0.0, 0.0, 0x1.e28758092da3p-277, 0.0, 0.0,
     0x1.31b8091472f38p-97, 0.0, 0x1.506084e7b3d7cp-835, 0.0, 0.0,
     0x1.0572452eeeebcp-567, 0.0, 0.0, 0.0, 0.0, 0x1.44bb46a488e4fp-773,
     0x1.6528c390864d6p-518, 0.0, 0.0, 0.0, 0x1.6d1067b056eb6p-31, 0.0, 0.0,
     0x1.52c377ad3c57ap-190, 0x1.f5239fef9217bp-556, 0x1.ff262f3fd0466p-726,
     0x1.8fc6e8429bfap-138, 0x1.551d47c889c07p-705, 0x1.db0df9dce43afp-656,
     0x1.707043b6d2ba4p-605, 0.0, 0x1.8144ca1baac01p-338, 0x1.d6d4691453216p-182, 0.0,
     0x1.fa7f2794f73a8p-979, 0.0, 0x1.8b549c4db945fp-126, 0x1.f19f902a2e49ep-466, 0.0,
     0.0, 0.0, 0x1.b1eeed1e40451p-80, 0x1.71f580f9cd9e9p-855, 0x1.667e95e6bd203p-400,
     0x1.6226e222d439fp-297, 0x1.15fe5a9107c85p-280, 0.0, 0x1.d31ab24533aefp-94, 0.0,
     0.0, 0x1.7198ac2e1c56ap-10, 0x1.fd889e51724aep-827, 0.0, 0x1.7e3d1f1a6fap-564,
     0.0, 0.0, 0.0, 0.0, 0x1.ae07feeec0cfdp-601, 0.0, 0.0, 0x1.4274c89d668e5p-1017,
     0x1.cfda798a8c927p-787, 0.0, 0.0, 0x1.8e6149320b124p-158, 0.0, 0.0, 0.0, 0.0,
     0x1.50a418d9ea4b7p-95, 0.0, 0.0, 0x1.fa1767d87f485p-98, 0.0,
     0x1.32f32217a04e7p-758, 0.0, 0.0, 0.0, 0x1.4d9967bd72dbap-832,
     0x1.469c3aa0492aap-267, 0x1.e823dbaa3370fp-753, 0x1.7e10eb414ec4p-875,
     0x1.f6d867b72ae4bp-553, 0.0, 0.0, 0.0, 0.0, 0x1.642e559439749p-287, 0.0, 0.0,
     0.0, 0x1.f02dd57199417p-51, 0.0, 0.0, 0.0, 0.0, 0x1.a46f1afb209d1p-896,
     0x1.c50193401c753p-96, 0x1.cd43c5e30e70ep-881, 0x1.1be89dc2c8986p-902,
     0x1.d800aa2bd1f0ap-419, 0.0, 0x1.7c042b40f0d36p-209, 0x1.fa34db183a6b5p-627,
     0x1.fdb991e40f854p-438, 0.0, 0.0, 0x1.9cfd5a797ae5fp-16, 0.0, 0.0, 0.0, 0.0,
     0x1.6f41829bcaab4p-333, 0.0, 0.0, 0x1.e4ad651dceb2ep-978, 0x1.ad24ad6bec45ep-274,
     0.0, 0x1.6c627906c1c42p-994, 0.0, 0x1.709d3ee5f23b7p-117, 0.0,
     0x1.5bada6d458ed3p-700, 0.0, 0x1.6ba6a640b0b25p-575, 0.0, 0.0, 0.0,
     0x1.26d0f17adbe7p-561, 0.0, 0.0, 0x1.d2ef26f96e2d7p-374, 0.0,
     0x1.bb0e0012b0bf5p-643, 0.0, 0.0, 0x1.b3778b2dd7421p-964, 0.0,
     0x1.bfd59a833acd1p-198, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f906c742044d7p-616, 0x1.415d9831464b7p-184, 0x1.dbe23239d43f7p-27, 0.0,
     0x1.66549b8b33097p-267, 0x1.5399d04d799b5p-716, 0.0, 0x1.03a6b2a032a88p-39, 0.0,
     0x1.4d1ece8f790cdp-953, 0.0, 0x1.2d1e51ac62ab3p-380, 0x1.812accbc28fc9p-1004,
     0x1.d13ce69c64da2p-790, 0x1.91f1e44c62a2p-11, 0.0, 0.0, 0.0,
     0x1.ef9e243b8984p-438, 0x1.44c0c0dfb5866p-475, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70875e52229dp-319, 0.0, 0x1.e1275f581c6b3p-320, 0.0, 0.0,
     0x1.abc5d81554859p-90, 0.0, 0x1.0542eab28b0e6p-340, 0.0, 0x1.dda2db11aedcp-552,
     0.0, 0.0, 0x1.b0e2c119c0adcp-901, 0x1.0866613985affp-127, 0.0, 0.0, 0.0,
     0x1.f2caf337bc4dp-591, 0.0, 0.0, 0.0, 0x1.4f77cf526e4d5p-183, 0.0,
     0x1.27f59f85a6bf6p-73, 0x1.eb566e580849ep-967, 0x1.2343283c1a632p-525, 0.0,
     0x1.015f517ebdddap-676, 0x1.eeb24d7f65585p-683, 0x1.97d0f4cc012a3p-945, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68e6e8e82512ap-135,
     0x1.eb50c692a63d8p-724, 0x1.8644c764fb359p-270, 0x1.1e626a2fde819p-950, 0.0,
     0x1.c76af5bfafb22p-873, 0.0, 0x1.19173de10b2ccp-850, 0x1.37fdbb9de3fdp-647, 0.0,
     0x1.e7de236b5cbdcp-1022, 0.0, 0.0, 0.0, 0.0, 0x1.b1e40011b5dabp-801, 0.0, 0.0,
     0.0, 0x1.f4e9b51923f4ep-673, 0x1.728bb0ab60de2p-208, 0x1.6370845835d55p-600, 0.0,
     0.0, 0.0, 0.0, 0x1.fc0aa36ee2b57p-611, 0.0, 0.0, 0.0, 0.0,
     0x1.900ce8e3dc09cp-638, 0x1.ee262430dba95p-972, 0.0, 0.0, 0.0,
     0x1.7c1ed4fc3732dp-18, 0x1.dfed1f9b73949p-409, 0x1.f54222fa1092p-492,
     0x1.ea46c73fa798ep-477, 0.0, 0x1.edca18f4292fap-150, 0x1.015b0da2e7c76p-121, 0.0,
     0.0, 0.0, 0.0, 0x1.a17fa2431410bp-965, 0.0, 0x1.8b7c661c00a02p-293, 0.0,
     0x1.619ff66071cdbp-258, 0x1.28062435d04d5p-206, 0x1.b9d696c535e51p-638,
     0x1.1c8ce05f6211ap-620, 0x1.6b49f4fc4832fp-129, 0x1.03295c94f1c5dp-205,
     0x1.89039864132ffp-514, 0x1.edc58af2313f9p-79, 0x1.2b13420b6a529p-565,
     0x1.80789264d7435p-941, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c1b9cccc73bbp-662,
     0x1.a24b7c8e75abdp-405, 0x1.b44e2c2fb8865p-659, 0x1.fc315a498a6f5p-260,
     0x1.90692bb88dc28p-308, 0.0, 0x1.9b0d8479961cp-504, 0.0, 0x1.58c57f86676d7p-551,
     0x1.9e9e0a114b9f6p-765, 0.0, 0x1.69e4d7b7fb978p-521, 0.0, 0.0, 0.0,
     0x1.7648fc75e53d4p-284, 0x1.375061ded3f2p-197, 0.0, 0x1.be077d74e888ep-910, 0.0,
     0x1.5ca7c78a8c87cp-407, 0x1.f91ff9a4b343fp-662, 0.0, 0x1.aa9372c47a145p-209, 0.0,
     0x1.8b27df7186f9ap-161, 0x1.30dac6c54a5afp-649, 0x1.5c5c99f423d45p-394,
     0x1.5c212eebd734p-365, 0x1.254a5b4ca43ddp-265, 0.0, 0x1.fe75e47a6d79bp-658,
     0x1.476de671844eap-843, 0x1.fe87563b5a9fcp-737, 0.0, 0.0, 0x1.6c9c5ea2b30f8p-848,
     0x1.6e15338fa7645p-2, 0x1.caa2bbe6da6e8p-477, 0.0, 0.0, 0.0, 0.0,
     0x1.2073ac5e431dap-381, 0.0, 0x1.8653e33d9d911p-1018, 0.0, 0.0, 0.0,
     0x1.d830a2adb4556p-55, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1224e50cb5052p-703, 0.0,
     0x1.58b877e03f5c2p-663, 0.0, 0.0, 0x1.53bcf1ec875cbp-755, 0.0,
     0x1.5a469d70ff7d6p-87, 0x1.4b643b3a933a5p-830, 0.0, 0.0, 0x1.c7a5fb2a428cdp-419,
     0.0, 0x1.f9a2b1437f50fp-702, 0.0, 0.0, 0x1.303bff29e2ac6p-442,
     0x1.912f7dd6b23efp-948, 0x1.f01a4ba8489dfp-341, 0x1.c3e2a322d0e11p-468, 0.0,
     0x1.c49e8e5b5f9d7p-57, 0.0, 0x1.72d720a231214p-636, 0.0, 0x1.f8ded0cda63cbp-320,
     0x1.0236d4a1553d9p-45, 0x1.4494b0986934ep-700, 0x1.8f20320e93dfep-87,
     0x1.d8dbc8eeec7c7p-5, 0x1.b5f002cfe39d1p-482, 0.0, 0.0, 0x1.d5041eb8cc904p-324,
     0x1.4b977ddf563d7p-97, 0.0, 0.0, 0x1.0e87b701a9578p-21, 0x1.dd98823f035fap-274,
     0x1.1605a83766a7cp-640, 0x1.a5c723d14fc8p-827, 0x1.39004c47a8c32p-518,
     0x1.c51166b6b22dbp-566, 0x1.e45dfdcccbb98p-480, 0.0, 0x1.a2e832f6530ep-1020, 0.0,
     0.0, 0.0, 0x1.84a58b83ee00ap-102, 0.0, 0x1.4a509de398258p-266,
     0x1.106be127d4c41p-830, 0x1.f1567a916f5ecp-114, 0.0, 0.0, 0x1.95060a26b6b2bp-712,
     0x1.6dc2466ef9d58p-449, 0.0, 0x1.4230629bb7e4ap-99, 0.0, 0x1.49f6f4567c7b7p-457,
     0.0, 0.0, 0.0, 0.0, 0x1.2eeadd200e79ap-273, 0x1.7bfad36f5611fp-969,
     0x1.88ef28d8117a5p-109, 0x1.3fca5e42c879cp-995, 0.0, 0.0, 0.0, 0.0,
     0x1.2849ac629d10bp-148, 0x1.ddd64f0c17215p-206, 0x1.4a05c079de28cp-31,
     0x1.7c15ba4be124p-368, 0.0, 0.0, 0x1.1d56adbf14dcp-9, 0.0, 0.0, 0.0, 0.0,
     0x1.2e3a84da5a90dp-56, 0x1.c6b66741d5077p-1010, 0.0, 0x1.66feedc9ae3adp-309, 0.0,
     0.0, 0x1.bb260978dea32p-478, 0.0, 0x1.beebc4d083733p-136, 0.0, 0.0,
     0x1.5c52f15d32b32p-236, 0x1.bc56b9ad1a9b8p-161, 0.0, 0x1.86a75f3ef7bf8p-420,
     0x1.7dc2e2818f30cp-891, 0.0, 0x1.35a356c482affp-44, 0x1.b938b2c604d68p-478, 0.0,
     0x1.b278747a0beadp-522, 0x1.b198cfeac9a78p-132, 0x1.527981081604cp-750,
     0x1.0e5b5a0d771a9p-746, 0.0, 0.0, 0.0, 0x1.af349df74cfeep-1020, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ec1261cd7e8ddp-573, 0x1.325e7e8359ddep-251, 0x1.e3a5174c074cap-977,
     0x1.59504128e4591p-729, 0.0, 0.0, 0x1.2e345465e4e8bp-545, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1fe1064bdd30ap-974, 0.0, 0x1.41fd38b23182bp-270, 0x1.d26923bb20457p-535,
     0.0, 0x1.c9513b39c2892p-204, 0x1.2170874c56ae5p-698, 0.0, 0x1.529d560887c11p-707,
     0x1.52384f87a140fp-168, 0x1.c553bbf9fa709p-902, 0.0, 0x1.f2b652e0f0fe1p-952,
     0x1.36e3ca67da784p-766, 0.0, 0.0, 0.0, 0x1.03d1da362276bp-135,
     0x1.428173b7c5b93p-65, 0.0, 0x1.8944c4658e73ep-568, 0.0, 0.0, 0.0, 0.0,
     0x1.f8b62415de978p-893, 0x1.6fcb8cb1e4bd3p-359, 0x1.7d149d69ce7dfp-719,
     0x1.e1b241ed2c2acp-228, 0.0, 0x1.6b027a680f6d4p-1010, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0bdd9b64f769dp-397, 0.0, 0.0, 0x1.4b65d74c87abcp-875,
     0.0, 0x1.09004e5d0a9e6p-180, 0x1.77748f85a75d1p-202, 0x1.9c39dfe9a6b78p-117,
     0x1.145a81f250dcap-415, 0.0, 0.0, 0x1.3d29ad2e25a5ap-963, 0x1.0eded6515829fp-714,
     0x1.95d4b5673ecefp-365, 0x1.e97d41745ea65p-45, 0x1.e2c02b54dba3fp-537, 0.0, 0.0,
     0x1.1f32f61d0d64bp-639, 0x1.da30da68f58cbp-440, 0.0, 0x1.f44608d6aa309p-807,
     0x1.0df867501da33p-570, 0.0, 0.0, 0x1.e546f96dc45bcp-485, 0x1.6d6c82643870ep-465,
     0.0, 0x1.ab1483e54c6f4p-253, 0x1.9e45a921a1f6ap-209, 0.0, 0.0,
     0x1.7733ad803603fp-946, 0x1.9f47f014ed9aep-79, 0x1.28f954530106ep-91, 0.0,
     0x1.7f27292d6b7d2p-97, 0x1.f4e5c9b745e35p-937, 0.0, 0.0, 0x1.d7ed6615924cp-95,
     0x1.fa248d11cbd08p-229, 0.0, 0x1.8081fca8d19c9p-440, 0x1.863afe98d5ff2p-870, 0.0,
     0.0, 0x1.41546f66f5e38p-295, 0.0, 0x1.f6b326d270335p-324, 0x1.777affb9a574bp-710,
     0.0, 0x1.a74ff9cd07e3dp-878, 0x1.d974e7c8b956ap-640, 0x1.4f193b6e8e252p-86, 0.0,
     0.0, 0.0, 0.0, 0x1.109fd965bec3fp-261, 0.0, 0x1.c6eb1518d4801p-274,
     0x1.db84a5431dfc8p-835, 0.0, 0x1.b3ce46a3756c6p-788, 0.0, 0x1.ee414d99d7c9ap-789,
     0x1.cff585f1958b3p-516, 0.0, 0x1.cc26a7e59f829p-82, 0.0, 0x1.d419faef5d0a3p-1003,
     0.0, 0.0, 0x1.89223645c0a77p-513, 0x1.b30ccd900298bp-29, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9c4f2d4cd3cc5p-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3bc620eb051f3p-365, 0x1.03becf22d844cp-13, 0x1.6dde2590a4287p-697, 0.0, 0.0,
     0.0, 0x1.3d8825c4fbcc3p-12, 0.0, 0.0, 0x1.ef059fe2f6e1dp-453,
     0x1.af8a8d653a2eep-923, 0x1.81e58b7cda418p-54, 0x1.f2587c18d5d2dp-142,
     0x1.49b688ed474ap-1021, 0x1.7f544de3d6236p-633, 0x1.a43c9a07bc29cp-932,
     0x1.972aa8cf702eep-592, 0.0, 0x1.38e17a716c24p-302, 0x1.7ced060dacfcep-782,
     0x1.d0d2c7b2494d6p-1007, 0x1.8bba6ca69634ap-283, 0.0, 0x1.a01c191b45f05p-681,
     0.0, 0x1.7638b58217633p-667, 0x1.03e542d2dc098p-259, 0x1.1b989f41ea302p-46,
     0x1.ed2248e688124p-398, 0x1.f7cef67501fb2p-351, 0x1.b990a7111a285p-963,
     0x1.6c275d9629a9ep-825, 0x1.1880b4ff10ab6p-858, 0.0, 0.0, 0.0, 0.0,
     0x1.c80a2ae163c63p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97ffc0711b7d6p-25,
     0x1.b4c4fe2849327p-133, 0.0, 0x1.1b92d6055df49p-609, 0x1.b6ab7e87af7b6p-92, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4c7ac45b665dbp-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b69af3668a045p-893, 0.0, 0.0, 0x1.11f95a30a94aep-833, 0.0,
     0.0, 0x1.777534af17c82p-478, 0.0, 0x1.8a30faca75889p-64, 0.0,
     0x1.0e7a218f8dadcp-778, 0.0, 0x1.e51d086f459aep-672, 0x1.873ece83366f4p-1004,
     0x1.6f4cbb45fda94p-597, 0x1.76765f6469b3dp-56, 0.0, 0x1.0ca622205eap-893,
     0x1.461e62bd619a8p-68, 0.0, 0.0, 0.0, 0.0, 0x1.bc0f21c85cb2bp-565, 0.0,
     0x1.30ef2bbda14dp-917, 0x1.353e5c741315ep-201, 0x1.736afa00249a4p-220,
     0x1.6e30a416fa825p-969, 0x1.442f8ed43c7fdp-449, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.caf660bb751cap-29, 0x1.f1bb7dcf2cd0dp-53, 0.0,
     0x1.a6b1c3326236fp-730, 0.0, 0.0, 0.0, 0.0, 0x1.46de41951c0b5p-509, 0.0, 0.0,
     0.0, 0x1.06b35aa757723p-169, 0x1.5f7bcc05f5f9cp-757, 0x1.34ac0f267788ap-383, 0.0,
     0.0, 0x1.12963d0531c3ep-517, 0.0, 0.0, 0.0, 0.0, 0x1.634f373d7a0aap-902, 0.0,
     0.0, 0x1.77ef5d80bc6c5p-380, 0.0, 0.0, 0.0, 0x1.3c4c06f8a1c45p-200, 0.0,
     0x1.4c5316c67ffafp-620, 0x1.e635c82426861p-177, 0.0, 0.0, 0x1.9f6135bb02985p-265,
     0x1.a3ef5396c34e3p-998, 0.0, 0.0, 0x1.3368a7c4d1f02p-801, 0.0,
     0x1.a8bdbc97e802fp-1001, 0.0, 0x1.f636463f14e7ep-947, 0.0, 0x1.e2d6f716dd052p-7,
     0.0, 0x1.a0174b427a907p-320, 0x1.d096a868ba308p-121, 0x1.5a2946d9aac17p-730, 0.0,
     0.0, 0.0, 0.0, 0x1.62859cb8a19c9p-1016, 0x1.170778249fb59p-166,
     0x1.f813593a16eadp-493, 0x1.989f31079bacep-158, 0.0, 0.0, 0x1.5f7879ce0cd41p-588,
     0x1.ec6593f058a02p-586, 0x1.de8fb2a56a7dfp-181, 0x1.b3bb6948a10f3p-413, 0.0,
     0x1.d8481191851a8p-109, 0.0, 0x1.d835b5c752db3p-78, 0.0, 0x1.bb26a84e29626p-411,
     0.0, 0x1.57e8310af9d12p-397, 0.0, 0.0, 0.0, 0x1.f436d4056ecfdp-224, 0.0, 0.0,
     0x1.fa39939e61275p-560, 0x1.5c2897ede3befp-943, 0x1.e649e9b6b876ap-597, 0.0,
     0x1.a37360b0605d1p-900, 0x1.348bd14aa75e2p-494, 0.0, 0.0, 0x1.c43ee65799142p-747,
     0x1.79bc62fc47f72p-850, 0x1.8b16e74fe690cp-362, 0x1.8b18bc07409b9p-90,
     0x1.dbd694525d5f8p-450, 0x1.47f1680a81b9bp-486, 0.0, 0x1.ad2d1d598e7a5p-589,
     0x1.04ba578c3add2p-135, 0x1.c336e11786c8dp-478, 0.0, 0.0, 0x1.9a387558eaae2p-240,
     0.0, 0.0, 0x1.44b85fdcc17c9p-589, 0.0, 0x1.b38f550d17b12p-67,
     0x1.1e678f561c14ap-632, 0x1.f463933ba0184p-794, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d0f1a56a9facp-906, 0.0, 0.0, 0x1.b7631acfcdf64p-627, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1001]  = {
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1)
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
            int32_t tmp1;
            double tmp2;
            double tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_ldexpd1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_ldexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ldexpd1_purecfma bench acc %la\n", global_bench_acc);
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
