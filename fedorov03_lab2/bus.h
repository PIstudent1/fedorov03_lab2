#pragma once
#include "engine.h"


struct bus { //Структура автобус
	int num1; //Номер автоуса
	char mark[15]; //Марка
	engine be; //Присоединение структуры двигатель
};

struct bus setBus(); //Функуция ввода 
struct bus sozdBus(int n, char ma[15], engine buseng); //Функция создания 
void printBus(bus bus1); //Функция вывода
