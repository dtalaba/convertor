
// convertorDlg.h : header file
//

#pragma once


// CconvertorDlg dialog
class CconvertorDlg : public CDialogEx
{
// Construction
public:
	CconvertorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONVERTOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeUnitLungimeIn();
	afx_msg void OnEnChangeLungimeIn();

	/*Lungime Helpers*/
	CString GetLungimeInputMetricSelect();
	CString GetLungimeOutputMetricSelect();
	double convertLungimeInputToStandardUnit(CString selectVal);
	double convertedLungimeFinalValue(double valueToBeConverted, CString conversionType);
	double convertedArieFinalValue(double valueToBeConverted, CString conversionType);
	void AriaConversionHandler();
	void LungimeConversionHandler();
	afx_msg void OnCbnSelchangeUnitLungimeOut();
	CString GetAriaInputMetricSelect();
	CString GetAriaOutputMetricSelect();
	double convertArieToStandardUnit(CString conversionType);
	afx_msg void OnCbnSelchangeUnitArieIn();
	afx_msg void OnEnChangeArieIn();
	afx_msg void OnCbnSelchangeUnitArieOut();
	CString GetTempInputMetricSelect();
	CString GetTempOutputMetricSelect();
	double convertTempToStandardUnit(CString conversionType);
	double convertedTempFinalValue(double valueToBeConverted, CString conversionType);
	void TempConversionHandler();
	afx_msg void OnEnChangeTempIn();
	afx_msg void OnCbnSelchangeUnitTempIn();
	afx_msg void OnCbnSelchangeUnitTempOut();
	CString GetMasaInputMetricSelect();
	CString GetMasaOutputMetricSelect();
	double convertMasaToStandardUnit(CString conversionType);
	double convertedMasaFinalValue(double valueToBeConverted, CString conversionType);
	void MasaConversionHandler();
};
