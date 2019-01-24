#include "stdafx.h"
#include "Shna.hpp"
  
Shna::~Shna(){}
Shna::Shna(const char *name , const char *color 
		, const char *sex 
		, const char *date 
		, const char *size 
		, const char *owner 
		, const char *home 
		, const char *character 
		, const char *descrition )
		:Dog(name, color, sex, date, size, owner, home, character, descrition){}
Shna::Shna(const Shna& d):Dog(d.name.c_str(), d.color.c_str(), d.sex.c_str(),
	d.date.c_str(), d.size.c_str(), d.owner.c_str(), d.home.c_str(), d.character.c_str(), d.descrition.c_str()){}

const char* Shna::_type(){ return "Shna"; }

std::istream& operator >>(std::istream& in, Shna& d){
	try{ 
		d.read(in);
	}
	catch(const Exception& ex){
		throw ex;
	}
	return in;
}

std::ostream& operator <<(std::ostream& out, Shna& d){
	 d.print(out);
	 return out;
}