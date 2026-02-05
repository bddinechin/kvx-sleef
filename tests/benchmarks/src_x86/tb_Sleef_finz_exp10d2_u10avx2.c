/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d2_u10avx2128.c --function \
 *     Sleef_finz_exp10d2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.120dab0bb03f6p-771, 0.0, 0.0, 0.0, 0x1.aee37f300141dp-41,
     0x1.d7bdec7058779p-1005, 0.0, 0x1.3b7e2c763e4c2p-776, 0x1.a7c1ad317e025p-761,
     0.0, 0x1.57b876ced228p-922, 0.0, 0.0, 0x1.1bc690ce82b4p-340, 0.0,
     0x1.59ee4bbc8ea9cp-591, 0.0, 0.0, 0x1.b623a0f1e2905p-361, 0x1.f97932cb73891p-343,
     0.0, 0.0, 0.0, 0x1.1edbef3b57901p-391, 0x1.5454458cc6d85p-815, 0.0, 0.0,
     0x1.2f4db740da479p-668, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5927e6082d35ap-754, 0.0,
     0x1.733d05806cc63p-582, 0x1.32ecd2d27aacep-981, 0x1.b1bef81918a82p-948, 0.0,
     0x1.30a63d10b8ba8p-961, 0x1.e4d13b470be24p-458, 0x1.97cc3ecb8516ep-412, 0.0,
     0x1.ad42d373cb725p-734, 0x1.b22e9925dfbd4p-338, 0.0, 0x1.13700d4294a94p-985,
     0x1.92fd30d7d637cp-359, 0x1.50cd535e16628p-10, 0.0, 0x1.5ad60ac64a828p-393,
     0x1.34634ac5250e9p-547, 0.0, 0x1.39e645eb58e08p-246, 0x1.1b8885d0965b6p-954,
     0x1.77773f241b046p-760, 0x1.fbc8817cdf275p-910, 0.0, 0x1.08b8751576022p-101,
     0x1.783d60829dd25p-315, 0.0, 0x1.b4064763202d1p-908, 0.0, 0x1.3467539357564p-975,
     0.0, 0x1.1d444a47f23eap-564, 0x1.9bc35a711e7ccp-617, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.04be82dc5621ep-681, 0.0, 0x1.2de6fe874c29ep-845,
     0x1.f961948dd35acp-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f32ebbc138273p-670, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ebbecd3cf7649p-110, 0.0, 0.0,
     0x1.841e8a93a4a02p-780, 0.0, 0x1.60fd285417ad5p-842, 0.0, 0x1.2cc5dec1fc23bp-823,
     0x1.a9ab6f7d4fb65p-776, 0.0, 0x1.e77d131e54117p-603, 0x1.2818b3a957f62p-739, 0.0,
     0.0, 0x1.3b857d28e0bc6p-841, 0x1.96d3fe771f4a6p-902, 0x1.8011535e84818p-1021,
     0.0, 0.0, 0x1.eb1801c5b4095p-497, 0x1.c3a6a9998547dp-760, 0x1.48005a076ce3bp-883,
     0.0, 0x1.185303be49c7dp-734, 0x1.93ec8fcfbe3d4p-771, 0.0, 0x1.4ce8fbaa853a4p-31,
     0x1.44641aa53d75p-928, 0x1.48266737d8a3dp-398, 0.0, 0x1.e95f2b0cff41ap-708, 0.0,
     0x1.ee95835f045d4p-273, 0x1.da18c70e19376p-943, 0.0, 0x1.1d195277520ebp-927,
     0x1.7b4431c673d88p-177, 0x1.bda109d75018dp-1021, 0.0, 0.0,
     0x1.b627262504149p-323, 0x1.215282764a6ccp-137, 0.0, 0x1.e387d26fb823dp-952,
     0x1.2e18d883af9cbp-244, 0.0, 0x1.606c54d43dbddp-67, 0x1.98b226def63d6p-530, 0.0,
     0x1.cccd79a66f757p-133, 0x1.6e69faf55795p-941, 0x1.f052ea71aa569p-847, 0.0, 0.0,
     0.0, 0.0, 0x1.4b23050fd9a77p-1011, 0.0, 0x1.5c5108b93efeap-245,
     0x1.22237b2a38c33p-385, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83a3d2a8d9928p-647,
     0x1.9aceb8543846fp-531, 0.0, 0x1.c506437df8fdfp-574, 0.0, 0x1.1aff377f57cddp-622,
     0x1.f56e62bf85df4p-870, 0x1.e36c914db3ce7p-903, 0x1.0624b38ba8d7dp-710,
     0x1.31901f8682c92p-913, 0.0, 0x1.bc34ef799b8abp-654, 0.0, 0x1.201955b417559p-790,
     0.0, 0.0, 0.0, 0.0, 0x1.c7f14ce3441c7p-360, 0.0, 0.0, 0.0,
     0x1.ed44696d4e938p-124, 0.0, 0x1.d76ba8218e26p-913, 0x1.d7cbe070d41dcp-993,
     0x1.aa17056c87c03p-107, 0x1.a03c9227b187ap-567, 0x1.3c858746ed526p-444,
     0x1.70701bec3d48cp-1010, 0x1.9014ae16f1b9p-344, 0x1.0d62a9df700a9p-921, 0.0,
     0x1.7460394370231p-589, 0.0, 0.0, 0x1.7951f15668ac6p-481, 0x1.737ba4a3c6297p-972,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.205400bc1d0b1p-453, 0.0, 0.0, 0.0, 0.0,
     0x1.56f3d93a13068p-291, 0x1.00ab4e3f73fe1p-62, 0.0, 0x1.765fe626caf57p-630, 0.0,
     0x1.debd1cb14e26cp-676, 0.0, 0x1.0a553e27e40b4p-791, 0.0, 0x1.49605b628db5bp-746,
     0x1.76b4bf0d4448ap-419, 0x1.3f2af4fea85afp-766, 0x1.c2f3cb16339d4p-21,
     0x1.9e37eb0c334b3p-664, 0.0, 0x1.2400ad49233abp-769, 0.0, 0.0,
     0x1.c596e6b7bce59p-992, 0x1.949393d4fc8d8p-782, 0x1.3298662d27decp-172,
     0x1.3bfa65cd4675bp-85, 0x1.1c2550395de3cp-194, 0.0, 0x1.e8cae74eb7b74p-829,
     0x1.78eff80a39a94p-926, 0.0, 0.0, 0x1.a026b71a06388p-261, 0.0, 0.0,
     0x1.57b41f17044a6p-378, 0x1.094ce9ede6a1p-790, 0x1.1fb3a8cd3e4b5p-246,
     0x1.c3644b9519f5bp-106, 0.0, 0x1.cecb6bb9dbc4cp-301, 0x1.2a117bc1a505fp-763, 0.0,
     0x1.a01aa05a50b86p-183, 0x1.8457cc1b1c7bp-551, 0.0, 0.0, 0x1.fd43b4642f745p-327,
     0x1.afdeedb2f75dbp-1011, 0x1.6d6ed49d0a13ap-538, 0x1.6b89c95bd783cp-71,
     0x1.a1769fb44be8fp-627, 0.0, 0.0, 0x1.2df3476a79a5cp-946, 0x1.3e5d8c205a20bp-720,
     0x1.ffabeb6bcd18fp-683, 0x1.8feebb33d8ca2p-395, 0x1.61a86dc1da46fp-896, 0.0,
     0x1.aa2c4b722b673p-438, 0x1.a80b14a82359bp-469, 0x1.e17017d6cc557p-614, 0.0, 0.0,
     0.0, 0x1.fe972621f8ddp-667, 0x1.8e5ee39adb8b1p-243, 0x1.2f1fc825ee5bp-443,
     0x1.95e521fe1f874p-464, 0x1.4ad408d7313d4p-435, 0.0, 0.0, 0x1.1bf0b5253b64bp-777,
     0x1.d6a345fe76e14p-986, 0x1.63829a671d47p-550, 0x1.aa228fc1009d3p-340,
     0x1.8bf890d98ffcp-500, 0.0, 0.0, 0.0, 0x1.20afb816911e8p-692,
     0x1.1c9859753322dp-29, 0x1.cc4e84f74c216p-56, 0x1.61700db4382e5p-167,
     0x1.dcb144744a3b3p-558, 0.0, 0.0, 0x1.3a15600512cfcp-62, 0.0, 0.0, 0.0,
     0x1.9de69b9db8f6ap-106, 0.0, 0x1.49029ea17f6bfp-31, 0x1.c77a37ce11051p-823,
     0x1.feb856e8d144bp-244, 0x1.d1223cb4d215ap-590, 0x1.92a34a1e006bfp-287,
     0x1.2ea7f83c1936cp-922, 0.0, 0x1.c8baa81b00f14p-68, 0x1.325a01c13f9eap-1014, 0.0,
     0.0, 0.0, 0.0, 0x1.da98764dfb376p-203, 0.0, 0.0, 0.0, 0x1.94b37e80f9599p-255,
     0x1.0edfe6b1b27ccp-8, 0.0, 0x1.137af22580fe7p-180, 0x1.c6166ee1916f3p-609,
     0x1.82405bf00f9afp-496, 0x1.f6d17ba8f382ap-1006, 0.0, 0.0,
     0x1.5af77218aad42p-613, 0.0, 0x1.06a8e2602b5afp-482, 0x1.f6ad4b72753abp-555, 0.0,
     0x1.5060fe00fad1ep-800, 0.0, 0x1.e5b5a94bcd83p-508, 0x1.2567871e1f61cp-90, 0.0,
     0x1.574cc882ff6fdp-210, 0.0, 0.0, 0x1.1cdd31114632ep-478, 0x1.2593afa69fd9ep-226,
     0.0, 0x1.065e5a723a8cbp-725, 0.0, 0x1.949833eec493ep-932, 0x1.4132923fd411p-371,
     0.0, 0x1.5acbf238223aep-91, 0.0, 0x1.cf87d7cf67eb7p-302, 0x1.d4c3ec383b329p-443,
     0.0, 0x1.094a6086afb7cp-88, 0.0, 0x1.64511a2d1a714p-379, 0x1.114658ce1e5ddp-500,
     0x1.31e15195b9c5fp-92, 0.0, 0x1.da93a8fc0788ap-473, 0.0, 0x1.0352e434fea46p-283,
     0.0, 0x1.d897de8a46b98p-91, 0.0, 0x1.b2f654f5619a5p-497, 0x1.9b533018f035ep-98,
     0x1.438a18846a61dp-605, 0.0, 0.0, 0x1.342b8397c6ee5p-879, 0.0, 0.0, 0.0,
     0x1.6eb06cefd0367p-184, 0.0, 0.0, 0x1.79dfd110ffb25p-833, 0x1.0e33dcabc2421p-37,
     0x1.3deb5393c2ce6p-442, 0.0, 0x1.8b5c5843ca9d1p-172, 0.0, 0.0,
     0x1.1efac94ac1bb7p-244, 0.0, 0x1.887eac2bc0dep-628, 0.0, 0.0, 0.0, 0.0,
     0x1.5060a4438b9d2p-253, 0.0, 0.0, 0x1.a8c7725c22f24p-315, 0.0, 0.0, 0.0, 0.0,
     0x1.1e20685f6807cp-668, 0.0, 0x1.9b8461fafd787p-402, 0x1.3f1ea06a2d07dp-962, 0.0,
     0.0, 0.0, 0x1.4dc2b4ffb7c8bp-872, 0.0, 0.0, 0x1.6ee74c1cfda6ep-141,
     0x1.e30e3b498cf52p-494, 0.0, 0.0, 0x1.98a58408a3a91p-612, 0x1.246c993d8388p-944,
     0x1.c6444f88fc1eap-347, 0.0, 0x1.1b05d5d555b82p-431, 0.0, 0.0,
     0x1.a81f77ad960a8p-475, 0.0, 0.0, 0x1.0e85ba1c2a75ep-775, 0.0,
     0x1.88ffd1a3c747cp-1002, 0x1.3a6c41b062453p-802, 0x1.42566e376a1d1p-552,
     0x1.51f92ad021f3ap-669, 0.0, 0.0, 0x1.80a5c09d256fdp-412, 0.0, 0.0,
     0x1.2b4d864ccbf9dp-57, 0x1.4510e836e9c99p-554, 0x1.b03516fcd9bfep-173, 0.0, 0.0,
     0x1.b255398cefd58p-555, 0x1.d72b6bd6c732bp-451, 0x1.0e86ca5f21e37p-627, 0.0, 0.0,
     0.0, 0x1.c80a1af044752p-788, 0.0, 0x1.d8174d17bcfdcp-256, 0x1.d8dbcba48a058p-384,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62b1e34bc1503p-174, 0.0,
     0x1.3663834b6713ap-723, 0.0, 0.0, 0x1.45ebbebb7632fp-382, 0x1.ce15ee67618c2p-641,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e6bf9b9510aep-445, 0.0, 0.0,
     0x1.494d8efa282b8p-448, 0x1.38571e698efc1p-478, 0.0, 0x1.8d85b7b7d99d4p-294,
     0x1.a4ff2c93abb0bp-302, 0x1.a63462e00b55ep-630, 0x1.ddca31336d86dp-248, 0.0, 0.0,
     0x1.a0b40bd6f90a3p-845, 0.0, 0.0, 0.0, 0.0, 0x1.fd6206172af05p-85,
     0x1.fff88f11c842ep-447, 0.0, 0x1.f98e25d9da08ep-93, 0x1.083728182a153p-464, 0.0,
     0x1.b2af6f9770162p-490, 0.0, 0x1.0c9c1406ce201p-338, 0.0, 0x1.e1604a540f588p-780,
     0x1.dad83e2ca3a07p-632, 0.0, 0x1.ca7e405998f19p-69, 0x1.e282219351fcap-229,
     0x1.9f6caf12416d7p-56, 0.0, 0.0, 0x1.ca8ee90252e21p-844, 0.0,
     0x1.4dd638adc938bp-953, 0x1.db506f689a21ap-431, 0.0, 0x1.5b91aa4b815dbp-727,
     0x1.d60117f735816p-445, 0.0, 0.0, 0x1.1c78a2db1d652p-576, 0x1.c77099c9799d6p-193,
     0x1.63d1a8737d76p-868, 0x1.7678625502759p-854, 0.0, 0x1.985d5f8380ed7p-550,
     0x1.39dbd16c6f612p-108, 0x1.afa865fe2e519p-373, 0.0, 0.0, 0x1.094ae2d2cb347p-861,
     0x1.5315411107569p-600, 0.0, 0.0, 0x1.42eb6aa75fa54p-483, 0.0, 0.0, 0.0,
     0x1.e6ccbb3cbbd14p-442, 0x1.ff3a25af177bcp-999, 0x1.9722744c063b9p-489,
     0x1.6b5664d902a98p-13, 0x1.a23b7d2244354p-715, 0x1.024e50354abccp-557,
     0x1.a22bbca509517p-252, 0.0, 0x1.abae8c2187112p-59, 0x1.a6fa56f0b9dfbp-249,
     0x1.17ff56a9f6643p-309, 0.0, 0.0, 0.0, 0x1.ef8bd74afc6b1p-859, 0.0, 0.0, 0.0,
     0.0, 0x1.ab4fcb6beb672p-19, 0x1.7446c2335ad1ap-896, 0.0, 0x1.4fe0209f9366ep-217,
     0.0, 0x1.8b162ddabd542p-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8e183727a6ecp-653, 0.0, 0x1.10e549d845fbfp-250, 0.0, 0x1.f5df74c387c72p-518,
     0.0, 0x1.f5b15a66aa329p-57, 0.0, 0.0, 0x1.87d73152a5a9p-422,
     0x1.925baeab061a8p-462, 0.0, 0x1.0b726d22706f5p-20, 0x1.692b04c5210f9p-655,
     0x1.9ef6d192af94dp-244, 0.0, 0.0, 0.0, 0x1.64b3966208f03p-745,
     0x1.ebc9afb878716p-35, 0x1.4091b7e47c1c6p-996, 0.0, 0x1.4e72f4037bf14p-180,
     0x1.f16dfd965d9c5p-172, 0x1.6e59a1e4fd967p-747, 0x1.4cce191004bf1p-230, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e4f53c5c65b3p-950, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6a3ae71275c01p-917, 0x1.7db208da289bap-602,
     0x1.03c19da7fdf5bp-977, 0.0, 0x1.a40ab9f2b60e8p-517, 0.0, 0.0, 0.0, 0.0,
     0x1.b6e351a466cdep-831, 0x1.7fed5fdd3a7efp-274, 0x1.7104bf47dd326p-807,
     0x1.e3f7b2323d313p-710, 0.0, 0.0, 0x1.1cc15e5dc6306p-728, 0.0, 0.0, 0.0, 0.0,
     0x1.da9ae9cfccb02p-1007, 0.0, 0x1.334f0cd4369bcp-376, 0x1.56c6ab3fd771ep-188,
     0x1.a72b330a73cdap-273, 0x1.14f3ac6f422fep-292, 0x1.7acd07d708877p-651, 0.0, 0.0,
     0.0, 0.0, 0x1.a421f420867a5p-990, 0x1.f481aee09f518p-335, 0x1.9dc27ededf6dfp-336,
     0x1.05215bf9f4ad1p-795, 0x1.257b84430cbd6p-301, 0x1.812506ed711bep-470, 0.0, 0.0,
     0x1.463ccf37a6438p-290, 0x1.f73936da71daap-247, 0.0, 0x1.7d5bd67301fe4p-224, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dc9bc6ffb4ffep-920, 0.0, 0.0, 0x1.d912f058ea53fp-618,
     0x1.17940a10b64eep-429, 0.0, 0x1.f3d2277e176bdp-168, 0x1.93c0d8034da3bp-466, 0.0,
     0.0, 0.0, 0x1.f7bbfcbe1b61bp-620, 0.0, 0x1.5b04918f1b76ap-416, 0.0,
     0x1.3de44b679f066p-691, 0x1.9b4ab3b9cab8bp-22, 0x1.81716302f0c86p-432, 0.0, 0.0,
     0x1.2a73f6fe889cdp-159, 0.0, 0.0, 0x1.0bd3db67ba8cbp-667, 0x1.1ac34a3be65dbp-105,
     0x1.4d00e3974064cp-808, 0.0, 0x1.827dabcc8ba47p-623, 0.0, 0x1.5ea05816f83f8p-692,
     0x1.cb143b33544cep-171, 0x1.231d5a5e22493p-964, 0x1.1a21c006fb8f8p-897,
     0x1.14199db3d48b4p-388, 0x1.be1f9d405f5e8p-46, 0x1.be895b3349e4ep-159, 0.0,
     0x1.998fbf3ffcf5dp-798, 0.0, 0x1.0a2d1a775166cp-442, 0.0, 0x1.bac75dace156fp-937,
     0.0, 0x1.269aa70eefdf3p-119, 0x1.1d03e6bd925a6p-563, 0.0, 0x1.8c09453962804p-447,
     0x1.7b7f224511d49p-709, 0x1.c48e50f4230a4p-975, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.45e368770e4c7p-798, 0x1.7a5e8145fedd7p-535, 0.0, 0.0,
     0x1.b7de31223725p-783, 0.0, 0.0, 0x1.e62743818dd29p-648, 0x1.8440bb495825cp-636,
     0x1.b358c06780bffp-982, 0x1.1bf24742a751p-124, 0.0, 0.0, 0.0, 0.0,
     0x1.a7c55aaa185d6p-770, 0.0, 0x1.722c09a827bb5p-369, 0.0, 0.0, 0.0,
     0x1.3c6862e72db15p-956, 0x1.82958918e54f6p-374, 0x1.5888d3e2ccfefp-281, 0.0, 0.0,
     0x1.6458b08e0a15p-597, 0.0, 0x1.bfbcd8ba73c92p-402, 0.0, 0x1.47ae1b69b3074p-749,
     0x1.a4c909d3dce49p-171, 0.0, 0.0, 0.0, 0.0, 0x1.41feed29a593p-522,
     0x1.6a3858e7f5d4p-249, 0x1.380fb10abc292p-485, 0x1.5f4ad0ab3d92cp-960, 0.0,
     0x1.8da7261359ca8p-113, 0.0, 0.0, 0x1.86dc7e17e9cefp-189, 0.0,
     0x1.81a408babcd6ep-867, 0.0, 0.0, 0x1.66f0616608d47p-125, 0x1.6099db4ff680dp-850,
     0x1.195baf0767d56p-713, 0x1.28d091316a1adp-607, 0.0, 0.0, 0.0,
     0x1.96a3832903673p-695, 0.0, 0x1.282508a2b035cp-377, 0.0, 0x1.a921158b2ca2ep-469,
     0.0, 0.0, 0x1.a0bb3507cba58p-493, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee456d42fdb7ep-208, 0x1.b9649c1a29295p-589, 0x1.2118b61f2e625p-307,
     0x1.d59c7c8a0da7cp-449, 0.0, 0x1.fee809f6df672p-401, 0.0, 0.0,
     0x1.f07861f6243d3p-854, 0.0, 0x1.f0740c4ca5e7dp-359, 0.0, 0.0, 0.0,
     0x1.87aa490d9848fp-729, 0.0, 0x1.71e3dd3d29ac8p-239, 0x1.7259f814128c7p-319,
     0x1.564c50ffc351ap-850, 0x1.4b617d9f8a68cp-803, 0x1.b72835f0354d7p-526, 0.0, 0.0,
     0x1.eda9a225cf8e9p-952, 0x1.717e508c74202p-805, 0x1.61d6d31934aa7p-269,
     0x1.51f5a1ca56484p-181, 0.0, 0x1.9709346565765p-126, 0.0, 0x1.9d2fd8bd3065bp-524,
     0x1.647e7b51c4503p-359, 0x1.2339a5099eaa6p-269, 0.0, 0.0, 0x1.7fc703b364b0cp-281,
     0.0, 0.0, 0x1.fca08e7da506bp-42, 0.0, 0x1.60edc30f30c1cp-483, 0.0,
     0x1.a5305a79affefp-112, 0x1.2121eff14e339p-640, 0.0, 0.0, 0x1.9c18cfe5d4e24p-757,
     0.0, 0x1.cc70d92238adfp-847, 0x1.c7fe40a6c617fp-515, 0x1.a22193a09664fp-712,
     0x1.afda81bbe255bp-443, 0x1.4862a588ca751p-880, 0.0, 0x1.ee7931a19620cp-343, 0.0,
     0x1.3e85b449c7399p-326, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78ca472f1176fp-384,
     0x1.cb28e4c45e72fp-887, 0.0, 0x1.0028ed5a61433p-579, 0x1.02b11b50efe62p-432, 0.0,
     0x1.b87babf156f8ap-965, 0x1.704fb0e1141d5p-54, 0.0, 0x1.6f7cf3d93a497p-458, 0.0,
     0x1.1bbfee09a8ff9p-129, 0.0, 0x1.5eedd91e4e7c1p-153, 0x1.0b8afb96dc179p-517, 0.0,
     0x1.aecfe1095c276p-273, 0.0, 0x1.4a2db72fc4615p-982, 0x1.ebbe60df230a6p-1016,
     0x1.aada31d8daed6p-809, 0x1.b42536fa035b8p-515, 0x1.4e1c3468da389p-710, 0.0, 0.0,
     0x1.348c0951a05abp-574, 0.0, 0x1.446a2391c77e5p-589, 0x1.d487c4a1aee7ap-41, 0.0,
     0.0, 0x1.917645e53a361p-583, 0x1.e2f074ab409cp-117, 0x1.99c755ebed529p-35,
     0x1.f99395f5fe157p-33, 0.0, 0x1.db020b15a21c1p-142, 0x1.d434a29c4dacbp-232, 0.0,
     0x1.14c3c544229ddp-299, 0x1.067bebd413e4ap-572, 0x1.70ff949a2c75dp-447,
     0x1.a58695eaebfeep-657, 0.0, 0.0, 0x1.462e6c0a570e9p-616, 0x1.2ec09052fc91bp-461,
     0x1.fc692900d5703p-603, 0x1.f4c7cf14c7c61p-53, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.afb2cf99d0b0ep-35, 0x1.02718eca67834p-954, 0.0, 0.0, 0.0,
     0x1.cb1e04bd00a17p-28, 0x1.228196f055439p-849, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e13047f8e235p-5, 0x1.26df75951aaefp-89, 0x1.35acdfdb6d888p-633, 0.0,
     0x1.ac58603199489p-639, 0x1.acff32f4cea46p-363, 0x1.de1e617395a07p-988, 0.0,
     0x1.fe341cfd43502p-265, 0.0, 0x1.511d9fb42e57ep-744, 0.0, 0x1.d8cffba9e28cp-275,
     0.0, 0.0, 0.0, 0.0, 0x1.56d43f54cc4cbp-202, 0.0, 0x1.325a6258ece0ep-100, 0.0,
     0x1.98278084cc20fp-561, 0x1.01031ec285fdep-385, 0.0, 0.0, 0x1.f1f049d5eebd5p-959,
     0x1.2869882ee6dc2p-225, 0.0, 0.0, 0.0, 0.0, 0x1.b0aefc3da715p-95,
     0x1.efde732f4bebfp-80, 0.0, 0.0, 0x1.841a3685b113ep-934, 0x1.badff31698fbbp-2,
     0.0, 0x1.b4edf66832919p-487, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d80250a6804fp-585,
     0.0, 0.0, 0x1.ab20793a8061fp-82, 0x1.500752a3d8dd6p-797, 0x1.d252970d0d188p-233,
     0.0, 0.0, 0x1.c60e90d256d89p-357, 0.0, 0.0, 0.0, 0x1.635e9312bd2fep-261,
     0x1.ae8b5aea98979p-97, 0.0, 0.0, 0.0, 0.0, 0x1.597a9ed911ff9p-142,
     0x1.9e8725f9ea408p-646, 0x1.c067b093861ddp-640, 0.0, 0x1.ab80aa136d622p-639, 0.0,
     0x1.f4fcd36746349p-65, 0.0, 0.0, 0.0, 0x1.e3a7d125e2b33p-715,
     0x1.d8502a4b6be86p-472, 0.0, 0x1.8154658716c0cp-290, 0x1.0a3875597a10cp-787,
     0x1.a358841a52383p-231, 0x1.c0aad72190891p-341, 0.0, 0.0, 0x1.f06e135359dfap-808,
     0.0, 0.0, 0.0, 0x1.860a8fc532f2cp-104, 0x1.9c62a80d771e9p-392, 0.0,
     0x1.ce3ef8802e78cp-864, 0.0, 0x1.7082ecf8c19c8p-145
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
            tmp1 = Sleef_finz_exp10d2_u10avx2128(tmp0);
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
    printf("Sleef_finz_exp10d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_exp10d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
