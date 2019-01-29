// ConsoleApplication3.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"

#include "Keeper.hpp"
#include "Chih.hpp"
#include "Hask.hpp"
#include "Labr.hpp"
#include "Pud.hpp"
#include "Shna.hpp"
#include "Span.hpp"
#include <fstream>

using namespace std;

struct DogTypes{
    //получение породы по типу
	static const char* get(const string& a){
		if(a == "Span"){
			return "спаниель";
		}
		if(a == "Shna"){
			return "шнауцер";
		}
		if(a == "Pud"){
			return "пудель";
		}
		if(a == "Labr"){
			return "лабрадор";
		}
		if(a == "Hask"){
			return "хаски";
		}
		if(a == "Chih"){
			return "чихуахуа";
		}
		return "";
	}
};

void load(Keeper<Dog*>& dogs){
	ifstream in("data"), _in("types");
	if(!in || !_in){
		return;
	}
	string type;
	while(_in >> type){
		if(type == "Span"){
			try{
				Span tmp;
				in >> tmp;
				dogs.Add(new Span(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(type == "Shna"){
			try{
				Shna tmp;
				in >> tmp;
				dogs.Add(new Shna(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(type == "Pud"){
			try{
				Pud tmp;
				in >> tmp;
				dogs.Add(new Pud(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(type == "Labr"){
			try{
				Labr tmp;
				in >> tmp;
				dogs.Add(new Labr(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(type == "Hask"){
			try{
				Hask tmp;
				in >> tmp;
				dogs.Add(new Hask(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(type == "Chih"){
			try{
				Chih tmp;
				in >> tmp;
				dogs.Add(new Chih(tmp));
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else{
			continue;
		}
	}
}

void save(Keeper<Dog*>& dogs){
	ofstream out("data"), _out("types");
	if(!out || !_out){
		return;
	}
	for(int i = 0; i < dogs.Size(); ++i){
		if(dogs[i]->_type() == "Span"){
			out << *static_cast<Span*>(dogs[i]) << '\n';
		}
		else if(dogs[i]->_type() == "Shna"){
			out << *static_cast<Shna*>(dogs[i]) << '\n';
		}
		else if(dogs[i]->_type() == "Pud"){
			out << *static_cast<Pud*>(dogs[i]) << '\n';
		}
		else if(dogs[i]->_type() == "Labr"){
			out << *static_cast<Labr*>(dogs[i]) << '\n';
		}
		else if(dogs[i]->_type() == "Hask"){
			out << *static_cast<Hask*>(dogs[i]) << '\n';
		}
		else if(dogs[i]->_type() == "Chih"){
			out << *static_cast<Chih*>(dogs[i]) << '\n';
		}
		else{
			continue;
		}
		_out << dogs[i]->_type() << '\n';  
	}
}



int main(){
	Keeper<Dog*> dogs;
	setlocale(LC_ALL, "");
	load(dogs);
	while(true){
		system("cls");
		cout << "1. добавить\n2. удалить\n3. редактировать\n4. отобразить\n";
		int a;
		cin >> a;
		
		if(a == 1){
			cout << "1. спаниель\n2. чихуахуа\n3. шнауцер\n4. пудель\n5. лабрадор\n6. хаски\n";
			int b;
			cin >> b;
			if(b == 1){
				try{
					Span tmp;
					cin >> tmp;
					dogs.Add(new Span(tmp));
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(b == 3){
				try{
					Shna tmp;
					cin >> tmp;
					dogs.Add(new Shna(tmp));
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(b == 4){
				try{
					Pud tmp;
					cin >> tmp;
					dogs.Add(new Pud(tmp));
			    }
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(b == 5){
				try{
					Labr tmp;
					cin >> tmp;
					dogs.Add(new Labr(tmp));
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(b == 6){
				try{
					Hask tmp;
					cin >> tmp;
					dogs.Add(new Hask(tmp));
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			if(b == 2){
				try{
					Chih tmp;
					cin >> tmp;
					dogs.Add(new Chih(tmp));
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
		}
		else if(a == 2){
			cout << "¬ведите индекс: ";
			int b;
			cin >> b;
			try{
				dogs.Remove(b);
			}
			catch(const Exception& ex){
				cout << ex.what();
			}
		}
		else if(a == 3){
			cout << "¬ведите индекс: ";
			int i;
			cin >> i;
			try {
				dogs.operator[](i);
			}
			catch (const Exception& ex) {
				cout << ex.what();
			
			}
			
			if(dogs[i]->_type() == "Span"){
				
				try{

				cin >> *static_cast<Span*>(dogs[i]);
			}
				catch (const Exception& ex) {
					cout << ex.what();
				}
		}
		else if(dogs[i]->_type() == "Shna"){
				try{
					cin >> *static_cast<Shna*>(dogs[i]);
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(dogs[i]->_type() == "Pud"){
				try{
					cin >> *static_cast<Pud*>(dogs[i]);
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(dogs[i]->_type() == "Labr"){
				try{
					cin >> *static_cast<Labr*>(dogs[i]);
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(dogs[i]->_type() == "Hask"){
				try{
					cin >> *static_cast<Hask*>(dogs[i]);
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
			else if(dogs[i]->_type() == "Chih"){
				try{
					cin >> *static_cast<Chih*>(dogs[i]);
				}
				catch(const Exception& ex){
					cout << ex.what();
				}
			}
		}
		else if(a ==4){
			for(int i = 0; i < dogs.Size(); ++i){
				cout << DogTypes::get(dogs[i]->_type()) << '\n';
				if(dogs[i]->_type() == "Span"){
					cout << *static_cast<Span*>(dogs[i]) << '\n';
				}
				else if(dogs[i]->_type() == "Shna"){
					cout << *static_cast<Shna*>(dogs[i]) << '\n';
				}
				else if(dogs[i]->_type() == "Pud"){
					cout << *static_cast<Pud*>(dogs[i]) << '\n';
				}
				else if(dogs[i]->_type() == "Labr"){
					cout << *static_cast<Labr*>(dogs[i]) << '\n';
				}
				else if(dogs[i]->_type() == "Hask"){
					cout << *static_cast<Hask*>(dogs[i]) << '\n';
				}
				else if(dogs[i]->_type() == "Chih"){
					cout << *static_cast<Chih*>(dogs[i]) << '\n';
				}				  
			}
		}
		save(dogs);
		cout << '\n';
		system("pause");
	}
}