/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expfrexpd2_avx2128.c --function \
 *     Sleef_finz_expfrexpd2_avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --vector-size 2 --function-input-vector-size \
 *     2 --precision int32 --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.bf1188fb5201bp-630, 0.0, 0x1.c43ddcb7d80e2p-498, 0.0,
     0x1.ac26fade6315dp-350, 0x1.577b3baa2e5d9p-995, 0.0, 0x1.a09cfa80a87abp-563,
     0x1.252629d916eb6p-366, 0.0, 0.0, 0.0, 0.0, 0x1.b17205d6bd762p-402, 0.0, 0.0,
     0x1.bc889c6d0428ep-728, 0.0, 0x1.02e410caebbcdp-73, 0x1.7a39a4d30d94p-1019, 0.0,
     0x1.219e940ce2682p-917, 0.0, 0.0, 0.0, 0.0, 0x1.f02a2438496d7p-165,
     0x1.504cff1c73461p-157, 0x1.2b3a3e8e47d84p-809, 0x1.a910963c85d0bp-501,
     0x1.b7b02f48a95b7p-919, 0x1.72fb6acf963cbp-785, 0x1.d575c63cf36a7p-317,
     0x1.341b64583d57ep-571, 0x1.6f395ccd00fb4p-294, 0.0, 0x1.50df6e0c37b1ap-513,
     0x1.b30cf660b940dp-212, 0x1.23535fe15d7dcp-260, 0.0, 0.0, 0.0, 0.0,
     0x1.dd4130d5cbbe4p-987, 0.0, 0x1.aaee4364e540fp-689, 0x1.f4a152ba1d084p-180,
     0x1.7f879d123d21dp-887, 0x1.9f95af5ca87e3p-865, 0.0, 0.0, 0x1.504514566a4e7p-236,
     0x1.f8f3c531b01c7p-283, 0.0, 0.0, 0x1.9ec6b4b762a5dp-749, 0.0,
     0x1.bec1ddd2ad915p-489, 0x1.8fde6fd3976e9p-841, 0x1.456c5e2d304c4p-164, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.753580f18e45cp-23, 0x1.992a67d77cb1ap-610,
     0x1.fb68139b9d8d5p-645, 0.0, 0.0, 0.0, 0.0, 0x1.cd6fa612af984p-211, 0.0,
     0x1.4a6ea5e899463p-10, 0x1.081c184d44fc6p-722, 0x1.0c26966ac385ap-531, 0.0, 0.0,
     0.0, 0x1.ecd5b81c50adcp-49, 0x1.2833feaf99f5fp-915, 0.0, 0x1.481e28a3c0b57p-572,
     0x1.b9d17cc9ea11cp-641, 0x1.6d703cad032e7p-566, 0.0, 0.0, 0.0, 0.0,
     0x1.2ce91f8e65bbp-473, 0x1.a721c043b3792p-362, 0.0, 0.0, 0x1.bc8d38028e382p-111,
     0.0, 0x1.4b076428b6856p-523, 0.0, 0x1.6b2016fe4ee93p-837, 0.0, 0.0, 0.0,
     0x1.22d3591859e41p-953, 0.0, 0.0, 0.0, 0.0, 0x1.6c114c45a1748p-821,
     0x1.f8967d594929bp-352, 0x1.80568664f8afp-485, 0x1.7f7b4fa709ef7p-635, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8bcaa6834e037p-483, 0.0, 0.0, 0x1.984755d5eb8cfp-865,
     0x1.4b07bd1db63b8p-523, 0.0, 0x1.ec53f561219e9p-48, 0x1.d2288c52f72a5p-617,
     0x1.0e6f0541b4ec2p-252, 0.0, 0x1.255c9bd3ad8dcp-840, 0.0, 0x1.710b161fc0687p-208,
     0x1.a9bcad46d6559p-665, 0x1.9d46542f53fb7p-645, 0x1.ed5e6f31f9318p-190, 0.0, 0.0,
     0.0, 0x1.ef80e4008938p-734, 0.0, 0x1.878424ad26cfp-46, 0x1.c125eb4bc5573p-464,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed586b33af7efp-762,
     0x1.b11ab0a3e1d19p-280, 0.0, 0x1.65cf984d6c8bdp-410, 0.0, 0.0, 0.0, 0.0,
     0x1.ac1e24dbafc8dp-639, 0.0, 0x1.2cfe0080f6ad9p-477, 0x1.c4f7200f918ccp-73,
     0x1.1f6b327f9be73p-326, 0x1.f7f112cffe94fp-38, 0x1.2aca9c5395daep-648, 0.0, 0.0,
     0.0, 0x1.ed813308597ccp-720, 0x1.97ea9beeb49aep-170, 0x1.06bf57f5b6c0dp-493, 0.0,
     0x1.c32da4e1a090dp-747, 0x1.53b70dbc540c9p-210, 0.0, 0x1.07c47aa07284bp-641,
     0x1.433a18a251a82p-924, 0.0, 0.0, 0x1.d5e5e74c11e9cp-449, 0.0, 0.0, 0.0, 0.0,
     0x1.21373190d43dp-632, 0.0, 0x1.d6c3aca25170ap-196, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8e92c0d13d73p-1004, 0.0, 0x1.1e1791ef2cfdcp-509, 0.0, 0x1.a09e162c9c216p-96,
     0x1.2e8f9550ba97ap-254, 0.0, 0x1.4b2e64bb0f3fbp-238, 0x1.963de75fd2c88p-599, 0.0,
     0.0, 0.0, 0x1.b3f17bdad9e94p-801, 0.0, 0x1.ca3cd1062a8aep-434,
     0x1.5e4684725a62fp-208, 0x1.0a665cfa083b2p-366, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89a61aa92107dp-79, 0.0, 0.0, 0x1.4c7bca06769fep-735, 0x1.c77f04e0a03cbp-951,
     0.0, 0x1.bee87cb53712cp-555, 0.0, 0x1.7c168916bde8ap-937, 0.0, 0.0,
     0x1.30a690774622cp-529, 0.0, 0x1.eb50088401191p-983, 0x1.abaa61c46f00bp-582,
     0x1.2fed5835b560dp-1001, 0x1.3e8c336587785p-693, 0x1.65d9607f7ad56p-785,
     0x1.a143c21093fbfp-825, 0.0, 0.0, 0x1.38c1710a8c72dp-513, 0x1.88e3fbdf913ffp-256,
     0.0, 0.0, 0x1.ca33063990e5ap-562, 0.0, 0.0, 0x1.8f8871bd53318p-680,
     0x1.a9221bc83b93ap-814, 0x1.dbd071d83e40cp-768, 0.0, 0x1.977541dd865c9p-870,
     0x1.38c0d7bfc7d4cp-606, 0x1.55d356cd06572p-135, 0.0, 0.0, 0.0, 0.0,
     0x1.c96d833a1c2e7p-932, 0.0, 0.0, 0.0, 0x1.c3de38c157e41p-139, 0.0, 0.0,
     0x1.a80064df4eadap-305, 0x1.2fe2f9171ccb3p-752, 0x1.2a5b701ec9548p-942, 0.0, 0.0,
     0x1.8d82e8f134b42p-236, 0.0, 0x1.dd0b70aee0acep-351, 0x1.383516374147bp-352,
     0x1.fb6bcf57f463ep-142, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1df66fbd3ebc7p-106, 0.0,
     0x1.8f6ac876d9637p-56, 0.0, 0.0, 0.0, 0.0, 0x1.2e8998d2f946dp-308, 0.0,
     0x1.d7c70a92d83dap-147, 0.0, 0x1.2516fb5050c1fp-455, 0.0, 0x1.70b1188907f6ep-967,
     0x1.6e1573991c30bp-60, 0.0, 0.0, 0.0, 0x1.c1402875636a1p-378, 0.0, 0.0, 0.0,
     0x1.2b71e21863f77p-394, 0.0, 0x1.40e77cb76d5e7p-475, 0x1.4ec7030c8d2e6p-773, 0.0,
     0x1.b1af4df804b8fp-189, 0x1.63a45b7156608p-835, 0.0, 0.0, 0.0,
     0x1.dfe3a9dcf548cp-911, 0.0, 0x1.0075c525c9b3ap-275, 0.0, 0x1.226e21418a13ep-55,
     0.0, 0.0, 0x1.220112bea21c5p-349, 0x1.a53e61a97fd09p-975, 0.0, 0.0,
     0x1.04ae67f6dc8ffp-67, 0.0, 0.0, 0.0, 0x1.f497f5b470c72p-937, 0.0,
     0x1.ffe934bf15169p-241, 0x1.483d76ea7385p-943, 0.0, 0x1.e8eb3691e7107p-279,
     0x1.673966c84dedcp-566, 0.0, 0x1.e58b74cccdd94p-870, 0.0, 0.0,
     0x1.330109d7a2cccp-352, 0.0, 0.0, 0.0, 0x1.0480588fb413fp-667, 0.0,
     0x1.67026139cb0f4p-513, 0.0, 0x1.76ea38bb7be27p-473, 0x1.a6142e901d816p-805,
     0x1.c1ddf6af66b77p-638, 0.0, 0x1.52aab57972957p-508, 0.0, 0x1.c14f68c6397a1p-545,
     0.0, 0x1.a611df2f13c8ep-76, 0x1.7b5526641fabfp-474, 0.0, 0.0,
     0x1.fbc49a0cacbbcp-558, 0x1.d6a6898388977p-928, 0.0, 0x1.aef3896fc4f9cp-999,
     0x1.839f4436845aep-784, 0x1.b239bcb74f1c9p-650, 0x1.15a118eb6d839p-294, 0.0, 0.0,
     0x1.6a8cb67497775p-228, 0x1.c8d2bed1f6c4ap-26, 0.0, 0x1.798b27c7eec45p-458, 0.0,
     0.0, 0x1.9f1a55827b672p-897, 0x1.753e468b8e89bp-805, 0.0, 0.0, 0.0,
     0x1.5fd67a9e1d57bp-611, 0x1.542d8b55b1d2ep-799, 0x1.c583d808f25c9p-965,
     0x1.193f870ad512ep-257, 0x1.91c726134bf2cp-694, 0x1.427d723f46387p-85, 0.0,
     0x1.f72e330968e8bp-692, 0.0, 0x1.b25be9df7a78p-255, 0.0, 0x1.b5f8e15eaf811p-630,
     0x1.8b19b0cefd481p-480, 0.0, 0.0, 0.0, 0x1.82d39097e5f6bp-517, 0.0,
     0x1.27753913aaa0ep-706, 0.0, 0x1.2ef8162eeb57p-394, 0x1.742ea4fdf0634p-327,
     0x1.9b34d9e420c25p-790, 0.0, 0.0, 0.0, 0.0, 0x1.fc47b0e473bb5p-1014,
     0x1.71ce8a7c195a4p-578, 0.0, 0.0, 0.0, 0x1.47020ef2f08bp-31, 0.0,
     0x1.5ea24547fd6e7p-915, 0x1.027f099c98382p-166, 0.0, 0x1.bb02fa00c3e3bp-767,
     0x1.45863049ce131p-1012, 0x1.0aed0696d8ce7p-470, 0x1.63b0c64ace4a9p-324, 0.0,
     0.0, 0.0, 0.0, 0x1.ee03090d7f444p-236, 0x1.a62a5db9865a3p-295, 0.0, 0.0,
     0x1.f0d6feaa29cb4p-943, 0x1.204c8c419c174p-379, 0x1.42aa052ee13a6p-744,
     0x1.ae55cb8f5c8d3p-29, 0.0, 0.0, 0x1.3eae872b2e262p-935, 0x1.a4194a8d77506p-62,
     0.0, 0x1.a89da8918da95p-99, 0x1.194f888c3e51fp-467, 0.0, 0.0,
     0x1.1ca0e6dbd8c3dp-556, 0x1.48fe4eb9e081ap-210, 0x1.740fd7e421c9ap-761,
     0x1.84d2b69e4c42fp-19, 0x1.9c08d748bf8b5p-692, 0x1.47a1aa6350aa7p-380, 0.0,
     0x1.c21151e7ebbacp-324, 0x1.2fd644aab879bp-78, 0.0, 0x1.96702872670ddp-296, 0.0,
     0x1.ca673192ee9bcp-167, 0x1.88556501273cfp-959, 0.0, 0.0, 0x1.1d29e231c0ee2p-900,
     0x1.76cb69ce317ep-304, 0x1.574d1505c04dp-218, 0.0, 0x1.38ceda1e57469p-291, 0.0,
     0x1.b9689c12c72b1p-390, 0.0, 0x1.8acc867cddfa1p-648, 0.0, 0x1.57ef661d095a8p-408,
     0.0, 0.0, 0x1.39d0bf49dc01p-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7e401b0db5796p-388,
     0.0, 0.0, 0.0, 0.0, 0x1.13ca6e09d9cb2p-156, 0x1.aa9852f0d9b47p-423, 0.0, 0.0,
     0.0, 0.0, 0x1.8a4ca4e5fc9f7p-209, 0x1.e88b8f036c78p-316, 0x1.13a0624849cfep-911,
     0x1.f5cd0729570aap-1001, 0.0, 0x1.a7de336cda317p-796, 0.0, 0.0, 0.0,
     0x1.656c1daf42e65p-787, 0.0, 0.0, 0x1.ea14396a22538p-842, 0x1.fa422792752eap-32,
     0x1.d9f2b56861bd3p-657, 0.0, 0.0, 0.0, 0.0, 0x1.173a0301bd6fp-979, 0.0,
     0x1.70f5051bd5cedp-252, 0x1.064126a29312ep-849, 0.0, 0.0, 0.0,
     0x1.3399dbf004f9p-1022, 0x1.7820913d89377p-880, 0.0, 0.0, 0.0,
     0x1.cacd007f4fd4cp-925, 0x1.01ba5e8eb6f12p-488, 0x1.e7b826470a87cp-563,
     0x1.d976a63e430e4p-499, 0.0, 0.0, 0x1.0ed08bac82d54p-836, 0x1.41fa03ec2426ep-504,
     0x1.1dcb8bae9551ep-747, 0.0, 0.0, 0.0, 0x1.661c5b126379p-1016, 0.0,
     0x1.79d0c5644fa1cp-203, 0x1.65390db76a5fp-468, 0.0, 0x1.887676b3602dcp-87, 0.0,
     0.0, 0.0, 0x1.6e02b3ab30bbdp-354, 0x1.faf5d9bab7515p-808, 0x1.0ac0e1b2edad5p-584,
     0x1.fe47a24a0895bp-879, 0.0, 0x1.e7aaccb81d2f6p-779, 0.0, 0x1.66fe8379b4a48p-196,
     0x1.fec6eed7618d1p-63, 0x1.3e3a4bf493a64p-910, 0x1.d348617e73766p-291, 0.0,
     0x1.345be0de711d9p-328, 0x1.5737131d625d5p-7, 0x1.0085eef39ca1bp-758, 0.0,
     0x1.729243b61885p-213, 0.0, 0.0, 0x1.b24027feaf631p-906, 0.0,
     0x1.7d1fc7d36317ep-2, 0x1.15b4ab4eec06dp-797, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a13193570b7dfp-730, 0.0, 0.0, 0.0, 0.0, 0x1.886f0ed99c3bcp-535, 0.0,
     0x1.af99ef94665afp-142, 0x1.d1180eb5d1ab1p-91, 0x1.99c6d4600a967p-803, 0.0, 0.0,
     0x1.1a1b2061077c8p-917, 0x1.0e658dba568dap-135, 0x1.bbb3f575e5baep-641, 0.0,
     0x1.ec39b6102164ap-67, 0x1.4ea1119d73ed5p-769, 0.0, 0.0, 0.0,
     0x1.34dd073a456f8p-874, 0x1.5b87dfc6b7b5cp-673, 0.0, 0.0, 0x1.3ec8f2e34e08ep-450,
     0.0, 0x1.a61c7cc8ce4dep-673, 0x1.75f7dc03bc561p-708, 0.0, 0x1.38bd757c83902p-521,
     0x1.bd6e6095581acp-658, 0x1.a6caafc15bfb9p-478, 0.0, 0.0, 0x1.9567b81c5d585p-131,
     0x1.637d434e5ce9fp-297, 0.0, 0x1.ddc1b50a20d57p-216, 0x1.7f8a696e1f226p-157, 0.0,
     0.0, 0.0, 0x1.d4431386e490ep-127, 0.0, 0x1.e7c3f646f02eap-359, 0.0,
     0x1.825d80da949dp-636, 0.0, 0.0, 0.0, 0x1.f5c3a44c6f8a6p-377,
     0x1.247945acc2ab2p-671, 0.0, 0.0, 0x1.7093b0960d7afp-608, 0.0,
     0x1.b63e289ade17ep-300, 0x1.18ded834d49fbp-625, 0.0, 0.0, 0.0, 0.0,
     0x1.df7b3636714a8p-353, 0.0, 0x1.a8bc6a29a3994p-599, 0x1.c84be51699d16p-802,
     0x1.b354c9dbd6f1fp-538, 0x1.479249dd906bap-927, 0.0, 0x1.5aad1f1a8a243p-311, 0.0,
     0.0, 0x1.b5b0e549d1121p-200, 0.0, 0x1.09f6ddfabf834p-526, 0.0,
     0x1.763b6c5a8830fp-565, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e63d5655e7afep-491, 0x1.08a5c61defe0cp-313, 0x1.f6c3b3e6e1d21p-6, 0.0,
     0x1.e90865d7c3cf1p-661, 0.0, 0.0, 0.0, 0x1.cf69108416362p-588,
     0x1.b8161895f1482p-717, 0x1.da122f247aa71p-446, 0x1.230bae75365d7p-757, 0.0,
     0x1.2591063abf2ddp-29, 0x1.f5dc9a88d4449p-687, 0x1.b59d4c704578ap-1021, 0.0,
     0x1.03b1a65f00f44p-417, 0.0, 0.0, 0x1.5e91bb97ba8cap-950, 0x1.d5991c6b9eb0bp-759,
     0.0, 0.0, 0.0, 0x1.34df61fb7f5bp-733, 0x1.5b0099c246e2bp-361, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e1b5ac972dc88p-833, 0x1.27886e70710bcp-784,
     0x1.ae725873775c8p-855, 0.0, 0x1.d7edc6e918e99p-376, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c765c223effd1p-685, 0.0, 0.0, 0.0, 0x1.061295b7ef76dp-178,
     0x1.52b4ca1e37b5dp-60, 0x1.c68a72215ed33p-779, 0x1.f396e6e577beep-799, 0.0, 0.0,
     0x1.b42c8dd93c055p-896, 0x1.dc7007e18c416p-48, 0.0, 0x1.6c54d2036c7e4p-818, 0.0,
     0x1.5d497c2634a31p-428, 0.0, 0.0, 0x1.86359b146374fp-185, 0x1.16cdfc7e4b337p-227,
     0x1.284b4a9b62c35p-760, 0.0, 0x1.27bd30ea14fb9p-806, 0x1.9ead3c905a78fp-807, 0.0,
     0x1.bc7be3f2cebd1p-602, 0x1.c7be369092f73p-514, 0x1.0133a29e67b16p-165, 0.0,
     0x1.ac1523cf964e8p-72, 0x1.c727b7af9bcb6p-103, 0.0, 0.0, 0x1.032a522bf2dc9p-280,
     0x1.e21875292059ep-657, 0x1.72e9f5f7c8503p-371, 0.0, 0.0, 0x1.c5571bae7b7e4p-902,
     0.0, 0.0, 0.0, 0x1.1ca47f713f036p-547, 0.0, 0.0, 0.0, 0.0, 0x1.200b0ccfe544fp-73,
     0x1.db80178adc3bp-906, 0.0, 0x1.e7fb6325d3284p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c0a48dcbb04b6p-67, 0x1.bdea10a5334a3p-968, 0x1.8c1c1935a907ep-504,
     0x1.6c5e063b30735p-655, 0.0, 0x1.fb7d9707d17ecp-510, 0x1.d1bd8edbd09eap-27,
     0x1.60581102499eep-91, 0.0, 0x1.ed52a18b56879p-465, 0.0, 0.0,
     0x1.d7148391d863fp-966, 0.0, 0x1.fb0639410cebp-800, 0x1.6525c2d3a9551p-1018,
     0x1.01bbc2bbc7abp-211, 0.0, 0x1.7860bf09f0484p-785, 0x1.af9ec4cfada3fp-391, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f89d4129d894ap-884, 0.0, 0.0,
     0x1.f839f11dd00eap-319, 0x1.c4b04e2441fefp-368, 0.0, 0x1.c474dbb9c02cbp-985, 0.0,
     0x1.6a24637a51211p-672, 0.0, 0.0, 0x1.a42be24cd969ep-63, 0x1.53f2de41c597bp-335,
     0x1.b045c635b7234p-759, 0.0, 0x1.ccf35b011e417p-1014, 0.0, 0.0, 0.0,
     0x1.b26aff583beb3p-822, 0.0, 0x1.e2edcaf5f4cp-643, 0.0, 0.0, 0.0, 0.0,
     0x1.161ef091e28dp-939, 0x1.521fd395506abp-595, 0.0, 0.0, 0x1.afda3ddc856b3p-985,
     0x1.74a1fa2eb8d49p-219, 0x1.4d15db6404c0ep-690, 0x1.b739d86d3cb48p-957, 0.0, 0.0,
     0x1.9a2b5d99617a9p-702, 0.0, 0x1.7198a54eabd06p-34, 0x1.074224aa518a5p-741,
     0x1.1bf5551e4ff71p-508, 0x1.8a010a76b0f02p-17, 0x1.b7192038ebe84p-489,
     0x1.55d7080cde683p-945, 0.0, 0.0, 0.0, 0.0, 0x1.6e6d4efa47806p-466,
     0x1.7be59b3f4bb9dp-523, 0.0, 0.0, 0x1.93ea61c91bd9bp-865, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c2da629db0613p-20, 0x1.e13d11e8bb2d1p-937, 0x1.59e336760f953p-419,
     0x1.37d5439de0bb1p-862, 0x1.36f1c201cc804p-859, 0x1.99dd9253f7356p-655, 0.0, 0.0,
     0.0, 0x1.73ff840820a3ep-314, 0x1.0dc258cd2a3f9p-720, 0x1.b76306d977764p-506, 0.0,
     0.0, 0x1.4370ef487a2e4p-1018, 0.0, 0x1.6f6408c07fd25p-682, 0.0,
     0x1.ab854e723192dp-803, 0.0, 0x1.da6749a17d9e1p-185, 0.0, 0.0,
     0x1.48ba0bb6bfd4dp-504, 0.0, 0x1.47db9771bbd7fp-767, 0.0, 0.0, 0.0, 0.0,
     0x1.3b3498893fbc3p-934, 0x1.01eb818e52f9p-573, 0x1.b6cf5e685f0c6p-574,
     0x1.44c866a2fa668p-406, 0x1.a2a0db0f99249p-113, 0.0, 0.0, 0.0,
     0x1.44865ec591044p-544, 0.0, 0x1.3c16a254baebfp-209, 0.0, 0.0,
     0x1.1bb3f66cb55bfp-275, 0x1.c3f7dafbba4dfp-142, 0.0, 0.0, 0.0, 0.0,
     0x1.b1c4100c4bd3bp-517, 0.0, 0x1.10f312278d27dp-373, 0x1.15d44f0388f5ap-406,
     0x1.a4b14c8e77dc2p-931, 0.0, 0.0, 0x1.b83c13429db95p-17, 0x1.c44622fb14cfdp-293,
     0.0, 0x1.f6759625896e4p-416, 0.0, 0x1.8c9f865120406p-674, 0x1.0780caba651c8p-545,
     0x1.55d7ec54460c8p-21, 0.0, 0x1.a023e18874a2ap-26, 0x1.4af3d10d04ac5p-752,
     0x1.eab3749670578p-33, 0.0, 0.0, 0.0, 0.0, 0x1.d32b4e8756adep-307,
     0x1.20bcfff03898dp-316, 0x1.26ccee1e6996fp-889, 0.0, 0.0, 0x1.99ee9863a1ed1p-213,
     0.0, 0x1.be5bb79170d47p-140, 0x1.cc0e976ddba6bp-244, 0x1.cf3ada80e0216p-939,
     0x1.107fc418b1deap-244, 0x1.af8cc1fa20997p-493, 0x1.bed62771005e1p-346, 0.0, 0.0,
     0x1.7c2d612dc7e42p-901, 0x1.c299b2af505bbp-186, 0x1.6381cbfd1b1fcp-247, 0.0, 0.0,
     0.0, 0.0, 0x1.4630f945bfe8ap-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fff5a1bb21f5bp-127, 0.0, 0x1.6d87476e90778p-932, 0x1.afe7aba5b8c99p-982,
     0x1.805de681abe5ap-709, 0.0, 0x1.f45fd70f4ea4ep-1007, 0.0,
     0x1.724a4a71c0b7cp-514, 0x1.b7fc95a08a3a3p-1005, 0x1.73d7e666a3676p-735,
     0x1.6f3998fa131eap-388, 0x1.6acd97117be8bp-186, 0x1.9128e4311a249p-970,
     0x1.bd0cda53bb31ap-73, 0.0, 0x1.9838e1d3e1fedp-71, 0.0, 0x1.df9eb45452b02p-593,
     0x1.315dc51217b7ap-236, 0.0, 0x1.e0c4109bed31cp-551, 0.0, 0.0,
     0x1.4f7a9390ff5d8p-777, 0x1.91a7534ac80bp-5, 0.0, 0x1.e7342927e5905p-932,
     0x1.f998389414229p-498, 0.0, 0x1.1acefbf09454ap-442, 0.0, 0x1.ef97fa1c0a861p-337,
     0x1.e75f6138481dbp-720, 0x1.0446721547cap-770, 0x1.7eb3f64bb757cp-408, 0.0,
     0x1.75062e3d862a4p-697, 0x1.e9bfaf737401dp-913, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fcdc57033bd44p-226, 0.0, 0x1.c72e7c6e27f0dp-10, 0x1.95cbfeaafe7cbp-709, 0.0,
     0.0, 0x1.350e46e8f3ec9p-920, 0.0, 0x1.8a76d0c99124p-973, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ef5cf0a5f881bp-616, 0.0, 0.0, 0x1.3c4368ecc00e8p-548,
     0x1.6691cfaccc16ap-1002, 0.0, 0x1.d621765de6abep-1001, 0.0,
     0x1.3836504344b04p-368, 0.0, 0x1.429bc64f508f8p-827, 0x1.22853e4bc4f6ep-454
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_expfrexpd2_avx2128(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_finz_expfrexpd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_expfrexpd2_avx2128 bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
