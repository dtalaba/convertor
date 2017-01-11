
// lungime.h : header file
 

class Lungime
{

public:
	Lungime();

	double m_To_mm(double value, bool invereConversion);
	double m_To_cm(double value, bool invereConversion);
	double m_To_m(double value, bool invereConversion);
	double m_To_km(double value, bool invereConversion);
	double m_To_mile(double value, bool invereConversion);
	double m_To_feet(double value, bool invereConversion);
	double m_To_inch(double value, bool invereConversion);
	double m_To_yd(double value, bool invereConversion);
	double convertMetric(double value, CString metric, bool inverseConversion);
};