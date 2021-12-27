#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "bus.h"
#include <string>
using namespace std;


void bus::input() //метод ввода 
{
	printf("\n\nВведите номер автобуса: ");
	while (scanf("%d", &num) !=1) {
		while (getchar() != '\n');
		printf("ошибка. введите число: ");
	}
	printf("\n\nВведите марку автобуса: ");
	cin >> mark;
	while (getchar() != '\n');
	printf("\n\nВведите данные о двигателе:\n");
	busengine.input();
}

bus::bus(int num, std::string mark, engine busengine) //Конструктор с параметрами
{
	if (num < 0) {
		this->num = 0;
	}

	else {
		this->num = num;
	}
	for (int i = 0; i <= mark.size(); i++) {
		if (mark[i] == '\0') {
			this->mark = mark;
		}
		else {
			this->mark = "-";
		}
	}
	this->busengine = busengine;
}

bus::bus() {};//Конструктор без параметров

bus::bus(int value) { //Конструктор с одним параметром 
	this->num = value;
}

std::ostream& operator<<(std::ostream& out, const bus& bus) {
	out << "\nНомер авобуса: " << bus.num << "\nМарка: " << bus.mark << "\nИнформация о двигателе: " << bus.busengine << "";
	return out;
}

