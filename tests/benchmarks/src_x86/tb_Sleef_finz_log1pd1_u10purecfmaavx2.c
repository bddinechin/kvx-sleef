/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pd1_u10purecfma.c --function \
 *     Sleef_finz_log1pd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.a6643ff8a2e26p-317, 0x1.79cd0fcc84eacp-189, 0x1.488ff71c759f8p-49,
     0x1.5e64bb7a66712p-723, 0x1.f5690149130d6p-341, 0.0, 0x1.f38bb3ab50d37p-834, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.653516f28b28dp-810, 0x1.2b19283711999p-144,
     0x1.e303fcb219683p-13, 0x1.21dd5506adf4p-932, 0x1.7e0ff5268046p-419, 0.0, 0.0,
     0x1.e6320e0cad575p-101, 0.0, 0x1.3bc25ea6c6a0ep-339, 0x1.130aad34d11aep-386, 0.0,
     0.0, 0x1.ba4a425cc8e51p-678, 0.0, 0x1.27f45847b4c2p-56, 0x1.cb88261bde7fcp-438,
     0x1.2918801a3676bp-863, 0x1.4d07343811e88p-754, 0x1.309843a1cc1ep-587,
     0x1.ff9a14f9381afp-405, 0x1.7164681e6d9d4p-793, 0.0, 0x1.9b6cdec87c0d4p-335, 0.0,
     0.0, 0x1.203a75a548daep-10, 0x1.1d52af7db9b38p-477, 0.0, 0.0,
     0x1.0cdbf43575574p-463, 0x1.a23f9b638e10cp-833, 0x1.5b94be64c786bp-499,
     0x1.ffd19e669049dp-275, 0x1.d839789c88f65p-612, 0.0, 0.0, 0x1.f30d32b590bap-276,
     0.0, 0x1.f0448d70e7b18p-154, 0x1.e8548b49d59fep-695, 0x1.e7607afbeef5p-769, 0.0,
     0x1.a4c549a5daa1bp-116, 0x1.28607e9428691p-779, 0x1.6283fef64160ep-806,
     0x1.63899b1fea5a1p-566, 0x1.890784e2838fcp-578, 0x1.f666bb4c4bd49p-865,
     0x1.68819820058e3p-175, 0.0, 0.0, 0.0, 0x1.1713f73e46dc7p-788,
     0x1.2a15331e35128p-224, 0x1.ea5ba9838a7p-254, 0x1.4ca7f8cf7ecadp-571, 0.0,
     0x1.d49be906af515p-258, 0.0, 0.0, 0.0, 0x1.0548cfd343113p-3, 0.0,
     0x1.0358983e7783ap-736, 0x1.484fe514f0b53p-793, 0x1.4b92dbc2f2bfp-177,
     0x1.9f98413bf5011p-163, 0.0, 0x1.a7f67ca4fa07bp-1006, 0.0,
     0x1.12ab54a814267p-710, 0x1.007a257f8a825p-485, 0.0, 0.0, 0x1.69ee4c68aefe9p-928,
     0x1.c7ff4038521bap-753, 0x1.fbc766a2ba197p-537, 0x1.005aa873e3ffep-712,
     0x1.124e2fd6f7c81p-43, 0.0, 0.0, 0x1.0ef44514fcfefp-964, 0x1.a4c7173b79702p-338,
     0.0, 0x1.785dd3cd5c2a4p-598, 0x1.010022df17c07p-246, 0.0, 0.0, 0.0, 0.0,
     0x1.e973fe1220b0fp-352, 0.0, 0.0, 0.0, 0.0, 0x1.bcecacd4ae66fp-652, 0.0,
     0x1.529349d4ce488p-305, 0x1.1eede0f39ed3dp-1003, 0.0, 0.0,
     0x1.1a71423222181p-804, 0x1.585071e1dd285p-979, 0x1.0b9abb4e075c5p-597,
     0x1.bf13ccbece511p-189, 0x1.5ea2c28018f49p-803, 0x1.773fe78663d9fp-171,
     0x1.a7b6185c0e82cp-999, 0x1.12ca0defdbe67p-46, 0x1.17c379f92c519p-160,
     0x1.e723e668e1a78p-598, 0.0, 0x1.efdec506f66b8p-689, 0.0, 0.0,
     0x1.180b4a4ec6954p-788, 0.0, 0x1.b2f8f3143f2e1p-210, 0x1.79dd3ece6fae2p-610, 0.0,
     0x1.8acc1428483d2p-489, 0.0, 0.0, 0.0, 0.0, 0x1.93c1b7b258627p-557,
     0x1.bbabdd1bfe9ap-903, 0x1.45687664b669cp-591, 0.0, 0x1.5d0568f696f68p-197,
     0x1.515349880e9dp-337, 0.0, 0.0, 0.0, 0.0, 0x1.250f74f6b4c07p-537, 0.0,
     0x1.cd6dbe0de287fp-999, 0x1.45f93208961f4p-921, 0x1.edd779dc2af44p-387,
     0x1.30fa910c8330cp-195, 0.0, 0.0, 0x1.8873177b062e3p-942, 0.0,
     0x1.c596dfdb0a1d6p-734, 0.0, 0.0, 0.0, 0.0, 0x1.cb6a64f4dcafap-684,
     0x1.5b4e9ad585ba1p-954, 0x1.c7f80eaaad82fp-957, 0.0, 0x1.c637051325521p-841, 0.0,
     0.0, 0x1.c7e39fd1ff1b3p-336, 0.0, 0x1.965fe7d7542ccp-794, 0.0, 0.0,
     0x1.d75cd4c0bccc4p-156, 0x1.6878c8a1dd31bp-440, 0.0, 0.0, 0x1.ad71cf00f6beap-693,
     0x1.aec0f6cf7ad19p-250, 0.0, 0.0, 0.0, 0x1.3c16db11f28bp-30, 0.0,
     0x1.d424a594585b9p-273, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d92fd2744dac6p-76,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ce659c0ad3c72p-744, 0.0, 0.0, 0x1.929b60e826136p-198, 0x1.970fc841c8209p-125,
     0x1.5be10a43599e3p-797, 0.0, 0x1.f00fbc7e5c56ep-223, 0x1.c24e4d4eec527p-459,
     0x1.8353ae3942777p-808, 0.0, 0.0, 0x1.422fb27c96071p-649, 0x1.d443baaadfce4p-205,
     0.0, 0x1.5bd1e5935b693p-253, 0.0, 0x1.aef603d4cbad9p-341, 0.0,
     0x1.158b3348eeb76p-857, 0x1.e5eb48d386d23p-612, 0x1.f9d2aa1d7db92p-591,
     0x1.5fd50d2375513p-824, 0.0, 0.0, 0x1.8ec3470c6cf4ep-920, 0.0, 0.0, 0.0, 0.0,
     0x1.1a6bfa5bfeed8p-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30c790460222bp-625,
     0x1.08fedc3a9af0cp-386, 0.0, 0x1.422fce50b2d97p-858, 0x1.660bd6044b768p-810, 0.0,
     0.0, 0.0, 0x1.e4a7c7f916a5p-294, 0x1.648e209647b92p-351, 0x1.39e37fca49f7dp-513,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a6d4e7c0cec8p-577, 0x1.345db0a8baf16p-224,
     0x1.7dbf0ed97424bp-355, 0.0, 0x1.7656def2886c5p-20, 0.0, 0x1.34b1c01f2c292p-571,
     0.0, 0x1.80c9a28ffbe4cp-330, 0.0, 0.0, 0x1.1fcd88f3a130bp-681,
     0x1.b93537089ee4ep-182, 0x1.f97003f2c36b3p-680, 0.0, 0x1.12778b0826f83p-871, 0.0,
     0x1.6db2101b31d67p-443, 0.0, 0x1.fd364a9b847dp-894, 0x1.5340af1c978b5p-301, 0.0,
     0x1.870a950ca945bp-658, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79485ea150cd2p-396,
     0x1.c949dba5c2ab7p-315, 0.0, 0x1.a512d6cd0cebcp-726, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.83cf090c150ebp-910, 0x1.0e78bb3ab0e5cp-310, 0.0, 0.0,
     0x1.b1fb1bf9e372ap-412, 0.0, 0.0, 0x1.674e8c60cd71p-322, 0x1.9a9f8b70db794p-658,
     0.0, 0x1.a2be8514a5d97p-457, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e478e455821dep-875, 0.0, 0.0, 0x1.53ef988dd754ep-818, 0x1.09f7716e0c756p-664,
     0x1.5cb46f30299cap-822, 0x1.847da5852921fp-707, 0.0, 0x1.0c6d9538f2cc6p-6, 0.0,
     0x1.d5a5f963c74d7p-554, 0.0, 0x1.1e8f8fe69abffp-1009, 0x1.181036dbd5d2ep-410,
     0.0, 0.0, 0.0, 0x1.f8b5f3b3ebcd8p-354, 0x1.ab433bd7c84fbp-958,
     0x1.ad4579e144c37p-921, 0.0, 0.0, 0.0, 0x1.1c3a710d9dd13p-684,
     0x1.a128da5cb9cf4p-851, 0x1.340f6b559b9bep-908, 0.0, 0.0,
     0x1.d299be86a879ap-1016, 0.0, 0x1.6654be596474ap-235, 0.0, 0.0,
     0x1.7db28da39e104p-849, 0x1.48c60ed56e2a4p-1, 0.0, 0.0, 0.0,
     0x1.d2840697486cfp-798, 0.0, 0.0, 0x1.729a13219c70dp-356, 0x1.509a7a5988fe9p-137,
     0.0, 0.0, 0.0, 0x1.93aee317fa8e5p-355, 0x1.b59431559f119p-86, 0.0,
     0x1.a7c71d10939eap-561, 0.0, 0.0, 0x1.f815a3bd3abap-926, 0.0, 0.0, 0.0,
     0x1.60d2749344bb3p-936, 0x1.717bbd7026d26p-432, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8a283d2c49194p-253, 0.0, 0x1.7565a25f8929dp-989, 0.0, 0.0,
     0x1.f498ed062d492p-995, 0x1.46314b2683771p-983, 0.0, 0x1.9992693cf66e2p-995, 0.0,
     0x1.1779681e1da05p-314, 0x1.3e2a675aea717p-147, 0.0, 0x1.350c48848d9fap-258, 0.0,
     0.0, 0x1p0, 0.0, 0x1.d8d64f495188cp-708, 0.0, 0x1.eb3be3dabbf06p-372, 0.0, 0.0,
     0x1.7a7d4c1d81d42p-580, 0x1.754462751f1fdp-479, 0x1.06dac742c4b35p-1004, 0.0,
     0.0, 0x1.81de477275b6ep-165, 0.0, 0.0, 0x1.36d32ae235c16p-508, 0.0, 0.0,
     0x1.b8585f482e51bp-416, 0.0, 0.0, 0x1.02bb7a682f953p-384, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.18f837ca1dee8p-883, 0.0, 0x1.c4bce5e963facp-733, 0x1.b1d6dd029a76ap-468,
     0.0, 0.0, 0.0, 0x1.d1d0f1d9b0e53p-757, 0x1.709d8a8840c99p-272, 0.0, 0.0,
     0x1.85637ef02746fp-637, 0.0, 0x1.1065550625c56p-865, 0x1.799d3c44a6007p-295, 0.0,
     0.0, 0x1.81b4dc69c5572p-806, 0.0, 0.0, 0x1.a6555ae4cc893p-135, 0.0, 0.0, 0.0,
     0x1.5496df181de62p-108, 0.0, 0.0, 0x1.0e92de9136edep-554, 0x1.e7e4a3de7913fp-308,
     0x1.410995de87ce9p-510, 0.0, 0x1.46a291272d87p-292, 0.0, 0.0,
     0x1.eac15b5802d86p-731, 0x1.887e4d4d7df2bp-655, 0x1.f8520dedef755p-685,
     0x1.95a783428d83ap-658, 0.0, 0x1.5e49fc094ce61p-284, 0x1.785feacb19648p-737, 0.0,
     0x1.d5de4a5546392p-155, 0.0, 0x1.0ea0038a80c46p-524, 0.0, 0x1.5f4b3b0fd3878p-812,
     0x1.950f34061c257p-549, 0.0, 0x1.7a545464b5d76p-281, 0x1.8ab90e475263fp-97,
     0x1.5a19ec234968ap-825, 0.0, 0x1.625ebbbb5d532p-802, 0x1.1ceff3dc3c0fap-836,
     0x1.3cfb99af5cd6ap-26, 0x1.8b003e099b616p-924, 0.0, 0x1.8013e65259aebp-632, 0.0,
     0x1.3b0ae4cf288dp-92, 0x1.13acea5d342e4p-126, 0x1.09c75018c15edp-690,
     0x1.815935580d5bdp-360, 0.0, 0x1.29ec731d69673p-53, 0x1.236fdc9193e7ep-46, 0.0,
     0x1.b4a81901e9b9cp-349, 0.0, 0x1.b2c5cf9ef8758p-521, 0x1.06c06258533bdp-572, 0.0,
     0.0, 0.0, 0.0, 0x1.3b598c2cf9935p-723, 0x1.576b02aa2f9eep-594, 0.0, 0.0, 0.0,
     0x1.ba7168453067ap-623, 0.0, 0.0, 0x1.f367f4c9b5b33p-649, 0x1.ae9619f19f527p-369,
     0.0, 0.0, 0.0, 0.0, 0x1.2b716712564d5p-148, 0.0, 0x1.9deff5c2c90a2p-116, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.469df01e4c65p-842, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.184592d5a611ep-820, 0x1.d5395adab8fd2p-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a276c4c70e617p-464, 0.0, 0.0, 0.0, 0x1.90dabd2593a17p-420,
     0x1.b9acc08658d18p-860, 0.0, 0x1.c56040a7090a2p-924, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.bdf636a7fa743p-177, 0x1.9cb56a5f10528p-797, 0.0,
     0x1.835b55e97ee36p-194, 0x1.416d5bb3f0d82p-712, 0.0, 0x1.5051fe5f93712p-184, 0.0,
     0x1.ee963d9804c7fp-580, 0x1.97b949b96fab6p-26, 0.0, 0x1.ed5b0e7bbf996p-107, 0.0,
     0.0, 0x1.f141cf0978c58p-740, 0x1.2a2085a9a69abp-135, 0x1.48d2bbffb49c7p-521, 0.0,
     0.0, 0x1.6bcdb1924bb44p-421, 0.0, 0.0, 0.0, 0.0, 0x1.54523cf9a7464p-547,
     0x1.341aea166c68bp-356, 0x1.db7881bf03aaep-1016, 0.0, 0x1.f69e719dc85d5p-146,
     0x1.b189d727c399fp-886, 0x1.d92f2fe5123a3p-169, 0.0, 0.0, 0x1.2fb63cfbac826p-780,
     0.0, 0.0, 0x1.5d5b4ca392617p-753, 0x1.6c8ca41e8ab67p-250, 0x1.0ca59b2725a6p-661,
     0.0, 0.0, 0x1.02e747930b49ap-858, 0x1.3dc0d91b53323p-816, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f69a9328ec6a5p-837, 0.0, 0x1.09d52540580c3p-692, 0.0, 0.0,
     0x1.5794dcdbf6cdp-801, 0x1.20d0ad71ed6bbp-340, 0x1.a08b95d1be253p-42,
     0x1.39c44a6fb545ep-337, 0x1.d2ed0fe0b838ep-898, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da15220ca4ff8p-2, 0x1.8f5f42fdaf574p-580, 0x1.8e8572bfcc0fdp-278, 0.0,
     0x1.94ca4362ec74bp-458, 0.0, 0.0, 0x1.05b7596a57163p-96, 0x1.d617657a429c8p-728,
     0x1.a496cd54f5f62p-641, 0x1.70b78456ad949p-322, 0.0, 0x1.ce9eb27a7bc9ap-772,
     0x1.3e4b3b3008b33p-658, 0.0, 0.0, 0x1.6b454ab5962bep-435, 0x1.9495718390451p-387,
     0.0, 0x1.4d4c33541ce36p-482, 0x1.afe0aefc48565p-530, 0x1.54db4e1babb6ap-98, 0.0,
     0.0, 0.0, 0.0, 0x1.b3593950d7211p-776, 0x1.83b914626fbf2p-708,
     0x1.e89d9e2757873p-875, 0x1.bddcf925a3d3ap-370, 0.0, 0x1.c18163dccd5aap-85, 0.0,
     0.0, 0x1.597912e68f5c8p-552, 0x1.7e0ab72d792a7p-394, 0.0, 0.0, 0.0,
     0x1.88a46ab2bd92cp-57, 0x1.1b796899face6p-142, 0.0, 0.0, 0x1.6add4fe5b3eep-83,
     0.0, 0.0, 0.0, 0.0, 0x1.7d66a98e1e6b1p-241, 0x1.41a59df73f54dp-967, 0.0,
     0x1.e986c58501a3ap-826, 0x1.3d7e0c927352dp-857, 0.0, 0.0, 0x1.8edcd928824p-416,
     0.0, 0.0, 0x1.e3c403ec91fe9p-764, 0.0, 0x1.0bce3420de473p-139, 0.0, 0.0,
     0x1.ec3beb9580888p-263, 0.0, 0.0, 0x1.cdd2ac96e51aep-334, 0.0,
     0x1.5ab694c37efe9p-408, 0.0, 0.0, 0x1.dbfdeedcaa02fp-224, 0.0, 0.0,
     0x1.08de7b12f3628p-337, 0x1.6125905adab1cp-285, 0x1.aa8f9e7f1ca2dp-889, 0.0,
     0x1.432f77655e0a3p-35, 0.0, 0.0, 0x1.f19e340863aecp-27, 0.0, 0.0, 0.0,
     0x1.3a59b603b7937p-757, 0.0, 0x1.463d06ea551ddp-416, 0.0, 0.0,
     0x1.f4ebb903ef17ep-890, 0.0, 0x1.8fe83d1bd4306p-358, 0.0,
     0x1.4d9ac4b0f88f9p-1001, 0x1.5de173c6f2d2ap-828, 0x1.6451d1d7e051fp-16, 0.0, 0.0,
     0x1.48a6b3efbafdbp-884, 0.0, 0x1.54cb86114e216p-868, 0.0, 0x1.b549503d23d61p-423,
     0x1.bf6ba04bb3bd5p-733, 0.0, 0.0, 0.0, 0.0, 0x1.878dd16224a26p-690, 0.0, 0.0,
     0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f57b80bb03ce2p-950, 0.0, 0.0,
     0x1.5d8087f304597p-681, 0.0, 0x1.d69b044c39d72p-879, 0x1.834207e9a9622p-551,
     0x1.fc7e04d733d98p-714, 0x1.0438fbe71552dp-711, 0.0, 0.0, 0x1.72e03030c142bp-253,
     0.0, 0x1.937f36508a52bp-786, 0x1.5811235efa35fp-119, 0x1.bc6fbe13be2eep-802, 0.0,
     0x1.baae768a834eep-170, 0x1.63853f7d2627ap-648, 0.0, 0.0, 0x1.831e2bfce64a4p-147,
     0x1.9ab23e38aba2bp-592, 0x1.9151ba766e0fap-517, 0.0, 0.0, 0.0,
     0x1.ec61f643f710bp-200, 0.0, 0x1.bbbe139661e4ap-277, 0.0, 0.0, 0.0,
     0x1.d7d20383994b4p-503, 0.0, 0.0, 0.0, 0.0, 0x1.ce976a5fced76p-199,
     0x1.269279ec09ee2p-913, 0.0, 0x1.9a7cf4bff63f4p-1017, 0.0, 0.0,
     0x1.ab80e56564f42p-761, 0x1.16c965ee63431p-947, 0x1.36acefafee5e2p-968, 0.0,
     0x1.9fc9ea0f57254p-912, 0x1.343dd573d1c63p-138, 0.0, 0x1.bfc2335fa590dp-788,
     0x1.451ae8a7bff3ep-4, 0.0, 0.0, 0x1.cb5dab3150103p-1008, 0x1.0ca6abc3c82dep-994,
     0x1.54b31b69918ebp-456, 0x1.aa3b2d83bbb2ep-872, 0x1.4d7b2ffbe7787p-68, 0.0, 0.0,
     0x1.bcab6b5282123p-558, 0.0, 0.0, 0.0, 0x1.b49b97774d29ep-299,
     0x1.31285ae9b2808p-447, 0x1.1f8585846c6a9p-634, 0.0, 0x1.9ca263576731p-970, 0.0,
     0x1.c74af4c69d01dp-965, 0.0, 0x1.adc4de36fd95bp-851, 0x1.183e4aa919113p-648,
     0x1.7d5cf78a1a20bp-438, 0x1.9383e611112adp-753, 0.0, 0x1.9b1f89915617p-82,
     0x1.51b3fd701ab34p-753, 0x1.09e1749db8baap-513, 0x1.049fb032f98p-544,
     0x1.9deb68acea25ep-595, 0x1.5a1f29d4d7c72p-701, 0x1.2d8bb320b71f5p-1003,
     0x1.ac3c94c784486p-826, 0x1.ba8955deba7fbp-356, 0x1.68bcd86ed417p-657,
     0x1.c52ff713568a9p-534, 0.0, 0.0, 0x1.9d22cd38bdbb6p-750, 0x1.b30cdf6fb23c1p-270,
     0.0, 0x1.ec0f7932b5226p-167, 0x1.5b6d5b8a5cbf8p-624, 0x1.b6f57c5093608p-5, 0.0,
     0x1.352634a19be58p-156, 0x1.b141a7aeea686p-967, 0.0, 0x1.93e025d795df5p-318, 0.0,
     0x1.d66d6eae6f618p-410, 0.0, 0.0, 0.0, 0x1.4ab41475da745p-398, 0.0, 0.0,
     0x1.6d030391104a3p-881, 0x1.5e7deea90bb4ep-501, 0x1.5f4ab3649dc26p-1006,
     0x1.f93234e55c894p-733, 0.0, 0.0, 0x1.626e69ffb41b9p-178, 0.0, 0.0, 0.0, 0.0,
     0x1.4c729346b9eefp-381, 0x1.398550e796027p-885, 0x1.60390c2b956dap-847, 0.0, 0.0,
     0x1.6675623387e34p-942, 0.0, 0x1.18624255fba83p-158, 0.0, 0x1.99d31241fda94p-525,
     0.0, 0x1.b218d45497aa8p-407, 0.0, 0x1.2b7a04ee6207bp-511, 0.0, 0.0,
     0x1.cac1820a48c12p-123, 0.0, 0.0, 0x1.23075c82539bp-455, 0x1.89d6bb95825f7p-872,
     0.0, 0x1.0fb52197dd2d3p-817, 0x1.df7f9d94d9f52p-766, 0.0, 0.0,
     0x1.63dce5d61fd0cp-313, 0x1.867749afc96eep-642, 0x1.9dffb45966867p-371, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.71e1a17a24a4ap-276, 0.0, 0x1.e69d7be311bfcp-191, 0.0,
     0x1.108123dd26748p-617, 0x1.81dea6c29e0b1p-582, 0x1.b7b5fa00e0539p-1001,
     0x1.cbc32a2ea8f6fp-77, 0.0, 0.0, 0x1.803e334465faep-802, 0.0, 0.0,
     0x1.03ca2fae3a4adp-519, 0x1.b3ce838808b7fp-251, 0x1.8cf5712ead5cp-229, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8443b09ae8711p-664, 0.0,
     0x1.484054cfd1595p-145, 0x1.6b5ebda1f63a3p-271, 0x1.3308a3c8a66a9p-386, 0.0,
     0x1.53456cccdc9b4p-565, 0.0, 0x1.7266ff8e76dd2p-387, 0.0, 0x1.bdda994bf47b9p-408,
     0.0, 0.0, 0.0, 0.0, 0x1.8703ecf437701p-1008, 0x1.58f486808747cp-376,
     0x1.f741c8e1ff5f2p-704, 0x1.14c128bbb4a61p-491, 0x1.c3e194914560dp-477, 0.0, 0.0,
     0x1.95392dd1f0a9bp-1009, 0x1.0746126327174p-998, 0.0, 0.0, 0.0,
     0x1.d7b034721dd66p-360, 0.0, 0x1.0b133e42b8e22p-251, 0.0, 0.0, 0.0,
     0x1.0133fed9cbfd4p-62, 0.0, 0.0, 0.0, 0x1.32d341bbe136fp-462,
     0x1.e5728a9c83dap-110, 0x1.fa6a2add27f3bp-842, 0x1.ab4c49ae2033ep-93, 0.0,
     0x1.c4c83b90dfc7p-673, 0.0, 0.0, 0x1.d075bf617583dp-421, 0x1.2f61db6bcd862p-35,
     0x1.404d24179546p-772, 0.0, 0.0, 0x1.7261c930a6cf2p-54, 0x1.25e008553dd12p-743,
     0.0, 0.0, 0.0, 0x1.0a500ec0e6484p-151, 0x1.fb39ace3f05e4p-230, 0.0,
     0x1.78d0a09b26b29p-783, 0.0, 0.0, 0.0, 0x1.913c4a173f252p-157, 0.0, 0.0, 0.0,
     0.0, 0x1.c4628f59a9773p-764, 0x1.f7c9673530ddfp-41, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79900256934bcp-622, 0.0, 0x1.3bed2c639c30cp-975, 0x1.422bcb7d3ee79p-571, 0.0,
     0x1.8b2b70f14c9b9p-34, 0x1.1f5e798fe4f7cp-966, 0x1.1e42f14e91d3fp-68,
     0x1.9330427b8b03bp-893, 0x1.c2880d42709d9p-470
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
            tmp1 = Sleef_finz_log1pd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log1pd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log1pd1_u10purecfma bench acc %la\n", global_bench_acc);
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
