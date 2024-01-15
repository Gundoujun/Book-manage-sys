#pragma once
#include "afxdialogex.h"


// CBookSearch 对话框

class CBookSearch : public CDialogEx
{
	DECLARE_DYNAMIC(CBookSearch)

public:
	CBookSearch(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CBookSearch();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_SEARCH_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
