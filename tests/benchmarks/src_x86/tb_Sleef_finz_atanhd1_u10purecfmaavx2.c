/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhd1_u10purecfma.c --function \
 *     Sleef_finz_atanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0x1.ef4cc88d24391p-750, 0x1.66f9ca339fbbfp-819,
     0x1.4ca3571cb58b7p-693, 0x1.2e5164a01c3f8p-1, 0x1.a0db7750ca698p-403,
     0x1.d45dcf0de526p-130, 0.0, 0x1.d1391a79b2342p-498, 0x1.c4eb92eb2f482p-851, 0.0,
     0x1.466b100040977p-839, 0x1.8b7a2b71670efp-785, 0x1.fcaf970be6784p-708, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d6579bf34c56cp-715, 0x1.6d1e16dfdaa7fp-499,
     0x1.a4335ffc6e839p-12, 0.0, 0x1.620448aff1dabp-845, 0x1.36715c189841dp-251, 0.0,
     0.0, 0x1.d0ec4965044e7p-108, 0x1.36b76440c7c51p-962, 0x1.0b6b9b589f8ecp-728, 0.0,
     0x1.07ff883048ec2p-932, 0.0, 0x1.e3bb7b6bbee5fp-873, 0.0, 0x1.68e34f5520066p-837,
     0x1.6d377dea990a9p-946, 0x1.bb63867ba1cf4p-334, 0x1.0f00d756e874fp-565, 0.0,
     0x1.08d7d2912051cp-928, 0.0, 0x1.f01c7e884fc36p-798, 0x1.02ecf9a855564p-130,
     0x1.9113de97b5e21p-644, 0.0, 0x1.c240828e70a36p-687, 0x1.a02287cf2fa27p-676,
     0x1.2970c2a39378fp-805, 0.0, 0x1.748a84b6642c1p-253, 0.0, 0.0, 0.0, 0.0,
     0x1.7ffa6a47f4f59p-855, 0x1.3d5d5985ef057p-87, 0x1.e2272efcea30fp-820,
     0x1.b8632f02c7e34p-372, 0x1.28558e11ab9a6p-246, 0x1.90fb156632f1ep-20,
     0x1.f6950b53e0a87p-678, 0x1.98b4a3665cef2p-301, 0x1.14905bd85a1fep-886, 0.0,
     0x1.f035aa9d74ae6p-73, 0x1.bfe223f4c7382p-830, 0.0, 0.0, 0x1.8f96b9ab12ddfp-68,
     0.0, 0.0, 0.0, 0x1.6da8448b059cap-343, 0x1.585809b6420cap-789,
     0x1.a0a5d1e033365p-935, 0x1.65fcdb204284p-446, 0.0, 0x1.2ea9aa84f1a1ap-445,
     0x1.51864defa7465p-239, 0.0, 0x1.7d208c36deb64p-741, 0x1.474a480c7ee1bp-188, 0.0,
     0.0, 0x1.bce3c1f3f0c59p-738, 0x1.5116b2d3a064dp-693, 0x1.3ed87c0dc1cdcp-814, 0.0,
     0.0, 0.0, 0x1.013b2fdac5037p-501, 0x1.84aa9daa1dd65p-248, 0x1.51ebae64248a5p-384,
     0.0, 0.0, 0.0, 0x1.50bebaa2634dfp-467, 0.0, 0.0, 0x1.4fb026c7be5d9p-544,
     0x1.732426d327326p-411, 0x1.0dfc5e24c6e9cp-799, 0x1.c84cb87aa064ap-1006,
     0x1.32e30029c6c9fp-311, 0.0, 0x1.ffce34b957afap-708, 0.0, 0.0,
     0x1.369cea86997bdp-81, 0x1.e8e9e9ba555ffp-968, 0x1.569795161ac68p-569, 0.0,
     0x1.4fb3946c1962cp-579, 0x1.aaaccbb53815p-825, 0x1.5fe6edabb8678p-106,
     0x1.2e59b6e2f4826p-756, 0x1.ac9a732d8e095p-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.41eae82832e69p-417, 0x1.741cbf6a4c789p-11, 0.0, 0.0, 0.0,
     0x1.e9b6c4c77d289p-385, 0.0, 0x1.ad22a7c709408p-789, 0x1.59dc014f03ff8p-418,
     0x1.4adc88eac3fecp-849, 0.0, 0.0, 0x1.7cc895e32b398p-217, 0.0,
     0x1.d8330ba6ecd04p-832, 0.0, 0x1.de2a867b96df3p-371, 0x1.85ca285c977ap-467,
     0x1.844b0eacffc7fp-109, 0.0, 0.0, 0.0, 0x1.617b0a325d653p-713, 0.0,
     0x1.e5fd1798d50fap-640, 0x1.c4761e8da7f7dp-330, 0x1.b1c14ff8bffb8p-1018,
     0x1.8ca381bc71885p-990, 0x1.dee20542c2f23p-288, 0x1.b84da16a6178fp-990, 0.0,
     0x1.15e02f6365602p-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3fae68860cca8p-889,
     0x1.c1d0f86fe6df1p-270, 0.0, 0.0, 0x1.67da03b3b53f9p-405, 0.0,
     0x1.f8a8b5d4d41cp-757, 0x1.c41d26d4b5bfep-100, 0.0, 0.0, 0.0,
     0x1.2fe0736c91543p-836, 0x1.c35afe8521f83p-381, 0.0, 0.0, 0x1.8609de3ffee3cp-440,
     0.0, 0.0, 0x1.409b803140eebp-335, 0.0, 0.0, 0.0, 0.0, 0x1.f951473d7f292p-511,
     0.0, 0x1.a0479a7da00ffp-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6170c67ba4f37p-891,
     0.0, 0x1.5e8cb06533c4cp-878, 0x1.c7c9c4392808p-534, 0x1.172368c3b7012p-1009, 0.0,
     0x1.ed0bbfc5335a7p-471, 0.0, 0.0, 0x1.8f19a77acc58dp-418, 0x1.a3f6739928719p-924,
     0.0, 0.0, 0.0, 0x1.c055f5f6bb889p-806, 0x1.201cebe1c7dcp-1006, 0.0, 0.0, 0.0,
     0x1.4283c3599b2dbp-326, 0x1.eebbc77a6f8e8p-914, 0.0, 0.0, 0x1.528e3bcb309f4p-335,
     0.0, 0x1.d0c95973ab2afp-991, 0x1.a071feedd64d1p-479, 0.0, 0.0, 0.0,
     0x1.c81cc485cfb48p-677, 0.0, 0x1.bf059fe8b6f8fp-466, 0x1.6f022844015a7p-660,
     0x1.05d812e525309p-917, 0.0, 0.0, 0.0, 0x1.c722530eccf08p-298,
     0x1.0c570c6d32d04p-343, 0.0, 0x1.f99538099675p-48, 0x1.cf27d1c8727efp-768, 0.0,
     0.0, 0x1.e4367890238f8p-885, 0.0, 0x1.51dbe6b45b338p-627, 0.0, 0.0, 0.0,
     0x1.d78a38d038f1ep-714, 0x1.c001bb7b70243p-175, 0.0, 0.0, 0x1.b405439087e54p-279,
     0.0, 0.0, 0.0, 0x1.d7d68842fc568p-695, 0x1.216d6243932e9p-82,
     0x1.03d48b03e4763p-162, 0x1.3af5897f47304p-761, 0.0, 0.0, 0x1.2fc283439c378p-590,
     0x1.5ad2310d0585bp-581, 0x1.862545133a971p-774, 0x1.e7778fd23403ep-587, 0.0,
     0x1.12f97aab33777p-427, 0.0, 0.0, 0x1.17693201e12f4p-999, 0.0, 0.0, 0.0,
     0x1.cf77595941633p-554, 0.0, 0x1.bb640aac34761p-951, 0.0, 0x1.1023782cd2522p-411,
     0.0, 0.0, 0x1.4c289eaf52b48p-258, 0.0, 0x1.052be73287898p-899,
     0x1.810803536b34ep-927, 0x1.0b5fca2e69c15p-301, 0.0, 0x1.bd967af0a7a4ep-215,
     0x1.7313dda951461p-296, 0x1.4902e215c46e4p-649, 0x1.86f0b33f69d4fp-837, 0.0, 0.0,
     0.0, 0.0, 0x1.e48e2f789bc26p-571, 0x1.66cf3ba1b40e3p-662, 0x1.38ed93cff5dd7p-160,
     0x1.36442d48fb1d9p-201, 0x1.ebeb8604aba98p-469, 0.0, 0.0, 0.0, 0.0,
     0x1.7737f84c7a5e9p-216, 0x1.ed7f0da150f9bp-698, 0.0, 0x1.c5f78a98eaec3p-35, 0.0,
     0.0, 0x1.a87db658c2a33p-882, 0x1.f7a9ab660f268p-856, 0x1.c0e9cc89750dap-467,
     0x1.f239bdd85b14fp-648, 0.0, 0.0, 0x1.541089bc51d8ap-77, 0x1.e0f5a0cdf8391p-206,
     0x1.a6e6cb0b451eep-99, 0x1.62d71d0bcfc0cp-659, 0x1.ec7c3dfdfc15ep-679, 0.0,
     0x1.5131a0b1dd267p-726, 0.0, 0.0, 0.0, 0x1.8ade7691b7871p-188, 0.0,
     0x1.140d0cc2313e7p-358, 0.0, 0x1.24d099bbeb696p-905, 0x1.eb8ec8c839d56p-579, 0.0,
     0x1.d00219ac88979p-849, 0.0, 0x1.523e70a9a81c3p-919, 0x1.6ef5f065192d7p-672, 0.0,
     0.0, 0.0, 0x1.507103b73ffbap-520, 0.0, 0.0, 0x1.9a94724b9b45cp-775,
     0x1.c7488e5e92353p-963, 0x1.682e48f16be5dp-925, 0x1.fb1f65005a33fp-341,
     0x1.896ad98cf97b8p-161, 0x1.e2f76af47cf33p-473, 0.0, 0.0, 0.0,
     0x1.426fe2fe8c1fcp-907, 0.0, 0x1.1ab43be93a0d4p-39, 0.0, 0x1.9728468bf189bp-902,
     0.0, 0.0, 0.0, 0x1.a67d0542d62dbp-898, 0x1.2a422a17ec7d9p-561, 0.0,
     0x1.ba020ba840158p-299, 0x1.9907433790e55p-917, 0.0, 0x1.24614e0b9067ap-551, 0.0,
     0x1.61047408a7568p-219, 0.0, 0.0, 0.0, 0.0, 0x1.450c770ecd95ap-789,
     0x1.681b947968af9p-632, 0x1.a316df8b51b59p-51, 0x1.5e0b05a4c6ba9p-62,
     0x1.43893bb394baap-301, 0x1.267f0ddafa2aap-34, 0x1.29c40e5d3142bp-923, 0.0,
     0x1.4f2c568c9091dp-994, 0x1.f1244e0dc5bp-461, 0x1.259d8636ab1dbp-1011,
     0x1.b3307e9040d38p-881, 0x1.b06bc155284acp-494, 0x1.b58fc4f2d504ep-558,
     0x1.b977f6e23a9f1p-36, 0.0, 0.0, 0.0, 0.0, 0x1.ae657fe25d6f5p-572, 0.0,
     0x1.04cea4c201247p-650, 0x1.7e8504fbf24f6p-307, 0.0, 0x1.55f1a107fd07fp-192,
     0x1.f02e3ed232409p-960, 0x1.ddca2a682edb6p-939, 0x1.f4f69b01e83ap-840,
     0x1.07bd8d7c87aedp-218, 0x1.b025711c9bc22p-292, 0x1.7cb842fa749f2p-701,
     0x1.e3006e2ffd4cdp-648, 0.0, 0.0, 0.0, 0x1.0c998959787d8p-195, 0.0,
     0x1.f723dd1770969p-375, 0x1.6f7074aef18d4p-114, 0.0, 0x1.05359020034ap-704, 0.0,
     0.0, 0.0, 0x1.1c29f46a211c8p-552, 0x1.46766e9a2d4e2p-381, 0x1.33f655b47548cp-360,
     0x1.9e2aa4d8300a3p-439, 0.0, 0.0, 0.0, 0x1.7e738aa1c62bp-639, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0e8174ef43e59p-365, 0.0, 0x1.71afaccf155ebp-197, 0.0, 0.0,
     0x1.b18c003806p-484, 0x1.a97224c669ce9p-643, 0.0, 0x1.cb3e474167044p-638, 0.0,
     0x1.64ff7d49f59b1p-979, 0.0, 0x1.438ecf5a71033p-233, 0x1.830f5898f27c9p-840,
     0x1.4ebffb95f6b05p-275, 0x1.7643524939a2ap-533, 0x1.652aa9997a119p-290, 0.0,
     0x1.b25dbf61e4c5ep-761, 0x1.60c751dddaabbp-1022, 0.0, 0.0,
     0x1.687c152677d04p-126, 0.0, 0x1.cccfba21939fep-647, 0.0, 0x1.5bf8644d63b12p-867,
     0x1.05636618c5594p-225, 0x1.a0936fc878ac4p-237, 0x1.962cc94534a9dp-118,
     0x1.81a74e7d29587p-374, 0x1.da9f3ab97467ap-74, 0.0, 0.0, 0x1.e7a673c43eb82p-453,
     0.0, 0x1.a6e4c62c45a4ep-756, 0x1.6f3d4ee2738edp-280, 0x1.2bb047f42425ap-350, 0.0,
     0.0, 0x1.8765f37520b06p-141, 0x1.30332511f0cc9p-824, 0x1.2cf46429af771p-244, 0.0,
     0.0, 0x1.62fab1244a3a4p-665, 0x1.b3bdccd6f4c2cp-390, 0.0, 0.0, 0.0,
     0x1.80b28f27a6877p-182, 0.0, 0x1.3bcb89d5993cbp-782, 0x1.d8a9165751ed1p-933, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c5dc8d54b3cd6p-208, 0x1.dd3e07e795a91p-691,
     0x1.59ca821bc705bp-73, 0.0, 0x1.b07848e2d6eap-999, 0x1.00c9e8fa7e8a7p-797,
     0x1.79d63e7955a72p-978, 0.0, 0x1.faefbd832a05bp-783, 0.0, 0x1.d962259b107fap-680,
     0.0, 0x1.08d329de3bf17p-604, 0x1.7b2fd5b43a177p-917, 0.0, 0.0,
     0x1.bb5f170500cfbp-401, 0x1.75546c655a45fp-721, 0x1.660a00f990994p-974, 0.0, 0.0,
     0x1.117ae20a678f8p-402, 0x1.09314c5306daep-170, 0x1.257f858c10dbdp-633,
     0x1.a78acaab90281p-402, 0x1.6f029694fb876p-483, 0x1.9feda3f51f1cfp-1016, 0.0,
     0x1.5f095059ab03cp-629, 0.0, 0x1.de4f57d6e0393p-854, 0x1.44807ea97bab1p-214, 0.0,
     0x1.2aa82dec196e3p-293, 0.0, 0x1.ecaa4540485eep-402, 0.0, 0.0, 0.0,
     0x1.5897f9f318bccp-858, 0.0, 0x1.7fe18c8725766p-199, 0.0, 0.0,
     0x1.42513097a933bp-209, 0.0, 0.0, 0.0, 0.0, 0x1.8b63ec7276448p-102, 0.0, 0.0,
     0.0, 0x1.4c2b5c86bcfp-773, 0.0, 0.0, 0.0, 0x1.5359c18926b08p-647, 0.0, 0.0,
     0x1.b82c1b60098f2p-536, 0.0, 0.0, 0x1.bb0777bc4d2cap-511, 0x1.fc29499a15a88p-264,
     0.0, 0x1.022214936d6fcp-19, 0.0, 0.0, 0x1.23191fe547d55p-90,
     0x1.a9161f651bc6cp-63, 0.0, 0.0, 0x1.c37356cf5204p-247, 0.0,
     0x1.a353e0d3e9937p-141, 0.0, 0x1.3738362e3376p-309, 0.0, 0x1.c5411a092ecebp-331,
     0.0, 0.0, 0x1.26c435ee92c4ap-960, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c842206eb0ff9p-77, 0x1.fc8925ef2edd3p-11, 0x1.0cf07f04b6c26p-809,
     0x1.4de47815beb83p-71, 0x1.cebb506527a2dp-913, 0.0, 0.0, 0.0, 0.0,
     0x1.ddebb8faea38fp-841, 0x1.80172a0565947p-467, 0x1.ba6a3b139a73p-667, 0.0, 0.0,
     0x1.63f243bc015aep-229, 0.0, 0x1.12c5b92cdaa86p-41, 0x1.1eb65858777f9p-348, 0.0,
     0x1.fc49b231adb81p-902, 0.0, 0x1.67f509c233f38p-359, 0.0, 0x1.4aae208729f65p-75,
     0x1.ffb389cfb590ep-566, 0.0, 0x1.77c2a2be20cc7p-963, 0.0, 0x1.2a49bb454e2d9p-282,
     0x1.9a68ea1f8fca3p-549, 0.0, 0.0, 0x1.55c3821393029p-865, 0x1.39f093d5de247p-896,
     0x1.fdfa0fd979e1bp-127, 0x1.cfe4a7ff77cb1p-756, 0x1.3f4baf336730bp-439, 0.0, 0.0,
     0x1.2589349a2dc6cp-66, 0.0, 0x1.a18f921d6c8e7p-309, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4f3a84ceb13cp-441, 0x1.0e37397278784p-735, 0.0, 0x1.5b1c61047afc5p-73,
     0x1.e23844f151e95p-890, 0.0, 0.0, 0x1.96802ad1c53fap-457, 0.0, 0.0,
     0x1.8ba6a6df0c7d4p-109, 0x1.ec1a15a05b746p-882, 0.0, 0.0, 0x1.ecfcdfe590859p-746,
     0.0, 0.0, 0.0, 0x1.1345d680740bep-431, 0x1.55e5a16aef0b8p-111, 0.0,
     0x1.87c22f0d40456p-898, 0x1.ea631c391fb5cp-475, 0x1.248e39791e32dp-848, 0.0, 0.0,
     0x1.38c06cd0494d9p-585, 0x1.81e402ccccfd4p-14, 0x1.9247b04a85a73p-170,
     0x1.4081b849dab6dp-902, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.81ae77ba93226p-432, 0.0,
     0.0, 0.0, 0x1.500d7b97b8d7ep-360, 0.0, 0.0, 0x1.7198a047a018ep-345,
     0x1.4698adf46d0e6p-895, 0.0, 0x1.d89482b8e2b14p-468, 0.0, 0.0, 0.0, 0.0,
     0x1.6e8c71bc874eep-455, 0x1.512c346888b83p-423, 0.0, 0x1.3cdb80b5bdb12p-908, 0.0,
     0.0, 0.0, 0x1.8795ef48d6ee2p-669, 0.0, 0x1.735403fa76dbbp-970, 0.0, 0.0,
     0x1.7f37f543041b8p-336, 0.0, 0x1.2866984b0898ap-775, 0.0, 0x1.05ba3435435f3p-265,
     0.0, 0x1.f3fc5c7884414p-58, 0x1.88c0db063a1f5p-194, 0.0, 0.0,
     0x1.c6a11cfa858bfp-353, 0x1.509947c21da72p-822, 0x1.23cb0a99c4808p-1015,
     0x1.60b79ce87b877p-977, 0x1.dc2cb92a168dcp-7, 0.0, 0x1.4172a54c2622bp-311, 0.0,
     0.0, 0.0, 0x1.93377c47054f1p-110, 0x1.3e3b257606398p-282, 0x1.4e21edf0d75c8p-10,
     0.0, 0.0, 0.0, 0x1.761d5c925f043p-195, 0.0, 0.0, 0x1.87bbc8c4ebfafp-398, 0.0,
     0.0, 0x1.4d88800e1783p-792, 0x1.156cc39da81abp-36, 0x1.123c21208fcc5p-354,
     0x1.2bcc8f5d295cdp-964, 0.0, 0x1.20fcafcacf4d7p-442, 0.0, 0.0,
     0x1.df769eabfb018p-667, 0x1.423d89a893d3cp-567, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.301e17a4ff35ap-711, 0.0, 0.0, 0.0, 0x1.c6573c2509437p-944,
     0x1.be69981696f03p-211, 0.0, 0x1.80fcff72a5c75p-368, 0x1.3c2fadc0e9069p-561, 0.0,
     0x1.8a391369ce895p-284, 0x1.e62b16f8b0d35p-24, 0.0, 0x1.36efac47ba418p-971,
     0x1.9686ff633e5a3p-73, 0x1.7cbbbf4042bf9p-770, 0x1.bbdbec2601b8fp-856, 0.0, 0.0,
     0x1.2f22cafe785fdp-1007, 0x1.42054350bd979p-886, 0.0, 0x1.cf3a430af60ffp-640,
     0.0, 0x1.8a3733a7dd803p-955, 0x1.15aa959d199b1p-565, 0x1.21d40a370de84p-553, 0.0,
     0x1.186e116503af8p-457, 0.0, 0x1.bc8b219314abfp-742, 0x1.2139b4be9f55p-523,
     0x1.cdfa345bbb151p-440, 0.0, 0.0, 0x1.2b947cd8ed89dp-598, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9a8d2fbf308ap-36, 0x1.03524915c7504p-729, 0.0,
     0x1.e7af9c3399c34p-320, 0.0, 0x1.128a10da21bedp-623, 0.0, 0.0, 0.0, 0.0,
     0x1.1457105560045p-583, 0x1.7c939c771caf4p-735, 0.0, 0.0, 0.0,
     0x1.199a43ce18ac1p-709, 0x1.b64c954fd738p-637, 0.0, 0x1.7ad93afed7b4cp-953,
     0x1.7c88f8e081adcp-873, 0.0, 0x1.00d7ff490f031p-262, 0.0, 0x1.efafc7d4362bap-890,
     0x1.72f6d803c7d85p-314, 0.0, 0.0, 0.0, 0x1.89b4beef37a57p-64,
     0x1.e7727bdc68d6dp-955, 0x1.69e0337cb1a03p-383, 0x1.cbe131b530b12p-780,
     0x1.8df8cabe09bc9p-731, 0x1.f3b806aaa4f4fp-510, 0x1.c5e9df8e5f81fp-696,
     0x1.187eb595a369p-903, 0.0, 0x1.1d8a5b2d9455ap-772, 0.0, 0.0, 0.0,
     0x1.1a32059162db2p-771, 0.0, 0x1.b9488f5eda76cp-45, 0.0, 0x1.81bd243387d49p-569,
     0x1.ec2777424e822p-567, 0x1.af7d4c07a596cp-323, 0x1.b2f5a56327539p-954,
     0x1.76df50c2f17c1p-16, 0x1.81aa319cbf31fp-36, 0.0, 0x1.d8627110d27d8p-1019,
     0x1.3441b05803addp-598, 0x1.4ebbf255afbdcp-237, 0.0, 0.0, 0x1.1a6c2b7e46549p-387,
     0x1.e52bca8efcc04p-374, 0.0, 0x1.082a5eb98ef76p-158, 0.0, 0.0, 0.0,
     0x1.5995cba8a219p-75, 0x1.af9b2f84340c1p-694, 0x1.802c8557c41dbp-534, 0.0,
     0x1.7eb108a6f482cp-613, 0.0, 0x1.e43afb8160a5p-484, 0.0, 0x1.920926fa02e9ap-395,
     0x1.f20f4aedb3c9ap-775, 0x1.7bfcae9ac9d9ep-931, 0x1.a6c1a08def6d1p-548,
     0x1.6a73a35263897p-713, 0x1.6d42396328f8cp-519, 0.0, 0x1.7b94241c44f2fp-901,
     0x1.82e7b5fcbb326p-170, 0x1.cf637aad23918p-154, 0x1.6ca63dccd748fp-451,
     0x1.9e6f121107fcfp-47, 0.0, 0.0, 0.0, 0.0, 0x1.7975d4e3252e2p-446, 0.0, 0.0,
     0x1.6352ae4f01b84p-879, 0.0, 0.0, 0x1.27f142b7d3a7dp-418, 0.0, 0.0, 0.0,
     0x1.1a10fcc0fee5ep-727, 0x1.7fd696c1cc79fp-479, 0.0, 0x1.97d96abc7a705p-456,
     0x1.30a03a3c74f61p-338, 0x1.f877f5fad3613p-880, 0x1.240c7e882cc45p-667,
     0x1.3bd77580c12d9p-345, 0x1.e0f9e102d1739p-778, 0x1.4288a9614d168p-59,
     0x1.970192e85ba7cp-252, 0x1.8cfb13d1e9e06p-566, 0x1.aaedb46783313p-716,
     0x1.df20105107dedp-864, 0x1.026bd09e47fc9p-341, 0.0, 0x1.5ed6820adb2bep-262,
     0x1.59efa5588309cp-197, 0.0, 0.0, 0.0, 0.0, 0x1.8d67b03fd5c72p-16, 0.0, 0.0,
     0x1.ae6a54a0af737p-820, 0x1.b63c526e7768dp-656, 0.0, 0.0, 0.0,
     0x1.7ac1014c44abbp-402, 0.0, 0x1.b88cfdc105f95p-606, 0.0, 0.0, 0.0, 0.0,
     0x1.0bde3e96d99f5p-289, 0.0, 0x1.fd0770be8babfp-435, 0x1.bebc957ba163bp-120,
     0x1.f5788453b57e1p-27, 0x1.debeab0de30f1p-309, 0x1.762b2322df06ep-513,
     0x1.5c3de2f96b1b3p-343, 0.0, 0x1.310f805382c74p-899, 0x1.727aaabb58843p-145,
     0x1.2b6f76f9cf9aep-178, 0x1.a653ca4d8819ap-527, 0x1.88e59d4c4d095p-724,
     0x1.72ae51cf5220ap-198, 0.0, 0x1.9d4aabaa81709p-434, 0.0, 0x1.454f91c36c556p-993,
     0.0, 0x1.e41c5f025af25p-842, 0.0, 0x1.c6dc5e6282efap-212, 0x1.d6c8267b53c31p-304,
     0.0, 0.0, 0x1.3076ac73ba952p-435, 0x1.6ff5311f5a7ebp-409, 0.0, 0.0, 0.0,
     0x1.6fbf8753ba99ap-698, 0.0, 0x1.0021a01b12487p-30, 0.0, 0x1.9cb55a1b3acc9p-382,
     0x1.29fc969fdcd8dp-476, 0x1.69d82bc124452p-898, 0x1.aa49d878046e7p-840, 0.0, 0.0,
     0x1.a656cef943f87p-928, 0.0, 0x1.a1c2d29488c53p-704, 0x1.9a19e77965b21p-1000,
     0x1.648ee5353d9dcp-222, 0.0, 0x1.e9cc8617d2f5dp-407, 0.0, 0x1.db3607275a5e2p-685,
     0.0, 0x1.feea96888d209p-381, 0.0, 0x1.eeb7bfad83e69p-311, 0.0,
     0x1.c8e59a28c632fp-120, 0x1.0031fc6e75b25p-919, 0.0, 0.0, 0x1.3cbb90cb6a51fp-550,
     0.0, 0.0, 0x1.f483b8db878a3p-279, 0.0, 0.0, 0.0, 0.0, 0x1.18e44046269a4p-815,
     0.0, 0.0, 0x1.f28ed080ecd79p-610, 0x1.b38690a2c6f59p-919, 0.0,
     0x1.6dd4aca288c17p-236, 0x1.f387180935f4ap-682, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1a1fedcdfff5cp-524, 0.0, 0.0
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
            tmp1 = Sleef_finz_atanhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atanhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
