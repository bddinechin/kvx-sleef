/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expd4_u10kvx.c --function Sleef_expd4_u10kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0x1.8d170e4e1870bp-299, 0.0, 0x1.9e76fc12884dfp-461,
     0x1.f4d0f43df8d8dp-398, 0x1.97c85b5287a82p-102, 0x1.35f9357a7bb65p-700, 0.0,
     0x1.b14571f402d8cp-1020, 0x1.558ddf61cadd7p-306, 0x1.8e8761684481fp-330,
     0x1.615752068bfep-367, 0x1.94069b030835ap-810, 0.0, 0.0, 0x1.5b7457d88a524p-426,
     0.0, 0.0, 0.0, 0.0, 0x1.aceb657a84f13p-655, 0.0, 0x1.0b967302112f3p-898, 0.0,
     0x1.1251f67073efp-552, 0x1.93883a710867cp-888, 0.0, 0.0, 0x1.3296540627cccp-405,
     0x1.525a1f57bcca8p-527, 0x1.8d44bba1250afp-405, 0.0, 0x1.74b56e824f547p-654, 0.0,
     0.0, 0.0, 0x1.ae83d71136e9ep-374, 0x1.4b21c5c555fd8p-163, 0x1.6cf3311383dffp-150,
     0.0, 0.0, 0.0, 0x1.01f6747033521p-708, 0x1.b48995e666d6dp-366,
     0x1.a515b8f5c4d35p-750, 0.0, 0.0, 0x1.3d161d2d10795p-646, 0x1.3e25b9b73159fp-217,
     0.0, 0x1.c0607e10c96ffp-753, 0.0, 0x1.6492ea332b323p-253, 0x1.d406b27ffa1efp-121,
     0x1.eb4735882d67fp-522, 0.0, 0x1.156db840ed81dp-629, 0x1.980e057783f8dp-429,
     0x1.fdad6bb840c67p-536, 0.0, 0x1.1fdeb9873413cp-203, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc200b1b1800bp-698, 0x1.0ffc3a6e7ff99p-960, 0x1.a903e2adad087p-939,
     0x1.1bfeb65c505eap-7, 0.0, 0x1.1bc003eb9bea5p-513, 0x1.53e07681d577bp-643, 0.0,
     0x1.69118fe0dafddp-753, 0x1.4f1f5fd8d39b3p-837, 0x1.37a35cdd9a4ecp-199, 0.0,
     0x1.dc0693fe3369bp-644, 0x1.16485efa7d7bp-481, 0x1.e4f1ecd7e435cp-751,
     0x1.f767f2ad95b2fp-332, 0x1.b36d75ba9ef11p-659, 0x1.9977ac00de3afp-76, 0.0,
     0x1.61bd96431b62bp-481, 0.0, 0x1.12d2620e50f3bp-534, 0x1.ae177ad1d425p-335, 0.0,
     0.0, 0x1.1870991fe8c36p-642, 0x1.ea25ee49b68f5p-572, 0.0, 0x1.399cb9ba745e8p-859,
     0.0, 0.0, 0x1.2b4ad8e325698p-341, 0x1.2abc28c8a0c9ap-348, 0x1.437d88bb6215bp-50,
     0.0, 0.0, 0x1.f6deecc40028p-134, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cab3be2ba68ap-8,
     0x1.9b07c5930d4e7p-923, 0.0, 0x1.fbb826dfb54f9p-712, 0.0, 0.0, 0.0, 0.0,
     0x1.4162a0d354ba5p-800, 0x1.b683479c5a8d9p-929, 0x1.5dc7b69215318p-423,
     0x1.587509cd0250cp-111, 0.0, 0x1.194743814546bp-449, 0.0, 0.0, 0.0,
     0x1.d9f97be419eacp-462, 0x1.2c5863f617849p-230, 0x1.d24ed2710ced5p-390,
     0x1.6d4cda0d05e6ep-620, 0.0, 0x1.9b12dd36ad30cp-683, 0x1.6acd91323cecbp-945, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.739b0165a05e2p-724, 0x1.4fc164d248679p-389,
     0.0, 0x1.395b73b829cdbp-502, 0x1.a817e3bd24ba1p-947, 0x1.abd5f6e9aa505p-839,
     0x1.5c6a55a8fda6p-301, 0.0, 0x1.c05f6fc37d53p-986, 0.0, 0x1.8c91761d767f1p-891,
     0.0, 0x1.1b798eff8b2f5p-189, 0x1.299ab9507e8e7p-710, 0.0, 0.0, 0.0,
     0x1.ae4dc935b9878p-605, 0.0, 0x1.11aa9d166fa05p-932, 0x1.94d7d3986a05ep-133, 0.0,
     0.0, 0x1.f0398063ba7e3p-452, 0x1.812887b051579p-943, 0.0, 0x1.2ecaefb144e8ep-27,
     0x1.157d924fa7795p-875, 0x1.a52032116ff94p-592, 0x1.4d74c41aafe75p-236, 0.0, 0.0,
     0.0, 0x1.8a778ca1c652ap-855, 0.0, 0.0, 0x1.443bf4665938dp-59,
     0x1.2cbefe2507394p-556, 0x1.98cae9d3caa46p-220, 0.0, 0.0, 0.0,
     0x1.d0b32462b0334p-471, 0x1.9da6bcf52602dp-599, 0.0, 0.0, 0x1.86d3477f79cd7p-285,
     0.0, 0.0, 0x1.b1c2262880e22p-759, 0x1.57743dc00b0b2p-368, 0x1.f1981000bcbf4p-134,
     0.0, 0x1.74847d3efa6fcp-514, 0x1.7f2971546c9bdp-797, 0x1.b6d50f0df87d6p-39, 0.0,
     0.0, 0x1.e48b228543bfdp-341, 0.0, 0x1.8c2ea12b4b729p-23, 0x1.3bc027fff19cbp-319,
     0x1.8acfc09e18b19p-995, 0x1.1f6a3691ef359p-589, 0.0, 0x1.59988dba61685p-275, 0.0,
     0.0, 0.0, 0.0, 0x1.8ca7ed122bef9p-271, 0x1.c0dbdbbb62f71p-463, 0.0, 0.0,
     0x1.bfaa8fb2e7535p-712, 0.0, 0x1.a09315fc94b67p-281, 0.0, 0.0,
     0x1.66d96ea6aec7dp-953, 0x1.30854519bf962p-301, 0x1.9ddb42f0a67e8p-495,
     0x1.4f5aa9468377p-354, 0.0, 0x1.80a7b250cab15p-365, 0.0, 0x1.66bce6743b59dp-479,
     0x1.f0e563315133fp-644, 0.0, 0.0, 0.0, 0x1.136bd2ad9503bp-939, 0.0,
     0x1.aeda749a5bc64p-113, 0.0, 0.0, 0.0, 0.0, 0x1.0718a97e80175p-540,
     0x1.903db7e894a07p-773, 0.0, 0x1.cfb8cced635c8p-631, 0x1.8d9131f2f368cp-282,
     0x1.f370ba6716bc8p-670, 0.0, 0.0, 0.0, 0x1.e4b055ae38ceap-507,
     0x1.504cb6d3bb3e5p-906, 0x1.353da70050865p-927, 0.0, 0x1.1c8eb7bd74803p-788, 0.0,
     0x1.df85a66d48de3p-547, 0x1.b7fd418f8a6c9p-978, 0.0, 0x1.82cfdd0a2e4bdp-574, 0.0,
     0x1.d6f5b6493d785p-426, 0.0, 0x1.0a68596be5c3fp-328, 0x1.1f8b7a505253bp-407,
     0x1.5e90662ccd958p-630, 0.0, 0.0, 0x1.b0a7b097129bap-857, 0x1.fbe40859d5ba8p-745,
     0x1.673a69c452ca2p-596, 0.0, 0.0, 0x1.c30bdb10170c4p-547, 0x1.a1f6223ec0481p-670,
     0.0, 0x1.be358e920f577p-680, 0x1.bced1a8bc4a1ep-1010, 0x1.165cb60c65541p-552,
     0.0, 0.0, 0x1.e0f0086421763p-760, 0x1.b3255c977762p-96, 0.0, 0.0,
     0x1.c6c49b85259d5p-952, 0x1.e6f560237ee64p-91, 0x1.313d525776de5p-269, 0.0,
     0x1.76591f491a5e8p-457, 0.0, 0.0, 0.0, 0.0, 0x1.4034bc3015914p-873,
     0x1.c7704e1d3934dp-536, 0.0, 0.0, 0.0, 0x1.110c5094a2dc9p-195, 0.0, 0.0,
     0x1.7617b3b17c52dp-163, 0x1.8bdea88513a2dp-300, 0x1.dd2eea9127563p-70,
     0x1.2fb9c905cd46ap-551, 0.0, 0.0, 0x1.0e99c4027f4dcp-376, 0.0,
     0x1.a4001589d8923p-2, 0x1.37f0500a07739p-636, 0x1.4482b0b89c6dap-112,
     0x1.41640f65e77c1p-519, 0x1.8590e3c52b02ap-408, 0.0, 0x1.f31e9804e1841p-716,
     0x1.89a8b693411b8p-151, 0x1.6f0e4af54364bp-473, 0x1.edf7835377bcap-311,
     0x1.f5ca031a121fcp-495, 0x1.479d732516e31p-577, 0.0, 0.0, 0.0,
     0x1.8582e59ce51ccp-860, 0.0, 0x1.92f182fb1a80bp-751, 0x1.b138c03ae690dp-281,
     0x1.d34af3c338ca8p-544, 0x1.62abd2f4475a7p-887, 0.0, 0.0, 0.0, 0.0,
     0x1.be528778e144ap-743, 0x1.7bc23521642b3p-852, 0.0, 0.0, 0x1.bff5ca0e6e66bp-702,
     0.0, 0x1.a070601d12c9cp-583, 0x1.9810ae8fb668dp-244, 0x1.4de9e45198a66p-610, 0.0,
     0x1.fb01df10d18ap-30, 0.0, 0x1.47ea31eca8973p-500, 0.0, 0x1.f684c4f0a41bcp-63,
     0x1.507343637544p-807, 0.0, 0.0, 0.0, 0x1.0e291d67eab7bp-568,
     0x1.51897ce6efac2p-874, 0x1.a0787e2650d3cp-997, 0.0, 0.0, 0x1.3e3073d9006eep-763,
     0x1.295d5239dafe8p-762, 0.0, 0x1.093bf0edb2a98p-756, 0.0, 0.0,
     0x1.fb19550a6bcd3p-383, 0x1.7ac5d2675537ep-139, 0.0, 0x1.b832553164c29p-774, 0.0,
     0x1.6087729441079p-954, 0.0, 0x1.9b81517782f8p-88, 0x1.27909bfe4ec91p-946, 0.0,
     0.0, 0x1.72461747510f2p-668, 0x1.4c9bda3950d5p-704, 0.0, 0x1.ba2ff3920bac4p-382,
     0.0, 0x1.bb6f9b3103628p-931, 0x1.28ecc256fb3fep-731, 0.0, 0.0, 0.0,
     0x1.6f9d40bba8697p-861, 0.0, 0x1.5b8e060d056fdp-967, 0x1.35790a296d2d9p-130,
     0x1.45bd408de53a9p-635, 0x1.94d66ca19706bp-75, 0.0, 0x1.0798c4aaba624p-997,
     0x1.687225d12012ep-517, 0.0, 0.0, 0.0, 0x1.dd6aa41e0daa5p-801, 0.0, 0.0, 0.0,
     0x1.baf0662d0ce7ap-264, 0.0, 0.0, 0.0, 0x1.15f62ec0f11dap-448,
     0x1.94f2ecefad39ep-293, 0x1.5a456b6dbb9adp-431, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.edae52c3f16f6p-795, 0x1.22041468e32e5p-926, 0x1.2a48237828c0cp-647,
     0x1.03f52567afca6p-748, 0x1.86d2a6d0cafaep-510, 0.0, 0x1.526bc732b8e3fp-15, 0.0,
     0.0, 0x1.996d076df0042p-78, 0x1.9d5eae0f08a2ep-944, 0.0, 0x1.78db9973a8643p-532,
     0.0, 0.0, 0.0, 0x1.f34eed24f1956p-618, 0.0, 0x1.3184c2099159ap-943,
     0x1.759798d805ca4p-925, 0x1.ed4b0860f3462p-143, 0x1.89ee3419e81c6p-756, 0.0, 0.0,
     0x1.ef3ad4baf16aap-904, 0x1.3ed254ead413ep-54, 0x1.a6ab6855c3004p-247,
     0x1.91876e78abbddp-412, 0x1.99a7dfb090cdbp-723, 0x1.3c81fad953e8cp-206,
     0x1.cddd968826ef6p-486, 0x1.117f148b5245cp-372, 0.0, 0x1.fc6a08ae2298bp-432, 0.0,
     0.0, 0x1.6a46e37f49a3cp-197, 0x1.67cb9dbdfb419p-750, 0x1.e26a9bccfd37ep-851, 0.0,
     0.0, 0.0, 0x1.1b9185e86b3f9p-732, 0x1.8c04266437d53p-714, 0x1.73654f8677084p-184,
     0.0, 0.0, 0x1.07ffd7f13325dp-957, 0x1.f59ece86ba374p-322, 0.0,
     0x1.cd1fb97ef99b6p-333, 0.0, 0x1.095e5bf886c99p-157, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d328e20cb59e6p-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bc439e236891cp-563,
     0x1.90fcb7603523p-767, 0x1.4e74a90ea9c81p-749, 0x1.3d56f6d5f1978p-702,
     0x1.1d5d8233460e5p-913, 0x1.e10e9fd915e4fp-371, 0.0, 0x1.acd882e489859p-583,
     0x1.98448c5e25b25p-412, 0.0, 0x1.8e31952465835p-393, 0x1.889abd26cb04ap-309,
     0x1.0f220d03cfd1p-844, 0.0, 0.0, 0x1.f4b5444b081ap-818, 0x1.bc20e74e79fdep-970,
     0x1.cef3544cb7477p-678, 0.0, 0.0, 0.0, 0x1.282333ae1addbp-426, 0.0, 0.0,
     0x1.c95bfafe00807p-342, 0.0, 0x1.c9b00834a6d7ep-49, 0x1.c7e112cd856cfp-178, 0.0,
     0.0, 0.0, 0x1.06d4d6b7e6c66p-253, 0.0, 0.0, 0x1.8d0bf43dfb894p-779, 0.0, 0.0,
     0.0, 0x1.c3c81f123f8c1p-881, 0.0, 0.0, 0.0, 0.0, 0x1.711b4193b9701p-933, 0.0,
     0x1.446ad50fecd26p-439, 0.0, 0.0, 0x1.b9da500381841p-674, 0x1.59d06732ec0c3p-985,
     0.0, 0x1.d3244d248e6f8p-767, 0x1.cb1f5a2b6b8d2p-559, 0.0, 0x1.ed12c3a92b4acp-893,
     0x1.3ddb60a5ca76ep-937, 0.0, 0x1.21a184f13ca83p-969, 0x1.dc4010f7546a8p-862,
     0x1.a66a3d254b2fcp-126, 0.0, 0x1.1f2aa04c2f699p-616, 0.0, 0x1.85f2c8b6fda9ap-379,
     0.0, 0x1.a9738d997477fp-675, 0x1.0cbd81cd95bc7p-833, 0x1.282457b7078a1p-117, 0.0,
     0.0, 0x1.a1e75e89f3e07p-812, 0x1.27a23ab72ea15p-41, 0.0, 0x1.950959fcb5b8fp-268,
     0x1.d19b4640ae3a2p-3, 0.0, 0x1.0143de25060b7p-427, 0x1.94d4c3d55ddecp-219, 0.0,
     0x1.b8c9a75ab33f4p-1016, 0.0, 0.0, 0x1.c9d1f38c97b72p-516,
     0x1.d49cc3359f2a5p-635, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e50d622b93a81p-640, 0.0, 0.0, 0.0, 0.0, 0x1.164d80800466bp-538, 0.0, 0.0,
     0x1.803b41c2d2501p-740, 0x1.b37f19316a36bp-716, 0.0, 0.0, 0.0,
     0x1.ccceb56ed988bp-506, 0.0, 0.0, 0x1.c5bda82eaa9fp-904, 0.0,
     0x1.df37ba968a804p-459, 0x1.3b3fc57f464edp-650, 0x1.e5ee8d58fd964p-145, 0.0,
     0x1.5128db84a41a8p-188, 0x1.2c2fb0c2a41b9p-529, 0.0, 0x1.c9dda7048af3fp-895,
     0x1.1022d4e9403adp-927, 0.0, 0x1.879c6e9d40574p-438, 0x1.859c6e56e5afbp-971,
     0x1.1aab1c5d32d0cp-771, 0x1.48de94f3e52fcp-184, 0.0, 0.0, 0x1.cb98cc3893ef2p-441,
     0.0, 0.0, 0.0, 0x1.23bdb09ce6396p-277, 0x1.b2e1fb70bb43p-526,
     0x1.d6fe329623b3dp-847, 0x1.0c7826c36f663p-743, 0x1.2080c2852f045p-703, 0.0,
     0x1.3af56ca0f25fap-1017, 0.0, 0.0, 0x1.49721f54bc8a9p-56, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7a21aa3fffe39p-432, 0.0, 0x1.6d58b1cd29cfep-142, 0.0,
     0x1.e9ba8fd656184p-327, 0x1.2de91d768e36cp-730, 0x1.621ee8645d609p-577,
     0x1.db241970583aep-445, 0.0, 0.0, 0.0, 0x1.65f83ed1b3d35p-493, 0.0,
     0x1.57e0566a213d9p-848, 0x1.e8a9e34b4004dp-718, 0x1.88f4d11e9337p-166, 0.0,
     0x1.2d94f85aeaf6p-127, 0.0, 0x1.5e6ad6609c0c3p-152, 0.0, 0x1.4fdec4844fb28p-307,
     0x1.ff83b26c891c2p-272, 0.0, 0.0, 0x1.68ff31cb8680dp-460, 0.0, 0.0,
     0x1.4ea3b9e250bd8p-312, 0.0, 0x1.f5b6a8758b5fcp-288, 0.0, 0.0,
     0x1.4f31cec7bbdd6p-383, 0x1.ddea7d8243336p-167, 0.0, 0.0, 0x1.283586a353e27p-809,
     0x1.5424d608ba65bp-712, 0.0, 0x1.e0f851ba00d35p-1012, 0.0, 0.0,
     0x1.283fa980b3f97p-973, 0x1.010604e093ca6p-612, 0.0, 0.0, 0.0, 0.0,
     0x1.89dc1703d493fp-293, 0x1.e92bb15cd8c7cp-328, 0.0, 0x1.3f240d6a55075p-355, 0.0,
     0x1.dad34fbdd59fdp-663, 0.0, 0x1.6840079670cc3p-674, 0.0, 0x1.bcbfe83e9549p-943,
     0x1.3ee18d050db96p-927, 0.0, 0.0, 0.0, 0.0, 0x1.9451d7fd92b4bp-382, 0.0,
     0x1.ddbf58b8d8c9fp-875, 0x1.8647fda6e6953p-907, 0x1.15e06a2037e61p-665, 0.0,
     0x1.ca9ae83d4a0fep-690, 0x1.ba8f3a5599558p-699, 0.0, 0x1.5fcc320277343p-796,
     0x1.5d9e90c64ff83p-153, 0.0, 0.0, 0x1.2b1e76f298e76p-115, 0x1.e0858cb83cac4p-203,
     0x1.167f4afe10bp-388, 0x1.62e47d05623p-485, 0x1.49ef3336541fp-967,
     0x1.b4f841b7adad2p-594, 0x1.3c9838ea13674p-938, 0x1.eafd19a5ab1e8p-32,
     0x1.356588353ddf1p-58, 0.0, 0.0, 0x1.94e36b6d42564p-338, 0x1.50187e2447d78p-188,
     0.0, 0.0, 0.0, 0.0, 0x1.789a2028b5d5fp-235, 0.0, 0.0, 0x1.a70a0c90088bcp-893,
     0.0, 0x1.28402bda015bp-893, 0x1.fb3551c958f4dp-763, 0x1.e39fbd2630fbdp-361,
     0x1.0e9905a720d6p-798, 0x1.8533c02e665dep-1006, 0x1.00d7b0b8fee6dp-69,
     0x1.e5290be13c94fp-484, 0.0, 0.0, 0x1.ea6d11f48ef2ap-42, 0.0, 0.0,
     0x1.9fb1ed2d7d4f5p-189, 0.0, 0x1.c6127d2ea80a9p-648, 0x1.aa3298808d943p-834, 0.0,
     0x1.cf389396dff88p-69, 0.0, 0x1.009da3c363d08p-582, 0x1.f016c60eff256p-994,
     0x1.f558512434131p-737, 0.0, 0.0, 0x1.6f36c7807b88dp-86, 0.0,
     0x1.d197402de8175p-831, 0x1.e681d13ed2abap-42, 0x1.db7b1416627f7p-266, 0.0,
     0x1.0eface520d6dfp-594, 0x1.2ac8823b510ebp-200, 0x1.db7333e787fffp-875,
     0x1.2b714c17fd854p-756, 0x1.ab891d141c7bfp-826, 0.0, 0x1.ed329693211cep-67,
     0x1.cb18ad7962c45p-471, 0.0, 0.0, 0x1.274bc348e7514p-276, 0x1.b6c1fbe8f166dp-56,
     0x1.760caceacfcfap-941, 0.0, 0x1.dbaa107d2a3a6p-419, 0x1.bc018df32d059p-611,
     0x1.31bba87b5f266p-798, 0x1.40f0622252ed9p-425, 0.0, 0x1.025b0e8f50722p-186, 0.0,
     0x1.c6485effb88a5p-808, 0x1.2fddc5d6e824cp-585, 0.0, 0.0, 0.0,
     0x1.724ae94ee6a24p-739, 0x1.6bf2695302cdap-869, 0.0, 0.0, 0x1.bc3e71d37131fp-109,
     0x1.6047aea17b6e7p-321, 0x1.f15b17f2f8843p-170, 0.0, 0.0, 0x1.c77fb70a00f9cp-241,
     0.0, 0x1.bb76578dc85e8p-436, 0.0, 0.0, 0x1.660a520bc51p-418,
     0x1.bd652d886cb05p-944, 0.0, 0x1.57dd836aac1e8p-386, 0.0, 0.0, 0.0,
     0x1.9f4b19ed4d464p-606, 0.0, 0x1.71f33657bd0dp-595, 0.0, 0.0,
     0x1.5056b8d9aa3e1p-990, 0.0, 0.0, 0x1.45dc5194497ebp-877, 0.0,
     0x1.35da131de61f3p-205, 0x1.585b11d15e6f7p-352, 0.0, 0.0, 0x1.1304322b27216p-209,
     0.0, 0x1.69cae673059fp-509, 0.0, 0x1.08280bea797dbp-768, 0.0,
     0x1.2cc6e7cb308c6p-325, 0x1.78c279891d1fep-74, 0x1.37d3f94db7283p-359, 0.0,
     0x1.430e8def99627p-274, 0x1.87cec4c6170efp-840, 0x1.5742b82f8402p-96,
     0x1.5f51eca4d912dp-893, 0.0, 0x1.1905860144239p-532, 0.0, 0x1.4fbd1114f6b9p-274,
     0.0, 0x1.56a45b6de8bc1p-914, 0.0, 0x1.704ff4e018b58p-193, 0.0, 0.0,
     0x1.a09dc114e0cdfp-693, 0x1.e2daf5c47edfp-969, 0x1.bf34a20a74923p-231, 0.0, 0.0,
     0.0, 0.0, 0x1.a75fdfb9069e4p-231, 0x1.c2c781a434c68p-119, 0.0, 0.0,
     0x1.a82162615b348p-844, 0.0, 0x1.bbd1c4322fc07p-875, 0.0, 0.0,
     0x1.a9943621e6161p-638, 0.0, 0x1.20c78f52f4e79p-680, 0.0, 0x1.a21663c75d09fp-308,
     0.0, 0x1.287f52bb2a86ap-851, 0x1.c8164e38c060cp-650, 0.0, 0x1.a697ba07e17cap-830,
     0x1.8490af2a3e7f3p-726, 0.0, 0.0, 0x1.b9bbfebd5d57p-334, 0x1.64b2b3ec32b07p-205,
     0x1.e8a91a7b18f49p-535, 0x1.d9f08a054ae8p-959, 0x1.c5c91ba3ee2fcp-864, 0.0,
     0x1.d8081c48a3afbp-446, 0.0, 0.0, 0x1.ce717796d80aap-93, 0.0, 0.0,
     0x1.6cb8310a91668p-848, 0.0, 0x1.cd4874784789bp-412, 0x1.f8c7bca12bae5p-819, 0.0,
     0x1.f933650cc5dbfp-788, 0.0, 0x1.1c8470e5d940dp-945, 0.0, 0x1.0f8ca6293affp-414,
     0x1.5e70af20ab534p-215, 0x1.b91f5810be8aep-310, 0.0, 0.0, 0.0,
     0x1.5756c490cb1b8p-814, 0.0, 0.0, 0.0, 0x1.150268c46b30ep-832,
     0x1.c695ff5fca5a2p-76, 0.0, 0.0, 0.0, 0x1.e482f2b92efdep-187,
     0x1.9a8c3d179d27ap-224, 0x1.adc7ef1780b09p-942, 0.0, 0.0, 0.0,
     0x1.e33558351db05p-262, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ff97244435c4p-516, 0x1.70502d0088d5cp-589, 0x1.c93e470b1bfeap-666, 0.0,
     0x1.d225a91879101p-5, 0x1.005811b8928f5p-476, 0x1.e7240a1e13339p-543, 0.0, 0.0,
     0x1.6fcc825dbc83bp-660, 0.0, 0x1.4b7776bd6e4d3p-479, 0.0, 0x1.7c86964c9c569p-657,
     0x1.beed670d0e732p-188, 0x1.812ea3a316c11p-3, 0.0, 0x1.c936285d7b68ap-372,
     0x1.14531b087afdap-372, 0.0, 0.0, 0x1.f166b3298c26fp-693, 0.0,
     0x1.872411dcca4ebp-644, 0x1.0c4bc35e49fcp-504, 0.0, 0.0, 0x1.5557bf1abd246p-952,
     0.0, 0.0, 0.0, 0.0, 0x1.506e8256aabdcp-193, 0.0, 0x1.59540e8ec27c6p-44,
     0x1.445bc9347b4dfp-63, 0.0, 0.0, 0x1.a497951081b48p-626, 0x1.91a6c931dfb4dp-675,
     0x1.f81e235bbd51dp-740, 0x1.b2ed8816c27c5p-361, 0.0, 0.0, 0x1.6490a96a07b9bp-648,
     0x1.4a198f70cc606p-179, 0.0, 0.0, 0.0, 0x1.05e94d11f57cap-866,
     0x1.c02d3c607c58ep-950, 0x1.70d498507aa9cp-167, 0x1.c15da80aeae45p-438, 0.0, 0.0,
     0x1.61966067b4d5p-207, 0.0, 0x1.0817e4e3caa61p-249, 0x1.dc7505b14c8b9p-826, 0.0,
     0x1.9b580c9c79684p-899, 0x1.39754a1e5d15fp-623, 0.0, 0.0, 0x1.26bd4bc29192cp-631,
     0x1.eb1d4f49bb108p-363, 0.0, 0x1.3be98b7ad133dp-1021, 0x1.496fa0e5049d3p-793,
     0x1.ab0de9611bcddp-29, 0x1.a2f85eedb5e98p-753, 0.0, 0.0, 0x1.21c8e66bff372p-160,
     0x1.55b1b22857b47p-809, 0.0, 0x1.cf68fcbb6b876p-114, 0.0, 0x1.55b6ae2086b4cp-839,
     0.0, 0x1.66498b6644728p-36, 0x1.17aee3b8b3dcep-950, 0.0, 0.0, 0.0,
     0x1.9041ef808724cp-776, 0x1.ff77198ac672p-376, 0.0, 0.0
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
            tmp1 = Sleef_expd4_u10kvx(tmp0);
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
    printf("Sleef_expd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
