/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd2_u10kvx.c --function Sleef_acosd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.9abb6c3436a77p-255, 0.0, 0x1.27e5b56c80bdep-853, 0.0, 0x1.3e1b7572c1337p-74,
     0.0, 0.0, 0x1.31d6f2c2e644p-893, 0.0, 0x1.d0443a6d7c2adp-562, 0.0, 0.0,
     0x1.062a3ec18242ap-388, 0.0, 0x1.dd8db2e9cdbe2p-923, 0.0, 0.0,
     0x1.36ef6f5b874cp-2, 0x1.a318a618f272ap-235, 0.0, 0.0, 0x1.035752d33fc77p-878,
     0.0, 0.0, 0.0, 0x1.4efd564250f71p-557, 0x1.d003f82666362p-354,
     0x1.9e520924885b8p-36, 0.0, 0x1.f0d81ba8a91eap-922, 0.0, 0.0,
     0x1.5f9dc70db978fp-675, 0.0, 0.0, 0x1.47e55abea6dfp-187, 0x1.22bd655ddb8dcp-166,
     0x1.6a964ab6e276ep-6, 0.0, 0x1.11c4a0bcc5a74p-972, 0.0, 0x1.d029ce80032adp-134,
     0.0, 0x1.9f095c8af0e31p-1006, 0.0, 0.0, 0x1.f42b3964a051p-148, 0.0,
     0x1.b350b1fa2ba3bp-979, 0x1.e285b3890d718p-405, 0.0, 0.0, 0x1.5a738f5a54f1bp-833,
     0x1.210a6c94eb1cap-605, 0.0, 0.0, 0x1.f453747ac1429p-291, 0x1.3d6468663cbfap-850,
     0x1.e82af4637c7b8p-691, 0.0, 0.0, 0x1.d73e673f87b4ap-715, 0.0, 0.0, 0.0,
     0x1.64f45d3f1dfbbp-559, 0.0, 0x1.853756fd6a0eep-715, 0.0, 0.0, 0.0,
     0x1.4fbfd68e3f1c1p-553, 0x1.8ed8dca148a1bp-394, 0x1.d142154efdceep-782,
     0x1.7cc9e4c7ae1e7p-410, 0x1.17a7d7af831f8p-802, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e7ab61c021ea6p-307, 0.0, 0x1.9883fdfb1a2fcp-187, 0.0, 0x1.b9e92dcf25c38p-346,
     0.0, 0x1.819fc5715b843p-11, 0x1.80237a27e4017p-879, 0x1.29623b6ab9635p-739, 0.0,
     0.0, 0.0, 0.0, 0x1.b2223b35c50ep-182, 0.0, 0x1.16892e93c6f5ep-28, 0.0,
     0x1.4776ae2f6e149p-659, 0.0, 0.0, 0.0, 0x1.22a4dbd5311a3p-495,
     0x1.824df5864b5d6p-14, 0x1.626b943782c6ep-362, 0x1.fefd3f7c85488p-133,
     0x1.ffb0cae7aa1f8p-941, 0.0, 0x1.da8144872d45cp-182, 0.0, 0x1.c35982f041bc4p-896,
     0.0, 0x1.517e136b29294p-888, 0.0, 0.0, 0x1.c1ed82f1b7b9cp-69,
     0x1.842e63e4c1fb2p-257, 0x1.57db9c314777fp-885, 0x1.b325d8fa53767p-810, 0.0, 0.0,
     0.0, 0.0, 0x1.00f844210a238p-982, 0.0, 0x1.20962fe36187bp-364, 0.0,
     0x1.f54266c9f3fc7p-187, 0.0, 0.0, 0.0, 0x1.5ed158311af04p-280, 0.0, 0.0,
     0x1.f4ed472079571p-978, 0x1.d12107d70871ep-1020, 0x1.6d0c1c4bdcebfp-304, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b74fbeee0bc5fp-883, 0.0,
     0x1.d68acdfcb1ecbp-440, 0.0, 0x1.ebd4bb43f965fp-23, 0.0, 0.0, 0.0, 0.0,
     0x1.289e9ae3c25cdp-1016, 0x1.1a34a2682aabep-389, 0x1.8b6f82271a8a5p-21, 0.0, 0.0,
     0x1.4f5a3f947c082p-997, 0.0, 0.0, 0x1.ed6393e91b614p-241, 0x1.f892cd4bf86f3p-710,
     0x1.d97a2507ba91p-220, 0.0, 0.0, 0x1.d19cc263dcd5fp-265, 0.0,
     0x1.e5c3fd444968bp-83, 0x1.cc4a5e5e23598p-908, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2423d745c7b3ap-484, 0.0, 0.0, 0x1.912a052a8f8d7p-531, 0.0, 0.0,
     0x1.07389abbba672p-814, 0x1.b03f34b19ddd5p-62, 0.0, 0x1.de2588018f546p-139, 0.0,
     0x1.ebe09db5f7eafp-508, 0x1.9fe1ca8c3979bp-954, 0x1.154cd4f4fc237p-876,
     0x1.e77d51da64162p-573, 0.0, 0.0, 0x1.d7ba700c2bf06p-960, 0x1.f604b38451cb8p-956,
     0.0, 0.0, 0.0, 0.0, 0x1.9f304c0645ac7p-465, 0.0, 0x1.0ee1a5c311961p-323,
     0x1.2c749b834bc3ap-341, 0x1.06ed688b0439cp-1010, 0x1.f7bb9d97e3f3cp-46, 0.0,
     0x1.bb3d47fe428ebp-580, 0x1.504364e7f5499p-312, 0.0, 0x1.c466515e17fc9p-593, 0.0,
     0x1.ba5ac46dead71p-401, 0.0, 0.0, 0.0, 0x1.752649dfb2c83p-768, 0.0,
     0x1.1585f32832c9cp-693, 0.0, 0.0, 0.0, 0x1.7e7889902efeep-387, 0.0,
     0x1.587774335d949p-797, 0.0, 0.0, 0.0, 0.0, 0x1.d74ec459fe612p-12,
     0x1.5c6346866a25p-499, 0x1.d78662ee38b3cp-47, 0.0, 0.0, 0.0,
     0x1.d68b27a635394p-559, 0.0, 0x1.32d134f7cafbbp-356, 0.0, 0.0,
     0x1.0c4a137b56df2p-568, 0x1.076cbb9c88084p-698, 0x1.1f77d10292ed1p-513,
     0x1.58697a8070ed2p-722, 0.0, 0x1.74c7f4a8c574ap-797, 0x1.6090cb8c4cdc3p-638,
     0x1.299a75aaae798p-223, 0.0, 0x1.e66ee55f87c9p-56, 0.0, 0x1.17fac07b52e54p-847,
     0.0, 0.0, 0.0, 0x1.796b47bab3ce3p-591, 0.0, 0.0, 0x1.e8f082965e61dp-596, 0.0,
     0.0, 0x1.9e8f2e0a02595p-310, 0x1.8056727a881fbp-285, 0.0, 0.0, 0.0,
     0x1.1b4baf61949abp-862, 0x1.50feec043e6abp-980, 0x1.1adfe2b08f96ap-152, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.123463e048542p-123, 0x1.4ff6afcb5dc2dp-869, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.3c717dc2684e4p-424, 0.0, 0x1.a7e2e3eb76a9ap-715, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61ce0218de4e8p-284, 0x1.37c5f55edf05ap-264,
     0.0, 0x1.7325381fa48bfp-516, 0.0, 0x1.6b616e202cff5p-272, 0.0, 0.0,
     0x1.2aec5d0fdae9cp-338, 0x1.9eeb4a9c907d3p-1005, 0x1.6ff6dffb83dbep-668,
     0x1.6814aed17f589p-3, 0.0, 0x1.db2246643e93fp-558, 0.0, 0.0,
     0x1.b54932ede8ff4p-439, 0.0, 0x1.2b901e429bc7cp-657, 0.0, 0x1.8f6152f1c8769p-332,
     0.0, 0.0, 0.0, 0.0, 0x1.95e7f696ba314p-752, 0x1.2bba489999f1ap-802, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fe0d7d9b085c1p-179, 0x1.7ce2fb814a81cp-18,
     0x1.a1f61c9d6e099p-777, 0.0, 0.0, 0x1.5ce84f763a9e2p-8, 0.0, 0.0,
     0x1.c60afb36ba261p-969, 0.0, 0x1.2d05e86e9d8f2p-431, 0x1.26c7e3bae3675p-842, 0.0,
     0.0, 0x1.29f85134e4d9dp-827, 0x1.9f9c02feee894p-471, 0.0, 0x1.a0e7db7e5df5dp-281,
     0x1.ca71d23c7ff96p-158, 0x1.807d557572ad1p-167, 0.0, 0x1.f2634aa3b4f3fp-603,
     0x1.5e98687c15c54p-658, 0.0, 0x1.2f043fdbfcda3p-643, 0.0, 0x1.adc19c9986a2bp-489,
     0.0, 0.0, 0x1.1a0b4c29aa034p-464, 0x1.c687e65388aa7p-402, 0x1.e0b09f2066cdcp-112,
     0x1.75796649b9955p-61, 0x1.bd22e7d7d3491p-236, 0x1.3a920d345af1ap-392, 0.0,
     0x1.fc525dc3f761p-943, 0.0, 0x1.4d35e972a962ep-695, 0.0, 0x1.aff544e557f8ep-477,
     0.0, 0x1.21f466f569d58p-365, 0.0, 0x1.bf2dc6ebe2368p-350, 0.0,
     0x1.7f9ab8247496bp-248, 0x1.76337e60d4a36p-136, 0.0, 0.0, 0x1.da110f85ff34dp-990,
     0x1.3bee545b5583p-394, 0.0, 0.0, 0.0, 0x1.29e84316c9d7p-354, 0.0, 0.0,
     0x1.05bd11f872292p-43, 0.0, 0x1.f0de6fcf1e3b1p-109, 0x1.de21d0a989103p-259, 0.0,
     0.0, 0.0, 0.0, 0x1.3d5d60fbceb7cp-490, 0.0, 0x1.5b9f26e4f7fe5p-700, 0.0,
     0x1.96b6ed95aa1bfp-193, 0.0, 0x1.2719044a9dbaap-729, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d42e4f0d7dfbdp-8, 0x1.a770d6d35ee88p-525, 0x1.ca26aa75fa66fp-172,
     0x1.b36e8e0ab42dap-104, 0x1.139d2d4042b7ep-248, 0.0, 0.0, 0.0,
     0x1.cddc5366e0b17p-494, 0x1.b95f9c20e29ccp-891, 0x1.12e7fdb201062p-35,
     0x1.9360e527dc9f1p-747, 0.0, 0.0, 0x1.79f2313e4d2e8p-593, 0.0, 0.0, 0.0,
     0x1.4c80a7d012c76p-342, 0x1.3abd6f668721bp-677, 0.0, 0.0, 0.0, 0.0,
     0x1.2885bdd8664c8p-512, 0x1.08575e8551282p-94, 0.0, 0x1.0966f8b84ee67p-981, 0.0,
     0x1.7b41c32c8068bp-434, 0x1.d11346bf12028p-87, 0x1.c9dbe63fd88abp-300, 0.0, 0.0,
     0.0, 0.0, 0x1.a8aab134ddddbp-137, 0x1.03fa3d6aca6dcp-579, 0.0, 0.0, 0.0,
     0x1.c1539d0415301p-321, 0.0, 0.0, 0.0, 0x1.61b48b1e77786p-156, 0.0, 0.0,
     0x1.7f368c206581fp-299, 0.0, 0x1.d4a2927a138b6p-621, 0.0, 0.0, 0.0,
     0x1.74416514f0f44p-341, 0.0, 0x1.86f481fe7bb4p-282, 0.0, 0x1.3dddb2d629e0ap-541,
     0.0, 0.0, 0x1.b59ddd4842e5bp-589, 0.0, 0.0, 0.0, 0x1.33be9adfb67ep-311, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b8884523f14a4p-301, 0x1.81036b96b99e8p-832, 0.0, 0.0,
     0.0, 0.0, 0x1.8e258e96d8c43p-308, 0x1.8620b97b9de31p-35, 0.0, 0.0,
     0x1.313914e6c7c12p-716, 0x1.080fc00858289p-203, 0x1.608edc62f013dp-375, 0.0, 0.0,
     0x1.a44da96064dbbp-360, 0x1.08c124cd1efe6p-847, 0x1.5269a62f2e393p-302,
     0x1.c8108a97bb034p-829, 0x1.7f107f9a36702p-378, 0x1.d89dd04df52ddp-873, 0.0, 0.0,
     0.0, 0.0, 0x1.b15827ad3a535p-110, 0x1.1089f36ec30cbp-124, 0x1.e9333bdf430e6p-782,
     0.0, 0.0, 0x1.348324dc5eba3p-474, 0.0, 0x1.95d51279fbd58p-471, 0.0, 0.0,
     0x1.7bfd75d175bd9p-834, 0x1.bd214aab170a2p-76, 0.0, 0.0, 0x1.66b49976b870dp-779,
     0.0, 0.0, 0.0, 0x1.ade88559bfcacp-112, 0x1.ab74f118545abp-255, 0.0, 0.0,
     0x1.f3cec2b579b21p-638, 0.0, 0x1.7426726bc460ap-277, 0x1.69b18b39f4a4bp-497, 0.0,
     0.0, 0x1.4813a495f05a8p-921, 0.0, 0.0, 0x1.675165941fc98p-660, 0.0,
     0x1.28da5df8c0a95p-26, 0x1.5436fdcf9a32fp-227, 0x1.8285c0cdff115p-86,
     0x1.a78b11cc431ffp-364, 0x1.5ad797df07413p-991, 0x1.b3d24647b81e2p-675,
     0x1.aa09d87739298p-788, 0x1.c63b91019c4fcp-207, 0x1.97552b62b67d5p-525,
     0x1.e52ebc376bafcp-820, 0.0, 0.0, 0.0, 0x1.5eedd0eeb78fep-185, 0.0,
     0x1.9cc5b1d78e3f7p-796, 0x1.be67c61a4883fp-415, 0x1.e023676b42c5ep-7, 0.0, 0.0,
     0.0, 0.0, 0x1.7dd52c92d3691p-620, 0.0, 0.0, 0.0, 0x1.a6ead5bb62b74p-755, 0.0,
     0.0, 0x1.b349b9519b673p-1008, 0.0, 0x1.b65642f07c44bp-732, 0.0,
     0x1.96a8fec487d7p-850, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.958025d2abeb2p-937,
     0x1.1cde8e3b101a4p-913, 0x1.b4144d0315423p-861, 0.0, 0x1.5da7f42f723cp-1001,
     0x1.0cecb869e9fb7p-839, 0x1.a6b7e73d951acp-972, 0.0, 0.0, 0x1.f520640f050aep-346,
     0.0, 0.0, 0x1.f9ab16a9255b4p-66, 0.0, 0.0, 0x1.39a53e3579243p-758,
     0x1.0cf644b0d2bep-649, 0x1.c57a97889f1abp-538, 0.0, 0x1.1a0a87e3f49b7p-818,
     0x1.7b7b2de9d1291p-262, 0.0, 0.0, 0.0, 0.0, 0x1.5bcab2b5a3c48p-194, 0.0,
     0x1.bea610f83b501p-718, 0.0, 0.0, 0x1.c2607d574c5aep-539, 0.0,
     0x1.135a18fc86ce1p-905, 0.0, 0x1.b2484ce150b05p-690, 0x1.b45f0c0e6f407p-101,
     0x1.670857edd9f0fp-691, 0.0, 0x1.b907b038e9758p-458, 0.0, 0x1.b1885a7fea208p-932,
     0x1.c0c82b67b558bp-505, 0x1.908b8ba60394bp-976, 0x1.1521579747a58p-955, 0.0, 0.0,
     0.0, 0x1.90178531697e4p-610, 0x1.c168c59aa35ep-711, 0x1.f127fe9f1215ap-869, 0.0,
     0x1.62b5d88f2e4a7p-438, 0x1.6fc37c062b175p-53, 0x1.90ce8d9f4d92ap-133, 0.0,
     0x1.52aed121d85a4p-197, 0.0, 0x1.241ab6af159ffp-605, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c851d58967a01p-678, 0x1.07862009c3689p-348, 0.0, 0.0, 0x1.3fa13dd7b2205p-956,
     0.0, 0.0, 0.0, 0x1.05e4251cac38p-311, 0x1.b8feee988c722p-257,
     0x1.71c669e2fd12fp-274, 0.0, 0.0, 0x1.d971bb148544cp-322, 0x1.1abffde72d194p-269,
     0.0, 0.0, 0x1.cd8457a840f82p-54, 0x1.ebf578c55400cp-113, 0x1.02c4659c26d3ep-983,
     0x1.dc07c7f4920f7p-261, 0x1.adee319918e6fp-809, 0x1.00f100e59dd3ep-307,
     0x1.34949365e048ep-878, 0.0, 0.0, 0.0, 0x1.84599902d9c7dp-499, 0.0,
     0x1.cfcc63ef13b3bp-968, 0.0, 0x1.c7aac65de2a28p-510, 0.0, 0x1.d032d83ac2226p-220,
     0x1.41cd7fa96d755p-563, 0.0, 0x1.35396e7a8b89ep-577, 0x1.7f7bf16803b57p-188,
     0x1.7bf7e00de26b1p-267, 0.0, 0x1.c9e265e4c8112p-754, 0.0, 0x1.1fea5dd58a593p-767,
     0x1.73208c2f19b48p-736, 0.0, 0.0, 0x1.7be5363d0fd8cp-290, 0.0,
     0x1.7a3b8b5b239f1p-380, 0x1.f029929a20908p-565, 0x1.9b8fbbe1f6f9fp-842, 0.0, 0.0,
     0.0, 0x1.8063ab3ba590bp-261, 0x1.17e4d91e74a67p-712, 0.0, 0.0, 0.0,
     0x1.dab47f5b43145p-342, 0.0, 0.0, 0.0, 0.0, 0x1.a1966112710d2p-832, 0.0,
     0x1.30f75c8ef4afdp-488, 0.0, 0x1.0cc0fbbbeb2a8p-605, 0.0, 0x1.9e75ec4848b7ap-170,
     0.0, 0x1.703b1f36e2856p-349, 0.0, 0x1.ea673852fc62p-688, 0x1.e5b6824a66572p-647,
     0x1.c9ed0b89ca79cp-829, 0x1.bc59ab9b10c54p-148, 0x1.ae9564a13511p-97,
     0x1.b575a757753e1p-548, 0.0, 0.0, 0x1.4e5fdc805caddp-87, 0.0,
     0x1.e386600ea48f8p-793, 0.0, 0.0, 0x1.ca5e413fce7fbp-103, 0x1.2f384bf20345cp-76,
     0.0, 0x1.0e363e5c3bc0ap-841, 0x1.4cb8e9b42978dp-174, 0.0, 0.0,
     0x1.e9d0a68b1b434p-250, 0.0, 0.0, 0x1.b1f59e08ebc73p-70, 0x1.793016d436b51p-141,
     0.0, 0x1.ba1c1fa82971ep-488, 0x1.fb627003941e1p-272, 0x1.9d41386aade2ap-533, 0.0,
     0.0, 0x1.8171a19fac571p-853, 0.0, 0x1.f004abe69fef7p-865, 0.0,
     0x1.2fb92ee7f421cp-354, 0x1.49d65f654a51ep-867, 0x1.e7fb360f47297p-17, 0.0,
     0x1.7ab1436516d2bp-171, 0.0, 0.0, 0.0, 0x1.e01787d2017cep-754, 0.0,
     0x1.a050c22f11221p-623, 0.0, 0x1.4b8ec6bbde0adp-172, 0x1.da60482da89c5p-876, 0.0,
     0x1.19b20843319acp-412, 0.0, 0x1.a9fcad55b331dp-928, 0x1.d059ad4b4c0dap-653, 0.0,
     0x1.fe856809b3766p-634, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a57f66017135p-330,
     0x1.544f3535d9aabp-498, 0.0, 0.0, 0.0, 0x1.27711770dd7a2p-483,
     0x1.d32f79dd65dbcp-953, 0x1.54e280fb27acfp-581, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9795bcaab29p-208, 0.0, 0.0, 0x1.9aefa7492e564p-512, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3e9c561c736bdp-672, 0x1.cf7d8a589f0cep-252, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.77c361a439439p-938, 0x1.52612a89a73a2p-54, 0.0, 0.0, 0.0,
     0x1.a0585f0018a8fp-228, 0x1.9785a1078f55ep-100, 0.0, 0.0, 0.0, 0.0,
     0x1.c59e4b780bcc5p-843, 0.0, 0.0, 0x1.82cde68dfe747p-673, 0.0,
     0x1.dd829afc5b0fp-437, 0.0, 0x1.9bb308ace3eebp-85, 0x1.cf64c53ef244dp-770,
     0x1.b948e94b762c4p-714, 0x1.ebfde05499a63p-781, 0x1.8b912f582f117p-433, 0.0,
     0x1.881c3100421cbp-301, 0x1.da2ee6a7f7ba4p-1006, 0.0, 0x1.e67f93ec3c2cfp-314,
     0x1.e819d67413182p-755, 0x1.33b8541f83e69p-764, 0x1.007e838a1824dp-465, 0.0, 0.0,
     0.0, 0x1.353bf5759ca41p-944, 0x1.072593064b7fdp-907, 0x1.cb60dba978725p-54,
     0x1.5cb3c082bfbeap-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.19b2fdedffc73p-223,
     0.0, 0.0, 0x1.7eb58d922d756p-532, 0x1.ad06a76d808d5p-585, 0.0,
     0x1.a63e34f58d2e6p-527, 0.0, 0.0, 0x1.8a087a69593fap-769, 0.0,
     0x1.7dd56af2c947dp-411, 0x1.337d0547ccdcfp-600, 0x1.302604162bbf3p-871,
     0x1.b34161b5ee7d4p-481, 0.0, 0x1.e44e2dcaab88bp-294, 0x1.55dd3b313813ep-679, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f3a315be519c8p-433, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.11ba9971a5fcap-542, 0.0, 0x1.2afe799cb1c99p-118, 0.0, 0x1.2a792ff76966cp-668,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a13709afc8ccap-439, 0.0, 0.0,
     0x1.7e872c318e51ap-274, 0.0, 0x1.c8484cd35b2fdp-760, 0x1.9ddd5f2b34b75p-819,
     0x1.831b69f187589p-31, 0.0, 0.0, 0.0, 0.0, 0x1.65729ce2cc85ep-710, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.fbbada22514e1p-235, 0.0, 0.0, 0.0, 0x1.c2fa1fe858098p-391,
     0x1.af918b64831aep-938, 0x1.8e5bfbafba8dap-209, 0.0, 0x1.1f63bd2e975dep-793, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.63ddedab7ef5ap-336, 0.0, 0.0, 0.0, 0.0,
     0x1.96c6c50f4bcdcp-229, 0.0, 0x1.277ee2a9ec81cp-630, 0x1.8b6d95380bdbap-198,
     0x1.8703a8067095bp-672, 0.0, 0x1.5c64ab4d684b9p-526, 0x1.574c21862a42ap-414, 0.0,
     0x1.bf5a078f43f33p-223, 0x1.d2167e982c61ap-956, 0.0, 0x1.a45b53266e2f2p-508,
     0x1.92963b9f5ee04p-832, 0.0, 0x1.cd2ec2ba40365p-833, 0x1.8d47864d2e6d8p-1022,
     0.0, 0x1.77eb52275183fp-1019, 0.0, 0.0, 0.0, 0x1.1ea8e9e9b2487p-461,
     0x1.ffcf82d0ea0b7p-300, 0x1.f75da9a74fcdep-447, 0.0, 0x1.53e5f83ff9e76p-365, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.26465307a6c3cp-891, 0x1.b986406974c64p-168,
     0x1.941d9859c3f7fp-856, 0.0, 0x1.cfd370d3a821cp-336, 0.0, 0.0, 0.0, 0.0,
     0x1.27081acaf7e6cp-331, 0.0, 0x1.2e4b18050fbc7p-659, 0x1.6e6fa253bd2fcp-313, 0.0,
     0.0, 0.0, 0x1.12d8764e639b8p-873, 0.0, 0.0, 0.0, 0.0, 0x1.fb452b82e0a85p-716,
     0.0, 0x1.d5bfe8387c74dp-628, 0.0, 0.0, 0x1.2b1f3cb926e8bp-120,
     0x1.a59abd4092b3dp-881, 0x1.12da5b6e6535ap-356, 0.0, 0.0, 0x1.54eb318034da7p-427,
     0.0, 0x1.177e755156c67p-852, 0.0, 0.0, 0x1.e400e80e322cep-644, 0.0,
     0x1.f338de6cc4f49p-10, 0x1.5402ec1366da2p-840, 0.0, 0.0, 0x1.3d6c01d5ee464p-643,
     0x1.54400c2bdc371p-158, 0.0, 0.0, 0x1.492b7b77d01c7p-594
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
            tmp1 = Sleef_acosd2_u10kvx(tmp0);
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
    printf("Sleef_acosd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_acosd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
