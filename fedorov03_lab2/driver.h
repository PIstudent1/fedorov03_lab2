#pragma once
#include "date.h"
#define N 15

class driver { //Структура водитель
private:
	char name[N]; //Имя
	char lastname[N]; //Фамилия
	date bd; //Присоединение структуры дата
public:
	void setDriver(); //Функция ввода
	void printDriver(); //Функция вывода 
	void sozdDriver(char n[15], char ln[15], date *birthdate); //Функция создания
};