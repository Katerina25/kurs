#pragma once
#include "Dog.hpp"

class Hask: public Dog{
public:
	~Hask();
	Hask(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Hask(const Hask& d);
	//геттеры и сеттеры
	const char* _type();
	//операторы ввода вывода
	friend std::istream& operator >>(std::istream& in, Hask& d);
	friend std::ostream& operator <<(std::ostream& out, Hask& d);
};