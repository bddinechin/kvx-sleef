/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundd2_avx2128.c --function Sleef_finz_roundd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.7b4c833e463a3p-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.929303b1362f8p-342,
     0x1.d964fc42e1e64p-1007, 0x1.6be0ba7fb4e55p-904, 0.0, 0.0, 0.0,
     0x1.70a18e26791dap-107, 0x1.fa469564918c3p-166, 0x1.e19695e14bbddp-743,
     0x1.15d4ec791b335p-2, 0x1.431d85086a6c8p-860, 0.0, 0x1.27dd4f244686fp-311,
     0x1.f70f433f74a38p-522, 0x1.34c9bddc88477p-645, 0.0, 0x1.d08820a89e74p-275, 0.0,
     0x1.ea7b3c21ca5bp-578, 0.0, 0.0, 0x1.b71855addc305p-117, 0.0, 0.0,
     0x1.a2452a0c7680ep-523, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.750bf0c1d27dap-746, 0.0, 0x1.89817417ac77ap-27, 0x1.887927ea1476ep-676, 0.0,
     0x1.c22bfb0c6d532p-592, 0x1.b7d3e01f85406p-915, 0.0, 0x1.499671beca9e5p-685,
     0x1.4f6fbadff3c21p-432, 0.0, 0.0, 0x1.abcdf72769532p-1002, 0x1.7cf830833b86p-104,
     0.0, 0.0, 0.0, 0x1.8c7eccf693714p-863, 0.0, 0.0, 0.0, 0x1.37a9b5477b4ebp-619,
     0x1.e13f55c68314bp-483, 0.0, 0.0, 0x1.4c86b9de1cad9p-137, 0.0,
     0x1.79b159c08cb6ap-2, 0x1.3286a6af84a04p-1019, 0x1.073cd324751fdp-251, 0.0,
     0x1.dbedb76532d38p-899, 0.0, 0x1.49ad05913a1ap-171, 0.0, 0.0, 0.0,
     0x1.2211be7293719p-461, 0x1.7cc1bd69f8105p-863, 0x1.cc10b5fa36ce1p-716,
     0x1.806291aa0ead5p-205, 0.0, 0x1.09eece27161a7p-77, 0.0, 0.0, 0.0,
     0x1.31e04f57d39a1p-598, 0x1.a7f3012282642p-379, 0.0, 0x1.836795c287d2ap-716, 0.0,
     0.0, 0.0, 0.0, 0x1.d024cab8a89cbp-620, 0x1.5c49328b7660ep-203, 0.0, 0.0, 0.0,
     0x1.05c1926781bffp-530, 0.0, 0x1.aa5bb7032cb9bp-378, 0.0, 0x1.c993b31c098bfp-35,
     0.0, 0.0, 0x1.1861cced9e3bbp-100, 0.0, 0.0, 0x1.8e97b1beaa5dp-472, 0.0, 0.0,
     0x1.8a9ea6cbbfbcdp-1007, 0.0, 0.0, 0.0, 0x1.ca0fcbba0f88dp-912, 0.0, 0.0, 0.0,
     0x1.69268a0c0e04cp-500, 0x1.402b9fc7654a1p-647, 0x1.f16202150ba4bp-642, 0.0,
     0x1.cdbdf7936b10ap-209, 0.0, 0x1.ac938acbee8a7p-497, 0x1.6be295ec289a7p-815,
     0x1.82692fbe78b1fp-378, 0x1.cc98e7ca331bbp-879, 0x1.d2773d626ae3cp-457, 0.0,
     0x1.f783befc633d9p-949, 0x1.59e282362cd73p-20, 0.0, 0.0, 0x1.bbdb4a72d5b64p-773,
     0.0, 0x1.5865b71a063a1p-124, 0.0, 0x1.0337255071384p-837, 0.0,
     0x1.44d7e994ec0ap-743, 0.0, 0.0, 0.0, 0.0, 0x1.472b06b2c3b21p-890, 0.0, 0.0,
     0x1.620a304394886p-638, 0x1.837e81bd7e3d2p-964, 0.0, 0.0, 0.0, 0.0,
     0x1.82fccbef34278p-668, 0.0, 0.0, 0.0, 0x1.450682d6750cep-225,
     0x1.c943c0b858aa8p-998, 0x1.308ce1ab1835p-419, 0.0, 0.0, 0x1.a33d35541f3c3p-87,
     0x1.8b179247a05e6p-359, 0x1.dd9fd88deed55p-813, 0x1.bca4a2128df55p-565,
     0x1.9651f879699e6p-916, 0.0, 0.0, 0.0, 0.0, 0x1.ba2f47172ecb7p-274,
     0x1.424c8248a127cp-482, 0.0, 0x1.66a7106759c62p-569, 0x1.a74613aed0a77p-232,
     0x1.82b4de886a1afp-497, 0x1.2920142739333p-144, 0.0, 0.0, 0.0, 0.0,
     0x1.af9e7da3576d2p-322, 0x1.6a365bf18f798p-147, 0x1.ce2aa392fde5fp-346, 0.0,
     0x1.03632ea53cbebp-892, 0x1.340e5a308972ap-757, 0x1.bfb0114f02442p-247,
     0x1.f462fc8fffa67p-350, 0.0, 0x1.a85e72217fc6ep-475, 0.0, 0x1.e6f5f36e6fe74p-812,
     0x1.31588daa98f94p-6, 0x1.241843feb6774p-557, 0x1.acf26f9620f21p-999,
     0x1.dc0d652bd6281p-87, 0.0, 0.0, 0.0, 0x1.0c5de1eae8b8dp-979,
     0x1.4dd1696575945p-636, 0.0, 0.0, 0.0, 0x1.f12c15e37a662p-53, 0.0, 0.0,
     0x1.3c8afbf2ca50cp-408, 0x1.549399aff6b31p-205, 0x1.76ebb4f5738a8p-907,
     0x1.eca6aee51dcfap-424, 0.0, 0x1.605e95d807559p-697, 0.0, 0x1.ac438788c7d9fp-817,
     0x1.2e6232b1f8714p-406, 0x1.6bb8a3cdab601p-947, 0.0, 0x1.fc38aff051e56p-361,
     0x1.928a3cbc21acdp-183, 0x1.274a07a4bb688p-843, 0.0, 0x1.cb28cdb3f4b2p-880, 0.0,
     0x1.b181734d4ad08p-22, 0.0, 0.0, 0x1.6dc65a16394bbp-567, 0.0,
     0x1.e237afe734c0dp-936, 0x1.790d96bf80855p-638, 0x1.0168cf9a63161p-483, 0.0,
     0x1.49a0272fd189ap-286, 0.0, 0.0, 0x1.a44dc109e7a6cp-575, 0.0, 0.0, 0.0,
     0x1.51289b16923f3p-53, 0x1.e7eecd84509e1p-469, 0x1.c18741335d72p-642,
     0x1.0425321601389p-187, 0.0, 0x1.78eeaae0a4344p-155, 0x1.b531982902c29p-236, 0.0,
     0x1.eb22111e18cacp-862, 0x1.52e8465c5a96cp-650, 0x1.66f5f3e07f6ffp-138, 0.0, 0.0,
     0.0, 0.0, 0x1.cd8204a0e44b3p-165, 0.0, 0.0, 0x1.423924c9d57e8p-615, 0.0, 0.0,
     0.0, 0.0, 0x1.6e3604ec51ab8p-600, 0x1.f95ceb17de802p-500, 0.0, 0.0,
     0x1.b42b12cfb45a5p-794, 0.0, 0.0, 0x1.4de2580387c77p-1000, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0af4c9eb6f129p-453, 0x1.98731058a2adfp-575, 0x1.5214a789aab2p-876, 0.0,
     0x1.a0be1cc2ab2cp-187, 0x1.fcd62c9cf7897p-204, 0x1.7e015165969c6p-397, 0.0, 0.0,
     0x1.c20e57670bdc1p-261, 0.0, 0.0, 0x1.fa31a2c6a624p-583, 0.0, 0.0,
     0x1.d97aa55594d11p-705, 0.0, 0x1.78e7ee3313accp-115, 0.0, 0.0,
     0x1.b5e4bf9b69e1ap-156, 0.0, 0x1.d3a8a7f573a81p-202, 0x1.be4c548b425bap-135,
     0x1.d1328e620852p-450, 0.0, 0.0, 0.0, 0.0, 0x1.b4305954fb4bdp-755,
     0x1.e67dc80e72d51p-535, 0.0, 0x1.ebf51c44a4002p-196, 0.0, 0.0, 0.0, 0.0,
     0x1.dfeb67cca336bp-658, 0.0, 0.0, 0x1.fef2617b3de8ap-257, 0.0, 0.0,
     0x1.59d08537b4363p-954, 0.0, 0x1.7cd00a9ba9ccep-495, 0.0, 0x1.b905c213f4b13p-245,
     0x1.0b74be942a09ep-720, 0x1.2221b1b351feap-380, 0x1.37983c13d8ec9p-86, 0.0, 0.0,
     0x1.6c3e8daf56cb5p-964, 0x1.e0b0655671e01p-254, 0x1.8185bd1540888p-178,
     0x1.07f867ecc3476p-831, 0.0, 0x1.29eec8c1a5017p-230, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2d16faed78c57p-559, 0x1.ee42615f58d03p-810,
     0x1.0470068ab1332p-969, 0.0, 0.0, 0x1.a93073766ca3cp-450, 0x1.d903e65d4f1aap-597,
     0x1.657f42e8d188dp-798, 0.0, 0x1.852d44241e8a9p-992, 0x1.57441d4adfc7cp-948, 0.0,
     0x1.0921f71febb4cp-255, 0x1.ea9c728cb6abdp-413, 0x1.25a2b1df6932cp-376, 0.0, 0.0,
     0x1.2769f1fbcae9cp-382, 0x1.8c3fb7592f9c7p-811, 0x1.c424cac0b6c87p-129, 0.0,
     0x1.4045624ac7e15p-276, 0x1.ce0f8010ca657p-880, 0.0, 0.0, 0x1.b6b8116bf7c27p-919,
     0x1.cecaabd4aa524p-878, 0x1.dc92584d7fc94p-418, 0.0, 0x1.bd7c774405b69p-528,
     0x1.11dc867d04efcp-597, 0x1.0be4a05f9dfc9p-439, 0.0, 0x1.0d7cf561ac0eep-40, 0.0,
     0.0, 0x1.4dada58bde68ap-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f05f168d49179p-227, 0x1.902eb0004ce5p-1011, 0x1.52ddba342264ap-765,
     0x1.d991279d3e1dep-415, 0.0, 0.0, 0x1.c4768bdb55925p-482, 0.0, 0.0, 0.0,
     0x1.f91a1b380288ap-315, 0.0, 0x1.02e106656b5a5p-889, 0.0, 0x1.d09fab0adc3fcp-943,
     0.0, 0.0, 0x1.7cc8004e27278p-428, 0x1.b3238ddb4e69ap-243, 0.0,
     0x1.421be23342bcp-517, 0x1.c0b1be23fabbcp-61, 0x1.de987a95d3e82p-648,
     0x1.cdf85571ea99p-366, 0x1.8a06615bea711p-768, 0x1.a7da3abff9f95p-572,
     0x1.d2eff7a33f5dcp-302, 0x1.72a870bbe51c5p-614, 0x1.a4802d11ba97fp-408,
     0x1.ffe11bced9401p-95, 0x1.0b7a463e4f4f6p-779, 0x1.20ca00ccf51ffp-658, 0.0,
     0x1.c232c432c73cbp-352, 0.0, 0.0, 0x1.36d4b349de9dfp-423, 0x1.c300ca8fee4a4p-865,
     0.0, 0.0, 0.0, 0x1.8fa156d17b56dp-961, 0x1.51c5f42da8fabp-343, 0.0, 0.0,
     0x1.6b50bee77e0a8p-388, 0.0, 0.0, 0.0, 0.0, 0x1.8b1ea3b943bb6p-705, 0.0, 0.0,
     0x1.75eaa6bd607f9p-26, 0.0, 0.0, 0x1.07f60c7c23fbfp-857, 0x1.70dde8ff20edp-171,
     0x1.1b7db09998143p-756, 0.0, 0.0, 0.0, 0x1.6dfd2a066d0bfp-334,
     0x1.b0dbac2ac12e1p-102, 0x1.dc537653e8c65p-95, 0x1.74d62ed0a1b8cp-130,
     0x1.da9772159dddap-549, 0.0, 0.0, 0.0, 0x1.0e5e034e738c6p-232,
     0x1.83f9fffd0538ep-399, 0.0, 0x1.b9aaa8be46e84p-250, 0.0, 0x1.36298a5801b2p-601,
     0x1.f1ec2c4fafbaap-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b8c7291819ecfp-17, 0x1.125a0be9a50b4p-699, 0x1.3854c50c51004p-700, 0.0, 0.0,
     0.0, 0.0, 0x1.f8fc40a5dc51cp-888, 0.0, 0.0, 0.0, 0x1.ba46cb950a582p-471, 0.0,
     0x1.97d012bf01554p-563, 0x1.c4bc42402c0ccp-663, 0x1.577c4ecd4327p-24,
     0x1.1fb9b31835d73p-246, 0.0, 0x1.c872e35c374acp-641, 0.0, 0.0,
     0x1.f859594204d26p-673, 0x1.6eae01ccadee1p-103, 0x1.b969f833d3f2fp-712,
     0x1.230bf4131f73ep-777, 0x1.9c14d37d8c67ep-22, 0x1.c151b9823417fp-253, 0.0, 0.0,
     0.0, 0.0, 0x1.b80216ab9e6efp-751, 0x1.0e9f66f329548p-332, 0x1.111be3a4516d2p-26,
     0.0, 0x1.1fbf9d732d457p-490, 0.0, 0x1.aa91d3ceb9739p-189, 0x1.60840bc80ae6ap-543,
     0x1.a590ed48e554ap-826, 0.0, 0x1.fa1c788128ba8p-190, 0x1.ed388cab5cf02p-285, 0.0,
     0.0, 0x1.ecceb8f9e23f2p-853, 0.0, 0x1.977e0851fe989p-805, 0.0,
     0x1.7d32920130b01p-918, 0x1.5e63cba8a3cd7p-417, 0.0, 0.0, 0.0,
     0x1.a5ce7ad809c7ap-654, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bad7823d86e7bp-511, 0.0,
     0x1.cde100fd5cd5cp-848, 0x1.3be8b0c945704p-129, 0x1.07b6267be31e9p-604,
     0x1.d1a23b6c2c8p-985, 0x1.a877ec3745dbep-943, 0.0, 0x1.b53aeb2e17ad5p-936, 0.0,
     0.0, 0x1.5f318378b9556p-219, 0.0, 0.0, 0x1.adbf3c2a5aa93p-654,
     0x1.c624ee28092abp-813, 0x1.cc52f7709bffdp-790, 0.0, 0.0, 0.0,
     0x1.b1c65d1675654p-450, 0.0, 0.0, 0x1.397504da6049fp-798, 0x1.52dfb25c1406cp-292,
     0.0, 0.0, 0x1.0d408f93b6f8cp-169, 0.0, 0.0, 0.0, 0x1.64c5f009be9f6p-893,
     0x1.75f8d89c91408p-821, 0.0, 0x1.9ea9d607147fbp-334, 0.0,
     0x1.10db8d42443dcp-1012, 0.0, 0x1.dd7f5a36f1f56p-638, 0x1.9d1301c9b250cp-872,
     0.0, 0x1.969027a9d6cbdp-814, 0x1.09a4da305e058p-482, 0.0, 0.0,
     0x1.d8efabe37401p-647, 0.0, 0.0, 0x1.31803b21aadf9p-707, 0.0,
     0x1.3a36c5aa40b71p-863, 0.0, 0x1.8eecdf5e274fap-290, 0.0, 0x1.ff41cdf2f217ep-550,
     0x1.468fe7e271637p-1015, 0.0, 0x1.89948734be67bp-345, 0.0,
     0x1.a9116e894db8ep-563, 0.0, 0x1.3a4a3fe2e844ep-910, 0.0, 0.0,
     0x1.e282defb46e3bp-926, 0x1.bec1cad00b8bp-289, 0x1.6d0e0b1fbd329p-493, 0.0, 0.0,
     0.0, 0.0, 0x1.9a8f87b887a11p-488, 0x1.457fa48a5b7dep-849, 0x1.e0394e5c6c8f5p-662,
     0x1.906230bb81ddap-35, 0.0, 0x1.8235ddedbc148p-855, 0.0, 0x1.3d0f67eb1e89cp-470,
     0.0, 0x1.5dd595c324eebp-496, 0x1.00af885d18163p-738, 0.0, 0.0,
     0x1.5ee59aa1af1c8p-392, 0.0, 0x1.ee44c1c39f1fbp-99, 0.0, 0x1.4bf4754a4320ap-368,
     0x1.12e81bd425068p-433, 0.0, 0.0, 0x1.876abef1eba5dp-995, 0.0,
     0x1.fe2663aa0a5a6p-540, 0x1.182572ac62026p-128, 0.0, 0.0, 0x1.9b473e696b14cp-576,
     0x1.e2671a63a8281p-840, 0.0, 0x1.91d03d886737fp-325, 0x1.4f529200449a8p-746, 0.0,
     0x1.66858031d9f46p-279, 0.0, 0x1.6ac68895250c3p-227, 0x1.8c0012c10b303p-201,
     0x1.248b849148c71p-971, 0.0, 0x1.91adf0cb3995dp-255, 0x1.4ba274a09bb81p-342, 0.0,
     0.0, 0.0, 0x1.0698a4161d367p-438, 0.0, 0.0, 0x1.5db285d81e1c9p-868,
     0x1.69a84d4ce5eeep-646, 0x1.8dff584aec5f8p-210, 0x1.15fc912c0ad0fp-683,
     0x1.a92ce94585262p-386, 0x1.b3dd45049e38cp-367, 0.0, 0x1.08a0e8a89ad2fp-1, 0.0,
     0.0, 0x1.fced7a197f4d5p-324, 0x1.ef42799c977afp-270, 0x1.2f8f3193c641cp-650,
     0x1.793507af90375p-78, 0.0, 0.0, 0.0, 0x1.12153db45ee5dp-225,
     0x1.75451d87b32e7p-136, 0.0, 0.0, 0.0, 0.0, 0x1.2cccf64538b3dp-417,
     0x1.31f778b2fcbcbp-1007, 0.0, 0x1.0bf89f637d4b6p-998, 0.0, 0.0, 0.0,
     0x1.88dc8ab52be3cp-874, 0.0, 0.0, 0.0, 0.0, 0x1.eb8fbe40a50c6p-137,
     0x1.cc549e32b0263p-950, 0.0, 0x1.d6af4382b95e9p-716, 0.0, 0x1.dafb140372b6ap-245,
     0.0, 0x1.33e1e5697d26bp-700, 0x1.9e80258aa51e8p-155, 0.0, 0.0,
     0x1.e3bef056f9ee5p-812, 0x1.5679fa7beb521p-842, 0x1.50cc743c3250ep-777, 0.0, 0.0,
     0x1.470b5c42e3fa9p-200, 0.0, 0x1.3a0b36dce0ff1p-914, 0.0, 0x1.004437e1e6772p-179,
     0x1.7399d3f204c7fp-541, 0.0, 0.0, 0.0, 0.0, 0x1.e7a2599d493a7p-959,
     0x1.6c213d99da843p-401, 0.0, 0x1.a039fd890e761p-728, 0x1.884dc8b58b3e4p-38, 0.0,
     0x1.2fde5dce14bf3p-603, 0x1.60d30d0995318p-968, 0x1.3c72725481f53p-850, 0.0,
     0x1.5cbbed8efae4bp-40, 0.0, 0x1.079dd61eb32bep-134, 0.0, 0.0, 0.0, 0.0,
     0x1.5572570b3a0e1p-623, 0.0, 0x1.3317bd66ae926p-120, 0.0, 0x1.2445a307f5457p-688,
     0.0, 0x1.59d371d8d4283p-122, 0.0, 0.0, 0.0, 0x1.5082fedcffcb3p-555, 0.0,
     0x1.bc0ede5716ccap-145, 0.0, 0x1.76af505c7f94ap-647, 0x1.342e4c7da35b8p-981,
     0x1.da1bd6999609ep-822, 0x1.212c58483a5d8p-192, 0.0, 0x1.ba6e89bfdb7d2p-353, 0.0,
     0x1.0990882219b88p-316, 0.0, 0x1.4c18b4476d1f9p-530, 0x1.71806060c37efp-831, 0.0,
     0x1.c314d27f321c2p-583, 0.0, 0x1.1fe996d5eecf2p-901, 0x1.6f841d8a47f5dp-507,
     0x1.65551b79b0d56p-478, 0x1.e21b9fff8c35bp-603, 0.0, 0.0, 0x1.f95b529a792dap-660,
     0.0, 0x1.5d3329d5e72bbp-624, 0.0, 0x1.757ec296c7423p-306, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf7b90f36fc7fp-795, 0.0,
     0x1.0d480538dcd46p-213, 0x1.6507bab48d825p-643, 0.0, 0x1.722f8a9e9fac1p-487,
     0x1.77aaeaa56f306p-90, 0.0, 0.0, 0.0, 0.0, 0x1.4ebb3fbe5666ep-50, 0.0, 0.0, 0.0,
     0x1.189f90d2f3d18p-392, 0.0, 0x1.3f557b1aba09ep-938, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.cd035e7cbccf6p-184, 0.0, 0.0, 0x1.855b4b5035047p-733,
     0x1.46bb1b0196c72p-787, 0x1.214e48a6c04f9p-520, 0x1.5854d8aa54709p-334,
     0x1.597725f159fe3p-199, 0.0, 0x1.d39e5befa06cbp-720, 0x1.785dd2f18869bp-822,
     0x1.a6fd4410cd3e4p-395, 0x1.07607722636f7p-263, 0x1.2e979fda92c28p-151, 0.0,
     0x1.0ef41864381c1p-131, 0x1.e088a7a943d53p-588, 0x1.3ed29322c0939p-574, 0.0, 0.0,
     0x1.87c10eaa53de8p-671, 0x1.fbedde426d012p-217, 0x1.5618cddf532e5p-887,
     0x1.09fc898789bf1p-865, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06d513fdbffdcp-14, 0x1.d39559eb03d46p-1017, 0x1.8b3058fd364bbp-575, 0.0, 0.0,
     0.0, 0x1.34efadde6777fp-249, 0x1.9340a4162de23p-220, 0x1.ec5e7e3810fc2p-121, 0.0,
     0x1.b475b508ca28bp-708, 0.0, 0.0, 0.0, 0.0, 0x1.ef9b662da6109p-987, 0.0,
     0x1.507d09ae424aap-197, 0x1.8a3cf28ee84cfp-288, 0x1.d6267644986a3p-880, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.391bc311ce507p-358, 0.0, 0x1.e4ec058804e1bp-897,
     0x1.f29ea9d57eebcp-838, 0x1.0893f699443c9p-101, 0x1.93c143eb03183p-624, 0.0, 0.0,
     0x1.d12ae8e3f0753p-739, 0.0, 0x1.58437a17ba794p-489, 0.0, 0x1.b4f1fd06d1ac7p-720,
     0.0, 0x1.c00008321a151p-276, 0x1.927d6ae734e1bp-202, 0x1.0aa5e0a63ef6p-587, 0.0,
     0.0, 0.0, 0.0, 0x1.3227ce24d444ap-468, 0x1.f733c49a8b992p-478, 0.0,
     0x1.c6efd426d105ep-684, 0x1.d4085cb427b12p-947, 0.0, 0.0, 0x1.55d7eedd3d8c9p-941,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8615d8476fd9p-251, 0.0,
     0x1.c2d533c3f603dp-673, 0.0, 0.0, 0x1.4fc44a7cf3d4cp-378, 0x1.2099b02d69d94p-771,
     0x1.1dea78e15800cp-757, 0x1.84fdaf4a3f402p-263, 0x1.d41400e497d0cp-720, 0.0, 0.0,
     0x1.9e72d1a42af4ep-670, 0x1.148cf69e10563p-670, 0x1.4c0c9620aa95cp-9, 0.0, 0.0,
     0x1.745da80fb84e4p-287, 0.0, 0.0, 0x1.5cdf9013f8843p-656, 0x1.491b0b2ad9121p-530,
     0x1.10f408415ede1p-156, 0.0, 0x1.e2a78119555fbp-305, 0.0, 0.0,
     0x1.1abce11cd0757p-339, 0x1.928bd9322df76p-916, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d393fd227b1dep-90, 0x1.5b4b44e81a358p-680, 0.0, 0x1.e427c2b46115p-865,
     0x1.3177195440056p-215, 0.0, 0x1.54aec33743653p-388, 0x1.afd2a249e0e4fp-81,
     0x1.6d0ad04853f49p-341, 0x1.79f07a0ba7fc8p-53, 0.0, 0x1.305c498072a8ep-581,
     0x1.1f58acbe9d688p-591, 0x1.680248c37d7cdp-294, 0x1.a7caa7739fca1p-835,
     0x1.81f8a689e9956p-580, 0.0, 0.0, 0x1.36ac6ddee69d9p-812, 0x1.b3b4e1a640c0bp-725,
     0.0, 0.0, 0x1.32780c37f8d14p-511, 0.0, 0.0, 0x1.f470f72b53ea5p-744,
     0x1.2ce1beb838e65p-534, 0.0, 0.0, 0.0, 0x1.3ca5adf9670b2p-121,
     0x1.cc3fee77f24c7p-651, 0.0, 0.0, 0x1.57022dac346aap-986, 0.0, 0.0,
     0x1.755d4873763e3p-793, 0.0, 0.0, 0x1.55b680f0c1f42p-722, 0.0, 0.0,
     0x1.e2aab61aebdc5p-170, 0.0, 0.0, 0.0, 0.0, 0x1.7b48807a8fabap-519, 0.0, 0.0,
     0x1.442f58dae797fp-577, 0x1.18275d0c87eeep-313, 0x1.9f07b580e56cdp-472, 0.0,
     0x1.234b6bfdf000dp-871, 0.0, 0x1.1998a04776fe1p-1004, 0.0, 0.0, 0.0,
     0x1.9913a018beabp-943, 0x1.6a2ef33f82bbbp-445, 0x1.68a4a632d5c23p-648
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
            tmp1 = Sleef_finz_roundd2_avx2128(tmp0);
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
    printf("Sleef_finz_roundd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_roundd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
