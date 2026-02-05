/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floord2_kvx.c --function Sleef_finz_floord2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.ae2c1fbd52d2cp-217, 0x1.b6d633da5bcafp-799, 0x1.e7c025737c9fcp-379,
     0x1.1926dbab6fe7bp-438, 0.0, 0.0, 0x1.a79456a4fc3c8p-908, 0x1.258574db152c7p-952,
     0.0, 0x1.1a6947682504dp-620, 0.0, 0x1.90febb22cce36p-682, 0.0,
     0x1.6228cc3e8a764p-330, 0.0, 0x1.9c172338f10a9p-1016, 0.0,
     0x1.39beb1cd83a7ep-441, 0x1.f852198c7fa78p-480, 0x1.2624259d6fdabp-1008,
     0x1.2017757670c17p-399, 0.0, 0x1.2d53e86b63c2ep-452, 0x1.b9f9c32ff327dp-98, 0.0,
     0x1.93f5164fb3e26p-731, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8466e3a12928ep-808, 0.0,
     0x1.7e63fdbea34d1p-922, 0x1.22d5d7f818011p-494, 0x1.78eda1987af43p-114, 0.0, 0.0,
     0x1.e6a62244f43f1p-854, 0x1.ea07eb32c7004p-285, 0.0, 0.0, 0x1.ebf380fe7838ap-980,
     0x1.ff01c847a38e8p-851, 0x1.7b0cb2639de32p-996, 0x1.837410d7c56f9p-208,
     0x1.484e2084a71a8p-823, 0x1.0bc78443356d7p-24, 0x1.5d000a6381876p-395, 0.0,
     0x1.a997a1c047543p-154, 0.0, 0x1.3f3f704c77424p-226, 0x1.e6acae4ab5693p-884,
     0x1.30c3a3d6a0a1fp-877, 0x1.1c8e06937cd2ep-408, 0.0, 0.0, 0.0,
     0x1.ef33355714671p-394, 0x1.a6ece65844d0ep-59, 0x1.f2c1ca6f3994fp-12, 0.0, 0.0,
     0x1.06d00ec31423dp-696, 0x1.6ef017cfb4e7ep-878, 0x1.8a0f89005b564p-204, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8997876d48576p-512, 0x1.f5226a98451e6p-966, 0.0,
     0x1.d35fbddf873ffp-350, 0.0, 0x1.f4bf4cb521279p-685, 0x1.43dfaffae47aap-406,
     0x1.7c5e9f6bcbd9p-828, 0x1.85522790386fcp-964, 0.0, 0x1.3cbb6d92dbc9fp-464,
     0x1.2d1d88b699c8dp-897, 0.0, 0.0, 0.0, 0x1.5f03de5dee428p-783, 0.0,
     0x1.e742ae0541d52p-563, 0x1.f13e04fdc29b5p-326, 0x1.e3cc088a99caap-681, 0.0,
     0x1.d7bfd78d8e45cp-754, 0x1.0c7db3f071dd2p-131, 0x1.8864581c9db7fp-162,
     0x1.aea9df82608c2p-267, 0x1.ce7522d76f9cbp-638, 0x1.ae72c823b2cadp-682, 0.0, 0.0,
     0.0, 0.0, 0x1.c00fe328d3c0cp-132, 0x1.394dfd9e87c06p-660, 0x1.22d78c6c11479p-634,
     0x1.12fec173f6d56p-3, 0x1.1fde057c50a14p-680, 0x1.169cf88e2466dp-967, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cc946d8c93dbdp-761, 0.0, 0.0,
     0x1.c290edf4a32e2p-357, 0.0, 0.0, 0x1.d8437b44fc597p-242, 0x1.94e306ad079e2p-894,
     0x1.7332eeacf2761p-903, 0x1.3c0a5f4da406ap-109, 0x1.5bc26ffc416cdp-525, 0.0, 0.0,
     0x1.cf18c493cd7dep-221, 0x1.37458126894d7p-194, 0x1.ad6de1c96a6a7p-286, 0.0,
     0x1.58c45e4874fefp-934, 0x1.2758d07918197p-728, 0x1.7ce3cb34a6fc7p-736,
     0x1.fe6b0f296911ap-1, 0x1.6710b581c1bbap-267, 0x1.ab80527a5c828p-524, 0.0, 0.0,
     0x1.2d3baaf89700ap-236, 0.0, 0.0, 0.0, 0x1.41ff6ec33a7fap-50, 0.0, 0.0, 0.0, 0.0,
     0x1.da5dd0fecc255p-614, 0x1.ca80e49e5a226p-595, 0x1.b906839248743p-295,
     0x1.ee2154cf8b08ap-307, 0.0, 0.0, 0.0, 0x1.bc3686c68ea22p-860, 0.0,
     0x1.c40996d6df892p-525, 0.0, 0.0, 0x1.64dced9842bcap-661, 0.0,
     0x1.4ca8eb9545af9p-887, 0.0, 0x1.16f3b1c34f65fp-1019, 0x1.82b187cee75a3p-536,
     0.0, 0x1.9fe02e84597b1p-304, 0x1.be93c534fa76ap-230, 0.0, 0x1.9ddbe2136dae3p-302,
     0x1.0cd5e91b97efp-385, 0x1.8cee9f73b6651p-430, 0x1.42f3cb1861178p-716,
     0x1.6bbef7c317093p-180, 0x1.074bb07821bfep-222, 0x1.4bdf53b6205ccp-126, 0.0,
     0x1.8872c58ff2d1fp-666, 0.0, 0x1.289c8fbdb822ep-608, 0.0, 0x1.c80a392dc686fp-231,
     0x1.c45ccd6e4b144p-982, 0.0, 0.0, 0.0, 0.0, 0x1.ea92d4ca80609p-262,
     0x1.fbdde5de78014p-487, 0x1.ec93d6f44defcp-251, 0.0, 0x1.93a932f219851p-61, 0.0,
     0.0, 0.0, 0.0, 0x1.9a91599d270bp-43, 0.0, 0.0, 0x1.e5dfd76410355p-547,
     0x1.713ef6db5c0ecp-129, 0x1.9a937ee2032e6p-460, 0x1.ac210a4880ce3p-44,
     0x1.bed098a069ca8p-751, 0.0, 0x1.fde03ee28d686p-459, 0x1.4ce9d5acce62cp-393,
     0x1.cfe31f429be02p-476, 0x1.5e3683a4a49a6p-995, 0.0, 0x1.33ba0c89a5d92p-457, 0.0,
     0x1.f0c85b2969c24p-528, 0x1.d7dfdfff0419bp-955, 0.0, 0x1.4ad92af001c27p-954, 0.0,
     0.0, 0.0, 0.0, 0x1.6dd5984d370c2p-430, 0x1.5a7e90d16181dp-513, 0.0, 0.0, 0.0,
     0x1.8c84111708787p-666, 0.0, 0x1.9cc53711a7441p-446, 0.0, 0x1.2e40c559e9a14p-925,
     0.0, 0.0, 0.0, 0x1.906129ff1cd6dp-431, 0.0, 0x1.08a2c88579724p-4,
     0x1.39df1943b18b6p-310, 0.0, 0.0, 0.0, 0.0, 0x1.ba9a569dc9a84p-330,
     0x1.1b5cbdcddbec5p-131, 0x1.7255b816ec85cp-515, 0.0, 0x1.f201d7ebcccd1p-820,
     0x1.d93205aa9fcf9p-384, 0.0, 0.0, 0.0, 0x1.4b54ccf0b384bp-526,
     0x1.bdf34909973bfp-779, 0x1.6ffcb1eb1e7e2p-729, 0.0, 0x1.49024ea4a4377p-668, 0.0,
     0x1.8f3d6bd68d4ddp-595, 0.0, 0x1.95ba093886d2fp-223, 0.0, 0.0,
     0x1.9b9a742f4953dp-8, 0.0, 0x1.a66e256931963p-395, 0x1.0c0e544d24d73p-327,
     0x1.313195dc843a6p-992, 0.0, 0x1.a477c85b96117p-262, 0.0, 0.0, 0.0,
     0x1.85442e11d47f9p-979, 0.0, 0x1.5b2e2372339c6p-31, 0.0, 0.0, 0.0,
     0x1.11cf219671579p-516, 0x1.d88fe8c24494dp-1003, 0.0, 0x1.5fde940570455p-446,
     0.0, 0x1.6166f9eae94c8p-992, 0.0, 0x1.bdfafdb953505p-271, 0x1.5ca61cf76e12cp-205,
     0x1.2a4e8699ddb6bp-970, 0x1.91739358f70fdp-535, 0x1.cf5de1fb14b7bp-968,
     0x1.27ae6e71b0fcap-921, 0x1.d987b75ed759p-90, 0.0, 0x1.ec2f2fe2fb95dp-13, 0.0,
     0.0, 0x1.dc9a65e5fb2a4p-213, 0.0, 0.0, 0x1.5b12a1f469c07p-166, 0.0,
     0x1.f49e2f4829668p-423, 0.0, 0.0, 0x1.75cd7f6d0a928p-199, 0x1.64d26dca1ecep-288,
     0x1.f3cfb4383e73ep-437, 0x1.ff357b650366ap-465, 0.0, 0.0, 0x1.f830e2bed1b0bp-13,
     0.0, 0.0, 0.0, 0x1.ff0c1571e14d9p-95, 0x1.b7783b5f9a943p-131,
     0x1.e66e5fe327db8p-300, 0.0, 0.0, 0x1.1a2b4768f773dp-946, 0x1.2ff8b766f0fffp-501,
     0x1.941388fb4e40ap-760, 0x1.9618cd2de40d6p-709, 0x1.aff9e2613dabap-501, 0.0,
     0x1.15c838907b2c5p-89, 0x1.9861380844121p-319, 0.0, 0x1.59344119d5ffdp-342, 0.0,
     0x1.b3cfc0adb9eb7p-75, 0x1.4420bda3f6324p-41, 0.0, 0.0, 0.0,
     0x1.88ce184f91117p-631, 0x1.3dbed6466d9aep-905, 0x1.2fef71ab9a736p-950,
     0x1.79af5a3bc2725p-892, 0.0, 0.0, 0.0, 0x1.1571783992f2bp-680,
     0x1.7cbff10f3ab8fp-169, 0.0, 0x1.49559714dfd62p-65, 0.0, 0.0,
     0x1.ba65a198b5b35p-838, 0.0, 0.0, 0.0, 0.0, 0x1.5e2287db128bap-641, 0.0, 0.0,
     0.0, 0x1.56c278f0a63f6p-379, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7cf649f1ea4e9p-964, 0x1.12dad67d61419p-44, 0x1.b1937fbbaeb8dp-694, 0.0,
     0x1.951b8fadbca74p-54, 0.0, 0x1.e59a091c9500ep-732, 0.0, 0x1.97a1f094d2f89p-992,
     0.0, 0x1.b5a783c2f5357p-256, 0x1.96eb3011150d9p-170, 0x1.7e5ea9c137166p-599,
     0x1.81477ddb03c63p-955, 0.0, 0.0, 0.0, 0.0, 0x1.07758918cc27ep-395,
     0x1.fcffc5c64cbffp-547, 0x1.b743950a81427p-806, 0x1.6b4e71f5938a4p-906,
     0x1.affbe8cf17c48p-182, 0x1.f103fe0cfb888p-387, 0.0, 0x1.890a475e4d9bdp-853,
     0x1.fe1ecf62e9071p-305, 0.0, 0x1.2809743b8d3a9p-286, 0x1.0364c6bf6550ap-437, 0.0,
     0x1.0bfb90437f27bp-175, 0x1.b81c75ddeffabp-364, 0x1.73a116590072ap-660,
     0x1.28cc77fa34d91p-728, 0x1.7f55a374bcdap-114, 0x1.ad54a55cebd93p-488,
     0x1.4dcde29a2213dp-245, 0x1.4b4429ba28813p-231, 0.0, 0.0, 0x1.da77ab7a17e7fp-807,
     0.0, 0x1.87553b00791a2p-584, 0x1.637c160835cc6p-510, 0.0, 0x1.3a262f4b228c1p-344,
     0x1.adf0e7a70d08bp-934, 0x1.2d16e0531af15p-251, 0x1.5477d2b12bcc5p-85,
     0x1.515a80d80720ep-328, 0x1.a4cd4e0f4be0cp-604, 0.0, 0x1.0fb3cf00df457p-680,
     0x1.30dc71f528f68p-567, 0x1.917bae2ca1782p-842, 0x1.3537905ba4869p-319,
     0x1.16b8d2055cb72p-59, 0x1.49b1d2d4ef75p-87, 0.0, 0x1.444776b8cc75p-573,
     0x1.5a7a87478a682p-48, 0.0, 0.0, 0x1.a4700f68cf26fp-878, 0x1.1aa8bc6bd9d3dp-738,
     0x1.103f17e100b2p-35, 0x1.b907a2cad93d1p-503, 0.0, 0x1.279fa84221749p-249,
     0x1.36b7f0d850c84p-99, 0x1.668a34ec0dd24p-135, 0x1.7d954f19d41f5p-466,
     0x1.433b4875fb898p-1003, 0.0, 0x1.5dd156894955p-989, 0.0, 0.0, 0.0,
     0x1.1c421c850b619p-428, 0x1.d7cc4e5a7e6cdp-978, 0.0, 0.0, 0.0,
     0x1.4ff171d0373d8p-610, 0.0, 0x1.3c28d6429120cp-397, 0.0, 0.0,
     0x1.fa54422ecd6fdp-1005, 0x1.abfddd0de8b26p-938, 0.0, 0.0, 0.0,
     0x1.c3e6e882c80b7p-146, 0.0, 0.0, 0x1.e6863d22aae1bp-58, 0x1.b56dce618a9c2p-979,
     0x1.52112f8ee8c23p-665, 0.0, 0x1.1273209919816p-112, 0x1.78002c860700fp-380,
     0x1.7976a55701deap-376, 0x1.5efc63e017093p-26, 0.0, 0x1.c702604645cbp-672, 0.0,
     0x1.06e3e57493b7dp-916, 0.0, 0x1.ad2b9114643adp-119, 0.0, 0x1.84c8e590eadc3p-324,
     0x1.d5510bf796595p-642, 0x1.6f0afc4566359p-391, 0x1.68c5bc8870f06p-292, 0.0,
     0x1.0430ed9c79f35p-636, 0x1.a35ac7906fa6cp-561, 0x1.f459f8abdd577p-322, 0.0,
     0x1.a5e9327957f87p-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3f1abf8bd08fp-713, 0.0, 0.0,
     0x1.8095fc1499ed5p-208, 0x1.55007f8c89babp-912, 0.0, 0.0, 0.0,
     0x1.121ddbbf5efebp-358, 0.0, 0.0, 0.0, 0x1.59a8fc1b31478p-1007,
     0x1.795b1306e958ap-944, 0.0, 0x1.5338f6e77d12ap-938, 0x1.d8a80522f9a7p-831,
     0x1.8b01bc9bbbec2p-696, 0.0, 0x1.ba169e8d43e3cp-196, 0.0, 0.0,
     0x1.9fdd102e7580ap-17, 0x1.7c81c945cb572p-584, 0.0, 0x1.114e6f677130ap-296, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f00f2e569b9fap-500, 0x1.e0f9652710073p-298, 0.0,
     0x1.cbbf6858ec825p-825, 0x1.630cd0e23c776p-3, 0x1.3ff5680d4c15p-282, 0.0,
     0x1.d96df0448ad7ap-598, 0x1.20e14da8c113dp-404, 0.0, 0x1.d8aae362a2aefp-893,
     0x1.1cf30e70864adp-156, 0x1.0aa5fee18bfeap-1000, 0x1.32e5aec2f4cb1p-61, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.27145aafda49p-936, 0.0, 0.0, 0x1.1d386500fb07ep-479, 0.0,
     0x1.6b7f08c0bc382p-383, 0x1.d30f4838a1cb5p-99, 0x1.2632fae3c3b75p-429, 0.0, 0.0,
     0.0, 0.0, 0x1.056a42bd4e254p-14, 0.0, 0.0, 0.0, 0x1.9180a732baaa5p-740, 0.0, 0.0,
     0x1.612b5f0a1d802p-748, 0.0, 0x1.1651ef46a194p-657, 0x1.085d2f2cb8f4p-468, 0.0,
     0x1.6e8e1816052f5p-619, 0x1.441fc33c5ba3ep-249, 0x1.ec4fb496ffcfdp-986, 0.0,
     0x1.c0661541d807bp-842, 0.0, 0.0, 0.0, 0x1.4ebaa5fc59f23p-353,
     0x1.c265c32e39674p-247, 0.0, 0x1.d12935948ed87p-455, 0x1.45de71b67f8cep-1,
     0x1.4898cc83a306cp-658, 0.0, 0.0, 0x1.d964761a592a2p-427, 0x1.4165bb6873d76p-174,
     0.0, 0.0, 0.0, 0x1.729a232c076d7p-736, 0x1.f47f70e87ab65p-690, 0.0, 0.0,
     0x1.e5ccf60c592a2p-354, 0.0, 0x1.02f8bab25a599p-718, 0x1.373506a02aaf1p-945,
     0x1.9e74954e35cc2p-856, 0x1.6ea1ba342bf53p-72, 0.0, 0x1.9e184c449da86p-364,
     0x1.64048cf7c5a33p-589, 0.0, 0.0, 0.0, 0x1.083133ee552b8p-574, 0.0,
     0x1.bfc9f61e0eb65p-929, 0.0, 0.0, 0x1.79cfdcc959356p-615, 0.0,
     0x1.2117a9021b0f2p-744, 0x1.ff4ba5bd432cdp-860, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79b5777827929p-157, 0x1.238e7f5df37cp-869, 0x1.fc0ae6a61f4e3p-294, 0.0,
     0x1.a3206ace70b32p-461, 0.0, 0x1.746130d211a02p-940, 0x1.bdd8821ea8a34p-11, 0.0,
     0.0, 0x1.163f1971b8822p-84, 0x1.18fe5f7a30fabp-891, 0x1.bdb60db837c1ap-565,
     0x1.07884d1d10fbfp-354, 0x1.85526e9dddae8p-889, 0.0, 0x1.7e0fd281c98d7p-225,
     0x1.5e9a70f4f1e81p-538, 0.0, 0.0, 0.0, 0.0, 0x1.c9c9c48c1a879p-433,
     0x1.fdd5521ede787p-455, 0.0, 0.0, 0x1.f2a85a3f10f32p-240, 0x1.25504c7c18773p-47,
     0x1.b4a39aff515d3p-736, 0.0, 0.0, 0x1.16566452d5fe9p-416, 0.0, 0.0,
     0x1.604270414ac0dp-349, 0.0, 0.0, 0x1.013547971bf38p-591, 0x1.459e2e1ad5481p-660,
     0x1.7d072072129ecp-390, 0.0, 0.0, 0x1.a4752bcdd871bp-692, 0.0, 0.0, 0.0,
     0x1.a2e32fbe7d198p-679, 0x1.f6f27a21d6c38p-452, 0x1.fa17738076a7ap-305, 0.0,
     0x1.a2dc74514ab2cp-461, 0x1.d817e7bfb6917p-694, 0x1.767546aa9e63bp-620,
     0x1.0786939f237cp-109, 0x1.b7230e36be85dp-742, 0x1.1541834cfa8e2p-347, 0.0, 0.0,
     0.0, 0x1.cfa9cecf0f644p-681, 0.0, 0x1.8773fee9b2b07p-489, 0x1.bcd24cf02ad41p-696,
     0x1.18151e61bc3f1p-543, 0x1.40c110149b672p-947, 0.0, 0x1.5ed5f9c3f954fp-154,
     0x1.fde6fbde2adfdp-783, 0.0, 0x1.80ec2e081ff53p-476, 0x1.104d3c717ea2fp-884, 0.0,
     0.0, 0x1.15375063313d1p-620, 0x1.d3294b4362c61p-953, 0x1.f33bcbb0945fep-384, 0.0,
     0.0, 0x1.a2499912b0456p-1001, 0.0, 0.0, 0.0, 0x1.bcc7a91b3dfa9p-954, 0.0, 0.0,
     0.0, 0x1.0ec0171727f77p-506, 0x1.bd23cab73b85fp-556, 0x1.32bc1204e1277p-318,
     0x1.095f8b307701fp-1000, 0x1.56fd5c6fe8148p-243, 0x1.095672d14bc13p-946, 0.0,
     0.0, 0x1.39a9dcdbbde4ap-398, 0x1.96ecc6955f384p-205, 0x1.308ccf76376fbp-917,
     0x1.742330cb46d34p-861, 0.0, 0.0, 0.0, 0.0, 0x1.11c8a00d9dda8p-756,
     0x1.8dd4843bb559ep-909, 0x1.119e77b29671ep-435, 0x1.c8a979f062116p-189, 0.0,
     0x1.a527ed341676cp-944, 0.0, 0x1.d9fe638ca105p-312, 0x1.9aeed2901aee2p-68,
     0x1.c95171599ef13p-946, 0x1.c0beb013b354fp-115, 0.0, 0x1.559d7134d4bccp-1005,
     0x1.c3f3b487b685fp-578, 0.0, 0x1.b2e7277b52f02p-244, 0.0, 0x1.23f1b4be8529ep-895,
     0.0, 0.0, 0x1.3c7c1c944f46cp-401, 0.0, 0.0, 0x1.500ae0e30248p-581,
     0x1.7f24c19a302dfp-230, 0.0, 0.0, 0x1.36e321ac569dcp-820, 0.0, 0.0, 0.0,
     0x1.6d319f33ae872p-828, 0x1.d663d5b682c55p-904, 0x1.eab99c390ff22p-118,
     0x1.51a8f6c8c3005p-914, 0.0, 0.0, 0.0, 0x1.d62a37001fd79p-851, 0.0, 0.0, 0.0,
     0x1.c826526f767e3p-156, 0x1.9bca1d68475b6p-505, 0.0, 0x1.6cfa865eb66b1p-505, 0.0,
     0.0, 0x1.a13e808b276c9p-962, 0.0, 0x1.500afd25554e3p-33, 0x1.6fd8c4c1eeb6ap-449,
     0x1.d12ce7c82fb9cp-239, 0x1.67a291a88ee29p-23, 0x1.c0af85f81e8f7p-690,
     0x1.9b0bd189d41f1p-818, 0.0, 0x1.0bf0aff4fee76p-163, 0.0, 0x1.e9d04e42ad1bcp-43,
     0x1.3408e097783eep-795, 0x1.90c669888db3bp-268, 0.0, 0x1.e6b06ac7102e9p-893, 0.0,
     0x1.797bf88eb32c5p-367, 0.0, 0.0, 0x1.6a1d68ff9814bp-654, 0x1.11eeaa696f16bp-55,
     0.0, 0.0, 0.0, 0x1.203de2483f7bdp-696, 0x1.1f7cd70fa3806p-257,
     0x1.dc8fa330f6ec8p-688, 0x1.2de022254d5d3p-640, 0.0, 0x1.54ac493710599p-537,
     0x1.ac147449df335p-796, 0.0, 0x1.2aa0c87b25156p-191, 0.0, 0.0, 0.0, 0.0,
     0x1.5d42973b30931p-89, 0x1.7462f083b6d7fp-526, 0.0, 0.0, 0x1.cfe9295532acbp-6,
     0.0, 0x1.826c94448e8ffp-545, 0x1.e8ba7ae7fb31p-33, 0.0, 0x1.3148c93459b49p-335,
     0.0, 0.0, 0.0, 0.0, 0x1.c17d7c2d5d5e4p-91, 0.0, 0x1.cb806635aa353p-261,
     0x1.20a1bfc5d8ea2p-314, 0x1.2269e7cd4e39bp-430, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89910d87415cap-403, 0x1.e65c28ed50c2ep-238, 0.0, 0x1.fc5d152f0e3a8p-647, 0.0,
     0.0, 0.0, 0x1.d029e3b51aae8p-910, 0x1.897814cbc5c06p-946, 0x1.e8a961d240279p-126,
     0.0, 0x1.187e375d80304p-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5b916e83fc5adp-63,
     0x1.9f07547f97528p-792, 0.0, 0.0, 0x1.dbf88584be513p-501, 0x1.e6ffdd66f2de3p-931,
     0.0, 0x1.5a0ed7f45e7bap-183, 0.0, 0.0, 0.0, 0x1.dd20ac2363dacp-942,
     0x1.67d3053d2b8ddp-237, 0.0, 0x1.ec3a2e5ca3a2ap-763, 0x1.698388c4f634ap-452,
     0x1.320451becd511p-735, 0x1.18e3f131eb6b3p-334, 0x1.e4a1e3522ca14p-815, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.484df8b3437b7p-881,
     0x1.69752496c4a2bp-118, 0x1.5838c530c97bp-602, 0x1.8439b41346061p-227, 0.0, 0.0,
     0x1.cdaec3e3dc899p-689, 0.0, 0x1.17d7ae16357dfp-256, 0.0, 0x1.d50f85388c50ep-722,
     0x1.ff141384dff49p-699, 0.0, 0x1.d27d5c60c5e57p-43, 0x1.831fb59b246cep-446,
     0x1.7b7000b06c917p-637, 0x1.797b7614e4cfp-831, 0x1.a823b20e49e77p-287,
     0x1.3d6a48ec21e7ap-355, 0.0, 0.0, 0x1.2bc0136947fb7p-852, 0x1.a205085a81a19p-722,
     0.0, 0.0, 0x1.ae0ae988a7d4bp-480, 0.0, 0x1.c1604635e391ap-643,
     0x1.e02a67bde4c52p-330, 0x1.a36d51858fbc2p-504, 0x1.4c7ef81c741b1p-575,
     0x1.5176b8b6b2a49p-906, 0.0, 0x1.ab8778249e9a1p-208, 0x1.551943b011965p-613, 0.0,
     0.0, 0x1.bb2382d267527p-518, 0.0, 0.0, 0.0, 0.0, 0x1.7d33da0a1824p-942, 0.0,
     0x1.237e3cc773e4cp-269, 0x1.cb20416108695p-990, 0.0, 0x1.f63a6b92296a7p-203,
     0x1.bd6078cf8a967p-83, 0.0, 0.0, 0x1.a5e76ad7dbc77p-64, 0x1.2cb5b458b6345p-70,
     0.0, 0.0, 0x1.d9ee56c1a6f29p-103, 0x1.10e996add5e32p-668, 0x1.f2b42b94ff102p-456,
     0x1.939a1c10fc062p-743, 0x1.a063356709115p-853, 0x1.93b4391348b6ep-856,
     0x1.d83e02978d619p-923, 0.0, 0x1.0737303b39d28p-282, 0.0, 0.0, 0.0,
     0x1.6e5cc3e32b14bp-809, 0.0, 0.0, 0x1.51b7f4fab54e7p-678, 0.0, 0.0,
     0x1.6f46058ab8014p-238, 0.0, 0.0, 0.0, 0.0, 0x1.6d1b7b3a6def7p-564, 0.0, 0.0,
     0x1.65992e455035bp-23, 0.0, 0x1.041bbfd1b4f6ep-702, 0x1.a570768fb16b9p-742, 0.0,
     0.0, 0x1.05ad31da62044p-360, 0x1.b775b78d2cb2ap-645, 0.0, 0.0, 0.0,
     0x1.3cb0e2773ca9cp-251, 0.0, 0.0, 0x1.851475ffd3b54p-39, 0.0,
     0x1.dd8dcf78c72a5p-613, 0.0, 0.0, 0x1.414f0032a7a68p-760, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6c9f53728248p-130, 0.0, 0.0, 0x1.5625d82c9e04ap-363, 0.0,
     0x1.0e961a8dc23cdp-762, 0.0, 0.0, 0x1.e67ff78f22dep-323, 0x1.5c2e7dda4299ep-489,
     0.0, 0.0, 0x1.301ea8a14924dp-197, 0x1.8a0b1fcb96bcp-820
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_floord2_kvx(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_floord2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_floord2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
