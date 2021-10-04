#pragma once
#include "date.h"
#define N 15

class driver { //Класс водитель
private:
	char name[N]; //Имя
	char lastname[N]; //Фамилия
	date bd; //Присоединение структуры дата
public:
	void setDriver(); //Метод ввода
	void printDriver(); //Метод вывода 
	void sozdDriver(char n[15], char ln[15], date *birthdate); //Метод создания
};