/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d1_u35purecfma.c --function \
 *     Sleef_finz_exp2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.91b98b869f408p-786, 0x1.29fafb56a5997p-819, 0x1.343ba19d1cab6p-178,
     0.0, 0x1.588f8194e166bp-598, 0.0, 0x1.545d0aba9f6dap-502, 0.0,
     0x1.d3297c66258bap-649, 0x1.afa960254b5d4p-657, 0x1.c6c9ae48bb738p-197, 0.0, 0.0,
     0x1.f1278e99e3503p-749, 0.0, 0x1.3da9bae3494a1p-848, 0.0, 0x1.9a1f09e7c0562p-836,
     0.0, 0x1.af7318df32d5ap-525, 0.0, 0x1.9537aa35519d8p-788, 0.0, 0.0, 0.0,
     0x1.04404fa112838p-751, 0.0, 0x1.9200495f1aa87p-462, 0.0, 0.0,
     0x1.84028e89ae7a2p-388, 0.0, 0x1.211abfc43699dp-330, 0.0, 0.0,
     0x1.e9e0489ca1f4p-546, 0.0, 0.0, 0x1.0ef64306852cfp-454, 0.0,
     0x1.d26263c94dc8ep-289, 0x1.f45152a52aecap-117, 0.0, 0x1.b66cf799ef58ap-563, 0.0,
     0x1.1212f02bb4269p-254, 0x1.c9e7e740c999cp-798, 0x1.b9118046b189ep-577,
     0x1.a9594e21e44ffp-208, 0x1.e818372b91058p-389, 0.0, 0.0, 0x1.2da2886f5205cp-319,
     0x1.4aed048582e3fp-56, 0.0, 0.0, 0x1.fab3fad86301ap-36, 0.0, 0.0,
     0x1.eb5a21f6c07e1p-608, 0.0, 0.0, 0.0, 0x1.a3f32ace91acp-808,
     0x1.aa65eecf20c14p-351, 0x1.360a983c04119p-934, 0x1.7ddacef0b7d44p-988, 0.0,
     0x1.a7211200fe607p-520, 0.0, 0.0, 0x1.dd09b264e4669p-161, 0.0,
     0x1.bacaaaf2e18afp-871, 0.0, 0x1.cd09312a16555p-402, 0.0, 0.0, 0.0,
     0x1.a41fb9adf552dp-557, 0x1.c31a2844f3839p-492, 0x1.3c1937bcbae9fp-762,
     0x1.1d07ae2f00304p-830, 0.0, 0x1.e21f0a3a9fadp-377, 0x1.a29ef5f4915d1p-1019, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d420c9f6542e3p-171, 0x1.f50c94eac60d9p-582, 0.0, 0.0,
     0x1.5c63fba46eeccp-803, 0x1.d43894c50c114p-189, 0.0, 0.0, 0.0, 0.0,
     0x1.df04b0aece522p-194, 0.0, 0.0, 0.0, 0.0, 0x1.7d70bd37aa251p-555, 0.0,
     0x1.949ab0330bebep-47, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8674a8a2e97ffp-505,
     0x1.4b32969fa190bp-646, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a8adbbdd2802p-222,
     0x1.ac9ff67ee0524p-438, 0x1.e61d07a5e1503p-326, 0x1.744cbb4cc1515p-605, 0.0,
     0x1.0b33dea09f6bcp-199, 0.0, 0.0, 0x1.fd5291bec4c47p-741, 0x1.23791ad918c1cp-640,
     0.0, 0.0, 0x1.ba26dc31b7ecp-70, 0x1.e53f3304d7ec9p-100, 0.0, 0.0,
     0x1.e5e4181d03826p-147, 0.0, 0.0, 0.0, 0.0, 0x1.789353368754bp-326, 0.0, 0.0,
     0x1.23803f4111f3ap-632, 0x1.83380859be997p-786, 0.0, 0x1.dde463c0ca502p-982,
     0x1.922637419f5d6p-870, 0.0, 0.0, 0x1.29326fe784a8ep-311, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41accd83ffcfap-639, 0.0, 0x1.d70eb09d1899p-342, 0.0,
     0x1.beee4ef94a25ap-1002, 0x1.743903f2a03f4p-321, 0x1.3a3ba933697adp-980,
     0x1.c7e7ae4b10f4bp-907, 0x1.e54c513469713p-531, 0x1.6f062e83d86dcp-642, 0.0, 0.0,
     0x1.dc92d320d56c8p-951, 0x1.4f4a07c19783dp-837, 0x1.d2dc712bcab85p-930,
     0x1.91a1142e9d968p-948, 0x1.6cf48ba423645p-368, 0x1.d994de5b287b8p-1004,
     0x1.7d78722f76283p-520, 0.0, 0.0, 0x1.936d6a1e93547p-893, 0x1.ba9c3ebb16e1dp-930,
     0.0, 0x1.011683c2d60a4p-507, 0.0, 0x1.94f3aebd237f9p-105, 0x1.a877f4c31fcd9p-202,
     0x1.8d1b9020f908ap-469, 0.0, 0x1.c0c5a47eb301ap-624, 0x1.963a53d1232e5p-193, 0.0,
     0.0, 0x1.492856b34f4adp-842, 0.0, 0.0, 0x1.af6b7a921e148p-552,
     0x1.2813672ee52bbp-185, 0x1.2700bc578ebc6p-593, 0.0, 0.0,
     0x1.aff59083159a2p-1014, 0.0, 0.0, 0x1.716e2c7fd5f81p-1, 0.0, 0.0,
     0x1.47b06dd9d7b8p-273, 0.0, 0.0, 0x1.19bd962e7198dp-897, 0.0,
     0x1.a21c04b7ca98p-869, 0x1.2fdb784eee48ep-324, 0.0, 0.0, 0x1.1337b32755b8ep-99,
     0.0, 0.0, 0x1.6a9d757293265p-711, 0x1.af3aa9d44c57ep-448, 0x1.a6376f8311161p-443,
     0.0, 0x1.c7e33b6d2837dp-1000, 0x1.f4777ae06c6c1p-132, 0x1.be8015eedb543p-381,
     0.0, 0x1.73828ee8bc746p-806, 0.0, 0.0, 0x1.42a4a19969d54p-691,
     0x1.453f33b50f4b8p-671, 0x1.16bd98af50851p-694, 0.0, 0.0, 0x1.8e698209907ffp-106,
     0.0, 0.0, 0x1.fcd6d9df91cfp-999, 0x1.cea57b21efe06p-233, 0x1.79a8db09900d2p-522,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.25b8adfdb9e96p-744,
     0x1.d2a6de2996354p-105, 0.0, 0.0, 0x1.a320dd8507b32p-668, 0x1.d0b22a87ae39fp-890,
     0x1.9495eeb1a6642p-449, 0x1.a5042fca2d825p-787, 0x1.7a9787871b26p-301, 0.0,
     0x1.a9c3840b71289p-286, 0x1.e804682ccd723p-162, 0.0, 0x1.8746890816c77p-893, 0.0,
     0.0, 0x1.bdca725657234p-649, 0.0, 0.0, 0.0, 0x1.e187c40dddf7ep-658, 0.0, 0.0,
     0x1.47736f64eb594p-986, 0x1.f3b39b9e3aacfp-679, 0.0, 0x1.baf13a6c2ce98p-608,
     0x1.a02f48a78903ap-662, 0.0, 0.0, 0x1.b56e08721ceadp-467, 0.0, 0.0, 0.0,
     0x1.e0f047c3c14d1p-618, 0x1.6379b440f6dd9p-882, 0x1.843bb1ea053e4p-681, 0.0,
     0x1.937351bcfc754p-781, 0.0, 0.0, 0.0, 0x1.c9e11b576945dp-344, 0.0,
     0x1.edec79c41e5c9p-437, 0x1.f9969a9e13d5ap-892, 0.0, 0x1.6b5e95d60cd71p-486,
     0x1.7cd67d14527e5p-165, 0.0, 0x1.94ebc8e00fbafp-872, 0x1.9a4ad8dba8875p-460,
     0x1.86c221d68e149p-221, 0x1.4ea1143cc4134p-120, 0x1.80f7a80fcfbc7p-515,
     0x1.144afaac75d76p-968, 0x1.566d2e815894ap-658, 0x1.2e362b24eb25ep-974, 0.0, 0.0,
     0x1.8a1e7fad6301ep-941, 0x1.c0b4f20439dfdp-1010, 0.0, 0.0,
     0x1.c2dd5ad89ea87p-340, 0x1.afacaff91bc85p-76, 0.0, 0x1.1f6fdf322b18ap-862,
     0x1.7ba84e61bc9bcp-126, 0.0, 0.0, 0x1.db1b2792c9fecp-399, 0x1.031d59883e78p-357,
     0x1.32f2e5e76b3e9p-324, 0x1.8d1595ae715d2p-468, 0x1.6e70fbed73127p-361, 0.0, 0.0,
     0x1.f4b2c812b58b4p-920, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b6a940cbe644ep-998, 0x1.9feb993ebd16ep-347, 0x1.dba5f392f97e9p-719,
     0x1.8f811fb882a82p-482, 0x1.8402f3f9876dep-768, 0.0, 0.0, 0x1.f3d93b6051e0cp-809,
     0.0, 0x1.8b18a60b8ab0dp-548, 0x1.13a901a3fc15dp-879, 0x1.b9c86b0a460edp-880,
     0x1.ce8aab8742b26p-234, 0x1.9910703f8d90bp-358, 0.0, 0x1.802a8cd8882ccp-562,
     0x1.1f0c13e2a9c5dp-503, 0.0, 0x1.d2093a993ce75p-364, 0.0, 0x1.0496aaed273dfp-426,
     0x1.e47e09a1fbbaap-177, 0x1.0cad36e2bde14p-652, 0x1.527eb648eacfap-988, 0.0,
     0x1.c2818831f83c6p-986, 0.0, 0.0, 0x1.3ca1e44ddec89p-876, 0.0,
     0x1.5302fa316f921p-122, 0x1.aaec4b3c7b354p-587, 0x1.fc38d1213f55bp-135,
     0x1.084f357bd7f63p-62, 0.0, 0.0, 0x1.b5beed0d27d5cp-981, 0.0,
     0x1.c533058d6a84bp-842, 0x1.d4b0dfe77ff9fp-478, 0x1.dcd4f3c7ad31ap-816, 0.0,
     0x1.b1167fe055beep-731, 0x1.145dd82cdded9p-466, 0.0, 0x1.f6e42b311fccep-965, 0.0,
     0x1.a7636dea15cfp-154, 0x1.9a59cb6d5d861p-492, 0.0, 0x1.a6d837dbf8bb5p-523,
     0x1.44eb0f0c4c7e5p-656, 0.0, 0x1.e5b832a423827p-652, 0.0, 0x1.b94201a38a349p-548,
     0x1.6ef9c536dd718p-915, 0.0, 0.0, 0x1.f4332d0cf6e1ap-205, 0.0,
     0x1.e749fb8422edfp-737, 0x1.aa4308d6e429cp-684, 0x1.4ed7aea45dc0bp-808,
     0x1.9f1c8d7e91ca7p-829, 0x1.a6cd77f410719p-622, 0.0, 0x1.424081a76985ep-380, 0.0,
     0.0, 0.0, 0x1.a57326a4bffbcp-262, 0.0, 0x1.c81d18332959bp-388, 0.0, 0.0, 0.0,
     0.0, 0x1.837d4e58b00dbp-920, 0.0, 0x1.c270cb22cfb68p-733, 0x1.61b3bb59a93aap-581,
     0.0, 0.0, 0x1.a015096c905bdp-471, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea27588bd4f3fp-134, 0x1.a2213971a09fdp-294, 0.0, 0x1.429a4402b09c3p-949, 0.0,
     0x1.c78641dbca5a2p-178, 0.0, 0.0, 0x1.4e46429f4cfap-984, 0x1.9f29e9ea48cccp-340,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce7e697c3af09p-19, 0x1.a33e447b618ebp-183,
     0x1.77b92d0fdb364p-886, 0x1.ad5668f092167p-932, 0.0, 0.0, 0x1.7c1b6ef874785p-124,
     0.0, 0x1.8a030d897a383p-105, 0.0, 0.0, 0.0, 0x1.525ddb07d4cep-581, 0.0,
     0x1.86c8b72cd2402p-629, 0x1.13d0217a8c882p-670, 0.0, 0.0, 0x1.19b7b8fea790fp-131,
     0.0, 0.0, 0x1.25e95efd7112fp-631, 0x1.a85f08f9c62a5p-623, 0x1.30b687f3e07bep-830,
     0x1.7c3f9125296acp-223, 0.0, 0x1.cfb29d90c7944p-663, 0x1.b28d814e83e72p-570, 0.0,
     0x1.ea8122956ac23p-722, 0x1.4470d5fbfcb82p-864, 0x1.5c7b43e1241ap-530,
     0x1.59a083481ad33p-314, 0x1.6265313111db3p-749, 0x1.f8b64e85579b5p-721, 0.0,
     0x1.5137ccfb6b6e8p-528, 0.0, 0.0, 0.0, 0x1.e075cb7a0001ep-898,
     0x1.70177510c0f3bp-763, 0.0, 0x1.4657d88e475acp-293, 0x1.66b4a7a3e38e8p-506, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa29de85922b9p-439, 0x1.5e6c06f6314a4p-657,
     0.0, 0.0, 0x1.85dc29212f17dp-624, 0.0, 0x1.1d61d0e58c574p-629, 0.0, 0.0, 0.0,
     0x1.18145660c26a5p-537, 0x1.e3dc36c2c51b6p-45, 0.0, 0x1.dda1f8f5646f8p-477,
     0x1.692172d00d6a7p-771, 0x1.9274b991c0f03p-971, 0.0, 0x1.c39dcfd44dacbp-621, 0.0,
     0.0, 0.0, 0x1.6c3b79ee57329p-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7de4a813b4e09p-324, 0x1.1911a7e447107p-178, 0.0, 0x1.55321cd792471p-653,
     0x1.a66708879c762p-716, 0x1.5316959734f48p-240, 0x1.78ca204d5cd77p-42, 0.0, 0.0,
     0x1.1048f9c935349p-904, 0x1.ac79fc600de8p-979, 0x1.3ab7eac39dd9dp-163, 0.0,
     0x1.68413916b60b4p-523, 0x1.90b514bd0f394p-394, 0.0, 0x1.6f263a1f7df16p-581, 0.0,
     0.0, 0x1.a8f806a4b2f1p-200, 0x1.8cc2e7d2bdecbp-295, 0x1.85bb0d8e41878p-291, 0.0,
     0x1.251efa010f545p-857, 0x1.5379fab7cf085p-453, 0x1.4cff72bd6f729p-394,
     0x1.88e7c1b88e5abp-870, 0x1.c702494592314p-113, 0.0, 0x1.578cfc4c218d4p-1010,
     0.0, 0.0, 0x1.90ea18375470ap-179, 0x1.4273dd9a8f26p-114, 0x1.4d07131e97fc1p-859,
     0x1.80a2085fac8cbp-628, 0.0, 0x1.cc23b03ff141bp-42, 0x1.4f9422139cbe1p-597,
     0x1.5f4d26eee974fp-370, 0.0, 0.0, 0.0, 0x1.cab7a4def8c6dp-918,
     0x1.223dd2043d2adp-821, 0.0, 0x1.55eb1b5594f0dp-38, 0.0, 0x1.208fe6cb5d1c5p-578,
     0x1.aace722d1c97ep-834, 0.0, 0.0, 0x1.aa3488b3e34fap-798, 0x1.2676450dfa15bp-251,
     0.0, 0.0, 0x1.a102eb7b3b96ep-46, 0.0, 0x1.e242638f006f1p-338, 0.0, 0.0, 0.0,
     0x1.f7abaac145c4ap-474, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4288bd6275027p-515,
     0x1.7da02590cadc1p-452, 0x1.14a306c2b4531p-891, 0x1.f670edbc936bfp-108,
     0x1.c76ac357c9465p-155, 0x1.85e4ac08d8a94p-568, 0x1.630146ca2fcecp-642, 0.0,
     0x1.6e382a0a9a0a9p-725, 0.0, 0.0, 0.0, 0x1.57971e8a244efp-419,
     0x1.135a800d4966bp-56, 0.0, 0x1.7a7b0560e438bp-713, 0.0, 0.0, 0.0,
     0x1.99c9d5e92981p-1009, 0x1.bc66ab500ecfep-367, 0x1.2cac78493c5f5p-1007,
     0x1.4c777ea71909bp-15, 0x1.7aa9d31601059p-864, 0x1.9faf50c350e99p-363, 0.0,
     0x1.d92d14502cfe3p-931, 0.0, 0.0, 0x1.30ba60fda7fefp-1021, 0.0,
     0x1.314971c9263b2p-287, 0.0, 0.0, 0.0, 0.0, 0x1.bb47eac076fa9p-350, 0.0,
     0x1.666b7b72a0e77p-448, 0x1.1e2933d87525fp-385, 0.0, 0x1.eb85ecdc65783p-524, 0.0,
     0x1.dd730dbc544d9p-123, 0.0, 0x1.bf231ffbeb073p-333, 0x1.847b3a428de74p-399, 0.0,
     0x1.35dffd43ae4d3p-425, 0x1.1f86cf5fbc0bdp-526, 0x1.1f52aadceb266p-921, 0.0, 0.0,
     0x1.c8bb178f5f01fp-160, 0.0, 0.0, 0x1.4c7a3c3d74c94p-357, 0x1.bbb5d6f5dd62bp-352,
     0.0, 0x1.2cff7278ee887p-802, 0.0, 0x1.fe29332056d38p-152, 0x1.321143862dd3p-338,
     0x1.9f1ac14624f09p-400, 0.0, 0.0, 0.0, 0.0, 0x1.8046f47226956p-544, 0.0,
     0x1.0765a7badbe85p-136, 0.0, 0.0, 0x1.cd5cb056de05dp-104, 0x1.55d1d7476812bp-275,
     0x1.bb3347f3abc5p-685, 0.0, 0.0, 0x1.e22c52d95b3fep-245, 0x1.54ddb83d23a1dp-274,
     0x1.aee1608534c3dp-700, 0x1.38e2964d3a59cp-961, 0x1.9568df8011218p-336,
     0x1.28666e42059ccp-162, 0x1.d909436bf2cccp-126, 0x1.c7c57292f338ep-857, 0.0,
     0x1.b82172bef0453p-256, 0x1.0408efb27ebefp-989, 0.0, 0x1.fb04882db388ep-643,
     0x1.9ae41ff201349p-128, 0x1.44cbfb78eeea4p-909, 0.0, 0.0, 0x1.a79b270051b0ep-603,
     0.0, 0.0, 0x1.5a8fcc463ffeap-477, 0.0, 0.0, 0.0, 0x1.6aaf6795d78b9p-425, 0.0,
     0.0, 0x1.c044568bb650cp-533, 0.0, 0x1.db2e76feca11p-875, 0x1.b3462e53fd145p-654,
     0.0, 0.0, 0.0, 0x1.a35663132e13p-663, 0.0, 0x1.5cd10e4a6ec5ap-277, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.dabfbca0cd90ap-253, 0.0, 0x1.aec24a93db758p-866,
     0x1.25d91339f7ee5p-369, 0.0, 0.0, 0.0, 0.0, 0x1.c976168c105f9p-245, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.804df0a2be88cp-54, 0.0, 0x1.67f4a6d560bdep-897,
     0x1.d44d02f3781b6p-343, 0.0, 0x1.d3955a47c7ddfp-584, 0.0, 0x1.97a03b676401p-805,
     0x1.957794b02fe26p-545, 0.0, 0.0, 0x1.1472fc520ec94p-787, 0x1.23ad5ce642eap-327,
     0x1.1be0c84fa58f4p-392, 0.0, 0.0, 0x1.34f5f34633cf5p-381, 0x1.b9c7016f3251fp-846,
     0x1.5ee1a506a890ep-769, 0.0, 0x1.f2424cf4d8c52p-994, 0.0, 0x1.7f786251feba9p-580,
     0.0, 0.0, 0x1.e0d11d32701dap-891, 0.0, 0x1.b4f1ba8a57e5cp-707,
     0x1.1b0aa33e310d3p-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11a380a2f1593p-191,
     0x1.75d6d0ed3adaep-205, 0.0, 0.0, 0x1.38b1586c8d596p-758, 0x1.cc9c2e11606f3p-436,
     0x1.894ab673133cbp-93, 0x1.3d7d302fac0bap-605, 0x1.e01e9bbac7696p-269,
     0x1.a276e48f68c07p-617, 0.0, 0x1.82c6f2a6b03e7p-828, 0.0, 0.0,
     0x1.2edd9d89a4a03p-891, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1cfd3ae12b564p-754, 0.0,
     0.0, 0.0, 0x1.63288e120fd5dp-671, 0x1.1051bc48eaa81p-255, 0.0,
     0x1.8d12ddd8d9797p-442, 0.0, 0x1.0256c267304aep-954, 0x1.b09328e7faecap-254,
     0x1.d21d6ed773456p-828, 0.0, 0x1.01c9185df0cb1p-421, 0x1.81262969bbb4ep-963, 0.0,
     0x1.0c0eec9f2c57ap-165, 0.0, 0.0, 0x1.cfd393ac58c7bp-611, 0x1.4b624dad8b281p-667,
     0x1.076dd8ffc2a9bp-359, 0.0, 0x1.8c3240eaa0138p-738, 0.0, 0x1.89917c3bf8c55p-141,
     0x1.054e047019201p-850, 0x1.dd89007349c01p-127, 0.0, 0x1.7326ee8a5b4bcp-161, 0.0,
     0x1.494f95c9ec50fp-579, 0.0, 0.0, 0.0, 0x1.0518412785ad3p-36, 0.0,
     0x1.9d5f9bd6afe55p-971, 0.0, 0x1.068e8255ced09p-292, 0x1.634b5f8a50aefp-774, 0.0,
     0.0, 0x1.ce838c503cbddp-611, 0.0, 0x1.0262734ede06p-319, 0.0,
     0x1.9b88164f90b5fp-255, 0x1.04644d70fa72bp-499, 0.0, 0.0, 0x1.0b75ff76e202dp-248,
     0x1.674ec016e1d9ap-493, 0x1.8d8e92adda6d3p-925, 0x1.6315c8d271384p-73,
     0x1.5fd2b0775f76fp-132, 0x1.9aa1cd6b7851p-738, 0x1.19b2d121545dcp-797, 0.0,
     0x1.3e15cc50c8d2ap-338, 0x1.e14624bac56a8p-408, 0x1.6df6bbc26c5a4p-378, 0.0, 0.0,
     0x1.e4ac2c84fa9ap-988, 0x1.b7fba59d9e0acp-163, 0x1.0f9a8f009ab33p-131, 0.0, 0.0,
     0x1.122f3709befeap-360, 0.0, 0.0, 0x1.53da9c5d59b8dp-836, 0x1.61a6cdfcad718p-862,
     0.0, 0x1.fd75e7da16aedp-559, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee808074b56eep-40, 0.0,
     0x1.d473591e313f5p-496, 0.0, 0.0, 0.0, 0x1.2405222a5a837p-873,
     0x1.c48d893b34451p-192, 0x1.e1de91f9f069cp-198, 0x1.a8345136fa354p-94,
     0x1.ba185dd4d2c67p-1014, 0.0, 0x1.a1754aef79b63p-668, 0.0, 0.0,
     0x1.b160795b3eeadp-597, 0.0, 0.0, 0x1.baae84e969462p-360, 0x1.60d201955c288p-585,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc28135fe5276p-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16fdac9734968p-707, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.27041935873fdp-185, 0.0, 0x1.cfcafd16dd6c1p-39, 0x1.65e3e174436bep-652, 0.0,
     0x1.1e96223924647p-934, 0x1.1e9406b255acp-536, 0x1.f9407f8f19f15p-96,
     0x1.915a0e5b8a02bp-738, 0x1.768c8b291b1ep-183, 0.0, 0x1.1c57dfc6edb6fp-1010, 0.0,
     0x1.86777fcc379p-396, 0x1.367be86fc5974p-240, 0x1.a373600e7dd3bp-708,
     0x1.fd08c2ffc841fp-722, 0.0, 0x1.96a6575e0720bp-932, 0x1.847ee4a31bb22p-7,
     0x1.56e05e83f8464p-1018, 0x1.3c6b723d14451p-555, 0.0, 0.0, 0.0,
     0x1.7542f2e87f428p-863, 0x1.f4937cd37c796p-446, 0x1.0054aff576066p-915,
     0x1.f9001dce13319p-159, 0x1.a7c364ffed341p-419, 0x1.528d8cac808e7p-985, 0.0,
     0x1.79b762364db43p-321, 0x1.42915427898c2p-580, 0x1.9bed226b0454ep-275,
     0x1.69237d91b65ffp-900, 0.0, 0x1.82ae6d8af7105p-735, 0x1.2a54b43dc3f09p-52, 0.0,
     0x1.20e4b8b12cc5ap-40, 0x1.bdee7c5cf53e6p-633, 0.0, 0.0, 0.0,
     0x1.ae2cc716da94fp-393, 0.0, 0.0, 0x1.364ff1d4813e8p-896, 0.0, 0.0,
     0x1.9d9c75b33fc3p-566, 0x1.075ac3c3717cap-749, 0.0, 0.0, 0.0, 0.0,
     0x1.f05ae3a80c8e9p-570, 0.0, 0.0, 0.0, 0x1.0ddd8becda638p-149, 0.0,
     0x1.7173662a28f58p-304, 0.0, 0.0, 0.0, 0.0, 0x1.8b3ee4b19d7aep-559, 0.0,
     0x1.c1acf9eae3fccp-313, 0x1.10d41aee2a3d2p-121, 0x1.6e2f5eb6075c5p-382, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6a6df24322b5cp-497, 0x1.3be043592e049p-321,
     0x1.13f79bb90daf7p-558, 0.0, 0.0, 0x1.087c67f4fca74p-615, 0.0, 0.0, 0.0, 0.0,
     0x1.b44f80205208ap-60, 0x1.e302df4caddbap-881, 0x1.d63e8b3675f8cp-790,
     0x1.ff69ca8e2b908p-339, 0.0, 0x1.c4d7a96ad7ff5p-396, 0x1.30d29c78e0e93p-991
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
            tmp1 = Sleef_finz_exp2d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_exp2d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
