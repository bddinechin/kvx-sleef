/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_erfcd1_u15purecfma.c --function \
 *     Sleef_erfcd1_u15purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.93d0be8f74d4cp-268, 0x1.3edec6c89be1dp-401, 0x1.d69418e19a81ep-540,
     0x1.01ce01714257p-7, 0x1.7844e7b7d2e72p-855, 0x1.fb8cfb86e079p-644, 0.0, 0.0,
     0x1.20a35b17922b1p-91, 0x1.4c88a3283f4c9p-683, 0x1.af52ff1638fe3p-533,
     0x1.7e2cd73aabad9p-337, 0x1.d7d5e3960e98cp-476, 0x1.322babd481a78p-473,
     0x1.d1b3f32045641p-489, 0.0, 0x1.b80f673d7936fp-968, 0x1.9031721357a38p-321,
     0x1.b3733a5efd5e8p-132, 0x1.a13bb3c4c783ap-636, 0.0, 0x1.0dc62b8dc11dcp-895,
     0x1.4ec5d37087204p-173, 0.0, 0x1.e0b34aa812282p-25, 0x1.3a7dd5db08f47p-169,
     0x1.eb73880e8ba68p-611, 0x1.d104e5bb21157p-829, 0x1.a69a7987d6e3bp-216, 0.0,
     0x1.4b08e9e35db83p-754, 0x1.8d3d3c278f3a2p-151, 0x1.0ee4816a6c497p-211, 0.0, 0.0,
     0x1.70ddf45acffap-880, 0x1.455850dc326dap-182, 0x1.5a7df5c4904d8p-873,
     0x1.2b63928999175p-359, 0x1.a612bbeec80b5p-188, 0.0, 0x1.0b9a61bc5921dp-836,
     0x1.be9fa73850508p-333, 0x1.b51ebdbfebc99p-412, 0.0, 0.0, 0.0,
     0x1.aa62949df9a71p-763, 0x1.b3824a7efe92ep-240, 0.0, 0.0, 0.0,
     0x1.d8ef18a8d374fp-599, 0.0, 0.0, 0.0, 0.0, 0x1.4ae5cc3002e8bp-148,
     0x1.fbbee5a48ca44p-635, 0.0, 0x1.4426e5c363e4p-350, 0x1.799b52f018908p-915, 0.0,
     0.0, 0.0, 0x1.3436c8b200196p-801, 0.0, 0.0, 0x1.a0d13b3a960d6p-840,
     0x1.9f7eebac7e3eap-382, 0x1.df4f8fb3c0a65p-439, 0.0, 0x1.c7d7093d24c69p-886, 0.0,
     0x1.b63d0901b255p-713, 0x1.0910c5e969b1p-454, 0x1.8fa38f36cbea5p-393, 0.0,
     0x1.f2c2578141718p-910, 0.0, 0x1.fe04c4b0ef85dp-63, 0x1.287c3f948c054p-803,
     0x1.675331c24a79cp-476, 0x1.6aab9bfee15b5p-343, 0.0, 0x1.2bc6b24e1247fp-993,
     0x1.3f991706af2dep-757, 0x1.75eb859e8bd43p-57, 0.0, 0.0, 0x1.4b40bc40dfbdbp-506,
     0x1.fa34f0ad535e2p-15, 0.0, 0.0, 0.0, 0.0, 0x1.c75efef984059p-744, 0.0,
     0x1.35eefb586f756p-788, 0.0, 0.0, 0x1.c83eb193d317bp-631, 0x1.cb8ed6e8fe292p-671,
     0x1.515eebace0991p-948, 0.0, 0.0, 0x1.84cca9d6ac2efp-610, 0x1.c3a86d3c78037p-207,
     0.0, 0.0, 0x1.a4f884b46ef0dp-31, 0.0, 0.0, 0.0, 0x1.e3a13529278a3p-896,
     0x1.17aa18eaa02f6p-271, 0x1.dfbd82738b592p-593, 0x1.6e083c32826cfp-176, 0.0,
     0x1.fae7573664afbp-492, 0x1.0888e7b9983a8p-834, 0x1.c2bc0cd604c99p-574, 0.0, 0.0,
     0.0, 0.0, 0x1.7aca82af85cb9p-628, 0x1.3b638177b2a41p-349, 0.0,
     0x1.1a41ff9cc0a2bp-543, 0.0, 0x1.9c4d81e6bef68p-166, 0x1.2c92491d9ab0dp-680,
     0x1.58468e9763966p-843, 0.0, 0x1.5cce4bdbd7039p-729, 0x1.96ae62710dab8p-645, 0.0,
     0.0, 0.0, 0.0, 0x1.078fd869a4cfp-64, 0.0, 0x1.d60460e043c0bp-284, 0.0,
     0x1.0ea9d2ea75ccp-557, 0.0, 0.0, 0.0, 0x1.89c979e1af7e6p-467, 0.0,
     0x1.690ad6e121816p-752, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.edddef1b62d18p-133,
     0x1.9f53c932719dep-153, 0.0, 0x1.4af46082cc3a1p-764, 0x1.03b0720e3bfb2p-610, 0.0,
     0x1.8d08327b6c1edp-900, 0x1.242bc6c3339f9p-921, 0.0, 0.0, 0.0,
     0x1.3a637c9e9ff66p-909, 0x1.91af5e946401ap-737, 0x1.ba267da192aecp-798,
     0x1.bfebbda1d4cffp-831, 0x1.418e2bd30f638p-191, 0.0, 0x1.cbf4983e6ddadp-469,
     0x1.a897e4e3accfdp-195, 0x1.128ba406a6694p-853, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.01a2ffc6b4ee9p-214, 0x1.61cf657cf9f78p-285, 0.0, 0x1.228efbc38d125p-385,
     0x1.48ee253613de8p-271, 0x1.f18bdcc7870a1p-325, 0.0, 0.0, 0x1.2fe34f40fa5f5p-966,
     0.0, 0x1.cb49f31de3adep-964, 0x1.b6539391ccaf3p-932, 0x1.218f1ceb95ac7p-214, 0.0,
     0.0, 0x1.d342aec99fe87p-47, 0x1.402519b64599ap-146, 0x1.2304e81316502p-654, 0.0,
     0x1.578f61aed970bp-684, 0x1.cdab5b876c0f6p-26, 0x1.955f6de730728p-235, 0.0, 0.0,
     0x1.0bddc43bd44d3p-312, 0.0, 0.0, 0x1.8c0d9c0a667d2p-232, 0x1.3732999e8a59p-503,
     0x1.485571b632e89p-617, 0x1.93633be6c4c52p-397, 0x1.9bf65e2333325p-20, 0.0,
     0x1.b1c8000517c2dp-746, 0x1.f8b24a3e22817p-654, 0.0, 0.0, 0.0, 0.0,
     0x1.33ea2547b4868p-255, 0x1.6db47ce909801p-387, 0x1.2c21924425cbp-752, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.31edaef1d531cp-433, 0x1.232c5f5f2f3f9p-689,
     0x1.471aae93eea3ep-488, 0.0, 0.0, 0.0, 0x1.cbbf50c04813ep-95,
     0x1.2a0078ad43722p-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bba39cb273cecp-151,
     0.0, 0.0, 0x1.21b8ceefcbca7p-306, 0x1.45a207e58c6a5p-996, 0x1.5b51d24cdf42p-1005,
     0x1.6e62d38eba66bp-614, 0.0, 0x1.37be8789c25b3p-748, 0.0, 0.0,
     0x1.cc419f34bce85p-433, 0x1.edd45fa014b33p-34, 0.0, 0x1.2639e782e3bfdp-315, 0.0,
     0x1.7d474e5453952p-747, 0x1.e4a3b5a0b20fp-197, 0.0, 0x1.af1d633ada01cp-87, 0.0,
     0x1.a6ff4ed741396p-215, 0x1.692c0eac4af32p-352, 0.0, 0x1.5127e303d860dp-939, 0.0,
     0.0, 0x1.0b9e176a55e91p-654, 0.0, 0.0, 0x1.d04c8abfacabbp-827, 0.0,
     0x1.bcf88c86f09d8p-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1b61655e2e29bp-439,
     0.0, 0x1.d76f7a1adb8fep-327, 0x1.3fb0e974fd9e3p-503, 0.0, 0.0,
     0x1.93421718550c8p-236, 0.0, 0x1.006ed28398037p-618, 0.0, 0x1.79c2ef5e381e5p-885,
     0.0, 0x1.584a2d7122facp-940, 0x1.9993066c900dbp-545, 0.0, 0.0, 0.0,
     0x1.de51e343a91d4p-265, 0.0, 0x1.7414d3b00c666p-508, 0.0, 0.0, 0.0,
     0x1.ecb2b76944d46p-916, 0x1.fdbaf07701845p-305, 0x1.63a04aa8d5f58p-873,
     0x1.a092d9da63038p-758, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae95ca5c18c32p-831, 0.0,
     0.0, 0.0, 0x1.2264fd3c7da67p-263, 0.0, 0x1.8f56a02b94bb1p-164,
     0x1.f6ce63cdc302cp-770, 0x1.853cf0e6e1bc4p-932, 0.0, 0.0, 0.0,
     0x1.2ff1d7c19f14fp-289, 0x1.9831c4eca2049p-887, 0x1.656ea81d4cf2bp-1019, 0.0,
     0x1.bc0e7ad8c881dp-343, 0x1.b89c5eb8bc957p-750, 0x1.cb3ff4e56d5f8p-64,
     0x1.5bf6771f7aecep-640, 0x1.9d7d518c64357p-903, 0x1.51c8ab30d1a54p-85,
     0x1.8f5f2664db705p-581, 0x1.5780385e17e11p-537, 0.0, 0x1.96bcaaeb49077p-736,
     0x1.fb5e811896d51p-749, 0.0, 0.0, 0x1.7e92babdee0f4p-913, 0x1.36bd475591c28p-666,
     0.0, 0x1.cc2d7c3a7fd07p-676, 0x1.8e489f1cc3a5bp-53, 0x1.cc07b3d02c592p-869,
     0x1.d0595327ddcfp-529, 0x1.d2c79ab3a77adp-818, 0x1.df414742dd683p-863,
     0x1.750f32519530bp-240, 0x1.c56818e4ca22cp-720, 0x1.2b0afff25fe7cp-647,
     0x1.705d2be945933p-313, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4c6b0a4834359p-776,
     0.0, 0.0, 0.0, 0x1.f37053de19e4p-922, 0x1.2d58ab448a945p-210,
     0x1.bb906bcdb7f62p-194, 0.0, 0x1.9d0e900cd7ef1p-212, 0.0, 0x1.7f9a5324e8a9cp-164,
     0.0, 0.0, 0x1.3c6e56bf7ff78p-34, 0x1.095fdb601ab8p-423, 0x1.77a05916eba2ap-453,
     0.0, 0x1.6067f16925bebp-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6808442eab2f6p-490, 0.0, 0x1.6e7ac9d44e13fp-707, 0x1.fed1f27542f4ep-65, 0.0,
     0x1.91e486092d478p-402, 0x1.234cb91336652p-484, 0.0, 0.0, 0.0,
     0x1.6ad6f8d69b9bp-157, 0x1.904ae0a826491p-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a043039630b53p-646, 0x1.e0b3b440e8027p-321, 0x1.f997b091dcc46p-130,
     0x1.73504b07be17ep-169, 0.0, 0x1.cd06d8cede9f3p-330, 0x1.a7d60922f3d57p-872, 0.0,
     0x1.358e68b91154ep-565, 0.0, 0.0, 0x1.b410a14466ee9p-955, 0x1.47bfd1dfc595ep-90,
     0.0, 0.0, 0.0, 0x1.46e7bceaf005dp-640, 0.0, 0x1.22cda308fa376p-97,
     0x1.01c00c8e176c5p-327, 0x1.0be9390c2bcc1p-3, 0.0, 0x1.fbdcb0f03b85cp-690, 0.0,
     0.0, 0x1.661d4418900c7p-283, 0.0, 0.0, 0x1.37583ea6be14ap-505, 0.0,
     0x1.84b3ba72836fp-264, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.145346dfcd5f6p-2,
     0x1.68c31fc84e5adp-721, 0.0, 0x1.1b3537916776dp-975, 0.0, 0.0,
     0x1.32139ecd56e42p-235, 0x1.a477cf78fe8fap-129, 0x1.f12869b6bfcacp-472, 0.0,
     0x1.ea7cb8cef8b9bp-887, 0x1.75c5a8992cd84p-775, 0.0, 0.0, 0x1.37a684d3eeb16p-189,
     0x1.96cf2e4339111p-953, 0.0, 0.0, 0x1.a4b4144422f11p-299, 0x1.232a774731991p-244,
     0x1.c4b95cc422854p-165, 0.0, 0.0, 0.0, 0.0, 0x1.5fbc04ce3487ap-536,
     0x1.433be9011f2b9p-464, 0.0, 0x1.1cc874c450283p-463, 0.0, 0.0,
     0x1.b63d40eddda43p-341, 0.0, 0x1.d33a99b261ee2p-516, 0x1.4c82fa78fbb61p-303,
     0x1.30dc2589a85bcp-688, 0.0, 0x1.1e7cae2c7d402p-46, 0.0, 0.0,
     0x1.b4cd712d0d2ecp-127, 0x1.12587ac3035eap-239, 0x1.af6d26530c28ep-796, 0.0,
     0x1.b0975e53496e8p-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c1f2d8efddfedp-680,
     0x1.7a5145b07832dp-928, 0x1.0646e4ee3e5c9p-253, 0.0, 0.0, 0x1.2b84ed12b6fefp-258,
     0.0, 0.0, 0.0, 0x1.20e6b14f0a677p-594, 0x1.b568749255599p-881,
     0x1.4e9a934022e7ap-197, 0x1.066416e3ca607p-326, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0c58819f3efdbp-948, 0x1.2f6b8a7730bb9p-488, 0x1.f31adca323edcp-519, 0.0, 0.0,
     0.0, 0.0, 0x1.4c3e8cbe91bcep-268, 0x1.c94bcfcadfffap-956, 0.0,
     0x1.8a84d9276149p-713, 0x1.25a1b9dbf9e55p-493, 0x1.bdc4cb2a15cd7p-716,
     0x1.4f8aec6a401fdp-73, 0.0, 0.0, 0x1.eca2ef0b080a7p-6, 0x1.295fce01b3586p-819,
     0.0, 0.0, 0x1.97d79863858ap-526, 0x1.17b4c3700a91ap-864, 0x1.584e8c94c8c02p-739,
     0.0, 0.0, 0x1.4fffb1ddb8b94p-846, 0.0, 0.0, 0.0, 0x1.d72b3987aec8cp-503, 0.0,
     0.0, 0.0, 0.0, 0x1.4d4bf2ea1794dp-464, 0.0, 0x1.3798a66fcf235p-864, 0.0,
     0x1.eba86387a5613p-92, 0x1.b7b15ebb9edfp-541, 0x1.c70ac54f234aep-660, 0.0,
     0x1.4cce38051a375p-452, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.224f2743c1299p-347, 0.0,
     0.0, 0x1.604f589042f52p-31, 0x1.fbf1280c7c372p-739, 0.0, 0x1.72cd67da00b0fp-421,
     0.0, 0.0, 0.0, 0x1.66799c3a3db5bp-891, 0.0, 0.0, 0.0, 0x1.6e674962ba34cp-615,
     0.0, 0x1.3dec94d95b448p-218, 0.0, 0x1.21cf7a34e6befp-785, 0x1.271a808ddc10cp-793,
     0.0, 0x1.d08798bc4765ep-943, 0x1.dae5d957bad0cp-104, 0x1.ced198d78baffp-919,
     0x1.cae11a2d96de4p-24, 0x1.bd025b129e92ep-397, 0.0, 0x1.c27ba66e240aap-892,
     0x1.23fc6a716975ap-650, 0x1.c529e7601bab7p-1014, 0.0, 0.0, 0.0,
     0x1.46d6425e353c6p-55, 0x1.d01b83723356bp-998, 0x1.742bd8b92f405p-702,
     0x1.7787b32173dd1p-801, 0x1.4f4fe74bbad65p-844, 0x1.14febee5f7f09p-944, 0.0,
     0x1.ae24a4c851c7ap-60, 0x1.7c7e54f3d2d5p-160, 0.0, 0.0, 0x1.01804a010f984p-275,
     0x1.39da77b9f97bbp-404, 0.0, 0.0, 0.0, 0x1.30b931b49889bp-281,
     0x1.d2dd30fb6784ep-920, 0x1.4ec594c885b8ep-301, 0.0, 0.0, 0.0,
     0x1.c30d27f41c924p-82, 0.0, 0x1.a2d0c1a965b28p-493, 0x1.c8c1dbf99fd0cp-897,
     0x1.73e58e43fb459p-161, 0.0, 0.0, 0x1.8cec23db4f8cp-929, 0x1.30fbf11bdf8dep-45,
     0.0, 0x1.cef80b71cbad7p-524, 0x1.72e38ac355891p-383, 0x1.259a5cd1e05f5p-760, 0.0,
     0.0, 0.0, 0x1.7817758a064b2p-897, 0.0, 0x1.e6c57e4c86464p-345, 0.0,
     0x1.6364f12aec91fp-451, 0x1.7df0f9d277614p-967, 0.0, 0.0, 0x1.88ded05b3f3e4p-468,
     0x1.f88bdb334d5bp-175, 0x1.e07984fb2afecp-27, 0.0, 0x1.78de32b26d8c4p-63, 0.0,
     0.0, 0x1.2488bba67bee4p-486, 0.0, 0.0, 0.0, 0x1.ee41357a20726p-883,
     0x1.ad41b1f6a6d26p-945, 0x1.c84feafeefe4dp-740, 0x1.c652a5f81fdfbp-332,
     0x1.7dbac01f3c9c7p-459, 0.0, 0.0, 0.0, 0x1.7787e062b09f7p-412,
     0x1.f0ae316b388cbp-799, 0.0, 0.0, 0.0, 0.0, 0x1.26676361e2d03p-905, 0.0, 0.0,
     0x1.37e21cb1b814bp-295, 0x1.b8122fafb6ca2p-150, 0x1.3ea070a2319a9p-93, 0.0, 0.0,
     0x1.51e0a3e2f88adp-942, 0.0, 0.0, 0.0, 0x1.c4770d4f78818p-712, 0.0, 0.0, 0.0,
     0x1.4e0d3a306c0b6p-836, 0x1.e251973425075p-981, 0x1.da9bc68f80f58p-248, 0.0,
     0x1.1731e3dc47cf6p-704, 0x1.7947f487894p-737, 0.0, 0.0, 0x1.4e583eedc263dp-114,
     0.0, 0x1.2ebf3d7394ba6p-949, 0x1.2621ff054afb9p-260, 0.0, 0.0,
     0x1.624c45fbb10ccp-133, 0x1.367e3eb870e3ep-202, 0x1.8ce4fb9f6012ep-797, 0.0,
     0x1.522ab995370c3p-1004, 0x1.6991f20d05e7bp-355, 0x1.8d850cdf2807cp-1001,
     0x1.101588ffa2a9fp-322, 0x1.1dfbbeaaf60e7p-244, 0x1.d96eb8571eef8p-172, 0.0,
     0x1.31172befc0d7ep-817, 0x1.d4b90349baacp-182, 0x1.42fcc518f2c04p-284,
     0x1.c6c3b978a3033p-880, 0.0, 0x1.2678794e7d876p-966, 0.0, 0.0,
     0x1.61bbc403f2429p-379, 0x1.8376358b4ab76p-778, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.03a2fc571cabap-300, 0.0, 0x1.25c47b567865fp-470, 0.0, 0.0,
     0x1.35acf46b3e9f9p-369, 0.0, 0x1.eaacf217946b5p-286, 0x1.9e10f1ce822b4p-443, 0.0,
     0x1.b3e80e87064b6p-7, 0x1.b4e2e6f674ecp-368, 0x1.784524246505ap-729,
     0x1.f89726c53b633p-657, 0x1.fe77013196ea4p-81, 0x1.19593f74c34a4p-941,
     0x1.033c9d71ea173p-857, 0x1.e7eb03dbba84p-326, 0x1.2b58c68913f6dp-390, 0.0,
     0x1.ae943195f136fp-68, 0x1.6bb486fcabe2dp-257, 0x1.a1231ad75c5d8p-579,
     0x1.69d13a368cc45p-960, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.77f48ba7e83ap-200, 0.0, 0.0,
     0x1.769e94cf22f96p-606, 0.0, 0x1.6ba7bb4838661p-840, 0.0, 0.0,
     0x1.55bb02157313bp-549, 0x1.1122220707673p-1013, 0.0, 0x1.3274d677110cap-272,
     0x1.afabcffceacb8p-283, 0x1.7a79b9f6fc65fp-690, 0.0, 0.0, 0.0,
     0x1.687843e30b7c8p-940, 0x1.929ebc7dea8d4p-496, 0x1.bc67ab5ea16cfp-850,
     0x1.c18855162c2dp-5, 0x1.4e14bd1093419p-454, 0.0, 0x1.f0e260397854ep-789,
     0x1.3c7219ae7a12ep-342, 0.0, 0x1.423147c17defap-408, 0.0, 0.0,
     0x1.e8242ac8c5599p-277, 0.0, 0x1.b55c229e947bap-85, 0x1.a9b98f3194251p-495, 0.0,
     0.0, 0x1.386ea3569fb6fp-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0627dbdb7e42cp-825,
     0x1.e8d41caf57255p-189, 0x1.8b85c4799a712p-447, 0.0, 0x1.dd36d99a23dedp-517, 0.0,
     0.0, 0x1.2330bdb1facc1p-609, 0x1.1da32b6575693p-868, 0.0, 0.0,
     0x1.bce9cbc424abbp-534, 0.0, 0.0, 0.0, 0x1.161386bee2acap-187, 0.0,
     0x1.b1fb7b21cb5f9p-517, 0.0, 0x1.c4c0dc18d1497p-458, 0x1.668ad3410443bp-636,
     0x1.46b96af30c7efp-577, 0.0, 0.0, 0.0, 0x1.6fe4672cdfa6dp-698,
     0x1.33a19388d7271p-488, 0x1.f06ccdacad541p-1005, 0x1.ddb0a5983be8ep-247,
     0x1.1f0ef51bb2ed7p-473, 0.0, 0.0, 0x1.784e4ad70a1d4p-585, 0x1.2b03dc0041fd1p-532,
     0x1.8e6ce01c5cfd2p-273, 0.0, 0x1.8fe8589c5fd0cp-1016, 0.0,
     0x1.81d74ae62fccap-844, 0x1.957fbb160d27ep-700, 0.0, 0x1.acc8ff81ed98fp-772,
     0x1.a424be1a897b9p-653, 0.0, 0.0, 0.0, 0x1.d6b46ab5e981fp-71, 0.0,
     0x1.efece995ea35p-457, 0.0, 0x1.1934c9c7a26fbp-895, 0.0, 0.0,
     0x1.40a9d980deb65p-730, 0.0, 0.0, 0x1.32e8c61db950fp-441, 0.0,
     0x1.fae6319a2898dp-989, 0x1.3499d1ad33a24p-871, 0x1.ecc48148458e6p-444,
     0x1.3eedd527120f3p-546, 0x1.9e6395e4640afp-747, 0.0, 0x1.88429277ad8c8p-164, 0.0,
     0x1.5c9abe4407dc4p-594, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a61b03e29870dp-694,
     0x1.9751f4e0f2bccp-909, 0x1.eab00d97b8e8cp-723, 0.0, 0x1.b5c1f09f59054p-240, 0.0,
     0x1.b9a47d8bc2071p-452, 0x1.a7bbb49e900a9p-160, 0.0, 0x1.494aa427a4948p-16, 0.0,
     0.0, 0x1.c9e1337939399p-479, 0.0, 0x1.b1bd45af9ea55p-321, 0.0,
     0x1.4ff49a5b6c3efp-494, 0.0, 0.0, 0.0, 0.0, 0x1.6fcfd74ec5e92p-879,
     0x1.49dd4a5e85b29p-263, 0x1.1f69250c379fep-765, 0.0, 0.0, 0.0,
     0x1.f80fd5adccbfap-593, 0x1.7cd07d973176ap-185, 0x1.06fbed6ea57a6p-374,
     0x1.74d210f9c56cfp-1017, 0.0, 0.0, 0.0, 0x1.0bfe4e876589ep-301,
     0x1.f0a48cd887b1dp-515, 0.0, 0.0, 0x1.8ffee141106fbp-907, 0x1.7ac17a947d9c4p-353,
     0.0, 0.0, 0x1.2231dba7fd613p-660, 0.0, 0x1.5f699ab86744p-148, 0.0,
     0x1.98c81569c1808p-67, 0.0, 0x1.757923bd442fbp-807, 0x1.ea49813b482f5p-865,
     0x1.2f4362507315bp-108, 0.0, 0.0, 0x1.42879a58c140bp-611, 0.0,
     0x1.d5c32e2cc1114p-809, 0.0, 0x1p0, 0x1.bec6a32aef4fbp-859,
     0x1.ee12dc17e5fbbp-871, 0.0, 0.0, 0.0, 0x1.45b1386330b63p-824,
     0x1.65b81a56937d1p-205, 0x1.2419221950e04p-523, 0.0, 0.0, 0x1.2121e89ef8a68p-60,
     0.0, 0x1.11d64797a99bbp-183, 0.0, 0x1.3be2495b2ed88p-40, 0x1.ef100100a60a6p-863,
     0x1.a7cc5e1f6e5d2p-405, 0x1.5a1d6f44309abp-943, 0.0, 0.0, 0.0,
     0x1.624c6deaac205p-830, 0.0, 0x1.3254612931a71p-891, 0.0, 0x1.4a751bf2bc0ecp-185,
     0x1.27f5ffcce19f8p-275, 0x1.4c41b476aef75p-115, 0.0, 0x1.3ece7fddff852p-85, 0.0,
     0.0, 0.0, 0x1.88f902bcda57cp-665, 0x1.3c0653ad0e39fp-818, 0.0, 0.0,
     0x1.783dd9f753686p-848, 0x1.d7fc6b197c31ep-677, 0.0, 0.0, 0.0,
     0x1.d89939b5b681bp-884, 0.0, 0x1.d4ad453098475p-197, 0x1.888c60a13e23ap-71, 0.0,
     0.0, 0.0, 0x1.ca75c9b382e1ep-757, 0x1.87dfff66d7525p-704, 0x1.cddbcf731e564p-226,
     0x1.38159ec7fb562p-669, 0x1.38a973fdf442ap-239, 0x1.41f55e2e54532p-690, 0.0, 0.0,
     0x1.5a898ed63514ap-57, 0.0, 0.0, 0x1.f1d52356390e2p-703, 0x1.e8dbceeefd869p-74,
     0.0, 0x1.4099f82fb8e03p-731, 0.0, 0x1.d9867c1604dcep-985, 0x1.f73b3bfb1032dp-229,
     0.0, 0x1.1802a04cdc6aep-737, 0x1.8c006040f6ba9p-849, 0x1.881ccf475801bp-625, 0.0,
     0x1.d94369adde527p-255, 0.0, 0.0, 0.0, 0x1.514ec5ab7889ap-720, 0.0, 0.0, 0.0,
     0x1.6ef0e53825cb5p-32
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
            tmp1 = Sleef_erfcd1_u15purecfma(tmp0);
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
    printf("Sleef_erfcd1_u15purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_erfcd1_u15purecfma bench acc %la\n", global_bench_acc);
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
