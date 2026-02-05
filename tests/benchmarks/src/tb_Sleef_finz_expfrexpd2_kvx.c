/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expfrexpd2_kvx.c --function \
 *     Sleef_finz_expfrexpd2_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --vector-size 2 --function-input-vector-size \
 *     2 --precision int32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.03051ea1181e8p-462, 0.0, 0.0, 0x1.84dbe19123d3dp-273,
     0x1.fd95cfc995617p-221, 0x1.9c3869a16f3e7p-174, 0x1.7e15a9818ec4ep-623,
     0x1.6abb404be00c2p-956, 0x1.d67fa9fd34fc6p-716, 0x1.52d301cab5ed5p-971,
     0x1.0d5928354a7dbp-694, 0.0, 0.0, 0x1.f384799e63818p-94, 0x1.83f3bd32db9aap-605,
     0.0, 0.0, 0.0, 0.0, 0x1.ad50f6245169dp-699, 0x1.6674015b02bb9p-520,
     0x1.e76097c432127p-147, 0.0, 0x1.f6031cd2c3761p-238, 0x1.82e9c9718249bp-1010,
     0.0, 0.0, 0.0, 0x1.d50838b742611p-20, 0x1.687ef941e652ep-629,
     0x1.fb4e6e3a837a7p-280, 0.0, 0x1.99d9ffabe53f7p-101, 0.0, 0.0, 0.0,
     0x1.96e4c91514932p-369, 0x1.4277597e40502p-640, 0.0, 0x1.2f253a7a6e656p-577, 0.0,
     0x1.3597278f08805p-60, 0.0, 0x1.6a01a8aac5ea2p-181, 0.0, 0.0,
     0x1.55ecb04f701acp-172, 0x1.ef71cab57f416p-510, 0x1.b56fd1610a8efp-263, 0.0,
     0x1.a39edc6e71919p-675, 0.0, 0.0, 0.0, 0x1.5b10c438642fep-842,
     0x1.3552a9d1840d3p-949, 0x1.e7d77739e4405p-271, 0.0, 0x1.1ec9e7a76cfaep-797,
     0x1.6a75f695761efp-444, 0.0, 0x1.201c26728cb58p-153, 0.0, 0.0, 0.0,
     0x1.0ee8942d00f1cp-323, 0.0, 0.0, 0.0, 0.0, 0x1.2b2d394882242p-281,
     0x1.4bf953a0e535cp-153, 0x1.90faeb3b6010ep-621, 0x1.204da3f991344p-53, 0.0,
     0x1.4885352ce4463p-963, 0.0, 0x1.3147c33f1cb57p-799, 0x1.ce936f427aac9p-464,
     0x1.6a3d8f860bbf5p-579, 0x1.b8fc3dbbe693cp-337, 0x1.c6ff5e3e7ff75p-96,
     0x1.75c17a1d47dfap-74, 0x1.4a5525c084dabp-709, 0.0, 0.0, 0.0,
     0x1.74f8a460ab4dp-352, 0.0, 0x1.90f1ecda509b2p-485, 0x1.fdf0cc39a0a9fp-633, 0.0,
     0.0, 0x1.b3ea54341cc8p-864, 0.0, 0x1.674972c219c3dp-993, 0x1.5f4ba73dde4fdp-248,
     0x1.de9594114cb82p-589, 0x1.b29fded81465fp-298, 0.0, 0x1.435bcf276aaefp-38,
     0x1.676de7033ff9p-338, 0x1.cb070c453a8c3p-151, 0.0, 0.0, 0x1.a696419478db1p-621,
     0x1.edbdf7cd97cfcp-915, 0x1.bd94291e336c8p-767, 0x1.e1dbb863e3ce5p-272,
     0x1.1526d7874f281p-188, 0x1.0deaf57b37cfap-210, 0x1.320c31233d8f4p-548, 0.0, 0.0,
     0.0, 0x1.6aca1dd0b0ab2p-451, 0x1.8c8dd375ba50ap-734, 0x1.8fb0e9b5ea2cp-163, 0.0,
     0x1.9247a8813d871p-106, 0.0, 0.0, 0x1.848449ae72d5cp-176, 0.0,
     0x1.b8d1ab591f929p-188, 0.0, 0x1.b0dd880098e6ap-47, 0x1.b251ca34063f4p-385, 0.0,
     0x1.08216352e342dp-87, 0.0, 0x1.0a9b5b28b606ep-946, 0.0, 0.0,
     0x1.c353fc4df57b2p-285, 0.0, 0.0, 0.0, 0.0, 0x1.c450a9dd1c63dp-302,
     0x1.caecf78c42d09p-572, 0.0, 0x1.cb93d36e9de66p-56, 0x1.83a26bd383259p-620, 0.0,
     0.0, 0x1.8f28cafaba227p-22, 0x1.3957e8f6c9ca7p-482, 0x1.722df2c2e2698p-392, 0.0,
     0.0, 0x1.63f9c53c2592fp-957, 0x1.a885a014ca95dp-65, 0x1.040745bf46ab1p-449, 0.0,
     0x1.06e486a4147d7p-520, 0x1.e6dc52b2e95bfp-817, 0x1.657ef25dd239p-38,
     0x1.627bc84ae56e7p-328, 0x1.11405e29ad5d4p-397, 0.0, 0.0, 0.0,
     0x1.d99023eeb85e3p-656, 0x1.833ec19c66bf7p-378, 0x1.f38cbfcf10526p-166, 0.0,
     0x1.40762ac8ea6f1p-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3061364826e7p-78, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e81b21d5c21c7p-465, 0x1.4403e5ddc017p-520, 0.0,
     0x1.8f0d724c842e5p-742, 0x1.1796e06f8ba62p-803, 0.0, 0x1.4d94394d46758p-285,
     0x1.aaec815bd8effp-848, 0x1.85a63b0fe170bp-218, 0x1.b45e5787c0b66p-592, 0.0,
     0x1.0b4b3f606ca97p-81, 0.0, 0.0, 0.0, 0x1.eaf0fdfe8f8f8p-392,
     0x1.e341e170bcc23p-458, 0.0, 0.0, 0x1.1446ac4a96f24p-967, 0x1.949243d741e79p-181,
     0.0, 0x1.14c07c9735c9cp-172, 0x1.72d0b3ec49ff4p-401, 0.0, 0.0,
     0x1.03b1662813f5fp-64, 0.0, 0.0, 0.0, 0x1.949f550a2e6a7p-160,
     0x1.cb0fd1ea7d012p-177, 0.0, 0.0, 0x1.fad92f0ff9bb7p-509, 0x1.f6f935c959d65p-507,
     0.0, 0x1.41bc49b901805p-126, 0x1.7fec241533ddcp-209, 0x1.3c307ec6f0e29p-593, 0.0,
     0.0, 0x1.6fb391a438fc9p-848, 0x1.4677b48983e32p-518, 0x1.1472edc91b451p-552, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.41a4e06d5bc2fp-463, 0.0, 0.0, 0x1.0bef877f414b4p-529,
     0.0, 0.0, 0.0, 0x1.b37fe583a8e46p-54, 0.0, 0.0, 0.0, 0.0, 0x1.ef96a8d95f6fdp-391,
     0x1.91ecedded78c3p-232, 0x1.e624713110c83p-812, 0.0, 0.0, 0x1.aeab75a3449bp-542,
     0x1.a4804000b4b42p-506, 0.0, 0.0, 0.0, 0.0, 0x1.a5eab882f1fecp-986, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.82c99f5478213p-870, 0.0, 0.0, 0.0,
     0x1.3099740b2256dp-261, 0.0, 0.0, 0.0, 0x1.d6057813187bdp-660,
     0x1.2d693307ab0c2p-614, 0x1.354f26059b12p-176, 0.0, 0x1.9d6f053aa0e46p-237,
     0x1.be9938f4cb3cfp-382, 0.0, 0.0, 0x1.a6a0d98deb28cp-284, 0x1p0,
     0x1.49f39d934f41fp-262, 0.0, 0x1.b4bcccab9fe87p-624, 0.0, 0.0,
     0x1.d26f2eda3f948p-662, 0x1.830ac76afff36p-777, 0.0, 0x1.e65ad039fa207p-177,
     0x1.da317963fdabbp-348, 0.0, 0x1.05b9a260ff08ap-615, 0x1.df2df6a2c4869p-261,
     0x1.0f4da525c28fcp-49, 0x1.3c6b44960cba5p-328, 0x1.905df4bb6c775p-874, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.65ae051671765p-557, 0.0, 0.0, 0.0, 0.0,
     0x1.1e8bbfbcbc897p-624, 0x1.6185c3bf33a7ap-384, 0x1.72c736073a752p-659,
     0x1.d44aab742b3ecp-234, 0x1.1bcbeb19f8b17p-751, 0x1.721cb38ec0e6bp-944,
     0x1.f6d432c37f69fp-20, 0.0, 0x1.2d94c955d5792p-38, 0x1.f9799ae5db617p-144, 0.0,
     0x1.af93292f47f5ap-197, 0x1.b86f0b1c556b9p-394, 0.0, 0.0, 0x1.dc3dd2c6ae93cp-914,
     0.0, 0.0, 0x1.f35a4b394b7b5p-1002, 0.0, 0x1.06766e0f04c4ap-414, 0.0, 0.0, 0.0,
     0.0, 0x1.c10da8798df96p-732, 0x1.3c2fa705936fbp-691, 0.0, 0.0,
     0x1.e0f635f5dba0cp-676, 0x1.afd7d424291bcp-97, 0.0, 0.0, 0x1.dc6a010d683b5p-417,
     0.0, 0x1.a5b9c8fcf995dp-243, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf887e89345d9p-797, 0.0, 0x1.d21d13fe08297p-84, 0.0, 0x1.be94934a5c2c3p-434,
     0x1.b93efd6922b4ep-27, 0.0, 0x1.5f8f1adec5b22p-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72170ecb541ccp-214, 0x1.6eac15cde8f96p-551, 0x1.a0ef3159cdd15p-672,
     0x1.d5b5acf5630d6p-529, 0.0, 0x1.f92f181c0dfb1p-142, 0.0, 0x1.03254334344bp-242,
     0.0, 0x1.1bc2031cf829dp-270, 0.0, 0x1.8ce8b5e8c9697p-201, 0.0, 0.0,
     0x1.faa55c892f9ddp-424, 0.0, 0.0, 0x1.07a9b223c8e92p-272, 0x1.10dbdbe8daddap-466,
     0x1.7e036d43b4458p-784, 0.0, 0.0, 0.0, 0x1.a6377adf95e99p-474,
     0x1.ad6f265ec0be4p-96, 0.0, 0.0, 0.0, 0.0, 0x1.5bef9c0e3e049p-551,
     0x1.c6f9c5cd8f7c7p-617, 0.0, 0x1.f64ea5bb94627p-247, 0x1.2a60eddd40dd8p-283,
     0x1.8cf042de5b2b5p-759, 0x1.1f558bce7a1b7p-849, 0.0, 0.0, 0.0, 0.0,
     0x1.950372e66ad64p-872, 0x1.8390313049bcfp-758, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2325a822cd82fp-1020, 0x1.c550c769e1473p-330, 0.0, 0.0,
     0x1.a1e1f4c6764c3p-601, 0x1.0843a96ae653ep-562, 0.0, 0x1.f9a8feaf9c85dp-1006,
     0x1.22dae91fa70edp-79, 0x1.be79ec6fbc453p-73, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ceb1f02d7f9fbp-85, 0x1.25c694890533dp-201, 0.0, 0.0, 0x1.1303e397322bp-301,
     0.0, 0x1.7d2cdd545652fp-1007, 0x1.aa441277d432dp-128, 0.0, 0.0, 0.0,
     0x1.bf61489160582p-411, 0.0, 0x1.5ca7c19510b56p-478, 0x1.f1fed0446fe53p-143,
     0x1.5910edb213166p-902, 0.0, 0x1.28aa2252c5055p-401, 0x1.5a41e9c7c8d71p-1012,
     0.0, 0.0, 0.0, 0x1.6f4b136bf78a9p-741, 0x1.d5a87d88d75c1p-692,
     0x1.f26ce4b0cffcap-739, 0x1.f4c1eca977765p-746, 0x1.5e756b2c0a598p-351,
     0x1.60f12e0f77158p-547, 0x1.00577d327d508p-874, 0x1.406b796840c78p-840, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.488628c028336p-842, 0x1.fca987fcb0fap-224,
     0x1.16e5a24b1a9aap-189, 0x1.47f1bbdec126p-939, 0.0, 0x1.dd19e87fce99fp-452, 0.0,
     0x1.5044e0da3579bp-342, 0x1.2d0b9656367abp-609, 0x1.3f3873776ab2bp-253,
     0x1.466ffec48e485p-596, 0.0, 0.0, 0.0, 0x1.1863fddbd9d8ep-925, 0.0,
     0x1.1775d5b24a4b4p-389, 0.0, 0x1.c0da9cc780e7fp-374, 0x1.c7573d5c8bba9p-385, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ac56c5ca0d3p-672,
     0x1.ae2e120877153p-527, 0.0, 0x1.41bdcd8de694ap-878, 0x1.95b27ba7cef94p-687, 0.0,
     0.0, 0x1.6ca5adc41b638p-274, 0.0, 0x1.d5e12edf9cbc2p-164, 0x1.1cf36f02e498ap-398,
     0x1.fa30ace96b5cdp-741, 0.0, 0x1.81a74cbafbf8ap-109, 0.0, 0.0,
     0x1.f078251b5d4cfp-770, 0x1.40f11212f665ap-843, 0.0, 0x1.e7b99eeb6f77dp-195, 0.0,
     0x1.9e3ca537ffca5p-1005, 0.0, 0.0, 0x1.51307d934ec52p-578, 0.0, 0.0, 0.0, 0.0,
     0x1.e2e96ec8c0f5fp-7, 0.0, 0.0, 0x1.1d30c7b912e3ep-418, 0.0,
     0x1.83efeb1d51653p-807, 0x1.721f4c5bae973p-532, 0.0, 0.0, 0.0,
     0x1.f44fd164e9adbp-44, 0x1.2099c150799f6p-791, 0.0, 0.0, 0.0, 0.0,
     0x1.9c0d4edf67e2fp-447, 0.0, 0.0, 0x1.1b1ad55ec4701p-97, 0x1.cd4a09b886257p-211,
     0x1.f66f1489b05abp-447, 0x1.7736a537979acp-1017, 0x1.c95d6cdd13dap-698,
     0x1.3e405ca68785dp-155, 0x1.80399952ec774p-616, 0x1.ea388cbf5285cp-740,
     0x1.8640ee315ffd4p-534, 0.0, 0x1.8bfb2ded26995p-32, 0x1.bd211e4f27a99p-545,
     0x1.dcd95377d2a85p-620, 0x1.d3977d429029cp-875, 0x1.e1bc4129bb567p-15, 0.0, 0.0,
     0.0, 0x1.2d9d5c7ac14a9p-416, 0.0, 0x1.a2e37c411f57dp-970, 0x1.006f20d2f97c2p-478,
     0.0, 0.0, 0x1.e644920879cd9p-399, 0.0, 0.0, 0x1.9ffe085ca490fp-979,
     0x1.f34647892b186p-692, 0.0, 0x1.08a543257de17p-780, 0x1.47835f0cadb08p-588, 0.0,
     0.0, 0x1.356422fa4df67p-326, 0x1.c224680735abfp-911, 0.0, 0x1.fd70d2e446dcap-154,
     0x1.0c05d062bbb94p-437, 0x1.42e82a2f02cb9p-450, 0.0, 0x1.c6313f6ffe519p-569, 0.0,
     0x1.23c2fd7bfc9a6p-965, 0x1.2b233bdb7593p-45, 0x1.0e7360d2c8536p-433,
     0x1.0d57c5ffb23a8p-672, 0x1.9b464ae1ebfa5p-904, 0.0, 0x1.57d451ca16fddp-653,
     0x1.63bcbc9885b86p-634, 0x1.66a74f099efc1p-976, 0.0, 0.0, 0x1.8307e5df1c90dp-954,
     0x1.3ab6c797494cfp-478, 0.0, 0.0, 0x1.5d5c50596f567p-167, 0x1.33caa900d7ca8p-630,
     0x1.edb3b6b0743d7p-889, 0.0, 0x1.4cf7bd1d7010bp-557, 0x1.4c42bb09cfc14p-810,
     0x1.6327e757a31b3p-114, 0x1.82a6ff47a0c8dp-57, 0.0, 0.0, 0x1.0cb17161ce815p-568,
     0.0, 0.0, 0x1.52a6e5e8c0509p-47, 0.0, 0x1.9340135ebc7d6p-524,
     0x1.2a9efc489e9cap-658, 0x1.34a113760f70bp-866, 0x1.6ed84c1a3c562p-359,
     0x1.84b4e2d12f91fp-496, 0x1.812c48a76ad0ap-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d002070b70f7p-995, 0.0, 0x1.49f1de6022e8ap-766, 0x1.3223144b150b3p-116,
     0.0, 0.0, 0x1.bd2aac577765cp-757, 0.0, 0x1.43af6e996ac54p-624,
     0x1.4849be643e437p-506, 0.0, 0x1.2a38c9e5ff037p-352, 0x1.9de250e49524ap-1016,
     0x1.68c0debac4b19p-695, 0.0, 0x1.e0cabebf164cfp-232, 0x1.195719c1158bp-268, 0.0,
     0.0, 0x1.1d6c188c8a37ap-780, 0x1.6eaf33ab68815p-336, 0x1.a0bf810a61facp-495,
     0x1.ecae5f4496407p-711, 0.0, 0x1.49690d12f88fep-490, 0.0, 0x1.781472ed2c9afp-973,
     0.0, 0.0, 0x1.47bbf9968a294p-328, 0.0, 0.0, 0x1.3e6178eacaef5p-276, 0.0,
     0x1.c2c2ca50a2059p-769, 0x1.ceb5e9a5b24d9p-11, 0x1.0b40126e6e2aap-91, 0.0,
     0x1.e68d4d57a698ap-591, 0.0, 0.0, 0x1.e1873ede92229p-404, 0x1.9f91857e31806p-52,
     0.0, 0x1.a9a783f2fbda6p-605, 0x1.813c844a41af8p-242, 0x1.3594bb251d612p-735, 0.0,
     0.0, 0x1.6eb24bbab3ba9p-193, 0x1.7d42001fdc32ap-160, 0x1.d2dcc0e511318p-643,
     0x1.5fdb2e3f6108dp-280, 0x1.621b58fcb2819p-926, 0.0, 0x1.a156e22dcf8dcp-674, 0.0,
     0.0, 0x1.1e7fa4698f599p-237, 0x1.7af81f949299bp-656, 0x1.609838827898ap-402, 0.0,
     0x1.65071af06a7a3p-1001, 0x1.ddf677d785085p-882, 0.0, 0x1.95d56375d6471p-327,
     0.0, 0.0, 0.0, 0x1.d3b3b45720907p-182, 0x1.42cc6bc5bc605p-522,
     0x1.2b4485064848bp-152, 0x1.ee634ca1bcb57p-928, 0.0, 0.0, 0x1.8e5ccff82c921p-278,
     0x1.bb0e3de4c37abp-198, 0x1.9e780641afa81p-280, 0x1.107c62e5db617p-943,
     0x1.7f2a28bbd985cp-689, 0x1.8586a1de79468p-995, 0.0, 0.0, 0.0,
     0x1.c2a80bbc8d454p-455, 0x1.346ea61dc4d3cp-810, 0.0, 0.0, 0x1.00a1f7b9207fep-97,
     0.0, 0x1.da1ed1b5e2b4bp-306, 0.0, 0.0, 0x1.4a380e6cd3a26p-508, 0.0,
     0x1.cd053dbdd337fp-458, 0.0, 0x1.27a5993669955p-530, 0.0, 0.0,
     0x1.f16b722b6a3cp-636, 0x1.a368f42381466p-628, 0.0, 0.0, 0x1.d947cafa2381cp-323,
     0x1.aa8eea43cf231p-280, 0.0, 0.0, 0.0, 0.0, 0x1.bd46ddd592bc7p-859, 0.0, 0.0,
     0x1.4f344641071f8p-355, 0x1.2191fa50f14c6p-869, 0x1.6615ab706887ep-731, 0.0,
     0x1.b5ae6014ddf9ep-489, 0.0, 0.0, 0.0, 0.0, 0x1.d9acd029c9b1fp-60, 0.0,
     0x1.d31ea9e982a5dp-964, 0x1.39709b82610d9p-248, 0x1.989618efd6ff2p-316,
     0x1.3b061d6e54a96p-735, 0x1.54c1406572ed3p-107, 0x1.db70fee33647bp-584, 0.0, 0.0,
     0.0, 0x1.10ccf8979cc42p-855, 0x1.28522e3bac0d2p-700, 0x1.9a51d85344eep-799, 0.0,
     0x1.425d8aa66f791p-626, 0x1.2e3a08796bdf4p-788, 0x1.f95ed7235fa39p-716,
     0x1.2020529fcadb3p-559, 0x1.14da912efd2f1p-338, 0.0, 0x1.6aca0eb307633p-1010,
     0.0, 0.0, 0.0, 0.0, 0x1.be9602f1ba9dcp-40, 0.0, 0x1.88ef8707967d5p-689, 0.0, 0.0,
     0x1.ad4744430bd22p-296, 0.0, 0x1.e4c355b41585p-1018, 0.0, 0.0,
     0x1.97b0c617bda58p-349, 0x1.5f2677859849cp-846, 0.0, 0x1.7bc04bea68e0ep-139,
     0x1.92b0b354ca62ep-552, 0.0, 0x1.b967654ae42f8p-143, 0.0, 0.0,
     0x1.1d101329e139p-56, 0x1.9840e063b5d7cp-92, 0.0, 0x1.7eee9372aff38p-63, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf158e82b834bp-398, 0.0, 0.0, 0.0, 0.0,
     0x1.97d41441d009ap-268, 0.0, 0.0, 0x1.8398ffeb6c688p-625, 0x1.b02f3df292385p-962,
     0.0, 0x1.0371a37533422p-993, 0x1.8b9c0ce82bce2p-73, 0x1.b5545dbc3e91fp-510, 0.0,
     0x1.6dc1f81df075cp-353, 0x1.636dff1c98324p-692, 0.0, 0x1.982de71c4ac1fp-537, 0.0,
     0x1.3002662010e6ap-502, 0x1.bcaf22c8f4d45p-661, 0.0, 0.0, 0x1.6f78622c64d6ap-402,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.281a923a1933cp-855, 0x1.188a7f7cb45dap-703,
     0x1.3140ec097e1bbp-901, 0.0, 0x1.95ed61702c804p-840, 0.0, 0x1.236a96b4f71p-224,
     0x1.8e67b5a5b4a01p-781, 0x1.0f5265f64da0bp-108, 0x1.5383b195e9cfbp-994, 0.0,
     0x1.72566b08d4aa2p-954, 0x1.8d2910e86a4a3p-255, 0x1.016d793f5a17dp-949,
     0x1.38d75bf9b3865p-475, 0.0, 0x1.ee8ac5f9e317fp-79, 0.0, 0.0,
     0x1.b956d11b13003p-747, 0.0, 0.0, 0.0, 0x1.a167323127a64p-376,
     0x1.fe5fab5f0110ep-255, 0.0, 0.0, 0.0, 0x1.7d415b8a8c831p-499, 0.0,
     0x1.f8065109137a2p-546, 0.0, 0.0, 0.0, 0x1.540deced94fb2p-547, 0.0, 0.0,
     0x1.b2513574edc21p-622, 0x1.c7ca8687233b1p-50, 0x1.a76b4b9c72d61p-88,
     0x1.a92919eb199p-685, 0x1.37c39e2c27ce1p-477, 0.0, 0x1.4194d0cb8ebe6p-893, 0.0,
     0.0, 0x1.ffffe32b2d8ecp-186, 0x1.09fa19bf3289ap-329, 0.0, 0.0, 0.0,
     0x1.3219c0e654d02p-890, 0x1.bfd1296f399d6p-160, 0.0, 0.0, 0.0,
     0x1.bebe04a8cab23p-975, 0x1.6658d833bd1cbp-746, 0.0, 0.0, 0x1.ad537df8fdc43p-989,
     0.0, 0x1.670dac84556f6p-982, 0x1.1047e08d6a3bbp-20, 0x1.413a00c433f56p-475,
     0x1.4f7d4fb00ac62p-915, 0.0, 0.0, 0.0, 0x1.1a77bfe1506e9p-750,
     0x1.d37d48962c152p-13, 0.0, 0.0, 0x1.d31fb6a8adde3p-315, 0.0,
     0x1.b7da56087a0e6p-180, 0x1.80f9d9133275ep-100, 0.0, 0x1.de245ef9c5de8p-359, 0.0,
     0x1.43409b13740f3p-287, 0.0, 0x1.caf44a3eff958p-932, 0.0, 0x1.7cc58da571611p-61,
     0.0, 0.0, 0.0, 0x1.a2917a5103e58p-194, 0.0, 0x1.ae10bea8c06ebp-814,
     0x1.b5a2c4c6d083p-651, 0.0, 0x1.42d168978b716p-720, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.db21e055b6d2ep-323, 0x1.e81de0487e195p-404, 0.0, 0.0,
     0x1.8218353bba827p-746, 0.0, 0.0, 0.0, 0x1.19f35a851e3ebp-315, 0.0, 0.0, 0.0,
     0x1.0fdc6c2a0b19ep-588, 0.0, 0.0, 0x1.e4c41b16e8dfdp-717, 0x1.a475d393cee21p-922,
     0x1.9ec1028440a36p-917, 0x1.13bfd225a1a1ep-362, 0.0, 0x1.3ceca1ff0e05dp-377,
     0x1.6f0716cbd02b9p-744, 0.0, 0x1.ec8002a6a7eebp-192, 0x1.f120d939f92fap-598,
     0x1.38b000aa9f724p-566, 0x1.4eba581fd3a26p-746, 0.0, 0x1.5badeabc5bf1fp-999, 0.0,
     0.0, 0.0, 0x1.43f6da77e990ep-342, 0x1.e6f0e4cce0b47p-760, 0.0, 0.0,
     0x1.dfc760660e9c1p-918, 0.0, 0x1.d74a35d664b8fp-403, 0x1.99246d8f8f005p-882,
     0x1.9f4ee3b79d6b2p-40, 0.0, 0.0, 0x1.1e8093740cd7cp-234, 0x1.a931e75c017ep-487,
     0x1.55c85f34ad20dp-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cf0dbfaef07f7p-811, 0.0, 0x1.c99bd8bce3ddp-610, 0.0, 0.0,
     0x1.84d21fe811866p-477, 0.0, 0x1.ff730725a39fbp-71, 0.0, 0.0,
     0x1.889a4af0fab86p-360, 0.0, 0x1.28e2ba9d265dfp-581, 0x1.746589beedfdbp-391,
     0x1.fa1583b69f9c7p-766, 0x1.c45b76e5f9e75p-71
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_expfrexpd2_kvx(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_finz_expfrexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expfrexpd2_kvx bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
