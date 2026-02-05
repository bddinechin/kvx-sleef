/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundd1_purecfma.c --function Sleef_roundd1_purecfma \
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
     0x1.7aff84d550b8cp-368, 0.0, 0x1.ad9d870f86f63p-510, 0x1.df783932a4e69p-62, 0.0,
     0x1.e2ed21f9309c1p-775, 0.0, 0.0, 0.0, 0.0, 0x1.0e3fb82ba66fep-679, 0.0, 0.0,
     0.0, 0.0, 0x1.dc49e9e594d85p-61, 0.0, 0.0, 0x1.679899eb0b8d1p-535, 0.0,
     0x1.a576a2eb7aaafp-808, 0.0, 0.0, 0x1.53e293fe84ed2p-668, 0x1.3233aa43f0ac8p-560,
     0x1.6a30a9e6a6559p-472, 0.0, 0.0, 0x1.e93745123fp-626, 0x1.4044e0bdffb3p-533,
     0x1.9deffc076f49dp-672, 0x1.dea5cd5ae5f38p-754, 0.0, 0x1.509430c348611p-867, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.70489d73c4f4ep-802, 0.0, 0x1.2b80dc6cb336bp-703, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.770a4691dab59p-902, 0x1.b56525cd3d377p-839, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9457d1cd2a816p-287, 0.0, 0.0, 0x1.530b59071ff4bp-105,
     0.0, 0x1.1035b7a8ce16p-894, 0x1.6a1015ed273eap-895, 0x1.26ac5a927af13p-212,
     0x1.5ed52eb2693e7p-279, 0.0, 0.0, 0x1.dc24c14e2ff6cp-821, 0x1.4988ec5700639p-71,
     0x1.6a83d9a3f508p-601, 0x1.d7f9d44e5aafbp-246, 0x1.7e71cd216e06ap-941,
     0x1.46cd7be135c9ep-837, 0.0, 0.0, 0x1.b48410d05004ap-491, 0x1.7f8e7c13f3e62p-171,
     0x1.0e05e3b8c777p-719, 0.0, 0x1.05a3a6871e888p-426, 0x1.acbe24f7770acp-549,
     0x1.d5e7cd62027cp-378, 0x1.3394b748eb066p-875, 0.0, 0.0, 0.0,
     0x1.08159fc05901fp-628, 0.0, 0x1.1cdbaf111dc9cp-699, 0.0, 0.0,
     0x1.b124146377b87p-976, 0.0, 0.0, 0.0, 0.0, 0x1.feca0aeaec804p-840, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c16b960b9b62p-533, 0.0, 0x1.a047466a76406p-275,
     0x1.36c04050c0edbp-759, 0x1.ea01918306722p-135, 0.0, 0.0, 0.0,
     0x1.ff84896b1b2c1p-330, 0x1.6248aa677c377p-348, 0x1.3c325fc109aep-791,
     0x1.5b6be89341d11p-544, 0.0, 0.0, 0x1.b9263cc2ceafep-204, 0x1.893789c7e1ae2p-746,
     0.0, 0.0, 0.0, 0x1.7b05b0db9c496p-368, 0.0, 0x1.eafc14f97733ep-717,
     0x1.fc898049df55bp-914, 0x1.84fa716aa770fp-647, 0x1.70f6c3dfb7174p-257, 0.0,
     0x1.57e53e249af0cp-934, 0x1.329777cfcee4fp-142, 0.0, 0x1.aa8ca44f0956ep-18, 0.0,
     0x1.b46714e0464a7p-364, 0.0, 0x1.0335c8e096348p-532, 0x1.0bb86a4588368p-130, 0.0,
     0.0, 0x1.01d23891d9e3bp-43, 0.0, 0x1.b25a2d7884625p-882, 0.0,
     0x1.5b91de8ac2972p-3, 0.0, 0x1.9a427b9199d2cp-479, 0.0, 0x1.68b1a2c1311b7p-726,
     0.0, 0.0, 0.0, 0x1.c9ee360580b56p-381, 0.0, 0x1.b77960942c37ap-729, 0.0,
     0x1.900d9d4465fdep-565, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ab98cf604534p-749, 0.0,
     0x1.0ef6b39f5e013p-22, 0.0, 0x1.2bda14e3c1298p-463, 0.0, 0x1.2325239c1889ep-279,
     0x1.5be2ef1ff51ccp-355, 0x1.c516e6ae0f611p-103, 0.0, 0.0, 0.0,
     0x1.d9966a6fc5343p-981, 0.0, 0.0, 0x1.dffe18ad20925p-169, 0.0, 0.0,
     0x1.88b9b5261e2fdp-479, 0.0, 0.0, 0x1.9b8c47d9c69abp-733, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.639b5bb4aaa95p-347, 0x1.9e5934003672ap-624, 0x1.4ca85ff8e22f9p-747,
     0x1.8f93a4f0f0dfbp-943, 0x1.114e7a1e7b323p-83, 0x1.e6b94a6a2e487p-227, 0.0, 0.0,
     0.0, 0x1.e5cf3c1ce09dp-123, 0.0, 0.0, 0x1.c254b019d532ep-510, 0.0, 0.0,
     0x1.505deaabdcb24p-442, 0x1.fbfe36df91c0ep-697, 0x1.301988be75a62p-490, 0.0, 0.0,
     0.0, 0.0, 0x1.e7f4cd87d6fbdp-752, 0.0, 0x1.8ccc7d1bd02efp-990,
     0x1.7c0c3550bf21fp-612, 0.0, 0.0, 0x1.cb4c47e1e29d7p-55, 0.0,
     0x1.4dc99451f882dp-291, 0.0, 0.0, 0x1.bf90129e91869p-650, 0x1.ef0e7f8e21e8dp-721,
     0.0, 0.0, 0x1.28bedd12e6482p-786, 0x1.afe0de0e085f1p-990, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5b8dcc3ae44f7p-964, 0x1.951b7c57dd9d4p-189, 0.0, 0x1.14771fd7f7f75p-419,
     0x1.d4df499bd3bc5p-142, 0.0, 0.0, 0x1.4d6281382f7b7p-626, 0.0,
     0x1.3bca4a0494691p-701, 0.0, 0x1.30261af25162ap-315, 0x1.0ac25951bb241p-320, 0.0,
     0x1.9887d68109db6p-384, 0x1.18d4e580f47dp-870, 0.0, 0.0, 0x1.3b2054a13715ep-513,
     0x1.85f4c0fcfecf4p-748, 0x1.b0775cc222a75p-181, 0x1.dec4ace66d4cep-363,
     0x1.849af272bd04cp-479, 0.0, 0x1.8a156943f3425p-520, 0.0, 0x1.66dd1d8f4a1fep-24,
     0x1.66e09dfcc9de9p-390, 0x1.33fa7cd406ebbp-134, 0x1.c544cadf1e1ep-967,
     0x1.a54b966927f3fp-770, 0x1.9da699cf79c04p-44, 0x1.28d94696e6f0dp-473, 0.0,
     0x1.13722c58cda21p-408, 0x1.d8f79e32d96a8p-1, 0x1.d3a6654945722p-125, 0.0,
     0x1.74600b4d6cce7p-497, 0.0, 0.0, 0.0, 0.0, 0x1.95d21710f94f6p-927, 0.0, 0.0,
     0x1.786c54d5f6629p-763, 0.0, 0.0, 0x1.7569744845ac6p-688, 0x1.417528bb20762p-789,
     0.0, 0.0, 0x1.5d684b01efcc8p-583, 0x1.d591f0ef99037p-722, 0x1.65e48be8802ebp-678,
     0.0, 0.0, 0x1.c34d35a82eb0fp-276, 0x1.1d72b4e74e93fp-868, 0x1.1e7ac21ad1a53p-314,
     0x1.c3711d3c15ea9p-441, 0.0, 0x1.9134c40cb5105p-420, 0.0, 0x1.401000275f236p-855,
     0x1.4daed8545a1d5p-488, 0.0, 0x1.4d3cadfe1cea7p-185, 0.0, 0.0, 0.0,
     0x1.7d5a7de2367b3p-553, 0x1.99bc319068c8bp-160, 0.0, 0.0, 0x1.bc659d2bd9853p-503,
     0.0, 0.0, 0.0, 0.0, 0x1.7babd872e79fcp-582, 0.0, 0x1.8d2d7f2729d3bp-961, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af81bce5a662cp-141, 0x1.17f02d6699986p-421, 0.0,
     0.0, 0.0, 0.0, 0x1.2be1fa68f081p-606, 0.0, 0.0, 0x1.bf070ec859704p-208,
     0x1.d79092d8cb599p-564, 0.0, 0.0, 0x1.5b5547ef25071p-139, 0.0,
     0x1.4371aa752e5acp-639, 0x1.d478c0155b7e7p-686, 0x1.0ee9fa222ed14p-995,
     0x1.e5ec3027e410dp-463, 0x1.1dabc47026947p-504, 0.0, 0.0, 0x1.65e9d22da8f2p-668,
     0.0, 0.0, 0x1.e86012a1caf2p-1006, 0.0, 0x1.ed18ef527de61p-918,
     0x1.2b4f8a6607af5p-892, 0.0, 0.0, 0x1.d12692d293066p-492, 0.0,
     0x1.9cf133485fea1p-730, 0x1.00590bc4709fbp-565, 0x1.f13ecba19a97ap-878, 0.0, 0.0,
     0.0, 0x1.2c98d2432def5p-222, 0x1.65c24a7874ab9p-829, 0.0, 0.0,
     0x1.be90e17dd7fbcp-606, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b65bdb5b6e745p-278,
     0x1.4812fc40de078p-858, 0.0, 0.0, 0x1.1a8d42cfc9bcdp-100, 0x1.f4edc439daa03p-437,
     0x1.cee65783d5a25p-592, 0x1.645f5ebb50b7p-304, 0.0, 0x1.e9f7aa0658b6cp-579,
     0x1.dc582bf7efb82p-856, 0.0, 0x1.016239c795a69p-856, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1319f931c4df2p-924, 0x1.ab41d22dd83f7p-650, 0x1.357d08264202fp-839, 0.0,
     0x1.c6eae21470557p-753, 0.0, 0.0, 0x1.4408b0087581cp-439, 0x1.f5e841014a13bp-708,
     0.0, 0x1.eedae92cd0964p-787, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec94e0ee037e2p-829,
     0.0, 0.0, 0x1.853d53e17ad7bp-338, 0.0, 0.0, 0.0, 0x1.e51327f466ca8p-151,
     0x1.8bda98776732dp-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5cc651734db14p-144,
     0.0, 0x1.5122ea2dcafc9p-257, 0x1.8af8c1e0b9fe6p-317, 0.0, 0.0,
     0x1.997a4779cc1bp-275, 0x1.a455200270686p-989, 0x1.6c4d084b10ba7p-781, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1ba122831e6cfp-427, 0x1.8760b76d364bap-674, 0.0, 0.0,
     0x1.882410f4f9c0cp-967, 0.0, 0x1.d45204171ff51p-647, 0x1.165c29a85887p-742,
     0x1.c21c77ff9055bp-194, 0.0, 0.0, 0x1.f1a73a3dae63fp-961, 0x1.20a24f6711121p-894,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c28f36b141fd8p-347, 0x1.0e3f0b11d157bp-623,
     0.0, 0.0, 0x1.5d29d4cbe8d8cp-553, 0x1.b1afce05378acp-662, 0x1.6c14305d45acep-541,
     0x1.239115dd05be8p-161, 0.0, 0x1.dc6fd2d3c5c2ep-732, 0x1.06a631f96dbdep-511, 0.0,
     0x1.72c567d2bdfa8p-983, 0x1.ab8cb18607cfcp-984, 0.0, 0x1.86d1bf8209a06p-722, 0.0,
     0.0, 0.0, 0x1.f97ed5124e41ep-497, 0.0, 0.0, 0x1.9c36fb16e5ad4p-745, 0.0,
     0x1.ba79a803913fp-746, 0x1.981dbd12f7614p-846, 0.0, 0x1.15aee04d003eep-262,
     0x1.13184f7d63aefp-742, 0x1.59c19901f4611p-5, 0x1.cab096d3ac6dp-869,
     0x1.6d590bda9bbb8p-531, 0x1.3455564e79a18p-298, 0.0, 0.0, 0.0, 0.0,
     0x1.e67358f4909adp-436, 0x1.f52436fa22194p-771, 0.0, 0x1.31e9d2b10717cp-185, 0.0,
     0x1.d0e063d11a846p-540, 0x1.fbe32dcef6013p-934, 0.0, 0.0, 0x1.242b7c448b405p-938,
     0.0, 0.0, 0.0, 0.0, 0x1.c2439ef48d563p-739, 0.0, 0x1.d9b20dac6c282p-1016,
     0x1.63f2ad6f8279ap-660, 0.0, 0x1.440c5cb89919p-90, 0.0, 0.0,
     0x1.28203513fe0a9p-747, 0.0, 0x1.2bc819ac23564p-222, 0.0, 0.0,
     0x1.5365a68b3e8e6p-153, 0.0, 0.0, 0.0, 0.0, 0x1.ade425dec937cp-451, 0.0,
     0x1.d87417c60b00bp-670, 0.0, 0.0, 0x1.59457f3da0a56p-356, 0x1.15e471de6269p-252,
     0x1.09463b3ad36d8p-538, 0.0, 0.0, 0x1.3b7198709023fp-940, 0.0,
     0x1.a0151c484bbaep-86, 0.0, 0x1.88d69720df095p-947, 0x1.df1a8f58b183ap-42,
     0x1.819299c328b91p-533, 0x1.750a4c27718dcp-930, 0.0, 0x1.179e5b99797fep-571, 0.0,
     0.0, 0x1.408caee245172p-848, 0.0, 0.0, 0.0, 0.0, 0x1.5b3f671cd48d6p-644, 0.0,
     0.0, 0.0, 0x1.bf6dfe2a185c5p-857, 0x1.09264fc27b0fcp-576, 0.0,
     0x1.24e6a7011001ap-1003, 0.0, 0x1.8172f63816c4ep-853, 0x1.f6bfc70d4ebadp-19,
     0x1.f5db5029d9cafp-213, 0.0, 0x1.9097b8cdcd6e6p-371, 0x1.4afa05b0c9c22p-63, 0.0,
     0.0, 0x1.158f0a77f3c8p-611, 0.0, 0x1.2708d4b36e124p-641, 0.0, 0.0,
     0x1.50a94887c2c75p-979, 0.0, 0.0, 0.0, 0x1.0c8de50bf6332p-742,
     0x1.c12432ec10c55p-498, 0x1.ce5b1ae2ae23fp-631, 0.0, 0.0, 0.0,
     0x1.70ef0852587e1p-729, 0.0, 0x1.c2ebacd186d28p-368, 0x1.9a72d11791a75p-376,
     0x1.762aee8292384p-892, 0x1.e8429b4bb40fp-599, 0x1.45acc83deaabdp-562, 0.0, 0.0,
     0x1.eac21396cc8b6p-440, 0.0, 0x1.827135c744979p-187, 0x1.f8de1bd9842b7p-949, 0.0,
     0x1.f26dde9133f8dp-638, 0x1.5f613f8a50135p-717, 0.0, 0x1.291993b9bc32p-257, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f965f90e1d85p-485, 0.0,
     0x1.1edea27906e98p-996, 0.0, 0.0, 0x1.b1e1eb509abafp-593, 0x1.c7fc42c6f1885p-300,
     0x1.87c0972d8df3cp-200, 0.0, 0.0, 0.0, 0x1.61022459575dap-863,
     0x1.dc7d769ed5ddp-411, 0x1.be28528e38df6p-346, 0.0, 0x1.2c8da43c4763ap-479,
     0x1.558571540cb4ap-870, 0.0, 0.0, 0.0, 0x1.eac7fec7d8498p-422,
     0x1.3224c28cbbe73p-235, 0x1.c0f3c26d62185p-878, 0.0, 0x1.b125d634c8eb1p-211, 0.0,
     0x1.64073f466971ep-162, 0.0, 0x1.0dbfcf7050b6dp-972, 0.0, 0.0, 0.0, 0.0,
     0x1.f39687eb6ae5p-392, 0x1.f6afdfc766521p-468, 0.0, 0x1.76db84fcf2708p-901,
     0x1.56b3b6dd9b7b5p-201, 0x1.eead5ae26c954p-61, 0x1.eceed20e95402p-186,
     0x1.fc68f10ff0187p-316, 0x1.3ccd1d0d2db93p-795, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dabd0cfd3c7b3p-408, 0x1.f968a234776ecp-781, 0x1.ec47663e5ad45p-899, 0.0, 0.0,
     0x1.2b58c99af2c7bp-392, 0.0, 0.0, 0x1.5f168eb2e68adp-794, 0x1.49f6a678dab8cp-706,
     0.0, 0x1.e77815ebb5ec1p-437, 0x1.0e79714d3f4ccp-346, 0.0, 0x1.836019daf9ae6p-668,
     0x1.9ebfca6350925p-838, 0.0, 0.0, 0x1.ed04651419d7fp-755, 0x1.24aa8151db8f6p-271,
     0x1.d13b5521abb0fp-452, 0.0, 0x1.9e8c1c2fced99p-117, 0x1.2c476891975acp-787, 0.0,
     0x1.9c06b36828683p-308, 0x1.342fb4ed02336p-762, 0.0, 0.0,
     0x1.5c988e0e03902p-1001, 0x1.940c6dd27d6ccp-561, 0.0, 0.0,
     0x1.bad8a9c30b497p-491, 0x1.1795119c63a66p-723, 0.0, 0x1.1ec784aac64eap-920,
     0x1.083072f00649fp-834, 0.0, 0.0, 0.0, 0x1.3e23e360d0aa3p-8,
     0x1.3a73018fd662cp-288, 0x1.2065adc584dc2p-805, 0.0, 0x1.6f0b37fd06ec9p-275,
     0x1.e0f8f08e26e7cp-196, 0.0, 0x1.8321cbeb7b69fp-753, 0.0, 0x1.38ea531b0e002p-35,
     0.0, 0.0, 0x1.35752cd942a3ep-868, 0x1.e3ea08d687198p-1014,
     0x1.87f39fef59201p-393, 0x1.9adcb31e31954p-670, 0x1.9a72a6bb093cdp-508, 0.0,
     0x1.c5fdffc857c0fp-675, 0.0, 0x1.6a2cd63d43db1p-513, 0x1.f531228181704p-66,
     0x1.ebb050b64d7eap-285, 0.0, 0x1.f679cf47e86c2p-406, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.61b1ebb97e04ap-790, 0.0, 0x1.eaad4bee6e56p-719,
     0x1.a8ef06fde3df5p-876, 0.0, 0.0, 0.0, 0x1.b498761efa1bap-487, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6ae396d56b341p-719, 0.0, 0.0, 0.0, 0x1.aa1c6854c86e2p-401,
     0x1.7c26672629a88p-698, 0.0, 0x1.e20ab5619fae9p-938, 0.0, 0x1.d9ee0c8947c84p-917,
     0.0, 0.0, 0x1.3fd28608853f6p-815, 0x1.fddc273bb8852p-268, 0.0,
     0x1.e31b2148a2e2dp-714, 0.0, 0.0, 0x1.1c4c3d66dc341p-596, 0x1.0640cb15116e2p-629,
     0.0, 0.0, 0.0, 0.0, 0x1.4760e1101b4dcp-927, 0x1.24bf0008d25e8p-402,
     0x1.91bc277a28a69p-96, 0.0, 0.0, 0.0, 0x1.ab3150d972d3fp-932,
     0x1.3c4f4a310d168p-877, 0x1.a3edd7a5316cap-713, 0x1.4974e145354bbp-62, 0.0, 0.0,
     0.0, 0.0, 0x1.c60b210753e79p-436, 0x1.8699bb43b81bbp-552, 0x1.975235c6f3e5ep-689,
     0.0, 0.0, 0x1.f5b568c8a28a1p-596, 0.0, 0.0, 0.0, 0.0, 0x1.80c5e96adb18ap-516,
     0x1.82d5eede07c8ep-511, 0x1.47c21e1d322bdp-16, 0.0, 0.0, 0.0,
     0x1.1c98b6e5ac9dep-553, 0x1.c5ec918c320adp-221, 0.0, 0x1.c0bdd8e9aeec9p-66, 0.0,
     0.0, 0.0, 0x1.fd0333bfe21e3p-302, 0x1.ecfa5c4c46f6bp-762, 0x1.e85777d3a29b4p-50,
     0.0, 0x1.d93127e75c7ebp-406, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9cdac32932a5cp-963, 0.0, 0.0, 0x1.1797517399cafp-826, 0.0,
     0x1.fd2d34463c1fcp-291, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.43891feccbf86p-81, 0.0, 0.0,
     0.0, 0x1.08cbee0d0c87ap-738, 0.0, 0.0, 0.0, 0x1.de9666d3621a4p-898,
     0x1.87bcdaa60a998p-639, 0.0, 0.0, 0.0, 0x1.60ae4321b7254p-699, 0.0,
     0x1.3a500d5debf9p-31, 0x1.9f859e3e5deb3p-424, 0x1.1a2fa87ac0d6ap-389,
     0x1.bd4bffa4fcd34p-259, 0.0, 0x1.959144a58d0dfp-842, 0.0, 0x1.9e70960221e8cp-822,
     0.0, 0x1.bf487eeb1559p-910, 0x1.563949f8a9a0ap-811, 0.0, 0.0, 0.0, 0.0,
     0x1.0163ac1551226p-714, 0x1.7687542977771p-735, 0.0, 0x1.712b12689e0ffp-430, 0.0,
     0.0, 0x1.fc82fddd8e6c9p-397, 0x1.83f705fd899dp-425, 0.0, 0x1.00feaa6692a6dp-73,
     0x1.a1bf855c77c55p-124, 0x1.1480cde0d28a1p-272, 0.0, 0x1.e76421e74d4bp-621, 0.0,
     0.0, 0x1.0cd44c00baea6p-914, 0x1.c077e41fef7f8p-174, 0x1.5935f7d7f4757p-363, 0.0,
     0x1.dc86c21c1a2d2p-102, 0.0, 0x1.4b3d4902f69ecp-354, 0.0, 0x1.34e94c87364a9p-181,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b626f472bbe89p-894, 0.0, 0x1.8c51dc7461371p-991,
     0x1.68b4f582c47ecp-563, 0x1.6416483b5b45ep-684, 0x1.162e39d0fe4a5p-135, 0.0, 0.0,
     0x1.54c5e94dd93f9p-633, 0.0, 0.0, 0x1.dbc98e489f84dp-133, 0.0, 0.0, 0.0,
     0x1.9674980ad8519p-43, 0.0, 0x1.843b1c066c858p-835, 0x1.7724b91f10832p-762, 0.0,
     0x1.af5d4918a74f7p-63, 0.0, 0x1.46387ae7eb20fp-901, 0.0, 0.0,
     0x1.b460bf553fc9fp-393, 0x1.2f975ea78b191p-687, 0.0, 0x1.29092d5df4185p-526,
     0x1.4e732088adb5ap-158, 0.0, 0x1.34914d732c2fcp-811, 0x1.f5ca21e397c1cp-248,
     0x1.ab1fc44ff85c3p-825, 0x1.8d4b5cc112237p-316, 0x1.90eb1e1e8dd62p-280,
     0x1.14ce3c68adb71p-472, 0.0, 0x1.180ac22a01743p-848, 0.0, 0x1.280c16f3a962fp-266,
     0x1.f28f994870cbep-816, 0.0, 0x1.782b2504f7c55p-736, 0.0, 0x1.5172e31807587p-674,
     0x1.6f118fa397d4ep-600, 0x1.df2843564bd9ep-640, 0.0, 0x1.a3b3dce1a0d8dp-488,
     0x1.e29c0d8e36066p-87, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aa11ae98b2f7ep-601, 0.0, 0.0,
     0.0, 0x1.ead5ec94b6deap-521, 0x1.31186b41bec32p-329, 0.0, 0x1.e9ee27dcac6p-364,
     0.0, 0.0, 0.0, 0x1.90d069e3be59cp-933, 0x1.79f449f5034fbp-865,
     0x1.da142b1a35387p-916, 0x1.f1daf3f21aa2fp-80, 0x1.bf0ecec19ec22p-175,
     0x1.efe5d28664bbap-938, 0x1.aa7934d8bfe6cp-238, 0x1.9b7ac6a14f922p-171, 0.0, 0.0,
     0.0, 0x1.925a7af69466ap-862, 0.0, 0x1.436f64e0c1138p-455, 0x1.9a2596f0b0867p-664,
     0.0, 0.0, 0x1.ab549d580d46cp-579, 0.0, 0.0, 0.0, 0x1.3fa855e156743p-1020, 0.0,
     0x1.4f66a23b0007cp-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bf6778e73ac2p-365, 0.0,
     0x1.17914df3ddbcfp-822, 0x1.0f4e9fbd0f444p-950, 0x1.d46294d80a6b2p-825,
     0x1.56b38f6f60838p-512, 0x1.0889f21744a66p-905, 0x1.1229f9b50c822p-204,
     0x1.ff05b15d9fd2ap-90, 0x1.0a305f65e94aap-33, 0.0, 0x1.91aea2bb9d88ap-331, 0.0,
     0.0, 0x1.d6f1e1438b747p-762, 0.0, 0x1.03439341881ccp-318, 0.0, 0.0,
     0x1.c970bed657872p-565, 0x1.4ca8252ed881ap-894
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
            tmp1 = Sleef_roundd1_purecfma(tmp0);
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
    printf("Sleef_roundd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_roundd1_purecfma bench acc %la\n", global_bench_acc);
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
