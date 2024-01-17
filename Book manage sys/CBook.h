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
    CString book_name;//书名
	CString book_author;//作者
	int no;//编号
	int avaliable;//可借数量
	int borrow;//已借数量
	

public:
	CBook(CString name, CString author,int num,int ava,int bor);
    void SetCBook(CString name, CString author, int num, int ava, int bor);
	void Save(ofstream& out);
	void Load(ifstream& in);
protected:
	DECLARE_MESSAGE_MAP()
};




