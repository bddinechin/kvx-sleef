/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_erfc.c --function erfc --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.7fa7cdc506359p-229, 0.0, 0x1.bef3f56720acfp-14, 0.0, 0.0, 0.0, 0.0,
     0x1.6f5041ee60e78p-566, 0x1.273f2214ddfb6p-616, 0x1.8414c18d7760bp-588,
     0x1.315b60ee92dedp-792, 0.0, 0.0, 0x1.a4ad0ad72ac01p-728, 0x1.ab66365820515p-399,
     0.0, 0x1.67527dd7a9faep-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.92a432e38c37dp-426, 0x1.0a82f3cd8650ep-758, 0x1.3d1c5a0e66f1bp-554,
     0x1.298c531ad4ebfp-590, 0x1.32c45d50f25d6p-839, 0x1.b8d263b209c86p-918,
     0x1.1b22271821647p-275, 0x1.0be5e5c4f9e39p-305, 0.0, 0x1.c85e5de170396p-761,
     0x1.7feaeccc1153bp-66, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.170581812d3a4p-94,
     0x1.50607b9153101p-443, 0.0, 0.0, 0.0, 0x1.611880ec37ef7p-764, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fa16d4cbf8a11p-544, 0.0, 0x1.410c8bc35b97dp-63, 0.0,
     0x1.e7dcac9f26c98p-350, 0.0, 0.0, 0x1.ff96b603d300bp-573, 0x1.6f916e53a87e2p-735,
     0x1.42e7dce5d43a2p-288, 0x1.ab9b1575d7ab6p-13, 0.0, 0.0, 0.0, 0.0,
     0x1.37c2dd371f4e9p-275, 0x1.8109c04c7faf4p-414, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b74d2b6ae2956p-644, 0.0, 0.0, 0.0, 0x1.d213503e166e1p-569, 0.0, 0.0, 0.0,
     0x1.a0765a0113ff8p-457, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df6ead8c6af1dp-636, 0.0,
     0x1.6eb80a7836116p-362, 0x1.c3087cf9dba98p-737, 0x1.cfd4520d78a64p-402,
     0x1.2fb4bce84731fp-957, 0.0, 0x1.f8ec977ae0b17p-730, 0.0, 0.0,
     0x1.ad6c1ef7928d6p-467, 0.0, 0.0, 0x1.06097f6a816adp-96, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e3e724d4e1373p-729, 0.0, 0x1.cfd6601ac4c82p-79, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.da10a006bd635p-308, 0.0, 0x1.dfcdc7d950749p-257, 0x1.8397ce3ba8b02p-949,
     0x1.4a4700797e258p-505, 0.0, 0x1.4451b709f284ap-307, 0x1.433f6c44e35f2p-765, 0.0,
     0.0, 0.0, 0.0, 0x1.08039a1c1fe93p-165, 0.0, 0.0, 0x1.37c6f5a0331e9p-962,
     0x1.3637c30893451p-767, 0x1.c5186695e4cccp-351, 0.0, 0.0, 0.0, 0.0,
     0x1.f0b1fc35f05f5p-12, 0.0, 0.0, 0.0, 0x1.152e82c22073ep-828, 0.0,
     0x1.04d5ce56b514bp-584, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fe853922fb48p-631,
     0x1.677d1dd6fff79p-141, 0x1.85416eb308cc7p-235, 0x1.58f21569142a1p-356, 0.0,
     0x1.0eb217fb68fb9p-334, 0x1.877b72359056ap-678, 0.0, 0.0, 0x1.8ebc643acccacp-525,
     0.0, 0.0, 0.0, 0.0, 0x1.6af944a3ea7c4p-411, 0x1.aeccacf245b01p-766, 0.0, 0.0,
     0x1.a2f1e9ca647a4p-497, 0.0, 0.0, 0x1.6bced9c0bdec1p-506, 0x1.251d58daf9cfap-63,
     0.0, 0x1.be2049ed05b89p-636, 0x1.d3f9ec85068bfp-761, 0x1.cf13e52317c99p-172, 0.0,
     0.0, 0.0, 0x1.25985aed72125p-197, 0x1.227672fd2e21ep-1012, 0.0, 0.0,
     0x1.9e6a266af48b8p-837, 0.0, 0.0, 0x1.0b5c589a440c3p-210, 0x1.4c6abe6e8b791p-857,
     0.0, 0x1.8f23678964954p-58, 0.0, 0x1.f79c62779359ap-56, 0x1.e81c7a2970e5cp-815,
     0.0, 0x1.400735c4fdd33p-323, 0.0, 0.0, 0x1.57e13a69710ddp-766, 0.0,
     0x1.0c3714a057c71p-640, 0x1.bcf536ee22941p-970, 0.0, 0x1.0e06c9ae5006p-548, 0.0,
     0x1.507ad71acaba9p-525, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d10358c7b452ep-919,
     0x1.48de9943f9e42p-23, 0x1.62042be230a06p-694, 0x1.ba781a5cbdc0bp-150, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.adb23d23acaf7p-1021, 0.0, 0.0, 0.0, 0.0,
     0x1.b654318be3d3cp-898, 0x1.866c891f7bb67p-359, 0x1.406c864cf68cap-425, 0.0,
     0x1.842a5ed4bba5cp-694, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a83e6a2d7fc3ep-602,
     0x1.8074582a1389ep-298, 0x1.399ade17d19a7p-29, 0.0, 0.0, 0x1.123d6cbaedfaap-790,
     0x1.7fc245b258ca1p-4, 0.0, 0.0, 0x1.15c8381e036f3p-544, 0x1.f1b95e970abcp-34,
     0x1.7e8ba3345e03ep-448, 0.0, 0.0, 0x1.2cbbfe58978ddp-569, 0x1.ad9887d7032f6p-911,
     0x1.17d447ca2c862p-826, 0.0, 0x1.c2347da704676p-802, 0.0, 0.0,
     0x1.26e86bef50215p-65, 0.0, 0.0, 0.0, 0x1.3b61adf2b7e48p-364, 0.0,
     0x1.a1a425f50cb57p-909, 0x1.2f0eb38282e65p-313, 0.0, 0.0, 0x1.1bd17d598d5e2p-918,
     0.0, 0.0, 0x1.17ba53a091f92p-31, 0x1.049645d74c95ep-938, 0x1.b3f549440e972p-951,
     0x1.31738e29200e8p-866, 0x1.d1594653759f7p-536, 0x1.31e2e67f11361p-73, 0.0, 0.0,
     0x1.38d6ca6e68d27p-813, 0.0, 0x1.cd9f4a1ba823bp-930, 0.0, 0.0,
     0x1.a71632fae4776p-917, 0x1.e4b7ec2f669c9p-945, 0x1.69eeba48392c8p-777, 0.0, 0.0,
     0.0, 0.0, 0x1.d0fbdd34def32p-489, 0.0, 0x1.9462820abf77dp-442,
     0x1.81d169163dabbp-850, 0x1.530da88b145fbp-545, 0x1.e2b7306d03c3cp-612, 0.0,
     0x1.6d648463ae819p-450, 0x1.ac70ad8520ae6p-447, 0x1.93591f80af44dp-573, 0.0,
     0x1.042f915fe53ccp-164, 0x1.dda9a12ea8a66p-944, 0.0, 0x1.2605191adf841p-135, 0.0,
     0.0, 0x1.f64dec2a9ae64p-998, 0x1.623b986f3a067p-461, 0x1.7cc949683a3d1p-660,
     0x1.aa36ce4ac5e9cp-502, 0.0, 0.0, 0x1.00186d6925175p-966, 0.0,
     0x1.0cc25bf771038p-474, 0.0, 0.0, 0x1.8e33ba4848953p-297, 0.0,
     0x1.33cc570392c0fp-954, 0.0, 0x1.8a607fa5ef753p-757, 0.0, 0x1.2d18c2a60f14cp-204,
     0.0, 0x1.29e21b4fc08f4p-30, 0.0, 0.0, 0x1.41f236b2574d2p-804,
     0x1.d9a5b608c8d18p-939, 0.0, 0.0, 0x1.3d839c0d009cap-911, 0.0, 0.0,
     0x1.c79429bcefb0fp-1019, 0x1.bdaf6eabc53ep-333, 0.0, 0.0, 0.0,
     0x1.d32b7856041bp-627, 0.0, 0.0, 0x1.2d00cb026235bp-92, 0x1.646c4a6299e89p-108,
     0.0, 0x1.1bd5a7dad50bp-523, 0.0, 0x1.5f71defa96dd3p-858, 0.0, 0.0, 0.0,
     0x1.963b5f0771c08p-460, 0x1.873730af64332p-342, 0.0, 0x1.5e848cc399c0bp-189,
     0x1.b104bfc9f5cc8p-208, 0x1.da5804ff09246p-349, 0x1.0fc738e7ab814p-990, 0.0,
     0x1.4a2432a55e693p-757, 0x1.6445440938a3ep-296, 0x1.fb79440e7fb4fp-874,
     0x1.03a18e20de767p-310, 0x1.3e0ad9efac61fp-264, 0.0, 0x1.28ffe6ef54aap-884,
     0x1.5d9b98a0636bp-1014, 0x1.867bd7f10e93fp-882, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.961661b57b16ap-358, 0x1.95ad4c72aa723p-602, 0x1.3b0ccdbc03986p-644,
     0x1.735215a8b72aap-53, 0x1.3807c9a349226p-445, 0.0, 0.0, 0.0, 0.0,
     0x1.bf3a76ff35eep-322, 0.0, 0x1.f01700ce9aea8p-813, 0.0, 0x1.120ec4ec0591ap-485,
     0x1.bc84f08ff9ff7p-914, 0.0, 0x1.77c46b68c883fp-333, 0.0, 0x1.c9cff6f29291p-218,
     0.0, 0.0, 0.0, 0x1.5f2674644c24cp-69, 0.0, 0x1.61a370b1fcc9dp-907,
     0x1.55d339edcab5p-930, 0x1.fb3928f6063cap-359, 0.0, 0.0, 0x1.06f00220bd8bcp-245,
     0.0, 0.0, 0.0, 0x1.9a6e3cbf2209ap-821, 0x1.16081aae80747p-215, 0.0,
     0x1.3c5bf93ad4da9p-349, 0.0, 0x1.92a62c4563269p-452, 0.0, 0.0, 0.0,
     0x1.7c4c45fadb31cp-756, 0.0, 0x1.08857fa6a6ee7p-509, 0x1.6b2417eb7d162p-588,
     0x1.fc1c6b55c4065p-966, 0.0, 0.0, 0.0, 0x1.64755904c3195p-699, 0.0,
     0x1.98cc05eb8db88p-769, 0.0, 0x1.7f03b35a4f451p-936, 0.0, 0.0,
     0x1.1e061a75c7261p-367, 0.0, 0.0, 0x1.2cd8f7d210b2bp-334, 0x1.277c922cc7385p-762,
     0.0, 0.0, 0x1.78fd231c7a1f3p-451, 0x1.6e3e8c89612fbp-485, 0x1.0936d184826dep-944,
     0x1.4cc9609eff40bp-290, 0.0, 0x1.e2d0e782b5c3ep-323, 0x1.b6e209359f646p-921, 0.0,
     0.0, 0.0, 0x1.b2fb652dc80a2p-760, 0x1.b63da1451336fp-118, 0x1.cab63add45995p-355,
     0x1.8d6f1f3198cf1p-685, 0x1.677d6dd44c9dap-939, 0x1.96a81b04ae01dp-411, 0.0, 0.0,
     0.0, 0x1.678de1a2d4b53p-686, 0x1.2e28ff453d44ap-882, 0x1.710abe0b8912cp-824, 0.0,
     0x1.1be46bfd7147cp-639, 0x1.e247c9ce5a428p-962, 0.0, 0x1.3910cde04c91ep-974,
     0x1.83529ddc5b8f8p-732, 0x1.3e381364cb1d6p-213, 0.0, 0x1.33211f4d70bafp-42, 0.0,
     0.0, 0x1.2e765ac0ca145p-779, 0x1.9baa675e9c0b6p-902, 0x1.52f2dcf265d7ep-96,
     0x1.643fd1e15e68ap-809, 0x1.046aa615648a3p-526, 0.0, 0x1.d18e5e8102058p-390, 0.0,
     0x1.b746dddaafb94p-1001, 0.0, 0.0, 0x1.38d1eed2dcdd1p-831,
     0x1.810f4dcf9f12fp-1002, 0x1.670d41bfc2212p-428, 0.0, 0x1.bda94a8d58e7fp-211,
     0x1.d8813d0211859p-529, 0.0, 0x1.94352aa8cc061p-694, 0x1.5f3b5f585292ep-449,
     0x1.1fcb90d7507bdp-646, 0.0, 0x1.2be978c7a055ep-416, 0x1.6e41264e6f1aep-529,
     0x1.0e0a556dcd70ep-160, 0.0, 0.0, 0x1.e6b672cb1346bp-679, 0x1.bf58cb5766d36p-436,
     0x1.e4b364f529e98p-421, 0x1.61e069f5af374p-835, 0.0, 0x1.0b616431b0d99p-563,
     0x1.066f7650bdf98p-613, 0x1.b4067aacf526fp-642, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e5a5aa6df2aedp-146, 0.0, 0.0, 0.0, 0x1.999e27d6a8413p-323, 0.0,
     0x1.5d6f154097a5ep-152, 0x1.505d23d49afa3p-482, 0.0, 0.0, 0x1.3d8c94a0b43dp-470,
     0x1.43fff09c1eb43p-950, 0x1.48e88180d6569p-852, 0x1.c1cdf5aa17cebp-255, 0.0, 0.0,
     0.0, 0x1.690fa1a4c7bcdp-563, 0x1.a78a6dadbfe31p-699, 0x1.2e64d516ba63ep-573, 0.0,
     0x1.41f9432d2e9b2p-890, 0.0, 0x1.991a56d400995p-869, 0x1.320adb44e578ep-243, 0.0,
     0x1.f2a600a27582fp-259, 0.0, 0x1.d4aa2e1a17a18p-1015, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a5df22fdb06d3p-873, 0x1.fc47061b562aep-580, 0.0, 0x1.c78b39b8ed2ep-713, 0.0,
     0x1.268436f8fe78ep-79, 0x1.1d32c05b06047p-961, 0x1.21c29f1d701e9p-970, 0.0, 0.0,
     0.0, 0x1.775fefd0b36c7p-398, 0x1.b6662c395f9e4p-614, 0x1.1bf99c1fbbbe8p-616,
     0x1.fef4dbc34aabep-774, 0.0, 0x1.96d29e026e3adp-68, 0x1.35ba1815334acp-723,
     0x1.0c627d681dd31p-544, 0.0, 0x1.522a1f0ac2334p-549, 0.0, 0.0,
     0x1.79aad5c9f026cp-918, 0.0, 0.0, 0.0, 0.0, 0x1.cb27dcd912da7p-104, 0.0, 0.0,
     0.0, 0x1.46a1896fc31acp-505, 0.0, 0x1.a54bbb2539af5p-39, 0.0,
     0x1.213a4cf1fbddp-198, 0.0, 0x1.977571aafe2c5p-630, 0.0, 0.0,
     0x1.93e87275f666fp-103, 0.0, 0.0, 0.0, 0x1.da02857639df2p-634,
     0x1.2d85ed3a99ad5p-148, 0.0, 0.0, 0.0, 0.0, 0x1.32c648ec81b3fp-152,
     0x1.5992e1f96f7c4p-314, 0.0, 0x1.9aa0a8ae0d873p-6, 0x1.f6e417a10d177p-102, 0.0,
     0x1.a46cc821b1164p-912, 0x1.b6bbdadd3ac5ep-959, 0x1.554a0292b876cp-310, 0.0, 0.0,
     0.0, 0x1.4ad0cff04c09ap-495, 0x1.ab0822a28f8abp-378, 0x1.a4e5a4e6c055cp-584, 0.0,
     0.0, 0x1.c051fa3ecff3fp-782, 0.0, 0x1.f5d44bce49cbdp-123, 0.0,
     0x1.94a224dda7c28p-158, 0x1.48894ff94e8fp-865, 0x1.0d8909baa1407p-377, 0.0,
     0x1.1dfba5af034e7p-193, 0x1.3f864c8b0e226p-421, 0.0, 0.0, 0.0,
     0x1.4b1d1ce8309e7p-736, 0x1.8229eb3f7e472p-284, 0x1.d54cafb5c5c6fp-153, 0.0, 0.0,
     0x1.3c6554bec7e89p-503, 0x1.f29ead48d5924p-938, 0x1.d8ae1a931f059p-916, 0.0, 0.0,
     0x1.7aeb1a62a9b2dp-430, 0x1.6bcbc3950ce6p-78, 0x1.a1eae9b681063p-326, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e1ea4daac56aap-562, 0.0, 0x1.82be9c5b0530fp-828,
     0x1.e4eb5dea33423p-338, 0x1.3fdcf68013d68p-921, 0.0, 0.0, 0.0,
     0x1.db3f3848d8566p-705, 0x1.6afb93f41b138p-6, 0.0, 0.0, 0.0, 0.0,
     0x1.3a690b6880932p-272, 0.0, 0x1.467840c6e01afp-280, 0.0, 0.0, 0.0,
     0x1.839cd13f14a51p-911, 0.0, 0x1.34dba8f3da69p-78, 0.0, 0x1.a176b6aec29e7p-116,
     0x1.828fcbfdd735cp-195, 0x1.d81c996410ba6p-720, 0.0, 0x1.3bb7dab0c55afp-424,
     0x1.e0d64c06e154fp-960, 0x1.90cfee8f2b2d4p-591, 0x1.59c75f35b92cp-35,
     0x1.facd43ed479b1p-782, 0.0, 0x1.c8298e4c6a1e3p-529, 0x1.aa7c2eb46f045p-528, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8230b2e286d4bp-680, 0x1.0078c20d12e1cp-101,
     0x1.15147cd46184dp-46, 0.0, 0.0, 0x1.1e68378e17acdp-869, 0x1.4096b03b1b6d3p-1007,
     0.0, 0x1.4ca1a0a020092p-429, 0.0, 0x1.6b9cf0cc33fbep-286, 0x1.2f53e6ef4e42fp-224,
     0.0, 0x1.a68b13929cefbp-523, 0x1.24f15d8fcfd4p-246, 0.0, 0.0, 0.0, 0.0,
     0x1.de90da1bf7c64p-392, 0.0, 0x1.685cc4f77cf92p-598, 0.0, 0x1.d6c11fdedc5a1p-396,
     0x1.f38c58b4efa13p-147, 0.0, 0x1.19fb85d1328b6p-697, 0x1.4658aac003d1fp-521,
     0x1.883ce3bfec136p-183, 0.0, 0x1.ecb4d34208ea9p-802, 0.0, 0x1.9bd27fd5b5cb5p-680,
     0.0, 0.0, 0.0, 0x1.840ed6f68e7b4p-450, 0.0, 0.0, 0x1.59b93aab75764p-39, 0.0,
     0x1.ac0cf7c8c109bp-747, 0x1.cd8feaaa63ddap-331, 0.0, 0.0, 0x1.4e93d1ffaf33p-804,
     0x1.3aa6e7f119302p-29, 0x1.656c23d26ab2ep-327, 0x1.772bf6de7c0f4p-73, 0.0,
     0x1.97071b5249016p-87, 0x1.c4bdd172129cp-472, 0.0, 0x1.5549400f2a8e2p-171,
     0x1.6947e24eb5094p-737, 0x1.3e34608f9ee0bp-785, 0.0, 0.0, 0x1.4b416d525f666p-659,
     0.0, 0.0, 0x1.79ce8918d045cp-564, 0.0, 0x1.7dd6a56daf643p-676,
     0x1.5c97e94d5518fp-140, 0.0, 0x1.3c2034cf1221bp-701, 0x1.a89a736803ce1p-418,
     0x1.66b675abc042cp-339, 0.0, 0x1.5758ef23fa33bp-247, 0x1.ac88dfbe500b3p-296, 0.0,
     0x1.45532d7644ddap-1001, 0.0, 0x1.51e0a523e1b9p-81, 0.0, 0.0,
     0x1.60bef273b419p-456, 0.0, 0.0, 0x1.690f69c0c58edp-194, 0x1.607bfd262f9adp-1014,
     0.0, 0.0, 0.0, 0x1.49a1654bd92c8p-523, 0.0, 0x1.3c0ec534682ep-604,
     0x1.7c0b532c75896p-995, 0x1.4f4a8e55d7c3dp-514, 0x1.5e145bc6d4d89p-427, 0.0,
     0x1.6ee75f3dade79p-584, 0x1.5eb6198ef4897p-492, 0.0, 0x1.ed66dca65a8b1p-829, 0.0,
     0x1.1d42600b355b8p-869, 0x1.84e6471a57cbdp-800, 0x1.c619c7ced0a01p-815,
     0x1.7cdc857320107p-71, 0x1.d3338732578f5p-88, 0x1.444c46b30df1fp-875, 0.0, 0.0,
     0x1.0b7585474ff85p-225, 0.0, 0.0, 0.0, 0x1.a0b81e9e2cac8p-181,
     0x1.ab76c41480ed6p-259, 0.0, 0.0, 0.0, 0x1.4b8b3250355f7p-904,
     0x1.433ed7e39ce2cp-22, 0.0, 0x1.a63d4c67740a3p-611, 0x1.d363c0b23e32ep-28,
     0x1.9b9017cc0cd0cp-724, 0.0, 0.0, 0x1.43a7c8123bfbap-703, 0.0,
     0x1.a0b6e4e23ef6ep-685, 0.0, 0.0, 0x1.632f9109852e2p-692, 0x1.a79def8c9fb81p-266,
     0.0, 0.0, 0.0, 0x1.e5a4c57da589bp-884, 0.0, 0x1.2f7b8931513b9p-856, 0.0, 0.0,
     0x1.c6de723ad8a15p-77, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.41cc8ecb83a77p-820, 0.0, 0.0,
     0x1.004bab518f9a7p-396, 0x1.5c5c70fc27332p-922, 0x1.4eee80c4b3d75p-566, 0.0,
     0x1.d788e41f816e4p-579, 0x1.5a56224be5049p-35, 0.0, 0.0, 0x1.ab4feab6d3f6p-700,
     0.0, 0x1.445317abd4ca2p-354, 0x1.c020db8d4c1e7p-143, 0.0, 0.0, 0.0,
     0x1.deecc8dbe4154p-124, 0x1.afb16b5ee4a2bp-512, 0.0, 0x1.f17b704895a81p-523, 0.0,
     0.0, 0x1.97888e3b892eap-537, 0.0, 0x1.694e546dd16a7p-654, 0.0,
     0x1.bceb71dfb4493p-104, 0x1.0e1d1bb99a634p-210, 0x1.c08f94aad7b5bp-152, 0.0, 0.0,
     0.0, 0x1.c41de724989d9p-559, 0x1.89a7649e169a3p-347, 0x1.20b93c9238a91p-641, 0.0,
     0.0, 0x1.abd903916b4dap-977, 0.0, 0.0, 0.0, 0x1.54fc23cf1eeccp-672,
     0x1.9abc1471e7148p-1019, 0x1.bb1243c3d5e3ep-652, 0.0, 0x1.6c6c3ce503e2cp-963,
     0.0, 0x1.5e64e71f1e51dp-725, 0x1.9d548ae5bef0dp-92, 0.0, 0x1.ea1389974ee7ap-466,
     0.0, 0x1.904364054a82fp-786, 0.0, 0.0, 0x1.40c4c284e5e7p-682, 0.0, 0.0, 0.0,
     0x1.d9f3265d7b73ap-294, 0.0, 0x1.b998e4e84fdcfp-630, 0.0, 0.0,
     0x1.40143270988f4p-689, 0.0, 0x1.791ed31b06dc8p-2, 0.0, 0x1.11ad0843e5384p-248,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.281a9312b717ep-342,
     0x1.b2acd2e613d59p-238, 0.0, 0x1.3339439643b93p-593, 0.0, 0.0,
     0x1.2c573b8abb879p-716, 0x1.e5144f275767dp-710, 0x1.38d21c469abeep-82, 0.0, 0.0,
     0x1.b91b7f463d833p-917, 0.0, 0x1.f704b083e0cb6p-218, 0.0, 0x1.52b81eeb8c40bp-760,
     0x1.f538fe71b9dbbp-389, 0.0, 0x1.e55a40aa47196p-809, 0.0, 0x1.c84d7bc3eacfdp-93,
     0.0, 0.0, 0.0, 0x1.12ed418a6cd24p-663, 0.0, 0.0, 0.0, 0.0,
     0x1.b1fd4114852b5p-128, 0x1.54b4f8af1ee26p-132, 0.0, 0x1.2cdf0c2970ef1p-288, 0.0,
     0x1.e2337a4dd265bp-324, 0x1.c9407aff5f4bcp-736, 0x1.4f196723a87f6p-518,
     0x1.379f796b1cf6fp-421, 0x1.3774306509254p-639, 0.0, 0.0, 0x1.17f6f7501163ap-235,
     0x1.bd78c1cb191c1p-874, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a6b3e9328072ep-952, 0.0,
     0.0, 0x1.9bccd50edf348p-162, 0x1.c0347dff60c61p-230, 0x1.105fab2369cefp-179, 0.0,
     0x1.4c19cd7f59e8dp-703, 0x1.e4e7355e6ec7ep-65, 0.0, 0x1.88d065ca3902p-614,
     0x1.de0d677c45759p-588, 0.0, 0.0, 0x1.24cd4a2efc64p-106, 0x1.6822e728a7666p-780,
     0x1.59500970cf337p-455, 0.0, 0x1.550912b685a0fp-138, 0x1.a0394923ec4abp-732, 0.0,
     0.0, 0x1.2fddfa34f950ap-851, 0.0, 0x1.c176a8b84f7b2p-318, 0.0, 0.0, 0.0, 0.0,
     0x1.dbed0ae24af2bp-50, 0.0, 0x1.cb65cb59b912cp-574, 0x1.5803eb9bc7bbfp-671, 0.0,
     0x1.4e597f7890d75p-766, 0.0, 0.0, 0.0, 0x1.231c032f031ccp-970, 0.0, 0.0, 0.0,
     0x1.d3bcfbb12ca0bp-349, 0x1.9e2c31e7d2a18p-850
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
            tmp1 = erfc(tmp0);
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
    printf("erfc %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("erfc bench acc %la\n", global_bench_acc);
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
