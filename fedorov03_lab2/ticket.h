#pragma once
#include "driver.h"
#include <iostream>
#define N 15
using namespace std;

class ticket {  //абстрактный класс
	//static int count; //Статическое поля
	//int id;
public:
	virtual void input() = 0 ; //Метод для ввода 
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //Метод для  вывода
	virtual void output() = 0;
	virtual void sale() = 0;  //Метод для расчета цены с учетом скидки
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};


class forchildren : private ticket {
	int sum; //Цена билета 
	std::string punkt; //Пункт назначения
	std::string type;
	int hours; //Часы
	int minutes; //Минуты
	passenger passengerticket; //Присоединение класса водитель
public:
	void input() override; //Метод для ввода 
	forchildren(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //Конструктор с параметрами
	forchildren(); //Конструктор без параметров
	forchildren(int value);//Конструктор с одним параметром
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //Метод для  вывода
	void output() override;
	int sale(int sl1) override;  //Метод для расчета цены с учетом скидки
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};


class foradult : private ticket {
	int sum; //Цена билета 
	std::string punkt; //Пункт назначения
	std::string type;
	int hours; //Часы
	int minutes; //Минуты
	passenger passengerticket; //Присоединение класса водитель
public:
	void input() override; //Метод для ввода 
	foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //Конструктор с параметрами
	foradult(); //Конструктор без параметров
	foradult(int value);//Конструктор с одним параметром
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //Метод для  вывода
	void output() override;
	int sale(int sl1) override;  //Метод для расчета цены с учетом скидки
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};
