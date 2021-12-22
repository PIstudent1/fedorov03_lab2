#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "date.h"
using namespace std;


void date::input() { //����� ����� 
	int input;
	do {
		printf("\n������� ����: ");
		scanf("%d", &input);
		while (getchar() != '\n');
		try {
			if (input < 1 || input > 31) {
				throw - 1;
			}
		}
		catch(...){
			printf("\n������ �����. ��������� ����.");
			input = -1;
		}
	} while (input == -1);
	this->day = input;
	do {
		printf("\n������� �����: ");
		scanf("%d", &input);
		while (getchar() != '\n');	
		try {
			if (input < 1 || input > 12) {
				throw - 1;
			}
		}
		catch (...) {
			printf("\n������ �����. ��������� ����.");
			input = -1;
		}
	} while (input == -1);
	this->month = input;
	do {
		printf("\n������� ���: ");
		scanf("%d", &input);
		while (getchar() != '\n');
		try {
			if (input < 1 || input > 2021) {
				throw - 1;
			}
		}
		catch (...) {
			printf("\n������ �����. ��������� ����.");
			input = -1;
		}
	} while (input == -1);
	this->year = input;
}

void date::output() { //����� ������ 
	printf("%d.%d.%d", day, month, year);
}

date::date(int day1, int month1, int year1) { //����������� � ����������� 
	if (day1 < 1 || day1>31) {
		day = 0;
	}
	else {
		day = day1;
	}
	if (month1 < 1 || month1>12) {
		month = 0;
	}
	else {
		month = month1;
	}
	if (year1 < 1 || year > 2021) {
		year = 0;
	}
	else {
		year = year1;
	}
}

date::date(){} //����������� ��� ����������


date::date(int value){ //����������� � ����� ����������
	this->day = value;
	this->month = value;
	this->year = value;
}


int* date::indays(date &date1){  //����� �������� ����, �������, ��� ����� ������
	int sum, sum1;
	if (this->month < 3) {
		this->year--, this->month += 12;
	}
	sum=365 * this->year + this->year / 4 - this->year / 100 + this->year / 400 + (153 * this->month - 457) / 5 + this->day - 306;

	if (date1.month < 3) {
		date1.year--, date1.month += 12;
	}
	sum1 = 365 * date1.year + date1.year / 4 - date1.year / 100 + date1.year / 400 + (153 * date1.month - 457) / 5 + date1.day - 306;
	if (sum < sum1) {
		printf("������. ������ ���� ������ ������.");
	}
	else {
		int mas[] = { sum - sum1, (sum - sum1) / 30, this->year - date1.year };
		return mas;
	}
}


void reset(date &date) {
	date.day = 0;
	date.month = 0;
	date.year = 0;
}

date date::operator+(int day) { //���������� '+'
	if ((this->day + day)>31) {
		printf("\n���������� ���� �� ����� ���� ������ 31!");
		return date(this->day+0,this->month,this->year);
	}
	else {
		return date(this->day + day, this->month, this->year);
	}
}



date& date::operator++() { // ��������� '++' ����������
	this->year += 5;
	return *this;
}

date date::operator++(int) { //��������� '++' �����������
	date data = *this;
	++*this;
	return data;
}