#pragma once
#include "date.h"

class engine { //Класс двигатель
private:
	int num; //Серийный номер
	int power;  //Мощность
	date createdate; //Присоединение структуры дата
public:
	void input(); //Метод ввода 
	void init(int num1, int power1, date createdate1); //Метод создания 
	void output(); //Метод вывода 
	int tokvt(); //Метод перевода мощности в кВт
};