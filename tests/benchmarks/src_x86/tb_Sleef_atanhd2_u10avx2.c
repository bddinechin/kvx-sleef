/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhd2_u10avx2128.c --function Sleef_atanhd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.9d5573bf60cccp-541, 0x1.19fdad4fc4373p-318, 0x1.a8431fcefbf99p-576, 0.0,
     0.0, 0.0, 0.0, 0x1.d3f323c4020dep-978, 0.0, 0.0, 0x1.4aebb369e57efp-663, 0.0,
     0.0, 0.0, 0x1.e667d4095fa6ep-680, 0.0, 0x1.27d24e1b56fb4p-826, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2d17e2e810211p-1018, 0.0, 0.0, 0x1.f342ed9cfb337p-239,
     0.0, 0.0, 0x1.561790c0c331bp-156, 0.0, 0x1.8f45c04f01835p-488,
     0x1.ff0af6017493ap-323, 0.0, 0.0, 0.0, 0x1.0ceabe06a1622p-537,
     0x1.e5346204d641p-618, 0x1.504dd039e1068p-383, 0.0, 0x1.00b9b03c2d72fp-379, 0.0,
     0x1.c91d2b8e4747fp-951, 0.0, 0x1.78e870ceb0d87p-785, 0.0, 0x1.def9d01bd8151p-227,
     0x1.9d98f2d844accp-917, 0x1.a92eb7e20ef02p-576, 0x1.939a0d9102d66p-887, 0.0,
     0x1.bf8c230c945e3p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.719072e191c4fp-990,
     0x1.2d909cdb6d67bp-698, 0.0, 0.0, 0.0, 0.0, 0x1.826beeb5f14bbp-568,
     0x1.43d3a24b7ac21p-8, 0x1.2983708e0c173p-608, 0.0, 0x1.cd39b5ccc89c4p-172,
     0x1.f2717e4256249p-212, 0x1.f073092fe985p-648, 0x1.e486ab426094bp-921, 0.0,
     0x1.9c71ca6f5eeddp-711, 0x1.762ebda1e0c58p-329, 0.0, 0.0, 0x1.0486afb94879ap-303,
     0x1.7c38df18fb0eap-956, 0.0, 0x1.5ee2dc80d5bc7p-166, 0x1.2a7b83029b016p-757, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.073a24404ef0ep-882, 0x1.c1c001429d73bp-762,
     0x1.02cbbc2bf32d4p-501, 0.0, 0.0, 0x1.b843ae612e187p-755, 0.0,
     0x1.378b5c9471729p-436, 0.0, 0x1.045a5a6649a6ap-895, 0.0, 0x1.0ed6679d27dddp-778,
     0x1.95902d5bdb0dep-592, 0x1.2f11def955384p-410, 0.0, 0.0, 0x1.56b928fccebdap-400,
     0.0, 0.0, 0.0, 0x1.8fde4a6875f81p-562, 0.0, 0.0, 0.0, 0x1.cb4de2b863d41p-919,
     0x1.bd6bc4abb7ad3p-361, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f256f2f3bda93p-903,
     0x1.5d63c3101ff33p-574, 0.0, 0.0, 0x1.aabacbd452b5bp-750, 0.0, 0.0,
     0x1.774cf3e486147p-1011, 0x1.37165448da16fp-848, 0.0, 0x1.18e8c9afcd2d3p-912,
     0.0, 0.0, 0x1.81466d27551cfp-953, 0.0, 0x1.73f9a6de902ecp-203,
     0x1.d8fc5a62dfb73p-783, 0.0, 0x1.534f13e45766bp-856, 0.0, 0x1.72e0c63b4d006p-589,
     0.0, 0x1.e29138530a316p-807, 0.0, 0x1.8c9ed75f9bda4p-648, 0.0, 0.0,
     0x1.c0ee14bcd3fffp-376, 0.0, 0.0, 0.0, 0x1.164c8b3f1e1dp-235, 0.0, 0.0, 0.0,
     0x1.b1e82953787b2p-411, 0x1.5814ebd8eafd1p-872, 0x1.9972790606888p-461, 0.0, 0.0,
     0x1.d0e6b00166c64p-119, 0.0, 0.0, 0x1.bc14d4b25597p-554, 0x1.e382b310461dfp-639,
     0x1.4608f06791e33p-8, 0.0, 0.0, 0x1.c80d042660bb2p-602, 0.0,
     0x1.a25edfd695abap-948, 0x1.b02bc2687f548p-808, 0.0, 0.0, 0x1.a0f7c6d38cb4bp-866,
     0.0, 0.0, 0x1.d1a0ab8aba563p-144, 0x1.ccc90973c74b5p-457, 0x1.e4b4d76759667p-714,
     0x1.e94c86a01e257p-546, 0.0, 0x1.2941785b7f6bbp-408, 0.0, 0x1.c0b6c1b9b2eap-528,
     0x1.bc63ea192c086p-879, 0.0, 0x1.8ce8564130955p-916, 0x1.7ddd12595c578p-932,
     0x1.f65f55d546a92p-438, 0.0, 0x1.d3b5cc88f9884p-239, 0.0, 0x1.9a29d8306c869p-913,
     0.0, 0x1.50a4529dfd09ap-627, 0.0, 0x1.71c7f3cb68a4ep-448, 0x1.bbe9afe779ab7p-895,
     0x1.6a712d5f786ep-39, 0.0, 0.0, 0x1.c89900d5b9b99p-164, 0x1.a66601e7cab7cp-903,
     0.0, 0x1.0127f84970528p-583, 0.0, 0.0, 0x1.777b191599ec1p-854, 0.0,
     0x1.1b6a2f1c514adp-756, 0.0, 0.0, 0.0, 0.0, 0x1.634c2085c98c2p-653,
     0x1.e9ef7de56f778p-887, 0x1.c5bbace33356ep-799, 0.0, 0x1.e6061ae5d7828p-550,
     0x1.e385c5384ffa7p-917, 0x1.b3a3486479d42p-786, 0x1.9c4b1ac4953p-710,
     0x1.cb5147d19d0d8p-954, 0.0, 0.0, 0.0, 0.0, 0x1.3136d147d59d3p-946, 0.0, 0.0,
     0.0, 0x1.4853fe458c36fp-458, 0.0, 0.0, 0x1.8bc90cc1dc415p-814, 0.0, 0.0,
     0x1.d7a2694b0e2c8p-770, 0x1.8b6a2b576224fp-783, 0.0, 0.0, 0.0,
     0x1.822e135428235p-409, 0x1.1892f35b2f9dp-191, 0x1.d124c70eb4d1ap-876, 0.0,
     0x1.34d8e9f66a7abp-859, 0x1.8190b37beed97p-1, 0.0, 0x1.693a4f9a7eb4ap-304, 0.0,
     0x1.cd772421c3f32p-301, 0x1.6d6a944541bf9p-299, 0x1.54f504473012cp-114,
     0x1.dea38eff9aa63p-965, 0x1.7f52f2ad23597p-530, 0x1.88cfa97356c03p-293,
     0x1.4ba3bb9d937bbp-502, 0x1.5c3c662d12307p-882, 0x1.34e8ce4b02823p-862,
     0x1.2e764f8db84b3p-396, 0x1.ad487a1acc6cdp-389, 0.0, 0x1.a81c229a3e01fp-365, 0.0,
     0.0, 0.0, 0x1.6d55770a5461ap-274, 0x1.a5c56a72b347dp-263, 0x1.a248a65cc8a71p-574,
     0x1.14aa074f33606p-926, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d23e2a823f36p-270,
     0x1.6ed592be4c1c6p-236, 0.0, 0x1.6a68d92c1addcp-12, 0.0, 0.0,
     0x1.84f6282439956p-48, 0x1.f68ff0fa44b03p-510, 0x1.24d43c1922d27p-745,
     0x1.f7d6dffa79671p-784, 0x1.8d3558bd205efp-713, 0.0, 0x1.e3b6b9f68f093p-992, 0.0,
     0.0, 0.0, 0x1.5f226aa1ef7c7p-889, 0.0, 0x1.01b61c3ee3d7dp-559, 0.0, 0.0,
     0x1.0adfefea6194ep-298, 0x1.92eb7a4b24d1bp-356, 0.0, 0.0, 0.0,
     0x1.439a66b95e975p-722, 0x1.656f08064c1dep-561, 0.0, 0.0, 0.0,
     0x1.a785b947907b1p-159, 0.0, 0x1.012a764c8e661p-580, 0x1.94b664806b2f9p-279, 0.0,
     0x1.e91d897f8797dp-367, 0.0, 0x1.f77f8782963aep-392, 0x1.73aaeb530ba78p-492, 0.0,
     0x1.459265803d5d3p-818, 0x1.6a7e166f6dadfp-504, 0x1.2b1fc96f9abb6p-110, 0.0, 0.0,
     0x1.92e06c4548001p-526, 0.0, 0.0, 0x1.b5a440940d988p-601, 0.0,
     0x1.549be71d9729ep-655, 0x1.9c82dd99e3c86p-255, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e34714815008p-976, 0x1.fbc50b4761152p-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7d43010b04f48p-930, 0x1.d7a7c1ace12fp-423, 0.0, 0.0,
     0x1.ed27b35077f6bp-543, 0x1.bae5bb4eba651p-475, 0x1.f68bf12570b5ap-424, 0.0,
     0x1.7f88cdcbf02eap-157, 0.0, 0.0, 0x1.189426c389f49p-162, 0.0, 0.0, 0.0, 0.0,
     0x1.e0d32b008b478p-649, 0.0, 0x1.495a92a7b63fcp-259, 0x1.538ca75687bf6p-588, 0.0,
     0x1.f45b01edf977ap-166, 0x1.83f7c8adbab4ep-902, 0.0, 0.0, 0.0, 0.0,
     0x1.f0075a8c0feep-643, 0x1.06fb2a827163ep-955, 0x1.ed0e42bab4bfp-877,
     0x1.d383f7198336p-984, 0x1.a36d275e83549p-383, 0.0, 0x1.430fa1ba5cfa9p-696,
     0x1.a913e1f09f123p-491, 0x1.54e361a269139p-393, 0.0, 0.0, 0x1.3cdeb2dcd0005p-377,
     0x1.5f7d0057e0831p-221, 0x1.d9a71482b4a2p-526, 0.0, 0.0, 0x1.e6c0b78e46407p-864,
     0x1.14ea483037668p-164, 0.0, 0x1.bf053f8724e17p-149, 0x1.36018fc18891ep-541, 0.0,
     0.0, 0.0, 0x1.394282b7941a4p-298, 0.0, 0x1.86241ccf853b2p-1003,
     0x1.4de4b29551fd6p-948, 0.0, 0.0, 0.0, 0x1.5cb8f8338886bp-473, 0.0, 0.0, 0.0,
     0x1.9fb0dd5e89b11p-717, 0.0, 0.0, 0x1.4225498c9cd4p-502, 0.0, 0.0, 0.0,
     0x1.880a1a4c6ff76p-795, 0.0, 0.0, 0.0, 0.0, 0x1.8e88a29f3bac9p-269,
     0x1.3b334d2b65a22p-337, 0x1.255df618c8749p-885, 0.0, 0x1.a4b657e6a61bp-136,
     0x1.1a5d018358459p-687, 0x1.58e9143a3842cp-706, 0.0, 0.0, 0.0, 0.0,
     0x1.23d165dc2f15bp-481, 0.0, 0.0, 0x1.f33c73b195f66p-779, 0x1.fcfba443697a3p-882,
     0.0, 0.0, 0.0, 0x1.e798f59df2f67p-896, 0x1.17a64ef137684p-590,
     0x1.a6ce8b585abecp-176, 0.0, 0.0, 0x1.64c1c0d424c6fp-602, 0.0, 0.0,
     0x1.06695aeea8425p-924, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9063b972a5cbp-970,
     0x1.0f2ccef866451p-1016, 0x1.c5261809ecc4cp-867, 0x1.48e882a1df9eap-694, 0.0,
     0.0, 0.0, 0.0, 0x1.7d0590acc9548p-485, 0.0, 0.0, 0.0, 0x1.07c2a35de2982p-395,
     0x1.e190bc0d47284p-126, 0.0, 0.0, 0.0, 0x1.bd14a4768147cp-902, 0.0,
     0x1.3fe9607f44bc6p-38, 0.0, 0x1.ed4d1307ca584p-747, 0x1.6f4004a258e6cp-485, 0.0,
     0x1.1d6b1456546f9p-414, 0.0, 0.0, 0.0, 0x1.1d1d5310f80b6p-234,
     0x1.dcc8351fb2284p-201, 0.0, 0x1.c588f3a178913p-1021, 0.0,
     0x1.d926cca2c2cdfp-781, 0.0, 0.0, 0x1.9b16319973138p-268, 0x1.bc723e761f31bp-479,
     0x1.5bb7eb956445bp-637, 0x1.cafa9fe091739p-680, 0x1.0126951be7b42p-721,
     0x1.717be75cfb77p-461, 0.0, 0.0, 0.0, 0x1.e788ac2c10ce3p-1013, 0.0, 0.0,
     0x1.0616914802276p-206, 0.0, 0.0, 0x1.25824b0835a9dp-674, 0.0, 0.0, 0.0,
     0x1.7da77be607d27p-784, 0x1.3f4c3855a5facp-325, 0.0, 0.0, 0x1.90b477120fc07p-549,
     0x1.2962ed7d3d6b7p-963, 0.0, 0.0, 0x1.2921656ba580ep-779, 0x1.7fec288448c81p-428,
     0.0, 0.0, 0x1.28a6af162f47p-132, 0.0, 0.0, 0.0, 0x1.663cd66bcacbdp-591, 0.0, 0.0,
     0x1.3ed8a1de7026dp-799, 0x1.ed7b06e3c0493p-590, 0.0, 0x1.0d3300c3dcdaep-905,
     0x1.4e4c9fae3ff39p-918, 0x1.54882be769a47p-257, 0.0, 0x1.edf0800661a1bp-71,
     0x1.0731208e6b32dp-388, 0.0, 0.0, 0x1.be1207c4ef2dep-77, 0.0, 0.0,
     0x1.ee4439dedd992p-79, 0x1.2e51586c55c95p-449, 0x1.5cf4aadaedb3dp-592,
     0x1.0af4812f4d6eap-85, 0.0, 0x1.9472323f37eb5p-653, 0.0, 0x1.d21a061078ec1p-262,
     0x1.567d475cf269bp-963, 0x1.5b889edd6b793p-164, 0.0, 0x1.ba368112ea6cbp-289,
     0x1.fbb719800202cp-200, 0x1.d6bd3041d4eedp-38, 0.0, 0.0, 0.0,
     0x1.d68d768e218edp-397, 0x1.c99304972c829p-731, 0.0, 0.0, 0x1.4101e89c86a4p-799,
     0x1.5a58e60658cd4p-695, 0x1.add7c84d3e9acp-877, 0.0, 0.0, 0.0, 0.0,
     0x1.c33c46808cae5p-322, 0.0, 0.0, 0x1.eccc26c0efbaep-570, 0.0, 0.0, 0.0,
     0x1.c9260f337d889p-901, 0x1.3680c15a84f57p-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1ae5895231aadp-514, 0x1.5a8fb46e42f15p-383,
     0x1.128a88365f37ep-530, 0.0, 0.0, 0.0, 0x1.9db8bc7067524p-689,
     0x1.c6d52b690dfadp-647, 0x1.cd80b4b9992d6p-814, 0x1.79f3eb1de3756p-259, 0.0,
     0x1.4ebbca4d47ae1p-735, 0x1.a5ec5ac667e5dp-951, 0.0, 0x1.1423dbaed011bp-479,
     0x1.5f518e0944706p-722, 0.0, 0.0, 0.0, 0x1.49c5c49be85e1p-300,
     0x1.3a276d71ff647p-986, 0x1.ff648b2fa8569p-12, 0.0, 0.0, 0.0, 0.0,
     0x1.8e77c20ae42eap-136, 0.0, 0.0, 0.0, 0x1.1ae7f274e89ecp-244,
     0x1.38a9eba4ae082p-207, 0.0, 0x1.ba3b6035b444p-852, 0.0, 0x1.eaecee6bcfdf8p-352,
     0.0, 0x1.cb7ec3a0f87e5p-625, 0.0, 0.0, 0x1.ebd99d488382dp-716,
     0x1.47a039c345a02p-883, 0.0, 0x1.e15077b689fdfp-725, 0x1.eca279402e1c4p-442,
     0x1.663880ae050f9p-91, 0.0, 0x1.3e6111804f2acp-707, 0x1.154743202ad1ep-219,
     0x1.b61537fd8a1b7p-1016, 0.0, 0.0, 0.0, 0x1.16ab6cc8fa55ep-136, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.80b1ca82941e7p-723, 0.0, 0.0, 0.0, 0x1.4c8e4d89d05e4p-686, 0.0,
     0.0, 0.0, 0x1.76926c0c0386p-572, 0.0, 0x1.af2b320d8f5d8p-572, 0.0,
     0x1.301029e8d93b5p-554, 0.0, 0x1.e440dd80628b9p-884, 0.0, 0.0,
     0x1.4d741f738704ep-205, 0x1.c12e17e587a68p-267, 0x1.9c77ea0e2bd87p-815, 0.0,
     0x1.12d5082cb65bap-515, 0.0, 0.0, 0x1.1d3d4341ead65p-229, 0.0,
     0x1.02f59001f4318p-29, 0.0, 0.0, 0x1.6598724044f1fp-39, 0.0,
     0x1.f76ae2452ebabp-698, 0x1.bb118d249bfecp-11, 0x1.c431abb04e998p-635, 0.0,
     0x1.840418b304fc9p-506, 0.0, 0x1.ed0a91db0692cp-410, 0x1.638da1f9861abp-576,
     0x1.c04aa2e0cc1dfp-283, 0.0, 0x1.eb58c9b097307p-976, 0x1.2487358b830a1p-448, 0.0,
     0x1.880c4d03250afp-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c8557e3cd8c3p-134, 0.0,
     0x1.45a875d72e449p-885, 0x1.41220255566acp-855, 0.0, 0.0, 0x1.ec2194a5a2055p-464,
     0.0, 0.0, 0.0, 0x1.0fc36bfc52b3fp-788, 0.0, 0x1.0cd27afb2195ep-759,
     0x1.b21e029288191p-61, 0x1.01532cc7abccfp-498, 0.0, 0.0, 0x1.bc85c214f91d3p-645,
     0.0, 0x1.9057a1a186723p-677, 0x1.5ada9f0e7cb43p-529, 0.0, 0.0,
     0x1.b77f1472e9f8fp-78, 0x1.88912a7e5e9b5p-783, 0x1.72aba816a7b67p-768, 0.0, 0.0,
     0.0, 0.0, 0x1.140d10222d958p-172, 0.0, 0x1.6048a8a715569p-62, 0.0, 0.0,
     0x1.a020e4c542c6cp-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77cddd03c25b7p-34, 0.0,
     0x1.5faf2063f5a3cp-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61651f12e1b84p-521,
     0x1.b4db2f037e775p-817, 0.0, 0x1.0c0202f10d71dp-67, 0.0, 0x1.dda7cc3b86244p-973,
     0x1.bdc2d587faaccp-550, 0x1.c220f15e729f9p-699, 0x1.cb0c0cfb1c958p-858, 0.0, 0.0,
     0.0, 0x1.4eb988a0b475ep-755, 0x1.8c505c25ca661p-543, 0x1.b9eb922435a96p-256, 0.0,
     0.0, 0.0, 0x1.56830a63adf7p-254, 0x1.897b7f182975p-32, 0.0,
     0x1.efeb102a955fep-877, 0x1.d21e9fbc9af9ep-828, 0.0, 0x1.65b0505b6d7f2p-727, 0.0,
     0.0, 0.0, 0.0, 0x1.8bf89496eaeb8p-552, 0.0, 0.0, 0.0, 0.0,
     0x1.94a0c8abefd93p-121, 0.0, 0x1.790d592390badp-796, 0.0, 0.0, 0.0,
     0x1.0c6d70439a604p-128, 0.0, 0.0, 0x1.97e4bbebb2fb2p-750, 0x1.9f39bcfedb05cp-15,
     0.0, 0.0, 0x1.245db82c3164ap-619, 0x1.85443e4cbd341p-469, 0x1.18499b5fa519dp-149,
     0x1.79742eb0cd034p-458, 0.0, 0x1.b0fb42c9e338bp-286, 0x1.4258b5aaed048p-215, 0.0,
     0.0, 0.0, 0.0, 0x1.3e27d441b2c9bp-166, 0.0, 0.0, 0x1.b27188f1ce71ap-358, 0.0,
     0x1.7cd3f9ff6d4edp-840, 0x1.04dcd0c37df12p-473, 0x1.55713720c261ep-912, 0.0, 0.0,
     0x1.ad06b50b0cc4cp-79, 0x1.91bc1a89f6636p-270, 0.0, 0.0, 0x1.8cc25dce4fb3p-380,
     0x1.5aa27d3f165dbp-54, 0x1.95c1c229b869p-787, 0x1.123c4408572eep-2,
     0x1.71d14d5e48ce9p-726, 0.0, 0x1.d7e4f3d408a9p-545, 0.0, 0x1.c8300978f3b5cp-318,
     0x1.403acd92fd6f9p-750, 0x1.4411fc524d05dp-632, 0x1.c2cce66400ac5p-817,
     0x1.2f2a2a94c4902p-836, 0x1.2db9e2eabef49p-917, 0x1.6de811e4c4b0ep-124, 0.0, 0.0,
     0.0, 0x1.6c245c87aff22p-858, 0.0, 0x1.880cfe0c6e5c7p-85, 0x1.77212b43a5218p-357,
     0x1.4ac891ca27c44p-693, 0.0, 0.0, 0.0, 0x1.67adc47614b43p-486,
     0x1.94f235c260137p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f84a0a26b8cb1p-427, 0.0,
     0x1.478482102c4e5p-186, 0x1.10309de88e03p-556, 0x1.f6c177c8c6565p-425, 0.0,
     0x1.bce452f5f0bd2p-785, 0x1.8494072e4f157p-294, 0.0, 0x1.535cc23479707p-498, 0.0,
     0x1.27caeabb0a4f4p-169, 0x1.438c0a6cff467p-465, 0.0, 0x1.6802566b2e7fcp-673,
     0x1.940211cf7d79dp-935, 0.0, 0x1.b198498a3c871p-711, 0x1.8f716424c733p-225, 0.0,
     0.0, 0x1.884dba62e8cfp-1006, 0x1.4505f5a03eb46p-276, 0x1.7e82c28afa126p-494, 0.0,
     0x1.7a78e0edc5c3ap-260, 0x1.2eb7c76c9a7dp-420, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.507d2c819987ap-916, 0.0, 0.0, 0x1.6e1af54d91df9p-314, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.27b56280675a4p-965, 0.0, 0.0, 0.0, 0x1.e27f9d2e6ad66p-269, 0.0, 0.0,
     0x1.ce4b43583624fp-776, 0.0, 0x1.d78259039fe33p-754, 0x1.3091ac0bc4682p-442, 0.0,
     0.0, 0.0, 0.0, 0x1.a9a971a0da22p-91, 0x1.3fcf135789e03p-734, 0.0, 0.0, 0.0, 0.0,
     0x1.0f542d5f9e24fp-868, 0x1.c709079f7d4e5p-322, 0x1.c7851bf1e7dap-485, 0.0,
     0x1.c7455c7e293fbp-559, 0.0, 0.0, 0x1.53598a6198f31p-595, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f6c34f88ebcaep-418, 0x1.08ca7cce86bd1p-658, 0x1.59ed793918f8p-847,
     0x1.ad54dd4083a04p-773, 0.0, 0.0, 0.0, 0.0, 0x1.d877a7fc5402fp-722,
     0x1.ae70921e3a111p-656, 0.0, 0x1.6004215198df1p-625, 0x1.931b81dae3f49p-260, 0.0,
     0x1.ffd27c8f0c44fp-478, 0x1.4a1c37f2ba6bdp-832, 0x1.ea2c269a90e45p-774,
     0x1.36915ad5db94cp-201, 0x1.ad062faf42b04p-826, 0.0, 0.0, 0.0,
     0x1.63eefc5341995p-20, 0.0, 0.0, 0x1.177685afeb4dep-475, 0.0, 0.0, 0.0,
     0x1.d5f25ce9688cdp-141, 0x1.85e9fc8066d76p-120, 0x1.cff27fa70e7dap-982,
     0x1.2d54f92ed667cp-938, 0.0, 0x1.61be5ae57ce48p-969, 0.0, 0x1.5517835921e4ap-440,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.437a0c55298ep-223, 0.0, 0x1.9abebad5f2d69p-704,
     0x1.e9051996a893ap-561, 0.0, 0x1.ba89b48b0d0bcp-160, 0x1.44cf0e58866ebp-880, 0.0,
     0.0, 0x1.546f6dc39fce7p-518, 0x1.4c2b19210d4cp-461, 0x1.5141044f8f07ep-913, 0.0,
     0x1.a69ea0107157cp-739, 0x1.1d55ab1c3b3f4p-788, 0x1.18793652c8f7cp-585, 0.0,
     0x1.2e425ba0f8c86p-637, 0x1.b37f6f1754766p-636, 0x1.57d6f5790ad81p-412,
     0x1.de4836259db38p-52, 0x1.a9326a0174d3bp-799, 0x1.8164d7557cfd6p-379,
     0x1.c0741f6eb99a4p-448, 0.0, 0x1.c0bfec987313ep-630, 0.0, 0x1.2cb23a70be762p-966,
     0.0, 0x1.7d97d005331e9p-904, 0x1.58686a66ce746p-883, 0.0
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
            tmp1 = Sleef_atanhd2_u10avx2128(tmp0);
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
    printf("Sleef_atanhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atanhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
