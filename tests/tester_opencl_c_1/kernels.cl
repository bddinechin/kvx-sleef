//////////////// OpenCL-C function implemented with Sleef //////////////////

__kernel void test_Sleef_sind2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sin(in[i]);
	}

__kernel void test_Sleef_cosd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cos(in[i]);
	}

__kernel void test_Sleef_tand2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = tan(in[i]);
	}

__kernel void test_Sleef_asind2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = asin(in[i]);
	}

__kernel void test_Sleef_acosd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = acos(in[i]);
	}

__kernel void test_Sleef_atand2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = atan(in[i]);
	}

__kernel void test_Sleef_logd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log(in[i]);
	}

__kernel void test_Sleef_cbrtd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cbrt(in[i]);
}

__kernel void test_Sleef_sind2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sin(in[i]);
	}

__kernel void test_Sleef_cosd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cos(in[i]);
	}

__kernel void test_Sleef_tand2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = tan(in[i]);
	}

__kernel void test_Sleef_asind2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = asin(in[i]);
	}

__kernel void test_Sleef_acosd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = acos(in[i]);
	}

__kernel void test_Sleef_atand2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = atan(in[i]);
	}

__kernel void test_Sleef_logd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log(in[i]);
	}

__kernel void test_Sleef_cbrtd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cbrt(in[i]);
	}

__kernel void test_Sleef_expd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = exp(in[i]);
	}

__kernel void test_Sleef_sinhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sinh(in[i]);
	}

__kernel void test_Sleef_coshd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cosh(in[i]);
	}

__kernel void test_Sleef_tanhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = tanh(in[i]);
	}

__kernel void test_Sleef_sinhd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sinh(in[i]);
	}

__kernel void test_Sleef_coshd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cosh(in[i]);
	}

__kernel void test_Sleef_tanhd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = tanh(in[i]);
	}

__kernel void test_Sleef_asinhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = asinh(in[i]);
	}

__kernel void test_Sleef_acoshd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = acosh(in[i]);
	}

__kernel void test_Sleef_atanhd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = atanh(in[i]);
	}

__kernel void test_Sleef_exp2d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = exp2(in[i]);
	}

__kernel void test_Sleef_exp2d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = exp2(in[i]);
	}

__kernel void test_Sleef_exp10d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = exp10(in[i]);
	}

__kernel void test_Sleef_exp10d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = exp10(in[i]);
	}

__kernel void test_Sleef_expm1d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = expm1(in[i]);
	}

__kernel void test_Sleef_log10d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log10(in[i]);
	}

__kernel void test_Sleef_log2d2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log2(in[i]);
	}

__kernel void test_Sleef_log2d2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log2(in[i]);
	}

__kernel void test_Sleef_log1pd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = log1p(in[i]);
	}

__kernel void test_Sleef_sinpid2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sinpi(in[i]);
	}

__kernel void test_Sleef_cospid2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = cospi(in[i]);
	}

__kernel void test_Sleef_sqrtd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_sqrtd2_u05kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_sqrtd2_u35kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_fabsd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fabs(in[i]);
	}

__kernel void test_Sleef_truncd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = trunc(in[i]);
	}

__kernel void test_Sleef_floord2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = floor(in[i]);
	}

__kernel void test_Sleef_ceild2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = ceil(in[i]);
	}

__kernel void test_Sleef_roundd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = round(in[i]);
	}

__kernel void test_Sleef_rintd2_kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = rint(in[i]);
	}

__kernel void test_Sleef_lgammad2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = lgamma(in[i]);
	}

__kernel void test_Sleef_tgammad2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = tgamma(in[i]);
	}

__kernel void test_Sleef_erfd2_u10kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = erf(in[i]);
	}

__kernel void test_Sleef_erfcd2_u15kvx(__global double2* in, __global double2* out) {
		int i = get_global_id(0);
		out[i] = erfc(in[i]);
	}

__kernel void test_Sleef_sinf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sin(in[i]);
	}

__kernel void test_Sleef_cosf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cos(in[i]);
	}

__kernel void test_Sleef_tanf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = tan(in[i]);
	}

__kernel void test_Sleef_asinf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = asin(in[i]);
	}

__kernel void test_Sleef_acosf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = acos(in[i]);
	}

__kernel void test_Sleef_atanf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = atan(in[i]);
	}

__kernel void test_Sleef_logf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log(in[i]);
	}

__kernel void test_Sleef_cbrtf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cbrt(in[i]);
	}

__kernel void test_Sleef_sinf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sin(in[i]);
	}

__kernel void test_Sleef_cosf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cos(in[i]);
	}

__kernel void test_Sleef_tanf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = tan(in[i]);
	}

__kernel void test_Sleef_asinf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = asin(in[i]);
	}

__kernel void test_Sleef_acosf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = acos(in[i]);
	}

__kernel void test_Sleef_atanf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = atan(in[i]);
	}

__kernel void test_Sleef_logf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log(in[i]);
	}

__kernel void test_Sleef_cbrtf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cbrt(in[i]);
	}

__kernel void test_Sleef_expf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = exp(in[i]);
	}

__kernel void test_Sleef_sinhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sinh(in[i]);
	}

__kernel void test_Sleef_coshf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cosh(in[i]);
	}

__kernel void test_Sleef_tanhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = tanh(in[i]);
	}

__kernel void test_Sleef_sinhf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sinh(in[i]);
	}

__kernel void test_Sleef_coshf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cosh(in[i]);
	}

__kernel void test_Sleef_tanhf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = tanh(in[i]);
	}

__kernel void test_Sleef_asinhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = asinh(in[i]);
	}

__kernel void test_Sleef_acoshf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = acosh(in[i]);
	}

__kernel void test_Sleef_atanhf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = atanh(in[i]);
	}

__kernel void test_Sleef_exp2f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = exp2(in[i]);
	}

__kernel void test_Sleef_exp2f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = exp2(in[i]);
	}

__kernel void test_Sleef_exp10f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = exp10(in[i]);
	}

__kernel void test_Sleef_exp10f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = exp10(in[i]);
	}

__kernel void test_Sleef_expm1f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = expm1(in[i]);
	}

__kernel void test_Sleef_log10f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log10(in[i]);
	}

__kernel void test_Sleef_log2f4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log2(in[i]);
	}

__kernel void test_Sleef_log2f4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log2(in[i]);
	}

__kernel void test_Sleef_log1pf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = log1p(in[i]);
	}

__kernel void test_Sleef_sinpif4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sinpi(in[i]);
	}

__kernel void test_Sleef_cospif4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = cospi(in[i]);
	}

__kernel void test_Sleef_sqrtf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_sqrtf4_u05kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_sqrtf4_u35kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = sqrt(in[i]);
	}

__kernel void test_Sleef_fabsf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fabs(in[i]);
	}

__kernel void test_Sleef_truncf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = trunc(in[i]);
	}

__kernel void test_Sleef_floorf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = floor(in[i]);
	}

__kernel void test_Sleef_ceilf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = ceil(in[i]);
	}

__kernel void test_Sleef_roundf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = round(in[i]);
	}

__kernel void test_Sleef_rintf4_kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = rint(in[i]);
	}

__kernel void test_Sleef_lgammaf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = lgamma(in[i]);
	}

__kernel void test_Sleef_tgammaf4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = tgamma(in[i]);
	}

__kernel void test_Sleef_erff4_u10kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = erf(in[i]);
	}

__kernel void test_Sleef_erfcf4_u15kvx(__global float4* in, __global float4* out) {
		int i = get_global_id(0);
		out[i] = erfc(in[i]);
	}

__kernel void test_Sleef_atan2d2_u35kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = atan2(in1[i], in2[i]);
	}

__kernel void test_Sleef_atan2d2_u10kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = atan2(in1[i], in2[i]);
	}

__kernel void test_Sleef_powd2_u10kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = pow(in1[i], in2[i]);
	}

__kernel void test_Sleef_hypotd2_u05kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = hypot(in1[i], in2[i]);
	}

__kernel void test_Sleef_hypotd2_u35kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = hypot(in1[i], in2[i]);
	}

__kernel void test_Sleef_copysignd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = copysign(in1[i], in2[i]);
	}

__kernel void test_Sleef_fmaxd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fmax(in1[i], in2[i]);
	}

__kernel void test_Sleef_fmind2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fmin(in1[i], in2[i]);
	}

__kernel void test_Sleef_fdimd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fdim(in1[i], in2[i]);
	}

__kernel void test_Sleef_nextafterd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = nextafter(in1[i], in2[i]);
	}

__kernel void test_Sleef_fmodd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fmod(in1[i], in2[i]);
	}

__kernel void test_Sleef_remainderd2_kvx(__global double2* in1, __global double2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = remainder(in1[i], in2[i]);
	}

__kernel void test_Sleef_atan2f4_u35kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = atan2(in1[i], in2[i]);
	}

__kernel void test_Sleef_atan2f4_u10kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = atan2(in1[i], in2[i]);
	}

__kernel void test_Sleef_powf4_u10kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = pow(in1[i], in2[i]);
	}

__kernel void test_Sleef_hypotf4_u05kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = hypot(in1[i], in2[i]);
	}

__kernel void test_Sleef_hypotf4_u35kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = hypot(in1[i], in2[i]);
	}

__kernel void test_Sleef_copysignf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = copysign(in1[i], in2[i]);
	}

__kernel void test_Sleef_fmaxf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fmax(in1[i], in2[i]);
	}

__kernel void test_Sleef_fminf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fmin(in1[i], in2[i]);
	}

__kernel void test_Sleef_fdimf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fdim(in1[i], in2[i]);
	}

__kernel void test_Sleef_nextafterf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = nextafter(in1[i], in2[i]);
	}

__kernel void test_Sleef_fmodf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fmod(in1[i], in2[i]);
	}

__kernel void test_Sleef_remainderf4_kvx(__global float4* in1, __global float4* in2, __global float4* out) {
		int i = get_global_id(0);
		out[i] = remainder(in1[i], in2[i]);
	}

__kernel void test_Sleef_ilogbd2_kvx(__global double2* in, __global int2* out) {
		int i = get_global_id(0);
		out[i] = ilogb(in[i]);
	}

__kernel void test_Sleef_fmad2_kvx(__global double2* in1, __global double2* in2, __global double2* in3, __global double2* out) {
		int i = get_global_id(0);
		out[i] = fma(in1[i], in2[i], in3[i]);
	}

__kernel void test_Sleef_fmaf4_kvx(__global float4* in1, __global float4* in2, __global float4* in3, __global float4* out) {
		int i = get_global_id(0);
		out[i] = fma(in1[i], in2[i], in3[i]);
	}

__kernel void test_Sleef_ldexpd2_kvx(__global double2* in1, __global int2* in2, __global double2* out) {
		int i = get_global_id(0);
		out[i] = ldexp(in1[i], in2[i]);
	}

