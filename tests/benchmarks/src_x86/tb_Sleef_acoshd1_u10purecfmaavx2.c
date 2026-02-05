/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acoshd1_u10purecfma.c --function \
 *     Sleef_acoshd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.a0c9039e59d41p-254, 0x1.a2485d2e15c65p-168, 0x1.bae421d7ce936p-425,
     0.0, 0x1.1650081e14ad8p-573, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d48ab79e8ba5p-324, 0x1.24926c4bfa503p-349, 0x1.1f4bb420b8939p-584,
     0x1.74ee264d71cbep-378, 0.0, 0.0, 0x1.82a857da796bap-954, 0x1.38ac8ca041009p-998,
     0x1.09944be240915p-701, 0.0, 0.0, 0x1.9cb98f5752a22p-496, 0.0, 0.0,
     0x1.324e4a52b8d83p-778, 0x1.eec74b871ee5dp-260, 0.0, 0x1.60e703e38ab36p-994,
     0x1.97e9987fe1198p-436, 0x1.5c36bd608e936p-421, 0x1.3733fc568dbf2p-305,
     0x1.e5643873e453ap-639, 0x1.c897ec046063fp-751, 0.0, 0x1.bb64cfc3c078fp-326, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b6881a146bf9bp-486, 0.0, 0.0, 0x1.a63480512a647p-290,
     0x1.1d429a30857fep-825, 0x1.be821ba7dd45cp-898, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8558f4e6b16ccp-98, 0.0, 0x1.1ff066882b5a5p-275, 0.0, 0x1.9175978613235p-993,
     0x1.f0453ab2c5f2ap-929, 0x1.4dcf27cfb9cf7p-987, 0.0, 0x1.aad8cc7d425f7p-394, 0.0,
     0x1.e905b906af19ep-84, 0x1.ad2a9f320a787p-833, 0x1.590df2504a40ap-971,
     0x1.527dad03b1b75p-920, 0x1.ad883ec0d68c8p-838, 0x1.f8e37ded4e0e6p-627, 0.0, 0.0,
     0.0, 0.0, 0x1.fb6e407e8d247p-463, 0x1.4990b08979139p-31, 0.0,
     0x1.06bf99300763bp-864, 0x1.473829b601fe6p-514, 0x1.8f3dca08d0e0cp-865,
     0x1.2c2c90c770a8ap-989, 0x1.736a9eb64d756p-650, 0x1.ff61ce046579dp-764, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.38f5e67d4880fp-121, 0x1.496656527eee7p-245, 0.0, 0.0,
     0x1.5a8ba9cb7adb2p-412, 0.0, 0.0, 0x1.76c07ed04395ap-649, 0x1.982d93af45462p-206,
     0.0, 0.0, 0.0, 0x1.aab31c05f8d1bp-865, 0x1.64e054dd5bce4p-89,
     0x1.2e87483f15f2p-529, 0.0, 0.0, 0.0, 0x1.796417fefd1a4p-778, 0.0, 0.0,
     0x1.8724c12a0a66fp-284, 0.0, 0x1.a9358b1edc8ebp-324, 0.0, 0.0,
     0x1.0d1332cdda786p-734, 0x1.f9e539cf5c6e5p-762, 0.0, 0.0, 0.0,
     0x1.bb4cc8418395cp-529, 0x1.1938bf9eb27d5p-452, 0x1.ccb0bf76fbd8ap-914, 0.0, 0.0,
     0x1.e2b85a3c04e41p-767, 0.0, 0x1.11799c6e65397p-59, 0.0, 0.0,
     0x1.7c11c1e9a5726p-143, 0x1.1efcf5cf6f9aap-424, 0x1.aecaeb749542ap-116, 0.0,
     0x1.d3672c5ff42e9p-172, 0x1.1585e69ca5d1cp-1003, 0x1.ff7ee91b169f3p-157, 0.0,
     0.0, 0.0, 0x1.5ebb0c360394p-78, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5c60498f7c753p-491, 0.0, 0.0, 0x1.36299e078a758p-262, 0x1.06a6df42d785bp-556,
     0.0, 0x1.0e3b45f9237ddp-803, 0x1.2e53bb2717da7p-938, 0.0, 0.0,
     0x1.6339e7f610ab6p-96, 0x1.22408d20ae2f9p-83, 0.0, 0.0, 0x1.35444488dfd0dp-567,
     0x1.f38c80a44a27cp-1001, 0x1.cbccd3c54a908p-838, 0.0, 0x1.87e276c0079p-131, 0.0,
     0x1.6b1b4da5168fcp-313, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2dc676cef07e1p-448, 0x1.0484712fadef6p-958, 0x1.e44b0cc12b7d3p-530, 0.0, 0.0,
     0.0, 0x1.262de55653a16p-946, 0x1.66980618e8bc3p-539, 0x1.c20f20de9673ap-923, 0.0,
     0x1.6aa7d7e946a66p-597, 0x1.8014d4ecebb27p-941, 0.0, 0.0, 0.0, 0.0,
     0x1.25abc137dc384p-277, 0x1.ed1a809542398p-373, 0x1.e2bb865c76c7cp-484,
     0x1.a83f25704e4bbp-27, 0x1.30870fcf7475dp-780, 0.0, 0x1.924430f0459ecp-859,
     0x1.7b8da3a8475eep-63, 0.0, 0x1.dfe52ffecd2d5p-391, 0x1.dbbb990c2ce54p-689,
     0x1.08a015e56326ap-180, 0.0, 0x1.977c44737c447p-255, 0x1.24342daaeb687p-736, 0.0,
     0.0, 0.0, 0x1.24d68d5660d22p-900, 0x1.20a7340407e8bp-758, 0x1.5359653e66747p-371,
     0.0, 0x1.d0403d59902efp-1011, 0.0, 0.0, 0.0, 0x1.315d71167b1bap-939, 0.0,
     0x1.49527e1c1571dp-185, 0.0, 0.0, 0.0, 0x1.c060d7028e9d5p-219, 0.0,
     0x1.40be9a8e758e8p-421, 0.0, 0.0, 0x1.3db78a7c74a93p-935, 0x1.5f23170830f7ap-161,
     0x1.3b45216960b61p-302, 0x1.b01317d001214p-144, 0x1.6febb3eb1d4ep-957,
     0x1.b6287f39dbcf8p-828, 0x1.25e2d8f667eedp-397, 0x1.9e367f1f0d6d8p-1005, 0.0,
     0.0, 0.0, 0x1.9e330f5087f27p-916, 0x1.f0b965f60c35cp-810, 0x1.99fee1b000c91p-961,
     0.0, 0x1.3bcf1de15c24ap-530, 0x1.38828d76bc86dp-12, 0.0, 0x1.22bfa9f5625c1p-672,
     0x1.c72d8ccc59d07p-660, 0x1.ca254d4a7c1adp-24, 0x1.a00fce2a99a54p-172, 0.0,
     0x1.f2b9c4dc12c3bp-878, 0x1.95e51c9b81a4p-935, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.633711d265246p-509, 0x1.42a5d0ddeaf33p-885, 0.0, 0.0,
     0x1.e0692446b5c85p-789, 0x1.d705522332d99p-451, 0.0, 0.0, 0x1.1a373613bff6ep-910,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b0e84a5185b48p-512, 0.0, 0x1.02c95251e294ep-878,
     0x1.71a06c28d3a93p-707, 0.0, 0.0, 0.0, 0x1.6a06318e1b4c1p-802,
     0x1.3bd6510e2bb46p-844, 0x1.8ec30c6cf8d42p-648, 0x1.210f411da7e97p-572,
     0x1.744fd12959503p-959, 0.0, 0x1.b7fb0ad94ca1ep-781, 0.0, 0.0, 0.0, 0.0,
     0x1.ec11ca5ba6358p-467, 0x1.cb656a5858d8ap-829, 0.0, 0.0, 0.0,
     0x1.dd4edba6ca225p-440, 0.0, 0.0, 0.0, 0.0, 0x1.61bc75271e576p-627, 0.0, 0.0,
     0x1.bc23f755d3f25p-329, 0x1.adc0048c67c24p-830, 0x1.409cf397eb6f9p-860,
     0x1.157d381188352p-30, 0x1.cc798f68f1cecp-771, 0.0, 0x1.ad31d9eb372d4p-779, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9933dc4e668e5p-188,
     0.0, 0.0, 0x1.68eafde012d23p-795, 0x1.3437e7479169ep-60, 0.0, 0.0, 0.0,
     0x1.1b0c60674c916p-23, 0.0, 0.0, 0.0, 0x1.8658e39dd9e44p-696, 0.0, 0.0, 0.0,
     0x1.3659eef73f87ep-287, 0x1.57b6acbb3c35p-515, 0.0, 0.0, 0x1.6ac7708eee295p-694,
     0x1.b8fcd50cd9d2ep-705, 0.0, 0x1.8db40ef1d7f6ep-862, 0x1.118d77fd0b694p-988, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af311e6c08856p-727, 0.0, 0x1.b86685dd9fb4ep-504,
     0.0, 0.0, 0x1.7ead57c311f8p-701, 0x1.59f99fa643536p-11, 0x1.ce98ed01e2166p-320,
     0x1.daa84fe87b46p-770, 0x1.b84d67a2573bdp-936, 0.0, 0.0, 0.0,
     0x1.bc0eb4e231055p-45, 0.0, 0.0, 0x1.dbfda8e054568p-450, 0x1.2888a47fe072fp-770,
     0.0, 0.0, 0x1.4d20a676cd90cp-870, 0x1.d0f09519035p-351, 0x1.f65e3917b2f1ep-262,
     0.0, 0x1.bcab91de01acdp-895, 0x1.4df05056b6695p-658, 0.0, 0x1.c4e8853f70ab4p-362,
     0.0, 0.0, 0x1.2069a33d469c5p-436, 0.0, 0.0, 0x1.313eea568e681p-113,
     0x1.d2b67deaee441p-890, 0.0, 0x1.524be0e85ad9p-669, 0x1.c2498a6cbfcc5p-894,
     0x1.d83050d374149p-405, 0.0, 0.0, 0x1.cbfda48b2afd8p-22, 0.0, 0.0,
     0x1.dd156e6c1aa7bp-558, 0.0, 0.0, 0.0, 0x1.e93416f3da415p-513,
     0x1.e5305d4e791c8p-87, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b6d5b966cce7p-220,
     0x1.8644cdb7c9569p-697, 0.0, 0.0, 0.0, 0.0, 0x1.341c5ac3d3659p-424, 0.0, 0.0,
     0x1.5c6d3da945e8dp-318, 0.0, 0x1.6045a7510eb7dp-328, 0.0, 0.0,
     0x1.f0eff4739395dp-368, 0.0, 0x1.1f804e6cb87e7p-464, 0x1.b2cd9ca8241fap-117, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bb252afe05444p-46, 0.0, 0x1.c83aa0a930a0fp-405,
     0x1.f0aeb5b08ac33p-143, 0.0, 0x1.1eb0df8e78d8ep-771, 0x1.8d10d33924c55p-423, 0.0,
     0x1.cd817ebd8a44bp-857, 0.0, 0x1.7334f6736872ep-570, 0.0, 0x1.3ff0f0dd65404p-173,
     0x1.604c285bef1b3p-524, 0x1.9a0bc6cc9ccbcp-135, 0.0, 0x1.afda340dff87cp-439,
     0x1.037f8ce3ae44dp-570, 0x1.067c98ce7f7b4p-330, 0x1.58847810f15dfp-57,
     0x1.7fb8fd0b7ad09p-458, 0x1.1b9601197580bp-63, 0x1.9996cead203a8p-961,
     0x1.90826025ff44bp-329, 0.0, 0.0, 0x1.efd9695f4e0a1p-84, 0x1.5b47625d1b49fp-879,
     0.0, 0.0, 0x1.58919a8f44437p-1008, 0x1.f88465a410d2dp-217,
     0x1.a2c3b63deff5ap-344, 0.0, 0.0, 0.0, 0x1.a41d22a90b75fp-572, 0.0, 0.0,
     0x1.f92fd2306d376p-514, 0.0, 0x1.2a17a92e4a605p-90, 0.0, 0.0,
     0x1.378571f78d6ep-1021, 0.0, 0x1.eb2c7676089d5p-633, 0x1.733977f4ff84dp-312, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a6e9f2d6e4b0ap-114, 0x1.ef59b636bb18ap-68, 0.0, 0.0,
     0x1.d584234d96528p-317, 0x1.f9d1eb569cffcp-262, 0.0, 0x1.5a72d18210194p-474, 0.0,
     0x1.4ef81caca7f06p-415, 0.0, 0.0, 0x1.017384153251fp-943, 0.0, 0.0, 0.0,
     0x1.7dcf53cd53ef7p-376, 0.0, 0.0, 0x1.8925b5216bf1dp-85, 0x1.98b5f5097d378p-736,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7cee4d42bbcbdp-306, 0.0,
     0x1.8abd510de414ap-253, 0x1.6ebf148c7ece9p-744, 0.0, 0x1.e0ef346d8c141p-59, 0.0,
     0x1.b09d368d8d583p-449, 0.0, 0x1.0742fe30109bcp-378, 0x1.3479d93d8a284p-408,
     0x1.5a464257e5ff5p-1021, 0x1.c4ff18d3b1124p-679, 0.0, 0x1.b98de8afb2364p-140,
     0.0, 0x1.a1290ec59f766p-382, 0x1.ac57726ed414bp-950, 0.0, 0.0, 0.0, 0.0,
     0x1.eb8f39b1bccap-882, 0x1.3ac23eb45ddb1p-529, 0x1.0d018e4afbb15p-328,
     0x1.196674c31c4f2p-579, 0x1.b0203b28f667fp-190, 0.0, 0x1.e23b3d6233299p-500,
     0x1.feeb8c6582584p-5, 0.0, 0.0, 0.0, 0x1.9ec51b4aba8e8p-834,
     0x1.975aa57ccc6dfp-850, 0x1.690dd9def5b71p-65, 0.0, 0x1.4a6bee6c9e7ecp-557,
     0x1.ee1fa0c19bfb6p-462, 0x1.1cc7ca8f22d5p-629, 0x1.d250cb4a94276p-271, 0.0,
     0x1.8ddd994fea405p-294, 0x1.d95a1528730eep-905, 0.0, 0x1.52cfe50a6413cp-694, 0.0,
     0x1.f64c9606767cdp-473, 0x1.0ec4f065916e6p-77, 0.0, 0x1.26a7ed9bc5f86p-268,
     0x1.c84bdbf6a557fp-16, 0.0, 0x1.6438f10307199p-71, 0x1.c6d4b93c4838ep-149, 0.0,
     0x1.57ffeaf61ba29p-54, 0.0, 0x1.63eba84aa40ebp-245, 0.0, 0x1.293daf86c66a3p-587,
     0.0, 0x1.029eee703dab8p-572, 0.0, 0.0, 0x1.0c975318564b4p-538, 0.0,
     0x1.2e2d7eaf4aca3p-798, 0x1.0a0f05b628cfp-886, 0.0, 0.0, 0.0, 0.0,
     0x1.fe123102b09a2p-27, 0x1.6d3b5af3ba23fp-549, 0x1.a26199998e0a6p-821,
     0x1.3ba4b8460467ap-510, 0x1.6e11b478231a4p-376, 0x1.969c760d39e04p-257, 0.0,
     0x1.8e308385f0885p-907, 0.0, 0x1.31517ef6835e9p-951, 0x1.7211bac674ec3p-149,
     0x1.f7b8ef28ab4ap-392, 0.0, 0x1.2cfeb2c1dd6bfp-365, 0x1.7727dee94bb1bp-516, 0.0,
     0x1.7e759fb0876fbp-159, 0.0, 0.0, 0x1.2afa96d0b122p-15, 0x1.8dcc05387bfc7p-381,
     0.0, 0.0, 0x1.b5e3dd0dcd5aap-633, 0x1.1efd4c6fcf804p-1001, 0.0, 0.0,
     0x1.2c4241003f2f9p-306, 0x1.2744bc5c653b1p-966, 0x1.7038a9133edccp-161, 0.0, 0.0,
     0x1.7995b3cfdc962p-549, 0.0, 0.0, 0x1.bcd441f90ea2dp-31, 0.0,
     0x1.b868d8bf2c22ep-349, 0x1.7c6f91a667183p-131, 0.0, 0.0, 0x1.f03f52e64c15ep-866,
     0x1.7fd07a2284bcfp-896, 0x1.b87f02d683a1bp-994, 0.0, 0x1.df0894cff815p-31,
     0x1.44e28651c9b2ep-306, 0.0, 0x1.4ca8ba09a178dp-819, 0.0, 0x1.05aa443e16864p-708,
     0x1.ca563338eeea4p-186, 0x1.14d3144d54829p-933, 0.0, 0x1.fd12b5e03e43ep-948, 0.0,
     0.0, 0x1.c4d51c889de3cp-557, 0.0, 0x1.4d388f2e1997ep-542, 0.0,
     0x1.ff4d8646b790ap-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.551f1311f8cfep-943,
     0x1.7aa96da741b0ep-378, 0.0, 0.0, 0.0, 0x1.7dcbb4f2e42c2p-408, 0.0, 0.0, 0.0,
     0.0, 0x1.bcaac6353efb7p-82, 0.0, 0x1.89b94ffae151bp-811, 0x1p0,
     0x1.224dcecfba3bcp-561, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8cd69c05338cp-87,
     0x1.54b20a7e31865p-107, 0x1.9b5aa733db349p-460, 0x1.c70668185ded2p-421,
     0x1.e9997d5bdb877p-909, 0x1.ed6335365805bp-121, 0x1.14712311e8c09p-781,
     0x1.b5d0b20f5763p-806, 0x1.fd2cbc76488fbp-908, 0x1.c8580b9ffb21p-995, 0.0, 0.0,
     0x1.5194d7459cb87p-974, 0x1.1e82f1299274ap-495, 0x1.26f18c649e397p-902, 0.0, 0.0,
     0x1.c5481e55d4c1cp-552, 0x1.045fa9e718005p-613, 0x1.abeba89fafefcp-558,
     0x1.7fb864b85b8e6p-977, 0.0, 0x1.666e1b63ea715p-1017, 0x1.d5413d3703a55p-296,
     0x1.da933049531bfp-136, 0x1.121f3f0cfb815p-882, 0.0, 0x1.88ab6c14b3479p-110,
     0x1.c6efab1a50031p-356, 0x1.f9de9f9f19415p-775, 0x1.4947b1a95b4e9p-461,
     0x1.d09fafa27559dp-464, 0x1.06132c2dadc5p-945, 0x1.df237d78ed2cbp-679, 0.0,
     0x1.d52524c018529p-461, 0x1.5c2ddadb1ad1ep-517, 0.0, 0x1.5fed77c294a21p-467,
     0x1.2f252d5fa1becp-227, 0.0, 0.0, 0x1.eae5e9ceb862dp-249, 0.0,
     0x1.cb7c0ba868a73p-851, 0.0, 0.0, 0x1.53805b23c27e4p-137, 0x1.1ed2688864a3p-123,
     0.0, 0x1.a6e6012ac7931p-931, 0.0, 0x1.59bace6f798ffp-596, 0x1.9143901962d2ap-450,
     0x1.3dfab885d57dap-64, 0.0, 0x1.8b70d381add32p-881, 0.0, 0.0,
     0x1.82afb242b0b11p-846, 0x1.936ac6a26525cp-664, 0.0, 0.0, 0x1.da51548f710f8p-609,
     0x1.382f2a7196773p-727, 0.0, 0x1.3385bd0987cdp-359, 0x1.9b2538e06a4c3p-445,
     0x1.f94f27f43eb2fp-453, 0.0, 0.0, 0.0, 0x1.ab32a6e36338bp-499,
     0x1.860a26de73e8ep-222, 0.0, 0x1.b329e35b2c969p-383, 0x1.7118b1ca596dfp-303, 0.0,
     0x1.89a44f4a97cf5p-451, 0.0, 0.0, 0x1.ed43f343f0e86p-487, 0.0, 0.0, 0.0,
     0x1.8380d27e0e3fep-505, 0x1.cdefed37da795p-17, 0x1.a58ccb495cfbcp-2, 0.0,
     0x1.afbed95edebd8p-742, 0x1.94f5d9655737ep-59, 0.0, 0.0, 0x1.e4c8f1d37bf2bp-220,
     0.0, 0x1.7cb8da2bdc905p-412, 0x1.11918794b9c52p-994, 0x1.d9f961b184ddap-906,
     0x1.857ca11b4073cp-1010, 0.0, 0x1.fcde1c4d66653p-463, 0x1.4881b6d70d71bp-553,
     0x1.3cac46513a707p-347, 0x1.c586dff26eb64p-905, 0x1.5557bed86e86cp-152,
     0x1.a7cf74bddda3fp-755, 0.0, 0x1.4f7893b1aa9bfp-586, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a9c6a87524f16p-195, 0.0, 0x1.368fa440089c7p-777,
     0x1.305fcc36f7313p-536, 0.0, 0.0, 0.0, 0.0, 0x1.c62a25451ec01p-777, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.5c1f9455d0465p-306, 0x1.d01e1b9c95cc6p-394,
     0x1.1b662c077d107p-373, 0x1.38f8fe9ae5bf8p-977, 0.0, 0.0, 0x1.15c3b2597fb7p-713,
     0.0, 0x1.78a2d58910051p-464, 0.0, 0.0, 0.0, 0x1.2f7f0fb178f8ap-578,
     0x1.64e59023cd6ffp-361, 0.0, 0x1.2a3d6493c7bbp-91, 0.0, 0.0, 0.0,
     0x1.fee29c9c41f37p-448, 0.0, 0.0, 0.0, 0.0, 0x1.7ba6ba79a707ep-944,
     0x1.c2169927cfde8p-144, 0.0, 0.0, 0x1.193d14b9f763p-336, 0x1.2c6845ae897bfp-416,
     0x1.76dd80b50280cp-103, 0x1.858556a3cf58ap-557, 0x1.99173dd354aafp-963,
     0x1.fe964c41debf9p-989, 0.0, 0.0, 0x1.b13448810f769p-382, 0x1.03a812b20f53bp-379,
     0.0, 0x1.c2cb2d4cc9499p-720, 0.0, 0x1.4c291965028ap-577, 0.0,
     0x1.4fdb2512dfef7p-1015, 0.0, 0.0, 0.0, 0.0, 0x1.7f790a578fd54p-140,
     0x1.20b9e949d3d31p-612, 0.0, 0.0, 0.0, 0x1.9e0e293687f2cp-713,
     0x1.9379ab5ba706bp-576, 0x1.64184e224d65fp-822, 0x1.aaaba3d2ea90ap-314,
     0x1.fdbdbaa4c0c8p-149, 0.0, 0x1.3557b73e12d64p-499, 0x1.2ef88627e4beep-413,
     0x1.02712ac93136dp-86, 0.0, 0.0, 0x1.f37e7768f9ae8p-344, 0.0,
     0x1.8e5715cee5fcbp-949, 0x1.4f439b273a8b6p-654, 0.0, 0x1.73325d5ee84f8p-398, 0.0,
     0.0, 0.0, 0x1.c3a0cf306afecp-153, 0x1.85177580a9d5cp-1022,
     0x1.a6f186e4d56b3p-575, 0x1.8377b8510f58bp-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1f6ec59f0c977p-789, 0.0, 0.0, 0x1.35d5d98bf298cp-36,
     0x1.ac66a1a6a4f5ep-389, 0x1.d4ff288479558p-665, 0x1.7589a30d7c5e6p-637, 0.0,
     0x1.d1c42e29e0bd1p-50, 0.0, 0x1.1402bc085a621p-627, 0x1.cafeb99294d4dp-688, 0.0,
     0x1.3be64dc66596ap-877, 0.0, 0x1.7eeabd4e86d29p-578, 0x1.caf0e5d08c839p-80, 0.0,
     0.0, 0x1.74d098d2cd191p-686, 0.0, 0.0, 0x1.9fe30680dfed6p-145,
     0x1.b7e6525173d72p-25, 0x1.2bd220c5587a8p-689, 0x1.316403762cfa6p-236,
     0x1.cc5b1ae64883p-713, 0.0, 0.0, 0x1.792732f891de4p-157, 0.0,
     0x1.275a38889d695p-251, 0x1.9a41e365e1398p-226, 0.0, 0x1.1ffb757431e68p-507,
     0x1.20cc860d10abep-802, 0x1.fd62402aa289dp-74, 0.0, 0.0, 0.0, 0.0,
     0x1.55a3ca2e91ea8p-880, 0x1.a44d15dc75fb7p-979, 0.0, 0x1.f930f43ffd62fp-557,
     0x1.688d370eba06ap-547, 0x1.c6f136290786p-186, 0x1.3f0e57acde2f5p-459, 0.0,
     0x1.5ba7cd99e968ap-720, 0x1.97f90ed6c3957p-247, 0x1.ca3a41a980d79p-574,
     0x1.332c106ac34ffp-693, 0.0, 0x1.797be320b710fp-962, 0x1.0da13cbf4f9d1p-592,
     0x1.5d9591cefcf09p-778, 0.0, 0.0, 0x1.46020dd7181cap-874, 0.0,
     0x1.e11a2275cec7fp-843, 0x1.b13252ee14c7fp-251, 0.0, 0.0, 0x1.cf9ab0afb3239p-468,
     0.0, 0x1.7de30f4fbff8fp-763, 0x1.47dbf86719b91p-654, 0.0, 0x1.dc12755c4c86bp-368,
     0.0, 0x1.12809790565fp-820, 0.0, 0x1.fde41b77bb4cfp-285, 0.0, 0.0, 0.0,
     0x1.70ed17dfd2267p-487, 0.0, 0x1.7a86085f6ad5ap-899, 0x1.81dc00de09c42p-903,
     0x1.157abc844f88ep-586, 0x1.74637d9ca1777p-710, 0x1.b15fc6b60747cp-546, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c596dc9d1dde1p-36, 0.0, 0.0, 0x1.dabe3dad404d6p-773,
     0x1.914f8f3532449p-85, 0x1.6b11a814221aap-648, 0x1.7002c93cc9a3bp-868
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
            tmp1 = Sleef_acoshd1_u10purecfma(tmp0);
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
    printf("Sleef_acoshd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acoshd1_u10purecfma bench acc %la\n", global_bench_acc);
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
