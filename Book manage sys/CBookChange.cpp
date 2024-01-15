// CBookChange.cpp: 实现文件
//

#include "pch.h"
#include "Book manage sys.h"
#include "afxdialogex.h"
#include "CBookChange.h"


// CBookChange 对话框

IMPLEMENT_DYNAMIC(CBookChange, CDialogEx)

CBookChange::CBookChange(CWnd* pParent /*=nullptr*/)
	: CDialogEx(I_CHANGE_DIALOG, pParent)
{

}

CBookChange::~CBookChange()
{
}

void CBookChange::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBookChange, CDialogEx)
END_MESSAGE_MAP()


// CBookChange 消息处理程序
