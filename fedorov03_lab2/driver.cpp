#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



void driver::setDriver() { //Функция ввода 
	printf("\nВведите имя: ");
	scanf("%s", this->name);
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	scanf("%s", this->lastname);
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	this->bd.setDate();
	
}

void driver::sozdDriver(char n[15],char ln[15], date *birthdate) { //Функция создания
	strcpy(this->name,n);
	strcpy(this->lastname,ln);
	this->bd = *birthdate;
}

void driver::printDriver() { //Функция вывода
	printf("\nФамилия Имя: %s %s", this->lastname, this->name);
	printf("\n\nДата рождения: ");
	this->bd.printDate();
}