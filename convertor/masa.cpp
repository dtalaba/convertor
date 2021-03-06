#include "stdafx.h"
#include "masa.h"

Masa::Masa()
{
}

double Masa::kg_To_milligm(double value, bool invereConversion)
{
	if (invereConversion) return value * .000001;

	return value * 1000000;
}

double Masa::kg_To_gm(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;

	return value * 1000;
}

double Masa::kg_To_kg(double value, bool invereConversion)
{
	return value;
}

double Masa::kg_To_pound(double value, bool invereConversion)
{
	if (invereConversion) return value * .45359237;

	return value * 2.20462;
}

double Masa::kg_To_t(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;

	return value * .001;
}

double Masa::convertMetric(double value, CString unit, bool inverseConversion) {
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);
	if (strcmp(metric, "milligm") == 0) {
		return Masa::kg_To_milligm(value, inverseConversion);
	}
	else if (strcmp(metric, "gm") == 0) {
		return Masa::kg_To_gm(value, inverseConversion);
	}
	else if (strcmp(metric, "kg") == 0) {
		return Masa::kg_To_kg(value, inverseConversion);
	}
	else if (strcmp(metric, "pound") == 0) {
		return Masa::kg_To_pound(value, inverseConversion);
	}
	else if (strcmp(metric, "t") == 0) {
		return Masa::kg_To_t(value, inverseConversion);
	}

	return NULL;
}
