// CBookDelete.cpp: 实现文件
//

#include "pch.h"
#include "Book manage sys.h"
#include "afxdialogex.h"
#include "CBookDelete.h"


// CBookDelete 对话框

IMPLEMENT_DYNAMIC(CBookDelete, CDialogEx)

CBookDelete::CBookDelete(CWnd* pParent /*=nullptr*/)
	: CDialogEx(I_DELETE_DIALOG, pParent)
{

}

CBookDelete::~CBookDelete()
{
}

void CBookDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBookDelete, CDialogEx)
END_MESSAGE_MAP()


// CBookDelete 消息处理程序
