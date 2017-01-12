#include "stdafx.h"
#include "converterUtils.h"
#include "arie.h"

ConverterUtils converterUtils;

Arie::Arie()
{
}

double Arie::m�_To_mm�(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;
	return value * 1000000;
}

double Arie::m�_To_cm�(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}

double Arie::m�_To_m�(double value, bool invereConversion)
{
	return value;
}

double Arie::m�_To_km�(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value *.000001;
}

double Arie::m�_To_feet�(double value, bool invereConversion)
{
	if (invereConversion) return value * .0929;
	return value * 10.7639;
}

double Arie::m�_To_yard�(double value, bool invereConversion)
{
	if (invereConversion) return value * .83613;
	return value * 1.19599;
}

double Arie::m�_To_inch�(double value, bool invereConversion)
{
	if (invereConversion) return value * .00064516;
	return value * 1550.0031;
}

double Arie::m�_To_acre(double value, bool invereConversion)
{
	if (invereConversion) return value * .00024710539999309525;
	return value * 4046.856119;
}

double Arie::m�_To_hect(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}


double Arie::convertMetric(double value, CString metric, bool inverseConversion) {
	const char* strToChar = converterUtils.convtCStrToChar(metric);

	if (strcmp(strToChar, "mm�") == 0) {
		return Arie::m�_To_mm�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "cm�") == 0) {
		return Arie::m�_To_cm�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "m�") == 0) {
		return Arie::m�_To_m�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "km�") == 0) {
		return Arie::m�_To_km�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "feet�") == 0) {
		return Arie::m�_To_feet�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "yard�") == 0) {
		return Arie::m�_To_yard�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "inch�") == 0) {
		return Arie::m�_To_inch�(value, inverseConversion);
	}
	else if (strcmp(strToChar, "acre") == 0) {
		return Arie::m�_To_acre(value, inverseConversion);
	}
	else if (strcmp(strToChar, "hect") == 0) {
		return Arie::m�_To_hect(value, inverseConversion);
	}

	return NULL;
}