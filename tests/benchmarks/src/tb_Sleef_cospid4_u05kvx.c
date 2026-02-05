/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cospid4_u05kvx.c --function Sleef_cospid4_u05kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.4b65499feff24p-520, 0x1.9fc86853a09afp-1016, 0.0, 0x1.f2b8bdbd6df29p-370,
     0.0, 0x1.6ed9a9c3ac026p-23, 0.0, 0x1.e847d6a5c6df5p-621, 0x1.033b3785d8105p-897,
     0.0, 0x1.62341b771d0b2p-669, 0x1.dad6fbd74b7acp-99, 0.0, 0x1.8dce282ed906cp-401,
     0x1.aa8ab4c899924p-165, 0.0, 0x1.012af92c1292ep-942, 0.0, 0x1.d3156ee9854b3p-834,
     0x1.f944bdc4dd23ep-439, 0x1.56720235bc64dp-766, 0.0, 0x1.e8da48d9fd196p-73, 0.0,
     0.0, 0.0, 0x1.38829517ffbe1p-570, 0x1.21396fb6d4487p-471, 0.0,
     0x1.ae10d6223b36ap-9, 0x1.2690f1fc326cdp-795, 0x1.a130896425fbcp-817, 0.0,
     0x1.c9e092ebeb7e4p-153, 0x1.571074fba9b03p-883, 0x1.a25b68fec4848p-573, 0.0, 0.0,
     0x1.524d26f2ee91p-724, 0x1.670705a4c2e15p-719, 0x1.c38f24dbf2efap-661, 0.0,
     0x1.4181eff331f81p-629, 0.0, 0.0, 0x1.8864d9ea02705p-102, 0x1.59effceded2d5p-682,
     0.0, 0x1.cd49e18f9ea3fp-272, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b5f3abd5fb49p-285, 0x1.6eb607c7995a6p-127, 0.0, 0.0, 0x1.bddef3f3c871bp-735,
     0.0, 0.0, 0x1.7bdc2dd5a9504p-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b9a787c65448p-761, 0x1.b6a412c23ec25p-857, 0x1.6367367c0dbbap-206,
     0x1.e682fa31c6dp-484, 0x1.690e9e47359f8p-665, 0.0, 0x1.85eb7bb601d2ap-874, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ad3eb4327f3ep-887,
     0x1.8a6ab117f5b7cp-908, 0x1.2d40550c7e261p-686, 0x1.6923edf13873p-1019, 0.0,
     0x1.3e15d5b5eba37p-559, 0x1.0949f076fa9dfp-809, 0x1.ca25343b20d76p-145, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b76e397b72e5fp-522, 0x1.ac143cad55de7p-114, 0.0, 0.0,
     0x1.5c12ccfcf16c3p-523, 0.0, 0.0, 0x1.7710d7e2bb8f5p-569, 0.0, 0.0, 0.0,
     0x1.26a918ad311cfp-886, 0.0, 0.0, 0.0, 0x1.bdf0201949555p-638,
     0x1.b792cbed85fa6p-575, 0.0, 0x1.dd0728953f2p-457, 0x1.6845f0e2af2b3p-978,
     0x1.35236e5538773p-919, 0x1.0a9e4519e369dp-381, 0x1.848dcf949559ap-175, 0.0,
     0x1.49d83bc091ba8p-107, 0.0, 0x1.5505baf368c1cp-5, 0x1.fa10b69687b6fp-632, 0.0,
     0.0, 0.0, 0x1.6f50998ceb358p-866, 0.0, 0x1.1069366cbe329p-840, 0.0, 0.0,
     0x1.1e3120187afdp-843, 0.0, 0x1.944caa3ce04ebp-995, 0.0, 0x1.a111d6fd0e042p-28,
     0x1.d8d6462198bf9p-687, 0.0, 0x1.751e6d4d961dbp-587, 0x1.297ee9a8bb47fp-4,
     0x1.be16c9bc17be6p-730, 0x1.7978fa86084b1p-189, 0.0, 0x1.ad45a7736a625p-664,
     0x1.3195b1bfa6741p-984, 0.0, 0x1.348fbdd9cd9cap-181, 0x1.2537bdeab7eddp-995,
     0x1.e34d2e0b82f3dp-961, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df94a0d95202fp-257,
     0x1.072380227cac6p-606, 0.0, 0.0, 0x1.cf2c22dce34fcp-462, 0x1.1a2971c82d112p-29,
     0x1.7201624bb5abp-412, 0.0, 0x1.8379824629862p-445, 0x1.c270adc2ba93dp-518,
     0x1.d5d16745e4d51p-379, 0.0, 0x1.91ba83f0d3fd2p-350, 0x1.99b76fe12d3e1p-1005,
     0.0, 0x1.f6282bd63bb2bp-388, 0x1.b2d3bad5d9b6dp-340, 0.0, 0.0,
     0x1.978e1c85258a3p-461, 0x1.b62878f70805cp-936, 0.0, 0.0, 0x1.b886c92e9924ap-873,
     0.0, 0x1.8251a4ccefc3cp-686, 0x1.a6449ad15c1f2p-432, 0.0, 0.0, 0.0, 0.0,
     0x1.67fcf1de734b7p-1009, 0.0, 0.0, 0x1.1f941dd12bedbp-925,
     0x1.4f7b2c41a17aep-372, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db708b26c4be9p-271,
     0x1.fbfca8b60a213p-465, 0x1.408721556232dp-291, 0.0, 0.0, 0x1.37ba7f9fdee44p-740,
     0x1.8c0c048d8b102p-253, 0.0, 0x1.24a18d6207e5ap-219, 0x1.1edcaaf56c18bp-698,
     0x1.117bc7eedcffcp-537, 0.0, 0x1.fb96cb38c6c2bp-192, 0.0, 0.0, 0.0,
     0x1.8c69014f45efp-551, 0.0, 0x1.bb793d9e7d61ep-713, 0x1.c7db961c9c485p-829,
     0x1.f410e7f6224ap-266, 0x1.2f45a1839b7fap-789, 0x1.ec4720a0b932p-34, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88bd3006b632p-297, 0x1.b61a9c4ed7977p-347,
     0x1.59defc1185ba8p-957, 0x1.420c5af9068fep-4, 0x1.a7a139031546bp-11, 0.0, 0.0,
     0x1.5722529a71b5ap-776, 0.0, 0.0, 0x1.80457b9e8e24dp-765, 0.0, 0.0,
     0x1.43028b9a01acbp-444, 0.0, 0x1.0f427005a1ff8p-230, 0x1.1f986e1d0cbbfp-1015,
     0x1.14a16cab0569dp-271, 0x1.a57ffd4a43485p-837, 0x1.6a97f135f79f7p-136, 0.0, 0.0,
     0x1.029d29f0ba1fdp-207, 0x1.b7277c79b09ccp-585, 0x1.ce317770f5632p-346, 0.0, 0.0,
     0x1.200b3406c82bcp-524, 0x1.f95f6b7c8169fp-127, 0x1.4e4665e6a08a5p-707, 0.0, 0.0,
     0.0, 0x1.6f3cdb12f8f6cp-449, 0.0, 0.0, 0x1.3759a1977f0f9p-269, 0.0,
     0x1.483912aff245fp-35, 0x1.268f784be16c6p-88, 0x1.079c73be545e3p-745,
     0x1.fb874c3405717p-786, 0.0, 0.0, 0x1.261c1af81dc0fp-82, 0.0, 0.0, 0.0,
     0x1.b5c9edf75ecc9p-95, 0.0, 0x1.d2c5eb658aff8p-701, 0.0, 0x1.29308a63653cfp-841,
     0.0, 0.0, 0x1.cb5c9bca25f69p-517, 0.0, 0.0, 0x1.0c9c6ab603085p-757,
     0x1.a8504bbd87eb2p-294, 0.0, 0.0, 0.0, 0x1.2eed2b02dd90ep-357, 0.0,
     0x1.b563113427e8fp-325, 0.0, 0.0, 0x1.17329decaa7fap-125, 0x1.50c2c0d07ba83p-311,
     0.0, 0x1.31b5f3571fcacp-441, 0x1.a2602d3acd87dp-497, 0.0, 0x1.aedde72964784p-679,
     0.0, 0.0, 0x1.a388ff7d298fap-451, 0.0, 0x1.5d53b696240dbp-931, 0.0, 0.0,
     0x1.97fd5a41135bcp-541, 0x1.af0faae8f75fcp-944, 0.0, 0x1.8621238cbfaa1p-73, 0.0,
     0x1.d31dfab15a416p-872, 0.0, 0.0, 0.0, 0x1.303586b83affcp-277,
     0x1.71b800fd309afp-279, 0x1.6432b393d435ap-348, 0.0, 0.0, 0x1.748384d349304p-745,
     0.0, 0.0, 0.0, 0x1.253a416371f12p-56, 0.0, 0x1.98193decfa5f7p-958,
     0x1.ecad2c3bba239p-153, 0x1.81c8bdebefbc9p-706, 0x1.bbb99dacc5b8p-39,
     0x1.5f3f25b361c33p-221, 0x1.2dd18f4a211ddp-250, 0x1.832b70c6cb0a1p-208, 0.0,
     0x1.f20c0c4c0cb87p-629, 0x1.f5a73562a73eap-546, 0x1.0d517d1c7a9bap-522,
     0x1.e4a5dc31e99ap-970, 0.0, 0.0, 0.0, 0x1.6341b99287686p-184, 0.0, 0.0, 0.0,
     0x1.fa4c0c19082dp-152, 0x1.e663480f7f62dp-327, 0.0, 0.0, 0x1.42607ef3cf8cdp-619,
     0.0, 0x1.c59a8f2090dcp-918, 0x1.b42787ceffe56p-194, 0.0, 0x1.f3b538a14df45p-104,
     0x1.02646e89fc58bp-568, 0.0, 0x1.c0b518370256p-12, 0x1.312cb46a8e43fp-481, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83fec72c4b963p-591, 0.0, 0.0,
     0x1.78b26be32ff0dp-956, 0x1.895ac054baabep-867, 0x1.24f54f7200fdap-290, 0.0, 0.0,
     0.0, 0x1.421acc831db23p-289, 0.0, 0x1.b7deca1956fbap-158, 0x1.98e353a1e5b29p-320,
     0.0, 0x1.4f8c446d007d1p-2, 0.0, 0.0, 0.0, 0.0, 0x1.008220ce48955p-274, 0.0,
     0x1.8945e31b8fe4bp-751, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8799d178117ep-1012,
     0x1.a4c06abe6d9bep-18, 0x1.fab3e5a9cd64ep-809, 0.0, 0x1.0b783d756179bp-110, 0.0,
     0.0, 0.0, 0x1.21fcd1cb9a79ep-220, 0.0, 0x1.3214afbe2c853p-803,
     0x1.27c6d76b54515p-157, 0.0, 0x1.dc0eaea21357fp-447, 0x1.5a974d65846fcp-277, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d80dfd4837558p-696, 0x1.875db6d84e1cp-920, 0.0, 0.0,
     0x1.f3d8cc24d0c63p-64, 0x1.c366c67f7103fp-687, 0.0, 0x1.df5e6b739e994p-87,
     0x1.3671009f38bep-265, 0x1.dfe9d0f3a1541p-168, 0.0, 0.0, 0x1.8204a98b7248dp-243,
     0.0, 0.0, 0x1.d405ed829924ap-1005, 0.0, 0x1.aa5617f4dcc85p-282,
     0x1.b4d72aed6a499p-191, 0x1.9c0400021fd51p-664, 0x1.3e58320d1c8e8p-664, 0.0, 0.0,
     0x1.965309d00db9ep-773, 0.0, 0x1.063d4186b5f6fp-835, 0.0, 0x1.f3d13484fcc6cp-133,
     0x1.04f47ea284da7p-169, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dde0ec035dd45p-599, 0.0,
     0x1.1f3dbf61f014fp-192, 0x1.e441ee3da2ffp-389, 0.0, 0.0, 0.0,
     0x1.01c4ce2d6b5a1p-602, 0.0, 0.0, 0.0, 0.0, 0x1.fae45d4d2ea8ap-437,
     0x1.7f0f610d78c89p-143, 0x1.fe028a9f0991ep-754, 0x1.013519eb289b1p-215, 0.0,
     0x1.772438b341d51p-923, 0.0, 0x1.79f7dc39427c8p-594, 0x1.21e6c638f5632p-98, 0.0,
     0x1.c26f0a6a1b6e4p-703, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d04ced260fe5dp-1, 0.0,
     0x1.2dddfec145581p-447, 0.0, 0x1.2ce106ee74614p-895, 0x1.76aafea8ead96p-890,
     0x1.51151fa763a9bp-779, 0x1.529324e0e1b19p-540, 0.0, 0x1.f3c8b77ef9b0bp-449,
     0x1.e32e3c22e4f3cp-789, 0.0, 0x1.c9ad245742281p-613, 0.0, 0.0,
     0x1.d79d88d2c2eefp-940, 0x1.0db2a8fb159a7p-803, 0x1.56087d45b3e1ep-265, 0.0, 0.0,
     0x1.5e41de8d573afp-186, 0.0, 0.0, 0.0, 0.0, 0x1.814435d0508eap-598, 0.0,
     0x1.4378db818b875p-141, 0.0, 0x1.fb70044551647p-437, 0x1.888ff3ee13184p-607,
     0x1.7590bcec8a80ap-667, 0x1.348fad5903c0dp-310, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f18131ef4a547p-480, 0x1.c05c6d386950cp-873, 0x1.b8f2c3d190cc2p-469,
     0x1.a3300d871db01p-716, 0x1.ab950cf540f33p-443, 0x1.485c5c80b190bp-104,
     0x1.176500f02ceb8p-996, 0.0, 0.0, 0x1.09ec0086c562fp-346, 0x1.bf2b0f0766007p-127,
     0x1.7a047ed31933bp-573, 0.0, 0x1.167a08664ad24p-872, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c55ac613a3ddfp-522, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ff24718e5bd4p-619,
     0x1.49d731bc0e01fp-544, 0x1.60134fd6b09bbp-759, 0.0, 0.0, 0x1.46e7739bc65b7p-409,
     0x1.f2a03258425e2p-1004, 0x1.d90b1356ac155p-953, 0x1.12395026e169ep-368, 0.0,
     0x1.44cd384205ae3p-910, 0x1.dc78b03b2d24ap-981, 0.0, 0.0, 0.0, 0.0,
     0x1.229b18d4d971dp-593, 0.0, 0x1.8880713bc71aap-994, 0x1.51306aa3c8505p-111, 0.0,
     0.0, 0x1.c42fe84b1b65fp-883, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.782b0b8afac8ap-292,
     0.0, 0x1.f7fa5c7b83477p-316, 0.0, 0.0, 0x1.0cb4db834b066p-114, 0.0,
     0x1.1356c07f6d941p-673, 0.0, 0.0, 0x1.b2e684f111244p-188, 0.0,
     0x1.0d57cfaf21485p-704, 0.0, 0x1.18db8f471b0fcp-638, 0x1.0b83b9a64096p-110,
     0x1.f23b6d6774a36p-484, 0.0, 0x1.ada0919101611p-235, 0.0, 0.0, 0.0,
     0x1.cedf0dca9cd6p-486, 0.0, 0.0, 0x1.2d94059f9543cp-669, 0.0, 0.0, 0.0, 0.0,
     0x1.62eee3f9a06c5p-605, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc9cbf471c26dp-529,
     0x1.fb4a34753f994p-553, 0x1.ccbf089fe0b02p-64, 0.0, 0x1.7e6cf888a35b4p-476,
     0x1.23a8b9643ef0cp-609, 0.0, 0x1.3a50863c2264dp-804, 0x1.55385e0781dfcp-158,
     0x1.fe442929fe7b7p-176, 0x1.e6a8dd989704ep-501, 0.0, 0.0, 0.0,
     0x1.4952b1465c75fp-90, 0.0, 0.0, 0x1.9a1c5f314c232p-820, 0.0,
     0x1.9d208d42e2023p-499, 0x1.32c526250ced1p-196, 0.0, 0x1.65e2229c8d417p-897, 0.0,
     0x1.f9d625aca7a24p-196, 0.0, 0x1.ac9055f81b505p-256, 0x1.194a537e61fcfp-470, 0.0,
     0x1.da790ead075f5p-843, 0.0, 0.0, 0x1.813de9dc7b06ap-611, 0x1.de124b075ecf3p-225,
     0x1.64d173679f851p-181, 0.0, 0.0, 0.0, 0x1.0a82975f0f59ap-872, 0.0,
     0x1.41e54e51476dbp-907, 0x1.33a27535e259ap-997, 0x1.351939b3d4ecdp-934, 0.0,
     0x1.10bcb159bb9fbp-613, 0.0, 0x1.cac4f40e36be1p-279, 0x1.c4f3dbfee039p-482, 0.0,
     0.0, 0x1.ea9badd26c335p-670, 0x1.6b87cdf03f223p-182, 0.0, 0.0,
     0x1.f3197c734f05ap-885, 0.0, 0.0, 0x1.ac25d96ab9528p-620, 0x1.bc047ceee3133p-744,
     0x1.1bdcd5272bf1bp-467, 0.0, 0.0, 0x1.07aaa3c551d7p-808, 0x1.7401fd868d626p-553,
     0.0, 0x1.6a43d33c01fe6p-352, 0.0, 0x1.71c0e26135a3fp-459, 0x1.91bbe56496d4ep-215,
     0x1.7df9dd23b89e1p-368, 0.0, 0x1.4a6e326f89647p-858, 0x1.6b1425d8e8fa1p-128,
     0x1.a67ce95d11775p-730, 0x1.0fa93f04914c8p-773, 0.0, 0.0, 0.0,
     0x1.e58120071202ep-1010, 0.0, 0x1.bc6a452311d0cp-730, 0.0,
     0x1.496d74d390971p-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58cfc997d4bebp-764, 0.0,
     0.0, 0x1.8510bd6f5f22ep-371, 0x1.e3b206af468cbp-906, 0.0, 0x1.5bfbda4bd819ep-356,
     0x1.ba2f1e2f20b0ap-124, 0x1.e4e1bc71d0f69p-706, 0.0, 0x1.5b86c16ec5aa7p-530,
     0x1.687f92b39a243p-219, 0x1.0b905958046c9p-737, 0x1.4438e13932844p-340, 0.0,
     0x1.dfc8c0ffffcdbp-751, 0x1.db5e8f33a7de6p-796, 0x1.9d133c0407b96p-417, 0.0, 0.0,
     0x1.9e85ed268386dp-218, 0.0, 0x1.e380906edaea2p-681, 0.0, 0x1.c8f43b84979a8p-440,
     0.0, 0x1.df90c36181a35p-988, 0x1.f3dc0d18ff91fp-91, 0.0, 0x1.6e6df704e76ap-392,
     0.0, 0x1.f73ab5848573ap-82, 0.0, 0.0, 0.0, 0x1.c36868e349446p-616, 0.0,
     0x1.dc8793b3c9be8p-1013, 0.0, 0x1.138b4c8360773p-770, 0x1.bfc56e81e3ec6p-363,
     0.0, 0.0, 0x1.6cc08fa156075p-813, 0x1.e646b7eaa58c1p-950, 0.0, 0.0, 0.0,
     0x1.0a13503e860fbp-8, 0x1.9662b089d75dep-872, 0x1.60e6d123e1b88p-715, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ddd18d4f0c7d1p-811, 0x1.1b4fd4304ecf6p-121,
     0x1.1a3f302b48fe3p-910, 0x1.5541fa1d0bb75p-207, 0x1.8f575a5cccc4fp-203,
     0x1.dde98903bd0afp-569, 0x1.b633e498b0634p-951, 0x1.a9d67fc5ddce3p-68,
     0x1.e697b2fbba08p-937, 0.0, 0x1.c62a508f79f4cp-784, 0x1.1b19ae286c323p-324, 0.0,
     0.0, 0.0, 0x1.2c6ec8d703b87p-922, 0.0, 0.0, 0.0, 0.0, 0x1.6f64b071b2d23p-720,
     0.0, 0.0, 0x1.437677ef7bfb4p-436, 0x1.f2731ddb1e801p-888, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14bd0a032cb25p-830, 0x1.67c224a8aa8d4p-212,
     0x1.1372c9d9ed177p-1000, 0.0, 0.0, 0.0, 0x1.d40b431c6f498p-114, 0.0,
     0x1.075370dc1babp-539, 0x1.99d7488beb959p-109, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74cdee8a0ceabp-178, 0.0, 0x1.4532b0d7db027p-28, 0x1.f2a53a245f0b9p-200,
     0x1.5d87b856c26e9p-799, 0.0, 0x1.9aa799f96c08cp-747, 0.0,
     0x1.88d2e4c05c2cap-1006, 0x1.21c0c244ce4dp-318, 0x1.42fb686da899cp-148, 0.0, 0.0,
     0x1.9d27ce41410bep-662, 0x1.d032f5a56ebb9p-967, 0x1.d6f728ee57ae6p-969,
     0x1.cebf3013645b5p-623, 0x1.a4d5f3def20d8p-701, 0x1.7f425f57efc42p-238,
     0x1.eaf79356d801cp-969, 0x1.b1db18acb04b1p-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bc6ceb7f268fp-183, 0x1.da0411be94661p-587, 0.0, 0.0, 0.0,
     0x1.01e7289ce823bp-534, 0x1.24fcf9c63d7c5p-501, 0x1.0dfc9ffb45902p-625, 0.0, 0.0,
     0x1.f701b8579027cp-442, 0x1.7c96c8ae90ec9p-249, 0.0, 0x1.aae2e0279306fp-528, 0.0,
     0.0, 0x1.db4f78e7e7d24p-400, 0.0, 0x1.c79b1fbbad197p-464, 0x1.a904e705a249bp-522,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.783636decd69cp-288, 0x1.076bfcd74018dp-501,
     0x1.96db2bc8b1b8p-599, 0x1.ca211460cf111p-678, 0.0, 0.0, 0x1.04ef0b5def82p-464,
     0x1.cfd5a0b5c1014p-343, 0.0, 0.0, 0.0, 0x1.5dcdf8a6f8e24p-721,
     0x1.91d1ade1e97c9p-814, 0x1.f827cc25ac552p-141, 0.0, 0.0, 0.0,
     0x1.e81b6b3f1b497p-568, 0.0, 0.0, 0x1.566c71b47bb87p-810, 0.0, 0.0,
     0x1.3db02ddfe0a9cp-126, 0.0, 0x1.da60555543a57p-152, 0x1.b1f496733700fp-64,
     0x1.c6f86673fa0cep-267, 0.0, 0.0, 0x1.20dc8ce86fcc1p-498, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7afe5f6d73dddp-672, 0.0, 0x1.6c20f8ee7a15bp-376, 0.0,
     0x1.57c095423a7a2p-403, 0x1.8b88a0bb37122p-127, 0x1.86f0e3b2eed73p-455,
     0x1.16968ab2c4d65p-430, 0.0, 0.0, 0x1.7009749894bcp-391, 0x1.1b3d5d89d5ae7p-581,
     0.0, 0x1.41a822acc396bp-418, 0.0, 0x1.a5ad8117b4378p-982, 0.0,
     0x1.e17c727b1cc1dp-959, 0.0, 0.0, 0.0, 0x1.d26e51b242cc4p-693,
     0x1.91b8f89fbc9e3p-731, 0x1.1a8060946bd89p-10, 0.0, 0x1.8fafef8a76ce6p-401, 0.0,
     0.0, 0x1.d3aa570293775p-826, 0.0, 0.0, 0x1.87fa7da881d57p-228,
     0x1.ca03b5007519p-189, 0.0, 0x1.8fa20df967983p-761, 0x1.d17aec22cd0dap-314, 0.0,
     0x1.1bf0b495f5fdfp-107, 0.0, 0x1.a92adfb6ccb45p-200, 0.0, 0x1.38ab5ed75b089p-157,
     0x1.6f3f28d568ba4p-145, 0.0, 0.0, 0x1.ef47bdf69e037p-322, 0.0, 0.0, 0.0,
     0x1.023ed45115a11p-790, 0.0, 0.0, 0x1.4cea7c1cdd006p-390, 0.0,
     0x1.8f0414dfc375ap-972, 0x1.854d1196ad411p-15, 0.0, 0.0, 0.0, 0.0,
     0x1.73289c349c627p-686, 0.0, 0x1.a09981cfa063fp-901, 0.0, 0x1.ef496516bd5d1p-943,
     0x1.819b77c28e18ap-874, 0x1.6b3496d65fcebp-366, 0.0, 0x1.43d2585ae3954p-507,
     0x1.e73c072fccb37p-539, 0.0, 0x1.74c984273a56dp-99, 0x1.099e761f5fc1ap-155, 0.0,
     0x1.7a976e0a7ed0ap-683, 0x1.adcee57877ecfp-661, 0.0, 0x1.3ca1d2b9e0992p-476,
     0x1.68c3b35fda84ap-751, 0x1.58b5f944abd3ap-502, 0.0, 0.0, 0.0,
     0x1.948616c3415afp-687, 0.0, 0.0, 0x1.e5076d1093f1dp-733, 0.0,
     0x1.9cac744fe3b8fp-250, 0x1.619921d8367dfp-841, 0.0, 0x1.8620281382827p-413,
     0x1.e37cdaad5d63fp-986, 0x1.1db4e1f28d51p-650, 0x1.68debbbb97924p-1004, 0.0, 0.0,
     0x1.bde61dc180a55p-105, 0x1.377aa318d65f6p-265, 0x1.3831f05c83aadp-71, 0.0,
     0x1.2d47979661d99p-821, 0x1.664a9926e5356p-207, 0.0, 0x1.0c9992f2b3d74p-581,
     0x1.6d5a4b6535562p-540, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_cospid4_u05kvx(tmp0);
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
    printf("Sleef_cospid4_u05kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_cospid4_u05kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
