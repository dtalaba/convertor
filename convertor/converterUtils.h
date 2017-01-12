#pragma once

class ConverterUtils
{
public:
	ConverterUtils();

	const char* convtCStrToChar(CString strParam);
	double StrToDouble(CString str);
	CString DoubleToStr(double nr);
};

