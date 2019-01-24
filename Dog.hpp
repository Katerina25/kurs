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
	//������� � �������
	virtual const char* _type() = 0;
	std::string& _name();	
	std::string& _sex();
	std::string& _date();
	std::string& _size();
	std::string& _owner();
	std::string& _home();
	std::string& _character();
	std::string& _descrition();
	//���������� �� ������
	void read(std::istream& in);
	//�����
	void print(std::ostream& out);
protected:
	std::string name;//������
	std::string color;//�����
	std::string sex;//���
	std::string date;//���� ��������
	std::string size;//�������
	std::string owner;//��� ���������
	std::string home;//������������ ���������
	std::string character;//��������
	std::string descrition;//��������
};