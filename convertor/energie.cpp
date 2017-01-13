#include "stdafx.h"
#include "energie.h"

Energie::Energie()
{
}

double Energie::j_To_j(double value, bool invereConversion)
{
	return value;
}

double Energie::j_To_cal(double value, bool invereConversion)
{
	if (invereConversion) return value * 4.1868;
	return value * .23884589662749595;
}

double Energie::j_To_kcal(double value, bool invereConversion)
{
	if (invereConversion) return value * 4186.8;
	return value * .00023884589662749592;
}

double Energie::j_To_kj(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;
	return value * .001;
}

double Energie::j_To_wh(double value, bool invereConversion)
{
	if (invereConversion) return value * 3600;
	return value * .0002777777777777778;
}

double Energie::j_To_kwh(double value, bool invereConversion)
{
	if (invereConversion) return value * 3600000;
	return value * (2.7777777777777776 * pow(10, -7));
}

double Energie::j_To_ws(double value, bool invereConversion)
{
	return value;
}

double Energie::j_To_erg(double value, bool invereConversion)
{
	if (invereConversion) return value * pow(10, -7);
	return value * 10000000;
}

double Energie::j_To_nm(double value, bool invereConversion)
{
	return value;
}

double Energie::j_To_therm(double value, bool invereConversion)
{
	if (invereConversion) return value * 105505600;
	return value * .000000009;
}

double Energie::j_To_kgfcm(double value, bool invereConversion)
{
	if (invereConversion) return value * .0980665;
	return value * 10.19716213;
}

double Energie::convertMetric(double value, CString unit, bool inverseConversion)
{
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "j") == 0) {
		return Energie::j_To_j(value, inverseConversion);
	}
	else if (strcmp(metric, "cal") == 0) {
		return Energie::j_To_cal(value, inverseConversion);
	}
	else if (strcmp(metric, "kcal") == 0) {
		return Energie::j_To_kcal(value, inverseConversion);
	}
	else if (strcmp(metric, "kj") == 0) {
		return Energie::j_To_kj(value, inverseConversion);
	}
	else if (strcmp(metric, "wh") == 0) {
		return Energie::j_To_wh(value, inverseConversion);
	}
	else if (strcmp(metric, "kwh") == 0) {
		return Energie::j_To_kwh(value, inverseConversion);
	}
	else if (strcmp(metric, "ws") == 0) {
		return Energie::j_To_ws(value, inverseConversion);
	}
	else if (strcmp(metric, "erg") == 0) {
		return Energie::j_To_erg(value, inverseConversion);
	}
	else if (strcmp(metric, "nm") == 0) {
		return Energie::j_To_nm(value, inverseConversion);
	}
	else if (strcmp(metric, "therm") == 0) {
		return Energie::j_To_therm(value, inverseConversion);
	}
	else if (strcmp(metric, "kgfcm") == 0) {
		return Energie::j_To_kgfcm(value, inverseConversion);
	}

	return NULL;
}
 