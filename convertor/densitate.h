#pragma once
class Densitate
{
public:
	Densitate();
	
	double kgm_To_kgm(double value, bool invereConversion);
	double kgm_To_gcm(double value, bool invereConversion);
	double kgm_To_gm(double value, bool invereConversion);
	double kgm_To_kgl(double value, bool invereConversion);
	double kgm_To_tm(double value, bool invereConversion);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

