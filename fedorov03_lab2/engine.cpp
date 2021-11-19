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
	while (scanf("%d", &power) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите дату производства:");
	printf("\n");
	createdate.input();
}

void engine::init(int num1, int power1, date createdate1)   //Метод создания 
{
	if (num1 < 0) {
		num = 0;
	}
	else {
		num = num1;
	}
	if (power1 < 0) {
		power = 0;
	}
	else {
		power = power1;
	}
	createdate = createdate1;
}

void engine::output()  //Метод вывода 
{
	printf("\n\nСерийный номер двигателя: %d", num);
	printf("\n\nМощность двигателя: %d л.с.", power);
	printf("\n\nДата производства: ");
	createdate.output();
}

int* engine::tokvt() //Метод перевода мощности в кВт
{
	double ls=0.736, res=0;
	res = power * ls;
	return &res;
}
