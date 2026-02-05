/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosf1_u10purecfma.c --function Sleef_cosf1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary32 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0x1.c5905ep-121f, 0x1.6a4922p-1f, 0x1.5ccfb8p-90f, 0.0f, 0x1.ed2f48p-31f, 0.0f,
     0.0f, 0x1.ae0a92p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.2e725ep-80f, 0x1.c6491p-39f, 0.0f, 0x1.103b2p-62f, 0.0f, 0.0f,
     0x1.11b336p-35f, 0x1.cc41d2p-95f, 0.0f, 0.0f, 0x1.90b5b4p-105f, 0.0f,
     0x1.1a8fd6p-32f, 0.0f, 0x1.4f566ap-26f, 0x1.b2d54ep-26f, 0.0f, 0.0f,
     0x1.f5eb2ep-39f, 0.0f, 0x1.8f4aa6p-32f, 0.0f, 0x1.5e8652p-80f, 0.0f,
     0x1.7dab16p-35f, 0.0f, 0x1.30ff16p-102f, 0x1.279a52p-20f, 0.0f, 0.0f,
     0x1.24bfdp-22f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.66793ep-109f, 0.0f,
     0x1.bc17c4p-105f, 0.0f, 0x1.08f0cp-59f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.85b48ep-65f,
     0x1.f8a3b6p-106f, 0.0f, 0x1.66324p-74f, 0.0f, 0x1.a24dbap-62f, 0.0f,
     0x1.99ce88p-85f, 0x1p0f, 0.0f, 0.0f, 0x1.9d8acap-125f, 0.0f, 0x1.9c31fep-2f,
     0x1.e3b8ap-2f, 0x1.556918p-46f, 0.0f, 0x1.8d32f6p-26f, 0x1.722b12p-42f, 0.0f,
     0x1.b91558p-102f, 0.0f, 0x1.210676p-104f, 0.0f, 0.0f, 0x1.746712p-77f, 0.0f,
     0x1.2dee78p-85f, 0.0f, 0x1.6c5652p-13f, 0x1.b46c1p-34f, 0.0f, 0x1.1367f6p-75f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.72bfbcp-60f, 0.0f, 0.0f, 0x1.181998p-59f,
     0x1.ef1006p-83f, 0x1.be165cp-52f, 0.0f, 0x1.04fbb6p-85f, 0x1.0e6784p-39f,
     0x1.ba7b0ep-103f, 0.0f, 0x1.e4c8c2p-27f, 0.0f, 0x1.e58124p-38f, 0x1.2cb216p-46f,
     0x1.5ee2f8p-32f, 0x1.1bd73cp-53f, 0.0f, 0x1.4b4baap-26f, 0x1.039f0cp-19f, 0.0f,
     0x1.7ad9dap-35f, 0.0f, 0.0f, 0x1.cfbdf6p-122f, 0.0f, 0x1.a47a36p-75f, 0.0f,
     0x1.a8ac76p-34f, 0.0f, 0.0f, 0x1.eaddacp-98f, 0x1.4ac0bep-118f, 0x1.bdcc22p-32f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.75d59ap-44f, 0.0f, 0.0f,
     0.0f, 0x1.17cd0ep-71f, 0x1.08fce4p-22f, 0x1.341854p-32f, 0.0f, 0.0f, 0.0f,
     0x1.adaae2p-28f, 0.0f, 0x1.d6b5f8p-31f, 0x1.83bca2p-38f, 0.0f, 0.0f, 0.0f,
     0x1.0b1896p-94f, 0x1.74872ep-29f, 0x1.080a1cp-94f, 0x1.bbdfbcp-27f,
     0x1.bd9d3p-63f, 0.0f, 0.0f, 0.0f, 0x1.cfc35cp-95f, 0.0f, 0.0f, 0x1.2a17f8p-118f,
     0.0f, 0x1.fcf72p-67f, 0.0f, 0.0f, 0x1.259d12p-27f, 0x1.3449e2p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.d5846cp-98f, 0x1.24ab3p-2f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.0c0bep-4f, 0x1.29a73p-36f, 0x1.23a3d8p-50f, 0x1.32cc6cp-60f, 0.0f, 0.0f,
     0.0f, 0x1.3db788p-10f, 0x1.0885cap-125f, 0x1.31231p-100f, 0.0f, 0.0f,
     0x1.bd2abap-33f, 0x1.79d5fep-109f, 0x1.feea2cp-36f, 0.0f, 0x1.c3364cp-61f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.bc3588p-74f, 0.0f, 0x1.7fb2e4p-59f,
     0.0f, 0x1.897c54p-87f, 0x1.0c7f02p-106f, 0x1.7a6b94p-124f, 0.0f, 0.0f,
     0x1.e4ebep-35f, 0x1.52c176p-7f, 0x1.05dbf4p-39f, 0x1.0add24p-56f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.2deaeep-47f, 0.0f, 0x1.47ccd6p-58f, 0x1.c16eacp-16f,
     0x1.d5ec46p-56f, 0.0f, 0x1.a403d6p-82f, 0x1.68bca2p-68f, 0x1.89cd6ap-88f, 0.0f,
     0x1.7e138p-33f, 0x1.925796p-66f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c351e8p-125f,
     0x1.0784f6p-115f, 0x1.310cecp-52f, 0.0f, 0x1.1cab06p-33f, 0.0f, 0x1.ec6d98p-36f,
     0.0f, 0x1.2a201ep-76f, 0.0f, 0.0f, 0.0f, 0x1.bef1b4p-106f, 0.0f, 0x1.02de84p-3f,
     0x1.af50cp-14f, 0.0f, 0x1.b7bca2p-11f, 0x1.d76fa2p-11f, 0.0f, 0x1.7932bep-29f,
     0x1.f9b9c8p-115f, 0x1.6c12cap-25f, 0x1.faa676p-101f, 0x1.6954c6p-119f, 0.0f,
     0.0f, 0x1.d628b8p-102f, 0.0f, 0x1.6fe422p-32f, 0x1.7e36bp-14f, 0.0f, 0.0f,
     0x1.915ac8p-28f, 0x1.ff60e6p-54f, 0.0f, 0.0f, 0.0f, 0x1.977e42p-28f, 0.0f, 0.0f,
     0x1.e6d69p-63f, 0x1.e0bf56p-22f, 0x1.38e692p-37f, 0.0f, 0x1.0c13d6p-15f,
     0x1.cb0af4p-43f, 0.0f, 0.0f, 0x1.19353p-5f, 0.0f, 0.0f, 0.0f, 0x1.26b15ep-48f,
     0x1.8a073cp-76f, 0x1.982b82p-30f, 0.0f, 0x1.c9df44p-19f, 0x1.1862bap-28f,
     0x1.a018cap-56f, 0x1.04d794p-8f, 0.0f, 0x1.1d5018p-86f, 0x1.8c8bd2p-18f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.421598p-23f, 0x1.9e3108p-33f, 0x1.d33104p-95f,
     0x1.f032bp-14f, 0.0f, 0.0f, 0x1.0d92ecp-91f, 0x1.6e8028p-98f, 0x1.d42dc6p-77f,
     0.0f, 0x1.4a70b2p-49f, 0x1.4cb07ep-42f, 0.0f, 0x1.f2ecp-44f, 0x1.defd5cp-25f,
     0x1.c3ad12p-78f, 0.0f, 0x1.9ef2bap-105f, 0.0f, 0x1.0946b8p-95f, 0x1.3b1de4p-107f,
     0x1p0f, 0x1.5d9112p-91f, 0.0f, 0x1.ce9f68p-10f, 0x1.d6f9bcp-18f, 0x1.78ae2ep-48f,
     0x1.ffda74p-103f, 0.0f, 0x1.9c4be6p-106f, 0x1.8df7a2p-111f, 0x1.7d55cep-86f,
     0.0f, 0x1.f8b13cp-61f, 0x1.4c1664p-1f, 0x1.557904p-105f, 0x1.cf5ep-30f, 0.0f,
     0x1.75f6d6p-94f, 0x1.f9612ep-9f, 0x1.62c612p-43f, 0.0f, 0.0f, 0x1.1f02d6p-43f,
     0x1.be461ep-40f, 0x1.1861eap-74f, 0x1.e1dac8p-68f, 0.0f, 0x1.3ace38p-90f, 0.0f,
     0.0f, 0.0f, 0x1.a1123cp-98f, 0.0f, 0x1.7ee8ap-112f, 0x1p0f, 0x1.f3a9b2p-80f,
     0x1.4590c4p-75f, 0.0f, 0x1.b72112p-55f, 0.0f, 0.0f, 0.0f, 0x1.cc4e5ap-50f,
     0x1.c148d2p-18f, 0x1.bd859p-84f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.4b3dbap-15f,
     0x1.fe8c32p-126f, 0x1.0d84dp-52f, 0.0f, 0x1.bdcd9ep-25f, 0x1.d429e2p-1f, 0.0f,
     0x1.f1828ep-38f, 0x1.a4d76ap-95f, 0.0f, 0x1.63b776p-104f, 0.0f, 0x1.431d2cp-27f,
     0.0f, 0x1.a69a2p-126f, 0.0f, 0x1.21eca2p-59f, 0.0f, 0x1.4e1e68p-43f,
     0x1.abca0ep-116f, 0.0f, 0.0f, 0.0f, 0x1.a55a92p-102f, 0x1.1f9a32p-113f,
     0x1.4b2d58p-90f, 0.0f, 0.0f, 0.0f, 0x1.bc7fap-57f, 0x1.58acaap-123f, 0.0f, 0.0f,
     0.0f, 0x1.c7b34ep-34f, 0x1.9aa30cp-112f, 0.0f, 0x1.54813cp-36f, 0x1.5350bap-72f,
     0x1.b9cc9cp-68f, 0x1.038722p-58f, 0.0f, 0.0f, 0x1.545f54p-89f, 0x1.753a0cp-79f,
     0x1.fc09b6p-80f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.9d16cep-68f, 0.0f,
     0x1.57ec2cp-43f, 0x1.d4cabap-65f, 0.0f, 0.0f, 0x1.9f8bccp-69f, 0x1.c7be14p-83f,
     0x1.d9c776p-95f, 0.0f, 0.0f, 0x1.d7e47cp-106f, 0x1.a26caap-121f, 0x1.a29c28p-23f,
     0x1.a08daap-105f, 0x1.21f252p-2f, 0x1.d0f03cp-53f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.ecc338p-51f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.2640c4p-33f, 0.0f, 0x1.49b54ep-73f,
     0.0f, 0x1.2c6a1ap-124f, 0x1.01f172p-54f, 0.0f, 0x1.d4f9e2p-31f, 0.0f, 0.0f, 0.0f,
     0x1.b93c3p-52f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.7f6b78p-120f, 0.0f, 0x1.3ca4eap-51f,
     0x1.62376cp-14f, 0x1.f727b8p-11f, 0x1.cd8c86p-121f, 0x1.f7031p-126f, 0.0f, 0.0f,
     0x1.635eb6p-113f, 0.0f, 0x1.1fe184p-66f, 0x1.984cc2p-113f, 0.0f,
     0x1.9a63dap-124f, 0x1.e47e5ap-73f, 0.0f, 0x1.096dfp-25f, 0.0f, 0.0f,
     0x1.9a15fp-124f, 0.0f, 0.0f, 0.0f, 0x1.0325aap-56f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.d117cap-69f, 0x1.1007eep-33f, 0x1.32f83ep-48f, 0.0f, 0.0f, 0.0f,
     0x1.0303e6p-98f, 0x1.bf92b4p-76f, 0x1.3aa19ap-72f, 0x1.c7aa5p-35f,
     0x1.73728ap-33f, 0x1p0f, 0x1.99daf6p-24f, 0x1.a21776p-8f, 0.0f, 0.0f,
     0x1.4b53b4p-121f, 0x1.924a58p-71f, 0.0f, 0x1.d707aep-1f, 0x1.deb71cp-44f, 0.0f,
     0.0f, 0x1.909464p-119f, 0.0f, 0.0f, 0.0f, 0x1.27c31ap-17f, 0.0f, 0x1.881e72p-34f,
     0.0f, 0.0f, 0x1.5aea44p-70f, 0.0f, 0x1.321ed8p-68f, 0x1.3c7f42p-118f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.aed812p-45f, 0.0f, 0x1.a39e3cp-109f,
     0.0f, 0.0f, 0x1.f96f3ep-4f, 0x1.178cb8p-79f, 0.0f, 0x1.aa116cp-58f,
     0x1.fd5fcap-23f, 0x1.b54c7ep-61f, 0.0f, 0x1.2a593p-1f, 0.0f, 0x1.d6e408p-10f,
     0x1.2f389ep-37f, 0.0f, 0.0f, 0.0f, 0x1.3969a6p-5f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9694ap-45f, 0x1.a201c2p-53f, 0x1.86ffdp-19f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.9ef2d4p-94f, 0.0f, 0x1.80f5c2p-23f, 0.0f, 0x1.ea2974p-108f, 0x1.488e38p-96f,
     0x1.62da56p-51f, 0.0f, 0x1.bdd5f2p-93f, 0x1.f3e094p-24f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.6cecbap-65f, 0.0f, 0x1.53a6dcp-97f, 0.0f, 0.0f, 0.0f, 0x1.b6160ap-97f, 0.0f,
     0.0f, 0x1.15c252p-12f, 0.0f, 0.0f, 0x1.723828p-121f, 0x1.bdf8b8p-18f,
     0x1.06738ep-56f, 0x1.7b21fap-17f, 0.0f, 0.0f, 0x1.c656fcp-27f, 0.0f,
     0x1.e25d5ap-86f, 0.0f, 0x1.48f77cp-40f, 0x1.4c8fccp-6f, 0x1.19cd08p-122f, 0.0f,
     0x1.f087aap-114f, 0x1.0ca7fep-24f, 0x1.4843dp-70f, 0x1.2c90f6p-71f, 0.0f, 0.0f,
     0x1.1d1672p-108f, 0x1.2b023cp-24f, 0x1.6c30c2p-67f, 0.0f, 0.0f, 0x1.156df8p-64f,
     0.0f, 0x1.77146ep-5f, 0.0f, 0.0f, 0.0f, 0x1.65d49p-74f, 0.0f, 0x1.ccd256p-9f,
     0x1.faf258p-15f, 0.0f, 0.0f, 0x1.65368p-95f, 0x1.8ed90ap-41f, 0x1.90d64cp-12f,
     0.0f, 0x1.f1cffap-20f, 0.0f, 0.0f, 0x1.49d06cp-101f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.cc3a9p-51f, 0x1.fd797ap-8f, 0x1.b54fbep-93f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.39d75p-49f, 0x1.641098p-88f, 0.0f, 0.0f, 0x1.ad31d4p-89f,
     0x1.ad180cp-47f, 0x1.a28546p-28f, 0x1.9632a8p-45f, 0x1.8830fcp-105f,
     0x1.60d3c6p-71f, 0x1.2c8fdcp-86f, 0.0f, 0.0f, 0x1.00afdcp-34f, 0.0f, 0.0f,
     0x1.311e58p-43f, 0.0f, 0x1.8c3546p-53f, 0x1.248282p-1f, 0x1.aec838p-116f, 0.0f,
     0x1.4b866cp-9f, 0x1.f23c2cp-100f, 0x1.df6dd6p-33f, 0x1.bfbe9cp-86f, 0.0f,
     0x1.2405b2p-15f, 0.0f, 0.0f, 0x1.844582p-98f, 0.0f, 0x1.466684p-67f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.a2e8c4p-116f, 0.0f, 0x1.de21cap-37f, 0.0f, 0x1.bd0696p-77f,
     0x1.ba46ecp-126f, 0x1.9392b2p-51f, 0x1.788004p-9f, 0.0f, 0x1.a97d5ep-73f,
     0x1.ff57bep-90f, 0.0f, 0x1.1c6b8cp-123f, 0.0f, 0x1.ce2eb6p-110f, 0x1.66cd96p-57f,
     0x1.4c71ep-69f, 0.0f, 0.0f, 0.0f, 0x1.22be4ap-13f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.734c1ap-93f, 0x1.7b3fbp-110f, 0.0f, 0x1.018c86p-39f, 0.0f, 0x1.0e87ccp-88f,
     0.0f, 0.0f, 0x1.d05c84p-43f, 0.0f, 0.0f, 0x1.d7cc7cp-86f, 0x1.0ac944p-24f,
     0x1.f65314p-110f, 0.0f, 0.0f, 0x1.1b0e4cp-3f, 0.0f, 0x1.cd077ap-67f, 0.0f,
     0x1.da4674p-71f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.455d52p-14f, 0x1.b9962ap-112f,
     0.0f, 0x1.549e52p-77f, 0.0f, 0x1.16d0c8p-82f, 0.0f, 0x1.4ad718p-78f,
     0x1.00c3dcp-78f, 0.0f, 0x1.36e984p-36f, 0x1.85b4c8p-79f, 0.0f, 0x1.e38d7p-63f,
     0x1.97416ep-113f, 0x1.f5533ap-26f, 0.0f, 0.0f, 0.0f, 0x1.c32152p-14f, 0.0f,
     0x1.fdde0ep-62f, 0.0f, 0.0f, 0.0f, 0x1.9b1c5cp-7f, 0.0f, 0.0f, 0x1.3e08bap-99f,
     0.0f, 0.0f, 0.0f, 0x1.505d76p-64f, 0x1.b7194ep-108f, 0.0f, 0x1.e74372p-18f,
     0x1.ff239ep-24f, 0x1.79ea14p-20f, 0.0f, 0.0f, 0x1.03f29ap-97f, 0x1.9113f8p-42f,
     0x1.f7c4ap-98f, 0x1.0c1482p-123f, 0.0f, 0.0f, 0x1.4c1552p-100f, 0.0f, 0.0f, 0.0f,
     0.0f, 0x1.43003cp-63f, 0x1.270f7p-90f, 0.0f, 0.0f, 0.0f, 0x1.1e7c52p-19f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.21ae92p-70f, 0x1.6203bcp-24f, 0.0f, 0x1.2b4e32p-71f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.69e722p-5f, 0.0f, 0.0f, 0x1.605d16p-20f, 0.0f, 0.0f,
     0x1.c444bep-58f, 0x1.657bd4p-106f, 0x1.f196p-46f, 0x1.2ced6cp-103f, 0.0f, 0.0f,
     0.0f, 0x1.07ee08p-89f, 0.0f, 0x1.b28abcp-105f, 0.0f, 0x1.cdad7cp-73f,
     0x1.f6b4c6p-25f, 0x1.777abcp-40f, 0x1.a310e2p-94f, 0x1.fc1768p-51f,
     0x1.93ab9ap-13f, 0x1.1d71c4p-22f, 0.0f, 0x1.496e62p-11f, 0x1.26f90ep-50f, 0.0f,
     0.0f, 0.0f, 0x1.0aa216p-27f, 0.0f, 0.0f, 0x1.9eeb5ep-12f, 0.0f, 0.0f, 0.0f,
     0x1.b5a2e4p-13f, 0x1.7dcab8p-13f, 0x1.662f1ap-104f, 0x1.7984cap-57f,
     0x1.e171bep-103f, 0x1.7a22c2p-123f, 0.0f, 0.0f, 0x1.26ed2p-109f,
     0x1.0e4264p-107f, 0.0f, 0x1.3d1c1cp-82f, 0.0f, 0.0f, 0x1.ca0a2ep-68f, 0.0f, 0.0f,
     0.0f, 0.0f, 0x1.3bc2e4p-74f, 0.0f, 0x1.1b3736p-108f, 0.0f, 0.0f, 0x1.0bedf6p-27f,
     0.0f, 0.0f, 0x1.e2e1dp-104f, 0.0f, 0.0f, 0x1.29bdeep-62f, 0x1.f3e6ccp-29f, 0.0f,
     0x1.f7a778p-54f, 0x1.0eebe6p-91f, 0x1.409a2p-50f, 0.0f, 0.0f, 0.0f, 0.0f,
     0x1.aae6ecp-106f, 0.0f, 0x1.3d5fe8p-124f, 0x1.67a18ep-22f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0.0f, 0x1.dafa64p-42f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.344cc2p-34f,
     0x1.fef0a8p-111f, 0.0f, 0x1.e4ebe4p-106f, 0x1.d22b02p-49f, 0.0f, 0x1.fcef16p-9f,
     0x1.7d3deap-116f, 0.0f, 0x1.35dbccp-74f, 0.0f, 0x1.b1c266p-26f, 0x1.2f9fd8p-35f,
     0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.0e2f6cp-78f, 0.0f, 0x1.d670aep-32f,
     0x1.f3087cp-81f, 0x1.84086ap-120f, 0x1.34a2b2p-67f, 0x1.768a9ap-16f, 0.0f,
     0x1.f569p-106f, 0.0f, 0x1.e985b6p-41f, 0.0f, 0x1.a7f4dap-100f, 0x1.963176p-126f,
     0.0f, 0.0f, 0.0f, 0x1.3dfbcap-53f, 0x1.7db1dcp-34f, 0x1.0c8eap-49f, 0.0f,
     0x1.f56906p-74f, 0.0f, 0.0f, 0x1.6935d4p-7f, 0x1.30e986p-83f, 0.0f, 0.0f, 0.0f,
     0x1.f7cfb2p-29f, 0.0f, 0x1.add5fp-28f, 0x1.bfc71p-9f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.0f, 0.0f, 0.0f, 0x1.fe0afap-21f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.8c9426p-70f, 0.0f,
     0x1.a1fee2p-70f, 0.0f, 0.0f, 0.0f, 0.0f, 0x1.c2a39p-13f, 0x1.2efe94p-22f,
     0x1.ef95ccp-72f, 0.0f, 0x1.af1276p-11f, 0x1.09267ep-112f, 0.0f, 0x1.cf710cp-9f
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
            tmp1 = Sleef_cosf1_u10purecfma(tmp0);
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
    printf("Sleef_cosf1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosf1_u10purecfma bench acc %a\n", global_bench_acc);
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
