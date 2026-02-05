/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd1_u35purecfma.c --function \
 *     Sleef_finz_logd1_u35purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.264b30b1b07c7p-959, 0x1.58556ea5a1c04p-206, 0.0,
     0x1.453aa303ff52cp-578, 0x1.ce8f9ec37ac43p-289, 0x1.3d8cf39ece937p-809,
     0x1.bec6e62758f7ap-571, 0.0, 0.0, 0.0, 0.0, 0x1.db566e7040216p-257, 0.0, 0.0,
     0.0, 0x1.c3384cf4051ffp-225, 0x1.c99661e35757bp-736, 0.0, 0x1.3437f6b361f09p-453,
     0x1.84b850b35e58bp-353, 0x1.56ff047a8de4bp-507, 0.0, 0.0, 0.0, 0.0,
     0x1.ae3b16b9a552dp-822, 0x1.c4aef2789130dp-118, 0.0, 0.0, 0x1.c80ab52812c94p-160,
     0.0, 0.0, 0x1.b9341fbe04787p-168, 0x1.1e60a46ed0406p-575, 0x1.0392f408af51ap-73,
     0x1.9753f396b37cap-640, 0x1.67c8df3ca353fp-34, 0.0, 0x1.71d67c1055662p-1016,
     0x1.2acab2ed037a6p-432, 0x1.ece8d029d8a72p-444, 0.0, 0x1.05cd70cc48483p-326, 0.0,
     0.0, 0x1.3e978b72ab50fp-1002, 0.0, 0x1.8bf1f474aafa8p-370, 0.0, 0.0,
     0x1.f5f3be5628186p-393, 0.0, 0x1.ce1c9bbad9b11p-781, 0x1.d3573b2372eb9p-856, 0.0,
     0x1.3bbd1cbce5056p-713, 0.0, 0.0, 0x1.590a445433048p-961, 0x1.97594384c280ap-580,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0cef85ac69988p-722, 0x1.03e48698a9b25p-621,
     0x1.f360193af2a45p-152, 0x1.b94d46c302f28p-840, 0x1.fd4f597d64101p-444,
     0x1.47022d4ce25c2p-542, 0.0, 0x1.b4de4261479e4p-229, 0.0, 0.0, 0.0,
     0x1.6423d9d6105dep-154, 0.0, 0.0, 0x1.802552f0359cap-617, 0x1.73eb330c8580cp-18,
     0x1.d8d37ea228006p-576, 0x1.6cee7276865d2p-469, 0x1.27682f9923402p-121,
     0x1.5c125fb5de7aap-739, 0x1.47e329b7b676ep-490, 0.0, 0x1.3fa01decff9a1p-31, 0.0,
     0.0, 0.0, 0.0, 0x1.a611dbc4c6513p-67, 0x1.ac8e5f66b7385p-123,
     0x1.5809e1c68f0cap-728, 0x1.aa7ff16e88f8cp-1012, 0x1.6d41c7dcca68ap-731, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0153cf50ad5fep-937, 0.0, 0x1.e453195893879p-777,
     0.0, 0.0, 0x1.034bbb42e6565p-194, 0x1.547bb5bcfff62p-921, 0.0,
     0x1.01962943a892dp-905, 0x1.30ba3c5efa67dp-4, 0x1.59c6499dd7a02p-792, 0.0, 0.0,
     0x1.47f6d89205cbdp-209, 0x1.3c56bdeb6b33dp-682, 0.0, 0x1.1581086cca211p-457,
     0x1.c0cd83a510674p-553, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.95f7bab773569p-947, 0.0,
     0.0, 0.0, 0x1.5578b98e5fc14p-912, 0.0, 0.0, 0x1.306d2c7e81a0cp-880, 0.0, 0.0,
     0x1.0b93eea106e8fp-407, 0.0, 0x1.a0bc763cb4665p-436, 0x1.8efd4ab31add2p-766,
     0x1.55629358e99acp-187, 0.0, 0x1.bec8d30b62299p-257, 0.0, 0x1.1bdf0109785c8p-938,
     0.0, 0x1.d7d6fbcf9d56bp-857, 0x1.787f200972c8fp-582, 0x1.45509f08c216p-514, 0.0,
     0.0, 0x1.a94ac5bcebbf3p-172, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.84786a9fc047ep-319,
     0.0, 0.0, 0x1.b0ef5767dde45p-364, 0.0, 0x1.b29f70bf7ad0fp-437, 0.0, 0.0,
     0x1.c97395b6dee4dp-456, 0x1.89e623b47d0f7p-806, 0.0, 0.0, 0x1.828e3a9469226p-792,
     0.0, 0x1.09e2f9e61673p-980, 0.0, 0.0, 0.0, 0x1.e09bc1ab08831p-883, 0.0,
     0x1.75341e34c3ab1p-906, 0.0, 0.0, 0x1.2536339d44f1p-894, 0.0,
     0x1.b8b8362da6766p-381, 0.0, 0x1.6040fb2d59099p-242, 0.0, 0.0,
     0x1.c27124005568cp-557, 0.0, 0.0, 0.0, 0.0, 0x1.dd51889e8e645p-54, 0.0, 0.0,
     0x1.516abd6eca246p-558, 0x1.96cb0d4287275p-95, 0.0, 0.0, 0x1.03eada240d096p-299,
     0x1.5728c3145911dp-958, 0.0, 0x1.f52cccb00ff03p-62, 0x1.7674acb0be485p-709,
     0x1.594d58e8959b6p-314, 0x1.d1841c4318dd9p-756, 0x1.f584f8f7a1f83p-81, 0.0,
     0x1.51b8086e9e4fap-92, 0.0, 0x1.eb769b420391ap-119, 0.0, 0x1.3f4aa32eed09ap-852,
     0.0, 0x1.530e484e9195ep-999, 0.0, 0x1.c44209d10a01fp-94, 0.0,
     0x1.de28ab42b10a4p-654, 0.0, 0.0, 0x1.fe1ea0be9b872p-680, 0.0,
     0x1.09402764cae21p-304, 0x1.fe860d5eae593p-919, 0x1.f7f1257fc6fb3p-714,
     0x1.bd8bf63cd73p-50, 0.0, 0x1.7d60d2e13bdd8p-134, 0.0, 0x1.c9c963457a4b1p-392,
     0.0, 0.0, 0.0, 0x1.f4b4ed4df0a56p-606, 0.0, 0.0, 0x1.c326eadf019f6p-276,
     0x1.e0cbb8754cc48p-258, 0x1.54bb19b000a4ep-980, 0x1.ceb9c3012a75cp-603, 0.0, 0.0,
     0.0, 0x1.4718e4a366751p-813, 0.0, 0x1.200c7d4200fbbp-767, 0x1.a19da08bd3db9p-945,
     0x1.a2e74fea558fap-800, 0.0, 0.0, 0.0, 0x1.ae7e0df6833adp-739,
     0x1.906d9b5187557p-419, 0.0, 0.0, 0x1.ef983965bc10fp-794, 0.0, 0.0, 0.0, 0.0,
     0x1.48afedf8a59d2p-10, 0.0, 0.0, 0x1.392a1c4008b32p-597, 0x1.5c6d6e82305e2p-756,
     0x1.d0532fdc8da74p-259, 0x1.9bd184c773099p-843, 0x1.f7fa34294661p-12,
     0x1.76148ae9ca4ebp-797, 0.0, 0x1.1766392e947cbp-84, 0x1.3340464cec46cp-183,
     0x1.514332ce931a7p-667, 0.0, 0x1.8eac846c134eap-983, 0x1.8bac974bef52bp-542,
     0x1.42d941f742fefp-572, 0.0, 0x1.1423b91e5e5fdp-240, 0x1.d65d81b1abcdep-423, 0.0,
     0.0, 0.0, 0.0, 0x1.783a564617e82p-1005, 0.0, 0.0, 0.0, 0.0,
     0x1.183f67b359d64p-692, 0.0, 0x1.ac0bfbee6bc4ap-274, 0x1.873719ed66856p-409,
     0x1.aaa66c837482bp-179, 0.0, 0.0, 0.0, 0x1.8d79eec0a21b4p-69,
     0x1.cb36388b2b552p-459, 0x1.7351d337e0ee7p-311, 0.0, 0x1.bc415405e1d01p-185, 0.0,
     0.0, 0.0, 0.0, 0x1.84871a8e73a95p-13, 0x1.91c0652428316p-882, 0.0, 0.0, 0.0,
     0x1.ba3cf828fa8aep-888, 0x1.ea1dd1422d3dp-197, 0.0, 0x1.37a66418ab8a5p-943,
     0x1.7d911253fadb9p-904, 0.0, 0x1.79e34c5151dc5p-564, 0.0, 0x1.cf7c5d36b81c6p-544,
     0x1.b65cb7a4556b9p-506, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.757e7782cecd6p-542,
     0x1.62521eb4cd069p-364, 0x1.062fb114bb972p-28, 0x1.c14fe09569da1p-118, 0.0, 0.0,
     0.0, 0.0, 0x1.c2601eae141f7p-559, 0x1.4152e4a61b067p-216, 0x1.03e5177b4b9bep-527,
     0x1.ba6bd7fdd2e3bp-705, 0x1.62d5fa31d8d21p-820, 0.0, 0x1.f3dfee3aaf04cp-632, 0.0,
     0x1.185a960ad9398p-294, 0x1.486e44f302929p-406, 0x1.05f577df37d1p-834,
     0x1.56f4a010ef9afp-65, 0x1.6f6e7dda95a85p-414, 0x1.4fb7dfe389dd5p-770,
     0x1.a2db5fe7653b1p-47, 0x1.a0a4417c0c35fp-633, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.635e1110b4442p-277, 0x1.8d9448e602d2fp-904, 0x1.dddc6ee0197dap-48, 0.0,
     0x1.86abeae430ed9p-435, 0.0, 0x1.e6654b38ee843p-852, 0.0, 0.0, 0.0,
     0x1.babd5abe55ef9p-240, 0x1.22414f02b285dp-28, 0x1.737e519aea8f3p-766, 0.0,
     0x1.c50639743b6f9p-590, 0x1.123ac7d9a7642p-166, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7cb5f55345ff5p-214, 0x1.92b4ea15e9ddp-364, 0.0, 0x1.7206b33414ed1p-905, 0.0,
     0.0, 0.0, 0.0, 0x1.05edbc0ffa812p-585, 0.0, 0x1.1d87544eb17fep-653, 0.0,
     0x1.f1bb9cb04a835p-414, 0.0, 0x1.04d06ceb737ddp-512, 0x1.c4ea666f994eap-335, 0.0,
     0x1.7859c7b2790e8p-159, 0.0, 0.0, 0.0, 0x1.732244aa16fc2p-814, 0.0, 0.0, 0.0,
     0x1.bbcfdb1ce1782p-284, 0.0, 0x1.a79201861955p-344, 0x1.31bac33054dcbp-869, 0.0,
     0x1.0ed44434b80fcp-642, 0x1.061428cf62dddp-873, 0.0, 0x1.a1558a58812ffp-91, 0.0,
     0x1.7f579c42b5769p-243, 0x1.92d5f63c3a45fp-584, 0x1.83418b7a4e4eap-150,
     0x1.badfc01a879a9p-22, 0x1.2c800172941cep-423, 0x1.cd2e48e374decp-170,
     0x1.f768f26f928d3p-313, 0x1.3e2b1b0b027c5p-466, 0x1.b48681d8a01c8p-147, 0.0,
     0x1.5d3c54e1f780ap-301, 0x1.fba09aa15d60cp-413, 0.0, 0x1.8ea9c6e877e08p-613,
     0x1.75b5184b0eb33p-792, 0.0, 0.0, 0.0, 0x1.ed38260d1441dp-353,
     0x1.3d3925467f7d4p-388, 0x1.55bcb9b36bed1p-110, 0.0, 0x1.262e2efedffbep-392,
     0x1p0, 0.0, 0x1.ea1af4a9c50c7p-539, 0x1.2769600bd6015p-659, 0.0, 0.0, 0.0, 0.0,
     0x1.e76643f87a269p-109, 0.0, 0.0, 0.0, 0x1.6035f7d4c250fp-76, 0.0,
     0x1.153662f937174p-99, 0x1.5b0b25a79b731p-365, 0.0, 0x1.74542b02711e9p-507,
     0x1.5bf61571defa9p-383, 0.0, 0.0, 0x1.1f675c93430c1p-997, 0x1.5b0da10103d93p-648,
     0x1.abcf9cd9eca4ep-231, 0.0, 0x1.ba74891a2164cp-694, 0.0, 0x1.4971843b89743p-454,
     0x1.ce4cb72191edap-699, 0.0, 0x1.e00a896364019p-586, 0.0, 0x1.d4b24b64a6646p-559,
     0.0, 0.0, 0x1.0e56f6d55a73ep-170, 0.0, 0x1.728cf1b237a52p-628,
     0x1.482e86063b4b4p-831, 0.0, 0.0, 0.0, 0.0, 0x1.425d023cb247ep-369,
     0x1.3197918056b0fp-688, 0x1.c4bdc6a9b6c52p-510, 0x1.4073653e189edp-423,
     0x1.39edd9b53fdb1p-62, 0x1.1aba6ac986beep-644, 0x1.876d93eba3c5cp-393, 0.0,
     0x1.0099a431eb605p-869, 0.0, 0x1.2f08da742d084p-57, 0.0, 0.0,
     0x1.ac5c5a9ebd15p-509, 0x1.d4ed62fc56ef5p-903, 0x1.687171744fa48p-55, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.04185d17a9be1p-26, 0x1.1b9fc1bd26ac1p-864,
     0x1.b665ced2bc40ap-748, 0.0, 0x1.9efa5c267c923p-320, 0.0, 0x1.11cf0e5319097p-727,
     0.0, 0x1.b54a43d980e2dp-909, 0x1.e6092b698c1a9p-928, 0x1.f28406501380cp-195, 0.0,
     0.0, 0.0, 0.0, 0x1.f0f2c92b3331ep-132, 0x1.fa9d74239d4d8p-587,
     0x1.cb7fed559bebep-443, 0x1.a71a2dd4521c6p-469, 0x1.4386a363cb034p-109, 0.0, 0.0,
     0x1.22438f1117ff6p-288, 0x1.537d6e767e1aap-5, 0.0, 0.0, 0.0,
     0x1.b7c9bd381242ap-628, 0.0, 0.0, 0x1.c5a4e5c910ff8p-31, 0.0, 0.0, 0.0, 0.0,
     0x1.adf77130aa47ep-511, 0.0, 0x1.14d9356676bcfp-700, 0.0, 0x1.67ebedaa5afd7p-931,
     0x1.75e4ef1c0c3f1p-556, 0.0, 0x1.6a926ea9f9ba9p-315, 0x1.27774e3b076e9p-362, 0.0,
     0.0, 0.0, 0x1.63143313c9228p-200, 0x1.8ef07eec400bfp-936, 0x1.d0212219dc361p-65,
     0x1.b2a96f1baa96fp-159, 0.0, 0x1.619b5ec13c7e4p-547, 0x1.b881ce547ce4ep-729, 0.0,
     0x1.eb105a3ef566cp-535, 0.0, 0.0, 0.0, 0x1.79a9e338cf8edp-487, 0.0,
     0x1.d2909aa0ccb19p-1011, 0x1.5806c3453b109p-124, 0.0, 0.0,
     0x1.c86c394dc85b7p-573, 0.0, 0.0, 0x1.2e991ef192711p-852, 0x1.ba832b7a3ae7bp-422,
     0.0, 0x1.2349a45b01f88p-639, 0.0, 0x1.3809ff6da12cdp-872, 0x1.1122c0c8bbb85p-927,
     0x1.6fd0159a31375p-770, 0.0, 0.0, 0.0, 0x1.8c8456d23b0a3p-587, 0.0,
     0x1.e1a9aeb849246p-546, 0.0, 0.0, 0x1.04c6036aec839p-457, 0x1.122968e6ad911p-133,
     0.0, 0x1.a940cda411b8dp-203, 0.0, 0.0, 0.0, 0.0, 0x1.9fa9a5c6b0936p-881,
     0x1.85a5912c97b8p-344, 0.0, 0x1.b4dca8ce4bd3ap-258, 0.0, 0.0, 0.0, 0.0,
     0x1.19c16d38504fbp-1018, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e50c087bb7f17p-473,
     0x1.4f045ad65d8c8p-234, 0x1.3c934950ac139p-522, 0.0, 0x1.2bf50620c0a74p-819, 0.0,
     0.0, 0.0, 0x1.41979f2641a3ap-618, 0x1.23a3b25cff814p-142, 0x1.08a7e5632a428p-923,
     0.0, 0.0, 0.0, 0.0, 0x1.73fae624add57p-466, 0.0, 0.0, 0.0, 0.0,
     0x1.2748f1ac43239p-466, 0.0, 0x1.e79918e58a769p-935, 0.0, 0x1.ee9abd89b0bdap-751,
     0.0, 0.0, 0.0, 0x1.3294184afb4c8p-92, 0.0, 0.0, 0x1.5fa7b314671f7p-791, 0.0, 0.0,
     0x1.f203c0a386942p-719, 0.0, 0.0, 0x1.78ebcf5110935p-561, 0x1.f05e35f364295p-283,
     0.0, 0.0, 0.0, 0x1.10eb3db956e29p-586, 0x1.e6f3b53276565p-84, 0.0, 0.0,
     0x1.127c1b51f73d8p-316, 0.0, 0.0, 0x1.e1264ec2f9f43p-308, 0.0,
     0x1.948f9680e9423p-868, 0x1.6d7490defd4d6p-560, 0.0, 0.0, 0.0,
     0x1.e14c994de5884p-791, 0x1.bad4b2bf3191dp-81, 0.0, 0.0, 0.0, 0.0,
     0x1.08938efa992bap-300, 0.0, 0x1.db6579fa23ed6p-238, 0x1.d28a5b99225p-16,
     0x1.14841783f31e3p-611, 0x1.c601e97fdafcp-88, 0x1.5a616ef4d6234p-325,
     0x1.328d4dac8d2a1p-560, 0.0, 0x1.2c041c5db3214p-790, 0.0, 0.0, 0.0, 0.0,
     0x1.427aad151ee8dp-931, 0x1.0cc88f4f4ccfcp-226, 0x1.32bf5bb97be31p-214, 0.0,
     0x1.038111333974dp-12, 0x1.39a3896210442p-440, 0x1.0020cc578d939p-561,
     0x1.8e849821c502ap-690, 0.0, 0x1.850c2bf59cb21p-842, 0.0, 0.0,
     0x1.3f4e2d8a82d94p-478, 0.0, 0.0, 0x1.6fdb18aa541b5p-418, 0x1.77237aa2bf43fp-781,
     0.0, 0.0, 0x1.db6c166b3bcc7p-662, 0.0, 0.0, 0.0, 0x1.35fcd3213a68cp-435, 0.0,
     0.0, 0x1.4ab3657102f51p-342, 0x1.ff7afa39f23cp-561, 0.0, 0.0,
     0x1.68a3fc89f5dc7p-606, 0x1.a1462632afc53p-273, 0.0, 0.0, 0x1.139214aec7da6p-520,
     0.0, 0x1.0ee5c2f4f416ap-299, 0x1.1565b9db85effp-48, 0x1.14d9e7aa67a4ep-304, 0.0,
     0x1.162a923478982p-675, 0x1.d0cff47ce4a15p-377, 0x1.72b1e2816256ap-654, 0.0, 0.0,
     0x1.2f9c93fed491p-262, 0.0, 0x1.9d9226f8fc96ap-436, 0x1.6f2521e627363p-492, 0.0,
     0x1.6fed64e4726d1p-327, 0x1.d2117255ba318p-407, 0.0, 0x1.94135e8591cf4p-899,
     0x1.f37d37974208ap-575, 0x1.68c09aab275bbp-1011, 0x1.6c7ea124d4b55p-859,
     0x1.3360e036bafb1p-338, 0.0, 0x1.93c458cd18c91p-136, 0x1.1bca4ec75b78ap-168, 0.0,
     0x1.dde59fbe28004p-332, 0x1.38cd77d8c36f4p-254, 0.0, 0.0,
     0x1.15c2bc82a2c1fp-1000, 0.0, 0x1.7c302e3fc3c02p-124, 0.0,
     0x1.bdb2baa38b414p-250, 0.0, 0x1.879c2da05d2f1p-269, 0x1.ab865e45a0223p-475, 0.0,
     0x1.aae717cd6484cp-196, 0x1.d2714bb6f8be6p-903, 0.0, 0x1.b3ba496ea5a9dp-976,
     0x1.c66254465b0cbp-990, 0.0, 0x1.4117d7bbcff86p-537, 0.0, 0.0,
     0x1.90e3a4f3a6641p-768, 0.0, 0x1.77f2f03909815p-843, 0.0, 0x1.08e214d613e3p-538,
     0.0, 0x1.4fb2d49f4ab6fp-1000, 0.0, 0x1.30c524ba7e45ep-579, 0x1.595f7bd639805p-64,
     0.0, 0.0, 0.0, 0x1.2b399959217f8p-380, 0x1.cd94de56c7ff2p-674,
     0x1.863f6648f9f81p-685, 0x1.988e62b065e9bp-202, 0x1.1c6be4695781dp-6,
     0x1.e89595dc48fbbp-107, 0.0, 0x1.ebda5ecd3ed1ep-339, 0x1.09648fa4b84d8p-226, 0.0,
     0.0, 0x1.0bbfc49c4f8cap-488, 0x1.3118df846cfd2p-23, 0x1.981ab50fa135cp-368, 0.0,
     0x1.6a116c074637dp-331, 0.0, 0x1.1b6cd48788317p-413, 0.0, 0x1.8842c37b91727p-527,
     0.0, 0.0, 0x1.a49f0cdb4f7dcp-784, 0x1.b63ee3bbd476dp-415, 0.0, 0.0,
     0x1.e32d1c847811bp-224, 0x1.950d478598c64p-392, 0x1.308da11ed3289p-753,
     0x1.1f8ddb19c612fp-395, 0.0, 0.0, 0x1.74bb654baab55p-183, 0x1.9c6c40d8f0976p-687,
     0x1.f25ac1392739p-885, 0.0, 0x1.77bdf91cee522p-632, 0x1.68300131c14d4p-909, 0.0,
     0x1.b05cf8c59048ep-532, 0x1.8d6eaba6ea805p-789, 0x1.1cd3ffc519e33p-693, 0.0, 0.0,
     0.0, 0x1.9116f4e934c94p-993, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c07ea0ad9f83p-642, 0.0, 0.0, 0.0, 0x1.dfe737fbdd572p-139,
     0x1.d3064f4567f97p-668, 0.0, 0.0, 0.0, 0x1.2f85e0a260eeep-696,
     0x1.7d8e59b06361cp-451, 0x1.a92341d0878bep-594, 0x1.8d5f2da90e465p-629, 0.0,
     0x1.1828bf56f47e3p-812, 0x1.dd4229c169601p-1010, 0.0, 0.0, 0.0,
     0x1.41d144dbed85bp-225, 0.0, 0.0, 0.0, 0x1.e3a30e2b4f58fp-879, 0.0,
     0x1.0d4866a6e5beap-928, 0.0, 0x1.5295df75195b5p-230, 0x1.e00a1ca3a8776p-419,
     0x1.e129d55d691c2p-793, 0.0, 0.0, 0x1.7bd120824d104p-740, 0.0, 0.0,
     0x1.48f06bd4e61dbp-448, 0.0, 0x1.e5bd8253a1fe3p-746, 0x1.62a6fbaed6077p-758,
     0x1.510b4658d1cbap-58, 0.0, 0.0, 0x1.238675abf6521p-109, 0x1.1986ae1e4a974p-142,
     0.0, 0x1.3fdbc986786ddp-589, 0.0, 0.0, 0x1.d15c0542400fep-692, 0.0,
     0x1.fd3c206e25a3ep-912, 0x1.97ee41b615755p-534, 0.0, 0.0, 0.0, 0.0,
     0x1.d1fd1a2cabf4p-551, 0x1.833b81f118e2ep-134, 0x1.cc6941a7b4437p-293, 0.0,
     0x1.3f0ee0a336cffp-677, 0x1.ec882ec66e79ep-1009, 0.0, 0.0,
     0x1.d7249116d56bfp-600, 0x1.9f87716c0dbe5p-134, 0x1.1638b144f3327p-816,
     0x1.afae57e4e9f4ap-94, 0x1.3e26fbd08aa65p-37, 0x1.61c1721c60aap-1000,
     0x1.0e47fd86da165p-563, 0x1.4b531a32c3628p-931, 0x1.e4447bc09ff1bp-903,
     0x1.7ba8e5b6ee22p-630, 0.0, 0.0, 0x1.278453a8e74afp-759, 0x1.b666eea7093e3p-539,
     0.0, 0x1.82351836157ebp-851, 0x1.3df8d88e857d2p-871, 0.0, 0x1.26f65b2c06672p-605,
     0x1.aee73cc4ff8ecp-1021, 0.0, 0.0, 0x1.5512e91b31a2bp-359,
     0x1.c7177be05834dp-719, 0.0, 0.0, 0x1.4c0bd9333300cp-673,
     0x1.898c75181be77p-1013, 0x1.74751d7c01bffp-379, 0.0, 0x1.4ad2e894f5cd3p-118,
     0x1.2354863a591e2p-989, 0.0, 0.0, 0x1.55455dc7d5a97p-374, 0x1.1fddc0aa5342ep-322,
     0x1.27391dae50418p-630, 0.0, 0x1.f92fdc9b29fb6p-738, 0x1.dff0ab87d1c5cp-712,
     0x1.87a62b6aa60ep-712, 0.0, 0x1.0a0ff0024bec5p-877, 0.0, 0x1.74d56edd36364p-529,
     0x1.d1217462c472cp-629, 0.0, 0x1.0fe967b86181p-12, 0x1.4d6ac5774b1f9p-603,
     0x1.1bb0d3efd42b2p-860, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b33a361e6c2p-198, 0.0, 0.0, 0.0, 0x1.0d53c16a64d08p-444,
     0x1.34f27594e10c7p-830, 0x1.1d44edb049e3ap-217, 0.0, 0x1.e077434ce87fp-417,
     0x1.097ad921f44b9p-899, 0x1.ea896620c2621p-134, 0.0, 0x1.27a55d129194p-552,
     0x1.5e555f8da8783p-414, 0.0, 0x1.b2e059a25cfbcp-972, 0x1.931a91e1f3341p-77, 0.0,
     0.0, 0x1.0e8cdefe0108fp-955, 0.0, 0.0, 0x1.6a77af390dbe8p-570,
     0x1.bf1f46db4b9d3p-635, 0.0, 0x1.d597f437b9c56p-632, 0.0, 0x1.b8f6ff84082dcp-16,
     0.0, 0x1.5b619c1595acap-304, 0.0, 0.0, 0.0, 0x1.bf219e5d81753p-164,
     0x1.6c8bcd0ef7a11p-724, 0.0, 0x1.811174032b1acp-30, 0x1.ee83d9ec9822p-116, 0.0,
     0x1.bdf6814dea70ep-975, 0x1.ad9e725b77322p-53, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_logd1_u35purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_logd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_logd1_u35purecfma bench acc %la\n", global_bench_acc);
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
