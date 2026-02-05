/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd2_u10kvx.c --function \
 *     Sleef_finz_acosd2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.b5befeb669291p-209, 0.0, 0.0, 0.0, 0.0, 0x1.670e4f72662b8p-881, 0.0, 0.0,
     0x1.b020b6c6205d8p-178, 0.0, 0.0, 0x1.ea3f05e1aeca9p-766, 0.0,
     0x1.c7bece3edc089p-962, 0x1.0423ada13bb7dp-492, 0x1.8ba6f5718e843p-598, 0.0,
     0x1.cc2493907ef81p-836, 0x1.c5b8d6e3946e2p-615, 0.0, 0.0, 0x1.17c2eb129e157p-741,
     0.0, 0.0, 0.0, 0x1.56aa0a6a91e8ep-248, 0.0, 0.0, 0x1.4d5ce5465a567p-573,
     0x1.49e1e534f14cp-308, 0.0, 0.0, 0.0, 0.0, 0x1.1d7c0b1179012p-472,
     0x1.65ac13aada4d3p-469, 0x1.655ae9501f3efp-564, 0.0, 0x1.76775c27fe6d7p-991, 0.0,
     0x1.59e46214b1eedp-833, 0x1.0602614e229c9p-793, 0.0, 0x1.f84bcdca5dad5p-254, 0.0,
     0x1.d979738949305p-384, 0.0, 0x1.81c13129f78d5p-322, 0x1.a476920aee6a7p-583, 0.0,
     0.0, 0x1.08eb686b140bcp-646, 0.0, 0x1.78dfe95971e7ap-411, 0.0,
     0x1.29a37d62132adp-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbaee61b1f6edp-82, 0.0,
     0x1.34b8995180f9bp-1014, 0x1.b9825c5ef2e9ap-15, 0x1.d0c70018ba91bp-418, 0.0,
     0x1.194f950f5f92fp-651, 0x1.09870f4723c11p-3, 0.0, 0.0, 0.0,
     0x1.6344f0e79c09dp-660, 0x1.2afbabd3a658ap-246, 0x1.9a2e192028b45p-348, 0.0,
     0x1.b04f8a0d259b2p-856, 0.0, 0.0, 0.0, 0x1.8d11d79fc43bcp-244, 0x1p0,
     0x1.14a16c5c2402ap-842, 0.0, 0x1.daacb25eb04e6p-950, 0.0, 0x1.174e0b57da892p-337,
     0x1.fad4349d4fc8cp-746, 0x1.442be00d3200dp-509, 0.0, 0.0, 0.0,
     0x1.a761bdec8474ep-59, 0.0, 0x1.8858f5c185ab5p-176, 0.0, 0x1.5e9bc82502c9bp-637,
     0.0, 0.0, 0.0, 0x1.4a348aed3a03bp-489, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.add383fd54a0ap-771, 0.0, 0.0, 0x1.d73b0460a9992p-12, 0.0, 0.0,
     0x1.fa54d8cb54689p-910, 0.0, 0.0, 0x1.f26b22e310714p-22, 0.0, 0.0, 0.0, 0.0,
     0x1.98c2a8952feefp-918, 0x1.18726ffc79fap-24, 0.0, 0x1.ec25b35462243p-862, 0.0,
     0.0, 0x1.9730eee73f99dp-467, 0.0, 0.0, 0x1.1e6019ffbe78p-39, 0.0, 0.0,
     0x1.de362f5b606dap-754, 0x1.4c084cf332ff1p-622, 0x1.df418fd098c7cp-228, 0.0, 0.0,
     0.0, 0.0, 0x1.f1ff06145f62bp-868, 0x1.d77e716e64d89p-529, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cfd229a9f7b9p-312, 0.0, 0.0, 0.0, 0x1.0d24a2993967ap-737,
     0x1.b9854478972dbp-325, 0x1.9336e7632bdebp-466, 0.0, 0x1.f0248ebd1588ap-757, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ceb65fa585faap-760, 0.0,
     0x1.eb9bc2c3c05dep-2, 0x1.3b38d408f1b3dp-961, 0.0, 0.0, 0x1.12390422bd61ep-429,
     0x1.5de1addd2492ap-734, 0.0, 0x1.795093d24421p-12, 0.0, 0.0, 0.0,
     0x1.e3deae78d2dcfp-228, 0.0, 0x1.4400670fe7d41p-61, 0x1.c9a0423a374f5p-428,
     0x1.6cef34fb437f3p-334, 0.0, 0x1.96ebd7d712594p-609, 0.0, 0.0, 0.0, 0.0,
     0x1.839f1549826f4p-165, 0x1.fd212e8a64ffcp-34, 0.0, 0.0, 0x1.7bbef5d92498ap-123,
     0.0, 0x1.8c05da619abf4p-1022, 0.0, 0x1.0826a3dcddaefp-333, 0x1.1af6907e05756p-34,
     0.0, 0x1.e715b30719902p-282, 0.0, 0.0, 0.0, 0x1.09302726c0ae2p-889, 0.0,
     0x1.6a40f7ebb0179p-557, 0.0, 0x1.473c0d9143e91p-475, 0x1.a29e85bc03ec7p-532,
     0x1.d36957271f222p-713, 0x1.1dd0288f39be3p-873, 0x1.ee667c305dc0ap-813,
     0x1.eeb1a5a6333d9p-518, 0.0, 0x1.801e68c6841dbp-852, 0x1.7327d777209f9p-164, 0.0,
     0.0, 0x1.73b827cb551e1p-969, 0.0, 0x1.604742bf49388p-848, 0.0, 0.0,
     0x1.59176667c683cp-606, 0.0, 0.0, 0x1.4dd9f2b1666c4p-566, 0x1.01cf7d6eff611p-121,
     0x1.e7e4dc73e2ea8p-379, 0x1.407268e72d301p-852, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1e9dbe423c299p-522, 0x1.f648b55bc5519p-565, 0x1.6ffd5df034d4dp-541, 0.0, 0.0,
     0x1.c52098c5195f4p-236, 0.0, 0x1.409d520eb44afp-852, 0x1.42853349edba2p-109,
     0x1.c27f3b7faf45ep-309, 0.0, 0x1.f5468a7c8468ap-842, 0x1.e0aaf57d46936p-796, 0.0,
     0.0, 0.0, 0x1.1807adeefd58fp-912, 0.0, 0x1.493867429a66ap-685,
     0x1.2849e5ca59bd3p-58, 0.0, 0.0, 0x1.8c49063a3ba36p-422, 0x1.8e318f30c14dep-855,
     0.0, 0x1.046b6b9747301p-555, 0.0, 0.0, 0.0, 0x1.9b6a7def45e59p-789, 0.0, 0.0,
     0.0, 0x1.fc2175e27cfeap-356, 0.0, 0x1.24d1cd4a37e47p-341, 0.0,
     0x1.202ec69495d86p-564, 0x1.850e4caf95ba1p-151, 0.0, 0x1.fcf6ab13ad853p-539,
     0x1.76906535ecef2p-379, 0x1.32f64b6e18063p-627, 0x1.d6c548e5d8029p-199, 0.0,
     0x1.7688709d69c74p-591, 0.0, 0x1.d6953680a6eeap-684, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4f2a5bae7f7p-7, 0.0, 0.0, 0x1.7bfa016abc3d2p-428, 0x1.1a6b536f9376p-143,
     0x1.7d388b54f35a6p-811, 0x1.b2a4d460d53a3p-939, 0x1.721faa3b53997p-372, 0.0,
     0x1.3db43c8e50ba7p-637, 0x1.c3aee3a5d2fp-207, 0.0, 0.0, 0x1.0d3a4b26a2014p-607,
     0.0, 0x1.7f2fe0a93fd9ap-78, 0x1.c1277322f356p-495, 0.0, 0x1.fad75114b9395p-809,
     0x1.32661a78e0449p-787, 0.0, 0.0, 0x1.0440ee6e29df9p-578, 0x1.8be0e9027da1bp-911,
     0x1.eb1ef425edefap-972, 0x1.16c6587bb7a71p-955, 0x1.0067ea0937cc2p-792, 0.0, 0.0,
     0.0, 0.0, 0x1.38f58027cb6d3p-298, 0x1.59c4b272863ddp-699, 0x1.c0dd6935c8c1ap-116,
     0x1.a7cb62d5399f3p-392, 0.0, 0x1.8889c8ac1c876p-76, 0x1.e7c91db28156cp-860, 0.0,
     0x1.118538e46b82p-642, 0x1.517b36dd400b6p-229, 0.0, 0x1.038d232d2ec0dp-609,
     0x1.b3849934fefdap-287, 0x1.5cbb468a04435p-266, 0.0, 0.0, 0x1.aad81d63cc9a9p-994,
     0x1.b5bde0e5f1658p-1016, 0x1.2dbf89e887617p-508, 0.0, 0.0, 0.0,
     0x1.f6f5f26b0a88fp-657, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29a3563109043p-669,
     0x1.298a1cad6bb49p-898, 0.0, 0x1.b8f7200ab510cp-117, 0.0, 0x1.d7f95e4e5064ap-485,
     0.0, 0.0, 0.0, 0.0, 0x1.0970147aed92ep-336, 0x1.f7221bfc09686p-660, 0.0, 0.0,
     0x1.6e85e809d019dp-315, 0.0, 0x1.22f8a260f74a1p-989, 0x1.afb5f5de023a8p-179,
     0x1.3eaede2c62861p-434, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4a41b2d51033ap-687,
     0x1.899ba0d06d56bp-645, 0.0, 0.0, 0.0, 0x1.26fd5c8cfd747p-593,
     0x1.0b18fddee24b7p-24, 0.0, 0.0, 0x1.a5dfbe110fd9ep-401, 0x1.137590bfbc52bp-5,
     0.0, 0x1.829c8d6bf1403p-318, 0x1.f554657766b31p-348, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.253571a43a6b4p-8, 0.0, 0.0, 0.0, 0.0, 0x1.376f87a3a3f59p-996, 0.0,
     0x1.e4395252bca3fp-784, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.445d173efb0f1p-502, 0x1.32205e828f6cp-922, 0x1.13988c678f026p-225,
     0x1.56a51d67d27fcp-699, 0x1.6aa83b95b747cp-395, 0.0, 0.0, 0.0,
     0x1.eebf6011b4c56p-95, 0.0, 0.0, 0.0, 0x1.423121a8b8aa7p-210, 0.0,
     0x1.032cc73914d4ap-558, 0.0, 0x1.d90e395d4f174p-148, 0x1.dda3a2923c535p-113,
     0x1.fa3e8f4ba40fap-88, 0x1.c1b538b2bb4c4p-465, 0.0, 0.0, 0.0, 0.0,
     0x1.590bddc41a801p-1012, 0.0, 0x1.68a8909536cbep-147, 0x1.055114f9849b3p-575,
     0x1.6b0624cc538f7p-552, 0x1.dcd73e6f32232p-233, 0.0, 0.0, 0x1.f1f0076276054p-658,
     0.0, 0x1.19ed0dd621768p-351, 0x1.57f5889bf8bcfp-225, 0x1.821c11a10bbf5p-714, 0.0,
     0x1.2b8b66b91b0fap-1019, 0.0, 0.0, 0.0, 0x1.735496be50099p-905, 0.0,
     0x1.2ca79fc3d2f2bp-204, 0x1.096985b1f5751p-866, 0x1.62f0a2f947bdcp-148,
     0x1.4b8a23ca9eeb3p-667, 0x1.fec29609f770ap-550, 0x1.ea7f5c4920e6p-981, 0.0,
     0x1.9135fad5723fap-927, 0x1.a0d320804eb1bp-883, 0.0, 0x1.f39637dfcc421p-305, 0.0,
     0.0, 0x1.5bffda8b7e689p-665, 0.0, 0x1.6a6eea8f93b57p-332, 0.0, 0.0, 0.0, 0.0,
     0x1.4411a43956cdep-292, 0x1.29beeec2d5e1p-543, 0.0, 0x1.fc22673dda447p-1009, 0.0,
     0.0, 0.0, 0.0, 0x1.9b90dabee2051p-133, 0.0, 0x1.1cee7e7f5117ep-364,
     0x1.0354312fddaf6p-276, 0.0, 0x1.513e78f6910cep-660, 0x1.2dbfc3dfebf72p-831,
     0x1.749a58ad17a6ep-265, 0x1.5daaa92066a94p-358, 0x1.ae7042652463ap-278,
     0x1.563df0d23ba83p-687, 0x1.124c67bfa70bfp-462, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13af2ea81266fp-9, 0x1.837ece13790e9p-74, 0.0, 0x1.b5400e39a3596p-630,
     0x1.340e472565ebep-949, 0x1.5f75dba7369a4p-422, 0.0, 0.0, 0.0, 0.0,
     0x1.ff27e71bfa604p-552, 0.0, 0.0, 0.0, 0x1.60ed1129a3b79p-679,
     0x1.8683cd10ea744p-1022, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0c7df2b2d1294p-777, 0.0,
     0x1.8b6178a05f27ep-893, 0x1.2f1bb7e9e773cp-59, 0x1.7153a68fb740fp-912, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a6f0f9dd4a73ap-285, 0x1.62bb7ddeda17dp-843, 0.0, 0.0,
     0x1.a0b44457e4dedp-377, 0.0, 0x1.2b86db8b99d1dp-750, 0.0, 0x1.2299eacfee838p-760,
     0.0, 0x1.9468ccc4bea31p-539, 0.0, 0x1.5e7dae8bbb1dfp-365, 0.0,
     0x1.bcc0f3f4684d3p-701, 0x1.85e83e557033ep-916, 0x1.339327192e97bp-292,
     0x1.4a514e074a80bp-142, 0x1.a1d7bd9c13653p-72, 0.0, 0.0, 0.0,
     0x1.2283b8dc77ba2p-77, 0x1.de007c18eb15p-157, 0x1.d758807476f35p-949, 0.0, 0.0,
     0x1.17ef7a2526b5fp-882, 0x1.736a1e4bd957p-273, 0x1.2826e945be2ebp-693, 0.0, 0.0,
     0x1.0a928bacfc9d3p-238, 0.0, 0.0, 0.0, 0.0, 0x1.31b5a7c0e2542p-426, 0.0, 0.0,
     0x1.e88bf2f01605dp-417, 0.0, 0x1.3131e261dfe4ap-280, 0x1.9c9cc2f9f4e67p-95,
     0x1.310a8a2a44ff4p-532, 0x1.21476f4bb68a6p-435, 0x1.615dde38dc6fbp-62, 0.0,
     0x1.f0b07d6754fb8p-847, 0x1.00aef1312440fp-558, 0x1.a0fa34d7feb2fp-772,
     0x1.9c9c7de55ef3bp-484, 0x1.de5fae90b4a37p-220, 0x1.fff68485e6da4p-706,
     0x1.8bd2242289096p-967, 0x1.81616f1ae041dp-508, 0.0, 0x1.5390932a745ddp-445,
     0x1.8f0a2749586c5p-121, 0x1.eeae50005a783p-176, 0x1.fae1c6cc54253p-284,
     0x1.a55e601874045p-729, 0x1.db3c7c22724f7p-881, 0.0, 0.0, 0.0,
     0x1.2b17f6d4613eep-432, 0.0, 0.0, 0.0, 0x1.731731f70adcbp-876,
     0x1.f44e268cd9d21p-789, 0.0, 0x1.fc6cc7de6de0dp-555, 0x1.a9ee169d28581p-440, 0.0,
     0x1.5fd947f3b987ap-511, 0x1.40e5d7ffc0a84p-298, 0.0, 0x1.17d454964a33bp-9,
     0x1.51a3758c3d472p-777, 0x1.cf3b3b3820eefp-704, 0.0, 0.0, 0x1.77ca8c8c2a959p-695,
     0x1.f3fa77e30d542p-167, 0x1.62997b3075855p-258, 0.0, 0.0, 0.0,
     0x1.f9e0bccc46b4fp-23, 0.0, 0.0, 0x1.950c6cd674771p-870, 0x1.838c7895d6d0cp-611,
     0.0, 0x1.231f00c6022e8p-168, 0.0, 0.0, 0.0, 0.0, 0x1.8939609796491p-381, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9337a373cc0e1p-508, 0x1.f5e8a83aca291p-75, 0.0,
     0x1.a746329219fe5p-245, 0x1.05c0063749f61p-858, 0x1.f99d33e56d23fp-123, 0.0, 0.0,
     0x1.410b6955bd1c3p-234, 0x1.a6b5089d7c2a8p-89, 0x1.147f29b3188e1p-968, 0.0, 0.0,
     0.0, 0.0, 0x1.0e648215c56a1p-866, 0.0, 0x1.eb836db970989p-336,
     0x1.db9842f556e03p-750, 0x1.fe4c3a404f7d6p-675, 0.0, 0x1.86f6c010754bcp-765,
     0x1.9cc5197cf661cp-317, 0x1.9f73d1beb9fa6p-419, 0x1.67ad76f1c674bp-789, 0.0,
     0x1.b1a3b327ec775p-926, 0.0, 0x1.2fcf629cb1e3dp-317, 0x1.002254f60c6a8p-127,
     0x1.3dca3549912abp-81, 0.0, 0.0, 0.0, 0.0, 0x1.8186330953b68p-441,
     0x1.dc901b9491d7fp-467, 0.0, 0.0, 0x1.968d360dea95bp-421, 0x1.bb40ce8f79487p-912,
     0.0, 0.0, 0x1.0a0fec619e898p-87, 0x1.271f65d8b3b92p-189, 0x1.67a9632ec6e58p-434,
     0x1.db60ed7d4f9f4p-307, 0x1.f492bfbfca396p-343, 0x1.af00bcb78010bp-819, 0.0, 0.0,
     0.0, 0x1.acb515acec58ep-794, 0x1.a2135e4e28af8p-67, 0.0, 0.0,
     0x1.68e76b58c2bf1p-626, 0.0, 0.0, 0x1.be7304d391722p-663, 0x1.3a55a76f53124p-417,
     0x1.d8b951732f0b6p-594, 0x1.19fdd3afc2b47p-209, 0x1.369974335ede2p-809,
     0x1.289e8ba4a7eb2p-874, 0x1.e989026a3e944p-876, 0.0, 0x1.de26650b4b6b2p-664,
     0x1.1e318fedc676cp-437, 0.0, 0x1.b8aee8010d2e1p-1021, 0.0, 0.0, 0.0,
     0x1.8e3c314713302p-842, 0x1.88d1dce03cb73p-126, 0.0, 0x1.92bb406944f2fp-517, 0.0,
     0.0, 0.0, 0.0, 0x1.9a9ccbd207aafp-865, 0.0, 0.0, 0x1.b8a1e1c65e77ap-13, 0.0,
     0x1.898f2580855dcp-269, 0.0, 0x1.a32293a67433dp-82, 0x1.57158484dfec5p-29, 0.0,
     0.0, 0.0, 0x1.5bdda20f59a16p-324, 0x1.09495f677a961p-930, 0.0,
     0x1.3a0ded3b4d148p-911, 0.0, 0x1.1947a7c5bb2b8p-990, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dc576a62cd973p-976, 0.0, 0.0, 0x1.2127bf89f75c2p-639,
     0.0, 0.0, 0x1.c2738951584e7p-127, 0.0, 0.0, 0x1.00a9516259af7p-443, 0.0,
     0x1.83057e5614e76p-230, 0x1.17fa28a9f1a7ap-10, 0.0, 0.0, 0.0,
     0x1.9236a82cfd754p-1006, 0.0, 0x1.c0fd05de50783p-559, 0.0,
     0x1.c41bcbd85d251p-546, 0x1.8fe9eda926138p-281, 0x1.a40ed04ad6959p-492,
     0x1.e48ec9ef56895p-134, 0x1.2d0c127382c07p-451, 0.0, 0.0, 0.0, 0.0,
     0x1.e8787df49b98cp-976, 0x1.8a70cfb6307dfp-477, 0x1.ef98b2eb0317fp-833,
     0x1.f2abb4e56558ap-147, 0x1.46a75fade2637p-971, 0.0, 0x1.b816d6f861cc9p-99,
     0x1.2169ce965f21p-635, 0.0, 0.0, 0x1.0e3af818a13f3p-931, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9f303ea7fa6ddp-660, 0.0, 0.0, 0x1.6125a11a7685ap-770,
     0x1.f9a4a0d3cef11p-956, 0x1.3db7f484b00eep-266, 0x1.c141933430c0ap-186,
     0x1.fecbac549df07p-599, 0x1.565f070a0de38p-542, 0.0, 0x1.022e73526daacp-332,
     0x1.84c2b70356c2dp-770, 0.0, 0.0, 0x1.75a2ca6880a4fp-558, 0.0, 0.0,
     0x1.906f906619987p-626, 0x1.89c7ba50cb312p-241, 0.0, 0x1.7c5d68c5655b9p-1004,
     0x1.34afed4804552p-845, 0x1.1cd1610734805p-820, 0x1.cb1a753027a64p-953,
     0x1.c83ddfc696e7ap-477, 0.0, 0x1.dfc915ccebcb4p-184, 0.0, 0.0, 0.0,
     0x1.4217223808ca7p-994, 0.0, 0x1.5edfeb6893126p-747, 0.0, 0.0, 0.0, 0.0,
     0x1.3850ae4b97a67p-93, 0x1.fde22d3f392fdp-26, 0.0, 0x1.1f8d291c4246ep-30, 0.0,
     0x1.4571eab774c64p-58, 0x1.1b7df89f3118ap-707, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee357d167ae4fp-807, 0x1.157a301150aefp-961, 0.0, 0.0, 0.0,
     0x1.4fce8b41c8b6ap-209, 0x1.17fd08211f297p-642, 0.0, 0x1.d2c1ed6b46127p-427, 0.0,
     0x1.e307da2119a1ep-590, 0x1.d1da9dba6177ep-227, 0x1.923e40e791fa7p-163, 0.0,
     0x1.cb7d2b6145c7p-336, 0x1.84890ebd6809p-295, 0x1.7b9492d3acc6ep-551,
     0x1.6531f4ee4e07ap-595, 0.0, 0x1.79539ef7d29bdp-491, 0x1.a19ca902e2b79p-602,
     0x1.82ab059026b48p-753, 0.0, 0x1.8d8a8e1a8e483p-347, 0x1.c0fe799a4ecf1p-937, 0.0,
     0x1.b1e01679f2056p-41, 0x1.e060c1550a8e9p-762, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.96c3953ce4193p-558, 0.0, 0.0, 0x1.d87689d30e204p-659, 0.0, 0.0,
     0x1.a75701bf62563p-238, 0x1.90fb1c60019e5p-976, 0x1.8562bbcda3eadp-260, 0.0, 0.0,
     0x1.9773c4cd62fbbp-185, 0.0, 0.0, 0.0, 0x1.4538fbe7ee3d1p-84,
     0x1.0562743fe0b3bp-45, 0x1.08e88767dcb7dp-749, 0x1.186d4fc489073p-945,
     0x1.dd2aa11487c56p-868, 0x1.1213acf30f9a9p-179, 0.0, 0x1.f1ced41dc24a6p-884, 0.0,
     0x1.e5b3c093dbea2p-783, 0x1.a40f40b4833p-9, 0x1.2b8887bd39e89p-692, 0.0,
     0x1.472e9329cdd92p-607, 0.0, 0x1.d61aa77eb4a6bp-702, 0.0, 0.0,
     0x1.7838c5ed3be1p-290, 0x1.16b0e0cbc91c1p-127, 0x1.ddac2fb1d71ccp-220,
     0x1.4166dffb3ff94p-946, 0.0, 0x1.c645378dd1124p-195, 0x1.1f8b454939c8ap-714, 0.0,
     0x1.648008e09cb82p-948, 0.0, 0.0, 0.0, 0x1.c1a6735a5ac11p-127,
     0x1.392a25c1732cfp-513, 0.0, 0.0, 0x1.3eefc9982161ap-423, 0x1.65f8854fca169p-6,
     0x1.a0b970a8a912ep-122, 0x1.1f6292ba751fcp-496, 0.0, 0x1.431b3f662ca0fp-1013,
     0.0, 0.0, 0x1.9a21577341e78p-667, 0.0, 0x1.78d3ede063b65p-976, 0.0, 0.0,
     0x1.7483e2d682963p-445, 0.0, 0.0, 0x1.11c59cc3d2ffcp-397, 0x1.3dcc95481b70bp-465,
     0.0, 0.0, 0.0, 0x1.b2460f642b77p-255, 0.0, 0.0, 0.0, 0x1.812a575ac5dc8p-120, 0.0,
     0x1.9d48f5fc1e8c5p-585, 0.0, 0.0, 0x1.40d5dfa4cd7ap-44, 0x1.9d0b1a61a17bp-214,
     0x1.1a74c54c5e9ddp-911, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.808ecc7eb11abp-418, 0.0, 0.0, 0x1.7c6f39d05e555p-1009,
     0x1.4529e4ed51035p-812, 0.0, 0x1.2717f0cd0d72ap-273, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7db96b80f2a01p-596, 0x1.ebb2f4105c2aap-732, 0.0, 0.0,
     0x1.34cfd5e540b58p-80, 0.0, 0.0, 0.0, 0x1.c32ab71d2f467p-196,
     0x1.5cffc0e7f6a71p-281, 0x1.07df2db36d103p-909, 0.0, 0x1.206a715f94603p-139,
     0x1.f3d1caa7087b4p-708, 0x1.f10e273cb1c54p-167, 0x1.6557d78b3232dp-736,
     0x1.869a69957cad4p-907, 0.0, 0x1.d33577e1cb3b2p-116, 0x1.2a19098f6e3e3p-856,
     0x1.6b050114f6bf3p-295, 0x1.09bc1d7817385p-221, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa2773fd233b6p-619
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
            tmp1 = Sleef_finz_acosd2_u10kvx(tmp0);
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
    printf("Sleef_finz_acosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acosd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
