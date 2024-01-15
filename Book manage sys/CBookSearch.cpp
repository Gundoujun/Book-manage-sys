// CBookSearch.cpp: 实现文件
//

#include "pch.h"
#include "Book manage sys.h"
#include "afxdialogex.h"
#include "CBookSearch.h"


// CBookSearch 对话框

IMPLEMENT_DYNAMIC(CBookSearch, CDialogEx)

CBookSearch::CBookSearch(CWnd* pParent /*=nullptr*/)
	: CDialogEx(I_SEARCH_DIALOG, pParent)
{

}

CBookSearch::~CBookSearch()
{
}

void CBookSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBookSearch, CDialogEx)
END_MESSAGE_MAP()


// CBookSearch 消息处理程序
