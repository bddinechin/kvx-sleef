/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd1_u10purecfma.c --function \
 *     Sleef_finz_cosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.7eac74c0e80aap-764, 0x1.53575c0353265p-598, 0x1.05b2c05f79c58p-504,
     0x1.d61d65d2563d1p-257, 0x1.05dff917d9f9p-216, 0x1.47406a917233cp-259,
     0x1.4b452706e88cep-934, 0.0, 0x1.b66b4112d52abp-31, 0x1.b66896d15705bp-1001, 0.0,
     0x1.3c8b886c32abfp-346, 0x1.1032a2b4ccecap-741, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4a9312f9f62a8p-123, 0.0, 0.0, 0.0, 0.0, 0x1.9195310a97068p-895,
     0x1.c864eb58663abp-885, 0x1.ddcdcc0ca27d4p-826, 0x1.2b92dce5abebfp-244,
     0x1.0333c490fe9d1p-513, 0.0, 0x1.d7019f62e954bp-1001, 0.0, 0.0, 0.0,
     0x1.739a9cb7ce85ap-102, 0.0, 0x1.67c6a90a4d4e8p-644, 0.0, 0.0,
     0x1.298a2bb2a906bp-215, 0.0, 0x1.ce8c130eef96cp-42, 0.0, 0x1.80eea7ea7ca57p-478,
     0x1.71ed9563c741fp-734, 0x1.520093de06b3cp-133, 0x1.633b32cff3c2bp-601, 0.0,
     0x1.12fded966e342p-71, 0x1.552130f6cedc9p-847, 0x1.7e0bb118ba372p-120,
     0x1.af2a86c3ff102p-932, 0.0, 0x1.c16a3348e009p-568, 0x1.0020a2eeef444p-411,
     0x1.3967a9c9d46c1p-887, 0.0, 0x1.4700a15bd5485p-144, 0.0, 0x1.ecf2d01235dd9p-338,
     0x1.0e762ffcd6037p-346, 0x1.37ce007154243p-17, 0.0, 0.0, 0x1.0b954068b3b65p-673,
     0x1.8596f1acf5c55p-350, 0.0, 0x1.01f336210fbd6p-649, 0.0, 0x1.30668be02d97p-390,
     0x1.30c2af9311045p-203, 0.0, 0x1.9388aa99f2decp-631, 0.0, 0x1.c0db0c7d0b99bp-301,
     0.0, 0x1.0fde4c706ee57p-279, 0.0, 0x1.619b56144c266p-2, 0.0,
     0x1.ddd8dc12f0513p-234, 0x1.d0c1a83c5676ep-591, 0.0, 0.0, 0x1.aa19db063ef2dp-413,
     0x1.977e439940b74p-291, 0x1.c28cf0f6133f7p-612, 0x1.66e247154cc0ap-673,
     0x1.4bc2d016b4d36p-1008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e2711ca9def7p-371,
     0x1.05481b2fd976ep-427, 0.0, 0x1.c1e400ac307b3p-786, 0x1.0413137511a0cp-458,
     0x1.d6cafe2e4b55bp-678, 0.0, 0x1.34f217dde0198p-128, 0x1.31aadba0471afp-1022,
     0x1.8570f567a4952p-502, 0.0, 0x1.c0a372e3e0fe4p-781, 0.0, 0.0,
     0x1.92b0cd0711336p-913, 0.0, 0.0, 0.0, 0.0, 0x1.0d6ddcce906f2p-522,
     0x1.68020e8f9c657p-133, 0x1.5ad8d7c9294cfp-41, 0.0, 0x1.079ea190a18efp-415,
     0x1.cda5253ff0283p-67, 0x1.3f822717ec512p-572, 0x1.1a02c79208b33p-356, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.411d66563a39dp-222, 0.0, 0.0, 0x1.523f848da7051p-830,
     0x1.76437b7dbb3fap-890, 0.0, 0x1.ebefe8e82d83bp-199, 0.0, 0x1.4080efd29d0dap-411,
     0.0, 0.0, 0x1.32420765e8ca2p-985, 0x1.0ea38bffa7388p-283, 0x1.cefc70e4b8305p-856,
     0.0, 0.0, 0.0, 0.0, 0x1.c6c3d0211ef2dp-565, 0x1.fc5b7a0ef80bep-529,
     0x1.65087b4cb4aabp-37, 0x1.ff84cab338097p-166, 0x1.fe9e09142acep-939,
     0x1.3390b15560eedp-683, 0x1.2484a6eb55028p-45, 0.0, 0x1.71159f7b6e29ap-636,
     0x1.c6bd559ae35a2p-455, 0.0, 0x1.27fa29935de8p-59, 0.0, 0.0,
     0x1.5544ed9a43bcap-172, 0.0, 0x1.b385516ff5ba3p-255, 0x1.18d9dc92d7e3p-37,
     0x1.c0393716cb446p-736, 0.0, 0.0, 0.0, 0x1.6622569b10d4dp-479,
     0x1.fe879c4f62d5ap-347, 0x1.8a062f83bb18bp-482, 0.0, 0x1.5df6db6225449p-9, 0.0,
     0x1.d099603bef69fp-714, 0x1.1262e0bfefa0fp-610, 0.0, 0.0, 0x1.86775dc72b531p-859,
     0.0, 0x1.12b6b576da377p-248, 0x1.462e27520564bp-447, 0x1.2538948df2b4bp-751, 0.0,
     0x1.ae310177a0d17p-233, 0x1.934ef64ec0c47p-116, 0.0, 0.0, 0.0,
     0x1.e4e072cda47cbp-266, 0.0, 0x1.60dfea9de967ap-5, 0x1.fedb042da3f88p-382, 0.0,
     0x1.e8f56aa4b8b86p-971, 0x1.3dbe3dfde9cc6p-67, 0.0, 0x1.9a5606ebe3f24p-809, 0.0,
     0x1.2d5df28cdc7dp-363, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6917e062a9b4ep-96, 0.0,
     0x1.3b360ba5d303ap-1018, 0x1.ce166eaa6ad56p-536, 0.0, 0x1.a272ba2a167f4p-440,
     0.0, 0x1.d1afe4d81cb52p-885, 0x1.387b3bc9b5f2cp-526, 0x1.487d5005532d7p-930, 0.0,
     0x1.f5fc1db293062p-626, 0.0, 0x1.d8645ef0cad1dp-870, 0.0, 0.0, 0.0,
     0x1.4f76b75934e76p-174, 0.0, 0x1.8392375cf1bb2p-951, 0x1.96821abc63d0ep-202, 0.0,
     0x1.5e7afef003ce3p-200, 0.0, 0x1.6a89659a245fap-761, 0x1.a89fef8c69a63p-836, 0.0,
     0x1.2ed299ee8961p-782, 0.0, 0.0, 0.0, 0x1.4bac61372a726p-345, 0.0,
     0x1.3fae7d13760a7p-257, 0.0, 0x1.f378c4356abd4p-914, 0.0, 0x1.98366e904f16bp-658,
     0.0, 0.0, 0x1.311c5c53fbb84p-577, 0.0, 0x1.54efd4046d776p-452, 0.0,
     0x1.160b1fb407336p-786, 0.0, 0x1.6d6681d0c0728p-580, 0.0, 0x1.cac8e2aa6bd37p-394,
     0x1.1ba698f8d5c09p-31, 0x1.dae8e1bb74c73p-188, 0x1.0c937f8d1c7f8p-517,
     0x1.35d258223b563p-481, 0x1.430b7076b04c1p-467, 0x1.110af81ff66e1p-758,
     0x1.2d199aab0d648p-633, 0.0, 0.0, 0x1.dbe783a679e4fp-776, 0.0, 0.0, 0.0,
     0x1.45dfe1bc2aac8p-966, 0x1.50bbab57644dbp-564, 0.0, 0.0, 0.0,
     0x1.6a4b9e4869ea3p-887, 0x1.14f2932b1c77ep-197, 0x1.438c73add3862p-565,
     0x1.ddb3ed9fdc889p-412, 0x1.75b04d7e58d53p-398, 0.0, 0x1.09f36106c346dp-638,
     0x1.c27fd96a64176p-446, 0.0, 0.0, 0x1.0c63d6ba30f31p-297, 0.0, 0.0,
     0x1.42193541ded13p-253, 0.0, 0x1.69e4b246a5fabp-757, 0x1.af48804faccfep-490, 0.0,
     0x1.590ed5f0024ddp-166, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36020f160ea9ep-129,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1fdf9e3817ae5p-986, 0.0,
     0x1.ffac3f3eae0c3p-108, 0x1.8da40f99e7e72p-507, 0.0, 0x1.f01b2b4a7e1c6p-425,
     0x1.6490b2e52de44p-887, 0x1.1522027e11abap-513, 0.0, 0.0, 0.0,
     0x1.fa4bdb58ff31fp-493, 0.0, 0.0, 0.0, 0.0, 0x1.818de16fddf49p-777, 0.0,
     0x1.12197e4c20cf2p-583, 0x1.5db1857d0e132p-207, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.05175a83cbb3ep-94, 0x1.f4d505e636447p-982, 0.0, 0x1.426c1fae832d5p-600, 0.0,
     0x1.88dfe8011063bp-87, 0x1.1fdc63fe37c1cp-24, 0x1.4b51c999644d2p-914,
     0x1.e056690cd63ccp-380, 0x1.6826d26ce7edbp-618, 0x1.78eee42db8b89p-579, 0.0, 0.0,
     0.0, 0x1.41dffc43ea7bbp-803, 0x1.5f48118fd9ebp-695, 0.0, 0.0, 0.0, 0.0,
     0x1.0bf71e6334567p-326, 0.0, 0.0, 0.0, 0.0, 0x1.46ec0d02d07c4p-705, 0.0, 0.0,
     0.0, 0x1.eb4732556c40cp-70, 0x1.4f25e0aa8fdcdp-287, 0x1.3468d9fd52036p-821,
     0x1.24870ed4c2fddp-780, 0.0, 0x1.9d8c1e702050fp-292, 0x1.b49da8957a58ep-889,
     0x1.180d26ecaa068p-202, 0.0, 0.0, 0x1.5a13004ab634bp-949, 0x1.ef76e1bc4beap-835,
     0x1.e4e6c104d0141p-950, 0.0, 0x1.cb6eb1988b57fp-133, 0x1.3ba6279531cb5p-795,
     0x1.c4c77f22ad518p-900, 0.0, 0.0, 0x1.c69a2cdfc0438p-263, 0.0, 0.0, 0.0,
     0x1.2f44a6a6657a9p-174, 0x1.bc7f854ba8c3p-758, 0.0, 0x1.0ea023f639b7p-784, 0.0,
     0.0, 0x1.774f18a8396cfp-423, 0.0, 0.0, 0x1.cbc58229a9c4fp-103,
     0x1.5f5396180b15dp-518, 0x1.ede69b383c46fp-780, 0x1.eaa2ffda34c27p-883,
     0x1.ab8a20fd49168p-498, 0x1.8874355fc49a5p-572, 0x1.e5a05f87f0a4ep-380, 0.0,
     0x1.0a4bca038f19ap-846, 0.0, 0x1.244d623bac2e9p-136, 0.0, 0.0, 0.0,
     0x1.38a41dd22ac91p-731, 0x1.a94ba0017d852p-944, 0x1.449356213a42ep-972,
     0x1.b60c10bb138d5p-56, 0x1.8a8d977c12587p-64, 0.0, 0x1.33f03dd8fd285p-5,
     0x1.3a5983bace244p-618, 0x1.fdc2571942c3fp-916, 0x1.a0f0b0638480fp-897,
     0x1.bc426c88e35bcp-758, 0x1.57eb9c8e3bf8dp-852, 0.0, 0x1.eedd1e202a234p-813,
     0x1.b340234261b2ap-720, 0.0, 0x1.64132ddef280ap-804, 0.0, 0.0,
     0x1.78b5f88e39ef4p-529, 0x1.76191a0b05293p-896, 0x1.a9c5ad9559788p-817,
     0x1.1b3356f1e837bp-974, 0x1.81799f8a7569p-570, 0.0, 0x1.2937258430326p-997, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fddaec16303b6p-953, 0.0, 0x1.df4a9cce613b6p-807,
     0x1.128b68cf35288p-546, 0.0, 0x1.7ae037291909p-676, 0.0, 0.0, 0.0,
     0x1.abfe97f0a8022p-771, 0.0, 0x1.217296ad01a39p-83, 0x1.c7d1cf33d891cp-512, 0.0,
     0x1.5b42eebc8dd39p-380, 0.0, 0x1.61a55f0b9666fp-1007, 0.0,
     0x1.c6044d887cbb1p-843, 0.0, 0.0, 0x1.b43d24e916979p-480, 0x1.10fed633120fep-337,
     0.0, 0x1.ad3801b59efap-543, 0x1.99dec3c5ad98cp-397, 0x1.bd42e46fd0a4fp-646, 0.0,
     0.0, 0.0, 0x1.24091d9ece221p-341, 0x1.050bc33d5f613p-714, 0x1.86bca65504a57p-960,
     0x1.3cd082caddf3ep-790, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e3aebbf5827d6p-923,
     0x1.6037134bac7c3p-43, 0.0, 0x1.ed12317d5dfffp-25, 0.0, 0.0,
     0x1.a8c5fe1d85bf4p-272, 0x1.014935c47d935p-619, 0.0, 0x1.9b45d0e9bba12p-427,
     0x1.d95a207023b8cp-891, 0x1.b22e4381ca511p-20, 0x1.3506a714f6397p-499,
     0x1.e778c850aad4fp-150, 0x1.f3e0b56a2602ap-885, 0.0, 0x1.b82bf2156cccap-841,
     0x1.90b34f1f98b75p-892, 0.0, 0.0, 0.0, 0x1.e830eb82dc70cp-435, 0.0, 0.0,
     0x1.fa9a45db8211bp-567, 0x1.741c7aade1c78p-539, 0.0, 0x1.9ba0ac5937d9fp-597,
     0x1.13ca93ef66891p-684, 0x1.37a9927411054p-494, 0.0, 0x1.23cf8f1d2c70cp-592, 0.0,
     0.0, 0x1.db69c30c8eec4p-232, 0x1.aea6d0c422a16p-625, 0x1.da11d3c8ee74p-88,
     0x1.f7b57cb916987p-281, 0x1.631231f304b53p-974, 0.0, 0.0, 0.0, 0.0,
     0x1.425474e2fa0f3p-336, 0x1.f19fe21ef0c3bp-972, 0.0, 0.0, 0.0,
     0x1.255dd6cb8a735p-448, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bf92ed8d7a6dp-80, 0.0, 0.0,
     0.0, 0x1.7f4e2bf80c3e3p-510, 0.0, 0x1.82039f6ce5c9dp-821, 0x1.c68a1061b60a7p-102,
     0x1.c380c61a8f928p-128, 0x1.636b4553fe167p-177, 0x1.fa6c8f901712fp-285,
     0x1.7fa6e9ffa8372p-364, 0.0, 0.0, 0x1.c4bff2df39bb7p-912, 0.0, 0.0, 0.0,
     0x1.2c2b62d646254p-694, 0x1.c1cf6de01e9d1p-110, 0x1.4ab93754987d8p-562, 0.0, 0.0,
     0x1.ed9190c313ea5p-646, 0x1.9f2b8ae2f59b2p-971, 0.0, 0x1.7da03bb06cf35p-861,
     0x1.ef91a26dfb30ep-917, 0x1.d92e21f4488dp-36, 0.0, 0.0, 0.0, 0.0,
     0x1.251d81d2d3e48p-38, 0x1.f56c608e6aa6p-349, 0.0, 0x1.3cc12c7231a1ap-649, 0.0,
     0.0, 0x1.06977fe7f2386p-129, 0x1.e206ccb1d6f35p-386, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fbfa9755528e3p-697, 0.0, 0.0, 0.0, 0x1.7277214d22604p-136,
     0x1.f43b071417d28p-71, 0.0, 0x1.0e501ad37ebd1p-1017, 0x1.6dec85c86a807p-746, 0.0,
     0x1.98a07da92917ap-900, 0x1.cff20590d4997p-238, 0x1.6a5117d85bc1ap-535, 0.0, 0.0,
     0.0, 0.0, 0x1.2ef096205df0cp-968, 0.0, 0x1.9d53a42ce69cap-596,
     0x1.eea4e3f241b89p-892, 0x1.113a9ea92a2e7p-486, 0.0, 0x1.ca4d8e0a90486p-5,
     0x1.10b5cb2ff0e5p-520, 0.0, 0x1.23d7e49449fe9p-672, 0.0, 0.0, 0.0,
     0x1.a433dfc734103p-619, 0.0, 0.0, 0x1.19ea756a1033fp-107, 0x1.004a5057b9b35p-154,
     0.0, 0x1.c983d006541e5p-139, 0x1.a5ea0c532b535p-515, 0.0, 0.0,
     0x1.0a6b49a08311p-784, 0x1.8958ac06912d3p-597, 0.0, 0x1.b116435eff0a6p-21, 0.0,
     0x1.5d5919332d433p-64, 0.0, 0x1.e6f4b68a188cap-596, 0.0, 0x1.79f2717665f83p-457,
     0.0, 0.0, 0x1.60826d54cdbacp-415, 0.0, 0x1.f0ba2e715df77p-847, 0.0,
     0x1.35ddce4336292p-54, 0.0, 0.0, 0x1.5e4ac6516bf6p-665, 0.0,
     0x1.88df2fc9d1e0cp-552, 0.0, 0x1.6fc5938144351p-630, 0.0, 0.0, 0.0, 0.0,
     0x1.ff4267499472fp-267, 0x1.6d8c6e0263281p-73, 0.0, 0x1.db2b64f9b96b9p-259, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de94c8abe5558p-188, 0x1.278044dc5c706p-330,
     0x1.d7b0699487b22p-626, 0.0, 0x1.a76c43cb3c585p-832, 0.0, 0.0, 0.0, 0.0,
     0x1.02d5925bfce65p-11, 0.0, 0x1.b4eb6aa949628p-299, 0x1.d47051deea5e6p-359,
     0x1.2642078bd5e45p-400, 0.0, 0x1.f5671ba7c7393p-51, 0.0, 0x1.7dee148642737p-625,
     0x1.b362fa5262863p-230, 0x1.cc4fdeae7398bp-599, 0x1.73ef88afbea2ep-965, 0.0, 0.0,
     0.0, 0x1.a47b65d3da1ap-292, 0.0, 0x1.c67ed66efebc7p-1021, 0.0, 0.0, 0.0,
     0x1.feedef38c7de1p-188, 0.0, 0.0, 0x1.88e7560436e02p-1012,
     0x1.e1cb35718aa4cp-765, 0.0, 0.0, 0.0, 0.0, 0x1.2c702aec1bed3p-776, 0.0, 0.0,
     0.0, 0x1.b8cbd5d39b4f4p-203, 0.0, 0.0, 0.0, 0x1.4d81f7890ca18p-567, 0.0,
     0x1.8611d3aa31f71p-527, 0.0, 0x1.ace0dfb6aff4dp-963, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.624502a856c49p-687, 0x1.1e682bb38b3cfp-242, 0x1.ad60da7a4758ap-704,
     0x1.42ceb71e86687p-860, 0x1.c10dbc47166e8p-369, 0x1.a467ebc74ad4bp-485, 0.0,
     0x1.ba72b9c49deffp-770, 0x1.b9605ac0580cfp-376, 0.0, 0.0, 0.0,
     0x1.fc75d6c279749p-363, 0x1.a656c2b4410e6p-548, 0.0, 0.0, 0.0, 0.0,
     0x1.5c37f55cef011p-446, 0.0, 0x1.99d81f6cad2dfp-839, 0x1.574617a22d49fp-807,
     0x1.26148aa5505fbp-255, 0.0, 0x1.5fa0c0aeab1bcp-109, 0x1.299d6651c9589p-367,
     0x1.d3a8dd8211a99p-583, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8231f8634c8fp-389, 0.0, 0.0, 0.0, 0x1.69c05f705a564p-24,
     0x1.65c08858691e7p-1008, 0x1.6aa8bf5b4caddp-739, 0x1.d634b932f059ap-392, 0.0,
     0x1.c24647a5a3bd7p-129, 0x1.f73ae5b1027dbp-547, 0.0, 0x1.d4a82c2349486p-756, 0.0,
     0x1.fb45fe032ae2cp-878, 0.0, 0.0, 0.0, 0x1.982a1dcc3bcffp-770,
     0x1.2fa55acf01dedp-137, 0.0, 0.0, 0x1.2c61eefd57193p-886, 0.0,
     0x1.6227ca1863dcep-420, 0.0, 0.0, 0x1.1382d3a5f55dfp-101, 0x1.5f0738807d734p-297,
     0.0, 0.0, 0.0, 0.0, 0x1.ec47f140fb367p-688, 0x1.d125486710784p-917, 0.0, 0.0,
     0x1.e23554434042ep-500, 0.0, 0x1.9be62e914114p-681, 0.0, 0x1.3dfe256f72f63p-117,
     0x1.03349a5a2a88ep-930, 0x1.1c5b65e8a26dp-446, 0.0, 0.0, 0x1.ed74580c02b48p-339,
     0.0, 0x1.bcea381eef1f1p-410, 0x1.48ade99fb0be4p-158, 0x1.0193ad658af4fp-20, 0.0,
     0.0, 0x1.45809a706e1a3p-660, 0x1.892dbb4fae443p-545, 0x1.aeb5d37ac7221p-720,
     0x1.58db82fdf58d6p-826, 0.0, 0.0, 0x1.40255992bc54ap-613, 0x1.7214c2a0e4e8fp-492,
     0x1.b811d65081d92p-437, 0.0, 0x1.c3f9abcd1aa26p-635, 0.0, 0x1.33e557b9624ecp-930,
     0x1.667fe6cc2aa72p-908, 0x1.1bb9dd1443948p-716, 0x1.2fd2f9c640fccp-978,
     0x1.07a3a9b1c01b5p-848, 0x1.9167159c00513p-288, 0x1.0d89669d0daf9p-89,
     0x1.1d021d3a679e2p-251, 0.0, 0x1.503d2a60cc82ep-484, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.82ab09ab99ap-199, 0.0, 0.0, 0.0, 0.0, 0x1.80d87584314dbp-639,
     0x1.e8f944fac5c4p-110, 0x1.2ad41db8141c7p-609, 0.0, 0x1.6a5edd0769b9fp-249, 0.0,
     0.0, 0.0, 0x1.8e7d354b13a91p-654, 0.0, 0x1.a4ec6566ed9b7p-649,
     0x1.d4f450fcd709fp-925, 0.0, 0x1.cf66c2cb27beap-977, 0x1.2176f218c9b12p-978, 0.0,
     0x1.3211230552b9cp-710, 0.0, 0.0, 0x1.0da32df299cp-923, 0.0,
     0x1.f5c447c28768ap-806, 0x1.9f5d02f412d46p-662, 0x1.7f4986f3ab5cep-760, 0.0, 0.0,
     0.0, 0x1.02f2ecc1d47f9p-231, 0x1.330fe290e1471p-741, 0.0, 0.0,
     0x1.982b3ea8d2b65p-992, 0x1.d7b2c1ab86922p-547, 0x1.5093e50c50db7p-733, 0.0,
     0x1.697b3d53c662bp-407, 0x1.20613a0f86ea9p-221, 0x1.fb94a037e8f3ap-780,
     0x1.46811cb7617ddp-991, 0x1.8a2354c806dbep-686, 0x1.ed4a126e61f51p-304, 0.0,
     0x1.87e1a5e85fc4ap-926, 0x1.a86c3598fcf03p-598, 0.0, 0.0, 0.0,
     0x1.bc5fcb0896b07p-8, 0x1.cb50e75f62a96p-707, 0.0, 0x1.fd0dbabe0b78dp-337, 0.0,
     0x1.d96dd4fcb1883p-600, 0x1.fcba6e5fd7dcfp-419, 0x1.c956c3767381bp-598, 0.0, 0.0,
     0x1.0b2b3cbe1facfp-892, 0.0, 0x1.9d0a774be3c81p-808, 0.0, 0.0, 0.0, 0.0,
     0x1.a2bba16406ab4p-356, 0.0, 0x1.f90bb9cd8d7ebp-129, 0.0, 0.0,
     0x1.69c888d100c24p-659, 0.0, 0.0, 0x1.007101f643975p-39, 0.0,
     0x1.f45cd9a63f7bep-741, 0.0, 0x1.d45e86cb86994p-679, 0.0, 0x1.0e1bd46afc2cfp-918,
     0x1.3f57392158faap-758, 0x1.7f307b1dedcbep-389, 0.0, 0.0, 0.0,
     0x1.308f09817bcefp-436, 0.0, 0x1.f87046f0b7b5ep-845, 0x1.570f87e0e076p-53, 0.0,
     0x1.76d93ecf25384p-1022, 0.0, 0.0, 0.0, 0.0, 0x1.abba5e846a5c5p-900, 0.0, 0.0,
     0.0, 0.0, 0x1.f8131b225f8eap-830, 0x1.4a07398e59b9bp-577, 0.0, 0.0, 0.0,
     0x1.3d54dab7d23f1p-479, 0x1.6db1b732cc8c1p-255, 0.0, 0x1.fa4e1d2c42e1cp-84,
     0x1.1eb552457a6c8p-546, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb16be0c465bcp-237,
     0x1.01728a2c3d1e8p-989, 0x1.5e1a53a208f03p-970, 0.0, 0.0, 0.0,
     0x1.d7d27502b523bp-390, 0x1.653d11262325cp-594, 0.0, 0.0, 0x1.8a0733adb5f03p-788,
     0.0, 0x1.bd49d38248a1ep-814, 0.0, 0.0, 0.0, 0.0, 0x1.5f66a53fa63d4p-759, 0.0,
     0x1.12d7acce37695p-34, 0x1.e9193b705de6ap-340, 0.0, 0.0, 0.0,
     0x1.9077e7ab0a8c4p-666, 0.0, 0x1.facabd744fe8ap-662, 0.0, 0x1.16d5a471d5cc4p-528,
     0x1.1c7b60d87a783p-7, 0x1.4e07d95ce76a1p-982, 0.0, 0.0, 0.0,
     0x1.87cfb40c1d86bp-848, 0.0, 0.0, 0.0, 0x1.841d0702af2bap-439, 0.0, 0.0,
     0x1.138d956457719p-960, 0.0, 0.0, 0x1.6ce14e5c160b6p-1022,
     0x1.5513ae3609e35p-752, 0.0, 0.0, 0.0, 0x1.eae0f38087216p-537, 0.0
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
            tmp1 = Sleef_finz_cosd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
