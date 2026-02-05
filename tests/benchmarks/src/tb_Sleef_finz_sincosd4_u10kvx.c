/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd4_u10kvx.c --function \
 *     Sleef_finz_sincosd4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x4_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
static const Sleef_float64x4_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0, 0.0, 0.0},.y = {0.0, 0.0, 0.0, 0.0}};
volatile Sleef_float64x4_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.6de71322593c5p-30, 0.0, 0x1.61a23f10c4f6dp-963, 0x1.69af044e08e4ap-872, 0.0,
     0.0, 0x1.5326ea4a087eep-980, 0x1.0e70d901b2dedp-986, 0.0, 0x1.85ed00f09ce96p-265,
     0x1.de07c526dde4bp-646, 0x1.ddb9fe567aa8p-688, 0x1.828ed1f1ae801p-123, 0.0, 0.0,
     0.0, 0.0, 0x1.c5e735ccaf6f1p-479, 0x1.55a0e1972e87ep-975, 0.0,
     0x1.79443c9fba457p-37, 0x1.3c1348386e4d2p-627, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.347fcc1a4fef1p-242, 0.0, 0x1.22e285565472bp-595, 0.0, 0.0, 0.0,
     0x1.d2615326c655ep-13, 0x1.2db3d106037c4p-290, 0x1.7e0743c14cdc9p-961, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.86a69099f667bp-664, 0x1.198e3753c5a15p-74,
     0x1.cdb0531bfe525p-772, 0x1.21cea5b945f3bp-556, 0.0, 0x1.87f1d85984d3cp-128, 0.0,
     0.0, 0.0, 0x1.02e2a2c6b22cap-665, 0.0, 0x1.9225314fa57b4p-140, 0.0, 0.0,
     0x1.7062b52a65dfap-411, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be2f782d0f612p-814,
     0.0, 0.0, 0x1.d4bf526f5650bp-747, 0.0, 0x1.df9f604305505p-354, 0.0, 0.0,
     0x1.b91d75721cef7p-714, 0x1.e86716c759f3bp-175, 0.0, 0.0, 0x1.80bad8b2b5cb5p-575,
     0x1.386629ade5897p-575, 0x1.8a4d25714ecf9p-650, 0x1.ed71475e040dcp-408, 0.0,
     0x1.c4730844df71cp-252, 0.0, 0.0, 0.0, 0x1.39ac474bd1159p-391,
     0x1.0d4837b3a18fp-280, 0x1.e8b1b454449b2p-581, 0x1.33ec87c5f456fp-231, 0.0, 0.0,
     0.0, 0x1.6222dfafb3187p-485, 0.0, 0x1.2ec42b1ca5a0ap-951, 0x1.3c29e7dcbe557p-76,
     0x1.f4471c66cbbf5p-927, 0.0, 0x1.14d08765db078p-109, 0.0, 0x1.b91e088977f32p-957,
     0x1.4ca3ca06f8edep-622, 0.0, 0x1.98a895d170b0dp-860, 0x1.f08c9b7aa0241p-460, 0.0,
     0x1.eb9eee27aa4d4p-982, 0.0, 0x1.43591d4dc0b72p-684, 0x1.789304f23289dp-276, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0c1335dcfccbep-991, 0.0, 0.0, 0x1.9959c9fb522f6p-164,
     0.0, 0.0, 0x1.5898619d60e32p-565, 0.0, 0.0, 0.0, 0x1.801d2f0c30a5cp-570, 0.0,
     0x1.c391e1f163d81p-492, 0.0, 0.0, 0x1.e8f66b54e3efap-504, 0x1.5a8664afcc11ap-885,
     0.0, 0x1.d683a49bb23ffp-634, 0.0, 0x1.b108eb6207cfap-594, 0.0,
     0x1.3df521d5d7379p-40, 0x1.9319699b8dd15p-244, 0x1.2e230a903e5c7p-212, 0.0,
     0x1.e197c0e82d793p-42, 0x1.6e6f4b043a571p-501, 0x1.2bb0fc46f77cdp-716,
     0x1.45c7e15b0339cp-730, 0x1.649c115318834p-866, 0x1.fa25fe1565f17p-343,
     0x1.6fca8fbaac655p-723, 0x1.9737d4526b9b1p-751, 0x1.ce4a9e28f5eebp-490, 0.0,
     0x1.c5c27b45b51f9p-456, 0.0, 0.0, 0x1.b6dfd95b68917p-982,
     0x1.e42b6cb94836ep-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10ea5b93deb1ep-228,
     0x1.73763bd35c8cap-738, 0.0, 0.0, 0.0, 0x1.8114a10da65bap-278, 0.0, 0.0,
     0x1.186b219cb8ebcp-935, 0.0, 0x1.cdea51fcaea98p-667, 0x1.72551bd3c8133p-828,
     0x1.b9abccef47fa1p-879, 0x1.755aef3b47f14p-606, 0x1.288825494ccep-642, 0.0, 0.0,
     0x1.26a78fca91f59p-409, 0.0, 0.0, 0x1.b36edf761e8f9p-680, 0.0,
     0x1.0656c1d26f9f3p-874, 0x1.aa6dba2b3e714p-758, 0.0, 0x1.6455bd14aecep-440, 0.0,
     0x1.30b7600bedf28p-974, 0x1.8cfc323a14b73p-118, 0x1.cb49927cd2baap-647,
     0x1.19c1a70b901bcp-935, 0x1.f1b2f17bc22ffp-897, 0.0, 0.0, 0x1.71bfac3fcf03bp-429,
     0x1.9ce12ae3ee883p-670, 0x1.f78e782e8f228p-12, 0.0, 0x1.88e7eb3512cc7p-754, 0.0,
     0.0, 0.0, 0x1.00335e86afe0dp-728, 0.0, 0x1.109e7d941571fp-368,
     0x1.5f2fff6178d5p-7, 0x1.196bd77d190dp-73, 0.0, 0x1.81e84ccf4af29p-456, 0.0,
     0x1.bc83fe1057f5bp-469, 0.0, 0.0, 0x1.b423ae315770fp-108, 0x1.6cba4c46718cap-943,
     0.0, 0x1.c94fa9f1e0a65p-715, 0x1.8535bc0e55a2p-897, 0.0, 0x1.d88fc11ff01dfp-716,
     0.0, 0x1.b486045be53b9p-782, 0x1.2f22277b4a32cp-659, 0x1.1c8a71faf018bp-381, 0.0,
     0.0, 0x1.ccce636eb54adp-42, 0x1.a680c46c1b82ap-232, 0x1.9049adf94e7a9p-509, 0.0,
     0x1.019e56d8bd723p-86, 0.0, 0x1.6edaf8d40ac54p-673, 0.0, 0.0,
     0x1.2d06a2a2e4771p-562, 0.0, 0.0, 0.0, 0.0, 0x1.8fcb1e3c046f5p-878,
     0x1.b05e141ca2842p-999, 0.0, 0x1.0289e63abd44p-744, 0.0, 0x1.f5cb51816ab89p-462,
     0.0, 0x1.876b8a1d25d2bp-768, 0x1.33011a31a6ae9p-666, 0.0, 0x1.6dc40dab641e6p-315,
     0.0, 0x1.f3ef623566f1bp-469, 0.0, 0x1.bae27dc7fa16cp-441, 0.0,
     0x1.e7f8238f59eccp-570, 0.0, 0x1.d04a6d623e07ep-6, 0x1.e3031e8cf8178p-589, 0.0,
     0.0, 0x1.0d53a8198d352p-376, 0x1.51132f7f31a6ap-280, 0.0, 0x1.90c8dc3f092fep-428,
     0.0, 0x1.790e983abbe0ap-1007, 0x1.b9fe209176bb9p-1004, 0.0,
     0x1.bfba00f500385p-196, 0.0, 0.0, 0x1.22146f7895fb1p-655, 0x1.0a6095e8e944p-321,
     0.0, 0.0, 0.0, 0x1.9550c467c34p-803, 0.0, 0x1.aed2a780a6315p-519, 0.0,
     0x1.a97664f494155p-771, 0x1.3aebeac3190cep-943, 0.0, 0.0, 0x1.ac7dc00403a43p-887,
     0x1.a58c3b1ec8127p-319, 0.0, 0.0, 0x1.827df6f8f0206p-71, 0.0, 0.0,
     0x1.efb6832aa88e1p-841, 0x1.3d6608b89b553p-831, 0x1.937746083ca54p-668,
     0x1.90dd7964c1407p-460, 0.0, 0.0, 0x1.0f6e4a607383dp-145, 0.0,
     0x1.f2ac814bc146ap-612, 0.0, 0x1.e3244aee9778ap-839, 0x1.59f6cd9a751cp-144, 0.0,
     0x1.1c760442547f1p-1012, 0x1.bae0760fc8692p-821, 0x1.6066c859031f9p-896, 0.0,
     0x1.a9e1b5fc8b06p-336, 0x1.5059ede89de34p-504, 0x1.988ecee4a6a8fp-541,
     0x1.955845dac2f9ap-958, 0.0, 0.0, 0x1.9541f8571879dp-113, 0.0,
     0x1.3578d3cdc9564p-76, 0.0, 0.0, 0x1.337788ae6fcd8p-754, 0.0, 0.0,
     0x1.04a8518dde8d3p-469, 0.0, 0x1.a1aa7ca4f6922p-715, 0x1.e0ed703fc0bfep-320, 0.0,
     0.0, 0x1.b157e34de5e26p-970, 0x1.fd37c154be4acp-817, 0x1.aeeb096ef84dp-475, 0.0,
     0.0, 0x1.b50672293f975p-758, 0.0, 0x1.308c86c67b91fp-351, 0x1.fdeac106446dap-460,
     0x1.45c14ea05a3c4p-420, 0x1.8c2d2793cd129p-410, 0x1.957c5a4661519p-807, 0.0, 0.0,
     0x1.0ba8209b89271p-65, 0.0, 0x1.383de0715ce99p-748, 0.0, 0.0,
     0x1.8ab57dda082aap-530, 0x1.f21aba1ef8b6bp-932, 0x1.ff40608c0b3fdp-276,
     0x1.ec049a3b32643p-958, 0x1.b3f3935372d2bp-527, 0.0, 0x1.672922545a1ccp-183, 0.0,
     0.0, 0x1.9ecaaa35d7a31p-529, 0.0, 0.0, 0x1.fca6c6d30253fp-377,
     0x1.60af65ad19398p-736, 0.0, 0.0, 0.0, 0x1.d50b24dfb9cp-699, 0.0, 0.0,
     0x1.5b3f0b2ee7782p-754, 0x1.7da2fe3933b0ap-118, 0x1.40cc33c6bb893p-383,
     0x1.1fcb2388b824ep-457, 0x1.dd05cf33614c4p-854, 0x1.03f80e0bdc7ddp-1012,
     0x1.e23468983e4a8p-148, 0x1.ed55e92074514p-41, 0x1.271afab5bbc61p-837,
     0x1.ce17341eeb495p-555, 0.0, 0x1.59c0b19b584aap-59, 0x1.54398579c52bep-749,
     0x1.cf04b531ac765p-379, 0x1.9b4eab87b8af6p-209, 0.0, 0.0, 0.0,
     0x1.7b7b01aec1657p-472, 0x1.cf58f7ac623f8p-489, 0x1.24662bfb2f909p-825, 0.0,
     0x1.837d4c8c1de3bp-248, 0x1.ff5f0b925175ep-661, 0.0, 0x1.7120d18ec53d3p-105,
     0x1.1bed7eb660463p-494, 0x1.ac876245ee434p-733, 0x1.760dd653b16b5p-568, 0.0,
     0x1.6703024b2e6d8p-381, 0x1.66d250c827975p-348, 0x1.4564dc452b476p-267,
     0x1.818330596e008p-375, 0x1.94ca45d8b8dep-944, 0x1.f8cf74c39a22bp-385,
     0x1.740e89734acf8p-760, 0x1.afc167de6076bp-450, 0x1.5d4e76a5c9db6p-343, 0.0, 0.0,
     0.0, 0x1.ccb76a8ae78fep-651, 0x1.771a211bf4eap-82, 0.0, 0x1.0e53ab6e1adp-1011,
     0x1.c74184ed26514p-621, 0x1.63c139a6a92fbp-876, 0x1.f9f3be55d7d73p-845, 0.0, 0.0,
     0x1.65d4ecf6deb92p-612, 0x1.0dc927ea5e086p-1016, 0x1.063e70b014321p-788, 0.0,
     0x1.baee7f5c8e80cp-220, 0.0, 0x1.fed59d56967bcp-942, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7f244b850307p-759, 0.0, 0x1.b2953847dcb29p-531, 0x1.369164bee900bp-826,
     0x1.891d4ea79a43ep-378, 0.0, 0.0, 0x1.85c3247faba9ep-537, 0x1.06d6ab0855632p-289,
     0.0, 0x1.f96b251d2e9b3p-691, 0.0, 0x1.2ea2cad9303e5p-177, 0.0,
     0x1.8b3f743793779p-579, 0.0, 0x1.70fe455e8f9b5p-125, 0.0, 0x1.fcf6cf03cd0cep-725,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.673b20de1a49ep-543, 0x1.207c6736a7bc3p-958,
     0x1.96d00dfe55528p-602, 0x1.b6b7e2e7e0eap-223, 0.0, 0.0, 0.0, 0.0,
     0x1.42840869b3192p-258, 0x1.89d0e46a2a664p-624, 0x1.8deae7ef280cp-676, 0.0, 0.0,
     0.0, 0x1.d3e3975fcc644p-623, 0x1.c6c3d6ed1bb62p-628, 0.0, 0x1.08ae065a4cd2fp-37,
     0x1.a474ad4f8f50cp-839, 0.0, 0.0, 0.0, 0x1.317bc3569da0fp-908,
     0x1.d267d4004ae2fp-384, 0x1.0d36c397b24efp-903, 0.0, 0x1.c0a99c0c43eacp-77,
     0x1.d3dc06b0757b7p-443, 0.0, 0x1.626da7d1fe503p-862, 0.0, 0.0, 0.0,
     0x1.ae01c048732f6p-1005, 0.0, 0.0, 0x1.a83d95754c9e6p-1004, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fb152fc6a3a3ap-510, 0x1.fc08887408cbbp-524, 0.0, 0.0,
     0x1.10676f361d1e5p-936, 0x1.c91824994029ap-919, 0x1.4b724c0defd9ap-756,
     0x1.6b821211d4e9fp-152, 0x1.faeeadcb75dc1p-35, 0.0, 0x1.63a3dc83ae8dfp-446, 0.0,
     0.0, 0.0, 0x1.81c11b2560996p-360, 0.0, 0.0, 0x1.ab5dbcca25596p-809, 0.0,
     0x1.dc496dcb8fdep-797, 0.0, 0.0, 0x1.d0b7b6a789927p-526, 0x1.ca950c7768513p-180,
     0.0, 0.0, 0.0, 0x1.1289f7d21bffdp-542, 0.0, 0.0, 0x1.06a106a369b9dp-650,
     0x1.5b627a2c3e2e3p-843, 0.0, 0x1.602e31531f7c1p-330, 0x1.363653b4c0c75p-976, 0.0,
     0x1.db6c914d2f4b9p-154, 0.0, 0x1.b922c1a451b5bp-1003, 0.0,
     0x1.612d70a037b06p-212, 0.0, 0.0, 0x1.a3f6ae16d1058p-415, 0.0, 0.0,
     0x1.93ef61a35f872p-18, 0x1.9c9625596bb72p-256, 0x1.55e2cce6edb4ep-964,
     0x1.fb64c1eb6c9a3p-991, 0.0, 0x1.39e0ad72bbf9ep-373, 0x1.c211415ba1302p-105,
     0x1.9f7c1e502247fp-1013, 0x1.d09270757f02ap-276, 0x1.eb0492f406106p-274, 0.0,
     0x1.830ca472b9ccp-636, 0x1.3398f05b6804p-426, 0x1.d8bbbfa4a1fedp-685, 0.0, 0.0,
     0.0, 0.0, 0x1.c9d6d3eb1457ep-269, 0x1.9cce96fc78267p-84, 0x1.f1fa1f66d75abp-590,
     0x1.abb0f6197121bp-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.108ec6d04adfdp-297, 0x1.4e068bb17361bp-200, 0.0, 0x1.3ef3da9001f79p-126,
     0x1.3105db4d98c7ap-851, 0x1.40f95dfedcb88p-325, 0x1.0033ef53e0897p-287, 0.0,
     0x1.7b6bbc5bd08fbp-778, 0x1.a3de09a77e0afp-315, 0.0, 0x1.4534689c5cdd2p-787,
     0x1.64b44acb721dfp-121, 0x1.c620d6a1f5983p-828, 0.0, 0x1.6ffacf9404913p-15, 0.0,
     0x1.76e4906662b59p-141, 0.0, 0.0, 0x1.d3e6aa552bddcp-960, 0.0,
     0x1.085585bbbfed3p-67, 0.0, 0.0, 0.0, 0.0, 0x1.575818af3ab44p-582,
     0x1.69da03bdcd2ecp-482, 0.0, 0.0, 0x1.2707970a04f73p-54, 0x1.749f1de4eda31p-611,
     0x1.e63e4f078952ap-451, 0.0, 0x1.28bad4c0bb9d2p-698, 0x1.004ec5edae15fp-881,
     0x1.8f82754933f46p-997, 0.0, 0x1.fd872bc4a419ep-16, 0.0, 0x1.ba16b8ced6a7p-842,
     0.0, 0.0, 0x1.ee740ef928c1p-62, 0x1.f3653e8807f17p-136, 0x1.d62e684b7cc84p-345,
     0.0, 0x1.8c1b594017969p-551, 0.0, 0x1.cdb94a59b5dffp-86, 0.0,
     0x1.2b0e5263abec4p-701, 0.0, 0.0, 0x1.905b115121554p-923, 0.0, 0.0, 0.0,
     0x1.7f2015a5c9c92p-449, 0x1.9b0390618537ap-886, 0.0, 0x1.d1f01fd559915p-164,
     0x1.858f8227e887dp-349, 0x1.be7c347828d7fp-903, 0x1.9edaa3862d957p-820, 0.0,
     0x1.082ff3454e5acp-1, 0x1.812190e5ff581p-737, 0.0, 0.0, 0x1.465bc248af294p-999,
     0.0, 0x1.fbd9ac4760678p-196, 0x1.833e01e7f5791p-318, 0.0, 0x1.a3b67f5eed308p-95,
     0x1.4ab4e05b039d6p-410, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a133219b6ae96p-320,
     0x1.ca5a92ca59455p-979, 0x1.1809e48b776efp-14, 0x1.dce214085beadp-190,
     0x1.18c33c08d4701p-336, 0x1.d79c9e98fccebp-200, 0.0, 0.0, 0.0, 0.0,
     0x1.61f29ed8c7d5bp-1019, 0x1.f09c5bd0570cfp-79, 0x1.a3ee2a4a689cfp-388, 0.0, 0.0,
     0x1.e7f5cc8270f24p-893, 0x1.750bfd1b6524cp-927, 0.0, 0.0, 0x1.01cee2212583dp-375,
     0.0, 0.0, 0x1.50d6b8f52e119p-346, 0x1.fd66e6152cdcp-396, 0x1.9e887b21757bep-400,
     0x1.7c76c69f90148p-353, 0.0, 0.0, 0x1.da2802021105ap-523, 0.0, 0.0,
     0x1.5f3d97454cd53p-213, 0x1.a14a34e5cfe01p-452, 0.0, 0.0, 0.0,
     0x1.312ba4b16c8ccp-727, 0.0, 0.0, 0.0, 0.0, 0x1.3583e2215a5ap-772,
     0x1.2797e18cc626p-515, 0x1.23eb7079d8e87p-481, 0x1.45d26b9bc5258p-702, 0.0,
     0x1.679264eea36c4p-396, 0.0, 0x1.a7bf2d03e4a93p-737, 0.0, 0x1.de0a97551124ep-141,
     0x1.05e50fdb1f1a6p-480, 0x1.9554b3d974cefp-234, 0x1.f848503c48aa1p-509, 0.0, 0.0,
     0.0, 0x1.df3c67cfe795p-26, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bdeddd353d4a4p-544, 0.0,
     0x1.8a2a40772d325p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3b262cca3c57p-469, 0.0, 0.0, 0x1.36bdf1cd9d558p-951, 0x1.3195e03a44cb3p-155,
     0.0, 0x1.56c0efbae6f72p-443, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3811bc4c03c53p-417, 0.0, 0.0, 0.0, 0.0, 0x1.1c266d16197a8p-367,
     0x1.87d494bbe2ebbp-531, 0x1.caed67fee87fdp-638, 0.0, 0.0, 0.0, 0.0,
     0x1.ea7786e7afc47p-302, 0x1.d96dd8b406bfdp-291, 0.0, 0.0, 0x1.717ed02e64141p-169,
     0.0, 0x1.df74ee95ad635p-711, 0x1.cb1149be2a0fdp-499, 0x1.7ab62445b728ap-913, 0.0,
     0x1.5732c3b42713dp-739, 0.0, 0.0, 0x1.69e624b1aa6ep-959, 0.0,
     0x1.086d070520e0ap-432, 0.0, 0.0, 0x1.17137d3fd5b3ap-608, 0x1.ef052e24cf2e1p-123,
     0.0, 0.0, 0.0, 0.0, 0x1.340ae6273c514p-176, 0.0, 0x1.96fd00ba46f89p-869,
     0x1.2863e4c4dbb7ep-25, 0x1.cf5939bd32b74p-250, 0.0, 0x1.efe730ea1dd69p-298,
     0x1.a7e70a1437323p-720, 0x1.ea9d7ba464436p-951, 0x1.659ea5efa5537p-638,
     0x1.e647c44538d0dp-649, 0.0, 0.0, 0.0, 0x1.46ed3c3e199dp-74,
     0x1.339b64722acfep-923, 0x1.2eede6796e0efp-612, 0x1.e9787c7884d86p-616,
     0x1.d386702528bf2p-738, 0x1.c05eb3b1fd5ffp-224, 0.0, 0x1.4ddcfd2552f65p-331,
     0x1.5e325502663e5p-329, 0.0, 0.0, 0.0, 0.0, 0x1.a16acbc71b4fbp-712,
     0x1.7440611435852p-862, 0.0, 0.0, 0x1.5af367c58c71cp-908, 0.0,
     0x1.e673a2625cf47p-507, 0x1.76bf449ecc3e7p-976, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.49a39d4cdd64ep-979, 0x1.ec5c147e82fb5p-321, 0x1.ff5e6ed7cc74ap-29, 0.0,
     0x1.093c67ee4b3fap-124, 0x1.131222a89a886p-401, 0.0, 0x1.b764e75132dc9p-716, 0.0,
     0x1.f57f09f8ff8a8p-781, 0x1.5c2afd6c950b4p-800, 0x1.270996c6850f9p-66,
     0x1.7f271307ef48ap-485, 0.0, 0x1.e819c898031f9p-11, 0x1.1fefe201eaa19p-368,
     0x1.9dbcc406bc953p-831, 0.0, 0.0, 0.0, 0x1.8d3fa27487572p-835,
     0x1.863aabd5e56ebp-493, 0.0, 0.0, 0x1.0dd2c29b1d52dp-759, 0x1.cb0e566d6400dp-898,
     0.0, 0.0, 0x1.b348aa9542d64p-374, 0.0, 0x1.62376dfaeb8f8p-679,
     0x1.79896123e6effp-360, 0.0, 0x1.66947261bda6ap-456, 0x1.d72594912e60fp-285,
     0x1.152e64da0972fp-91, 0.0, 0.0, 0x1.120ae7fff0ec2p-54, 0x1.8b68d43dde5a4p-465,
     0x1.c9d7ebc483225p-432, 0x1.dac74cebca147p-696, 0.0, 0.0, 0x1.f47c9aa799b45p-828,
     0x1.113415617a9edp-823, 0x1.970e6525d903bp-11, 0x1.b1e09024eaba2p-640,
     0x1.b11bd433778b1p-420, 0x1.b376447b7d153p-505, 0.0, 0.0, 0.0,
     0x1.e9132fa6e595ep-545, 0.0, 0.0, 0.0, 0x1.573cc797580fdp-943, 0.0,
     0x1.f95cbdfb32fccp-1020, 0.0, 0x1.6992a5501ff23p-640, 0.0, 0.0,
     0x1.d6a7cccff7542p-935, 0x1.b0991bdc11926p-331, 0.0, 0x1.e4daa56ae1755p-627,
     0x1.f9b911b8dd92cp-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d1def0b8ca1b3p-113, 0.0,
     0.0, 0.0, 0.0, 0x1.4fd32289d98bcp-237, 0x1.79e4aa91cf9ddp-954, 0.0, 0.0, 0.0,
     0x1.2e20417ce079ep-110, 0.0, 0x1.a8e316082ba03p-490, 0.0, 0.0, 0.0, 0.0,
     0x1.89e5097519176p-51, 0.0, 0.0, 0x1.53bcc7989aa7bp-546, 0.0,
     0x1.f6e1e4f7dffdcp-185, 0.0, 0x1.441a15a62792dp-799, 0.0, 0x1.cd421553553e1p-270,
     0x1.e17c45ddea5e6p-15, 0x1.ebd8052c6ab39p-474, 0.0, 0.0, 0.0, 0.0,
     0x1.aa02db570e7f6p-797, 0.0, 0.0, 0.0, 0.0, 0x1.9da3731a90299p-1008,
     0x1.81b72492a641ep-302, 0x1.3f2872e13dab1p-167, 0.0, 0.0, 0x1.107edd9cad6d2p-273,
     0x1.03856a4c4895p-333, 0x1.550ca28ae04a6p-542, 0x1.befcf4a767f5fp-582, 0.0, 0.0,
     0.0, 0x1.939399c7e35fap-335, 0x1.b648cdf24bcfcp-949, 0.0, 0.0,
     0x1.62b0f64596428p-681, 0x1.3d239eb352d57p-111, 0x1.8e65f0d47fb07p-383, 0.0, 0.0,
     0.0, 0.0, 0x1.e86ea0ebd79bbp-127, 0x1.b1c798c18f16bp-555, 0.0,
     0x1.5560a51f26456p-869, 0x1.576104cdb92a6p-454, 0x1.64b902dbc5d54p-221,
     0x1.562d97ff9a2fap-763, 0x1.b591d72bd0107p-163, 0x1.fdbe243562ec2p-270,
     0x1.3c913263288b7p-39, 0.0, 0.0, 0.0, 0x1.03ee94391c938p-430,
     0x1.03062ab4bd72cp-473, 0x1.6cd616318aaf8p-697, 0.0, 0x1.1c42fd2d3ddf9p-998, 0.0,
     0x1.1acd24598386dp-898, 0.0, 0x1.c368a3f6acc05p-711, 0x1.e57e1c044bf94p-746, 0.0,
     0x1.5a96b2b14fc96p-957, 0.0, 0x1.e9f30b41eb3ddp-157, 0.0, 0.0, 0.0,
     0x1.9ac1b75e38701p-361, 0x1.c09342007d17p-952, 0x1.3182462378037p-479, 0.0,
     0x1.0fcf06372b463p-427, 0.0, 0.0, 0.0, 0x1.59690c142e561p-499, 0.0,
     0x1.2c75176b5cd17p-488
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x4_t_2 global_bench_acc;
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
        Sleef_float64x4_t_2 local_acc;
        int32_t i;
        ml_double4_t tmp0;
        ml_double4_t tmp1;
        ml_double4_t tmp2;
        ml_double4_t tmp3;
        ml_double4_t tmp4;
        ml_double4_t tmp5;
        Sleef_float64x4_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double4_t tmp0;
            Sleef_float64x4_t_2 tmp1;
            ml_double4_t tmp2;
            ml_double4_t tmp3;
            ml_double4_t tmp4;
            ml_double4_t tmp5;
            ml_double4_t tmp6;
            ml_double4_t tmp7;
            Sleef_float64x4_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_sincosd4_u10kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x4_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(4);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x4_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincosd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincosd4_u10kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
