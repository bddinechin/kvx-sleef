/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd2_u10avx2128.c --function \
 *     Sleef_finz_tanhd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.86df3477c3ca4p-694, 0.0, 0.0, 0.0, 0x1.83160ce448afcp-984, 0.0,
     0x1.3e760f8ed5aep-882, 0.0, 0x1.9ae083c3199ffp-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5a2fb37767a41p-405, 0x1.5b7450732a23cp-982,
     0x1.2afc1da540a67p-266, 0.0, 0x1.cf8a9b34392eep-984, 0x1.6aa11b2f09556p-373, 0.0,
     0.0, 0x1.5e3c7c2d4bc4fp-772, 0.0, 0x1.67226282a0fdp-120, 0x1.46262ce5b2217p-324,
     0x1.9c14c0679559ap-843, 0x1.3b6c06ca48cbcp-960, 0.0, 0x1.f9c5feacfcc8bp-163,
     0x1.4780eb0e33bedp-808, 0x1.063b60087911p-240, 0.0, 0.0, 0x1.9818340bc2624p-443,
     0x1.8a7fdd373bfebp-864, 0.0, 0.0, 0x1.a8324cbaf9e48p-675, 0.0, 0.0, 0.0,
     0x1.eef3490c925ebp-120, 0x1.706fab1f5158ep-97, 0.0, 0x1.dd1d8c2aef4d5p-384, 0.0,
     0x1.0752f120b8f39p-771, 0x1.913d3a1dc51c6p-740, 0x1.c960b26bda7fp-310, 0.0,
     0x1.0c64efbba8ff4p-854, 0.0, 0.0, 0.0, 0x1.d934607cd484ap-982,
     0x1.024b9c3d47e19p-1006, 0x1.c9691039790f6p-901, 0.0, 0x1.8d9461886d0fdp-406,
     0.0, 0.0, 0x1.da8c58a87016fp-172, 0x1.192f473612e99p-465, 0.0,
     0x1.b97cc07c7e894p-515, 0x1.0a80fac828a95p-842, 0.0, 0x1.fadb610f1138dp-733, 0.0,
     0x1.e84380423e413p-902, 0.0, 0.0, 0x1.1af16c2073d5fp-213, 0x1.9ad6cc2a3f778p-756,
     0.0, 0x1.e6f0a99cb3924p-753, 0x1.a05e53c47e4bbp-405, 0.0, 0x1.9534fdec72ff8p-641,
     0.0, 0x1.3e1c3a52e90a2p-871, 0.0, 0.0, 0x1.76f5d6a7e461dp-963, 0.0,
     0x1.7deadfd64c85p-736, 0.0, 0.0, 0x1.fac42203bfcc4p-847, 0x1.08d7f7fc79e13p-655,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11e998a272f87p-815, 0.0,
     0x1.4d567064079a5p-505, 0.0, 0x1.36936c25008d7p-45, 0.0, 0x1.53e6260b1040bp-195,
     0x1.476a1c0ce7656p-846, 0x1.fc1ceed160353p-620, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bbf37348d8d6p-664, 0x1.d69e7ee3ec90fp-93, 0x1.3608447a4db08p-672,
     0x1.e5d88e5ddfa22p-476, 0.0, 0.0, 0.0, 0.0, 0x1.bc84efd133585p-774, 0.0,
     0x1.1dbdfc6dfa971p-606, 0x1.c38b10d4e14ebp-865, 0.0, 0x1.27a51c6fc07cap-848,
     0x1.dc5117233b005p-521, 0x1.b6388960e031cp-799, 0x1.b13e6d99c7e73p-253, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6441015ef6a1p-842, 0.0,
     0x1.387b5a9f71f66p-634, 0x1.8c6009c04982fp-846, 0.0, 0.0, 0x1.607c7b38fa14bp-349,
     0x1.c5424663b5b3ap-222, 0.0, 0x1.4ccd83a80d72bp-282, 0.0, 0x1.59ff4d9525a0fp-756,
     0x1.18a6aff1b7abep-117, 0x1.6b400b49987dap-1021, 0x1.825d90db5dbeep-299, 0.0,
     0x1.bcf33094db946p-823, 0x1.6e22ac464eb5dp-825, 0.0, 0x1.2ceefd51aaf9p-958, 0.0,
     0.0, 0.0, 0x1.76aa69e254ce2p-366, 0.0, 0.0, 0x1.0e4b4182d1699p-766, 0.0, 0.0,
     0x1.c10ad6c6ab862p-707, 0.0, 0x1.aee39d6deff13p-633, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8d4a39262b47dp-543, 0x1.f8ea81e11e47p-858, 0.0,
     0x1.86c6daeef239dp-536, 0.0, 0.0, 0x1.0d33316f81702p-637, 0.0,
     0x1.a9b6ae685f5edp-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f807dd422bc6p-1011, 0x1.26a04ca0b6315p-664, 0x1.ba1944fc7c6bdp-12, 0.0,
     0x1.38b08b7b23342p-532, 0x1.2a3e593ea4b2fp-737, 0x1.530dcac990fb8p-950, 0.0,
     0x1.cd72b226b1288p-248, 0x1.77ffa8825ap-901, 0.0, 0x1.c9a38492e44fbp-195,
     0x1.ad70fa2a64f4ep-88, 0.0, 0x1.4913548816d79p-702, 0x1.52cad692dbedep-58,
     0x1.a7938e517df2dp-112, 0.0, 0.0, 0.0, 0x1.ffabc818f00c5p-162, 0.0, 0.0, 0.0,
     0x1.d626d56c660a2p-263, 0.0, 0x1.b4ad9dd49a98dp-157, 0.0, 0x1.a7600fe73077cp-556,
     0.0, 0.0, 0.0, 0x1.e0604bb5e0bf1p-5, 0.0, 0.0, 0.0, 0x1.45872fa7d1db5p-116,
     0x1.38c494fbc5493p-679, 0.0, 0x1.2a7b118f6c4c8p-202, 0.0, 0.0, 0.0, 0.0,
     0x1.5b33fc4ba4273p-740, 0x1.54380cb0c5023p-578, 0x1.b1eb591a2b2d1p-814, 0.0, 0.0,
     0x1.9a8b7d9b14c2p-978, 0.0, 0.0, 0.0, 0.0, 0x1.f3cd1e4461759p-827, 0.0, 0.0,
     0x1.c2ff6f8f955dcp-151, 0.0, 0.0, 0x1.884b29b382894p-618, 0x1.6d5447e460e2ap-636,
     0x1.1a2333fdba15p-794, 0.0, 0x1.0bcef04819842p-995, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.948c4f3719c68p-941, 0x1.578506729891fp-987, 0.0, 0x1.0dbc8e15a33a9p-572, 0.0,
     0.0, 0x1.fd585ac0dada6p-198, 0.0, 0.0, 0x1.e3026a41c0b71p-692,
     0x1.51a719fbcaf04p-930, 0.0, 0x1.4c9cfb8c89937p-4, 0x1.7e8553eb144aap-467, 0.0,
     0.0, 0x1.50b3eaf051f45p-571, 0.0, 0x1.e7434bd18639ap-328, 0.0, 0.0,
     0x1.798ac15b57d1dp-141, 0x1.6e50fa5a713fcp-740, 0.0, 0x1.04482d9a1ca34p-153,
     0x1.a3f60019f492ep-220, 0x1.86030496dbab3p-839, 0x1.536aa1a64441bp-431,
     0x1.612a5bc0e3476p-646, 0x1.c5e53c833d217p-575, 0.0, 0x1.ed4dee244ca9cp-69,
     0x1.fd4adc9d50a16p-29, 0x1.3ae073d179842p-624, 0.0, 0x1.0c9e588cdc747p-815,
     0x1.dd04d98506a5dp-136, 0x1.614880762729ep-17, 0x1.6c45dac68efcdp-545, 0.0, 0.0,
     0x1.51dc5507b0c88p-942, 0x1.5a22500d5a0d1p-31, 0.0, 0.0, 0x1.ce53ee040c429p-678,
     0x1.c6deef08892ecp-325, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52b9b5a302d61p-100,
     0x1.163360d9064e3p-88, 0.0, 0.0, 0.0, 0x1.bbed48876bf7p-521, 0.0, 0.0,
     0x1.e5f1cf49aff76p-422, 0.0, 0.0, 0x1.ecd8b10314772p-164, 0x1.fa86ee43adb1cp-982,
     0x1.5b1e1783badf1p-36, 0.0, 0.0, 0x1.410ced2cc1cddp-290, 0x1.2586852ce1b45p-302,
     0.0, 0.0, 0x1.7738905313facp-296, 0x1.0bde090c2f1a9p-148, 0.0, 0.0, 0.0,
     0x1.a3b21cd986fafp-1007, 0x1.a3e169bb98576p-733, 0x1.be022555b8a5ep-214,
     0x1.71d3a2d074e8bp-120, 0x1.7ed89dcab48a9p-448, 0.0, 0.0, 0.0,
     0x1.f6746b043783bp-208, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bfdc21e12acap-150,
     0x1.2855de5769adcp-694, 0x1.b13d92dedb90ap-20, 0.0, 0.0, 0.0, 0.0,
     0x1.157c6564cb7a2p-926, 0x1.c4adfc3beab99p-94, 0.0, 0x1.945a8c01edf63p-469,
     0x1.c9bf34bf1353cp-102, 0x1.5bcfd43abf77ep-480, 0x1.dc65d82466cdep-137, 0.0, 0.0,
     0.0, 0.0, 0x1.592824eb49e89p-90, 0x1.ae773aa5c8ddap-18, 0.0, 0.0,
     0x1.14ac6e9875271p-198, 0x1.784ebbf4ea54bp-671, 0x1.dab5bd69376f7p-54,
     0x1.76caf6c30c29ap-294, 0.0, 0x1.540cbb2ea42d9p-527, 0.0, 0.0,
     0x1.cb24c43212532p-41, 0x1.1ae39e6be5d34p-622, 0.0, 0.0, 0x1.7d6e78e5f159cp-984,
     0x1.fb98bd24b5f1bp-310, 0x1.15619d8e8c0f7p-225, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac3e2ded27fe9p-503, 0x1.a15a5420a77dfp-403, 0.0, 0x1.e32324f88a7edp-731, 0.0,
     0.0, 0x1.88919cae5abccp-80, 0.0, 0x1.df24b415f2c02p-449, 0x1.046ccf7b7359fp-285,
     0.0, 0x1.6176c46d0377fp-110, 0.0, 0x1.0542ac034c2b7p-601, 0x1.7a1ff51e0b02cp-359,
     0.0, 0x1.39d95647a8d11p-106, 0.0, 0x1.71543f8851b78p-363, 0.0, 0.0,
     0x1.7a9e4bb1394a8p-95, 0x1.ca90a220b5765p-615, 0.0, 0x1.08aa415dcae19p-477,
     0x1.f9a859e30a4efp-764, 0.0, 0.0, 0.0, 0x1.8afbdf362d1ffp-354, 0.0, 0.0,
     0x1.fdb5ba8baa74p-120, 0x1.2cc432ee67992p-208, 0x1.52a2a303680d2p-269, 0.0,
     0x1.d1c189821df48p-366, 0.0, 0x1.1d2023308ce45p-601, 0x1.73be84f331183p-965, 0.0,
     0x1.8a57fbafda308p-511, 0x1.b90a7c9ffdf76p-405, 0.0, 0.0, 0x1.401ba7b34f052p-11,
     0.0, 0.0, 0x1.dee8c9395c737p-903, 0x1.03ad2f5c174ddp-826, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.34d724477e832p-987, 0.0, 0x1.aa219e7b8471bp-50,
     0x1.b92e85f290323p-654, 0.0, 0.0, 0x1.37ea68a055cffp-370, 0.0,
     0x1.4169985ef2a8ap-255, 0.0, 0.0, 0.0, 0x1.4374b3c9f2338p-288, 0.0, 0.0,
     0x1.6596f1ab82d7fp-886, 0.0, 0x1.84ef35df6223fp-338, 0.0, 0x1.a94b5ee88138bp-494,
     0x1.0f866ecbe93a5p-359, 0.0, 0.0, 0.0, 0x1.a7f364dd43463p-589,
     0x1.9600ecc8891d3p-660, 0.0, 0x1.a2c745a236678p-500, 0x1.93e86e8309689p-574,
     0x1.0e99c311d1b67p-584, 0x1.c3f4c3f9211cap-635, 0x1.240f00797af28p-200,
     0x1.d91b9d003688dp-712, 0x1.278aa6e246e35p-1015, 0x1.f1e6b5652500bp-810, 0.0,
     0x1.3ad58366c6e01p-781, 0.0, 0.0, 0.0, 0x1.e4cf02072556p-975, 0.0,
     0x1.4031bf6fad538p-316, 0x1.e9fda736bf061p-707, 0x1.37b6e04e14c21p-253,
     0x1.46322ee7603bp-941, 0.0, 0x1.afb11a414f5edp-79, 0x1.a7c8f62cd5b66p-435,
     0x1.ed88f048acce7p-133, 0.0, 0x1.850d4518bba92p-372, 0x1.03ec274fd861fp-459,
     0x1.847bede3513ecp-747, 0.0, 0x1.c0292fa44c629p-1017, 0x1.3a1f19640fa05p-530,
     0.0, 0.0, 0x1.d09770b43a7b7p-817, 0.0, 0.0, 0x1.cf2e01ae36384p-224,
     0x1.9dda3847e3a98p-367, 0x1.1e54f89866b1ap-437, 0.0, 0x1.f4afbb6c5df1fp-714,
     0x1.2e53d284a5c42p-906, 0.0, 0x1.b2a608cad0934p-359, 0.0, 0.0,
     0x1.a76f3c9b71d91p-475, 0.0, 0.0, 0x1.7d2eb9da61845p-838, 0x1.47fa5a723ca65p-95,
     0x1.04dc0681da4dfp-598, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e49260a067703p-345, 0.0,
     0x1.e4318f3afbb2bp-755, 0x1.2e413ce613a4cp-402, 0x1.7a3ff029848f5p-779, 0.0,
     0x1.2a2555a4a2105p-712, 0x1.a2737b202bfb8p-422, 0x1.06c79186a0c86p-86,
     0x1.1e966e94b9e26p-824, 0.0, 0x1.53d4a6e7b5a7dp-24, 0x1.796345c6d6b4bp-621,
     0x1.93656658ff92fp-215, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbcd9bcb3686bp-719, 0.0,
     0.0, 0.0, 0.0, 0x1.4fad19b550b34p-171, 0.0, 0x1.545baad51b1cap-465, 0.0, 0.0,
     0.0, 0.0, 0x1.f90fdc70feed4p-22, 0.0, 0x1.e985f6a5fa00bp-289,
     0x1.ad2845b2fd9dbp-784, 0x1.186d658d06c5ap-419, 0.0, 0x1.6dd285568ec47p-98,
     0x1.93a7eea6ae18p-259, 0.0, 0x1.e5f4d4a3d3385p-974, 0.0, 0x1.06c6776976c8bp-64,
     0x1.842512199e17p-74, 0.0, 0x1.fa512c0eaf0c1p-360, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2405029c59005p-465, 0.0, 0x1.52c5ef7955abbp-376, 0x1.0cf73fe5af05fp-724,
     0x1.7bd68358bae78p-893, 0x1.090e94efcbf83p-759, 0x1.aaf535d6f50dfp-197, 0.0,
     0x1.a097f58998fb4p-769, 0.0, 0.0, 0.0, 0x1.f1451cbf6f87dp-466,
     0x1.e6361abf136b4p-118, 0x1.c87ef1e4f82c3p-742, 0x1.5fa94b10c611p-91, 0.0,
     0x1.3523328aed4aap-91, 0x1.9b743b4871ff6p-947, 0.0, 0.0, 0x1.cfb6a98bb3fa4p-153,
     0.0, 0x1.f95e7afd856a2p-244, 0x1.4fa306c1a7b7ep-135, 0x1.c3aece8c34eacp-259,
     0x1.fae74f984f02bp-240, 0.0, 0.0, 0.0, 0.0, 0x1.e413c40298c3dp-256, 0.0, 0.0,
     0.0, 0x1.284d01402b1a7p-51, 0x1.ba5e709c6db9cp-678, 0.0, 0.0, 0.0,
     0x1.db041d4fb4dd2p-189, 0x1.91fd9e9d62638p-14, 0x1.b3355f2a2bb4cp-152, 0.0, 0.0,
     0x1.4bdc4aa03209p-251, 0.0, 0.0, 0x1.6a2c75115fd05p-571, 0.0,
     0x1.ecb3012d0b01bp-398, 0x1.73ecf8444078cp-252, 0.0, 0x1.4f11741486d47p-90,
     0x1.85014cda96297p-84, 0x1.c8450909d0b63p-290, 0x1.f9f48a11a2ed8p-825, 0.0,
     0x1.4b8e8c2550b01p-137, 0x1.5f62b7c30bf7ap-819, 0x1.8803581de3f84p-473, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9fba92eb00facp-706, 0x1.efeed944dbd99p-336, 0.0,
     0x1.7699a38b924cp-866, 0x1.73874cdc634fdp-660, 0.0, 0.0, 0x1.f225f0266c1b4p-204,
     0.0, 0.0, 0.0, 0.0, 0x1.59d6658425d4bp-293, 0.0, 0x1.0c5a512166c2ep-819, 0.0,
     0x1.877fec192ea43p-774, 0x1.550a1993a1558p-865, 0x1.4ff3b56598565p-440, 0.0, 0.0,
     0.0, 0x1.56203cd3aed99p-335, 0.0, 0.0, 0x1.94dd3492725dap-815, 0.0,
     0x1.4be0d41e09e15p-307, 0.0, 0x1.ff181e8b9481ep-325, 0.0, 0x1.b94a793ab7735p-481,
     0.0, 0.0, 0.0, 0x1.17a7c98d68ff7p-250, 0.0, 0x1.82f5346ff1bc3p-59, 0.0, 0.0, 0.0,
     0.0, 0x1.1329d92307c1bp-416, 0x1.bce75ac92c8e1p-267, 0x1.f62c6bf880dd8p-989,
     0x1.70495c130a832p-797, 0.0, 0x1.3add1132c5e14p-538, 0.0, 0.0,
     0x1.382e8c907f33cp-418, 0x1.b86189b546b93p-85, 0x1.49726945a1071p-339, 0.0, 0.0,
     0.0, 0x1.a883fb9c057c8p-366, 0.0, 0x1.90761b8771056p-432, 0x1.5b13df9e14235p-233,
     0.0, 0x1.b2a7fae43fb92p-781, 0x1.a1feee1939588p-841, 0.0, 0.0, 0.0, 0.0,
     0x1.061e3aa2f0f55p-401, 0.0, 0x1.2f09c8e5f09e9p-606, 0.0, 0x1.94b2f213a2739p-897,
     0x1.6734a0297db2fp-120, 0.0, 0.0, 0.0, 0x1.17ef255dd9b74p-717,
     0x1.f98eab236933p-560, 0x1.b4cbfee50973fp-538, 0.0, 0x1.71adadf280bb8p-261, 0.0,
     0x1.a33296f3091cp-215, 0.0, 0x1.676fe9dc94e6bp-498, 0.0, 0x1.1200c64173bfbp-165,
     0x1.b746c24ddcddcp-501, 0x1.13b46655fbdc2p-310, 0.0, 0.0, 0x1.3697f93b7116ep-527,
     0.0, 0.0, 0x1.ba2f6ffce510bp-409, 0x1.35375cb54025ep-1018,
     0x1.cabf426bdef4ep-712, 0.0, 0x1.b60918add034ap-549, 0.0, 0.0,
     0x1.06ef380cb21c1p-966, 0x1.8f8abd4685d81p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.910e078089da9p-908, 0.0, 0.0, 0x1.1d3ab2b951a42p-974, 0.0,
     0x1.53249045eaa97p-304, 0x1.cbce3c44bc549p-960, 0x1.7bddc955b9255p-399, 0.0,
     0x1.60a02d929db56p-1009, 0x1.8b4bfcb4e8d06p-1016, 0.0, 0.0, 0.0,
     0x1.911e498915242p-634, 0x1.aa90001316aa7p-177, 0.0, 0.0, 0x1.3293e127be98ap-289,
     0.0, 0x1.b29c049e8d2c6p-579, 0x1.e58d020c68b55p-57, 0.0, 0.0, 0.0,
     0x1.11838da535389p-728, 0.0, 0.0, 0.0, 0.0, 0x1.b9c2eb39a7cd8p-898,
     0x1.19c3b1b03bb17p-804, 0x1.94b285bd79bd1p-241, 0.0, 0x1.b08bb8e8656f6p-884, 0.0,
     0x1.e5b700f9f2c31p-333, 0.0, 0.0, 0.0, 0.0, 0x1.c72e0b0f94d1cp-610, 0.0,
     0x1.5dbacd0ed562p-723, 0.0, 0.0, 0x1.e365c60e51f04p-793, 0.0,
     0x1.c7c824623958dp-629, 0x1.39f19577ae36cp-24, 0.0, 0x1.a5d1771ee29a6p-642, 0.0,
     0x1.e7e4812519cdcp-690, 0x1.42d74d7b37b1p-220, 0.0, 0x1.937975aa216ccp-920,
     0x1.f27ad1eaf35d3p-777, 0.0, 0x1.23e32cace2b18p-92, 0.0, 0.0, 0.0,
     0x1.33ad4ae251b22p-161, 0x1.355f6fbc797dcp-674, 0x1.35c067b26824ap-811,
     0x1.90f93b6bfcdf2p-380, 0.0, 0.0, 0x1.0e482e8afbe14p-894, 0.0, 0.0, 0.0, 0.0,
     0x1.955746ad6e56ap-866, 0x1.8303173663f24p-665, 0.0, 0x1.411164c326b18p-863, 0.0,
     0.0, 0x1.fd7b1a1ec1ebcp-443, 0.0, 0.0, 0x1.7e1489da54644p-813, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.55b221329774ep-290, 0x1.cc668b58d443fp-703, 0x1.620ad0e347d48p-506,
     0.0, 0.0, 0.0, 0.0, 0x1.9c1f99326227fp-441, 0.0, 0x1.fcffdca2b347bp-496,
     0x1.001b73cb11a0ep-879, 0.0, 0x1.9d7aec3e2d3e8p-436, 0.0, 0x1.e282bc0a5ca18p-255,
     0x1.d44752b293238p-695, 0.0, 0x1.6be4171879669p-557, 0.0, 0x1.3a6de49afd73dp-442,
     0.0, 0x1.ecd8b635c7ad2p-947, 0.0, 0.0, 0x1.41ec11769b656p-264,
     0x1.28fa540ba6c41p-836, 0.0, 0x1.50b6779dcfa6ep-247, 0x1.5e8ebc040bdcap-432, 0.0,
     0x1.05fd7d70ff569p-615, 0x1.cc89d3797724ep-409, 0.0, 0x1.673a4433f0e28p-167,
     0x1.bf1354ace383ep-331, 0.0, 0x1.0be90a39bb688p-309, 0.0, 0x1.6635c046bb9e1p-511,
     0.0, 0x1.c08d8a1590debp-696, 0x1.d3359b4fec418p-107, 0.0, 0x1.df1c3ab2d5e6dp-492,
     0.0, 0.0, 0x1.71c53cb6b48d9p-49, 0x1.c00513a7fba48p-125, 0.0,
     0x1.693f72ffc313p-841, 0x1.8c90935a53118p-249, 0.0, 0x1.6376ec90afd71p-571, 0.0,
     0x1.ecfcf1415a2p-757, 0.0, 0.0, 0x1.66ae58ef707c8p-639, 0x1.c2c7e5af209d6p-142,
     0x1.b651d43feabafp-294, 0x1.2131379a34892p-695, 0.0, 0.0, 0.0, 0.0,
     0x1.36aa63f05ddfdp-818, 0.0, 0x1.9ae49854b29acp-565, 0x1.dfd470ed81285p-485,
     0x1.336c628254ee2p-752, 0x1.be254bf427859p-234, 0x1.08057c2fd9a6ep-985, 0.0, 0.0,
     0x1.ffe6c25570a2ep-868, 0x1.443f9cb26d5ddp-759, 0x1.420a41644e37fp-1009,
     0x1.9fd96d7a3d13cp-883, 0x1.8984367abca5bp-923, 0.0, 0x1.5e5f0f00a1805p-483,
     0x1.478b75d527c71p-1010, 0.0, 0x1.df0ab6de7e03cp-946, 0.0, 0.0, 0.0, 0.0,
     0x1.b091c1111e596p-996, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fbf41eaae5352p-610, 0.0,
     0x1.a796148bfb722p-102, 0.0, 0x1.2089351fe3251p-984, 0x1.e3a07b1168f01p-401,
     0x1.a8444dff2e60dp-29, 0x1.f659713e8d5f4p-49, 0.0, 0x1.c21888c18c6dfp-800,
     0x1.c114194ca60b1p-551, 0.0, 0.0, 0.0, 0.0, 0x1.8e404bb13ae5ap-207,
     0x1.eaf4561dc998cp-210, 0.0, 0x1.2b0f6c08ac867p-861, 0.0, 0.0,
     0x1.6d8af7640b5cbp-651, 0.0, 0x1.e103012b466b8p-54, 0.0, 0x1.74f71fc86bab7p-555,
     0.0, 0x1.bca82713416f4p-128, 0x1.941227a0d205fp-553, 0.0, 0.0, 0.0,
     0x1.27a15a694e9ccp-482, 0.0, 0x1.dc3fd59aa2a36p-23, 0.0, 0.0, 0.0,
     0x1.5648832db30eep-356, 0.0, 0.0, 0.0, 0.0, 0x1.a6146e76f6662p-733, 0.0
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
            tmp1 = Sleef_finz_tanhd2_u10avx2128(tmp0);
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_tanhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tanhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
