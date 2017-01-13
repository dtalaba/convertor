#pragma once
class Energie
{
public:
	Energie();
	
	double j_To_j(double value, bool invereConversion);
	double j_To_cal(double value, bool invereConversion);
	double j_To_kcal(double value, bool invereConversion);
	double j_To_kj(double value, bool invereConversion);
	double j_To_wh(double value, bool invereConversion);
	double j_To_kwh(double value, bool invereConversion);
	double j_To_ws(double value, bool invereConversion);
	double j_To_erg(double value, bool invereConversion);
	double j_To_nm(double value, bool invereConversion);
	double j_To_therm(double value, bool invereConversion);
	double j_To_kgfcm(double value, bool invereConversion);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

