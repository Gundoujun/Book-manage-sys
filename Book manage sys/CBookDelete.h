#pragma once
#include "afxdialogex.h"


// CBookDelete 对话框

class CBookDelete : public CDialogEx
{
	DECLARE_DYNAMIC(CBookDelete)

public:
	CBookDelete(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CBookDelete();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = I_DELETE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
