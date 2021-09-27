#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



struct engine setEngine() //Функция ввода 
{
	engine eng;
	printf("\nВведите серийный номер двигателя: ");
	while (scanf("%d", &eng.num) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите мощность двигателя в л.с.: ");
	while (scanf("%d", &eng.pw) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите дату производства:");
	printf("\n");
	eng.cd = setDate();
	return eng;
}

struct engine sozdEngine(int n, int pw, date createdate)   //Функция создания 
{
	engine eng;
	eng.num = n;
	eng.pw = pw;
	eng.cd = createdate;
	return eng;
}

void printEngine(engine eng1)  //Функция вывода 
{
	printf("\n\nСерийный номер двигателя: %d", eng1.num);
	printf("\n\nМощность двигателя: %d л.с.", eng1.pw);
	printf("\n\nДата производства: ");
	printDate(eng1.cd);
}

int kvtEngine(engine eng1) //Функция перевода мощности в кВт
{
	double ls=0.736, res=0;
	res = eng1.pw * ls;
	return res;
}
