
// lungime.h : header file
 

class Lungime
{

public:
	Lungime();
	~Lungime();

	double m_To_mm(double value, bool invereConversion);
	double m_To_cm(double value, bool invereConversion);
	double m_To_km(double value, bool invereConversion);
	double m_To_mile(double value, bool invereConversion);
	double m_To_feet(double value, bool invereConversion);
	double m_To_inch(double value, bool invereConversion);
	double m_To_yd(double value, bool invereConversion);
};