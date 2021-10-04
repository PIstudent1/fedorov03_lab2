#pragma once

class date { //Структура дата
private:
	int day; //День
	int month; //Месяц
	int year; //Год
public:
	void setDate(); //Функция ввода 
	void printDate(); //Функция вывода 
	void sozdDate(int d, int m, int y); //Функция создания 
	int letDate(date *date1); //Функция рассчета дней между датами
};

