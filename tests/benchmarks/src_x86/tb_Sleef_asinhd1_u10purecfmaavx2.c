/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asinhd1_u10purecfma.c --function \
 *     Sleef_asinhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.a28421338d402p-158, 0.0, 0x1.d98ebb70d30e6p-903, 0.0, 0x1.76519cc5dfc2ep-65,
     0x1.0e8c24483df5cp-955, 0x1.f07e80ba44d3fp-499, 0x1.1a98573ccc7c1p-479, 0.0, 0.0,
     0.0, 0x1.d64dc2730df02p-263, 0x1.0f3199b9e691ep-1019, 0.0, 0.0, 0.0,
     0x1.2e3812ed527a4p-315, 0.0, 0.0, 0.0, 0.0, 0x1.9c933a9c21addp-991, 0.0, 0.0,
     0.0, 0x1.cda1e50bd2b3cp-580, 0.0, 0.0, 0x1.f40924d4a24afp-466,
     0x1.42c9263ee41f8p-477, 0x1.05e9b8de5c759p-797, 0x1.46e09b8d26501p-956, 0.0, 0.0,
     0.0, 0x1.4bf89764bd16fp-326, 0.0, 0.0, 0x1.2171717c395f1p-832,
     0x1.a740acb2390a7p-997, 0x1.8f176799770ccp-150, 0.0, 0.0, 0x1.4797966ccba26p-147,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7de265ca457e2p-134, 0.0,
     0x1.66605fcec343dp-389, 0.0, 0.0, 0.0, 0x1.c17b8c6812c1bp-447,
     0x1.0a92ccb4c5603p-685, 0.0, 0.0, 0.0, 0x1.00bacb4ceb774p-545, 0.0, 0.0, 0.0,
     0.0, 0x1.8e2dfd9faa1afp-2, 0.0, 0.0, 0x1.97f1b4bad5bd4p-15, 0.0,
     0x1.f0a2c20d2e11p-941, 0x1.0df68e4eac10cp-340, 0.0, 0.0, 0.0,
     0x1.fe7b10b036959p-977, 0x1.dc3d958eaf2ap-569, 0.0, 0.0, 0.0,
     0x1.7f7ccd33d4b18p-378, 0.0, 0.0, 0x1.82075185d7086p-691, 0.0, 0.0,
     0x1.93b3b3b6f3effp-549, 0x1.c3e3f998274e4p-920, 0x1.a2d4d20f67f69p-950, 0.0, 0.0,
     0.0, 0x1.008e67a02d6dfp-599, 0x1.a3c12ce071022p-42, 0.0, 0.0, 0.0,
     0x1.e804da896ef98p-905, 0x1.af90f10d92b49p-356, 0.0, 0x1.4f5680747cf7cp-428,
     0x1.1d7b205a52953p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cdc30f3083648p-410, 0.0,
     0.0, 0.0, 0.0, 0x1.00a33ed97483fp-127, 0x1.c81f0ac79425bp-347,
     0x1.66bd653f4d855p-664, 0.0, 0x1.100dd5f689e96p-625, 0x1.4eeeadaec5161p-847,
     0x1.9f59542607004p-173, 0x1.c9695ffcd22b2p-582, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.75a3585132753p-914, 0x1.74a6287fa0049p-479, 0x1.5c75aef0b1d85p-821,
     0x1.efb5e10a1ee7cp-778, 0x1.a4e84249dc86ap-221, 0x1.c18cf8a109f1ep-870, 0.0,
     0x1.c805ba0c99c95p-622, 0x1.f27b1fd0a0f2ep-827, 0x1.b6102047eef57p-882, 0.0,
     0x1.9bfe913af0b01p-828, 0.0, 0.0, 0.0, 0x1.be7cdc512d604p-83, 0.0,
     0x1.1966d6e69bfbp-727, 0x1.3cff6e2ef3495p-152, 0.0, 0x1.492651a76231ap-72,
     0x1.6a9fd6249800cp-321, 0x1.430ced5ae9e68p-1011, 0x1.0c1a01d11dc06p-783,
     0x1.cd7eb0ff300cep-689, 0x1.e423d76e83114p-18, 0.0, 0.0, 0.0,
     0x1.611bd8a3d546dp-452, 0.0, 0x1.84095c895ad92p-874, 0x1.402a9193772edp-908, 0.0,
     0x1.6cb40e537e7bdp-169, 0.0, 0x1.fe2e75271bf47p-57, 0.0, 0x1.69fa50090f1dp-507,
     0x1.208591dc2e38bp-735, 0x1.cae06b931ca1p-301, 0.0, 0.0, 0.0,
     0x1.27f1a0933c5a7p-872, 0.0, 0x1.c08d8549a3aacp-776, 0x1.7bee3f8747ea2p-766,
     0x1.eee35db5d64f9p-650, 0x1.ae92d52918896p-101, 0x1.b00889f351a7ep-573, 0.0,
     0x1.9ade5e8fd5711p-1021, 0x1.6c5387057c228p-272, 0.0, 0.0,
     0x1.e1054eadaa76dp-502, 0x1.ce8449c3810a4p-143, 0.0, 0.0, 0.0, 0.0,
     0x1.fd869bdeab3f3p-123, 0.0, 0.0, 0.0, 0x1.68e9717ae13eap-838,
     0x1.8be0a261af9d3p-208, 0x1.4750c719be5adp-680, 0.0, 0x1.494912205e08ap-864, 0.0,
     0x1.f7cfb06fcb868p-779, 0.0, 0.0, 0.0, 0.0, 0x1.054c235e577e1p-774,
     0x1.4a7b10faab556p-434, 0.0, 0.0, 0x1.eea837d347f4ap-528, 0x1.aeecbae149c31p-947,
     0.0, 0.0, 0x1.14b01a678ae35p-571, 0.0, 0x1.e22e4ace0aefcp-37, 0.0, 0.0, 0.0,
     0x1.ab51b77e218f6p-971, 0x1.da5cbfe18ab8dp-675, 0x1.e0ad6ce727468p-53,
     0x1.54dfed1c1f3bfp-826, 0.0, 0.0, 0x1.01cae1d957cf9p-372, 0.0,
     0x1.380622147f88fp-688, 0x1.69a047bf6b2ddp-763, 0.0, 0.0, 0x1.3fe0c72574ee8p-403,
     0x1.1eceaaeb9a5a2p-487, 0.0, 0x1.8f7769a4d682fp-1012, 0x1.019b13467181ep-103,
     0.0, 0x1.359b32ae1a3cbp-343, 0x1.a704c67f4917ep-318, 0x1.16210c18f085cp-387,
     0x1.73d4bbf5e5b97p-738, 0x1.151f979e6b34dp-879, 0x1.c4b6aff4e337ep-570, 0.0,
     0x1.c951227ede97ap-639, 0x1.12fe075f1242bp-391, 0.0, 0x1.3c06e017cec3fp-533,
     0x1.a09893f2cdd79p-38, 0.0, 0x1.3609f64d33b5fp-321, 0x1.5f873b3358b67p-173,
     0x1.6f7af529ddb7fp-688, 0x1.e9feb94e20278p-1004, 0.0, 0x1.73134379e73e6p-578,
     0.0, 0.0, 0.0, 0x1.53009d006a81ep-124, 0.0, 0x1.12d32a73821f8p-379, 0.0,
     0x1.a5e118210d546p-538, 0.0, 0.0, 0.0, 0.0, 0x1.0cef7a98c2011p-652, 0.0, 0.0,
     0.0, 0.0, 0x1.a622499f67b3ep-457, 0x1.f54d5e48cc8fep-509, 0x1.2fea04f2ecdfep-974,
     0x1.9b87b35fc3a85p-225, 0x1.f75a447cc51d9p-876, 0x1.f715a6b214cefp-296, 0.0, 0.0,
     0.0, 0x1.a071b98940a58p-39, 0.0, 0x1.339cafb4b8a4ep-837, 0.0,
     0x1.deb11711c5a2ap-727, 0x1.cc4f0d5e5fe44p-1000, 0x1.0461df562896ep-313,
     0x1.60e64c4399463p-595, 0.0, 0.0, 0x1.88450b073c727p-253, 0x1.75dc1e422d451p-148,
     0x1.7e9818c28e8f7p-305, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbd9e286c55abp-546,
     0.0, 0x1.c043ae5c7de51p-637, 0.0, 0.0, 0x1.3e83057516428p-383, 0.0, 0.0, 0.0,
     0.0, 0x1.61c849d69a3b5p-689, 0.0, 0x1.e888e5e75629ap-578, 0.0, 0.0, 0.0,
     0x1.bf645de66b9e3p-555, 0x1.149d8eaf1653ap-98, 0x1.b3a46634892d5p-435,
     0x1.a96853290096fp-36, 0.0, 0.0, 0x1.a06d106eb6a77p-368, 0x1.07f55163aa668p-351,
     0x1.d74140e827d22p-665, 0.0, 0.0, 0x1.a4727479e18f5p-417, 0x1.993c079e50f6ep-398,
     0.0, 0x1.50ee006af31f2p-934, 0.0, 0.0, 0x1.3c018645b8107p-374, 0.0,
     0x1.d9bb78fd9711dp-109, 0x1.994b08f45ec08p-571, 0x1.3c60a2301202bp-666,
     0x1.1bb49ce61120dp-873, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30558be99bc3ep-929,
     0x1.84b46dcb08a8fp-283, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2575f7c6d7fbdp-692, 0.0, 0x1.1223e356adb8bp-118, 0.0, 0x1.91cd025ae02a2p-437,
     0x1.a23c65031683fp-450, 0x1.fd420966ca8dep-378, 0.0, 0x1.5e863830c27bap-29, 0.0,
     0x1.a09d423154ca4p-44, 0.0, 0x1.c1a00dc07ece4p-538, 0.0, 0.0,
     0x1.ee02356298dcbp-199, 0.0, 0x1.9652fc1412d79p-799, 0x1.3f72966a3e2f8p-496,
     0x1.85fc0a4b24fb8p-93, 0.0, 0x1.c7ea91944326p-577, 0.0, 0x1.7363ffca3c7fep-758,
     0x1.f8f2a1fd507b5p-109, 0x1.9d711bacfb8a2p-230, 0.0, 0x1.43d562e2b3f15p-709,
     0x1.d847079394854p-532, 0x1.55b98e0318b28p-51, 0x1.e2d87118c97bdp-792, 0.0,
     0x1.2f0ce9dd5936fp-830, 0.0, 0.0, 0x1.ec5733219e212p-332, 0.0,
     0x1.00658273d0a39p-613, 0.0, 0x1.aff23819ddee9p-300, 0x1.9d1debb047074p-565,
     0x1.f688f9fe05c9p-427, 0x1.be045c25255cp-740, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7bd4a6e96a35p-30, 0.0, 0.0, 0.0, 0.0, 0x1.ad5ddb910e41ap-728,
     0x1.99819466ca44dp-844, 0.0, 0.0, 0.0, 0x1.3daa8d3245499p-323,
     0x1.262920f26f613p-508, 0x1.d0b7d3d2d9fep-445, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.325defd931d83p-510, 0x1.096b57c972e6cp-16, 0.0, 0x1.7052fc8bb6876p-486,
     0x1.df85187138df9p-858, 0x1.8477528482875p-757, 0x1.01ae229d8e28p-699, 0.0,
     0x1.0d1e5b83155e4p-510, 0.0, 0.0, 0x1.c4b957d98f8b6p-826, 0x1.f7fc51c80f6c7p-506,
     0x1.eae34cf7404cbp-425, 0.0, 0x1.3d37ae17172acp-268, 0x1.b5bedd57350bp-307, 0.0,
     0x1.e7d0016ae53fap-140, 0x1.cfdff37d2dc09p-613, 0x1.4846a81ad0b41p-613, 0.0,
     0x1.7c372ebee26c2p-663, 0.0, 0x1.aa003bf724d66p-218, 0x1.91d811b9c7a77p-170, 0.0,
     0x1.a8d40a589f1d9p-445, 0x1.bbd50c2fcd6c7p-165, 0.0, 0.0, 0x1.e71e27c2e3bc1p-57,
     0.0, 0.0, 0x1.1611948a3d175p-278, 0x1.21bf11cfbea02p-190, 0.0, 0.0,
     0x1.ba304a5ec3953p-608, 0.0, 0x1.dfd1d9c649115p-977, 0.0, 0x1.3a9fe54615043p-880,
     0x1.f9af5d6c5815ap-1019, 0.0, 0x1.aa54ab21f5a3fp-248, 0x1.ac6ddf2d1e8d8p-937,
     0x1.6035895e44bdfp-540, 0.0, 0x1.cf508a4851706p-1005, 0x1.e9472af6f2cc2p-764,
     0x1.cb1110e1fbb0dp-592, 0x1.6de250725d235p-929, 0x1.fafe65a124591p-896, 0.0, 0.0,
     0.0, 0.0, 0x1.2ddc83702b2a4p-819, 0.0, 0x1.2c059e1b25e59p-738,
     0x1.5eae4e0303b21p-408, 0.0, 0.0, 0.0, 0x1.95c7b63537594p-371,
     0x1.c75ddba0b24d3p-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6a3232fa3369dp-926, 0.0,
     0x1.0902993f766d6p-1003, 0x1.0e1b9f2bf37fep-222, 0.0, 0x1.5d14b5b4aa151p-270,
     0.0, 0x1.9a7c5f9727fdp-829, 0x1.14ae4a182761fp-363, 0.0, 0.0,
     0x1.e363aa476a9fp-792, 0.0, 0x1.caa752ab9f1cfp-362, 0.0, 0x1.bfb7c2962db4cp-15,
     0x1.72c3e1fa192cbp-164, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b262dc3339452p-925,
     0x1.fd70ad31d422ap-237, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6a192ee8d564dp-327, 0x1.b6d5803a728f3p-154, 0x1.ea63cb6ca9921p-482,
     0x1.101dca7339018p-755, 0x1.af38c03d6be6dp-319, 0.0, 0.0, 0x1.b845c57cdfedfp-290,
     0x1.efb1f1461040ap-450, 0.0, 0x1.7af9c2916f573p-476, 0x1.4817715ab9869p-61,
     0x1.c9262e86c47a2p-920, 0.0, 0.0, 0x1.41dbc2c2dc6c3p-1003, 0.0, 0.0, 0.0,
     0x1.8ebec5151d1bdp-358, 0x1.1ef376ce97e64p-614, 0x1.ba1c1e36ba3cbp-935,
     0x1.25c5599d90d93p-444, 0x1.29fb4b0fe594p-547, 0.0, 0x1.d3a386ed1bbc3p-666, 0.0,
     0x1.58faadd4d8c1ap-170, 0x1.c65108fe2bdfp-352, 0x1.9f60f9510c15p-614, 0.0, 0.0,
     0.0, 0x1.8f717e00bfefdp-47, 0.0, 0.0, 0.0, 0x1.4c77a7d85513fp-880, 0.0, 0.0,
     0x1.375b17928b803p-23, 0x1.787694ffa3912p-91, 0x1.98f11d7528338p-548,
     0x1.0bc3f5416fa23p-527, 0.0, 0.0, 0.0, 0.0, 0x1.7eb28463c6ad6p-659, 0.0, 0.0,
     0.0, 0.0, 0x1.820f895e9384bp-778, 0.0, 0x1.b7710d57cc19bp-532,
     0x1.1a5e04899515dp-662, 0x1.04cfdbbd36d73p-68, 0.0, 0x1.f4c96fb2224dcp-854,
     0x1.a4f271b9ef19ap-936, 0.0, 0.0, 0x1.ac21b8c52b51ep-266, 0x1.c448fca8b9b9ep-130,
     0x1.2fa3f6b3a1b47p-79, 0x1.523b32672fe81p-246, 0.0, 0x1.de8c215bf6d4fp-486,
     0x1.535334bb47a2dp-1016, 0x1.61e3acbc33718p-941, 0x1.556e3a0fb9cf5p-254, 0.0,
     0x1.45e996da36a06p-62, 0x1.a0cd9f3debdc9p-223, 0x1.bac5997671f69p-427,
     0x1.bdbfb8ffd72edp-790, 0.0, 0x1.90da399cebccbp-541, 0x1.280f4f3e17e7p-157,
     0x1.d0262c040352p-890, 0x1.73c545264d7f7p-948, 0x1.81db3de5a7b95p-84, 0.0, 0.0,
     0.0, 0x1.2e148e883192cp-5, 0.0, 0x1.d5b638062fe1p-138, 0.0,
     0x1.e488e6dac8527p-877, 0.0, 0x1.46fb8baa7f55ep-465, 0x1.3cb6661f8ee91p-788, 0.0,
     0x1.c0d291559574ap-1004, 0x1.3ddcc3f8229dfp-882, 0.0, 0x1.a66395b718cf1p-85,
     0x1.1ffcb5fb6e9d7p-805, 0.0, 0.0, 0.0, 0x1.b01f6a4082c13p-924, 0.0, 0.0,
     0x1.c25a0b360b43dp-538, 0x1.4fc66a4c6bdd5p-588, 0x1.22f8ada274e89p-133,
     0x1.c241db9cc7edfp-12, 0x1.4fbca8ebed0d2p-338, 0x1.3f3cfa940f686p-541, 0.0, 0.0,
     0.0, 0x1.c0ed1320a23b7p-266, 0x1.ffedf3d6678a5p-283, 0.0, 0x1.e7f12e60b1d79p-838,
     0.0, 0x1.c9d338372d95fp-494, 0x1.b9ada959c8453p-255, 0.0,
     0x1.7dd86611f32fdp-1008, 0.0, 0x1.046e15582434fp-79, 0.0, 0.0,
     0x1.e694959665773p-770, 0x1.7cb299207c4cep-390, 0x1.61333ee2e7071p-806,
     0x1.f04e12fbfe7a2p-745, 0x1.cbacca6acabd2p-575, 0x1.892b2807d8811p-302,
     0x1.2cdaa30572c51p-969, 0.0, 0.0, 0.0, 0x1.6147016339833p-331, 0.0,
     0x1.ea3bdf93c0d98p-826, 0.0, 0x1.cd996e620a04bp-113, 0.0, 0x1.72cf1a4951818p-374,
     0.0, 0.0, 0x1.29e1e86f5a49dp-720, 0x1.72db2a49628b8p-537, 0.0,
     0x1.ebb8a0d7cfa43p-325, 0x1.3eb35ee6857efp-950, 0.0, 0x1.ced92e4c69b9ap-736, 0.0,
     0.0, 0.0, 0x1.39a62cebfad0fp-5, 0x1.0d95835414188p-444, 0x1.c6e78657519dcp-431,
     0.0, 0x1.4ab6bd73d1834p-388, 0.0, 0.0, 0x1.7b1b727ec671cp-638,
     0x1.ac1bef55dc517p-271, 0x1.1450ab42a378fp-889, 0.0, 0.0, 0x1.c4358d92a3c07p-236,
     0x1.16388eef1a0f3p-493, 0.0, 0x1.ccf608c81d6d7p-61, 0.0, 0x1.eabdd472b132p-795,
     0x1.6f6c1e5d26b02p-987, 0.0, 0x1.ee41d0dbe6b92p-102, 0.0, 0.0, 0.0,
     0x1.82db93c1c82b8p-931, 0.0, 0.0, 0x1.e7ddd5b686fa4p-396, 0.0,
     0x1.68b166dd886c8p-339, 0.0, 0x1.c55b4edbff25p-320, 0x1.4b2c06cbb828fp-603, 0.0,
     0.0, 0x1.ddc7c29d12909p-363, 0.0, 0x1.3cf110ce194fcp-1009, 0.0,
     0x1.8b4a4aa2b12dp-696, 0x1.373bc1a2e2811p-609, 0x1.3c030a9bd594ep-785, 0.0, 0.0,
     0x1.a736f171826aep-337, 0x1.377101e8922d3p-1005, 0x1.5a689cf7a7992p-26, 0.0, 0.0,
     0x1.c2d3a94413378p-206, 0x1.a66f02c5cab41p-493, 0.0, 0x1.d5639d5d3106cp-517,
     0x1.98594a380bd32p-27, 0.0, 0x1.5756d146e4681p-807, 0x1.fb1317919ce0fp-762,
     0x1.38e00ae26ae2bp-142, 0x1.e32af230c8f4dp-791, 0x1.da5f5ea840b75p-950,
     0x1.cf395b1290e33p-662, 0.0, 0.0, 0x1.ad06845cad953p-713, 0.0, 0.0,
     0x1.5440abc5c64cdp-852, 0.0, 0.0, 0.0, 0x1.ffb36eac2f4dcp-823, 0.0,
     0x1.da9d4390d98abp-748, 0x1.c73d288cfd952p-464, 0x1.a17a2198d8e56p-612, 0.0, 0.0,
     0x1.4b6fc2f240689p-643, 0x1.ef3d88b961a6p-539, 0.0, 0.0, 0x1.42c8d7df84f2ap-775,
     0x1.1dc428a1ddb26p-113, 0x1.2afd45978846ep-52, 0x1.da1ff871df74fp-105, 0.0, 0.0,
     0x1.cfb788f5aa4c7p-941, 0.0, 0.0, 0x1.96f83759709abp-413, 0.0,
     0x1.6924023c9da7bp-999, 0.0, 0x1.d4f557b8cb0c4p-308, 0x1.6dbf9ce8958e5p-558, 0.0,
     0x1.32373878577eap-154, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.02547eb2e799dp-924,
     0x1.574efadf5c072p-517, 0x1.2c566da977622p-437, 0.0, 0.0, 0.0,
     0x1.84fe4bc19ea71p-66, 0x1.41ca21264fd5dp-908, 0x1.0d4d6c4578463p-421, 0.0, 0.0,
     0x1.8de00be71c00ap-915, 0.0, 0.0, 0x1.bf680f84d42f7p-980, 0.0, 0.0, 0.0,
     0x1.48f0da199e6bep-772, 0.0, 0x1.6edee4396683dp-175, 0x1.73c4714c1a059p-691, 0.0,
     0x1.352da784baecbp-92, 0x1.eb64926b7825ep-105, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4dbecdc8d8d0ap-230, 0x1.eedd3457f7fdcp-875, 0.0, 0.0, 0x1.18dbe8b8c6a48p-515,
     0x1.00e23383424ddp-284, 0.0, 0.0, 0.0, 0x1.83a5160bf6546p-176,
     0x1.892054ec5d99dp-273, 0x1.a4a65238360e5p-680, 0.0, 0.0, 0.0,
     0x1.ee79e6d409811p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c12262ea9a54p-386, 0x1.3e2d49cf8add9p-79, 0x1.fed38aa7fd074p-518,
     0x1.ba0ab93e44355p-217, 0x1.0e91e721e0f54p-450, 0.0, 0x1.39582edca7e9ep-790, 0.0,
     0.0, 0.0, 0x1.06e892ef23daep-386, 0.0, 0x1.b27740dac8dccp-865,
     0x1.38aa26e2d923p-366, 0x1.6e0a1e6b0a22ap-822, 0.0, 0.0, 0x1.ab0606b435904p-114,
     0x1.aa43926ca6231p-975, 0.0, 0.0, 0.0, 0x1.8fb72959e5838p-713,
     0x1.cc6babe8ef27fp-648, 0.0, 0x1.d0312184a8fd1p-20, 0.0, 0x1.7f9df8fa41489p-875,
     0x1.62836be67bdedp-693, 0.0, 0x1.df2bf52d0f367p-205, 0.0, 0.0, 0.0,
     0x1.a43b330ab5fdcp-424, 0x1.2c03bf7cfc0b5p-747, 0.0, 0.0, 0.0, 0.0,
     0x1.aa07e98e6ab38p-269, 0.0, 0.0, 0x1.e67f247718a67p-10, 0x1.9ed790ab044e6p-106,
     0x1.ff4e374e8a009p-499, 0.0, 0x1.47a170033f138p-977, 0x1.09e43b1ef5e18p-1011,
     0x1.af68bd4751471p-550, 0.0, 0.0, 0x1.2db4711835519p-270, 0x1.43413cf5cb75ap-517,
     0x1.cd17a9935645ap-787, 0x1.f80036a58656fp-14, 0.0, 0.0, 0x1.b489cb51db3bbp-1006,
     0.0, 0.0, 0x1.82ef435186027p-973, 0.0, 0.0, 0.0, 0x1.a26e29060bc5dp-314, 0.0,
     0.0, 0x1.d42fe848d4d86p-604, 0x1.2ed2b5b1d2fbdp-852, 0x1.d5939d54126f8p-575,
     0x1.e32d6b1488166p-8, 0x1.196a9dba98183p-399, 0x1.9ca6585392afap-506, 0.0,
     0x1.52fa6d41dbf2dp-17, 0.0, 0.0, 0x1.6b70021dac79dp-244, 0x1.3ccefeecf0447p-186,
     0x1.9dde7681d7c8fp-137, 0x1.1e4bd16d8f657p-518, 0.0, 0.0, 0.0,
     0x1.adb864c3df3bfp-366, 0.0, 0x1.7e6799b191d78p-580, 0.0, 0x1.d98a0317b121ap-307,
     0.0, 0.0, 0.0, 0x1.1092ab4a0a513p-816, 0.0, 0x1.8b19441b4ae7ep-128,
     0x1.f3ec621c62ff5p-939, 0.0, 0x1.7b123cfa953fcp-161, 0x1.f999ba918c58fp-931, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a90ac597dbd5p-282,
     0x1.15017c342c382p-805, 0.0, 0.0, 0.0, 0.0, 0x1.d3316b9069819p-371, 0.0, 0.0,
     0.0, 0x1.1d66c7ef3bb2p-1013, 0x1.b1909965685cbp-916, 0.0, 0x1.d1f48192e8b6p-1018,
     0x1.06ef26c77cddfp-756, 0x1.2fa9f5f2e561dp-56, 0.0, 0x1.e455a12bd1f4bp-308, 0.0,
     0.0, 0.0, 0x1.fcc9ea29b88ep-501, 0.0, 0.0, 0.0, 0x1.0f0046d9262adp-951, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ccf8237a1e10fp-741, 0x1.9325495a738b9p-693,
     0x1.942683ff1f8e7p-797, 0x1.18e122b564395p-160, 0.0, 0.0, 0x1.598257ad02252p-657,
     0x1.deabeaf2660b5p-980, 0x1.135ef2b2bb728p-195, 0.0, 0x1.f3a550a77cb3ep-19,
     0x1.0022ce1999fa8p-330, 0.0, 0x1.7e4c78140332fp-360, 0.0, 0.0, 0.0, 0.0,
     0x1.61bdf2e7c1bd9p-513, 0.0, 0x1.86bf0e4d8e8c6p-150, 0x1.20e343e166504p-280,
     0x1.04e557c6c5aaep-999, 0x1.4bb78e31eb051p-163
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
            tmp1 = Sleef_asinhd1_u10purecfma(tmp0);
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
    printf("Sleef_asinhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asinhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
