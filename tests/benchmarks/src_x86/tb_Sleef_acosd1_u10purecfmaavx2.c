/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd1_u10purecfma.c --function \
 *     Sleef_acosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.4a65b6f06e30ap-936, 0x1.f8b48df0d56b2p-996, 0.0, 0.0, 0.0,
     0x1.5906a658fd80bp-582, 0x1.befba2ccd8feap-673, 0x1.b93e4345d75e1p-802,
     0x1.675c4d72776b5p-548, 0.0, 0x1.efc634a19dd39p-6, 0.0, 0x1.fee59bc675289p-900,
     0x1.b293f5428ab9bp-366, 0x1.9068c9b23782bp-19, 0x1.5ebfa7710703fp-771,
     0x1.b724be975ea8ap-642, 0.0, 0.0, 0.0, 0x1.8bd670d0ebe2p-298,
     0x1.aa1f9e882a2fcp-918, 0.0, 0.0, 0x1.4a2aeb87160e5p-267, 0.0, 0.0,
     0x1.c784da180eac2p-433, 0x1.357a010ca9afap-825, 0x1.da2b7a387671ap-283,
     0x1.afce0cf70da2bp-143, 0.0, 0x1.b7c0d778f78e5p-907, 0.0, 0.0, 0.0,
     0x1.2896f97ee3679p-638, 0x1.6d0878bb7c76cp-791, 0x1.347415bd66a0cp-794, 0.0,
     0x1.3d5a941fa87f3p-212, 0x1.07446980705e7p-73, 0x1.a126c24390cf5p-546, 0.0, 0.0,
     0.0, 0.0, 0x1.0974958756037p-542, 0.0, 0x1.acdaeb98a60ebp-236,
     0x1.3232c5aebbbc8p-1022, 0x1.aa5a8497b2a22p-29, 0x1.598e7655bbe63p-55, 0.0,
     0x1.5bdc51f7c852p-683, 0x1.4c9a31c37de24p-483, 0.0, 0x1.284d13508183ep-205,
     0x1.ca516fb5f02acp-663, 0.0, 0x1.4cca1b3f522aep-49, 0x1.eb51b2b8057b3p-531, 0.0,
     0x1.a87cc95989daap-732, 0.0, 0.0, 0x1.36122ca0eaae3p-310, 0x1.94bb7f3d0e145p-701,
     0x1.fe83c3bc714edp-1006, 0.0, 0.0, 0x1.887228478dd2ap-354,
     0x1.c13c94f224f0fp-908, 0.0, 0.0, 0.0, 0x1.46bb545b8bc3fp-942, 0.0, 0.0, 0.0,
     0x1.891bbff3e3ea2p-369, 0x1.62f25256aacb9p-292, 0x1.91b6d7f8513aep-608, 0.0, 0.0,
     0.0, 0x1.a17132d17d41cp-786, 0x1.4a9308ad18e1ep-523, 0x1.2b5499b87bc5ap-646, 0.0,
     0.0, 0x1.2a21886e1fadbp-161, 0x1.017c5fde67d81p-760, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e6a8de10fc597p-271, 0.0, 0.0, 0x1.b84daa97c8de3p-938, 0.0,
     0x1.5f3309be460f9p-225, 0.0, 0x1.217d3a92f3ab2p-1003, 0x1.d96f21fd177acp-311,
     0.0, 0.0, 0x1.62a2fe259ea4ep-516, 0.0, 0.0, 0.0, 0x1.a018338402efp-893, 0.0, 0.0,
     0x1.91c1d5a3c83bep-469, 0x1.dd0125ccfd5cbp-380, 0.0, 0x1.3fe16e6e864f7p-296, 0.0,
     0.0, 0.0, 0.0, 0x1.7952901172eeap-172, 0.0, 0x1.116e4653c776ap-733,
     0x1.cb9ddcb2f87fcp-933, 0.0, 0x1.20b5f10b45c08p-594, 0x1.32a57c3ff6e45p-474,
     0x1.04bd863e792abp-652, 0x1.48380ea882c76p-572, 0.0, 0x1.929d729de7e79p-973,
     0x1.ff8c9a0acebc3p-86, 0x1.f309ef5c4d659p-219, 0x1.2ce9240d89e26p-376,
     0x1.539f891856427p-402, 0x1.aec1946cfeeafp-793, 0x1.4fe93b913af24p-861, 0.0, 0.0,
     0.0, 0x1.a9b5e463c2bd2p-325, 0x1.51fa6735b53e4p-406, 0x1.f13867d78aa6bp-941,
     0x1.12c5a6f832002p-111, 0.0, 0x1.12fc9277a0b2p-81, 0x1.65b58963ca5afp-866,
     0x1.a821a65b903cfp-704, 0x1.f7a023fa3b183p-802, 0x1.443a0f7431e69p-554, 0.0,
     0x1.621ade72f67aap-954, 0x1.b053827f0ce1ap-487, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea509dc9b5ef1p-788, 0x1.674cde702ae5p-691, 0x1.777a9374f0a94p-949, 0.0, 0.0,
     0x1.f7ba1397b9c12p-1000, 0.0, 0.0, 0x1.5a72cf3220742p-974,
     0x1.40b7f1d99f66dp-196, 0x1.8fcf33610072dp-212, 0x1.0a734113fa4e1p-308, 0.0,
     0x1.6d890a8349891p-907, 0.0, 0.0, 0.0, 0x1.d8bda267e6e92p-823, 0.0,
     0x1.7a3899bb8b7cap-942, 0x1.ec1f9a234cbf8p-226, 0.0, 0.0, 0x1.e664c3d62c40cp-508,
     0x1.c7351e38b4656p-338, 0x1.5df101afb38e4p-965, 0x1.ed33e3c8a3152p-17, 0.0, 0.0,
     0.0, 0.0, 0x1.a3eadb50e6511p-118, 0x1.221b4d8302d1cp-533, 0.0, 0.0, 0.0,
     0x1.9eebd587ca04bp-463, 0.0, 0.0, 0x1.b462b0c805617p-511, 0x1.3b674ae1a4df4p-649,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3834286b802ep-737,
     0x1.fed71f7701718p-162, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f8fd0adadfe8p-431, 0x1.d675e7ca38cb1p-453, 0.0, 0.0, 0x1.e5ccaeaa14fe4p-846,
     0x1.92920f6e8f03ep-863, 0x1.4fb8459c93086p-564, 0.0, 0.0, 0x1.91e1b817aa42bp-419,
     0.0, 0x1.577a760977213p-426, 0x1.15b297ee3c5b4p-715, 0.0, 0x1.1d69f13bb80e3p-631,
     0x1.2a981cb7055f3p-385, 0x1.eced0382de588p-68, 0.0, 0x1.6e5f5127eef5p-279, 0.0,
     0.0, 0.0, 0x1.49c366abce3b4p-777, 0x1.f5adfad9f9ed2p-369, 0x1.ece8d1fe95a27p-722,
     0.0, 0x1.1903c13c71a1p-329, 0.0, 0.0, 0x1.0b0bafa2300dep-427,
     0x1.e3db1f648fd08p-347, 0x1.34bc3796aeba4p-772, 0.0, 0.0, 0.0,
     0x1.efb558bef6138p-464, 0.0, 0x1.e1e5269cde19bp-238, 0.0, 0.0,
     0x1.e934ee26bb967p-384, 0.0, 0x1.9f99cc2098abp-377, 0x1.f7e02de8d8dd4p-934, 0.0,
     0x1.a6829bf515468p-152, 0.0, 0.0, 0x1.0ce16bfff7e27p-40, 0.0, 0.0, 0.0, 0.0,
     0x1.79bcb99fb0098p-729, 0.0, 0x1.12ddad1e3a57p-455, 0x1.d0ca633d8fed7p-105, 0.0,
     0x1.05af5760293fep-500, 0x1.ed34e191ba0f2p-969, 0.0, 0.0, 0x1.effa1c64f5ccdp-13,
     0.0, 0x1.d34ece5c2ef1cp-273, 0x1.69be6e110ed7ap-181, 0x1.0d2c566aed46p-998, 0.0,
     0.0, 0.0, 0x1.c03bcd9c2123ep-988, 0x1.63fc9c64e9b6fp-833, 0x1.a8640dd6161bep-932,
     0.0, 0x1.bdc428f5f3adcp-450, 0x1.b64670ba5727dp-492, 0x1.dcf504e0d905fp-972,
     0x1.460e085c7f1e7p-907, 0.0, 0.0, 0x1.ac74c638483e2p-22, 0.0,
     0x1.4cff2e132e74fp-953, 0x1.8b2fb918e884ap-541, 0.0, 0.0, 0x1.21e4280fa4481p-70,
     0x1.af8d840c85347p-309, 0x1.4cc1b762a0e08p-755, 0.0, 0x1.0e5b73f25835cp-28,
     0x1.094abc9b4562dp-425, 0.0, 0.0, 0x1.e95bf13ac7872p-643, 0x1.9876a4fee999ap-834,
     0.0, 0x1.eaaa3d32dd5f6p-441, 0x1.c83e748f9b326p-602, 0.0, 0x1.a35c49381a9adp-784,
     0.0, 0x1.40c599b63a764p-192, 0.0, 0.0, 0.0, 0x1.39f048efcf791p-481,
     0x1.a00589ade2226p-1003, 0.0, 0x1.e158969ad00b3p-734, 0.0, 0x1.7f0378b54e609p-16,
     0x1.29a87695664fp-688, 0x1.fa0d94cf415b3p-372, 0x1.317f42bcbf29p-792,
     0x1.9e3638453356p-109, 0x1.0ce031d42e4dbp-425, 0.0, 0.0, 0.0, 0.0,
     0x1.da5075e4504e5p-446, 0x1.cd9460e0ca4f3p-786, 0x1.f08d2c33750f9p-54,
     0x1.092ffc1f14a79p-899, 0x1.69d776deb355ap-390, 0.0, 0x1.d9702d9c2dc31p-232, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.55c8fd5770ca6p-873,
     0x1.09bc716d589fbp-836, 0x1.65b4be69242cp-104, 0x1.0e2f4c9fcc6e3p-141, 0.0, 0.0,
     0x1.9208e440b9832p-271, 0.0, 0.0, 0.0, 0.0, 0x1.0dcecc6801cb1p-517, 0.0,
     0x1.1ed28890a37f2p-375, 0.0, 0.0, 0.0, 0x1.893acb0891424p-503, 0.0,
     0x1.db22bdc10657ep-912, 0.0, 0.0, 0.0, 0x1.2c43a1561c6acp-970, 0.0,
     0x1.8dabad3ef548bp-570, 0x1.a83c0d67c3a55p-414, 0.0, 0.0, 0x1.7c95b58faff6bp-571,
     0x1.e486f7b706ebcp-418, 0x1.5a06872270df8p-446, 0.0, 0.0, 0.0, 0.0,
     0x1.836d9b8e9bb3ap-575, 0x1.97f748a1e473bp-105, 0x1.a8419547ab3e3p-421, 0.0,
     0x1.051aee03bc2fbp-97, 0.0, 0x1.4b086612735ffp-838, 0.0, 0x1.167f1e02fdf3dp-120,
     0.0, 0x1.465064ecd3d7ap-300, 0x1.4b35d5982a8dep-333, 0x1.43cbe186bfc16p-961,
     0x1.3d23f81a32272p-917, 0x1.e35eabb6c1a42p-329, 0.0, 0x1.7b06ae7a43157p-237,
     0x1.626a24144567fp-666, 0x1.4d1dd1b7b0394p-87, 0x1.53a64dc626e7ap-673,
     0x1.442036bfd124bp-393, 0.0, 0.0, 0x1.d668d8faabca4p-105, 0x1.edc64ecbac2cap-414,
     0x1.7f7a5ddd453f5p-464, 0x1.97d29db56d57bp-88, 0x1.eeac7662ebc9ep-512,
     0x1.9f0efe4841648p-840, 0x1.a31b3cb38f11ep-393, 0.0, 0x1.6a3073fc8742cp-168, 0.0,
     0x1.9b0a8db067ecp-584, 0x1.265bb2f9c0a8cp-187, 0.0, 0.0, 0x1.e4f1bb8ccda7dp-982,
     0.0, 0x1.7adef289b8be4p-796, 0x1.ddff5e4d91955p-31, 0.0, 0x1.64c47e68ce501p-20,
     0.0, 0x1.576d0f0426ab9p-27, 0x1.b6803513f1496p-443, 0x1.a27bfc36193ddp-872, 0.0,
     0x1.e5af60167832ap-70, 0x1.521d4bcf5c4f7p-729, 0.0, 0.0, 0.0,
     0x1.2b101a23d6413p-199, 0.0, 0.0, 0x1.ee7cc7e96cf53p-520, 0.0, 0.0, 0.0,
     0x1.53e8245f12a3p-950, 0x1.67f64590d5079p-671, 0x1.50b078dba82d9p-477, 0.0, 0.0,
     0x1.5b8099075f88ep-790, 0.0, 0.0, 0x1.34d259d135421p-189, 0.0, 0.0, 0.0,
     0x1.a1cada8342e4p-542, 0.0, 0.0, 0x1.0b9605f34950ap-332, 0.0,
     0x1.0557238d72844p-224, 0.0, 0.0, 0.0, 0x1.df243a2f15f18p-766,
     0x1.44ef312862186p-581, 0x1.0ecfbb472a4bcp-866, 0x1.e2191e6760b16p-674, 0.0, 0.0,
     0.0, 0x1.b6eb1026d9adcp-934, 0.0, 0x1.86308dd64564bp-473, 0.0,
     0x1.22374763727e8p-796, 0.0, 0x1.08a4dccb43653p-340, 0.0, 0x1.00dcf349cceabp-141,
     0x1.74d6c22964837p-527, 0x1.0f26abcc7a7f5p-542, 0x1.a43b07263d716p-851, 0.0,
     0x1.93f317f7e62d1p-470, 0.0, 0.0, 0.0, 0x1.0e580247d1ef8p-980,
     0x1.0c63b6910f369p-809, 0.0, 0x1.0d12101d73611p-260, 0.0, 0x1.8a3296f4e745cp-171,
     0.0, 0x1.91bad74e53631p-329, 0.0, 0x1.7531b9333821bp-448, 0x1.37e64ddfe2046p-389,
     0.0, 0x1.2e99d9a081d1ep-315, 0.0, 0x1.fe5c3c56214b7p-641, 0x1.5d690cf7298a8p-273,
     0x1.52b5164a2fad1p-679, 0x1.cb44a152a564ap-808, 0.0, 0x1.fc947f6b6e5edp-747,
     0x1.18337a22ad7afp-694, 0x1.c3e66f20035ecp-201, 0.0, 0x1.6dfd22629a299p-447, 0.0,
     0x1.9762d2a881607p-940, 0.0, 0x1.b287666134daep-794, 0.0, 0x1.2268540fb61ebp-616,
     0.0, 0x1.eec2abd2723acp-156, 0.0, 0.0, 0x1.b51863b293ff2p-840, 0.0, 0.0,
     0x1.df2b3d395f1c7p-27, 0.0, 0.0, 0.0, 0.0, 0x1.ef98915dda924p-639,
     0x1.8824b57a3cf85p-610, 0x1.a5a096fed07c5p-182, 0.0, 0.0, 0.0,
     0x1.9f1c43a966817p-925, 0.0, 0.0, 0.0, 0.0, 0x1.d68f1b3ea1263p-90,
     0x1.4ca6dc2179a21p-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cde3877c31bcbp-66, 0.0, 0.0,
     0.0, 0x1.3c2857db38732p-753, 0.0, 0.0, 0x1.d3861f9daaeb6p-261,
     0x1.fc74d0ff06cfp-498, 0.0, 0.0, 0x1.7e097351b3b4cp-688, 0.0, 0.0,
     0x1.93fbbd55f697cp-551, 0x1.e0942967c298fp-949, 0x1.e0370b0e906ep-43, 0.0,
     0x1.2250a0b58db13p-899, 0x1.ada264c883f6cp-870, 0.0, 0.0, 0.0, 0.0,
     0x1.12915865fa6c4p-815, 0x1.971c8c3b6ea8dp-248, 0.0, 0x1.9b5526f26b9b5p-766, 0.0,
     0x1.a09f1dfbb0bb5p-406, 0.0, 0x1.e7076aeaef1c5p-61, 0.0, 0x1.7552fe7b42698p-887,
     0.0, 0x1.85484b9de9805p-762, 0x1.496ea7b378841p-611, 0.0, 0.0,
     0x1.9f75b9aa13ac2p-289, 0x1.76548dc4b1888p-316, 0x1.9dc902464b2c9p-503,
     0x1.089877bac3662p-656, 0x1.4b3220ce6ede9p-336, 0x1.a8a36c6f00657p-463,
     0x1.30b656d63d112p-548, 0x1.e22d3103d5b98p-938, 0.0, 0.0, 0.0,
     0x1.37fc871433586p-453, 0.0, 0x1.c9d9818a1b2f7p-465, 0.0, 0x1.18b93edb7f045p-38,
     0x1.fc9dbc352f82ap-164, 0x1.62ae934a1114fp-59, 0x1.42b1bd9c19786p-596, 0.0, 0.0,
     0x1.cb6a669764f97p-612, 0x1.94673bfef830cp-952, 0x1.635b9ea9dd9c6p-561, 0.0,
     0x1.99c9b882ae434p-148, 0x1.b1f575a44e5a2p-673, 0.0, 0.0, 0x1.81facdce1e072p-207,
     0x1.b5778e9fe5c7fp-545, 0x1.6da6446a075cdp-25, 0.0, 0x1.c042420cf5f99p-660,
     0x1.0833a8b32e3f3p-884, 0.0, 0x1.846fc323f6786p-649, 0x1.19d497e3cf1ccp-586,
     0x1.d3607677b07b2p-685, 0.0, 0.0, 0x1.5636330c767f7p-823, 0x1.6ba8b7277a606p-374,
     0x1.491066f1d743dp-546, 0x1.166ae7bba2559p-166, 0.0, 0.0, 0.0, 0.0,
     0x1.d91a91f0d89a7p-747, 0.0, 0.0, 0x1.f5cb1b872fe79p-155, 0x1.32fa91bdd2d07p-952,
     0x1.ac72cb0dc2464p-1005, 0x1.10c159dc5f01dp-347, 0x1.ee35b7c3735f5p-78, 0.0,
     0x1.2484dc9d33822p-686, 0x1.726769b131aadp-522, 0.0, 0.0, 0.0,
     0x1.253ae3c5940e8p-633, 0.0, 0.0, 0x1.710e0d8172803p-878, 0.0,
     0x1.664d741d91931p-425, 0x1.7d0c00e3dceb4p-982, 0.0, 0.0, 0.0,
     0x1.eabc7756d9b0ap-63, 0.0, 0x1.832a07b75f4fp-847, 0.0, 0x1.05f6217e8e6a5p-191,
     0.0, 0.0, 0x1.ffe70824eb412p-203, 0x1.62ae330be2e89p-400, 0x1.ba51f5ad5aca9p-324,
     0x1.59603c303a49ep-480, 0x1.16c9b719c0916p-128, 0.0, 0.0, 0.0,
     0x1.57b5a307fe5cap-50, 0.0, 0.0, 0x1.8f11101d84126p-370, 0x1.55af07878d2d4p-757,
     0x1.19f9598935966p-371, 0.0, 0x1.041ff3738399bp-447, 0x1.b578de524b72dp-417, 0.0,
     0.0, 0x1.56e0ea7326c62p-1021, 0.0, 0.0, 0x1.33d8f3ebcf4e7p-945,
     0x1.4914f66561638p-295, 0x1.91a46f0265af7p-1020, 0x1.3bd1ee2ed3294p-759, 0.0,
     0.0, 0.0, 0x1.8be6491c61c69p-607, 0.0, 0.0, 0.0, 0x1.1c97e15699d16p-609,
     0x1.6028473b6eecbp-273, 0.0, 0x1.394fb5b51c604p-251, 0x1.26b59f88dd5cap-738, 0.0,
     0.0, 0x1.4ebea4a5b9155p-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2af4d6e8fa2d8p-194,
     0x1.2adf42b439751p-655, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83190bba0373ep-180,
     0x1.732506b660abap-580, 0.0, 0.0, 0.0, 0.0, 0x1.c79dbe3fa6735p-704,
     0x1.e9950b40a47bap-512, 0.0, 0.0, 0x1.d1ad160b89ce4p-860, 0.0,
     0x1.6ac5e1f021eb7p-952, 0x1.03250f1e905d4p-418, 0.0, 0x1.56a31b11cc76p-536,
     0x1.8adb5c3dbee02p-113, 0x1.b8988053da6f9p-544, 0.0, 0.0, 0x1.f5e077d2ab0a1p-590,
     0.0, 0x1.e469e965fb443p-431, 0.0, 0.0, 0.0, 0.0, 0x1.892cab0ee58d6p-162, 0.0,
     0x1.4628944e4bafp-722, 0.0, 0x1.23e253f3d2eccp-524, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8992cd41f9526p-933, 0x1.154cd598d395ep-83, 0.0,
     0x1.7438558637575p-936, 0x1.d04e7fa38102dp-15, 0.0, 0.0, 0x1.dde582afc2409p-789,
     0.0, 0.0, 0x1.d2a664bfe8d9dp-566, 0x1.f0db3a4afc557p-754, 0x1.e394185ee7ea1p-145,
     0x1.3c1a6a80d824p-907, 0x1.9211c5d43d1c9p-218, 0.0, 0x1.d80dda1e6d8f1p-198, 0.0,
     0x1.393ddb9c38945p-129, 0x1.4d3c21f5be2efp-460, 0x1.32b914aca976fp-293,
     0x1.b25d4463bf1c9p-397, 0x1.ae146de203629p-79, 0x1.9255c65b2f64bp-463, 0.0,
     0x1.82b5b31c3c0c5p-140, 0x1.328f54f547efdp-999, 0x1.40dc0a8592fadp-164, 0.0, 0.0,
     0x1.69d8b35a3c4d3p-19, 0x1.ed249686be2f4p-42, 0.0, 0x1.75b843f2595aap-266,
     0x1.eb0048e0ef382p-310, 0.0, 0x1.9f177924efbp-342, 0x1.bcd53f5975a43p-704, 0.0,
     0x1.7edacfe65bf3dp-893, 0x1.86e8277337f38p-264, 0.0, 0x1.1ea6e7ab0dc5dp-583, 0.0,
     0x1.b92e2a9514cb6p-194, 0.0, 0x1.b1342d7c56051p-874, 0x1.9cd16a3777783p-631, 0.0,
     0.0, 0.0, 0x1.ab61a63ca559fp-339, 0x1.d6fe7a4529bbbp-706, 0.0, 0.0,
     0x1.9307983d48e74p-31, 0.0, 0x1.854e482fa92c8p-839, 0x1.e52f7adbc4cc9p-146, 0.0,
     0x1.12893161f186fp-892, 0x1.f5992521ed4e1p-241, 0x1.c3a23eb790866p-285,
     0x1.42bcd75c7e482p-1018, 0x1.3797b211e5039p-144, 0.0, 0.0,
     0x1.0197526d12cdcp-408, 0x1.a7b22c212632p-284, 0x1.b0a097fc4f276p-604,
     0x1.e647da9000a68p-352, 0x1.d0d1d6853b1d8p-501, 0x1.75c24dd45d865p-870,
     0x1.1d9427b062919p-428, 0x1.9052468bcfb49p-921, 0.0, 0.0, 0.0, 0.0,
     0x1.2e8737adefacdp-86, 0x1.71da933c5db67p-675, 0x1.937a26e60db1ap-921,
     0x1.ba778dde91ed1p-1021, 0.0, 0x1.2f811f15ff0bbp-586, 0x1.2ac0f5c3463e7p-311,
     0x1.4c9b2512e6d12p-622, 0.0, 0.0, 0.0, 0x1.eddfe185bd8b7p-205, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9262563191907p-731, 0x1.0c8bef9ee3af6p-441, 0.0, 0.0, 0.0, 0.0,
     0x1.6fc4a80e46f27p-94, 0x1.14a842312112dp-931, 0.0, 0.0, 0x1.398c50eb960ffp-961,
     0.0, 0x1.e9b0755e21d88p-492, 0x1.31072aa8027bfp-163, 0x1.d4f2be858c088p-473, 0.0,
     0x1.47150f05a12c3p-137, 0.0, 0x1.d21a0053c985ep-624, 0x1.00748496275e3p-659, 0.0,
     0x1.9b2f14ccfb557p-1018, 0x1.8115d46e97168p-555, 0x1.5032939c95504p-943,
     0x1.d0d73be547dc5p-941, 0x1.150919fe279b9p-410, 0x1.7ea890fe86c38p-266,
     0x1.6887c0d7ad4c9p-417, 0x1.0edf124b921d4p-118, 0.0, 0x1.fdb1615126498p-99, 0.0,
     0x1.9206697c92494p-50, 0.0, 0x1.7657604a7e763p-991, 0.0, 0x1.b486b4dae512cp-560,
     0.0, 0x1.0014031fa5829p-1012, 0x1.21f9446e8d021p-610, 0.0,
     0x1.dd406f15a42f1p-262, 0.0, 0.0, 0x1.dc38129069eaap-719, 0.0, 0.0,
     0x1.7abb46f503c4dp-986, 0.0, 0.0, 0x1.7bd8b94d6b251p-510, 0.0, 0.0, 0.0,
     0x1.6146f3812945dp-882, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47c916f890e32p-828, 0.0,
     0.0, 0.0, 0.0, 0x1.5b6efcafbf962p-949, 0x1.67572e1566bf5p-305, 0.0, 0.0,
     0x1.d59554bd3b592p-356, 0x1.bf3c4bcf81bbfp-653, 0.0, 0x1.ddb872ff2cab1p-560, 0.0,
     0.0, 0x1.25f6d7e41f043p-311, 0x1.7d33c1799ac76p-400, 0x1.04361d0a89339p-578, 0.0,
     0.0, 0x1.1d6cca7ba7276p-1001, 0x1.921fc671b97ecp-502, 0.0, 0.0,
     0x1.bc00621f5b745p-214, 0x1.8c2e2f02efc92p-617, 0x1.346205783cb2ep-160, 0.0, 0.0,
     0x1.3a710cee1a6c2p-306, 0.0, 0x1.7cef8400ccc63p-349, 0.0, 0x1.d0eab07f5d0a4p-100,
     0x1.94ee1cffdb7dp-990, 0.0, 0.0, 0x1.bf8810030a2a2p-880, 0x1.8cf4f5a683de3p-577,
     0.0, 0x1.9076aa423f94fp-96, 0x1.b3866d252077cp-129, 0x1.2bdfd4c3ff756p-839,
     0x1.7c8d8d46470aep-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.38d77e9982fe3p-795,
     0x1.0fd4803bed4bfp-309, 0x1.f591fd57b181fp-886, 0x1.01710504b241bp-17, 0.0,
     0x1.6028ad81be35dp-969, 0x1.36f914d3099f6p-451, 0x1.a50d536678e31p-616, 0.0, 0.0,
     0x1.3ecfae9bc057fp-604, 0.0, 0.0, 0.0, 0.0, 0x1.f675d5ec2b371p-537,
     0x1.24a18cd5ffdbap-832, 0x1.a2a24e540574ap-441, 0x1.41b0d0b11f7ecp-209, 0.0, 0.0,
     0x1.549088c3be1f1p-869, 0.0, 0.0
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
            tmp1 = Sleef_acosd1_u10purecfma(tmp0);
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
    printf("Sleef_acosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
