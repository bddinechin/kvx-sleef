/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfd1_u10purecfma.c --function \
 *     Sleef_finz_erfd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.deea950ede62ap-598, 0.0, 0.0, 0.0, 0x1.8ad58c52646d9p-727, 0.0,
     0x1.3ecee9df703e7p-161, 0.0, 0.0, 0.0, 0x1.4ba460b05f695p-92, 0.0, 0.0, 0.0, 0.0,
     0x1.810fe68204eb3p-282, 0.0, 0x1.13319ae14a1f7p-497, 0x1.1423899ef91e3p-524,
     0x1.bd34e53fbd87fp-287, 0x1.bf23538e04569p-12, 0x1.c9f598a930684p-19, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2864de21f7606p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.60062df00201bp-579, 0x1.9e3a1457a271dp-902, 0x1.58daee5b73abbp-375,
     0x1.aa114d0f38ae3p-35, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4406e9e2c024p-475,
     0x1.66c28e1459f23p-333, 0.0, 0.0, 0x1.cf3f9baa37641p-200, 0x1.ee0acd1dccfcep-719,
     0x1.b7fb2383a6c69p-410, 0x1.61781be7503edp-550, 0.0, 0.0, 0x1.f90cc81015869p-235,
     0.0, 0x1.42fa83bbde26ap-173, 0x1.6ceaa91097e3ap-137, 0.0, 0.0, 0.0, 0.0,
     0x1.c6b17586e4fc4p-688, 0x1.5e7c2575b957bp-263, 0x1.0586f5962f654p-928,
     0x1.42605b665877dp-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c04fdd80d3bdp-916, 0.0, 0.0, 0.0, 0x1.6d9e2fb1e2989p-484,
     0x1.041aee85dc45cp-398, 0x1.c6a737e4fc8adp-207, 0x1.ba5d5a3abc795p-661, 0.0,
     0x1.2c01f552a7765p-1008, 0x1.6e0cba0ffea6dp-301, 0x1.4693b19912cf3p-932,
     0x1.72f71d8db6892p-901, 0.0, 0x1.e28afce620806p-110, 0.0, 0x1.22c9a4b4ec1ccp-684,
     0x1.6737f6ca1d0cep-70, 0.0, 0x1.ab37329115c4fp-985, 0x1.c486558d4f97ep-354, 0.0,
     0x1.91bc3092b0568p-24, 0.0, 0.0, 0.0, 0x1.418a769c1daefp-954,
     0x1.aa68e08fdeee4p-376, 0.0, 0x1.1855f19651525p-847, 0x1.edd4d5af984c2p-119, 0.0,
     0x1.cb2904b345c9fp-878, 0.0, 0.0, 0x1.367b9479732c2p-677, 0x1.e44ea20c72e27p-173,
     0.0, 0x1.b2be7b8d89219p-852, 0x1.4b66b7fb0e906p-750, 0x1.f9be30c59a5eap-196,
     0x1.71cd90ccd268ep-39, 0x1.dee2e627118eep-387, 0.0, 0.0, 0x1.01e3e1788f454p-555,
     0.0, 0x1.3a5163b66fbaep-997, 0.0, 0.0, 0.0, 0.0, 0x1.01dfd8eb5e0fep-157,
     0x1.73f434e0181d3p-117, 0.0, 0x1.cf47d23bd3e07p-174, 0.0, 0.0,
     0x1.7e5dcd19e42c8p-855, 0.0, 0.0, 0x1.c19f819d12322p-399, 0.0, 0.0,
     0x1.794c485e72c2ap-359, 0.0, 0.0, 0x1.47055181e976cp-974, 0x1.79ac3a33014e2p-667,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bc549331af5ep-579,
     0x1.c7f7aec3650bfp-588, 0.0, 0.0, 0x1.bc32d5c9a6681p-680, 0.0, 0.0, 0.0,
     0x1.de3465c59f218p-1006, 0x1.2347d8c41a186p-334, 0x1.2bdc127781aaep-51, 0.0, 0.0,
     0x1.ee0ee41a71af6p-112, 0x1.da9f1accc8ecbp-516, 0x1.936c9ce14e685p-865,
     0x1.c86cb449b785cp-1022, 0.0, 0x1.369cfc0d23897p-913, 0x1.a7ab19ed6a56dp-412,
     0x1.256573027fadap-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc4bd10d709a9p-514, 0.0,
     0x1.2368bc7f829c4p-775, 0.0, 0.0, 0x1.539281ae9c8b4p-406, 0x1.90e493762c18dp-714,
     0x1.621e37b3c2019p-833, 0.0, 0.0, 0x1.6829d4b613b0ep-122, 0.0,
     0x1.2fcb07ee90d13p-926, 0x1.287ca266a29aap-172, 0x1.1ad26e05ce58bp-502,
     0x1.a642d5356e4adp-753, 0x1.fd73e7ed147f7p-252, 0.0, 0.0, 0x1.c56e4aacfea61p-736,
     0x1.d3d00386ec8e5p-179, 0.0, 0x1.c7dd5ae5eb0d5p-568, 0.0, 0.0,
     0x1.1df1b24050e3cp-542, 0x1.b064e2cfc3a21p-1018, 0.0, 0.0,
     0x1.588660a99808fp-592, 0.0, 0.0, 0x1.35b6a361009dfp-218, 0x1.1798dea166b54p-953,
     0.0, 0.0, 0.0, 0.0, 0x1.3ca4e89e3d92ap-572, 0.0, 0.0, 0.0,
     0x1.504b1e7d2ecfbp-654, 0.0, 0.0, 0x1.21560146ec1dep-924, 0.0, 0.0,
     0x1.c56f2c6aa5ff1p-548, 0x1.f9d93ac9ffc9dp-498, 0x1.ea204e79c9f04p-591,
     0x1.764adbebd9ba9p-441, 0x1.a91d181cfb19fp-159, 0x1.fd7c67d0522c1p-232, 0.0, 0.0,
     0.0, 0x1.bf8c349656181p-377, 0x1.a407d98463df9p-14, 0x1.e9fc4f5d83e3dp-15, 0.0,
     0.0, 0.0, 0x1.87220902c30fp-714, 0.0, 0x1.fe0f612a8a118p-205, 0.0, 0.0, 0.0, 0.0,
     0x1.7ba72ae01318p-983, 0.0, 0x1.ed31f0f217b6dp-739, 0.0, 0.0,
     0x1.d69d41d6b49b1p-670, 0x1.5eb126ed9c4cap-1005, 0.0, 0x1.21c942f294ebap-865,
     0.0, 0x1.e80aca655a60dp-894, 0x1.c43ab8bd1d864p-430, 0x1.8b8b5f8ccbcf9p-953, 0.0,
     0x1.dcd91c9e7217ap-657, 0x1.e3ec090e2b441p-875, 0.0, 0.0, 0x1.ba2a56baf1ccp-788,
     0x1.5c8fd799d2062p-65, 0x1.d8411fb81faa5p-431, 0x1.9cdbe1430d626p-25,
     0x1.7ef485f49dacdp-512, 0x1.cc32c1001e8a7p-947, 0.0, 0x1.95eefc68c6ebep-339, 0.0,
     0x1.eca60307ef987p-142, 0.0, 0x1.5c1e4b552b1a2p-1004, 0x1.b19f24df1913bp-905,
     0.0, 0x1.f6bd6af8ac23ep-570, 0x1.493d9c3a9b6a4p-641, 0.0, 0.0,
     0x1.988dac639e007p-118, 0.0, 0.0, 0x1.ab40a7bf86d74p-213, 0.0,
     0x1.556bd69331f61p-121, 0.0, 0.0, 0x1.b6ca524599de3p-638, 0.0, 0.0, 0.0,
     0x1.39f3fde804bbfp-679, 0x1.3b71883532f0cp-323, 0.0, 0x1.2b55dcbcb2dd3p-621,
     0x1.3b35b9deee171p-294, 0x1.ec2c25a297251p-622, 0x1.df98b8c9d70dep-23, 0.0, 0.0,
     0x1.2c90bdd4fe178p-157, 0x1.b55664c984aefp-844, 0x1.3e8ffa5c8c54ap-442,
     0x1.4385bd060abc3p-838, 0x1.e72164ba1e75p-25, 0x1.7d3dc1938bc6bp-367, 0.0, 0.0,
     0.0, 0.0, 0x1.e59d41392a55bp-607, 0.0, 0x1.3cd64e33c9b73p-659, 0.0,
     0x1.bd6e1a007f7e2p-455, 0x1.6a9517d56c74cp-954, 0.0, 0x1.5b38085425165p-242,
     0x1.dadb86917dca1p-457, 0x1.898bc98f1839p-922, 0.0, 0x1.f97d2c9dff362p-874, 0.0,
     0.0, 0x1.6210b75dd6293p-33, 0x1.4686f32c81eddp-656, 0x1.6ad09e5e576b3p-323, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.741f6d22cb2bbp-178, 0x1.fbf1f7f19376cp-1021, 0.0,
     0x1.060eaa5a320a4p-275, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.468dea0cc57ebp-446,
     0x1.2cb6cbd05cf5dp-537, 0x1.3f99f4ff883e2p-821, 0.0, 0x1.ebd3211df2e45p-591, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db999724ad701p-429, 0x1.c9142170d45d6p-886,
     0x1.45be29d67c3dbp-942, 0x1.4b7e58ee8fd8cp-886, 0.0, 0x1.89026f708d8efp-484, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7246886264441p-1005, 0.0, 0x1.1defa1bb4320bp-74, 0.0,
     0x1.d7e17c4230c3cp-76, 0x1.7157972c6c7efp-780, 0.0, 0.0, 0x1.e76e9bf59c9cfp-262,
     0.0, 0.0, 0x1.5d8629a25aa2ap-369, 0x1.eb7a9415dbf71p-40, 0.0,
     0x1.4af166cd8de73p-977, 0x1.5e258269b5bb5p-637, 0.0, 0x1.b07597f5d790dp-551,
     0x1.8f03fbb8c1f1cp-117, 0.0, 0.0, 0.0, 0x1.e51fe9818bc7p-696, 0.0,
     0x1.0bb9128faea03p-78, 0.0, 0x1.554355f5d28adp-996, 0x1.7a00bc48b66d6p-438, 0.0,
     0.0, 0x1.a258b823faab6p-92, 0x1.6df72ecd0a0acp-159, 0.0, 0x1.d929be373e9ecp-507,
     0x1.ec495c510eebfp-265, 0x1.ff82be555d5c5p-818, 0.0, 0.0, 0.0, 0.0,
     0x1.e449dc4f049b2p-480, 0x1.f7f59971dc144p-514, 0x1.fcbaba4c90f0dp-637, 0.0, 0.0,
     0x1.ed673158b64cdp-134, 0x1.1181ba4dd0393p-395, 0.0, 0.0, 0x1.ba82f84bc7427p-460,
     0.0, 0x1.a9145f581ed0dp-74, 0x1.a4275c8014adap-179, 0x1.ca146ccf55d39p-765, 0.0,
     0x1.77dc9fadb989cp-379, 0.0, 0.0, 0.0, 0x1.6ab9bcba31a3dp-398, 0.0, 0.0,
     0x1.5734476355d63p-626, 0.0, 0x1.213df4a549633p-840, 0.0, 0x1.0f0f79da64e7ep-640,
     0.0, 0.0, 0x1.d861a9f7f5d1fp-987, 0x1.d488e2da55a2dp-890, 0x1.b7af48c6fa6a1p-488,
     0.0, 0x1.443624ba2644bp-116, 0.0, 0x1.72ecbfe4835b1p-986, 0x1.d67ce03992852p-266,
     0x1.3a945a33fdb7ap-566, 0x1.2328e80386335p-695, 0x1.b3676099805e3p-274,
     0x1.78975f0e09808p-462, 0x1.fe742fce916ccp-69, 0x1.bf6befe07cebdp-990, 0.0,
     0x1.9a9f902704e58p-342, 0.0, 0.0, 0.0, 0x1.5a94e73a88819p-264, 0.0,
     0x1.0f5404e4cc242p-694, 0x1.cf9e38234d979p-145, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6a60929b16c58p-423, 0x1.e508b923ee91cp-866,
     0x1.f6d90ebcfc28dp-997, 0x1.76e0a4f68fb12p-310, 0.0, 0.0, 0.0,
     0x1.0df7be8f27dd2p-861, 0.0, 0x1.1f030dd8fda0fp-831, 0x1.57b23e935ce16p-716, 0.0,
     0x1.86f7ab9c23a56p-154, 0.0, 0x1.09c93d26dc414p-1, 0.0, 0.0, 0.0,
     0x1.562f0a73d9629p-358, 0x1.f9f6a86cc3d5p-448, 0.0, 0x1.44a48fc18736fp-428, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dcf0a6b1f59dp-1022,
     0x1.ce9d31c3a09acp-870, 0x1.5276c89c33c2ap-796, 0.0, 0x1.b454dba711b2ep-58, 0.0,
     0.0, 0.0, 0.0, 0x1.28e2605505089p-54, 0.0, 0x1.1130a296ddb76p-32, 0.0,
     0x1.1c43ec788b446p-746, 0.0, 0x1.06b3285f4e009p-1013, 0x1.8b3b803322af1p-702,
     0.0, 0x1.1b3830a20927dp-177, 0x1.16d8f5344abe1p-378, 0x1.c229f8bb66488p-967,
     0x1.c82ad8720a22bp-637, 0x1.f11a1f8dc1237p-612, 0x1.718122c7dc286p-797,
     0x1.847cd9301f139p-803, 0.0, 0x1.00be099a47e13p-257, 0.0, 0x1.4e16cf9783603p-418,
     0.0, 0.0, 0.0, 0.0, 0x1.9339de1c471adp-202, 0x1.59f3c2ca58a09p-438,
     0x1.496a5824395efp-1019, 0x1.0ad47c41874f7p-469, 0.0, 0.0,
     0x1.19476e0ad9cc7p-853, 0x1.59548254ebf4fp-282, 0.0, 0.0, 0.0, 0.0,
     0x1.76bb2af4daa4dp-121, 0.0, 0x1.a0a0ed4aff6ap-427, 0.0, 0.0,
     0x1.cbe7a01223d38p-672, 0.0, 0.0, 0.0, 0.0, 0x1.cd91f50bb43d7p-570, 0.0, 0.0,
     0x1.8825818b86502p-208, 0x1.d219ed273cd41p-503, 0x1.627e308e5edf1p-408,
     0x1.42beefb63c71ap-188, 0.0, 0x1.6619f5b9a55bdp-145, 0.0, 0.0, 0.0,
     0x1.4de9551b9283p-954, 0.0, 0.0, 0.0, 0.0, 0x1.fa5ce2e8bd68fp-665,
     0x1.dc61444c27793p-751, 0x1.69fbfc08f3793p-894, 0.0, 0.0, 0x1.921d65fee80ccp-683,
     0x1.86a0bf5efc56bp-882, 0.0, 0.0, 0.0, 0x1.a23aac1613975p-79, 0.0,
     0x1.04247f67ea648p-667, 0x1.d9d6042d8e8c2p-465, 0x1.b072b3ca2cc2p-280,
     0x1.57577aa87a62p-738, 0x1.1959cea1a2186p-412, 0x1.4bfb928eb412ap-986, 0.0,
     0x1.bc6d54042b138p-886, 0x1.6438d07bdc6edp-13, 0.0, 0x1.c18217ccd845ep-984,
     0x1.bac6e3d804bd9p-931, 0.0, 0.0, 0.0, 0.0, 0x1.b107bcab1871ap-723,
     0x1.d734e4e7ce7c6p-735, 0.0, 0.0, 0x1.10bb3427a4217p-325, 0x1.27aebbd2d1a1fp-977,
     0x1.b42a0a5a02438p-66, 0.0, 0.0, 0x1.5b5d4bdca6371p-262, 0.0, 0.0, 0.0,
     0x1.88f1b98ee5a3fp-401, 0x1.b88403f3c8bc8p-70, 0x1.42d8c3e6f410cp-671,
     0x1.23c97869058e1p-671, 0x1.c3183025a4eb7p-480, 0.0, 0x1.0d2b042ad7de5p-588,
     0x1.72864cba67769p-697, 0x1.c31e1bf60b278p-476, 0.0, 0.0, 0.0,
     0x1.e18bf36c0fc6ap-980, 0x1.8f01c20a497e4p-463, 0.0, 0x1.2e056ab10eceap-355,
     0x1.34e298f28e677p-281, 0x1.73799722c7a34p-495, 0x1.4450423c7ec07p-209,
     0x1.c339be9a10cfdp-961, 0.0, 0.0, 0x1.2a44fa622fdc2p-593, 0x1.a9bd688afa8f3p-662,
     0.0, 0x1.7acd7b4e262e4p-621, 0x1.f1af7da49171dp-780, 0.0, 0.0,
     0x1.4e8f6823bd8b9p-647, 0x1.8f717b48cb834p-453, 0x1.6154eda1a17b9p-628, 0.0, 0.0,
     0x1.c5428621c4003p-664, 0.0, 0x1.9cef37e41ac9ep-604, 0x1.1d61da7793d84p-983,
     0x1.52c706d12183dp-450, 0.0, 0.0, 0.0, 0x1.87baebf0183edp-289,
     0x1.415381d25d15bp-11, 0x1.28a5b1ff87aa5p-445, 0x1.2f658b578a959p-554,
     0x1.c33116ff89ed4p-957, 0x1.b19c097cbb0ap-626, 0x1.773c7e7d350bap-859, 0.0, 0.0,
     0.0, 0x1.35da8562f55f9p-828, 0x1.b01c80580151dp-758, 0.0, 0.0,
     0x1.53455a2e5267bp-799, 0x1.dc7a1e5a2bfcap-166, 0x1.db2a0966fad9ap-136,
     0x1.e59de86d393fdp-357, 0x1.94aed87be59f4p-596, 0.0, 0x1.f0bb28be4f0aep-1013,
     0x1.c94c5b61c7015p-329, 0x1.77e16fab0a6dep-48, 0x1.36558614266c7p-12, 0.0, 0.0,
     0x1.cbe0fb5701a8p-65, 0.0, 0.0, 0x1.e471bc6351699p-591, 0x1.78f5f63b0311ap-433,
     0x1.9d762eb67566ep-168, 0x1.7c9f4af148f6ep-557, 0.0, 0.0, 0.0,
     0x1.411e55f168d24p-29, 0x1.aa3504417c343p-981, 0x1.0cf8910b8952fp-919, 0.0,
     0x1.943e3210a0acap-616, 0x1.3aad798a1bf4fp-105, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.25ab1b8a453ccp-753, 0x1.293fd6500c74ep-585, 0x1.062e6e92c9063p-798, 0.0, 0.0,
     0x1.85d6f673a3caap-395, 0x1.f72b697d2711bp-559, 0x1.168b89d1b5fcfp-790,
     0x1.dbb8f68658624p-237, 0.0, 0.0, 0x1.aa5ba83c4267cp-394, 0x1.22c23075dd909p-688,
     0x1.8cf6fdddeb7aap-46, 0x1.ba5d3b5b77af7p-515, 0x1.a560a935e74c1p-245, 0.0, 0.0,
     0x1.27fd6c80b992ap-13, 0x1.16f192af167aep-385, 0x1.6f6d1a3484cc7p-595, 0.0, 0.0,
     0.0, 0.0, 0x1.ad25bd6fb7b9cp-872, 0.0, 0.0, 0.0, 0x1.ebc8a11d4b61fp-371,
     0x1.030abfd0d769fp-251, 0x1.e98c0207ed44ap-43, 0x1.54f267a54ccd6p-777, 0.0, 0.0,
     0x1.15b86cf3c7334p-692, 0x1.883853b2f41a1p-422, 0.0, 0x1.f992dc8a66a4dp-238, 0.0,
     0.0, 0.0, 0.0, 0x1.334e36ab603cdp-523, 0x1.deb920a07e50ep-736,
     0x1.3f70ecaec5645p-1001, 0.0, 0x1.ad9bc89789ac7p-911, 0x1.2533495aa74a1p-231,
     0.0, 0x1.33bec271107e9p-280, 0x1.9f12fbe11f3f1p-624, 0x1.6f67815953f6cp-307,
     0x1.3be6a60564b9ap-214, 0x1.7dd58728d31c8p-622, 0x1.cd5aa68a8e333p-66, 0.0, 0.0,
     0x1.107d71acfe2f8p-1018, 0.0, 0x1.3ebd01ac1ac9bp-305, 0x1.a5b1345e8a5e6p-671,
     0.0, 0.0, 0.0, 0.0, 0x1.a136abfada05p-516, 0x1.ef6e2b611fe0fp-337, 0.0, 0.0, 0.0,
     0.0, 0x1.d6fac636b5f8fp-971, 0.0, 0.0, 0.0, 0x1.d5d31df6b3e77p-607, 0.0,
     0x1.10ecccbcd34acp-670, 0x1.a40bff35a7046p-705, 0.0, 0.0, 0.0,
     0x1.f95e05c4b01cp-1003, 0.0, 0.0, 0.0, 0x1.6d7151c8759c7p-779, 0.0,
     0x1.247c5347fe8afp-779, 0x1.8a963b7045cafp-329, 0x1.e747833d3685bp-452, 0.0, 0.0,
     0x1.4e958115191a5p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7611327ebf0d3p-765,
     0x1.b6a1fc133d0e2p-183, 0x1.86f172ff4600bp-831, 0.0, 0x1.644e7d50b96b8p-161,
     0x1.4f6f5c6d6ba9p-912, 0x1.ed97bfed66005p-45, 0x1.3fe3720f71409p-536, 0.0,
     0x1.06dad40340098p-386, 0x1.2b3c4a8d90609p-436, 0.0, 0.0,
     0x1.07038d2e0fd2fp-1009, 0x1.5092b668bda0fp-168, 0.0, 0x1.54ba1943e2c5ap-376,
     0.0, 0x1.ee0b8d44ea47ap-748, 0.0, 0x1.76ec287f8d507p-876, 0x1.bc8bceaaf05fp-283,
     0x1.8ca34158d7198p-535, 0x1.5f5f0bf7daf0ep-721, 0.0, 0x1.339e743947a11p-993, 0.0,
     0.0, 0x1.b6c78b6b94cf6p-327, 0x1.71c4865456d8p-916, 0.0, 0x1.04666f2e81e0ep-231,
     0x1.cac15430a931ep-795, 0x1.5f3e65a53c2dbp-919, 0x1.2610694225008p-381, 0.0,
     0x1.6553f366fe092p-504, 0.0, 0x1.85ebea7bb9a57p-196, 0.0, 0x1.f858375475a7ap-984,
     0x1.bdba27326f3c8p-537, 0.0, 0x1.0933914cfaa91p-309, 0x1.8ed50282a3bcdp-757,
     0x1.29a6055fa1101p-213, 0x1.c387573c27dc4p-2, 0x1.3713c246a9653p-740, 0.0, 0.0,
     0.0, 0.0, 0x1.d3e4e34b2e721p-265, 0x1.291a5b7500036p-391, 0x1.5efc488853378p-452,
     0x1.4f589551c79dep-939, 0.0, 0x1.69c260e92a793p-980, 0.0, 0.0,
     0x1.a1b00a91eb05ep-408, 0.0, 0x1.0a434f300397bp-771, 0x1.a7382e9c911cfp-1014,
     0x1.a284440c80fbep-911, 0x1.9e48b68404436p-770, 0.0, 0.0, 0.0,
     0x1.3da7b4eae81fap-941, 0.0, 0x1.cd8a2dd17658cp-597, 0x1.43ee0c2555e0ep-904,
     0x1.b995e1b93e82cp-88, 0.0, 0x1.d8c8330a94c07p-46, 0x1.0cf2230e83fp-549,
     0x1.baa92ff43568p-936, 0x1.d75e6ca263126p-816, 0x1.4bedf4465519p-49,
     0x1.4a3d66f0d475fp-820, 0.0, 0.0, 0x1.1ce9a953689dfp-73, 0x1.a9da80b53430dp-358,
     0.0, 0x1.2b799f7fc4bcbp-824, 0x1.ddded8b3fffap-179, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.718111ab41e6fp-197, 0.0, 0x1.1e40496e502a9p-110, 0.0, 0x1.b43215604e5c5p-319,
     0.0, 0x1.4bc27ae0b9aa8p-967, 0.0, 0.0, 0.0, 0.0, 0x1.3c6452d52aed4p-663, 0.0,
     0.0, 0x1.f3a26058485b5p-741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5ddef3bd781f3p-127, 0x1.821856f4baa83p-2, 0.0, 0.0, 0x1.29f1fe368e977p-518,
     0.0, 0.0, 0x1.019310437ec2bp-730, 0x1.9a039d9d66f7bp-357, 0.0,
     0x1.fd2b2b1cfc192p-765, 0.0, 0x1.bf0f64667df0bp-672, 0.0, 0x1.993440ebfbe2ep-515,
     0.0, 0x1.af9dca5690c1bp-71, 0x1.0554cd69034e5p-868, 0.0, 0x1.d5300dca5028cp-960,
     0.0, 0x1.aee8fa36b1b68p-220, 0.0, 0x1.b9cd2a2d60301p-408, 0x1.1d1d387f6eefbp-587,
     0.0, 0x1.5a442a1903068p-513, 0x1.15961f3d054f8p-80, 0x1.b6fbded82c3cbp-39, 0.0,
     0x1.ab9ae3e0f7831p-834, 0.0, 0.0, 0x1.e0c4b252d794ep-359, 0.0,
     0x1.1614c94e2d3f2p-9, 0.0, 0x1.00fb18ac7d61cp-719, 0x1.b95658c1cd422p-314, 0.0,
     0x1.13a8afe4d9342p-843, 0x1.1489e0e79bfbcp-449, 0.0, 0.0, 0x1.b02f8a7dd18d3p-567,
     0.0, 0.0, 0x1.d99208e08c28bp-120, 0.0, 0.0, 0.0, 0x1.42d5dcb6235fdp-786,
     0x1.93bc08d894095p-687, 0x1.fd29e9edc2c38p-531, 0x1.faab3d14c7c0dp-355, 0.0,
     0x1.47e7766898f5bp-222, 0x1.b67c711b89ccfp-916, 0.0, 0.0, 0x1.dba0489dcacb8p-877,
     0.0, 0x1.e685015564867p-529, 0x1.4bdc802754cffp-658, 0x1.67616ff3f8862p-321,
     0x1.e26cdacba393fp-97, 0x1.b05229db6913dp-209, 0x1.63d1515ab01ecp-69, 0.0, 0.0,
     0x1.808801a4efdcfp-549, 0.0, 0x1.042b198def552p-364, 0.0, 0.0,
     0x1.3f99275d593a6p-758, 0x1.7f5a5bd928e1cp-273, 0x1.d080b20dc0951p-274, 0.0, 0.0,
     0x1.ca1dd5fab8c95p-737, 0x1.96640956ecdd1p-181
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_finz_erfd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_erfd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfd1_u10purecfma bench acc %la\n", global_bench_acc);
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
