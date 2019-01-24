#include "stdafx.h"
#include "Chih.hpp"
  
Chih::~Chih(){}
Chih::Chih(const char *name , const char *color 
		, const char *sex 
		, const char *date 
		, const char *size 
		, const char *owner 
		, const char *home 
		, const char *character 
		, const char *descrition )
		:Dog(name, color, sex, date, size, owner, home, character, descrition){}
Chih::Chih(const Chih& d):Dog(d.name.c_str(), d.color.c_str(), d.sex.c_str(),
	d.date.c_str(), d.size.c_str(), d.owner.c_str(), d.home.c_str(), d.character.c_str(), d.descrition.c_str()){}

const char* Chih::_type(){ return "Chih"; }

std::istream& operator >>(std::istream& in, Chih& d){
	try{ 
		d.read(in);
	}
	catch(const Exception& ex){
		throw ex;
	}
	return in;
}

std::ostream& operator <<(std::ostream& out, Chih& d){
	 d.print(out);
	 return out;
}