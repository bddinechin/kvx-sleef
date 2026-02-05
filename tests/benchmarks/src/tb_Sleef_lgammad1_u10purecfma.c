/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammad1_u10purecfma.c --function \
 *     Sleef_lgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.2e860707e4523p-27, 0.0, 0x1.232b4d19cdb74p-18, 0x1.6f05660491fbap-762,
     0.0, 0x1.42cc5efb67d5ap-896, 0.0, 0.0, 0x1.638208b1deaadp-269, 0.0,
     0x1.6bc58f1d7e47bp-580, 0x1.3f0e1806b412bp-987, 0x1.e72b18dcbfcbbp-264, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.eb1d8bf6a2056p-698, 0.0, 0.0, 0x1.efc2326ea085cp-391,
     0x1.d6ed003dda5c9p-698, 0x1.869e6883596e8p-639, 0x1.1c5de115df8fep-498, 0.0,
     0x1.cfa13a8ef3bdp-191, 0.0, 0.0, 0x1.dd06fa200072bp-622, 0x1.92da60126265dp-492,
     0.0, 0x1.0a67f4bb2a3f1p-139, 0.0, 0.0, 0x1.044b3cdf984f7p-513,
     0x1.e3528a5771ae1p-741, 0.0, 0x1.46bc1dffe68b9p-506, 0x1.45e62d9e04342p-106,
     0x1.68441ead3c98fp-972, 0.0, 0x1.a0a1744983298p-837, 0x1.6ddc9146d9e43p-228, 0.0,
     0x1.9c90a7c7daa77p-83, 0x1.fbc7b98601633p-786, 0.0, 0x1.fc8baa889d16bp-129,
     0x1.b31e753ed95eap-207, 0x1.df58d09b51ce3p-985, 0.0, 0.0, 0x1.0e436130a5925p-668,
     0x1.5b83888dc72f2p-74, 0.0, 0x1.1a4d89cf59a62p-468, 0.0, 0x1.6f6537a53b197p-557,
     0x1.28a612b493af7p-701, 0x1.6c7e836b97341p-750, 0x1.e0014e42f40fdp-93,
     0x1.f5fcfcb8f32c7p-360, 0.0, 0x1.461cc57549d4ap-124, 0.0, 0x1.1d72af0175ef6p-396,
     0x1.8c9a7bf53f2b9p-768, 0x1.24abfcba22a65p-796, 0x1.86c54f45ae134p-345, 0.0,
     0x1.15ba388f977d5p-560, 0.0, 0x1.ff36b2c201748p-503, 0x1.547a6fd14c944p-890,
     0x1.5cb7a083ee823p-643, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4b69e040209ap-769, 0x1.a906ac33df058p-239, 0.0, 0x1.15d5d04fd813ap-319,
     0x1.358469652a49ep-30, 0x1.bb2b743a353bp-587, 0.0, 0x1.c4347dd6c612ap-60,
     0x1.05791aabbea8dp-890, 0x1.47058f55dc021p-963, 0.0, 0x1.86d54bbf1b41dp-191,
     0x1.9589fda13b973p-428, 0.0, 0x1.1201e6db22677p-651, 0x1.39eaf690bfbfep-756,
     0x1.d89d1fc64e09p-388, 0x1.06bdc1325ab2ep-983, 0.0, 0.0, 0x1.82a8a2f8a6444p-83,
     0.0, 0x1.854c67f7f9a9fp-463, 0.0, 0x1.59cedf60eadc2p-814, 0.0,
     0x1.6acea14c5597ep-438, 0.0, 0.0, 0.0, 0x1.74b3477189e17p-579,
     0x1.a81433caf152fp-823, 0x1.0f45375f2ed08p-824, 0x1.7f81bde035528p-652,
     0x1.28eb860a97afdp-744, 0.0, 0x1.d2ca0bcefcabep-873, 0x1.6599ddb129ad9p-318, 0.0,
     0.0, 0x1.1ad206f7693ebp-584, 0x1.dc92f7e1aa21ap-810, 0x1.612c81a45a496p-452,
     0x1.23165084cecebp-1004, 0x1.07c5575a4dab1p-236, 0.0, 0x1.6dd99120ead31p-384,
     0x1.892914f7341dep-91, 0x1.02c6c77950b12p-897, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.26d23280af9a9p-413, 0.0, 0.0, 0x1.5c94019211716p-182, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d6fe6622b375fp-747, 0x1.e54fd5b4b5bd6p-957, 0.0, 0x1.c23197ffdfe14p-538,
     0.0, 0.0, 0x1.71e9d905205d6p-740, 0x1.4f70f4e94e6a3p-732, 0x1.def834695df16p-295,
     0.0, 0.0, 0x1.c5005bb99348p-879, 0x1.542b664626dcap-901, 0x1.de9da413988eep-34,
     0.0, 0.0, 0.0, 0.0, 0x1.b8239b6766108p-682, 0.0, 0x1.0a7fafd2159d4p-390, 0.0,
     0x1.45485b599b60fp-873, 0.0, 0x1.dfbdb276736cap-710, 0x1.f4ef80dd58888p-1022,
     0.0, 0.0, 0x1.657d7c4b09bdcp-308, 0x1.bee54b73f530ap-262, 0.0,
     0x1.7cfe18d66f2d2p-390, 0x1.ffa4c0dcb9d3fp-151, 0.0, 0.0, 0x1.c2fa82148f22dp-957,
     0x1.23bf2a3ec077p-189, 0x1.604c035c9d4f1p-945, 0x1.8d52d4e64028ap-861, 0.0, 0.0,
     0.0, 0.0, 0x1.a4dbc6761d7fp-134, 0x1.ec3595b986dp-577, 0.0, 0.0,
     0x1.dbe54c9c2793p-886, 0.0, 0x1.18da69de20b83p-225, 0.0, 0x1.37ccc701f750dp-344,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06183508a6b1dp-64,
     0x1.00d128b926f84p-666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87d7d25e9a3c1p-584, 0x1.7c86626dfbcap-438, 0x1.96cf586c2f426p-453, 0.0,
     0x1.cf65a102f1dp-1021, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3c2552cc542f3p-136, 0.0,
     0x1.a6092f2e865c7p-936, 0.0, 0x1.b89aa20ae70a6p-375, 0x1.c148efc35953cp-304,
     0x1.7ee2b97ff0579p-792, 0x1.aa4964459c55dp-455, 0x1.11d1b23f8a00fp-648, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0168fa1816c4ep-220, 0x1.e0391dd278ba2p-664, 0.0, 0.0, 0.0,
     0.0, 0x1.88e8334f75dffp-699, 0x1.7202ab2496a7ep-195, 0.0, 0.0,
     0x1.245743c8cff71p-72, 0x1.a001a961dbe73p-384, 0x1.d2d2ff4f2c13ep-174,
     0x1.1a5c943fe5d1ap-315, 0x1.2adaea19aa851p-413, 0x1.ad0ac29639158p-742,
     0x1.4a1bc544f86dp-654, 0.0, 0.0, 0.0, 0x1.db685aa9cff42p-564,
     0x1.2dd3372811d68p-159, 0.0, 0x1.56612cec80ab3p-618, 0.0, 0.0,
     0x1.142184c04acd5p-1003, 0.0, 0.0, 0.0, 0x1.34d37b7b0e49ep-247, 0.0,
     0x1.d87eaf46591b2p-1022, 0x1.b8f1235ff145cp-337, 0.0, 0x1.4249272eb9d39p-139,
     0.0, 0.0, 0x1.a6587ecf2591ep-552, 0.0, 0.0, 0x1.ec8ac843ad686p-94, 0.0,
     0x1.7cb6776007b3bp-297, 0.0, 0.0, 0x1.dd5c32392acfcp-385, 0.0, 0.0,
     0x1.f3ec762afbc23p-229, 0x1.a3209e5e3b4c5p-332, 0.0, 0x1.bc03add3338ecp-840,
     0x1.eb8f5eb5bdf64p-164, 0.0, 0.0, 0x1.5f65f7fafc37cp-550, 0x1.f069a1036f58cp-486,
     0x1.c58e22b18c19ep-728, 0.0, 0.0, 0x1.2bb853a3e1b9bp-18, 0.0,
     0x1.a2e0968ef1651p-77, 0.0, 0.0, 0.0, 0.0, 0x1.9569d13b693ddp-889, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4859c9a047ea8p-268, 0x1.dcdea466cc0c6p-823,
     0x1.59fc02ce6ff16p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e8c99e037ebep-552,
     0x1.86d53455956fap-199, 0.0, 0.0, 0.0, 0x1.6a9c8c09dff8cp-827,
     0x1.91dae8fb6b06ap-354, 0.0, 0x1.a44346ca45557p-708, 0.0, 0.0,
     0x1.2ad41eb823bc5p-902, 0.0, 0.0, 0.0, 0x1.7fccbf2d83fe3p-621,
     0x1.cac9d802637fdp-38, 0.0, 0x1.ba937c6579ddp-140, 0.0, 0.0, 0.0,
     0x1.12e1e46ca9507p-278, 0x1.2abde25ace052p-232, 0x1.ee5ac36256584p-306,
     0x1.058590ea9662dp-916, 0.0, 0x1.81881025c462ap-235, 0.0, 0x1.dc34af225c49ep-324,
     0x1.a1f686b71eb6p-723, 0.0, 0.0, 0x1.64d7da131a29ep-618, 0.0, 0.0,
     0x1.c178c092cf8efp-18, 0.0, 0.0, 0x1.7dc346c36c6edp-104, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.865191a3062d5p-968, 0.0, 0x1.8d6dfaaebe71cp-150, 0x1.bb479a669601dp-532, 0.0,
     0x1.f609b45bb6832p-209, 0.0, 0x1.b966d2f21364p-678, 0x1.60922edbf5db8p-907,
     0x1.0b2145c915fbap-423, 0.0, 0.0, 0x1.a07f9c9832e17p-957, 0.0,
     0x1.c017a1c9db3bcp-144, 0x1.780f0a566b65cp-703, 0x1.85ff722efb43ap-635,
     0x1.ea8da8f22ee1bp-753, 0x1.143a08e7cea21p-354, 0.0, 0x1.312090f3821d1p-475,
     0x1.2db089c3bb0c9p-538, 0x1.01174e461286dp-604, 0x1.e77b9d6b49905p-895,
     0x1.1de972eafe496p-661, 0.0, 0.0, 0.0, 0x1.a1ded31c2cc14p-80,
     0x1.bb3f54a2538f2p-765, 0.0, 0.0, 0x1.a586a0493e208p-713, 0x1.b07e125a9a05p-74,
     0x1.480dd88b9465fp-943, 0x1.b50a32c1c35f4p-893, 0.0, 0.0, 0.0,
     0x1.24b0a71427bfep-161, 0x1.dd4b0be9ee93dp-750, 0.0, 0.0, 0x1.d79b1787c5404p-147,
     0.0, 0.0, 0x1.5eb8dfc9ee419p-5, 0x1.e7eab12454825p-975, 0.0,
     0x1.17320aaed51cep-168, 0x1.4ed3b7698c5cep-747, 0x1.bdece897e3557p-779,
     0x1.55499247ab761p-48, 0x1.32d53eafe3814p-57, 0x1.8a2f7b9da0714p-704, 0.0, 0.0,
     0x1.2faf295bf55ecp-1017, 0.0, 0.0, 0.0, 0.0, 0x1.15a3fd7e4b23dp-777, 0.0, 0.0,
     0x1.ecdddda5d7a0bp-356, 0x1.67216479965b1p-577, 0x1.2c9425178c606p-277, 0.0,
     0x1.3931052b8ae3cp-200, 0x1.3dd1433c7d1fdp-835, 0x1.2073c8c0286abp-813, 0.0,
     0x1.9f5feb178ea9ap-738, 0.0, 0x1.dd3ea6c286149p-371, 0x1.c6ad23d387c33p-55,
     0x1.59ba6bd7c12afp-895, 0x1.189e82bfca497p-234, 0.0, 0.0, 0.0, 0.0,
     0x1.cca85231d1b39p-18, 0x1.5f04d86b435bep-686, 0.0, 0.0, 0x1.a1f12a6442641p-26,
     0x1.6bee28702d90dp-875, 0x1.1709fb303669ep-891, 0.0, 0.0, 0x1.8091d4b1fdccdp-371,
     0.0, 0.0, 0x1.59f5765110461p-669, 0.0, 0.0, 0x1.d06eff61c44afp-656, 0.0, 0.0,
     0x1.9bcc4c2fd796bp-779, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.faf0ba4447e51p-798, 0.0,
     0x1.b88d51ffe76a2p-493, 0x1.c38cffff5adafp-916, 0x1.822c52763ff2dp-179,
     0x1.69bb4b5b1311fp-740, 0x1.f167861f1088p-23, 0.0, 0.0, 0.0, 0.0,
     0x1.2380021db3ffcp-140, 0x1.0f8f14a933e66p-468, 0.0, 0x1.6d45e3e26260fp-547,
     0x1.3e37cf1f7ce4ep-35, 0x1.29e4026c69faap-855, 0.0, 0.0, 0x1.e4814a3a40c7ap-872,
     0x1.88d347d9f0f57p-80, 0.0, 0.0, 0.0, 0x1.8003a9787aa27p-922, 0.0,
     0x1.b69a4fe8f18dap-952, 0x1.352491381d75dp-762, 0.0, 0x1.8f100c83f17a3p-651, 0.0,
     0.0, 0x1.06cc60572c4d4p-529, 0.0, 0x1.f906df8e88c66p-818, 0.0,
     0x1.a628956299b52p-64, 0x1.a830a10a59513p-46, 0x1.38cfc758de4f8p-227, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d8f6453531251p-946, 0.0, 0.0, 0x1.a0e737b585a9fp-955, 0.0,
     0x1.10bc6641325edp-972, 0.0, 0.0, 0x1.bca4fd88d5ffap-624, 0x1.ecb41cbc57149p-597,
     0.0, 0x1.56298cf711a0ep-637, 0.0, 0x1.94597dc92afbcp-709, 0x1.b04914389380bp-527,
     0x1.53ce181580311p-270, 0x1.35c0e5a6a135p-240, 0.0, 0.0, 0x1.7ef20b6e16237p-67,
     0x1.2a8bc3d6f5b06p-174, 0x1.503ca2dfda70cp-937, 0.0, 0.0, 0.0,
     0x1.8640ae0820b71p-68, 0.0, 0x1.ca2fd3829e5bdp-666, 0.0, 0.0,
     0x1.be860a05c278cp-389, 0x1.0001c46069fd5p-75, 0x1.23840f9d0d2fdp-672,
     0x1.fb68c28fe0edap-49, 0.0, 0.0, 0x1.5becd2062bda5p-803, 0.0, 0.0, 0.0,
     0x1.7f8f39eee8dd7p-1, 0.0, 0x1.557598213ae2cp-657, 0.0, 0x1.4fbd6d1daa485p-468,
     0.0, 0x1.ae05d22a77db4p-734, 0x1.4fa7f51bf00edp-890, 0x1.d1f324393b183p-431, 0.0,
     0.0, 0x1.2ba8adfaae563p-437, 0x1.b32a3b497078ap-253, 0x1.0b67ccd18997bp-807,
     0x1.46a12f982cc5fp-438, 0.0, 0.0, 0.0, 0x1.4bd63e533bc48p-229,
     0x1.3620bb2b5aecbp-124, 0.0, 0x1.d0d45266c6bfp-473, 0x1.60c7181d0d7bp-136,
     0x1.b24a17cea647dp-857, 0.0, 0x1.27eaf1691d8f8p-691, 0.0, 0.0, 0.0,
     0x1.1038c6b441a76p-850, 0x1.76824ee7780b4p-636, 0.0, 0x1.7cfea3a528933p-302, 0.0,
     0.0, 0x1.c14a1e773afc9p-979, 0x1.8433ef21d5834p-670, 0x1.54dbb2b39dbabp-863, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a134523fcbf3p-394, 0.0,
     0x1.ae35bf0706aabp-715, 0.0, 0x1.3f26b500ce35fp-807, 0.0, 0x1.8578dbe0a0985p-682,
     0x1.2d568ce4e69ffp-259, 0.0, 0.0, 0x1.e2ba8fc3e5672p-569, 0x1.a8568460ff2f3p-408,
     0.0, 0x1.15d0cd05bb7bbp-360, 0.0, 0x1.0c7a16781736ep-552, 0.0, 0.0,
     0x1.cdcd77c895f44p-469, 0x1.943e2467410efp-888, 0.0, 0x1.99aeadb5f2b69p-613, 0.0,
     0x1.ed0b8af5f8de6p-785, 0x1.a43b42a175a0ap-678, 0x1.0c13ddd6cc48p-508, 0.0, 0.0,
     0.0, 0x1.20dd4a8a820bap-548, 0x1.d7a9cee0b9841p-262, 0x1.f7a09e6214716p-751,
     0x1.fc12f1a40f0a9p-209, 0x1.dda2972f5de6fp-322, 0x1.b315e53662206p-671, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.331087de4b919p-616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.802da9761c235p-211, 0x1.d870e0b7ce711p-1022, 0.0, 0x1.2ecddea234774p-1,
     0x1.581b4c654ca59p-816, 0.0, 0x1.6a4515acca932p-968, 0.0, 0.0, 0.0,
     0x1.9ee33776c12ap-924, 0x1.8634b0bf82729p-311, 0.0, 0x1.d5ba41753c221p-300,
     0x1.5900887d51742p-107, 0.0, 0.0, 0x1.6af48fe31f23p-389, 0.0, 0.0,
     0x1.828bb061183dep-891, 0.0, 0x1.0364ad2500767p-780, 0x1.958dc12526a84p-610, 0.0,
     0.0, 0.0, 0x1.d2c3b6b2f49e5p-797, 0.0, 0x1.fe807011b87d4p-410, 0.0,
     0x1.a72dea1eb5311p-211, 0.0, 0.0, 0x1.e0daa984ded67p-976, 0x1.66c339b189869p-887,
     0.0, 0.0, 0x1.e9f825912db8fp-970, 0x1.fb4698acc3b4cp-232, 0.0,
     0x1.0e4e05606add6p-560, 0.0, 0.0, 0.0, 0x1.54e394404bcb4p-261,
     0x1.def3b08f22793p-706, 0x1.82151481824cfp-283, 0.0, 0x1.51345d080e7dap-453,
     0x1.5da70dd82f8efp-101, 0x1.68c41dc5643f8p-283, 0.0, 0x1.ce03efbb8f06cp-625,
     0x1.d5759297c8f24p-740, 0x1.665e3b361a651p-542, 0.0, 0.0, 0x1.f1f75630cf912p-386,
     0.0, 0.0, 0.0, 0x1.c1454d7a1dc67p-639, 0.0, 0.0, 0x1.a0fbe856d1fc4p-634, 0.0,
     0x1.68718f568d903p-253, 0x1.de2998479b93fp-75, 0x1.b0e172ce2ad44p-761,
     0x1.2f4fe9c71134ep-382, 0.0, 0x1.b41e7f7e4d459p-739, 0x1.9fd8a76a3aafcp-989, 0.0,
     0.0, 0.0, 0.0, 0x1.1999d5b0cdfc4p-816, 0.0, 0x1.0d7c2e9129708p-854, 0.0,
     0x1.bf0ad6dbda188p-145, 0.0, 0x1.0c8f85f2230cdp-534, 0.0, 0x1.185484c38dc91p-97,
     0x1.60e913f6c2104p-857, 0.0, 0x1.11330ea4a78e8p-694, 0.0, 0x1.2530a55b6ea47p-988,
     0.0, 0x1.e9ebc899b8e78p-350, 0.0, 0x1.cd683aa2a49bcp-921, 0x1.c551828b0f59p-443,
     0.0, 0x1.5c57c7b019a8ap-155, 0.0, 0x1.799bf70e76b1p-503, 0x1.53d8cc6932d2cp-601,
     0x1.92a1e0b7c3fe6p-619, 0.0, 0x1.a3ba62070abe4p-649, 0.0, 0x1.4ad92f50ea452p-504,
     0x1.063a4fa6735e9p-769, 0x1.bde080973855bp-835, 0x1.352b5a03577c4p-438, 0.0, 0.0,
     0.0, 0x1.b908344ac4bfbp-94, 0.0, 0x1.04aacb0078513p-301, 0.0,
     0x1.685be111db62fp-120, 0x1.a13223a466f7p-178, 0x1.0627d91fafbf3p-163,
     0x1.62e36a49e11aep-647, 0x1.9e8efd4d74af8p-135, 0.0, 0x1.8fd1d77b06897p-335,
     0x1.1a1030078c6cdp-651, 0.0, 0.0, 0x1.d4a29db83bfdfp-832, 0x1.206164b24c50ep-889,
     0.0, 0x1.fb0c50675e689p-232, 0x1.15ea03395b508p-553, 0.0, 0x1.493ffce51607fp-210,
     0.0, 0.0, 0x1.f0f7011c55a97p-408, 0x1.fc527e0b61c54p-845, 0.0,
     0x1.be0bd1e713b4fp-886, 0x1.4e83a53d38efcp-692, 0x1.1f46c2d8fd0f9p-72, 0.0, 0.0,
     0.0, 0.0, 0x1.fd153ac545d46p-870, 0.0, 0x1.57898da7b3c2bp-565, 0.0,
     0x1.94c422113b855p-896, 0.0, 0x1.3121e32d88688p-863, 0.0, 0x1.6b50749607395p-669,
     0.0, 0x1.4bf7b5ff2794fp-706, 0.0, 0x1.bb386d42c33dp-463, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.591b7f5af78c3p-87, 0x1.2609003bffc46p-929, 0.0, 0x1.e1313d80304dp-126,
     0.0, 0.0, 0.0, 0x1.6ab47d4e2bf17p-757, 0.0, 0x1.c9d2c1dec0216p-498, 0.0, 0.0,
     0.0, 0x1.cb922d1f0ff7fp-357, 0.0, 0.0, 0.0, 0x1.6062ab34eee1dp-106, 0.0, 0.0,
     0x1.e19e77840aaffp-361, 0x1.7055decc31a1ap-115, 0.0, 0.0, 0.0,
     0x1.e032af81e58c1p-550, 0x1.84ef4c1ff375bp-334, 0x1.f26425f7ed1a1p-44,
     0x1.f2f54fc406304p-398, 0x1.ff745d5d204d6p-164, 0.0, 0.0, 0x1.4495c9a6bd334p-341,
     0.0, 0.0, 0x1.0a4cd47843c2ap-190, 0.0, 0x1.3eb651b599dacp-598, 0.0,
     0x1.1d144ce766345p-729, 0.0, 0x1.fa009bc508058p-622, 0x1.35765232927f3p-134,
     0x1.934025e18bbbdp-350, 0x1.bde07dcc1d119p-587, 0x1.9fbdd5520cfdp-670, 0.0,
     0x1.242f419b7e8a8p-214, 0x1.61da3e17aab3cp-55, 0x1.fee63c346ddc5p-287, 0.0, 0.0,
     0.0, 0x1.4a22812910c69p-910, 0.0, 0x1.215d143d71a1dp-475, 0.0, 0.0, 0.0,
     0x1.f188a135b74e3p-417, 0x1.86e41d808c324p-435, 0x1.044b4d5e16d24p-403, 0.0, 0.0,
     0.0, 0x1.89fbfda465ffap-145, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17b4c7c33d7f5p-837,
     0x1.b7fa4be685a24p-24, 0.0, 0x1.e946ae78fc73bp-340, 0x1.b4dc9605531c9p-932, 0.0,
     0x1.1b320f1dcc37ep-743, 0x1.06da6d0848572p-627, 0.0, 0.0, 0x1.a237bcc38ebe3p-11,
     0.0, 0.0, 0.0, 0.0, 0x1.806f88305b23dp-470, 0.0, 0x1.44751e7ea43acp-756, 0.0,
     0x1.c06b60c5a904ep-188, 0.0, 0.0, 0x1.c34193a25dd57p-808, 0.0, 0.0,
     0x1.cf2e8598fad01p-740, 0.0, 0.0, 0.0, 0x1.45267c45ff44ep-319, 0.0,
     0x1.16c7c0e9c9a24p-783, 0x1.b6a57187781p-765, 0.0, 0.0, 0x1.d62d770c6c56cp-688,
     0x1.8e649ff7f57bfp-952, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d579f94517732p-910, 0x1.174e9f07c2b1cp-621, 0x1.968ed4247e273p-440, 0.0,
     0x1.318b3623953efp-529, 0x1.0a53049972007p-239, 0x1.f75173915a053p-454, 0.0, 0.0,
     0x1.2564a04781e0fp-581, 0.0, 0x1.8a956c839b9c1p-328, 0x1.2c01c13601e2ep-136, 0.0,
     0.0, 0x1.2e6f1f715f037p-690, 0.0, 0x1.e6749f80b5fcfp-352, 0x1.7a274fb4be24ap-145,
     0x1.9f3f9daac8668p-199, 0x1.0af3ebc165099p-94, 0.0, 0.0, 0x1.7eb3c1f9cec42p-643,
     0.0, 0.0, 0x1.cc287cccd57bap-299, 0x1.de8ded46e6985p-288, 0.0,
     0x1.62a1f9c7a1356p-189, 0x1.8690075ad1d9p-602, 0.0, 0.0, 0x1.ec6d982bdd70ap-536,
     0x1.a03813df6e17ap-529, 0.0, 0x1.4d6c1b97560d9p-129, 0x1.27d1a6051ff82p-194, 0.0,
     0.0, 0.0, 0x1.059db3846f7a3p-701, 0.0, 0.0, 0x1.fb15721416023p-241, 0.0, 0.0,
     0x1.2991f66c38af8p-629, 0x1.822fead3bc695p-201, 0x1.1d56ce89fc5d7p-201,
     0x1.c728645bdb90cp-117, 0.0, 0x1.092193d50783ep-310, 0x1.c82e7224725cdp-331, 0.0,
     0.0, 0.0, 0.0, 0x1.c77b3491389d8p-211, 0x1.82be744f57dc7p-494,
     0x1.794dfef284e4ap-276, 0x1.0c3066fd70a61p-984, 0.0
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
            tmp1 = Sleef_lgammad1_u10purecfma(tmp0);
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
    printf("Sleef_lgammad1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_lgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
