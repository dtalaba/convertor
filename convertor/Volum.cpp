#include "stdafx.h"
#include "volum.h"

Volum::Volum()
{
}

double Volum::mQ_To_ml(double value, bool invereConversion)
{
	if (invereConversion) return .000001;
	return value * 1000000;
}

double Volum::mQ_To_cl(double value, bool invereConversion)
{
	if (invereConversion) return value * .00001;
	return value * 100000;
}

double Volum::mQ_To_dl(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}

double Volum::mQ_To_L(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;
	return value * 1000;
}

double Volum::mQ_To_cmQ(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;
	return value * 1000000;
}

double Volum::mQ_To_mQ(double value, bool invereConversion)
{
	return value;
}

double Volum::mQ_To_inchQ(double value, bool invereConversion)
{
	if (invereConversion) return value * .00002;
	return value * 61023.74409;
}

double Volum::mQ_To_feetQ(double value, bool invereConversion)
{
	if (invereConversion) return value * 1222;
	return value * 123;
}

double Volum::mQ_To_gallon(double value, bool invereConversion)
{
	if (invereConversion) return value * .00379;
	return value * 264.17205;
}


double Volum::convertMetric(double value, CString unit, bool inverseConversion) {
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "ml") == 0) {
		return Volum::mQ_To_ml(value, inverseConversion);
	}
	else if (strcmp(metric, "cl") == 0) {
		return Volum::mQ_To_cl(value, inverseConversion);
	}
	else if (strcmp(metric, "dl") == 0) {
		return Volum::mQ_To_dl(value, inverseConversion);
	}
	else if (strcmp(metric, "l") == 0) {
		return Volum::mQ_To_L(value, inverseConversion);
	}
	else if (strcmp(metric, "cm³") == 0) {
		return Volum::mQ_To_cmQ(value, inverseConversion);
	}
	else if (strcmp(metric, "m³") == 0) {
		return Volum::mQ_To_mQ(value, inverseConversion);
	}
	else if (strcmp(metric, "in³") == 0) {
		return Volum::mQ_To_inchQ(value, inverseConversion);
	}
	else if (strcmp(metric, "ft³") == 0) {
		return Volum::mQ_To_feetQ(value, inverseConversion);
	}
	else if (strcmp(metric, "gal") == 0) {
		return Volum::mQ_To_gallon(value, inverseConversion);
	}

	return NULL;
}