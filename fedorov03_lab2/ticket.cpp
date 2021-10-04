#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h" //Присоединение заголовочного файла



void ticket::setTicket() //Метод ввода
{
	printf("\n\nВведите цену билета: ");
	while (scanf("%d", &this->sum) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите пункт назначения: ");
	scanf("%s", this->punkt);
	while (getchar() != '\n');
	printf("\n\nВведите время отправления: ");
	scanf("%s", this->time);
	while (getchar() != '\n');
	printf("\n\nВведите информацию о водителе:");
	this->dr.setDriver();
}

void ticket::sozdTicket(int s, char p[15], char t[15], driver *tickdrive) //Метод создания
{
	this->sum = s;
	strcpy(this->punkt,p);
	strcpy(this->time,t);
	this->dr = *tickdrive;
}

void ticket::printTicket() //Метод вывода
{
	printf("\n\nЦена билета: %d", this->sum);
	printf("\n\nПункт назначения: %s", this->punkt);
	printf("\n\nВремя отправления: %s", this->time);
	printf("\n\nИнформация о водителе: ");
	this->dr.printDriver();
}

void ticket::saleTicket() //Метод расчета цены с учетом скидки
{
	int sl1=0;
	double sl2=0;
	printf("\n\nВведите процент скидки:");
	scanf("%d", &sl1);
	sl2 = this->sum - (this->sum * sl1 / 100);
	printf("\n\nЦена с учетом скидки %d процент(ов): %lg",sl1, sl2 );
}
