/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1d2_u10avx2128.c --function \
 *     Sleef_finz_expm1d2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.4ff4b8c24eacp-965, 0x1.867a942481885p-246, 0.0, 0.0, 0.0, 0.0,
     0x1.6d26ef3864bep-324, 0.0, 0x1.7313d7b0f0a0ap-948, 0x1.bc762555cbac2p-700,
     0x1.3e325e2f8834cp-450, 0x1.0726bd5986f14p-176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.496a8e2fd04b2p-521, 0x1.f3c7a1fe9bb1cp-1003, 0x1.771f7f250a988p-243, 0.0,
     0.0, 0x1.3584fe1092e7dp-949, 0x1.799dc9ebb6b84p-990, 0x1.9c16313e4e646p-195, 0.0,
     0x1.540eb3e111af9p-324, 0.0, 0x1.325497c04b76ep-320, 0.0, 0x1.4ccf86b60695ep-192,
     0x1.e4e242cc39284p-89, 0x1.230f161267ff6p-234, 0.0, 0.0, 0x1.b7077b23e41fcp-73,
     0x1.1759942ff7afdp-337, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.288ba389adbcep-623, 0.0,
     0x1.6a1a47ad58d6dp-138, 0x1.347c6776c5008p-508, 0x1.bec8f0e33691fp-333, 0.0, 0.0,
     0x1.df738a4872d3ep-905, 0.0, 0x1.682e42d7e5cf5p-749, 0x1.dd5fc43825a75p-314,
     0x1.90de3ec604dcbp-44, 0.0, 0x1.1cb87d133688p-40, 0x1.a61c89fe290dap-391, 0.0,
     0.0, 0x1.059ad5d70437ap-764, 0x1.43b32c67a72d9p-891, 0x1.e7adcf260df99p-156, 0.0,
     0x1.90f1a58ced41cp-591, 0x1.1d45de45a2613p-913, 0.0, 0.0, 0.0, 0.0,
     0x1.e0dcae769cf16p-152, 0x1.c940e5ced769p-674, 0x1.2123a7456340cp-187,
     0x1.873a7a8b89acp-208, 0x1.85916d86ced1p-202, 0.0, 0.0, 0x1.ba59c11ebeep-401,
     0.0, 0.0, 0.0, 0x1.6e437f756986fp-5, 0.0, 0x1.46ec5970af9c5p-421, 0.0,
     0x1.0ce2e7f272955p-24, 0x1.2ff11698dd157p-853, 0x1.8e869d8725cdap-915, 0.0,
     0x1.2eae833cebebfp-766, 0.0, 0x1.05fdf26e17776p-286, 0x1.a33ea3e40ff27p-364, 0.0,
     0.0, 0.0, 0.0, 0x1.bdf1b6b4d74ep-874, 0x1.8b4737beb4e74p-110, 0.0,
     0x1.dd696fd2daf2ap-773, 0x1.091e93bbbc65ep-602, 0x1.7c310ab43743bp-13,
     0x1.7ef4c14cc0f4ep-794, 0.0, 0.0, 0.0, 0x1.ae98bb8710fc7p-864, 0.0, 0.0, 0.0,
     0x1.05c6682b22c9p-668, 0.0, 0x1.803f181a40d43p-497, 0x1.36c9b0801fa3bp-545, 0.0,
     0x1.e1818510a5452p-816, 0x1.8941b10d2b9efp-970, 0x1.dafd6eb18ee05p-974, 0.0, 0.0,
     0x1.e7bd656be331cp-399, 0x1.dbe34716d1c56p-209, 0x1.a1f7e88bab1d5p-428,
     0x1.55cdc551d6bdp-150, 0x1.79a395fbc0434p-322, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dcfd7c452b67bp-107, 0x1.b7942ee77be3ap-705, 0x1.158bc7dc2c177p-173, 0.0,
     0x1.291d04e36343cp-717, 0x1.58f6e4122d295p-578, 0x1.3de5fe3c65cbap-456, 0.0, 0.0,
     0.0, 0x1.dbf5caba02e1ep-711, 0.0, 0.0, 0x1.efa69647ff74cp-818, 0.0, 0.0, 0.0,
     0x1.97f846d82fc53p-330, 0.0, 0x1.8b706bd4dbfecp-185, 0.0, 0x1.e74f081e2118dp-455,
     0x1.f72b35eccbe7bp-423, 0.0, 0.0, 0x1.a377d7418f5afp-834, 0.0,
     0x1.a6ddead5c80aep-447, 0x1.57771593f0e5p-425, 0x1.be1115bc1904ap-830, 0.0, 0.0,
     0x1.fe646731c4cd2p-672, 0x1.e954f4f071ca8p-707, 0x1.20848a86777bcp-876, 0.0,
     0x1.eaa421665bf35p-151, 0x1.48deea978d027p-762, 0x1.5d3640a2a8701p-463,
     0x1.76a29b92ebe72p-337, 0x1.ba4149f2bb365p-284, 0x1.84abb1644587p-767,
     0x1.3a2bdbf0f0b68p-498, 0x1.3b44c7b5a3fffp-204, 0x1.78d35142ec00ep-284, 0.0, 0.0,
     0.0, 0x1.c9d35cb9409a1p-936, 0x1.7b4e2d7e4c816p-82, 0.0, 0.0, 0.0,
     0x1.fb72bcc083379p-551, 0x1.8b7a2bc64dc18p-247, 0x1.0915b7e1ebad5p-126,
     0x1.35fca489f95ebp-389, 0.0, 0x1.ade2906e90b36p-939, 0.0, 0x1.06f241e64a9bdp-602,
     0x1.80d30c0b92017p-184, 0x1.16f407b651594p-329, 0.0, 0.0, 0x1.63d2c96a371eap-258,
     0x1.473256ea88183p-749, 0.0, 0.0, 0.0, 0x1.d961575026b28p-956, 0.0,
     0x1.a2245e84e98dcp-540, 0x1.072da12bc1478p-354, 0x1.c10871edba815p-271,
     0x1.9dd9a0f098d29p-170, 0.0, 0.0, 0.0, 0x1.e74ea5e062611p-193, 0.0,
     0x1.7b48c393c60b7p-499, 0x1.bc1d86a766e4p-488, 0.0, 0x1.4b3e22df0885dp-675,
     0x1.c921fca533141p-731, 0.0, 0.0, 0x1.53ff0d7ecbc9ap-325, 0x1.039096e5aad61p-54,
     0.0, 0.0, 0x1.fac55e58f6d09p-585, 0x1.90e99cba48b6bp-699, 0.0,
     0x1.dd38643f375f5p-947, 0.0, 0.0, 0.0, 0x1.e3e80b56773e5p-286, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d4ee3a9bb5a21p-53, 0x1.bb58412a8d9p-123, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.723965b6945e3p-91, 0x1.141201a9d2475p-698, 0.0, 0x1.a7fd97d87bfadp-931,
     0.0, 0.0, 0x1.effc0a9990006p-152, 0x1.30051130ea96cp-787, 0x1.cacbc0d394003p-758,
     0.0, 0.0, 0x1.5b859416ae604p-341, 0x1.0fbd0e506059fp-914, 0x1.60c8ad2a8baadp-317,
     0.0, 0x1.659f4a5987063p-322, 0.0, 0x1.c2008d2535b01p-47, 0.0,
     0x1.9ce733295a08dp-205, 0x1.61448f674c3cap-1004, 0x1.2c050b86943a1p-866,
     0x1.4505a865e271cp-1, 0x1.16ace51cf5ef1p-622, 0.0, 0.0, 0x1.1387877bcd3b6p-59,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0fbaa80ce5f4p-358, 0.0,
     0x1.e29b89edfead5p-907, 0x1.b766f2c6fcca4p-173, 0x1.7fb39a52fd871p-328,
     0x1.d716d7897a955p-852, 0x1.b42f0ab73965dp-538, 0.0, 0.0, 0x1.3cff1f09e0db1p-938,
     0x1.c69efe45e7527p-887, 0x1.8c15fa669b64dp-323, 0x1.0bc4916a00365p-876, 0.0,
     0x1.5ba489b6dfcbfp-68, 0x1.8754d8d7f807ap-1002, 0.0, 0.0, 0.0,
     0x1.94bc754331098p-24, 0.0, 0.0, 0.0, 0x1.93f252ac32849p-262,
     0x1.f3de6da20dfdp-335, 0x1.3d213df6acb4ap-958, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0968070c0714p-820, 0.0, 0x1.6acf18ddb66e1p-585, 0.0, 0x1.c90716d809cabp-992,
     0.0, 0x1.9b3c0d57e6209p-611, 0.0, 0.0, 0.0, 0.0, 0x1.a18dc4f37dabcp-642, 0.0,
     0.0, 0x1.e9d0b01cc91a2p-224, 0x1.a6bdb424577e3p-907, 0x1.fb03f7587e5f1p-839, 0.0,
     0.0, 0.0, 0x1.30300e4e89981p-293, 0.0, 0x1.6c3526b99c46p-193,
     0x1.accc75f98c023p-355, 0x1.17197c146961dp-903, 0x1.d43817d6a5f12p-260,
     0x1.7b9630170ae18p-738, 0x1.6b638ab5b2b78p-146, 0.0, 0.0, 0x1.9d8838713aed8p-335,
     0.0, 0.0, 0.0, 0x1.c37013c5b0c78p-886, 0.0, 0x1.9201789a7d61bp-399, 0.0,
     0x1.9866edb98feb2p-431, 0x1.13d7a3eef3467p-574, 0x1.5b0c9a1ec55abp-781,
     0x1.90382915ed44fp-1001, 0x1.79cb99320411ap-866, 0x1.51c6b630bf829p-209,
     0x1.81641e862f41ap-24, 0.0, 0x1.bfebaa32a103p-823, 0x1.04ef95c91e9c9p-582,
     0x1.633420cae1195p-23, 0.0, 0.0, 0x1.7aa7f134168a8p-308, 0x1.35e72d018baf1p-152,
     0x1.2aad5d12bdcc5p-542, 0.0, 0x1.179fade32d0a2p-958, 0.0, 0.0,
     0x1.cf129c228851p-322, 0x1.13b627e6dd9a3p-786, 0.0, 0x1.ebe172a0e2e6bp-790, 0.0,
     0.0, 0x1.7e39c20fb3cafp-307, 0x1.69664ac970f2p-421, 0.0, 0x1.8311753b02f3cp-900,
     0x1.c620b630571a2p-208, 0x1.6703075f99b67p-798, 0x1.5c916fb1d82ccp-983, 0.0,
     0x1.ac33ab290f4c4p-457, 0x1.b45df6069e7d9p-773, 0.0, 0x1.1a069292a1ac6p-778,
     0x1.cf2921cef82b5p-34, 0.0, 0x1.f652e6653307fp-943, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.737a5ae6ce51fp-111, 0x1.35392495b8af4p-589, 0.0,
     0x1.9a855a5f707e7p-333, 0x1.362093882cedfp-141, 0x1.25be8e4ba2628p-150, 0.0, 0.0,
     0.0, 0x1.e9b1b17045831p-548, 0x1.9177be28ad5acp-105, 0x1.c73bbc75ee39ep-402, 0.0,
     0.0, 0.0, 0x1.3ff31c6b40868p-717, 0x1.2a4e42ad5eb7ap-255, 0x1.1ca96c717331cp-850,
     0.0, 0x1.c69107116f747p-744, 0x1.9aba86a5306e4p-1013, 0.0, 0.0,
     0x1.faf4bbe9a97f4p-830, 0.0, 0x1.1568e8444dcbcp-171, 0x1.62759f38a7167p-213, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.666ec5676a6fap-845, 0x1.0f2396c0c742ep-816,
     0x1.6f6a8bdd44136p-562, 0x1.545964ab85c0fp-675, 0.0, 0x1.9a6cbe35ea40ep-473, 0.0,
     0.0, 0x1.2efb89ca850ap-330, 0x1.bd491414bea27p-498, 0x1.16a2e88c778acp-996, 0.0,
     0x1.f78b95a0cda33p-262, 0x1.99cd6335a40b1p-791, 0x1.f42c2d4703328p-297,
     0x1.badcc329168eep-827, 0.0, 0.0, 0x1.3cfd9f291d13ep-272, 0x1.ee3b4940882c9p-782,
     0.0, 0x1.348f641718c45p-499, 0x1.bab9afa8fecccp-104, 0.0, 0.0,
     0x1.7d18063c22605p-440, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d778da3add22ep-893, 0.0,
     0.0, 0x1.e15614b2b6b92p-740, 0x1.c49ef63494f6cp-835, 0.0, 0.0,
     0x1.2da06fd3b7a15p-673, 0.0, 0x1.8c3bee3863b54p-469, 0x1.b54ea97ca7371p-156, 0.0,
     0x1.7e8153970af32p-144, 0.0, 0.0, 0x1.7e51aa8c074a3p-774, 0x1.00209b208e1f6p-105,
     0x1.7d0107f00819cp-752, 0x1.474f159a7bac6p-16, 0.0, 0.0, 0.0,
     0x1.fced9bc76e33bp-940, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ffeb7045eb467p-874, 0x1.f9ed7e82d4b26p-846, 0.0, 0.0, 0x1.cbd5c16b5850cp-722,
     0x1.9502e97757ebbp-543, 0.0, 0x1.2f87b4bbd6829p-689, 0.0, 0x1.ad9dfe38c2814p-821,
     0.0, 0x1.37aebf87ef855p-555, 0x1.2cd3a7e677038p-516, 0.0, 0.0, 0.0,
     0x1.675401ae760b9p-182, 0.0, 0x1.e6dd686446745p-790, 0.0, 0.0,
     0x1.9fd30b3c77efcp-323, 0x1.d619e536eb93ap-185, 0x1.c13e89d514043p-480,
     0x1.95476497fe5e1p-654, 0x1.1d11c516162a9p-670, 0x1.33e3e9910a642p-272, 0.0, 0.0,
     0x1.327f8cf1fbdbep-97, 0x1.cd2616ebedc26p-214, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a0f94a3415176p-393, 0x1.f2ea4d85f02cap-494, 0.0, 0.0, 0x1.f857a2c45bdbfp-660,
     0.0, 0.0, 0x1.4925293e7da62p-560, 0x1.56ddf688994cp-108, 0x1.0816192dfc597p-320,
     0x1.0eedb2a43ccc4p-863, 0.0, 0.0, 0.0, 0x1.82d6879b18f5cp-193, 0.0,
     0x1.934f6dd10d932p-680, 0x1.bcc28b9e02783p-309, 0.0, 0x1.b2d00e74fba7fp-275,
     0x1.df40af753e3b1p-1003, 0.0, 0.0, 0x1.aff0a090c7f41p-931,
     0x1.6c26d55d7ab9bp-579, 0.0, 0.0, 0x1.d9e2475305133p-748, 0x1.43e20f9a406d4p-858,
     0.0, 0.0, 0.0, 0x1.f247f0902d2edp-723, 0.0, 0x1.282ce6c01c4f5p-619,
     0x1.d704bc66dfe85p-156, 0.0, 0.0, 0x1.dd141109d59ap-709, 0.0, 0.0,
     0x1.6f5cc87d7df72p-165, 0x1.21a14c6d5088ap-56, 0x1.da2b4f94a763ep-575, 0.0,
     0x1.22afa749d9d1p-959, 0x1.ed3549c3f727ap-740, 0.0, 0x1.f303a4a65c8bep-224,
     0x1.4a4752c13e1fbp-239, 0x1.7aca5db29bb5cp-976, 0x1.3ccd14aa82d02p-873, 0.0,
     0x1.86feaf4da4513p-792, 0.0, 0x1.cc7fc4695375ap-1009, 0x1.b2a445b51a264p-383,
     0.0, 0x1.bd6e4b4e9898ap-927, 0.0, 0.0, 0x1.f553c3d0d31ebp-789, 0.0,
     0x1.7d4950d8470abp-487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a47681a825ec9p-2, 0.0,
     0.0, 0.0, 0.0, 0x1.4b23e79df6829p-9, 0.0, 0x1.c63e265086d31p-519, 0.0, 0.0,
     0x1.ceae4cc256b54p-552, 0.0, 0x1.3777cfc815c3cp-160, 0.0, 0x1.9bb3e6a26147p-465,
     0x1.4c452efee5a25p-622, 0x1.5d9bff278a2c4p-88, 0.0, 0.0, 0.0,
     0x1.b8e0575ab7e2bp-587, 0x1.687972d0bc0ddp-645, 0.0, 0.0, 0.0,
     0x1.dffebafa5a155p-476, 0x1.fc62f98761e32p-688, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fe4e41904d198p-131, 0x1.5b4b5848ed0e2p-147, 0.0,
     0x1.52730a4c2f26fp-559, 0x1.fb77d49c10afp-673, 0x1.72d38fc5d4f9fp-93,
     0x1.1fda74aa274d5p-841, 0x1.769af31287fc9p-68, 0.0, 0x1.87006929ba984p-178,
     0x1.7083868dc92b5p-572, 0x1.dd89c74aa3dcp-162, 0.0, 0x1.6d9babe36348bp-786,
     0x1.985adf030998ep-16, 0x1.0aff32ca813f2p-810, 0x1.ea05b36238f43p-727,
     0x1.e5c17914eed25p-710, 0x1.6487e911c04c6p-478, 0.0, 0.0, 0x1.bc872503e6ca3p-38,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dbfe131896cep-420, 0x1.5e9905f6965d3p-168,
     0.0, 0x1.31f95f0e54bc8p-447, 0x1.19159cb31df13p-977, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8c24a639ce68p-766, 0.0, 0x1.c2b01234acca8p-549, 0x1.7533db3d84087p-88, 0.0,
     0x1.e3ef01e107fc8p-102, 0x1.4ce61728a96a1p-572, 0.0, 0.0, 0x1.4f047460bad0fp-503,
     0x1.7d8797f4ac7c3p-41, 0x1.d9f27e78c3e05p-207, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.40de394e2f92ep-645, 0.0, 0.0, 0.0, 0x1.cbb9a6e73fb73p-93, 0.0,
     0x1.6c6f333be9405p-25, 0x1.1a77dd107447ap-868, 0.0, 0.0, 0x1.af2845f5def3cp-290,
     0.0, 0x1.d842fa31258abp-314, 0.0, 0x1.86d5747275456p-46, 0.0, 0.0,
     0x1.73f8b9a562022p-923, 0x1.eaf1c089f1e77p-783, 0x1.452a6099edf14p-824, 0.0,
     0x1.f6692bb18fe31p-1017, 0x1.ea650e247ab02p-796, 0.0, 0.0,
     0x1.df2077d91782cp-676, 0x1.d385aaa112c14p-924, 0.0, 0x1.16ebb05b0dad5p-487, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5402031bba031p-522, 0x1.23be0e222906fp-990, 0.0, 0.0,
     0x1.7639fec768e0bp-625, 0x1.7214e6321bd44p-937, 0.0, 0x1.e0b2886f281e9p-41, 0.0,
     0x1.e6e52cac7f6dp-181, 0.0, 0.0, 0.0, 0.0, 0x1.6a44be775c2fap-290,
     0x1.09878967c77d5p-703, 0.0, 0x1.71a36ddef3695p-608, 0.0, 0.0,
     0x1.95470d34f3e42p-530, 0.0, 0.0, 0.0, 0.0, 0x1.f1e44a7e21885p-624,
     0x1.8da36c9232be1p-378, 0x1.65494bb42917fp-57, 0.0, 0x1.e952f4bdc249bp-701,
     0x1.1b7804c5e826ep-948, 0x1.df04b0faddf09p-420, 0x1.e40bf8dffcefbp-55, 0.0,
     0x1.12eb81d4c3a69p-114, 0x1.fe1e64558602fp-377, 0x1.034de34b9e3e3p-134,
     0x1.947e50da25a81p-813, 0.0, 0x1.6df4d4407ec9bp-476, 0.0, 0x1.595795985bfa4p-991,
     0x1.af0ab9a6c30dbp-569, 0.0, 0.0, 0.0, 0.0, 0x1.57378769dcf2ep-226,
     0x1.1526102cec3f8p-122, 0.0, 0x1.b1352f5d7bd2cp-580, 0x1.7d3ff4ac6db83p-362,
     0x1.87a6258a65937p-947, 0.0, 0x1.0ea02db265803p-518, 0x1.fbf70af16111p-711, 0.0,
     0x1.3ecf9d0323b2ap-583, 0.0, 0x1.d30fb40c105b1p-909, 0x1.6e49e28472436p-122,
     0x1.6ac2948210717p-235, 0.0, 0x1.b2f633c10eb35p-956, 0.0, 0.0, 0.0,
     0x1.9129bec0eb621p-557, 0.0, 0.0, 0x1.40d84ce33e06cp-71, 0.0,
     0x1.6dacdaae1f70ap-549, 0x1.3cd59ae71fac8p-261, 0.0, 0x1.12992e9a3e68ep-1016,
     0x1.4598ef9986dd5p-214, 0.0, 0x1.688ab18185556p-1003, 0x1.5de998fcf1dddp-549,
     0x1.d1b1a13e79932p-736, 0.0, 0.0, 0.0, 0x1.3f6c4e986730fp-504,
     0x1.61046f6bbb8a9p-674, 0.0, 0.0, 0x1.3d8c3cb722449p-136, 0.0,
     0x1.ebc45d4f4cf49p-487, 0x1.92d35ddd30736p-437, 0x1.96b18968c83cep-876, 0.0, 0.0,
     0x1.2e0900072ca6cp-512, 0x1.7759b95d79f68p-794, 0x1.bbb893b3672bep-799, 0.0,
     0x1.6ccdba3d1125ep-422, 0x1.70b1a59ea2716p-341, 0.0, 0x1.419b27ff1c322p-89,
     0x1.03e1c5d993024p-846, 0.0, 0x1.482700eb85601p-900, 0.0, 0x1.271069d544e25p-667,
     0x1.b8211e1643a91p-414, 0.0, 0.0, 0x1.a4b8bbf78ea17p-524, 0x1.87e92c52ff627p-748,
     0.0, 0x1.57fc95c096318p-76, 0.0, 0.0, 0.0, 0x1.b0569d74c80e4p-472, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.415114e0b3b08p-740, 0.0, 0.0, 0.0, 0.0, 0x1.b712c7ce21189p-837,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30964b37474e5p-971, 0.0,
     0x1.e46171838cf7bp-119, 0x1.eefb9f62c5ea8p-718, 0x1.ce644f07e31f9p-609, 0.0,
     0x1.f7796f188134fp-559, 0x1.875d991372adp-736, 0x1.14c9961164f31p-553, 0.0, 0.0,
     0.0, 0x1.c30b7ff15a492p-404, 0x1.80ed1288ffe1ep-823, 0x1.5f676343ff04fp-399,
     0x1.64d0910abf894p-736, 0x1.19e935fa77a5p-753, 0x1.dc5f1daf847e6p-542,
     0x1.85a8a55326048p-152, 0.0, 0.0, 0.0, 0.0, 0x1.517812d50734cp-296, 0.0,
     0x1.628f08b28de32p-968, 0.0, 0.0, 0x1.df4e79ae034e5p-934, 0.0,
     0x1.a04d1bd02f99fp-359, 0x1.1e439fbb67fdp-796, 0.0, 0.0, 0x1.e4f23b0852eafp-411,
     0.0, 0.0, 0.0, 0x1.287014c511537p-927, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2cb9878c6a5f9p-1009, 0.0, 0x1.7d67e085261fbp-423, 0x1.0dbc8aa2b804fp-900,
     0.0, 0x1.19d260f14fcfep-515, 0x1.6a46091146b96p-58, 0x1.3429f1dc18bdap-152, 0.0,
     0.0, 0.0, 0x1.fb7cbbf06e90cp-671, 0.0, 0.0, 0.0, 0x1.4311a6a5fc992p-413,
     0x1.9185f725183fp-901, 0x1.5d644593a4966p-619, 0x1.f5d45b9d0169ep-573,
     0x1.32c9505190be6p-370, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.45edb2ab33116p-626,
     0x1.f1b43fbea53e3p-218, 0.0, 0x1.a3e55e343a7ep-999, 0.0, 0x1.376c92f372d94p-5,
     0.0, 0x1.81660035b1811p-162, 0.0, 0.0, 0x1.7ad0fbc86f2fdp-415,
     0x1.d80e86c5fce44p-119, 0.0, 0.0, 0.0, 0.0, 0x1.3f4d69e51d262p-928,
     0x1.9577f534d6365p-709, 0.0, 0.0, 0x1.8f3690ee0e368p-583, 0.0, 0.0, 0.0,
     0x1.3594435ab9487p-935, 0x1.e54afef237445p-448, 0x1.c7133ffd66bf1p-236,
     0x1.85bf87ae9fb9ap-743, 0x1.22de03265a5fdp-69, 0x1.e41f2c478bed7p-10, 0.0,
     0x1.7519598a6ff79p-923, 0x1.2027ad3c480d6p-559, 0x1.401a344dbbf05p-798, 0.0,
     0x1.8f6a40181daaep-207, 0.0, 0x1.0c6a02a493956p-300, 0x1.a0885d3981dd4p-865, 0.0,
     0.0, 0.0, 0.0, 0x1.832276da24211p-305, 0x1.bcd582a321f04p-7,
     0x1.08db965db55fbp-456, 0.0, 0x1.d5e8b97d8dfafp-747, 0.0, 0x1.de285901a0311p-646,
     0x1.53d1020c82757p-39, 0.0, 0.0, 0x1.616072f11ee16p-612, 0x1.44906e9f4c6bep-674,
     0.0, 0x1.47c0c9bf0b9a8p-969, 0x1.3b476180728c4p-990, 0.0, 0.0, 0.0, 0.0,
     0x1.e084a5e40ef4fp-241, 0x1.c21dc5c2b7b61p-841, 0x1.6690fdb11e5c8p-897,
     0x1.9787e9bac1d73p-96, 0.0, 0.0, 0.0, 0x1.b13f612bf7ddcp-792,
     0x1.fdcb1b3ff58d6p-90, 0x1.2e63687b678efp-360, 0.0
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
            tmp1 = Sleef_finz_expm1d2_u10avx2128(tmp0);
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
    printf("Sleef_finz_expm1d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expm1d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
