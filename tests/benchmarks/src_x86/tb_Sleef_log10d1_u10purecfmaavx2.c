/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log10d1_u10purecfma.c --function \
 *     Sleef_log10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0x1.f7042c05f2565p-666, 0x1.c6077007c6b06p-702, 0.0,
     0x1.94e63c2ab4bf7p-739, 0x1.50f845adaa1c5p-77, 0.0, 0x1.f40aa8ff10c2ap-426, 0.0,
     0.0, 0.0, 0.0, 0x1.5fbe564378653p-708, 0x1.093f292b5530fp-72,
     0x1.6a923d9582c98p-92, 0.0, 0x1.b1433197b6611p-842, 0x1.acea7b06a5f4fp-396,
     0x1.36345425e709ap-26, 0.0, 0x1.7550baa24a4bcp-333, 0x1.7a5fe8860e9c5p-422,
     0x1.8275bd5d58047p-194, 0x1.674cfb3200234p-915, 0x1.974de13a8b4dcp-412, 0.0, 0.0,
     0x1.5e3ddfbf50565p-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1a6769b07cdcp-247,
     0.0, 0x1.2ad1852e0d8d7p-42, 0x1.5ff49630b6e5bp-661, 0x1.4b19055ebdc5bp-833, 0.0,
     0x1.3864aa43dd066p-881, 0x1.5e30c33e787b1p-637, 0x1.a2bf14e3a353bp-548,
     0x1.93d711e443f5ep-847, 0x1.97ffe3a9b7a8bp-638, 0x1.ad5833decc953p-516,
     0x1.a033e348f8159p-439, 0.0, 0.0, 0.0, 0.0, 0x1.08be63198d287p-820, 0.0, 0.0,
     0.0, 0.0, 0x1.791cad9ae868bp-682, 0x1.54237434df79dp-149, 0x1.206e98b38fda4p-284,
     0.0, 0x1.950f2810fae19p-168, 0x1.4c303493a6911p-187, 0x1.6031bcfdede5dp-333, 0.0,
     0x1.ff6ca2c8f3a5fp-117, 0x1p0, 0x1.ec87290fbc7b8p-655, 0.0,
     0x1.480b84b784b26p-758, 0.0, 0.0, 0x1.137f819122f0ep-931, 0x1.227c4e2919556p-845,
     0.0, 0x1.c8ea266bf9208p-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21be1a3c10d5bp-50,
     0x1.2abf8b60a6fbcp-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e53532708d673p-810,
     0x1.2b1583a55b372p-817, 0x1.d92740c8b3595p-457, 0.0, 0.0, 0x1.9136b802d741cp-903,
     0.0, 0x1.4ea4d7a3094b1p-127, 0x1.7bde3e3a9949fp-656, 0x1.bd0b3d8f4cff2p-749,
     0x1.45c4169f21855p-661, 0.0, 0x1.df6e5ae1ef3a5p-176, 0x1.8b5fdbd27da04p-312,
     0x1.a8ad08f77d147p-230, 0.0, 0x1.a097383afeff7p-645, 0.0, 0.0,
     0x1.b0ed29eb72d28p-314, 0x1.951bde1cb25b5p-379, 0.0, 0x1.45a5ec65c1407p-237, 0.0,
     0x1.44c7313be4737p-735, 0.0, 0x1.dde05c97638a4p-432, 0.0, 0x1.928b0db5d0892p-269,
     0.0, 0x1.8a2dee2faac74p-881, 0.0, 0.0, 0x1.8728ef632ef98p-91, 0.0,
     0x1.899c4f3f8d237p-542, 0.0, 0x1.c8783e6c3d49ep-479, 0x1.0e1e607a428d4p-59, 0.0,
     0.0, 0x1.4d5066bc94a94p-319, 0x1.cdf6f5939f556p-138, 0x1.62c97a8f5873fp-642,
     0x1.d8e4a08439109p-366, 0x1.4c258f21256cp-755, 0.0, 0x1.a8a7986e9eb55p-998,
     0x1.5e81a025b8e7bp-928, 0x1.15747874e19e7p-376, 0x1.77655f20a78aep-224, 0.0, 0.0,
     0x1.c25d28de50cdep-786, 0x1.9dd8059f86c5fp-486, 0x1.c84058c8027c3p-915, 0.0,
     0x1.c59466adae998p-1020, 0.0, 0.0, 0x1.a13d2e6665215p-456,
     0x1.19d052acf3ea2p-699, 0x1.d9b9c0e00a157p-292, 0.0, 0.0, 0x1.09ab5242c65dfp-613,
     0.0, 0x1.4e0737ac0b99bp-213, 0x1.e757921e6e728p-291, 0.0, 0.0,
     0x1.d3ef30dc574f7p-837, 0.0, 0x1.418833442c094p-598, 0.0, 0x1.6eea194597be3p-63,
     0.0, 0.0, 0.0, 0x1.04b2203c6f032p-927, 0.0, 0x1.f1f1631bc1ad4p-48, 0.0,
     0x1.1306235654672p-401, 0.0, 0.0, 0x1.d97d10d09965p-27, 0x1.989e5eb832cfcp-311,
     0.0, 0x1.6d2e4072f8579p-261, 0x1.ba94f4bf7533cp-364, 0.0, 0.0, 0.0, 0.0,
     0x1.a6fc4fb81f57dp-103, 0.0, 0x1.7a1bad4107898p-465, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5c767f054983p-63, 0x1.846c9e977ac43p-880, 0.0, 0x1.0accc85e06b7p-328,
     0x1.5be3531880032p-575, 0x1.6fc37eaf157b9p-7, 0.0, 0x1.3945d253e3ffcp-794,
     0x1.ba33e5cafc832p-876, 0.0, 0x1.673bdefa04c7fp-621, 0.0, 0x1.8e96ffc444da6p-522,
     0.0, 0x1.b488dc8a70c87p-569, 0x1.ba5b47de90d47p-819, 0.0, 0x1.64be2d4e65692p-398,
     0.0, 0.0, 0x1.b5605367eb8ffp-1005, 0.0, 0x1.6800c063391d8p-312, 0.0, 0.0,
     0x1.67e2005bd581bp-308, 0x1.af4a04134aae6p-137, 0x1.a26f26295272cp-278,
     0x1.87fd61714cc66p-27, 0x1.2fb1c9697fa2ap-925, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd7be8d1e015fp-681, 0.0, 0x1.7f3a12feee2cdp-675, 0.0, 0.0,
     0x1.fff0b0004c0d6p-324, 0.0, 0x1.a2cc4d0fd7631p-18, 0.0, 0.0, 0.0,
     0x1.fcac9943a3091p-890, 0.0, 0x1.29976ed25cbffp-524, 0.0, 0x1.2479fab4c06cp-634,
     0x1.ef679cd62020dp-60, 0x1.c66e9357a511ep-949, 0.0, 0x1.047f729710051p-872, 0.0,
     0x1.2ed7b6ab193c5p-601, 0.0, 0x1.f5b9b9fc81c87p-369, 0x1.1fda1ea5013bap-249,
     0x1.0f29179bc0d88p-878, 0.0, 0x1.474b44ddf5764p-951, 0x1.9270a4f2b693dp-117,
     0x1.a8ece4acec6eap-322, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19ee4cfe51418p-519,
     0x1.99f05a6d0388ep-510, 0x1.8c21ad4a149eep-649, 0x1.41686b7dc2029p-453,
     0x1.84901a0c2b9d8p-297, 0.0, 0x1.e1237204f57d9p-880, 0.0, 0.0, 0.0,
     0x1.ae22e5414a211p-967, 0x1.3bb265f7bd5cap-807, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba9162952ec0cp-94, 0x1.8edf5fbe44ad9p-992, 0.0, 0.0, 0x1.c122a9bfe2b7ep-357,
     0x1.58784cb5ef487p-624, 0x1.0f49fa5214ceep-890, 0x1.1f7f4798cc6ddp-666,
     0x1.270aefec7f926p-356, 0.0, 0x1.247951ca2a275p-689, 0.0, 0.0,
     0x1.4e439035b8196p-640, 0x1.fd1d20492670cp-307, 0.0, 0.0, 0x1.a6ca45d89b263p-727,
     0x1.ec63103c3cc45p-257, 0.0, 0.0, 0.0, 0x1.c91e565cf1fbcp-1022, 0.0,
     0x1.a2cc888aa3594p-324, 0x1.a42a8c33dc492p-236, 0x1.a6c9f9a53300fp-8,
     0x1.380138efc8f57p-229, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b9e373f967cep-548,
     0x1.1d9f8fe2554f1p-226, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.243ae044fd5dfp-159,
     0x1.36f75a2bb4223p-164, 0x1.36bdb377205d8p-177, 0x1.8001c214f7b46p-734,
     0x1.3efa78641d7aep-873, 0x1.174f859566315p-836, 0.0, 0x1.f8f4bae6571edp-787,
     0x1.f22d0086e7326p-464, 0.0, 0.0, 0x1.13ee49737c84cp-5, 0x1.58dfcf926eb0cp-441,
     0.0, 0.0, 0.0, 0.0, 0x1.c8b6695d7a56cp-674, 0.0, 0.0, 0.0,
     0x1.e5e7e73cfdbfdp-539, 0x1.467136527bfc5p-127, 0.0, 0x1.a150cfd977712p-124,
     0x1.59c3cd50a750bp-545, 0x1.a30bc2158b182p-667, 0.0, 0.0, 0x1.6500fa2a67429p-331,
     0.0, 0.0, 0.0, 0.0, 0x1.635d3e7ce97efp-173, 0x1.b8081d3066e79p-882,
     0x1.13ae26dc0a8c7p-739, 0.0, 0x1.51586ce81c5b4p-162, 0.0, 0.0,
     0x1.77f3869ccd327p-840, 0.0, 0x1.4011602f790d2p-553, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b6a2065dffc4ep-939, 0x1.88c323a240296p-559, 0.0,
     0x1.24db86a974113p-392, 0x1.b847d0d75eb3ep-808, 0x1.badc3ecf31785p-379,
     0x1.644f2bf57d4d7p-86, 0.0, 0x1.fd24bdfb4e5bap-378, 0.0, 0.0, 0.0,
     0x1.4ffe62ad48b72p-233, 0.0, 0x1.f687b4059cd76p-142, 0x1.05e5a194f132dp-869,
     0x1.a2b3bd98f00d8p-581, 0x1.64c199125dae2p-226, 0x1.1c7ccc8787a1ap-817, 0.0,
     0x1.fe7ee85b1706ep-699, 0x1.b55c716b4a3ccp-66, 0.0, 0x1.220a456500fe9p-494, 0.0,
     0x1.66f38efeaf811p-169, 0.0, 0x1.8802e4e71e2e4p-184, 0.0, 0x1.1055b8c69de16p-314,
     0x1.9459fef7b46c9p-279, 0x1.935dc49bebc2dp-658, 0.0, 0.0, 0x1.68b0ecaa1ff6fp-523,
     0x1.27459dc98e6b2p-1010, 0.0, 0x1.278643af172afp-846, 0x1.94488b0e61735p-831,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.239be0eaa4766p-267, 0.0, 0.0,
     0x1.5ac7892c254ecp-756, 0x1.ca4f85092ca45p-372, 0.0, 0x1.1bff3875c7a5p-749, 0.0,
     0x1.2b5c792e61f46p-519, 0x1.ae6f89155ea6fp-257, 0x1.156d7748e92ecp-1002, 0.0,
     0x1.f0146bcc2010ap-277, 0x1.a31a0d459351fp-620, 0.0, 0x1.41988f27e23cdp-732, 0.0,
     0.0, 0x1.bb9d0d79c507ep-265, 0x1.20505af653d0ap-200, 0.0, 0x1.b2de1a59c426bp-826,
     0x1.3d2dde75899ddp-20, 0.0, 0.0, 0x1.5190146f5f3c7p-747, 0x1.a5910fdee781cp-14,
     0.0, 0x1.00fe28d84479bp-76, 0.0, 0x1.981d6b748c561p-286, 0x1.db1de895b7a02p-665,
     0.0, 0x1.b8d8918cf43c8p-161, 0.0, 0.0, 0.0, 0x1.3ac90a450eb24p-929, 0.0,
     0x1.8f919536d5442p-578, 0.0, 0x1.7a576928d8b6ep-987, 0x1.7e7ef18734e91p-591,
     0x1.f7a534bcf98e2p-699, 0.0, 0.0, 0x1.2b33ccc619b77p-795, 0x1.ae4bd99b3b82ap-986,
     0.0, 0x1.8f880cc4bc496p-671, 0x1.cc272b754a553p-252, 0x1.8f5518ce516b6p-105, 0.0,
     0x1.c327de6b2d2c8p-180, 0x1.a03a5cb287a75p-234, 0x1.7ed75e783e29cp-884,
     0x1.3db6dd9784eddp-309, 0x1.e9a326918a017p-215, 0x1.01a143fc2c8cdp-563,
     0x1.328b88f612059p-529, 0x1.2ff2e1628889ap-721, 0.0, 0x1.64efed86a26ep-174,
     0x1.b78860d1a0ad5p-954, 0x1.6ebb574de07dcp-723, 0.0, 0.0, 0x1.1f6047415c8ccp-213,
     0x1.cff86ce2e5d5ep-922, 0.0, 0x1.f356c2d95deb1p-529, 0.0, 0.0,
     0x1.c5808cefb894dp-828, 0.0, 0x1.dd59eaa2edb7ep-896, 0.0, 0.0, 0.0,
     0x1.5fe0082a13b65p-843, 0x1.70d288b915be4p-523, 0x1.4af50313f60aap-276,
     0x1.2fc934031dd64p-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0e96f686653cp-568, 0.0,
     0.0, 0.0, 0.0, 0x1.05cef9523e31p-1022, 0x1.e11a93a01dcffp-933,
     0x1.3d68ce3b7de0bp-457, 0x1.085987f12b047p-643, 0.0, 0x1.99f75a851c91bp-975,
     0x1.b082f6709f8e7p-846, 0x1.b621bf88fc32fp-419, 0.0, 0.0, 0x1.f818c19416772p-226,
     0.0, 0.0, 0x1.d1168c3d8d419p-958, 0x1.7338c3cdb248ep-473, 0x1.f733fa3bee86bp-417,
     0x1.3de2359004d29p-893, 0x1.922223f65ce93p-503, 0.0, 0x1.4a0fc7bd90dc1p-95, 0.0,
     0.0, 0x1.4beaa9823bd59p-318, 0x1.7716f762d87dfp-93, 0.0, 0x1.202d5105580ecp-53,
     0.0, 0x1.11246d17043b3p-170, 0x1.7f8fc357aa37p-265, 0x1.df1d0d61dd856p-328,
     0x1.533a0764c85c4p-860, 0.0, 0.0, 0x1.1b61b5647c904p-752, 0x1.e2c30d9432f3ep-940,
     0x1.1f9c6c68124f8p-92, 0.0, 0x1.343149f28615ep-916, 0x1.834fab9fb7749p-662, 0.0,
     0x1.3ca7c432c2e27p-6, 0x1.b654afaffe857p-820, 0.0, 0x1.66234f788861bp-384, 0.0,
     0x1.2842f71e43859p-519, 0x1.742d42b5812edp-913, 0x1.5ab3a7e246cabp-298,
     0x1.8804c416171bcp-902, 0.0, 0.0, 0x1.922df6e8eb785p-208, 0.0,
     0x1.d48e57fe83685p-242, 0.0, 0.0, 0.0, 0x1.9981cd89715e6p-144, 0.0,
     0x1.2676e6e64e88bp-984, 0.0, 0x1.92812fda32ecbp-599, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.91633af2a346p-910, 0x1.6a772fea9d554p-393, 0x1.e5f0dd557c6a5p-249, 0.0,
     0.0, 0x1.953c90ecd880cp-564, 0x1.4ad38eb4f8e71p-820, 0.0, 0x1.f7680f0313c58p-451,
     0x1.951826a4aee69p-172, 0x1.3713912fcb2d7p-726, 0.0, 0x1.8f726d793717ap-751,
     0x1.0054b8a373f9fp-789, 0x1.52697e546786dp-661, 0.0, 0.0, 0.0, 0.0,
     0x1.c9d9bab040622p-51, 0x1.a62ce75013b62p-680, 0.0, 0.0, 0.0,
     0x1.3c4c74a9f6624p-347, 0.0, 0.0, 0x1.9691693f16e6ep-315, 0x1.793cd066ea0b4p-238,
     0.0, 0x1.cc1b039e415bdp-424, 0x1.33655a3c3637p-1006, 0x1.fd3af8faf3735p-709,
     0x1.beb9dd8dbae38p-441, 0.0, 0x1.3ce8f7de258f9p-636, 0.0, 0.0, 0.0,
     0x1.f49a9e4d1f466p-960, 0.0, 0x1.5b2aa7b41c4bbp-217, 0x1.4096726d04271p-345,
     0x1.d66420613e63bp-670, 0x1.ca4502b752441p-448, 0.0, 0x1.1e0fc9779f424p-982, 0.0,
     0x1.526a948816dfap-579, 0x1.f68901cda2e22p-901, 0.0, 0x1.5e6a2b472801ep-439, 0.0,
     0.0, 0x1.8feca8b715fc4p-656, 0x1.23117fba8537dp-799, 0x1.18604da27db4dp-611,
     0x1.a63906215451ap-66, 0.0, 0.0, 0x1.60414b98beb09p-746, 0x1.9edb20ff22805p-524,
     0x1.d0c796436d81ap-617, 0.0, 0.0, 0x1.1e8047b1a0a38p-173, 0.0,
     0x1.f8f43e48edb6p-624, 0.0, 0x1.8e444576ce12bp-601, 0.0, 0x1.f48914493063ap-120,
     0x1.f9fb46fb41c8cp-508, 0.0, 0.0, 0x1.7b3f3a1ce96b7p-399, 0.0, 0.0, 0.0,
     0x1.a0ec29a91fc58p-920, 0x1.3a5f1383510fdp-173, 0x1.33fd89f44e65fp-948,
     0x1.822308ecf15adp-204, 0x1.a74326f6c3f47p-120, 0.0, 0x1.7ab47fc895463p-642, 0.0,
     0.0, 0.0, 0.0, 0x1.05ffc2c40bb8fp-751, 0.0, 0.0, 0.0, 0.0,
     0x1.3820144a309d8p-958, 0x1.e3d7e80434028p-349, 0.0, 0.0, 0x1.17c7a7d8786b2p-179,
     0x1.3c003f59cf0b7p-523, 0x1.50446a222c5f8p-213, 0x1.ce45455c61485p-296,
     0x1.059b170d1c3fp-207, 0.0, 0.0, 0x1.5f18276a9ee93p-618, 0.0, 0.0, 0.0, 0.0,
     0x1.f1d0b60a17c95p-996, 0.0, 0x1.a9bd47430d952p-30, 0x1.bff16084e0f6ap-945,
     0x1.1050aa85dd93fp-641, 0.0, 0.0, 0x1.05476cee7c5c6p-320, 0x1.257259cfe24dcp-981,
     0.0, 0.0, 0.0, 0.0, 0x1.ce6ab5368b1d1p-236, 0.0, 0x1.315f83258cbbdp-894,
     0x1.7cae2d2be2be3p-889, 0x1.3f52a2c5b9a45p-495, 0.0, 0.0, 0x1.10e07d6c8b067p-116,
     0x1.58b550aff8a7bp-932, 0x1.7f3974afd0b02p-234, 0x1.fb5beda9ac4b3p-934, 0.0,
     0x1.0787508c30a7ap-314, 0x1.79dea936e8e6ep-303, 0.0, 0.0, 0x1.cb0bb4aeb9e25p-588,
     0x1.a93f61e5d51cbp-422, 0.0, 0x1.b21d1098f7c09p-99, 0.0, 0x1.d96e28583582ep-793,
     0x1.ee4e41d039e27p-955, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.07feb3df214d6p-119,
     0x1.b1398a84eb149p-163, 0x1.ae6ca73b358e7p-1020, 0.0, 0x1.357a2ca2c8f4fp-652,
     0.0, 0.0, 0x1.ff60d5c1f766ap-792, 0.0, 0x1.50e380336d4edp-543, 0.0,
     0x1.fd184b9972ad3p-774, 0.0, 0x1.b7c796b96f1cep-966, 0x1.55a04a8a49531p-943,
     0x1.e0c006513c0ap-933, 0.0, 0.0, 0.0, 0.0, 0x1.0145d78b84965p-955, 0.0, 0.0, 0.0,
     0.0, 0x1.a3f5f6b752616p-722, 0.0, 0.0, 0x1.34fdb739ec3e9p-589,
     0x1.bbe3aef6f755cp-668, 0x1.754a95f2aec99p-441, 0x1.b2ff81ea0e746p-535, 0.0,
     0x1.c2917a7032521p-748, 0.0, 0.0, 0x1.de7199c0ee17p-569, 0x1.4c441dfcc8f8ep-275,
     0.0, 0.0, 0x1.79c49e03a5a8ap-118, 0.0, 0x1.450faa9c3ae04p-827,
     0x1.b8ab665ac9d16p-166, 0.0, 0.0, 0.0, 0x1.dcf5cd937072ep-556, 0.0,
     0x1.a8dfe1625aa72p-885, 0.0, 0.0, 0x1.e06f9f7d0f442p-318, 0.0, 0.0,
     0x1.ba4b573ec1391p-289, 0.0, 0.0, 0x1.44aa74af74cd2p-272, 0.0,
     0x1.3c8c96dbadf96p-401, 0x1.f0ec801dc8fdep-574, 0x1.6f88e5517eb61p-324, 0.0,
     0x1.ea4bca41bbaaap-795, 0x1.4ef936ea79d63p-959, 0x1.173b55f8ed475p-965, 0.0,
     0x1.bce645de2edb2p-418, 0x1.fc02b40afb3acp-633, 0x1.ff6157bf6a3cp-300, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0e0dcf050b5c3p-661, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cddf7d1054a5ap-391, 0.0, 0x1.0c21da40b4cd3p-629, 0.0, 0x1.1aba2af0b2dbcp-500,
     0.0, 0.0, 0.0, 0x1.d73d8d80fca39p-48, 0.0, 0x1.6d54db3d68d9cp-949, 0.0,
     0x1.ba91cc81222fap-319, 0.0, 0x1.ea2eb71aea488p-320, 0.0, 0x1.965db8f95cc85p-754,
     0x1.49f417586b9e1p-778, 0x1.975e075557b52p-384, 0.0, 0x1.6fca01fd3e45ap-684, 0.0,
     0x1.26af684c177dbp-738, 0.0, 0.0, 0.0, 0.0, 0x1.96340d3dfba3fp-596,
     0x1.a3b23ea7aa4f8p-942, 0x1.32d9db5a2e21cp-591, 0x1.33908d41776edp-16,
     0x1.7c1d6804c0658p-932, 0x1.507db7a028805p-901, 0.0, 0x1.c705dbb0f4e4dp-487, 0.0,
     0.0, 0.0, 0x1.53e400051604cp-989, 0.0, 0.0, 0.0, 0x1.e3d2c41b689e8p-645,
     0x1.7b5ef24314f8dp-214, 0.0, 0x1.83507b13f3b24p-542, 0x1.77e73d51b0debp-584,
     0x1.53e5de2072d78p-117, 0x1.6a875cdb1f1fep-182, 0.0, 0.0, 0x1.396413c2d6aa7p-564,
     0.0, 0.0, 0x1.9b41b6fc61ec1p-162, 0x1.0cef78693eacp-549, 0x1.07afb67ac08bbp-438,
     0.0, 0x1.05695728dc112p-692, 0x1.fc06802307928p-866, 0x1.d74526b9f5c3bp-446, 0.0,
     0.0, 0x1.e0fafc2bc3d67p-84, 0.0, 0x1.3e98eb3dcf002p-407, 0x1.93b47d846c3d3p-717,
     0.0, 0.0, 0x1.2ffb528f68bc7p-173, 0x1.217fb3398dfb5p-568, 0x1.cc3c8760fe12ap-290,
     0x1.2d5ba7283c77bp-215, 0x1.b99cc66008d28p-558, 0x1.1710f1ab3c78fp-193, 0.0,
     0x1.2361eb0d7ce43p-401, 0x1.30ccf0426bc4p-703, 0.0, 0x1.94b615c0f530dp-1011,
     0x1.d42b60b6df529p-102, 0x1.ad5f4d861bb19p-780, 0x1.beca850d80182p-793,
     0x1.b5ad718373251p-602, 0x1.e6b8f252d2d81p-943, 0x1.11971483c0f78p-330, 0.0,
     0x1.cacc6d4434159p-50, 0x1.608c685ab748ep-966, 0.0, 0x1.ce5f6bb9fce9cp-183, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dd51d55ec8881p-357, 0.0, 0x1.d5b4ce80b3673p-129, 0.0,
     0.0, 0.0, 0x1.55f161c009e12p-92, 0x1.72bce44667c2fp-566, 0x1.86d9f153f76efp-513,
     0x1.85b8f376dcc36p-486, 0x1.c2627c1cc683fp-718, 0x1.1723733b2f0c5p-61,
     0x1.a335e1e43a073p-242, 0x1.0e6776d7b4b6p-170, 0x1.c45bc4d1afbffp-7,
     0x1.7b359c74f5215p-943, 0.0, 0x1.f10d17d213a14p-523, 0x1.35e8838da64b1p-263, 0.0,
     0.0, 0.0, 0x1.a54bb7eb997bfp-754, 0.0, 0.0, 0x1.2196a21d42ae6p-572,
     0x1.2c5484e604586p-800, 0x1.2a78210190343p-801, 0.0, 0x1.cba66df5d8774p-275, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21d5549fd0a64p-554, 0x1.21edf8e423be5p-97,
     0x1.73f3e2cc75a55p-623, 0.0, 0.0, 0x1.95bd7d00b43e3p-300, 0x1.049e89490c2d2p-146,
     0.0, 0x1.c6ee9ee739e79p-353, 0x1.dd0980a1c0f1bp-886, 0x1.ef3d9f63153edp-275, 0.0,
     0x1.610e289f0d555p-739, 0x1.cbce785a52072p-242, 0x1.aeea74281b0c2p-948,
     0x1.a56233d4df34p-837, 0x1.e80692b907f97p-346, 0x1.6fc2dcb1a5f5bp-873,
     0x1.95efeee3a5a7ep-974, 0.0, 0.0, 0.0, 0x1.947fe015218b3p-665,
     0x1.308459c9ab15dp-533, 0.0, 0.0, 0.0, 0x1.3890679d7f35fp-248, 0.0,
     0x1.e43100557aec7p-173, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a01e75545936dp-70, 0.0,
     0x1.26369dfeaacdfp-439, 0x1.fa89270c719dfp-793, 0.0, 0x1.ea6e480b0ef03p-135,
     0x1.5ce20ff4c9c35p-765, 0.0, 0x1.171e3d1054134p-548, 0.0, 0x1.2c8a347aa80b3p-207,
     0.0, 0.0, 0x1.9e4e3fc958792p-175, 0.0, 0x1.4911c8b912dbdp-204
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_log10d1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_log10d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_log10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
