#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



void engine::input() //Метод ввода 
{
	printf("\nВведите серийный номер двигателя: ");
	while (scanf("%d", &num) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите мощность двигателя в л.с.: ");
	while (scanf("%d", &power) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите дату производства:");
	printf("\n");
	createdate.input();
}

engine::engine(int num1, int power1, date createdate1)   //Конструктор с парметрами
{
	if (num1 < 0) {
		num = 0;
	}
	else {
		num = num1;
	}
	if (power1 < 0) {
		power = 0;
	}
	else {
		power = power1;
	}
	createdate = createdate1;
}

engine::engine() {} // Конструктор без параметров

engine::engine(int value) { //Конструктор с одним параметром
	this->num = value;

};

std::ostream& operator<<(std::ostream& out, const engine& engine) {
	out << "\nСерийный номер: " << engine.num << "\nМощность двигателя в л.с.: " << engine.power << "\nДата производства: " << engine.createdate << "";
	return out;
}

int engine::tokvt() //Метод перевода мощности в кВт
{
	double ls=0.736, res=0;
	res = power * ls;
	return res;
}

