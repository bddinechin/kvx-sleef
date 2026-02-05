/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_purecfma.c --function Sleef_sqrtd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.e08c1b1d5db05p-295, 0.0, 0.0, 0x1.ddf5d099cc964p-716,
     0x1.463f37572c342p-353, 0x1.ecb69a54043f7p-204, 0.0, 0.0, 0.0,
     0x1.91ac9ca0614eap-692, 0x1.a1ce83587aca1p-402, 0x1.c63aec15a7356p-792,
     0x1.2646f2a5288c1p-778, 0x1.e22edae315acbp-21, 0x1.99ee3100009ap-20, 0.0,
     0x1.bae50e20d3edp-752, 0.0, 0x1.ed4bd2e0c5522p-956, 0x1.b43095217090ep-2,
     0x1.a61a48a8e6092p-393, 0.0, 0.0, 0.0, 0x1.cae0fa5f4230bp-276,
     0x1.dc1bf339b28d7p-731, 0x1.34adeffb8bc48p-564, 0.0, 0.0, 0x1.2be9cc774845dp-314,
     0.0, 0.0, 0x1.f0f935490a0eap-717, 0x1.a26904a1adfacp-235, 0.0,
     0x1.569a847cfbbd3p-296, 0x1.9ff4a90136fa7p-275, 0.0, 0.0, 0x1.9ab0b0d541f17p-53,
     0x1.dba510f14c0b8p-95, 0.0, 0.0, 0x1.0a99dfd9fd5fep-790, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3d106c8a9e032p-703, 0x1.660814b875579p-765, 0x1.f90c17f679ff3p-298, 0.0,
     0.0, 0x1.eceda8f75b4b4p-243, 0.0, 0.0, 0.0, 0x1.054c3ad1d4802p-141,
     0x1.83772b822c754p-864, 0.0, 0x1.6e4f91d151fbap-274, 0x1.d06d7a8b8fd7ap-637, 0.0,
     0x1.dad044c5e1c87p-444, 0x1.53da94b26016fp-930, 0.0, 0.0,
     0x1.37b8524969eb1p-1017, 0.0, 0x1.897c9c6f1e81fp-324, 0.0,
     0x1.e0f1ab3839223p-834, 0x1.5ab2bb7e34e73p-902, 0x1.2163975beaa52p-484, 0.0,
     0x1.f480ce2e2ab41p-630, 0x1.6a78cc3b3e4dep-746, 0.0, 0.0, 0x1.2bc05a54c6957p-965,
     0x1.44bbac644b9ep-127, 0.0, 0.0, 0.0, 0x1.2a81ad107bf55p-720,
     0x1.98915b9d1cfe7p-887, 0.0, 0.0, 0.0, 0.0, 0x1.5617d56205962p-415, 0.0,
     0x1.3c017b721a2p-383, 0.0, 0x1.c847fbd58b237p-444, 0x1.6f2dcbe88ff46p-966, 0.0,
     0.0, 0x1.15e4e0572e09ap-529, 0.0, 0x1.7c0cd0dfc8298p-1003,
     0x1.6eba6a4607944p-869, 0x1.c25cf835a3434p-660, 0.0, 0x1.a9ce8ea742dc1p-972,
     0x1.cbbfdaec95389p-573, 0.0, 0.0, 0.0, 0x1.8391ddafa712ep-377,
     0x1.2d7b21bb695c1p-620, 0.0, 0.0, 0x1.99430febfbc77p-98, 0x1.609a2c1e3f8e5p-124,
     0x1.d6b946cfb28a5p-385, 0x1.3f747f39c31d1p-756, 0x1.979ea86edc47dp-546, 0.0,
     0x1.3b6f9e802147fp-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e68fb1877f77p-191, 0.0,
     0.0, 0.0, 0.0, 0x1.ea134cdbdad01p-752, 0.0, 0.0, 0.0, 0.0,
     0x1.470d2e3e2f9e1p-350, 0.0, 0.0, 0.0, 0x1.76d90dbd14e39p-1014,
     0x1.22763608c3622p-107, 0x1.cc9d5dfd6d376p-525, 0.0, 0.0, 0x1.d57275d699017p-32,
     0x1.11904184a0ccap-705, 0.0, 0.0, 0x1.c964a365d7e51p-861, 0x1.1f8c47ff2d1a7p-278,
     0x1.5ad73240ac499p-633, 0.0, 0x1.3dfa46657447p-327, 0x1.d284a1d518356p-106,
     0x1.f555364524efep-258, 0.0, 0.0, 0x1.046eec1ecadddp-906, 0x1.8fc2f5cf416a8p-60,
     0x1.90a11fb29b363p-361, 0.0, 0x1.12ad744280ad3p-255, 0x1.6155a6e46abacp-13, 0.0,
     0x1.7a52634ada1c3p-665, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.367e1c27d7afep-725,
     0x1.563ece55ff9d6p-636, 0x1.9657952b5677cp-314, 0x1.555ac5d41fa7ap-50,
     0x1.4b0442ec328afp-1010, 0x1.7b4935824a41dp-611, 0.0, 0.0,
     0x1.95dac1e51d9d5p-711, 0.0, 0.0, 0x1.b631d911dad34p-330, 0.0, 0.0, 0.0, 0.0,
     0x1.8b82516220685p-351, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a9729a14193p-226, 0.0,
     0.0, 0.0, 0x1.d4455f257ca27p-704, 0.0, 0.0, 0x1.36324cf10888dp-783, 0.0, 0.0,
     0x1.a78f9b3a65e3fp-939, 0.0, 0.0, 0x1.7b63884c6aaa6p-467, 0.0, 0.0,
     0x1.6faaeecd2b363p-325, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.083b767fb92fdp-679,
     0.0, 0x1.d8f3012964a62p-143, 0.0, 0.0, 0.0, 0.0, 0x1.d7c9402099b3fp-166,
     0x1.62f38a75142dcp-820, 0.0, 0x1.a9bee1a1991efp-187, 0.0, 0x1.472395c5d1c11p-551,
     0x1.aaab8886b4ff5p-101, 0.0, 0.0, 0x1.2d6d86f6ceacbp-514, 0.0, 0.0,
     0x1.7891e1a1b99eep-493, 0.0, 0.0, 0.0, 0x1.31b5d66c104b2p-153,
     0x1.e9d7e3123a5bp-350, 0x1.8c573cb2142f7p-882, 0x1.ca72ec94232c6p-615,
     0x1.fc74fe459df65p-744, 0.0, 0.0, 0.0, 0x1.f89738de5cd48p-392, 0.0,
     0x1.b01ab20eba82cp-704, 0.0, 0.0, 0x1.09d6add0db83p-215, 0x1.733c5d0e1d7cfp-596,
     0x1.74d8d77a0d95dp-634, 0x1.ff94471f12111p-360, 0x1.318fd239acb3bp-330,
     0x1.3b8e918227b88p-719, 0.0, 0.0, 0x1.304e89c0a871dp-937, 0.0,
     0x1.fa932d24441c8p-927, 0x1.17357a900fd5bp-293, 0x1.17bf14abfff8dp-425, 0.0, 0.0,
     0.0, 0x1.d48a8aa05c6fcp-959, 0x1.44f7495954983p-913, 0x1.5f3ca72d119b3p-628, 0.0,
     0x1.7e0f24cd7aadp-313, 0.0, 0.0, 0x1.25557bd3ec759p-670, 0.0,
     0x1.e9b8014f446b6p-252, 0.0, 0.0, 0x1.7da88aef85c33p-253, 0x1.ac73c6b879285p-209,
     0.0, 0.0, 0.0, 0x1.b129a69802cb8p-807, 0.0, 0x1.6728d9ad3e873p-14, 0.0, 0.0, 0.0,
     0x1.6b5e5da360cfcp-843, 0x1.a85c7e35d02aep-455, 0.0, 0x1.aaa85f3046465p-623, 0.0,
     0x1.3ba69d271326bp-153, 0x1.cc93f382aae04p-957, 0.0, 0.0, 0x1.91c85cda48216p-294,
     0.0, 0x1.ff1fd40b327fap-455, 0.0, 0.0, 0x1.2f9ce7028aa7ap-775, 0.0, 0.0,
     0x1.c198d0af7ef9cp-994, 0.0, 0.0, 0x1.044ae96f76d3fp-156, 0x1.eb884267cc718p-69,
     0x1.d7cd8cd394287p-523, 0x1.81f1a09de233p-804, 0.0, 0.0, 0x1.8e4dd61f0b4f9p-191,
     0.0, 0.0, 0x1.ccee8bd2e502bp-861, 0.0, 0.0, 0.0, 0.0, 0x1.fd4726e0cbd96p-350,
     0.0, 0x1.9dc430c9b5cafp-302, 0x1.bd90111b1fe5dp-549, 0x1.d2c46858b234cp-1019,
     0.0, 0x1.5abc477e91ff8p-785, 0.0, 0.0, 0x1.72fcfa206f693p-816,
     0x1.9d14aafa036fp-593, 0x1.897f92e388112p-337, 0x1.6220439486707p-995,
     0x1.9e68050d0915ep-7, 0x1.845a49fdec282p-872, 0x1.3f1909708a99ep-134,
     0x1.150569f923ebep-893, 0.0, 0x1.f6b56c9c10453p-744, 0x1.abe3fb71493acp-838,
     0x1.0cbf02e3a6fa3p-9, 0.0, 0x1.e2a2398147bfp-867, 0x1.91d5a6f3e4666p-85,
     0x1.b5852fe5fa043p-857, 0.0, 0x1.dfc5e45ee9c8ep-538, 0.0, 0.0,
     0x1.c44ad56ca9c88p-320, 0x1.aca4ef2671553p-820, 0.0, 0x1.dbd1033061d0bp-566,
     0x1.c2f2730af1e4fp-183, 0.0, 0.0, 0.0, 0x1.0366a52d5eeecp-450, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.379e5951c3b29p-235, 0x1.81acc68e12c94p-592, 0.0,
     0x1.9485de8262192p-523, 0x1.ea1efb1b56cebp-790, 0.0, 0.0, 0.0, 0.0,
     0x1.ce38cb701af4ep-253, 0.0, 0x1.b26bf2d00d1d9p-957, 0.0, 0x1.3a7fc108bb205p-418,
     0x1.f421277314828p-544, 0.0, 0x1.ba76618536bbdp-785, 0x1.c95b8a2f50dp-902, 0.0,
     0x1.43fca788429dbp-744, 0x1.2d2db019a8077p-854, 0.0, 0x1.db8455f2954fp-899,
     0x1.78ae02a4e5201p-113, 0x1.9a6c57957daf1p-173, 0x1.f2bd829fb4ec1p-895, 0.0, 0.0,
     0.0, 0x1.266d18430dc35p-373, 0.0, 0.0, 0x1.059105526a0e7p-184, 0.0, 0.0,
     0x1.8c9cae5eee4dfp-986, 0.0, 0.0, 0.0, 0x1.dbb2f0846b573p-874, 0.0, 0.0,
     0x1.95c1fc5364092p-19, 0.0, 0x1.9c42291011e5cp-188, 0.0, 0.0,
     0x1.98f24bd5f99f3p-996, 0x1.b36f5c7df8d7p-227, 0.0, 0.0, 0x1.aac3419f73e44p-686,
     0x1.38867c10770a3p-977, 0.0, 0x1.ee9440de17746p-515, 0x1.f703a192ebd72p-482,
     0x1.e883cf7871f0ep-945, 0x1.b0bc2bc09cfp-85, 0.0, 0.0, 0.0,
     0x1.298f471a2a8bp-507, 0.0, 0x1.f2e23391b7eeap-388, 0.0, 0x1.b6eb04789c7fcp-928,
     0.0, 0.0, 0x1.cdcd9069bcffap-419, 0x1.2491cd06fbc6fp-985, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.25e570a37d945p-727, 0x1.7a5be12ff35f6p-63, 0.0, 0.0,
     0x1.fa7329f4ba64bp-693, 0.0, 0x1.d45d722747e23p-685, 0.0, 0x1.a6299859f8506p-355,
     0.0, 0x1.b180d7fff51fep-36, 0x1.1ae016a1fb065p-548, 0.0, 0.0, 0.0,
     0x1.9e0c3011416a1p-969, 0x1.576275bda323ep-129, 0x1.8630e70020b2ep-188, 0.0,
     0x1.17ff51c4d6281p-734, 0.0, 0.0, 0x1.748fd2ac40615p-360, 0.0,
     0x1.286b2e286e816p-854, 0.0, 0.0, 0x1.262e51a0d7d4bp-509, 0x1.a095bbf575e9cp-4,
     0x1.6f66a15ebabf1p-847, 0x1.67181f2d43be6p-734, 0x1.e0dd82fd927d1p-3, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6f76154012965p-922, 0.0, 0.0, 0.0, 0x1.91e18c90dc876p-686,
     0x1.9a7adac62990dp-544, 0x1.69c8a6a8adfaep-135, 0x1.a89d9e55dbc75p-858, 0.0,
     0x1.47a0be4e58eaep-635, 0.0, 0.0, 0.0, 0x1.385f0faf776c1p-813, 0.0, 0.0,
     0x1.66d7f035030e9p-636, 0.0, 0x1.df2ee4b87b76cp-895, 0x1.6188698c1db1ap-193, 0.0,
     0x1.21df11490fccdp-1012, 0.0, 0x1.5c434d0761b21p-816, 0.0,
     0x1.69f0b329c6aa5p-155, 0.0, 0.0, 0.0, 0x1.2b970851dd23cp-983, 0.0,
     0x1.ac0d3f03cd4fap-955, 0x1.60c1ac27bf98bp-447, 0x1.fae702c809c8fp-457, 0.0, 0.0,
     0x1.588f38bdc9d25p-772, 0.0, 0.0, 0.0, 0x1.6cb5b1f601de9p-741,
     0x1.a310f497bc70ap-620, 0.0, 0.0, 0x1.a8c426c4ec996p-155, 0x1.3405a71f3bc37p-131,
     0.0, 0x1.2e61261e12d0dp-463, 0.0, 0x1.d9384bced789ep-344, 0.0,
     0x1.b096b106257cfp-423, 0x1.13a8b7f25e8dcp-879, 0.0, 0x1.1110b5f871a63p-32,
     0x1.f883e8dedc623p-427, 0.0, 0x1.16174c28f3458p-281, 0.0, 0.0,
     0x1.a4f5de51f6efp-964, 0.0, 0x1.87521601191abp-284, 0x1.5f2790932d0fdp-508,
     0x1.131d1502287b6p-722, 0x1.489a9be4854e6p-145, 0x1.93885643272d5p-966,
     0x1.67e52e5dba763p-613, 0x1.b6dd0131f4b6fp-588, 0.0, 0x1.ca9d5f2d9478p-636, 0.0,
     0x1.6ed9de6f4b2afp-846, 0x1.6e5753ea7447ap-768, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33356002d1381p-698, 0.0, 0.0, 0x1.9d04f9bebe50ep-413, 0.0, 0.0,
     0x1.67b8591e77f7bp-314, 0x1.25c4581d3f918p-386, 0x1.f9d3aa3959133p-137, 0.0,
     0x1.31fbea604c7bcp-144, 0.0, 0.0, 0x1.bdc57febeee9ap-349, 0.0,
     0x1.552f9b1b6252p-331, 0.0, 0x1.9e1434cdac572p-62, 0.0, 0x1.39f9527cf9c9ep-996,
     0x1.38682507ed95ep-707, 0.0, 0.0, 0.0, 0x1.52b5279db2301p-115,
     0x1.ed5266e85223bp-866, 0x1.56f4eb6403a17p-521, 0.0, 0.0, 0.0, 0.0,
     0x1.b3ca6de31cbf2p-385, 0x1.1f55124ab3a96p-470, 0.0, 0.0, 0x1.907287561aec6p-432,
     0.0, 0.0, 0.0, 0x1.290bcddffbc12p-338, 0x1.2a7eda426d896p-128, 0.0,
     0x1.1cb31ec42a608p-544, 0x1.c5084291e4dap-767, 0x1.0de74015665dcp-458, 0.0,
     0x1.ac48e4327920fp-346, 0.0, 0x1.4d7d063fecd93p-285, 0x1.fcf246161cc65p-78,
     0x1.0347b1feb8d6bp-65, 0.0, 0x1.4a99e66bd90fdp-896, 0x1.06068bd196685p-9, 0.0,
     0.0, 0.0, 0x1.d8444ece65e57p-589, 0.0, 0x1.9eb4dfbeee223p-812, 0.0,
     0x1.2e87ee08c6d2dp-283, 0.0, 0.0, 0x1.0b9b2e3d9d48bp-332, 0.0,
     0x1.70c2b755f03aap-681, 0.0, 0x1.485f6b4f6d8dcp-53, 0.0, 0x1.ac961e305c74cp-301,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd0954b7e4f6cp-791,
     0x1.7547c28532f85p-868, 0.0, 0x1.7eb578028759dp-735, 0x1.14492eb58c769p-367, 0.0,
     0x1.c90651de72962p-147, 0.0, 0x1.4bfd3b36e39c3p-973, 0x1.fdff932330a63p-73,
     0x1.3aa04de483d13p-12, 0.0, 0x1.9a65283b12c5bp-674, 0.0, 0.0, 0.0, 0.0,
     0x1.a4dbc12a6363p-361, 0.0, 0x1.d5b7ecefbac53p-49, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4246a80afb58p-693, 0.0, 0x1.810d025c9a446p-10, 0.0, 0x1.0c006cd4a2bc2p-755,
     0x1.56e81edcf2e24p-820, 0x1.1d7906431150ep-929, 0.0, 0.0, 0.0, 0.0,
     0x1.afe6bb18c7bb7p-155, 0x1.c5e5aee173bcap-253, 0x1.9a7e539c2a076p-104,
     0x1.6f9e1b1d53cbdp-312, 0.0, 0.0, 0.0, 0x1.1a2fa2eafe2ep-995, 0.0, 0.0, 0.0, 0.0,
     0x1.efc5e916e8575p-756, 0x1.1c81b1ac900a7p-917, 0x1.182d952bea38ap-472, 0x1p0,
     0.0, 0x1.ffdda5d68c44dp-505, 0.0, 0x1.ae6aac7860449p-993, 0.0, 0.0, 0.0, 0.0,
     0x1.9dfcd8ec594bbp-590, 0.0, 0.0, 0x1.f9deafafca688p-700, 0x1.be7b2c86ddffcp-876,
     0x1.f88e48e486fccp-883, 0.0, 0x1.dd00999fd22f3p-435, 0.0, 0.0, 0.0, 0.0,
     0x1.34f089c11e2b3p-81, 0.0, 0.0, 0x1.990cfd1efcafdp-772, 0.0, 0.0,
     0x1.9444cdea863fap-871, 0.0, 0x1.b140ffa54fd79p-291, 0.0, 0.0, 0.0,
     0x1.88e5e0308ec9p-472, 0x1.0cdd659b50ae8p-563, 0x1.39604382c9d91p-687, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e29fc5a859042p-444, 0.0, 0x1.21e6eb7a9e672p-973,
     0x1.3e4c91e3c9fc5p-828, 0x1.d59eb0b63bb72p-144, 0x1.9247fd75c13ddp-146,
     0x1.d4acd71610d47p-811, 0.0, 0x1.a0b3465412f57p-846, 0.0, 0x1.d5461658347c7p-406,
     0x1.1d8016f4a32c4p-970, 0x1.501baf8cac4abp-220, 0x1.a472c7d9ecbbcp-403, 0.0,
     0x1.52828a9b4db5cp-759, 0x1.4260890ff1cadp-541, 0x1.1b22d4615449bp-856, 0.0, 0.0,
     0.0, 0.0, 0x1.1b10bc871321cp-60, 0.0, 0x1.6d7288a0dd6d5p-605, 0.0, 0.0,
     0x1.aeaa5f65af274p-735, 0.0, 0x1.2eacd0996144cp-410, 0x1.e044d2ff33bb5p-680, 0.0,
     0x1.d2419a96e8c7dp-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e016ab0ba5ddp-181, 0.0, 0x1.d707b34e2b7f4p-529, 0.0, 0x1.b79766835b7c1p-82,
     0.0, 0x1.3251fa37877cbp-677, 0.0, 0x1.600b898b586d1p-512, 0x1.7125d8bdc11f2p-911,
     0x1.bc12542d23a1p-723, 0x1.42035bbcec07p-503, 0.0, 0.0, 0.0,
     0x1.ea8deb4b825fp-946, 0x1.d6c531b0b5a9dp-5, 0x1.dcd313dc65cdcp-656, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca2ad3d7beae9p-200, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7011114e30279p-235, 0.0, 0.0, 0.0,
     0x1.b93c965f9e15p-103, 0x1.7ae6891c8ba8p-434, 0x1.f793c0fe26531p-177, 0.0,
     0x1.7dd8f2ff1bd84p-1017, 0x1.423eda70f19b7p-957, 0x1.79399df4afe06p-686,
     0x1.a37a55f67f549p-762, 0x1.310432c0a1886p-469, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.65ef14f9c4865p-297, 0.0, 0x1.f14b83075b106p-974, 0.0, 0.0,
     0x1.25e2a4e8ed6dbp-122, 0x1.8034d119363ccp-169, 0x1.23e1be95f7541p-599, 0.0, 0.0,
     0x1.898f684effcffp-95, 0x1.405671cb6a556p-102, 0.0, 0x1.da129617d570dp-210,
     0x1.d2b4396298c7bp-250, 0.0, 0.0, 0x1.59af0fb636c2dp-985, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ccb358e5c95ep-228, 0x1.3a9c6d25a6c4bp-362, 0.0,
     0x1.932484a9b2521p-645, 0x1.7d2c36b1e4b49p-567, 0x1.247bb48215607p-459,
     0x1.6a1843668655cp-607, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a49faad39afcbp-875,
     0x1.1dc7ac6c28181p-681, 0x1.c9dd1c9c31e5bp-247, 0x1.81eeedce95963p-591, 0.0, 0.0,
     0.0, 0x1.0cd9d325f8bc2p-815, 0.0, 0x1.c97fda7fb5cc9p-229, 0.0,
     0x1.d858bbb94ad2fp-814, 0x1.45d4449e12835p-102, 0.0, 0.0, 0x1.e4fae330c280fp-625,
     0x1.8f82b252b9adp-891, 0.0, 0.0, 0.0, 0x1.7777d8eeafe4bp-483,
     0x1.d4ce8f69efe1dp-191, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8d7df11c1462p-620,
     0x1.f15923cbd1033p-693, 0x1.e91b582074635p-1001, 0.0, 0.0,
     0x1.fde1d932d67c6p-901, 0.0, 0.0, 0x1.394f67f7ab81fp-442,
     0x1.fb6628ba93e2fp-1020, 0x1.d04651b860ed5p-220, 0.0, 0.0, 0.0,
     0x1.00b1d8e582285p-42, 0x1.32d3e6b811c62p-172, 0x1.e7c82ef1c9b7cp-485,
     0x1.fd64e3de6fc87p-291, 0.0, 0.0, 0x1.7ef3dfc2355fbp-418, 0x1.95138de0a1844p-958,
     0.0, 0.0, 0x1p0, 0.0, 0x1.e910b139211fbp-135, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddb82ade88442p-347, 0.0, 0x1.14aff30b8c969p-693, 0.0, 0x1.9861620206a0ep-722,
     0x1.fa4d5a63e1ea4p-744, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2c4b81074b7e7p-453,
     0x1.837373d976f09p-377, 0x1.e823f5ee5b329p-864, 0x1.e33211d78f4e1p-651, 0.0, 0.0,
     0x1.fa28c8aa4dbf1p-890, 0.0, 0x1.dcf4ba5c420fep-85, 0.0, 0x1.3bc0e6562dc3p-34,
     0x1.b6f4fcd4a0908p-119, 0x1.4e2cdf0f3f38ap-361, 0x1.b913e1201b85fp-412, 0.0,
     0x1.949178c275647p-90, 0.0, 0.0, 0.0, 0x1.7783edb386d56p-565, 0.0, 0.0,
     0x1.48a4c4c258efdp-537, 0x1.31344a5bedf45p-31, 0x1.cff5e56d6854ep-541,
     0x1.7d6993e509e73p-702, 0.0, 0x1.d86fd0b0902c2p-580, 0x1.5219655382b4p-285, 0.0,
     0.0, 0x1.42ff5914db303p-861, 0.0, 0.0, 0.0, 0x1.ead57c24ae356p-881,
     0x1.f5a4fd07f12f6p-488, 0.0, 0.0, 0.0, 0x1.717c6372473fcp-385,
     0x1.1b0715978b2a6p-203, 0.0, 0x1.bf605d02e2cf6p-626, 0x1.4e03e20abb78dp-602,
     0x1.d05df45c7426fp-905, 0x1.a80262bfe770ep-740, 0x1.2a804188da518p-797,
     0x1.34b55122b8913p-1001, 0x1.1d2b6cbdab8abp-683, 0x1.964d84b8b566ap-710,
     0x1.225e9ee646e58p-348, 0.0, 0.0, 0.0, 0.0, 0x1.89c907963415bp-370,
     0x1.fae7fd6f4a266p-910, 0x1.c3ab6f6e5919dp-117, 0.0, 0.0, 0x1.3c3232925fda8p-803
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
            tmp1 = Sleef_sqrtd1_purecfma(tmp0);
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
    printf("Sleef_sqrtd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtd1_purecfma bench acc %la\n", global_bench_acc);
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
