#include "stdafx.h"
#include "aria.h"

Aria::Aria()
{
}

double Aria::m�_To_mm�(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value * .000001;
}

double Aria::m�_To_cm�(double value, bool invereConversion)
{
	if (invereConversion) return value * 10000;
	return value * .0001;
}

double Aria::m�_To_m�(double value, bool invereConversion)
{
	return value;
} 

double Aria::m�_To_km�(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;
	return value * 1000000;
}

double Aria::m�_To_feet�(double value, bool invereConversion)
{
	if (invereConversion) return value * .0929;
	return value * 10.7639;
}

double Aria::m�_To_yard�(double value, bool invereConversion)
{
	if (invereConversion) return value * .83613;
	return value * 1.19599;
}

double Aria::m�_To_inch�(double value, bool invereConversion)
{
	if (invereConversion) return value * .00064516;
	return value * 1550.0031;
}

double Aria::m�_To_acre(double value, bool invereConversion)
{
	if (invereConversion) return value * .00024710539999309525;
	return value * 4046.856119;
}

double Aria::m�_To_hect(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}


double Aria::convertMetric(double value, CString unit, bool inverseConversion) {
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);
	if (strcmp(metric, "mm�") == 0) {
		return Aria::m�_To_mm�(value, inverseConversion);
	}
	else if (strcmp(metric, "cm�") == 0) {
		return Aria::m�_To_cm�(value, inverseConversion);
	}
	else if (strcmp(metric, "m�") == 0) {
		return Aria::m�_To_m�(value, inverseConversion);
	}
	else if (strcmp(metric, "km�") == 0) {
		return Aria::m�_To_km�(value, inverseConversion);
	}
	else if (strcmp(metric, "feet�") == 0) {
		return Aria::m�_To_feet�(value, inverseConversion);
	}
	else if (strcmp(metric, "yard�") == 0) {
		return Aria::m�_To_yard�(value, inverseConversion);
	}
	else if (strcmp(metric, "inch�") == 0) {
		return Aria::m�_To_inch�(value, inverseConversion);
	}
	else if (strcmp(metric, "acre") == 0) {
		return Aria::m�_To_acre(value, inverseConversion);
	}
	else if (strcmp(metric, "hect") == 0) {
		return Aria::m�_To_hect(value, inverseConversion);
	}

	return NULL;
}