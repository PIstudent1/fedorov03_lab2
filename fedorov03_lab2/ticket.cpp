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
	char punktcpy[N];
	printf("\n\nВведите пункт назначения: ");
	scanf("%s", punktcpy);
	while (getchar() != '\n');
	punkt = new char[strlen(punktcpy)];
	strcpy(punkt, punktcpy);
	printf("\n\nВведите время отправления: ");
	printf("\n\nВведите часы: ");
	while (scanf("%d", &hours) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите минуты: ");
	while (scanf("%d", &minutes) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите информацию о водителе:");
	ticketdrive.input();
}

void ticket::init(int sum1, const char punkt1[N], int hours1, int minutes1, driver ticketdrive1) //Метод создания
{
	int f = 0;
	if (sum1 < 0) {
		sum = 0;
	}
	else {
		sum = sum1;
	}
	punkt = new char[strlen(punkt1)];
	for (int i = 0; i <= strlen(punkt1); i++) {
		if (punkt1[i] == '\0') {
			strcpy(punkt, punkt1);
		}
		else {
			strcpy(punkt, "-");
		}
	}
	if (hours1 < 0 || hours1 > 23) {
		hours = 0;
	}
	else {
		hours = hours1;
	}
	if (minutes1 < 0 || minutes1 > 59) {
		minutes = 0;
	}
	else {
		minutes = minutes1;
	}
	ticketdrive = ticketdrive1;
}

void ticket::output() //Метод вывода
{
	printf("\n\nЦена билета: %d", sum);
	printf("\n\nПункт назначения: %s", punkt);
	printf("\n\nВремя отправления: %d:%d", hours, minutes);
	printf("\n\nИнформация о водителе:\n ");
	ticketdrive.output();
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
