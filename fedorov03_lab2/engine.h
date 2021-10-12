#pragma once
#include "date.h"

struct engine { //Класс двигатель
private:
	int num; //Серийный номер
	int pw;  //Мощность
	date cd; //Присоединение структуры дата
public:
	void input(); //Метод ввода 
	void create(int n, int p, date createdate); //Метод создания 
	void output(); //Метод вывода 
	int tokvt(); //Метод перевода мощности в кВт
};