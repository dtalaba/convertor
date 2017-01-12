#include "stdafx.h"
#include "converterUtils.h"
#include "temperatura.h"

ConverterUtils converterUtils;

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

double Temperatura::convertMetric(double value, CString metric, bool inverseConversion) {
	const char* strToChar = converterUtils.convtCStrToChar(metric);

	if (strcmp(strToChar, "f") == 0) {
		return Temperatura::cel_To_f(value, inverseConversion);
	} 
	else if (strcmp(strToChar, "k") == 0) {
		return Temperatura::cel_To_k(value, inverseConversion);
	}
	else if (strcmp(strToChar, "cel") == 0) {
		return Temperatura::cel_To_cel(value, inverseConversion);
	}

	return NULL;
}
