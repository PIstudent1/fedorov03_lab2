#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



void engine::input() //Метод ввода 
{
	printf("\nВведите серийный номер двигателя: ");
	while (scanf("%d", &num) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите мощность двигателя в л.с.: ");
	while (scanf("%d", &pw) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите дату производства:");
	printf("\n");
	cd.input();
}

void engine::create(int n, int p, date createdate)   //Метод создания 
{
	num = n;
	pw = p;
	cd = createdate;
}

void engine::output()  //Метод вывода 
{
	printf("\n\nСерийный номер двигателя: %d", num);
	printf("\n\nМощность двигателя: %d л.с.", pw);
	printf("\n\nДата производства: ");
	cd.output();
}

int engine::tokvt() //Метод перевода мощности в кВт
{
	double ls=0.736, res=0;
	res = pw * ls;
	return res;
}
