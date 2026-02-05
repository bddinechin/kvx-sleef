#include <stdint.h>

#ifdef __cplusplus
typedef uint16_t_t	float16_t;
#else
typedef _Float16	float16_t; 
#endif
typedef float		float32_t;
typedef double		float64_t;

typedef  int8_t		int8x8_t	__attribute__((vector_size(sizeof(int8_t)*8)));
typedef  int8_t		int8x16_t	__attribute__((vector_size(sizeof(int8_t)*16)));
typedef  int8_t		int8x32		__attribute__((vector_size(sizeof(int8_t)*32)));
typedef  int16_t	int16x4_t	__attribute__((vector_size(sizeof(int16_t)*4)));
typedef  int16_t	int16x8_t	__attribute__((vector_size(sizeof(int16_t)*8)));
typedef  int16_t	int16x16_t	__attribute__((vector_size(sizeof(int16_t)*16)));
typedef  uint16_t	uint16x4_t	__attribute__((vector_size(sizeof(uint16_t)*4)));
typedef  uint16_t 	uint16x8_t	__attribute__((vector_size(sizeof(uint16_t)*8)));
typedef  uint16_t 	uint16x16_t	__attribute__((vector_size(sizeof(uint16_t)*16)));
typedef  int32_t	int32x2_t	__attribute__((vector_size(sizeof(int32_t)*2)));
typedef  int32_t	int32x4_t	__attribute__((vector_size(sizeof(int32_t)*4)));
typedef  int32_t	int32x8_t	__attribute__((vector_size(sizeof(int32_t)*8)));
typedef  uint32_t	uint32x2_t	__attribute__((vector_size(sizeof(uint32_t)*2)));
typedef  uint32_t	uint32x4_t	__attribute__((vector_size(sizeof(uint32_t)*4)));
typedef  uint32_t	uint32x8_t	__attribute__((vector_size(sizeof(uint32_t)*8)));
typedef  int64_t	int64x2_t	__attribute__((vector_size(sizeof(int64_t)*2)));
typedef  int64_t	int64x4_t	__attribute__((vector_size(sizeof(int64_t)*4)));
typedef  uint64_t	uint64x2_t	__attribute__((vector_size(sizeof(uint64_t)*2)));
typedef  uint64_t	uint64x4_t	__attribute__((vector_size(sizeof(uint64_t)*4)));

typedef  float16_t	float16x4_t	__attribute__((vector_size(sizeof(float16_t)*4)));
typedef  float16_t	float16x8_t	__attribute__((vector_size(sizeof(float16_t)*8)));
typedef  float16_t	float16x16_t	__attribute__((vector_size(sizeof(float16_t)*16)));
typedef  float32_t	float32x2_t	__attribute__((vector_size(sizeof(float32_t)*2)));
typedef  float32_t	float32x4_t	__attribute__((vector_size(sizeof(float32_t)*4)));
typedef  float32_t	float32x8_t	__attribute__((vector_size(sizeof(float32_t)*8)));
typedef  float64_t	float64x2_t	__attribute__((vector_size(sizeof(float64_t)*2)));
typedef  float64_t	float64x4_t	__attribute__((vector_size(sizeof(float64_t)*4)));


#define kvx_abd(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_abdhq, \
		int16x8_t:  __builtin_kvx_abdho, \
		int16x16_t: __builtin_kvx_abdhx, \
		int32_t:    __builtin_kvx_abdw, \
		int32x2_t:  __builtin_kvx_abdwp, \
		int32x4_t:  __builtin_kvx_abdwq, \
		int32x8_t:  __builtin_kvx_abdwo, \
		int64_t:    __builtin_kvx_abdd, \
		int64x2_t:  __builtin_kvx_abddp, \
		int64x4_t:  __builtin_kvx_abddq \
	)(X, Y)

#define kvx_abds(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_abdhqs, \
		int16x8_t:  __builtin_kvx_abdhos, \
		int16x16_t: __builtin_kvx_abdhxs, \
		int32x2_t:  __builtin_kvx_abdwps, \
		int32x4_t:  __builtin_kvx_abdwqs, \
		int32x8_t:  __builtin_kvx_abdwos, \
		int64x2_t:  __builtin_kvx_abddps, \
		int64x4_t:  __builtin_kvx_abddqs \
	)(X, Y)

#define kvx_avg(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_avghq, \
		int16x8_t:  __builtin_kvx_avgho, \
		int16x16_t: __builtin_kvx_avghx, \
		int32_t:    __builtin_kvx_avgw, \
		int32x2_t:  __builtin_kvx_avgwp, \
		int32x4_t:  __builtin_kvx_avgwq, \
		int32x8_t:  __builtin_kvx_avgwo \
	)(X, Y)           

#define kvx_avgu(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_avguhq, \
		uint16x8_t:  __builtin_kvx_avguho, \
		uint16x16_t: __builtin_kvx_avguhx, \
		uint32_t:    __builtin_kvx_avguw, \
		uint32x2_t:  __builtin_kvx_avguwp, \
		uint32x4_t:  __builtin_kvx_avguwq, \
		uint32x8_t:  __builtin_kvx_avguwo \
	)(X, Y)

#define kvx_avgr(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_avgrhq, \
		int16x8_t:  __builtin_kvx_avgrho, \
		int16x16_t: __builtin_kvx_avgrhx, \
		int32_t:    __builtin_kvx_avgrw, \
		int32x2_t:  __builtin_kvx_avgrwp, \
		int32x4_t:  __builtin_kvx_avgrwq, \
		int32x8_t:  __builtin_kvx_avgrwo \
	)(X, Y)

#define kvx_avgru(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_avgruhq, \
		uint16x8_t:  __builtin_kvx_avgruho, \
		uint16x16_t: __builtin_kvx_avgruhx, \
		uint32_t:    __builtin_kvx_avgruw, \
		uint32x2_t:  __builtin_kvx_avgruwp, \
		uint32x4_t:  __builtin_kvx_avgruwq, \
		uint32x8_t:  __builtin_kvx_avgruwo \
	)(X, Y)

#define kvx_adds(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_addshq, \
		int16x8_t:  __builtin_kvx_addsho, \
		int16x16_t: __builtin_kvx_addshx, \
		int32_t:    __builtin_kvx_addsw, \
		int32x2_t:  __builtin_kvx_addswp, \
		int32x4_t:  __builtin_kvx_addswq, \
		int32x8_t:  __builtin_kvx_addswo, \
		int64_t:    __builtin_kvx_addsd, \
		int64x2_t:  __builtin_kvx_addsdp, \
		int64x4_t:  __builtin_kvx_addsdq \
	)(X, Y)

#define kvx_addss(X, Y, Z) _Generic((X), \
		int16x4_t:  __builtin_kvx_addshqs, \
		int16x8_t:  __builtin_kvx_addshos, \
		int16x16_t: __builtin_kvx_addshxs, \
		int32x2_t:  __builtin_kvx_addswps, \
		int32x4_t:  __builtin_kvx_addswqs, \
		int32x8_t:  __builtin_kvx_addswos, \
		int64x2_t:  __builtin_kvx_addsdps, \
		int64x4_t:  __builtin_kvx_addsdqs \
	)(X, Y, Z)

#define kvx_sbfs(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_sbfshq, \
		int16x8_t:  __builtin_kvx_sbfsho, \
		int16x16_t: __builtin_kvx_sbfshx, \
		int32_t:    __builtin_kvx_sbfsw, \
		int32x2_t:  __builtin_kvx_sbfswp, \
		int32x4_t:  __builtin_kvx_sbfswq, \
		int32x8_t:  __builtin_kvx_sbfswo, \
		int64_t:    __builtin_kvx_sbfsd, \
		int64x2_t:  __builtin_kvx_sbfsdp, \
		int64x4_t:  __builtin_kvx_sbfsdq \
	)(X, Y)

#define kvx_sbfss(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_sbfshqs, \
		int16x8_t:  __builtin_kvx_sbfshos, \
		int16x16_t: __builtin_kvx_sbfshxs, \
		int32x2_t:  __builtin_kvx_sbfswps, \
		int32x4_t:  __builtin_kvx_sbfswqs, \
		int32x8_t:  __builtin_kvx_sbfswos, \
		int64x2_t:  __builtin_kvx_sbfsdps, \
		int64x4_t:  __builtin_kvx_sbfsdqs \
	)(X, Y)

#define kvx_min(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_minhq, \
		int16x8_t:  __builtin_kvx_minho, \
		int16x16_t: __builtin_kvx_minhx, \
		int32_t:    __builtin_kvx_minw, \
		int32x2_t:  __builtin_kvx_minwp, \
		int32x4_t:  __builtin_kvx_minwq, \
		int32x8_t:  __builtin_kvx_minwo, \
		int64_t:    __builtin_kvx_mind, \
		int64x2_t:  __builtin_kvx_mindp, \
		int64x4_t:  __builtin_kvx_mindq \
	)(X, Y)

#define kvx_mins(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_minhqs, \
		int16x8_t:  __builtin_kvx_minhos, \
		int16x16_t: __builtin_kvx_minhxs, \
		int32x2_t:  __builtin_kvx_minwps, \
		int32x4_t:  __builtin_kvx_minwqs, \
		int32x8_t:  __builtin_kvx_minwos, \
		int64x2_t:  __builtin_kvx_mindps, \
		int64x4_t:  __builtin_kvx_mindqs \
	)(X, Y)

#define kvx_max(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_maxhq, \
		int16x8_t:  __builtin_kvx_maxho, \
		int16x16_t: __builtin_kvx_maxhx, \
		int32_t:    __builtin_kvx_maxw, \
		int32x2_t:  __builtin_kvx_maxwp, \
		int32x4_t:  __builtin_kvx_maxwq, \
		int32x8_t:  __builtin_kvx_maxwo, \
		int64_t:    __builtin_kvx_maxd, \
		int64x2_t:  __builtin_kvx_maxdp, \
		int64x4_t:  __builtin_kvx_maxdq \
	)(X, Y)

#define kvx_maxs(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_maxhqs, \
		int16x8_t:  __builtin_kvx_maxhos, \
		int16x16_t: __builtin_kvx_maxhxs, \
		int32x2_t:  __builtin_kvx_maxwps, \
		int32x4_t:  __builtin_kvx_maxwqs, \
		int32x8_t:  __builtin_kvx_maxwos, \
		int64x2_t:  __builtin_kvx_maxdps, \
		int64x4_t:  __builtin_kvx_maxdqs \
	)(X, Y)

#define kvx_minu(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_minuhq, \
		uint16x8_t:  __builtin_kvx_minuho, \
		uint16x16_t: __builtin_kvx_minuhx, \
		uint32_t:    __builtin_kvx_minuw, \
		uint32x2_t:  __builtin_kvx_minuwp, \
		uint32x4_t:  __builtin_kvx_minuwq, \
		uint32x8_t:  __builtin_kvx_minuwo, \
		uint64_t:    __builtin_kvx_minud, \
		uint64x2_t:  __builtin_kvx_minudp, \
		uint64x4_t:  __builtin_kvx_minudq \
	)(X, Y)

#define kvx_minus(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_minuhqs, \
		uint16x8_t:  __builtin_kvx_minuhos, \
		uint16x16_t: __builtin_kvx_minuhxs, \
		uint32x2_t:  __builtin_kvx_minuwps, \
		uint32x4_t:  __builtin_kvx_minuwqs, \
		uint32x8_t:  __builtin_kvx_minuwos, \
		uint64x2_t:  __builtin_kvx_minudps, \
		uint64x4_t:  __builtin_kvx_minudqs \
	)(X, Y)

#define kvx_maxu(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_maxuhq, \
		uint16x8_t:  __builtin_kvx_maxuho, \
		uint16x16_t: __builtin_kvx_maxuhx, \
		uint32_t:    __builtin_kvx_maxuw, \
		uint32x2_t:  __builtin_kvx_maxuwp, \
		uint32x4_t:  __builtin_kvx_maxuwq, \
		uint32x8_t:  __builtin_kvx_maxuwo, \
		uint64_t:    __builtin_kvx_maxud, \
		uint64x2_t:  __builtin_kvx_maxudp, \
		uint64x4_t:  __builtin_kvx_maxudq \
	)(X, Y)

#define kvx_maxus(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_maxuhqs, \
		uint16x8_t:  __builtin_kvx_maxuhos, \
		uint16x16_t: __builtin_kvx_maxuhxs, \
		uint32x2_t:  __builtin_kvx_maxuwps, \
		uint32x4_t:  __builtin_kvx_maxuwqs, \
		uint32x8_t:  __builtin_kvx_maxuwos, \
		uint64x2_t:  __builtin_kvx_maxudps, \
		uint64x4_t:  __builtin_kvx_maxudqs \
	)(X, Y)

#define kvx_slls(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_slluhqs, \
		uint16x8_t:  __builtin_kvx_slluhos, \
		uint16x16_t: __builtin_kvx_slluhxs, \
		uint32x2_t:  __builtin_kvx_slluwps, \
		uint32x4_t:  __builtin_kvx_slluwqs, \
		uint32x8_t:  __builtin_kvx_slluwos, \
		uint64x2_t:  __builtin_kvx_slludps, \
		uint64x4_t:  __builtin_kvx_slludqs \
	)(X, Y)

#define kvx_slss(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_slshqs, \
		int16x8_t:  __builtin_kvx_slshos, \
		int16x16_t: __builtin_kvx_slshxs, \
		int32x2_t:  __builtin_kvx_slswps, \
		int32x4_t:  __builtin_kvx_slswqs, \
		int32x8_t:  __builtin_kvx_slswos, \
		int64x2_t:  __builtin_kvx_slsdps, \
		int64x4_t:  __builtin_kvx_slsdqs \
	)(X, Y)

#define kvx_sras(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_srahqs, \
		int16x8_t:  __builtin_kvx_srahos, \
		int16x16_t: __builtin_kvx_srahxs, \
		int32x2_t:  __builtin_kvx_srawps, \
		int32x4_t:  __builtin_kvx_srawqs, \
		int32x8_t:  __builtin_kvx_srawos, \
		int64x2_t:  __builtin_kvx_sradps, \
		int64x4_t:  __builtin_kvx_sradqs \
	)(X, Y)

#define kvx_srls(X, Y) _Generic((X), \
		uint16x4_t:  __builtin_kvx_srluhqs, \
		uint16x8_t:  __builtin_kvx_srluhos, \
		uint16x16_t: __builtin_kvx_srluhxs, \
		uint32x2_t:  __builtin_kvx_srluwps, \
		uint32x4_t:  __builtin_kvx_srluwqs, \
		uint32x8_t:  __builtin_kvx_srluwos, \
		uint64x2_t:  __builtin_kvx_srludps, \
		uint64x4_t:  __builtin_kvx_srludqs \
	)(X, Y)

#define kvx_srss(X, Y) _Generic((X), \
		int16x4_t:  __builtin_kvx_srshqs, \
		int16x8_t:  __builtin_kvx_srshos, \
		int16x16_t: __builtin_kvx_srshxs, \
		int32x2_t:  __builtin_kvx_srswps, \
		int32x4_t:  __builtin_kvx_srswqs, \
		int32x8_t:  __builtin_kvx_srswos, \
		int64x2_t:  __builtin_kvx_srsdps, \
		int64x4_t:  __builtin_kvx_srsdqs \
	)(X, Y)

#define kvx_cls(X) _Generic((X), \
		uint32_t:   __builtin_kvx_clsw, \
		uint32x2_t: __builtin_kvx_clswp, \
		uint32x4_t: __builtin_kvx_clswq, \
		uint32x8_t: __builtin_kvx_clswo, \
		uint64_t:   __builtin_kvx_clsd, \
		uint64x2_t: __builtin_kvx_clsdp, \
		uint64x4_t: __builtin_kvx_clsdq \
	)(X)

#define kvx_clz(X) _Generic((X), \
		uint32_t:   __builtin_kvx_clzw, \
		uint32x2_t: __builtin_kvx_clzwp, \
		uint32x4_t: __builtin_kvx_clzwq, \
		uint32x8_t: __builtin_kvx_clzwo, \
		uint64_t:   __builtin_kvx_clzd, \
		uint64x2_t: __builtin_kvx_clzdp, \
		uint64x4_t: __builtin_kvx_clzdq \
	)(X)

#define kvx_ctz(X) _Generic((X), \
		uint32_t:   __builtin_kvx_ctzw, \
		uint32x2_t: __builtin_kvx_ctzwp, \
		uint32x4_t: __builtin_kvx_ctzwq, \
		uint32x8_t: __builtin_kvx_ctzwo, \
		uint64_t:   __builtin_kvx_ctzd, \
		uint64x2_t: __builtin_kvx_ctzdp, \
		uint64x4_t: __builtin_kvx_ctzdq \
	)(X)

#define kvx_cbs(X) _Generic((X), \
		uint32_t:   __builtin_kvx_cbsw, \
		uint32x2_t: __builtin_kvx_cbswp, \
		uint32x4_t: __builtin_kvx_cbswq, \
		uint32x8_t: __builtin_kvx_cbswo, \
		uint64_t:   __builtin_kvx_cbsd, \
		uint64x2_t: __builtin_kvx_cbsdp, \
		uint64x4_t: __builtin_kvx_cbsdq \
	)(X)

#define kvx_shift(X, Y, Z) _Generic((X), \
		int8x8_t:   __builtin_kvx_shiftbo, \
		int8x16_t:  __builtin_kvx_shiftbx, \
		int8x32:  __builtin_kvx_shiftbv, \
		int16x4_t:  __builtin_kvx_shifthq, \
		int16x8_t:  __builtin_kvx_shiftho, \
		int16x16_t: __builtin_kvx_shifthx, \
		int32x2_t:  __builtin_kvx_shiftwp, \
		int32x4_t:  __builtin_kvx_shiftwq, \
		int32x8_t:  __builtin_kvx_shiftwo, \
		int64x2_t:  __builtin_kvx_shiftdp, \
		int64x4_t:  __builtin_kvx_shiftdq \
	)(X, Y, Z)

#define kvx_shiftf(X, Y, Z) _Generic((X), \
		float16x4_t:  __builtin_kvx_shiftfhq, \
		float16x8_t:  __builtin_kvx_shiftfho, \
		float16x16_t: __builtin_kvx_shiftfhx, \
		float32x2_t:  __builtin_kvx_shiftfwp, \
		float32x4_t:  __builtin_kvx_shiftfwq, \
		float32x8_t:  __builtin_kvx_shiftfwo, \
		float64x2_t:  __builtin_kvx_shiftfdp, \
		float64x4_t:  __builtin_kvx_shiftfdq \
	)(X, Y, Z)

#define kvx_acswap(X, Y, Z) _Generic((Y), \
		uint32_t: __builtin_kvx_acswapw, \
		uint64_t: __builtin_kvx_acswapd \
	)(X, Y, Z)

#define kvx_aladd(X, Y) _Generic((Y), \
		uint32_t: __builtin_kvx_aladdw, \
		uint64_t: __builtin_kvx_aladdd \
	)(X, Y)

#define kvx_cons(X, Y) _Generic((X), \
		int8x8_t:  __builtin_kvx_consbx, \
		int8x16_t: __builtin_kvx_consbv, \
		int16x4_t: __builtin_kvx_consho, \
		int16x8_t: __builtin_kvx_conshx, \
		int32_t:   __builtin_kvx_conswp, \
		int32x2_t: __builtin_kvx_conswq, \
		int32x4_t: __builtin_kvx_conswo, \
		int64_t:   __builtin_kvx_consdp, \
		int64x2_t: __builtin_kvx_consdq \
	)(X, Y)

#define kvx_consf(X, Y) _Generic((X), \
		float16x4_t: __builtin_kvx_consfho, \
		float16x8_t: __builtin_kvx_consfhx, \
		float32_t:   __builtin_kvx_consfwp, \
		float32x2_t: __builtin_kvx_consfwq, \
		float32x4_t: __builtin_kvx_consfwo, \
		float64_t:   __builtin_kvx_consfdp, \
		float64x2_t: __builtin_kvx_consfdq, \
	)(X, Y)

#define kvx_select(X, Y, Z, A) _Generic((X), \
		int16x4_t:  __builtin_kvx_selecthq, \
		int16x8_t:  __builtin_kvx_selectho, \
		int16x16_t: __builtin_kvx_selecthx, \
		int32x2_t:  __builtin_kvx_selectwp, \
		int32x4_t:  __builtin_kvx_selectwq, \
		int32x8_t:  __builtin_kvx_selectwo, \
		int64x2_t:  __builtin_kvx_selectdp, \
		int64x4_t:  __builtin_kvx_selectdq, \
		float16x4_t:  __builtin_kvx_selecthq, \
		float16x8_t:  __builtin_kvx_selectho, \
		float16x16_t: __builtin_kvx_selecthx, \
		float32x2_t:  __builtin_kvx_selectwp, \
		float32x4_t:  __builtin_kvx_selectwq, \
		float32x8_t:  __builtin_kvx_selectwo, \
		float64x2_t:  __builtin_kvx_selectdp, \
		float64x4_t:  __builtin_kvx_selectdq \
	)(X, Y, Z, A)

#define kvx_copysign(X, Y) _Generic((X), \
		float16_t:    __builtin_kvx_copysignh, \
		float16x4_t:  __builtin_kvx_copysignhq, \
		float16x8_t:  __builtin_kvx_copysignho, \
		float16x16_t: __builtin_kvx_copysignhx, \
		float32_t:    __builtin_kvx_copysignw, \
		float32x2_t:  __builtin_kvx_copysignwp, \
		float32x4_t:  __builtin_kvx_copysignwq, \
		float32x8_t:  __builtin_kvx_copysignwo, \
		float64_t:    __builtin_kvx_copysignd, \
		float64x2_t:  __builtin_kvx_copysigndp, \
		float64x4_t:  __builtin_kvx_copysigndq \
	)(X, Y)

#define kvx_fmin(X, Y) _Generic((X), \
		float16_t:    __builtin_kvx_fminh, \
		float16x4_t:  __builtin_kvx_fminhq, \
		float16x8_t:  __builtin_kvx_fminho, \
		float16x16_t: __builtin_kvx_fminhx, \
		float32_t:    __builtin_kvx_fminw, \
		float32x2_t:  __builtin_kvx_fminwp, \
		float32x4_t:  __builtin_kvx_fminwq, \
		float32x8_t:  __builtin_kvx_fminwo, \
		float64_t:    __builtin_kvx_fmind, \
		float64x2_t:  __builtin_kvx_fmindp, \
		float64x4_t:  __builtin_kvx_fmindq \
	)(X, Y)

#define kvx_fmins(X, Y) _Generic((X), \
		float16x4_t:  __builtin_kvx_fminhqs, \
		float16x8_t:  __builtin_kvx_fminhos, \
		float16x16_t: __builtin_kvx_fminhxs, \
		float32x2_t:  __builtin_kvx_fminwps, \
		float32x4_t:  __builtin_kvx_fminwqs, \
		float32x8_t:  __builtin_kvx_fminwos, \
		float64x2_t:  __builtin_kvx_fmindps, \
		float64x4_t:  __builtin_kvx_fmindqs \
	)(X, Y)

#define kvx_fmax(X, Y) _Generic((X), \
		float16_t:    __builtin_kvx_fmaxh, \
		float16x4_t:  __builtin_kvx_fmaxhq, \
		float16x8_t:  __builtin_kvx_fmaxho, \
		float16x16_t: __builtin_kvx_fmaxhx, \
		float32_t:    __builtin_kvx_fmaxw, \
		float32x2_t:  __builtin_kvx_fmaxwp, \
		float32x4_t:  __builtin_kvx_fmaxwq, \
		float32x8_t:  __builtin_kvx_fmaxwo, \
		float64_t:    __builtin_kvx_fmaxd, \
		float64x2_t:  __builtin_kvx_fmaxdp, \
		float64x4_t:  __builtin_kvx_fmaxdq \
	)(X, Y)

#define kvx_fmaxs(X, Y) _Generic((X), \
		float16x4_t:  __builtin_kvx_fmaxhqs, \
		float16x8_t:  __builtin_kvx_fmaxhos, \
		float16x16_t: __builtin_kvx_fmaxhxs, \
		float32x2_t:  __builtin_kvx_fmaxwps, \
		float32x4_t:  __builtin_kvx_fmaxwqs, \
		float32x8_t:  __builtin_kvx_fmaxwos, \
		float64x2_t:  __builtin_kvx_fmaxdps, \
		float64x4_t:  __builtin_kvx_fmaxdqs \
	)(X, Y)

#define kvx_fneg(X) _Generic((X), \
		float16_t:    __builtin_kvx_fnegh, \
		float16x4_t:  __builtin_kvx_fneghq, \
		float16x8_t:  __builtin_kvx_fnegho, \
		float16x16_t: __builtin_kvx_fneghx, \
		float32_t:    __builtin_kvx_fnegw, \
		float32x2_t:  __builtin_kvx_fnegwp, \
		float32x4_t:  __builtin_kvx_fnegwq, \
		float32x8_t:  __builtin_kvx_fnegwo, \
		float64_t:    __builtin_kvx_fnegd, \
		float64x2_t:  __builtin_kvx_fnegdp, \
		float64x4_t:  __builtin_kvx_fnegdq \
	)(X)

#define kvx_fabs(X) _Generic((X), \
		float16_t:    __builtin_kvx_fabsh, \
		float16x4_t:  __builtin_kvx_fabshq, \
		float16x8_t:  __builtin_kvx_fabsho, \
		float16x16_t: __builtin_kvx_fabshx, \
		float32_t:    __builtin_kvx_fabsw, \
		float32x2_t:  __builtin_kvx_fabswp, \
		float32x4_t:  __builtin_kvx_fabswq, \
		float32x8_t:  __builtin_kvx_fabswo, \
		float64_t:    __builtin_kvx_fabsd, \
		float64x2_t:  __builtin_kvx_fabsdp, \
		float64x4_t:  __builtin_kvx_fabsdq \
	)(X)

#define kvx_frec(X, Y) _Generic((X), \
		float32_t:   __builtin_kvx_frecw, \
		float32x2_t: __builtin_kvx_frecwp, \
		float32x4_t: __builtin_kvx_frecwq, \
		float32x8_t: __builtin_kvx_frecwo \
	)(X, Y)

#define kvx_frsr(X, Y) _Generic((X), \
		float32_t:   __builtin_kvx_frsrw, \
		float32x2_t: __builtin_kvx_frsrwp, \
		float32x4_t: __builtin_kvx_frsrwq, \
		float32x8_t: __builtin_kvx_frsrwo \
	)(X, Y)

#define kvx_fadd(X, Y, Z) _Generic((X), \
		float16_t:    __builtin_kvx_faddh, \
		float16x4_t:  __builtin_kvx_faddhq, \
		float16x8_t:  __builtin_kvx_faddho, \
		float16x16_t: __builtin_kvx_faddhx, \
		float32_t:    __builtin_kvx_faddw, \
		float32x2_t:  __builtin_kvx_faddwp, \
		float32x4_t:  __builtin_kvx_faddwq, \
		float32x8_t:  __builtin_kvx_faddwo, \
		float64_t:    __builtin_kvx_faddd, \
		float64x2_t:  __builtin_kvx_fadddp, \
		float64x4_t:  __builtin_kvx_fadddq \
	)(X, Y, Z)

#define kvx_fsbf(X, Y, Z) _Generic((X), \
		float16_t:    __builtin_kvx_fsbfh, \
		float16x4_t:  __builtin_kvx_fsbfhq, \
		float16x8_t:  __builtin_kvx_fsbfho, \
		float16x16_t: __builtin_kvx_fsbfhx, \
		float32_t:    __builtin_kvx_fsbfw, \
		float32x2_t:  __builtin_kvx_fsbfwp, \
		float32x4_t:  __builtin_kvx_fsbfwq, \
		float32x8_t:  __builtin_kvx_fsbfwo, \
		float64_t:    __builtin_kvx_fsbfd, \
		float64x2_t:  __builtin_kvx_fsbfdp, \
		float64x4_t:  __builtin_kvx_fsbfdq \
	)(X, Y, Z)

#define kvx_fmul(X, Y, Z) _Generic((X), \
		float16_t:    __builtin_kvx_fmulh, \
		float16x4_t:  __builtin_kvx_fmulhq, \
		float16x8_t:  __builtin_kvx_fmulho, \
		float16x16_t: __builtin_kvx_fmulhx, \
		float32_t:    __builtin_kvx_fmulw, \
		float32x2_t:  __builtin_kvx_fmulwp, \
		float32x4_t:  __builtin_kvx_fmulwq, \
		float32x8_t:  __builtin_kvx_fmulwo, \
		float64_t:    __builtin_kvx_fmuld, \
		float64x2_t:  __builtin_kvx_fmuldp, \
		float64x4_t:  __builtin_kvx_fmuldq \
	)(X, Y, Z)

#define kvx_fmulc(X, Y, Z) _Generic((X), \
		float32x2_t: __builtin_kvx_fmulwc, \
		float32x4_t: __builtin_kvx_fmulwcp, \
		float32x8_t: __builtin_kvx_fmulwcq, \
		float64x2_t: __builtin_kvx_fmuldc, \
		float64x4_t: __builtin_kvx_fmuldcp \
	)(X, Y, Z)

#define kvx_ffma(X, Y, Z, A) _Generic((X), \
		float16_t:    __builtin_kvx_ffmah, \
		float16x4_t:  __builtin_kvx_ffmahq, \
		float16x8_t:  __builtin_kvx_ffmaho, \
		float16x16_t: __builtin_kvx_ffmahx, \
		float32_t:    __builtin_kvx_ffmaw, \
		float32x2_t:  __builtin_kvx_ffmawp, \
		float32x4_t:  __builtin_kvx_ffmawq, \
		float32x8_t:  __builtin_kvx_ffmawo, \
		float64_t:    __builtin_kvx_ffmad, \
		float64x2_t:  __builtin_kvx_ffmadp, \
		float64x4_t:  __builtin_kvx_ffmadq \
	)(X, Y, Z, A)

#define kvx_ffmac(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffmawc, \
		float32x4_t: __builtin_kvx_ffmawcp, \
		float32x8_t: __builtin_kvx_ffmawcq, \
		float64x2_t: __builtin_kvx_ffmadc, \
		float64x4_t: __builtin_kvx_ffmadcp \
	)(X, Y, Z, A)

#define kvx_ffms(X, Y, Z, A) _Generic((X), \
		float16_t:    __builtin_kvx_ffmsh, \
		float16x4_t:  __builtin_kvx_ffmshq, \
		float16x8_t:  __builtin_kvx_ffmsho, \
		float16x16_t: __builtin_kvx_ffmshx, \
		float32_t:    __builtin_kvx_ffmsw, \
		float32x2_t:  __builtin_kvx_ffmswp, \
		float32x4_t:  __builtin_kvx_ffmswq, \
		float32x8_t:  __builtin_kvx_ffmswo, \
		float64_t:    __builtin_kvx_ffmsd, \
		float64x2_t:  __builtin_kvx_ffmsdp, \
		float64x4_t:  __builtin_kvx_ffmsdq \
	)(X, Y, Z, A)

#define kvx_ffmsc(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffmswc, \
		float32x4_t: __builtin_kvx_ffmswcp, \
		float32x8_t: __builtin_kvx_ffmswcq, \
		float64x2_t: __builtin_kvx_ffmsdc, \
		float64x4_t: __builtin_kvx_ffmsdcp \
	)(X, Y, Z, A)

#define kvx_ffdma(X, Y, Z) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmaw, \
		float32x4_t: __builtin_kvx_ffdmawp, \
		float32x8_t: __builtin_kvx_ffdmawq \
	)(X, Y, Z)

#define kvx_ffdms(X, Y, Z) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmsw, \
		float32x4_t: __builtin_kvx_ffdmswp, \
		float32x8_t: __builtin_kvx_ffdmswq \
	)(X, Y, Z)

#define kvx_ffdmda(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmdaw, \
		float32x4_t: __builtin_kvx_ffdmdawp, \
		float32x8_t: __builtin_kvx_ffdmdawq \
	)(X, Y, Z, A)

#define kvx_ffdmsa(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmsaw, \
		float32x4_t: __builtin_kvx_ffdmsawp, \
		float32x8_t: __builtin_kvx_ffdmsawq \
	)(X, Y, Z, A)

#define kvx_ffdmds(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmdsw, \
		float32x4_t: __builtin_kvx_ffdmdswp, \
		float32x8_t: __builtin_kvx_ffdmdswq \
	)(X, Y, Z, A)

#define kvx_ffdmas(X, Y, Z, A) _Generic((X), \
		float32x2_t: __builtin_kvx_ffdmasw, \
		float32x4_t: __builtin_kvx_ffdmaswp, \
		float32x8_t: __builtin_kvx_ffdmaswq \
	)(X, Y, Z, A)

#define kvx_float(X, Y, Z) _Generic((X), \
		int32_t:   __builtin_kvx_floatw, \
		int32x2_t: __builtin_kvx_floatwp, \
		int32x4_t: __builtin_kvx_floatwq, \
		int32x8_t: __builtin_kvx_floatwo, \
		int64_t:   __builtin_kvx_floatd, \
		int64x2_t: __builtin_kvx_floatdp, \
		int64x4_t: __builtin_kvx_floatdq \
	)(X, Y, Z)

#define kvx_floatu(X, Y, Z) _Generic((X), \
		int32_t:   __builtin_kvx_floatuw, \
		int32x2_t: __builtin_kvx_floatuwp, \
		int32x4_t: __builtin_kvx_floatuwq, \
		int32x8_t: __builtin_kvx_floatuwo, \
		int64_t:   __builtin_kvx_floatud, \
		int64x2_t: __builtin_kvx_floatudp, \
		int64x4_t: __builtin_kvx_floatudq \
	)(X, Y, Z)

#define kvx_fixed(X, Y, Z) _Generic((X), \
		float32_t:   __builtin_kvx_fixedw, \
		float32x2_t: __builtin_kvx_fixedwp, \
		float32x4_t: __builtin_kvx_fixedwq, \
		float32x8_t: __builtin_kvx_fixedwo, \
		float64_t:   __builtin_kvx_fixedd, \
		float64x2_t: __builtin_kvx_fixeddp, \
		float64x4_t: __builtin_kvx_fixeddq \
	)(X, Y, Z)

#define kvx_fixedu(X, Y, Z) _Generic((X), \
		float32_t:   __builtin_kvx_fixeduw, \
		float32x2_t: __builtin_kvx_fixeduwp, \
		float32x4_t: __builtin_kvx_fixeduwq, \
		float32x8_t: __builtin_kvx_fixeduwo, \
		float64_t:   __builtin_kvx_fixedud, \
		float64x2_t: __builtin_kvx_fixedudp, \
		float64x4_t: __builtin_kvx_fixedudq \
	)(X, Y, Z)

#define kvx_fconj(X) _Generic((X), \
		float32x2_t: __builtin_kvx_fconjwc, \
		float32x2_t: __builtin_kvx_fconjwcp, \
		float32x2_t: __builtin_kvx_fconjwcq, \
		float64x2_t: __builtin_kvx_fconjdc, \
		float64x4_t: __builtin_kvx_fconjdcp \
	)(X)

#define kvx_fcdiv(X, Y, Z) _Generic((X), \
		float32_t:   __builtin_kvx_fcdivw, \
		float32x2_t: __builtin_kvx_fcdivwp, \
		float32x4_t: __builtin_kvx_fcdivwq, \
		float32x8_t: __builtin_kvx_fcdivwo, \
		float64_t:   __builtin_kvx_fcdivd, \
		float64x2_t: __builtin_kvx_fcdivdp, \
		float64x4_t: __builtin_kvx_fcdivdq \
	)(X, Y, Z)

#define kvx_fsdiv(X, Y, Z) _Generic((X), \
		float32_t:   __builtin_kvx_fsdivw, \
		float32x2_t: __builtin_kvx_fsdivwp, \
		float32x4_t: __builtin_kvx_fsdivwq, \
		float32x8_t: __builtin_kvx_fsdivwo, \
		float64_t:   __builtin_kvx_fsdivd, \
		float64x2_t: __builtin_kvx_fsdivdp, \
		float64x4_t: __builtin_kvx_fsdivdq \
	)(X, Y, Z)

#define kvx_fsrec(X, Y) _Generic((X), \
		float32_t:   __builtin_kvx_fsrecw, \
		float32x2_t: __builtin_kvx_fsrecwp, \
		float32x4_t: __builtin_kvx_fsrecwq, \
		float32x8_t: __builtin_kvx_fsrecwo, \
		float64_t:   __builtin_kvx_fsrecd, \
		float64x2_t: __builtin_kvx_fsrecdp, \
		float64x4_t: __builtin_kvx_fsrecdq \
	)(X, Y)

#define kvx_fsrsr(X, Y) _Generic((X), \
		float32_t:   __builtin_kvx_fsrsrw, \
		float32x2_t: __builtin_kvx_fsrsrwp, \
		float32x4_t: __builtin_kvx_fsrsrwq, \
		float32x8_t: __builtin_kvx_fsrsrwo, \
		float64_t:   __builtin_kvx_fsrsrd, \
		float64x2_t: __builtin_kvx_fsrsrdp, \
		float64x4_t: __builtin_kvx_fsrsrdq \
	)(X, Y)
