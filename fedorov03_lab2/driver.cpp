#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



void driver::input() { //Метод ввода
	char namecpy[N], lastnamecpy[N];
	printf("\nВведите имя: ");
	scanf("%s", namecpy);
	while (getchar() != '\n');
	name = new char[strlen(namecpy)];
	strcpy(name, namecpy);
	printf("\n\nВведите фамилию: ");
	scanf("%s", lastnamecpy);
	while (getchar() != '\n');
	lastname = new char[strlen(lastnamecpy)];
	strcpy(lastname,lastnamecpy);
	printf("\n\nВведите дату рождения:\n");
	birthdate.input();
	
}

void driver::init(const char name1[N], const char lastname1[N], date birthdate1) { //Метод создания
	name = new char[strlen(name1)];
	for (int i = 0; i <= strlen(name1); i++) {
		if (name1[i] == '\0') {
			strcpy(name, name1);
		}
		else {
			strcpy(name, "-");
		}
	}
	lastname = new char[strlen(lastname1)];
	for (int i = 0; i <= strlen(lastname1); i++) {
		if (lastname1[i] == '\0') {
			strcpy(lastname, lastname1);
		}
		else {
			strcpy(lastname , "-");
		}
	}
	birthdate = birthdate1;
}

void driver::output() { //Метод вывода
	printf("\nФамилия Имя: %s %s", lastname, name);
	printf("\n\nДата рождения: ");
	birthdate.output();
}