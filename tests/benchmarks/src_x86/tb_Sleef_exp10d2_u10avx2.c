/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_exp10d2_u10avx2128.c --function Sleef_exp10d2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.be51fef3bfbecp-492, 0.0, 0.0, 0x1.636b87046c1f7p-528, 0.0, 0.0,
     0x1.9befce98af009p-108, 0x1.3d1498aa5b2bbp-958, 0x1.6bbcea854550fp-548,
     0x1.84d8166ce81a3p-133, 0x1.1501caf74b5c5p-893, 0.0, 0x1.ddd93e6975b5bp-689,
     0x1.e7c2c320c6e69p-570, 0.0, 0x1.925df7d7fc4bep-425, 0.0, 0x1.f78697e9c196fp-815,
     0x1.575de0859250fp-41, 0.0, 0x1.dab36d29f16dfp-133, 0x1.2be45c6e36504p-193, 0.0,
     0.0, 0x1.afc0478baf6dcp-666, 0.0, 0.0, 0.0, 0.0, 0x1.b302ee2c3a673p-120, 0.0,
     0x1.f1c0da63c5acfp-230, 0.0, 0.0, 0.0, 0.0, 0x1.4e9e9662bf52p-921,
     0x1.e8a5ee8646cf7p-640, 0.0, 0.0, 0x1.ffee3aa2ed717p-99, 0.0,
     0x1.803c79a6c6976p-200, 0.0, 0x1.38797f07856a7p-812, 0x1.046418ddf41cap-129,
     0x1.1e4866cb2f237p-776, 0.0, 0x1.eb0f371ac625fp-471, 0x1.b0c5c9bc2f1bcp-930,
     0x1.51126a86c8603p-547, 0x1.cc3b080ff0ce4p-566, 0.0, 0.0, 0x1.ce5d3019b6c1p-797,
     0x1.133d2cfb7514bp-808, 0x1.4b96616aa9cc3p-656, 0.0, 0x1.38783fdd01635p-558, 0.0,
     0x1.56eb73c46f4c5p-424, 0x1.545a3078dfc85p-267, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46235bbcae035p-207, 0x1.077cde2ad1fe5p-877, 0.0, 0.0, 0x1.8856841d2e5e4p-490,
     0x1.5e7e8224ecc2p-774, 0x1.95704f4f25cbep-368, 0x1.2dfe922153fe2p-135, 0.0, 0.0,
     0x1.9024e049239acp-791, 0.0, 0x1.9c720ed4700bbp-595, 0x1.4dd4f769899fcp-414, 0.0,
     0.0, 0x1.e28b585bfb634p-137, 0x1.a8820c460db61p-66, 0x1.c8d19d6c66f7fp-101, 0.0,
     0x1.bee3176b8b6ecp-389, 0x1.96f8e001d2febp-192, 0x1.5e66d232f67afp-795, 0.0,
     0x1.d88d0748b080dp-371, 0x1.9fa2eea8b5de3p-608, 0.0, 0x1.a25e792334594p-571, 0.0,
     0.0, 0.0, 0.0, 0x1.9caa2ac53b953p-146, 0.0, 0.0, 0x1.f1cc6f413d67ap-163,
     0x1.2942ad8304841p-697, 0.0, 0x1.7e8686afff411p-938, 0x1.6e20ee56f9c17p-937, 0.0,
     0.0, 0x1.6c58c22cf5e4cp-222, 0x1.b4af3c024d889p-575, 0x1.97d9c40b0fa2ep-1013,
     0x1.689b22c1c8129p-59, 0.0, 0.0, 0x1.cba65ff34b5a9p-588, 0x1.9d374f8b71993p-189,
     0x1.036a88e5e88cfp-683, 0.0, 0x1.851067adab588p-925, 0x1.c710104d0b9bfp-704,
     0x1.5af3d9e1828ebp-926, 0.0, 0x1.f79b2a23aca8fp-447, 0x1.54949359337bp-617, 0.0,
     0x1.e738074670e2ap-731, 0x1.95dd7d64987dap-29, 0.0, 0x1.e762ef8147c3cp-937,
     0x1.359623b270e19p-349, 0.0, 0x1.714102456dcecp-139, 0x1.1e687706aa743p-491,
     0x1.c29879462cbadp-884, 0x1.3bf547bc6bbedp-1002, 0x1.d5f49412d7ae3p-730,
     0x1.5de1b3a23ce1cp-224, 0x1.7d4394bf45271p-992, 0x1.e14ddf91ddd66p-494, 0.0,
     0x1.462e39347291p-1013, 0x1.d7387b415724ep-918, 0.0, 0x1.c5029f60664cp-123, 0.0,
     0.0, 0.0, 0.0, 0x1.8d904836c07d5p-91, 0.0, 0.0, 0.0, 0x1.2594da1177abp-588,
     0x1.4d5db9288d3e4p-756, 0.0, 0x1.9f64bcd4927d5p-303, 0x1.bc6d52d6e270ep-677, 0.0,
     0x1.9fc2b80f00ccdp-552, 0x1.d979dda7bed47p-919, 0.0, 0x1.ce68b2870622p-741, 0.0,
     0.0, 0x1.717ca5c2735e3p-580, 0x1.03137a394891cp-679, 0.0, 0.0, 0.0, 0.0,
     0x1.e2f69622e36bdp-699, 0x1.2da88af7d3798p-609, 0x1.16bafa9a25059p-768,
     0x1.fb885cb66ddcep-97, 0.0, 0x1.6f4aef5a5ad1ap-183, 0x1.5bcb24bb8b308p-850, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5b8cb2d5fadabp-206, 0x1.f92b19da81d09p-885, 0.0, 0.0,
     0x1.afb9e352c05a4p-226, 0x1.327a0f7d6f9f4p-570, 0.0, 0x1.6226a96b21939p-101, 0.0,
     0.0, 0x1.d0ea60d738cfep-445, 0.0, 0.0, 0x1.3085e8b676b2bp-153, 0.0,
     0x1.ad6896120ca26p-263, 0.0, 0.0, 0.0, 0.0, 0x1.77110dc3880ccp-883, 0.0,
     0x1.296f390a053f7p-995, 0.0, 0x1.3e57e29a9a9f6p-292, 0.0, 0.0,
     0x1.81fa3e86bdd84p-127, 0.0, 0.0, 0x1.ad3c15209eecbp-381, 0.0,
     0x1.b6ea074c1ea34p-1017, 0x1.3325e348d67bdp-141, 0.0, 0x1.9e676474db29bp-639,
     0x1.433d777081b76p-282, 0.0, 0.0, 0.0, 0.0, 0x1.ec2ef3f60ca1bp-305,
     0x1.91301b69c9bd5p-861, 0x1.e8e7bb3e31822p-449, 0.0, 0.0, 0.0,
     0x1.c0dc55a83f56ep-131, 0x1.48404b2c18a93p-382, 0.0, 0x1.ab24525760f03p-319,
     0x1.c3500a0b15913p-1005, 0.0, 0x1.81ca920c92756p-392, 0.0, 0.0, 0.0,
     0x1.b85960a809a44p-945, 0x1.da2a6711b289cp-52, 0.0, 0.0, 0x1.cd993fb449dafp-125,
     0x1.53919bddd16e6p-452, 0.0, 0x1.0394f1b956842p-144, 0x1.7f10c91b518d2p-847,
     0x1.4e0f377b393f4p-604, 0x1.3ce08d93145b4p-862, 0x1.ea1e1f7dbb271p-998, 0.0, 0.0,
     0x1.c25da9162002bp-355, 0x1.d4641dd0ed8a4p-490, 0.0, 0x1.3906cd2dffe43p-470, 0.0,
     0x1.78e5632b2fecdp-367, 0.0, 0.0, 0x1.126c1dd7badefp-234, 0.0, 0.0, 0.0, 0.0,
     0x1.51ca65b534564p-770, 0x1.839c20512254dp-781, 0.0, 0.0, 0x1.a01e76490b2p-977,
     0.0, 0x1.9a78e37367a17p-995, 0x1.33a098a690a2dp-670, 0.0, 0x1.fd0c7afc53ac1p-486,
     0.0, 0.0, 0x1.0a8904fb3f4a4p-166, 0.0, 0.0, 0x1.633dde24e2a8p-73, 0.0,
     0x1.0c842402b1d0bp-686, 0x1.d1b62c010cd33p-1010, 0.0, 0x1.99ce8f8e83fdep-801,
     0x1.026e950406facp-222, 0.0, 0x1.3de47ecd019ebp-430, 0x1.f59ec6d504ca8p-886, 0.0,
     0x1.33ba1a0c92259p-469, 0.0, 0.0, 0x1.1e511555a406p-279, 0x1.001e99c8e3246p-69,
     0.0, 0x1.adaa5f2954905p-466, 0.0, 0.0, 0.0, 0x1.0def49b620817p-1015,
     0x1.837c75aa2818p-828, 0.0, 0.0, 0.0, 0.0, 0x1.f063afbec9d1bp-974,
     0x1.cc343d00d54e3p-517, 0x1.da292a6eca086p-743, 0x1.680a21383e03cp-649, 0.0,
     0x1.74efcecd5b93p-563, 0.0, 0x1.3293f3d98449ap-451, 0.0, 0.0, 0.0, 0.0,
     0x1.062caa77a140cp-814, 0x1.f441bf70b1878p-111, 0.0, 0x1.da716d3d53a0ap-415, 0.0,
     0x1.a2e4814824535p-658, 0.0, 0.0, 0.0, 0x1.cd8dd1ab0b2aep-46,
     0x1.d4c58357349eap-679, 0x1.269d5702be4f9p-269, 0x1.2f0f9951ca897p-506,
     0x1.2dbcc664a99f3p-899, 0x1.a6e9c77e916ddp-315, 0x1.ea863675bfb61p-974,
     0x1.af7b52a66dcp-365, 0x1.82e0356741428p-43, 0x1.c7c6d42ea235dp-191, 0.0,
     0x1.0c97dc9698d24p-319, 0.0, 0.0, 0.0, 0x1.4d3337626b1b4p-958, 0.0,
     0x1.e620842d017c8p-134, 0.0, 0x1.6340557674e5ap-626, 0x1.b95b87821b684p-764, 0.0,
     0x1.6f74829e1c6ccp-597, 0x1.34bdeda09f751p-273, 0.0, 0.0, 0x1.d4d30c299eda3p-899,
     0x1.23531b0f5a371p-486, 0x1.0bb047c24e15p-480, 0x1.a9ec8a12a28afp-667, 0.0, 0.0,
     0.0, 0.0, 0x1.e41bf4240776bp-73, 0x1.8dc216c617e4ap-267, 0x1.427187dfdf364p-915,
     0x1.b7ad06805fb84p-703, 0.0, 0x1.8222200da72bdp-371, 0.0, 0.0,
     0x1.067b45329194ep-202, 0x1.4d8ba64160c0bp-763, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.71abef39ca486p-212, 0x1.bea1ffeaf3fa6p-58, 0.0, 0x1.0efbb46dbd043p-699,
     0x1.79b3bbb73c5b9p-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cfc3a641a73dfp-599, 0.0,
     0x1.effe1fe990282p-6, 0.0, 0.0, 0.0, 0.0, 0x1.ef1cc054b9194p-373,
     0x1.81bdd4e70f459p-273, 0x1.64aad88033fe8p-568, 0.0, 0x1.35892dfb757c5p-304, 0.0,
     0x1.f2c1e448a7ba5p-287, 0x1.9c78241411297p-342, 0x1.69b8ad9a1572ap-601, 0.0, 0.0,
     0x1.a9241fc9dfab5p-841, 0.0, 0x1.c799420b11fap-463, 0.0, 0x1.62b79b80c2e56p-637,
     0.0, 0.0, 0.0, 0x1.1fcb96921dd0fp-681, 0x1.d59312c40f673p-745,
     0x1.5d4a6f7910745p-296, 0x1.197ade715c381p-74, 0x1.219cc2c7b5022p-132, 0.0,
     0x1.2158cb2663d73p-166, 0.0, 0x1.21225c1ee95a8p-1018, 0.0, 0.0, 0.0, 0.0,
     0x1.ef99e42d169a1p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02d0763cc169fp-41, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c762fd19343fap-824, 0x1.582f0dd346e85p-261, 0.0,
     0x1.53ed4782dce62p-128, 0x1.77172c6b98d4bp-891, 0.0, 0x1.c5cf442df9737p-679, 0.0,
     0.0, 0x1.4c6413c5b53f3p-568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e65ad2078269bp-476, 0.0, 0x1.fdbe9623ad5f3p-691, 0.0, 0x1.9be498247a24p-399,
     0x1.9e0d797a7799cp-451, 0.0, 0x1.3b02bbc331194p-669, 0x1.9d92d300530c7p-248, 0.0,
     0.0, 0.0, 0x1.afe01f476bed2p-889, 0.0, 0.0, 0x1.be5b5ddec60bcp-666,
     0x1.665e294d432cep-336, 0.0, 0.0, 0.0, 0x1.8f1d951c81211p-539,
     0x1.6cfd23def7538p-1009, 0x1.21b5c1c0a1bdep-277, 0.0, 0x1.3c6430010b9bep-290,
     0x1.5d32dadfce82ep-631, 0x1.c2106ea4d9534p-506, 0x1.6f67756174a99p-366, 0.0, 0.0,
     0x1.702622efb41bbp-833, 0x1.7c5848df2afdfp-676, 0.0, 0.0, 0.0,
     0x1.ce895fa6ba741p-863, 0x1.6ac7ebfcb8e29p-950, 0x1.1d39d1027ec9dp-465, 0.0, 0.0,
     0x1.b0b64d6e582cp-324, 0.0, 0x1.c5864d19f99f8p-472, 0.0, 0x1.afd4705c6fa96p-887,
     0.0, 0x1.9eeeab7ab7ca4p-575, 0x1.457cf81e96829p-266, 0.0, 0x1.c0a9fb49efd62p-672,
     0.0, 0x1.d57b45195c3f6p-729, 0.0, 0.0, 0x1.9ec0b328a7d86p-317,
     0x1.ed4116e957acep-273, 0x1.9f3deaba12f34p-65, 0x1.47bd05be2945ap-730, 0.0, 0.0,
     0.0, 0x1.9ef4eed8f797p-694, 0x1.30bce3f1ac604p-833, 0x1.f79d64a8cbd95p-292, 0.0,
     0.0, 0.0, 0x1.4bb6ba1451c89p-41, 0x1.32af211d331ccp-404, 0x1.097b92c33e75cp-844,
     0x1.3a315145007ecp-450, 0x1.fc4d9e209e466p-504, 0.0, 0x1.eda49ee057128p-936, 0.0,
     0x1.34ccff3ad1bcbp-905, 0.0, 0.0, 0x1.16a7ab3f0eefp-423, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6f3247afdcd86p-393, 0x1.d8ae80b32ff16p-913, 0.0, 0x1.a93d73fe773b6p-215, 0.0,
     0.0, 0.0, 0.0, 0x1.f31f846a4fe1dp-392, 0x1.46715f6cfcf79p-505,
     0x1.65110faf280f8p-454, 0x1.e0136ddd62993p-734, 0x1.815d854c76b06p-349,
     0x1.e44e3ff473b78p-473, 0.0, 0x1.44cd7c7d9358fp-267, 0.0, 0x1.1a324b2475c01p-834,
     0.0, 0x1.f0335f0ef97bcp-117, 0x1.dde9c297c44b8p-842, 0x1.3b1f22a014cddp-244, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d37f553b57deap-230, 0.0, 0.0,
     0x1.3f24447f954fep-1021, 0x1.f72920eff799ep-507, 0x1.997bbdb0fef19p-173, 0.0,
     0.0, 0x1.ff2ff8dff4411p-453, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ce46a4085333p-104, 0x1.73597218dd19cp-440, 0.0, 0x1.fa2913b320777p-872,
     0x1.c12942a94962ap-992, 0.0, 0.0, 0.0, 0x1.44f83209b7758p-447, 0.0, 0.0,
     0x1.bd9135761b8dp-449, 0x1.d558827c1b213p-530, 0x1.e0832eaf90511p-982,
     0x1.8b8d873a4b5bfp-190, 0.0, 0.0, 0x1.f7635390bfb48p-110, 0x1.0ce412a437d8cp-782,
     0x1.174c7ee29b24ap-742, 0.0, 0.0, 0x1.6ecc59d541558p-1022, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.542fe661dd894p-784, 0.0, 0x1.be6adf20d2422p-62,
     0x1.9d9ae884f1e5ep-467, 0.0, 0x1.aca9ebb6da253p-622, 0.0, 0.0,
     0x1.18f7fb5916b98p-543, 0x1.d8823a07ae442p-362, 0.0, 0.0, 0x1.c686fee6f5f62p-278,
     0x1.a211e8cd09b5ep-764, 0x1.2a815ed87e034p-807, 0.0, 0x1.6de8e92f7fce2p-400, 0.0,
     0x1.3190be87f947cp-906, 0.0, 0x1.af9cb6c7a1d46p-15, 0.0, 0.0,
     0x1.02c8d5d7a5f81p-168, 0.0, 0x1.99096fabeeedp-110, 0x1.25b67772677a8p-30, 0.0,
     0.0, 0.0, 0.0, 0x1.76684aeb7611ap-598, 0x1.981470cf4bcp-14, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.89bf7d592552dp-113, 0x1.c6ba7f2ab042ap-424, 0.0,
     0x1.93ebfd4b026c4p-259, 0x1.2648d4e4451b3p-294, 0.0, 0x1.7db4324f86a38p-27, 0.0,
     0.0, 0x1.2937122fd5bcap-452, 0.0, 0x1.30c85ac819354p-497, 0x1.13d5f201b7718p-828,
     0.0, 0.0, 0.0, 0x1.6d27cf344ac4cp-584, 0.0, 0x1.78fc994f7369p-605, 0.0, 0.0, 0.0,
     0.0, 0x1.317cda546f1cfp-833, 0x1.a8bb322ccb45ep-167, 0x1.f09d281e17db5p-769, 0.0,
     0.0, 0.0, 0x1.9ac834337a6aap-561, 0.0, 0.0, 0x1.e494171e33d31p-107, 0.0,
     0x1.d1c6420dca747p-678, 0.0, 0.0, 0x1.83b3c82fe84b8p-653, 0.0,
     0x1.26deb94775166p-741, 0x1.bc1ac94985411p-886, 0x1.601e89e95aa17p-704,
     0x1.ced5c717f6d0dp-267, 0x1.40a4a554bf58fp-253, 0x1.6d9f12a4c1ap-182, 0.0, 0.0,
     0.0, 0.0, 0x1.22b541b755656p-279, 0.0, 0x1.b75f437f5587dp-241, 0.0,
     0x1.041423c60ea95p-24, 0.0, 0.0, 0x1.3cd071d780b32p-27, 0x1.de49f6a918b7dp-277,
     0x1.7c4ba0c5efcd6p-1006, 0x1.287725c3f9314p-659, 0.0, 0x1.4f797f61be75ep-711,
     0.0, 0.0, 0.0, 0.0, 0x1.e26ffb1b88f4p-455, 0x1.c7619f79c9edap-628,
     0x1.0c23acfd08e85p-716, 0x1.e181d680cdc9bp-996, 0x1.a85f0328e5bb5p-980,
     0x1.17309ef32f48p-898, 0x1.a71ae5e69bf7ep-329, 0x1.b671fe5b18666p-195,
     0x1.a0f974540b67p-416, 0x1.e412575569d15p-807, 0x1.3318fbaaa815fp-405,
     0x1.a525da3cb9299p-510, 0.0, 0x1.ae21b65326057p-171, 0x1.815c226ad8b44p-486,
     0x1.dff3fb93acc44p-785, 0.0, 0x1.b322baff1bb25p-356, 0.0, 0x1.c5a99299984b2p-22,
     0.0, 0.0, 0.0, 0x1.487b1636b5142p-987, 0.0, 0x1.532b60959f2a7p-2, 0.0, 0.0, 0.0,
     0x1.edf76a8c99302p-912, 0.0, 0x1.97bd7ba62d08cp-973, 0.0, 0.0,
     0x1.b92f33a31fbeap-922, 0.0, 0x1.929bc4e928bf4p-301, 0x1.88d6dcb2e8875p-894,
     0x1.d6ef2b06940e1p-253, 0x1.944798317b63ap-858, 0.0, 0.0, 0.0, 0.0,
     0x1.da2632a3cbec3p-383, 0x1.7e43ff8dd98bap-931, 0.0, 0x1.b55eaef65caecp-822,
     0x1.2be29570f6ff2p-686, 0.0, 0x1.1db9a9cdf935fp-830, 0x1.3a2ab58782e8fp-132, 0.0,
     0x1.f0e6944217052p-468, 0x1.b63c7e07083ccp-600, 0x1.8404d83f001f2p-174, 0.0, 0.0,
     0x1.73d1bd9e0662p-214, 0.0, 0.0, 0.0, 0x1.e4fb70131a2fdp-648, 0.0,
     0x1.ce52fa8787425p-770, 0x1.1c0454738e2dbp-612, 0x1.20bcfcc08977cp-678, 0.0,
     0x1.b192f3618ef09p-270, 0.0, 0x1.71da4cf29e1a3p-106, 0x1.ad0db0e7810e8p-104,
     0x1.ec7ef59837e0cp-370, 0x1.c6ccbafa63c7bp-89, 0x1.51b6f4a5cafd3p-480, 0.0, 0.0,
     0x1.84a47c2bdb4c3p-270, 0x1.6e394440359b5p-311, 0x1.fe7719521509ep-950,
     0x1.f2d0993382089p-347, 0x1.40962c9fb4156p-931, 0x1.c8f8cfa743a5dp-921, 0.0,
     0x1.ff613c91b628ap-491, 0.0, 0x1.c685259e918f2p-170, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.840f9ba4a9a2p-697, 0.0, 0.0, 0x1.cb0adb23f6dp-567, 0.0,
     0x1.01d352bfb9022p-464, 0.0, 0x1.06170ce39d841p-13, 0x1.e6d755225eb77p-216,
     0x1.70152b4b48206p-786, 0.0, 0.0, 0x1.11079ac0816bfp-364, 0.0,
     0x1.3b5d860f081dp-621, 0x1.c91eaf7a8b8ecp-737, 0x1.505b325060bb7p-756,
     0x1.294a275553218p-273, 0x1.af1b0fd0e1dp-718, 0x1.198ffa688cb7ap-561,
     0x1.642a6c2a2c4eap-889, 0.0, 0x1.0b944a33baa7ap-788, 0.0, 0.0, 0.0,
     0x1.041190d52656ap-653, 0x1.84545f8ca27a3p-657, 0x1.d3a5bad4d78ap-948,
     0x1.7cc436ad96297p-37, 0x1.d018f7d545963p-865, 0.0, 0.0, 0x1.7220e4b0adf9p-477,
     0x1.d2792312bbf43p-652, 0x1.929e7629979a9p-876, 0x1.82ac489952a18p-650,
     0x1.668497a0b4259p-709, 0x1.aebac412721a7p-798, 0.0, 0x1.aae84397f7a1fp-825, 0.0,
     0.0, 0x1.00bcd10398e12p-486, 0x1.04122e30df348p-400, 0.0, 0x1.b04cc56b76ffdp-864,
     0.0, 0x1.c390ea83e211fp-62, 0x1.5c78a1b15a473p-574, 0x1.86be8040de173p-496, 0.0,
     0x1.edfbb3e60359fp-989, 0.0, 0x1.16e3a58ed9f67p-807, 0.0, 0x1.a848e9bfbe4d5p-622,
     0.0, 0.0, 0x1.ab9965061379bp-291, 0.0, 0x1.d376d230ae1c1p-422, 0.0, 0.0, 0.0,
     0x1.3d0ce468d8513p-230, 0.0, 0x1.cfc720d8680c2p-47, 0.0, 0.0,
     0x1.b27e60acb61a9p-240, 0.0, 0x1.8c56277f12ae5p-309, 0.0, 0x1.8fbc2eb9fed18p-91,
     0x1.d63dfab91fdp-504, 0.0, 0x1.39ae287034782p-310, 0.0, 0.0,
     0x1.5719d09dd8ba3p-531, 0x1.c2bbfa26fdd7fp-826, 0x1.94d820821d7fep-437,
     0x1.9e8d88f579736p-665, 0.0, 0x1.1507920db0eebp-694, 0x1.9c14d0107649cp-92, 0.0,
     0x1.a86580bd0e68ap-94, 0x1.11142e8237e4dp-620, 0x1.ac0b64035500cp-174,
     0x1.e72969caa76adp-818, 0x1.fc64dd42b83abp-559, 0x1.ef0b6eda10225p-221,
     0x1.e4564ef78ed3fp-750, 0x1.2268562d49c55p-860, 0.0, 0x1.b04761f378a69p-787, 0.0,
     0.0, 0x1.6bb356ac40cd6p-88, 0.0, 0x1.517e33abd22c8p-186, 0.0, 0.0, 0.0,
     0x1.9a486c26a1e6p-742, 0x1.579bc6ce7d0b3p-92, 0.0, 0x1.828a8cce019b9p-982, 0.0,
     0x1.0139fe2dc24c7p-82, 0x1.26c675a9dbffep-39, 0.0, 0x1.200851ea72068p-966,
     0x1.99624c3c701fp-716, 0.0, 0.0, 0x1.99dd8f3624d6fp-815, 0x1.487625aa9c2dep-515,
     0.0, 0x1.ac346fd7314dep-187, 0.0, 0.0, 0x1.21f53103e8dc6p-868, 0.0,
     0x1.60155ca37ba3dp-359, 0x1.70bde9ebc088ap-659, 0x1.e11815499618p-617,
     0x1.d1373b1160f53p-895, 0.0, 0x1.d089ece4251d7p-571, 0.0, 0x1.814efd16c717p-654,
     0.0, 0x1.7700853cd40fep-666, 0x1.3312829b946bap-775, 0.0, 0x1.23254d9555542p-256,
     0.0, 0x1.4d4b5090489e9p-670, 0.0, 0.0, 0x1.8016db5ed83f8p-260, 0.0, 0.0, 0.0,
     0.0, 0x1.bee82bd9c5738p-385, 0.0, 0x1.870584d0624ep-16, 0.0,
     0x1.6ae42f64317a7p-119, 0x1.7e21c26151b15p-224, 0.0, 0.0, 0x1.06f33033a9b33p-12,
     0.0, 0.0, 0.0, 0x1.538e1fb9ab399p-426, 0x1.6adf4525b44cep-535, 0.0,
     0x1.b7fe46ba6e41bp-155, 0x1.598aab28c6a4ap-778, 0x1.31a2e0b1fdfbep-46, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.26072bc331f4ap-335, 0x1.9cbbea163c002p-986, 0.0, 0.0,
     0x1.250f8d8ba4c5p-952, 0.0, 0.0, 0.0, 0x1.e63e74660e4c6p-463
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
            tmp1 = Sleef_exp10d2_u10avx2128(tmp0);
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
    printf("Sleef_exp10d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_exp10d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
