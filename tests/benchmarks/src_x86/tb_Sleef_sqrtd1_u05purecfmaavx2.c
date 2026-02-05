/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sqrtd1_u05purecfma.c --function \
 *     Sleef_sqrtd1_u05purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.56e55378012aap-826, 0.0, 0x1.b3ae8aa4d5f0ep-510, 0.0,
     0x1.cb01cd501ed15p-948, 0.0, 0x1.fa86a375c41f2p-804, 0x1.fac3d4644238p-832,
     0x1.77ae2a81c13d1p-390, 0.0, 0.0, 0.0, 0x1.c041dc66bb7bdp-902, 0.0, 0.0,
     0x1.291f6e8a0e32fp-472, 0.0, 0x1.bef920f829c67p-699, 0x1.6cb6b10043bd5p-197, 0.0,
     0x1.d5c49a2927b69p-336, 0.0, 0.0, 0.0, 0x1.a063c0ac372a4p-46,
     0x1.cac17838d9cd8p-414, 0x1.9f0fa1e373d1fp-852, 0.0, 0.0, 0x1.f6ca74b9ead4bp-622,
     0x1.a248115fd80d8p-31, 0x1.ab67664f37d2ap-824, 0x1.305179d6ff217p-250, 0.0, 0.0,
     0.0, 0x1.3cf7a5a573453p-21, 0.0, 0.0, 0.0, 0x1.9766ec1c75fbcp-1013, 0.0,
     0x1.8f9787a2fbdbbp-461, 0x1.f8c80d01d23a5p-710, 0x1.c401d3c1972d5p-719, 0.0,
     0x1.c5ae14e4e3b51p-316, 0.0, 0.0, 0.0, 0.0, 0x1.e15f962306ff4p-891, 0.0,
     0x1.d299de94d2081p-729, 0.0, 0x1.6111f7382f89dp-151, 0x1.c33f75bf234acp-488, 0.0,
     0x1.c638e99c762d3p-897, 0x1.94a4dbb7d1c21p-140, 0x1.c7e048e1fc4dcp-596,
     0x1.eeeaece65df91p-1005, 0.0, 0x1.ce11300c0c3bep-203, 0.0,
     0x1.4a3c48896f557p-302, 0x1.51b8268b62d79p-596, 0.0, 0x1.61035cf274895p-824, 0.0,
     0x1.a761bb19ea046p-161, 0.0, 0x1.7cd48acf999d8p-270, 0.0, 0.0, 0.0, 0.0,
     0x1.1be0f5b25a78ep-886, 0x1.105b3389d2345p-677, 0x1.5e742696916bdp-577, 0.0,
     0x1.dab84c952662bp-43, 0.0, 0x1.be1a433f36aabp-107, 0.0, 0.0, 0.0,
     0x1.4f158237aabfdp-571, 0.0, 0x1.c860eb0a02025p-443, 0.0, 0.0, 0.0,
     0x1.307a20fd58d83p-189, 0x1.4b2a566889193p-91, 0.0, 0x1.36fd58ff1ad7fp-46, 0.0,
     0x1.9166d57b87fc7p-971, 0.0, 0x1.1b7cf41655ecp-568, 0x1.90a03d876171dp-560,
     0x1.5d736302eb257p-1020, 0.0, 0x1.221b02a9d9eadp-615, 0.0, 0.0,
     0x1.3b038b3a1aaa2p-186, 0.0, 0.0, 0x1.7ffb8b93f3ecfp-303, 0.0,
     0x1.51f4e59ced4e9p-304, 0.0, 0x1.c1063caccdedp-196, 0x1.b073a78950fc4p-553, 0.0,
     0x1.eb8d457d5efc3p-239, 0.0, 0.0, 0.0, 0x1.5966ea410a2ep-499, 0.0, 0.0,
     0x1.7cb877d97489fp-708, 0x1.c76ec0f07466ap-387, 0.0, 0x1.7d2d577a826c9p-861, 0.0,
     0.0, 0x1.35c8921efa012p-896, 0.0, 0.0, 0x1.29a0fd140e7e6p-605,
     0x1.25e35f621f727p-111, 0x1.4d4445fffa29dp-290, 0x1.2cb4b538dc778p-65, 0.0, 0.0,
     0x1.9c2a378608f07p-1018, 0.0, 0x1.af46716b0b139p-83, 0.0, 0.0,
     0x1.1c9b23bb26d75p-549, 0.0, 0x1.e74ee8f960cdcp-111, 0x1.78ae0fc00c93p-358, 0.0,
     0x1.4eb4df3ae6011p-699, 0.0, 0.0, 0.0, 0x1.126e9bdc537fep-534,
     0x1.1b281e4955845p-842, 0x1.a33c837ca0f05p-31, 0x1.2c2f16b860a29p-577, 0.0, 0.0,
     0x1.ed6e58fda17b9p-270, 0.0, 0.0, 0.0, 0x1.814e04139df9dp-373, 0.0,
     0x1.952e5a1f475afp-606, 0x1.c1ec7eb6b2f4fp-980, 0.0, 0x1.b00f1702189f1p-457, 0.0,
     0x1.f3bfa117e1d2bp-26, 0.0, 0x1.eac0934079a87p-811, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.52f3819f93eb8p-585, 0x1.4b59138265f6bp-633, 0.0, 0.0, 0x1.9ce96b89d0356p-690,
     0x1.f95f537557588p-953, 0x1.1fe4a6d6de62ap-760, 0.0, 0.0, 0.0,
     0x1.741a5e157e5ddp-51, 0.0, 0x1.d4f673f957e05p-43, 0.0, 0x1.0fb6f9b39929p-290,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b792e904dc3e5p-246, 0x1.69172c5d7a64bp-107,
     0x1.dda318ec2e558p-758, 0.0, 0.0, 0.0, 0x1.9d55c8830ca4p-319,
     0x1.66ceb481b0c05p-138, 0x1.efba6aabe174p-935, 0.0, 0x1.b4e6a9718c1f9p-501,
     0x1.a0240cf34418fp-769, 0.0, 0.0, 0.0, 0x1.4441e034a45e4p-598, 0.0,
     0x1.8992821f54dfbp-121, 0.0, 0.0, 0x1.2be89239df1fp-39, 0x1.e550ed46bd05bp-605,
     0.0, 0.0, 0x1.ab68c775c7ce8p-592, 0x1.1b0019e533b31p-797, 0x1.6e1fc49aa1dddp-591,
     0.0, 0.0, 0x1.7f9b16755da72p-642, 0x1.0a73c469f7abap-909, 0.0, 0.0, 0.0,
     0x1.3f23a5d03ba9cp-208, 0.0, 0.0, 0x1.b9afd56a78443p-894, 0.0, 0.0,
     0x1.4fc786f55eff6p-666, 0.0, 0x1.d425c2cf6be0fp-937, 0x1.ac2615fe4a4f4p-1021,
     0.0, 0.0, 0.0, 0x1.1cada48619f3dp-68, 0x1.5a3b4312b73ep-71,
     0x1.ed4597e42e9bep-1000, 0.0, 0.0, 0x1.bf2ff162b189p-766, 0.0,
     0x1.eb7e3a191df5fp-958, 0.0, 0.0, 0.0, 0x1.955288c90f06p-477, 0.0,
     0x1.43c9e6784abd2p-436, 0x1.4f76b4ca34f9bp-836, 0x1.2e81a38e8b6b4p-367,
     0x1.d534ab26278aep-790, 0x1.d97b4271117e4p-797, 0x1.446e65b63766ap-451, 0.0, 0.0,
     0x1.fb8499f5444c3p-545, 0.0, 0x1.852ef37e27fe8p-655, 0.0, 0x1.4a7dde2cb9ebcp-503,
     0x1.cbd137f7bd85dp-775, 0.0, 0x1.00ba68e495cdfp-366, 0x1.9d08fec303235p-1017,
     0x1.cacc80fd43eabp-123, 0.0, 0.0, 0x1.aa802d483637ap-713, 0.0, 0.0,
     0x1.71130dbccdb21p-455, 0.0, 0.0, 0x1.5140c7cb54d07p-199, 0x1.9d96bb5dad3d1p-440,
     0.0, 0x1.7727333bd56dcp-991, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.790f9e7151ec7p-12,
     0x1.169285f5ad85p-917, 0x1.0c271a935a8bcp-53, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.739c3219c854fp-390, 0x1.fb4199c1284f9p-731, 0x1.3820ac1b533cap-43,
     0x1.9737f08165629p-717, 0.0, 0.0, 0x1.8b0acd293c6c9p-280, 0x1.6128dc55660a4p-696,
     0x1.ee35d596bb742p-200, 0.0, 0.0, 0x1.65b37673e35cap-412, 0x1.37938c39056bfp-249,
     0x1.b1d3719c10df7p-59, 0x1.b7fdd2f59d038p-730, 0x1.c0d65de66d985p-276,
     0x1.dd4a4b597a2efp-420, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f7febfa5929fp-67, 0.0,
     0.0, 0.0, 0x1.e8ae70e18c01fp-123, 0.0, 0.0, 0.0, 0x1.f0bdddf8b18adp-48,
     0x1.137de93f9dba1p-711, 0x1.b8a1c8861a56dp-614, 0.0, 0.0, 0x1.e707742c68bd9p-234,
     0.0, 0.0, 0.0, 0x1.512cad1e46986p-400, 0.0, 0x1.34c1cbe83b2b7p-573, 0.0, 0.0,
     0x1.f2fef3250728dp-406, 0.0, 0x1.1a1813188b432p-878, 0x1.aa989e8f3519ap-156,
     0x1.54e9ddd3a00cfp-460, 0x1.bb51bb63aabc4p-694, 0.0, 0x1.fcd363218c9d3p-299,
     0x1.d0f6924b3db4ap-447, 0x1.c1f7e73556cefp-172, 0.0, 0.0, 0x1.9e77c04e378cfp-733,
     0x1.e4f28a8c263e2p-986, 0x1.80abed5345b02p-910, 0.0, 0.0, 0x1.e2f163092b9b5p-984,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f2be636c9d048p-644,
     0x1.d78cbf5719135p-138, 0.0, 0x1.cc3cdbd16455p-817, 0.0, 0x1.35e5a361d6d8fp-149,
     0x1.b7f8b64245fa6p-22, 0.0, 0x1.15a6b2d131015p-176, 0x1.ffa1b3e1d01ep-743, 0.0,
     0x1.06e1bc16006d8p-797, 0x1.9179ba5e00c1p-813, 0.0, 0.0, 0.0, 0.0,
     0x1.79b35eeb4886dp-879, 0x1.597eea1150b8cp-118, 0x1.8044a59caddc5p-924,
     0x1.1e61a9a528f47p-132, 0.0, 0.0, 0x1.5423c035572c2p-354, 0.0, 0.0, 0.0, 0.0,
     0x1.44428a5b7722fp-614, 0.0, 0x1.1681f1940ce09p-658, 0x1.89d81ff91e737p-699, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d64140cda8a8ap-767, 0.0, 0.0, 0.0, 0.0,
     0x1.bdad196752d4bp-725, 0x1.d74fcd354b024p-865, 0x1.70b6ec1f1c4dcp-877,
     0x1.4cb9e2f95e64dp-22, 0x1.ee83d459cd1d3p-557, 0x1.4cdb007b7a63ep-781,
     0x1.f732a64d28318p-523, 0x1.34fd155d8a6b5p-247, 0.0, 0x1.4023e754a15b5p-772, 0.0,
     0.0, 0x1.f20082bdfa10bp-274, 0.0, 0.0, 0x1.e6963fd0d7e85p-578, 0.0, 0.0,
     0x1.356291d702084p-685, 0.0, 0x1.fb010e233a0c2p-269, 0.0, 0x1.be113da594944p-904,
     0x1.3fe97614add81p-39, 0.0, 0.0, 0x1.3a163600b2592p-918, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1aca07923179fp-821, 0.0, 0x1.714dcc8f4be74p-61, 0x1.ef6933c008636p-242,
     0x1.41ab44a053966p-359, 0.0, 0.0, 0x1.9dab34ad95cf9p-800, 0x1.a98a8297abaa1p-586,
     0.0, 0.0, 0.0, 0x1.510fe3b9c4396p-161, 0x1.2bf5387683a0cp-820, 0.0,
     0x1.568f9652edc33p-22, 0x1.e8219a21bf703p-940, 0x1.92c84523bbab7p-149,
     0x1.b1ab721a4eb16p-852, 0.0, 0x1.0240590711fddp-743, 0x1.0763a62ccb03ap-882, 0.0,
     0x1.bc02f40ad9c3ep-485, 0x1.21e91c125fd66p-301, 0.0, 0x1.3f72f10f32d63p-513, 0.0,
     0.0, 0x1.359c48541fd9ep-911, 0.0, 0.0, 0.0, 0.0, 0x1.52576f342fd6ep-890, 0.0,
     0.0, 0x1.4c258ab2a275p-602, 0.0, 0.0, 0x1.ca0ad634b7ebep-600, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1630f80f43df8p-721, 0.0, 0x1.a722b9bfdb518p-1022,
     0x1.5bf63b663fd04p-29, 0.0, 0.0, 0.0, 0x1.a78e1803a056cp-165,
     0x1.fe0eb51c38c7bp-178, 0.0, 0x1.80674ef8dbfb4p-902, 0.0, 0.0,
     0x1.c27b6a395e4a7p-672, 0x1.aa348ae9aed91p-208, 0.0, 0x1.241c93bf19a4dp-812, 0.0,
     0.0, 0x1.8777e2ea58babp-21, 0x1.7f9d5ca80e9e2p-727, 0x1.a75aa05f819a1p-322,
     0x1.a9870aa76654bp-32, 0.0, 0x1.d19c3d9010e4ap-10, 0.0, 0.0,
     0x1.6d2fe81abd177p-92, 0.0, 0x1.9fc4d19c0ebc8p-51, 0x1.d088d6d76f337p-945, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fb5bea61f2b43p-883, 0x1.20476fe2bc992p-981,
     0x1.03275042769e4p-500, 0.0, 0x1.3d51a93a92cbfp-52, 0x1.785ceac022fb1p-819,
     0x1.4d11d8a641131p-436, 0x1.a79d8b70f4799p-109, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f2c3eb45744bp-736, 0.0, 0.0, 0.0, 0x1.6cdc597a00526p-26, 0.0,
     0x1.120a4ab4f3d4fp-272, 0.0, 0x1.5f70a02395e21p-1000, 0.0,
     0x1.64f8d019a175fp-334, 0x1.495aabfc3a158p-891, 0.0, 0x1.2f709eadbb64ap-526,
     0x1.295bb73b4926cp-428, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d06197c8910efp-332, 0.0,
     0.0, 0x1.d91bbc284976cp-698, 0x1.0ad5479de51c2p-48, 0x1.4392a2f0f2cf7p-860,
     0x1.80dec42c5982p-619, 0x1.4538d3ef5ff6bp-507, 0.0, 0.0, 0.0, 0.0,
     0x1.6b78b3106e79cp-76, 0x1.bd8e4d8370adfp-606, 0x1.cb465e179c5f1p-798,
     0x1.11167a2f86f8ap-189, 0x1.acbe3c6b5a15dp-568, 0.0, 0.0, 0x1.9b124acc90469p-182,
     0.0, 0.0, 0x1.a186ab8650ba1p-618, 0.0, 0x1.b56707bb18488p-290, 0.0, 0.0, 0.0,
     0.0, 0x1.d5300ee541a0dp-215, 0.0, 0.0, 0.0, 0x1.58623162ac8ap-851, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.25fee15041d32p-426, 0x1.592998ce77ac1p-36,
     0x1.2ba6ca6436f8dp-572, 0.0, 0x1.222b340e06b2bp-764, 0.0, 0.0, 0.0,
     0x1.cc27cc6110d16p-193, 0x1.ccfadd413897dp-588, 0.0, 0x1.07e14ee12c298p-432,
     0x1.3920bdbe3aeb2p-940, 0.0, 0x1.b39e5698d245ep-96, 0.0, 0x1.eb1a67ed8d8a1p-571,
     0.0, 0x1.a4578ba1663acp-734, 0x1.1a5d5b05cd906p-331, 0x1.1663f681bf9bp-463, 0.0,
     0x1.1942c9aa002a9p-230, 0x1.50e98ac919784p-582, 0.0, 0.0, 0x1.2afe32d96c80ap-576,
     0.0, 0x1.9ae495abd87p-789, 0.0, 0.0, 0.0, 0x1.d1df3cff53b6ep-633, 0.0, 0.0,
     0x1.05d2438eef258p-88, 0x1.0235b6f32af83p-240, 0.0, 0x1.2cd56d3bec664p-702,
     0x1.d1c192d33b117p-620, 0x1.074ecaaddaa94p-862, 0x1.a7135cebb1fffp-541,
     0x1.0b63ea079edbap-875, 0x1.b4fd2013d27c2p-43, 0.0, 0x1.e0444b979525dp-342,
     0x1.031c21c5e47eep-59, 0.0, 0.0, 0.0, 0.0, 0x1.6d92839b3ecp-748, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e6f36379a8182p-329, 0x1.34c1a28901d3bp-194, 0.0,
     0x1.8174f08d3bb1ep-186, 0.0, 0.0, 0.0, 0x1.c2c0d0bf8e1b2p-850,
     0x1.f1bc420fd6ed7p-970, 0x1.6e9a91748ebb9p-34, 0.0, 0x1.f6657488c7e83p-598, 0.0,
     0x1.7d850a7163115p-855, 0x1.38ffc06346fd3p-519, 0.0, 0x1.38b0d81a8486ep-350, 0.0,
     0x1.878298cf1d1cdp-290, 0.0, 0.0, 0x1.33dbd3ec77908p-499, 0.0,
     0x1.5ea2ff57673d8p-740, 0.0, 0x1.97d216f8110bcp-814, 0x1.04af6f645eefdp-132, 0.0,
     0.0, 0.0, 0x1.831ff58c75df4p-525, 0.0, 0x1.8c96c65df3c98p-683, 0.0, 0.0, 0.0,
     0x1.33a1a82adc9cfp-805, 0.0, 0x1.0c46a6c0a49efp-141, 0.0, 0x1.e5b68b82591b1p-548,
     0x1.64fdffe128b08p-759, 0x1.469c64b27fe97p-140, 0.0, 0x1.8a3b965a2cbfap-686,
     0x1.d4f8f6dbb1283p-866, 0.0, 0.0, 0x1.cdee4b5aa9fd6p-969, 0.0, 0.0,
     0x1.ec09f9be26bd9p-1005, 0.0, 0x1.920c6b106ce3ep-1015, 0x1.af81774771986p-626,
     0.0, 0x1.ef2aa8d8b1fbfp-927, 0.0, 0x1.e42eb18df6ab2p-399, 0x1.633b93f3849d3p-704,
     0.0, 0x1.a17b126df46e6p-891, 0x1.43f492935fac7p-220, 0x1.fdc4362008ba7p-670, 0.0,
     0x1.2edbc20c891a4p-623, 0x1.5d8cd9f7bc9fep-240, 0x1.094b17d8e45d4p-292, 0.0, 0.0,
     0.0, 0x1.28b140564b7c6p-831, 0.0, 0.0, 0x1.19238db68948ap-68,
     0x1.e858c5b5e39f1p-962, 0.0, 0x1.4d67d1b89c34bp-480, 0.0, 0.0,
     0x1.a14142aece0fp-899, 0x1.edf2c38daa857p-53, 0.0, 0x1.37905cd3f1cc7p-256, 0.0,
     0.0, 0x1.1f6840389a6ebp-98, 0.0, 0.0, 0.0, 0x1.27a230cf64dddp-734,
     0x1.024dee7f27c34p-404, 0.0, 0.0, 0.0, 0.0, 0x1.1230695a51b09p-266,
     0x1.1bce6705fe06cp-790, 0x1.9710bb229192ep-597, 0.0, 0.0, 0x1.8ecbb18920653p-613,
     0.0, 0.0, 0x1.39f1c6286f78ap-554, 0x1.a8346e66b5b36p-75, 0x1.2cabc7a93e685p-934,
     0.0, 0.0, 0.0, 0.0, 0x1.678e6e96d00a1p-100, 0x1.f2e632029618dp-278,
     0x1.8388c9c220b9p-598, 0x1.03937926eeed3p-358, 0.0, 0.0, 0.0,
     0x1.bb42a7797b6e9p-468, 0x1.51b04cade894fp-353, 0.0, 0.0, 0x1.cf01e8f3c21e2p-596,
     0.0, 0x1.adf7c848a099dp-737, 0.0, 0.0, 0.0, 0x1.ab0f9b02aa70ep-525,
     0x1.b31e23e1ae21bp-948, 0.0, 0.0, 0x1.1eda6c158b068p-385, 0.0,
     0x1.145e88d0c4a01p-498, 0x1.3471dc7ff21ep-711, 0.0, 0.0, 0x1.5ab4fc6715464p-87,
     0.0, 0x1.941a3c9250f0dp-540, 0.0, 0x1.913698ecafee5p-927, 0.0,
     0x1.3574829b672dbp-356, 0.0, 0x1.ff4067deed558p-227, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.231fb35400a59p-657, 0.0, 0x1.0a743caaa791p-372, 0x1.05de172e21264p-271,
     0x1.085e30c4e5defp-371, 0.0, 0x1.b48cf2de06931p-638, 0.0, 0.0,
     0x1.05eb605590388p-686, 0.0, 0x1.86a096b4e5f48p-245, 0x1.7cdedc66336eap-709,
     0x1.35dcb36c9fbebp-749, 0x1.3f7cfcaaa8ad9p-631, 0x1.2d2ddd7bc78bp-262,
     0x1.0eb720755f6b5p-564, 0.0, 0x1.eb844e2fcac0ep-281, 0.0, 0.0, 0.0,
     0x1.f94d29b67244fp-882, 0x1.c08022156f686p-199, 0x1.d02b9d8e59e09p-970, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f93ca252441b9p-965, 0.0, 0x1.6cc9e8049e00cp-873, 0.0, 0.0,
     0x1.7ecc73283c96bp-53, 0x1.79441308a940dp-662, 0.0, 0.0, 0x1.43ccbe9511b65p-139,
     0.0, 0x1.4757e2e5662e7p-585, 0.0, 0.0, 0.0, 0x1.6d9b2b20f4676p-781,
     0x1.5afbd8f45dcfp-222, 0.0, 0.0, 0x1.9a48e5436a583p-567, 0.0, 0.0, 0.0,
     0x1.98f679b64331dp-833, 0x1.4d8bb8818be03p-686, 0x1.dc7d2c96cfd9p-826, 0.0,
     0x1.b60342e4a395dp-796, 0x1.fe5ea2f98ef9ep-38, 0x1.f85106c9abfcdp-742,
     0x1.47e70b718551ep-148, 0x1.e87a7decab9b6p-425, 0.0, 0.0, 0.0,
     0x1.e7d5843fc9f4p-990, 0.0, 0x1.9749c0834c501p-259, 0x1.d15e9ad94f21bp-689,
     0x1.5303417833c54p-723, 0x1.546a905eb9aebp-655, 0x1.b552558ada1ffp-642, 0.0, 0.0,
     0x1.3d0a9995e701ap-861, 0.0, 0.0, 0x1.17d4987a0c7fep-578, 0x1.61bbc0b705779p-956,
     0.0, 0.0, 0.0, 0.0, 0x1.4b9b88a49c408p-452, 0x1.6b64434f9ede5p-976, 0.0,
     0x1.a716bc3a1bb66p-522, 0.0, 0x1.a7dbd62c03363p-32, 0x1.a2063752cf49cp-131, 0.0,
     0.0, 0x1.c6c0aac7d620bp-819, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5aa7735212b61p-123,
     0x1.943871679c2cep-449, 0.0, 0.0, 0x1.e09a92e21942ep-892, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.8e23eccfa58abp-661, 0.0, 0x1.35bdf77e62aeap-730, 0.0,
     0.0, 0x1.521dab10d1a82p-13, 0x1.d250d8c42c133p-312, 0.0, 0x1.fa7b6946ec51ep-330,
     0.0, 0.0, 0x1.f08de510e6d3fp-632, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5b1e9d1fea336p-1017, 0x1.4eeab26bd31fbp-147, 0.0, 0.0,
     0x1.34baddf3800e1p-253, 0.0, 0.0, 0.0, 0x1.90b50e0ccbbb9p-978,
     0x1.bd9983ce9583ap-807, 0.0, 0x1.66d16301ad2f4p-304, 0x1.0d81d03ab17d3p-546,
     0x1.3ee9b5872cf34p-75, 0.0, 0.0, 0x1.516cb98312064p-673, 0.0,
     0x1.631e4ac247f59p-658, 0x1.65ba568c29329p-63, 0x1.88ee9ba39f552p-370,
     0x1.b6af21da46a7bp-721, 0x1.5c015bd2c88ep-316, 0x1.e03026b94f895p-81, 0.0, 0.0,
     0x1.262d796ee9036p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ba776df2c854dp-140, 0.0, 0.0, 0x1.59230aa74ae7fp-388, 0x1.6057f310aea46p-696,
     0x1.c50d16d92d83ep-850, 0.0, 0.0, 0.0, 0x1.63d757575a1cdp-546,
     0x1.beef5a4a3b23cp-377, 0.0, 0x1.58e402db465eep-24, 0x1.83f7d3310f88ep-540, 0.0,
     0x1.e786b6aa6409p-836, 0.0
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
            tmp1 = Sleef_sqrtd1_u05purecfma(tmp0);
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
    printf("Sleef_sqrtd1_u05purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sqrtd1_u05purecfma bench acc %la\n", global_bench_acc);
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
