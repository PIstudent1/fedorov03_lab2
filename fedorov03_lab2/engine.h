#pragma once
#include "date.h"

class engine { //Класс двигатель
private:
	int num; //Серийный номер
	int power;  //Мощность
	date createdate; //Присоединение структуры дата
public:
	void input(); //Метод ввода 
	engine(int num1, int power1, date createdate1); //Конструктор с праметрами
	engine();//Конструктор без параметров
	engine(int value);
	void output(); //Метод вывода 
	int tokvt(); //Метод перевода мощности в кВт
};