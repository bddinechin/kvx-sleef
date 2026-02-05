/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd1_u10purecfma.c --function \
 *     Sleef_sincosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
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
     0.0, 0.0, 0.0, 0x1.789d2b34e739ap-349, 0.0, 0x1.f9201134edda7p-708, 0.0,
     0x1.60c6e0be3fc14p-246, 0.0, 0.0, 0.0, 0.0, 0x1.5aeccb409755p-709, 0.0,
     0x1.f2ccbc3f23925p-362, 0.0, 0.0, 0x1.c5222ff165f48p-34, 0x1.bfd95e94beffbp-1002,
     0x1.02ec287ce0697p-534, 0x1.e4b66df3324a5p-138, 0.0, 0x1.8c5d29969f45ap-532,
     0x1.df93f58fe080dp-388, 0x1.9aff51e0bd0efp-662, 0x1.cad8b6f36b91ap-940,
     0x1.960aa04ddd45p-587, 0x1.31ceca7228365p-998, 0.0, 0.0, 0.0, 0.0,
     0x1.71b3da5acc18dp-842, 0x1.76336d5190c53p-856, 0.0, 0x1.fbc3e419214d8p-1016,
     0.0, 0x1.a4a67c11abc32p-49, 0.0, 0x1.2736a70d4f7eep-200, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.34a03d00bf516p-536, 0.0, 0x1.e91caca7387abp-438, 0.0, 0x1.e30f3d1114a07p-118,
     0.0, 0x1.15d0f7c6e3a99p-624, 0.0, 0.0, 0.0, 0x1.37d229a1bd035p-262,
     0x1.0aa077427db45p-975, 0x1.357f3a1d5c42ap-95, 0.0, 0.0, 0x1.e1e49363a540fp-900,
     0.0, 0.0, 0.0, 0x1.8133da800b692p-638, 0.0, 0x1.9f3f65f50f76ap-1015,
     0x1.1a980578cc99cp-503, 0.0, 0.0, 0.0, 0x1.e41befe37caeep-390,
     0x1.3fd3aed846d2fp-628, 0x1.9d2529b2f7e91p-796, 0x1.32cc85269f959p-712,
     0x1.f0c78d6b846ap-452, 0x1.782b8bb7bef2fp-210, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f5ffb9eaad66p-362, 0.0, 0x1.01a051b2ae027p-757, 0x1.b201958dd6fbap-376,
     0x1.54639f11d0bcap-912, 0x1.5a006e8982637p-424, 0x1.7f0ee0365ea16p-365,
     0x1.64a08daf8f519p-999, 0x1.f68a10fed0465p-621, 0.0, 0x1.434451a91f4d1p-515, 0.0,
     0x1.1773b572423bp-347, 0x1.9616ec976ebd2p-544, 0.0, 0x1.c27798df69713p-617, 0.0,
     0.0, 0x1.256b85a84f8d8p-886, 0.0, 0x1.9d36f5ba35553p-909, 0x1.068f6e2a0846fp-599,
     0.0, 0x1.b477f6c51be8fp-210, 0.0, 0.0, 0x1.951e83d10354dp-1015, 0.0,
     0x1.40287466e7b16p-837, 0x1.f960d719698f9p-974, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cea16fa755352p-137, 0.0, 0.0, 0.0, 0x1.d2e6f81a94dep-852, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.426f42f9222d5p-92, 0.0, 0.0, 0.0, 0x1.d54f04c6147e9p-820,
     0x1.116293c7c2dbdp-804, 0x1.be6c26cb32b92p-734, 0.0, 0x1.792d0433fa99bp-768,
     0x1.815a099c0056ap-762, 0.0, 0.0, 0.0, 0.0, 0x1.c12bfe3fe037fp-669,
     0x1.929b5cf34f5f9p-147, 0x1.2efedffc124d1p-276, 0.0, 0x1.4fcd1083a033ep-731, 0.0,
     0x1.b220053d39ffp-183, 0.0, 0.0, 0x1.beff579e4583ep-580, 0.0, 0.0, 0.0,
     0x1.56899aafbd702p-92, 0x1.338bc41fdc559p-402, 0x1.75a3afbaee506p-384,
     0x1.216898d0e2d13p-777, 0x1.e3e6fe43f5953p-840, 0.0, 0x1.0eed96c8eb8c5p-458, 0.0,
     0x1.e72d655d95db4p-37, 0.0, 0.0, 0.0, 0x1.433cf380b5c29p-165,
     0x1.a614ac5f5ad9ep-603, 0x1.6779715f838fep-948, 0.0, 0x1.82c4cf119e356p-646,
     0x1.745b8185e8574p-371, 0.0, 0.0, 0x1.e80bee4b9478p-687, 0.0,
     0x1.e7209c172acb3p-765, 0x1.c97184c1fb8c7p-5, 0x1.24e2bdb610112p-652,
     0x1.c326bea83aabdp-123, 0.0, 0x1.dc302004af8e1p-442, 0x1.634cf2935ed05p-178, 0.0,
     0x1.1fef317a126ep-384, 0.0, 0x1.730f4aabc3b79p-728, 0.0, 0x1.c2b3f30ebac2bp-953,
     0x1.7be8996ad6005p-696, 0x1.a7ca5c743dd04p-662, 0x1.78922a93b4fa5p-756,
     0x1.e0631e08537b3p-46, 0.0, 0x1.976f5bb8e04ecp-739, 0x1.da91e225ed96ep-15, 0.0,
     0.0, 0x1.408f9d6bf9e4fp-152, 0x1.690a676018712p-753, 0x1.f7a2f0f05c7dep-354, 0.0,
     0x1.110866ccd0352p-132, 0.0, 0x1.9009a879a0dddp-724, 0x1.53b0239f452a4p-208,
     0x1.272bcbc4b27f6p-33, 0.0, 0x1.1613db254f38bp-599, 0x1.f1b755235887cp-270, 0.0,
     0.0, 0.0, 0x1.aeabec60bf678p-524, 0x1.5e2645212329ap-996, 0.0,
     0x1.b267f94f7ba6fp-826, 0x1.4940cfd86046fp-995, 0.0, 0.0, 0x1.98d6649c70375p-840,
     0.0, 0.0, 0.0, 0.0, 0x1.de136ba969456p-662, 0x1.595396f526296p-117,
     0x1.93ce0fb2710edp-761, 0x1.7f524d722b4cep-509, 0.0, 0.0, 0x1.c428d1bb21dc5p-526,
     0x1.b51d50f12ce9ep-696, 0.0, 0.0, 0.0, 0.0, 0x1.db15c1546d0a6p-355,
     0x1.9dfc54c28a7edp-384, 0.0, 0.0, 0.0, 0x1.7f4d072c4a508p-914,
     0x1.54de892676301p-599, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0c002eb9ec0fp-901,
     0.0, 0x1.e3c14f3c7cde4p-973, 0.0, 0x1.841a131648a14p-955, 0x1.6c75d2b9e321p-465,
     0x1.6faac31467478p-477, 0.0, 0x1.389c91e2b1721p-893, 0.0, 0x1.1894a365f9e82p-428,
     0x1.5c5bfbb0c888fp-153, 0.0, 0.0, 0.0, 0x1.397bd49e1a461p-824,
     0x1.afb79d7066a33p-985, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e6720f9d105b2p-303,
     0x1.4c74fa7e50ecep-243, 0.0, 0.0, 0x1.5892d94d4c6cp-982, 0.0,
     0x1.fe6db370bd6bfp-435, 0x1.64b3da177c974p-741, 0.0, 0x1.e8e3049b8ebd4p-282, 0.0,
     0.0, 0x1.1a19ce134b8c1p-920, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c9692aea01a9p-329, 0.0, 0.0, 0x1.dc4c3ef2a75a8p-108, 0.0,
     0x1.15776febddab3p-502, 0.0, 0.0, 0x1.825710686ebcp-40, 0.0,
     0x1.a91a0772b8e22p-992, 0.0, 0x1.cb6c19e6e188p-549, 0.0, 0.0,
     0x1.f9155f468d387p-880, 0x1.f7faaf3b1db03p-248, 0x1.0d2914bbb258ep-930,
     0x1.267c5c5a7ffddp-423, 0x1.2195ee6243b02p-112, 0x1.94eb649e38f9ep-10, 0.0,
     0x1.2f2a293bbc74cp-657, 0x1.de45e99865d3ep-981, 0.0, 0.0, 0x1.2c8f8d97d2256p-639,
     0x1.fce7bb09fc62dp-367, 0.0, 0x1.d295892a104bap-867, 0.0, 0.0,
     0x1.c9139f8505b56p-958, 0.0, 0x1.20b6e2225ab4ep-84, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e255d86fbc067p-427, 0.0, 0.0, 0.0, 0.0, 0x1.656c2c327a2dep-188,
     0x1.370f1bbf75a6ep-391, 0x1.545d0836cdd2dp-693, 0x1.f394cf2f64771p-987, 0.0, 0.0,
     0x1.aab1e20f72686p-971, 0x1.af8984b579183p-538, 0.0, 0x1.5cd226116553ep-191, 0.0,
     0x1.01b40754f0689p-380, 0x1.2efe62be920f2p-295, 0.0, 0.0, 0x1.ec6bdff6be852p-510,
     0x1.dd1e2aa63bfcp-293, 0x1.46ce1b5aac35bp-294, 0.0, 0x1.c815db33be081p-832, 0.0,
     0x1.2e65fa960067ep-200, 0x1.30e0707d52082p-622, 0x1.7470a5395b048p-229, 0.0,
     0x1.8f14468ddeeb3p-683, 0.0, 0.0, 0x1.c43fac760e2f8p-91, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5071883ba2007p-323, 0.0, 0.0, 0.0, 0.0, 0x1.c4e06f715ef52p-730,
     0x1.75fbd68fe696bp-210, 0x1.80bfb5cfb76c3p-575, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.85794db374224p-197, 0x1.536760458a3aep-862, 0x1.5c8bb1f9d0ec5p-392,
     0x1.4ad85621b0513p-478, 0.0, 0x1.62bdf4e75104cp-524, 0x1.aa0d1d47f037p-666,
     0x1.46d42f9bcc713p-159, 0x1.19ab0af8ac909p-419, 0.0, 0x1.33e8bda8e2318p-110,
     0x1.374e8985fe125p-116, 0x1.650943fcfe626p-731, 0.0, 0x1.62b587c9ad0dfp-423,
     0x1.fdd1bbab6dfdbp-554, 0.0, 0x1.c8452f440de41p-927, 0x1.a1a141b6172c8p-921, 0.0,
     0x1.6eed451073b24p-577, 0.0, 0x1.83ffb7f80bfaap-390, 0x1.ddab9610dcc78p-505, 0.0,
     0.0, 0.0, 0x1.3647873c2d78ap-759, 0.0, 0x1.c976b23703d7fp-524, 0.0, 0.0, 0.0,
     0x1.63c591adfb2d5p-62, 0x1.25fec00544bf4p-316, 0.0, 0.0, 0.0,
     0x1.8d726a79f5e7dp-638, 0x1.4de498761f673p-307, 0.0, 0x1.509fcf886683bp-754, 0.0,
     0x1.1b5a831ae28c8p-289, 0.0, 0x1.15580dfb01d09p-767, 0.0, 0.0, 0.0, 0.0,
     0x1.83707f49b80aap-653, 0x1.9dfc5c0e02b5ep-950, 0x1.5d2819f039873p-666, 0.0,
     0x1.73683a4639f56p-443, 0.0, 0.0, 0x1.259a0790f3bebp-309, 0x1.6d405dfaa4eap-724,
     0x1.03326a37a3accp-171, 0x1.061a766321429p-494, 0x1.ad32ab8bef3b9p-448,
     0x1.1c638ea4d7408p-622, 0x1.881f4fd8c0294p-891, 0x1.73c0118606001p-619,
     0x1.173e117784832p-746, 0.0, 0x1.be443338c8079p-802, 0x1.309eb05bf3fe3p-504, 0.0,
     0x1.fa1cddc7480dep-992, 0.0, 0x1.1fbb5dad6c9bdp-115, 0x1.150ea830d9d08p-402, 0.0,
     0x1.5a6e0f5174489p-1019, 0.0, 0.0, 0x1.7e0bd04acd52bp-885,
     0x1.711e11f366c1ep-130, 0x1.4cb7b584f4953p-924, 0.0, 0.0, 0.0,
     0x1.7695817bc5815p-460, 0.0, 0x1.76c5441836545p-111, 0x1.50bd982bd90cbp-901, 0.0,
     0x1.bc0a6250639e7p-707, 0.0, 0.0, 0x1.cda5c3e94dfcbp-804, 0.0, 0.0,
     0x1.e9301b8e1727fp-162, 0.0, 0x1.6e695531ca6ep-316, 0x1.f03f2ab43b244p-524, 0.0,
     0x1.606460052bb18p-794, 0x1.8b8caf6bc6aefp-222, 0x1.a6982ff9dcdcep-481, 0.0, 0.0,
     0.0, 0x1.5d42c17314eep-543, 0x1.af55f8a82cc7bp-616, 0.0, 0.0,
     0x1.e024e9bbe9478p-505, 0x1.8acdcebee6632p-971, 0x1.6df5809cd6076p-974, 0.0,
     0x1.3d64009f6a90fp-204, 0.0, 0x1.ed35403e1e33fp-604, 0x1.41863459f5a7ep-542, 0.0,
     0.0, 0x1.4cdc72b2e9cacp-449, 0x1.7dd9a1c69504dp-797, 0.0, 0x1.cc0ddaf4c2251p-717,
     0x1.286ba6e6418cap-614, 0x1.63b2ab5b48bbfp-992, 0x1.cf9a7b3a840aep-516,
     0x1.e54aaa5ba9b2cp-864, 0.0, 0x1.3ee22fab354e2p-234, 0.0, 0x1.c0bb9858a1ed8p-551,
     0.0, 0x1.bd61b459af0c4p-731, 0.0, 0x1.8bec43c1efebep-832, 0.0, 0.0, 0.0,
     0x1.079c952b46c2ep-462, 0x1.e99a0f984f777p-18, 0.0, 0x1.0d91bae59478bp-149,
     0x1.4792a558f5a3fp-381, 0.0, 0x1.ce81f8ef7eb65p-920, 0x1.81ec2d3e95192p-467, 0.0,
     0x1.116d20d4ab30fp-454, 0.0, 0x1.9c71d84239c08p-214, 0.0, 0x1.cc63f42427694p-770,
     0x1.153b9fc448b83p-902, 0.0, 0x1.8f33b8089515bp-675, 0.0, 0.0,
     0x1.4a7ed732b95b4p-176, 0x1.355053d06e1fp-433, 0.0, 0.0, 0.0, 0.0,
     0x1.a0fba2487fa66p-320, 0.0, 0x1.06eb305eebcdp-455, 0.0, 0x1.9057c8cb99056p-777,
     0.0, 0x1.201c0b30640f3p-586, 0x1.65a394d9105b4p-404, 0.0, 0x1.deef16673e84p-455,
     0x1.48c8a9b71a99fp-462, 0x1.57472982e2e06p-138, 0.0, 0x1.bd5a6c46cd1dep-413,
     0x1.aca8d430a3c5dp-514, 0.0, 0x1.5d0f0f4997542p-521, 0.0, 0x1.4df64c58c8ba1p-749,
     0.0, 0x1.247a23adc2e82p-483, 0.0, 0.0, 0x1.1e0ea57836346p-421, 0.0, 0.0,
     0x1.65fe04879434bp-630, 0.0, 0x1.cf3e0da1e88dap-570, 0.0, 0.0,
     0x1.b9f14d248342fp-662, 0x1.fe4f13b2ccb1cp-577, 0x1.c1b2471ccd47fp-621,
     0x1.f85458cf74632p-644, 0.0, 0x1.a398d559f3f8ap-1, 0.0, 0.0,
     0x1.05b2fb23d7fe5p-67, 0.0, 0.0, 0x1.5f68f9c6972abp-228, 0x1.48ffebd41e922p-141,
     0x1.9cd8afb0b846dp-142, 0.0, 0x1.04918c7a9d498p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.803b4906aafbep-420, 0.0, 0.0, 0x1.34ed3712d7d81p-151, 0x1.9ffe889a1f699p-420,
     0.0, 0.0, 0.0, 0.0, 0x1.09f7460ac9157p-232, 0.0, 0.0, 0x1.b9f5e95a9a184p-966,
     0.0, 0x1.0dfc5304b616p-376, 0.0, 0x1.7dbfce053718ep-707, 0x1.bb32c7e35b85fp-340,
     0.0, 0x1.c7aff6840c616p-457, 0x1.7238ea59f04efp-916, 0x1.24b90f76f0969p-226, 0.0,
     0x1.4c705b80eaca6p-775, 0x1.9085e2229ce29p-640, 0.0, 0x1.7c7163dc4a636p-387, 0.0,
     0x1.ae3d8ffe9e781p-480, 0x1.662fdc6bcce2ap-967, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5aac0aa16770ap-157, 0x1.0f050f3677bd3p-77, 0.0, 0x1.ba74d4915fe72p-24, 0.0,
     0x1.6193683fea125p-665, 0x1.d39e601628473p-889, 0.0, 0x1.86b7a677cbda5p-785, 0.0,
     0x1.a29c038c95052p-451, 0.0, 0x1.9a0d1ac114fcfp-384, 0.0, 0x1.235bcfe6963b8p-869,
     0x1.8312bbd56d3dap-539, 0.0, 0.0, 0x1.a9bc4cd33d6b8p-287, 0x1.3c315ef052d98p-702,
     0x1.a0fda47fe719cp-12, 0.0, 0x1.8829bbf2d8efbp-736, 0x1.d652963693205p-508, 0.0,
     0.0, 0x1.f9fe775c22663p-255, 0.0, 0.0, 0.0, 0x1.cf6deb2c122d2p-883, 0.0,
     0x1.56fc9c5e4accp-1002, 0.0, 0x1.9730a3c25f336p-621, 0x1.f0aeab29d6821p-614, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0524cfeb2fc6fp-975, 0x1.c0d14e4cf95a5p-707, 0.0,
     0x1.15c7b06f1727cp-714, 0x1.8e7d6b14b6ce7p-26, 0x1.302ace02e3c61p-999, 0.0,
     0x1.03eb1ca33ecp-648, 0.0, 0.0, 0x1.ceb41b7dc222bp-846, 0.0, 0.0,
     0x1.4a28281384ee9p-923, 0x1.eafbe5c24a3b6p-895, 0x1.a5c902c330b7ep-428, 0.0, 0.0,
     0x1.3cc2d612dfda3p-727, 0x1.74896eda28b38p-440, 0.0, 0x1.18f89374df219p-337,
     0x1.aa1c4c2f9b103p-709, 0x1.160574b36c505p-55, 0x1.d5abd8c973abep-324, 0.0, 0.0,
     0x1.845fba013efbdp-48, 0x1.e1c4b28113b05p-397, 0.0, 0x1.479ec7920d05bp-785,
     0x1.631d4023105dep-291, 0.0, 0.0, 0.0, 0x1.542af725a3f83p-707, 0.0,
     0x1.1a5fcc53410abp-875, 0x1.bb39f3b8f5749p-434, 0.0, 0x1.3692c1abbb0cap-122,
     0x1.9bc6395c433bp-921, 0.0, 0.0, 0.0, 0.0, 0x1.093478abeb579p-314, 0.0,
     0x1.ecafaf9233f95p-252, 0x1.bfe63ed4ec112p-732, 0x1.262927edfc265p-503,
     0x1.515629d1ad13dp-6, 0.0, 0.0, 0x1.e096730f17656p-763, 0x1.b41a0da7f0ee8p-391,
     0x1.e7d49d2fb59afp-85, 0x1.617f7e52fa45p-574, 0.0, 0.0, 0x1.408f2e4320231p-689,
     0.0, 0.0, 0x1.93b4246ef4632p-760, 0x1.325b500571224p-59, 0x1.dc1b67a39f04p-997,
     0.0, 0x1.eab9a12adf099p-334, 0.0, 0.0, 0x1.12805cda8a72dp-977, 0.0, 0.0,
     0x1.23236be7d86cdp-594, 0x1.162ab1afad69ep-146, 0.0, 0x1.ecd79f193daa9p-596,
     0x1.443c0fbada934p-780, 0.0, 0x1.7d2e14e255106p-480, 0.0, 0.0,
     0x1.6de61df827f5fp-515, 0x1.a009681671575p-16, 0x1.d66e94e04e48fp-168, 0.0, 0.0,
     0x1.fc075765ec39cp-557, 0x1.de0433e7ef0b8p-864, 0.0, 0x1.f4bc70b94933dp-943, 0.0,
     0x1.4c98f719cb1ffp-792, 0x1.f8eacef5369eep-789, 0x1.cfe150aab636ap-832, 0.0,
     0x1.6285f05fff2c2p-796, 0x1.ed07059e6e1fbp-484, 0x1.be1dcf4a37ba2p-89, 0.0, 0.0,
     0x1.276b5bee1e41cp-278, 0.0, 0x1.1be157f785f58p-287, 0x1.ea26fac25fa54p-215,
     0x1.028bfc00f4e8ep-961, 0x1.dd84138475d72p-364, 0x1.58c2f7fa66b35p-170, 0.0,
     0x1.12224696b2504p-294, 0x1.fcbf2f036a876p-751, 0.0, 0x1.d3195dd1c87cep-989, 0.0,
     0.0, 0x1.559dafd8614a5p-877, 0.0, 0x1.3b8be6c3cb35p-643, 0x1.996077a9eab92p-995,
     0x1.8dda9a7c9e3e1p-557, 0x1.a5d4297d4e71ap-11, 0x1.7264f26b525aap-380, 0.0, 0.0,
     0.0, 0.0, 0x1.1f30994321622p-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9267d07087dfp-710,
     0.0, 0.0, 0x1.44171c7634391p-944, 0.0, 0.0, 0x1.20a27ac0fca68p-924, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0ceeb7e74d0fp-573, 0x1.c82eeb954411p-680,
     0x1.8936b26080eb8p-1019, 0x1.f7baef088aa66p-518, 0.0, 0.0, 0x1.297f9b8935dep-62,
     0x1.d1176f5e86b69p-458, 0.0, 0.0, 0x1.40e0deea68165p-708, 0x1p0,
     0x1.830638436da2bp-929, 0x1.977f3c8bcab32p-757, 0.0, 0x1.066fe81a5da04p-658, 0.0,
     0x1.7c8f188ba504fp-344, 0x1.edfed3e8f0201p-664, 0x1.b42fa140ae8ebp-944, 0.0, 0.0,
     0x1.f5840c6ce083fp-422, 0x1.af614235c393ep-911, 0.0, 0x1.20b86274d0394p-9, 0.0,
     0x1.cf906f83bbbafp-103, 0x1.0d020b71a1d97p-154, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3318bb0f8f73ep-714, 0x1.570c81c2d25d5p-298, 0.0, 0.0, 0.0,
     0x1.79f6632fa24fbp-538, 0x1.5d2048f930e0ap-231, 0.0, 0x1.db0b8858fca28p-960, 0.0,
     0.0, 0.0, 0x1.d0d31b5b0b4fbp-591, 0.0, 0.0, 0.0, 0.0, 0x1.c71442cf3aedap-756,
     0x1.07f8e8d1990b6p-300, 0x1.30c6dd06b76d7p-507, 0x1.f6c779bf684bep-868, 0.0, 0.0,
     0.0, 0x1.8654c3dd1f024p-521, 0x1.f123907e80b37p-458, 0x1.4de0444ae35eep-459, 0.0,
     0x1.81430db530253p-790, 0x1.20f637d70cd1ep-204, 0x1.6dcf2d76e9919p-55, 0.0,
     0x1.fdb31f9f7a7ecp-92, 0.0, 0x1.c6bcf87ecf434p-582, 0.0, 0.0,
     0x1.a3957ac3371c2p-930, 0x1.518fe1d86ac82p-998, 0.0, 0x1.fa2664d0c2e08p-476,
     0x1.30ff204915652p-658, 0.0, 0x1.2780151f70eb4p-654, 0.0, 0.0,
     0x1.cc943cfb1d35dp-169, 0x1.90054f3e9ebcfp-82, 0x1.b143bf7c22136p-363,
     0x1.e2d2e10cf861p-161, 0x1.20153d1dbd249p-960, 0x1.cd0778f27db55p-662,
     0x1.e920d0470345cp-310, 0x1.ae8a21a55026ep-808, 0.0, 0.0, 0x1.288ba87ef173dp-159,
     0.0, 0x1.316666a5e4435p-972, 0x1.2657d41161b54p-587, 0.0, 0.0,
     0x1.a1e005f3c0aa9p-500, 0x1.50461d287c561p-923, 0.0, 0x1.339333781554dp-218,
     0x1.4ed03add1b171p-978, 0x1.46a5bc60ada44p-105, 0x1.12e647b3bbcap-749,
     0x1.327f249fc4048p-270, 0x1.31d0150a4599ep-129, 0x1.5df49d551aa48p-775,
     0x1.53f95b7ce22bep-948, 0.0, 0x1.9e2421d674c85p-161, 0.0, 0.0,
     0x1.ac52951790aafp-973, 0.0, 0.0, 0x1.f670a0a73daf6p-864, 0.0, 0.0, 0.0,
     0x1.19ed142637ad3p-655, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5dfe271686b0ap-904, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.20f97c5fe2c81p-314, 0.0, 0.0, 0x1.e009abbc2dd0ap-619,
     0x1.87132f3a5bcf6p-813, 0x1.536b63089111ap-997, 0x1.1089f845d027p-923,
     0x1.6d70984766452p-150, 0x1.39836129267bbp-242, 0.0, 0.0, 0.0,
     0x1.4a9bd29bf5654p-209, 0x1.43c68efd79054p-431, 0.0, 0x1.be7ef84d13c2cp-814, 0.0,
     0.0, 0x1.051a7ef3824aep-643, 0.0, 0.0, 0.0, 0x1.21f4057f6c9f5p-296,
     0x1.85a71c7100fb4p-395, 0x1.7d963e81be148p-316, 0x1.07206b31f5336p-661,
     0x1.ba42fe6933709p-622, 0x1.f3f8ec53e29a8p-36, 0.0, 0.0, 0x1.f0f091ede3273p-1018,
     0.0, 0.0, 0.0, 0x1.d9e544bfd6371p-475, 0x1.4ff3dc24531fdp-457,
     0x1.106e6b683ac48p-611, 0.0, 0x1.68130d1f49bfep-897, 0x1.ce08ac1b7b998p-1006,
     0.0, 0.0, 0.0
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
            tmp1 = Sleef_sincosd1_u10purecfma(tmp0);
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
    printf("Sleef_sincosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sincosd1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
