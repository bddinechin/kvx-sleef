/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log1pd2_u10avx2128.c --function \
 *     Sleef_finz_log1pd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.017636361a26fp-732, 0x1.6f70636c9229cp-628, 0x1.86e3fce967792p-18, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a1dc2c16f9a48p-973, 0.0, 0.0, 0.0, 0.0,
     0x1.92fc04265d98cp-286, 0x1.1fa73bc11a2bbp-454, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5381d59db2877p-24, 0x1.189d7a6af063ep-44, 0x1.a08b18a42c9c9p-41, 0.0, 0.0,
     0.0, 0x1.315098c6102c6p-848, 0x1.d5b2ca5f4945ap-412, 0.0, 0.0,
     0x1.15184286ac30ap-824, 0x1.795f1a2f067eep-436, 0.0, 0x1.cee814180babdp-716, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9888da24bb655p-459, 0.0,
     0x1.12d7a7d303043p-316, 0x1.95e99974d3aacp-691, 0x1.b188e26ff1a51p-875,
     0x1.34239264a622dp-770, 0.0, 0x1.f0964fa1d0afcp-207, 0x1.935f4603d102ap-195,
     0x1.fc1d89e65a9c1p-157, 0.0, 0x1.1543bbc91ea32p-636, 0x1.df8bd74fd17e3p-358, 0.0,
     0x1.ee2c5ba812d74p-368, 0.0, 0x1.b2d2764e96d1bp-115, 0x1.229426d2b7417p-426, 0.0,
     0.0, 0x1.a0046c7d83c6p-458, 0.0, 0x1.6c2f15721383bp-417, 0.0,
     0x1.d7720da166fddp-809, 0.0, 0x1.7bf0a37663e1ap-350, 0.0, 0.0,
     0x1.453dcb221152p-24, 0x1.ce065bd79ae0bp-334, 0.0, 0.0, 0.0,
     0x1.8f5049c9909dep-830, 0.0, 0.0, 0x1.4c2421e9c6e3dp-890, 0.0, 0.0,
     0x1.a03ad0b492804p-550, 0x1.adefe2a8f66f2p-580, 0.0, 0x1.68dd815636a28p-224,
     0x1.4cba92ea99b28p-548, 0.0, 0x1.a883990bbdde5p-121, 0.0, 0.0, 0.0,
     0x1.3c69538f5f8bdp-383, 0.0, 0x1.e63a64454cc1bp-601, 0x1.aa7fce5e3b855p-925, 0.0,
     0.0, 0x1.c1078a49d7ec3p-471, 0.0, 0x1.73fb7403e7b81p-596, 0x1.24823bf759076p-945,
     0.0, 0x1.1d303959938d4p-702, 0x1.fd2522e8b3fc7p-684, 0x1.d441f63c2259ep-713, 0.0,
     0.0, 0.0, 0x1.18ccef22365bp-226, 0x1.4b00be2945914p-844, 0.0, 0.0,
     0x1.21d64dbdeda87p-378, 0.0, 0.0, 0.0, 0.0, 0x1.7a6a84509a4d9p-345,
     0x1.a10ef0187b9f6p-674, 0.0, 0.0, 0x1.5e8baee563512p-1009,
     0x1.5d366c3f3918ep-406, 0x1.10ea7dde3ed69p-516, 0.0, 0x1.7684de452de2bp-791,
     0x1.aad6e8439256bp-171, 0.0, 0.0, 0.0, 0x1.cfb6886c50fe4p-505,
     0x1.406652217e994p-835, 0.0, 0.0, 0x1.042e8fe0bbe92p-709, 0.0,
     0x1.838a3993d29d4p-1, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eb88c234b2558p-802,
     0x1.e28e16e10f4edp-1002, 0x1.7467c24560b47p-798, 0x1.0b71d97711a0ap-846, 0.0,
     0x1.a9f85581e6c73p-214, 0x1.c963c0d4c7a81p-416, 0x1.5064c6bb4e516p-380, 0.0,
     0x1.e9334904023e8p-1015, 0.0, 0x1.90a843137b008p-69, 0.0, 0x1.5032c7bccfd71p-804,
     0.0, 0x1.05939725e7bdcp-668, 0.0, 0.0, 0x1.9df2095f37cfp-194,
     0x1.5f0f77d11426fp-553, 0x1.4f5be9fb848c8p-388, 0x1.2f39ec5f8aebbp-379, 0.0,
     0x1.91f6502ef285dp-179, 0x1.666d5128d5668p-314, 0.0, 0x1.88154d32004c6p-298,
     0x1.b55932b1b2ep-4, 0x1.c74b31b25dffep-333, 0.0, 0.0, 0x1.f56e01d5822d2p-7,
     0x1.61d84fc5aecc3p-153, 0.0, 0.0, 0x1.d56fe5fc0030bp-907, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.85c800b0836f8p-962, 0x1.d6d04e7a83fedp-1020,
     0x1.7442822963ec6p-119, 0x1.467acd7af238p-140, 0x1.917eb4b2e72c5p-874,
     0x1.7aa657b9931d7p-1020, 0.0, 0.0, 0x1.fafd0f10d601ep-5, 0.0,
     0x1.9c992393dd369p-184, 0.0, 0x1.78849501473bap-623, 0.0, 0.0,
     0x1.fdf0c227e9573p-255, 0x1.3285f10db5a5p-1021, 0.0, 0x1.35a354046c956p-369, 0.0,
     0.0, 0x1.be366a2c4b6a4p-614, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddefa454d651ap-921, 0.0, 0x1.a68fcb24ca709p-763, 0x1.46d0e4f5c83aep-608, 0.0,
     0x1.ba0557615f134p-266, 0.0, 0.0, 0x1.b94efbb6eaff5p-953, 0.0,
     0x1.902b71945a2e2p-667, 0x1.62373f8e518bdp-446, 0x1.4892ad06f3498p-173,
     0x1.ec1198c2e2377p-419, 0.0, 0x1.572982d2ceb6ep-27, 0x1.b7684a5635aebp-237, 0.0,
     0.0, 0.0, 0.0, 0x1.373f95ac83d07p-137, 0.0, 0x1.2f84c64851ebcp-269,
     0x1.193341a4d3537p-59, 0.0, 0x1.4da76c0f4f336p-156, 0.0, 0x1.be611272d7928p-493,
     0x1.d74e442078514p-157, 0x1.27c7b96d1f084p-660, 0.0, 0.0, 0x1.48e844b7be419p-359,
     0x1.8bb1e56f1a799p-954, 0.0, 0.0, 0.0, 0x1.f5f0a5718384ap-864,
     0x1.342c922a103fbp-576, 0.0, 0x1.47d405b9fde7bp-819, 0x1.f3207beede4acp-462,
     0x1.ec1c46ca7756cp-748, 0.0, 0.0, 0x1.b0e4d18545b0ap-477, 0x1.3602116c97bc5p-669,
     0x1.092fcd5c051acp-163, 0.0, 0x1.00b9f252fcad1p-623, 0x1.433c868499f93p-402, 0.0,
     0.0, 0.0, 0x1.bd16a89297bdbp-131, 0.0, 0x1.0722ca03c072dp-293, 0.0,
     0x1.b377cab943748p-160, 0x1.c154799044818p-197, 0x1.04803c1abda72p-620,
     0x1.680fec18ee57bp-603, 0.0, 0x1.b4c7d1c9b509bp-59, 0x1.6d3a302d72f55p-487,
     0x1.356baff0da8a5p-343, 0.0, 0.0, 0x1.c30bb49095d33p-749, 0.0,
     0x1.5307cc23f6f39p-858, 0x1.bb0effde8f675p-188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a79a5de50fa6p-679, 0x1.24355f2b87e3ap-767, 0.0, 0x1.b07fd4f4322cep-320, 0.0,
     0.0, 0x1.343b673d91f6cp-347, 0x1.01611cf8d55d3p-684, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.75e19bc25eccep-132, 0x1.b8cda9dfdf975p-805, 0.0, 0x1.03b0d4611c0eap-79,
     0x1.46a4bf0c3510cp-581, 0.0, 0.0, 0x1.528fe73429411p-662, 0.0,
     0x1.9c58c6c3f9daep-469, 0.0, 0.0, 0.0, 0x1.7c6b8bafe27cap-111, 0.0, 0.0,
     0x1.56ff2079d0b5ap-330, 0x1.ebf6474dafbccp-252, 0.0, 0.0, 0.0,
     0x1.e4736ed7ceee4p-972, 0x1.e6634d5ee271ep-125, 0.0, 0.0, 0.0,
     0x1.46cf2179b245dp-502, 0.0, 0.0, 0x1.b0e251ed053acp-718, 0.0,
     0x1.b3c30cba136b9p-970, 0x1.3116847774c73p-293, 0.0, 0x1.77adebda63eb3p-586,
     0x1.505080f0f0684p-495, 0.0, 0x1.81e1836fee07fp-543, 0x1.86cdfb6e55497p-403,
     0x1.cada3fe7bd509p-875, 0.0, 0x1.e1af0ca33163fp-365, 0x1.eb029d45168b5p-31,
     0x1.5e567a4eeba68p-30, 0.0, 0x1.09d07c9529b94p-492, 0.0, 0x1.719f7395380ffp-195,
     0x1.d33c39b485e06p-552, 0x1.3a6c2631ac3c6p-469, 0.0, 0x1.7ee36b6c8b077p-19,
     0x1.abcf4b92f6116p-196, 0.0, 0.0, 0x1.90dad6c96873cp-403, 0.0,
     0x1.5e80572bb9ab8p-174, 0x1.eca4c1f374cd6p-386, 0.0, 0.0, 0x1.81e9c4fe692fp-291,
     0.0, 0x1.49215cc290014p-654, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e94a1cf142171p-442, 0.0, 0x1.b91a6e9c7a7dap-716, 0x1.15f49784ab432p-230,
     0x1.0e861a34d1c46p-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd5b8b675769dp-773,
     0x1.33715f11e7299p-644, 0.0, 0x1.3ba1a68d97049p-197, 0x1.69733a269b5c8p-922, 0.0,
     0.0, 0.0, 0x1.3c507b3551bc8p-394, 0x1.d6651ebe411cfp-810, 0x1.0a8d23e10414p-301,
     0x1.4f8ebb797eb29p-109, 0x1.5208214df45a4p-485, 0x1.a2acd8e491dep-553, 0.0,
     0x1.2a5b7ad432622p-638, 0x1.7fde927ad8fa3p-402, 0x1.335acf7e74bf4p-543,
     0x1.1d79f1b32ffd8p-608, 0x1.b4d3f5729ba15p-26, 0x1.bdde77759a247p-112,
     0x1.79123f3b77d87p-234, 0x1.d564ac2614389p-857, 0.0, 0x1.7f360817bfbb8p-29, 0.0,
     0x1.d065e38b4bb67p-842, 0x1.a4bef03682c79p-954, 0.0, 0x1.1d775649bef02p-1001,
     0.0, 0x1.b9b5d2a599228p-268, 0.0, 0.0, 0x1.745b04ed09c8bp-371,
     0x1.a6004da9866f4p-932, 0x1.61f6f003bbf9fp-324, 0.0, 0.0,
     0x1.cde36f661103cp-1018, 0x1.05ddbf1f3a8e3p-817, 0.0, 0.0,
     0x1.821f89e980661p-638, 0.0, 0x1.3d1444b0b2ff6p-360, 0.0,
     0x1.16b54e50dab8bp-1018, 0x1.c8211fee839f4p-985, 0x1.23412c5f74ffep-526, 0.0,
     0.0, 0.0, 0x1.68a427ea5d89cp-392, 0x1.036a97d566c92p-311, 0x1.cac8e7cf2646bp-765,
     0.0, 0x1.ff535fe8a71b8p-504, 0x1.f02d97695b3a3p-97, 0.0, 0x1.37e94bbed640cp-769,
     0.0, 0x1.6a06e9fe6ba3ep-147, 0x1.d63938a84f779p-461, 0.0, 0x1.643c02ca43f4cp-968,
     0.0, 0.0, 0.0, 0x1.2f4b1bc8c2626p-893, 0.0, 0x1.08ef40a329079p-595,
     0x1.c8b090932ce6ep-986, 0.0, 0x1.e49c9accec8bp-361, 0.0, 0x1.8df00b6c386ddp-301,
     0x1.e60b31e3c38a1p-1021, 0.0, 0x1.f13d1180f65cdp-941, 0.0,
     0x1.0180e60781462p-850, 0.0, 0x1.072ad86ef5ef6p-938, 0.0, 0.0, 0.0, 0.0,
     0x1.756b137287edap-875, 0.0, 0x1.01a95b850f923p-768, 0.0, 0x1.fd0ca42c0307ap-272,
     0x1.ebe53411e4744p-824, 0.0, 0x1.3d573072e4944p-279, 0.0, 0x1.573abb66cd7c9p-353,
     0.0, 0.0, 0x1.449ae960a2badp-38, 0x1.cc059deecfe1ep-865, 0x1.4fa032c2027eep-390,
     0x1.4eacfbed7e33ap-763, 0x1.c9997f992e271p-171, 0x1.a462e95c579ffp-296, 0.0, 0.0,
     0x1.9527a757a1cf8p-489, 0x1.63a7fba868f07p-366, 0x1.b695b92bde4a9p-916, 0.0,
     0x1.526d2e45c1b7dp-575, 0.0, 0.0, 0x1.7f58bef740a49p-719, 0x1.26864138aade9p-522,
     0.0, 0x1.39ab47275da3cp-963, 0.0, 0x1.16f51a9f7c0a9p-380, 0x1.091af146a0007p-412,
     0x1.b9e1896b6a252p-907, 0x1.285bda9e52be9p-473, 0x1.962b510c12873p-965,
     0x1.4a7972a6c8addp-629, 0x1.b81e2d3806f87p-14, 0.0, 0.0, 0x1.e3ed505baf245p-802,
     0x1.85d7bb1995743p-982, 0.0, 0.0, 0.0, 0.0, 0x1.b8e766a2e1856p-363, 0.0, 0.0,
     0.0, 0.0, 0x1.34ac3e929dd49p-858, 0x1.303de27d2d486p-809, 0.0,
     0x1.2ba17538bf05ep-341, 0x1.bb46f1fdde583p-819, 0.0, 0.0, 0.0, 0.0,
     0x1.fd1a8a7d7a98dp-242, 0x1.066330dcf1713p-105, 0.0, 0.0, 0.0,
     0x1.90d6ea592761fp-205, 0x1.18eb1aa729131p-594, 0.0, 0.0, 0.0, 0.0,
     0x1.65d4244140d7cp-782, 0x1.644a87bda903p-757, 0x1.e766dfe8e21ffp-923, 0.0, 0.0,
     0x1.a0a2ac1f81e0ap-571, 0.0, 0x1.3b50fd8423e9p-289, 0x1.5857644ab2a81p-875, 0.0,
     0x1.f916c5b7c83a9p-892, 0x1.fc59b9492ff91p-702, 0.0, 0.0, 0x1.b2fa9a08ab794p-326,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d93d29eefe9a7p-1019, 0.0, 0.0,
     0x1.0944390bacc85p-915, 0.0, 0x1.0d861e70645a4p-503, 0x1.7e91a762199dap-599,
     0x1.fdf4e52b4f3b7p-734, 0.0, 0.0, 0x1.4d8fa447923c5p-119, 0.0, 0.0,
     0x1.f5b03fca0a777p-660, 0.0, 0.0, 0.0, 0.0, 0x1.526cb3a02184fp-560,
     0x1.88d42a9d93bddp-62, 0x1.03a6e47f4f606p-275, 0x1.1cd2b656cfc97p-600, 0.0,
     0x1.4a58b924d1de9p-869, 0.0, 0x1.8ee3914d7676fp-798, 0.0, 0.0,
     0x1.1e94a6f409fd9p-322, 0.0, 0.0, 0x1.7a06698ba87c9p-292, 0.0, 0.0,
     0x1.6e9ad542a9944p-345, 0.0, 0x1.ec3479acbe61p-68, 0x1.8459e2539e86cp-842,
     0x1.80636d689c68ep-928, 0x1.ec9e2d845af63p-293, 0x1.313e0ba33132p-452,
     0x1.2b3a7acae47dp-730, 0x1.176055218d927p-606, 0x1.665a1018b49d8p-581,
     0x1.f1058dc2c7252p-985, 0.0, 0.0, 0x1.00440ac0a6f7bp-59, 0x1.871bcc1034ed1p-914,
     0x1.966039906719cp-746, 0x1.b694843e72efbp-898, 0.0, 0.0, 0x1.0ae7e3157b6c9p-513,
     0.0, 0x1.a62ae3f549p-149, 0x1.fd663c415719ap-842, 0.0, 0x1.66c02e33f3fd2p-1013,
     0.0, 0x1.dc05ae9312c2bp-872, 0x1.aaf310d2a0016p-613, 0.0, 0x1.b99af5dafb70bp-550,
     0.0, 0x1.1bfe3616747edp-727, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6148c0660aca5p-654, 0x1.0c9b91a46c525p-933, 0.0, 0.0, 0x1.2dc633554b471p-608,
     0x1.337d395b83b5cp-896, 0x1.63d2fcd8a2fd6p-874, 0.0, 0x1.72de4842066c2p-760,
     0x1.239f8368a25b7p-502, 0x1.64e3757348dbdp-903, 0x1.d245f67d66dacp-417, 0.0,
     0x1.d4b3f0a054c8p-892, 0.0, 0.0, 0x1.6058fee46ff8ap-106, 0x1.a2211ba27210cp-204,
     0x1.96414dfba9d87p-459, 0.0, 0x1.d894192a77afdp-460, 0.0, 0.0,
     0x1.50bbf2a325021p-820, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85464729be77ap-585,
     0x1.612fb20bf7debp-381, 0.0, 0.0, 0x1.6445a947f99c4p-93, 0x1.e3e5ad8eec949p-349,
     0x1.0718806c990e6p-170, 0x1.ae738a1565084p-321, 0x1.eef921f65305p-949, 0.0,
     0x1.3aabe31e7f541p-466, 0x1.0d6021dea8e74p-771, 0.0, 0.0, 0.0,
     0x1.ebe9eb3970051p-691, 0.0, 0x1.59457ab8d616p-296, 0x1.0a6d8f97c3d01p-438,
     0x1.21cc79ac2a81p-757, 0.0, 0x1.104ec1902475ap-599, 0x1.6d9810aab6b2cp-100, 0.0,
     0x1.ed498d9f40231p-959, 0x1.f61424f23ca27p-40, 0.0, 0x1.853f40c3585f9p-501, 0.0,
     0.0, 0.0, 0.0, 0x1.fb4e69e248a6bp-509, 0.0, 0.0, 0x1.c3bd7834d9fe3p-86,
     0x1.746d3f35733b4p-448, 0x1.27d6c9673b2ffp-451, 0x1.f2f4a92aedbap-151,
     0x1.a8f04a6ea87e2p-361, 0.0, 0x1.34dab39b40bf7p-458, 0.0, 0.0,
     0x1.1d4913cf780b8p-994, 0.0, 0x1.f5d6a5a7b0ffp-505, 0.0, 0x1.473cf2a9e12bbp-623,
     0x1.20757dd8e8d93p-855, 0.0, 0x1.60931f998d3cep-629, 0.0, 0x1.d22cb97606b6ap-746,
     0.0, 0x1.9ad23ff34828fp-365, 0.0, 0.0, 0x1.adae705cb0e79p-219, 0.0, 0.0, 0.0,
     0.0, 0x1.863111e2a9a26p-262, 0x1.8690253793c22p-71, 0.0, 0x1.3218cd9eb8dffp-301,
     0x1.356f5217ad958p-98, 0.0, 0.0, 0.0, 0x1.abed441bc0c7fp-660, 0.0,
     0x1.7b6dc6d325dbap-933, 0.0, 0.0, 0x1.2f9ab435db319p-173, 0.0,
     0x1.66a1225327c41p-785, 0.0, 0.0, 0x1.e47739c8f1b23p-716, 0.0,
     0x1.158654baa5537p-521, 0x1.292ea31019a5p-205, 0x1.7d3104982dfffp-603,
     0x1.36becd3b0ec1ap-19, 0x1.826fc1d40bcbfp-134, 0x1.2348cfce604bep-731,
     0x1.271a3250e8295p-59, 0.0, 0.0, 0.0, 0x1.a6adc995da4d6p-313,
     0x1.f8fa0bc7bee99p-158, 0.0, 0x1.ef369b223290cp-785, 0x1.c79bbcb578bb9p-244, 0.0,
     0x1.38f84bc829fd4p-282, 0x1.c0689b197484ap-105, 0x1.f70337964ce83p-47, 0.0, 0.0,
     0.0, 0x1.67173dc0a47d7p-1017, 0x1.cafd313f47c81p-472, 0x1.b2709383f0a01p-554,
     0.0, 0.0, 0x1.e9aa2b756eb98p-233, 0.0, 0.0, 0x1.5b35d47604678p-33,
     0x1.78d40b5fd557ep-669, 0.0, 0.0, 0.0, 0x1.3eac3dfda741ep-870, 0.0, 0.0,
     0x1.f334494c4a217p-171, 0.0, 0x1.131d0fe922698p-103, 0x1.b89b5aa306f63p-496,
     0x1.771c72a8e2becp-103, 0x1.5bd1a40136e69p-645, 0x1.bc3e57b79bd1fp-254, 0.0,
     0x1.4521389acbf9ep-507, 0.0, 0.0, 0x1.35400cc24165cp-748, 0x1.8b119ed5a9666p-648,
     0.0, 0.0, 0.0, 0x1.99cc157f30ab2p-379, 0x1.6a9743060f7c5p-31,
     0x1.a75ed1605384dp-353, 0.0, 0.0, 0.0, 0x1.a9b01c673b57bp-640,
     0x1.01e2b0c825846p-277, 0x1.49e61f9b286fp-239, 0x1.90d94c50fb4b3p-554, 0.0, 0.0,
     0x1.834e89c4464a9p-479, 0x1.03dd8f587f1d3p-1006, 0.0, 0x1.fddb7350c6859p-825,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97f3d111ad84fp-936, 0.0, 0.0, 0.0,
     0x1.2a7abab7b56f9p-490, 0x1.862bc6c93c3c3p-484, 0x1.a26c159b568d6p-59,
     0x1.a5270854d3165p-904, 0x1.ccc96c54377c4p-1003, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ea9798b195ad1p-753, 0.0, 0x1.45e115708590dp-50, 0.0, 0.0,
     0x1.8413d0e976248p-460, 0x1.1799ccbf25bb2p-577, 0x1.641536d84b5b2p-568,
     0x1.cbb36c088f09dp-636, 0.0, 0.0, 0.0, 0x1.be23eaab5450bp-267, 0.0,
     0x1.3aa6bf9049634p-74, 0x1.3dfd2871a31bp-185, 0.0, 0x1.01152a1058ee1p-252,
     0x1.df55a83f07a43p-72, 0.0, 0x1.5d1775f1c233bp-1006, 0x1.f922a9e8acbc5p-441,
     0x1.39fbd779d66c4p-409, 0x1.304a372d8f16cp-156, 0.0, 0x1.1abdfe4861a3ap-409,
     0x1.e958ed0411e63p-267, 0x1.f45787781d29ep-651, 0.0, 0x1.55604a5b94575p-626,
     0x1.c893e639a6bc2p-264, 0x1.ab81116187bf4p-970, 0x1.3f202996e633fp-874, 0.0,
     0x1.0571c737e0fd2p-53, 0x1.6eb4bf699b0c6p-252, 0x1.8fcfa60d3b279p-328,
     0x1.f24f3034163b5p-156, 0x1.b2522baf2beb9p-885, 0x1.617d7730c6f99p-485, 0.0,
     0x1.940ca68d28814p-358, 0.0, 0x1.d96ac452baeacp-266, 0x1.f4595ed697e8bp-249,
     0x1.c43b410a88983p-434, 0.0, 0x1.88e1b818dad7p-120, 0.0, 0x1.4fef492be3ba8p-435,
     0x1.f4b296472004fp-391, 0.0, 0x1.36a28e8fbbe5p-943, 0.0, 0.0, 0.0,
     0x1.577d368ee87afp-862, 0.0, 0x1.60849ca64d687p-676, 0x1.24e0b2a45ce7cp-625, 0.0,
     0x1.07d7d56767053p-373, 0x1.db9306dcc5a0ep-630, 0x1.a9d6cbd466c51p-193, 0.0,
     0x1.83c5852ce6b51p-2, 0x1.71132da2d3b34p-800, 0x1.4d416121b1857p-1020, 0.0,
     0x1.1a2cee1ae80fp-482, 0.0, 0x1.50b63dd6d7f0ep-218, 0x1.a5f02d63c7ca4p-879, 0.0,
     0x1.ffb41f9cb479ep-214, 0.0, 0.0, 0.0, 0.0, 0x1.5c7a40b03ea0dp-872, 0.0, 0.0,
     0x1.ad91efd736b7bp-483, 0.0, 0x1.1eb86da9ff1ap-309, 0x1.a86d914af52abp-656,
     0x1.d9737c720d38ap-719, 0.0, 0x1.fe42db37e0403p-628, 0.0, 0x1.c04dbfc917e94p-197,
     0.0, 0x1.50cb49b52ab2dp-15, 0x1.bbd0aa0eb3c88p-807, 0x1.128920c3a85b3p-717,
     0x1.665ff165fb6a7p-918, 0.0, 0x1.15f2488a449cep-164, 0.0, 0x1.98c6c0298f848p-50,
     0x1.2bb1750a5a47p-768, 0x1.74c4aa31a1f65p-793, 0.0, 0x1.dd2ffb64c029ep-477,
     0x1.0de2af4107ap-861, 0.0, 0.0, 0x1.b67a0ead0c97p-905, 0.0, 0.0, 0.0, 0.0,
     0x1.d380f13dc5fc1p-283, 0x1.dea81de712c8p-789, 0x1.d2f048fed4922p-463, 0.0,
     0x1.d922aa4bee03fp-69, 0x1.ba6cd2d4c4d46p-9, 0x1.7cf3a6e297b44p-193,
     0x1.23ca3128870f5p-494, 0.0, 0x1.94f7fd8b1e8efp-326, 0x1.80f79ecef13e6p-505,
     0x1.3b82c955584d5p-235, 0x1.3d0431182b9efp-407, 0.0, 0.0, 0.0, 0.0,
     0x1.c6f9cad2d7309p-513, 0x1.569a1ef6fed5fp-814, 0x1.d1580edfe6fe2p-204, 0.0, 0.0,
     0x1.7960bbe8c50e2p-712, 0x1.d150571c73cc8p-813, 0.0, 0.0, 0.0,
     0x1.e5581bd732397p-270, 0x1.66fffd77e5e23p-859, 0x1.7572a223feb1ep-847,
     0x1.d33a08b055715p-464, 0.0, 0x1.d57d45f14d85cp-15, 0.0, 0.0,
     0x1.5d51ec1d5bf7p-359, 0.0, 0x1.b0e4002d756e8p-861, 0x1.d0e324e29a8fap-680, 0.0,
     0.0, 0.0, 0x1.70afbfab6d73p-184, 0x1.3bb3e4ddae788p-641, 0x1.720fb221c3a9ap-871,
     0x1.6e113eece7058p-674, 0.0, 0.0, 0x1.14caf13bfbc8cp-411, 0x1.32a4e478e786ap-548
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
            tmp1 = Sleef_finz_log1pd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_log1pd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log1pd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
