#include "stdafx.h"
#include "aria.h"

Aria::Aria()
{
}

double Aria::m²_To_mm²(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value * .000001;
}

double Aria::m²_To_cm²(double value, bool invereConversion)
{
	if (invereConversion) return value * 10000;
	return value * .0001;
}

double Aria::m²_To_m²(double value, bool invereConversion)
{
	return value;
} 

double Aria::m²_To_km²(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;
	return value * 1000000;
}

double Aria::m²_To_feet²(double value, bool invereConversion)
{
	if (invereConversion) return value * .0929;
	return value * 10.7639;
}

double Aria::m²_To_yard²(double value, bool invereConversion)
{
	if (invereConversion) return value * .83613;
	return value * 1.19599;
}

double Aria::m²_To_inch²(double value, bool invereConversion)
{
	if (invereConversion) return value * .00064516;
	return value * 1550.0031;
}

double Aria::m²_To_acre(double value, bool invereConversion)
{
	if (invereConversion) return value * .00024710539999309525;
	return value * 4046.856119;
}

double Aria::m²_To_hect(double value, bool invereConversion)
{
	if (invereConversion) return value * .0001;
	return value * 10000;
}


double Aria::convertMetric(double value, CString unit, bool inverseConversion) {
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);
	if (strcmp(metric, "mm²") == 0) {
		return Aria::m²_To_mm²(value, inverseConversion);
	}
	else if (strcmp(metric, "cm²") == 0) {
		return Aria::m²_To_cm²(value, inverseConversion);
	}
	else if (strcmp(metric, "m²") == 0) {
		return Aria::m²_To_m²(value, inverseConversion);
	}
	else if (strcmp(metric, "km²") == 0) {
		return Aria::m²_To_km²(value, inverseConversion);
	}
	else if (strcmp(metric, "feet²") == 0) {
		return Aria::m²_To_feet²(value, inverseConversion);
	}
	else if (strcmp(metric, "yard²") == 0) {
		return Aria::m²_To_yard²(value, inverseConversion);
	}
	else if (strcmp(metric, "inch²") == 0) {
		return Aria::m²_To_inch²(value, inverseConversion);
	}
	else if (strcmp(metric, "acre") == 0) {
		return Aria::m²_To_acre(value, inverseConversion);
	}
	else if (strcmp(metric, "hect") == 0) {
		return Aria::m²_To_hect(value, inverseConversion);
	}

	return NULL;
}