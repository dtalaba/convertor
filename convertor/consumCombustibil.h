#pragma once
class ConsumCombustibil
{
public:
	ConsumCombustibil();
	
	double l100km_To_l100km(double value, bool invereConversion);
	double l100km_To_milesGalUS(double value, bool invereConversion);
	double l100km_To_milesGalUK(double value, bool invereConversion);
	double l100km_To_kmGalUS(double value, bool invereConversion);
	double l100km_To_kmGalUK(double value, bool invereConversion);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

