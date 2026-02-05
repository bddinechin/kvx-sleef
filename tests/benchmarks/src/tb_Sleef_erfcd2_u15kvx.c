/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcd2_u15kvx.c --function Sleef_erfcd2_u15kvx \
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
     0.0, 0.0, 0x1.7831edb5b6256p-308, 0.0, 0x1.7b3a816822827p-381, 0.0,
     0x1.bc476ef0f6f19p-882, 0x1.3c566c2cbbdfep-294, 0x1.c42677d707e5dp-882,
     0x1.3d07cd70c3dcp-964, 0.0, 0.0, 0x1.b2caf1908ec2dp-176, 0x1.b3945b91a2597p-323,
     0.0, 0.0, 0x1.8c7e9b4ab699dp-357, 0x1.b66a98f1de2abp-629, 0x1.2393963286edep-881,
     0.0, 0x1.b770f5e67eb6cp-1018, 0x1.c0ce31a5426p-84, 0.0, 0x1.dd8079cf8235bp-345,
     0.0, 0x1.089db7642c223p-133, 0x1.c9126c6dc177cp-906, 0x1.920f1b9b5077fp-539, 0.0,
     0x1.fcc2c53a3910dp-711, 0x1.3d2acfb651dfdp-1010, 0.0, 0x1.21e8499aff923p-213,
     0x1.348b7132322bfp-207, 0x1.47092c14352e7p-982, 0x1.6b1f562995f7dp-515,
     0x1.355f28ae0f687p-750, 0x1.20114cca256abp-272, 0x1.f9eb317287662p-760,
     0x1.98165946fff28p-38, 0.0, 0.0, 0.0, 0.0, 0x1.d9c294564df43p-212,
     0x1.8c7a2bbe1a5edp-431, 0.0, 0.0, 0.0, 0.0, 0x1.f0ede6bc7b9aep-248, 0.0,
     0x1.11f3b3716a569p-1006, 0.0, 0.0, 0.0, 0x1.dc95f24967c4fp-355,
     0x1.008a5ccb08586p-371, 0x1.7f8d22e4f6de7p-173, 0.0, 0.0, 0.0,
     0x1.7478a451b0521p-167, 0.0, 0x1.0be39dc4369f5p-716, 0x1.d44f7f63a3b93p-533,
     0x1.1f2fee4e22fb7p-809, 0x1.880baca072d32p-79, 0x1.b3205a8320525p-833, 0.0, 0.0,
     0.0, 0.0, 0x1.c766696614848p-228, 0.0, 0x1.9b1651ee2e166p-56, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5fa28ad2a42bdp-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.48c72e9129c3p-670, 0x1.30dc0161de73bp-1018, 0x1.53a935d303e0ap-500,
     0x1.ef0f496bf44afp-420, 0x1.e4145bf0c60e9p-347, 0x1.92d2af1b3035ap-293,
     0x1.e7801ed64c365p-607, 0.0, 0.0, 0x1.be8f76bb11c5ep-822, 0.0,
     0x1.b8f9b5b0e6893p-913, 0x1.08760f68d2838p-24, 0x1.277b0ce1dd616p-581,
     0x1.8559639a0f188p-103, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dab81ff1ef165p-891,
     0.0, 0x1.075e99fbe5e44p-96, 0x1.9ad92f09e8b1ap-24, 0x1.c87ccfa2e7d48p-131,
     0x1.6cb5bc0bf27b2p-682, 0x1.4d04a9e12160fp-408, 0.0, 0.0, 0.0,
     0x1.82e6a98720046p-723, 0x1.870b9abf50837p-509, 0x1.3b254c34a37d6p-852,
     0x1.a6514def20726p-761, 0x1.f4ecc7a766692p-379, 0x1.75df4896712aep-457, 0.0, 0.0,
     0x1.3d48bee5acc5ep-719, 0x1.afcf437ab760dp-385, 0x1.e01eed90d0ba9p-685, 0.0,
     0x1.56ba55a5842fap-692, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93e752ea1d4b2p-847,
     0x1.79bd400170fbp-851, 0x1.b3f5837b2c097p-934, 0.0, 0.0, 0.0,
     0x1.dc67d028af4f2p-836, 0.0, 0.0, 0.0, 0x1.114ff77452811p-750,
     0x1.54d64f44a2ffap-830, 0.0, 0x1.a15f86bdad581p-235, 0x1.3089ba84c8241p-86,
     0x1.3ed1dc3838ea4p-564, 0x1.ad2328da32379p-947, 0x1.97d7153eec45bp-443,
     0x1.37220d4ec3b8cp-87, 0.0, 0.0, 0.0, 0.0, 0x1.e7f2f25f3ea9p-704, 0.0,
     0x1.01a365b126ecdp-436, 0x1.9b88fc206dd35p-314, 0.0, 0x1.04e06e958e9c7p-652, 0.0,
     0.0, 0.0, 0x1.51ce995e09342p-326, 0x1.7cbfe51929d48p-50, 0.0,
     0x1.3e8b0a253f8e3p-185, 0x1.f3df281996936p-553, 0x1.3da8c27792b66p-219,
     0x1.4ea0f6fc2ab15p-252, 0x1.ea7aecc572364p-863, 0x1.69786fb4db19bp-170, 0.0,
     0x1.715fc94f91f2cp-818, 0x1.e3090038d47a9p-681, 0.0, 0x1.d89c7246d2a17p-297, 0.0,
     0.0, 0x1.67f0055a74966p-283, 0.0, 0x1.7ab8e8ab440c1p-882, 0x1.2ccee26765337p-513,
     0x1.36affbb032798p-908, 0.0, 0.0, 0.0, 0.0, 0x1.0f2fab1be5e4ep-156,
     0x1.e93f770be43b9p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.215972f0f5ebap-464, 0x1.5b4da55736a12p-323, 0x1.a6f35411b5a44p-300,
     0x1.bfa73a605e118p-12, 0x1.f42755ee65129p-793, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.56385cf00407ep-541, 0.0, 0.0, 0.0, 0x1.6120f5221e919p-360,
     0x1.e50beae90319dp-463, 0x1.19216a0984f95p-572, 0x1.c85ee742e98fep-354,
     0x1.5e59a49feef77p-933, 0.0, 0x1.1493c564c3826p-887, 0x1.798903b99c22ep-1011,
     0x1.0bfe150455c91p-192, 0x1.b271bf4c81864p-511, 0.0, 0.0, 0.0,
     0x1.4ff1beba4e5b7p-765, 0.0, 0x1.db9da741a5f36p-543, 0x1.fdb02e8a74989p-691,
     0x1.f21de4322ff35p-951, 0.0, 0.0, 0x1.4669e4453baddp-163, 0.0, 0.0,
     0x1.0ccdbbcce801fp-88, 0x1.facd3e79b460ap-303, 0x1.380dd64dd2aep-597, 0.0, 0.0,
     0.0, 0x1.f9d342e9cece1p-135, 0x1.35f1a614a8b7p-171, 0x1.2771794b54457p-528,
     0x1.c675bf9f00f2bp-293, 0.0, 0x1.590dcd46d4032p-826, 0.0, 0.0,
     0x1.bc425a5b42b42p-470, 0x1.4cfdcbd3c6cd4p-951, 0x1.265d6634ce7f2p-970,
     0x1.787b168ac41a2p-53, 0.0, 0.0, 0x1.bb0718f4f89dap-27, 0x1.6e254d1f209c2p-986,
     0.0, 0x1.c0d814b7cd397p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d689f769dfc78p-218,
     0x1.fe5c02cc41357p-888, 0x1.ad86d4a05547fp-72, 0x1.5c99b9de5d2dcp-1016, 0.0,
     0x1.86fec94149193p-290, 0.0, 0.0, 0x1.abe373d86141dp-554, 0x1.76b02973fc1c4p-951,
     0x1.2d9d1585939d2p-672, 0x1.504eb339cfb73p-620, 0.0, 0.0, 0.0, 0.0,
     0x1.5ef47aa3373d2p-395, 0x1.016540e3d68e3p-48, 0x1.b4f4d28971947p-503,
     0x1.bffaac6f911e1p-598, 0x1.5c08b298759e5p-285, 0.0, 0.0, 0x1.a14831f6e9df4p-511,
     0x1.6b4688340065ep-900, 0x1.195d6fc228317p-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f1d8d5b057f61p-289, 0.0, 0.0, 0.0, 0.0, 0x1.b2421c8340151p-684,
     0x1.27777ec0c3856p-30, 0.0, 0x1.2a60864df223cp-69, 0x1.49fbcdfd65873p-817, 0.0,
     0.0, 0x1.790b8c4f59182p-778, 0.0, 0x1.d3d074f49fab9p-78, 0.0, 0.0,
     0x1.52b4e81ef6e69p-738, 0x1.5d200cc4a1d66p-974, 0.0, 0x1.cfacdad04eccbp-469,
     0x1.daafaede63072p-719, 0x1.15f1587bcdb97p-68, 0.0, 0x1.0c37285d48f97p-434, 0.0,
     0x1.b85188a0f3494p-713, 0.0, 0.0, 0x1.d3aa806f0311ap-377, 0x1.27256467f64bcp-861,
     0.0, 0.0, 0.0, 0x1.bb8a8e3badca6p-370, 0x1.7f2caa4a4e1a5p-222, 0.0,
     0x1.30584867d72b5p-844, 0.0, 0x1.e95581972d705p-595, 0.0, 0.0,
     0x1.581f8c5ce817dp-784, 0x1.4da4efd35473dp-185, 0x1.149f0328732b6p-852,
     0x1.e3a1367464c57p-295, 0x1.dac9c98116a59p-194, 0x1.2552f132248f3p-127,
     0x1.880e40330542dp-840, 0.0, 0x1.104ab7dee6a84p-620, 0x1.fe04b54cf45dp-511,
     0x1.e2875dd73aac2p-465, 0.0, 0x1.0191d85846d68p-126, 0.0, 0x1.f19db3f3a77adp-808,
     0x1.44637cbbb1d0ap-1002, 0.0, 0.0, 0.0, 0x1.a8132940c9fccp-452,
     0x1.69ed5a681593bp-33, 0x1.adda28e152891p-335, 0x1.217eff5d324b8p-606,
     0x1.998a52dc0b67p-820, 0.0, 0x1.d1af64cc55685p-502, 0x1.fbcc6592084d6p-785, 0.0,
     0x1.d2e834ba56f81p-701, 0x1.07aa76e52005p-870, 0.0, 0.0, 0.0, 0.0,
     0x1.d2520fffbf53p-512, 0.0, 0.0, 0x1.000d135a1ef53p-494, 0x1.5cfaa8f5bc4d6p-788,
     0x1.b21983c78af6fp-399, 0.0, 0x1.4a50cfe52c374p-851, 0.0, 0x1.4e82562bf8d4fp-762,
     0.0, 0.0, 0x1.8aacb2d613381p-479, 0.0, 0.0, 0x1.0131d1248b064p-144,
     0x1.ccf4a914da45fp-3, 0.0, 0x1.e8645eef7b342p-393, 0x1.85da8c132c8bap-437,
     0x1.e305bd10a42aap-216, 0x1.7efef662e4d8ap-123, 0x1.10111c7d03d31p-551, 0.0,
     0x1.e30adbf9800b1p-856, 0.0, 0.0, 0.0, 0x1.b7055ea2907bp-221, 0.0,
     0x1.c25a2f6f61dcdp-492, 0.0, 0.0, 0x1.5bfd33ecd601dp-656, 0x1.4e1de7c496d13p-135,
     0x1.80c4b3de5d7fcp-794, 0.0, 0.0, 0.0, 0x1.30f3e98af43a8p-372,
     0x1.21b060d63a654p-806, 0.0, 0.0, 0.0, 0x1.23689d310f4f3p-232, 0.0,
     0x1.52ec4c58ae6cbp-799, 0.0, 0.0, 0x1.d17eaf9cf4094p-180, 0x1.9aba4db75c702p-664,
     0.0, 0x1.f09a9b9472c06p-997, 0.0, 0.0, 0.0, 0x1.37c38415357e2p-978, 0.0, 0.0,
     0x1.342e3fd6149ffp-795, 0.0, 0.0, 0.0, 0.0, 0x1.1d2036267ef81p-221, 0.0, 0.0,
     0.0, 0.0, 0x1.db22b5a37c785p-322, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a32d85d16b32cp-737, 0.0, 0.0, 0.0, 0x1.37f487fd59f9p-78,
     0x1.93a6ac3db0671p-832, 0x1.e9d02e85e5eefp-868, 0.0, 0.0, 0.0,
     0x1.9d3f4da5ce137p-232, 0.0, 0.0, 0x1.53ca099bdb385p-677, 0.0,
     0x1.1bde58ba2c5d8p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e487da502e67p-90, 0.0, 0.0,
     0.0, 0x1.e7af26be574d4p-698, 0x1.85a997c61ce89p-1000, 0x1.7153a206e96e6p-577,
     0x1.7b33d3db5640ap-942, 0.0, 0.0, 0.0, 0x1.9d76d912db11ap-713,
     0x1.59be38e47a17ap-163, 0.0, 0x1.94f7e84bcfbc3p-62, 0x1.79fcb8885d25fp-656,
     0x1.1fc0631ca01dp-339, 0.0, 0.0, 0.0, 0x1.ff9db294949e8p-124,
     0x1.543c5af0cfa4p-420, 0.0, 0.0, 0x1.1f3fbfe96f05ap-140, 0.0, 0.0,
     0x1.ac82b5f7e4de4p-162, 0.0, 0.0, 0.0, 0.0, 0x1.6322310fb3ed5p-265, 0.0,
     0x1.676b94255df6ap-312, 0.0, 0x1.6c398a41582dbp-445, 0x1.30c51f6d18eecp-916,
     0x1.c5dc0db2b1aecp-522, 0x1.61f6140b06485p-883, 0.0, 0.0, 0x1.09e08769a6664p-947,
     0.0, 0.0, 0.0, 0x1.98f84c111424cp-720, 0x1.93725184be0d4p-74, 0.0, 0.0, 0.0,
     0x1.3e863d69a681fp-627, 0.0, 0.0, 0.0, 0.0, 0x1.39e28a61530c2p-107, 0.0,
     0x1.20914b0b39288p-478, 0.0, 0x1.7c67187ac47a3p-874, 0x1.09fea1ba5b4eep-288,
     0x1.f67eb81ba1752p-33, 0x1p0, 0.0, 0x1.b103ac669c50ep-270, 0x1.ba56da99a44a7p-83,
     0.0, 0x1.da471b311927cp-379, 0.0, 0.0, 0x1.bda0688cfa3c5p-996, 0.0,
     0x1.ec89b9631a3f5p-208, 0.0, 0.0, 0x1.fb45045b55951p-459, 0x1.83908d65f0a66p-665,
     0.0, 0x1.111a94e21e624p-127, 0.0, 0.0, 0.0, 0x1.a796275149fc2p-719, 0.0,
     0x1.8a3453ec8b93ap-564, 0x1.06d858e68f322p-353, 0x1.35ae244e505dap-657,
     0x1.09088505b83afp-498, 0.0, 0.0, 0.0, 0x1.65e3f5d539c85p-640,
     0x1.a5d9a6e01930fp-1022, 0x1.5104aa935a884p-832, 0.0, 0x1.e2de3caf97a7bp-844,
     0x1.8fac4882dc472p-346, 0.0, 0x1.c102bf05633cap-753, 0x1.68c5cfaa90303p-14, 0.0,
     0x1.fe6bfc27b983bp-525, 0.0, 0x1.69bda0d4588d6p-902, 0.0, 0x1.636ea6896b804p-414,
     0x1.d83a9db357bcdp-968, 0.0, 0x1.152fb410aff7bp-812, 0.0, 0x1.0c271db4f6f7ep-643,
     0.0, 0x1.27940e838ae88p-315, 0x1.2d310603ea9a2p-934, 0x1.0d0183bd122ep-495,
     0x1.d3e67c757c31p-746, 0x1.d94b4cf44bb09p-961, 0.0, 0x1.7dea731224791p-652,
     0x1.422079e1ae44bp-796, 0x1.0d8359bc777c4p-787, 0x1.1e042bfe29366p-605,
     0x1.6cceb51c2f512p-275, 0x1.7363c427ddac6p-686, 0.0, 0.0, 0.0, 0.0,
     0x1.3035f43edafcbp-424, 0x1.639ef7c3f0e64p-614, 0x1.5ee2854cc1b58p-257,
     0x1.0f4fba9be65e6p-310, 0x1.59eefb7fb3012p-747, 0.0, 0.0, 0x1.f21b6b87eeb8ep-765,
     0.0, 0.0, 0x1.267a458cf38fep-663, 0x1.95f90619c6db3p-674, 0x1.a5b0820b1d94fp-781,
     0.0, 0.0, 0.0, 0x1.47a7d626fda49p-366, 0.0, 0x1.dca754023d316p-635, 0.0, 0.0,
     0x1.79c3dbf410e92p-175, 0x1.dc6ca0fb03985p-839, 0x1.37ac72cb38c61p-997, 0.0,
     0x1.3cb914ff1c44bp-188, 0.0, 0x1.9354206edab1fp-761, 0x1.d98100db8ad5cp-243, 0.0,
     0x1.6b25d6b3ab8e3p-186, 0.0, 0x1.68c918d71b39ep-143, 0.0, 0.0, 0.0,
     0x1.c01925bb514fep-783, 0.0, 0x1.281aae0125278p-129, 0.0, 0.0,
     0x1.036c211c42ec9p-807, 0x1.5de0d2298a108p-814, 0.0, 0.0, 0.0,
     0x1.331e8e7c8135ep-215, 0x1.78af6358be637p-453, 0.0, 0.0, 0x1.701da75ed23a3p-867,
     0x1.c939e3057e3ep-785, 0.0, 0x1.f2570087e5fccp-172, 0x1.51325ba14bbcp-573, 0.0,
     0x1.a6fe36d5e2a68p-659, 0x1.78f58fbb45751p-494, 0x1.48202eda51e92p-465, 0.0,
     0x1.1477e5cdfcfcfp-481, 0x1.485627aa3d698p-788, 0.0, 0x1.a816037bc30dbp-683,
     0x1.751dc1494fbdep-674, 0.0, 0.0, 0.0, 0.0, 0x1.290162a87fe51p-204,
     0x1.3552d72b49ad6p-71, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c978136b3141p-851,
     0.0, 0.0, 0x1.7da596a89ae07p-434, 0x1.d4f6546a99c89p-862, 0.0, 0.0, 0.0,
     0x1.cfde935f19cb9p-52, 0x1.1c35d7f7723ffp-85, 0.0, 0x1.cc46f05296a6bp-218, 0.0,
     0.0, 0.0, 0x1.94f9bec2496d9p-217, 0x1.e8f1a936d8896p-484, 0x1.03f1bcc8b27dep-985,
     0x1p0, 0x1.3ebb83c2890d7p-856, 0x1.fdfdc02fc6ddep-903, 0.0, 0.0, 0.0, 0.0,
     0x1.545798536f0cep-490, 0x1.9d54c91d50c85p-1006, 0x1.6f3bfbf13c3d4p-736, 0.0,
     0.0, 0x1.70eef7db27f36p-993, 0.0, 0x1.f1cc71d24bf9fp-763, 0x1.f7b1be9a564afp-327,
     0x1.1537f9c8be9f9p-1022, 0.0, 0.0, 0x1.9ad0accdcd5d1p-834,
     0x1.528efc46d6632p-725, 0.0, 0x1.8009fcc1e0e3bp-685, 0.0, 0x1.9fdd269a915c4p-422,
     0.0, 0x1.3ae16f789097ep-647, 0x1.a79bb5f015f3dp-319, 0x1.e17657d6fe3acp-831,
     0x1.50af390b0bccap-989, 0x1.747df5a8144a6p-810, 0x1.3656933c7553ap-583, 0.0, 0.0,
     0x1.949eeca93f97dp-706, 0x1.41255ddda3ba2p-479, 0x1.61d374ddf5ec4p-591,
     0x1.b0d1c6c2f6a04p-622, 0.0, 0.0, 0x1.6911a652a139fp-369, 0x1.7a5aa1c513408p-691,
     0x1.65539dd2d3e3fp-421, 0.0, 0x1.1cd8a2585d931p-619, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.dfe09dfee5494p-100, 0x1.b0d79b11cdc0cp-1015,
     0x1.a13cd60cf5114p-478, 0.0, 0.0, 0.0, 0x1.6b39e204d9aafp-545, 0.0, 0.0,
     0x1.ae34438322494p-762, 0x1.143d74be5d56cp-99, 0.0, 0x1.9de4257a791cbp-558,
     0x1.fb4c4b1f10759p-74, 0.0, 0.0, 0.0, 0x1.ffe2aa6f4cd37p-254,
     0x1.5ab399424199cp-420, 0x1.e5949a740c135p-580, 0.0, 0x1.7667142db4143p-712, 0.0,
     0x1.6d4aa75295235p-674, 0.0, 0.0, 0x1.a20354114b73p-762, 0x1.9edb279b53c25p-319,
     0x1.bd799e9e75d89p-744, 0.0, 0x1.34067ea5c93adp-580, 0.0, 0x1.918296704d68fp-862,
     0.0, 0x1.d38571fa340b7p-8, 0x1.1c4adedeb9bfbp-296, 0x1.c8801117ecce1p-494,
     0x1.b3d8cf9b63c05p-786, 0x1.d2799f543303p-15, 0.0, 0.0, 0.0, 0.0,
     0x1.99f9010052d0bp-174, 0x1.2d2eb24b010ep-330, 0x1.ada965b8e11abp-688, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ac596e96ef19p-262,
     0x1.315654ff489c5p-507, 0.0, 0x1.6bea64dbfe316p-576, 0x1.a433726505ee6p-450, 0.0,
     0.0, 0x1.390fdc6c409d7p-776, 0.0, 0.0, 0.0, 0.0, 0x1.7aa4216b666cbp-142,
     0x1.0c3cc14c5c43bp-247, 0.0, 0x1.627ab1828e69p-479, 0x1.8fc9d63762d4dp-306,
     0x1.232187f73db21p-727, 0.0, 0.0, 0.0, 0.0, 0x1.f0f3c864f7f01p-945, 0.0, 0.0,
     0.0, 0x1.f91640708408bp-685, 0x1.617f6016e4e3fp-344, 0x1.3d6862e75a3e9p-627, 0.0,
     0.0, 0x1.bf875801dc1c2p-196, 0x1.2eb508dfd2808p-865, 0.0, 0.0,
     0x1.11003113c43c7p-782, 0.0, 0x1.9bde707a11dd7p-242, 0x1.69cd0dc8bff97p-545,
     0x1.bbac98e71c562p-219, 0x1.ac8aab1fb80e9p-61, 0.0, 0x1.a597f0879e3e6p-312, 0.0,
     0x1.4f32598dbad5ep-781, 0x1.7d2cea1c4f9cep-415, 0.0, 0x1.e54013d459d4dp-314, 0.0,
     0x1.a8d474476137p-991, 0.0, 0x1.201d0262e87e1p-393, 0x1.01521d41c5eeap-243,
     0x1.6238f2f9d8e93p-660, 0x1.cc2c7182e872ep-954, 0x1.f59777b21fcbep-380,
     0x1.d145e7ec04eap-233, 0x1.3a3f71595862ap-141, 0x1.c6df89d22d793p-886, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.371266a2a3a03p-176, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.694b70d811ac6p-665, 0.0, 0.0, 0x1.bbb7e9cf36615p-849, 0x1.8e9607ff39327p-961,
     0.0, 0.0, 0.0, 0.0, 0x1.6e038606d2602p-308, 0.0, 0x1.66bb1777b58c3p-562,
     0x1.cc58c0069c872p-611, 0x1.dc6b447200802p-797, 0.0, 0x1.90395da0399f1p-427,
     0x1.e893a14fa4b95p-647, 0.0, 0.0, 0.0, 0x1.5aeaa893a11edp-851,
     0x1.edd85aca91ddbp-5, 0x1.446742c700dc3p-278, 0x1.5af66936b0f5ep-453,
     0x1.80dccc4c7f48dp-856, 0x1.5feef4f5ab8ecp-63, 0x1.04e3d403224bcp-241, 0.0,
     0x1.4d6743b853dd6p-89, 0.0, 0.0, 0.0, 0.0, 0x1.db34cb8e188dap-1013,
     0x1.3bcab25e3e7fap-411, 0.0, 0x1.c80cccd195d98p-599, 0x1.6c118207d03d9p-629,
     0x1.8df378ca0f1fbp-907, 0x1.3633a7b1295bbp-208, 0.0, 0.0, 0.0, 0.0,
     0x1.7800668839b7p-1003, 0x1.c92fc0ede6317p-7, 0.0, 0x1.b77ee5acb34aap-447,
     0x1.035d1f8e08921p-64, 0x1.7c01c47d5b002p-115, 0.0, 0.0, 0.0, 0.0,
     0x1.8d4f94e0ca75cp-848, 0x1.b341572afd79dp-200, 0.0, 0x1.b4f774f0bb809p-982, 0.0,
     0.0, 0x1.14f1ec1b31ec4p-24, 0x1.d76fc1425b541p-923, 0.0, 0.0, 0.0,
     0x1.5d433c3370bc1p-659, 0x1.a5c7ee6ad8c89p-766, 0x1.8a0afb87cc327p-559, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c78210a07026dp-888, 0.0, 0.0, 0x1.3de00d8bc499dp-915,
     0x1.50a8b790e1e3p-126, 0x1.933a707cfcaap-304, 0x1.779760fa2c5bdp-130, 0.0,
     0x1.2a5730d92d96ap-572, 0.0, 0x1.6e5a6b67f647p-23, 0x1.cdb7dc899dfd8p-940, 0.0,
     0x1.136c9420d5d63p-743, 0.0, 0x1.d261eee7c4025p-716, 0.0, 0.0,
     0x1.65d3631462169p-136, 0.0, 0.0, 0.0, 0x1.e6ead02481774p-833,
     0x1.16fc0f81a3da5p-992, 0x1.6ccb9b152c04dp-379, 0.0, 0x1.37bdcf8bd3a46p-134,
     0x1.27cde342ee2ebp-89, 0x1.cd9c139ea5b56p-641, 0.0, 0x1.306eec32892b1p-426, 0.0,
     0x1.0fa5cd8e32739p-679, 0.0, 0.0, 0.0, 0x1.4e5cb430a44ep-211, 0.0, 0.0, 0.0,
     0x1.9f456c785db57p-947, 0x1.7eec8ee0dce22p-588, 0.0, 0.0
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
            tmp1 = Sleef_erfcd2_u15kvx(tmp0);
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
    printf("Sleef_erfcd2_u15kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_erfcd2_u15kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
