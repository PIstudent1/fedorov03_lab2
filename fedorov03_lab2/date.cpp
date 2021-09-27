#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <numeric>
#include "date.h"
using namespace std;

struct date setDate() { //Функция ввода 
	date data;
	printf("\nВведите день: ");
	while (scanf("%d", &data.day)!=1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите месяц: ");
	while (scanf("%d", &data.month)!=1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите год: ");
	while (scanf("%d", &data.year)!=1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	return data;
}

void printDate(date date1) { //Фукция вывода 
	printf("%d.%d.%d", date1.day, date1.month, date1.year);
}


struct date sozdDate(int d, int m, int y) { //Функция создания 
	date data;
	data.day = d;
	data.month = m;
	data.year = y;
	return data;
}

int letDate(date date1, date date2){  //Функция рассчета дней между датами
	int sum, sum1;
	if (date1.month < 3) {
		date1.year--, date1.month += 12;
	}
	sum=365 * date1.year + date1.year / 4 - date1.year / 100 + date1.year / 400 + (153 * date1.month - 457) / 5 + date1.day - 306;
	if (date2.month < 3) {
		date2.year--, date2.month += 12;
	}
	sum1 = 365 * date2.year + date2.year / 4 - date2.year / 100 + date2.year / 400 + (153 * date2.month - 457) / 5 + date2.day - 306;
	if (sum < sum1) {
		printf("Ошибка. Вторая дата больше первой.");
	}
	else {
		return sum - sum1;
	}
}