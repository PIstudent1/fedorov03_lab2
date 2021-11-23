#pragma once

class date { //Класс дата
private:
	int day; //День
	int month; //Месяц
	int year; //Год
public:
	void input(); //Метод ввода 
	void output(); //Метод вывода 
	void init(int day1, int month1, int year1); //Метод создания 
	int* indays(date &date1); //Метод рассчета дней между датами
	friend void reset(date& date);
	date operator+(int day);
	date(int day,int month, int year);
	date& operator++();
	date operator++(int);
};