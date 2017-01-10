#include "stdafx.h"
#include "lungime.h"
#include "afxdialogex.h"
#include "convertorDlg.h"

BEGIN_MESSAGE_MAP(Lungime, CconvertorDlg)
	ON_EN_CHANGE(IDC_LUNGIME_IN, &Lungime::OnEnChangeLungimeIn)
END_MESSAGE_MAP()

void Lungime::OnEnChangeLungimeIn()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CconvertorDlg::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
