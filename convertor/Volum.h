class Volum
{
public:
	Volum();

	double mQ_To_ml(double value, bool invereConversio);
	double mQ_To_cl(double value, bool invereConversio);
	double mQ_To_dl(double value, bool invereConversio);
	double mQ_To_L(double value, bool invereConversio);
	double mQ_To_cmQ(double value, bool invereConversio);
	double mQ_To_mQ(double value, bool invereConversion);
	double mQ_To_inchQ(double value, bool invereConversio);
	double mQ_To_feetQ(double value, bool invereConversio);
	double mQ_To_gallon(double value, bool invereConversio);
	double convertMetric(double value, CString unit, bool inverseConversion);
};
