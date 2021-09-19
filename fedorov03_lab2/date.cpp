#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "date.h"

date data;

struct date setDate() {
	printf("Введите день: ");
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

void printDate(date date1) {
	printf("%d.%d.%d", date1.day, date1.month, date1.year);
}


struct date sozdDate() {
	data.day = 19;
	data.month = 9;
	data.year = 2021;
	return data;
}

void letDate(date date1){
	int year1, res;
	printf("\n\nВведите год(<%d):",date1.year);
	while (scanf("%d", &year1) != 1) {
		while (getchar() != '\n');
		if (scanf("%d", &year1) != 1) {
			printf("Ошибка. Введите число: ");
		}
		while (year1 > date1.year) {
			if (scanf("%d", &year1) != date1.year) {
				printf("Вы ввели год больше, чем 2021. Повторите ввод:");
			}
		}
	}
	res=date1.year - year1;
	printf("\n\nКоличество лет прошедших от %d до %d: %d", date1.year, year1, res);
}