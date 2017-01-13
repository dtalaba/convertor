
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
#include "volum.h"
#include "viteza.h"
#include "temperatura.h"
#include "masa.h"
#include "timp.h"
#include "presiune.h"
#include "consumCombustibil.h"
#include "energie.h"
#include "densitate.h"
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
Volum volum;
Viteza viteza;
Timp timp;
Densitate densitate;
Energie energie;
Presiune presiune;
ConsumCombustibil consumCombustibil;

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
	ON_CBN_SELCHANGE(IDC_UNIT_MASA_IN, &CconvertorDlg::OnCbnSelchangeUnitMasaIn)
	ON_EN_CHANGE(IDC_MASA_IN, &CconvertorDlg::OnEnChangeMasaIn)
	ON_CBN_SELCHANGE(IDC_UNIT_MASA_OUT, &CconvertorDlg::OnCbnSelchangeUnitMasaOut)
	ON_EN_CHANGE(IDC_VOLUM_IN, &CconvertorDlg::OnEnChangeVolumIn)
	ON_CBN_SELCHANGE(IDC_UNIT_VOLUM_IN, &CconvertorDlg::OnCbnSelchangeUnitVolumIn)
	ON_CBN_SELCHANGE(IDC_UNIT_VOLUM_OUT, &CconvertorDlg::OnCbnSelchangeUnitVolumOut)
	ON_CBN_SELCHANGE(IDC_UNIT_VITEZA_IN, &CconvertorDlg::OnCbnSelchangeUnitVitezaIn)
	ON_EN_CHANGE(IDC_VITEZA_IN, &CconvertorDlg::OnEnChangeVitezaIn)
	ON_CBN_SELCHANGE(IDC_UNIT_VITEAZA_OUT, &CconvertorDlg::OnCbnSelchangeUnitViteazaOut)
	ON_EN_CHANGE(IDC_TIMP_IN, &CconvertorDlg::OnEnChangeTimpIn)
	ON_CBN_SELCHANGE(IDC_UNIT_TIMP_IN, &CconvertorDlg::OnCbnSelchangeUnitTimpIn)
	ON_CBN_SELCHANGE(IDC_UNIT_TIMP_OUT, &CconvertorDlg::OnCbnSelchangeUnitTimpOut)
	ON_EN_CHANGE(IDC_DENSITATE_IN, &CconvertorDlg::OnEnChangeDensitateIn)
	ON_CBN_SELCHANGE(IDC_UNIT_DENSITATE_IN, &CconvertorDlg::OnCbnSelchangeUnitDensitateIn)
	ON_CBN_SELCHANGE(IDC_UNIT_DENSITATE_OUT, &CconvertorDlg::OnCbnSelchangeUnitDensitateOut)
	ON_EN_CHANGE(IDC_ENERGIE_IN, &CconvertorDlg::OnEnChangeEnergieIn)
	ON_CBN_SELCHANGE(IDC_UNIT_ENERGIE_IN, &CconvertorDlg::OnCbnSelchangeUnitEnergieIn)
	ON_CBN_SELCHANGE(IDC_UNIT_ENERGIE_OUT, &CconvertorDlg::OnCbnSelchangeUnitEnergieOut)
	ON_EN_CHANGE(IDC_CONSUM_IN, &CconvertorDlg::OnEnChangeConsumIn)
	ON_CBN_SELCHANGE(IDC_UNIT_CONSUM_IN, &CconvertorDlg::OnCbnSelchangeUnitConsumIn)
	ON_CBN_SELCHANGE(IDC_UNIT_CONSUM_OUT, &CconvertorDlg::OnCbnSelchangeUnitConsumOut)
	ON_EN_CHANGE(IDC_PRESIUNE_IN, &CconvertorDlg::OnEnChangePresiuneIn)
	ON_CBN_SELCHANGE(IDC_UNIT_PRESIUNE_IN, &CconvertorDlg::OnCbnSelchangeUnitPresiuneIn)
	ON_CBN_SELCHANGE(IDC_UNIT_PRESIUNE_OUT, &CconvertorDlg::OnCbnSelchangeUnitPresiuneOut)
	ON_BN_CLICKED(IDC_BTN_RESET_LUNGIME, &CconvertorDlg::OnBnClickedBtnResetLungime)
	ON_BN_CLICKED(IDC_BTN_RESET_MASA, &CconvertorDlg::OnBnClickedBtnResetMasa)
	ON_BN_CLICKED(IDC_BTN_RESET_VITEZA, &CconvertorDlg::OnBnClickedBtnResetViteza)
	ON_BN_CLICKED(IDC_BTN_RESET_TIMP, &CconvertorDlg::OnBnClickedBtnResetTimp)
	ON_BN_CLICKED(IDC_BTN_RESET_DENSITATE, &CconvertorDlg::OnBnClickedBtnResetDensitate)
	ON_BN_CLICKED(IDC_BTN_RESET_ENERGIE, &CconvertorDlg::OnBnClickedBtnResetEnergie)
	ON_BN_CLICKED(IDC_BTN_RESET_PRESIUNE, &CconvertorDlg::OnBnClickedBtnResetPresiune)
	ON_BN_CLICKED(IDC_BTN_RESET_CONSUM, &CconvertorDlg::OnBnClickedBtnResetConsum)
	ON_BN_CLICKED(IDC_BTN_RESET_ARIE, &CconvertorDlg::OnBnClickedBtnResetArie)
	ON_BN_CLICKED(IDC_BTN_RESET_VOLUM, &CconvertorDlg::OnBnClickedBtnResetVolum)
	ON_BN_CLICKED(IDC_BTN_RESET_TEMP, &CconvertorDlg::OnBnClickedBtnResetTemp)
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


	CconvertorDlg::resetUnitLungime();
	CconvertorDlg::resetUnitMasa();
	CconvertorDlg::resetUnitViteza();
	CconvertorDlg::resetUnitTimp();
	CconvertorDlg::resetUnitDensitate();
	CconvertorDlg::resetUnitEnergie();
	CconvertorDlg::resetUnitPresiune();
	CconvertorDlg::resetUnitConsum();
	CconvertorDlg::resetUnitArie();
	CconvertorDlg::resetUnitVolum();
	CconvertorDlg::resetUnitTemp();
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CconvertorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CconvertorDlg::resetUnitLungime() {
	CComboBox* lungime_in = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_IN);
	lungime_in->SetCurSel(4);
	CComboBox* lungime_out = (CComboBox*)GetDlgItem(IDC_UNIT_LUNGIME_OUT);
	lungime_out->SetCurSel(4);
}
void CconvertorDlg::resetUnitMasa() {
	CComboBox* masa_in = (CComboBox*)GetDlgItem(IDC_UNIT_MASA_IN);
	masa_in->SetCurSel(1);
	CComboBox* masa_out = (CComboBox*)GetDlgItem(IDC_UNIT_MASA_OUT);
	masa_out->SetCurSel(1);
}
void CconvertorDlg::resetUnitViteza() {
	CComboBox* viteza_in = (CComboBox*)GetDlgItem(IDC_UNIT_VITEZA_IN);
	viteza_in->SetCurSel(1);
	CComboBox* viteza_out = (CComboBox*)GetDlgItem(IDC_UNIT_VITEZA_OUT);
	viteza_out->SetCurSel(1);
}
void CconvertorDlg::resetUnitTimp() {
	CComboBox* timp_in = (CComboBox*)GetDlgItem(IDC_UNIT_TIMP_IN);
	timp_in->SetCurSel(3);
	CComboBox* timp_out = (CComboBox*)GetDlgItem(IDC_UNIT_TIMP_OUT);
	timp_out->SetCurSel(3);
}

void CconvertorDlg::resetUnitDensitate() {
	CComboBox* densitate_in = (CComboBox*)GetDlgItem(IDC_UNIT_DENSITATE_IN);
	densitate_in->SetCurSel(3);
	CComboBox* densitate_out = (CComboBox*)GetDlgItem(IDC_UNIT_DENSITATE_OUT);
	densitate_out->SetCurSel(3);
}
void CconvertorDlg::resetUnitEnergie() {
	CComboBox* energie_in = (CComboBox*)GetDlgItem(IDC_UNIT_ENERGIE_IN);
	energie_in->SetCurSel(2);
	CComboBox* energie_out = (CComboBox*)GetDlgItem(IDC_UNIT_ENERGIE_OUT);
	energie_out->SetCurSel(2);
}
void CconvertorDlg::resetUnitPresiune() {
	CComboBox* presiune_in = (CComboBox*)GetDlgItem(IDC_UNIT_PRESIUNE_IN);
	presiune_in->SetCurSel(9);
	CComboBox* presiune_out = (CComboBox*)GetDlgItem(IDC_UNIT_PRESIUNE_OUT);
	presiune_out->SetCurSel(9);
}
void CconvertorDlg::resetUnitConsum() {
	CComboBox* consum_in = (CComboBox*)GetDlgItem(IDC_UNIT_CONSUM_IN);
	consum_in->SetCurSel(2);
	CComboBox* consum_out = (CComboBox*)GetDlgItem(IDC_UNIT_CONSUM_OUT);
	consum_out->SetCurSel(2);
}
void CconvertorDlg::resetUnitArie() {
	CComboBox* arie_in = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_IN);
	arie_in->SetCurSel(6);
	CComboBox* arie_out = (CComboBox*)GetDlgItem(IDC_UNIT_ARIE_OUT);
	arie_out->SetCurSel(6);
}
void CconvertorDlg::resetUnitVolum() {
	CComboBox* volum_in = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_IN);
	volum_in->SetCurSel(7);
	CComboBox* volum_out = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_OUT);
	volum_out->SetCurSel(7);
}
void CconvertorDlg::resetUnitTemp() {
	CComboBox* temp_in = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_IN);
	temp_in->SetCurSel(0);
	CComboBox* temp_out = (CComboBox*)GetDlgItem(IDC_UNIT_TEMP_OUT);
	temp_out->SetCurSel(0);
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

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = lungime.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedLungimeFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = lungime.convertMetric(valueToBeConverted, conversionType, false);

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

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = aria.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedArieFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = aria.convertMetric(valueToBeConverted, conversionType, false);

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

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = temp.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedTempFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = temp.convertMetric(valueToBeConverted, conversionType, false);

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

/*Masa*/
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

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = masa.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedMasaFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = masa.convertMetric(valueToBeConverted, conversionType, false);

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

void CconvertorDlg::OnCbnSelchangeUnitMasaIn()
{
	CconvertorDlg::MasaConversionHandler();
}

void CconvertorDlg::OnEnChangeMasaIn()
{
	CconvertorDlg::MasaConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitMasaOut()
{
	CconvertorDlg::MasaConversionHandler();
}
/*End Masa*/

/*Volum*/
CString CconvertorDlg::GetVolumInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetVolumOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_VOLUM_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertVolumToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_VOLUM_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = volum.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedVolumFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = volum.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::VolumConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetVolumInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetVolumOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertVolumToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedVolumFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_VOLUM_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeVolumIn()
{
	CconvertorDlg::VolumConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitVolumIn()
{
	CconvertorDlg::VolumConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitVolumOut()
{
	CconvertorDlg::VolumConversionHandler();
}
/*End Volum*/

/*Viteza*/
CString CconvertorDlg::GetVitezaInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_VITEZA_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetVitezaOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_VITEZA_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertVitezaToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_VITEZA_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = viteza.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedVitezaFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = viteza.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::VitezaConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetVitezaInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetVitezaOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertVitezaToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedVitezaFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_VITEZA_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnCbnSelchangeUnitVitezaIn()
{
	CconvertorDlg::VitezaConversionHandler();
}

void CconvertorDlg::OnEnChangeVitezaIn()
{
	CconvertorDlg::VitezaConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitViteazaOut()
{
	CconvertorDlg::VitezaConversionHandler();
}
/*End Viteza*/

/*Timp*/
CString CconvertorDlg::GetTimpInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_TIMP_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetTimpOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_TIMP_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertTimpToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_TIMP_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = timp.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedTimpFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = timp.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::TimpConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetTimpInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetTimpOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertTimpToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedTimpFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_TIMP_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeTimpIn()
{
	CconvertorDlg::TimpConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitTimpIn()
{
	CconvertorDlg::TimpConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitTimpOut()
{
	CconvertorDlg::TimpConversionHandler();
}

/*End Timp*/

/*Densitate*/
CString CconvertorDlg::GetDensitateInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_DENSITATE_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetDensitateOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_DENSITATE_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertDensitateToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_DENSITATE_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = densitate.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedDensitateFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = densitate.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::DensitateConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetDensitateInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetDensitateOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertDensitateToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedDensitateFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_DENSITATE_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeDensitateIn()
{
	CconvertorDlg::DensitateConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitDensitateIn()
{
	CconvertorDlg::DensitateConversionHandler();
}

void CconvertorDlg::OnCbnSelchangeUnitDensitateOut()
{
	CconvertorDlg::DensitateConversionHandler();
}
/*End Densitate*/

/*Energie*/
CString CconvertorDlg::GetEnergieInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_ENERGIE_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetEnergieOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_ENERGIE_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertEnergieToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_ENERGIE_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = energie.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedEnergieFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = energie.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::EnergieConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetEnergieInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetEnergieOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertEnergieToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedEnergieFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_ENERGIE_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeEnergieIn()
{
	CconvertorDlg::EnergieConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitEnergieIn()
{
	CconvertorDlg::EnergieConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitEnergieOut()
{
	CconvertorDlg::EnergieConversionHandler();

}
/*End Energie*/

/*Presiune*/
CString CconvertorDlg::GetPresiuneInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_PRESIUNE_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetPresiuneOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_PRESIUNE_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertPresiuneToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_PRESIUNE_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = presiune.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedPresiuneFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = presiune.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::PresiuneConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetPresiuneInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetPresiuneOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertPresiuneToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedPresiuneFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_PRESIUNE_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangePresiuneIn()
{
	CconvertorDlg::PresiuneConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitPresiuneIn()
{
	CconvertorDlg::PresiuneConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitPresiuneOut()
{
	CconvertorDlg::PresiuneConversionHandler();
}
/*End Presiune*/

/*Consum*/
CString CconvertorDlg::GetConsumInputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_CONSUM_IN);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

CString CconvertorDlg::GetConsumOutputMetricSelect()
{
	CString metric;
	int optionIndex;

	CComboBox* select = (CComboBox*)GetDlgItem(IDC_UNIT_CONSUM_OUT);
	optionIndex = select->GetCurSel();
	select->GetLBText(optionIndex, metric);

	return metric;
}

double CconvertorDlg::convertConsumToStandardUnit(CString conversionType)
{
	CString str;
	GetDlgItem(IDC_CONSUM_IN)->GetWindowText(str);

	double inputToStandardUnitValue = converterUtils.StrToDouble(str);
	double convertedVal = consumCombustibil.convertMetric(inputToStandardUnitValue, conversionType, true);

	return convertedVal;
}

double CconvertorDlg::convertedConsumFinalValue(double valueToBeConverted, CString conversionType)
{
	double convertedVal = consumCombustibil.convertMetric(valueToBeConverted, conversionType, false);

	return convertedVal;
}

void CconvertorDlg::ConsumConversionHandler() {
	CString conversionInputType;
	CString conversionOutputType;
	double inputToStandardUnitValue;
	double finalConvertedValue;

	conversionInputType = CconvertorDlg::GetConsumInputMetricSelect();
	conversionOutputType = CconvertorDlg::GetConsumOutputMetricSelect();
	inputToStandardUnitValue = CconvertorDlg::convertConsumToStandardUnit(conversionInputType);
	finalConvertedValue = CconvertorDlg::convertedConsumFinalValue(inputToStandardUnitValue, conversionOutputType);

	CString out = converterUtils.DoubleToStr(finalConvertedValue);
	GetDlgItem(IDC_CONSUM_OUT)->SetWindowText(out);
}

void CconvertorDlg::OnEnChangeConsumIn()
{
	CconvertorDlg::ConsumConversionHandler();

}


void CconvertorDlg::OnCbnSelchangeUnitConsumIn()
{
	CconvertorDlg::ConsumConversionHandler();
}


void CconvertorDlg::OnCbnSelchangeUnitConsumOut()
{
	CconvertorDlg::ConsumConversionHandler();

}
/*End Consum*/


void CconvertorDlg::OnBnClickedBtnResetLungime()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitLungime();
	GetDlgItem(IDC_LUNGIME_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_LUNGIME_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetMasa()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitMasa();
	GetDlgItem(IDC_MASA_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_MASA_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetViteza()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitViteza();
	GetDlgItem(IDC_VITEZA_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_VITEZA_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetTimp()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitTimp();
	GetDlgItem(IDC_TIMP_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_TIMP_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetDensitate()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitDensitate();
	GetDlgItem(IDC_DENSITATE_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_DENSITATE_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetEnergie()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitEnergie();
	GetDlgItem(IDC_ENERGIE_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_ENERGIE_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetPresiune()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitPresiune();
	GetDlgItem(IDC_PRESIUNE_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_PRESIUNE_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetConsum()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitConsum();
	GetDlgItem(IDC_CONSUM_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_CONSUM_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetArie()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitArie();
	GetDlgItem(IDC_ARIE_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_ARIE_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetVolum()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitVolum();
	GetDlgItem(IDC_VOLUM_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_VOLUM_OUT)->SetWindowText(resetVal);
}

void CconvertorDlg::OnBnClickedBtnResetTemp()
{
	CString resetVal = 0;
	CconvertorDlg::resetUnitTemp();
	GetDlgItem(IDC_TEMP_IN)->SetWindowText(resetVal);
	GetDlgItem(IDC_TEMP_OUT)->SetWindowText(resetVal);
}
