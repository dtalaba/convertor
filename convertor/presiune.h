#pragma once
class Presiune
{
public:
	Presiune();

	double pa_To_pa(double value, bool invereConversion);
	double pa_To_at(double value, bool invereConversion);
	double pa_To_atm(double value, bool invereConversion);
	double pa_To_bar(double value, bool invereConversion);
	double pa_To_inH2O(double value, bool invereConversion);
	double pa_To_inHg(double value, bool invereConversion);
	double pa_To_kpa(double value, bool invereConversion);
	double pa_To_mbar(double value, bool invereConversion);
	double pa_To_mpa(double value, bool invereConversion);
	double pa_To_nmm²(double value, bool invereConversion);
	double pa_To_psi(double value, bool invereConversion);
	double pa_To_torr(double value, bool invereConversion);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

