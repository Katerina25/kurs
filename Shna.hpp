#pragma once
#include "Dog.hpp"

class Shna: public Dog{
public:
	~Shna();
	Shna(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Shna(const Shna& d);
	//геттеры и сеттеры
	const char* _type();
	//операторы ввода вывода
	friend std::istream& operator >>(std::istream& in, Shna& d);
	friend std::ostream& operator <<(std::ostream& out, Shna& d);
};