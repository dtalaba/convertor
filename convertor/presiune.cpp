#include "stdafx.h"
#include "presiune.h"


Presiune::Presiune()
{
}

double Presiune::pa_To_pa(double value, bool invereConversion)
{
	return value;
}

double Presiune::pa_To_at(double value, bool invereConversion)
{
	if (invereConversion) return value * 98066.5;
	return value * .000010197162129779282;
}

double Presiune::pa_To_atm(double value, bool invereConversion)
{
	if (invereConversion) return value * 101325.2738;
	return value * .000009869205998632101;
}

double Presiune::pa_To_bar(double value, bool invereConversion)
{
	if (invereConversion) return value * 98000;
	return value * .000010204081632653061;
}

double Presiune::pa_To_inH2O(double value, bool invereConversion)
{
	if (invereConversion) return value * 248.84;
	return value * .0040186465198521135;
}

double Presiune::pa_To_inHg(double value, bool invereConversion)
{
	if (invereConversion) return value * 3386.38815789;
	return value * .00029529987508079483;
}

double Presiune::pa_To_mbar(double value, bool invereConversion)
{
	if (invereConversion) return value * 98;
	return value * .01020408163265306;
}

double Presiune::pa_To_mpa(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value * .000001;
}

double Presiune::pa_To_kpa(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000;
	return value * .001;
}

double Presiune::pa_To_nmm²(double value, bool invereConversion)
{
	if (invereConversion) return value * 1000000;
	return value * .000001;
}

double Presiune::pa_To_psi(double value, bool invereConversion)
{
	if (invereConversion) return value * 6894.75729317;
	return value * .00014503773773017476;
}

double Presiune::pa_To_torr(double value, bool invereConversion)
{
	if (invereConversion) return value * 133.322368421;
	return value * .007500616827044659;
}

double Presiune::convertMetric(double value, CString unit, bool inverseConversion)
{
	USES_CONVERSION;
	const char* metric = T2A((LPCTSTR)unit);

	if (strcmp(metric, "pa") == 0) {
		return Presiune::pa_To_pa(value, inverseConversion);
	}
	else if (strcmp(metric, "at") == 0) {
		return Presiune::pa_To_at(value, inverseConversion);
	}
	else if (strcmp(metric, "atm") == 0) {
		return Presiune::pa_To_atm(value, inverseConversion);
	}
	else if (strcmp(metric, "bar") == 0) {
		return Presiune::pa_To_bar(value, inverseConversion);
	}
	else if (strcmp(metric, "inH2O") == 0) {
		return Presiune::pa_To_inH2O(value, inverseConversion);
	}
	else if (strcmp(metric, "inHg") == 0) {
		return Presiune::pa_To_inHg(value, inverseConversion);
	}
	else if (strcmp(metric, "kpa") == 0) {
		return Presiune::pa_To_kpa(value, inverseConversion);
	}
	else if (strcmp(metric, "mbar") == 0) {
		return Presiune::pa_To_mbar(value, inverseConversion);
	}
	else if (strcmp(metric, "mpa") == 0) {
		return Presiune::pa_To_mpa(value, inverseConversion);
	}
	else if (strcmp(metric, "nmm²") == 0) {
		return Presiune::pa_To_nmm²(value, inverseConversion);
	}
	else if (strcmp(metric, "psi") == 0) {
		return Presiune::pa_To_psi(value, inverseConversion);
	}
	else if (strcmp(metric, "torr") == 0) {
		return Presiune::pa_To_torr(value, inverseConversion);
	}

	return NULL;
}
