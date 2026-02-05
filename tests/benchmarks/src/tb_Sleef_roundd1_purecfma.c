/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_roundd1_purecfma.c --function Sleef_roundd1_purecfma \
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
     0x1.750e26c5a0a5ap-876, 0x1.8d7367e5f0dc1p-740, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b6bb176d4e9cp-717, 0x1.c39d6992bfac9p-766, 0.0, 0x1.5940001b73fe5p-1016,
     0x1.be10a1621065ep-432, 0.0, 0.0, 0x1.778c79fa33b7bp-345, 0x1.5de4ea8f5f18bp-392,
     0.0, 0.0, 0.0, 0.0, 0x1.686b48655cf97p-385, 0x1.ceaa72c61848p-725, 0.0, 0.0,
     0x1.2817a672b061ap-739, 0.0, 0x1.eda8b8034c766p-683, 0.0, 0x1.8a641756e417p-564,
     0.0, 0.0, 0x1.4b1f6c19a34aap-9, 0.0, 0x1.2660e15c7b7acp-198, 0x1.d18e4e4c3ap-536,
     0.0, 0.0, 0.0, 0.0, 0x1.b4f8174531b5cp-435, 0x1.55a58ee41278dp-554, 0.0,
     0x1.840528cd03436p-450, 0x1.ceac85e1546f1p-988, 0.0, 0.0, 0x1.d2b2fa03cad4p-902,
     0.0, 0x1.764a4725459cp-391, 0x1.67dd7180891fp-572, 0.0, 0x1.6c9e0cc4a3d76p-557,
     0x1.1fedbec1b73bcp-350, 0.0, 0x1.7538da00876fdp-72, 0x1.20936efb5c881p-784,
     0x1.7d9043617b324p-817, 0.0, 0.0, 0.0, 0.0, 0x1.3bddf2fe99eefp-985,
     0x1.111efba49faebp-913, 0x1.3c689b94342dp-842, 0.0, 0x1.d618542210cdfp-221, 0.0,
     0x1.e4be1b8cafc06p-896, 0.0, 0.0, 0x1.4d95e628d4bd2p-736, 0.0, 0.0,
     0x1.a1ad7ea232384p-39, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4aae64de4ef1p-533,
     0x1.a432d3ba0b8f8p-663, 0x1.22e151ad675ebp-499, 0x1.6401c978c7de4p-172, 0.0,
     0x1.17d44686e51c8p-712, 0x1.196c39650456bp-619, 0x1.e9cfb71aba5adp-511, 0.0,
     0x1.a70f4abd821f7p-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db6c96073f81p-21, 0.0,
     0.0, 0x1.7e85439b41fa6p-986, 0.0, 0x1.768c623f431dbp-842, 0.0,
     0x1.3e8ba5e5ce6e2p-46, 0x1.5121576d62b97p-606, 0.0, 0.0, 0x1.9312b4b250a75p-723,
     0x1.1c6bba9fa1b31p-726, 0.0, 0x1.7291eb31b8125p-290, 0x1.c1ed12560a6e6p-166, 0.0,
     0x1.651b16c339964p-833, 0x1.201faaa80401cp-255, 0x1.3884769cbfa8cp-655,
     0x1.e2f1e628f098ep-857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42333607d0de7p-446,
     0.0, 0x1.a89a619888a8fp-582, 0x1.2d8325fc9f3efp-415, 0.0, 0x1.cda362e083cdap-853,
     0x1.7bfba31271be9p-313, 0x1.9774e74cd24ap-4, 0.0, 0.0, 0.0,
     0x1.abbcb293b5a2dp-737, 0.0, 0.0, 0x1.2a25aac2cf76cp-940, 0x1.1da9846b769e6p-877,
     0.0, 0x1.2e2ffcf30a626p-166, 0x1.73483e65c973p-711, 0x1.69ced9651cdf7p-925,
     0x1.e839ec52b0146p-254, 0x1.bab3e594447b6p-527, 0.0, 0.0, 0x1.6174304f2555dp-123,
     0.0, 0.0, 0x1.2c67bec646d8cp-784, 0.0, 0x1.62c9eafc9521bp-810,
     0x1.ec0e1c61613b8p-201, 0x1.d5a8f9518971ap-848, 0x1.715eee435faddp-596,
     0x1.9b0e2f63ef502p-767, 0.0, 0x1.25da623478e75p-186, 0x1.333ab7e6501d3p-880,
     0x1.6dafae7fd0fbcp-443, 0.0, 0.0, 0.0, 0.0, 0x1.2c61125207b9cp-369,
     0x1.8f81d21f8c149p-932, 0x1.153c7651f6495p-263, 0.0, 0x1.f5ffcad6f8438p-32, 0.0,
     0x1.75cbec57574eep-562, 0.0, 0.0, 0x1.cedc407967f56p-508, 0x1.30e783ccc484ap-922,
     0.0, 0x1.309356e225c9fp-26, 0x1.02b26e0f2517fp-149, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22688c038ad61p-957, 0.0, 0x1.2862bc4657e5cp-793, 0.0, 0.0,
     0x1.341abb7619039p-950, 0.0, 0x1.f22231f44b1fbp-975, 0x1.96e3ee3d43ba2p-77, 0.0,
     0.0, 0x1.1385b254617bep-643, 0x1.ab6c2c8f8cbb1p-555, 0.0, 0x1.f368270a5bd3ap-637,
     0.0, 0.0, 0x1.bcc1616e6019p-775, 0x1.f3096fc42d17cp-335, 0x1.6b32f4e99bd95p-655,
     0.0, 0.0, 0x1.06b719816f3a2p-213, 0.0, 0.0, 0x1.43f99a0d46f5dp-710,
     0x1.2b1b8d0a10b6fp-113, 0.0, 0x1.c42ee82ea00a5p-881, 0.0, 0x1.14e5fc42f7cb8p-827,
     0x1.283167f9ca776p-433, 0x1.e15551943bad9p-997, 0x1.e0110a391ec43p-642, 0.0, 0.0,
     0.0, 0x1.ea8bcf55c3613p-311, 0x1.eb98e41fad53p-73, 0.0, 0x1.6a5e7f74c345cp-424,
     0.0, 0.0, 0x1.603d81724d827p-1010, 0x1.611c7d506a383p-243, 0.0, 0.0, 0.0,
     0x1.3889e149da292p-293, 0.0, 0x1.d4a7fdfdb7c13p-927, 0x1.d20147486bf6ep-647, 0.0,
     0x1.b64181aa516e2p-545, 0x1.b91693a8fd039p-893, 0x1.14e385324d743p-411,
     0x1.fad63ed62bb26p-385, 0x1.dfdb3bfebd026p-295, 0.0, 0x1.a3f2aa4e8f62bp-641, 0.0,
     0.0, 0x1.8a68857e3dfedp-424, 0.0, 0x1.617eaf5d089ffp-890, 0x1.683a6c627609ep-747,
     0x1.d30701afbe68p-12, 0x1.8a9184f0086a6p-246, 0.0, 0.0, 0x1.5fc48c02ce4bcp-472,
     0x1.95f84ea52fc46p-176, 0.0, 0.0, 0x1.b71e4cc7db90dp-971, 0.0, 0.0,
     0x1.9aa1879f2e528p-798, 0x1.a050029e0de49p-136, 0.0, 0.0, 0x1.9bcf11ee494bep-849,
     0x1.bca15bbcd4d41p-340, 0.0, 0.0, 0x1.2114fc2e72e26p-457, 0.0,
     0x1.33e11542c0503p-103, 0.0, 0x1.59ba9ea4232b5p-975, 0x1.bd8ff675af403p-323, 0.0,
     0.0, 0x1.b1c022d590ef5p-787, 0.0, 0x1.e30de1d50a9d7p-827, 0.0,
     0x1.0b301ddff104dp-121, 0x1.a5cb7b4441e2bp-683, 0x1.695ddeddd5274p-685, 0.0, 0.0,
     0.0, 0x1.84e34576f3c87p-597, 0x1.86523e578b6e5p-543, 0x1.13db858d8cf47p-640,
     0x1.d44f0a3e8980cp-110, 0.0, 0x1.2ea3a6702481fp-79, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1236fac647365p-29, 0.0, 0.0, 0.0, 0.0, 0x1.d38891bc5dcbfp-1013,
     0x1.273cd14397c2dp-760, 0x1.3cbf7e9a12a5ep-760, 0x1.6118ba7d64eep-675,
     0x1.402797b6c9acep-96, 0.0, 0x1.9f4e9497479a6p-59, 0x1.eae9552410fe8p-934,
     0x1.088b610e34903p-411, 0.0, 0x1.c9fd8de4ae49ep-4, 0.0, 0x1.3b4f4de09ddd6p-385,
     0.0, 0.0, 0x1.a53b0aaa9738p-228, 0.0, 0x1.3ac3971af612ap-534, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7009ff920c8dp-507, 0x1.bb339148d3fddp-770, 0.0, 0.0,
     0x1.675fc6923716bp-864, 0x1.f146f2dff1156p-458, 0.0, 0x1.2f8c00ff32978p-393, 0.0,
     0x1.f800ba73792d1p-595, 0x1.15b4d45b72c83p-113, 0x1.e3ffe9d260ce3p-178, 0.0,
     0x1.83847dcbbac5fp-301, 0.0, 0x1.61782a5d9edc6p-69, 0.0, 0x1.9ca90ccfada01p-854,
     0.0, 0.0, 0x1.3a9db1822e064p-130, 0.0, 0x1.c3ed98b6a2d91p-498,
     0x1.49b096d4a6ae6p-203, 0.0, 0x1.3322b2449fdb3p-516, 0x1.ac50e9bdc886p-101, 0.0,
     0x1.b12d8b501a0b8p-480, 0.0, 0.0, 0.0, 0x1.4c6efafc5af7fp-163,
     0x1.82291de569fp-638, 0.0, 0.0, 0x1.2fbb22cfb29aep-389, 0x1.ea9d4efc481cfp-569,
     0x1.4a1798f91b223p-323, 0.0, 0x1.b0e01279fb5ep-937, 0.0, 0.0,
     0x1.5907fc768e824p-38, 0.0, 0x1.652d6c7017b94p-405, 0x1.43c021450e8fcp-345,
     0x1.7c84e5c2ee4dep-596, 0.0, 0.0, 0.0, 0x1.d7ecd5495643ep-46, 0.0,
     0x1.6b56de77d8927p-378, 0x1.1dfae0a9453a9p-920, 0x1.698f20d78b821p-939, 0.0, 0.0,
     0x1.66cf033be536dp-386, 0.0, 0x1.f5ac5150861eep-485, 0x1.f1a3184053233p-942,
     0x1.4d196a5fb0076p-1019, 0x1.1db935ab6f348p-924, 0x1.49988edaeeb5dp-466,
     0x1.e9ad0dc2c00d4p-402, 0.0, 0x1.f9401a5499d86p-177, 0.0, 0.0,
     0x1.928f1f824a9e5p-233, 0.0, 0x1.469e1b587055ep-940, 0x1.75cc26e4883c7p-376,
     0x1.a0ff407d37be9p-910, 0x1.5f14e73fba74ap-533, 0x1.8b834e79caa8dp-785,
     0x1.8f35a74b8b235p-297, 0.0, 0.0, 0x1.be1d718bb82dp-268, 0x1.286c1fcf1e4b3p-322,
     0x1.31fa55739a982p-113, 0.0, 0.0, 0x1.a9df78cb5ecdcp-222, 0x1.71810d919e4d1p-224,
     0x1.90e3df51e5082p-703, 0.0, 0.0, 0.0, 0.0, 0x1.88286afdce673p-940,
     0x1.6dda4785e5403p-171, 0x1.ebbbeb398e3d8p-857, 0x1.04d163e55843fp-174,
     0x1.8f7681e0d535p-95, 0x1.32dae7fde5131p-575, 0x1.66d83a446b1abp-186,
     0x1.64ca94ca4552ep-583, 0.0, 0.0, 0x1.0186aefe2b603p-594, 0x1.4a13ea51a46bp-14,
     0.0, 0x1.53a2c12f83041p-349, 0.0, 0x1.e59a3ea90da06p-680, 0x1.6dfe3ca9fc924p-222,
     0x1.4a785eba6181ep-179, 0.0, 0x1.d90c77fdd346fp-926, 0.0, 0.0,
     0x1.beb42380c2a38p-810, 0.0, 0x1.9907370f4788p-481, 0x1.28bcd0a366a85p-454,
     0x1.4e68b619f28b3p-103, 0x1.9c27518c7f853p-240, 0x1.2c0779cbfe1bdp-188,
     0x1.5b29849f23e4fp-48, 0x1.9f02c7879ddbbp-243, 0x1.adadc8ae56858p-591,
     0x1.68a391edc98bcp-563, 0x1.0de88c1b6699fp-231, 0x1.d781e56bb75b5p-94,
     0x1.db65cf8808469p-162, 0.0, 0x1.8e1b0ff8fdd86p-157, 0x1.ed1cecbe00fb7p-78,
     0x1.5b208aef7cd7bp-468, 0x1.fd3358b690a52p-772, 0x1.636fd725b4d62p-490,
     0x1.9e7984933378dp-771, 0x1.c261ea11ba353p-395, 0x1.227c0bf6c661ap-650, 0.0, 0.0,
     0.0, 0x1.3a5afa0fe3a17p-611, 0.0, 0.0, 0.0, 0x1.c000499a81323p-4,
     0x1.de00a4912c6afp-506, 0x1.214a374824309p-943, 0x1.bed7a4ae14844p-145,
     0x1.e4af7ae44a7a8p-749, 0x1.2bd94a6771dfcp-768, 0x1.811cab4b581c5p-740,
     0x1.6bdbf881a60f9p-818, 0.0, 0.0, 0x1.6c9f7845cbaefp-451, 0x1.2abc1d222c3b6p-693,
     0x1.5c163773ab562p-730, 0.0, 0x1.660abc5a6ee85p-524, 0x1.caae40bec7fe3p-281,
     0x1.5a1e7f1802bbp-967, 0.0, 0x1.1a22ce3046194p-67, 0x1.05affd8593327p-187, 0.0,
     0x1.ceca9c187d23fp-771, 0.0, 0.0, 0x1.789042e71f908p-884, 0.0, 0.0, 0.0,
     0x1.9ee207d29e535p-677, 0.0, 0.0, 0x1.09b0420696b99p-768, 0x1.939ae1d44222ep-818,
     0x1.c7a4d63887695p-125, 0x1.e257b1ba7ae7p-911, 0.0, 0.0, 0.0, 0.0,
     0x1.a536d242d54d3p-733, 0.0, 0.0, 0x1.460c3ef226269p-990, 0.0,
     0x1.d18b08a621bfap-401, 0x1.c7ced5464a2b8p-998, 0x1.96b4642239b17p-995, 0.0, 0.0,
     0x1.39f3b29c09a3cp-870, 0.0, 0x1.cc6bc93b52ef2p-3, 0.0, 0x1.6be9bd9787cbfp-778,
     0.0, 0x1.a10f6268888bap-39, 0.0, 0.0, 0x1.c10885338ff2bp-940, 0.0, 0.0, 0.0, 0.0,
     0x1.8ef95bdf10c39p-349, 0.0, 0x1.9a8ddca89edd4p-892, 0x1.0e01645542f75p-207, 0.0,
     0.0, 0x1.dc30d29dbe2cap-238, 0.0, 0x1.1cd0d886ea7a5p-891, 0.0,
     0x1.31e4b9e7b6e3ap-895, 0.0, 0.0, 0x1.326c0f886cb2bp-400, 0.0,
     0x1.57f4fcf49e0cap-823, 0.0, 0x1.5a3bd5e17c685p-206, 0.0, 0.0, 0.0,
     0x1.d8c1a161e94f6p-971, 0x1.95e3ed062641ep-30, 0.0, 0x1.99113aec84562p-847,
     0x1.463bb77f0dbbdp-850, 0.0, 0.0, 0x1.8a7a9bb0f9bc5p-814, 0.0,
     0x1.f14d55fe6cb1p-461, 0.0, 0x1.a9e53c0b25195p-475, 0.0, 0x1.1282e03e2051bp-653,
     0.0, 0x1.9786057684e5p-462, 0.0, 0.0, 0x1.2520f2a83aa4ap-244,
     0x1.f53f0d47ae4f8p-891, 0.0, 0x1.e9b4c6af46bd1p-155, 0.0, 0.0,
     0x1.e6f0d66ef81fep-206, 0x1.7be434d529d15p-384, 0x1.d7226c35cbf86p-225,
     0x1.0fb38c8cef5fcp-293, 0x1.1cb90f7d3d98bp-717, 0.0, 0x1.0016a4a8720bp-966,
     0x1.0eb889648becbp-253, 0x1.714f60079405dp-200, 0.0, 0.0, 0x1.48a813dce2105p-609,
     0.0, 0.0, 0x1.417ed940db15ap-937, 0x1.aa5316f446b4ep-830, 0x1.f40cfedb353b6p-620,
     0x1.81ac4abeeb8efp-230, 0.0, 0x1.5997e2a43c0dap-805, 0x1.6ea0e37f8703p-707,
     0x1.1978f678c7627p-59, 0x1.ae4a667838f28p-622, 0.0, 0x1.53ac44ef6afdp-524,
     0x1.7bd6c69c1011ap-830, 0x1.94149ae21d4d2p-808, 0x1.a97d094ba36e3p-541,
     0x1.65d7392f28cb7p-816, 0.0, 0x1.81d6b96e1daf2p-231, 0.0, 0.0,
     0x1.16aef37fe981fp-56, 0x1.ac657d58678e9p-102, 0.0, 0.0, 0x1.d1e93f51bf603p-111,
     0.0, 0.0, 0.0, 0.0, 0x1.7ae439a84adbap-639, 0x1.0f7f63fcba1a7p-541, 0.0, 0.0,
     0.0, 0x1.f1a50ae2fc39fp-653, 0.0, 0.0, 0x1.565cfc70d147ap-605,
     0x1.3b3ceb4f98ad6p-703, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35ef4b4112ba9p-611,
     0.0, 0x1.0daa8e14eccbcp-96, 0.0, 0.0, 0.0, 0.0, 0x1.0fe0b17e9aea6p-516, 0.0,
     0x1.0e4b5a7fdcf4cp-72, 0x1.3453b18eb6126p-148, 0.0, 0.0, 0x1.a91230c4a1b49p-970,
     0x1.269c57ecb2e4ap-787, 0.0, 0x1.0fb47872d5549p-955, 0.0, 0x1.1e4cf86566226p-528,
     0.0, 0.0, 0x1.9168f793e826fp-621, 0x1.16d65ff5dda68p-866, 0.0, 0.0, 0.0,
     0x1.93c1ae7d4ff07p-15, 0.0, 0.0, 0x1.ed42888b18278p-515, 0.0,
     0x1.c48d44ec2cf71p-649, 0x1.6534c14a38c82p-922, 0.0, 0.0, 0x1.9f7350ef0c432p-647,
     0.0, 0.0, 0.0, 0x1.f030b2452d283p-697, 0x1.8031df9d885b7p-451, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7e4b1b23a556cp-685, 0.0, 0.0, 0.0, 0x1.bc8cf9688a939p-280,
     0x1.0fffd412a4b75p-72, 0.0, 0x1.cd3f6c7c340eap-715, 0x1.910b05f886c87p-270,
     0x1.70da124d4cec5p-565, 0.0, 0.0, 0x1.3710e2be9d98p-972, 0x1.69c6e2122ddcp-989,
     0x1.0ed19f8eded55p-836, 0.0, 0.0, 0x1.ae82082bc7d7dp-480, 0.0, 0.0, 0.0, 0.0,
     0x1.4fb36b15aff3bp-372, 0x1.95a2bba84daedp-903, 0x1.ff34069675c36p-302,
     0x1.5a94b561b6a87p-182, 0x1.da4c963bc9f07p-257, 0.0, 0x1.2dc13cac39ef7p-686,
     0x1.165000501381ep-263, 0x1.0dfad4c67c89p-283, 0x1.43c0c2fe31222p-749, 0.0,
     0x1.304575a31f327p-447, 0.0, 0.0, 0x1.835c4e36553dfp-257, 0x1.256d41f6b12dcp-356,
     0x1.7ca6e7666b4c8p-567, 0x1.694a8dc5bbd0cp-280, 0x1.49d3ab1b37d3p-182, 0.0,
     0x1.d0b4a07479a5fp-69, 0.0, 0x1.afcf7901caf22p-652, 0.0, 0x1.97440768f4bfdp-810,
     0x1.d9edc35857c1p-471, 0x1.1e93fff98d8d4p-508, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8796c6f5a324p-504, 0.0, 0x1.a4c29c11afd04p-643, 0x1.e972a8ef8814fp-34,
     0x1.eb40f8fbf54a3p-95, 0x1.73402e230e453p-678, 0x1.48927a1f3c93ap-269, 0.0, 0.0,
     0x1.aebce6bcaf72p-894, 0.0, 0.0, 0.0, 0x1.013b1d25069cdp-108, 0.0,
     0x1.71faf44baa499p-193, 0x1.7406ca6350b72p-774, 0.0, 0x1.11b6a8d31e732p-621, 0.0,
     0.0, 0x1.88d06bc59c587p-465, 0x1.688b10c5fe19ap-414, 0x1.9e8d2a9713361p-180, 0.0,
     0.0, 0x1.d77dca668d9dap-259, 0.0, 0x1.d07ecd5a089c6p-506, 0x1.24cfb2322c452p-973,
     0.0, 0.0, 0.0, 0x1.3c66c8fd63ba3p-122, 0x1.6a0aea30152ap-484,
     0x1.ae7f2892c23b3p-277, 0.0, 0.0, 0x1.4bcbf55f0675ep-564, 0.0,
     0x1.3d8bf9999b067p-25, 0.0, 0.0, 0.0, 0x1.2b9e5ba57401ep-180,
     0x1.4f7eba95d5d7bp-118, 0.0, 0x1.0208c5ab4e295p-711, 0x1.1170af85e7415p-572,
     0x1.307552b5aa4ffp-900, 0.0, 0x1.3b7b44b1e870ep-729, 0.0, 0x1.00807a4b1f64fp-599,
     0x1.6767f7e261e71p-642, 0x1.e1caae97ddd1p-473, 0x1.d612970e14932p-465,
     0x1.c7083d15fbd03p-419, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2aadbdfa673e1p-19, 0.0, 0x1.6e2ace39ffc2dp-55, 0.0, 0.0, 0.0, 0.0,
     0x1.24d4693239489p-257, 0.0, 0x1.0528081b9bc82p-567, 0x1.80d69a1da3c86p-438,
     0x1.3849e91affc9p-325, 0.0, 0x1.c19ba0c1a02a2p-608, 0x1.340034227699fp-682, 0.0,
     0.0, 0x1.5c0341c0d43d4p-254, 0.0, 0x1.f306827c3f7bbp-968, 0.0, 0.0, 0.0, 0.0,
     0x1.0ed9233b2d225p-955, 0.0, 0x1.d88b848b68a68p-944, 0x1.1310e1829dc8dp-885, 0.0,
     0x1.2d17ff779238bp-152, 0x1.44e980f00c1dcp-756, 0x1.ac5b8979e1bb5p-235, 0.0, 0.0,
     0.0, 0x1.aeeeb6efde93ap-934, 0.0, 0.0, 0.0, 0x1.8c55b752994cfp-979,
     0x1.3aeae31e04459p-997, 0x1.da4941ad08b16p-408, 0.0, 0x1.f8920ecc48474p-161, 0.0,
     0.0, 0x1.9f7db31d743fap-25, 0.0, 0x1.8eb810927cea7p-501, 0x1.62f01e074dd38p-169,
     0x1.f2ac82682d1dep-829, 0.0, 0x1.978e7ae3372bdp-594, 0.0, 0x1.7a0d280426affp-13,
     0x1.90d787da0e215p-548, 0.0, 0x1.3a21929ddfd65p-916, 0x1.88165e990ae4cp-659,
     0x1.34b30453eef2ep-734, 0.0, 0.0, 0x1.fbc35906bb2bdp-442, 0.0, 0.0, 0.0,
     0x1.1e3ae3c11836ap-281, 0.0, 0x1.e52dee650d08fp-445, 0.0, 0x1.537220f92d15fp-594,
     0.0, 0x1.99dd3b7ffcc67p-621, 0.0, 0x1.558591ed6964fp-456, 0.0, 0.0,
     0x1.fc55a193ad7dep-163, 0x1.7ee44ff3bd88cp-540, 0x1.53a1ac23789b5p-636, 0.0, 0.0,
     0x1.2de7ab5b40004p-903, 0x1.bb1380e123932p-557, 0x1.0e04d6da0fed8p-801,
     0x1.47226cbf55841p-91, 0.0, 0.0, 0.0, 0.0, 0x1.2963aa5b71bffp-779,
     0x1.399ac3ac68049p-956, 0.0, 0x1.a0ec6cc5626cp-414, 0.0, 0x1.1dc9a9dd99e85p-688,
     0.0, 0x1.c950f1be6ccbep-67, 0x1.839021761ab78p-506, 0x1.1c363b88a16edp-652, 0.0,
     0.0, 0x1.7722049de8a09p-717, 0.0, 0.0, 0x1.74a75f1ab3cf8p-354, 0.0, 0.0, 0.0,
     0x1.c5db2cddc0586p-736, 0x1.ad04ac5ca76fcp-261, 0.0, 0.0, 0.0,
     0x1.4fe7a0383afd6p-412, 0x1.0e8653521f497p-667, 0x1.602d43c52abffp-283,
     0x1.c6bfb884743afp-667, 0.0, 0.0, 0.0, 0x1.bf2332fd64726p-706,
     0x1.15e3d2c3642bfp-964, 0.0, 0x1.7479877b402aap-741, 0x1.37c93525c606bp-988,
     0x1.6ded45881e6a7p-316, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e8dc288be3726p-35,
     0.0, 0.0, 0x1.938dcebda8625p-124, 0.0, 0.0, 0.0, 0.0, 0x1.8c8ace36af062p-280,
     0x1.dc9ecb7c3264ap-528, 0x1.e09824bfdb264p-988, 0x1.257195f59c6cbp-377, 0.0,
     0x1.8c9c7849fdd54p-166, 0.0, 0.0, 0x1.033936fbce45p-312, 0x1.9b8e71cb21436p-184,
     0.0, 0.0, 0.0, 0x1.f7e4102406274p-503, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4809df17afd24p-999, 0x1.224334bb8aed7p-923, 0.0, 0x1.ce529531764d3p-1015,
     0x1.ca35d0872e0fap-268, 0.0, 0.0, 0.0, 0x1.2c6527eb3eabap-933, 0.0, 0.0,
     0x1.bb864c043e201p-509, 0x1.eddbe6c5ae951p-123, 0.0, 0x1.7cdfab3cd9856p-481, 0.0,
     0x1.137548c534115p-43, 0.0, 0x1.a22b2a69fda9dp-168, 0.0, 0x1.3c9ee64f2b3f7p-261,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72ffe48b6b034p-940,
     0x1.fbae3769a0f88p-840, 0x1.deb057deb72f1p-131, 0.0
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_roundd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
