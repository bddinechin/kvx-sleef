/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd1_u35purecfma.c --function \
 *     Sleef_finz_coshd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.376fae61522acp-881, 0.0, 0x1.1d276413eb57ep-146,
     0x1.606a17cafc4cdp-616, 0x1.1befce135b24p-797, 0x1.c4aa23879baecp-418,
     0x1.2545bd00b17a7p-711, 0.0, 0.0, 0.0, 0x1.d4bc858aa7c73p-540, 0.0,
     0x1.c10d4a95dcbaep-354, 0.0, 0x1.cc82a081f0cf8p-838, 0x1.833115858c383p-696, 0.0,
     0x1.efa55614a1af6p-928, 0x1.b985773d61f6p-52, 0.0, 0.0, 0x1.c4e287189bf9p-303,
     0x1.b1f48cac1da35p-887, 0.0, 0x1.4b23d712ef0d1p-186, 0x1.0015143fad43dp-562,
     0x1.eb6be7c41ec8p-472, 0.0, 0.0, 0x1.0b3acf1dac3d3p-300, 0.0, 0.0,
     0x1.eedd6755fe5dbp-1001, 0.0, 0x1.afd57ecc7b93ap-33, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f4a221e2fda66p-682, 0x1.afba4fefe02c4p-814, 0x1.470d95a8e8cf5p-569, 0.0,
     0x1.e83b7ba852c5cp-308, 0.0, 0.0, 0.0, 0x1.0d82488d83ac8p-162, 0.0, 0.0, 0.0,
     0.0, 0x1.f0a57e20fa1a7p-807, 0x1.fffb16da5496bp-234, 0x1.f3c5174f9d313p-366, 0.0,
     0x1.c34325cadb00fp-245, 0.0, 0x1.1dea275cc39dep-393, 0x1.e63e0df9965bap-587, 0.0,
     0x1.9711b09ba9189p-993, 0x1.612ef07d58ddcp-711, 0.0, 0.0, 0.0,
     0x1.e4986c66bab66p-902, 0.0, 0x1.f8fd1aa73b6f5p-403, 0.0, 0x1.48be855980d9dp-887,
     0x1.a7834ef59a21cp-691, 0x1.4c7b76bc8a075p-784, 0x1.a3280e0baec28p-449,
     0x1.fb41d16eacd5ap-560, 0x1.09c5f2c42594dp-953, 0.0, 0x1.92d24d9e41dfbp-379, 0.0,
     0.0, 0x1.9708899713a6cp-912, 0x1.3ba626152b164p-591, 0x1.27b0555d2828p-999,
     0x1.2eaf36f0ab3b4p-508, 0.0, 0x1.72424b7a54287p-805, 0.0, 0.0, 0.0,
     0x1.344e977f2a727p-803, 0.0, 0x1.a56d7b85ee5b5p-898, 0x1.976c7e4fc897ap-664, 0.0,
     0.0, 0.0, 0.0, 0x1.e7605701f3afdp-906, 0x1.0fceddf1149f2p-607, 0.0, 0.0,
     0x1.7e032f8535832p-831, 0.0, 0x1.90f7a27cd6cf2p-402, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.beee75fcb60f9p-959, 0.0, 0x1.6adc5ab84c2b3p-185, 0.0, 0x1.765779ef21fa8p-841,
     0.0, 0x1.130d24755a4ebp-1014, 0x1.8ccbb083d1765p-93, 0x1.12bdf3bdd00c8p-251,
     0x1.b93a864dac654p-96, 0x1.17ab0866ffb85p-645, 0.0, 0.0, 0x1.a9e7ef540ada3p-270,
     0x1.c3d8868b55464p-774, 0x1.21ee6fed9d339p-1015, 0.0, 0.0,
     0x1.4e521c5f0c357p-296, 0x1.8861a72859139p-866, 0.0, 0.0, 0x1.c0f194143ff31p-890,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.181b28e6254e9p-319, 0.0, 0.0,
     0x1.c4484de51d36fp-523, 0x1.6518cae8b7ce6p-721, 0x1.80c573ea0086fp-123, 0.0,
     0x1.77fea6a0749a6p-35, 0.0, 0x1.b4b94a977b3bdp-286, 0x1.d999cef3908a5p-84, 0.0,
     0x1.58f26f01b91a2p-819, 0.0, 0.0, 0x1.313e47e1db749p-922, 0x1.e96eecc9f561bp-114,
     0.0, 0.0, 0x1.522bce4229c95p-680, 0.0, 0.0, 0x1.af9a2f15ba43ap-525,
     0x1.18c8c56171122p-245, 0x1.95948057053c5p-319, 0x1.b9b648e644d0cp-256,
     0x1.890f1b76b2d8ap-187, 0.0, 0.0, 0.0, 0x1.e540ff074deb9p-339, 0.0, 0.0, 0.0,
     0.0, 0x1.6380cd4df5775p-688, 0.0, 0.0, 0.0, 0x1.7a8e925ab8e29p-857, 0.0, 0.0,
     0.0, 0x1.2eadac81f4ffcp-641, 0.0, 0x1.dfef0ef6332cbp-709, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.41dd64a584278p-742, 0.0, 0.0, 0x1.a2e8c6ab3dc42p-313, 0.0,
     0.0, 0x1.274f230fc08cfp-720, 0.0, 0.0, 0.0, 0.0, 0x1.b015f676bf3bep-750, 0.0,
     0.0, 0x1.da4439e57c5a8p-73, 0.0, 0.0, 0.0, 0x1.bbdf0dd40d855p-685,
     0x1.595f90ce438afp-578, 0x1.eb1990ee345e2p-256, 0x1.b770a048b820ap-507,
     0x1.cfbd6967fb462p-824, 0.0, 0.0, 0x1.622c3d36ffaf9p-756, 0.0, 0.0, 0.0,
     0x1.d65b6f373ed9cp-1018, 0.0, 0x1.fd66e3d30fe3fp-665, 0.0, 0.0, 0.0,
     0x1.8873935ff0a95p-422, 0.0, 0.0, 0x1.db4541076d1fbp-520, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8594e8cd14a2p-574, 0.0, 0x1.ae49d5585a4aap-444, 0.0, 0.0, 0.0, 0.0,
     0x1.9ca418859660fp-871, 0x1.318d759adcb92p-1016, 0x1.047e3327988a6p-926, 0.0,
     0.0, 0.0, 0.0, 0x1.663cad7fcee6p-368, 0x1.1bf0a9ab86d15p-808, 0.0,
     0x1.1198aed016083p-55, 0x1.e7d0153b4b282p-667, 0.0, 0.0, 0x1.92abfa0a1db4p-348,
     0.0, 0.0, 0.0, 0x1.285db551ea948p-842, 0x1.1b6e60cd367adp-668, 0.0,
     0x1.1229b9479d67dp-854, 0x1.3bb2c0e508391p-168, 0x1.3b077dcacac19p-26,
     0x1.ca32ef705141p-641, 0.0, 0x1.115ec14887d26p-528, 0.0, 0x1.e3e57b5e59b83p-28,
     0.0, 0.0, 0x1.45326371e0906p-519, 0.0, 0x1.3cabc16d81b23p-975, 0.0,
     0x1.a2204899a56edp-829, 0.0, 0x1.a62d5748c6f27p-835, 0x1.1b27291e78147p-557,
     0x1.b4ca913af289ep-941, 0x1.5663a9bd7c8f4p-983, 0x1.d1bc9a907aa8dp-803, 0.0, 0.0,
     0.0, 0.0, 0x1.1e5c67f5136p-478, 0x1.a1cc566a16f5p-216, 0.0, 0.0, 0.0, 0.0,
     0x1.15c883f633d0fp-651, 0.0, 0.0, 0x1.56da04275ea31p-247, 0x1.154f936b7dba3p-537,
     0x1.395f2fe69a4d9p-638, 0x1.2609df559002bp-77, 0x1.c37d4806bae63p-1014, 0.0, 0.0,
     0x1.fc352ee76d633p-847, 0.0, 0.0, 0x1.777a99cfc8a0ap-525, 0x1.cb8f19103ac74p-503,
     0.0, 0.0, 0x1.decb67ed59e7bp-360, 0x1.7a4bee436e4dep-516, 0x1.f7f1dbc9a32e5p-213,
     0.0, 0.0, 0x1.f3202f2f4fee2p-63, 0x1.164d18225cb7ep-341, 0x1.989fe21651af3p-450,
     0.0, 0x1.a41fc228b9155p-44, 0.0, 0x1.86f62d40fa092p-230, 0.0, 0.0,
     0x1.985eba503068dp-428, 0x1.2bcadcab2cd9p-799, 0x1.f6729379da925p-636, 0.0,
     0x1.3b1507009eb74p-169, 0x1.925a7ccf2abdbp-909, 0.0, 0x1.891abcd24a217p-368, 0.0,
     0x1.f5b38ae531729p-712, 0x1.2d6519fd15ddp-257, 0.0, 0x1.df521e4d7625ep-485,
     0x1.2cc10aa047d7dp-377, 0.0, 0.0, 0.0, 0x1.9d9f3a3550851p-317,
     0x1.e86b80627ea0dp-632, 0x1.8c202ac4a3edbp-1, 0x1.a8f8e5925d1f8p-1008, 0.0,
     0x1.ba44f24e96faep-764, 0.0, 0.0, 0.0, 0.0, 0x1.6d375170f01b6p-537, 0.0, 0.0,
     0x1.023615fb5fe23p-529, 0x1.0720c294f96d8p-21, 0x1.6a325e6128008p-320, 0.0,
     0x1.165100044c14cp-901, 0x1.d53d7127e15b1p-83, 0.0, 0x1.a7f5f56be589fp-201,
     0x1.b34ffac1f6ebcp-889, 0.0, 0x1.c55fce91ffcb5p-147, 0x1.5e02ee5e470a9p-1017,
     0.0, 0.0, 0x1.a7bc0ad2a3c1ep-579, 0x1.b0cc69ef0a494p-971, 0x1.6a07c7a738c24p-51,
     0.0, 0.0, 0.0, 0x1.1e5fd755dbbc9p-644, 0.0, 0.0, 0.0, 0x1.eb0beb17472adp-10, 0.0,
     0x1.3477dd503cef2p-134, 0.0, 0.0, 0.0, 0x1.8d64e9e450e4ap-31, 0.0,
     0x1.12dcc3cb6b356p-378, 0.0, 0.0, 0x1.80c5816667871p-29, 0.0,
     0x1.f9a4b868c281p-212, 0x1.02df9f0a2c5f7p-938, 0x1.84b86a0cbb9c4p-811,
     0x1.82dcee7b7118p-393, 0.0, 0x1.9af5128a74741p-364, 0.0, 0.0, 0.0,
     0x1.053ae2ae55388p-200, 0.0, 0x1.4847fcc921a86p-10, 0x1.6e88bb48a441ep-793, 0.0,
     0.0, 0x1.8b492d30e091dp-152, 0.0, 0x1.1776438ed37d7p-429, 0.0,
     0x1.f5ae335fb7114p-529, 0x1.24475fb73173bp-64, 0.0, 0.0, 0.0,
     0x1.a188f93c5885ep-165, 0.0, 0.0, 0x1.f343198f832abp-401, 0x1.d848d0fa9b07cp-953,
     0x1.770681fd387p-356, 0.0, 0x1.a22caeb66fa2fp-894, 0x1.7a529642b1834p-414, 0.0,
     0x1.91abfab53cbdfp-650, 0.0, 0.0, 0.0, 0.0, 0x1.f44f3ed95af27p-683,
     0x1.274ae583cd537p-1000, 0x1.6d1891712d717p-52, 0.0, 0.0, 0x1.4be867985eb7ap-542,
     0x1.ff94d1ff7c42bp-592, 0x1.921d1e7eecf9fp-887, 0.0, 0x1.0ceb3d52416fcp-742,
     0x1.c87288f88521dp-955, 0.0, 0x1.29a41a35b875dp-578, 0x1.f0d6d391c1177p-822, 0.0,
     0x1.c668970983305p-156, 0x1.3bb2660f45a99p-585, 0x1.d8de919bb6294p-862,
     0x1.8f7fff4fba745p-305, 0x1.2164ec7abb394p-195, 0.0, 0x1.aece092c17d68p-769, 0.0,
     0.0, 0.0, 0x1.f75ecd5447759p-22, 0.0, 0x1.7d7b17aef2b23p-592, 0.0,
     0x1.5d6507dcd8b1cp-977, 0x1.b0731bd463178p-437, 0x1.a3edb6e69c71fp-403, 0.0,
     0x1.70ffbbe90f02dp-928, 0x1.98496eb1e26f9p-335, 0.0, 0x1.1216c9779423fp-740,
     0x1.a00f140c647fap-716, 0x1.efd79400373afp-635, 0.0, 0x1.d5e5aa2aeff9fp-1014,
     0.0, 0x1.69ea6003ef76bp-398, 0.0, 0.0, 0x1.e8aa9f0649bfcp-568,
     0x1.d1a6bdb93a2e1p-85, 0x1.7200a809ae812p-309, 0x1.cb8f54b4f2ce2p-334,
     0x1.20cb396dfc922p-258, 0x1.333df9600fdafp-919, 0x1.6848fc9e32f59p-195,
     0x1.639ab8f9954e7p-797, 0x1.d5bb40490accdp-560, 0x1.3b59db8e5bfbcp-533, 0.0, 0.0,
     0x1.b116315ddfb8fp-435, 0x1.c6d4db707f2acp-567, 0x1.8744a0ff8c4eep-848, 0.0,
     0x1.55eff0586b947p-203, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.14a5b97835f18p-27,
     0x1.6e74a8d550fa5p-227, 0x1.f732bd03988dbp-984, 0.0, 0x1.a20fea9592b12p-761,
     0x1.5a0bb10586634p-194, 0x1.4dcbe235fd43ep-69, 0.0, 0x1.e3be1e20bd82dp-133, 0.0,
     0x1.8fce18059df1cp-904, 0x1.f51ff334578adp-259, 0.0, 0.0, 0x1.5fec52fb64435p-520,
     0.0, 0.0, 0.0, 0x1.538fe51ed7891p-56, 0x1.b2d1ff2b2685bp-180,
     0x1.463b27d2340f6p-822, 0x1.83ac90fd65cc7p-743, 0x1.49196c9f4441p-664, 0.0, 0.0,
     0x1.a0a0f189d3bcdp-972, 0.0, 0x1.338651335ccd4p-49, 0x1.e23d63b102283p-384, 0.0,
     0x1.9df8e39b49677p-739, 0.0, 0.0, 0.0, 0x1.9a7428023a0c4p-830, 0.0,
     0x1.5c4beadf58462p-88, 0x1.0ee18028a5ec8p-283, 0.0, 0.0, 0.0, 0.0,
     0x1.52492000891b7p-44, 0x1.a13c456e3d4e3p-440, 0x1.c85f207924891p-691,
     0x1.e0f1589d44eb3p-1007, 0x1.85b422f8290fep-585, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a63cf21a274ffp-746, 0.0, 0x1.12fbbb920c968p-178, 0x1.3d7b478c0c906p-426, 0.0,
     0.0, 0x1.7fb07e52cd25fp-220, 0.0, 0.0, 0x1.3d956a49ecb98p-781,
     0x1.2917633237fedp-916, 0x1.b161b2d771f81p-258, 0.0, 0x1.260a7eefecd21p-58,
     0x1.5fd693edcd9bap-536, 0x1.fdffe85579a79p-88, 0x1.431187e5e330ep-408, 0.0, 0.0,
     0.0, 0.0, 0x1.2170c68d7f4efp-778, 0x1.91d283566e0adp-710, 0.0,
     0x1.a6e50272de7dbp-69, 0.0, 0x1.7cf6e1653f358p-840, 0.0, 0x1.c4470f39a523fp-492,
     0x1.ee02abbbcbe42p-222, 0x1.058507bf3e25fp-639, 0x1.10f37d1f29522p-263, 0.0,
     0x1.d2f8de44bd3dap-257, 0x1.16cbf05396e14p-105, 0x1.ef3f6759f1d89p-120, 0.0, 0.0,
     0.0, 0x1.25a557ae970e9p-884, 0.0, 0.0, 0.0, 0x1.08d11dec5454cp-802, 0.0,
     0x1.5553582818c67p-590, 0.0, 0.0, 0x1.476ea7dd892ecp-934, 0x1.c2dfc3c43e71p-821,
     0.0, 0x1.8ae3c0ef3b0cp-596, 0.0, 0.0, 0x1.ec71725319073p-522,
     0x1.d0ff4a4e62baep-150, 0x1.bcce68423608bp-431, 0.0, 0.0, 0x1.312f1b61ba14dp-422,
     0.0, 0.0, 0x1.13dd7bf1d5ea5p-129, 0.0, 0x1.90a6064a6f981p-222,
     0x1.aea42998e0f75p-421, 0.0, 0x1.2c7230ca6ca65p-507, 0.0, 0.0, 0.0, 0.0,
     0x1.f6578fbe0e147p-680, 0.0, 0x1.531c0e97b5b9cp-25, 0.0, 0x1.fbe54f0170365p-542,
     0.0, 0.0, 0x1.820d6b4f4dc02p-492, 0.0, 0.0, 0x1.4eaf2f9225bbfp-671, 0.0,
     0x1.3fe736a83cd31p-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d65bae4a74f09p-636,
     0x1.cbd1e24ff2e6cp-496, 0.0, 0.0, 0.0, 0.0, 0x1.dc083f4562d43p-223, 0.0, 0.0,
     0.0, 0x1.9ca6017f9edp-445, 0x1.c0cab3c620cc5p-444, 0x1.e4ca0e039baeap-576,
     0x1.30e4a1cc4e979p-400, 0.0, 0x1.264a82b1ea1f3p-426, 0.0, 0x1.e3662c2390299p-41,
     0.0, 0.0, 0.0, 0x1.889e057951c5ep-613, 0.0, 0x1.d5fc8c503075fp-555,
     0x1.1c31e822a1d25p-727, 0.0, 0x1.8540abd674b33p-792, 0x1.0a82d5ace89a2p-895, 0.0,
     0x1.e7423804c1e73p-466, 0x1.2e1488952b8ddp-214, 0x1.0efb606a0dd0bp-641,
     0x1.a64629d4b5b16p-586, 0x1.b6888c806df71p-217, 0x1.ff0ca27e38185p-208, 0.0, 0.0,
     0x1.a7e915297d11cp-658, 0x1.7949a9fc755c2p-839, 0.0, 0x1.2c66d33dc6124p-71,
     0x1.9fd6022468855p-196, 0x1.46dbd787d2186p-819, 0x1.ef8d9fc22f168p-334,
     0x1.e7350224acafbp-699, 0x1.2419ebc583c7cp-766, 0x1.1839e9747d82fp-1022,
     0x1.b8663077c4ba8p-1, 0.0, 0.0, 0x1.ca14251999fd9p-324, 0.0,
     0x1.068037c359224p-798, 0x1.0a66beabc53bp-619, 0x1.191939d1c9f36p-25, 0.0,
     0x1.a9f57ce6e51f5p-429, 0x1.7ac0c617f029bp-185, 0x1.19e4acfa8c803p-446,
     0x1.a34815b157ca5p-964, 0x1.fd102fe69b167p-760, 0x1.d17016d91eba2p-858, 0.0, 0.0,
     0.0, 0x1.b027d106feb75p-896, 0x1.7d28a94a0f983p-196, 0x1.76af76010d504p-112, 0.0,
     0.0, 0x1.e92fea847e953p-863, 0x1.101509be58b3dp-848, 0x1.66f8d82ba856p-674, 0.0,
     0x1.8d8ad9055bca5p-426, 0.0, 0x1.8c96e55e4c0abp-231, 0x1.05630aa329322p-796,
     0x1.c41427cca93bfp-811, 0x1.03eaced0dea57p-147, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e05d08ae6b9c1p-712, 0.0, 0x1.e128f68001d06p-14, 0.0, 0x1.24af0bb9626d4p-234,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.742f5a6e6c8cdp-133, 0x1.f03f4c12377a8p-151,
     0x1.a2a6e21702fa2p-622, 0.0, 0x1.79bd18b14be6ep-839, 0.0, 0x1.6e28dc6702169p-718,
     0.0, 0.0, 0x1.4640fbb522f68p-227, 0x1.6df962e398b5p-734, 0.0,
     0x1.57efe83260c26p-340, 0.0, 0.0, 0x1.25ea7cab064a6p-411, 0x1.191a5ed1e294fp-140,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7e48379f09dcp-525,
     0x1.67ba85bd0655ep-1, 0.0, 0x1.1c4b0cc54680bp-635, 0x1.052221e66d18cp-207, 0.0,
     0.0, 0x1.7ddea7315dd79p-9, 0x1.eb565fbc2196ep-225, 0.0, 0.0, 0.0,
     0x1.c58bea5858caap-491, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a326bc17dff98p-690, 0.0,
     0x1.19c83c46b0585p-304, 0.0, 0x1.4bb8d397d3637p-8, 0x1.0c8cabdce9782p-540,
     0x1.383f16aa4667fp-36, 0x1.02b9d0ea4a6ddp-194, 0.0, 0.0, 0x1.27af905585e79p-460,
     0x1.19e1fd163328dp-656, 0.0, 0.0, 0x1.9c14e5ebdca34p-844, 0x1.7c877f5bb9b36p-98,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a79f27a33c1dbp-169, 0.0, 0x1.2821f7f42c498p-141,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1cde3b7bb1b5p-394, 0x1.f11522b03b8afp-929,
     0.0, 0x1.86dd3f07ea69bp-95, 0.0, 0x1.e432e7fe96d9cp-431, 0x1.ec9e7142a424ap-251,
     0.0, 0x1.fc5f54d230f43p-371, 0.0, 0x1.a9297e8698b0cp-388, 0.0, 0.0, 0.0,
     0x1.5031bec5a235cp-276, 0x1.7c43993cecf55p-141, 0x1.bb10a2025d1c4p-838,
     0x1.f30269db9f534p-914, 0x1.a9bf08691a55cp-269, 0x1.6f5e7bc3aaaf4p-376,
     0x1.efb9da550618fp-239, 0x1.8dd6aa657dc55p-387, 0x1.4d73413b4049dp-863, 0.0, 0.0,
     0x1.a0b9cafc7d0aep-580, 0.0, 0x1.0d3b38f0a18fcp-227, 0x1.f626fa825ec85p-689,
     0x1.eb6c7a7133ccp-604, 0x1.aafdfecd0a313p-274, 0.0, 0.0, 0.0,
     0x1.d9ee3e391e64fp-814, 0x1.a7fb66b89b81p-547, 0.0, 0.0, 0x1.5697932712a1ep-151,
     0x1.9ce06286758f5p-940, 0x1.d02a5d42f64e7p-985, 0.0, 0x1.5e97ee86a5c46p-677, 0.0,
     0x1.608ce2e50f3f8p-97, 0.0, 0.0, 0.0, 0.0, 0x1.b86572f93d04p-1009, 0.0, 0.0,
     0x1.82fc2f1a345aep-975, 0.0, 0x1.12a0f8bf5a4b3p-851, 0.0, 0.0,
     0x1.678fbd25ccf98p-411, 0.0, 0.0, 0x1.a189e0d6da0ap-85, 0.0,
     0x1.acbfaa2eaeb94p-196, 0.0, 0.0, 0x1.2c8832cd5f203p-739, 0.0,
     0x1.5ab7e8568f0dfp-560, 0.0, 0x1.bbd9dbacaa86p-407, 0x1.203270f096296p-416,
     0x1.f4394caa04dap-531, 0x1.dba2762afcd98p-237, 0.0, 0x1.85163855ff0acp-357, 0.0,
     0x1.f78dcf66da668p-198, 0.0, 0x1.00c5dddb999f2p-607, 0.0, 0.0, 0.0,
     0x1.eecbdad7e0de4p-680, 0x1.c0ece69fcc113p-859, 0.0, 0x1.582ad8f1f55fep-105, 0.0,
     0x1.521d27913984bp-984, 0x1.7b254b5fe201ep-618, 0.0, 0x1.ab47c2a8b11d2p-851,
     0x1.0c72104b96d0dp-633, 0x1.71119122dc2fp-394, 0x1.269a3c91105edp-276, 0.0, 0.0,
     0x1.d583c677b9e03p-833, 0.0, 0.0, 0.0, 0.0, 0x1.da3fbb69eb8b6p-454,
     0x1.a5c4a86d6e8f5p-742, 0.0, 0.0, 0x1.921929a43971fp-323, 0.0,
     0x1.c24ca2acbe93cp-881, 0x1.354169c44cbc7p-300, 0.0, 0.0, 0x1.73700af57037ap-998,
     0.0, 0x1.ddc47ae9cf83p-197, 0x1.5221186244ad5p-468, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.55e5acb205847p-565, 0x1.5863b5c743ffap-484, 0.0, 0x1.89dcd073b92bbp-72,
     0x1.e4d8f69f9673bp-135, 0.0, 0.0, 0.0, 0.0, 0x1.a01baf6c17c58p-184,
     0x1.af7bc25a2c498p-261, 0.0, 0x1.2f29cc475e787p-762, 0x1.ab2e706205eb2p-431,
     0x1.de7b56cab23ecp-734, 0x1.c9d084326bc87p-313, 0.0, 0.0, 0.0, 0.0,
     0x1.267b7d795a0bbp-940, 0x1.5acec6cfc2212p-267, 0.0, 0.0, 0x1.eb8157fc8a08p-978,
     0x1.b5b6511f4102ep-224, 0.0, 0.0, 0x1.57729e6cffef5p-178, 0x1.14cc6035b018fp-346,
     0x1.208687801209ap-653, 0x1.1dc04cc251266p-408, 0x1.11e881fe5bc22p-1007, 0.0,
     0x1.08eb163e885ecp-410, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60bccd4c61883p-457,
     0.0, 0.0, 0x1.7156212a983b5p-909, 0.0, 0x1.eb7396f2b6b0dp-667, 0.0,
     0x1.c03414cbb3463p-36, 0.0, 0.0, 0x1.c46bc9298f679p-112, 0x1.e78a0241a880dp-788,
     0x1.ead4788d0926ep-100, 0x1.a1e0ccd37ab51p-985, 0x1.4999f66bc53c4p-131, 0.0, 0.0,
     0.0, 0.0, 0x1.d03f15a6a5126p-140, 0x1.f250359a1cbap-954, 0.0, 0.0,
     0x1.1e97d20a0fcf8p-893
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
            tmp1 = Sleef_finz_coshd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_coshd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshd1_u35purecfma bench acc %la\n", global_bench_acc);
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
