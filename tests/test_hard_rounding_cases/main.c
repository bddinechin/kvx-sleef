#include <stdio.h>
#include <string.h>
#include <sleef.h>
#include <math.h>

#define Vecd(x) (SLEEF_VECTOR_DOUBLE) {x, x}

void check_success(double in, char *l, char *r) {
	if (strcmp(l, r) == 0) {
		printf("input: %.13a, pass.\n", in);
	} else {
		printf("input: %.13a, fail. output: %s, expected: %s\n", in, l, r);
	}
}
void success(double in, double l, double r) {
	if (l == r)
		printf("input: %.13a, pass.\n", in);
	else if ((nextafter(l, INFINITY) == r) || (nextafter(l, -INFINITY) == r))
		printf("input: %.13a, pass.\n", in);
	else {
		printf("input: %.14a, fail. output: %.14a, expected: %.14a\n", in, l, r);
	}
}

int main(int argc, char** argv) {
	unsigned int i = 0;
	char output[24] = {0};
	char expected[24] = {0};

	printf("All results within 1 ulp of the expected output is considered a pass. All functions used assure at most 1 ulp\n");

	double exp_small_inputs[] = { 29.0/16.0, 57.0/32.0, 47.0/32.0, 135.0/128.0, 937.0/512.0, 1805.0/1024.0, 5757.0/4096.0, 12795.0/8192.0 };
	double exp_small_outputs[] = {0x1.880cp2, 0x5.effp0, 0x4.5803p0,  0x2.defep0, 0x6.3bffep0, 0x5.d3fffp0, 0x4.13dfff8p0, 0x4.c48fffap0};
	printf("\nexp, range (1, 2)\n");
	for(i = 0; i < sizeof(exp_small_outputs)/sizeof(double); i++) {
		sprintf(output, "%.4a", Sleef_expd2_u10(Vecd(exp_small_inputs[i]))[0]);
		sprintf(expected, "%.4a", exp_small_outputs[i]);
		check_success(exp_small_inputs[i], output, expected);
	}

	double exp_full_inputs[] = { -0x1.ed318efb627eap-27, -0x1.40000000000032p-46, -0x1.00000000000001p-51, 0x1.ffffffffffffffp-53, 0x1.fffffffffff80p-46, 0x1.1ffffffffffafp-45, 0x6.0f52f37aecfd0p0 };
	double exp_full_outputs[] = { 0x1.ffffff84b39c4fp-1, 0x1.fffffffffff60p-1, 0x1.ffffffffffffcp-1, 0x1.0000000000001p0, 0x1.000000000007fp0, 0x1.000000000008fp0, 0x1ac.50b409c8aee0p0 };
	printf("\nexp, full range\n");
	for(i = 0; i < sizeof(exp_full_outputs)/sizeof(double); i++) {
		success(exp_full_inputs[i], Sleef_expd2_u10(Vecd(exp_full_inputs[i]))[0], exp_full_outputs[i]);
	}

	double log_full_inputs[] = { 0x1.ea71d85cee020p-509, 0x1.9476e304cd7c7p-384, 0x1.26e9c4d327960p-232, 0x1.613955dc802f8p-35, 0x1.62a88613629b6p678 };
	double log_full_outputs[] = { -0x160.296a66b42fffp0, -0x109.b60caf47b358p0, -0xa0.ab2c25e68420p0, -0x17.f02f9baf60357p0, 0x1d6.479eba7c9710p0 };
	printf("\nlog, full range\n");
	for(i = 0; i < sizeof(log_full_outputs)/sizeof(double); i++) {
		success(log_full_inputs[i], Sleef_logd2_u10(Vecd(log_full_inputs[i]))[0], log_full_outputs[i]);
	}

	double radix2_full_inputs[] = { -0x1.2863abaeaf7b2p-15, -0x1.416f6c6445acfp-20, -0x1.055601c8ab3f1p-32, -0x1.185b8db6d581dp-33, 0x1.bfbbde44edfc5p-25, 0x1.e4596526bf94dp-10 };
	double radix2_full_outputs[] = { 0x0.fffe651f460f78p0, 0x0.fffff2132ba677p0, 0x0.ffffffff4adb0fp0, 0x0.ffffffff9ed5e0p0, 0x1.0000009b2c385p0, 0x1.0053fc2ec2b53p0 };
	printf("\nradix 2, full range\n");
	for(i = 0; i < sizeof(radix2_full_outputs)/sizeof(double); i++) {
		success(radix2_full_inputs[i], Sleef_exp2d2_u10(Vecd(radix2_full_inputs[i]))[0], radix2_full_outputs[i]);
	}

	printf("\nlog2, full range\n");
	success(0x1.61555f75885b4p-513, Sleef_log2d2_u10(Vecd(0x1.61555f75885b4p-513))[0], -0x200.88fd2fc2c8cp0);
	
	sprintf(output, "%.13a", Sleef_exp2d2_u10(Vecd(0x1.61555f75885b4p512))[0]);
	sprintf(expected, "%.13a", 0x200.7702d03d373p0);
	success(0x1.61555f75885b4p512, Sleef_exp2d2_u10(Vecd(0x1.61555f75885b4p512))[0], 0x200.7702d03d373p0);

	double sin_inputs[] = { 0x1.e0000000001c2p-20, 0x1.598bae9e632f6p-7, 0x1.fe767739d0f6dp-2, 0x1.921fb54442d18p0, 0x1.6756745770a51p1 };
	double sin_outputs[] = { 0x1.dfffffffff02e0p-20, 0x1.598a0aea48996p-7, 0x1.e9950730c4695p-2, 0x0.ffffffffffffffp0, 0x1.4ff350e412821p-2 };
	printf("\nsin, range [2e-24, 2+(4675/8192)]\n");
	for(i = 0; i < sizeof(sin_outputs)/sizeof(double); i++) {
		success(sin_inputs[i], Sleef_sind2_u10(Vecd(sin_inputs[i]))[0], sin_outputs[i]);
	}

	double arcsin_inputs[] = { 0x1.dfffffffff02ep-20, 0x1.dffffffffc0b8p-19, 0x1.e9950730c4696p-2 };
	double arcsin_outputs[] = { 0x1.e0000000001c1p-20, 0x1.e000000000707p-19, 0x1.fe767739d0f6dp-2 };
	printf("\narcsin, range [sin(2e-24), 1]\n");
	for(i = 0; i < sizeof(arcsin_outputs)/sizeof(double); i++) {
		success(arcsin_inputs[i], Sleef_asind2_u10(Vecd(arcsin_inputs[i]))[0], arcsin_outputs[i]);
	}

	double cos_inputs[] = { 0x1.8000000000009p-23, 0x1.8000000000024p-22, 0x1.2000000000f30p-18, 0x1.06b505550e6b2p-9, 0x1.97ccd3d2c438fp-6, 0x1.6b8a6273d7c21p0 };
	double cos_outputs[] = { 0x0.fffffffffffb80p0, 0x0.ffffffffffee00p0, 0x0.fffffffff5e000p0, 0x0.ffffde4d1fdffp0, 0x0.ffebb35d438547p0, 0x1.337fc5b072c524p-3 };
	printf("\ncos, range [2e-25, 12867/8192]\n");
	for(i = 0; i < sizeof(cos_outputs)/sizeof(double); i++) {
		success(cos_inputs[i], Sleef_cosd2_u10(Vecd(cos_inputs[i]))[0], cos_outputs[i]);
	}

	printf("\narccos, full range\n");
	success(0x1.fd737be914578p-11, Sleef_acosd2_u10(Vecd(0x1.fd737be914578p-11))[0], 0x1.91e006d41d8d8p0);

	double tan_inputs[] = { 0x1.dffffffffff1fp-22, 0x1.67fffffffa114p-18, 0x1.50486b2f87014p-5, 0x0.a3561b9121a9b0p0 };
	double tan_outputs[] = { 0x1.e000000000151p-22, 0x1.6800000008e61p-18, 0x1.5078cebff9c72p-5, 0x0.bdd24fb9cc14f7p0 };
	printf("\ntan, range [2e-25, atan(2)]\n");
	for(i = 0; i < sizeof(tan_outputs)/sizeof(double); i++) {
		success(tan_inputs[i], Sleef_tand2_u10(Vecd(tan_inputs[i]))[0], tan_outputs[i]);
	}

	double arctan_inputs[] = { 0x1.e000000000546p-21, 0x1.22e8d75e2bc7fp-11, 0x1.a933fe176b375p-3, 0x0.bdd24fb9cc14f8p0 };
	double arctan_outputs[] = { 0x1.dfffffffffc7cp-21, 0x1.22e8d5694ad2bp-11, 0x1.a33f32ac5ceb4p-3, 0x0.a3561b9121a9b0p0 };
	printf("\narctan, range [tan(2e-25), 2]\n");
	for(i = 0; i < sizeof(arctan_outputs)/sizeof(double); i++) {
		success(arctan_inputs[i], Sleef_atand2_u10(Vecd(arctan_inputs[i]))[0], arctan_outputs[i]);
	}

	double cosh_inputs[] = { 0x1.17d8a9f206217p-6, 0x1.bf0305e2c6c37p-3, 0x1.03923f2b47c07p-1, 0x1.a6031cd5f93bap-1, 0x1.104b648f113a1p0, 0x1.ea5f2f2e4b0c5p1 };
	double cosh_outputs[] = { 0x1.00098f5f09be3p0, 0x1.061f4c39e16f2p0, 0x1.219c1989e3372p0, 0x1.5bff041b260fdp0, 0x1.9efdca62b7009p0, 0x17.10db0cd0fed5p0 };
	printf("\ncosh, range [1/64, 32]\n");
	for(i = 0; i < sizeof(cosh_outputs)/sizeof(double); i++) {
		success(cosh_outputs[i], Sleef_coshd2_u10(Vecd(cosh_inputs[i]))[0], cosh_outputs[i]);
	}

	double acosh_inputs[] = { 0x1.9efdca62b700ap0, 0x1.297de35d02e90p13 };
	double acosh_outputs[] = { 0x1.104b648f113a1p0, 0x9.dab169328d2ebp0 };
	printf("\nacosh, range [cosh(1/64), cosh(32)]\n");
	for(i = 0; i < sizeof(acosh_outputs)/sizeof(double); i++) {
		success(acosh_inputs[i], Sleef_acoshd2_u10(Vecd(acosh_inputs[i]))[0], acosh_outputs[i]);
	}

	double sinh_inputs[] = { 0x1.DFFFFFFFFFE3Ep-20, 0x1.DFFFFFFFFE3E0p-18, 0x1.135E31FDD05D3p-5, 0x1.0DC68D5E8F959p-3, 0x1.616CC75D49226p-2, 0x1.3FFC12B81CBC2p0, 0x2.FE008C44BACA2p0, 0x1.C089FCF166171p4, 0x1.E07E71BFCF06Fp5, 0x1.54CD1FEA7663Ap7, 0x1.D6479EBA7C971p8 };
	double sinh_outputs[] = { 0x1.E000000000FD1p-20, 0x1.E00000000FD1Fp-18, 0x1.136B78B25CC57p-5, 0x1.0E8E73DC4FEE3p-3, 0x1.687BD068C1C1Ep-2, 0x1.9A0FF413A1AF3p0, 0x1.3E11487DA075Cp3, 0x1.5C452E0E37569p39, 0x1.91EC4412C344Fp85, 0x1.C90810D354618p244, 0x1.62A88613629B5p677 };
	printf("\nsinh, range [2e-25, asinh(2e1024)]\n");
	for(i = 0; i < sizeof(sinh_outputs)/sizeof(double); i++) {
		success(sinh_inputs[i], Sleef_sinhd2_u10(Vecd(sinh_inputs[i]))[0], sinh_outputs[i]);
	}

	double asinh_inputs[] = { 0x1.E000000000FD2p-20, 0x1.87239BBD78F6Ep-7, 0x1.FD2634CA3C97Cp1, 0x1.5C452E0E37569p39, 0x1.62A88613629B6p677 };
	double asinh_outputs[] = { 0x1.DFFFFFFFFFE3Ep-20, 0x1.87213B0D60CCFp-7, 0x1.0B6E130C428A0p1, 0x1.C089FCF166170p4, 0x1.D6479EBA7C971p8 };
	printf("\nasinh, range [sinh(2e-25), 2e1024]\n");
	for(i = 0; i < sizeof(asinh_outputs)/sizeof(double); i++) {
		success(asinh_inputs[i], Sleef_asinhd2_u10(Vecd(asinh_inputs[i]))[0], asinh_outputs[i]);
	}


}
