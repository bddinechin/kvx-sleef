/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanf1_u35purecfma.c --function \
 *     Sleef_finz_atanf1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary32 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <inttypes.h>


volatile float external_bench_wrapper_output_table[1001];
static const float external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.f96a72p-118f, 0.0f, 0x1.1b96eap-107f, 0x1.f61bbap-104f, 0x1.15bde8p-74f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d72b3cp-90f, 0x1.148674p-74f,
     0x1.34f736p-115f, 0x1.01441ep-85f, 0x1.60426p-102f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.08afap-48f, 0x1.39dcaap-28f, 0x1.405e28p-53f,
     0x1.475334p-86f, 0.0f, 0x1.a18e9ap-74f, 0.0f, 0x1.05d5f8p-34f, 0x1.3fefcap-78f,
     0x1.667faep-102f, 0.0f, 0x1.0fb1c4p-73f, 0x1.945ef4p-96f, 0x1.23af0ep-68f, 0.0f,
     0.0f, 0x1.789a3ep-37f, 0.0f, 0x1.0669c6p-68f, 0x1.4e5ef8p-16f, 0x1.c12fdep-76f,
     0.0f, 0.0f, 0x1.0f40aap-86f, 0x1.1245bcp-110f, 0x1.11b37cp-106f, 0.0f,
     0x1.fe83bp-19f, 0x1.1cf6ep-122f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.507ab8p-11f, 0.0f,
     0x1.534998p-102f, 0x1.b9454p-102f, 0.0f, 0x1.a2d492p-27f, 0x1.135f22p-13f,
     0x1.5fab88p-36f, 0x1.8ba846p-112f, 0.0f, 0x1.8c486ap-90f, 0.0f, 0.0f, 0.0f,
     0x1.fdba06p-27f, 0.0f, 0x1.eccb18p-70f, 0.0f, 0.0f, 0x1.a09e0ap-43f,
     0x1.60c67p-17f, 0.0f, 0x1.9812c6p-45f, 0x1.81c118p-126f, 0.0f, 0.0f,
     0x1.3aa482p-79f, 0.0f, 0.0f, 0x1.c880a2p-27f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6f5156p-19f, 0.0f, 0.0f, 0x1.f55c16p-14f, 0x1.569674p-16f, 0.0f,
     0x1.5e0ca8p-28f, 0.0f, 0x1.c999e4p-5f, 0.0f, 0x1.75114ep-111f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.47644p-37f, 0x1.d1f02p-5f, 0.0f, 0.0f, 0.0f,
     0x1.f81af8p-119f, 0x1.fe880cp-54f, 0x1.403a02p-49f, 0.0f, 0x1.8d6218p-125f, 0.0f,
     0x1.25924ap-123f, 0x1.906fdp-68f, 0x1.86831ap-97f, 0.0f, 0x1.07296cp-57f,
     0x1.4deadap-90f, 0.0f, 0.0f, 0x1.51b2ep-53f, 0.0f, 0.0f, 0x1.95a4eap-72f, 0.0f,
     0.0f, 0x1.4853d4p-38f, 0x1.39cf9p-75f, 0x1.3eb066p-100f, 0x1.91febap-117f,
     0x1.d92212p-37f, 0x1.54bc2p-65f, 0x1.e3dcc4p-40f, 0.0f, 0x1.2ce72p-3f,
     0x1.e327bep-66f, 0.0f, 0x1.36c002p-21f, 0x1.fcb8bep-115f, 0.0f, 0x1.b2ecdcp-78f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.9bbfcp-29f, 0.0f, 0x1.a2137ap-60f, 0.0f, 0.0f, 0.0f,
     0x1.ce0336p-26f, 0.0f, 0x1.a9df0ap-84f, 0.0f, 0.0f, 0x1.a03c98p-17f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.6366f2p-68f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.d244acp-120f,
     0x1.9c50e8p-59f, 0.0f, 0.0f, 0x1.9a91f8p-60f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.44dd36p-108f, 0x1.24be16p-126f, 0x1.29e974p-77f, 0x1.721e4cp-34f,
     0x1.db926ap-119f, 0x1.a8d0c8p-2f, 0x1.2b4ebcp-74f, 0.0f, 0.0f, 0.0f,
     0x1.52a0a8p-105f, 0x1.b936a2p-16f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.00c96p-114f, 0.0f,
     0.0f, 0x1.a8f63ap-64f, 0.0f, 0.0f, 0x1.05e13ap-102f, 0.0f, 0.0f, 0.0f,
     0x1.ba556cp-107f, 0x1.f8b4c8p-31f, 0x1.9eb852p-98f, 0x1.53176ap-115f,
     0x1.a7d20cp-103f, 0x1.9ec632p-126f, 0x1.0eaa94p-47f, 0x1.f77458p-13f, 0.0f, 0.0f,
     0x1.e723dcp-45f, 0.0f, 0x1.bc4dbcp-73f, 0.0f, 0.0f, 0x1.35c3bep-63f, 0.0f,
     0x1.1b121p-41f, 0.0f, 0.0f, 0x1.b4af6cp-119f, 0.0f, 0x1.ba985cp-33f, 0.0f,
     0x1.e83c1p-32f, 0.0f, 0x1.7b0f68p-40f, 0x1.126c64p-91f, 0.0f, 0.0f,
     0x1.7693a8p-33f, 0x1.5e3478p-122f, 0.0f, 0.0f, 0.0f, 0x1.d377eap-16f, 0.0f, 0.0f,
     0x1.78513cp-116f, 0x1.c57952p-66f, 0.0f, 0x1.1bb06cp-108f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3840aap-40f, 0x1.e59dc4p-110f,
     0x1.b7fbfcp-104f, 0x1.1224e6p-22f, 0.0f, 0.0f, 0.0f, 0x1.27f9ap-69f,
     0x1.6adb2ap-117f, 0x1.ac14cp-105f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.60135ap-32f,
     0.0f, 0x1.a8a0bep-5f, 0x1.64697p-46f, 0.0f, 0.0f, 0x1.620b1ap-22f,
     0x1.7cc8e2p-48f, 0.0f, 0.0f, 0x1.5d5398p-111f, 0.0f, 0x1.16c6ap-113f,
     0x1.8d252p-57f, 0.0f, 0x1.0b3478p-44f, 0x1.46b6bep-1f, 0.0f, 0x1.bf9afep-73f,
     0x1.90794cp-14f, 0.0f, 0x1.dda08ap-65f, 0x1.38e3e8p-57f, 0.0f, 0x1.bb2bf2p-30f,
     0x1.9eb3d2p-72f, 0x1.c06624p-87f, 0x1.8db718p-69f, 0.0f, 0x1.cd507cp-115f, 0.0f,
     0x1.d8dc98p-125f, 0.0f, 0.0f, 0.0f, 0x1.980202p-88f, 0x1.13ae9p-111f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.6797c8p-30f, 0.0f, 0.0f, 0.0f, 0x1.4257aep-2f, 0.0f,
     0x1.7fff16p-66f, 0x1.0f9988p-24f, 0x1.9c2ba6p-35f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ab9144p-7f, 0.0f, 0x1.1fefb4p-58f, 0x1.c2527p-17f, 0x1.686266p-104f, 0.0f,
     0x1.44c3c8p-111f, 0.0f, 0.0f, 0x1.d9bedcp-71f, 0.0f, 0x1.5ed99p-57f,
     0x1.3448ep-91f, 0x1.a14636p-107f, 0.0f, 0x1.d7c57ep-19f, 0.0f, 0.0f, 0.0f,
     0x1.fe1b8p-55f, 0x1.5ea704p-49f, 0.0f, 0.0f, 0x1.1fade6p-38f, 0.0f, 0.0f,
     0x1.fe9f92p-78f, 0x1.c502d6p-28f, 0.0f, 0.0f, 0.0f, 0x1.94ebfcp-44f,
     0x1.b3a0c4p-106f, 0x1.0ec7d8p-124f, 0x1.468c94p-63f, 0.0f, 0x1.9c0d54p-99f, 0.0f,
     0.0f, 0x1.abd1acp-86f, 0x1.b182b4p-8f, 0.0f, 0x1p0f, 0.0f, 0.0f, 0x1.adde6cp-63f,
     0x1.624448p-37f, 0.0f, 0.0f, 0x1.d7233ap-36f, 0x1.b2a936p-64f, 0.0f,
     0x1.dd7078p-31f, 0x1.498b54p-5f, 0x1.5d4bf6p-118f, 0x1.32968ep-33f,
     0x1.12704cp-126f, 0x1.e9a586p-97f, 0x1.d914b2p-2f, 0.0f, 0x1.13e4c2p-80f,
     0x1.cfa16cp-22f, 0x1.57d01cp-63f, 0x1.353fb8p-49f, 0.0f, 0x1.1f44b4p-19f,
     0x1.b8926cp-12f, 0.0f, 0x1.73e202p-59f, 0x1.bb383ap-43f, 0.0f, 0.0f, 0.0f,
     0x1.0ced06p-74f, 0x1.6cc8fcp-57f, 0x1.eae0dep-12f, 0x1.111becp-83f,
     0x1.580524p-64f, 0x1.28ab7p-40f, 0.0f, 0x1.879868p-24f, 0x1.d7290cp-69f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.ce0e9ep-68f, 0.0f, 0x1.1b87a6p-98f, 0.0f, 0x1.f1f2dep-110f,
     0.0f, 0.0f, 0x1.d777b8p-56f, 0x1.162c8ep-73f, 0x1.2987ap-13f, 0.0f,
     0x1.795aaep-60f, 0.0f, 0.0f, 0x1.313194p-12f, 0.0f, 0.0f, 0x1.7a3b24p-95f, 0.0f,
     0x1.0e861p-30f, 0x1.27d3eap-52f, 0.0f, 0.0f, 0x1.cdcbbcp-71f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.f3c0bep-59f, 0x1.708764p-35f, 0.0f, 0x1.c21b5ep-103f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.60d6d2p-44f, 0.0f, 0x1.40ed42p-24f, 0.0f, 0x1.b148cap-26f,
     0x1.a12e36p-124f, 0x1.9a6368p-83f, 0x1.065cd8p-100f, 0.0f, 0x1.3a02c6p-99f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.cdbf1cp-109f, 0x1.11f2cep-77f, 0x1.b48fd8p-16f,
     0x1.411b16p-43f, 0.0f, 0.0f, 0x1.2cdbaep-24f, 0.0f, 0.0f, 0.0f, 0x1.eee178p-5f,
     0x1.e133ccp-48f, 0.0f, 0x1.93f02cp-81f, 0.0f, 0.0f, 0x1.282406p-115f,
     0x1.0f8672p-19f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2157d4p-105f, 0.0f,
     0x1.e7ddbp-72f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.3c1304p-78f, 0x1.939b3ap-15f,
     0x1.3697dcp-59f, 0.0f, 0.0f, 0x1.3546a2p-86f, 0.0f, 0.0f, 0x1.6ea3b8p-81f,
     0x1.a01522p-108f, 0x1.9355f6p-39f, 0.0f, 0.0f, 0x1.a6686p-124f, 0.0f,
     0x1.c9c78p-64f, 0.0f, 0x1.1a2ecap-93f, 0x1.32f0a6p-17f, 0.0f, 0x1.bac504p-9f,
     0x1.96cd34p-113f, 0x1.8d6f92p-66f, 0x1.76b08ap-111f, 0.0f, 0x1.8a6d58p-90f,
     0x1.0c04dap-37f, 0x1.ccb8bap-27f, 0.0f, 0.0f, 0.0f, 0x1.9657dap-85f,
     0x1.3eba4cp-123f, 0x1.9de002p-57f, 0x1.d5f976p-20f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.033e98p-107f, 0x1.490b22p-73f, 0x1.73936cp-42f, 0.0f, 0x1.3946b8p-112f, 0.0f,
     0x1.7cabeep-5f, 0.0f, 0.0f, 0.0f, 0x1.08122cp-23f, 0.0f, 0.0f, 0.0f,
     0x1.6101e6p-126f, 0.0f, 0x1.b26c7ap-48f, 0x1.7217fap-69f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.1b6214p-107f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.49feeap-86f, 0.0f,
     0x1.1277p-3f, 0x1.f2f6dep-96f, 0x1.c66e7p-99f, 0.0f, 0x1.aee922p-71f,
     0x1.3882ep-112f, 0x1.139f52p-33f, 0x1.848834p-30f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.8b2c88p-84f, 0x1.0bd7c4p-91f, 0x1.36ceeep-101f, 0.0f, 0x1.2d9eaep-76f, 0.0f,
     0x1.2b4b94p-77f, 0x1.df675cp-53f, 0.0f, 0.0f, 0.0f, 0x1.d63c1ep-73f,
     0x1.1d50b6p-100f, 0x1.cbec74p-23f, 0.0f, 0.0f, 0.0f, 0x1.6455b8p-63f, 0.0f,
     0x1.33ce7ep-126f, 0.0f, 0x1.5f319ep-74f, 0x1.e469b8p-39f, 0.0f, 0x1.6a03dep-78f,
     0x1.45c33p-8f, 0.0f, 0x1.608fc8p-83f, 0x1.f70c5ap-81f, 0.0f, 0x1.72807ap-49f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.0d4eaap-76f, 0x1.96bd94p-67f, 0x1.5b8232p-20f,
     0x1.853e3ep-97f, 0.0f, 0x1.1827c4p-114f, 0x1.092b5cp-9f, 0.0f, 0x1.028cd6p-44f,
     0x1.b04176p-53f, 0x1.19b476p-62f, 0x1.7158a6p-60f, 0.0f, 0x1.40a81cp-74f, 0.0f,
     0x1.f2ed6p-111f, 0.0f, 0x1.e0468cp-74f, 0.0f, 0x1.a92546p-97f, 0.0f, 0.0f,
     0x1.5287p-36f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.31d974p-46f,
     0x1.4b23dap-77f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.706db8p-65f, 0x1.92fc1ep-76f,
     0x1.d6cd4ap-103f, 0x1.c59aa6p-112f, 0.0f, 0.0f, 0x1.3d52f4p-21f, 0.0f, 0.0f,
     0.0f, 0x1.cda55cp-10f, 0.0f, 0x1.6eeffep-122f, 0x1.010eecp-90f, 0x1.38d24p-65f,
     0.0f, 0x1.322a1ep-22f, 0.0f, 0x1.7b452cp-55f, 0x1.d55814p-66f, 0x1.31b536p-18f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.f9d356p-91f, 0x1.3276d8p-3f, 0.0f, 0.0f,
     0x1.cead1p-126f, 0.0f, 0.0f, 0.0f, 0x1.968c4ep-19f, 0.0f, 0.0f, 0x1.2aa4fep-80f,
     0x1p0f, 0.0f, 0x1.68a5b8p-56f, 0x1.a39618p-110f, 0x1.5b8c88p-25f,
     0x1.8ee146p-121f, 0.0f, 0x1.4f45aep-51f, 0x1.5b922cp-29f, 0.0f, 0x1.507728p-8f,
     0.0f, 0.0f, 0x1.2ac586p-33f, 0.0f, 0.0f, 0x1.acaa98p-76f, 0.0f, 0x1.ffb216p-100f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.81a796p-3f, 0x1.68a06p-63f, 0x1.97f778p-44f, 0.0f,
     0.0f, 0x1.0f489ep-89f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.dc5fc8p-76f, 0.0f, 0.0f,
     0x1.5d95b4p-5f, 0.0f, 0x1.9ab2d6p-110f, 0.0f, 0.0f, 0x1.25ac08p-42f,
     0x1.9706c4p-20f, 0x1.8785aep-75f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.24ff76p-85f,
     0x1.337992p-18f, 0x1.4fe776p-77f, 0x1.1cf144p-6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.7c2de8p-14f, 0.0f, 0.0f, 0.0f, 0x1.408428p-88f, 0.0f, 0x1.52f8bp-112f,
     0x1.c1718p-28f, 0x1.3086ep-59f, 0x1.9b8782p-108f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.f56b4p-34f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.1cc28p-90f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.0be6cp-64f, 0x1.1c9fd6p-57f, 0.0f, 0x1.519a68p-68f,
     0x1.743694p-37f, 0.0f, 0x1.95bafcp-96f, 0.0f, 0x1.ead2e4p-73f, 0x1.83b70cp-39f,
     0.0f, 0.0f, 0x1.8e8612p-59f, 0.0f, 0x1.6dc0dp-28f, 0.0f, 0x1.d77f82p-70f,
     0x1.3e26d4p-104f, 0.0f, 0x1.1853bap-22f, 0.0f, 0x1.b5622ap-41f, 0x1.fedde8p-110f,
     0x1.e071p-65f, 0x1.05ef62p-56f, 0.0f, 0x1.d954e6p-13f, 0x1.04e9ecp-81f,
     0x1.6d552ap-87f, 0x1.45c5b4p-34f, 0x1.89fb86p-55f, 0x1.a7fcd4p-36f,
     0x1.0251dep-6f, 0.0f, 0x1.a9f7ap-114f, 0x1.8fc3a6p-97f, 0x1.82fc18p-65f,
     0x1.5a4462p-85f, 0x1.d477aep-3f, 0x1.3a0abap-21f, 0x1.5650a2p-110f,
     0x1.bec2e8p-22f, 0.0f, 0x1.d0b98ep-60f, 0x1.812fecp-50f, 0x1.09648p-60f, 0.0f,
     0x1.9031aap-1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.6b4c4ap-115f, 0.0f,
     0x1.3cef96p-20f, 0x1.8b4218p-37f, 0.0f, 0.0f, 0x1.37cec8p-14f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.811cap-97f, 0.0f, 0x1.d7f8d4p-71f, 0x1.5a7732p-6f, 0.0f,
     0x1.6fb3d4p-77f, 0.0f, 0x1.52c2ecp-14f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.11543ep-84f,
     0.0f, 0x1.0bcca6p-39f, 0.0f, 0x1p0f, 0.0f, 0x1.71a842p-126f, 0.0f, 0.0f, 0.0f,
     0x1.c20c8ep-82f, 0x1.a17b8p-71f, 0.0f, 0x1.0213f2p-123f, 0.0f, 0x1.80ec0ep-106f,
     0x1.5405dep-59f, 0x1.dbc41ap-79f, 0.0f, 0x1.08a5f2p-83f, 0.0f, 0.0f,
     0x1.885d34p-97f, 0x1.1da71ap-41f, 0.0f, 0.0f, 0x1.19fb36p-72f, 0.0f, 0.0f,
     0x1.c80fb2p-19f, 0x1.183cfap-47f, 0x1.ee54cep-4f, 0x1.6169bp-71f,
     0x1.327b44p-104f, 0x1.a65228p-17f, 0x1.9203b6p-95f, 0x1.6ac3e6p-26f,
     0x1.cbaf5ap-35f, 0x1.28e7d6p-3f, 0x1.2892a4p-70f, 0.0f, 0x1.d4d63ap-81f, 0.0f,
     0x1.d47854p-9f, 0x1.abfcfep-44f, 0.0f, 0x1.a16a9p-29f, 0x1.a2a24cp-36f, 0.0f,
     0x1.46ad94p-31f, 0x1.23e43ap-76f, 0x1.996898p-5f, 0.0f, 0x1.be913cp-126f,
     0x1.16408ap-35f, 0x1.dcef84p-50f, 0x1.ab996ep-61f, 0.0f, 0x1.948a38p-122f, 0.0f,
     0.0f, 0x1.8198cap-68f, 0.0f, 0.0f, 0.0f, 0x1.cac394p-58f, 0x1.d43c58p-14f,
     0x1.7c6a0ap-75f, 0x1.9993e4p-39f, 0x1.154f42p-1f, 0x1.a064cp-51f,
     0x1.060524p-47f, 0.0f, 0.0f, 0x1.33eb76p-45f, 0x1.797f1ap-2f, 0x1.c73c3cp-46f,
     0x1.56669cp-98f, 0x1.f66594p-91f, 0.0f, 0x1.f6b56ap-35f, 0.0f, 0x1.3e3b6ap-57f,
     0x1.ebde24p-92f, 0x1.599cf8p-42f, 0x1.57948p-27f, 0.0f, 0x1.7efbe4p-6f,
     0x1.ed7312p-55f, 0.0f, 0x1.6ff1cep-70f, 0.0f, 0x1.3bcdaep-12f, 0.0f,
     0x1.8ed724p-58f, 0x1.c0f724p-15f, 0x1.39b854p-2f, 0x1.52a402p-7f,
     0x1.22d9aap-77f, 0x1.1f47eep-21f, 0.0f, 0x1.e3b904p-17f, 0.0f, 0x1.84f3b4p-4f,
     0.0f, 0x1.9824f2p-49f, 0x1.44f914p-77f, 0.0f, 0x1.3a5466p-98f, 0.0f,
     0x1.2f9332p-17f, 0x1.d57054p-21f, 0x1.80c208p-23f, 0x1.f9e4bp-70f, 0.0f, 0.0f,
     0x1.6f3d4cp-44f, 0.0f, 0x1.af268ep-121f, 0x1.7e3cfp-32f, 0x1.a3955p-114f,
     0x1.4846bep-42f, 0.0f, 0.0f, 0x1.6a53bep-107f, 0.0f, 0x1.5a2b4ap-82f, 0.0f,
     0x1.68c734p-43f, 0x1.2ccea8p-87f, 0.0f, 0.0f, 0x1.4e626p-10f, 0x1.3e6318p-101f,
     0x1.cefb08p-100f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.a4e3cp-3f, 0.0f, 0x1.215036p-18f,
     0.0f, 0x1.5e4702p-31f, 0x1.45b788p-116f
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    float global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0f;
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
        float bench_acc;
        int32_t i;
        __m128 carg;
        __m128 carg1;
        __m128 carg2;
        float tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0f;

        for (;(i < INT32_C(1001));){
            float tmp0;
            float tmp1;
            __m128 carg;
            __m128 carg1;
            __m128 carg2;
            float tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_atanf1_u35purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            carg = _mm_set_ss(bench_acc);
            carg1 = _mm_set_ss(tmp1);
            carg2 = _mm_add_ss(carg, carg1);
            tmp2 = _mm_cvtss_f32(carg2);
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        carg = _mm_set_ss(global_bench_acc);
        carg1 = _mm_set_ss(bench_acc);
        carg2 = _mm_add_ss(carg, carg1);
        tmp0 = _mm_cvtss_f32(carg2);
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
    printf("Sleef_finz_atanf1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanf1_u35purecfma bench acc %a\n", global_bench_acc);
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
