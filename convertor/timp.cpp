#include "stdafx.h"
#include "timp.h"


Timp::Timp()
{
}


double Timp::h_To_sec(double value, bool invereConversion)
{
	if (invereConversion) return value * .000277777778;
	return value * 3600;
}

double Timp::h_To_min(double value, bool invereConversion)
{
	if (invereConversion) return value * .0166666667;
	return value * 60;
}

double Timp::h_To_h(double value, bool invereConversion)
{
	return value;
}

double Timp::h_To_zi(double value, bool invereConversion)
{
	if (invereConversion) return value * .0416666667;
	return value * 24;
}

double Timp::h_To_saptamana(double value, bool invereConversion)
{
	if (invereConversion) return value * 168;
	return value * .00595238095;
}

double Timp::h_To_an(double value, bool invereConversion)
{
	if (invereConversion) return value * 8765.81277;
	return value * .000114079553;
}

double Timp::h_To_decisec(double value, bool invereConversion)
{
	if (invereConversion) return value * (2.77777778 * pow(10, -5));
	return value * 36000;
}

double Timp::h_To_centisec(double value, bool invereConversion)
{
	if (invereConversion) return value * (2.77777778 * pow(10, -6));
	return value * 360000;
}

double Timp::h_To_milisec(double value, bool invereConversion)
{
	if (invereConversion) return value * (2.77777778 * pow(10, -7));
	return value * 3600000;
}

double Timp::h_To_microsec(double value, bool invereConversion)
{
	if (invereConversion) return value * (2.77777778 * pow(10, -10));
	return value * 3600000000;
}

double Timp::h_To_nanosec(double value, bool invereConversion)
{
	if (invereConversion) return value * (2.77777778 * pow(10, -13));
	return value * 3600000000000;
}

double Timp::convertMetric(double value, CString unit, bool inverseConversion)
{
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "sec") == 0) {
		return Timp::h_To_sec(value, inverseConversion);
	}
	else if (strcmp(metric, "min") == 0) {
		return Timp::h_To_min(value, inverseConversion);
	}
	else if (strcmp(metric, "h") == 0) {
		return Timp::h_To_h(value, inverseConversion);
	}
	else if (strcmp(metric, "zi") == 0) {
		return Timp::h_To_zi(value, inverseConversion);
	}
	else if (strcmp(metric, "saptamana") == 0) {
		return Timp::h_To_saptamana(value, inverseConversion);
	}
	else if (strcmp(metric, "an") == 0) {
		return Timp::h_To_an(value, inverseConversion);
	}
	else if (strcmp(metric, "decisec") == 0) {
		return Timp::h_To_decisec(value, inverseConversion);
	}
	else if (strcmp(metric, "centisec") == 0) {
		return Timp::h_To_centisec(value, inverseConversion);
	}
	else if (strcmp(metric, "milisec") == 0) {
		return Timp::h_To_milisec(value, inverseConversion);
	}
	else if (strcmp(metric, "microsec") == 0) {
		return Timp::h_To_microsec(value, inverseConversion);
	}
	else if (strcmp(metric, "nanosec") == 0) {
		return Timp::h_To_nanosec(value, inverseConversion);
	}

	return NULL;
}