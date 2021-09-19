#pragma once

struct date {
	int day;
	int month;
	int year;
};

struct date setDate();
void printDate(date date1);
struct date sozdDate();
void letDate(date date1);