/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_frfrexpd2_kvx.c --function Sleef_frfrexpd2_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.a11547242b575p-550, 0.0, 0.0, 0x1.42ed2e39708fp-21, 0.0,
     0x1.b64f41d6cdbd4p-882, 0x1.954624e3f13f1p-744, 0.0, 0.0, 0x1.684f08cb44212p-470,
     0x1.1be650058b54ep-385, 0.0, 0x1.8af1eb6456433p-822, 0.0, 0x1.da35d033d5fc7p-80,
     0x1.998c48bbbfb6bp-242, 0x1.b82a09b771e6dp-600, 0.0, 0x1.77af1e73bbb8ep-898, 0.0,
     0.0, 0.0, 0x1.15621e5a5ce98p-424, 0.0, 0.0, 0x1.2b565e971d7a6p-252,
     0x1.3c446e892b9ebp-846, 0.0, 0.0, 0x1.aa96b9fefd01cp-885, 0.0, 0.0, 0.0, 0.0,
     0x1.1aaa27b9e1a97p-701, 0x1.e2379f9a3250ap-360, 0x1.d7e45469b2fc3p-509, 0.0,
     0x1.316930b2d66p-575, 0x1.eccf59c631bbcp-217, 0.0, 0x1.3076ef11d75d2p-493,
     0x1.e97adf178589fp-829, 0.0, 0x1.014aa048fff0ep-412, 0x1.dafe6c81e4509p-727, 0.0,
     0x1.62665e5b655f5p-158, 0.0, 0x1.5d9ef2bd220b9p-619, 0.0, 0x1.d72302651c5f6p-191,
     0x1.413d6a36856fbp-967, 0x1.415d5dc8831a7p-965, 0x1.3b300553bdec7p-794, 0.0,
     0x1.7c25ca65bbda5p-157, 0.0, 0.0, 0.0, 0x1.d80664a2058ddp-654, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.b183ce5f496ebp-683, 0x1.8265728f5959cp-849, 0x1.d202ab47e2714p-602,
     0.0, 0.0, 0x1.6782e0d2f4b21p-698, 0.0, 0.0, 0x1.60c8496d2608dp-763, 0.0,
     0x1.f7e8e4f4d8088p-362, 0x1.7e135b3eb259bp-276, 0x1.d564a0ed357dfp-61,
     0x1.7e111ef720887p-5, 0x1.02941bcbe086fp-726, 0.0, 0x1.a1dfc46fe59c7p-817,
     0x1.803f76cacabcfp-700, 0x1.79b2343367d6bp-789, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad905ccc428ffp-292, 0.0, 0.0, 0.0,
     0x1.bc3437e71e375p-880, 0.0, 0.0, 0x1.297c188ebe563p-629, 0.0, 0.0, 0.0, 0.0,
     0x1.6a9af4c6841b6p-210, 0x1.0a4f0d3e37ab5p-263, 0.0, 0x1.8eb98335a2f05p-769, 0.0,
     0.0, 0.0, 0x1.5c55ee593cce3p-300, 0x1.a01796410d40bp-21, 0x1.9bbed59b3a5b4p-994,
     0x1.d026e2aad3367p-189, 0x1.303d4c31611ecp-729, 0x1.6a98870b6b69bp-241,
     0x1.96130f3794efp-57, 0.0, 0.0, 0x1.86e30fc21099ep-584, 0x1.62f2b66ad13f5p-573,
     0.0, 0x1.692175fd00c6ep-17, 0x1.c1b60ff1e5f8ap-607, 0.0, 0.0,
     0x1.6c48baafbfa3dp-624, 0.0, 0x1.0cd315591fe4bp-545, 0.0, 0x1.0d00d69ceba49p-782,
     0x1.e75c0dc9431bp-1022, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7747638edadc2p-210, 0.0,
     0x1.e6c07c974512ep-190, 0.0, 0.0, 0x1.a24ce27c7cbf1p-694, 0.0, 0.0, 0.0, 0.0,
     0x1.48351667da184p-885, 0x1.360815d9a0874p-189, 0.0, 0.0,
     0x1.73261024ef4b8p-1000, 0x1.fb707f119ca09p-997, 0x1.12438ac8d21ap-832, 0.0,
     0x1.dc846e6d0b11cp-133, 0x1.1e37ab6c91ddep-593, 0.0, 0x1.d69992b5d77a7p-793, 0.0,
     0x1.5d7e03d7955adp-435, 0x1.7805599a246bbp-710, 0x1.8285451ca290cp-637,
     0x1.d9d004699cdc2p-104, 0.0, 0.0, 0x1.030477780ec52p-840, 0.0, 0.0, 0.0,
     0x1.42b22e68763f5p-481, 0.0, 0.0, 0x1.30bf353ea136dp-996, 0x1.f226bd78f8d2cp-78,
     0.0, 0.0, 0.0, 0.0, 0x1.2fb47773353dep-948, 0.0, 0.0, 0.0, 0x1.cfbc04211c97cp-59,
     0x1.f902c619ba47bp-822, 0x1.0898538ed42dcp-89, 0.0, 0x1.2419a5dc96986p-650, 0.0,
     0.0, 0.0, 0x1.1dc93ada6dad9p-783, 0.0, 0.0, 0x1.de9ac340948f8p-579,
     0x1.35f31b0aa9311p-674, 0.0, 0.0, 0x1.14092b24a95eap-634, 0.0, 0.0, 0.0, 0.0,
     0x1.702ebee5a12aap-385, 0.0, 0.0, 0x1.31f7a5ca9c9d7p-4, 0x1.b19208f18536bp-21,
     0x1.b449af1caaca6p-339, 0x1.389dc6c61a2f1p-186, 0.0, 0x1.e8f4b33b5d7abp-159,
     0x1.41a7ad7c8b0efp-210, 0x1.f40785a8d19dfp-783, 0.0, 0.0, 0.0, 0.0,
     0x1.e9b905992ee7bp-180, 0.0, 0x1.417ff1a5910cdp-500, 0x1.b33e46080ac27p-845, 0.0,
     0x1.989ee41296997p-904, 0.0, 0.0, 0.0, 0x1.0a08dbeeb108ap-242,
     0x1.4003526a81e9ep-286, 0.0, 0x1.4fab44a20650cp-92, 0.0, 0.0, 0.0,
     0x1.f3e1673a1836ep-527, 0.0, 0x1.10cecc47667e7p-895, 0.0, 0.0, 0.0, 0.0,
     0x1.b8ffac61a391fp-467, 0.0, 0.0, 0.0, 0x1.a0a2c19c38225p-456,
     0x1.221c7c7f9169dp-401, 0x1.9837de7e3610dp-81, 0x1.a78c64c9fa3e3p-968,
     0x1.1db2267fcf4f5p-307, 0.0, 0.0, 0x1.d36070eafd11ap-712, 0.0,
     0x1.3d59762b40e0ep-463, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76f0a0c2486ecp-404,
     0x1.d626f65d7a9abp-294, 0x1.85e37a760d872p-1021, 0x1.a7e6df5fbc1a8p-98, 0.0,
     0x1.736a6609f2989p-559, 0x1.9162444a5d5cep-653, 0x1.8275b77af390fp-640, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1p0, 0x1.c8cef2ac9536cp-502, 0.0, 0x1.7de0c4fb7dbffp-166,
     0x1.102ed7eec9d29p-868, 0x1.422207a0f0f5bp-793, 0x1.bd495ce57194ap-424, 0.0, 0.0,
     0x1.ed85e00920bc6p-488, 0.0, 0.0, 0x1.7df20761df263p-436,
     0x1.42db334a67685p-1015, 0x1.1640a13c957a4p-101, 0.0, 0.0,
     0x1.f00e3ab7cb018p-167, 0.0, 0.0, 0.0, 0x1.a69ce1fba670ep-342, 0.0,
     0x1.796a4d1f1b89ap-649, 0.0, 0x1.db21b72635c06p-150, 0.0, 0x1.a6f1a687e7bb6p-674,
     0x1.e10a8594306a9p-800, 0.0, 0.0, 0x1.663eb593fde76p-471, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1762a9dd8ae9dp-633, 0.0, 0x1.f3683d80b9e66p-922, 0.0, 0.0, 0.0, 0.0,
     0x1.0b3c50b5016d6p-179, 0.0, 0.0, 0.0, 0.0, 0x1.89449097eb23dp-609, 0.0, 0.0,
     0x1.5275576dcca43p-829, 0x1.80ff6c6d3b37ap-577, 0.0, 0x1.24583f47995adp-452, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a8f39be295b8p-330, 0.0,
     0x1.65ce559ae02d8p-869, 0x1.09bbcb3f6fe7p-234, 0x1.3b63922d80e63p-144, 0.0, 0.0,
     0x1.ac2c7c64915eep-380, 0x1.c4b4c6ee027eap-232, 0x1.e6bf418b437f9p-235,
     0x1.05d946fde8e58p-138, 0x1.bb8761dc5cc0ep-661, 0.0, 0.0, 0x1.c8f9c35f1f89p-1018,
     0x1.53873a9e3653bp-345, 0x1.ce343f3bb78c8p-320, 0x1.20c05f7fae962p-267, 0.0, 0.0,
     0x1.d96d98f0d7f25p-21, 0.0, 0x1.f4911e5c98b9bp-617, 0x1.7d3251d11be89p-671, 0.0,
     0.0, 0x1.b1f432b775ae2p-680, 0.0, 0.0, 0x1.e9f853b9743bp-15,
     0x1.4b4d0617b37cp-605, 0x1.690e308b8af2p-592, 0.0, 0x1.011bfcaafa0eap-127,
     0x1.335257a34958bp-644, 0x1.0dd80f164d9d3p-168, 0x1.eaeb9faeb11bp-648, 0.0,
     0x1.cdf48e89ddf63p-948, 0x1.5f03ed9ceae2ap-465, 0x1.93022a2a4d6bep-664, 0.0,
     0x1.5a40369629d4bp-22, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91e1588ec7fa5p-161, 0.0, 0.0,
     0x1.7c1f85474fffdp-789, 0x1.c3afac82fd2a7p-100, 0.0, 0.0, 0.0,
     0x1.3e3f6239b4212p-855, 0x1.42d2d3db6e3f3p-102, 0.0, 0.0, 0x1.f9e6461ed624fp-278,
     0x1.466c4a3d0a803p-560, 0x1.5d9d46c502cc3p-316, 0.0, 0x1.19403ae31776fp-877, 0.0,
     0.0, 0.0, 0x1.c3d34407e3785p-156, 0.0, 0.0, 0x1.b134b1d920781p-181, 0.0,
     0x1.9f707ff467ca4p-63, 0.0, 0x1.c2011f83136fbp-781, 0.0, 0x1.b86aa42767372p-926,
     0x1.07628ac0bdfa3p-401, 0x1.bf7a8405d97p-754, 0x1.6d0e2c8814a01p-638, 0.0, 0.0,
     0.0, 0.0, 0x1.16f4fcd833c24p-973, 0.0, 0.0, 0x1.904e9c34c68f5p-808, 0.0,
     0x1.5015059a25edap-660, 0x1.9b42bf7c6c35cp-312, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7d0bc58e77d1p-230, 0.0, 0.0, 0.0, 0.0, 0x1.da90c45ab6251p-610,
     0x1.8422595b0595dp-368, 0x1.53d864dc54c34p-411, 0x1.693b1266943aep-57,
     0x1.22c1126f2b388p-781, 0.0, 0x1.3e38d9ade6b3p-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0bfec79d259d6p-399, 0x1.0abec385e48c4p-601, 0x1.e46076fb7947bp-465, 0.0,
     0.0, 0.0, 0x1.cd0a5822e41f1p-396, 0.0, 0.0, 0x1.63762d59068e1p-604, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.bc1ccfc256eebp-167, 0x1.e2f5dc7d9ccebp-1022, 0.0, 0.0,
     0x1.d3ca7f2dc4a7ap-738, 0x1.2d2487712180dp-486, 0x1.3d24b61022c12p-810,
     0x1.fa980043163d3p-125, 0.0, 0x1.5517d558e0015p-616, 0x1.b47a81661330dp-303,
     0x1.1bd82e49eef63p-94, 0.0, 0.0, 0x1.31c0b2271a8e2p-344, 0x1.1b0211a3a50bfp-994,
     0.0, 0x1.148097f0865dbp-328, 0.0, 0x1.322c459b1869ep-442, 0.0,
     0x1.eac4e38bff63cp-21, 0x1.d8146d2fa3cb2p-755, 0.0, 0.0, 0.0,
     0x1.c22c6f00d3081p-815, 0x1.ff36e0d3646abp-112, 0x1.f65d80d66ddabp-812, 0.0,
     0x1.30da0763696a9p-793, 0.0, 0x1.56d6b5c40583p-999, 0.0, 0x1.41465457d83a4p-649,
     0x1.5c0d0f1626548p-411, 0.0, 0x1.437ad57621dep-571, 0x1.c55536fc59aa7p-825, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a35384fe8103bp-745,
     0x1.94ddfa1386506p-752, 0.0, 0x1.173603be9eb6p-760, 0.0, 0x1.7dadb6b22d472p-609,
     0x1.1d2fb372f2b04p-327, 0x1.64949943aec0dp-617, 0.0, 0.0, 0x1.2b190b87f9397p-343,
     0.0, 0.0, 0.0, 0x1.71aded21159c8p-950, 0.0, 0.0, 0x1.c8ae38e002f25p-964,
     0x1.61cfbadbbdaaep-169, 0x1.4d1aefe161f13p-118, 0.0, 0x1.deb440eb3bf9dp-685,
     0x1.690d745ccdd65p-961, 0.0, 0x1.c5d3b6c005c5cp-624, 0x1.1c2951fc927f5p-430,
     0x1.3f8f080095861p-903, 0x1.2bac6a87f250bp-61, 0x1.c5ac078c9ea1ap-124,
     0x1.5f1aa380328d8p-367, 0.0, 0x1.d77181e490129p-903, 0x1.79d2296829b99p-17,
     0x1.4e670d03e60c8p-23, 0.0, 0x1.fc5355250ed43p-743, 0x1.658abbf49313p-363, 0.0,
     0x1.0942a87304348p-786, 0x1.531ee823626ep-935, 0x1.3ed6d427f036fp-14, 0.0, 0.0,
     0x1.4e11258214e3cp-966, 0.0, 0x1.340863fcbaf9bp-995, 0x1.89506d945db4p-44,
     0x1.0ddcb48ce315dp-307, 0x1.957f4b448af55p-972, 0.0, 0.0, 0x1.da35726d3eb49p-684,
     0.0, 0x1.066fd983217e5p-152, 0.0, 0x1.921ca1d7ca6bcp-159, 0.0, 0.0,
     0x1.258096db1997fp-106, 0.0, 0.0, 0x1.f2549e59688abp-795, 0.0,
     0x1.dee1bdb102b4p-774, 0x1.39f81347f65cep-465, 0.0, 0x1.11335a741f4b9p-976, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4cde81d3cda2bp-413, 0.0, 0.0, 0.0,
     0x1.292c15a077106p-883, 0x1.bb2cb10d9d657p-365, 0x1.5c2f851a00b81p-771, 0.0,
     0x1.8f6057e4bfcddp-52, 0.0, 0x1.47354bb32dd51p-569, 0.0, 0.0,
     0x1.1cf0ef359f45ep-409, 0.0, 0x1.7768493ae6d31p-402, 0x1.db93ec6a47695p-64, 0.0,
     0x1.7f4bb44694615p-100, 0x1.1b6b158792ab9p-169, 0x1.c015c0a923c3ep-958, 0.0, 0.0,
     0.0, 0.0, 0x1.dbaff69de7776p-577, 0x1.8c1aa3e9b8582p-971, 0.0,
     0x1.5c407b2f41f35p-942, 0.0, 0.0, 0x1.1fc0007b71c68p-358, 0x1.51b5aa26a4961p-800,
     0.0, 0.0, 0x1.e2bdf8a1fac79p-672, 0x1.b51ff79635d73p-808, 0x1.5840ce89d4d8bp-570,
     0x1.6997f9ab7e7a5p-587, 0.0, 0.0, 0.0, 0x1.8f57a8ad49d6cp-706,
     0x1.9a7c814333138p-316, 0.0, 0.0, 0x1.64ea668d67249p-822, 0.0,
     0x1.ecf34f619e267p-681, 0x1.f48824f6da08fp-27, 0.0, 0.0, 0x1.f71a9133d8c51p-746,
     0x1.bcf1f3ba5512p-62, 0x1.77a132b0504d6p-574, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0254590953962p-603, 0x1.bf62ce7fc13bcp-420, 0x1.58388e2f6ea7bp-389,
     0x1.acba08e3c052p-926, 0.0, 0x1.c441897785f11p-755, 0.0, 0.0,
     0x1.7b3875f0e5ba5p-116, 0.0, 0.0, 0.0, 0.0, 0x1.e873eacee1088p-158, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e36137d9ea139p-355, 0x1.f9322cd1b43dcp-156, 0.0,
     0x1.145b662dde4a7p-701, 0x1.c40037f337eb6p-1007, 0.0, 0x1.8e44bcd84e1d7p-502,
     0x1.ea0a3d72d5d8ap-409, 0.0, 0.0, 0.0, 0.0, 0x1.e7c187d3f2fe3p-141,
     0x1.b8655d5e84174p-403, 0x1.2d8181cf5488dp-782, 0x1.433f5a67d4c75p-54,
     0x1.604e6c9e13003p-397, 0x1.6e757cdaa1677p-85, 0.0, 0.0, 0x1.020e5c30eeb8cp-33,
     0x1.126cfbea21bfp-804, 0x1.ba4bdc0b9693bp-365, 0x1.6a21f00099d75p-562, 0.0, 0.0,
     0x1.570cb143dcdd5p-521, 0x1.14ab1b23c0463p-81, 0x1.1a144a5172b8ap-1019, 0.0,
     0x1.29ec4cd23c193p-630, 0x1.44ac1668b1ec6p-749, 0x1.c3d66ee47a2b3p-215,
     0x1.0d39271d88356p-659, 0.0, 0x1.a77baf3874245p-979, 0x1.0074c3831b321p-85, 0.0,
     0x1.d4214290ed773p-1007, 0x1.f34cea6ca6442p-652, 0x1.345ca38a6e7ffp-640, 0.0,
     0x1.076d51009a65bp-883, 0.0, 0x1.bfba45ff9f7cap-292, 0.0, 0x1.20565174dab56p-474,
     0x1.e37b741d42762p-934, 0x1.faf6aa04880f4p-604, 0.0, 0x1.8b17f32f7ca3bp-503, 0.0,
     0x1.fad78cb232e72p-204, 0x1.e753faa724e22p-1000, 0.0, 0x1.8aeaed915687ep-525,
     0x1.91b7f2c7ed78bp-14, 0x1.c46ad93b210bfp-629, 0x1.65c634d8f3abdp-621,
     0x1.a2f1754d61b91p-974, 0x1.c9abfc2e2555ap-345, 0x1.3411ce50f921bp-710, 0.0,
     0x1.fcb39e0c355c7p-119, 0x1.b3952f04e0ba8p-256, 0x1.e6069d7264827p-437,
     0x1.65999155b731fp-528, 0x1.21c305a1d6e3dp-74, 0x1.9916cc836ea9ap-345, 0.0,
     0x1.2e35265f9312bp-465, 0.0, 0x1.68eb9047f0f34p-683, 0x1.6e921c17908fdp-173, 0.0,
     0x1.fecfeca327dc5p-994, 0x1.636baa05b0ed5p-534, 0x1.9d89f7629d6f9p-714, 0.0,
     0x1.65e9cbb2600edp-356, 0x1.d698abdfb0abbp-321, 0.0, 0x1.cf8a44c295a66p-748,
     0x1.96d6212810ac3p-546, 0x1.dbd2c7fd4b2d5p-31, 0x1.d06e9744413d2p-810,
     0x1.f0f0c49c8b9b9p-797, 0x1.c11d893a9321p-321, 0x1.fede798dc0dcap-976, 0.0, 0.0,
     0x1.3f77f24f62449p-76, 0x1.3271c30055a98p-994, 0x1.7591a88609f3ep-602, 0.0,
     0x1.f52d34298f63ap-84, 0.0, 0x1.38e62038fcc35p-836, 0x1.f4f54731140acp-466,
     0x1.029133652616bp-150, 0.0, 0.0, 0.0, 0x1.0697e8807b2d1p-476,
     0x1.9d8e18be9896ap-258, 0x1.3e4ed30e779cp-37, 0x1.75dc7e93697d4p-167, 0.0, 0.0,
     0x1.65f48085dc7dp-476, 0x1.e066b1241289fp-622, 0.0, 0.0, 0.0,
     0x1.fb2601573eb7fp-678, 0x1.5903634b331c6p-761, 0x1.82188e3957223p-242,
     0x1.a136ab241f5dep-110, 0.0, 0.0, 0.0, 0.0, 0x1.6c9fd617a8106p-1010,
     0x1.b7204d0f054b3p-461, 0.0, 0x1.3c23d5aa85da6p-45, 0.0, 0.0,
     0x1.d7722b42cd7aep-830, 0.0, 0x1.1108e972d9972p-1008, 0.0, 0.0,
     0x1.2a4d0b1a16588p-511, 0x1.9bbc11e925e6bp-232, 0x1.7baa0978e78e6p-699, 0.0, 0.0,
     0x1.1f38a8aac22b3p-496, 0x1.0c6ad10d30094p-158, 0.0, 0x1.faa8c2559162fp-626, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.edddfed1924a2p-147, 0x1.95a1c28834b3cp-111,
     0x1.9923ab4470ab1p-410, 0x1.31bf2c021ac4bp-422, 0.0, 0x1.a5cf306574bc8p-925,
     0x1.31468bbdc83f5p-583, 0.0, 0x1.9200a869c9523p-879, 0x1.68fbbc8ba21f9p-641,
     0x1.fbc23651b506cp-592, 0.0, 0x1.8d8f31f0c2633p-702, 0.0, 0.0, 0.0, 0.0,
     0x1.68bba0b866c1fp-809, 0.0, 0.0, 0x1.78576d1f7bca7p-1017,
     0x1.bf300fbce6f46p-703, 0.0, 0.0, 0x1.da2d34747b74dp-159, 0.0,
     0x1.3458a94fd4d27p-635, 0.0, 0.0, 0x1.d7860e6ec0b62p-881, 0x1.834f031342de1p-742,
     0x1.1d71ea8f635e4p-541, 0.0, 0x1.9b489ae721b37p-464, 0x1.627e144d8074fp-442,
     0x1.b11c19321d3cdp-986, 0.0, 0.0, 0x1.6b1097d8cd702p-402, 0x1.f0a68f1576894p-753,
     0.0, 0.0, 0.0, 0.0, 0x1.3574f34b1dd07p-125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.229e1ca08ae93p-892, 0x1.65e4ff77333ecp-970,
     0x1.ff28ca9da9e7cp-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.11abf136d1ad1p-157,
     0.0, 0x1.1cd7ba4645dd8p-695, 0x1.d48718469b2f2p-924, 0.0, 0.0,
     0x1.94ac51858c276p-364, 0.0, 0x1.014eab447450bp-331, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f7f53f0111dd3p-562, 0x1.56aa2e982c095p-575,
     0x1.75cca2378a741p-168, 0.0, 0x1.6df9ce729cb12p-649, 0x1.88c688754d7bap-805, 0.0,
     0x1.9de8e9c40e4dfp-723, 0x1.520b16da032efp-895, 0.0, 0.0, 0.0,
     0x1.26831f9e1afb5p-805, 0x1.5d2e47f952706p-163, 0.0, 0.0, 0.0,
     0x1.557357114816bp-557, 0x1.88358b720e6cdp-14, 0.0, 0.0, 0x1.4504b740a9e4ep-886,
     0x1.a4b48c02934b4p-494, 0.0, 0x1.8d8e1b7f9e61fp-179, 0.0, 0x1.5255ac1e9851ap-44,
     0x1.d7c2a4832bd26p-890, 0x1.7d929db707f02p-1019, 0x1.01da52a161c59p-142, 0.0,
     0.0, 0.0, 0x1.a6b144830967cp-659, 0x1.5015851f49859p-429, 0x1.1794f55d19acp-626,
     0.0, 0x1.5cdf3048a51c7p-742, 0x1.1a3745742edcbp-144, 0x1.9d75454a3f7p-292,
     0x1.bebd921a1db98p-196, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.43e9db401ad4cp-230, 0x1.9d6f3b5e1d22p-851, 0x1.a09136b0d84e4p-454,
     0x1.0cb713b9fb12p-162, 0.0, 0x1.a98e76f47fe12p-848, 0x1.6ad9f49cb5085p-1020,
     0x1.d62510bb51968p-180, 0x1.cf8fdba85f05cp-265, 0.0, 0x1.53aaa05381cb3p-897, 0.0,
     0x1.bc1cef7f19291p-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd184041c839fp-348, 0.0,
     0.0, 0x1.e9baf596141a7p-444, 0.0, 0.0, 0x1.66b2890ea9fa3p-612, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.14de094b2779ep-40, 0x1.114724e35cf7ap-418, 0.0, 0.0, 0.0,
     0x1.078e22a704cdep-143, 0x1.bf8d27805ad9p-708, 0x1.d6d925eb5777fp-65, 0.0,
     0x1.bb5bd3d73c67ep-258, 0.0, 0.0, 0.0, 0x1.d732d5fa8f76bp-942,
     0x1.613c7bdb66497p-347, 0x1.6f441b0121eb3p-362, 0x1.74992b4e9df53p-367,
     0x1.d026e69716d7cp-964, 0.0, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_frfrexpd2_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_frfrexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_frfrexpd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
