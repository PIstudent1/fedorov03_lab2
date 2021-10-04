#pragma once
#include "date.h"

struct engine { //Структура мотор
private:
	int num; //Серийный номер
	int pw;  //Мощность
	date cd; //Присоединение структуры дата
public:
	void setEngine(); //Функция ввода 
	void sozdEngine(int n, int pw, date *createdate); //Функция создания 
	void printEngine(); //Функция вывода 
	int kvtEngine(); //Функция перевода мощности в кВт
};