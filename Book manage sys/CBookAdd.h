#pragma once
#include "afxdialogex.h"


// CBookAdd 对话框

class CBookAdd : public CDialogEx
{
	DECLARE_DYNAMIC(CBookAdd)

public:
	CBookAdd(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CBookAdd();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
