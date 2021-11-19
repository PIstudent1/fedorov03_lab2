#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::input() //метод ввода 
{
	printf("\n\nвведите номер автобуса: ");
	while (scanf("%d", &num) !=1) {
		while (getchar() != '\n');
		printf("ошибка. введите число: ");
	}
	printf("\n\nвведите марку автобуса: ");
	scanf("%s", mark);
	while (getchar() != '\n');
	printf("\n\nвведите данные о двигателе:\n");
	busengine.input();
}

void bus::init(int num1, const char mark1[N], engine busengine1) //метод создания 
{
	if (num1 < 0) {
		num = 0;
	}

	else {
		num = num1;
	}
	mark = new char[strlen(mark1)];
	for (int i = 0; i <= strlen(mark1); i++) {
		if (mark1[i] == '\0') {
			strcpy(mark, mark1);
		}
		else {
			strcpy(mark, "-");
		}
	}
	busengine = busengine1;
}

void bus::output() //метод вывода
{
	printf("\n\nномер автобуса: %d", num);
	printf("\n\nмарка автобуса: %s", mark);
	printf("\n\nданные о двигателе:");
	busengine.output();
}

