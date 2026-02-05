/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sind2_u35kvx.c --function Sleef_finz_sind2_u35kvx \
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
     0x1.2fb193d4e4e6bp-49, 0.0, 0.0, 0x1.83347e2ac432ap-817, 0x1.1bd3898f182bfp-61,
     0x1.a148384c81c12p-942, 0x1.88df229046c9bp-718, 0x1.838c7011dfe36p-725, 0.0,
     0x1.2bf96f6316986p-701, 0.0, 0x1.ef69a1234387p-697, 0.0, 0.0, 0.0,
     0x1.76a581e112832p-553, 0.0, 0x1.70b5cde7a5ae4p-219, 0.0, 0x1.f519262d73567p-198,
     0x1.ac79852e69896p-458, 0x1.98fb294812887p-312, 0.0, 0x1.9b29ba5694df3p-425,
     0x1.52bc8d01b1694p-696, 0x1.c3cc11204dbe1p-865, 0x1.98315b0aaeae9p-836,
     0x1.f3771194c15a8p-755, 0x1.4d1bda3f49a7dp-642, 0.0, 0x1.6129e9f4aac5p-688,
     0x1.050eb59a70413p-45, 0x1.667f7111556f5p-392, 0x1.a34975bef965p-457,
     0x1.2b3ba6940f76p-294, 0.0, 0x1.b9de8f2fadb3bp-876, 0x1.186d25c6ffba7p-1011,
     0x1.37fe71e47c7c7p-256, 0.0, 0x1.8219b4cb6c6ddp-59, 0x1.e584ef858fbfbp-853, 0.0,
     0x1.0e20af6fe36fap-366, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb4778d2d433p-119,
     0.0, 0.0, 0x1.1a0bed5b8dad5p-788, 0x1.8c81142425524p-285, 0x1.6aa0fa23d3235p-813,
     0.0, 0x1.d5720da71a15ap-260, 0x1.bc211c791e80ep-138, 0.0, 0x1.a5d6b4a76087ap-826,
     0x1.05e197bdb570dp-934, 0x1.d0ef267150a26p-565, 0x1.b5027c812fd1p-225,
     0x1.31137f9637298p-899, 0.0, 0.0, 0x1.443ca811c1c53p-1007, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2ed122b0d9f57p-969, 0x1.c5976841fcd24p-122, 0.0,
     0x1.0dde7b12ad86dp-102, 0.0, 0x1.eae60a8fe43bep-1008, 0x1.36ba62aa71789p-550,
     0.0, 0x1.fa74e713532ap-1006, 0.0, 0x1.902d9f659a15p-170, 0.0, 0.0, 0.0, 0.0,
     0x1.7707880f7f95bp-679, 0x1.04b315fe9bb89p-975, 0x1.e59d671d2b8c2p-873, 0.0, 0.0,
     0x1.f4a1515903512p-847, 0.0, 0.0, 0.0, 0.0, 0x1.f599c3bd444dp-834, 0.0,
     0x1.66cab12f71896p-184, 0.0, 0x1.3f2f40bf3aecfp-76, 0.0, 0x1.a8294ee947ff7p-183,
     0x1.14fbf73003b55p-900, 0.0, 0.0, 0x1.acf2903af0f7dp-543, 0x1.46cd924dd0f1dp-316,
     0x1.e869856fcb7ap-641, 0.0, 0x1.bbe89c0741707p-137, 0x1.49d4d62c76834p-116,
     0x1.357b62b653aa5p-847, 0x1.4cebaae1fd5f8p-837, 0x1.ad31ec902ae88p-770, 0.0,
     0x1.af3bf66511736p-648, 0x1.970689b2fb032p-16, 0.0, 0x1.37a3a0d93b396p-397, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ddad7ef9dfaap-223, 0x1.5d6f5dc5899adp-790, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fcf552474c41bp-737, 0x1.d153beabc532ap-970,
     0x1.84c8fe0a052e8p-992, 0x1.31af63ddbff8ep-569, 0x1.b5e7032255211p-882,
     0x1.7abdc777411cfp-366, 0.0, 0x1.bf6792871a302p-166, 0.0, 0.0, 0.0,
     0x1.2ebbd7fffdaf3p-773, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24de0746ae291p-817,
     0x1.4d45245fda642p-329, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47b562ed1eddcp-524, 0.0,
     0x1.269bc995b1acdp-898, 0x1.9dd9d6e6e2316p-678, 0x1.a5d3a53fc3f1ep-273,
     0x1.79689ded4ad03p-881, 0.0, 0x1.a9abc56feab95p-841, 0.0, 0.0,
     0x1.2e205039f9864p-968, 0.0, 0.0, 0x1.095c449e67888p-418, 0x1.07ddc3dcf383bp-990,
     0.0, 0.0, 0x1.89993f20bf624p-705, 0.0, 0x1.f4066e57fd298p-593,
     0x1.a07762a702508p-842, 0.0, 0x1.4ddc0c7b883fdp-780, 0x1.212dff1eeb01ep-487,
     0x1.d710db4d256cbp-137, 0x1.446f23bd31ceap-435, 0.0, 0x1.8690b9a48f879p-125, 0.0,
     0.0, 0x1.5e2ae6cb55578p-58, 0x1.2f8cf7737a566p-736, 0x1.230cdea07d64bp-310,
     0x1.d0dc2f38a2e5ep-426, 0.0, 0x1.b4c805d004001p-622, 0.0, 0.0,
     0x1.5bd8b8e77ed42p-489, 0.0, 0x1.a39af739fb8d9p-732, 0.0, 0x1.5fe7a1898ecbfp-707,
     0.0, 0.0, 0x1.57403084a0957p-991, 0.0, 0.0, 0.0, 0x1.1af25f629c529p-732, 0.0,
     0x1.134660edc4dap-597, 0x1.f26c6389ca936p-166, 0x1.cb71904122769p-443, 0.0,
     0x1.760e546dfc70cp-832, 0.0, 0.0, 0x1.fbf0f18426c84p-143, 0.0, 0.0,
     0x1.d86bcdeadd5b2p-838, 0x1.58906c025b5d5p-130, 0.0, 0x1.373a054a7ed1fp-644, 0.0,
     0.0, 0x1.c709af6e91c06p-142, 0x1.7f3726f1d8facp-970, 0.0, 0.0, 0.0,
     0x1.acae9fc6184b4p-518, 0x1.867f3377ab5efp-377, 0x1.2243f2f510d3cp-903,
     0x1.5f5742dfc1f2ep-650, 0x1.c790aca4560f7p-355, 0x1.7a98c68dd5aa7p-138,
     0x1.2c20b47d8da03p-187, 0.0, 0.0, 0x1.e1cdfd401a859p-714, 0.0,
     0x1.0419065e93228p-383, 0.0, 0x1.a9469f5bf70ap-662, 0.0, 0.0,
     0x1.b7334832df205p-363, 0x1.a07a157481facp-296, 0.0, 0.0, 0.0, 0.0,
     0x1.c1a42b9a1171bp-334, 0.0, 0.0, 0.0, 0.0, 0x1.06f3c1fa3ea69p-809, 0.0, 0.0,
     0x1.8acf910bff00cp-1004, 0x1.47465e7ed8a4ap-45, 0x1.b77211d1a56dep-290, 0.0,
     0x1.35757bca9d427p-326, 0.0, 0.0, 0.0, 0x1.cfc8864acd9f8p-557,
     0x1.768dd65349b04p-489, 0.0, 0x1.51919d0847716p-624, 0x1.6f360565471cap-345,
     0x1.46b27400acc1fp-813, 0x1.8bc620bea4f26p-568, 0x1.17ab8f901d439p-992, 0.0,
     0x1.72433f7702577p-932, 0.0, 0x1.2871ee303fc37p-425, 0x1.13b95ba5e783ep-820,
     0x1.0cd19d895b172p-200, 0.0, 0x1.5fc1e2aacdc37p-705, 0.0, 0.0,
     0x1.fabe6758b912fp-539, 0.0, 0x1.ca35704ac698cp-652, 0.0, 0.0,
     0x1.34b00b00c465ep-992, 0.0, 0x1.fdfbfd37e0669p-1016, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5f595ffd71838p-963, 0x1.ee62acc462597p-672,
     0x1.079a235079f76p-637, 0.0, 0.0, 0.0, 0.0, 0x1.935ba4ccc8d13p-699, 0.0,
     0x1.277e58aec405cp-162, 0x1.8da74105c0b4bp-749, 0x1.eb661bc5b46e6p-79,
     0x1.7ab6fabaf7ae9p-467, 0x1.a2a93f950c64fp-905, 0x1.f92242b715683p-712,
     0x1.4746dc840208fp-922, 0.0, 0x1.19951b2ce7395p-240, 0.0, 0.0,
     0x1.1454fb3277d39p-424, 0.0, 0x1.c63c3ab55f0b7p-766, 0x1.5e8bd489d79ffp-35,
     0x1.8974ad9ffcb1ap-965, 0.0, 0.0, 0x1.775bfda70efcap-66, 0.0,
     0x1.e9073990395bfp-555, 0x1.8e51331e93b39p-410, 0x1.23d34d7552f91p-251,
     0x1.4c5bd490f25fp-655, 0.0, 0x1.55170c4593fd8p-723, 0x1.7f38fbd75d7f6p-654,
     0x1.f7e5edbcfdc4ep-603, 0.0, 0.0, 0x1.354864bf2a1a9p-826, 0x1.28468a3e07de4p-355,
     0x1.47254a8ca1904p-840, 0x1.ed0670a4ab5c9p-455, 0x1.0883d89b1d5f3p-570, 0.0, 0.0,
     0x1.0d25e3e4505a5p-805, 0x1.2075cc0add6ecp-275, 0x1.45c8f327356f8p-265,
     0x1.ea791108824cep-593, 0x1.c8264009f9bb7p-452, 0x1.9ab0a857d7e74p-267, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.83d416919c65dp-218, 0.0, 0.0, 0.0,
     0x1.4458677224966p-108, 0.0, 0.0, 0.0, 0.0, 0x1.c975c7f27598ep-954, 0.0,
     0x1.85e01fadbde4p-144, 0x1.291cd40be1d21p-622, 0.0, 0x1.29a3f14fdfc81p-342,
     0x1.c2e975ea57763p-674, 0.0, 0x1.cfc170b5916b2p-605, 0.0, 0x1.1cea86573f95fp-972,
     0x1.fca305d1cd58cp-182, 0x1.181c50bf219b9p-130, 0x1.564e4c560e3e8p-622, 0.0,
     0x1.a0c4bcc053924p-579, 0.0, 0.0, 0x1.369a7bdf0e288p-969, 0x1.d293c7c6affc1p-58,
     0x1.6d0591acbf1e3p-474, 0.0, 0.0, 0x1.99e8d3f4c16e6p-504, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa06d3518b9e1p-715, 0x1.479dda01f0233p-985,
     0x1.7bd2313a550f7p-52, 0x1.a8f1e72d0c8d5p-870, 0x1.fcd5c47c13ecbp-542, 0.0,
     0x1.f8579d40bda5ep-324, 0.0, 0.0, 0.0, 0x1.d1c7a45a0d46cp-904,
     0x1.b12fd835a7548p-521, 0x1.9d74a4bf15374p-958, 0.0, 0.0, 0.0,
     0x1.cef83e6db44f2p-333, 0x1.382c1660a241ep-244, 0x1.36549bf97c451p-371, 0.0,
     0x1.4cbaadb5c527cp-25, 0x1.098a4f6d3b7dep-160, 0x1.2aecaa9854358p-247, 0.0,
     0x1.9a4d126a3866dp-412, 0x1.04600abb72c6dp-670, 0.0, 0x1.c7615a7e57232p-658,
     0x1.bae7e2995d85ap-922, 0.0, 0x1.30ece306b9bdep-949, 0.0, 0x1.6ffe36d4786cdp-147,
     0x1.b736589463b3dp-288, 0x1.e0453fa92b20bp-1016, 0.0, 0.0,
     0x1.c91b51be1c2eep-447, 0x1.fe9010eb91712p-486, 0.0, 0.0, 0.0,
     0x1.a0ca0e7b2681ep-760, 0.0, 0x1.252c33b264aeap-476, 0.0, 0.0,
     0x1.2cc4615353b8fp-537, 0.0, 0x1.7abf498358a06p-691, 0.0, 0.0, 0.0,
     0x1.8b0910680031p-575, 0x1.f9826083a4e0bp-601, 0.0, 0x1.2eca760867563p-803,
     0x1.7c3055839f82p-31, 0x1.a609582ba4c56p-95, 0x1.5db1452c204acp-18, 0.0, 0.0,
     0.0, 0.0, 0x1.f946a9219ad8fp-100, 0.0, 0x1.94ac55a16145bp-896, 0.0,
     0x1.5d8b6d6d0021cp-148, 0.0, 0.0, 0x1.8ee278134bc93p-986, 0x1.482b1a5465a23p-556,
     0.0, 0.0, 0x1.510120d137767p-903, 0.0, 0x1.6850028ea1b43p-479, 0.0,
     0x1.16b192361f211p-138, 0.0, 0x1.abf2d3c862967p-232, 0.0, 0.0,
     0x1.d2a8330eb13c4p-533, 0.0, 0.0, 0x1.6bba87550f631p-891, 0x1.21b2d8a7744a3p-115,
     0.0, 0x1.edcd7ceeaa5d8p-435, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4d388df9a15p-749,
     0.0, 0x1.cda6043f2de09p-1012, 0x1.4956b848ee198p-260, 0.0, 0.0, 0.0,
     0x1.45c3ebec8688bp-836, 0.0, 0x1.06924dd702b7dp-474, 0.0, 0.0, 0.0,
     0x1.57b14dfc28298p-30, 0.0, 0.0, 0.0, 0x1.a5f4996089d4dp-291, 0.0, 0.0, 0.0,
     0x1.c7a4ecf30251bp-1002, 0.0, 0x1.e1943e070465p-398, 0.0, 0x1.81dbd6752a2e9p-921,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.579437b81f97dp-606, 0.0,
     0x1.32ea3d6dadd16p-142, 0x1.55af5e49ea6dcp-874, 0x1.64c4a1e16e956p-793,
     0x1.a52e49e2d984ep-745, 0x1.0163aa738d48p-1003, 0x1.dffd95cf44234p-154,
     0x1.259ce5acab96p-146, 0x1.7e420be8f987p-764, 0.0, 0x1.dad3cf2df68f6p-286,
     0x1.50769cdfd947ap-107, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f55f4188348fp-996, 0.0,
     0.0, 0.0, 0.0, 0x1.39424fc8923f3p-207, 0.0, 0.0, 0.0, 0x1.fd7db6314f202p-48, 0.0,
     0.0, 0x1.53cc7173641ffp-224, 0x1.03a5e2730cfe4p-313, 0x1.10a813ba9a9ccp-212, 0.0,
     0x1.35195dbdd7f68p-721, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d4b69a42f5fffp-563,
     0x1.08c22fded33fcp-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52d13c17f104bp-817, 0.0,
     0x1.81fe38f928ebbp-805, 0.0, 0x1.d18d06445096ep-389, 0.0, 0x1.6026e6ef7fdc2p-154,
     0x1.e1f3bae5abc8fp-97, 0.0, 0x1.16166f7bac0bbp-593, 0.0, 0x1.f86da33951141p-58,
     0.0, 0.0, 0x1.a11ddde27c38fp-207, 0x1.3f7fac78a26a3p-689, 0.0, 0.0,
     0x1.1c2a8795e85ep-712, 0.0, 0x1.8ef327466a428p-960, 0.0, 0x1.db9aa5721745dp-434,
     0x1.000ac057a73f5p-524, 0x1.55376f947438dp-860, 0x1.823d9eb3c1913p-989, 0.0, 0.0,
     0x1.79cb050034928p-584, 0x1.4b40e8fecfdbfp-593, 0x1.cf8d3bd84178p-275,
     0x1.11ee41cdcdbedp-332, 0.0, 0x1.dab7ac19fcf2cp-48, 0.0, 0x1.83e0f1b307d42p-173,
     0x1.2b6ace8ebab6cp-724, 0x1.53b53efd01d53p-96, 0.0, 0x1.f1140a9ceaa0dp-474, 0.0,
     0.0, 0x1.580ac71d3e092p-154, 0.0, 0x1.fec2467beb662p-94, 0.0, 0.0, 0.0,
     0x1.6a79aa74624cfp-552, 0x1.68c458b62857p-92, 0.0, 0.0, 0x1.1a9f00c1de52p-281,
     0x1.fb0f47a43420ep-854, 0x1.1264367a5cc1dp-987, 0.0, 0.0, 0x1.d2612af5027f9p-614,
     0x1.490df0d3ee5edp-578, 0.0, 0x1.24c86a7876106p-684, 0x1.619f0ed03fb69p-36, 0.0,
     0x1.60ba8d38dd4c3p-547, 0.0, 0.0, 0.0, 0x1.9277856d4f534p-533, 0.0,
     0x1.fb9fbde125837p-671, 0.0, 0x1.fa7fca6ef244dp-543, 0x1.a7a7795e44f5fp-663, 0.0,
     0x1.f9e910040ee26p-974, 0.0, 0.0, 0.0, 0x1.83eddd52936f9p-498,
     0x1.f074b9e7bfaa3p-880, 0x1.beedd33aa3142p-847, 0x1.74bc71ab7e875p-155, 0.0, 0.0,
     0x1.1e1c347d82b12p-392, 0x1.966c84345565fp-910, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1339ec4527b05p-655, 0.0, 0x1.7571cf4349ba3p-459, 0x1.6537826972fddp-426, 0.0,
     0x1.1176b11c94a2bp-812, 0x1.1fb0f50ed5419p-177, 0x1.038dd748e263cp-522,
     0x1.a7eda917c8e4fp-872, 0.0, 0.0, 0x1.abb9d790679e4p-153, 0.0, 0.0, 0.0,
     0x1.d33be2d9c3d0ap-570, 0.0, 0.0, 0x1.b23b8f334e87ep-1008,
     0x1.975b28c99bd2ap-484, 0x1.72bb257323b05p-308, 0x1.54c0ee039a1b4p-135,
     0x1.8c9beff1e94b1p-483, 0x1.d302ac1a5c1b5p-398, 0.0, 0x1.5293539d56deep-1012,
     0.0, 0x1.1faff9a6d06cfp-220, 0.0, 0.0, 0.0, 0x1.a7ef9e4cca5a6p-112, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f9b4685aba8c1p-647, 0.0, 0.0, 0x1.88e077848cf3dp-589,
     0x1.2e3fa2a1a0954p-139, 0.0, 0.0, 0x1.26a2be19ee2dfp-389, 0.0,
     0x1.f110af722c116p-731, 0.0, 0x1.c29895de048a3p-925, 0.0, 0.0,
     0x1.1d74a3a1eda2dp-968, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.987f39c3f8facp-867, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.73243564632b9p-916, 0.0, 0.0, 0x1.cf6b57972a6b8p-238, 0.0,
     0x1.a4d0650d3c0d4p-539, 0.0, 0x1.afa8ea09c0f75p-921, 0.0,
     0x1.8bde9b6560f24p-1015, 0x1.167cabf7a9b02p-767, 0x1.a0f3a232b82acp-835, 0.0,
     0x1.64441e687f761p-373, 0.0, 0x1.a0f6e0719c959p-869, 0.0, 0.0, 0.0, 0.0,
     0x1.f1769dff08763p-373, 0.0, 0x1.49802f49d7974p-938, 0.0, 0x1.5746d3f984042p-146,
     0x1.9a73a3548424bp-798, 0x1.84eaa1b051f2bp-114, 0.0, 0.0, 0.0,
     0x1.d08d758fd6c7dp-1016, 0.0, 0x1.2df18d6c402b6p-801, 0.0, 0.0,
     0x1.84810530ae129p-659, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8189faa247f4ap-964, 0.0,
     0x1.de6f0e4afda71p-841, 0.0, 0x1.a2a1580c35fp-485, 0.0, 0.0,
     0x1.6a259494a2c88p-354, 0x1.4b78f7169c3e5p-448, 0.0, 0x1.701e8b4776b35p-608,
     0x1.2552715c94abap-703, 0x1.4698f7252d873p-348, 0x1.a53e716f590ecp-642, 0.0, 0.0,
     0x1.459c9305a729ap-840, 0x1.9c799aca40304p-367, 0.0, 0.0, 0x1.0c5f98e18175ap-124,
     0x1.c632a4528db44p-402, 0x1.fb7a90f569f1ap-35, 0.0, 0x1.f9c2e8ac76b52p-226,
     0x1.1670bd89d2456p-561, 0.0, 0x1.c821f05563777p-215, 0.0, 0.0,
     0x1.d5ad097ae9dddp-39, 0.0, 0x1.0507034135494p-101, 0x1.7f7e24135c867p-356, 0.0,
     0x1.739bc6198bbf2p-410, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93f326ea7ff74p-598, 0.0,
     0x1.8a0090aec7b95p-798, 0.0, 0x1.230e16d57ce4cp-706, 0.0, 0x1.74b5a823a8c2ep-150,
     0x1.abc629c2e922dp-95, 0x1.c8f25775ed365p-489, 0x1.f6095922a38e6p-849, 0.0, 0.0,
     0.0, 0x1.12aec53605a37p-35, 0x1.fd8a9462a832bp-299, 0x1.6c35eadacf93bp-69, 0.0,
     0x1.b7bb1915819e3p-916, 0.0, 0x1.88f453f1a3e4bp-99, 0x1.e0c3e1ca15dcfp-81, 0.0,
     0x1.79b3d37295554p-1018, 0x1.fb0b80cf0321p-253, 0x1.cd051c86ae30bp-867, 0.0,
     0x1.d9827c3839ceep-311, 0.0, 0x1.062b18849cb92p-205, 0.0, 0x1.5cd00909ebbf8p-771,
     0x1.529372635c96fp-120, 0x1.d71db985a792p-449, 0.0, 0x1.b6b562d98598dp-779,
     0x1.df79fc9a43823p-488, 0x1.13734526d16c1p-287, 0.0, 0x1.1e2a58d0b3024p-380,
     0x1.6252703d43588p-428, 0x1.f113c545f3317p-985, 0x1.4634034ab615ap-589,
     0x1.864806fc4608bp-237, 0x1.aa4c5a419196p-615, 0.0, 0.0, 0x1.df198554e5dc4p-778,
     0x1.fcccaea685f52p-178, 0x1.1264f62bf3ceep-991, 0.0, 0.0, 0x1.ed5b45a5323d2p-776,
     0.0, 0.0, 0x1.aac2009caeb47p-89, 0x1.62d4a230f062cp-796, 0.0, 0.0, 0.0,
     0x1.84e1931a771f6p-655, 0x1.d52c3c88da1fbp-301, 0x1.1b3909a2ea559p-872,
     0x1.70e4bbe0d67bap-279, 0x1.8483599b9ef9bp-35, 0x1.8c30b740388d8p-350, 0.0, 0.0,
     0x1.f991e8a0fa627p-950, 0x1.5f59c0c57774bp-226, 0x1.ec91e5e0b1068p-955, 0.0,
     0x1.4d191c76054a4p-51, 0.0, 0.0, 0.0, 0.0, 0x1.694786553395cp-4, 0.0, 0.0, 0.0,
     0.0, 0x1.47c2548cc0ccdp-975, 0x1.a524b308038f1p-846, 0x1.76bfb19d7cab7p-121, 0.0,
     0x1.4f0106b18477cp-57, 0.0, 0x1.8743dab6d17f3p-43, 0.0, 0x1.e883af5d22d26p-254,
     0.0, 0x1.0326d06f6b22cp-439, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d99d4480b572ep-942, 0x1.755f7b12ca638p-507, 0x1.49db1bf270111p-83, 0.0,
     0x1.180f8f4de6361p-786, 0x1.bde2e1405d19fp-827, 0x1.43b4d7ba5aabep-59,
     0x1.2c4a82a9b5fb9p-880, 0x1.0b5fd2cb7e68fp-249, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2fee37c9a2339p-396, 0x1.39949c0d96809p-659, 0.0, 0.0, 0.0, 0.0,
     0x1.ed8e8c08f4087p-840, 0x1.5acd0868695b2p-862, 0x1.5d24b94e43801p-595, 0.0,
     0x1.d4770c8dadeb3p-206, 0x1.183cdfcd7460cp-715, 0.0, 0.0, 0.0,
     0x1.6062730460784p-330, 0.0, 0x1.0e387d636f334p-917, 0x1.90e7ef210ac14p-778, 0.0,
     0.0, 0x1.fd39943955357p-452, 0.0, 0.0, 0x1.aa4b561cfb56bp-134, 0.0, 0.0, 0.0,
     0x1.2670b6ec77c12p-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0cd5c0e0c505p-52, 0.0,
     0x1.388d8c0d8eb25p-213, 0x1.d4ac09e57b9f3p-13, 0.0, 0.0, 0x1.4365ed82cdd21p-947,
     0.0, 0x1.d47126a4a395ap-790, 0x1.f8ba81f397339p-828, 0.0, 0.0,
     0x1.8d17b465c4756p-144, 0.0, 0x1.d0719297f77d2p-280, 0x1.76b1d4bcb11f1p-466, 0.0,
     0x1.00c0b99898673p-265, 0.0, 0x1.e9e45309a2b9dp-58, 0.0, 0.0,
     0x1.d0a796866193cp-369, 0.0, 0.0, 0x1.5528dcb6d0a3bp-1005, 0.0, 0.0
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
            tmp1 = Sleef_finz_sind2_u35kvx(tmp0);
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
    printf("Sleef_finz_sind2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sind2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
