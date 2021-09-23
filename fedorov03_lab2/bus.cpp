#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"

bus bu;

struct bus setBus() //Функция ввода 
{
	printf("\n\nВведите номер автобуса: ");
	while (scanf("%d", &bu.num1) !=1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите марку автобуса: ");
	scanf("%s", bu.mark);
	while (getchar() != '\n');
	printf("\n\nВведите данные о двигателе:\n");
	bu.be = setEngine();
	return bu;
}

struct bus sozdBus() //Функция создания 
{
	bu.num1 = 256;
	strcpy(bu.mark, "Honda");
	bu.be = sozdEngine();
	return bu;
}

void printBus(bus bus1) //Функция вывода
{
	printf("\n\nНомер автобуса: %d", bus1.num1);
	printf("\n\nМарка автобуса: %s", bus1.mark);
	printf("\n\nДанные о двигателе:");
	printEngine(bus1.be);
}

