/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd4_u35kvx.c --function Sleef_acosd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.2ee46fbe8ba31p-70, 0.0, 0.0, 0.0, 0x1.dee4cb811e67p-226, 0.0, 0.0, 0.0,
     0x1.53847fe3f47c4p-574, 0x1.5845105d9f29bp-497, 0.0, 0x1.0b1caf1284ca9p-328, 0.0,
     0.0, 0.0, 0x1.d73a054ae22abp-301, 0x1.4d0292c405731p-31, 0x1.76c06df5fd308p-271,
     0.0, 0.0, 0.0, 0x1.ebc7fff4b69efp-466, 0.0, 0x1.d75bd8256de3dp-301,
     0x1.23969a409cb5ep-862, 0x1.95fd008cae32bp-6, 0.0, 0x1.38765362816bdp-860,
     0x1.6a7e1decab1c6p-297, 0x1.187beef72a96p-267, 0.0, 0x1.beb484899b4cep-990,
     0x1.77f85ca173e44p-962, 0x1.e17f4cefd6f28p-911, 0x1.99df3bffa3356p-146, 0.0,
     0x1.b5948909ba147p-602, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.995ff8e23a56cp-71, 0.0,
     0x1.4fb2107940329p-965, 0.0, 0x1.773e3e4000d39p-661, 0x1.a079174cf3bc1p-318,
     0x1.ea1e5185872dep-116, 0.0, 0x1.39b78affbf829p-638, 0x1.b29022ceef21fp-632, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a2c18c51393bfp-118,
     0x1.ddf18e9b9c8a6p-603, 0x1.127eac7f46f76p-645, 0.0, 0.0, 0x1.31a9aa5c8b021p-871,
     0.0, 0.0, 0.0, 0x1.143845c387f31p-108, 0x1.f06f219a31dffp-949, 0.0, 0.0, 0.0,
     0x1.1987521456c1dp-892, 0x1.5b2e49e6b3af8p-164, 0.0, 0x1.7a4bbc9d34f57p-499,
     0x1.fe90bfacafebfp-641, 0x1.3c4d6067820ffp-639, 0.0, 0x1.f130b45796af9p-863, 0.0,
     0x1.bf9db452b00d2p-113, 0x1.46462415f8632p-230, 0.0, 0x1.c3c1486e4d671p-680,
     0x1.779982eb5ef5bp-470, 0x1.dc7ca808defd7p-917, 0x1.2a3aa0eff14d9p-631, 0.0,
     0x1.dee12d9a46558p-361, 0.0, 0x1.66b45b31bc437p-43, 0x1.0f4729ea3040dp-865,
     0x1.d46ed101d711cp-649, 0x1.0152ab14172e6p-294, 0.0, 0x1.f11d8313f6d63p-522, 0.0,
     0x1.4cb186e19ccb9p-743, 0.0, 0x1.9907609662443p-518, 0.0, 0.0, 0.0,
     0x1.06eca8c2dbce6p-447, 0.0, 0x1.ebe94dc8599ddp-690, 0.0, 0.0,
     0x1.481a951a32d33p-364, 0.0, 0x1.6e9aa5c43739ap-642, 0.0, 0.0,
     0x1.8e961c9cba05ap-121, 0.0, 0x1.ba4d48033926ap-252, 0.0, 0x1.4d09b48641c2fp-942,
     0x1.13a8b69525898p-603, 0x1.c160e6b408d81p-852, 0.0, 0.0, 0.0,
     0x1.47deb2db8527p-868, 0x1.e6df74d3c0d44p-270, 0.0, 0.0, 0x1.f62e9c1307df8p-656,
     0.0, 0x1.1de74fe171332p-448, 0.0, 0.0, 0x1.61d9fac105651p-414, 0.0, 0.0,
     0x1.5585155a18e5dp-858, 0x1.ae5869bc2f705p-14, 0x1.85a1dc484fa33p-1006, 0.0,
     0x1.f9785bc3dd812p-97, 0x1.3269d57f46b73p-772, 0x1.dcf101402faaap-687, 0.0,
     0x1.92eecb16ca9fap-146, 0.0, 0.0, 0x1.95bb31ea74a26p-933, 0.0, 0.0, 0.0, 0.0,
     0x1.94dd7295ab76dp-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd8f1c0f84f1ap-546,
     0x1.366368170f547p-976, 0x1.6a872487c9d8ep-783, 0.0, 0x1.4ac1a80de5803p-651,
     0x1.86aa7eb6710c6p-162, 0.0, 0.0, 0x1.b758381c554f9p-837, 0.0,
     0x1.ba36996dc32a1p-338, 0x1.2aa8ed75ccbcfp-415, 0x1.5d6b292522e5fp-231, 0.0, 0.0,
     0x1.29b17064af7abp-350, 0.0, 0x1.0394f9feb684cp-554, 0.0, 0.0,
     0x1.33d5d2169d4e9p-324, 0.0, 0.0, 0x1.bcda8c9e2c662p-758, 0.0,
     0x1.9b74db83e7af1p-534, 0x1.d37662a1d1a06p-213, 0x1.7140b34693be8p-55,
     0x1.ecbfe06441eb6p-223, 0.0, 0.0, 0.0, 0x1.88ef026cdd245p-305,
     0x1.c3d2be2991016p-95, 0.0, 0x1.38c32d45e83eap-33, 0x1.8a373479a5e2p-843, 0.0,
     0x1.51fde8bf70571p-638, 0.0, 0x1.af264fc7d7b1cp-754, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c479e048b0aep-193, 0.0, 0x1.36d49446ff26cp-1012, 0x1.be112152a355p-950,
     0x1.fdf6c5936cc7cp-977, 0x1.cebe152375b61p-320, 0.0, 0.0, 0x1.edd7c3affa13p-859,
     0.0, 0.0, 0x1.f8cb717c824e1p-69, 0.0, 0.0, 0.0, 0x1.d8096cb2e075dp-42,
     0x1.22804523c17b3p-999, 0.0, 0x1.3280c6e5e1908p-564, 0x1.345c602532bb6p-275, 0.0,
     0x1.16ec4339f8af5p-678, 0x1.dfa02cb4c5d5cp-174, 0x1.1a5ecc10345fcp-256,
     0x1.472b6676c85dp-113, 0x1.68e735ad0bf05p-733, 0.0, 0.0, 0.0,
     0x1.009a2af17c6e1p-601, 0x1.7dd2b4794213bp-800, 0.0, 0.0, 0.0, 0.0,
     0x1.a782e4dff434bp-360, 0.0, 0.0, 0.0, 0.0, 0x1.4259f1253d755p-422, 0.0, 0.0,
     0.0, 0.0, 0x1.e1a81b8401bdcp-599, 0x1.4176cbf501d73p-363, 0.0,
     0x1.87006b1dd0a2p-27, 0x1.25553a4b1f989p-197, 0x1.354327e5bb888p-884, 0.0,
     0x1.edcc1beb56ae8p-805, 0x1.01fb3405ba37ap-371, 0.0, 0x1.6a6910565e16ap-839,
     0x1.b03be6453e62ap-189, 0x1.b5d187798a9c4p-1018, 0.0, 0.0, 0.0,
     0x1.afec524401cc5p-283, 0x1.193d977f13a5ep-261, 0.0, 0x1.f0b349d6453e8p-352,
     0x1.1e0570726971bp-36, 0x1.64b4c0b55d042p-617, 0x1.7a044bc5f94d3p-333,
     0x1.6f47c43afc2aep-978, 0.0, 0.0, 0x1.659b90fe1378bp-452, 0x1.22b289c7ed105p-497,
     0x1.bc5eddf46c174p-618, 0x1.a77f405db1c8ep-22, 0x1.37325abff6691p-433,
     0x1.4be30602c8ca3p-311, 0.0, 0.0, 0x1.2fe9f0272fd06p-896, 0.0,
     0x1.55f360e2bd1b7p-295, 0x1.4b600de5dd622p-1003, 0x1.6b1ca881bd16dp-352,
     0x1.c11c32073cd95p-748, 0x1.cc3428c5c1953p-848, 0.0, 0.0, 0x1.5fbfb511d73dap-15,
     0.0, 0x1.68bfad00d0b44p-911, 0.0, 0x1.73ced525bea7bp-475, 0x1.7bbbabc3698fdp-337,
     0x1.39f378dd45dfap-259, 0.0, 0x1.921fa27231738p-534, 0.0, 0.0, 0.0,
     0x1.807c8abde331ap-390, 0.0, 0.0, 0.0, 0.0, 0x1.174877133c2bp-639, 0.0,
     0x1.dbca7ab877ef2p-1002, 0.0, 0.0, 0x1.93f1c68530922p-23,
     0x1.3f13bb6fb625fp-1010, 0x1.ab451671ec97cp-936, 0x1.e9ca58a98d29p-845, 0.0,
     0x1.ac9943751aacep-552, 0x1.7535dcf2b10e9p-545, 0.0, 0.0, 0x1.faf88d0d4c3cp-575,
     0.0, 0x1.9b8cb872eb993p-609, 0x1.b1add70de89d4p-868, 0.0, 0.0, 0.0,
     0x1.a2c0abc611cf4p-334, 0x1.94bf0e9624cf2p-425, 0x1.0cb2355876178p-844, 0.0,
     0x1.2208ca7440a17p-894, 0x1.f0b79c83b2bd2p-781, 0x1.fe85af99a1599p-496, 0.0,
     0x1.1646932f4d969p-291, 0x1.c0954ad5e9203p-934, 0x1.905ed0ac81feep-310,
     0x1.fbb3b09c7b4ffp-854, 0x1.2d943ad56724fp-918, 0x1.62319b147fdd4p-549, 0.0, 0.0,
     0x1.4431b2cf1dfdbp-601, 0.0, 0x1.d1c734c10eeadp-354, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3fbe9b447fce5p-525, 0.0, 0.0, 0.0, 0x1.9f4d893ab3882p-674,
     0x1.a274dd27e5fcbp-509, 0.0, 0x1.04c3853052027p-910, 0.0, 0.0, 0.0,
     0x1.34ed853a4ada5p-24, 0.0, 0.0, 0x1.ce8dbe28513bap-574, 0.0, 0.0,
     0x1.835f02696f2fbp-55, 0.0, 0x1.1711959893ff1p-474, 0.0, 0.0, 0.0,
     0x1.98c6130e108d4p-894, 0.0, 0.0, 0x1.6ca188258c881p-629, 0.0, 0.0,
     0x1.ee1916ae7e28dp-712, 0x1.2e5265c96617cp-120, 0.0, 0x1.2dd6f2c597582p-909, 0.0,
     0x1.1d0b785856026p-545, 0x1.1fbee9fb5b56dp-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f65cf41ff8558p-982, 0.0, 0.0, 0x1.c56ff112b0c82p-459, 0.0,
     0x1.477e5f736b259p-627, 0.0, 0.0, 0x1.bc2a80ab76edp-20, 0x1.9677b82f631abp-748,
     0x1.07de0d2d8b459p-810, 0.0, 0x1.1ca8737536ebbp-514, 0x1.47abdb07e88e9p-953, 0.0,
     0x1.70c3ff4873d18p-376, 0x1.3784d9e771949p-1008, 0.0, 0x1.5d8cebf2a65e3p-563,
     0.0, 0x1.bb2b20c304437p-847, 0x1.db2d9ad976154p-153, 0.0, 0x1.771f84417fc82p-105,
     0x1.7c3c7946de1edp-567, 0x1.1d19d91419e11p-630, 0.0, 0x1.dfc7781eeffbfp-890, 0.0,
     0x1.5bb4c29e62f3ep-940, 0.0, 0.0, 0x1.2880ab018992cp-501, 0x1.5980ed4c5fdd1p-289,
     0.0, 0.0, 0.0, 0.0, 0x1.38d8e004ce4d2p-59, 0.0, 0.0, 0.0, 0.0,
     0x1.0d609635db187p-1021, 0x1.50a17421fb2f5p-478, 0.0, 0x1.b0ed1a0d74ee5p-939,
     0x1.0d0f9116a93aap-720, 0.0, 0.0, 0.0, 0.0, 0x1.999921265143cp-33,
     0x1.4fcb38fbb5e2p-152, 0.0, 0.0, 0x1.e6079a6eab9ccp-271, 0.0, 0.0, 0.0,
     0x1.34c39a111abe8p-148, 0x1.ecf86f60e71dp-954, 0x1.f68e780c87ad2p-163, 0.0,
     0x1.41098d1e5cf4ep-657, 0x1.7453d432340c9p-675, 0.0, 0.0, 0x1.e851ceb1e4dd3p-533,
     0.0, 0x1.3c2d2101b9a95p-1008, 0x1.dd3829ae07655p-476, 0.0, 0.0, 0.0,
     0x1.736767258d123p-976, 0x1.4771b771fc45p-929, 0x1.e95e4a8147139p-667, 0.0,
     0x1.bf2863b7700ap-654, 0x1.590cbaf94ff26p-477, 0.0, 0.0, 0x1.577c5ff0c729dp-236,
     0x1.36370c1e69d34p-779, 0.0, 0x1.dc58003e09ce5p-822, 0x1.13682aa4f5cbap-727, 0.0,
     0x1.84ef8dccff87p-500, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.80d98bdc4fbabp-940, 0.0,
     0x1.fbcf184ffbffep-309, 0.0, 0.0, 0x1.234521b5e2ad6p-223, 0x1.abf726c189c83p-622,
     0x1.4e99a5ea07974p-596, 0x1.721d613c35d63p-445, 0.0, 0.0, 0x1.6fe8bcb41caf5p-144,
     0.0, 0.0, 0.0, 0x1.faf09b047405dp-322, 0.0, 0x1.28d9f8916b73bp-983,
     0x1.0dea3a1075ab5p-108, 0.0, 0x1.545554e3c7f0bp-810, 0x1.000ece4c8f056p-776,
     0x1.d557700a6d8cdp-956, 0x1.4f0e399aba8acp-984, 0.0, 0x1.48627b1950112p-937,
     0x1.b32b794dd26c8p-934, 0x1.00bbb396ed773p-123, 0x1.593692069e41ap-1019, 0.0,
     0x1.abe0ba9e82748p-182, 0x1.4b019562c3694p-892, 0x1.20d599f64e295p-821,
     0x1.4d457acfbc69dp-887, 0x1.cc6cc9017a0edp-632, 0x1.375c1ee502c4bp-967,
     0x1.82a9576ceb033p-742, 0x1.f1ec4b062b705p-920, 0.0, 0.0, 0.0,
     0x1.f71a3477d9c4dp-279, 0.0, 0x1.a775a0ca91d3ap-866, 0.0, 0x1.79a4127f351p-574,
     0.0, 0.0, 0.0, 0.0, 0x1.695cd857fa8bdp-386, 0.0, 0x1.b858c31473ccep-143,
     0x1.2fd39b69735f3p-446, 0x1.07f948a3cf8bp-192, 0x1.cd6d94c0d03f6p-128,
     0x1.b87f51f058dffp-656, 0.0, 0x1.be7179a293f8ap-77, 0.0, 0x1.8cdcd885a59bfp-204,
     0.0, 0x1.80936dc9bbe9ep-300, 0.0, 0x1.0ed634a22270bp-94, 0x1.5a468c8f7a626p-936,
     0x1.a2432c4d4ed96p-504, 0x1.194152e1f84adp-687, 0.0, 0x1.846edea0978c7p-698,
     0x1.254bff9a2b596p-232, 0.0, 0.0, 0.0, 0x1.4723d92801fd1p-678,
     0x1.c06c21dc2a274p-397, 0.0, 0.0, 0x1.149c3d672fca2p-312, 0x1.9a0a095467e6bp-773,
     0x1.398ff2899c209p-20, 0x1.0c464aa3a6e97p-444, 0x1.b7ff91b6e66c8p-248, 0.0,
     0x1.7df085489b674p-834, 0.0, 0x1.9eacc1c856b01p-467, 0.0, 0x1.ee6a398ff6083p-539,
     0x1.e35ac4532e893p-492, 0x1.6c84f6377a2a2p-494, 0x1.d362fd95fe628p-219,
     0x1.de155875695p-193, 0.0, 0x1.75cc053ecba24p-627, 0.0, 0x1.15d3c69ca7357p-225,
     0x1.0c4def08b2273p-354, 0.0, 0x1.d18742b021b54p-607, 0.0, 0x1.f7c96cf5c5276p-511,
     0x1.cfdfc1d7bc8c9p-929, 0x1.a5c1d633bbd89p-482, 0x1.5910da8a33d61p-322,
     0x1.1d0ce61599152p-567, 0.0, 0.0, 0x1.b5751a5cdc7a4p-814, 0.0,
     0x1.5b0c8781e0b44p-493, 0x1.688f6808a26bfp-659, 0x1.8ede2b49ec2afp-155, 0.0,
     0x1.b52db043f963fp-165, 0x1.f1171da746e75p-92, 0x1.4776d73868548p-599, 0.0, 0.0,
     0.0, 0.0, 0x1.de99478fb6fe3p-213, 0x1.6d9753cb40e1ep-617, 0x1.fb2caa9aebe9dp-128,
     0.0, 0.0, 0x1.df3f1d2ca17dcp-769, 0x1.3e5f8f5aa0cbp-644, 0.0,
     0x1.59b3191460b5ap-53, 0x1.03ac7a14e055dp-623, 0.0, 0.0, 0x1.a18d96947d5a5p-570,
     0.0, 0x1.0f31e2d233e56p-563, 0.0, 0.0, 0.0, 0.0, 0x1.85e370fee1e38p-1021, 0.0,
     0.0, 0.0, 0x1.da803453bd39cp-121, 0.0, 0.0, 0.0, 0x1.392acf0cce569p-486,
     0x1.28ba8a113570fp-1002, 0x1.9740e1a49e446p-643, 0x1.63ff6644f882p-726, 0.0,
     0x1.583ea0a8aedb9p-181, 0.0, 0x1.2b975d4a77a06p-836, 0x1.bd927243831c2p-807, 0.0,
     0.0, 0.0, 0.0, 0x1.175e57fee0d9ap-670, 0x1.0b4f89b71cc15p-922,
     0x1.5e76c68e33c32p-322, 0x1.b65fb0c1dc30dp-969, 0x1.63858b7f8dbb1p-337, 0.0,
     0x1.976b4637cf112p-702, 0.0, 0x1.77fd021aed42p-739, 0x1.dc9d00d59fd22p-1018, 0.0,
     0.0, 0x1.77116b9a3f6d4p-51, 0x1.8e0aa2395483bp-770, 0.0, 0x1.e064101442851p-1019,
     0x1.b4abd183e4ce8p-876, 0x1.04062ddab4a79p-195, 0x1.2a442767837bap-940, 0.0, 0.0,
     0.0, 0.0, 0x1.bf9011e12135fp-913, 0.0, 0x1.42eac7cfb3031p-372,
     0x1.dd727bc1f3785p-165, 0x1.88ecc25f2307p-399, 0.0, 0.0, 0.0,
     0x1.db529d5c35e41p-576, 0.0, 0.0, 0.0, 0.0, 0x1.50df164950dcap-743, 0.0, 0.0,
     0x1.eef4ab072dc69p-169, 0.0, 0x1.c1cf58364e999p-728, 0.0, 0x1.71e021e5454e4p-401,
     0x1.f74c4f3760d3bp-446, 0.0, 0.0, 0.0, 0x1.6831ce2167ba9p-827,
     0x1.61a004457a81dp-383, 0.0, 0x1.e9f0c4c165353p-125, 0.0, 0.0, 0.0,
     0x1.b8af00c255502p-411, 0.0, 0x1.3167936c7c00dp-139, 0.0, 0x1.c63b483aca63cp-318,
     0x1.24823df8393f6p-445, 0x1.dc6ac95c4b14fp-473, 0x1.d9a47e71b2adbp-121,
     0x1.ae7be299f2f9cp-264, 0x1.905d50fc30ba9p-1004, 0x1.de88f9145bb64p-485, 0.0,
     0.0, 0.0, 0.0, 0x1.25e917596b1cdp-33, 0x1.694d7a3deb40ep-422, 0.0, 0.0, 0.0,
     0x1.26c11456930e6p-893, 0.0, 0x1.f5afebac23581p-367, 0x1.30f98fba1881bp-459, 0.0,
     0x1.b1cb1d2306a5cp-357, 0.0, 0x1.3c1a648471388p-549, 0x1.592a72c777b78p-810,
     0x1.cc128d2573228p-869, 0x1.735a4b04e132dp-891, 0.0, 0x1.4bfe99a4c5c18p-246, 0.0,
     0x1.866a4850c98dcp-66, 0x1.c4af685c6c216p-408, 0.0, 0.0, 0x1.bb6d750ade152p-746,
     0.0, 0.0, 0.0, 0x1.3871c84c77ea2p-825, 0.0, 0x1.05b777736e3efp-776, 0.0, 0.0,
     0x1.bb73a3a5749b1p-533, 0x1.0436b30569118p-749, 0x1.6b0e142fcedd8p-227,
     0x1.20d499a9679edp-76, 0x1.3431254cfce6p-86, 0x1.9db297973f9d5p-768,
     0x1.3d36b7c0ebd06p-812, 0.0, 0x1.046b690439aa1p-284, 0.0, 0x1.1307139b57c76p-534,
     0.0, 0x1.8ef19de65f24bp-879, 0.0, 0x1.ff97e03e4a56ep-858, 0.0,
     0x1.50a25af65553ep-200, 0x1.6d4ca93bef689p-649, 0x1.0d88c9397d45p-286,
     0x1.2b835613f249dp-11, 0.0, 0x1.8e9452af5fa17p-589, 0.0, 0x1.254e3300ea7aap-256,
     0.0, 0.0, 0x1.6a648891b057ep-122, 0x1.ab2695f66ebe4p-610, 0.0,
     0x1.4772120203abcp-833, 0.0, 0.0, 0x1.d970ca9ad857fp-250, 0.0,
     0x1.90af764ee0a5ep-557, 0x1.2650530249d44p-777, 0.0, 0x1.dab790abc630ap-527, 0.0,
     0x1.8a2f4286f2a6cp-451, 0.0, 0.0, 0.0, 0x1.bb96c0c1f3f45p-696,
     0x1.e5853df907426p-249, 0.0, 0x1.7221f019a292fp-745, 0.0, 0.0, 0.0,
     0x1.7eb1c40aec345p-930, 0.0, 0x1.62aa2201120dap-367, 0x1.e067f681ce9p-796,
     0x1.bed382739fd48p-115, 0.0, 0.0, 0x1.32607d4393c97p-284, 0.0,
     0x1.d07a046986042p-750, 0x1.9e12e27f37fb5p-555, 0.0, 0x1.e8f4db2edd376p-1002,
     0.0, 0x1.fdab418a01fa7p-859, 0.0, 0.0, 0.0, 0.0, 0x1.85ac57eceaf14p-526, 0.0,
     0x1.7eabb5495c6e3p-806, 0x1.e7d88c6305185p-208, 0.0, 0x1.969197484ffc2p-455,
     0x1.3f881933024afp-581, 0.0, 0x1.a4c507a10c5bfp-470, 0.0, 0.0, 0.0, 0.0,
     0x1.1a2ff4556fc23p-665, 0.0, 0x1.14f2f4bbcf56fp-943, 0.0, 0.0,
     0x1.e7dbb81f43444p-214, 0.0, 0x1.3748f68ac4127p-64, 0.0, 0.0, 0.0, 0.0,
     0x1.2c67f0e3969b5p-53, 0x1.8f2c3747ab2a6p-989, 0.0, 0x1.1441358b9419p-753,
     0x1.90b03db96ecfcp-908, 0x1.204728b74e50cp-504, 0x1.bbb22fdc4a7fap-514, 0.0, 0.0,
     0.0, 0.0, 0x1.bef24d0daca75p-251, 0.0, 0.0, 0.0, 0x1.9921e78ac1a11p-372,
     0x1.43073bb789e26p-364, 0.0, 0.0, 0x1.a6d8fb820f137p-972, 0x1.e956a54a42fc5p-336,
     0x1.3fe634eb9ca8ap-336, 0.0, 0.0, 0.0, 0x1.0a8dd21d98936p-220, 0.0, 0.0, 0.0,
     0x1.ceecb8cca22ecp-237, 0x1.5633f3713189fp-267, 0x1.948419f9bda82p-14, 0x1p0,
     0.0, 0.0, 0.0, 0x1.b8f1e5576658fp-616, 0x1.369df179cb152p-772, 0.0, 0.0,
     0x1.4f9482739e0a2p-582, 0.0, 0.0, 0.0, 0x1.e8a7a1d2ab75dp-501,
     0x1.1214751a6821ep-242, 0x1.51bb026021547p-309, 0.0, 0x1.1be5c693dc108p-467, 0.0,
     0.0, 0x1.81b4466e32ecbp-123, 0.0, 0x1.7b6199afd0433p-7, 0.0, 0.0, 0.0, 0.0,
     0x1.c013c307a1e2fp-945, 0.0, 0.0, 0x1.807fe6fd117d4p-850, 0.0,
     0x1.1c6dd2ec49ff6p-563, 0.0, 0x1.9760be698a2ecp-979, 0.0, 0x1.dee0919d7fb2dp-317,
     0.0, 0.0, 0.0, 0.0, 0x1.9343d1236caaep-12, 0x1.1ab9ac052cf88p-148,
     0x1.005f47137d35cp-505, 0x1.1bdea8fbed7ffp-573, 0x1.28c7ace242232p-972, 0.0, 0.0,
     0x1.fc9955e66bfaap-115, 0.0, 0x1.be0c4fa389d1dp-889, 0.0, 0.0, 0.0,
     0x1.62123c387c90bp-287, 0x1.acbf5fedec493p-492, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.85fb6e5341e29p-426, 0.0, 0x1.2f8f0fcafc6b8p-290, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.193df54a5590fp-750, 0x1.7dae5fb58ccf8p-710, 0x1.0e8d0a9aa7d2bp-405,
     0x1.c0382b2ae1c44p-973, 0x1.5bcdbb7c6fdd8p-163, 0x1.c13f444fa562ap-159, 0.0,
     0x1.cb4db0cdae88ap-651, 0.0, 0x1.649634e687782p-544, 0.0, 0x1.c55ff5bd642d8p-888,
     0.0, 0x1.c65467c76b0f1p-770, 0x1.dfe7d21b9a877p-468, 0.0, 0x1.cd0204f7f023dp-283,
     0.0, 0.0, 0.0, 0x1.b8dc650f2344fp-613, 0x1.a900801c98234p-421, 0.0,
     0x1.8deb22c00be0dp-779, 0x1.75d40cff5d189p-8, 0x1.c454d89eee12fp-449,
     0x1.2e6af0c61b447p-587, 0x1.3a63b655c796cp-931, 0x1.b4a22b4ffdc3dp-985, 0.0, 0.0,
     0.0, 0x1.fb65ad86ed962p-179, 0.0, 0x1.30ecd7de77daep-874, 0x1.d90f34aa00dbcp-424,
     0.0, 0x1.a7ba60eff96ap-232, 0x1.042784b78b7dcp-611, 0.0, 0x1.ddd0465997f47p-216,
     0x1.fda632d90cabbp-590, 0x1.da7470741e4a2p-887, 0x1.7b3bea62a89cap-847,
     0x1.621a512d338e9p-751, 0x1.82c17064cdc7ep-283, 0.0, 0x1.f39ba53248d7bp-399,
     0x1.6de7a85f24bf7p-503
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_acosd4_u35kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_acosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_acosd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
