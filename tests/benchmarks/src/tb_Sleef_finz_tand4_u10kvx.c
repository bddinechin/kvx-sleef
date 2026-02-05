/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand4_u10kvx.c --function Sleef_finz_tand4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0.0, 0x1.548561142fa38p-608, 0x1.5f97527f9a05ep-222, 0.0,
     0x1.3b1ecd044c55ep-407, 0x1.573fc8ee56e3cp-18, 0x1.1d69449f911aep-837, 0.0,
     0x1.d7a3f477fef44p-493, 0.0, 0.0, 0x1.dcba5dfdf0782p-192, 0.0, 0.0, 0.0,
     0x1.5243080cda1c1p-46, 0x1.6aaa82434206fp-15, 0.0, 0x1.858fb9ee6fb25p-621,
     0x1.4b858de6864c3p-184, 0x1.0aa1fcf5922b6p-577, 0.0, 0x1.fb78f29369cddp-601, 0.0,
     0x1.ea2bf74ea8c59p-330, 0x1.9bbbd8b12555bp-673, 0.0, 0x1.25dcd3fd93663p-390,
     0x1.6ce7ac879b71fp-989, 0.0, 0x1.fbdd71d11259ap-919, 0.0, 0x1.8292e9d2f5ad5p-376,
     0.0, 0x1.2182bf1272785p-87, 0x1.d2f19d3363f86p-355, 0.0, 0.0, 0.0,
     0x1.85943bc927455p-4, 0x1.c2c3b1413db9ep-114, 0x1.5c1c608d2233cp-818, 0.0, 0.0,
     0x1.82c72299c806cp-392, 0.0, 0x1.fd5b74f560255p-181, 0.0, 0.0, 0.0,
     0x1.2d134c90c13f2p-383, 0.0, 0x1.150c583d4439p-111, 0.0, 0.0, 0.0,
     0x1.d32a026399086p-832, 0x1.a7733b0e99887p-22, 0.0, 0.0, 0.0,
     0x1.fecdd479b789cp-499, 0.0, 0.0, 0x1.27b45895d0a61p-307, 0.0, 0.0, 0.0,
     0x1.56c023141687ap-283, 0.0, 0.0, 0x1.f2d8e94550c0fp-202, 0.0, 0.0,
     0x1.c228ee02dade8p-653, 0x1.baf677cae2836p-551, 0x1.cc4fe6e24aaf7p-446,
     0x1.948d36d36c996p-921, 0.0, 0.0, 0x1.d5fdd324338b9p-147, 0x1.02addceec0484p-752,
     0.0, 0x1.57d56f08db3fap-261, 0.0, 0.0, 0.0, 0.0, 0x1.722fb9f48585ap-937, 0.0,
     0.0, 0.0, 0x1.8f1dfb6820eb9p-534, 0.0, 0.0, 0.0, 0x1.472cd4df95126p-381,
     0x1.65e599d92916fp-617, 0.0, 0.0, 0.0, 0.0, 0x1.89417b1ed1b89p-272,
     0x1.1e846a62c1c35p-112, 0x1.b4a656c84ab47p-367, 0x1.2449c42e79204p-567,
     0x1.b5e67abda856bp-412, 0.0, 0.0, 0x1.51f7eec5b0c28p-912, 0.0,
     0x1.0b85f1756499bp-727, 0x1.59078b8471586p-20, 0.0, 0x1.f693f972c75b2p-618,
     0x1.357269ac0b74fp-163, 0.0, 0x1.75ca3e7f262c8p-348, 0.0, 0x1.2e12ef96aa2fbp-890,
     0.0, 0.0, 0x1.a799bd2c9b644p-998, 0.0, 0.0, 0x1.1067c47fdb8dp-545,
     0x1.f62f5d52e9451p-57, 0.0, 0.0, 0x1.779dd916b75a1p-644, 0x1.a8b1f74f51b76p-176,
     0x1.9bd409906d701p-360, 0.0, 0x1.3d8e93af7af95p-614, 0.0, 0x1.61997f7430256p-672,
     0.0, 0.0, 0x1.d0baca2ba600dp-1003, 0x1.15a451553ab0fp-660,
     0x1.791a20f542322p-387, 0.0, 0.0, 0x1.eb09d08c4eb9cp-338, 0.0,
     0x1.c7b586813657p-212, 0.0, 0.0, 0.0, 0x1.fbeb783a9b7b1p-951,
     0x1.e8b226291fdbcp-373, 0x1.26dc120b03178p-725, 0x1.1575097fbf56bp-826,
     0x1.341462e09731ep-468, 0x1.f96d6423fc2b8p-878, 0x1.a7bf22845b5ecp-335, 0.0, 0.0,
     0x1.46199b572cae6p-694, 0.0, 0x1.57060701df1f2p-378, 0.0, 0.0,
     0x1.c945c741a424cp-477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.839984fa4065cp-870,
     0x1.55d07991478f2p-163, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12b24b0a26d45p-101, 0.0,
     0x1.a1fd2e8f900a9p-94, 0x1.712dfc69d0249p-270, 0x1.b102e06338c29p-328, 0.0, 0.0,
     0.0, 0x1.6137a0b9bf801p-356, 0.0, 0.0, 0x1.174ad82f9467ap-504,
     0x1.fd0ed74d1f709p-823, 0x1.118a0ccb85205p-490, 0x1.d0843b8556ad9p-343,
     0x1.c968c5566c4d7p-55, 0.0, 0x1.8570883f982a3p-428, 0x1.963eb42325923p-31,
     0x1.38741cc832f49p-365, 0x1.2859f419fd258p-993, 0x1.caf999799c76ap-542, 0.0, 0.0,
     0x1.1ba7b9eff2bdap-376, 0x1.ee3f8d6c1d5cep-490, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ab21d4d8d5a1bp-815, 0x1.20be322701a43p-623, 0.0, 0.0,
     0x1.baa3a3463d24fp-946, 0x1.b68e8bf82939fp-99, 0x1.fd46cf48d955bp-829, 0.0,
     0x1.2ec922db07881p-667, 0.0, 0x1.9af1b64835b58p-55, 0x1.d7c39d4089191p-251, 0.0,
     0.0, 0x1.a3541d39ce81bp-949, 0.0, 0.0, 0x1.36431c2dc5a9dp-671, 0.0,
     0x1.7863a2dd7d6f4p-514, 0x1.7c8ab897c95f6p-393, 0.0, 0x1.194944d0036ecp-57,
     0x1.d75f59e0769ffp-516, 0.0, 0x1.4a0db4fd8df21p-436, 0.0, 0x1.ad3ea99fd6261p-26,
     0x1.e957401de89dcp-119, 0x1.724e01a6ac13ep-335, 0x1.436518b207cbdp-634,
     0x1.9213a9c85eda8p-658, 0.0, 0.0, 0x1.933ae0ebfcd8dp-557, 0.0, 0.0, 0.0, 0.0,
     0x1.6576dd98f006cp-54, 0x1.02d739d9af82ap-699, 0x1.936fb1fd7dee8p-511, 0.0, 0.0,
     0.0, 0x1.9810f8c429346p-179, 0.0, 0.0, 0x1.e8341ed240ccfp-967, 0.0, 0.0, 0.0,
     0x1.f6623901ff8ep-715, 0x1.4776dcd67333dp-799, 0x1.11f372974c583p-942,
     0x1.461d1252a5612p-19, 0.0, 0x1.c39a306683494p-149, 0.0, 0x1.f4f1789c4bbbfp-341,
     0.0, 0.0, 0x1.3887f547bbaebp-651, 0x1.43f0477dd89fp-414, 0x1.b210f9a9a8666p-455,
     0x1.aa67315056068p-589, 0.0, 0x1.7ceabb4502167p-778, 0.0, 0x1.2a6f4d2560903p-981,
     0.0, 0.0, 0.0, 0.0, 0x1.2ec1dc531038dp-967, 0.0, 0x1.cf99cfee716ccp-260, 0.0,
     0.0, 0x1.7ef0fbe7ddeb7p-496, 0x1.c3b7e2db14149p-652, 0x1.85e7f0c350ae4p-450, 0.0,
     0.0, 0x1.5f36a06f359c6p-370, 0x1.fe752df8dba5fp-471, 0.0, 0x1.7cc39a582af7ep-185,
     0x1.786ca7c614b7bp-857, 0x1.295538dfefa15p-11, 0x1.8c2ed492f2abap-948, 0.0,
     0x1.04271f335d68dp-657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.35663532288e7p-720, 0x1.5cb3ab9b954fdp-440, 0x1.3a0bc8d88c20dp-663, 0.0,
     0x1.f1ce5dd57e7bep-513, 0x1.da7b710420409p-532, 0x1.9021956e87906p-638,
     0x1.b3e011f020002p-435, 0.0, 0.0, 0.0, 0x1.2a727b81bc7adp-469,
     0x1.46be568b7ccf6p-577, 0.0, 0x1.4a35c637094e8p-114, 0.0, 0x1.c864382729da9p-467,
     0x1.665d98d69e098p-841, 0.0, 0.0, 0.0, 0x1.8757818293b2cp-895, 0.0,
     0x1.dd4247b5e50fap-698, 0.0, 0x1.a538c52786c02p-580, 0x1.a864111f80b32p-376,
     0x1.077438a2d610ep-41, 0.0, 0x1.bb1e1f5872487p-748, 0.0, 0x1.480dc3b2be425p-299,
     0.0, 0x1.f02ecd2799f84p-388, 0x1.b36131428afb6p-940, 0x1.71a18e92960a4p-70,
     0x1.0b969587e7436p-953, 0.0, 0.0, 0.0, 0x1.38fded927786bp-245, 0.0, 0.0,
     0x1.618589dcdd257p-649, 0.0, 0.0, 0x1.f04b68794caf1p-879, 0.0,
     0x1.65d3a2bda6c43p-164, 0.0, 0x1.8e4801bfc00c2p-521, 0x1.a89ae72411467p-59, 0.0,
     0.0, 0.0, 0x1.add6de4411646p-303, 0x1.636fce5f4e0e7p-700, 0.0,
     0x1.aea99f77faf4fp-623, 0.0, 0.0, 0x1.4d40ff5d1ab34p-42, 0x1.3bb88349c38abp-920,
     0x1.343cad1c0d63ep-815, 0x1.e39dd13ad191ep-115, 0x1.3cda7f968d2dp-773,
     0x1.ce7392a80cffcp-980, 0x1.e29c759206458p-359, 0x1.6f8d30205f1a9p-10, 0.0,
     0x1.20e5b4697d7d7p-366, 0.0, 0x1.25e2487723567p-4, 0.0, 0x1.c6409d0215cabp-87,
     0x1.f420f116d6d18p-62, 0.0, 0.0, 0x1.91505b38d8e6bp-991, 0.0, 0.0, 0.0,
     0x1.ba90efd9db4f7p-757, 0.0, 0.0, 0.0, 0.0, 0x1.e3cd290c5f6acp-898, 0.0, 0.0,
     0x1.7aa9cc9173c41p-417, 0.0, 0x1.0e9c0bfb0d63bp-99, 0.0, 0x1.f6c49c8ac38ccp-508,
     0x1.c2a067c8ecc2ep-131, 0x1.aa3820361090bp-843, 0x1.ce024e174115dp-758,
     0x1.a3726397e9109p-50, 0x1.e5fd75e0357f3p-284, 0.0, 0x1.70513b2150ca3p-968, 0.0,
     0.0, 0x1.a5f6bd35df36dp-15, 0.0, 0x1.222dc84e42e0cp-225, 0.0, 0.0, 0.0,
     0x1.e13e9add7a15cp-100, 0.0, 0x1.600dac1806aebp-704, 0x1.2ceb3d0ffff4fp-114, 0.0,
     0x1.f0f1ee0e14dffp-153, 0.0, 0.0, 0x1.08457a561476fp-883, 0.0, 0.0, 0.0, 0.0,
     0x1.2dd031b8f6868p-496, 0.0, 0.0, 0x1.74f45f2196ba3p-878, 0x1.d0c9b61c7b5cbp-468,
     0x1.b065f570ddd2bp-685, 0x1.7740926d38af8p-462, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8fb31608e466p-304, 0x1.c6b9e287b0a64p-840, 0.0, 0.0, 0x1.15bcb28831d5ap-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b112a305fefa1p-347, 0x1p0,
     0x1.3543ff150a8cap-984, 0.0, 0.0, 0.0, 0x1.32b7bdafcfc98p-592, 0.0,
     0x1.95e4d00d0334ap-502, 0.0, 0x1.4250cec23e421p-589, 0.0, 0.0,
     0x1.8c5fa1f2a9194p-478, 0.0, 0.0, 0x1.9ba3984d0d591p-652, 0.0, 0.0,
     0x1.e29737c276c2ap-567, 0.0, 0.0, 0.0, 0.0, 0x1.d3f4072832504p-50,
     0x1.0f14d352d3b87p-338, 0x1.3bb716cae2914p-517, 0x1.18f2914aa2d7dp-1016, 0.0,
     0x1.ceff9ffa7a992p-879, 0x1.ec3e8ccf30134p-798, 0.0, 0x1.d3baee0f3181p-654,
     0x1.f8ba3c2129989p-397, 0x1.4aaff018f3da9p-923, 0x1.daa561bdeb14ep-738, 0.0,
     0x1.d0b9a5ae03882p-738, 0x1.f5416390ee368p-643, 0x1.5e68f532d2ddp-854, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2a04b5dc32ad6p-11, 0x1.72817cc8fca49p-489, 0.0,
     0x1.c6258930b9653p-705, 0x1.e879cd23a337fp-333, 0.0, 0.0, 0.0, 0.0,
     0x1.f552119ff4d89p-634, 0x1.b0aef8a233d26p-754, 0.0, 0x1.8fbc3356a0597p-191, 0.0,
     0x1.724e4b1780df7p-808, 0x1.a17591984e4dap-294, 0x1.d9cc09382afa6p-766, 0.0,
     0x1.4fbfbb83ae263p-901, 0.0, 0.0, 0x1.20e449416d67ap-297, 0.0, 0.0, 0.0,
     0x1.75f41f6e23ecdp-780, 0.0, 0.0, 0x1.a8b5181622725p-590, 0x1.753bfcaaf4c9fp-184,
     0x1.5f26e17fd6bbdp-485, 0x1.fb3bb2cb6c502p-189, 0.0, 0x1.5507b946b7ae2p-1003,
     0x1.1ebca31dae49ap-622, 0.0, 0x1.b8627d8f8a9fbp-55, 0.0, 0x1.1a6e982a1b4bfp-391,
     0x1.df28d7960fc9bp-932, 0x1.8066a01f05753p-224, 0x1.be30181d48412p-220, 0.0, 0.0,
     0.0, 0.0, 0x1.7b198d6b2007ep-605, 0.0, 0x1.ad1c2eb7fefb9p-776,
     0x1.0ebd838a3e064p-675, 0x1.a7cd5cfd4a96ap-857, 0x1.293fa5833ec37p-979,
     0x1.db46d0476810bp-544, 0x1.c52aaa8d16313p-159, 0x1.67507e010cc79p-132, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.274faf2d2b0dfp-1002,
     0x1.e6d61b39ea435p-628, 0x1.114c07ac825c9p-809, 0.0, 0.0, 0x1.8af82023d139cp-534,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5913d74824556p-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d90cf522688f2p-768, 0.0, 0.0, 0.0, 0x1.e4df5e861ae5p-327,
     0x1.db47895d8417cp-60, 0x1.0b42858103ccp-120, 0.0, 0x1.cad9ad343a32ep-420, 0.0,
     0x1.514bc5af84002p-314, 0.0, 0x1.d802a81853bf1p-770, 0x1.fea7d67cd4235p-554, 0.0,
     0x1.244da2858d34ap-808, 0.0, 0.0, 0x1.219bde8ba6b26p-267, 0.0, 0.0,
     0x1.f0f24952702d3p-488, 0x1.d3d698cfe8227p-66, 0.0, 0x1.a106cae1e5622p-383,
     0x1.90584385d11f2p-964, 0.0, 0.0, 0.0, 0x1.c3683d8156004p-711,
     0x1.61c2b66902cd4p-68, 0x1.d0198bcec3b75p-349, 0.0, 0x1.4fd84745f0898p-282,
     0x1.9aecc9d5e017cp-461, 0x1.59bdc5c3b902bp-349, 0.0, 0x1.90b1746c3431p-232, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9151d65d6de24p-448, 0x1.3263143555668p-560, 0.0,
     0x1.67f062f6f54e5p-686, 0.0, 0x1.617facb7c6e93p-127, 0x1.aa10037541daep-434,
     0x1.ec5568880d4b6p-489, 0x1.493ac2bdc73c6p-288, 0x1.530c88a5eea23p-849, 0.0, 0.0,
     0.0, 0x1.fff2057b75092p-884, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbb5a9b9ea5a4p-234,
     0x1.5bbf9fcbb009dp-877, 0x1.d8d801cc29298p-275, 0.0, 0.0, 0x1.8c694914ad5f8p-533,
     0.0, 0.0, 0.0, 0.0, 0x1.11541375c4addp-843, 0.0, 0.0, 0x1.7817cda2e3ae2p-229,
     0.0, 0.0, 0.0, 0x1.8f40a4d2f5ad4p-19, 0x1.fa197f9ade3d2p-833,
     0x1.4466cf9747a1dp-211, 0x1.6a46465710427p-774, 0.0, 0x1.4be84da8d8708p-458,
     0x1.f9f8e222f47adp-948, 0.0, 0x1.990562c34986p-217, 0x1.a19d469fe5676p-417, 0.0,
     0x1.9ce216ba02523p-15, 0.0, 0x1.5f47d5e0890f5p-1015, 0x1.2fc9708e634ap-256, 0.0,
     0x1.3b9fb03aab461p-296, 0.0, 0x1.a08e5372477c5p-566, 0.0, 0x1.e4aad25e74d84p-286,
     0.0, 0.0, 0x1.efc573172c66cp-1006, 0.0, 0x1.45cdfdd43f2c9p-107,
     0x1.a006f60431f45p-573, 0x1.22880d118bb9p-587, 0x1.d6587fc3127b5p-20,
     0x1.09c0ad3a512dap-322, 0x1.9dda51fe4bf88p-819, 0x1.d34b022cec18bp-563,
     0x1.0a43897a6937cp-81, 0x1.cb2f20a5bd935p-217, 0x1.3c72b2d065f5ep-589,
     0x1.f9d85c3b3494p-352, 0x1.4d55018fc54a5p-908, 0x1.47acb3386d29cp-84, 0.0, 0.0,
     0x1.e6b3c2a5cee28p-414, 0.0, 0.0, 0.0, 0x1.b644a9d9a285dp-105,
     0x1.42f516e7c119ap-988, 0.0, 0.0, 0.0, 0x1.678e972c3b8f4p-348, 0.0,
     0x1.79ed768abb9bep-765, 0x1.0fe263e487d4dp-659, 0.0, 0x1.9f182f767970dp-374, 0.0,
     0.0, 0x1.0e26b8a450a5ep-615, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e4c0cdc25805ep-25,
     0x1.8f8c4f968443ep-590, 0x1.2045188323d47p-451, 0.0, 0.0, 0x1.0bf158ab500c6p-995,
     0x1.848c8e379872fp-388, 0x1.1adaea7b02bbbp-370, 0.0, 0x1.8a594c7cd912cp-843, 0.0,
     0x1.feef5efd9ad28p-1012, 0x1.d391749eeaa6p-98, 0.0, 0x1.a5951851ae668p-954,
     0x1.a5c02a6fd692fp-454, 0.0, 0.0, 0x1.a2f5085d2b9ddp-847, 0x1.645e9f682186dp-240,
     0x1.ec3c7000c1edap-942, 0.0, 0.0, 0x1.9cdb45f5684dap-827, 0.0, 0.0,
     0x1.b18037761b336p-7, 0.0, 0x1.958a677e1c90fp-155, 0.0, 0x1.76c2cafcba8e1p-151,
     0.0, 0.0, 0.0, 0x1.93b370d22d0adp-56, 0x1.227fc6eac9fa6p-717,
     0x1.ca09a74aabcb4p-287, 0.0, 0x1.d4125dc028f34p-1013, 0x1.4a6ee00be5f53p-967,
     0x1.8f2d090b2c75bp-5, 0.0, 0x1.736ce87f769ecp-392, 0.0, 0.0,
     0x1.65dd6410cc87p-630, 0.0, 0x1.32aac5c2e1fbap-938, 0.0, 0.0,
     0x1.381e940a0bbdcp-933, 0x1.229dd68917bbcp-283, 0x1.164de5f7679c5p-1002, 0.0,
     0.0, 0.0, 0x1.0e407c9c0310dp-94, 0x1.af937b82c1e75p-847, 0x1.d7045a0d8ea25p-324,
     0x1.0611848a9beaap-294, 0.0, 0.0, 0x1.2cb8747f303adp-10, 0.0,
     0x1.799cf4bf04508p-985, 0x1.303bb6b59d39bp-105, 0x1.8fa92f3a3dfbdp-539, 0.0,
     0x1.00bb24904b02ep-840, 0.0, 0x1.011e099a210f7p-406, 0x1.a1ec03e14ff6cp-707,
     0x1.4731e4caaf835p-1010, 0.0, 0x1.318933949fcb1p-64, 0x1.b7b8553a0a57p-41, 0.0,
     0x1.c8682a7765aacp-72, 0x1.a8d38767eacb9p-891, 0.0, 0x1.aacb790a3ecbbp-724, 0.0,
     0x1.7ee8f26c8c337p-257, 0x1.1305116152ab5p-960, 0x1.eb97df05f1fe2p-733,
     0x1.fb01743d956efp-210, 0.0, 0.0, 0.0, 0x1.4083fc24aa053p-940, 0.0,
     0x1.186d4c9a98ad2p-387, 0x1.18366297b804ap-387, 0x1.8424a61162d31p-284, 0.0,
     0x1.b92c2b4146c56p-438, 0x1.ed935e870bc8dp-387, 0.0, 0.0, 0.0,
     0x1.c83960c6b946dp-320, 0.0, 0.0, 0x1.f10011bc3085p-282, 0.0,
     0x1.8121f82dffeb6p-721, 0.0, 0.0, 0.0, 0x1.7a33bd15cfb74p-593,
     0x1.be90403ee3874p-161, 0.0, 0.0, 0.0, 0x1.265f8c829d5c5p-603, 0.0, 0.0,
     0x1.892c56825c042p-284, 0x1.87dc003a357edp-95, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.adecb876744a1p-44, 0x1.2d1317d760958p-642, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7f73f618d9973p-630, 0.0, 0x1.420826b3a1eeap-889, 0.0, 0.0,
     0x1.c26d59e8cc8dfp-985, 0x1.106bfda055a61p-735, 0.0, 0.0, 0.0, 0.0,
     0x1.f29ff1f93777bp-710, 0x1.df3de716f86a6p-797, 0.0, 0.0, 0x1.5458fcdaa5438p-29,
     0x1.2575d9c2273c5p-569, 0.0, 0x1.e10de35dbcce3p-524, 0.0, 0.0,
     0x1.c7d391f99bea2p-482, 0.0, 0x1.acdf18b29a2acp-879, 0.0, 0.0,
     0x1.a8a1fafc7f868p-833, 0x1.cb0c68651c648p-540, 0.0, 0x1.1bdd75a820e2ep-870,
     0x1.0781e671cef77p-406, 0x1.b2f559cd3bc88p-273, 0.0, 0x1.0a439cc637c51p-833,
     0x1.aebbda06bb203p-528, 0x1.9c2d94ab1b643p-366, 0x1.01346b27cfc75p-851,
     0x1.09fb100206c03p-29, 0x1.5382fcda53983p-670, 0x1.abdf6009bca54p-315, 0.0,
     0x1.c9d0cc90dc8cfp-258, 0.0, 0.0, 0.0, 0x1.21a79f970223ep-893,
     0x1.039de7574b9a3p-376, 0.0, 0.0, 0x1.3bf0db26cea4fp-581, 0x1.31e9d9db5726dp-436,
     0x1.f128299cdcb04p-845, 0x1.21fe8d78c2623p-397, 0.0, 0x1.f57675b9cc954p-581, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89dc398b57c75p-256, 0x1.bf68b25c28a79p-601,
     0x1.a39e3acf957a2p-38, 0.0, 0.0, 0x1.b2669be65fa4fp-544, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0d2c98f125761p-659, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.79c7d121f986ap-349, 0x1.397632b99c242p-673, 0x1.1cd8a1f1df554p-211, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0a6da614959dcp-444, 0.0, 0.0, 0x1.40a9050599442p-531,
     0x1.6ce4757e427a3p-45, 0x1.f78c9b421fdfp-399, 0.0, 0x1.7b3dd8fdd837ap-540, 0.0,
     0.0, 0x1.fcbede35bbfcp-423, 0.0, 0.0, 0x1.0c894cbf90324p-178,
     0x1.bae334bff22dp-79, 0.0, 0x1.137b2a6be2a66p-506, 0.0, 0.0, 0.0,
     0x1.5007d68687ceep-189, 0.0, 0x1.a73d51d1c4082p-522, 0.0, 0.0,
     0x1.1131c2fbf97fep-120, 0.0, 0.0, 0x1.d26214ba23da7p-318, 0x1.d4676f32677d8p-842,
     0x1.006387c469e3ap-871, 0x1.95a256a380423p-318, 0x1.f7b4914f9d69dp-783,
     0x1.19d78c6dfca49p-855, 0.0, 0.0, 0.0, 0x1.a57cbd0f1bc28p-905, 0.0,
     0x1.44317dc16ba06p-85, 0x1.e3de56fdd02cbp-92, 0x1.a4d9d948dca6ep-350,
     0x1.4d2af9844cec8p-1010, 0.0, 0x1.38a7c27b4a989p-465, 0.0,
     0x1.90cd80d96cecep-122
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_tand4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_tand4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_tand4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
