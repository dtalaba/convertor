
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

	/*Helpers*/
	double StrToDouble(CString str);
	CString DoubleToStr(double nr);


	/*Lungime Helpers*/
	CString GetLungimeInputMetricSelect();
	CString GetLungimeOutputMetricSelect();
	double convertInputToStandardUnit(CString selectVal);
	double convertedFinalValue(double valueToBeConverted, CString conversionType);
	void LungimeConversionHandler();
	afx_msg void OnCbnSelchangeUnitLungimeOut();
};
