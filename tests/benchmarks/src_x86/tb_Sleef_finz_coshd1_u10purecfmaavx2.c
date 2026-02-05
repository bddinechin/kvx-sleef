/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd1_u10purecfma.c --function \
 *     Sleef_finz_coshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.11428636ca12fp-952, 0x1.ac04fdec80751p-974,
     0x1.6e3f5c8ef7d66p-843, 0.0, 0x1.ddb9db1ab5ac7p-710, 0x1.210687119cf5ep-414,
     0x1.8815e17b5ddbep-846, 0.0, 0x1.671b2e86c246bp-52, 0.0, 0.0,
     0x1.79255c8048aap-700, 0.0, 0.0, 0.0, 0.0, 0x1.ecb650d03c452p-907,
     0x1.f5360c2b5879fp-349, 0x1.a7c9a006e38b3p-908, 0.0, 0.0, 0x1.709d1863cdbc6p-225,
     0.0, 0.0, 0.0, 0x1.25a2537ba4c9dp-174, 0x1.7698b9a754d5dp-445,
     0x1.28c19e672ea44p-441, 0.0, 0.0, 0.0, 0x1.b75e7588a0e5ep-549, 0.0,
     0x1.d65a466026194p-875, 0.0, 0.0, 0.0, 0.0, 0x1.aa0d2c7a630a5p-201, 0.0,
     0x1.39dd81f683678p-432, 0x1.3adfb4fa1eaffp-198, 0.0, 0.0, 0.0,
     0x1.7525a706d1bd3p-338, 0x1.40c41704cc7a7p-168, 0x1.b0f267f6b8e8dp-788, 0.0, 0.0,
     0x1.c366902790005p-331, 0.0, 0x1.3807fc540af14p-338, 0.0, 0.0,
     0x1.c06e58ae30b83p-280, 0x1.bc63de3891581p-785, 0x1.3d32123dacafap-340,
     0x1.3cccc3d6c9b38p-374, 0.0, 0x1.c02346afddd41p-859, 0.0, 0.0,
     0x1.344892922014bp-643, 0.0, 0.0, 0.0, 0.0, 0x1.d3e4374ebabfap-29,
     0x1.fea258c06c196p-188, 0.0, 0.0, 0x1.05a3ac4b9e51dp-889, 0x1.a39bce979329dp-27,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3fe6c9091050bp-47,
     0x1.550dae9b1ed35p-283, 0x1.a141aa6843e62p-893, 0.0, 0.0, 0x1.64cc07d43bc53p-995,
     0.0, 0x1.68f8830d1ade7p-426, 0.0, 0.0, 0.0, 0.0, 0x1.e1425fefc7dcdp-906, 0.0,
     0x1.cd3aa050a17c4p-975, 0.0, 0.0, 0x1.38d8782acc141p-591, 0.0,
     0x1.bde5b1abc9d24p-823, 0.0, 0.0, 0x1.7033a154877c4p-539, 0.0,
     0x1.7f12da470dfdap-358, 0.0, 0.0, 0x1.bd797a55964d9p-203, 0x1.c7c27dd4a7e3p-528,
     0x1.a23afda31abffp-955, 0x1.31af7cc22a48bp-992, 0.0, 0x1.1828da7ddf367p-178, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5386b877e105fp-388, 0.0, 0x1.58d2183239c08p-191,
     0x1.93f86b951d96cp-967, 0x1.4e63ae038ea1bp-840, 0.0, 0x1.5b0bdde52e0cap-1018,
     0.0, 0.0, 0.0, 0x1.222c862c5cf42p-966, 0x1.54c9dabad169bp-86,
     0x1.952c6e56e49acp-378, 0x1.77b9988783f4fp-884, 0.0, 0.0, 0x1.0d69528ada7c3p-319,
     0x1.0e0bafe56c832p-913, 0.0, 0x1.bd5d5f24d2d51p-333, 0x1.8aa202793aaccp-133, 0.0,
     0.0, 0.0, 0x1.4602fb5303024p-890, 0.0, 0x1.a87947ae44b82p-177,
     0x1.63260cae52e2p-214, 0.0, 0x1.6ace9153b4197p-223, 0.0, 0x1.7b7018955bd61p-2,
     0x1.6bbb8369a129fp-656, 0x1.931c820eaedbep-73, 0.0, 0.0, 0.0,
     0x1.1f62e5da7c66dp-961, 0.0, 0.0, 0.0, 0.0, 0x1.a3932aedea77cp-107, 0.0, 0.0,
     0.0, 0x1.84f8514e07a33p-1010, 0.0, 0x1.24d7d3ea097d2p-229,
     0x1.e57d2d46eda4fp-705, 0x1.ee699aea0ea68p-602, 0x1.a33168fcd6f51p-441, 0.0, 0.0,
     0x1.572010e26087cp-822, 0x1.c71a6116d8f88p-8, 0.0, 0.0, 0.0, 0.0,
     0x1.f8b448ec843c1p-867, 0.0, 0.0, 0x1.bdf22b28f8116p-211, 0x1.6538fd3b4782p-965,
     0.0, 0.0, 0.0, 0x1.49bd104717f5bp-855, 0.0, 0x1.66a888b8b0414p-639,
     0x1.36396ec10320bp-983, 0.0, 0.0, 0x1.6200f37d15dcep-501, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.58de08ad46809p-317, 0.0, 0.0, 0.0, 0.0, 0x1.b037226ee39a3p-730, 0.0,
     0x1.c131353d68011p-288, 0.0, 0x1.aa2538abf197cp-180, 0.0, 0.0, 0.0,
     0x1.5ebca18d49abbp-614, 0.0, 0.0, 0.0, 0x1.216959c307f05p-43,
     0x1.ecf034e5ea927p-330, 0x1.878c04b140505p-252, 0.0, 0.0, 0.0, 0.0,
     0x1.fa0241791e791p-751, 0x1.5886bfbdd5485p-631, 0.0, 0x1.fc8ab8aa36d0ep-806, 0.0,
     0x1.6551c4d60cb58p-704, 0x1.8814458d325f9p-636, 0x1.1e769637ea66p-626, 0.0, 0.0,
     0x1.f3399bff2152fp-848, 0.0, 0x1.0e8d8206a1978p-6, 0.0, 0.0, 0.0, 0.0,
     0x1.4a87d4f4296bep-556, 0x1.c6850eaf61066p-43, 0x1.5c5dcc6930c2ap-762,
     0x1.da231ceea02fdp-875, 0.0, 0.0, 0x1.c2c038c2058e9p-28, 0x1.de45204e9bc33p-552,
     0x1.ae1417e112cbfp-934, 0x1.3b8b30df7aa3p-259, 0x1.d76e5d6a1bacp-719, 0.0, 0.0,
     0.0, 0.0, 0x1.590d330db2489p-48, 0x1.8f5ce0aea7013p-712, 0.0, 0.0,
     0x1.eafa54525bfb8p-986, 0x1.ce359c3488298p-943, 0.0, 0x1.d0477b48c9e46p-448,
     0x1.b93c4f7e5bb6dp-418, 0x1.4e2a02d10ad15p-433, 0.0, 0.0, 0.0, 0.0,
     0x1.bc7e181fda0c2p-764, 0x1.94bce4d8e8aadp-496, 0.0, 0x1.15206f6a0fd35p-16, 0.0,
     0x1.275bbe4053068p-797, 0x1.711be99c9cadfp-1008, 0x1.f7447d2468b1fp-199, 0.0,
     0x1.5891c3515183ep-681, 0x1.fcd1ed18d15fdp-963, 0.0, 0x1.9e967c8efa7f2p-995,
     0x1.92280fa40693dp-87, 0x1.3c5a6edf0ae76p-655, 0.0, 0x1.a484c6332fb7bp-336,
     0x1.81cb30de15622p-228, 0x1.855dc3ca4464ap-773, 0.0, 0x1.f9fecb06a0276p-652,
     0x1.0da9cafe9ac1cp-471, 0.0, 0x1.7a11e7c2b55a6p-215, 0x1.cce3a4dcf43cep-129, 0.0,
     0x1.eb1bb52496f04p-731, 0x1.c9640df98f1fcp-932, 0.0, 0x1.13cbb72407505p-882,
     0x1.b6286cd057d46p-862, 0.0, 0.0, 0.0, 0x1.5604282fa7982p-907,
     0x1.58f09eac5fa4p-142, 0.0, 0.0, 0x1.5c2f1440f59a1p-411, 0x1.75e225786df5bp-518,
     0x1.2620f42e2b511p-743, 0.0, 0.0, 0x1.d5dc9b91fd4fdp-46, 0x1.b6c52c2476ddep-552,
     0.0, 0x1.39a3989b36b4fp-964, 0x1.bac95e23502fp-550, 0.0, 0x1.257590ccc74efp-708,
     0x1.a5a07793e1c54p-927, 0.0, 0.0, 0x1.7ba67fe7fd5f6p-306, 0x1.93a2278c710f8p-49,
     0x1.2c25b04c9d6afp-626, 0x1.d60bce48af0e8p-96, 0x1.e1595235e8329p-42,
     0x1.d2f73c7b8becdp-493, 0.0, 0.0, 0x1.f0403436624ep-223, 0x1.30b941d80322cp-128,
     0.0, 0.0, 0x1.ec773cfc6bab8p-538, 0x1.54d8c727a2e98p-620, 0.0, 0.0,
     0x1.9df3c48fcc925p-267, 0.0, 0.0, 0x1.2442db796039bp-931, 0x1.01ffea5c381a3p-887,
     0x1.abcbf77366087p-550, 0x1.e71a225cfd25fp-695, 0.0, 0.0, 0.0, 0.0,
     0x1.cdb36a99ace5ap-268, 0.0, 0.0, 0x1.783950337ceb6p-61, 0.0, 0.0,
     0x1.3e3cd46ba4f76p-511, 0x1.ea1cb7fc2ce8ap-174, 0x1.78176718bd42dp-725, 0.0, 0.0,
     0x1.a1fd7056a7e12p-926, 0.0, 0x1.4bda031997e1cp-462, 0.0, 0.0, 0.0,
     0x1.d02939f8332c7p-224, 0.0, 0x1.ed48d250834ddp-419, 0x1.53e0c1aebfec7p-509,
     0x1.fb4cd784a6dd3p-522, 0.0, 0x1.271b1d83d3341p-384, 0.0, 0x1.fb094d0b4eda2p-138,
     0.0, 0x1.6fbe0bfa471a1p-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72c85c77514ffp-147,
     0x1.0f286653e098p-467, 0.0, 0.0, 0.0, 0x1.6625705d0763cp-578, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6fde548d29d89p-177, 0.0, 0.0, 0.0, 0x1.a9c7183cb9c1fp-895,
     0.0, 0.0, 0x1.a729902df77dcp-1015, 0.0, 0x1.2b0075cd44e1p-791,
     0x1.a534f8cb6d9bep-995, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ccce681fea565p-229,
     0x1.9b16f873321cdp-993, 0x1.bba45b47e5a0dp-161, 0x1.a3574ccd34989p-514, 0.0,
     0x1.2831c22718529p-286, 0.0, 0.0, 0x1.6139e16cf78ecp-520, 0x1.281f2bd44a5b2p-255,
     0x1.5daeffa9b51b7p-856, 0.0, 0x1.a34911fc240aep-957, 0x1.d3ca67e83e8e8p-227, 0.0,
     0.0, 0x1.6501dca551aa7p-231, 0.0, 0x1.4341dd315d338p-925, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.38b2399b732a3p-971, 0.0, 0x1.d1b7e57f47321p-910, 0.0,
     0x1.dcf2213be0ddp-628, 0.0, 0.0, 0.0, 0x1.d28ab112ececap-517,
     0x1.09460d19343a2p-290, 0x1.709614a24e05ap-142, 0.0, 0x1.1ba2021c9700cp-221,
     0x1.d30fde6d00425p-713, 0x1.3113d520a3c5ap-21, 0x1.afae2e71f2b14p-324,
     0x1.c13b619f0754cp-732, 0.0, 0x1.170d1ec019a82p-762, 0.0, 0x1.6a798192ea82cp-237,
     0.0, 0x1.2f52b78fa61dep-979, 0.0, 0x1.1bb41e5f96878p-701, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1f2f6b8273c98p-694, 0x1.e0b3715cf151ep-188, 0x1.0492e6b7e7923p-969,
     0x1.01921c3c13eccp-823, 0.0, 0x1.a2d83804fd10ap-739, 0x1.b9f09160f742ap-386, 0.0,
     0.0, 0.0, 0x1.e24e5ae34aap-196, 0.0, 0.0, 0x1.5f79f004e47b1p-726,
     0x1.e6f6e679c4097p-920, 0.0, 0x1.a677b14231401p-265, 0x1.2f88bea075bc9p-348,
     0x1.9a03b73e657f2p-685, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69f32ee21a7f9p-38, 0.0,
     0x1.2fb2174d82919p-896, 0x1.a6b95e38d36ddp-494, 0.0, 0x1.7c83c0156e751p-402, 0.0,
     0x1.636e084913bc2p-636, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.84b12e2e779c5p-214, 0.0, 0x1.245a7882136c8p-831, 0.0, 0x1.21fa868b7defcp-684,
     0x1.7025af082f00fp-957, 0x1.51a5157bc555fp-1011, 0x1.705900d295367p-16,
     0x1.f035808634bd8p-782, 0.0, 0x1.9c01701858cb9p-357, 0.0, 0.0,
     0x1.329c7c0cbf46dp-351, 0.0, 0x1.effc5f07fc291p-386, 0x1.5453efde44a1p-654, 0.0,
     0.0, 0x1.e8a4163323dd8p-814, 0x1.1f34660efe297p-844, 0.0,
     0x1.336b2d37c4c19p-1019, 0x1.79005db9a3ccfp-887, 0x1.c905a300c8fddp-266, 0.0,
     0.0, 0x1.2d45cc69e1656p-750, 0x1.5135f0e260f19p-968, 0.0, 0x1.7de7ba67c642ep-818,
     0x1.3de6ad1101f91p-441, 0x1.cf42a140c2c5fp-511, 0x1.2f0f7cc3f0e5ep-809, 0.0,
     0x1.c949b96db2ea3p-836, 0x1.fecb664e73b18p-628, 0x1.ac5e2ccbc0481p-14, 0.0,
     0x1.3342dbea2ce0cp-161, 0x1.295f41c15cff2p-599, 0.0, 0x1.7dd64b9f50534p-371,
     0x1.5f26ad462ac85p-57, 0.0, 0.0, 0x1.bb5cb43f4945ep-688, 0x1.b793ca29c0afap-1017,
     0.0, 0x1.7497fceff8f9ep-614, 0.0, 0.0, 0.0, 0x1.55b1cc8e5bb4fp-651, 0.0,
     0x1.3dbf0193cc952p-73, 0.0, 0.0, 0.0, 0x1.8f13fb254a1dap-704, 0.0, 0.0,
     0x1.b9cf84c874235p-274, 0.0, 0x1.e52161b0d2924p-492, 0.0, 0x1.6f0e2f726aa7p-680,
     0.0, 0x1.f169497df0deep-942, 0.0, 0.0, 0.0, 0x1.ee36bade63a09p-926, 0.0,
     0x1.ad7fffbc5765dp-467, 0x1.e4894ee5c613dp-1003, 0x1.3729a4b3bc004p-311, 0.0,
     0.0, 0.0, 0.0, 0x1.5a06a2a4415f5p-661, 0x1.5c83c4de1be9ep-770,
     0x1.ba07d2e0c8823p-1001, 0.0, 0.0, 0.0, 0x1.cd9b5e19d8642p-180, 0.0,
     0x1.379e96c1eb596p-928, 0.0, 0x1.f2b8344bfa655p-405, 0.0, 0.0, 0.0,
     0x1.558433531fb9cp-226, 0x1.99ac66eb928f8p-134, 0.0, 0.0, 0x1.77dabee355a93p-95,
     0x1.3e2a72d02442cp-186, 0x1.6117c322b10bfp-243, 0x1.397ce71808f47p-736,
     0x1.8a19f5182b39fp-750, 0x1.5b2da0610644ap-342, 0.0, 0x1.833d82fb6fee2p-771,
     0x1.405db870824e5p-724, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02948322c565fp-339,
     0x1.6d940b05d5bc3p-106, 0.0, 0.0, 0.0, 0x1.eeb0401f28f89p-525,
     0x1.bafc97235a88p-122, 0x1.2fc607e6c27ebp-880, 0.0, 0.0, 0.0, 0.0,
     0x1.fdeae4ba9576ep-139, 0.0, 0x1.95b10ee4544dfp-414, 0x1.ea181a5182aeep-488,
     0x1.e34a4fd44201ap-681, 0x1.b71a1856bdfaap-207, 0x1.baf691196478bp-26, 0.0,
     0x1.752cd3885bf84p-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8590550944a83p-986,
     0x1.50eb4d9557d6ep-689, 0x1.a37572960afe4p-192, 0.0, 0x1.c72ebdab2212ap-908, 0.0,
     0x1.a56c6b802cb2cp-110, 0.0, 0x1.878537fe8364fp-100, 0.0, 0.0,
     0x1.85c67fc7d3829p-12, 0.0, 0.0, 0x1.db3d458e961d2p-615, 0x1.2049edba3fd3bp-334,
     0x1.5d05b5538ee99p-411, 0x1.a407c490c604ap-490, 0.0, 0.0, 0x1.51bf3cf4ea826p-742,
     0.0, 0x1.802207bc2736ap-743, 0.0, 0.0, 0x1.79b6d04b08aacp-147, 0.0,
     0x1.66efcc6bf38b2p-309, 0x1.ba1565f0b9dc6p-758, 0.0, 0.0, 0x1.1a0350ae499aap-733,
     0x1.49882ff274605p-475, 0x1.97ec8b08ed8d9p-451, 0.0, 0x1.57427881cdd0cp-727,
     0x1.4be907912e6d5p-249, 0.0, 0.0, 0.0, 0x1.f1545e94f2619p-931,
     0x1.6484476c31aaap-943, 0x1.e30fafdbbd7e7p-633, 0x1.72b6bcd9a8a76p-410, 0.0,
     0x1.faade8a32524ap-891, 0x1.d6ba6c6a5b3b6p-194, 0x1.8212135cfcb4bp-6, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b43539c375c95p-874, 0.0, 0.0, 0.0, 0x1.763faac1ca847p-950,
     0x1.15936a99222f1p-296, 0.0, 0x1.fb8f7a90f7879p-381, 0.0, 0.0, 0.0,
     0x1.37eb9fa298ff7p-624, 0x1.cef97919be8cp-295, 0x1.b69ebf78d35a2p-685,
     0x1.46fa7d631ff73p-524, 0.0, 0.0, 0x1.9e97621a1fba9p-225, 0.0, 0.0,
     0x1.d300d841bcbcap-663, 0x1.70916a3cc504ep-550, 0x1.b0202116b6be9p-869,
     0x1.f90bba8a2d113p-850, 0x1.b4f7697428704p-231, 0x1.dda8d895a1d08p-769,
     0x1.488af3bfd80bap-1002, 0x1.97043c93d2fbap-47, 0x1.1d0a3fc94923cp-72, 0.0, 0.0,
     0.0, 0x1.d0833ba349285p-480, 0x1.2e5d3944b3ecdp-863, 0.0, 0x1.792bb2849d00dp-704,
     0.0, 0x1.8e5d9da8c4b61p-72, 0x1.56ae02d7acf17p-745, 0x1.4203b328b56e4p-690,
     0x1.174f9257b27a6p-439, 0x1.6939b8bbc8dd7p-66, 0x1.3f1fd8660af04p-845,
     0x1.10551795c237cp-509, 0.0, 0.0, 0x1.5fea9f111fed7p-868, 0x1.72aee5a063a93p-284,
     0.0, 0.0, 0x1.cfc97d11465e7p-151, 0x1.0727dd48c59bdp-830, 0x1.9bb6560c4180cp-199,
     0.0, 0x1.6f08ecd5d020bp-805, 0x1.99ca08b00f9ap-590, 0.0, 0x1.7e205bfeee784p-335,
     0x1.f7133450f33e7p-917, 0.0, 0x1.dc1cad08746e8p-264, 0x1.4b7133d7915afp-293,
     0x1.eea7f3d108aeep-911, 0.0, 0x1.7f6b7856970c9p-650, 0.0, 0.0, 0.0, 0.0,
     0x1.54e6b2b421cdep-821, 0.0, 0.0, 0.0, 0x1.9bbfda30af6f7p-961,
     0x1.e7b1f83747a9p-421, 0x1.02fc11381521p-627, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e99d9171d95e5p-865, 0.0, 0x1.50b95a87bd0a8p-437, 0.0, 0x1.a8ec8ef747d7ep-832,
     0x1.cd8f36bf2984dp-237, 0.0, 0.0, 0x1.a5d18cff5d9cap-11, 0x1.cbc009afb2302p-438,
     0x1.997096a724956p-497, 0x1.7d3be91c1ee6ep-555, 0.0, 0x1.d18976d7ba78ap-959, 0.0,
     0x1.f1f8e5d8df98ap-241, 0x1.b7e145ae9cb23p-375, 0.0, 0.0, 0x1.1bd64f76951cbp-536,
     0x1.c34112d50c648p-312, 0.0, 0x1.d7f1e02628f44p-551, 0x1.1b0da9a651f0ep-393, 0.0,
     0x1.7be21b08591fap-665, 0x1.cc38b3c7d1326p-521, 0x1.1401882f5cb05p-406,
     0x1.260b73c108273p-741, 0.0, 0.0, 0x1.620f1403846d2p-643, 0x1.86461a5fb85abp-116,
     0.0, 0x1p0, 0x1.a3c0fd313f671p-595, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.597e32b39731dp-781, 0.0, 0.0, 0.0, 0x1.17eb9dcbecafcp-79, 0.0, 0.0,
     0x1.facb21208f99dp-927, 0x1.176292f333dcp-268, 0x1.919cc3b6b60e4p-453, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4affe459e8a7p-640, 0x1.8597c1a96848ap-434,
     0x1.8a6d95002b433p-81, 0.0, 0x1.136ef4a09de2ep-315, 0.0, 0.0,
     0x1.117df826b2686p-545, 0x1.4a9f5454a6b9dp-574, 0.0, 0.0, 0x1.ad3a3d2ffbf74p-397,
     0.0, 0x1.a8b0564167f24p-979, 0x1.e85544b951ef4p-181, 0x1.ab800ce8ebeep-961, 0.0,
     0x1.f4515b716c344p-514, 0x1.accb1723ea5c8p-553, 0.0, 0.0, 0x1.59f26adde9938p-510,
     0.0, 0.0, 0x1.505a6ecb022a3p-735, 0.0, 0x1.021b625b16038p-575,
     0x1.e14c319d8ef37p-789, 0x1.241b6f3171bd6p-107, 0.0, 0x1.cab91d7d8401cp-1009,
     0.0, 0.0, 0.0, 0.0, 0x1.49324b74875b5p-848, 0.0, 0x1.4db6af679985ep-60, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.194aea89eed4cp-766, 0x1.d07b4dbb330cep-485, 0.0,
     0x1.717389c750256p-521, 0x1.843e848e4852ap-275, 0x1.14aa48cdb5316p-750, 0.0,
     0x1.1e9e56059b606p-544, 0x1.f61af262860bdp-237, 0.0, 0.0, 0.0, 0.0,
     0x1.9487d075549b9p-610, 0x1.6d1757d506cfep-65, 0.0, 0.0, 0.0,
     0x1.fe86b2ad1b7c5p-1022, 0.0, 0.0, 0x1.1e53d99d615e5p-183, 0.0, 0.0,
     0x1.f00237ecdbfcep-436, 0.0, 0.0, 0x1.7e22be37b8b1bp-965, 0.0, 0.0,
     0x1.77761202844e3p-54, 0.0, 0x1.9aaeb9cddc2c4p-617, 0x1.5a44b0c2c2546p-286, 0.0,
     0.0, 0x1.4f80bfedd285cp-556, 0.0, 0x1.7d8421550eadfp-356, 0.0, 0.0, 0.0,
     0x1.c2b6759439884p-520, 0.0, 0x1.cacdaa2a30533p-155, 0x1.a0b3c76488524p-493,
     0x1.c9ff3333801bdp-532, 0.0, 0.0, 0x1.2c05dfab5819p-3, 0x1.020c28d115468p-412,
     0.0, 0.0, 0.0, 0x1.272e57b525631p-139, 0x1.153165526c6dcp-214, 0.0,
     0x1.3c7a2fca30ce4p-476, 0.0, 0.0, 0x1.fb8b5e3601d1ep-601, 0x1.e3ca339861a2ep-499,
     0.0, 0.0, 0.0, 0.0, 0x1.1bcda57f1a3fp-121, 0x1.912b4ad31739fp-441,
     0x1.a98d2d0b19355p-434, 0.0, 0x1.0c25721313eddp-780, 0.0, 0.0,
     0x1.bcade8c16e63ap-663, 0x1.747cb31e8a79bp-1, 0.0, 0x1.f6c0c3ebfea28p-302, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.682b9ff7347f4p-578, 0.0, 0.0, 0.0,
     0x1.3c9173960de7dp-626, 0.0, 0.0, 0x1.7e021d5ba4eb5p-551, 0.0, 0.0, 0.0,
     0x1.49aa3419016dep-169, 0x1.22e5a752fb2dp-229, 0.0, 0.0, 0x1.c7f22ad7c5d5fp-880,
     0x1.3a96538d958d9p-407, 0x1.78a83e51de1bdp-525, 0.0, 0x1.fa7edc28118e1p-822, 0.0,
     0.0, 0.0, 0x1.90aabdf82fbe1p-985, 0x1.9f36c15e4b2aap-146, 0.0,
     0x1.6af35b262e9fp-846, 0x1.bc94361c9caf4p-50, 0x1.1116f7992ddcfp-90, 0.0,
     0x1.69d4fe4758fffp-870
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
            tmp1 = Sleef_finz_coshd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_coshd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
