#pragma once
#include "Dog.hpp"

class Pud: public Dog{
public:
	~Pud();
	Pud(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Pud(const Pud& d);
	//������� � �������
	const char* _type();
	//��������� ����� ������
	friend std::istream& operator >>(std::istream& in, Pud& d);
	friend std::ostream& operator <<(std::ostream& out, Pud& d);
};