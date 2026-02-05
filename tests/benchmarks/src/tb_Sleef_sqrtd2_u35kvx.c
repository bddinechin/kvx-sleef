/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd2_u35kvx.c --function Sleef_sqrtd2_u35kvx \
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
     0x1.a492fac2f8103p-881, 0.0, 0x1.255cfa0e7d5a3p-92, 0.0, 0.0, 0.0,
     0x1.43a84779ba693p-502, 0x1.dec0dd1da0583p-132, 0x1.d8da8513b8a17p-656, 0.0,
     0x1.bcad69ae3ade4p-563, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6709a6f5b30fp-189,
     0x1.02697fcf69547p-1001, 0.0, 0.0, 0.0, 0.0, 0x1.a25c080cf740ap-578, 0.0, 0.0,
     0.0, 0.0, 0x1.1a7b8c1d59217p-365, 0x1.619723416a86ep-382, 0x1.20985d3cc721ap-513,
     0.0, 0.0, 0x1.b8305c1cba1d1p-584, 0.0, 0.0, 0.0, 0x1.3e5135e377d2p-77,
     0x1.f02234ef14468p-551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d5493c353158p-801, 0.0, 0.0, 0.0, 0x1.8158b479bbb2dp-122, 0.0, 0.0, 0.0, 0.0,
     0x1.426ae482f9afp-184, 0x1.0001cb1b0b86p-125, 0.0, 0x1.22e0e56acf969p-471,
     0x1.c2554d46ec2bep-171, 0x1.4bc381c14a13fp-205, 0x1.42271f268d333p-904,
     0x1.db7aa6c63db88p-742, 0x1.3a0b936b542aap-598, 0.0, 0.0, 0x1.9d8b5ab256625p-871,
     0x1.9463af14ad964p-853, 0x1.3b40f1c27aap-72, 0.0, 0x1.5180b73c2e8cap-411, 0.0,
     0x1.89f0dea8e180fp-999, 0.0, 0x1.3fd55587e9ed5p-601, 0.0, 0.0,
     0x1.2f74209616acdp-642, 0.0, 0.0, 0x1.73d68ae04f4c9p-41, 0.0,
     0x1.057052522794ep-773, 0x1.7bf7c6592202ap-714, 0x1.c74b957f28455p-964,
     0x1.d4db61ae6d195p-509, 0x1.16e991c973fep-949, 0.0, 0.0, 0.0,
     0x1.49a4541439f7p-8, 0.0, 0.0, 0x1.8f9c0cf77dbp-949, 0x1.cfa45dfe67d15p-956, 0.0,
     0x1.43887d50cd8cfp-855, 0x1.512cdda4fa6cbp-888, 0.0, 0.0, 0.0, 0.0,
     0x1.3411f5056b609p-18, 0x1.0133d9b7afeeap-216, 0.0, 0x1.b10ea4d324cabp-884,
     0x1.663e20b374d1fp-814, 0x1.f12a552cdb68fp-789, 0x1.ba8994047f8edp-264, 0.0, 0.0,
     0x1.9d882f2ce98c8p-211, 0x1.6dd5f4959f63p-460, 0x1.0e50e77f8abb3p-828,
     0x1.c7ee0180cc779p-346, 0x1.fd287975d9ac8p-781, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f1947965008f6p-673, 0.0, 0x1.e012bf4bc1407p-818, 0.0, 0x1.69674218bcfcep-979,
     0x1.6270ea8ea86c2p-103, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a0e1d757de5cp-189, 0x1.c79d0b4e5de1dp-1010, 0.0, 0.0, 0.0, 0.0,
     0x1.0a917caa0a203p-436, 0.0, 0.0, 0.0, 0.0, 0x1.6b2fa4818f44fp-617,
     0x1.7d9dcc50641f3p-689, 0x1.774315fac4ad9p-884, 0x1.f0002eeb54dd6p-592,
     0x1.4e021c1d69a0ap-11, 0x1.5f2848034e03dp-731, 0.0, 0x1.24984010d5be3p-997,
     0x1.877f119134beap-360, 0.0, 0.0, 0x1.afd14a2f56fb6p-582, 0x1.8a35daf65bd89p-541,
     0x1.54c5c440493cdp-791, 0x1.a4175d605c665p-89, 0x1.7e93bd208d809p-278,
     0x1.ce48f62148276p-531, 0x1.0c51e7ccffce8p-344, 0x1.e0e3392b2cd0ep-828,
     0x1.a598c2203ef62p-49, 0x1.3a3b0e6321bf5p-475, 0.0, 0.0, 0x1.f5f3d33b7071dp-855,
     0x1.a89c8db2fc93fp-645, 0.0, 0x1.580fd3eef697fp-1010, 0x1.a2e3fd5028cc6p-987,
     0x1.620d871ae88dep-433, 0x1.f1ea50d032912p-923, 0x1.71aaa48b28deap-993,
     0x1.06743c365e144p-240, 0x1.d6a200caefc37p-409, 0.0, 0x1.5f082d0c199cdp-974,
     0x1.37cc19fb827c5p-182, 0x1.86a2c727c20fdp-8, 0.0, 0x1.688ba402c2d3p-380,
     0x1.33ff0171e51ebp-321, 0.0, 0x1.32a32952b9361p-97, 0x1.f1ce123b7c37ap-856,
     0x1.77aabee192a23p-763, 0.0, 0.0, 0x1.407d3e914cdaap-176, 0.0, 0.0, 0.0,
     0x1.37af6c9c91c59p-323, 0x1.add2b3bea9d74p-323, 0x1.79fec016fb407p-705,
     0x1.667efe3af4de6p-615, 0.0, 0x1.c00da93891254p-98, 0x1.422026cc1784ep-459,
     0x1.7c014932a1552p-26, 0x1.982d72515837fp-232, 0.0, 0.0, 0.0, 0.0,
     0x1.50f219af2896dp-891, 0.0, 0.0, 0.0, 0x1.d64c7e51bb376p-422, 0.0, 0.0, 0.0,
     0.0, 0x1.eb34799fcc3dp-456, 0x1.b2209f709ab19p-601, 0.0, 0.0,
     0x1.f404858030874p-527, 0.0, 0.0, 0x1.16713d90a4a55p-845, 0.0, 0.0,
     0x1.d57d260c8720ap-575, 0.0, 0x1.cdccf98f33487p-380, 0.0, 0.0,
     0x1.0d2b0b141ff7bp-690, 0.0, 0x1.9546f1fdf2597p-2, 0x1.25bf9071c0d1bp-902,
     0x1.3994b277a09c1p-369, 0.0, 0.0, 0.0, 0x1.f7c68b13779bp-191,
     0x1.11908ed6e66b6p-724, 0.0, 0.0, 0.0, 0x1.14f6bbc49f757p-61, 0.0, 0.0,
     0x1.e708e4a5100b1p-602, 0x1.8eef777cc36a5p-273, 0.0, 0x1.4e95b9ecea661p-204, 0.0,
     0.0, 0x1.cc6ad0879db99p-968, 0.0, 0.0, 0x1.e43b4354e7966p-690,
     0x1.68b433405bb06p-916, 0.0, 0.0, 0.0, 0x1.f527663ec65aap-550,
     0x1.5e06a31e83267p-455, 0x1.bedbf43b42a21p-193, 0.0, 0.0, 0.0,
     0x1.694d29da03b25p-44, 0.0, 0.0, 0x1.4af0874e990adp-165, 0.0, 0.0, 0.0, 0.0,
     0x1.24c907bf061a4p-220, 0x1.333c22bfadf55p-209, 0.0, 0x1.415a60bb0db26p-356,
     0x1.b955ace8256cep-194, 0x1.bae4521a430a8p-54, 0.0, 0.0, 0.0, 0.0,
     0x1.130ae33a4309p-819, 0.0, 0x1.6e5f8db7d160ep-838, 0.0, 0x1.c58930434e1b7p-848,
     0x1.923028c6e5b1cp-777, 0.0, 0.0, 0x1.b32af27997933p-105, 0.0,
     0x1.932b22ac39d0fp-520, 0x1.bc2e13a973365p-124, 0x1.c9713d431ce6p-651,
     0x1.de7a253a7832ap-969, 0x1.a81fa14ef0d95p-580, 0.0, 0x1.cc4e4670f0057p-433,
     0x1.b76d3522904p-525, 0.0, 0.0, 0x1.4c4bf88315c71p-578, 0.0, 0.0, 0.0, 0.0,
     0x1.8269b6624c8e5p-159, 0x1.d1eddec891cf7p-308, 0.0, 0x1.b70a51c1936cap-825, 0.0,
     0x1.2ce2a81905c83p-269, 0.0, 0x1.7687770ecfc4fp-366, 0.0, 0x1.dc222fe7895cep-574,
     0.0, 0.0, 0x1.54d27c17a569fp-667, 0x1.6e737e3527004p-258, 0.0,
     0x1.1c582bcacd492p-387, 0x1.f49f54a264498p-979, 0.0, 0x1.612a0a9f5438ep-406,
     0x1.1401e0d8f090bp-318, 0.0, 0.0, 0.0, 0x1.a022009fe7b46p-816,
     0x1.e86f044f28d69p-282, 0.0, 0.0, 0x1.ff26075ae16e3p-375, 0.0,
     0x1.57d1b7fbd0f3cp-983, 0x1.51c69569ea1bdp-276, 0x1.73930d2de63dfp-337, 0.0, 0.0,
     0x1.e54136bc9c5e9p-487, 0.0, 0.0, 0x1.5be27906e5949p-915, 0.0, 0.0, 0.0, 0.0,
     0x1.07437367b37b4p-953, 0.0, 0.0, 0x1.f032348045728p-52, 0x1.9e48581c696f3p-154,
     0.0, 0x1.4c6584f0da58cp-694, 0x1.3e4126c9b3b7ap-84, 0.0, 0.0, 0.0,
     0x1.05fd8345c796dp-28, 0.0, 0.0, 0x1.aba4618782a73p-610, 0x1.dcb38b724e1bep-967,
     0x1.e38260ad60478p-379, 0x1.6a0f1e40f3cap-807, 0x1.477addab5d28ep-886, 0.0, 0.0,
     0x1.578b432e131c2p-691, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bb402f1648949p-452, 0x1.939f9ecc17fap-886, 0x1.93c05c292f6b6p-259, 0.0,
     0.0, 0x1.8faa4c27ef395p-573, 0x1.1f27d5205e573p-430, 0.0, 0x1.1452013054336p-340,
     0.0, 0x1.d4e10bcf09b08p-914, 0x1.ed48e7fe06477p-982, 0x1.1855828d910c1p-593,
     0x1.8c25e76239481p-390, 0.0, 0x1.1b32323887518p-64, 0.0, 0x1.0e67dc7dc0492p-670,
     0x1.b93b819b5909fp-581, 0x1.97fc7feb54ad5p-397, 0x1.afe3a758f1fa3p-335,
     0x1.f0c37a1a6a166p-575, 0x1.7249a90fa6a47p-361, 0.0, 0.0, 0x1.29eb3dfed2f34p-198,
     0.0, 0x1.a691233c93cc9p-571, 0.0, 0x1.62d13697b5be2p-348, 0.0,
     0x1.0daecb36fb54bp-555, 0.0, 0.0, 0x1.8987f252cfb4ap-892, 0x1.e264f16c44b05p-121,
     0x1.9cc2711e9e6d7p-347, 0.0, 0x1.254f74d298995p-550, 0x1.d6f24472cfc82p-472, 0.0,
     0.0, 0x1.4e6b8b56543fp-169, 0x1.70bc5088054dcp-451, 0.0, 0.0,
     0x1.52b7624ecdbp-573, 0x1.1e21ecb87bbfp-560, 0.0, 0.0, 0x1.2cfe4a4e97896p-884,
     0x1.efba0506b7282p-544, 0.0, 0x1.bf733dfd2ccc5p-1010, 0x1.746a4e5f4b5e3p-194,
     0.0, 0.0, 0x1.ce69e1d74c61cp-469, 0x1.e000e1e459975p-894, 0x1.5b50a40d2226ap-789,
     0x1.26a2e248f499ep-659, 0x1.9bdadcf9de4d7p-969, 0.0, 0x1.1b03482db3ccfp-494, 0.0,
     0x1.a84e25792682ap-1020, 0x1.9dfbbb12e84c1p-792, 0.0, 0.0, 0.0,
     0x1.17de7addbc018p-420, 0.0, 0x1.4b393a8db07afp-199, 0x1.f6ab59a1483a8p-547,
     0x1.05e0401f3d274p-784, 0.0, 0.0, 0x1.107f1cebacf08p-362, 0.0,
     0x1.e9791075f0a55p-420, 0x1.3e99735b197b8p-160, 0x1.d2c3a36cd4c81p-96, 0.0, 0.0,
     0.0, 0x1.6fddcd39f0776p-725, 0x1.79a559ac189aap-532, 0.0, 0.0, 0.0,
     0x1.1cb12647ec60ep-907, 0x1.eb703c13b9d51p-219, 0x1.2b2069c95395fp-88, 0.0,
     0x1.8774f2abec0ep-399, 0x1.fdb750fc73287p-821, 0.0, 0.0, 0.0,
     0x1.08c03a4f22669p-160, 0x1.3a599bdeb185dp-65, 0x1.80675483568f8p-777, 0.0, 0.0,
     0x1.b81ea1dfbd6aep-635, 0.0, 0.0, 0.0, 0x1.6ab9a61b3f6afp-829, 0.0,
     0x1.42ad07e806043p-462, 0x1.073366d963c96p-391, 0.0, 0.0, 0x1.641433d9c7624p-350,
     0.0, 0x1.8ef2648ee1a99p-255, 0x1.77c08c670c1abp-198, 0.0, 0x1.0f19c2a70690cp-946,
     0.0, 0.0, 0.0, 0x1.3b1eb6a791b84p-196, 0.0, 0.0, 0x1.f995ace713ffap-91,
     0x1.e058d2f0b2e28p-501, 0.0, 0.0, 0.0, 0.0, 0x1.95a4f4cb56f4cp-327,
     0x1.66290a8699ba2p-529, 0.0, 0.0, 0.0, 0x1.1a1b32240bf45p-966,
     0x1.358c98544777fp-658, 0.0, 0x1.e51c559ff5f38p-789, 0.0, 0.0,
     0x1.3f66cb7804fe7p-13, 0.0, 0.0, 0x1.09adb3b1753c3p-910, 0.0,
     0x1.7c18025464257p-996, 0.0, 0.0, 0x1.4596137bcb81ep-139, 0x1.3e465c87926fp-903,
     0.0, 0x1.f308d86514a97p-210, 0.0, 0x1.7373f2ffb49d7p-444, 0.0, 0.0,
     0x1.c266d4e412c26p-472, 0.0, 0x1.52afe2f8e3ecep-655, 0.0, 0x1.446858c00ffcdp-217,
     0.0, 0.0, 0x1.29c8e46e0f11fp-848, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49d91adc44a1p-717, 0.0, 0.0, 0.0, 0x1.4facbb8a5ec9dp-3, 0.0, 0.0,
     0x1.c3192e3d3017bp-727, 0x1.52421e1e6babcp-1016, 0x1.4ae39c58c006p-191,
     0x1.2e71ebed78b95p-881, 0.0, 0x1.9a21bb9707e8bp-349, 0x1.23fb871578acap-439, 0.0,
     0x1.8bb45d15433aep-457, 0.0, 0x1.e22793b4bde07p-1013, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e87473040370ap-131, 0x1.eb17aec67f26bp-649, 0.0,
     0.0, 0x1.c30e0d0ccff95p-439, 0.0, 0.0, 0.0, 0x1.d5b0fe0671ae5p-745, 0.0, 0.0,
     0.0, 0.0, 0x1.e057d86171379p-1004, 0x1.3d423f9252d84p-1019,
     0x1.04240e36288dap-567, 0.0, 0x1.d03a818d137dcp-722, 0.0, 0.0,
     0x1.ef9f7a8735d7bp-862, 0.0, 0.0, 0.0, 0x1.d27c84a4b3a8bp-978,
     0x1.a8efaf92f9dbep-319, 0x1.0006b3408000bp-184, 0.0, 0x1.4ee3ca799c85fp-551, 0.0,
     0x1.c36c42654a8d4p-371, 0.0, 0.0, 0.0, 0x1.286dc15089e36p-163,
     0x1.d520141f67b73p-467, 0x1.528164c538ce2p-610, 0x1.45baace2a2c11p-312,
     0x1.8485eebfbbed6p-320, 0x1.eee0ef3cde5afp-712, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ad05cd76a1e8bp-280, 0.0, 0.0, 0x1.9a4c4eae0fffbp-218, 0.0, 0.0, 0.0,
     0x1.e2b531db3b51bp-214, 0x1.914e70e63fa4ap-23, 0x1.b00a77c94b1fp-359, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.edc748ab008ecp-227, 0.0, 0.0, 0.0, 0.0,
     0x1.f14d852e098f1p-547, 0x1.6370deb2615d6p-1014, 0x1.42c6586cc4a95p-663,
     0x1.c00b15a8c37c5p-24, 0x1.36a95f5d8cf3dp-188, 0.0, 0.0, 0.0,
     0x1.46157c3068262p-55, 0x1.af66f890b4b26p-717, 0x1.4b09999be1d23p-445, 0.0,
     0x1.76ba378e8f247p-990, 0x1.864e80ce0dab6p-448, 0.0, 0.0, 0.0,
     0x1.4e1a6c9df7331p-138, 0.0, 0.0, 0.0, 0.0, 0x1.efae9bbbe0ec9p-688,
     0x1.2a55fd7d6f961p-38, 0x1.2577ec5353b9p-270, 0.0, 0x1.c76b4429aae69p-895,
     0x1.5341939e6dbccp-227, 0.0, 0x1.7c2d3ee5aefdep-600, 0.0, 0.0,
     0x1.ec442b0ac9b46p-450, 0.0, 0.0, 0x1.f324aba13e2bep-953, 0x1.d15955b38ce3p-865,
     0x1.be668fc6ab874p-445, 0.0, 0x1.4cca57eebf99p-579, 0.0, 0x1.9f390533cde3cp-224,
     0.0, 0.0, 0x1.06e2948a7b624p-520, 0.0, 0x1.6f8fd8b1cabc8p-208,
     0x1.3a939a1ffcd8bp-304, 0.0, 0x1.b30f10336f35p-731, 0x1.a2ff21bff6b6p-634,
     0x1.1eec9ec60f7cdp-231, 0.0, 0.0, 0x1.e72123ab032b5p-848, 0.0, 0.0,
     0x1.e89749ca7ba14p-723, 0.0, 0x1.2e37222eeb6efp-974, 0x1.f32459ffbff4ep-342, 0.0,
     0x1.55bd061cca5b7p-933, 0.0, 0x1.d11da5843a3dap-295, 0x1.8572c0b5e56c9p-1002,
     0x1.ce1853270a2ebp-526, 0x1.c7a018b99ab81p-766, 0x1.4005e67df2afdp-870, 0.0,
     0x1.6a96c0a3191e3p-251, 0.0, 0.0, 0x1.37a5c07b00e83p-344, 0x1.634c77f9c3767p-534,
     0x1.b76416757fba2p-843, 0.0, 0.0, 0x1.1eb71ed67cb1ap-614, 0.0,
     0x1.cda7f2a58e46fp-560, 0.0, 0.0, 0x1.f10f9df938586p-535, 0.0, 0.0,
     0x1.9b54aee021fc7p-97, 0.0, 0.0, 0.0, 0x1.0e577ef0c7a87p-171, 0.0, 0.0,
     0x1.57871b37b07c2p-272, 0.0, 0.0, 0x1.964a8686e2702p-354, 0x1.5c3f380d893ep-817,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6eb51b005cd59p-479, 0.0,
     0x1.f65fc445ec8fp-119, 0x1.b7a891f812611p-718, 0x1.b675560cdda96p-840,
     0x1.3dc4352a68c57p-250, 0.0, 0x1.02974c42dbafep-916, 0.0, 0.0,
     0x1.87ea1a7fa22d8p-514, 0.0, 0.0, 0.0, 0x1.8ccca49d597f8p-496, 0.0,
     0x1.067f8cc6bc5f9p-83, 0x1.0957c5fe68e35p-494, 0x1.4f4a21f0e1994p-729,
     0x1.abf757e0057aap-487, 0x1.2f2b0b78bae6fp-842, 0.0, 0.0, 0.0,
     0x1.d2cada5d9a3eap-38, 0.0, 0.0, 0.0, 0.0, 0x1.d1d04646a5f52p-39, 0.0, 0.0, 0.0,
     0x1.a0f2aa71b4a48p-702, 0x1.156353b7a2694p-778, 0x1.e9e57689e1e91p-883, 0.0, 0.0,
     0x1.2d3951860ed1ap-29, 0x1.794763365a5c2p-176, 0.0, 0x1.4f6fd17a4259p-762, 0.0,
     0.0, 0x1.26b707e8cfbbdp-157, 0.0, 0.0, 0x1.7459c9f9019dp-270,
     0x1.c8e53721a162ap-593, 0x1.1bb100daa75bcp-77, 0x1.0c239381f722fp-633, 0.0,
     0x1.d58521e93549p-203, 0x1.ad6419a84dcebp-150, 0x1.a642414815d72p-238,
     0x1.6dfbbf4283543p-985, 0.0, 0x1.9436f94c09f51p-597, 0x1.81ca3740567a4p-741,
     0x1.2cb1959428a0fp-532, 0.0, 0.0, 0x1.0cbbc57c17c09p-884, 0.0, 0.0, 0.0,
     0x1.631b56c59c9dap-541, 0.0, 0.0, 0x1.307e8c2c005aep-766, 0.0, 0.0, 0.0,
     0x1.e6fcd207e5a1p-387, 0.0, 0.0, 0.0, 0x1.06f243621dfd8p-547,
     0x1.0d838b51213c6p-861, 0.0, 0x1.87f2b8933c0e9p-419, 0.0, 0.0,
     0x1.a9fc914db654cp-951, 0x1.932e1073d7464p-688, 0x1.645fb4991937fp-980,
     0x1.345f8876631bdp-223, 0.0, 0.0, 0x1.fb8f4a168c51p-715, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b463d7fb15ab4p-430, 0x1.0eb388bb4acadp-565, 0.0, 0.0, 0.0, 0.0,
     0x1.b8dff1764b779p-309, 0x1.64c4304e73196p-912, 0.0, 0.0, 0.0,
     0x1.7f634a5f66415p-161, 0x1.8f4c7759f013ap-492, 0x1.0c4e86ee3b18bp-482,
     0x1.8a3c50eded6e7p-586, 0.0, 0x1.73c47149c2553p-838, 0x1.a975175bb0127p-95, 0.0,
     0x1.c69b608b6fedep-464, 0x1.ec871be0fd9f8p-951, 0.0, 0.0, 0x1.07a9335296d47p-911,
     0x1.d02339b0a3a69p-992, 0x1.75ed70ea70c83p-954, 0x1.2f64473aa695ap-130,
     0x1.1f0e9f68c19bp-265, 0.0, 0.0, 0x1.d47733934cea9p-330, 0.0,
     0x1.fb71c9394b6e6p-722, 0.0, 0x1.f0db27e0e1dc8p-836, 0x1.70756cb54dd3ep-319,
     0x1.9fc0c725e5315p-466, 0.0, 0x1.7c2d74beb02d7p-686, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.82dbc6101acefp-938, 0x1.51f01eb9207dcp-756, 0x1.a5cc0ed8ed85p-504, 0.0,
     0x1.42eab5377c058p-696, 0.0, 0x1.090caf0bd6669p-917, 0x1.8742a3833e8bep-596, 0.0,
     0x1.e920100140399p-974, 0.0, 0x1.c40d8e17eee48p-555, 0x1.a816f35985e47p-558,
     0x1.8e28a5e4dcf49p-854, 0x1.a7b87dde6cb38p-498, 0x1.e46c326348f1fp-519, 0.0, 0.0,
     0x1.a148f3c434c3dp-242, 0.0, 0x1.53602c662d18dp-943, 0x1.dc001dc1df40fp-34, 0.0,
     0x1.a5aa084bc435p-558, 0x1.9de5955e0024bp-662, 0.0, 0.0, 0x1.adb20543e6dd5p-418,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.40308ae77e9ffp-909, 0x1.37689f76e8p-746, 0.0,
     0x1.d776c2eca4a1bp-804, 0.0, 0x1.90f9f262bf42dp-21, 0.0, 0.0,
     0x1.64c3c82136e5fp-273, 0x1.dc8579c640ab9p-1002, 0.0, 0.0, 0.0,
     0x1.1f077c8c1903ap-558, 0.0, 0.0, 0x1.9d051195fc2cep-684, 0.0,
     0x1.438b2834b321cp-769, 0x1.979ba74f53a9dp-484, 0.0, 0.0, 0x1.88a227b8255c4p-244,
     0x1.da4a65afb4c4cp-363, 0x1.946a6c6e60303p-794, 0x1.123e8fdbcda2fp-970, 0.0, 0.0,
     0.0, 0x1.8f1c415dd414ap-465, 0.0, 0.0, 0x1.fab2d9b2d2d8dp-629,
     0x1.03496db9aa902p-737, 0.0, 0.0, 0.0, 0x1.ddcc0b18357b8p-27, 0.0,
     0x1.439b95cd8f0b9p-274, 0.0, 0x1.9c39a327df535p-90, 0x1.9268694a2b625p-708,
     0x1.00c52ff6e05eep-391, 0x1.37fe294b25e4ep-347, 0x1.71f4ff3a493f9p-887,
     0x1.64c0894ea2efbp-806, 0.0, 0.0, 0.0, 0.0, 0x1.aaaf06fc7daf8p-764,
     0x1.8111dfd5f6a02p-499, 0x1.6001b0bb78995p-114, 0x1.7aa171f6ea085p-21, 0.0, 0.0,
     0x1.f458681e42e1fp-825, 0.0, 0.0, 0x1.ffc3652afa07ap-647, 0x1.7c66811e18348p-113,
     0.0, 0x1.4396d0d8ac7bp-310
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
            tmp1 = Sleef_sqrtd2_u35kvx(tmp0);
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
    printf("Sleef_sqrtd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sqrtd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
