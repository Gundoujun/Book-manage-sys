#pragma once
#include "pch.h"


// CUser

class CUser : public CWnd
{
	DECLARE_DYNAMIC(CUser)

public:
	CUser();
	virtual ~CUser();
	CString user_account;//账号
    CString user_pwd;//密码
	static bool user_status;//权限,写成static是为了让登录后依然可用以便验证权限
	void SetCUser(CString account, CString pwd);
	void Save(ofstream& out);
	void Load(ifstream& in);

public:
	CUser(CString account, CString pwd);

protected:
	DECLARE_MESSAGE_MAP()
};


