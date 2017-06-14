#include "function.h"

int Check(int D)
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

float Discr(float a, float b, float c)
{
	float D = b * b - 4 * a * c;
	return D;
}
