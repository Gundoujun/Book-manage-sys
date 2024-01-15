// CBookAdd.cpp: 实现文件
//

#include "pch.h"
#include "Book manage sys.h"
#include "afxdialogex.h"
#include "CBookAdd.h"


// CBookAdd 对话框

IMPLEMENT_DYNAMIC(CBookAdd, CDialogEx)

CBookAdd::CBookAdd(CWnd* pParent /*=nullptr*/)
	: CDialogEx(I_ADD_DIALOG, pParent)
{

}

CBookAdd::~CBookAdd()
{
}

void CBookAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBookAdd, CDialogEx)
END_MESSAGE_MAP()


// CBookAdd 消息处理程序
