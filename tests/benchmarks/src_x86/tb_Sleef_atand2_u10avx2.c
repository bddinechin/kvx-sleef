/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand2_u10avx2128.c --function Sleef_atand2_u10avx2128 \
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
     0.0, 0x1.aa851c83bc698p-990, 0.0, 0.0, 0x1.24b97f1cf38dfp-922, 0.0,
     0x1.5eaa851e35b32p-677, 0.0, 0.0, 0.0, 0x1.1553ec6af675dp-161, 0.0, 0.0,
     0x1.f9d32bae17fb1p-374, 0.0, 0x1.099e19a3ea637p-141, 0.0, 0.0, 0.0, 0.0,
     0x1.a8a311f4bffb9p-424, 0x1.2c30a57f5a189p-219, 0.0, 0x1.962aec5a8cc5ap-990, 0.0,
     0x1.2d1da6c5e1ed4p-63, 0x1.773749550e5f5p-212, 0x1.3a9a6d931ebe5p-561,
     0x1.ddb052123e0b6p-981, 0.0, 0.0, 0x1.23bb9bc5c7d66p-848, 0.0,
     0x1.e65f17be638c6p-186, 0x1.f3ba62369aed7p-638, 0x1.f36d3339f68a7p-502,
     0x1.160e385c9e88p-431, 0x1.528de2b54ce51p-178, 0.0, 0x1.0e4acaa00f0ffp-67, 0.0,
     0.0, 0x1.79ca7ee588a75p-92, 0x1.9837f41b57872p-374, 0.0, 0.0,
     0x1.0f4c2c16bb1b5p-849, 0x1.97ab9aa52b987p-114, 0x1.3caa503eca9ccp-46,
     0x1.62d9cbf3c0018p-906, 0.0, 0.0, 0.0, 0x1.53fbb0259e296p-889,
     0x1.2bf63a3144fefp-349, 0x1.a6d0e3c0b4569p-880, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea2de2e87085p-84, 0.0, 0.0, 0x1.cb45fb519149fp-56, 0x1.10257c1db121cp-340,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.18939402d2c59p-70, 0.0, 0.0,
     0x1.0340a18c6540fp-1002, 0.0, 0x1.859212075dce4p-15, 0x1.c3da4009651c9p-935, 0.0,
     0x1.c8fcb1045cbe2p-650, 0.0, 0.0, 0.0, 0x1.46cb2d74dc80ap-278, 0.0,
     0x1.f2efbbe3c13e2p-260, 0.0, 0.0, 0x1.405cb5ff99cf6p-604, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.032087f77db7ep-485, 0x1.d717bbc233cdp-614, 0x1.fefcf9b773cd1p-702,
     0x1.5f125095216f8p-451, 0x1.9f8f7728858e5p-737, 0.0, 0.0, 0.0,
     0x1.0dd7db25ffaedp-688, 0.0, 0.0, 0x1.61ac3a68bb7e8p-209, 0x1.810089cb55f0bp-737,
     0x1.f4ce1f6aaa84ap-726, 0x1.8fb48fc967191p-557, 0x1.db7fb054f43f6p-582, 0.0,
     0x1.93b74a7b0fa46p-277, 0.0, 0x1.ad7dc7c9cf784p-46, 0.0, 0x1.f0e5e26dc200ap-66,
     0x1.835562a6665eap-183, 0x1.cc1aa2f3762dep-315, 0.0, 0x1.73e217cd69f5dp-843,
     0x1.214e2cc28c037p-458, 0x1.4ec3077f2baadp-941, 0.0, 0x1.f9b56a09e08f3p-174,
     0x1.d3f9fe8e95c9cp-568, 0.0, 0x1.3d3256ebb786dp-918, 0x1.c864c847cf863p-1018,
     0x1.3186afcd7f878p-780, 0.0, 0.0, 0.0, 0x1.91d659a7b9e1ap-4, 0.0,
     0x1.db4d432b836c4p-351, 0x1.634d5bf066631p-241, 0x1.9d1910ba87519p-875, 0.0,
     0x1.b97b6f55f1d58p-72, 0.0, 0x1.28c5ddfd2b8d1p-442, 0.0, 0.0,
     0x1.dd030b532ef24p-792, 0.0, 0.0, 0x1.c9d2d13d79552p-185, 0x1.1be970d885f2p-872,
     0x1.f463fcc1e1aa4p-859, 0x1.65d989571d393p-373, 0x1.135f9887e55ddp-385, 0.0,
     0x1.0e4ec82cee2b1p-284, 0.0, 0x1.2876ce0ae0382p-143, 0.0, 0x1.522bb95cf5f7ep-711,
     0.0, 0.0, 0x1.623cb8b56e93ap-2, 0x1.eddcd42df9027p-293, 0x1.02204a53d4691p-985,
     0.0, 0.0, 0.0, 0x1.7e36719763fbep-174, 0x1.7aa537b166283p-137, 0.0,
     0x1.b2083f97bd1bep-512, 0x1.27edb35c2ea49p-670, 0.0, 0x1.0638f1392e639p-749,
     0x1.ab6f3b673d6aep-550, 0x1.970b868f94d49p-704, 0x1.1b9c0a9dc6d74p-350,
     0x1.be7c00d35ab5ep-468, 0.0, 0.0, 0x1.62eceffa87451p-611, 0.0,
     0x1.38b77ee1012e6p-365, 0x1.312ec045faa1dp-862, 0.0, 0x1.01fad109e53a4p-936,
     0x1.3105a2e212b13p-398, 0x1.d6be8ec16c225p-25, 0x1.ca66e45044f08p-592, 0.0,
     0x1.e63294dddc9b7p-927, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.abdf5d9968862p-600, 0.0, 0x1.8cfdf7f22df7fp-545, 0.0, 0.0,
     0x1.514df7cc65964p-658, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05d38d906dd83p-876,
     0x1.7a3bdf4519a0ap-323, 0.0, 0.0, 0x1.0c6ee91d3cabcp-505, 0.0, 0.0, 0.0,
     0x1.25bc4884215b1p-386, 0x1.7c5b2e4c6052p-34, 0x1.4f78bcc7eb09ap-673,
     0x1.89abd0267f16bp-481, 0.0, 0.0, 0x1.b23efc000e55fp-561, 0.0, 0.0,
     0x1.dc69d129c6fecp-32, 0.0, 0x1.dac64c7f94a5cp-169, 0x1.33ad88a849118p-423,
     0x1.5ea3ccef674d4p-823, 0x1.321562308c098p-511, 0.0, 0x1.59f5018974b44p-1017,
     0x1.cfec712e7a69cp-539, 0.0, 0x1.2bebb9a3f0513p-563, 0x1.4069f15774845p-763,
     0x1.9da15a428d666p-267, 0.0, 0.0, 0.0, 0x1.97a681e059f4cp-353, 0.0, 0.0, 0.0,
     0x1.af6475799ef3bp-615, 0.0, 0.0, 0x1.1c215a1af1114p-270, 0.0,
     0x1.5d2233a0432d1p-199, 0.0, 0.0, 0x1.dcee13e0cee8ap-615, 0.0, 0.0,
     0x1.3fb66b615da7dp-303, 0.0, 0.0, 0x1.a079c089b34cap-215, 0x1.a2ebcf663c81cp-752,
     0.0, 0x1.394b62a137f56p-224, 0.0, 0x1.f60624814e9ecp-383, 0.0, 0.0, 0.0,
     0x1.587249298ce87p-241, 0.0, 0.0, 0.0, 0.0, 0x1.fde20819a3bbcp-454, 0.0,
     0x1.295e74d067e8bp-745, 0x1.094c7eaf8b408p-39, 0x1.f65579dbe0681p-876,
     0x1.85b2cdb968c9bp-276, 0x1.17c268380d8b3p-694, 0.0, 0.0, 0.0,
     0x1.bfa7433eeb1bp-403, 0.0, 0.0, 0x1.d5d809f6aa171p-983, 0.0,
     0x1.fdab0037fbe2dp-489, 0x1.51aa3668c9aebp-246, 0.0, 0x1.505716723dcfp-323, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.069420013030bp-279, 0x1.867c75d9cc0ccp-161,
     0x1.6b999d2bdfceap-255, 0x1.2288b0e5c6e4p-149, 0x1.f04d30c41d6b8p-946,
     0x1.264a3e1fdec31p-989, 0.0, 0x1.734a9a5f1b599p-172, 0x1.716268c256c2bp-959, 0.0,
     0.0, 0.0, 0x1.60f04eb46fdf2p-779, 0x1.7969601e3bb37p-1021, 0.0,
     0x1.420f5205e3b9cp-990, 0.0, 0x1.848aa54d15019p-523, 0.0, 0x1.55db9971c4ba1p-10,
     0x1.b68cdd89e9acap-71, 0x1.7e4153957b12cp-846, 0.0, 0.0, 0x1.da81772ab2ac5p-493,
     0x1.2a49b4b77f6c6p-586, 0.0, 0x1.4ce0604dc012dp-857, 0.0, 0x1.86e222fd29e03p-895,
     0x1.4fe0cee454a0ap-752, 0.0, 0x1.ff4fb00a1fbb2p-49, 0.0, 0x1.1fa6c2e17debcp-162,
     0.0, 0x1.f57922aacbea7p-838, 0x1.c513e3f4f08f1p-417, 0.0, 0.0,
     0x1.4d0a23eaf8512p-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3113f92bde49p-548,
     0x1.d08555a3c8673p-247, 0.0, 0x1.989ab77385268p-709, 0.0, 0x1.7ec22c04e2fd1p-651,
     0.0, 0.0, 0.0, 0.0, 0x1.0e5c8899b2029p-55, 0x1.24c7d1aa50798p-419,
     0x1.d4001b5c47855p-736, 0x1.6249faa73d46bp-833, 0x1.96f49c9ce5f2p-386, 0.0,
     0x1.cbb81a33e2b42p-776, 0.0, 0.0, 0x1.645c8347e589cp-478, 0x1.620f02033c5abp-609,
     0.0, 0.0, 0x1.ce8a5919c1b9fp-1010, 0x1.720c9a3d45d67p-883,
     0x1.349a625f12db6p-265, 0.0, 0.0, 0x1.e24991c6f2bb5p-253, 0x1.b790efcd787bcp-507,
     0x1.07652f856d4dcp-757, 0x1.2e802e2044957p-131, 0x1.f99078f2c8d33p-607, 0.0,
     0x1.e01b907606321p-111, 0.0, 0x1.5adb3594aa02cp-885, 0.0, 0x1.05f4ad0e47fbcp-630,
     0x1.ab27912f7999fp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.270b61ccf382p-65,
     0x1.0619122f2ce21p-866, 0.0, 0x1.d5b1439e3cfe1p-429, 0.0, 0x1.15587bc89e574p-708,
     0.0, 0x1.e1dcba977ad31p-319, 0x1.20e5c13adca2fp-482, 0x1.7f776ac9857b2p-519,
     0x1.632a7fc04d4e3p-220, 0x1.7998909e66e3cp-786, 0.0, 0.0, 0.0, 0.0,
     0x1.f7c7cc4ca6a68p-519, 0x1.c818c69493ac9p-229, 0x1.c281b53d19571p-58, 0.0, 0.0,
     0.0, 0.0, 0x1.7f102458018e1p-414, 0x1.771f8de63b9f7p-323, 0.0, 0.0, 0.0,
     0x1.facc5994545c6p-185, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62cb0d85290eap-999,
     0x1.11d5df8f67f7ep-328, 0.0, 0.0, 0x1.f328b975f3357p-352, 0x1.c80de93005665p-35,
     0.0, 0x1.8a667aa8121a7p-521, 0x1.68b280fbb69fap-994, 0x1.60e466e83ecf4p-351,
     0x1.9cb6e8a5108fdp-528, 0x1.5c957249ff93bp-781, 0x1.7f08a5e1a9b07p-751, 0.0,
     0x1.90d170ffe46a4p-848, 0x1.3d7f7299ee8edp-278, 0x1.4eb86087326d6p-667,
     0x1.f9353420f2b37p-737, 0x1.fe7b33087cfd7p-884, 0x1.4edc20d22c25dp-573,
     0x1.4f67be14c095ap-385, 0.0, 0x1.284b5fe8d2027p-454, 0x1.e6dc254e1d839p-571,
     0x1.679d756dfe597p-348, 0.0, 0x1.b16a2447860c9p-940, 0.0, 0x1.8cad5b94f623cp-120,
     0x1.b85abeabe38aap-341, 0x1.265038a5c7e3cp-414, 0x1.558c6d31ad8fdp-731, 0.0,
     0x1.dfdff8cba30aap-722, 0x1.1f7742afda0aap-862, 0.0, 0.0, 0.0,
     0x1.aaf2df626f587p-803, 0.0, 0.0, 0x1.b4f7c598b6cf6p-458, 0.0,
     0x1.b8e450c4ca37fp-840, 0.0, 0x1.7130414707936p-885, 0x1.6b6b807aca97p-530,
     0x1.f1f38fe359f0fp-710, 0.0, 0x1.eff01844f382fp-415, 0x1.b9501880dcdc4p-421,
     0x1.1cb691ebc6ed2p-244, 0x1.b8bbd5a041158p-131, 0x1.c5a9ce033edb6p-428,
     0x1.25c6996ee27ebp-409, 0x1.dd2e9c8641b1ap-329, 0.0, 0.0, 0.0,
     0x1.40d7f6c1a332ep-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6c472fab57e3ep-5,
     0.0, 0.0, 0x1.4f47fe77c3223p-832, 0x1.bf459cc24776ep-678, 0x1.39d7dbd8161c7p-779,
     0.0, 0.0, 0x1.415e6ec090879p-912, 0.0, 0.0, 0.0, 0.0, 0x1.6e237b368942fp-869,
     0.0, 0x1.62554bf1cd1c8p-922, 0x1.179f5e02fd9b7p-664, 0x1.d555085a4ad9fp-259, 0.0,
     0.0, 0.0, 0x1.b314b06fee95cp-166, 0x1.250133b1d51bap-742, 0.0, 0.0,
     0x1.d6627256e150ap-933, 0.0, 0.0, 0.0, 0x1.56c991b2ddb36p-825, 0.0,
     0x1.5d81ab04a009p-626, 0.0, 0.0, 0x1.9bd7c620c5304p-965, 0.0, 0.0,
     0x1.500e63e7f9fedp-135, 0.0, 0x1.a7068636941bp-249, 0x1.201e769a6cdecp-509, 0.0,
     0x1.e40bc0220092fp-263, 0x1.1de63dbdbaa84p-674, 0x1.aa65bb1f8a827p-429, 0.0,
     0x1.28f4ebf9b1539p-62, 0.0, 0.0, 0x1.560ec44ff40cap-79, 0.0,
     0x1.50db88f795578p-442, 0x1.40bfa17645eeap-775, 0x1.09c35418aa87dp-38, 0.0, 0.0,
     0x1.1df22cca3e354p-155, 0.0, 0x1.ad314f6c394dfp-38, 0x1.a36c0cd8cf0e7p-728,
     0x1.24482151a7963p-937, 0.0, 0x1.4e404fabf8531p-195, 0x1.0e7cecc3067p-420,
     0x1.26361e7612f9fp-891, 0x1.ea81c9404f02ap-173, 0x1.ef2ec46f4e238p-1015,
     0x1.b5ea656dcea34p-865, 0.0, 0x1.62157e06c0857p-701, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c304026d60e2p-726, 0x1.8fbea9107e4edp-191, 0.0, 0.0, 0x1.572c029e93893p-24,
     0.0, 0x1.725f9d6dcbe85p-17, 0x1.7237148db6b1ep-865, 0x1.a0db421d1bb07p-1002, 0.0,
     0x1.7ff2dc61efbc3p-974, 0x1.e518325620655p-717, 0x1.483e1c2605534p-649,
     0x1.b1652f64ba75cp-196, 0x1.84294f0f31638p-632, 0x1.6bbaf23d7ef9ep-53,
     0x1.f498d196cee15p-617, 0x1.7e3cfb7521565p-891, 0.0, 0x1.099ad3076999ep-44, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59b95e9d72813p-882, 0x1.5c8f27bb1e789p-739,
     0.0, 0.0, 0x1.80994b22d3001p-851, 0x1.7e17cb5630c5ep-165, 0x1.4d43d1c5e2d74p-638,
     0x1.a5ad2c0158763p-75, 0x1.8e5ee88f4326ap-984, 0x1.d043e8679e94cp-51, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b84fea45316fdp-934, 0x1.89ea0ae408c9dp-1016, 0.0,
     0x1.5553f4fde11f3p-954, 0x1.163b7499cd6d1p-160, 0.0, 0.0, 0x1.84e4a258e0891p-393,
     0x1.f724cff6001f4p-576, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3eb4ed78e4c8ap-35,
     0x1.fa27d28af18bfp-107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.561840df4bf6ep-421, 0.0, 0.0, 0x1.2a3dceca6425ep-21, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.223efdfdb4da5p-208, 0.0, 0.0, 0x1.1eed9ae02a4c7p-837, 0x1.5e64bb435820fp-191,
     0.0, 0.0, 0.0, 0x1.baf35e52ae95ap-898, 0x1.dc1c70ac8d1c8p-753,
     0x1.291947fa7a41dp-831, 0.0, 0.0, 0.0, 0x1.5aac309300283p-136, 0.0,
     0x1.b8c3a2531d554p-401, 0x1.f686422911ca7p-473, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.edf6425b11d56p-230, 0x1.58779643b8449p-533, 0x1.1dc2e06ffda96p-3, 0.0,
     0x1.10cf1d358ef32p-253, 0x1.2d06bbc3beeb8p-614, 0.0, 0x1.6a6e451867b96p-511,
     0x1.b22bda053797ep-853, 0.0, 0.0, 0x1.9f121007db414p-396, 0.0, 0.0,
     0x1.1e2ca61433f97p-999, 0.0, 0x1.918a192ac28bep-436, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.95d9ea17bbc5dp-589, 0x1.412e89ce5aed7p-135, 0.0, 0.0,
     0x1.3d820b86101a4p-766, 0x1.307dfbbbd9e47p-5, 0x1.74edc66a6e14fp-161, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.43e1e5093cf7p-464, 0.0, 0.0, 0x1.2248ca09f2225p-527,
     0x1.6a68042d4c817p-848, 0x1.0cd381698b917p-229, 0x1.0fd2dead606cap-432, 0.0, 0.0,
     0.0, 0x1.5708634f4f2ep-780, 0.0, 0x1.85109ce92bfd1p-586, 0x1.af7d07f13d30dp-535,
     0x1.01a7d8463f9p-794, 0x1.f236934d32c4cp-521, 0x1.55fdc8e3c17d2p-371,
     0x1.df4f5d2158cd1p-835, 0x1.4697153dc439fp-501, 0.0, 0x1.f2640a885b9c4p-114, 0.0,
     0.0, 0x1.5eb2155830123p-824, 0.0, 0x1.6271807eee9c9p-875, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f28dbe9840dbbp-97, 0.0, 0x1.ffa59d9d69756p-891,
     0x1.73422d26f5c64p-612, 0x1.cd4a61e8b812p-4, 0x1.925faf377beaap-178,
     0x1.715a7f8f6c485p-410, 0x1.6ec6f36ea1e77p-911, 0x1.6b4c3d86c4059p-71,
     0x1.2a0d104b0946ap-824, 0x1.1af7268009ef4p-122, 0.0, 0.0, 0.0, 0.0,
     0x1.faba13ab7ace6p-910, 0x1.d34f1b0ae821ep-829, 0.0, 0.0, 0x1.32f9399f02478p-914,
     0.0, 0x1.94b60b0a35f71p-585, 0.0, 0.0, 0.0, 0x1.d447ac7c9faa8p-572,
     0x1.6aad1454a52b9p-233, 0x1.774d3601025d8p-543, 0.0, 0.0, 0.0, 0.0,
     0x1.9865b1d52fe9cp-413, 0.0, 0x1.48b9788f8c212p-103, 0.0, 0.0,
     0x1.0c8d27e412d7dp-579, 0x1.e4ed3a6268845p-870, 0x1.ed29744a04cadp-345, 0.0,
     0x1.f5be00dff7805p-425, 0.0, 0.0, 0x1.1d592dd810c5ep-975, 0x1.9cc6fdfbf7288p-642,
     0.0, 0.0, 0.0, 0x1.e9a88d3801e0bp-146, 0.0, 0.0, 0x1.4475edbae0839p-592, 0.0,
     0.0, 0.0, 0x1.62854f96759f6p-33, 0.0, 0.0, 0.0, 0x1.c9fdff32d3e28p-805,
     0x1.1a321a5bf26b9p-952, 0.0, 0.0, 0.0, 0.0, 0x1.6a2b6e35b316cp-747,
     0x1.2f5bae91e8bf8p-298, 0.0, 0.0, 0x1.c206a97976a5p-1001, 0x1.4dfb37a82bf32p-390,
     0.0, 0x1.be3b0df00b098p-616, 0x1.d9bf205885e3dp-848, 0x1.64583f84d2e19p-841,
     0x1.5e3672fccc55p-262, 0x1.1dea31fae2663p-265, 0x1.e5eec232a6dfdp-803, 0.0,
     0x1.e40cadcfc35cep-911, 0x1.bc085246dfd1ep-167, 0.0, 0.0, 0.0, 0.0,
     0x1.3d39dc047244ep-882, 0x1.9eba88d393a75p-640, 0.0, 0x1.74a9c8ec634e8p-856, 0.0,
     0.0, 0x1.8153e3a405a0cp-869, 0x1.852b70f4257bfp-279, 0x1.4872c805f0c3ap-618,
     0x1.e32cfd34cab7ep-293, 0x1.fbc8fe0d9a69cp-873, 0x1.32ee10433a5f1p-651,
     0x1.2ec498afd3102p-839, 0.0, 0.0, 0x1.6f4b83072263bp-643, 0x1.49512515f51f7p-742,
     0x1.aa552adde27ddp-926, 0.0, 0x1.36bdf8f80b97fp-977, 0.0, 0x1.d32d27123b077p-691,
     0.0, 0.0, 0x1.1b886280f9402p-206, 0x1.69c1235906f2ep-358, 0x1.30239d6ddd7ecp-877,
     0x1.7e868a3470beep-407, 0x1.7b6eee8b86ef5p-936, 0x1.9c342b2fe4b22p-97, 0.0,
     0x1.fd3ded9531494p-57, 0.0, 0.0, 0.0, 0x1.e3180099675bfp-92, 0.0, 0.0,
     0x1.a4a553c6d624dp-123, 0x1.ee8f4da4f504p-406, 0x1.4c078e1469d97p-909, 0.0,
     0x1.9cac65292a874p-103, 0x1.d94917c363fep-628, 0.0, 0.0, 0.0,
     0x1.eff618a8cb1a5p-981, 0.0, 0.0, 0x1.f66c90956cc1dp-723, 0.0, 0.0, 0.0,
     0x1.196e8765e546ap-24, 0.0, 0x1.525b71c006881p-301, 0x1.e1658ae7dc924p-803,
     0x1.a7e386af12474p-890, 0x1.697f63bc47984p-876, 0.0, 0x1.7791cf5573be3p-603,
     0x1.ba12774521f0ep-304, 0.0, 0x1.b6fb1c4d0a8a2p-849, 0x1.33a997ebea995p-723, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1f673618263e2p-514, 0x1.76743d356713ap-928, 0.0,
     0x1.d62ea9a699978p-253, 0x1.743070cc0902ep-57, 0.0, 0.0, 0.0, 0.0,
     0x1.9ea73ca9edaf7p-394, 0x1.68b489a9830d8p-884, 0x1.a6c667b73b831p-508, 0.0,
     0x1.c1eb4db1a7183p-874, 0.0, 0.0, 0x1.004a380d45a13p-660, 0x1.cf9bf6485d6ecp-403,
     0x1.74da67ab74734p-664, 0.0, 0x1.09b1b0da327f2p-830, 0.0, 0x1.2a1d7f0b64546p-733,
     0.0, 0x1.8eba1ea05403fp-28, 0.0, 0x1.6d408107417a1p-378, 0.0,
     0x1.891d2a630fcadp-751, 0x1.25ebfb6fd488cp-490, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.86dab89c3e845p-501, 0x1.a091523f6c274p-57, 0x1.b84bbbdc4aaecp-967,
     0x1.0f905f2660f35p-488, 0.0, 0.0, 0.0, 0x1.af53ba459327cp-413, 0.0,
     0x1.3aa2e4d3d3d7ep-200, 0.0, 0x1.bdb4a543127f3p-30, 0x1.a3a2cc2c4bcedp-665,
     0x1.dd696ab797d0fp-858, 0.0, 0.0, 0.0, 0x1.8179649b81555p-391, 0.0,
     0x1.d1efbe6f9d582p-809, 0x1.82c1ac738a8dcp-511, 0.0, 0.0, 0x1.ba4f57629b9bap-610,
     0.0, 0.0, 0x1.e8f4607cd1683p-724, 0x1.92e7a3ea15eddp-668, 0.0,
     0x1.b55488cfa1d27p-640, 0x1.211ca0188417dp-810, 0.0, 0.0, 0x1.ba8559b5cda12p-998,
     0x1.e1d3decb99138p-6, 0x1.a09bb42b4b4d9p-93, 0x1.e4e0e79a4e5dep-627, 0.0,
     0x1.bcb509b0c1421p-875, 0.0, 0x1.5b10f4bb21f71p-88, 0x1.1d4c47baae13dp-344,
     0x1.bb11c0b345e89p-733, 0.0, 0.0, 0x1.2c9a7d19feb3bp-454, 0x1.fce40e7c806a8p-227,
     0x1.77d81e3a0a9a6p-558, 0.0, 0.0, 0.0, 0.0, 0x1.25f0053c4725dp-103, 0.0, 0.0,
     0.0, 0.0, 0x1.59773440ccd7ep-732, 0x1.ec475b3e4ecbfp-596, 0x1.105c30c4170a4p-744,
     0.0, 0.0, 0x1.074a92104b2b8p-928, 0.0, 0x1.03b7374b745fep-519, 0.0, 0.0,
     0x1.0f2f439fee9d5p-41, 0.0, 0x1.d6a319e5cebafp-20, 0x1.4093881f7c422p-323,
     0x1.3e7b8142c2d21p-963, 0.0
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
            tmp1 = Sleef_atand2_u10avx2128(tmp0);
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
    printf("Sleef_atand2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atand2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
