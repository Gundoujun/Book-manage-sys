// CUser.cpp: 实现文件
//

#include "Book manage sys.h"
#include "CUser.h"


// CUser

IMPLEMENT_DYNAMIC(CUser, CWnd)

CUser::CUser()
{
}

CUser::~CUser()
{
}
CUser::CUser(CString account, CString pwd)
{
	user_account = account;
	user_pwd = pwd;
	user_status = 0;
}
void CUser::SetCUser(CString account, CString pwd)
{
	user_account = account;
	user_pwd = pwd;
	user_status = 0;
}
void CUser::Save(ofstream& out)
{
	out << user_account << _T("\t");
	out << user_pwd << _T("\t");
	out << user_status << _T("\t");
}
void CUser::Load(ifstream& in)
{
	in >> user_account.GetBuffer();
	in >> user_pwd.GetBuffer();
	in >> user_status;
}


BEGIN_MESSAGE_MAP(CUser, CWnd)
END_MESSAGE_MAP()



// CUser 消息处理程序


