/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid1_u05purecfma.c --function \
 *     Sleef_finz_sincospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.06cec7911ab65p-346, 0.0, 0.0, 0.0, 0x1.de16fea49d082p-282,
     0x1.32eb684506d3cp-969, 0x1.a3caa4fef5e3ap-395, 0.0, 0x1.c5f88f5ca752dp-894, 0.0,
     0x1.f0d941d2781c2p-302, 0.0, 0x1.dd29ef9b8f462p-647, 0.0, 0x1.794c03f1bacbcp-385,
     0.0, 0.0, 0x1.6503c9da55ca1p-815, 0x1.3ba4930acebd3p-1022, 0.0, 0.0, 0.0, 0.0,
     0x1.4fa2b8f7149f3p-895, 0.0, 0x1.50d95c834d116p-686, 0.0, 0x1.ef1b052749a9p-117,
     0.0, 0.0, 0x1.02231736362b2p-780, 0x1.5517c088cbb1cp-352, 0x1.c3442094a6a42p-649,
     0.0, 0x1.ee55d1aa1360dp-290, 0.0, 0x1.2c5f296826ae2p-45, 0x1.683a1bbf1a6ddp-243,
     0x1.1235f5d1a0e57p-476, 0.0, 0x1.71156716a21adp-730, 0.0, 0.0, 0.0, 0.0,
     0x1.9a4d61ac2fe1ep-645, 0x1.5ecf558e9f297p-178, 0.0, 0.0, 0x1.3daad41a20075p-117,
     0.0, 0.0, 0x1.0552333cb947fp-366, 0x1.6fd8fb9ca463ap-559, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.02559bb157026p-943, 0x1.0876c9335141ep-107, 0x1.f5eb0e8b30487p-129,
     0x1.fc5f4a271e13fp-353, 0x1.f85b1f3c06b25p-825, 0x1.9b552d9069cb3p-132, 0.0,
     0x1.9ebea3169e96ap-298, 0x1.b1ed8c41a63cep-518, 0x1.d45619fb8dacbp-414,
     0x1.9c9b8d7a4c3e4p-189, 0.0, 0.0, 0x1.2d9011a68f604p-204, 0x1.ef5bfebcf228fp-796,
     0.0, 0.0, 0x1.47fce856f5b1ep-126, 0.0, 0x1.ac9b4513c2065p-510, 0.0,
     0x1.32402fa43f447p-159, 0x1.4868a6577781ep-858, 0.0, 0x1.13beea6af60dp-976,
     0x1.db0d6ba671d3ep-88, 0.0, 0.0, 0.0, 0.0, 0x1.ac12847322b16p-603,
     0x1.0ea1727711415p-134, 0x1.7e4ebe7989d14p-787, 0x1.d618c5200d685p-722,
     0x1.9cff332e6e2fbp-324, 0.0, 0.0, 0x1.9201da4e1667cp-310, 0.0,
     0x1.45568dec52f32p-523, 0x1.82fd5b06c971p-248, 0.0, 0x1.da5aef6128ed4p-79, 0.0,
     0.0, 0.0, 0.0, 0x1.4a7a685e9c08cp-709, 0x1.f800220d5051cp-670,
     0x1.3005e6696ba5bp-803, 0x1.b57313243184ap-329, 0.0, 0x1.9c932c36cbeebp-1012,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5cb024074fbap-988, 0.0, 0.0, 0.0, 0.0,
     0x1.7a2464e8d3ff4p-2, 0.0, 0.0, 0.0, 0x1.43dd95633b9fcp-543, 0.0, 0.0,
     0x1.c0dce36798ca2p-970, 0x1.b91ce544b8728p-812, 0.0, 0x1.47ad564b6eccbp-788, 0.0,
     0.0, 0x1.9cd2cee85fa0ap-30, 0.0, 0.0, 0x1.f862648083a0ap-574,
     0x1.29794b134ec4dp-231, 0.0, 0.0, 0x1.346d3a934378fp-878, 0x1.9ac626047873p-559,
     0x1.6eb8c53987696p-136, 0.0, 0x1.46a20d17b22efp-23, 0.0, 0x1.87db68b6ca7f6p-772,
     0x1.cd0ab579f7d57p-146, 0.0, 0.0, 0.0, 0x1.93107fcd41f0bp-962, 0.0,
     0x1.fefe55a939d03p-618, 0x1.ec750995cdda7p-950, 0.0, 0x1.f930f8110a84cp-816, 0.0,
     0x1.a922eb70d9a99p-347, 0x1.142d4fc9e5e56p-499, 0x1.5dc07b93b01ebp-690,
     0x1.5554da348d415p-507, 0x1.2b2271e31a9ep-413, 0.0, 0x1.bd69a8bd6223ap-390, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.34f277d33b389p-66, 0x1.d9425490d9924p-346, 0.0, 0.0,
     0x1.df602930ba29ap-44, 0.0, 0.0, 0.0, 0x1.f5599dd769654p-586, 0.0,
     0x1.0893cc3c4159ap-308, 0x1.e28f5cb94ba07p-450, 0x1.c3eb085aaeef5p-405, 0.0, 0.0,
     0.0, 0.0, 0x1.4df899ca878d5p-900, 0.0, 0.0, 0x1.55afbc587f326p-945,
     0x1.404be788b8df8p-1013, 0x1.02a064a62e0fdp-197, 0.0, 0x1.c734d9cd62382p-400,
     0.0, 0x1.136de2801adecp-473, 0.0, 0.0, 0x1.afb1ad1056d56p-200,
     0x1.b142c2a784aap-283, 0x1.99cc589697ff7p-358, 0x1.72ef4d8ca4031p-398,
     0x1.528d2dc0da206p-451, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.acfa1451babd9p-58,
     0x1.434ef9bdc175cp-819, 0x1.254b271b29644p-966, 0.0, 0.0, 0x1.d802aed81c66p-813,
     0.0, 0x1.8b2d2f52ca52cp-550, 0.0, 0x1.7390503136606p-234, 0x1.1f0edf07c0187p-763,
     0.0, 0.0, 0.0, 0x1.1f40206cb4caap-428, 0.0, 0x1.509248797cd2dp-543, 0.0, 0.0,
     0x1.d0eb0336e3bcdp-551, 0x1.1f230b43fdb63p-756, 0.0, 0.0, 0x1.7e8803f90a7fp-395,
     0x1.f9770bd399ca8p-687, 0x1.90f031b5e8922p-926, 0x1.60a3e5d105775p-453,
     0x1.8500178d3847p-99, 0x1.ae5c9e975c721p-318, 0.0, 0x1.85f13e06bb049p-180, 0.0,
     0x1.3d770f5a476acp-407, 0x1.72ca66ae44a18p-551, 0.0, 0x1.10031a892e72ap-134,
     0x1.cfed3fc832513p-399, 0x1.0f5e2c4b8528ep-120, 0x1.abc38c731fcd6p-430, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.31ca641281976p-482, 0.0, 0x1.c12c79da3f79ap-881,
     0x1.44cf67d767318p-95, 0x1.b3a15fe79fd42p-178, 0.0, 0x1.fa917938d36b5p-1005, 0.0,
     0x1.e50673cd1db35p-784, 0.0, 0.0, 0.0, 0x1.5527a89ae1bc5p-557, 0.0,
     0x1.7d740372c6895p-897, 0.0, 0x1.d908b15f140dbp-579, 0.0, 0.0,
     0x1.cab259f0ab7e1p-31, 0x1.ab4fb31b0bf8cp-723, 0x1.40b4ec7846321p-833,
     0x1.732d010457af6p-891, 0.0, 0x1.1244d65bcc16ep-610, 0x1.9d400718850e6p-1004,
     0.0, 0.0, 0.0, 0x1.6e87c2e388f7fp-222, 0.0, 0.0, 0x1.79896c609aba8p-712,
     0x1.e9f0be6ece02cp-243, 0x1.c9386a5f9f3d4p-483, 0.0, 0.0, 0x1.a53c6c6644d8ep-866,
     0.0, 0.0, 0.0, 0x1.0f46d06edbcb2p-612, 0.0, 0x1.fe318b819e44cp-237,
     0x1.02aa59d958fc8p-142, 0x1.e043a470236e7p-782, 0.0, 0x1.af92d2445133cp-504, 0.0,
     0.0, 0x1.dd87a2124abd3p-800, 0.0, 0.0, 0x1.baff6bc9a21f8p-632, 0.0,
     0x1.1628ed7d3808p-646, 0.0, 0x1.0fe88ac19a1f3p-976, 0x1.deaf25d566436p-960, 0.0,
     0x1.30e9cf426475ep-507, 0.0, 0x1.63b97422239cbp-817, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ee5acd8af9694p-131, 0x1.06955f978c9fep-688,
     0x1.32d3c6d6fb3afp-597, 0.0, 0.0, 0x1.a14167dcc9a2ep-546, 0x1.5e241e2a95fb7p-519,
     0x1.eb4965c695ce6p-759, 0x1.433696fb4f3aap-579, 0x1.c94df2be9591cp-688,
     0x1.40354bc323372p-342, 0.0, 0.0, 0x1.dc0ab61a9ba0ep-239, 0.0,
     0x1.3366f6cc22ea8p-390, 0.0, 0x1.db51157ae3c4ep-544, 0x1.7fd02f8ef30b7p-285,
     0x1.abff7ab9414e2p-375, 0x1.f764cde25c2f8p-450, 0x1.8ed40cd719806p-151,
     0x1.1efbb37783dp-987, 0.0, 0.0, 0x1.3049a4bf302abp-1008, 0x1.94c7073be8c82p-710,
     0x1.c5970211a5a89p-208, 0.0, 0.0, 0x1.299e7a1933d0bp-819, 0x1.ed2a38d75fee3p-8,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c73185f2a2c6p-991, 0.0, 0.0,
     0x1.58a7ecd8dd86ap-800, 0x1.c98d48af94c5dp-855, 0.0, 0x1.561e7728b5d56p-31,
     0x1.c394b1498008fp-115, 0.0, 0.0, 0.0, 0x1.1c74e597c32a3p-954, 0.0, 0.0,
     0x1.0385b3e5f0219p-704, 0.0, 0x1.30b2367229898p-453, 0.0, 0.0,
     0x1.407d2d8234f74p-814, 0x1.f6310b31b514p-1005, 0.0, 0x1.6845f781bbf81p-966,
     0x1.e3776b6026224p-243, 0.0, 0.0, 0.0, 0.0, 0x1.062ccc54982f3p-345,
     0x1.07f6ba3d8cd8ap-734, 0x1.c9e6c5b1b822ep-293, 0.0, 0x1.034670450f178p-817, 0.0,
     0x1.aa800f91e0a52p-1019, 0.0, 0x1.6136ea410a415p-865, 0x1.7d18ce454265cp-433,
     0x1.b99a756456e1cp-275, 0x1.797702f305d52p-808, 0x1.bd929c23f9526p-921,
     0x1.652c51e4fa7b2p-426, 0x1.e706d682d2ecp-311, 0x1.bac8bd52d6e1dp-876, 0.0, 0.0,
     0.0, 0.0, 0x1.931bfd885e917p-340, 0x1.a0557431c33cp-807, 0.0,
     0x1.ce79346e1f652p-39, 0x1.cb33c3cf86721p-897, 0x1.4a2f2e5367b38p-855,
     0x1.66d15c83dbdcfp-513, 0.0, 0.0, 0.0, 0x1.ffd6a1789dccep-743, 0.0,
     0x1.c4f0d998277a9p-352, 0x1.78936ebcd85bdp-910, 0.0, 0.0, 0.0,
     0x1.41a8adb4d7548p-249, 0x1.5bafff650c7e3p-482, 0x1.cd28c81640615p-622, 0.0,
     0x1.a4faddb8db44p-234, 0.0, 0.0, 0.0, 0.0, 0x1.c279f3e5153a6p-896, 0.0, 0.0,
     0x1.b8f87cbd5df0ap-177, 0x1.fc1f8994c2abp-907, 0.0, 0x1.2b84fe5f307bfp-530, 0.0,
     0x1.f379a644b8f4p-48, 0x1.4d712955cf4b5p-674, 0.0, 0.0, 0x1.724f88d422facp-366,
     0.0, 0.0, 0.0, 0.0, 0x1.9f5e2c1639f25p-753, 0x1.7d978a9edff9fp-327, 0.0, 0.0,
     0x1.5cdcd0a787c87p-803, 0x1.6e476d0c0a016p-270, 0.0, 0.0, 0.0,
     0x1.4b3f40670932ap-171, 0.0, 0.0, 0x1.0a9a3a075c3c3p-265, 0.0, 0.0,
     0x1.361b08ad0efedp-865, 0x1.75bb4290afcb5p-790, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8e513dcc01216p-231, 0x1.95698fb998269p-989, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02935a2d6b287p-997, 0.0, 0.0, 0.0, 0x1.d1df1a2e38c01p-428,
     0x1.061f4112d8de1p-653, 0x1.793163a33b33ep-325, 0x1.406546432eb04p-1004, 0.0,
     0.0, 0x1.5ab7472bc26cep-148, 0.0, 0.0, 0x1.77d5fe15ee783p-664, 0.0,
     0x1.084afbdb94dc9p-120, 0x1.53d28ff6963a3p-850, 0.0, 0x1.794f5934fa35ep-929,
     0x1.2ad4e5fefb70bp-604, 0x1.a1c3e847f0516p-534, 0.0, 0.0, 0x1.b65cd76ad593ap-156,
     0x1.2d36e31d08cfbp-419, 0.0, 0.0, 0x1.32783926ac9aap-901, 0x1.3425977b31ceep-36,
     0.0, 0.0, 0x1.46eb8d020fdd8p-991, 0.0, 0.0, 0.0, 0.0, 0x1.55e8528481e04p-592,
     0x1.50b5f77e8a699p-526, 0x1.04f33ff130123p-37, 0.0, 0.0, 0x1.16060e612fc06p-766,
     0.0, 0x1.7f5f3c6e3177bp-334, 0x1.4a69e070ef224p-790, 0x1.e267dd2615923p-229,
     0x1.ae2fb2618b884p-203, 0.0, 0x1.c0227758dc7fep-557, 0.0, 0.0, 0.0,
     0x1.03b058e1cf5ccp-737, 0.0, 0x1.385f65f5c7fe7p-270, 0x1.eb8f643769f34p-1021,
     0.0, 0x1.6f005cef6b208p-832, 0x1.0678f00e8ed0ap-199, 0x1.7cb1c311d0b75p-559, 0.0,
     0.0, 0.0, 0x1.f017a396587e7p-562, 0x1.f977cc09424e5p-673, 0.0,
     0x1.5a408d3d567c7p-47, 0.0, 0x1.912c372af4e8ap-396, 0.0, 0.0, 0.0, 0.0,
     0x1.37e645b4d6faap-797, 0.0, 0.0, 0x1.5e9c8c98c2c78p-224, 0.0,
     0x1.8ded184feb765p-467, 0.0, 0x1.da9c817b91967p-696, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fd656d751a45dp-130, 0x1.7cff26e54a5ddp-492, 0x1.36e53ca8f46b1p-677,
     0x1.ac1547bd2abe3p-822, 0x1.1fd365ea9aba8p-937, 0.0, 0.0,
     0x1.20af9ea8718bdp-1015, 0x1.82407118003c1p-101, 0.0, 0.0,
     0x1.ce757db4664b3p-1001, 0x1.335647b61faccp-275, 0.0, 0x1.2df4627e326a8p-252,
     0x1.654b4ba178686p-458, 0x1.aadcf7d4128e6p-975, 0x1.e24caf68a10d3p-404, 0.0,
     0x1.10670fa804402p-148, 0.0, 0x1.1ac10655b8063p-794, 0x1.9db1f8f829cd2p-888, 0.0,
     0.0, 0x1.ae4120d3bff8bp-924, 0.0, 0x1.4250d6b3179a6p-451, 0.0,
     0x1.7da783a31f83p-124, 0.0, 0x1.fa8e021401d51p-662, 0.0, 0.0,
     0x1.00260c070d09bp-926, 0x1.5cb06ba2e3ceep-124, 0.0, 0.0, 0.0, 0.0,
     0x1.a1b762d641f28p-487, 0x1.c89188009a7fcp-746, 0x1.c3b7205c34ba7p-799, 0.0,
     0x1.34422720ab3cap-756, 0x1.6c33aee26fffep-725, 0.0, 0x1.cf3281c10579cp-589, 0.0,
     0x1.ed8a832cc0fc7p-920, 0.0, 0.0, 0.0, 0x1.1f64eb814421dp-589,
     0x1.0185dbd61dc42p-144, 0.0, 0x1.73f994da036bbp-220, 0.0, 0.0,
     0x1.4862bab33b8cap-48, 0x1.804253c249c51p-632, 0.0, 0x1.96a319592b51fp-624,
     0x1.f49c53c1d2e3ep-239, 0.0, 0x1.bb22612bd6606p-293, 0.0, 0.0,
     0x1.f7ae13f65c349p-1011, 0x1.3416ee4596cbcp-495, 0.0, 0x1.892b7020a3c92p-509,
     0.0, 0x1.a7ce58ff992cp-22, 0x1.91495c0715784p-847, 0x1.f6aca225a692fp-627, 0.0,
     0x1.0fb5f8a31766p-303, 0x1.afb8e898bdf9fp-808, 0.0, 0x1.4ff097f9f4b12p-447, 0.0,
     0.0, 0x1.921a56b7c63b2p-413, 0x1.198332c92c2f6p-769, 0x1.733b6f705de9bp-44, 0.0,
     0.0, 0.0, 0x1.e25e3d9a16064p-584, 0.0, 0x1.f4d6c80cdd23fp-602, 0.0,
     0x1.7872fc26e91b2p-439, 0x1.7206a803c397ep-920, 0.0, 0x1.271a8ea80aa6bp-486,
     0x1.3aa2d26350d88p-584, 0x1.bb2be82c8ddf2p-271, 0x1.70acb36680548p-540,
     0x1.bf83e0094fa21p-244, 0.0, 0x1.97c64b1a165a5p-14, 0x1.fd855f044f2d6p-456,
     0x1.9cb72e0bae0ep-732, 0x1.5440f887e0811p-38, 0x1.20a0ba7178218p-299,
     0x1.08aeb695c1da4p-818, 0x1.c7cb73e605b9fp-242, 0x1.de16eecfcd98fp-258, 0.0,
     0x1.77d2a9ae85712p-302, 0x1.5beda3332e144p-104, 0x1.ac9c80d98fceep-623, 0.0,
     0x1.8175729f68fep-461, 0.0, 0.0, 0x1.1a1002679935p-380, 0.0, 0.0,
     0x1.7440e28d9dc4ep-467, 0.0, 0.0, 0.0, 0x1.f3ea827e19e65p-671,
     0x1.24cf29b9c0cfcp-484, 0x1.61d11875735ep-978, 0.0, 0x1.e794115506a11p-1015,
     0x1.9b2a071000e88p-510, 0x1.35c63e5da519fp-482, 0x1.c781ca4008e46p-855,
     0x1.7518145b26a84p-821, 0x1.938fd70db3948p-203, 0.0, 0.0, 0.0, 0.0,
     0x1.30ec57f1c0b9dp-683, 0.0, 0x1.d4d296a604bd8p-849, 0x1.0adcb51941efp-48, 0.0,
     0.0, 0x1.9a77a0b1a5df2p-561, 0.0, 0.0, 0x1.1b32be562edc7p-86, 0.0, 0.0,
     0x1.3cbd5b373ca57p-674, 0x1.b499cb9596d2fp-670, 0x1.7656f61839aa7p-322,
     0x1.32b8a2c6cb503p-362, 0x1.45e91c5eb0875p-1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.85033527abd2bp-672, 0x1.0d2be0c5001e1p-337, 0.0, 0.0, 0x1.bd12ca50a4c54p-161,
     0.0, 0x1.f91ee66d6b938p-768, 0x1.b3e236538f8bep-312, 0x1.3c7b191db882cp-206, 0.0,
     0.0, 0.0, 0x1.002263f84700cp-50, 0.0, 0x1.8cddf3fee0273p-64,
     0x1.f8f8ec2abf9cbp-1019, 0x1.a0298cc0a59c9p-764, 0x1.b65ae7da37fc7p-368, 0.0,
     0.0, 0.0, 0x1.64847cdf9569cp-258, 0x1.0b95cf2d01079p-900, 0x1.08f21d3087e0dp-112,
     0x1.453a479af8fb2p-901, 0x1.635a4edab1452p-484, 0.0, 0.0, 0.0, 0.0,
     0x1.b46d05b05ed84p-628, 0x1.d24f96ab0847bp-798, 0x1.b39c1c83ed74dp-823,
     0x1.4101967ee8bccp-320, 0x1.f6f4d3df467e7p-986, 0.0, 0x1.958b24ed9d8a6p-800, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7ca418d88dacbp-333, 0.0, 0x1.384f3e4b1d9d2p-372,
     0x1.f50fba2d90385p-697, 0.0, 0x1.e2b249c69c05ap-115, 0.0, 0.0, 0.0,
     0x1.c8f0a621f6021p-295, 0.0, 0.0, 0.0, 0x1.c5948ada3b6f3p-567, 0.0, 0.0,
     0x1.beaa2a434a5e8p-1006, 0.0, 0x1.5201d26f032a2p-462, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.837accfaf5114p-290, 0x1.e6062b68abf94p-958,
     0x1.d45011561d681p-996, 0.0, 0x1.7ef3955ef65a9p-826, 0.0, 0.0,
     0x1.352c665b72a9dp-952, 0x1.64cfeb4e54acfp-825, 0x1.997b320e3517ep-672, 0.0, 0.0,
     0.0, 0x1.4a9e6f49ac99fp-949, 0.0, 0.0, 0x1.d91dfab261be9p-973,
     0x1.ba700efc78dbfp-729, 0.0, 0x1.1cf2b9bdf2931p-963, 0.0, 0.0, 0.0,
     0x1.23c5c01110bfp-408, 0x1.9495a9c28b4eap-819, 0.0, 0x1.7cca20c3893b8p-696, 0.0,
     0.0, 0x1.0daf1efdc908cp-837, 0.0, 0.0, 0x1.04d129031f856p-734, 0.0, 0.0, 0.0,
     0x1.1032f04860e94p-458, 0x1.a908b17bdc13dp-820, 0.0, 0.0, 0.0, 0.0,
     0x1.a18144f1163b3p-441, 0x1.6e3db466183dp-706, 0.0, 0x1.e35fca8afef19p-746, 0.0,
     0x1.f54f09877f21ep-522, 0x1.8e1b2d2278182p-988, 0x1.bf76a944301a3p-334, 0.0,
     0x1.3fa0ac2071062p-203, 0.0, 0x1.02b07eaf425f5p-358, 0x1.b1c37cfc155eap-704,
     0x1.0735c275c89eep-234, 0x1.c3bd308968d83p-736, 0x1.e707b403fd53fp-294,
     0x1.61a4c41d78eb9p-761, 0x1.e4455d8ccc4f7p-94, 0.0, 0.0, 0x1.b5803e8536e55p-520,
     0.0, 0x1.3c636114291dep-88, 0x1.d276041cc17a3p-239, 0x1.eb2a8667e006ep-844,
     0x1.266bb57fa8d43p-342, 0.0, 0.0, 0x1.4edc6d5fb9edfp-767, 0x1.65a403509cf81p-21,
     0.0, 0.0, 0.0, 0x1.bbd46a4486a7fp-340, 0.0, 0x1.15b0fc47a229dp-176, 0.0,
     0x1.ffbf5c0a55c1ep-223, 0x1.bcd6c9161538ap-447, 0x1.50293c82084bbp-841,
     0x1.d8f63d8d9c77dp-74, 0x1.17fd375c14e2p-152, 0.0, 0x1.a6d97a4e7befp-518, 0.0,
     0.0, 0.0, 0x1.cc641b4d94d32p-668, 0x1.353e41cf3e044p-586, 0x1.be4af5ea90d8cp-171,
     0x1.8501d00f7b1f7p-765, 0.0, 0.0, 0x1.7e07f43f9fcebp-776, 0x1.25cf638e3dbeap-701,
     0.0, 0.0, 0x1.2b0181f601371p-653, 0x1.5f994f586ca54p-569, 0x1.a366398320d8dp-183,
     0.0, 0x1.ccc1e43a7dd98p-696, 0x1.af77d101cb2a2p-877, 0x1.0bb200d0c25ap-527, 0.0,
     0x1.e53a773bf2befp-140, 0.0, 0.0, 0x1.40a3ce8053bfdp-405, 0.0, 0.0, 0.0, 0.0,
     0x1.e46a2f97bba37p-841, 0x1.60e3be253016bp-462, 0.0, 0.0, 0x1.905992c86a95cp-622,
     0x1.d2a9234eea512p-616, 0.0, 0.0, 0.0, 0x1.30f7d6459c3cbp-634, 0.0, 0.0,
     0x1.0a90f63e00312p-752, 0.0, 0x1.84b29e0652cb8p-986, 0x1.e08f7a8bebe07p-920,
     0x1.c57cc20d0b67p-940, 0.0, 0x1.0b91740dd5b4cp-508, 0x1.429d37769a5edp-429,
     0x1.40a3922dcb95cp-71, 0x1.02a499f973f28p-558, 0.0, 0x1.84bc54b8b37c9p-958, 0.0,
     0.0, 0.0, 0.0, 0x1.c55c6821bfc75p-98, 0x1.8ed741f5ae0abp-927, 0.0, 0.0,
     0x1.a2f97a53b923dp-672, 0.0, 0x1.1e74a9b0ce813p-739, 0x1.c155c5c709fc8p-139, 0.0,
     0.0, 0.0, 0x1.755701b68cdabp-434, 0.0, 0x1.50bc2328fc2fep-355,
     0x1.9e3f45107767fp-851, 0.0, 0x1.6421ab7299cap-84, 0x1.9d72b3135deb6p-111,
     0x1.5d88356ba1ad6p-281, 0.0, 0.0, 0.0, 0x1.035dbad048e92p-860, 0.0,
     0x1.3d6074f17b733p-381, 0.0, 0x1.7084d6da9c82dp-430, 0x1.2ae905fa05002p-80,
     0x1.133135683d6dap-406, 0.0, 0x1.e2deccb5e224bp-596, 0x1.66381bb6666fep-573, 0.0,
     0.0, 0x1.c71f5162cc198p-260, 0.0, 0.0, 0x1.08d7e64dcc5d1p-716,
     0x1.1329d00548f0bp-100, 0.0, 0x1.c9847124bd113p-776, 0.0, 0x1.f368162a7b06fp-823,
     0x1.52a49d52ffaabp-207, 0.0, 0x1.d796a8423e50ep-385, 0x1.c828f94628ap-167,
     0x1.47771789cc648p-634, 0.0, 0.0, 0x1.3666d3826f84ep-527, 0.0
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
            tmp1 = Sleef_finz_sincospid1_u05purecfma(tmp0);
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
    printf("Sleef_finz_sincospid1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincospid1_u05purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
