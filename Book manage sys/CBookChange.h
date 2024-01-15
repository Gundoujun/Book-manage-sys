#pragma once
#include "afxdialogex.h"


// CBookChange 对话框

class CBookChange : public CDialogEx
{
	DECLARE_DYNAMIC(CBookChange)

public:
	CBookChange(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CBookChange();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_CHANGE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
