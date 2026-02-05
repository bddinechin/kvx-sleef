/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospid2_u05avx2128.c --function \
 *     Sleef_finz_cospid2_u05avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0x1.b7fea85ae8288p-53, 0.0, 0.0, 0x1.9ffc85552586ap-958, 0.0,
     0x1.9b318f10b5978p-356, 0.0, 0x1.9cd0e9585424dp-13, 0.0, 0x1.e131b03f29cf4p-1020,
     0.0, 0x1.2e9f442b2d6b8p-603, 0.0, 0.0, 0.0, 0.0, 0x1.074485de15816p-907, 0.0,
     0x1.0adce54b33388p-875, 0x1.c22d7beb8abbep-534, 0.0, 0.0, 0x1.706d859dec3a2p-879,
     0.0, 0x1.29720eab74e0ap-316, 0.0, 0x1.769282030b08fp-63, 0.0, 0.0, 0.0,
     0x1.cedae85694e4p-305, 0.0, 0x1.4639bb580ddb1p-756, 0.0, 0x1.ea092aa360f73p-765,
     0.0, 0x1.7f0100678e1f4p-1011, 0x1.65e444b1a571fp-302, 0x1.e22086e6f71a5p-486,
     0x1.a4c8d1646ea15p-131, 0.0, 0x1.2d5b97f991aecp-881, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6b07c724f0e34p-255, 0x1.9241d9a6317b6p-463, 0x1.647c0277cabf5p-571,
     0.0, 0x1.cc821a86aea16p-39, 0.0, 0x1.c7f6cefb4b968p-857, 0.0,
     0x1.2db78c7ab2e34p-98, 0x1.fc4e757926dffp-151, 0x1.982adaadd3fcdp-217,
     0x1.0f5f35ceb8aacp-6, 0.0, 0x1.a70db1f63c932p-340, 0.0, 0x1.4b28501dc54a8p-42,
     0.0, 0.0, 0.0, 0.0, 0x1.fdd72949c4c29p-574, 0.0, 0x1.9959cc7077ae2p-996, 0.0,
     0.0, 0x1.1c2f892c2b872p-97, 0x1.d76cc8730182ap-923, 0.0, 0x1.02296b01665ap-398,
     0x1.64200ba73df88p-785, 0x1.da25a305ad61ep-237, 0x1.401711d857cdbp-982, 0.0, 0.0,
     0x1.99b95f1267d7cp-827, 0x1.480e60209b382p-275, 0.0, 0x1.483256e5feb2fp-777, 0.0,
     0x1.3138ee8e0ef5fp-276, 0.0, 0x1.a5a03219c3f56p-158, 0x1.89b138ed7d532p-931, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f4c1689cceca6p-753, 0x1.0e5085263ab02p-470,
     0x1.9a082cd174feep-817, 0x1.5c6e54a311057p-717, 0x1.e64ca7b5f5d7dp-775,
     0x1.befcbd81d79fbp-737, 0x1.531b237e37243p-432, 0.0, 0x1.120452965be0ap-553,
     0x1.3c1422b0a83ecp-282, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd430ff9c28d9p-223, 0.0, 0x1.a6198b89bd75ap-153, 0.0, 0.0,
     0x1.67e67196a5e9bp-369, 0x1.f117712fb40e1p-932, 0.0, 0x1.53136530a2268p-744,
     0x1.03efa8613a9cdp-807, 0x1.1bff1bfb2953ep-939, 0x1.7762d1a60e479p-298, 0.0, 0.0,
     0.0, 0x1.9be41aec777fap-882, 0.0, 0x1.c46b5bcfe3896p-606, 0x1.a81aa308d42f4p-829,
     0.0, 0.0, 0x1.68b523403fbbbp-64, 0x1.4cd2a1d5d7348p-405, 0x1.d689c7d983c6cp-529,
     0x1.7c1dad483e6bep-616, 0.0, 0.0, 0x1.5d8d9a6664cf7p-814, 0x1.ad8ad7e4d52cbp-36,
     0.0, 0.0, 0.0, 0x1.7dd4582493741p-998, 0x1.3032612174fd9p-664, 0.0,
     0x1.810143a8ac4e6p-237, 0.0, 0x1.ec767c74aad3cp-665, 0x1.6b9eb49c4804fp-529, 0.0,
     0x1.5673cefdeb155p-387, 0x1.07e3599055ac8p-1007, 0.0, 0.0, 0.0,
     0x1.652b1571de7cdp-519, 0.0, 0.0, 0.0, 0.0, 0x1.4de316594bb2ep-524, 0.0,
     0x1.87a232944b00ep-770, 0x1p0, 0x1.281533e34752fp-471, 0x1.5a162c380b71dp-485,
     0.0, 0x1.83110931c6619p-9, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.740fa24d77ba3p-19, 0x1.087c316e03fcap-219, 0.0, 0x1.7bd5fba7ef178p-461,
     0x1.5a4d45340b2f8p-951, 0.0, 0x1.b06598af4f432p-73, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.073b6e7167048p-764, 0x1.51fe54b1a79e5p-550, 0.0, 0.0, 0x1.fa573108bcc2ap-979,
     0x1.9ec34d1d7b97bp-307, 0.0, 0.0, 0.0, 0x1.a6d31655f767p-516, 0.0,
     0x1.12df78ada2d46p-738, 0.0, 0.0, 0.0, 0x1.8f8e8e01d92acp-651,
     0x1.da6e4f3cee2c9p-832, 0.0, 0x1.40a2ac7ebe08ep-900, 0.0, 0.0, 0.0,
     0x1.4c2f19f03e47fp-72, 0.0, 0.0, 0.0, 0x1.61f0f29089a61p-36, 0.0,
     0x1.be07ac7f09c2fp-714, 0.0, 0x1.429f4c9fd6481p-21, 0x1.792789f8c5d66p-603, 0.0,
     0x1.b9f43d6e36af3p-793, 0x1.f546e6f65deaep-606, 0x1.bf432ed284eecp-923, 0.0, 0.0,
     0x1.3840d89f2f90cp-953, 0.0, 0x1.cd6419153d477p-917, 0x1.29acc47be4fb5p-506,
     0x1.afb4d3a426e8ap-367, 0.0, 0x1.ddd97e3cd773fp-46, 0x1.ad5ab305d9234p-219,
     0x1.29c00d395f4e7p-75, 0.0, 0.0, 0x1.e241850038119p-470, 0x1.223335da9e78fp-381,
     0x1.197d6fa7238f8p-160, 0.0, 0.0, 0.0, 0x1.aecbae6e89abfp-869,
     0x1.c01e1a4a5e76dp-15, 0x1.78b5ee4ac54f4p-977, 0x1.a1a4282e7a1b1p-220, 0.0, 0.0,
     0x1.74bb6cae1a057p-984, 0.0, 0.0, 0x1.d31d3f7a97c12p-474, 0.0,
     0x1.d4090df090a1dp-161, 0x1.837131b09d0ccp-844, 0x1.d28a088ba1f63p-18, 0.0, 0.0,
     0.0, 0.0, 0x1.3a385f355e973p-5, 0.0, 0.0, 0.0, 0x1.b56e40c7478e8p-179, 0.0, 0.0,
     0x1.4be070580a066p-437, 0x1.e622b9b457d2cp-674, 0x1.1436283653617p-120, 0.0,
     0x1.40b97675e27fdp-170, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6d5b3fff8c0fep-205, 0.0,
     0x1.6eff195528446p-591, 0.0, 0x1.51a29006b3d3p-627, 0x1.46d3a51ad312ap-958, 0.0,
     0.0, 0x1.1b09962f83dbap-990, 0.0, 0x1.fd4c8a7896cabp-900, 0x1.408f6425e214ap-830,
     0x1.d325eff7db4b9p-906, 0x1.1e54e475da5d6p-757, 0.0, 0x1.8f0ef166c899dp-935,
     0x1.2c1a77b5dcb9ep-628, 0.0, 0.0, 0.0, 0x1.c38634ea1e1c8p-382, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.172a69f1fbd92p-759, 0x1.02644eca3dc74p-290,
     0x1.fbfdc74b21237p-759, 0.0, 0.0, 0x1.4f45d19c0c357p-521, 0.0, 0.0,
     0x1.6d34df2a09a69p-594, 0x1.ba6c343eb6287p-429, 0.0, 0x1.825a8afe00d84p-441, 0.0,
     0.0, 0x1.5378171d1b1a8p-713, 0.0, 0.0, 0.0, 0.0, 0x1.6a439bdcf34efp-670, 0.0,
     0x1.c29e66ce5f08ep-588, 0x1.45ddb098c4892p-326, 0.0, 0.0, 0x1.ca147a5a2d00dp-285,
     0x1.dac34775cfb83p-375, 0x1.592666ca4bcd2p-768, 0.0, 0x1.78498468c1a75p-991,
     0x1.9c743787ec7f6p-621, 0x1.c21f9e9e75c05p-491, 0.0, 0.0, 0.0,
     0x1.bc9dd95413d28p-836, 0x1.7de232c8d69dp-159, 0x1.d966dad486828p-817, 0.0, 0.0,
     0x1.c075ed9d2368dp-485, 0x1.44aff7cdbeaf4p-222, 0x1.3129696785876p-120,
     0x1.7ce4451bdaaeap-736, 0x1.cf1e0c73d060cp-804, 0.0, 0.0, 0x1.1eb197174308bp-921,
     0.0, 0.0, 0.0, 0x1.962194ef34391p-883, 0x1.d54b4c47d139p-796, 0.0,
     0x1.4b491861b0911p-789, 0x1.eb48bc0f598f8p-679, 0x1.04a3f1712c919p-323, 0.0, 0.0,
     0x1.150d721914a34p-211, 0x1.a28f7326b3d5ep-421, 0.0, 0x1.7d421bd5fcaffp-695, 0.0,
     0.0, 0x1.71a233ce9c3aep-752, 0.0, 0x1.f821f01d115f2p-586, 0.0, 0.0,
     0x1.7d5be870fb4bp-678, 0x1.deaf704a82739p-368, 0x1.e0b9317855277p-136, 0.0,
     0x1.c6154c4ace5b6p-765, 0.0, 0.0, 0x1.4c812117ce18bp-927, 0x1.c6eee2603b9e8p-512,
     0.0, 0x1.9f67747df1d5p-489, 0x1.1428e4f1e9f3fp-616, 0.0, 0.0,
     0x1.f8ca8d24d311dp-367, 0x1.510ebb4bc8914p-39, 0.0, 0x1.cb4d3e3f4755cp-450,
     0x1.dc4941c095a31p-218, 0.0, 0x1.cf333b0c33277p-619, 0.0, 0.0,
     0x1.6dc0ff7747918p-651, 0x1.2dbcacaa1828cp-271, 0x1.55c19fa990a41p-620,
     0x1.8253858cd3f81p-388, 0x1.a83c4830d3264p-495, 0.0, 0.0, 0x1.b893396fd70e3p-28,
     0.0, 0.0, 0.0, 0x1.b60a4a07c32f1p-188, 0.0, 0.0, 0.0, 0x1.5fd729ce8a8d5p-277,
     0.0, 0.0, 0x1.17cb548463785p-621, 0x1.a8a06a58a63e1p-838, 0x1.9135d1c489b92p-550,
     0x1.f17127d39b6c3p-176, 0x1.cdccfddce19e3p-74, 0.0, 0x1.817cab377d66cp-370, 0.0,
     0x1.d6136e87474bfp-991, 0.0, 0x1.c7876ea7cad5cp-568, 0.0, 0.0,
     0x1.b72af898f6ab4p-987, 0.0, 0x1.e8269e28ccc9p-55, 0.0, 0.0,
     0x1.2a1bce84e8822p-721, 0.0, 0x1.cea241ef2756ap-681, 0x1.26120d2262cf2p-149,
     0x1.f4a4edd919398p-230, 0.0, 0.0, 0x1.971cff7a22994p-73, 0x1.3378012638006p-9,
     0x1.c62ad162ec39p-422, 0.0, 0x1.3934216b8a878p-455, 0x1.0d4c4db43a2bbp-819,
     0x1.5c10db1f7ca6fp-458, 0.0, 0x1.01c2c57fe0d2ep-552, 0x1.5a02df14bb36ep-243,
     0x1.6fc7bb2d565ddp-197, 0.0, 0.0, 0x1.2996e06fd175ap-912, 0.0, 0.0,
     0x1.d620a3ee5c228p-487, 0x1.9d5cdf9590a45p-246, 0x1.329b74268bfe2p-748, 0.0, 0.0,
     0x1.c5241048eae3bp-824, 0.0, 0x1.4d0f9545ffd32p-648, 0.0, 0x1.12f429c9b2b5cp-200,
     0.0, 0x1.2b4668c2c1c52p-897, 0.0, 0.0, 0x1.edc343451421dp-710, 0.0,
     0x1.f0c42634a86bbp-178, 0x1.859387aa6375cp-204, 0x1.fcbf341b1e5b8p-834, 0.0, 0.0,
     0x1.2f40a7727255p-648, 0.0, 0x1.c03aaf7067123p-418, 0.0, 0.0, 0.0,
     0x1.b7cfdcdea6b4p-45, 0.0, 0.0, 0x1.87a57a2857797p-503, 0x1.ebc2f9e67757dp-311,
     0x1.88b02fe4918d4p-408, 0.0, 0x1.f177542c844e5p-546, 0x1.f9264e509b0e7p-178, 0.0,
     0x1.68bf84420c516p-510, 0.0, 0.0, 0x1.120001ec49a2bp-88, 0.0,
     0x1.fcaa4ea7ed007p-230, 0x1.dc21932889c96p-952, 0x1.2cfee073ed723p-569, 0.0, 0.0,
     0x1.2369d7ea89fc5p-162, 0x1.2185c0139b78cp-58, 0.0, 0x1.c95b2fae75934p-408, 0.0,
     0x1.f5450566f56abp-763, 0x1.500b2bc67a7ep-219, 0.0, 0x1.1940c18b620b2p-178,
     0x1.8d3b2647ce59fp-59, 0.0, 0x1.cfee018c62a6fp-105, 0.0, 0x1.a544cc07750b9p-975,
     0x1.524679960a8e6p-697, 0x1.2ab0f3380a805p-631, 0.0, 0.0, 0.0,
     0x1.d2dcdbc203a7fp-564, 0x1.557b1124f282cp-98, 0.0, 0.0, 0.0, 0.0,
     0x1.9959bcea3100dp-494, 0.0, 0.0, 0x1.4050fb346238fp-860, 0x1.95eeec20aebc5p-12,
     0.0, 0x1.c3b9326ccf5f8p-911, 0.0, 0x1.2366dd5561f06p-656, 0.0,
     0x1.d7328d5c11021p-380, 0x1.8684884fdfd98p-232, 0.0, 0.0, 0.0, 0.0,
     0x1.09ecb905bbeedp-348, 0x1.ee3d35a11f13ep-585, 0.0, 0x1.3db8d3ed6b51ep-846, 0.0,
     0x1.8e109c1396c08p-513, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.96c588d0d86cfp-194,
     0x1.35a63642eacf9p-435, 0x1.ec82c5c271ac7p-1006, 0x1.2bdd42329b673p-330, 0.0,
     0.0, 0.0, 0.0, 0x1.b41527a4aa5a9p-212, 0x1.ce9f9b635f46ap-261,
     0x1.1645c18ad574ep-129, 0.0, 0x1.4905b75f961e2p-2, 0x1.5662775e5bd4cp-246, 0.0,
     0.0, 0x1.3b6796d33929ap-1020, 0.0, 0.0, 0.0, 0x1.6011158443e25p-63, 0.0,
     0x1.196928154739bp-171, 0x1.0ff01d88ab342p-204, 0x1.f82dd1be0bcacp-947,
     0x1.730f11316ae2cp-917, 0x1.d6de232a22575p-619, 0x1.c112a7e1466fbp-711,
     0x1.d10edd5d95cbdp-593, 0x1.b093f1a1e2271p-593, 0x1.04f81dd1f12ebp-554, 0.0,
     0x1.aaf259b5c33d9p-366, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc053abf76978p-470,
     0x1.57dbee7a6be2cp-186, 0.0, 0.0, 0x1.fe845aede9416p-774, 0x1.58330f2aa1e05p-21,
     0.0, 0.0, 0x1.4d0fa09f9fbd6p-219, 0.0, 0.0, 0x1.d7effb78222fcp-55,
     0x1.31f5f49024d2bp-968, 0x1.3c45ed366129cp-798, 0x1.a0f3059efe0dp-412, 0.0, 0.0,
     0x1.ef30c6df5c43p-691, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7dd336fe95d4p-831,
     0x1.ba6c93d964c18p-753, 0x1.6637eba74e3ffp-1007, 0x1.5c7eca9d2d191p-131,
     0x1.4450c7898b839p-11, 0x1.6b19aac92779ap-303, 0x1.bc36c5d19ca6p-966, 0.0, 0.0,
     0x1.108a02d1cad5cp-942, 0x1.1349938c3e3bcp-316, 0.0, 0.0, 0x1.c8346b570f726p-944,
     0.0, 0.0, 0.0, 0x1.999207171e53ep-437, 0.0, 0x1.199f3565e4077p-853,
     0x1.43337b8e1196p-632, 0.0, 0.0, 0.0, 0x1.5c6087f0dda9ap-641,
     0x1.a5505074d23f5p-243, 0x1.fe585de08da45p-615, 0x1.1a12cf321da3cp-58,
     0x1.4d1d564bc84dap-421, 0.0, 0x1.e18ec37e1731cp-998, 0x1.f3e75e9ddfee1p-168, 0.0,
     0.0, 0.0, 0.0, 0x1.7700ff62a62ap-37, 0.0, 0.0, 0.0, 0.0, 0x1.be1da1020e8c1p-255,
     0.0, 0.0, 0.0, 0x1.51b425e13b6fap-660, 0.0, 0x1.f82574147680ap-614,
     0x1.6316302a7834ep-320, 0x1.169242b6c25bap-501, 0.0, 0x1.936d08d956a02p-127,
     0x1.58f02985b9facp-892, 0.0, 0x1.8208fae2a4d55p-951, 0.0, 0.0, 0.0,
     0x1.55e45744560f2p-294, 0x1.f188b123bc2ap-118, 0x1.253aa03058a1ep-958,
     0x1.533df6acca978p-410, 0.0, 0.0, 0x1.7fc4c311185e3p-887, 0x1.398aca8b1a831p-947,
     0x1.19164be29e931p-484, 0x1.54808c4922d84p-918, 0x1.4a464d9f5cf56p-84,
     0x1.b21aeca6eab38p-796, 0x1.6dc2793fe0759p-853, 0x1.88441d8d5f30bp-658,
     0x1.1e136375e37e6p-62, 0x1.0700398447b4ap-103, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7259f01b19d2ap-967, 0.0, 0.0, 0x1.df284e1be8091p-289, 0.0,
     0x1.c29e7ef1fa546p-228, 0x1.496b21b5e2fa7p-78, 0x1.5a1f6a593b08dp-827, 0.0, 0.0,
     0x1.702eb9dacc2c5p-857, 0x1.d60c13ae393b9p-547, 0.0, 0.0, 0x1.437533ff4fcdcp-914,
     0.0, 0x1.b7844f349822bp-324, 0.0, 0x1.55d509d1a4a2ap-4, 0x1.d4ad5cfa9502dp-35,
     0.0, 0.0, 0.0, 0.0, 0x1.b429b552b93ddp-729, 0.0, 0.0, 0.0,
     0x1.a744afe10770ep-430, 0x1.ab102e53817fcp-434, 0x1.88678d927cff5p-901, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87d579599c908p-417, 0.0, 0x1.9847e772b6ea4p-830,
     0x1.7ff85aa1e8ccbp-872, 0.0, 0x1.77ac53bf54957p-650, 0x1.8a168f0d51095p-454,
     0x1.97d4ae4ca401cp-791, 0.0, 0x1.360b412b18f14p-159, 0.0, 0x1.1a7001b4d2bb3p-795,
     0.0, 0.0, 0x1.da4f476ac4e7p-863, 0x1.ad116518353fep-606, 0x1.3dc2b8bd6462dp-225,
     0.0, 0x1.08fca4c18775bp-780, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1e0791ddd667ep-248,
     0.0, 0x1.c248b4230036cp-325, 0x1.cb2f0ecbefc27p-883, 0x1.c9e6d30c0814dp-144,
     0x1.f73b2159ba8b7p-58, 0x1.319d7f60c21e2p-499, 0.0, 0x1.74f8cc9eb76bap-678,
     0x1.d35f3740f965ap-762, 0x1.d97a06762e819p-111, 0x1.b8c0c5caf699bp-522, 0.0, 0.0,
     0x1.67bdc6f5504aep-355, 0x1.17b22bf4a00dap-411, 0.0, 0.0, 0x1.00cce870b0b16p-778,
     0.0, 0x1.b3c0c13c3ffc5p-235, 0.0, 0.0, 0.0, 0x1.a09e502b61f27p-411,
     0x1.91e8164108b76p-198, 0.0, 0x1.b0784580f6274p-66, 0x1.5c58e212eefe5p-73, 0.0,
     0x1.e92df72cc35d3p-317, 0.0, 0.0, 0x1.11caecbbecac5p-594, 0.0, 0.0, 0.0, 0.0,
     0x1.c9e5b74200441p-814, 0x1.e1f323e7032b9p-182, 0x1.9fdaf459511ecp-343, 0.0, 0.0,
     0x1.3138d627bd9adp-792, 0.0, 0.0, 0.0, 0x1.596f244430febp-930, 0.0, 0.0, 0.0,
     0x1.5019f762cb19ep-277, 0.0, 0x1.eda46e7a8eae8p-3, 0x1.bc51bf494d158p-832,
     0x1.493c88302df65p-909, 0x1.a9f0fed780359p-556, 0.0, 0x1.0c09517a16c69p-787, 0.0,
     0x1.e150baf35e1f1p-507, 0x1.213bd4d77bb65p-600, 0x1.aaf657941830fp-294,
     0x1.51e9812257471p-872, 0.0, 0.0, 0x1.d5ee7747d4d61p-474, 0.0,
     0x1.66e8f4fc93d5cp-38, 0.0, 0.0, 0x1.9611bd733352ep-282, 0x1.fffe832269e8dp-311,
     0x1.65cdf4b859bebp-713, 0.0, 0x1.3c4603d046dc9p-273, 0x1.f098ade5cec1dp-219, 0.0,
     0.0, 0.0, 0x1.bc09731d0ed19p-892, 0.0, 0.0, 0x1.7abb42d2a7eb4p-563, 0.0,
     0x1.6099b72804d68p-529, 0x1.7025ce4623d3cp-249, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af8b2e5aebf3cp-199, 0.0, 0.0, 0.0, 0x1.d48b60aedb2a3p-196,
     0x1.535e96228fedep-689, 0x1.92f6a32b8315dp-258, 0x1.1fc127294aae3p-397,
     0x1.6c14ba78155c9p-286, 0x1.d43996934e084p-816, 0.0, 0x1.018de4e4a9b54p-916,
     0x1.700ebd695fbd9p-266, 0x1.8a09dc9833aeap-919, 0.0, 0x1.3432bf0ae0d94p-117, 0.0,
     0x1.f91be7e1f923cp-1018, 0.0, 0x1.17aee328eea41p-585, 0.0,
     0x1.634980cab040ep-561, 0x1.75478b434d84ap-285, 0x1.3bca344a7b2a1p-232, 0.0,
     0x1.c10f170ccd44bp-88, 0.0, 0x1.81c001e4959a8p-721, 0.0, 0.0, 0.0,
     0x1.9668bb3d35f3p-401, 0.0, 0x1.f47bad9cbae82p-956, 0x1.fb5c8b7aa84f5p-80, 0.0,
     0.0, 0x1.6a3d5dcb8e27fp-570, 0x1.6941bb91840cdp-70, 0.0, 0.0, 0.0,
     0x1.b61d064291de3p-472, 0.0, 0.0, 0x1.441ec88e0f53ep-183, 0.0,
     0x1.a4451bcb69cb5p-655, 0.0, 0.0, 0.0, 0x1.44d4b4c16ebbp-393,
     0x1.962075c74e412p-178, 0.0, 0.0, 0.0, 0x1.edcf6be01f4fp-495, 0.0, 0.0, 0.0, 0.0,
     0x1.9462af8399c7dp-468, 0.0, 0x1.147d817d8c9d9p-844, 0.0, 0x1.0c9b46bf0835ap-225,
     0.0, 0x1.c3496732245bcp-601, 0.0, 0.0, 0.0, 0x1.996aa8c1b725p-406, 0.0, 0.0, 0.0,
     0x1.fdb155646b867p-399, 0x1.d2e8e8702bac6p-77, 0.0, 0.0, 0x1.3cee66f1e60c9p-858,
     0x1.b1ca36f75cf0cp-448, 0.0, 0.0, 0x1.4b0540c72042fp-131, 0x1.25199a571dd7ap-848,
     0.0, 0.0, 0x1.c28e4402f3981p-807, 0x1.fae79bf96a0d8p-783, 0.0, 0.0,
     0x1.eb1dc2ef5afecp-930, 0.0, 0x1.aa3b54ee98f16p-339, 0x1.d4cfd0a433a79p-282, 0.0,
     0x1.578c586fa26e2p-583, 0x1.b2b34ea5eed05p-12, 0.0, 0.0, 0x1.f5d345626b65ap-116,
     0.0, 0.0, 0x1.72856466319a8p-69, 0x1.ffad3a2cb7dbfp-925, 0.0,
     0x1.7ab5e44ab1469p-449, 0.0, 0x1.3ece2631bdeabp-605, 0.0, 0x1.37d88234cbfd2p-102,
     0.0, 0.0, 0x1.76c68dceac7bdp-783, 0x1.0a49bfc852345p-958, 0.0,
     0x1.0182f18db5195p-512, 0x1.6596474c336b5p-490, 0x1.b8b780094c90fp-802,
     0x1.eac879061d0afp-182, 0x1.79f552779f3b5p-971, 0.0, 0.0, 0.0, 0.0,
     0x1.9ca9a3b2ff35bp-348, 0.0, 0.0, 0x1.1a4da0339e0b1p-1022, 0.0,
     0x1.f1697474f1cb3p-343, 0x1.373c83ccc31e9p-703, 0x1.f863dbe134a6cp-311,
     0x1.0efb9bd6a00a2p-880, 0x1.2b1f2b7b3c4fbp-442, 0.0, 0x1.605a4860b71ffp-772
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
            tmp1 = Sleef_finz_cospid2_u05avx2128(tmp0);
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
    printf("Sleef_finz_cospid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_cospid2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
