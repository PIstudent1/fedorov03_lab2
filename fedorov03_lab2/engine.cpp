#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



void engine::setEngine() //Метод ввода 
{
	printf("\nВведите серийный номер двигателя: ");
	while (scanf("%d", &this->num) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите мощность двигателя в л.с.: ");
	while (scanf("%d", &this->pw) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	printf("\n\nВведите дату производства:");
	printf("\n");
	this->cd.setDate();
}

void engine::sozdEngine(int n, int pw, date *createdate)   //Метод создания 
{
	this->num = n;
	this->pw = pw;
	this->cd = *createdate;
}

void engine::printEngine()  //Метод вывода 
{
	printf("\n\nСерийный номер двигателя: %d", this->num);
	printf("\n\nМощность двигателя: %d л.с.", this->pw);
	printf("\n\nДата производства: ");
	this->cd.printDate();
}

int engine::kvtEngine() //Метод перевода мощности в кВт
{
	double ls=0.736, res=0;
	res = this->pw * ls;
	return res;
}
