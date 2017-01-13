#pragma once

class Aria
{
public:
	Aria();

	double m�_To_mm�(double value, bool invereConversion);
	double m�_To_cm�(double value, bool invereConversion);
	double m�_To_m�(double value, bool invereConversion);
	double m�_To_km�(double value, bool invereConversion);
	double m�_To_feet�(double value, bool invereConversion);
	double m�_To_yard�(double value, bool invereConversion);
	double m�_To_inch�(double value, bool invereConversion);
	double m�_To_acre(double value, bool invereConversion);
	double m�_To_hect(double value, bool invereConversion);
	double convertMetric(double value, CString metric, bool inverseConversion);
};

