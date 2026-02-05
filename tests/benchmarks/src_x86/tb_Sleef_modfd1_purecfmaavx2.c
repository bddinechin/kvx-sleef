/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modfd1_purecfma.c --function Sleef_modfd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.90fc38a225ab8p-94, 0.0, 0.0, 0x1.0c03cbe6f192p-518, 0.0, 0.0, 0.0,
     0x1.a14f28f0ef03dp-376, 0.0, 0x1.e229401833e9dp-662, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af7f92b36366ep-558, 0.0, 0.0, 0.0, 0x1.ad12827ba65e1p-118,
     0x1.2f01fb8248272p-392, 0x1.e48f5825cd149p-636, 0x1.d93c3ddea3b2fp-333, 0.0, 0.0,
     0x1.1db5c09fc84ebp-699, 0x1.8c89b40f098bdp-902, 0.0, 0x1.d9aa7a25de12ap-926, 0.0,
     0.0, 0x1.ec6849a9e4acbp-248, 0.0, 0.0, 0x1.b36e67f1af7dbp-991,
     0x1.1be6e6d5b6a6p-1000, 0.0, 0x1.f649abec2143ap-87, 0.0, 0.0, 0.0,
     0x1.83cbc207c9f7p-935, 0x1.f96932ce6c661p-46, 0.0, 0.0, 0.0,
     0x1.03fd1fb06a03fp-231, 0x1.ec24a1f32c003p-665, 0.0, 0x1.7b16ccfabd4b7p-23,
     0x1.41e43af83ac3dp-798, 0.0, 0.0, 0x1.5747fd55f94a7p-5, 0.0, 0.0, 0.0,
     0x1.486dcba2b2653p-627, 0x1.1cc20dd0a5fa4p-813, 0x1.a842e610f37a6p-173, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1f935ee6da4a1p-72, 0.0, 0x1.f6e7ada195653p-511,
     0x1.66c9a8988838ep-223, 0x1.6baab4d93c0a5p-3, 0.0, 0x1.96470a83ef494p-63, 0.0,
     0.0, 0.0, 0x1.b13ddfb5c8a1bp-503, 0.0, 0x1.eb822a09b6843p-920, 0.0, 0.0, 0.0,
     0x1.c2cb5ccf4ecefp-236, 0.0, 0x1.b79e5e3c3c4c1p-809, 0x1.05b027fc09294p-362, 0.0,
     0x1.5b654771d9a1ep-186, 0x1.167f0fe57f645p-859, 0x1.30b7354354c7ep-465,
     0x1.fbb8e68bba2b1p-517, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ac06b8c9d09bp-715,
     0x1.71633d449b788p-880, 0x1.584256c7cf53fp-673, 0x1.3a2faff4230dfp-58, 0.0,
     0x1.556113d7c55e4p-687, 0x1.28b6960477f4fp-556, 0.0, 0x1.acca9cc30227p-426,
     0x1.46b420aa464b4p-136, 0.0, 0x1.efedc85c53441p-20, 0x1.db9e8b92bacabp-900,
     0x1.4ffd0f4a1ca6p-359, 0x1.51658d4d93279p-318, 0x1.3a9270545c0ap-682,
     0x1.15b6ec59fbfa9p-931, 0x1.8d69e1d80b823p-326, 0.0, 0x1.da37a24feb3ep-619, 0.0,
     0x1.37a2c539b6bc2p-526, 0x1.493feaffbec6bp-578, 0.0, 0.0, 0.0,
     0x1.1dab707a3335p-820, 0.0, 0.0, 0x1.00226091db58bp-291, 0x1.730b6088cb1p-283,
     0.0, 0.0, 0x1.9404268faf91dp-7, 0x1.65ff8c605bf3ap-422, 0x1.ba94e9f3167ep-709,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6358a28a06e74p-166,
     0x1.96f0a3fb189f9p-382, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.159d07ee14ed2p-401, 0.0,
     0x1.0b2083cff58c8p-692, 0x1.729829492e6bcp-996, 0x1.228d38c7944c2p-448,
     0x1.322025b03c611p-160, 0.0, 0.0, 0.0, 0.0, 0x1.fdd20dae70e94p-33,
     0x1.2b7d02e93d29p-69, 0x1.c4b6a21080dabp-657, 0x1.9608182b8f4dbp-259,
     0x1.ee09367a78cacp-422, 0.0, 0x1.01059106725dcp-895, 0.0, 0x1.8bd2a70c36377p-204,
     0.0, 0.0, 0x1.96706be841da7p-291, 0.0, 0x1.f876eb6764828p-378,
     0x1.3f3bd286a55d7p-871, 0.0, 0.0, 0.0, 0x1.0199fa7e1df97p-759,
     0x1.b29bd2eef963p-607, 0.0, 0.0, 0x1.9d23984082e1ap-626, 0.0,
     0x1.0c59b0e79baa8p-12, 0x1.3d8b2415af9a7p-349, 0.0, 0.0, 0x1.fd25c07a65c99p-686,
     0x1.b49a2413a6024p-894, 0x1.bd42f8cfb58a2p-745, 0.0, 0.0, 0x1.7d2d5926b65b3p-7,
     0x1.0e234a0772c16p-119, 0.0, 0.0, 0x1.f237bb2b6f896p-886, 0.0, 0.0,
     0x1.f6dce05964dd6p-313, 0x1.5ec722241e5b3p-934, 0x1.045cce65d31a2p-441,
     0x1.d7c9f4c1bf002p-511, 0x1.7262a3997dc72p-461, 0.0, 0x1.225a109132065p-303,
     0x1.52f1e72c411e7p-739, 0x1.bbb7c1a9aac7cp-491, 0x1.1ce0966a66b74p-375, 0.0,
     0x1.48a01334274edp-1011, 0x1.27a327db34387p-9, 0.0, 0x1.7784be617de4ap-442, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db254ce80e8b3p-462,
     0x1.fe2c418d92a8cp-955, 0x1.f76bb50853fb2p-255, 0x1.e8ed0a1ab8818p-301, 0.0,
     0x1.0aedfd0257ccap-886, 0.0, 0x1.e13a9f4a253a1p-205, 0x1.d4a7ea7d5028cp-346, 0.0,
     0x1.fb1cccbb3a5c6p-403, 0.0, 0.0, 0x1.f1f923afc5c5dp-910, 0x1.8396d93cfd4e4p-151,
     0x1.ef871bc60b038p-59, 0.0, 0.0, 0x1.3ef7177ea5f42p-235, 0.0, 0.0,
     0x1.9b9151fa5e61cp-795, 0.0, 0x1.39c13dc7d3a27p-754, 0x1.b91510156f393p-945, 0.0,
     0.0, 0x1.4029f0297601ap-150, 0.0, 0.0, 0.0, 0x1.d1a6af1f5fb44p-72,
     0x1.225c7a402bcdbp-457, 0x1.57fb5d1ab0a5p-997, 0.0, 0.0, 0x1.dfe14872d196bp-990,
     0x1.c66fac78d405p-418, 0x1.3fe2a33c7e3bp-222, 0x1.294cb70a8f492p-131,
     0x1.b9aae80d2fabdp-241, 0.0, 0x1.47abd4bc4e74p-275, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.56612f43182ddp-957, 0.0, 0.0, 0x1.2d2b9e7eb73bep-782, 0x1.637ba291450c7p-490,
     0.0, 0.0, 0.0, 0x1.bba531d089bcdp-612, 0x1.8346938665e7ep-109, 0.0,
     0x1.f54cd83fa6f0ap-235, 0.0, 0x1.1950deb9900eep-104, 0x1.3efe931bbd012p-812,
     0x1.e15fda5c5c5c1p-790, 0.0, 0.0, 0x1.5024edcc43419p-872, 0.0,
     0x1.e6e8e9623359bp-804, 0x1.f2634da03b52ep-247, 0x1.102a0af98f425p-609,
     0x1.87725bc44da9ap-668, 0x1.f938ced3af384p-487, 0x1.16dbb21cf4e59p-198, 0.0,
     0x1.1498718549012p-539, 0.0, 0x1.8625e24821c16p-943, 0.0, 0x1.263dec5c7a883p-49,
     0.0, 0x1.85e492944982ap-903, 0.0, 0.0, 0x1.0ba71008d7ffcp-745, 0.0, 0.0,
     0x1.883b6696e3ed2p-76, 0x1.ebb7312a19e6p-577, 0.0, 0.0, 0x1.372b5f9b6092fp-1017,
     0x1.760bf2c73c8bcp-352, 0.0, 0x1.64366d743e30fp-359, 0.0, 0x1.523ed2ee8ca3ap-592,
     0x1.0df673a503deep-691, 0x1.85729e17cfafbp-437, 0.0, 0.0, 0x1.c177f1f096bbcp-264,
     0.0, 0x1.cb9ce2f51e728p-812, 0x1.f7f31b8cd9659p-500, 0.0, 0x1.a40b5cf81f28ap-773,
     0x1.f801ff047486fp-780, 0x1.604fb39713b05p-258, 0x1.f965b10f92654p-624, 0.0,
     0x1.a921b844b7b17p-281, 0.0, 0x1.4cf36d1d62b4cp-118, 0x1.bf2e14f52c00bp-655,
     0x1.e6697548b610fp-355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.56c145640a6cp-429,
     0x1.1835c02062f01p-898, 0.0, 0x1.291d39b1d2689p-589, 0.0, 0.0,
     0x1.269ff0857e7a4p-393, 0x1.87a67eb3faec2p-226, 0x1.7e4719e51b134p-63, 0.0,
     0x1.09b793f5f2ddfp-512, 0x1.a0f4bf23ddfa3p-830, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.328fa7441051ep-359, 0.0, 0.0, 0x1.521cda76fbf71p-82, 0x1.40e1fb92e79acp-129,
     0.0, 0x1.783687f545cb4p-934, 0x1.dc4a785139783p-743, 0.0, 0x1.ad25ec358c749p-990,
     0.0, 0x1.d7f53ab32bec1p-210, 0.0, 0x1.ede35344ef2bep-331, 0.0, 0.0,
     0x1.e8d42e971954fp-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b218317bba89p-672,
     0x1.8352112b826f2p-599, 0x1.5a18b81a83ef6p-877, 0.0, 0.0, 0x1.30bd2ec902271p-180,
     0x1.07446333cc02p-290, 0x1.d5e80882d39f5p-212, 0.0, 0x1.fff89835e4d3ep-39,
     0x1.3a8d53c658081p-563, 0x1.89b8067ab7c95p-270, 0.0, 0x1.b2f0285dc1a04p-125, 0.0,
     0x1.5e0bc947a1253p-411, 0x1.146af8af1be1ep-656, 0.0, 0.0, 0.0, 0.0,
     0x1.45240a0328e2cp-490, 0x1.8a2f0c86f48b5p-323, 0.0, 0.0, 0x1.eb81d8f3d2dcap-565,
     0.0, 0.0, 0.0, 0x1.feaf6d9d483b4p-491, 0.0, 0.0, 0x1.087887c933f0cp-833,
     0x1.aeaa0aaef59a1p-846, 0x1.2555ba1e4df56p-286, 0.0, 0.0, 0x1.0de9345a5586bp-62,
     0x1.2f4401ab5f94bp-512, 0x1.0a3ed6d33263ep-179, 0x1.5fdbeba6094c3p-411,
     0x1.ac6ecf47f8528p-146, 0.0, 0.0, 0.0, 0x1.370009e03a301p-738,
     0x1.3927d43bba349p-139, 0.0, 0.0, 0.0, 0.0, 0x1.7e7312f0b3d2ep-102, 0.0, 0.0,
     0x1.198b2fb5329c5p-688, 0.0, 0x1.94b3ec2314475p-907, 0.0, 0x1.991f3e95ce1eep-898,
     0x1.5018a1e97221cp-826, 0.0, 0.0, 0x1.db679340e3691p-745, 0x1.0b54d9109df1ap-61,
     0.0, 0x1.c3c1c23bc5ecap-57, 0.0, 0.0, 0.0, 0.0, 0x1.eecaefa58a8ecp-502, 0.0, 0.0,
     0.0, 0x1.180c914a57c8cp-83, 0x1.1bd524de32082p-870, 0x1.bf7242c513ef3p-170, 0.0,
     0x1.75f4b8388d88fp-753, 0x1.8bde74b980553p-447, 0.0, 0x1.71d4d0a0ae09cp-969,
     0x1.9d07486bfaa03p-403, 0.0, 0x1.ae2c7eeaecb19p-568, 0.0, 0x1.5560be11b1bc8p-12,
     0.0, 0.0, 0x1.0528d8e2f6d9ep-557, 0.0, 0x1.bad4e963e7154p-492, 0.0,
     0x1.0cc6636ddb8cp-646, 0x1.97f402ec30b0bp-470, 0.0, 0.0, 0x1.7dd83d44b65d5p-363,
     0x1.90bd05d679d4dp-763, 0x1.556dfcde68e81p-969, 0x1.942319f6792fep-490, 0.0, 0.0,
     0.0, 0x1.364ea771fbd09p-870, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b977afedce2p-779, 0.0, 0.0, 0x1.09c0e506d2044p-808, 0x1.8aaad3cbc8b7bp-858,
     0x1.fe49b16e4c066p-348, 0x1.e76e75aaa5a15p-861, 0x1.019b8cafb75c6p-889, 0.0, 0.0,
     0x1.18d76742cce71p-141, 0x1.327f825016e26p-42, 0x1.326b99c638433p-687, 0.0, 0.0,
     0.0, 0.0, 0x1.88667aa3823ffp-748, 0x1.5eece74b118e5p-303, 0.0,
     0x1.aee278a177af2p-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3a7e3eeb7e6p-17, 0.0,
     0x1.5605b73fc5172p-482, 0.0, 0.0, 0x1.c2bccb8fea6a2p-934, 0x1.585721f8734cp-655,
     0.0, 0x1.918db4f0d3018p-12, 0x1.98ba0406bf9b7p-773, 0.0, 0.0,
     0x1.840c7437dfea6p-343, 0.0, 0.0, 0x1.18c87c62ffdf5p-103, 0x1.210d37f2d471p-74,
     0x1.d6c2c4f6d44c5p-312, 0.0, 0x1.a36b36cc82869p-760, 0x1.d3cf9aeac5ef3p-480, 0.0,
     0x1.3b5ccb372e6d8p-341, 0x1.1df95f0fb48f5p-96, 0x1.80637737ccf91p-588, 0.0, 0.0,
     0.0, 0.0, 0x1.6997803d29b49p-1021, 0.0, 0.0, 0.0, 0.0, 0x1.bab8750f5ec36p-787,
     0x1.0e427db93a1bbp-606, 0.0, 0x1.73e7d2f615242p-700, 0x1p0, 0.0, 0.0,
     0x1.5584c408de565p-183, 0x1.156d589a8f45ep-784, 0.0, 0x1.e920e53f8d2ap-111, 0.0,
     0x1.be128084a2ba4p-568, 0.0, 0x1.e0608e508829fp-786, 0x1.b3b690b35af51p-428, 0.0,
     0x1.122ef611727a5p-861, 0x1.17aac46ef207dp-534, 0.0, 0x1.548247224ec95p-267, 0.0,
     0.0, 0.0, 0x1.d106fdd618a0ap-892, 0x1.7e6bc00513aafp-828, 0x1.9bc20af3ad03bp-225,
     0x1.ca06e80698d24p-461, 0x1.eafdb5a585e17p-772, 0x1.b48ce05f31ff9p-745, 0.0, 0.0,
     0.0, 0x1.fd16e5167b577p-799, 0x1.4ccd1a3905074p-746, 0.0, 0.0,
     0x1.9e9cc6ee5c34fp-990, 0.0, 0x1.5859326a13b31p-360, 0x1.23c26f2489b56p-462, 0.0,
     0.0, 0x1.512e05346fa7ap-820, 0.0, 0x1.44fe5bcab13cp-152, 0.0,
     0x1.8d17934fcb2f8p-322, 0.0, 0.0, 0.0, 0.0, 0x1.10553ad052c4fp-854,
     0x1.beda10e190262p-236, 0x1.8621dbd943c4cp-821, 0x1.da42684774ee1p-442,
     0x1.8b0d43327f236p-772, 0.0, 0x1.fb3658b8064f4p-526, 0x1.2d0ca75e1315fp-446, 0.0,
     0x1.9687d7ed3f609p-581, 0.0, 0x1.edf72f27f7d57p-349, 0.0, 0x1.51fbba8a14e08p-940,
     0.0, 0x1.03aed3335f8b6p-979, 0.0, 0x1.d1498f87e0c44p-140, 0.0, 0.0,
     0x1.6b96010848c93p-610, 0x1.1159085cd7041p-798, 0x1.dc4b918731b55p-377, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.400eec8faf249p-675, 0x1.86fff57e3e311p-18,
     0x1.c9b24cb3bce35p-56, 0.0, 0x1.a616bf9f28116p-545, 0.0, 0.0,
     0x1.6e6fb14caf2f6p-357, 0.0, 0.0, 0.0, 0x1.ab8fd18513328p-625, 0.0, 0.0, 0.0,
     0.0, 0x1.b2780e16621fap-832, 0x1.86e653d21c1b7p-941, 0x1.232930c330e08p-357, 0.0,
     0.0, 0x1.54760c1600225p-6, 0.0, 0x1.2843891cae89ap-107, 0.0, 0.0,
     0x1.fd28fd74e231ap-907, 0.0, 0x1.479e79d0f0535p-992, 0x1.072303f2f7558p-482,
     0x1.1f051e42f9ddp-433, 0x1.bd0352d4ccca6p-441, 0.0, 0.0, 0.0,
     0x1.6e2f1ecd564a6p-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84b781358e667p-633,
     0x1.14c7c0aeadedp-326, 0.0, 0.0, 0.0, 0x1.5136a024d0ca5p-818,
     0x1.ce708b6f1085ep-481, 0.0, 0.0, 0x1.dcd5e9677287cp-488, 0x1.f0e9f3a2df08ap-38,
     0x1.66e3ba49710fdp-86, 0.0, 0.0, 0x1.ac193a1a86126p-575, 0.0,
     0x1.d4ca1a2d8b9afp-748, 0x1.9650103ac482ap-863, 0.0, 0x1.549e904d36d2cp-989,
     0x1.8cc1152860be6p-499, 0.0, 0x1.343352a0e819ep-719, 0x1.320af53d3df39p-770,
     0x1.d8e1cdf70c095p-566, 0x1.5ac535af74d18p-126, 0x1.76acadd1fd403p-219,
     0x1.a33519f6d519bp-571, 0x1.74e775f93d9ccp-73, 0.0, 0x1.fa54820e1ffa6p-631, 0.0,
     0.0, 0.0, 0x1.919f48afbb928p-116, 0x1.416312cd00c74p-707, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.214e6651b2c7bp-730, 0x1.c060e367936edp-377, 0x1.034a1d33a1d82p-447, 0.0,
     0x1.3c695d8da7be7p-769, 0x1.156d6ce1852a3p-167, 0.0, 0.0, 0.0, 0.0,
     0x1.3525c382375ebp-508, 0x1.c4a110bbe6904p-901, 0x1.7615eff97b2aap-588,
     0x1.99b50af4da7eep-241, 0.0, 0x1.a052080866c7ep-7, 0.0, 0x1.85cbfd253696ap-556,
     0.0, 0x1.589b21a26c6ffp-167, 0x1.d6e56d5428063p-352, 0x1.9605dac530206p-373,
     0x1.da41721c1de06p-493, 0x1.1fd76cd4157c7p-371, 0.0, 0x1.1286fcec0532bp-324, 0.0,
     0.0, 0x1.1deb5d4f735efp-22, 0x1.826c80bdd8b68p-256, 0.0, 0.0, 0.0, 0.0,
     0x1.8a4e037f2a1bcp-803, 0.0, 0.0, 0x1.b6833d27557c1p-506, 0.0,
     0x1.a4a89ea3c4637p-891, 0x1.242e73eb1e4a3p-200, 0x1.ad39411ceea72p-450,
     0x1.252da3a299bbfp-15, 0.0, 0x1.c3c01dbda054bp-360, 0.0, 0x1.dd12f3f24e8dbp-479,
     0x1.231a72285a433p-731, 0x1.6643789e24ed4p-242, 0x1.07b42df6da9eep-425,
     0x1.67bd9493f6cdep-151, 0.0, 0.0, 0x1.cb909226d161bp-473, 0x1.3434af422f662p-907,
     0x1.1d9b32f5627b3p-230, 0.0, 0x1.dd2a294d21f9ap-46, 0x1.b998890fe6846p-106,
     0x1.e96d42c8f208fp-266, 0x1.10ee0832ec823p-867, 0.0, 0x1.45c4e4360251fp-881, 0.0,
     0.0, 0.0, 0x1.86a7665fb49c9p-521, 0x1.4b671f3810f0cp-1005, 0.0, 0.0,
     0x1.b0df121fba1c1p-521, 0x1.1acc1df6d5f4p-903, 0.0, 0.0, 0.0,
     0x1.ef2e311bbf162p-386, 0x1.8af72a6d75723p-822, 0.0, 0x1.68cba0af6b961p-887, 0.0,
     0.0, 0.0, 0x1.f4af4d4367c83p-82, 0.0, 0.0, 0x1.b50e395afff31p-745, 0.0, 0.0, 0.0,
     0.0, 0x1.853fb22b9e258p-394, 0.0, 0x1.75c9104440747p-510, 0.0,
     0x1.151d63bdf189fp-469, 0.0, 0.0, 0.0, 0.0, 0x1.804e641c7b73ap-47, 0.0,
     0x1.af62463061824p-678, 0x1.dd36c01495d99p-590, 0.0, 0.0, 0.0,
     0x1.ae9e7fa4af496p-380, 0x1.843279a004023p-618, 0.0, 0.0, 0x1.552278e1214c7p-499,
     0x1.85f34c3d2720ap-32, 0x1.08fca2d482974p-746, 0x1.c95cd0a440e9ap-234, 0.0, 0.0,
     0x1.d8e177d47984cp-915, 0x1.4d28c6e1802b7p-238, 0.0, 0x1.1c49c9aa9c56bp-770,
     0x1.61545c5fd21dbp-652, 0.0, 0.0, 0.0, 0x1.30e89fed3ee83p-337,
     0x1.9b1a9e3d77648p-768, 0.0, 0.0, 0x1.225b351264c7fp-849, 0x1.6c27d08812a08p-28,
     0.0, 0.0, 0x1.03910c5e079a6p-369, 0.0, 0x1.1792a3599f0b1p-422,
     0x1.028e5451cbaf6p-395, 0.0, 0.0, 0x1.e6595a1bcf836p-628, 0.0,
     0x1.fd5de199985adp-418, 0.0, 0x1.f517a2be9bdf3p-1015, 0.0, 0x1.0ba272914f6e3p-43,
     0x1.85af2959d0ecap-669, 0x1.d588571a64d27p-737, 0.0, 0x1.6ca0c1c05b44ep-368,
     0x1.1e379bbd93e0fp-448, 0.0, 0x1.b779de0bed54cp-667, 0x1.fa9eb4ccd0eaep-521, 0.0,
     0x1.4693fe5cc2002p-899, 0.0, 0.0, 0.0, 0x1.5e43a3105e2cfp-888,
     0x1.04d3f103e2dc9p-894, 0x1.608cf154c020ap-384, 0.0, 0.0, 0x1.817d14740f598p-221,
     0x1.530eb376f5553p-139, 0x1.1e8820d697cdcp-909, 0.0, 0.0, 0x1.c8e3a3b3e100ap-235,
     0x1.95ba27d4303fdp-264, 0.0, 0x1.e51f3cc33474bp-530, 0x1.a635edbbbef8p-733,
     0x1.0012d63a7d22dp-461, 0x1.e2e3e834260b3p-462, 0.0, 0.0, 0.0,
     0x1.26615a542ad0dp-698, 0.0, 0.0, 0x1.6f80be9d5f1a6p-825, 0x1.577fe198ffbcp-209,
     0x1.427cdba375f7fp-868, 0x1.fb253bd94e43dp-478, 0.0, 0.0, 0x1.9bbf24e2777ccp-563,
     0x1.c3b3f2c13a9cbp-59, 0.0, 0.0, 0.0, 0x1.1e5b537091c87p-537, 0.0,
     0x1.8a908b5709b4ap-293, 0x1.9c66f65052ee4p-413, 0.0, 0x1.555388df5bac5p-788,
     0x1.b118702ff5edep-90, 0x1.4fe509e90acdap-775, 0x1.83949e52bb6ecp-633, 0.0, 0.0,
     0x1.1923a7080667p-611, 0x1.cbb242ca5aa4ep-829, 0x1.73c1e7a7c336fp-574,
     0x1.29f5b97ad192dp-956, 0x1.4a410e7bdaa75p-531, 0.0, 0.0, 0.0,
     0x1.6f290dfb69045p-297, 0x1.6c6edf1270a2ap-282, 0x1.ce314ae9b8a4bp-752, 0.0,
     0x1.31c92d611c25p-48, 0x1.68ce360e28695p-948, 0.0, 0x1.e83d467a94454p-878, 0.0,
     0x1.2972027c6a084p-27, 0x1.1c7db37c514c5p-766, 0.0, 0.0, 0x1.d05d3e2b2c38bp-192,
     0.0, 0.0, 0.0, 0x1.558724078d655p-109, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7a59598ccb85p-891, 0.0, 0x1.0c246fd280a62p-802, 0x1.4498877a93e41p-171, 0.0,
     0x1.133e3ea2fced4p-124, 0.0, 0.0, 0x1.c5404b2ef23dcp-896, 0.0, 0.0,
     0x1.90433bacaf547p-189, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.beefca2b254ep-820, 0.0,
     0.0, 0x1.6b4ffb19688c4p-814, 0.0, 0x1.ace88d3d5058p-227, 0.0,
     0x1.f11ab3dbed74fp-767, 0x1.da6bc15bcefb5p-521, 0x1.2902fc28a910ep-877, 0.0,
     0x1.6af0ee745c28p-579, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e84c7c5d8823p-203,
     0x1.240eac9697fdp-49, 0.0, 0.0, 0x1.2fd3b343a3cd9p-154, 0.0,
     0x1.06fae94c15b81p-662, 0x1.3601685e097e3p-529, 0.0, 0.0, 0x1.1c264052f912p-826,
     0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_modfd1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_modfd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_modfd1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
