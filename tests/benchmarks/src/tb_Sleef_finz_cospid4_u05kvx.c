/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospid4_u05kvx.c --function \
 *     Sleef_finz_cospid4_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.3d5a32d692bbep-962, 0x1.0dc864082c77ap-512, 0x1.42402ec54afccp-670,
     0x1.10f3cac34460bp-370, 0x1.032840a5479bp-520, 0x1.92500b26489fap-932, 0.0, 0.0,
     0.0, 0x1.7d9bc0b95cbd1p-447, 0.0, 0.0, 0.0, 0x1.ed823dddb1508p-47, 0.0, 0.0,
     0x1.e379b3f552afap-224, 0.0, 0x1.08201ff5f0f86p-980, 0x1.4dd10296374afp-178, 0.0,
     0x1.ceff1f89c189p-190, 0.0, 0x1.907e16c84d458p-699, 0.0, 0.0,
     0x1.5b7876279c584p-804, 0x1.7d6df98751853p-297, 0.0, 0.0, 0.0, 0.0,
     0x1.9405943c2f359p-832, 0x1.26067a51877fdp-68, 0x1.1fc69c11a6d34p-326, 0.0, 0.0,
     0x1.e3c89b4aae6c9p-32, 0x1.2efb8b4558bd9p-520, 0.0, 0.0, 0x1.99e5400c1046bp-855,
     0x1.70ea0fa3e0eb9p-569, 0x1.a1c80f3808244p-167, 0x1.9cc0cb91b4375p-1003, 0.0,
     0.0, 0.0, 0x1.baeb2ef638854p-673, 0x1.6a42bcd57305ap-209, 0.0,
     0x1.2a395df3cb4acp-253, 0.0, 0x1.a802f57d7530cp-259, 0x1.412ec8f793bb6p-99, 0.0,
     0x1.aa15521f64f75p-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6cd17ccff2f55p-336, 0.0,
     0x1.44345bde9c0fp-823, 0x1.58d8e5b504022p-90, 0.0, 0.0, 0.0,
     0x1.ec8d18c8ce1fp-166, 0x1.dcb0840ec5c27p-458, 0x1.91ecfaf4a5b48p-896, 0.0, 0.0,
     0.0, 0x1.21ddc4c9f3268p-113, 0x1.294b702c2670dp-855, 0.0, 0x1.a472512d957e1p-719,
     0.0, 0x1.bc22d388c3fafp-875, 0x1.59e9594bd8d9p-302, 0x1.4b81cc6c9e0e3p-150, 0.0,
     0.0, 0x1.673abbccc1a89p-66, 0.0, 0x1.600e56b58af3ep-928, 0.0, 0.0, 0.0,
     0x1.2adbd338824b9p-332, 0x1.048d756990ca3p-394, 0x1.1a8c315d659b8p-4, 0.0, 0.0,
     0.0, 0.0, 0x1.4d9ac9abae255p-106, 0x1.e805b830d6b58p-92, 0.0,
     0x1.502f11e25569ep-986, 0x1.d3d752a51deefp-780, 0x1.29dfd7d9eb6cfp-681,
     0x1.2f5a4abd5c011p-655, 0x1.c840b877e89fdp-871, 0x1.70263bd554741p-413, 0.0, 0.0,
     0x1.82e00facb155fp-66, 0.0, 0x1.c7956515db914p-681, 0x1.16c51c8d5bf19p-1017,
     0x1.41ea458242d1ap-442, 0x1.37ebddc83d0b9p-912, 0.0, 0.0, 0.0,
     0x1.31fe87480a4c6p-620, 0x1.5791b310f0dc2p-693, 0.0, 0.0, 0x1.7ae9e7aaf2ec3p-10,
     0.0, 0x1.2a134f14993ebp-381, 0x1.867768f23cc5ep-818, 0x1.23d4cf4d7f83cp-734, 0.0,
     0x1.b030fedafb5f7p-391, 0.0, 0.0, 0x1.7f7657e0114d1p-212, 0.0, 0.0,
     0x1.77bc25e4b191bp-438, 0x1.9bf79cfff299cp-335, 0x1.4b6c0e6640d4dp-273,
     0x1.b47c993742e2bp-324, 0.0, 0.0, 0.0, 0x1.380e365d0d68dp-458,
     0x1.4767af1bbdebep-948, 0.0, 0x1.5ab185dfa88ap-452, 0x1.85444fa291fc2p-24,
     0x1.05f167dca1af1p-40, 0.0, 0x1.1fadd50135521p-207, 0.0, 0x1.6f332de34d2dep-528,
     0x1.8dc6508374291p-642, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74c9921491c1dp-281,
     0x1.6a6ad7790bba3p-479, 0.0, 0.0, 0x1.dcf3a0bb4e437p-494, 0.0, 0.0, 0.0,
     0x1.b6a69f61438a1p-531, 0.0, 0x1.71a8c5b66db4fp-981, 0.0, 0x1.47f2125e9a80dp-627,
     0.0, 0.0, 0x1.a86e02c9382abp-531, 0.0, 0.0, 0x1.0bdc7bdac146bp-248, 0.0, 0.0,
     0.0, 0x1.6150cc463b3p-891, 0x1.2c15e02fe94afp-458, 0.0, 0x1.77b6e5636c73fp-142,
     0x1.86baa09aba20ep-304, 0.0, 0.0, 0x1.354abf4a604ffp-255, 0.0,
     0x1.06deda5612b98p-569, 0x1.edef1244d8212p-458, 0x1.1cb75b8f80ddbp-802,
     0x1.5c358cd5ad35cp-440, 0x1.8c1a296c329p-917, 0.0, 0.0, 0.0,
     0x1.9be7eae607366p-907, 0.0, 0x1.7ed694195d72ap-207, 0x1.af0b69432d4ecp-467,
     0x1.6d85b01ccd4fap-997, 0.0, 0x1.039b2e02984c2p-401, 0x1.cff0a49e77e62p-737, 0.0,
     0x1.7bc7698e54285p-690, 0.0, 0x1.c4b34897ec1e1p-329, 0.0, 0x1.d78389570b402p-952,
     0.0, 0x1.0d76b9cf2fe69p-914, 0x1.cf59d9e3ad17cp-404, 0x1.ffee47d7ff7fap-515,
     0x1.0db67e517cadcp-138, 0x1.7ec1db2a03eacp-943, 0.0, 0.0, 0.0,
     0x1.79c416a65364ap-537, 0x1.75ffc04aa248cp-366, 0x1.6a669ac6ff26fp-461, 0.0,
     0x1.a10fcf009c07ep-365, 0.0, 0.0, 0x1.345e6a1072323p-370, 0.0,
     0x1.1c6ca7a699adfp-332, 0x1.45bfab88776afp-756, 0.0, 0x1.765584c375d7dp-532,
     0x1.9ae79cdba0867p-568, 0x1.071d45925c901p-637, 0x1.d0c10964916d3p-769,
     0x1.837664badf677p-357, 0x1.79abc1be67063p-886, 0x1.610b7ec93345p-337,
     0x1.2a4d9e21cb09bp-55, 0x1.edb8ce9ebdee2p-486, 0.0, 0.0, 0.0,
     0x1.23c777cfd0f7bp-494, 0.0, 0x1.d644ef8adf1ebp-637, 0x1.593039eca4c42p-463, 0.0,
     0x1.a7d9acdbe3371p-939, 0.0, 0.0, 0.0, 0.0, 0x1.b1b5fc4b58e2dp-779, 0.0,
     0x1.95eb886c6a432p-669, 0.0, 0.0, 0x1.915e000f7dc0fp-114, 0.0,
     0x1.dd2bfe32c72e8p-85, 0x1.e534eedf481f1p-84, 0x1.32f8b39bd3b9bp-701, 0.0, 0.0,
     0x1.c3cedf5674356p-633, 0x1.c84c60a760b34p-1005, 0x1.644c2bdf1b80ep-292,
     0x1.6035ed0b07ed2p-974, 0x1.9006dd152be2ap-833, 0x1.b083e0643e478p-502, 0.0, 0.0,
     0x1.5dceb4a13f2f1p-964, 0.0, 0.0, 0x1.8aa290b0c2dccp-528, 0x1.2981ba40f303ep-874,
     0.0, 0x1.f443208a388cp-451, 0x1.234bfe6df46b5p-836, 0.0, 0x1.d2dd3d9b73f7dp-912,
     0.0, 0.0, 0x1.11f401be903cfp-952, 0.0, 0x1.bdde33480799cp-365, 0.0, 0.0,
     0x1.df5850a96d01fp-466, 0x1.45d9acd291329p-338, 0x1.15cad74ee89b8p-360,
     0x1.a845632a0f79ap-678, 0.0, 0x1.ba587b13b7721p-969, 0x1.2c05f58ca26bcp-871, 0.0,
     0x1.463fcf369fb0dp-270, 0.0, 0x1.689e30b798703p-672, 0x1.6a4cc04b86a2ep-872, 0.0,
     0x1.414987317c1a7p-686, 0x1.fe45f9b81414cp-288, 0x1.20ace99c39993p-921, 0.0, 0.0,
     0.0, 0x1.e4704c15310b4p-603, 0.0, 0x1.e255972d1342p-343, 0.0, 0.0, 0.0,
     0x1.556bd6f7f53dfp-45, 0x1.0a9ed438847c6p-846, 0x1.f71cad79b1e8ap-883,
     0x1.7d127ae31d203p-934, 0.0, 0x1.d3692de8f99cbp-97, 0x1.253c48c06026cp-945, 0.0,
     0.0, 0x1.71d540641ea86p-708, 0x1.29339d794e5ffp-651, 0x1.dbf32407500c3p-156, 0.0,
     0x1.f02532573e0e9p-51, 0x1.d629e2e1cb0e2p-227, 0.0, 0x1.bae0b406e8ec3p-599, 0.0,
     0.0, 0x1.965933c67cb3bp-761, 0.0, 0.0, 0x1.2aa79b5ec36b4p-975,
     0x1.da81dde81f16bp-637, 0x1.49bc47448ddap-13, 0x1.50ebdd95f16ebp-580, 0.0,
     0x1.9ac38605dda81p-351, 0.0, 0x1.9befd5ef9a8adp-570, 0x1.6de32f98d5a37p-938,
     0x1.1be2896e5b1f1p-562, 0.0, 0x1.ea6139ffe3a0ap-993, 0.0, 0x1.5c3ca748d9e71p-492,
     0.0, 0.0, 0x1.15f572941333ep-579, 0.0, 0.0, 0x1.1ed0593d2c15p-906,
     0x1.dbc52dd076793p-829, 0x1.cd4de75a24efbp-996, 0.0, 0.0,
     0x1.3d89324871458p-1007, 0.0, 0.0, 0.0, 0x1.d752d848024afp-356,
     0x1.347643caf6441p-519, 0x1.cdafc76463a0dp-32, 0.0, 0.0, 0.0, 0.0,
     0x1.fba4c71a00528p-619, 0.0, 0x1.1734e7db63e1cp-70, 0.0, 0x1.1375991b4d17bp-638,
     0x1.8afe528f386f1p-957, 0x1.285c718c1c887p-467, 0x1.7b5a1bc1a4dfdp-823,
     0x1.6cc51196c73fep-504, 0.0, 0x1.36fab591e9bbap-434, 0.0, 0.0,
     0x1.cd95088858757p-571, 0.0, 0x1.a71c5d1d87b79p-698, 0.0, 0.0,
     0x1.1776d643e62d6p-171, 0.0, 0x1.265350e402c1cp-754, 0.0, 0x1.7bf32d2d52ea5p-139,
     0.0, 0.0, 0.0, 0.0, 0x1.8142dfcf4bb21p-489, 0.0, 0x1.b69af67b6c2f2p-746, 0.0,
     0x1.00aab6fc61398p-773, 0.0, 0x1.d23a328428d5fp-460, 0x1.8b9232b268efap-98,
     0x1.6ab3a4f44d095p-381, 0x1.444f83f043f62p-834, 0x1.8481ed5c8a50ep-630,
     0x1.c3f8b2c3b29cbp-291, 0x1.230884eff0281p-469, 0.0, 0x1.b1f2cd412646p-254, 0.0,
     0x1.f6260a05acec6p-652, 0x1.858de96ad53d6p-350, 0x1.ece28036525b8p-80,
     0x1.17437ade68b49p-311, 0x1.7fbba93f41731p-749, 0x1.dcfb7f0ffbecap-87,
     0x1.e29dee2c35c67p-264, 0x1.205e3347acf9ap-480, 0x1.9b740f633123fp-808,
     0x1.a29ad8a01b75bp-25, 0x1.a778c77c783b4p-567, 0.0, 0.0, 0x1.e38f0433dbce1p-937,
     0.0, 0x1.8096caaa40228p-583, 0x1.92dd1a82344cdp-37, 0x1.40d7f77b073bcp-697, 0.0,
     0.0, 0x1.ca431f247ce1cp-679, 0x1.a0cc78403333cp-363, 0x1.f4ccc777eac3cp-800, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1058729c684cfp-130, 0x1.f83bc127ca88fp-807, 0.0,
     0x1.a24e5d210800ep-443, 0.0, 0x1.209297d6b687fp-517, 0.0, 0.0,
     0x1.6a3215ecfbddcp-395, 0.0, 0.0, 0.0, 0.0, 0x1.1291fdb71b6f1p-384,
     0x1.c96f4aed6da63p-127, 0x1.570cf58fba6f6p-929, 0x1.3f816920c7cacp-487, 0.0, 0.0,
     0.0, 0.0, 0x1.d869e7eeec40ep-392, 0x1.22b1f7720c1b8p-91, 0x1.e66565e0ceb98p-386,
     0.0, 0x1.9b24cd1dbdc7cp-76, 0x1.7f3fba06cacf8p-338, 0.0, 0.0, 0.0, 0.0,
     0x1.0c61685c48d0bp-610, 0x1.4692080b6b05bp-52, 0x1.974d05793d951p-857, 0.0,
     0x1.554f6b1afaf27p-93, 0x1.779b4737ce453p-228, 0.0, 0x1.cdbf78f7b7146p-262,
     0x1.28c313027a70bp-1006, 0.0, 0.0, 0x1.78a9e6eafe457p-235, 0.0,
     0x1.62d9aca91229cp-635, 0x1.f2fe1e1d071b3p-963, 0.0, 0.0, 0x1.3a1c254f34bb7p-92,
     0x1.c26b9ad86bed5p-915, 0x1.12292c104ac0cp-753, 0x1.2d617d7b08782p-277,
     0x1.93ebfca62a0f7p-941, 0.0, 0.0, 0.0, 0x1.8ca570dccb143p-732, 0.0, 0.0,
     0x1.c7cd88e6ba11bp-685, 0.0, 0x1.31a1a677ba53bp-771, 0x1.69944d12e38f9p-47, 0.0,
     0.0, 0.0, 0x1.355cacd2da077p-874, 0x1.d6b113a2597dap-68, 0.0,
     0x1.7dbc76ca089cbp-916, 0x1.7945b51264b82p-323, 0.0, 0.0, 0.0,
     0x1.6a2a7d79e96f9p-941, 0x1.ff2675b54a42fp-356, 0x1.f895e05335436p-277, 0.0, 0.0,
     0.0, 0.0, 0x1.a9eb45e2503fp-412, 0x1.a579e98eefeb3p-1008, 0x1.e6ace1020a014p-227,
     0x1.4846e086b5c71p-731, 0.0, 0.0, 0.0, 0.0, 0x1.7770381c8b811p-530,
     0x1.ea65613d0c297p-316, 0x1.34719ca8be037p-800, 0x1.75be198a30004p-527,
     0x1.bc88825fb273p-1016, 0x1.5e0751478886cp-90, 0.0, 0.0, 0x1.c06d83a657619p-937,
     0.0, 0.0, 0.0, 0x1.25804ff628382p-630, 0.0, 0x1.e43cf86bc875cp-905,
     0x1.f3d68d91bebaep-108, 0x1.0534aac13b39fp-26, 0x1.3ee8328ea1931p-531, 0.0, 0.0,
     0.0, 0x1.e171ebbc18ae6p-663, 0.0, 0x1.5017eb801588cp-597, 0x1.8c5ac47f73c85p-847,
     0.0, 0x1.21b854c4fbcc7p-213, 0.0, 0x1.57c3f14e1383ep-468, 0.0, 0.0,
     0x1.86d575b1c87fdp-181, 0x1.3f6966c68a8a7p-712, 0.0, 0.0, 0.0,
     0x1.8a21000089d4p-39, 0x1.f8f1c46e99f6dp-44, 0.0, 0.0, 0x1.37fe9be99e41bp-44,
     0x1.afb19c1d60ae8p-39, 0.0, 0x1.97c3a224503fap-902, 0.0, 0.0,
     0x1.e0ace303e143fp-693, 0x1.d1f456c931c82p-152, 0.0, 0.0, 0.0,
     0x1.ad9c4bee4f105p-809, 0.0, 0x1.44886c690abc2p-795, 0.0, 0.0,
     0x1.815d834d651c4p-968, 0x1.a0b41f9c0221p-395, 0.0, 0.0, 0x1.19e92ea5746adp-612,
     0x1.75804b651e0f1p-136, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6850fbf081c77p-939, 0.0,
     0.0, 0x1.d64bd4abf798ep-78, 0x1.610bb838974cdp-748, 0.0, 0x1.0f870f1e89dfdp-237,
     0x1.642519d574948p-320, 0.0, 0.0, 0x1.3f7c8be2542ecp-688, 0x1.e963990abd51ep-792,
     0.0, 0x1.4a6c83ee31443p-482, 0.0, 0x1.3261847cb4c65p-529, 0x1.a34e2377f310ap-881,
     0.0, 0.0, 0.0, 0x1.93a77d0b7cf4fp-595, 0x1.78571dfd801d3p-352, 0.0, 0.0,
     0x1.ef4f2e1943cf2p-431, 0.0, 0x1.e399ae2db34c5p-143, 0.0, 0x1.a8bcbeaf7b962p-813,
     0.0, 0.0, 0.0, 0x1.777afef0db1b8p-1017, 0x1.43205d8f18cacp-322, 0.0,
     0x1.b3e563caa1f04p-858, 0x1.19e43cf8ffd19p-265, 0x1.9850a75a3a8c1p-500,
     0x1.37e4e0bfe7d7ep-601, 0.0, 0.0, 0.0, 0x1.de26664fdda48p-39,
     0x1.1ee140c23e375p-708, 0.0, 0.0, 0x1.06cb6ab6d879p-265, 0x1.eaee4ee6b5168p-234,
     0x1.ac2be0eb6507bp-1022, 0x1.72684582e1838p-368, 0x1.61b2e1ee6a345p-248, 0.0,
     0.0, 0x1.83714923c3efcp-702, 0.0, 0x1.8b3e3b51032d2p-70, 0.0,
     0x1.67ed31bb67737p-392, 0x1.1593f47d2dc52p-496, 0.0, 0x1.f9c7bf926f51bp-68,
     0x1.9f6a7c9a89791p-745, 0.0, 0x1.31d280837738dp-883, 0.0, 0x1.7fba09be864b7p-786,
     0x1.a54f9ee3b5001p-574, 0.0, 0.0, 0x1.01e84da928531p-252, 0x1.37b0e88077bd6p-950,
     0x1.bc9fb5762a561p-699, 0x1.2158db096e3bfp-520, 0x1.3ed172b686435p-385,
     0x1.3123f467e9356p-697, 0.0, 0.0, 0.0, 0x1.5bc7c15e5b756p-108, 0.0, 0.0,
     0x1.461851da85d9dp-675, 0.0, 0.0, 0x1.039f59773db2fp-858, 0.0, 0.0,
     0x1.a82ef8c2c8fe3p-465, 0x1.70787b1cf6e82p-377, 0x1.f171f25c83331p-566, 0.0,
     0x1.9ca226d12c3c2p-761, 0.0, 0x1.747805e2751p-296, 0x1.3cd00816af574p-378,
     0x1.3c62c14a8bba8p-736, 0x1.401358ec43329p-168, 0.0, 0x1.4a0a4482741a2p-843,
     0x1.5874bb6bcde04p-469, 0x1.04c740b119866p-291, 0x1.91cbc94e70346p-745, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8e1e4812cbb68p-545, 0x1.78816dbf13fc2p-461,
     0x1.a6bd821321606p-449, 0.0, 0x1.c194af25f1e33p-702, 0x1.2a28bd3f143b8p-682,
     0x1.f17f1fbd3afc3p-327, 0x1.f107e3e587e91p-983, 0x1.d5a686847c3cap-66,
     0x1.a93cb1ac80ebfp-174, 0.0, 0x1.aeccd572f863ep-833, 0.0, 0x1.81d442ec5140ep-988,
     0.0, 0x1.691bc8de93963p-915, 0.0, 0.0, 0x1.cbc97dc35fb11p-850,
     0x1.09bd7ad8b0196p-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a9107671175bfp-830, 0x1.a067176134001p-362, 0x1.a4f8de966e616p-634,
     0x1.60b7a6332a576p-626, 0.0, 0x1.d85974eee51fcp-509, 0.0, 0.0,
     0x1.a21daa4b6b9dap-81, 0x1.22874aa11242cp-236, 0x1.828061e0c2c0ep-644, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a789ef7a5256fp-661, 0.0, 0x1.7b8edaf572afbp-690, 0.0,
     0x1.695c4acec6e18p-873, 0x1.6f92d02762989p-484, 0.0, 0.0, 0.0,
     0x1.a56bbd673caa2p-316, 0.0, 0.0, 0x1.dc3e281e7f738p-723, 0x1.e9e630f2e97dfp-292,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2843cd2efb62ap-469, 0x1.47e63455dffc3p-575,
     0x1.0b788e707bc5fp-368, 0.0, 0.0, 0x1.738c8d73fafe2p-741, 0x1.71de60e561768p-536,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02353576027bap-150, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e165ba911c608p-113, 0.0, 0.0, 0.0, 0x1.250293018dc59p-1021, 0.0,
     0x1.f6cd9e0fd6651p-497, 0.0, 0.0, 0.0, 0.0, 0x1.6ff50777028e3p-561,
     0x1.0aeeb8cd2166p-974, 0.0, 0x1.8c43e52f7c74dp-140, 0.0, 0.0,
     0x1.4e9bee3956cbbp-548, 0x1.34f2f8ef164aap-71, 0x1.4290bf36d3a43p-196, 0.0, 0.0,
     0.0, 0.0, 0x1.1239b6381779dp-333, 0.0, 0x1.5be3453a7528bp-751,
     0x1.2911bf2816de4p-895, 0x1.598fc5bf25f85p-919, 0x1.2250f7b9ef0c2p-369,
     0x1.4fb0fe19ff2fep-191, 0x1.4386682fb2df1p-645, 0x1.573dca08f8f1cp-127, 0.0, 0.0,
     0x1.42a7c6c5de43ap-303, 0x1.76235fe056487p-623, 0.0, 0.0, 0x1.a2765ba321573p-467,
     0x1.74d86d0140551p-126, 0.0, 0x1.2fc4170ed076bp-868, 0.0, 0.0,
     0x1.77c1c15bc994p-57, 0x1.2f7cdb2d22452p-385, 0x1.9268c84d53f4dp-338,
     0x1.4663e3acfaaaep-19, 0.0, 0x1.165eaed8bf23p-185, 0.0, 0.0,
     0x1.c25ee72584086p-443, 0.0, 0x1.7a6a24c608fcfp-346, 0.0, 0.0, 0.0, 0.0,
     0x1.5ebcc5cf46cbp-287, 0.0, 0.0, 0x1.2cdafa6497293p-255, 0x1.dcb7ffc62a2cdp-587,
     0x1.e9f0bb393aec3p-924, 0x1.0065360eadec6p-317, 0x1.86cda864dcf4ap-231,
     0x1.4ed6788904aacp-532, 0x1.bfc93153bdc49p-474, 0x1.11db4b65aaa78p-981, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.9b15da7eb5ffp-280, 0.0, 0.0, 0.0, 0x1.1ba2d039f8facp-651,
     0x1.73b7cc9553aa2p-355, 0.0, 0.0, 0.0, 0.0, 0x1.e0cbbea83deadp-360,
     0x1.bcac12c8d55eap-609, 0x1.9da2fb26957e8p-248, 0x1.e4e16ac675ad9p-506,
     0x1.34149b1884167p-501, 0.0, 0.0, 0.0, 0.0, 0x1.e2bfeaa46d7ddp-685, 0.0, 0.0,
     0.0, 0x1.2d35d5ea01965p-336, 0.0, 0x1.c1824e8a57638p-951,
     0x1.2811027b31f05p-1017, 0x1.07ee5c508b4a1p-360, 0.0, 0x1.5978db3e4151cp-477,
     0.0, 0.0, 0.0, 0.0, 0x1.3d60483dda29bp-86, 0x1.4376e72e1bdbdp-774, 0.0, 0.0,
     0x1.d890f6f45c87bp-265, 0.0, 0.0, 0x1.60385a280da7dp-706, 0.0,
     0x1.12888294311fdp-923, 0.0, 0x1.30061ae06ccf5p-301, 0x1.4bb14d3fda1c3p-46, 0.0,
     0x1.8f07ccae8cf61p-846, 0.0, 0x1.62807187fa4f1p-871, 0x1.65c736821d599p-270, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7e6aa8771fe65p-987, 0x1.4a83264ace3bfp-206, 0.0, 0.0,
     0.0, 0x1.857afae6a5b3fp-361, 0x1.1daa27f96f136p-468, 0.0, 0x1.afb1fb83e439dp-454,
     0.0, 0.0, 0x1.8a0bb387a1532p-582, 0.0, 0x1.cc48093572e04p-458,
     0x1.12ffa7bbb2a9dp-857, 0.0, 0.0, 0.0, 0x1.4ad8780212ea9p-972, 0.0, 0.0, 0.0,
     0x1.49505deaaa7edp-570, 0.0, 0.0, 0x1.6c17dd4be05f4p-139, 0.0,
     0x1.54240e0986ffdp-135, 0x1.537c9985c67b3p-1, 0x1.da84539b14eb9p-781, 0.0,
     0x1.e65afb5ae9175p-902, 0.0, 0.0, 0.0, 0.0, 0x1.72ad5d4a30c67p-834, 0.0, 0.0,
     0.0, 0.0, 0x1.89521337b35b8p-66, 0x1.391fa6cd754c9p-552, 0.0, 0.0, 0.0,
     0x1.d42a07d1ba45ep-82, 0x1.0596072389361p-298, 0.0, 0x1.35c0cbc8d9429p-326,
     0x1.7b0aec5a3ececp-343, 0x1.06a74a4b13999p-520, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1bf88179f2eap-673, 0x1.44bcbadf52ac4p-384, 0.0, 0.0, 0x1.a14c2f20b582fp-283,
     0x1.58feafc5ea718p-376, 0.0, 0.0, 0x1.8b5de91f2e0ebp-360, 0.0, 0.0, 0.0,
     0x1.af57332191b1ep-734, 0.0, 0.0, 0x1.0a06ceb72a842p-834, 0.0, 0.0,
     0x1.a2e9fc3ca8b32p-976, 0.0, 0x1.e41306b16f9d2p-802, 0x1.096e423557138p-597, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_cospid4_u05kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_cospid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cospid4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
