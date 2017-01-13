#include "stdafx.h"
#include "viteza.h"


Viteza::Viteza()
{
}

double Viteza::kmh_To_mph(double value, bool invereConversion)
{
	if (invereConversion) return value * .6213711922373;
	return value * 1.609344;
}

double Viteza::kmh_To_fts(double value, bool invereConversion)
{
	if (invereConversion) return value * 1.09728;
	return value * .9113444152814;
}

double Viteza::kmh_To_kmh(double value, bool invereConversion)
{
	return value;
}

double Viteza::kmh_To_kms(double value, bool invereConversion)
{
	if (invereConversion) return value * 3600;
	return value * .0002777777777778;
}

double Viteza::kmh_To_ms(double value, bool invereConversion)
{
	if (invereConversion) return value * 3.6;
	return value * .2777777777778;
}

double Viteza::kmh_To_kn(double value, bool invereConversion)
{
	if (invereConversion) return value * .5399568034557;
	return value * 1.852;
}

double Viteza::convertMetric(double value, CString unit, bool inverseConversion) {
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "mph") == 0) {
		return Viteza::kmh_To_mph(value, inverseConversion);
	}
	else if (strcmp(metric, "fts") == 0) {
		return Viteza::kmh_To_fts(value, inverseConversion);
	}
	else if (strcmp(metric, "kmh") == 0) {
		return Viteza::kmh_To_kmh(value, inverseConversion);
	}
	else if (strcmp(metric, "kms") == 0) {
		return Viteza::kmh_To_kms(value, inverseConversion);
	}
	else if (strcmp(metric, "ms") == 0) {
		return Viteza::kmh_To_ms(value, inverseConversion);
	}
	else if (strcmp(metric, "kn") == 0) {
		return Viteza::kmh_To_kn(value, inverseConversion);
	}
	return NULL;
}

