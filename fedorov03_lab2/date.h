#pragma once

class date { //Класс дата
private:
	int day; //День
	int month; //Месяц
	int year; //Год
public:
	void setDate(); //Метод ввода 
	void printDate(); //Метод вывода 
	void sozdDate(int d, int m, int y); //Метод создания 
	int letDate(date *date1); //Метод рассчета дней между датами
};

