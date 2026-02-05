/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expfrexpd1_purecfma.c --function \
 *     Sleef_finz_expfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision int32 --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0x1.83d6cd63ba3d3p-697, 0x1.299784d38e43bp-353,
     0x1.c1460188fa6fep-438, 0x1.ffca65b02e547p-441, 0.0, 0x1.e4cb76fcbbb85p-595, 0.0,
     0.0, 0x1.495722cc1ee33p-713, 0.0, 0x1.046e639592501p-231, 0.0,
     0x1.60651ce44c44fp-685, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a097b00d8ddb5p-949,
     0x1.20d8567dd962fp-545, 0x1.df5c4cd230b32p-772, 0.0, 0x1.6f711b4438caep-326,
     0x1.cf99e0aa0a845p-312, 0.0, 0.0, 0.0, 0x1.be51b8a1e86fdp-14, 0.0,
     0x1.a77e22a1b5fp-639, 0x1.c0ce77f59efecp-468, 0x1.4dcd2e9a0e325p-768,
     0x1.864a70a24cf86p-59, 0.0, 0x1.02bb9c9c20407p-420, 0x1.bc500da5bc91ap-414, 0.0,
     0x1.95e9047d6e8e6p-50, 0x1.3bffae1185fe3p-173, 0x1.d5decb94c7dd2p-49,
     0x1.1c4cbc4af9422p-169, 0x1.bea6c8121bc02p-126, 0.0, 0.0, 0x1.072faa6d04d45p-111,
     0.0, 0x1.1e92be2743368p-242, 0.0, 0.0, 0x1.6874af71ed5d5p-86,
     0x1.0eada15efabafp-348, 0x1.b2a1d543adb22p-294, 0.0, 0.0, 0.0,
     0x1.90c34e48c84f8p-293, 0x1.c8089068bd6c1p-242, 0.0, 0.0, 0x1.9a3824c4840f3p-590,
     0.0, 0.0, 0x1.ed540a45d3881p-457, 0x1.b31fd1d85f97bp-425, 0x1.dcbffe7622a3bp-340,
     0x1.0fef6331093bp-935, 0x1.d7edaa91514cbp-844, 0.0, 0x1.7393508f2249bp-688,
     0x1.9ad59532e1fe7p-1007, 0x1.ebe00cb22ad27p-305, 0.0, 0x1.f067399ed1923p-649,
     0.0, 0x1.0928866d884acp-6, 0.0, 0.0, 0x1.7f62e173cab69p-920,
     0x1.4548a481c0d8ap-627, 0x1.6f0e25d6a22dfp-796, 0x1.7233177603b43p-590,
     0x1.a4e46dcf1f0dep-357, 0x1.bf7b5bb6f2f49p-37, 0x1.0bfded8c3ccbfp-362,
     0x1.2121712db947fp-625, 0.0, 0x1.a453ef3809d61p-318, 0.0, 0x1.47d10e9cee69ap-745,
     0x1.3b8eeda3cc5abp-28, 0x1.759b7a068a0e5p-981, 0.0, 0x1.97695a58e7a6cp-785,
     0x1.2c9418b0cd44p-611, 0.0, 0x1.cd6ea85c7beb1p-933, 0.0, 0x1.f1547906d8eb5p-183,
     0.0, 0x1.5727dc8f077dfp-963, 0x1.9d79459aff041p-603, 0x1.a4fd165df4361p-661, 0.0,
     0x1.b05918d585b1ap-938, 0.0, 0.0, 0x1.259ccbef3329ep-112, 0.0,
     0x1.23dda48a41a88p-767, 0.0, 0.0, 0.0, 0x1.db8b1f7205f6cp-685, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.35a6a05f545e1p-688, 0x1.73a174b5743f7p-355, 0.0,
     0x1.586f67356e683p-709, 0x1.bcac2ae75c56bp-655, 0x1.9c20eb35d44edp-907,
     0x1.7cd530818f877p-212, 0x1.3f8149dc29222p-429, 0.0, 0x1.651f943ab50ap-666,
     0x1.dc7a76d29f98dp-929, 0x1.6e68fbb1fa328p-142, 0.0, 0x1.e7475c6a1dd2fp-207, 0.0,
     0x1.c034d58522c78p-380, 0.0, 0x1.59319be56381bp-992, 0.0, 0x1.3048e9101daafp-128,
     0x1.b5394d383816p-851, 0.0, 0.0, 0x1.64b242df53b5fp-749, 0x1.2dcfe96b1a523p-539,
     0x1.3fdbae2e6b2d9p-105, 0x1.c54e5fcac523ep-766, 0.0, 0.0, 0x1.2ce7e8195cd8bp-254,
     0.0, 0x1.c786a51f08c1ap-975, 0x1.5fb057c414e74p-681, 0x1.f2ab0b384ece2p-304, 0.0,
     0x1.1ae112d13c4cfp-260, 0.0, 0.0, 0x1.b9497ec119b79p-313, 0x1.b6c689ccb674fp-78,
     0x1.c0ceb84930314p-701, 0.0, 0x1.306dafb2b100cp-556, 0x1.3fb56f3e0dd6cp-810,
     0x1.3f06f3f94226bp-972, 0.0, 0x1.204d9936cc8a2p-465, 0x1.373e2aca71b19p-316, 0.0,
     0.0, 0.0, 0x1.8293eca8381d6p-33, 0x1.926aad813b186p-298, 0.0, 0.0,
     0x1.f2d8e041b523dp-281, 0.0, 0.0, 0x1.dd5e319bb14d8p-40, 0x1.44c93b1cce54fp-249,
     0x1.2d8ddcb29fb36p-366, 0x1.3b03ee27be4d2p-178, 0.0, 0.0, 0.0,
     0x1.97464469dd8c7p-866, 0x1.cd09cbc43f332p-711, 0.0, 0.0, 0x1.45697ce64d289p-808,
     0.0, 0x1.9a4966f5d85b8p-962, 0.0, 0x1.092e70c8bbd1dp-808, 0x1.875ce578dec6ap-555,
     0x1.19f21d69f7368p-445, 0x1.def662e7e3bc7p-216, 0.0, 0x1.f404a6540410ap-622, 0.0,
     0x1.4af54facbadd3p-357, 0.0, 0.0, 0x1.bf46c4be76035p-884, 0x1.1ff23e41d3401p-578,
     0x1.65be3f80e0872p-890, 0.0, 0.0, 0.0, 0x1.67f30bb58e70cp-47, 0.0,
     0x1.348f95ec80c52p-410, 0x1.259e759c7a3a6p-756, 0x1.307ab5b547bc4p-533,
     0x1.7c9b8dc8a6cf4p-883, 0x1.36119c0999cb6p-587, 0.0, 0x1.ebeec12cac955p-563,
     0x1.f7da59689949bp-856, 0.0, 0x1.0883a7263c553p-406, 0x1.a1001f5e56452p-416,
     0x1.ef0edf8bc6ee5p-341, 0.0, 0.0, 0.0, 0x1.48f68a0a7b534p-564, 0.0, 0.0, 0.0,
     0x1.0481d9d685adap-484, 0.0, 0x1.2d6d8e73ab33dp-330, 0.0, 0.0, 0.0, 0.0,
     0x1.174e232aea3e5p-570, 0.0, 0x1.6cdd3578010fcp-944, 0x1.57b1641bafbeep-657,
     0x1.5b1f7d36652b2p-838, 0.0, 0x1.6868366993124p-340, 0.0, 0.0, 0.0,
     0x1.4fa831ee683e5p-368, 0x1.738b63ae9583p-551, 0.0, 0x1.75f92a6922e0bp-810,
     0x1.02629d1b378cdp-128, 0x1.144d55d27023ap-251, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.47fbd77d60f3ap-244, 0x1.c2b3921d73fe2p-598, 0.0, 0.0, 0.0,
     0x1.344e208b163ddp-298, 0.0, 0x1.395af0c268023p-102, 0x1.5f86c8859d9e5p-776,
     0x1.209976f18ae27p-917, 0.0, 0.0, 0x1.f0b32b05c341cp-691, 0x1.fcd11596b5883p-565,
     0.0, 0.0, 0x1.5d8ba9f06a5d5p-382, 0.0, 0x1.7798ac10a0aefp-557, 0.0,
     0x1.714b7cae00ec5p-493, 0x1.3fa75ffc4d0bep-611, 0.0, 0x1.444c28eb7e9a7p-748,
     0x1.cd6c03f8a510ep-884, 0.0, 0x1.b1fef042b69fdp-846, 0x1.e4ecb5b79429fp-311,
     0x1.c8572163c6ba3p-877, 0.0, 0.0, 0x1.ae6ee9ad156dep-25, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9b3e5fe17cb0ep-565, 0.0, 0x1.d97f3f8930366p-922, 0.0, 0x1.8bfbf1aeabb5cp-908,
     0.0, 0x1.aef3acc0b8226p-31, 0x1.1517fb9469b93p-159, 0.0, 0x1.0af10673777dp-913,
     0.0, 0x1.5af7c9bf81692p-489, 0.0, 0x1.0a7cd47413a29p-79, 0x1.96e212ad25cf5p-127,
     0x1.1ae7b0d3d8d4ep-637, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82cc9a0d1dc22p-825,
     0.0, 0x1.8b1dc2c4ef135p-68, 0.0, 0x1.3b4db8c7bd2dfp-759, 0x1.579170941af8ep-736,
     0x1.71963e8386dcbp-740, 0.0, 0.0, 0.0, 0x1.74acb1ca3f9fcp-436, 0.0,
     0x1.04a74d065e549p-549, 0x1.28020c8e40133p-701, 0x1.4523c08df3338p-961, 0.0,
     0x1.88bf0d832e266p-400, 0x1.c18f7817000a3p-811, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e695e86b217dcp-129, 0x1.b7467f95a0b4fp-898, 0.0, 0x1.b73f2711ca20dp-875, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5ec5e308dd017p-363,
     0x1.3dd78a34469a5p-161, 0x1.cde44d6647a51p-500, 0x1.17ef3bbf67a1ep-864,
     0x1.16f8d594a6a7dp-549, 0x1.4467bd2d5c285p-354, 0x1.cc547758032cep-695,
     0x1.9f94d4046e0cbp-969, 0x1.d69115172030bp-514, 0.0, 0x1.45f8c1973a9e6p-620,
     0x1.78bdd784bae01p-967, 0x1.8fc25d05116cep-826, 0.0, 0x1.626cfc8b558a7p-653,
     0x1.bd29f06ffacf4p-946, 0x1.480c436dd8b1ap-119, 0.0, 0.0, 0x1.5d75d9fecadcfp-159,
     0x1.a9751c8e810f5p-459, 0.0, 0x1.72cbeb906147ep-93, 0x1.61c981824c8dcp-361, 0.0,
     0.0, 0x1.3c2bab9ac6dfap-394, 0.0, 0x1.adc4e0a8146cp-756, 0x1.0191efdda773fp-207,
     0x1.d3156253d9d42p-182, 0x1.a58100063953ap-644, 0x1.b1b52bc2d89dep-574,
     0x1.fc144f4dd3677p-830, 0x1.e87d3d2aa0557p-604, 0.0, 0x1.2cbdfab23f7e2p-547, 0.0,
     0x1.8a9af16f77f84p-497, 0.0, 0x1.26e29b675c3f8p-781, 0.0, 0x1.7ac2d0831abbp-320,
     0x1.761b5b4256bffp-376, 0.0, 0.0, 0x1.3c84cbb5ffc78p-740, 0x1.f1fde5dc52ad3p-812,
     0.0, 0x1.01f7d6763c9ap-237, 0.0, 0x1.2684e515dac4cp-979, 0x1.c3a519d926716p-605,
     0x1.3f39f501686cp-168, 0x1.f119da8ef970ap-187, 0.0, 0.0, 0x1.50bc26c447fb5p-302,
     0.0, 0x1.422ed3f943097p-674, 0x1.9bce4707caa92p-485, 0.0, 0x1.8b36583e7451fp-360,
     0x1.3f176139ef4f2p-957, 0.0, 0.0, 0x1.9cb76672aabc1p-893, 0x1.1d5c190cf3d9p-518,
     0.0, 0x1.7ab23bbfbbb7fp-887, 0.0, 0x1.9fe99142aa717p-973, 0x1.c025125aaf82ap-85,
     0.0, 0x1.2f195a698c24ap-484, 0x1.f4e264a56ac5bp-517, 0x1.1a37fdc6a59d8p-272, 0.0,
     0.0, 0x1.9087524ee8013p-730, 0.0, 0.0, 0.0, 0.0, 0x1.1e0857958756ep-880, 0.0,
     0x1.300e43a87e3ddp-982, 0x1.1b51950d914cbp-843, 0x1.df1e87b03ba0ap-16, 0.0, 0.0,
     0.0, 0x1.8db4ee3ea33bcp-30, 0.0, 0x1.01f0546ac310dp-651, 0.0,
     0x1.f9d242a5e53fep-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a593a8f5db8e2p-478,
     0x1.8a0ab0d018e3fp-490, 0.0, 0.0, 0x1.4b124f55cbb88p-825, 0x1.9c8963c9eadebp-886,
     0.0, 0x1.b15936d67b30cp-716, 0.0, 0x1.52508ddbb8942p-799, 0.0,
     0x1.9156a4e578ca2p-690, 0x1.9d76a41a179dcp-108, 0x1.f320e6a2191b9p-709, 0.0,
     0x1.b935b0a8a3026p-279, 0.0, 0.0, 0x1.02ecc12835da4p-737, 0x1.c044578e761bcp-948,
     0.0, 0.0, 0x1.9815ae5e9a9cp-931, 0.0, 0x1.c7b0aca049e97p-407, 0.0,
     0x1.13390902ff418p-660, 0.0, 0.0, 0x1.80903ac668f3ap-36, 0x1.e0bbade060ca8p-724,
     0x1.2a0565cee79e9p-144, 0.0, 0.0, 0x1.175fd73c4b872p-985, 0.0,
     0x1.579e319e6fe83p-686, 0.0, 0.0, 0x1.4febafa655985p-247, 0x1.1f547957236a3p-257,
     0.0, 0.0, 0x1.779908cb6adecp-711, 0x1.d49869f2468fbp-634, 0.0,
     0x1.01eec2274a901p-919, 0.0, 0x1.352b8e3b8d0d2p-180, 0x1.ff092ef98a0cap-961, 0.0,
     0.0, 0x1.d9462a082a23ep-256, 0.0, 0x1.f02eb7661b7fap-939, 0x1.285ea9f0ddbcbp-255,
     0x1.81c09aca5f081p-504, 0x1.72d0aaa5dfbe7p-229, 0x1.4f3e1e9f4defep-918,
     0x1.ea99574053b3dp-802, 0x1.315e74e78a326p-733, 0.0, 0.0, 0.0,
     0x1.28bafbc7d203fp-59, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48eb6c751caafp-386,
     0.0, 0.0, 0.0, 0x1.51ec06a64546fp-186, 0.0, 0x1.0328c4ba7d827p-642, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.97f2fad1da523p-465, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0f89582fd70c6p-298, 0.0, 0.0, 0x1.8d1b211a53a34p-819, 0x1.f37e0efce88cdp-897,
     0x1.f777ff1780f41p-818, 0x1.d53368851a531p-767, 0.0, 0x1.b5cd877035d9bp-843,
     0x1.8d7433a779782p-463, 0.0, 0.0, 0x1.eb808c7cdc4fap-641, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1f98d3bb3b99bp-393, 0.0, 0.0, 0x1.7ca1e3d78de74p-270, 0.0,
     0x1.e585dd6d47db6p-883, 0.0, 0.0, 0x1.de71b619cdbb3p-719, 0x1.5ce102c9d4a0cp-109,
     0.0, 0.0, 0x1.4d325753808b5p-313, 0.0, 0x1.87bdb8493146fp-706,
     0x1.b9a007199ca89p-406, 0.0, 0x1.8193b8172156cp-992, 0x1.1378b332633c9p-931,
     0x1.a1f3607cfe23ep-995, 0x1.421cc6aa3f5ecp-537, 0x1.639b4a013c94bp-805,
     0x1.943bb32c0c1dap-201, 0x1.504327028b133p-755, 0.0, 0x1.dad2c186e90dfp-528, 0.0,
     0x1.71a406651408ap-229, 0.0, 0.0, 0x1.b0bc8dabf8564p-130, 0x1.c6fb98c6e3541p-29,
     0.0, 0.0, 0x1.4634c7fdd70eap-372, 0x1.342bd074656dp-34, 0.0,
     0x1.53c0258a2a5ffp-119, 0x1.168207d86b9dcp-230, 0x1.794b42226b00ep-317, 0.0,
     0x1.60f2bb6404e5p-829, 0.0, 0.0, 0.0, 0x1.b01d723ad500cp-24,
     0x1.d41f49dbe6205p-275, 0.0, 0x1.1dd03a77f636dp-479, 0x1.5b26e60b20cfcp-835, 0.0,
     0x1.8875344635235p-567, 0.0, 0x1.2ab9c2941547fp-198, 0.0, 0.0,
     0x1.d649f4e520ad4p-963, 0.0, 0x1.fe04aee1a9f9ap-346, 0x1.0f89040ee6faap-677,
     0x1.6f54257ac91bcp-512, 0x1.23ac92f29514fp-557, 0.0, 0.0, 0x1.19c5e403c8a51p-364,
     0.0, 0x1.bd3b02d96c0ap-1010, 0x1.ae767f9f349e8p-355, 0.0, 0.0,
     0x1.3119430a7b4aap-750, 0.0, 0x1.225988214ffedp-342, 0x1.76a7629190a95p-484,
     0x1.5be693c8a91eep-513, 0.0, 0x1.8883a1942705ap-389, 0x1.bc9315190eb14p-25,
     0x1.06b2dc679f833p-711, 0x1.4eecddbb39d53p-77, 0x1.414582506bfdcp-764,
     0x1.687d843e3bd8cp-609, 0.0, 0.0, 0.0, 0.0, 0x1.cf55d8fe007dep-757,
     0x1.eb2b1df6c8ea5p-834, 0x1.ca4fe544cf8c1p-168, 0.0, 0.0, 0.0,
     0x1.a2875f4eeea8p-728, 0x1.0094102e80da2p-931, 0x1.dbd56ecdb37bdp-759, 0.0,
     0x1.34fb4802fbc17p-319, 0.0, 0x1.227551222c45ap-696, 0.0, 0x1.b6cd19b993a14p-60,
     0x1.51eee8d286cep-1016, 0.0, 0x1.04bf0901eb17fp-36, 0.0, 0.0,
     0x1.2432e1803108dp-280, 0x1.8f20d661b20d5p-323, 0x1.e7383b1fa425ep-836,
     0x1.93ca3e9b11546p-561, 0x1.680589b156598p-902, 0x1.a1847e4ef633cp-349,
     0x1.e84e241f616f8p-737, 0.0, 0.0, 0x1.05ae2101e8a2ep-826, 0.0, 0.0, 0.0,
     0x1.270fd153c1317p-208, 0x1.c98b503461fap-255, 0x1.e4113714ed89p-385,
     0x1.7d7ec4b2ecb2fp-1010, 0.0, 0.0, 0x1.d325c420052ffp-19, 0.0,
     0x1.cf4b39cbb1058p-96, 0x1.d7b0cd791e67ep-291, 0x1.02231c9855ff9p-123,
     0x1.6ee2c73736051p-798, 0x1.74ca7fb9ee423p-815, 0.0, 0x1.1db085e24cb4cp-885, 0.0,
     0x1.218b898d84154p-698, 0.0, 0x1.6cf05529003f3p-45, 0x1.d9c4dc767c48ep-965,
     0x1.c1c1c49061862p-855, 0x1.cb6c8107723ebp-341, 0x1.62c2451ca8a42p-550,
     0x1.bba028b462826p-272, 0.0, 0.0, 0x1.8c4a8fdc3678ap-11, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1b71836a6e8fp-350, 0x1.20e8e93d90adap-971, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8a119eba70c8p-262, 0.0, 0x1.ab170fa5c3ef1p-401, 0x1.bfdd6f703493ap-206, 0.0,
     0x1.145da7561efd8p-346, 0.0, 0x1.ec59e34ea5d12p-149, 0.0, 0x1.ed6549abfc3dap-345,
     0x1.fbaf2e89973c6p-105, 0x1.8af4c1826f45ep-418, 0x1.b725e52014cffp-447, 0.0,
     0x1.bcaaa6b1a960bp-118, 0.0, 0.0, 0.0, 0x1.a6e3a461fd139p-889, 0.0, 0.0, 0.0,
     0.0, 0x1.ddd7e2905a8ep-52, 0x1.59bbfa6e29e9dp-292, 0.0, 0x1.2346093f426eep-696,
     0x1.982491264f61fp-864, 0x1.a1d56f2668c89p-643, 0x1.de56986de2f2cp-591, 0.0, 0.0,
     0x1.f77c196f8da78p-722, 0.0, 0x1.9b8fcbcd9ca3ep-271, 0x1.34e11faaa6e37p-218, 0.0,
     0.0, 0.0, 0x1.e2c2633831a8cp-606, 0x1.8890a37899507p-750, 0x1.2a4116bb6eb8ap-867,
     0x1.b8106c98f13b3p-535, 0x1.055cef956d8e2p-261, 0x1.b2587c95bec38p-708,
     0x1.ea7ebef16ef55p-304, 0.0, 0x1.07b5c0493b02p-110, 0.0, 0.0,
     0x1.ab066c7f51785p-277, 0x1.d2abf919c3622p-644, 0x1.6a491ceda2064p-322, 0.0,
     0x1.90136ed4a83c4p-464, 0x1.43a9726f16845p-638, 0x1.330cbf975e3f9p-642, 0.0,
     0x1.eb58601cd5533p-810, 0.0, 0x1.354770370a5bp-334, 0x1.edc1f7ec59cap-213, 0.0,
     0.0, 0x1.e60e3fe4f223fp-722, 0.0, 0.0, 0x1.90241809e362bp-85, 0.0, 0.0,
     0x1.54eaf9958e474p-790, 0x1.c5b7684febd78p-549, 0x1.074fcfc06a70dp-358,
     0x1.3974d9b28972bp-767, 0.0, 0.0, 0.0, 0.0, 0x1.93028643d97c1p-438,
     0x1.6edadb60821d5p-536, 0x1.8f8eb2a783d62p-162, 0x1.71921e3db93aap-995,
     0x1.95ecb6e7732f7p-183, 0.0, 0x1.bdd8998a0d8d6p-748, 0x1.c0d0c2a966d18p-367,
     0x1.0a48603e534dbp-424, 0x1.d739112e6e2c3p-791, 0.0, 0x1.26f11a1865207p-101, 0.0,
     0x1.ec0dc9854f41cp-718, 0x1.dbe3968a1b296p-469, 0.0, 0.0, 0.0,
     0x1.c59908d6c0158p-599, 0x1.279892e1473d7p-435, 0x1.469c44505db88p-844,
     0x1.087aa0666bb37p-255, 0.0, 0.0, 0x1.d4c58f6d27f5dp-882, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6d1f711302ef1p-418, 0x1.af2b352b5bed9p-95, 0x1.321989356327ep-221,
     0x1.9e7176831704fp-733, 0x1.e4d3fb4f8b7d6p-64, 0x1.057bce7d278a7p-172,
     0x1.19a9526016d4ap-526, 0x1.cbe99fd9c4363p-534, 0.0, 0.0, 0x1.97a1bbac51bacp-129,
     0x1.9ce1641e84171p-206, 0.0, 0x1.0e1991c7022dbp-761, 0.0, 0x1.6f652153785b2p-364,
     0.0, 0x1.17c506b0fc656p-791, 0x1.e7cf8a781e125p-149, 0.0, 0.0, 0.0,
     0x1.a07457359b993p-268, 0.0, 0x1.2f38340d9a75fp-793, 0.0,
     0x1.1452f30e0e072p-1014, 0.0, 0x1.9ee3806c8cd89p-530, 0x1.885b4237e462fp-474,
     0.0, 0.0, 0.0, 0.0, 0x1.28a1bd64bcdf4p-34, 0x1.47fec71b189d8p-17, 0.0, 0.0, 0.0,
     0.0, 0x1.b84c7c644ad03p-146, 0x1.b6f3032e93763p-629, 0x1.7d64c829f363cp-945,
     0x1.520e6b0426cfcp-348, 0.0, 0.0, 0x1.d55c91bd2651bp-889, 0.0,
     0x1.ed17715d906c6p-888, 0x1.fe3cc33fbd33fp-775, 0.0, 0.0, 0x1.2fe7e5a966972p-470,
     0.0, 0x1.611b2180e2e16p-936, 0x1.a7ae170e3d763p-660, 0.0, 0x1.83260aede2ee5p-613,
     0x1.295602abaae2bp-244, 0.0, 0x1.2985e0dde867p-282, 0x1.1ffec612d0d19p-817, 0.0,
     0x1.de3ad02b4dfddp-345, 0x1.8e0a06d84bfc7p-320, 0.0, 0.0, 0.0, 0.0,
     0x1.1b95de261dcbcp-706, 0x1.86c061c61fc3bp-102, 0.0, 0.0, 0x1.6d9aae3f9a78ap-668,
     0.0, 0.0, 0x1.c96a8a77b4ee3p-124, 0.0, 0x1.e69ebfa6296acp-991, 0.0,
     0x1.4cb3d1dd84edcp-934, 0.0, 0x1.4937e6aaeedb2p-372, 0x1.bbf1bbd97e229p-782, 0.0,
     0x1.74485835599d5p-440, 0x1.81b80b48e85dep-233, 0x1.34ba1eb5e716p-590,
     0x1.aa55954f86a3p-482, 0.0, 0x1.5005f3fa34451p-244, 0x1.2e21b1585b462p-890,
     0x1.4e0b8bd329af2p-757, 0x1.99e9d9ea95cf1p-350, 0x1.c292d86fdf622p-55,
     0x1.f9df4a4f0b939p-346, 0x1.1d238c465e88cp-358, 0x1.e0c31d4ed0ffep-360,
     0x1.2b7bb4c3b4965p-461, 0x1.4d0f49dbea8e4p-862, 0x1.fe7ef863f6985p-801, 0.0,
     0x1.cf2e54f294a0cp-751, 0x1.cbb1c90220dfcp-494, 0.0, 0.0, 0x1.0d9f1afa0ceafp-832,
     0x1.76f55805401fap-274, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8378c8be4629cp-419,
     0x1.6c44338092d12p-647, 0.0, 0.0, 0.0, 0x1.3491574b5c238p-444, 0.0,
     0x1.5f80df23e03dbp-269, 0.0, 0.0, 0.0, 0x1.30b29f82b8cafp-448,
     0x1.6f2348e0c0843p-400, 0x1.06cd4af65758fp-592, 0x1.4fe4b752837dap-443, 0.0, 0.0,
     0x1.b63af4e4193c1p-255, 0.0, 0x1.9ab257b47c75p-703, 0x1.3e02c2f8ed0abp-644,
     0x1.a86cd3a130a76p-256, 0.0, 0x1.fb2bd447ed10bp-750, 0.0, 0x1.44e66fa45dff8p-722,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af31f0e4046c3p-761, 0x1.675f1cc5500abp-689,
     0x1.d3124fd11d75dp-144, 0x1.71ced466b5deep-912, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d11c1b4eae60ap-753, 0.0, 0x1.f99833be574dbp-587, 0x1.c8dd8348d16e2p-562,
     0x1.f982c33ddd436p-486, 0x1.e97588d0140a2p-257, 0x1.19fe2ab8977a7p-821, 0.0, 0.0,
     0.0, 0.0, 0x1.202c47554ab8ap-642, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = INT32_C(0);
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_expfrexpd1_purecfma(tmp0);
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
    printf("Sleef_finz_expfrexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expfrexpd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
