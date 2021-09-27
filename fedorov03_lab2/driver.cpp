#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



struct driver setDriver() { //Функция ввода 
	driver drive;
	printf("\nВведите имя: ");
	scanf("%s", drive.name);
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	scanf("%s", drive.lastname);
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	drive.bd=setDate();
	return drive;
}

struct driver sozdDriver(char n[15],char ln[15], date birthdate) { //Функция создания
	driver drive;
	strcpy(drive.name,n);
	strcpy(drive.lastname,ln);
	drive.bd = birthdate;
	return drive;
}

void printDriver(driver drive1) { //Функция вывода
	printf("\nФамилия Имя: %s %s", drive1.lastname, drive1.name);
	printf("\n\nДата рождения: ");
	printDate(drive1.bd);
}