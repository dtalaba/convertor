#include "stdafx.h"
#include "densitate.h"

Densitate::Densitate()
{
}

double Densitate::kgm_To_kgm(double value, bool invereConversion)
{
	return value;
}

double Densitate::kgm_To_gcm(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;
	return value * 0.001;
}

double Densitate::kgm_To_gm(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;
	return value * 1000;
}

double Densitate::kgm_To_kgl(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;
	return value * 0.001;
}

double Densitate::kgm_To_tm(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;
	return value * 0.001;
}

double Densitate::convertMetric(double value, CString unit, bool inverseConversion)
{
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "kgm") == 0) {
		return Densitate::kgm_To_kgm(value, inverseConversion);
	}
	else if (strcmp(metric, "gcm") == 0) {
		return Densitate::kgm_To_gcm(value, inverseConversion);
	}
	else if (strcmp(metric, "gm") == 0) {
		return Densitate::kgm_To_gm(value, inverseConversion);
	}
	else if (strcmp(metric, "kgl") == 0) {
		return Densitate::kgm_To_kgl(value, inverseConversion);
	}
	else if (strcmp(metric, "tm") == 0) {
		return Densitate::kgm_To_tm(value, inverseConversion);
	}

	return NULL;
}