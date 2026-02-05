/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_ldexpd1_purecfma.c --function \
 *     Sleef_finz_ldexpd1_purecfma --arity 2 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64,int32 --precision \
 *     double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.bc059356591bcp-503, 0x1.d88d3f397a8a1p-7, 0.0, 0x1.3e58905a99248p-286,
     0x1.34d25f17ad7dfp-305, 0.0, 0x1.da2d3ccf0d881p-970, 0.0,
     0x1.430bf558caafep-1018, 0x1.c199cc9ce9ca1p-79, 0.0, 0.0, 0x1.baad076187034p-386,
     0x1.1d5338e188036p-645, 0x1.05965d4114e32p-206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4da55a0cca098p-620, 0x1.49c4ca43c2e38p-494, 0x1.04ada805653c4p-981, 0.0,
     0x1.b503761c35fecp-383, 0.0, 0x1.b370217179af5p-456, 0.0, 0x1.04a67c3274957p-734,
     0x1.247a83ae9f95ep-127, 0.0, 0x1.497dc72364baap-888, 0x1.d48fca1b0fa27p-79,
     0x1.def9e034cf489p-495, 0x1.d288ac1a93132p-337, 0.0, 0.0, 0.0,
     0x1.6c5f5c24b7364p-334, 0.0, 0.0, 0x1.6e2729643e1f1p-286, 0.0,
     0x1.76c579ac7f621p-211, 0.0, 0.0, 0x1.3436f745d1838p-839, 0x1.28ac2c9e2acc6p-417,
     0x1.73732fd0d5b42p-326, 0.0, 0.0, 0.0, 0x1.44179ff5ad9dep-503, 0.0,
     0x1.ebaedad23c439p-927, 0.0, 0x1.0664b11363e32p-251, 0.0, 0.0,
     0x1.6c18c23e779d2p-560, 0x1.9828e3cf17c53p-438, 0.0, 0.0, 0.0,
     0x1.1544ed7f90e1p-446, 0.0, 0x1.6e6c1eb1bf93dp-915, 0x1.be2c9fc84f80dp-966,
     0x1.3d89b91a7c295p-490, 0.0, 0x1.9ff06184fefp-262, 0x1.ede1ac0f52dd3p-688,
     0x1.959d3f08b1045p-21, 0.0, 0.0, 0.0, 0.0, 0x1.d687854190ef8p-956, 0.0, 0.0, 0.0,
     0x1.a3e50d0565d72p-195, 0.0, 0.0, 0x1.78d1888cf72a3p-277, 0.0, 0.0, 0.0, 0.0,
     0x1.e04e103b853afp-461, 0.0, 0x1.cceb7ab68e30cp-106, 0.0, 0x1.db410b1e3e51ap-649,
     0x1.48c7c28edd0abp-549, 0x1.1be98b6cf379ap-28, 0.0, 0.0, 0.0,
     0x1.c9c657c36c336p-458, 0.0, 0.0, 0x1.645a97a34cc6ap-167, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.b0a0f45cfe7adp-460, 0.0, 0.0, 0.0, 0.0, 0x1.ce46970b27dc1p-217, 0.0,
     0.0, 0x1.a3514f6a4ad03p-545, 0x1.5bb2a85e2428p-7, 0.0, 0.0, 0.0,
     0x1.804095e167325p-110, 0.0, 0x1.320036eb17482p-805, 0.0, 0.0,
     0x1.c7c4ef4052729p-185, 0.0, 0.0, 0.0, 0x1.6172128168deep-385,
     0x1.dc616b40f47afp-740, 0.0, 0.0, 0x1.5ae11cff47ee3p-388, 0x1.05b2cd9de19b6p-748,
     0.0, 0x1.33908192850cdp-528, 0x1.3fe0ac565448ap-1020, 0.0,
     0x1.76c6dade43a11p-255, 0x1.ed4ab0670da2p-14, 0x1.2922a0c0e48f5p-961, 0.0,
     0x1.0463d186996ccp-965, 0x1.4e9fe76df7dbep-675, 0x1.a650f5bf14eedp-667,
     0x1.6e7c6c2dce927p-537, 0x1.2a40985ef9287p-50, 0.0, 0x1.886c87b913d1p-766, 0.0,
     0x1.5247755074095p-518, 0.0, 0.0, 0.0, 0x1.ae2a7892d3e9ep-857,
     0x1.0c34bba22f7f3p-785, 0.0, 0.0, 0.0, 0x1.69de843ae399p-857, 0.0, 0.0, 0.0, 0.0,
     0x1.c51f6eb46ec65p-221, 0.0, 0.0, 0x1.8c99fa92da56bp-182, 0.0, 0.0, 0.0,
     0x1.1c3cd7c840a42p-157, 0x1.d9414b568f92p-822, 0.0, 0.0, 0x1.be0e8b1784eccp-588,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.79c397a3fa677p-684, 0x1.6cff4f438cc82p-413, 0.0,
     0x1.b61790dd144d5p-10, 0.0, 0.0, 0x1.a6590be60d3e7p-128, 0.0, 0.0,
     0x1.19cbc37b766dep-127, 0x1.6c2a2aa26a0edp-957, 0x1.f9e587cc3392bp-328, 0.0,
     0x1.b0f55d021f72fp-633, 0x1.d9d11b7c2d94p-223, 0.0, 0x1.bbf303094197p-904,
     0x1.cad6eac04755bp-377, 0x1.b51321b507b74p-933, 0.0, 0.0, 0x1.9157b217dce61p-867,
     0x1.34517ea6dd252p-1019, 0.0, 0.0, 0x1.93b73a60ad3c1p-255,
     0x1.3c0e31531d2dep-907, 0x1.fbbf7b8ddf538p-785, 0x1.265acae73a789p-649, 0.0, 0.0,
     0x1.dd35ae89acb35p-657, 0.0, 0.0, 0.0, 0x1.0dede287ea0ddp-695,
     0x1.8397f048c8b7ap-274, 0x1.6242e8046dec8p-757, 0x1.8c7f1e2aa3efp-560,
     0x1.e50379005fc45p-119, 0x1.ed430a5280531p-179, 0x1.c7a8467d38e0ap-205, 0.0, 0.0,
     0.0, 0x1.fa18433416284p-262, 0x1.308f75a8518fdp-259, 0.0, 0x1.f4b6963fb3b8fp-429,
     0.0, 0.0, 0.0, 0x1.a0b2c16349ep-24, 0.0, 0x1.4b6f7f7a2a744p-40,
     0x1.d6f023969191p-50, 0x1.cb5c638ba3f8p-724, 0x1.67e1154352253p-532, 0.0,
     0x1.181262329a385p-725, 0.0, 0x1.05d62ac91477dp-701, 0.0, 0x1.2655f988714eap-833,
     0x1.430839081237dp-627, 0x1.3b155b2b6b70fp-206, 0x1.eba1c8cb3954fp-357, 0.0,
     0x1.0fdd3702124dep-398, 0x1.f045c15355b48p-288, 0.0, 0x1.2a7bf7cebd655p-633, 0.0,
     0x1.db52b5ba506d3p-443, 0.0, 0.0, 0.0, 0x1.5f5d7b861e3bcp-469,
     0x1.0676c82c7f509p-658, 0x1.9b64886d4f7a1p-793, 0x1.f5af839ae3eadp-313, 0.0, 0.0,
     0.0, 0x1.2e7e673ee6073p-330, 0x1.60a307b50f208p-603, 0.0, 0.0,
     0x1.a490179f8bc01p-256, 0x1.f16a86faa9aep-657, 0x1.400d4934e4aadp-807,
     0x1.1b52da33b0bbap-78, 0.0, 0x1.64c02f40dd28ap-356, 0x1.cdd3ca84402e7p-748, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1b42059e20986p-722, 0x1.2ce3766f2914cp-725,
     0x1.622028c5bc4adp-405, 0x1.655e197db9861p-524, 0x1.caf2057caf621p-6,
     0x1.e91a04e99b55bp-173, 0x1.c78aa6dad2433p-464, 0.0, 0x1.bddacae4288f3p-803,
     0x1.b4a5fb62b95d1p-766, 0.0, 0.0, 0.0, 0x1.21762d9c826c6p-766, 0.0,
     0x1.458784a456d1p-461, 0x1.c501f7a52cd1bp-360, 0x1.7e7914607a6f7p-465, 0.0, 0.0,
     0x1.c1f32ec739978p-154, 0.0, 0.0, 0.0, 0x1.a8332dd23d2eep-232,
     0x1.1fe546454734p-802, 0x1.6b3d1f56986d5p-979, 0.0, 0x1.a952ed15834fdp-241,
     0x1.08d3fa7dfa116p-530, 0x1.232277ffd385p-539, 0.0, 0x1.8b24123a6fa4dp-762, 0.0,
     0.0, 0x1.889d5e4fee836p-230, 0x1.9535e192af3f8p-208, 0x1.030c07d9201ep-382, 0.0,
     0.0, 0.0, 0.0, 0x1.b1a063fea6383p-67, 0x1.1dff6333c751p-580,
     0x1.3a09f152255b7p-7, 0x1.17ef1e1852d38p-383, 0.0, 0x1.757737331509fp-95,
     0x1.7f680ff8b36b3p-364, 0.0, 0.0, 0x1.ebb68e2ea8681p-556, 0.0, 0.0, 0.0,
     0x1.8dab3ac8291dcp-90, 0.0, 0.0, 0.0, 0x1.e46e45bccc0b5p-838, 0.0,
     0x1.4435192ea9c28p-150, 0.0, 0.0, 0x1.58130592e0d4ep-661, 0.0, 0.0,
     0x1.fb14f9276fcf4p-118, 0.0, 0x1.2405f66811a41p-678, 0x1.c3e17025ee5fbp-686,
     0x1.f07c43200eba2p-150, 0x1.f7811a3174223p-912, 0x1.f60f5939a094bp-193, 0.0,
     0x1.666648e53b978p-955, 0x1.ce60adf36a6f8p-682, 0.0, 0x1.d13afc1462eb6p-90,
     0x1.fe93d6b9cb626p-983, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d16b5fb1342d8p-171, 0.0,
     0.0, 0x1.ee157c4f73c31p-192, 0x1.e0b7adb0b9f5cp-137, 0.0, 0x1.33d51f72345c1p-524,
     0.0, 0x1.13b110ba620fp-368, 0.0, 0.0, 0.0, 0x1.f72527b54bf98p-734, 0.0, 0.0, 0.0,
     0.0, 0x1.f1203c650e5dp-674, 0x1.523df0c7d7205p-970, 0x1.91293cd0c5ddp-328,
     0x1.5924f00ab5f9bp-895, 0.0, 0.0, 0x1.19b86b307d94fp-898, 0.0,
     0x1.cdd259a6c69fcp-15, 0x1.5415a5cefefap-747, 0.0, 0x1.e2f3aabd0ab04p-555, 0.0,
     0x1.00c04ab3bdbc1p-145, 0x1.2356a6865b3eap-473, 0.0, 0x1.1445a35c6cc0bp-614,
     0x1.0b90df6d7cbb5p-453, 0x1.b00edffb0c1efp-1007, 0.0, 0x1.f346d9d70e368p-161,
     0.0, 0.0, 0.0, 0x1.c437caa157f0fp-482, 0x1.ace8975eaaa6dp-680,
     0x1.c24c9cbc3cddfp-566, 0.0, 0.0, 0x1.0a5567df01207p-687, 0x1.69df12d3a107cp-349,
     0x1.de480116a8521p-419, 0x1.ac03201ef878p-1004, 0x1.65f9ca2596361p-278, 0.0,
     0x1.be2bb34b6dc18p-641, 0.0, 0.0, 0x1.a596ff80e8cc3p-167, 0.0, 0.0,
     0x1.a57dd5fe5e4ddp-633, 0x1.46b07a1cfdad8p-109, 0x1.94cc5e09079e6p-704, 0.0,
     0x1.1c6ee8cfc8b1fp-463, 0x1.1f60f74577015p-240, 0x1.e44815d817879p-396,
     0x1.49fa316beb90ep-115, 0.0, 0.0, 0.0, 0.0, 0x1.a90f422a6f6adp-883, 0.0, 0.0,
     0x1.3ecc8fc333c95p-917, 0.0, 0.0, 0.0, 0.0, 0x1.e1a4abaf2b647p-41, 0.0,
     0x1.36ce6e46fc883p-335, 0x1.ea1b2e22d59b7p-533, 0x1.4640859a88821p-198,
     0x1.5ae6da3183efdp-336, 0x1.c9816c40d01f1p-55, 0x1.20222964376aap-688, 0.0, 0.0,
     0.0, 0x1.3dd6ce4eb6342p-52, 0x1.0bdf51efafa25p-305, 0x1.016d7c0a6cb7p-386, 0.0,
     0.0, 0x1.0c5d603a15a79p-104, 0.0, 0.0, 0x1.a98e7cc2c6904p-427, 0.0,
     0x1.71722b3a843d2p-479, 0.0, 0.0, 0x1.bbd44f44912b1p-534, 0.0,
     0x1.348b612411b07p-558, 0x1.bc53c111f56acp-840, 0x1.ddfccb740d09p-439, 0.0, 0.0,
     0.0, 0x1.67bdf6b6206d9p-34, 0.0, 0x1.13318871b4c7bp-558, 0x1.50bffe2f4382fp-282,
     0x1.d42b40d129ceap-510, 0.0, 0x1.3bab4d74466e2p-2, 0x1.2f9c5d95c1725p-95, 0.0,
     0.0, 0.0, 0x1.c010a8181964dp-765, 0x1.06567f6c12d2bp-940, 0.0,
     0x1.31e161dc28ff5p-874, 0.0, 0.0, 0.0, 0.0, 0x1.d0753dc880972p-872,
     0x1.5975641ed1eafp-790, 0x1.ce50299dbb705p-450, 0x1.f6c3338a4fc48p-734,
     0x1.c4010633eb5e6p-670, 0x1.3ae43d58c7e93p-166, 0x1.d6ad7583a16ep-416, 0.0,
     0x1.bda03cee0ee3ep-780, 0x1.93e3c9ce3330cp-1008, 0.0, 0.0, 0.0, 0.0,
     0x1.7d4e0edb15eb1p-959, 0.0, 0.0, 0x1.cdf39501a36fap-850, 0x1.dd13e30cc6474p-976,
     0.0, 0.0, 0x1.b68e7985facfp-342, 0x1.75b80c4e9593bp-531, 0x1.e68bd96da9b97p-242,
     0.0, 0.0, 0.0, 0x1.2cc8e4b552e4bp-713, 0x1.f22d79e4c7c41p-297,
     0x1.ffb4f3a3828bp-765, 0.0, 0.0, 0.0, 0.0, 0x1.33ed6c0ddc37p-308,
     0x1.7cc7fb80cb013p-327, 0x1.5a5e9df60ac3dp-409, 0.0, 0x1.1ab6a1155fc3dp-350,
     0x1.3b62381d8e06ap-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8f04f0388e01p-511, 0.0, 0x1.79996c223519bp-687, 0.0, 0x1.155947330d5eep-78,
     0x1.ba8e706ffc6bep-357, 0x1.88e6ed6ddf526p-1007, 0x1.d624d7acc16f9p-31, 0.0,
     0x1.7d4fe7e7fc205p-924, 0.0, 0.0, 0x1.94bbee1a1c056p-551, 0x1.4f5b6867967d5p-815,
     0.0, 0x1.b8c25a4528bbcp-457, 0x1.3af405dcb004cp-925, 0x1.c920ae3226ffbp-124, 0.0,
     0.0, 0.0, 0x1.78aa634c1021ap-190, 0x1.5e97e8dee707ep-213, 0x1.1e8bc3cf3496p-72,
     0.0, 0.0, 0x1.8c8ed7afdef19p-982, 0x1.f63958e6fa552p-740, 0x1.8651c8215f858p-213,
     0.0, 0x1.4eed638b3e29p-49, 0.0, 0.0, 0x1.c6fc7f7cd8369p-838, 0.0,
     0x1.a067c6a6a4c84p-919, 0.0, 0x1.40fd90325569bp-93, 0.0, 0.0, 0.0, 0.0,
     0x1.554a102db3abfp-279, 0x1.bab5c04639e0ap-868, 0x1.ad44c5ec503p-887,
     0x1.ccde2203adb9dp-770, 0x1.e10af1a6e0748p-272, 0.0, 0x1.88725fb8c2575p-326, 0.0,
     0x1.db5e74fa8c887p-903, 0x1.0841d8ef93feep-987, 0x1.f8c8a73644b72p-922, 0.0, 0.0,
     0x1.4e18d7c219976p-368, 0x1.28637375898c8p-1015, 0.0, 0x1.98da8ddecf57ep-815,
     0.0, 0x1.65d53cedaa237p-176, 0x1.e3e5121cf86b6p-172, 0.0, 0x1.1687d79d45062p-335,
     0.0, 0.0, 0x1.8ac6ce3ae8162p-33, 0.0, 0.0, 0x1.1e9940fc23bd8p-622,
     0x1.0d71d862d5f3fp-859, 0.0, 0x1.9516442ef0513p-247, 0.0, 0x1.22e942efd2e5fp-87,
     0x1.c1d61b1e7476bp-238, 0.0, 0.0, 0x1.d4ca894cf0e1ep-147, 0x1.fd000fb23a896p-650,
     0x1.5f524865fe878p-538, 0.0, 0.0, 0.0, 0x1.ae795988e3308p-545,
     0x1.28f08d73cd77dp-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f1ef41769669dp-417,
     0x1.73aa0884e69d9p-464, 0.0, 0x1.70d258cde6aafp-435, 0.0, 0.0,
     0x1.10474074be8edp-438, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a43814b9fd919p-711, 0.0,
     0x1.edd1df72438d3p-189, 0.0, 0x1.23d3b377928dp-237, 0.0, 0.0, 0.0, 0.0,
     0x1.eefba1ee1b53p-271, 0.0, 0x1.f8363e9be0e8ep-128, 0x1.1591c6d56c204p-1002, 0.0,
     0.0, 0.0, 0x1.63a71fa1db088p-897, 0x1.db3f816a0f8d7p-26, 0x1.76ace5921b15dp-423,
     0x1.1eb13728a5a8bp-853, 0.0, 0x1.a777b3a0b17b1p-767, 0.0, 0x1.6a331cf93ae5cp-74,
     0.0, 0x1.bc2a08b7e7dcdp-563, 0x1.621b8fd615fbp-359, 0x1.86ef96a307c24p-476, 0.0,
     0.0, 0.0, 0x1.8204c686209ep-183, 0.0, 0x1.4d9973b3cf38bp-984,
     0x1.05a06226c3673p-853, 0x1.93798ed677f91p-298, 0.0, 0x1.6b05f8dca0bbbp-407, 0.0,
     0x1.3b8537269b4e1p-162, 0x1.e3916a5c1de72p-330, 0.0, 0.0, 0x1.adf72b36386dbp-43,
     0x1.393b30d25eb57p-998, 0x1.f5a246aca4abap-673, 0.0, 0x1.cf8617fcb33bdp-589, 0.0,
     0.0, 0.0, 0.0, 0x1.be4aaf3cf59e6p-419, 0.0, 0x1.f797c17acc3c2p-940,
     0x1.4314a293aa898p-654, 0.0, 0x1.d0bf1bdd9e6edp-731, 0.0, 0.0, 0.0,
     0x1.7b9c1cdc7d0b8p-272, 0.0, 0.0, 0.0, 0x1.b3fe151b11156p-377,
     0x1.da49eb810b09dp-930, 0.0, 0.0, 0.0, 0.0, 0x1.356a3835cf2bap-485,
     0x1.08d890b2a75b2p-117, 0.0, 0.0, 0x1.bb95141ce3f92p-625, 0x1.bb9eec798bc5fp-540,
     0x1.68ad1b1607f57p-594, 0x1.a590edbde59e5p-447, 0.0, 0.0, 0.0, 0.0,
     0x1.f591d32240f64p-360, 0x1.3cee8825f3441p-737, 0.0, 0x1.5a7603430aa27p-741, 0.0,
     0.0, 0x1.092933ca10acfp-178, 0x1.269d05cc482bfp-994, 0.0, 0x1.93dd23a2734e6p-484,
     0.0, 0.0, 0x1.72423e4cda1f7p-698, 0x1.a85d9ee7262f9p-677, 0.0,
     0x1.2cff37db3ad9ep-350, 0x1.9cd30cd5d3d58p-77, 0x1.ce54a53c8524ap-472, 0.0,
     0x1.b012796489d74p-355, 0x1.b2575d99c0206p-254, 0.0, 0x1.b455f4e3b57b4p-647, 0.0,
     0.0, 0x1.5b9c002ad1b89p-670, 0.0, 0x1.edc2ba1b66c1dp-183, 0x1.1ce63ecc205f9p-902,
     0.0, 0.0, 0x1.d86a82f4e58fdp-694, 0.0, 0.0, 0x1.d294a23e6b184p-22, 0.0,
     0x1.0dbcde69d725ap-679, 0.0, 0x1.a49122d2feed8p-44, 0.0, 0x1.058f1341f0412p-430,
     0.0, 0.0, 0.0, 0x1.c3c3da1c845p-129, 0.0, 0x1.49b3c63b84a83p-563,
     0x1.dba99121043a2p-946, 0.0, 0x1.c933f4632e1c4p-510, 0x1.d6f2ae8a6daaap-955,
     0x1.a48798c644accp-968, 0x1.562d6d305f596p-715, 0x1.ed3f6b2c4c84p-300,
     0x1.072ee41f01966p-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.915f9e9d4eeddp-702,
     0x1.a4ecdb99d1374p-814, 0.0, 0x1.6a45939c46642p-751, 0x1.47c483c572161p-711,
     0x1.ac61d078c273bp-680, 0.0, 0.0, 0x1.ac88c071e59e5p-530, 0x1.7ef34f0661dd7p-166,
     0.0, 0x1.22f0c18a85a44p-801, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb5135d3fa5dbp-179,
     0.0, 0x1.f199e614f543fp-211, 0x1.6a92d585e5df3p-806, 0.0, 0.0,
     0x1.973694a81a4a8p-142, 0x1.7347e1f903f9p-154, 0.0, 0.0, 0.0,
     0x1.8455b0a99c648p-166, 0x1.772995b7eed26p-612, 0.0, 0.0, 0x1.ed4744debd8bep-219,
     0.0, 0x1.a7d65cdb0a11ep-594, 0.0, 0x1.a5dc5dc2d4d83p-190, 0.0,
     0x1.b9f8a8e9bbf0fp-389, 0x1.5c480aeb7fc43p-951, 0x1.36cb9e1d43941p-851, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b1717de60be99p-340, 0x1.f506331e78e6cp-570, 0.0,
     0.0, 0x1.36c08fad405bcp-357, 0x1.1bebe9b4ea2a5p-38, 0.0, 0x1.7b62036ff0857p-968,
     0.0, 0x1.7e5f37c58991ap-202, 0.0, 0x1.87fcffd07f9ep-147, 0x1.67ff46f60b173p-923,
     0.0, 0.0, 0x1.1997f1b991a69p-213, 0.0, 0x1.6aa8b9205bebep-926, 0.0,
     0x1.6d5971429725ep-157, 0x1.c926ddefe7ec6p-223, 0x1.28ec5bbb16932p-392, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.966478b77669bp-913, 0x1.c183b26148e09p-859, 0.0,
     0x1.c61cc8b4d9546p-247, 0x1.dfb678aca969dp-580, 0x1.2daf6e9359cafp-63, 0.0, 0.0,
     0.0, 0x1.cf445f31cbf1p-203, 0x1.41b947269e947p-154, 0.0, 0x1.addaaab46c624p-394,
     0.0, 0x1.40d0aca175e78p-127, 0x1.fcabac8adc89p-61, 0x1.9098347508527p-256, 0.0,
     0x1.94679a240dc12p-977, 0x1.a6246025479ep-554, 0x1.e7e91b0ddb3d9p-271, 0.0, 0.0,
     0.0, 0x1.937bfb8c3564ap-547, 0x1.45fd09a5d681cp-602, 0.0, 0.0,
     0x1.946a56ddccb32p-732, 0x1.91be0c0e68c2fp-649, 0.0, 0.0, 0x1.20036671fb67fp-276,
     0x1.0abd8ef00c2eep-454, 0.0, 0x1.689c7093b9b18p-109, 0.0, 0x1.c1214d01247d4p-84,
     0.0, 0.0, 0x1.3b0a7b06fc892p-86, 0x1.2d913ca5b658p-871, 0.0, 0.0, 0.0,
     0x1.c2996612995bap-73, 0x1.8a89de9a419b9p-390, 0.0, 0.0, 0x1.21867f06c9a24p-259,
     0.0, 0.0, 0x1.33cfd1317cbf3p-747, 0x1.f62697393070cp-867, 0x1.4114075bd7c09p-226,
     0.0, 0.0, 0.0, 0x1.96dac9859aae2p-208, 0x1.bd47c43be9743p-776, 0.0,
     0x1.c2533c3ce19cp-954, 0x1.80dbe79cba85p-743, 0x1.5309ef31c8cecp-941, 0.0,
     0x1.b23b97cc3ccfep-523, 0x1.533e30d6b3abcp-575, 0.0, 0x1.5f2d31b967a5ap-938, 0.0,
     0x1.2d75283ee0063p-919, 0x1.dfc2bad10a135p-722, 0x1.20b7a8df74eb7p-491, 0.0, 0.0,
     0.0, 0x1.7f7b289686e24p-2, 0.0, 0.0, 0x1.e1740dd4e24fcp-983, 0.0,
     0x1.ea9851ea10d65p-28, 0x1.56cdf8105c41p-925, 0x1.2d550dbb2cd56p-123,
     0x1.6a513ecdda418p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.86c7e39e3f907p-894,
     0x1.dcd9500dffb21p-187, 0x1.6d4e2c860fe5fp-392, 0x1.e6af9ad65d3cep-958,
     0x1.6847b2cf60906p-919, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2235f0e630b8ap-759,
     0x1.2749687dd69bep-990, 0x1.ee819a6028112p-552, 0.0, 0.0, 0.0, 0.0,
     0x1.f73e2b701d3afp-343, 0x1.a8c53d155e33ap-467, 0x1.aaef8c69a127ep-821, 0.0,
     0x1.df97d10104396p-426, 0.0, 0x1.f2feaa1d1718ep-40, 0.0, 0x1.392e3d78075a5p-686,
     0x1.60e923e8af08ep-964, 0.0, 0.0, 0.0, 0.0, 0x1.3da12295d180ep-604,
     0x1.3b52f72d9aa95p-384, 0.0, 0.0, 0x1.ef8b8b511593p-378, 0x1.e589fa503f075p-510,
     0x1.f62c246e6fa6dp-881, 0.0, 0x1.834e8904ce146p-184, 0.0, 0.0
};
static const int32_t external_bench_wrapper_input_table_arg1[1001]  = {
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(1),
     INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0),
     INT32_C(1), INT32_C(1), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1),
     INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0),
     INT32_C(0), INT32_C(0), INT32_C(1), INT32_C(0), INT32_C(1)
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
            int32_t tmp1;
            double tmp2;
            double tmp3;
            int32_t tmp4;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = external_bench_wrapper_input_table_arg1[i];
            tmp2 = Sleef_finz_ldexpd1_purecfma(tmp0, tmp1);
            external_bench_wrapper_output_table[i] = tmp2;
            tmp3 = bench_acc + tmp2;
            bench_acc = tmp3;
            tmp4 = i + INT32_C(1);
            i = tmp4;
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
    printf("Sleef_finz_ldexpd1_purecfma %"PRIi64" elts over [[0;1], [0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_ldexpd1_purecfma bench acc %la\n", global_bench_acc);
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
