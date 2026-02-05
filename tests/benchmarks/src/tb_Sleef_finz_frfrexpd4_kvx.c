/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpd4_kvx.c --function \
 *     Sleef_finz_frfrexpd4_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.45157b165f372p-716, 0.0, 0x1.fb513df810d87p-13,
     0x1.faa4adf7a94d5p-43, 0x1.2174a64571c5ep-293, 0x1.80cd1a3cedceep-101,
     0x1.f7a1a27ac44ddp-993, 0.0, 0x1.edf9f19708fddp-497, 0x1.926b63490bd76p-1015,
     0.0, 0x1.3fd43d126e2b9p-338, 0x1.cdfd7e14559bdp-253, 0x1.5894b6b2ced37p-959,
     0x1.bc37a956b8881p-653, 0.0, 0.0, 0x1.8377cccfc2d7dp-434, 0x1.adbd162686657p-918,
     0x1.83598cbfb56ap-185, 0.0, 0x1.cdbc0fd9836e6p-144, 0x1.a87da3376a17p-285,
     0x1.2c79915b6c72p-859, 0.0, 0.0, 0x1.616fc22ef2678p-237, 0.0, 0.0,
     0x1.9e94b7f420c94p-343, 0x1.4042604441e8ep-134, 0x1.f00bd9f2e3507p-108, 0.0,
     0x1.3dd96c6be8ee3p-159, 0x1.1ab2d90f64d33p-228, 0x1.ea7f32401931bp-317, 0.0,
     0x1.c026960eda708p-388, 0.0, 0.0, 0.0, 0.0, 0x1.8faa84033b2f9p-543,
     0x1.6e8f954725355p-289, 0x1.1131ab3b1ff48p-128, 0x1.c3c695045f8d1p-342, 0.0, 0.0,
     0.0, 0x1.92741b4683176p-754, 0x1.e52016a994a31p-185, 0x1.d8b2e54543fc6p-564,
     0x1.368860229b5ap-746, 0.0, 0.0, 0.0, 0x1.7a9dc7852b0eep-78, 0.0, 0.0,
     0x1.dd089e975a53dp-729, 0x1.01a0097e936bbp-486, 0x1.4248948cb21dp-24, 0.0,
     0x1.586af7bf1b7c9p-689, 0x1.a7b55f359ad82p-941, 0x1.b577b22a78632p-544, 0.0, 0.0,
     0x1.56195c7ec0748p-682, 0.0, 0x1.18ccc4f5af15dp-370, 0x1.0f17d227099b6p-345, 0.0,
     0.0, 0x1.17a5b0bf3872bp-506, 0x1.7cf3efa5835a5p-626, 0.0, 0.0, 0.0, 0.0,
     0x1.fd0f930050641p-915, 0.0, 0x1.c59567e0e3fe1p-994, 0.0, 0.0,
     0x1.a2b256dbf5af5p-584, 0x1.a3d3c05779b6p-681, 0.0, 0.0, 0.0,
     0x1.ffc6b5491f872p-578, 0.0, 0.0, 0.0, 0x1.040fb0d0ad244p-677,
     0x1.5f623d13a1cb7p-440, 0.0, 0.0, 0x1.96d5801dbb082p-763, 0x1.339d13390f9b2p-546,
     0.0, 0x1.495ef666f4891p-333, 0.0, 0x1.1a1d24e6c0e14p-132, 0.0, 0.0,
     0x1.ccfbb881e509fp-625, 0x1.58145f903d2e4p-432, 0x1.9c2dbe2a85e42p-438,
     0x1.99909803a193fp-422, 0x1.72c371c799a67p-999, 0x1.e04bf0f334fc1p-652, 0.0, 0.0,
     0x1.6bd6b2cd81b01p-910, 0x1.8725d892d5833p-329, 0x1.11108e6ff603p-276, 0.0, 0.0,
     0.0, 0x1.d0893ddba19d6p-29, 0.0, 0x1.fea6efcf9a299p-775, 0x1.f8ea9df627817p-104,
     0x1.bf9c874c0e423p-293, 0x1.1c8360a14329dp-391, 0x1.627a5db386706p-306, 0.0, 0.0,
     0x1.359b7dab3b48dp-112, 0x1.1c784ffc86697p-285, 0.0, 0x1.13bab0eea3fc5p-741,
     0x1.600a6be9c5da8p-275, 0.0, 0.0, 0x1.c2b73da2b4669p-451, 0.0, 0.0,
     0x1.b8b0aeaf757d2p-972, 0.0, 0.0, 0x1.229cac91fb31bp-555, 0.0, 0.0, 0.0,
     0x1.2ffa7c90ca96ap-588, 0.0, 0x1.c344bc4dbb904p-923, 0.0, 0x1.caa05fbfc80d1p-14,
     0x1.56656431861c9p-90, 0x1.b593b28dff524p-916, 0.0, 0.0, 0x1.6580a8db67a56p-626,
     0x1.c50303eadd291p-862, 0x1.c940cee7ebf77p-662, 0.0, 0x1.40f038f3a9394p-898,
     0x1.9984f77d350f3p-86, 0.0, 0.0, 0x1.fb1c7d8c4b0e3p-99, 0.0, 0.0,
     0x1.a7f503847f066p-57, 0x1.a256eef531c3ap-898, 0x1.5f5aaa4c903c3p-734, 0.0,
     0x1.c9e2bd2ef958bp-802, 0.0, 0x1.8c97527940ffbp-898, 0x1.46a1f492eaf08p-215, 0.0,
     0x1.f63924127cd42p-16, 0x1.dce2c16419495p-123, 0.0, 0x1.9237f52020829p-503,
     0x1.444b8b6decb7dp-1001, 0x1.53288b5dffd56p-834, 0x1.7b6e443603a77p-134,
     0x1.78715dd36b5d6p-935, 0.0, 0.0, 0x1.961e047b15de5p-526, 0.0, 0.0, 0.0,
     0x1.505ff10542e2bp-1010, 0.0, 0x1.672cc19479e5dp-980, 0x1.8b96646f47bb6p-80,
     0x1.3c46ba5c3d3c4p-998, 0.0, 0x1.8edaef6fb1398p-595, 0x1.1a3cf09c2e752p-864,
     0x1.70feb9f5ec611p-533, 0.0, 0.0, 0x1.3dc8ea4b0bd5bp-980, 0x1.64364338ca4fp-487,
     0x1.d906b7d0e497fp-1002, 0x1.652c36b7f82eep-392, 0x1.0a48a80ac042bp-494,
     0x1.8404678f34407p-876, 0.0, 0.0, 0x1.91356a4413255p-366, 0.0,
     0x1.d2b28d29d34d8p-953, 0.0, 0.0, 0x1.3ffd6f0a5af12p-902, 0x1.48a52cf302a7p-1020,
     0x1.d4387b168100dp-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3d51db2ab6dap-214,
     0x1.7decbc12f69e6p-909, 0.0, 0.0, 0x1.cd6d673d449e3p-975, 0x1.7a29114a38bep-928,
     0.0, 0x1.ff4948885fed5p-45, 0.0, 0.0, 0x1.1f5113ef2c6fep-986,
     0x1.1165c78ec73b1p-662, 0.0, 0x1.12f5003e274d4p-392, 0x1.07ebef4853de2p-273, 0.0,
     0x1.fc0d94c052ca7p-133, 0x1.cd03d11d05765p-314, 0x1.d2ab02a7900ddp-59,
     0x1.18c04d6f14c1fp-897, 0x1.b61fa983760e2p-1013, 0x1.698d671cc2aedp-211, 0.0,
     0.0, 0x1.a3fe8edffa451p-22, 0x1.679677125db1fp-411, 0x1.6f17846d282d9p-802, 0.0,
     0x1.d4f591b25c9eep-324, 0x1.3c6ddb810accap-385, 0x1.df9757aa7c825p-174, 0.0,
     0x1.dcf4f269c6409p-555, 0x1.f732392dee8bcp-556, 0x1.d5ba6fa54c6e2p-946, 0.0, 0.0,
     0x1.a6a337f8c39ep-977, 0.0, 0x1.0abc20e9c8beap-548, 0x1.de94d6d9bca34p-87, 0.0,
     0x1.8ef82af5c5a8ep-969, 0.0, 0x1.55b4ff3b4d2b7p-627, 0.0, 0.0, 0.0,
     0x1.a871c5038307fp-352, 0.0, 0.0, 0.0, 0x1.e7748e33bec56p-94, 0.0, 0.0, 0.0, 0.0,
     0x1.8de5b01bb9558p-131, 0.0, 0.0, 0.0, 0.0, 0x1.6db4b9c9d50a1p-395,
     0x1.a74cf270c9cb5p-428, 0x1.8f7874502b89p-40, 0.0, 0.0, 0.0,
     0x1.a7cf22b32b8c4p-545, 0x1.9a864655af794p-700, 0x1.5fceb039ff456p-347,
     0x1.34ead822ae0a7p-969, 0.0, 0.0, 0.0, 0x1.a4a443125585cp-410,
     0x1.54e44da010dc4p-105, 0.0, 0x1.6d061a01ccc52p-136, 0.0, 0.0,
     0x1.88364239184b9p-529, 0.0, 0x1.d2a2f3674d32bp-870, 0.0, 0.0, 0.0,
     0x1.07647a6cc1e55p-105, 0x1.bb3dd61bbd7c2p-870, 0x1.cb2a228b338f4p-530,
     0x1.427a8b060622ep-191, 0x1.b52f151ed316dp-178, 0.0, 0.0, 0x1.5618904222014p-290,
     0.0, 0x1.427f41ec4259cp-962, 0x1.5ccf44d8f6a3cp-1009, 0x1.ef943070482adp-376,
     0x1.d798b332e421cp-460, 0x1.55a928c416225p-342, 0.0, 0x1.2107810b9032ep-425,
     0x1.311cc6a151858p-239, 0x1.228450e008497p-709, 0.0, 0x1.abdeb49b669e1p-428,
     0x1.e936189db043p-216, 0.0, 0x1.62c4c2e333b5p-441, 0x1.001a495229b09p-156, 0.0,
     0x1.4b878be789878p-463, 0x1.82216bad701e1p-591, 0.0, 0x1.363778ba8105ap-155, 0.0,
     0x1.a126782be6e2fp-438, 0x1.21b5d233395bap-19, 0x1.0fa8b292f9f79p-401, 0.0,
     0x1.3f6e3786c3923p-627, 0x1.a94611a86ba0cp-514, 0x1.a2ba65a616247p-578,
     0x1.f6928a71ea281p-881, 0.0, 0x1.c68100fccbff2p-27, 0x1.1265af61926cfp-577, 0.0,
     0x1.e2514baef8403p-711, 0x1.6b1d977fd2993p-874, 0.0, 0x1.17dbecaffc05cp-691, 0.0,
     0x1.e7e0eee9044dbp-663, 0.0, 0x1.1944900304d62p-170, 0x1.71ec9d8d2aa57p-107,
     0x1.3d7373f92850ap-179, 0.0, 0.0, 0.0, 0x1.1e5f560a7cbf3p-766, 0.0,
     0x1.b6848e12d1409p-357, 0.0, 0x1.1f51839924469p-275, 0x1.fe641f13bf2c1p-311, 0.0,
     0.0, 0.0, 0.0, 0x1.f2d3e69e1e7f1p-323, 0x1.d3bf79c71e066p-190, 0.0, 0.0,
     0x1.765c9898ea46bp-165, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.544dc3a1c2f89p-226, 0.0,
     0x1.f5ffd930529f4p-871, 0.0, 0.0, 0.0, 0x1.9d178cb5d608dp-755,
     0x1.42432f027599cp-173, 0x1.e1a97d0845d86p-167, 0.0, 0.0, 0x1.27da71e822105p-502,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a6d51547d069p-175,
     0x1.a4b8c6f04a1a4p-864, 0x1.cde607cdf735fp-995, 0x1.d4eb22dd6bd04p-543, 0.0, 0.0,
     0x1.c5f28b4cac7dep-496, 0.0, 0.0, 0x1.df900bbb3e0dep-162, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bf07685435615p-23, 0.0, 0x1.d9cc9c3a84f25p-292, 0.0,
     0x1.691e07c26afc6p-390, 0x1.e463f721ee187p-3, 0x1.16be72a4cc183p-871, 0.0,
     0x1.b8e5dd542410bp-533, 0.0, 0x1.a4de95a23f174p-23, 0.0, 0.0, 0.0, 0.0,
     0x1.8ea22b240259ap-845, 0x1.e8152a806dd85p-793, 0x1.3121cfd2f5ed7p-751, 0.0,
     0x1.a5bf3231589fap-221, 0.0, 0.0, 0x1.485bf323c8075p-370, 0.0,
     0x1.003fe392129f6p-61, 0x1.6c1156edbf369p-536, 0x1.48d9186dbc0bdp-409,
     0x1.1ed958510f0a6p-700, 0x1.956e56956c196p-525, 0.0, 0.0, 0x1.69609e01d9fbbp-804,
     0.0, 0x1.506ec2285fd62p-285, 0x1.34abcd7711eb3p-85, 0x1.586c3f1220355p-357,
     0x1.9d4185958371ep-82, 0.0, 0x1.a37a200d4c456p-583, 0x1.14166e35a7fa4p-425,
     0x1.9318e883640d5p-790, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4155429a59b9cp-50, 0x1.19915624fd445p-550, 0x1.c09e2e7bdb358p-320, 0.0, 0.0,
     0.0, 0.0, 0x1.c456355ba4256p-1017, 0x1.96098a200d12ap-1022, 0.0, 0.0,
     0x1.8e1807144ae3bp-283, 0x1.a8a29978eb798p-113, 0.0, 0.0, 0.0,
     0x1.f711c5c7ee8b8p-883, 0x1.8f898c8eb3c72p-974, 0x1.6eb20d6279f3ap-902,
     0x1.f15e1bd301f54p-67, 0x1.1a9922f0f29ap-1014, 0.0, 0x1.ac2fa63d0d9e4p-594,
     0x1.eab35059d2d1bp-640, 0.0, 0.0, 0.0, 0x1.84efd652065b5p-373, 0.0, 0.0,
     0x1.4c581c1c2398ep-112, 0.0, 0x1.d4f8b7936a53bp-803, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.375753f205e0cp-910, 0x1.e8341ecce8a62p-233, 0.0, 0x1.e6e095ccb768p-420, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.156d891cbbc7fp-246, 0x1.8c14470f1156dp-217, 0.0, 0.0,
     0x1.8de84a37b2577p-430, 0x1.f4068fec4e507p-977, 0.0, 0.0, 0x1.234079e48421ep-127,
     0.0, 0x1.35655da56bba4p-634, 0.0, 0.0, 0x1.4fbe43461d3a1p-901, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bfe6bc7ffc953p-676,
     0x1.05ed184098687p-877, 0x1.20fcfc9415359p-750, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a501f03938eafp-536, 0x1.b286cd7ca51d9p-975, 0x1.a63447abbad4ep-358,
     0x1.d3268c832c7afp-966, 0x1.b6912e93d0845p-693, 0x1.ffe976257d751p-515, 0.0,
     0x1.00286a93b90f6p-947, 0.0, 0.0, 0x1.0371c704f124bp-364, 0.0, 0.0,
     0x1.79c96edfa9a26p-876, 0.0, 0.0, 0.0, 0x1.f3a3e08606a93p-93,
     0x1.7d836795d4066p-647, 0.0, 0x1.28607cb24d0fcp-284, 0.0, 0x1.435f99c0057e6p-703,
     0.0, 0.0, 0x1.882d25fa6fd41p-397, 0x1.2588d1972550bp-851, 0x1.b8004a74487c2p-278,
     0.0, 0x1.b8bc809084a5ep-362, 0x1.3229043c43907p-612, 0x1.b29b40db88001p-568, 0.0,
     0.0, 0x1.51c32fe5a8ec7p-698, 0x1.f84e7a28f475ep-79, 0x1.8d49a80fd7d9ep-962, 0.0,
     0x1.6f31e41d5185ep-141, 0x1.c68263442cd2cp-753, 0.0, 0.0, 0x1.7868590241cd5p-324,
     0.0, 0x1.0f164e8a8017ep-356, 0x1.1b78a54ffba42p-876, 0x1.5fb7fa41ebb1cp-471, 0.0,
     0.0, 0x1.c15fc24f5620ep-226, 0.0, 0x1.8209e427fd92ap-192, 0.0, 0.0,
     0x1.adae9953bc98fp-656, 0.0, 0.0, 0.0, 0.0, 0x1.2154ed88ea927p-164,
     0x1.5d147b70a9eefp-330, 0.0, 0.0, 0x1.e7f9fb6cd5c7ep-418, 0.0,
     0x1.f5b030de62e03p-111, 0x1.ffda42caf4f3ep-367, 0.0, 0.0, 0x1.4e36e9f8e1611p-198,
     0x1.2290e080ed457p-976, 0x1.7c2e7df099df2p-1018, 0x1.db470c202b79fp-424, 0.0,
     0x1.afb9f10f0cb24p-427, 0x1.956251c121b35p-85, 0x1.c8d71baca16cap-133, 0.0, 0.0,
     0x1.1908598556337p-636, 0x1.fac067515694ap-189, 0x1.6da159db58027p-608,
     0x1.f624273c0feecp-644, 0x1.233fa0faf43d9p-465, 0.0, 0x1.64c9f74865563p-485, 0.0,
     0x1.6a042aabac144p-346, 0x1.0d03ca387d0dap-534, 0x1.877ad210cbe0dp-276,
     0x1.6539a9bf0d4aep-697, 0.0, 0.0, 0.0, 0x1.5db055dd2f542p-550, 0.0, 0.0, 0.0,
     0x1.f66294e39499fp-298, 0.0, 0.0, 0.0, 0.0, 0x1.c03b826bd338p-283,
     0x1.23eb03da5e57fp-736, 0.0, 0x1.d82ee3075290fp-369, 0.0, 0.0,
     0x1.20f3b5c18db66p-1016, 0.0, 0x1.2cb910ab5e75ap-17, 0.0, 0.0, 0.0,
     0x1.df7683a20aafap-651, 0.0, 0.0, 0.0, 0.0, 0x1.a0d58039e9603p-165, 0.0,
     0x1.08e7348e33aadp-384, 0x1.419b1159b7537p-973, 0x1.aba90f4742b07p-179, 0.0,
     0x1.a08ede00d3c71p-404, 0x1.9bc663a7dc305p-342, 0x1.a099dd586775ap-788,
     0x1.b07330639fe1p-824, 0x1.fbaa53162140ep-157, 0x1.de3a80e6196e3p-478, 0.0, 0.0,
     0x1.8477b4434287dp-221, 0x1.1fabe2e6ef4f4p-123, 0.0, 0x1.24c55fdfa5373p-584,
     0x1.e7a0f71df005cp-730, 0x1.fcb2f7d1995p-961, 0x1.59b05182cdd7fp-286,
     0x1.986c359967c27p-475, 0.0, 0.0, 0.0, 0x1.109c0fdd5e65dp-546, 0.0,
     0x1.b4ff63e55658p-422, 0x1.a49cd47f2040ep-631, 0x1.40fbb44411d55p-763,
     0x1.3811713813bp-90, 0.0, 0x1.06896f2242p-575, 0x1.d19dc6fbfd50dp-855, 0.0, 0.0,
     0.0, 0.0, 0x1.87c25a0912371p-388, 0.0, 0x1.d4de0d95b72b1p-974, 0.0,
     0x1.cae3bf7ee6bbp-528, 0.0, 0.0, 0.0, 0x1.4ca2354e4ff9ap-563, 0.0,
     0x1.2d89994702ab8p-833, 0x1.240cebc4e1e0bp-954, 0.0, 0.0, 0.0,
     0x1.fae8968cff8fbp-338, 0.0, 0x1.a682efa8bb9bbp-666, 0x1.8eb61a32c4621p-492,
     0x1.58e6feeba4d38p-455, 0.0, 0.0, 0x1.8d8d3f4334b53p-166, 0x1.b391e052e9cc3p-966,
     0x1.017f2ac2e28f5p-596, 0x1.56c8707a77e73p-208, 0.0, 0x1.2bdd1010587f2p-565, 0.0,
     0x1.cd8fb3ab39adep-783, 0.0, 0.0, 0.0, 0x1.59f91d3d2942cp-145,
     0x1.d0a1b65fa4b07p-439, 0.0, 0.0, 0x1.6e33545bd3b8ep-146, 0.0, 0.0,
     0x1.5f18252be9388p-553, 0x1.278670db38552p-799, 0.0, 0x1.bb45ed2e59601p-897, 0.0,
     0.0, 0.0, 0x1.c8fabcf54efcp-572, 0x1.b0abc706addb5p-279, 0x1.fa5b8df2b2a1ap-177,
     0.0, 0x1.4b1bfd69c6bb9p-249, 0.0, 0x1.85990a345b165p-756, 0.0,
     0x1.844be5b7b34afp-179, 0.0, 0.0, 0x1.11938709186b6p-534, 0.0, 0.0,
     0x1.6bd127c6aae9cp-55, 0.0, 0.0, 0x1.cd095a3938f73p-12, 0x1.086645886101ep-573,
     0x1.1e1d48a56b18dp-391, 0.0, 0x1.6aa18a7dda754p-488, 0.0, 0x1.446b0a0cb1006p-370,
     0x1.56649992a274ep-231, 0x1.089ca1708f0e4p-618, 0.0, 0x1.5a2223afdaf27p-880,
     0x1.5347e71f1df65p-55, 0x1.c08e004b56931p-285, 0x1.b70b461829842p-620,
     0x1.2d12481c69bdap-813, 0x1.6e71a07be95cp-606, 0.0, 0.0, 0x1.3be15048675cdp-978,
     0.0, 0x1.685204b925e7ep-942, 0x1.6ed83cc025fadp-118, 0x1.8bb7bca8a5f2ep-182,
     0x1.e452a0803a2d9p-370, 0x1.9fe5555fe5592p-612, 0x1.b6c2053b0c834p-852,
     0x1.086be04267ce6p-290, 0.0, 0x1.89d9347a3d7fep-847, 0.0, 0.0,
     0x1.5b9af43ae95f9p-734, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d2984345e6bf4p-662,
     0x1.22711f099649fp-285, 0.0, 0x1.c0a807c3a4d0fp-62, 0.0, 0.0,
     0x1.686d3c572535ap-10, 0.0, 0.0, 0.0, 0x1.c688e4e15502cp-760,
     0x1.a94c4186b63adp-539, 0x1.0e34475a43c46p-721, 0x1.6bf8c4e2b43dbp-312,
     0x1.221a217382b62p-418, 0x1.097fddc9014a9p-656, 0x1.1aba33b9cde49p-942,
     0x1.a6bb981b3a164p-6, 0.0, 0x1.78bd266cf25c9p-254, 0x1.993c174952a71p-731,
     0x1.d6c4f58aea2f1p-40, 0.0, 0.0, 0.0, 0x1.36a2fad0653bfp-463,
     0x1.29e7ccfd93a73p-370, 0x1.d3592d7d3f1ccp-117, 0.0, 0.0, 0.0,
     0x1.823dd4e410c2ep-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22900c833ec5ep-577,
     0x1.7b72d3f195c6fp-314, 0x1.6ca14a94eec0cp-909, 0x1.44b86a468c7f5p-299, 0.0,
     0x1.e1b5bba405157p-250, 0.0, 0.0, 0.0, 0x1.7beba0600ae12p-970, 0.0,
     0x1.bbb803011fd36p-403, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.921724774fe4ap-694,
     0x1.1e2492fab31ap-853, 0.0, 0x1.6c96d84ae9ea9p-952, 0.0, 0x1.431a07c73675dp-138,
     0.0, 0.0, 0x1.c8965a13f36e2p-347, 0.0, 0x1.dd566905a7d59p-859,
     0x1.94c23068a7b37p-248, 0x1.b147d7ca6f227p-319, 0.0, 0x1.e06a3fe617d4dp-126, 0.0,
     0.0, 0.0, 0x1.32f7247255cd5p-6, 0x1.6c9c918bb4794p-843, 0x1.05a07153fb1adp-991,
     0x1.97afb81342a6ep-849, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2f424ad85574p-73,
     0x1.7c83abf3b73e4p-917, 0.0, 0.0, 0x1.3de6a08537cc1p-574, 0.0,
     0x1.49a4a94e7cfbap-965, 0x1.fd0392fe4be2ap-282, 0.0, 0x1.e0876d6345239p-561,
     0x1.ab97f22fe0bdep-642, 0.0, 0.0, 0x1.1edd27b059482p-186, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8e62fd7454677p-96, 0x1.c384fa5b9f7e9p-479, 0.0, 0x1.4f9eaa4b1db8p-246,
     0x1.2231b4b4fcb02p-996, 0.0, 0x1.fd741712024f5p-959, 0.0, 0.0, 0.0, 0.0,
     0x1.87c94276417a1p-749, 0.0, 0.0, 0.0, 0.0, 0x1.24e6461d6b018p-876, 0.0, 0.0,
     0.0, 0.0, 0x1.4e0017c5fcaa2p-232, 0x1.5bff97eae38b3p-714, 0x1.0c034541f9c11p-933,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.961c88e33f9d7p-922, 0x1.90ed0689b4836p-493,
     0x1.997371433f5bbp-866, 0.0, 0.0, 0x1.4aaf411973ca7p-695, 0.0, 0.0, 0.0,
     0x1.e87c298b3dc7ap-73, 0x1.246c464473b89p-445, 0.0, 0x1.bf810a7930e4ap-322,
     0x1.61c9bd7e7e008p-476, 0.0, 0x1.9139f2d871c19p-678, 0.0, 0x1.6937c9a874bbfp-770,
     0x1.49684f9d3f0bap-156, 0x1.98897543c3719p-59, 0x1.55ada6ba7ad66p-123, 0.0, 0.0,
     0.0, 0x1.28ecb3d68b68cp-742, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f48f44ef25f1fp-53, 0.0,
     0.0, 0x1.c35354d3f95afp-72, 0.0, 0.0, 0.0, 0x1.a66cccc711b51p-949, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.14263926900bcp-533, 0.0, 0.0, 0x1.ee0d6da54a5a6p-615, 0.0, 0.0,
     0x1.fbdff3ce06b1p-418, 0.0, 0x1.8610ec9a9b602p-104, 0.0, 0.0, 0.0,
     0x1.253a121c4a1b8p-978, 0.0, 0.0, 0x1.a8bf27a838af6p-96, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_frfrexpd4_kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_frfrexpd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpd4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
