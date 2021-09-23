#pragma once

struct date { //Структура дата
	int day; //День
	int month; //Месяц
	int year; //Год
};

struct date setDate(); //Функция ввода 
void printDate(date date1); //Функция вывода 
struct date sozdDate(); //Функция создания 
void letDate(date date1); //Функция рассчета возраста