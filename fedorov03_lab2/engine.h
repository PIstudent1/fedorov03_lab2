#pragma once
#include "date.h"

struct engine { //Класс двигатель
private:
	int num; //Серийный номер
	int pw;  //Мощность
	date cd; //Присоединение структуры дата
public:
	void setEngine(); //Метод ввода 
	void sozdEngine(int n, int pw, date *createdate); //Метод создания 
	void printEngine(); //Метод вывода 
	int kvtEngine(); //Метод перевода мощности в кВт
};