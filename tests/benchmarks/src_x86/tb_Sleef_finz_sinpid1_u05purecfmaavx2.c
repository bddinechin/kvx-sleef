/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpid1_u05purecfma.c --function \
 *     Sleef_finz_sinpid1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.7e16161a6e71dp-200, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b88e86abb4c9fp-466,
     0.0, 0.0, 0.0, 0.0, 0x1.5f1736c474cbep-764, 0x1.7cc711029bbe6p-91,
     0x1.48bf54323b1b3p-754, 0.0, 0.0, 0.0, 0x1.4345dbeed3ac4p-434, 0.0,
     0x1.3b46a4d918fc7p-644, 0x1.2173f4acebcdcp-763, 0x1.fc7ee14425d33p-882, 0.0, 0.0,
     0x1.ffaef6be72eefp-493, 0x1.e53693b3f4792p-872, 0.0, 0.0, 0.0,
     0x1.e51afd624f084p-828, 0x1.28e7617a2717bp-847, 0.0, 0x1.c8db6c282e55ap-255, 0.0,
     0.0, 0x1.2c3fd15458bddp-309, 0.0, 0x1.0b54c72ed44c6p-174, 0x1.cd8a0833e63d8p-174,
     0x1.9377c37b9ed09p-784, 0.0, 0.0, 0.0, 0x1.0db596743a941p-844, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7763bc0b97893p-1001, 0.0, 0x1.792987e0500cfp-671,
     0x1.2bde840e887fbp-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13b5cc839b48dp-967,
     0.0, 0.0, 0.0, 0x1.69fcbafa2560bp-119, 0.0, 0x1.f8a8cff16b21bp-35, 0.0,
     0x1.8d16eaecf1437p-120, 0.0, 0.0, 0x1.b23cb04874018p-1006,
     0x1.ef2a814017ab5p-655, 0x1.0a6292f5d4d15p-615, 0x1.1ebc0906e6189p-356,
     0x1.2f9030eaa9362p-387, 0.0, 0x1.cb1fd31abd1dap-799, 0.0, 0.0, 0.0,
     0x1.4e8d862c36c2bp-46, 0.0, 0x1.a1b006d263b37p-1015, 0x1.e3a8fa8d172f4p-451, 0.0,
     0.0, 0.0, 0x1.f0f76dfbe74f2p-745, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f8cb1fd5c1262p-807, 0.0, 0x1.93248e3077a61p-50, 0x1.f9a7487cea30dp-159, 0.0,
     0.0, 0x1.2228556d4f168p-386, 0.0, 0.0, 0.0, 0x1.780d3bff9df7dp-915,
     0x1.727c3897eb421p-614, 0x1.64e6bd75ec10dp-771, 0.0, 0x1.8103bb4934349p-452, 0.0,
     0.0, 0.0, 0x1.b721440fd4f7fp-683, 0x1.668d38c0e6a76p-365, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.234440f4914f9p-407, 0.0, 0.0, 0.0, 0.0, 0x1.8d4db7e4002b9p-162,
     0x1.045ea66a2e06bp-417, 0x1.f627122f55f22p-228, 0x1.80a4cc019e893p-53, 0.0, 0.0,
     0.0, 0x1.22ea5c80f1426p-541, 0x1.066086bb7215ep-542, 0.0, 0x1.0a6c4237f7766p-238,
     0.0, 0x1.e8a025487e767p-694, 0.0, 0.0, 0.0, 0x1.ab107327326b6p-642, 0.0, 0.0,
     0x1.8b86bf62dd434p-151, 0.0, 0x1.50536f2f554ep-315, 0x1.16c88183210d9p-263,
     0x1.8313c353c7139p-846, 0.0, 0.0, 0x1.604e567a29e0ap-430, 0.0, 0.0, 0.0, 0.0,
     0x1.62b93de2a015p-390, 0x1.027e23632f6dep-705, 0x1.be419b81137fp-612, 0.0,
     0x1.565f9552ca4e5p-934, 0x1.52e9eb338a6f8p-374, 0.0, 0x1.99384fed57849p-775,
     0x1.a412d96a8830bp-959, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c4195160c2babp-86,
     0x1.e54f343991bb8p-201, 0x1.ef2ccdaca1eb3p-739, 0.0, 0x1.a91a3b04fb20ep-95, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9e1863ff0ffbp-835, 0.0, 0.0, 0.0,
     0x1.d65fc35ded858p-106, 0.0, 0x1.7b4d9685f6ecp-688, 0x1.df184a459ebd2p-582, 0.0,
     0x1.ce94310aee97p-191, 0.0, 0.0, 0.0, 0x1.eab35d763d5b8p-405,
     0x1.85eeaabfcaa95p-206, 0x1.4355b3e8fb0a7p-334, 0x1.1b458b06bb232p-238,
     0x1.1135947927d64p-725, 0.0, 0x1.aafc269babdbdp-569, 0.0, 0x1.94c0548289617p-207,
     0.0, 0.0, 0x1.37a7b1fec6e75p-951, 0x1.de7e6984526cfp-916, 0.0,
     0x1.e843c921c8c3p-693, 0x1.2dd0e3977516ep-45, 0x1.a75245414e045p-939, 0.0,
     0x1.60909cef03b7cp-891, 0.0, 0x1.9377ac28bccafp-600, 0x1.0bf2ee3acc12dp-118, 0.0,
     0x1.09895ced4ed9cp-925, 0.0, 0.0, 0x1.5b0496889d076p-935, 0.0,
     0x1.633c8fe097542p-131, 0x1.ce8a3f3a80f2dp-424, 0x1.ae8782fcc5684p-487,
     0x1.0e6b808db7203p-225, 0.0, 0x1.575ce4bfe6538p-139, 0x1.787afdf9cca2p-175,
     0x1.0078851355898p-854, 0.0, 0.0, 0.0, 0x1.273536f2cf62fp-505,
     0x1.64967ec0ad775p-788, 0.0, 0.0, 0x1.6876a2c777c25p-473, 0.0,
     0x1.ec8b52f157252p-86, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2a0289898c4ep-743, 0.0,
     0x1.bde657f6464f1p-1002, 0.0, 0.0, 0x1.28353828adde1p-82, 0x1.d95eff533771fp-835,
     0x1.649490f63d782p-928, 0.0, 0x1.c46a784ca7463p-795, 0x1.8d6d259976a08p-762,
     0x1.0f36cd4ae2ca5p-79, 0.0, 0x1.791b67ad1f856p-859, 0.0, 0x1.00014db09636dp-737,
     0x1.0cd9a9db695e6p-397, 0x1.50fc940d6f33cp-824, 0x1.ebd25f81675eep-122,
     0x1.ef7e8982e8607p-275, 0.0, 0.0, 0x1.7b02d31b9ab23p-357, 0.0, 0.0, 0.0,
     0x1.599a35c5a23d1p-337, 0.0, 0.0, 0.0, 0.0, 0x1.2d573e4412385p-192, 0.0,
     0x1.1fe0fe6e003ccp-920, 0.0, 0x1.025d736e0ca6ap-444, 0x1.1a6d4f8559966p-765, 0.0,
     0.0, 0x1.e353aa181f311p-600, 0x1.21d8407ba3a9cp-774, 0.0, 0.0, 0x1p0, 0.0,
     0x1.0f3cdbf514734p-712, 0x1.54a7f14bf2acp-198, 0.0, 0x1.b2a97145db6f4p-924, 0.0,
     0.0, 0.0, 0x1.63f3f4d992b2cp-931, 0x1.a0b721f905f67p-111, 0.0, 0.0,
     0x1.0a02e5eddc621p-310, 0.0, 0x1.1f65859396b2bp-847, 0.0, 0.0, 0.0, 0.0,
     0x1.4c6bb24ebfe09p-1021, 0.0, 0x1.92a6cf33d42c5p-219, 0.0, 0.0, 0.0,
     0x1.f77c0a89dcf14p-395, 0x1.91fd82e7c27bfp-754, 0x1.32821d8c712e5p-451,
     0x1.8d2be90379b5ap-75, 0x1.ef9470873b994p-30, 0x1.6c6126c2e8e45p-71, 0.0,
     0x1.36cabc1eeaca2p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbe0ef6eb6fa3p-307, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d24867cbcf0f1p-803, 0x1.83f06591a780ap-76,
     0x1.c4ba67642e3d3p-73, 0x1.2cd2b12f09d78p-626, 0x1.7d920d009bd85p-676, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1ee3715461695p-498, 0.0, 0x1.eaeed682b4adep-591, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.148d2238b154cp-872, 0.0, 0x1.ec2be9f7456f9p-330,
     0.0, 0x1.25fd772733b8ep-788, 0.0, 0.0, 0x1.419cccb4a28a6p-1019,
     0x1.8f20853319158p-18, 0x1.f44e6caf0930ap-215, 0.0, 0x1.6ecf8486a402bp-197,
     0x1.e0a8d21a0d603p-8, 0x1.e74d97b9f770cp-807, 0.0, 0x1.d61f4bb924c0ep-492, 0.0,
     0.0, 0.0, 0x1.a22a3f0334defp-450, 0.0, 0x1.3d5d58ef6c338p-140,
     0x1.246e3278fe7b6p-819, 0x1.ba0c21769a682p-607, 0x1.a4929b800481fp-201, 0.0,
     0x1.65251af66d0c7p-766, 0.0, 0x1.9bb9da93d9c4dp-322, 0x1.e2d4a010b248ap-634, 0.0,
     0.0, 0.0, 0x1.f312c4e728369p-442, 0.0, 0.0, 0.0, 0x1.1b2e20c9d8b85p-279,
     0x1.8b8b5ba19cc53p-38, 0.0, 0x1.e076a2257de7p-561, 0.0, 0x1.37e8c55520573p-596,
     0.0, 0.0, 0.0, 0x1.4b00ebeb88c4cp-678, 0x1.9932e2345cb48p-934,
     0x1.68201eb1f1661p-418, 0.0, 0x1.ce7d6d3c53a7dp-838, 0.0, 0x1.847d0bfc1bdb2p-815,
     0.0, 0x1.13e5388d7ef42p-422, 0.0, 0x1.7cffed0291413p-641, 0.0,
     0x1.b7077818e3601p-416, 0.0, 0x1.fcc8f3969e905p-307, 0x1.0cb4344a9bb7fp-658, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11cf894a849f6p-923, 0.0, 0.0,
     0x1.7e4815ef8ded2p-691, 0.0, 0.0, 0.0, 0.0, 0x1.1b4e934d2257dp-36,
     0x1.53abf38510111p-49, 0x1.e9827b0bcd039p-649, 0x1.99730c124276ep-283, 0.0, 0.0,
     0x1.916afd38ae8c1p-491, 0x1.af00bb1114246p-494, 0x1.3c479dcd626f3p-407, 0.0,
     0x1.b9764609ecb17p-642, 0x1.800d29ae01566p-53, 0.0, 0x1.c57cc139b7954p-270, 0.0,
     0.0, 0x1.81edad1323e51p-95, 0x1.58db6dd4a674ap-693, 0x1.da3d47cf41523p-165,
     0x1.5a33774b1862ep-884, 0x1.5f68748608c0ap-980, 0.0, 0.0, 0x1.151f8c9639ff6p-33,
     0.0, 0.0, 0.0, 0x1.9311cbbda396p-119, 0x1.7ed876021771dp-302, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.767e63a33df94p-52, 0x1.7cb55c7d296dap-1019,
     0x1.d5aa8a0c47b9p-222, 0x1.3df524945860cp-353, 0x1.6c2976d5e853fp-760, 0.0,
     0x1.44335e933dc2p-457, 0.0, 0x1.962a8cd504a2bp-908, 0x1.1cc98a58d4a11p-468,
     0x1.01db96c9f78f1p-4, 0.0, 0x1.1783728de94dep-102, 0.0, 0x1.9b93716255d72p-794,
     0.0, 0x1.2c0e46f01ce64p-20, 0x1.fcba628547f7ep-261, 0.0, 0x1.1a5800d1300ccp-648,
     0.0, 0.0, 0.0, 0x1.3c0acfc56d2d9p-541, 0x1.273c77e740acbp-961,
     0x1.65ad37f85399ap-270, 0x1.62e188fe3117p-630, 0x1.af85604855c1dp-135,
     0x1.fe92ed7e5b235p-741, 0.0, 0x1.8146fa90aa063p-335, 0x1.2b890ea2ab8cbp-132, 0.0,
     0.0, 0x1.38f721aff0abep-498, 0x1.9ee3d708cc389p-604, 0x1.7759a0229154bp-669, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7eac9338eb3dp-24, 0.0, 0.0, 0x1.91ab463a557a8p-382,
     0.0, 0x1.7248fdb5e4abcp-784, 0x1.d438d1f0e581bp-382, 0.0, 0x1.1cfdbbcc8c19cp-717,
     0.0, 0.0, 0x1.c641e18e76a02p-1014, 0x1.98b4f6078ddecp-772,
     0x1.dc7da00179701p-1003, 0.0, 0x1.3c3a7510d433p-28, 0x1.95cf6eec200ddp-813,
     0x1.bafcebd6bb619p-975, 0x1.b119792e4aed1p-740, 0x1.58bc6202c243bp-32, 0.0, 0.0,
     0x1.41e757492563bp-566, 0.0, 0.0, 0x1.cf7347ad425e9p-956, 0x1.6045a2afb6a77p-695,
     0x1.84b8ab941bd89p-213, 0x1.2e84f10e482fap-579, 0.0, 0.0, 0.0, 0.0,
     0x1.10519e705801bp-331, 0.0, 0x1.f811a05e8376dp-18, 0.0, 0x1.8210613aa6a6dp-122,
     0.0, 0x1.0fdf631d0185bp-471, 0x1.5ba505a73518cp-11, 0x1.f756201f8802ep-814,
     0x1.c35f06423a85fp-697, 0.0, 0x1.7dc6d3848bd65p-934, 0.0, 0.0,
     0x1.042636e34e64cp-320, 0.0, 0x1.415f333a5c9d5p-305, 0.0, 0.0, 0.0,
     0x1.076549bee9d7p-79, 0x1.1c21dd0eda58bp-726, 0x1.0700c21250913p-231,
     0x1.86fdb11cbfc84p-276, 0x1.2484399780c33p-769, 0x1.02e321b794863p-716, 0.0, 0.0,
     0.0, 0x1.c8756e78e5128p-178, 0x1.f09ce5d95fe37p-361, 0.0, 0x1.5a7ee15835b78p-391,
     0.0, 0.0, 0.0, 0x1.7bcb6bc6004aap-568, 0.0, 0x1.1da745ebbde79p-275, 0.0, 0.0,
     0.0, 0x1.07027b002dd69p-362, 0x1.4422e4bb851e6p-664, 0.0, 0x1.15f8329c8497bp-748,
     0.0, 0.0, 0x1.56578819bd22ap-289, 0.0, 0.0, 0.0, 0x1.9ec31ba82615p-413, 0.0,
     0x1.a20bac5440a2ap-155, 0.0, 0x1.320a3febf1174p-562, 0.0, 0.0,
     0x1.2e7b9a946e943p-248, 0x1.586b837f3db64p-118, 0.0, 0x1.b2f0fc711031dp-831,
     0x1.fdf3f2379846cp-965, 0x1.4934da8cc097ep-905, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a359fa1d67c8p-935, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b188a41943f89p-138,
     0x1.069717d9390afp-237, 0x1.db875ae1c4b15p-898, 0.0, 0x1.4a113ee953adp-787,
     0x1.822b8a584ff4cp-256, 0x1.5f69342c728bcp-924, 0.0, 0x1.26d6c1534beebp-115,
     0x1.f7047a4decfcdp-82, 0x1.f8296eb9f5828p-317, 0x1.04ed7c18b8b9dp-89, 0.0,
     0x1.454149a558734p-537, 0x1.1b479f40e4a4dp-388, 0.0, 0x1.ec829d2002a2bp-216, 0.0,
     0.0, 0.0, 0x1.38c52d7afe6ap-940, 0.0, 0.0, 0x1.1d98c186ec985p-253, 0.0,
     0x1.1e241e69c7a4p-498, 0.0, 0x1.84234044039bcp-676, 0x1.1a14ed994f09dp-99, 0.0,
     0x1.312de465d1888p-761, 0x1.4290ad1f2d6dcp-878, 0x1.4a2f871553a1p-705, 0.0, 0.0,
     0x1.5bdfaa9b8fb9p-985, 0x1.6aee35084854fp-410, 0.0, 0.0, 0x1.c1137eebfa30fp-423,
     0x1.50620554fb00ap-253, 0.0, 0x1.86a3aa7b639ddp-922, 0.0, 0.0, 0.0,
     0x1.abae6d3cd5962p-286, 0.0, 0x1.9efd718f5ed3cp-356, 0x1.2ee89aac0c4bp-179, 0.0,
     0x1.72b5b26aef2c6p-776, 0x1.b46466995e692p-787, 0x1.e8015fdebea7p-164, 0.0, 0.0,
     0x1.34db369ad5a6ap-312, 0x1.891b4e4ccf123p-899, 0x1.3d9cc34fcd448p-983,
     0x1.9b0b5e05c1c2ep-240, 0x1.60c245601f49ep-790, 0.0, 0x1.2e133119b0124p-160,
     0x1.1aa802e5fd7b5p-467, 0x1.bb0112a4c4c2fp-375, 0x1.4c81f77738129p-657, 0.0,
     0x1.210e6dc3d3cd1p-22, 0.0, 0.0, 0x1.609847565bbbcp-445, 0x1.be2cc06fb1366p-937,
     0x1.1180b0cc9bffbp-354, 0.0, 0x1.211ed3a9c8f23p-358, 0x1.3cec9e4192e6fp-4,
     0x1.59462a4e9459ep-144, 0x1.102ea0d469e8fp-1011, 0.0, 0.0, 0.0,
     0x1.7a4c92e54fb86p-292, 0x1.7c3ee55fd9465p-207, 0.0, 0.0, 0x1.964c440a5dc1dp-176,
     0x1.fe4472d89abb7p-949, 0x1.b4d485ea15c8p-2, 0.0, 0.0, 0x1.853ed0460f10fp-459,
     0.0, 0.0, 0x1.05b583f8b3b53p-1021, 0x1.75f72169b0c1bp-114, 0.0, 0.0, 0.0,
     0x1.932068665aea8p-1010, 0x1.c8172a4dcc9cep-634, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.de5c7f83f6d1dp-780, 0x1.fdd7fb89e5ffep-880, 0.0, 0.0, 0x1.4b9c46ceef5cbp-856,
     0.0, 0x1.88fdfdbd10161p-429, 0x1.9bb9c0ae127adp-215, 0.0, 0.0, 0.0,
     0x1.560935f1db72fp-473, 0.0, 0.0, 0.0, 0x1.4a4b37d2e0966p-409,
     0x1.8b93a5040b0fbp-686, 0.0, 0.0, 0x1.ce28cb7701641p-919, 0.0,
     0x1.157b9bff4b884p-121, 0.0, 0.0, 0x1.e00971f63affbp-826, 0.0,
     0x1.b695c1d1ac802p-532, 0x1.61be15e54d4a2p-974, 0.0, 0.0, 0x1.5e9c4490d475dp-285,
     0x1.67d3b7a6288bbp-169, 0.0, 0x1.daa07676e3fcfp-427, 0x1.df6264dc38fa6p-975,
     0x1.22deb9df7711fp-350, 0x1.d5b958fa71f21p-783, 0x1.ee80333f1508bp-166,
     0x1.9cc28f99669d1p-3, 0x1.ca0dc971a4f39p-439, 0x1.031179effdd0dp-634, 0.0,
     0x1.2d1630c840d45p-48, 0x1.32f0af1596d6cp-197, 0x1.be0d1f0af1b91p-810,
     0x1.a35d109fe39d9p-68, 0x1.fe9728e7a61bfp-940, 0.0, 0.0, 0.0, 0.0,
     0x1.04366f17ccd0cp-220, 0.0, 0x1.85aa64f752c2bp-838, 0.0, 0x1.d03059fe132c2p-733,
     0.0, 0x1.8075b092e36f1p-42, 0x1.efa2b2c322fb4p-582, 0x1.f6020fe1469f7p-221,
     0x1.125c96d001b6dp-344, 0x1.95c96b570e8e5p-460, 0x1.c1e50ee704667p-796, 0.0, 0.0,
     0.0, 0.0, 0x1.662a1dfcc3e9cp-81, 0x1.7ebe2ab9a9285p-234, 0x1.70b3293650f11p-134,
     0x1.40f22272a0e8cp-829, 0x1.0f970891841f7p-313, 0x1.554e67785512dp-31, 0.0, 0.0,
     0.0, 0.0, 0x1.a998b23154f1bp-825, 0x1.34b33e15500ccp-825, 0x1.044169afdf0ccp-279,
     0.0, 0.0, 0x1.bc66aa299bfe5p-1007, 0x1.d8eeb548e12dep-902, 0.0,
     0x1.b8a1dfbb4fbfbp-922, 0.0, 0.0, 0.0, 0.0, 0x1.72e926c82f924p-979, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.da0373ae6c897p-476, 0x1.450aba689d29fp-478,
     0x1.c9ffe3d5def92p-130, 0x1.b2d5aa21159c9p-706, 0.0, 0x1.c0aa26ead3888p-927, 0.0,
     0x1.8f47d6f6e186p-367, 0.0, 0.0, 0.0, 0x1.e35a3b5803af6p-71, 0.0,
     0x1.65b3a0b75a449p-590, 0x1.66b8a2d5233e7p-826, 0.0, 0.0, 0.0,
     0x1.798a4494e6d17p-624, 0.0, 0.0, 0x1.a1b1c2fa3a8ffp-835, 0.0,
     0x1.c4aeca7cb11b9p-587, 0.0, 0.0, 0.0, 0x1.806eccc6738c9p-530,
     0x1.9bf4e4c854e6ap-950, 0x1.c6e592fb215d6p-837, 0x1.963deaa25a479p-168, 0.0, 0.0,
     0x1.52d4850fef447p-920, 0.0, 0.0, 0.0, 0.0, 0x1.bce3ba4cb7b32p-570,
     0x1.519da93c20164p-468, 0.0, 0.0, 0.0, 0x1.0bafe94461032p-270, 0.0, 0.0, 0.0,
     0x1.7a135a7c7e936p-55, 0x1.29d47d7977138p-674, 0.0, 0x1.9e12699eebba7p-28,
     0x1.9d8c8b06a7f52p-749, 0x1.2e3da9667fe5ep-293, 0x1.da8d0afd7e1cep-515,
     0x1.143f1561ad80ep-916, 0.0, 0.0, 0x1.8088a1a10205ep-931, 0x1.fa680e62592a5p-817,
     0.0, 0.0, 0x1.fd22f5af82cecp-805, 0.0, 0x1.9690faddeee0cp-359,
     0x1.f883c9d6ed061p-903, 0x1.260cd576955c4p-686, 0x1.fc355a78b56fbp-733, 0.0,
     0x1.c44ed0429e232p-293, 0.0, 0.0, 0x1.fd8dd046e77d3p-405, 0.0, 0.0,
     0x1.a330e993b1773p-166, 0x1.1058dc2e1c9cbp-374, 0x1.4b08216e84baap-917, 0.0,
     0x1.623a4f5d9887bp-75, 0.0, 0.0, 0.0, 0.0, 0x1.6215c1291549fp-771,
     0x1.1f129769a9e46p-987, 0.0, 0x1.07f2bf28f7b1cp-147, 0x1.fe6c24a23794ep-47,
     0x1.cde2c541a6e88p-414, 0.0, 0.0, 0.0, 0.0, 0x1.6bb8020d9f3b2p-84, 0.0,
     0x1.970629a341a79p-592, 0x1.45fec7205d97cp-904, 0.0, 0x1.64497299379f1p-729, 0.0,
     0x1.845d8ac9e2a06p-112, 0.0, 0x1.27102e93a684p-935, 0.0, 0.0,
     0x1.41f43c81ae065p-140, 0x1.7829e50b9a8e5p-756, 0x1.d049034293c85p-866, 0.0,
     0x1.c4e2d2e9e8fd7p-860, 0x1.626c9e1d6fc74p-894, 0x1.3b0e410ba5aa7p-731,
     0x1.3486f2acee28dp-300, 0x1.3fd443d336ecdp-380, 0x1.9402e36576d75p-67, 0.0, 0.0,
     0x1.856494a106e1cp-454, 0.0, 0x1.61a3bd40e962bp-307, 0x1.809845e0cde93p-343,
     0x1.2f22917725518p-299, 0.0, 0x1.e174ab2d0de24p-263, 0x1.f10b4db680488p-734,
     0x1.bf7e99bd461c1p-535, 0x1.3ad9df52e6784p-131, 0.0, 0x1.a65f6c0bef326p-558,
     0x1.fc3f06af319aep-323, 0.0, 0.0, 0x1.1054569596a92p-597, 0.0, 0.0, 0.0, 0.0,
     0x1.5a2a1f04174e5p-543, 0.0, 0x1.fb2f7fd4381a7p-887, 0.0, 0x1.4d3087f664ee3p-205,
     0.0, 0x1.d52470c1733e3p-299, 0.0, 0.0, 0.0, 0x1.680dd4a8bd49bp-659,
     0x1.f40a1f456af0ap-600, 0.0, 0x1.7430f7bc9e01ep-616, 0x1.f424948fb3ec2p-549, 0.0,
     0.0, 0.0, 0.0, 0x1.c126817d8fa09p-230, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6678e961ea0ap-288, 0.0, 0x1.1626f47b42776p-600, 0x1.08526f17769b4p-8,
     0x1.8b22baeda31a3p-732, 0x1.e25917327cbc2p-102, 0.0, 0.0, 0.0, 0.0,
     0x1.cf33190a5f661p-970, 0x1.691ace932f7acp-329, 0x1.2a3f63364607fp-406,
     0x1.9a79c542746afp-557, 0x1.8299b79ae73c9p-132, 0x1.502ddfad1e97p-605,
     0x1.2418e7a85e5f5p-398, 0x1.b7f6b6e302844p-289
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    double global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = 0.0;
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
        double bench_acc;
        int32_t i;
        double tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = 0.0;

        for (;(i < INT32_C(1001));){
            double tmp0;
            double tmp1;
            double tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sinpid1_u05purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc + tmp1;
            bench_acc = tmp2;
            tmp3 = i + INT32_C(1);
            i = tmp3;
        }
        tmp0 = global_bench_acc + bench_acc;
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
    printf("Sleef_finz_sinpid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sinpid1_u05purecfma bench acc %la\n", global_bench_acc);
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
