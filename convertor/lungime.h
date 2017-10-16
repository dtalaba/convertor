#pragma once
// lungime.h : header file

class Lungime
{

public:
	Lungime();

	long double m_To_mm(long double value, bool invereConversion);
	double m_To_cm(double value, bool invereConversion);
	double m_To_m(double value, bool invereConversion);
	long double m_To_km(long double value, bool invereConversion);
	double m_To_mile(double value, bool invereConversion);
	double m_To_feet(double value, bool invereConversion);
	double m_To_inch(double value, bool invereConversion);
	double m_To_yd(double value, bool invereConversion);
	long double convertMetric(long double value, CString metric, bool inverseConversion);
};