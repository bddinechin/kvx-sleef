/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd1_u35purecfma.c --function \
 *     Sleef_tanhd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.82bffee668795p-908, 0x1.6ab60b57afdbap-456, 0x1.0d43ff2d91bebp-216,
     0x1.1b6a590bcfcep-954, 0.0, 0.0, 0.0, 0.0, 0x1.d8df1428dc8ccp-873,
     0x1.7ef7af0f362c5p-776, 0x1.42d0d7ee8b9ep-538, 0.0, 0x1.5f5ed19271e52p-289, 0.0,
     0.0, 0.0, 0.0, 0x1.1c415ce06c4e3p-112, 0x1.04f5d6f70da68p-575,
     0x1.36bc81dba4511p-206, 0.0, 0x1.8bd713f2239a1p-516, 0.0, 0.0,
     0x1.bda8f8008ead7p-65, 0.0, 0x1.db05395743453p-588, 0.0, 0.0, 0.0,
     0x1.f4a27f4e184e5p-224, 0x1.6f28336c75e6p-195, 0x1.bfdec6871e2e6p-770, 0.0,
     0x1.7cbba4bc29b78p-821, 0x1.8900a0991958dp-535, 0x1.afa35bdc851e9p-38, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.266ea6883b426p-293, 0.0, 0.0, 0.0, 0.0,
     0x1.fe9e2440cf52fp-536, 0.0, 0.0, 0.0, 0x1.b20969f92b9c9p-338,
     0x1.ebf2c9032c39ep-726, 0x1.ea2b44f66a985p-1018, 0.0, 0x1.5d18ee8c68f76p-897,
     0x1.6f9bba93567bap-459, 0.0, 0.0, 0.0, 0.0, 0x1.27afc8cb04655p-526,
     0x1.5a8ca138dc386p-174, 0.0, 0x1.99a463dd51e57p-952, 0x1.9a20c865bf887p-136, 0.0,
     0.0, 0x1.0313a561aa3fap-567, 0x1.fd6335d2a08f7p-885, 0.0, 0x1.c3f932b7f1ecp-455,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fdfc3d5dcf9e1p-21, 0x1.bd56b92318e98p-802,
     0x1.49c8e017c86f9p-75, 0.0, 0.0, 0.0, 0x1.ebb2a967c317ep-329,
     0x1.ed8b52097cb97p-55, 0.0, 0x1.2d408d1a3596bp-722, 0x1.9c8e3b808a195p-67,
     0x1.aac1b50e7dae2p-634, 0.0, 0x1.7139009babc9p-1010, 0.0, 0x1.bf0d17f2b55a1p-757,
     0.0, 0.0, 0x1.61d1e64f9c3b8p-366, 0.0, 0.0, 0x1.e73de92137465p-106,
     0x1.1157f81d74218p-734, 0x1.1e404394efb9ep-932, 0x1.e8c04365d4982p-268, 0.0,
     0x1.57f785aeff037p-376, 0.0, 0.0, 0x1.87f29b7992acp-395, 0x1.d4d6cef47fc49p-231,
     0.0, 0.0, 0x1.6cb248d0ab07ep-527, 0.0, 0x1.b09c18abbea15p-783, 0.0, 0.0,
     0x1.93a700a32c7c6p-134, 0x1.99527b5dd4579p-228, 0x1.2fe4574bfb7dbp-713,
     0x1.98407c2d55714p-63, 0.0, 0.0, 0x1.a7afd7bf901bap-808, 0.0,
     0x1.ac0d61c8b0476p-677, 0.0, 0.0, 0x1.0ac4d400f47bfp-599, 0x1.15da91e56ec15p-152,
     0.0, 0.0, 0.0, 0x1.9fe218d62c803p-736, 0x1.f1da4b9fc43c8p-102, 0.0,
     0x1.0328ba622e353p-927, 0.0, 0.0, 0.0, 0x1.dfef6d5833647p-250, 0.0, 0.0,
     0x1.49155781e9a33p-14, 0x1.0bb610efe524p-185, 0.0, 0.0, 0x1.306ec8feb82e4p-370,
     0.0, 0.0, 0x1.90f77cd8d11f6p-641, 0.0, 0.0, 0x1.c20de59b03fb9p-915,
     0x1.de0a0423d81e4p-418, 0.0, 0.0, 0x1.223c480cc4a82p-483, 0x1.569c40511e84ap-394,
     0x1.6ee76cbe148a7p-505, 0.0, 0x1.911eab2c4b8fp-654, 0.0, 0.0,
     0x1.da96e9df3c52cp-552, 0.0, 0.0, 0x1.93b4b22cd0e6p-674, 0.0, 0.0,
     0x1.067c68aa9b0f4p-590, 0x1.59e38a591d102p-1007, 0x1.727603c6e481dp-855,
     0x1.179b82a0a84e2p-665, 0.0, 0x1.698d2156e641p-339, 0.0, 0x1.c9c9c61c0ec2cp-106,
     0x1.117b273b9edfcp-404, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ff182f5fdc9e3p-104,
     0x1.3b74536576e6ap-165, 0x1.0999414067ecfp-833, 0x1.3cfa6e4d07c15p-1019,
     0x1.e10e3785ba6dbp-516, 0x1.2c137a2cf1d43p-640, 0x1.eeaa03a902bf8p-793, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.64fe92a8f7962p-524, 0.0, 0x1.34810f7686d44p-925,
     0x1.0a438f9c5bb21p-637, 0x1.ae475e9bd8ddcp-513, 0.0, 0.0, 0x1.3430a565d0d3ep-797,
     0.0, 0x1.dcfb113128705p-158, 0x1.153d9ecaa6f81p-810, 0x1.9a617211a472fp-813,
     0x1.85a8c08ddb898p-17, 0.0, 0.0, 0x1.860f5485e9d8bp-561, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a7a75a6ac0caep-340, 0x1.fc784efff821ap-818, 0x1.e907897e36a36p-1004,
     0x1.d314e4a2403e3p-395, 0.0, 0.0, 0x1.b193bdaf05822p-111, 0.0,
     0x1.835fe8337d194p-4, 0x1.dcb1cf12f400bp-943, 0x1.0dc869f7d0bfap-837,
     0x1.684dd5ef981e4p-558, 0x1.18c1ae858b68fp-867, 0.0, 0x1.1ed31f99cdd45p-270,
     0x1.7ccd80209e37bp-744, 0x1.9d1363289857bp-15, 0x1.675867372b9a6p-393,
     0x1.0822c87966212p-339, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a4fde921a8dap-481,
     0x1.bc5af2fa402ccp-322, 0x1.5c3f4750628ffp-927, 0.0, 0.0,
     0x1.af8cc9a810d33p-1018, 0x1.0f8b2f3c87cd5p-400, 0x1.14a5469431bbcp-189,
     0x1.75a7123dfb0aap-662, 0x1.c2460c686322fp-154, 0x1.6af2b98cc180cp-936,
     0x1.cbd6d6ffa79d8p-659, 0x1.5fefd928addc7p-453, 0x1.670305a9ae6dap-476, 0.0,
     0x1.30ffe8e7950ep-96, 0x1.dcb124d8745cfp-318, 0x1.59370c664e7e2p-987, 0.0,
     0x1.7360b72c713a5p-257, 0x1.a776c2af99ab8p-812, 0.0, 0x1.ccdfb117bf398p-155,
     0x1.2bc2823e29c3bp-481, 0x1.a207c029d2e6dp-807, 0x1.1ef1e73ef48e8p-726, 0.0, 0.0,
     0x1.44a18e86550d8p-716, 0x1.a50330648669ap-796, 0x1.418cf3afb0853p-460, 0.0,
     0x1.88a2c1a04812dp-900, 0x1.febf63be91e2fp-31, 0x1.5452d328f1894p-520,
     0x1.8050557f94cacp-495, 0x1.9423001ee6709p-812, 0x1.3981ec0d23327p-847,
     0x1.71d11c8863bbbp-685, 0.0, 0x1.78caced2988f5p-343, 0x1.551964ac24b25p-603, 0.0,
     0x1.c7e948ea5869dp-612, 0x1.af699a23a081ep-676, 0x1.45356b34fda5ap-870, 0.0, 0.0,
     0.0, 0x1.c10427bc4e2e8p-522, 0.0, 0.0, 0x1.518de96bed4b6p-988,
     0x1.8c330392d9f8ep-582, 0x1.83a27f92eb97fp-755, 0.0, 0.0, 0.0, 0.0,
     0x1.a30c3950778d1p-402, 0x1.929c9ef255b9ap-5, 0.0, 0x1.1182a909f9dacp-331, 0.0,
     0.0, 0x1.8bb13cb49d187p-948, 0x1.c44078b66b3b6p-284, 0.0, 0.0,
     0x1.edafa2abca61ep-722, 0x1.e7d92c9d17b45p-210, 0x1.c64417b2e07eap-160,
     0x1.b36b6b8088ea3p-428, 0x1.023a56e749e1fp-290, 0.0, 0.0, 0x1.2962b9dbca6b3p-504,
     0x1.52175f82a8b71p-83, 0x1.bc0d3e91aa9d4p-263, 0x1.cfa267bd768acp-778,
     0x1.f55bace960dedp-635, 0x1.b7e0fbeb54878p-986, 0x1.783b9ed49d387p-658, 0.0,
     0x1.27562d161aa13p-472, 0.0, 0x1.3669d8793221ap-53, 0.0, 0x1.7a6a198b20e12p-618,
     0.0, 0x1.c36a37c6b3953p-117, 0x1.85fa7af1aefebp-347, 0x1.9cc32e86bea01p-767,
     0x1.ebb5e863f4407p-389, 0x1.1e86c678dd623p-337, 0.0, 0x1.e9269b51e827bp-463,
     0x1.84bc5b887a9p-942, 0x1.45964510fb28p-15, 0.0, 0.0, 0x1.75d9449b04439p-285,
     0x1.8e54ec9f84704p-16, 0x1.c0ffda118dfaap-754, 0x1.53acbc3d07c34p-259,
     0x1.1422dbb75d2ap-842, 0.0, 0x1.8887595652356p-768, 0.0, 0x1.a692f0ef300bep-142,
     0x1.7278d746cc739p-360, 0x1.725cf2bba0514p-228, 0x1.b620d02b1baf9p-171, 0.0,
     0x1.4bc0a5d4ddf19p-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a94c9aca8a15ap-135, 0.0,
     0.0, 0.0, 0x1.07fe884b5948bp-426, 0.0, 0x1.1553b6df34b4dp-182,
     0x1.45bb5d93bcde2p-779, 0x1.df4c2ebb97104p-742, 0x1.79c829ccbb24ap-520,
     0x1.e5c85b95206ebp-10, 0.0, 0x1.4dfb846b4fcfp-751, 0.0, 0x1.e1d8a9e1f44c8p-152,
     0.0, 0x1.6589d08c9c2c2p-703, 0.0, 0.0, 0x1.c8f712d80873fp-840, 0.0,
     0x1.c725c721bd1ecp-76, 0.0, 0x1.473bd7ef280efp-980, 0x1.1780074738999p-815, 0.0,
     0x1.fc39cd3f5a90fp-302, 0x1.4f2e75965329dp-102, 0x1.c93987085e141p-128,
     0x1.fac68308d6bfdp-841, 0x1.b75674b0b69aep-79, 0.0, 0x1.9d93314fdb7bap-603,
     0x1.4a453ab37e335p-745, 0.0, 0.0, 0x1.d11e7c127fa86p-652, 0.0,
     0x1.279016bb3c689p-418, 0x1.61a152971d512p-371, 0.0, 0x1.046aeec6743cap-402, 0.0,
     0x1.8435764941ce2p-105, 0.0, 0x1.83117111486bp-825, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bf2068f254623p-78, 0x1.0b52d2dbbc29ap-864, 0.0, 0x1.ffcd995d9bb65p-276,
     0x1.38a272f08d6d8p-468, 0x1.ee84fc767adeep-641, 0x1.48b2b1fccefc1p-755, 0.0,
     0x1.429d7394a6e1cp-709, 0x1.fab8de25ccc27p-395, 0.0, 0x1.5373bc7d25b8bp-594,
     0x1.58d26c8a863efp-383, 0.0, 0.0, 0x1.0f9b0f2a405dap-115, 0x1.f1f48040e1e77p-535,
     0x1.885bf1d6b0cbbp-328, 0.0, 0.0, 0x1.5639f62ccf83dp-357, 0x1.521e96fefa22dp-163,
     0.0, 0x1.0bafe8ed66377p-768, 0.0, 0.0, 0.0, 0x1.af4e23970cc7fp-385,
     0x1.77a52d698e11p-833, 0x1.cc037fa5a9a38p-353, 0.0, 0.0, 0.0,
     0x1.fd8005d6c85e2p-732, 0.0, 0x1.cca1319dfb5bep-891, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.64f42af6a1016p-309, 0x1.095ddedbaa10dp-1018, 0.0, 0x1.03d776dd051c1p-418,
     0x1.89d0f1ebab953p-209, 0x1.4a44d45f0736bp-139, 0x1.176d9baa73d66p-920,
     0x1.fe74afbe226e3p-836, 0.0, 0.0, 0.0, 0.0, 0x1.b606dfe1376ebp-633,
     0x1.5438fdad89139p-939, 0x1.bae29b71c86dcp-858, 0.0, 0x1.b72de0226bd93p-953,
     0x1.5b8e131af561bp-239, 0x1.36830cd9ab7b8p-181, 0x1.5928e53c4aa58p-116,
     0x1.2ca5725105948p-401, 0x1.f6f8a465bb285p-116, 0x1.1a6028e0f907p-18,
     0x1.d726dcfd4fbd2p-1008, 0.0, 0.0, 0x1.eaab19bf5ec6ap-989, 0.0,
     0x1.3f3392e144a86p-69, 0x1.33406d26a0501p-469, 0x1.f212d2399b7f4p-801,
     0x1.e0e58953f676ep-365, 0x1.fd61181b8ddb6p-303, 0x1.f9c42ec39e849p-702, 0.0,
     0x1.9805d19f6a17bp-1013, 0x1.1689c83aff0d5p-239, 0.0, 0.0, 0.0,
     0x1.177c6fd9d6bbcp-19, 0.0, 0.0, 0x1.a09d22be69521p-753, 0.0,
     0x1.aacc061424a44p-578, 0.0, 0.0, 0x1.3d285e43c94cp-560, 0x1.8cd42ce8b9cbcp-888,
     0.0, 0.0, 0.0, 0x1.ae45de1e3b059p-160, 0x1.419cfd864a8ccp-221,
     0x1.c8b2338fed5aap-189, 0.0, 0.0, 0x1.2f4e83d7d4aaep-159, 0x1.5ae60b2fa6ba6p-543,
     0x1.0ce246e8c4d0bp-917, 0x1.c87b45f34f2d3p-759, 0.0, 0.0, 0x1.f59a5ea0fe385p-334,
     0.0, 0.0, 0x1.6f43659f834c8p-187, 0x1.8d397d7a97896p-962, 0x1.c5526c3d7e8fap-490,
     0.0, 0x1.5921d74cc1837p-873, 0x1.bf0203e5752b1p-570, 0x1.5ea725f6a376p-261,
     0x1.cb083ccbb76b1p-87, 0.0, 0x1.1e186a389e0c6p-531, 0x1.b4b3cc128b9dp-142, 0.0,
     0.0, 0.0, 0.0, 0x1.fd72259e45254p-120, 0.0, 0x1.d8ff64d7c9824p-585,
     0x1.03d28a1b3bd3ep-261, 0x1.4409575d598cdp-94, 0x1.57701489de455p-827, 0.0,
     0x1.fa04a7927a619p-328, 0.0, 0x1.ff538cb1b0c03p-716, 0x1.73798f195dfd8p-478, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3c3c683dece7cp-689, 0.0, 0.0, 0x1.c989ac299a57ep-584,
     0x1.07cd666c23063p-46, 0x1.d760e5a22bba4p-297, 0.0, 0x1.167ffa0a1ee97p-37, 0.0,
     0.0, 0x1.84b5156be504p-304, 0.0, 0x1.7ce931513d586p-486, 0.0,
     0x1.694559f12469fp-704, 0.0, 0.0, 0x1.ee3dc6a0050bap-61, 0.0, 0.0, 0.0, 0.0,
     0x1.829add69f7635p-51, 0.0, 0.0, 0x1.87560e6fc6797p-244, 0x1.20817085fb499p-15,
     0.0, 0.0, 0x1.b71150d6bb66dp-432, 0.0, 0x1.6c0fc1efdf92ep-694,
     0x1.e7e09f3f88222p-497, 0.0, 0x1.a07cf7b9d32edp-714, 0x1.dcaee70a5dccap-489,
     0x1.65a96eec5e66cp-424, 0x1.331747b150572p-86, 0x1.ca1300f5038f7p-857, 0.0,
     0x1.597eb233303fbp-424, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fced818a4ccc4p-83,
     0x1.14305a6ba02e4p-227, 0.0, 0x1.eaa02110fbb1dp-1022, 0.0,
     0x1.0317d2db21d14p-599, 0.0, 0x1.42704d1e53048p-966, 0x1.aa0d07762ecc8p-445,
     0x1.120182ff654b4p-651, 0.0, 0.0, 0x1.ef6f4ff2019dap-672, 0.0, 0.0,
     0x1.a249c3adff91p-962, 0x1.ecffc4484f51bp-414, 0.0, 0x1.cb3ebddfd423dp-301, 0.0,
     0x1.263410755689cp-642, 0.0, 0x1.596ece9a592ap-900, 0.0, 0.0, 0.0,
     0x1.2f446ec8c41c2p-51, 0x1.cdf2e3bd8d96bp-674, 0x1.d02d0c2534823p-184,
     0x1.f7b556beb2689p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac361af3b2257p-343,
     0x1.2d70c6b348a09p-924, 0x1.054876f1082f8p-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f62c6b4405a95p-503, 0.0, 0.0,
     0x1.76655a919dae5p-949, 0.0, 0x1.552af20d3d705p-195, 0x1.59f2972f44fdp-5, 0.0,
     0x1.62cca9e34374fp-571, 0x1.cda2b2eb37a1ep-156, 0.0, 0x1.a7c8ad70212edp-749,
     0x1.9284c66badf92p-371, 0x1.86ae724014929p-46, 0x1.4003f61a1841bp-759,
     0x1.69d9a65aac4d2p-470, 0.0, 0.0, 0x1.f3b011011f7b8p-598, 0.0,
     0x1.f9552bbd9fd28p-802, 0x1.23177a82bfcf3p-892, 0.0, 0x1.000e39934a58p-226, 0.0,
     0x1.82dc0d713a0b6p-845, 0x1.39d647cc6d90ep-87, 0.0, 0x1.6641aa24500d4p-585, 0.0,
     0x1.d7f7c027f36a3p-975, 0x1.97109fafbb16fp-67, 0x1.557a58a5b7d87p-652, 0.0,
     0x1.5b79c15ff2297p-244, 0x1.bd8df3159a2e2p-51, 0x1.24ee9f63f5653p-396, 0.0,
     0x1.8de4f85ba8dd6p-455, 0.0, 0.0, 0x1.a21fcec9a6a01p-330,
     0x1.5a8f58183cdd4p-1019, 0.0, 0.0, 0x1.6198017fff4eap-96, 0.0,
     0x1.419e2bf5dc56ap-237, 0x1.4d17c856ee99fp-268, 0x1.11d19b5a6c553p-256,
     0x1.629fefe9145b3p-876, 0x1.291ae156c0cb9p-843, 0x1.7945c391f4b9ap-859, 0.0, 0.0,
     0.0, 0.0, 0x1.ebc4b703b4142p-521, 0.0, 0.0, 0x1.01adb5dcf92p-748,
     0x1.0a8ba74463d87p-973, 0.0, 0x1.404f2268aa3d3p-246, 0x1.832b0da03035p-378,
     0x1.0a0f95dcbccap-684, 0x1.f19be0ba1628p-713, 0x1.e50739b6df3d6p-326, 0.0, 0.0,
     0x1.a4d8b79a61a2bp-710, 0.0, 0.0, 0x1.3210cf2e9ad99p-1003, 0.0, 0.0,
     0x1.44474f518e7f8p-650, 0.0, 0.0, 0.0, 0x1.95c3b5d2dd384p-470, 0.0,
     0x1.16af62b732dbcp-408, 0.0, 0.0, 0x1.3e4d5f06fd616p-740, 0x1.939496faeff3cp-118,
     0.0, 0x1.356b3443dc73fp-448, 0x1.258a54cb3fd4cp-857, 0x1.c1b0c44dcb804p-652,
     0x1.c2a8a911262cep-621, 0.0, 0.0, 0x1.840a25fcf082p-24, 0.0, 0.0, 0.0, 0.0,
     0x1.71fe0db0d3fb3p-294, 0x1.01db16a6d8193p-61, 0x1.f397ebcd85fa1p-363,
     0x1.96a8dc52942e3p-71, 0x1.ad739692745e1p-761, 0x1.b7cb22ef5f089p-365,
     0x1.b1f8657c73632p-753, 0.0, 0x1.b22ddce64df5fp-516, 0x1.f7894f2cc3056p-508, 0.0,
     0.0, 0x1.2acb1661b552ep-337, 0.0, 0x1.6e05896097b15p-974, 0.0,
     0x1.3d34136222e26p-453, 0x1.7269b89e1489ap-348, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.78c0fd04ae297p-514, 0x1.dd9b011c4b576p-847, 0.0, 0x1.62853c3f20a96p-117,
     0x1.95233232c70aep-145, 0.0, 0x1.18726960cd2c3p-115, 0.0, 0x1.2dc18f353f6f8p-972,
     0.0, 0.0, 0.0, 0.0, 0x1.f2ea71d523789p-441, 0x1.70a7943a25771p-75,
     0x1.7c4fba181b015p-356, 0x1.2cde88ae9137p-698, 0x1.ad940c138d43ep-773,
     0x1.bf1ed28b8928p-922, 0x1.42bc169b0a486p-836, 0x1.fe302f6a2429fp-300,
     0x1.e47d3e097b562p-231, 0.0, 0.0, 0x1.5ffafc36b6b75p-405, 0.0, 0.0,
     0x1.e0968b739b6b4p-428, 0x1.c0bf13ccfc4f2p-569, 0.0, 0.0, 0x1.fb6aa02c7026p-622,
     0.0, 0x1.a2cca4cfd8791p-256, 0.0, 0.0, 0x1.1fea2f82cf328p-448, 0.0, 0.0, 0.0,
     0.0, 0x1.3f5f280fcd7b6p-917, 0.0, 0.0, 0x1.65b74a8a660fp-672,
     0x1.efa451550868p-979, 0x1.bd323600c8e63p-79, 0.0, 0x1.a20d0448fe5f4p-307, 0.0,
     0x1.79ed4d35cb2c9p-876, 0.0, 0x1.ef1f153ad742ep-84, 0.0, 0x1.15ab562fb9207p-775,
     0.0, 0x1.ab4d7f0c3ee25p-378, 0.0, 0.0, 0x1.6d5705f4b9883p-190,
     0x1.44b61d0c0f85dp-204, 0.0, 0x1.dd32acc6dcb62p-855, 0.0, 0x1.53e1c6bc8e81p-94,
     0.0, 0x1.f5e18827e3ef1p-97, 0.0, 0x1.288674bb5687ep-732, 0x1.852bf4f012c94p-237,
     0x1.f4039887fc545p-355, 0x1.41de85aa2e95ap-18, 0x1.8c94aa65e3877p-679,
     0x1.a6a10c7589722p-427, 0.0, 0.0, 0.0, 0x1.2b6e608e9d5a4p-293,
     0x1.ba6149ba0020cp-264, 0x1.56e3ce5829b1ep-48, 0x1.8747d487bd9cbp-131,
     0x1.d8b651438fac1p-574, 0x1.d9705f7daacdbp-241, 0.0, 0.0, 0x1.56ee000046f03p-627,
     0.0, 0.0, 0.0, 0x1.db39162747d4cp-656, 0.0, 0x1.df6c8e2eb5808p-957,
     0x1.b03acd0e495b2p-280, 0x1.3e1032b3a30eep-862, 0x1.08955ee84ec97p-991, 0.0,
     0x1.f5bb66d636a36p-6, 0x1.e803138bb38d9p-735, 0.0, 0.0, 0x1.92a51589f3b27p-1013,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eec492805b0b6p-878, 0x1.f2391bed7a382p-825,
     0x1.097f5e04b7c0bp-821, 0x1.45ba0efba02bcp-883, 0x1.66d63291f477ep-442, 0.0,
     0x1.3ee03b53afba3p-897, 0.0, 0.0, 0.0, 0x1.1d490afe1f77bp-699,
     0x1.729ef5992110fp-119, 0.0, 0.0, 0x1.bdc509ec284d9p-809, 0x1.9416004006064p-627,
     0x1.36430db12f703p-479, 0.0, 0.0, 0x1.c87836f61612p-77, 0x1.1f783722f8fbfp-547,
     0.0, 0x1.b8d33dbabcd78p-492, 0x1.0ed6438a7fefp-186, 0.0, 0x1.f6667f4c2fa2cp-366,
     0x1.ca81c6eea41dfp-439, 0x1.3914e2be7dc75p-984, 0x1.90b6862502e55p-985,
     0x1.8e92ca636e8ccp-164, 0.0, 0.0, 0x1.e4a453c265eb4p-968, 0.0,
     0x1.94d8bcbbe576dp-25, 0.0, 0x1.17ee3fcc1ee23p-807, 0.0, 0x1.4f41deec1b3fbp-32,
     0.0, 0.0, 0.0, 0.0, 0x1.e0f27231751afp-206, 0x1.2790653e0b97p-878,
     0x1.34230bbf34b86p-525, 0x1.aeb59be17a089p-349, 0.0, 0.0, 0.0,
     0x1.e06cf299c4a3cp-138, 0.0, 0.0, 0.0, 0.0, 0x1.af6d02e06ac1ep-288,
     0x1.d0c598966903ap-647, 0x1.f0007274f5557p-644, 0x1.a31bc44f0e3b5p-761, 0.0, 0.0,
     0.0, 0.0, 0x1.c775a26cd2fafp-696, 0.0, 0x1.d68b8db299f1cp-118,
     0x1.5ef85b55f3d35p-216, 0x1.775f8c621d281p-278, 0.0, 0.0, 0x1.73f2dd150d764p-886,
     0x1.76e6fec9df91fp-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bb4c5f60c1dfap-68,
     0x1.5760beab3f4abp-759, 0x1.414bc70cd4ef3p-903, 0.0, 0.0, 0.0,
     0x1.b13c54316ea32p-573, 0x1.6c5f1c3011e44p-969, 0x1.fea407aa32c48p-327,
     0x1.d4cf8e7c90b0fp-199, 0x1.3eee335ad9468p-554, 0.0, 0.0, 0x1.5b4ce8f41f261p-523,
     0.0, 0.0, 0.0, 0.0, 0x1.d52b2a301b076p-118, 0x1.2c9004a5d049ap-97,
     0x1.bd644e55979d4p-451, 0.0, 0.0, 0.0, 0.0, 0x1.54d7cdcbfdbe8p-163, 0.0, 0.0,
     0.0, 0x1.0b04f3c83c9c8p-170, 0.0, 0.0, 0x1.b1e10cc71099dp-833,
     0x1.85e637d11911cp-399, 0.0, 0.0, 0.0, 0x1.411441e61ef0dp-252, 0.0, 0.0, 0.0,
     0x1.92896702087dp-521
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_tanhd1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_tanhd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tanhd1_u35purecfma bench acc %la\n", global_bench_acc);
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
