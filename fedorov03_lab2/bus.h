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
	bus(int num, std::string mark, engine busengine); //Конструктор с параметрами
	bus();//Конструктор без параметров
	bus(int value);//Конструктор с одним параметром
	friend std::ostream& operator<<(std::ostream& out, const bus& bus); //Метод для вывода
};
