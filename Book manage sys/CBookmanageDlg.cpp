// CBookmanageDlg.cpp: 实现文件
//

#include "pch.h"
#include "Book manage sys.h"
#include "afxdialogex.h"
#include "CBookmanageDlg.h"
#include "CBookSearch.h"
#include "CBookChange.h"
#include "CBookAdd.h"
#include "CBookDelete.h"


// CBookmanageDlg 对话框

IMPLEMENT_DYNAMIC(CBookmanageDlg, CDialogEx)

CBookmanageDlg::CBookmanageDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(ID_BOOK_MANAGE_DIALOG, pParent)
{

}

CBookmanageDlg::~CBookmanageDlg()
{
}

void CBookmanageDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBookmanageDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CBookmanageDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CBookmanageDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CBookmanageDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CBookmanageDlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CBookmanageDlg 消息处理程序


void CBookmanageDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CBookSearch dlg;     
	dlg.DoModal();
}


void CBookmanageDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CBookChange dlg;  //待办：权限设置
	dlg.DoModal();
}


void CBookmanageDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CBookAdd dlg;
	dlg.DoModal();
}


void CBookmanageDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CBookDelete dlg;
	dlg.DoModal();
}
