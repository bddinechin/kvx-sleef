/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd2_u35kvx.c --function \
 *     Sleef_finz_coshd2_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.38569fddb8d8fp-231, 0x1.09af6d6d94c8dp-559, 0x1.bd4ef537c2de9p-985,
     0.0, 0.0, 0x1.40a1801f23f72p-158, 0x1.2bb089e20b4fbp-527, 0.0, 0.0,
     0x1.3143ccc399dbep-457, 0.0, 0x1.36dfa6b6e79edp-998, 0x1.2579d53f613cbp-660, 0.0,
     0x1.38753e9d212b4p-244, 0.0, 0.0, 0x1.8e2e16b94460bp-674, 0x1.acab3cb2e2ebdp-941,
     0x1.758efa56b5f0ap-358, 0.0, 0.0, 0x1.f12bc71a7b7e6p-641, 0x1.32251cdb3d9dbp-20,
     0x1.9d254ea37bbe7p-430, 0.0, 0x1.e600f43c7dbd4p-738, 0.0, 0x1.44a5aa1eb4bc6p-263,
     0x1.08b96db05682fp-13, 0x1.1a5919e2fa9f9p-499, 0.0, 0.0, 0x1.a19902cbea7e3p-788,
     0x1.29cf610c3788dp-287, 0x1.a6901a74c2a4ap-402, 0.0, 0x1.12baab1426aebp-740, 0.0,
     0x1.3a8f11d613386p-967, 0.0, 0.0, 0x1.8f2fbfe27d20fp-645, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3d530c99838edp-863, 0.0, 0.0, 0.0, 0x1.04a86200ffb57p-121,
     0x1.0602bc0f10e1ep-233, 0.0, 0x1.8ef7ac812a84ap-596, 0x1.2b825112efb9ap-454,
     0x1.179a3eb2ad3a9p-876, 0x1.f6d1a23ceabefp-23, 0.0, 0.0, 0x1.8c7aa707cddedp-402,
     0.0, 0x1.9769f0103d3bbp-92, 0x1.db1e3aa5d599ep-770, 0.0, 0.0,
     0x1.246c623b9746dp-216, 0x1.cd8535221b9b7p-680, 0.0, 0.0, 0x1.3bbc9bccf324ap-118,
     0.0, 0.0, 0.0, 0x1.5d3bb3d489a6bp-477, 0.0, 0.0, 0x1.dd5d6acdd436dp-770, 0.0,
     0.0, 0x1.cf014eea4dfa1p-1004, 0x1.c3d98de1e65bap-229, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cc7c49365b16ap-111, 0.0, 0.0, 0x1.2d20aa0a01251p-858,
     0x1.4ea2a525c398bp-1013, 0x1.8d6b64cd4fc4ep-625, 0.0, 0.0, 0.0,
     0x1.e0d477388b08p-244, 0.0, 0x1.38a152172b17ap-299, 0x1.8c4949ce2b4adp-734,
     0x1.34fcb6d5ed502p-853, 0.0, 0x1.1d7a92e69094dp-606, 0.0, 0x1.74f3df46fbd39p-646,
     0x1.d3fcb681f40d7p-400, 0.0, 0.0, 0x1.0038a45fc084cp-886, 0.0,
     0x1.60e0afd99883bp-302, 0x1.f3b1f65506004p-659, 0x1.ab1bfdd2376aep-25, 0.0, 0.0,
     0.0, 0x1.b4d0cdb5399dcp-371, 0x1.4c39589709b9ap-339, 0x1.7e9b980ba4386p-21, 0.0,
     0x1.d3ad4ae68564fp-680, 0.0, 0x1.a231b3327c4e5p-738, 0.0, 0x1.d3035e3b9143fp-395,
     0x1.47158b8c788a3p-747, 0x1.062e229c21f5ep-134, 0x1.50bf4b51be7f2p-375, 0.0, 0.0,
     0.0, 0x1.0619edfaea265p-798, 0x1.c0dab4d13a751p-613, 0x1.aa939da17e7b6p-343,
     0x1.1cbdc488c74fcp-733, 0.0, 0.0, 0.0, 0x1.a7b2e695ae647p-433, 0.0,
     0x1.6da4e7e028598p-771, 0.0, 0x1.374916b5a7af3p-554, 0.0, 0x1.ad463e20439cap-140,
     0.0, 0x1.a8e160a70ccf8p-72, 0x1.5fe12496c69a6p-66, 0.0, 0x1.d4200d14c3cc5p-93,
     0.0, 0.0, 0.0, 0.0, 0x1.0d492e6609578p-902, 0.0, 0x1.561332b2b619p-309,
     0x1.e7c57b61659d9p-713, 0x1.5b5814e5c6e9bp-708, 0x1.db8c85f0c6139p-345,
     0x1.a8ae903fc9c5ap-66, 0.0, 0x1.bddcb0c80cbe6p-603, 0.0, 0.0,
     0x1.10883006388fdp-574, 0.0, 0x1.282870d508fabp-698, 0x1.5a35ed2994887p-698, 0.0,
     0.0, 0x1.002b98214984ap-922, 0.0, 0x1.710430adbc0e5p-291, 0.0,
     0x1.ec4703647a74ap-135, 0x1.7a068e038e5dcp-124, 0x1.b3d76bea62085p-260, 0.0, 0.0,
     0x1.c2ad21c86a2b4p-989, 0.0, 0x1.8a4936d20014dp-810, 0.0, 0x1.d51863f90bcb7p-130,
     0.0, 0x1.e48a114c2c6f7p-532, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbd05748235c7p-122,
     0x1.6986b5cc76637p-216, 0x1.58106cc10989dp-157, 0.0, 0.0, 0.0,
     0x1.5599e1db126dcp-86, 0x1.c8f607be16172p-239, 0x1.b672a384be1b7p-714, 0.0, 0.0,
     0x1.65a87480a7527p-638, 0x1.fa9722f6d0566p-889, 0x1.496304f78f2f3p-979, 0.0, 0.0,
     0.0, 0x1.56c9136253843p-922, 0.0, 0x1.11fa43f98670cp-858, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fcb58b500cdd2p-370, 0x1.2e4fab8871e1fp-310, 0x1.1740c0990e94ep-564,
     0x1.095aaac37a307p-11, 0x1.60614a4db6a41p-603, 0x1.a04899d56623ep-744,
     0x1.df87b197de7bdp-733, 0.0, 0.0, 0.0, 0.0, 0x1.b6b28e8e7b332p-651, 0.0, 0.0,
     0.0, 0x1.cb8afa48b0e53p-810, 0x1.9a7e90b0cc66ep-684, 0.0, 0.0, 0.0, 0.0,
     0x1.9be29c528da47p-395, 0.0, 0.0, 0.0, 0x1.46705cb045cfcp-419, 0.0,
     0x1.b02e2270556a1p-454, 0x1.1f2e6201660bdp-567, 0x1.c1128b3e7e22dp-607,
     0x1.2abff796b98eep-830, 0x1.76a1397b86a0fp-729, 0.0, 0.0, 0x1.f4331f5e21b1ep-334,
     0x1.6f48cdd2280abp-887, 0x1.eab56cd91a7fap-964, 0x1.1ea42bea5080fp-928, 0.0,
     0x1.b55854b2f2634p-357, 0x1.f03ab1af744c6p-167, 0.0, 0x1.1270661afd8e4p-412, 0.0,
     0x1.e6bdbcdf9ba0ap-963, 0x1.1a12f7fbe29fbp-334, 0x1.b8acad1219a19p-831, 0.0,
     0x1.ff24256aa2c41p-178, 0x1.e3fb9eadd6adp-877, 0x1.533fdaf7b9789p-467,
     0x1.866ff058e214ap-482, 0x1.0e303454e571cp-292, 0.0, 0x1.9020dac90203p-468,
     0x1.f81a942bbd995p-153, 0x1.72dcd0fd11c5fp-673, 0.0, 0x1.a5003fd824179p-755, 0.0,
     0.0, 0.0, 0x1.915730b0885f7p-242, 0x1.15bf1985cdd09p-76, 0.0, 0.0, 0.0, 0.0,
     0x1.a217d8bbf3eaap-294, 0.0, 0x1.9095d6e65f26bp-347, 0x1.9b255c26b3168p-642, 0.0,
     0.0, 0x1.377496da970c5p-897, 0.0, 0x1.fba9f8fa44cabp-339, 0.0,
     0x1.24d985b9d6e26p-70, 0x1.3d5292ed865e3p-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8da81262a3774p-98, 0.0, 0x1.1a3dfa41c7debp-398, 0.0, 0.0,
     0x1.d23f02886874bp-101, 0x1.b69a1a663cab2p-821, 0x1.934148d7225dbp-625,
     0x1.f11f2c0a6bfbdp-944, 0x1.4ad57327fa564p-683, 0x1.702aa594a5c99p-692,
     0x1.751ff05b4aad9p-746, 0.0, 0x1.49f6c71fb9a8bp-80, 0x1.04379f0fc765ap-457, 0.0,
     0x1.6b091491da0adp-17, 0.0, 0.0, 0.0, 0.0, 0x1.c57f298cce1c1p-552,
     0x1.bd421da1bbbb7p-108, 0.0, 0x1.c7e3f4a2f47edp-333, 0.0, 0x1.e01716e6bffdcp-272,
     0.0, 0.0, 0.0, 0.0, 0x1.a2008f39183p-928, 0.0, 0x1.4fedeae48e88dp-597, 0.0, 0.0,
     0x1.1e80d9e88e461p-389, 0x1.bd9c57ac1eaa8p-554, 0x1.e44576faf627fp-242,
     0x1.da3ce1d4df02bp-89, 0.0, 0.0, 0.0, 0x1.9c3229b9463cap-618,
     0x1.2cc02a11be315p-289, 0x1.f580d1ce0fd61p-70, 0.0, 0.0, 0x1.b5c4cf018f27dp-65,
     0x1.46e47175e86e8p-617, 0x1.3618ad1f26db9p-603, 0x1.af6fbe08f7898p-96, 0.0,
     0x1.f6451243223afp-758, 0.0, 0x1.b9fc3d1d07036p-39, 0.0, 0.0, 0.0,
     0x1.5da71114463fp-31, 0.0, 0.0, 0x1.ccf43fed52798p-969, 0x1.1e3ceaff69d85p-626,
     0x1.d84d7577cd655p-966, 0x1.4bcefae84b698p-583, 0.0, 0x1.91739cf39cd8dp-27, 0.0,
     0.0, 0.0, 0x1.e473a72dade09p-486, 0x1.64b8d112f6861p-201, 0x1.78df4291c7114p-53,
     0x1.fdafcd108db21p-716, 0.0, 0x1.b98abf3040e36p-627, 0x1.77073b25703e1p-1012,
     0x1.d53fadea9f98ep-775, 0.0, 0x1.6c63a4162bfep-605, 0x1.84dd962782341p-912, 0.0,
     0x1.d4d30d9afbe79p-880, 0x1.5238287514f39p-122, 0x1.41f54f18e3771p-851,
     0x1.a434fe3335dacp-245, 0x1.e38aede4af601p-283, 0x1.5b136ee57a1f5p-970,
     0x1.35bd7042f1397p-889, 0.0, 0.0, 0x1.3ce83c22892c4p-56, 0.0,
     0x1.0abf369d9f314p-317, 0x1.cf752adeb4061p-116, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.70fd3913b8b5ep-311, 0x1.c716e3df3dc16p-428, 0.0, 0x1.8f72a470f581ep-774, 0.0,
     0x1.7a7175a9c379fp-30, 0x1.496601942c936p-665, 0x1.c4940e5bffd81p-652, 0.0,
     0x1.7680b288243a5p-927, 0.0, 0x1.e3f87aaee272cp-300, 0x1.5b5344acf9c63p-767, 0.0,
     0x1.47623bc14d615p-546, 0.0, 0x1.ac5e57aa4b147p-1012, 0.0, 0.0,
     0x1.a53ce34ef9ce8p-464, 0x1.37f3fdf79981ep-858, 0.0, 0.0, 0.0,
     0x1.b5e72e708d582p-252, 0.0, 0.0, 0.0, 0.0, 0x1.5444b29aee02cp-700, 0.0, 0.0,
     0x1.3210d0bb68585p-538, 0x1.a1d274d3ab75ep-48, 0x1.98234290038a5p-82,
     0x1.fb47a6fda77aap-848, 0x1.c5366aebbeffcp-983, 0.0, 0x1.2f3e9f42e6801p-629,
     0x1.08c8d9b8dd635p-891, 0x1.86b15b5652f34p-896, 0.0, 0.0, 0.0,
     0x1.c6e4fe7b4d6b2p-514, 0x1.f10a7a17ba67ep-143, 0.0, 0x1.f17c60786419cp-448, 0.0,
     0x1.3d5c0739a07fcp-589, 0x1.4baad6af2f21ep-758, 0x1.46992799af72cp-573,
     0x1.6c271c0b51c27p-65, 0.0, 0.0, 0x1.ee8a0b6c13014p-50, 0.0,
     0x1.fee829574632ep-332, 0x1.4d2e82bdb2cep-575, 0.0, 0.0, 0.0,
     0x1.888cc04030f68p-440, 0.0, 0x1.86a488caf268bp-299, 0.0, 0.0,
     0x1.24a842a9046e5p-494, 0.0, 0x1.19729aa4721ccp-218, 0x1.050118b616f25p-735, 0.0,
     0x1.3c73ce7bee9ap-280, 0.0, 0x1.5c432fddf2621p-207, 0x1.d419ce00bcab4p-381, 0.0,
     0x1.ecf5bbfb80506p-384, 0.0, 0.0, 0x1.89f9c8f18bae5p-904, 0x1.fc51b474c3ea8p-971,
     0x1.a8a9ba17ca47fp-275, 0x1.4a2a698224e9ep-422, 0.0, 0.0, 0.0, 0.0,
     0x1.7a760d58f48fbp-102, 0.0, 0x1.06ed79d583c1p-396, 0.0, 0.0,
     0x1.d4aa80e97facap-837, 0.0, 0.0, 0x1.8d003c50a54bcp-694, 0x1.ebe657dc7e78fp-869,
     0.0, 0.0, 0.0, 0.0, 0x1.9de5b10fc0896p-927, 0.0, 0.0, 0x1.45a8d9fb5a9eap-165,
     0x1.94e904355f425p-229, 0.0, 0x1.52556ed2deec7p-192, 0.0, 0.0,
     0x1.a0c291aca372ep-38, 0.0, 0.0, 0x1.6858b3cf4899ep-655, 0x1.8564196359d8ap-135,
     0.0, 0.0, 0.0, 0x1.82b66108cca86p-494, 0.0, 0x1.60a359c0adecfp-528,
     0x1.09f55bca371fap-949, 0x1.909b5d173da85p-223, 0x1.4434f180c1259p-167, 0.0,
     0x1.ab841d1262766p-804, 0.0, 0.0, 0.0, 0x1.cd49bb99cc2fep-694,
     0x1.deaec2af661e2p-47, 0.0, 0x1.4dcd41412fecbp-808, 0.0, 0x1.7c715029dba3p-342,
     0.0, 0.0, 0x1.009474684092p-445, 0.0, 0x1.832642211f254p-77,
     0x1.ba8357ac50e37p-107, 0x1.b39aa850e41ddp-278, 0x1.b4a70dde26aadp-392,
     0x1.8efd3e0297068p-614, 0.0, 0x1.1e52304e9c991p-423, 0x1.5caf721dfcaa8p-44, 0.0,
     0x1.2d40522ad7f3fp-933, 0.0, 0x1.b5f3645dd1adfp-805, 0.0, 0x1.c4b1e39e216e9p-978,
     0.0, 0.0, 0.0, 0x1.534118f8ba41fp-225, 0.0, 0.0, 0.0, 0x1.ce51e3ae8f73p-973, 0.0,
     0x1.8f60e67aae914p-80, 0.0, 0.0, 0.0, 0x1.cab6892d52f23p-73, 0.0,
     0x1.6263fb4f8f0e7p-361, 0x1.6758d354ae14p-670, 0x1.b39fb2524286fp-764,
     0x1.d51920d99b39ep-286, 0.0, 0.0, 0x1.410c2e695d908p-11, 0.0, 0.0, 0.0,
     0x1.40a9718d2d64p-71, 0.0, 0.0, 0x1.a04a0c67c9a0dp-956, 0x1.47b5d38347ad1p-966,
     0x1.0ca6f5ec4e8dfp-440, 0x1.e89b03b023769p-315, 0.0, 0x1.92bc2ee87f875p-95,
     0x1.27609d40ea604p-913, 0.0, 0x1.94a3db935bbbcp-202, 0.0, 0.0,
     0x1.dd74e1b094fdbp-845, 0x1.a241acaebac3fp-999, 0x1.274b24527b855p-700,
     0x1.663e876cbe21bp-820, 0x1.7f57d2806918ep-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b302854d1d1bp-929, 0.0, 0.0, 0.0, 0.0, 0x1.690b8251da4dep-125,
     0x1.17da981b997b8p-437, 0x1.398dec2d117aep-642, 0.0, 0x1.8d458b1b67abap-695, 0.0,
     0.0, 0x1.d10ea8701ffd8p-648, 0x1.d37fc6d7ee56cp-495, 0.0, 0.0, 0.0,
     0x1.f429978477f0bp-79, 0x1.269649014c8c3p-704, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79aab2f949974p-555, 0x1.7b52156f88b4cp-502, 0x1.5df6bb4cdb3c5p-484,
     0x1.3e50639513c34p-383, 0.0, 0.0, 0x1.96b470ec3f977p-23, 0x1.13c66e771e6bp-629,
     0x1.1af3339ea342ap-985, 0.0, 0x1.427b0f4a29ddep-628, 0x1.f26cee98865edp-65,
     0x1.259acd88d6bafp-293, 0x1.1f26ef318d502p-325, 0.0, 0x1.9da3a41421cep-439,
     0x1.aaae35b15830bp-752, 0x1.3ea14032826c7p-788, 0.0, 0.0, 0x1.71f908506231cp-263,
     0x1.0e9107e45a0aap-403, 0x1.98413cdc142fap-588, 0.0, 0.0, 0.0, 0.0,
     0x1.85515a523b6a7p-1005, 0x1.f1687f8ab17c8p-1014, 0.0, 0.0, 0.0,
     0x1.c0650d3fb3fe3p-1001, 0.0, 0x1.e6d67162a1795p-90, 0.0, 0x1.e929f0ab88262p-488,
     0.0, 0.0, 0.0, 0.0, 0x1.4e772b93189a7p-701, 0.0, 0.0, 0.0, 0.0,
     0x1.7030d83d96d6fp-756, 0.0, 0x1.f44fe71a80c79p-454, 0x1.d4981821f4596p-726, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.270f48ec8f533p-248, 0x1.49e8490ceec03p-437,
     0x1.ffb030685873p-62, 0x1.49125e50d5449p-611, 0x1.4db1e35d6fa87p-152, 0.0, 0.0,
     0.0, 0x1.0fde21df44c67p-302, 0x1.2bc8d59871c2ap-502, 0.0, 0x1.174b711d33d7p-21,
     0.0, 0.0, 0x1.e318ea62f7875p-484, 0x1.73b2d1e009ad8p-793, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.25f0b1e71ae98p-376, 0x1.ecfa16faa615dp-300, 0x1.b94dd2a1a540ep-155,
     0.0, 0x1.638bf72d8732fp-529, 0.0, 0x1.4340bafdbb33fp-445, 0.0, 0.0,
     0x1.21d090c872504p-347, 0x1.56a78e9b4d54bp-887, 0.0, 0.0, 0x1.19a43d9671bfp-54,
     0x1.189c7579540f6p-479, 0x1.415dac36be022p-964, 0.0, 0.0, 0.0, 0.0,
     0x1.54713cf51762ap-778, 0.0, 0.0, 0x1.15399ed2e697ep-46, 0.0,
     0x1.2da75b5ba88f6p-709, 0x1.e036b15296bf9p-294, 0x1.7900335c13368p-606,
     0x1.5d7bd5a5d6a1ep-82, 0x1.0bb51f245061cp-84, 0x1.9269bfbc19773p-781, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.deb056ce773fap-827, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.835f2d571a104p-208, 0.0, 0.0, 0x1.967265628d31cp-31, 0.0, 0.0,
     0x1.6ffb09f2f728dp-360, 0.0, 0.0, 0x1.47d8b9e5115ccp-887, 0.0,
     0x1.609c4cddaf716p-766, 0.0, 0.0, 0x1.51610030837cep-427, 0.0,
     0x1.64b45e3d527edp-422, 0x1.4af8f812336ccp-511, 0.0, 0x1.799001a0616fdp-134,
     0x1.d3200fbc62234p-8, 0x1.f263d12bb5692p-484, 0.0, 0.0, 0x1.124253caa6dbfp-262,
     0.0, 0.0, 0x1.403e1a381ca8ep-1017, 0.0, 0.0, 0x1.f17db105f29e1p-896,
     0x1.04737352c32f4p-376, 0x1.a22ae83117e52p-459, 0.0, 0x1.ab55decb56ea5p-763, 0.0,
     0.0, 0.0, 0x1.2a5272acb215fp-343, 0x1.de535f912fb01p-644, 0.0,
     0x1.63c2f3f469d8cp-643, 0.0, 0x1.7fa2100cb8e72p-898, 0.0, 0.0, 0.0, 0.0,
     0x1.a3e42d406853bp-520, 0x1.d9d78ce29542p-452, 0.0, 0x1.b36bb242a00fdp-959, 0.0,
     0x1.321b6ecb31b96p-17, 0.0, 0.0, 0x1.46dab2e4df0ep-838, 0x1.ceac5f9076dfap-147,
     0.0, 0.0, 0x1.afe7ed57b961ap-170, 0.0, 0x1.f246c12aeaf0ap-1018,
     0x1.54c198df6ce7cp-808, 0x1.fb881fd581b6ap-722, 0.0, 0.0, 0x1.5e4091beeaeabp-140,
     0x1.cdabce6262381p-588, 0.0, 0.0, 0x1.281e17b36a82cp-184, 0x1.1ccb926058eb7p-313,
     0x1.38670cc263fd2p-911, 0x1.00d4abd74140ap-705, 0x1.bc3fea2d21ccbp-885,
     0x1.a2935f274c3b6p-294, 0x1.2eb550ae45c23p-537, 0x1.5ab2cbb2aa376p-567,
     0x1.3e09877b7abdap-547, 0.0, 0x1.c22b11198d419p-708, 0.0,
     0x1.75e83b18c36f2p-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86543250736d4p-464, 0.0,
     0x1.d0118d5f4cffp-46, 0x1.fa957b03eaa6fp-18, 0x1.16c47f0306ed5p-611, 0.0, 0.0,
     0x1.0e247d443c567p-425, 0.0, 0x1.35c7daa0eaa49p-837, 0x1.171282202dee6p-64, 0.0,
     0.0, 0.0, 0.0, 0x1.57fefe5127c5ep-925, 0.0, 0.0, 0.0, 0x1.9f2a99bee7de6p-96,
     0x1.42935d9c1e51cp-585, 0x1.cc386e73d42ccp-997, 0.0, 0x1.8c0af2af845p-918, 0.0,
     0.0, 0.0, 0.0, 0x1.4b0cb45a97862p-217, 0x1.e58fcb8189be9p-155,
     0x1.55d6dc981e54fp-700, 0.0, 0x1.7c2f2f704b322p-71, 0.0, 0x1.7d29999025344p-745,
     0x1.b09afd6b66916p-250, 0.0, 0.0, 0x1.3af960cda4708p-249, 0x1.5c944aa8e1fb1p-961,
     0x1.0ae53e91527fep-203, 0.0, 0x1.2932dca6bbdbfp-572, 0x1.6232c2e5d45fp-890,
     0x1.6a7fef2d6cf61p-538, 0x1.643e1511f00ffp-102, 0.0, 0x1.3c191ae850d76p-391,
     0x1.1554d1892f699p-93, 0x1.21a99ee85392cp-30, 0.0, 0x1.16d696a83d43p-778, 0.0,
     0.0, 0.0, 0x1.532c7b218db6bp-396, 0.0, 0x1.2c5de5513c484p-846,
     0x1.db5350e47ab8ap-898, 0x1.fab5de3d43095p-289, 0x1.8b3ea39972d08p-391,
     0x1.4482e5a01a08fp-928, 0x1.c725718432634p-161, 0x1.c7749dab25684p-189, 0.0, 0.0,
     0.0, 0.0, 0x1.bce6a3403a493p-301, 0x1.9ea65c9073364p-932, 0x1.991990be74ffbp-830,
     0x1.fd468f7af1118p-227, 0.0, 0.0, 0x1.1bdbd9edf2cebp-303, 0x1.6183e1387970ap-263,
     0.0, 0.0, 0.0, 0.0, 0x1.1a0e0a13495e7p-802, 0.0, 0x1.db25a11f3529fp-144,
     0x1.54d71b8e23cf5p-4, 0x1.7f6500a2a7ce7p-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a1d41fb2a635p-18, 0.0, 0.0, 0.0, 0.0, 0x1.84170e085a2f4p-854, 0.0,
     0x1.63ee28811a8c4p-359, 0x1.8ccd9425be13ap-652, 0x1.b743a24b2f87ep-11, 0.0,
     0x1.bb85eaa809185p-721, 0.0, 0x1.6ffa93623df4p-172, 0x1.403cf021673f3p-239, 0.0,
     0x1.d28c136e158cdp-50, 0.0, 0.0, 0x1.eeb86d1d91d25p-656, 0.0,
     0x1.152b3a42e016fp-638, 0x1.4413f108bccc1p-857, 0x1.4e098fbe129dfp-538, 0.0, 0.0,
     0.0, 0x1.b7d75ca308eafp-630, 0x1.3d374bcf396a3p-392, 0.0, 0x1.ddaf8a5d5aec6p-566,
     0.0, 0x1.f8eb7e3face81p-91, 0x1.5e40e31a5997cp-23, 0.0, 0.0, 0.0,
     0x1.9cc91037ef195p-749, 0.0, 0x1.59a0ca5dc1fa3p-57, 0.0, 0x1.38613a1f7c0ccp-713,
     0.0, 0x1.115dbb287b03fp-760, 0x1.a3b00fef358b2p-650, 0x1.458935f3999cbp-488,
     0x1.3d579ca024babp-697, 0x1.39adb713c4d54p-851, 0x1.d551271489eecp-908,
     0x1.65c1250a67177p-675, 0x1.b7922633ce8acp-506, 0x1.665725b920bcfp-63,
     0x1.cc177d8584c5ep-970, 0x1.723e6c287f9fcp-49, 0.0, 0x1.5c24f91bc4139p-320, 0.0,
     0.0, 0x1.a24f790282fcap-517
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
            tmp1 = Sleef_finz_coshd2_u35kvx(tmp0);
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
    printf("Sleef_finz_coshd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_coshd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
