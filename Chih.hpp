#pragma once
#include "Dog.hpp"

class Chih: public Dog{
public:
	~Chih();
	Chih(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Chih(const Chih& d);
	//������� � �������
	const char*_type();
	//��������� ����� ������
	friend std::istream& operator >>(std::istream& in, Chih& d);
	friend std::ostream& operator <<(std::ostream& out, Chih& d);
};