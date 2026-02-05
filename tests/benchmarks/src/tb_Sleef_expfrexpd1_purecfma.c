/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expfrexpd1_purecfma.c --function \
 *     Sleef_expfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.bb22cba86cc93p-22, 0.0, 0.0, 0.0, 0x1.d0dcb9fd3ef69p-698,
     0x1.250d7765ce87fp-932, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2eb50e80de477p-321, 0.0,
     0x1.17acbc22c6d6fp-799, 0.0, 0.0, 0x1.a282901a22a0dp-103, 0.0,
     0x1.b33ce25ed2d0cp-759, 0x1.6b16694c11354p-314, 0x1.7cf0501ca7d2ap-903, 0.0, 0.0,
     0x1.62d051bb30f76p-813, 0x1.24abc919b5d6fp-342, 0.0, 0x1.4b7c14a4cad24p-270, 0.0,
     0.0, 0x1.757ef5bd04361p-444, 0.0, 0.0, 0.0, 0x1.8cc89a2005f4ep-402,
     0x1.5e2dae19bd845p-1015, 0x1.d468e91c0f903p-852, 0x1.b4e2ab2d555edp-688,
     0x1.f732d15f08141p-738, 0.0, 0.0, 0x1.cf6ea696b971ep-954, 0x1.f7f8a88e6c00bp-914,
     0.0, 0x1.02ee9a30e2883p-236, 0.0, 0x1.341c361c96bedp-21, 0x1.22a8d013c06f2p-707,
     0x1.698a524eb4c16p-223, 0.0, 0x1.dd160d6aad0f8p-741, 0x1.5256de7dd5176p-220,
     0x1.c0dc2b93774d2p-821, 0x1.9961c9beb8058p-855, 0x1.1ce82b3fb3a3cp-461, 0.0,
     0x1.d82b59f4a7d0cp-660, 0.0, 0.0, 0x1.ed6483c0c8785p-455, 0.0,
     0x1.b736e5bfd12dcp-97, 0x1.9093abb8b6242p-138, 0.0, 0.0, 0x1.cb5071d03a38bp-433,
     0.0, 0x1.cad3727e3bc0cp-601, 0.0, 0.0, 0.0, 0x1.9e4596e11179cp-617, 0.0, 0.0,
     0.0, 0x1.5b8572ba92192p-156, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3eb39d7937913p-570,
     0x1.2452d2fc4e826p-34, 0x1.91f546ca28227p-534, 0x1.4344331ad2808p-930, 0.0,
     0x1.1337fba804f89p-13, 0.0, 0x1.b3a7832cf662ep-725, 0.0, 0.0,
     0x1.ddd9fc6a11fdep-781, 0x1.4cfbeceae0dd6p-457, 0.0, 0.0, 0.0,
     0x1.b3805e3a531fap-732, 0.0, 0.0, 0.0, 0x1.15e9471aa504fp-200, 0.0, 0.0, 0.0,
     0x1.48827a839a9d8p-327, 0x1.e3594482bcb3p-996, 0.0, 0x1.169a3da622283p-197,
     0x1.9c2f4e26baed3p-452, 0.0, 0x1.99e6031863ac2p-705, 0x1.b7424b6e405adp-295,
     0x1.865a62e82a0c7p-403, 0.0, 0x1.bafa089d1128fp-21, 0x1.782868309eea7p-427,
     0x1.6bfcd913ea1d7p-45, 0.0, 0x1.6c3b6b69eb81ap-5, 0x1.13bedad690dbfp-910, 0.0,
     0x1.07b5d374e62c5p-684, 0.0, 0x1.1809c63a3d4c4p-16, 0x1.8fefa562f6fedp-439, 0.0,
     0x1.6343d5ec3b9efp-607, 0x1.6ada91e16a7ddp-766, 0x1.e06ffe6b6c69cp-500,
     0x1.64390ca773907p-465, 0x1.c869113669c77p-983, 0.0, 0.0, 0x1.b827a83e387ffp-624,
     0.0, 0x1.79e0f9a7cf7cp-135, 0x1.fd662afc1ba8fp-37, 0.0, 0.0,
     0x1.be8e4b8cd2f3ap-619, 0.0, 0.0, 0x1.b4fbb44c3637cp-617, 0.0,
     0x1.28814a5fb77fbp-341, 0x1.8339feb030cd4p-909, 0.0, 0.0, 0x1.5ca0a0f4d18f1p-362,
     0.0, 0.0, 0x1.7a80b16029badp-606, 0x1.afdddd9220543p-450, 0x1.059374558dfebp-922,
     0.0, 0.0, 0.0, 0x1.5df45bc9a99b4p-1014, 0x1.5eb50f14cf41fp-982, 0.0,
     0x1.452db7aa9cd76p-916, 0x1.6adfc12175db8p-590, 0x1.53d2dbadc7266p-296, 0.0, 0.0,
     0.0, 0x1.bb6445cde129cp-857, 0x1.b58fa8fd9a594p-669, 0x1.61966494bfd54p-668,
     0x1.f86746be88abap-628, 0x1.37e8a74ff030bp-87, 0x1.cbcfeb53b609cp-480, 0.0, 0.0,
     0x1.b76dd628b26d4p-278, 0.0, 0.0, 0.0, 0.0, 0x1.f1eb526d292f5p-805,
     0x1.3cb31d8f84222p-650, 0.0, 0.0, 0x1.1f5319673318cp-245, 0.0, 0.0,
     0x1.00c4c5cbc7399p-274, 0x1.c9f3adf6dc357p-197, 0x1.9725ea306402dp-554,
     0x1.3f72f0b04f76ap-841, 0.0, 0x1.2c998f20f9b52p-663, 0x1.726b774a93875p-354, 0.0,
     0x1.d9fb5fd9daaeap-636, 0x1.84adc6e5e6f13p-918, 0.0, 0.0, 0x1.0deef921db9ddp-859,
     0x1.d87035f5fa5f8p-652, 0.0, 0x1.f241d94ec5306p-463, 0.0, 0x1.a61297b766e63p-503,
     0.0, 0x1.698ce0056c313p-698, 0.0, 0.0, 0.0, 0x1.345d6ea6f07c7p-234, 0.0, 0.0,
     0.0, 0x1.3fa368d36b843p-973, 0x1.455614eade44p-853, 0.0, 0x1.588443561b86p-505,
     0x1.94c1f70bf0e22p-575, 0.0, 0.0, 0x1.7c8d7a416f972p-737, 0x1.0a50847f91428p-958,
     0.0, 0x1.96b376362f541p-794, 0x1.0307ac490654fp-822, 0.0, 0.0, 0.0, 0.0,
     0x1.44bdda56c40c9p-779, 0.0, 0x1.e0c85532024aap-76, 0x1.c96dc4489283ap-49, 0.0,
     0.0, 0.0, 0x1.6f8ee1a6fbb2ap-418, 0.0, 0.0, 0.0, 0x1.d5b15bb87e30ep-350, 0.0,
     0.0, 0.0, 0x1.667950efe1cc8p-86, 0.0, 0.0, 0x1.bb0d6b712d64ep-432, 0.0, 0.0,
     0x1.3f7a1efe044a1p-244, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a466857b63f98p-370, 0.0, 0x1.346c236df3a99p-998, 0x1.7ca6c1641c899p-345,
     0x1.ba5958cd67c1fp-105, 0x1.d641d772e8131p-842, 0.0, 0.0, 0.0,
     0x1.a2d877fa4f892p-955, 0x1.9b37fb0774ab1p-433, 0.0, 0.0, 0.0, 0.0,
     0x1.98d88610703e4p-99, 0x1.307acbf0e43ebp-523, 0.0, 0x1.977a494fc1b9dp-792, 0.0,
     0.0, 0.0, 0x1.44f11e65719fdp-80, 0.0, 0.0, 0x1.70aadfeef88aap-763,
     0x1.1905a3633c43bp-1006, 0.0, 0x1.0223192a95d24p-1015, 0.0,
     0x1.2db8efe6cafcdp-702, 0.0, 0x1.b99e5272e6d6ep-374, 0.0, 0.0,
     0x1.74fce25e61b79p-923, 0.0, 0x1.0b803a798781ep-606, 0x1.3fba63b42e3e9p-688, 0.0,
     0x1.36492e99eca5ep-920, 0x1.3bb875c1341b3p-470, 0x1.653fa6efc5f1cp-906, 0.0, 0.0,
     0.0, 0x1.e006c271240a9p-671, 0x1.ba500fffe05dep-3, 0.0, 0.0,
     0x1.ca825d4d0d7d9p-65, 0x1.cf31dbb01d5f8p-11, 0x1.902d1562b61a6p-280, 0.0,
     0x1.7060d6d3a489p-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10dd4d1f3a0a7p-261, 0.0,
     0x1.a9895c3cfd585p-983, 0.0, 0x1.6e69933a3909ap-28, 0.0, 0x1.2960b8f431ed5p-392,
     0x1.90cdc28381b47p-84, 0x1.745b6bcb85976p-390, 0x1.597d5de88a377p-278,
     0x1.209deca985583p-951, 0.0, 0x1.924119d0dab4p-524, 0x1.8d12e21fd663ep-302, 0.0,
     0x1.21efecbdd0b26p-457, 0.0, 0x1.fc43eda09f3b1p-10, 0x1.c0b9dfc8f2e7cp-198,
     0x1.d6c4266830ff5p-866, 0.0, 0.0, 0x1.09e345d0d6164p-556, 0.0,
     0x1.3f89d76df5343p-93, 0.0, 0.0, 0.0, 0.0, 0x1.7ece2e10425a7p-531, 0.0,
     0x1.49bb5c4d25505p-546, 0.0, 0.0, 0.0, 0.0, 0x1.461d533afcfacp-729, 0.0, 0.0,
     0x1.fa5c4e2445f26p-728, 0.0, 0x1.f8c775a7bea49p-817, 0.0, 0.0,
     0x1.1357ce9e32ffep-697, 0.0, 0x1.8576a0077e21ep-717, 0x1.645469961472ep-842,
     0x1.bc01b7a59f3e3p-386, 0.0, 0x1.f046257e96d77p-326, 0x1.37f6b2bd368fdp-469,
     0x1.2d1c92bf6df0bp-457, 0x1.8f8393162e49ap-839, 0.0, 0.0, 0.0, 0.0,
     0x1.8570a1632a447p-830, 0x1.c02b6192e846dp-633, 0.0, 0.0, 0x1.0f73a0289e004p-888,
     0.0, 0.0, 0.0, 0x1.c33b7770a33a5p-682, 0x1.83eee7f6885a5p-534,
     0x1.232f16dc55c4cp-23, 0.0, 0x1.32a63222cc464p-324, 0.0, 0x1.d2889a58afca9p-157,
     0x1.27432e9236c82p-370, 0.0, 0x1.bd977496be746p-23, 0x1.f5d7f908d3f18p-957, 0.0,
     0.0, 0x1.c5aeedb7d577fp-528, 0x1.10eb5f7a08268p-129, 0x1.5869c5d9570eep-390, 0.0,
     0x1.763818b784b45p-108, 0.0, 0x1.31fc29e25dabap-355, 0.0, 0x1.31b75969a2e4bp-154,
     0.0, 0.0, 0x1.a602769cd9745p-29, 0.0, 0.0, 0.0, 0x1.96568510e01b2p-666,
     0x1.b60020c565555p-600, 0x1.4db18cfd9c54p-304, 0x1.50766cb67bb72p-412,
     0x1.b64725151fdcep-232, 0.0, 0.0, 0x1.be0e4fc50ffefp-845, 0.0,
     0x1.8172de293021cp-351, 0.0, 0x1.abd491f51cd04p-693, 0.0, 0x1.53b96dc9e8415p-891,
     0.0, 0x1.dbf67b71bb73dp-668, 0x1.b1c4181a281adp-371, 0x1.216a19c076cefp-670,
     0x1.55bb77c04d0b1p-844, 0x1.577ed522552cep-208, 0.0, 0.0, 0.0,
     0x1.fb7ac9e4a0eep-1006, 0.0, 0x1.1cf6f6e78aa46p-59, 0.0, 0.0,
     0x1.0928d70c079f1p-562, 0x1.a438e527658d5p-284, 0.0, 0.0, 0.0, 0.0,
     0x1.a2cb63018ecp-988, 0.0, 0x1.87952f8572d2ep-890, 0x1.83b144a68f3b1p-231,
     0x1.2a1a2af8f6c7p-516, 0.0, 0x1.c85686010e9d9p-893, 0.0, 0x1.39ceeeb5a1cc1p-882,
     0x1.016b6ce9b53dep-258, 0.0, 0x1.52ee1d541a74ep-201, 0x1.454f636643546p-234,
     0x1.11654438e06f6p-961, 0.0, 0.0, 0.0, 0.0, 0x1.6fbd7cebd79a1p-18,
     0x1.12d417dc6742cp-475, 0.0, 0x1.cd69d11420589p-365, 0.0, 0.0,
     0x1.44ef5b81a5fadp-972, 0.0, 0.0, 0x1.4352d08e09581p-310, 0x1.3dfd7b9d0446dp-316,
     0x1.7febbb750184fp-992, 0.0, 0x1.2f215fb77533bp-919, 0x1.3a1dad2602797p-738, 0.0,
     0x1.285d937115f35p-746, 0x1.570841cf9bfa8p-912, 0.0, 0x1.900ef2ba25b03p-813, 0.0,
     0x1.35f0b89168aa6p-609, 0x1.66ee50b5d030ap-161, 0.0, 0x1.b0d6c19ad932dp-702, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc3373a1d2143p-923, 0.0, 0.0, 0.0,
     0x1.c98d8e400482ap-236, 0.0, 0x1.5fdb291d1e176p-270, 0x1.e2f34cfcfb185p-48,
     0x1.e80324b433b26p-27, 0.0, 0.0, 0x1.1ff4366f4a631p-443, 0x1.38c2908db11cfp-777,
     0x1.c38b83a584225p-483, 0x1.718dbf81e46bcp-418, 0x1.6fae168de2112p-474, 0.0,
     0x1.70402cec3f6edp-195, 0x1.22e72369320bep-454, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.56bac717baf7dp-890, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5662a933d145cp-406,
     0.0, 0x1.17d79ac42ffbp-875, 0x1.87233e476bc59p-56, 0.0, 0.0,
     0x1.ebfb7db5d7167p-683, 0.0, 0.0, 0.0, 0.0, 0x1.27ab1c8f1060bp-405,
     0x1.0de9a0fff6dcap-199, 0.0, 0x1.7f6c1af23c457p-941, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4ade315b8bb66p-63, 0x1.02e1cbaf753dap-468, 0x1.323f680e448aep-619,
     0x1.9fc321949cc78p-408, 0.0, 0x1.7de889de9e08ap-245, 0.0, 0.0,
     0x1.21f2fea26362cp-252, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f699f7b561308p-576, 0.0, 0x1.1ae21907cc8bcp-140, 0x1.c63c7a484fab8p-257,
     0x1.5a0d04341faeap-975, 0.0, 0x1.2316f53de8093p-413, 0.0, 0.0, 0.0, 0.0,
     0x1.710053b8662e4p-66, 0x1.44597cf0533adp-461, 0.0, 0.0, 0x1.ebde11d082e57p-655,
     0x1.f38d92ea99c86p-167, 0.0, 0x1.a8db3082a8c8bp-92, 0.0, 0x1.45cc5964bd701p-956,
     0x1.6ba9e6373fccep-36, 0x1.e83650c263525p-3, 0x1.7d95c9a168effp-290,
     0x1.0f19dd71393bdp-135, 0x1.d8a7eccb11e19p-638, 0x1.b24a3820f7016p-424,
     0x1.78ade69cb5fa1p-783, 0x1.15e13fa28a326p-506, 0x1.d746e29a00b27p-391,
     0x1.6b9eec03da5d1p-777, 0.0, 0.0, 0x1.764690be52c55p-623, 0x1.7592e356f384bp-950,
     0.0, 0x1.27f06ebb57b7dp-377, 0x1.f0b11b9f8105dp-970, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.bd800acecde71p-551, 0x1.4aa443e6dcb8bp-862, 0x1.53f47698757afp-780, 0.0,
     0.0, 0x1.8485d80ac488ep-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25fba2e0f7d2dp-383,
     0x1.f09672fd4b1fep-838, 0x1.a0bce1781dc52p-70, 0.0, 0x1.ac5fc498412e5p-615,
     0x1.f63490846b326p-734, 0x1.c6fdf33842d01p-991, 0x1.80bb952cb936cp-123,
     0x1.c0fbe39ff985p-685, 0.0, 0x1.a744d79d34c8dp-452, 0x1.a6b6c57315307p-354, 0.0,
     0x1.3b4f677c28d52p-642, 0x1.9c3e2be82737fp-142, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb2cedcc2ad19p-475, 0.0, 0.0, 0x1.efadc5e5fe86cp-449, 0.0,
     0x1.05a8cf248c05ep-937, 0x1.3bb44bf0002eep-314, 0.0, 0x1.0816a6c011125p-487, 0.0,
     0x1.b9f5f753466cfp-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95b432340b42cp-553, 0.0,
     0x1.6a155a0716c41p-479, 0x1.47cfb5ef64e1fp-182, 0x1.95945ec015123p-787, 0.0,
     0x1.c521071bd3688p-137, 0x1.184b4f68761cdp-338, 0x1.db8d8e3d06c47p-84,
     0x1.287cdc66f7be9p-538, 0x1.c4aa6c353f785p-15, 0x1.9d62dc07249eap-753, 0.0, 0.0,
     0.0, 0x1.faf63df92abb6p-351, 0.0, 0x1.6f684e119a016p-213, 0x1.14d3e73ee41adp-971,
     0x1.26c30fed57bc2p-221, 0x1.65f8cce75fd55p-311, 0x1.172f9b37cf812p-60,
     0x1.bbe661ebbaac9p-498, 0.0, 0.0, 0x1.7dfbb7f05a4e1p-487, 0x1.23ab837a44e78p-134,
     0.0, 0x1.031e100967ed1p-527, 0x1.840a55a107d9p-108, 0x1.3f17a1d124a12p-138,
     0x1.3f63e1e5e4b2bp-607, 0x1.dbe96c623e12ap-584, 0.0, 0x1.1059300a5fc75p-868,
     0x1.18e4e5e109a11p-851, 0.0, 0x1.a9bab0fdff831p-531, 0x1.9219c269eb011p-816,
     0x1.6f68b0a644a7dp-507, 0.0, 0x1.78fb4a91060a9p-867, 0x1.17f5e236d411ap-410, 0.0,
     0.0, 0.0, 0.0, 0x1.ed58b425a3586p-793, 0x1.dd8714efad433p-990, 0.0,
     0x1.e1d6f387b5db4p-414, 0x1.b019e10a11cd8p-379, 0x1.405196b31b879p-259, 0.0,
     0x1.fc619d4780449p-347, 0.0, 0x1.cfe13ac996903p-618, 0.0, 0x1.27a136ca2b916p-924,
     0.0, 0.0, 0x1.94d4d04eb7fb7p-56, 0x1.e87c2e888936ap-783, 0.0,
     0x1.9690a8c8c40d8p-799, 0.0, 0.0, 0.0, 0.0, 0x1.c1b1bff310bccp-295,
     0x1.108ce265772bfp-490, 0x1.0d3dedec210cdp-133, 0x1.c428dccba6d7ap-65, 0.0, 0.0,
     0x1.2c8e66102f323p-770, 0.0, 0x1.a6e8f111f329ep-707, 0.0, 0x1.c610e02dc125dp-26,
     0x1.0421797a780c8p-796, 0x1.0fc226aa8138p-584, 0x1.2667ec61735b2p-171,
     0x1.1de275fd5272ep-534, 0x1.f52dc1c902068p-117, 0x1.b6bbe0810f749p-380,
     0x1.9e052691bea9dp-557, 0x1.6ac0fa1a0b507p-783, 0x1.90f775ce65f03p-218, 0.0, 0.0,
     0x1.bdf9a8ed68aa8p-469, 0x1.361ade36938dbp-539, 0.0, 0.0, 0.0, 0.0,
     0x1.e9d2cb9739de7p-295, 0.0, 0.0, 0.0, 0.0, 0x1.966363f15f6acp-777, 0.0, 0.0,
     0.0, 0x1.9501264b611a1p-700, 0.0, 0.0, 0.0, 0x1.4f85eed15f5bbp-95,
     0x1.0ab15c4bcd11cp-318, 0x1.45ea8df39e0b5p-757, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f847dd699671p-254, 0x1.96b024a0879p-841, 0.0, 0.0, 0.0, 0.0,
     0x1.1c177f5473e98p-39, 0x1.d190a31d57fe3p-462, 0.0, 0x1.0d01aa73bced9p-93,
     0x1.9d8475c9c0585p-747, 0x1.7c9b732bbb75ap-793, 0x1.d8ff54b1a33a1p-754,
     0x1.4061d3b524073p-371, 0.0, 0x1.21bd87e2a4bbfp-890, 0x1.ec62e03b4a155p-781, 0.0,
     0x1.114e47e2d6891p-643, 0x1.9563fbdf4cd78p-251, 0x1.7d2a96872a754p-457, 0.0,
     0x1.cd0606018a501p-517, 0x1.48c6fa96f3d2bp-844, 0.0, 0.0, 0x1.aaa8a3ab70f06p-819,
     0x1.72b2e591fbafdp-313, 0x1.555bb3f1bf373p-457, 0x1.d3791124c8e76p-93, 0.0,
     0x1.4a44d91ba3cafp-735, 0.0, 0x1.9f0b354650645p-166, 0.0, 0x1.26893710d1b7ap-428,
     0.0, 0.0, 0.0, 0x1.494368f67e0d7p-1019, 0.0, 0x1.819dd09f8ac81p-78, 0.0,
     0x1.3c4b3132abb1bp-736, 0x1.a47c5ac64d71p-891, 0x1.0856ea3ff6958p-550, 0.0,
     0x1.e2fb8bd21c6a6p-949, 0.0, 0x1.7458b1a124edbp-609, 0x1.8d7ba9359c0b7p-211,
     0x1.413d802ee7766p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31f8a77c1aa3ap-269, 0.0,
     0x1.31aec7a79b5aap-224, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.09113c8cd5f57p-432, 0.0,
     0x1.4ead09965c848p-782, 0.0, 0.0, 0.0, 0x1.a39cc4d54aeffp-183, 0.0,
     0x1.c5db81fa04e9ep-246, 0x1.98dc95d3e46f1p-370, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4254836abd0fep-846, 0.0, 0.0, 0.0, 0x1.7157bbc7e6874p-796, 0.0,
     0x1.cdaa54675d30dp-909, 0.0, 0.0, 0.0, 0x1.92ca5561692bap-618,
     0x1.a7210877a4cbfp-416, 0x1.95593829a8f1cp-817, 0x1.dd5a7fadbfa08p-840, 0.0, 0.0,
     0x1.187344c7da47ap-37, 0.0, 0.0, 0.0, 0.0, 0x1.0417c3c46f737p-641,
     0x1.0ff118d5542bbp-938, 0x1.fb4df5abf6f23p-279, 0.0, 0x1.f169473a8f359p-170, 0.0,
     0x1.5f7b49efb6864p-478, 0.0, 0.0, 0.0, 0.0, 0x1.72591f940bb47p-555,
     0x1.352748fe4034ep-194, 0x1.f5eb7fe493388p-905, 0x1.ee472621e4637p-643, 0.0, 0.0,
     0x1.33dee8d5d50e9p-646, 0.0, 0x1.e2949f2b34d47p-821, 0x1.87552ac130551p-549, 0.0,
     0.0, 0x1.526ba29f25266p-377, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8556b1f2bcfc4p-505, 0x1.02594cc5300a8p-374, 0x1.ba09c6d18a3fep-577, 0.0,
     0x1.692808772b81bp-706, 0x1.3c6f9c6e707d6p-162, 0x1.8eb3be42c7f38p-21, 0.0, 0.0,
     0.0, 0.0, 0x1.44484e66a190fp-260, 0x1.e71edc66648eap-545, 0.0,
     0x1.c327399bb9d8dp-460, 0.0, 0x1.a3b94c90dbebap-646, 0.0, 0x1.085be1b97a59dp-917,
     0.0, 0x1.9aff813155216p-587, 0.0, 0.0, 0x1.2f5fe086a70adp-587, 0.0, 0.0,
     0x1.b60be73058069p-14, 0x1.dfcf64f49550ep-764, 0.0, 0x1.26fdac0307cd8p-511, 0.0,
     0x1.90e90c746b572p-829, 0.0, 0.0, 0x1.1335e3ccb2905p-872, 0.0,
     0x1.25b174d932efbp-684, 0.0, 0.0, 0x1.3557c123dc477p-409, 0x1.495837a0d855bp-423,
     0x1.df6b74949ee7dp-883, 0.0, 0x1.3c6717d08c627p-632, 0x1.8d2158f1baa7ap-37,
     0x1.f4cf2167e1c0fp-279, 0.0, 0x1.c1775c0dadb18p-628, 0.0, 0.0,
     0x1.af50990fea4aap-910, 0x1.b35c88c5f1b54p-129, 0x1.40304e8f81601p-997, 0.0,
     0x1.cabdc5893200dp-546, 0.0, 0.0, 0x1.fbd617b01302dp-327, 0x1.25ff020b5be65p-597,
     0x1.67e0db0c38d72p-18, 0x1.185bec54a7bb6p-228, 0.0, 0.0, 0.0, 0.0,
     0x1.c671d9cd7c325p-693, 0x1.3a199db8c90d1p-174, 0.0, 0.0, 0.0,
     0x1.f412ecf87c2aap-698, 0x1.3d29ae701e666p-831, 0x1.da7173405cb9cp-837,
     0x1.c26f41620f4ep-1007, 0x1.c5e25fa1cf6e9p-924, 0x1.711f0e9ba2bd6p-904,
     0x1.b9617f6772416p-185, 0.0, 0x1.02695d5a0b90cp-582, 0.0, 0x1.b877ba84261a1p-727,
     0x1.11703ab776a8ap-261, 0x1.33b423313303bp-235, 0x1.0c66566ced0dcp-661, 0.0, 0.0,
     0x1.3ec411cc6aa68p-272, 0x1.b24ab101af47cp-183, 0.0, 0.0, 0x1.f72ce97f3715ep-821,
     0x1.9ef3ddd9ae4bep-958, 0.0, 0.0, 0x1.65e7e16a39d36p-510
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = INT32_C(0);
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_expfrexpd1_purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_expfrexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expfrexpd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
