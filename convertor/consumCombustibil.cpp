#include "stdafx.h"
#include "consumCombustibil.h"


ConsumCombustibil::ConsumCombustibil()
{
}

double ConsumCombustibil::l100km_To_l100km(double value, bool invereConversion)
{
	return value;
}

double ConsumCombustibil::l100km_To_milesGalUS(double value, bool invereConversion)
{
	if (invereConversion) return value * 235.2145833;
	return value * 235.2145833;
}

double ConsumCombustibil::l100km_To_milesGalUK(double value, bool invereConversion)
{
	if (invereConversion) return value * 282.4809363;
	return value * 282.4809363;
}

double ConsumCombustibil::l100km_To_kmGalUS(double value, bool invereConversion)
{
	if (invereConversion) return value * 378.5411784;
	return value * 378.5411784;
}

double ConsumCombustibil::l100km_To_kmGalUK(double value, bool invereConversion)
{
	if (invereConversion) return value * 454.609;
	return value * 454.609;
}

double ConsumCombustibil::convertMetric(double value, CString unit, bool inverseConversion)
{
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "l100km") == 0) {
		return ConsumCombustibil::l100km_To_l100km(value, inverseConversion);
	}
	else if (strcmp(metric, "milesGalUS") == 0) {
		return ConsumCombustibil::l100km_To_milesGalUS(value, inverseConversion);
	}
	else if (strcmp(metric, "milesGalUK") == 0) {
		return ConsumCombustibil::l100km_To_milesGalUK(value, inverseConversion);
	}
	else if (strcmp(metric, "kmGalUS") == 0) {
		return ConsumCombustibil::l100km_To_kmGalUS(value, inverseConversion);
	}
	else if (strcmp(metric, "kmGalUK") == 0) {
		return ConsumCombustibil::l100km_To_kmGalUK(value, inverseConversion);
	}

	return NULL;
}