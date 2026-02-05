/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d1_u35purecfma.c --function \
 *     Sleef_finz_log2d1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.40cd9b8c2a15ep-405, 0x1.9dbf90cf3decfp-269, 0x1.b5f9751fec5b9p-258, 0.0,
     0.0, 0.0, 0x1.9382b2de0d0cap-385, 0.0, 0.0, 0x1.cc1d913e8bfbp-222, 0.0, 0.0, 0.0,
     0x1.3c6075ef59288p-604, 0.0, 0x1.f133114824069p-243, 0.0, 0.0,
     0x1.3a2cbfe7b4735p-607, 0x1.9460a699fabp-1003, 0.0, 0x1.2575149f0ff2ap-623,
     0x1.2104ff04f2475p-678, 0x1.391c874f23d1bp-251, 0.0, 0.0, 0.0,
     0x1.569f8bbe6e794p-52, 0.0, 0x1.31f635fcd9428p-885, 0x1.0900ea013a337p-689, 0.0,
     0x1.d21125c9ca366p-293, 0.0, 0x1.398eb1918d95p-555, 0.0, 0.0,
     0x1.2243fc541f16cp-508, 0x1.ad3e9f4b7713ep-185, 0.0, 0x1.6c42dd25fb801p-648,
     0x1.a7058486bc2a1p-811, 0x1.fb841d27ff63dp-221, 0.0, 0x1.5c512df66fac1p-445, 0.0,
     0.0, 0.0, 0.0, 0x1.a0dce01122a19p-266, 0.0, 0x1.3486f0ae27fbp-273,
     0x1.2da92eccb3213p-372, 0.0, 0.0, 0x1.7e022a178297p-824, 0x1.9442f3a60a904p-503,
     0x1.e3880de52f594p-281, 0x1.d9294f9d170dcp-386, 0x1.e3631917ee039p-835, 0.0,
     0x1.a6d34ffcc8cabp-773, 0x1.df084c164ffdfp-635, 0x1.9a3b2f401ab56p-202, 0.0,
     0x1.815750b14ef7dp-102, 0.0, 0x1.43ecedbd5f574p-962, 0.0, 0.0, 0.0,
     0x1.739c41e975ab1p-320, 0.0, 0.0, 0.0, 0x1.fcd7e9a1a9bd3p-403,
     0x1.b7e0a1327bb7ap-827, 0.0, 0.0, 0x1.f880aa33041ebp-895, 0x1.7d6fe53f9b1d9p-220,
     0.0, 0.0, 0x1.f43dff976920ap-480, 0.0, 0x1.fe68389aa0932p-784, 0.0,
     0x1.50ed064482ef4p-181, 0x1.da83fcdb66967p-78, 0.0, 0.0, 0.0, 0.0,
     0x1.c2267e3a9793cp-704, 0.0, 0.0, 0x1.7a0d7b9b473b4p-1014, 0.0, 0.0, 0.0,
     0x1.1a30cfc3713f9p-105, 0x1.77a69f3ede209p-772, 0.0, 0x1.886d6c1be030ap-782, 0.0,
     0x1.2de901bd9d24dp-473, 0x1.6cc232ae04a9dp-917, 0x1.b752e1140a90cp-784,
     0x1.79f92bd1a50c1p-886, 0.0, 0x1.58cc780c2f751p-175, 0x1.788e0565ff999p-665,
     0x1.d509e9b91c0f2p-944, 0.0, 0x1.1c061b6d913b9p-71, 0.0, 0.0,
     0x1.569e8813cb4e8p-561, 0x1.95a61b0fd8dbfp-544, 0x1.306e2b1c1ef71p-530, 0.0,
     0x1.f209441960e91p-724, 0.0, 0.0, 0x1.03cbcb847152fp-153, 0x1.7d9b1e31fae29p-69,
     0.0, 0.0, 0x1.a7b52c0a28781p-840, 0x1.2222629833dafp-391, 0x1.20fb76671d0bfp-125,
     0x1.15f7af96562dfp-359, 0x1.5a6b216f40485p-416, 0x1.be4a57fa48dd6p-1021,
     0x1.88d7d6157ddfdp-177, 0x1.8ef7048188d42p-731, 0.0, 0.0, 0.0,
     0x1.f0f64e12574d3p-222, 0x1.ef79c566a12b9p-919, 0.0, 0.0, 0.0,
     0x1.fa8fa7bae9c2fp-96, 0x1.6285be5cc18e1p-91, 0.0, 0x1.54d43fd90be57p-754,
     0x1.7faf356233078p-854, 0x1.a03001ba70297p-652, 0x1.d6292af188d5ap-374, 0.0, 0.0,
     0.0, 0x1.0f9113712b13p-82, 0x1.45e5d67417783p-898, 0x1.f7bf32ef6c9e3p-213, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8df60214db31p-343, 0x1.a76b0b85cef94p-59,
     0x1.4a5e95b7a4d29p-618, 0.0, 0x1.436b42d2a4b03p-479, 0.0, 0.0,
     0x1.5fbc1608f2185p-719, 0x1.77e8f8512a64bp-790, 0x1.f116b6b3bada1p-480,
     0x1.f4d3f58cfcdb7p-171, 0x1.1ddfe0f8a9b45p-885, 0.0, 0x1.afc126c805cc7p-490, 0.0,
     0x1.caff0b64a986dp-659, 0.0, 0x1.fd7b0153a5d3p-174, 0.0, 0x1.922c533df9f95p-618,
     0x1.3e66ab8a04ffep-759, 0x1.d8c97bc22b314p-414, 0.0, 0x1.a62ec051ae71ap-726,
     0x1.f5369e25ac006p-649, 0.0, 0x1.4a360164ba8f8p-654, 0x1.10e8877e48e81p-86, 0.0,
     0x1.bf4cabb71556fp-706, 0x1.7c4cc6469968cp-71, 0.0, 0.0, 0.0,
     0x1.d130b2c62b6f3p-331, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c71a0de82631cp-507,
     0x1.6ecf139d22d89p-637, 0x1.891f693b8ebe4p-288, 0.0, 0.0, 0x1.7c9c74db0fc1cp-731,
     0x1.4ddb2855c2a53p-600, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4deee35fcbb3bp-435,
     0x1.933b0168e0caap-161, 0.0, 0.0, 0x1.7b5d1304d3d94p-318, 0x1.a7b482ba29888p-186,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce3797a148d6cp-704, 0x1.ed80db4872ebcp-341, 0.0,
     0x1.7ecd0f613ba74p-915, 0.0, 0x1.2edb2286627d9p-415, 0.0, 0.0,
     0x1.63390f6794889p-141, 0x1.a23cd986d332fp-991, 0x1.4146a424c2d9dp-879, 0.0, 0.0,
     0x1.83c11f5c5281ap-977, 0x1.fe212fbc0a2f3p-401, 0.0, 0.0, 0.0, 0.0,
     0x1.6c5ab1a699b4dp-823, 0.0, 0.0, 0.0, 0x1.c0e3fcb2cac02p-563, 0.0, 0.0,
     0x1.0f039c620b57dp-303, 0x1.999936a9ecc24p-509, 0x1.7b54f8a5d40f1p-173, 0.0,
     0x1.711c06627b0c8p-428, 0x1.b4776d1a46c81p-900, 0.0, 0x1.d3616e4b36ea8p-484,
     0x1.c72f618aed406p-408, 0x1.25dd37622f8cp-662, 0x1.09b9dfc7428f2p-674, 0.0,
     0x1.403652dc37f29p-666, 0.0, 0x1.e43cb91b59e29p-245, 0x1.e0d2974c27e15p-540, 0.0,
     0.0, 0x1.24e5e82e44bfep-493, 0x1.0747d34b95ab1p-745, 0x1.15a934fbe1c4ap-579,
     0x1.590214b946543p-812, 0.0, 0.0, 0x1.03bb872d9d119p-235, 0x1.0459f0f034ce4p-927,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c03623d5195eap-126, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0fc1c88f80b7bp-1014, 0x1.986eb57309b1ep-745, 0x1.0776a8f284971p-638,
     0x1.102f5d48965ep-353, 0x1.7afb96c4f9162p-372, 0x1.b0c6b935736b1p-577, 0.0,
     0x1.dd5819a264ceep-454, 0x1.a050d20c0672ep-663, 0x1.de9a692de991bp-524,
     0x1.ff216b0bcd3e6p-706, 0x1.2bab9464d8feep-799, 0.0, 0.0, 0x1.edb90e1fe28f2p-818,
     0.0, 0x1.5cd924e0e4d11p-288, 0x1.5a85750daa5f1p-359, 0x1.92ba92a992193p-268, 0.0,
     0x1.ddea0e94432c8p-694, 0x1.ed62a0d6bf5bbp-875, 0x1.6fb6369fd52fcp-198, 0.0,
     0x1.16879bd9ddd9ep-651, 0x1.9fd4fd82355b6p-238, 0.0, 0x1.00de011685374p-326,
     0x1.550777a137d32p-1009, 0.0, 0.0, 0x1.db1800bda86f5p-322, 0.0,
     0x1.d58e504644892p-415, 0.0, 0.0, 0.0, 0x1.122216a58af05p-28,
     0x1.4f5b6494b011bp-377, 0.0, 0.0, 0x1.0d3600521c2abp-541, 0x1.088c32c510177p-395,
     0x1.5d6e176bedd42p-745, 0x1.e1b9c0bfb903cp-112, 0x1.51f2bbf831dcep-192, 0.0,
     0x1.27cda23b2c966p-574, 0x1.3dc3f7a027267p-972, 0.0, 0x1.03151478c3ca9p-599, 0.0,
     0.0, 0x1.23cd5244e7a3ep-128, 0.0, 0.0, 0.0, 0x1.45fc1bd17347ap-657,
     0x1.c2340db586a49p-610, 0.0, 0x1.5e5b5ef436608p-13, 0.0, 0x1.b001436617c7dp-218,
     0.0, 0x1.dcb5be81284aep-349, 0.0, 0.0, 0x1.4b31e3a0f21c5p-752,
     0x1.cc350d9a00a3fp-294, 0.0, 0x1.a05c2f27e8331p-627, 0.0, 0.0, 0.0,
     0x1.c6066a75d41f2p-744, 0x1.e1a27447e4111p-858, 0x1.95622bb93eee3p-499,
     0x1.7a22ae1115582p-492, 0x1.582bc7dc1c25p-134, 0x1.549e697ce2c76p-203, 0.0,
     0x1.b235958bb924fp-332, 0.0, 0x1.fae4fa9c866bap-171, 0.0, 0x1.86ce4c6656fe3p-232,
     0x1.4c570454860d5p-949, 0.0, 0x1.b1a98659adb5bp-535, 0x1.ff37e7272219ep-419, 0.0,
     0.0, 0x1.22a8b24900ad5p-900, 0.0, 0.0, 0x1.5435c69b011eep-544,
     0x1.df78c0c21b09dp-644, 0x1.54fffa428c8b5p-672, 0x1.31ad9ba849a36p-56, 0.0, 0.0,
     0x1.f2a59162a47f4p-29, 0x1.edbdb90ef6e4cp-961, 0x1.ed08fac2c3e73p-199, 0.0, 0.0,
     0x1.44bba81ad2628p-13, 0x1.b243407bd7db3p-354, 0x1.0c4f4ee22349fp-413,
     0x1.f5b53aed247c7p-272, 0x1.6156d994f474p-965, 0x1.2664881f613dfp-658,
     0x1.3cebc81cd65d9p-370, 0.0, 0x1.21fd2f075404p-189, 0x1.96aa4be21a7a2p-647, 0.0,
     0.0, 0x1.dee1812685324p-42, 0.0, 0x1.5ae0b1933c4b6p-877, 0x1.e7e2f290d1d0fp-567,
     0x1.ce9b24a47d981p-821, 0.0, 0x1.a87098687f93dp-592, 0.0, 0.0,
     0x1.82d2db04d1991p-962, 0x1.1c21ec2fd14a8p-7, 0x1.b0a921127379fp-579, 0.0,
     0x1.7cdaa42ac6086p-300, 0x1.2fca4967246d5p-830, 0.0, 0.0, 0.0,
     0x1.fd9f2985730a2p-693, 0.0, 0.0, 0.0, 0x1.63274775d84d3p-13,
     0x1.f6d11a0d0deap-545, 0x1.55fd8d7ddf6fdp-342, 0.0, 0x1.0b6f261c21131p-511,
     0x1.14785b977382ap-72, 0x1.8898248ef4f91p-921, 0x1.953cdce725da3p-442, 0.0, 0.0,
     0x1.93b3de1ac519ap-507, 0.0, 0.0, 0x1.bdaa920ef12f5p-787, 0.0, 0.0,
     0x1.4bed3cdca14f8p-338, 0x1.a71346de72116p-582, 0.0, 0.0, 0x1.8786b97ef57eap-619,
     0x1.14da4446f53fp-577, 0.0, 0x1.5881e3ec18071p-278, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.72203f21b5c6cp-73, 0.0, 0x1.1c9870460430dp-216, 0.0, 0x1.ef46f6e19a477p-748,
     0x1.4b7e24b92faadp-444, 0.0, 0.0, 0x1.660b2bb2c4d1ap-715, 0x1.fc37dcf5a4fbep-733,
     0.0, 0x1.8e4a8a222902bp-1015, 0.0, 0x1.08376daed799fp-393, 0.0,
     0x1.efdab1424a1c3p-366, 0.0, 0.0, 0x1.10544c195ab6dp-735, 0x1.db29903e6af88p-435,
     0x1.e840bdbe8e17p-970, 0x1.eaa44f15bdd7ap-541, 0x1.2ec2f86ce4786p-959, 0.0,
     0x1.8f47828833626p-111, 0x1.d46f386f4464ep-609, 0x1.9e90b14800424p-465, 0.0,
     0x1.85fe90b0ac735p-331, 0.0, 0x1.df0cc97b965ep-363, 0x1.fe1e83c9180a8p-549, 0.0,
     0x1.5ec96677ddf05p-519, 0x1.26abac2be04a3p-99, 0x1.1c8d92ac1da16p-706,
     0x1.36cb79cce294fp-468, 0x1.59cfc9a3e4026p-705, 0x1.40e1e1f3ffd63p-819, 0.0, 0.0,
     0.0, 0x1.0d5c3182c11e7p-569, 0x1.1f013f5585f8cp-420, 0.0, 0x1.360ef6c11861ep-990,
     0x1.97b5b8c224115p-960, 0x1.d517fea684c59p-17, 0.0, 0x1.8be5ebd66902bp-722, 0.0,
     0.0, 0.0, 0.0, 0x1.acf1e27ce4b1dp-668, 0x1.6e069821db3p-341,
     0x1.ddb80a1a41cb3p-260, 0.0, 0.0, 0.0, 0.0, 0x1.cf6650aeb268bp-593,
     0x1.ed9bb27c5ed98p-122, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e24cbda5e7cc7p-360,
     0x1.9817b6aa3babbp-126, 0x1.aa431e5e79979p-504, 0.0, 0.0, 0x1.c1a1b69385098p-375,
     0x1.a38835ca8ba9p-630, 0x1.5b469e22c7482p-811, 0.0, 0x1.8fb331c0f3085p-630,
     0x1.ece33645fa9eep-159, 0x1.2df188ff0799ep-228, 0x1.f4f3d4201b1cep-574,
     0x1.12e2858e419d8p-1003, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.690036f633e2ap-259,
     0x1.214f56af3cacap-784, 0.0, 0x1.afde06972917cp-961, 0.0, 0.0, 0.0,
     0x1.ae7d0f051ba45p-256, 0x1.150e0c2d56fe4p-641, 0.0, 0x1.17aa8c6832da4p-318, 0.0,
     0.0, 0.0, 0.0, 0x1.e55a5ba671674p-820, 0x1.0e23206f1a695p-70,
     0x1.bd46f05c7a26dp-671, 0x1.046daa9413db8p-124, 0.0, 0.0, 0x1.454886c1d1692p-534,
     0.0, 0x1.176c49c9934b6p-523, 0x1.71e4dbfd13fe4p-123, 0.0, 0.0,
     0x1.1a9ff5ba98933p-338, 0.0, 0.0, 0x1.ff656838d2b3ep-11, 0.0,
     0x1.cb871dde00ec8p-690, 0x1.dbb8621aee5f9p-523, 0x1.f123ee4d19923p-964, 0.0, 0.0,
     0x1.f173efd65bafbp-593, 0x1.67a1645fdbcbap-224, 0x1.87df51e3ce629p-12, 0.0, 0.0,
     0.0, 0.0, 0x1.1425682868c7bp-434, 0x1.13d921010516fp-936, 0.0,
     0x1.66e02f41ebe3cp-921, 0.0, 0.0, 0.0, 0.0, 0x1.8aeaaa9c77461p-340, 0.0, 0.0,
     0.0, 0x1.3278462955986p-882, 0.0, 0x1.67c6bf32236f5p-376, 0.0, 0.0, 0.0,
     0x1.757180637f459p-232, 0x1.4b75422961795p-517, 0x1.de98635b27054p-5, 0.0, 0.0,
     0.0, 0.0, 0x1.4e15541aebe2ep-493, 0.0, 0.0, 0.0, 0.0, 0x1.c4fad1ab0e524p-870,
     0.0, 0x1.0b4ca94ea2368p-781, 0.0, 0x1.91e3bc244d7fdp-196, 0x1.4de6dcd495da1p-603,
     0.0, 0.0, 0x1.044d80794f9d9p-570, 0.0, 0.0, 0.0, 0.0, 0x1.a67ff172ccb65p-269,
     0x1.63f5da6cb4e01p-77, 0.0, 0x1.4d2a9c35ca448p-204, 0x1.d431f058486acp-746,
     0x1.5b4d6c41e856ep-493, 0x1.e50d2d688555fp-43, 0.0, 0.0, 0x1.4cb0102e6b319p-116,
     0.0, 0.0, 0x1.2608765c17b12p-241, 0.0, 0x1.b9232aac8ca0dp-325, 0.0, 0.0, 0.0,
     0.0, 0x1.30e42b6e1336ep-196, 0x1.c21359c57644cp-762, 0.0, 0x1.ac3a980fdfd2fp-445,
     0.0, 0.0, 0x1.9276b267a3c62p-505, 0x1.94f3be87d49p-791, 0x1.65213f171c89bp-767,
     0x1.4d4c29b2d7bbcp-585, 0.0, 0x1.c795d5bacf9a1p-338, 0x1.191d1d3acad46p-192,
     0x1.eddddccbdccaep-234, 0.0, 0x1.febf0dfec96f9p-494, 0.0, 0.0, 0.0,
     0x1.f98d3284a50bep-129, 0.0, 0x1.47f2b81965a68p-618, 0x1.1904e00aa8fe8p-896,
     0x1.b4715a518cddfp-647, 0.0, 0.0, 0x1.f6b0094ebcbe1p-640, 0x1.86aa3e66e2b39p-661,
     0.0, 0.0, 0.0, 0.0, 0x1.7c8892a0699bp-993, 0x1.140b81df3d03cp-83, 0.0, 0.0, 0.0,
     0x1.e7ff74ed13aa2p-303, 0x1.ea767f119ca7bp-864, 0x1.f1166d67def25p-176, 0.0,
     0x1.2c8141b02207fp-165, 0.0, 0x1.b26eec05ee2cbp-1008, 0x1.8ca574b390d18p-618,
     0x1.b28909d2d845ep-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.856ee67cd33ap-1022, 0.0,
     0.0, 0.0, 0x1.035c3fa422db8p-713, 0x1.108631daaa02bp-773, 0x1.2d782b983af3dp-17,
     0.0, 0.0, 0x1.80f23c91016d8p-448, 0x1.ddb06160e83a3p-999, 0x1.a34b4d80aa9e3p-362,
     0x1.cc81600f8eeddp-497, 0.0, 0.0, 0x1.ad2e4b1d96836p-237, 0x1.63e3ac4b3116cp-750,
     0x1.526fbaaf9d3afp-916, 0x1.14164ba132fdep-3, 0x1.f0e12dea27fe9p-116,
     0x1.b6bd26c2f68cp-614, 0.0, 0.0, 0.0, 0x1.18cd2b29e6287p-471, 0.0,
     0x1.17c11783d4cb3p-740, 0.0, 0.0, 0.0, 0.0, 0x1.fc77b7f52f451p-680, 0.0,
     0x1.db932d8525fb3p-71, 0.0, 0x1.8927371581578p-1014, 0x1.f5f9b243f8162p-668, 0.0,
     0.0, 0.0, 0x1.e43e8fc834d95p-507, 0.0, 0.0, 0x1.5a92eb7a2e897p-438,
     0x1.5ce1e8d4d4fc7p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb1a75fdc6d81p-41,
     0x1.9fb0a15e48216p-835, 0.0, 0.0, 0x1.0c738becc0cb6p-430, 0x1.f603c9be90dc4p-177,
     0x1.7edd9fed481bp-118, 0.0, 0.0, 0x1.842b68ee24817p-108, 0.0, 0.0, 0.0,
     0x1.d3b307c07cd46p-440, 0.0, 0x1.591e4c73108f8p-33, 0.0, 0x1.90090e5606dcep-453,
     0x1.86c98de7faf2bp-883, 0x1.cb4805d54ea93p-773, 0x1.8f3cd9424627p-663, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.178838a18d5edp-185, 0.0, 0.0, 0.0,
     0x1.d9a6f25a9e151p-268, 0x1.c8e209fd31cbp-435, 0x1.ec920bdb7e9b9p-13, 0.0,
     0x1.99443bd6fb2b5p-619, 0x1.fa395f9f87d9p-331, 0x1.14fe6c4f32ac9p-748,
     0x1.e9221ff720f7ep-326, 0x1.e64b538fb3cfdp-301, 0.0, 0x1.3de4110d6b525p-389, 0.0,
     0x1.e4d25674e4576p-992, 0.0, 0x1.7137ae055fc3fp-586, 0x1.c21bf6734b226p-114, 0.0,
     0x1.f5a6631dfbe9cp-963, 0x1.1016eda20c3a1p-118, 0x1.eadc4cf3303c2p-81, 0.0,
     0x1.e0203592cd66p-302, 0.0, 0.0, 0x1.0b613e0e9a9cp-146, 0x1.514b7fdd01083p-26,
     0x1.431bd13391ea1p-511, 0.0, 0.0, 0.0, 0.0, 0x1.6352a9b7e59ebp-464, 0.0, 0.0,
     0x1.b315659043035p-96, 0.0, 0x1.91662b83ed495p-744, 0x1.b26a5f45926eep-494, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.da92768c81167p-235, 0x1.fb23a121307c6p-598, 0.0, 0.0,
     0x1.a2bab8e66533fp-893, 0x1.b41e3118471a1p-111, 0x1.f26e4ff11dd41p-380, 0.0,
     0x1.bb7b42b7db28ap-72, 0.0, 0.0, 0x1p0, 0x1.8e320be220d9bp-981, 0.0,
     0x1.de66243aced92p-782, 0x1.8cea61a422de4p-855, 0.0, 0.0, 0.0,
     0x1.0e60d98fc4128p-593, 0x1.54e70a4ced007p-788, 0x1.0da60602345f2p-235,
     0x1.f91d2b0efa3bep-154, 0x1.b1fd02a01d6bp-653, 0.0, 0.0, 0x1.3cf0d1e50a399p-566,
     0x1.59213bd89bf54p-651, 0.0, 0.0, 0x1.bb8cc73f118c5p-35, 0x1.e11357abbdee2p-786,
     0.0, 0.0, 0.0, 0x1.7f538f7d882fep-767, 0x1.4dde6fa1cdbc9p-20,
     0x1.ba4564a96c06cp-218, 0.0, 0.0, 0x1.fa1896521fb3cp-131, 0.0, 0.0,
     0x1.88b0d29442a68p-603, 0x1.706683c0b5d9p-266, 0.0, 0x1.5cb7519a1b55fp-402,
     0x1.1fac0836f8e25p-635, 0x1.dd59506119313p-624, 0.0, 0x1.5dbca0d7ebc9fp-224, 0.0,
     0x1.f865029fc883fp-549, 0.0, 0.0, 0.0, 0x1.cde2751a29a16p-783, 0.0, 0.0, 0.0,
     0x1.1014694d1a855p-963, 0.0, 0.0, 0x1.0e9c331480f69p-571, 0x1.7a2170d8a4973p-694,
     0x1.7daa47c96b968p-596, 0.0, 0.0, 0x1.2000a17309401p-995, 0x1.7ffa0b51eb70cp-72,
     0x1.fe285c2cf9909p-504, 0x1.ba6bb59e61ae9p-913, 0.0, 0.0, 0x1.226851ff883eep-99,
     0.0, 0.0, 0x1.4ee1600fa11c7p-705, 0.0, 0x1.4e301e5b325bap-857, 0.0,
     0x1.db1f838585bd6p-876, 0x1.681cd5f00df64p-54, 0x1.c49665bfba9e5p-177, 0.0,
     0x1.721d484172663p-3, 0x1.e42b9c4281645p-583, 0x1.6a870ab5c1d45p-287,
     0x1.a6a3a078b180bp-564, 0.0, 0.0, 0x1.73984db6d3f08p-670, 0x1.ece7ad845d58ap-674,
     0x1.0f5fc8562febfp-289, 0x1.1fc4e3796dac2p-154, 0.0, 0x1.66be6aa6b53aap-167,
     0x1.9d5cc542d15e2p-168, 0x1.6c2877f825ab2p-666, 0x1.64375b42768aep-648,
     0x1.b53fc3c060f05p-524, 0.0, 0x1.d112291e717b4p-795, 0.0, 0x1.9e19705e67d2p-452,
     0x1.968be7d6703fap-712, 0x1.b477d7b201c22p-539, 0.0, 0.0, 0x1.18cc37630b9ecp-394,
     0.0, 0x1.8aae340196e06p-117, 0.0, 0x1.13513edc8b9ccp-707, 0.0, 0.0, 0.0,
     0x1.76a20213a2aa6p-608, 0.0, 0x1.7f15801f8fddap-669, 0x1.83750cb732b8p-433,
     0x1.8d5493e06eed1p-4, 0x1.1320c8397b27p-502, 0x1.5a3f4874b341ep-6, 0.0, 0.0,
     0x1.972ba01993eabp-931, 0.0, 0.0, 0x1.584b56e90e4c4p-412, 0.0,
     0x1.cc86b6095229cp-968, 0.0, 0x1.f66d51e48b3fep-919, 0x1.c4611a6d3ba1fp-908, 0.0,
     0.0, 0x1.5832396950cd4p-563, 0x1.8f2145366338p-902, 0x1.f1cc623175f13p-521,
     0x1.038ea8134fd6cp-103, 0x1.9401078aa4793p-1013, 0.0, 0.0,
     0x1.81910d0ba8b5ep-453, 0x1.cd45137e7685p-792, 0.0, 0.0, 0x1.46158254efd8cp-54,
     0.0, 0.0, 0x1.125e85971fb4dp-200, 0x1.581e23013e55fp-944, 0.0,
     0x1.c62589ed66b27p-444, 0x1.d8fce55c52898p-746, 0x1.bd05028169314p-553,
     0x1.549ee61dfe493p-946, 0x1.680ff79c86921p-180, 0x1.eda868dc81cd6p-465,
     0x1.d859853ef4569p-32, 0x1.1bf1ef6dfa8f2p-591, 0.0, 0x1.43aa78bb054fp-164, 0.0,
     0x1.e312f40040647p-274, 0x1.89f25c57c6285p-785, 0.0, 0x1.2bd3acc71aa6bp-226,
     0x1.b98661511eb8fp-1021, 0x1.4fcc9136b530cp-150, 0x1.b1e5011809a51p-916,
     0x1.4d469cd9fb7cfp-268, 0x1.3cbe187ad29b3p-156
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
            tmp1 = Sleef_finz_log2d1_u35purecfma(tmp0);
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
    printf("Sleef_finz_log2d1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2d1_u35purecfma bench acc %la\n", global_bench_acc);
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
