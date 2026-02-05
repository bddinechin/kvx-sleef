/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand2_u35kvx.c --function Sleef_tand2_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.e8d8d9fe9e549p-19, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9bda0293e7916p-701,
     0.0, 0x1.e6857c811481bp-186, 0.0, 0x1.983d5ff2475bdp-1007, 0.0, 0.0,
     0x1.8dac77a227078p-305, 0.0, 0.0, 0.0, 0x1.b7281172d62ap-175, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9d791a96119e7p-93, 0.0, 0.0, 0x1.8aec59b7ca967p-526, 0.0,
     0.0, 0x1.b2f632b50eadp-488, 0.0, 0x1.295afc434d779p-282, 0x1.5e6bd43d8d72p-741,
     0x1.fd98a8ab883ccp-841, 0.0, 0x1.a9d26331830afp-688, 0x1.2d2f34a168a07p-286,
     0x1.4a3b69d53f313p-713, 0.0, 0x1.4099a40f577cfp-218, 0.0, 0.0, 0.0, 0.0,
     0x1.e8a263da1fdc2p-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ba7aa6d6ed91ep-182, 0.0,
     0x1.291c0e7d6f723p-910, 0x1.34bb6348f17bdp-261, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.deb2c07b08b0cp-610, 0x1.15ad1f54c2f2ap-855, 0.0, 0.0, 0x1.747a3792c9b9dp-269,
     0x1.74969ad3a851ap-958, 0.0, 0x1.88b356e686364p-74, 0x1.68037e48636c8p-649,
     0x1.e3514f507d698p-284, 0x1.5232a3ff37d63p-449, 0x1.cd965c00379a9p-798,
     0x1.14b4f4069f457p-479, 0.0, 0x1.7c93fa87d9332p-198, 0x1.bf39232bea958p-101,
     0x1.58dce990beed1p-891, 0x1.163155a1f3f92p-626, 0.0, 0x1.9aa3b267635a2p-472, 0.0,
     0.0, 0x1.a192f44c7ff21p-666, 0x1.05157704c7277p-512, 0.0, 0.0,
     0x1.c17155a9ff8bp-360, 0.0, 0.0, 0x1.7546acbb0f1eap-627, 0x1.de54ca35d888p-879,
     0.0, 0.0, 0x1.48ee6534dcf37p-225, 0x1.b8c673eb23f01p-74, 0.0,
     0x1.14f16b15c9e6bp-842, 0x1.83f7271b367bdp-804, 0.0, 0.0, 0x1.3712f6f595072p-369,
     0.0, 0.0, 0x1.8a2de3c339a2cp-776, 0.0, 0x1.1da4e5f593275p-66,
     0x1.a016af1109d74p-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d7d0a95006879p-706,
     0x1.edbff8b702a69p-61, 0x1.74a5d5477a106p-583, 0.0, 0.0, 0x1.751c2da594ce5p-262,
     0x1.2ba5428f14b9dp-261, 0.0, 0x1.3e7d7f2d1693ep-906, 0x1.16d8189d14a37p-773, 0.0,
     0.0, 0x1.dfae70546cbddp-783, 0.0, 0x1.42a6695112b44p-520, 0x1.6f494877fc7dcp-197,
     0.0, 0x1.2e2755add7159p-995, 0x1.6e6d29b4625afp-673, 0.0, 0.0, 0.0,
     0x1.1fa74e76a5c97p-536, 0x1.bc9e88ebf84fp-623, 0x1.810915556a5ecp-273,
     0x1.9d32eb40ea49fp-410, 0x1.4b781f6cbd841p-1012, 0x1.3b44d97b6f12dp-712, 0.0,
     0.0, 0x1.c2122b837c323p-840, 0x1.d4d9d0803b3c4p-542, 0x1.3d202f8d54704p-476,
     0x1.84d6b98ae5c67p-271, 0x1.df71a61cf119dp-212, 0.0, 0x1.ce7530312b17fp-903, 0.0,
     0x1.203f5c2c5c579p-97, 0.0, 0x1.ce0fd72f77b47p-1018, 0x1.823ba603d5648p-651, 0.0,
     0.0, 0.0, 0x1.95206c0c7841cp-987, 0x1.7249a36b90735p-130, 0.0,
     0x1.22224463729fdp-320, 0.0, 0x1.b892378351df1p-614, 0x1.ae2c34510c748p-692,
     0x1.c58a594584338p-225, 0.0, 0x1.c01fc2141c9cfp-632, 0.0, 0.0, 0.0, 0.0,
     0x1.838c8e2afea66p-716, 0.0, 0.0, 0.0, 0x1.6f4d5cc0b7bbap-970,
     0x1.d5db1a948d0ap-982, 0x1.41d7289f148afp-689, 0x1.5236b28ea5565p-858,
     0x1.fc90648ab4cb1p-939, 0.0, 0.0, 0.0, 0x1.2f93bab678a5ap-976, 0.0,
     0x1.7a59274e9cdecp-802, 0x1.7804543d67724p-527, 0x1.eb219b27b7fcdp-374,
     0x1.1620716aab775p-65, 0.0, 0.0, 0x1.5f70f1201c6cp-39, 0x1.fb9535c56cc7ep-32,
     0x1.1b9690fed70f3p-482, 0.0, 0.0, 0.0, 0.0, 0x1.bd5fddd61942dp-171, 0.0, 0.0,
     0x1.c05d20b55235dp-220, 0.0, 0.0, 0x1.9e01fc7d09e1bp-45, 0.0, 0.0,
     0x1.1974b93dd8d1p-453, 0x1.82539e07baf85p-476, 0x1.2ea8d5ea1c28bp-495, 0.0, 0.0,
     0.0, 0.0, 0x1.050003fd82399p-282, 0.0, 0x1.434c628b6c807p-215,
     0x1.9038537faf71ep-898, 0x1.703f4eadfd57bp-101, 0.0, 0.0, 0.0, 0.0,
     0x1.abc99e6fb9926p-73, 0.0, 0x1.42990cbc50e55p-152, 0.0, 0x1.adeebebdef1c9p-880,
     0x1.ecd087edead03p-916, 0x1.5305ba2013597p-374, 0x1.66e6dab396a2fp-75, 0.0,
     0x1.d23def421bd4bp-235, 0x1.b6235b71a3038p-1015, 0x1.dcef1b5312f72p-305, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.06355947f8459p-418, 0x1.240f307b856ffp-881,
     0x1.bdffb99bbe633p-366, 0.0, 0.0, 0x1.7b8e70e5a9df3p-744, 0.0, 0.0, 0.0, 0.0,
     0x1.b4de2d272b8ap-1011, 0x1.15ab00374fe43p-452, 0x1.8e2d57f34873cp-203,
     0x1.1769906c613ffp-409, 0x1.fe06c5c9f0fafp-171, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.482501a0b8fc3p-865, 0.0, 0.0, 0x1.c05796200086bp-243, 0x1.37e447a6e3201p-238,
     0x1.6298d7fa8626ap-642, 0.0, 0.0, 0x1.6698a1a11e378p-417, 0.0, 0.0, 0.0, 0.0,
     0x1.54b7a4557f03ep-76, 0.0, 0x1.cd2733d6e5d72p-350, 0x1.d7dcf5e1d5293p-825, 0.0,
     0.0, 0x1.8a526dbc96ee1p-858, 0.0, 0x1.97fd46dc98cefp-240, 0x1.d2fc867b1c06p-227,
     0.0, 0x1.b42119bffdc02p-75, 0.0, 0x1.cbee537b529eap-978, 0x1.f94786590d9edp-381,
     0x1.b28191b534051p-44, 0.0, 0.0, 0x1.929c68bfa12cap-391, 0x1.e4fa22c4ba16bp-799,
     0x1.709f10d93a52dp-818, 0.0, 0.0, 0x1.f5407dad45dcep-175, 0.0, 0.0,
     0x1.7c765f20b6d6cp-997, 0.0, 0x1.68a67a980bab1p-828, 0.0, 0x1.69c43bef907cdp-634,
     0x1.5466329a9ab63p-800, 0.0, 0x1.5f4673e419aedp-451, 0x1.9db496c54cbaep-794,
     0x1.d5f643282f616p-109, 0x1.a4b7f778a7a94p-395, 0x1.de1e88ed6397ap-478, 0.0,
     0x1.c1302db1b8295p-314, 0x1.845ca80d83003p-244, 0.0, 0.0, 0.0,
     0x1.442ee9f09ff73p-74, 0.0, 0x1.f85564e9cbb7ep-263, 0.0, 0.0,
     0x1.b78e1025e0f16p-469, 0.0, 0x1.aeaf0fd9a0253p-326, 0x1.226ed149dbc17p-155,
     0x1.1cd0a5b13f033p-136, 0.0, 0x1.107a2253d99bbp-617, 0.0, 0.0,
     0x1.da52a13fcf1f2p-909, 0x1.704c550cb1fb4p-986, 0.0, 0x1.9fd5b1a31b981p-70,
     0x1.5b7ed59955127p-213, 0.0, 0.0, 0x1.729475659c065p-233, 0x1.82f65eef60a87p-307,
     0.0, 0x1.e0d9f6311dd93p-699, 0.0, 0x1.f2d8db0975f65p-962, 0x1.86e5908626191p-947,
     0x1.ebb0f438f4b52p-752, 0.0, 0x1.39a49fc1c2bb6p-442, 0.0, 0x1.be6c63f16c247p-683,
     0x1.5686eed4f750ep-194, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e0ddc67079bbbp-495,
     0x1.2f31666ab9f26p-831, 0.0, 0x1.398d5ac964608p-329, 0x1.478bc81190511p-735,
     0x1.64d5ecbd64b76p-501, 0x1.041e712a05013p-160, 0.0, 0.0, 0.0,
     0x1.811f2de5b5921p-232, 0.0, 0x1.e00dad34b7b7bp-71, 0x1.2e42180d76634p-142,
     0x1.880ff05f87ac8p-715, 0x1.eda7b8ac6584bp-948, 0.0, 0.0, 0x1.6299654f4b65p-187,
     0x1.cf890104f1d0cp-980, 0x1.d24955eab0f45p-908, 0x1.b0278bd5baea8p-83,
     0x1.57779c64908a5p-497, 0x1.6d81189b2f03fp-339, 0x1.829bdd9fae42p-689,
     0x1.53c30b82bb9fep-513, 0x1.fccce6610491dp-688, 0.0, 0.0, 0x1.7f64019162ba1p-548,
     0.0, 0.0, 0x1.e49c0d0f9d5eap-112, 0.0, 0x1.9e568414f7a26p-253,
     0x1.b7269e6075533p-180, 0x1.8a8bf4fbda0cbp-839, 0x1.cb962f4d4ab04p-809, 0.0,
     0x1.58b10b1b8a08ep-815, 0.0, 0.0, 0.0, 0x1.31bc6364fd036p-492, 0.0,
     0x1.22e58914e68f9p-643, 0.0, 0x1.e230b613ee2f5p-739, 0x1.9ac0a134d8a9ap-565, 0.0,
     0x1.7a9bd173f8f57p-762, 0.0, 0.0, 0x1.d7e5174f05839p-501, 0.0, 0.0,
     0x1.77fd4d29c767bp-647, 0x1.d0eba21eb1249p-231, 0.0, 0x1.836cc27a3bdcp-386, 0.0,
     0.0, 0x1.e1e5cc4cd126ep-557, 0.0, 0.0, 0.0, 0.0, 0x1.ba7c1df5cc07p-40, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7dbdb890a7b8bp-804, 0.0, 0.0, 0x1.7294c8870fd9cp-748,
     0x1.550846aae9fefp-342, 0x1.df97216522e56p-139, 0.0, 0.0, 0x1.18ea47dfbe003p-407,
     0.0, 0.0, 0x1.5de4599d362bep-155, 0.0, 0.0, 0x1.df39440b2e414p-826,
     0x1.e8ac2839fe363p-19, 0x1.cb91ebdea0a3ap-950, 0.0, 0x1.78b1e4ad180f5p-381, 0.0,
     0x1.d1c675e62a973p-682, 0x1.d307faa2c6053p-657, 0.0, 0.0, 0x1.fd62748a7273ap-203,
     0x1.975a1640970c4p-625, 0.0, 0x1.949c2d8ba3a5ep-386, 0.0, 0x1.0bfa9c7a55e5bp-818,
     0.0, 0x1.36d03874ae6eap-701, 0.0, 0.0, 0.0, 0.0, 0x1.7b7a4e3cf697cp-150, 0.0,
     0.0, 0.0, 0x1.b077582582a57p-634, 0x1.d5af80671b675p-298,
     0x1.f5d5753d897f4p-1000, 0x1.ca9023fced798p-141, 0.0, 0.0, 0.0,
     0x1.5875c599f86c4p-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e80b33ea901d1p-268,
     0x1.e9a8441e3253bp-145, 0.0, 0x1.1dee8f5eabe32p-423, 0.0, 0x1.70071a45fadfep-705,
     0x1.0ab34e9880e6dp-688, 0.0, 0.0, 0.0, 0.0, 0x1.841c1340f214cp-560, 0.0, 0.0,
     0x1.75a16747fdf55p-950, 0x1.7503f2f2c734cp-825, 0x1.6f9c7f282edc5p-508, 0.0, 0.0,
     0.0, 0.0, 0x1.d8034f8d5e2f6p-911, 0x1.c66ad0baa3e48p-106, 0.0, 0.0,
     0x1.e5ccfdea680ffp-995, 0x1.25fe5fef211afp-1017, 0x1.f9f58a295964cp-752,
     0x1.035bf3284b3a6p-257, 0x1.edf5867eb81efp-145, 0x1.670aef60fde49p-516, 0.0, 0.0,
     0x1.469a3946f115dp-284, 0x1.f52b6ad15ddfbp-438, 0x1.bc0d78e789941p-582, 0.0,
     0x1.64febb27e90e3p-414, 0.0, 0.0, 0.0, 0x1.4deda4dcd9256p-13, 0.0, 0.0,
     0x1.e521f2975c634p-458, 0.0, 0.0, 0.0, 0x1.6b582feeb513dp-848, 0.0, 0.0, 0.0,
     0.0, 0x1.35408e7990294p-401, 0.0, 0x1.bae68fc170827p-201, 0.0, 0.0, 0.0, 0.0,
     0x1.d3a2340113ab3p-24, 0.0, 0.0, 0x1.e17b4d78bc2a9p-239, 0x1.9453513e0cc06p-14,
     0x1.48d52ec72c4dcp-79, 0.0, 0.0, 0.0, 0.0, 0x1.332fe9c9db952p-779,
     0x1.1f7433a986788p-457, 0x1.8e0b0d253dee9p-499, 0x1.19d53a209e7ecp-710,
     0x1.875075baf79d5p-694, 0x1.a32293e745d4bp-780, 0.0, 0.0, 0x1.798f28b322b5fp-984,
     0x1.5fe265d51794ap-152, 0.0, 0.0, 0x1.955c9a9976615p-266, 0.0,
     0x1.b029710735219p-400, 0.0, 0.0, 0.0, 0x1.b9f809581df3fp-291, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d953c03840d89p-809, 0x1.1dcdf1d4eb05bp-963, 0.0,
     0x1.7e6ea8ba5e875p-243, 0x1.c6670dd0dc73p-433, 0x1.c0543d7c09162p-716,
     0x1.afec011a47386p-666, 0.0, 0x1.67a366312d8ap-428, 0x1.dae829ed1dd71p-826, 0.0,
     0x1.636f0ead28075p-649, 0.0, 0.0, 0x1.d5e26091ead6bp-625, 0x1.f1c640f06c883p-998,
     0.0, 0.0, 0x1.b068115ebe0bdp-177, 0.0, 0.0, 0.0, 0x1.4c4e16e0d5ba5p-340, 0.0,
     0x1.d9d332c27a074p-182, 0x1.72302fde8066ep-575, 0x1.b1f3613bc6dc2p-379,
     0x1.933a62ed1f428p-77, 0x1.2e1deff946f83p-290, 0x1.9a2360eb7b4dap-229,
     0x1.264bd95b36abep-338, 0.0, 0.0, 0x1.c5d8af4ff59abp-901, 0.0,
     0x1.7995c07b4cd5bp-358, 0x1.f219fa790945ep-381, 0x1.4a808a884dbc8p-135,
     0x1.9d8b3fb5f7e42p-984, 0.0, 0x1.29b2921efa89bp-446, 0x1.225118d7b7c2dp-213,
     0x1.0f5831394293p-950, 0.0, 0.0, 0.0, 0.0, 0x1.ffec89c91b97dp-1004, 0.0, 0.0,
     0.0, 0x1.186ca6add1fep-331, 0x1.f355ff699606cp-606, 0x1.ecd5555ed5c95p-857,
     0x1.f3a48234fcb6ap-244, 0x1.ad968d9b4db0dp-39, 0.0, 0x1.0e3d7086a1eep-941, 0.0,
     0.0, 0.0, 0x1.f9b5fadb202dcp-475, 0.0, 0.0, 0.0, 0x1.3810aa586eb81p-153,
     0x1.ca42c96685415p-86, 0.0, 0x1.dc97ab3fb90a6p-112, 0x1.3dbb73aa72b57p-296,
     0x1.e2cdcb1e51d2cp-225, 0x1.9b5eb46d5bd6bp-946, 0x1.127b60d183744p-797,
     0x1.3cdf8744357bbp-841, 0.0, 0.0, 0x1.e3c1b85f105b5p-707, 0.0, 0.0, 0.0, 0.0,
     0x1.2994b3443231cp-527, 0x1.982dcc6dae687p-769, 0x1.cc6560a2e9868p-739,
     0x1.a5175fa034413p-305, 0x1.a32f339088f2dp-476, 0x1.1d3202aab33c3p-75, 0.0, 0.0,
     0x1.ad97799916aeap-590, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e24f9ff5c43a3p-284,
     0x1.68c17dc43189fp-819, 0x1.50ad61281cda5p-20, 0.0, 0.0, 0.0,
     0x1.1542feb4b74f2p-411, 0.0, 0x1.1a68b2ff588ffp-95, 0.0, 0.0,
     0x1.2f7d8150b7138p-681, 0.0, 0x1.120d1170a599ap-764, 0.0, 0x1.365da60f63aebp-340,
     0.0, 0x1.232a310c6c5b3p-681, 0.0, 0.0, 0x1.79b85d340514dp-454,
     0x1.ee7ac12c198c3p-951, 0x1.cf2ca95428093p-243, 0x1.93d6db855f7a4p-49,
     0x1.c448bbbf0b06p-363, 0.0, 0x1.a7e39b0086b74p-943, 0.0, 0.0, 0.0,
     0x1.4620e2d8279c4p-315, 0.0, 0x1.dfaca6ca82fd9p-974, 0.0, 0.0,
     0x1.05f5dbd1bee23p-759, 0x1.993e83eb822f1p-775, 0x1.c12cc5b4437ffp-624,
     0x1.cd5ac61522d28p-604, 0.0, 0x1.93dc6e545da43p-323, 0x1.750b98fdb6edfp-162, 0.0,
     0x1.0aaaab5aa4fc9p-992, 0x1.e75faa0db7316p-749, 0.0, 0.0, 0x1.4e93982f9e3e6p-669,
     0x1.f5a87f49902f9p-298, 0x1.fac21626bc082p-153, 0x1.0862c313c8852p-184, 0.0, 0.0,
     0.0, 0.0, 0x1.b0555202600cdp-428, 0.0, 0.0, 0x1.cf7691dba37e5p-121, 0.0, 0.0,
     0.0, 0x1.d75e78376d1b4p-339, 0x1.6bd1d349c5aaap-264, 0x1.d54887f36607ap-936, 0.0,
     0x1.6d96376d6ad56p-464, 0.0, 0.0, 0.0, 0x1.a6567b2294ffbp-746,
     0x1.16057c4c65cecp-449, 0.0, 0.0, 0x1.1ce1d773fd809p-215, 0.0, 0.0, 0.0,
     0x1.20e0457c17b4ep-765, 0x1.9ee67c1d5451p-941, 0.0, 0x1.35a22d30808a8p-728, 0.0,
     0x1.4faaf4b9c6b5p-230, 0.0, 0.0, 0x1.233f5b25d8961p-527, 0.0,
     0x1.c25939576cd0ep-200, 0.0, 0.0, 0.0, 0.0, 0x1.38437c1a846p-141, 0.0, 0.0,
     0x1.11844daaa4a94p-894, 0.0, 0.0, 0.0, 0.0, 0x1.589b2f9a74d77p-201, 0.0,
     0x1.3aa5b0ff6849p-600, 0x1.9907a949190ddp-325, 0.0, 0.0, 0.0,
     0x1.2e3e7f7baf89ap-461, 0.0, 0x1.06344b59a07afp-546, 0.0, 0x1.9ca88cf39ab0ep-377,
     0.0, 0x1.09211e5d2cc0ep-683, 0.0, 0.0, 0.0, 0.0, 0x1.5f1ebbe03e663p-583, 0.0,
     0.0, 0x1.dbb79058c7da6p-607, 0x1.1a8149f986da4p-945, 0.0, 0x1.d7d6727b2aac9p-627,
     0x1.8273a6c73594ep-169, 0x1.4b288178d950ep-673, 0.0, 0x1.e2235dc2bae31p-602, 0.0,
     0x1.0b97cceac0923p-489, 0.0, 0.0, 0.0, 0x1.8342df47a97f5p-394,
     0x1.4a8da39b187bdp-835, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b12ce3f60d6ep-952, 0x1.2c6951a2e1119p-781, 0x1.0110b6c80ea5ap-76,
     0x1.a5418e0799c1bp-282, 0x1.48a4eeb1ff883p-350, 0.0, 0x1.ee2fe926c573ap-611,
     0x1.822d778b40519p-215, 0x1.0ceb1ae95825p-637, 0.0, 0.0, 0x1.5aecaaac9c21cp-817,
     0.0, 0x1.b340bed7015b6p-840, 0x1.e80b99e7398eep-394, 0.0, 0x1.c607b9b8e0d9fp-217,
     0x1.7c743967e2d33p-690, 0.0, 0x1.e8e5bf0db1bf4p-936, 0x1.8cb7e8028c597p-67,
     0x1.8ef37ec1a2c03p-651, 0.0, 0x1.ae3d41abc0c35p-547, 0x1.70f0a3a54907p-901, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.558e171c1f009p-197, 0.0,
     0x1.0d6b0abee47cfp-112, 0x1.a050b32763fe4p-511, 0x1.beb277c68e151p-1020, 0.0,
     0.0, 0x1.cc0a3024465ep-774, 0x1.c5e31572dc765p-306, 0x1.730f86a8f65b7p-693, 0.0,
     0x1.c27c88d6c5a4dp-504, 0.0, 0x1.801362024b3e3p-67, 0.0, 0x1.84d4a9938fa03p-314,
     0x1.79b15504ac96ep-895, 0.0, 0x1.85e7f31df0185p-161, 0x1.c1ea2b0955451p-23, 0.0,
     0.0, 0x1.9d3f80c785937p-797, 0x1.a08afb2c5cf0cp-196, 0x1.5b419735916ccp-102,
     0x1.ccbcc0b98e89ap-207, 0x1.0cd0dd12d5d6p-211, 0x1.dcb2a1ae15887p-637,
     0x1.e38b59daae76ap-760, 0x1.55bdfa2ffe92fp-511, 0x1.3156d2eed6418p-574,
     0x1.5132e0de63a32p-677, 0.0, 0x1.20fe5e75c7babp-830, 0.0, 0x1.d4ec22b5296fap-399,
     0.0, 0x1.87fa610714f28p-656, 0.0, 0.0, 0x1.b94b11f66ad33p-795, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1d002e9d0d654p-361, 0.0, 0.0, 0x1.15b31423573a7p-550, 0.0, 0.0,
     0.0, 0.0, 0x1.d8e1bc2bc2ac1p-108, 0.0, 0.0, 0.0, 0x1.5e37524cfb5b3p-888, 0.0,
     0.0, 0x1.3be1e588f3a95p-494, 0.0, 0.0, 0x1.a96ba93078a28p-902, 0.0,
     0x1.cd311bdb3132ep-904, 0.0, 0.0, 0.0, 0x1.22f929e406c7cp-624,
     0x1.89ec59024c9bp-542, 0x1.7e56ff13c5832p-511, 0x1.b706f95ddf692p-952,
     0x1.e009260f263cfp-27, 0x1.0fe3cdad65463p-500, 0.0, 0x1.a03f965eda4fap-544, 0.0,
     0x1.772596771476dp-303, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b0f8b1136551p-559, 0.0,
     0x1.4f147b56f2c1dp-881, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e35113e324635p-529,
     0x1.eaabae0078c2p-506, 0x1.1b54820d427f5p-448, 0x1.38b6de2b77e93p-298,
     0x1.5870a264634e3p-745, 0.0, 0x1.58c80d0f4be91p-179, 0.0, 0.0, 0.0,
     0x1.3b6d567764a5ap-388, 0.0, 0x1.06d4ffeacfd18p-728, 0.0, 0x1.8cbf36fe69e17p-286,
     0x1.068af08308095p-966, 0.0, 0.0, 0.0, 0x1.595b1f3adf53cp-781,
     0x1.ec3ae5909d0cap-21, 0.0, 0.0, 0x1.4ce09e283dfa1p-731, 0x1.908119a80cc6bp-647,
     0x1.54854c48b9d18p-137, 0.0, 0.0, 0x1.55da964a48bb5p-470, 0.0,
     0x1.a5ed934863d68p-149, 0x1.3c3f34940143p-326, 0x1.c0e6549c4d62fp-69, 0.0,
     0x1.d7f33ae8ad065p-526, 0x1.40b4727d95215p-507, 0.0, 0x1.5dc3ecd24f466p-614, 0.0,
     0x1.569f166d0149dp-80, 0.0, 0x1.a37d8721c798ep-908, 0.0, 0.0,
     0x1.34fe1d12a6c66p-767, 0.0, 0.0, 0x1.ee4ff0207a4c2p-865, 0x1.59c2cf985d13ep-340,
     0.0, 0x1.e72907f624d2ep-771, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_tand2_u35kvx(tmp0);
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
    printf("Sleef_tand2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_tand2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
