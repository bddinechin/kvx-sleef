/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand1_u10purecfma.c --function Sleef_tand1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.c058148bd38afp-959, 0.0, 0x1.99ceb190b1345p-797, 0x1.af0291153802dp-617,
     0.0, 0.0, 0x1.348d650e63bdbp-619, 0.0, 0x1.eb84bcec30189p-565,
     0x1.e6efbb8af127dp-17, 0.0, 0.0, 0.0, 0x1.2c51bfd711633p-172,
     0x1.9a4ab1d3abbdep-70, 0x1.31da01491026ap-457, 0x1.23ad50258a3cp-632, 0.0, 0.0,
     0x1.430a35db6b3a5p-551, 0x1.9ab9ebf66c5bfp-629, 0.0, 0.0, 0x1.875a92b0688dep-157,
     0x1.f0173ba38e93dp-278, 0x1.e504f807a37b4p-959, 0x1.69a7a40825558p-312,
     0x1.69eba365fac4fp-84, 0x1.c19b2528cc452p-851, 0.0, 0.0, 0.0,
     0x1.f12c989c5fdfp-383, 0x1.e5a0b6a5a8162p-85, 0.0, 0x1.7ca3ff627cc6ep-127,
     0x1.48b218ed4d58ap-473, 0x1.f2641a8819ea4p-58, 0.0, 0x1.78c8efa5b68fdp-64,
     0x1.30ca6ebc6b335p-439, 0x1.b756e75fe40cep-570, 0.0, 0x1.5933bfc2e1848p-846, 0.0,
     0x1.106233c99dcc2p-255, 0x1.da134c6309ed7p-511, 0.0, 0x1.e5b2fffc3dde2p-227,
     0x1.eeb970c16edb2p-481, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ec556cb02afc5p-973, 0x1.97d83eba7271cp-1019, 0x1.27fcee01510cep-407, 0.0,
     0x1.e45e003deba7ep-332, 0x1.b3b8fbeb4253p-810, 0x1.e2470f56dfbe5p-701, 0.0,
     0x1.5529b79a09a76p-891, 0x1.e3a718de0a0dp-628, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bdf25ef84403ap-585, 0.0, 0x1.c958196608499p-112, 0.0, 0x1.9efa5fe70697cp-331,
     0x1.498ccf5ff486fp-787, 0x1.a4867e8ae0397p-445, 0.0, 0.0, 0x1.2f46153e41621p-452,
     0x1.446669f1cd4a8p-865, 0x1.0de4ae9f4d78dp-103, 0.0, 0x1.e9ab133d9ca63p-128,
     0x1.90eb2a3e03cbap-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7a4c711ab75b8p-966, 0.0,
     0x1.0f614d329f216p-37, 0x1.4839919b12afap-267, 0.0, 0.0, 0.0,
     0x1.e584e942e961ap-731, 0x1.81f11e4755ecep-952, 0x1.5efe2e16edb52p-600, 0.0,
     0x1.bf49d22ea240ap-680, 0.0, 0x1.682deb5239a5ap-572, 0.0, 0.0,
     0x1.2fee799a748f7p-98, 0x1.6259cbe7bd1f8p-238, 0.0, 0x1.bab748feeeac7p-746,
     0x1.4b9c9015dc4b9p-117, 0.0, 0.0, 0.0, 0.0, 0x1.90be89e3442e7p-701, 0.0, 0.0,
     0.0, 0x1.4dbf6362bccc8p-2, 0x1.4e4ad199e086ap-978, 0.0, 0.0, 0.0, 0.0,
     0x1.a868cc5e067efp-366, 0.0, 0x1.eff1bdb9cce75p-268, 0x1.d11d2d8b18108p-549, 0.0,
     0x1.4494c8dec1775p-517, 0.0, 0.0, 0x1.faf6183fd692p-496, 0.0, 0.0,
     0x1.9284243d73dafp-781, 0x1.21dde816fb3afp-755, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e441d7313f22p-730, 0x1.43b74205bae75p-711, 0x1.616cad3469d1cp-946,
     0x1.4ca26e45b3501p-957, 0x1.f3b3b03d02258p-859, 0.0, 0.0, 0.0,
     0x1.3e8693336a553p-400, 0x1.649f310b6bdc3p-238, 0x1.e97f917fceb8bp-870, 0.0, 0.0,
     0x1.40d820002eaeap-481, 0x1.23ba57e429288p-342, 0x1.d5cb4fcdcd70dp-162, 0.0, 0.0,
     0x1.8682a611712b4p-925, 0x1.b164782016c04p-101, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1c63503fd37fp-327, 0x1.a9c54f2cc1db1p-916, 0.0, 0x1.c421b1a821a0cp-798,
     0x1.d2d22158894fap-227, 0x1.cd7716b119df2p-710, 0.0, 0x1.639bdb0c71094p-834, 0.0,
     0.0, 0.0, 0x1.98dfcbe948d1cp-857, 0.0, 0.0, 0x1.aa711de3f2566p-742, 0.0,
     0x1.3c2be3cdfcf45p-337, 0.0, 0x1.1262d24e61d3p-370, 0x1.ab38f55351826p-57, 0.0,
     0x1.23b7b2ccc144cp-348, 0.0, 0x1.621a1eed8901fp-253, 0.0, 0.0, 0.0,
     0x1.b7f0b09305c9cp-912, 0x1.e2c56d3a6f093p-712, 0.0, 0.0, 0.0,
     0x1.23de9e71548c1p-815, 0.0, 0x1.c927e40475415p-562, 0.0, 0.0,
     0x1.91f3ac98a0889p-637, 0.0, 0.0, 0x1.f62e4ff99351ep-321, 0.0,
     0x1.f392f77bfa5e4p-202, 0.0, 0.0, 0x1.52a84ce8320e6p-516, 0x1.e8e7be66458fap-807,
     0.0, 0x1.c1f39c08d869dp-869, 0.0, 0.0, 0x1.d8be9acf1e043p-760,
     0x1.d0c66a62ead33p-497, 0x1.cc7bbefc8231fp-904, 0x1.1fe857112ca09p-758, 0.0, 0.0,
     0x1.7aa8fd685b8e5p-467, 0x1.3257ddae60f9ep-5, 0.0, 0.0, 0x1.ff886bb204a52p-751,
     0.0, 0x1.9beeb23c85801p-286, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc5fabd99fd35p-602, 0.0, 0.0, 0.0, 0x1.abb7741477d45p-353, 0.0, 0.0,
     0x1.00e8e26c45513p-621, 0x1.a3a51a96bf5c6p-746, 0x1.e18adf0185696p-603,
     0x1.92348bf6079dap-908, 0.0, 0x1.6ae044151daa4p-366, 0x1.78389ef3c5872p-492, 0.0,
     0.0, 0x1.292171162ddedp-28, 0x1.9c8308865129bp-58, 0.0, 0x1.1f9a079e08061p-897,
     0x1.9442963a0dcdep-159, 0x1.a5e3ad5e82ce2p-89, 0.0, 0x1.81354a8e2453bp-277, 0.0,
     0.0, 0x1.4370fdf3ab2eep-245, 0.0, 0x1.2fea47c6d453ep-853, 0.0, 0.0,
     0x1.b5bfdec773399p-946, 0x1.45a87a7c53466p-230, 0.0, 0.0, 0x1.221ee95830214p-848,
     0x1.35792432c72f9p-1017, 0.0, 0.0, 0x1.a2a7a59c60503p-828,
     0x1.ad8a54ec82a89p-946, 0.0, 0.0, 0.0, 0x1.a0fcd3c139265p-310, 0.0, 0.0, 0.0,
     0.0, 0x1.8f373b65d7399p-495, 0x1.fb48e2a24bd03p-793, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1cf58f6333758p-316, 0x1.6e2e07e97baffp-770, 0x1.804c6f3cf90dep-745,
     0x1.ebc87e2c8517p-818, 0x1.fd779f2912fd8p-864, 0.0, 0.0, 0x1.11f392f4ac1f8p-236,
     0x1.b689151a1c0d8p-156, 0.0, 0x1.85058d7373a31p-339, 0.0, 0x1.1843a3bd438bep-361,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c0f061ff3b2dp-856, 0x1.693eea848f2bep-38,
     0x1.45fc5d041a2adp-636, 0.0, 0x1.07d070252f99dp-997, 0.0, 0.0, 0.0,
     0x1.5201d424a15d8p-1012, 0x1.043aaf1fb0deep-895, 0x1.62f60733332fbp-312, 0.0,
     0.0, 0.0, 0x1.0dde4f9d395c9p-262, 0x1.761a1c2edf84fp-539, 0x1.a6ff6110068d3p-347,
     0.0, 0.0, 0x1.cdc421e37b95cp-447, 0.0, 0.0, 0.0, 0x1.22dd576fd3c79p-342, 0.0,
     0x1.90120d3a49101p-377, 0x1.a6cdd5cf1f043p-252, 0x1.bc6c9dc1ac8d6p-316, 0.0,
     0x1.8354c692589aep-489, 0x1.1f4a80170852cp-959, 0x1.8792d9f736a3fp-597, 0.0, 0.0,
     0x1.d96533377510ep-442, 0x1.747da935e9ea4p-139, 0x1.1f419d8dda177p-122, 0.0, 0.0,
     0.0, 0.0, 0x1.a309cdc7771e9p-971, 0x1.40141826067e2p-542, 0x1.ff492ad30589ep-327,
     0x1.7a0c842395068p-287, 0x1.6240c5a31529ap-423, 0.0, 0x1.5db49901ddc31p-991,
     0x1.9d11744af8fafp-196, 0x1.d85173d284dc6p-874, 0x1.0918b891b002fp-65, 0.0, 0.0,
     0.0, 0x1.ab3f0efdc6917p-640, 0x1.16643b1623746p-298, 0.0, 0x1.b20fddda2e406p-282,
     0.0, 0x1.a63a6c2b74615p-383, 0x1.aecbc32fa960cp-154, 0x1.625d7ca53ddp-918, 0.0,
     0x1.d80d0a778b738p-220, 0.0, 0.0, 0.0, 0.0, 0x1.e62dee0b97ea2p-330, 0.0,
     0x1.1e72445a7fa08p-648, 0.0, 0x1.506a9a78d63c8p-224, 0x1.03267cd91ca08p-377,
     0x1.1b6cc3ba20d92p-50, 0.0, 0.0, 0x1.1358eb3429a5ep-319, 0x1.4aad94ffb442p-840,
     0x1.6b8fb8fc99775p-99, 0x1.9549e679b792p-86, 0.0, 0x1.2792292dfd5b3p-55,
     0x1.ec37988adf58cp-951, 0x1.b8610c5c54d6ap-549, 0x1.cfe25684efc55p-496,
     0x1.55e7c889307acp-571, 0x1.5622054db814ep-359, 0.0, 0x1.da1b362244ca8p-31, 0.0,
     0.0, 0x1.613495c1ef07bp-741, 0.0, 0x1.13031d0eed329p-970, 0x1.67e31e657164dp-967,
     0x1.ec1710053828cp-267, 0x1.b59e2d82836bep-800, 0x1.622d8aaaa8b47p-859,
     0x1.d2ef9a7e0573dp-264, 0.0, 0x1.b0944d223b906p-415, 0x1.9d9e2d3445369p-865,
     0x1.44941446b6996p-107, 0.0, 0x1.5d979acae5be4p-957, 0x1.265a1d60b51b3p-979, 0.0,
     0.0, 0.0, 0.0, 0x1.76c7583e6397fp-694, 0x1.0f2fd3ea5c359p-815,
     0x1.6d0ebee83909dp-22, 0.0, 0x1.95ce4ace29752p-682, 0.0, 0x1.a8a0a19fac586p-518,
     0.0, 0.0, 0.0, 0x1.cdbe5468a2fa3p-58, 0.0, 0x1.9df7ff4c4f2b3p-414, 0.0, 0.0, 0.0,
     0.0, 0x1.9818f07eb9a98p-751, 0.0, 0.0, 0x1.b4d68cac055c7p-531,
     0x1.43eb5315165b8p-528, 0x1.10ae4184d39ffp-1010, 0.0, 0x1.f97ff344230a1p-862,
     0.0, 0x1.b935a632db377p-56, 0.0, 0x1.6f9a8974a1eadp-557, 0.0,
     0x1.19cbd463de6eap-410, 0x1.05456d25693b7p-166, 0.0, 0.0, 0x1.64cc5b7606791p-277,
     0x1.4a1ed92508a11p-649, 0x1.d729f080d70acp-880, 0x1.b2f3a4cc1b968p-617,
     0x1.a87f87e4895a3p-402, 0.0, 0.0, 0x1.a7cff494e14c8p-534, 0x1.fec4d5e28c785p-531,
     0x1.89880e544f613p-737, 0x1.1ac5c6a4651b3p-124, 0x1.dee67ed3672a4p-262,
     0x1.5faeecf49fef7p-705, 0x1.5a4e1f4f429d7p-337, 0x1.5dd5099471f3ep-364,
     0x1.b97b30fcee499p-353, 0x1.df345c03c7db9p-220, 0.0, 0.0, 0.0, 0.0,
     0x1.ea7c657e5b1e6p-489, 0.0, 0.0, 0x1.33165dca871d9p-1013, 0.0, 0.0,
     0x1.e08fbaeb9059fp-851, 0.0, 0x1.d3db48e8de03cp-687, 0.0, 0x1.5af6fc1cb7129p-550,
     0x1.1293333aed57dp-437, 0.0, 0x1.9a49e1cbbcf9dp-36, 0x1.25958543a6cb2p-243,
     0x1.02f1bae56b2f4p-940, 0.0, 0x1.07e391c4eb532p-846, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.08d58740723ebp-659, 0.0, 0.0, 0x1.24274177ca074p-506, 0.0,
     0x1.8af4abecdc06p-702, 0.0, 0x1.c86d2a73d6f38p-51, 0x1.d17b44f49f963p-519, 0.0,
     0.0, 0.0, 0.0, 0x1.645b007c05b3ep-935, 0.0, 0x1.f331f9b4ce021p-493,
     0x1.d4bfc3fdce304p-765, 0x1.b70cb9dd72d27p-301, 0.0, 0x1.a172085eedd12p-456, 0.0,
     0x1.cfb640efbcf0ep-720, 0x1.3e9924717899fp-494, 0.0, 0x1.14559cf03f9cep-460,
     0x1.b30e1f2767dccp-396, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a65599ee53e8p-967,
     0x1.675b07bb9a4bfp-794, 0.0, 0x1.45fad31a86b96p-867, 0x1.6ad487a65bc1ep-578, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62c461c358071p-418, 0x1.7e2db700eef7dp-986,
     0x1.6649b3825f508p-668, 0x1.14a7154654985p-299, 0.0, 0x1.710c62ff1e44ep-34, 0.0,
     0.0, 0x1.711415573d08cp-689, 0x1.54859d948c1a8p-474, 0.0, 0x1.3604275e9e47cp-379,
     0.0, 0x1.98ffa471fb59dp-1, 0.0, 0x1.434490a1a41adp-161, 0.0,
     0x1.edfaefa89a379p-839, 0.0, 0x1.1bfae5ad09e1fp-275, 0.0, 0x1.c20b99cde16ecp-525,
     0x1.306097fd7def6p-114, 0x1.a7942a67f1539p-118, 0.0, 0x1.b4cd03a0968e6p-901, 0.0,
     0.0, 0x1.e20f2330912a4p-332, 0.0, 0x1.15fcd38242811p-984, 0x1.67d9f68dc723cp-147,
     0x1.de233881daf19p-207, 0x1.b060df468beeep-948, 0x1.466aaf74026c1p-340, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8e83ba81950bbp-869, 0x1.943e6a026d05dp-202,
     0x1.7998f64973abdp-762, 0.0, 0.0, 0x1.8bf672ba22d0bp-717, 0.0, 0.0,
     0x1.5820157c9d54dp-162, 0.0, 0.0, 0x1.f6f06b61e44cfp-23, 0x1.647ad29b2b95dp-782,
     0.0, 0.0, 0x1.e4ee2be6ae686p-735, 0x1.f0bce63e9b2b7p-595, 0.0, 0.0, 0.0,
     0x1.d743c70191ff7p-473, 0x1.c0f38260a3011p-256, 0.0, 0x1.2e01e1f71eb18p-779, 0.0,
     0x1.ece8050dfae4fp-121, 0x1.754ac01e02daep-61, 0.0, 0.0, 0x1.bd6b0a8545c92p-117,
     0x1.3a2b840c54d7dp-497, 0x1.38833be1cb3fbp-908, 0x1.3d32ff86baa84p-420,
     0x1.3c20e9eb56f8ep-137, 0x1.0ea571ebf4311p-569, 0.0, 0x1.07592810cea72p-671, 0.0,
     0x1.733f3c73c4e8fp-94, 0.0, 0.0, 0x1.98d9608417707p-536, 0.0,
     0x1.e472887ed2213p-39, 0x1.cf0fa007c1a45p-684, 0x1.d93f09f9f511p-950,
     0x1.02202722366b3p-487, 0x1.e57172869e0e7p-172, 0.0, 0.0, 0x1.4f3cc9ccf2c08p-296,
     0x1.c37ef1febaa6dp-1018, 0x1.7b72a68ac19f8p-704, 0x1.14f5650ef580bp-874, 0.0,
     0.0, 0x1.3320b3464adddp-186, 0.0, 0.0, 0x1.f5b19610a36bbp-242, 0.0,
     0x1.5e3037861a20cp-346, 0.0, 0.0, 0.0, 0x1.c9f052666870bp-534,
     0x1.77f296901a8f6p-716, 0.0, 0.0, 0x1.bf381e51c9ba2p-297, 0x1.a6f718d385541p-478,
     0.0, 0.0, 0x1.afa241e662e4ap-159, 0x1.83a05ae5cb692p-763, 0x1.af27ad083535ap-609,
     0.0, 0x1.13570b7e30cd1p-848, 0x1.0a4b0c9bf0758p-71, 0x1.bfc63ce997359p-29,
     0x1.62d164fa9a658p-818, 0.0, 0.0, 0x1.de71c646c2397p-763, 0x1.d50dd5935c9dfp-760,
     0.0, 0x1.c801c258a10b3p-51, 0x1.3f7208aeb832dp-728, 0.0, 0x1.8b3df65ef766cp-139,
     0.0, 0x1.7eb39c3dbeb3bp-17, 0.0, 0.0, 0x1.fe4d85e2e77c4p-21,
     0x1.0fa111e62da5p-808, 0x1.8ed347ebcbbc8p-444, 0x1.52497eb91c31dp-474, 0.0,
     0x1.e437e1d39e9eep-432, 0.0, 0.0, 0x1.1e603b87994e6p-689, 0.0,
     0x1.931b31835888ep-968, 0.0, 0x1.e9b0161c85646p-504, 0x1.deb864e3e2f25p-214,
     0x1.e66cfb8e93b37p-822, 0.0, 0x1.09eeab7d7313ep-752, 0.0, 0x1.44ec18a87c184p-932,
     0x1.d182998f04d67p-388, 0x1.29a80cbe61b33p-436, 0x1.e046ea1ca1d59p-162,
     0x1.f40894be36cf4p-565, 0.0, 0.0, 0x1.66688262cbde5p-879, 0x1.cfd5b340143f1p-256,
     0.0, 0x1.c2cdffd8efc8ep-407, 0.0, 0.0, 0x1.5b437b6fd249dp-307,
     0x1.cd20188a412c1p-826, 0x1.04067c23b6de2p-906, 0x1.45fa248d37517p-205,
     0x1.5dd3731516daep-36, 0.0, 0.0, 0.0, 0x1.35588d5b97319p-14,
     0x1.adbb52a2b6401p-664, 0.0, 0.0, 0.0, 0x1.51ea5de2a4cabp-589,
     0x1.ed244389963f2p-62, 0x1.6722194752ba9p-292, 0.0, 0.0, 0.0,
     0x1.c79dcda9b90d8p-550, 0.0, 0.0, 0.0, 0x1.80553312fa5b7p-963,
     0x1.c81f2975862a8p-961, 0x1.b33f8586769b1p-197, 0.0, 0x1.7672396d010ecp-419, 0.0,
     0x1.f18b67b1e2d01p-979, 0.0, 0x1.a56c4afd0fd88p-335, 0x1.5ad2a2b7da2dep-487,
     0x1.3c1fc0861f78cp-629, 0.0, 0.0, 0.0, 0.0, 0x1.dda4b40dcdaa6p-605, 0.0,
     0x1.5efe99220da3p-675, 0x1.5321cea55629ep-730, 0.0, 0.0, 0x1.65a06d459b1c9p-782,
     0x1.612c20a027044p-596, 0x1.2401b2649d801p-569, 0x1.387ceaba405cp-825, 0.0,
     0x1.f1a94a7371707p-693, 0x1.233d36a7b36b8p-682, 0x1.47d7e632707d5p-904, 0.0,
     0x1.e465fdbd7ae66p-346, 0x1.41cb421fdbf87p-551, 0x1.d3570620ce9ap-94, 0.0,
     0x1.b962752854b1dp-448, 0.0, 0.0, 0.0, 0.0, 0x1.69ee742137f5dp-331, 0.0,
     0x1.301c07bdcd128p-1000, 0.0, 0x1.b04d0b2797e78p-469, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.42eb796ffb765p-430, 0.0, 0x1.0d1483063c2e9p-854, 0.0, 0x1.17590da1e0b21p-420,
     0x1.e0139f2de8907p-100, 0x1.8689c4fe9af28p-581, 0.0, 0x1.139b609dcf9abp-873, 0.0,
     0.0, 0.0, 0x1.e4814e43260c6p-996, 0x1.141c90a7f85a6p-613, 0x1.8227d9ca26549p-655,
     0x1.40fbed99b7519p-63, 0.0, 0.0, 0.0, 0.0, 0x1.5217458668a1cp-758,
     0x1.4c3056522a29p-706, 0x1.3cf9f01c12a7ep-957, 0x1.44adf2bdf901ap-745,
     0x1.ac674b9b065e1p-554, 0.0, 0x1.a9c216b507fb3p-650, 0x1.85c52e4b3c55cp-253, 0.0,
     0x1.74c0cfbc4dfe7p-807, 0x1.213eafb8d4eafp-682, 0x1.ba1d02efbf1e6p-759,
     0x1.2971c7923882ap-480, 0.0, 0.0, 0x1.512a400144da9p-313, 0x1.e3134d39faa1dp-712,
     0.0, 0.0, 0x1.2beab6d42bdd5p-935, 0.0, 0.0, 0x1.ad386250a394p-491,
     0x1.ad51b48e7c425p-304, 0x1.5f57da443d063p-711, 0.0, 0.0, 0x1.8e72b9806c093p-937,
     0x1.37b57edc8cc9dp-399, 0.0, 0x1.22ae57ff0d91ap-345, 0x1.67e8277d224f1p-601,
     0x1.f48b81aa5b52fp-672, 0.0, 0.0, 0x1.6122990408564p-40, 0x1.4c8c5ebba7fcp-95,
     0x1.2704526129589p-833, 0.0, 0x1.a6e1a646b7687p-878, 0.0, 0x1.73bc4d1273171p-67,
     0x1.575b49ccd3eacp-645, 0.0, 0x1.b306c1632a52p-650, 0x1.1128aac175038p-703,
     0x1.8cef9cf57cd3ap-420, 0x1.8a007dfbf4d29p-773, 0x1.cd0b605f3c59ep-233,
     0x1.5ef42f9544dffp-455, 0.0, 0x1.c474e8ee02a55p-65, 0.0, 0.0,
     0x1.89f6ed2595ac4p-309, 0x1.e385e5276fa4ep-977, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2979c8711eadfp-1003, 0.0, 0x1.7e059c3dc561ap-173, 0.0, 0x1.acb4168d6d5c3p-17,
     0x1.fb17b47706572p-547, 0x1.76d0cfe0f6239p-366, 0.0, 0x1.bb88c90f1474bp-227, 0.0,
     0x1.92b50a8441bbp-427, 0x1.54885d474f38fp-269, 0.0, 0.0, 0.0, 0.0,
     0x1.7a1726d5c0f2dp-468, 0.0, 0x1.0354e4032eeb3p-31, 0.0, 0x1.acea07eb18924p-248,
     0x1.9c2ea8eec092dp-474, 0x1.d101eeed0d71fp-614, 0x1.5f044606c445dp-113,
     0x1.6f96deb0604a3p-729, 0x1.b3c5dd74a211bp-340, 0.0, 0x1.3b1aa5b236a2fp-740, 0.0,
     0x1.ba0a69e56a4f8p-550, 0x1.45e095ec7731cp-853, 0x1.c9fb8d50513b4p-41, 0.0,
     0x1.c8503779b12fcp-317, 0x1.40fd72a13a2c5p-785, 0x1.f83802bf655bbp-113,
     0x1.6ed791556afd7p-47, 0.0, 0x1.0750d6c32f2e7p-332, 0.0, 0x1.15cd49baa3a21p-439,
     0.0, 0x1.c490d396e54dep-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba8cf20e32441p-658, 0.0, 0.0, 0x1.59b61dfcd5b6ep-399, 0.0, 0.0, 0.0,
     0x1.77424995ee41ep-922, 0.0, 0x1.377e959227313p-24, 0x1.55baed2a7e514p-500, 0.0,
     0.0, 0x1.f8ea65b31011bp-580, 0.0, 0x1.130c34b41eb4cp-666, 0x1.74fa61b3e9fap-195,
     0x1.273696736d24bp-12, 0x1.b4f7e43a1d687p-265, 0.0, 0x1.d84267874129fp-1013,
     0x1.bf4042a24d71fp-626, 0x1.d38faa553d846p-706, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db2dd87ffb2a5p-932, 0x1.4e26001bdb866p-901, 0x1.18115a23e5798p-546, 0.0,
     0x1.8c0bdb1956a26p-329, 0.0, 0.0, 0x1.f32e547ccf52fp-402, 0.0, 0.0,
     0x1.7a2d6b1d44c8fp-62, 0x1.8c796ccea3dd1p-94, 0.0, 0.0, 0x1.34d049d848713p-619,
     0x1.d658c7acf3214p-194, 0.0, 0.0, 0x1.a1bfdbbb77762p-982, 0x1.4457e9b6debe6p-106,
     0.0, 0x1.d57c68fe55d42p-284, 0x1.330cf151b218cp-539, 0x1.dbadf3e178c2bp-221, 0.0,
     0.0, 0x1.4b43311b9e03fp-932, 0.0, 0.0, 0x1.fe0596df54b5cp-88,
     0x1.b51bb435c05c7p-266, 0.0, 0x1.69acda77c1368p-572, 0.0, 0x1.812affc25798fp-509,
     0x1.7cf6f6e3ca549p-328, 0x1.012633e499f1ap-960, 0.0, 0.0, 0.0,
     0x1.94b2a403c776ep-1004, 0x1.2ee96cf58137p-15, 0x1.2621d64404fb1p-234,
     0x1.8d1a7a77c690ep-614, 0x1.518b3f77f3f58p-1, 0x1.629e7df0bb54bp-23, 0.0,
     0x1.3c8a5aaf3e566p-761, 0x1.5f71b7b11a3c3p-249, 0.0, 0x1.29e278f29bde6p-8,
     0x1.0d2eb35528b2p-850, 0.0, 0x1.03f7392623be1p-456, 0x1.42796d693d3fep-467
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
            tmp1 = Sleef_tand1_u10purecfma(tmp0);
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
    printf("Sleef_tand1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tand1_u10purecfma bench acc %la\n", global_bench_acc);
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
