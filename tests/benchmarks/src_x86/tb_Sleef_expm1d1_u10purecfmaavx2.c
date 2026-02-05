/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expm1d1_u10purecfma.c --function \
 *     Sleef_expm1d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.6018f98ecef73p-988, 0x1.c8b8d753a954ep-900, 0.0, 0.0, 0.0,
     0x1.cf490cf006ecfp-979, 0x1.e47aa7fe153bp-796, 0.0, 0.0, 0x1.fb7e3ce6b148p-121,
     0.0, 0x1.0eb6d1c8e6092p-325, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b7281bc5f5a4p-629, 0.0, 0.0, 0x1.a391b14e6b7b8p-757, 0x1.299e22e7daa75p-970,
     0.0, 0.0, 0.0, 0.0, 0x1.199e464629645p-847, 0x1.d02dfa2f80a79p-843, 0.0,
     0x1.ca584ee850d0fp-486, 0x1.190d92d8de2cbp-558, 0x1.81a42882334fp-533,
     0x1.861ef4052c14dp-643, 0x1.731acd81dc872p-266, 0x1.32d1b58987d49p-302, 0.0, 0.0,
     0x1.c642232e5d495p-231, 0x1.ebc799afc7397p-900, 0x1.aec06da81dca2p-1002, 0.0,
     0x1.c66eb99970e98p-286, 0x1.1959d9151da71p-828, 0.0, 0.0, 0x1.74f6ba9537a75p-611,
     0.0, 0.0, 0x1.e114bcaf287ep-1008, 0x1.337e3d8a40617p-397, 0x1.fa9e9feea2a6ap-155,
     0.0, 0.0, 0x1.f8bc6e4161c52p-821, 0x1.da18c61f049b3p-839, 0.0, 0.0,
     0x1.ab51e96ee6557p-994, 0x1.234e7d85cfaa9p-537, 0x1.2b3b8ebdd3e66p-601, 0.0,
     0x1.142f68cff2b73p-642, 0x1.25a70f6bbb50ep-754, 0x1.550e77145aae6p-246,
     0x1.45edaafb0735fp-671, 0x1.04cc0d905fe8fp-786, 0x1.c48e50c72bdc8p-755, 0.0,
     0x1.59d0a47f6bbe2p-279, 0.0, 0x1.9e0319b962056p-1009, 0.0,
     0x1.f8308a69d7381p-723, 0x1.9099c7f301f3ap-380, 0.0, 0.0, 0.0,
     0x1.ac3ac295ecf99p-236, 0x1.8dfa202277fefp-656, 0x1.ee602dbbdffdep-427,
     0x1.67c0ffc14eaf7p-318, 0.0, 0x1.47eca3fea2414p-455, 0.0, 0.0, 0.0, 0.0,
     0x1.a4ebe1e248271p-535, 0.0, 0.0, 0.0, 0x1.299957987f77ap-810,
     0x1.e237fb5123502p-404, 0x1.2638422c8e3bep-277, 0.0, 0.0, 0.0,
     0x1.61fbf0665c5d5p-187, 0x1.1f6a40be20b32p-689, 0x1.125a0d631db7p-211, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.65aef3cc4182ap-543, 0.0, 0x1.cb7df142267e4p-928,
     0x1.3075bf0aea702p-75, 0x1.4b99b1697371cp-357, 0.0, 0.0, 0x1.ba39c2adc1b52p-647,
     0x1.0ad0b26c86036p-15, 0x1.7fcb31ea790ebp-252, 0.0, 0x1.fc3b63dfdcac9p-180, 0.0,
     0.0, 0x1.8b31be6433b26p-29, 0.0, 0x1.0119e99b1ea56p-53, 0x1.1eed487f7542ap-202,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8dbd68e4a6671p-439,
     0x1.a94b32e81525ep-938, 0x1.b779c759d2637p-347, 0.0, 0.0, 0x1.89839ccb891c2p-635,
     0.0, 0x1.abac8b0f7c24fp-489, 0.0, 0.0, 0x1.12eb952c85681p-113,
     0x1.d60cc562efed5p-450, 0x1.671ef1badb8c1p-123, 0.0, 0x1.b75bd0a73b137p-256,
     0x1.f0537f24350cbp-14, 0.0, 0.0, 0.0, 0x1.db5da86881752p-581, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.84971a9928fap-90, 0x1.4362aa358df6cp-19, 0.0, 0x1.89fd247b9c374p-350,
     0.0, 0.0, 0.0, 0x1.972a4dbd024ccp-733, 0x1.84041ff5e01eep-1019, 0.0,
     0x1.92af450122b18p-309, 0x1.2b462b7034101p-239, 0.0, 0.0, 0x1.e0ec2d91a3e7cp-875,
     0.0, 0x1.862d863a8ca58p-965, 0x1.1619de949602ap-2, 0.0, 0.0,
     0x1.d2b96a0781fedp-27, 0x1.ac386f9b23464p-351, 0x1.b611db99896aep-311, 0.0,
     0x1.72243dbbe3288p-434, 0x1.cdc47bec938b4p-583, 0x1.6f72ed63ad324p-392, 0.0, 0.0,
     0x1.26c058addc3afp-106, 0x1.11b4d89427cf6p-393, 0.0, 0x1.1a7cd7c01ef19p-874,
     0x1.4f645fd6d7e07p-1013, 0.0, 0.0, 0x1.edef2c929343p-161, 0x1.028dccc62d3ap-143,
     0.0, 0x1.7fcb1ad1d222bp-285, 0.0, 0x1.924dbd59af486p-193, 0.0, 0.0,
     0x1.2ea169c2af1e3p-357, 0.0, 0.0, 0.0, 0x1.f25aaed4e1903p-73, 0.0,
     0x1.4a89579a0484ap-614, 0.0, 0.0, 0.0, 0x1.6b3391e4520fbp-805,
     0x1.1addbb4d78c8fp-85, 0x1.e423a0cb2fa94p-817, 0.0, 0x1.923224c8b42dep-435,
     0x1.93729d66715dcp-210, 0.0, 0.0, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.7cabe974a5daep-165, 0.0, 0.0, 0x1.e88398e4c909ep-1001, 0x1.3090bf3f5927p-542,
     0.0, 0x1.f505914ce300fp-384, 0x1.9de75cebc2365p-366, 0x1.8451ab9c5754cp-405,
     0x1.c36be34d59a33p-449, 0.0, 0.0, 0.0, 0.0, 0x1.94a9ad34f517ep-698,
     0x1.e549aedb474f9p-132, 0x1.c83cf6e08a213p-1005, 0x1.6f2393cf2f8b2p-640,
     0x1.5b9f9e4a6441ep-97, 0.0, 0x1.362451dd14b38p-559, 0x1.e5972f9e45ecp-575, 0.0,
     0.0, 0.0, 0x1.0f2e5dee2ef18p-13, 0x1.2cdb8b3b1ce53p-57, 0x1.ceb7d4500852dp-617,
     0x1.d68aa1abf1803p-710, 0x1.b70b40f7986c4p-210, 0x1.c81e1bb0f64ccp-800, 0.0, 0.0,
     0x1.f4993a6f4258dp-546, 0x1.34dc4f32e1732p-340, 0.0, 0x1.05fe1bbb03772p-270,
     0x1.b708b92f8aa81p-558, 0x1.5433f417693aap-542, 0x1.5b99c3b8d805cp-794, 0.0,
     0x1.d69e49591f65cp-49, 0x1.5f1397051289dp-620, 0.0, 0x1.15c8ef4e43856p-456, 0.0,
     0x1.dad9eb139bb8cp-480, 0.0, 0.0, 0.0, 0x1.c311dee62a014p-668, 0.0,
     0x1.280f211115bfcp-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1370808ea623bp-299, 0.0,
     0x1.9ea5a1658091fp-498, 0x1.ff377b0003c8bp-710, 0.0, 0.0, 0x1.c966cf13203b9p-529,
     0.0, 0x1.00a776684a99cp-183, 0x1.88b18c6148d88p-136, 0.0, 0.0,
     0x1.9cf12b7d5d108p-89, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fa5d1f5e4568p-191,
     0x1.192444b941809p-60, 0x1.ac5f9ae7feefbp-688, 0x1.0d8c453760f6fp-980,
     0x1.c5c9f6ab49603p-309, 0x1.1b38af48786f8p-956, 0.0, 0.0, 0x1.83c9218793ff9p-235,
     0x1.c588bebbf2b6dp-701, 0x1.8d6b1f21aae29p-873, 0x1.cd238062caba4p-855, 0.0, 0.0,
     0.0, 0.0, 0x1.31601dd230d15p-337, 0x1.0428a944333dep-438, 0x1.c0989f500a5b9p-771,
     0.0, 0x1.a525ecb03916fp-759, 0x1.750986b82edf5p-730, 0.0, 0x1.0b66fb03e8af3p-153,
     0x1.ef22ab62a5446p-9, 0x1.b37d051e1d0f9p-81, 0.0, 0.0, 0.0,
     0x1.52eb022a76c96p-592, 0x1.0f238606e0317p-256, 0x1.cf22d6ae839fbp-692, 0.0, 0.0,
     0x1.a4b45379e7d1ap-602, 0x1.c3bc1f94f945ep-512, 0x1.cb75506f87037p-305, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b0abb765066a4p-360, 0.0, 0.0, 0.0, 0x1.df690dadcb16cp-373,
     0x1.66609dac7fdeap-186, 0x1.cea0a87da5f5bp-912, 0x1.2bcbbaa54b5c2p-551, 0.0, 0.0,
     0.0, 0.0, 0x1.159b5c1d29696p-628, 0.0, 0.0, 0.0, 0x1.eb5ac26162b23p-221,
     0x1.561f19571a48bp-757, 0.0, 0x1.cadf8c63a67eep-704, 0.0, 0x1.805ae44d7c974p-308,
     0.0, 0x1.b3154a7acb93cp-745, 0x1.64ed87ea8dca1p-495, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.783e85be10cddp-305, 0.0,
     0x1.5ccef6a7b0832p-114, 0.0, 0x1.1e727f9147adfp-384, 0x1.2ea9bc3fca4c1p-661,
     0x1.c348d33e9636bp-148, 0x1.4ca14dde59402p-634, 0.0, 0.0, 0.0,
     0x1.f9beefd913ecfp-594, 0x1.75e70c9bab4e9p-266, 0.0, 0x1.3fd8727f5e19dp-476, 0.0,
     0x1.1a0f5b2f6b093p-664, 0x1.e58fd631e4be2p-1017, 0x1.edf9407199c18p-525,
     0x1.341fb41fde1ap-968, 0x1.68704de135d63p-498, 0x1.a386885795d1cp-59,
     0x1.75ce6f09b4a37p-987, 0x1.c92bead4cc95bp-605, 0.0, 0x1.c759b98c09c4bp-207, 0.0,
     0.0, 0x1.5a3899749c727p-862, 0.0, 0x1.1ba031ed3be77p-693, 0x1.725a140cdcb09p-728,
     0x1.b99a3ef5aa1a6p-593, 0.0, 0x1.9459b068dc27dp-413, 0.0, 0x1.bcf2204266241p-341,
     0.0, 0x1.0b3f379a654a1p-72, 0x1.64576ece123d8p-563, 0.0, 0x1.5d0146292fdb2p-495,
     0x1.25ccc147a6a5fp-180, 0x1.2f51ccd61876ap-616, 0.0, 0x1.c91c901615a24p-66,
     0x1.0aa1b52aa3f31p-259, 0x1.022912fb5e927p-539, 0x1.58612cb2cae16p-897, 0.0,
     0x1.c03617169d9afp-218, 0.0, 0.0, 0x1.c52c4e782d286p-408, 0x1.9e191fe555f0dp-223,
     0x1.b3f4206e1ebabp-633, 0x1.2cabd223407e5p-196, 0.0, 0x1.9d986a6c385d5p-473, 0.0,
     0x1.1e3562bbeb91ep-898, 0x1.52864317992cap-707, 0.0, 0.0, 0.0,
     0x1.6cd46645bb46ep-215, 0.0, 0.0, 0x1.8cc120be9c883p-201, 0x1.5e08d9d3ec844p-877,
     0.0, 0x1.1709d38355291p-867, 0.0, 0x1.7bb1a1f76d35bp-947, 0x1.3f90b0e097c12p-676,
     0x1.0d3b9d99bf485p-21, 0.0, 0.0, 0x1.c7e5726aec504p-847, 0x1.0b9c3bfbf7cd1p-567,
     0x1.3c751a772be94p-1005, 0x1.dd90b470eaadep-716, 0x1.2d83a2e4c2c4bp-371,
     0x1.2a841f1d82d2p-947, 0x1.d7c2adbf7ce72p-544, 0.0, 0x1.ee43e95814a62p-860,
     0x1.4ad401ad97da2p-677, 0.0, 0.0, 0x1.df11bac07a0aep-647, 0.0,
     0x1.76d7e25bff1b8p-675, 0.0, 0.0, 0.0, 0x1.76d87ac7768a9p-76,
     0x1.c6b9f168ab7f3p-382, 0.0, 0.0, 0x1.8d6c10a4f2901p-675, 0x1.348d11cd2e876p-777,
     0.0, 0.0, 0.0, 0x1.048ce15721b33p-649, 0.0, 0.0, 0.0, 0.0,
     0x1.e062603031f05p-283, 0x1.80159a37deb59p-617, 0.0, 0x1.225b4cd67fcbbp-85,
     0x1.9cbf5dcbb9759p-651, 0.0, 0x1.422734813d254p-883, 0x1.718d72fe1f088p-649, 0.0,
     0.0, 0.0, 0.0, 0x1.953896c84bc78p-98, 0x1.4258ab1f98e87p-740, 0.0,
     0x1.115d7576394bbp-989, 0x1.ae0a86de14d8bp-517, 0x1.c96e0451579dcp-88, 0.0,
     0x1.fdf2b0a889bcfp-290, 0.0, 0.0, 0x1.5f4d9525c9549p-163, 0.0,
     0x1.622bf196f7fd7p-738, 0x1.4576651096102p-102, 0x1.3ace3c965745ep-967,
     0x1.cfc6403bea2ebp-482, 0.0, 0x1.d85772f956d81p-913, 0.0, 0x1.3a22bc58e1a5ap-914,
     0x1.fd2071c6d4542p-51, 0x1.15076efe989bbp-171, 0.0, 0.0, 0x1.ab9e1b0f5138bp-815,
     0.0, 0.0, 0.0, 0x1.b5e6a8be454c9p-303, 0x1.bdb20d7a7fa6ap-180, 0.0, 0.0,
     0x1.780e315d7dbe4p-480, 0x1.301e0e36debd3p-846, 0x1.68449a218cafep-329,
     0x1.c545491b0a345p-850, 0.0, 0x1.d0a0f384b736bp-184, 0x1.2f75402ca25a2p-442, 0.0,
     0.0, 0x1.b14b79a65758dp-966, 0.0, 0.0, 0x1.660a77b40242ap-1005, 0.0, 0.0,
     0x1.73e9dfc32e1c7p-258, 0x1.5c7a2948eca62p-506, 0.0, 0x1.52d4bdc1af64dp-456,
     0x1.4730bb2f64501p-7, 0x1.0c31e384e65d3p-447, 0x1.6f91d7f273d24p-138, 0.0, 0.0,
     0.0, 0x1.3f389955327cep-912, 0x1.7bd7063f2e9a8p-337, 0x1.27f21cc776d24p-422,
     0x1.5fc4ae35865fap-810, 0.0, 0.0, 0.0, 0x1.84bb5a60925aap-951,
     0x1.29a2383bb4201p-312, 0x1.97b5af2f8fbdp-629, 0x1.31701524d1149p-317, 0.0,
     0x1.f645b433d471fp-34, 0.0, 0.0, 0x1.85ca2b86d54cbp-813, 0x1.ab6f3390f68b7p-644,
     0.0, 0.0, 0x1.2217da051fc4bp-48, 0.0, 0x1.776ca82850fddp-595, 0.0,
     0x1.efe668014b29ep-339, 0x1.91cb251271ffap-355, 0.0, 0.0, 0.0, 0.0,
     0x1.ee48ed2f9cee3p-937, 0.0, 0x1.acf18fc05609p-319, 0.0, 0.0,
     0x1.ad84cb76c97dcp-346, 0.0, 0x1.8b32f05afeaep-705, 0x1.1a6c72ce63ed4p-85,
     0x1.5d7e43f71e05cp-155, 0.0, 0x1.f80b9df174314p-483, 0.0, 0.0, 0.0,
     0x1.109bbb6974f49p-639, 0x1.44f792004b08dp-711, 0.0, 0x1.4e6bcd525ce8ep-900,
     0x1.ea328a31bd1d8p-548, 0.0, 0.0, 0.0, 0x1.6899614f1b872p-596,
     0x1.d7033c3ab6816p-616, 0x1.6c107d9f92fb7p-585, 0.0, 0x1.3426aeb73f346p-50,
     0x1.5d1ddbdaaf4cfp-756, 0.0, 0x1.437e0e908b6cep-726, 0.0, 0.0,
     0x1.1ff297b79d574p-679, 0.0, 0.0, 0x1.3b1a677b17eep-458, 0.0,
     0x1.6c52744b272d2p-746, 0.0, 0.0, 0x1.91bfc6d39c77ap-445, 0.0,
     0x1.96dc703aa8fd9p-155, 0x1.b262cf5843497p-10, 0.0, 0.0, 0x1.8ec567fc7d394p-142,
     0.0, 0x1.9cdb40449bbb2p-547, 0.0, 0x1.413bea655fcffp-470, 0.0, 0.0, 0.0,
     0x1.581fc6a991a5ap-583, 0x1.81dba6ebc70fep-260, 0x1.5094f5b44ea6cp-843,
     0x1.ba853ee896228p-295, 0x1.c3a13cd2e9e4p-880, 0.0, 0.0, 0.0, 0.0,
     0x1.680de18f3870bp-96, 0.0, 0.0, 0.0, 0x1.86fdcfd0028cfp-621, 0.0,
     0x1.ead42bca7e26fp-902, 0x1.313fada1ddabfp-630, 0.0, 0.0, 0.0,
     0x1.ee9ea1d5ee796p-331, 0x1.7df36703f37f3p-9, 0.0, 0x1.1232eb4f6811fp-418,
     0x1.af14a293e590dp-774, 0x1.2c79559860f2ep-739, 0x1.ac7846db02f36p-814,
     0x1.697d8569b8ba4p-113, 0.0, 0.0, 0x1.6edec33f8c4a2p-75, 0.0,
     0x1.c4039053080acp-646, 0.0, 0.0, 0.0, 0x1.a779869bd24f6p-469,
     0x1.3f7d74a445a16p-403, 0x1.ef39a336f3942p-449, 0.0, 0x1.8a7493156137p-445,
     0x1.9fd64d786de74p-564, 0.0, 0x1.9a8875609b6c8p-1007, 0.0, 0.0,
     0x1.21abfddd69bebp-598, 0x1.780ffa81ebacp-305, 0.0, 0x1.779b111063dc1p-45,
     0x1.3a9d3e3bf9da9p-870, 0x1.613100b4e7feep-225, 0.0, 0x1.d64d0d51f3a69p-1012,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.456287305df83p-666,
     0x1.6841c5f98ad11p-939, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4414e18d7356ap-839, 0.0,
     0x1.c35a1439772c7p-606, 0x1.45c6c27289f7bp-1004, 0.0, 0.0, 0.0,
     0x1.59fd081a5590fp-405, 0x1.cbc352b973643p-116, 0.0, 0.0, 0x1.06405ee6a7834p-532,
     0x1.55876f83e828ap-726, 0.0, 0x1.87cc6d9843bfbp-284, 0.0, 0.0, 0.0, 0.0,
     0x1.1a5b2d1abc5e6p-417, 0x1.6f051df4c24e4p-186, 0x1.2dfef77b10574p-968,
     0x1.41cd1d1e25cf2p-874, 0x1.79d191bd3f886p-133, 0x1.ca7ad894e2eacp-978, 0.0, 0.0,
     0.0, 0x1.bc3b9adcabf29p-376, 0x1.f7dab6748e84ep-964, 0x1.5a7ca1e70b5eep-28, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f0c016bbd18e8p-409, 0.0, 0x1.784f9f2779f77p-18, 0.0,
     0x1.d6f3c4774745fp-2, 0.0, 0x1.92d64a088c101p-935, 0.0, 0x1.580e56eeded5fp-410,
     0x1.4dac33e4f928ep-372, 0.0, 0x1.4e9da516c7772p-990, 0x1.107615138cbaep-524,
     0x1.7555c5d32433fp-506, 0x1.cbf93ec84a002p-147, 0x1.42d4d7a2e6ed9p-389, 0.0,
     0x1.923731b293f07p-893, 0x1.9bb62830ea0ap-544, 0x1.ae6245c6c10bdp-769, 0.0, 0.0,
     0x1.719084fb6cf4p-919, 0.0, 0x1.ee6f6b0336c92p-743, 0x1.a5e9795cb3f0cp-670, 0.0,
     0x1.6ea0398e7787p-537, 0x1.c2e33ed3e0053p-618, 0x1.4ee2e2cd0ba36p-300, 0.0, 0.0,
     0.0, 0x1.858c0c285e7eep-113, 0.0, 0x1.d2698671fcb29p-899, 0.0, 0.0,
     0x1.024a23964441ep-1011, 0.0, 0.0, 0.0, 0.0, 0x1.eea4973149773p-50, 0.0,
     0x1.e3a8887fc4b9p-235, 0.0, 0x1.8e1a4d2cfa9f4p-293, 0x1.50cb6c116298dp-949, 0.0,
     0.0, 0x1.4398f2fa9c779p-48, 0x1.e72c77c239711p-844, 0x1.78baa07383291p-717, 0.0,
     0.0, 0x1.251d0f9b987cp-889, 0x1.29552796db98bp-522, 0x1.bde54b371c577p-485,
     0x1.053eb58e3a711p-38, 0.0, 0x1.80f77d68170e6p-337, 0x1.cc70ce2e68773p-172,
     0x1.88ba3ab97b90ap-346, 0x1.77c3525abc29bp-594, 0.0, 0x1.c7c8b2bee5715p-67,
     0x1.2a754fc279a43p-517, 0.0, 0x1.ff9da4995d45dp-469, 0.0, 0x1.3b7aa4d4c9effp-201,
     0x1.68d0e9cbde6aep-217, 0x1.2b11b0b57d315p-504, 0x1.6ccc43f61c7f9p-513,
     0x1.ae79f72e74eebp-51, 0x1.c372c7f757147p-855, 0.0, 0x1.da3e9e1e03bc9p-368,
     0x1.dcd6d7ccac507p-273, 0x1.855a15c7fd15p-506, 0.0, 0x1.215ce53d82e83p-899, 0.0,
     0x1.d702ccdcaa15ep-280, 0.0, 0x1.5e485f9c9186cp-790, 0.0, 0x1.45b592e1053cfp-807,
     0.0, 0.0, 0x1.e3b44064d4ec6p-593, 0.0, 0x1.c50553b7e68ap-12,
     0x1.1f6c981514e34p-886, 0.0, 0.0, 0x1.19d26daf67c5dp-911, 0x1.bf781dc06fa64p-171,
     0x1.d32edc8674359p-892, 0.0, 0x1.c75ef51781fd6p-621, 0x1.bda0b4be4af38p-510,
     0x1.d197fd3c50368p-238, 0x1.a8eede34abfc5p-237, 0x1.7e6f76a0f070ap-87, 0.0,
     0x1.c0771c7a4979cp-842, 0.0, 0x1.9c7f1f44c089fp-720, 0.0, 0.0, 0.0, 0.0,
     0x1.31fda62924ccap-965, 0x1.73724b0c02848p-669, 0x1.018fc633e6157p-9, 0.0,
     0x1.08ba457fff8d9p-275, 0x1.5bb6370f6319fp-632, 0.0, 0x1.36e56fbd6873fp-385,
     0x1.479d031e3b019p-718, 0x1.c1501c88577c3p-167, 0.0, 0.0, 0.0, 0.0,
     0x1.458744a642d57p-266, 0x1.9b6b4fdb4bf02p-551, 0.0, 0x1.35f09760eff42p-827,
     0x1.1dbd72ce372d3p-68, 0x1.6f58ac00e26bfp-643, 0x1.55f4a658fa551p-817, 0.0,
     0x1.b3a5ab9541229p-903, 0.0, 0x1.4681b32be67c7p-306, 0x1.e18c00247156dp-229,
     0x1.6300928c6ed1dp-39, 0x1.470a486ecd749p-239, 0x1.cd50b8715e3c4p-958,
     0x1.5d5563c4c9p-854, 0.0, 0x1.4fe85c2854f33p-859, 0.0, 0.0,
     0x1.e106bc2c2271ap-794, 0.0, 0.0, 0.0, 0x1.34e8d229f163ap-512, 0.0,
     0x1.27ceac5a891f3p-315, 0x1.ffd78d768c1a5p-137, 0x1.3ac0c08b3e2ddp-842, 0.0,
     0x1.758a90c21fbf4p-557, 0.0, 0.0, 0x1.409ef3f6d0abdp-607, 0.0,
     0x1.72b757ee2634dp-525, 0x1.91aeed135b63cp-235, 0.0, 0.0, 0.0,
     0x1.d76caeb42ce2ep-71, 0x1.fd49e889a4aeap-129, 0x1.27d72b6aa9feap-255, 0.0,
     0x1.a1149e7902135p-918, 0.0, 0.0, 0x1.3e0cc9ace710ap-788, 0.0,
     0x1.ec5784dad0803p-70, 0x1.4e9c6de74d0aap-304, 0.0, 0.0, 0x1.ec5172c50ecb3p-444,
     0x1.e72f50eef14b1p-784, 0x1.a1a79c918a9ffp-629, 0.0, 0.0, 0x1.468789243f07ep-462,
     0x1.1776a1efae37p-276, 0x1.3a57ba84272c5p-179, 0.0, 0x1.b046bb42afcccp-693,
     0x1.0f37139225b15p-168, 0x1.c9bb891536083p-791, 0.0, 0x1.d1e64ae5cb3c5p-496,
     0x1.10c32b33c7abp-337, 0.0, 0x1.b3e222989d91ep-265, 0x1.b48629f1eaf45p-361,
     0x1.e51d3cd18c54dp-988, 0.0, 0.0, 0.0, 0x1.08e2c643dd961p-414,
     0x1.ecaaf1d7cbfc3p-183, 0.0, 0x1.d61b677904f95p-968, 0x1.26494fb951e49p-106,
     0x1.a369bedec9b42p-937, 0.0, 0.0, 0x1.d9edde7e941c9p-284, 0x1.e2e7c50e2ca5ep-529,
     0x1.4e86fdc73f023p-111, 0x1.401e386db8a4ep-1009, 0.0, 0x1.9842901c7768dp-465,
     0.0, 0.0, 0x1.580f6a66a62dap-128, 0x1.7cf01453ab69ap-337, 0.0, 0.0, 0.0, 0.0,
     0x1.afd9d91ea200fp-649, 0.0, 0.0, 0.0, 0x1.720197c83c11bp-258,
     0x1.82655a95a2319p-24, 0x1.baf56ef018705p-576, 0x1.cdcf7beef56aep-138, 0.0, 0.0,
     0x1.48ef49c0fc636p-762, 0.0, 0.0, 0.0, 0x1.7b778dd865554p-180, 0.0,
     0x1.cf6aad46c2db1p-113, 0x1.4bdc2842ca2c8p-802, 0.0, 0.0, 0.0,
     0x1.669ee5cfe970bp-134, 0x1.55a1b6491e50dp-876, 0x1.862aac4d402c9p-458,
     0x1.b189b17c00508p-220, 0.0, 0x1.8268b5ae68dc9p-277, 0x1.450c68d90d37ap-17
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
            tmp1 = Sleef_expm1d1_u10purecfma(tmp0);
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
    printf("Sleef_expm1d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_expm1d1_u10purecfma bench acc %la\n", global_bench_acc);
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
