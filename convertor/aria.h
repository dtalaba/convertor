#pragma once

class Aria
{
public:
	Aria();

	double m²_To_mm²(double value, bool invereConversion);
	double m²_To_cm²(double value, bool invereConversion);
	double m²_To_m²(double value, bool invereConversion);
	double m²_To_km²(double value, bool invereConversion);
	double m²_To_feet²(double value, bool invereConversion);
	double m²_To_yard²(double value, bool invereConversion);
	double m²_To_inch²(double value, bool invereConversion);
	double m²_To_acre(double value, bool invereConversion);
	double m²_To_hect(double value, bool invereConversion);
	double convertMetric(double value, CString metric, bool inverseConversion);
};

