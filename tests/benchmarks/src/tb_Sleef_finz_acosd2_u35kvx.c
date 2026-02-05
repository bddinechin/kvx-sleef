/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd2_u35kvx.c --function \
 *     Sleef_finz_acosd2_u35kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.18ddd38dbf92ep-572, 0x1.7772d37880896p-210, 0x1.961e97ad36868p-574, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9230bf482e437p-657, 0.0, 0.0, 0.0,
     0x1.d2670c25f8d69p-549, 0x1.49a3274c61294p-156, 0.0, 0x1.66cd93b2d0979p-781, 0.0,
     0x1.929b2bfe0adebp-531, 0x1.8832b9d0f7603p-335, 0x1.901bcde1ef43p-317,
     0x1.511ccafc20db5p-929, 0.0, 0.0, 0x1.4f8f5d4695ed5p-618, 0x1.a36630bbad767p-600,
     0x1.78fee29c8711dp-959, 0.0, 0.0, 0x1.809c805d5c512p-387, 0.0,
     0x1.7011f3f47ad79p-839, 0x1.e79b092810d9cp-28, 0x1.e93b1205fdd09p-755, 0.0, 0.0,
     0x1.6b71034d91856p-476, 0.0, 0x1.276a333ae26f8p-320, 0x1.abac56e00746ap-963,
     0x1.c0d398151a03p-320, 0.0, 0.0, 0.0, 0x1.0b916ab7dc66cp-549,
     0x1.ce7c41ad86ec4p-521, 0x1.66a10ee1939e6p-801, 0x1.b9ec2882eeb7cp-680,
     0x1.df563d7623beap-818, 0x1.d2b5ea83f128ap-446, 0.0, 0x1.fc90ddb9d4657p-108, 0.0,
     0.0, 0.0, 0.0, 0x1.b1834d7e8514ap-789, 0x1.c8c67d52d4db6p-653,
     0x1.e8b434fafbe4dp-431, 0.0, 0x1.28314c0b233a5p-117, 0x1.f730301489346p-309, 0.0,
     0x1.e51a9d198d6b2p-859, 0x1.e028969a26061p-346, 0.0, 0x1.2e13b21c3ff1dp-1020,
     0.0, 0x1.f8423fc718ad4p-800, 0.0, 0.0, 0.0, 0x1.8d476cb9c27f6p-860,
     0x1.4a9a1c7b97ec7p-807, 0x1.069f39865e552p-851, 0x1.909d27446bda3p-100, 0.0,
     0x1.8d81fd3e2587ep-380, 0.0, 0x1.c9a7441c10f98p-192, 0x1.ca7dc39d49948p-899,
     0x1.d81890a1c490cp-323, 0x1.c02e9b15cf9e6p-1005, 0x1.6e0e2cd371cfap-539, 0.0,
     0x1.88d61b7fcb3aep-955, 0x1.2c06f9507926fp-84, 0x1.51c38a326f8d1p-781,
     0x1.f327c079234f5p-183, 0.0, 0.0, 0.0, 0.0, 0x1.66d3f31b4de6bp-252,
     0x1.4d31098fcadd3p-798, 0.0, 0x1.71241d820cb2fp-664, 0x1.fc83b4b8f007fp-46,
     0x1.973007d2407a2p-388, 0x1.c06aa6a583611p-747, 0x1.97cd2cd61cc83p-765,
     0x1.ea60088d6454ep-704, 0.0, 0x1.1a90a0c74579ep-89, 0x1.6f04cb542180ep-915,
     0x1.c7e06c69ce404p-704, 0x1.4e4220f7e9102p-282, 0x1.0442e6b866e4ep-875, 0.0,
     0x1.22b7ecc9e150fp-960, 0x1.cbf4849fae5dbp-668, 0x1.3f9c5e5f53bb7p-200, 0.0, 0.0,
     0x1.ba2271be1a14fp-802, 0.0, 0x1.5d9ca3b693297p-331, 0x1.55bcf8ebf911p-616,
     0x1.326d55756c0e5p-237, 0.0, 0.0, 0.0, 0x1.5a5e710b534b9p-334, 0.0,
     0x1.986bfc7811ea5p-314, 0x1.4072349d437b7p-736, 0x1.86df7fdbb6d73p-427,
     0x1.e600b5c1fb881p-647, 0.0, 0x1.082d354337f6cp-131, 0x1.f1e4f77e7e7d9p-879,
     0x1.636e0fefdd851p-886, 0x1.4219ef738e0e7p-163, 0x1.1b27151b6358dp-922, 0.0,
     0x1.e9ea771ec5dcp-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6e6464e0bb2p-584, 0x1.4e2d5153b207bp-967, 0.0, 0x1.8109f459b4805p-396,
     0x1.5c4441f72a7e4p-469, 0x1.d7338a2cf8a71p-311, 0.0, 0x1.c870a6e480c69p-257, 0.0,
     0x1.81c6adc8ca743p-302, 0x1.ba16e5c6f9ce9p-723, 0x1.faca149447db7p-194,
     0x1.d522954e8f34p-1009, 0.0, 0.0, 0x1.38484e8cdcb6ap-834, 0x1.e2ac89588e886p-875,
     0x1.11403bf2c7ee3p-996, 0.0, 0x1.51d3bf4ccda19p-717, 0x1.adc65c31c0f99p-90,
     0x1.7c553ad15948ep-269, 0x1.a6bfc04ccf7f6p-594, 0.0, 0.0, 0x1.da077a42f7597p-309,
     0.0, 0x1.97a6f7dd8fb9cp-338, 0x1.0b91aeff41519p-33, 0x1.65f5987f3399ep-19,
     0x1.5b7d2ee07d03dp-285, 0x1.228cb0d3ac4bap-711, 0x1.e758aea08abe3p-709,
     0x1.77836e2911976p-883, 0x1.09daf961a23c2p-880, 0x1.a29214897da19p-565, 0.0, 0.0,
     0.0, 0.0, 0x1.190a62e3eb1cfp-439, 0.0, 0x1.3b125057d6609p-716, 0.0,
     0x1.8c5ad0f5b41f3p-471, 0.0, 0.0, 0x1.7acc3aa44dcbp-619, 0.0, 0.0,
     0x1.18ba57fd576fbp-858, 0.0, 0.0, 0x1.14bf5001d3ab1p-470, 0.0, 0.0,
     0x1.cf04016aa57f5p-149, 0.0, 0.0, 0.0, 0.0, 0x1.bc038f2b0aee8p-277,
     0x1.fba25c6a961f4p-476, 0.0, 0.0, 0x1.86dc1f55dd0e6p-748, 0.0, 0.0, 0.0,
     0x1.a2f1b216b73f3p-490, 0x1.ff24639d1484dp-886, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1187713e16fb6p-982, 0.0, 0x1.4c8ca83847088p-547, 0x1.b564ccc743c15p-981, 0.0,
     0x1.c3f7e71507c88p-744, 0.0, 0.0, 0.0, 0x1.159bb0f05cc61p-184, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7daeca9983a6p-83, 0.0, 0x1.47e9a2a11f7dfp-617,
     0x1.10d93a55e7d6dp-478, 0.0, 0x1.6febfb435ac2bp-305, 0x1.6d4d9eacd70cfp-631,
     0x1.824e571bfeb3p-45, 0x1.9f869b9ae323ep-3, 0.0, 0.0, 0.0, 0.0,
     0x1.6ff99cbbc8b2cp-679, 0x1.efa444c6ccc89p-5, 0x1p0, 0.0, 0.0,
     0x1.3f81a7b817f45p-530, 0x1.e0e49e4321949p-236, 0.0, 0.0, 0.0,
     0x1.2e887adf9c6d1p-935, 0x1.fba35ca5c443dp-185, 0.0, 0.0, 0x1.1fd1c64fa32cp-805,
     0x1.90fbbc29a9bb6p-182, 0x1.1aa9ad1c6e5cp-1021, 0x1.4e37ead7432bfp-170,
     0x1.0351cc7e85832p-92, 0x1.b118808fa3afcp-659, 0x1.26dd0cb4e528dp-407,
     0x1.fea6b95a7dde5p-312, 0.0, 0.0, 0.0, 0x1.c9538ec6ffd09p-691,
     0x1.cd5f64e01030dp-589, 0x1.af96bcf320b45p-671, 0x1.60aba0a64c5fep-291,
     0x1.e07054309c0d9p-923, 0x1.a8f96c7e5ca53p-825, 0x1.aaa93dfe03473p-1008, 0.0,
     0.0, 0x1.097c86b54cd6ap-100, 0x1.b7e4805fc227dp-930, 0.0, 0.0,
     0x1.7ed88e839df57p-32, 0x1.1dc22d5cc34fp-126, 0x1.e2a25a3e66f74p-216,
     0x1.4f18933e0f747p-508, 0x1.280a282ad8b02p-145, 0x1.e34be9086edb7p-483, 0.0,
     0x1.f3d98165e6d4ap-864, 0x1.225a5b034bec9p-922, 0x1.b4b90130076b1p-230, 0.0, 0.0,
     0x1.de130246fd3ecp-896, 0.0, 0.0, 0x1.729b5ffa12368p-316, 0x1.feca9067e078p-123,
     0x1.954251dd68c74p-631, 0.0, 0x1.d9c0d7bcade97p-61, 0x1.1d21cda34f514p-647, 0.0,
     0x1.8d6234a2982d8p-665, 0.0, 0.0, 0x1.0ab9693696637p-372, 0x1.0d6384c670efdp-859,
     0x1.6984cea496a4fp-432, 0x1.be74221665acap-244, 0x1.8ca540014da1ap-197,
     0x1.77c4cdc31b7fap-310, 0.0, 0x1.46c1997e725dfp-1018, 0x1.c4aefeb48bec5p-963,
     0.0, 0.0, 0x1.c96bbbb8892cap-193, 0.0, 0.0, 0.0, 0x1.3417d4db50ec1p-89,
     0x1.f0282ef55163bp-615, 0x1.480038102b3a6p-979, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1f49319f3afc6p-619, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.165d75b66ff6dp-134, 0.0,
     0x1.d232a6ff6220ep-679, 0.0, 0x1.60cbbf74b5545p-561, 0.0, 0.0, 0.0,
     0x1.df2096116df62p-807, 0.0, 0x1.a4827f3a5c063p-496, 0x1.8ef1685369deep-367, 0.0,
     0.0, 0x1.ecf30f82e51a8p-359, 0.0, 0x1.69b45fcdfe2dp-334, 0.0,
     0x1.033c0d8b2f105p-74, 0.0, 0x1.075e6bd8f619dp-9, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9fd460d25653p-104, 0.0, 0.0, 0x1.13b97a09422a2p-278, 0x1.cf8fdab3c39a7p-903,
     0x1.9acbbd5f0139dp-402, 0.0, 0x1.3cd24d705666ap-291, 0x1.38efa297f1b8bp-954,
     0x1.1ab83b3a37f11p-405, 0x1.361718e2b5d97p-392, 0x1.c853fdf3e14abp-69,
     0x1.cd7faf6dedea1p-608, 0x1.dcedbdf6148aep-465, 0x1.322e0ff08c7ccp-808, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5039d4ac7422fp-119, 0.0, 0x1.d3847cb861cd9p-391,
     0x1.5dbcdc6f7266fp-224, 0.0, 0x1.ec2ee6e113943p-425, 0.0, 0.0,
     0x1.cb5d440075b84p-925, 0x1.54cdcd50439c8p-361, 0.0, 0.0, 0.0,
     0x1.2cf77c1c35659p-177, 0.0, 0.0, 0.0, 0.0, 0x1.0ff752a052da6p-110,
     0x1.4e10f15897bap-763, 0.0, 0x1.ea138df1a623p-174, 0.0, 0x1.3295290a8529cp-572,
     0x1.fffc2eb989c7cp-500, 0.0, 0.0, 0x1.3fb4260b400c7p-776, 0.0, 0.0, 0.0, 0.0,
     0x1.c9a227d814c98p-976, 0.0, 0x1.b7ead2e4c93cbp-681, 0.0, 0.0,
     0x1.72315236cc65dp-153, 0.0, 0x1.1728653b7e1acp-361, 0.0, 0.0,
     0x1.a1c55977c3d6dp-310, 0.0, 0.0, 0.0, 0x1.e5d4e77ff7b87p-719, 0.0,
     0x1.f92aa061ea544p-497, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5fcb9aca2d18p-11, 0.0, 0.0,
     0.0, 0x1.b7d0634937ea1p-771, 0x1.5da816181a54ep-464, 0x1.b03aba09daee6p-690,
     0x1.669105998e389p-236, 0x1.3149e246f9884p-455, 0.0, 0.0, 0x1.e9a894f7af351p-316,
     0.0, 0x1.cd877dc86d60bp-938, 0x1.84c6b59c6a1a3p-882, 0.0, 0x1.09556ae6b6414p-797,
     0x1.bf5a1857f856ep-766, 0x1.9d38f5c108613p-440, 0x1.89c1765c3ec85p-581,
     0x1.6095a86bbf7fcp-187, 0x1.86b916ae00d71p-332, 0x1.063b131ef668ep-709, 0.0,
     0x1.daded782dabcep-320, 0.0, 0x1.c1b29056a204cp-231, 0x1.e09aa6e797c0bp-624, 0.0,
     0x1.db88892e7f8fp-1000, 0x1.28700a34bf0e7p-758, 0x1.240fb9f66e63bp-875,
     0x1.f6a59644287fep-843, 0x1.e121ae43c4833p-818, 0x1.51305398d10ccp-278, 0.0, 0.0,
     0x1.d7297d2704555p-332, 0.0, 0.0, 0x1.61e971fce6f4cp-180, 0x1.c5331a54cc446p-541,
     0.0, 0x1.c14949fe8ea05p-694, 0x1.e93bddfd7daccp-49, 0x1.08f2f54391e3fp-192, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bd2a53b769611p-950, 0.0, 0.0, 0.0, 0.0,
     0x1.b7da11e23f9a4p-245, 0x1.1d02bfbfe7785p-636, 0.0, 0x1.6683570a24e6p-76,
     0x1.b19cff6a981d7p-274, 0x1.dce3e9cbb395p-245, 0.0, 0x1.d0c18d8db1a91p-665, 0.0,
     0.0, 0x1.62480e3b62953p-281, 0.0, 0x1.1fafb48cb71ap-149, 0.0,
     0x1.f5bf461ee3005p-599, 0.0, 0.0, 0.0, 0x1.6c4f87f98cf2ap-163,
     0x1.6d7b89630356fp-91, 0.0, 0.0, 0x1.3ddf7a34e2547p-171, 0x1.cdf0b27498b45p-190,
     0.0, 0.0, 0x1.70414057f092bp-863, 0x1.b9e3b820c17e9p-1006, 0.0,
     0x1.fb515e9437ef2p-40, 0.0, 0x1.b769ab0a5d9c6p-31, 0.0, 0.0,
     0x1.eaf6e23be105dp-613, 0.0, 0x1.ef4c91695d055p-14, 0.0, 0.0, 0.0, 0.0,
     0x1.be65b94ceb90dp-25, 0.0, 0.0, 0x1.c5b308b8f1c7bp-377, 0.0,
     0x1.e78f6edecf716p-654, 0x1.c71e682a13f79p-1015, 0x1.4d4470c26aea2p-765,
     0x1.17bab24022146p-249, 0x1.c55864c82e677p-386, 0.0, 0.0, 0.0,
     0x1.a0994fca8a65cp-875, 0.0, 0.0, 0x1.6df591dedc1a6p-306, 0.0, 0.0, 0.0,
     0x1.d18c3d96ab264p-1019, 0x1.1049fd1620f74p-452, 0.0, 0x1.dc06a9dde7151p-677,
     0.0, 0x1.ce67954811b39p-914, 0x1.989c5c8220b6bp-507, 0x1.301593d212bffp-108, 0.0,
     0.0, 0x1.ea1e0e54780d1p-250, 0.0, 0.0, 0.0, 0x1.0deda9f1a571dp-657, 0.0, 0.0,
     0.0, 0.0, 0x1.e0943a84440ep-487, 0x1.98bf23c5d788p-134, 0x1.5f37e4855e517p-487,
     0.0, 0x1.b2c25a546d1cdp-89, 0.0, 0.0, 0.0, 0x1.c957c812a5e6dp-532, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b8805c2eb76cep-582, 0.0, 0x1.7ab9eb327d5bdp-65, 0.0,
     0x1.5218fd4965e3cp-128, 0x1.ec4de63d88ae7p-596, 0x1.21aec137b072ep-902,
     0x1.2e623e741f4p-479, 0.0, 0x1.aa9c0bf2aa8cap-644, 0.0, 0x1.cab0a07fff838p-192,
     0.0, 0x1.3782e8bbc8a05p-450, 0x1.65ddb2bd5a204p-305, 0.0, 0.0, 0.0,
     0x1.d1fbf25cd1fcfp-34, 0.0, 0x1.6a56b89561f1p-78, 0x1.847fc0727facfp-314,
     0x1.c963a19b195d3p-698, 0.0, 0x1.a588f2758042cp-380, 0.0, 0x1.7c4af878ff7dap-925,
     0x1.0916848cb80a7p-593, 0.0, 0x1.54c2bbf8243dep-1017, 0x1.415fe8bc41a2fp-102,
     0x1.d34e6fedd61aep-708, 0x1.824aa7c11d5ccp-203, 0x1.5ce0e34ddec36p-991,
     0x1.8ecff30faac8bp-284, 0x1.207ecfb99b3bdp-670, 0.0, 0x1.9fbb08b9a851dp-545,
     0x1.bf8c069a9b5c3p-909, 0.0, 0x1.e26f745ac621p-772, 0x1.9ed4a50bb132dp-291, 0.0,
     0.0, 0x1.715bcd045bc28p-344, 0.0, 0x1.3bc7a2ab87219p-422, 0.0,
     0x1.cf789b1a791c6p-990, 0.0, 0x1.a3834797afe02p-677, 0.0, 0x1.2a6d74fb58eb2p-694,
     0.0, 0x1.4bc9608ec6814p-687, 0.0, 0.0, 0.0, 0x1.2c62776127702p-975, 0.0,
     0x1.7e1083245654fp-799, 0.0, 0.0, 0x1.e1eccff8cb6e7p-970, 0x1.af153ab8933ap-500,
     0x1.0d40c9e2277bfp-71, 0x1.cf7628638d99fp-581, 0x1.3eedbf1baa19bp-184,
     0x1.52b118978da8cp-849, 0x1.ffc81f5d2c5d4p-267, 0x1.57ae4b581ffe1p-11, 0.0,
     0x1.1aa2e4bd5e88dp-548, 0x1.a6f417902a004p-387, 0x1.ae36097c9bd0fp-886,
     0x1.2b836247a9b6ep-52, 0x1.2145daf983258p-28, 0.0, 0.0, 0.0, 0.0,
     0x1.76109a38ffe9ep-630, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e69b5c838c0ep-756, 0x1.30ec1bcc1f90fp-202, 0x1.575c5bf3aba24p-535,
     0x1.506c915d2962cp-826, 0x1.9c2f1468f4469p-214, 0.0, 0.0, 0x1.28deedb36d817p-480,
     0.0, 0.0, 0.0, 0x1.3d6bd77545cf7p-130, 0.0, 0x1.0ad4a36f898cbp-714,
     0x1.1e177b9095c03p-1020, 0.0, 0.0, 0x1.640eb68ae1293p-682, 0.0,
     0x1.31bf95509fe86p-712, 0x1.9316144575823p-568, 0.0, 0x1.7f64a44ed99c6p-631, 0.0,
     0.0, 0.0, 0.0, 0x1.8cab77ab047a7p-851, 0.0, 0.0, 0.0, 0x1.3ef5da14a3c7bp-855,
     0.0, 0x1.9603b567ae75ap-144, 0x1.6f3190845e294p-76, 0.0, 0x1.4efee4f061f63p-593,
     0x1.fae20bfd7f21ep-526, 0.0, 0x1.cd053748469b4p-22, 0.0, 0.0,
     0x1.18371c8765e76p-592, 0x1.3730aeee7b36p-128, 0.0, 0x1.ef7371d988f06p-435,
     0x1.ad8f811c0f958p-980, 0x1.600e99de0f39ap-390, 0.0, 0x1.7de2b19471de7p-256,
     0x1.09fdf65508223p-890, 0.0, 0.0, 0x1.c90db0f39ebcep-11, 0.0,
     0x1.10172d44e261p-758, 0x1.673329ff8fee1p-222, 0x1.297670cf6eddap-68,
     0x1.3b2dcd3518d19p-378, 0.0, 0x1.14427682ef7fap-362, 0x1.ad89edfb9405bp-522, 0.0,
     0.0, 0.0, 0x1.d2231f4df09fdp-865, 0.0, 0.0, 0x1.a929fae71076cp-145, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90bc96ba7365bp-385, 0.0, 0x1.b3374df396b23p-974,
     0x1.c9452fd336e96p-257, 0.0, 0x1.6a5bd98949bd1p-325, 0x1.8ca2d60a269e3p-602, 0.0,
     0.0, 0x1.7ef524a78aff6p-28, 0.0, 0.0, 0x1.b952315283cc1p-945, 0.0,
     0x1.34961c155d10dp-123, 0.0, 0x1.cdaa15a761bdfp-472, 0x1.601fc8f1ae183p-214,
     0x1.65afb4154ca85p-628, 0x1.5e80d5eb384bep-528, 0.0, 0.0, 0x1.a258c91096854p-974,
     0.0, 0x1.67b828c090991p-709, 0x1.0f16a00115f4bp-171, 0x1.e28a37e7933fep-306, 0.0,
     0.0, 0x1.ffc8071e9bfc8p-797, 0.0, 0x1.c7a16aa59eb09p-84, 0.0,
     0x1.ea9abf64da899p-581, 0.0, 0x1.64901bc8bdee1p-217, 0x1.4693005ba98b7p-682, 0.0,
     0.0, 0.0, 0x1.2df90c218c4efp-246, 0.0, 0.0, 0x1.0ec41054e2c76p-777, 0.0,
     0x1.303c377d419bdp-320, 0x1.d171877829b2bp-389, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d35e52af2c66dp-236, 0x1.2ad1c48763ac4p-839, 0.0, 0x1.eaf70b4fa04dbp-258,
     0x1.e215bb60e21fap-709, 0x1.3dc1883111291p-526, 0.0, 0.0, 0x1.913da06d69bbep-346,
     0x1.499a63f983bf3p-723, 0.0, 0.0, 0x1.a82b00a84c7b6p-313, 0.0,
     0x1.a7a088c7e7ddcp-273, 0x1.3f7b5b49bea08p-639, 0.0, 0x1.24919def9892fp-812,
     0x1.6de92f8c7d38bp-290, 0.0, 0.0, 0x1.5feba516e84f1p-453, 0.0,
     0x1.7e0f4057f82acp-627, 0.0, 0x1.31695717a3d2cp-467, 0x1.95b3deb5d8cd2p-391,
     0x1.b99e33289b45ep-955, 0x1.0d23d850242aep-85, 0x1.f7e2ed91c91e6p-383,
     0x1.9e6c62df6ce54p-373, 0.0, 0.0, 0x1.8798acc18f4afp-375, 0.0, 0.0,
     0x1.cce2cb6b16923p-793, 0.0, 0x1.bbcc211620cd7p-478, 0.0, 0x1.268d4aaaccb65p-529,
     0x1.a6e9dc8fe5217p-589, 0.0, 0.0, 0.0, 0x1.ecd23cde70e25p-573, 0.0,
     0x1.97a60e20ce10dp-423, 0x1.9dbaf3604733ep-86, 0x1.e62b29386948ep-959,
     0x1.94703c055a3b3p-351, 0.0, 0.0, 0x1.572c90e7e640ep-845, 0.0, 0.0,
     0x1.0c6778a0e6d51p-821, 0.0, 0.0, 0x1.a2bbd2a3e7c58p-455, 0.0,
     0x1.8ea07286b23dep-75, 0x1.3008f83eafaf6p-820, 0x1.3839d82888211p-329, 0.0, 0.0,
     0.0, 0.0, 0x1.6f3d700d34bb3p-997, 0.0, 0.0, 0.0, 0x1.49f99bb91d437p-757,
     0x1.ff09da8bb1663p-741, 0.0, 0x1.cce3c365a67bap-815, 0x1.0fdd318c5e8b6p-658,
     0x1.1e9396f5627b8p-741, 0x1.59df8a29e474ap-836, 0.0, 0.0, 0.0,
     0x1.6d66611928bf8p-212, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c3f3ba62de2ep-92, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6823d2ac2d06cp-553,
     0x1.d70a57c9dc90ep-451, 0x1.7409cc096fa77p-244, 0x1.fee47d6cd508ap-875,
     0x1.c426b43058f85p-482, 0.0, 0.0, 0x1.fa310f4721555p-2, 0x1.755d936bcd4c3p-87,
     0x1.35e7d82acd059p-244, 0.0, 0.0, 0x1.08beca59490cdp-145, 0x1.0fae2814f9a48p-329,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a49fe95fb1ddp-726, 0.0,
     0x1.614ab3c7ec54dp-634, 0.0, 0.0, 0x1.07c53efd85524p-352, 0.0, 0.0, 0.0, 0.0,
     0x1.e862ff8f6c895p-566, 0x1.0c6c6dee7577ep-1013, 0.0, 0.0,
     0x1.fba247d066813p-719, 0x1.d22c292e429f6p-395, 0x1.5ca37e943e3bap-383,
     0x1.3a5450a7dc6c3p-397, 0x1.32fcd35a8aaf8p-130, 0.0, 0.0, 0.0,
     0x1.d5a46db86f253p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.573cc721a9e06p-499, 0x1.4c948108ae7ffp-766, 0.0, 0.0, 0x1.166355b489d84p-172,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a1a2cc44ae52p-124,
     0x1.1854977a1e757p-303, 0x1.cc9b17b10602cp-407, 0x1.44c4759c4e6dfp-344, 0.0,
     0x1.80ce64e89d313p-949, 0.0, 0.0, 0x1.0ab107dc2f073p-721, 0x1.a05f9f18d17c2p-408,
     0.0, 0.0, 0x1.6cb1a6aa00e85p-28, 0.0, 0x1.48a9322dc966ap-18,
     0x1.a391fd0993f7fp-941, 0x1.a8e53b33c29b7p-941, 0x1.b0a9687758b96p-488, 0.0, 0.0,
     0.0, 0x1.b1c1cbb56969fp-454, 0x1.f0a1f6dcf86a2p-877, 0x1.e9a88747456bbp-509, 0.0,
     0.0, 0.0, 0x1.8afa0885da375p-204, 0.0, 0x1.96e369901d7fbp-406, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_acosd2_u35kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_acosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_acosd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
