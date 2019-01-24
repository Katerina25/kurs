#include "stdafx.h"
#include "Pud.hpp"
  
Pud::~Pud(){}
Pud::Pud(const char *name , const char *color 
		, const char *sex 
		, const char *date 
		, const char *size 
		, const char *owner 
		, const char *home 
		, const char *character 
		, const char *descrition )
		:Dog(name, color, sex, date, size, owner, home, character, descrition){}
Pud::Pud(const Pud& d):Dog(d.name.c_str(), d.color.c_str(), d.sex.c_str(),
	d.date.c_str(), d.size.c_str(), d.owner.c_str(), d.home.c_str(), d.character.c_str(), d.descrition.c_str()){}

const char* Pud::_type(){ return "Pud"; }

std::istream& operator >>(std::istream& in, Pud& d){
	try{ 
		d.read(in);
	}
	catch(const Exception& ex){
		throw ex;
	}
	return in;
}

std::ostream& operator <<(std::ostream& out, Pud& d){
	 d.print(out);
	 return out;
}