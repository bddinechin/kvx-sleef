/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpid2_u05avx2128.c --function Sleef_sinpid2_u05avx2128 \
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
     0x1.c4d20660736fdp-444, 0.0, 0.0, 0.0, 0x1.23e4522bac245p-895,
     0x1.8a331ae71a746p-102, 0.0, 0.0, 0x1.b34444517c13dp-511, 0x1.ecbc9cce54665p-609,
     0.0, 0x1.b60321e64bb57p-515, 0x1.4dfdcfb9c1098p-478, 0.0, 0.0,
     0x1.1a108a3371ea4p-68, 0x1.d3e05562a3f46p-657, 0x1.76f78baf781d6p-300,
     0x1.453e52f41f70ap-169, 0.0, 0x1.fbdd2dcfeffd5p-362, 0.0, 0.0,
     0x1.66555a1fb2803p-509, 0x1.9f16f54fcd111p-121, 0x1.dbf198b00537ep-710, 0.0, 0.0,
     0.0, 0x1.03f33146f0d16p-932, 0x1.da69f50f2a00ap-1012, 0.0, 0.0,
     0x1.0ee70ddd6151ap-302, 0.0, 0.0, 0x1.88f3cb1b4d447p-247, 0x1.22d9eb401db04p-670,
     0.0, 0x1.49468a4e4b9f7p-309, 0.0, 0x1.88d4347bf2d07p-243, 0.0, 0.0,
     0x1.eb9df0762feebp-632, 0.0, 0.0, 0.0, 0x1.937fad4ec2a48p-478,
     0x1.546514c0462fdp-319, 0.0, 0x1.843f3e836556cp-874, 0.0, 0x1.81bcb703064fbp-166,
     0.0, 0x1.f0c3755ee7293p-789, 0x1.2834dbea5b6bp-83, 0x1.0c809e6a16127p-22, 0.0,
     0.0, 0.0, 0x1.395da4b2c8634p-722, 0.0, 0x1.812cdf3eb139ep-63, 0.0, 0.0,
     0x1.258bfd46107dep-225, 0.0, 0.0, 0x1.87ec8e7da8699p-606, 0.0, 0.0,
     0x1.094890f3b01eep-1005, 0.0, 0x1.d6385a7049e8ep-784, 0x1.4d4caa4d0d636p-1004,
     0.0, 0x1.5afae946efa2bp-945, 0x1.9b03f649c79b7p-715, 0.0, 0.0, 0.0,
     0x1.f7fc8d47f7fa3p-858, 0.0, 0x1.048f06098d48p-474, 0.0, 0.0,
     0x1.1fab280d93399p-156, 0x1.a3ed439eaae76p-609, 0.0, 0x1.fc35baf4eca16p-704, 0.0,
     0x1.5b7ac96052fc5p-372, 0x1.8f307bbb86922p-75, 0x1.2a9162740e66cp-152,
     0x1.169832c384a25p-394, 0x1.6eedade1c3a35p-152, 0x1.d919cf09ca2eep-961, 0.0, 0.0,
     0x1.dabaa5453fddap-179, 0x1.174da30c4345ep-724, 0.0, 0.0, 0.0,
     0x1.b77d136abdfdbp-10, 0x1.2ba709c61c43ap-375, 0x1.9adfb84fc5141p-143, 0.0, 0.0,
     0x1.c792a14b10239p-986, 0x1.3826c64322fdbp-55, 0x1.f0f0f6b9b851fp-220,
     0x1.9240b854ee523p-56, 0x1.7ec1d7a7ef767p-45, 0.0, 0x1.ee68508982d37p-555,
     0x1.021d11f72a9eap-666, 0.0, 0.0, 0x1.e2f7949c2d4c2p-748, 0.0, 0.0,
     0x1.ad72520e04808p-350, 0.0, 0.0, 0.0, 0x1.b3fbf1574f49fp-184, 0.0, 0.0,
     0x1.962dede5e675fp-344, 0x1.a32adad4c65e4p-126, 0.0, 0.0, 0x1.59a59297ae42cp-637,
     0x1.aa5682dde5203p-257, 0x1.c4dda9fa80b23p-264, 0x1.6b23f59010907p-163, 0.0, 0.0,
     0x1.ea4a79ffaf9dfp-354, 0x1.1904384f2918ep-681, 0.0, 0x1.33c7224b9e71dp-1012,
     0.0, 0.0, 0.0, 0.0, 0x1.f05d29d471729p-526, 0.0, 0x1.51aef8244ae54p-887, 0.0,
     0x1.839484a6e1188p-167, 0x1.f262eaff2fdfcp-146, 0x1.010543dc008dap-759,
     0x1.91f52dc2e05bep-554, 0x1.93f9f2ea9fce1p-645, 0x1.eed4e9dc3bdebp-913,
     0x1.d2a4d88968bdcp-941, 0x1.df0f90994f86dp-254, 0.0, 0x1.56d7f6bb7d95bp-943, 0.0,
     0x1.a0347495f5e26p-298, 0.0, 0x1.ff0bd6674c17ep-894, 0.0, 0.0,
     0x1.3b081d1f98a41p-724, 0x1.dd35271980abp-793, 0x1.7ca7129ffa905p-91,
     0x1.31ec56582ddefp-334, 0.0, 0x1.402f35cf0da6ep-349, 0x1.99ab9191b048cp-873,
     0x1.288245af1353cp-373, 0x1.5d66a207a7c4ep-157, 0x1.3b1fbb42780d7p-402,
     0x1.27c41c2151db5p-604, 0x1.be78f4892dc55p-488, 0x1.a0d5db46aec5ep-552,
     0x1.7d95f5dd2b9fep-276, 0x1.f9bf9d8bd39f9p-1016, 0x1.1ec78da8779e6p-106,
     0x1.311d517f7859dp-994, 0.0, 0.0, 0x1.486c5bd36fa4ep-1010,
     0x1.ff72bd75de961p-286, 0.0, 0.0, 0.0, 0.0, 0x1.b032a4b280b25p-592,
     0x1.4f633af574a8cp-437, 0.0, 0x1.152ceafb76aa9p-532, 0x1.c99e6b21d3a7fp-782,
     0x1.5a2c31acdf14fp-486, 0x1.03c079a61cfe3p-412, 0x1.2e864daea0957p-706,
     0x1.84f4898d39ed8p-484, 0.0, 0x1.428c466ddf70cp-873, 0x1.363cdd00efe4ep-855, 0.0,
     0x1.9afebbaf4654cp-10, 0x1.de1d423e48d47p-949, 0.0, 0.0, 0.0,
     0x1.0dcae1520834p-164, 0x1.d3de322fc3ef8p-711, 0x1.eae733b75e383p-699,
     0x1.d2b7b37b21a1dp-253, 0x1.bb8ddd6804aa3p-646, 0x1.d0954537242cep-777, 0.0, 0.0,
     0x1.09a36c2d4d748p-327, 0x1.dcb9247ea2c2ap-694, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1fed7eb966797p-745, 0.0, 0x1.d662b0873fcc1p-940, 0.0, 0.0, 0.0,
     0x1.6c22365c65e3ep-571, 0x1.b10de3e3de71p-717, 0.0, 0.0, 0x1.0d06bf192ec31p-390,
     0x1.63d061e140abep-733, 0x1.fe1dd80ef2b62p-512, 0x1.e3d32537ccbd2p-964,
     0x1.8bf89ed2db16p-976, 0x1.517f1d60691c3p-490, 0.0, 0x1.824deb23ba7c5p-277, 0.0,
     0.0, 0.0, 0x1.c2dd821a2032ap-231, 0.0, 0.0, 0.0, 0.0, 0x1.b069491db1aecp-935,
     0x1.776dc4072e103p-986, 0.0, 0x1.73835f23ea084p-374, 0.0, 0.0, 0.0, 0.0,
     0x1.6ba6149a29224p-880, 0x1.885ad36a95aecp-822, 0.0, 0x1.12152db8700eep-151,
     0x1.5409ff0b7405ap-266, 0.0, 0x1.7116c2e11f647p-376, 0.0, 0x1.2c7a0e16cddd9p-27,
     0x1.d9265802c0ab4p-469, 0x1.73fa21cc97a02p-226, 0x1.e679be9c9460cp-121,
     0x1.afbf578ec13ap-510, 0.0, 0.0, 0x1.5674a5c2da574p-741, 0x1.424f1df48acc2p-223,
     0x1.70e473ac9d0bep-584, 0x1.cf0671a087ea9p-258, 0.0, 0.0, 0.0, 0.0,
     0x1.0c63c8a3a9917p-98, 0x1.4cb81245a1b55p-501, 0.0, 0x1.3d5d42d25052ap-387,
     0x1.5bd7c137e8ef1p-55, 0.0, 0.0, 0x1.a0ce4acf88519p-160, 0x1.fbf137a5f475fp-612,
     0x1.ecb86436cf6b7p-848, 0.0, 0x1.5166d0d2b680dp-216, 0.0, 0.0,
     0x1.5d913193414e9p-311, 0x1.89c734f426103p-615, 0x1.b7815f7262fap-519,
     0x1.318bd1aa6fe46p-340, 0.0, 0x1.25dfb395cb188p-799, 0x1.427a7dca858b2p-156,
     0x1.562c981ee7dp-636, 0x1.bd3f076f66e34p-1011, 0.0, 0x1.e7509dd72687dp-22,
     0x1.2de27fcad97eap-451, 0x1.849333c3a013p-52, 0.0, 0x1.ef74d48482757p-200, 0.0,
     0x1.9cc803d5e5313p-69, 0x1.fff521ced9b5ep-466, 0x1.5946b6e31c1ffp-922,
     0x1.61d1b18f8d18ep-42, 0.0, 0x1.ae2760685077ep-264, 0.0, 0.0, 0.0, 0.0,
     0x1.70a12c7b3468ap-254, 0.0, 0x1.a16065f5ba6aep-239, 0.0, 0.0, 0.0, 0.0,
     0x1.1b4d7b64a6cf3p-1022, 0.0, 0.0, 0.0, 0.0, 0x1.3af42609716fdp-296, 0.0, 0.0,
     0x1.0c5f79549fd73p-951, 0.0, 0.0, 0x1.59043533516c5p-961, 0x1.ebd089e0a1d76p-456,
     0x1.4d81ede5a461bp-936, 0.0, 0.0, 0.0, 0x1.2ca2ff9bcb34cp-817, 0.0,
     0x1.bc560082c6664p-638, 0x1.8164a4fcf4585p-674, 0x1.054a57ad34c3cp-149,
     0x1.cd182eb8dc03ep-192, 0x1.815344a388331p-1012, 0x1.c75edee8cd8a9p-463, 0.0,
     0.0, 0x1.b0e2c703be06cp-622, 0x1.2090b9b51abb6p-803, 0x1.162fe2ac0cb65p-610,
     0x1.bf09378f3dfb1p-72, 0x1.d97a27010a10ap-614, 0.0, 0x1.2a4e5b886f1bfp-514, 0.0,
     0x1.d0dfbb32efb8ap-729, 0.0, 0x1.4d198bfb5493cp-758, 0x1.1a148f526ad94p-387, 0.0,
     0.0, 0x1.00dff4a5583dap-199, 0x1.3132e86183962p-79, 0.0, 0.0, 0.0,
     0x1.ea1a63169c72ap-35, 0x1.e0d5fbe02fff5p-109, 0x1.f1c9a649d29bdp-573,
     0x1.1afbfbf0bb9a2p-294, 0.0, 0.0, 0x1.2d25bd413aac9p-310, 0.0,
     0x1.90a24f2bd18dp-579, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.44ef9f2e3c4b6p-763, 0x1.e6e029214705fp-530, 0x1.d607b976d8828p-268,
     0x1.9fee1e1b7146cp-829, 0.0, 0.0, 0x1.487245657cd3bp-535, 0.0,
     0x1.0d29cf8879a7p-258, 0.0, 0x1.675911b469f12p-922, 0x1.8015fc86530adp-991, 0.0,
     0x1.9f4f9a8d3caa2p-359, 0.0, 0.0, 0.0, 0x1.f85c3c69b5846p-824, 0.0,
     0x1.7b687f0308434p-718, 0.0, 0x1.db3a69ba5becdp-762, 0.0, 0x1.23a0f61796468p-954,
     0x1.4a942cf04b97dp-476, 0.0, 0x1.071405f216eb4p-46, 0.0, 0.0,
     0x1.2f7f78cbf3fd5p-684, 0x1.05726216505f4p-39, 0x1.730b9fdac1bdcp-970,
     0x1.47f1c0747904fp-203, 0.0, 0.0, 0.0, 0.0, 0x1.c8c5ffa3ae236p-373, 0.0, 0.0,
     0x1.dcf10734dfee8p-844, 0x1.fa2943a09312p-925, 0x1.f7faeb681b8bp-199, 0.0,
     0x1.21a2b717103b3p-588, 0x1.a996b5bba1868p-792, 0.0, 0x1.9537027e175f7p-150, 0.0,
     0x1.bdb842b732656p-641, 0x1.ae3de1402ff4fp-541, 0x1.b8a7348aaf6b2p-884,
     0x1.e44361dffdd09p-981, 0.0, 0.0, 0x1.37b4be1961566p-128, 0.0, 0.0, 0.0,
     0x1.2e584e0feb554p-959, 0x1.a4b198d0c7e08p-270, 0x1.9375682cddec9p-923,
     0x1.ed90942cdbafcp-944, 0.0, 0.0, 0.0, 0x1.4a4ae016e449ap-869,
     0x1.7fc50e3ac8b41p-95, 0.0, 0.0, 0.0, 0.0, 0x1.eca82219487edp-242,
     0x1.e7a39c4b9d1f6p-847, 0x1.0863e8e618f8ep-500, 0x1.d932dff004849p-682, 0.0, 0.0,
     0x1.ec19f6129354ap-737, 0x1.6ee0c1dce659ep-526, 0x1.16d4ae7cb045p-805,
     0x1.697902108a878p-48, 0x1.4ea8d9cbb8ea7p-53, 0.0, 0x1.1e31e081ce895p-1014,
     0x1.216e2c64e0eb4p-435, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5c53dce31c99p-363, 0.0, 0.0, 0x1.5857577fd0bb9p-120, 0.0,
     0x1.c90408045882p-325, 0.0, 0x1.25adaa236b9d2p-643, 0.0, 0x1.9d577e8eb7a35p-222,
     0.0, 0.0, 0x1.e641390b52423p-569, 0x1.3976fb042430dp-196, 0x1.40d9cb728fbb2p-264,
     0x1.0994de1766f3bp-14, 0x1.10770604fb52dp-653, 0.0, 0x1.0192c70067ef8p-354,
     0x1.bba99208f9d74p-58, 0.0, 0x1.3db488eb1aa8ap-47, 0x1.2865377c81748p-798, 0.0,
     0x1.ce493f5416bd6p-125, 0x1.1857d800312b4p-160, 0.0, 0x1.539b7d8473e0fp-694, 0.0,
     0.0, 0.0, 0x1.dc4fd3089652dp-834, 0x1.ae637db544ef6p-465, 0.0,
     0x1.10392f02292dep-475, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7b699526cd138p-284,
     0x1.e6cc95b310e58p-851, 0x1.3b6d873a90551p-290, 0.0, 0x1.1ee9ea02d93dcp-829, 0.0,
     0.0, 0x1.829380754e4d5p-520, 0.0, 0x1.3c986251621fp-682, 0x1.f47cdda24b0a6p-511,
     0.0, 0.0, 0x1.dc292a1327f6ep-567, 0x1.cb8cdc6b70639p-32, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ff564f1ed056p-711, 0.0, 0x1.88eb319de7158p-925, 0x1.a0d71c89ce5afp-599, 0.0,
     0.0, 0x1.6e7d4a057cfb5p-137, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4f5d717f41579p-366,
     0.0, 0.0, 0x1.f8c7f5fa5a55ap-635, 0x1.f911930ad5266p-628, 0x1.b1ec4e2575ca3p-332,
     0.0, 0.0, 0x1.d8038301e6c4fp-774, 0x1.33fa270309e4p-613, 0.0,
     0x1.7aee4897a5baap-77, 0x1.e90380e361ff5p-805, 0x1.ff8724715a9b1p-30,
     0x1.8432c273ae309p-192, 0.0, 0.0, 0x1.c712266d385f8p-314, 0.0,
     0x1.4b6d2af6582cfp-546, 0.0, 0x1.a1afc917ef28ep-458, 0.0, 0.0, 0.0, 0.0,
     0x1.b03168ba03842p-803, 0x1.8a2f5f167578dp-760, 0.0, 0x1.128eed4a4429dp-14, 0.0,
     0.0, 0x1.902fd2f64231p-177, 0.0, 0x1.ac43c5f5c7439p-158, 0.0,
     0x1.6bce08cc8ea89p-94, 0.0, 0x1.b5400bc98c81ep-695, 0x1.b3526dba0822ep-902, 0.0,
     0x1.22217ce48af0ap-721, 0x1.35ee30425b74ep-816, 0.0, 0.0, 0.0,
     0x1.46c85dd9743bbp-641, 0.0, 0.0, 0.0, 0.0, 0x1.2d4eacc12dca5p-475, 0.0,
     0x1.4f4d2ca3bcc06p-513, 0.0, 0.0, 0x1.08cb5c9e2bf44p-511, 0.0,
     0x1.0d125b180a168p-659, 0x1.d711a9b0a3caap-689, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9895e209ce9f4p-297, 0x1.70a1a577f6195p-508, 0x1.4d52eefbd6c87p-904, 0.0,
     0.0, 0.0, 0x1.8b16e37a83b78p-466, 0.0, 0.0, 0.0, 0x1.626c011d5a11dp-265,
     0x1.e0a4f0b546469p-1005, 0.0, 0.0, 0x1.8a93781fd389cp-198, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.02acf87462a63p-979, 0.0, 0x1.ac0169c4ec013p-668, 0.0,
     0x1.4fc0e5c65d812p-271, 0x1.39c52b9473b9p-326, 0.0, 0x1.1db710bbfb94p-166,
     0x1.69dc2a8a52f93p-488, 0x1.394239714d265p-792, 0x1.d40c500b53d3fp-815,
     0x1.088095b3faf4ap-108, 0.0, 0x1.26ee7927b85d4p-126, 0.0, 0x1.73d1131a3a69bp-495,
     0x1.033424c7ae6a5p-944, 0x1.2b75ba136867ep-139, 0x1.3659cbf808319p-525, 0.0,
     0x1.f776c3c956298p-262, 0x1.0a4ef782b3491p-651, 0x1.9e353dc0d1035p-472,
     0x1.ab80e60b12eacp-259, 0.0, 0x1.9b0454dbc2b22p-82, 0x1.d785deb4b2314p-999,
     0x1.b3fd255edbe8dp-14, 0x1.98484e9977d31p-954, 0x1.aca422835dc5ep-839, 0.0,
     0x1.3e8e598b55c8p-98, 0x1.415b177e59321p-19, 0x1.403a32b4e3f54p-711,
     0x1.28903b59ed6cdp-273, 0.0, 0.0, 0.0, 0x1.b4ccfcc7eceb9p-880,
     0x1.a5531537ddb5cp-853, 0x1.2d364175fd088p-316, 0x1.5b6aea5832078p-782,
     0x1.18beb01cd1e9ap-722, 0x1.9d0ca545576c3p-102, 0x1.25dd6be9eabcdp-672,
     0x1.d6480c8e62c9bp-906, 0x1.1a9639717ffa1p-114, 0x1.f542394146863p-675,
     0x1.55a915651701bp-867, 0x1.a1504e9545887p-572, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8e399544422a6p-833, 0x1.d71723038acd9p-198, 0.0, 0.0, 0.0,
     0x1.9de65a2de699dp-338, 0x1.5fe1f9acfa586p-703, 0.0, 0.0, 0.0,
     0x1.e929bd09ab92ap-958, 0x1.bd8034c8dacebp-365, 0x1.fca3dfe281e6cp-197,
     0x1.ea8ab3946f43cp-305, 0.0, 0.0, 0.0, 0x1.719459e04b25ep-116,
     0x1.377f16dad3aep-570, 0x1.125c5c8258092p-702, 0.0, 0x1.d8f8dd5b5c08p-105, 0.0,
     0x1.66e70f08dc76dp-835, 0x1.d724523839972p-760, 0.0, 0.0, 0x1.da808486511d7p-467,
     0x1.c9fbdb24d0b7cp-705, 0.0, 0x1.c4f37a4a44d19p-374, 0x1.140e327b5eae6p-949, 0.0,
     0x1.5db9f6216373bp-994, 0.0, 0.0, 0.0, 0.0, 0x1.fb7b234f0787ep-537,
     0x1.734a5d74e18f5p-609, 0.0, 0x1.0af7105b7201ap-777, 0x1.a4dd1c551fa32p-665,
     0x1.19b9b5370d23p-715, 0.0, 0.0, 0.0, 0x1.1900c24e6c9e5p-21, 0.0, 0.0,
     0x1.5718a2aa7b379p-982, 0.0, 0.0, 0.0, 0x1.7ea916ca9addbp-304, 0.0, 0.0, 0.0,
     0x1.d9d03a0c6858dp-117, 0x1.ad2ed02a25ca2p-710, 0x1.05dc35f6d65d4p-909, 0.0, 0.0,
     0x1.b9d1ede277d8ep-119, 0.0, 0.0, 0x1.c9f636a5abb5bp-26, 0.0, 0.0,
     0x1.af395e645f9fp-767, 0x1.e64aad38e2577p-517, 0.0, 0.0, 0x1.ac484d3246366p-551,
     0x1.e0ed94f45a9fbp-357, 0x1.f67a952b15122p-871, 0.0, 0.0, 0.0,
     0x1.cc06a377f3028p-898, 0.0, 0x1.e22a2e4194347p-523, 0x1.5ac14739d511ep-108, 0.0,
     0.0, 0x1.b908606366186p-176, 0.0, 0x1.5b05c0b23e945p-128, 0.0,
     0x1.0d493e5314e7cp-980, 0x1.8089f73273359p-150, 0.0, 0.0, 0x1.762e205c8fdc7p-273,
     0.0, 0.0, 0.0, 0x1.33e6ca24edd99p-504, 0x1.adedd61ee1645p-453, 0.0,
     0x1.7de57c05d1dc6p-431, 0.0, 0x1.b165a0fb7cbdcp-307, 0x1.d36bb7d5b9bf1p-757, 0.0,
     0x1.82cc53e5a51f9p-962, 0.0, 0.0, 0x1.3704365a80cb3p-164, 0x1.b9c68369589f5p-904,
     0.0, 0x1.bc33bc6986743p-814, 0.0, 0x1.3fd4f8e7195f2p-449, 0.0,
     0x1.f684b7fed95fep-694, 0x1.84ff86068025dp-205, 0.0, 0.0, 0x1.3bb6ad8f7aea3p-447,
     0.0, 0.0, 0x1.baf059ba67ffap-101, 0.0, 0.0, 0x1.83c64660df36ap-889, 0.0, 0.0,
     0x1.8f84d3090010cp-666, 0.0, 0x1.ddb0c2acc188dp-493, 0x1.3a75e5831699ap-486, 0.0,
     0x1.05ac642a9a1d1p-761, 0.0, 0x1.e21d3cb144a4ep-430, 0x1.5de3ab93a49aep-347, 0.0,
     0.0, 0x1.c27e9a18bfeafp-994, 0.0, 0.0, 0x1.680dd29ebb1d3p-494, 0.0, 0.0, 0.0,
     0x1.4fab1534cdbe5p-345, 0x1.d7a0172621d5cp-106, 0.0, 0.0, 0x1.b56f27396960ep-108,
     0.0, 0.0, 0x1.8c7432c895712p-361, 0.0, 0x1.1347efb4634f5p-5,
     0x1.1d495124c2d5bp-86, 0x1.40d4e5378e067p-846, 0.0, 0.0, 0x1.986336726411ep-148,
     0x1.6a5426f2fa2b8p-584, 0.0, 0.0, 0x1.862a42a36c058p-996, 0x1.1a99d565e5245p-532,
     0.0, 0.0, 0.0, 0x1.d2cf07a7b3f11p-641, 0.0, 0x1.55b6c3552d00ap-118,
     0x1.9e684a65918fap-190, 0x1.4fc46d7cd8b2ep-206, 0x1.859479fb2bfb5p-724,
     0x1.a750f177c2b9ep-678, 0x1.fb8820c263697p-744, 0.0, 0.0, 0.0,
     0x1.5b1d6c325c1f6p-720, 0x1.7e9a56e9ffdeep-564, 0x1.92e743b7803c5p-449,
     0x1.55e015b51db9cp-966, 0x1.3a6f46541971ep-642, 0x1.29393d74e382bp-382,
     0x1.22ea9e39ee19fp-189, 0x1.140b6044f0ee1p-970, 0.0, 0.0, 0.0,
     0x1.a42c7f380792cp-540, 0x1.5a924a56ed0fdp-428, 0x1.9a20804821759p-304,
     0x1.e60c2f5c0b763p-700, 0.0, 0x1.23aa9d228b14dp-451, 0.0, 0x1.d02e8832ed47p-165,
     0.0, 0.0, 0x1.0f79c2c80df0bp-868, 0x1.503e3acc2077p-7, 0.0,
     0x1.606c7aa753f94p-622, 0.0, 0.0, 0.0, 0.0, 0x1.bb0b93b3c854fp-932, 0.0,
     0x1.1b37d74094acp-387, 0x1.26f851c267e2bp-321, 0x1.5a7cd7a26137ep-534, 0.0,
     0x1.66bf28e1c6be7p-269, 0.0, 0x1.31d6c4262c38bp-715, 0.0, 0x1.0d3b1715490f4p-492,
     0x1.9c0593ff48045p-116, 0.0, 0x1.836b44ae9fb57p-750, 0.0, 0x1.b178a70b9c0a2p-196,
     0x1.20eb35a307c28p-810, 0.0, 0.0, 0x1.50a294ffc4803p-281, 0x1.8f828e675b531p-501,
     0.0, 0x1.65dc7fe25d322p-799, 0.0, 0x1.6f1e884c320d8p-36, 0.0,
     0x1.e6793b83b5c82p-348, 0.0, 0.0, 0.0, 0x1.d7f052a39fbfdp-671, 0.0,
     0x1.a4066341cd7fbp-439, 0.0, 0.0, 0x1.b93e86f9bb3c5p-671, 0.0, 0.0, 0.0, 0.0,
     0x1.b6af227e64f72p-554, 0.0, 0.0, 0x1.b2b9abcbfdd0dp-37, 0.0, 0.0, 0.0, 0.0,
     0x1.6bd4eed6bf8f1p-276, 0.0, 0x1.8224270533e73p-368, 0x1.5a8c95e9dd7adp-247,
     0x1.3e42f617bf09ep-992, 0x1.fdd62f55dc897p-200, 0.0, 0x1.eaf8cdefea74p-114,
     0x1.7eb10b8ffddcdp-346, 0.0, 0x1.8e93ad23130e9p-772, 0x1.dc357f54ce3cbp-1021,
     0x1.514695ea0fe6ap-286, 0.0, 0x1.02c64b4fedf3p-737, 0x1.e6b49e2decbfcp-23, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.35efa2e86056bp-927, 0.0, 0.0, 0.0,
     0x1.7ddb3fb0c7f2ap-888, 0x1.99eed44c1ebb2p-888, 0.0, 0x1.3b4936acec6ep-955,
     0x1.c39fb9f1176f7p-45, 0.0, 0x1.3208dcbd689dbp-124, 0.0, 0.0,
     0x1.05e3e6fde7439p-276, 0.0, 0.0, 0.0, 0x1.af383871e3d4fp-911, 0.0, 0.0,
     0x1.7f68df64c670ap-106
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
            tmp1 = Sleef_sinpid2_u05avx2128(tmp0);
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
    printf("Sleef_sinpid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sinpid2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
