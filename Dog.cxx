#include "stdafx.h"
#include "Dog.hpp"

Dog::~Dog(){}
Dog::Dog(const char *name , const char *color 
	, const char *sex 
	, const char *date 
	, const char *size 
	, const char *owner 
	, const char *home 
	, const char *character 
	, const char *descrition ):
    name(name), color(color),
	sex(sex), date(date), size(size),owner(owner),
	home(home), character(character), descrition(descrition){}
Dog::Dog(const Dog& d):
    name(d.name), color(d.color),
	sex(d.sex), date(d.date), size(d.size),owner(d.owner),
	home(d.home), character(d.character), descrition(d.descrition){}
//геттеры и сеттеры
	std::string& Dog::_name(){ return name; }	
	std::string& Dog::_sex(){ return sex; }
	std::string& Dog::_date(){ return date; }
	std::string& Dog::_size(){ return size; }
	std::string& Dog::_owner(){ return owner; }
	std::string& Dog::_home(){ return home; }
	std::string& Dog::_character(){ return character; }
	std::string& Dog::_descrition(){ return descrition; }
//считывание из потока
void Dog::read(std::istream& in){
	if(!(in >> name 
		>> sex 
		>> date 
		>> size 
		>> owner 
		>> home 
		>> character 
		>> descrition)) throw Exception("Reading error"); 
}

//вывод
void Dog::print(std::ostream& out){
	 out << name 
		<< " " << sex 
		<< " " << date 
		<< " " << size 
		<< " " << owner 
		<< " " << home 
		<< " " << character 
		<< " " << descrition;
}