#include "stdafx.h"
#include "Hask.hpp"
  
Hask::~Hask(){}
Hask::Hask(const char *name , const char *color 
		, const char *sex 
		, const char *date 
		, const char *size 
		, const char *owner 
		, const char *home 
		, const char *character 
		, const char *descrition )
		:Dog(name, color, sex, date, size, owner, home, character, descrition){}
Hask::Hask(const Hask& d):Dog(d.name.c_str(), d.color.c_str(), d.sex.c_str(),
	d.date.c_str(), d.size.c_str(), d.owner.c_str(), d.home.c_str(), d.character.c_str(), d.descrition.c_str()){}

const char* Hask::_type(){ return "Hask"; }

std::istream& operator >>(std::istream& in, Hask& d){
	try{ 
		d.read(in);
	}
	catch(const Exception& ex){
		throw ex;
	}
	return in;
}

std::ostream& operator <<(std::ostream& out, Hask& d){
	 d.print(out);
	 return out;
}