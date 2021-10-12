#pragma once
#include "driver.h"

struct ticket {  //Класс билет
private:
	int sum; //Цена билета 
	char punkt[15]; //Пункт назначения
	char time[15]; //Время отправления
	driver dr; //Присоединение класса водитель
public:
	void input(); //Метод для ввода 
	void create(int s, char p[15], char t[15], driver tickdrive); //Метод для создания 
	void output(); //Метод для  вывода
	void sale(); //Метод для расчета цены с учетом скидки
};