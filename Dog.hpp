#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Dog{
public:
	virtual ~Dog();
	Dog(const char *name = "", const char *color = ""
		, const char *sex = ""
		, const char *date = ""
		, const char *size = ""
		, const char *owner = ""
		, const char *home = ""
		, const char *character = ""
		, const char *descrition = "");
	Dog(const Dog& d);
	//шеттеры и сеттеры
	virtual const char* _type() = 0;
	std::string& _name();	
	std::string& _sex();
	std::string& _date();
	std::string& _size();
	std::string& _owner();
	std::string& _home();
	std::string& _character();
	std::string& _descrition();
	//считывание из потока
	void read(std::istream& in);
	//вывод
	void print(std::ostream& out);
protected:
	std::string name;//кличка
	std::string color;//окрас
	std::string sex;//пол
	std::string date;//дата рождения
	std::string size;//размеры
	std::string owner;//имя владельца
	std::string home;//наименование питомника
	std::string character;//характер
	std::string descrition;//описание
};