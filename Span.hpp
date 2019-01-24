#pragma once
#include "Dog.hpp"

class Span: public Dog{
public:
	~Span();
	Span(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Span(const Span& d);
	//геттеры и сеттеры
	const char* _type();
	//операторы ввода вывода
	friend std::istream& operator >>(std::istream& in, Span& d);
	friend std::ostream& operator <<(std::ostream& out, Span& d);
};