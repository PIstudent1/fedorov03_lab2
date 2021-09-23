#pragma once
#include "date.h"

struct engine { //Структура мотор
	int num; //Серийный номер
	int pw;  //Мощность
	date cd; //Присоединение структуры дата
};

struct engine setEngine(); //Функция ввода 
struct engine sozdEngine(); //Функция создания 
void printEngine(engine eng1); //Функция вывода 
void  kvtEngine(engine eng1); //Функция перевода мощности в кВт
