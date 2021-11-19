#pragma once
#include "engine.h"
#define N 15

class bus { //Класс автобус
private:
	int num; //Номер автобуса
	char *mark; //Марка
	engine busengine; //Присоединение класса двигатель
public:
	void input(); //Метод для ввода 
	void init(int num1, const char mark1[N], engine busengine1); //Метод для создания 
	void output(); //Метод для вывода
};
