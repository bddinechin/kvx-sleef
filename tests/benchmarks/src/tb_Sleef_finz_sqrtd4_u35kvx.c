/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd4_u35kvx.c --function \
 *     Sleef_finz_sqrtd4_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.c22143b31b8d9p-447, 0x1.9466bb4b1f331p-986, 0.0, 0x1.c15534cdd5732p-623,
     0.0, 0.0, 0.0, 0.0, 0x1.ffbe066a0d3cdp-483, 0x1.eeada0e673976p-160,
     0x1.d91a267d58c88p-845, 0x1.f3f9af3e7cd8fp-111, 0.0, 0x1.4d94eea498229p-433,
     0x1.e4e4be1be31e1p-180, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c524df54bf97ep-441,
     0.0, 0.0, 0.0, 0.0, 0x1.226ded9ac2379p-920, 0.0, 0x1.160d976448d24p-503, 0.0,
     0.0, 0.0, 0x1.5eb3e7dda2585p-588, 0.0, 0.0, 0.0, 0x1.2184f388af4e4p-262, 0.0,
     0x1.ce8a8cde9d246p-959, 0x1.b43fe92f12f0dp-415, 0.0, 0x1.c9125bfab7923p-301,
     0x1.c62240e91f845p-326, 0x1.399a0709d6d2fp-525, 0.0, 0.0, 0.0, 0.0,
     0x1.2023db7ef7141p-645, 0.0, 0.0, 0x1.00ac9e0c975a3p-440, 0x1.156c872d3c3cep-245,
     0x1.dcc78cd20fd7ep-232, 0.0, 0x1.5d13e0c8a454cp-25, 0.0, 0x1.0120f85436456p-87,
     0.0, 0x1.7bf3e31f12f11p-27, 0x1.376868283ed23p-317, 0.0, 0x1.01faafe5971bfp-18,
     0x1.194409799383bp-604, 0.0, 0.0, 0.0, 0.0, 0x1.65f23c83f81e9p-59,
     0x1.48c293b4f9f85p-769, 0.0, 0x1.7888c88a190b1p-94, 0.0, 0x1.77e8407f1eaafp-756,
     0.0, 0.0, 0.0, 0.0, 0x1.8d6d0616c1b4dp-123, 0.0, 0x1.6a25033740904p-588,
     0x1.80045ad33cbf6p-471, 0.0, 0x1.ad8eef6fdb1b1p-628, 0.0, 0x1.ba4a4c0e8fec5p-86,
     0.0, 0x1.648070cda3659p-516, 0.0, 0.0, 0x1.75250a5c98ebdp-656, 0.0, 0.0, 0.0,
     0.0, 0x1.f0296fa1f5761p-468, 0x1.a61a6b3a0013ep-136, 0.0, 0x1.4d4fe2200aa1cp-831,
     0x1.4384cd5b1c729p-817, 0.0, 0.0, 0x1.3d25b4517a1dep-966, 0x1.5c5b248b7cddp-764,
     0.0, 0x1.1076e770f9984p-112, 0.0, 0x1.bfeb8afca7e39p-542, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cedf229cfca87p-290, 0x1.b5980431d2b4bp-248,
     0x1.c78c62d8900c2p-424, 0x1.11781e234149fp-421, 0.0, 0x1.86117613be794p-711,
     0x1.459631be90923p-356, 0.0, 0.0, 0x1.b002dcdeb33cp-459, 0.0, 0.0, 0.0,
     0x1.5f651ef95c8dcp-132, 0.0, 0x1.1831643a60bacp-485, 0.0, 0x1.b438b449e80a2p-316,
     0.0, 0.0, 0x1.d903de12cf5aep-873, 0.0, 0x1.c3f591f784e02p-6,
     0x1.b483990702abbp-167, 0.0, 0x1.aadb9f9e77fb7p-813, 0x1.672edcd3d1e19p-789, 0.0,
     0x1.bca85d209612p-954, 0x1.cddb0b33b043p-663, 0x1.0e9000986fdd6p-174,
     0x1.db64dad449e2ep-1016, 0x1.de93851a93035p-976, 0x1.07db8bc960a43p-9, 0.0,
     0x1.3cd1dbf05c37dp-698, 0.0, 0.0, 0x1.bc18ca5519a6bp-706, 0x1.ae366e4235812p-616,
     0x1.c2fec9e63417p-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74ed841fbbd63p-237,
     0x1.775a2324f69a4p-1014, 0x1.61c17317c4739p-226, 0x1.1c18219981b47p-249, 0.0,
     0x1.7fed03372fd07p-1000, 0.0, 0.0, 0x1.a142abe8e99c9p-893,
     0x1.e199862b8580bp-484, 0.0, 0x1.683db9d593a72p-749, 0.0, 0.0, 0.0,
     0x1.e86f85b9f5a66p-447, 0.0, 0.0, 0.0, 0x1.4626de0842dacp-386, 0.0,
     0x1.87446b6a48806p-274, 0x1.ee59edf6065dcp-521, 0x1.44edcf03a09a2p-443,
     0x1.098987a7d85c8p-230, 0.0, 0x1.becb06935b6cep-875, 0x1.ebd11042ad79ap-663,
     0x1.1661260f1018cp-824, 0x1.34052efef94c3p-115, 0.0, 0.0, 0.0, 0.0,
     0x1.690a89daa180fp-264, 0.0, 0x1.60f84f9e55028p-602, 0.0, 0.0, 0.0,
     0x1.de7964cee4e7ep-79, 0x1.75f2c860540cp-758, 0x1.bc931f2e7013fp-766, 0.0, 0.0,
     0x1.9246e8182e7c4p-338, 0.0, 0x1.3aad85867cf0cp-539, 0.0, 0.0,
     0x1.715d535397152p-77, 0.0, 0.0, 0x1.a964d5f8f2ef2p-322, 0.0,
     0x1.ae1a1642eea2p-638, 0.0, 0.0, 0x1.037610c8f47b1p-18, 0x1.abdcb0cc6127fp-458,
     0x1.2eea3bc6e8f6bp-864, 0x1.f49630fa503f8p-1007, 0x1.0c09a601afb2p-785,
     0x1.9cb6a8652fe24p-613, 0.0, 0.0, 0x1.dbd1ab9d43696p-516, 0.0,
     0x1.144245596e0bdp-166, 0x1.5216c4e6c7792p-24, 0x1.b825687e0159fp-282,
     0x1.a4661a8e75ac1p-314, 0.0, 0x1.bc6d3db25505ep-152, 0.0, 0x1.8c2a5549468ccp-218,
     0.0, 0x1.02ae24f9b7917p-50, 0.0, 0.0, 0.0, 0x1.41bddcbdc7a4dp-704,
     0x1.f06bcc6427c3fp-487, 0x1.a9063f11a478bp-226, 0.0, 0.0, 0x1.52ff89fc1f7e9p-762,
     0x1.0cf3da2263721p-147, 0x1.6873526e34d7bp-160, 0x1.248548bf5411fp-306,
     0x1.8c2b7ca0e6c22p-738, 0x1.f5457a49282c5p-127, 0.0, 0x1.d91016ec3aa21p-26, 0.0,
     0x1.178a7766c3ef6p-289, 0.0, 0x1.2694c8c45c232p-2, 0x1.92d9acf02b70ep-547,
     0x1.035124d4364a5p-834, 0x1.adf20abb20233p-138, 0x1.e5b76f10a526p-303,
     0x1.b4c8ee7c2c6b7p-282, 0x1.f67fbad010f33p-957, 0.0, 0.0, 0x1.9b62afd554a0ap-482,
     0.0, 0.0, 0.0, 0x1.40c29b64115fdp-526, 0x1.15214b57dddecp-244,
     0x1.daaca084fd764p-292, 0x1.e56fa9359b8c1p-455, 0x1.7cb82ddcc218bp-243,
     0x1.dc4dd4120a2ap-784, 0.0, 0x1.c4133341cd05ep-782, 0x1.1f552ec295f01p-672, 0.0,
     0x1.bf35752e5595ep-764, 0x1.37583945ac40ep-112, 0.0, 0.0, 0.0, 0.0,
     0x1.96cc20e4becc2p-257, 0.0, 0.0, 0.0, 0x1.6403e23e67e06p-250,
     0x1.732964151e4c7p-679, 0.0, 0x1.8c3f3ff4fc6eap-720, 0.0, 0.0,
     0x1.3ec0abc526957p-428, 0x1.bb7d355ada7b4p-529, 0x1.a8f2f496aa56fp-835,
     0x1.35aad4b03819ep-147, 0x1.631b2e3b5c647p-638, 0.0, 0.0, 0x1.cfb59f933861ap-481,
     0x1.03cb6b4be5e0dp-921, 0.0, 0x1.56974eff3b1b2p-981, 0.0, 0.0,
     0x1.b0fe1bef90bf1p-749, 0x1.16d25e7849e68p-469, 0x1.fb8dd95fef293p-486,
     0x1.a1da76b1d6a38p-617, 0.0, 0x1.c121a02b8946ap-496, 0x1.6b9dd93ef2645p-742, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.334557bdaeef4p-786, 0.0, 0x1.b244010a70457p-880,
     0x1.c1a18325b4056p-627, 0.0, 0x1.daf6a0cf9bbb9p-116, 0.0, 0x1.7f476a9a710c5p-14,
     0.0, 0.0, 0x1.ec07fcbd397a6p-630, 0x1.d846d1802e655p-180, 0x1.ef76d60109dc1p-83,
     0x1.de217060453fep-432, 0x1.40b55ef5a516ep-1022, 0x1.b9fc711601d03p-811, 0.0,
     0x1.19c4c0f8579e6p-611, 0x1.c4bd5727b978ap-490, 0x1.ffed070fa5cbbp-162, 0.0, 0.0,
     0x1.6fa1b8f4221cdp-1014, 0.0, 0.0, 0x1.433b4d07721e2p-850, 0x1.4151e5b5dd7cep-41,
     0x1.a8920f40b8fa8p-664, 0x1.699bd9d8924fp-254, 0x1.a6bbc2a4d18dep-1007,
     0x1.718fe94447bdep-154, 0x1.e7e0e2724f38p-74, 0.0, 0.0, 0x1.252f3d9ac84fp-196,
     0.0, 0x1.b40d17382df32p-648, 0.0, 0x1.650cfbcbf7fd4p-588, 0.0, 0.0, 0.0, 0.0,
     0x1.486fbe68857aap-711, 0x1.1a131f3dcbf0dp-207, 0.0, 0.0, 0.0, 0.0,
     0x1.e9e670830acfp-42, 0x1.ae9dbe914c203p-556, 0x1.880c8ab5b9f98p-410, 0.0,
     0x1.7d6705fd0e02p-23, 0.0, 0x1.4375dd929589dp-77, 0.0, 0x1.7342ef1f4bdp-129, 0.0,
     0x1.4cb5cb35e9bfdp-595, 0x1.6d62c2d5dfadep-582, 0.0, 0.0,
     0x1.4e05e8a984d67p-1019, 0.0, 0.0, 0.0, 0x1.63f60c839cfc9p-649, 0.0,
     0x1.a74b97392d198p-325, 0.0, 0.0, 0x1.deb65bf78a1fcp-629, 0.0,
     0x1.1d2a993060e5bp-146, 0x1.4c465729ab24cp-49, 0x1.9f1fc0fc3b302p-875,
     0x1.601525de1899dp-833, 0.0, 0x1.ef27cd97efe55p-582, 0x1.3ed98646d5fcp-654,
     0x1.1d862dcc5c779p-714, 0.0, 0x1.3e56c8c7e901fp-685, 0x1.ef1ef424d313bp-248,
     0x1.10cfbdae23e95p-815, 0x1.7e593ee6540bbp-5, 0.0, 0.0, 0.0,
     0x1.4cb1212fa30d8p-942, 0x1.b28f7de285caap-981, 0.0, 0x1.3bde33f926411p-207, 0.0,
     0x1.e2125fc206ec9p-145, 0.0, 0.0, 0x1.5ec714a0f7b92p-459, 0x1.a36e6d7c6cc22p-694,
     0x1.8515222cd49dbp-920, 0.0, 0.0, 0.0, 0x1.969ff750069aep-281,
     0x1.900ad6baa1db6p-502, 0.0, 0.0, 0x1.a37e54b604b53p-587, 0x1.0252002e6df38p-77,
     0.0, 0.0, 0.0, 0x1.3670975373532p-227, 0.0, 0x1.3d3677ec10e5p-1004, 0.0,
     0x1.27683aa95dfbdp-4, 0x1.27ffe9980056ep-816, 0.0, 0x1.5effbc41b946fp-94, 0.0,
     0x1.29121d9ca92cbp-618, 0x1.36b85f0a658cfp-278, 0.0, 0.0, 0.0,
     0x1.0f182b05c3f0fp-57, 0x1.bf8525f557c56p-739, 0.0, 0x1.289a4b77f404bp-963, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f69a76c54bddp-244, 0x1.22b3dc7559055p-471, 0.0, 0.0,
     0x1.561baedbc479ap-449, 0x1.55b1963308c0cp-516, 0x1.72b35c857a205p-424,
     0x1.8d37c8cd8eda5p-14, 0.0, 0x1.eb72ed7624f66p-870, 0x1.a49ada2e9f68ap-712, 0.0,
     0x1.78a018c6fdb73p-300, 0x1.4a99124e68d12p-863, 0x1.5d19884b6dedp-302, 0.0, 0.0,
     0.0, 0x1.a02ece38dfa38p-958, 0.0, 0.0, 0.0, 0x1.8f48ea856b868p-568, 0.0,
     0x1.59b0cdc2504eap-934, 0x1.40b0139814337p-274, 0x1.f9e4b9b65e318p-289,
     0x1.c039d751226b3p-482, 0x1.d07e22fc4817fp-548, 0x1.5a478f55ab4b6p-176,
     0x1.c7c1650c957a9p-534, 0.0, 0x1.d1f165639a2acp-309, 0.0, 0x1.a53aa7824907dp-585,
     0.0, 0.0, 0x1.8c359db34b576p-648, 0.0, 0x1.3ad3266312ae1p-484, 0.0, 0.0, 0.0,
     0x1.fd90244b6fa56p-870, 0x1.8e5340b1d80b7p-368, 0x1.5b05fe5411bccp-289, 0.0, 0.0,
     0x1.c31180c493bccp-549, 0.0, 0.0, 0.0, 0x1.8f54bed721467p-459, 0.0,
     0x1.807d47f5c421ep-365, 0.0, 0x1.92d392f0bccbfp-947, 0x1.61f31a1fd5a9cp-482, 0.0,
     0.0, 0.0, 0.0, 0x1.f33b064cd8c69p-827, 0.0, 0.0, 0x1.a0369e9ad686p-716,
     0x1.c72a7c68a89fap-793, 0x1.48c24ed121f04p-946, 0.0, 0x1.bc91fbeb0b349p-479,
     0x1.3c7583b17c88cp-154, 0.0, 0x1.27270a531c094p-307, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6e774ebcb8097p-176, 0x1.89230819e1bfep-1, 0.0, 0x1.60e5c8287365bp-500,
     0x1.63c508382ded1p-822, 0.0, 0x1.eaeb68571b97cp-269, 0x1.da912e3db6995p-36, 0.0,
     0x1.bb79a7e170d49p-359, 0.0, 0x1.745298e8aa395p-483, 0.0, 0x1.492c31c6c6deap-503,
     0.0, 0.0, 0x1.0f81373eaeef6p-894, 0.0, 0x1.1a2ebf1fb2e5p-981,
     0x1.aa0f28cc788fp-937, 0x1.e7697d8fcdc31p-10, 0.0, 0.0, 0x1.2ba0135d38a5bp-113,
     0.0, 0.0, 0x1.368d2e40dc36cp-224, 0.0, 0.0, 0x1.46cf218bf995cp-1020,
     0x1.139514c312b4dp-599, 0.0, 0.0, 0x1.e9b2a1857e758p-439, 0.0, 0.0, 0.0, 0.0,
     0x1.999218753238fp-288, 0.0, 0x1.33dc75c02725cp-656, 0x1.df3e3df7fa183p-108, 0.0,
     0x1.35656a802f96bp-337, 0.0, 0.0, 0x1.1b67eadbd6b78p-23, 0x1.17a94b49d0fd3p-343,
     0x1.053638f748971p-421, 0x1.3d2976785a332p-1003, 0.0, 0x1.b7f79ebc921b4p-953,
     0.0, 0x1.5c3a271aac1c4p-396, 0.0, 0x1.95b919d726ac7p-682, 0x1.b222b92ebeafp-794,
     0.0, 0x1.f8bc7ffd307e1p-918, 0x1.40bbbf473dd1ep-415, 0x1.43a8bd4558fc1p-793, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c5b226abd70fbp-766, 0x1.4e8dc73996c29p-81,
     0.0, 0.0, 0x1.908ad9e444852p-981, 0.0, 0x1.ea50dcf2b491bp-696, 0.0, 0.0, 0.0,
     0x1.6a3433e122127p-94, 0x1.1634c9b92829p-445, 0x1.1bf0745a6535cp-96,
     0x1.9861dadcc5dabp-792, 0.0, 0x1.50fbc31a754e1p-38, 0.0, 0x1.1d10f5398723ap-521,
     0x1.6d47463129ecfp-309, 0.0, 0x1.b72fa5d2152b7p-623, 0x1.9f0a340255872p-669, 0.0,
     0.0, 0.0, 0x1.5ad7926a817ffp-751, 0x1.4ad0d831aeb85p-456, 0.0,
     0x1.eac4dc6fe523fp-605, 0.0, 0x1.ec95cd5c7b57ap-505, 0.0, 0.0,
     0x1.2916babfc6827p-568, 0x1.f08ed01e1e799p-860, 0x1.3a2ea38cd21edp-553, 0.0,
     0x1.09afb5dff7406p-132, 0.0, 0x1.00bccd06a7834p-898, 0.0, 0x1.1eeab16055aaap-87,
     0.0, 0.0, 0.0, 0.0, 0x1.0caf3b7c99784p-435, 0x1.6008a4a4da79fp-70, 0.0,
     0x1.6950c7f79b47fp-506, 0.0, 0x1.0fcaddc0f0519p-42, 0x1.ebc63cc42f79fp-48, 0.0,
     0x1.d254d76e754ddp-630, 0x1.18c8a078f4965p-114, 0.0, 0.0, 0x1.4f09f6326fb6bp-833,
     0.0, 0.0, 0x1.da61b9526ea92p-797, 0x1.2501dd83dcc01p-54, 0x1.3e6cf69bb94d6p-243,
     0x1.0822170d08b37p-391, 0.0, 0.0, 0.0, 0x1.e3e098e44f40cp-479, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.683275a7d5f61p-148, 0x1.b8cab6ad319fap-457, 0.0,
     0x1.e66a689461119p-790, 0x1.02ec8a6585c9cp-84, 0.0, 0x1.2fbe12bd9061bp-67, 0.0,
     0.0, 0.0, 0x1.682a5004dea18p-762, 0x1.adcf7cd50b79ep-375, 0.0, 0.0, 0.0,
     0x1.f1f24e91aeafep-260, 0.0, 0x1.d44c4037b969cp-344, 0x1.5d463f9f306eep-512,
     0x1.7ad4ba1f85b06p-720, 0.0, 0x1.24fd246090d2fp-198, 0.0, 0x1.747f740bd52dp-690,
     0.0, 0x1.3f14cde91523ap-755, 0x1.0e4a9e32398bdp-701, 0.0, 0.0, 0.0, 0.0,
     0x1.2f67bd394308bp-187, 0x1.1ea330de6302dp-759, 0.0, 0.0, 0x1.9756c3e70d39bp-566,
     0.0, 0x1.e2d502e330e34p-607, 0x1.4020187e72a5cp-30, 0.0, 0x1.259bb993dc347p-473,
     0x1.2aef1f9598647p-681, 0x1.0f8844cb3883bp-1007, 0.0, 0x1.584f0db0902cep-640,
     0.0, 0.0, 0.0, 0x1.7670d71e093a2p-106, 0.0, 0.0, 0x1.e04149d1b73a3p-621,
     0x1.cd1fe7aff2abcp-218, 0x1.7bd2d4b1b7819p-150, 0.0, 0.0, 0x1.0beecb031af01p-165,
     0.0, 0.0, 0x1.aae46f50dbf4cp-401, 0.0, 0.0, 0x1.216bf463cc08cp-569, 0.0,
     0x1.d11b035babba9p-265, 0x1.5634053752327p-953, 0.0, 0.0, 0x1.e9c4a727999c2p-171,
     0.0, 0.0, 0.0, 0.0, 0x1.87abc01bec0c6p-54, 0.0, 0x1.3b3f8724ea163p-1020,
     0x1.a77f6eb32f1dbp-30, 0.0, 0.0, 0x1.d991924365d2cp-274, 0x1.179f1e89f8e6fp-967,
     0.0, 0.0, 0.0, 0x1.8e80674d5419ap-334, 0.0, 0.0, 0x1.1d19738ce8227p-945,
     0x1.b71f3176f6884p-27, 0.0, 0.0, 0.0, 0.0, 0x1.e83ad72883e6fp-296, 0.0,
     0x1.d0643b3fedd06p-430, 0.0, 0.0, 0x1.03cc4aa86495bp-355, 0.0, 0.0, 0.0,
     0x1.ac76b866a1b46p-382, 0.0, 0.0, 0.0, 0.0, 0x1.98e6f1e71799p-294, 0.0, 0.0,
     0x1.9ff5c053ea49bp-409, 0.0, 0.0, 0x1.8841263010351p-425, 0.0,
     0x1.79d3653a6007ap-808, 0x1.7b97da0b6ca23p-921, 0x1.6a57732f561ddp-94, 0.0,
     0x1.fa736a02971f1p-981, 0x1.fba417dc6f0ccp-96, 0x1.3f8f265841059p-332,
     0x1.716de1de85d5ep-5, 0.0, 0.0, 0x1.d2ef9479f439cp-804, 0.0, 0.0, 0.0,
     0x1.bf466222a4e0ap-816, 0.0, 0x1.bdcae826e574ep-514, 0x1.07efe873cced3p-298, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2b6623524db04p-59, 0x1.265bfb0eb0e93p-524, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ba63d9793717p-572, 0x1.8b88985be8ep-461, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.efa49676be967p-330, 0x1.a41cf4ebcb272p-245, 0.0, 0x1.137a2369caeddp-521,
     0x1.2dd07a8b592d9p-896, 0.0, 0x1.c52ff0b8d5caap-10, 0.0, 0.0,
     0x1.5edb29f7777dbp-453, 0.0, 0x1.2587a9bc64067p-816, 0.0, 0x1.5f9f509b9fc67p-799,
     0x1.3637e9ca56d2bp-437, 0.0, 0.0, 0x1.f7ab139b398f2p-541, 0.0, 0.0,
     0x1.c17e893b2efc3p-219, 0.0, 0x1.16948c03a1e52p-987, 0.0, 0.0,
     0x1.9a5449133e524p-178, 0.0, 0.0, 0x1.d807a64467994p-1017, 0x1.a86069df43fd1p-32,
     0.0, 0.0, 0x1.2345efb251d8dp-226, 0.0, 0.0, 0x1.635839a71ea8fp-240, 0.0, 0.0,
     0.0, 0.0, 0x1.c813ca3d106acp-934, 0x1.03891b5708693p-729, 0x1.d52e607a24f49p-779,
     0x1.1895d49e49b91p-187, 0x1.0658e1bb79fb2p-576, 0x1.a6a710124975fp-494,
     0x1.a11eb564c08a7p-591, 0.0, 0.0, 0.0, 0x1.6fcee1b6b1d97p-766, 0.0,
     0x1.93ab4dcef8c36p-593, 0.0, 0x1.0c3a657c4717bp-367, 0x1.9f962cc938f7cp-281, 0.0,
     0.0, 0x1.6fcededf32136p-870, 0x1.3931d909b3f24p-958, 0x1.22c7d51375268p-949, 0.0,
     0x1.fc6f15b383186p-923, 0x1.4fa1f5992c561p-79, 0x1.c42ff8ac77bb9p-249, 0.0, 0.0,
     0.0, 0x1.b9d20be3981c8p-274, 0x1.e0fe66ddee10bp-781, 0x1.95a2d390f63dp-177, 0.0,
     0.0, 0.0, 0.0, 0x1.b92b578677c7ap-506, 0.0, 0.0, 0x1.4f9b96724f23ap-104,
     0x1.e83927b7a2a3p-106, 0x1.97567b15839f7p-225, 0x1.624dc1dfbf8bep-339,
     0x1.a14840ed3216cp-198, 0.0, 0x1.132f82aae01f6p-732, 0.0, 0.0, 0.0,
     0x1.425d1dd5b3787p-639, 0x1.20410ab7f01adp-341, 0x1.e34d8768174cbp-224,
     0x1.dadc3e8841fdap-29, 0x1.ddd8d79cc379dp-407, 0.0, 0.0, 0.0, 0.0,
     0x1.f450b0e1e2234p-815, 0.0, 0x1.31bcd26d42c61p-258, 0.0, 0x1.53f10c0b69479p-651,
     0x1.ac17e21edc2ddp-404, 0x1.09489d45a2c47p-913, 0x1.8cdb35824f813p-932,
     0x1.d7c09feaa8d5p-105, 0x1.e2da8c0f59e33p-368, 0x1.5041524cc6ebep-487, 0.0, 0.0,
     0x1.87379bb7350cp-691, 0x1.2619d47020ba2p-956, 0x1.61c143977b7e3p-920,
     0x1.b2eab0d538193p-77, 0.0, 0x1.0ff5fc18b0558p-828, 0.0, 0.0, 0.0, 0.0,
     0x1.885d9ec6a2f3cp-721, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0468037865147p-748,
     0x1.eac3651b2ac19p-973, 0x1.a75bd0cf4c29ep-44, 0x1.4c8119a26c6f5p-414,
     0x1.c326c89a7cca8p-111, 0x1.bf8eb7c1fc7f1p-58, 0x1.a31f0c62fee3p-370,
     0x1.8f2796ed3b77dp-105, 0x1.321d1f91770a6p-819, 0x1.1bda556972927p-882, 0.0,
     0x1.009521a8e7822p-982, 0x1.8eadbeff8381dp-1005, 0x1.7c3aab36044eap-540, 0.0,
     0.0, 0.0, 0.0, 0x1.ad61f17f34b26p-262, 0.0, 0x1.4ffbf6a120961p-857,
     0x1.01a60391ce392p-724, 0.0, 0.0, 0x1.5403dd83513bbp-774, 0x1.63768b69398e7p-327,
     0x1.e978098959d47p-545, 0.0, 0x1.156ba7f6fe669p-421, 0x1.24758f8cec575p-953, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d042e3b93349p-228, 0x1.994a1629d80cdp-737,
     0x1.1cf4797219a64p-491, 0x1.8196eb71eefabp-908, 0.0, 0x1.6582cf70d18d7p-822, 0.0
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
            tmp1 = Sleef_finz_sqrtd4_u35kvx(tmp0);
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
    printf("Sleef_finz_sqrtd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
