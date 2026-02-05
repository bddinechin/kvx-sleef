/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expfrexpd1_purecfma.c --function \
 *     Sleef_finz_expfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.c2fa232b55949p-759, 0x1.ff7947cdf6c4fp-312, 0.0, 0.0,
     0x1.0aa4befef12f5p-514, 0x1.dde406dfdc491p-726, 0.0, 0x1.96a42de08c8d6p-416,
     0x1.d313187a56895p-162, 0x1.8390b7e3412a5p-37, 0x1.ac78c3605c797p-242, 0.0, 0.0,
     0x1.7eb256098e8fep-467, 0.0, 0.0, 0.0, 0x1.a318868b2a87bp-161, 0.0,
     0x1.dca9bad1050f2p-789, 0x1.909f971679b4ep-847, 0x1.7a5377b5b631dp-958, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.98bb18d204b4ep-623, 0x1.4f82cc049288cp-160,
     0x1.9afcd5f028526p-259, 0x1.7468d8bc3a05p-156, 0.0, 0.0, 0x1.a3f1074386b21p-390,
     0.0, 0.0, 0.0, 0.0, 0x1.ecba39fd36ad8p-632, 0x1.ac960fe4582a3p-249, 0.0, 0.0,
     0.0, 0x1.5ab01147efbcap-711, 0.0, 0.0, 0.0, 0.0, 0x1.522bd449b7947p-147, 0.0,
     0.0, 0x1.3d8d6f4188e18p-53, 0.0, 0x1.1967e406ad6cep-637, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.cb146fd7cdd9p-777, 0.0, 0.0, 0x1.378d8ba7a96b3p-119, 0.0,
     0x1.8d6a574dbc2b1p-28, 0.0, 0x1.9b365e4602ebdp-816, 0x1.8bb27612f0dc2p-491,
     0x1.c5b3283f70c71p-47, 0x1.d49604d6c9924p-86, 0.0, 0x1.c344c1bd918dcp-761,
     0x1.5ff479e6e25c3p-657, 0.0, 0x1.343fbcda4aa7ep-929, 0.0, 0x1.c68669588c67ap-991,
     0x1.5ad756888ebecp-634, 0.0, 0.0, 0x1.638a87a8dcb53p-366, 0x1.4c2a968741bb5p-891,
     0.0, 0.0, 0.0, 0.0, 0x1.f4d1da98e5901p-811, 0.0, 0x1.9b89ea0a37a06p-254,
     0x1.683f54c24b77ap-410, 0.0, 0x1.5946f8a127dfdp-891, 0x1.797e6ab695bc6p-379, 0.0,
     0.0, 0.0, 0.0, 0x1.446aab1959137p-944, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b6a03b854cdaep-926, 0x1.e213fe5a87c21p-166, 0x1.58facdccf0909p-664,
     0x1.f4050d4f3bf2ep-175, 0x1.33037ae06f578p-350, 0x1.c7bb33e3d3d74p-831,
     0x1.f89540e2920e1p-958, 0x1.eb35eae453a25p-649, 0x1.e2d070e9f7f28p-646,
     0x1.c721cce55624ep-752, 0x1.9f0fd51088a66p-432, 0.0, 0.0, 0.0, 0.0,
     0x1.1848b4425e9f6p-249, 0x1.cf94054f68123p-490, 0.0, 0x1.fe3165c789742p-135,
     0x1.63abb3763f4b2p-223, 0.0, 0.0, 0x1.be2430f4de59ep-864, 0.0,
     0x1.5cce2c98a0a0ep-296, 0.0, 0x1.28a51bd0c3b2bp-690, 0x1.0ba9b6c700113p-729, 0.0,
     0.0, 0.0, 0x1.4596d8300e87fp-444, 0.0, 0.0, 0x1.85d02aa7a9533p-596, 0.0, 0.0,
     0x1.bd4b8e0384912p-942, 0.0, 0x1.55cab37f39e0fp-451, 0.0, 0x1.cf4073622feb1p-581,
     0x1.7e7ba650257e7p-20, 0.0, 0x1.14f1deb4dd9ep-222, 0x1.c4ab8471ba6a7p-601, 0.0,
     0.0, 0x1.816fc4afdd109p-749, 0x1.a8c2e5880e58p-538, 0x1.1c4921c6ed5dcp-693,
     0x1.a7221bfc04b37p-736, 0.0, 0.0, 0x1.b2b1eb10957f6p-869, 0x1.b8bcdd0cfd39cp-42,
     0x1.6de408ad63b0cp-552, 0x1.146d19ef33ae4p-56, 0x1.f218fd37b5d1p-778, 0.0, 0.0,
     0x1.2725346a4394cp-339, 0.0, 0x1.cd9b72e8c119p-808, 0.0, 0x1.f68dfa6c7ea16p-853,
     0.0, 0x1.5c55ff142709dp-456, 0x1.3e19c7f01bf79p-776, 0x1.0d6d8aeb1bbf5p-146, 0.0,
     0x1.097c287d419a3p-905, 0x1.bbd211b97a89ep-528, 0x1.7cbd7b3a60929p-945, 0.0,
     0x1.a28fc2dc1c108p-924, 0.0, 0.0, 0x1.a7c0a0476d248p-438, 0x1.17d2ddffd6169p-8,
     0x1.70d1fd1ba147cp-437, 0x1.07a3313a00684p-625, 0x1.ff0d767bd7de8p-223, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8340960353b2cp-480, 0x1.f962c957b4f48p-464,
     0x1.a27cd9d640313p-814, 0x1.d4dba91a0b245p-71, 0.0, 0.0, 0x1.3026a776f700bp-895,
     0.0, 0x1.a77f2f839a84cp-558, 0x1.50fc9960535dap-993, 0x1.ba027d945045bp-380,
     0x1.f84059825501cp-705, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57b7b9916ff37p-97, 0.0,
     0.0, 0x1.067179e7dd5ebp-257, 0x1.92015e627bd4bp-611, 0x1.c093709eba541p-771, 0.0,
     0x1.3f242f6d17865p-553, 0x1.8de922bb5f846p-872, 0.0, 0x1.bbdddcf7ff897p-376, 0.0,
     0x1.930c14ba25388p-160, 0x1.e41140230a738p-449, 0x1.4f564475748dcp-803,
     0x1.25497e0295011p-491, 0.0, 0x1.a901b7feb9514p-807, 0.0, 0x1.2a249348e7d72p-305,
     0.0, 0.0, 0.0, 0x1.b7ad0bfc23139p-808, 0.0, 0.0, 0.0, 0.0,
     0x1.6eaabe98b423fp-424, 0x1.c845f37ac488p-125, 0.0, 0.0, 0x1.e3a720b71d2d4p-670,
     0x1.26a71a8ad6e1ap-953, 0x1.020a6b11133fdp-637, 0x1.900583b1c08c1p-366, 0.0,
     0x1.e14d7089d5a44p-421, 0.0, 0x1.564ce8a9b1586p-178, 0x1.4fa282024df1dp-384,
     0x1.67dbec26b1997p-709, 0x1.26c3c12fea246p-772, 0.0, 0x1.cce3d267f35eap-874, 0.0,
     0x1.bd24b4c288981p-135, 0.0, 0x1.ae9b8aaa9b75ep-956, 0x1.740f4cedc8b96p-822,
     0x1.a0ecaabc37073p-656, 0.0, 0x1.fbb5d41f63283p-701, 0.0, 0.0, 0.0,
     0x1.0a3940a924c38p-372, 0x1.9085f822b0f61p-946, 0x1.414f250114719p-891,
     0x1.8032a79a89ce5p-507, 0.0, 0.0, 0x1.afb463dd6cp-686, 0.0, 0.0, 0.0,
     0x1.b5dec91f65969p-505, 0.0, 0.0, 0.0, 0.0, 0x1.55e0dcf5ff461p-892,
     0x1.b0c27f938b671p-948, 0x1.b83e774fb2a46p-436, 0x1.c438200bc4259p-756, 0.0, 0.0,
     0.0, 0.0, 0x1.8e1ab253b45b6p-816, 0x1.743ba78777e8fp-612, 0.0, 0.0,
     0x1.498110ba281cfp-420, 0.0, 0x1.618dab2b4363dp-284, 0x1.559619c190affp-239,
     0x1.2308b2ff6fc98p-862, 0x1.d49f52188ae8ap-651, 0.0, 0.0, 0.0,
     0x1.80ff9057dd545p-434, 0.0, 0x1.5a23e5b8dd79ap-582, 0.0, 0.0, 0.0,
     0x1.75afe28566b54p-9, 0.0, 0.0, 0x1.7c89b0f3f6d84p-249, 0.0, 0.0,
     0x1.ec0cbd594ddd2p-955, 0x1.b5189d7f1af05p-127, 0.0, 0x1.4083f5b600f4dp-800, 0.0,
     0x1.d5465ed6c6535p-754, 0.0, 0.0, 0x1.4bb618a264c92p-543, 0.0, 0.0,
     0x1.ffca93414a4efp-697, 0.0, 0x1.26135c1639805p-50, 0x1.138d923393ae7p-485,
     0x1.859f7be6065e9p-736, 0.0, 0x1.77e5e946ade63p-53, 0.0, 0.0,
     0x1.74cf6db075f44p-731, 0x1.5dcfce9cc1d11p-738, 0.0, 0.0, 0x1.4402c663db0a8p-737,
     0x1.3e15068b45503p-491, 0x1.c2e09487621cep-801, 0x1.403eeab3ff601p-499, 0.0, 0.0,
     0.0, 0x1.21ae9f75015c7p-589, 0x1.86f0ee2927622p-91, 0.0, 0x1.af8e48393d81ep-958,
     0.0, 0.0, 0x1.dbd12da497fbbp-644, 0x1.0c189af6822c9p-446, 0x1.2470a0b489d54p-756,
     0x1.893f4e83e0842p-275, 0x1.d054288fe9f9cp-589, 0x1.bf27c8bb69394p-838,
     0x1.dc232fe3efb6ap-188, 0.0, 0.0, 0x1.f9b000c113a7fp-869, 0.0,
     0x1.5de4e9604195fp-491, 0.0, 0.0, 0x1.7542113493927p-913, 0.0, 0.0,
     0x1.5abecb103295ep-652, 0x1.1cc8eabccfacep-404, 0.0, 0x1.33329fea4a171p-583,
     0x1.085a1c8642c6fp-209, 0x1.53553bbe2b6d1p-349, 0x1.690bdd51b5d5cp-51,
     0x1.ca423325c4c24p-613, 0x1.0bb408421a112p-815, 0x1.8532f69cc01f6p-107, 0.0,
     0x1.0e74fcf3a9061p-989, 0.0, 0x1.ff705f93f3376p-38, 0.0, 0.0,
     0x1.2827209c3d1d6p-529, 0.0, 0.0, 0x1.5c6abd73f6649p-259, 0.0,
     0x1.8e984c440ff2p-778, 0x1.992218c3907cap-527, 0x1.9cc2b126581b4p-1011,
     0x1.f77fb6a2b08b3p-795, 0x1.99d957d4333bap-703, 0.0, 0.0, 0.0,
     0x1.80d2b8d641227p-687, 0.0, 0.0, 0.0, 0.0, 0x1.5969f7f6c87a5p-834,
     0x1.566818c53eb75p-300, 0.0, 0x1.4df06e04d0491p-237, 0.0, 0x1.43455624d5948p-156,
     0x1.768a04a4ba6ebp-822, 0.0, 0x1.3df9d2f865d02p-675, 0x1.71705d2fe9d83p-989, 0.0,
     0.0, 0x1.624c2587dea4bp-386, 0x1.35bfd7b6fbe24p-1020, 0x1.f75d7aa15e46p-807,
     0x1.130f8642eac92p-736, 0x1.272a634c44b59p-823, 0.0, 0.0, 0.0,
     0x1.9dec8fedd1754p-415, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dbe4e77818179p-424,
     0x1.380abc8807a0ap-610, 0x1.16c126ae0b233p-943, 0.0, 0x1.86e9f77b8ad63p-258,
     0x1.fa832849e839ep-923, 0.0, 0.0, 0.0, 0x1.42a99175623e8p-343, 0.0,
     0x1.b6f1b1528bae3p-998, 0.0, 0.0, 0x1.abe1113cb89dep-910, 0.0, 0.0,
     0x1.822b8d1218cfp-22, 0x1.2f822af128783p-361, 0.0, 0x1.0ba9511bb7723p-531,
     0x1.6928224bb1b16p-797, 0.0, 0.0, 0.0, 0.0, 0x1.93e02cfcc75b9p-194, 0.0, 0.0,
     0x1.624f8c1256562p-549, 0.0, 0x1.551c8a2d6eed5p-834, 0x1.a6370f988ac2ap-993, 0.0,
     0.0, 0x1.5898cb6438b7ep-758, 0x1.c25a2bf57fc14p-451, 0x1.2e7fad28e8ba7p-900, 0.0,
     0x1.6e4fc249066a5p-852, 0x1.3dbc1263fb8e5p-531, 0.0, 0.0, 0.0, 0.0,
     0x1.b37bd70e9d2b6p-250, 0x1.47aac7c6c0889p-764, 0x1.d8fca12d717fcp-900,
     0x1.9450d3103e23dp-438, 0.0, 0x1.6fc822ae64817p-449, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da7d4ec119f64p-72, 0x1.a98306ed8debfp-1, 0x1.5ea4a045d1251p-212, 0.0, 0.0,
     0.0, 0x1.002c9e653f5d2p-813, 0x1.8a6e3eeaecdc7p-595, 0.0, 0x1.220159fa6f53cp-57,
     0x1.6e6fa01027cedp-911, 0x1.828e9f1258488p-751, 0x1.d8f78b0da27d6p-906,
     0x1.a3a7f125a7f09p-242, 0x1.f0ef6d3e3dd2dp-806, 0x1.16654050e5b9bp-728, 0.0, 0.0,
     0x1.19bdf080e793cp-95, 0.0, 0x1.780da1439ba01p-162, 0x1.8e954dcc39668p-430,
     0x1.8de893c63d45cp-3, 0x1.235edc566429dp-368, 0.0, 0x1.a802f0afd7adcp-170, 0.0,
     0x1.457234910f23cp-975, 0.0, 0x1.8e5cd095e35ccp-364, 0x1.bbc60ac75c4a8p-427,
     0x1.4059eb4b0d19fp-209, 0.0, 0x1.dae2c33047f99p-323, 0x1.6f19e49f00c5dp-907,
     0x1.2270a0de25f7cp-993, 0x1.be6a49e725408p-377, 0x1.876939462e246p-692,
     0x1.9fabd96630403p-85, 0.0, 0.0, 0.0, 0.0, 0x1.8cbea19febbfp-373,
     0x1.f122f24a56a84p-1016, 0x1.8382ba193af7cp-444, 0.0, 0x1.8f6dd45cd591ap-909,
     0.0, 0x1.aaa700176a3c7p-977, 0.0, 0.0, 0x1.0177a0b1753bfp-489, 0.0, 0.0,
     0x1.b779450e200adp-257, 0x1.d879cb8ca96e3p-169, 0.0, 0x1.7616cc59035d5p-534, 0.0,
     0x1.d05749e3556c3p-548, 0.0, 0x1.ae3908f9ad4d2p-599, 0.0, 0x1.2a1d3d0f0b0a5p-886,
     0x1.50dbfbe1bf3ap-192, 0x1.4e4341d55a0ap-549, 0x1.6bf10a4d421eap-755, 0.0, 0.0,
     0x1.36b5f480ba089p-715, 0.0, 0.0, 0x1.bfcd0eea5f267p-611, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.281b9fabf37b1p-922, 0.0, 0.0, 0x1.221afc027abe6p-219,
     0x1.b18cd863f5c92p-946, 0.0, 0x1.d147cc1fbe565p-35, 0x1.d7ed98456c73bp-600,
     0x1.27470d96917c8p-936, 0x1.c65343d887431p-200, 0x1.b0016a9372832p-763, 0.0,
     0x1.59177c07f625p-833, 0.0, 0.0, 0x1.04b7d05f8d6b3p-1020, 0x1.b7e806e1e0fe5p-599,
     0x1.0453fc80a77d6p-984, 0x1.eae9c917cba4bp-741, 0.0, 0x1.54e2c7310f4b4p-34, 0.0,
     0x1.97d10729c6625p-243, 0x1.b37c40550fd48p-186, 0.0, 0x1.1dd62815d19ep-942,
     0x1.df4982fb7e3b6p-871, 0.0, 0x1.e5990834cc201p-537, 0.0, 0x1.1d20fe1ae648fp-306,
     0.0, 0x1.615244a9ab734p-197, 0.0, 0x1.dda35c876a373p-745, 0.0, 0.0,
     0x1.fd9c32cab6fdfp-275, 0.0, 0x1.3ea72989a700ap-867, 0.0, 0x1.d97ec2e62f806p-230,
     0x1.59833f0493bb7p-194, 0.0, 0x1.40787582c6933p-618, 0.0, 0.0,
     0x1.e9e23799e6137p-152, 0x1.246d4011d9c4ap-122, 0x1.801b39e68988bp-211,
     0x1.88ee09afb2068p-332, 0.0, 0x1.4c389be66a1f5p-351, 0x1.88bfdae4e32bbp-53, 0.0,
     0x1.5cb82c10383a9p-919, 0.0, 0.0, 0x1.7c0c4072fa9f9p-6, 0.0, 0.0,
     0x1.0a6a13497600bp-409, 0.0, 0.0, 0.0, 0x1.1fdd457b39f87p-394,
     0x1.e187fd1dce761p-524, 0x1.e0b079f318a43p-128, 0x1.a508c2f58eca4p-47,
     0x1.a4eb7edc047c5p-721, 0x1.b9d558ba89864p-380, 0.0, 0x1.23994c883a73bp-587, 0.0,
     0x1.744464791f321p-779, 0x1.ea4ab44c367bap-897, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1ea0820eb8062p-421, 0.0, 0.0, 0.0, 0x1.e106d906589a6p-34,
     0x1.d5add7e3484abp-454, 0.0, 0x1.794f88dd075eep-15, 0.0, 0x1.bc749192cf72ep-492,
     0x1.8304a9c1a3494p-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65e0b4c98978cp-226,
     0.0, 0.0, 0.0, 0.0, 0x1.3dca714b25443p-330, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.358579a6cdcf9p-895, 0x1.60578615a271ap-38, 0x1.cffa348885591p-238, 0.0, 0.0,
     0.0, 0x1.7b157a75ba51p-26, 0.0, 0x1.2bbe0ec9df222p-228, 0.0, 0.0,
     0x1.5721c53c280e6p-959, 0.0, 0.0, 0x1.0ca30f8046d03p-741, 0.0, 0.0, 0.0, 0.0,
     0x1.784d743375549p-1020, 0x1.f50eba8c76dc3p-210, 0x1.61857abbb37cep-477, 0.0,
     0x1.63c2865da8c7dp-164, 0.0, 0.0, 0x1.2bc2a0c30fb16p-364, 0x1.3cfdf89bc256ep-238,
     0x1.b9dd307812012p-149, 0x1.8a27a238f7843p-853, 0.0, 0x1.bf51c657bde19p-136,
     0x1.6545032e3f1dfp-141, 0.0, 0x1.f41390aa9eb1ap-889, 0x1.867af04e06487p-717, 0.0,
     0x1.5743954384141p-621, 0.0, 0x1.bab92c25f6a9fp-907, 0x1.a48d8a9fee5a7p-524,
     0x1.3770252a0168dp-961, 0x1.14d122a43e013p-805, 0x1.1893287d3c07p-506,
     0x1.f1be67dc3a7cdp-488, 0.0, 0x1.c02dd74b8e3ddp-479, 0x1.c8fc39277b69dp-139, 0.0,
     0.0, 0x1.4422f8d1111abp-172, 0x1.c61fe1bbbaab9p-1008, 0x1.6e517ddd9b51fp-951,
     0x1.4a13d47b653edp-692, 0.0, 0.0, 0x1.8d8aac6c379dbp-427, 0.0,
     0x1.b4ecc366a6016p-1007, 0.0, 0x1.39603566c17dp-11, 0.0, 0.0,
     0x1.7b4dd901c8149p-575, 0x1.71b1323a3cfc8p-519, 0x1.68256d51426d7p-378,
     0x1.ffdeadb218c2cp-201, 0x1.764ddf51cbec7p-822, 0.0, 0x1.27a16d8c1a67ap-894,
     0x1.be7d3cb7fbd11p-206, 0.0, 0.0, 0x1.3ad0fafced567p-17, 0.0,
     0x1.c3f6ad2193e72p-970, 0.0, 0x1.a5eeb7275f834p-124, 0x1.02fca6028275bp-897,
     0x1.c8139c3e0f11dp-655, 0.0, 0x1.f5dcabb155d4bp-28, 0.0, 0x1.5fb5e85024906p-267,
     0.0, 0.0, 0.0, 0x1.84c5675b08be1p-991, 0x1.24848a7ff6665p-528,
     0x1.e492f588d0462p-277, 0x1.b3762464b7ba6p-337, 0x1.eeda6d1e93aadp-812,
     0x1.4978bbb083f54p-170, 0x1.3aa5ea3ef2727p-998, 0x1.0461059cdd546p-351,
     0x1.b544549fb7518p-373, 0.0, 0x1.5959751a97e2ap-1020, 0.0, 0.0,
     0x1.ea46225057649p-55, 0x1.529565cce712fp-167, 0.0, 0.0, 0.0,
     0x1.670f3bc8d88cp-884, 0x1.08450334e32cep-516, 0x1.b8f0c521d00ddp-685,
     0x1.49d6566b8ce7ap-827, 0x1.0c0adfc4fe277p-864, 0.0, 0x1.9886db7cbc25ep-614, 0.0,
     0x1.d2d28dbd28f89p-419, 0.0, 0.0, 0.0, 0x1.0aa5ad1eae9fep-425,
     0x1.18640f5e92e05p-70, 0x1.cd997b7ca76d5p-143, 0x1.7d3b1c7246288p-832, 0.0,
     0x1.ccfb186b91168p-900, 0x1.17a453f203c94p-926, 0x1.5565939b9fc15p-944, 0.0,
     0x1.acb8f5c6e4a64p-768, 0.0, 0x1.7a7bc2ef80eep-478, 0.0, 0.0, 0.0,
     0x1.1f397150474bep-777, 0x1.28810aeaf2994p-219, 0.0, 0.0, 0.0, 0.0,
     0x1.0f5447ab04268p-101, 0x1.4698d6b80db66p-447, 0.0, 0x1.38a4a61425e43p-429, 0.0,
     0x1.44e3a9be3c137p-161, 0x1.69fd8cf6e550cp-390, 0x1.7ee92c9b197bp-103,
     0x1.3dcc681a297e6p-744, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a884335bd9c1p-593, 0x1.0118e5d597198p-667, 0.0, 0.0, 0x1.8fa8a818ca4b1p-206,
     0.0, 0x1.322981e529fdbp-130, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9dc5d8ce9a8bap-130,
     0.0, 0x1.25b3d1c54de58p-262, 0x1.62d308add6f2ap-16, 0.0, 0x1.60a2fc696518ap-69,
     0.0, 0.0, 0.0, 0.0, 0x1.cd11e0ca3b146p-396, 0.0, 0x1.daec7f3b09b7bp-410, 0.0,
     0.0, 0x1.6e0e3bbf21b9dp-32, 0.0, 0.0, 0x1.e6f747de4a0a3p-268,
     0x1.0f394e361d31dp-572, 0.0, 0.0, 0.0, 0x1.69e8f502a931p-337,
     0x1.de1547604e8a3p-605, 0.0, 0x1.c28f20a67de12p-942, 0.0, 0x1.42d275729a7e3p-892,
     0x1.e3acace383042p-946, 0.0, 0.0, 0.0, 0x1.db572183f8744p-633, 0.0, 0.0,
     0x1.ffbfd5824b50dp-399, 0x1.6c8d0eb0572ccp-170, 0.0, 0x1.85adca4f514p-478,
     0x1.7dd4601c5cbf4p-195, 0x1.8e26866fdca98p-865, 0x1.e7c885db5587dp-104,
     0x1.85f97dfcfac07p-235, 0x1.e1b6f9601772fp-408, 0x1.19b87ab48351bp-1003, 0.0,
     0x1.fc4a4ae1c2a55p-526, 0.0, 0.0, 0.0, 0x1.c11908519aa29p-228, 0x1p0, 0.0,
     0x1.43859d7fcb079p-961, 0x1.8f0cb5a2013e1p-122, 0.0, 0x1.fe9075db33f8ap-113, 0.0,
     0x1.b056e1c99adc4p-1007, 0.0, 0.0, 0x1.69fa3300ed022p-670,
     0x1.51299bdf8d134p-501, 0.0, 0x1.a65c8d845bf9ap-247, 0x1.e36d9926f72b6p-949, 0.0,
     0.0, 0x1.5cfb3892ae438p-945, 0x1.c68931e141d64p-769, 0x1.9a9b706ef78p-961, 0.0,
     0.0, 0.0, 0.0, 0x1.3cc31fdfcad59p-516, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f29ed664c8397p-562, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.694a72f8697dep-850, 0.0, 0x1.602a2cdc8cbd1p-70, 0.0, 0.0, 0.0,
     0x1.57a72759182c6p-185, 0x1.1d12a65c30f79p-233, 0.0, 0x1.bc9cf06fed132p-1020,
     0x1.d93c00196cf7p-319, 0.0, 0.0, 0x1.e094e6bb54f68p-905, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a6ca83671fc5cp-743, 0.0, 0.0, 0x1.34b82de01eee1p-146, 0.0,
     0x1.2ff1691bc763ap-957, 0x1.ee82b2f7d6e1ep-348, 0x1.2426650c2a508p-75, 0.0,
     0x1.edc09319b6747p-585, 0x1.f60c14003c725p-138, 0.0, 0x1.5992774d486dfp-107, 0.0,
     0.0, 0.0, 0x1.a149848712302p-286, 0x1.d35bffce09e6cp-345, 0.0, 0.0, 0.0, 0.0,
     0x1.1f40f079de37ap-72, 0.0, 0x1.2df1887b4422ap-647, 0x1.13d9f35f8cb2bp-271, 0.0,
     0x1.2e8fe2741b3ccp-941, 0x1.6463c602bab55p-245, 0x1.b8f0c6f8d8eabp-58, 0.0, 0.0,
     0.0, 0x1.f49a757a402c8p-893, 0.0, 0x1.bdc5924fb7263p-611, 0x1.cd3bfb6d303dp-683,
     0x1.5546da34122f8p-812, 0.0, 0x1.16a12c5ea2a0dp-459, 0.0, 0.0, 0.0,
     0x1.2a1f77b506191p-957, 0.0, 0.0, 0x1.853c1b138cc35p-96, 0x1.beb9ac0b773ap-868,
     0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = INT32_C(0);
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
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_expfrexpd1_purecfma(tmp0);
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
    printf("Sleef_finz_expfrexpd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expfrexpd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
