/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd2_u35kvx.c --function Sleef_finz_cosd2_u35kvx \
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
     0.0, 0.0, 0x1.892ae4c02127ap-517, 0.0, 0.0, 0x1.e6a8fba34593fp-438, 0.0, 0.0,
     0x1.42fa46abf6361p-136, 0x1.80e3a3c104156p-252, 0x1.92a6f9e92bc07p-377,
     0x1.56d50a3129ac4p-227, 0x1.24a404a26f1b2p-729, 0x1.a7945be700986p-616,
     0x1.637136881a02ep-781, 0.0, 0.0, 0.0, 0x1.cf3bdaa1b9494p-901, 0.0,
     0x1.172719c757a8ep-804, 0.0, 0x1.ea31c8bef5a68p-952, 0.0, 0.0,
     0x1.7240b25f60feap-758, 0.0, 0.0, 0.0, 0x1.f67d46dc81ba2p-663, 0.0,
     0x1.bfe672b222dccp-198, 0x1.2883a75f39fb2p-808, 0.0, 0.0, 0x1.2f2467463ea33p-282,
     0.0, 0.0, 0x1.bfa679d0b2641p-736, 0x1.3542e0c145ca2p-968, 0.0, 0.0,
     0x1.f721764f9a728p-188, 0x1.4f950cf973373p-627, 0.0, 0.0, 0.0, 0.0,
     0x1.ecfecebde5556p-103, 0.0, 0x1.8b76ce3c1ff39p-753, 0.0, 0.0,
     0x1.04152b72fa0e4p-502, 0x1.94b3886c5f936p-295, 0.0, 0x1.92f9e48685fdap-512, 0.0,
     0.0, 0.0, 0x1.db3615e950b15p-313, 0.0, 0.0, 0x1.af0d182cb3b71p-443, 0.0, 0.0,
     0.0, 0x1.0a7adc636cb0ap-142, 0x1.631bc456e6bc7p-86, 0x1.89e0e3c11b008p-764,
     0x1.e8f9ababcd3fdp-834, 0.0, 0.0, 0x1.b142ce43ea805p-741, 0x1.5484250f2414p-684,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a79c7987e0acfp-389, 0.0,
     0x1.a9855dcd5b632p-422, 0x1.01372d9c598cap-141, 0x1.5a9bf1e753eddp-648,
     0x1.f08ede9b5e3e8p-711, 0.0, 0x1.263505cb81f83p-969, 0x1.3bc840d1a39d6p-190,
     0x1.f31205a5c8fcap-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.41e566c680459p-933, 0.0, 0.0, 0x1.69e91e3a9607p-831, 0x1.30cc66a11d252p-389,
     0.0, 0x1.3cc64fa0c068ep-834, 0.0, 0x1.ff1352fb79b9cp-228, 0x1.a14cdf84dac35p-538,
     0x1.e8566b494442fp-430, 0.0, 0.0, 0.0, 0x1.72d935f069a0ep-419,
     0x1.2b47a38a5b282p-16, 0x1.d3284069e433cp-752, 0.0, 0.0, 0.0,
     0x1.aeae682811bc7p-373, 0x1.1981c87d150b7p-858, 0.0, 0.0, 0x1.ff790562a8184p-883,
     0x1.9b9db004630d3p-448, 0.0, 0.0, 0.0, 0x1.3409525fec41dp-113,
     0x1.f4047bde354e9p-866, 0x1.5f7074da7423bp-585, 0x1.3ac6e8ab6a869p-723, 0.0, 0.0,
     0x1.901ef726b6706p-33, 0x1.ad01dbaf10f76p-1016, 0.0, 0.0, 0x1.4f55ca0aa2427p-130,
     0x1.02beba28ba036p-374, 0.0, 0x1.7f3f63794cbccp-832, 0x1.5584fc31a601p-924,
     0x1.0d79bde6bc6abp-635, 0x1.ce63d1a72fda3p-680, 0.0, 0x1.90b0d3ef332eep-815, 0.0,
     0x1.126c7cd6e1b38p-332, 0.0, 0.0, 0.0, 0x1.1fcbb6a5ae2e2p-19, 0.0,
     0x1.323881d11baa2p-618, 0.0, 0x1.d3d09a10f28d6p-597, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee77e11740f59p-122, 0.0, 0.0, 0.0, 0x1.8a124e62459bbp-384,
     0x1.aa848eed2e7c8p-915, 0.0, 0x1.3a6624e832b64p-963, 0x1.f1be6eeab55acp-192,
     0x1.57b18c951c174p-583, 0.0, 0x1.060ad1fb76c65p-1014, 0x1.3895cbcc0c7bp-110,
     0x1.e1173063911d5p-770, 0x1.559bef077e3p-965, 0.0, 0.0, 0x1.dbf43da4aec8ep-552,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c774fd11978eap-793, 0.0, 0.0,
     0x1.8ae91ee0954d2p-369, 0.0, 0x1.4bdc18e37021bp-458, 0.0, 0.0,
     0x1.d61187908271fp-38, 0.0, 0x1.3c1380641bddap-426, 0x1.b9b4c5dc5bfd9p-967,
     0x1.fad1a7d476848p-925, 0x1.43ff084cd7245p-595, 0.0, 0.0, 0.0, 0.0,
     0x1.034d75e692029p-89, 0x1.6a31bbcc2d4adp-309, 0x1.c218e4bcb30cp-247, 0.0, 0.0,
     0x1.600a8eb5d7034p-279, 0.0, 0x1.0ca704c5bf139p-113, 0.0, 0x1.fb58ef39f924p-906,
     0x1.51630e48fdb76p-884, 0x1.ed1ce6d34d905p-300, 0x1.0998c08091807p-61, 0.0, 0.0,
     0x1.45304502fda03p-809, 0x1.f53635223f637p-664, 0x1.f63a98736e5f5p-430,
     0x1.7906638a7cc61p-20, 0.0, 0x1.12de0f18c5a83p-88, 0x1.834b6fde2dac5p-320,
     0x1.202f95d7a3ea6p-289, 0x1.fdd6feedea571p-431, 0.0, 0.0, 0x1.d711abc2eb208p-806,
     0x1.515ef65b1e588p-27, 0x1.1613bddea77bap-857, 0.0, 0x1.3700c3c8f963ep-828,
     0x1.e691b1d30d395p-658, 0.0, 0.0, 0.0, 0x1.0d6e7f04966fcp-100,
     0x1.af8dda18bb69cp-637, 0.0, 0.0, 0.0, 0.0, 0x1.3b6acbaea7b3fp-1019, 0.0,
     0x1.2cbe1fe412818p-961, 0.0, 0x1.63722086ea22cp-700, 0.0, 0.0, 0.0,
     0x1.9241ebfa0b514p-917, 0.0, 0.0, 0.0, 0.0, 0x1.522586116eecep-159,
     0x1.ba78aae63296fp-175, 0x1.8c3bec0aa11c6p-254, 0.0, 0x1.16723d5c147d6p-703, 0.0,
     0x1.3e3658ba89d6ep-418, 0.0, 0.0, 0.0, 0x1.04f69b934c5dep-612,
     0x1.515721fe54cb8p-597, 0x1.7a0c8834b07d4p-744, 0x1.ae1166d6491e3p-1003,
     0x1.1f5424dbbd0fep-811, 0x1.18dc97be15553p-505, 0x1.c7705048fd393p-642, 0.0, 0.0,
     0.0, 0x1.a061f1b508a56p-680, 0.0, 0.0, 0x1.7dc50f4717167p-247,
     0x1.0d464cc7d31cp-728, 0.0, 0x1.164a50d13243cp-554, 0x1.0ff560c880629p-577, 0.0,
     0.0, 0x1.13f7e06e5670fp-535, 0.0, 0x1.597cfb7021f73p-262, 0.0, 0.0,
     0x1.69567c45658ecp-463, 0x1.d82b050ff6e47p-795, 0x1.10c3c2b35e373p-11, 0.0, 0.0,
     0x1.5c8e92375424ep-637, 0x1.4f58ebe134beep-819, 0x1.767cbf2e634c7p-264, 0.0, 0.0,
     0x1.07e39d47f74b2p-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0001926fef1aep-31, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed9c5192f0481p-789, 0.0, 0x1.346b6a58c97c8p-103,
     0x1.787046148d0e5p-960, 0x1.6bc5b182adbf1p-707, 0x1.dd05a10be759ap-145,
     0x1.7dc49e1fefa36p-319, 0x1.25b4331d31d6fp-564, 0.0, 0x1.220e5c27fec14p-644,
     0x1.ad030291979a5p-305, 0.0, 0.0, 0x1.4b679f598943bp-925, 0.0, 0.0,
     0x1.8bcae4e80ad8ep-967, 0x1.ed379d0dd02b8p-305, 0.0, 0x1.289667840bb0fp-271,
     0x1.ab31304788c16p-284, 0x1.ae7b5e09bac75p-72, 0x1.70caac1fe053fp-306,
     0x1.e1ec1fcdb386p-236, 0.0, 0.0, 0x1.b437b7320117ep-511, 0.0,
     0x1.ae7d655aaf04p-256, 0.0, 0.0, 0.0, 0x1.98f3341039ccdp-178, 0.0,
     0x1.6b75b3f777195p-18, 0x1.6e7c70ecfdb13p-820, 0.0, 0.0, 0x1.9f99e05683344p-769,
     0x1.e6713ef3d70a7p-551, 0x1.63b9abb809082p-386, 0x1.2f058d071f9ap-313, 0.0,
     0x1.16b16d24ed046p-882, 0.0, 0x1.ec28a5efcb75p-856, 0.0, 0.0,
     0x1.069ed78f4dc02p-515, 0x1.6dc4fda64a327p-866, 0x1.85a46c7776a0ap-354, 0.0, 0.0,
     0x1.30ff1efeb1d07p-48, 0.0, 0x1.6a61d79bd818p-434, 0x1.e88102af4af96p-487,
     0x1.24b6c05c317c4p-77, 0.0, 0x1.756b2e55ee9e3p-167, 0x1.006543923b63cp-40,
     0x1.a7d3dd33035ddp-708, 0x1.fe021d0b5bc0fp-628, 0x1.df2f2e8c7c959p-254,
     0x1.062b2dd92919ep-96, 0.0, 0.0, 0x1.fbcfe833d6dcep-658, 0.0, 0.0, 0.0,
     0x1.8142574e6d484p-560, 0.0, 0.0, 0.0, 0x1.17ba25f54f4e1p-98,
     0x1.3f923873e6254p-415, 0x1.d5677544fb3e3p-786, 0.0, 0x1.6eb3a7a24f4ddp-193,
     0x1.c6ed469def189p-702, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.b30fb80f5874dp-472, 0.0,
     0.0, 0x1.86124adc17173p-872, 0.0, 0.0, 0x1.ca75e060a76a6p-564,
     0x1.cb2761ab6f551p-529, 0x1.e9dead32f72ccp-983, 0x1.38139bdeef0adp-515, 0.0,
     0x1.b87373012d19bp-969, 0.0, 0.0, 0x1.e3887d2a9b7f7p-700, 0.0,
     0x1.6751adf4f7222p-574, 0.0, 0.0, 0x1.955925f300a1cp-540, 0x1.a4df1baa1d56ap-934,
     0x1.208d62c42bea8p-363, 0.0, 0.0, 0.0, 0x1.01067a4e9fd9bp-488, 0.0, 0.0,
     0x1.253af5de0839p-27, 0.0, 0x1.bb492a4a6dee7p-957, 0x1.b027c73f36cffp-408,
     0x1.e43837dadf1dcp-158, 0x1.109c9ebe53dfcp-5, 0.0, 0x1.1c5f748cce241p-1012, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.faab289ca1093p-18, 0.0, 0.0, 0x1.7510ead5e71d9p-719,
     0x1.054b712ffb29ap-261, 0.0, 0.0, 0x1.a95a687ab2fc8p-192, 0.0,
     0x1.9fc4c3439daf3p-132, 0.0, 0.0, 0x1.886ed94fba4adp-182, 0.0,
     0x1.7e35b809c570cp-435, 0x1.e15b9e5a25ba6p-927, 0x1.f72ec094a7p-169, 0.0, 0.0,
     0x1.f1be37e76e10dp-75, 0.0, 0.0, 0x1.05e2a3e7a818cp-744, 0x1.e29cc124bc47bp-342,
     0.0, 0.0, 0x1.3d2845fd805ebp-560, 0x1.63553f7810921p-547, 0x1.54213ab8b3653p-689,
     0.0, 0.0, 0x1.9c2bffdc4767bp-895, 0.0, 0x1.02c4272730abbp-323, 0.0,
     0x1.f81b6335a7ab7p-144, 0x1.9909ed36e4d88p-513, 0x1.78814ab03dce2p-1021, 0.0,
     0.0, 0.0, 0x1.8e99aa2b53ab7p-839, 0x1.77fa793eb8634p-3, 0x1.4adcf07794e34p-145,
     0.0, 0x1.d32c3d0cbf98bp-666, 0x1.bbb4f7dbe639ap-598, 0x1.02bec98b12708p-924, 0.0,
     0x1.4926e1e2df22ap-730, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.28cd126dd8736p-330, 0.0,
     0.0, 0.0, 0x1.3e46bf0ea8cbdp-876, 0.0, 0x1.7c50afe749321p-985, 0.0, 0.0, 0.0,
     0x1.8dc6b1931c916p-736, 0x1.47b6b54a53184p-39, 0.0, 0x1.3b623ae383612p-547,
     0x1.19301bbaeceb9p-726, 0x1.21f6da3857b3bp-605, 0.0, 0.0, 0.0,
     0x1.1f092f709b511p-566, 0.0, 0.0, 0x1.fe2f875f4b945p-531, 0x1.319aa48788fa3p-771,
     0x1.bfc2cb81d3b1ap-359, 0.0, 0x1.c0d8db22fdb97p-248, 0x1.0183d14486e03p-677,
     0x1.d436cf4d44719p-667, 0.0, 0.0, 0x1.da93898bf445cp-871, 0x1.df11f48ef247bp-500,
     0.0, 0x1.92805aee8e878p-972, 0.0, 0.0, 0x1p0, 0x1.21c9297b82ea9p-792,
     0x1.19dae4623d173p-740, 0.0, 0.0, 0x1.31158a9d0c689p-987, 0.0,
     0x1.fb1ad06d40b43p-688, 0x1.75a0e207cf27cp-348, 0.0, 0.0, 0.0, 0.0,
     0x1.a6b6b9e038da1p-463, 0x1.22360878e4c3bp-111, 0x1.c2e877540805bp-17,
     0x1.190341982449dp-593, 0.0, 0.0, 0.0, 0x1.93d9ca008581ap-576,
     0x1.9e9acf122df8ap-266, 0.0, 0.0, 0.0, 0x1.27b998fc6bc8ep-491, 0.0, 0.0,
     0x1.17bd3b57179e4p-273, 0.0, 0.0, 0x1.5b64d0e69d58bp-245, 0x1.a2f53a2a2bbcep-50,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0fc555f556922p-913, 0x1.7814cc55d291cp-269,
     0x1.80a4b41acf225p-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f16e6e655d3dap-191,
     0x1.0edb3c9c8723p-423, 0.0, 0.0, 0.0, 0x1.0b5471793121dp-156,
     0x1.6fa821cf2df0bp-401, 0x1.d19a2895132f9p-590, 0.0, 0.0, 0x1.0d65d24014f53p-557,
     0x1.9469c85a8c4f4p-134, 0.0, 0.0, 0.0, 0x1.a81f5ad1f338bp-171, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.aea9cbdc4d2c9p-834, 0x1.b0e497bea9bcep-696, 0x1.eb25b611f7e9fp-321,
     0x1.b1359e6454d8bp-138, 0.0, 0x1.06bd6f551fa1ep-247, 0.0, 0x1.8f631681387fep-629,
     0x1.c9fd466974a2bp-40, 0x1.732513cd6969dp-149, 0x1.80bab40b7a82cp-522,
     0x1.664eda498e1bep-151, 0.0, 0x1.b427eb132e41ap-257, 0x1.ac4e1b068dcaep-58,
     0x1.c8524ce0db8ebp-813, 0.0, 0x1.cb7d234b71abep-20, 0.0, 0.0,
     0x1.c77e60260f5d8p-41, 0x1.b172fe5ababccp-432, 0.0, 0x1.54345eae3414ep-218,
     0x1.f0959971c78b8p-802, 0x1.bc5b5f71208ap-815, 0.0, 0.0, 0.0,
     0x1.a5ab7f932cb12p-143, 0x1.a8b5dff3436bdp-785, 0x1.cae110c456206p-336,
     0x1.f3b24e23012bcp-362, 0.0, 0x1.6560ce0acd063p-318, 0.0, 0.0,
     0x1.7da2b2076845bp-915, 0x1.34c507d53e13cp-978, 0.0, 0x1.a08e902ce7896p-934,
     0x1.5bce2517cbd2p-146, 0.0, 0.0, 0.0, 0x1.0bf507b10527cp-7,
     0x1.56c3c4938e55ep-300, 0x1.f2d8d49cad8e3p-859, 0.0, 0x1.d5e9c2b8d70b7p-847, 0.0,
     0.0, 0x1.9e1e2f4e60b99p-311, 0x1.df50d122b7fe1p-1011, 0.0, 0.0,
     0x1.02459f8f00af2p-386, 0x1.989f3ed8281ddp-123, 0.0, 0.0, 0x1.ceb895f32f488p-815,
     0x1.26fc9ac4edce5p-595, 0x1.9100fcd38000ep-906, 0.0, 0.0,
     0x1.a63b1603b47f6p-1011, 0.0, 0.0, 0x1.4bcb902d5ddd5p-586,
     0x1.d3f7595d69409p-954, 0x1.56fe4f270efa1p-56, 0.0, 0x1.d788a109ca0e3p-773, 0.0,
     0x1.b58d7c7c1d90bp-333, 0x1.a22218a9f49e9p-169, 0.0, 0x1.6d642d7914ab3p-367, 0.0,
     0.0, 0.0, 0x1.9497977121f81p-562, 0.0, 0x1.37c09d5c09823p-888,
     0x1.41eb834ba0457p-388, 0x1.1d979e1485abbp-959, 0x1.9814813ef183p-535, 0.0, 0.0,
     0.0, 0.0, 0x1.51fe9ccfe68ffp-480, 0.0, 0.0, 0.0, 0x1.b54cdc9faba02p-646, 0.0,
     0.0, 0.0, 0.0, 0x1.633f3348628b6p-638, 0.0, 0x1.2cf7a64c93d7ap-203, 0.0, 0.0,
     0x1.0f689dffdb3c2p-167, 0x1.e5f6740125c24p-333, 0x1.261056f50579bp-333,
     0x1.8095fda49dc99p-840, 0.0, 0.0, 0.0, 0.0, 0x1.58f0ffd82d148p-154, 0.0,
     0x1.2336cda5449a8p-494, 0x1.1d9b46ae6a892p-907, 0x1.5732c3e9d836ap-948,
     0x1.761cb36416236p-456, 0x1.8fc2d547568bap-431, 0x1.66a6097034b9ep-918, 0.0,
     0x1.5e59e11baaac9p-11, 0.0, 0.0, 0.0, 0x1.48a981cf68b08p-78, 0.0, 0.0, 0.0,
     0x1.5553afcdd1e8dp-194, 0x1.95279a1ad5adbp-201, 0.0, 0.0, 0x1.105fc88b8c796p-278,
     0x1.3fe5277abc73ap-423, 0.0, 0.0, 0.0, 0.0, 0x1.e66c77c6573bcp-626,
     0x1.46e481ee740d8p-636, 0x1.3e8e821167971p-391, 0x1.b09e3de60a92cp-963,
     0x1.15a5171233f9fp-793, 0x1.fb902107850cp-491, 0.0, 0x1.6f431708e664p-765,
     0x1.facee21b9985bp-737, 0.0, 0x1.be9aec82d58bap-161, 0.0, 0x1.9d3b8ebae7b5cp-328,
     0x1.dcb27cce631c4p-685, 0x1.b37d7a8bacee6p-995, 0x1.f4b0814603e49p-560, 0.0, 0.0,
     0.0, 0x1.518550768fb9ap-838, 0x1.2c92e30ac36dfp-929, 0x1.e2a361096a49p-527, 0.0,
     0.0, 0.0, 0.0, 0x1.8b9648ff26e7cp-1000, 0x1.c7de6edb9686p-733, 0.0,
     0x1.cc6e707403c6ap-786, 0.0, 0.0, 0x1.540cfe7a8c995p-367, 0.0,
     0x1.b75424ae2d3a1p-129, 0x1.7558ea59e5eb1p-255, 0.0, 0x1.e4387d84a1076p-778,
     0x1.08a0c410e249cp-686, 0.0, 0.0, 0x1.5e57b86c9278bp-299, 0.0, 0.0, 0.0, 0.0,
     0x1.d0095fc1e8bf4p-773, 0.0, 0x1.2661051de59e7p-745, 0.0, 0.0,
     0x1.222d9937ed0dcp-531, 0.0, 0x1.9214c5d20251fp-630, 0.0, 0x1.e04b2d8f8cec1p-268,
     0x1.498f34c1bfbbfp-191, 0x1.f84f337179642p-819, 0x1.bf9c5c13308aap-396, 0.0, 0.0,
     0x1.8c88228196974p-23, 0.0, 0x1.44923cb93abb4p-82, 0x1.d29f63742da1ap-17,
     0x1.ba4e74a04e84cp-519, 0.0, 0x1.42a9a9c314886p-620, 0.0, 0x1.9cda37488832ap-607,
     0x1.13289a2ffd2d7p-13, 0x1.20c6791feb6bdp-936, 0.0, 0x1.bfdb3a9b3b7a4p-294,
     0x1.42f5ae595c8b7p-414, 0.0, 0x1.facef6015adddp-547, 0x1.691918fe86f8fp-951, 0.0,
     0.0, 0x1.65686cb38a57p-762, 0x1.b07f22430a334p-56, 0.0, 0x1.2dca0d15b7272p-794,
     0x1.50c94dfd779c6p-690, 0x1.39c051f512e4dp-507, 0x1.092293119a6fep-709, 0.0,
     0x1.1d6794ea1c1b7p-681, 0.0, 0.0, 0x1.cfb883113e7d4p-100, 0x1.4f12353ac48f7p-577,
     0.0, 0.0, 0x1.bd59d476bb89cp-928, 0x1.e0f98f0e61f0bp-338, 0x1.aa44dfa2121e1p-220,
     0x1.4a7f79be190abp-232, 0x1.a79d93497e55bp-531, 0.0, 0.0, 0.0,
     0x1.2aa90000bb073p-472, 0.0, 0.0, 0.0, 0x1.fe04f8b3d1da2p-771,
     0x1.a1995703c38b1p-198, 0.0, 0x1.ffb06f56673e6p-947, 0.0, 0x1.c726cfda4d16fp-16,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dc2e6ee8b3364p-1, 0x1.5efb77248d744p-173,
     0.0, 0.0, 0.0, 0x1.bcc442a493c79p-732, 0x1.872c6d7a99ec3p-156, 0.0, 0.0, 0.0,
     0.0, 0x1.efecf1ed658c7p-437, 0.0, 0.0, 0x1.44084d1a8c355p-403,
     0x1.e0d374b53c2ecp-36, 0x1.1133c52745857p-699, 0x1.a0b8587238c67p-895, 0.0,
     0x1p0, 0.0, 0x1.11092fd479543p-966, 0x1.036e7de0ead52p-63, 0.0,
     0x1.bd229e7be52d2p-12, 0x1.b27a2b027b844p-317, 0.0, 0x1.1a1cac83f0654p-220,
     0x1.fdbc8caa60edfp-122, 0.0, 0.0, 0.0, 0x1.bad0380a75e74p-847,
     0x1.dba9bb08b6215p-207, 0x1.35ca863988bf2p-261, 0x1.66230595ee1p-833,
     0x1.1f0c22d5db206p-834, 0.0, 0.0, 0x1.82ec35f773672p-921, 0x1.05b2a277b39bbp-936,
     0.0, 0x1.5f9958fdeaec8p-165, 0x1.831654ea8110fp-162, 0x1.8b9d54274e6f8p-651, 0.0,
     0.0, 0x1.b8cd1c831ba2dp-407, 0.0, 0x1.5be6c63e68a14p-675, 0x1.c673c4454a49dp-749,
     0x1.1e6752bdf2179p-850, 0x1.9b50bd2b48c8fp-228, 0x1.7b4183f06c2e9p-628, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa027d42bc9e9p-548, 0.0, 0.0, 0.0,
     0x1.880b536836965p-596, 0.0, 0.0, 0.0, 0x1.22b03f7d31575p-431, 0.0, 0.0, 0.0,
     0x1.0cc2a0fbe8395p-848, 0.0, 0x1.ddc448f689923p-531, 0.0, 0.0, 0.0,
     0x1.56f2f93869cp-646, 0x1.35d3b6bf51b4bp-675, 0.0, 0.0, 0.0, 0.0,
     0x1.31becd211f6fdp-491, 0x1.183451d7b3b4bp-446, 0x1.2a47de239cda4p-303,
     0x1.03f2feaef09a6p-238, 0.0, 0x1.d80474000d576p-294, 0x1.6a6be62a4d5bcp-860,
     0x1.5e80d01806ae1p-418, 0x1.b6bf8525e9759p-619, 0.0, 0.0, 0.0,
     0x1.d2ad0ac5947a7p-619, 0.0, 0x1.74afe017bf32fp-918, 0x1.e72c84665bff2p-922,
     0x1.7f05e7604579p-664, 0.0, 0.0, 0x1.31a333d31b842p-935, 0.0,
     0x1.dcb94ca1f758ap-260, 0.0, 0x1.7e28163cc83f9p-74, 0.0, 0.0, 0.0,
     0x1.20f907dafa178p-464, 0.0, 0x1.1455cedea8d43p-187, 0x1.17d194188d23dp-255,
     0x1.f42e88b51f633p-709, 0.0, 0.0, 0.0, 0x1.a95b00e824377p-574, 0.0,
     0x1.75aba32cc51abp-543, 0.0, 0.0, 0x1.43053372c50d7p-465, 0.0, 0.0, 0.0, 0.0,
     0x1.af2a8038e5a2bp-574, 0x1.bafb0d1d5f3b2p-905, 0.0, 0.0
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
            tmp1 = Sleef_finz_cosd2_u35kvx(tmp0);
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
    printf("Sleef_finz_cosd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cosd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
