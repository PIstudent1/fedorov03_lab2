#pragma once

struct date { //Структура дата
	int day; //День
	int month; //Месяц
	int year; //Год
};

struct date setDate(); //Функция ввода 
void printDate(date date1); //Функция вывода 
struct date sozdDate(int d , int m , int y); //Функция создания 
int letDate(date date1, date date2); //Функция рассчета дней между датами