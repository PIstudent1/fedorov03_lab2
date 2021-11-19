#pragma once
#include "driver.h"
#define N 15


class ticket {  //Класс билет
private:
	int sum; //Цена билета 
	char *punkt; //Пункт назначения
	int hours; //Часы
	int minutes; //Минуты
	driver ticketdrive; //Присоединение класса водитель
public:
	void input(); //Метод для ввода 
	void init(int sum1, const char punkt1[N], int hours1, int minutes1, driver ticketdrive1); //Метод для создания 
	void output(); //Метод для  вывода
	void sale(); //Метод для расчета цены с учетом скидки
};