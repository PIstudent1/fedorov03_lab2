#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "ticket.h" //Присоединение заголовочного файла


//int ticket::count = 0;
void forchildren::input() //Метод ввода
{
	/*count++;
	id = count;*/
	do {
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
		printf("\n\nВведите информацию о пассажире:");
		passengerticket.input();
	} while (passengerticket.getAge() > 12);
}

forchildren::forchildren(int sum, std::string punkt, int hours, int minutes, passenger passengerticket) //Метод создания
{
	int f = 0;
	f = passengerticket.getAge();
	if (f < 12) {
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
		this->passengerticket = passengerticket;
	}
	else {
		printf("\nВозраст пассажира больше 12! Это должен быть взрослый билет!");
	}
	/*count++;
	id = count;*/
}

forchildren::forchildren() {}; //Конструктор без параметров

forchildren::forchildren(int value) {
	this->sum = value;
}

//
//std::ostream& operator<<(std::ostream& out, const ticket& ticket) {
//
//	out << "\nЦена билета: " << ticket.sum << "\nПункт назначения: " << ticket.punkt << "\nВремя отправления: " << ticket.hours << ":" << ticket.minutes << "\nИнформация о пассажире: " << ticket.passengerticket <<"";
//	return out;
//}

void forchildren::sale(int sl1) //Метод расчета цены с учетом скидки
{
	int sl2=0;
	sl2 = this->sum - (this->sum * sl1 / 100);
	return sl2;
}

void forchildren::output(){
	int a = 0;
	printf("\nИнформация о билете:");
	a = this->sum.sale(30);
	printf("\nЦена с учетом скидки(30%): %d", a);
	printf("\nПункт назначения: %d");
	cout << this->punkt << endl;
	printf("\nВремя отправления: %d:%d", hours,minutes);
	printf("\nИнформация о пасажире: ");
	cout << this->passengerticket << "\n";
}

//void ticket::changeDestination(ticket& ticket, std::string punkt) { // Статический метод
//
//	if (punkt.size() != 0) {
//		ticket.punkt = punkt;
//	}
//}

//int ticket::count = 0;

void foradult::input() //Метод ввода
{
	/*count++;
	id = count;*/
	do {
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
		printf("\n\nВведите информацию о пассажире:");
		passengerticket.input();
	} while (passengerticket.getAge() < 12);
}

foradult::foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket) //Метод создания
{
	int f = 0;
	f = passengerticket.getAge();
	if (f>12) {
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
		this->passengerticket = passengerticket;
	}
	else {
		printf("\nВозраст пассажира меньше 12! Это должен быть детский билет!");
	}
	/*count++;
	id = count;*/
}

foradult::foradult() {}; //Конструктор без параметров

foradult::foradult(int value) {
	this->sum = value;
}
//
//std::ostream& operator<<(std::ostream& out, const ticket& ticket) {
//
//	out << "\nЦена билета: " << ticket.sum << "\nПункт назначения: " << ticket.punkt << "\nВремя отправления: " << ticket.hours << ":" << ticket.minutes << "\nИнформация о пассажире: " << ticket.passengerticket <<"";
//	return out;
//}

int foradult::sale(int sl2) //Метод расчета цены с учетом скидки
{
	int sl2 = 0;
	sl2 = this->sum - (this->sum * sl1 / 100);
	return sl2;
}

void foradult::output() {
	printf("\nИнформация о билете:");
	printf("\nЦена: %d", this->sum);
	printf("\nПункт назначения: %d");
	cout << this->punkt << endl;
	printf("\nВремя отправления: %d:%d", hours, minutes);
	printf("\nИнформация о пасажире: ");
	cout << this->passengerticket << "\n";
}

//void ticket::changeDestination(ticket& ticket, std::string punkt) { // Статический метод
//
//	if (punkt.size() != 0) {
//		ticket.punkt = punkt;
//	}
//}







