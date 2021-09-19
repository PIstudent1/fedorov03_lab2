#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"

driver drive;

struct driver setDriver() {
	printf("\nВведите имя: ");
	scanf("%s", drive.name);
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	scanf("%s", drive.lastname);
	printf("\n");
	drive.bd=setDate();
	return drive;
}

struct driver sozdDriver() {
	strcpy(drive.name,"Иван");
	strcpy(drive.lastname,"Иванов");
	drive.bd = sozdDate();
	return drive;
}

void printDriver(driver drive1) {
	printf("\nФамилия Имя: %s %s", drive1.lastname, drive1.name);
	printf("\n\nДата рождения: ");
	printDate(drive1.bd);
}