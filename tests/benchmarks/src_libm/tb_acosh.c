/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_acosh.c --function acosh --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.33d35966c6318p-8, 0.0, 0.0, 0x1.2f20176ada4c5p-549,
     0x1.f6ac913156bafp-16, 0.0, 0x1.fb27aaeb52b15p-786, 0.0, 0.0,
     0x1.4e6767629756dp-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e44197f840b28p-217,
     0x1.71360d59829c2p-683, 0.0, 0.0, 0.0, 0.0, 0x1.2a696c288d6a8p-225, 0.0, 0.0,
     0.0, 0x1.97abf7e67c3d6p-1008, 0.0, 0.0, 0x1.4641891ac6417p-146, 0.0, 0.0,
     0x1.c9a9d950d92dp-46, 0.0, 0x1.5945e21ab9f82p-281, 0.0, 0.0,
     0x1.0781aa17f44d8p-443, 0.0, 0x1.f4a4dcf039d43p-753, 0.0, 0.0, 0.0,
     0x1.0c531a6748a1dp-715, 0x1.459d03b7853fdp-727, 0x1.c34b4dbd087c3p-6, 0.0, 0.0,
     0.0, 0x1.9912bc2692be6p-710, 0x1.65d90f0546b89p-387, 0x1.116cd28cb3544p-402,
     0x1.0ae183886525p-691, 0.0, 0x1.a6960e2f2293bp-599, 0x1.532ae690f70e2p-149,
     0x1.ceac322977e88p-81, 0.0, 0x1.9fc1037f77a7ep-647, 0x1.a2d9bebf597bbp-985,
     0x1.5865988439aep-739, 0x1.45601389c51e8p-344, 0.0, 0x1.5c7271c48077dp-490, 0.0,
     0x1.0b90315931ba7p-625, 0.0, 0x1.9f8690b0d803fp-71, 0x1.cc4d741e41528p-826, 0.0,
     0x1.9bfc38137c011p-70, 0.0, 0x1.bb9557610581ap-549, 0.0, 0.0, 0.0, 0.0,
     0x1.293b3069cd09ep-348, 0x1.1295c8eefd48ap-333, 0x1.bc9f7f63ab7bbp-39,
     0x1.d2578e2a203a5p-572, 0.0, 0x1.28a694a1a3b0bp-919, 0x1.a7d27589152f2p-1009,
     0.0, 0x1.1203bf5b8b13ap-220, 0.0, 0.0, 0x1.6c1e85837a6bdp-147, 0.0, 0.0,
     0x1.062120888ae83p-150, 0x1.767cd29fb2ebfp-927, 0.0, 0x1.dbab29385f285p-682, 0.0,
     0x1.f01ac92945952p-598, 0.0, 0.0, 0x1.d1cda0496d6ddp-505, 0.0, 0.0, 0.0, 0.0,
     0x1.233cda8e37f9bp-676, 0.0, 0.0, 0x1.374e619364a92p-395, 0x1.ae68f7701572p-358,
     0.0, 0x1.42b7a22be6cc4p-535, 0.0, 0.0, 0.0, 0.0, 0x1.ee11ef6649bc2p-525, 0.0,
     0.0, 0x1.0ce1430efe995p-637, 0.0, 0.0, 0x1.9570bc5a96bc3p-858,
     0x1.b9f1fdbd510bcp-344, 0.0, 0.0, 0x1.1aada4697ef86p-724, 0x1.c77a4608dab08p-787,
     0.0, 0x1.25098008b74f3p-635, 0x1.948d80ec9f0c5p-675, 0.0, 0.0,
     0x1.0406a3ca25faap-266, 0.0, 0.0, 0.0, 0x1.b26da98ef19ccp-610,
     0x1.90a1f77acda3bp-4, 0x1.0d1d5d382d32ap-19, 0x1.fd2076d91b8f3p-504, 0.0, 0.0,
     0.0, 0x1.46c884ef9eeb1p-771, 0.0, 0.0, 0x1.c5b00620ca29fp-350,
     0x1.69667a1574a83p-1011, 0x1.794d31ac8110bp-887, 0.0, 0x1.d9062ad20d074p-34,
     0x1.5a0bd27d4c907p-1007, 0x1.dd01db291ded9p-970, 0x1.4d53241de5456p-307,
     0x1.889d044478c6p-4, 0.0, 0x1.2ee89f5028a0cp-983, 0x1.d6b95e3a0278cp-934,
     0x1.096a97e300c18p-364, 0.0, 0x1.e6c8fe002e6d2p-791, 0.0, 0x1.2ca673478e78bp-138,
     0x1.58af3ebe8d144p-180, 0.0, 0x1.e584b8ba441fdp-598, 0.0, 0.0,
     0x1.0ed79d4442bd7p-945, 0.0, 0x1.6d965211c09a6p-405, 0x1.8d295c197041fp-554, 0.0,
     0.0, 0x1.2b19e1b6c3c51p-834, 0.0, 0.0, 0x1.f22308c0977bap-283,
     0x1.9b22f1854ee9cp-72, 0.0, 0.0, 0x1.91926e99338afp-814, 0.0, 0.0, 0.0,
     0x1.cfa777c6a9a62p-570, 0x1.60b9581c1539fp-582, 0x1.fc2f9a7147376p-209,
     0x1.760ddda4a6342p-641, 0x1.fcd32d9fe6bf3p-867, 0x1.1693735f5a77dp-788,
     0x1.0585edcf3161cp-271, 0x1.bc48e50611047p-395, 0x1.a3d52ceacfacbp-991,
     0x1.2975dce543bafp-526, 0x1.30ba2ea3e7169p-169, 0.0, 0.0, 0x1.304fccac64a46p-150,
     0x1.af59eadffbaep-70, 0x1.9101b600d5a18p-91, 0x1.8c96e348e03fep-46, 0.0, 0.0,
     0x1.d768d8db10c97p-648, 0.0, 0.0, 0x1.30a2753337439p-17, 0.0,
     0x1.81bee09fae9dp-884, 0.0, 0x1.c1bd64bbaf286p-213, 0.0, 0.0, 0.0, 0.0,
     0x1.7eef518232dcfp-399, 0x1.f9278a39e7071p-543, 0.0, 0x1.8209d07a337b7p-265,
     0x1.d437cc10c1924p-520, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.573d55aae45f7p-935,
     0.0, 0.0, 0.0, 0x1.9f0cb347a0fc2p-627, 0.0, 0x1.14d6a269e4026p-96, 0.0,
     0x1.21de1a0669581p-745, 0.0, 0x1.625953123a16ep-101, 0x1.0692b92239f5fp-869, 0.0,
     0.0, 0.0, 0x1.bd040443c9084p-107, 0.0, 0.0, 0x1.1f8586c0cc77bp-508, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.920d7e667cd93p-935, 0x1.3193c04015d5bp-326, 0.0, 0.0,
     0x1.ed0d9f725c736p-973, 0.0, 0x1.93d4ae8303cdep-165, 0x1.cf58bf3ec770bp-580, 0.0,
     0.0, 0.0, 0x1.3b85d943c9574p-823, 0.0, 0.0, 0x1.a078b80ae9582p-908, 0.0,
     0x1.5ba1bb8442e62p-692, 0x1.4f1cc962d64a4p-418, 0x1.beab07377fe92p-728, 0.0, 0.0,
     0x1.d840747917aedp-467, 0.0, 0x1.123dd77253c45p-324, 0x1.a2677a7aef1e6p-4,
     0x1.354ff3ff7b7f6p-759, 0x1.7669f85a2b7fdp-493, 0.0, 0x1.abd046e8d98d4p-926,
     0x1.5c565b1a2f869p-170, 0x1.557bb9a949491p-3, 0x1.602a8eb9ca2ep-730, 0.0,
     0x1.12f919f95eca3p-106, 0x1.f1fcf5fb49761p-680, 0.0, 0x1.7a3c2252da768p-904,
     0x1.e17c49191250ep-221, 0x1.f8bf911fe3fd7p-466, 0x1.38f15c114a07bp-808,
     0x1.9aa385fa0ca8cp-374, 0.0, 0x1.a1455bd2be1a2p-302, 0.0, 0.0,
     0x1.341c1a64a8606p-680, 0.0, 0x1.236129f89aa23p-713, 0x1.89d4f592d6394p-455, 0.0,
     0.0, 0x1.f7f0f3dd7f6dcp-202, 0x1.be4cbc9d8cf3p-846, 0.0, 0.0,
     0x1.7e916d37419c6p-8, 0x1.276ec21e93f6cp-505, 0x1.336c8b0f54e4fp-9,
     0x1.51bc161db1164p-504, 0.0, 0x1.6e94883dade09p-1001, 0.0, 0.0, 0.0, 0.0,
     0x1.8a0b524f0b23ep-277, 0x1.a50df2235cb0fp-197, 0.0, 0x1.c12b67244939cp-719, 0.0,
     0x1.e2603605610abp-598, 0.0, 0x1.450ded7ad6d2ep-1009, 0x1.9ac3ecddf093dp-50,
     0x1.f935c156bf73cp-83, 0x1.53168102b379fp-611, 0.0, 0x1.164ce88647255p-169,
     0x1.fc9f2a2cec108p-323, 0x1.01818c8cffc12p-330, 0.0, 0x1.410cc72a539f6p-405, 0.0,
     0.0, 0x1.46b4a068926f5p-910, 0x1.9c144041810edp-311, 0.0, 0.0,
     0x1.ddb79eaf3ca7dp-771, 0.0, 0.0, 0x1.0205f45581a95p-438, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.078871a7921aep-15, 0.0, 0.0, 0.0, 0.0,
     0x1.043562bb7b7c8p-815, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac3aae51e2e68p-945,
     0x1.7a42f1be1da2ap-624, 0x1.55c08a6e74e4p-617, 0.0, 0.0, 0.0, 0.0,
     0x1.f95ae6a452696p-420, 0x1.3e05e1b2d412fp-421, 0x1.8f3f71c6ade75p-2,
     0x1.0148db458d977p-714, 0x1.a3d811069eea8p-600, 0x1.c1db49130b665p-410, 0.0, 0.0,
     0x1.9f12244520affp-614, 0.0, 0.0, 0.0, 0.0, 0x1.dd9302ce053f9p-360,
     0x1.9150500d22246p-25, 0x1.f9047bacae327p-444, 0x1.b4d3b04d1bb53p-675, 0.0, 0.0,
     0x1.37c80b2d64919p-180, 0.0, 0.0, 0x1.20fd3054bb9dbp-541, 0x1.77c470bd4d16p-880,
     0.0, 0.0, 0.0, 0x1.87b47bf8e82dcp-953, 0x1.fd6b5996909dbp-432, 0.0, 0.0,
     0x1.6f131a661bc22p-3, 0.0, 0.0, 0x1.028e727e969ep-390, 0x1.8f84d71c4dc6fp-63,
     0.0, 0x1.b5850c309e744p-34, 0.0, 0x1.75335c9d523d5p-531, 0x1.954150e312973p-102,
     0x1.eac4a3a2a1132p-666, 0x1.1e58be0df0ed6p-166, 0x1.050b97a4cfa1bp-971, 0.0,
     0x1.cb15b17dade2ep-679, 0.0, 0x1.12cb21b612424p-311, 0x1.9c19ee40e027p-135,
     0x1.f5f68f48d315ap-709, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.93a87d4786d98p-368,
     0x1.82e2471453173p-615, 0.0, 0x1.696e35bcf6d85p-15, 0x1.78c730504fd91p-934, 0.0,
     0.0, 0x1.cd128f51de10ep-47, 0.0, 0x1.1182a371a2065p-510, 0x1.bcff6ef0080dp-520,
     0x1.89727cb844247p-859, 0x1.f7ea2a230e20fp-852, 0x1.a7624634cce74p-618, 0.0,
     0x1.478bea2c104cp-357, 0.0, 0x1.a3c59c8b3b0cfp-768, 0x1.c90f78c606fd8p-654, 0.0,
     0x1.0a0042ba5d84fp-29, 0x1.11b7a0de9e91ep-692, 0x1.9f69894e10c5cp-604,
     0x1.897400756d72fp-900, 0.0, 0.0, 0.0, 0.0, 0x1.0eef4de426fdp-524,
     0x1.5dbea1320658fp-71, 0x1.548772be64233p-97, 0.0, 0x1.ad1a549b5f8f9p-635, 0.0,
     0x1.82e2c09ddda3p-307, 0.0, 0x1.462e3f4aee7c3p-110, 0x1.b38c67b4139aap-579, 0.0,
     0x1.8bb42ea32b1d2p-375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0ace76cdfe33bp-50,
     0.0, 0x1.ac299a8dc2ffcp-373, 0.0, 0.0, 0x1.ee68e8f53c597p-497, 0.0, 0.0,
     0x1.9e000dea5042p-707, 0.0, 0x1.53d2212c7047dp-196, 0x1.f98b7d600e7bbp-779,
     0x1.474af4e996229p-903, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a6436a6238e7p-435,
     0x1.638d1bd5bdca7p-552, 0x1.4a459009a632dp-635, 0.0, 0x1.c911400598d23p-470,
     0x1.10c07c9877fd2p-547, 0x1.152019d5f7086p-218, 0.0, 0.0, 0x1.a3594f487d365p-877,
     0x1.2b6f77dd6d15ep-61, 0x1.4ff73183b1fadp-762, 0x1.5eff1daed4e99p-627,
     0x1.2fc8bf720174fp-105, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d31e989b1c0f5p-742, 0.0,
     0x1.35bb9bf72a2bap-945, 0.0, 0.0, 0.0, 0.0, 0x1.3074670a8562p-446,
     0x1.0873cc136627dp-270, 0x1.5233cdc242919p-113, 0x1.b01fece23e3c1p-939,
     0x1.748b17803981ap-786, 0.0, 0.0, 0x1.fd277b9ec458ap-684, 0x1.281f0abf45555p-796,
     0.0, 0.0, 0.0, 0.0, 0x1.a508ae4e72d3ep-635, 0.0, 0x1.abfe296bb91e7p-887,
     0x1.3d850eab4848p-546, 0.0, 0.0, 0x1.40d85ca4d9561p-446, 0.0,
     0x1.d736bf69b9982p-584, 0x1.bf0c83a9bd38p-913, 0x1.509eacc5757c8p-343,
     0x1.44ad623a667cep-81, 0.0, 0x1.5a63e0aa12cfp-355, 0x1.9c7a9d53d22acp-76, 0.0,
     0x1.bc7c054a99f2p-921, 0.0, 0x1.2b2d9420cf25bp-71, 0x1.1b995d36033c3p-732, 0.0,
     0.0, 0x1.da24faad30351p-141, 0.0, 0x1.5a3d14ce7ba56p-261, 0.0,
     0x1.c07bb610d3462p-187, 0.0, 0.0, 0.0, 0x1.92a4d2bd4c4abp-29,
     0x1.71a2f71a3705ep-10, 0.0, 0x1.518641f7d5e19p-96, 0.0, 0x1.a5768e916ffeap-719,
     0x1.f7476e303ff3p-154, 0.0, 0x1.9f454e62e5cfp-880, 0.0, 0x1.5bd633c59e2f3p-620,
     0x1.d271d40313393p-871, 0x1.1f908f1cf92bp-480, 0x1.572f398416939p-143, 0.0,
     0x1.fd59abd82030cp-440, 0x1.d711f9d21f057p-837, 0.0, 0x1.436d0908d3e17p-179, 0.0,
     0x1.062608c885036p-720, 0.0, 0.0, 0.0, 0.0, 0x1.d4d0ecba7bfep-996,
     0x1.440e896b585fap-826, 0.0, 0.0, 0.0, 0x1.75108bf3f7b4ep-346,
     0x1.59024dc9320bep-63, 0.0, 0.0, 0.0, 0.0, 0x1.e8e3b38bb10cp-571,
     0x1.1924d0a905e17p-214, 0x1.23cd0f1ceadcap-749, 0x1.a7cad4d4d27e2p-458, 0.0, 0.0,
     0x1.c39badd89c8cp-213, 0x1.df6bce53aea7dp-546, 0x1.0ca5dbf83acfp-426, 0.0,
     0x1.15254ed409f79p-581, 0x1.73ccb70de88cap-529, 0.0, 0x1.bd5d892440a13p-457,
     0x1.d25e9a45b5c86p-421, 0.0, 0x1.e371079f6825cp-774, 0.0, 0x1.6874ab0107f16p-96,
     0x1.a3877d677c6dep-318, 0x1.74ce292fa44bbp-759, 0.0, 0.0, 0.0,
     0x1.bce0dff0a3f95p-186, 0.0, 0x1.4ed7bf9b0211ep-523, 0.0, 0.0,
     0x1.2e59f07f4b59ap-478, 0.0, 0.0, 0x1.6a3e499c75ec1p-485, 0.0,
     0x1.63255c58f64c6p-641, 0x1.34fbe7a0cf013p-747, 0.0, 0x1.56154e98e064dp-590,
     0x1.1da984b8d3235p-138, 0.0, 0x1.cbf0e4aa057cp-617, 0.0, 0.0, 0.0, 0.0,
     0x1.8f18bab269c05p-369, 0x1.deb914037e263p-153, 0.0, 0.0, 0.0,
     0x1.62dfdd87e0cfcp-470, 0x1.861148cc3882ep-219, 0x1.9ab40b76644cdp-715, 0.0, 0.0,
     0x1.de37def0785d1p-768, 0.0, 0x1.fe852bb5b3e22p-719, 0x1.2aa18e4ba3777p-140, 0.0,
     0.0, 0.0, 0x1.6c24b1043ffbap-192, 0.0, 0x1.5c7b26a65e2c3p-438, 0.0,
     0x1.189debacb6b2fp-943, 0.0, 0x1.0d9a8746cdf05p-146, 0x1.5a2138f3e2cadp-763, 0.0,
     0x1.9a3900a4110a7p-944, 0x1.a47903a56b9aap-459, 0.0, 0.0, 0.0,
     0x1.cd7c655dc597cp-950, 0x1.a9055ce8f87fdp-284, 0x1.8688ab7b43e69p-534, 0.0,
     0x1.851a981154bcp-144, 0.0, 0.0, 0.0, 0x1.26a34b29c85b5p-746,
     0x1.5c9a193a3b771p-555, 0.0, 0x1.20dbc37aba026p-587, 0.0, 0.0, 0.0,
     0x1.b4941d4f4e89fp-588, 0.0, 0.0, 0.0, 0x1.6f4286bd55fc5p-63,
     0x1.84b2c815bdf87p-543, 0x1.e13642ff9dc23p-737, 0x1.2b215beccbd96p-393, 0.0,
     0x1.35daebc6eeff7p-63, 0x1.71b1ca10b6073p-168, 0x1.3394147484e8ep-251,
     0x1.d979f640b26b4p-681, 0.0, 0x1.a88297b18d489p-413, 0.0, 0.0,
     0x1.e59edf2423feep-615, 0x1.5c107bdd05c85p-813, 0.0, 0x1.5d477f9cfce65p-700,
     0x1.dc5c8656ab7dcp-788, 0.0, 0x1.6b83a28e1a144p-319, 0x1.176108ece667cp-412, 0.0,
     0x1.68e34d2affdc5p-456, 0x1.c47962b009d75p-181, 0.0, 0x1.57ee51b1030bep-923, 0.0,
     0x1.c08146b26c43bp-736, 0.0, 0x1.c318599ab0c91p-684, 0x1.933c0c761bc76p-962,
     0x1.13fd349c2d4cp-717, 0.0, 0.0, 0x1.be20e76925958p-699, 0x1.529d19e538bb9p-1020,
     0.0, 0x1.e7251bb9bc15dp-830, 0.0, 0.0, 0x1.9a206158236a7p-620,
     0x1.03e6f76f2de9cp-875, 0x1.f25126612dbc4p-124, 0x1.5217b83a39a8ap-991,
     0x1.56495925e9529p-834, 0.0, 0x1.215dd25a72c38p-909, 0x1.6afeb80b95d55p-26,
     0x1.c9252525337d7p-693, 0.0, 0.0, 0x1.37077816e4ac7p-371, 0.0, 0.0,
     0x1.dc66cdaaeb2ffp-107, 0.0, 0x1.f0521ba62b7eep-589, 0x1.7e6913d4ea4c4p-581,
     0x1.f71ea44827962p-317, 0x1.b04aab34d16aep-633, 0.0, 0.0, 0x1.c528a2d000f92p-270,
     0.0, 0.0, 0.0, 0.0, 0x1.3202c717391f5p-483, 0x1.9a378b675378dp-840, 0.0, 0.0,
     0x1.3e74ca28efb7cp-489, 0x1.26fd8e11c2829p-635, 0.0, 0x1.4f214937cc489p-141, 0.0,
     0x1.fe2d99ac9501fp-773, 0.0, 0x1.9446aa8d315p-146, 0.0, 0x1.c1c11eeb2ce5p-746,
     0.0, 0.0, 0.0, 0x1.bbf61e1754749p-149, 0x1.8c984d60d6145p-954,
     0x1.4ca77b81b4705p-503, 0.0, 0.0, 0x1.25e1b3860bc6ap-1013,
     0x1.7f7d70d21e418p-895, 0.0, 0x1.f304d1df3b09ap-154, 0.0, 0.0,
     0x1.8a5c09f206322p-565, 0x1.448e0c059b3dap-484, 0.0, 0x1.1ed61597f0d86p-130,
     0x1.a6e33829c351dp-166, 0x1.8f284bf5537dcp-541, 0.0, 0x1.4ef2fcd4d5b9bp-37,
     0x1.223d80b5dd0d5p-839, 0x1.9a97476686e63p-750, 0.0, 0x1.c0e95b02f5a8p-697,
     0x1.39e881441fd8dp-844, 0x1.b55b9eb1bc592p-162, 0x1.91e9143946ce7p-833,
     0x1.1757bd7f54ec1p-58, 0x1.5d4f5ed4c62fp-777, 0x1.854baa77446f9p-189, 0.0, 0.0,
     0x1.c6fa8d6c473a4p-1003, 0x1.88b9d3bd38871p-782, 0.0, 0.0, 0.0,
     0x1.983605bb7845ep-425, 0x1.3d12e42e7ef7cp-449, 0x1.dfacde5d0581fp-197,
     0x1.355ab5b8f0d13p-91, 0.0, 0x1.2a5d51d19a5cdp-387, 0.0, 0x1.14f7841002825p-427,
     0x1.cc282053148f4p-986, 0x1.b349cb2efd089p-692, 0x1.56a7a478c4067p-279,
     0x1.a8f9c89087aa5p-443, 0x1.b96213028db44p-140, 0.0, 0.0, 0.0,
     0x1.043237dedd927p-46, 0.0, 0x1.2a33239c4fd9bp-460, 0x1.faba9a62a571p-120, 0.0,
     0x1.174c461d740fdp-338, 0.0, 0.0, 0x1.51b4ccbe37ffbp-238, 0.0, 0.0,
     0x1.c2fc046bad24bp-689, 0x1.645091cf2fe75p-900, 0.0, 0.0, 0x1.bfbf5a6337b3ap-136,
     0.0, 0.0, 0x1.92cba29a5efa4p-1012, 0.0, 0.0, 0.0, 0.0, 0x1.375831dc3fc62p-160,
     0x1.d826423021e98p-716, 0x1.d8bd8ee71f076p-959, 0.0, 0.0, 0.0,
     0x1.38dfe67480575p-171, 0.0, 0x1.a132a751d5a41p-325, 0.0, 0.0, 0.0,
     0x1.620f2ee9f0563p-255, 0x1.5e6df224c49dcp-709, 0x1.3c381be92c033p-537, 0.0,
     0x1.b8e95538f0a47p-793, 0x1.dd98f118e98d5p-709, 0x1.0cebe7921c647p-188, 0.0, 0.0,
     0.0, 0x1.eaeec42fcee02p-156, 0.0, 0.0, 0.0, 0x1.138a4c3aecc62p-595,
     0x1.17f6976e83bc8p-597, 0.0, 0.0, 0x1.492dbc01f6c34p-633, 0x1.02a6942f393e8p-676,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7f2e842b6bf1p-113, 0.0,
     0x1.32343769f7901p-564, 0.0, 0x1.b8a045d366dadp-129, 0.0, 0x1.a5943b9c7f383p-994,
     0x1.6d49b6a526536p-970, 0.0, 0x1.a1b1efb6ea567p-684, 0.0, 0.0,
     0x1.36ce89b515795p-328, 0.0, 0x1.8f6a543f9479bp-919, 0.0, 0x1.c22d840aecd91p-960,
     0x1.a5edaa4ec9a64p-767, 0.0, 0x1.01c51066b125p-524, 0.0, 0x1.f5fcda95cde2bp-915,
     0x1.a1b7f07364cbap-646, 0.0, 0.0, 0.0, 0x1.d3536154ad03cp-696,
     0x1.7afffaea61aabp-309, 0x1.34dda7252bb1ep-405, 0x1.4025ac528403fp-552,
     0x1.400fe35b207f2p-5, 0.0, 0.0, 0x1.09effc2cd9af9p-139, 0.0,
     0x1.c73597afa1658p-525, 0x1.631f25bea1f05p-446, 0.0, 0.0, 0.0,
     0x1.b892787a84c25p-157, 0x1.1ad34233d7bdcp-137, 0x1.b04c438aa24efp-514,
     0x1.777a5270b6486p-808, 0.0, 0.0, 0x1.20f6989123841p-176, 0.0,
     0x1.351f0a3d996e6p-187, 0x1.c2ca4d2e7ef5ep-836, 0.0, 0x1.8f03dc6109245p-951,
     0x1.2c21148b89044p-341, 0.0, 0x1.fa64a5138e7cap-78, 0x1.f200f353954a2p-723, 0.0,
     0x1.c24b03f6f3bb9p-136, 0.0, 0x1.1f5488e2f9255p-575, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8abb6788357d3p-145, 0x1.e6bee6ff89e63p-306, 0x1.7185a81b19609p-661,
     0x1.525b2625ec59dp-481, 0.0, 0.0, 0x1.ad4d476f16eb4p-1007, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5ec0a7357b157p-838, 0x1.a787bfcaadc67p-601, 0x1.fe5e4244bd6b1p-228,
     0x1.d06aaa7847f9bp-999, 0x1.f62383b30a4e7p-583, 0.0, 0.0, 0.0,
     0x1.22ce01f6bb873p-391, 0x1.875d9291c0e73p-687, 0.0, 0x1.2388cbb01c91cp-35, 0.0,
     0.0, 0.0, 0.0, 0x1.a0f2cd2a1af93p-693, 0.0, 0x1.8874b1acb67a7p-1016, 0.0, 0.0,
     0.0, 0.0, 0x1.e65693f0945e5p-952, 0x1.e1ab5df273926p-798, 0x1.e568b262758a3p-152,
     0.0, 0.0, 0x1.13ca1d5a832d2p-28, 0.0, 0x1.095cbb8a9c9dbp-545,
     0x1.9baa258ca8d98p-80, 0x1.184a568962614p-270, 0.0
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
            tmp1 = acosh(tmp0);
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
    printf("acosh %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("acosh bench acc %la\n", global_bench_acc);
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
