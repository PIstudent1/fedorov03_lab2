#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "engine.h"

struct engine eng;

struct engine setEngine()
{
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

struct engine sozdEngine()
{
	eng.num = 1;
	eng.pw = 60;
	eng.cd = sozdDate();
	return eng;
}

void printEngine(engine eng1)
{
	printf("\n\nСерийный номер двигателя: %d", eng1.num);
	printf("\n\nМощность двигателя: %d л.с.", eng1.pw);
	printf("\n\nДата производства:");
	printDate(eng1.cd);
}

void kvtEngine(engine eng1)
{
	double ls=0.736, res=0;
	res = eng1.pw * ls;
	printf("\n\nМощность двигателя в кВт: %d", res);
}
