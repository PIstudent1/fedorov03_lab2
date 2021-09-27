#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h" //Присоединение заголовочного файла



struct ticket setTicket() //Функция ввода
{
	ticket tick;
	printf("\n\nВведите цену билета: ");
	while (scanf("%d", &tick.sum) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите пункт назначения: ");
	scanf("%s", tick.punkt);
	while (getchar() != '\n');
	printf("\n\nВведите время отправления: ");
	scanf("%s", tick.time);
	while (getchar() != '\n');
	printf("\n\nВведите информацию о водителе:");
	tick.dr = setDriver();
	return tick;
}

struct ticket sozdTicket(int s, char p[15], char t[15], driver tickdrive) //Функция создания
{
	ticket tick;
	tick.sum = s;
	strcpy(tick.punkt,p);
	strcpy(tick.time,t);
	tick.dr = tickdrive;
	return tick;
}

void printTicket(ticket tick1) //Функция вывода
{
	printf("\n\nЦена билета: %d", tick1.sum);
	printf("\n\nПункт назначения: %s", tick1.punkt);
	printf("\n\nВремя отправления: %s", tick1.time);
	printf("\n\nИнформация о водителе: ");
	printDriver(tick1.dr);
}

void saleTicket(ticket tick1) //Функция расчета цены с учетом скидки
{
	ticket tick;
	int sl1=0;
	double sl2=0;
	printf("\n\nВведите процент скидки:");
	scanf("%d", &sl1);
	sl2 = tick1.sum - (tick1.sum * sl1 / 100);
	printf("\n\nЦена с учетом скидки %d процент(ов): %lg",sl1, sl2 );
}
