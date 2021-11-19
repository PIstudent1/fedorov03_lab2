#pragma once
#include "date.h"
#define N 15

class driver { //Класс водитель
private:
	char *name; //Имя
	char *lastname; //Фамилия
	date birthdate; //Присоединение структуры дата
public:
	void input(); //Метод ввода
	void output(); //Метод вывода 
	void init(const char name1[N], const char lastname1[N], date birthdate1); //Метод создания
};