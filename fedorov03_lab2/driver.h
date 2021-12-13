#pragma once
#include "date.h"
#include <iostream>
#define N 15
using namespace std;

class driver { //Класс водитель
private:
	std::string name; //Имя
	std::string lastname; //Фамилия
	date birthdate; //Присоединение структуры дата
public:
	void input(); //Метод ввода
	void output(); //Метод вывода 
	driver(std::string name, std::string lastname, date birthdate); //Конструктор с парметрами
	driver();
	driver(std::string value);
	driver(const driver& driver);
	driver& operator=(const driver& driver);
};