/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundd1_purecfma.c --function \
 *     Sleef_finz_roundd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.c831a3fc095ecp-506, 0.0, 0x1.2788e9e392701p-694, 0.0,
     0x1.d8382adc4e863p-307, 0x1.cbea15ae7b953p-397, 0.0, 0.0, 0.0, 0.0,
     0x1.80ee0e6ff719ap-1002, 0.0, 0.0, 0.0, 0.0, 0x1.7cd68c02fcb23p-819,
     0x1.f0850c0a27aabp-529, 0x1.94b2532bff16dp-487, 0.0, 0x1.b05014fa2d821p-18,
     0x1.c5f9ac2740f21p-398, 0.0, 0.0, 0x1.c7e9659245a7p-260, 0x1.7b94106fa9f1cp-117,
     0x1.afc0de7efc96ep-57, 0.0, 0x1.525a4742f4ca6p-679, 0x1.920724e70a053p-633, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7a756bf4e05a3p-840, 0.0, 0.0, 0x1.e2351da333517p-107,
     0x1.df7e6c5b878a7p-204, 0x1.56bb772bd65fdp-383, 0.0, 0x1.87caa15a34186p-778,
     0x1.febc382f8477cp-579, 0x1.ef61199015307p-163, 0x1.f0904720d3ae6p-631,
     0x1.2720b0bf8ba5bp-232, 0x1.709a45891442bp-134, 0.0, 0x1.3e336aec4707cp-920,
     0x1.264841d453228p-302, 0.0, 0x1.dda22f7b0fa45p-285, 0.0, 0.0, 0.0,
     0x1.deae42351ec6ap-742, 0.0, 0.0, 0x1.22630f656b716p-71, 0.0,
     0x1.cfa0501a02913p-102, 0x1.1e51232e641aep-148, 0x1.4981b3e55e41ap-966,
     0x1.34f29b53c97cp-990, 0.0, 0x1.b8f5035a78707p-881, 0x1.299e3361d7676p-542, 0.0,
     0x1.e9639a6596aa4p-755, 0x1.4ac77176956f3p-121, 0x1.3c939a2b5d256p-527,
     0x1.b524535970c1bp-344, 0.0, 0x1.c3ff566fcb6ecp-50, 0.0, 0.0,
     0x1.d852f338257ccp-280, 0x1.5be46fe374c63p-211, 0.0, 0x1.54ec9a502cb15p-443, 0.0,
     0.0, 0x1.578eba2c50addp-8, 0.0, 0.0, 0x1.03adfce3265a4p-73,
     0x1.7d30f762880dfp-84, 0x1.f48e2d0fc0997p-455, 0.0, 0.0, 0.0, 0.0,
     0x1.af4401d418a96p-1021, 0x1.e866b944f002bp-378, 0.0, 0x1.d990d4f59f29p-645,
     0x1.c15545bd4b0d1p-896, 0.0, 0.0, 0x1.674f70a97a717p-661, 0x1.b613e0a80dda3p-18,
     0.0, 0x1.2d05fa37dd72cp-929, 0x1.68d5418c4b9a3p-794, 0x1.237329f8c92efp-394, 0.0,
     0x1.71c8800c45b2fp-60, 0x1.b79ef6b65d51bp-232, 0.0, 0x1.0457c850e249cp-675,
     0x1.c5cbebc7a6485p-702, 0x1.31dfcb6878cfap-77, 0.0, 0x1.c21887aea263dp-284,
     0x1.ae5de4981a8aap-123, 0x1.b005a8ce46c82p-497, 0.0, 0x1.0c6e0bb85c5d2p-923, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48832bfa17853p-229, 0.0, 0.0,
     0x1.f1a9128db192cp-568, 0x1.1d23dc9b76eadp-407, 0x1.9a28da0e11496p-50,
     0x1.7f4e0bc227073p-825, 0x1.81c8702eb4eaep-21, 0.0, 0x1.bfc6aa7549909p-11,
     0x1.f89389eae775fp-480, 0x1.97d69faf136c6p-33, 0.0, 0.0, 0.0, 0.0,
     0x1.61aa46d23586ap-913, 0x1.351eb5493564p-613, 0x1.7c0633544e2f2p-977, 0.0,
     0x1.30fd5a2dc5452p-369, 0x1.bcaa56b663f8dp-745, 0.0, 0x1.86805d53e00bbp-550, 0.0,
     0.0, 0.0, 0.0, 0x1.29295be01745ap-544, 0x1.00de70270c1cfp-697, 0.0, 0.0,
     0x1.61a30671cc4eap-61, 0x1.6914514c271cep-435, 0x1.061153a0db53p-827, 0.0,
     0x1.914f67add970cp-774, 0.0, 0x1.75ad2ef3ade41p-909, 0.0, 0x1.5a6506f57339dp-966,
     0x1.19b0a30b5a808p-481, 0x1.c231d4947b8c7p-332, 0x1.ee723417d2b26p-947, 0.0,
     0x1.4cfae581ce80cp-423, 0x1.6124123f48d6fp-12, 0x1.60173f2d713bcp-508, 0.0,
     0x1.813e73d162887p-250, 0.0, 0x1.0c1c8ba30ec0fp-117, 0x1.309dd2de5af97p-793, 0.0,
     0.0, 0.0, 0x1.909c372974ed9p-245, 0.0, 0x1.9a513eda1e193p-808,
     0x1.245b53cdf7a54p-283, 0.0, 0.0, 0x1.ad386f78b3359p-223, 0x1.84d18644a53cap-128,
     0.0, 0x1.80bb142b965c5p-486, 0x1.1b13e0f516859p-986, 0.0, 0x1.64531240ee623p-326,
     0.0, 0.0, 0x1.fe712acf5c8c8p-257, 0x1.a4517f2cb6b6p-455, 0x1.f6a3742c90c38p-17,
     0x1.608b14a3b1ba5p-607, 0x1.81996f7ed60abp-539, 0.0, 0x1.9cc066d1b50e6p-897, 0.0,
     0.0, 0x1.c9b0d8e6519afp-988, 0x1.a6673fc165f87p-671, 0.0, 0x1.9464a12ab40e8p-585,
     0x1.6fdb033572cd7p-709, 0.0, 0.0, 0x1.01fb19e225543p-201, 0.0, 0.0,
     0x1.8739954d5f788p-810, 0x1.66ea6ee33ac65p-696, 0x1.b7b60b1cd6707p-581, 0.0,
     0x1.5c963cf72799fp-902, 0.0, 0.0, 0.0, 0x1.6a5d28e3b0564p-200,
     0x1.56b7b9e9079c8p-658, 0x1.dc970e48ba25cp-341, 0.0, 0.0, 0x1.1b38b57ffaa81p-931,
     0x1.75f914c5198e9p-64, 0.0, 0x1.b007bfd063dcap-850, 0.0, 0x1.670881a8628cep-569,
     0.0, 0x1.333d6ce83dd51p-770, 0.0, 0x1.a590ff04f8584p-731, 0x1.e78c8d822e77dp-648,
     0x1.4d367bf0e239cp-483, 0.0, 0x1.66fb9016ff30ep-23, 0x1.75fbf556f5f69p-883, 0.0,
     0x1.808a20ed701bbp-742, 0x1.856509a243c1cp-931, 0.0, 0x1.beb78bae09ebdp-426, 0.0,
     0.0, 0x1.a150e39a09239p-277, 0x1.426cc079b1a3ep-34, 0.0, 0.0, 0.0,
     0x1.74b3f7dd48d13p-1012, 0x1.2218bb18752fbp-583, 0.0, 0.0, 0.0, 0.0,
     0x1.79de4aae3ce2dp-791, 0x1.2b907324e99b4p-74, 0.0, 0x1.01f59b3975ef1p-494,
     0x1.368f041dee44cp-886, 0x1.bd762119846efp-745, 0x1.664f49ce1491cp-476,
     0x1.67662db484511p-137, 0.0, 0.0, 0.0, 0x1.e5c16f88eap-886,
     0x1.6a031870a9a8dp-443, 0x1.4832a9d229c82p-875, 0x1.da5440dc11116p-937,
     0x1.7e67c47c36bb6p-170, 0.0, 0x1.868b1360fd7a8p-89, 0x1.6a0bfc5882677p-671,
     0x1.42e6d7580f78p-399, 0x1.c1b5c48ed846ap-185, 0.0, 0.0, 0.0, 0.0,
     0x1.b2d084566de17p-326, 0x1.1e86c725573e2p-571, 0x1.fd736665a02bap-865, 0.0,
     0x1.eef0f0655c07ap-288, 0.0, 0x1.774fb68ea8989p-196, 0.0, 0.0,
     0x1.e6cd83a5eff44p-349, 0x1.2b0e0d6b80a93p-117, 0.0, 0.0, 0.0, 0.0,
     0x1.0d14563404f38p-381, 0.0, 0.0, 0.0, 0.0, 0x1.3a7e0e69d6f9dp-841,
     0x1.694c1d5abef8ap-861, 0x1.8d05367bff7eap-977, 0.0, 0.0, 0.0, 0.0,
     0x1.028fd27b9827bp-553, 0.0, 0.0, 0.0, 0x1.ead70870cb392p-860, 0.0, 0.0, 0.0,
     0x1.cc63ba9a79d48p-339, 0.0, 0.0, 0x1.b20c858eea962p-325, 0x1.63b9e855c2da2p-468,
     0x1.634374f27a9f3p-978, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.99bbf8bf49bd9p-374,
     0.0, 0.0, 0x1.04964d3c7612dp-835, 0x1.625aa5ed532d4p-316, 0x1.29ba5441ebb7ep-737,
     0.0, 0.0, 0x1.006e4f7c5df72p-364, 0x1.8cbf90f3cd961p-384, 0x1.8c765eaf111a6p-165,
     0.0, 0.0, 0x1.e407e9545d16bp-475, 0.0, 0.0, 0.0, 0x1.6e09b58bcd7d4p-553,
     0x1.0fc349855583ap-756, 0x1.7da021a2e4cbdp-281, 0x1.9e381dcc09449p-351,
     0x1.dff9c323ac769p-417, 0x1.4f54d084d34efp-957, 0x1.8b74ad2bb0c51p-653,
     0x1.afec0956d4de8p-398, 0.0, 0.0, 0x1.a3850dfe29fa1p-526, 0.0,
     0x1.d3cba6233471cp-107, 0.0, 0.0, 0.0, 0x1.e3c0c5b52c86bp-441,
     0x1.38f160cec9035p-649, 0x1.7b9b6c26260ep-120, 0.0, 0x1.5eab1212eb288p-495,
     0x1.5cae8f3ac118fp-417, 0x1.b04af9ff108b8p-903, 0x1.5c2ab2f30d71p-683,
     0x1.defb9648a8ed8p-257, 0x1.8c4fcd625035ep-470, 0x1.592410c6420e2p-502, 0.0,
     0x1.464adc23742dbp-175, 0x1.e21a70eacdcddp-963, 0.0, 0.0, 0x1.2dadf7fa45773p-25,
     0x1.740f8a03143f8p-568, 0.0, 0x1.90e6a51e5b05ep-977, 0x1.51c42a70fd63bp-208,
     0x1.18585f7b7a427p-683, 0.0, 0x1.9ad4d0608ee9cp-607, 0.0, 0.0,
     0x1.06007f5faac2dp-205, 0x1.8903694b786f5p-924, 0x1.01b1a39687432p-160,
     0x1.f80b8e0d76c68p-673, 0x1.ac2f2640488fap-829, 0x1.dd061f18d1e26p-621,
     0x1.7390971bf63d9p-441, 0x1.54449097d0fe5p-300, 0.0, 0.0, 0x1.50a1a6aa3b8ddp-480,
     0x1.e5d2249b4833ep-210, 0x1.d66ca1ca734aap-597, 0x1.4610426067df6p-900, 0.0,
     0x1.4bf0f50f604c2p-80, 0.0, 0x1.bb3241a51843ap-889, 0.0, 0.0,
     0x1.c28f1fddb76b8p-271, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.06f45eeb15b35p-409, 0.0,
     0x1.5a9da3022ceb7p-864, 0x1.608f69d03ae18p-459, 0x1.790f92e0137f7p-226,
     0x1.370f4af7142d4p-177, 0.0, 0x1.211a2242ed56ap-979, 0.0, 0.0,
     0x1.5ab9dbba6c41ap-304, 0.0, 0x1.27d0b1d75365fp-559, 0x1.0ca4bd8201938p-176, 0.0,
     0.0, 0x1.f2fd1f257658cp-551, 0x1.4fa96ba6d18b5p-809, 0.0, 0x1.d2af2a174bb3bp-183,
     0x1.1a8578c2c9072p-499, 0x1.2a38623538bc2p-249, 0.0, 0.0, 0x1.7780da5db8ebbp-10,
     0x1.cb435fb183819p-190, 0.0, 0x1.e25f25afac8efp-110, 0.0, 0x1.28328e168f2ffp-653,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64c04126ceecbp-647, 0x1.8e7b63d91745p-965, 0.0,
     0x1.e32ec3daf3117p-496, 0.0, 0.0, 0.0, 0.0, 0x1.05389bdaca68ep-885,
     0x1.e2f178eb1817dp-527, 0x1.cf151e579b3d8p-411, 0.0, 0x1.7c646e43963c5p-127,
     0x1.827784d003004p-34, 0x1.de519e84f77d1p-669, 0.0, 0.0, 0.0,
     0x1.a9b3194c55621p-335, 0.0, 0.0, 0.0, 0x1.8de8948a06788p-906,
     0x1.05b21761d8eaap-304, 0x1.8c56d49eb4a9fp-862, 0x1.c8b1aadc2cfdap-965,
     0x1.2a30205f94792p-59, 0.0, 0.0, 0.0, 0x1.4b95aa0d5be9ep-411,
     0x1.4342619a76a61p-442, 0x1.787aebb1ec36ep-995, 0x1.0942b4839abefp-882, 0.0,
     0x1.f96d5bc460e6p-522, 0x1.c592cdeaded04p-691, 0x1.d0cb2ce83e278p-398, 0.0,
     0x1.b4093d068d47bp-293, 0.0, 0.0, 0x1.a68c71869524ep-160,
     0x1.ca638fa6d2f33p-1000, 0x1.705c2ad7acef7p-368, 0x1.211d71de781acp-739,
     0x1.0628951b87dc5p-145, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b7117c5c07ddp-173, 0.0,
     0x1.14cd79519bdbep-178, 0.0, 0x1.f697d8d2ed2fep-787, 0.0, 0x1.c5ef62d8f7231p-69,
     0x1.fb26598ecf9aep-159, 0.0, 0x1.fd7d6f26dd3a5p-893, 0x1.c5f3fba071e5cp-45,
     0x1.e5c203badc191p-771, 0x1.0a85cfb8dea41p-868, 0.0, 0.0, 0x1.5fb1c4eab6dc8p-120,
     0x1.0cabeedeb2b14p-1012, 0x1.24fd2e3474101p-39, 0.0, 0.0, 0x1.fd87f2e29fd8ep-989,
     0.0, 0.0, 0x1.26273dcb58212p-91, 0.0, 0x1.7c931a1f77b7cp-247, 0.0, 0.0,
     0x1.6c277f6685499p-310, 0.0, 0x1.266524c690f11p-867, 0.0, 0.0, 0.0, 0.0,
     0x1.58020229f3588p-536, 0x1.c0df57c0a18ffp-136, 0.0, 0x1.7f52d05d8940cp-914,
     0x1.b3c2504063845p-377, 0x1.3744ba362a6dep-894, 0.0, 0x1.e0dbb09bbb93bp-991, 0.0,
     0x1.ecd7001c7f413p-525, 0x1.85f581c490442p-814, 0.0, 0x1.0ddfe952ae83p-70,
     0x1.fe7de4f07b7ddp-969, 0x1.254b0d368faf3p-299, 0x1.a654d6aef6bbfp-19, 0.0, 0.0,
     0x1.be3eea1b83b0fp-802, 0x1.e0a209ae1a8c9p-1019, 0.0, 0x1.864f0488f36b4p-939,
     0.0, 0x1.d2c95ad6339e7p-919, 0x1.54bee024bb5c9p-276, 0x1.1467bc1f30f62p-891,
     0x1.75820848acd2p-517, 0x1.139821e1087c9p-927, 0x1.2240dac5a8b9bp-194, 0.0, 0.0,
     0x1.612a07608e164p-380, 0x1.f759b3f280295p-349, 0.0, 0.0, 0x1.eb29ae40420dep-44,
     0x1.ef2ca922ab032p-793, 0.0, 0x1.a59afef07c269p-944, 0.0,
     0x1.483ce0b96e464p-1008, 0x1.d7c27087d902fp-589, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1c4adbe036ec3p-492, 0x1.765692f2a9042p-218, 0x1.4b1ebe6540a56p-487,
     0x1.6ed58bc2ea85bp-791, 0.0, 0x1.6fa620f05d0b1p-219, 0.0, 0.0, 0.0,
     0x1.3ee9ed7e02578p-149, 0x1.eb7e1b37020f5p-194, 0.0, 0x1.0c7d30bdab74bp-577,
     0x1.ea3c9df68cf95p-30, 0x1.712ac751b0541p-831, 0x1.08c4c28a66ac5p-867,
     0x1.b9f0380a34863p-923, 0x1.cfb66a055af22p-934, 0.0, 0.0, 0.0, 0.0,
     0x1.93d5da521dc29p-277, 0.0, 0x1.381227e72d1c2p-203, 0.0, 0x1.0eb089ab1c4c9p-775,
     0.0, 0x1.f36a860b6eaf6p-945, 0.0, 0x1.203e7e89d8eccp-222, 0.0, 0.0, 0.0, 0.0,
     0x1.01f82fac2a6cdp-316, 0x1.3e35883473a09p-632, 0x1.e043760c37fd5p-81,
     0x1.b822a0e90853ep-621, 0x1.f49d922e6fe56p-969, 0.0, 0x1.ce97cb669246fp-224, 0.0,
     0x1.4691df83d3be6p-167, 0.0, 0.0, 0x1.927e539728697p-680, 0.0,
     0x1.2ca182fdb79f2p-628, 0.0, 0.0, 0x1.0cba1eea6ae74p-567, 0x1.8e3b3d80f19d6p-563,
     0x1.4c1358c3b13b2p-221, 0.0, 0.0, 0.0, 0x1.802a7a0c3f184p-546, 0.0,
     0x1.99928452331fap-802, 0.0, 0.0, 0x1.798ea364b438dp-787, 0.0, 0.0, 0.0, 0.0,
     0x1.a824d95e20c21p-31, 0x1.925941afbeecp-744, 0x1.1139ab3644318p-772,
     0x1.9f87573c7eb0ap-181, 0x1.968f4cf89981ep-706, 0x1.ec99e8e96005bp-615, 0.0,
     0x1.4e9d400aefba3p-53, 0x1.a3d612ab48dfcp-303, 0x1.45405fbb489e7p-84, 0.0,
     0x1.f6dcbdaaa19e6p-925, 0x1.72899ec3cbb84p-625, 0x1.451489903aa6cp-996,
     0x1.3837645494529p-718, 0x1.c9f8abec80b71p-846, 0x1.97e2e2524b73ap-128, 0.0,
     0x1.9c3d892add39p-627, 0x1.f186a4f29b653p-754, 0.0, 0x1.e792270d01821p-569, 0.0,
     0x1.c44ed1fdabbd9p-754, 0x1.ed5ff11f5f5c7p-111, 0.0, 0.0, 0.0,
     0x1.569015afc008cp-859, 0x1.01c89ad265b9cp-770, 0.0, 0.0, 0x1.91ebb43fff4d9p-475,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b8056332bca9bp-574,
     0x1.b49cd235be54dp-336, 0x1.5ddb005e791a9p-764, 0x1.0ea0e5e9481fap-814,
     0x1.150d011ceaf25p-855, 0x1.7782a6a77b52ap-129, 0.0, 0.0, 0x1.06be04c37466dp-368,
     0x1.d6ca11e4f6565p-360, 0x1.3dc8fd2ae20ebp-328, 0.0, 0x1.f341258eebea1p-842, 0.0,
     0x1.c1faa7fdfdbfdp-660, 0.0, 0.0, 0x1.3dfa05d2efe97p-81, 0.0,
     0x1.5638d4aafbb91p-611, 0.0, 0.0, 0.0, 0x1.0cc1b5b12dca9p-429,
     0x1.6e54730412decp-331, 0x1.14db253388669p-883, 0x1.cc2e012613196p-137,
     0x1.f686e09557df4p-167, 0.0, 0.0, 0x1.bab11793cae41p-871, 0.0, 0.0, 0.0,
     0x1.0e1897b2716edp-83, 0.0, 0.0, 0x1.30781e7b65262p-28, 0.0,
     0x1.93def77be1761p-930, 0x1.6a3568f3996c3p-108, 0.0, 0x1.92eda34c06cddp-367,
     0x1.566ce360f847p-810, 0x1.aabbc6d2ec80dp-417, 0x1.645f10894a9a8p-909, 0.0,
     0x1.7ea1676022bcep-695, 0x1.93502b2b05aa2p-797, 0.0, 0x1.6ab14e6fec3e9p-623,
     0x1.e90a21381f891p-392, 0x1.ccb4407e12822p-180, 0.0, 0x1.985e23098c309p-818,
     0x1.cfad5378c7c8ep-839, 0x1.3a3d454e2a252p-670, 0x1.84c47ab411af2p-102, 0.0,
     0x1.53b87ef2886eap-52, 0x1.7a14f948776bfp-153, 0.0, 0.0, 0x1.c179fe8ea659bp-914,
     0.0, 0.0, 0.0, 0.0, 0x1.fd4ae30f16c33p-823, 0.0, 0.0, 0x1.ebc8bf5c51b74p-854,
     0.0, 0x1.61a6d1f45eac9p-915, 0x1.78bd3d0ba7ec9p-385, 0.0, 0x1.6496c58a5cd89p-623,
     0.0, 0x1.3207969420c5dp-368, 0.0, 0.0, 0.0, 0x1.4c8f482f0ca24p-817,
     0x1.065f58797652bp-562, 0.0, 0.0, 0.0, 0x1.ffcc197ef96fdp-605,
     0x1.702b08ec22e87p-699, 0.0, 0x1.f0bd3da87605bp-923, 0.0, 0x1.1b8cea0b628f5p-193,
     0.0, 0.0, 0x1.367ebe479a40cp-332, 0x1.8900c52714bc6p-399, 0x1.55bc8701c848bp-981,
     0.0, 0x1.7740c4e7bc87cp-683, 0.0, 0.0, 0.0, 0x1.389ddb511d7dfp-555,
     0x1.65dc1f926e499p-453, 0x1.b04ad0ee9f137p-224, 0x1.7b8f2f6542cf2p-486,
     0x1.7265d3f129569p-850, 0.0, 0.0, 0x1.c087e7833f52fp-254, 0x1.dafc660d81c7dp-507,
     0x1.a723ef9424dd9p-977, 0x1.08bd1b7b66634p-73, 0x1.4aca97900c513p-638,
     0x1.6276bbc65dc99p-631, 0.0, 0.0, 0x1.1bf0899abba82p-697, 0x1.955047cb4930fp-249,
     0.0, 0x1.825834fff1169p-715, 0.0, 0x1.51bd57a6fa9aap-1008, 0.0, 0.0, 0.0,
     0x1.e15f95245512fp-223, 0.0, 0.0, 0.0, 0x1.9c8ebe94050e9p-967, 0.0, 0.0, 0.0,
     0.0, 0x1.ba8937e1a932ap-113, 0.0, 0x1.30d288553aaaap-938, 0.0, 0.0,
     0x1.98283b1cb8632p-668, 0x1.51ff589d24bacp-280, 0.0, 0.0, 0.0, 0.0,
     0x1.e46e1a76643a5p-910, 0.0, 0x1.6eff9a295d594p-1007, 0x1.7590bf267888p-964,
     0x1.b59abb9ad94f9p-524, 0x1.5dbbf46ba07fcp-559, 0x1.8aaa4539b1a0cp-233,
     0x1.cf02c80265e9cp-809, 0.0, 0x1.147863f54f8d7p-9, 0x1.d75c8b3820704p-224, 0.0,
     0x1.d15f34881a44ap-620, 0.0, 0x1.90f90879686dfp-674, 0.0, 0.0, 0.0, 0.0,
     0x1.594994325151dp-225, 0.0, 0.0, 0x1.ded1c37dcc2fcp-412, 0.0,
     0x1.6eeba4567cb72p-437, 0x1.df0cb21e09fa7p-615, 0x1.d1569ec14f96p-626, 0.0, 0.0,
     0x1.358372cf2ce49p-157, 0x1.8c16296140507p-964, 0.0, 0x1.a5fe13f1c8e36p-604, 0.0,
     0x1.c1a5989019b2fp-583, 0x1.6a4266637cb11p-127, 0x1.f7e22dddbdb14p-566,
     0x1.bf2ae57b3ab35p-238, 0x1.d66ffeae5be1dp-6, 0.0, 0.0, 0x1.746004beebe39p-669,
     0x1.db0f3d6fa2f3dp-997, 0.0, 0x1.8e611406fe2e4p-163, 0.0, 0x1.60d8a0e32843ep-509,
     0.0, 0x1.dfbd483d9a7cfp-973, 0x1.5f52ae9489b93p-261, 0.0, 0.0, 0.0, 0.0,
     0x1.343a1e570fe76p-897, 0.0, 0.0, 0.0, 0x1.8f05eae4f7424p-113, 0.0,
     0x1.4a859c7c7a058p-286, 0x1.57ede990ec0d9p-254, 0.0, 0x1.f05fc5dbd108cp-392, 0.0,
     0x1.5cc2a6bfadbcbp-293, 0.0, 0.0, 0x1.595bc10de6d42p-925, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2349d48192d5p-149, 0.0, 0.0, 0x1.163115e9ee359p-375, 0.0, 0.0, 0.0,
     0x1.2d9877215d4fdp-913, 0x1.25e610392edafp-418, 0x1.a6cfcbbef1808p-381, 0.0, 0.0,
     0x1.f036275a86ffep-142, 0.0, 0.0, 0x1.6007092bba932p-390, 0x1.1737fe8b0688p-771,
     0.0, 0.0, 0x1.6be7fa076e19cp-932, 0.0, 0x1.3c05267e6cbd1p-688,
     0x1.275ba73e60734p-730, 0x1.50ae492ec59p-873, 0.0, 0x1.5cea8130b2ab8p-1009, 0.0,
     0x1.1b19e5f1b1a63p-510, 0.0, 0x1.f43cc94e0d9bfp-235, 0.0, 0.0,
     0x1.fcb9e4a93e6e8p-163, 0.0, 0x1.28cc89fe2d1b3p-236, 0x1.7e65dfdb8451bp-846,
     0x1.39242e322adep-387, 0x1.3efcbd1594b2ep-611, 0x1.f49dcfdc4fa54p-277, 0.0, 0.0,
     0x1.7df77e9333706p-259, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1523ab5429a1ap-692, 0.0, 0x1.b17db5379faf4p-513, 0.0, 0x1.4789accfa2edap-468,
     0.0, 0x1.d799ddfb9759p-629, 0x1.e45929513fc51p-585, 0x1.eb78ce86a64ecp-123,
     0x1.c5d67d3c2167fp-568, 0x1.c9cdee4298a32p-938, 0.0, 0x1.5787107809eb3p-113, 0.0,
     0.0, 0.0, 0.0, 0x1.7ab7b61ea0135p-127, 0x1.678e5d9cee35cp-1,
     0x1.9f2b967d0eb6cp-35, 0.0, 0x1.6db2a59bc65b9p-967, 0x1.76c5fecfda452p-860,
     0x1.bf8f310baf83cp-212, 0.0, 0x1.98ece94ec1852p-861, 0.0, 0.0,
     0x1.8c6250fc1b115p-173, 0.0, 0x1.3a37b6d1e317ep-228, 0x1.2e7b87ef8f6b1p-404, 0.0,
     0x1.4f89915165d3dp-963, 0.0
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
            tmp1 = Sleef_finz_roundd1_purecfma(tmp0);
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
    printf("Sleef_finz_roundd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_roundd1_purecfma bench acc %la\n", global_bench_acc);
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
