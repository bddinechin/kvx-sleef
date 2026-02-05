/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_erfcd1_u15purecfma.c --function \
 *     Sleef_finz_erfcd1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.78ecd6a3999d6p-305, 0x1.c249839997a0bp-427, 0x1.72f23beecb71cp-81,
     0x1.a28f3930b4487p-649, 0x1.306e6bcc4c69cp-460, 0.0, 0x1.3dbe010e3fc57p-937, 0.0,
     0.0, 0x1.3b361478fcea4p-704, 0.0, 0.0, 0.0, 0.0, 0x1.5ce53c27c02d8p-971,
     0x1.55700a6153118p-60, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.954e2f35047c1p-20, 0.0,
     0x1.6f8760eed6b7cp-243, 0x1.7f17507afc4f4p-340, 0.0, 0x1.5a5dfc818467cp-885, 0.0,
     0.0, 0x1.042a894a7ae23p-123, 0.0, 0x1.6d03d0d2c7b25p-63, 0x1.ac01ab64dc291p-447,
     0x1.30570867eec62p-1002, 0.0, 0x1.edb8329210d87p-986, 0.0,
     0x1.f4e24e62d5bb5p-1004, 0.0, 0x1.57f46119a1276p-257, 0x1.a81abc4cf2932p-824,
     0.0, 0.0, 0x1.94b7548dd0479p-809, 0.0, 0x1.8bfc0d376bfcdp-75,
     0x1.cdf2dabe2b4bcp-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bbaeec3a2a4bp-368,
     0.0, 0.0, 0.0, 0.0, 0x1.80b1828bab17ap-776, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.efdc5145eede1p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97965b8940d7cp-486, 0.0,
     0.0, 0x1.11841956eb11ap-444, 0x1.509634f1760fcp-840, 0.0, 0.0, 0.0,
     0x1.3b719673e4fedp-318, 0.0, 0.0, 0.0, 0x1.8d04e0a5e20e5p-478,
     0x1.dac1a26ccfbe1p-506, 0.0, 0.0, 0x1.1e50125c60408p-379, 0.0, 0.0, 0.0, 0.0,
     0x1.0b2ebaff2d56ap-788, 0x1.6dbc1941cb3b8p-650, 0.0, 0.0, 0.0,
     0x1.97b17d6226352p-894, 0.0, 0x1.d383a2753fe05p-585, 0.0, 0x1.00141d23d59fbp-418,
     0x1.e320bd62e4229p-286, 0x1.8f6cd75a1c0c4p-493, 0x1.ef104c4a0dc8fp-393, 0.0, 0.0,
     0x1.e8e7db8184ba1p-301, 0x1.80194e4b5cdd9p-935, 0x1.bf49a1e64e38p-454, 0.0,
     0x1.d2837e1c19531p-446, 0.0, 0x1.fe6b80b6c7e94p-85, 0x1.6ad549e492ea6p-213,
     0x1.47c277faf8ab3p-561, 0x1.c145d5632e97bp-138, 0x1.6c15b193362f6p-925,
     0x1.e538a2939b142p-41, 0x1.12ca2dc997c3cp-184, 0.0, 0.0, 0x1.b60e40fbc0b9fp-462,
     0x1.8489f562f7d8ep-853, 0x1.26d95dea4482p-860, 0x1.9490ba45bc2a4p-769,
     0x1.8b63f75495715p-81, 0x1.06f52d6a12683p-39, 0.0, 0x1.14b5743543e36p-593, 0.0,
     0.0, 0x1.69a99c00bb84cp-274, 0.0, 0.0, 0.0, 0x1.85e46a564c445p-264, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7650bb9326ec5p-49, 0x1.40e239c8a8155p-117,
     0x1.e939ba0a8f1dbp-88, 0.0, 0x1.a22a5112481cap-1002, 0x1.49219e1ff5c13p-331, 0.0,
     0x1.3c9fc25685114p-520, 0x1.33b4004e485a6p-751, 0.0, 0.0, 0.0,
     0x1.26bc942b8716ep-661, 0.0, 0.0, 0x1.0a348dfcdffe3p-637, 0.0, 0.0,
     0x1.6701a058c8aeep-890, 0x1.e7eca0ed311d5p-2, 0.0, 0.0, 0x1.2e46a7225e33cp-958,
     0.0, 0x1.7916037172443p-34, 0x1.07ce6e7375c68p-768, 0x1.bafe1456fa66fp-317,
     0x1.6c924398d9afp-201, 0.0, 0.0, 0x1.b80561c24532fp-509, 0x1.6a8b7818b4fb6p-984,
     0x1.c7204e4246a09p-737, 0x1.4c009c5339281p-2, 0.0, 0x1.a69d89c5f039bp-931,
     0x1.3dbf3ad19b85cp-22, 0x1.d40dd0d7804bdp-754, 0x1.7032e591c5018p-776, 0.0, 0.0,
     0.0, 0x1.aba44177155aep-82, 0.0, 0.0, 0.0, 0.0, 0x1.138c85ba54dd6p-167, 0.0, 0.0,
     0.0, 0x1.185527237d9bep-171, 0x1.11150f0ae7e7bp-813, 0.0, 0.0, 0.0, 0.0,
     0x1.b04db5952c4e4p-363, 0.0, 0.0, 0x1.f069c46058b1p-250, 0.0,
     0x1.9050a715df324p-194, 0x1.b0c0573ecef65p-982, 0x1.9375735fec2c8p-573,
     0x1.cdf492ca6e7b5p-461, 0.0, 0.0, 0.0, 0.0, 0x1.66ca46c94f54bp-952, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ec35c39c285afp-510, 0x1.4b6e2881f9f3fp-779, 0.0,
     0x1.f3dcdad5c6267p-343, 0.0, 0x1.e8b96a60d668ap-920, 0x1.2e41d043f3788p-614,
     0x1.90c06331fb9aep-723, 0.0, 0x1.e65a12ccf01e5p-38, 0.0, 0x1.6fb03017dc1b2p-945,
     0.0, 0x1.08ba92bce3b95p-863, 0.0, 0x1.d25a72d0b716bp-674, 0x1.d0c78b882128ep-823,
     0.0, 0.0, 0x1.c2a771ff3155ep-208, 0x1.abbdc759abb6p-263, 0x1.329b454277c7ep-593,
     0.0, 0x1.61267eaa49afp-398, 0x1.160ebf6ded54dp-54, 0.0, 0x1.e58eaf5dd5ccp-117,
     0.0, 0.0, 0x1.8890a91d711e1p-414, 0.0, 0.0, 0x1.42c64c0bee7dp-14,
     0x1.aedf539877fddp-701, 0.0, 0x1.c6dc582916bbep-96, 0.0, 0.0,
     0x1.a6e14ba428adp-904, 0.0, 0x1.0170544623f71p-812, 0.0, 0x1.8390c55824653p-599,
     0.0, 0.0, 0x1.7205bbfbf9dc7p-868, 0x1.2c250ed3ac9f2p-477, 0x1.b82ebb63878d3p-311,
     0.0, 0.0, 0.0, 0x1.08092c59ebc8bp-280, 0x1.168db42501716p-447,
     0x1.efd7dc84413a6p-881, 0x1.4e724d56c275p-618, 0x1.153d6cfd33abdp-175,
     0x1.1c6542a4735bp-164, 0x1.1dbbae3fc8239p-257, 0x1.b30e65af5786ap-631, 0.0, 0.0,
     0.0, 0x1.7a02ea986152fp-312, 0.0, 0.0, 0x1.093053df781fdp-72,
     0x1.062ded55ecf17p-129, 0.0, 0x1.915635f83a1c4p-608, 0x1.7ca78d4bdbe82p-619,
     0x1.60c5d5340c154p-758, 0x1.e781b753a7a11p-203, 0.0, 0.0, 0.0,
     0x1.e1f725197ed55p-869, 0.0, 0.0, 0x1.f9d3602ae5eaap-303, 0x1.83397bdf4f96bp-797,
     0x1.2dcd4ac59ed3ap-845, 0.0, 0.0, 0x1.acce6f4cd2b5fp-197, 0.0, 0.0, 0.0,
     0x1.12b29786a08e6p-243, 0.0, 0.0, 0.0, 0x1.3b3b787ba5b48p-911,
     0x1.995cad7fd98afp-152, 0x1.ffe1c3d4d3174p-800, 0x1.e4c0ab9c7726dp-50,
     0x1.1028eceab1168p-959, 0.0, 0x1.792ba69429f07p-505, 0.0, 0.0, 0.0,
     0x1.7ad660b3366bfp-514, 0.0, 0x1.09e7f527d1b48p-87, 0.0, 0.0, 0.0, 0.0,
     0x1.1971c7981dcdbp-236, 0x1.ff36f3daac4c1p-101, 0.0, 0.0, 0x1.01f253ff3c86ap-10,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f03790d574698p-973, 0x1.9cba1cddad912p-481,
     0x1.810b09f2b283ap-91, 0x1.df09be6116d43p-485, 0.0, 0x1.0f31938e39b2bp-50, 0.0,
     0x1.00b909958a527p-68, 0x1.d73ef962bb375p-455, 0.0, 0.0, 0x1.f259830571e24p-242,
     0x1.6d5738418b5c8p-687, 0x1.5a59df168dee7p-636, 0.0, 0x1.6d6b8301dcbd3p-381, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f3a40947873f4p-801, 0.0, 0x1.91014205616c6p-319,
     0.0, 0x1.5a1a4bb2b17ddp-319, 0.0, 0.0, 0x1.7c37478ecdbdap-330, 0.0,
     0x1.d106e58417ecfp-52, 0.0, 0.0, 0.0, 0x1.108b2bddd75b9p-733,
     0x1.9066e8013265dp-29, 0.0, 0x1.33f7b753b61a2p-876, 0.0, 0.0, 0.0,
     0x1.65571396a8a69p-202, 0.0, 0.0, 0.0, 0x1.2117a17200a2dp-870,
     0x1.1af4513decc8ap-988, 0.0, 0.0, 0.0, 0x1.a59179598c3ecp-583, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f19dc062ac08ep-500, 0x1.35e533968dc72p-774, 0.0,
     0x1.b1a2e85466545p-150, 0.0, 0.0, 0.0, 0.0, 0x1.bc9d1342ac98ep-380,
     0x1.6bd63a12b98f7p-500, 0x1.8c5fed61f21f1p-1008, 0.0, 0x1.eb85e7e3e60afp-208,
     0x1p0, 0x1.b9004116ff83p-307, 0.0, 0.0, 0x1.f4d8548a094eap-869,
     0x1.a491336632c6ap-785, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d34d0d60e9e5p-843,
     0x1.d1d833abfd65p-243, 0x1.e385ef5d6a54fp-957, 0.0, 0x1.518055b30dedep-380,
     0x1.576e5d640d75p-982, 0.0, 0x1.21ae26f37d3c1p-397, 0.0, 0.0,
     0x1.53ed335e49023p-1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.63755a70a7ce6p-112, 0x1.e4d9572697583p-156, 0.0, 0x1.d4dd4c91cc9bdp-898, 0.0,
     0x1.0d181d3d48e27p-511, 0x1.646fb1d401ce4p-892, 0x1.592c5bc6cbc22p-781,
     0x1.1f88135f3775ep-889, 0.0, 0x1.5ba5dbd11588bp-753, 0x1.f47a7942b4544p-114, 0.0,
     0.0, 0.0, 0x1.514582d0acc8p-761, 0.0, 0.0, 0.0, 0x1.897a807cd84bcp-583,
     0x1.3182b01ec6b7ap-769, 0x1.9b998300db51bp-810, 0x1.0d67b38c2edcep-1021,
     0x1.be6cfd2a18b3fp-278, 0x1.280206ae93912p-759, 0.0, 0x1.cbda2d893310ep-54,
     0x1.bbc3645effd3p-497, 0.0, 0x1.8bdb135c2c70dp-297, 0x1.013ef5961a4bp-661, 0.0,
     0x1.d41535b7afb48p-308, 0.0, 0x1.01490c203e596p-123, 0x1.34cbff2ce5c28p-287, 0.0,
     0.0, 0x1.dea28eb22f57dp-287, 0x1.8e90cdd0cc8c1p-159, 0x1.01355358febacp-251, 0.0,
     0x1.050421a8c517ep-185, 0.0, 0.0, 0x1.0736d4275456fp-254, 0x1.f48d3a083cadbp-663,
     0.0, 0x1.dc592347997a6p-170, 0.0, 0x1.4484eb063286bp-17, 0.0,
     0x1.b417ae33c44ccp-83, 0.0, 0.0, 0x1.404a44172181fp-1002, 0x1.fa02049869003p-295,
     0.0, 0x1.167bcaebcb38bp-215, 0.0, 0.0, 0.0, 0x1.152ce7d687b79p-403, 0.0,
     0x1.15b06ccb4ce9dp-397, 0.0, 0x1.e9ba030778a12p-616, 0x1.b2727c50bbea9p-550, 0.0,
     0x1.b9bdbbe78fc4cp-940, 0x1.22c854f9b2fe5p-611, 0x1.d2703b04e6eadp-2, 0.0, 0.0,
     0.0, 0x1.260a0e099f54p-842, 0.0, 0.0, 0x1.e24a5c898f51cp-993,
     0x1.195e91858409ep-413, 0.0, 0.0, 0x1.684fedfb0733ep-328, 0.0, 0.0,
     0x1.cd5c6d1d435c2p-693, 0x1.7ffc4241e36fdp-370, 0.0, 0.0, 0x1.3f5134dc36a2ap-546,
     0.0, 0x1.cdb8e4a805ce6p-355, 0.0, 0.0, 0x1.4ea3db804fdc4p-547,
     0x1.02b8484ab6f33p-385, 0x1.9b59eb2265165p-924, 0.0, 0x1.cffd773d4994cp-18, 0.0,
     0x1.a004712a76dfcp-840, 0.0, 0.0, 0x1.dc1309b48565p-917, 0.0, 0.0,
     0x1.f38d80b87a3e1p-208, 0.0, 0x1.c10d8f15b2da2p-448, 0.0, 0.0,
     0x1.d2e067e18b448p-788, 0x1.35b4c278a95f2p-457, 0.0, 0.0, 0.0,
     0x1.94ee9a1271571p-292, 0x1.95cc56a07fd58p-966, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.728852850f23fp-793, 0.0, 0x1.de7a46e01e889p-988, 0.0, 0.0,
     0x1.7d2f5a9ad8afp-693, 0x1.25a66d734a364p-826, 0.0, 0x1.885bd8162b9f8p-512,
     0x1.ebd4cca1c8e8ap-480, 0.0, 0.0, 0x1.38f3f944c3727p-219, 0x1.ad00db583ac48p-679,
     0x1.96521160562a5p-855, 0x1.2bc27697cc221p-899, 0x1.e1693f132a6bfp-38,
     0x1.7186db0a1a3fbp-297, 0x1.ad0e07e788163p-42, 0x1.708183620ef6ep-648, 0.0, 0.0,
     0.0, 0.0, 0x1.f8af4aadaf64cp-655, 0.0, 0x1.d7784f10e202cp-140,
     0x1.f19281f6d84e2p-308, 0x1.638b60e9116afp-957, 0x1.c79905ee10559p-893, 0.0,
     0x1.badda0175879cp-214, 0.0, 0x1.68dd47b139ba7p-559, 0x1.a34f235f3ae8ap-248, 0.0,
     0x1.0f49cb881fd34p-835, 0.0, 0.0, 0.0, 0x1.5a38eb64734afp-827,
     0x1.5aa2ea65ec4c3p-16, 0x1.9db681fe303bap-728, 0.0, 0.0, 0x1.ffba8478c2e3cp-831,
     0.0, 0x1.6ed91c7bbb976p-491, 0.0, 0.0, 0x1.a3ba9749c634bp-748,
     0x1.b1fdf8e451cbcp-657, 0.0, 0x1.5df0c12584174p-669, 0.0, 0x1.4733b9fca689cp-458,
     0.0, 0x1.e9c265ce24e58p-30, 0x1.655022881c834p-14, 0.0, 0.0,
     0x1.e05a72ebf707p-80, 0.0, 0x1.eb6f8c9443594p-872, 0x1.1989c8397c3e8p-895,
     0x1.c41194a4ded0ap-735, 0.0, 0.0, 0x1.0008c36658b01p-573, 0.0,
     0x1.8bcd206d824acp-734, 0.0, 0x1.0ba79a5b14c7dp-575, 0x1.c2655ed6545abp-887,
     0x1.80a4981cac352p-484, 0.0, 0x1.a3d03fe0feaa2p-718, 0.0, 0.0, 0.0, 0.0,
     0x1.9e23ed797748p-341, 0.0, 0x1.7accb32a55811p-924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.db63b475e904fp-590, 0x1.7ba3e47f3303bp-117, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.711dcfc2ad696p-567, 0.0, 0x1.e1c8261b655dfp-165, 0x1.a6774489d96e1p-422,
     0x1.3dc31740fa472p-753, 0.0, 0.0, 0x1.7ced423af2569p-736, 0.0, 0.0,
     0x1.5f071f4b840fp-966, 0.0, 0x1.7fa8dade9d3e4p-311, 0x1.bd3bfa66cdc39p-486,
     0x1.e5365da85b729p-293, 0.0, 0x1.25b26e17f385ap-81, 0.0, 0x1.4dce0e7d5eee3p-440,
     0.0, 0x1.e753638393791p-209, 0.0, 0.0, 0x1.0885e5a1ff435p-499, 0.0, 0.0,
     0x1.bf35a02e8d637p-973, 0x1.3235c96f5ad06p-239, 0.0, 0x1.4ef8b1ef79d5fp-276, 0.0,
     0.0, 0.0, 0.0, 0x1.42eef2f4d0912p-72, 0x1.d2511fb1d7f03p-202, 0.0,
     0x1.25734a0d1e365p-571, 0.0, 0x1.47987b0a2a3dbp-689, 0.0, 0x1.b95808d6e7858p-363,
     0.0, 0x1.1782d9ff78efep-381, 0.0, 0x1.c14d595162935p-408, 0.0,
     0x1.5a535bb517402p-612, 0x1.eba29c1838d35p-764, 0x1.d1bb007e7a1fap-199,
     0x1.9c25098f2d7c1p-779, 0.0, 0x1.60b291cf6487ap-530, 0x1.d1ac5969e1ea7p-681, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4edbdbdd8c93ap-32, 0x1.14ab3ed4211dcp-846,
     0x1.34a190bd3048p-505, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.01a4a12d16b18p-706, 0.0,
     0x1.0e645632e6253p-290, 0x1.628da52bb6217p-542, 0.0, 0.0, 0x1.0e11a91c13d8ap-526,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e63ada2a0d345p-984, 0.0,
     0.0, 0x1.76fffff8a98cp-552, 0x1.f3aa2c14b0045p-854, 0x1.174e5b6ff1983p-793, 0.0,
     0x1.5e18151fb0162p-412, 0x1.c716ec7663307p-582, 0.0, 0.0, 0x1.8eec2c75a994bp-901,
     0.0, 0.0, 0.0, 0x1.1baf257a480ecp-267, 0x1.14b6dd5f02ef5p-716, 0.0,
     0x1.4d4c53ece40f9p-535, 0x1.86b6db57f47e4p-478, 0.0, 0.0, 0x1.ab718b774dfddp-131,
     0x1.2683bea7341efp-416, 0.0, 0x1.05886e4a133b6p-662, 0x1.622799555babcp-130, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53f9a8db68699p-550,
     0x1.0986a51f88fcdp-449, 0x1.113b1428dfda4p-989, 0x1.ebcdec74fbb4p-745, 0.0, 0.0,
     0x1.83697251ea024p-747, 0.0, 0.0, 0x1.9bfa6a230b272p-450, 0.0, 0.0, 0.0,
     0x1.69ab9764cff77p-139, 0.0, 0x1.e950a9d85ff48p-224, 0x1.bd1d2d1f0da43p-359, 0.0,
     0.0, 0x1.ea60a1a68a6bfp-26, 0.0, 0.0, 0x1.9c52f3d3c7b75p-296, 0.0,
     0x1.1795544578939p-868, 0.0, 0.0, 0x1.525574af76ed1p-331, 0x1.4984c74891978p-557,
     0.0, 0x1.dd8ae2cf4a13bp-28, 0.0, 0.0, 0x1.0c2759209b5dp-543, 0.0,
     0x1.2fe9d91c83752p-346, 0.0, 0.0, 0.0, 0x1.e627f53da15a7p-596,
     0x1.b9bd7fafa81e2p-764, 0.0, 0.0, 0x1.82c2e2ee2c1bp-257, 0x1.facc64cc46e9p-934,
     0x1.6093b501d4e3ap-480, 0x1.82c55247123a2p-211, 0.0, 0.0, 0.0,
     0x1.05aebf16375d2p-507, 0x1.3d2956bba18f5p-657, 0.0, 0.0, 0x1.30b0be171911p-267,
     0x1.1e62f71680769p-468, 0.0, 0x1.0d8e33da32a35p-508, 0x1.0b28e65303f4ap-891, 0.0,
     0x1.55c3dddc1c099p-312, 0x1.2162adf88c48dp-986, 0.0, 0.0, 0.0,
     0x1.dd79d39682c5ap-519, 0.0, 0.0, 0.0, 0x1.e0cba2bad2e54p-249, 0.0, 0.0,
     0x1.a414c98584854p-433, 0.0, 0x1.084e7303d8519p-88, 0x1.c707638726a28p-972,
     0x1.d14e3e7ff33a6p-731, 0x1.c1d8c683e9215p-690, 0.0, 0.0, 0x1.1e5a2780223b2p-501,
     0.0, 0x1.e9372c66ca676p-533, 0.0, 0.0, 0.0, 0x1.f158513b3cf87p-787,
     0x1.939d873e9349dp-228, 0.0, 0x1.457e2fd363863p-981, 0x1.448591da2ba8ap-894, 0.0,
     0.0, 0.0, 0x1.a91df28fdedbap-418, 0x1.1439ab3fc2e52p-37, 0x1.a40bd83ba79c9p-653,
     0x1.0db117b9bbde2p-464, 0.0, 0.0, 0.0, 0x1.bde992a46592dp-857,
     0x1.f04d6c02559d2p-757, 0.0, 0.0, 0.0, 0x1.dbc30c93b756p-775, 0.0,
     0x1.0af7ca57f9915p-772, 0x1.3dbc959b6198bp-195, 0.0, 0.0, 0x1.45e288f3b925ep-925,
     0x1.66916046b9e74p-414, 0x1.7a498a6c22092p-502, 0.0, 0x1.7790ffebf9a4ep-738, 0.0,
     0x1.5277798accb07p-831, 0x1.74345f47f1b9ap-237, 0.0, 0.0, 0x1.d8ec3acd0ab0dp-313,
     0x1.f214a15fca081p-801, 0x1.34407b29df012p-950, 0x1.33944bed410bdp-718,
     0x1.191ae227cc915p-669, 0.0, 0x1.a31522e9ed249p-705, 0x1.542b30a594811p-129, 0.0,
     0x1.b4a181339db9ap-1018, 0.0, 0.0, 0.0, 0x1.62f05f96bd373p-520,
     0x1.2c3581c275b83p-208, 0x1.a69ea69d8468cp-288, 0x1.38ece91954d22p-886,
     0x1.3e067a6a25bdbp-330, 0x1.0a685ef551bebp-220, 0.0, 0.0, 0x1.5e919a972f822p-288,
     0x1.131468631dec9p-879, 0x1.64275961e527ep-252, 0.0, 0x1.3f267fc805d2fp-443, 0.0,
     0x1.b8e767778b44bp-129, 0x1.16f4046d49d7cp-421, 0.0, 0x1.1be1cadaa9963p-604, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc388fcbcd567p-313, 0.0, 0x1.863a1aa696c42p-583,
     0x1.b67cc0c384383p-923, 0x1.ba73959d3e5b9p-54, 0x1.2c0f7ef111646p-898, 0.0,
     0x1.0079a8d4e9d61p-902, 0.0, 0x1.9aac83aa56a64p-858, 0.0, 0x1.7e315c1652143p-220,
     0x1.003c57355f05fp-514, 0.0, 0x1.9237f8ab207adp-602, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8677f3135c4afp-924, 0.0, 0x1.a1cec4a8b2a93p-621, 0x1.d8cb4e6562e73p-511,
     0x1.769a08bff63dap-89, 0x1.19bd618fce4f6p-701, 0x1.544eace7c4b92p-728,
     0x1.d9feedb0ae2adp-479, 0.0, 0.0, 0x1.ad33e35e2140bp-439, 0.0,
     0x1.9c61ec6c59632p-980, 0.0, 0.0, 0x1.f0e39a738d74ap-548, 0x1.7431a9d26821dp-971,
     0.0, 0.0, 0x1.e9b94d04c6cfdp-555, 0.0, 0.0, 0x1.455e5660d0c3ep-382,
     0x1.43dc030a9e6f2p-760, 0.0, 0x1.8a846d3f62726p-940, 0x1.db78433e93727p-791,
     0x1.44c35df40703p-169, 0.0, 0x1.d2daf849e23f8p-58, 0.0, 0x1.b4d4eef1083ep-840,
     0x1.0f4dab220fa0cp-318, 0x1.29b74b23163abp-812, 0.0, 0x1.01c2b4eb38edbp-864, 0.0,
     0x1.28cdc518ab0bdp-85, 0x1.509b3c9cd012bp-81, 0x1.4331ad46953ffp-714,
     0x1.28d5f15ef3b87p-266, 0.0
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
            tmp1 = Sleef_finz_erfcd1_u15purecfma(tmp0);
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
    printf("Sleef_finz_erfcd1_u15purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_erfcd1_u15purecfma bench acc %la\n", global_bench_acc);
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
