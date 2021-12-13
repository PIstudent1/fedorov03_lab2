#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "ticket.h" //Присоединение заголовочного файла


int ticket::count = 0;
void ticket::input() //Метод ввода
{
	count++;
	id = count;
	printf("\n\nВведите цену билета: ");
	while (scanf("%d", &sum) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите пункт назначения: ");
	cin >> punkt;
	while (getchar() != '\n');
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

ticket::ticket(int sum, std::string punkt, int hours, int minutes, driver ticketdrive) //Метод создания
{
	int f = 0;
	if (sum < 0) {
		this->sum = 0;
	}
	else {
		this->sum = sum;
	}
	for (int i = 0; i <= punkt.size(); i++) {
		if (punkt[i] == '\0') {
			this->punkt = punkt;
		}
		else {
			this->punkt = "-";
		}
	}
	if (hours < 0 || hours > 23) {
		this->hours = 0;
	}
	else {
		this->hours = hours;
	}
	if (minutes < 0 || minutes > 59) {
		this->minutes = 0;
	}
	else {
		this->minutes = minutes;
	}
	this->ticketdrive = ticketdrive;
	count++;
	id = count;
}

ticket::ticket() {}; //Конструктор без параметров

ticket::ticket(int value) {
	this->sum = value;
}

void ticket::output() //Метод вывода
{
	printf("\n\nИнформация о билете: ");
	printf("\n\nId: %d", id);
	printf("\n\nЦена билета: %d", sum);
	printf("\n\nПункт назначения: ");
	cout << punkt << endl;
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

void ticket::changeDestination(ticket& ticket, std::string punkt) { // Статический метод

	if (punkt.size() != 0) {
		ticket.punkt = punkt;
	}
}