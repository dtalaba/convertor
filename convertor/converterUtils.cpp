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