/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd2_u35avx2128.c --function \
 *     Sleef_finz_coshd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.c52c41dfbd5efp-778, 0x1.3052f52e6167p-51, 0x1.4b2107378e55bp-356, 0.0,
     0x1.904461fc656efp-726, 0.0, 0.0, 0.0, 0x1.b736ac231fe7ap-705,
     0x1.7b71e766c357dp-788, 0x1.56a097191103p-446, 0x1.b553d8266d535p-872,
     0x1.c0be6685d2693p-820, 0.0, 0.0, 0x1.46eb4dddf48c2p-353, 0.0, 0.0, 0.0,
     0x1.6a971770568d9p-332, 0x1.dd5fd355536dp-619, 0.0, 0x1.f67585053da0fp-99, 0.0,
     0.0, 0x1.9844acf641ae9p-647, 0.0, 0.0, 0x1.26da94cc7bf23p-747, 0.0,
     0x1.badd982f079c9p-653, 0x1.ffcb5632ca2fdp-876, 0x1.d1f45f644ee19p-1013,
     0x1.9d63ce10f2c32p-629, 0x1.b1112c04bfb9ep-196, 0.0, 0x1.c6de199fae0f8p-847, 0.0,
     0x1.066386cd2bd24p-1017, 0x1.f47c6d1d24429p-580, 0.0, 0x1.bf918c4126a53p-511,
     0x1.8a1fefc2b8f5ep-224, 0x1.731b73f6c7aefp-143, 0.0, 0.0, 0.0,
     0x1.0b92ca0303663p-44, 0x1.01def99eb4f09p-94, 0.0, 0x1.672c6701e1b5cp-927,
     0x1.9274894cf1ca2p-839, 0.0, 0x1.cca5d983a15c2p-1007, 0x1.e7647e0eca762p-761,
     0.0, 0x1.838674a9cfb73p-184, 0.0, 0x1.bc6d4ea6fa5d6p-205, 0x1.7b2c2dd5b0b14p-709,
     0x1.4229eb05e884fp-315, 0.0, 0x1.8963314b42b52p-11, 0.0, 0x1.0ff8f488248ddp-955,
     0x1.5eca7d3c6b4cfp-234, 0.0, 0x1.2dc30cacf02afp-904, 0.0, 0x1.1c1f6905f83cfp-256,
     0.0, 0x1.56d86738516dp-5, 0x1.fceb797da4491p-182, 0x1.1e003ee1d70f4p-878, 0.0,
     0x1.09b94a00731cap-764, 0.0, 0.0, 0x1.d0fda6f49544cp-439, 0x1.c7de9b6f20126p-101,
     0.0, 0x1.205d6635008f3p-182, 0x1.180153688608p-80, 0.0, 0.0, 0.0,
     0x1.ff6f9f8c4da26p-586, 0x1.3de74300e7564p-958, 0x1.169833413ed84p-912,
     0x1.82be9ee3f005dp-510, 0x1.2af4d6ac21dd1p-198, 0x1.1b8223d3a8546p-464,
     0x1.ffa92bb9d6129p-922, 0x1.1b12c0c7947acp-389, 0x1.567dfcc05cb26p-751,
     0x1.057b78e70cdfp-803, 0x1.a88af71ffac56p-645, 0.0, 0x1.4fc87a71f2a2bp-627, 0.0,
     0x1.39bcbfb848487p-514, 0.0, 0.0, 0x1.a76c9fc837e74p-123, 0.0,
     0x1.9b6a4e68987d3p-740, 0.0, 0x1.28723d896870fp-245, 0x1.3f35ceafffdb2p-380, 0.0,
     0.0, 0x1.c7e673b2c9b3fp-1016, 0x1.27086df34bd2ap-843, 0.0, 0.0,
     0x1.9409448d4735ep-733, 0x1.219d89b1c295bp-996, 0x1.1ec66d39edaf5p-196, 0.0, 0.0,
     0x1.c848528bf849p-938, 0.0, 0x1.e51f15855d388p-995, 0x1.ef48db4eb65d1p-294, 0.0,
     0.0, 0x1.add0beee3cc4cp-242, 0x1.ee900f098e73dp-420, 0.0, 0x1.dee2f12180134p-398,
     0x1.16603fcb22a02p-264, 0x1.cba7dfaa36c4p-632, 0.0, 0x1.a39573fdf22e9p-973, 0.0,
     0x1.ff83a8d9359a5p-228, 0x1.57bcbeeb54429p-489, 0.0, 0x1.f9623456baa1ep-814, 0.0,
     0.0, 0x1.503dd21e67977p-713, 0x1.553b4ac816108p-656, 0x1.2fc455db428bep-147, 0.0,
     0x1.e110fa7e07951p-222, 0.0, 0x1.f9c1819917a73p-31, 0x1.56b335df4a14cp-869, 0.0,
     0.0, 0x1.dea8808615a4ep-66, 0x1.a0fe9f3b622f5p-930, 0x1.0f3f7d711ee8p-193,
     0x1.5bfe1f304564p-33, 0.0, 0.0, 0x1.613ff5c891caep-216, 0x1.373ed74bcc5c8p-54,
     0x1.379783f57e21bp-645, 0.0, 0.0, 0x1.8bf9a9e96c7dfp-153, 0x1.4cb176a77496p-287,
     0.0, 0.0, 0x1.2b36e1960cc21p-644, 0x1.a6c241197fe05p-909, 0.0, 0.0,
     0x1.e64e51038fc42p-75, 0.0, 0.0, 0x1.322a20ae4b7f3p-282, 0x1.80f35047c1801p-232,
     0.0, 0.0, 0x1.2df02c5b10775p-190, 0.0, 0x1.d1b8cd30f860ap-514, 0.0, 0.0, 0.0,
     0.0, 0x1.23162b0f38fe1p-579, 0.0, 0.0, 0.0, 0x1.ee6a4efe7f5e6p-799,
     0x1.ca01f38aa5e87p-1011, 0.0, 0x1.da277c6ad5082p-997, 0.0, 0.0,
     0x1.00a4759ac9811p-519, 0.0, 0.0, 0x1.2489e26c3abd3p-747, 0.0,
     0x1.bd217ed441417p-528, 0.0, 0x1.293e337d9e1bap-1000, 0x1.2e7610268afa7p-933,
     0.0, 0x1.ee2bd046c5419p-345, 0.0, 0.0, 0x1.88bbe435c4805p-107,
     0x1.82aa9961adcf1p-513, 0.0, 0.0, 0.0, 0x1.6eec8ce4c0106p-496,
     0x1.5da5740b3c778p-390, 0.0, 0.0, 0x1.a6e68b7fa8e52p-471, 0.0, 0.0, 0.0,
     0x1.7693941707341p-929, 0.0, 0.0, 0x1.574a32febe542p-400, 0x1.278d409741c5fp-189,
     0.0, 0x1.6be5569aa87bdp-332, 0x1.1b30f0288f7bap-177, 0x1.3b25274521cfap-630, 0.0,
     0.0, 0x1.8f75104e16905p-591, 0.0, 0.0, 0.0, 0x1.4a78689462ef9p-79, 0.0, 0.0,
     0x1.9782b4ff52b7cp-856, 0x1.3acf7c000d73p-13, 0.0, 0.0, 0x1.0eb6076232e86p-585,
     0x1.299ca31092e48p-450, 0.0, 0x1.8ab6d354647dbp-266, 0x1.99a58638949d4p-514,
     0x1.2b1b12f40562ep-226, 0x1.eba576361071ep-822, 0x1.6d44daabc0c79p-504,
     0x1.c395b0c80a95fp-135, 0x1.49079583bc546p-687, 0x1.572f13de189bap-522,
     0x1.3fdf77c390a5dp-48, 0x1.8608f369e5628p-123, 0.0, 0x1.80115986ccd5cp-754, 0.0,
     0x1.070a00215d4p-52, 0x1.a64f2c7f889d3p-905, 0x1.d6e208e5babf7p-189, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ca14bb9a91b67p-134, 0.0, 0x1.f932ec42a2e7bp-840,
     0x1.f384ef53c811dp-773, 0x1.7437a0395c05dp-209, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9cf3e9a3c8292p-817, 0.0, 0x1.6fb19eafc2751p-590, 0.0, 0x1.c5e5ca238020fp-927,
     0.0, 0x1.9b8acbda6c9a1p-139, 0x1.03f6c3bea68a4p-579, 0x1.716cd3451e638p-176,
     0x1.97782da615afcp-523, 0.0, 0.0, 0x1.f95bd4549d5d1p-129, 0x1.9f58d8dde318dp-805,
     0x1.116572417956ap-703, 0.0, 0x1.57f27baa6427bp-731, 0.0, 0.0, 0.0,
     0x1.670a1b8b9af6bp-823, 0.0, 0.0, 0.0, 0x1.ece3b1174b468p-997,
     0x1.fb08e2e0faff9p-341, 0x1.82f7c4336c1ffp-364, 0.0, 0.0, 0x1.e4c57024df38fp-972,
     0x1.f85276d17e27p-433, 0.0, 0x1.b1a8709d68026p-143, 0.0, 0.0,
     0x1.15073e98dd4efp-42, 0x1.9c5be76d3ae1ep-730, 0.0, 0.0, 0.0,
     0x1.0f5b470e7afebp-316, 0x1.050a7f7d01812p-468, 0x1.31a9acae5aba1p-80, 0.0, 0.0,
     0.0, 0x1.12669a10144bfp-1004, 0.0, 0x1.afbd4e82a5b59p-957, 0x1.5ca847b14282fp-96,
     0x1.7c6016007cb33p-586, 0.0, 0.0, 0x1.eb4cd1c9dde29p-757, 0.0,
     0x1.63ddb50c1c3d3p-723, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8b01c555e419p-70, 0.0, 0.0,
     0.0, 0x1.b17edcf5fe2a9p-294, 0x1.903501489c2ecp-700, 0x1.36812cd326392p-687, 0.0,
     0.0, 0.0, 0x1.f208d64e2d4bcp-410, 0x1.480be222413f1p-743, 0x1.646f773472885p-334,
     0x1.c35190a3d36e8p-581, 0.0, 0.0, 0.0, 0.0, 0x1.1299cb9245036p-362,
     0x1.e6520fe7c593p-82, 0x1.8cd1ce8e0770fp-850, 0.0, 0.0, 0x1.66b4813ffc0cap-344,
     0.0, 0x1.4354cbd77ef7ep-672, 0x1.492227543a039p-848, 0.0, 0.0, 0.0, 0.0,
     0x1.1787f3400c8c6p-973, 0x1.508d0bc2e740cp-59, 0.0, 0.0, 0x1.ee4de0d4ffe1dp-715,
     0x1.2a93246633621p-440, 0x1.7ac688a5911dfp-1022, 0.0, 0x1.f903be90e12dfp-814,
     0x1.1188ca74a04f4p-704, 0.0, 0.0, 0x1.8ce75c9e9616dp-365, 0.0, 0.0,
     0x1.552834fed1a62p-688, 0.0, 0.0, 0.0, 0x1.547dcc6cb86b4p-393, 0.0, 0.0, 0.0,
     0x1.8226ded83066ap-374, 0x1.44fdbacd3c661p-840, 0.0, 0x1.42edb3212c665p-590, 0.0,
     0x1.d8d542dded32ep-534, 0x1.bf2a3e427a0c3p-626, 0x1.bf1e151a079e2p-114,
     0x1.2d839d0e053c2p-916, 0.0, 0x1.d7ecc5a95dbb9p-712, 0x1.84a63afc0e4ap-365,
     0x1.71864f15c1dfbp-516, 0.0, 0x1.e8c7578b840a6p-760, 0.0, 0.0, 0.0,
     0x1.3517c62449ec4p-373, 0.0, 0x1.e0ba2e8c20264p-390, 0.0, 0x1.69b41d0dbfae5p-275,
     0.0, 0x1.4e98867139663p-617, 0x1.c16481534faap-661, 0x1.7679b31ad5925p-681, 0.0,
     0x1.edc7597275ad4p-154, 0x1.494f9e9a4b2acp-253, 0x1.b6f9be222d819p-399,
     0x1.6e6e66f310aa6p-219, 0.0, 0x1.4a02608db291cp-107, 0x1.bd15f357c9cd4p-514,
     0x1.8b48019b934aap-306, 0.0, 0.0, 0x1.7b41266543e89p-536, 0.0,
     0x1.ad61e07c49cafp-487, 0x1.2f3ed70ccdac3p-655, 0.0, 0.0, 0x1.243e58ae590e7p-92,
     0.0, 0x1.4738272de0af8p-335, 0.0, 0x1.84168d57bc2afp-765, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.91e265d101dccp-966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d80fd443955dp-63,
     0.0, 0.0, 0.0, 0x1.f6488d6a35c82p-494, 0.0, 0x1.52865c5a02c06p-900, 0.0,
     0x1.c0645d2aded46p-45, 0x1.5465cda216104p-646, 0.0, 0x1.745d95bf38b1ap-429, 0.0,
     0.0, 0.0, 0.0, 0x1.fc740039424c4p-630, 0x1.4674985196a9ep-871,
     0x1.52e2cf2c47e8fp-80, 0.0, 0.0, 0x1.8c94ee0382693p-923, 0x1.d18ec2910d7efp-982,
     0x1.2f3125639afe8p-41, 0.0, 0.0, 0.0, 0.0, 0x1.de54995f1827p-140, 0.0,
     0x1.be195cfe32ae7p-221, 0.0, 0.0, 0x1.355ff267ad201p-637, 0.0, 0.0, 0.0, 0.0,
     0x1.1a3bc41ae51a4p-557, 0x1.6a5ccae1e2d45p-548, 0x1.be8186739757fp-914, 0.0,
     0x1.431ae11e60cadp-489, 0x1.6d6c1e97d0664p-912, 0x1.c31c4a5cf02e8p-531,
     0x1.a7b19c043f2a8p-289, 0.0, 0x1.b102ee1510933p-885, 0x1.b162f3e77df35p-589, 0.0,
     0x1.3c89008781d25p-494, 0x1.e99c486d4047cp-540, 0.0, 0.0, 0x1.d5559b17ca195p-980,
     0x1.f6004490589c5p-403, 0x1.370b9e3a91ffap-439, 0x1.e0e10309e160ap-578,
     0x1.1c94af85244cfp-863, 0x1.e59670e017c0ap-827, 0x1.df17281d766b6p-493, 0.0,
     0x1.6b00ab466702ap-992, 0x1.be3b65feb5d04p-276, 0x1.536f9b2fc6656p-797,
     0x1.14ada3686a77ap-879, 0.0, 0x1.7d3099065ff68p-748, 0x1.42c227995b7e3p-373, 0.0,
     0x1.687141435307ep-590, 0x1.6ae5eee91bcebp-35, 0x1.866a0e2d2f015p-141,
     0x1.40b675a21445dp-1016, 0.0, 0x1.5456203f8b02dp-887, 0x1.97558aaab819ep-406,
     0x1.ab822964af72fp-533, 0x1.a5086974b6dfdp-598, 0.0, 0x1.8a167f0f25061p-517,
     0x1.f51eafe45b0b2p-54, 0.0, 0.0, 0.0, 0x1.8bc062268b092p-271,
     0x1.6152a2b8abccfp-443, 0.0, 0.0, 0.0, 0x1.e4e106afa31e3p-176, 0.0, 0.0,
     0x1.5761c99852ac3p-792, 0.0, 0.0, 0x1.efa68fdebb3a3p-13, 0.0,
     0x1.2cc095fe19ba3p-928, 0x1.1578d13b5dc39p-256, 0.0, 0.0, 0x1.17d83e0e06daep-101,
     0x1.90c2eff791304p-382, 0.0, 0.0, 0x1.4795fb945e1bdp-681, 0.0, 0.0,
     0x1.daca105712651p-148, 0x1.16defc0c33da1p-846, 0.0, 0x1.f189319dd902fp-720,
     0x1.934a9e4b8df46p-948, 0.0, 0x1.7a5ed4931210cp-817, 0x1.7700b45d84226p-195,
     0x1.692045ef3093cp-406, 0.0, 0x1.684c330909cb2p-176, 0.0, 0.0, 0.0,
     0x1.ecd705670103dp-927, 0.0, 0.0, 0x1.094e87cd1d9p-641, 0x1.d10aad7796b31p-283,
     0.0, 0x1.b71af17f66c35p-724, 0x1.882d24827d191p-1009, 0x1.a0c25344589adp-866,
     0x1.3ed84021afec4p-943, 0x1.3e09eff5b0af2p-457, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.37bee75b2d3f7p-228, 0x1.0e721bcb761d1p-503,
     0x1.dbef3b3d42726p-620, 0.0, 0x1.cbd45efe20731p-544, 0.0, 0.0,
     0x1.0114bd47f515p-645, 0.0, 0x1.12af85f2c757dp-45, 0x1.31feb6cd7ab72p-67,
     0x1.a965cef45592p-297, 0x1.9b66225d51677p-686, 0.0, 0.0, 0x1.7e90515a4ccebp-258,
     0.0, 0x1.589839ddf96cp-672, 0x1.5ddf24fe3f604p-774, 0.0, 0x1.edbb14ae8c922p-121,
     0x1.af50616a300c5p-184, 0.0, 0x1.a1dab36fcdc16p-487, 0x1.80d71f3b73c44p-624,
     0x1.4172fed086d86p-950, 0x1.d2a83208fef3p-19, 0.0, 0x1.3c7aca0b123d3p-219,
     0x1.c7d63c24b9c2bp-393, 0.0, 0x1.f48f5584ae40cp-256, 0.0, 0x1.86a53e6a73cebp-466,
     0x1.4331fe532be0bp-858, 0.0, 0x1.59234903b881ap-456, 0.0,
     0x1.6484a088fab52p-1009, 0.0, 0.0, 0.0, 0x1.c0fefb07d50aap-354,
     0x1.b8d2e1adbc6aep-164, 0.0, 0x1.9b8f80747473cp-274, 0.0, 0x1.d9a3704a46d4p-72,
     0x1.5a0274742614p-96, 0.0, 0.0, 0x1.4cc03ec2be682p-537, 0x1.d18eddc548d9ap-46,
     0.0, 0x1.782a3e3ab295dp-987, 0x1.f74360ee7b5e8p-960, 0x1.9b052e598aab4p-114, 0.0,
     0.0, 0.0, 0x1.c3d2a1f8d9dcbp-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9daa5cb794c16p-383, 0.0, 0x1.29fb9b2f5f4c9p-140, 0.0, 0.0, 0.0, 0.0,
     0x1.daf51b492452cp-780, 0.0, 0x1.59d627e63514bp-584, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1d17d219c2cc4p-869, 0.0, 0.0, 0x1.807e1b1b1a7cep-837, 0x1.e5df1ba6d79f1p-464,
     0x1.2a125a7299443p-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c25c401e3392p-971,
     0x1.b5b3f9b4d9a1bp-664, 0x1.08c38a982bd51p-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8f2adf14e033p-822, 0x1.bba273ac74c03p-679, 0x1.8caad797a29abp-607, 0.0, 0.0,
     0x1.a021918d5b378p-498, 0x1.24c08d1da811bp-468, 0x1.e0ac771cd3ed6p-547, 0.0,
     0x1.bc53a1c8bfd22p-136, 0.0, 0x1.0136483b2df0cp-170, 0x1.eef29d46b7b47p-435, 0.0,
     0x1.3e97562d8904ep-64, 0.0, 0.0, 0x1.a5652ad58e996p-543, 0.0,
     0x1.f801304d7d727p-642, 0.0, 0x1.7328ea1828d38p-817, 0x1.3f5494a9fdc33p-157,
     0x1.8ba132ef339f8p-782, 0x1.154cdafa1a43p-69, 0.0, 0.0, 0x1.8725134164d3ep-599,
     0.0, 0x1.97088a00d797dp-621, 0x1.c6df0027e4fedp-673, 0.0, 0.0,
     0x1.0a13291acfab5p-530, 0.0, 0x1.dac24e158c5cfp-412, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7ffe99cc134e2p-725, 0x1.2dd02b3499034p-780,
     0x1.f322a09262c1ap-705, 0x1.a3a0c84495cfp-684, 0x1.715b15631866ep-213, 0.0, 0.0,
     0x1.fbe6c4de3ae7dp-110, 0.0, 0.0, 0.0, 0x1.d7f414c3758b4p-608,
     0x1.07a30bade160cp-818, 0.0, 0x1.68dbef3528013p-412, 0.0, 0.0,
     0x1.f60432ed690adp-471, 0.0, 0.0, 0.0, 0.0, 0x1.c81d9587a0bd9p-772,
     0x1.6cb36ca8b0a46p-318, 0.0, 0x1.63d9b70d173a5p-524, 0x1.8c984305ba6f3p-228,
     0x1.c5f8d6705fdcep-755, 0x1.153902eb478e8p-438, 0.0, 0.0, 0x1.0e5b4d204d8bap-83,
     0x1.75303ba18107dp-504, 0x1.ca0b0f68060d7p-567, 0x1.3ab533c1edabbp-360, 0.0,
     0x1.689f513512044p-899, 0.0, 0.0, 0.0, 0x1.d9b1acf0eb32dp-695,
     0x1.151378ed50fe2p-404, 0x1.197ad25c998e3p-607, 0x1.27a2642aca6f2p-30, 0.0,
     0x1.5c4a1c6ff767ep-771, 0.0, 0.0, 0.0, 0x1.23b200c796046p-610, 0.0,
     0x1.bc90da918a738p-372, 0x1.b70a81a97a112p-643, 0.0, 0x1p0, 0.0, 0.0, 0.0,
     0x1.b7ed8e907eb5fp-910, 0.0, 0.0, 0x1.1dd31c20f12a9p-207, 0.0,
     0x1.3e6c62f2dd4acp-761, 0.0, 0x1.80f89f1bab2eep-607, 0.0, 0.0,
     0x1.54a0e03d5741ep-570, 0x1.e3130bd52ba87p-977, 0.0, 0.0, 0x1.b62c29f5afc64p-415,
     0x1.1d358a62d5cbp-262, 0x1.8064272f36972p-534, 0.0, 0x1.6e2dcdb831e02p-1016, 0.0,
     0.0, 0x1.3fa81c5840c32p-62, 0x1.c34dfdf802496p-31, 0x1.1d2c78d351b43p-156,
     0x1.8091e64f8e62bp-232, 0x1.b873e963d9e36p-457, 0x1.aa1464e861b88p-906, 0.0,
     0x1.2ab54f880020fp-573, 0x1.501553aaf2326p-736, 0x1.f0201c19ef138p-261, 0.0,
     0x1.d05a8f542c437p-650, 0.0, 0x1.4e2594c93c65bp-924, 0x1.1c13d152964f7p-147,
     0x1.ab237bea6c23p-163, 0.0, 0x1.968bff9362a8ep-67, 0.0, 0x1.cdd8ac530937dp-422,
     0x1.e1567eeb80518p-916, 0x1.4122468d46d34p-807, 0x1.ffcdb0d18be56p-59, 0.0,
     0x1.0522c9c3f8922p-351, 0x1.b6248856116cfp-408, 0x1.c06afa45b78c6p-977, 0.0,
     0x1.121511f152f32p-659, 0.0, 0x1.fa2d9c51c2a53p-445, 0x1.41db3b216a133p-313, 0.0,
     0.0, 0.0, 0.0, 0x1.9adbf56db85c1p-648, 0x1.1108f633c14aep-774, 0.0, 0.0, 0.0,
     0.0, 0x1.03903b99ee051p-817, 0.0, 0x1.fd02ead1e4becp-483, 0x1.863885ba75e71p-294,
     0.0, 0.0, 0x1.6bb05921f0919p-968, 0x1.c51e9735e1c36p-90, 0x1.13b464c6b015dp-910,
     0.0, 0x1.7b1124df488d5p-456, 0x1.43f207605a0a5p-297, 0x1.0885bc0d426e1p-1014,
     0.0, 0x1.b7e449baf47d5p-799, 0.0, 0x1.2ca9ce5fb888cp-737, 0.0, 0.0,
     0x1.0782d3b2c7fbfp-274, 0x1.d08ebc79d9f8dp-673, 0x1.989108cd6dbc1p-998,
     0x1.507cbe7cea505p-626, 0.0, 0x1.a23af19740f74p-713, 0x1.72ac33c008f18p-187,
     0x1.d868f126da41bp-471, 0x1.54bfd3cfbbf57p-18, 0x1.7b063cc3d6b31p-739,
     0x1.c018737f701fep-437, 0x1.40b74c74307b9p-656, 0x1.96e3b91d3866ap-1022,
     0x1.cbcf67536e9e8p-539, 0x1.375aa1409279dp-606, 0x1.317123f8105d1p-441,
     0x1.3a9addbfc781p-512, 0.0, 0x1.c18264c4aec9ap-703, 0.0, 0x1.3e242485daa3ap-860,
     0x1.7a1820be57d09p-585, 0x1.d8d69e0ed3f17p-235, 0.0, 0x1.2019c02cf0c94p-313,
     0x1.78aff0c77f04p-454, 0.0, 0.0, 0x1.d16ec572c2b24p-149, 0.0,
     0x1.3a9f5053ac46dp-656, 0x1.165861cb182cfp-807, 0x1.086184e6e54ccp-41, 0.0, 0.0,
     0.0, 0x1.5f70c29e5bca8p-1019, 0.0, 0.0, 0x1.f7ba0540cb0d8p-933,
     0x1.583cfaad8d46dp-20, 0x1.89371e81f82c1p-464, 0x1.3b418565a860ap-566,
     0x1.893d23b6d48dep-753, 0.0, 0x1.f2e10d54ea31p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.259240481400bp-50, 0x1.b2795333c90eap-982, 0x1.f3cc2f190ceeep-133,
     0x1.c7070f0236421p-496, 0.0, 0.0, 0x1.74cfe6ada3a17p-324, 0.0, 0.0,
     0x1.e38e7b7ce5d4cp-593, 0.0, 0x1.95ebb9cc83917p-964, 0.0, 0x1.89d86b9459cefp-907,
     0x1.33fc35addab4cp-528, 0x1.9de2eccc2d30ep-784, 0.0, 0.0, 0x1.a8e0f28cdacaep-722,
     0x1.628571a9d27c7p-257, 0.0, 0.0, 0.0, 0.0, 0x1.de01d769c385ap-170,
     0x1.7d5148f30ab9p-457, 0.0, 0x1.b185e358f22fcp-607, 0x1.3d5b6fd3d0b56p-466,
     0x1.f0a3edec149b5p-155, 0x1.e7ad40f4b3235p-934, 0x1.813ec25ec10e9p-58, 0.0,
     0x1.2d6dc468ba305p-585, 0x1.708bf3b1c5407p-401, 0.0, 0.0, 0x1.ab5a2461e9895p-774,
     0x1.f077012f1b4f6p-911, 0x1.ad430e7e96328p-181, 0.0, 0x1.059094624a8d3p-848, 0.0,
     0.0, 0x1.83ed3b3876736p-626, 0.0, 0x1.9ff2aff0866ffp-392, 0x1.c187e998530e7p-912,
     0.0, 0x1.36d5dbc39ad97p-865, 0.0, 0x1.21b3e4d7ac9abp-216, 0x1.d84b8e10624d4p-436,
     0x1.df9901b7f436cp-33, 0.0, 0x1.29dd6549d3fb3p-402, 0x1.bbb87744bec4ep-84,
     0x1.279a50005c46p-934, 0.0, 0x1.af9b3bad1aa02p-936
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
            tmp1 = Sleef_finz_coshd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_coshd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_coshd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
