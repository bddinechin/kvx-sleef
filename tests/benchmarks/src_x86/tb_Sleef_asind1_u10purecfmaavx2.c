/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_asind1_u10purecfma.c --function \
 *     Sleef_asind1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.77b420fa2ced7p-392, 0x1.d7d97b00b147fp-33, 0x1.cd0cf007bf4d8p-578,
     0x1.b9788ec5247d7p-609, 0.0, 0.0, 0.0, 0x1.2276fb28fce2p-539,
     0x1.beeb13d4f82b1p-140, 0x1.62d716ff466aep-974, 0.0, 0x1.8b1522eed5e01p-309,
     0x1.149157a846659p-304, 0.0, 0x1.8e2061b25d063p-282, 0x1.938f22b73ade1p-771,
     0x1.5de7d0a562d27p-702, 0.0, 0x1.e2935deeffe8ap-218, 0.0, 0.0,
     0x1.ac92bcae98336p-155, 0x1.ad0dbf562d4e3p-307, 0.0, 0.0, 0.0,
     0x1.f347b6399963bp-140, 0.0, 0x1.22bcb8a07c854p-356, 0.0, 0.0, 0.0, 0.0,
     0x1.aee483f7244dfp-571, 0.0, 0x1.4e702def4ec95p-527, 0.0, 0x1.e38d7c59e80bfp-113,
     0x1.8e82a4839f66fp-215, 0x1.e9f6c518552acp-118, 0x1.467266ba0840fp-982,
     0x1.254394b6646b3p-305, 0.0, 0.0, 0.0, 0.0, 0x1.283982987c31bp-847, 0.0, 0.0,
     0.0, 0x1.f1a007b8e214ep-439, 0.0, 0.0, 0x1.796933781ee29p-581, 0.0,
     0x1.a01f358fbbb31p-548, 0x1.1c1f3619c4d1bp-375, 0.0, 0x1.5eac73b7d96ddp-631,
     0x1.e5565202e1bc8p-687, 0.0, 0x1.3ae2694bc3527p-962, 0x1.ea250fc22a7c4p-978,
     0x1.8e54096a829e4p-340, 0x1.b47f2f8ac170ap-893, 0x1.8a83844f39358p-101,
     0x1.ab5210891a853p-1010, 0x1.e0858005af0e9p-996, 0x1.ad7b856e62a64p-535,
     0x1.fabf92e89480ap-591, 0x1.adbe21e7969eep-160, 0x1.8d97c779d61b6p-749, 0.0, 0.0,
     0.0, 0x1.5118a2f756e44p-637, 0x1.3fd80b71be393p-191, 0x1.072db210ad16fp-626, 0.0,
     0x1.6e01138b9c874p-773, 0x1.7be97f2034a79p-928, 0.0, 0.0, 0.0, 0.0,
     0x1.33e2f5ff16505p-134, 0.0, 0x1.1a47de9241ab3p-519, 0.0, 0.0,
     0x1.5d9451b92422ep-205, 0x1.bb47a954af3b4p-876, 0x1.21be13e7b02aep-6,
     0x1.4ca2cf63199d6p-994, 0.0, 0.0, 0x1.6602d0ea40ee6p-3, 0x1.2f0782410b052p-864,
     0.0, 0.0, 0.0, 0x1.604b1fd8b2be3p-548, 0x1.cdc881376ac2ap-547,
     0x1.062c6ac225185p-674, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7033548efa60ap-218,
     0x1.7d2975570f27ep-949, 0x1.38d9f1b6f762ap-419, 0x1.f0b46a02ac196p-595, 0.0,
     0x1.adecc53d569e4p-109, 0.0, 0x1.73ba19b4c6631p-332, 0.0, 0.0, 0.0,
     0x1.5e82a1ca0d1b4p-361, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe6338fd28b89p-722,
     0x1.935f685fa5c5cp-483, 0x1.5b0ff59ba3c77p-485, 0.0, 0.0, 0x1.7d1e45931cf08p-147,
     0.0, 0.0, 0.0, 0x1.f1aa54c3c60b3p-759, 0.0, 0x1.ad0b21ab08a71p-311, 0.0,
     0x1.d23295d900761p-330, 0x1.0858d0d282378p-797, 0.0, 0.0, 0.0, 0.0,
     0x1.33699b0d707cep-588, 0.0, 0x1.2b413254bf52cp-566, 0x1.8212c71e7ceabp-263, 0.0,
     0x1.53d6b441eb5aep-392, 0x1.7817b5b1b6202p-383, 0x1.799ead7e064a7p-366, 0.0, 0.0,
     0.0, 0x1.6d1ad88c51abap-622, 0.0, 0.0, 0.0, 0x1.2214ae1ae00efp-135,
     0x1.a4d6ec20864e4p-890, 0.0, 0.0, 0x1.e9adc71d4b6c5p-720, 0.0, 0.0,
     0x1.2a3ac32522d91p-676, 0x1.9c2ab99671542p-551, 0x1.c3b56aca5c878p-880, 0.0,
     0x1.420e7f29fc2cep-564, 0x1.79ed4627ce663p-253, 0x1.53b62c854842cp-191, 0.0, 0.0,
     0x1.090366acf7582p-408, 0x1.01112f5ea7969p-128, 0x1.f1363811a6498p-729, 0.0, 0.0,
     0.0, 0.0, 0x1.405d7a60a2faep-74, 0x1.0230f0b46eb21p-707, 0x1.0991fed0c2888p-904,
     0.0, 0x1.cc53c556f26bdp-954, 0.0, 0x1.9f363649e015dp-355, 0x1.281a5a51d67f8p-409,
     0.0, 0x1.bd706ae29cc46p-138, 0.0, 0x1.ab9fef723cd7ep-286, 0.0,
     0x1.fc096bad2f02dp-503, 0.0, 0.0, 0.0, 0.0, 0x1.a208f8dbc780bp-937,
     0x1.f259bf8021fa2p-506, 0x1.198bc76067d1ep-554, 0x1.35f482069ec56p-271,
     0x1.94483bb4613b2p-188, 0x1.e3ed86718df12p-393, 0.0, 0x1.2c80caa5a6cebp-380, 0.0,
     0x1.92897d9c64ecep-788, 0x1.b5eca18aa10e1p-901, 0.0, 0x1.6344dbc2c233cp-427, 0.0,
     0x1.92caccb1650e9p-493, 0x1.48dcc6947c187p-190, 0x1.0319c37a7ff6bp-831,
     0x1.c70c04004c563p-441, 0.0, 0x1.af19f4bbd6086p-216, 0x1.1d421af6fb0fp-211,
     0x1.1c83595be3d1fp-607, 0.0, 0x1.63f52b57595bcp-157, 0.0, 0.0, 0.0,
     0x1.ac7f988762813p-349, 0.0, 0x1.812321b3d87bcp-282, 0x1.e3ce2e11c9a49p-624, 0.0,
     0.0, 0x1.6efe82eb354dap-71, 0x1.f81f7ae44482ap-202, 0x1.1d31b7feb298dp-487,
     0x1.8e4f3393dc44p-85, 0x1.c8d34fd8ad4edp-112, 0x1.a61eaba868de3p-769,
     0x1.397ce05642c02p-928, 0x1.8929224eb8ba8p-622, 0.0, 0x1.089d5b3835c44p-388,
     0x1.3c301818b5ffap-681, 0x1.304b31beb83adp-455, 0x1.8b0ce99c1b6d2p-256,
     0x1.f7f2be8ce0ea9p-980, 0x1.2adb7223d6b39p-535, 0x1.4bea62d9f54e4p-817,
     0x1.bbb3c29791c7bp-906, 0.0, 0.0, 0.0, 0x1.5e89d3675fb39p-710,
     0x1.be6c243143769p-163, 0x1.d8de24a32095dp-883, 0.0, 0.0, 0x1.642c355701c15p-134,
     0.0, 0x1.0b162c0ca4487p-628, 0x1.aa51755289282p-288, 0.0, 0x1.2d1c102ab0e77p-397,
     0.0, 0x1.9b53d92d58599p-961, 0.0, 0.0, 0x1.b56118a528fc5p-628,
     0x1.e3323184ddfb3p-586, 0.0, 0x1.169adb701ae0fp-186, 0.0, 0x1.22997187bcf9cp-542,
     0x1.6f29ca491d073p-465, 0.0, 0x1.2998bbd5e4b49p-637, 0x1.7614a9b5a3927p-647,
     0x1.937a85671c9b7p-654, 0.0, 0x1.6bc3fc60489b3p-1002, 0.0,
     0x1.bfcd7280a63b5p-408, 0x1.8d67dc725573ap-498, 0.0, 0.0, 0x1.4ebd7b6b3a194p-918,
     0.0, 0.0, 0x1.3114936108f39p-843, 0.0, 0x1.a986cc6c51919p-300, 0.0, 0.0,
     0x1.73e4b881fab3dp-916, 0.0, 0.0, 0x1.283eefa08818cp-92, 0.0,
     0x1.4e7fea2df5b78p-661, 0x1.a918be3279ed2p-281, 0.0, 0x1.c0b3b7fa8ca2dp-682,
     0x1.dca34c536e532p-515, 0x1.3d8f4af47881ap-123, 0.0, 0x1.c5abf2762f4acp-391,
     0x1.ee318dcfcb452p-806, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6623987b4db2bp-847,
     0x1.6d88b5e8d7c72p-946, 0x1.81b552bdea1f9p-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b5237a5058fbap-662, 0x1.d5c18f7fed4b7p-923, 0x1.605542d756ebp-151,
     0x1.42b2a5b6c0c22p-24, 0x1.9684675f82ffep-762, 0x1.9a85de827cb7ep-126,
     0x1.469443359983ap-647, 0.0, 0x1.3af538820a8e2p-697, 0.0, 0x1.c46ba99fcf458p-261,
     0x1.63fba14a76a2ap-897, 0x1.42160885bb393p-10, 0x1.a03c3376ea559p-856,
     0x1.b2b2afd4e526ep-153, 0.0, 0x1.c2bb2bca34453p-151, 0.0, 0x1.3fadd22ffd80cp-105,
     0.0, 0x1.9c20bf175b734p-253, 0x1.a8715809145bdp-619, 0x1.4cba2437d9e1fp-829,
     0x1.707920d4fcd86p-183, 0.0, 0.0, 0x1.634630dfc1141p-654, 0x1.029b3d2eb8391p-972,
     0x1.bdf5159fb1b04p-279, 0.0, 0.0, 0.0, 0x1.0ce27b9bac4bbp-499,
     0x1.7f0b736377219p-13, 0.0, 0x1.c74724184f858p-631, 0x1.cf0f57427a053p-578,
     0x1.56c70fd6c55e8p-694, 0.0, 0.0, 0x1.a035485606941p-661, 0x1.06cd5f5fc0375p-520,
     0.0, 0x1.27085f1747595p-755, 0x1.600ad49a1e295p-873, 0.0, 0x1.7e34f54b22a8p-133,
     0x1.f2291e30371fbp-445, 0x1.78e7b75d8a21ep-778, 0x1.0bbe6be998034p-832, 0.0,
     0x1.f5d87a6ba5a6cp-101, 0x1.daeef70cf2b07p-182, 0.0, 0x1.b147ade79d26ep-786,
     0x1.c934cdee5e888p-101, 0x1.4b33cc3bcb6c8p-871, 0x1.f2b961909995bp-710, 0.0,
     0x1.607bd9ecabfe9p-265, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d15e347c366b1p-820, 0.0,
     0x1.edae36400d4ccp-681, 0.0, 0x1.7d077b501c112p-71, 0.0, 0.0,
     0x1.c8199d6ff922p-42, 0.0, 0x1.5866edbc0a4cbp-676, 0.0, 0x1.1898c3eb3669p-4,
     0x1.eacfe5bc2d6b1p-631, 0.0, 0x1.70fe4e3cb456ap-961, 0x1.ca05d9ae5c77bp-752,
     0x1.820ad3c9e444ap-922, 0.0, 0x1.28be9a69711aep-102, 0x1.158401927fb5bp-818,
     0x1.58f913250c9fbp-812, 0x1.6bd3377de12dcp-195, 0x1.67118a0b7522ap-796,
     0x1.fa3d92595f42p-853, 0x1.9ce7a6c0fb7f9p-909, 0x1.edc34ab3279bcp-38,
     0x1.0f8b385c0d9ep-979, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62d1010b2d0b3p-266,
     0x1.c1ea3fefa8dc2p-861, 0.0, 0x1.783a5eadfe2c7p-991, 0.0, 0.0, 0.0, 0.0,
     0x1.1f339d3d8a39p-141, 0.0, 0.0, 0x1.503484ce1f58cp-414, 0.0,
     0x1.7a1fe01a61ccbp-603, 0.0, 0.0, 0x1.2e799e0c4931fp-804, 0.0,
     0x1.2ac4995a5ebc5p-704, 0.0, 0x1.e5c6c04cbcf8dp-70, 0.0, 0x1.b25ffe1aa6a9cp-516,
     0x1.8a76d4dd1efabp-801, 0.0, 0x1.906db4915a6d5p-90, 0x1.f1bfad0963668p-453,
     0x1.ba18663ae0953p-726, 0x1.c0bbed5bc868dp-450, 0x1.7f910b87f7eb5p-583, 0.0,
     0x1.cec7bc9caed1cp-784, 0.0, 0.0, 0.0, 0x1.7a282d9b13077p-38, 0.0,
     0x1.36abdf2772f96p-138, 0x1.5c64b3382b319p-747, 0x1.1b342ffd225fcp-333, 0.0, 0.0,
     0x1.cc23859a329afp-922, 0x1.fc5b5134c90b1p-154, 0x1.1928813e080a2p-667,
     0x1.ba03cacadfbf1p-181, 0.0, 0.0, 0x1.be6c470f9976ap-15, 0x1.97204b19188bep-452,
     0x1.43a3e9461390ap-1007, 0.0, 0x1.e67235c07445dp-180, 0.0,
     0x1.684cd5eb1f759p-866, 0.0, 0x1.c58024bda1be7p-651, 0x1.478837f2366aep-143, 0.0,
     0.0, 0.0, 0x1.4a915f2286f7ap-299, 0x1.5b5a617d129dep-994, 0x1.3a4eeb868c2fcp-783,
     0x1.0655c84f9cffdp-507, 0x1.fa96710d340e1p-542, 0.0, 0.0, 0x1.cf2e3b545cb17p-777,
     0.0, 0x1.25b5c3a98df53p-895, 0x1.9b28de79de585p-264, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2587ee395be2ep-563, 0x1.d52aff15f4d5fp-954, 0x1.89aa53608e02ap-140,
     0x1.1966c586760d1p-919, 0x1.41405180a23f5p-337, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6833dbf0bb555p-169, 0.0, 0x1.40c64745fd96bp-732,
     0x1.659b96b488cffp-672, 0.0, 0x1.2734ad93e5a71p-136, 0.0, 0.0,
     0x1.f3b2ee1f1dd48p-73, 0x1.f0055e96e9435p-998, 0x1.56f5b652c57c1p-722, 0.0, 0.0,
     0x1.dbdf19124cedap-292, 0x1.05a285fbe70b7p-719, 0.0, 0.0, 0.0,
     0x1.d6ae5dc73acd9p-187, 0.0, 0.0, 0x1.a14e08f73b8ddp-793, 0x1.e7ca90433c0efp-824,
     0x1.908b53d51b686p-710, 0.0, 0x1.e538b388196c6p-974, 0x1.2f8c17a41414fp-634,
     0x1.bab9fadf3b209p-1009, 0.0, 0x1.9bf1e07ce04fcp-816, 0.0,
     0x1.9e3b7d0411cd5p-615, 0x1.8d31fe368e01ep-676, 0.0, 0x1.6156ed208423bp-415, 0.0,
     0.0, 0x1.be6d6698a4bc6p-799, 0x1.b4df37680e3e3p-694, 0x1.b88d8332ccc91p-696, 0.0,
     0.0, 0x1.01cb304403536p-716, 0.0, 0x1.6ede76566e54ep-947, 0x1.ae177b07ddabep-312,
     0.0, 0.0, 0x1.3bc53258c71fcp-603, 0.0, 0.0, 0.0, 0x1.9b4d704d03055p-96, 0.0,
     0x1.f201d112da99cp-645, 0x1.37acb4e3e8959p-544, 0x1.9d4f4a2b8db85p-791,
     0x1.e8c3f56e5660ep-403, 0x1.f96787f99e21p-512, 0.0, 0.0, 0x1.becf71269f493p-261,
     0.0, 0.0, 0x1.5aa494b6cf3fdp-823, 0.0, 0x1.12970e2435ab7p-22,
     0x1.bc7f5a8644abap-954, 0.0, 0x1.9ad9a366f8237p-422, 0x1.6af68d3c49a9dp-762, 0.0,
     0x1.60a2e293f8818p-920, 0x1.13322355f5d19p-137, 0.0, 0.0, 0x1.57afb50fa2804p-964,
     0.0, 0.0, 0x1.62008250f8042p-987, 0x1.98f4fa40236c7p-998, 0.0, 0.0,
     0x1.db2c461ad267ep-161, 0.0, 0x1.ecff05acf952ap-821, 0x1.3ac146b09ccbep-662,
     0x1.1e848bbadb9cep-875, 0.0, 0x1.4b72d5e8c39cep-462, 0x1.445e78ea2e66bp-366, 0.0,
     0x1.802bbd6bcdd93p-72, 0.0, 0.0, 0.0, 0.0, 0x1.5ce9649817f9ap-413,
     0x1.81acfe3ef78d8p-751, 0x1.e7a9895a826d3p-892, 0x1.e2929b4ca2c77p-831,
     0x1.ea56d9b750d18p-507, 0x1.7b7ae08dad593p-524, 0.0, 0.0, 0x1.3c4e14401c533p-368,
     0.0, 0.0, 0x1.f249520c60ce7p-446, 0.0, 0x1.cbeb733b25fbfp-554, 0.0, 0.0, 0.0,
     0x1.f787db06e0a2ep-506, 0.0, 0.0, 0x1.ea71115746157p-517, 0.0,
     0x1.d703d81b7e425p-920, 0x1.1ea28d2529aep-874, 0x1.aea740727c604p-10,
     0x1.9bdd7c6f11616p-846, 0.0, 0.0, 0x1.041b61766460ep-471, 0.0,
     0x1.f353475b7e984p-632, 0.0, 0x1.e1d6b78185e86p-473, 0x1.1a7fc4efa4328p-498,
     0x1.bdb3f5772e0a2p-233, 0x1.567979677dbafp-982, 0.0, 0x1.bb8e8867aa866p-999,
     0x1.daadb8c61263bp-877, 0x1.b273e3471260cp-807, 0x1.71190f0517451p-199,
     0x1.b766a29d693b4p-442, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c9ded1ef405c9p-965,
     0x1.9c728b4c79d95p-996, 0x1.66f8788658a74p-1009, 0x1.c4d71ce126e65p-886, 0.0,
     0.0, 0.0, 0x1.754a91a693b2cp-555, 0x1.6c62b403a9d9ep-751, 0x1.f3888d114f7aap-524,
     0.0, 0x1.682235364a7d4p-737, 0.0, 0x1.1f5fe94d69517p-21, 0x1.92d3c306c7798p-192,
     0.0, 0.0, 0x1p0, 0x1.e360cd5c9ccf2p-801, 0x1.c8a33cbe63dc9p-525,
     0x1.836ab48fbd59p-514, 0.0, 0x1.72b13a6511d02p-978, 0x1.401a0dd7e153fp-159, 0.0,
     0x1.a642f9e20c84dp-483, 0x1.7123fee097c9fp-231, 0x1.01f882af9a023p-556, 0.0, 0.0,
     0x1.79fb03f2d97fap-973, 0x1.097d07daf53e8p-736, 0x1.6e50932326814p-514, 0.0,
     0x1.7c24d80bef03fp-957, 0x1.6bdd0e264dd83p-804, 0x1.29e1a4147fc65p-921,
     0x1.e4a17b4da6ec5p-216, 0.0, 0.0, 0x1.e1c2c1628a92cp-206, 0.0, 0.0, 0.0, 0.0,
     0x1.04f74c1a11df9p-827, 0x1.c31aa6e7563d5p-94, 0.0, 0.0, 0x1.30383dcd58c95p-430,
     0.0, 0x1.a9f8bcadf2a93p-882, 0.0, 0x1.e4460d0b96cc5p-340, 0x1.650da8841cff2p-13,
     0.0, 0x1.8e9e23235a4f6p-836, 0x1.b096f613d027ap-573, 0.0, 0x1.c482c01adc6acp-810,
     0x1.71829564b7753p-11, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f05d29bc0567p-508,
     0x1.f8efbc1f29539p-477, 0.0, 0.0, 0.0, 0x1.6720babaffaa3p-520,
     0x1.e6bad6afc55bp-838, 0.0, 0.0, 0x1.285d05b1a992p-94, 0.0,
     0x1.8314b3038f4dcp-173, 0.0, 0.0, 0x1.f6b0213b6a141p-896, 0x1.44179866d6f3p-374,
     0.0, 0.0, 0x1.8fdb6a48a4df7p-644, 0x1.5509134f01ee2p-589, 0x1.b5ac213a2e22ep-798,
     0x1.f110d3b32d58fp-362, 0x1.26d3cf3b3b35fp-427, 0.0, 0x1.1edd66eb8731fp-148, 0.0,
     0x1.db9c2e7be809bp-993, 0.0, 0x1.9a54c812a0607p-916, 0x1.12b69b8d14fedp-568,
     0x1.853b63cef4fbep-375, 0x1.a185b254cb0afp-1, 0x1.7a3805d63b6c1p-233, 0.0,
     0x1.7e3ced845fba1p-397, 0x1.9ff7167c944c5p-999, 0.0, 0x1.eb54bfdcd9266p-408, 0.0,
     0.0, 0x1.02b9fdfb7b6c9p-775, 0.0, 0.0, 0.0, 0x1.89eb060bee17ep-712, 0.0, 0.0,
     0x1.1190787834c66p-191, 0x1.e8262bc6f988ap-337, 0.0, 0.0, 0x1.7c3e465da3ceep-767,
     0.0, 0.0, 0.0, 0.0, 0x1.edc20d54a1b5ep-515, 0.0, 0x1.5d9b0b63ce5aep-600,
     0x1.c418f62820f32p-508, 0x1.1098809cd4401p-419, 0x1.16818e0e3b21bp-134, 0.0, 0.0,
     0.0, 0x1.0b4e6ce5f1893p-873, 0x1.c8f04255e6b98p-504, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e4673af6cbdfdp-876, 0x1.7c0a01aaadecep-182, 0x1.72d49fd736c56p-533,
     0x1.7f785595cf858p-855, 0.0, 0.0, 0.0, 0x1.d70327a50d598p-571,
     0x1.5276aa88973e4p-226, 0.0, 0.0, 0.0, 0.0, 0x1.0431670a95d0dp-101,
     0x1.52617934b594fp-472, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.767094a06b572p-594,
     0x1.6085a70a32291p-245, 0x1.31d55ba207319p-228, 0.0, 0x1.5d2a0601139fbp-892,
     0x1.42fef094c4eadp-515, 0x1.6a684f8a7ef3ap-700, 0x1.0d9322f31044fp-683,
     0x1.164582439f91fp-383, 0.0, 0.0, 0.0, 0x1.a676c2eff20eep-91, 0.0,
     0x1.fa0fd82d1d076p-654, 0x1.97e07b6ded8dcp-622, 0x1.65f1d8b58fb1ep-262,
     0x1.6c32018288d48p-302, 0x1.faaecef3cf894p-598, 0.0, 0.0, 0.0,
     0x1.3472270636e89p-505, 0x1.f1aed31b1512ep-46, 0.0, 0x1.88562d0f9c932p-277, 0.0,
     0x1.1bff96fc55ea2p-704, 0.0, 0x1.6844443d5e7fdp-206, 0.0, 0x1.f93faa95572e5p-586,
     0x1.46ced6e0abfa4p-280, 0x1.3fea490fd579ap-68, 0.0, 0x1.c9464d5c67dfdp-125,
     0x1.03afdac87d6cdp-449, 0x1.688fafe3b4979p-688, 0x1.3ead462e49e93p-1010, 0.0,
     0.0, 0.0, 0.0, 0x1.11dc804ad3458p-535, 0x1.c8bf3b6c07726p-629, 0.0, 0.0,
     0x1.3867f654372adp-403, 0.0, 0x1.904c9f661b83dp-1014, 0x1.1f7f4c9e6891cp-1021,
     0.0, 0x1.548dae207b8a2p-974, 0x1.469ed50c24639p-771, 0x1.2c377889e8cd7p-125,
     0x1.69d38d121180dp-17, 0.0, 0x1.f746eef2d6eecp-741, 0x1.8a98dc185f40cp-366,
     0x1.8fc668c3bf1eap-391, 0.0, 0x1.e639406c5c158p-568, 0x1.41dda70f65074p-1014,
     0.0, 0x1.2e98c6fc17232p-846, 0.0, 0.0, 0.0, 0.0, 0x1.8bd99e39904d3p-928, 0.0,
     0.0, 0.0, 0.0, 0x1.39658d877e70fp-357, 0.0, 0.0, 0.0, 0x1.dccb59f7e31cfp-916,
     0.0, 0x1.4508c083c7e5dp-757, 0x1.1a7a1735fe64cp-513, 0x1.08c26f1a639dap-814, 0.0,
     0.0, 0.0, 0x1.a2b4a6b1e7dcbp-841, 0x1.75bbb8a156f0cp-284, 0.0, 0.0,
     0x1.759051001231fp-98, 0x1.eccb50f524094p-284, 0x1.d0d51db44bd23p-1013,
     0x1.8736baaf34206p-866, 0.0, 0x1.886b853e189e4p-97, 0x1.4bb7eca3e8e08p-582,
     0x1.2a3deb5eff5cfp-244, 0x1.17bbea554c418p-983, 0.0, 0x1.e60dde680ecfp-256,
     0x1.b7198bfc6ff18p-35, 0.0, 0x1.1e4d71232917bp-68, 0.0, 0.0, 0.0,
     0x1.d1eb9d698856cp-96, 0.0, 0.0, 0.0, 0.0, 0x1.ffca1c512d90ep-72, 0.0, 0.0,
     0x1.e3528a0e39f3bp-484, 0.0, 0.0, 0.0, 0.0, 0x1.52f6e2725c708p-843,
     0x1.77569653c3e13p-150, 0.0, 0.0, 0.0, 0x1.571b583e21057p-421, 0.0,
     0x1.8327a75a704e8p-155, 0x1.5b4bc9e942904p-329, 0x1.8632332e2be98p-805, 0.0, 0.0,
     0.0, 0x1.ba117cc26149cp-979, 0x1.2e0a805c49fafp-202, 0.0, 0.0,
     0x1.317c1a4bd1f7p-440, 0.0, 0x1.d32baac29fb3p-896, 0.0, 0x1.03da3e138d82ap-45,
     0.0, 0x1.e8db565585fd3p-880, 0.0, 0.0, 0.0, 0x1.6fcfad7053407p-688, 0.0, 0.0,
     0x1.dbfe8eb37aa2ep-207, 0x1.6fce8bd9c4ebdp-810, 0.0, 0x1.4727c80b2c11ap-204,
     0x1.b5074cbc8e0b3p-423, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60a52293f19efp-337,
     0x1.6ace72bfde7efp-783, 0.0, 0.0, 0x1.768619ab3fc1ap-905, 0.0,
     0x1.f7eba3269347cp-1003, 0.0, 0x1.270d0cf7410eap-408, 0.0,
     0x1.3fac72b102e6ap-889, 0.0, 0.0, 0x1.a7e053e5d8f9dp-292, 0x1.46f48b5842d06p-500,
     0x1.a863c7cac13f5p-944, 0.0, 0x1.72fdb45640417p-923, 0x1.211657bad8c96p-453,
     0x1.e6c1f9fc88d7dp-180, 0.0
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
            tmp1 = Sleef_asind1_u10purecfma(tmp0);
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
    printf("Sleef_asind1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_asind1_u10purecfma bench acc %la\n", global_bench_acc);
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
