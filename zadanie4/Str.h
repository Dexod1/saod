#pragma once
#include <iostream>
using namespace std;
class Str 
{
	char* m_pszText;
public:
	Str() 	//Конструктор “по умолчанию” (default)*
	{
		m_pszText = new char[1] {0};
	}

	Str(const char* p)
	{
		if (p) {
			m_pszText = new char[strlen(p) + 1];
			strcpy_s(m_pszText, strlen(p) + 1, p);
		}
		else
			m_pszText = new char[1] {0};
	}

	Str (const Str &s) //Константная ссылка на объект
	{
		m_pszText = new char[strlen(s.m_pszText) + 1];
		strcpy_s (m_pszText, strlen(s.m_pszText) + 1, s.m_pszText);
	}

	const Str& operator = (const Str& s) //Константная ссылка на объект
	{
		if (&s == this) return *this;
		delete[] m_pszText;	 //Освобождаем текущие данные					//Дальше просто копирование
		m_pszText = new char[strlen(s.m_pszText) + 1];
		strcpy_s(m_pszText,
			strlen(s.m_pszText) + 1,
			s.m_pszText);
		return *this;
	}

	Str& operator +=(const char* sz)
	{
		char* oldStr = new char[strlen(m_pszText) + 1];
		strcpy_s(oldStr, strlen(m_pszText) + 1, m_pszText);

		delete[] m_pszText;
		m_pszText = new char[strlen(m_pszText) + strlen(sz) + 1];

		for (int i = 0; i < strlen(m_pszText) + strlen(sz) + 1; i++)
			m_pszText[i] = i < strlen(oldStr) ? oldStr[i] : sz[i - strlen(oldStr)];

		delete[] oldStr;
		return *this;
	}

	Str operator +(const char* sz) const {
		char* newText = new char [strlen(m_pszText) + strlen(sz) + 1];

		for (int i = 0; i < strlen(newText)+1; i++)
			newText[i] = i < strlen(m_pszText) ? m_pszText[i] : sz[i - strlen(m_pszText)];

		Str result(newText);
		delete[] newText;
		return result;
	}

	operator const char* ()const { return m_pszText; }

	~Str() { delete[]m_pszText; }
};

