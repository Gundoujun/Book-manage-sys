#pragma once
#include"pch.h"

class CBook
{
};
// CBook

class CBook : public CWnd
{
	DECLARE_DYNAMIC(CBook)

public:
	CBook();
	virtual ~CBook();
    CString book_name;//����
	CString book_author;//����
	int no;//���
	int avaliable;//�ɽ�����
	int borrow;//�ѽ�����
	

public:
	CBook(CString name, CString author,int num,int ava,int bor);
    void SetCBook(CString name, CString author, int num, int ava, int bor);
	void Save(ofstream& out);
	void Load(ifstream& in);
protected:
	DECLARE_MESSAGE_MAP()
};




