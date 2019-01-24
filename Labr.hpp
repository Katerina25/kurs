#pragma once
#include "Dog.hpp"

class Labr: public Dog{
public:
	~Labr();
	Labr(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Labr(const Labr& d);
	//������� � �������
	const char* _type();
	//��������� ����� ������
	friend std::istream& operator >>(std::istream& in, Labr& d);
	friend std::ostream& operator <<(std::ostream& out, Labr& d);
};