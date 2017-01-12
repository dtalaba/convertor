#include "stdafx.h"
#include "converterUtils.h"
#include "lungime.h"


ConverterUtils converterUtils;

Lungime::Lungime()
{
}

double Lungime::m_To_mm(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;

	return  value * 1000;
}
double Lungime::m_To_cm(double value, bool invereConversion)
{
	if (invereConversion) return value * .01;

	return  value * 100;
}
double Lungime::m_To_m(double value, bool invereConversion)
{
	if (invereConversion) return value;

	return  value;
}
double Lungime::m_To_km(double value, bool invereConversion) {
	if (invereConversion) return value * 1000;

	return value * 0.001;
}
double Lungime::m_To_mile(double value, bool invereConversion) {
	if (invereConversion) return value * 1609.344;

	return value*.00062;
}
double Lungime::m_To_feet(double value, bool invereConversion) {
	if (invereConversion) return value * .3048;

	return value * 3.28084;
}
double Lungime::m_To_inch(double value, bool invereConversion) {
	if (invereConversion) return value * .0254;

	return value * 39.37008;
}
double Lungime::m_To_yd(double value, bool invereConversion) {
	if (invereConversion) return value * .9144;

	return  value * 1.09361;
}

double Lungime::convertMetric(double value, CString metric, bool inverseConversion) {
	const char* strToChar = converterUtils.convtCStrToChar(metric);

	if (strcmp(strToChar, "mm") == 0) {
		return Lungime::m_To_mm(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "cm") == 0) {
		return Lungime::m_To_cm(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "m") == 0) {
		return Lungime::m_To_m(value, inverseConversion);
	} else
		if (strcmp(strToChar, "km") == 0) {
		return Lungime::m_To_km(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "mi") == 0) {
		return Lungime::m_To_mile(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "ft") == 0) {
		return Lungime::m_To_feet(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "in") == 0) {
		return Lungime::m_To_inch(value, inverseConversion);
	} else 
		if (strcmp(strToChar, "yd") == 0) {
		return Lungime::m_To_yd(value, inverseConversion);
	}

	return NULL;
}