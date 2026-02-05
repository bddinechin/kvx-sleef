/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand2_u10avx2128.c --function \
 *     Sleef_finz_atand2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0x1.8098a370cbf63p-152, 0.0, 0x1.ff0bdcfb970b8p-350, 0.0, 0.0, 0.0,
     0x1.99f5cdb9a4bf7p-139, 0.0, 0x1.89cb58bbbbbc8p-716, 0.0, 0x1.cfee41253c4b1p-281,
     0x1.59de45eddb632p-719, 0x1.2b9ab504d0a38p-284, 0x1.279bddd03cdc8p-598, 0.0,
     0x1.a25a973d0fbdap-391, 0x1.1f95bfa76ceccp-435, 0.0, 0.0, 0.0,
     0x1.5d87bb5a90b87p-254, 0.0, 0.0, 0.0, 0x1.4a46934b70585p-168,
     0x1.7acb88c64cd6cp-30, 0.0, 0x1.863dede4a91aap-449, 0x1.aeecef5b3e1d1p-428,
     0x1.e8c0d3e0f4f89p-256, 0.0, 0.0, 0x1.5f4e387046c0ap-1017, 0.0, 0.0, 0.0, 0.0,
     0x1.a7c50b87cd0efp-847, 0x1.254e7899ae4d2p-537, 0x1.addae0023a9aap-625, 0.0, 0.0,
     0x1.661e1ad722f95p-490, 0.0, 0.0, 0.0, 0.0, 0x1.25e838132b09ep-762, 0.0,
     0x1.d8dc48e56ea19p-375, 0x1.07859b3c7b176p-865, 0.0, 0x1.99719a4ff0b8p-160, 0.0,
     0.0, 0x1.ada415ee5c79ep-291, 0.0, 0.0, 0.0, 0.0, 0x1.f538087b4d369p-910,
     0x1.f610d01a960efp-603, 0.0, 0.0, 0.0, 0x1.ebf9d3a7952dbp-985,
     0x1.70ce94c0a19c5p-267, 0x1.e82e8ba06dac9p-436, 0.0, 0.0, 0x1.e5c0deba21644p-896,
     0x1.b8ff31b376438p-7, 0x1.5ca9bec93c4c3p-180, 0x1.b4559c8fe22dbp-987, 0.0, 0.0,
     0.0, 0x1.a9c64161ce985p-9, 0.0, 0x1.18ec0aeac65afp-773, 0x1.3a891b6545413p-168,
     0.0, 0.0, 0.0, 0x1.6fd6e8c842f17p-564, 0x1.800c9eba7864dp-17,
     0x1.8bad595435573p-103, 0.0, 0x1.9769820b02c7cp-78, 0x1.a5902cda95d9ep-393, 0.0,
     0.0, 0.0, 0x1.f7f6528104749p-870, 0.0, 0.0, 0x1.48ad36d798f58p-476,
     0x1.f739c17e115e4p-587, 0.0, 0x1.905c12b31c857p-29, 0.0, 0x1.11754e2804ecdp-742,
     0x1.e865f2914a9b9p-414, 0.0, 0.0, 0x1.3a7bbd2a3d64cp-528, 0.0,
     0x1.6f2faf93681c9p-439, 0.0, 0.0, 0.0, 0x1.7c628d9dcae3fp-868,
     0x1.7594216dececep-622, 0x1.394951cd4ec6dp-882, 0x1.209ec496f3f9bp-591,
     0x1.792efaa0ebf47p-172, 0x1.b60416cc6c525p-487, 0x1.845f2dba0fb8fp-603,
     0x1.634e77dde46d6p-920, 0x1.f6d753ea828ebp-133, 0x1.de2416c4d89b9p-637,
     0x1.4254b812c7ae3p-283, 0.0, 0.0, 0.0, 0.0, 0x1.2947a2018b215p-555,
     0x1.194346ed13cb2p-935, 0.0, 0.0, 0x1.61ad1599be115p-721, 0.0,
     0x1.67d384895fe5dp-318, 0x1.8bf5219413466p-108, 0.0, 0.0, 0x1.986e8d5e069b3p-857,
     0.0, 0x1.291f99b5c38dap-838, 0.0, 0x1.584809a43e972p-438, 0.0,
     0x1.5578ed4523731p-3, 0x1.cefd207387925p-967, 0x1.7a2ec963046abp-167, 0.0,
     0x1.83bfbb90ac4a6p-123, 0x1.19a80d576509ap-607, 0.0, 0x1.91bb83821989ap-93,
     0x1.aefcb27d4d1a9p-860, 0x1.93849cb18b9ep-749, 0.0, 0x1.cbdeb2956c849p-164, 0.0,
     0.0, 0.0, 0x1.1073908a07083p-615, 0.0, 0.0, 0x1.e4992b181a383p-511,
     0x1.b1105c09c771cp-481, 0.0, 0x1.13f5edc5d4a8ep-164, 0x1.229cb19e1772cp-216, 0.0,
     0.0, 0x1.fd6e12e5dc558p-735, 0x1.4808ef6ff3e76p-702, 0x1.ccdf860e77034p-562, 0.0,
     0.0, 0x1.7bb1679dbf336p-367, 0.0, 0x1.d556e82e36d5dp-746, 0.0, 0.0,
     0x1.ce1093fdbe453p-114, 0x1.21a69aa4e39bbp-498, 0x1.8c37e75b7e655p-866, 0.0,
     0x1.691d258b2ac06p-495, 0.0, 0.0, 0x1.18dc95eed0b41p-260, 0.0,
     0x1.fb01b2a891d31p-390, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.12a016e2a0c69p-639, 0x1.721a30325bb75p-574, 0.0, 0x1.7ac98e0623a6ap-748,
     0x1.ecace5f82eb2p-993, 0.0, 0.0, 0x1.1c52cd57f8c59p-594, 0x1.c895510ba2d1ap-928,
     0x1.8c2565c771347p-412, 0x1.39c6f77b790c5p-714, 0.0, 0.0, 0x1.47033214b1d22p-240,
     0x1.20b9096e18bbep-853, 0x1.27eac883ae138p-66, 0x1.8a665c52b378bp-427,
     0x1.eb48311bc0efcp-131, 0.0, 0x1.df1315c8fedb5p-870, 0x1.c1b53a1acfc5cp-114, 0.0,
     0x1.3f737c7ab041p-408, 0x1.f1cda4481513ap-490, 0.0, 0x1.68b212b4ac8aep-488, 0.0,
     0.0, 0x1.51673f5c27204p-690, 0.0, 0x1.7c51d44e82f75p-491, 0.0, 0.0, 0.0, 0.0,
     0x1.01ce673de120cp-841, 0x1.c36343a89f02p-676, 0.0, 0.0, 0.0,
     0x1.3f78dd96bd654p-232, 0x1.54a6d84552789p-861, 0.0, 0.0, 0x1.50c007f5e11f2p-738,
     0.0, 0.0, 0x1.06f1ef173faep-968, 0.0, 0.0, 0x1.c3b211081e3d2p-421, 0.0,
     0x1.c45a63f194d5bp-926, 0x1.84e94b435b41ap-546, 0x1.42ca107df18aap-138,
     0x1.36624ee6e7b54p-129, 0x1.88c5b3fb9672ap-1006, 0x1.3ce0659ca65b2p-854,
     0x1.f0e9537fc2faap-804, 0.0, 0.0, 0.0, 0x1.b5079cf193a07p-878, 0.0, 0.0, 0.0,
     0.0, 0x1.83da58abcd713p-9, 0.0, 0.0, 0.0, 0.0, 0x1.b8a9f6707a135p-1005,
     0x1.82f5d8a3d995p-893, 0.0, 0.0, 0x1.e469cd8e28182p-974, 0x1.91f3b270fd0ap-994,
     0.0, 0.0, 0.0, 0.0, 0x1.e28ddc95cb346p-444, 0.0, 0.0, 0.0,
     0x1.4862bbe086651p-312, 0x1.4a7730cb8765cp-61, 0x1.eda2aa8943f6bp-37, 0.0,
     0x1.60f66ea883befp-355, 0x1.15d4c20bd01d6p-954, 0.0, 0.0, 0.0,
     0x1.18a90b29638bfp-240, 0.0, 0.0, 0.0, 0x1.741c03086a90bp-786, 0.0,
     0x1.40b0b61e5bfeap-769, 0x1.80dab27d5ac2ep-548, 0.0, 0.0, 0x1.3f4e590c4a35ep-503,
     0x1.44514eeb028dap-193, 0.0, 0.0, 0x1.7e0688d7128c2p-151, 0x1.c6bc49f68c193p-538,
     0x1.89db23bde17c4p-678, 0.0, 0.0, 0.0, 0.0, 0x1.4115cb9b88d2ap-365,
     0x1.2a4e0bb052cc1p-108, 0.0, 0.0, 0x1.4945356bf102fp-420, 0x1.dfbc0b27c0976p-462,
     0x1.5edb702219682p-273, 0x1.a20ad4facb2bbp-717, 0x1.d0f271463aa3ep-266, 0.0,
     0x1.fde70a0dfcad3p-326, 0x1.36bb57408ef15p-933, 0x1.cff5845a626fep-416, 0.0, 0.0,
     0x1.f0b00db76032cp-94, 0.0, 0x1.d3eefbdd69a3ep-554, 0x1.294341db09a02p-587,
     0x1.e970c5030e4cdp-195, 0.0, 0.0, 0x1.80b86d388a421p-344, 0x1.56023f0309e75p-510,
     0.0, 0x1.873aaab635054p-277, 0.0, 0.0, 0.0, 0x1.7b5204c8640c4p-807, 0.0,
     0x1.faddfc5926e03p-894, 0x1.f5c6cdc5b3a01p-401, 0.0, 0.0, 0.0,
     0x1.ec7c5856f20dep-264, 0.0, 0x1.64ba87520d191p-281, 0.0, 0x1.930232eecbaf8p-135,
     0x1.14e661031d20fp-773, 0x1.9aaaae6b48f6ep-107, 0.0, 0x1.db637099d59e3p-632,
     0x1.a1f73462dc75cp-352, 0x1.300c9d7258bp-561, 0.0, 0.0, 0x1.82e8de644d077p-875,
     0x1.6563692f22ef3p-994, 0.0, 0x1.23648759427b9p-537, 0.0, 0x1.f2824a4f7fb88p-48,
     0x1.ec2be867ca932p-448, 0x1.b5a9f0fadb275p-452, 0x1.7ff6ba11e5b57p-28,
     0x1.f85f4d08cb978p-649, 0x1.21a1ab1461fdbp-18, 0.0, 0.0, 0x1.13ed6ab3054d3p-433,
     0.0, 0.0, 0.0, 0.0, 0x1.31afd0e490cb1p-991, 0x1.3442c51a1b7cdp-694, 0.0,
     0x1.e8c9fb65ddc53p-567, 0.0, 0x1.5a35fbea6cf1dp-860, 0.0, 0.0,
     0x1.f5674816e96c8p-419, 0.0, 0x1.46d59284fcd55p-750, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.18b4cfda961fdp-298, 0.0, 0x1.b36c90f58eeebp-271, 0x1.491b9b511303cp-318,
     0x1.285c12a688852p-795, 0x1.269ec61088403p-897, 0.0, 0.0, 0x1.459bc196964dp-1,
     0x1.5fe5bac2184b6p-780, 0.0, 0x1.d76af50d6214p-260, 0x1.6fb03ea32d349p-830, 0.0,
     0.0, 0.0, 0x1.7c95240bd78d1p-552, 0x1.bd0f4f963a69fp-835, 0x1.c3a8b24304d6ap-409,
     0.0, 0x1.d145b0f326814p-795, 0x1.fe8e67c2d26f6p-278, 0.0, 0x1.717cb54b44995p-601,
     0x1.2de41cbee5321p-981, 0.0, 0x1.49035e81b5d43p-962, 0.0, 0x1.d57eecfddf2c6p-25,
     0x1.b36728b009ddcp-240, 0.0, 0x1.6221de40247cep-1014, 0x1.1d5ed47be1fefp-779,
     0x1.e55044f820e09p-32, 0x1.f651ddd100b2bp-169, 0.0, 0x1.17a72a9d6fd45p-665,
     0x1.be8ed2492a5b3p-859, 0x1.96b8751ae8816p-266, 0x1.acb7ce60cd113p-13,
     0x1.4da1a0ec7ededp-125, 0x1.60205c17747b7p-40, 0x1.44d8287a122a7p-8, 0.0,
     0x1.b7f347c295997p-618, 0x1.3a4ca104de942p-670, 0x1.411c750c904a5p-733, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ff6173ad9a279p-940, 0x1.063aab0395606p-705, 0.0, 0.0, 0.0,
     0x1.2334c0e901034p-763, 0x1.301250d0f3e9cp-715, 0.0, 0.0, 0x1.9b63dbb6b5fd2p-231,
     0x1.e6e9e8449ff4bp-857, 0.0, 0x1.27e53ef47b1dap-399, 0x1.95590110fb43bp-647,
     0x1.fc8c787e852bfp-808, 0.0, 0.0, 0.0, 0x1.e2e40a4db78e1p-885, 0.0,
     0x1.2142861cbd367p-167, 0.0, 0x1.4859c736fc045p-591, 0x1.1da3ed1b1b778p-81, 0.0,
     0x1.a015db9d2893p-27, 0.0, 0x1.3ac8deed3debap-743, 0.0, 0.0,
     0x1.9136e11fcf35bp-220, 0x1.fbb1e7ef98f42p-597, 0.0, 0x1.b2fd79cbd753dp-337, 0.0,
     0x1.4b5f49a06c305p-217, 0.0, 0.0, 0x1.bc2e3d1d1773ap-804, 0.0,
     0x1.3f81400ef9937p-379, 0.0, 0.0, 0.0, 0x1.d28cee0685edap-627, 0.0,
     0x1.17f7430ae0f7p-408, 0.0, 0x1.f7fee843b3d96p-1011, 0x1.dde91da6a0cd8p-425,
     0x1.45d4ef8b5f01bp-860, 0x1.0232392bb1bddp-790, 0x1.353138acd3774p-848, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.84a536a8adef2p-725, 0x1.666e002db5de5p-711,
     0x1.4fdb855b36038p-83, 0x1.ef020f730f3bfp-571, 0.0, 0x1.a21b376ed2d5fp-950, 0.0,
     0.0, 0x1.f8bb068764357p-598, 0.0, 0.0, 0x1.3d0e056b3df94p-631,
     0x1.10f570aaa8dcap-82, 0.0, 0.0, 0x1.82ad63d8c2dbcp-845, 0.0, 0.0, 0.0, 0.0,
     0x1.7550c3de1e334p-721, 0.0, 0x1.6f5676c0fb304p-217, 0.0, 0.0, 0.0,
     0x1.af46cf7acaf6ep-79, 0x1.dc521fef9554ap-171, 0.0, 0x1.8b62e5de46e8bp-583, 0.0,
     0.0, 0.0, 0.0, 0x1.84980518d0372p-805, 0x1.547094e8452f4p-957,
     0x1.ec4723553e64ep-22, 0.0, 0x1.3f336556dbd94p-650, 0x1.eaab0d1d7c232p-418, 0.0,
     0.0, 0x1.74dde24cbc86fp-623, 0.0, 0.0, 0x1.e1f387727629dp-547, 0.0, 0.0,
     0x1.c92e9375a8999p-939, 0x1.87377d4940b4p-592, 0x1.635602e1a0fcep-122, 0.0,
     0x1.89153b1996f73p-30, 0x1.41db6159f7689p-413, 0.0, 0.0, 0.0,
     0x1.80a1ad4e35338p-876, 0.0, 0x1.237570a5dc626p-558, 0.0, 0.0,
     0x1.666f2f0882d19p-228, 0.0, 0x1.80aa22f43c8a9p-591, 0.0, 0x1.3ff8bfde9d161p-60,
     0.0, 0x1.27c3c3f1b12dep-463, 0x1.51b225095ea5fp-830, 0.0, 0x1.6b9bf431ecdd4p-406,
     0x1.c0da37efa2f8ep-627, 0x1.aadf70ddfa283p-899, 0.0, 0.0, 0x1.e1e88e691ec56p-406,
     0.0, 0.0, 0x1.f10cc5e1cebe1p-554, 0.0, 0x1.c0401e954c3efp-875,
     0x1.b31894756103p-79, 0x1.1ba2d4b0e981ep-559, 0x1.88d48c151aeb7p-958, 0.0, 0.0,
     0.0, 0.0, 0x1.990d87cf194d9p-808, 0x1.f536a67e43d33p-877, 0x1.c7ebc786015e5p-967,
     0.0, 0x1.e4d1d6d732d91p-576, 0.0, 0x1.4a4fe210fff1cp-863, 0.0,
     0x1.e8b139f38a578p-495, 0x1.51e7a54fe511fp-971, 0.0, 0.0, 0.0, 0.0,
     0x1.9be890749389ep-525, 0x1.ed0e1202ab102p-929, 0x1.16c1bc2fd24e3p-211,
     0x1.c380ba0b50236p-508, 0.0, 0.0, 0.0, 0.0, 0x1.abbd64de9e28cp-135,
     0x1.88552d0548de2p-998, 0x1.09c39af251d68p-84, 0x1.828cb94780165p-786, 0.0,
     0x1.7245c765e1402p-103, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b715d34b539f9p-991, 0.0,
     0x1.06d2cb8f6d2e8p-41, 0x1.fa9b0aff7ba84p-766, 0x1.9786f3d053cbdp-924,
     0x1.9d8054aa47623p-229, 0x1.dc87ef13f7f7ep-426, 0.0, 0.0, 0x1.d93d92112d35ap-732,
     0.0, 0x1.9828a92763246p-664, 0.0, 0.0, 0x1.bc4ad208a34fbp-697,
     0x1.37a1f9f85fc74p-338, 0x1.d2aa2a2915dc3p-465, 0x1.538bb644f773dp-155, 0.0, 0.0,
     0x1.d039e53279a1cp-217, 0x1.0f678fb3d343ap-997, 0x1.44ff90fb719a3p-640, 0.0,
     0x1.68c77d3853d24p-783, 0.0, 0x1.4e793e21405edp-79, 0.0, 0x1.afa2465a43a57p-536,
     0x1.e00d984de1e2ep-165, 0.0, 0.0, 0x1.e566a2b9bc5e8p-402, 0.0, 0.0,
     0x1.8102851dc377cp-172, 0x1.0949d3458de91p-956, 0.0, 0x1.06c48f1591e7ep-687,
     0x1.4b5fb2138ac84p-492, 0x1.08d01d7b9fbe6p-900, 0x1.19cb9011d693ep-1,
     0x1.7c58a062d75e7p-918, 0.0, 0.0, 0.0, 0x1.9bc54e105ef14p-464,
     0x1.f9ca022d2d054p-647, 0.0, 0x1.3ad3bf4faeb0dp-194, 0x1.467fc4e0a472ep-174, 0.0,
     0.0, 0x1.a8536194a1632p-726, 0.0, 0.0, 0.0, 0.0, 0x1.ca44fd9bb8db4p-704, 0.0,
     0.0, 0.0, 0x1.35006db147d1fp-537, 0x1.e9c473b8bae3bp-822, 0x1.ea874fa47cf81p-833,
     0.0, 0x1.619efa09d6389p-684, 0x1.eca662d4b6708p-86, 0.0, 0.0,
     0x1.ec7e15c3124efp-521, 0.0, 0x1.400827e80586fp-516, 0x1.865eefdf8599ap-233,
     0x1.8ae88ff8bc36ap-388, 0x1.c899bbd64821dp-618, 0.0, 0x1.bb6d370fbe7b8p-459, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31fd817d00457p-162, 0.0, 0.0,
     0x1.fde2d588feb11p-647, 0.0, 0x1.af79691ab044ap-945, 0.0, 0x1.e7e4be334a1ffp-470,
     0x1.3a26e31fcff6ap-696, 0.0, 0.0, 0x1.81901698f5852p-889, 0x1.c8861fbae9472p-193,
     0x1.1d1cbbf92f54p-308, 0x1.ef58989e4d881p-655, 0.0, 0.0, 0.0,
     0x1.4dc42217ad2dcp-599, 0x1.0e0463281b7afp-387, 0x1.054fa8c72acfdp-112,
     0x1.7f367b8282c4ep-1017, 0.0, 0x1.8f670c148aa41p-461, 0x1.9e40da084dbbcp-963,
     0.0, 0x1.382a0be87b28fp-298, 0.0, 0.0, 0x1.fc8842bb0ac73p-789,
     0x1.7d756d3a3a78fp-312, 0x1.b7d5a2ceee42bp-126, 0x1.81500192d1d17p-398, 0.0,
     0x1.6a4a2452c7f94p-469, 0.0, 0x1.7ebf78ca3bd08p-802, 0.0, 0.0,
     0x1.a844d88fc536ap-51, 0.0, 0x1.87bfd304cbe3ep-894, 0.0, 0x1.72387d6fd67f6p-687,
     0x1.9c9a5c359561bp-886, 0.0, 0x1.0e95e692e6eap-198, 0.0, 0x1.61ec74df7691p-301,
     0.0, 0.0, 0x1.0f908581bc9f1p-1006, 0x1.29ff84a1e9714p-301,
     0x1.d799ccc339e37p-534, 0x1.795de6306f8c3p-837, 0x1.f053a4e8d381dp-278, 0.0,
     0x1.7c9c5e0375ec3p-5, 0.0, 0x1.2c33202a16b66p-305, 0.0, 0x1.8a05ac5d3a6dfp-616,
     0x1.c5000b5abb051p-618, 0x1.708c7bcc8561cp-219, 0x1.cd6f1124c6285p-451, 0.0, 0.0,
     0x1.3bdd0ed2052c5p-73, 0x1.928b8cd846ed6p-480, 0.0, 0.0, 0.0,
     0x1.f9768ab3f0ec7p-394, 0x1.370baed74dc68p-582, 0x1.1853f9991c8ddp-17, 0.0, 0.0,
     0x1.619e197f76e8ep-890, 0x1.6c050a6be02c3p-330, 0x1.e6bc6f5d04a3cp-937, 0.0,
     0x1.30a8211b578bap-587, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f6f4b1e6ccd1p-423,
     0x1.406d1c50b1cc7p-364, 0x1.007943ab732d5p-942, 0.0, 0x1.d0cec94104602p-942, 0.0,
     0.0, 0.0, 0.0, 0x1.fc90e28aed939p-753, 0.0, 0x1.2f7961936c497p-687, 0.0,
     0x1.a6c32ebf1bb1dp-1009, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.170d504b5b2b8p-880, 0.0, 0x1.8840d937032c3p-857, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3b7a8f4803e7cp-383, 0.0, 0x1.64c8745744f5cp-686, 0.0,
     0x1.6ce3f38bb086bp-83, 0x1.23b96e70cc689p-308, 0.0, 0x1.30867187b3415p-303,
     0x1.1e63f62391ddp-738, 0.0, 0x1.66e760de6b887p-912, 0x1.f84b638dc1a42p-836, 0.0,
     0x1.77c1666791205p-836, 0x1.2902fd76c6b44p-303, 0.0, 0x1.beadfa6771309p-894,
     0x1.33aad67e10327p-754, 0.0, 0x1.0f4e3d744d2p-261, 0x1.f51b1ba15d64cp-483, 0.0,
     0x1.c45e92f8ea44p-244, 0x1.108410573ea4bp-404, 0x1.983b4a2375177p-227,
     0x1.354be54bf4c2cp-180, 0x1.26d5dacef1c78p-603, 0x1.1d66b14067874p-817,
     0x1.1fe1338a5d7cap-272, 0.0, 0x1.9df6158b8ebfep-90, 0x1.b16b8a17af1dep-19,
     0x1.165c3fa61def1p-954, 0x1.50fc27495e0cp-457, 0x1.5d4e639d24dp-186,
     0x1.d6e96cc09c324p-539, 0.0, 0x1.10ff9d9b5f713p-854, 0.0, 0.0,
     0x1.d4c6627f08b3fp-18, 0x1.ffd5b486c51c3p-975, 0x1.04eda852a82cfp-517, 0.0, 0.0,
     0.0, 0x1.e3bea819af1cdp-633, 0.0, 0.0, 0x1.4292fee640ccfp-649, 0x1p0,
     0x1.eb6f60ba3f66ep-754, 0x1.b1eb2a2763a0ep-915, 0.0, 0.0, 0x1.8c8d3b0fab2f1p-367,
     0.0, 0x1.987e05edd18dp-431, 0.0, 0.0, 0x1.b7bf094db9832p-164, 0.0, 0.0,
     0x1.78c291eb125e8p-389, 0x1.c56411970ea28p-121, 0.0, 0x1.a5861c46fc1acp-226, 0.0,
     0x1.7de2328dd5398p-289, 0x1.2a2dca3186569p-496, 0.0, 0x1.fd07c82e2aedep-343, 0.0,
     0x1.0a80b97beb2d7p-219, 0x1.6161566e5a4bp-446, 0x1.bf1f8ec8da8ep-687,
     0x1.5a59e1139ab11p-213, 0.0, 0x1.e8e249087f5aep-727, 0x1.6c1c21acfe288p-17,
     0x1.d8c7818ce20c1p-801, 0.0, 0x1.b1eac13cf7363p-400, 0.0, 0x1.3ad0fa63c6f26p-301,
     0.0, 0.0, 0x1.982be404f0214p-8, 0.0, 0.0, 0.0, 0.0, 0x1.4fbb28a228907p-180, 0.0,
     0x1.57676221afa04p-941, 0.0, 0x1.bdc3d23682403p-690, 0.0, 0x1.4c937fbc63bd1p-582,
     0x1.31c659140aea7p-914, 0x1.49876397302bdp-251, 0.0, 0x1.469870e54ed33p-704,
     0x1.9972fb3ac1085p-364, 0x1.ef459fd2156f6p-716, 0.0, 0.0, 0x1.9ee3ab65dd86p-794,
     0x1.95a57632713eap-339, 0.0, 0x1.e5d36e3bc92e6p-111, 0x1.d76ef2ea167c9p-710, 0.0,
     0x1.2bb35d164c993p-440, 0.0, 0x1.0ec5a69862e1cp-281, 0x1.a49cad812cf6fp-340,
     0x1.528465c9b4845p-761, 0.0, 0x1.ce0dc7b715ac5p-447, 0.0, 0.0, 0.0,
     0x1.8b2dbbafc4951p-891, 0.0, 0.0, 0.0, 0x1.427824ddcf382p-336, 0.0, 0.0,
     0x1.1b6db24d7d693p-634, 0x1.dd9c7fcd308ccp-831, 0x1.2a0d23cbb50f2p-740, 0.0, 0.0,
     0x1.2ad0e5869f5f8p-226, 0x1.8fdd325177ac7p-419, 0.0, 0x1.87d1f6c6c9fdep-148, 0.0,
     0x1.8805470ea77dap-600, 0.0, 0x1.b7e9f47570925p-339, 0.0, 0x1.b1ae19b433ce9p-430,
     0x1.9c22aab424c86p-718, 0x1.1e5d292d88a3fp-94, 0.0, 0.0, 0x1.165ecbc1ac08p-960,
     0.0, 0.0, 0x1.5e150084bb3abp-32, 0.0, 0x1.b18f1435f675ap-993, 0.0, 0.0,
     0x1.15f3c65afcaffp-451, 0x1.72aed0c4e72bbp-13, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cfb4128834469p-878, 0x1.3b4fbdccf8172p-165, 0.0, 0.0, 0x1.b6ffd10b93f82p-937,
     0.0, 0.0
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
            tmp1 = Sleef_finz_atand2_u10avx2128(tmp0);
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
    printf("Sleef_finz_atand2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atand2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
