/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expd1_u10purecfma.c --function Sleef_expd1_u10purecfma \
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
     0x1.7acb4e9de1b82p-657, 0x1.84c2424273b3ap-932, 0.0, 0.0,
     0x1.6765a553a4f6ap-383, 0.0, 0.0, 0x1.871f47db64639p-237, 0.0,
     0x1.f741ec68c266ep-999, 0x1.411eb4f19cd58p-938, 0.0, 0.0, 0.0,
     0x1.828fb5968c0a2p-274, 0x1.990dc4ba922fep-1001, 0x1.8492aec371a21p-274,
     0x1.0d2d0cab6a85ap-88, 0x1.4dd2a09801102p-40, 0.0, 0.0, 0.0,
     0x1.270b7d21399dbp-386, 0.0, 0.0, 0x1.2878c114de1d9p-892, 0.0, 0.0, 0.0,
     0x1.f65e1580ce949p-323, 0x1.8781fe4845668p-907, 0.0, 0x1.4563e528f4628p-639,
     0x1.6c7a28315e6f4p-994, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c71721e983a31p-584, 0.0,
     0x1.83594534db118p-487, 0x1.800567f5df5c8p-340, 0.0, 0.0, 0x1.9ec709094af1fp-664,
     0.0, 0x1.1f36140e0e18ap-647, 0x1.0be7071773e2cp-273, 0x1.a8aa05780d7f2p-858,
     0x1.f6b569b28571ep-338, 0.0, 0x1.eaaa658e9a97ep-45, 0x1.5e6c859fd7269p-407,
     0x1.08a7adf07e1bap-945, 0.0, 0.0, 0x1.f3950e291ffa7p-60, 0.0,
     0x1.f2a00e4f08a62p-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ba76ccf6882bp-100,
     0x1.16803044c7265p-465, 0x1.e50ef850fcb2cp-249, 0x1.a34f3b1993048p-952, 0.0,
     0x1.8dc16a249a287p-440, 0x1.97fd9ecf62c02p-62, 0x1.8e52d5cade7c8p-530, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7485f31e70feep-218, 0.0, 0.0, 0.0, 0x1.4ef148b8f8581p-266,
     0x1.cb936c1bf78dap-1020, 0.0, 0.0, 0.0, 0x1.95a4566a4cf34p-251, 0.0,
     0x1.f2b22d588bc1fp-31, 0x1.01138ae3627a2p-587, 0.0, 0.0, 0.0, 0.0,
     0x1.e1b7f7c114d0ep-999, 0x1.f1a398b290f54p-344, 0x1.d89fff484b9a5p-56, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2a765e01515e8p-962, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e653788207924p-454, 0x1.c6063c9498631p-147, 0.0, 0x1.23ea84e40f725p-350, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a3cc325095ap-191, 0.0, 0x1.dde955396c1f5p-831,
     0x1.7f5ec44b64378p-408, 0.0, 0x1.dbe897922fd28p-622, 0.0, 0x1.a573c051f3c14p-533,
     0.0, 0x1.58f98eb707b3cp-450, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87c1c2f1bdc66p-94,
     0.0, 0.0, 0x1.fd0b83e1d0838p-302, 0.0, 0x1.5d6a549c23d69p-218, 0.0, 0.0,
     0x1.2a39edca943a5p-316, 0x1.772016b6ba3ccp-383, 0.0, 0x1.afc3a281c4978p-939, 0.0,
     0x1.6bbc9b46fa036p-27, 0.0, 0.0, 0.0, 0x1.f2f60b5bf3945p-418, 0.0, 0.0,
     0x1.ff93a1e9e3234p-564, 0.0, 0.0, 0x1.d660113c258eap-299, 0.0, 0.0,
     0x1.11ccb98672403p-1019, 0x1.8891d74ea56fdp-897, 0x1.59fe66e103047p-92,
     0x1.ffc1d6c5a80e6p-617, 0.0, 0x1.e54c41d59778fp-433, 0.0, 0x1.0203eb18d8a27p-700,
     0x1.492ec4d3c2a99p-220, 0.0, 0x1.eee288fbd6e22p-181, 0x1.31095e4b28704p-459, 0.0,
     0x1.9380b2d1aaf2bp-322, 0.0, 0.0, 0x1.af4e8c2e5cedp-545, 0x1.51ee621249c78p-15,
     0.0, 0.0, 0x1.905723f34195ap-53, 0x1.4344745b7c3ep-243, 0.0,
     0x1.03c280c3e2a3bp-650, 0x1.3bf4e81c550f5p-418, 0.0, 0.0, 0x1.36c6f5a5b4c45p-609,
     0.0, 0.0, 0.0, 0x1.00537412c7196p-891, 0x1.283bcf8bd4085p-759, 0.0,
     0x1.5b3355edd8a4cp-44, 0.0, 0.0, 0.0, 0.0, 0x1.c9d9cceb5f51dp-883,
     0x1.93bb58feafbe2p-272, 0.0, 0x1.ebc5968741fcp-756, 0.0, 0.0, 0.0, 0.0,
     0x1.65570d026051dp-389, 0.0, 0.0, 0.0, 0.0, 0x1.1693cb313cc97p-892, 0.0, 0.0,
     0.0, 0x1.9b8348dab314dp-169, 0x1.fef5992d8eec2p-75, 0.0, 0x1.0b8a1aa6091f1p-218,
     0x1.71cbb85332defp-479, 0x1.7a1a36b6164a6p-337, 0.0, 0.0, 0x1.393bc505ce4dep-894,
     0.0, 0x1.de71af5a1ad05p-906, 0x1.cfd00fab58474p-217, 0.0, 0.0,
     0x1.fd1573be66e49p-1017, 0x1.f925f10b9e9bdp-511, 0.0, 0x1.1764049b1551bp-956,
     0.0, 0x1.55f40d983c04p-614, 0x1.a44076fbbd674p-769, 0x1.88faf0ad7ba4bp-784, 0.0,
     0x1.dcb54284b6261p-227, 0x1.542f60454a159p-223, 0x1.69eab370f9fc5p-805,
     0x1.d9370355811bbp-661, 0x1.63c989948d9cap-126, 0.0, 0x1.0e1f77a157de2p-15,
     0x1.cbceaedaa987fp-585, 0x1.ad301445017ep-783, 0x1.ed01fc7237c5dp-282,
     0x1.6e46095715fbep-776, 0x1.baa0592d5084ep-856, 0.0, 0x1.e0d1f4df9b7c9p-690, 0.0,
     0.0, 0.0, 0.0, 0x1.e120c0b7a9d17p-754, 0.0, 0x1.28d3d9cbebddep-290, 0.0,
     0x1.0cc52c3c845b6p-286, 0x1.d58a925512f79p-303, 0x1.cfc9ad012c7d9p-805, 0.0,
     0x1.a12dfd5fdcc9ep-970, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.eb83e88712b64p-933, 0x1.097d161b555fap-351, 0.0, 0x1.6dcec572d273p-538,
     0x1.262afa6d8865p-546, 0.0, 0.0, 0.0, 0.0, 0x1.5ac609f821599p-846, 0.0,
     0x1.8d8f281313f32p-511, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1b2cfaee557ap-784,
     0x1.ec5c4fc49c473p-276, 0x1.88d11d4bde7bbp-855, 0x1.dd3c1268d3c37p-230,
     0x1.214eb18f8db64p-418, 0x1.df9707a4e3fd1p-428, 0x1.a7d878b613c43p-752,
     0x1.3b5d95468cc78p-143, 0x1.eb682d9854d98p-276, 0x1.03d15b77237f3p-609, 0.0,
     0x1.41de6ddbd362fp-600, 0.0, 0.0, 0x1.6d70fcecd54c6p-228, 0x1.c62080c3e8e5ep-895,
     0.0, 0x1.ebf1093f248e3p-254, 0.0, 0.0, 0x1.5ed661c8a8379p-834,
     0x1.de7c5ff4095aep-796, 0x1.b62b00a49e93ep-958, 0x1.4ec8fd8aaa064p-324, 0.0,
     0x1.cb29e9138502p-602, 0.0, 0.0, 0.0, 0.0, 0x1.b7dcfe4155a0bp-622, 0.0,
     0x1.2a789c1f2cbc4p-515, 0x1.1f46e12300d24p-521, 0.0, 0x1.8d2a02087b752p-259,
     0x1.2fb950f8fd546p-988, 0x1.6e7ff217e6bbcp-933, 0x1.b9fa01f87af9p-389, 0.0,
     0x1.e516c67f116e5p-19, 0x1.0c437dd493b11p-599, 0x1.cf1b4a9796325p-507,
     0x1.6d313abcb1c32p-14, 0x1.b30d02552a38fp-419, 0.0, 0x1.d02fe5334c106p-533,
     0x1.d2a27f30861f7p-228, 0.0, 0x1.124280805ba1ap-11, 0.0, 0.0,
     0x1.f70e74b66c52bp-201, 0x1.5025a37af5797p-439, 0.0, 0.0, 0.0,
     0x1.32d03e72fa696p-188, 0x1.b2be4a905cf3cp-528, 0.0, 0.0, 0.0,
     0x1.455064a88bc23p-641, 0x1.df6acd84766f6p-367, 0.0, 0.0, 0.0,
     0x1.133b5772aea42p-306, 0x1.b644bef33581cp-905, 0.0, 0.0, 0.0, 0.0,
     0x1.29732d36bcadp-28, 0.0, 0x1.02b7836ce8a5cp-475, 0x1.17071a3d2c659p-452, 0.0,
     0x1.f0a330dbff3a5p-504, 0x1.5e6912e23ead2p-92, 0x1.8fc52f680dd2fp-712,
     0x1.7620d82918b69p-268, 0.0, 0x1.c5a8efff273e6p-474, 0x1.f5300bf77d23ap-942,
     0x1.cdcac239b275ap-488, 0x1.dd2f36b9269ebp-884, 0x1.b2ad36292b09ep-814, 0x1p0,
     0x1.626bc6a1afabep-641, 0x1.af26ebef32bcp-691, 0.0, 0.0, 0x1.dcaa582bb87f9p-147,
     0.0, 0x1.f4bc0293b341ap-71, 0x1.c5f39c3c74376p-961, 0x1.e492beece6953p-721,
     0x1.ed5ee9ba41ffep-587, 0x1.e1f80b81068cap-406, 0.0, 0.0, 0x1.9c80039ece6fep-19,
     0.0, 0x1.d21d58a3032aap-126, 0x1.39c7487459993p-657, 0.0, 0x1.2e97044f80994p-966,
     0x1.0b9925209de32p-749, 0.0, 0x1.8138b5b02cc28p-1019, 0x1.5a300fd0b9ceap-440,
     0x1.789f31c7dcba7p-443, 0.0, 0.0, 0.0, 0.0, 0x1.f83511de5455bp-946, 0.0,
     0x1.27316b56dd8f6p-128, 0.0, 0x1.e9a1386e9b55fp-659, 0x1.6203d05a17b3cp-132, 0.0,
     0x1.677901b63d82ap-337, 0x1.305d54d714626p-323, 0x1.f80c3c236ef63p-355, 0.0,
     0x1.e6f6fd5a7c3a1p-288, 0x1.3519fac07a957p-952, 0x1.620f1d141482p-953, 0.0,
     0x1.9b9130f19db5p-61, 0x1.2599bbdc72429p-84, 0.0, 0.0, 0.0, 0.0,
     0x1.e2b10873a89adp-222, 0x1.e4b5b72d2a9bbp-856, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0d90327644425p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.372a15ae2ac28p-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8927ffd49702p-524,
     0x1.2d66bdfb985cep-605, 0.0, 0x1.d13183ca076fcp-1001, 0.0,
     0x1.6a46605e83245p-901, 0.0, 0x1.d07abd394c109p-380, 0x1.09fa87236e647p-651, 0.0,
     0x1.da04116d49a6dp-173, 0x1.1ee49a37b5c03p-758, 0.0, 0x1.4a6a27f68902p-15,
     0x1.b752c3072ed0ep-361, 0x1.cfdc9c4f5e88ap-506, 0.0, 0.0, 0.0, 0.0,
     0x1.76a7c1b9c2a91p-368, 0.0, 0x1.2427dc7df0442p-455, 0x1.a44f4efc7a31fp-117,
     0x1.259d2e281ab53p-787, 0x1.54b9c54f3ebaep-948, 0.0, 0x1.16fd53fe3409cp-809,
     0x1.8545261591ccp-986, 0.0, 0x1.8ebf82979e015p-563, 0.0, 0.0,
     0x1.e279f71486d4cp-650, 0x1.8b11599569143p-856, 0.0, 0x1.5c896c82a73e2p-909, 0.0,
     0.0, 0x1.a5dbc59e31305p-996, 0x1.f082ee342d53ap-490, 0x1.87d3d995fe79cp-709, 0.0,
     0x1.e666566c8eba4p-908, 0.0, 0.0, 0.0, 0x1.dbad7679ba432p-791, 0.0, 0.0,
     0x1.d69f53a48eff9p-133, 0.0, 0x1.a7debef7a33b3p-395, 0.0, 0x1.510aef6d60febp-504,
     0x1.645e3cc078282p-367, 0.0, 0x1.6c1556fe8febp-968, 0.0, 0x1.02d8b2974a786p-155,
     0x1.07c9ba673cfd3p-99, 0.0, 0x1.89ffbb4787e1fp-524, 0.0, 0x1.8c1fa02ec84b8p-818,
     0.0, 0x1.c1ebb845f0941p-213, 0x1.bd96cdee855bp-678, 0.0, 0x1.24e92afb7c574p-273,
     0.0, 0x1.c56abd965cc67p-492, 0x1.e9ece21d55247p-898, 0x1.50bde50d841dp-46,
     0x1.8aae5a4d364ap-317, 0x1.9c553bb704c45p-174, 0x1.06f39dd296271p-869,
     0x1.635ee7922cf2p-18, 0.0, 0.0, 0x1.ba9b0af0bd035p-649, 0.0,
     0x1.d5f0ff1194d7ep-951, 0x1.2099bbc7eeff9p-617, 0.0, 0x1.ceddb60b12777p-505,
     0x1.012e2bdf4be47p-308, 0.0, 0.0, 0.0, 0x1.dee50d7587c35p-976, 0.0,
     0x1.b2d5cd7f9cbc6p-10, 0x1.a76af47855f4dp-590, 0.0, 0.0, 0x1.81760012b6fcbp-115,
     0.0, 0x1.da42d721b1f69p-544, 0.0, 0x1.67db4cbca1e1dp-663, 0.0, 0.0,
     0x1.11a156f201576p-286, 0.0, 0.0, 0x1.57683a3acb4bcp-967, 0.0,
     0x1.fa4465dfd74ecp-893, 0x1.758812cef1a17p-98, 0x1.104e82f8dce75p-589,
     0x1.6e43fa58db0b4p-232, 0.0, 0x1.fcb9649f97465p-136, 0x1.e9ccf1afea001p-178, 0.0,
     0x1.619051bf32c65p-443, 0.0, 0.0, 0.0, 0x1.3e170ce8c3e1cp-47, 0.0, 0.0,
     0x1.8f3a613b5746p-76, 0.0, 0x1.55c4be0920d6ap-503, 0.0, 0.0, 0.0,
     0x1.e093106bac864p-485, 0.0, 0x1.8fb941db101ap-214, 0x1.bf5d670fb70fdp-35,
     0x1.38f34b0e6f039p-474, 0x1.3ce7e019cc4cbp-224, 0.0, 0.0, 0x1.fa50def051652p-526,
     0x1.ed6e039cbb9adp-723, 0x1.4af8c0729c25ap-241, 0.0, 0x1.d3496c8e1a6b8p-359,
     0x1.3df31a2adc2a3p-635, 0x1.8568bf3ca5e7ep-616, 0.0, 0.0, 0x1.51478b233ea34p-75,
     0.0, 0x1.d1a785b0aa6adp-991, 0x1.b07c0830c0d56p-860, 0x1.3367eb8730cfep-870,
     0x1.122905f330596p-724, 0.0, 0x1.12c4c3b6d8112p-835, 0x1.40fa2be860202p-754, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1eaaae1015e3ap-298, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7c1fb8ae327a1p-632, 0x1.76c9272f4defap-672, 0.0, 0.0, 0.0,
     0x1.87b9cbd428106p-749, 0.0, 0.0, 0x1.d3a61005f1b61p-417, 0x1.fb2174b96c9ep-214,
     0x1.f2e9af5c610c2p-498, 0.0, 0x1.ee59212864a64p-956, 0x1.191d1f22f516fp-928,
     0x1.03c49d98a5725p-8, 0x1.7dbe5fc556b1dp-829, 0x1.515ee079cdcc4p-667, 0.0,
     0x1.093a00017016ap-440, 0.0, 0x1.184ee085b99ecp-1011, 0.0, 0.0,
     0x1.403ffb3199c45p-146, 0x1.374c9dcdd021cp-350, 0x1.8a15d08fe4f8fp-347,
     0x1.d0317600cabfbp-98, 0x1.c3b280f092863p-1008, 0.0, 0x1.a50d3ac416a2ep-995, 0.0,
     0x1.ab81163c1eae5p-162, 0.0, 0x1.27293f4f105f3p-202, 0x1.772a1c40165c8p-394,
     0x1.4cf708ea17548p-357, 0x1.8681624042ba5p-274, 0.0, 0x1.cd8269e7d49cdp-898, 0.0,
     0x1.72da1083ce9d1p-745, 0x1.9f55a27d5480ap-298, 0.0, 0.0, 0x1.93b52be6d39f2p-915,
     0.0, 0.0, 0.0, 0.0, 0x1.600bc6987c8dbp-894, 0.0, 0.0, 0x1.3a16d5db3ec5dp-654,
     0x1.d7dcfee88b079p-31, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e7fb0e5bdd06p-39,
     0x1.94df2276311e9p-107, 0.0, 0.0, 0.0, 0x1.3f01a15357632p-868, 0.0, 0.0, 0.0,
     0.0, 0x1.451e7f8640518p-649, 0x1.f973a9bbac43dp-825, 0x1.23138e765c25fp-507,
     0x1.1abc891d72f9ap-806, 0x1.c7577e1032f89p-7, 0x1.41a67f8aed196p-528,
     0x1.08878ab919a7ep-862, 0x1.791eaf35a9dcbp-869, 0x1.2baf77bbe4d32p-137, 0.0, 0.0,
     0.0, 0x1.3937e7ab6d816p-253, 0.0, 0x1.d5373c0ba5e59p-345, 0x1.e7d170f284f65p-330,
     0.0, 0x1.72306f2ead50bp-716, 0x1.6d232af51a87ap-283, 0x1.28456a39059c6p-536,
     0x1.f5435f7109441p-699, 0.0, 0x1.5612cc7d6a695p-70, 0x1.b050f1f38d269p-833, 0.0,
     0x1.e6fcd6a33dca7p-169, 0x1.b4f6bb34a816ap-442, 0x1.9f6b5892e6cb5p-180, 0.0, 0.0,
     0.0, 0x1.369ce352601bfp-897, 0.0, 0.0, 0x1.88c2d9928c9ep-384, 0.0,
     0x1.fb63496d7ee21p-691, 0x1.a23b48bbe6f5fp-835, 0.0, 0x1.87045f0dd9c82p-699, 0.0,
     0.0, 0x1.60e99b8ae033bp-522, 0x1.073a1a33a566cp-96, 0x1.9c59f93873179p-716, 0.0,
     0x1.367bf59b6a409p-604, 0x1.c901d3a6f029ep-843, 0x1.f63dcf691b904p-709,
     0x1.33c59f3ae4b77p-1022, 0.0, 0x1.4df6dd96d322p-446, 0x1.f246223ffaba6p-898,
     0x1.3ebb3efd9d17p-226, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a1e986a0f11ep-675, 0.0,
     0x1.8b384bc1a4a8dp-274, 0.0, 0x1.91556f8e84d5bp-564, 0x1.6a15c677a232p-66,
     0x1.0b247dc9f53ddp-917, 0.0, 0.0, 0x1.1836ce90487f4p-300, 0.0, 0.0,
     0x1.73057003eb16dp-337, 0.0, 0.0, 0.0, 0x1.0fc5e2dd12bf2p-712,
     0x1.d34085b1b2935p-698, 0x1.a9bc74b709767p-758, 0.0, 0.0, 0.0, 0.0,
     0x1.1acddf7d8d752p-158, 0x1.6ddd7f095e66fp-1, 0x1.ac7663f169b8dp-483,
     0x1.f05c1c14cac53p-601, 0.0, 0x1.d58714f90bc81p-892, 0.0, 0.0,
     0x1.e5a85fc1ef6ap-359, 0x1.bf174c4f39298p-754, 0x1.c540acf0a3be1p-385,
     0x1.88e143ad6382fp-446, 0.0, 0.0, 0x1.1475ea70ed811p-459, 0.0,
     0x1.7dc85f18f8d25p-878, 0x1.02bf56e10476ep-1011, 0.0, 0x1.86ccbccf8ed7fp-809,
     0x1.60359a6356ad9p-740, 0.0, 0.0, 0x1.4c8a9a42479bap-65, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6cb7cb013646cp-455, 0.0, 0x1.2b622986858f8p-883, 0.0, 0x1.5c7da6ba430bcp-298,
     0x1.d5acafb6d0a55p-921, 0x1.b78611bf2e4c4p-698, 0x1.e5a52b768387ep-849, 0.0,
     0x1.b90390a2118a1p-516, 0x1.fffdd729c44cfp-693, 0.0, 0.0, 0.0,
     0x1.7c57888266056p-412, 0.0, 0.0, 0x1.3cf157eceacedp-604, 0.0, 0.0,
     0x1.183e0111d969dp-914, 0x1.5163eab20d3f1p-413, 0.0, 0x1.5eee8cc5e9577p-870,
     0x1.a28e0f60b952bp-865, 0.0, 0x1.331ec8ed5099p-276, 0x1.925cee3689d9ap-497,
     0x1.2739841d33568p-909, 0x1.7b5bd287ca2d7p-718, 0x1.f35325fb8a448p-732, 0.0, 0.0,
     0.0, 0x1.1821a1dafd81bp-996, 0x1.c86574b2b2a98p-862, 0.0, 0.0,
     0x1.6c9ba21315302p-560, 0.0, 0x1.63a807f6e4b31p-295, 0.0, 0.0,
     0x1.25af74f6f1e2ep-347, 0x1.fba173e633806p-611, 0.0, 0x1.9e8601ecc437bp-745, 0.0,
     0x1.caade60691993p-908, 0x1.9d0a5e27618p-612, 0x1.badfd14043a71p-142, 0.0, 0.0,
     0.0, 0x1.9252ab93491c3p-794, 0x1.30e7b4efd13bdp-155, 0x1.605dd5ab9168fp-809, 0.0,
     0.0, 0x1.c1b050f86de84p-566, 0x1.2f191f942d0f9p-1013, 0x1.87fdf222df9fap-401,
     0.0, 0.0, 0.0, 0x1.f6e750a6daa89p-526, 0.0, 0.0, 0x1.d6766e5551226p-377,
     0x1.3c3cc90e5fd8ep-200, 0.0, 0.0, 0x1.358b9839c71f9p-483, 0x1.eaed0e95fcfcap-584,
     0x1.6ffa81819b695p-898, 0.0, 0x1.dbdfb26752828p-404, 0.0, 0x1.41d8a462ba54ep-368,
     0.0, 0x1.7a9e11f7e4571p-199, 0x1.a36fa46968541p-909, 0x1.b75ae166c81afp-443,
     0x1.c68d7ac9e3c0dp-226, 0.0, 0.0, 0x1.e0c70b819ac84p-739, 0x1.7e9c039e57154p-45,
     0x1.111c119acd262p-901, 0.0, 0.0, 0x1.4c30e5787ccbep-722, 0.0,
     0x1.ee52541df764fp-732, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c12b10633e05p-818,
     0.0, 0.0, 0x1.1c9d0d40e3554p-319, 0x1.aad0e40897978p-105, 0.0,
     0x1.e952cb8c2fb9fp-708, 0x1.75b641aa1568cp-334, 0.0, 0.0, 0x1.c33b4db0f2e3ep-149,
     0x1.c4f3f29c96e91p-671, 0x1.ccbe3340476c7p-426, 0x1.96ce2c022d717p-238, 0.0,
     0x1.db054670d39a8p-168, 0.0, 0x1.de71700e39497p-55, 0.0, 0.0, 0.0, 0.0,
     0x1.a587a41467c73p-703, 0x1.a08e316b3ffccp-815, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fbcd39ea807c6p-90, 0x1.a8473bfb3d91fp-190, 0x1.367ff8b8ac549p-550,
     0x1.62b16113f8f2cp-374, 0.0, 0.0, 0x1.e2f8519e950acp-285, 0.0, 0.0,
     0x1.df4d0e7cbdbc8p-744, 0.0, 0.0, 0.0, 0.0, 0x1.6d7a4923dd706p-451,
     0x1.1055fcb7737f6p-399, 0x1.4f8d1cc534861p-145, 0.0, 0.0, 0x1.bd41c2968a6f3p-881,
     0x1.a66c3a020d226p-79, 0.0, 0x1.d4f05823faecp-867, 0.0, 0x1.3d15e811aa631p-53,
     0.0, 0x1.fa1e834ac6855p-941, 0x1.67c691a288faap-8, 0.0, 0.0, 0.0,
     0x1.a525df08f020fp-234, 0x1.95280458d9452p-7, 0.0, 0x1.a716e085d6e0fp-807,
     0x1.091a5a22b935cp-50, 0x1.209c430185fbbp-495, 0.0, 0.0, 0.0, 0.0,
     0x1.b17656e475a5ep-944, 0x1.c2c04ff71c4b3p-936, 0x1.22299d8396081p-303, 0.0,
     0x1.e1fc97877dfabp-716, 0x1.22ced87568f1ap-230, 0.0, 0x1.b8799146dfdfbp-947,
     0x1.ca35966ee403p-713, 0.0, 0x1.9d6bfc81d4c8dp-554, 0.0, 0.0,
     0x1.d040e9070fc45p-13, 0.0, 0.0, 0.0, 0x1.17dfd708eaa31p-393,
     0x1.c1ff593180499p-295, 0x1.d300fefbbcdaep-756, 0.0, 0.0, 0x1.8ddda1e134ee4p-584,
     0.0, 0.0, 0x1.c233f26d46391p-140, 0.0
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
            tmp1 = Sleef_expd1_u10purecfma(tmp0);
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
    printf("Sleef_expd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expd1_u10purecfma bench acc %la\n", global_bench_acc);
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
