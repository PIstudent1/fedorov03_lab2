#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <numeric>
#include "date.h"
using namespace std;

void date::setDate() { //����� ����� 
	printf("\n������� ����: ");
	while (scanf("%d", &this->day)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� �����: ");
	while (scanf("%d", &this->month)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���: ");
	while (scanf("%d", &this->year)!=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
}

void date::printDate() { //����� ������ 
	printf("%d.%d.%d", this->day, this->month, this->year);
}


void date::sozdDate(int d, int m, int y) { //����� �������� 
	this->day = d;
	this->month = m;
	this->year = y;
}

int date::letDate(date *date1){  //����� �������� ���� ����� ������
	int sum, sum1;
	if (this->month < 3) {
		this->year--, this->month += 12;
	}
	sum=365 * this->year + this->year / 4 - this->year / 100 + this->year / 400 + (153 * this->month - 457) / 5 + this->day - 306;

	if (date1->month < 3) {
		date1->year--, date1->month += 12;
	}
	sum1 = 365 * date1->year + date1->year / 4 - date1->year / 100 + date1->year / 400 + (153 * date1->month - 457) / 5 + date1->day - 306;
	if (sum < sum1) {
		printf("������. ������ ���� ������ ������.");
	}
	else {
		return sum - sum1;
	}
}