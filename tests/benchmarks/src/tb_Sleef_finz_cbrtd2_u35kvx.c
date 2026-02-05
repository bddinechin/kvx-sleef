/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd2_u35kvx.c --function \
 *     Sleef_finz_cbrtd2_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.b54c1dd61c982p-135, 0.0, 0x1.54d1daa29fc38p-670, 0.0,
     0x1.b9aec2d4cc695p-782, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb1d6eddb440ep-388,
     0x1.ee24a67bbe25dp-407, 0.0, 0.0, 0.0, 0.0, 0x1.9b1b336df724fp-215,
     0x1.7ccb387ecbf7fp-54, 0.0, 0.0, 0x1.45cf58646299dp-525, 0.0,
     0x1.b6b7288ef0535p-88, 0.0, 0x1.bd19f939adf22p-877, 0x1.af19234d8c67dp-642, 0.0,
     0x1.9ba444cfe471bp-43, 0x1.d59b7accd48b1p-125, 0.0, 0.0, 0.0,
     0x1.e465aa1d64ab9p-978, 0x1.9516f5e0475e3p-949, 0.0, 0x1.3e5f7e96a2e4p-561, 0.0,
     0x1.a4c3d794c7cbfp-252, 0x1.94064bb951323p-912, 0x1.8d5ae59a8ead1p-485,
     0x1.bbe6561068323p-548, 0x1.0238e807c0005p-193, 0.0, 0.0, 0x1.8ffa78906c047p-802,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.710b795649908p-864, 0x1.d9cd65a635919p-38,
     0.0, 0x1.2865cefb4754ep-748, 0x1.25e68805a62cap-214, 0x1.2ead743224512p-275, 0.0,
     0x1.3047afa249375p-451, 0.0, 0x1.f11c6d8e915c7p-522, 0x1.1bb9731dedf75p-89,
     0x1.1cf97f5cd9ac1p-610, 0.0, 0x1.09c49452297adp-170, 0x1.cd3345b840094p-414,
     0x1.7e4960776f536p-641, 0x1.ea7cc6506cbc3p-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6fc9ffe4edb45p-908, 0x1.0446dcedb09a2p-369, 0.0, 0.0, 0.0,
     0x1.0dc2508a09c2p-866, 0.0, 0.0, 0x1.804b25ffb07b7p-374, 0x1.ead0de5c19e7fp-805,
     0x1.49c2e954c1c7cp-393, 0x1.060d67d140387p-307, 0.0, 0.0, 0.0,
     0x1.d7a9729071e06p-552, 0x1.286d6b23cf612p-267, 0x1.0b883834e60d6p-36, 0.0, 0.0,
     0x1.e0b8b50ba0538p-205, 0x1.0d30f5389e495p-936, 0x1.ca4c22790ac9ap-341,
     0x1.a48d52ed81605p-619, 0.0, 0.0, 0x1.693d81dc4e0dp-1007, 0x1.f8d5a7aa68de2p-498,
     0x1.476a5ba8de25bp-1004, 0x1.af52b7718a6bbp-896, 0.0, 0x1.a0ebbd6628fe5p-929,
     0.0, 0x1.42312a99ee9a6p-849, 0.0, 0.0, 0x1.40a2e0d7f6258p-10, 0.0, 0.0,
     0x1.b80876fe7d99ap-337, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a6b44b074f8ap-157, 0x1.07c240195299ap-972, 0x1.052e2e47e52b5p-952, 0.0,
     0x1.32d36a3b3e233p-777, 0x1.e628568000f5fp-347, 0.0, 0x1.bbc080641b81cp-848, 0.0,
     0x1.7b43c74257311p-957, 0.0, 0x1.eb759268bddd2p-100, 0x1.8345a3e3f8085p-683,
     0x1.7f972c5741fddp-53, 0x1.2955bbf1ac4b5p-237, 0.0, 0.0, 0.0,
     0x1.b41dd332dfc0ap-159, 0.0, 0x1.ae80098c84f63p-1000, 0x1.edbe47828f955p-370,
     0.0, 0.0, 0.0, 0.0, 0x1.747b3b97d4f12p-279, 0x1.b3cde8dbde445p-531, 0.0, 0.0,
     0.0, 0.0, 0x1.74efbf023c94bp-625, 0.0, 0x1.4a45cc232407fp-730,
     0x1.b0fe772567d17p-57, 0x1.71191dc7e92fp-422, 0.0, 0x1.556b96a10bedp-950,
     0x1.97d2676278986p-875, 0x1.9ef7117afaa67p-709, 0x1.72b90f25bbf25p-749,
     0x1.619b79a08f2f2p-822, 0x1.e3c29ab8d134cp-876, 0.0, 0x1.14544f66cf614p-581,
     0x1.d526e37af4fa4p-430, 0x1.ac92b54299b8ep-752, 0.0, 0x1.475371cb0a78ap-805,
     0x1.2eb34bf9eead2p-252, 0x1.5bdac1867f27ap-885, 0.0, 0x1.e1fdb83998cb6p-53, 0.0,
     0x1.8b11e485afe4bp-632, 0.0, 0.0, 0x1.df5b32294ff8fp-572, 0.0, 0.0, 0.0, 0.0,
     0x1.07190d1591c06p-235, 0x1.64235d69cb1d9p-365, 0.0, 0.0, 0x1.b866ad57a20d8p-64,
     0.0, 0x1.e97951acfddf3p-602, 0.0, 0.0, 0x1.a6f236f665398p-1011, 0.0,
     0x1.012207309a8e2p-341, 0.0, 0x1.bcfc5c17abe42p-476, 0.0, 0x1.a2e7b8abb130fp-367,
     0x1.8929243eaa5b7p-303, 0x1.6571b04a0502p-290, 0.0, 0x1.a3e7ada8893f2p-359, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4b9b829ac98cap-411, 0.0, 0x1.8eab5064fa4fep-604,
     0.0, 0.0, 0x1.23607e9bcb583p-17, 0.0, 0x1.f33d292b31f17p-613, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c36ff3aaa71ffp-978, 0.0, 0x1.da30ec6f4a7ccp-734, 0x1.6ac70c2c61295p-356,
     0x1.14680f5a60e38p-567, 0.0, 0x1.df50a1e8918b4p-922, 0x1.4ca392202b8acp-165,
     0x1.dc829392aa555p-921, 0x1.9da44e879770dp-508, 0x1.092fbd1f0bd0bp-785, 0.0,
     0x1.5d226140926efp-313, 0.0, 0.0, 0x1.d0dcc99c3a1bp-128, 0x1.3c9a48ee78786p-163,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a42130329d67p-463, 0.0,
     0x1.d1b330f7a3492p-635, 0.0, 0x1.17f1e3f8384bfp-400, 0.0, 0.0,
     0x1.72464b6ea0593p-375, 0.0, 0.0, 0x1.5c77c3d9e5525p-440, 0x1.c15dc2984d0b4p-833,
     0.0, 0.0, 0.0, 0x1.6a7cb944316c4p-351, 0.0, 0x1.57ae4002df297p-150, 0.0, 0.0,
     0.0, 0x1.0af03e7ff5a16p-452, 0x1.b979d0766d29p-677, 0x1.406c9dce124fep-104, 0.0,
     0x1.78ea34c4c9f51p-559, 0.0, 0x1.c4d4a54a7b828p-246, 0x1.7e3bbb3f95c3cp-1012,
     0x1.25c5b14c4177ep-1006, 0.0, 0.0, 0x1.581930ebd8684p-85, 0x1.fb388a6085553p-698,
     0x1.e5506dcd55dc3p-932, 0.0, 0.0, 0x1.e412dbbd5594p-400, 0.0,
     0x1.d12d301aa398p-1008, 0x1.eceb953bc967dp-703, 0x1.a6da47dfd4e51p-105, 0.0,
     0x1.bad6282f80425p-980, 0x1.af46ff8bb8bccp-799, 0.0, 0.0, 0x1.e1616aefc63e4p-979,
     0x1.a4317dcc8d4eep-444, 0.0, 0.0, 0x1.9f38c8612e529p-763, 0x1.c187716e498f6p-439,
     0x1.c1343b4dc1978p-51, 0.0, 0x1.3e40c67d6f2d2p-278, 0.0, 0.0,
     0x1.cb9510618a3e7p-322, 0.0, 0x1.50aa3a650695p-409, 0.0, 0x1.027c5b693bd1bp-572,
     0.0, 0.0, 0.0, 0x1.d4386f7c24709p-545, 0.0, 0.0, 0x1.46394acefa587p-900, 0.0,
     0x1.8803b66ce63a3p-807, 0.0, 0x1.10c842280bc83p-372, 0.0, 0x1.17215b599c79ep-414,
     0.0, 0.0, 0x1.eb63a8bf2075cp-703, 0.0, 0.0, 0.0, 0x1.fa99c4727e783p-628,
     0x1.8f71a54779cb2p-272, 0x1.08e8ea6fabbfcp-607, 0.0, 0x1.089e327270b3p-927, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b92ac815d7de5p-369, 0x1.c252f84189583p-453, 0.0, 0.0,
     0x1.8c97be2b82763p-385, 0.0, 0x1.88b199f397134p-702, 0.0, 0.0, 0.0, 0.0,
     0x1.ac9692fff1174p-270, 0.0, 0x1.1d3b075f0337dp-261, 0.0, 0.0,
     0x1.5082a457d9f54p-115, 0x1.ca261cb44de2bp-488, 0x1.d5d2c26a5aa4ep-184, 0.0,
     0x1.e730c479fb384p-937, 0x1.18e011dadd7edp-117, 0.0, 0.0, 0.0,
     0x1.0b67aaf176461p-787, 0x1.2903eeb453b2cp-501, 0.0, 0x1.042827508a74bp-106,
     0x1.5179eab1d09b1p-202, 0x1.07101920466e3p-189, 0x1.5e0790b08c021p-256,
     0x1.746271616a9ecp-91, 0x1.d2a700d8324ap-325, 0x1.3cb7ccc9e0259p-971, 0.0,
     0x1.870a4954ba881p-520, 0x1.03a8d00444da2p-526, 0x1.cb1e80a326befp-23, 0.0, 0.0,
     0x1.ec23224bea999p-228, 0.0, 0x1.6864b5880bc0ap-402, 0x1.2b9653a1bb35bp-29,
     0x1.d5768a4ea71a9p-49, 0.0, 0.0, 0.0, 0.0, 0x1.ec61fa7ffc22dp-282,
     0x1.31c41d9f3f95cp-453, 0x1.e7264e467aa13p-423, 0x1.ef269192d772cp-554,
     0x1.4e57a320072f9p-170, 0.0, 0x1.2d13aff6fba87p-402, 0.0, 0x1.14e42cecb0b12p-741,
     0x1.f937f6aad9e96p-501, 0.0, 0x1.27107b1c69856p-678, 0.0, 0.0, 0.0, 0.0,
     0x1.b56470c4b1985p-559, 0x1.5765e8caa464dp-970, 0x1.4146280716df5p-859,
     0x1.adaf531531b35p-570, 0x1.5d5e05dc6a1a4p-301, 0x1.f22999e7ec723p-513, 0.0, 0.0,
     0x1.b766707096f93p-133, 0x1.817dbb72cdfcfp-522, 0.0, 0.0, 0x1.8499625e5d1afp-964,
     0x1.e845248f95553p-197, 0.0, 0x1.a57cc098d8cbdp-766, 0x1.c33fe5c9e2624p-501,
     0x1.77773ce3f3ffap-576, 0x1.01b00096e161dp-30, 0.0, 0.0, 0x1.f0a988eb8b5f3p-167,
     0x1.7acfcd12c68fbp-632, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.709426b63b68bp-36,
     0x1.398423b9d3fdp-140, 0.0, 0x1.75c696416be13p-837, 0x1.d8c2dbbd528b7p-977,
     0x1.73690e70f128ep-161, 0x1.d98bde3a8dea8p-352, 0x1.33fc71b4a86b5p-409, 0.0,
     0x1.7578d42aed658p-834, 0.0, 0x1.ac34c186ded14p-211, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7a9dd6a15bacbp-193, 0.0, 0.0, 0x1.bb57d8e85e269p-113, 0.0,
     0x1.6cfbe0f0b7fc2p-7, 0.0, 0x1.21733221af2aep-716, 0x1.4d3c778e41492p-859,
     0x1.08f74269d42b4p-447, 0.0, 0.0, 0x1.2bff4b1bcaef3p-353, 0.0,
     0x1.1b03140533c31p-140, 0.0, 0x1.463f73a8d41d4p-37, 0x1.1ac9903f2646ap-847,
     0x1.52e632e6f1623p-680, 0x1.16198688e6848p-1000, 0x1.bc2ca6b08d969p-576, 0.0,
     0.0, 0x1.a44c26158ac0ap-287, 0.0, 0.0, 0.0, 0x1.eb0e72347b4bap-21,
     0x1.db6540a01ea92p-616, 0x1.13234e846bfddp-649, 0.0, 0.0, 0x1.7c5bcb65969c9p-484,
     0.0, 0.0, 0x1.4195a2bd3f4e3p-364, 0.0, 0.0, 0x1.ceda52e5367c7p-70, 0.0,
     0x1.b6da614da5d49p-946, 0.0, 0x1.db85ca3a8cf92p-280, 0.0, 0x1.d3639723aba3ap-526,
     0x1.b378ff6d8315dp-587, 0x1.449ac538ead25p-240, 0.0, 0.0, 0x1.5390aee2560dep-481,
     0.0, 0x1.2c5689a5b9e7ep-76, 0.0, 0.0, 0x1.c3012c2980886p-981,
     0x1.9cc3f1eb0c314p-715, 0.0, 0.0, 0.0, 0x1.4966d45d5c05cp-599, 0.0, 0.0,
     0x1.74eadb4c4be37p-396, 0x1.18f19eb3a8919p-500, 0x1.21535927f44d5p-71, 0.0,
     0x1.728eac07978fcp-222, 0x1.866ba211e4864p-972, 0x1.e822f83914cdcp-637,
     0x1.22b4207e13e89p-759, 0x1.49365118cb678p-411, 0x1.e5631544d11c8p-514, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8f55d846d6966p-162, 0x1.88a32d3f5c891p-658, 0.0,
     0x1.7d6eaac45842fp-1001, 0x1.d11c73c38c7c3p-924, 0x1.e4fd619c42bc8p-136,
     0x1.703999a8605e3p-535, 0.0, 0.0, 0x1.d5b03d4baec7p-679, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e820ad5797ep-423, 0x1.f27ac4b21d776p-81, 0x1.8e9abf439b25cp-569, 0.0,
     0x1.77feb7d596f16p-953, 0x1.0812f1765225dp-662, 0x1.be4ba6fb994cap-674,
     0x1.96b4b566d4f13p-765, 0.0, 0x1.45e26afe48b0ep-589, 0x1.ce69b886c8a8bp-104, 0.0,
     0x1.a972929fb020dp-700, 0x1.96490219e6703p-728, 0.0, 0.0, 0.0, 0.0,
     0x1.a48ae728efb55p-590, 0.0, 0.0, 0.0, 0x1.0cc6554fb33f5p-453,
     0x1.55f2d6462b76cp-80, 0x1.7bad0f2f9e41ep-982, 0.0, 0x1.d555428319d7fp-671, 0.0,
     0.0, 0.0, 0.0, 0x1.3d26dca5c3fcap-240, 0.0, 0.0, 0x1.51a8da114425ap-740,
     0x1.b7e486b1e5874p-47, 0x1.04ab863d0bfc9p-679, 0.0, 0x1.a91bfa0f3a727p-954, 0.0,
     0x1.78d4392a8b7dap-219, 0x1.762ad5dc7a2p-356, 0x1.c4ec343b098a2p-755,
     0x1.b08231ecdd3cp-801, 0.0, 0x1.cd9a83ffd13acp-717, 0.0, 0.0,
     0x1.25d537e8085f2p-28, 0x1.5e8eb3c274a69p-362, 0x1.1e782baa69a41p-230,
     0x1.41d4f08e37fcbp-414, 0.0, 0x1.710c602348132p-751, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6ced804388045p-289, 0x1.abe667a5e39cbp-40, 0x1.64fc8ba80d432p-995, 0.0,
     0x1.d9519055cac04p-12, 0.0, 0x1.7f160e992fa2p-317, 0.0, 0.0, 0.0,
     0x1.34a71f3f514c6p-945, 0.0, 0.0, 0.0, 0x1.768f6f618f74ap-343, 0.0, 0.0, 0.0,
     0x1.b3bbe15d5071ep-222, 0x1.deda3732714e7p-963, 0x1.d5115abd174e7p-349,
     0x1.7ef45b6b98d8bp-426, 0x1.455fd41714fdp-25, 0.0, 0x1.128d7f7bcd162p-231,
     0x1.9d29cfa9eb88dp-398, 0.0, 0.0, 0.0, 0.0, 0x1.2ac23c0947ad4p-109,
     0x1.4ae0b21efdadfp-421, 0.0, 0x1.f953f38002518p-400, 0.0, 0.0,
     0x1.7bbde3049ba4ap-469, 0x1.09debd87b1a22p-194, 0.0, 0x1.12f5797fd01c1p-586, 0.0,
     0x1.ab00b1f4aba1dp-386, 0x1.ceb55a055606fp-528, 0x1.10af5f3d899a3p-977, 0.0,
     0x1.90a7fe0769624p-443, 0x1.60218d75825eep-140, 0x1.7fcafede211a3p-254, 0.0,
     0x1.6a01c3692934dp-589, 0x1.a208cb76de952p-401, 0x1.6351da615ee99p-549,
     0x1.4fdd62057ab3cp-255, 0.0, 0x1.3f82c53b3bfd7p-604, 0.0, 0.0, 0.0,
     0x1.a965a7ee51cfp-744, 0.0, 0x1.9a31943a807aep-708, 0.0, 0x1.8a461e709fc96p-514,
     0x1.be3afa5a2d8a7p-899, 0x1.14949bc896f25p-956, 0.0, 0x1.685394336c5dap-873,
     0x1.6cdcff3aa5b76p-486, 0x1.8f7d527aa4b2cp-732, 0.0, 0.0, 0x1.2e527bd952337p-528,
     0.0, 0x1.00383ca92ded1p-109, 0.0, 0x1.d343cf540319dp-538, 0x1.0379dc3316fb6p-287,
     0.0, 0.0, 0.0, 0.0, 0x1.6733b0e13449bp-573, 0x1.981860abc0a45p-343, 0.0,
     0x1.3f7b740682331p-400, 0x1.307531946b257p-413, 0.0, 0.0, 0x1.14fd531dede1fp-438,
     0.0, 0x1.75dc44a26c3bdp-512, 0x1.900c71c9570c9p-439, 0x1.e3ffac97d1275p-880,
     0x1.b92d75e6d3b9ep-139, 0.0, 0x1.83f90b17793bbp-30, 0x1.568b2dadac078p-769, 0.0,
     0x1.33895ced39b58p-344, 0.0, 0.0, 0x1.61c12124c583ep-207, 0x1.8e1819e6f051fp-961,
     0x1.6048523e83d65p-976, 0x1.51da8a2712c53p-65, 0x1.6d73dfc75cdd9p-862,
     0x1.2d9324291736p-329, 0x1.5cccf6c40c15bp-829, 0.0, 0.0, 0x1.e405c08e4f88cp-599,
     0x1.700b3766ae34ap-577, 0.0, 0.0, 0x1.469110ba72b58p-436, 0x1.b9585133e314ep-820,
     0.0, 0.0, 0.0, 0.0, 0x1.1611805975b6dp-982, 0.0, 0x1.6568eea66581ap-467, 0.0,
     0.0, 0x1.5a73c28019384p-472, 0.0, 0.0, 0.0, 0x1.964a113c4d01ap-263,
     0x1.42ae0d66e08f8p-341, 0x1.f48ce6a07341p-752, 0.0, 0.0, 0x1.899deb113928dp-374,
     0x1.f06de6b25c11dp-55, 0.0, 0x1.0448fe1e1358ap-472, 0.0, 0.0, 0.0, 0.0,
     0x1.aaffd5fe1f8c1p-404, 0.0, 0.0, 0x1.5a26be3745171p-368, 0x1.891442eecec1dp-758,
     0.0, 0x1.cf6a7b22f2df2p-96, 0x1.5b4bc78fafd95p-882, 0x1.07ece514ef5ffp-397,
     0x1.c6e2a4e23345dp-762, 0.0, 0x1.88a10ff4b7e2ap-288, 0x1.9571a6cf4f8d4p-301, 0.0,
     0x1.da758ecca2985p-180, 0x1.f629a1662ee68p-846, 0.0, 0x1.c21ede7c99132p-657, 0.0,
     0x1.55abd515e3f78p-26, 0x1.a7a785ecaf09cp-94, 0.0, 0x1.011ee78070b56p-192, 0.0,
     0x1.018b036de219cp-660, 0.0, 0x1.54c7162e1b26ep-449, 0.0, 0.0,
     0x1.633530135ad4bp-88, 0x1.96de315d0a03bp-102, 0.0, 0x1.e84f2f00c1c66p-275, 0.0,
     0.0, 0x1.4aa60fd7a1fcap-652, 0x1.072b6fc00754ap-364, 0.0, 0x1.3c108b225bd86p-833,
     0x1.430c1018a245ep-591, 0.0, 0.0, 0x1.abf5978aabd75p-621, 0.0, 0.0,
     0x1.42fa3d5fb3636p-529, 0.0, 0.0, 0x1.c84a7bfc51458p-169, 0x1.e62131ac93745p-32,
     0.0, 0.0, 0x1.7b62cca8f648fp-582, 0x1.ae39ba0903b87p-195, 0.0, 0.0,
     0x1.aa84a496cd669p-219, 0x1.d38be91e61c05p-148, 0.0, 0x1.75a191f5a67ccp-507,
     0x1.a2fa98d812b93p-944, 0x1.64837236c849ep-716, 0x1.c6cceca6dfa83p-997,
     0x1.8d5d0e4a0431cp-420, 0.0, 0x1.88130911314dcp-690, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6f079ed59781ap-355, 0x1.ddec10c328e11p-587, 0x1.dabc788639af9p-325,
     0.0, 0x1.74d5fcca1f01bp-288, 0x1.71442d593eccdp-344, 0.0, 0.0, 0.0,
     0x1.756232aa0990ap-747, 0x1.5c6cce96f8a21p-633, 0.0, 0x1.031682af9c2c4p-831,
     0x1.ef86c1fc64841p-545, 0x1.67234f6b9caf7p-525, 0x1.1318cd873cc6ap-516,
     0x1.d7d068bf71f6ep-14, 0.0, 0x1.a5f7550b6f9f4p-230, 0.0, 0x1.76ab75e764318p-892,
     0x1.ff60f25a1bddcp-1014, 0x1.a07c253ad5751p-637, 0x1.8178638f36994p-473,
     0x1.c85296bf8df4dp-64, 0x1.0e25a5a05213bp-404, 0x1.a4e3483a6ac7dp-58,
     0x1.6e475940ed31fp-284, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa61556a4394cp-374, 0x1.8d905e673a879p-79, 0.0, 0.0, 0x1.1ff075a09f9efp-605,
     0x1.aaee131e68483p-251, 0.0, 0.0, 0.0, 0x1.ecffbdcbe056p-731, 0.0,
     0x1.e198d856f21cbp-88, 0.0, 0x1.5d722cc51bfc1p-553, 0.0, 0x1.d3c7c12464e46p-822,
     0x1.6c31bed1b7513p-503, 0.0, 0x1.c85aff924013bp-992, 0x1.2fd4e745392d6p-37,
     0x1.2c7a1de1baf6p-25, 0.0, 0.0, 0x1.02bcb15ed73c1p-563, 0.0, 0.0,
     0x1.32522aec5ac59p-1014, 0.0, 0.0, 0x1.62b47f7910fbdp-655,
     0x1.24efba0cfacd2p-939, 0x1.c8c9f4db6d644p-98, 0.0, 0x1.8ee5a63a89c7fp-774,
     0x1.a9c9b25abae77p-206, 0x1.74ec8c041ca39p-276, 0.0, 0x1.cbacad9e04a5p-864,
     0x1.b38b540a16ef4p-581, 0x1.aef19c14d1057p-458, 0.0, 0x1.7480bd6da7eeap-82, 0.0,
     0.0, 0.0, 0.0, 0x1.f67a8a5927287p-912, 0.0, 0.0, 0x1.b54ce3f297dd1p-764, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33ff039d28de8p-9, 0.0,
     0x1.d31129b157a2fp-703, 0.0, 0x1.d9d3b74f7bc03p-478, 0.0, 0x1.3937d41ee18c7p-738,
     0x1.db5505e84322fp-562, 0x1.cb3dcb5503c6fp-880, 0.0, 0.0, 0x1.50252ab56a2cap-814,
     0x1.0b1416d1ec71ep-537, 0.0, 0.0, 0x1.6e7ec3793f9e3p-916, 0.0, 0.0, 0.0,
     0x1.c6ccdc6f9b6d5p-532, 0x1.95ac2f7f36a64p-812, 0.0, 0.0, 0.0, 0.0,
     0x1.63852baaa78abp-360, 0x1.c9ca3df2cbc62p-528, 0x1.8766e4ee31bf6p-220,
     0x1.e37bee3224b49p-57, 0x1.23095d4b818cep-794, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.85220e30b31e6p-931, 0x1.8e064125b78cbp-7, 0x1.d07cccf1e4914p-283,
     0x1.93fd95e3aec85p-530, 0x1.5a98352e12072p-606, 0.0, 0.0, 0.0,
     0x1.203c2fb5cf257p-860, 0.0, 0.0, 0x1.9ab30d0b892ecp-220, 0x1.1d61a63c0eff9p-758,
     0x1.1055e0b6eb67cp-940, 0x1.3f8e036e68941p-163, 0.0, 0x1.21908a759dcfp-273, 0.0,
     0x1.bfd8ffb95ac05p-605, 0x1.b30cd13c73fadp-455, 0.0, 0.0, 0.0,
     0x1.a7a23b1a4b393p-668, 0x1.a183cd3661e7cp-378, 0x1.d4b19d0f9d834p-519, 0.0,
     0x1.bdb105a40f072p-107, 0x1.76d6bb82695d1p-111, 0x1.12cc12c413d15p-112,
     0x1.d1d33b85674cdp-815, 0.0, 0.0, 0x1.198a2341ec61fp-884, 0.0,
     0x1.d6402f8cf6a75p-993, 0.0, 0x1.661c7c92ab9d3p-965, 0.0, 0x1.8548ea326a615p-214,
     0.0, 0.0, 0x1.9188adc08b446p-725, 0.0, 0.0
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
            tmp1 = Sleef_finz_cbrtd2_u35kvx(tmp0);
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
    printf("Sleef_finz_cbrtd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
