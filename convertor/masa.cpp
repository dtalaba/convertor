#include "stdafx.h"
#include "converterUtils.h"
#include "masa.h"

ConverterUtils converterUtils;

Masa::Masa()
{
}

double Masa::kg_To_milligm(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;

	return value * .000001;
}

double Masa::kg_To_gm(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;

	return value * .001;
}

double Masa::kg_To_kg(double value, bool invereConversion)
{
	return value;
}

double Masa::kg_To_pound(double value, bool invereConversion)
{
	if (invereConversion) return value * 2.20462;

	return value * .45359;
}

double Masa::kg_To_t(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;

	return value * 1000;
}

double Masa::convertMetric(double value, CString metric, bool inverseConversion) {
	const char* strToChar = converterUtils.convtCStrToChar(metric);

	if (strcmp(strToChar, "milligm") == 0) {
		return Masa::kg_To_milligm(value, inverseConversion);
	}
	else if (strcmp(strToChar, "gm") == 0) {
		return Masa::kg_To_gm(value, inverseConversion);
	}
	else if (strcmp(strToChar, "kg") == 0) {
		return Masa::kg_To_kg(value, inverseConversion);
	}
	else if (strcmp(strToChar, "pound") == 0) {
		return Masa::kg_To_pound(value, inverseConversion);
	}
	else if (strcmp(strToChar, "t") == 0) {
		return Masa::kg_To_t(value, inverseConversion);
	}

	return NULL;
}
