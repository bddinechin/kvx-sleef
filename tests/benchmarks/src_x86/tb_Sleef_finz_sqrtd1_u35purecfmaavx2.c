/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd1_u35purecfma.c --function \
 *     Sleef_finz_sqrtd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0x1.61aa1633250afp-865, 0.0, 0x1.ddb143d983909p-238, 0.0,
     0x1.db82fd77e7e16p-354, 0x1.0b80d2c98c2cfp-514, 0.0, 0x1.a3415966850bdp-735,
     0x1.8faf57a17415bp-495, 0x1.85e0bed551dcep-1005, 0.0, 0.0,
     0x1.3f5a5cbb4df45p-807, 0x1.3ba0b5b92da44p-63, 0x1.0148da1118b8ep-510, 0.0, 0.0,
     0x1.40f42deba3f1cp-398, 0x1.a046594620925p-513, 0.0, 0x1.dccdf4aff36a3p-61, 0.0,
     0.0, 0x1.30ff099034739p-877, 0.0, 0x1.dfd553b86ffddp-705, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fedbce4baed7ep-168, 0x1.248ea273811fdp-185, 0x1.a203d6c7e1eb9p-840,
     0x1.11588794ae335p-317, 0.0, 0x1.e697de7ffa5c4p-726, 0.0, 0x1.926cd7ed99ba3p-678,
     0x1.e9fcbb8cdce93p-296, 0.0, 0.0, 0.0, 0x1.22a1690a624dp-777,
     0x1.27bd076b3d077p-940, 0x1.717cf986d6e71p-426, 0x1.d9df06634cbe4p-856,
     0x1.c7fcf89334e7cp-940, 0.0, 0.0, 0x1.3bdfecc8f93bcp-1017, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ade5ba7d2fffcp-83, 0x1.0f11d775cb7dp-145, 0.0, 0x1.cb3486f5692a3p-389,
     0x1.7c4b9d9dde67ap-193, 0.0, 0x1.20a9850661c68p-790, 0.0, 0.0,
     0x1.e417be24ca1c9p-218, 0x1.af4c1fe85d7ebp-905, 0x1.44a4f76170863p-307,
     0x1.132772edecf05p-964, 0x1.201a02fb4cb4dp-367, 0.0, 0.0, 0.0,
     0x1.d0548e4019e34p-480, 0x1.3b81da7c649efp-450, 0.0, 0x1.2744c340c9716p-990, 0.0,
     0x1.4504c865d5e7fp-557, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.628df94dbd9e4p-150,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cde80129c7609p-292, 0x1.0b6234984e909p-935, 0.0,
     0x1.096ae21f4bf1bp-984, 0x1.fe560c0ef840fp-445, 0.0, 0.0, 0x1.1bc19a72b50ddp-16,
     0.0, 0x1.faa61b8ef8f5p-324, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.caacddb80d01dp-763,
     0x1.0b7f8e84b86a8p-594, 0.0, 0x1.642256a00dbebp-934, 0x1.6673211248584p-884, 0.0,
     0x1.6e3f2c6170f4ep-993, 0x1.db26e97b27b1dp-577, 0x1.3c1dabc08754bp-279, 0.0,
     0x1.b3724b9e0fb3ep-654, 0.0, 0x1.61a89fadf4adap-254, 0.0, 0x1.b32211ac652ap-828,
     0x1.3b329b6eedd7dp-345, 0x1.80d675f1b9ec5p-279, 0.0, 0.0, 0x1.890f0d7f19cb4p-188,
     0x1.df454a911f7b1p-645, 0x1.7b2945174d194p-24, 0.0, 0.0, 0x1.ed0f5b576bb8cp-941,
     0x1.6304e2bdf0da1p-402, 0x1.4eb7c9da4638ep-154, 0.0, 0x1.8bba1ed087975p-102, 0.0,
     0x1.b45a848ae2766p-711, 0.0, 0x1.9373140610313p-657, 0.0, 0x1.a7c19f622921ap-413,
     0.0, 0.0, 0x1.477cb59afdb74p-153, 0.0, 0.0, 0x1.1298b17f3fb24p-304, 0.0, 0.0,
     0x1.584069b3a6c59p-442, 0x1.4f7bc3eba9ccdp-305, 0x1.73f921dbc873p-88, 0.0, 0.0,
     0.0, 0.0, 0x1.e6d16c4053956p-17, 0x1.fa1c305c70786p-480, 0x1.2cf760512fcbcp-179,
     0x1.e3a73de7339fbp-563, 0.0, 0x1.2997297940611p-908, 0x1.cdcee72e53ffbp-492, 0.0,
     0x1.d412c390b7e1cp-609, 0.0, 0.0, 0.0, 0x1.541dd612371fep-271,
     0x1.b0b4b6e914eb1p-595, 0x1.3c851b1bd55d5p-601, 0x1.cf274a5844e25p-288,
     0x1.6880767362e35p-9, 0.0, 0.0, 0.0, 0x1.4051dbf267325p-229,
     0x1.5348164765bdep-454, 0x1.1323a0145febp-747, 0x1.d076a69e295f1p-38,
     0x1.9050af92cd57ep-682, 0.0, 0.0, 0x1.766fdc0b1ed52p-723, 0x1.0629cae91b7efp-86,
     0.0, 0.0, 0x1.57c4297eceaa3p-393, 0x1.ea2f01527b828p-20, 0x1.e3b57ec65d4a8p-235,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d47d04f19e59bp-558, 0.0,
     0x1.a378f1ca8ec23p-782, 0x1.450288404bep-783, 0.0, 0x1.90b7dad0fdda1p-640, 0.0,
     0.0, 0x1.b5b1a5569e708p-755, 0.0, 0.0, 0x1.de8601fd7a68bp-627, 0.0, 0.0, 0.0,
     0x1.9f95eb39a6498p-252, 0x1.f557389d48ff3p-587, 0x1.b507def00a191p-749, 0.0,
     0x1.e4b9ed90cb707p-624, 0x1.81ca73c495721p-936, 0x1.76f6cd95e195bp-30,
     0x1.ee441484bd1fp-259, 0.0, 0x1.53a186faba819p-619, 0x1.d1c348570f516p-903,
     0x1.174b5a2534883p-886, 0.0, 0.0, 0x1.40ef88992992ap-488, 0x1.debb8aac63ce6p-313,
     0x1.6a217a2239f51p-385, 0x1.25b196a289671p-202, 0.0, 0.0, 0.0,
     0x1.bb1637372c36ap-90, 0x1.11c560ab6edabp-655, 0.0, 0x1.ae1a92e1048afp-63,
     0x1.e1f647ccdec54p-976, 0.0, 0.0, 0.0, 0x1.e0dcd23cf0eb8p-65,
     0x1.4ba8a61c33374p-891, 0.0, 0x1.ec244c9da2d11p-411, 0x1.69ae3cd9bd5f7p-244,
     0x1.7e63b19b2fbbep-458, 0.0, 0x1.0359473aefc84p-446, 0.0, 0.0,
     0x1.963b90b0b8a8bp-660, 0.0, 0.0, 0x1.e440a067e7b06p-798, 0x1.7a2c14b7bfab8p-96,
     0x1.1e67a71df7d1fp-975, 0x1.c2e8e35c0f9d4p-107, 0.0, 0.0, 0.0, 0.0,
     0x1.ea829c1c387e2p-545, 0x1.895f377d46fe8p-146, 0x1.d35c5598a264p-201, 0.0,
     0x1.6abbd5bde306fp-998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ce0cded4440bp-812,
     0.0, 0x1.06e5b82c51052p-293, 0x1.dd7f95ccc3b7fp-696, 0x1.4046de275acbfp-612,
     0x1.318bf8c2c1c01p-463, 0x1.33195c05cf8f6p-534, 0x1.9fceca90006e5p-65,
     0x1.0b020512bda77p-354, 0x1.32241d6fc2a99p-841, 0.0, 0x1.cfc43a6da8bep-554, 0.0,
     0x1.adb3a50943744p-900, 0x1.944cf3caa3a45p-533, 0.0, 0x1.5eda16352a361p-56,
     0x1.6176908a1bab6p-926, 0x1.ae256d1c7e73ap-217, 0.0, 0x1.ec3148a0800c6p-686,
     0x1.233a5eab148c2p-853, 0x1.47d5336b24c96p-545, 0.0, 0x1.f534016a4ee9cp-549, 0.0,
     0x1.ecba780d48ed7p-781, 0.0, 0x1.3a31a1d0156a2p-672, 0x1.543043f7740ddp-552, 0.0,
     0x1.cea107e27401bp-607, 0x1.f9b111d5b4fc4p-705, 0.0, 0x1.d57ab0a8072dbp-818,
     0x1.cadd55d11a002p-789, 0x1.35f3fc2a383ffp-821, 0x1.ef86386887b5cp-153, 0.0,
     0x1.b1b0b398bb50fp-52, 0x1.87763c16e29cap-496, 0.0, 0.0, 0x1.5979a5b24c6c7p-323,
     0.0, 0.0, 0x1.2a702c2d34efp-376, 0.0, 0.0, 0x1.937dc0066e1cdp-332, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bb40ee6f6cfe5p-900, 0.0, 0.0, 0.0,
     0x1.868ca96157817p-728, 0.0, 0.0, 0x1.36e8aeb3f1c3bp-282, 0.0,
     0x1.afb4146c178a6p-457, 0.0, 0x1.259d7adeaff4bp-72, 0.0, 0.0,
     0x1.d22989e0c3a8ep-920, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.52bd8d34f9819p-850, 0.0,
     0.0, 0.0, 0x1.d934382dc78d8p-870, 0x1.4a09889b4203cp-999, 0.0,
     0x1.97061a1c6c003p-718, 0x1.667d1e2b84457p-633, 0x1.401d2c5a1a9dep-816, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c0e101917325cp-60, 0x1.1b06f7ee19be6p-150, 0.0, 0.0,
     0x1.30a496930f12ep-643, 0x1.d21e16d120d72p-327, 0.0, 0.0, 0x1.52b6f36c9c1a2p-693,
     0x1.e66f07d13dc1ap-377, 0x1.bd18728b7bdd6p-163, 0x1.cdf6b94c9fe42p-828, 0.0, 0.0,
     0.0, 0x1.75231cf3bb5a9p-594, 0.0, 0x1.2825faa9dc85fp-387, 0.0, 0.0, 0.0,
     0x1.0e04ba79a3b5p-102, 0x1.ec07dd2baf6e5p-89, 0.0, 0x1.558c325163eeep-988,
     0x1.bf8c17221075fp-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.039dd1750d61ap-924, 0.0,
     0.0, 0x1.584453ba51364p-602, 0.0, 0.0, 0x1.38a238abeebf5p-777, 0.0, 0.0, 0.0,
     0x1.67399b45a481cp-813, 0x1.3aad9db550bdfp-806, 0.0, 0.0, 0.0,
     0x1.0b6ab5fab1147p-215, 0x1.61e84983a938ap-489, 0.0, 0.0, 0.0, 0.0,
     0x1.fc4f385ecf71dp-1006, 0x1.5eb70dd7bd3fep-234, 0x1.46575b6acf465p-590, 0.0,
     0x1.ce7a5c0462099p-523, 0.0, 0x1.5b60eef38c52dp-50, 0.0, 0x1.b83566b5e0ccep-687,
     0.0, 0.0, 0.0, 0x1.5ed49a404a145p-652, 0x1.c802a2f2b7385p-939,
     0x1.8686cb6a64107p-849, 0x1.293ca0723a72fp-622, 0.0, 0.0, 0.0, 0.0,
     0x1.debf5c2520e11p-278, 0.0, 0.0, 0x1.99ddd8ce984a7p-484, 0.0,
     0x1.f9910a8f5d3d7p-556, 0.0, 0x1.d1ff4e5b51c13p-42, 0x1.237a076035afp-857,
     0x1.42588d4d22ddcp-75, 0x1.53833a710f3f3p-263, 0x1.d666d2bc10e3ep-113, 0.0, 0.0,
     0.0, 0x1.331d098da91a3p-337, 0x1.e32c1821daed7p-44, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.26c76af21ee86p-991, 0.0, 0.0, 0.0, 0x1.4ef7887342a8p-111, 0.0, 0.0, 0.0, 0.0,
     0x1.97b2e28cce358p-632, 0x1.974210312b652p-521, 0.0, 0x1.1938a1bcd10e4p-892,
     0x1.087c8d462e9b6p-1014, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.99113fb17b9f3p-127, 0x1.fcb39ec7b4d55p-991, 0.0, 0x1.81e88dd7c1787p-457,
     0x1.3ede54efef8f1p-463, 0.0, 0.0, 0.0, 0.0, 0x1.2db107de5a1fep-1018, 0.0, 0.0,
     0x1.9a79fff2f8dcfp-636, 0.0, 0x1.ea033fbea155fp-656, 0x1.87701eca47481p-408,
     0x1.f1b532a281b97p-390, 0.0, 0x1.6ce7e42cdb64p-514, 0x1.e9ff564be5052p-372,
     0x1.5df737883c3f5p-813, 0x1.e90bd43a6cc0ep-617, 0x1.15d19e89ac027p-647, 0.0,
     0x1.bcadffbf5dc3cp-335, 0x1.b19a9e01c0899p-498, 0x1.c73b0f9ee937bp-573, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.627dbe4e30f22p-530, 0.0, 0.0, 0.0, 0x1.7077d0f443ed1p-580,
     0x1.ad254c5758ba9p-567, 0.0, 0x1.6ae1c7ec4ab3bp-658, 0.0, 0.0,
     0x1.a0357ea612997p-738, 0.0, 0x1.37e85af5f1ee9p-621, 0.0, 0.0, 0.0,
     0x1.028a0d7271734p-921, 0x1.24711d4efc0b4p-561, 0.0, 0x1.7577f3f055e5p-385,
     0x1.eabe66919de61p-84, 0x1.01876c1ffeb78p-165, 0.0, 0x1p0,
     0x1.5995593df1091p-1004, 0.0, 0x1.c2a32bbc53ac6p-453, 0.0,
     0x1.b50d51ba142f7p-195, 0.0, 0x1.d64fe920c5527p-586, 0.0, 0x1.479e8b701b4bp-216,
     0x1.2cbaf05ea05a6p-875, 0x1.303f0969b6b01p-230, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9ea53a15d8fecp-328, 0x1.c5a047522089dp-326, 0.0, 0.0,
     0x1.1e421e8ce359bp-10, 0x1.4faf32d10da8p-44, 0.0, 0.0, 0x1.19ee91234aad8p-470,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.823b9bc533f45p-525, 0.0, 0x1.4887c65db948dp-868,
     0.0, 0x1.673f798fe75b7p-219, 0.0, 0.0, 0.0, 0x1.5ac74296f67c5p-243,
     0x1.9ab122312aea6p-654, 0x1.cc3cb14aa0c55p-848, 0x1.fc4d40a6b9902p-563, 0.0,
     0x1.ab7f9409a9fb4p-497, 0x1.c17270587bb12p-549, 0.0, 0.0, 0.0, 0.0,
     0x1.0f86e11482ae6p-74, 0x1.a32f64048ba1ap-98, 0x1.9cbfbb8974d2cp-795,
     0x1.bf35672d30788p-793, 0x1.11afcc716d7d5p-197, 0x1.6765f65687e6dp-840, 0.0,
     0x1.085ed0599a0a5p-180, 0x1.0fe166f356b4ap-622, 0x1.1e04eae2ace59p-12, 0.0,
     0x1.e507e140a77a5p-542, 0x1.9ac0ad6c5860ep-48, 0.0, 0x1.5b0dfbca2aabp-457, 0.0,
     0x1.cc0c8d0970a9ap-408, 0x1.b6a96de2c66d2p-574, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.826b470d6bbdep-1013, 0x1.cf832c624964p-706, 0x1.1b4209eb3adaep-152, 0.0, 0.0,
     0x1.a836354aec1d1p-52, 0x1.d531b9f90f9fp-1, 0x1.8ee2ac4a5110ap-92, 0.0, 0.0,
     0x1.7804bbb2320c8p-18, 0x1.8e97cf4ed9abfp-818, 0x1.358f8468b5813p-462, 0.0,
     0x1.032e07952564fp-969, 0.0, 0.0, 0.0, 0x1.613fdba8c1297p-327, 0.0, 0.0,
     0x1.dc9c9403778bbp-38, 0x1.04565a8e5cf48p-708, 0.0, 0.0, 0x1.7ad58c32ae7d1p-782,
     0.0, 0x1.e0b4b019bcc52p-996, 0.0, 0x1.a85caed5b4bd8p-687, 0x1.ea402a8543014p-822,
     0.0, 0x1.14f0d7019a684p-363, 0.0, 0.0, 0x1.5c8111106b874p-961,
     0x1.194fd057a85a3p-945, 0.0, 0x1.a61cf33e2b389p-583, 0x1.764f3b286bdbap-8,
     0x1.4d00e7ff740f7p-371, 0x1.386f72b0e293dp-14, 0x1.23c12c6429614p-247,
     0x1.29025b6ef0781p-873, 0x1.e5e38fb6c7b09p-715, 0x1.40346a85ace84p-169,
     0x1.780aae3d9671p-643, 0x1.d47d01ead699dp-598, 0x1.16c3c54ab54c1p-27, 0.0,
     0x1.781cbc59c7c8ep-416, 0x1.de6bbba6b62fcp-670, 0x1.c8a85e1ddc3bdp-186, 0.0,
     0x1.62d4194ca8a1dp-184, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e9b3a7385feddp-805,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.88245937db5e3p-214, 0.0, 0x1.b2d463f404a66p-58,
     0x1.40bbcd60efbf5p-382, 0x1.5a2e2177e0362p-608, 0.0, 0x1.04add649c3bcap-101,
     0x1.4c1106accd7c3p-235, 0.0, 0x1.1c920265e883dp-325, 0.0, 0.0, 0.0,
     0x1.3f08f8e7ede54p-8, 0x1.490a665842f44p-631, 0x1.5b5320bc49914p-843,
     0x1.9a0aa4c64b3bfp-522, 0x1.438d64830fc8dp-828, 0x1.fa9a801b4b821p-632,
     0x1.a90df35923e92p-97, 0x1.455c0f6aac67dp-659, 0.0, 0x1.332e7fbdd3037p-903, 0.0,
     0x1.d0e90f8b45cfp-133, 0.0, 0.0, 0x1.d197161eb37cp-966, 0x1.f866b689c23e2p-1002,
     0.0, 0x1.bfd22696ec933p-765, 0.0, 0.0, 0x1.ab02bbbbb2544p-289, 0.0,
     0x1.0cb0c6232b2a5p-82, 0.0, 0x1.b66148558e894p-274, 0.0, 0x1.2cb017114a025p-882,
     0.0, 0x1.f74f2385df516p-51, 0x1.0d3acc04ed8dfp-696, 0x1.4e469e22b89e4p-513,
     0x1.38cde6d8dc7c8p-342, 0x1.5517f3cb2f668p-255, 0x1.10bbef35a5bafp-1006,
     0x1.6ad10e69fa637p-421, 0.0, 0x1.a516014fac0d6p-577, 0x1.b51094901d315p-788,
     0x1.ffb91a771f2f8p-144, 0x1.361a05959d489p-916, 0x1.058b2e2103a2fp-149, 0.0,
     0x1.98db8729466a8p-905, 0.0, 0.0, 0x1.ce7d9a8274992p-658, 0x1.a6411b7c40e07p-799,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.069f432cb77d2p-680, 0.0, 0.0,
     0x1.1ce02852f7748p-662, 0.0, 0x1.c2168e8c4511cp-564, 0x1.a6f5899e11ffap-120, 0.0,
     0x1.71bc332c19fbfp-997, 0x1.850b4479cc18dp-407, 0x1.fe54b4c5d2f9fp-58, 0.0,
     0x1.3845d9d71d8aap-1021, 0.0, 0.0, 0x1.22a4d6385a32dp-658, 0.0,
     0x1.629b46bd8bdfdp-424, 0x1.dd011b02a655fp-909, 0.0, 0x1.d8559db907ea3p-465,
     0x1.27d81928f601dp-34, 0x1.7dc44757ac868p-413, 0.0, 0.0, 0x1.06e06e51154abp-913,
     0.0, 0.0, 0x1.29461860084f4p-884, 0x1.9ab59c0227118p-947, 0x1.065da5d106f66p-438,
     0x1.c0d72d5e2146p-127, 0.0, 0.0, 0x1.59f65e2eaefc3p-897, 0x1.6c10fa0e69232p-242,
     0.0, 0.0, 0x1.335e284fcbc3ep-97, 0x1.414a0bb7e1c5bp-734, 0x1.adfe02dcd1468p-930,
     0.0, 0.0, 0x1.8a3d36f0d113cp-231, 0x1.834dc336503a4p-635, 0x1.32c216d7884f7p-598,
     0x1.dc29defaf02b1p-803, 0.0, 0x1.961ed9f997825p-335, 0x1.fd4b1c2b287bp-499,
     0x1.609298d5dea9bp-21, 0x1.53cc6ae1a75b5p-230, 0x1.ac1c1da3ac266p-691, 0.0,
     0x1.102354b6fd9f5p-815, 0.0, 0.0, 0x1.b8d5977e3c7bbp-588,
     0x1.328ca8c6c2f1bp-1020, 0.0, 0x1.c7b8674f8d90ep-944, 0x1.7ee40422b65f9p-709,
     0.0, 0x1.7e6e7fd6f2aa1p-15, 0x1.4906df0eca8c8p-6, 0.0, 0.0,
     0x1.e935f55779aecp-695, 0x1.afe3a8499b187p-487, 0x1.e022f0eba49f1p-922, 0.0,
     0x1.ce8268e342dp-614, 0.0, 0.0, 0x1.ba695a6b87bd4p-535, 0.0,
     0x1.33de89099a1dap-87, 0.0, 0x1.bc6b2bc3be052p-698, 0.0, 0x1.c21aa673215ap-647,
     0.0, 0x1.e13963d30ad5p-422, 0.0, 0.0, 0.0, 0x1.8afb61d0d689fp-64, 0.0,
     0x1.e0d7b7fbf47e1p-915, 0x1.d653ac560cc09p-416, 0.0, 0.0, 0x1.e1148f5b8c5a6p-677,
     0x1.546c17451bd59p-154, 0x1.8a1ea6172f272p-852, 0x1.b1536535d1171p-262, 0.0,
     0x1.c302f20aaff1cp-46, 0x1.cede6cfd25093p-522, 0.0, 0x1.c6966fd211d03p-147,
     0x1.a19b52e037cddp-276, 0x1.dd312bcea3f3ep-692, 0x1.9f001248e8fp-746,
     0x1.796efa83cf741p-775, 0.0, 0x1.7b40f222eaabfp-973, 0x1.59a7f6798f7fdp-671,
     0x1.80d50e01b27fdp-156, 0x1.3008c30f44e0fp-621, 0.0, 0.0, 0.0, 0.0,
     0x1.d00512f18218p-954, 0.0, 0.0, 0.0, 0.0, 0x1.131f31360670ap-294, 0.0, 0.0,
     0x1.5f89c315c984dp-670, 0x1.51d4a8229b83dp-214, 0x1.4e792ac56e799p-629,
     0x1.946b9872d5da7p-969, 0.0, 0.0, 0x1.bbdf11852ad74p-839, 0x1.53284a3e7a949p-734,
     0.0, 0x1.c1ce691e115e6p-861, 0.0, 0.0, 0.0, 0.0, 0x1.79af24cda89eap-175, 0.0,
     0x1.01862f6b24e46p-706, 0x1.8de7baa80003p-412, 0x1.1f547a80c6e71p-372, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3e162830dc221p-234, 0.0, 0.0, 0.0, 0x1.8b9a29ecaf678p-659,
     0.0, 0x1.16b27918a7525p-597, 0.0, 0x1.2f7f3345bcbdfp-951, 0.0,
     0x1.7f8afc4598c9ap-110, 0x1.0289ddc9c04ep-474, 0x1.77946812b3c8dp-867, 0.0, 0.0,
     0x1.cdeaf2b61e331p-105, 0.0, 0.0, 0.0, 0.0, 0x1.8c63f2434c47bp-879,
     0x1.c5683c036aa2cp-954, 0x1.9689e5873c3b8p-947, 0x1.6d6da0a8fecefp-670,
     0x1.54454b3eceab8p-410, 0x1.678f3e4afd5f6p-590, 0x1.10a884dd97f62p-984,
     0x1.532b582741527p-613, 0.0, 0x1.41c0c2bd50c6bp-914, 0.0, 0.0, 0.0,
     0x1.b86365b77c99fp-623, 0x1.1e06162dcf86dp-907, 0x1.49aba5d0ee90cp-917,
     0x1.e1ddfa1076029p-444, 0x1.a4de59922f53fp-494, 0.0, 0x1.75ce3b79c7ebfp-101,
     0x1.18469848a4fe1p-1013, 0.0, 0x1.a0556323c4a94p-41, 0x1.b2f9d8b6ae1dep-876,
     0x1.1da9c7220c896p-154, 0x1.8562a91668a06p-1014, 0x1.99961795bdcfdp-139,
     0x1.a19dd2ddec5c5p-184, 0x1.3ca02e8de750bp-442, 0.0, 0x1.80e51dab1476ep-556,
     0x1.a1d1409b41573p-476, 0.0, 0.0, 0.0, 0x1.f4573f09ccce7p-368, 0.0,
     0x1.a0c3ed9548794p-412, 0.0, 0.0, 0x1.10d7316f6d557p-435, 0x1.f940942655418p-203,
     0.0, 0x1.6d7c982d17b81p-875, 0x1.7cbe7a22969e6p-253, 0.0, 0x1.c9dcaa6537f6dp-19,
     0x1.962de73600324p-978, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f62fe4e48d473p-829,
     0x1.8ff81e6682f33p-85, 0.0, 0x1.64fb44a85961cp-225, 0.0, 0x1.2b298bfc8866bp-747,
     0.0, 0.0, 0x1.54c2ac8bfa217p-300, 0x1.fa793389b7757p-123, 0.0, 0.0,
     0x1.ec326d9116de9p-383, 0x1.011f67cec0a1ep-664, 0x1.4f3011d06c306p-191, 0.0,
     0x1.1092f7c9dc541p-973, 0.0, 0.0, 0.0, 0.0, 0x1.f21e358fdac9p-993,
     0x1.4d5c3315c2b25p-581, 0.0, 0x1.3ba852b932f4ap-927, 0x1.f980c3302102cp-150, 0.0,
     0x1.d05f827a5249ep-166, 0.0, 0x1.016852f844526p-306, 0x1.0e80665f001a6p-17
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
            tmp1 = Sleef_finz_sqrtd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_sqrtd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd1_u35purecfma bench acc %la\n", global_bench_acc);
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
