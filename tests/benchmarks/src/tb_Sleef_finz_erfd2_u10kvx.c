/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfd2_u10kvx.c --function Sleef_finz_erfd2_u10kvx \
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
     0x1.392e777837847p-885, 0.0, 0x1.3307f25939c53p-310, 0x1.f084f9559010fp-1020,
     0.0, 0x1.f7a4a7e0dcfe6p-276, 0.0, 0.0, 0x1.18f2ca4fb022cp-527,
     0x1.241b353361a17p-438, 0x1.5b1e534e47e2cp-902, 0x1.4128020512fc7p-574,
     0x1.52bb8e6c9a96ap-176, 0x1.fd0cee129cde7p-3, 0.0, 0.0, 0x1.ec6fa8b3eedabp-215,
     0.0, 0.0, 0x1.fcdfa06faa179p-754, 0x1.2ca443a21b669p-218, 0x1.ca623996917c2p-164,
     0.0, 0.0, 0x1.56985940e0cf8p-786, 0x1.564d1daa9296cp-757, 0x1.722db4d67d914p-570,
     0.0, 0x1.98c0240d827c1p-201, 0x1.729c3110b3546p-956, 0x1.a4164adf6a59bp-766,
     0x1.248a53258e054p-443, 0.0, 0x1.eb76ef1b381b6p-442, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c71fabb8822ebp-480, 0x1.e6199d4b194adp-662, 0.0, 0.0, 0x1.368d2fe02ce37p-301,
     0.0, 0.0, 0x1.d21e77b7a662ep-846, 0.0, 0.0, 0x1.4149b91dd6443p-402, 0.0, 0.0,
     0x1.2a84f9a3246d9p-635, 0.0, 0.0, 0x1.503f1a6734a4fp-930, 0.0,
     0x1.c1b3b12cf76b9p-365, 0.0, 0x1.b8e68cd094b5p-920, 0.0, 0.0, 0.0, 0.0,
     0x1.78f52eae25ecap-395, 0.0, 0x1.a02a36894b451p-114, 0.0, 0.0,
     0x1.a4d0ed8a83994p-919, 0x1.ce292e5e7d9ccp-313, 0.0, 0.0, 0x1.f34d144b0a305p-558,
     0.0, 0x1.c83aaba35b134p-976, 0.0, 0.0, 0.0, 0x1.df00904215d81p-440, 0.0, 0.0,
     0.0, 0x1.e4b652d6f1c82p-368, 0.0, 0x1.ffa2f5fb43bccp-393, 0.0,
     0x1.b57197d58961fp-313, 0.0, 0x1.89c823c743448p-154, 0.0, 0.0, 0.0,
     0x1.d7e5cadfec2b5p-825, 0x1.5a1c17070eef3p-944, 0x1.a1a2b82f2a5bfp-483,
     0x1.11bd1dcf8b0d2p-518, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbd419e66f58ap-100, 0.0,
     0x1.29195c71c968dp-697, 0.0, 0.0, 0x1.3ac759c593efap-366, 0x1.c13d61f58378dp-846,
     0x1.4b7fde298102cp-475, 0x1.f06f3dc7684c5p-540, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b85c3fabffebp-779, 0x1.be56f7feea28dp-990, 0.0, 0x1.3e32b4805c625p-349, 0.0,
     0x1.2e116f4145881p-786, 0.0, 0x1.a2e5de8cd43ddp-729, 0x1.a2a11c044d98p-229,
     0x1.1e08713c80a1dp-783, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.558a0bf62ec6ap-523, 0x1.b605b5a36da8ap-811, 0x1.278d3498a307ep-652,
     0x1.96a23215f5c2dp-791, 0.0, 0x1.c3f01b727ac4p-128, 0.0, 0x1.d21c4d7c52b59p-6,
     0.0, 0.0, 0.0, 0.0, 0x1.e7dbe32b7c686p-528, 0x1.278b04f61a616p-2,
     0x1.aa8c339881b0dp-238, 0x1.1684a38e3435fp-42, 0.0, 0.0, 0.0,
     0x1.07fe9fe39838ep-918, 0.0, 0x1.9dda37b968699p-469, 0.0, 0x1.a269f411b2e4dp-527,
     0.0, 0.0, 0x1.c18f025bee0afp-645, 0.0, 0.0, 0.0, 0.0, 0x1.aa0d5969b2b81p-892,
     0x1.225f1ff3ec82ep-795, 0x1.c340ef75fdc1fp-12, 0x1.d4703597641fep-720,
     0x1.522ebe4599e2fp-780, 0.0, 0.0, 0x1.f5d04bbf5cb11p-25, 0.0, 0.0,
     0x1.34909b3feda6cp-118, 0x1.40a0827950778p-51, 0.0, 0x1.d15960af2e803p-1021, 0.0,
     0.0, 0x1.1c5ea48c375dbp-700, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7dce550edf052p-443, 0.0, 0x1.4fdefe9049961p-794, 0x1.4fdc5a2a0e8fep-702, 0.0,
     0.0, 0x1.ab6b2dc6d4636p-273, 0.0, 0.0, 0.0, 0x1.ba81ce156010fp-270, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.609b0b92ac895p-595, 0x1.904e23cbb6c75p-135, 0.0,
     0x1.e6bfef1b8937fp-365, 0.0, 0x1.df471ec58c953p-35, 0x1.437898a593f59p-80, 0.0,
     0x1.ba91171d1b0c4p-37, 0x1.b41bc608685c9p-519, 0x1.fc36ff4d17981p-295, 0.0,
     0x1.c79044d661a5ap-913, 0.0, 0x1.78674e1175b8bp-155, 0.0, 0.0, 0.0,
     0x1.2a592f2ed1134p-136, 0.0, 0x1.94e929f2c0274p-233, 0x1.735780f06f201p-463,
     0x1.42bfe0765423dp-82, 0x1.b4f79dd699abbp-903, 0.0, 0.0, 0x1.62161056fbe5fp-88,
     0.0, 0.0, 0x1.7d6e6a5817f09p-516, 0.0, 0x1.a36f1dd8bc5e2p-149,
     0x1.b502fff9a1eaep-627, 0x1.3f0d0e679c3bfp-1018, 0.0, 0x1.f7ca8725be781p-72,
     0x1.fb452039fcc4cp-604, 0x1.131df4b9c1f76p-11, 0.0, 0x1.9455da767e4eep-722,
     0x1.3c3047e7ee374p-301, 0x1.4da922af0fd5ep-973, 0.0, 0.0, 0x1.19d4dccb40eefp-587,
     0.0, 0x1.13ed970213d2fp-704, 0x1.607ef62ff5ee3p-758, 0.0, 0.0,
     0x1.32810d28305f8p-972, 0x1.4af5fbbf90429p-814, 0.0, 0.0, 0.0,
     0x1.4cd50774df899p-818, 0.0, 0.0, 0x1.db9fe8e37ea97p-218, 0x1.4139d45c41741p-247,
     0x1.3cc7f7d6de7bfp-371, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79da051af9cbfp-214,
     0.0, 0x1.cb16b23cb2b2ep-694, 0.0, 0.0, 0.0, 0x1.20b5a3d335199p-587,
     0x1.42f5aca3e3487p-273, 0.0, 0x1.15ca1dfacbc12p-1009, 0x1.fe988b6fbb1a2p-448,
     0.0, 0.0, 0.0, 0.0, 0x1.ad57688c953a1p-86, 0.0, 0.0, 0x1.21aa21d2dcdccp-401, 0.0,
     0.0, 0x1.ba8134aba91b8p-588, 0x1.90895526c819bp-817, 0.0, 0.0,
     0x1.54ccbd9587341p-293, 0.0, 0.0, 0.0, 0x1.0a626d7bce943p-290,
     0x1.29dc9ca9684b1p-191, 0x1.c8af89a90925fp-749, 0.0, 0.0, 0x1.017af9226c4dbp-466,
     0x1.290f188cc0844p-844, 0x1.c0198fd3a8f27p-207, 0x1.55bbd0251c0bdp-491,
     0x1.4daacd9509d99p-931, 0.0, 0x1.6ee902300c484p-220, 0x1.b03a9fd991b83p-900, 0.0,
     0x1.8d50310619b25p-953, 0x1.dfe19d8323e94p-904, 0x1.d05f2269cb4e7p-88, 0.0,
     0x1.5b6bc48c33fa3p-490, 0x1.604e39142d863p-232, 0x1.772a0fb0cf16p-754,
     0x1.678524136cc66p-481, 0x1.320b80a316216p-1010, 0x1.2363a4bf46eafp-21,
     0x1.7d6ec7c923e5p-115, 0x1.d6a83baf6ecf4p-713, 0.0, 0x1.9ded6774f0393p-241,
     0x1.562e5d3b25466p-738, 0.0, 0.0, 0.0, 0.0, 0x1.61e299845673fp-553, 0.0,
     0x1.f4b3595bc8592p-708, 0.0, 0.0, 0x1.91fdf154eac0fp-525, 0x1.dc0e1781d977fp-100,
     0x1.78e1b3497216bp-766, 0x1.416dd436eb0dp-242, 0.0, 0x1.2f09c2b581868p-396, 0.0,
     0x1.a0f1589d78e54p-358, 0.0, 0x1.6c389eed56d6fp-517, 0.0, 0x1.7ede2d3d01e86p-474,
     0.0, 0.0, 0x1.86538c8489562p-967, 0.0, 0.0, 0.0, 0x1.88b9cf45bc77dp-595, 0.0,
     0x1.f76ae8aacbd05p-482, 0.0, 0.0, 0x1.ca16c9c3383e8p-386, 0.0, 0.0, 0.0,
     0x1.2a83ea3417dcep-563, 0.0, 0.0, 0.0, 0x1.58e47fa600937p-5,
     0x1.1f5b91a3a07a3p-382, 0.0, 0x1.1769296a26b3ap-743, 0x1.193340d1c0a51p-795,
     0x1.d7b23338b9261p-852, 0.0, 0x1.92325d18c49c5p-92, 0.0, 0.0, 0.0, 0.0,
     0x1.e61f63a3268bap-118, 0x1.186f0a79c931dp-372, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8950b3b9c9457p-654, 0.0, 0.0, 0x1.4b8d81cc9d82cp-727, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7b0f7d6cb997dp-296, 0x1.f043bba4597b2p-269, 0.0, 0x1.2515774f7d25bp-907,
     0.0, 0x1.bc237c75fe34cp-161, 0x1.1cd2420574c78p-801, 0x1.b5413c411e3d6p-339,
     0x1.09a47e2d90a48p-960, 0.0, 0x1.11cd50b2c9354p-66, 0.0, 0x1.86658d8353dfcp-75,
     0.0, 0x1.34b55d6360d17p-294, 0x1.156ddaf07f775p-746, 0x1.697493ff98132p-764, 0.0,
     0.0, 0x1.0f8bbae611fb9p-439, 0x1.5bc1b8d77027dp-30, 0x1.b2bd45cdb0883p-956, 0.0,
     0.0, 0x1.7b2ef46b19b85p-945, 0x1.d1032e66e1d28p-80, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf57518306dafp-64, 0.0, 0x1.daba202f18874p-878, 0x1.83e2704380755p-611,
     0x1.b4ce91afef0fep-443, 0.0, 0.0, 0x1.765125bc9bcd1p-263, 0x1.4a732fcf760abp-116,
     0.0, 0.0, 0.0, 0x1.b4cbaeb954188p-697, 0.0, 0.0, 0x1.50cbed17f035fp-464,
     0x1.80b99dcb783aep-931, 0x1.4a06c61cfa496p-997, 0.0, 0.0, 0.0,
     0x1.f8ba17d109485p-950, 0x1.12e8ef6d449abp-48, 0x1.3f095712bc31ep-917, 0.0, 0.0,
     0x1.0d450a0da8d9p-526, 0x1.b817670378897p-19, 0.0, 0x1.0bcf5cf0b6acfp-244, 0.0,
     0x1.3424965f0d3c2p-934, 0.0, 0.0, 0x1.9a3faa341feap-109, 0.0,
     0x1.da15df562c4adp-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb45097bb4c6cp-649, 0.0,
     0.0, 0.0, 0x1.30304a748e991p-558, 0.0, 0x1.66ad515fbc97p-577, 0.0,
     0x1.945bcf0d8ae35p-659, 0.0, 0.0, 0x1.c9eb6ed507aa4p-193, 0x1.32a332f95f9ffp-49,
     0.0, 0x1.b89ce1611ea1p-361, 0.0, 0x1.4efc26d56cfa8p-739, 0.0, 0.0,
     0x1.358e37970e807p-480, 0.0, 0x1.e849fcb6f1357p-22, 0.0, 0x1.b6ea275473941p-797,
     0.0, 0x1.e4689c428fbc9p-987, 0x1.c6d5511a3ea99p-123, 0x1.29254ab93c16ap-776,
     0x1.85f6a22a7b01bp-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1652123890a26p-219,
     0x1.3120d15955055p-244, 0.0, 0x1.51de3a3d2efbep-370, 0x1.e521da1391d05p-562,
     0x1.16324ffb4ca94p-937, 0.0, 0x1.df335b6adb4b6p-668, 0x1.173ed1cae7222p-321, 0.0,
     0.0, 0x1.df624cd0a4a07p-528, 0x1.1bdd55d72c64ep-111, 0x1.ee67506d7a135p-125,
     0x1.2baa04507e62dp-575, 0x1.49bddb64df6e3p-874, 0.0, 0.0, 0x1.e59bb0492c59p-122,
     0x1.a25c29c5223c1p-604, 0x1.963f16241634cp-782, 0x1.694b12acfc7cap-686, 0.0,
     0x1.b7349649ca24ep-276, 0.0, 0.0, 0x1.2126be2365bedp-645, 0.0,
     0x1.b241eb832b8a9p-668, 0.0, 0.0, 0x1.d82beebff22d7p-379, 0x1.849c2ae821ba9p-129,
     0.0, 0x1.92c7981be474fp-1014, 0x1.96b4afefcd81p-657, 0x1.7c68ca6c50751p-876, 0.0,
     0.0, 0.0, 0x1.652786d2af20dp-405, 0x1.5964cc664e63cp-486, 0.0, 0.0, 0.0, 0.0,
     0x1.61ed175691b2dp-611, 0.0, 0.0, 0x1.8307d90ea0dep-666, 0x1.22c7057d84b0cp-828,
     0.0, 0x1.0bd8912b10fb1p-852, 0x1.755fd6080dc58p-88, 0.0, 0.0, 0.0,
     0x1.b94510c66b5d5p-421, 0.0, 0x1.07047b7834996p-479, 0x1.30ad145e228d2p-729, 0.0,
     0x1.6b945c5e3ba7bp-617, 0.0, 0.0, 0.0, 0x1.221491a7e4ba7p-164,
     0x1.faf4c69ee2a92p-219, 0x1.bc7f19ee2869cp-721, 0.0, 0x1.4f373eeb6f879p-42, 0.0,
     0.0, 0x1.35b266e7e4b4p-575, 0.0, 0.0, 0x1.1283da44a4a4ap-642,
     0x1.10cd409cddafdp-799, 0.0, 0.0, 0x1.a0b6f4f180deep-372, 0.0,
     0x1.0254b1fa584fap-130, 0x1.32ddfae6a0b4dp-656, 0x1.ee089c75b1f08p-857, 0.0, 0.0,
     0x1.5005c6c924142p-950, 0x1.c79b66adfcebdp-771, 0x1.0ed8aae2acp-2, 0.0,
     0x1.5387041761f22p-306, 0x1.fddcf07642a0fp-829, 0x1.341269f73d84ap-957,
     0x1.e50a19a0d575ap-880, 0x1.bea82468a3457p-88, 0.0, 0x1.79597a461d2bfp-651,
     0x1.4e1b0488d2c5fp-908, 0x1.b015b22a51826p-510, 0.0, 0.0, 0x1.cf15ef2fd1124p-567,
     0x1.52f79950d783ap-583, 0x1.25a8cb8de77dbp-841, 0.0, 0x1.369c7dfaba74ap-352,
     0x1.1de3c72c945e1p-947, 0x1.5b6915751fd29p-550, 0x1.156853cca8e3dp-112, 0.0,
     0x1.fcc041e0f2005p-438, 0.0, 0.0, 0x1.7af15384da113p-362, 0x1.1191c4ec9ac58p-604,
     0.0, 0x1.99af0ee1e9556p-842, 0x1.75d04b934937fp-941, 0.0, 0x1.e7a9b1ff8f8d9p-845,
     0x1.95e44a16c34bep-111, 0x1.5f208ece96198p-121, 0.0, 0x1.6046b49ff954dp-318, 0.0,
     0x1.01d7e3aac815ep-270, 0x1.4e76cf32cc334p-783, 0.0, 0.0, 0.0, 0.0,
     0x1.5e1c1683a3ecp-239, 0x1.8281cab398341p-481, 0x1.706d80315b49cp-861, 0.0, 0.0,
     0x1.51a88009360bbp-457, 0.0, 0x1.2fe00f2f26c01p-928, 0x1.cc09b5684b234p-715,
     0x1.26cb16e664e9p-605, 0x1.3346a9dfb41f2p-972, 0.0, 0.0, 0.0,
     0x1.ce971a2be61adp-119, 0.0, 0.0, 0x1.a0ce43642dcb7p-746, 0.0, 0.0, 0.0, 0.0,
     0x1.9e618002084afp-639, 0.0, 0x1.4467e17c31a31p-424, 0.0, 0.0,
     0x1.af597c06a9374p-1009, 0.0, 0.0, 0x1.79a725902e65dp-503, 0.0, 0.0, 0.0, 0.0,
     0x1.10d04eea5bbbbp-651, 0.0, 0x1.cf6b55911e694p-229, 0x1.ba816e5d4288ep-177,
     0x1.9236564dee825p-228, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00dd414ef88a2p-885,
     0x1.280779ba92b17p-230, 0.0, 0x1.34b6d4474a6cp-875, 0x1.c76966ea9c55cp-643,
     0x1.920940c78e93bp-732, 0x1.f1b5d65327a3dp-367, 0x1.552b07d9903c3p-226,
     0x1.b78eea024e543p-864, 0.0, 0x1.e9f8200fd5a96p-439, 0x1.375be5b0aaa43p-586, 0.0,
     0.0, 0x1.612a26fd4b254p-459, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d477b05555ce3p-1019,
     0x1.9a3d32c84bee6p-244, 0.0, 0x1.98e1203313a6p-216, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82fc976794f45p-942, 0x1.d61fca567661ap-534, 0.0, 0.0, 0x1.c9227b63d921cp-806,
     0.0, 0x1.21f635d3534a3p-622, 0x1.c7021a1fcfe4cp-879, 0x1.78c75cf4bad5bp-905,
     0x1.b3f0013dff4c5p-396, 0.0, 0x1.df1e97c349de4p-588, 0x1.2b4d608954792p-836, 0.0,
     0x1.fadcc54e5addep-580, 0.0, 0.0, 0x1.5d767b3d82725p-164, 0x1.484039ad14ad2p-517,
     0.0, 0.0, 0.0, 0x1.10296b083f2ccp-895, 0.0, 0.0, 0x1.5f54fa9698827p-109, 0.0,
     0.0, 0x1.147fb119cecd7p-156, 0x1.99cbe43a92671p-255, 0x1.fd2cbf5092114p-811, 0.0,
     0.0, 0x1.703a4caa92149p-35, 0.0, 0.0, 0x1.0b24aff9302cp-609,
     0x1.ce5f900a61d89p-736, 0x1.ab3977acb552ep-266, 0.0, 0.0, 0.0,
     0x1.7f8ce4c764c4bp-421, 0.0, 0.0, 0x1.cf9f4d0618dcfp-33, 0x1.b883ba3b3149fp-328,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e813c2b86b18p-34,
     0x1.509d7de2c68ffp-734, 0.0, 0x1.7fa5b67e7f3ap-689, 0x1.9a0937711b1dap-291,
     0x1.8c76c5654b815p-627, 0x1.ff09d9f87a071p-608, 0.0, 0.0, 0x1.0321427e8f4ecp-787,
     0.0, 0x1.b3524ab9f9ecfp-456, 0.0, 0.0, 0.0, 0x1.9595a8dd13c34p-786,
     0x1.402c6f8abaeeap-285, 0x1.0c48472f1bfcdp-161, 0x1.bb4febc7aafap-1013,
     0x1.636ee5cdce2ap-382, 0.0, 0.0, 0x1.1149bccf2bb8ep-623, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.88925407fc8b5p-937, 0x1.ac37da61da362p-271, 0x1.5533eb86d4628p-165,
     0x1.4b6cce955e45bp-381, 0x1.7279f3f33f332p-452, 0.0, 0.0, 0x1.5d81eece593fbp-264,
     0.0, 0x1.8e7ef5ba02e0ap-326, 0.0, 0.0, 0.0, 0.0, 0x1.dec1456343ff2p-797,
     0x1.55d9ec2ca204ep-619, 0x1.5dda8f27fb378p-400, 0x1.a1e0cc35d9ab8p-119, 0.0, 0.0,
     0x1.4feb7ad1b6c1ep-786, 0x1.e9af9e68031d4p-263, 0.0, 0.0, 0x1.23c626144d43p-820,
     0x1.c417692bb1c38p-174, 0.0, 0.0, 0x1.2753173c9469fp-360, 0x1.b62d8567c18adp-824,
     0.0, 0.0, 0.0, 0.0, 0x1.89a6f7ae85063p-871, 0.0, 0x1.386a2a094c56cp-863, 0.0,
     0x1.3ca9a6ebed553p-728, 0.0, 0.0, 0x1.f403e4bf15e83p-559, 0x1.167cb23cf80bp-290,
     0.0, 0.0, 0x1.e3fe3b2ad6e7bp-730, 0.0, 0.0, 0x1.86c235f188a26p-875, 0.0,
     0x1.3b4094de6828fp-709, 0x1.7e198664b2386p-358, 0.0, 0.0, 0x1.99e810ef14badp-295,
     0.0, 0.0, 0.0, 0.0, 0x1.063f0d9c3cfe1p-43, 0x1.47c56e9a5a359p-285, 0.0,
     0x1.2833e60f3370ap-928, 0x1.0a2c09c23d6dp-651, 0x1.a0fa667c86e05p-802,
     0x1.b45097f98ef4cp-366, 0x1.ea93669e09231p-797, 0.0, 0.0, 0x1.b901f3834f7a2p-672,
     0x1.216e3c439d1c5p-866, 0x1.13a502537e488p-807, 0x1.84ecc393bfa26p-241,
     0x1.ba0f201692693p-402, 0.0, 0.0, 0x1.9c84a38119065p-10, 0x1.b08c920785cacp-724,
     0.0, 0.0, 0.0, 0x1.19d701b9fed42p-462, 0x1.6fd68b241d945p-847, 0.0, 0.0, 0.0,
     0x1.2f5b0369e85f8p-317, 0x1.0d5a79c133789p-994, 0x1.86850f9931a72p-269,
     0x1.98d9af3136465p-727, 0.0, 0.0, 0x1.b440c9117f09p-563, 0.0, 0.0, 0.0, 0.0,
     0x1.d30fb2eb70c38p-443, 0.0, 0x1.dcf1afd04af61p-636, 0x1.78b6416522cc9p-762, 0.0,
     0.0, 0.0, 0.0, 0x1.a1065bf937b12p-711, 0x1.15bd717ead95bp-834, 0.0, 0.0, 0.0,
     0x1.506e089fa1ceep-73, 0.0, 0x1.9fd266432f702p-748, 0.0, 0x1.9c6dddd47943ap-24,
     0x1.6e0a4565ef7c9p-956, 0.0, 0x1.0e926010fbfe4p-253, 0x1.069662563412dp-299, 0.0,
     0x1.a3ebe4ac94ceep-923, 0x1.8feb8a238e6bfp-383, 0x1.f906a21882e49p-843,
     0x1.6548e53f8c035p-620, 0.0, 0.0, 0x1.bfebe30d8bd3p-101, 0.0,
     0x1.d3582a24cdaaap-279, 0x1.1fef5d5e10e67p-13, 0x1.933afccb48301p-725, 0.0, 0.0,
     0.0, 0.0, 0x1.e9d4cd377680dp-939, 0x1.9fbd23d5fca06p-619, 0x1.3b61f544a0996p-750,
     0x1.9cbcaade97992p-498, 0x1.46541d4521d63p-495, 0x1.041388d6d75e1p-71,
     0x1.eae7d87179144p-580, 0.0, 0x1.7841ffcff790fp-643, 0.0, 0x1.71ae09eb095d9p-5,
     0x1.f0b666eee61b2p-882, 0.0, 0x1.309489d49b5ap-320, 0x1.5f8bbb7a3ce89p-456, 0.0,
     0x1.088cf285c57a8p-368, 0x1.c81c127f6627dp-860, 0x1.44f593ccd0398p-448,
     0x1.684e341bdf872p-272, 0x1.7ee4e1fe2ebe1p-681, 0x1.6ca6c1ca9cdd5p-851, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2bf334dcb4f35p-223, 0.0, 0x1.7c1beaebde95cp-618, 0.0,
     0x1.ab5a3aca4eabdp-89, 0x1.4135c1f476a23p-276, 0.0, 0x1.344456fb340e1p-427, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.437883a7b598cp-163, 0.0, 0x1.3eb54661adb1dp-374,
     0.0, 0x1.a26c28afee63ep-479, 0x1.21f06dea63354p-301, 0x1.5a8c09e3a8fdcp-372, 0.0,
     0.0, 0x1.2112416d59901p-10, 0x1.3fdcdf0587a68p-487, 0.0, 0.0,
     0x1.567ccf70599f2p-636, 0x1.836e80589261p-320, 0x1.ba881f4167333p-508,
     0x1.d12fc7fead58cp-408, 0x1.f8b267040ee76p-561, 0.0, 0x1.d3db33a9556e5p-895, 0.0,
     0x1.e8b20773d1b6fp-875, 0x1.96abdd09b50dbp-989, 0.0, 0.0, 0.0, 0.0,
     0x1.dd823a0b32b25p-993, 0x1.b38ec60e12d55p-623, 0x1.1bf7ae09854d6p-280
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
            tmp1 = Sleef_finz_erfd2_u10kvx(tmp0);
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
    printf("Sleef_finz_erfd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_erfd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
