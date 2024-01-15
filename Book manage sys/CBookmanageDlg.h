#pragma once
#include "afxdialogex.h"


// CBookmanageDlg 对话框

class CBookmanageDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBookmanageDlg)

public:
	CBookmanageDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CBookmanageDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_BOOK_MANAGE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
