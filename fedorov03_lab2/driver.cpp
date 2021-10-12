#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



void driver::input() { //Метод ввода 
	printf("\nВведите имя: ");
	scanf("%s", name);
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	scanf("%s", lastname);
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	bd.input();
	
}

void driver::create(char n[15],char ln[15], date birthdate) { //Метод создания
	strcpy(name,n);
	strcpy(lastname,ln);
	bd = birthdate;
}

void driver::output() { //Метод вывода
	printf("\nФамилия Имя: %s %s", lastname, name);
	printf("\n\nДата рождения: ");
	bd.output();
}