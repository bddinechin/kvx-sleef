/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_lgammad4_u10kvx.c --function Sleef_lgammad4_u10kvx \
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
     0x1.b4b75789647dfp-754, 0x1.eb4aeba7fa5e3p-538, 0.0, 0x1.886c6eff7a668p-956,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5acddaf05e2f5p-906, 0.0, 0x1.5497d39088a62p-292,
     0x1.9929dc344cb12p-363, 0x1.ff77806489b3dp-429, 0x1.f5ea512fb65bap-367,
     0x1.3e7e7cc9f84edp-717, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca35c2ff13a5p-546,
     0x1.96457ca6c87adp-975, 0.0, 0x1.a6b388dee81c4p-169, 0.0, 0x1.91d9f21bc92ep-603,
     0.0, 0.0, 0x1.1ee125ea69c27p-307, 0x1.22a68f85efdcp-1013, 0x1.5349d99320bb9p-542,
     0.0, 0x1.0a3940f0a169p-284, 0x1.837cb553c161ep-138, 0x1.e932dfc3380f8p-197, 0.0,
     0x1.ad5f5358cb0cbp-136, 0.0, 0x1.c7daa4b71f31ap-654, 0x1.33a313bea5096p-728, 0.0,
     0x1.df5393049de3fp-123, 0.0, 0.0, 0x1.b75ad020fc37bp-636, 0x1.f24fc5b69f8e5p-330,
     0x1.3570bac9cbd09p-354, 0x1.cb8dbe369617ep-157, 0x1.5a03ea7b4892ap-209,
     0x1.725cf31911927p-499, 0.0, 0x1.e08c997a8e9f5p-301, 0x1.f3552e7a4d845p-613,
     0x1.bf736a0b96303p-311, 0.0, 0x1.84c9367aebe6p-106, 0.0, 0.0,
     0x1.7cb53cdf90e36p-409, 0.0, 0.0, 0x1.0ad48b06735dfp-235, 0x1.62a707e54169ap-695,
     0x1.f730813ad1237p-150, 0x1.4a44d25bfc3fcp-385, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.74a620d05609fp-833, 0x1.c423e0060b4a4p-594, 0.0, 0x1.fb00bd1f11cbdp-360, 0.0,
     0x1.2c8c16ab02844p-168, 0.0, 0.0, 0x1.2a305e6cd8e47p-199, 0.0,
     0x1.77d7292e2e269p-538, 0x1.23c66aa0377dcp-338, 0.0, 0.0, 0x1.a6316a0e50bd1p-739,
     0.0, 0.0, 0.0, 0x1.7e51d098baa96p-853, 0.0, 0.0, 0.0, 0x1.c6a521ac1b12cp-501,
     0x1.91daed7671138p-194, 0x1.e4a92250560d6p-257, 0.0, 0x1.0c64c9511886ap-452, 0.0,
     0.0, 0x1.431638ca7fc8fp-485, 0x1.d7c26f9d8b49bp-425, 0.0, 0x1.d2b8dde1cde89p-543,
     0.0, 0.0, 0x1.37d7754c00964p-844, 0x1.61ec3ebc6a418p-948, 0.0, 0.0,
     0x1.c64d38982c4b2p-240, 0x1.318a0eb58c998p-102, 0x1.21e44f023985p-568,
     0x1.23a0cb778811ap-418, 0x1.c594f83f34416p-78, 0.0, 0.0, 0.0, 0.0,
     0x1.5ea6607a4a7cap-669, 0.0, 0.0, 0x1.e770de2e78f97p-835, 0.0,
     0x1.99ab83d9538ap-577, 0x1.85986edb4bcc8p-379, 0x1.b10b47c321fc4p-661, 0.0,
     0x1.9949919e1c70dp-552, 0x1.555f42a2aea5fp-28, 0.0, 0.0, 0x1.4ebc0d66cc294p-484,
     0.0, 0x1.0d48c47e23fbap-134, 0.0, 0x1.9fda68ca0b8c6p-341, 0x1.457d15e985b53p-797,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.306a3b504bba9p-107,
     0x1.01f2f9c36f20bp-551, 0x1.635204d6851a6p-73, 0x1.bb8a05df365c3p-986,
     0x1.a1f9dff216bb6p-434, 0x1.bc5f8b2a70264p-372, 0.0, 0.0, 0.0,
     0x1.b19883e04e164p-605, 0x1.1adda94daa165p-836, 0x1.7db0f9badd0edp-274,
     0x1.900e52dc2bdf8p-756, 0.0, 0.0, 0.0, 0x1.0160c6c1061dbp-42,
     0x1.15974f1a8ec81p-652, 0x1.6bfcb1afb446fp-877, 0x1.fa8bf9e09c5d8p-836, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0b6354fc9cba6p-483, 0x1.ec5c9010c332fp-53, 0.0,
     0x1.2d80314bd8ad1p-94, 0.0, 0x1.f4a3bb1563c07p-27, 0x1.4fc099a09a50cp-834, 0.0,
     0x1.7da872724422bp-816, 0x1.5115c2c933026p-111, 0x1.129a75617534dp-68, 0.0, 0.0,
     0.0, 0x1.3305508be18b6p-806, 0x1.0e5e1b075acffp-324, 0x1.25582fe3d6f4ep-636, 0.0,
     0.0, 0.0, 0.0, 0x1.6a1babac6fd1bp-942, 0x1.1d640d73e6125p-321,
     0x1.2b14c3c8e7304p-363, 0.0, 0x1.cde87141103a8p-941, 0x1.62846140d43abp-260,
     0x1.af8a82a04b17cp-384, 0x1.11a533e007c1p-440, 0x1.625a2d35840a5p-448, 0.0, 0.0,
     0x1.b30349d6f4d3dp-878, 0x1.9aafd1755a091p-341, 0.0, 0x1.432d5533fc1c2p-826,
     0x1.0eb013be73dc4p-77, 0x1.c89e4a2e5ef4dp-242, 0x1.118bfe627f98bp-571,
     0x1.07b31f9e5e01ep-85, 0x1.d7dd6dc0637c6p-611, 0x1.a2d5104c3a86ep-823,
     0x1.5f55c57b28629p-827, 0.0, 0.0, 0x1.62c86b4c14337p-155, 0x1.dba301148b7d2p-593,
     0x1.454688a2fe7b6p-859, 0.0, 0.0, 0x1.b6d87a3125a78p-639, 0.0, 0.0, 0.0,
     0x1.02a4fd4bb3475p-832, 0.0, 0x1.26f189fb2b0ebp-805, 0x1.8cac5a19485bfp-631, 0.0,
     0x1.2edea5c9d3dcdp-598, 0.0, 0x1.6ff753ed6799ap-350, 0x1.c76b940a74db4p-58,
     0x1.81d1ed2b52bddp-578, 0.0, 0x1.6222e9526b12fp-364, 0.0, 0.0,
     0x1.cca306473fb33p-538, 0x1.560a8cd1efe35p-468, 0x1.f7d705948fc63p-160, 0.0,
     0x1.99bb0c807b6a6p-488, 0x1.16d4745d6f30ep-219, 0.0, 0x1.3e58227d3893p-851,
     0x1.bb7350d19fd37p-976, 0x1.146d0d418bd53p-871, 0.0, 0x1.57b072f7a8018p-715,
     0x1.5820db99df8e1p-712, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0dae0dbed6a79p-777, 0.0,
     0x1.db7c4942e3dc1p-808, 0x1.56ea85693f267p-779, 0x1.77123dac63f6p-662,
     0x1.cc0f1743b3944p-323, 0.0, 0x1.328421a1fd37cp-984, 0x1.0296d0377727fp-951,
     0x1.f3862ab4a7549p-519, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e59b3de2fb5aap-573,
     0.0, 0x1.24aab9374f5e7p-695, 0.0, 0x1.2062fbeb81badp-391, 0.0, 0.0, 0.0,
     0x1.56564987a8b4bp-89, 0x1.821bf0ac0a1cap-897, 0.0, 0x1.d2df1ff8d64edp-56, 0.0,
     0x1.cb0620640b3eep-726, 0x1.b85afc3805b1ap-678, 0.0, 0x1.ca05fdc28bf54p-436, 0.0,
     0x1.e3585b7e6cfcdp-798, 0x1.cf3d7631f11c2p-147, 0x1.1caaf1db75505p-204, 0.0, 0.0,
     0x1.e2d83ce269116p-105, 0x1.fc7985d394d56p-133, 0x1.f6cc293e73332p-862,
     0x1.1dc0acf2c439fp-634, 0.0, 0x1.9700323333c7fp-645, 0.0, 0.0,
     0x1.d30e989ac57cbp-752, 0.0, 0.0, 0x1.09baffa0ca0a6p-209, 0.0,
     0x1.1128e92a51fdbp-303, 0x1.fef6621fbcbfep-1014, 0.0, 0x1.fffcc44e4804p-337,
     0x1.1a8e3d244005dp-100, 0x1.947060ec924b1p-532, 0.0, 0x1.f4b2d8175bbeap-744, 0.0,
     0x1.99c09f6d6c9bbp-189, 0x1.a5c2024e2f157p-959, 0.0, 0.0, 0x1.212933887bc87p-20,
     0.0, 0.0, 0x1.0319dd7a087ccp-942, 0.0, 0x1.eba189e199fddp-161,
     0x1.4719189e9c488p-937, 0.0, 0x1.584e23f010fc6p-464, 0.0, 0x1.8e2078fbfcb15p-599,
     0x1.0caa49536aeb1p-152, 0.0, 0x1.972e82328b7bbp-770, 0x1.2a704111b0fe6p-493,
     0x1.b1c0b7b0a03d4p-208, 0.0, 0.0, 0x1.bd225a0572974p-952, 0.0, 0.0, 0.0,
     0x1.e97eed6345ee6p-560, 0x1.255d84d1df8dep-620, 0x1.74e945b881769p-1000, 0.0,
     0x1.d70df49997908p-315, 0.0, 0x1.4c680b379a3a4p-262, 0.0, 0x1.783ebc6e7972ap-118,
     0.0, 0x1.5f44485fe4cb9p-713, 0x1.864d291b5203cp-52, 0x1.fbfd7f1e0a929p-718,
     0x1.97af28f5f90b6p-822, 0.0, 0x1.395e41756637p-809, 0.0, 0x1.303b2ec1930ecp-451,
     0.0, 0x1.1daf16c3c149p-682, 0.0, 0x1.c623823b96a62p-533, 0x1.2311daf8d8673p-472,
     0.0, 0.0, 0x1.e8bfecdfc9e86p-667, 0x1.8f7e66a6ffde2p-705, 0.0, 0.0,
     0x1.36366074eb68fp-690, 0x1.0723434825627p-173, 0.0, 0.0, 0.0, 0.0,
     0x1.3acf7b35268e1p-231, 0x1.114c723f8fd8p-278, 0.0, 0.0, 0x1.dc80ead2483e8p-600,
     0.0, 0x1.039111df24e88p-529, 0.0, 0x1.c07294901c5cep-224, 0x1.d207519cbc6fep-213,
     0.0, 0.0, 0.0, 0x1.bfa4e121d0dbbp-78, 0.0, 0.0, 0x1.846f9626f1c62p-196,
     0x1.df85c759980cp-25, 0x1.495bd035fe0d9p-352, 0.0, 0x1.39ff59261fb8cp-143, 0.0,
     0x1.caa863d5af9a2p-132, 0.0, 0x1.cef43f1249c8bp-541, 0.0, 0x1.16e54b57f62ecp-148,
     0.0, 0x1.9c42de1d68c0ep-685, 0x1.173c539282495p-935, 0.0, 0x1.49f3959156da3p-855,
     0.0, 0x1.3df2716e40001p-314, 0.0, 0.0, 0.0, 0.0, 0x1.240ebc8b3f0f4p-310,
     0x1.48adc17a4798bp-205, 0.0, 0.0, 0.0, 0.0, 0x1.bd9411f08178dp-380, 0.0,
     0x1.1b0dd78f94d68p-1000, 0x1.431013c26797p-89, 0.0, 0.0, 0x1.dc84bddfad9a2p-29,
     0.0, 0.0, 0x1.01e6eef6e951fp-83, 0x1.794f47528b1d9p-183, 0x1.551dd7ed2467cp-911,
     0x1.66b08df54ca8ap-192, 0x1.4bd8038d7ca78p-732, 0.0, 0.0, 0x1.711c3a6445596p-286,
     0x1.c72975d65cd5bp-507, 0.0, 0.0, 0x1.94379bf2610fcp-679, 0.0, 0.0,
     0x1.e1e2717e273f5p-997, 0x1.7980f7d65f755p-489, 0x1.5082359b09p-406,
     0x1.5724bccd73089p-98, 0x1.d30df781c260bp-451, 0x1.f6641a840439dp-799,
     0x1.b459721457c29p-39, 0.0, 0x1.c9afae33c3152p-577, 0.0, 0x1.934821722a935p-392,
     0x1.3da5b0b6a20f2p-218, 0.0, 0x1.648e40998dffep-347, 0x1.ccdf7e87c6b9bp-863, 0.0,
     0x1.1528f52d9a58fp-460, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5af5f120ac9d2p-287,
     0x1.99e7701648c16p-287, 0x1.02079eef3c173p-202, 0x1.f8a687ee17bep-603,
     0x1.542d7c914e202p-667, 0x1.32dbaf44a6eb3p-901, 0x1.ce495b34b5d04p-351, 0.0, 0.0,
     0.0, 0x1.907d456607d03p-327, 0.0, 0x1.9f576de0290ccp-919, 0x1.b8ca11b96e55fp-176,
     0x1.e44e44879bf82p-821, 0.0, 0x1.9ae707d25350fp-927, 0.0, 0.0, 0.0,
     0x1.0f857421c97e4p-13, 0.0, 0x1.8829abb2dfe78p-658, 0x1.7694ada02e519p-209,
     0x1.0a63970b753d4p-82, 0.0, 0x1.500a8f6e428e6p-270, 0x1.0679c20b49843p-481,
     0x1.ce26a9745f751p-390, 0x1.3b64797b137b6p-170, 0x1.8787ba0f24363p-424,
     0x1.a6ce6f90f9498p-910, 0.0, 0.0, 0.0, 0x1.18e89d2ce76bfp-989,
     0x1.a09b7acfda96ap-268, 0x1.156aadb8f2566p-903, 0x1.8a1fd55eb6e4cp-329,
     0x1.1b4059ca18f3ap-694, 0x1.c585047235cf2p-66, 0x1.e403f8ded5ff2p-305,
     0x1.1a091ae18233ap-868, 0x1.a406fd1ee6272p-306, 0.0, 0.0, 0x1.877355c1ef279p-50,
     0.0, 0.0, 0.0, 0.0, 0x1.a6d1d7b50b9a4p-408, 0x1.5dfb2090dd53bp-218, 0.0,
     0x1.6b586c1deda97p-690, 0.0, 0x1.6a6bad264e2f2p-814, 0.0, 0.0, 0.0,
     0x1.aeae9aff32c7bp-230, 0.0, 0.0, 0.0, 0x1.2dcaa68cda1cfp-138, 0.0, 0.0, 0.0,
     0.0, 0x1.8c2442c1315bbp-105, 0.0, 0.0, 0x1.c7e3975152a13p-711, 0.0, 0.0, 0.0,
     0x1.c40a65c2b72fdp-131, 0x1.f8e6ec7b70ab5p-850, 0.0, 0x1.5c3c44caada12p-423,
     0x1.97b608fa8f9ddp-562, 0x1.5ee8cbc3576a3p-256, 0.0, 0x1.191211a49e637p-422, 0.0,
     0x1.7ac0973a89a06p-602, 0x1.0976202d98d05p-852, 0.0, 0x1.5f812dc598f8fp-345, 0.0,
     0x1.3d7f7299cf876p-938, 0x1.3b6a380fb5c5cp-959, 0.0, 0.0, 0.0,
     0x1.dc8076060cf1fp-541, 0x1.d971a515e2792p-737, 0.0, 0x1.d0c2ae756ccc9p-925,
     0x1.bf7ccfa419d13p-224, 0x1.7fd9ab72cece8p-532, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb4de735cadcdp-842, 0.0, 0x1.deb23d0ee487cp-607, 0x1.696ff888b171p-541, 0.0,
     0x1.1814ab8a11908p-120, 0x1.5fcb83544a034p-552, 0x1.478fe33ea5a64p-509, 0.0, 0.0,
     0.0, 0x1.6046dbfa653f2p-382, 0x1.1889264065228p-207, 0.0, 0x1.619e9f7a03344p-519,
     0x1.63dd1b2f65b64p-348, 0.0, 0.0, 0.0, 0x1.24380f1114a07p-746, 0.0,
     0x1.8aded6297b3fap-51, 0x1.7ea6313c6bf7cp-464, 0.0, 0.0, 0x1.07d707acd2687p-465,
     0x1.9815b4fad23ccp-393, 0.0, 0.0, 0x1.e37485942096fp-362, 0x1.ccc7101672e88p-457,
     0x1.8cfcd6b1fa10ap-401, 0.0, 0x1.c3ea5ad5b3781p-156, 0x1.66707fb69032dp-1008,
     0.0, 0.0, 0x1.f716f68dba79cp-1017, 0.0, 0.0, 0x1.78b72f55e2e4ap-891, 0.0,
     0x1.257dcfd366bb7p-689, 0.0, 0.0, 0x1.ce38a9261c77fp-743, 0.0, 0.0,
     0x1.7c1cdc782753fp-960, 0.0, 0.0, 0.0, 0x1.c98ec37ccd816p-399,
     0x1.102419ac48d77p-797, 0.0, 0.0, 0.0, 0x1.51021ce8b1e62p-963, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.ddf7475cef07ap-976, 0.0, 0x1.74f3fe5fb4876p-855,
     0x1.ec1a770e4a5f3p-835, 0x1.b3245c6af28f2p-836, 0.0, 0x1.21cc9cc6b1c19p-894, 0.0,
     0x1.0e71d2d419a99p-725, 0x1.db9b1d9ca8925p-652, 0x1.63a03a4af2295p-270, 0.0, 0.0,
     0x1.bdce88aff8a32p-638, 0.0, 0x1.cd2ed90fb3d7p-226, 0x1.a816edbd42173p-98, 0.0,
     0x1.c6c098f03d29bp-91, 0x1.dcd91a15f5c5ep-269, 0.0, 0x1.0fb6771905e3fp-242, 0.0,
     0.0, 0x1.4e203d006d76dp-814, 0x1.4f8d461db734cp-243, 0.0, 0.0, 0.0, 0.0,
     0x1.5c1ab89655198p-922, 0x1.ae7ee6373af55p-934, 0x1.fccb8aae2fa37p-338, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8f1a74abf333p-224,
     0x1.b6b6b33b02188p-456, 0.0, 0x1.9c663cf23ee4fp-362, 0.0, 0.0,
     0x1.8b479b5afe9c9p-380, 0x1.a21101258b7ebp-142, 0.0, 0x1.d999c8afce39ap-878, 0.0,
     0.0, 0.0, 0x1.056a289f41521p-548, 0x1.c723f71c33202p-846, 0x1.6187c45e3113ap-226,
     0x1.535940340814fp-979, 0.0, 0x1.715b48a136b93p-865, 0x1.e463d4eb40a46p-388, 0.0,
     0.0, 0x1.cc3d4cbc5c84fp-555, 0x1.98a3bff6a1e5ep-548, 0.0, 0.0,
     0x1.c4ac319584b7fp-365, 0.0, 0.0, 0x1.2f9550acd3c3fp-518, 0x1.d7af5ab75d5cap-192,
     0x1.9936d046ac679p-963, 0.0, 0x1.8e7420b25b6ep-61, 0.0, 0.0,
     0x1.eacfe9202bf61p-448, 0x1.a593342d4f322p-302, 0x1.d403ca03151dep-121, 0.0,
     0x1.87e03dda37a65p-540, 0.0, 0x1.e766f27477b1ap-551, 0.0, 0x1.752a8de853f57p-507,
     0x1.7e1860d5b23d6p-779, 0.0, 0.0, 0x1.04e5baba43575p-834, 0.0,
     0x1.149804c30bb42p-714, 0x1.ea6a1c4017e61p-877, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e9f1f77260031p-21, 0.0, 0.0, 0x1.ba5fdcc25e13dp-772, 0.0,
     0x1.0e43babc7c0f9p-943, 0.0, 0x1.58fc5e657d5efp-261, 0.0, 0x1.bf95e2bb51c91p-158,
     0.0, 0x1.5c0c426722b4ep-748, 0x1.c40ef044de7eep-716, 0x1.2fd2d5e85cca5p-192,
     0x1.bf007d478690ep-861, 0x1.dc5b98869f543p-396, 0x1.cd9614f9b3cb8p-12,
     0x1.ae767fd78a0afp-399, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.61ee5a60c8473p-306, 0x1.d755baa13bea3p-347, 0.0, 0.0, 0.0,
     0x1.3cdb08948289bp-119, 0.0, 0.0, 0.0, 0x1.5c2c23c2e42cdp-893,
     0x1.205c10cd8fa4p-26, 0.0, 0.0, 0x1.734d0c41c3ae1p-500, 0.0, 0.0,
     0x1.cc36c06627b5fp-579, 0.0, 0x1.04a12da23e7p-220, 0x1.8e0a46d0d8178p-528,
     0x1.a85c963743b2ep-417, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8db0dcae65faep-115, 0.0,
     0.0, 0x1.59a7fa3fdd14ep-571, 0.0, 0x1.1c9a64397ee23p-661, 0x1.84c9e7800b74dp-260,
     0x1.b426efae0128fp-165, 0.0, 0x1.4fe6821a0f896p-98, 0x1.7b2148a6616b3p-699,
     0x1.328a826df93dap-538, 0.0, 0x1.c5f8eb8a62098p-45, 0.0, 0.0, 0.0, 0.0,
     0x1.e79fd13c2ff93p-398, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91786ea5444efp-899,
     0.0, 0x1.31a18a9e8046p-986, 0.0, 0x1.a9285ec2ea107p-229, 0.0, 0.0, 0.0,
     0x1.08fc9183e73c5p-888, 0x1.c635aea1e9214p-14, 0x1.7755822c6280ep-88, 0.0, 0.0,
     0x1.ae98fc9299e1ep-506, 0.0, 0x1.476c53cbdd957p-197, 0x1.6742df769883fp-809, 0.0,
     0x1.3365d52eda3a5p-394, 0x1.591f40dbe416bp-93, 0x1.5f433e4ee3c94p-553,
     0x1.e1cbe3533daffp-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f9f4715b732afp-458,
     0.0, 0.0, 0.0, 0x1.592d15d29bef2p-448, 0x1.73112d9a9710dp-383,
     0x1.bd20f91c14fa8p-823, 0.0, 0x1.8f3b95155409dp-354, 0.0, 0x1.053babe5a6852p-455,
     0x1.a42f7eaa1f307p-625, 0x1.d46cb6536f152p-99, 0.0, 0x1.8f1453b584a0fp-113, 0.0,
     0.0, 0.0, 0.0, 0x1.b1b3124806066p-993, 0x1.f7f53a22123f5p-650,
     0x1.3dcad122bccbap-74, 0x1.678db3bf6ec9fp-270, 0.0, 0x1.2ffbd1bb8b586p-374,
     0x1.9555a4dc9b765p-774, 0.0, 0x1.246a746b70271p-727, 0.0, 0x1.ba8a32ba46a8bp-32,
     0x1.1cc47b9b61a29p-55, 0x1.a666e824c99f8p-1019, 0x1.85a75f4438157p-136, 0.0,
     0x1.029b371233fecp-426, 0x1.dc462a9a80a4p-529, 0.0, 0.0, 0x1.d26930c593419p-177,
     0x1.6860f4f91eae6p-229, 0.0, 0x1.d026c437d8614p-958, 0x1.5bcde4ac28282p-540, 0.0,
     0.0, 0.0, 0.0, 0x1.1064ab1fd5681p-337, 0.0, 0.0, 0.0, 0x1.135a72a5946bcp-946,
     0.0, 0.0, 0x1.3dc82de299eb8p-584, 0x1.7eb4c485ba866p-884, 0x1.3858ff9d1220ap-26,
     0x1.eb76f6bb3685ap-344, 0x1.e7977157bb401p-819, 0.0, 0.0, 0x1.6fc83b83afc06p-788,
     0.0, 0x1.fce42469d1e1ep-999, 0x1.7d30a89e855c1p-101, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a646a21c89fc6p-719, 0x1.f0a55fffeaa6cp-126, 0.0, 0.0, 0.0,
     0x1.f04cb93d6db71p-220, 0.0, 0.0, 0x1.b53cc4be2c19fp-718, 0x1.4eac634b46bcap-29,
     0.0, 0x1.06530006014a6p-764, 0x1.d893bac0dab64p-229, 0.0, 0.0, 0.0, 0.0,
     0x1.055a87605b4e5p-944, 0.0, 0x1.0f570f1e0c765p-638, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4be0426322799p-33, 0x1.7eeec9b96af8cp-345,
     0x1.252ebe1f97308p-819, 0x1.c8065a5b60f6bp-27, 0.0, 0x1.82f07f139db12p-220, 0.0,
     0.0, 0.0, 0x1.c4a6a90b87b6ep-535, 0.0, 0x1.4482d7a7e9e4cp-271, 0.0,
     0x1.4383a84a99e43p-862, 0.0, 0x1.0492769b87b0dp-372, 0x1.ae8b14f51396ap-172, 0.0,
     0.0, 0x1.db59b594d54bep-334, 0.0, 0x1.1ce8858835cf4p-338, 0x1.b7581d5fe3a5ep-141,
     0x1.a57e4cb3e9996p-639, 0.0, 0x1.0c3b183b79e21p-64, 0x1.240fee9493d98p-895,
     0x1.03344470ecfeap-682, 0.0, 0x1.5efbb97aed6bfp-179, 0.0, 0x1.5791558289d54p-968,
     0.0, 0.0, 0x1.171e6f44e0931p-393, 0x1.44c2de54c3617p-70, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.18fbab0b9c8c9p-94, 0x1.9e2d5a723ae7dp-255, 0.0, 0.0, 0.0,
     0x1.9118fa1d2974p-307, 0x1.e8c0ad81fde2p-964, 0.0, 0.0, 0.0,
     0x1.a97a9e8c3f3cp-269, 0.0, 0x1.04e258f888f3cp-191, 0.0
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
            tmp1 = Sleef_lgammad4_u10kvx(tmp0);
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
    printf("Sleef_lgammad4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_lgammad4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
