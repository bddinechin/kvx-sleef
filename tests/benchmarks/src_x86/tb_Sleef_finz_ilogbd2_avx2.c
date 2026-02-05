/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ilogbd2_avx2128.c --function Sleef_finz_ilogbd2_avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 2 --function-input-vector-size 2 --precision int32 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int2_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0)};
static const ml_int2_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.87eca963515d8p-550, 0.0, 0.0, 0.0, 0x1.04d6ce2941d1p-564,
     0x1.040ca091e2f4bp-709, 0x1.ed26e0fd8c2f8p-507, 0.0, 0.0, 0x1.3356ddb39e9a6p-857,
     0.0, 0.0, 0.0, 0x1.10e1d9077cfb6p-416, 0x1.cef1955570688p-47,
     0x1.5c5f6962f020ep-606, 0x1.ad6328d082caep-770, 0x1.2b91876fc5eedp-858,
     0x1.92c03d5ddbfccp-609, 0.0, 0.0, 0.0, 0.0, 0x1.0a509b7c6a40cp-536,
     0x1.9394544184512p-393, 0.0, 0x1.ffa4f5acccafp-356, 0.0, 0.0,
     0x1.2ebf2477bab79p-905, 0x1.27cdba5e9fc5cp-1017, 0x1.9c096312bcfbep-378, 0.0,
     0.0, 0.0, 0.0, 0x1.ccf969f5d9435p-644, 0x1.2c0127ca2592p-618,
     0x1.4b9e277208c99p-349, 0.0, 0x1.999be376dd84ep-10, 0x1.3f10e5e1ce84dp-32, 0.0,
     0x1.09f9728bcf2ecp-433, 0.0, 0.0, 0x1.b21bf213fb5abp-979, 0x1.04b886d3b385p-413,
     0x1.90e0877d8093bp-750, 0.0, 0.0, 0.0, 0.0, 0x1.8237ed6187819p-647, 0.0,
     0x1.1237a1577131fp-377, 0.0, 0x1.2aaaf0f0b4ba5p-221, 0x1.599c60195836cp-175, 0.0,
     0x1.bdd865fa4269ap-41, 0x1.83e1db0d63efep-214, 0x1.560ab8b4aae1bp-3, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eb0b9717e6bf6p-745, 0x1.049519325fd2ep-113,
     0x1.631703e655d0dp-79, 0x1.a58d2afef3964p-151, 0.0, 0.0, 0x1.6618cd0dda6b8p-618,
     0x1.fbaf7b7afd5e5p-908, 0x1.0a8fcf3dfc45fp-695, 0x1.d229f69d057b2p-78, 0.0, 0.0,
     0.0, 0x1.6b58f0b93726dp-705, 0.0, 0.0, 0x1.bce81939192a7p-484,
     0x1.75bdde7062511p-722, 0x1.00566eb2589d5p-848, 0.0, 0x1.7a557fb112f63p-168, 0.0,
     0x1.02f4d5c2207d3p-434, 0.0, 0x1.1afda0d8bb3d8p-357, 0.0, 0x1.8ac7657352ec2p-437,
     0x1.cb42a200fc656p-802, 0.0, 0x1.19cc40f75dd3bp-226, 0x1.f08761400ac4p-178,
     0x1.f5ed4aaeafc25p-900, 0x1.d160ebc5385e3p-895, 0x1.0c441171b31cfp-843,
     0x1.6ef5c64b69a5ep-547, 0.0, 0x1.c5b45697eb22dp-63, 0.0, 0.0, 0.0,
     0x1.e0560edf42f45p-503, 0x1.d280d5ff4b583p-458, 0x1.e0de571a22097p-52,
     0x1.deb508028f9cep-424, 0.0, 0.0, 0x1.d65098cd52b7cp-884, 0x1.930b97ee24c88p-406,
     0x1.7d1e0ba74c648p-530, 0.0, 0x1.6f0a4730833c9p-889, 0.0, 0x1.815092916e8f4p-588,
     0.0, 0x1.bec1aac562436p-510, 0.0, 0.0, 0.0, 0x1.b1cfcf2d52375p-752,
     0x1.4a529d6d63eadp-1014, 0x1.97f459c8b4b6cp-796, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c0b1023c8aedp-349, 0.0, 0.0, 0x1.89b1bfadf28a3p-932, 0x1.0448efb6eed3ap-760,
     0x1.6acbe82bdc084p-826, 0x1.1988fc3408adep-66, 0x1.1791215e7d8cp-533,
     0x1.cd9578276cf6dp-944, 0x1.a769a62a165c2p-796, 0.0, 0x1.adb5d74268c24p-524,
     0x1.bbd6ec40bc521p-939, 0x1.3e523b474506dp-443, 0.0, 0x1.044386d299918p-166,
     0x1.3823d9f0f8eb8p-6, 0x1.6792006499d89p-76, 0x1.cfbaf25f6fca9p-403,
     0x1.4ab4c32aa2619p-208, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f09dabfa60c7p-520, 0.0, 0.0, 0x1.8f99808e0488ep-244, 0.0, 0.0,
     0x1.d6c215105362ap-396, 0.0, 0.0, 0x1.05c86907569c6p-75, 0x1.1e0e95b2a585dp-987,
     0x1.a20ee7abfceecp-207, 0.0, 0x1.9f865d91cc4c9p-31, 0.0, 0x1.b851e7de04b37p-847,
     0x1.1726eec9aaf11p-679, 0x1.56cf3063b3067p-186, 0x1.ee49a083160ap-892, 0.0,
     0x1.507617556eb84p-436, 0.0, 0.0, 0x1.32325daa15faep-468, 0.0, 0.0,
     0x1.600db1ce2097fp-954, 0x1.c70441b432923p-404, 0x1.d092cfc4ce97cp-690,
     0x1.3bccda57c044fp-365, 0.0, 0x1p0, 0.0, 0.0, 0x1.6246fd01a5615p-567, 0.0,
     0x1.9a9b507d05d6fp-551, 0x1.910a76014754fp-383, 0.0, 0.0, 0x1.93df3d48b4cc4p-206,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc698ca7bba67p-546, 0x1.4679299f56933p-874,
     0.0, 0.0, 0x1.bde157c027c4bp-763, 0x1.252704b21354ep-134, 0x1.499e1e8fbd646p-899,
     0x1.61fa0a065f1dcp-909, 0x1.8fce5407fe77fp-111, 0.0, 0x1.ce0fc765c9401p-243, 0.0,
     0.0, 0.0, 0x1.799fd44d7f68fp-586, 0.0, 0x1.a8180d7e56d8cp-250, 0.0,
     0x1.541c7c3183f15p-964, 0.0, 0.0, 0x1.849a893b9f63cp-834, 0x1.b445f2dfe9252p-969,
     0x1.52060acfff013p-517, 0.0, 0x1.35623c4d75bc7p-690, 0x1.a92fd1310728ep-246,
     0x1.f942a7c756cb3p-216, 0x1.443ecf15afe9dp-215, 0.0, 0.0, 0x1.95b022e550047p-686,
     0.0, 0x1.431dffc71a82ap-354, 0.0, 0x1.b8f0172820f0bp-117, 0x1.ad86ae208c5efp-160,
     0x1.fdc41d28d0fbp-722, 0x1.21de24315d387p-241, 0x1.b702331a7f9dap-204, 0.0, 0.0,
     0x1.16a5740081dc2p-217, 0.0, 0x1.0c456a659ae68p-185, 0x1.26f30f0f4c03dp-335, 0.0,
     0.0, 0.0, 0x1.a5aebfe1d5df3p-260, 0x1.baf85f9f6281dp-283, 0.0, 0.0,
     0x1.a62d5c545c1cep-531, 0x1.ba3a392cad429p-820, 0x1.d68ab63ac8636p-230,
     0x1.ec80f8f7837e8p-347, 0x1.8e8a7826a43p-487, 0.0, 0x1.840b261db2c73p-178, 0.0,
     0.0, 0.0, 0x1.ced2f0a8e4768p-661, 0.0, 0x1.2d462a39054e3p-211, 0.0, 0.0,
     0x1.5ccb2f887cbf8p-85, 0x1.bfdb57749112ep-427, 0.0, 0x1.efabc65118b5p-963, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f76b6bb21efp-993, 0.0, 0.0, 0x1.6dfcf8053f5ap-114,
     0x1.95fc56821d689p-154, 0.0, 0x1.8bee16489a92cp-435, 0.0, 0x1.7b96a3d2d553fp-81,
     0x1.93bfe9aa7ac4cp-224, 0.0, 0.0, 0.0, 0x1.5f486230a95efp-444, 0.0,
     0x1.26d52efd36907p-91, 0x1.b553bdd28ebc6p-404, 0x1.f59e0de97a04fp-19, 0.0,
     0x1.3335c9551b84dp-347, 0x1.fc8c0aadde2d3p-601, 0.0, 0x1.45df9c9045f1dp-910, 0.0,
     0.0, 0.0, 0x1.0a5022616fcefp-355, 0x1.4bfcbbfa15021p-165, 0.0,
     0x1.5cff2cdd10dcfp-1006, 0.0, 0x1.4df5e3e15a6afp-844, 0.0, 0.0, 0.0,
     0x1.2ee547537f0d1p-540, 0x1.9b4a8a988e2a8p-197, 0.0, 0.0, 0x1.5e72eb370b135p-284,
     0x1.410e1f66c04ecp-599, 0x1.988ffad5fc312p-945, 0x1.9edda07fb52f2p-428,
     0x1.356042135e2ebp-249, 0x1.4900b78d2a08ap-154, 0x1.6e41801fa86e5p-314, 0.0,
     0x1.369c2533a49d7p-906, 0.0, 0.0, 0x1.22664bac3f248p-188, 0x1.adc7efe1cf4ecp-84,
     0x1.79ec51456a4f3p-592, 0x1.c339bf20a2e69p-681, 0x1.94bb11e9c476ap-404,
     0x1.d3ff938d233cap-758, 0x1.66a963cd88e21p-787, 0x1.8018672e5ad98p-438,
     0x1.ef5bb0d717a2fp-152, 0.0, 0x1.17ad2742e4fb6p-106, 0.0, 0x1.32af5dc0eade6p-66,
     0.0, 0x1.3046477d1982fp-327, 0.0, 0x1.318db2717c6dfp-616, 0x1.1729ac6c33c41p-839,
     0x1.a2d341c8a9d4p-299, 0.0, 0.0, 0.0, 0x1.8facda64360cbp-918,
     0x1.102f0c021d341p-867, 0x1.875eecca5dab7p-906, 0x1.f560970598e9bp-778,
     0x1.23bf698a4b26cp-325, 0x1.3d60cfda4d62bp-516, 0x1.d67b8adce11c6p-697,
     0x1.cbae34466a066p-704, 0x1.682794c3ebfdcp-754, 0x1.cd0edcadb01b9p-944,
     0x1.80fde309b98afp-1006, 0.0, 0.0, 0.0, 0x1.9a988898742e2p-175,
     0x1.51fc8136c1388p-836, 0x1.13728e4611503p-561, 0x1.289575c290d74p-857, 0.0,
     0x1.4c63b42b2e891p-272, 0.0, 0x1.0ee03c59e6ab5p-655, 0x1.a134700251376p-783,
     0x1.2e4beb40c1b1ep-19, 0x1.767493e25c727p-193, 0x1.65792b3e7aaafp-167, 0.0, 0.0,
     0x1.63e3a96830ad3p-261, 0.0, 0.0, 0.0, 0.0, 0x1.d28d35dbb158fp-564, 0.0, 0.0,
     0.0, 0x1.dcd76b7eeaf2p-190, 0.0, 0x1.c3738491bc484p-391, 0x1.2fee876f5a942p-724,
     0.0, 0x1.5635a318e8a4fp-205, 0.0, 0.0, 0x1.e27133b18728bp-799,
     0x1.5a217d13f93eep-812, 0x1.5403216dc5821p-201, 0.0, 0.0, 0.0,
     0x1.bc71107bbbb61p-297, 0x1.f185678cc881fp-357, 0.0, 0.0, 0x1.bf3e063f91f7ap-831,
     0.0, 0.0, 0.0, 0x1.c9385a580507cp-806, 0x1.edacb093ddfe6p-467,
     0x1.56375c6ac3d2ep-690, 0.0, 0.0, 0.0, 0x1.55326aa5fb692p-274, 0.0,
     0x1.6350591e7aa51p-494, 0.0, 0.0, 0x1.408604cd15706p-930, 0x1.dccaebd872329p-130,
     0.0, 0x1.584ddf4c038c8p-119, 0.0, 0x1.7a0309bf62448p-513, 0.0, 0.0, 0.0,
     0x1.d74891ea0af8bp-633, 0x1.714a6fb84c3a6p-856, 0x1.bae9eeda671eap-449,
     0x1.0d3a80ea85ea5p-309, 0x1.35ede5caad783p-368, 0x1.b616cc32ef162p-512,
     0x1.c7da87d1e5637p-313, 0.0, 0x1.dc04237384061p-398, 0.0, 0.0, 0.0,
     0x1.7a587aa03b66fp-881, 0x1.0ebb160f0bfa5p-127, 0.0, 0.0, 0x1.79845b086f04p-982,
     0.0, 0x1.ba7326dd6046cp-307, 0x1.0a04891ad5b09p-260, 0x1.6b7f13c46734ap-497, 0.0,
     0.0, 0.0, 0x1.87ce490a7b204p-575, 0x1.e94682e5a2051p-871, 0x1.e559bbcb588d7p-117,
     0.0, 0.0, 0.0, 0x1.86975dce9541fp-322, 0x1.1c8a1ca41ecd9p-148, 0.0,
     0x1.07601c6a2522dp-515, 0.0, 0x1.bf3e17993a6fdp-135, 0x1.593ea3e34ea26p-199,
     0x1.0d5d148f42f1fp-568, 0.0, 0x1.57e26b8cf3ff1p-50, 0x1.45ab0e9d83fa5p-522, 0.0,
     0x1.12d30ef9ecbaep-574, 0.0, 0x1.07dc99b9104e2p-791, 0x1.ff2c1dd1ec64cp-764, 0.0,
     0.0, 0x1.59024afcca5bbp-982, 0.0, 0.0, 0.0, 0.0, 0x1.3f2efb6ccac59p-1, 0.0,
     0x1.ed7af2f03e1e8p-623, 0.0, 0x1.d7de02336c78fp-165, 0x1.fa32c50b2bdbbp-488,
     0x1.611c0a8c083adp-946, 0x1.f8c4db0f360e9p-136, 0x1.495d6f8dc205bp-379, 0.0, 0.0,
     0x1.cc4ba4f0e8a6dp-326, 0x1.cd26733c99718p-93, 0x1.e7d25bad2408p-429, 0.0, 0.0,
     0x1.6956d60f2139dp-847, 0.0, 0x1.ec7927d590363p-949, 0.0, 0x1.f31f3255b6dfp-114,
     0x1.5f4c32c2381b3p-706, 0x1.5215b2e8ab6bp-131, 0.0, 0x1.c3ebc4ed722ep-275,
     0x1.4a23f52bcffa8p-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b693b64a420c6p-486,
     0x1.7a4c15394c581p-678, 0.0, 0.0, 0x1.d6fda3c1be8f8p-243, 0.0, 0.0,
     0x1.bcc9502ff8041p-642, 0.0, 0.0, 0.0, 0x1.7dc3bf394a5d1p-523,
     0x1.6fe0c5140c73fp-961, 0x1.e6582b05de748p-180, 0x1.2c58cae89fca7p-467, 0.0, 0.0,
     0.0, 0x1.f784b177f49fap-979, 0x1.207fc053d377fp-365, 0.0,
     0x1.b6a8aeacf739ap-1004, 0x1.661e500f63f09p-38, 0.0, 0.0, 0.0, 0.0,
     0x1.4d54c01b75b9fp-868, 0x1.8cc914ad17e58p-297, 0x1.a7a892a93e7b9p-355,
     0x1.8c1d21560645p-264, 0x1.9b1cf26fbf62bp-512, 0x1.a10bdd20fab8p-852, 0.0,
     0x1.dd93908209583p-133, 0.0, 0.0, 0x1.18d8d025088abp-764, 0.0,
     0x1.51236058b487fp-646, 0x1.cf8493967efe7p-110, 0x1.de874a13b8b59p-190, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b2e8231afa90fp-788, 0.0, 0x1.77c8a059af8f3p-898, 0.0, 0.0,
     0x1.f1f6bb3fb1475p-40, 0.0, 0.0, 0x1.b12b341760f54p-356, 0.0,
     0x1.61545f1d04713p-969, 0x1.307c481e4ec0fp-298, 0.0, 0x1.7ba533c8e557p-724, 0.0,
     0x1.46629e0be40c6p-217, 0x1.3cba94a116a34p-556, 0x1.ad0aabb60ef51p-145, 0.0, 0.0,
     0x1.32676c2e997b5p-132, 0.0, 0.0, 0.0, 0.0, 0x1.2832a40883a94p-903,
     0x1.6b50fb3413381p-933, 0.0, 0x1.95bc85187b41fp-407, 0x1.e455894d1d3efp-934, 0.0,
     0x1.329b1cd3f0f26p-1011, 0.0, 0x1.aa0c0ccd4df53p-537, 0x1.6ad61fcc5c222p-837,
     0x1.33eabca5f7c68p-135, 0x1.2b3fb70e34242p-226, 0.0, 0x1.38e8248a9b3abp-122, 0.0,
     0x1.882c99aadc64fp-455, 0x1.e567c82132d38p-790, 0.0, 0x1.7ce01420a6366p-425,
     0x1.beb80b94a3d23p-116, 0x1.3282bd8344fa9p-117, 0.0, 0.0, 0x1.30982bcbc93d7p-811,
     0.0, 0.0, 0x1.ba95baa74a4acp-127, 0x1.fdab25f5473a4p-342, 0.0,
     0x1.5ce4a5ac0c578p-352, 0x1.c342067f952bap-393, 0x1.47ee7707973a8p-694, 0.0,
     0x1.eb0b5c68bade5p-929, 0x1.898f03f1abe95p-1009, 0.0, 0x1.21718fc70a347p-224,
     0x1.fe7c4b86bd933p-1021, 0.0, 0.0, 0x1.eb1add4609p-901, 0.0, 0.0, 0.0,
     0x1.13a7a88ace65fp-91, 0.0, 0x1.defa9a4b28175p-890, 0x1.886917f1fcafcp-791, 0.0,
     0.0, 0x1.97e62c4ef5fd2p-39, 0x1.93fd7d2cd242ep-221, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9f633575f1bbfp-1015, 0x1.f0aa61bfca7fcp-615, 0x1.23e96fb1706fdp-845,
     0.0, 0x1.5dc850c598fd5p-146, 0.0, 0x1.33528b2b2d9fbp-390, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c6cdd63b2f44ap-180, 0.0, 0.0, 0.0, 0x1.f8834bd43b509p-941,
     0x1.929c7942f7791p-506, 0x1.55ed5e5373978p-86, 0.0, 0x1.42acb1b0bd4a6p-219,
     0x1.6176412bffaaep-583, 0x1.936bd15de5bd2p-1000, 0.0, 0.0,
     0x1.0183b26ad1066p-174, 0.0, 0.0, 0.0, 0x1.b386441686b88p-24, 0.0,
     0x1.ba40ad7e8d61cp-589, 0.0, 0x1.fd7c1d822658ap-973, 0.0, 0.0, 0.0, 0.0,
     0x1.72510f492aa71p-131, 0x1.5f51c3f21f966p-458, 0x1.7370cfa63acf1p-308, 0.0,
     0x1.3d4a8e55897e7p-137, 0.0, 0x1.63ebd38ecb26dp-361, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1a0ec66220002p-289, 0x1.94342f0b2c89bp-525, 0.0, 0.0,
     0x1.fd9291207d3ccp-98, 0.0, 0x1.7691abe843acfp-622, 0x1.eaa8c3e153a42p-77, 0.0,
     0.0, 0x1.8a254b86e417fp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85a2bffb6a2dp-640, 0.0,
     0.0, 0x1.93d20cb85cc0bp-126, 0x1.03b9b8a2ed624p-117, 0x1.f4b8774b4f972p-103,
     0x1.2b6b84fe52bb3p-756, 0.0, 0x1.3058bc046bc47p-588, 0.0, 0x1.6db5bc783f07fp-366,
     0.0, 0.0, 0x1.68f75b304797cp-563, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e5e51eec5f38fp-728, 0.0, 0.0, 0.0, 0x1.b71e5e7e94eb8p-133, 0.0,
     0x1.758d18d16242bp-770, 0x1.f1a75fba661edp-338, 0x1.07042a66f6edcp-307, 0.0, 0.0,
     0x1.575499f9ef088p-305, 0x1.a96a1f1bcd248p-278, 0x1.69a6265e130d3p-997, 0.0,
     0x1.9d6a308a8254fp-301, 0.0, 0x1.4595ab198f356p-902, 0x1.f6d99956396fap-671,
     0x1.f2c7253184957p-975, 0x1.f2dc86dc3f93cp-279, 0.0, 0.0, 0.0,
     0x1.18292e2083e87p-252, 0.0, 0x1.140dfac5c50f1p-283, 0.0, 0.0,
     0x1.3ead52ae19235p-873, 0x1.c73d0857947a1p-105, 0x1.af1998e8d01cbp-306, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.00f8ba05ab698p-877, 0x1.aec588d589163p-494,
     0x1.dd446f87cab64p-754, 0x1.8b917d099fd4fp-527, 0.0, 0x1.96aa590443eb3p-42,
     0x1.d29f5e02929f3p-536, 0.0, 0.0, 0x1.127101887a0e7p-86, 0x1.4032f3dcc0c58p-941,
     0.0, 0x1.bd64296d4f4a8p-781, 0.0, 0x1.6c02e7a4626f3p-512, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6556e576648bap-705, 0.0, 0x1.951906d6f4f2dp-558,
     0x1.cef102ba90bb7p-724, 0x1.386685d1c6c5fp-792, 0.0, 0x1.578112c2962b4p-159, 0.0,
     0.0, 0.0, 0x1.cd165e763d448p-534, 0x1.457500057978fp-755, 0x1.61eac15a9bc3ep-753,
     0.0, 0.0, 0.0, 0x1.20aa0223ed995p-438, 0x1.b2e3cb3705cacp-412, 0.0,
     0x1.019ee683a983bp-434, 0.0, 0x1.d8426dd789d37p-200, 0x1.58d491dab63e5p-954,
     0x1.522ae811a471p-240, 0.0, 0x1.c9dcd6b11bf45p-390, 0.0, 0.0,
     0x1.d9da9136cd485p-1001, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.070a1f842409p-594,
     0x1.c6926f7669f57p-215, 0x1.e1c83621b8c03p-503, 0.0, 0x1.f850f531aa4b8p-562, 0.0,
     0x1.54dd9f5a4f8a2p-197, 0x1.3fc1c3e8bc9a8p-871, 0.0, 0.0, 0x1.ccffe11c35dp-104,
     0.0, 0x1.1201994a807ep-184, 0.0, 0.0, 0.0, 0x1.b5c14d7d2898bp-924, 0.0, 0.0, 0.0,
     0x1.36ec7f9f5cd93p-282, 0.0, 0x1.81d9d2fcff7acp-487, 0.0, 0x1.4339843ce77e2p-680,
     0.0, 0.0, 0x1.00738cbfa722bp-693, 0.0, 0.0, 0x1.4a94ce2524518p-765,
     0x1.be02ad8215265p-405, 0x1.d34b9f2c874f4p-270, 0x1.e8e8e66bbb2e7p-140, 0.0, 0.0,
     0x1.baa67c68738cdp-967, 0.0, 0.0, 0x1.569bf9a2a6853p-42, 0x1.d61df67c0e244p-762,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dda78a19e95b9p-124, 0.0, 0x1.52f357d831e1fp-166,
     0x1.fff8daf0afd02p-774, 0.0, 0.0, 0x1.53eee2d0e96cap-918, 0x1.e5f426ac566ap-182,
     0x1.edd3b4b09a87bp-668, 0.0, 0.0, 0x1.690719c5f37ep-877, 0x1.2cd84e4bd8a9ap-368,
     0.0, 0.0, 0x1.d72f799f8217cp-60, 0x1.023fd32aa3c69p-479, 0.0, 0.0, 0.0,
     0x1.6e63a4377c30ep-299, 0.0, 0.0, 0.0, 0x1.41471ae1f9526p-861,
     0x1.7c63ea845cacp-607, 0.0, 0x1.424b6721b3a19p-53, 0x1.7bd1672d41bc4p-36, 0.0,
     0.0, 0.0, 0.0, 0x1.f4bbbe8be4736p-877, 0x1.95cefb96e056ep-614,
     0x1.b260fe552fb0cp-761, 0x1.f8671df1f4cd5p-297, 0.0, 0.0, 0.0,
     0x1.25afcf69b01bbp-975, 0.0, 0.0, 0.0, 0x1.443ae52ae6574p-38,
     0x1.7c1b08c5bed99p-505, 0.0, 0x1.669c9b0814e22p-756, 0.0, 0.0,
     0x1.06bce0be1e20ap-961, 0.0, 0.0, 0.0, 0x1.c989836846193p-789, 0.0, 0.0,
     0x1.591a42ad1b1ffp-974, 0.0, 0x1.f66e94481514fp-69, 0x1.6196a27a4e78dp-272,
     0x1.ebab1da69b974p-627, 0x1.d4759b3362a73p-878, 0x1.3731477bbba64p-703, 0.0, 0.0,
     0x1.7ace2df2f1fa6p-809, 0x1.923678967a6eep-189, 0x1.cbb07929ccd46p-847, 0.0, 0.0,
     0x1.c7bb63763e487p-57, 0x1.03a97dc3ed378p-715, 0.0, 0x1.5cb41f1c387fcp-493,
     0x1.0df0f9cab281ap-103, 0.0, 0x1.c4d8932bcd382p-440, 0x1.1de0e0aa611ecp-205,
     0x1.45575d02cd60ap-872, 0x1.0731ae20943f6p-42, 0x1.9fa15a0b7bdacp-618,
     0x1.ff04c07b12a2bp-388, 0.0, 0x1.797eadebe2439p-393, 0.0, 0.0,
     0x1.18c8253679137p-613, 0.0, 0.0, 0.0, 0.0, 0x1.7c9d6b0eb96ccp-576, 0.0,
     0x1.370c8ae9eb61ep-667, 0.0, 0x1.c2c4071d7d9cbp-512, 0x1.4e641690ae7c5p-590,
     0x1.18b9b83ca4ea5p-63, 0x1.7cdd084e20fb8p-599, 0x1.422ff1fde0cdcp-477,
     0x1.35b9afd687f71p-738, 0x1.f4ad0f719803p-911, 0x1.73131fbdbf7c7p-86, 0.0,
     0x1.224dbc300ec44p-25, 0.0, 0x1.1dd18f2286f9p-594, 0x1.154a4ab6b6ac3p-305,
     0x1.651725050418dp-471, 0x1.76dd4e0e634b5p-906, 0.0, 0.0, 0x1.392f5c92d49e9p-248,
     0x1.57b355453fc5ap-90, 0.0, 0.0, 0x1.827cd1f334cbap-897, 0x1.ef010e2c1eab2p-71,
     0x1.25dc9eadd0ap-854
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int2_t global_bench_acc;
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
        ml_int2_t local_acc;
        int32_t i;
        ml_int2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_int2_t tmp1;
            ml_int2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_ilogbd2_avx2128(tmp0);
            memcpy(((ml_int2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  8);
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
    printf("Sleef_finz_ilogbd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_ilogbd2_avx2128 bench acc [%d, %d]\n", global_bench_acc[0], global_bench_acc[1]);
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
