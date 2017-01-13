#pragma once
class Viteza
{
public:
	Viteza();
	
	double kmh_To_mph(double value, bool invereConversion);
	double kmh_To_fts(double value, bool invereConversion);
	double kmh_To_kmh(double value, bool invereConversion);
	double kmh_To_kms(double value, bool invereConversion);
	double kmh_To_ms(double value, bool invereConversion);
	double kmh_To_kn(double value, bool invereConversion);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

