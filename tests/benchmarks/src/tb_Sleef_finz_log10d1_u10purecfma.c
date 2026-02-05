/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log10d1_u10purecfma.c --function \
 *     Sleef_finz_log10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
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
     0.0, 0.0, 0.0, 0x1.daf94e746c595p-384, 0.0, 0.0, 0.0, 0x1.afa721fa9e3a9p-870,
     0x1.000477092ebc8p-138, 0.0, 0.0, 0x1.b00bf70d1fa14p-472, 0.0,
     0x1.0a86a954a0697p-692, 0x1.7eb38364f311p-460, 0x1.432f3c6b13ff6p-550,
     0x1.ab87283e6d32cp-318, 0.0, 0.0, 0.0, 0x1.c737ad2be23dap-875,
     0x1.3b41fe5a009a4p-42, 0.0, 0.0, 0x1.68aca71c5012dp-455, 0x1.0efcdfe9c5162p-646,
     0x1.b13326696aaeap-483, 0.0, 0.0, 0x1.9a330849edb76p-894, 0x1.6117110736899p-707,
     0.0, 0x1.ae53aca85eb64p-180, 0x1.e2979b807e3afp-175, 0x1.69d2e1ecdb046p-787,
     0x1.cbf4776bec8d5p-149, 0x1.892c4619accf8p-136, 0x1.ae6dbeef509b6p-1022,
     0x1.b2b0f6441759dp-988, 0.0, 0x1.f7d3e79a0ca4ep-648, 0.0, 0.0, 0.0, 0.0,
     0x1.969bfe1a51878p-880, 0x1.3218905c6e426p-180, 0.0, 0.0, 0.0, 0.0,
     0x1.2a4d91856e72dp-425, 0.0, 0.0, 0x1.2d1a74ef6678ap-504, 0.0,
     0x1.92615e9663b67p-635, 0x1.add321c19d353p-772, 0x1.3125e276c9d25p-777,
     0x1.7d6ee7ec52fcap-53, 0.0, 0x1.b2d7d9114df03p-787, 0x1.0582a29eaa2b6p-316, 0.0,
     0.0, 0.0, 0.0, 0x1.4f7279f5c163fp-502, 0x1.fb6cf02971d93p-182,
     0x1.7ca74f48855fap-163, 0x1.6e52bb9ee3a39p-94, 0x1.825c587cc180bp-664, 0.0,
     0x1.20af582da02dcp-806, 0.0, 0.0, 0x1.b63522c38f146p-477, 0.0,
     0x1.93b0d64124eacp-374, 0.0, 0.0, 0x1.a59db4b8205a3p-804, 0x1.ad83905efb291p-815,
     0x1.cffc160ca9c48p-265, 0.0, 0.0, 0x1.2d6faab5015afp-629, 0x1.6d9489a1404f4p-632,
     0x1.a114f7d9ee646p-710, 0x1.c9306853d17c6p-162, 0.0, 0x1.ab3fff1fec9ebp-1008,
     0x1.5e162646e544ap-774, 0.0, 0x1.9bdfa5edb3717p-179, 0x1.ef84cda198554p-363,
     0x1.f257083b608dcp-427, 0.0, 0.0, 0.0, 0.0, 0x1.53979a91d245bp-877, 0.0,
     0x1.9e3d651814f39p-744, 0.0, 0x1.b9ccf56e110fbp-139, 0.0, 0x1.ffa8e525e32ccp-802,
     0.0, 0.0, 0.0, 0.0, 0x1.a9bc5abf84a58p-300, 0.0, 0x1.1bcbb5dda8cb9p-128, 0.0,
     0x1.94c640200252dp-580, 0x1.c358174a3e4eep-144, 0x1.9e9311a935c2ep-522,
     0x1.91bb14052c9c5p-510, 0x1.04f567bc2114ap-271, 0.0, 0x1.f5b5fa4e9054p-870,
     0x1.d3a573fae2c9p-1008, 0.0, 0x1.4eb59d023246cp-83, 0.0, 0x1.805eaeb3aabdap-90,
     0x1.0d1191287f888p-941, 0.0, 0.0, 0.0, 0.0, 0x1.2572102b85dbap-926, 0.0,
     0x1.b1882b88f0deap-428, 0.0, 0.0, 0x1.319c0e7dc1a1ep-252, 0x1.bed16bc2102c9p-740,
     0.0, 0.0, 0.0, 0.0, 0x1.6c8bdeff770b6p-960, 0.0, 0x1.dfbe15966c418p-285, 0.0,
     0.0, 0.0, 0.0, 0x1.e7ab467bc3e1dp-281, 0x1.d2d6b375f9296p-663,
     0x1.6cc9674be0df7p-121, 0x1.45e004ef821ccp-808, 0.0, 0.0, 0.0,
     0x1.b39cb50886d9cp-480, 0x1.333160eaa508bp-581, 0.0, 0.0, 0x1.bf2ca1a0919ap-517,
     0x1.46430aca286bdp-304, 0.0, 0x1.d95c09fa7c8e2p-779, 0x1.7832d8ba7ccb9p-661, 0.0,
     0x1.d7f60e110a34dp-940, 0.0, 0x1.b501373cf9c84p-567, 0.0, 0x1.ec22f0f93fd71p-657,
     0x1.9280f22e7fd5dp-207, 0x1.f338f7e18cfe8p-29, 0.0, 0.0, 0x1.1869530ca933bp-779,
     0.0, 0x1.9da93a164e3fap-680, 0x1.010a12c5eb022p-538, 0x1.844a8a9403876p-205, 0.0,
     0.0, 0x1.db7def69f2976p-269, 0x1.3af637515f9bp-799, 0.0, 0.0,
     0x1.ea3b1c3ea7f48p-682, 0.0, 0x1.9bc42cd170d0ep-772, 0.0, 0x1.5a177626d2a57p-398,
     0.0, 0.0, 0x1.fd530f9289bf5p-206, 0x1.1b2912945726bp-209, 0.0, 0.0,
     0x1.53760c4df1ee2p-515, 0x1.935a95fc8139ap-589, 0.0, 0x1.d27c32936bd45p-777, 0.0,
     0.0, 0.0, 0x1.ebf8f27475a3dp-970, 0x1.e8910ab4605b7p-110, 0x1.30ce2049aed37p-477,
     0.0, 0x1.8a22718b009f4p-36, 0.0, 0x1.d8ef9669d9fc3p-893, 0x1.3fed13d220606p-701,
     0.0, 0x1.c5fcfc89556f3p-133, 0x1.95e74a2d487a7p-411, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b79c51f22f881p-178, 0.0,
     0x1.f970021243192p-1005, 0.0, 0x1.c2a9d279c5bdep-79, 0.0, 0.0, 0.0, 0.0,
     0x1.2b68a7b5f0e97p-527, 0x1.4d9bc13f5961bp-247, 0.0, 0.0, 0x1.222db587f1f7dp-734,
     0.0, 0.0, 0x1.fc749afa28593p-654, 0x1.037acdf6a217fp-103, 0.0,
     0x1.09073f47dcb5bp-426, 0x1.aa64d1e04243ap-997, 0.0, 0.0, 0.0,
     0x1.b58b189f5ea0ep-306, 0.0, 0.0, 0x1.81a6a8e898b67p-39, 0.0, 0.0,
     0x1.5251f17a55692p-48, 0x1.7570ce03055b7p-1001, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17e6d9bf816c4p-773, 0x1.a3b3ec2990779p-529, 0.0, 0.0, 0x1.019aafa1f8784p-951,
     0.0, 0.0, 0x1.aabb7d6d5196ep-251, 0.0, 0.0, 0x1.dba04bf6ae128p-31, 0.0, 0.0,
     0x1.8124e3974f7e8p-524, 0.0, 0x1.245af4a4be4b6p-42, 0x1.075ae7f63e313p-348,
     0x1.8f66540fb303ap-779, 0x1.221b0c95755d8p-115, 0x1.c9d4a4b9bab8cp-729, 0.0,
     0x1.c7382fe1059efp-684, 0x1.5c92433900c6cp-393, 0x1.4732eebcc484p-537, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e2452eee763bp-814, 0.0, 0x1.a04947fdd7683p-735, 0.0,
     0x1.9527deb029f93p-887, 0x1.8845f09236c4ep-154, 0.0, 0x1.0f0dcc672889ep-687, 0.0,
     0x1.89444a0e65c19p-633, 0.0, 0x1.19e48b68e1c35p-327, 0x1.93de08e608f41p-566, 0.0,
     0x1.e01ab1ac7367bp-659, 0x1.5293f4f8283f8p-701, 0x1.05a8b4f7d4aafp-567,
     0x1.b43fda0164008p-99, 0.0, 0x1.af47d2b0b7bb9p-350, 0.0, 0.0,
     0x1.3ceedf429382bp-958, 0x1.79b06163c27d8p-590, 0.0, 0x1.7d70b22b2403cp-193,
     0x1.0cdefec04057p-646, 0x1.add96aba6e937p-417, 0x1.a643d08023391p-614,
     0x1.18459942c614ep-981, 0.0, 0.0, 0x1.f98e3204aad96p-456, 0.0, 0.0,
     0x1.d886cc88e263fp-923, 0.0, 0x1.95e009c1aa7f1p-214, 0x1.5ee4cd5c2fab4p-503, 0.0,
     0.0, 0.0, 0.0, 0x1.7fc3dc3c1eec8p-39, 0x1.3d66fa1bdd2b3p-401,
     0x1.0806d83ce4e19p-543, 0x1.719d64add93f4p-877, 0x1.7b8bd3cd9d303p-1006, 0.0,
     0.0, 0.0, 0x1.f8de3935e241dp-612, 0.0, 0.0, 0x1.62ac2298ae519p-400,
     0x1.e10d04bccbed6p-682, 0x1.557ed7df6f115p-200, 0x1.a11d8ce413edcp-817,
     0x1.15fd6d893863bp-904, 0.0, 0x1.b815852b1b8dp-166, 0.0, 0.0,
     0x1.2112947654083p-595, 0.0, 0x1.b563797be8606p-32, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08dac9b78a767p-942, 0.0, 0.0, 0x1.494d700a0bca9p-441, 0.0, 0.0, 0.0,
     0x1.04c1da0895455p-197, 0x1.ac6dae173adc6p-809, 0.0, 0.0, 0.0,
     0x1.e4da947b762bep-388, 0x1.130ebdeac11aap-125, 0.0, 0x1.8c8c470f04729p-543,
     0x1.7762abb5a972ep-388, 0.0, 0x1.e8ba8f264db63p-362, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.24036396655acp-681, 0x1.602f9a630a126p-932, 0.0, 0.0,
     0x1.0027dd1896ba4p-1009, 0.0, 0x1.7e185e17ae829p-487, 0.0, 0.0,
     0x1.dd9e69c7a5576p-776, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1c6e33a6886ep-147,
     0.0, 0.0, 0x1.96d1767601da2p-490, 0.0, 0.0, 0x1.f0e5553111703p-913, 0.0, 0.0,
     0x1.bf06ce0a35654p-947, 0x1.d227348c01014p-1011, 0x1.85a4ec318388ep-687,
     0x1.cc75767edb69dp-73, 0.0, 0x1.4cdab3f5b0defp-791, 0x1.1842d66ebf33dp-570, 0.0,
     0.0, 0x1.d83373d16fb03p-483, 0x1.a696410b28485p-722, 0.0, 0.0,
     0x1.4f7bffa2bc3dbp-224, 0x1.ce9af7f2e6e48p-187, 0.0, 0x1.ccc9adf259141p-1018,
     0.0, 0.0, 0x1.7e97546441ef9p-809, 0x1.53c8de2d239bcp-555, 0.0, 0.0,
     0x1.ff383124fe7cep-254, 0.0, 0.0, 0x1.6d5e6a8c1c11p-934, 0.0,
     0x1.4666d977181bap-641, 0.0, 0x1.555d6f5ebcd4p-336, 0x1.49d19fecfa7dcp-672, 0.0,
     0.0, 0x1.0dbbbdc7d5bb7p-600, 0.0, 0.0, 0x1.e86c5c8847f22p-827, 0.0,
     0x1.b770c7e1d29cbp-16, 0.0, 0x1.e8cdc24159356p-914, 0x1.945cde9263dbep-684,
     0x1.239df2c2e38bfp-472, 0x1.cc8285ec33cp-936, 0.0, 0.0, 0.0,
     0x1.88d454ced4354p-139, 0x1.5da4a79e443a7p-652, 0.0, 0.0, 0.0,
     0x1.524d6105c2882p-381, 0.0, 0.0, 0.0, 0x1.6a87efc4a8f3cp-946,
     0x1.7a2b81fcc0313p-66, 0.0, 0.0, 0x1.2bc3d53b8c16ep-204, 0.0,
     0x1.22caf39281dcdp-92, 0.0, 0x1.cc6e5d6850807p-336, 0x1.9b5c29e26159p-290,
     0x1.11e1414ead5bap-236, 0.0, 0x1.62577416abdafp-867, 0.0, 0.0,
     0x1.1cded3220ef8ap-279, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4bfafb5f5e86p-936,
     0x1.a28501d9cd39p-144, 0.0, 0x1.af0c0656f69bep-63, 0.0, 0x1.72c66fa6effcbp-531,
     0x1.c1a6f3e7dabd6p-341, 0x1.0815ff37cbe66p-395, 0.0, 0x1.14822936d9b2p-162, 0.0,
     0x1.faf7824e9be05p-834, 0.0, 0x1.f9df8d540f0cbp-188, 0x1.59ac743aa04c6p-702,
     0x1.750b63b884ff7p-523, 0.0, 0.0, 0.0, 0.0, 0x1.3dce8245b789ap-985,
     0x1.e347c8db7dd36p-204, 0x1.de92cd87437ecp-827, 0.0, 0.0, 0x1.67b97482da9cbp-603,
     0x1.65451850c5ab4p-997, 0x1.1c71038cb99acp-458, 0x1.67981460ee58ap-185,
     0x1.09a81713d52e5p-865, 0x1.84fb791daeed1p-412, 0x1.df38083709bd5p-962,
     0x1.74c65d9861b0bp-62, 0x1.2cee753f8f333p-437, 0.0, 0x1.ec35db2d718f9p-697,
     0x1.4db444192bcb9p-968, 0.0, 0x1.2326995de19e8p-503, 0x1.443a05ef908b7p-224, 0.0,
     0x1.b76e04ec4f83cp-376, 0x1.d07baef1cbap-891, 0.0, 0x1.c99c94a241f53p-825, 0.0,
     0.0, 0.0, 0x1.cff3cabfd5dc7p-283, 0x1.fb9d158ac015dp-581, 0x1.6fd0698e002aep-725,
     0.0, 0x1.4edc525a19947p-176, 0x1.dc95f3ea61f8cp-208, 0.0, 0x1.b69f7163e002bp-668,
     0x1.e108e9f046294p-494, 0x1.5de6314c7503dp-341, 0.0, 0.0, 0x1.e0999ba69a2d7p-469,
     0x1.2d106866dd75ap-439, 0.0, 0.0, 0x1.8b1894db333eep-395, 0.0, 0.0, 0.0, 0.0,
     0x1.90ed2afe6bab4p-784, 0.0, 0.0, 0.0, 0x1.36befac966a81p-252, 0.0,
     0x1.f6d0fdb4c09dp-345, 0.0, 0x1.5e6b0c79cb4c5p-1011, 0x1.9e04157d95a8cp-191,
     0x1.6305c7f9b6277p-783, 0.0, 0.0, 0x1.066612fbe9c14p-277, 0x1.dfb5d96c10bcap-691,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4989761417a61p-615, 0.0, 0x1.20a8bac45b635p-43, 0.0, 0x1.f04e75aa0d93ap-285,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a8d6ae841eb31p-811, 0.0, 0.0, 0.0, 0.0,
     0x1.e6317c039a7c3p-479, 0.0, 0x1.6203fb8aa0a78p-748, 0x1.b64f3be8b459fp-838,
     0x1.75c36c81b507p-1016, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b05d9ae83a05p-543,
     0x1.7774820595718p-320, 0.0, 0x1.2edcccbc96cdbp-775, 0x1.4ca7bb879fa45p-759, 0.0,
     0.0, 0.0, 0x1.fa16d867676fbp-300, 0x1.56e226f078fd4p-80, 0x1.e2cfaf12eb4bap-852,
     0.0, 0x1.243580402fe6ep-603, 0.0, 0x1.999b50885af56p-855, 0.0, 0.0, 0.0, 0.0,
     0x1.43285391ef376p-788, 0x1.1cd658cff8ae8p-276, 0.0, 0x1.bcded7b691c8bp-817,
     0x1.36dd9ab6f1fa5p-1009, 0x1.befabd11e7dc4p-949, 0x1.9105b4f4921eap-517,
     0x1.245372f7d44fap-297, 0.0, 0x1.9cc784db472b4p-576, 0.0, 0.0,
     0x1.08fa335d78637p-76, 0x1.fecc1d2a8768p-625, 0x1.5bf8858c86cf4p-828, 0.0,
     0x1.18f09b1f58884p-122, 0x1.4333dee818618p-556, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f08a03c59911p-265, 0.0, 0x1.e65ffdd98a59cp-218, 0.0, 0x1.678b26ceb0bb7p-291,
     0.0, 0x1.249f8646a6f89p-831, 0x1.627402d5cf306p-954, 0.0, 0x1.8b0cb29a5be9ap-524,
     0.0, 0x1.7c22ff6708afep-614, 0.0, 0.0, 0.0, 0x1.cdee0721005f3p-780, 0.0, 0.0,
     0x1.6e9eeb279ac43p-459, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bfa05465ca5a3p-114, 0x1.40a1d71b013f2p-71, 0.0, 0.0, 0x1.f27d691ab8489p-906,
     0x1.086639c9c61b2p-620, 0x1.f815b4a591b03p-987, 0.0, 0x1.03975261b22e3p-209, 0.0,
     0.0, 0.0, 0.0, 0x1.8f8475bf43d47p-884, 0.0, 0.0, 0x1.ad1e53d573c0ap-493, 0.0,
     0x1.eff6f2307ce63p-114, 0.0, 0.0, 0.0, 0.0, 0x1.9637478ebe1f6p-660,
     0x1.2e6747fa53177p-381, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7663c70cdc49ep-739, 0x1.4e90e82edde3p-18, 0x1.c735374e7a1p-410, 0.0,
     0x1.988cc519c0bap-677, 0x1.303d8a4068143p-383, 0x1.c6e7c9b865cbcp-703, 0.0,
     0x1.2ed4f86341068p-645, 0.0, 0x1.e6b10959a0c05p-633, 0x1.07d274e2e88f7p-994,
     0x1.2c0bd991ad5f5p-860, 0x1.b96b148d04192p-720, 0.0, 0x1.7e9b1131ca902p-442, 0.0,
     0x1.a4f4a65d43658p-96, 0.0, 0.0, 0.0, 0x1.0fc96770ffd4p-9,
     0x1.ab9b2b5d3ac5fp-292, 0x1.e89ce03cbd19cp-227, 0x1.0a22f098dc89ap-988, 0.0, 0.0,
     0.0, 0.0, 0x1.a8197d76c44c5p-221, 0x1.b79dfe29af023p-503, 0.0,
     0x1.c58810af3d1d2p-765, 0.0, 0.0, 0x1.869443440cd26p-702, 0x1.0e1f28b760bd4p-147,
     0x1.57ae8d4118f96p-1010, 0.0, 0x1.255e5ad8ed2bdp-972, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b646bd3aebe4fp-239, 0.0, 0.0, 0.0, 0x1.4762dabd74d29p-719,
     0x1.746e0dd4de6efp-79, 0.0, 0.0, 0x1.264621064735cp-459, 0x1.012c580423ad5p-134,
     0.0, 0x1.aa444bdbb29f5p-1012, 0.0, 0x1.26688e0e8848ap-625,
     0x1.787f68ff4f65ep-885, 0.0, 0x1.a1bc47da861fcp-626, 0x1.186f89bef0e68p-238, 0.0,
     0.0, 0.0, 0.0, 0x1.f8109260c2597p-429, 0.0, 0x1.1c36ee08c9d8fp-757, 0.0, 0.0,
     0x1.abb5e1ac47702p-39, 0x1.2254936a3c7e9p-327, 0.0, 0x1.adc0d5baf1941p-975,
     0x1.01c02a0395da6p-196, 0.0, 0.0, 0x1.d8e074e644029p-656, 0x1.61e475eba3edap-791,
     0x1.42f5344e1a60ap-799, 0.0, 0x1.8f24654b884ebp-190, 0x1.bfb63fc0bc16bp-259,
     0x1.212bab99ab34ap-572, 0.0, 0x1.9fd574e73027cp-1022, 0x1.42650a4b3bdfap-885,
     0.0, 0x1.2001a0e1224d5p-639, 0x1.75d7f8e0d6d35p-921, 0.0, 0x1.6528baba1801p-573,
     0.0, 0.0, 0x1.be342e9fd31b8p-140, 0x1.cb1666f09513bp-355, 0.0, 0.0,
     0x1.dc7c427b675f2p-786, 0x1.9197e6ab27688p-651, 0.0, 0x1.77d291f6fc8d9p-768,
     0x1.f213e57f71763p-926, 0.0, 0.0, 0x1.4185f66d247e6p-108, 0x1.b3dd9a7fa519cp-95,
     0.0, 0.0, 0x1.04cb1302a802p-371, 0.0, 0.0, 0x1.78427c8a80249p-481,
     0x1.1fbef08d5b51cp-987, 0x1.7a4cec1cd6f1cp-871, 0x1.b3154e8501963p-232,
     0x1.5b4a9bfeac526p-484, 0x1.e64438079dffdp-634, 0x1.030218e3760e6p-413, 0.0,
     0x1.e55355a814feep-904, 0x1.7a41c3d9936b7p-717, 0x1.d2e14469f422fp-496,
     0x1.c18c15aee47dp-480, 0.0, 0x1.c2c108294ef76p-795, 0x1.545f86f8bd7d9p-294, 0.0,
     0.0, 0x1.6865d48b75d7ap-960, 0x1.e8fc0246c8203p-943, 0x1.9dba8040407e8p-123, 0.0,
     0.0, 0x1.2e3bff8316b06p-50, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d9147ccdfe31dp-806,
     0.0, 0.0, 0.0, 0x1.5262808883cfbp-887, 0x1.dd084dabf8c9dp-653, 0.0,
     0x1.db438570caef9p-415, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f4c8342296502p-390,
     0.0, 0.0, 0x1.81c348d364b63p-643, 0x1.d2ce186eb36bcp-564, 0.0, 0.0, 0.0, 0.0,
     0x1.55acd71a235d8p-245, 0x1.abf1832217d6bp-207, 0x1.1466377ca832ep-711,
     0x1.25087dd593768p-902, 0x1.07ecfa87ee8b3p-677, 0.0, 0.0, 0x1.32deb53b3a16dp-800,
     0.0, 0x1.9b86e50519d1ap-25, 0x1.1baafd06c3ebep-816, 0x1.09ee7e039555dp-347, 0.0,
     0.0, 0.0, 0x1.69a684e434b8bp-900, 0x1.eda820dfa670bp-118, 0.0,
     0x1.d8e9f7478f6a4p-713, 0.0, 0x1.d46ef6098deabp-285, 0.0, 0x1.48b7e1e4ea441p-871,
     0.0, 0x1.89020d2ee7361p-733, 0x1.483a4f8644b9bp-166, 0.0, 0.0,
     0x1.fc977a0b7ab1p-109, 0x1.d16ee6d7c8805p-79, 0.0, 0.0, 0x1.430256b0f0befp-741,
     0x1.6bbc42d04b2fcp-940, 0.0, 0x1.74b45fcc58513p-490, 0x1.038dc91fed4e1p-196, 0.0,
     0.0, 0.0, 0.0, 0x1.6cf13aea9bb4fp-856, 0x1.d55a9ce40a8c3p-637, 0.0,
     0x1.74fd88d6e65eap-115, 0.0, 0x1.f8e62d2db57c5p-397, 0x1.196775d66e821p-530,
     0x1.0ef23bb9bec67p-815, 0x1.63058e4a18b5bp-330, 0.0, 0.0, 0.0,
     0x1.2ea591926cce6p-332, 0x1.695948b82dd29p-99, 0x1.13db1aa39156cp-619,
     0x1.407eeaa42e42p-617, 0.0, 0x1.d01d0426872a8p-747, 0.0, 0.0, 0.0, 0.0,
     0x1.1d766e8b3b1d4p-249, 0x1.88827716f3ef6p-243, 0x1.53ac65ff60426p-762, 0.0,
     0x1.53adf9fefe1cfp-758, 0.0, 0x1.81bf2e22c7925p-200, 0.0, 0.0,
     0x1.caaacc9a7e1eap-247, 0x1.7624048255a92p-966, 0.0, 0.0, 0x1.45d13a2cb465p-1003,
     0.0, 0.0, 0.0, 0x1.e5023057dd23cp-83, 0.0, 0x1.74db051b699c3p-588,
     0x1.83c091c4af40bp-953, 0.0, 0x1.1e842018ea787p-337, 0x1.220e7abfba81ap-154, 0.0,
     0x1.38dadcf295b94p-382, 0.0, 0x1.b1c82953636dfp-918, 0x1.88553727a5bd5p-580,
     0x1.923daf1901901p-702, 0x1.42299aa80b533p-394, 0x1.16e8d59c61a05p-15,
     0x1.64c6a33808a9fp-1007, 0.0, 0.0, 0.0, 0.0, 0x1.ec542489321edp-447, 0.0,
     0x1.6d6e1b45ecc2ap-208, 0.0, 0.0, 0.0, 0x1.639f8d12adcccp-126,
     0x1.04b817fbf5658p-256, 0x1.1c2760240118ep-907, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.307a2f4c942b1p-744, 0.0, 0.0
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
            tmp1 = Sleef_finz_log10d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log10d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
