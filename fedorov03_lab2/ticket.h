#pragma once
#include "driver.h"

struct ticket {  //Структура билет
	int sum; //Цена билета 
	char punkt[15]; //Пункт назначения
	char time[15]; //Время отправления
	driver dr; //Присоединение структуры водитель
};

struct ticket setTicket(); //Функция ввода 
struct ticket sozdTicket(int s, char p[15], char t[15], driver tickdrive); //Функция создания 
void printTicket(ticket tick1); //Функция вывода
void saleTicket(ticket tick1); //Функция расчета цены с учетом скидки