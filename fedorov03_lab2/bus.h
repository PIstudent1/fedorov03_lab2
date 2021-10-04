#pragma once
#include "engine.h"


class bus { //Класс автобус
private:
	int num1; //Номер автобуса
	char mark[15]; //Марка
	engine be; //Присоединение класса двигатель
public:
	void setBus(); //Метод для ввода 
	void sozdBus(int n, char ma[15], engine *buseng); //Метод для создания 
	void printBus(); //Метод для вывода
};
