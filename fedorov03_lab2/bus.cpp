#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::input() //метод ввода 
{
	printf("\n\nвведите номер автобуса: ");
	while (scanf("%d", &num1) !=1) {
		while (getchar() != '\n');
		printf("ошибка. введите число: ");
	}
	printf("\n\nвведите марку автобуса: ");
	scanf("%s", mark);
	while (getchar() != '\n');
	printf("\n\nвведите данные о двигателе:\n");
	be.input();
}

void bus::create(int n, char ma[15], engine buseng) //метод создания 
{
	num1 = n;
	strcpy(mark, ma);
	be = buseng;
}

void bus::output() //метод вывода
{
	printf("\n\nномер автобуса: %d", num1);
	printf("\n\nмарка автобуса: %s", mark);
	printf("\n\nданные о двигателе:");
	be.output();
}

