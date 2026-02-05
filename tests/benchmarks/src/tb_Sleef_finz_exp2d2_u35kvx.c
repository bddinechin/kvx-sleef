/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d2_u35kvx.c --function \
 *     Sleef_finz_exp2d2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.c8e844e961a3dp-462, 0.0, 0.0, 0x1.70b1bf909631ep-532, 0.0, 0.0,
     0.0, 0x1.12cdabd9a13d4p-331, 0.0, 0.0, 0.0, 0.0, 0x1.75742494a4198p-146, 0.0,
     0.0, 0.0, 0x1.1753bb04941f2p-862, 0x1.cb6830a275dc4p-251, 0.0, 0.0,
     0x1.c930d59a79e71p-331, 0.0, 0x1.79cb785efcebdp-493, 0.0, 0.0,
     0x1.b2e1de9f83959p-78, 0.0, 0x1.c77e91428e75ap-17, 0x1.e87b5135b6204p-284,
     0x1.58356e63fe507p-41, 0.0, 0.0, 0x1.b5792ebcef7dfp-784, 0.0,
     0x1.942cc5c92ee66p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.018c53f8a58c2p-13,
     0x1.1307ee5143467p-561, 0.0, 0x1.41ade1ae265fcp-610, 0.0, 0x1.3a7b7758f7a8p-632,
     0.0, 0x1.0a89a7c550b23p-13, 0.0, 0.0, 0.0, 0.0, 0x1.98a84fc418e17p-645, 0.0,
     0x1.47fe29a18d927p-112, 0.0, 0x1.d444e1c60ebb2p-752, 0x1.055668a40ed5bp-843,
     0x1.03a0ecc60107ep-368, 0.0, 0.0, 0.0, 0x1.c76fc7656a9eep-929, 0.0, 0.0,
     0x1.9216d4f2289c4p-755, 0.0, 0x1.b1b60b898dd76p-879, 0x1.ecb6b382107b2p-866,
     0x1.855ac3fabbf3cp-915, 0.0, 0.0, 0.0, 0.0, 0x1.a0207cbb8cf77p-268,
     0x1.80d74cd55d33fp-520, 0x1.1557105d2def8p-473, 0.0, 0.0, 0x1.9612849a4351bp-75,
     0x1.631785adc0c45p-217, 0x1.b53b4cfcb3beap-896, 0x1.5a1d1591b995fp-672, 0.0,
     0x1.8e116274fb059p-803, 0x1.b995c2bbcc37ap-679, 0x1.014dc162becap-913, 0.0,
     0x1.f78bae54a92cp-42, 0.0, 0x1.ab62b17b043e3p-863, 0.0, 0x1.2806131e4837p-138,
     0x1.1b17a13fb6ed2p-899, 0x1.6f8623ce645bcp-344, 0x1.0017c57838b5dp-1014, 0.0,
     0.0, 0x1.d9d5ef014fde9p-985, 0.0, 0x1.6d0c02cb6f36ap-180, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d6481e02acc2ep-756, 0x1.4ace7c1547b1ap-296, 0x1.ffb1cb2734ac7p-690,
     0.0, 0x1.d5ae7204affb7p-599, 0x1.816382bb6e513p-774, 0x1.8fb7282ddc20ap-447,
     0x1.c6817d52260e4p-140, 0.0, 0x1.1ea63dd9d0b1bp-836, 0x1.bf030966386fbp-138, 0.0,
     0x1.da040aca57ab1p-598, 0.0, 0x1.69111896b8fd5p-943, 0.0, 0x1.0e371b2d2c6c9p-810,
     0x1.19d32ae2b3efdp-713, 0x1.94a321deabd87p-868, 0x1.23a6d58c852f5p-462,
     0x1.ec2b12cd5cb93p-274, 0x1.2b43220bf0f0ap-276, 0.0, 0x1.c965333a30fa9p-455,
     0x1.9bc32c835f0cp-603, 0x1.872a0c7bdc149p-736, 0x1.a5bd1b462c3e3p-630, 0.0, 0.0,
     0x1.84eeca395adf7p-712, 0x1.afd20cc71b64cp-539, 0x1.c6bf239e53cd5p-247,
     0x1.f2fec97cca729p-149, 0x1.4396fb0f1feep-955, 0x1.6c70afe428a57p-237,
     0x1.f0852c8bfa7bap-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4357c3431a785p-586, 0.0, 0.0, 0.0, 0.0, 0x1.8d8d2220b117bp-616, 0.0, 0.0,
     0.0, 0x1.44eb89faed658p-369, 0x1.d9c62c222ac65p-432, 0.0, 0x1.b1fae33f2ad4cp-868,
     0.0, 0.0, 0x1.e4906f4444559p-374, 0x1.38ae0f746be8dp-115, 0x1.9980898811ffcp-976,
     0x1.06a4a8a447279p-596, 0x1.0b8af7eefe363p-426, 0x1.d5143ee9363d5p-647,
     0x1.c3d1e300ac175p-547, 0x1.1b5a02a101a1bp-406, 0.0, 0.0, 0.0,
     0x1.9b86e98fd3e38p-450, 0x1.68f11a48216c8p-819, 0.0, 0x1.27a4f497ef17dp-203, 0.0,
     0x1.46171f715a154p-933, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9bec38771f5p-88, 0.0, 0.0,
     0x1.73bb6de64ade7p-988, 0x1.f73d7c35a3a9ep-212, 0x1.1bf286ab974dbp-737,
     0x1.8aedabd68a5aap-386, 0.0, 0.0, 0x1.b9bc51e61012dp-968, 0.0,
     0x1.e38702de0861ap-772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d6f66b8d9a0bp-940,
     0x1.54ae88049b73p-522, 0x1.e517e73461d99p-705, 0x1.2e1f3f8e1be7cp-940, 0.0, 0.0,
     0x1.d38cb4c9a3807p-417, 0.0, 0.0, 0.0, 0x1.7860ec0506073p-558, 0.0,
     0x1.c5b23f839559cp-28, 0x1.07162ad30901cp-394, 0x1.99b0d5f3f25c1p-360, 0.0,
     0x1.ba0d60a87a714p-37, 0x1.ea3eb0cd58416p-666, 0x1.97a0819948ed3p-325,
     0x1.2c0cc46ea6f7cp-371, 0.0, 0x1.6beec366b8241p-896, 0.0, 0x1.bce47acea3cb3p-156,
     0.0, 0.0, 0.0, 0.0, 0x1.86642292794c6p-837, 0x1.87423be93f904p-755,
     0x1.c1ec38c23a74ep-918, 0x1.1d4aa0e44fcb4p-619, 0.0, 0.0, 0.0,
     0x1.8537b21f79ef5p-601, 0x1.9d2d4f0732ef7p-1011, 0.0, 0x1.f60de48e6fdd3p-740,
     0.0, 0.0, 0x1.f987f6aa39404p-231, 0.0, 0x1.16043a67da3d3p-826, 0.0,
     0x1.ad503379e8559p-802, 0x1.d53487523e3e6p-710, 0x1.18e6e025ee009p-276,
     0x1.b56b0d483036ep-824, 0x1.750cfae1997a3p-102, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78998f17d45a6p-907, 0x1.1e0c56d6b93a6p-571, 0.0, 0x1.0abb336bd64a3p-297,
     0x1.997a39654f85dp-684, 0.0, 0x1.04f89e9538653p-949, 0.0, 0.0, 0.0,
     0x1.3b2f1f877d64ap-887, 0.0, 0.0, 0x1.49204641aac69p-618, 0.0,
     0x1.9a86a92509988p-266, 0.0, 0x1.c01f629394701p-114, 0.0, 0x1.98b46ae133803p-750,
     0x1.311b5ab264327p-694, 0.0, 0x1.21432825ab9e6p-542, 0x1.68e4e0a6654aap-362,
     0x1.2536883835c6ap-355, 0.0, 0.0, 0.0, 0x1.ab32d0a7e898fp-800, 0.0,
     0x1.7933fa08569bdp-675, 0x1.e6828388b20fcp-947, 0x1.46b9c6d1270fdp-45,
     0x1.84cd878f8493dp-150, 0x1.4a56e01e99b6cp-139, 0x1.9674869dd987ap-409,
     0x1.1651a4fe8f1f6p-203, 0x1.b52e98eee54bp-628, 0x1.37fed5adf7e18p-74,
     0x1.256494ce46a08p-680, 0x1.f88cf759fef45p-117, 0.0, 0.0, 0.0,
     0x1.bfaef3e16cb41p-242, 0.0, 0x1.79678a4cb7d2ep-571, 0x1.8cd914f0ee766p-783,
     0x1.2b7183807cba8p-835, 0.0, 0.0, 0.0, 0.0, 0x1.0cc2de6e39461p-3, 0.0, 0.0,
     0x1.ac83bd4e3cabdp-635, 0.0, 0x1.7b8cba33da2c7p-954, 0.0, 0.0,
     0x1.213edf161ec6bp-542, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6e8d5efc6fde2p-542, 0x1.ca53f5dcb2ca3p-420, 0x1.83b55382a4302p-873, 0.0,
     0x1.32c0587342e09p-103, 0x1.da1556c88a03p-174, 0x1.00ebd52d56e3bp-118, 0.0,
     0x1.681015233f0e8p-139, 0.0, 0.0, 0x1.ba182e671c149p-305, 0x1.2d108977e5386p-63,
     0x1.c50898593ae16p-836, 0.0, 0x1.af1f71b68fbecp-336, 0x1.ce762a8fcae58p-363,
     0x1.7bad4516b444cp-695, 0x1.cf202f8b25b23p-912, 0x1.424fc92fd1a6fp-26, 0.0, 0.0,
     0.0, 0x1.a9fdefb94ca3ep-989, 0x1.58cdee894bdb4p-950, 0x1.b8f1568e8a6aap-837, 0.0,
     0x1.777dba48b2f03p-827, 0.0, 0.0, 0x1.27f1e5c92f2d1p-207, 0x1.5bf537f3b1512p-10,
     0.0, 0x1.408c905bbbb27p-205, 0.0, 0.0, 0.0, 0.0, 0x1.64e10b364c3ep-218,
     0x1.978ea35ca5b8cp-775, 0x1.acd621e48532p-833, 0x1.86140becd7146p-963, 0.0,
     0x1.13ac5d78d72acp-2, 0x1.69d2aaf9186cfp-1019, 0x1.5b2e896d8fbaep-44,
     0x1.d1a77f8a3ecd6p-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f2ddc4cf383p-785, 0.0,
     0x1.ae72382419b02p-631, 0x1.1e6d21cf7a4b8p-789, 0x1.fcf6b3b3b87cep-28,
     0x1.85df115368067p-309, 0.0, 0x1.f1bfb243081e8p-741, 0x1.e79a19a293eb9p-104,
     0x1.bbc3c6cd4f5cap-705, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.26ea86bf892b5p-404,
     0.0, 0.0, 0x1.053305c3df8dcp-124, 0x1.24170edf011ecp-327, 0.0,
     0x1.5a076409a01e7p-373, 0.0, 0x1.da024aa954c5bp-868, 0.0, 0.0, 0.0,
     0x1.4e2a03833f6d1p-998, 0x1.f8eff3261a474p-575, 0x1.697368a319bdfp-114,
     0x1.8f9a17912d92p-390, 0.0, 0.0, 0x1.4cf02dd54c658p-544, 0.0, 0.0,
     0x1.6262fedf42e6ep-339, 0.0, 0.0, 0.0, 0.0, 0x1.0c4e2e95c0977p-512, 0.0,
     0x1.456c2b4682169p-98, 0x1.9040da74f6338p-15, 0.0, 0x1.78ae478bda63ep-772,
     0x1.5ed43c4496806p-696, 0x1.26f8710034b78p-105, 0x1.5e0de174c82b8p-806,
     0x1.0e77c0f7fce4p-701, 0x1.a2b4dcb33c45ap-359, 0.0, 0.0, 0x1.8c97253043627p-758,
     0.0, 0.0, 0x1.db5fe513d2ce8p-673, 0x1.8ceb5d9458a33p-88, 0.0, 0.0, 0.0,
     0x1.c4e83123760f2p-57, 0x1.1d7860735b9f4p-684, 0.0, 0x1.0c9d0c5d8fe16p-972,
     0x1.9a2870b57b5cbp-202, 0.0, 0x1.126c28c2facccp-510, 0x1.73db8fc933006p-963,
     0x1.5439570d1dd65p-409, 0.0, 0x1.8b79395a4d93cp-739, 0.0, 0x1.9b3f872f997adp-707,
     0.0, 0.0, 0.0, 0.0, 0x1.a48be42d2d959p-369, 0x1.0c4429ec88439p-655, 0.0,
     0x1.83ffd7006dc8ep-771, 0.0, 0x1.bf228dd1cd5d7p-864, 0.0, 0x1.279f3ab20212ep-517,
     0.0, 0x1.71dc1d95c93dcp-362, 0x1.32619f0f24011p-544, 0x1.a4436169f7419p-42, 0.0,
     0.0, 0x1.3927b222ace7cp-975, 0.0, 0.0, 0x1.512c946e6f835p-383, 0.0,
     0x1.d532edc3f3fefp-556, 0x1.40fa09aff59f4p-9, 0.0, 0x1.4042a5becc3f9p-76,
     0x1.a1dbe34a4e849p-861, 0x1.063d1490c879ep-344, 0.0, 0.0, 0x1.62a0aa25fe76fp-677,
     0x1.723058cbadd2dp-610, 0x1.505c6630f44dp-69, 0.0, 0x1.c6e2bd19362b9p-59,
     0x1.3a6a25a910c1ep-350, 0x1.d967a9540c4a3p-40, 0x1.2308fd8c0af2cp-965, 0.0, 0.0,
     0x1.39841823f010fp-236, 0x1.ce8aac0fb8971p-67, 0.0, 0.0, 0x1.05ead796f9168p-438,
     0x1.7d1272f04851cp-43, 0.0, 0x1.eca40a60f8fa6p-506, 0.0, 0.0,
     0x1.b58103943a57cp-512, 0x1.3ad74aea5eb8ep-515, 0x1.16939836a40a9p-792,
     0x1.2d4d17bb5b91cp-338, 0.0, 0x1.9803bbda7ec02p-3, 0x1.344b3c9518419p-647, 0.0,
     0.0, 0x1.ed9d0a79e58e7p-770, 0.0, 0.0, 0x1.8417c79b506acp-9, 0.0, 0.0,
     0x1.401873bdcc39bp-815, 0x1.1a4263bfb71fp-7, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.14a99923d7c04p-98, 0x1.214c54e1c5efbp-368, 0x1.68f74b1b62b62p-874,
     0x1.f9708768db3c2p-333, 0x1.68df34c134fcap-36, 0.0, 0.0, 0.0,
     0x1.db7209ae0c874p-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4f462ee776e87p-557, 0x1.56ce2a97f2343p-712, 0x1.fef90b6d6b463p-867,
     0x1.1bb483c2e713bp-985, 0x1.4bee5b0a98b1cp-446, 0x1.5d3c9a917a40fp-494, 0.0,
     0x1.f5c81f3fee34bp-826, 0x1.7e6cfe69bfa89p-18, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c20ca4da79db1p-695, 0x1.fe99f7266ea75p-640, 0x1.fb3f5952e8685p-178, 0.0, 0.0,
     0x1.ee97a7c1cc3ccp-235, 0.0, 0.0, 0.0, 0.0, 0x1.a65bc88290fb7p-107,
     0x1.7e910ef58b83cp-182, 0x1.1a6acaa69e168p-206, 0.0, 0x1.415e7a63f185bp-88,
     0x1.075fb5c004bb7p-664, 0.0, 0x1.43df28911958dp-855, 0x1.2f0fb515ff735p-850, 0.0,
     0x1.2a630532df03fp-744, 0x1.6a29f552b7dcp-512, 0.0, 0x1.d6a3709e24d48p-328, 0.0,
     0x1.9d04a7e25a11cp-99, 0.0, 0.0, 0x1.54617507ec44fp-281, 0x1.172535d6afdbfp-240,
     0.0, 0x1.d9d6e00cd3aa7p-223, 0x1.1dde7f897cebdp-206, 0.0, 0x1.00747f72c9d0cp-573,
     0.0, 0x1.30382f9fb254bp-375, 0x1.72cc29267e44fp-290, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f2413235391dp-547, 0.0, 0x1.83e243d07791fp-192, 0x1.01220a2cc755dp-476, 0.0,
     0x1.b3cd5c21b4de6p-141, 0.0, 0x1.daf44517f03e5p-404, 0x1.664486f9c6addp-845,
     0x1.99c1044edb59cp-199, 0.0, 0.0, 0.0, 0x1.f60df92c25a36p-583,
     0x1.9319369b51bbdp-337, 0x1.89520cf82b786p-658, 0x1.baa22a2b2a1a7p-268,
     0x1.20fd6342319ccp-419, 0x1.04f94583f7fc8p-365, 0x1.e83303b9c5c8bp-493,
     0x1.69e320ea4dbd7p-872, 0.0, 0.0, 0x1.f10321e17e6d6p-811, 0x1.f426dda5448eep-694,
     0x1.318480787d4d4p-920, 0.0, 0x1.e99716f23223dp-1020, 0x1.977e03008c4b9p-2, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f6a20974cc4p-1008, 0x1.8cbd3eca6b112p-332,
     0.0, 0.0, 0x1.1cea484c7f87ep-329, 0x1.444d5fed4a1cp-307, 0x1.73e7fc826a6f1p-129,
     0x1.af4f6ab254d29p-135, 0.0, 0.0, 0.0, 0.0, 0x1.cedd7999c9d4dp-545, 0.0,
     0x1.ff1d18d5cd95dp-810, 0x1.c5a154cb3496ap-831, 0x1.f059e5d23229fp-202,
     0x1.35edf2c17f068p-316, 0.0, 0.0, 0.0, 0.0, 0x1.10b357abcfa4dp-80, 0.0,
     0x1.396174cec1fc2p-36, 0.0, 0x1.eaf26a40fc45cp-656, 0x1.dec00170e9d5fp-140,
     0x1.4fb39b69ca424p-705, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbac890461d63p-599, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52a23921cf83p-945, 0x1.4ecda17787dccp-367, 0.0,
     0.0, 0.0, 0x1.3128e370e1f17p-340, 0x1.808c28859454dp-54, 0.0,
     0x1.a969f25544d3ap-126, 0x1.9888229a93e6bp-689, 0x1.14d50e1f07b25p-678, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ebd46717d50ap-176, 0.0, 0.0,
     0x1.fe86dd1e52a73p-471, 0.0, 0.0, 0.0, 0x1.d457ba089d42bp-739,
     0x1.c2e41c039b99cp-833, 0x1.56d31a4554ebfp-266, 0.0, 0x1.5773382cf6fa6p-740,
     0x1.419e6d93e88cap-748, 0.0, 0x1.2fdf5cae03d79p-813, 0x1.038f5fd89833ep-951,
     0x1.2c9e6cb232488p-979, 0x1.4c015eb792d21p-89, 0.0, 0.0, 0x1.aaefdaf09b187p-894,
     0x1.233bb18cb22f8p-1014, 0.0, 0.0, 0x1.0738655ee96e3p-40, 0x1.fa09c437bd773p-367,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.076bc733d6789p-383, 0.0,
     0x1.365d076668b27p-813, 0x1.beb8c1efb61acp-197, 0x1.fcab9c47db0e9p-261,
     0x1.e86175411d628p-763, 0x1.afe7e9b7ca177p-332, 0x1.f700284e411a7p-43, 0.0, 0.0,
     0x1.5917f5b134376p-792, 0.0, 0x1.f65da6fb9b5e1p-135, 0x1.4c7d4de2339a2p-436,
     0x1.f0ee0d34dfec2p-932, 0x1.7d75ea373a7c8p-848, 0x1.942e5f95791abp-871,
     0x1.17953c7c2f621p-315, 0x1.40024564a05cap-487, 0x1.cc26e06908902p-746, 0.0,
     0x1.f829258ba8b92p-306, 0x1.7417f841f4552p-84, 0x1.e6ec07fbbe72p-223, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.870238bfe6aabp-594, 0.0, 0x1.b9bb3819331e1p-666, 0.0,
     0x1.b0dd5826f367ep-199, 0x1.b7869404cbbc3p-289, 0.0, 0x1.4a6331a696fe7p-841,
     0x1.68508278f63aap-225, 0.0, 0.0, 0x1.bfbad2ab1410fp-20, 0.0, 0.0,
     0x1.1ebd9036faae9p-995, 0.0, 0x1.36fce2cc771e2p-226, 0x1.f7b4586c03533p-111,
     0x1.b435ebf380afcp-324, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86eef57fa9228p-407, 0.0,
     0.0, 0x1.f1729f6863623p-404, 0.0, 0x1.251f09eaa8de3p-847, 0x1.6ed701d420dffp-423,
     0.0, 0.0, 0.0, 0x1.85c13f85a0d89p-862, 0x1.17f731c318e8dp-372,
     0x1.e5b6486c51854p-55, 0.0, 0x1.5580f7fd9588fp-695, 0.0, 0x1.2151c653efae5p-208,
     0x1.76307b5f7a69ap-4, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe1b1cb8b13dap-808,
     0x1.4e92d15318028p-652, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4900920cee019p-138,
     0.0, 0.0, 0.0, 0.0, 0x1.e7abb8de1dbf2p-710, 0x1.9f0a065682b02p-29, 0.0, 0.0, 0.0,
     0.0, 0x1.ec66bd22b5098p-824, 0.0, 0.0, 0.0, 0x1.08fe99a68d16ep-284,
     0x1.507fd91bbfb76p-843, 0.0, 0.0, 0.0, 0x1.550ff9a9f8bd1p-773,
     0x1.bf5e5f281cbc9p-81, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b2ac4efeb97bp-467, 0.0,
     0x1.23fed4fc2748dp-55, 0x1.2c4232ce491a9p-527, 0.0, 0x1.3c54419c5b692p-588, 0.0,
     0x1.490e22c2943dbp-138, 0.0, 0x1.8bf6ede0de042p-914, 0.0, 0.0,
     0x1.98da85213d23ap-36, 0.0, 0.0, 0x1.addfe8cd15e3ap-928, 0.0,
     0x1.7b89c57490f56p-362, 0.0, 0x1.3e67d7cc4c188p-468, 0.0, 0.0,
     0x1.99f08e2ad015ep-895, 0x1.51e73abe63648p-200, 0.0, 0x1.886a249bb75bcp-193,
     0x1.4e3cecb26a51fp-395, 0x1.f022eeb7a84dbp-535, 0.0, 0.0, 0x1.bc8fd4f8d4dd2p-14,
     0.0, 0.0, 0x1.44a988b63853bp-940, 0x1.20869751849f6p-333, 0x1.bda6df3e152bap-125,
     0.0, 0x1.5911bc18bc9fcp-475, 0x1.6da17172f2b19p-289, 0.0, 0x1.ea898e8035f8ap-17,
     0.0, 0.0, 0x1.a07020926386ep-274, 0.0, 0x1.e49e3fe4c6641p-143, 0.0, 0.0, 0.0,
     0.0, 0x1.a919e747e4fdfp-919, 0x1.47d0a2e9bb57bp-735, 0x1.1e70ac9f56e6cp-998, 0.0,
     0.0, 0x1.1b35504363523p-732, 0.0, 0x1.f8c94c5b33df2p-141, 0x1.5617b91715cd3p-456,
     0.0, 0x1.7ca823f89b555p-175, 0x1.3c4a4bb125b82p-536, 0.0, 0x1.e4dd5b6cc6568p-658,
     0x1.a709d20a31c7dp-421, 0x1.6749ff703694ap-334, 0x1.c82d0d49b6918p-432,
     0x1.aa7c485a36fdfp-878, 0x1.c904777fe2359p-445, 0x1.f3e495b274908p-18,
     0x1.de3ef6e278003p-898, 0.0, 0.0, 0x1.a529c49c2a007p-600, 0x1.4b32a51422d0dp-545,
     0.0, 0x1.a8e0269b97d03p-779, 0.0, 0x1.6541261ccddc8p-824, 0.0,
     0x1.004e29fc0f31dp-466, 0x1.00b8769e21cbfp-152, 0.0, 0x1.fcf068596eaedp-402, 0.0,
     0x1.9782e831835ap-899, 0x1.91251bde1c965p-468, 0.0, 0x1.b352f745729b6p-108,
     0x1.2855b44f82d6cp-578, 0.0, 0x1.63b4f641a42d5p-235, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6add1a80ff10cp-159, 0.0, 0x1.daa509e4d789fp-800, 0.0, 0x1.dbc49885491c6p-956,
     0.0, 0x1.98aaed42ed281p-782, 0.0, 0.0, 0x1.11638efe37c62p-812, 0.0, 0.0, 0.0,
     0x1.432f69e658a7p-361, 0.0, 0.0, 0x1.269e31e431bc1p-743, 0x1.e93afc67f4454p-646,
     0.0, 0x1.0ebf78ff8fbb9p-661, 0x1.b3390563a1f44p-472, 0x1.05150a098960dp-787, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.86d1106312d2ep-789, 0x1.906e7e36d0531p-199,
     0x1.b69688e06ca03p-265, 0.0, 0x1.2409e9f3d6687p-637, 0.0, 0.0, 0.0, 0.0,
     0x1.da3348d7341a6p-84, 0.0, 0.0, 0.0, 0x1.ff4ef08ed5121p-277, 0.0, 0.0,
     0x1.3a09e94c300a1p-899, 0x1.d6984d1fa7db4p-976, 0.0, 0x1.397214356be18p-260, 0.0,
     0.0, 0.0, 0x1.0a5a19d231acfp-124, 0.0, 0.0, 0.0, 0x1.867c7ef1f5405p-624,
     0x1.102ec4bc8db61p-153, 0x1.39ded0ec2e89dp-303
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
            tmp1 = Sleef_finz_exp2d2_u35kvx(tmp0);
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
    printf("Sleef_finz_exp2d2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp2d2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
