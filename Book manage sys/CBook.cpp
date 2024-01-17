#include "pch.h"
#include "CBook.h"

// CBook

IMPLEMENT_DYNAMIC(CBook, CWnd)

CBook::CBook()
{
}

CBook::~CBook()
{
}
CBook::CBook(CString name, CString author, int num, int ava, int bor)
{
	book_name = name;
	book_author = author;
	no = num;
	avaliable = ava;
	borrow = bor;
}
void CBook::SetCBook(CString name, CString author, int num, int ava, int bor)
{
	book_name = name;
	book_author = author;
	no = num;
	avaliable = ava;
	borrow = bor;
}
void CBook::Save(ofstream& out)
{
	out << book_name << _T("\t");
	out << book_author << _T("\t");
	out << no << _T("\t");
	out << avaliable << _T("\t");
	out << borrow << _T("\t");
}
void CBook::Load(ifstream& in)
{
	in >> book_name.GetBuffer();
	in >> book_author.GetBuffer();
	in >> no;
	in >> avaliable;
	in >> borrow;
}


BEGIN_MESSAGE_MAP(CBook, CWnd)
END_MESSAGE_MAP()

