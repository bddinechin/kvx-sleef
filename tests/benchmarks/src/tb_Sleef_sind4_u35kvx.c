/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind4_u35kvx.c --function Sleef_sind4_u35kvx --headers \
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
     0.0, 0.0, 0.0, 0.0, 0x1.6052eb192dd5bp-863, 0.0, 0x1.c0065c7ed8f8bp-688, 0.0,
     0.0, 0x1.935a3644e9b9ap-111, 0x1.668fa2e19e15ap-77, 0x1.d60bfe26f609fp-906,
     0x1.90b09b22b8088p-209, 0x1.71e765691a928p-463, 0x1.f9b55155458e5p-68, 0.0,
     0x1.8e6bff47ee5ap-431, 0x1.d922df48fdce5p-996, 0.0, 0.0, 0.0,
     0x1.9fea6a38b4a9cp-527, 0.0, 0.0, 0.0, 0.0, 0x1.71d041b428fc7p-553,
     0x1.9e41d71c913e3p-477, 0x1.4df3da2c3931bp-115, 0x1.09f130ab8aa91p-459, 0.0,
     0x1.aa332fcb86a7bp-461, 0x1.32a2454f7b262p-923, 0.0, 0.0, 0.0,
     0x1.0e0b845932bdp-695, 0x1.c1a2bada6e167p-4, 0.0, 0x1.3c1e5c3d53b82p-29,
     0x1.0cb1dd0f2a8b7p-127, 0x1.cca02495fba22p-309, 0x1.797e296fea997p-829,
     0x1.b1bae356d20cap-661, 0x1.56569bdce55a1p-1011, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d686404d22d65p-788, 0x1.d3c72a80b34d4p-577, 0x1.ee206f1359319p-557, 0.0,
     0x1.a78e5cd9e52f2p-466, 0.0, 0.0, 0x1.fbc6a2172d41fp-520, 0.0,
     0x1.f50a29ef1649cp-406, 0.0, 0.0, 0.0, 0x1.37d93bc79662bp-66,
     0x1.40865e6a36e17p-324, 0x1.3dbeb6928c41ep-627, 0.0, 0x1.04b79d487d4b4p-372, 0.0,
     0x1.80631b968cee6p-300, 0x1.8db2dc6c40dccp-686, 0.0, 0.0, 0.0, 0.0,
     0x1.0797702cac251p-927, 0x1.e871cda54f775p-743, 0x1.832260c89c7e9p-945,
     0x1.78ce17736874ap-674, 0x1.9e1e068ecd8aep-677, 0.0, 0x1.ef20ac772e232p-146, 0.0,
     0.0, 0.0, 0.0, 0x1.0b01f2f49051bp-634, 0.0, 0.0, 0x1.8c96f7a61fb12p-549,
     0x1.705b533c5563ep-831, 0.0, 0x1.9c571e278addp-871, 0x1.36454525d9383p-138, 0.0,
     0x1.ec0665224949fp-367, 0x1.86a911887578cp-823, 0.0, 0x1.5f3c6f4c82baap-156, 0.0,
     0.0, 0.0, 0x1.a2917621e091ap-199, 0x1.465295069ed56p-544, 0.0,
     0x1.f841832a25526p-82, 0x1.a7f633b8377ffp-257, 0x1.e469dd2ff6fcbp-946,
     0x1.c03853a9f7fc1p-476, 0x1.16bdb7b7a9206p-367, 0.0, 0.0, 0.0,
     0x1.450bb2d150eb8p-486, 0x1.911eaeaa37cd9p-847, 0x1.f33334af8b737p-834,
     0x1.e4d92a819d1c8p-868, 0.0, 0x1.9a135f3b19367p-631, 0.0, 0.0,
     0x1.ffa427ecebf5p-763, 0.0, 0.0, 0x1.f6d5266382093p-250, 0.0,
     0x1.d29e7658e8536p-400, 0.0, 0x1.707004be9db26p-937, 0.0, 0x1.d2308d950e944p-878,
     0x1.4fe25cfe57079p-993, 0x1.2356c47a0de94p-490, 0x1.241e32b8317b1p-325,
     0x1.8667608333c0cp-441, 0x1.0c98abac5172ep-68, 0.0, 0.0, 0x1.e2b2b749efcd6p-662,
     0.0, 0.0, 0.0, 0x1.f7894bf588739p-1017, 0.0, 0.0, 0x1.7aa198dcb788dp-924, 0.0,
     0x1.7b1e8baa26aaap-707, 0.0, 0.0, 0x1.8243fb6d7cf84p-348, 0.0,
     0x1.1d1ba7404215dp-337, 0x1.7c40dffd518f8p-298, 0.0, 0.0, 0x1.24b11322406cdp-604,
     0.0, 0x1.f4491b8513813p-422, 0.0, 0x1.a087c66d2dcbbp-853, 0x1.21cdac21a0b6bp-944,
     0.0, 0.0, 0x1.38adb4ff830a6p-103, 0x1.5d1ef3b4f648fp-386,
     0x1.4e077f063aae3p-1002, 0.0, 0x1.e69e2e8c6a17cp-875, 0.0, 0.0,
     0x1.7e8ca71dbd17bp-264, 0.0, 0.0, 0x1.ebe3587ef362bp-881, 0x1.27932c30483e6p-677,
     0x1.8724d4b9dd4d5p-275, 0.0, 0.0, 0.0, 0.0, 0x1.20d0219e412b4p-543,
     0x1.86f7d5755f0fp-428, 0x1.f9f8b364b835dp-593, 0.0, 0.0, 0.0,
     0x1.975e17d772b4fp-719, 0x1.ce3eb20fc61ebp-431, 0x1.c8d5e09578559p-592, 0.0,
     0x1.c39fe15fb5569p-972, 0.0, 0x1.cb5da76aad57p-675, 0.0, 0x1.1ea19b74d3763p-276,
     0.0, 0.0, 0x1.198751b240eafp-74, 0.0, 0.0, 0x1.908d68f8d4b2ep-683,
     0x1.44155f5680b1ep-860, 0x1.4592f2c244b31p-788, 0x1.fa018aed304c7p-384, 0.0,
     0x1.5dd89107dc3a4p-108, 0.0, 0x1.92a2b28cd981fp-119, 0.0, 0.0, 0.0,
     0x1.a7727d6bd3e3ap-82, 0x1.6360f1cd7e3fep-13, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e2d0e7704c17dp-478, 0.0, 0x1.35de3ac24941ap-186, 0.0, 0.0, 0.0,
     0x1.f41dd682a012ep-91, 0.0, 0x1.582735eaf8506p-399, 0x1.acedd6e92925ap-1003, 0.0,
     0.0, 0x1.59f964972bbap-573, 0.0, 0.0, 0x1.1a1630c02feaep-6, 0.0, 0.0,
     0x1.a0c4cc927f653p-960, 0x1.ea1d6218d0edep-253, 0.0, 0.0, 0.0,
     0x1.e5a008008885ep-76, 0x1.cc20dc1441999p-631, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dfb6217ff2301p-444, 0.0, 0.0, 0x1.9bb58c288919ep-391, 0.0,
     0x1.ebfa93083da67p-616, 0.0, 0.0, 0.0, 0.0, 0x1.bbebd7b3e79d9p-506, 0.0, 0.0,
     0x1.e06390a3a1267p-561, 0x1.f9c1cb12cfbd3p-385, 0x1.1dbc0939f227fp-253,
     0x1.33a155efe7211p-458, 0x1.7eed606c5a4e7p-170, 0x1.87a9d5ef98adap-452,
     0x1.a328ee3f9bb19p-338, 0.0, 0x1.6c0e0a9584518p-446, 0.0, 0x1.c4792e3bae148p-816,
     0x1.f079aa72c8d95p-410, 0x1.eb443a4d2fb2bp-949, 0x1.7f22417f6ebc6p-563,
     0x1.56b9fbf4c0ce8p-182, 0.0, 0x1.294681a5111fep-791, 0.0, 0.0,
     0x1.435168408661p-30, 0.0, 0.0, 0x1.42ae3793a0f04p-481, 0x1.6bdc13b1690f9p-436,
     0x1.7d9be479f0d8ep-640, 0x1.7523db70686ecp-129, 0x1.fd8b7b8823c2fp-308,
     0x1.8099ae48aa3e3p-805, 0x1.3fb0000d885fbp-550, 0.0, 0x1.7a1c684fccca3p-994,
     0x1.772e647b2de47p-1004, 0x1.e198359d86c97p-72, 0.0, 0x1.eba77161e82c2p-759,
     0x1.e240c3cfb25dp-803, 0x1.433bbe43c22fcp-947, 0x1.c022fe3a20b1ep-339,
     0x1.f3efccf0fec83p-1012, 0.0, 0x1.79e8d6b5cfab4p-788, 0.0,
     0x1.eca6df3dec035p-488, 0x1.7b1f4b93e38e9p-54, 0.0, 0.0, 0.0,
     0x1.c85158a890c53p-801, 0x1.6d93d80b28351p-398, 0.0, 0.0, 0x1.72054738f3f75p-386,
     0x1.1b4828c6c0988p-162, 0.0, 0.0, 0x1.1b1b1713e64a9p-450, 0.0, 0.0,
     0x1.3dae114ad8fcfp-778, 0.0, 0x1.5fc6262c7e0bdp-822, 0x1.7eabc2a0313dbp-840,
     0x1.b15cf8736846dp-568, 0.0, 0.0, 0.0, 0x1.01557ade1c3fap-165, 0.0,
     0x1.a1653c99aacb9p-731, 0x1.8d5d86e6f5489p-750, 0x1.dcd1fbc5f8b06p-557, 0.0, 0.0,
     0x1.09f3b9cd07ec7p-630, 0x1.fd80baa12f90bp-461, 0x1.4fc651148cc0ap-261, 0.0, 0.0,
     0x1.90e2e6a9c2bd3p-941, 0x1.b4cbf92e6014p-460, 0.0, 0.0, 0x1.32554180aa933p-334,
     0x1.33fbe7ea9a93dp-407, 0.0, 0x1.d40ad7ece272fp-300, 0.0, 0.0,
     0x1.6be75e580fcb6p-482, 0x1.6f73145940836p-401, 0.0, 0.0, 0x1.407576a2cfc43p-723,
     0.0, 0x1.1a61f3757581p-767, 0x1.d4d58dae5205ep-446, 0.0, 0x1.9a7f1b11b08d7p-43,
     0x1.4009a0e3a3b4cp-767, 0x1.cfc135f4a64p-9, 0.0, 0.0, 0x1.cefacfa608b5p-130,
     0x1.c478392439854p-280, 0x1.1490129b27d87p-464, 0.0, 0x1.753c056b5c8bbp-760,
     0x1.f264371f8bb4ap-107, 0x1.3293429768e6ep-680, 0x1.406a04e6169eep-665,
     0x1.5f30334d77d95p-656, 0.0, 0x1.28705c1ca7ef9p-847, 0x1.f98fe018bc705p-282, 0.0,
     0.0, 0.0, 0x1.d11cd5339cbf5p-659, 0.0, 0x1.395ee9d455f85p-899, 0.0,
     0x1.62683c7e14079p-959, 0x1.83a961d8a000ap-194, 0x1.f0b94a22fb312p-514, 0.0,
     0x1.eee1c161a90abp-986, 0.0, 0x1.84d1042ffb655p-838, 0.0, 0x1.994d388b9d7ep-518,
     0x1.116ab474d4e6bp-998, 0.0, 0.0, 0.0, 0.0, 0x1.70c0fbe794e0dp-121,
     0x1.9d1e525bec32ep-669, 0x1.489c59f167409p-388, 0.0, 0.0, 0x1.bbd176cbcd74cp-128,
     0x1.0d25d6843e3abp-101, 0x1.abbd8b3ffeecp-452, 0.0, 0x1.db236be455739p-701,
     0x1.cc6e620521142p-652, 0.0, 0x1.46a002f7778d3p-987, 0x1.04af9592e3974p-330, 0.0,
     0x1.523951a7c072cp-872, 0x1.e9e060df120eap-110, 0.0, 0.0, 0.0, 0.0,
     0x1.80db5f283f324p-673, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ee7d17cf044dp-818,
     0x1.d57199e0495a9p-134, 0.0, 0x1.345e9d0a7ca21p-781, 0.0, 0x1.db9a2e9099bd4p-551,
     0.0, 0.0, 0x1.d53007b1e6e26p-6, 0.0, 0.0, 0.0, 0.0, 0x1.e75819de01f9bp-762,
     0x1.2e008bb3112ddp-1018, 0x1.458905c37b1a9p-917, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e19aecdad6888p-980, 0x1.9ff106bf13fadp-308,
     0x1.8c8ea9ad1bcffp-837, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38e3de3e00216p-130,
     0.0, 0x1.6deb78f58acabp-302, 0.0, 0.0, 0x1.80ed112cb9a21p-154,
     0x1.7d2a5298aaa6cp-10, 0.0, 0x1.e1f0dc35b7411p-639, 0.0, 0x1.b9db4a72ebc3p-444,
     0x1.318eae7d167b1p-93, 0.0, 0x1.d5bd1dff9c7d9p-278, 0.0, 0x1.a0ef40b0b2c9dp-578,
     0x1.e566b960c1837p-362, 0x1.ac7466dbac9a2p-740, 0x1.ff5b9576e7197p-314, 0.0,
     0x1.cda0773867dabp-682, 0x1.325443f8ca4c4p-855, 0x1.e635a7debf97cp-910, 0.0, 0.0,
     0x1.e222cf6a1ffe1p-320, 0x1.e7e096910cadp-320, 0.0, 0x1.01a4775a253cdp-2,
     0x1.87f9541dca25fp-153, 0x1.0b301c0aac5cdp-973, 0.0, 0.0,
     0x1.3b4ff9a08d089p-1014, 0x1.a1c6902177048p-487, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3aa46e4017d41p-562, 0.0, 0.0, 0.0, 0x1.7ff924487001ep-154, 0.0,
     0x1.69c37482fd685p-631, 0x1.2a11253ed42fap-1008, 0.0, 0x1.1f5ed687d51ddp-618,
     0.0, 0.0, 0x1.2c571e2305f6ap-697, 0x1.22a892251add9p-817,
     0x1.a041251f2ce4ep-1006, 0x1.557fe3546a568p-223, 0.0, 0.0,
     0x1.6993c8b74087cp-707, 0x1.99e01b6aa2dd3p-772, 0.0, 0x1.ee8aa3e0ac5aap-302, 0.0,
     0.0, 0.0, 0x1.89cae6ab09999p-553, 0.0, 0.0, 0x1.0227f1b151eb5p-651,
     0x1.1f30f3a80147fp-545, 0.0, 0.0, 0x1.138b0d8e96404p-472, 0.0,
     0x1.32a04b8865ec1p-1007, 0x1.c372d4538556p-1017, 0x1.38181e1d6cd7ep-854,
     0x1.bdbf83040b822p-473, 0x1.fc61fb3337f43p-43, 0.0, 0x1.c4356049cea54p-811,
     0x1.6a32febb5ff0fp-613, 0x1.b99de6b7af665p-573, 0x1.09bf44ef3dad6p-220,
     0x1.dfdf8b77a211cp-435, 0x1.29b5af382709bp-217, 0.0, 0x1.e5406472f9124p-526, 0.0,
     0.0, 0.0, 0x1.121c43349cde1p-209, 0.0, 0.0, 0.0, 0.0, 0x1.2c740351125f1p-525,
     0.0, 0x1.7c89fe489d12p-105, 0x1.973d74e9ab212p-917, 0x1.5f08ef8dbcbf4p-307,
     0x1.edb73f2b74d5bp-183, 0x1.7d1280e6a17b7p-297, 0.0, 0x1.de6bfa63261c9p-848,
     0x1.0ed5665058034p-808, 0.0, 0x1.42ee811e9c2d3p-287, 0.0, 0x1.ec8998fecd8dfp-491,
     0.0, 0x1.ea68c0ffc4a93p-430, 0x1.720c5c4d8e26dp-904, 0x1.5d175148d6c48p-56, 0.0,
     0x1.07dd11c523029p-696, 0x1.fbfb977c3c7f7p-55, 0.0, 0x1.895a819a28c19p-594,
     0x1.326ec99a87a45p-408, 0.0, 0.0, 0.0, 0x1.0062db5332d6cp-207,
     0x1.615967e6770c2p-275, 0x1.17bca60598c11p-248, 0.0, 0.0, 0x1.9411732aa2e53p-799,
     0x1.197b8ce2034cfp-108, 0.0, 0.0, 0x1.1bd44a769e861p-224, 0x1.92402d12ae7a9p-964,
     0.0, 0.0, 0.0, 0x1.2ed27bb9a5bddp-795, 0.0, 0x1.a60dcf9ba613dp-975, 0.0,
     0x1.d351d284131a8p-843, 0x1.ff634f6ad6e65p-734, 0x1.fcfd89e05dc04p-376, 0.0,
     0x1.b7c1edbb5865ep-308, 0.0, 0.0, 0x1.cf3b16175084ep-49, 0.0, 0.0, 0.0,
     0x1.3f578ba41e681p-633, 0x1.d86891a79d51dp-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2bdb32f090673p-198, 0x1.924b202f1480cp-243, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0b4f316fb7eep-778, 0.0, 0x1.d87153fcad03p-788, 0.0, 0.0,
     0x1.bc9f0b640e23fp-31, 0.0, 0x1.4ff8acf3d1ae8p-534, 0.0, 0x1.c190b12e0a108p-106,
     0x1.670aa115603edp-713, 0x1.1c56804c9aa4ap-350, 0x1.15e55e2954797p-289, 0.0,
     0x1.7fb218228a1e3p-697, 0.0, 0.0, 0x1.1a0034c1c9f4fp-168, 0x1.debc65ced78e7p-454,
     0.0, 0.0, 0.0, 0.0, 0x1.5d4e6f99fbeeep-297, 0x1.79b24b43605dap-550, 0.0,
     0x1.f61ec91ba48acp-975, 0x1.e593a5d1149p-379, 0x1.bbb6cb34ca0d4p-204,
     0x1.f417035e37d9ep-57, 0x1.76065a1fc5119p-126, 0.0, 0.0, 0.0, 0.0,
     0x1.6255cae55e019p-158, 0.0, 0x1.581976ed40088p-653, 0x1.2ef3ee193842p-353, 0.0,
     0x1.44142bc294f9p-56, 0x1.bd3f01b8b4183p-888, 0.0, 0x1.faf74e4ea4e4ep-362,
     0x1.fde424cd62d8dp-342, 0.0, 0x1.03fb0b631e053p-1020, 0x1.a3b3f1cd6fea2p-147,
     0.0, 0x1.2b25af8bdba2p-52, 0.0, 0.0, 0.0, 0x1.ddd3d270bce27p-968,
     0x1.62d25db40ab33p-206, 0x1.b17123c52f3efp-181, 0x1.e02688d1c5a0ep-273,
     0x1.39dd3823fecfcp-338, 0x1.2c0f61186ecf9p-156, 0.0, 0x1.e19bd318d12c7p-96,
     0x1.5744d223ee587p-923, 0x1.e93723950a374p-663, 0x1.6b112240d4cf5p-194, 0.0,
     0x1.a857857f3b8d3p-887, 0.0, 0x1.e719a2cefb9b6p-697, 0.0, 0x1.ad8b2307b2914p-558,
     0.0, 0.0, 0x1.89e20e1d7a42ep-809, 0x1.73c409a4eb9ecp-464, 0x1.42550e71250a6p-555,
     0x1.abd825a2a5df2p-212, 0x1.d69ec00565e06p-530, 0x1.4a9202478ae5bp-674,
     0x1.ea2facc76242p-2, 0x1.866600957a294p-19, 0x1.3a511fdbe6011p-10, 0.0,
     0x1.b6d296fc2a9e2p-49, 0x1.e068502718da4p-178, 0.0, 0x1.2d0c2bfaee297p-279,
     0x1.dfd114c52b38fp-929, 0.0, 0x1.cd410ad63920cp-499, 0.0, 0x1.b68f7ae84a8f1p-372,
     0.0, 0x1.28b9e1fdb68f4p-441, 0x1.16c8a49ba9401p-143, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.408393df7d917p-750, 0.0, 0x1.f841a4f8ca8aap-86, 0.0, 0.0,
     0.0, 0.0, 0x1.37abd2b4a3cd6p-516, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ffa02986cfe42p-244, 0x1.de42e09650c3cp-869, 0.0, 0.0, 0x1.88c811237f3e2p-589,
     0.0, 0.0, 0x1.a9db03c57903bp-822, 0.0, 0x1.aaa60ce3ff465p-797,
     0x1.85494495f65eep-939, 0x1.9f8dabc28f213p-290, 0x1.34ce1b58b1dfcp-1003, 0.0,
     0.0, 0x1.532cf49855acdp-831, 0x1.ad825e11add2dp-16, 0.0, 0.0,
     0x1.0853474191a94p-412, 0.0, 0x1.b6e6a2320cd5ep-437, 0x1.39daf931c14fp-393, 0.0,
     0.0, 0x1.199ffe78d52ecp-674, 0.0, 0.0, 0x1.6cd2d12dd4fddp-960, 0.0, 0.0, 0.0,
     0x1.e6ccb3c76319cp-20, 0.0, 0x1.08bc67631eb57p-835, 0x1.45ffacf08468ep-550, 0.0,
     0.0, 0.0, 0x1.27796a762d789p-1007, 0x1.369b36c585c3bp-785, 0.0, 0.0, 0.0, 0.0,
     0x1.8d8024d631d72p-145, 0x1.911a307e5e7e7p-240, 0x1.8b09597cae77ap-613,
     0x1.2930042e80a91p-672, 0.0, 0.0, 0x1.a7a61249060a5p-819, 0x1.f4a33f995eed2p-757,
     0x1.4fab6d012ef62p-171, 0.0, 0x1.d7bd41847424ep-20, 0.0, 0x1.377e21590e37ep-190,
     0.0, 0.0, 0.0, 0.0, 0x1.0dcd3f0475961p-214, 0x1.e664bb4476676p-290, 0.0,
     0x1.00c874eb2bc85p-667, 0.0, 0.0, 0x1.a5c774cc85feep-139, 0.0,
     0x1.4a807d4833081p-828, 0x1.e16ca90d0f478p-715, 0.0, 0.0, 0.0, 0.0,
     0x1.8f72e7fab4385p-830, 0x1.65e991437f369p-687, 0x1.443e18bd1d2ccp-45,
     0x1.8d84a9c3f376ep-939, 0.0, 0x1.dde993c77276cp-354, 0x1.df7e0f63b2e81p-459,
     0x1.5c8ce582d8781p-419, 0.0, 0.0, 0x1.13c219f2b090dp-165, 0x1.047544cd9e809p-154,
     0x1.a7e8d56dea74bp-23, 0x1.1b0f2886808dep-330, 0x1.8a28affecb98ep-623, 0.0, 0.0,
     0x1.bb33de84620c1p-914, 0.0, 0.0, 0.0, 0x1.58bc6f12552bfp-494, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.662e4d4510ab3p-296, 0.0, 0x1.e555111226d7fp-933, 0.0, 0.0,
     0x1.6297bd608052fp-923, 0x1.b21092dd4e4b7p-798, 0x1.df05abb801405p-240,
     0x1.38fd770af5fd8p-154, 0x1.d3eefb75d37c2p-835, 0x1.3fbdda3c79179p-344,
     0x1.c0e9f9ca2fe3dp-616, 0.0, 0x1.218b62dd7770cp-967, 0.0, 0.0,
     0x1.eb9be5b24a1fbp-366, 0x1.aa179605fbf64p-8, 0x1.f718a041f892cp-645,
     0x1.d7fb7160ac159p-673, 0x1.8e2a5c9e12b9p-976, 0.0, 0x1.a7a0bb29d52b9p-34,
     0x1.72d1062e725f9p-199, 0.0, 0x1.1ab69fadf4b6bp-565, 0.0, 0x1.dd1c32b33355cp-455,
     0.0, 0x1.7307859f5f032p-626, 0.0, 0.0, 0.0, 0x1.fae1f8f053e7ap-431,
     0x1.74e266a4bd8edp-558, 0.0, 0.0, 0.0, 0x1.26560cdbd974fp-612,
     0x1.701898a43716ap-144, 0.0, 0.0, 0x1.b749e8ffd0eafp-720, 0x1.476f058b1c543p-651,
     0x1.811039a249f6cp-997, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f6e7191ec5b7ap-274,
     0x1.ebf0f7a25ac67p-883, 0.0, 0x1.e8781a3a8bf84p-39, 0x1.892c7ba3e906ep-581,
     0x1.24b86a8a27a7bp-28, 0x1.bfbbb939c0f93p-981, 0x1.3c0aa93d09fbbp-647,
     0x1.f676d0eb4870ep-1021, 0.0, 0.0, 0x1.146f0d88d9703p-690,
     0x1.366e301a3a422p-251, 0.0, 0x1.93739be8de7aap-43, 0.0, 0x1.e69a9d2fb9e09p-357,
     0x1.5f644f00c3081p-874, 0x1.9e79b95f8c7e4p-77, 0.0, 0x1.c06123c7bf164p-88,
     0x1.0924dfd9e2be9p-364, 0.0, 0.0, 0x1.8908a9ea0db8ap-264, 0x1.d13213a88bf3ep-757,
     0.0, 0x1.a9bc50163f3d7p-939, 0x1.f205836eb0ee9p-1011, 0.0, 0.0, 0.0,
     0x1.d18c7cdad0a9bp-341, 0x1.9c5792da1883cp-466, 0x1.f28870853ff9ap-190,
     0x1.eeca4b902a048p-122, 0x1.7f7d5ec29f9aep-715, 0x1.8e4525cc4082ep-9, 0.0,
     0x1.b39a63665c44cp-404, 0.0, 0x1.78624a90a835ap-91, 0x1.653552bdfce8fp-89, 0.0,
     0.0, 0.0, 0x1.cbface11a449ep-91, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d671f2ac6e3bp-543,
     0.0, 0.0, 0.0, 0x1.c25612ed33cf8p-591, 0.0, 0x1.2d91448d137f2p-519, 0.0, 0.0,
     0x1.c8fc8d80b9629p-667, 0x1.94ad155c313d5p-130, 0x1.a1f00aa343be6p-520,
     0x1.bf3890dbcf64bp-872, 0x1.fad61a1fa0d5cp-698, 0x1.9efdbacfc245bp-331, 0.0, 0.0,
     0.0, 0.0, 0x1.3ebe9b2b98e18p-363, 0x1.966a3205fa3f6p-656, 0x1.be542f6de7586p-685,
     0.0, 0x1.af02ade5e628ap-504, 0.0, 0x1.d3b57f39eb0d9p-784, 0.0,
     0x1.dbfed3acbe13ap-677, 0.0, 0.0, 0.0, 0x1.5a9a93bc69373p-797, 0.0,
     0x1.0ba962f77eadfp-750, 0.0, 0x1.d0eb7936cf103p-348, 0.0, 0.0, 0.0, 0.0,
     0x1.dcf00c61f03b6p-577, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.42b6e3b2d6fc8p-962,
     0.0, 0.0, 0x1.cb460f311c721p-752, 0x1.9000a487a4a58p-106
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
            tmp1 = Sleef_sind4_u35kvx(tmp0);
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
    printf("Sleef_sind4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_sind4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
