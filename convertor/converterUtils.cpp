#include "stdafx.h"
#include "converterUtils.h"


ConverterUtils::ConverterUtils()
{
}

const char* ConverterUtils::convtCStrToChar(CString strParam)
{
	USES_CONVERSION;
	const char* cstr = T2A((LPCTSTR)strParam);

	return cstr;
}

double ConverterUtils::StrToDouble(CString str)
{
	return _wtoi(str);
}

CString ConverterUtils::DoubleToStr(double nr)
{
	CString result;
	result.Format(_T("%f"), nr);
	return result;
}