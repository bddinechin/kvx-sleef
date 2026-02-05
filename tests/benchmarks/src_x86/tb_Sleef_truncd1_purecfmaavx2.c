/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncd1_purecfma.c --function Sleef_truncd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.15f441898bb27p-878, 0.0, 0.0, 0x1.0b39f05296744p-583,
     0x1.3b65fa2f3582fp-569, 0.0, 0x1.24fa8a5a84fdbp-199, 0.0, 0x1.02abfaec82485p-313,
     0.0, 0.0, 0.0, 0.0, 0x1.6fe6043d2607bp-901, 0x1.d5347fdc52e06p-106,
     0x1.8fe390ea567fap-586, 0x1.a7d61c48ef9dep-773, 0.0, 0.0, 0.0,
     0x1.09d4671ec2d8fp-177, 0.0, 0.0, 0.0, 0.0, 0x1.12df1cfc6c437p-235, 0.0,
     0x1.500bcdf65e6f4p-278, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ee92c75d1608p-777, 0.0,
     0x1.fac392054d783p-20, 0.0, 0x1.126c5da285866p-534, 0x1.d29619c72fe11p-843, 0.0,
     0x1.7596dc7f272f6p-590, 0.0, 0x1.5eea5d0ebde4ep-827, 0.0, 0.0,
     0x1.349ffb5f619dbp-946, 0.0, 0.0, 0.0, 0x1.ce80d27256ba8p-308, 0.0,
     0x1.47dd1e68dfb07p-202, 0x1.18ecf101a23b1p-966, 0x1.1e2758879a114p-577,
     0x1.59ab28c93c2a1p-869, 0.0, 0x1.b5bc5c48e9d17p-876, 0.0, 0.0,
     0x1.d2ce8e0e856dbp-929, 0x1.473a7ccac06ep-766, 0.0, 0x1.44bf207e1230fp-672, 0.0,
     0x1.a822eacd1db8ep-653, 0x1.cbc6173b4d87ep-99, 0.0, 0.0, 0.0,
     0x1.787c1247d992dp-692, 0.0, 0.0, 0x1.8329a0206b4f6p-346, 0.0, 0.0,
     0x1.aa1b6f2746633p-831, 0x1.93ef63d2eee2cp-603, 0x1.ebfd0d436c1ap-824,
     0x1.58acd4cec77b8p-776, 0.0, 0.0, 0x1.0cc0d12380164p-975, 0.0, 0.0,
     0x1.94e7a47b2199dp-932, 0x1.b751904977992p-214, 0x1.b015279482738p-118,
     0x1.9203fc43b629p-555, 0x1.91c84029a8f26p-104, 0x1.52ffe39feb14bp-757, 0.0,
     0x1.b49d129a73a7ap-945, 0.0, 0x1.9ae1c06bf262dp-66, 0x1.142db39c1e49fp-491,
     0x1.45881d0a8284bp-179, 0x1.580934299aa74p-877, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d53c325d011cp-761, 0x1.847d5db6b6d34p-82, 0.0, 0x1.53551563ae41ep-468,
     0x1.00e3d3931f4f9p-476, 0x1.70891c813a989p-593, 0x1.ceba20fb36a7p-519,
     0x1.0be7b09ae815fp-236, 0.0, 0.0, 0.0, 0x1.69e7a21a7df15p-682,
     0x1.2548fa239b529p-952, 0x1.94117f35d4ea9p-866, 0.0, 0x1.5bfbd24d1f248p-230, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a7872058b1f93p-975, 0.0, 0x1.94fc0e82f96a5p-719,
     0.0, 0x1.795da2932e74ep-962, 0x1.ae482289b6ac1p-869, 0x1.c092219d5d79ap-116, 0.0,
     0x1.9fe3b9072999ep-675, 0x1.59e0c1d5ce50fp-624, 0.0, 0x1.56eed1fa0cd2cp-655,
     0x1.d7cfc108a1e98p-367, 0x1.e0699396c2a34p-474, 0x1.0afcc9d7bc386p-54,
     0x1.4080c5cfa3638p-381, 0.0, 0x1.e461ee19df1b9p-559, 0.0, 0x1.e0e74ba207f7ep-387,
     0x1.9095544228f95p-41, 0.0, 0.0, 0.0, 0x1.261c6b26e9bebp-902,
     0x1.6a423554410c4p-764, 0x1.daecde66120b6p-951, 0.0, 0.0, 0.0,
     0x1.e2b06291eb7d1p-482, 0.0, 0x1.90c9ba1f30918p-182, 0x1.28028cc43da1p-528,
     0x1.b3b8d1903f5bp-463, 0.0, 0x1.b29fcccd8ba52p-652, 0.0, 0.0,
     0x1.e7d09c2e4e688p-452, 0.0, 0x1.bde1c080df7c1p-478, 0x1.f13113d9cbc8ep-222,
     0x1.4f11cc6f54babp-645, 0.0, 0.0, 0x1.bae0b91bb0813p-898, 0.0, 0.0, 0.0,
     0x1.0b35cbe195608p-1001, 0.0, 0x1.52c95f24e8cb9p-696, 0.0, 0.0, 0.0,
     0x1.20bcf8084b44fp-153, 0x1.7294c1e47e98fp-129, 0.0, 0.0, 0x1.84b52ed263117p-14,
     0x1.8e5a54bcbfffep-252, 0x1.cc9ba6dda0cc3p-111, 0x1.26d7af99e305fp-439, 0.0, 0.0,
     0x1.aa562becdbbf8p-507, 0.0, 0x1.92688865880ccp-227, 0x1.2d863b04b41bap-937, 0.0,
     0.0, 0.0, 0x1.a9d94cd3e32b8p-380, 0.0, 0x1.de352bfa97476p-595,
     0x1.f65f593d5236ep-761, 0x1.efe448ac51c57p-486, 0x1.90480e88c8119p-20,
     0x1.99a22b856a7f5p-992, 0x1.a77e9b7f36c52p-841, 0.0, 0x1.02a0c1f393df4p-205,
     0x1.703efa0812eafp-727, 0.0, 0.0, 0.0, 0.0, 0x1.9eba15a583d43p-108,
     0x1.f37ca1196900fp-796, 0x1.cbd2894c4984cp-742, 0.0, 0.0, 0.0, 0.0,
     0x1.12936639bcce7p-797, 0.0, 0x1.b2b886c8b3f8fp-539, 0x1.37368601f7005p-281, 0.0,
     0x1.98a250f058e77p-1018, 0x1.8183c158b0c79p-182, 0.0, 0.0, 0.0, 0.0,
     0x1.47c8f512a958ep-458, 0x1.8b213591d40d1p-541, 0x1.4854dc3738a31p-125,
     0x1.c5236b8937599p-535, 0.0, 0.0, 0.0, 0.0, 0x1.3ada6f787413ep-585,
     0x1.cc9dbaf276751p-655, 0x1.3b3283abdd5c9p-800, 0x1.b54f289c11886p-530, 0.0, 0.0,
     0.0, 0.0, 0x1.2720c43b29db7p-90, 0.0, 0.0, 0.0, 0x1.0ede59777071ep-322,
     0x1.b666a60130684p-273, 0.0, 0.0, 0x1.eef430391f11bp-296, 0.0, 0.0, 0.0,
     0x1.4d06b156d50a6p-586, 0x1.2743a87593577p-329, 0.0, 0x1.2089a1047c47bp-598, 0.0,
     0x1.af11aef60a3f9p-592, 0x1.197f10068cf08p-25, 0x1.976c40c933e09p-273,
     0x1.8b9eb2a5ca124p-448, 0.0, 0x1.e80a2b366c072p-321, 0.0, 0x1.8261433d8aca8p-483,
     0x1.5355b833a0e4ap-706, 0.0, 0x1.814903e93d5cbp-171, 0x1.d1b0e367345cdp-764,
     0x1.8a832c3d4d0ap-207, 0.0, 0.0, 0x1.fb6212accc71ap-423, 0x1.f89498d1b15e9p-264,
     0x1.acf5a05493c12p-687, 0x1.2e1b8e66f15c9p-399, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0525de076dd67p-347, 0.0, 0x1.932bfdc480306p-9, 0.0, 0.0,
     0.0, 0x1.df915a4ce2a6fp-502, 0x1.edbb50c5d927ap-812, 0.0,
     0x1.45e6596129d55p-1021, 0.0, 0x1.c67c04e49c238p-391, 0x1.5fbac6ef95b73p-519,
     0.0, 0.0, 0.0, 0x1.4263258a9876fp-667, 0x1.4cedcbcd70deap-668, 0.0, 0.0,
     0x1.0471146ad8251p-440, 0.0, 0.0, 0.0, 0x1.b191377a4299cp-1019, 0.0,
     0x1.298f8618f98e5p-116, 0.0, 0x1.8cef0a3470ba3p-963, 0x1.c8dde472e3c2cp-844,
     0x1.c2316b6e578f2p-762, 0.0, 0x1.2480b0bf349fap-779, 0.0, 0.0, 0.0,
     0x1.9b5644a5e2218p-11, 0.0, 0.0, 0x1.538a90a8c9f82p-749, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6fa7fc29e7814p-430, 0x1.a44b3aa7c7b3p-138, 0.0, 0x1.c8b46ddc16629p-254, 0.0,
     0x1.3bb27eda24f4dp-929, 0.0, 0x1.6de8397b2a3dbp-203, 0.0, 0x1.a8f17e40c1752p-952,
     0x1.c187df3346b1fp-384, 0.0, 0x1.8a996283755acp-249, 0x1.e24b02cb02a6ap-264,
     0x1.ba9b8d39ec992p-8, 0x1.b9093e9ce97edp-319, 0.0, 0.0, 0x1.25b3cf00dffe6p-154,
     0x1.b29b55e202dfbp-348, 0.0, 0.0, 0.0, 0.0, 0x1.c8172e5b0196fp-2, 0.0,
     0x1.058a0081636e7p-603, 0x1.5e771f6c43eaep-225, 0x1.6d1fd56b75be5p-326,
     0x1.0d3d57367f5a5p-466, 0x1.b72ae740a42aap-253, 0.0, 0x1.3caa6cbc80a9bp-871, 0.0,
     0.0, 0x1.5f1e9338884d5p-323, 0x1.3e6daa5028efap-429, 0x1.987537dbedbffp-81, 0.0,
     0.0, 0x1.10847fd112b82p-923, 0.0, 0x1.de023ecdd893bp-919, 0.0,
     0x1.934f3655886adp-187, 0x1.aaa074a34c37ep-616, 0.0, 0x1.9658abbc800ebp-52, 0.0,
     0x1.160a9000cf111p-738, 0x1.5d8c3dba9efc5p-329, 0x1.434ee838ab6f6p-597,
     0x1.ca3e6c8760ea9p-556, 0.0, 0x1.d9a4d329a3d6ap-728, 0x1.5c79c4390b9e8p-199, 0.0,
     0.0, 0.0, 0x1.e236a95e27fa1p-544, 0.0, 0.0, 0.0, 0x1.8301a0690dd2dp-250,
     0x1.48b92b1cea07bp-877, 0.0, 0.0, 0x1.b624d1db9e6dep-873, 0.0, 0.0, 0.0,
     0x1.65025093619d3p-92, 0x1.434415136f235p-244, 0.0, 0x1.c337281cf904bp-35, 0.0,
     0x1.e5f621c37d74cp-481, 0x1.d86d850323802p-933, 0x1.75f4c520b7375p-170, 0.0, 0.0,
     0.0, 0x1.76428a9aadfa4p-518, 0.0, 0x1.0e26e49f46871p-708, 0x1.3f79a7d3613c3p-985,
     0.0, 0x1.ac1609ceade6fp-416, 0x1.f273b64216b54p-16, 0x1.a42d9390d7235p-689, 0.0,
     0x1.d27dedc50b826p-721, 0x1.73db8f112f7cp-43, 0x1.7e090d71093cap-291, 0.0, 0.0,
     0.0, 0x1.7aa4b71194e87p-1016, 0x1.c38c53debe3dfp-528, 0.0,
     0x1.5b8a13b1fcda5p-970, 0x1.7a62b9518f799p-227, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4581194eee73p-292, 0.0, 0x1.e993cca98dc3ep-562, 0.0, 0.0, 0.0, 0.0,
     0x1.f5b90444fdf7p-480, 0x1.0b62c67c9ecbbp-954, 0x1.9601f6e3e2937p-252,
     0x1.251149bcf38fep-922, 0.0, 0x1.c6b05df35422fp-1003, 0x1.aa2b872435833p-1016,
     0.0, 0x1.fdbaa63afaa3ap-630, 0.0, 0x1.71503f68c5c3dp-627, 0x1.974f89cf5fdfcp-654,
     0x1.7a48145fc8d99p-960, 0.0, 0.0, 0.0, 0.0, 0x1.7f011d98fa48p-172, 0.0, 0.0, 0.0,
     0x1.aacf3f1479bb1p-336, 0.0, 0x1.32a57b887d8f1p-584, 0x1.0ac6d94b61376p-699,
     0x1.5f2b595faf47dp-537, 0x1.488fe2fcfc741p-515, 0.0, 0x1.05b3586445ffbp-952,
     0x1.79487acc50403p-105, 0x1.fef621b5c76c7p-876, 0x1.a462760677e95p-918,
     0x1.da9e24b587759p-910, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d0b1a77ecbfe6p-176, 0.0, 0x1.9ce87c8b09c21p-372, 0.0, 0.0, 0.0,
     0x1.96413129db6ecp-442, 0x1.3e2fdad3f16edp-266, 0.0, 0.0, 0x1.02026665201b6p-98,
     0.0, 0.0, 0x1.09a3149ea43dbp-969, 0.0, 0.0, 0x1.c466ee43fb2fap-1015, 0.0,
     0x1.56588fc6e33b5p-857, 0.0, 0x1.4c04b1c53cbabp-351, 0x1.f3187b916149ep-899, 0.0,
     0x1.af87d011344a8p-173, 0x1.a7454cef0d018p-870, 0x1.1dec8c05d3fp-336, 0.0,
     0x1.6a517619c7241p-117, 0.0, 0x1.65d1f7e52dea5p-801, 0x1.f8354fdbb4688p-161, 0.0,
     0.0, 0x1.24c6e2229d928p-575, 0x1.4defded22b857p-204, 0.0, 0x1.d500b5ec05d25p-899,
     0.0, 0x1.89991d1e677d2p-673, 0.0, 0x1.15d2724ec9992p-582, 0x1.b029962292174p-386,
     0.0, 0x1.207e065cf268p-788, 0.0, 0.0, 0.0, 0.0, 0x1.d0c36849ee60ep-499, 0.0,
     0x1.4f4925bd1f7f4p-516, 0.0, 0.0, 0.0, 0x1.391eaa6e21c9dp-384,
     0x1.a2b65aa578fc9p-531, 0x1.4ffbdea2aa045p-829, 0.0, 0.0, 0.0, 0.0,
     0x1.46e38a01c5342p-546, 0x1.2c4ec4f9ce61ep-198, 0.0, 0.0, 0x1.3d9970a5db1d9p-452,
     0.0, 0x1.25754a5dcb72dp-631, 0x1.2fe4bc4205dd2p-376, 0x1.a506dfab72f92p-167, 0.0,
     0.0, 0x1.54cac0dbc6812p-771, 0x1.bc230091c9be1p-602, 0x1.06e4275c119a2p-287, 0.0,
     0x1.e3051423ffcbep-313, 0.0, 0x1.53eff6d8a9173p-47, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.173182c64a205p-520, 0x1.940578f548c14p-137, 0x1.f7f99595a5651p-314,
     0x1.ce9361bb1fb89p-683, 0.0, 0x1.5a2a0c5bac9bfp-142, 0.0, 0x1.3911c10fb32cfp-836,
     0x1.c52482e369785p-736, 0.0, 0x1.c8f78e5cbbc9fp-376, 0x1.6bb5449e6d8f3p-656,
     0x1.92e126ce9355cp-580, 0x1.4bf97849ba49dp-492, 0.0, 0x1.fd4bebd0ee04ap-424, 0.0,
     0.0, 0.0, 0.0, 0x1.00ccca9e59abbp-5, 0.0, 0x1.ecea1f6bf7e31p-347, 0.0, 0.0, 0.0,
     0x1.385fb690726c9p-577, 0x1.77145662375b6p-334, 0.0, 0.0, 0x1.ad1edc6a98d57p-852,
     0x1.89733321225a9p-789, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f31e68549146p-703,
     0.0, 0.0, 0x1.27fee11005404p-799, 0x1.411da7b1f7318p-98, 0.0, 0.0, 0.0, 0.0,
     0x1.728e5093ad7bep-755, 0x1.decf02c245547p-416, 0.0, 0.0, 0.0, 0.0,
     0x1.eb20f5f7b5e5ap-475, 0x1.2376e69f7176ep-746, 0x1.b6bf685c9a6dep-886,
     0x1.c3ca49d761facp-311, 0x1.a4186a83b1f74p-352, 0x1.a67ee21a060f6p-912, 0.0, 0.0,
     0.0, 0x1.1dd5fd6e0c50ap-576, 0.0, 0x1.34f2e60150f96p-435, 0x1.0ecea3137c831p-799,
     0.0, 0.0, 0x1.a7277a7c8603p-816, 0x1.0a3766cb3e0a2p-318, 0.0,
     0x1.e6187a7649879p-143, 0x1.1eaedb8dc1af4p-468, 0x1.d038f4b209739p-312, 0.0, 0.0,
     0x1.80ea13f7d7a6dp-456, 0x1.95ea520d32c98p-883, 0x1.1c31bedb672ep-769,
     0x1.1e6e8a76d5abep-474, 0x1.f3488395b4a2ep-362, 0.0, 0x1.26a9bdc5c814dp-174, 0.0,
     0x1.4d0cf7fec143cp-157, 0.0, 0.0, 0.0, 0x1.672e4307aebffp-77, 0.0,
     0x1.e84cbea2e92eep-295, 0x1.1e116ed175afap-423, 0.0, 0x1.4540308001909p-841,
     0x1.34710c562194fp-814, 0x1.a06defb8e595dp-828, 0x1.67d0253f92699p-103,
     0x1.1bef8cd16d5b2p-799, 0.0, 0.0, 0x1.5f38fc82e1df3p-853, 0.0,
     0x1.f86cf0e06649p-380, 0.0, 0x1p0, 0x1.eaa68a855f70ep-472, 0.0, 0.0,
     0x1.49fc35e5c0f92p-674, 0.0, 0x1.890b1710367dbp-277, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b1bbfde705d3cp-353, 0.0, 0.0, 0.0, 0x1.c11a0d516b225p-680, 0.0,
     0x1.48c11e51afb81p-349, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1a972856cfddp-37,
     0x1.2e896b5c0339p-112, 0.0, 0x1.e3624a0928f37p-656, 0x1.0e68a98cd34ffp-844,
     0x1.bb8b86d0ae96cp-580, 0x1.0c91dfb1629cep-1013, 0x1.f0295958345f3p-300, 0.0,
     0x1.fe8b826f4d707p-645, 0x1.e96f75f983819p-296, 0.0, 0x1.b960c91174905p-445, 0.0,
     0.0, 0.0, 0.0, 0x1.c02463c9e396p-466, 0.0, 0x1.6deaae41f20d9p-671, 0.0,
     0x1.fe07a7705d602p-601, 0x1.d75ddbf55c6dap-454, 0.0, 0.0, 0.0,
     0x1.6f1a3819e960dp-547, 0.0, 0x1.d6912467a7621p-433, 0x1.dd0c62ad9f9e9p-859,
     0x1.b826cf8926fb5p-146, 0.0, 0x1.16ccd022bc8dfp-976, 0x1.1526f88418d26p-843,
     0x1.525f345b4a109p-320, 0x1.0470c7bbeebd8p-363, 0.0, 0.0, 0.0,
     0x1.24cbbffa2aacfp-989, 0.0, 0.0, 0x1.fd5230892f5ffp-752,
     0x1.945d38fd5c9e9p-1014, 0.0, 0.0, 0x1.f1a192cd29691p-447,
     0x1.2195d03d4c062p-495, 0x1.42dd0bc2736bap-808, 0x1.f0e4c38cf0c8bp-643,
     0x1.abe380269b63dp-489, 0.0, 0x1.9016e1a194812p-825, 0x1.b3df760814b6ap-105, 0.0,
     0.0, 0x1.87d6352380e7bp-682, 0.0, 0.0, 0.0, 0x1.706a9b866b649p-474,
     0x1.2c637a6ca671dp-619, 0x1.e2a413c01d975p-911, 0x1.24e1818cc4885p-187, 0.0,
     0x1.c23547bc7fee3p-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bacd6b60988e4p-3, 0.0, 0.0,
     0.0, 0x1.08c7995b8694ap-402, 0.0, 0x1.d13e046cf8129p-912, 0.0,
     0x1.63c540720f187p-734, 0.0, 0.0, 0.0, 0.0, 0x1.86a391e4cf01p-1012,
     0x1.b2786257aca55p-104, 0.0, 0.0, 0.0, 0.0, 0x1.4ac1503900abbp-725, 0.0,
     0x1.36df39aab246ap-265, 0x1.972ad6ac79b6fp-533, 0.0, 0x1.cd620c899ec02p-669, 0.0,
     0.0, 0.0, 0.0, 0x1.c3bc15d50cb1cp-45, 0.0, 0x1.dd9ec839d1698p-82,
     0x1.f6fe544971a2ap-37, 0x1.77ed2aac7c63bp-924, 0.0, 0.0, 0.0, 0.0,
     0x1.3fd878f7a7b24p-775, 0x1.53a9f12bbe915p-220, 0.0, 0.0, 0x1.0b90c1f0c9c2fp-752,
     0x1.e59cdaf49ad4dp-836, 0.0, 0.0, 0x1.4791ec1113738p-13, 0x1.30ea9616ec4eap-321,
     0x1.c3c61a8dc59d6p-880, 0x1.1c6afcdbcd419p-763, 0.0, 0x1.b7657454317cep-395,
     0x1.48b405ea3d064p-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a906cfc7ac1ap-419,
     0x1.2dd78d5bed17ap-306, 0.0, 0x1.cb35c2efc0cc2p-617, 0.0, 0.0, 0.0,
     0x1.5d2cafdc5722cp-247, 0x1.925781bef3badp-351, 0.0, 0.0, 0x1.fb2b170e3a8ffp-476,
     0x1.529c1f444ac48p-1002, 0x1.be7c730f143dep-453, 0x1.617b1c1ebe069p-546, 0.0,
     0x1.0bc038c736e6ep-120, 0x1.0218ca338fa51p-600, 0x1.6544c4b6f2113p-938, 0.0,
     0x1.c67aa2a4b62p-703, 0.0, 0x1.db8eed357267dp-67, 0.0, 0.0,
     0x1.b940c39918263p-582, 0.0, 0.0, 0x1.24027ea4f471ep-126, 0.0,
     0x1.064dda8181aep-148, 0.0, 0.0, 0x1.9d2c225738164p-376, 0.0, 0.0,
     0x1.d0974968c1f8fp-799, 0x1.1fd6954d866f1p-352, 0.0, 0.0, 0.0,
     0x1.426a89c94bdccp-185, 0x1.0fe5ff84332e2p-261, 0x1.e742f055b8594p-197, 0.0, 0.0,
     0.0, 0.0, 0x1.be89b837655bap-719, 0.0, 0x1.5a7a78b475a04p-860, 0.0, 0.0,
     0x1.e69ae1288cfb3p-838, 0.0, 0.0, 0x1.fcd0162bf28fep-13, 0x1.53c8027ea6815p-421,
     0x1.2343b59b15e56p-773, 0.0, 0x1.cc331645ccedp-195, 0.0, 0x1.cef64f542655ap-249,
     0.0, 0x1.e5e36a6bd3ad3p-134, 0x1.1f5eecb116b4dp-841, 0x1.4e591ecbbf7ddp-285,
     0x1.15e8046a91ecep-429, 0x1.31789a1ad044p-534, 0.0, 0.0, 0.0, 0.0,
     0x1.e9a7cbc8ec748p-78, 0.0, 0.0, 0x1.323ae7d99e4cfp-264, 0x1.a4aceb0cc3f3bp-317,
     0.0, 0.0, 0x1.f5239144260b4p-172, 0.0, 0x1.fc3c26c49e95ap-363, 0.0, 0.0, 0.0,
     0x1.2526d77ee7dd7p-803, 0.0, 0x1.0f6054a25ba69p-746, 0.0, 0x1.203b963b7b29fp-500,
     0x1.f70442cb1598bp-748, 0x1.08ec7c5d3c669p-540, 0x1.f539b3fc80449p-733,
     0x1.2b83fd481019fp-265, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91723daf0e317p-121,
     0x1.70a9ba026d07ap-792, 0x1.957986260b39bp-154, 0.0, 0x1.d436c94864ad6p-17,
     0x1.b3ff10824dca8p-606, 0.0, 0x1.f0a06a97d5409p-231, 0.0, 0x1.f7866220c1c8ep-677,
     0x1.3bdedf8e81cbbp-691, 0x1.70f80140696b6p-424, 0.0, 0x1.c27965b875156p-454,
     0x1.d43581aeb1c63p-571, 0.0, 0x1.ce651016df7d7p-994, 0.0, 0.0, 0.0, 0.0,
     0x1.aa8096dc7b5bap-895, 0x1.f887544e8f0d8p-171, 0x1.9a0b0d060a30ep-90,
     0x1.e3bc0e022e9e8p-779, 0x1.9a4e3d3020948p-500, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b7b5dadea01dp-570, 0x1.d86ce9d392d3fp-610, 0.0, 0.0, 0.0,
     0x1.994b3c828b27dp-383, 0.0, 0x1.b28b10411096ep-377, 0.0, 0x1.01f9be14af11fp-518,
     0.0, 0x1.48c305f332b9cp-467, 0.0, 0x1.efd1d60b0bb42p-967, 0.0,
     0x1.7bb19ba6c8b1dp-214, 0.0, 0.0, 0x1.953fa2d016a95p-369, 0.0,
     0x1.bce10c259bb67p-431, 0.0, 0.0, 0x1.bce6583e3568cp-310, 0x1.e6ca5a816b91cp-281,
     0.0, 0x1.71cbd5a40c955p-527, 0.0, 0x1.27aae8ce3d02ep-421, 0x1.8a35b00efbb39p-64,
     0x1.d2c9ed2f47b12p-540, 0x1.9a73521ea0fd4p-84
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
            tmp1 = Sleef_truncd1_purecfma(tmp0);
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
    printf("Sleef_truncd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_truncd1_purecfma bench acc %la\n", global_bench_acc);
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
