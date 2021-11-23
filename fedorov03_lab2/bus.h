#pragma once
#include "engine.h"
#include <iostream>
#define N 15
using namespace std;

class bus { //Класс автобус
private:
	int num; //Номер автобуса
	std::string mark; //Марка
	engine busengine; //Присоединение класса двигатель
public:
	void input(); //Метод для ввода 
	void init(int num, std::string mark, engine busengine); //Метод для создания 
	void output(); //Метод для вывода
};
