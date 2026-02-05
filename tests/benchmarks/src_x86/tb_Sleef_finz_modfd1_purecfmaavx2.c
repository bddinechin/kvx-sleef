/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_modfd1_purecfma.c --function \
 *     Sleef_finz_modfd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.ede6574edf1b3p-585, 0.0, 0.0, 0x1.3967c2ef1575p-277,
     0x1.9dd25a1dee8f3p-325, 0x1.562be1035b5edp-23, 0x1.057ea4eb46b3cp-220,
     0x1.1b8db8903c672p-121, 0x1.c061df211530ap-391, 0x1.65a36b781c0cfp-248,
     0x1.4df043c378481p-520, 0.0, 0.0, 0x1.dca19f51d0f1cp-234, 0.0, 0.0,
     0x1.cfb4309d01123p-83, 0.0, 0x1.060b252b09d38p-339, 0x1.b86aa95ce05cap-822,
     0x1.5e8c319a89042p-546, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78226386a7514p-365, 0.0,
     0.0, 0.0, 0x1.6bfc13c1e649ap-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.21feef1a3f21p-280,
     0.0, 0.0, 0.0, 0x1.5a809e915cfa6p-798, 0.0, 0.0, 0.0, 0.0,
     0x1.b41afa9f0708ep-395, 0.0, 0x1.5b6286ca59fe8p-358, 0x1.dd9e6ab7de93p-534, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5157845604597p-209, 0.0, 0.0, 0.0, 0.0,
     0x1.e3646433dbbfdp-596, 0x1.06e7db9566847p-376, 0.0, 0x1.bbc62858abd9bp-957, 0.0,
     0.0, 0.0, 0.0, 0x1.d1c26a824dc56p-8, 0x1.c3b127812583bp-137, 0.0,
     0x1.83bb6bc506f67p-922, 0.0, 0x1.e131761fe7754p-587, 0.0, 0.0, 0.0, 0.0,
     0x1.b648122a617dp-617, 0x1.5061f9f0a7bb3p-713, 0.0, 0x1.b9fd268640527p-710,
     0x1.cff852f3d154fp-38, 0.0, 0x1.941f76694d68ep-714, 0.0, 0x1.758b5cada74cfp-932,
     0.0, 0x1.12d400957a81bp-14, 0x1.10899d3f30c1ap-800, 0x1.dc37c88ba30bap-168, 0.0,
     0x1.ba0c5d9f025efp-427, 0x1.82eb001e5335dp-50, 0x1.8fc08e2f7d908p-389, 0.0, 0.0,
     0x1.688fa24f2af44p-874, 0x1.722d60dc332dbp-513, 0x1.5ae3ffea26743p-652, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.604bcbe767706p-735, 0.0, 0.0, 0x1.bcb3014aaf2d8p-939,
     0x1.7ef6a3d6b16b8p-219, 0x1.91907e9c1817bp-79, 0x1.4729c905946c7p-406, 0.0,
     0x1.f67d9870c476fp-142, 0.0, 0x1.0b51a05e6e234p-393, 0.0, 0.0,
     0x1.a073f149f3926p-123, 0.0, 0x1.28b949b355137p-429, 0x1.a8bd0ad35f979p-653,
     0x1.46ada5ca46238p-886, 0x1.a1ec2d72bd41dp-937, 0.0, 0.0, 0.0,
     0x1.4f4d7d8539f7p-339, 0x1.89eb8d7bb219dp-446, 0x1.df84f4ff75b4ap-860, 0.0,
     0x1.8fc607d91e084p-1003, 0x1.4a61aca18590cp-70, 0.0, 0.0, 0.0, 0.0,
     0x1.0cea4420f027fp-40, 0.0, 0.0, 0.0, 0x1.3265c1c9f5b6ap-612, 0.0,
     0x1.cc09ffcca6d07p-929, 0x1.14d5e6e35f1a6p-1022, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caac08eeb2478p-413, 0x1.10531336eb067p-814, 0.0, 0x1.239103593390ep-711,
     0x1.ba3375c97342cp-843, 0.0, 0x1.54448135888e8p-783, 0.0, 0x1.7c9bb8b5389fep-512,
     0.0, 0x1.be1aa76614682p-840, 0.0, 0x1.866595568fe4ap-132, 0x1.6a2b8edede5c8p-586,
     0.0, 0.0, 0.0, 0x1.92eded49c51a9p-501, 0.0, 0.0, 0.0, 0.0,
     0x1.16ea7f9315c92p-264, 0.0, 0x1.db307b5c1999fp-82, 0.0, 0.0, 0.0,
     0x1.9485098f77e78p-554, 0.0, 0.0, 0x1.34600770e707ap-295, 0x1.cbeb2be4b9a5p-210,
     0x1.52ef44e30bd85p-836, 0.0, 0.0, 0x1.3ae5adf64008fp-884, 0x1.4c43e78ef32efp-25,
     0.0, 0x1.8e3ba70265459p-932, 0x1.50bb0c5c8c485p-824, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cab82b814dd7bp-809, 0x1.c420f2d54e661p-389, 0.0, 0.0, 0.0,
     0x1.d37c7e8b07ad1p-219, 0.0, 0.0, 0x1.7dca2c22e064fp-980,
     0x1.ccbd51f30e293p-1010, 0x1.eaff4c9b9d462p-253, 0.0, 0x1.292a21f731348p-767,
     0.0, 0.0, 0.0, 0.0, 0x1.a6cf8e53bef5ap-263, 0x1.5535747467cdp-200, 0.0,
     0x1.a7034960f8cf6p-635, 0.0, 0x1.69fd557a37915p-486, 0x1.a846121664b49p-664,
     0x1.584bceb59c898p-843, 0x1.02128be5d84c1p-464, 0x1.2e55bc144667p-105,
     0x1.5c4ddbd0c178dp-140, 0.0, 0x1.acc20bab61e32p-528, 0.0, 0.0, 0.0,
     0x1.efe9aaa33ce25p-511, 0x1.7af9948f8452fp-486, 0x1.7c966d639b88ep-135,
     0x1.83785f111387fp-454, 0.0, 0x1.ee8d30071646ep-826, 0x1.50798b53815f9p-666,
     0x1.431a2e0b7d3bap-732, 0.0, 0.0, 0.0, 0x1.bb5e3c3046af9p-445,
     0x1.a3c18877b9809p-225, 0.0, 0x1.0bbd950b5755ep-868, 0x1.2892c403fe01dp-995, 0.0,
     0x1.2bdd07b961872p-7, 0x1.a3abd244cbb07p-940, 0x1.377859399c0d3p-190,
     0x1.d157a14551beep-412, 0x1.3b8ee70ff72d1p-111, 0.0, 0x1.ef58f202e9faep-69, 0.0,
     0x1.c636212de00abp-913, 0x1.8d9c84251cf48p-1007, 0.0, 0x1.bbae3db3254bbp-845,
     0.0, 0x1.725d111d05f05p-794, 0x1.4667ecde808c2p-620, 0x1.e37563e716a6ep-822,
     0x1.d55d7ad62bad8p-581, 0.0, 0.0, 0.0, 0x1.4df3ea477ed8bp-262, 0.0, 0.0,
     0x1.efe8af126520ap-136, 0.0, 0x1.d35525519eb67p-82, 0.0, 0.0,
     0x1.f159dda2de5ddp-892, 0x1.bd5a4fcbf639ep-925, 0x1.a5acb69265b1cp-630,
     0x1.ab151bf8e11b1p-660, 0x1.906da595e4b41p-946, 0x1.12fb39813f514p-4,
     0x1.fd84fa80c54fbp-736, 0x1.9ab0ff5cc3e7ap-808, 0x1.fcaf36e9b01dp-205,
     0x1.016ef1ce13d4cp-294, 0.0, 0.0, 0x1.1c592c61b983ep-205, 0x1.c4b8619188baap-67,
     0x1.6571ad6c6f425p-130, 0.0, 0.0, 0.0, 0x1.5d3b7a301207p-161,
     0x1.9794c2024f1c5p-998, 0.0, 0x1.f1ab570fb1bf2p-698, 0.0, 0.0,
     0x1.f1b43d397ccfcp-753, 0x1.43a8541be6448p-192, 0.0, 0x1.d4e9117510f31p-315, 0.0,
     0x1.c9e1ca0e66f12p-801, 0x1.e94aa31c42db7p-684, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c22268d3c318ep-154, 0.0, 0.0, 0.0, 0x1.51a051ef51596p-589, 0.0,
     0x1.146045a17972bp-646, 0x1.59544531e6d6dp-894, 0.0, 0.0, 0x1.ed6ce9a97356bp-551,
     0x1.e559e963982ddp-790, 0.0, 0.0, 0x1.656f68640a36dp-461, 0.0, 0.0, 0.0,
     0x1.160cfcceec411p-90, 0x1.be20e6c0ac3a8p-757, 0x1.c85ebf52b05a3p-634,
     0x1.66549136f6191p-590, 0x1.9263e3662fd12p-957, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6146cfc014cb8p-403, 0.0, 0x1.70f687ba15ee9p-64, 0.0, 0x1.aaa1d6987e47cp-216,
     0x1.7b0a4fe9fa87p-303, 0.0, 0x1.5ecd83e7304f8p-329, 0.0, 0.0, 0.0, 0.0,
     0x1.433e695b4636cp-252, 0.0, 0.0, 0.0, 0.0, 0x1.a2148141c15e4p-516, 0.0, 0.0,
     0.0, 0.0, 0x1.04c5d6d3420a8p-780, 0.0, 0.0, 0x1.05862826e1c84p-109,
     0x1.bfcf605086b3p-390, 0.0, 0.0, 0x1.a77adcf9eb17ap-396, 0.0,
     0x1.d88252570639ap-462, 0x1.82c218dc5bbd6p-428, 0x1.8ce832e6fc321p-373, 0.0, 0.0,
     0.0, 0x1.cdf0178867af7p-198, 0x1.f6a0aab65e6f5p-455, 0x1.d3b8de6c5492ap-319,
     0x1.cd7f9d0ba3a18p-615, 0.0, 0.0, 0x1.3e64e4eb9c6f2p-484, 0x1.d3462260150bfp-819,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9e7cb2aed8ebp-340, 0.0, 0.0, 0.0,
     0x1.523c5c6151f3fp-597, 0x1.17a819f5c8b7ap-548, 0x1.cf03d09ca094p-576,
     0x1.3697d2beb7d8cp-855, 0x1.d5e3b694a8508p-755, 0.0, 0.0, 0.0,
     0x1.65c420f4ca909p-94, 0.0, 0x1.70fe628297dcbp-27, 0x1.f0c5f7063b70cp-1022, 0.0,
     0x1.360c2d153f5dp-1020, 0x1.5bf862b251ed6p-370, 0x1.3578c54c8edbap-556, 0.0, 0.0,
     0x1.316445ffcb2bfp-112, 0.0, 0x1.c17d9c1062b31p-963, 0.0, 0.0, 0.0, 0.0,
     0x1.ab354b83f5f42p-212, 0.0, 0x1.ded1c2c086516p-400, 0.0, 0x1.2d341a150a1c3p-64,
     0x1.9b95dd6898db1p-256, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc0c86352bd93p-730, 0.0, 0x1.d565504feeb29p-679, 0.0, 0.0,
     0x1.4fa78e4b7081cp-924, 0x1.2639bb1218164p-604, 0.0, 0x1.63d857377150bp-886,
     0x1.c289ea43e0b07p-972, 0.0, 0.0, 0x1.3b345f098085p-591, 0.0,
     0x1.da634f236c9c3p-464, 0x1.e2dbaa1c6691p-319, 0.0, 0.0, 0x1.58241c3ac9f42p-226,
     0.0, 0x1.fecf7a9ebd8c9p-909, 0x1.9bea8c290351fp-573, 0.0, 0x1.a83f5a8430eaep-732,
     0x1.765bd3d0eb2bap-822, 0x1.5d149537d1a54p-504, 0.0, 0x1.e088bc423b08cp-49, 0.0,
     0x1.cf6121fe56668p-365, 0x1.395229ffc5d39p-240, 0x1.e4eb90641676fp-343,
     0x1.00241de5529bdp-47, 0x1.af35ac744feefp-512, 0.0, 0.0, 0.0,
     0x1.1109080cf3603p-465, 0.0, 0x1.d4bf1de83db48p-162, 0x1.a1ed76c90a7b6p-507,
     0x1.3957f7bc36f8ep-814, 0x1.24bddbf3bd636p-184, 0x1.818c1eadcd5d8p-329, 0.0,
     0x1.12c68487a0264p-1003, 0x1.76e9247e1d36ap-639, 0.0, 0x1.a089367df4b4cp-358,
     0.0, 0.0, 0x1.ea5fde05aa12bp-197, 0x1.c33c3ce853cd9p-4, 0.0,
     0x1.8678097ae3534p-944, 0x1.e14c5f1ee242dp-795, 0x1.63ebe22fe46f7p-40, 0.0, 0.0,
     0x1.14729bcd7f512p-822, 0x1.0ca96f8f242aap-1002, 0x1.1c2d0d8af324ep-233,
     0x1.51de1cd6727ebp-256, 0x1.3280f28a50c71p-343, 0.0, 0.0, 0.0,
     0x1.c195905750e0cp-624, 0x1.1a075c564510ep-685, 0.0, 0x1.c993aac7329p-44,
     0x1.b97e5baa9a238p-15, 0x1.90edd25adfdfcp-280, 0x1.a8e3724403cc5p-653, 0.0,
     0x1.202c82805f9c6p-294, 0.0, 0.0, 0x1.04737b6cc5ef7p-595, 0x1.742a49ee7a6f8p-614,
     0x1.6045341d500fp-131, 0x1.b5280614e5b05p-255, 0x1.2970476e46032p-808, 0.0,
     0x1.75dc649a21266p-635, 0.0, 0.0, 0x1.fe6dd809037f2p-516, 0.0,
     0x1.fd54bb9ac3f19p-350, 0x1.c13137aadf28ap-830, 0.0, 0x1.18a71c6b10175p-716,
     0x1.12fe8420a2684p-812, 0.0, 0.0, 0x1.d305ede65571ep-190, 0x1.cf2b1bdc17a38p-383,
     0.0, 0.0, 0x1.4f5d4098087b5p-612, 0.0, 0x1.f4f82a23b8acep-27, 0.0,
     0x1.edf568680860ap-708, 0.0, 0x1.196f1b6c62537p-444, 0x1.f20a2045c821fp-626,
     0x1.a65a6952184eap-525, 0x1.82863ad96848ep-317, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.30b2151b6327cp-423, 0.0, 0x1.ca5e6adeff15fp-465, 0x1.357686b0f6c7cp-440, 0.0,
     0x1.a4dc7495a4f8ap-465, 0x1.cd16d0b9617d4p-821, 0x1.9f54475e61ec2p-1002, 0.0,
     0x1.52875f0c2cf57p-386, 0.0, 0x1.95539eb65bfbp-646, 0x1.d002a79fb6164p-564, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.55dde580bf704p-909, 0x1.cf9774938cfc3p-352, 0.0, 0.0,
     0x1.3c924d7d2259ap-982, 0.0, 0x1.11b956a1a1d87p-423, 0x1.e565dfd7f741ep-254, 0.0,
     0.0, 0x1.ed487d97b963ap-45, 0.0, 0.0, 0.0, 0.0, 0x1.c83ccc56a0282p-741, 0.0, 0.0,
     0.0, 0x1.236851027214ep-811, 0.0, 0.0, 0x1.4e6a561f7d2f1p-123, 0.0,
     0x1.cae4da0a604aap-923, 0.0, 0x1.dbbdc3b3c8c8ep-563, 0x1.990301772867dp-436,
     0x1.a52c7a9a30fafp-657, 0x1.43b7fae97ab48p-715, 0.0, 0.0, 0x1.db39670f803e5p-362,
     0.0, 0x1.6276553c6c312p-94, 0.0, 0x1.073f71f90656bp-959, 0.0, 0.0, 0.0,
     0x1.dcdc6b60c9fefp-810, 0.0, 0.0, 0.0, 0x1.263b59bfd4e3cp-877,
     0x1.e1d51ea69f23dp-597, 0x1.3d5669026c70cp-470, 0x1.bf7c5b86312f5p-498, 0.0, 0.0,
     0.0, 0x1.ef8b42c3e5082p-11, 0.0, 0.0, 0.0, 0.0, 0x1.81f79661e0c14p-12, 0.0,
     0x1.7f30e4b1aeb07p-915, 0x1.0744f684bfd1fp-246, 0x1.2a9ce7cb7375cp-306, 0.0,
     0x1.0a2d4682ed51p-250, 0.0, 0.0, 0x1.98a146dc8745p-300, 0x1.4825394dfdb7cp-257,
     0x1.1f2c8b91c99b7p-865, 0.0, 0x1.8f49ae488f0eep-799, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.99f417c2412f6p-892, 0x1.de06ee120b3d7p-296, 0.0, 0x1.8f4cd350052a1p-617,
     0x1.3b7b694542666p-248, 0x1.6129be081b03cp-612, 0.0, 0x1.debf26e91841bp-588, 0.0,
     0.0, 0x1.4b9d17029f5f1p-62, 0.0, 0.0, 0x1.32160c3604622p-245, 0.0, 0.0,
     0x1.85a6bd4f372f4p-197, 0x1.6c353e3d09fc1p-914, 0x1.f5276086661e5p-133,
     0x1.d02882be218afp-220, 0.0, 0x1.397e1a5cb374fp-668, 0x1.8c8b7d8aa3675p-22, 0.0,
     0x1.92f9099de0dcfp-308, 0x1.97baf1655795fp-546, 0x1.b9d695fcfff94p-613,
     0x1.881d313ddbe59p-164, 0.0, 0.0, 0x1.e3fee9896f1b6p-570, 0.0, 0.0, 0.0, 0.0,
     0x1.9927590c93972p-226, 0.0, 0x1.f69705c5a2349p-268, 0.0, 0x1.4eb12ec4d9e79p-679,
     0x1.b042713d41f94p-385, 0x1.3a839535a2f3p-693, 0x1.a43a1d2c284d3p-48, 0.0,
     0x1.cd5bcaa551ab8p-258, 0x1.f6d6676989572p-290, 0x1.45dd7e15e8e12p-118,
     0x1.846b5b8c32044p-872, 0.0, 0x1.ebef2cd40f483p-402, 0x1.dcfd787a588edp-3,
     0x1.f0cc8c0bf219ep-916, 0x1.618822eb9774dp-476, 0.0, 0x1.8ee3ab662c93cp-820,
     0x1.f8769dcf895b5p-527, 0x1.cecabf011d23dp-786, 0x1.4d59611c5da05p-46,
     0x1.7282a3f44fd34p-334, 0x1.12c858639ceeap-159, 0.0, 0x1.3166ccfe6bc45p-758,
     0x1.7fa8879433ab7p-717, 0.0, 0x1.572c21c7e93fbp-219, 0x1.7ae7dd99b7bf2p-730, 0.0,
     0x1.b48f304694bep-1014, 0x1.5d1d8289f4a54p-951, 0x1.d2bacee405038p-446,
     0x1.ad4ab27214791p-501, 0x1.ab6e2b7fd4917p-744, 0.0, 0.0, 0x1.ad6e8527ce1b1p-486,
     0.0, 0x1.36b01d136a412p-721, 0x1.5c37a18f538c8p-967, 0.0, 0x1.074600865dca7p-928,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ff91ed5223d2p-641, 0x1.11a31933fde18p-386,
     0x1.66a74d371964fp-673, 0x1.5ae8766b838f3p-436, 0x1.36099693c4513p-529, 0.0, 0.0,
     0.0, 0x1.02e2ace30231p-777, 0.0, 0x1.0be4c2f7e5878p-814, 0.0, 0.0,
     0x1.6e966b0d890dp-383, 0x1.a1a4a8e14f9dep-832, 0x1.5e222e3e9d3ap-568,
     0x1.592ef488ad341p-47, 0x1.4a7ed98c008a9p-2, 0.0, 0.0, 0.0,
     0x1.40291fd934595p-546, 0.0, 0x1.6912a72dd8456p-959, 0.0, 0.0, 0.0,
     0x1.c701051ffa137p-685, 0x1.dc6eaac64f51ap-669, 0.0, 0x1.b4506133546a1p-977,
     0x1.f6c374e63a53dp-606, 0.0, 0x1.bb6158b50667ep-239, 0x1.0992d9627339p-197,
     0x1.863d1e7556306p-203, 0x1.ec8c39acd6cb4p-426, 0.0, 0x1.0f8f004926bb3p-947,
     0x1.4e021545f3027p-888, 0.0, 0.0, 0x1.67a39a85b4d48p-209, 0.0,
     0x1.37de82e7a9156p-378, 0.0, 0.0, 0.0, 0x1.d2f01460a895ap-374,
     0x1.3ad5f67197332p-721, 0x1.baa37680ba5a5p-296, 0x1.ab39bd96970a4p-636,
     0x1.12a4c9892e71dp-91, 0x1.b6ff10a281716p-887, 0x1.9dc348f3847ccp-576, 0.0,
     0x1.e2ae1246afee6p-649, 0x1.d71966ec258f4p-297, 0.0, 0.0, 0x1.23344e764b4e5p-113,
     0x1.9fb60dd14e586p-581, 0x1.f16a988f6b6adp-40, 0.0, 0x1.22a89225fdcc8p-671, 0.0,
     0x1.6583901242051p-429, 0x1.ab20015a5cb9ep-214, 0.0, 0.0, 0.0,
     0x1.9f4aacc8176e7p-792, 0x1.67465eafa150ep-505, 0x1.f0704e6961352p-835, 0.0,
     0x1.101343efee205p-397, 0.0, 0.0, 0x1.af178d5656191p-607, 0.0, 0.0,
     0x1.54f3266ce3818p-673, 0x1.fffeaec966f58p-567, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a32ac7176edd2p-956, 0.0, 0x1.7f39048491417p-944, 0x1.bb82c2e437ab3p-955,
     0x1.8eaa5aa6b7cc3p-370, 0.0, 0.0, 0x1.84e54899f46e6p-687, 0.0,
     0x1.850861f422121p-912, 0.0, 0.0, 0x1.510469993447cp-960, 0.0,
     0x1.36e23e922ff54p-544, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1eec1482edd02p-872,
     0x1.8e51ac114d972p-358, 0x1.0c46be8bbb37ap-39, 0.0, 0.0, 0.0, 0.0,
     0x1.c78e682bc1a6p-847, 0x1.c7bf5de5cfefap-276, 0x1.ad825109c5543p-845,
     0x1.da69a13fdf498p-255, 0x1.0a7cb92ef81b9p-838, 0.0, 0.0, 0.0,
     0x1.c1e448485f982p-461, 0.0, 0.0, 0.0, 0x1.1f269b27e4e99p-984, 0.0,
     0x1.64be568b676fbp-1, 0.0, 0.0, 0x1.372799423d5a9p-338, 0.0, 0.0,
     0x1.70aef1901b21ep-259, 0x1.606924cb6b1c6p-462, 0.0, 0.0, 0.0, 0.0,
     0x1.c874b51220a05p-276, 0x1.8592f993d966ep-654, 0.0, 0.0, 0.0, 0.0,
     0x1.8218fda008d1bp-375, 0.0, 0.0, 0x1.c86b76cd5901p-360, 0x1.822284dcea26fp-12,
     0x1.fb7ac6fc59fcp-1000, 0x1.74c39513ba159p-58, 0x1.85218216db893p-51, 0.0,
     0x1.8d36e888f50aep-942, 0x1.47be17656d144p-362, 0x1.7deabf2170dbfp-719, 0.0,
     0x1.842daa31cc692p-461, 0.0, 0x1.765ca320efce7p-844, 0.0, 0x1.be3c86e1eb79fp-874,
     0x1.14a113dc141b4p-953, 0x1.311cd57216981p-861, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79d308b0a6c32p-994, 0x1.f1f806b40e8aap-908, 0.0, 0.0, 0.0,
     0x1.d9bf140648177p-799, 0x1.35ad669c17d7bp-786, 0.0, 0x1.44f8fab8ecda2p-280, 0.0,
     0.0, 0x1.24dfea5735c0cp-577, 0x1.1d8ac0d3a3504p-858, 0.0, 0x1.0b86adb250f87p-913,
     0.0, 0x1.6f558e6029086p-175, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.39bb1dbdfda4ep-468, 0x1.98c311678a2d6p-816, 0x1.d421bf66ca4bap-268,
     0x1.1669679f5dafdp-233, 0.0, 0x1.c6bef97315e8fp-373, 0.0, 0x1.16389df4d9d52p-675,
     0x1.35164d2949363p-935, 0x1.4683e0e34b503p-779, 0.0, 0x1.a06e19090f351p-703, 0.0,
     0x1.a0fb39fb1b5f9p-717, 0.0, 0x1.1bf6900f5da2p-46, 0x1.4a31e8160e742p-367, 0.0,
     0.0, 0x1.7c82d8f329af1p-830, 0x1.114cd07b03b1p-890, 0x1.ae36c9275246p-705, 0.0,
     0x1.b520eca107fb7p-810, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.04b893090bc59p-739,
     0x1.9c559a130ac14p-79, 0x1.813d45335f161p-168, 0x1.beb71a1e8da8p-1019,
     0x1.2336e52d8c9d5p-700, 0x1.748e2ebe8a9f8p-407, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f2d0a6b24c0dep-524, 0.0, 0x1.3c879dcf08961p-865,
     0x1.9027fcc08a44bp-964, 0.0, 0.0, 0x1.6a326c199267dp-532, 0.0, 0.0,
     0x1.fbb18a4d0b685p-609, 0x1.38e3d618afda3p-347, 0x1.e3eafbc71daeap-184, 0.0, 0.0,
     0x1.4ad3aabb747d1p-843, 0x1.3848acf71f391p-409, 0.0, 0x1.8515a4bbe1f5ap-873,
     0x1.77cb4dfae321ap-164, 0x1.6aab5653feb74p-101, 0.0, 0x1.a612de4802481p-631, 0.0,
     0x1.7280c951bc67dp-424, 0x1.57ae7d1e667a9p-892, 0.0, 0x1.a4b32ca9feecp-207, 0.0,
     0.0, 0.0, 0x1.c8a01d72aec52p-108
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_modfd1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_modfd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_modfd1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
