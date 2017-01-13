#pragma once
class Timp
{
public:
	Timp();

	double h_To_sec(double value, bool invereConversio);
	double h_To_min(double value, bool invereConversio);
	double h_To_h(double value, bool invereConversio);
	double h_To_zi(double value, bool invereConversio);
	double h_To_saptamana(double value, bool invereConversio);
	double h_To_an(double value, bool invereConversio);
	double h_To_decisec(double value, bool invereConversion);
	double h_To_centisec(double value, bool invereConversio);
	double h_To_milisec(double value, bool invereConversio);
	double h_To_microsec(double value, bool invereConversio);
	double h_To_nanosec(double value, bool invereConversio);
	double convertMetric(double value, CString unit, bool inverseConversion);
};

