/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind1_u10purecfma.c --function Sleef_sind1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.dfb1ea52efbdep-535, 0x1.2ad28b1a1c082p-156, 0.0, 0.0, 0.0,
     0x1.932c6753b3c8ep-509, 0.0, 0x1.856053e6d257ap-438, 0x1.f8ef075b8c606p-183,
     0x1.3297348e9a8ffp-726, 0.0, 0x1.f890533d087bcp-13, 0x1.cc237d53b7f1bp-825, 0.0,
     0.0, 0x1.dca85a652e96fp-252, 0x1.e8d08f3b4dd64p-657, 0.0, 0x1.8d40fcb4e03b2p-922,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.998caf843ad34p-374, 0.0,
     0x1.fbccb9f30b66p-899, 0.0, 0.0, 0x1.59df6ba53ea0ep-51, 0.0, 0.0, 0.0, 0.0,
     0x1.68640d9fc580ep-2, 0.0, 0.0, 0x1.9a1abf82267b3p-331, 0x1.ac245a83d57a5p-912,
     0.0, 0x1.436c21362bc24p-381, 0x1.f4ff73cb6519cp-979, 0x1.62602a6ece885p-531, 0.0,
     0x1.8f52c9b3c3814p-299, 0.0, 0x1.7b7f036de9d9ap-392, 0x1.89f9ece95fca9p-343, 0.0,
     0.0, 0.0, 0x1.046ae1ee53e47p-590, 0x1.cc28e5a77750bp-839, 0.0,
     0x1.61108c9883e08p-219, 0x1.246247832d6afp-831, 0x1.cd25ee1db367ep-420,
     0x1.d6ff2f6479e2fp-688, 0.0, 0.0, 0.0, 0x1.000c64166e565p-937, 0.0, 0.0,
     0x1.aabd4adb6c762p-128, 0.0, 0.0, 0x1.eba1eeaf81317p-501, 0.0,
     0x1.7dc3d3b48cad2p-886, 0x1.77116ef91e98ep-802, 0x1.ec6406ef9cd4bp-193,
     0x1.00e2b589e1be3p-413, 0.0, 0.0, 0x1.1a87222ba79dp-994, 0.0,
     0x1.639d4877dc016p-298, 0x1.86d99a82e78dcp-838, 0x1.ee290f9423ad3p-888,
     0x1.3f2fc046471fep-40, 0.0, 0.0, 0x1.7344fad102f61p-832, 0x1.265fc92861ba5p-850,
     0x1.202753096d83fp-412, 0x1.ed71cfbd1d4aep-955, 0x1.8bc4278ff01eep-362,
     0x1.4d205734c9019p-68, 0.0, 0x1.f808edd5db8f9p-695, 0x1.e8061e55551acp-830, 0.0,
     0x1.1677916407564p-666, 0x1.ed4c76dfabcb6p-879, 0x1.1fe1b8c9d856ap-197, 0.0, 0.0,
     0x1.4ab874ed1d91fp-61, 0.0, 0x1.d1f99fe17a2e9p-554, 0x1.d4ca869614342p-882, 0.0,
     0.0, 0x1.c74b3cb4c5e9p-385, 0.0, 0.0, 0.0, 0x1.29d1de1795f1cp-211,
     0x1.f40cca9799655p-256, 0x1.e4794ff28d093p-982, 0.0, 0.0, 0x1.32a95751f7c89p-248,
     0x1.8646bc502d03bp-128, 0.0, 0.0, 0x1.b986d08af2214p-717, 0x1.85def2f44949p-340,
     0.0, 0.0, 0.0, 0x1.b2a820b6ce403p-551, 0.0, 0.0, 0x1.370a6ab32be98p-353, 0.0,
     0.0, 0x1.5b88ced48702dp-276, 0.0, 0x1.8838fa84fdd9bp-987, 0.0, 0.0,
     0x1.0eb91aab23da5p-180, 0x1.653e46ab138b1p-43, 0.0, 0.0, 0x1.c7695039a8435p-432,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5550bfa111c02p-888, 0.0, 0x1.2e5a2515acc43p-832,
     0x1.d96148b5f696ep-426, 0x1.b3f9ba79e7b1ep-72, 0x1.ec488c0ae5056p-144,
     0x1.6eb431f7010a6p-1015, 0x1.af812697ed6f4p-164, 0.0, 0x1.13b4061b223fap-706,
     0x1.0e41ac62dd256p-411, 0.0, 0.0, 0.0, 0x1.894e37e2ace6ap-536, 0.0, 0.0, 0.0,
     0x1.b6b0fcb833fd2p-408, 0x1.01ba2e0e6553ep-216, 0x1.a412de68e9c58p-789,
     0x1.00aae33312bd4p-995, 0x1.1a4b0e1ddaed7p-477, 0x1.aab2b7d6ce39fp-160, 0.0, 0.0,
     0x1.d5cb6b6a38986p-467, 0x1.45d60512ed386p-481, 0x1.0859e3387aa1ep-348,
     0x1.9b2727db6ea4ep-252, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d102d59c81f6p-983, 0.0, 0x1.b0909d6d1567bp-439, 0x1.f2ed5513876dcp-394, 0.0,
     0.0, 0x1.3550d59cee6d9p-504, 0x1.abdbfcff065acp-620, 0x1.11e45fed0582dp-513,
     0x1.c2d4aa25d16dp-143, 0x1.d436556fb6a9dp-228, 0x1.1217987e0b8f8p-640, 0.0,
     0x1.cb169bb633d1p-125, 0x1.20153863275efp-332, 0x1.ba0ec9d8734ddp-757,
     0x1.2ce72f239fe2dp-438, 0.0, 0.0, 0x1.6e01e3e8c74ddp-439, 0.0,
     0x1.506cb53f2ffddp-783, 0.0, 0.0, 0.0, 0.0, 0x1.d63ce397ebc6bp-38,
     0x1.413274c0ccdddp-260, 0.0, 0x1.b0f27dbc22715p-774, 0.0, 0.0, 0.0, 0.0,
     0x1.2f296aeeeb9c1p-357, 0x1.b632b51dc16ccp-55, 0.0, 0.0, 0x1.8b194cdd289c2p-129,
     0x1.aafc757dd645dp-391, 0.0, 0.0, 0x1.7bef196b66f4fp-134, 0.0, 0.0,
     0x1.baa42ccbb5b36p-133, 0.0, 0x1.f455df441bcf4p-1013, 0.0, 0.0, 0.0,
     0x1.6287f561fdc77p-307, 0x1.9de4d31f40415p-175, 0x1.9d9e446e1425p-753,
     0x1.5c1b33b53e69ap-459, 0x1.98a78b5a8e006p-75, 0x1.c82173b6bccfdp-510,
     0x1.5b43803e59106p-66, 0x1.fb78f668a7685p-23, 0x1.265c286d95102p-227,
     0x1.ae77647b06fe9p-170, 0.0, 0x1.6b442f9581139p-343, 0x1.ae668708d0cf3p-801, 0.0,
     0.0, 0.0, 0.0, 0x1.2f414c0e90a78p-288, 0x1.0a92423d9556cp-133, 0.0, 0.0, 0.0,
     0x1.9dba405916bdep-874, 0x1.a2c0bd63f0eeap-4, 0.0, 0x1.cab674d765097p-382, 0.0,
     0.0, 0x1.6e657605d1739p-928, 0x1.1f1024e64d3ap-3, 0.0, 0.0,
     0x1.d77d8495a03fcp-762, 0.0, 0x1.1dc89244720f6p-149, 0.0, 0x1.7305193da49c8p-699,
     0.0, 0.0, 0x1.1e621dd88a48ap-274, 0x1.015c139d0a7c2p-404, 0x1.1d8c0a4fa3cd9p-539,
     0x1.28cb429931b86p-574, 0x1.f17ae4f59d976p-634, 0x1.462d5a707e8c6p-461, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.439cb3d802d22p-660, 0x1.b227eda78e449p-811, 0.0, 0.0,
     0.0, 0x1.2129c16de7721p-967, 0.0, 0x1.980a954cafe2cp-434, 0x1.e6e4398b88cdp-65,
     0.0, 0.0, 0x1.105d426c59a5cp-959, 0.0, 0x1.b8c1b70d6f615p-214, 0.0,
     0x1.e95fbdd1895ap-292, 0x1.570e7369a8548p-694, 0.0, 0.0, 0x1.db2899f0f7b5p-759,
     0.0, 0x1.22f3c7aba5dcap-972, 0x1.edbaacfb22118p-700, 0.0, 0.0,
     0x1.2b0fe22f59b8p-105, 0x1.0de05f958b8a3p-331, 0x1.2b0f9cc0a330ep-812,
     0x1.4acf70fada471p-868, 0.0, 0x1.4746b9ecce143p-42, 0x1.d1a8dc9982f8dp-380,
     0x1.cab41b1d6872ap-773, 0.0, 0x1.c6c9c5895ff27p-233, 0x1.85a69cf48ce3fp-621, 0.0,
     0.0, 0.0, 0x1.6fefd921f6c53p-172, 0x1.d5ba47b911aaep-532, 0.0, 0.0,
     0x1.719bd969ec59ep-98, 0.0, 0.0, 0x1.21af42c556c22p-590, 0x1.d77390f29b379p-427,
     0.0, 0x1.cdefe08b77ccap-176, 0x1.afaac70226p-178, 0x1.6bccb061ac10ap-302,
     0x1.656b7ada709b8p-383, 0x1.9519bd5ec5a5ep-765, 0x1.7f47e935b9317p-354, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.00960f883687ap-611, 0x1.2166bf003997bp-476,
     0x1.37ccfc735dd93p-162, 0.0, 0x1.37995d0a31c19p-647, 0.0, 0.0,
     0x1.4c4575a714572p-742, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2fa21321bcbf2p-270,
     0x1.ecea850b9e367p-198, 0x1.8460b24ecd594p-4, 0.0, 0.0, 0x1.45612a51b08ep-6, 0.0,
     0.0, 0x1.b848398c02fdcp-782, 0.0, 0x1.96f468a0cfa88p-149, 0x1.fa0cf2039ece3p-868,
     0x1.356c245da0924p-211, 0.0, 0.0, 0x1.6720fe4a3ef98p-69, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2ddea6aa4f93dp-480, 0x1.4076b78f92cp-543, 0x1.6a012e29b8cdap-660,
     0x1.3e98fd27ada6dp-787, 0x1.88f0e84020d53p-108, 0x1.978685ed1c5e6p-31, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1083c748590d4p-438, 0.0, 0.0, 0x1.f4533d527d17fp-564, 0.0,
     0x1.49f7d29363208p-813, 0x1.21705af214793p-254, 0.0, 0.0, 0x1.3602fabe5589dp-923,
     0.0, 0x1.d2b028e9a6374p-290, 0x1.7a2b664dabc22p-899, 0.0, 0x1.ef31bb34c0f4fp-147,
     0.0, 0x1.151b0adb348e9p-428, 0x1.cd05e0d46c02ap-367, 0.0, 0.0,
     0x1.3f4944bb556ep-1001, 0.0, 0x1.dcccad458196ap-219, 0x1.3a1bd6d2e20b1p-592, 0.0,
     0x1.68a449ed9c83ep-446, 0x1.8e4cb0e3e8f34p-346, 0x1.1652842a49268p-199,
     0x1.301ae6178e136p-930, 0.0, 0.0, 0.0, 0x1.a1e5511e20e1ap-375,
     0x1.9c2ceae2b21aep-869, 0.0, 0x1.88653335b34f6p-826, 0.0, 0x1.0a55bcbf8cce3p-600,
     0x1.74cdb8cd78389p-703, 0.0, 0.0, 0x1.f8b3404bacf56p-667, 0x1.81d95120798a3p-910,
     0.0, 0x1.c47f941289278p-881, 0.0, 0x1.d62567251770cp-1000, 0.0, 0.0,
     0x1.d4ee0567e36b4p-693, 0.0, 0x1.4fd584261904ap-414, 0.0, 0.0,
     0x1.c835b54d817e5p-294, 0x1.1da1e75c8ea14p-35, 0x1.62154ed63d9a3p-129, 0.0,
     0x1.110d235ff1455p-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16a657dc06f81p-886,
     0x1.c8e6591b62fd9p-467, 0.0, 0.0, 0.0, 0.0, 0x1.cf01c9b931cafp-282,
     0x1.ec82c320613d5p-137, 0.0, 0.0, 0x1.95199ce1b3498p-455, 0x1.d62ac96dc1269p-585,
     0.0, 0.0, 0x1.30ee3ba0e23b5p-1000, 0.0, 0.0, 0.0, 0.0, 0x1.7e8a1d70b7437p-58,
     0x1.1703cb3d2e724p-611, 0x1.5ef1168512ceap-787, 0.0, 0.0, 0x1.21dfb042ca98ep-527,
     0.0, 0.0, 0.0, 0.0, 0x1.076be44ef1985p-247, 0.0, 0.0, 0.0, 0.0,
     0x1.239d44375342ep-243, 0.0, 0x1.db998a1361fcep-456, 0.0, 0.0, 0.0, 0.0,
     0x1.66343f431b253p-528, 0x1.7b4f3bb1385c3p-599, 0x1.b0acda90a606ap-277,
     0x1.c8f756e245916p-179, 0x1.64c80b0b2f7dep-521, 0x1.2ef4e391332a4p-515,
     0x1.a921ec2ab6672p-790, 0.0, 0x1.e0a6612d5f7e4p-155, 0.0, 0x1.be11aca26a778p-947,
     0x1.c844cec72eefp-172, 0x1.7b5634c278b57p-249, 0.0, 0x1.73a15528b65d3p-632, 0.0,
     0.0, 0x1.d6a7c25d4b67bp-868, 0x1.195158dc6893cp-480, 0.0, 0.0,
     0x1.5c49dfdd90467p-547, 0.0, 0x1.613e15d9777b5p-564, 0x1.94ec908deed07p-753,
     0x1.e497e52ce49f8p-145, 0.0, 0.0, 0.0, 0x1.aca89139b6dcbp-444,
     0x1.2ab01bf4e5c4fp-125, 0.0, 0.0, 0.0, 0.0, 0x1.0424c585d92ep-565,
     0x1.0a2639f591c14p-532, 0x1.46a691d1ec881p-91, 0.0, 0x1.0f2b22b118a3cp-956, 0.0,
     0.0, 0.0, 0x1.bb7f290d314ffp-688, 0x1.c7da9d3f588bdp-366, 0x1.cd66c9852c729p-717,
     0.0, 0.0, 0.0, 0.0, 0x1.3de2b0923dc6dp-327, 0x1.0e0ef61f9d8a3p-430, 0.0, 0.0,
     0.0, 0x1.384b259fc2213p-478, 0x1.def65bd5b2b61p-929, 0x1.40fe8e819bf6p-550, 0.0,
     0x1.063e372443b65p-976, 0x1.848dd177fc5cp-860, 0.0, 0.0, 0.0, 0.0,
     0x1.aff485c4bd3afp-235, 0.0, 0x1.c65d5feaaaf7ap-899, 0.0, 0x1.3b6c4c449b9a2p-676,
     0.0, 0x1.a81b9cbe3ef1fp-870, 0x1.07d92e2ecb8b9p-3, 0x1.233dfe93d04bap-555,
     0x1.f04ef4410b41ep-248, 0x1.0b515b8764c31p-757, 0x1.12d91589549dp-816, 0.0, 0.0,
     0.0, 0x1.ca9217a28d76dp-838, 0x1.12fd43bf9bbf4p-34, 0.0, 0x1.648a2113dc833p-932,
     0.0, 0.0, 0x1.72fcfc78531b2p-724, 0.0, 0x1.0738bdfa8c53fp-941,
     0x1.ece0258ffd82cp-694, 0x1.91fb0b6b3347p-712, 0.0, 0x1.f5b12eb43bc7p-210, 0.0,
     0x1.fa46055af9116p-701, 0x1.1cd8d03e04ca6p-841, 0x1.dea4c72a499c8p-433, 0.0, 0.0,
     0.0, 0x1.da50a7304837fp-997, 0.0, 0.0, 0.0, 0x1.662df1b930d39p-468,
     0x1.58cae438b8b01p-468, 0.0, 0x1.bca49d473b535p-875, 0x1.2f995bacc72a4p-387, 0.0,
     0.0, 0x1.c7e66cafa658dp-188, 0x1.32bda39e71fb1p-423, 0x1.87708c7d007fbp-185, 0.0,
     0.0, 0x1.dc18ea100009fp-855, 0.0, 0.0, 0x1.65b6067cba617p-851,
     0x1.53a32fcd9ca0dp-764, 0x1.132c4a79e6ad4p-365, 0x1.4c083fc3d08eap-183,
     0x1.c41076e8a93b8p-219, 0.0, 0.0, 0x1.889c6f5f403p-64, 0.0,
     0x1.3e0559e7144efp-768, 0x1.646c0e61ee9b7p-696, 0x1.282b0e7589341p-70,
     0x1.f503b35e758a5p-851, 0x1.c5e0c4dead3ccp-442, 0.0, 0.0, 0x1.874abca5775a9p-121,
     0x1.657c259604cdcp-1004, 0.0, 0.0, 0.0, 0x1.b2038311a835fp-675,
     0x1.f939017d424e5p-54, 0x1.3fa099e15dfedp-970, 0.0, 0x1.c4784ce2182bp-366, 0.0,
     0x1.f084a48f1eb93p-145, 0.0, 0.0, 0.0, 0x1.2230bb775f7d7p-23,
     0x1.76a799e9b4aa1p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7d50dcc592d5ap-310,
     0x1.e8069abc1a722p-776, 0.0, 0x1.2d08a49f0a23bp-799, 0x1.d106266e8eb48p-457,
     0x1.2c7e158d8a5bap-811, 0.0, 0.0, 0x1.06e36dc57cf39p-29, 0x1.82882deea5f19p-649,
     0x1.23f1be418ef11p-86, 0.0, 0.0, 0.0, 0x1.5106307b67aa1p-302,
     0x1.4fbd7c7002356p-961, 0x1.1a15f29b8f2e2p-15, 0.0, 0x1.f3b1a3ecf69e2p-523,
     0x1.380c5630ec0c9p-748, 0.0, 0.0, 0x1.8027980aa32ffp-468, 0x1.fa7b1bc0a29b1p-19,
     0x1.2058348ed6daap-433, 0x1.0da564e36fd1ap-78, 0.0, 0.0, 0.0, 0.0,
     0x1.c7db2060b2a76p-374, 0x1.4d3565b090ca5p-971, 0x1.7c85400cae9c1p-469, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7099fd1825cfdp-538, 0x1.518d8135bacd1p-282, 0.0, 0.0,
     0x1.d674563d3cb16p-676, 0x1.7738baa7dd452p-746, 0x1.747252fa96d28p-434,
     0x1.f8ae129ff672p-378, 0.0, 0.0, 0.0, 0x1.2d6d389e72e3ep-734,
     0x1.2fe1a8631c771p-50, 0x1.5c55d19a5368ap-746, 0x1.8552095c99fefp-754,
     0x1.b573999d7525bp-466, 0.0, 0x1.7093aefc2ea9p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.39b50d2bff62cp-296, 0x1.1096a64068ab2p-32, 0.0, 0.0,
     0x1.5404bd46491bep-50, 0.0, 0.0, 0x1.e5ec45e67db0ep-663, 0.0, 0.0,
     0x1.1c4526b5079e5p-228, 0x1.4e23b2296ee1ap-411, 0x1.4c70f92bdc093p-581,
     0x1.2949442498daap-970, 0x1.14f3dbfc9ef1bp-583, 0.0, 0x1.00d25e1530db1p-36,
     0x1.b6df6b817ecbdp-71, 0.0, 0.0, 0.0, 0.0, 0x1.268db629e4ab9p-929,
     0x1.bf97800b7bbf9p-563, 0x1.a5ae80710ad2dp-299, 0.0, 0.0, 0x1.13a9486529dd7p-812,
     0x1.5d27b9f3286e1p-352, 0x1.17b06ef55e886p-993, 0.0, 0.0, 0.0,
     0x1.e58df982e7302p-47, 0.0, 0.0, 0x1.84e77478e0da4p-941, 0x1.3c78e6b0127bcp-555,
     0.0, 0x1.a7a0e71c49723p-835, 0x1.f8c2bef36e30ep-965, 0.0, 0x1.2e30757f7b6dcp-369,
     0x1.f7711caf2663p-319, 0x1.9966f1bda51d7p-180, 0.0, 0.0, 0x1.261b748cd002fp-171,
     0.0, 0.0, 0x1.b79dfa8bf7e39p-706, 0.0, 0.0, 0x1.999cde332d3f8p-266, 0.0,
     0x1.61b9d5777daf4p-348, 0x1.326bb656ded78p-172, 0.0, 0x1.366b9ba3981e1p-205,
     0x1.d6f34b92aa225p-455, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a93c25c94415p-510,
     0x1.5790cd8f0e505p-270, 0.0, 0x1.26302b7d40095p-148, 0.0, 0.0,
     0x1.ab79b6e733c07p-229, 0x1.17207c8b6887fp-249, 0.0, 0.0, 0.0,
     0x1.02cebbf567d3fp-638, 0.0, 0x1.02d16f1b859a1p-351, 0.0, 0x1.5409a17d9d659p-876,
     0.0, 0.0, 0x1.d7fbc5aa0152dp-483, 0x1.a6c510e43530fp-14, 0.0,
     0x1.4d6f671fb38b7p-411, 0x1.826e7b87001cp-398, 0x1.109f803e06aafp-762, 0.0,
     0x1.6a3f4825133fap-236, 0x1.96187d2bd7833p-559, 0.0, 0x1.35bcfd773db12p-138,
     0x1.75e8b8e02e365p-813, 0.0, 0.0, 0.0, 0x1.043f1dd14a469p-344, 0.0,
     0x1.7a530f7feb363p-209, 0.0, 0.0, 0x1.d087f5210bd1fp-427, 0.0,
     0x1.dd80e0e413c1bp-573, 0.0, 0x1.17452e94332e9p-983, 0x1.ac4feb96e2b05p-932, 0.0,
     0x1.e4dbb65569815p-115, 0x1.d2b313eb5c819p-538, 0x1.1de00d6d6331ap-519, 0.0,
     0x1.5c03502fa8e53p-468, 0.0, 0x1.e99b893ce5a36p-72, 0.0, 0x1.f718483226c3cp-669,
     0x1.92552a5adf1dp-916, 0x1.2ff8ecbd5146cp-876, 0.0, 0x1.25387c44f6cd3p-234, 0.0,
     0x1.2698cc1cee6b5p-16, 0x1.589f0e1a126dep-409, 0x1.6318c85e484fbp-614, 0.0, 0.0,
     0.0, 0x1.6436dbcea90f6p-407, 0x1.f5dc9cd958accp-499, 0.0, 0.0,
     0x1.ae5369600704ep-38, 0x1.10459b4eff27dp-30, 0.0, 0.0, 0.0,
     0x1.88aa7d4f1016ep-977, 0.0, 0x1.2f39242808d06p-452, 0.0, 0x1.3cbe6d2795f9bp-53,
     0.0, 0.0, 0.0, 0x1.42ac7a075e92p-132, 0.0, 0.0, 0.0, 0x1.d97097d3b322bp-659,
     0x1.20cf1820ebd52p-381, 0x1.8e48768dee006p-366, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d9c99bd317b1p-796, 0x1.65764f569233ep-34, 0x1.f4026544ff3fp-726, 0.0,
     0x1.a48abe4fcd44fp-33, 0.0, 0.0, 0x1.f9506b21cf1bbp-33, 0.0,
     0x1.65e5ba3f3a3e4p-358, 0.0, 0x1.d0adae38e8c17p-672, 0.0, 0x1.c911ad80cd3b6p-268,
     0.0, 0x1.4dae3b0e20bb8p-727, 0x1.eae5256fdf3bcp-732, 0x1.deb7d695b932cp-265, 0.0,
     0x1.8f08f2d45fba2p-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59ca17db066a9p-150, 0.0,
     0.0, 0x1.f6d89919980f7p-95, 0x1.bfff69e059587p-89, 0.0, 0.0, 0.0, 0.0,
     0x1.ddf7bf6fd5659p-444, 0x1.0b89a1cbc8ed7p-246, 0.0, 0x1.1b965a245416p-709, 0.0,
     0.0, 0.0, 0x1.c26c4b64d0151p-380, 0x1.200d66da3a4a3p-138, 0.0,
     0x1.1a36b910c0888p-520, 0x1.cbbbdf5fd6595p-8, 0x1.7af3c8b867756p-929, 0.0,
     0x1.7f79884354975p-712, 0.0, 0.0, 0.0, 0x1.d73d9bdd0db72p-343,
     0x1.8ee015f6f6609p-509, 0x1.ba823b1b0e8b4p-900, 0.0, 0x1.30442b86a7152p-24, 0.0,
     0.0, 0.0, 0x1.c7d09b4650b26p-818, 0.0, 0x1.75486a1e49533p-827, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2cbfb8ba06795p-909, 0.0, 0x1.62887478ba71fp-405,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ee12dc9a5cdep-95, 0x1.c36de03ab5f9ap-143, 0.0,
     0.0, 0.0, 0.0, 0x1.b9831adb81c9bp-439, 0x1.0f895bb4547f6p-204, 0.0,
     0x1.26779f80fc407p-140, 0.0, 0x1.ee50f55a95069p-12, 0x1.f55ada54d219cp-25,
     0x1.de24e5043023ep-392, 0x1.18e59d6ea5173p-1015, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7b92e5086e2f5p-635, 0.0, 0x1.206d7c2643aebp-596, 0x1.603974064079cp-573, 0.0,
     0x1.512ffd6d369f5p-353, 0.0, 0x1.e3d8a52042ca7p-515, 0.0, 0.0,
     0x1.dece5933fd935p-777, 0.0, 0.0, 0.0, 0.0, 0x1.3a303c8adc5acp-833,
     0x1.84da8801f9dc4p-972
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
            tmp1 = Sleef_sind1_u10purecfma(tmp0);
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
    printf("Sleef_sind1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sind1_u10purecfma bench acc %la\n", global_bench_acc);
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
