#pragma once
#include "driver.h"
#include <iostream>
#define N 15
using namespace std;

class ticket {  //Класс билет
private:
	static int count; //Статическое поля
	int id;
	int sum; //Цена билета 
	std::string punkt; //Пункт назначения
	int hours; //Часы
	int minutes; //Минуты
	driver ticketdrive; //Присоединение класса водитель
public:
	void input(); //Метод для ввода 
	ticket(int sum, std::string punkt, int hours, int minutes, driver ticketdrive); //Конструктор с параметрами
	ticket(); //Конструктор без параметров
	ticket(int value);//Конструктор с одним параметром
	void output(); //Метод для  вывода
	void sale();  //Метод для расчета цены с учетом скидки
	static void changeDestination(ticket &ticket, std::string punkt);
};