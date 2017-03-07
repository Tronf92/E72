
// e 72Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// Ce72Dlg dialog
class Ce72Dlg : public CDialogEx
{
// Construction
public:
	Ce72Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_E72_DIALOG };

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
	CComboBox mCombo;
	CListBox mLista;
	afx_msg void OnBnClickedAdauga();
	afx_msg void OnLbnSelchangeList1();
};
