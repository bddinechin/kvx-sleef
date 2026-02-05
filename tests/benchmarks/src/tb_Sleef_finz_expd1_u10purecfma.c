/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expd1_u10purecfma.c --function \
 *     Sleef_finz_expd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.54062a696cd64p-691, 0.0, 0.0, 0x1.9bd5a02a47cd8p-171,
     0x1.c1a0024eae435p-251, 0.0, 0.0, 0x1.da50684fba3a6p-406, 0x1.f16e78fe782bp-756,
     0.0, 0x1.80b8dcff68b89p-744, 0x1.a4d28d7d723p-658, 0x1.defb0ea1fe202p-551, 0.0,
     0.0, 0.0, 0.0, 0x1.d776c8025d5a6p-891, 0.0, 0x1.1929bf47d4cep-523, 0.0,
     0x1.baadf142c3e5bp-74, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae958dc8fbb04p-165, 0.0, 0.0,
     0x1.fafae741338dep-18, 0.0, 0.0, 0x1.d515bc4fb780ep-767, 0.0,
     0x1.a8ecef9648638p-655, 0.0, 0.0, 0x1.9f22c4ee5f628p-653, 0x1.910a01332718ap-322,
     0x1.a21eae3c0ec68p-3, 0.0, 0.0, 0.0, 0x1.ffd88cdbb4098p-598, 0.0, 0.0,
     0x1.50b58f75e2a7dp-621, 0.0, 0.0, 0x1.ed18e9bfd1311p-42, 0.0, 0.0,
     0x1.ddfdeb54267e3p-875, 0.0, 0.0, 0x1.b21bf7a3bf299p-1009,
     0x1.3480aea829c42p-706, 0x1.db6688ff842e6p-147, 0.0, 0x1.487aa448168c5p-106,
     0x1.9eda1ff358bd2p-744, 0.0, 0x1.5a501538e1b08p-608, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.803459daea8c3p-189, 0x1.560581f29dc72p-221, 0.0,
     0x1.7fab0bf60d6aap-118, 0.0, 0x1.1cc836b61c474p-470, 0.0, 0x1.b6b99de7a7ff6p-344,
     0x1.908c8a61c4a1cp-414, 0x1.e5e3d197beff4p-809, 0.0, 0.0, 0x1.2fd9b7a64863dp-655,
     0x1.a48d6b9a30b7dp-669, 0x1.e261b8722b4d3p-795, 0.0, 0.0, 0x1.0d52f91604297p-671,
     0.0, 0x1.da796db28759p-795, 0.0, 0.0, 0x1.372a3ba4b4f29p-589,
     0x1.bf3c1e8dde352p-764, 0.0, 0x1.bf5c93b4b4929p-289, 0x1.d74705298c5a8p-646, 0.0,
     0x1.006d0ee8a0d96p-1006, 0x1.237c88fbf8104p-976, 0x1.41295c4fa7f5cp-826,
     0x1.2605f184dad3ap-561, 0.0, 0x1.6a0f6e56f2c7cp-779, 0x1.aab9d9e68118ep-929,
     0x1.f9976dd2cb03fp-250, 0x1.33fdc4f5f5af5p-113, 0.0, 0x1.9494dc6ca452dp-715, 0.0,
     0.0, 0x1.9692f294833b5p-445, 0.0, 0x1.d0ab791ae8b31p-135, 0.0, 0.0, 0.0, 0.0,
     0x1.2de49f8e7099fp-564, 0.0, 0x1.e2844816d9852p-144, 0.0, 0.0, 0.0, 0.0,
     0x1.7db68d5664238p-799, 0.0, 0.0, 0.0, 0x1.e57dae3369d4p-421, 0.0, 0.0,
     0x1.d64e52825e2b1p-2, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f392e0b09fe8p-423, 0.0, 0.0,
     0x1.57961c77ad507p-863, 0.0, 0.0, 0x1.548b09e9f58b5p-377, 0x1.6827a0f086696p-968,
     0.0, 0.0, 0.0, 0.0, 0x1.dabea000106dcp-484, 0.0, 0.0, 0.0,
     0x1.c22dd67ce3ef2p-688, 0.0, 0x1.c350f0a848947p-862, 0.0, 0x1.ee5ca22e30af4p-357,
     0.0, 0x1.52ee9f9b82f5p-269, 0.0, 0.0, 0.0, 0x1.a79247e9432d9p-879,
     0x1.ba2d6824af4cdp-866, 0.0, 0x1.b39304fe144ffp-130, 0.0, 0x1.1d3f168841d96p-659,
     0.0, 0x1.65a57093d55a7p-351, 0x1.ee33347c44b3bp-363, 0x1.5eac1a0515c6ap-769, 0.0,
     0.0, 0x1.fa42e6a19527bp-331, 0.0, 0.0, 0x1.90c22a9c3b2ap-255, 0.0,
     0x1.c157a32648654p-54, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e039913ab78a9p-315, 0.0,
     0.0, 0x1.cb84954ee591p-151, 0.0, 0.0, 0x1.1815f44275567p-380,
     0x1.0b3bcc0a00a9ap-135, 0x1.e6d491109262cp-353, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.03056fdf46137p-980, 0x1.9d318fb6e37a1p-643, 0.0, 0.0, 0.0, 0.0,
     0x1.101e7dcf356a5p-138, 0x1.7ea1f0ac3182p-687, 0.0, 0.0, 0.0,
     0x1.e34cc5c5ca272p-964, 0.0, 0.0, 0.0, 0.0, 0x1.481a3c04a99bap-248,
     0x1.6cffac21c29b5p-636, 0x1.7f431251aee89p-833, 0.0, 0.0, 0x1.ee33ff9f9565bp-46,
     0.0, 0.0, 0x1.dc4a01835dacbp-415, 0.0, 0.0, 0x1.6551cccc10a73p-558, 0.0, 0.0,
     0.0, 0x1.335ee6c7765a2p-926, 0x1.a1c06070f6797p-665, 0x1.4b2c3e74dab48p-12,
     0x1.42d2c41ca92adp-267, 0.0, 0x1.d4f2dee9a0e12p-117, 0x1.7e49a4040614ap-914, 0.0,
     0x1.f2d985dbae82cp-965, 0x1.6ee9b2f3f6f5fp-315, 0x1.96c9dbcd9743cp-721,
     0x1.22b0e1ca078d6p-181, 0x1.56a14b13723cap-553, 0x1.4d29a3378056cp-1005,
     0x1.700cd12ad0371p-345, 0.0, 0x1.9b587f363aad1p-797, 0.0, 0.0,
     0x1.6e157970d41bdp-673, 0.0, 0.0, 0.0, 0x1.b47c33d6ca58cp-335, 0.0, 0.0, 0.0,
     0x1.3b61756a34e0dp-330, 0x1.1a88b4eaeb402p-507, 0x1.93c3e9dda9fdep-357, 0.0,
     0x1.1b5f4eddc50c9p-515, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.31e9f5cfbf1eep-104,
     0x1.5512565d0bee3p-175, 0x1.d2878f2487443p-875, 0x1.2b62de5a289f8p-987,
     0x1.28b2f9c4c092ap-779, 0x1.9dd89733963eap-1001, 0x1.721e1856123d9p-323, 0.0,
     0.0, 0x1.a297dbd4aeb05p-76, 0.0, 0x1.5aabfc403e98bp-738, 0x1.b324372c7747fp-428,
     0x1.31ce2d7159e42p-719, 0x1.013ed3a6b0d48p-292, 0.0, 0.0, 0x1.953279b78abc3p-490,
     0.0, 0.0, 0x1.6aab145bf8a1ap-793, 0.0, 0x1.d3d6b6408b20fp-883, 0.0,
     0x1.b1d7e2ebc5178p-328, 0.0, 0.0, 0.0, 0.0, 0x1.1f42345e563b7p-382,
     0x1.efc30f67b1b0fp-671, 0.0, 0x1.ce84469697191p-984, 0.0, 0x1.5af6345a8b7ccp-825,
     0x1.d00a8257ce13fp-1014, 0.0, 0.0, 0x1.7e4327e669686p-54, 0x1.5332a6e34c38bp-734,
     0x1.da90cbd8316c5p-693, 0.0, 0.0, 0x1.f31fb33431b3ep-298, 0.0, 0.0, 0.0,
     0x1.20f0b67889068p-607, 0.0, 0.0, 0x1.bf7def2b926bbp-1010, 0.0, 0.0,
     0x1.7f96c1d167c0ap-224, 0.0, 0.0, 0x1.3f477c5b26b31p-342, 0.0,
     0x1.f6748a8ff6067p-195, 0.0, 0.0, 0x1.7fb3d4116b7edp-904, 0.0, 0.0, 0.0,
     0x1.3386428157c97p-98, 0.0, 0.0, 0x1.bdd26816e100ep-931, 0x1.07d320f6670c9p-829,
     0x1.eb09fe73dc4dap-947, 0.0, 0x1.03361ab6bcba7p-762, 0.0, 0x1.ba48a0ed49f9ap-68,
     0.0, 0x1.79626319072d5p-456, 0.0, 0x1.804696d0de803p-324, 0.0, 0.0,
     0x1.3a67753b2ecfp-333, 0x1.012c2c098e17ap-372, 0x1.f23bf071c5f4dp-143, 0.0,
     0x1.082d9b5d2fd96p-530, 0x1.020f9f452f1e4p-807, 0x1.a460978dee2b3p-712, 0.0,
     0x1.2b85461df6079p-133, 0x1.be6aaccc839dfp-506, 0.0, 0x1.277d426b58872p-410, 0.0,
     0x1.478f83d9be3d2p-941, 0x1.a4227dd12f1f2p-481, 0x1.b9f11716748dbp-323,
     0x1.15d0062c552c5p-5, 0x1.13e833052b435p-532, 0.0, 0.0, 0x1.8f7c570d6b5b1p-175,
     0x1.7c0b4020e7d22p-464, 0x1.1d86d948c3b0ep-968, 0.0, 0x1.2265aeefc8ddp-771,
     0x1.5200ad964ec11p-691, 0.0, 0x1.f65cf1030ac45p-174, 0.0, 0.0, 0.0,
     0x1.20acf63e0744bp-315, 0x1.31be9ea673b9fp-613, 0x1.67868ff72f171p-809, 0.0, 0.0,
     0x1.e07d911900308p-858, 0.0, 0.0, 0x1.b40d4d86a11efp-648, 0.0, 0.0, 0.0,
     0x1.093c8356b2c7bp-880, 0.0, 0.0, 0x1.197f737fc14fp-164, 0.0, 0.0,
     0x1.26fa529c8d2f2p-652, 0x1.91286cb97f45ap-858, 0x1.7f1188ba1746fp-493, 0.0,
     0x1.9fb645bbc5518p-155, 0.0, 0x1.eafd5001dd9e6p-189, 0x1.7c07ebfbb0137p-502,
     0x1.094a962d92a92p-529, 0.0, 0.0, 0x1.c9eb52e11100fp-36, 0.0, 0.0,
     0x1.0854042fcfa4cp-798, 0.0, 0.0, 0.0, 0x1.ac7fc01b90e93p-511, 0.0, 0.0, 0.0,
     0.0, 0x1.e9d18df6e98b4p-58, 0.0, 0.0, 0.0, 0.0, 0x1.c4c1186ad2c8cp-738, 0.0, 0.0,
     0x1.33c64e1a0df54p-730, 0.0, 0x1.56f4f5bf85b3ap-177, 0.0, 0x1.3477d19a35168p-175,
     0.0, 0x1.a09142383c6c1p-932, 0x1.f33dba9757664p-694, 0x1.ceee28bf79445p-492, 0.0,
     0x1.b066283868dd5p-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.122d58c937cefp-416,
     0x1.4c728f52aecbep-296, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0dc44be380e5fp-969, 0.0, 0.0, 0x1.830362b9328abp-567, 0x1.63fc105d52e69p-81,
     0.0, 0x1.3d2964c7e1741p-551, 0x1.6e92af756201dp-52, 0x1.63ff0784dce8ep-971,
     0x1.643f741bfef52p-323, 0.0, 0.0, 0x1.916ca6837eebap-1008,
     0x1.bc014b1e0b862p-822, 0.0, 0.0, 0x1.c58e723b4f231p-915, 0x1.527efbf99a2d5p-453,
     0x1.6d099fdd09364p-254, 0.0, 0x1.9cda4bcc40d3ap-931, 0x1.6aef88c0a7244p-749,
     0x1.b6ef0946edbccp-472, 0x1.e87e56912054p-415, 0x1.df95ecb94cf04p-85,
     0x1.a7c3d943d408bp-661, 0x1.49f6f386284b2p-24, 0.0, 0x1.6d6ca84e92ecdp-581, 0.0,
     0x1.ee3dbca462267p-818, 0x1.9e89df5139b09p-810, 0.0, 0.0, 0x1.c1599dde81652p-340,
     0.0, 0.0, 0.0, 0x1.924a437f3d27dp-107, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbd3480fe77b7p-855, 0x1.9d3deeedd08f8p-377, 0x1.2346f99e4c7a8p-144,
     0x1.5eeda08e5f00fp-218, 0.0, 0x1.884e1890bf9p-562, 0x1.d2a3e4f60c038p-534,
     0x1.67705e49e710ap-792, 0x1.7e2e3a045ff6fp-982, 0x1.0d15871142779p-963, 0.0,
     0x1.fdaaa887df846p-595, 0x1.261765a70962dp-914, 0.0, 0.0, 0.0, 0.0,
     0x1.792e66a552735p-619, 0x1.4d29dc24dacfap-996, 0.0, 0x1.c9c7f919d7b74p-794,
     0x1.eba5ae142b51ap-805, 0.0, 0x1.4e8ccc0b47b3p-369, 0x1.a170bc84e0655p-59, 0.0,
     0x1.28fff6528f592p-83, 0x1.6da8ffcbd8434p-492, 0x1.357ad14d64aecp-582,
     0x1.ae675fe5ff833p-122, 0x1.3c5c7a3dce10dp-490, 0.0, 0x1.ece72e6daeb27p-1012,
     0.0, 0.0, 0x1.c2f35b97475cbp-301, 0.0, 0x1.75de805b89fc2p-596, 0.0, 0.0, 0.0,
     0x1.574079778f126p-967, 0x1.f9c3cdd7842c6p-948, 0.0, 0x1.1906aa4b0aaabp-82,
     0x1.c90aa0bb712c8p-653, 0.0, 0.0, 0.0, 0x1.afc297bfd72c5p-175,
     0x1.42200aa89d85cp-695, 0x1.61143b6bff49ap-48, 0.0, 0.0, 0x1.c4f18c88acaedp-24,
     0.0, 0x1.c91b8b5995f06p-19, 0.0, 0x1.fd8416305d021p-333, 0x1.05c8a477fc014p-780,
     0.0, 0.0, 0.0, 0x1.48e6bc2dadb4ap-987, 0.0, 0.0, 0.0, 0x1.16354ff8a5781p-186,
     0.0, 0.0, 0x1.0cdbfdd77190ep-213, 0.0, 0.0, 0x1.d39d27865d9f6p-776,
     0x1.0657ba3277c5p-395, 0x1.dc925bf352081p-862, 0.0, 0.0, 0.0,
     0x1.4ee0811471284p-416, 0x1.df21e38194142p-718, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ab5389d4932e7p-512, 0.0,
     0x1.05a435f983dabp-227, 0.0, 0.0, 0x1.06f9c49408725p-718, 0.0,
     0x1.0db2052745563p-745, 0x1.4481fe6312916p-382, 0.0, 0x1.09df49971c328p-419, 0.0,
     0.0, 0x1.248245fc2b3f7p-520, 0x1.59f661727454dp-457, 0x1.875e092f46316p-267, 0.0,
     0x1.debc3ed22a597p-881, 0.0, 0x1.2e4bfc906a609p-612, 0.0, 0x1.6fd4ff66a1071p-231,
     0.0, 0.0, 0.0, 0x1.a62767bdcd81ap-224, 0.0, 0.0, 0.0, 0x1.c7363e7302eep-71, 0.0,
     0x1.2bf151a82b4dap-367, 0.0, 0x1.8bd389aa99cd1p-253, 0.0, 0x1.888e654ad05dap-27,
     0x1.2626ef8a29387p-402, 0x1.3860f0aea32b5p-288, 0x1.214a52afab0e2p-530,
     0x1.dd0fc1e07f2a2p-640, 0.0, 0x1.65a163095588cp-846, 0.0, 0.0,
     0x1.e9406ec037ef9p-722, 0.0, 0x1.fe2dee17ba39fp-260, 0.0, 0.0,
     0x1.eaefcd97560b1p-976, 0x1.dccc9f1aa31d3p-969, 0.0, 0.0, 0x1.beec9fbe4bf34p-314,
     0x1.daab7d422bbbbp-392, 0x1.414c9039af9f3p-20, 0.0, 0x1.846aeef6ff91p-354, 0.0,
     0x1.8f87ff1b7f64ep-1001, 0.0, 0x1.275e0749ba727p-773, 0.0, 0.0,
     0x1.9007c27ebf714p-406, 0.0, 0.0, 0x1.15c2c9b5d1eecp-252, 0x1.2e4b6928f4ccep-410,
     0x1.1f13d43b1dd4bp-919, 0.0, 0x1.d4a2a1e1a87b1p-617, 0.0, 0x1.27db7b31bc754p-311,
     0.0, 0x1.360dea41e7757p-906, 0.0, 0x1.5488878664428p-1008, 0.0, 0.0, 0.0,
     0x1.1ca6df63e2525p-610, 0x1.d198b943816a2p-149, 0x1.14763d67a393ep-768, 0.0, 0.0,
     0.0, 0x1.d86549c3d1fbfp-74, 0x1.4dd064a73f538p-678, 0.0, 0.0, 0.0, 0.0,
     0x1.eca8441ecfbe9p-69, 0x1.446f598951d3fp-617, 0.0, 0x1.dbacebd7a0e3ep-934,
     0x1.0aeddb9b68042p-855, 0.0, 0.0, 0x1.e487c7d34da0bp-90, 0.0, 0.0, 0.0, 0.0,
     0x1.c29a58da1f058p-251, 0x1.ee7b9f10aa3cfp-234, 0.0, 0.0, 0x1.a1eedd92042acp-761,
     0x1.8d3c39b5ab719p-693, 0x1.416801a7b7b87p-902, 0x1.a2b2f2cac4f3ap-657,
     0x1.f366c98c099a4p-25, 0x1.d243d6c665a4ep-373, 0.0, 0x1.2c13d205bb6c1p-537, 0.0,
     0x1.077b70b6d59bfp-298, 0x1.49c1c7219da75p-997, 0x1.34ba17ae28d2p-410, 0.0, 0.0,
     0.0, 0.0, 0x1.0857fd399c173p-429, 0x1.17ea29f549c94p-438, 0.0, 0.0,
     0x1.577f303f5ab88p-950, 0.0, 0x1.1d72abec8cd0cp-923, 0x1.cf98030be06fdp-652,
     0x1.126ff3d32fc76p-685, 0x1.61699d20eb8d2p-820, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.58e4a56048d7bp-392, 0x1.3700c7abe1201p-1022, 0.0, 0x1.df0e85fe074f3p-504,
     0x1.b3df20309a33cp-145, 0x1.5b864674ebfcp-151, 0x1.908cf15c73c2ap-879,
     0x1.a47eb50374291p-626, 0.0, 0.0, 0x1.845bb2b23d232p-116, 0.0, 0.0, 0.0, 0.0,
     0x1.bd4bd6664ac8fp-272, 0x1.884c956a499c8p-999, 0.0, 0.0, 0x1.197c5d08ef9dcp-18,
     0.0, 0x1.a3f6a8cc75036p-68, 0x1.da173f56cf1fp-545, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.302fd77e8fbd6p-245, 0x1.64126690d6648p-934, 0.0, 0x1.f07621ce9f6f6p-999, 0.0,
     0.0, 0x1.7d749c65a0f75p-374, 0.0, 0x1.dac83e1954125p-191, 0.0,
     0x1.7ac552ef60a2p-188, 0.0, 0x1.5b14768fbdbdep-737, 0x1.0e88544817349p-106,
     0x1.69f9b10312e09p-476, 0.0, 0.0, 0.0, 0x1.f51364334d55p-519,
     0x1.c12c24d3f1ef1p-965, 0.0, 0.0, 0x1.603db5af54624p-50, 0.0, 0.0, 0.0, 0.0,
     0x1.dd8e18811cc6ep-139, 0x1.47380324c7742p-820, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4348b3e0eb98ep-806, 0.0, 0.0, 0x1.71315f40fbf48p-237, 0x1.e1eaf1a71001ep-972,
     0.0, 0x1.b76a77b75a498p-787, 0x1.3d959987672bep-316, 0.0, 0.0, 0.0,
     0x1.7606c1811129ep-737, 0x1.6e965bf7f63e6p-31, 0x1.817d7b0d6deb8p-512, 0.0, 0.0,
     0.0, 0.0, 0x1.c606f01d8dabdp-453, 0x1.8d38bef8d0cdep-718, 0.0, 0.0, 0.0,
     0x1.338af1cf8eacdp-968, 0.0, 0.0, 0.0, 0.0, 0x1.c5fc226e4a7abp-436,
     0x1.47fff747d760fp-297, 0x1.6205f4affa559p-553, 0.0, 0x1.7d7b84e45e06ep-904,
     0x1.dcd9da92f205cp-889, 0x1.00eda72b8b5dfp-215, 0x1.d10caa9b80c83p-287,
     0x1.0be63aa6c1cc6p-483, 0x1.cf62deb92429cp-302, 0.0, 0.0, 0.0, 0.0,
     0x1.09ab9e0dce4a4p-651, 0.0, 0x1.5a30c1568f358p-924, 0.0, 0x1.dfae48e733bf8p-77,
     0.0, 0x1.d46fd4e875c2dp-245, 0.0, 0.0, 0.0, 0x1.f7b80c31a61f4p-909,
     0x1.e40d6757a3d36p-732, 0x1.128861e01eca4p-41, 0x1.9b52cce686feep-546, 0.0, 0.0,
     0x1.9f3da717c608bp-965, 0x1.69a4c0bbc586bp-191, 0x1.02d8f99bdf6a7p-533, 0.0,
     0x1.39d8e9714c727p-843, 0.0, 0.0, 0x1.258bef5f15caap-177, 0.0, 0.0,
     0x1.792a04953ed38p-413, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.435cc5f54a39p-707,
     0x1.7477cdea9719dp-464, 0.0, 0.0, 0x1.d0ca10667a1fap-395,
     0x1.a8edd4afe56ffp-1010, 0x1.bf212d3ba74e8p-191, 0.0, 0x1.92add7adad0f6p-29,
     0x1.274fbbce484bbp-829, 0x1.fac01b00dc17p-108, 0.0, 0x1.527f29eabdc42p-913, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e49a47af6bdd2p-495, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a32aca1e12599p-280, 0x1.7a97260b4e204p-90, 0.0, 0x1.a9b89ecd98132p-199, 0.0,
     0.0, 0.0, 0x1.e5502f9e5fdc3p-263, 0x1.175c9bbbc4b96p-183, 0.0, 0.0,
     0x1.4e0ba690197p-24, 0x1.b4afd4e7c1dd5p-353, 0x1.36dd01ef5762cp-843,
     0x1.e7d57b3e03172p-346, 0x1.14961cb802a62p-925, 0x1.87af16fb95dafp-636, 0.0, 0.0,
     0x1.92550a024c642p-211, 0.0, 0x1.0b89c0473cf14p-237, 0x1.b776d029b21dfp-249, 0.0,
     0x1.3bad3a0a41d9ep-85, 0.0, 0.0, 0.0, 0x1.92c818d9087a1p-848, 0.0, 0.0,
     0x1.ef5f733122f15p-950, 0x1.2dddcde0f560bp-953, 0.0, 0.0, 0.0,
     0x1.3d69c32b04202p-924, 0x1.d87a617bcb66cp-143, 0x1.9004ed11474b3p-276,
     0x1.906bfaa862adfp-729, 0.0, 0x1.69daa81bfdaadp-293, 0.0, 0x1.6b609375b0496p-639,
     0x1.5ca2b2de0086dp-800, 0.0, 0.0, 0x1.36b07a54caeafp-1015,
     0x1.e536e88f5611bp-368, 0.0, 0x1.e8a9a5ec5e94cp-405, 0x1.9d020c4ae73fcp-1016,
     0.0, 0x1.1a5aee1c74f01p-720, 0.0, 0.0, 0.0, 0x1.8aa4cd943e503p-174, 0.0,
     0x1.e9a86d564395cp-278, 0.0, 0.0, 0.0, 0x1.0bfeef2968711p-987,
     0x1.14ff1b7cd284ap-64, 0.0, 0.0, 0.0, 0x1.66abfab7d24e7p-919, 0.0, 0.0,
     0x1.2b47a1768b838p-199, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf00f53f97629p-606, 0.0,
     0x1.937f8da731175p-847, 0x1.cd3cc788ef498p-126, 0x1.b73e4de99590ap-522,
     0x1.2bf9f9126f95ap-68, 0.0, 0x1.53d74e321f503p-847, 0x1.825d205eeb5dap-781, 0.0,
     0.0, 0x1.1a5805f15e89dp-823, 0.0, 0.0, 0x1.61747671e42b3p-49, 0.0,
     0x1.33da7d993e47bp-979, 0.0, 0x1.a00779ef61806p-190, 0.0, 0x1.8fd9fb485e48ep-491
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
            tmp1 = Sleef_finz_expd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expd1_u10purecfma bench acc %la\n", global_bench_acc);
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
