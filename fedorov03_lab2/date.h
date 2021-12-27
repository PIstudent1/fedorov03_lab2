#pragma once
#include <iostream>
class date { //Класс дата
private:
	int day; //День
	int month; //Месяц
	int year; //Год
public:
	void input(); //Метод ввода 
	friend std::ostream& operator<<(std::ostream &out, const date& data); //Метод вывода 
	date(int day1, int month1, int year1); //Конструктор с параметрами
	date();//Конструктор без параметров
	date(int value);//Конструктор с одним параметром
	int* indays(date &date1); //Метод рассчета дней между датами
	friend void reset(date& date);
	int getAge();
	date operator+(int day);
	date& operator++();
	date operator++(int);
};