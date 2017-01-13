
// convertorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "convertor.h"
#include "convertorDlg.h"
#include "afxdialogex.h"


//include utils
#include "converterUtils.h"
#include "lungime.h"
#include "aria.h"
#include "temperatura.h"
#include "masa.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CconvertorDlg dialog
ConverterUtils converterUtils;
Lungime lungime;
Aria aria;
Temperatura temp;
Masa masa;

CconvertorDlg::CconvertorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CONVERTOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CconvertorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CconvertorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_UNIT_LUNGIME_IN, &CconvertorDlg::OnCbnSelchangeUnitLungimeIn)
	ON_EN_CHANGE(IDC_LUNGIME_IN, &CconvertorDlg::OnEnChangeLungimeIn)
	ON_CBN_SELCHANGE(IDC_UNIT_LUNGIME_OUT, &CconvertorDlg::OnCbnSelchangeUnitLungimeOut)
	ON_CBN_SELCHANGE(IDC_UNIT_ARIE_IN, &CconvertorDlg::OnCbnSelchangeUnitArieIn)
	ON_EN_CHANGE(IDC_ARIE_IN, &CconvertorDlg::OnEnChangeArieIn)
	ON_CBN_SELCHANGE(IDC_UNIT_ARIE_OUT, &CconvertorDlg::OnCbnSelchangeUnitArieOut)
	ON_EN_CHANGE(IDC_TEMP_IN, &CconvertorDlg::OnEnChangeTempIn)
	ON_CBN_SELCHANGE(IDC_UNIT_TEMP_IN, &CconvertorDlg::OnCbnSelchangeUnitTempIn)
	ON_CBN_SELCHANGE(IDC_UNIT_TEMP_OUT, &CconvertorDlg::OnCbnSelchangeUnitTempOut)
END_MESSAGE_MAP()


// CconvertorDlg message handlers

BOOL CconvertorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CconvertorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CconvertorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}

	CComboBox* lungime_in = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_IN);
	lungime_in->SetCurSel(4);
	CComboBox* lungime_out = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_OUT);
	lungime_out->SetCurSel(4);

	CComboBox* arie_in = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_IN);
	arie_in->SetCurSel(6);
	CComboBox* arie_out = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_OUT);
	arie_out->SetCurSel(6);

	CComboBox* volum_in = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_IN);
	volum_in->SetCurSel(6);
	CComboBox* volum_out = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_OUT);
	volum_out->SetCurSel(6);

	CComboBox* temp_in = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_IN);
	temp_in->SetCurSel(0);
	CComboBox* temp_out = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_OUT);
	temp_out->SetCurSel(0);
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CconvertorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


/*Lungime*/
CString CconvertorDlg::GetLungimeInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetLungimeOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertLungimeInputToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_LUNGIME_IN)->GetWindowText(str);

	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = lungime.convertMetric(inputToStandardUnitValue, unit, true);

	return convertedVal;
}

double CconvertorDlg::convertedLungimeFinalValue(double valueToBeConverted, CString conversionType)
{
	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double convertedVal = lungime.convertMetric(valueToBeConverted, unit, false);

	return convertedVal;
}

void CconvertorDlg::LungimeConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetLungimeInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetLungimeOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertLungimeInputToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedLungimeFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_LUNGIME_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnCbnSelchangeUnitLungimeIn()
{
	CconvertorDlg::LungimeConversionHandler();
}


void CconvertorDlg::OnEnChangeLungimeIn()
{
	CconvertorDlg::LungimeConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitLungimeOut()
{
	CconvertorDlg::LungimeConversionHandler();
}


/*End Lungime*/

/*Aria*/
CString CconvertorDlg::GetAriaInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetAriaOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertArieToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_ARIE_IN)->GetWindowText(str);

	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = aria.convertMetric(inputToStandardUnitValue, unit, true);

	return convertedVal;
}

double CconvertorDlg::convertedArieFinalValue(double valueToBeConverted, CString conversionType)
{
	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double convertedVal = aria.convertMetric(valueToBeConverted, unit, false);

	return convertedVal;
}

void CconvertorDlg::AriaConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetAriaInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetAriaOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertArieToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedArieFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_ARIE_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnCbnSelchangeUnitArieIn()
{
	CconvertorDlg::AriaConversionHandler();
}


void CconvertorDlg::OnEnChangeArieIn()
{
	CconvertorDlg::AriaConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitArieOut()
{
	CconvertorDlg::AriaConversionHandler();
}


/*End Aria*/

/*Temp*/
CString CconvertorDlg::GetTempInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetTempOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertTempToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_TEMP_IN)->GetWindowText(str);

	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = temp.convertMetric(inputToStandardUnitValue, unit, true);

	return convertedVal;
}

double CconvertorDlg::convertedTempFinalValue(double valueToBeConverted, CString conversionType)
{
	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double convertedVal = temp.convertMetric(valueToBeConverted, unit, false);

	return convertedVal;
}

void CconvertorDlg::TempConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetTempInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetTempOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertTempToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedTempFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_TEMP_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeTempIn()
{
	CconvertorDlg::TempConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitTempIn()
{
	CconvertorDlg::TempConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitTempOut()
{
	CconvertorDlg::TempConversionHandler();
}

/*End Temp*/

/*End Masa*/
CString CconvertorDlg::GetMasaInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_MASA_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetMasaOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_MASA_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertMasaToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_MASA_IN)->GetWindowText(str);

	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = masa.convertMetric(inputToStandardUnitValue, unit, true);

	return convertedVal;
}

double CconvertorDlg::convertedMasaFinalValue(double valueToBeConverted, CString conversionType)
{
	const char* unit = converterUtils.convtCStrToChar(conversionType);
	double convertedVal = masa.convertMetric(valueToBeConverted, unit, false);

	return convertedVal;
}

void CconvertorDlg::MasaConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetMasaInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetMasaOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertMasaToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedMasaFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_MASA_OUT)->SetWindowText(out);
}

/*End Masa*/