#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "date.h"
using namespace std;

void date::input() { //ћетод ввода 
	printf("\n¬ведите день: ");
	while (scanf("%d", &day)!=1) {
		while (getchar() != '\n');
		printf("ќшибка. ¬ведите число: ");
	}
	printf("\n\n¬ведите мес€ц: ");
	while (scanf("%d", &month)!=1) {
		while (getchar() != '\n');
		printf("ќшибка. ¬ведите число: ");
	}
	printf("\n\n¬ведите год: ");
	while (scanf("%d", &year)!=1) {
		while (getchar() != '\n');
		printf("ќшибка. ¬ведите число: ");
	}
}

void date::output() { //ћетод вывода 
	printf("%d.%d.%d", day, month, year);
}

void date::init(int day1, int month1, int year1) { //ћетод создани€ 
	if (day1 < 0 || day1>31) {
		day = 0;
	}
	else {
		day = day1;
	}
	if (month1 < 0 || month1>12) {
		month = 0;
	}
	else {
		month = month1;
	}
	if (year1 < 0) {
		year = 0;
	}
	else {
		year = year1;
	}
}

int* date::indays(date &date1){  //ћетод рассчета дней, мес€цев, лет между датами
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
		printf("ќшибка. ¬тора€ дата больше первой.");
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

date date::operator+(int day) {
	if ((this->day + day)>31) {
		printf("\n оличество дней не может быть больше 31!");
		return date(this->day+0,this->month,this->year);
	}
	else {
		return date(this->day + day, this->month, this->year);
	}
}

date::date(int day, int month, int year) {

	this->day = day;
	this->month = month;
	this->year = year;

}

date& date::operator++() {
	year += 5;
	return *this;
}