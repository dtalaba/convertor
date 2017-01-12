#include "stdafx.h"
#include "converterUtils.h"
#include "arie.h"

ConverterUtils converterUtils;

Arie::Arie()
{
}

double Arie::m²_To_mm²(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;
	return value * 1000000;
}

double Arie::m²_To_cm²(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}

double Arie::m²_To_m²(double value, bool invereConversion)
{
	return value;
}

double Arie::m²_To_km²(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value *.000001;
}

double Arie::m²_To_feet²(double value, bool invereConversion)
{
	if (invereConversion) return value * .0929;
	return value * 10.7639;
}

double Arie::m²_To_yard²(double value, bool invereConversion)
{
	if (invereConversion) return value * .83613;
	return value * 1.19599;
}

double Arie::m²_To_inch²(double value, bool invereConversion)
{
	if (invereConversion) return value * .00064516;
	return value * 1550.0031;
}

double Arie::m²_To_acre(double value, bool invereConversion)
{
	if (invereConversion) return value * .00024710539999309525;
	return value * 4046.856119;
}

double Arie::m²_To_hect(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}


double Arie::convertMetric(double value, CString metric, bool inverseConversion) {
	const char* strToChar = converterUtils.convtCStrToChar(metric);

	if (strcmp(strToChar, "mm²") == 0) {
		return Arie::m²_To_mm²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "cm²") == 0) {
		return Arie::m²_To_cm²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "m²") == 0) {
		return Arie::m²_To_m²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "km²") == 0) {
		return Arie::m²_To_km²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "feet²") == 0) {
		return Arie::m²_To_feet²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "yard²") == 0) {
		return Arie::m²_To_yard²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "inch²") == 0) {
		return Arie::m²_To_inch²(value, inverseConversion);
	}
	else if (strcmp(strToChar, "acre") == 0) {
		return Arie::m²_To_acre(value, inverseConversion);
	}
	else if (strcmp(strToChar, "hect") == 0) {
		return Arie::m²_To_hect(value, inverseConversion);
	}

	return NULL;
}