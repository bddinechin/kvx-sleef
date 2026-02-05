/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind2_u10avx2128.c --function \
 *     Sleef_finz_asind2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.6c0ff61ba8c33p-309, 0x1.266a0a1922527p-294, 0.0, 0x1.c551a6d5d80dp-528,
     0.0, 0.0, 0x1.ef939ab90c01bp-901, 0.0, 0x1.858ecfda6b085p-91, 0.0,
     0x1.cf626141c9854p-922, 0x1.df17171978938p-750, 0x1.e41848ef3ddcap-298, 0.0,
     0x1.49a97ffa18358p-478, 0.0, 0x1.a962e40496efcp-765, 0.0, 0x1.202cb85f36e3ap-227,
     0.0, 0x1.5782848b53bd9p-1016, 0.0, 0.0, 0.0, 0x1.a852ca6501547p-338,
     0x1.aa7698bd28806p-292, 0x1.9aeea9cc557e5p-488, 0x1.deb56441f8b14p-585,
     0x1.c80dc0981a17dp-559, 0.0, 0.0, 0x1.3fdfdea059f92p-107, 0x1.ce5a30847863fp-540,
     0.0, 0.0, 0x1.7364d748dbd01p-292, 0.0, 0x1.4a000deff6988p-95, 0.0,
     0x1.2952f1add21aap-863, 0.0, 0.0, 0.0, 0x1.25fc127f5f05ep-296,
     0x1.db4621dfb09bdp-194, 0x1.8758b8190435fp-143, 0.0, 0.0, 0x1.c8a73bfc05b94p-16,
     0.0, 0x1.98c236789b20fp-40, 0x1.510946009971ap-629, 0.0, 0x1.0af7c6746dd92p-198,
     0.0, 0.0, 0x1.405f1d3efcd53p-391, 0x1.cac03a23de338p-195, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48cc96f531dffp-121,
     0.0, 0.0, 0x1.f90caa79fcfcep-4, 0.0, 0x1.a54e4dc42b213p-885,
     0x1.10d940578531fp-916, 0.0, 0x1.e73f929a7f79p-557, 0.0, 0x1.c8695fa66e58cp-560,
     0.0, 0.0, 0.0, 0x1.c77d4684b8262p-170, 0x1.f659ac11b04ap-341, 0.0, 0.0, 0.0,
     0x1.e32e0896c7ebep-249, 0.0, 0.0, 0x1.756cbd4c4eec2p-251, 0.0,
     0x1.becfa4f104f03p-700, 0.0, 0.0, 0x1.d52c8a4ceffb5p-188, 0.0, 0.0,
     0x1.49f8654be6d7dp-230, 0x1.25f56983c5c5bp-271, 0x1.081681e23bb91p-886,
     0x1.e73f5c289669ap-858, 0.0, 0x1.f889f7b3138dcp-875, 0x1.fd73107f6d86ep-251,
     0x1.65927c47372e5p-933, 0.0, 0x1.892b89fb4d65fp-619, 0x1.01629f13138a9p-390, 0.0,
     0x1.40ab0062ac4e9p-823, 0.0, 0.0, 0x1.72fbe239c453ap-259, 0x1.bfaa3b1eab1ecp-975,
     0.0, 0.0, 0x1.30a6af6c35784p-1020, 0x1.9e1e63d48bca9p-924, 0.0, 0.0, 0.0,
     0x1.6107cfc75b5a5p-851, 0x1.0ad182bd72d4p-74, 0.0, 0x1.f3db85ffaac3cp-870,
     0x1.0f7e65f84b9bcp-1007, 0.0, 0.0, 0x1.6ac40205cb313p-991, 0.0,
     0x1.fe3760ddcc417p-1013, 0x1.c959616aacdfap-580, 0x1.16a99a40b0c31p-664, 0.0,
     0x1.0d4ca2329beeep-219, 0x1.5f29e03fc236bp-369, 0.0, 0x1.625c84b28e80dp-295,
     0x1.ebcbb74657dacp-869, 0x1.adcebd012f5eap-636, 0x1.2d27b797deaa9p-47,
     0x1.3751ac9f33a3ep-788, 0x1.17f50ecf02d5fp-77, 0.0, 0x1.d1c2bc71efbccp-547, 0.0,
     0.0, 0x1.0698ba3118467p-492, 0.0, 0x1.0c2f686e86a37p-553, 0x1.58be3c0cd8c4bp-817,
     0.0, 0.0, 0.0, 0x1.6d33b8fe2a809p-468, 0x1.d0e9552342258p-797, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4edf720d084f2p-764, 0.0, 0x1.a2f8399f59dddp-313,
     0x1.805997908eac1p-734, 0.0, 0.0, 0.0, 0x1.77e98ae153ff4p-536, 0.0, 0.0, 0.0,
     0.0, 0x1.0ed4513b1a676p-306, 0x1.17c7f35949f2fp-960, 0.0, 0x1.93b9bfea44e32p-483,
     0.0, 0.0, 0x1.11e46250821bep-79, 0.0, 0x1.f29b1fd372219p-610,
     0x1.f352351988a12p-977, 0x1.23a053a8ec7e9p-680, 0.0, 0x1.fc09b4535c98ap-224,
     0x1.25a51424107f4p-774, 0.0, 0x1.567602f292278p-757, 0.0, 0x1.8286fa8d70f03p-427,
     0x1.6b7d078f98e3p-78, 0.0, 0x1.7abd7ae7da8d2p-1015, 0.0, 0x1.8d021cad5df56p-373,
     0.0, 0.0, 0x1.aaa59a5ff50dfp-792, 0x1.0e31df2c6545fp-619, 0.0, 0.0,
     0x1.544fbe2bcca47p-247, 0.0, 0x1.4bcad99882572p-224, 0x1.e04961992d3efp-260,
     0x1.c9f330be11419p-427, 0.0, 0x1.b96dc054b3895p-158, 0x1.7a8b82ea852b9p-1008,
     0.0, 0.0, 0x1.ac37fb3ffb409p-860, 0x1.b042fac6e6516p-486, 0x1.ddb2c9fdb686p-551,
     0x1.a996c69175ae2p-311, 0x1.8a5078c9d271p-210, 0x1.5f13d052720c5p-830,
     0x1.837a9d1649dbdp-104, 0x1.45657a0e66d8ep-648, 0x1.bb7671dc3108ep-1011, 0.0,
     0x1.b24872db9e47ep-292, 0x1.e34b99d7711ep-347, 0x1.5d7cc9784745fp-635,
     0x1.7835c89e63048p-557, 0.0, 0x1.f4a352b2b5b83p-564, 0.0, 0.0,
     0x1.ebbfeece4b0bp-582, 0x1.a07722e441ef6p-94, 0x1.b9e3c15965a4p-151,
     0x1.9c7eb6a200d1ep-364, 0x1.2a8defb3f3331p-246, 0x1.7695c557e2b68p-728,
     0x1.9143531bce783p-799, 0x1.6edd335a11bcdp-876, 0.0, 0x1.9f3554f328e09p-332, 0.0,
     0.0, 0.0, 0x1.2db4a1936dbf3p-351, 0x1.42ad0f0928306p-576, 0x1.313d1a79ef014p-678,
     0x1.cee6551a12ddap-561, 0x1.eda0a183a3a57p-1014, 0.0, 0x1.4c68bd59acb63p-510,
     0.0, 0.0, 0x1.14c8f842b63d8p-475, 0x1.ca550f92f91a4p-803, 0x1.01438edb146e7p-231,
     0.0, 0.0, 0x1.11678dbb93059p-267, 0.0, 0.0, 0.0, 0x1.cd272ce8f89ap-577, 0.0,
     0x1.91a96ae28dbcep-201, 0.0, 0.0, 0.0, 0x1.6b1332cc92983p-996, 0.0, 0.0,
     0x1.c6f2668e89fdfp-967, 0.0, 0x1.3e62fcf87ed33p-352, 0.0, 0.0,
     0x1.af3944076eea1p-789, 0.0, 0.0, 0.0, 0x1.96c1256df7d05p-14,
     0x1.301ecddf2486fp-4, 0x1.037abda419657p-998, 0.0, 0x1.56197ebdd36p-619, 0.0,
     0x1.64f955a2a71c5p-891, 0.0, 0x1.cc5697c7e0384p-671, 0.0, 0x1.f9381823f7641p-607,
     0x1.33c9314f21c3ap-896, 0x1.3e6c4f554db9dp-379, 0x1.24c2872f2ef48p-6, 0.0,
     0x1.4f7b223a84cbep-111, 0.0, 0.0, 0.0, 0x1.11325f7130edep-57, 0.0,
     0x1.e9d351df41b13p-210, 0x1.7ee23ab168b43p-1004, 0.0, 0.0,
     0x1.70db3a63e9ec8p-768, 0.0, 0.0, 0.0, 0.0, 0x1.0a6017da47e7fp-336, 0.0, 0.0,
     0x1.f8305ee1371bep-420, 0x1.c0fd71e946fa5p-655, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.faed224cd0f92p-989, 0.0, 0.0, 0.0, 0x1.e15565759a278p-27, 0.0,
     0x1.9cc7ed3087ebep-241, 0x1.9153fafb3333ap-566, 0x1.c06e350579749p-864, 0.0,
     0x1.92849c06f7ca2p-640, 0x1.f8e4d32b2bf35p-256, 0.0, 0x1.245455676e2e4p-767,
     0x1.783a715b12d67p-407, 0.0, 0x1.3c66c6f6212ffp-5, 0x1.65280b4b4f536p-142,
     0x1.555782fde029ap-634, 0x1.138d0f718aec9p-658, 0x1.54e468ae386bep-325, 0.0,
     0x1.452248354859bp-242, 0.0, 0x1.d233cf1fad466p-1016, 0.0,
     0x1.4b60553c7606ap-289, 0x1.ef65d70423634p-219, 0x1.14f20fd5aa5a6p-1019,
     0x1.718a438afefb4p-982, 0.0, 0x1.d9b9b6c6f77e2p-280, 0.0, 0x1.8969c796190dbp-246,
     0.0, 0.0, 0x1.98e56b3c98abp-302, 0.0, 0x1.b95d9a38f43a5p-724, 0.0,
     0x1.d88d3740567eap-170, 0.0, 0x1.b39f3bd843431p-459, 0.0, 0.0, 0.0, 0.0,
     0x1.91c8c7b7422fcp-694, 0x1.e0ee417052dddp-215, 0.0, 0.0, 0x1.55d57dde2597fp-137,
     0x1.6a8e4cc0d5b62p-902, 0.0, 0x1.53d5c2e7f601bp-815, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c5d6a951f752p-459, 0.0, 0x1.caf12bc5ba523p-836, 0x1.5424ff3f5435bp-163,
     0x1.58f31780e7949p-288, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9502cae2f0b54p-790,
     0.0, 0x1.1848149f6c56ep-941, 0x1.b202022cf9658p-27, 0x1.089e6ec770441p-702,
     0x1.eebcc9c3a66b7p-928, 0.0, 0.0, 0x1.090f3df83f2d2p-491, 0.0,
     0x1.28c49093ff54ep-568, 0x1.4b2a2b03bc446p-803, 0.0, 0x1.88f6af401cc28p-1002,
     0x1.e51830e621c41p-1018, 0.0, 0.0, 0.0, 0x1.73dbac90e1726p-619, 0.0,
     0x1.381b44b12c59dp-531, 0x1.6478abeb58b27p-571, 0.0, 0x1.58d7d9cfa55ddp-820,
     0x1.bfc49554f92cfp-1020, 0.0, 0x1.49879bcebce59p-324, 0.0,
     0x1.161b19ae45845p-374, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a73e709bb72dap-226, 0.0,
     0.0, 0.0, 0x1.1770e43c5326ap-653, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3601d141dde8p-840, 0.0, 0x1.edb478ec90e8cp-105, 0x1.a634c60edce8p-164, 0.0,
     0.0, 0.0, 0x1.8c7fc64552039p-794, 0x1.04811e1d62b99p-269, 0x1.2ec1e818b8aa2p-977,
     0.0, 0.0, 0x1.ffebb3dd1e7a4p-234, 0x1.1e68f8b5ebf0ap-338, 0x1.52da8ec6cd9dap-808,
     0x1.c6717433d62d4p-588, 0x1.0bc049d3ed3cdp-414, 0.0, 0.0, 0x1.8612b71799634p-495,
     0.0, 0x1.9dd8b18c39fddp-935, 0x1.86884d9f2b246p-633, 0x1.703f1ad8feb04p-594, 0.0,
     0.0, 0x1.2d75102095b4fp-507, 0x1.ca38035f874dbp-785, 0.0, 0.0, 0.0,
     0x1.b427afbb80bcdp-92, 0.0, 0x1.c946329fc7aap-610, 0.0, 0x1.c953f7bd72784p-800,
     0.0, 0x1.a0732c4b47af8p-239, 0.0, 0.0, 0x1.7422701e38b05p-256,
     0x1.67bb3c6cc1238p-445, 0.0, 0.0, 0.0, 0x1.bfb1c65c6769cp-140,
     0x1.1d80e96c29478p-887, 0x1.ab61a53949899p-533, 0.0, 0x1.3df59c326312p-728, 0.0,
     0.0, 0x1.227694b7752c9p-84, 0x1.84419d90795f2p-852, 0.0, 0x1.7a828cf4739ap-458,
     0.0, 0x1.5e2f25a50342cp-78, 0.0, 0x1.95de1bff9eed4p-223, 0.0, 0.0,
     0x1.4ed0cf48f5ddep-407, 0.0, 0x1.0daed178feda9p-524, 0.0, 0x1.4999f75c1e4efp-576,
     0.0, 0x1.6f740216505dcp-260, 0.0, 0.0, 0x1.1adbb42bef988p-135,
     0x1.0b73bbab6987ap-390, 0x1.d117d29212f4p-521, 0.0, 0x1.b1c0ebc09c515p-552, 0.0,
     0x1.dafe37c357f71p-691, 0x1.e585c59d1c125p-625, 0.0, 0x1.90c19ae699e32p-715, 0.0,
     0x1.e56821a5aeca3p-91, 0.0, 0x1.5982f36145f62p-557, 0x1.91cae5a21b979p-909,
     0x1.97cf384639073p-285, 0x1.d92374ab66643p-398, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46859f9487dep-566, 0.0, 0x1.988cb1a0b82e9p-521, 0x1.f56165fc7ac0ep-209, 0.0,
     0x1.94b121a89f2bp-281, 0x1.6008e5ec1b49fp-606, 0x1.f6aae11a2fb93p-332,
     0x1.2145575ca42cap-15, 0.0, 0x1.2422889cff8e7p-859, 0x1.3b7f703674709p-708,
     0x1.6b35fcb386715p-185, 0x1.9fd0e5c007814p-530, 0.0, 0x1.b9035f1d9b334p-731,
     0x1.e7c1245e85938p-668, 0.0, 0.0, 0.0, 0x1.fe63d9b4c174cp-839,
     0x1.363bfdea0c39cp-316, 0.0, 0x1.adf4229b90ee1p-300, 0.0, 0.0, 0.0,
     0x1.2ba89381896a4p-336, 0.0, 0x1.d563e088d2efep-945, 0.0, 0x1.72390e2159184p-386,
     0x1.8e9156f26230bp-1000, 0.0, 0.0, 0x1.a5a21c112d5p-350, 0.0, 0.0,
     0x1.9ce4b35690f69p-453, 0.0, 0x1.c7534491b9bd6p-653, 0.0, 0x1.f002a0ad3018ep-235,
     0x1.96b9e895fcbc5p-181, 0.0, 0.0, 0.0, 0x1.e1c50d537e52bp-65,
     0x1.0b67585883e2bp-95, 0x1.f188d3116dfabp-798, 0.0, 0.0, 0.0,
     0x1.d5e1f7629947bp-3, 0x1.83b440c0233b7p-15, 0.0, 0x1.ed07a1ae4627p-172,
     0x1.327e7ab464b59p-205, 0.0, 0.0, 0x1.4735f8502b70bp-785, 0.0, 0.0,
     0x1.b3ed3199fe1f4p-748, 0.0, 0x1.1473cc22eb1dcp-901, 0x1.80d1dbc387b0cp-853,
     0x1.e42bb03364d65p-280, 0.0, 0.0, 0.0, 0x1.d48acc889c125p-748,
     0x1.e39d058893a01p-643, 0x1.f1ea5c7bd19fdp-668, 0x1.da86280c4f725p-748,
     0x1.47bc25697830ep-284, 0x1.b4aee529e13c6p-243, 0.0, 0x1.dd2372f6d2539p-82,
     0x1.318cac9c6da1ep-576, 0.0, 0x1.d4469f26741f9p-592, 0x1.ae5db20190ccap-429, 0.0,
     0.0, 0x1.00cb5a7819607p-69, 0x1.413ecf296ca73p-845, 0.0, 0x1.ea0cafa5a6399p-555,
     0x1.4502cbb323837p-230, 0.0, 0x1.7bf889823124fp-320, 0.0, 0.0,
     0x1.136eaaa56168ap-233, 0x1.9da057092b3b4p-666, 0x1.b2da8a881012cp-199, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.25b90e059ff4bp-89, 0x1.d2bd62bf28b2p-641,
     0x1.2b1aeec232811p-913, 0.0, 0x1.7cf61dcaadbebp-805, 0x1.24474eec7a60dp-27, 0.0,
     0.0, 0x1.67f00a4c62ca7p-522, 0x1.ea82aabbd4257p-1022, 0.0, 0.0, 0.0,
     0x1.0a267ee314213p-189, 0.0, 0x1.54148a8b8af9bp-453, 0.0, 0.0,
     0x1.0e312dbef06e7p-938, 0.0, 0x1.6c68ceee29e9p-136, 0x1.3bb959a10160ep-367,
     0x1.4d3d9ec2be4e2p-431, 0.0, 0.0, 0x1.676f0d328ecfbp-423, 0.0,
     0x1.d8dd5b4249875p-795, 0x1.b8132907ad595p-779, 0x1.d003d5925d94fp-755,
     0x1.92d38080ee085p-556, 0x1.7153a6fbeb8dcp-995, 0.0, 0x1.f54f7a64e8535p-359,
     0x1.0648550b0a942p-870, 0.0, 0.0, 0.0, 0x1.71ca518dd7d91p-855, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a9fedea09d43p-475, 0x1.403aea13321ccp-611, 0.0,
     0.0, 0x1.c70811565569ap-199, 0.0, 0.0, 0x1p0, 0.0, 0x1.ee077765a5da2p-651, 0.0,
     0x1.b6c5530f975c5p-159, 0x1.42885a3e5ee08p-825, 0.0, 0x1.685e55d90b4fcp-547,
     0x1.f9b0d7d9b0355p-655, 0.0, 0x1.76643e0393f96p-288, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74734799d5a26p-227, 0.0, 0x1.a42ced8366906p-80, 0.0, 0x1.0cc1fbe8ad46bp-214,
     0x1.fd66f5f34de89p-392, 0.0, 0x1.63186fb733197p-860, 0x1.de145cdeeb269p-530, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.57c7a02cdf541p-65, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8f25e39d04c6dp-596, 0.0, 0x1.45cbe59877f91p-769, 0.0, 0x1.74a6c0f178227p-500,
     0x1.468544b787366p-542, 0.0, 0x1.14b50348860e8p-910, 0.0, 0.0, 0.0,
     0x1.2998c60f5bb77p-18, 0.0, 0x1.912bd179580b2p-313, 0x1.1be10363bef0dp-175,
     0x1.af41f3740b08ep-405, 0x1.d81d12ea749fbp-531, 0x1.68e9e6de7326dp-373, 0.0, 0.0,
     0.0, 0x1.9e4163414d355p-856, 0x1.5fa0b4571969p-759, 0x1.0be6aed6440ddp-389,
     0x1.4a0084eb1d624p-387, 0x1.f38ad567d1f3bp-137, 0.0, 0.0, 0.0, 0.0,
     0x1.4f3a2f3fe68ebp-1001, 0x1.c008e1d24ecd1p-485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3684b0248dfb6p-156, 0x1.1234bd8de5e14p-584, 0.0, 0.0, 0x1.438b746df465fp-186,
     0.0, 0.0, 0x1.5a537126d5e41p-647, 0.0, 0x1.8ddd3eaf8caacp-368, 0.0,
     0x1.ccce4826b47f9p-556, 0x1.c3f1b4e200331p-589, 0x1.9e67587188f32p-453,
     0x1.c908a565fba5ep-708, 0x1.474e5b2885075p-631, 0x1.e5a9863ee3b9ep-477, 0.0, 0.0,
     0x1.4690d673aceap-585, 0.0, 0x1.05a5a3fccdae6p-234, 0x1.84d0ec6b3d8f2p-774, 0.0,
     0.0, 0x1.8623e6cf5d534p-141, 0.0, 0x1.450b8641fb78ep-911, 0.0,
     0x1.5af8b42015156p-657, 0.0, 0.0, 0.0, 0x1.ad99918fdc367p-707,
     0x1.d4f4106cd1295p-297, 0x1.1ff807f1cb98cp-653, 0x1.1ee07090c51c3p-122, 0.0,
     0x1.7df2cff6cb21fp-951, 0x1.4fc922616d8ccp-1007, 0.0, 0.0, 0.0, 0.0,
     0x1.6a21a22bce997p-705, 0.0, 0x1.32c17ca177266p-977, 0x1.5aedf3b8f3cfcp-859,
     0x1.63812f5bdcc0dp-545, 0.0, 0.0, 0x1.28af10eadde0cp-346, 0.0,
     0x1.3f04dbde87831p-212, 0x1.bd1656bbe068p-979, 0x1.53648aa08c902p-668,
     0x1.43872485d8534p-112, 0.0, 0.0, 0x1.d1b9770b52937p-256, 0.0,
     0x1.7b19a03eeaaaap-499, 0x1.b0f273b974425p-873, 0.0, 0x1.b09503770d7aep-313, 0.0,
     0x1.bc57a696bbb9cp-311, 0.0, 0.0, 0.0, 0x1.2a4bd5bcc3368p-609,
     0x1.238e8ea17d5fep-601, 0x1.3287e447c7e27p-800, 0x1.c8dede380f84fp-509,
     0x1.251f86b99c7d2p-571, 0.0, 0x1.52d5f0a152ea1p-202, 0.0, 0.0,
     0x1.865e98eb146b6p-943, 0x1.313267ec4b15ap-534, 0x1.78185f21420c1p-931,
     0x1.37a23c8153958p-577, 0.0, 0x1.6f4309e2b6b42p-924, 0.0, 0.0,
     0x1.2ea32bc8a87b7p-658, 0x1.7a29ed4f956cep-91, 0.0, 0x1.9b0da478a85aap-310, 0.0,
     0.0, 0x1.29f8723e36e8dp-898, 0x1.58d89c8a99b6fp-642, 0x1.6e2a2567e321bp-691, 0.0,
     0x1.c855bc00a5e56p-611, 0x1.4f7ee637c9f2ap-703, 0x1.5b2792188422bp-137,
     0x1.b36ece20cf063p-625, 0x1.115015fedcc6ep-469, 0x1.238f93a62dd61p-114, 0.0,
     0x1.1baf8c0df65e5p-740, 0x1.8d98afc82c2ebp-538, 0x1.2f1d4da7460ap-25, 0.0, 0.0,
     0.0, 0x1.f872f523d572p-283, 0.0, 0x1.3eb23a03c48b7p-184, 0x1.aa820fd977178p-824,
     0x1.b66aea9d0d547p-190, 0x1.9ec4cd82755adp-883, 0.0, 0.0, 0x1.cc4e9d6387ceap-962,
     0.0, 0.0, 0.0, 0x1.851b0eeb1dee2p-161, 0x1.ea1c06ef493c2p-291, 0.0,
     0x1.9b88bc0a927cfp-55, 0x1.9ce1181918ab9p-828, 0x1.8af020e6542bep-714, 0.0, 0.0,
     0x1.9d666ee1d20a7p-797, 0.0, 0x1.2488782c91474p-717, 0.0, 0x1.90f501c9b42d7p-960,
     0x1.7f81ae04b4447p-134, 0.0, 0.0, 0.0, 0.0, 0x1.d6fd32e1ca726p-503, 0.0, 0.0,
     0.0, 0x1.e15e62babaa75p-153, 0.0, 0.0, 0.0, 0x1.6c6e2d0cb7da2p-405, 0.0,
     0x1.a5d1f2287c3a8p-598, 0x1.544c58caab2c5p-845, 0x1.2ad2e070563e8p-898,
     0x1.2727f293ceb7ep-242, 0x1.e66c4fb6a8647p-1000, 0.0, 0.0, 0.0,
     0x1.00153cbb5d0bcp-756, 0x1.262523d6ef222p-918, 0x1.7b313d32bb75fp-895,
     0x1.e746e2cadf944p-92, 0.0, 0.0, 0x1.3fd90f626c27p-122, 0.0, 0.0, 0.0,
     0x1.9b38000b93ac4p-513, 0.0, 0x1.d154c4de0c4f2p-577, 0x1.dafe430dd2142p-985, 0.0,
     0x1.6d71a8b01dedfp-813, 0.0, 0.0, 0x1.6085e60477047p-666, 0x1.bb961173bcf95p-359,
     0.0, 0x1.ef139c45989a7p-194, 0x1.09a10ce30aed2p-167, 0.0, 0x1.755755e7f9a57p-150,
     0x1.2656c1317c7c5p-271, 0.0, 0.0, 0.0, 0.0, 0x1.968dc0c4f87f1p-883, 0.0, 0.0,
     0x1.693d36658d629p-685, 0x1.c8c4f16b32569p-247, 0x1.42257c76db783p-82,
     0x1.06874c2fadf87p-365, 0.0, 0.0, 0x1.e791bf5c69cddp-412, 0x1.9333cf0e51f9p-480,
     0x1.de0cb5738e482p-722, 0.0, 0.0, 0x1.fdb3514b30259p-718, 0x1.cbe0a33e9ee7fp-536,
     0x1.dfbe8bf2d583dp-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b369c2e6e14bp-928, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dcab3cf2b728p-840, 0.0,
     0.0, 0.0, 0x1.3dc10bebad58p-329, 0x1.57cb59addd87ep-964, 0x1.0ae749b71432ep-788,
     0.0, 0.0, 0.0, 0.0, 0x1.71e9569c4b0d6p-123, 0x1.a3f6bce580b39p-340,
     0x1.0eeec0aef9b71p-944, 0.0, 0.0
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
            tmp1 = Sleef_finz_asind2_u10avx2128(tmp0);
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
    printf("Sleef_finz_asind2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_asind2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
