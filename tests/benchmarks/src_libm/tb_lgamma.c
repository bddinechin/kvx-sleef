/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_lgamma.c --function lgamma --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.91d5ae0e77bf5p-788, 0.0, 0x1.7fbe7d541bbdp-448, 0x1.5573a63fad98bp-183,
     0x1.918d98d127df1p-967, 0.0, 0.0, 0.0, 0x1.148ccd57ce899p-255, 0.0,
     0x1.7c44fd8dfc497p-798, 0x1.6d25bfc7b2959p-212, 0x1.fca1466e505d7p-200, 0.0, 0.0,
     0x1.c34fe7ba07194p-44, 0x1.a3cd5ae71d9b2p-323, 0x1.595536cd7b9e8p-143, 0.0, 0.0,
     0x1.b7a27d9c1ce8ep-650, 0.0, 0.0, 0x1.c44b80702dfbfp-585, 0x1.0d94903902a2ep-91,
     0.0, 0.0, 0.0, 0x1.de2d977d9fe74p-1016, 0x1.4798e910c5837p-93, 0.0,
     0x1.05ce14285a07fp-407, 0.0, 0.0, 0x1.6c2653ec01a56p-297, 0.0,
     0x1.d1c1d0475c7fap-356, 0x1.293ff01e4255dp-814, 0.0, 0x1.199fd8d6f001cp-125, 0.0,
     0.0, 0x1.6d722ba909a6cp-894, 0.0, 0.0, 0.0, 0x1.73cbf82de25b7p-910,
     0x1.8d408b652730bp-322, 0x1.d0d1705a4c11fp-786, 0x1.fafc350df91dbp-376,
     0x1.cd9c3edaac126p-575, 0x1.a677b92f95db7p-860, 0.0, 0.0, 0.0,
     0x1.910bbe00b8344p-48, 0x1.b79febd9f3e85p-905, 0.0, 0x1.cfb3f084be81dp-638, 0.0,
     0.0, 0x1.85d79128006a6p-944, 0.0, 0x1.52bb10b727faap-71, 0.0, 0.0,
     0x1.3d954ec5e5675p-679, 0x1.0c5cb29108f9ap-475, 0x1.7f90eb84cdeeep-328,
     0x1.71295e7379963p-566, 0x1.abe93f20f4003p-784, 0.0, 0.0, 0x1.cec5c10b05e69p-813,
     0.0, 0x1.74de7c4350ee3p-1006, 0.0, 0x1.33491ab14edf4p-405, 0.0,
     0x1.06f55850a0e7ep-316, 0.0, 0.0, 0x1.364d05c33a7bcp-925, 0x1.3ccd398455db3p-863,
     0.0, 0.0, 0.0, 0x1.ca492efd70b86p-474, 0.0, 0.0, 0.0, 0x1.70b0c75687746p-317,
     0x1.cc4f3886be1b5p-207, 0.0, 0.0, 0x1.b613b445ab5b3p-276, 0.0,
     0x1.68d19758e29e6p-850, 0.0, 0.0, 0.0, 0.0, 0x1.b1d90891c1fc3p-806,
     0x1.e18e97d95024ep-516, 0.0, 0.0, 0x1.e8e08a5d8fbd7p-743, 0.0, 0.0, 0.0, 0.0,
     0x1.2c22eb01ad947p-701, 0x1p0, 0.0, 0x1.66a17b9330d4bp-39, 0.0, 0.0, 0.0, 0.0,
     0x1.d878e8d9cddb1p-518, 0x1.a0eb44ac74004p-68, 0x1.0934290bb94fdp-747, 0.0,
     0x1.8ca49dea4ee2p-536, 0.0, 0.0, 0x1.f6949609bde9cp-1021, 0.0,
     0x1.5560039c3861cp-326, 0x1.683828207b50dp-462, 0x1.df611fe06dab5p-140,
     0x1.dc8148f265c6bp-1008, 0.0, 0.0, 0x1.161cf6c6a7011p-372, 0.0,
     0x1.ec46cbbb71fedp-756, 0.0, 0x1.b516cf98424dap-60, 0x1.061af47ed185ep-780, 0.0,
     0x1.827f5c9557ca2p-159, 0x1.fbd2b1bf879d2p-152, 0.0, 0.0, 0x1.4e89b1607e8efp-44,
     0x1.ea58b819759a5p-777, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d8d8b51b74c43p-506,
     0.0, 0x1.9521832f6c31fp-394, 0.0, 0x1.642c4d038462p-345, 0.0,
     0x1.cb8e990a9e344p-779, 0.0, 0x1.1f0479d902c06p-888, 0x1.ecaf184f9a9bdp-768, 0.0,
     0.0, 0x1.103ce1bd5c958p-412, 0.0, 0x1.1f8f1c988982dp-173, 0.0, 0.0,
     0x1.6058cbf5511b2p-30, 0.0, 0.0, 0.0, 0.0, 0x1.c96928eb8bbeep-331, 0.0, 0.0, 0.0,
     0.0, 0x1.1036c0ac0dbc7p-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c9541ce4e963p-779,
     0.0, 0.0, 0.0, 0x1.fb2dc513220b9p-671, 0.0, 0x1.2a4bf730a8a72p-490, 0.0,
     0x1.33e3f728a714bp-15, 0x1.ab66d71f9a8e5p-692, 0.0, 0x1.5bce9e4bfadb6p-456, 0.0,
     0.0, 0.0, 0x1.6b10b9783247fp-594, 0x1.acc99fddebe4cp-329, 0.0, 0.0,
     0x1.0f8d4ed4b84cfp-1020, 0.0, 0x1.7fe8e2ed040a1p-935, 0.0, 0.0, 0.0,
     0x1.2bbd21a57b2f6p-585, 0x1.5c4c98fc0d2b8p-831, 0.0, 0x1.707c43cbd6dc5p-672, 0.0,
     0x1.a779111e4710cp-290, 0.0, 0x1.575e0154f24ap-804, 0x1.7f0cb87e18472p-230,
     0x1.39ca739ecacdbp-497, 0.0, 0.0, 0x1.e109cd9e039dfp-338, 0x1.920082b92434ap-929,
     0.0, 0x1.c12c87dd263dbp-155, 0.0, 0x1.723fab2c5828dp-484,
     0x1.eb396d490d5c7p-1006, 0x1.afa24a8c0d5fp-990, 0x1.c409c4c81ddabp-270, 0.0, 0.0,
     0.0, 0.0, 0x1.c0fe5e881d9ccp-81, 0x1.ab279aa79a05dp-896, 0.0,
     0x1.5d4f243646516p-801, 0.0, 0x1.fea9a4a1db12bp-776, 0x1.c4f01a519cb1fp-733,
     0x1.98b8b70e3003ap-91, 0x1.9b5f5c7cc07cp-305, 0.0, 0.0, 0.0, 0.0,
     0x1.4996be9bda401p-166, 0.0, 0x1.83cde18c1b95p-90, 0x1.4dec1ae0f0b2ap-734, 0.0,
     0x1.d93b51696f86fp-137, 0.0, 0x1.e875351b47923p-251, 0.0, 0x1.b3f0aee585952p-109,
     0x1.e77257154f26p-564, 0.0, 0.0, 0.0, 0x1.e67c999b2dbe8p-404, 0.0, 0.0,
     0x1.6b1647c783f27p-263, 0.0, 0.0, 0x1.15e5edee6595dp-256, 0.0,
     0x1.b51410b8c0cd5p-150, 0x1.a7f7118868eefp-880, 0x1.59befa4345aeep-9,
     0x1.c8cd06b4795e4p-920, 0x1.d9cd6a187796p-45, 0.0, 0x1.5645459a9936ap-890,
     0x1.f5c1fa1baa37fp-61, 0x1.8d0d11b547d32p-799, 0.0, 0x1.53a3f1f3f45d1p-79,
     0x1.6b5ff2c87533ap-934, 0x1.a442face0c469p-102, 0x1.12a8bf7afe95fp-165, 0.0, 0.0,
     0x1.0afceb4536d2dp-71, 0.0, 0.0, 0.0, 0x1.8a3768a6ef7acp-210,
     0x1.10dc200bfcad9p-110, 0.0, 0x1.8f4e25cfbe055p-331, 0.0, 0.0,
     0x1.8d01098e1e3fcp-121, 0.0, 0x1.48ec9752649aap-469, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7c82eb3c7343dp-904, 0.0, 0.0, 0x1.4e23ad9ee3b21p-545, 0.0, 0.0,
     0x1.b851269f12edap-125, 0.0, 0.0, 0x1.6a0200bbfd826p-59, 0.0,
     0x1.e0459d98a4b99p-253, 0.0, 0.0, 0x1.58f5d6d18c392p-483, 0.0, 0.0,
     0x1.bc024ed31ffb4p-799, 0.0, 0.0, 0.0, 0x1.0738c1d6c6c4cp-3, 0.0,
     0x1.78b72d2546616p-854, 0.0, 0.0, 0x1p0, 0x1.7ff383059216p-437, 0.0, 0.0, 0.0,
     0.0, 0x1.727c6227d1315p-39, 0x1.bdd57b63aa0c5p-989, 0x1.9b6b179f7dd04p-771,
     0x1.fcd34e29a252cp-398, 0x1.20579be4d531dp-442, 0.0, 0x1.a5e9c06d8b28p-24,
     0x1.a433756c9fe81p-577, 0x1.1d37e7844169fp-746, 0x1.e39f140369dcbp-881,
     0x1.78436cdeb7308p-601, 0x1.4414c0351a475p-699, 0.0, 0.0, 0.0,
     0x1.284160ba3bb68p-171, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08d343a31598ep-5, 0.0,
     0x1.e0ea68b372f47p-341, 0x1.5c8baaf30868cp-947, 0x1.9ef729d3b7a8fp-315, 0.0,
     0x1.9c55c2b6a060bp-358, 0.0, 0x1.ec72fdd6a378ep-611, 0.0, 0.0,
     0x1.be5759a9e0f24p-175, 0x1.7466deb28acc4p-507, 0x1.a991a8eb7a48ap-484,
     0x1.35a3571efd3b2p-633, 0.0, 0x1.3e226e10529bap-446, 0x1.0beb7dad7be24p-507, 0.0,
     0x1.4e4d558db2748p-597, 0x1.a1f11851f8bc9p-984, 0.0, 0x1.d5b219fd1efd1p-942,
     0x1.a3036b4e5b93ap-310, 0x1.49e700520077fp-989, 0.0, 0.0, 0x1.3dd6d2cd6a368p-337,
     0.0, 0.0, 0.0, 0x1.bbd62148b9b73p-64, 0.0, 0.0, 0x1.bad87b966914ap-1021, 0.0,
     0.0, 0.0, 0x1.6580753abd2c8p-148, 0.0, 0.0, 0.0, 0x1.e27a49e8ff5bfp-438, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8eb8940ca0a8p-366, 0.0, 0x1.7d8fda80e9262p-728,
     0.0, 0.0, 0.0, 0x1.241dc6ad56d7fp-228, 0.0, 0x1.459c17d5abe28p-952, 0.0,
     0x1.c38f1f8a7454dp-359, 0.0, 0.0, 0.0, 0x1.a0403adf496ddp-53,
     0x1.77d98b1258b7ap-784, 0x1.952d1d775f757p-65, 0x1.322c92f89da6ep-176, 0.0,
     0x1.117051da9ab2fp-124, 0x1.1f402bf2db4cap-753, 0.0, 0x1.08b8bb179468p-118,
     0x1.6d77067311378p-587, 0.0, 0x1.6e3db5acdc11cp-546, 0.0, 0.0, 0.0,
     0x1.42f298a999b5p-104, 0.0, 0.0, 0x1.b65c88e2eafe4p-179, 0.0,
     0x1.a14186fbc6b7p-963, 0.0, 0x1.3e225d01898b8p-451, 0.0, 0x1.5ae632bf38375p-19,
     0.0, 0.0, 0x1.5dc680fef1a1fp-708, 0.0, 0.0, 0.0, 0x1.1ed7c2893a72ep-1011, 0.0,
     0x1.6a16ecc81bf6p-881, 0x1.7c6c512e9bc4bp-296, 0x1.6d64c12d44375p-494, 0.0, 0.0,
     0x1.6a5501a3ddf09p-749, 0x1.88cbfaad59c66p-737, 0x1.05a68b464bc82p-665, 0.0,
     0x1.1b70b08d7136fp-414, 0.0, 0.0, 0x1.305c03019d6e9p-563, 0.0,
     0x1.9bc69657a481ap-540, 0x1.cb64be5a89d98p-751, 0.0, 0x1.6f8f10fb16929p-347, 0.0,
     0x1.6df9e5403bcb9p-402, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d543cfc7c1bd7p-102, 0.0, 0.0, 0x1.0027702afc32cp-214, 0.0,
     0x1.bb9112a405172p-336, 0x1.f8a2322d9bbep-128, 0x1.559061f11bda4p-547, 0.0, 0.0,
     0x1.0b17c76b2e382p-836, 0.0, 0.0, 0.0, 0x1.e9d2f4cc9a135p-736,
     0x1.c27a7ac63461cp-420, 0x1.28ba7105eeaddp-452, 0.0, 0.0, 0x1.827c9dd6ad51cp-633,
     0x1.f6c85c1ece293p-951, 0.0, 0x1.e1f8c7a6eb6cep-482, 0x1.0b598420f0c08p-278,
     0x1.8157f17549c62p-836, 0x1.11620c1ec9198p-917, 0x1.86ee54474cc2dp-886, 0.0,
     0x1.9b10b0b674a76p-58, 0x1.031f7baf9d984p-703, 0.0, 0x1.701e9c5a15a8bp-262, 0.0,
     0.0, 0x1.35318c71c7adbp-21, 0x1.b4d2c79ba291bp-24, 0.0, 0x1.4f112784d3a86p-607,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd96e836485dap-803,
     0x1.e339f1046f82ep-628, 0.0, 0.0, 0x1.0b7ddf7fed83cp-558, 0.0,
     0x1.a9607339c5b82p-347, 0x1.bc96acf57f1d6p-993, 0x1.7e900b4d8dd4p-1005,
     0x1.a882a7075381p-701, 0.0, 0.0, 0.0, 0x1.5760fa6839736p-477, 0.0, 0.0, 0.0,
     0x1.58511bda77db7p-596, 0x1.e3bf38b5af38ap-182, 0x1.f09c29548c53cp-810, 0.0,
     0x1.5ad1a4145e556p-650, 0.0, 0x1.ef3fb42bfadbdp-17, 0x1.f0840a4ee14f3p-767, 0.0,
     0.0, 0x1.25d975fac6bfdp-605, 0.0, 0.0, 0x1.61d34eddcdc5ap-953, 0.0, 0.0, 0.0,
     0x1.d85e546b3858ap-533, 0.0, 0x1.26a6cbf489679p-988, 0x1.bdead2e2c985ep-817, 0.0,
     0x1.897384bafa451p-942, 0x1.c1809c9f48d06p-881, 0.0, 0x1.a32be7a431e53p-544,
     0x1.a2447f14b4049p-813, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2cc087c3947bbp-337,
     0x1.4f80cddaa4cdcp-262, 0x1.72a58a485884fp-1010, 0x1.6a22a824c0292p-802, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.630ae595f26ffp-740, 0.0,
     0x1.05cfb313a946ap-706, 0.0, 0x1.fddcec31b6262p-845, 0x1.ffe5473a014ep-6, 0.0,
     0x1.8e38f404e7c4bp-73, 0x1.18873c16b20a6p-389, 0.0, 0x1.6e35400773581p-291, 0.0,
     0x1.820801a09c489p-915, 0x1.c69268baabf9bp-124, 0x1.695e6456c49d3p-683,
     0x1.1f44803578be6p-168, 0.0, 0.0, 0x1.76b8c34077acfp-64, 0.0, 0.0,
     0x1.b0b1145ee15b1p-656, 0.0, 0x1.7058b4dc3c3cbp-257, 0.0, 0.0,
     0x1.290dc70248205p-24, 0x1.d731435a7a149p-89, 0x1.a0ccb018b5517p-820,
     0x1.fbfd455e4758p-934, 0x1.edbc500c12606p-412, 0.0, 0x1.e4775251271c6p-94, 0.0,
     0.0, 0x1.f9f78c1c0c708p-936, 0.0, 0x1.1a2b124ef419bp-10, 0.0, 0.0,
     0x1.6f7a295ccce29p-327, 0.0, 0.0, 0.0, 0x1.7e97ca31e5692p-498, 0.0,
     0x1.9eda1234126e1p-582, 0x1.15128315871c4p-437, 0x1.96ae07974abe8p-616,
     0x1.5dc23716bad1ap-907, 0x1.e44f56e5e531bp-603, 0.0, 0.0, 0.0, 0.0,
     0x1.d3d0e48245b9cp-698, 0x1.53879862b00a9p-49, 0.0, 0.0, 0x1.1ce49d6207582p-177,
     0.0, 0.0, 0x1.de5904ae68a8cp-509, 0.0, 0x1.c9bdad69fb73ap-502, 0.0, 0.0,
     0x1.94cea27b481bp-779, 0.0, 0.0, 0.0, 0x1.93ad80c6fcccdp-268, 0.0,
     0x1.b37b436b5a1d7p-324, 0x1.599b06533b9c8p-707, 0.0, 0x1.40abfb6b2874bp-802,
     0x1.2cde1c7b4ea23p-281, 0.0, 0x1.9dcd742c19ffdp-27, 0x1.05702be7cec37p-569, 0.0,
     0x1.d26c5949d545ap-448, 0x1.30abeb7425025p-289, 0x1.3d9db91ce08f4p-1015,
     0x1.c7ae2b979d766p-607, 0.0, 0.0, 0.0, 0.0, 0x1.1943d962931cbp-597,
     0x1.60d7cc4ccae95p-939, 0x1.252eafd5e7e4dp-317, 0.0, 0.0, 0x1.f8f78e3e2c243p-713,
     0.0, 0x1.26ab2adeb9161p-297, 0.0, 0.0, 0.0, 0x1.21f945752bb9p-375, 0.0,
     0x1.48bc468cc29ap-545, 0.0, 0x1.5f2557bdbaf39p-309, 0.0, 0x1.6fddadcff27fp-47,
     0x1.d8059d8f60745p-100, 0x1.93ed9c98d0715p-363, 0.0, 0x1.6bc35ab6094cfp-675,
     0x1.bb615d6472b08p-76, 0x1.71bc4951a9acbp-1001, 0.0, 0x1.7099524b36887p-681, 0.0,
     0x1.2aac51f2a8304p-154, 0.0, 0.0, 0x1.e51e720d8910dp-264, 0x1.28aca314d2bffp-563,
     0x1.2f930114c166p-903, 0.0, 0.0, 0x1.6ceabb5c461a3p-123, 0x1.f180ce07dcb8dp-218,
     0x1.27c46ae4f12b7p-729, 0x1.9cf8fa5c6bf5ep-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dd007d9eeb57fp-822, 0x1.a7570b842b97bp-177, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ae52fe7c72753p-348, 0x1.eef3b7a63b978p-957, 0.0, 0.0,
     0x1.0ed30bc4c4ba9p-585, 0.0, 0.0, 0x1.ac7e74fa9cf52p-550, 0x1.7b36fce260dd8p-703,
     0.0, 0x1.83412b882c79ep-186, 0x1.ddea2b3ba1713p-213, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2a228334011c9p-310, 0.0, 0.0, 0x1.15e78117e7366p-96, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bf9ef14729a4p-120, 0.0, 0.0, 0x1.2947d05ddbce2p-981, 0.0, 0.0,
     0x1.efdcacb530a3p-71, 0.0, 0.0, 0.0, 0.0, 0x1.0fb8b1a2a69d7p-969, 0.0,
     0x1.d7ed98b0888eap-388, 0x1.6d55101a4277cp-496, 0x1.7f431b1775c12p-317, 0.0, 0.0,
     0.0, 0x1.27128f5b4b9b8p-613, 0.0, 0.0, 0x1.75c4a2c224594p-327, 0.0,
     0x1.95eb3afa6e37p-276, 0.0, 0x1.0d607c6352358p-749, 0x1.53bb9fdc6d30ap-716,
     0x1.4074a69a9b4p-843, 0x1.7c3dad1b32c1bp-822, 0.0, 0x1.5e2dce9f148fep-705, 0.0,
     0.0, 0x1.047dbba1aa725p-471, 0x1.d7a0176e7ee7dp-135, 0x1.f69a7bc377dacp-445,
     0x1.d0af84810eba7p-775, 0x1.d49dc3f85578dp-560, 0x1.d81d946be6d3bp-463,
     0x1.b4d1d8bba608fp-197, 0x1.03727386f4ca9p-647, 0x1.0db4b644be092p-453, 0.0,
     0x1.b8e1c891ecabap-853, 0.0, 0.0, 0.0, 0.0, 0x1.7e60f278b365ap-665, 0.0, 0.0,
     0x1p0, 0x1.dc18ae1a7daacp-783, 0.0, 0x1.3b3822ad63137p-650,
     0x1.e786a907a731dp-750, 0x1.9a8e8ed13bc46p-209, 0.0, 0.0, 0.0,
     0x1.b06c4ef4f8e74p-264, 0.0, 0.0, 0x1.b61e7af92e8d9p-251, 0.0,
     0x1.9bfe895c2cf4cp-946, 0.0, 0.0, 0.0, 0.0, 0x1.e077a8af2d005p-411, 0.0,
     0x1.bb72c7eea4fe6p-369, 0.0, 0.0, 0x1.5e28db097438fp-850, 0.0, 0.0,
     0x1.0fd52cdcb15f8p-264, 0x1.f978678014d01p-418, 0.0, 0x1.01c82f1e07fb8p-298,
     0x1.f61584171189bp-409, 0.0, 0.0, 0.0, 0x1.42b3b77225fa4p-183, 0.0, 0.0,
     0x1.e8395c3ed60bap-108, 0x1.617d72899facbp-408, 0x1.257873511ebafp-1016,
     0x1.e5a8c6ad9a44cp-679, 0.0, 0.0, 0x1.00b12b903af2ap-530, 0x1.c6afd8f5ec756p-640,
     0.0, 0x1.d8a7c0dbbec8fp-989, 0.0, 0.0, 0x1.45a8a41b64e78p-668, 0.0, 0.0,
     0x1.da1c62ced19a6p-904, 0x1.c7aa70006c923p-852, 0x1.9eb56c2354b51p-828, 0.0, 0.0,
     0.0, 0x1.8240091edb272p-961, 0.0, 0x1.9806ec0b45cf6p-488, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.50e96d096fcb4p-100, 0.0, 0.0, 0x1.f2a992095f3f6p-892, 0.0, 0.0, 0.0,
     0.0, 0x1.1bf9b892e0af8p-122, 0.0, 0.0, 0.0, 0.0, 0x1.a5947fa1503ep-374,
     0x1.10a77972d810cp-576, 0.0, 0x1.634624e75b03fp-342, 0x1.333c0736d0686p-186,
     0x1.2c8e33565ad7cp-232, 0.0, 0x1.efda0999f3054p-57, 0x1.14936efde339dp-360,
     0x1.c6e1afef58021p-22, 0x1.7bfd2e8bd813dp-746, 0.0, 0x1.2f7a1fe14af37p-317,
     0x1.87f28a51b8f7p-246, 0.0, 0x1.b06ce5b8de2a4p-530, 0.0, 0x1.283442c073f11p-208,
     0.0, 0.0, 0.0, 0x1.12fb074fa33ebp-784, 0.0, 0.0, 0x1.e7a863203d967p-522,
     0x1.e70f5f1547aaep-138, 0x1.08987847a156ap-288, 0x1.617ef88ccdfa1p-10, 0.0,
     0x1.cee1bf8f573ffp-647, 0.0, 0x1.abfa7ea8bd5bbp-942, 0x1.98de3afb9ffc1p-875, 0.0,
     0.0, 0x1.7721a6b753eb6p-231, 0.0, 0.0, 0.0, 0.0, 0x1.c47a37fdb1ad8p-485,
     0x1.646783b773dadp-782, 0x1.6f857e96368aep-234, 0x1.5ca561cbcba4p-355,
     0x1.523d9fb50179bp-508, 0x1.d4c86653426fcp-477, 0.0, 0x1.a6155a603f752p-760, 0.0,
     0x1.b1e18d0c51481p-2, 0x1.87d7c80657c8cp-67, 0.0, 0x1.7be298c276fafp-729, 0.0,
     0.0, 0x1.42389417bb7c9p-715, 0x1.60fcf16a5b53ap-717, 0x1.744dee1803d9p-241, 0.0,
     0.0, 0x1.c9c089436a19ep-130, 0x1.de1026235c042p-875, 0.0, 0.0, 0.0,
     0x1.dc65b6f31816cp-110, 0.0, 0.0, 0x1.6a90de3a283bbp-425, 0.0, 0.0, 0.0, 0.0,
     0x1.32c883fd1d47fp-328, 0.0, 0.0, 0x1.1dd2370493f78p-442, 0x1.2a0144ec72912p-568,
     0.0, 0x1.146923dbfc801p-64, 0x1.5ffb1239df08ap-491, 0.0, 0x1p0,
     0x1.067ca415fb905p-820, 0x1.a9ce38ac9fadep-172, 0.0, 0x1.1910e45edc48ap-1006,
     0.0, 0x1.b4c3dba7b7981p-13, 0.0, 0.0, 0x1.828fa77b5f25cp-823, 0.0,
     0x1.ab087248735f7p-25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.be27dd8180025p-997,
     0x1.7fd877fd8a73ep-359, 0.0, 0.0, 0x1.f1c4489020f0cp-139
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = lgamma(tmp0);
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
    printf("lgamma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("lgamma bench acc %la\n", global_bench_acc);
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
