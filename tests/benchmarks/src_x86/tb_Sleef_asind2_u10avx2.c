/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind2_u10avx2128.c --function Sleef_asind2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
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
     0x1.48f13f85e75ccp-335, 0.0, 0x1.f807af6c68ecep-426, 0.0, 0.0, 0.0,
     0x1.86bf8f9a696fp-315, 0.0, 0x1.cc8d5b33c23ddp-216, 0.0, 0.0, 0.0,
     0x1.1badc55c0ddfcp-187, 0.0, 0.0, 0x1.6c72c750f98d1p-910, 0x1.cd421de6c4987p-30,
     0x1.31c40472154d9p-947, 0x1.67a1202b50705p-214, 0x1.3ae26a4be2067p-937,
     0x1.e1624dfbc1336p-75, 0.0, 0x1.76cfb11e1cf43p-62, 0x1.b219b3e07dd5dp-826,
     0x1.e165145e8a7aep-803, 0x1.6e489a0f7c9bep-498, 0.0, 0x1.0642004e1868ap-598, 0.0,
     0.0, 0x1.10a7727d013a5p-590, 0x1p0, 0x1.f1bb13ecc663ap-429, 0.0, 0.0,
     0x1.08eba57e06634p-913, 0x1.2610d4e297cecp-795, 0.0, 0x1.f07fc727f9dabp-571,
     0x1.99b13285edb67p-32, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8903d0cfd8f22p-24, 0x1.462bb63ccd942p-672, 0x1.1286729ccb5c9p-541,
     0x1.a6a62b4736826p-889, 0x1.43938bd182e5fp-911, 0x1.aa9a6b985ffd4p-813, 0.0, 0.0,
     0x1.181479d4e7be9p-903, 0x1.28c0d2648bbcep-309, 0x1.fd03424c98c96p-776, 0.0,
     0x1.51993ce572adap-965, 0x1.8f7069a027254p-25, 0x1.2a8fbfb39c136p-450, 0.0,
     0x1.b96ae39248055p-297, 0.0, 0x1.3ac53aecce7dfp-86, 0x1.1aaa011658c5bp-33, 0.0,
     0.0, 0x1.a7e3d88282bd3p-49, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f1e5e77453a47p-331, 0.0, 0x1.29d17241b4348p-780, 0x1.a1a77011df6bbp-190, 0.0,
     0.0, 0x1.dd7168e657c9cp-676, 0.0, 0.0, 0x1.2018984bbaa06p-981, 0.0, 0.0, 0.0,
     0x1.f59a22bc3cea9p-264, 0.0, 0x1.1392c21216baep-489, 0x1.c0687279ddad6p-966,
     0x1.3833b5d8f6793p-735, 0x1.6af72879e305dp-202, 0.0, 0.0, 0x1.ab38a019683d6p-38,
     0.0, 0.0, 0x1.6c2ffabe3a5a3p-51, 0x1.290c9f10cac8fp-508, 0x1.2c70a6085a2cap-935,
     0.0, 0.0, 0x1.b47f71cb9c135p-433, 0x1.37357719950d6p-848, 0x1.fbc35731d0cf4p-188,
     0x1.f1daa060d1a53p-690, 0.0, 0x1.f15ac972e03b8p-581, 0x1.38a0577570353p-185, 0.0,
     0.0, 0x1.9de6dccbf15dcp-280, 0.0, 0.0, 0.0, 0x1.0c8d901fc553bp-953,
     0x1.28b3bcd4b21a2p-344, 0.0, 0.0, 0x1.d3f813477266bp-479, 0x1.2fb43b8c7677fp-597,
     0.0, 0x1.856e6c9a8beb9p-484, 0.0, 0x1.85be6dc0f2b07p-352, 0x1.8c12ce094a21ap-65,
     0.0, 0x1.a154192f2b881p-690, 0x1.6207a75a4531ep-224, 0.0, 0.0, 0.0,
     0x1.1fb89424f7ddp-58, 0x1.52442cabddaefp-337, 0.0, 0.0, 0x1.70f1a3a00286p-569,
     0x1.f9b55185d6ac6p-380, 0x1.118fb5bb4bd4ap-430, 0x1.dda2118918945p-22, 0.0,
     0x1.ac75eab6d1debp-778, 0.0, 0x1.c15d7a47ba06p-221, 0.0, 0.0,
     0x1.485ca6e5eda0ap-814, 0x1.f8b197db2143cp-14, 0.0, 0x1.ef0abe43810a9p-695, 0.0,
     0x1.e5fe46b421a7p-451, 0.0, 0x1.cc5719fb594b4p-254, 0x1.85735d047252ap-426,
     0x1.3d35c806f2da9p-133, 0x1.fa8d70484dbdp-802, 0.0, 0x1.def9b422c6877p-840,
     0x1.264067e4de28ap-867, 0x1.112078ae5fd7fp-505, 0.0, 0.0, 0.0,
     0x1.5604d71d2c55fp-405, 0.0, 0x1.cd2ff596104b3p-858, 0.0, 0x1.75f6c3e5967bdp-782,
     0x1.4076bdbc66057p-72, 0x1.b3a951d039577p-485, 0x1.94122b557cd8bp-670, 0.0,
     0x1.16d7da150f7ap-1021, 0.0, 0.0, 0x1.b65eb159afba9p-502, 0.0, 0.0, 0.0,
     0x1.a6e501bf0ba39p-874, 0x1.96a4501919cfbp-678, 0.0, 0.0, 0.0,
     0x1.ab8f2b9924066p-748, 0x1.6404cf810b513p-739, 0x1.7338f277b84f5p-137,
     0x1.295339f2ee3a9p-846, 0.0, 0.0, 0.0, 0x1.3e9df55a46cfp-408,
     0x1.bcb3d0afabf7dp-25, 0x1.987041e9be3cdp-41, 0x1.bffa12927141bp-447, 0.0, 0.0,
     0.0, 0x1.3938a1548c2f7p-210, 0.0, 0.0, 0.0, 0x1.7b3b1cc8ed2b9p-364, 0.0,
     0x1.9a287ef8b5c6p-151, 0.0, 0x1.8a00554c662e2p-901, 0x1.cd62397a0ed6p-13, 0.0,
     0x1.fd0f0e82e58eap-853, 0.0, 0x1.456d245765ec4p-923, 0x1.92f6c3dfdd654p-747,
     0x1.1a2c3f03e10a3p-617, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6911fa3f0dc05p-116,
     0.0, 0x1.70c1672e77c57p-180, 0.0, 0.0, 0.0, 0x1.33163ca42b572p-980,
     0x1.dc166e1f387eap-261, 0x1.0f13245727dc7p-940, 0x1.5ecf03625f1f8p-344, 0.0,
     0x1.54e7ed132fa82p-812, 0x1.9e0a6ee3a2027p-914, 0.0, 0.0, 0.0, 0.0,
     0x1.d12489cc5776dp-155, 0.0, 0x1.35133c149dfe5p-929, 0.0, 0.0,
     0x1.23baa5acd9c09p-317, 0x1.eb2b7516a642ep-1020, 0x1.24ddc33c2bd39p-1020, 0.0,
     0x1.5ddfb18ce43b4p-985, 0x1.33fb563f24859p-154, 0.0, 0.0, 0x1.8fa230296a7ddp-860,
     0.0, 0.0, 0x1.f0383c06ab537p-996, 0x1.c3d26eb8133fcp-48, 0x1.2f367ca5d43eep-996,
     0x1.410a2d4840e83p-1008, 0.0, 0.0, 0.0, 0x1.09e2d01de6454p-502, 0.0,
     0x1.1c3256576ea29p-545, 0.0, 0.0, 0.0, 0.0, 0x1.72d2a93961949p-182, 0.0,
     0x1.0571c05dfd80cp-269, 0x1.10f46a3f4e30cp-764, 0.0, 0x1.6863b8499ae38p-689,
     0x1.4cf07338bff74p-78, 0.0, 0.0, 0x1.15feebca72b3ep-472, 0.0,
     0x1.dc654114807c8p-8, 0.0, 0.0, 0x1.b114c55e3a9b7p-39, 0x1.61bf433a251dap-690,
     0x1.6a71d732c426cp-942, 0x1.65b67dff8f85cp-19, 0x1.05dfb97125882p-296, 0.0, 0.0,
     0x1.e4660b24a0d1ep-545, 0.0, 0x1.ee4f1739083b3p-208, 0.0, 0.0, 0.0,
     0x1.a39b004f843dbp-308, 0x1.eade5bf9e547dp-77, 0.0, 0x1.5f54346cece61p-612,
     0x1.d229556183bfap-826, 0x1.5e4aa27e06c9ep-639, 0.0, 0x1.fd37d84b19e1fp-972,
     0x1.8bfb2df06a65p-896, 0x1.fd12c44b3b447p-694, 0x1.3560b2696729bp-977,
     0x1.31d8a1f523c48p-766, 0x1.007f0159ba604p-913, 0.0, 0.0, 0x1.625cd7a286218p-208,
     0x1.5d4e113d3de1cp-577, 0.0, 0x1.bdc57dda3ddcap-71, 0x1.22b43bd9dbba4p-7, 0.0,
     0x1.ea4b82dae3de3p-606, 0.0, 0.0, 0x1.ef481d9458cp-235, 0.0,
     0x1.d88d5b4155df3p-67, 0x1.eb04ac10661a8p-339, 0.0, 0.0, 0x1.5b9efa068cca4p-68,
     0.0, 0x1.146205efa3418p-813, 0.0, 0x1.1cbf372b91c72p-320, 0.0,
     0x1.62ef834f937c9p-435, 0x1.84137140dcbcep-406, 0x1.7401ad9ac1fd7p-390,
     0x1.8c1c30f2fedfdp-741, 0x1.bf3af8c94ac1fp-263, 0x1.83ea53fda7958p-770, 0.0,
     0x1.f8566757cace1p-442, 0.0, 0x1.cf47ed4ee3123p-856, 0x1.d45c8911e584fp-106,
     0x1.a4a33d1189aadp-414, 0x1.69f40514611f4p-294, 0.0, 0.0, 0.0,
     0x1.a8e75c60e103fp-736, 0x1.273c62bf327b2p-996, 0x1.6957d7aef20dbp-327,
     0x1.0aec8d17b7286p-614, 0x1.e3b37bdbe7622p-229, 0.0, 0x1.5ea0073cbeff4p-762, 0.0,
     0x1.9cf189dae5d31p-1022, 0x1.eadc897b0ff66p-651, 0x1.3ccda6e100275p-490, 0.0,
     0.0, 0x1.a3b9608a1fb4bp-814, 0x1.4278630fbf88dp-670, 0.0, 0.0, 0.0, 0.0,
     0x1.ea37a159896a7p-933, 0.0, 0x1.1460f24df4358p-57, 0x1.51cf18d584721p-609,
     0x1.b7c3bd23d89d3p-144, 0x1.2ff79b64ea86dp-743, 0x1.3f346be1dd1b9p-21,
     0x1.1322733d96815p-216, 0.0, 0x1.47ea10315245ep-564, 0.0, 0x1.f037de4be3024p-815,
     0.0, 0.0, 0x1.a737797f7fa7ep-438, 0x1.601b197527f13p-878, 0x1.21e4ac16a025cp-904,
     0x1.7988b5fef4e35p-833, 0.0, 0.0, 0x1.f61c3085ba6eap-542, 0.0, 0.0,
     0x1.673c52c3f7abbp-141, 0x1.f1c01e36bef38p-388, 0x1.5c930d706661ep-271,
     0x1.fe61039e170e9p-776, 0x1.2906639b40775p-998, 0.0, 0.0, 0x1.760594c25cb18p-491,
     0x1.87f65fb4188c8p-187, 0.0, 0x1.92c56693b8e72p-658, 0x1.b99c2917bd2d7p-260,
     0x1.14aaacee32854p-107, 0x1.b003a0bdb342cp-858, 0.0, 0x1.c629aab749755p-766,
     0x1.7b9d707188b38p-71, 0.0, 0x1.eb82d3fe984p-269, 0x1.89661470a7bddp-444, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1be30eabd593dp-792, 0x1.30e4484c6d61dp-91, 0.0, 0.0,
     0x1.79a6173362395p-621, 0x1.a179f3c6eafcap-484, 0.0, 0.0, 0x1.43b68a16b471bp-195,
     0.0, 0x1.83e92049ba259p-479, 0x1.b71290c2340ccp-151, 0x1.39227e43abfe8p-162,
     0x1.d651cf900f00cp-16, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d6fab349c3af8p-189,
     0.0, 0x1.7c3498b45d862p-80, 0x1.8c42f7bfac0f6p-769, 0.0, 0.0,
     0x1.cfee138dd5901p-917, 0x1.b8ea23cf64747p-883, 0x1.7ab8080714b55p-356,
     0x1.40626ed7bf5e7p-212, 0.0, 0.0, 0x1.c5411a81e378cp-903, 0.0, 0.0,
     0x1.4e2d494e949b3p-848, 0.0, 0x1.b25fc2db0dcb6p-16, 0.0, 0x1.dbbceb7716fcap-861,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e5e09fc99fc7p-383, 0x1.5a979cff5ef76p-1015,
     0x1.0e0a318eb7f82p-582, 0.0, 0.0, 0.0, 0.0, 0x1.b676d2fbda53p-227,
     0x1.496bbf3260399p-972, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4095bf4e5e0e6p-559, 0.0, 0x1.8c2c27d2ad2ccp-79, 0.0, 0x1.8c42a1148b9b7p-632,
     0x1.04c92dd2d1cd8p-62, 0x1.27efcadcd683ap-185, 0.0, 0x1.c5dda144b37bdp-594,
     0x1.8526d1987604ap-453, 0x1.e10e3d733f93dp-1002, 0.0, 0x1.97146a4ab16eep-172,
     0x1.e43ca7a13b635p-981, 0x1.826c59b5f6c1fp-21, 0.0, 0x1.4b726b5d0e97bp-476,
     0x1.7d1c4495e051dp-959, 0x1.49cae865005c9p-538, 0.0, 0.0, 0.0,
     0x1.91b4b269efc9bp-570, 0.0, 0x1.7587ff3214c73p-126, 0.0, 0.0,
     0x1.3846fea7f4dd5p-46, 0x1.ad9b639a120eep-632, 0.0, 0x1.395f056623aa8p-195, 0.0,
     0.0, 0.0, 0x1.260b4a76cffa9p-378, 0x1.4fca4d3390dbfp-172, 0x1.319c8acdcc3ebp-213,
     0x1.c6f475815b99dp-495, 0x1.6e6951eb1a6aep-786, 0x1.84fbaf858253p-622,
     0x1.103595bc76fdbp-785, 0x1.58513445988aap-506, 0x1.37b9d2f5fb4ccp-85, 0.0,
     0x1.ef7859572c1efp-310, 0x1.004b9487b3f3bp-212, 0.0, 0x1.19212825368bap-846,
     0x1.e755ccb336d66p-846, 0x1.f4cce7c1d997cp-585, 0.0, 0x1.8f1fc579de3e7p-741,
     0x1.fffd6f16eb5b1p-477, 0.0, 0.0, 0x1.880e085051c27p-551, 0x1.adeded60e1426p-717,
     0.0, 0x1.aecc013ed4f54p-511, 0x1.7815ef317c3ep-641, 0x1.9d01864c04f2ep-211,
     0x1.f3b36e304f918p-726, 0x1.a11ef5e8f4f45p-48, 0x1.1eac426a6dcd8p-768, 0.0, 0.0,
     0x1.1b5efa4c1f712p-438, 0.0, 0x1.dc02490363736p-613, 0.0, 0x1.7f4cfcba50cabp-160,
     0x1.ded3e38412013p-853, 0x1.516cf51b5ef6bp-757, 0x1.30b64842d6535p-671,
     0x1.4bd3acc615c12p-183, 0.0, 0x1.15b09442c7fedp-308, 0x1.1eaff7d51e5f1p-970, 0.0,
     0x1.e5fc598bcafaep-560, 0.0, 0x1.0ae6094aff601p-627, 0x1.3438792cccad2p-561, 0.0,
     0x1.8032adc569fc4p-49, 0.0, 0x1.3088ca555178cp-977, 0.0, 0x1.7989e9e7b8f11p-453,
     0.0, 0.0, 0.0, 0x1.fc04c44a647e5p-535, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.931e87d42141fp-99, 0x1.3e2884872becep-915, 0x1.f14e775e4fc6fp-282, 0.0, 0.0,
     0x1.cf69d6c5a5699p-68, 0x1.f788c5f331adap-469, 0.0, 0.0, 0.0, 0.0,
     0x1.6b9ae732c188cp-1, 0x1.15075d629573p-691, 0.0, 0.0, 0x1.377b5626f3681p-236,
     0x1.7f88627aa5ea5p-321, 0x1.e01a8bce43833p-1014, 0.0, 0x1.91f9f5c1f7084p-278,
     0x1.60486bbd2a202p-521, 0.0, 0x1.f107dc4fcfbc8p-429, 0.0, 0x1.1b59549825e8cp-632,
     0.0, 0x1.e8c3014442deep-868, 0.0, 0x1.4ceaa227370f6p-623, 0.0,
     0x1.9b7c0883b63d7p-388, 0.0, 0.0, 0x1.6ccb2faa8dc9p-720, 0.0,
     0x1.d85700354f9c9p-911, 0x1.9e182b88c84abp-378, 0.0, 0.0, 0x1.14d0bd912afe1p-735,
     0x1.2221433683955p-981, 0x1.b7d252f7ecbfcp-421, 0.0, 0x1.f778b3143666ap-890,
     0x1.07d40ac67d79cp-417, 0.0, 0x1.648ec598800fdp-847, 0.0, 0.0,
     0x1.5a497a6734202p-845, 0x1.b26ea967bab38p-410, 0.0, 0.0, 0x1.63e50387e4dd8p-303,
     0.0, 0.0, 0.0, 0x1.c837dc6a21d33p-614, 0x1.fe9234f49c19ap-657, 0.0, 0.0, 0.0,
     0x1.cec4b5bdef66p-271, 0.0, 0.0, 0x1.3445a72e52b45p-584, 0x1.d361b40ac07d6p-754,
     0.0, 0x1.b8ca562793a96p-54, 0x1.6591f27e6f16fp-135, 0x1.8a8b46fe18d76p-421, 0.0,
     0x1.25ba438bd6622p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c77187d9bf69p-457, 0.0,
     0.0, 0.0, 0x1.15b57531261f7p-144, 0x1.73f30f436c4c5p-942, 0x1.e95ea88e40904p-654,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b565e3fdcd18p-281, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f6a9c8cbf71e5p-644, 0x1.ec9b9f47649cdp-255, 0x1.a57d4bb375a15p-935,
     0x1.bd7637bece56cp-1020, 0x1.108f21107529cp-257, 0x1.cd5287d6a6bf4p-95, 0.0, 0.0,
     0.0, 0x1.25580383f51a5p-364, 0x1.181b31f693255p-50, 0x1.2e08025990f82p-200,
     0x1.f96aa4db98dbfp-222, 0x1.03323bbd69a13p-56, 0x1.64ab066c23cf7p-624,
     0x1.a4f391f070b7fp-613, 0x1.a6a4ce9961ca5p-663, 0.0, 0.0, 0.0, 0.0,
     0x1.be472689e687cp-47, 0x1.e67fb3128b887p-868, 0x1.4848b3a1a85a8p-864,
     0x1.436ab67edf759p-901, 0x1.7f0591744f442p-548, 0.0, 0x1.c20850a406322p-220,
     0x1.ed3609fc56ecbp-186, 0x1.cc55bdafa78aap-740, 0x1.a25f13ae05ce6p-584,
     0x1.7910a30719e05p-53, 0x1.fdcc6125a0286p-524, 0x1.6bc493f8920fdp-816, 0.0,
     0x1.b37052cd80a83p-1015, 0x1.827ec6bd333bbp-616, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74e4aba06a88cp-226, 0.0, 0.0, 0.0, 0.0, 0x1.79e094252cc54p-846,
     0x1.ea0f571e43d0ep-492, 0x1.507bf33e4fdbcp-19, 0.0, 0x1.c9c793c2f0f58p-748,
     0x1.4a07ff6ae2de9p-31, 0.0, 0x1.004915ebef25ep-252, 0.0, 0.0,
     0x1.81ec7aad8b03bp-580, 0x1.df566c1c62ad5p-949, 0x1.00a74d51f3d3bp-1022, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e350eadabe942p-911, 0x1.5ad626f09c78ep-574, 0.0,
     0x1.e8b93d74e3e55p-904, 0x1.c210d682c806cp-559, 0.0, 0.0, 0.0, 0.0,
     0x1.87d96078af22bp-391, 0x1.4236a29000066p-204, 0.0, 0x1.4ebea2a889c3ep-127, 0.0,
     0x1.43fcdfea300f7p-385, 0.0, 0.0, 0.0, 0x1.d1dc735dcb91cp-670,
     0x1.02280e0c514a2p-109, 0x1.503917208c083p-793, 0x1.4d154655a34d2p-573,
     0x1.0cec3efc946b8p-386, 0.0, 0x1.db32abd254303p-178, 0.0, 0x1.cf487efb14c52p-802,
     0.0, 0x1.cb9d7f7c14cbdp-516, 0x1.25b84fdd5e347p-958, 0.0, 0x1.a3b1ee4437414p-994,
     0x1.17fc70d4765ep-789, 0.0, 0.0, 0.0, 0x1.21b68315d3ab7p-800,
     0x1.274f4fe06386fp-240, 0.0, 0x1.6d35532a06ecfp-243, 0x1.253e894afad07p-757,
     0x1.21cf9f43ecf42p-965, 0.0, 0.0, 0.0, 0x1.e5281e6686c0cp-418,
     0x1.bd056ef5e2281p-580, 0x1.588012f5a26c9p-491, 0x1.0c03a92b65205p-995,
     0x1.3920cc1146b03p-105, 0x1.90ea357e5a35p-735, 0x1.e091b8c19f6cbp-840,
     0x1.c6b7cf6c09244p-285, 0x1.96e3d411afa81p-497, 0x1.f2d9ac0bd2115p-715, 0.0, 0.0,
     0.0, 0x1.146a3bac986a6p-957, 0.0, 0x1.7fe614a437525p-186, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.184d08c2de3e6p-127, 0.0, 0x1.4795e9ecf578p-576, 0x1.57a8435127f8p-510,
     0x1.07e4cd06453a6p-395, 0.0, 0.0, 0.0, 0x1.496b43e14d728p-773, 0.0, 0.0,
     0x1.eef0e5a23646dp-483, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cbfb4a30a0edcp-507, 0x1.db481a56b22c9p-75, 0x1.e030336190807p-52, 0.0, 0.0,
     0.0, 0x1.a81fb30918ae3p-169, 0x1.9c159c08afea7p-478, 0x1.60cd9dafca8eep-429,
     0x1.85e235c7b0466p-646, 0.0, 0x1.25d1ad5a908c8p-581, 0.0, 0x1.fdd7b1aeb307p-368,
     0.0, 0.0, 0.0, 0.0, 0x1.ba252f860fdecp-355, 0x1.b0ca3f532d7dp-910,
     0x1.880c38d402d44p-234, 0.0, 0.0, 0x1.361b7f620c1eap-265, 0x1.f34a1fe48f3b8p-234,
     0x1.df552c4e2bd11p-283, 0x1.2894fda264117p-694, 0x1.947925fa10a37p-108, 0.0, 0.0,
     0x1.d393097710c8p-190, 0x1.c23abdc2c00f1p-781, 0.0, 0x1.6eca0afe2550ep-882, 0.0,
     0.0, 0x1.2f60d5c1b2d75p-920, 0x1.baf24c3569a28p-162, 0.0, 0x1.6e1801e633288p-345,
     0.0, 0.0, 0x1.778e618ed9684p-913, 0x1.d937606b6b88fp-974, 0.0,
     0x1.2969bc7aeca5p-813, 0x1.e4ce38ae6e5c9p-462, 0.0, 0x1.1d9e3ba468546p-807, 0.0,
     0x1.830cce26c84b1p-37, 0.0, 0x1.8b17a3b356949p-760, 0x1.ca149440e88bdp-768, 0.0,
     0x1.73d26f8731effp-270, 0.0, 0.0, 0x1.afc815b4c69c9p-711, 0.0, 0.0,
     0x1.a57771c5fb8efp-540, 0x1.f0e1e235fbce5p-646, 0.0, 0x1.0d41834ca1d22p-333, 0.0,
     0.0, 0x1.a9d953eddb9a5p-293, 0x1.bbf395eef6e68p-173, 0x1.f9175dd08c458p-1018,
     0x1.72a27e7654f7ep-21, 0.0, 0x1.3367231c41796p-643, 0x1.93364c153679dp-916, 0.0,
     0.0, 0.0, 0x1.10ec689268e98p-373, 0.0, 0.0, 0x1.709a7e9ff7ad3p-519, 0.0, 0.0,
     0x1.657604b9ad918p-862, 0.0, 0x1.e1be56d37c36ep-844, 0x1.8d47a7fcbc523p-888,
     0x1.5d9134f1c37a1p-743, 0x1.c73acb73980e4p-197, 0x1.e3889ea9cc635p-286,
     0x1.66e0cfcddb2f8p-661, 0.0, 0.0, 0x1.1a4aaf8842aa7p-921, 0x1.9ece3a8d9133ep-128,
     0.0, 0.0, 0.0, 0x1.5d2cb0f3628a6p-986, 0x1.55a278df7426cp-1001,
     0x1.30e01b0abbeabp-468, 0x1.6ff646e7c6ac4p-71, 0x1.19c1d05f3a88dp-428,
     0x1.78ba847b8b516p-965, 0x1.fc8d75f2d65b5p-982, 0x1.f99e09371ddb6p-183, 0.0, 0.0,
     0x1.36494e2855fcfp-773, 0x1.bb3173b54cf31p-135, 0.0, 0.0, 0x1.39b2db0495392p-657,
     0x1.01cce9b11321bp-673, 0x1.e4b620d64a31ap-591, 0x1.60c542bd568adp-426,
     0x1.e8673a18f6242p-481, 0.0, 0x1.4d0fff5c3bffap-975, 0.0, 0x1.ad573486edeep-876,
     0x1.43aa274de98c9p-705, 0.0, 0x1.cad2f525ef983p-603, 0.0, 0.0, 0.0,
     0x1.2ebd2af3ae9dcp-225, 0.0, 0x1.c86ed861dcee5p-658, 0x1.5d5b364d0d491p-798, 0.0,
     0x1.acfed19616ba9p-364, 0x1.b08012f325353p-786, 0.0, 0x1.4c5b9983a7115p-53,
     0x1.2465ea4996ab4p-89, 0.0, 0.0, 0x1.c1550b83f16b8p-651, 0x1.d9f43249e4c09p-682,
     0x1.f408fc3a67dcbp-716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d67a3b835076cp-527, 0.0, 0x1.641f8045f608ep-314, 0.0, 0.0, 0.0,
     0x1.fdaf7d03fa7ddp-883, 0.0, 0.0, 0x1.460733555d5acp-402, 0x1.426f252c5b218p-52,
     0.0, 0x1.13dfac48c8ceap-660, 0x1.2f4c87b7b2f64p-329, 0x1.9828017130a9fp-163, 0.0,
     0.0, 0.0, 0x1.cdb58025dc126p-645
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
            tmp1 = Sleef_asind2_u10avx2128(tmp0);
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
    printf("Sleef_asind2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_asind2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
