
// lngime.h : header file
//

#pragma once

class Lungime : public CconvertorDlg
{

public:
	Lungime(CWnd* pParent = NULL);
	
#ifdef AFX_DESIGN_TIME
	enum { IDD = CconvertorDlg::IDD };
#endif
														 
protected:
	void OnEnChangeLungimeIn();
};