#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "date.h"

date data;

struct date setDate() {
	printf("������� ����:");
	while (scanf("%d", &data.day)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� �����:");
	while (scanf("%d", &data.month)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���:");
	while (scanf("%d", &data.year)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
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