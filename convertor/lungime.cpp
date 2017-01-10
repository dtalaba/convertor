#include "stdafx.h"
#include "lungime.h"
 
double Lungime::m_To_mm(int value, bool invereConversion)
{
	if (invereConversion) return value * .001;

	return  value * 1000;
}
double Lungime::m_To_cm(double value, bool invereConversion)
{
	if (invereConversion) return value * .01;

	return  value * 100;
}
double Lungime::m_To_km(double value, bool invereConversion) {
	if (invereConversion) return value * 1000;

	return value * 0.001;
}
double Lungime::m_To_mile(double value, bool invereConversion) {
	if (invereConversion) return value * 1609.344;

	return value*.00062;
}
double Lungime::m_To_feet(double value, bool invereConversion) {
	if (invereConversion) return value * .3048;

	return value * 3.28084;
}
double Lungime::m_To_inch(double value, bool invereConversion) {
	if (invereConversion) return value * .0254;

	return value * 39.37008;
}
double Lungime::m_To_yd(double value, bool invereConversion) {
	if (invereConversion) return value * .9144;

	return  value * 1.09361;
}
