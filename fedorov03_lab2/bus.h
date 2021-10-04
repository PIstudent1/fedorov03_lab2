#pragma once
#include "engine.h"


class bus { //Структура автобус
private:
	int num1; //Номер автоуса
	char mark[15]; //Марка
	engine be; //Присоединение структуры двигатель
public:
	void setBus(); //Функуция ввода 
	void sozdBus(int n, char ma[15], engine *buseng); //Функция создания 
	void printBus(); //Функция вывода
};
