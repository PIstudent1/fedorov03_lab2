#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::setBus() //метод ввода 
{
	printf("\n\nвведите номер автобуса: ");
	while (scanf("%d", &this->num1) !=1) {
		while (getchar() != '\n');
		printf("ошибка. введите число: ");
	}
	printf("\n\nвведите марку автобуса: ");
	scanf("%s", this->mark);
	while (getchar() != '\n');
	printf("\n\nвведите данные о двигателе:\n");
	this->be.setEngine();
}

void bus::sozdBus(int n, char ma[15], engine *buseng) //метод создания 
{
	this->num1 = n;
	strcpy(this->mark, ma);
	this->be = *buseng;
}

void bus::printBus() //метод вывода
{
	printf("\n\nномер автобуса: %d", this->num1);
	printf("\n\nмарка автобуса: %s", this->mark);
	printf("\n\nданные о двигателе:");
	this->be.printEngine();
}

