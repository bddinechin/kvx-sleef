/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_floord1_purecfma.c --function Sleef_floord1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.87c2184284a88p-533, 0.0, 0x1.2a6abcac3b1e3p-301, 0x1.104fa644f14c7p-5,
     0.0, 0x1.0f0dc78261659p-150, 0x1.f3acba02349c2p-1019, 0x1.7d8dabc57f488p-950,
     0.0, 0.0, 0x1.399e274e06b84p-554, 0x1.f46507d7df08dp-954, 0.0, 0.0,
     0x1.1114db6cfbb01p-370, 0.0, 0x1.143fca5c2a19ap-11, 0.0, 0.0,
     0x1.5872e560dcef8p-17, 0x1.a6f79a1311b78p-299, 0x1.655c201c1e3fcp-448,
     0x1.4de0a3b50f06bp-727, 0.0, 0x1.48e4a297a460ap-936, 0.0, 0x1.d96ab0330a192p-133,
     0x1.8cf945ef076adp-977, 0x1.2bd7d619aa20ap-298, 0x1.15486d30d8aefp-391, 0.0, 0.0,
     0x1.c051ece6f3409p-308, 0.0, 0.0, 0.0, 0.0, 0x1.ff4c2bfd63f69p-427,
     0x1.903d0921bc9eap-812, 0.0, 0x1.fb4b9d67dafe2p-17, 0x1.4cbf5db4df05p-943, 0.0,
     0x1.245ba0643759cp-831, 0.0, 0x1.cdbe2d66f47a4p-386, 0.0, 0x1.b6776cb258b06p-209,
     0.0, 0.0, 0.0, 0x1.3b35da6a58178p-169, 0x1.6dbd94a6af705p-408, 0.0, 0.0,
     0x1.39045f9793bfap-710, 0x1.609ea982094bap-986, 0x1.aca41c32490d6p-917, 0.0, 0.0,
     0.0, 0.0, 0x1.aeac6eca2f778p-324, 0.0, 0x1.80f6f3fffeabcp-1014,
     0x1.b27c3c8715a1dp-633, 0.0, 0x1.81ce8ad2c39adp-977, 0x1.930491d4375e2p-406, 0.0,
     0x1.7999ff082669p-958, 0x1.e8116b3bc31a8p-314, 0x1.03ce4bc34718p-630,
     0x1.0bfff7a513fb6p-868, 0x1.74cc743152ba5p-144, 0x1.2cb440d29e253p-346, 0.0,
     0x1.ddae2174e83e1p-704, 0x1.e0bda853c0df1p-791, 0x1.4297f384f6d4bp-653,
     0x1.909062959c636p-272, 0.0, 0.0, 0x1.b741d9a2b8946p-278, 0.0, 0.0, 0.0,
     0x1.5c7ae0013e02p-331, 0.0, 0.0, 0.0, 0x1.f575f2e833e6ap-213, 0.0,
     0x1.3772444c4ab23p-479, 0.0, 0x1.7ec3b0ce52c85p-562, 0.0, 0x1.b74ff1a0eb4dp-886,
     0x1.2b39c69ca24f3p-388, 0x1.c598ae1985dadp-692, 0.0, 0.0, 0.0,
     0x1.3e38fe4384f1bp-95, 0x1.40cd1ff56f46bp-653, 0x1.7e993405508ebp-41, 0.0, 0.0,
     0.0, 0x1.5eeade184b5e1p-84, 0x1.f3c95eeff31d4p-164, 0x1.ecab79c32576cp-649,
     0x1.fd5fb279f3bd6p-793, 0x1.41d7a8fed4bddp-604, 0x1.eb3c51949168ap-660,
     0x1.9bcc99e454b38p-277, 0x1.ec5d95011f76dp-813, 0.0, 0x1.221b58c305faep-620, 0.0,
     0x1.7e3a4b1c5abd2p-890, 0x1.04ebd0041917bp-709, 0x1.998e0844887adp-965, 0.0,
     0x1.c4424a5f431f4p-139, 0.0, 0.0, 0.0, 0x1.a14c9f204a5d4p-176, 0.0,
     0x1.ba972633afe9ap-933, 0.0, 0x1.1895e05048836p-314, 0.0, 0.0,
     0x1.b3bd614fa3816p-747, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.703cb586f0febp-145,
     0x1.3cde06c00958ap-771, 0.0, 0x1.d29f89c5ab061p-853, 0.0, 0x1.44b17057440fbp-460,
     0x1.bbac9f77ccaf4p-278, 0x1.aa6807a696f15p-947, 0x1.1ccbbbc6bdf26p-498,
     0x1.f900d8611e059p-686, 0x1.be183feb3153dp-720, 0x1.bda0793bd37b6p-570,
     0x1.454aa181d3fa6p-718, 0.0, 0x1.f147515f07c17p-391, 0.0, 0.0, 0.0,
     0x1.8974636e7e9cp-887, 0.0, 0x1.fdf262e60ab0cp-1011, 0.0, 0.0,
     0x1.25603c101f7bdp-516, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8fc26cb181d5p-847,
     0x1.0608a1b2cc6b7p-966, 0x1.fa68d1e308bap-787, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8c745ac145226p-550, 0.0, 0.0, 0x1.679367d5422cep-626, 0x1.dd32051f78876p-986,
     0.0, 0.0, 0.0, 0.0, 0x1.17477c073cb4ep-774, 0x1.a748e1d64aa9cp-181,
     0x1.34139d7b075efp-149, 0.0, 0x1.fd32e36e8f7abp-842, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.360325fe76b4cp-570, 0.0, 0x1.6278999f2196p-551,
     0x1.dcb7f27c9188fp-48, 0x1.c27002e97b04p-928, 0x1.8d698d6f6b39cp-192, 0.0, 0.0,
     0x1.e588ca30e5b13p-156, 0x1.26968a60735fbp-441, 0x1.a828bc57f7ce2p-864,
     0x1.bbe981edae269p-510, 0.0, 0.0, 0x1.bfe78ecd9c6bbp-148, 0x1.3dea83fc5220ap-348,
     0x1.2f068016630fdp-465, 0x1.155e6326a2bd1p-252, 0.0, 0.0, 0x1.d3a7bbb5121b6p-418,
     0x1.e777af088174fp-830, 0x1.b2671c95a1005p-803, 0.0, 0x1.f5f153018ff69p-253,
     0x1.0eb7c91ce1153p-44, 0.0, 0.0, 0x1.d7419f6ee8d05p-373, 0x1.5b4f334dec349p-181,
     0x1.41166964ddd22p-47, 0.0, 0x1.f2f0e25afe8b6p-925, 0x1.8ca281dc9d0fp-557,
     0x1.1a14fd72610b3p-40, 0x1.6e8051f8926a2p-161, 0.0, 0x1.4d18069a30ae2p-804,
     0x1.ba1d8a6f7d2a8p-827, 0x1.ec0ac3859275cp-916, 0.0, 0.0, 0.0, 0.0,
     0x1.644f9194b8e85p-22, 0x1.6b6022971afdfp-202, 0x1.8bfb567367866p-488, 0.0, 0.0,
     0.0, 0x1.193ccbe9506eap-893, 0x1.cee008eaba5a3p-855, 0x1.7c565c39a38bep-642,
     0x1p0, 0.0, 0.0, 0.0, 0.0, 0x1.5765baded12fbp-448, 0x1.cff0365cf5661p-1000, 0.0,
     0x1.e31879a03cfb3p-818, 0x1.3c7bc3b295be5p-248, 0x1.f4efa32f45c75p-268,
     0x1.74392d315a42cp-840, 0x1.a4d89022b71fcp-237, 0.0, 0x1.43d17306a0f72p-788, 0.0,
     0x1.33db9672b76ccp-3, 0x1.343651a4d82fp-940, 0.0, 0x1.df3766b17db01p-758, 0.0,
     0x1.07dc3bab627f4p-1, 0x1.5edbb789884p-336, 0x1.dd492800614adp-869,
     0x1.ec2738b4540c8p-275, 0.0, 0.0, 0x1.af10cac060b1ap-310, 0.0,
     0x1.cc59a9b18c919p-646, 0.0, 0.0, 0x1.c646ae8e2d1ffp-671, 0x1.8dc3aa5741061p-746,
     0x1.d821e4da3c27ep-70, 0.0, 0x1.9a0d7da9010b2p-662, 0x1.de4b69702a86ep-132, 0.0,
     0x1.ca7d5963af876p-60, 0x1.1fd0951a6eba2p-462, 0.0, 0.0, 0x1.df65917d954b5p-698,
     0.0, 0.0, 0.0, 0.0, 0x1.26e1c347ceaf3p-894, 0x1.cf63f563e70fp-118,
     0x1.8462a6ac0b19p-373, 0.0, 0.0, 0x1.204b9e0322bd1p-990, 0x1.f76036702c7cap-950,
     0.0, 0x1.e38f76953fc9fp-675, 0.0, 0.0, 0x1.e9131f75ce402p-958,
     0x1.f8fed2e65dbd7p-569, 0x1.e4c2f313c5ab1p-200, 0.0, 0.0, 0x1.a13cee9984e27p-724,
     0x1.2125fae126cd6p-511, 0.0, 0.0, 0.0, 0x1.407733c9668cdp-669,
     0x1.5de32d8f6b73fp-524, 0x1.386e3f5cfe6e9p-568, 0x1.357467aa9f319p-916, 0.0, 0.0,
     0x1.0b8b1a1a5519dp-30, 0.0, 0x1.ce0bff0257b9fp-315, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7eb0099f1f1ddp-951, 0.0, 0.0, 0.0, 0x1.4b75d4400cc9cp-243, 0.0, 0.0, 0.0,
     0.0, 0x1.6fff2ebd0f97bp-623, 0x1.fabcb4c3a9175p-975, 0.0, 0.0, 0.0,
     0x1.f3b23f4e8eed5p-14, 0.0, 0.0, 0x1.43a285020bf3cp-334, 0x1.49e5ea547899fp-406,
     0.0, 0x1.5f1310a3a5f27p-27, 0.0, 0x1.c3283d58d19dcp-661, 0x1.d9f577c9d6e67p-825,
     0.0, 0x1.699a712e6cdd4p-843, 0x1.34a04d01c931fp-138, 0.0, 0.0,
     0x1.19f1208770d8ep-543, 0x1.a38259489b1fep-299, 0.0, 0.0, 0.0,
     0x1.9fd4fcf5420f8p-560, 0.0, 0.0, 0.0, 0.0, 0x1.f47b8cd84e7ep-875,
     0x1.b4141d4aa5de5p-534, 0.0, 0x1.7c57183a92acfp-312, 0.0, 0.0,
     0x1.67c301739accbp-37, 0x1.880ec20ec5fafp-501, 0.0, 0x1.d32ca4803243fp-769, 0.0,
     0.0, 0.0, 0.0, 0x1.4f23ffeb7a224p-319, 0.0, 0.0, 0x1.3cdd37468e69cp-94, 0.0, 0.0,
     0.0, 0x1.8ae540180d131p-936, 0x1.3b8aeacf5cb04p-175, 0.0, 0.0, 0.0,
     0x1.270579e31bb73p-148, 0x1.0408f9dda8722p-787, 0x1.d97c5650eeeadp-435,
     0x1.d39f25f2d82aap-543, 0.0, 0.0, 0x1.e7437c8a886c5p-311, 0x1.99dee351389bfp-973,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.de0c9b46bdb2p-581, 0.0, 0x1.7c353a3299902p-356, 0.0,
     0x1.ce32bf828d28bp-563, 0x1.8bf542cef9e4cp-174, 0.0, 0.0, 0.0,
     0x1.bc52a50ea682fp-446, 0.0, 0.0, 0.0, 0.0, 0x1.96a40d0ecd1c1p-354,
     0x1.c49727e6e084fp-357, 0x1.7d144e1676f0cp-293, 0x1.7addee5731525p-167,
     0x1.3c7cbe57dfe8ep-627, 0.0, 0.0, 0x1.9ee4ad3a55a27p-498, 0x1.4392da1b377e3p-939,
     0x1.bf96dce3b3d85p-1010, 0.0, 0x1.81f6b03224e3p-366, 0.0, 0.0,
     0x1.e4d7d71cb54c9p-692, 0x1.f40942fc225b9p-343, 0x1.76de32843706ap-296, 0.0, 0.0,
     0x1.a579869066279p-39, 0x1.94fbf3a18b01cp-778, 0.0, 0x1.533e583ce74d1p-400, 0.0,
     0x1.a94fbfc7851e2p-119, 0.0, 0x1.cce53df8c2845p-784, 0x1.3689b24273cd9p-90,
     0x1.8b2e8c2b1188ap-310, 0.0, 0x1.416e934b7e9b2p-255, 0.0, 0x1.362b785acab61p-140,
     0.0, 0x1.28981a10c339ap-672, 0.0, 0x1.b0c4916e42a07p-718, 0.0, 0.0,
     0x1.60272efd8330bp-302, 0x1.89e4644f804bcp-903, 0x1.e63d794f70d29p-264,
     0x1.e6b127d8abc9cp-620, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3e5d6e84208eap-786,
     0.0, 0x1.100c8cf1192e6p-940, 0.0, 0x1.73f2f72d42b7ep-891, 0.0,
     0x1.3b02b7eff69b2p-826, 0.0, 0.0, 0.0, 0x1.e8969db0f82d3p-841, 0.0,
     0x1.151d3d7d84468p-705, 0x1.4034bd1ee3f74p-512, 0x1.ef320a108381ap-198, 0.0, 0.0,
     0.0, 0x1.3d9eaf67a928ap-28, 0x1.c3f07da45f19fp-9, 0.0, 0x1.570f07fb7c592p-839,
     0.0, 0x1.9b55673bce47ap-480, 0x1.12717f320e746p-460, 0x1.d20e99224f20fp-611,
     0x1.8a72bbc24c446p-177, 0.0, 0.0, 0.0, 0.0, 0x1.a87ff0782482cp-993,
     0x1.af055ee5b8af9p-264, 0x1.74dfb660f8f27p-412, 0.0, 0x1.3df708718a825p-792,
     0x1.0def195b34ab2p-308, 0x1.6f159d96f12cdp-657, 0.0, 0.0, 0x1.b09abca7cd862p-975,
     0x1.dae2a912eb782p-766, 0.0, 0x1.6785377a88874p-1005, 0x1.a42ca742d707cp-334,
     0x1.5ba7e9b3838bdp-522, 0x1.9cd8cca720804p-541, 0x1.5576d1c2d8cc4p-936, 0.0,
     0x1.b9e7618f9a4d8p-163, 0.0, 0x1.523fac8dd2fe2p-542, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9652d4848f0c9p-268, 0.0, 0.0, 0x1.406e0bfdc2883p-436,
     0x1.8c7917cbb4c2p-664, 0.0, 0.0, 0x1.918a2323a3855p-91, 0.0, 0.0,
     0x1.d16c56a728bdcp-347, 0.0, 0.0, 0x1.1e1581936caeap-609, 0x1.8cbc740684111p-331,
     0.0, 0.0, 0x1.b1f82fb1810f9p-902, 0x1.cbfc3b6ebf229p-430, 0x1.af932908a28e8p-229,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.370af6ee20c4fp-507, 0.0, 0.0, 0.0,
     0x1.3c066cef72e9bp-625, 0x1.a46396ac5c667p-914, 0.0, 0.0, 0.0, 0.0,
     0x1.7b1ea8039531ap-188, 0x1.f884bc47f3d7dp-414, 0x1.d559ce26b0e43p-397,
     0x1.26c6637885c31p-119, 0x1.0582fb226210ap-527, 0.0, 0x1.45ef205c55b9fp-168,
     0x1.a1f8480965449p-129, 0.0, 0x1.195f1921fd676p-112, 0x1.6958b8abbf11dp-435,
     0x1.2040e0c252247p-528, 0x1.d300acb2936adp-420, 0x1.f42785737dde3p-848,
     0x1.20c42f21644a9p-308, 0.0, 0.0, 0x1.3eb7b0c27b5b7p-1009, 0.0, 0.0,
     0x1.d9f96ddf26595p-152, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c3d1c7b446d3fp-403, 0.0, 0x1.a8ece86ff5109p-870, 0.0, 0x1.c97f5300d35ffp-761,
     0.0, 0x1.03bb47ceae9d1p-606, 0x1.c93c9a8151a7cp-362, 0x1.48e430e01ac15p-579, 0.0,
     0x1.e7f31a0328e4cp-614, 0x1.cdf85ea1c97c5p-168, 0x1.18e072d8bb889p-532, 0.0, 0.0,
     0x1.d95a1846638b8p-393, 0x1.8d0cf299c4ce2p-914, 0.0, 0x1.854d463528e36p-521, 0.0,
     0x1.b452011717ad7p-307, 0x1.c873928738791p-244, 0.0, 0x1.4c05d87fa7a82p-903, 0.0,
     0.0, 0.0, 0.0, 0x1.d771dd7fd62a1p-371, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f90e0d2cbd9cp-237, 0.0, 0x1.81f683654b7b9p-737, 0.0, 0x1.c0f66dafe88c2p-485,
     0x1.8bfcaa1c436b8p-204, 0x1.ff6c936537a37p-852, 0x1.5d1e0a33780d4p-544,
     0x1.3a673f447295bp-95, 0.0, 0.0, 0.0, 0.0, 0x1.9ecc458ad89f4p-488,
     0x1.3ce246835f891p-254, 0x1.70c01106b1a26p-915, 0x1.f78617bb3c8e8p-729, 0.0, 0.0,
     0x1.250ee97488e8cp-649, 0x1.1a41518d3fc9bp-869, 0x1.065af3bbfea01p-318,
     0x1.5c43ace5504a5p-542, 0x1.a863f9d48e4f2p-766, 0x1.f6937cee171f7p-47,
     0x1.64ddf26d5b6p-684, 0x1.5bedb905911fbp-148, 0.0, 0.0, 0.0,
     0x1.d5613452b255cp-90, 0.0, 0.0, 0x1.e715b4f858a72p-836, 0x1.2732f1099024cp-394,
     0x1.c69c3448a2dfap-731, 0.0, 0x1.10a2827dd03d4p-477, 0.0, 0.0,
     0x1.34b6cbc78a894p-679, 0x1.50214f68afe12p-689, 0.0, 0.0, 0.0,
     0x1.a3745eeca1fddp-295, 0.0, 0.0, 0x1.3836c5efa98e6p-952, 0.0,
     0x1.a8fa93272cff7p-417, 0.0, 0.0, 0.0, 0.0, 0x1.d2cd317da136bp-858,
     0x1.fe60eb0d69554p-962, 0x1.f9ba070b1e2d7p-15, 0x1.04e56adac7a11p-467,
     0x1.9145da3370a2cp-251, 0.0, 0.0, 0x1.01064aa63270dp-896, 0x1.c7bf35285f834p-709,
     0.0, 0x1.26d9aaf7b469fp-148, 0.0, 0x1.41c3e35a0c34fp-102, 0.0, 0.0, 0.0, 0.0,
     0x1.0229761d81ee3p-504, 0x1.999355d96c291p-685, 0x1.984ba471cfa34p-834,
     0x1.8c14a20d1a94ap-881, 0x1.054bb73099409p-712, 0.0, 0x1.62785c9e4af66p-165, 0.0,
     0x1.b3ef2057eeeb2p-812, 0.0, 0.0, 0x1.0f9ff9e7260aap-911, 0x1.0379fee08db37p-934,
     0.0, 0.0, 0x1.33894898a0a33p-207, 0x1.2b1c72214fe31p-866, 0.0,
     0x1.5f0d0448cbafp-472, 0.0, 0x1.c00b34d798d5dp-156, 0.0, 0.0, 0.0,
     0x1.0c3b7a51073acp-226, 0.0, 0x1.e06398949533dp-390, 0.0, 0x1.1b0e7dc951fcp-441,
     0x1.ae78d1106614dp-255, 0.0, 0.0, 0.0, 0x1.fd1feef08cd5p-252, 0.0,
     0x1.32cfcc612fedp-700, 0.0, 0.0, 0x1.761cc5b22c221p-335, 0x1.ef64832fc0a4fp-996,
     0.0, 0.0, 0x1.fe44496711362p-44, 0.0, 0x1.4e6ec7516ff9p-310,
     0x1.e9d5aed15f6c3p-383, 0.0, 0x1.9c623eea8ffd8p-531, 0.0, 0x1.e76528b308558p-399,
     0.0, 0x1.b3dd768e00d6cp-155, 0x1.1aecea255b418p-728, 0.0, 0.0,
     0x1.254c5a8a1ca8dp-810, 0x1.1e927f55ea161p-784, 0x1.f51b611f75bf4p-171,
     0x1.212a166c6e872p-443, 0.0, 0x1.1eccd85782acep-347, 0.0, 0x1.923429def91afp-711,
     0x1.0e388a72770dbp-766, 0x1.c32c9a92397ecp-255, 0.0, 0.0, 0x1.bf1a979048179p-40,
     0.0, 0.0, 0x1.bc4763b4297dap-730, 0x1.9728174bc0b2ep-446, 0x1.11ef1cd0ddf6cp-379,
     0x1.235d175d5aa57p-623, 0x1.b2985ede839dp-568, 0x1.9b42e223c6d2ap-1016, 0.0,
     0x1.ab68a98eb70c1p-802, 0x1.69540fd6709e3p-499, 0x1.b7ae701cfb06p-455, 0.0, 0.0,
     0x1.d9cc78a541066p-553, 0.0, 0.0, 0.0, 0.0, 0x1.78547ce4450c6p-829,
     0x1.2b95afb8457e9p-302, 0.0, 0x1.787769631c9d5p-437, 0.0, 0x1.38119cf949bd2p-602,
     0x1.358e30c20e673p-269, 0x1.a93332d790ccep-956, 0.0, 0.0, 0.0, 0.0,
     0x1.a97a7986a28a2p-306, 0x1.ca0b8d0ab3dcp-428, 0.0, 0.0, 0x1.833a5f10f9736p-852,
     0x1.dc74698f349bp-245, 0x1.de83db93de798p-692, 0.0, 0x1.d4be42d7ee028p-509, 0.0,
     0.0, 0x1.da56979fa7dbdp-606, 0x1.8242c497d90d2p-142, 0.0, 0x1.4b5d59e85ed09p-607,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7fcd6420aef9ap-74, 0.0, 0x1.75f67a2c7d21ep-25, 0.0,
     0.0, 0x1.cec687908b618p-163, 0x1.0b3f58d70166ap-715, 0.0, 0x1.ab86880a819acp-783,
     0x1.2f2ee26caeea2p-278, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bff98d8fd9b2p-804, 0.0,
     0x1.836666169e1c4p-949, 0.0, 0x1.36ff58d2f4db8p-538, 0.0, 0x1.eb206f5aff939p-238,
     0.0, 0x1.84b8a81e1367fp-967, 0x1.0b2cb9c052708p-937, 0.0, 0x1.53b1003055d5cp-672,
     0.0, 0.0, 0x1.90fb1416c5db9p-781, 0.0, 0x1.41dc8446b7b51p-50, 0.0, 0.0,
     0x1.935c7a1c55038p-678, 0x1.be445afa61305p-1016, 0.0, 0.0, 0.0,
     0x1.cf32d607f6f2cp-542, 0.0, 0x1.a8fb233ec26cfp-201, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.808b032115881p-851, 0x1.d5a2b2b22901dp-341, 0.0, 0x1.99fe804552197p-994,
     0x1.0d1d565f9eadfp-449, 0.0, 0.0, 0x1.310c9faad006ap-987, 0x1.b316c62f1dda9p-110,
     0x1.39245f5c60073p-902, 0x1.669c95d629e2p-75, 0x1.a19987890d80cp-177,
     0x1.0df168a465ce8p-605, 0x1.807758a4351a8p-554, 0.0, 0x1.86b337c56817ep-344,
     0x1.6c2f09e3c001p-869, 0x1.43b1a717f3a67p-645, 0x1.df59b6cd3acd7p-941, 0.0,
     0x1.56c8aa3a07451p-520, 0x1.1f09602de2bd4p-550, 0x1.a9ee3e15c003bp-684, 0.0, 0.0,
     0.0, 0x1.e63372e0669dap-775, 0x1.3691f763a5725p-77, 0.0, 0.0,
     0x1.f718a82cac51cp-957, 0.0, 0x1.289aa62b33002p-248, 0.0, 0x1.5a9076a4cd388p-185,
     0.0, 0.0, 0.0, 0.0, 0x1.cb6f1e6cada7ap-936, 0.0, 0x1.1c385c3307416p-138,
     0x1.528005f0f4c95p-208, 0x1.e4d5805682474p-359, 0.0, 0.0, 0x1.b66013db4c794p-118,
     0x1.e4d85b863a446p-521, 0x1.e1b0eedbc331fp-982, 0.0, 0x1.52ff2f799fabp-584,
     0x1.badb394dddaa2p-832, 0.0, 0x1.8c9ed0c0ce91cp-105, 0x1.3b98680c380b6p-833,
     0x1.dee31660e82c7p-766, 0x1.77560293aef05p-865, 0x1.fe10744039b8fp-23, 0.0, 0.0,
     0x1.e373d9a0c07bap-450, 0.0, 0x1.3f6098422aa51p-840, 0x1.4f606e889c5acp-388,
     0x1.d0e9f159147cdp-428, 0x1.e8d05dd463ae3p-230, 0x1.3ef63afd37a61p-348,
     0x1.f55fa56f2aa2cp-272, 0.0, 0.0, 0x1.b2947154a1ac7p-374, 0.0, 0.0,
     0x1.5bf6a0a08bde8p-900, 0x1.97500accc8821p-500, 0.0, 0.0, 0x1.a21fb9e2ce63p-937,
     0.0, 0x1.a9f26c9a5a2a5p-261, 0.0, 0x1.1bf36af8e5d9ep-874, 0.0, 0.0, 0.0,
     0x1.194f556b1f341p-479, 0x1.5f73a545aebe1p-851, 0.0, 0x1.44478ebb32dadp-416, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6327e445f5206p-81, 0.0, 0x1.8f77409e5b4c9p-923,
     0x1.ab6e2cf31f2d8p-69, 0.0, 0x1.2c6d58af02614p-916, 0.0, 0x1.f1dfc883ff611p-866,
     0x1.4d3a5f07f0cc8p-451, 0.0, 0x1.38635701d4c6dp-326, 0.0, 0x1.08388e13ec554p-365,
     0x1.b0778d2fad843p-546, 0x1.f4e4a34ae4a1bp-550, 0.0, 0.0, 0.0, 0.0,
     0x1.5dc3044587605p-981, 0x1.f0ba574e806adp-499, 0.0, 0x1.4f5d9829b18cfp-463,
     0x1.af66e6e087d9cp-877
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_floord1_purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_floord1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_floord1_purecfma bench acc %la\n", global_bench_acc);
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
