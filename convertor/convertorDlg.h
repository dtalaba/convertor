
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
	void resetUnitLungime();
	void resetUnitMasa();
	void resetUnitViteza();
	void resetUnitTimp();
	void resetUnitDensitate();
	void resetUnitEnergie();
	void resetUnitPresiune();
	void resetUnitConsum();
	void resetUnitArie();
	void resetUnitVolum();
	void resetUnitTemp();
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
	afx_msg void OnCbnSelchangeUnitMasaIn();
	afx_msg void OnEnChangeMasaIn();
	afx_msg void OnCbnSelchangeUnitMasaOut();
	CString GetVolumInputMetricSelect();
	CString GetVolumOutputMetricSelect();
	double convertVolumToStandardUnit(CString conversionType);
	double convertedVolumFinalValue(double valueToBeConverted, CString conversionType);
	void VolumConversionHandler();
	afx_msg void OnEnChangeVolumIn();
	afx_msg void OnCbnSelchangeUnitVolumIn();
	afx_msg void OnCbnSelchangeUnitVolumOut();
	CString GetVitezaInputMetricSelect();
	CString GetVitezaOutputMetricSelect();
	double convertVitezaToStandardUnit(CString conversionType);
	double convertedVitezaFinalValue(double valueToBeConverted, CString conversionType);
	void VitezaConversionHandler();
	afx_msg void OnCbnSelchangeUnitVitezaIn();
	afx_msg void OnEnChangeVitezaIn();
	afx_msg
		CString GetTimpInputMetricSelect();
	CString GetTimpOutputMetricSelect();
	double convertTimpToStandardUnit(CString conversionType);
	double convertedTimpFinalValue(double valueToBeConverted, CString conversionType);
	void TimpConversionHandler();
	void OnCbnSelchangeUnitViteazaOut();
	afx_msg void OnEnChangeTimpIn();
	afx_msg void OnCbnSelchangeUnitTimpIn();
	afx_msg void OnCbnSelchangeUnitTimpOut();
	CString GetDensitateInputMetricSelect();
	CString GetDensitateOutputMetricSelect();
	double convertDensitateToStandardUnit(CString conversionType);
	double convertedDensitateFinalValue(double valueToBeConverted, CString conversionType);
	void DensitateConversionHandler();
	afx_msg void OnEnChangeDensitateIn();
	afx_msg void OnCbnSelchangeUnitDensitateIn();
	afx_msg void OnCbnSelchangeUnitDensitateOut();
	CString GetEnergieInputMetricSelect();
	CString GetEnergieOutputMetricSelect();
	double convertEnergieToStandardUnit(CString conversionType);
	double convertedEnergieFinalValue(double valueToBeConverted, CString conversionType);
	void EnergieConversionHandler();
	CString GetPresiuneInputMetricSelect();
	CString GetPresiuneOutputMetricSelect();
	double convertPresiuneToStandardUnit(CString conversionType);
	double convertedPresiuneFinalValue(double valueToBeConverted, CString conversionType);
	void PresiuneConversionHandler();
	CString GetConsumInputMetricSelect();
	CString GetConsumOutputMetricSelect();
	double convertConsumToStandardUnit(CString conversionType);
	double convertedConsumFinalValue(double valueToBeConverted, CString conversionType);
	void ConsumConversionHandler();
	afx_msg void OnEnChangeEnergieIn();
	afx_msg void OnCbnSelchangeUnitEnergieIn();
	afx_msg void OnCbnSelchangeUnitEnergieOut();
	afx_msg void OnEnChangeConsumIn();
	afx_msg void OnCbnSelchangeUnitConsumIn();
	afx_msg void OnCbnSelchangeUnitConsumOut();
	afx_msg void OnEnChangePresiuneIn();
	afx_msg void OnCbnSelchangeUnitPresiuneIn();
	afx_msg void OnCbnSelchangeUnitPresiuneOut();
	afx_msg void OnBnClickedBtnResetLungime();
	void OnBnClickedBtnResetMasa();
	void OnBnClickedBtnResetViteza();
	void OnBnClickedBtnResetTimp();
	void OnBnClickedBtnResetDensitate();
	void OnBnClickedBtnResetEnergie();
	void OnBnClickedBtnResetPresiune();
	void OnBnClickedBtnResetConsum();
	void OnBnClickedBtnResetArie();
	void OnBnClickedBtnResetVolum();
	void OnBnClickedBtnResetTemp();
};
