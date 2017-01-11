#include "stdafx.h"
#include "lungime.h"
#include "converterUtils.h"

Lungime::Lungime()
{
}

double Lungime::m_To_mm(double value, bool invereConversion)
{
	if (invereConversion) return value * .001;

	return  value * 1000;
}
double Lungime::m_To_cm(double value, bool invereConversion)
{
	if (invereConversion) return value * .01;

	return  value * 100;
}
double Lungime::m_To_m(double value, bool invereConversion)
{
	if (invereConversion) return value;

	return  value;
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


double Lungime::convertMetric(double value, const char* metric, bool inverseConversion) {
	char x = 'm';
	switch(x) {
	  case 'mm':
		  return Lungime::m_To_mm(value, inverseConversion);
		  break;
	  case 'cm':
		  return Lungime::m_To_cm(value, inverseConversion);
		  break;
	  case 'm':
		  return Lungime::m_To_m(value, inverseConversion);
		  break;
	  case 'km':
		  return Lungime::m_To_km(value, inverseConversion);
		  break;
	  case 'mile':
		  return Lungime::m_To_mile(value, inverseConversion);
		  break;
	  case 'feet':
		  return Lungime::m_To_feet(value, inverseConversion);
		  break;
	  case 'inch':
		  return Lungime::m_To_inch(value, inverseConversion);
		  break;
	  case 'yq':
		  return Lungime::m_To_yd(value, inverseConversion);
		  break;
	  default:
		  return NULL;
		  break;
	}

	return NULL;
}