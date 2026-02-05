/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10d4_u10kvx.c --function \
 *     Sleef_finz_log10d4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0x1.91d468aead24p-571, 0.0, 0x1.b4cc3d75dbf95p-595, 0.0, 0.0, 0.0,
     0x1.2f859cd9b0e8dp-834, 0.0, 0x1.07a2cec87de7ap-390, 0x1.94dd685f42793p-545,
     0x1.140deeb49006p-246, 0.0, 0x1.5290bf70f5a5fp-1001, 0.0, 0x1.ed8ef69cdbc1bp-844,
     0.0, 0x1.fcc8f25ba5795p-642, 0x1.452e68d36e169p-840, 0.0, 0.0,
     0x1.f506d06732da1p-496, 0.0, 0.0, 0x1.98acc4104589bp-819, 0x1.7fb4ca6564657p-626,
     0x1.e7ec963cc9176p-133, 0.0, 0x1.53a4f47339c48p-117, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e6188d1598ffp-861, 0x1.b4d1d56debc1p-135, 0x1.5d26efb9a9e6fp-436, 0.0,
     0x1.6b99e13c91e45p-228, 0x1.70c557a67511bp-92, 0x1.20b64c067e695p-546, 0.0,
     0x1.83b55d2128d03p-381, 0.0, 0x1.da0a85795500bp-251, 0x1.3c1a3878e7576p-514, 0.0,
     0x1.54d7d7a19e82fp-527, 0x1.c185e2ebffe5p-144, 0x1.308f38f145949p-345,
     0x1.5a7ae46dc9527p-638, 0x1.d0a94707f364bp-715, 0x1.767b765d25522p-611,
     0x1.f8ea2049ccf04p-562, 0.0, 0.0, 0.0, 0.0, 0x1.21cdba4df2756p-940, 0.0,
     0x1.86fddc2f33cbfp-821, 0x1.867cc32a1a268p-389, 0x1.93c0b747d4f01p-625, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5d8a3acb99b14p-379, 0.0, 0x1.a2277c366044fp-739,
     0x1.5a1f8b8ed5095p-614, 0.0, 0.0, 0x1.4348ced981643p-999, 0.0, 0.0,
     0x1.39a3fd169d2ep-4, 0x1.5ed317ece1addp-912, 0x1.b34f58623745p-864,
     0x1.b2fbfb1fa6497p-620, 0.0, 0x1.a1ca9216818d2p-985, 0.0, 0x1.3932dd4fcd80dp-657,
     0x1.a5d37e22f5a1bp-393, 0x1.f48fed0ffda18p-299, 0.0, 0x1.9a391b4417726p-383,
     0x1.7a558691dc77dp-133, 0x1.7572a4d3aa636p-465, 0x1.95622f4a0028p-59,
     0x1.431a11f68c75dp-59, 0x1.22d23d99fd14cp-534, 0.0, 0.0, 0.0, 0.0,
     0x1.bdec21b142299p-734, 0.0, 0x1.7136334be050cp-225, 0x1.8a23ac9c4b02ap-114, 0.0,
     0.0, 0x1.9b4a0aea1a888p-764, 0x1.9d5fd5c62c838p-642, 0x1.19418be2c8909p-699, 0.0,
     0x1.9310d26d0c9a1p-266, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0a03365e38dep-954, 0x1.5c5b5080a99a2p-59, 0x1.b668bd603d454p-821, 0.0, 0.0,
     0.0, 0.0, 0x1.cc9f7b037b20ep-803, 0x1.81c41ba265075p-125, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fae665ff1d7eep-848, 0.0, 0x1.b7f8580b6d397p-1007, 0.0,
     0x1.f28f8a8ced6a5p-157, 0.0, 0x1.ebf73a650ba3ap-50, 0.0, 0.0,
     0x1.7f791e3707c25p-289, 0.0, 0.0, 0x1.eb19294458c44p-548, 0.0,
     0x1.fe4380ef6ff13p-485, 0.0, 0.0, 0.0, 0x1.96ba565f7508bp-758, 0.0, 0.0, 0.0,
     0x1.7996763548482p-296, 0x1.396650bbf6f5ap-699, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b2f67fdea3eccp-1008, 0x1.dacd6d768df53p-420,
     0x1.fc9baeb51a00dp-492, 0x1.16ab3fb68c56ep-152, 0x1.c43a3cdeffddp-321, 0.0, 0.0,
     0x1.1efde251e63a3p-795, 0.0, 0x1.ea29f55d4cb9cp-644, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b6408b278549p-705, 0x1.bd7557310333dp-901,
     0x1.0e770e31427a3p-864, 0x1.8df26d9a99adep-99, 0.0, 0.0, 0x1.235b0773a75bcp-347,
     0x1.3c660891f8d79p-419, 0x1.757b772e10a3cp-479, 0x1.699e2da4db796p-122, 0.0,
     0x1.f81bd4ed9d657p-835, 0x1.a4e955837911ap-125, 0.0, 0.0, 0x1.1652cd6b6096ap-495,
     0.0, 0x1.376077bcdc17bp-298, 0.0, 0x1.928b0d3417212p-321, 0.0,
     0x1.cce000b7f45adp-566, 0.0, 0.0, 0x1.8c2efcfa5a619p-653, 0x1.49b6a9a63c35fp-500,
     0x1.28709f54ac994p-311, 0x1.11d9918d7fc87p-980, 0x1.ab4e22e48381ep-523,
     0x1.471fd38577c1bp-259, 0.0, 0x1.d195a7729816ap-512, 0x1.15494fc0c8483p-847,
     0x1.6e18d3a1ea2ddp-183, 0.0, 0x1.15dd5f41cd5fcp-641, 0.0, 0.0,
     0x1.72bf6fd805335p-831, 0.0, 0.0, 0.0, 0x1.3773d9963c9dbp-186,
     0x1.b5724395eaf59p-530, 0.0, 0x1.f605b47e06de5p-74, 0.0, 0.0,
     0x1.dd774b365fd18p-843, 0x1.cf4a9f21dadabp-618, 0.0, 0.0, 0x1.64d830c7efe8fp-806,
     0x1.27ffb59163fbep-199, 0x1.e8d381db28be5p-233, 0.0, 0.0, 0x1.4f3295511fa97p-696,
     0x1.53819d903be21p-315, 0x1.4d39e82e30c28p-250, 0.0, 0x1.0a84085f078fdp-511, 0.0,
     0.0, 0.0, 0x1.eaa0f2944591p-299, 0x1.02fcd40f71193p-830, 0x1.2a8ce9e1f0403p-291,
     0.0, 0x1.19c5f4b1cd001p-307, 0.0, 0.0, 0.0, 0.0, 0x1.a097fbef3ae05p-123, 0.0,
     0.0, 0x1.6cabbe89ba33dp-41, 0.0, 0.0, 0x1.39e9617b65636p-37, 0.0, 0.0, 0.0,
     0x1.45d547f9cbd8bp-787, 0x1.6cf019ac7a433p-578, 0x1.242dec0d93f86p-501,
     0x1.7ea01964a4245p-944, 0.0, 0.0, 0.0, 0x1.7d19e3fb40f54p-740, 0.0, 0.0, 0.0,
     0.0, 0x1.0dfe82999292dp-737, 0x1.5deb8d9826981p-852, 0x1.3cdbb3925a52cp-33,
     0x1.3eae1135ba7bdp-715, 0x1.895f548d08a55p-707, 0x1.196d6194c1efap-573, 0.0,
     0x1.a91d27cce79fdp-655, 0.0, 0x1.ecd43afc87fa7p-18, 0x1.646766c9a03e3p-818, 0.0,
     0.0, 0x1.edbbfeab8dfb8p-101, 0.0, 0x1.6e2608a6c40a9p-927, 0x1.e7bfc355616d7p-566,
     0.0, 0.0, 0.0, 0.0, 0x1.9fb7564068de6p-490, 0x1.65fb0f2648cefp-372, 0.0, 0.0,
     0.0, 0x1.1791315073bp-348, 0x1.a5e68c3170933p-424, 0x1.0bf7b71fdc09ap-624, 0.0,
     0.0, 0.0, 0.0, 0x1.5051520d6ef9fp-302, 0.0, 0x1.8edcc54bd6d88p-802,
     0x1.a798c947a364p-559, 0.0, 0x1.f77af8d743b13p-592, 0x1.a0f073ffc5d6cp-609,
     0x1.71ad38de89f54p-157, 0x1.94baf13e237efp-591, 0.0, 0x1.aace2cf2b8ea4p-130,
     0x1.f1ef455422b2bp-341, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.907bf92794ea4p-716,
     0x1.6beb42c016d81p-76, 0.0, 0.0, 0x1.2122b7aa89c76p-957, 0x1.254cd3d2a4645p-944,
     0x1.61b7da7240adcp-208, 0x1.6f8de9d7000d9p-882, 0x1.ca7c2541689f8p-543,
     0x1.a6aab145305e4p-358, 0.0, 0x1.49e3e8adef0b7p-839, 0x1.b30a8624651c6p-231,
     0x1.a4804927e6555p-974, 0.0, 0x1.321a62dfce416p-469, 0.0, 0x1.ecee6b30a2bc4p-446,
     0.0, 0.0, 0.0, 0x1.47f95fcf45265p-132, 0.0, 0x1.429b3ade27128p-481,
     0x1.28df26efb220ap-124, 0x1.31220f9c467b2p-681, 0.0, 0.0, 0x1.fc5eb7b8cce13p-435,
     0.0, 0.0, 0x1.4b4cbd011df82p-154, 0x1.a649755cbf7adp-87, 0.0, 0.0,
     0x1.901c8b85d61e2p-154, 0.0, 0x1.fd0d173973066p-793, 0.0, 0.0,
     0x1.23dfce66de3c1p-147, 0x1.ccb79c22ccb13p-38, 0x1.7df5840c76725p-857, 0.0,
     0x1.cee6694199ddfp-99, 0.0, 0x1.aa1b6e0033832p-285, 0.0, 0x1.1b0e6ed307fb2p-373,
     0x1.f7a3f15fabb8fp-550, 0x1.0f31b79b1fff2p-905, 0x1.3f9f157d4d495p-191,
     0x1.b5b0ceade0468p-669, 0.0, 0x1.715f6b2a863e2p-93, 0x1.af9908265c515p-478, 0.0,
     0.0, 0.0, 0.0, 0x1.eb0b4d058287dp-59, 0x1.c68c746d0a06p-987, 0.0, 0.0,
     0x1.5973862fbbd2ap-192, 0x1.3acfe07e73caep-240, 0x1.f09c25de2aee3p-23, 0.0, 0.0,
     0x1.2327c5cd54326p-873, 0x1.e36c2d016fb52p-822, 0x1.7eabaa47b9476p-858, 0.0, 0.0,
     0.0, 0x1.09758c4f03dffp-995, 0.0, 0x1.87fa3a87de819p-691, 0.0,
     0x1.fa055c59b568ap-274, 0x1.98fe47051bc69p-146, 0.0, 0x1.53c39d6d1ed3ep-980, 0.0,
     0.0, 0.0, 0.0, 0x1.a91e29d164635p-1016, 0x1.f372eafc5bf51p-993,
     0x1.b25da4d8db506p-794, 0.0, 0x1.32223b1d6ade1p-126, 0x1.6cc0258302e5ep-712, 0.0,
     0x1.04dab155a4876p-837, 0x1.75895204cec18p-496, 0.0, 0x1.6ee2cd8730acap-182, 0.0,
     0.0, 0x1.038d1153e1f19p-282, 0.0, 0.0, 0.0, 0.0, 0x1.3926f43832e0ap-2, 0.0,
     0x1.2a83272cb4f69p-336, 0.0, 0x1.c6c7f6bdb2c83p-712, 0x1.12d5d4f5581c6p-675,
     0x1.e5b625fa4382fp-90, 0x1.352a9d1ed4338p-33, 0x1.1031779b2ffb5p-90,
     0x1.0ab56755715f2p-125, 0x1.c51b861927d4dp-728, 0.0, 0x1.6d6a6403bd8b9p-166,
     0x1.79d14c6c8eb26p-510, 0.0, 0x1.9a490ada2ac48p-63, 0.0, 0.0,
     0x1.44dd83a921906p-380, 0x1.cd97e9fc3d5f3p-360, 0x1.d32688fcf2913p-359, 0.0,
     0x1.e9c1fa7beb477p-442, 0.0, 0.0, 0x1.ba2642f6fe1d7p-315, 0.0,
     0x1.41cd98b6db249p-537, 0x1.7eb6e3b92f976p-648, 0x1.1667d2194f78fp-661,
     0x1.ae713db6dd12bp-934, 0x1.858128100f51fp-372, 0x1.92f775a9269c1p-616,
     0x1.71c42f51876a5p-937, 0.0, 0x1.7e0e565fb957fp-983, 0.0, 0.0, 0.0,
     0x1.eb575901c109cp-328, 0.0, 0x1.58e5d0d5d0d0dp-223, 0x1.d94802dcde7a9p-411,
     0x1.5d35796e8261fp-653, 0.0, 0x1.4da5d376af3efp-813, 0x1.c42d5bf7d14e6p-26,
     0x1.579ed6811cf99p-169, 0.0, 0.0, 0.0, 0x1.dcdac407ffa3bp-373, 0.0,
     0x1.b50434e0d1be1p-736, 0.0, 0x1.6ca9b060481acp-992, 0.0, 0.0,
     0x1.0a2056ab65625p-340, 0.0, 0x1.65be198cf7d72p-460, 0x1.cf0da652e79fp-642,
     0x1.4c70414d14bb5p-583, 0.0, 0.0, 0.0, 0x1.35aedfd3d8cebp-769,
     0x1.bd61a9fd337aap-373, 0.0, 0.0, 0x1.7b7c79166dee7p-132, 0.0,
     0x1.4d1b84b5b8bdfp-939, 0.0, 0x1.f2bcc43d96f64p-490, 0x1.8ec1e0e3a704bp-825,
     0x1.ad24bfdcd84abp-448, 0x1.d9da45cb4bccp-731, 0x1.3c13f278a2e2bp-498, 0.0, 0.0,
     0.0, 0x1.9e67ab22666d3p-462, 0x1.6a76ffc952a27p-64, 0.0, 0x1.9102937303499p-514,
     0x1.08e0b14b2a927p-811, 0x1.71454158ab68bp-793, 0x1.031a039f8b4f2p-18, 0.0,
     0x1.83fffd563a98ap-143, 0x1.5689487eb3549p-669, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.082d5d5c65d8fp-477, 0x1.d71068bd58eb6p-770, 0x1.44e67e1bfb345p-248, 0.0,
     0x1.b66ef7485e4a3p-448, 0x1.113e8a288bee9p-1001, 0x1.5142abeb36fe9p-395, 0.0,
     0.0, 0.0, 0x1.ca5edc4161737p-261, 0.0, 0x1.ea049cb453c61p-995, 0.0,
     0x1.c313a6b7c1a43p-977, 0.0, 0.0, 0.0, 0x1.10154ef0a3f6cp-817,
     0x1.b2d33703eadb3p-597, 0x1.5c91fc0128e3dp-750, 0x1.f877410a9e2b5p-490,
     0x1.5e0365eca8e24p-241, 0.0, 0x1.0b1573c5fef09p-401, 0.0, 0.0,
     0x1.b4364553c5602p-409, 0.0, 0.0, 0.0, 0x1.b27c50b192aefp-81, 0.0,
     0x1.002e152f88108p-456, 0x1.282d516561b13p-45, 0.0, 0.0, 0.0,
     0x1.976aabd92a952p-620, 0x1.3b65abd89c6f7p-244, 0x1.ab46f05ddea69p-109,
     0x1.eadbacf89e685p-947, 0x1.f2d2b49dd7443p-464, 0x1.d531ce194e753p-232, 0.0, 0.0,
     0.0, 0x1.010868a7281d5p-628, 0.0, 0.0, 0x1.337a2d4f93608p-6,
     0x1.78b8ac7c61526p-328, 0x1.8d0a4d7983652p-774, 0x1.9907770789905p-533,
     0x1.d863d876e6109p-287, 0x1.ed742e5a2ea0ep-680, 0x1.83b9eec4df2adp-545, 0.0, 0.0,
     0x1.ed44131afeddp-237, 0x1.a416c96bf2228p-642, 0.0, 0.0, 0.0,
     0x1.28d94d0ff4fa7p-849, 0x1.9d0c98831ddfap-1020, 0x1.8fa3c1be5b3b9p-714,
     0x1.10bb8ea1e1589p-957, 0x1.5042ca17b0876p-10, 0.0, 0.0, 0.0,
     0x1.7dd9e9a13ac07p-283, 0.0, 0.0, 0.0, 0.0, 0x1.9d51ece7fdcc3p-300,
     0x1.6444ce3e282c4p-176, 0.0, 0x1.7de54e4ce8862p-625, 0x1.c19d87a862eb5p-800, 0.0,
     0.0, 0x1.a903ca231f7a2p-162, 0.0, 0x1.5efb64d885e22p-125, 0x1.93fa49151cfadp-287,
     0x1.7f9b3e5f11c81p-517, 0.0, 0x1.2b716d5854b7p-921, 0.0, 0x1.8f1833ab6bf4p-55,
     0x1.5a0726d6c7b6dp-490, 0.0, 0x1.f1a0c4710719fp-933, 0.0, 0.0, 0.0,
     0x1.aaf8ada25ffbap-410, 0x1.5a70f12ededa9p-640, 0x1.64f372acb9ba5p-548, 0.0,
     0x1.8c17d3e1d80a4p-421, 0.0, 0x1.23589d238e5f8p-72, 0.0, 0.0, 0.0,
     0x1.3d757eab339e2p-685, 0.0, 0.0, 0.0, 0.0, 0x1.d6c30751701a1p-30, 0.0,
     0x1.986aa86ce5d0bp-40, 0.0, 0x1.6744443ab37ep-413, 0.0, 0x1.1608bd38dd64ep-361,
     0.0, 0.0, 0x1.d1a104ff57148p-498, 0x1.17556d95eddf2p-5, 0.0,
     0x1.f7d3cd44d9e76p-299, 0x1.c2353f88de8e7p-127, 0x1.bb000aeddb563p-59,
     0x1.48f84985de094p-776, 0x1.49c0a89dc94eep-601, 0.0, 0x1.553cb367f8d0ep-111, 0.0,
     0x1.e6661017e486fp-103, 0x1.68059260ec6cfp-824, 0.0, 0x1.ce06d8fbfe651p-236, 0.0,
     0.0, 0x1.cd3bd38c9ca73p-752, 0.0, 0.0, 0x1.b6831960f4a8ep-384, 0.0, 0.0,
     0x1.0e3a506e0f0c8p-910, 0.0, 0x1.21d90e254f777p-287, 0.0, 0x1.0e00615da18fep-947,
     0x1.249e7b14e084dp-673, 0.0, 0x1.e9da6a9d89f8ep-811, 0.0, 0.0, 0.0,
     0x1.9eb85f925ee23p-442, 0.0, 0.0, 0x1.efa8e2b9c09b2p-925, 0.0,
     0x1.ed846b1743d05p-67, 0.0, 0x1.57737f953ed6cp-82, 0x1.c2702ef8c876dp-702, 0.0,
     0x1.5eae90534777p-926, 0.0, 0.0, 0x1.cd4ff85bdeb9fp-243, 0.0, 0.0, 0.0,
     0x1.8424a7638e7efp-864, 0.0, 0.0, 0.0, 0.0, 0x1.cc0f75beedb54p-195, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7b7c9c6b6c357p-18, 0x1.432549d187f0bp-772,
     0x1.d6bd3b49bc313p-634, 0.0, 0x1.03ca91e7e7063p-968, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e51602df383aap-694, 0x1.4e1594269a01cp-793, 0.0, 0.0, 0x1.fca4278fd0ca6p-522,
     0.0, 0x1.b58306ebce45ep-689, 0.0, 0x1.1da93efdb7b8cp-179, 0x1.3c57899d129e1p-190,
     0x1.c711ac70a7d43p-645, 0.0, 0x1.bbb39186d75fbp-815, 0.0, 0x1.21a3c08eb65d3p-610,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.249ff57bac316p-898, 0.0,
     0x1.bdf7d9dcdbd0bp-231, 0x1.b0f2174c1e099p-947, 0x1.a41bfb5f9b174p-721,
     0x1.b960c4ee0baf4p-879, 0x1.4fb652ef10349p-427, 0.0, 0.0, 0x1.dc55d599b724p-356,
     0x1.7dbfad714592dp-739, 0.0, 0x1.40a040405c6c2p-541, 0x1.a17e2c733f84fp-444, 0.0,
     0x1.1f9c04845ca06p-322, 0x1.cb2a8fe72d452p-471, 0x1.40dc53bf9d3ebp-585,
     0x1.835d924990c76p-62, 0x1.7897dec30afd9p-967, 0x1.930279590fa74p-960,
     0x1.b9371c633db4p-951, 0x1.e03d1cd732ec4p-230, 0x1.456e9b190b215p-31, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5fa3ad98e9691p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a2c3dc595fe8bp-296, 0.0, 0.0, 0x1.2deafec76b75ap-308, 0x1.6b4068e814063p-375,
     0.0, 0x1.cce2b82aaf042p-485, 0x1.ef72c42bcbe24p-984, 0x1.a60ee8bb5fd5bp-859, 0.0,
     0.0, 0x1.f5d5349f5c91bp-900, 0x1.d3f5bfad0b28ep-63, 0x1.35b57166d9c46p-740,
     0x1.87868ce5a6ebfp-401, 0x1.9959f5375b679p-838, 0x1.00592946b1d0bp-699, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a360b214355f2p-476, 0.0, 0x1.3fc639e85b62bp-49, 0.0,
     0x1.daf85ec5bb78ap-904, 0x1.105f9904a611fp-243, 0x1.b41c2c872eaebp-141, 0.0,
     0x1.c862c5bafe71ap-277, 0.0, 0.0, 0x1.b6a682137d8b5p-64, 0.0,
     0x1.8dddee67429b4p-956, 0x1.6d9d674797fb3p-820, 0x1.0fb75531b1882p-752,
     0x1.f076b1564a752p-337, 0x1.bfa761ea0eebap-361, 0x1.2443074c13a72p-613, 0.0, 0.0,
     0.0, 0.0, 0x1.d1c3ad8fd08d3p-1017, 0x1.d4dd056b5cd2ap-988, 0.0,
     0x1.194a97667611ep-531, 0.0, 0x1.2cabf5302de09p-96, 0.0, 0.0, 0.0,
     0x1.5d09dd1099b6dp-949, 0.0, 0x1.1fb26546a0f66p-1020, 0.0, 0.0, 0.0,
     0x1.4316904bd231p-2, 0x1.74aafbe1796a4p-426, 0x1.fba8a836379cap-823,
     0x1.138b65f890b56p-212, 0.0, 0.0, 0.0, 0x1.f49eb5bacd688p-781, 0.0,
     0x1.3ee0ba4ef71e2p-860, 0x1.b0aaef02dfc2bp-103, 0x1.1563ea45e97e8p-200, 0.0,
     0x1.128b142713bc5p-777, 0x1.2625945de49bp-242, 0x1.6e4c41f5ef4b1p-478, 0.0,
     0x1.b5064a096ea9ep-221, 0.0, 0.0, 0.0, 0.0, 0x1.cf014678260c6p-911,
     0x1.ca5576499ff77p-80, 0x1.67fe90ee4b8e6p-589, 0x1.c0a9be34bd287p-765,
     0x1.2846abdd6ea31p-274, 0x1.fdca1a4d4f2bcp-718, 0.0, 0x1.5480d12cc70e6p-673, 0.0,
     0.0, 0.0, 0x1.2b36d001601cbp-645, 0.0, 0.0, 0.0, 0x1.b5ed841d719c8p-317,
     0x1.46921ff7e622ep-557, 0x1.e4aea044dfb29p-648, 0.0, 0x1.ce165a228aa3ap-834,
     0x1.1c998ca525021p-473, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fce4f4948fc7p-409,
     0x1.40d88e4034d7ep-695, 0x1.31d0e2efd3fccp-370, 0x1.e6ca4cc8e63f5p-460,
     0x1.b94b58e6e5406p-307, 0x1.a1ab677486cf5p-966, 0.0, 0x1.8e6a5be591564p-406, 0.0,
     0.0, 0x1.f4806ad814a73p-195, 0.0, 0x1.d08e993141526p-619, 0.0, 0.0,
     0x1.823f7ed08ce94p-1022, 0x1.78750d3d354e9p-552, 0x1.c3b8ceb8a155bp-625, 0.0,
     0.0, 0x1.25082cc53faf7p-43, 0.0, 0x1.d370d5b356422p-183, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.05efcb3e0c261p-115, 0x1.6ec086ddc832bp-176, 0.0, 0.0,
     0x1.cb2ea4200c4c4p-454, 0x1.f3eb530b1b706p-367, 0x1.8d5ea257d4b1cp-238, 0.0, 0.0,
     0.0, 0.0, 0x1.090fc8aa245b4p-434, 0x1.8e7a36c30b1d4p-181, 0.0, 0.0, 0.0,
     0x1.bf83ce1c37237p-769, 0.0, 0.0, 0x1.0bc19124cf6f7p-721, 0.0,
     0x1.c2de01e40d3bep-436, 0x1.f2e4f9e7da6dbp-304, 0.0, 0x1.a330f70b0520dp-794, 0.0,
     0x1.8711e612d23e8p-4, 0x1.fa6db3cf2b5e4p-144, 0.0, 0.0, 0x1.87bcba648f1p-91,
     0x1.fb72fb370a134p-469, 0.0, 0x1.38f422d051939p-438, 0x1.3de4e7c6b4f4p-494, 0.0,
     0.0, 0x1.79de8c6618703p-698, 0x1.de811da93a3c8p-579, 0x1.3b811dd83ffedp-970,
     0x1.e11184075b574p-672, 0x1.a22d4191bca0ap-722, 0.0, 0.0, 0x1.abfa39a2992dep-252,
     0x1.64ec3a8140a4ep-582, 0.0, 0x1.a3dddd8194d6bp-403, 0x1.d632711b47a96p-105,
     0x1.fba630eb00985p-124, 0.0, 0.0, 0.0, 0.0, 0x1.c7cdf9727e9e3p-913, 0.0, 0.0,
     0x1.c79e00fdccbe5p-12, 0.0, 0x1.9a4417dda4411p-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.67700014bb009p-673, 0.0, 0.0, 0.0, 0.0, 0x1.c7db8d8619e8p-460,
     0x1.8fc255aae1a04p-328, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_log10d4_u10kvx(tmp0);
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
    printf("Sleef_finz_log10d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log10d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
