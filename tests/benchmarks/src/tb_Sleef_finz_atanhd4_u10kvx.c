/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhd4_u10kvx.c --function \
 *     Sleef_finz_atanhd4_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.7002d49f4df17p-779, 0x1.6c3b2f88a7899p-102, 0x1.f0054aae14652p-430,
     0x1.413f5ad95f0c6p-44, 0x1.21958879208cbp-1001, 0.0, 0.0, 0x1.1be64f178d02ep-202,
     0x1.4bf082a290eedp-322, 0.0, 0.0, 0.0, 0.0, 0x1.392434d5bf0d2p-320,
     0x1.2004d111e9698p-1019, 0x1.602418d608aabp-477, 0.0, 0x1.5b30ecdd386abp-893,
     0x1.dd06e9e96a8eap-173, 0x1.59ecb3c6c377p-654, 0.0, 0.0, 0.0, 0.0,
     0x1.65c11405ad2e5p-184, 0.0, 0x1.97b1a942bc14fp-61, 0x1.404db131ecb42p-790,
     0x1.d79d7884d4b64p-368, 0x1.c6bfeb1c6d808p-888, 0.0, 0x1.9d0eb54e054b9p-348, 0.0,
     0x1.bc302a3185f47p-364, 0x1.d216304f5791ap-153, 0x1.68921c134ee07p-935,
     0x1.f27713f483a06p-271, 0x1.097dff7b187bep-344, 0x1.cf00b97fd64cp-748,
     0x1.c2bc9447f7cf2p-233, 0x1.04298956110ep-49, 0x1.e3b8b16620767p-731, 0.0, 0.0,
     0x1.7b96e083b4c65p-340, 0.0, 0x1.fc573c277c108p-842, 0.0, 0x1.81c1bdc518d83p-236,
     0x1.95ae47ef6eb35p-906, 0x1.23fd2270213cfp-76, 0x1.354bc34139ea8p-577,
     0x1.0a8fab53b6ed5p-105, 0x1.bb0fd4bf9caabp-13, 0.0, 0x1.9c4aad992006bp-875,
     0x1.4a01da8f3f8d1p-605, 0.0, 0.0, 0x1.edede74db0d36p-958, 0.0, 0.0, 0.0,
     0x1.5ff0532d6b1c6p-142, 0.0, 0.0, 0x1.bf16a13a66d8p-798, 0.0, 0.0, 0.0,
     0x1.6f4c8ad1e8c4fp-108, 0x1.a4f9ff3b8c8dcp-663, 0x1.32ce0449406bep-320,
     0x1.f645063d3c85bp-265, 0x1.d7c0a26f3352bp-889, 0.0, 0x1.92e2bdf6268e2p-663,
     0x1.98cda88eb9652p-978, 0.0, 0x1.0a96246ee329cp-660, 0x1.0f9a3b5b429b8p-202,
     0x1.d34b58d227c97p-476, 0x1.9587253165efep-555, 0x1.552872cd958ebp-833, 0.0, 0.0,
     0x1.eb505c17bc77p-187, 0x1.2bd653b707e1dp-666, 0x1.1adfd926a3bp-281, 0.0,
     0x1.90be046e0535fp-715, 0x1.c201ede7ca351p-14, 0.0, 0x1.f8d850387219p-1007,
     0x1.29dc666e79209p-609, 0.0, 0x1.792c4af96c36dp-286, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7748073de5ec6p-487, 0x1.3bffa35c7c4cap-962, 0x1.998f1df8dff0cp-454,
     0x1.509442bb1c5d2p-504, 0.0, 0x1.1094e94ef223dp-106, 0x1.214ecf44116bap-884, 0.0,
     0x1.abc4fd5e712f8p-825, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b815e2e84a08ep-84,
     0x1.7c51a6e5a91e8p-546, 0x1.eba3d86ef93acp-484, 0x1.d49794fafc712p-259,
     0x1.612ebf17b8621p-381, 0x1.ad690b415a572p-764, 0x1.26d383a647fedp-88,
     0x1.2da12810fd505p-73, 0.0, 0x1.89343a02ddd45p-457, 0.0, 0x1.d6cf430108841p-614,
     0x1.ff12f90b90de9p-703, 0x1.66ba3b3db1e0dp-400, 0x1.e5a357d4d676ep-731, 0.0,
     0x1.bc9f38d25b46p-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c11fe3d1fe165p-526, 0.0, 0x1.99fb84d441a3fp-559, 0.0, 0.0,
     0x1.77ef3583e2c85p-629, 0.0, 0x1.081ca7b89d58bp-872, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.65d5bea708241p-814, 0x1.854f85426157bp-665, 0x1.b23e1b92d8729p-1022,
     0x1.0ebaeb532c7f1p-449, 0x1.0dd4b866c3b0dp-978, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f64e24ef82a47p-516, 0.0, 0.0, 0.0, 0x1.b676e048cc2ep-558,
     0x1.b1a05519b8a45p-905, 0x1.c07783cf08fe6p-177, 0x1.0cc85afbdf1b4p-710, 0.0,
     0x1.69315925d1e94p-325, 0.0, 0.0, 0.0, 0x1.b3a483a531f71p-463, 0.0,
     0x1.20aea51fb076bp-57, 0.0, 0.0, 0x1.b5ddebc5a1acdp-266, 0.0, 0.0, 0.0,
     0x1.2743f9ecd4959p-733, 0x1.3b3580fb30a13p-17, 0x1.06b25b8eaddc6p-622,
     0x1.beb1f51e02ba2p-201, 0.0, 0.0, 0.0, 0x1.d19a4d2aea45ep-885, 0.0,
     0x1.b7825f639b5f1p-794, 0x1.a704d1ded6057p-385, 0.0, 0.0, 0.0,
     0x1.904ee88a6cf51p-785, 0.0, 0.0, 0x1.cf92bdfa7a14ep-277, 0x1.624fe274fd7c1p-193,
     0x1.8ee805904086ap-898, 0x1.ade89f24a208bp-14, 0x1.78e9464ae65eep-939, 0.0,
     0x1.09330b2d0bfbbp-256, 0x1.fc65594170e07p-462, 0.0, 0x1.ea0298445bc96p-420,
     0x1.07513bccf8bfcp-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5714c7d01aa9ap-810,
     0x1.5745776ea0664p-901, 0x1.cc03cfce8782p-46, 0.0, 0x1.a73c59048e88fp-33, 0.0,
     0.0, 0x1.d67f7ce84dfbcp-297, 0x1.d9f4ac306e7afp-744, 0x1.ff375cbcaf9d4p-802, 0.0,
     0x1.d40e8ab7796fcp-637, 0.0, 0.0, 0.0, 0x1.36e3d3fca7422p-86, 0.0, 0.0,
     0x1.7f2076739f2b5p-849, 0x1.69476ac9b9988p-47, 0.0, 0.0, 0.0,
     0x1.dcbcd46d1f867p-255, 0.0, 0.0, 0.0, 0x1.7d6cfb38312a2p-234, 0.0,
     0x1.b3d547651fc91p-217, 0x1.dfa3766fbb41bp-196, 0x1.3c74c4dc65cdap-397,
     0x1.fae184d4e5c66p-172, 0.0, 0.0, 0x1.651a2e3275f46p-925, 0.0, 0.0,
     0x1.286ae668ab088p-284, 0x1.4112c2ae11762p-704, 0x1.c655067f8ff0fp-882,
     0x1.880a45b3c8545p-683, 0x1.d2a36ceff2eeep-307, 0x1.6ff01684484a5p-645, 0.0,
     0x1.d5195ccd4ea68p-145, 0.0, 0x1.3c2f6f08b70eap-417, 0x1.1e9c8602445edp-95,
     0x1.f72283876f507p-999, 0x1.fe7dce53bf234p-600, 0.0, 0x1.496f32adf79eap-125,
     0x1.18a1d283f1c09p-663, 0.0, 0.0, 0x1.7df8f88c96b92p-851, 0.0, 0.0,
     0x1.e451585286e02p-320, 0x1.9a13ad875e9fdp-232, 0x1.ed34eac6a8dedp-375, 0.0,
     0x1.eec01647a6d48p-553, 0.0, 0x1.871baf303f1e7p-347, 0.0, 0.0,
     0x1.87bb3f7d2ad02p-531, 0.0, 0.0, 0x1.52b141c819b14p-581, 0.0,
     0x1.88126c401fff5p-359, 0x1.142b3f524c595p-199, 0x1.d03195a201794p-738, 0.0, 0.0,
     0x1.7a7e768149aeep-538, 0.0, 0.0, 0.0, 0.0, 0x1.5fcc5a2687e1cp-743, 0.0, 0.0,
     0x1.ac622b511ff43p-65, 0.0, 0.0, 0x1.3dbd55973abf6p-38, 0.0, 0.0, 0.0, 0.0,
     0x1.d5a1c1e053209p-449, 0x1.756d4e277fb2fp-781, 0.0, 0x1.addd9f04f3a07p-487, 0.0,
     0x1.6e9f01b50ded7p-1008, 0x1.678c51764895ap-821, 0x1.f9029a21d1fbdp-459, 0.0,
     0x1.9391dcf0d2adp-266, 0.0, 0x1.8c83c11a9df2bp-394, 0x1.9acd196b0861ep-635, 0.0,
     0.0, 0x1.3aad197b07d33p-850, 0x1.9e8da536f7654p-277, 0.0, 0x1.aefbe1fb111cdp-339,
     0.0, 0.0, 0.0, 0.0, 0x1.d4d4abeb6a55cp-182, 0.0, 0x1.7cd55176b89efp-519,
     0x1.a23a67c39fd54p-1012, 0x1.54deef4a343b4p-928, 0.0, 0.0, 0.0,
     0x1.13e186f228bc7p-551, 0.0, 0.0, 0x1.21eda706a9d3p-615, 0.0,
     0x1.91d513143893bp-623, 0x1.87a21ff44e773p-911, 0x1.3ebf385c0edafp-768, 0.0, 0.0,
     0.0, 0.0, 0x1.38ea68e311adep-728, 0.0, 0.0, 0x1.19821be902556p-429,
     0x1.dc00e6feed6bap-629, 0.0, 0x1.5a062726bcb5ep-741, 0x1.8765100e60c8cp-382,
     0x1.eee429d53df9fp-822, 0x1.2fd69c4602e3bp-294, 0.0, 0.0, 0x1.95e23aa280ab5p-284,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89319ae60b7p-759, 0.0, 0x1.45a9777bf8404p-121, 0.0,
     0.0, 0x1.8ecb0aa282f3fp-852, 0x1.1d8196626e75ep-230, 0.0, 0.0,
     0x1.14460de36f018p-80, 0x1.62b330bf21e98p-318, 0.0, 0.0, 0.0,
     0x1.8ad2d95f41859p-33, 0x1.8a564d14da76bp-617, 0.0, 0.0, 0.0,
     0x1.d94320bd2bd08p-541, 0x1.b04190d2668c3p-688, 0x1.cafd92a6cbedbp-190,
     0x1.557e04d62de15p-280, 0.0, 0x1.65db4fa95ccb3p-249, 0.0, 0x1.bdcf37d324db4p-140,
     0x1.71af0fbc2ec24p-584, 0x1.3228a42d540e6p-585, 0x1.56ce2373dab47p-507,
     0x1.58562aa83b695p-1022, 0x1.764bd52c904a1p-708, 0.0, 0x1.180583ef1d842p-625,
     0x1.d2beb4678a88cp-188, 0.0, 0x1.7082c5a8ed76dp-988, 0x1.40677e5391326p-126, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d6e73c603f2e5p-324, 0x1.06229cb0b35bap-610, 0.0, 0.0,
     0.0, 0x1.e9c4933b01935p-1005, 0.0, 0.0, 0.0, 0.0, 0x1.62f6a84d44c75p-656, 0.0,
     0x1.40ed52e6b73ccp-773, 0.0, 0x1.a8637b0c51797p-1000, 0.0, 0x1.3bf48ccf59807p-23,
     0x1.6c110361bb6fp-9, 0.0, 0x1.1c45b784347ddp-400, 0.0, 0x1.3ad9f571a30abp-3, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5661e253bf7fp-368, 0.0, 0.0,
     0x1.1d81164002069p-180, 0.0, 0.0, 0.0, 0.0, 0x1.6f7d178a67b3p-668, 0.0,
     0x1.b2ded576b745dp-791, 0.0, 0x1.1f6b2a62cc873p-878, 0.0, 0x1.2c4695554fa9dp-365,
     0x1.b3a8aaf8bd60dp-678, 0.0, 0x1.0f9cb24523faep-463, 0.0, 0x1.2a30de45799ccp-391,
     0x1.5ef58005eb375p-465, 0.0, 0.0, 0x1.3f2d0333b537ap-265, 0x1.c536c7339ebe5p-117,
     0x1.ad83a6903487fp-159, 0x1.93dc709c918ecp-641, 0.0, 0x1.6abbc079b491cp-1018,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b6948a3973ap-764, 0.0,
     0x1.f6e27d9b49536p-523, 0x1.9083126a623b3p-54, 0.0, 0.0, 0x1.ce376eedd4987p-148,
     0x1.fa81cd961b26bp-699, 0.0, 0.0, 0x1.36ac769a7560cp-602, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.dfb0023a4a844p-883, 0x1.e9266ef27b55fp-761, 0.0, 0.0, 0.0,
     0x1.a3dfc19654badp-102, 0x1.4a5240d9ba5ddp-754, 0x1.96fd37bac2b1ep-490,
     0x1.5da9f40cc8778p-58, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18d15c4448372p-385,
     0x1.882fe300427ecp-192, 0x1.41802c43aed0dp-562, 0x1.b6b67cdb1e568p-1015, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9677624eb05dfp-791, 0.0, 0x1.acc9ed74516bep-767,
     0x1.82616faf8f13dp-132, 0x1.496a168930a17p-990, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.28b0a68ac6e3dp-592, 0x1.8425ebba2578fp-359, 0.0, 0.0, 0.0,
     0x1.75ac41da9fba1p-407, 0x1.8a704d7301865p-125, 0x1.ac68fda4baap-909,
     0x1.187dd1920d194p-985, 0.0, 0.0, 0x1.b6198d5a99921p-958, 0.0, 0.0,
     0x1.5c96197aa0aafp-767, 0.0, 0.0, 0x1.f776476c87122p-577, 0x1.f13a29cbb41e3p-44,
     0x1.1c36f2d0d70afp-539, 0.0, 0.0, 0x1.f718c3fac6cb5p-619, 0.0,
     0x1.f52b3dfeee7e3p-315, 0.0, 0x1.9f22bf57181f7p-768, 0.0, 0x1.c850536ccc0ffp-456,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.209ebc08c8181p-233, 0.0, 0.0,
     0x1.361a525667bcfp-169, 0x1.1f3b5014b70e1p-88, 0x1.527b2e7589456p-1016, 0.0, 0.0,
     0.0, 0x1.9ec2a9d2273eep-299, 0x1.67582a05d9d5fp-396, 0x1.a72848486d981p-302,
     0x1.cda1020c06cdp-761, 0x1.ca7987f716392p-565, 0.0, 0x1.62e81ae7771bp-707, 0.0,
     0.0, 0x1.a1a6d0d19c311p-383, 0x1.4bde32112bc01p-421, 0.0, 0x1.556c20988995p-906,
     0.0, 0.0, 0x1.2a33a40ee7b6dp-656, 0x1.6f75ec6714858p-910, 0.0, 0.0,
     0x1.483345f3c9faap-886, 0x1.e5d1b095c38dfp-626, 0x1.fa843c0483a55p-598,
     0x1.174e6df1a046cp-280, 0.0, 0x1.357a65a801f68p-610, 0.0, 0.0, 0.0, 0.0,
     0x1.fff0a43a1078dp-540, 0.0, 0.0, 0.0, 0x1.f2d98ddbb5629p-750,
     0x1.030485c9938c5p-926, 0.0, 0.0, 0x1.b3acba21d957cp-742, 0x1.8c9f25573c236p-27,
     0.0, 0x1.781b147d3371ep-410, 0x1.8edf8d36f22fep-531, 0.0, 0.0, 0.0,
     0x1.6223f5e1e36e6p-90, 0x1.1b8abf1875136p-553, 0.0, 0x1.f11b3cf804a49p-217, 0.0,
     0.0, 0x1.7d3626d100bbp-820, 0x1.6a7769c0fbef6p-185, 0.0, 0.0, 0.0, 0.0,
     0x1.705aeedd920d4p-992, 0.0, 0x1.c28b9d91d67f1p-391, 0.0, 0x1.1e10a332fff8dp-107,
     0x1.b00c794c3aeap-68, 0x1.611d145519c98p-281, 0.0, 0.0, 0x1.9e354d69de526p-387,
     0.0, 0x1.8d4fcdc8e5e96p-187, 0.0, 0x1.bcff3fbaedf6ap-698, 0.0, 0.0,
     0x1.da52deebee0c6p-903, 0.0, 0.0, 0.0, 0x1.7125dc8f1111p-290,
     0x1.13fcc5de15ceep-1010, 0.0, 0.0, 0.0, 0.0, 0x1.d651b61fadc16p-62, 0.0, 0.0,
     0x1.2c5bee8d17939p-999, 0x1.2ad8cdfedd699p-170, 0.0, 0x1.9e19c339e345dp-463, 0.0,
     0.0, 0.0, 0x1.6ba95e481bb9ap-213, 0.0, 0.0, 0.0, 0x1.8522c9c759a15p-342,
     0x1.d630b38e5ce4dp-629, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99bc186b04298p-805,
     0x1.d03ad7a46c78p-830, 0.0, 0x1.f339b0bb6f213p-85, 0x1.f3133707671e1p-671, 0.0,
     0.0, 0.0, 0x1.9d5f372f8ae19p-939, 0x1.fde3f6eb2e436p-715, 0.0,
     0x1.8c179ec8b78dbp-229, 0.0, 0.0, 0.0, 0x1.63275dbb9be18p-678,
     0x1.a8b918209d76ap-1016, 0x1.e34510060c3acp-399, 0.0, 0.0,
     0x1.ee0a996878a5cp-204, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86796bff496ecp-386,
     0x1.a3ac2c8350878p-753, 0x1.47570fd99c0cep-965, 0.0, 0.0, 0x1.521be8bfd951dp-218,
     0x1.f06b910c14ce1p-960, 0x1.5767f3d33ed5cp-375, 0.0, 0x1.8ae23cd9411b4p-688,
     0x1.af841aa45b731p-927, 0.0, 0.0, 0x1.622a5001e90e5p-884, 0x1.f33592e7810dcp-210,
     0x1.f9f11cfe7afap-428, 0x1.776a05d01f67fp-8, 0.0, 0x1.8b6b9fa3e8608p-480,
     0x1.b8e81895ebc89p-161, 0.0, 0x1.1a55d03a42b5p-402, 0.0, 0.0,
     0x1.b227dceb0cda4p-11, 0x1.5577621d6cd82p-451, 0x1.700b03c599485p-713, 0.0, 0.0,
     0.0, 0.0, 0x1.edae51aed9d0dp-739, 0.0, 0x1.d53d9fc68a1bbp-893, 0.0,
     0x1.610c132777f49p-194, 0.0, 0.0, 0.0, 0.0, 0x1.c0564ddacace7p-756, 0.0, 0.0,
     0.0, 0.0, 0x1.631cf492fd2bfp-114, 0x1.934fd11a750b1p-466, 0x1.354de43f3f6b2p-945,
     0x1.90df85b4d8bb4p-423, 0.0, 0.0, 0.0, 0x1.c734730f47284p-826,
     0x1.78d709474489ep-225, 0.0, 0x1.8d30123665487p-285, 0.0, 0.0, 0.0,
     0x1.a5d86352f8089p-298, 0.0, 0.0, 0x1.5d3cfe114dc3dp-144, 0.0, 0.0,
     0x1.8b85a0869f434p-559, 0x1.46ffea2b1b5a8p-907, 0.0, 0x1.5461a1eff61fdp-748, 0.0,
     0x1.5e2dbbc93bfb6p-403, 0x1.9ab7a700cfb9dp-117, 0.0, 0x1.a4ea73f067719p-128,
     0x1.56b2e4d80c88p-297, 0x1.7491dafae39eep-32, 0.0, 0.0, 0.0,
     0x1.d3029a2b31f82p-468, 0.0, 0x1.5c4416214550ep-229, 0.0, 0x1.bfb1e2e818bc9p-944,
     0x1.af289cf907ad4p-190, 0.0, 0x1.a8a9cd720fe8ap-690, 0.0, 0x1.1277e12e74801p-539,
     0x1.9cb401312875dp-715, 0.0, 0.0, 0x1.e7fb3f3f45b6fp-483, 0.0, 0.0,
     0x1.29fae7bbe59d2p-575, 0.0, 0.0, 0x1.62204aaea3486p-4, 0x1.c78d9c7c55074p-637,
     0.0, 0.0, 0x1.0c6228f8193f4p-910, 0.0, 0x1.c07b9e9168d86p-183,
     0x1.8af2c09f425ap-308, 0x1.2c9d3cf8904b8p-3, 0x1.fdec538126a97p-30, 0.0, 0.0,
     0x1.af8743822e98ap-783, 0x1.bf75987a00d7dp-378, 0x1.6b5a9147bde68p-239,
     0x1.2122bac8c7e31p-211, 0x1.b04da4e55503fp-335, 0x1.06b7efe310997p-381, 0.0,
     0x1.2a5da6fef8515p-498, 0x1.65ebaa6131a7ap-714, 0.0, 0.0, 0x1.98fefb40257a4p-450,
     0x1.49467c16d35eap-586, 0x1.3ee01acdf399p-335, 0.0, 0x1.78721823c2b69p-77,
     0x1.4bd9a0bd4985bp-204, 0.0, 0x1.4c81d141aa25p-757, 0x1.47d182cdac219p-52, 0.0,
     0x1.638c14650e101p-329, 0.0, 0.0, 0.0, 0x1.a10b5aa40e906p-167,
     0x1.4e7d29fc6e6f6p-383, 0x1.ab6a797ccc2fp-634, 0x1.cf834db4da5ddp-310,
     0x1.a9d5635a4e4d1p-908, 0x1.56f8c00c21253p-946, 0x1.177a4ecd3f4c9p-118,
     0x1.15b728bd58e7ap-174, 0.0, 0x1.22eb2ca4cb197p-291, 0x1.4eddb510c1181p-710, 0.0,
     0x1.a10103f128462p-495, 0x1.29c8380662eb9p-319, 0x1.f67244a20d8dp-751,
     0x1.167babf90e10bp-744, 0x1.5993280544ff5p-161, 0.0, 0.0, 0x1.5cf21d596d58ap-296,
     0x1.b0c0f6104fc48p-643, 0.0, 0.0, 0x1.0784938185ea7p-786, 0x1.4df2a61fa73e2p-929,
     0.0, 0x1.77fde7ebebf58p-993, 0x1.027c92f1a6372p-951, 0x1.0ada7d7a5c381p-359, 0.0,
     0x1.9493991b5d5a1p-946, 0x1.c1af62eb1a8c8p-455, 0.0, 0.0, 0.0,
     0x1.48657a678b081p-810, 0x1.10a3a82c43149p-639, 0.0, 0.0, 0x1.b0175c333835cp-404,
     0.0, 0.0, 0.0, 0x1.b061eedd81f94p-560, 0x1.2b01398a91ef9p-160,
     0x1.da7ef7e2b2f99p-879, 0x1.ecb51d7f36f5ap-671, 0.0, 0x1.326eb9c30db14p-162, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13d605203aacdp-594,
     0x1.09728e9bb9f4cp-164, 0.0, 0.0, 0.0, 0.0, 0x1.c3495cd7be813p-824, 0.0, 0.0,
     0x1.bcdb88fa7b18bp-899, 0x1.9851c4bdea69ap-316, 0x1.8a96853be6c35p-464,
     0x1.cfd3743e70838p-712, 0.0, 0x1.e1712a584ee9cp-938, 0x1.7960251bb6f3bp-415,
     0x1.e621f5c0eab49p-870, 0.0, 0.0, 0x1.53a0d7c66c96bp-310, 0.0, 0.0, 0.0, 0.0,
     0x1.df852d5403a2bp-956, 0x1.b470dbd292c44p-91, 0x1.a693638476781p-723, 0.0, 0.0,
     0.0, 0x1.48049b4011beep-898, 0x1.a15258c7d2582p-214, 0x1.32eb33caf881p-686, 0.0,
     0x1.e750cc296f8d7p-820, 0x1.2b4829fdd5498p-711, 0x1.6e462ea4c9431p-685, 0.0, 0.0,
     0x1.85d89581633acp-39, 0.0, 0.0, 0x1.5e3816be4cbbap-115, 0x1.fdfc2deaaf1f8p-435,
     0.0, 0.0, 0x1.fefe8321341f2p-195, 0.0, 0.0, 0.0, 0.0, 0x1.96973eb995b6cp-116,
     0.0, 0.0, 0.0, 0.0, 0x1.d94e3b76c7ad6p-428, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c6f8675d60c71p-179, 0x1.64a85b951f415p-695, 0x1.15c3f91e13b64p-354,
     0x1.205c4d01da4d4p-413, 0.0, 0x1.772cbdfa54c01p-104, 0.0, 0.0, 0.0,
     0x1.f6b87f73fbe07p-724, 0.0, 0.0, 0x1.00faaa4374a13p-647, 0x1.e9fb63d498f0cp-830,
     0.0, 0.0, 0.0, 0x1.ca1e043d7778fp-836, 0x1.522b86fdd228bp-33,
     0x1.6e2b435cfbb7ap-559, 0x1.ef9f336c5ea88p-974, 0.0, 0x1.b70f7d33af54cp-432,
     0x1.8bd6410fa2563p-570, 0x1.c75e3c0e2468dp-935, 0x1.f5646e5786c8bp-705,
     0x1.51f1c635fd709p-215, 0.0, 0x1.255b1b4283056p-984, 0x1.c753cc8e6cf85p-842,
     0x1.fc830d3077af8p-909, 0.0, 0x1.48b3608d86faep-768, 0.0, 0x1.23ec546eef6b9p-620
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
            tmp1 = Sleef_finz_atanhd4_u10kvx(tmp0);
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
    printf("Sleef_finz_atanhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_atanhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
