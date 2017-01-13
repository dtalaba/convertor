#pragma once
class Temperatura
{
public:
	Temperatura();

	double cel_To_f(double value, bool invereConversion); 
	double cel_To_k(double value, bool invereConversion); 
	double cel_To_cel(double value, bool invereConversion);
	double convertMetric(double value, CString metric, bool inverseConversion);
};

