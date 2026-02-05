/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floord2_avx2128.c --function Sleef_floord2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0.0, 0x1.9e9d9c28f278ap-826, 0.0, 0x1.cf8e72ec09951p-278, 0.0, 0.0,
     0x1.5ce505515968dp-164, 0x1.cf2ac99be7445p-76, 0.0, 0.0, 0x1.4241efac4ba44p-381,
     0x1.1f6bdb1185bbcp-323, 0x1.4b44938d903afp-433, 0.0, 0.0, 0x1.827685921b763p-25,
     0x1.9e77bf51c10c2p-833, 0.0, 0x1.6fa93b5ff12f5p-607, 0.0, 0x1.f13409632f6dep-99,
     0.0, 0.0, 0.0, 0x1.c3efd068e689bp-873, 0x1.c56993b7215abp-426, 0.0,
     0x1.151a29a866a92p-562, 0.0, 0.0, 0.0, 0x1.7d364022b0af7p-794,
     0x1.ed184214d4dc8p-280, 0.0, 0x1.4dbaefe3e5568p-582, 0.0, 0.0, 0.0,
     0x1.36bf40601f9c5p-505, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.da0600faa2a24p-696,
     0x1.a53c42ee042d6p-44, 0x1.42cfc2b0d6358p-959, 0.0, 0x1.87976662497a4p-1010, 0.0,
     0x1.c70df3946f9c2p-1011, 0.0, 0x1.3c1c3dd95cfe3p-160, 0x1.b35a3a250ac43p-746,
     0.0, 0.0, 0x1.5c2a6e5d96284p-745, 0x1.1c0a6b494d2d2p-879, 0x1.edbfc33e1840dp-929,
     0.0, 0.0, 0x1.327d0acf2e1e6p-645, 0.0, 0x1.3be6654e972bap-245, 0.0, 0.0, 0.0,
     0.0, 0x1.e628835856274p-652, 0.0, 0.0, 0x1.910f044f75825p-440, 0.0, 0.0,
     0x1.c429ef5da2c99p-368, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6f340682f0bb2p-638, 0.0,
     0.0, 0.0, 0x1.bb91959a12781p-502, 0x1.84625bec4803ep-123, 0x1.e1df5c79edb34p-450,
     0x1.01f689b2f8171p-674, 0.0, 0.0, 0x1.406104ca82834p-330, 0x1.6a4117d9fae52p-186,
     0.0, 0x1.ba6780dfc0819p-84, 0x1.1ec961146d38fp-493, 0.0, 0x1.0f41f4f28fc19p-353,
     0x1.cc9bd1e11a387p-886, 0x1.c4f6900b87996p-687, 0x1.0aab652261c3cp-698, 0.0,
     0x1.9fb72d3886ef3p-490, 0x1.f79f21854f3f2p-885, 0x1.dbdd308ec0d23p-428,
     0x1.a0a79cef1ace1p-837, 0x1.1b3132be05f03p-683, 0.0, 0.0, 0x1.c7310f6637024p-724,
     0.0, 0.0, 0x1.461ab04e34fb1p-2, 0x1.d7df50ca129dbp-146, 0.0, 0.0, 0.0,
     0x1.5cbe3c8f59261p-903, 0.0, 0.0, 0x1.1ba8e020040dap-652, 0.0,
     0x1.b98192de439a1p-358, 0x1.83bba1dba8f5ap-587, 0x1.66b04972a00ddp-681, 0.0,
     0x1.6cd9e8ab82309p-236, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.744e09afa9891p-117, 0.0,
     0x1.137ee81b32256p-1021, 0x1.7b5c640e9bbb2p-699, 0x1.3bcd53c91a1d3p-643,
     0x1.767c5ab8ff3b6p-854, 0x1.072669925638dp-462, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d5747b99bc881p-387, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e4431a3665dfp-515, 0.0,
     0.0, 0x1.5c26759a707d4p-317, 0.0, 0x1.650b5958a5d5fp-309, 0.0,
     0x1.67012954d2c2dp-929, 0.0, 0.0, 0x1.4b0fd1606598ep-459, 0.0,
     0x1.4e48ebb4a53aep-377, 0.0, 0.0, 0x1.d18a439b88a25p-638, 0x1.51d3b8696ac17p-699,
     0x1.dad072e64e87dp-290, 0.0, 0x1.fb4f7158893e9p-142, 0x1.74c46b13eb7d5p-533,
     0x1.133fce94ced2ap-712, 0x1.bf633ae77f594p-691, 0x1.5c30454ea9ea5p-564, 0.0,
     0x1.1d71e48cb0c43p-511, 0x1.f244201ab9791p-861, 0x1.7bf390c751fd1p-497, 0.0,
     0x1.141284a40df9dp-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c22ec5900fa6p-271, 0.0,
     0.0, 0.0, 0x1.95b158cd425e8p-459, 0x1.5bfcb00c1dd98p-973, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e43488c886cefp-777, 0x1.3bc62f12b8d9p-579, 0.0,
     0x1.529302d6cd44fp-295, 0.0, 0.0, 0x1.5401dd35ca76p-485, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87fe55e0e60b8p-306, 0.0, 0.0, 0x1.736ee5a0b3934p-754, 0x1.5bfb3e55c3ec3p-177,
     0.0, 0.0, 0x1.f370973266951p-660, 0x1.8e5152620672fp-374, 0x1.a77c79c3729c9p-336,
     0.0, 0x1.50d4f1871d9a2p-933, 0x1.862aaf2960658p-640, 0.0, 0.0,
     0x1.ced09164cc529p-446, 0.0, 0.0, 0x1.5a5a3ea6905fdp-578, 0.0,
     0x1.bbdd6d804d964p-613, 0x1.9025ab2529a06p-1022, 0x1.d3bd78a0d3c48p-476, 0.0,
     0x1.c943803e14095p-618, 0.0, 0x1.7665c3163b28ep-14, 0.0, 0x1.64d83181a34f5p-498,
     0.0, 0x1.8bff9068e8e1p-572, 0.0, 0.0, 0.0, 0x1.db93a47b21addp-255, 0.0,
     0x1.33984c4da9bcfp-511, 0.0, 0.0, 0.0, 0x1.af69439de7763p-355,
     0x1.d6fc567217f8cp-144, 0x1.ec0b99b9c5002p-775, 0x1.d5d191fbca819p-7,
     0x1.411d8abe67f8ap-721, 0x1.7544a97eb53a4p-320, 0x1.c32a7d906fb03p-883,
     0x1.cf562edf5263ap-651, 0x1.4dd121fd0ded3p-798, 0x1.baa7fdaa68546p-697,
     0x1.e0d61106faa5fp-432, 0x1.90710e9700a38p-677, 0x1.06c3e8a7df715p-176, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.748a630d4ce91p-121, 0x1.26553abf04e3dp-909,
     0x1.73984ca93610bp-368, 0x1.104b6f205ffcep-406, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f62076a1020b3p-865, 0.0, 0x1.5d3ed424e13e6p-546, 0.0, 0.0,
     0x1.c8c8d5c39d69p-620, 0x1.d28eb12a03978p-524, 0x1.ebf85f73f7e13p-423,
     0x1.8cf5969c06d6fp-43, 0.0, 0x1.d3de7ebd771cfp-892, 0.0, 0.0,
     0x1.aa3fe1bbd763ap-465, 0.0, 0.0, 0x1.baa9b3747629ep-605, 0.0,
     0x1.c090495f60f4cp-49, 0x1.4778cbf81677ap-416, 0.0, 0.0, 0x1.8801d8e0218p-834,
     0x1.5c4c02b4d048fp-335, 0x1.eae09016d2ccap-245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c7b87a02ad60ap-120, 0.0, 0.0, 0x1.38d20782ea2a1p-15, 0x1.6530c999ec329p-271,
     0.0, 0.0, 0x1.aada922a86cefp-224, 0x1.1e5df7f8a682ap-338, 0.0, 0.0, 0.0, 0.0,
     0x1.8f3feaa4ad488p-146, 0.0, 0.0, 0.0, 0x1.96aedde75c122p-492, 0.0,
     0x1.a99468289fde3p-349, 0.0, 0.0, 0.0, 0x1.090ec8bc12546p-137,
     0x1.d715a7e5f9c2cp-49, 0x1.eb64f36973b4ep-265, 0.0, 0x1.1e1b535fd8abep-568, 0.0,
     0.0, 0.0, 0x1.ed66598da3b9dp-922, 0.0, 0.0, 0.0, 0x1.499ae12c75542p-338,
     0x1.2a036c94048p-264, 0.0, 0x1.cc12c7ed5df36p-503, 0.0, 0x1.1f4aabf36734cp-359,
     0.0, 0x1.89783db403797p-971, 0x1.0158d43ac9c1fp-256, 0.0, 0x1.4745835f35bc9p-479,
     0x1.2e6863a879f09p-633, 0x1.f060618a42314p-579, 0.0, 0x1.8474d1e48ccfep-450, 0.0,
     0.0, 0.0, 0.0, 0x1.84e6bac867ccdp-962, 0.0, 0x1.fe44b1cad5c4fp-444,
     0x1.30772d376f342p-745, 0x1.a156979712ae7p-723, 0x1.704da1d18843dp-27,
     0x1.a8f6965be034ap-444, 0.0, 0.0, 0.0, 0x1.093149e513d3dp-820, 0.0, 0.0,
     0x1.56ef3cc6ff5bep-189, 0.0, 0.0, 0.0, 0x1.83eb7dc4923f8p-787,
     0x1.52eaaaae4cf46p-638, 0x1.269cd2c1591ap-33, 0.0, 0.0, 0.0,
     0x1.780d8c369335p-475, 0.0, 0.0, 0.0, 0.0, 0x1.851eaf3a2e9e6p-444,
     0x1.799ddf32ffcf1p-161, 0x1.b499a5f8abc6dp-641, 0x1.6e457ec098517p-330, 0.0,
     0x1.6e9070c017edcp-573, 0.0, 0x1.12ec7e11fd11bp-410, 0.0, 0.0,
     0x1.913ab1fd4b94fp-726, 0.0, 0.0, 0x1.f7f6986f52776p-38, 0x1.7c910d852f72bp-602,
     0.0, 0x1.9ffdf82c7d078p-551, 0.0, 0.0, 0x1.429bbbf0b8c49p-972,
     0x1.91953c072bb1fp-35, 0x1.39d5024db6826p-606, 0.0, 0.0, 0.0,
     0x1.209724affa1f2p-679, 0.0, 0.0, 0x1.629e7c03c79ebp-674, 0.0,
     0x1.b32f350945e9bp-306, 0.0, 0x1.5f1949f907718p-516, 0.0, 0x1.2dc2053c1f526p-164,
     0x1.f1b87efddee0fp-455, 0x1.c9c5736b06c28p-432, 0x1.ed0b1b462f6d5p-39,
     0x1.4e184d87497d3p-152, 0.0, 0x1.5f20d43c0187bp-411, 0.0, 0.0,
     0x1.48cb61d7b9269p-185, 0x1.2652f20a03511p-636, 0.0, 0.0, 0.0, 0.0,
     0x1.4b4010cfd5777p-773, 0x1.b4d4198f49e5bp-700, 0x1.353eb8909c729p-111,
     0x1.7b464d5bc4b04p-229, 0x1.d84bf49eb1929p-897, 0.0, 0x1.2ba35ec56789dp-832,
     0x1.9308b957ec0bap-964, 0x1.0fe6fcb0af3c8p-254, 0x1.549ad24f33f32p-505, 0.0,
     0x1.8820be0149135p-507, 0.0, 0x1.8bae7d2e1baa2p-1005, 0.0, 0x1.468b8342c5af2p-41,
     0.0, 0x1.db7c16a92b784p-275, 0x1.a18e628053dd6p-784, 0x1.1436f7c62f719p-375, 0.0,
     0x1.f41c652bc1837p-548, 0.0, 0.0, 0.0, 0x1.c7d3e099aefc9p-305,
     0x1.176a551f9ec16p-161, 0x1.194b15314ba22p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.e1d57d1ae811dp-148, 0.0, 0x1.44939eefcff93p-40, 0x1.c3f2bdb5637b6p-635,
     0x1.3a3114dc7f0fbp-426, 0.0, 0.0, 0.0, 0.0, 0x1.a0f6721fcacdfp-892, 0.0,
     0x1.92dc891a8f1bcp-1, 0x1.fc98c8abaedc3p-487, 0.0, 0.0, 0x1.de8142225f852p-71,
     0x1.2e5a96c10dd86p-453, 0x1.441b54bbe8a03p-43, 0.0, 0.0, 0.0, 0.0,
     0x1.127bf30199ee2p-404, 0x1.c6ed83ffa281p-108, 0.0, 0.0, 0.0,
     0x1.59ac7eb875062p-527, 0.0, 0.0, 0x1.57476c7567d63p-37, 0x1.2cbdcd5384b99p-388,
     0x1.520bab46dfde4p-334, 0x1.ea8823145ae84p-1002, 0.0, 0.0, 0.0, 0.0,
     0x1.aff51cecdfc2cp-574, 0x1.6504aaa12e5dfp-500, 0x1.81de663ffc07fp-1004,
     0x1.2b240a9143d0fp-263, 0.0, 0x1.45cfc529556bep-596, 0.0, 0x1.232b1a62c1b82p-553,
     0.0, 0x1.97e0567ad73b2p-364, 0.0, 0x1.f1fd57be57b9fp-143, 0x1.5d44fc256dc78p-402,
     0.0, 0x1.35010e2aa3bd5p-613, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1309caa3f6552p-924,
     0.0, 0x1.0ed14dc955227p-688, 0x1.ea2d5d5a5663p-881, 0.0, 0x1.a939469e0da3fp-552,
     0x1.f327b155be3c7p-355, 0.0, 0.0, 0.0, 0x1.ee73ca5680eaep-871,
     0x1.477fe1f957c46p-627, 0x1.012f8ceda6e83p-761, 0.0, 0x1.27e560d317806p-666,
     0x1.6dbb9830831f2p-502, 0.0, 0x1.68e0ce2a15da4p-927, 0x1.ac4cd8550f55dp-577,
     0x1.a60c7575849e8p-161, 0x1.ce8b78ce875c2p-1007, 0x1.08731e3f6c578p-936, 0.0,
     0x1.005c881eb5645p-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b427b8adb6f03p-58,
     0x1.2ca9627068873p-540, 0x1.1419fdac0b2b4p-142, 0x1.b3d1c251b3cd8p-233, 0.0,
     0x1.aad8a6d71c3c9p-573, 0.0, 0.0, 0.0, 0x1.d1ba0e8eb3d3ap-278, 0.0, 0.0,
     0x1.a3744637b87a5p-212, 0.0, 0.0, 0x1.4343eb28eae2ap-808, 0.0,
     0x1.321b9703b1065p-492, 0.0, 0.0, 0x1.bae03ec3d70dfp-251, 0.0, 0.0, 0.0, 0.0,
     0x1.1f6480d8ebf8fp-618, 0.0, 0x1.182e2df77ef48p-383, 0x1.442247823b4aap-735, 0.0,
     0x1.a09ef6e7b5fe8p-544, 0.0, 0.0, 0.0, 0x1.db08e209fd08ep-903,
     0x1.8ae756f0b3551p-84, 0x1.ed1a34c54173cp-801, 0x1.8920c797012a8p-126,
     0x1.68f867d4a617dp-878, 0x1.538d5fe7d68a6p-960, 0.0, 0.0, 0.0,
     0x1.911506e267423p-437, 0.0, 0x1.093c1bcb9d28fp-213, 0.0, 0.0, 0.0,
     0x1.549b76588613fp-742, 0x1.693db7c7e0788p-141, 0.0, 0x1.c80f29c0f3aadp-436, 0.0,
     0.0, 0.0, 0.0, 0x1.70e1777594ca2p-309, 0x1.33100ac97de8ep-104, 0.0,
     0x1.334f27fb58b3bp-21, 0.0, 0x1.f462244935edcp-695, 0x1.84a28904eae8fp-386,
     0x1.b12340a1393a7p-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.679406e4b474ap-585,
     0x1.c211530c25c01p-45, 0x1.3352358fe729ap-646, 0.0, 0x1.4efb79f78b72bp-750,
     0x1.958eb9747367fp-448, 0x1.664e9aa4dc936p-193, 0x1.5e7feafbdaf26p-99, 0.0,
     0x1.b59676fbb68dfp-536, 0x1.cf8ad383ed38ep-429, 0.0, 0.0, 0x1.b9642f88fd79fp-510,
     0x1.b8f62c8de4bdep-622, 0x1.19a945dc77f59p-609, 0.0, 0.0, 0.0,
     0x1.c4a2eb60ef511p-737, 0.0, 0x1.72e032624b419p-609, 0x1.7d4400909869dp-626, 0.0,
     0x1.80a63cb759fp-373, 0.0, 0.0, 0.0, 0.0, 0x1.d732962d1bbfep-818,
     0x1.51de92da111bap-250, 0.0, 0x1.882b64b145f2ep-238, 0.0, 0x1.0e31f7a72a763p-127,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5278aec93d1p-185, 0.0,
     0x1.c4397b128e803p-590, 0x1.e4c0d6da399a2p-535, 0.0, 0x1.3847e502fb67cp-385, 0.0,
     0x1.437a3857aa60ep-783, 0.0, 0x1.ea5304ba54c21p-92, 0x1.316089a2eb71fp-364, 0.0,
     0x1.261479fa3ff59p-155, 0x1.58f2f80978c5ap-975, 0x1.2c1d5980813b3p-768, 0.0,
     0x1.508d572f4d90cp-659, 0x1.973c5a5876ec7p-737, 0x1.833097006cfa7p-277, 0.0, 0.0,
     0.0, 0x1.7f495a8725fffp-532, 0.0, 0x1.ca1da85040946p-263, 0x1.c7550a0fbc23ap-152,
     0.0, 0x1.fd15dfa91f178p-807, 0x1.98ba19bc96aa1p-423, 0x1.ecc22004bb204p-416,
     0x1.78f25eea16d14p-120, 0x1.73380392c619dp-933, 0.0, 0.0, 0x1.f2cde27c91815p-33,
     0.0, 0.0, 0.0, 0x1.80472a5d6fdcp-407, 0.0, 0.0, 0x1.0250625f6445ep-283, 0.0,
     0x1.ec683361b6bb7p-962, 0.0, 0.0, 0x1.46eea6c366869p-173, 0.0, 0.0,
     0x1.63f8dd1efc276p-599, 0x1.6f86d566cf1eap-963, 0.0, 0x1.35c0c3427d224p-960, 0.0,
     0x1.5f429405f6b5ap-203, 0.0, 0x1.c096f9ef946c5p-478, 0.0, 0x1.f2de066d1a2dbp-582,
     0x1.291b3d2190283p-607, 0.0, 0x1.49a3ca654f785p-430, 0x1.ce93ec978bf62p-977,
     0x1.da6b5ef1109e1p-256, 0x1.1af10494b663ep-502, 0.0, 0x1.322651d0de3a3p-921, 0.0,
     0x1.64a438fe952d4p-745, 0x1.b5828f395cdbp-488, 0.0, 0.0, 0x1.4aa570ef6cde7p-739,
     0x1.d608809516ce9p-951, 0.0, 0x1.eae2bb2ea5a22p-567, 0.0, 0.0,
     0x1.92ae62a39c515p-975, 0.0, 0x1.a88476ea95c8fp-916, 0x1.8a4f9ec29c0d8p-808, 0.0,
     0.0, 0.0, 0.0, 0x1.eb26e77efbd4dp-404, 0x1.4113c5e5b380fp-411,
     0x1.1e9e8fe4a007cp-390, 0.0, 0.0, 0x1.7d71c0530c2c2p-29, 0.0,
     0x1.6f3db4193f738p-692, 0x1.cdacecbb02fa5p-860, 0x1.d5362c302cc29p-946, 0.0,
     0x1.b26b4c4778106p-840, 0x1.7234f0b10969bp-205, 0x1.d190aaf9254f3p-669, 0.0, 0.0,
     0x1.12455bbf6331bp-784, 0.0, 0x1.c33ed18e3e22cp-237, 0.0, 0x1.603d049843e3bp-697,
     0.0, 0.0, 0.0, 0x1.c2adc9d79b729p-899, 0.0, 0x1.956b18e8e3ec1p-679,
     0x1.c711e51028f03p-106, 0.0, 0.0, 0.0, 0x1.efe0673481dap-492, 0.0, 0.0,
     0x1.75ea9ede876bep-575, 0.0, 0.0, 0x1.9e4b29d03cc37p-291, 0x1.728f547969506p-411,
     0x1.eb11768567fb3p-141, 0.0, 0x1.ebd65fc078b36p-155, 0.0, 0.0,
     0x1.efe47d537f6c1p-907, 0x1.88634272feb51p-531, 0.0, 0x1.9bc9c2aec8f2ap-333, 0.0,
     0x1.d338113017a52p-941, 0x1.ccfd646aa18ap-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5605f6b57700ap-477, 0.0, 0.0, 0x1.5fdcd046fcccfp-452, 0.0,
     0x1.f4a8c0c40712dp-365, 0x1.f22b918ceb799p-553, 0.0, 0.0, 0x1.07e3bb1c00efep-972,
     0.0, 0x1.a277fb5696399p-933, 0x1.0d04c2dbccdc6p-668, 0.0, 0.0, 0.0, 0.0,
     0x1.afcb94a1a9718p-179, 0x1.1f650e9210f04p-910, 0x1.c576e2aec1df5p-862, 0.0, 0.0,
     0x1.26b39d52c1d1cp-221, 0x1.a5e714fa01739p-547, 0x1.40e1368f9c5d3p-450, 0.0, 0.0,
     0.0, 0x1.cecc31c310b97p-673, 0x1.94ac16a012e66p-380, 0x1.851fbef466c1p-507, 0.0,
     0x1.c806ad009c769p-153, 0x1.638369e0f8a2bp-889, 0.0, 0.0, 0x1.dafeb7a3fda0cp-561,
     0x1.72ea20f332671p-385, 0x1.1f66d42efb4edp-915, 0.0, 0.0, 0.0, 0.0,
     0x1.b43d5f6cb5602p-677, 0x1.cc2596d7887bbp-801, 0.0, 0.0, 0x1.3d9519c8ca008p-812,
     0.0, 0.0, 0x1.4d8be3409745fp-58, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b59d8aad2e3c6p-555,
     0x1.fbccbe3ac2817p-695, 0.0, 0x1.4f531133ef2aep-98, 0x1.db238e239360bp-678, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c526a0f0bd2a9p-342, 0.0, 0.0,
     0x1.d97631c75dd98p-773, 0x1.8eece69aca07dp-283, 0x1.3de2c49a5b79ep-400, 0.0,
     0x1.33c13a959869p-941, 0x1.ae50d1aa1b619p-836, 0.0, 0.0, 0x1.75b16eacbebb4p-274,
     0x1.d30062113ca04p-565, 0.0, 0x1.3ca075f4aae4ap-612, 0.0, 0x1.03d0437a58829p-909,
     0.0, 0x1.ad81697e95d95p-198, 0x1.8f86dda3d4efbp-189, 0x1.97f6b39e275ap-591, 0.0,
     0x1.51a44baf63718p-291, 0x1.c139f3c885c6ap-343, 0x1.87e4d7719f005p-355,
     0x1.6b8b6732a015ep-746, 0.0, 0x1.e1aeaff838262p-415, 0x1.24e1fae22f6a8p-344,
     0x1.8bedfde41a39ep-700, 0.0, 0.0, 0x1.32fcfcd2ad764p-285, 0.0, 0.0,
     0x1.95a64378735cbp-182, 0.0, 0x1.7e086c3174af5p-288, 0x1.31d9f4232917ep-96, 0.0,
     0x1.f0696467fc8e4p-974, 0.0, 0.0, 0.0, 0x1.299691a4cb172p-327,
     0x1.50057204d5c3ep-457, 0x1.b47d1c1135ccep-238, 0x1.13a918f1b52afp-36, 0.0,
     0x1.e5184d6e7dd3cp-222, 0x1.9abe21c743452p-621, 0x1.77de88a89c074p-240,
     0x1.da35c1354fefp-712, 0x1.11214ce552f2fp-260, 0x1.1270897a0e17p-976,
     0x1.a2986728977ddp-329, 0.0, 0.0, 0x1.8d5d4c8a30d11p-644, 0.0,
     0x1.23393d3420986p-41, 0x1.1359748e28b17p-477, 0.0, 0.0, 0.0,
     0x1.5dca67db73dabp-364, 0x1.d9e063ae1099bp-692, 0x1.dc167fb6952cfp-80, 0.0,
     0x1.a9f38c0baac1p-974, 0.0, 0.0, 0.0, 0.0, 0x1.9d1703ee97454p-469, 0.0,
     0x1.48d774f75b804p-545, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba6f6c89bf9b9p-317, 0.0, 0x1.cff977d3b14a4p-499, 0x1.e0f275a0a70f4p-752,
     0x1.41f8a18955c38p-314, 0.0, 0x1.f6bce25d97a4ep-974, 0x1.7808f3b1579c6p-16, 0.0,
     0x1.6bcc2b548339bp-184, 0.0, 0.0, 0.0, 0x1.3d64decc5c34bp-532,
     0x1.f799dabc094f6p-612, 0x1.9cbb2e44ce7cp-879, 0x1.dddf951a4629ap-808,
     0x1.843681bfc6cafp-964, 0x1.2b38249ea402fp-252, 0.0, 0.0, 0x1.e1b9389830e41p-850,
     0.0, 0x1.59b481ba8c62ap-133, 0.0, 0x1.9643905ca26efp-742, 0.0, 0.0,
     0x1.1485893eca3cap-348, 0x1.1930e038327d7p-42
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
            tmp1 = Sleef_floord2_avx2128(tmp0);
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
    printf("Sleef_floord2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_floord2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
