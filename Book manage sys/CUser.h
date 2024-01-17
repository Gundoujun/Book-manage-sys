#pragma once
#include "pch.h"


// CUser

class CUser : public CWnd
{
	DECLARE_DYNAMIC(CUser)

public:
	CUser();
	virtual ~CUser();
	CString user_account;//�˺�
    CString user_pwd;//����
	static bool user_status;//Ȩ��,д��static��Ϊ���õ�¼����Ȼ�����Ա���֤Ȩ��
	void SetCUser(CString account, CString pwd);
	void Save(ofstream& out);
	void Load(ifstream& in);

public:
	CUser(CString account, CString pwd);

protected:
	DECLARE_MESSAGE_MAP()
};


