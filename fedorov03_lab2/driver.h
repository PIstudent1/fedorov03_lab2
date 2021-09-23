#pragma once
#include "date.h"
#define N 15

struct driver { //Структура водитель
	char name[N]; //Имя
	char lastname[N]; //Фамилия
	date bd; //Присоединение структуры дата
};

struct driver setDriver(); //Функция ввода
void printDriver(driver drive1); //Функция вывода 
struct driver sozdDriver(); //Функция создания
