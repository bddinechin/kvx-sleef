/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand2_u35avx2128.c --function Sleef_atand2_u35avx2128 \
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
     0.0, 0.0, 0.0, 0x1.b8e97532a2cffp-292, 0.0, 0x1.5375262b5f665p-990, 0.0, 0.0,
     0x1.44ab4a0763969p-421, 0.0, 0.0, 0x1.d61066b4312d6p-769, 0x1.854c93b73a035p-939,
     0.0, 0.0, 0x1.80b540f98c6c3p-262, 0.0, 0x1.3ca486fb56e02p-477, 0.0,
     0x1.101c432e7046dp-432, 0x1.a62a4b072edd8p-751, 0x1.788b094baedfcp-574,
     0x1.89377c44246b3p-992, 0.0, 0x1.6e23d23ba0cacp-980, 0x1.780652d3da491p-113, 0.0,
     0.0, 0x1.c0d84996a6f8bp-379, 0.0, 0x1.5d9dacc7d9891p-370, 0.0,
     0x1.da0b90fc3f597p-477, 0.0, 0.0, 0x1.1606492b99711p-559, 0.0, 0.0,
     0x1.a0ec71ad0bde5p-557, 0x1.82620abba61a1p-22, 0.0, 0x1.30e98921ce17ap-894, 0.0,
     0x1.c0cc7d778bc32p-399, 0.0, 0x1.911cd7970bc44p-1005, 0x1.0c15244d830cap-832,
     0x1.9735ac2707b95p-238, 0x1.5c714c84bbbdep-760, 0.0, 0.0, 0x1.efd152296919bp-148,
     0.0, 0x1.98635c6bde3a1p-1000, 0x1.c3e4d8e04e0b9p-50, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.93291dae2b2f8p-852, 0x1.17079b6c9cfdbp-398, 0x1.7b8d8835c605ep-509,
     0.0, 0x1.7cc8b4d42b47p-529, 0x1.0b11227a881fbp-137, 0x1.f5d5351587151p-560,
     0x1.da33223523ed3p-156, 0x1.b26df2f37f721p-110, 0.0, 0x1.2fb73931c6ab8p-304, 0.0,
     0.0, 0.0, 0.0, 0x1.61165d0cfa4d8p-240, 0x1.99e0dc021d1a5p-487,
     0x1.b966bfee60968p-351, 0x1.cce60cd5c90c2p-719, 0.0, 0.0, 0x1.b18c2d65d74b7p-509,
     0.0, 0.0, 0x1.1e29ca396fafdp-99, 0.0, 0x1.9f1d06c928049p-265, 0.0,
     0x1.1cb6e0271b47fp-514, 0x1.dfa0b893f57c7p-558, 0x1.7cc9a4bc9346cp-748,
     0x1.356a19e8f89adp-914, 0x1.44cde180198d7p-219, 0x1.83a15f0fd1c6bp-822,
     0x1.df49e0c133446p-591, 0.0, 0x1.82ff1f4519866p-687, 0.0, 0x1.f1dc0d7012e82p-636,
     0.0, 0.0, 0x1.6ffc3ed017796p-672, 0x1.bcfe3b0c13e54p-411, 0x1.25a9527719e47p-290,
     0x1.cdb019642c0e5p-210, 0x1.a94faa5cf9d05p-153, 0x1.cd1cb87c6808bp-346,
     0x1.982373305881ep-248, 0x1.15d0d11ab9f22p-540, 0x1.504c8642e6368p-563, 0.0,
     0x1.546dc92ecb392p-607, 0x1.e04f59beceb8cp-98, 0x1.d1ecc25487fe5p-230,
     0x1.8fafecded9073p-424, 0.0, 0x1.fa3d2087caf18p-1006, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.69759a325dd1cp-897, 0.0, 0x1.f859ee5c6a12ap-101, 0x1.5347a1b055398p-490,
     0x1.ff53782f9d78p-981, 0x1.c4ceb34e74253p-972, 0.0, 0x1.f9c87fa442091p-790,
     0x1.4b003817f8195p-389, 0x1.164cc74b6cfa3p-781, 0.0, 0.0, 0x1.0fd16e3142517p-317,
     0x1.b3c9f7321bddap-721, 0x1.eb497c2c96824p-377, 0.0, 0.0, 0x1.f6d4acba2b344p-585,
     0x1.523bbce3371b8p-418, 0.0, 0.0, 0.0, 0x1.c462751bd7c76p-556,
     0x1.6235213aa5c5cp-802, 0x1.ac30e8a42ac9dp-575, 0.0, 0x1.6231e1e9ae92fp-252,
     0x1.4d835f92ed701p-702, 0x1.3f94579c40847p-565, 0x1.e036c9e056d12p-545,
     0x1.d471f4f73e251p-959, 0x1.3438af654c44bp-97, 0x1.4cf1b7d1bd284p-431,
     0x1.04914bb8bd5c6p-189, 0x1.3411093a0f361p-378, 0.0, 0x1.fe54fa6a6bc04p-604,
     0x1.a4a3f218369d9p-116, 0x1.e9e15d8fa695cp-181, 0.0, 0.0, 0x1.6f535afcbbdb9p-809,
     0x1.48b568c6d26fep-203, 0x1.d84265207c94bp-976, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b4a4844eb9a1fp-982, 0x1.00686211bb7f8p-244, 0.0,
     0x1.be06075eb9cadp-643, 0x1.92bd81012a4eep-92, 0.0, 0.0, 0.0,
     0x1.a33928c75005p-392, 0x1.078fca098baf8p-284, 0.0, 0x1.389df7635fc25p-622,
     0x1.0895a12fbf057p-904, 0x1.b7eec75525873p-569, 0x1.2b771877a0372p-588,
     0x1.1aae11c633a01p-156, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb4c2d383c47cp-617,
     0x1.27cd88044355cp-530, 0.0, 0x1.9686c618dd877p-405, 0.0, 0x1.c480e60111aa3p-415,
     0.0, 0.0, 0.0, 0x1.242df2c87d99cp-525, 0.0, 0x1.59f4620e38115p-348, 0.0,
     0x1.52fb3001ee042p-95, 0.0, 0x1.9409e97b4f1ecp-28, 0x1.92d0a5a431065p-817, 0.0,
     0x1.00438bb717ca9p-500, 0.0, 0.0, 0.0, 0x1.263156dc38833p-879, 0.0, 0.0, 0.0,
     0.0, 0x1.cbb412d035fbbp-63, 0x1.85e676acbc11ap-192, 0.0, 0.0,
     0x1.bfd5e382c0e4dp-443, 0.0, 0x1.3c6fbfd4c598p-710, 0.0, 0x1.bac5a6f8d4e6bp-558,
     0x1.78d68456e111dp-871, 0x1.fef2c6b5ab074p-779, 0.0, 0x1.655bd70d185eep-558, 0.0,
     0.0, 0x1.11c884146e76cp-430, 0x1.bcc0a77fdfa6bp-278, 0.0, 0.0,
     0x1.cbee6bb932ebbp-81, 0.0, 0x1.a2ef576d9791fp-507, 0.0, 0x1.e1a478f1be1dfp-693,
     0x1.e4919ed6bf7fcp-200, 0x1.e20690caafe66p-858, 0x1.fe102f7c01c7dp-234,
     0x1.6bbf752187ac9p-280, 0x1.6610ee3591a11p-744, 0x1.92ab8d8528af6p-95, 0.0,
     0x1.1ff21a71f6638p-439, 0x1.b3f79428c8e83p-265, 0.0, 0x1.1aac301da5db8p-916, 0.0,
     0x1.1bcd97b7b3a2p-298, 0x1.4d17d369693afp-324, 0x1.529e9f6859fc6p-271, 0.0,
     0x1.2d8205f1e9539p-16, 0.0, 0.0, 0x1.d0714a69c1692p-986, 0.0, 0.0, 0.0,
     0x1.13320b30dc4b3p-577, 0.0, 0.0, 0x1.cd433348b3221p-414, 0.0,
     0x1.f00f2e5a1e6bbp-536, 0.0, 0x1.1628bc62c9a84p-130, 0x1.5e74a886aa956p-918, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a093731261dfp-545, 0.0, 0.0,
     0x1.c25fb3e9693c1p-584, 0x1.73d7d9523012ap-877, 0.0, 0x1.5bcbc879bd41ep-858, 0.0,
     0x1.fdabbf2c03499p-706, 0x1.4da831b28322fp-827, 0.0, 0x1.249c80d613e1ap-886, 0.0,
     0.0, 0.0, 0x1.e2015cc496581p-253, 0.0, 0.0, 0x1.0d4caaf006d0fp-606,
     0x1.203f5eec49081p-1021, 0x1.d0f2eb5c00b1cp-178, 0x1.e7f61d4689bdcp-502, 0.0,
     0x1.90c51f8e13127p-935, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa9949cc7511ep-854, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.080b43deca96ep-988, 0x1.07a6c583c9e5ep-591, 0.0,
     0x1.0313deb879809p-766, 0.0, 0x1.953a0e5a76c0bp-198, 0.0, 0.0, 0.0,
     0x1.9adba45c1650ap-7, 0.0, 0x1.7981ff0133f7ep-378, 0.0, 0.0,
     0x1.ba3db7bb3b25bp-731, 0.0, 0x1.3be20b4d2bcdep-432, 0x1.d219c33b8847ap-143,
     0x1.13bbc3acf0e0dp-303, 0x1.8c75601eb757p-104, 0x1.b8544b41504cp-205,
     0x1.8d10e8699671cp-217, 0x1.d0b73082bf66bp-950, 0.0, 0x1.0a0474e057a12p-801,
     0x1.df25c571e4d65p-203, 0.0, 0.0, 0.0, 0x1.f6c5c0424771ap-755, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.21ac2fdeb1b92p-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4f1f62a4ea143p-487, 0x1.75cde1daabe11p-247, 0x1.ea83e16a1321ap-724,
     0x1.0e9349a45017bp-845, 0.0, 0.0, 0x1.958d9157c3463p-98, 0x1.7b0cfa638f718p-29,
     0x1.8d00a557e86dap-260, 0x1.71cb81247e315p-713, 0.0, 0x1.ec8542fa6a9dfp-797, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.942d8d8ea47b6p-698, 0.0, 0x1.f1eab4151f586p-504,
     0x1.2e7238bc76709p-1013, 0.0, 0.0, 0x1.3d13e5b85690fp-210,
     0x1.a3d5d76d70c3ep-558, 0.0, 0.0, 0x1.7b649c367c65dp-269, 0.0, 0.0,
     0x1.fb0956ba5c602p-398, 0x1.fa6d323ceb4a2p-117, 0x1.f52d5e439f1f6p-836,
     0x1.3443d3199307bp-679, 0.0, 0.0, 0x1.72e302cd881d3p-501, 0x1.392b710897f63p-595,
     0x1.7338fa09658f7p-268, 0.0, 0x1.5b790c5ac03fap-31, 0.0, 0x1.c0dcb8fdba529p-109,
     0.0, 0x1.c4e6a0044907ep-293, 0.0, 0x1.864c007530666p-369, 0x1.e5e787a9d8f9bp-104,
     0x1.14b5e130edae3p-768, 0x1.cf335a849ba76p-714, 0.0, 0.0, 0x1.ab88a3a520ea6p-611,
     0.0, 0x1.a51254d9a2717p-341, 0.0, 0x1.8ba612e33cc1ap-216, 0x1.59fb527741206p-789,
     0.0, 0x1.2be082bd86c07p-581, 0x1.acb8455426a4dp-903, 0.0, 0.0, 0.0,
     0x1.8ccfe1c3de39bp-519, 0x1.12a0cfccc1a4p-271, 0.0, 0x1.e4d90e2a0337bp-880,
     0x1.ab870b8fd8749p-596, 0x1.8c636a307d3eep-327, 0x1.1dd1c82982ebap-782,
     0x1.f7a38ae16eaf7p-424, 0x1.a4d2820249f61p-683, 0x1.325ba91f665b5p-339, 0.0, 0.0,
     0x1.aefd3239ab265p-205, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.586abaf5a434p-300, 0.0,
     0x1.7262e2358b599p-829, 0x1.7e679eece1febp-989, 0.0, 0x1.28842d3ee76fp-500, 0.0,
     0.0, 0x1.be4225d45d63ap-606, 0.0, 0x1.d411b0e62faa4p-553, 0.0, 0.0,
     0x1.16049549461afp-381, 0x1.6fcd6cdc55c14p-735, 0.0, 0.0, 0x1.368a6f041281ep-754,
     0.0, 0.0, 0x1.49d9b786e22b5p-697, 0.0, 0.0, 0.0, 0x1.021122174caaap-954, 0.0,
     0.0, 0x1.6e1d564632933p-819, 0x1.8a1083c38367ap-624, 0.0, 0.0,
     0x1.aca3ffa16fcfcp-956, 0.0, 0x1.b8edbf0d9968ep-556, 0.0, 0.0,
     0x1.69784ee7c36aep-1009, 0.0, 0.0, 0x1.58b7a421ef5d3p-599,
     0x1.0ed68c05c6451p-914, 0.0, 0x1.c6d0af860a89fp-726, 0.0,
     0x1.442bb68960507p-1010, 0.0, 0x1.5ace350d38305p-660, 0.0, 0.0, 0.0, 0.0,
     0x1.c0153b8ef1ceap-371, 0x1.f10db60c7b541p-453, 0x1.63bed914b9943p-937,
     0x1.9205fc50f6d6ep-145, 0x1.fa29dc78ef35ep-672, 0.0, 0x1.2d922b011fc21p-647, 0.0,
     0x1.000feaaeb79eap-263, 0.0, 0.0, 0x1.3e4e30d5e6e74p-966, 0x1.66a08e54e7393p-182,
     0x1.303a6f23992b7p-331, 0x1.2b386bacc626bp-621, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52c4434d72575p-336, 0.0, 0x1.87a64c308fcap-410, 0.0, 0.0,
     0x1.06c2e39afae1fp-468, 0.0, 0x1.0f5ca02332103p-40, 0x1.ccbfe23e74f69p-688,
     0x1.4d6831f77975cp-750, 0.0, 0x1.25b2dfbb44fc3p-60, 0.0, 0x1.cac8cd442b6edp-870,
     0x1.7aa547f4754abp-578, 0.0, 0x1.3b063248a6d7ap-758, 0.0, 0.0,
     0x1.0e58e9b71f7ebp-898, 0.0, 0.0, 0.0, 0x1.39eff556efb8p-260, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7f5cde7dce0c4p-493, 0x1.a9d7923b7b47ep-629, 0.0, 0x1.0cd755db645f7p-946,
     0.0, 0.0, 0x1.ea3dd27df62fbp-642, 0x1.7b2fdb7cec93ep-907, 0.0, 0.0,
     0x1.0f8f166eadcd3p-793, 0x1.83588fbb49c46p-749, 0x1.61320e406e43ep-243,
     0x1.728f26b29c47p-167, 0x1.131cf42654e7bp-720, 0.0, 0x1.fdcf7689a6d43p-438, 0.0,
     0.0, 0.0, 0.0, 0x1.692e9cfe7b2d5p-531, 0.0, 0.0, 0x1.0ff632a8ba27cp-629, 0.0,
     0x1.7b8fe5af4b9ebp-251, 0x1.b47a6444a34efp-723, 0x1.507546862b912p-935, 0.0, 0.0,
     0.0, 0x1.5abaea31dde68p-158, 0.0, 0.0, 0x1.0599ff9026429p-59,
     0x1.6336939de3d1dp-392, 0x1.a35209eb37fa1p-692, 0.0, 0x1.b48c3d3346b86p-137, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f76b3e164915p-605, 0.0, 0.0,
     0x1.6fc0bdc5deaddp-684, 0.0, 0x1.4da466c1ee52bp-291, 0.0, 0x1.43331e99fe887p-965,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b623ff9e09ffp-822, 0.0, 0x1.e01097fdf76d2p-425,
     0x1.5a17ae6484a4fp-801, 0x1.6b15612b5cd1bp-440, 0.0, 0x1.438a53f4a1632p-507,
     0x1.f2afc742eb187p-364, 0.0, 0.0, 0x1.f08cbd193c4e4p-125, 0.0,
     0x1.e0729aee7e0a2p-437, 0.0, 0x1.37ac745330557p-160, 0.0, 0.0,
     0x1.c01cd54d133b5p-219, 0x1.829548788138ep-870, 0.0, 0.0, 0.0,
     0x1.2fccb8523b142p-926, 0.0, 0.0, 0x1.6f06e094f4b3bp-705, 0.0,
     0x1.7b4f21be58705p-154, 0x1.0e15bcaa54447p-719, 0.0, 0x1.1632c03e0381p-40, 0.0,
     0.0, 0.0, 0x1.dcd161ffde06ap-56, 0x1.9eba9f29fc6f6p-138, 0.0, 0.0,
     0x1.cba8e8824e25dp-487, 0.0, 0x1.056b7f221076p-248, 0x1.e67c66cef6fddp-469, 0.0,
     0.0, 0.0, 0.0, 0x1.2e552fd7776adp-721, 0x1.82adc72d9e361p-458, 0.0,
     0x1.97ff8f091b78fp-531, 0x1.141a88389227cp-239, 0x1.278b60a60d077p-381,
     0x1.e3fd4ed65b58cp-945, 0x1.8c8d22af13424p-700, 0x1.db11d898eea64p-756, 0.0, 0.0,
     0.0, 0x1.2704b0d8ada16p-284, 0.0, 0.0, 0.0, 0x1.5a27fa0867a87p-247,
     0x1.c3cfcb7e8c65ap-400, 0x1.872a000261a41p-550, 0.0, 0x1.dd99ed4cee3ep-13,
     0x1.a3d9d13a92dc4p-355, 0.0, 0.0, 0.0, 0x1.746700a156f0dp-339, 0.0,
     0x1.8f5c0ccb388ep-51, 0x1.2dc00c35f044p-804, 0x1.84e8cc35e7a9ap-448,
     0x1.d448b41f45fdbp-696, 0.0, 0.0, 0x1.8297895bc087p-154, 0.0,
     0x1.a97cdb47f3b3dp-16, 0.0, 0.0, 0.0, 0x1.e601c1d69de44p-191, 0.0, 0.0,
     0x1.7196a1c0b5311p-542, 0x1.f954ea94a924ep-573, 0.0, 0.0, 0x1.941b53e39108p-778,
     0x1.b607fbc725828p-441, 0x1.26e62721cb54p-863, 0.0, 0x1.61fcacfc069ddp-366, 0.0,
     0x1.6d68e4fbbdd87p-607, 0.0, 0.0, 0.0, 0.0, 0x1.bad096f3bbc9ap-713,
     0x1.927305a91e34ap-338, 0x1.1393f6cc1f7aap-579, 0.0, 0.0, 0.0,
     0x1.0f322d3d27171p-759, 0x1.1e5ab1ea1365ep-958, 0x1.82522e5fe31p-231, 0.0,
     0x1.41197b8c13a92p-382, 0.0, 0x1.1b7cab59c6cacp-796, 0x1.17011f2abc645p-853, 0.0,
     0.0, 0x1.89b02d3ea8e66p-1000, 0.0, 0.0, 0x1.d66719c1e28a8p-449, 0.0,
     0x1.b3372411b0d04p-51, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dab75f4ce621p-577, 0.0, 0.0,
     0x1.ce9d27211137ep-57, 0.0, 0x1.c4622f213d624p-108, 0.0, 0.0, 0.0,
     0x1.0e9a7e917dd2dp-667, 0.0, 0.0, 0.0, 0.0, 0x1.e4b77a7a554aap-520,
     0x1.ed2d57e8f79a8p-683, 0.0, 0.0, 0.0, 0x1.e40286907bce7p-554, 0.0, 0.0, 0.0,
     0x1.5901912b7a03ap-514, 0.0, 0.0, 0x1.bd7a3665d9016p-251, 0.0, 0.0, 0x1p0, 0.0,
     0x1.729a45dc7695fp-652, 0.0, 0x1.d3fe8c4b90ecbp-321, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.95f964ae07633p-839, 0x1.d5775943fc5d4p-598, 0.0, 0x1.c02038fdfd67cp-594,
     0x1.783a96c6d9145p-619, 0.0, 0x1.da1f79b32ec37p-343, 0x1.007b7e5990406p-649,
     0x1.5f2b2c91cd6e6p-319, 0x1.3e484e5bffbc9p-534, 0x1.a6cdb8c6e2b5p-618, 0.0,
     0x1.efc5fa16e184bp-339, 0x1.244c1a099d0aep-1012, 0x1.83f89e2f78bdep-912,
     0x1.b0e1f4427d4fdp-341, 0x1.b5dc9ed1026fap-944, 0x1.0f6de7abe1adcp-29, 0.0, 0.0,
     0.0, 0x1.3cb4835b41e2dp-688, 0x1.5ac2012ef1227p-407, 0.0, 0.0,
     0x1.237f65e38d737p-1003, 0.0, 0.0, 0x1.87dbbbedc877ep-844,
     0x1.570313d3b6409p-249, 0x1.8bc0ba4021243p-655, 0x1.79964b50f88b4p-115, 0.0,
     0x1.fc3296fcc8712p-159, 0x1.18433ca0c828ep-606, 0x1.e34a32655b89fp-246, 0.0,
     0x1.ede84f2f65e2cp-795, 0.0, 0.0, 0x1.45e11019c3211p-515, 0.0, 0.0, 0.0,
     0x1.285fdf4048248p-913, 0x1.bd4535a3187d5p-664, 0.0, 0x1.797de388ace7bp-49,
     0x1.05985d2759df9p-707, 0x1.b419e95cec05dp-486, 0.0, 0x1.f768952332363p-198,
     0x1.a57d87cbce986p-585, 0.0, 0x1.7c4164e04358dp-971, 0x1.bb595c51cee87p-7,
     0x1.10d3f3f2a8855p-469, 0.0, 0x1.91266af469e25p-164, 0.0, 0.0,
     0x1.56c23d0f9cf3ep-492, 0x1.467672d1c8ac8p-350, 0.0, 0x1.5452c1beea485p-445,
     0x1.fe1bf63e9730bp-859, 0.0, 0x1.0d03074914921p-830, 0.0, 0x1.3bf3e95a85a21p-879,
     0x1.1c3cecb02a89dp-429, 0x1.5237af6a3649p-170, 0x1.25c7b4d58d77bp-188,
     0x1.473e7266b4f4ap-562, 0x1.db7fcadb5df8ep-865, 0x1.a3d5e4a053b9bp-646,
     0x1.f8b9ee8b0da21p-313, 0x1.c146e4dfca13bp-665, 0x1.be0f2256b7364p-387,
     0x1.bd376428645d7p-733, 0x1.43b8d7095eb2bp-682, 0.0, 0.0, 0x1.3dd52409d7716p-464,
     0.0, 0.0, 0.0, 0x1.3441b1ed29f73p-762, 0.0, 0.0, 0x1.0575285ba367cp-242, 0.0,
     0x1.34f77b6e8c11ap-277, 0.0, 0.0, 0x1.267d1a615abdcp-474, 0.0, 0.0,
     0x1.663b69949b05cp-39, 0x1.9cb1f47c11f09p-687, 0x1.02428ec67ffa7p-162, 0.0, 0.0,
     0.0, 0.0, 0x1.35ecc44caece9p-353, 0.0, 0x1.daf5fc5153d21p-683,
     0x1.a19449876ceap-375, 0x1.c3cead3dbe709p-443, 0.0, 0.0, 0x1.dbc094226c9fcp-109,
     0.0, 0.0, 0x1.88770eb2c0c67p-159, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b28b59d5b15e9p-660, 0x1.4ecbf90cfbce2p-217, 0.0, 0x1.e327ccfd059edp-113, 0.0,
     0.0, 0.0, 0.0, 0x1.1880ddb11675dp-370, 0x1.d681550d2fc22p-108,
     0x1.b4e6a969f8a2p-335, 0x1.720f772bba7ccp-209, 0.0, 0.0, 0x1.e8e230dea4b78p-867,
     0.0, 0x1.c526cc1c07329p-323, 0.0, 0.0, 0x1.eff225f4e7ec6p-459, 0.0, 0.0,
     0x1.89bb3e4108f0dp-886, 0x1.7c73306c4f66ap-372, 0.0, 0x1.434b9864c9c2p-940,
     0x1.ed0fcb3a3e7f4p-482, 0x1.c0245b96183d6p-599, 0.0, 0x1.5634808ccdfb8p-197,
     0x1.a392cbc4d9e46p-902, 0.0, 0.0, 0x1.94864e82a7675p-115, 0.0, 0.0, 0.0,
     0x1.4c137246b24bep-794, 0x1.19750c45550c9p-831, 0.0, 0x1.a7a52f82b9f08p-959, 0.0,
     0x1.17b9e45343df2p-82, 0x1.9e5916075e645p-132, 0x1.5b1d68edabf12p-603,
     0x1.73be362334956p-834, 0.0, 0x1.c5d8888ffd98cp-533, 0x1.3854c6de451c1p-353, 0.0,
     0x1.ed782d19211b1p-784, 0.0, 0.0, 0x1.691cc45d669c9p-777, 0.0,
     0x1.e41ff2154221bp-331, 0x1.9d0c06242cf4bp-77, 0x1.f57b43f6c4c2fp-635,
     0x1.e36ea556290cp-588, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.57b196aef285p-534,
     0x1.0c1c868087934p-762, 0.0, 0.0, 0x1.31dba633140dcp-84, 0x1.7788bace1f575p-266,
     0x1.9ce1efa1645cap-292, 0.0, 0.0, 0.0, 0.0, 0x1.52c57df3b1e28p-124,
     0x1.f720bd96bc2fep-978, 0.0, 0.0, 0.0, 0x1.ef3feb7de8b93p-717,
     0x1.71dc06baa62d3p-149, 0.0, 0.0, 0x1.e3310c2fe6ed5p-425, 0.0, 0.0, 0.0, 0.0,
     0x1.2dc842855ed75p-417, 0x1.07ff4a6f2c32ap-967, 0.0, 0.0, 0x1.70ccb3fa9dbcbp-675,
     0.0, 0.0, 0x1.3fe1608158787p-893, 0x1.6959a50d93dd6p-280, 0.0,
     0x1.7606b8998f5edp-961, 0.0
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
            tmp1 = Sleef_atand2_u35avx2128(tmp0);
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
    printf("Sleef_atand2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atand2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
