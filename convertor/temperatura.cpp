#include "stdafx.h"
#include "temperatura.h"

Temperatura::Temperatura()
{
}

double Temperatura::cel_To_f(double value, bool invereConversion)
{
	if (invereConversion) return (((value - 32) / 9) * 5);

	return (((9 * value) / 5) + 32);
}

double Temperatura::cel_To_k(double value, bool invereConversion)
{
	if (invereConversion) return value - 273;

	return value + 273;
}

double Temperatura::cel_To_cel(double value, bool invereConversion)
{
	return value;
}

double Temperatura::convertMetric(double value, const char* metric, bool inverseConversion) {
	if (strcmp(metric, "f") == 0) {
		return Temperatura::cel_To_f(value, inverseConversion);
	} 
	else if (strcmp(metric, "k") == 0) {
		return Temperatura::cel_To_k(value, inverseConversion);
	}
	else if (strcmp(metric, "cel") == 0) {
		return Temperatura::cel_To_cel(value, inverseConversion);
	}

	return NULL;
}
