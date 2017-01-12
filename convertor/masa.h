#pragma once
class Masa
{
public:
	Masa(); 

	double kg_To_milligm(double value, bool invereConversion);
	double kg_To_gm(double value, bool invereConversion);
	double kg_To_kg(double value, bool invereConversion);
	double kg_To_pound(double value, bool invereConversion);
	double kg_To_t(double value, bool invereConversion);
	double convertMetric(double value, CString metric, bool inverseConversion);
};

