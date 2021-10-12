#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h" //Присоединение заголовочного файла



void ticket::input() //Метод ввода
{
	printf("\n\nВведите цену билета: ");
	while (scanf("%d", &sum) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите пункт назначения: ");
	scanf("%s", punkt);
	while (getchar() != '\n');
	printf("\n\nВведите время отправления: ");
	scanf("%s", time);
	while (getchar() != '\n');
	printf("\n\nВведите информацию о водителе:");
	dr.input();
}

void ticket::create(int s, char p[15], char t[15], driver tickdrive) //Метод создания
{
	sum = s;
	strcpy(punkt,p);
	strcpy(time,t);
	dr = tickdrive;
}

void ticket::output() //Метод вывода
{
	printf("\n\nЦена билета: %d", sum);
	printf("\n\nПункт назначения: %s", punkt);
	printf("\n\nВремя отправления: %s", time);
	printf("\n\nИнформация о водителе: ");
	dr.output();
}

void ticket::sale() //Метод расчета цены с учетом скидки
{
	int sl1=0;
	double sl2=0;
	printf("\n\nВведите процент скидки:");
	scanf("%d", &sl1);
	sl2 = this->sum - (this->sum * sl1 / 100);
	printf("\n\nЦена с учетом скидки %d процент(ов): %lg",sl1, sl2 );
}
