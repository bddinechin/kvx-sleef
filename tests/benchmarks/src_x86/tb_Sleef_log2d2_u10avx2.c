/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d2_u10avx2128.c --function Sleef_log2d2_u10avx2128 \
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
     0x1.f0f031223ed36p-271, 0x1.8b14e1b98536cp-296, 0.0, 0.0,
     0x1.fe35350721416p-602, 0x1.07d409c9bb053p-775, 0x1.5298b6beea2efp-81,
     0x1.db0be2bba2562p-822, 0x1.8754dca3603afp-256, 0x1.e0f96426f5017p-321,
     0x1.f0e9cedb90c12p-424, 0.0, 0.0, 0x1.e1266f2ef9f5p-889, 0x1.1183691c73901p-572,
     0x1.7567cb2fca189p-64, 0x1.879f94f657488p-491, 0.0, 0x1.5106ecb0c152bp-374,
     0x1.4b63bc11d222ep-114, 0.0, 0x1.59c5aea858d12p-260, 0x1.d356f1ae67c2bp-389,
     0x1.05bb33b00ce08p-224, 0x1.83f26bb08f5d6p-496, 0.0, 0.0, 0x1.8bc6dabba7f8ap-77,
     0.0, 0x1.df6546bc57db1p-369, 0x1.dff0c499e0acbp-214, 0.0, 0.0, 0.0, 0.0,
     0x1.3be197dd15647p-907, 0x1.556af2bab85bcp-239, 0x1.95c660329b144p-586, 0.0, 0.0,
     0x1.2717ffeb5eae6p-456, 0x1.f7624a248a3ebp-260, 0x1.dee22886c9e1cp-398, 0.0,
     0x1.56c170dfdaeb8p-550, 0.0, 0.0, 0x1.5fe824ddc33f9p-881, 0x1.6294948025056p-399,
     0x1.33703122064c8p-367, 0.0, 0x1.3a8f9387118e6p-493, 0.0, 0x1.833326fb57889p-540,
     0.0, 0x1.f9c694039b1afp-655, 0x1.16b7f987203bcp-207, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.26f85dee4acf2p-659, 0x1.9a0e5f771b07fp-123, 0.0, 0x1.1b417a695e152p-971,
     0x1.78d556a3445d6p-326, 0.0, 0x1.0b2bb7f7909d6p-471, 0x1.266e18f9378e3p-292,
     0x1.5c43bb9c05076p-626, 0x1.5aa9f8c6842f3p-60, 0x1.b070dc2e0fef6p-867,
     0x1.faaffd49a8df5p-725, 0x1.5711708c8b991p-598, 0.0, 0x1.4cdfaafa486adp-552,
     0x1.528cea6690bc6p-509, 0.0, 0.0, 0.0, 0.0, 0x1.dc4d83c8f9165p-587,
     0x1.8d4c1250f386bp-249, 0x1.5e15a8dbbb7bdp-985, 0.0, 0x1.86cfd36d2ef2ap-970, 0.0,
     0.0, 0.0, 0.0, 0x1.5ce5184dabfdep-594, 0x1.09c3013361c4fp-926, 0.0,
     0x1.145b0187e3871p-571, 0x1.002ec0831ca3cp-100, 0x1.ec70c12264334p-625,
     0x1.a5dfe2411eadcp-533, 0x1.a9e64e6d955a9p-213, 0x1.7568c7013f124p-412,
     0x1.41ece14c8e5ecp-840, 0x1.e4716212fde5p-98, 0x1.7b362c7bbd1d9p-182, 0.0,
     0x1.28aa599f3969cp-96, 0.0, 0.0, 0x1.2869d2fa1f753p-1011, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.257219e24c7p-721, 0.0, 0x1.584067a81a1b7p-522,
     0x1.a4a92564a27dbp-455, 0.0, 0x1.f46cbfb6a1d55p-799, 0x1.88423d6cdedd5p-30,
     0x1.bf00685db7081p-978, 0x1.5e6ba980d6a49p-134, 0x1.7886e9462897p-904, 0.0, 0.0,
     0.0, 0.0, 0x1.f5bd1a7aef03bp-393, 0x1.59c5749a1cf95p-309, 0.0, 0.0, 0.0,
     0x1.08be18a8a954cp-514, 0x1.e9f542672f7fep-982, 0x1.6507055e80c07p-271,
     0x1.f7c3a95393c3dp-653, 0x1.f4053fad9ab4bp-995, 0x1.e76483439710bp-480,
     0x1.dac9546dd96dfp-168, 0x1.ea4c4180eff32p-43, 0.0, 0.0, 0x1.a29308044e752p-617,
     0.0, 0x1.f3c8b27557269p-156, 0.0, 0.0, 0.0, 0x1.fb93edadb0487p-327, 0.0, 0.0,
     0x1.909bb41d714a9p-1, 0x1.bbd04482d906dp-739, 0x1.90946c4cf118bp-595, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.165db3851e0c1p-277, 0x1.177bc6e4532e9p-283, 0.0, 0.0,
     0x1.6aa6511113cap-599, 0.0, 0.0, 0x1.bae46b8ca8d7ap-653, 0x1.2c6a325d88253p-721,
     0x1.290d383a41042p-1016, 0.0, 0x1.275545fce9d04p-914, 0.0, 0.0,
     0x1.19a95fe4f3a71p-574, 0.0, 0x1.b19a2295b926bp-455, 0x1.9455089fa1814p-38, 0.0,
     0x1.193d6b956c38ap-956, 0x1.d9fe7ced36a6ep-420, 0x1.ba4bcc931c3a6p-144, 0.0,
     0x1.b79343f89179fp-73, 0.0, 0x1.102f9337cff08p-617, 0x1.e592817fa2711p-566, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2a194a62b761dp-269, 0x1.76d91ea967903p-333,
     0x1.8cae1f594f865p-535, 0x1.05e38d7e0bc05p-471, 0.0, 0x1.be235f2d5bb0fp-769,
     0x1.731ccb6e9fb4ep-867, 0x1.d9a889cd92e71p-250, 0x1.1b2c0e56a272bp-995,
     0x1.53fcfdb4f1a2ap-865, 0x1.ea30778f2cdb1p-365, 0x1.4f585daf9a1b8p-972, 0.0,
     0x1.6b872ae1e401fp-357, 0.0, 0.0, 0x1.b6b2491cccd2fp-260, 0x1.f0b57a47c39f6p-752,
     0.0, 0x1.7ff9c744cf8d9p-274, 0.0, 0x1.7cc36ef1e8a0bp-690, 0x1.5b534092c9b59p-744,
     0x1.5adba902db08ep-109, 0.0, 0.0, 0x1.d57000ade0669p-787, 0.0,
     0x1.5ef253f170143p-928, 0x1.5331176388488p-900, 0x1.5195cbec534f9p-11, 0.0, 0.0,
     0x1.4c51f768f8efp-707, 0x1.efd394f184578p-1011, 0x1.79faf235628fep-857, 0.0,
     0x1.aafc0b6e407bep-358, 0.0, 0.0, 0.0, 0x1.74a1ca46b8902p-194, 0.0,
     0x1.680b013620583p-295, 0x1.1ccd24209012cp-124, 0x1.347415bdb75a5p-21,
     0x1.8afa05ec70985p-812, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4ee00421532b8p-30, 0.0,
     0x1.fdc094e2b5fd1p-538, 0x1.b115b91c5a30fp-176, 0x1.d960778413cb5p-952, 0.0, 0.0,
     0x1.0d25da597ad1fp-309, 0x1.99895a841e1e3p-759, 0.0, 0.0, 0.0,
     0x1.5c3b3b9495804p-792, 0x1.3e04a767dea2bp-225, 0x1.e83e7a7e449c6p-95,
     0x1.4e167079669b8p-564, 0x1.39d0de60e9f01p-330, 0x1.0b6f13b871179p-238, 0.0, 0.0,
     0.0, 0.0, 0x1.e71b40c58f80ap-184, 0x1.9ad563e957889p-234, 0.0, 0.0,
     0x1.eeff0f0606dc6p-892, 0.0, 0x1.5b51d355212a3p-568, 0.0, 0x1.7eaaa49074b34p-607,
     0x1.1380ffe0b2aaep-237, 0x1.d5d0db269b0a5p-904, 0x1.60f515b77c747p-921, 0.0, 0.0,
     0.0, 0.0, 0x1.324b740820eb3p-1006, 0x1.9b15c62425131p-168,
     0x1.5289180644d34p-519, 0x1.98a1b8f29996ap-711, 0.0, 0.0, 0x1.edcb2a553823p-177,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64d5c14a61e2ap-209, 0x1.91a43b0fe7199p-291, 0.0,
     0.0, 0.0, 0.0, 0x1.83a4099c130bap-404, 0.0, 0x1.f49b3cecef262p-1007, 0.0,
     0x1.e528e9aecd07fp-747, 0.0, 0x1.995ded7357065p-1002, 0x1.f5eff64cf546cp-17, 0.0,
     0x1.09dd2b0d217e2p-322, 0.0, 0.0, 0x1.30ebdef46ff37p-1018, 0.0,
     0x1.019b578ef7ca7p-906, 0x1.8bb30c9c0b2a3p-362, 0x1.2c117b585b3d2p-922, 0.0, 0.0,
     0x1.c1a9c10bd5865p-839, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.03b77be9c0f94p-778,
     0x1.b646b7fc00aadp-199, 0.0, 0.0, 0x1.4d4f75e607965p-17, 0x1.40f62318fe904p-713,
     0.0, 0x1.06066864cae81p-208, 0.0, 0.0, 0x1.10795ac27f0e1p-983, 0.0, 0.0, 0.0,
     0.0, 0x1.01cb834ca9fb6p-370, 0x1.0d710f0e30661p-342, 0.0, 0x1.f429ef43e3295p-154,
     0.0, 0x1.bb790b6403f24p-392, 0x1.149a50dc6676ep-821, 0x1.f7d2674b329a5p-937, 0.0,
     0x1.4627fd5fc1072p-875, 0.0, 0.0, 0.0, 0.0, 0x1.334fbec725264p-516,
     0x1.8e0191ca25da7p-160, 0x1.0cb5f24fe329bp-624, 0x1.4e329a2741fa7p-104,
     0x1.6bd5b22c2f6ebp-75, 0.0, 0x1.5ecea521dbe43p-880, 0.0, 0.0,
     0x1.4988d7840b84ep-770, 0.0, 0x1.ff645305e0b64p-551, 0x1.96f076fc5aeecp-574,
     0x1.c561a44a1ba8dp-600, 0x1.2d2abd711177bp-386, 0.0, 0.0, 0x1.81b5bfc36b728p-645,
     0.0, 0x1.c5ed481a2def1p-647, 0.0, 0x1.f1db9dc99a116p-1003, 0.0, 0.0,
     0x1.ab6b56311a73bp-735, 0.0, 0.0, 0x1.94f625d8001dap-949, 0x1.577e4b7e4ed93p-907,
     0.0, 0.0, 0x1.3f5feb459e65bp-461, 0x1.045fba85097acp-143, 0x1.ea8e3c50928f3p-685,
     0.0, 0x1.d7fc3a9395bap-429, 0.0, 0.0, 0.0, 0x1.f0e0561447b8p-477, 0.0,
     0x1.5cd2a09dca2b6p-511, 0x1.db48dcd6ff382p-252, 0x1.563bac2529d2ap-788, 0.0, 0.0,
     0.0, 0x1.160151f67197p-865, 0.0, 0x1.938d7563ba9c4p-6, 0x1.18182e529650bp-206,
     0.0, 0x1.dc6bda4d5a459p-148, 0x1.04a2d322e8664p-531, 0.0, 0.0, 0.0, 0.0,
     0x1.eb0a9650e225ap-840, 0x1.d992628f841p-602, 0x1.a010b5d784575p-103,
     0x1.da1304e6f80fp-812, 0x1.0858802d2707dp-526, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dc3635fc8bf97p-736, 0x1.75dac7012c64cp-1018, 0x1.a7caff1abaac3p-983,
     0x1.8e23bdfe7cd2p-448, 0x1.006a343b998c3p-549, 0x1.48015af7c376p-121,
     0x1.9faa6a36a4fb9p-897, 0.0, 0.0, 0x1.e79428dccf3b4p-661, 0x1.195fd81dc748ap-518,
     0.0, 0.0, 0.0, 0x1.66cdb5da77aafp-864, 0.0, 0.0, 0.0, 0x1.757fd32b99c71p-119,
     0x1.048bd67a95376p-1015, 0.0, 0.0, 0x1.5a7da49e646dp-231,
     0x1.7c47f643b9ee7p-1022, 0.0, 0x1.80688460d1ef7p-820, 0.0,
     0x1.56d50b5ccd804p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ece8df1e2f5bp-552,
     0x1.5723dccef5bfp-824, 0x1.5d0ddd7b285d2p-242, 0.0, 0x1.905f65c20eb6dp-85, 0.0,
     0x1.f8acc01acb66dp-915, 0x1.77b75d255318ap-494, 0.0, 0x1.c211856496acep-782,
     0x1.084040ce2cd1bp-542, 0.0, 0.0, 0x1.6656e8599786fp-448, 0x1.6bb3c536d38f1p-468,
     0x1.b33b14524b787p-144, 0.0, 0x1.de36ead5f2f05p-765, 0x1.17c109bf73ac9p-606, 0.0,
     0.0, 0x1.e724ef1ddd0ep-776, 0.0, 0x1.626a9a0d983e8p-112, 0x1.3ecd357954129p-643,
     0x1.73dd26fc4207dp-555, 0.0, 0.0, 0x1.f58866599c147p-910, 0.0,
     0x1.d1205e6d04b7cp-574, 0x1.61d1fcb7b011bp-272, 0x1.0e7155682a302p-848, 0.0,
     0x1.d1079a2e300a1p-26, 0.0, 0x1.8caf03d17f916p-594, 0x1.b6af867dfbd98p-729,
     0x1.a2f4c43802049p-714, 0x1.76ba9083f2987p-1006, 0x1.81fd790e95686p-426, 0.0,
     0.0, 0x1.ae2f9f075798dp-885, 0.0, 0x1.8df8cd3532275p-638, 0.0, 0.0,
     0x1.574853c260d16p-201, 0x1.8e3cfcdd1772dp-925, 0x1.84d4ebcc1a9afp-843,
     0x1.f5f5420eaa739p-769, 0x1.34811458ab601p-392, 0.0, 0x1.77643fb223446p-258, 0.0,
     0.0, 0x1.9534686b7419dp-951, 0.0, 0x1.8c885688b14c7p-885, 0.0, 0.0,
     0x1.efc4bdfcac7dep-696, 0x1.e07a0221c45efp-676, 0x1.0f7c74b10fc7cp-657, 0.0,
     0x1.af77605c28adfp-831, 0x1.7b59e062e7344p-570, 0x1.a9e9239c46921p-775,
     0x1.33e7f71638d58p-427, 0x1.9014e2c6334acp-462, 0.0, 0.0, 0.0, 0.0,
     0x1.eebac87a12f4bp-829, 0.0, 0.0, 0x1.2ca6756dcae07p-353, 0.0,
     0x1.0208dd001d559p-657, 0.0, 0.0, 0.0, 0.0, 0x1.aaa602de4fd53p-616,
     0x1.4abc80111fd6bp-651, 0.0, 0x1.f8d05bb83edfbp-333, 0.0, 0x1.7c39cef77f0c8p-191,
     0x1.96d54c6144bd5p-592, 0.0, 0.0, 0x1.40d6c3bffb26cp-435, 0.0,
     0x1.31e819b160de3p-365, 0x1.82054390991ap-882, 0.0, 0x1.336d63eac9fb5p-480, 0.0,
     0x1.37338453088b7p-438, 0.0, 0.0, 0.0, 0x1.02d2a37fc09dap-511, 0.0,
     0x1.185b3c248b38p-272, 0.0, 0x1.d58a1caaee19fp-379, 0x1.31c5e19ba00b1p-259,
     0x1.07cadd37a4b3dp-900, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea35978e47cfbp-810, 0.0,
     0x1.61d0731f9338fp-72, 0.0, 0x1.9a9a0d35367efp-690, 0x1.2051370a08df3p-263,
     0x1.975d5b094f09fp-918, 0.0, 0x1.140cd44bb34adp-294, 0.0, 0x1.f02d93091be02p-127,
     0.0, 0.0, 0x1.4c5f494d561c3p-399, 0.0, 0x1.84285eeb7cae9p-709, 0.0, 0.0,
     0x1.6fc8bbe974ebbp-580, 0x1.b3b2c61c21941p-523, 0.0, 0.0, 0.0,
     0x1.d4ff2782bc357p-867, 0x1.a7f3308a3905ap-206, 0x1.7b4e0abd5cd6cp-891, 0.0, 0.0,
     0x1.662bf83f68a06p-661, 0x1.8f001eb194149p-562, 0x1.e955db1b3c25ep-935, 0.0, 0.0,
     0x1.12cb34a3153f9p-1011, 0x1.19a9e06e4499cp-12, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.973763699b65ep-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3102f1b4c898p-759,
     0x1.7573f9638d57ap-355, 0.0, 0.0, 0.0, 0x1.e46d2148c9da3p-725, 0.0, 0.0,
     0x1.9c61653f34b9bp-238, 0.0, 0x1.f6d0d34573d6ap-431, 0.0,
     0x1.0aef049e6cc2dp-1021, 0.0, 0.0, 0x1.bdc04411a878ap-686,
     0x1.7d62edf835f11p-787, 0x1.75e77fd249deap-122, 0.0, 0.0, 0x1.94e4085595b1ap-306,
     0x1.d37be0aab88edp-289, 0x1.c17635cdaea7fp-39, 0x1.2c00e8a3ad2adp-706, 0.0,
     0x1.fe98f90d1696dp-379, 0.0, 0.0, 0x1.5e5a88e1e54dbp-469, 0.0, 0.0,
     0x1.3bee296f539d5p-483, 0x1.9bf0ccefb1107p-764, 0.0, 0x1.149431e6df905p-761,
     0x1.09b0cbcccb437p-547, 0.0, 0x1.b027b04c4a879p-173, 0.0, 0.0, 0.0,
     0x1.2b0466c4b7eddp-678, 0x1.d0a5fe69170a5p-185, 0.0, 0x1.2522d2ecc3049p-686, 0.0,
     0x1.8d35dd64348d1p-529, 0x1.f674a26e52848p-242, 0.0, 0x1.cd81949b9846bp-137, 0.0,
     0.0, 0.0, 0x1.c590879a1b131p-694, 0x1.89d8d9a58833ap-62, 0x1.7964af75835e9p-862,
     0x1.8f080afa98de3p-589, 0x1.a1e88d595e2dap-893, 0x1.a07a1c0adddbfp-625, 0.0, 0.0,
     0x1.473e80542e864p-693, 0x1.ec0c721636b42p-148, 0x1.2d1d073bb9d54p-991,
     0x1.f8d3821aa9e4fp-969, 0x1.5e5ec469423fbp-348, 0.0, 0x1.0d5df2a769854p-542, 0.0,
     0.0, 0x1.5b50e6220529bp-52, 0.0, 0x1.5afbeca9183b8p-204, 0.0,
     0x1.505f8117b1f03p-895, 0x1.db4d69ee92a75p-476, 0.0, 0x1.1935a4c72a1e7p-97,
     0x1.726411f0fbcd7p-702, 0.0, 0.0, 0.0, 0x1.fcb7a43e6ac6ep-416,
     0x1.263c45dbe9ef8p-435, 0x1.f39affa298bf1p-271, 0.0, 0.0, 0.0,
     0x1.bf9bc8a419285p-573, 0x1.22b73f87f0a6ep-363, 0x1.cc8cfd538c895p-242, 0.0, 0.0,
     0x1.cea8e49ae1711p-452, 0x1.bcf9fd37d59cbp-519, 0x1.68c8d313ea83p-144,
     0x1.89bf7a2a07bd9p-233, 0x1.3088752f0222p-264, 0.0, 0x1.dbd4da48360a3p-457, 0.0,
     0.0, 0.0, 0.0, 0x1.195fb1dfeafafp-366, 0x1.657b63af2c3d6p-103, 0.0,
     0x1.1f553684dcb96p-312, 0x1.b9242ac1459b9p-177, 0.0, 0.0, 0.0,
     0x1.77cdfe2c211a7p-302, 0x1.7937d2be2c867p-947, 0.0, 0x1.1a723e39fabcep-417, 0.0,
     0x1.33662e94ed596p-552, 0x1.b2f2c94015ba9p-283, 0x1.91a2e90c7d359p-605, 0.0, 0.0,
     0x1.0e5b6de6d6698p-649, 0x1.a8d420a0cb62cp-363, 0.0, 0.0,
     0x1.3e3584f145ecep-1009, 0.0, 0.0, 0.0, 0x1.de51fdc899d1bp-587,
     0x1.d98db728de774p-267, 0x1.b7eeccf25caf9p-951, 0.0, 0x1.cc2719ad3e5efp-904,
     0x1.c694d94186d7bp-128, 0.0, 0.0, 0x1.586333bc2c7ffp-264, 0.0,
     0x1.a288eac745b7ap-449, 0.0, 0x1.6b6fa5b020b11p-901, 0x1.7ec785486d3bcp-281, 0.0,
     0.0, 0x1.cb3c2b3bea2ccp-186, 0x1.fb3177ecc6cffp-358, 0x1.9531084f145dap-279,
     0x1.0d3ecbe668af7p-938, 0.0, 0.0, 0x1.481c8243aca3fp-443, 0.0, 0.0,
     0x1.06557e44bc20bp-389, 0.0, 0.0, 0.0, 0x1.a15e0fd2bda41p-760, 0.0,
     0x1.6d01c87302575p-752, 0x1.2eca89fae5f94p-93, 0x1.d5357fb70c242p-691,
     0x1.2732e4a7e2b07p-853, 0x1.84b832fd24df3p-59, 0x1.e55463490453bp-562,
     0x1.84ad919a2f1bdp-535, 0x1.e1ebc37c18f9bp-758, 0.0, 0.0, 0x1.6c85c81cecafbp-168,
     0.0, 0.0, 0x1.97faf7bdb2237p-231, 0.0, 0.0, 0x1.66b5d8a860843p-221,
     0x1.df3a35a89ebb1p-381, 0x1.36d2971ca6c48p-327, 0x1.5c1f8d6aeff08p-659,
     0x1.c7f1bd60fa9c8p-952, 0x1.82f24e456b1e8p-454, 0x1.a312d287dbcfcp-193,
     0x1.64a7cd689e16dp-309, 0.0, 0x1.f00d8df13e898p-472, 0x1.c902dfa1ce714p-990, 0.0,
     0x1.a9bb68484cdb7p-515, 0x1.8f95bbcf43337p-308, 0.0, 0.0, 0x1.46fbbb4e303cep-973,
     0.0, 0x1.e7b5f963bbb78p-245, 0x1.f97f0c2abe217p-973, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9200ab40e2bdbp-949, 0.0, 0.0, 0.0, 0.0, 0x1.13fad239636dep-956, 0.0,
     0x1.46a32d601fed8p-531, 0.0, 0.0, 0x1.b0b427793233ep-218, 0.0, 0.0,
     0x1.bb2e9bf734bbdp-127, 0.0, 0.0, 0.0, 0x1.d04c005030aa9p-69, 0.0,
     0x1.631ff439a5f5ep-326, 0.0, 0x1.016e2973e0b4p-939, 0x1.302646c52c7ccp-802, 0.0,
     0.0, 0.0, 0x1.ee2246bd1c546p-628, 0.0, 0x1.2f38c1884554p-604,
     0x1.7ea2dcf23405cp-1022, 0.0, 0.0, 0x1.51495b035ac89p-321, 0.0, 0.0,
     0x1.e28b013000328p-584, 0x1.836649f6e5bfp-367, 0x1.06150766e0127p-301,
     0x1.cae3a832ff4f5p-878, 0.0, 0x1.c695735a2702ap-800, 0.0, 0x1.917415baccf87p-303,
     0.0, 0.0, 0.0, 0.0, 0x1.152b3ddc9e416p-771, 0x1.06f5e7975e712p-804,
     0x1.2f57d0402faddp-863, 0x1.b164a22ad2a71p-258, 0.0, 0.0, 0x1.3a9716c3d6d67p-158,
     0.0, 0.0, 0x1.e51605bb39a59p-488, 0x1.5973353a1e2adp-696, 0.0, 0.0,
     0x1.930a391376778p-633, 0x1.74e62862f41c1p-848, 0.0, 0x1.db03a1d57a025p-327, 0.0,
     0.0, 0.0, 0.0, 0x1.ece3a21b8963fp-256, 0.0, 0.0, 0.0, 0.0, 0x1p0,
     0x1.96a035eb6484ep-499, 0.0, 0.0, 0x1.a218d206110cfp-537, 0.0,
     0x1.6af316d6cb11ap-550, 0.0, 0x1.dea5b0319e955p-618, 0.0, 0x1.9b3cd12479c4fp-671,
     0.0, 0x1.59ec245021d1ap-540, 0.0, 0x1.4ef0d3372cc5bp-455, 0.0, 0.0, 0.0, 0.0,
     0x1.48a601900829fp-956, 0.0, 0x1.8896434bfbc63p-606, 0x1.46de77ae27b13p-227,
     0x1.5a06657997bcfp-305, 0x1.b54a6cfa562c5p-132, 0x1.fae74e5b072f2p-536,
     0x1.e72a56790fc45p-760, 0.0, 0.0, 0x1.89cb912eb6297p-674, 0x1.7779e7f90f947p-347,
     0.0, 0.0, 0.0, 0x1.64b382b323533p-988, 0x1.5dcf12aaf6816p-44, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fad108aa91f45p-422, 0x1.da8233b84ba87p-161, 0.0,
     0x1.87b95a64afcc9p-713, 0.0, 0x1.dc3f5b0787dd6p-145, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.87e48d2e35423p-577, 0.0, 0x1.d56b029bd97f2p-639, 0x1.4a2015e6b2791p-29, 0.0,
     0.0, 0.0, 0x1.e0500d591ba08p-71, 0x1.170b745f9f5bfp-156, 0x1.8f53706162bdap-957,
     0x1.51261d41a2ed8p-599, 0x1.6dc7ead3b7313p-110, 0x1.be241d8856fd6p-155,
     0x1.1d8a5b139914bp-500, 0.0, 0.0, 0x1.e443e9d5fb162p-721, 0.0, 0.0,
     0x1.6c15906ab398p-916, 0.0, 0x1.b41cd74ad8e93p-883, 0.0, 0.0, 0.0,
     0x1.0c36d15e2bbd7p-408, 0x1.c76bcf9099165p-783, 0.0, 0x1.4ff2c19fe0ec5p-450, 0.0,
     0.0, 0x1.e94f0438428aep-831, 0x1.748b4a8f37a16p-450, 0x1.62362624c506fp-571, 0.0,
     0x1.1c5ca9f88f05dp-587, 0x1.67508e5634468p-169, 0x1.55ce836f6ae3p-93, 0.0, 0.0,
     0x1.d5fa96abb9917p-551, 0x1.a1defbd7be4f6p-260, 0.0, 0x1.7de1f6c97d66fp-936,
     0x1.478c192a78486p-55, 0.0, 0.0
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
            tmp1 = Sleef_log2d2_u10avx2128(tmp0);
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
    printf("Sleef_log2d2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log2d2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
