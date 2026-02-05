/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atand1_u35purecfma.c --function \
 *     Sleef_finz_atand1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.2cc0920ce6463p-76, 0x1.6aa39c2011383p-339, 0.0, 0.0, 0.0, 0.0,
     0x1.32436c989ada5p-187, 0.0, 0.0, 0x1.a5d204a56363ep-847, 0.0, 0.0,
     0x1.541bfc0e1d35bp-247, 0.0, 0.0, 0x1.452a9eaf3472dp-556, 0.0, 0.0, 0.0, 0.0,
     0x1.92b6b20ad37adp-754, 0.0, 0x1.aff4af3944f95p-599, 0x1.70e52de8cabe3p-944, 0.0,
     0x1.76b6007b39207p-534, 0.0, 0.0, 0x1.cee148aa04bfcp-247, 0x1.1ffda7df5d6bbp-391,
     0.0, 0.0, 0x1.edeee5878a78p-726, 0.0, 0x1.e612c11ec37afp-814, 0.0, 0.0, 0.0, 0.0,
     0x1.b2913f925f9ccp-290, 0x1.158d1c5b01a15p-768, 0x1.a689f64e6f908p-477,
     0x1.bb3aef7e96bfep-222, 0.0, 0x1.21d7602e5e7cep-1022, 0.0,
     0x1.49427707b9c04p-931, 0.0, 0.0, 0.0, 0x1.40ac647d5d67fp-993, 0.0, 0.0,
     0x1.9f63c32bac027p-648, 0.0, 0.0, 0.0, 0.0, 0x1.71c9f56f442ap-203, 0.0,
     0x1.7b3b2c185d272p-476, 0.0, 0x1.5cdf6672766d3p-552, 0.0, 0.0,
     0x1.548e41b87691ep-325, 0.0, 0x1.60c952173ddb1p-540, 0.0, 0x1.b92e70cc00f3ap-324,
     0x1.46860b443d7e5p-392, 0x1.856fbbb46f159p-570, 0.0, 0.0, 0x1.01e5d3c47a0ccp-62,
     0x1.9efeb249a0013p-816, 0.0, 0x1.7e53a54a2fd4ap-651, 0x1.cb20db026536ep-417,
     0x1.28273e6a0c34p-59, 0x1.a8aa5e97eac6fp-541, 0.0, 0.0, 0x1.e3228a21e9242p-209,
     0.0, 0x1.11bfaf6c1908bp-973, 0x1.a6629a43b7404p-366, 0.0, 0.0,
     0x1.80c44a75742d8p-732, 0.0, 0x1.89f4c3307e1a3p-766, 0x1.21b23ea6731d8p-455,
     0x1.e094453664e96p-612, 0.0, 0x1.a02c087c4f981p-985, 0.0, 0.0,
     0x1.08a8c7ed5b452p-941, 0x1.4fa9ad5faf0ebp-267, 0.0, 0x1.3e6ae03a66603p-269,
     0x1.453a355b040c9p-547, 0x1.0dbaa6c13e4ecp-759, 0x1.bcdf60fd05b2fp-356, 0.0,
     0x1.db209c2c8c35bp-379, 0x1.c065c248ad58dp-896, 0.0, 0x1.8f115be01f081p-189, 0.0,
     0x1.df9a93fa0b9d5p-270, 0.0, 0.0, 0x1.38607ae786cbdp-821, 0.0,
     0x1.830b45cc60b6ap-541, 0x1.1dab7b1d97e7dp-799, 0x1.aa2538c2948d6p-983, 0.0,
     0x1.0f98d2d7085bp-388, 0x1.189ab2937a72cp-575, 0.0, 0x1.10719e3545afbp-613,
     0x1.35417eced0b66p-674, 0.0, 0.0, 0x1.a6188fd440d01p-204, 0.0, 0.0,
     0x1.d8c5006214144p-588, 0x1.93637554ad27p-553, 0.0, 0x1.93ffce14b87ccp-795,
     0x1.a8b254f7d19ep-390, 0x1.bdd8850c4aa4cp-902, 0.0, 0.0, 0.0,
     0x1.9f3133fdedd38p-521, 0x1.fc6ac16e98402p-937, 0x1.bbd42ff1429f9p-981, 0.0,
     0x1.d8ce635ad680bp-403, 0.0, 0x1.a59b8fa4424afp-559, 0x1.ddd76675cc09ep-633,
     0x1.70e2bc5a0f9f7p-450, 0x1.91b310c40a78bp-745, 0x1.311bfdef409cfp-252, 0.0, 0.0,
     0x1.a4de40268ac43p-564, 0.0, 0.0, 0x1.f8669b8df52cep-446, 0x1.d8c9f836015a4p-389,
     0.0, 0.0, 0x1.26acd1e8a760bp-810, 0.0, 0x1.2afd64b717372p-284, 0.0, 0.0,
     0x1.c18b9e4b3d684p-198, 0x1.923f2d7e0dfbap-961, 0.0, 0x1.ed2c7e88e92e2p-766,
     0x1.08074cf324a94p-254, 0.0, 0x1.7b4d619f8085ep-61, 0x1.9d50d2df25b33p-862, 0.0,
     0x1.d5c0b36a4e0fcp-543, 0x1.c2491021074c5p-389, 0x1.7c17842adce8cp-579,
     0x1.acb74a2798c4ep-134, 0.0, 0x1.6dd653089b4bdp-193, 0.0, 0x1.97b9f0dfae4c3p-780,
     0x1.0f6fae7abbd68p-517, 0.0, 0x1.fb844e0a853cap-645, 0x1.d9801ab34c2bep-297, 0.0,
     0x1.6abd232bb178ep-895, 0x1.051055eddecaep-676, 0.0, 0.0, 0.0,
     0x1.775a522071effp-36, 0.0, 0x1.4747bbc8afe06p-652, 0x1.d2b42d27633fcp-7,
     0x1.004c2934b5196p-861, 0x1.a6ed9955d837fp-675, 0.0, 0x1.83ad72a6f4acp-878, 0.0,
     0.0, 0x1.779f095907c1ap-614, 0x1.976e31361ac38p-11, 0x1.78bd21801059ap-322,
     0x1.cd02aaa97128ap-806, 0x1.e75ea542c987p-833, 0.0, 0.0, 0.0, 0.0,
     0x1.2cf822ccedbeap-213, 0.0, 0.0, 0x1.7ad35bfde6fedp-629, 0x1.ced02ade7f957p-26,
     0.0, 0x1.f6977ac39fe36p-135, 0.0, 0x1.88bb24283297ap-71, 0.0, 0.0, 0.0,
     0x1.aa0f167232512p-722, 0x1.f6117bea917a4p-395, 0.0, 0x1.2bb7c38aafebdp-821,
     0x1.41195533e9dcdp-160, 0x1.a04449d78459p-95, 0.0, 0.0, 0x1.779bbab524844p-217,
     0x1.77430e2758163p-419, 0x1.f4f6582eb4634p-492, 0.0, 0x1.92edc1b7f8ddcp-818,
     0x1.8f1cdd0cf1b3fp-947, 0x1.973132d4e6cc7p-491, 0.0, 0x1.bb570628472a4p-841, 0.0,
     0.0, 0x1.a92629af2dc89p-588, 0x1.61b10c71d8075p-221, 0x1.87f27c6bdaf3bp-269, 0.0,
     0x1.44f2f737b6845p-820, 0.0, 0x1.ad89ecf4dc8ccp-408, 0x1.7b7dedebbeebbp-190, 0.0,
     0x1.0cc562101fc8fp-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5203f0301a311p-653,
     0.0, 0x1.736d89925d342p-902, 0.0, 0x1.6f5361a6efe33p-158, 0x1.a1b98dd5bc8b9p-440,
     0.0, 0x1.beb41759be781p-763, 0.0, 0.0, 0x1.02a118ec91f45p-979,
     0x1.58c0b0387fd96p-216, 0x1.b68fb423377c1p-197, 0x1.76620fd2a0973p-10,
     0x1.797d067b396b5p-279, 0.0, 0x1.473a130d42786p-819, 0x1.9e5273925aecfp-447, 0.0,
     0x1.c63add052e231p-146, 0x1.d20f0f6f1b646p-82, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0221ba0001e98p-555, 0.0, 0x1.b8c39bf7ee3f1p-642, 0.0, 0.0, 0.0, 0.0,
     0x1.dd29cacdaa563p-522, 0.0, 0x1.a7646edc9a0d1p-138, 0x1.37f84dcc4a2adp-265,
     0x1.5fafee029374fp-309, 0x1.ac2dd24f42353p-848, 0x1.a4ff77703e22dp-740, 0.0,
     0x1.1b0bb19560a5bp-498, 0x1.1fdde05b4b5f9p-516, 0.0, 0.0, 0x1.114a78ed28798p-814,
     0x1.dab24dd3ec923p-346, 0.0, 0x1.68fab483f94a8p-602, 0x1.be19fa4121c6ap-763, 0.0,
     0x1.78b4744732feap-163, 0.0, 0.0, 0.0, 0x1.6d43744ce5275p-650,
     0x1.9403869c7b256p-771, 0x1.76bde19fc083dp-521, 0.0, 0.0, 0x1.3fcadfd9b331fp-900,
     0.0, 0.0, 0x1.d1d88fd2f7898p-439, 0x1.9ebd01c6cfc78p-901, 0x1.3992445eabf0fp-901,
     0.0, 0x1.dfa9a7eb3d943p-304, 0.0, 0x1.7907ad1cea5c5p-242, 0.0, 0.0, 0.0,
     0x1.e4d224cb56bb4p-773, 0.0, 0x1.1c4510de8aba2p-107, 0x1.4ed74a5831e3ep-416,
     0x1.1b53735eedff8p-914, 0x1.f951ddf323119p-820, 0x1.179da30e5af54p-217,
     0x1.36dad91107d8p-635, 0x1.a3819e829b0f4p-723, 0x1.327aa66d4d419p-76,
     0x1.65af1daec3ec8p-1000, 0x1.64a812141a25fp-886, 0.0, 0.0,
     0x1.9605c02b9b353p-866, 0.0, 0x1.4f6415fbab309p-1002, 0x1.f722b6be3715cp-143,
     0.0, 0.0, 0.0, 0x1.ad46932deae48p-301, 0.0, 0x1.7679eb7c35d76p-247, 0.0, 0.0,
     0.0, 0x1.16736c9ebf003p-668, 0.0, 0x1.7dc77fb42aa6bp-397, 0.0,
     0x1.5fa9932cb14eap-37, 0x1.50f060b82e297p-882, 0.0, 0.0, 0x1.0ee41ad065d7p-641,
     0.0, 0x1.cfab0bd55086ap-416, 0.0, 0x1.07a8d536b899cp-36, 0.0, 0.0, 0.0, 0.0,
     0x1.258e43d5b431ap-963, 0x1.a7f5693945dap-549, 0.0, 0x1.cc6c83437651ep-146,
     0x1.80c7b0c989dfcp-671, 0.0, 0x1.d3900e5ae579fp-830, 0.0, 0x1.5c8896aff1838p-320,
     0.0, 0x1.4bca8150ce3b9p-314, 0x1.51e04553f051bp-559, 0x1.27b4c18db5bbdp-465,
     0x1.47602d34cfe3p-147, 0.0, 0.0, 0.0, 0x1.1960f30bfc375p-685,
     0x1.e0c6f1ee720abp-587, 0.0, 0.0, 0x1.b471d8b0d373cp-102, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b232a9a4db85p-970, 0x1.8e8da39cbd5a4p-208, 0x1.65c4046cae3edp-98,
     0x1.202d4525263c5p-889, 0.0, 0x1.2ae70cfccd8a2p-533, 0x1.9c9ec03a9c1bp-660, 0.0,
     0x1.3482f0f7140f9p-290, 0.0, 0x1.d207944015ec3p-1004, 0.0, 0x1.217bbf5376377p-55,
     0.0, 0.0, 0.0, 0.0, 0x1.208da97262539p-229, 0.0, 0.0, 0x1.814f5f5d4cf1bp-675,
     0.0, 0x1.59f69c252ab09p-669, 0x1.cf3fadd3de692p-246, 0x1.eb43cfa16d532p-144, 0.0,
     0x1.45fe7898c454fp-63, 0x1.95d7053745c0ep-643, 0.0, 0x1.d7903724ede93p-850,
     0x1.1c9908763607fp-687, 0.0, 0.0, 0x1.9913fa198288ep-947, 0x1.c145b5ea85694p-116,
     0.0, 0.0, 0.0, 0x1.f7a919c5e25a3p-937, 0x1.61ad67ba0d5fap-908, 0.0,
     0x1.fcc2e6c918c64p-800, 0x1.e96bb6323951bp-383, 0.0, 0x1.00298f2a212c2p-699, 0.0,
     0x1.a2e54d0744fdp-933, 0x1.643c15b880cbbp-641, 0x1.95fb9fda2c304p-701,
     0x1.0ecb7902909dp-372, 0x1.e30517502824dp-1008, 0.0, 0x1.521f6c241c9f8p-611,
     0x1.1337f6e5aaa59p-147, 0.0, 0.0, 0x1.a54cc6652d74fp-657, 0.0,
     0x1.ab682bbdadbf5p-298, 0x1.1933b2ff06327p-419, 0x1.a68ef18dba6f8p-114, 0.0, 0.0,
     0.0, 0x1.70810834f75fcp-624, 0.0, 0.0, 0x1.6362775ede997p-590, 0.0,
     0x1.2a76701641009p-529, 0.0, 0.0, 0.0, 0.0, 0x1.4e1e7f993e3eep-913, 0.0,
     0x1.24d61bf696fcp-975, 0.0, 0x1.b24b8adcac02cp-123, 0.0, 0.0, 0.0,
     0x1.0c43f312532a1p-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47072b407977ap-441, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.95fb90ef4fa68p-550, 0.0, 0x1.ca5b54096f9e9p-977, 0.0,
     0.0, 0x1.4f5fdfe664efap-528, 0x1.6c91359bc2715p-897, 0.0, 0x1.e57920b541c5fp-261,
     0x1.6028aaf9f62fep-174, 0.0, 0x1.8be0b1ce0c7bap-465, 0.0, 0.0,
     0x1.68476273b1569p-411, 0.0, 0.0, 0x1.963ea1bc4f302p-307, 0x1.613d0915d7a68p-611,
     0.0, 0x1.f328875ae0caep-25, 0.0, 0x1.40de26143ca3bp-253, 0x1.ab9c183c97439p-776,
     0x1.4eb029258b85fp-389, 0x1.b2d20d3c968bap-968, 0.0, 0.0, 0x1.a696f77d35f4bp-527,
     0.0, 0.0, 0.0, 0.0, 0x1.06d2a42c0b3c1p-487, 0x1.07a98c3b1a0f1p-776,
     0x1.53c587bc3eaf6p-422, 0x1.86aaec2b01dc5p-493, 0.0, 0.0,
     0x1.12ce5ea91dc58p-1009, 0.0, 0.0, 0x1.d369f2a520b29p-595, 0x1.1f216c3b662ep-183,
     0.0, 0x1.a874a9d1165b1p-88, 0.0, 0x1.ab3c5c4b30ce3p-562, 0.0,
     0x1.b5faa2053c563p-273, 0x1.29b081056793ep-395, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2d40ba487e922p-810, 0x1.8c8ede6c33c59p-471, 0x1.60ca6c1c9c3a5p-336,
     0x1.e68a7e9e97bf6p-86, 0.0, 0x1.b725fca0b595dp-592, 0x1.fa35cccdac4e6p-416,
     0x1.6e384acb97218p-106, 0.0, 0.0, 0.0, 0.0, 0x1.4434c561a26ecp-7, 0.0, 0.0,
     0x1.078a3003dfb2p-345, 0.0, 0.0, 0x1.2f8842d5f4fa3p-81, 0x1.74532d762db8dp-748,
     0.0, 0.0, 0.0, 0x1.4ba49e425db9fp-288, 0.0, 0.0, 0x1.f76cd783aa924p-185,
     0x1.eb7944e104311p-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d994e9f9f1b58p-347, 0.0,
     0x1.f2d086c051eacp-557, 0.0, 0.0, 0.0, 0x1.325148dd0f516p-112, 0.0,
     0x1.fe530143707b6p-357, 0.0, 0.0, 0.0, 0x1.84a797e85a05cp-499,
     0x1.6fd4cb242e731p-215, 0.0, 0x1.c11bd27605c0bp-182, 0x1.17a11abde1924p-808, 0.0,
     0x1.7425e4f4f486p-141, 0x1.8cfd2cab020f4p-147, 0x1.0b5ccc4370abfp-427, 0.0,
     0x1.c319432991ba8p-286, 0.0, 0x1.df79b2f336779p-1004, 0x1.7fc507c91f748p-940,
     0.0, 0.0, 0x1.7f6a9e15a3e26p-975, 0x1.2ab2c1345417fp-690, 0x1.3d6d2c1e2ef4dp-836,
     0.0, 0.0, 0.0, 0x1.e2982aaf5ce75p-649, 0.0, 0.0, 0.0, 0x1.9b94f3614ca1cp-467,
     0x1.e7eb93f86b317p-285, 0.0, 0.0, 0x1.3976db2cdf657p-309, 0.0,
     0x1.6469c2064b48dp-139, 0.0, 0x1.c9310b338d235p-160, 0x1.063d00bb9816p-383,
     0x1.9e4be117f308p-14, 0.0, 0x1.888ddacc187bfp-838, 0x1.b49fe816131ep-963,
     0x1.fa90f7a680afp-621, 0.0, 0x1.0fc3882f6a0a3p-873, 0x1.a4c3821c8a355p-864,
     0x1.e12ef080655abp-613, 0x1.0b8bde8ef1c54p-369, 0.0, 0x1.ee1cc7ee57c4bp-841,
     0x1.5e1d38e8fc1aap-544, 0.0, 0x1.c4d7cafb3bdd5p-334, 0.0, 0x1.f619979164336p-501,
     0.0, 0x1.bddd59b494224p-69, 0x1.58f012d8dcd29p-735, 0.0, 0.0,
     0x1.a71610ebafd9dp-491, 0x1.386ad0d47f64fp-295, 0.0, 0.0, 0.0,
     0x1.0d331ae51be5ep-34, 0x1.7f58875fb4a99p-686, 0x1.4e8c12e093869p-33,
     0x1.5151dd79b3693p-990, 0.0, 0x1.d54f5de0d7a71p-724, 0.0, 0x1.bfdbd62f8da4cp-623,
     0.0, 0.0, 0.0, 0.0, 0x1.a978336c913f7p-1014, 0x1.c03692d7ec2bbp-111, 0.0,
     0x1.793d3790b08d5p-817, 0.0, 0.0, 0.0, 0x1.0c1e36ac5c43ap-885,
     0x1.73bc9914ccb7fp-473, 0.0, 0x1.ee425f9685458p-895, 0.0, 0x1.19ea5dff90017p-250,
     0x1.b2c4f7ac8d35dp-788, 0.0, 0.0, 0.0, 0x1.6de9d1237dda4p-306, 0.0,
     0x1.ea1859f7f6742p-897, 0x1.662c65b89307cp-552, 0.0, 0.0, 0x1.02e8775bc46fbp-116,
     0.0, 0.0, 0x1.492d4786f4f06p-594, 0x1.141a0ccd9ecc1p-286, 0.0, 0.0, 0.0,
     0x1.c5df1ad19869bp-583, 0.0, 0.0, 0.0, 0x1.5077aca38531dp-977,
     0x1.8117d0885460dp-940, 0.0, 0.0, 0.0, 0.0, 0x1.b47f0edd40caap-597,
     0x1.d0af31fc281d4p-987, 0x1.3508f8c82948bp-381, 0x1.b1d8fb1f17856p-186,
     0x1.890b160c0f95p-206, 0x1.4c38ea2834ffep-946, 0.0, 0x1.232c933251938p-611, 0.0,
     0x1.4480f30595593p-441, 0.0, 0.0, 0x1.c555ed2b5496ep-621, 0x1.f30db85a4e73p-691,
     0.0, 0x1.95e43abcc084ap-359, 0x1.a8fd6ba8fec12p-364, 0x1.de7fb3454e2dep-624, 0.0,
     0x1.04caa3d79107p-61, 0.0, 0.0, 0x1.e456f02fb088p-835, 0x1.1629b9a478cfap-695,
     0x1.5cabb78e49e01p-837, 0x1.3927569e7ab61p-474, 0.0, 0x1.6956122850636p-52,
     0x1.0edb69ff7b97cp-50, 0.0, 0x1.cbf673f6a7ff2p-518, 0x1.fb219e2443c2fp-174, 0.0,
     0x1.da0c4c544dfe7p-46, 0x1.7844ea4a2c1f9p-160, 0x1.269a90adf5079p-603,
     0x1.81643bf191718p-516, 0.0, 0x1.412401c40438cp-440, 0x1.072b0b306692p-810,
     0x1.58ec68431e66ep-288, 0x1.7b23e8fbdb2f5p-191, 0.0, 0.0, 0x1.dec70ca3df102p-154,
     0x1.c94ba40759019p-654, 0.0, 0x1.21bd15a0d954dp-312, 0.0, 0x1.0a80817829f86p-249,
     0x1.7d36d146f13c4p-137, 0.0, 0.0, 0.0, 0x1.34843fa919fb4p-996, 0.0,
     0x1.6d0cdb12d45a1p-744, 0x1.6aee9cc455a02p-580, 0.0, 0x1.b8c6a6a37d225p-563, 0.0,
     0x1.4fee920276766p-738, 0x1.5179cce7ea7f4p-307, 0x1.ab1beb2effe2p-568,
     0x1.57c396110a3abp-930, 0x1.fb9db9d3b910ep-273, 0x1.224a487434234p-181, 0.0,
     0x1.189a71ec33b34p-963, 0x1.9ef845a4e5102p-65, 0.0, 0.0, 0.0,
     0x1.3c70609f75e7ap-589, 0x1.d16543b61b002p-443, 0.0, 0x1.b8a02c9f95cd9p-878, 0.0,
     0x1.a849ec31829a6p-908, 0.0, 0x1.b19f3b5ff52b5p-573, 0.0, 0x1.4abef121d7547p-18,
     0x1.3f7c4920378fep-341, 0.0, 0.0, 0x1.01eafdd96480fp-684, 0x1.d08f359143648p-444,
     0x1.43b297fd419d9p-877, 0x1.e8a008e550fd7p-51, 0x1.e4d69d3b26df9p-718, 0.0, 0.0,
     0x1.f5ff1d75cb1d5p-666, 0.0, 0x1.2e707d5e14a99p-547, 0.0, 0x1.1277edb8b8577p-983,
     0x1.579db541d8a5bp-300, 0.0, 0.0, 0.0, 0.0, 0x1.f813a10685325p-63,
     0x1.51cb9b58c85dp-589, 0x1.ca0d21f8aa3dp-970, 0x1.3f62874724269p-970, 0.0, 0.0,
     0.0, 0x1.2c7052ce6c5e9p-837, 0x1.bf3783e2ce174p-748, 0.0, 0x1.a99bbe91a9963p-513,
     0x1.ff794b9f948f2p-997, 0x1.cf0fd1f21262dp-879, 0x1.3911f8bac0883p-83,
     0x1.cae6ce0b9d876p-830, 0x1.77491b86de0efp-120, 0x1.6b8da2882d179p-437, 0.0, 0.0,
     0x1.b3d736c7bf37cp-1009, 0.0, 0x1.1b7f983c89f92p-236, 0x1.b846e9f76864p-313, 0.0,
     0.0, 0x1.f70fcacd876afp-758, 0.0, 0.0, 0x1.8487cba9f200ap-986, 0.0,
     0x1.a9a776384f627p-154, 0x1.62d49db7ba58cp-568, 0x1.d95823b611971p-764,
     0x1.186176ad4be0fp-42, 0x1.891a86677ab46p-141, 0x1.7221a00522c56p-240,
     0x1.cec2458e97e95p-196, 0.0, 0x1.0b04cc9527eedp-893, 0.0, 0.0,
     0x1.6ec5c73ddccb8p-252, 0x1.0f19e4ca9bfdep-446, 0x1.b3b22baa4bd75p-643, 0.0, 0.0,
     0x1.ab2558e3d21f2p-965, 0.0, 0.0, 0x1.5b4c10a7acbd9p-890, 0.0, 0.0, 0.0, 0.0,
     0x1.8b3315884d213p-285, 0x1.07b022514329ap-638, 0x1.354df9831f5dep-806,
     0x1.056a84b304e0bp-502, 0.0, 0x1.fdc400e967d4bp-613, 0.0, 0x1.3d088020d728p-982,
     0.0, 0x1.3d885e5359682p-514, 0.0, 0x1.a87ea3148bcbbp-118, 0x1.887d6df753c91p-235,
     0.0, 0x1.85a5093413e0bp-532, 0.0, 0x1.8a7861ba11fd8p-852, 0x1.d1839feaa28e9p-725,
     0.0, 0x1.e6e6839798df8p-21, 0.0, 0x1.d438c0eca0b1p-407, 0.0, 0.0,
     0x1.3e1e588e6f297p-281, 0x1.c79a27f1d76f5p-231, 0x1.21c1b7de3a439p-743,
     0x1.8b4dd3620846ap-359, 0.0, 0x1.f347e65eac7f3p-509, 0.0, 0.0,
     0x1.c135b60f8210dp-387, 0.0, 0.0, 0x1.f6bc4098524dep-826, 0x1.04753efb1b6a3p-687,
     0.0, 0x1.4d965e8ffc2efp-46, 0x1.6e65b675af01fp-913, 0x1.ae83cb34b85a6p-337,
     0x1.463a3f2550129p-272, 0.0, 0.0, 0.0, 0.0, 0x1.c3f0d53b2fdd5p-695, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.42e3bc6fb7718p-238, 0x1.db3d0fa0a506p-148,
     0x1.94695ae320358p-1016, 0.0, 0x1.32c20ce3fb205p-233, 0x1.d15142a5443ebp-748,
     0x1.2b1c458a8cb32p-678, 0.0, 0.0, 0x1.643abb5d0552ep-705, 0x1.e56cc7cd2f8ep-637,
     0x1.1c88f5166464dp-160, 0x1.6b4b68278d227p-532, 0x1.7946e546e47b9p-449,
     0x1.35e959893af93p-804, 0x1.a2e1d773bd5aep-986, 0x1.8dfd37638b0f7p-425,
     0x1.6c49de101560bp-84, 0x1.5ad65db154f84p-810, 0.0, 0x1.1a78c951abbe2p-231, 0.0,
     0x1.dd1799c103b7ap-796, 0x1.a092728fe452ep-829, 0x1.1ecd5daa59ff7p-743, 0.0, 0.0,
     0.0, 0x1.3385e0ca8ef56p-328, 0x1.97d644155fe7bp-561, 0x1.dd848090818cfp-79,
     0x1.ad655bf9af564p-812, 0x1.d2f44c0377f8ap-416, 0.0, 0x1.c7270807a598cp-136,
     0x1.6404e74eb841ep-151, 0.0, 0x1.7bbfbc518c68p-856, 0.0, 0x1.a56b97f575ae5p-575,
     0x1.7c63c3f5f5521p-479, 0x1.3f0385f2bf1f5p-974, 0.0, 0.0, 0.0,
     0x1.3397fd90bb39cp-853, 0.0, 0.0, 0.0, 0x1.408ecbf6346c4p-899, 0.0,
     0x1.46d23340bda9cp-366, 0x1.64e0447bfb8ebp-557, 0x1.920b6421d968dp-185,
     0x1.1c94f1ff76358p-759, 0.0, 0.0, 0x1.8dcbc73192e3cp-634,
     0x1.64f0d442a4411p-1021, 0x1.ada1ecbce2049p-639, 0x1.691874e9fc0b9p-597, 0.0,
     0x1.9f3fb5a083a36p-919, 0x1.c655a56813017p-99, 0x1.95fa1824dc66ap-962,
     0x1.410e3eced0535p-752, 0.0, 0.0, 0x1.1c10bf0ba7522p-803, 0x1.c7c4b93793b29p-630,
     0x1.4d05f4045c90cp-806
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
            tmp1 = Sleef_finz_atand1_u35purecfma(tmp0);
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
    printf("Sleef_finz_atand1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atand1_u35purecfma bench acc %la\n", global_bench_acc);
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
